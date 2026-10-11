#include "Clearwing.h"
#include "arc/audio/Soloud.h"
#include "java/lang/String.h"
#include "java/lang/Object.h"
#include <SDL2/SDL.h>
#include <vorbis/vorbisfile.h>
#include <vector>
#include <string>
#include <unordered_map>
#include <mutex>
#include <cmath>
#include <algorithm>
#include <cstring>
#include <cstdio>

extern "C" {

struct SoundData {
    jlong handle;
    std::vector<int16_t> samples; // 44100Hz stereo interleaved (L, R, L, R)
    size_t totalFrames;          // samples.size() / 2
    double lengthSeconds;
    int maxConcurrent;
};

struct BusData {
    jlong handle;
    int voiceId;
    float volume;
    bool paused;
    bool active;
};

struct Voice {
    int id;
    SoundData* sound;
    jlong busHandle;
    double samplePos; // in frames (0 to totalFrames)
    float volume;
    float pitch;
    float pan;
    bool loop;
    bool paused;
    bool isProtected;
    bool active;
};

static const int MAX_VOICES = 64;
static Voice g_voices[MAX_VOICES];
static std::unordered_map<jlong, SoundData*> g_sounds;
static std::unordered_map<jlong, BusData*> g_buses;
static std::unordered_map<int, BusData*> g_busVoices;
static std::mutex g_audioMutex;
static SDL_AudioDeviceID g_audioDevice = 0;
static bool g_audioInitialized = false;
static jlong g_nextSoundHandle = 1;
static jlong g_nextBusHandle = 0x10000000;
static int g_nextVoiceId = 1;

// Vorbis memory stream callbacks
struct OggMemBuffer {
    const uint8_t* data;
    size_t size;
    size_t pos;
};

static size_t ogg_mem_read(void* ptr, size_t size, size_t nmemb, void* datasource) {
    auto mb = (OggMemBuffer*)datasource;
    size_t bytes_to_read = size * nmemb;
    if (mb->pos + bytes_to_read > mb->size) {
        bytes_to_read = (mb->size > mb->pos) ? (mb->size - mb->pos) : 0;
    }
    if (bytes_to_read > 0) {
        memcpy(ptr, mb->data + mb->pos, bytes_to_read);
        mb->pos += bytes_to_read;
    }
    return bytes_to_read / size;
}

static int ogg_mem_seek(void* datasource, ogg_int64_t offset, int whence) {
    auto mb = (OggMemBuffer*)datasource;
    int64_t target = 0;
    if (whence == SEEK_SET) target = offset;
    else if (whence == SEEK_CUR) target = (int64_t)mb->pos + offset;
    else if (whence == SEEK_END) target = (int64_t)mb->size + offset;
    if (target < 0) target = 0;
    if ((size_t)target > mb->size) target = (int64_t)mb->size;
    mb->pos = (size_t)target;
    return 0;
}

static int ogg_mem_close(void* datasource) { return 0; }

static long ogg_mem_tell(void* datasource) {
    auto mb = (OggMemBuffer*)datasource;
    return (long)mb->pos;
}

static ov_callbacks g_oggCallbacks = {
    ogg_mem_read,
    ogg_mem_seek,
    ogg_mem_close,
    ogg_mem_tell
};

static SoundData* decodeOgg(const uint8_t* data, size_t size) {
    if (!data || size < 4) return nullptr;
    OggMemBuffer mem = { data, size, 0 };
    OggVorbis_File vf;
    int res = ov_open_callbacks(&mem, &vf, NULL, 0, g_oggCallbacks);
    if (res != 0) {
        printf("[Audio:Ogg] ov_open_callbacks error %d (size=%zu)\n", res, size);
        fflush(stdout);
        return nullptr;
    }

    vorbis_info* vi = ov_info(&vf, -1);
    if (!vi) {
        ov_clear(&vf);
        return nullptr;
    }

    int inChannels = vi->channels;
    int inRate = vi->rate;

    std::vector<int16_t> rawSamples;
    char buffer[4096];
    int bitstream;
    long bytesRead;
    while ((bytesRead = ov_read(&vf, buffer, sizeof(buffer), 0, 2, 1, &bitstream)) > 0) {
        int sampleCount = bytesRead / sizeof(int16_t);
        int16_t* pcm = (int16_t*)buffer;
        rawSamples.insert(rawSamples.end(), pcm, pcm + sampleCount);
    }
    ov_clear(&vf);

    if (rawSamples.empty() || inChannels <= 0 || inRate <= 0) return nullptr;

    auto snd = new SoundData();
    snd->handle = g_nextSoundHandle++;
    snd->maxConcurrent = 6;

    // Convert/Resample to 44100Hz Stereo
    size_t inFrames = rawSamples.size() / inChannels;
    if (inRate == 44100 && inChannels == 2) {
        snd->samples = std::move(rawSamples);
        snd->totalFrames = inFrames;
    } else {
        double ratio = 44100.0 / (double)inRate;
        size_t outFrames = (size_t)(inFrames * ratio);
        snd->samples.resize(outFrames * 2);
        snd->totalFrames = outFrames;

        for (size_t i = 0; i < outFrames; i++) {
            double srcFrame = (double)i / ratio;
            size_t idx0 = (size_t)srcFrame;
            size_t idx1 = (idx0 + 1 < inFrames) ? (idx0 + 1) : idx0;
            float frac = (float)(srcFrame - idx0);

            if (inChannels == 1) {
                float s0 = (float)rawSamples[idx0];
                float s1 = (float)rawSamples[idx1];
                int16_t sample = (int16_t)(s0 + (s1 - s0) * frac);
                snd->samples[i * 2] = sample;
                snd->samples[i * 2 + 1] = sample;
            } else {
                float l0 = (float)rawSamples[idx0 * inChannels];
                float l1 = (float)rawSamples[idx1 * inChannels];
                float r0 = (float)rawSamples[idx0 * inChannels + 1];
                float r1 = (float)rawSamples[idx1 * inChannels + 1];
                snd->samples[i * 2] = (int16_t)(l0 + (l1 - l0) * frac);
                snd->samples[i * 2 + 1] = (int16_t)(r0 + (r1 - r0) * frac);
            }
        }
    }

    snd->lengthSeconds = (double)snd->totalFrames / 44100.0;
    return snd;
}

static SoundData* decodeWav(const uint8_t* data, size_t size) {
    if (!data || size < 44) return nullptr;
    if (memcmp(data, "RIFF", 4) != 0 || memcmp(data + 8, "WAVE", 4) != 0) {
        return nullptr;
    }

    size_t pos = 12;
    int channels = 0;
    int sampleRate = 0;
    int bitsPerSample = 0;
    const uint8_t* pcmData = nullptr;
    size_t pcmSize = 0;

    while (pos + 8 <= size) {
        const char* chunkId = (const char*)(data + pos);
        uint32_t chunkSize = *(const uint32_t*)(data + pos + 4);
        pos += 8;
        if (memcmp(chunkId, "fmt ", 4) == 0 && chunkSize >= 16) {
            uint16_t format = *(const uint16_t*)(data + pos);
            if (format != 1) return nullptr;
            channels = *(const uint16_t*)(data + pos + 2);
            sampleRate = *(const uint32_t*)(data + pos + 4);
            bitsPerSample = *(const uint16_t*)(data + pos + 14);
        } else if (memcmp(chunkId, "data", 4) == 0) {
            pcmData = data + pos;
            pcmSize = chunkSize;
        }
        pos += chunkSize;
    }

    if (!pcmData || channels <= 0 || sampleRate <= 0 || bitsPerSample != 16) {
        return nullptr;
    }

    size_t inFrames = pcmSize / (channels * sizeof(int16_t));
    const int16_t* inSamples = (const int16_t*)pcmData;

    auto snd = new SoundData();
    snd->handle = g_nextSoundHandle++;
    snd->maxConcurrent = 6;

    double ratio = 44100.0 / (double)sampleRate;
    size_t outFrames = (size_t)(inFrames * ratio);
    snd->samples.resize(outFrames * 2);
    snd->totalFrames = outFrames;

    for (size_t i = 0; i < outFrames; i++) {
        double srcFrame = (double)i / ratio;
        size_t idx0 = (size_t)srcFrame;
        size_t idx1 = (idx0 + 1 < inFrames) ? (idx0 + 1) : idx0;
        float frac = (float)(srcFrame - idx0);

        if (channels == 1) {
            float s0 = (float)inSamples[idx0];
            float s1 = (float)inSamples[idx1];
            int16_t sample = (int16_t)(s0 + (s1 - s0) * frac);
            snd->samples[i * 2] = sample;
            snd->samples[i * 2 + 1] = sample;
        } else {
            float l0 = (float)inSamples[idx0 * channels];
            float l1 = (float)inSamples[idx1 * channels];
            float r0 = (float)inSamples[idx0 * channels + 1];
            float r1 = (float)inSamples[idx1 * channels + 1];
            snd->samples[i * 2] = (int16_t)(l0 + (l1 - l0) * frac);
            snd->samples[i * 2 + 1] = (int16_t)(r0 + (r1 - r0) * frac);
        }
    }

    snd->lengthSeconds = (double)snd->totalFrames / 44100.0;
    return snd;
}

static SoundData* loadAudioFromMemory(const uint8_t* data, size_t size) {
    if (!data || size < 4) return nullptr;
    if (size >= 4 && memcmp(data, "OggS", 4) == 0) {
        return decodeOgg(data, size);
    }
    if (size >= 4 && memcmp(data, "RIFF", 4) == 0) {
        return decodeWav(data, size);
    }
    SoundData* s = decodeOgg(data, size);
    if (s) return s;
    return decodeWav(data, size);
}

static SoundData* loadAudioFromFile(const char* path) {
    if (!path || !path[0]) return nullptr;
    std::string p = path;
    FILE* f = fopen(p.c_str(), "rb");
    if (!f && p.rfind("romfs:/", 0) != 0) {
        std::string rp = "romfs:/" + (p[0] == '/' ? p.substr(1) : p);
        f = fopen(rp.c_str(), "rb");
    }
    if (!f) {
        std::string rp = "romfs:/sounds/" + p;
        f = fopen(rp.c_str(), "rb");
    }
    if (!f) {
        std::string rp = "romfs:/music/" + p;
        f = fopen(rp.c_str(), "rb");
    }
    if (!f) {
        // Strip leading slashes if any
        size_t non_slash = p.find_first_not_of('/');
        if (non_slash != std::string::npos) {
            std::string rp = "romfs:/" + p.substr(non_slash);
            f = fopen(rp.c_str(), "rb");
        }
    }
    if (!f) {
        printf("[Audio] Could not open audio file: %s\n", path);
        fflush(stdout);
        return nullptr;
    }

    fseek(f, 0, SEEK_END);
    long size = ftell(f);
    fseek(f, 0, SEEK_SET);
    if (size <= 0) {
        fclose(f);
        return nullptr;
    }

    std::vector<uint8_t> buffer(size);
    size_t read = fread(buffer.data(), 1, size, f);
    fclose(f);

    return loadAudioFromMemory(buffer.data(), read);
}

// Real-time audio mixer callback
static int g_actualFreq = 48000;

static void switch_audio_callback(void* userdata, Uint8* stream, int len) {
    int numFrames = len / (2 * sizeof(int16_t));
    int16_t* out = (int16_t*)stream;
    memset(stream, 0, len);

    static int32_t mixBuffer[4096][2];
    if (numFrames > 4096) numFrames = 4096;
    for (int i = 0; i < numFrames; i++) {
        mixBuffer[i][0] = 0;
        mixBuffer[i][1] = 0;
    }

    std::lock_guard<std::mutex> lock(g_audioMutex);
    double speedRatio = 44100.0 / (double)g_actualFreq;

    for (int vi = 0; vi < MAX_VOICES; vi++) {
        Voice& v = g_voices[vi];
        if (!v.active || v.paused || !v.sound) continue;

        // Check if bus is paused or muted
        float busVol = 1.0f;
        if (v.busHandle != 0) {
            auto it = g_buses.find(v.busHandle);
            if (it != g_buses.end()) {
                if (it->second->paused) continue;
                busVol = (it->second->volume > 0.001f) ? it->second->volume : 1.0f;
            }
        }

        SoundData* snd = v.sound;
        if (!snd || snd->totalFrames == 0) {
            v.active = false;
            continue;
        }

        float voiceVol = (v.volume > 0.0001f) ? v.volume : 1.0f;
        float totalVol = voiceVol * busVol;
        if (totalVol <= 0.0001f) {
            float pitch = (v.pitch > 0.05f) ? v.pitch : 1.0f;
            v.samplePos += pitch * speedRatio * numFrames;
            if (v.samplePos >= (double)snd->totalFrames) {
                if (v.loop) {
                    v.samplePos = fmod(v.samplePos, (double)snd->totalFrames);
                } else {
                    v.active = false;
                }
            }
            continue;
        }

        float lvol = totalVol * (v.pan <= 0.0f ? 1.0f : (1.0f - v.pan));
        float rvol = totalVol * (v.pan >= 0.0f ? 1.0f : (1.0f + v.pan));
        float pitch = (v.pitch > 0.05f) ? v.pitch : 1.0f;
        double step = pitch * speedRatio;

        for (int i = 0; i < numFrames; i++) {
            size_t fidx = (size_t)v.samplePos;
            if (fidx >= snd->totalFrames) {
                if (v.loop && snd->totalFrames > 0) {
                    v.samplePos = 0.0;
                    fidx = 0;
                } else {
                    v.active = false;
                    break;
                }
            }

            int16_t sL = snd->samples[fidx * 2];
            int16_t sR = snd->samples[fidx * 2 + 1];

            mixBuffer[i][0] += (int32_t)(sL * lvol);
            mixBuffer[i][1] += (int32_t)(sR * rvol);

            v.samplePos += step;
        }
    }

    // Output with soft limiting
    for (int i = 0; i < numFrames; i++) {
        int32_t l = mixBuffer[i][0];
        int32_t r = mixBuffer[i][1];
        if (l > 32767) l = 32767;
        else if (l < -32768) l = -32768;
        if (r > 32767) r = 32767;
        else if (r < -32768) r = -32768;
        out[i * 2] = (int16_t)l;
        out[i * 2 + 1] = (int16_t)r;
    }
}

// SoLoud Native API Implementations
void SM_arc_audio_Soloud_init(jcontext ctx) {
    if (g_audioInitialized) return;
    if (SDL_InitSubSystem(SDL_INIT_AUDIO) < 0) {
        printf("[Audio] SDL_InitSubSystem(AUDIO) error: %s\n", SDL_GetError());
    }
    SDL_AudioSpec want, have;
    SDL_zero(want);
    want.freq = 48000;
    want.format = AUDIO_S16SYS;
    want.channels = 2;
    want.samples = 1024;
    want.callback = switch_audio_callback;

    g_audioDevice = SDL_OpenAudioDevice(NULL, 0, &want, &have, SDL_AUDIO_ALLOW_ANY_CHANGE);
    if (g_audioDevice == 0) {
        printf("[Audio] SDL_OpenAudioDevice failed: %s. Trying SDL_OpenAudio fallback...\n", SDL_GetError());
        if (SDL_OpenAudio(&want, &have) >= 0) {
            g_audioDevice = 1;
            SDL_PauseAudio(0);
            g_audioInitialized = true;
            printf("[Audio] Switch native audio initialized with SDL_OpenAudio (%dHz, %d channels, %d samples)\n",
                   have.freq, have.channels, have.samples);
        } else {
            printf("[Audio] All SDL audio open methods failed: %s\n", SDL_GetError());
        }
    } else {
        SDL_PauseAudioDevice(g_audioDevice, 0);
        SDL_PauseAudio(0);
        g_audioInitialized = true;
        printf("[Audio] Switch native audio initialized successfully (%dHz, %d channels, %d samples)\n",
               have.freq, have.channels, have.samples);
    }

    if (g_audioInitialized) {
        g_actualFreq = (have.freq > 0) ? have.freq : 48000;
    }
    fflush(stdout);
}

void SM_arc_audio_Soloud_deinit(jcontext ctx) {
    if (g_audioDevice != 0) {
        SDL_CloseAudioDevice(g_audioDevice);
        g_audioDevice = 0;
    }
    g_audioInitialized = false;
}

jobject SM_arc_audio_Soloud_backendString_R_java_lang_String(jcontext ctx) {
    return (jobject) createStringLiteral(ctx, u8"Switch SDL2 Audio"_j);
}

jint SM_arc_audio_Soloud_backendId_R_int(jcontext ctx) {
    return 1;
}

jint SM_arc_audio_Soloud_backendChannels_R_int(jcontext ctx) {
    return 2;
}

jint SM_arc_audio_Soloud_backendSamplerate_R_int(jcontext ctx) {
    return g_actualFreq;
}

jint SM_arc_audio_Soloud_backendBufferSize_R_int(jcontext ctx) {
    return 1024;
}

jint SM_arc_audio_Soloud_version_R_int(jcontext ctx) {
    return 202001;
}

jint SM_arc_audio_Soloud_activeVoiceCount_R_int(jcontext ctx) {
    std::lock_guard<std::mutex> lock(g_audioMutex);
    int count = 0;
    for (int i = 0; i < MAX_VOICES; i++) {
        if (g_voices[i].active) count++;
    }
    return count;
}

void SM_arc_audio_Soloud_stopAll(jcontext ctx) {
    std::lock_guard<std::mutex> lock(g_audioMutex);
    for (int i = 0; i < MAX_VOICES; i++) {
        g_voices[i].active = false;
    }
}

void SM_arc_audio_Soloud_pauseAll_boolean(jcontext ctx, jbool param0) {
    std::lock_guard<std::mutex> lock(g_audioMutex);
    for (int i = 0; i < MAX_VOICES; i++) {
        if (g_voices[i].active) {
            g_voices[i].paused = (bool)param0;
        }
    }
}

jlong SM_arc_audio_Soloud_wavLoadFile_java_lang_String_R_long(jcontext ctx, jobject param0) {
    if (!param0) return 0;
    std::string path = stringToNative(ctx, (jstring)param0);
    SoundData* snd = loadAudioFromFile(path.c_str());
    if (!snd) return 0;
    std::lock_guard<std::mutex> lock(g_audioMutex);
    g_sounds[snd->handle] = snd;
    return snd->handle;
}

jlong SM_arc_audio_Soloud_streamLoadFile_java_lang_String_R_long(jcontext ctx, jobject param0) {
    return SM_arc_audio_Soloud_wavLoadFile_java_lang_String_R_long(ctx, param0);
}

jlong SM_arc_audio_Soloud_wavLoadBytes_Array1_byte_int_R_long(jcontext ctx, jobject param0, jint param1) {
    if (!param0 || param1 <= 0) return 0;
    auto arr = (Array*)param0;
    SoundData* snd = loadAudioFromMemory((const uint8_t*)arr->data, (size_t)param1);
    if (!snd) return 0;
    std::lock_guard<std::mutex> lock(g_audioMutex);
    g_sounds[snd->handle] = snd;
    return snd->handle;
}

jlong SM_arc_audio_Soloud_streamLoadBytes_Array1_byte_int_R_long(jcontext ctx, jobject param0, jint param1) {
    return SM_arc_audio_Soloud_wavLoadBytes_Array1_byte_int_R_long(ctx, param0, param1);
}

jdouble SM_arc_audio_Soloud_wavLength_long_R_double(jcontext ctx, jlong param0) {
    std::lock_guard<std::mutex> lock(g_audioMutex);
    auto it = g_sounds.find(param0);
    if (it != g_sounds.end()) return (jdouble)it->second->lengthSeconds;
    return 0.0;
}

jdouble SM_arc_audio_Soloud_streamLength_long_R_double(jcontext ctx, jlong param0) {
    return SM_arc_audio_Soloud_wavLength_long_R_double(ctx, param0);
}

void SM_arc_audio_Soloud_sourceDestroy_long(jcontext ctx, jlong param0) {
    std::lock_guard<std::mutex> lock(g_audioMutex);
    auto it = g_sounds.find(param0);
    if (it != g_sounds.end()) {
        for (int i = 0; i < MAX_VOICES; i++) {
            if (g_voices[i].sound == it->second) {
                g_voices[i].active = false;
                g_voices[i].sound = nullptr;
            }
        }
        delete it->second;
        g_sounds.erase(it);
    }
    auto bit = g_buses.find(param0);
    if (bit != g_buses.end()) {
        g_busVoices.erase(bit->second->voiceId);
        delete bit->second;
        g_buses.erase(bit);
    }
}

jlong SM_arc_audio_Soloud_busNew_R_long(jcontext ctx) {
    std::lock_guard<std::mutex> lock(g_audioMutex);
    auto bus = new BusData();
    bus->handle = g_nextBusHandle++;
    bus->voiceId = 0;
    bus->volume = 1.0f;
    bus->paused = false;
    bus->active = true;
    g_buses[bus->handle] = bus;
    return bus->handle;
}

jint SM_arc_audio_Soloud_sourcePlay_long_R_int(jcontext ctx, jlong param0) {
    return SM_arc_audio_Soloud_sourcePlay_long_float_float_float_boolean_R_int(ctx, param0, 1.0f, 1.0f, 0.0f, 0);
}

jint SM_arc_audio_Soloud_sourcePlay_long_float_float_float_boolean_R_int(jcontext ctx, jlong param0, jfloat param1, jfloat param2, jfloat param3, jbool param4) {
    std::lock_guard<std::mutex> lock(g_audioMutex);

    // Check if playing a Bus
    auto bit = g_buses.find(param0);
    if (bit != g_buses.end()) {
        BusData* bus = bit->second;
        bus->active = true;
        bus->volume = (float)param1;
        bus->paused = false;
        int vId = g_nextVoiceId++;
        if (g_nextVoiceId <= 0) g_nextVoiceId = 1;
        bus->voiceId = vId;
        g_busVoices[vId] = bus;
        return vId;
    }

    // Otherwise playing a SoundData
    auto it = g_sounds.find(param0);
    if (it == g_sounds.end() || !it->second) return 0;
    SoundData* snd = it->second;

    // Check concurrency limit for this sound
    if (snd->maxConcurrent > 0) {
        int count = 0;
        int oldestSlot = -1;
        double maxPos = -1.0;
        for (int i = 0; i < MAX_VOICES; i++) {
            if (g_voices[i].active && g_voices[i].sound == snd) {
                count++;
                if (g_voices[i].samplePos > maxPos && !g_voices[i].isProtected) {
                    maxPos = g_voices[i].samplePos;
                    oldestSlot = i;
                }
            }
        }
        if (count >= snd->maxConcurrent && oldestSlot != -1) {
            // Steal the oldest instance of this sound
            g_voices[oldestSlot].active = false;
        }
    }

    int slot = -1;
    for (int i = 0; i < MAX_VOICES; i++) {
        if (!g_voices[i].active) {
            slot = i;
            break;
        }
    }
    if (slot == -1) {
        for (int i = 0; i < MAX_VOICES; i++) {
            if (!g_voices[i].isProtected) {
                slot = i;
                break;
            }
        }
    }
    if (slot == -1) slot = 0;

    Voice& v = g_voices[slot];
    int vId = g_nextVoiceId++;
    if (g_nextVoiceId <= 0) g_nextVoiceId = 1;

    v.id = vId;
    v.sound = snd;
    v.busHandle = 0;
    v.samplePos = 0.0;
    v.volume = (float)param1;
    v.pitch = (float)param2;
    v.pan = (float)param3;
    v.loop = (bool)param4;
    v.paused = false;
    v.isProtected = false;
    v.active = true;

    return vId;
}

jint SM_arc_audio_Soloud_sourcePlayBus_long_long_float_float_float_boolean_R_int(jcontext ctx, jlong param0, jlong param1, jfloat param2, jfloat param3, jfloat param4, jbool param5) {
    std::lock_guard<std::mutex> lock(g_audioMutex);

    // param0 is sound handle, param1 is bus handle
    auto it = g_sounds.find(param0);
    if (it == g_sounds.end() || !it->second) return 0;
    SoundData* snd = it->second;

    // Check concurrency limit for this sound
    if (snd->maxConcurrent > 0) {
        int count = 0;
        int oldestSlot = -1;
        double maxPos = -1.0;
        for (int i = 0; i < MAX_VOICES; i++) {
            if (g_voices[i].active && g_voices[i].sound == snd) {
                count++;
                if (g_voices[i].samplePos > maxPos && !g_voices[i].isProtected) {
                    maxPos = g_voices[i].samplePos;
                    oldestSlot = i;
                }
            }
        }
        if (count >= snd->maxConcurrent && oldestSlot != -1) {
            g_voices[oldestSlot].active = false;
        }
    }

    int slot = -1;
    for (int i = 0; i < MAX_VOICES; i++) {
        if (!g_voices[i].active) {
            slot = i;
            break;
        }
    }
    if (slot == -1) {
        for (int i = 0; i < MAX_VOICES; i++) {
            if (!g_voices[i].isProtected) {
                slot = i;
                break;
            }
        }
    }
    if (slot == -1) slot = 0;

    Voice& v = g_voices[slot];
    int vId = g_nextVoiceId++;
    if (g_nextVoiceId <= 0) g_nextVoiceId = 1;

    v.id = vId;
    v.sound = snd;
    v.busHandle = param1;
    v.samplePos = 0.0;
    v.volume = (float)param2;
    v.pitch = (float)param3;
    v.pan = (float)param4;
    v.loop = (bool)param5;
    v.paused = false;
    v.isProtected = false;
    v.active = true;

    return vId;
}

void SM_arc_audio_Soloud_idVolume_int_float(jcontext ctx, jint param0, jfloat param1) {
    std::lock_guard<std::mutex> lock(g_audioMutex);
    auto bit = g_busVoices.find(param0);
    if (bit != g_busVoices.end()) {
        bit->second->volume = (float)param1;
        return;
    }
    for (int i = 0; i < MAX_VOICES; i++) {
        if (g_voices[i].active && g_voices[i].id == param0) {
            g_voices[i].volume = (float)param1;
            break;
        }
    }
}

jfloat SM_arc_audio_Soloud_idGetVolume_int_R_float(jcontext ctx, jint param0) {
    std::lock_guard<std::mutex> lock(g_audioMutex);
    auto bit = g_busVoices.find(param0);
    if (bit != g_busVoices.end()) {
        return (jfloat)bit->second->volume;
    }
    for (int i = 0; i < MAX_VOICES; i++) {
        if (g_voices[i].active && g_voices[i].id == param0) {
            return (jfloat)g_voices[i].volume;
        }
    }
    return 0.0f;
}

void SM_arc_audio_Soloud_idPitch_int_float(jcontext ctx, jint param0, jfloat param1) {
    std::lock_guard<std::mutex> lock(g_audioMutex);
    for (int i = 0; i < MAX_VOICES; i++) {
        if (g_voices[i].active && g_voices[i].id == param0) {
            g_voices[i].pitch = (float)param1;
            break;
        }
    }
}

void SM_arc_audio_Soloud_idPan_int_float(jcontext ctx, jint param0, jfloat param1) {
    std::lock_guard<std::mutex> lock(g_audioMutex);
    for (int i = 0; i < MAX_VOICES; i++) {
        if (g_voices[i].active && g_voices[i].id == param0) {
            g_voices[i].pan = (float)param1;
            break;
        }
    }
}

void SM_arc_audio_Soloud_idPause_int_boolean(jcontext ctx, jint param0, jbool param1) {
    std::lock_guard<std::mutex> lock(g_audioMutex);
    auto bit = g_busVoices.find(param0);
    if (bit != g_busVoices.end()) {
        bit->second->paused = (bool)param1;
        return;
    }
    for (int i = 0; i < MAX_VOICES; i++) {
        if (g_voices[i].active && g_voices[i].id == param0) {
            g_voices[i].paused = (bool)param1;
            break;
        }
    }
}

jbool SM_arc_audio_Soloud_idGetPause_int_R_boolean(jcontext ctx, jint param0) {
    std::lock_guard<std::mutex> lock(g_audioMutex);
    auto bit = g_busVoices.find(param0);
    if (bit != g_busVoices.end()) {
        return bit->second->paused ? 1 : 0;
    }
    for (int i = 0; i < MAX_VOICES; i++) {
        if (g_voices[i].active && g_voices[i].id == param0) {
            return g_voices[i].paused ? 1 : 0;
        }
    }
    return 0;
}

void SM_arc_audio_Soloud_idStop_int(jcontext ctx, jint param0) {
    std::lock_guard<std::mutex> lock(g_audioMutex);
    auto bit = g_busVoices.find(param0);
    if (bit != g_busVoices.end()) {
        bit->second->active = false;
        // Stop all voices on this bus
        for (int i = 0; i < MAX_VOICES; i++) {
            if (g_voices[i].active && g_voices[i].busHandle == bit->second->handle) {
                g_voices[i].active = false;
            }
        }
        return;
    }
    for (int i = 0; i < MAX_VOICES; i++) {
        if (g_voices[i].active && g_voices[i].id == param0) {
            g_voices[i].active = false;
            break;
        }
    }
}

void SM_arc_audio_Soloud_idSeek_int_float(jcontext ctx, jint param0, jfloat param1) {
    std::lock_guard<std::mutex> lock(g_audioMutex);
    for (int i = 0; i < MAX_VOICES; i++) {
        if (g_voices[i].active && g_voices[i].id == param0) {
            g_voices[i].samplePos = (double)param1 * 44100.0;
            break;
        }
    }
}

jfloat SM_arc_audio_Soloud_idPosition_int_R_float(jcontext ctx, jint param0) {
    std::lock_guard<std::mutex> lock(g_audioMutex);
    for (int i = 0; i < MAX_VOICES; i++) {
        if (g_voices[i].active && g_voices[i].id == param0) {
            return (jfloat)(g_voices[i].samplePos / 44100.0);
        }
    }
    return 0.0f;
}

jbool SM_arc_audio_Soloud_idValid_int_R_boolean(jcontext ctx, jint param0) {
    std::lock_guard<std::mutex> lock(g_audioMutex);
    auto bit = g_busVoices.find(param0);
    if (bit != g_busVoices.end()) {
        return bit->second->active ? 1 : 0;
    }
    for (int i = 0; i < MAX_VOICES; i++) {
        if (g_voices[i].active && g_voices[i].id == param0) {
            return 1;
        }
    }
    return 0;
}

void SM_arc_audio_Soloud_idProtected_int_boolean(jcontext ctx, jint param0, jbool param1) {
    std::lock_guard<std::mutex> lock(g_audioMutex);
    for (int i = 0; i < MAX_VOICES; i++) {
        if (g_voices[i].active && g_voices[i].id == param0) {
            g_voices[i].isProtected = (bool)param1;
            break;
        }
    }
}

void SM_arc_audio_Soloud_idLooping_int_boolean(jcontext ctx, jint param0, jbool param1) {
    std::lock_guard<std::mutex> lock(g_audioMutex);
    for (int i = 0; i < MAX_VOICES; i++) {
        if (g_voices[i].active && g_voices[i].id == param0) {
            g_voices[i].loop = (bool)param1;
            break;
        }
    }
}

jbool SM_arc_audio_Soloud_idGetLooping_int_R_boolean(jcontext ctx, jint param0) {
    std::lock_guard<std::mutex> lock(g_audioMutex);
    for (int i = 0; i < MAX_VOICES; i++) {
        if (g_voices[i].active && g_voices[i].id == param0) {
            return g_voices[i].loop ? 1 : 0;
        }
    }
    return 0;
}

void SM_arc_audio_Soloud_sourceStop_long(jcontext ctx, jlong param0) {
    std::lock_guard<std::mutex> lock(g_audioMutex);
    for (int i = 0; i < MAX_VOICES; i++) {
        if (g_voices[i].active) {
            if ((g_voices[i].sound && g_voices[i].sound->handle == param0) || g_voices[i].busHandle == param0) {
                g_voices[i].active = false;
            }
        }
    }
    auto bit = g_buses.find(param0);
    if (bit != g_buses.end()) {
        bit->second->active = false;
    }
}

jint SM_arc_audio_Soloud_sourceCount_long_R_int(jcontext ctx, jlong param0) {
    std::lock_guard<std::mutex> lock(g_audioMutex);
    int count = 0;
    for (int i = 0; i < MAX_VOICES; i++) {
        if (g_voices[i].active) {
            if ((g_voices[i].sound && g_voices[i].sound->handle == param0) || g_voices[i].busHandle == param0) {
                count++;
            }
        }
    }
    return count;
}

void SM_arc_audio_Soloud_sourceMaxConcurrent_long_int(jcontext ctx, jlong param0, jint param1) {
    std::lock_guard<std::mutex> lock(g_audioMutex);
    auto it = g_sounds.find(param0);
    if (it != g_sounds.end()) {
        it->second->maxConcurrent = (int)param1;
    }
}

jint SM_arc_audio_Soloud_pauseDevice_R_int(jcontext ctx) {
    if (g_audioDevice) SDL_PauseAudioDevice(g_audioDevice, 1);
    return 0;
}

jint SM_arc_audio_Soloud_resumeDevice_R_int(jcontext ctx) {
    if (g_audioDevice) SDL_PauseAudioDevice(g_audioDevice, 0);
    return 0;
}

// DSP / Filters Stubs
void SM_arc_audio_Soloud_biquadSet_long_int_float_float(jcontext ctx, jlong param0, jint param1, jfloat param2, jfloat param3) {}
void SM_arc_audio_Soloud_echoSet_long_float_float_float(jcontext ctx, jlong param0, jfloat param1, jfloat param2, jfloat param3) {}
void SM_arc_audio_Soloud_lofiSet_long_float_float(jcontext ctx, jlong param0, jfloat param1, jfloat param2) {}
void SM_arc_audio_Soloud_flangerSet_long_float_float(jcontext ctx, jlong param0, jfloat param1, jfloat param2) {}
void SM_arc_audio_Soloud_waveShaperSet_long_float(jcontext ctx, jlong param0, jfloat param1) {}
void SM_arc_audio_Soloud_bassBoostSet_long_float(jcontext ctx, jlong param0, jfloat param1) {}
void SM_arc_audio_Soloud_robotizeSet_long_float_int(jcontext ctx, jlong param0, jfloat param1, jint param2) {}
void SM_arc_audio_Soloud_freeverbSet_long_float_float_float_float(jcontext ctx, jlong param0, jfloat param1, jfloat param2, jfloat param3, jfloat param4) {}
jlong SM_arc_audio_Soloud_filterBiquad_R_long(jcontext ctx) { return 1; }
jlong SM_arc_audio_Soloud_filterEcho_R_long(jcontext ctx) { return 2; }
jlong SM_arc_audio_Soloud_filterLofi_R_long(jcontext ctx) { return 3; }
jlong SM_arc_audio_Soloud_filterFlanger_R_long(jcontext ctx) { return 4; }
jlong SM_arc_audio_Soloud_filterBassBoost_R_long(jcontext ctx) { return 5; }
jlong SM_arc_audio_Soloud_filterWaveShaper_R_long(jcontext ctx) { return 6; }
jlong SM_arc_audio_Soloud_filterRobotize_R_long(jcontext ctx) { return 7; }
jlong SM_arc_audio_Soloud_filterFreeverb_R_long(jcontext ctx) { return 8; }
void SM_arc_audio_Soloud_setGlobalFilter_int_long(jcontext ctx, jint param0, jlong param1) {}
void SM_arc_audio_Soloud_filterFade_int_int_int_float_float(jcontext ctx, jint param0, jint param1, jint param2, jfloat param3, jfloat param4) {}
void SM_arc_audio_Soloud_filterSet_int_int_int_float(jcontext ctx, jint param0, jint param1, jint param2, jfloat param3) {}
void SM_arc_audio_Soloud_sourceInaudible_long_boolean_boolean(jcontext ctx, jlong param0, jbool param1, jbool param2) {}
void SM_arc_audio_Soloud_sourcePriority_long_float(jcontext ctx, jlong param0, jfloat param1) {}
void SM_arc_audio_Soloud_sourceMinConcurrentInterrupt_long_float(jcontext ctx, jlong param0, jfloat param1) {}
void SM_arc_audio_Soloud_sourceConcurrentGroup_long_int(jcontext ctx, jlong param0, jint param1) {}
void SM_arc_audio_Soloud_sourceLoop_long_boolean(jcontext ctx, jlong param0, jbool param1) {}
void SM_arc_audio_Soloud_sourceSingleInstance_long_boolean(jcontext ctx, jlong param0, jbool param1) {}
void SM_arc_audio_Soloud_sourceFilter_long_int_long(jcontext ctx, jlong param0, jint param1, jlong param2) {}

}
