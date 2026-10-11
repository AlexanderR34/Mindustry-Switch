#ifndef HEADER_arc_audio_Audio
#define HEADER_arc_audio_Audio

#include "Clearwing.h"
#include "java/lang/Object.h"
#include "arc/util/Disposable.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct arc_audio_Audio {
	java_lang_Object parent;
	jfloat F_globalPitch;
	jfloat F_falloff;
	jint F_defaultSoundMaxConcurrent;
	jbool F_initialized;
	jfloat F_sfxVolume;
	jref F_soundBus;
	jref F_musicBus;
} arc_audio_Audio;

extern Class class_arc_audio_Audio;


#define VTABLE_arc_audio_Audio_hashCode_R_int 0
typedef jint (*func_arc_audio_Audio_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_arc_audio_Audio_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_arc_audio_Audio_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_audio_Audio_clone_R_java_lang_Object 2
typedef jobject (*func_arc_audio_Audio_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_arc_audio_Audio_getClass_R_java_lang_Class 3
typedef jobject (*func_arc_audio_Audio_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_arc_audio_Audio_toString_R_java_lang_String 4
typedef jobject (*func_arc_audio_Audio_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_arc_audio_Audio_finalize 5
typedef void (*func_arc_audio_Audio_finalize)(jcontext ctx, jobject self);
#define VTABLE_arc_audio_Audio_notify 6
typedef void (*func_arc_audio_Audio_notify)(jcontext ctx, jobject self);
#define VTABLE_arc_audio_Audio_notifyAll 7
typedef void (*func_arc_audio_Audio_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_arc_audio_Audio_wait 8
typedef void (*func_arc_audio_Audio_wait)(jcontext ctx, jobject self);
#define VTABLE_arc_audio_Audio_wait_long 9
typedef void (*func_arc_audio_Audio_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_arc_audio_Audio_wait_long_int 10
typedef void (*func_arc_audio_Audio_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);
#define VTABLE_arc_audio_Audio_dispose 11
typedef void (*func_arc_audio_Audio_dispose)(jcontext ctx, jobject self);
#define VTABLE_arc_audio_Audio_isDisposed_R_boolean 12
typedef jbool (*func_arc_audio_Audio_isDisposed_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_arc_audio_Audio_initialized_R_boolean 13
typedef jbool (*func_arc_audio_Audio_initialized_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_arc_audio_Audio_initialize 14
typedef void (*func_arc_audio_Audio_initialize)(jcontext ctx, jobject self);
#define VTABLE_arc_audio_Audio_newSound_arc_files_Fi_R_arc_audio_Sound 15
typedef jobject (*func_arc_audio_Audio_newSound_arc_files_Fi_R_arc_audio_Sound)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_audio_Audio_newMusic_arc_files_Fi_R_arc_audio_Music 16
typedef jobject (*func_arc_audio_Audio_newMusic_arc_files_Fi_R_arc_audio_Music)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_audio_Audio_isPlaying_int_R_boolean 17
typedef jbool (*func_arc_audio_Audio_isPlaying_int_R_boolean)(jcontext ctx, jobject self, jint param0);
#define VTABLE_arc_audio_Audio_protect_int_boolean 18
typedef void (*func_arc_audio_Audio_protect_int_boolean)(jcontext ctx, jobject self, jint param0, jbool param1);
#define VTABLE_arc_audio_Audio_play_arc_audio_AudioSource_float_float_float_boolean_R_int 19
typedef jint (*func_arc_audio_Audio_play_arc_audio_AudioSource_float_float_float_boolean_R_int)(jcontext ctx, jobject self, jobject param0, jfloat param1, jfloat param2, jfloat param3, jbool param4);
#define VTABLE_arc_audio_Audio_stop_arc_audio_AudioSource 20
typedef void (*func_arc_audio_Audio_stop_arc_audio_AudioSource)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_audio_Audio_stop_int 21
typedef void (*func_arc_audio_Audio_stop_int)(jcontext ctx, jobject self, jint param0);
#define VTABLE_arc_audio_Audio_setPaused_int_boolean 22
typedef void (*func_arc_audio_Audio_setPaused_int_boolean)(jcontext ctx, jobject self, jint param0, jbool param1);
#define VTABLE_arc_audio_Audio_setLooping_int_boolean 23
typedef void (*func_arc_audio_Audio_setLooping_int_boolean)(jcontext ctx, jobject self, jint param0, jbool param1);
#define VTABLE_arc_audio_Audio_setPitch_int_float 24
typedef void (*func_arc_audio_Audio_setPitch_int_float)(jcontext ctx, jobject self, jint param0, jfloat param1);
#define VTABLE_arc_audio_Audio_setVolume_int_float 25
typedef void (*func_arc_audio_Audio_setVolume_int_float)(jcontext ctx, jobject self, jint param0, jfloat param1);
#define VTABLE_arc_audio_Audio_set_int_float_float 26
typedef void (*func_arc_audio_Audio_set_int_float_float)(jcontext ctx, jobject self, jint param0, jfloat param1, jfloat param2);
#define VTABLE_arc_audio_Audio_fadeFilterParam_int_int_int_float_float 27
typedef void (*func_arc_audio_Audio_fadeFilterParam_int_int_int_float_float)(jcontext ctx, jobject self, jint param0, jint param1, jint param2, jfloat param3, jfloat param4);
#define VTABLE_arc_audio_Audio_setFilterParam_int_int_int_float 28
typedef void (*func_arc_audio_Audio_setFilterParam_int_int_int_float)(jcontext ctx, jobject self, jint param0, jint param1, jint param2, jfloat param3);
#define VTABLE_arc_audio_Audio_setFilter_int_arc_audio_AudioFilter 29
typedef void (*func_arc_audio_Audio_setFilter_int_arc_audio_AudioFilter)(jcontext ctx, jobject self, jint param0, jobject param1);
#define VTABLE_arc_audio_Audio_countPlaying_arc_audio_AudioSource_R_int 30
typedef jint (*func_arc_audio_Audio_countPlaying_arc_audio_AudioSource_R_int)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_audio_Audio_countTotalPlaying_R_int 31
typedef jint (*func_arc_audio_Audio_countTotalPlaying_R_int)(jcontext ctx, jobject self);

void mark_arc_audio_Audio(jobject object, jint mark, jint depth);
void clinit_arc_audio_Audio(jcontext ctx);
void init_arc_audio_Audio(jcontext ctx, jobject self);
void init_arc_audio_Audio_boolean(jcontext ctx, jobject self, jbool param0);
jbool M_arc_audio_Audio_initialized_R_boolean(jcontext ctx, jobject self);
void M_arc_audio_Audio_initialize(jcontext ctx, jobject self);
jobject M_arc_audio_Audio_newSound_arc_files_Fi_R_arc_audio_Sound(jcontext ctx, jobject self, jobject param0);
jobject M_arc_audio_Audio_newMusic_arc_files_Fi_R_arc_audio_Music(jcontext ctx, jobject self, jobject param0);
jbool M_arc_audio_Audio_isPlaying_int_R_boolean(jcontext ctx, jobject self, jint param0);
void M_arc_audio_Audio_protect_int_boolean(jcontext ctx, jobject self, jint param0, jbool param1);
jint M_arc_audio_Audio_play_arc_audio_AudioSource_float_float_float_boolean_R_int(jcontext ctx, jobject self, jobject param0, jfloat param1, jfloat param2, jfloat param3, jbool param4);
void M_arc_audio_Audio_stop_arc_audio_AudioSource(jcontext ctx, jobject self, jobject param0);
void M_arc_audio_Audio_stop_int(jcontext ctx, jobject self, jint param0);
void M_arc_audio_Audio_setPaused_int_boolean(jcontext ctx, jobject self, jint param0, jbool param1);
void M_arc_audio_Audio_setLooping_int_boolean(jcontext ctx, jobject self, jint param0, jbool param1);
void M_arc_audio_Audio_setPitch_int_float(jcontext ctx, jobject self, jint param0, jfloat param1);
void M_arc_audio_Audio_setVolume_int_float(jcontext ctx, jobject self, jint param0, jfloat param1);
void M_arc_audio_Audio_set_int_float_float(jcontext ctx, jobject self, jint param0, jfloat param1, jfloat param2);
void M_arc_audio_Audio_fadeFilterParam_int_int_int_float_float(jcontext ctx, jobject self, jint param0, jint param1, jint param2, jfloat param3, jfloat param4);
void M_arc_audio_Audio_setFilterParam_int_int_int_float(jcontext ctx, jobject self, jint param0, jint param1, jint param2, jfloat param3);
void M_arc_audio_Audio_setFilter_int_arc_audio_AudioFilter(jcontext ctx, jobject self, jint param0, jobject param1);
jint M_arc_audio_Audio_countPlaying_arc_audio_AudioSource_R_int(jcontext ctx, jobject self, jobject param0);
jint M_arc_audio_Audio_countTotalPlaying_R_int(jcontext ctx, jobject self);
void M_arc_audio_Audio_dispose(jcontext ctx, jobject self);

#ifdef __cplusplus
}
#endif

#endif
