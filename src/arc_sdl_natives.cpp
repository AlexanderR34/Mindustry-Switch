#include <SDL2/SDL.h>
#include <SDL2/SDL_image.h>
#include <glad/glad.h>
#define STBI_NO_STDIO
#define STB_IMAGE_IMPLEMENTATION
#include "stb_image.h"
#include "Clearwing.h"
#include "arc/backend/sdl/jni/SDL.h"
#include "arc/backend/sdl/jni/SDLGL.h"
#include "java/nio/Buffer.h"
#include "java/nio/ByteBuffer.h"
#include "java/nio/ShortBuffer.h"
#include "java/nio/IntBuffer.h"
#include "java/nio/FloatBuffer.h"
#include "java/nio/DirectShortBuffer.h"
#include "java/lang/String.h"
#include <cstring>
#include <cstdio>
#include <string>

extern "C" {

static inline void* getBufBase(jobject bufObj) {
    if (!bufObj) return nullptr;
    auto buf = (java_nio_Buffer*)bufObj;
    if (buf->F_address != 0) {
        return (void*)buf->F_address;
    }
    jclass cl = (jclass)bufObj->clazz;
    const char* cname = cl && cl->nativeName ? (const char*)cl->nativeName : "";
    if (strstr(cname, "Direct") || strstr(cname, "ByteBufferAs")) {
        auto view = (java_nio_DirectShortBuffer*)bufObj;
        if (view->F_bb) {
            void* base = getBufBase((jobject)view->F_bb);
            if (base) {
                return (void*)((char*)base + view->F_offset);
            }
        }
    }
    if (strstr(cname, "ByteBuffer")) {
        auto bb = (java_nio_ByteBuffer*)bufObj;
        if (bb->F_array) {
            auto arr = (jarray)bb->F_array;
            return (void*)arr->data;
        }
    }
    if (strstr(cname, "ShortBuffer")) {
        auto sb = (java_nio_ShortBuffer*)bufObj;
        if (sb->F_hb) {
            auto arr = (jarray)sb->F_hb;
            return (void*)((short*)arr->data + sb->F_offset);
        }
    }
    if (strstr(cname, "FloatBuffer")) {
        auto fb = (java_nio_FloatBuffer*)bufObj;
        if (fb->F_hb) {
            auto arr = (jarray)fb->F_hb;
            return (void*)((float*)arr->data + fb->F_offset);
        }
    }
    if (strstr(cname, "IntBuffer")) {
        auto ib = (java_nio_IntBuffer*)bufObj;
        if (ib->F_hb) {
            auto arr = (jarray)ib->F_hb;
            return (void*)((int*)arr->data + ib->F_offset);
        }
    }
    auto sb = (java_nio_ShortBuffer*)bufObj;
    if (sb->F_hb) {
        auto arr = (jarray)sb->F_hb;
        return (void*)arr->data;
    }
    return nullptr;
}

static inline void* getBufPtr(jobject bufObj) {
    if (!bufObj) return nullptr;
    auto buf = (java_nio_Buffer*)bufObj;
    jclass cl = (jclass)bufObj->clazz;
    const char* cname = cl && cl->nativeName ? (const char*)cl->nativeName : "";
    int elemSize = 1;
    if (strstr(cname, "Float") || strstr(cname, "Int")) elemSize = 4;
    else if (strstr(cname, "Short") || strstr(cname, "Char")) elemSize = 2;
    else if (strstr(cname, "Long") || strstr(cname, "Double")) elemSize = 8;

    if (buf->F_address != 0) {
        return (void*)(buf->F_address + (buf->F_position * elemSize));
    }
    if (strstr(cname, "Direct") || strstr(cname, "ByteBufferAs")) {
        auto view = (java_nio_DirectShortBuffer*)bufObj;
        if (view->F_bb) {
            void* base = getBufPtr((jobject)view->F_bb);
            if (base) {
                return (void*)((char*)base + view->F_offset + (buf->F_position * elemSize));
            }
        }
    }
    if (strstr(cname, "ByteBuffer")) {
        auto bb = (java_nio_ByteBuffer*)bufObj;
        if (bb->F_array) {
            auto arr = (jarray)bb->F_array;
            return (void*)((char*)arr->data + buf->F_position);
        }
    }
    if (strstr(cname, "ShortBuffer")) {
        auto sb = (java_nio_ShortBuffer*)bufObj;
        if (sb->F_hb) {
            auto arr = (jarray)sb->F_hb;
            return (void*)((short*)arr->data + sb->F_offset + buf->F_position);
        }
    }
    if (strstr(cname, "FloatBuffer")) {
        auto fb = (java_nio_FloatBuffer*)bufObj;
        if (fb->F_hb) {
            auto arr = (jarray)fb->F_hb;
            return (void*)((float*)arr->data + fb->F_offset + buf->F_position);
        }
    }
    if (strstr(cname, "IntBuffer")) {
        auto ib = (java_nio_IntBuffer*)bufObj;
        if (ib->F_hb) {
            auto arr = (jarray)ib->F_hb;
            return (void*)((int*)arr->data + ib->F_offset + buf->F_position);
        }
    }
    auto sb = (java_nio_ShortBuffer*)bufObj;
    if (sb->F_hb) {
        auto arr = (jarray)sb->F_hb;
        return (void*)((char*)arr->data + buf->F_position);
    }
    return nullptr;
}


jint SM_arc_backend_sdl_jni_SDL_SDL_Init_int_R_int(jcontext ctx, jint param0) {
    SDL_SetHint(SDL_HINT_TOUCH_MOUSE_EVENTS, "0");
    SDL_SetHint(SDL_HINT_MOUSE_TOUCH_EVENTS, "0");
    SDL_SetHint(SDL_HINT_JOYSTICK_ALLOW_BACKGROUND_EVENTS, "1");
    int res = SDL_Init(param0 | SDL_INIT_JOYSTICK | SDL_INIT_GAMECONTROLLER);
    printf("[SDL] SDL_Init(0x%X) returned %d (error: %s)\n", (unsigned int)(param0 | SDL_INIT_JOYSTICK | SDL_INIT_GAMECONTROLLER), res, SDL_GetError());
    if (SDL_NumJoysticks() > 0) {
        SDL_JoystickOpen(0);
        SDL_GameControllerOpen(0);
        printf("[SDL] Opened GameController 0 / Joystick 0\n");
    }
    fflush(stdout);
    return res;
}
jint SM_arc_backend_sdl_jni_SDL_SDL_InitSubSystem_int_R_int(jcontext ctx, jint param0) {
    return SDL_InitSubSystem(param0);
}
void SM_arc_backend_sdl_jni_SDL_SDL_QuitSubSystem_int(jcontext ctx, jint param0) {
    SDL_QuitSubSystem(param0);
}
jint SM_arc_backend_sdl_jni_SDL_SDL_WasInit_int_R_int(jcontext ctx, jint param0) {
    return SDL_WasInit(param0);
}
void SM_arc_backend_sdl_jni_SDL_SDL_Quit(jcontext ctx) {
    SDL_Quit();
}
jbool SM_arc_backend_sdl_jni_SDL_SDL_SetHint_java_lang_String_java_lang_String_R_boolean(jcontext ctx, jobject param0, jobject param1) {
    const char* k = param0 ? stringToNative(ctx, (jstring)param0) : "";
    const char* v = param1 ? stringToNative(ctx, (jstring)param1) : "";
    return SDL_SetHint(k, v) == SDL_TRUE;
}
void SM_arc_backend_sdl_jni_SDL_SDL_GetCompiledVersion_Array1_int(jcontext ctx, jobject param0) {
    if (!param0) return;
    SDL_version v;
    SDL_VERSION(&v);
    jint* d = (jint*)((jarray)param0)->data;
    d[0] = v.major; d[1] = v.minor; d[2] = v.patch;
}
void SM_arc_backend_sdl_jni_SDL_SDL_GetVersion_Array1_int(jcontext ctx, jobject param0) {
    if (!param0) return;
    SDL_version v;
    SDL_GetVersion(&v);
    jint* d = (jint*)((jarray)param0)->data;
    d[0] = v.major; d[1] = v.minor; d[2] = v.patch;
}
jobject SM_arc_backend_sdl_jni_SDL_SDL_GetError_R_java_lang_String(jcontext ctx) {
    return (jobject)stringFromNative(ctx, SDL_GetError());
}
jint SM_arc_backend_sdl_jni_SDL_SDL_SetClipboardText_java_lang_String_R_int(jcontext ctx, jobject param0) {
    return param0 ? SDL_SetClipboardText(stringToNative(ctx, (jstring)param0)) : 0;
}
jobject SM_arc_backend_sdl_jni_SDL_SDL_GetClipboardText_R_java_lang_String(jcontext ctx) {
    char* txt = SDL_GetClipboardText();
    auto res = stringFromNative(ctx, txt ? txt : "");
    if (txt) SDL_free(txt);
    return (jobject)res;
}
static int g_win_w = 1280;
static int g_win_h = 720;

jlong SM_arc_backend_sdl_jni_SDL_SDL_CreateWindow_java_lang_String_int_int_int_R_long(jcontext ctx, jobject param0, jint param1, jint param2, jint param3) {
    const char* title = param0 ? stringToNative(ctx, (jstring)param0) : "Mindustry";
    g_win_w = param1 > 0 ? param1 : 1280;
    g_win_h = param2 > 0 ? param2 : 720;
    SDL_Window* win = SDL_CreateWindow(title, SDL_WINDOWPOS_CENTERED, SDL_WINDOWPOS_CENTERED, param1, param2, param3 | SDL_WINDOW_OPENGL | SDL_WINDOW_FULLSCREEN);
    printf("[SDL] Window created: %p (%dx%d)\n", win, param1, param2);
    fflush(stdout);
    return (jlong)win;
}
void SM_arc_backend_sdl_jni_SDL_SDL_DestroyWindow_long(jcontext ctx, jlong param0) {
    if (param0) SDL_DestroyWindow((SDL_Window*)param0);
}
void SM_arc_backend_sdl_jni_SDL_SDL_SetWindowIcon_long_long(jcontext ctx, jlong param0, jlong param1) {
    if (param0 && param1) SDL_SetWindowIcon((SDL_Window*)param0, (SDL_Surface*)param1);
}
void SM_arc_backend_sdl_jni_SDL_SDL_RestoreWindow_long(jcontext ctx, jlong param0) {
    if (param0) SDL_RestoreWindow((SDL_Window*)param0);
}
void SM_arc_backend_sdl_jni_SDL_SDL_MaximizeWindow_long(jcontext ctx, jlong param0) {
    if (param0) SDL_MaximizeWindow((SDL_Window*)param0);
}
void SM_arc_backend_sdl_jni_SDL_SDL_MinimizeWindow_long(jcontext ctx, jlong param0) {
    if (param0) SDL_MinimizeWindow((SDL_Window*)param0);
}
jint SM_arc_backend_sdl_jni_SDL_SDL_SetWindowFullscreen_long_int_R_int(jcontext ctx, jlong param0, jint param1) {
    return param0 ? SDL_SetWindowFullscreen((SDL_Window*)param0, param1) : 0;
}
void SM_arc_backend_sdl_jni_SDL_SDL_SetWindowBordered_long_boolean(jcontext ctx, jlong param0, jbool param1) {
    if (param0) SDL_SetWindowBordered((SDL_Window*)param0, (SDL_bool)param1);
}
void SM_arc_backend_sdl_jni_SDL_SDL_SetWindowSize_long_int_int(jcontext ctx, jlong param0, jint param1, jint param2) {
    if (param0) SDL_SetWindowSize((SDL_Window*)param0, param1, param2);
}
void SM_arc_backend_sdl_jni_SDL_SDL_SetWindowPosition_long_int_int(jcontext ctx, jlong param0, jint param1, jint param2) {
    if (param0) SDL_SetWindowPosition((SDL_Window*)param0, param1, param2);
}
jint SM_arc_backend_sdl_jni_SDL_SDL_GetWindowDisplayIndex_long_R_int(jcontext ctx, jlong param0) {
    return param0 ? SDL_GetWindowDisplayIndex((SDL_Window*)param0) : 0;
}
jint SM_arc_backend_sdl_jni_SDL_SDL_GetDisplayUsableBounds_int_Array1_int_R_int(jcontext ctx, jint param0, jobject param1) {
    SDL_Rect r{0, 0, 1280, 720};
    int res = SDL_GetDisplayUsableBounds(param0, &r);
    if (param1) {
        jint* d = (jint*)((jarray)param1)->data;
        d[0] = r.x; d[1] = r.y; d[2] = r.w; d[3] = r.h;
    }
    return res;
}
jint SM_arc_backend_sdl_jni_SDL_SDL_GetDisplayBounds_int_Array1_int_R_int(jcontext ctx, jint param0, jobject param1) {
    SDL_Rect r{0, 0, 1280, 720};
    int res = SDL_GetDisplayBounds(param0, &r);
    if (param1) {
        jint* d = (jint*)((jarray)param1)->data;
        d[0] = r.x; d[1] = r.y; d[2] = r.w; d[3] = r.h;
    }
    return res;
}
jint SM_arc_backend_sdl_jni_SDL_SDL_GetCurrentDisplayMode_int_Array1_int_R_int(jcontext ctx, jint param0, jobject param1) {
    SDL_DisplayMode m{0, 1280, 720, 60, 0};
    int res = SDL_GetCurrentDisplayMode(param0, &m);
    if (param1) {
        jint* d = (jint*)((jarray)param1)->data;
        d[0] = m.format; d[1] = m.w; d[2] = m.h; d[3] = m.refresh_rate;
    }
    return res;
}
jint SM_arc_backend_sdl_jni_SDL_SDL_GetDesktopDisplayMode_int_Array1_int_R_int(jcontext ctx, jint param0, jobject param1) {
    SDL_DisplayMode m{0, 1280, 720, 60, 0};
    int res = SDL_GetDesktopDisplayMode(param0, &m);
    if (param1) {
        jint* d = (jint*)((jarray)param1)->data;
        d[0] = m.format; d[1] = m.w; d[2] = m.h; d[3] = m.refresh_rate;
    }
    return res;
}
void SM_arc_backend_sdl_jni_SDL_SDL_SetWindowAlwaysOnTop_long_boolean(jcontext ctx, jlong param0, jbool param1) {
    if (param0) SDL_SetWindowAlwaysOnTop((SDL_Window*)param0, (SDL_bool)param1);
}
jint SM_arc_backend_sdl_jni_SDL_SDL_GetNumVideoDisplays_R_int(jcontext ctx) {
    return SDL_GetNumVideoDisplays();
}
jint SM_arc_backend_sdl_jni_SDL_SDL_GetWindowFlags_long_R_int(jcontext ctx, jlong param0) {
    return param0 ? SDL_GetWindowFlags((SDL_Window*)param0) : 0;
}
void SM_arc_backend_sdl_jni_SDL_SDL_SetWindowTitle_long_java_lang_String(jcontext ctx, jlong param0, jobject param1) {
    if (param0 && param1) SDL_SetWindowTitle((SDL_Window*)param0, stringToNative(ctx, (jstring)param1));
}
jlong SM_arc_backend_sdl_jni_SDL_SDL_CreateRGBSurfaceFrom_java_nio_ByteBuffer_int_int_R_long(jcontext ctx, jobject param0, jint param1, jint param2) {
    void* pixels = getBufPtr(param0);
    if (!pixels) return 0;
    return (jlong)SDL_CreateRGBSurfaceFrom(pixels, param1, param2, 32, param1 * 4, 0x000000FF, 0x0000FF00, 0x00FF0000, 0xFF000000);
}
jlong SM_arc_backend_sdl_jni_SDL_SDL_CreateColorCursor_long_int_int_R_long(jcontext ctx, jlong param0, jint param1, jint param2) {
    return param0 ? (jlong)SDL_CreateColorCursor((SDL_Surface*)param0, param1, param2) : 0;
}
jlong SM_arc_backend_sdl_jni_SDL_SDL_CreateSystemCursor_int_R_long(jcontext ctx, jint param0) {
    return (jlong)SDL_CreateSystemCursor((SDL_SystemCursor)param0);
}
void SM_arc_backend_sdl_jni_SDL_SDL_SetCursor_long(jcontext ctx, jlong param0) {
    if (param0) SDL_SetCursor((SDL_Cursor*)param0);
}
void SM_arc_backend_sdl_jni_SDL_SDL_FreeCursor_long(jcontext ctx, jlong param0) {
    if (param0) SDL_FreeCursor((SDL_Cursor*)param0);
}
void SM_arc_backend_sdl_jni_SDL_SDL_FreeSurface_long(jcontext ctx, jlong param0) {
    if (param0) SDL_FreeSurface((SDL_Surface*)param0);
}
jint SM_arc_backend_sdl_jni_SDL_SDL_ShowSimpleMessageBox_int_java_lang_String_java_lang_String_R_int(jcontext ctx, jint param0, jobject param1, jobject param2) {
    return SDL_ShowSimpleMessageBox(param0, param1 ? stringToNative(ctx, (jstring)param1) : "", param2 ? stringToNative(ctx, (jstring)param2) : "", NULL);
}
void SM_arc_backend_sdl_jni_SDL_SDL_StartTextInput(jcontext ctx) {
    SDL_StartTextInput();
}
void SM_arc_backend_sdl_jni_SDL_SDL_StopTextInput(jcontext ctx) {
    SDL_StopTextInput();
}
void SM_arc_backend_sdl_jni_SDL_SDL_SetTextInputRect_int_int_int_int(jcontext ctx, jint param0, jint param1, jint param2, jint param3) {
    SDL_Rect r{param0, param1, param2, param3};
    SDL_SetTextInputRect(&r);
}
jbool SM_arc_backend_sdl_jni_SDL_SDL_IsTextInputActive_R_boolean(jcontext ctx) {
    return SDL_IsTextInputActive() == SDL_TRUE;
}
static float g_cursor_x = 640.0f;
static float g_cursor_y = 360.0f;
static bool s_l_shoulder_held = false;
static uint32_t s_last_touch_ticks = 0;

jbool SM_arc_backend_sdl_jni_SDL_SDL_PollEvent_Array1_int_R_boolean(jcontext ctx, jobject param0) {
    if (!param0) return false;
    jint* inputs = (jint*)((jarray)param0)->data;
    SDL_Event event;
    while (SDL_PollEvent(&event)) {
        switch (event.type) {
            case SDL_QUIT:
                inputs[0] = 0; // SDL_EVENT_QUIT
                return true;
            case SDL_WINDOWEVENT:
                if (event.window.event == SDL_WINDOWEVENT_RESIZED || event.window.event == SDL_WINDOWEVENT_SIZE_CHANGED) {
                    if (event.window.data1 > 0) g_win_w = event.window.data1;
                    if (event.window.data2 > 0) g_win_h = event.window.data2;
                }
                inputs[0] = 1; // SDL_EVENT_WINDOW
                inputs[1] = event.window.event;
                inputs[2] = event.window.data1;
                inputs[3] = event.window.data2;
                return true;
            case SDL_MOUSEMOTION:
                if (event.motion.which == SDL_TOUCH_MOUSEID) break;
                g_cursor_x = (float)event.motion.x;
                g_cursor_y = (float)event.motion.y;
                inputs[0] = 2; // SDL_EVENT_MOUSE_MOTION
                inputs[1] = event.motion.x;
                inputs[2] = event.motion.y;
                return true;
            case SDL_MOUSEBUTTONDOWN:
            case SDL_MOUSEBUTTONUP:
                if (event.button.which == SDL_TOUCH_MOUSEID) break;
                g_cursor_x = (float)event.button.x;
                g_cursor_y = (float)event.button.y;
                inputs[0] = 3; // SDL_EVENT_MOUSE_BUTTON
                inputs[1] = (event.type == SDL_MOUSEBUTTONDOWN) ? 1 : 0;
                inputs[2] = event.button.x;
                inputs[3] = event.button.y;
                inputs[4] = event.button.button;
                
                return true;
            case SDL_FINGERDOWN:
            case SDL_FINGERUP:
                s_last_touch_ticks = SDL_GetTicks();
                inputs[0] = 3; // SDL_EVENT_MOUSE_BUTTON
                inputs[1] = (event.type == SDL_FINGERDOWN) ? 1 : 0;
                inputs[2] = (int)(event.tfinger.x * (float)g_win_w);
                inputs[3] = (int)(event.tfinger.y * (float)g_win_h);
                inputs[4] = 1; // SDL_BUTTON_LEFT
                g_cursor_x = (float)inputs[2];
                g_cursor_y = (float)inputs[3];
                
                return true;
            case SDL_FINGERMOTION: {
                s_last_touch_ticks = SDL_GetTicks();
                inputs[0] = 2; // SDL_EVENT_MOUSE_MOTION
                inputs[1] = (int)(event.tfinger.x * (float)g_win_w);
                inputs[2] = (int)(event.tfinger.y * (float)g_win_h);
                g_cursor_x = (float)inputs[1];
                g_cursor_y = (float)inputs[2];
                return true;
            }
            case SDL_MOUSEWHEEL:
                inputs[0] = 4; // SDL_EVENT_MOUSE_WHEEL
                inputs[1] = event.wheel.x;
                inputs[2] = event.wheel.y;
                
                return true;
            case SDL_KEYDOWN:
            case SDL_KEYUP:
                inputs[0] = 5; // SDL_EVENT_KEYBOARD
                inputs[1] = (event.type == SDL_KEYDOWN) ? 1 : 0;
                inputs[2] = event.key.keysym.sym;
                inputs[3] = event.key.repeat;
                inputs[4] = event.key.keysym.scancode;
                
                return true;
            case SDL_CONTROLLERBUTTONDOWN:
            case SDL_CONTROLLERBUTTONUP: {
                if (event.cbutton.button == SDL_CONTROLLER_BUTTON_A) {
                    inputs[0] = 3; // SDL_EVENT_MOUSE_BUTTON
                    inputs[1] = (event.type == SDL_CONTROLLERBUTTONDOWN) ? 1 : 0;
                    inputs[2] = (int)g_cursor_x;
                    inputs[3] = (int)g_cursor_y;
                    inputs[4] = 1; // SDL_BUTTON_LEFT
                    
                    return true;
                }
                if (event.type == SDL_CONTROLLERBUTTONDOWN) {
                    if (event.cbutton.button == SDL_CONTROLLER_BUTTON_DPAD_UP) {
                        g_cursor_y = fmaxf(10.0f, g_cursor_y - 35.0f);
                        inputs[0] = 2; inputs[1] = (int)g_cursor_x; inputs[2] = (int)g_cursor_y;
                        return true;
                    } else if (event.cbutton.button == SDL_CONTROLLER_BUTTON_DPAD_DOWN) {
                        g_cursor_y = fminf((float)(g_win_h - 10), g_cursor_y + 35.0f);
                        inputs[0] = 2; inputs[1] = (int)g_cursor_x; inputs[2] = (int)g_cursor_y;
                        return true;
                    } else if (event.cbutton.button == SDL_CONTROLLER_BUTTON_DPAD_LEFT) {
                        g_cursor_x = fmaxf(10.0f, g_cursor_x - 35.0f);
                        inputs[0] = 2; inputs[1] = (int)g_cursor_x; inputs[2] = (int)g_cursor_y;
                        return true;
                    } else if (event.cbutton.button == SDL_CONTROLLER_BUTTON_DPAD_RIGHT) {
                        g_cursor_x = fminf((float)(g_win_w - 10), g_cursor_x + 35.0f);
                        inputs[0] = 2; inputs[1] = (int)g_cursor_x; inputs[2] = (int)g_cursor_y;
                        return true;
                    }
                }
                inputs[0] = 5; // SDL_EVENT_KEYBOARD
                inputs[1] = (event.type == SDL_CONTROLLERBUTTONDOWN) ? 1 : 0;
                inputs[3] = 0;
                switch (event.cbutton.button) {
                    case SDL_CONTROLLER_BUTTON_B:
                        inputs[2] = SDLK_ESCAPE; inputs[4] = SDL_SCANCODE_ESCAPE; break; // Back / Cancel
                    case SDL_CONTROLLER_BUTTON_X:
                        inputs[2] = SDLK_e; inputs[4] = SDL_SCANCODE_E; break; // Interact / Build
                    case SDL_CONTROLLER_BUTTON_Y:
                        inputs[2] = SDLK_SPACE; inputs[4] = SDL_SCANCODE_SPACE; break; // Pause / Action
                    case SDL_CONTROLLER_BUTTON_START:
                        inputs[2] = SDLK_ESCAPE; inputs[4] = SDL_SCANCODE_ESCAPE; break; // Menu
                    case SDL_CONTROLLER_BUTTON_BACK:
                        inputs[2] = SDLK_TAB; inputs[4] = SDL_SCANCODE_TAB; break; // Map
                    case SDL_CONTROLLER_BUTTON_LEFTSHOULDER:
                        inputs[2] = SDLK_q; inputs[4] = SDL_SCANCODE_Q; break;
                    case SDL_CONTROLLER_BUTTON_RIGHTSHOULDER:
                        inputs[2] = SDLK_f; inputs[4] = SDL_SCANCODE_F; break;
                    default:
                        inputs[2] = 0; inputs[4] = 0; break;
                }
                if (inputs[4] == 0) break;
                return true;
            }
            case SDL_JOYBUTTONDOWN:
            case SDL_JOYBUTTONUP: {
                // Button 0 (A) and Button 9 (ZR): Left mouse click at cursor position
                if (event.jbutton.button == 0 || event.jbutton.button == 9) {
                    inputs[0] = 3; // SDL_EVENT_MOUSE_BUTTON
                    inputs[1] = (event.type == SDL_JOYBUTTONDOWN) ? 1 : 0;
                    inputs[2] = (int)g_cursor_x;
                    inputs[3] = (int)g_cursor_y;
                    inputs[4] = 1; // SDL_BUTTON_LEFT
                    
                    return true;
                }
                // D-Pad navigation: move cursor
                if (event.type == SDL_JOYBUTTONDOWN) {
                    if (event.jbutton.button == 12 || event.jbutton.button == 16) { // Left
                        g_cursor_x = fmaxf(10.0f, g_cursor_x - 35.0f);
                        inputs[0] = 2; inputs[1] = (int)g_cursor_x; inputs[2] = (int)g_cursor_y;
                        return true;
                    } else if (event.jbutton.button == 13 || event.jbutton.button == 17) { // Up
                        g_cursor_y = fmaxf(10.0f, g_cursor_y - 35.0f);
                        inputs[0] = 2; inputs[1] = (int)g_cursor_x; inputs[2] = (int)g_cursor_y;
                        return true;
                    } else if (event.jbutton.button == 14 || event.jbutton.button == 18) { // Right
                        g_cursor_x = fminf((float)(g_win_w - 10), g_cursor_x + 35.0f);
                        inputs[0] = 2; inputs[1] = (int)g_cursor_x; inputs[2] = (int)g_cursor_y;
                        return true;
                    } else if (event.jbutton.button == 15 || event.jbutton.button == 19) { // Down
                        g_cursor_y = fminf((float)(g_win_h - 10), g_cursor_y + 35.0f);
                        inputs[0] = 2; inputs[1] = (int)g_cursor_x; inputs[2] = (int)g_cursor_y;
                        return true;
                    }
                }
                inputs[0] = 5; // SDL_EVENT_KEYBOARD
                inputs[1] = (event.type == SDL_JOYBUTTONDOWN) ? 1 : 0;
                inputs[3] = 0;
                switch (event.jbutton.button) {
                    case 1: inputs[2] = SDLK_ESCAPE; inputs[4] = SDL_SCANCODE_ESCAPE; break; // B button (back/cancel)
                    case 2: inputs[2] = SDLK_e; inputs[4] = SDL_SCANCODE_E; break; // X button (inventory/build)
                    case 3: inputs[2] = SDLK_SPACE; inputs[4] = SDL_SCANCODE_SPACE; break; // Y button (action/pause)
                    case 4: inputs[2] = SDLK_TAB; inputs[4] = SDL_SCANCODE_TAB; break; // L3 stick press -> map
                    case 5: inputs[2] = SDLK_r; inputs[4] = SDL_SCANCODE_R; break; // R3 stick press -> rotate block
                    case 6: // L shoulder
                        s_l_shoulder_held = (event.type == SDL_JOYBUTTONDOWN);
                        inputs[2] = SDLK_q; inputs[4] = SDL_SCANCODE_Q; break;
                    case 7: inputs[2] = SDLK_f; inputs[4] = SDL_SCANCODE_F; break; // R shoulder
                    case 8: inputs[2] = SDLK_x; inputs[4] = SDL_SCANCODE_X; break; // ZL trigger (demolish)
                    case 10: inputs[2] = SDLK_ESCAPE; inputs[4] = SDL_SCANCODE_ESCAPE; break; // Plus (+) button / Start
                    case 11: inputs[2] = SDLK_m; inputs[4] = SDL_SCANCODE_M; break; // Minus (-) button / Map
                    case 20: case 22: inputs[2] = SDLK_q; inputs[4] = SDL_SCANCODE_Q; break; // SL
                    case 21: case 23: inputs[2] = SDLK_f; inputs[4] = SDL_SCANCODE_F; break; // SR
                    default: inputs[2] = 0; inputs[4] = 0; break;
                }
                if (inputs[4] == 0) break;
                return true;
            }
            case SDL_JOYAXISMOTION: {
                static bool s_axis_left = false, s_axis_right = false;
                static bool s_axis_up = false, s_axis_down = false;
                int val = event.jaxis.value;
                if (event.jaxis.axis == 0) { // Left Stick X -> A / D
                    if (val < -16000 && !s_axis_left) {
                        s_axis_left = true;
                        inputs[0] = 5; inputs[1] = 1; inputs[2] = SDLK_a; inputs[3] = 0; inputs[4] = SDL_SCANCODE_A;
                        return true;
                    } else if (val >= -10000 && s_axis_left) {
                        s_axis_left = false;
                        inputs[0] = 5; inputs[1] = 0; inputs[2] = SDLK_a; inputs[3] = 0; inputs[4] = SDL_SCANCODE_A;
                        return true;
                    }
                    if (val > 16000 && !s_axis_right) {
                        s_axis_right = true;
                        inputs[0] = 5; inputs[1] = 1; inputs[2] = SDLK_d; inputs[3] = 0; inputs[4] = SDL_SCANCODE_D;
                        return true;
                    } else if (val <= 10000 && s_axis_right) {
                        s_axis_right = false;
                        inputs[0] = 5; inputs[1] = 0; inputs[2] = SDLK_d; inputs[3] = 0; inputs[4] = SDL_SCANCODE_D;
                        return true;
                    }
                } else if (event.jaxis.axis == 1) { // Left Stick Y -> W / S
                    if (val < -16000 && !s_axis_up) {
                        s_axis_up = true;
                        inputs[0] = 5; inputs[1] = 1; inputs[2] = SDLK_w; inputs[3] = 0; inputs[4] = SDL_SCANCODE_W;
                        return true;
                    } else if (val >= -10000 && s_axis_up) {
                        s_axis_up = false;
                        inputs[0] = 5; inputs[1] = 0; inputs[2] = SDLK_w; inputs[3] = 0; inputs[4] = SDL_SCANCODE_W;
                        return true;
                    }
                    if (val > 16000 && !s_axis_down) {
                        s_axis_down = true;
                        inputs[0] = 5; inputs[1] = 1; inputs[2] = SDLK_s; inputs[3] = 0; inputs[4] = SDL_SCANCODE_S;
                        return true;
                    } else if (val <= 10000 && s_axis_down) {
                        s_axis_down = false;
                        inputs[0] = 5; inputs[1] = 0; inputs[2] = SDLK_s; inputs[3] = 0; inputs[4] = SDL_SCANCODE_S;
                        return true;
                    }
                } else if (event.jaxis.axis == 2 || event.jaxis.axis == 3) {
                    static int s_rx = 0, s_ry = 0;
                    if (event.jaxis.axis == 2) s_rx = event.jaxis.value;
                    if (event.jaxis.axis == 3) s_ry = event.jaxis.value;

                    // If user is actively touching the screen, do not allow stick drift to override cursor position
                    if (SDL_GetTicks() - s_last_touch_ticks < 600) {
                        break;
                    }

                    if (s_l_shoulder_held && event.jaxis.axis == 3) {
                        static int s_zoom_ticks = 0;
                        if (event.jaxis.value < -16000 && (++s_zoom_ticks % 6 == 1)) {
                            inputs[0] = 4; inputs[1] = 0; inputs[2] = 1; // Scroll UP (zoom in)
                            return true;
                        } else if (event.jaxis.value > 16000 && (++s_zoom_ticks % 6 == 1)) {
                            inputs[0] = 4; inputs[1] = 0; inputs[2] = -1; // Scroll DOWN (zoom out)
                            return true;
                        }
                    } else {
                        // High-precision anti-drift deadzone (~29%) with smooth quadratic response curve
                        const int DEADZONE = 9500;
                        float normX = 0.0f;
                        if (s_rx > DEADZONE) {
                            normX = (float)(s_rx - DEADZONE) / (32767.0f - (float)DEADZONE);
                        } else if (s_rx < -DEADZONE) {
                            normX = (float)(s_rx + DEADZONE) / (32767.0f - (float)DEADZONE);
                        }

                        float normY = 0.0f;
                        if (s_ry > DEADZONE) {
                            normY = (float)(s_ry - DEADZONE) / (32767.0f - (float)DEADZONE);
                        } else if (s_ry < -DEADZONE) {
                            normY = (float)(s_ry + DEADZONE) / (32767.0f - (float)DEADZONE);
                        }

                        float signX = (normX >= 0.0f) ? 1.0f : -1.0f;
                        float signY = (normY >= 0.0f) ? 1.0f : -1.0f;
                        float vx = signX * (normX * normX) * 16.0f;
                        float vy = signY * (normY * normY) * 16.0f;

                        if (vx != 0.0f || vy != 0.0f) {
                            g_cursor_x = fminf(fmaxf(g_cursor_x + vx, 5.0f), (float)(g_win_w - 5));
                            g_cursor_y = fminf(fmaxf(g_cursor_y + vy, 5.0f), (float)(g_win_h - 5));
                            inputs[0] = 2; // SDL_EVENT_MOUSE_MOTION
                            inputs[1] = (int)g_cursor_x;
                            inputs[2] = (int)g_cursor_y;
                            return true;
                        }
                    }
                }
                break;
            }
            case SDL_TEXTINPUT:
                inputs[0] = 6; // SDL_EVENT_TEXT_INPUT
                for (int i = 0; i < 32 && event.text.text[i]; i++) {
                    inputs[i + 1] = (unsigned char)event.text.text[i];
                }
                
                return true;
            case SDL_TEXTEDITING:
                inputs[0] = 7; // SDL_EVENT_TEXT_EDIT
                return true;
            default:
                break;
        }
    }
    return false;
}
jint SM_arc_backend_sdl_jni_SDL_SDL_GL_SetAttribute_int_int_R_int(jcontext ctx, jint param0, jint param1) {
    return SDL_GL_SetAttribute((SDL_GLattr)param0, param1);
}
jbool SM_arc_backend_sdl_jni_SDL_SDL_GL_ExtensionSupported_java_lang_String_R_boolean(jcontext ctx, jobject param0) {
    return param0 ? SDL_GL_ExtensionSupported(stringToNative(ctx, (jstring)param0)) == SDL_TRUE : false;
}
jlong SM_arc_backend_sdl_jni_SDL_SDL_GL_CreateContext_long_R_long(jcontext ctx, jlong param0) {
    if (!param0) return 0;
    SDL_GLContext gl = SDL_GL_CreateContext((SDL_Window*)param0);
    if (gl) {
        SDL_GL_SetSwapInterval(1);
    }
    printf("[SDL] GL Context created: %p (VSync enabled)\n", gl);
    fflush(stdout);
    return (jlong)gl;
}
jint SM_arc_backend_sdl_jni_SDL_SDL_GL_SetSwapInterval_int_R_int(jcontext ctx, jint param0) {
    return SDL_GL_SetSwapInterval(param0);
}
void SM_arc_backend_sdl_jni_SDL_SDL_GL_SwapWindow_long(jcontext ctx, jlong param0) {
    if (param0) SDL_GL_SwapWindow((SDL_Window*)param0);
}
void SM_arc_backend_sdl_jni_SDL_SDL_GL_GetDrawableSize_long_Array1_int(jcontext ctx, jlong param0, jobject param1) {
    int w = 1280, h = 720;
    if (param0) SDL_GL_GetDrawableSize((SDL_Window*)param0, &w, &h);
    if (param1) {
        jint* d = (jint*)((jarray)param1)->data;
        d[0] = w; d[1] = h;
    }
}


jobject SM_arc_backend_sdl_jni_SDLGL_init_R_java_lang_String(jcontext ctx) {
    if (!gladLoadGLLoader((GLADloadproc)SDL_GL_GetProcAddress)) {
        printf("[GL] Failed to initialize glad!\n");
        fflush(stdout);
        return (jobject)stringFromNative(ctx, "Failed to initialize GLAD");
    }
    printf("[GL] OpenGL Loaded: %s (%s)\n", glGetString(GL_VERSION), glGetString(GL_RENDERER));
    fflush(stdout);
    return nullptr;
}
void SM_arc_backend_sdl_jni_SDLGL_glActiveTexture_int(jcontext ctx, jint param0) { glActiveTexture(param0); }
void SM_arc_backend_sdl_jni_SDLGL_glBindTexture_int_int(jcontext ctx, jint param0, jint param1) { glBindTexture(param0, param1); }
void SM_arc_backend_sdl_jni_SDLGL_glBlendFunc_int_int(jcontext ctx, jint param0, jint param1) { glBlendFunc(param0, param1); }
void SM_arc_backend_sdl_jni_SDLGL_glClear_int(jcontext ctx, jint param0) { glClear(param0); }
void SM_arc_backend_sdl_jni_SDLGL_glClearColor_float_float_float_float(jcontext ctx, jfloat p0, jfloat p1, jfloat p2, jfloat p3) { glClearColor(p0, p1, p2, p3); }
void SM_arc_backend_sdl_jni_SDLGL_glClearDepthf_float(jcontext ctx, jfloat p0) { glClearDepthf(p0); }
void SM_arc_backend_sdl_jni_SDLGL_glClearStencil_int(jcontext ctx, jint p0) { glClearStencil(p0); }
void SM_arc_backend_sdl_jni_SDLGL_glColorMask_boolean_boolean_boolean_boolean(jcontext ctx, jbool p0, jbool p1, jbool p2, jbool p3) { glColorMask(p0, p1, p2, p3); }
void SM_arc_backend_sdl_jni_SDLGL_glCompressedTexImage2D_int_int_int_int_int_int_int_java_nio_Buffer(jcontext ctx, jint p0, jint p1, jint p2, jint p3, jint p4, jint p5, jint p6, jobject p7) {
    glCompressedTexImage2D(p0, p1, p2, p3, p4, p5, p6, getBufPtr(p7));
}
void SM_arc_backend_sdl_jni_SDLGL_glCompressedTexSubImage2D_int_int_int_int_int_int_int_int_java_nio_Buffer(jcontext ctx, jint p0, jint p1, jint p2, jint p3, jint p4, jint p5, jint p6, jint p7, jobject p8) {
    glCompressedTexSubImage2D(p0, p1, p2, p3, p4, p5, p6, p7, getBufPtr(p8));
}
void SM_arc_backend_sdl_jni_SDLGL_glCopyTexImage2D_int_int_int_int_int_int_int_int(jcontext ctx, jint p0, jint p1, jint p2, jint p3, jint p4, jint p5, jint p6, jint p7) {
    glCopyTexImage2D(p0, p1, p2, p3, p4, p5, p6, p7);
}
void SM_arc_backend_sdl_jni_SDLGL_glCopyTexSubImage2D_int_int_int_int_int_int_int_int(jcontext ctx, jint p0, jint p1, jint p2, jint p3, jint p4, jint p5, jint p6, jint p7) {
    glCopyTexSubImage2D(p0, p1, p2, p3, p4, p5, p6, p7);
}
void SM_arc_backend_sdl_jni_SDLGL_glCullFace_int(jcontext ctx, jint p0) { glCullFace(p0); }
void SM_arc_backend_sdl_jni_SDLGL_glDeleteTexture_int(jcontext ctx, jint p0) { GLuint t = p0; glDeleteTextures(1, &t); }
void SM_arc_backend_sdl_jni_SDLGL_glDepthFunc_int(jcontext ctx, jint p0) { glDepthFunc(p0); }
void SM_arc_backend_sdl_jni_SDLGL_glDepthMask_boolean(jcontext ctx, jbool p0) { glDepthMask(p0); }
void SM_arc_backend_sdl_jni_SDLGL_glDepthRangef_float_float(jcontext ctx, jfloat p0, jfloat p1) { glDepthRangef(p0, p1); }
void SM_arc_backend_sdl_jni_SDLGL_glDisable_int(jcontext ctx, jint p0) { glDisable(p0); }
void SM_arc_backend_sdl_jni_SDLGL_glDrawArrays_int_int_int(jcontext ctx, jint p0, jint p1, jint p2) { glDrawArrays(p0, p1, p2); }
void SM_arc_backend_sdl_jni_SDLGL_glDrawElements_int_int_int_java_nio_Buffer(jcontext ctx, jint p0, jint p1, jint p2, jobject p3) {
    glDrawElements(p0, p1, p2, getBufPtr(p3));
}
void SM_arc_backend_sdl_jni_SDLGL_glEnable_int(jcontext ctx, jint p0) { glEnable(p0); }
void SM_arc_backend_sdl_jni_SDLGL_glFinish(jcontext ctx) { glFinish(); }
void SM_arc_backend_sdl_jni_SDLGL_glFlush(jcontext ctx) { glFlush(); }
void SM_arc_backend_sdl_jni_SDLGL_glFrontFace_int(jcontext ctx, jint p0) { glFrontFace(p0); }
jint SM_arc_backend_sdl_jni_SDLGL_glGenTexture_R_int(jcontext ctx) { GLuint t = 0; glGenTextures(1, &t); return t; }
jint SM_arc_backend_sdl_jni_SDLGL_glGetError_R_int(jcontext ctx) { return glGetError(); }
void SM_arc_backend_sdl_jni_SDLGL_glGetIntegerv_int_java_nio_IntBuffer(jcontext ctx, jint p0, jobject p1) {
    glGetIntegerv(p0, (GLint*)getBufPtr(p1));
}
jobject SM_arc_backend_sdl_jni_SDLGL_glGetString_int_R_java_lang_String(jcontext ctx, jint p0) {
    const char* str = (const char*)glGetString(p0);
    return (jobject)stringFromNative(ctx, str ? str : "");
}
void SM_arc_backend_sdl_jni_SDLGL_glHint_int_int(jcontext ctx, jint p0, jint p1) { glHint(p0, p1); }
void SM_arc_backend_sdl_jni_SDLGL_glLineWidth_float(jcontext ctx, jfloat p0) { glLineWidth(p0); }
void SM_arc_backend_sdl_jni_SDLGL_glPixelStorei_int_int(jcontext ctx, jint p0, jint p1) { glPixelStorei(p0, p1); }
void SM_arc_backend_sdl_jni_SDLGL_glPolygonOffset_float_float(jcontext ctx, jfloat p0, jfloat p1) { glPolygonOffset(p0, p1); }
void SM_arc_backend_sdl_jni_SDLGL_glReadPixels_int_int_int_int_int_int_java_nio_Buffer(jcontext ctx, jint p0, jint p1, jint p2, jint p3, jint p4, jint p5, jobject p6) {
    glReadPixels(p0, p1, p2, p3, p4, p5, getBufPtr(p6));
}
void SM_arc_backend_sdl_jni_SDLGL_glScissor_int_int_int_int(jcontext ctx, jint p0, jint p1, jint p2, jint p3) { glScissor(p0, p1, p2, p3); }
void SM_arc_backend_sdl_jni_SDLGL_glStencilFunc_int_int_int(jcontext ctx, jint p0, jint p1, jint p2) { glStencilFunc(p0, p1, p2); }
void SM_arc_backend_sdl_jni_SDLGL_glStencilMask_int(jcontext ctx, jint p0) { glStencilMask(p0); }
void SM_arc_backend_sdl_jni_SDLGL_glStencilOp_int_int_int(jcontext ctx, jint p0, jint p1, jint p2) { glStencilOp(p0, p1, p2); }
static inline GLenum toSizedInternalFormat(jint format, jint type) {
    switch (format) {
        case GL_RGBA:
            if (type == GL_FLOAT) return GL_RGBA32F;
            if (type == 0x8D61 /* GL_HALF_FLOAT */ || type == 0x140B /* GL_HALF_FLOAT_OES */) return GL_RGBA16F;
            return GL_RGBA8;
        case GL_RGB:
            if (type == GL_FLOAT) return GL_RGB32F;
            if (type == 0x8D61 || type == 0x140B) return GL_RGB16F;
            return GL_RGB8;
        case GL_DEPTH_COMPONENT:
        case 0x81A5: /* GL_DEPTH_COMPONENT16 */
        case 0x81A6: /* GL_DEPTH_COMPONENT24 */
        case 0x81A7: /* GL_DEPTH_COMPONENT32 */
            return GL_DEPTH_COMPONENT24;
        case GL_DEPTH_STENCIL:
        case 0x88F0: /* GL_DEPTH24_STENCIL8 */
        case 0x8D48: /* GL_STENCIL_INDEX8 */
            return GL_DEPTH24_STENCIL8;
        case GL_ALPHA:
        case 0x1909: /* GL_LUMINANCE */
            return GL_R8;
        case 0x190A: /* GL_LUMINANCE_ALPHA */
            return GL_RG8;
        default:
            return (GLenum)format;
    }
}

void SM_arc_backend_sdl_jni_SDLGL_glTexImage2D_int_int_int_int_int_int_int_int_java_nio_Buffer(jcontext ctx, jint p0, jint p1, jint p2, jint p3, jint p4, jint p5, jint p6, jint p7, jobject p8) {
    void* ptr = getBufPtr(p8);
    GLenum internalFormat = toSizedInternalFormat(p2, p7);
    GLenum format = (GLenum)p6;
    if (format == GL_ALPHA || format == 0x1909 /* GL_LUMINANCE */) {
        format = GL_RED;
    } else if (format == 0x190A /* GL_LUMINANCE_ALPHA */) {
        format = GL_RG;
    }
    glTexImage2D(p0, p1, internalFormat, p3, p4, p5, format, p7, ptr);
}
void SM_arc_backend_sdl_jni_SDLGL_glTexParameterf_int_int_float(jcontext ctx, jint p0, jint p1, jfloat p2) { glTexParameterf(p0, p1, p2); }
void SM_arc_backend_sdl_jni_SDLGL_glTexSubImage2D_int_int_int_int_int_int_int_int_java_nio_Buffer(jcontext ctx, jint p0, jint p1, jint p2, jint p3, jint p4, jint p5, jint p6, jint p7, jobject p8) {
    GLenum format = (GLenum)p6;
    if (format == GL_ALPHA || format == 0x1909 /* GL_LUMINANCE */) {
        format = GL_RED;
    } else if (format == 0x190A /* GL_LUMINANCE_ALPHA */) {
        format = GL_RG;
    }
    glTexSubImage2D(p0, p1, p2, p3, p4, p5, format, p7, getBufPtr(p8));
}
void SM_arc_backend_sdl_jni_SDLGL_glViewport_int_int_int_int(jcontext ctx, jint p0, jint p1, jint p2, jint p3) { glViewport(p0, p1, p2, p3); }
void SM_arc_backend_sdl_jni_SDLGL_glAttachShader_int_int(jcontext ctx, jint p0, jint p1) { glAttachShader(p0, p1); }
void SM_arc_backend_sdl_jni_SDLGL_glBindAttribLocation_int_int_java_lang_String(jcontext ctx, jint p0, jint p1, jobject p2) {
    glBindAttribLocation(p0, p1, p2 ? stringToNative(ctx, (jstring)p2) : "");
}
void SM_arc_backend_sdl_jni_SDLGL_glBindBuffer_int_int(jcontext ctx, jint p0, jint p1) { glBindBuffer(p0, p1); }
void SM_arc_backend_sdl_jni_SDLGL_glBindFramebuffer_int_int(jcontext ctx, jint p0, jint p1) { glBindFramebuffer(p0, p1); }
void SM_arc_backend_sdl_jni_SDLGL_glBindRenderbuffer_int_int(jcontext ctx, jint p0, jint p1) { glBindRenderbuffer(p0, p1); }
void SM_arc_backend_sdl_jni_SDLGL_glBlendColor_float_float_float_float(jcontext ctx, jfloat p0, jfloat p1, jfloat p2, jfloat p3) { glBlendColor(p0, p1, p2, p3); }
void SM_arc_backend_sdl_jni_SDLGL_glBlendEquation_int(jcontext ctx, jint p0) { glBlendEquation(p0); }
void SM_arc_backend_sdl_jni_SDLGL_glBlendEquationSeparate_int_int(jcontext ctx, jint p0, jint p1) { glBlendEquationSeparate(p0, p1); }
void SM_arc_backend_sdl_jni_SDLGL_glBlendFuncSeparate_int_int_int_int(jcontext ctx, jint p0, jint p1, jint p2, jint p3) { glBlendFuncSeparate(p0, p1, p2, p3); }
void SM_arc_backend_sdl_jni_SDLGL_glBufferData_int_int_java_nio_Buffer_int(jcontext ctx, jint p0, jint p1, jobject p2, jint p3) {
    glBufferData(p0, p1, getBufPtr(p2), p3);
}
void SM_arc_backend_sdl_jni_SDLGL_glBufferSubData_int_int_int_java_nio_Buffer(jcontext ctx, jint p0, jint p1, jint p2, jobject p3) {
    glBufferSubData(p0, p1, p2, getBufPtr(p3));
}
jint SM_arc_backend_sdl_jni_SDLGL_glCheckFramebufferStatus_int_R_int(jcontext ctx, jint p0) { return glCheckFramebufferStatus(p0); }
void SM_arc_backend_sdl_jni_SDLGL_glCompileShader_int(jcontext ctx, jint p0) { glCompileShader(p0); }
jint SM_arc_backend_sdl_jni_SDLGL_glCreateProgram_R_int(jcontext ctx) { return glCreateProgram(); }
jint SM_arc_backend_sdl_jni_SDLGL_glCreateShader_int_R_int(jcontext ctx, jint p0) { return glCreateShader(p0); }
void SM_arc_backend_sdl_jni_SDLGL_glDeleteBuffer_int(jcontext ctx, jint p0) { GLuint b = p0; glDeleteBuffers(1, &b); }
void SM_arc_backend_sdl_jni_SDLGL_glDeleteFramebuffer_int(jcontext ctx, jint p0) { GLuint f = p0; glDeleteFramebuffers(1, &f); }
void SM_arc_backend_sdl_jni_SDLGL_glDeleteProgram_int(jcontext ctx, jint p0) { glDeleteProgram(p0); }
void SM_arc_backend_sdl_jni_SDLGL_glDeleteRenderbuffer_int(jcontext ctx, jint p0) { GLuint r = p0; glDeleteRenderbuffers(1, &r); }
void SM_arc_backend_sdl_jni_SDLGL_glDeleteShader_int(jcontext ctx, jint p0) { glDeleteShader(p0); }
void SM_arc_backend_sdl_jni_SDLGL_glDetachShader_int_int(jcontext ctx, jint p0, jint p1) { glDetachShader(p0, p1); }
void SM_arc_backend_sdl_jni_SDLGL_glDisableVertexAttribArray_int(jcontext ctx, jint p0) { glDisableVertexAttribArray(p0); }
void SM_arc_backend_sdl_jni_SDLGL_glEnableVertexAttribArray_int(jcontext ctx, jint p0) { glEnableVertexAttribArray(p0); }
void SM_arc_backend_sdl_jni_SDLGL_glFramebufferRenderbuffer_int_int_int_int(jcontext ctx, jint p0, jint p1, jint p2, jint p3) { glFramebufferRenderbuffer(p0, p1, p2, p3); }
jint SM_arc_backend_sdl_jni_SDLGL_glGenBuffer_R_int(jcontext ctx) { GLuint b = 0; glGenBuffers(1, &b); return b; }
void SM_arc_backend_sdl_jni_SDLGL_glFramebufferTexture2D_int_int_int_int_int(jcontext ctx, jint target, jint attachment, jint textarget, jint texture, jint level) {
    if (texture > 0) {
        GLint prevTex = 0;
        GLenum bindQuery = GL_TEXTURE_BINDING_2D;
        if (textarget == GL_TEXTURE_CUBE_MAP || (textarget >= GL_TEXTURE_CUBE_MAP_POSITIVE_X && textarget <= GL_TEXTURE_CUBE_MAP_NEGATIVE_Z)) {
            bindQuery = GL_TEXTURE_BINDING_CUBE_MAP;
        }
        glGetIntegerv(bindQuery, &prevTex);
        GLenum bindTarget = (textarget >= GL_TEXTURE_CUBE_MAP_POSITIVE_X && textarget <= GL_TEXTURE_CUBE_MAP_NEGATIVE_Z) ? GL_TEXTURE_CUBE_MAP : textarget;
        glBindTexture(bindTarget, texture);
        glTexParameteri(bindTarget, GL_TEXTURE_BASE_LEVEL, 0);
        glTexParameteri(bindTarget, GL_TEXTURE_MAX_LEVEL, level > 0 ? level : 0);
        
        glFramebufferTexture2D(target, attachment, textarget, texture, level);
        
        if (prevTex != (GLint)texture) {
            glBindTexture(bindTarget, prevTex);
        }
    } else {
        glFramebufferTexture2D(target, attachment, textarget, texture, level);
    }
}
jint SM_arc_backend_sdl_jni_SDLGL_glGenFramebuffer_R_int(jcontext ctx) { GLuint f = 0; glGenFramebuffers(1, &f); return f; }
jint SM_arc_backend_sdl_jni_SDLGL_glGenRenderbuffer_R_int(jcontext ctx) { GLuint r = 0; glGenRenderbuffers(1, &r); return r; }
void SM_arc_backend_sdl_jni_SDLGL_glGenerateMipmap_int(jcontext ctx, jint p0) { glGenerateMipmap(p0); }
jint SM_arc_backend_sdl_jni_SDLGL_glGetAttribLocation_int_java_lang_String_R_int(jcontext ctx, jint p0, jobject p1) {
    return glGetAttribLocation(p0, p1 ? stringToNative(ctx, (jstring)p1) : "");
}
void SM_arc_backend_sdl_jni_SDLGL_glGetProgramiv_int_int_java_nio_IntBuffer(jcontext ctx, jint p0, jint p1, jobject p2) {
    glGetProgramiv(p0, p1, (GLint*)getBufPtr(p2));
}
jobject SM_arc_backend_sdl_jni_SDLGL_glGetProgramInfoLog_int_R_java_lang_String(jcontext ctx, jint p0) {
    char buf[4096]{};
    GLsizei len = 0;
    glGetProgramInfoLog(p0, sizeof(buf), &len, buf);
    return (jobject)stringFromNative(ctx, buf);
}
void SM_arc_backend_sdl_jni_SDLGL_glGetShaderiv_int_int_java_nio_IntBuffer(jcontext ctx, jint p0, jint p1, jobject p2) {
    glGetShaderiv(p0, p1, (GLint*)getBufPtr(p2));
}
jobject SM_arc_backend_sdl_jni_SDLGL_glGetShaderInfoLog_int_R_java_lang_String(jcontext ctx, jint p0) {
    char buf[4096]{};
    GLsizei len = 0;
    glGetShaderInfoLog(p0, sizeof(buf), &len, buf);
    return (jobject)stringFromNative(ctx, buf);
}
jint SM_arc_backend_sdl_jni_SDLGL_glGetUniformLocation_int_java_lang_String_R_int(jcontext ctx, jint p0, jobject p1) {
    return glGetUniformLocation(p0, p1 ? stringToNative(ctx, (jstring)p1) : "");
}
void SM_arc_backend_sdl_jni_SDLGL_glGetUniformfv_int_int_java_nio_FloatBuffer(jcontext ctx, jint p0, jint p1, jobject p2) {
    glGetUniformfv(p0, p1, (GLfloat*)getBufPtr(p2));
}
void SM_arc_backend_sdl_jni_SDLGL_glGetUniformiv_int_int_java_nio_IntBuffer(jcontext ctx, jint p0, jint p1, jobject p2) {
    glGetUniformiv(p0, p1, (GLint*)getBufPtr(p2));
}
void SM_arc_backend_sdl_jni_SDLGL_glLinkProgram_int(jcontext ctx, jint p0) { glLinkProgram(p0); }
void SM_arc_backend_sdl_jni_SDLGL_glRenderbufferStorage_int_int_int_int(jcontext ctx, jint p0, jint p1, jint p2, jint p3) { 
    glRenderbufferStorage(p0, toSizedInternalFormat(p1, GL_UNSIGNED_BYTE), p2, p3); 
}
void SM_arc_backend_sdl_jni_SDLGL_glShaderSource_int_java_lang_String(jcontext ctx, jint p0, jobject p1) {
    const char* src = p1 ? stringToNative(ctx, (jstring)p1) : "";
    glShaderSource(p0, 1, &src, NULL);
}
void SM_arc_backend_sdl_jni_SDLGL_glTexParameteri_int_int_int(jcontext ctx, jint p0, jint p1, jint p2) { glTexParameteri(p0, p1, p2); }
void SM_arc_backend_sdl_jni_SDLGL_glUniform1f_int_float(jcontext ctx, jint p0, jfloat p1) { glUniform1f(p0, p1); }
void SM_arc_backend_sdl_jni_SDLGL_glUniform1fv_int_int_java_nio_FloatBuffer(jcontext ctx, jint p0, jint p1, jobject p2) {
    glUniform1fv(p0, p1, (GLfloat*)getBufPtr(p2));
}
void SM_arc_backend_sdl_jni_SDLGL_glUniform1i_int_int(jcontext ctx, jint p0, jint p1) { glUniform1i(p0, p1); }
void SM_arc_backend_sdl_jni_SDLGL_glUniform1iv_int_int_java_nio_IntBuffer(jcontext ctx, jint p0, jint p1, jobject p2) {
    glUniform1iv(p0, p1, (GLint*)getBufPtr(p2));
}
void SM_arc_backend_sdl_jni_SDLGL_glUniform2f_int_float_float(jcontext ctx, jint p0, jfloat p1, jfloat p2) { glUniform2f(p0, p1, p2); }
void SM_arc_backend_sdl_jni_SDLGL_glUniform2fv_int_int_java_nio_FloatBuffer(jcontext ctx, jint p0, jint p1, jobject p2) {
    glUniform2fv(p0, p1, (GLfloat*)getBufPtr(p2));
}
void SM_arc_backend_sdl_jni_SDLGL_glUniform2i_int_int_int(jcontext ctx, jint p0, jint p1, jint p2) { glUniform2i(p0, p1, p2); }
void SM_arc_backend_sdl_jni_SDLGL_glUniform2iv_int_int_java_nio_IntBuffer(jcontext ctx, jint p0, jint p1, jobject p2) {
    glUniform2iv(p0, p1, (GLint*)getBufPtr(p2));
}
void SM_arc_backend_sdl_jni_SDLGL_glUniform3f_int_float_float_float(jcontext ctx, jint p0, jfloat p1, jfloat p2, jfloat p3) { glUniform3f(p0, p1, p2, p3); }
void SM_arc_backend_sdl_jni_SDLGL_glUniform3fv_int_int_java_nio_FloatBuffer(jcontext ctx, jint p0, jint p1, jobject p2) {
    glUniform3fv(p0, p1, (GLfloat*)getBufPtr(p2));
}
void SM_arc_backend_sdl_jni_SDLGL_glUniform3i_int_int_int_int(jcontext ctx, jint p0, jint p1, jint p2, jint p3) { glUniform3i(p0, p1, p2, p3); }
void SM_arc_backend_sdl_jni_SDLGL_glUniform3iv_int_int_java_nio_IntBuffer(jcontext ctx, jint p0, jint p1, jobject p2) {
    glUniform3iv(p0, p1, (GLint*)getBufPtr(p2));
}
void SM_arc_backend_sdl_jni_SDLGL_glUniform4f_int_float_float_float_float(jcontext ctx, jint p0, jfloat p1, jfloat p2, jfloat p3, jfloat p4) { glUniform4f(p0, p1, p2, p3, p4); }
void SM_arc_backend_sdl_jni_SDLGL_glUniform4fv_int_int_java_nio_FloatBuffer(jcontext ctx, jint p0, jint p1, jobject p2) {
    glUniform4fv(p0, p1, (GLfloat*)getBufPtr(p2));
}
void SM_arc_backend_sdl_jni_SDLGL_glUniform4i_int_int_int_int_int(jcontext ctx, jint p0, jint p1, jint p2, jint p3, jint p4) { glUniform4i(p0, p1, p2, p3, p4); }
void SM_arc_backend_sdl_jni_SDLGL_glUniform4iv_int_int_java_nio_IntBuffer(jcontext ctx, jint p0, jint p1, jobject p2) {
    glUniform4iv(p0, p1, (GLint*)getBufPtr(p2));
}
void SM_arc_backend_sdl_jni_SDLGL_glUniformMatrix2fv_int_int_boolean_java_nio_FloatBuffer(jcontext ctx, jint p0, jint p1, jbool p2, jobject p3) {
    glUniformMatrix2fv(p0, p1, p2, (GLfloat*)getBufPtr(p3));
}
void SM_arc_backend_sdl_jni_SDLGL_glUniformMatrix3fv_int_int_boolean_java_nio_FloatBuffer(jcontext ctx, jint p0, jint p1, jbool p2, jobject p3) {
    glUniformMatrix3fv(p0, p1, p2, (GLfloat*)getBufPtr(p3));
}
void SM_arc_backend_sdl_jni_SDLGL_glUniformMatrix4fv_int_int_boolean_java_nio_FloatBuffer(jcontext ctx, jint p0, jint p1, jbool p2, jobject p3) {
    glUniformMatrix4fv(p0, p1, p2, (GLfloat*)getBufPtr(p3));
}
void SM_arc_backend_sdl_jni_SDLGL_glUseProgram_int(jcontext ctx, jint p0) { glUseProgram(p0); }
void SM_arc_backend_sdl_jni_SDLGL_glValidateProgram_int(jcontext ctx, jint p0) { glValidateProgram(p0); }
void SM_arc_backend_sdl_jni_SDLGL_glVertexAttribPointer_int_int_int_boolean_int_int(jcontext ctx, jint p0, jint p1, jint p2, jbool p3, jint p4, jint p5) {
    glVertexAttribPointer(p0, p1, p2, p3, p4, (const void*)(intptr_t)p5);
}
void SM_arc_backend_sdl_jni_SDLGL_glVertexAttribPointer_int_int_int_boolean_int_java_lang_Object(jcontext ctx, jint p0, jint p1, jint p2, jbool p3, jint p4, jobject p5) {
    glVertexAttribPointer(p0, p1, p2, p3, p4, getBufPtr(p5));
}
void SM_arc_backend_sdl_jni_SDLGL_glBindVertexArray_int(jcontext ctx, jint p0) { glBindVertexArray(p0); }
void SM_arc_backend_sdl_jni_SDLGL_glDeleteVertexArrays_int_java_nio_IntBuffer(jcontext ctx, jint p0, jobject p1) {
    glDeleteVertexArrays(p0, (const GLuint*)getBufPtr(p1));
}
void SM_arc_backend_sdl_jni_SDLGL_glGenVertexArrays_int_java_nio_IntBuffer(jcontext ctx, jint p0, jobject p1) {
    glGenVertexArrays(p0, (GLuint*)getBufPtr(p1));
}
void SM_arc_backend_sdl_jni_SDLGL_glDrawElements_int_int_int_int(jcontext ctx, jint p0, jint p1, jint p2, jint p3) {
    glDrawElements(p0, p1, p2, (const void*)(intptr_t)p3);
}
jobject SM_arc_backend_sdl_jni_SDLGL_glGetActiveAttrib_int_int_java_lang_Object_java_lang_Object_R_java_lang_String(jcontext ctx, jint program, jint index, jobject sizeBuf, jobject typeBuf) {
    char name[256] = {0};
    GLsizei length = 0;
    GLint size = 0;
    GLenum type = 0;
    glGetActiveAttrib((GLuint)program, (GLuint)index, sizeof(name) - 1, &length, &size, &type, name);
    if (sizeBuf) {
        GLint* sptr = (GLint*)getBufPtr(sizeBuf);
        if (sptr) *sptr = size;
    }
    if (typeBuf) {
        GLint* tptr = (GLint*)getBufPtr(typeBuf);
        if (tptr) *tptr = (GLint)type;
    }
    return (jobject)stringFromNative(ctx, name);
}
jobject SM_arc_backend_sdl_jni_SDLGL_glGetActiveUniform_int_int_java_lang_Object_java_lang_Object_R_java_lang_String(jcontext ctx, jint program, jint index, jobject sizeBuf, jobject typeBuf) {
    char name[256] = {0};
    GLsizei length = 0;
    GLint size = 0;
    GLenum type = 0;
    glGetActiveUniform((GLuint)program, (GLuint)index, sizeof(name) - 1, &length, &size, &type, name);
    if (sizeBuf) {
        GLint* sptr = (GLint*)getBufPtr(sizeBuf);
        if (sptr) *sptr = size;
    }
    if (typeBuf) {
        GLint* tptr = (GLint*)getBufPtr(typeBuf);
        if (tptr) *tptr = (GLint)type;
    }
    return (jobject)stringFromNative(ctx, name);
}
void SM_arc_backend_sdl_jni_SDLGL_glGetBooleanv_int_java_nio_Buffer(jcontext ctx, jint p0, jobject p1) {
    glGetBooleanv(p0, (GLboolean*)getBufPtr(p1));
}
void SM_arc_backend_sdl_jni_SDLGL_glGetBufferParameteriv_int_int_java_nio_IntBuffer(jcontext ctx, jint p0, jint p1, jobject p2) {
    glGetBufferParameteriv(p0, p1, (GLint*)getBufPtr(p2));
}
void SM_arc_backend_sdl_jni_SDLGL_glGetFloatv_int_java_nio_FloatBuffer(jcontext ctx, jint p0, jobject p1) {
    glGetFloatv(p0, (GLfloat*)getBufPtr(p1));
}
void SM_arc_backend_sdl_jni_SDLGL_glGetFramebufferAttachmentParameteriv_int_int_int_java_nio_IntBuffer(jcontext ctx, jint p0, jint p1, jint p2, jobject p3) {
    glGetFramebufferAttachmentParameteriv(p0, p1, p2, (GLint*)getBufPtr(p3));
}
void SM_arc_backend_sdl_jni_SDLGL_glGetRenderbufferParameteriv_int_int_java_nio_IntBuffer(jcontext ctx, jint p0, jint p1, jobject p2) {
    glGetRenderbufferParameteriv(p0, p1, (GLint*)getBufPtr(p2));
}
void SM_arc_backend_sdl_jni_SDLGL_glGetShaderPrecisionFormat_int_int_java_nio_IntBuffer_java_nio_IntBuffer(jcontext ctx, jint p0, jint p1, jobject p2, jobject p3) {
    glGetShaderPrecisionFormat(p0, p1, (GLint*)getBufPtr(p2), (GLint*)getBufPtr(p3));
}
void SM_arc_backend_sdl_jni_SDLGL_glGetTexParameterfv_int_int_java_nio_FloatBuffer(jcontext ctx, jint p0, jint p1, jobject p2) {
    glGetTexParameterfv(p0, p1, (GLfloat*)getBufPtr(p2));
}
void SM_arc_backend_sdl_jni_SDLGL_glGetTexParameteriv_int_int_java_nio_IntBuffer(jcontext ctx, jint p0, jint p1, jobject p2) {
    glGetTexParameteriv(p0, p1, (GLint*)getBufPtr(p2));
}
void SM_arc_backend_sdl_jni_SDLGL_glGetVertexAttribfv_int_int_java_nio_FloatBuffer(jcontext ctx, jint p0, jint p1, jobject p2) {
    glGetVertexAttribfv(p0, p1, (GLfloat*)getBufPtr(p2));
}
void SM_arc_backend_sdl_jni_SDLGL_glGetVertexAttribiv_int_int_java_nio_IntBuffer(jcontext ctx, jint p0, jint p1, jobject p2) {
    glGetVertexAttribiv(p0, p1, (GLint*)getBufPtr(p2));
}
jbool SM_arc_backend_sdl_jni_SDLGL_glIsBuffer_int_R_boolean(jcontext ctx, jint p0) { return glIsBuffer(p0); }
jbool SM_arc_backend_sdl_jni_SDLGL_glIsEnabled_int_R_boolean(jcontext ctx, jint p0) { return glIsEnabled(p0); }
jbool SM_arc_backend_sdl_jni_SDLGL_glIsFramebuffer_int_R_boolean(jcontext ctx, jint p0) { return glIsFramebuffer(p0); }
jbool SM_arc_backend_sdl_jni_SDLGL_glIsProgram_int_R_boolean(jcontext ctx, jint p0) { return glIsProgram(p0); }
jbool SM_arc_backend_sdl_jni_SDLGL_glIsRenderbuffer_int_R_boolean(jcontext ctx, jint p0) { return glIsRenderbuffer(p0); }
jbool SM_arc_backend_sdl_jni_SDLGL_glIsShader_int_R_boolean(jcontext ctx, jint p0) { return glIsShader(p0); }
jbool SM_arc_backend_sdl_jni_SDLGL_glIsTexture_int_R_boolean(jcontext ctx, jint p0) { return glIsTexture(p0); }
void SM_arc_backend_sdl_jni_SDLGL_glReleaseShaderCompiler(jcontext ctx) { glReleaseShaderCompiler(); }
void SM_arc_backend_sdl_jni_SDLGL_glSampleCoverage_float_boolean(jcontext ctx, jfloat p0, jbool p1) { glSampleCoverage(p0, p1); }
void SM_arc_backend_sdl_jni_SDLGL_glStencilFuncSeparate_int_int_int_int(jcontext ctx, jint p0, jint p1, jint p2, jint p3) { glStencilFuncSeparate(p0, p1, p2, p3); }
void SM_arc_backend_sdl_jni_SDLGL_glStencilMaskSeparate_int_int(jcontext ctx, jint p0, jint p1) { glStencilMaskSeparate(p0, p1); }
void SM_arc_backend_sdl_jni_SDLGL_glStencilOpSeparate_int_int_int_int(jcontext ctx, jint p0, jint p1, jint p2, jint p3) { glStencilOpSeparate(p0, p1, p2, p3); }
void SM_arc_backend_sdl_jni_SDLGL_glTexParameterfv_int_int_java_nio_FloatBuffer(jcontext ctx, jint p0, jint p1, jobject p2) { glTexParameterfv(p0, p1, (const GLfloat*)getBufPtr(p2)); }
void SM_arc_backend_sdl_jni_SDLGL_glTexParameteriv_int_int_java_nio_IntBuffer(jcontext ctx, jint p0, jint p1, jobject p2) { glTexParameteriv(p0, p1, (const GLint*)getBufPtr(p2)); }
void SM_arc_backend_sdl_jni_SDLGL_glUniform1fv_int_int_Array1_float_int(jcontext ctx, jint p0, jint p1, jobject p2, jint p3) { if (p2) glUniform1fv(p0, p1, ((GLfloat*)((jarray)p2)->data) + p3); }
void SM_arc_backend_sdl_jni_SDLGL_glUniform1iv_int_int_Array1_int_int(jcontext ctx, jint p0, jint p1, jobject p2, jint p3) { if (p2) glUniform1iv(p0, p1, ((GLint*)((jarray)p2)->data) + p3); }
void SM_arc_backend_sdl_jni_SDLGL_glUniform2fv_int_int_Array1_float_int(jcontext ctx, jint p0, jint p1, jobject p2, jint p3) { if (p2) glUniform2fv(p0, p1, ((GLfloat*)((jarray)p2)->data) + p3); }
void SM_arc_backend_sdl_jni_SDLGL_glUniform2iv_int_int_Array1_int_int(jcontext ctx, jint p0, jint p1, jobject p2, jint p3) { if (p2) glUniform2iv(p0, p1, ((GLint*)((jarray)p2)->data) + p3); }
void SM_arc_backend_sdl_jni_SDLGL_glUniform3fv_int_int_Array1_float_int(jcontext ctx, jint p0, jint p1, jobject p2, jint p3) { if (p2) glUniform3fv(p0, p1, ((GLfloat*)((jarray)p2)->data) + p3); }
void SM_arc_backend_sdl_jni_SDLGL_glUniform3iv_int_int_Array1_int_int(jcontext ctx, jint p0, jint p1, jobject p2, jint p3) { if (p2) glUniform3iv(p0, p1, ((GLint*)((jarray)p2)->data) + p3); }
void SM_arc_backend_sdl_jni_SDLGL_glUniform4fv_int_int_Array1_float_int(jcontext ctx, jint p0, jint p1, jobject p2, jint p3) { if (p2) glUniform4fv(p0, p1, ((GLfloat*)((jarray)p2)->data) + p3); }
void SM_arc_backend_sdl_jni_SDLGL_glUniform4iv_int_int_Array1_int_int(jcontext ctx, jint p0, jint p1, jobject p2, jint p3) { if (p2) glUniform4iv(p0, p1, ((GLint*)((jarray)p2)->data) + p3); }
void SM_arc_backend_sdl_jni_SDLGL_glUniformMatrix2fv_int_int_boolean_Array1_float_int(jcontext ctx, jint p0, jint p1, jbool p2, jobject p3, jint p4) { if (p3) glUniformMatrix2fv(p0, p1, p2, ((GLfloat*)((jarray)p3)->data) + p4); }
void SM_arc_backend_sdl_jni_SDLGL_glUniformMatrix3fv_int_int_boolean_Array1_float_int(jcontext ctx, jint p0, jint p1, jbool p2, jobject p3, jint p4) { if (p3) glUniformMatrix3fv(p0, p1, p2, ((GLfloat*)((jarray)p3)->data) + p4); }
void SM_arc_backend_sdl_jni_SDLGL_glUniformMatrix4fv_int_int_boolean_Array1_float_int(jcontext ctx, jint p0, jint p1, jbool p2, jobject p3, jint p4) { if (p3) glUniformMatrix4fv(p0, p1, p2, ((GLfloat*)((jarray)p3)->data) + p4); }
void SM_arc_backend_sdl_jni_SDLGL_glVertexAttrib1f_int_float(jcontext ctx, jint p0, jfloat p1) { glVertexAttrib1f(p0, p1); }
void SM_arc_backend_sdl_jni_SDLGL_glVertexAttrib1fv_int_java_nio_FloatBuffer(jcontext ctx, jint p0, jobject p1) { glVertexAttrib1fv(p0, (const GLfloat*)getBufPtr(p1)); }
void SM_arc_backend_sdl_jni_SDLGL_glVertexAttrib2f_int_float_float(jcontext ctx, jint p0, jfloat p1, jfloat p2) { glVertexAttrib2f(p0, p1, p2); }
void SM_arc_backend_sdl_jni_SDLGL_glVertexAttrib2fv_int_java_nio_FloatBuffer(jcontext ctx, jint p0, jobject p1) { glVertexAttrib2fv(p0, (const GLfloat*)getBufPtr(p1)); }
void SM_arc_backend_sdl_jni_SDLGL_glVertexAttrib3f_int_float_float_float(jcontext ctx, jint p0, jfloat p1, jfloat p2, jfloat p3) { glVertexAttrib3f(p0, p1, p2, p3); }
void SM_arc_backend_sdl_jni_SDLGL_glVertexAttrib3fv_int_java_nio_FloatBuffer(jcontext ctx, jint p0, jobject p1) { glVertexAttrib3fv(p0, (const GLfloat*)getBufPtr(p1)); }
void SM_arc_backend_sdl_jni_SDLGL_glVertexAttrib4f_int_float_float_float_float(jcontext ctx, jint p0, jfloat p1, jfloat p2, jfloat p3, jfloat p4) { glVertexAttrib4f(p0, p1, p2, p3, p4); }
void SM_arc_backend_sdl_jni_SDLGL_glVertexAttrib4fv_int_java_nio_FloatBuffer(jcontext ctx, jint p0, jobject p1) { glVertexAttrib4fv(p0, (const GLfloat*)getBufPtr(p1)); }
void SM_arc_backend_sdl_jni_SDLGL_glReadBuffer_int(jcontext ctx, jint p0) { glReadBuffer(p0); }
void SM_arc_backend_sdl_jni_SDLGL_glDrawRangeElements_int_int_int_int_int_int(jcontext ctx, jint p0, jint p1, jint p2, jint p3, jint p4, jint p5) { glDrawRangeElements(p0, p1, p2, p3, p4, (const void*)(intptr_t)p5); }
void SM_arc_backend_sdl_jni_SDLGL_glDrawRangeElements_int_int_int_int_int_java_nio_Buffer(jcontext ctx, jint p0, jint p1, jint p2, jint p3, jint p4, jobject p5) { glDrawRangeElements(p0, p1, p2, p3, p4, getBufPtr(p5)); }
void SM_arc_backend_sdl_jni_SDLGL_glTexImage3D_int_int_int_int_int_int_int_int_int_int(jcontext ctx, jint p0, jint p1, jint p2, jint p3, jint p4, jint p5, jint p6, jint p7, jint p8, jint p9) { glTexImage3D(p0, p1, p2, p3, p4, p5, p6, p7, p8, (const void*)(intptr_t)p9); }
void SM_arc_backend_sdl_jni_SDLGL_glTexImage3D_int_int_int_int_int_int_int_int_int_java_nio_Buffer(jcontext ctx, jint p0, jint p1, jint p2, jint p3, jint p4, jint p5, jint p6, jint p7, jint p8, jobject p9) { glTexImage3D(p0, p1, p2, p3, p4, p5, p6, p7, p8, getBufPtr(p9)); }
void SM_arc_backend_sdl_jni_SDLGL_glTexSubImage3D_int_int_int_int_int_int_int_int_int_int_int(jcontext ctx, jint p0, jint p1, jint p2, jint p3, jint p4, jint p5, jint p6, jint p7, jint p8, jint p9, jint p10) { glTexSubImage3D(p0, p1, p2, p3, p4, p5, p6, p7, p8, p9, (const void*)(intptr_t)p10); }
void SM_arc_backend_sdl_jni_SDLGL_glTexSubImage3D_int_int_int_int_int_int_int_int_int_int_java_nio_Buffer(jcontext ctx, jint p0, jint p1, jint p2, jint p3, jint p4, jint p5, jint p6, jint p7, jint p8, jint p9, jobject p10) { glTexSubImage3D(p0, p1, p2, p3, p4, p5, p6, p7, p8, p9, getBufPtr(p10)); }
void SM_arc_backend_sdl_jni_SDLGL_glCopyTexSubImage3D_int_int_int_int_int_int_int_int_int(jcontext ctx, jint p0, jint p1, jint p2, jint p3, jint p4, jint p5, jint p6, jint p7, jint p8) { glCopyTexSubImage3D(p0, p1, p2, p3, p4, p5, p6, p7, p8); }
void SM_arc_backend_sdl_jni_SDLGL_glGenQueries_int_java_nio_IntBuffer(jcontext ctx, jint p0, jobject p1) { glGenQueries(p0, (GLuint*)getBufPtr(p1)); }
void SM_arc_backend_sdl_jni_SDLGL_glDeleteQueries_int_java_nio_IntBuffer(jcontext ctx, jint p0, jobject p1) { glDeleteQueries(p0, (const GLuint*)getBufPtr(p1)); }
jbool SM_arc_backend_sdl_jni_SDLGL_glIsQuery_int_R_boolean(jcontext ctx, jint p0) { return glIsQuery(p0); }
void SM_arc_backend_sdl_jni_SDLGL_glBeginQuery_int_int(jcontext ctx, jint p0, jint p1) { glBeginQuery(p0, p1); }
void SM_arc_backend_sdl_jni_SDLGL_glEndQuery_int(jcontext ctx, jint p0) { glEndQuery(p0); }
void SM_arc_backend_sdl_jni_SDLGL_glGetQueryiv_int_int_java_nio_IntBuffer(jcontext ctx, jint p0, jint p1, jobject p2) { glGetQueryiv(p0, p1, (GLint*)getBufPtr(p2)); }
void SM_arc_backend_sdl_jni_SDLGL_glGetQueryObjectuiv_int_int_java_nio_IntBuffer(jcontext ctx, jint p0, jint p1, jobject p2) { glGetQueryObjectuiv(p0, p1, (GLuint*)getBufPtr(p2)); }
jbool SM_arc_backend_sdl_jni_SDLGL_glUnmapBuffer_int_R_boolean(jcontext ctx, jint p0) { return glUnmapBuffer(p0); }
jobject SM_arc_backend_sdl_jni_SDLGL_glGetBufferPointerv_int_int_R_java_nio_Buffer(jcontext ctx, jint p0, jint p1) { return nullptr; }
void SM_arc_backend_sdl_jni_SDLGL_glDrawBuffers_int_java_nio_IntBuffer(jcontext ctx, jint p0, jobject p1) { glDrawBuffers(p0, (const GLenum*)getBufPtr(p1)); }
void SM_arc_backend_sdl_jni_SDLGL_glUniformMatrix2x3fv_int_int_boolean_java_nio_FloatBuffer(jcontext ctx, jint p0, jint p1, jbool p2, jobject p3) { glUniformMatrix2x3fv(p0, p1, p2, (const GLfloat*)getBufPtr(p3)); }
void SM_arc_backend_sdl_jni_SDLGL_glUniformMatrix3x2fv_int_int_boolean_java_nio_FloatBuffer(jcontext ctx, jint p0, jint p1, jbool p2, jobject p3) { glUniformMatrix3x2fv(p0, p1, p2, (const GLfloat*)getBufPtr(p3)); }
void SM_arc_backend_sdl_jni_SDLGL_glUniformMatrix2x4fv_int_int_boolean_java_nio_FloatBuffer(jcontext ctx, jint p0, jint p1, jbool p2, jobject p3) { glUniformMatrix2x4fv(p0, p1, p2, (const GLfloat*)getBufPtr(p3)); }
void SM_arc_backend_sdl_jni_SDLGL_glUniformMatrix4x2fv_int_int_boolean_java_nio_FloatBuffer(jcontext ctx, jint p0, jint p1, jbool p2, jobject p3) { glUniformMatrix4x2fv(p0, p1, p2, (const GLfloat*)getBufPtr(p3)); }
void SM_arc_backend_sdl_jni_SDLGL_glUniformMatrix3x4fv_int_int_boolean_java_nio_FloatBuffer(jcontext ctx, jint p0, jint p1, jbool p2, jobject p3) { glUniformMatrix3x4fv(p0, p1, p2, (const GLfloat*)getBufPtr(p3)); }
void SM_arc_backend_sdl_jni_SDLGL_glUniformMatrix4x3fv_int_int_boolean_java_nio_FloatBuffer(jcontext ctx, jint p0, jint p1, jbool p2, jobject p3) { glUniformMatrix4x3fv(p0, p1, p2, (const GLfloat*)getBufPtr(p3)); }
void SM_arc_backend_sdl_jni_SDLGL_glBlitFramebuffer_int_int_int_int_int_int_int_int_int_int(jcontext ctx, jint p0, jint p1, jint p2, jint p3, jint p4, jint p5, jint p6, jint p7, jint p8, jint p9) { glBlitFramebuffer(p0, p1, p2, p3, p4, p5, p6, p7, p8, p9); }
void SM_arc_backend_sdl_jni_SDLGL_glRenderbufferStorageMultisample_int_int_int_int_int(jcontext ctx, jint p0, jint p1, jint p2, jint p3, jint p4) { 
    glRenderbufferStorageMultisample(p0, p1, toSizedInternalFormat(p2, GL_UNSIGNED_BYTE), p3, p4); 
}
void SM_arc_backend_sdl_jni_SDLGL_glFramebufferTextureLayer_int_int_int_int_int(jcontext ctx, jint p0, jint p1, jint p2, jint p3, jint p4) { glFramebufferTextureLayer(p0, p1, p2, p3, p4); }
void SM_arc_backend_sdl_jni_SDLGL_glFlushMappedBufferRange_int_int_int(jcontext ctx, jint p0, jint p1, jint p2) { glFlushMappedBufferRange(p0, p1, p2); }
jbool SM_arc_backend_sdl_jni_SDLGL_glIsVertexArray_int_R_boolean(jcontext ctx, jint p0) { return glIsVertexArray(p0); }
void SM_arc_backend_sdl_jni_SDLGL_glBeginTransformFeedback_int(jcontext ctx, jint p0) { glBeginTransformFeedback(p0); }
void SM_arc_backend_sdl_jni_SDLGL_glEndTransformFeedback(jcontext ctx) { glEndTransformFeedback(); }
void SM_arc_backend_sdl_jni_SDLGL_glBindBufferRange_int_int_int_int_int(jcontext ctx, jint p0, jint p1, jint p2, jint p3, jint p4) { glBindBufferRange(p0, p1, p2, p3, p4); }
void SM_arc_backend_sdl_jni_SDLGL_glBindBufferBase_int_int_int(jcontext ctx, jint p0, jint p1, jint p2) { glBindBufferBase(p0, p1, p2); }
void SM_arc_backend_sdl_jni_SDLGL_glTransformFeedbackVaryings_int_Array1_java_lang_String_int(jcontext ctx, jint p0, jobject p1, jint p2) {}
void SM_arc_backend_sdl_jni_SDLGL_glVertexAttribIPointer_int_int_int_int_int(jcontext ctx, jint p0, jint p1, jint p2, jint p3, jint p4) { glVertexAttribIPointer(p0, p1, p2, p3, (const void*)(intptr_t)p4); }
void SM_arc_backend_sdl_jni_SDLGL_glGetVertexAttribIiv_int_int_java_nio_IntBuffer(jcontext ctx, jint p0, jint p1, jobject p2) { glGetVertexAttribIiv(p0, p1, (GLint*)getBufPtr(p2)); }
void SM_arc_backend_sdl_jni_SDLGL_glGetVertexAttribIuiv_int_int_java_nio_IntBuffer(jcontext ctx, jint p0, jint p1, jobject p2) { glGetVertexAttribIuiv(p0, p1, (GLuint*)getBufPtr(p2)); }
void SM_arc_backend_sdl_jni_SDLGL_glVertexAttribI4i_int_int_int_int_int(jcontext ctx, jint p0, jint p1, jint p2, jint p3, jint p4) { glVertexAttribI4i(p0, p1, p2, p3, p4); }
void SM_arc_backend_sdl_jni_SDLGL_glVertexAttribI4ui_int_int_int_int_int(jcontext ctx, jint p0, jint p1, jint p2, jint p3, jint p4) { glVertexAttribI4ui(p0, p1, p2, p3, p4); }
void SM_arc_backend_sdl_jni_SDLGL_glGetUniformuiv_int_int_java_nio_IntBuffer(jcontext ctx, jint p0, jint p1, jobject p2) { glGetUniformuiv(p0, p1, (GLuint*)getBufPtr(p2)); }
jint SM_arc_backend_sdl_jni_SDLGL_glGetFragDataLocation_int_java_lang_String_R_int(jcontext ctx, jint p0, jobject p1) { return glGetFragDataLocation(p0, p1 ? stringToNative(ctx, (jstring)p1) : ""); }
void SM_arc_backend_sdl_jni_SDLGL_glUniform1uiv_int_int_java_nio_IntBuffer(jcontext ctx, jint p0, jint p1, jobject p2) { glUniform1uiv(p0, p1, (const GLuint*)getBufPtr(p2)); }
void SM_arc_backend_sdl_jni_SDLGL_glUniform3uiv_int_int_java_nio_IntBuffer(jcontext ctx, jint p0, jint p1, jobject p2) { glUniform3uiv(p0, p1, (const GLuint*)getBufPtr(p2)); }
void SM_arc_backend_sdl_jni_SDLGL_glUniform4uiv_int_int_java_nio_IntBuffer(jcontext ctx, jint p0, jint p1, jobject p2) { glUniform4uiv(p0, p1, (const GLuint*)getBufPtr(p2)); }
void SM_arc_backend_sdl_jni_SDLGL_glClearBufferiv_int_int_java_nio_IntBuffer(jcontext ctx, jint p0, jint p1, jobject p2) { glClearBufferiv(p0, p1, (const GLint*)getBufPtr(p2)); }
void SM_arc_backend_sdl_jni_SDLGL_glClearBufferuiv_int_int_java_nio_IntBuffer(jcontext ctx, jint p0, jint p1, jobject p2) { glClearBufferuiv(p0, p1, (const GLuint*)getBufPtr(p2)); }
void SM_arc_backend_sdl_jni_SDLGL_glClearBufferfv_int_int_java_nio_FloatBuffer(jcontext ctx, jint p0, jint p1, jobject p2) { glClearBufferfv(p0, p1, (const GLfloat*)getBufPtr(p2)); }
void SM_arc_backend_sdl_jni_SDLGL_glClearBufferfi_int_int_float_int(jcontext ctx, jint p0, jint p1, jfloat p2, jint p3) { glClearBufferfi(p0, p1, p2, p3); }
jobject SM_arc_backend_sdl_jni_SDLGL_glGetStringi_int_int_R_java_lang_String(jcontext ctx, jint p0, jint p1) { const char* s = (const char*)glGetStringi(p0, p1); return (jobject)stringFromNative(ctx, s ? s : ""); }
void SM_arc_backend_sdl_jni_SDLGL_glCopyBufferSubData_int_int_int_int_int(jcontext ctx, jint p0, jint p1, jint p2, jint p3, jint p4) { glCopyBufferSubData(p0, p1, p2, p3, p4); }
void SM_arc_backend_sdl_jni_SDLGL_glGetUniformIndices_int_Array1_java_lang_String_java_nio_IntBuffer(jcontext ctx, jint p0, jobject p1, jobject p2) {}
void SM_arc_backend_sdl_jni_SDLGL_glGetActiveUniformsiv_int_int_java_nio_IntBuffer_int_java_nio_IntBuffer(jcontext ctx, jint program, jint uniformCount, jobject uniformIndices, jint pname, jobject params) {
    if (!uniformIndices || !params) return;
    const GLuint* uindices = (const GLuint*)getBufPtr(uniformIndices);
    GLint* p = (GLint*)getBufPtr(params);
    if (uindices && p) glGetActiveUniformsiv((GLuint)program, (GLsizei)uniformCount, uindices, (GLenum)pname, p);
}
jint SM_arc_backend_sdl_jni_SDLGL_glGetUniformBlockIndex_int_java_lang_String_R_int(jcontext ctx, jint p0, jobject p1) { return glGetUniformBlockIndex(p0, p1 ? stringToNative(ctx, (jstring)p1) : ""); }
void SM_arc_backend_sdl_jni_SDLGL_glGetActiveUniformBlockiv_int_int_int_java_nio_IntBuffer(jcontext ctx, jint program, jint uniformBlockIndex, jint pname, jobject params) {
    if (!params) return;
    GLint* p = (GLint*)getBufPtr(params);
    if (p) glGetActiveUniformBlockiv((GLuint)program, (GLuint)uniformBlockIndex, (GLenum)pname, p);
}
void SM_arc_backend_sdl_jni_SDLGL_glGetActiveUniformBlockName_int_int_java_nio_Buffer_java_nio_Buffer(jcontext ctx, jint program, jint uniformBlockIndex, jobject bufSize, jobject name) {
    if (!bufSize || !name) return;
    GLsizei* len = (GLsizei*)getBufPtr(bufSize);
    GLchar* n = (GLchar*)getBufPtr(name);
    if (n) glGetActiveUniformBlockName((GLuint)program, (GLuint)uniformBlockIndex, 256, len, n);
}
void SM_arc_backend_sdl_jni_SDLGL_glUniformBlockBinding_int_int_int(jcontext ctx, jint p0, jint p1, jint p2) { glUniformBlockBinding(p0, p1, p2); }
void SM_arc_backend_sdl_jni_SDLGL_glDrawArraysInstanced_int_int_int_int(jcontext ctx, jint p0, jint p1, jint p2, jint p3) { glDrawArraysInstanced(p0, p1, p2, p3); }
void SM_arc_backend_sdl_jni_SDLGL_glDrawElementsInstanced_int_int_int_int_int(jcontext ctx, jint p0, jint p1, jint p2, jint p3, jint p4) { glDrawElementsInstanced(p0, p1, p2, (const void*)(intptr_t)p3, p4); }
void SM_arc_backend_sdl_jni_SDLGL_glGetInteger64v_int_java_nio_LongBuffer(jcontext ctx, jint p0, jobject p1) { glGetInteger64v(p0, (GLint64*)getBufPtr(p1)); }
void SM_arc_backend_sdl_jni_SDLGL_glGetBufferParameteri64v_int_int_java_nio_LongBuffer(jcontext ctx, jint p0, jint p1, jobject p2) { glGetBufferParameteri64v(p0, p1, (GLint64*)getBufPtr(p2)); }
void SM_arc_backend_sdl_jni_SDLGL_glGenSamplers_int_java_nio_IntBuffer(jcontext ctx, jint p0, jobject p1) { glGenSamplers(p0, (GLuint*)getBufPtr(p1)); }
void SM_arc_backend_sdl_jni_SDLGL_glDeleteSamplers_int_java_nio_IntBuffer(jcontext ctx, jint p0, jobject p1) { glDeleteSamplers(p0, (const GLuint*)getBufPtr(p1)); }
jbool SM_arc_backend_sdl_jni_SDLGL_glIsSampler_int_R_boolean(jcontext ctx, jint p0) { return glIsSampler(p0); }
void SM_arc_backend_sdl_jni_SDLGL_glBindSampler_int_int(jcontext ctx, jint p0, jint p1) { glBindSampler(p0, p1); }
void SM_arc_backend_sdl_jni_SDLGL_glSamplerParameteri_int_int_int(jcontext ctx, jint p0, jint p1, jint p2) { glSamplerParameteri(p0, p1, p2); }
void SM_arc_backend_sdl_jni_SDLGL_glSamplerParameteriv_int_int_java_nio_IntBuffer(jcontext ctx, jint p0, jint p1, jobject p2) { glSamplerParameteriv(p0, p1, (const GLint*)getBufPtr(p2)); }
void SM_arc_backend_sdl_jni_SDLGL_glSamplerParameterf_int_int_float(jcontext ctx, jint p0, jint p1, jfloat p2) { glSamplerParameterf(p0, p1, p2); }
void SM_arc_backend_sdl_jni_SDLGL_glSamplerParameterfv_int_int_java_nio_FloatBuffer(jcontext ctx, jint p0, jint p1, jobject p2) { glSamplerParameterfv(p0, p1, (const GLfloat*)getBufPtr(p2)); }
void SM_arc_backend_sdl_jni_SDLGL_glGetSamplerParameteriv_int_int_java_nio_IntBuffer(jcontext ctx, jint p0, jint p1, jobject p2) { glGetSamplerParameteriv(p0, p1, (GLint*)getBufPtr(p2)); }
void SM_arc_backend_sdl_jni_SDLGL_glGetSamplerParameterfv_int_int_java_nio_FloatBuffer(jcontext ctx, jint p0, jint p1, jobject p2) { glGetSamplerParameterfv(p0, p1, (GLfloat*)getBufPtr(p2)); }
void SM_arc_backend_sdl_jni_SDLGL_glVertexAttribDivisor_int_int(jcontext ctx, jint p0, jint p1) { glVertexAttribDivisor(p0, p1); }
void SM_arc_backend_sdl_jni_SDLGL_glBindTransformFeedback_int_int(jcontext ctx, jint p0, jint p1) { glBindTransformFeedback(p0, p1); }
void SM_arc_backend_sdl_jni_SDLGL_glDeleteTransformFeedbacks_int_java_nio_IntBuffer(jcontext ctx, jint p0, jobject p1) { glDeleteTransformFeedbacks(p0, (const GLuint*)getBufPtr(p1)); }
void SM_arc_backend_sdl_jni_SDLGL_glGenTransformFeedbacks_int_java_nio_IntBuffer(jcontext ctx, jint p0, jobject p1) { glGenTransformFeedbacks(p0, (GLuint*)getBufPtr(p1)); }
jbool SM_arc_backend_sdl_jni_SDLGL_glIsTransformFeedback_int_R_boolean(jcontext ctx, jint p0) { return glIsTransformFeedback(p0); }
void SM_arc_backend_sdl_jni_SDLGL_glPauseTransformFeedback(jcontext ctx) { glPauseTransformFeedback(); }
void SM_arc_backend_sdl_jni_SDLGL_glResumeTransformFeedback(jcontext ctx) { glResumeTransformFeedback(); }
void SM_arc_backend_sdl_jni_SDLGL_glProgramParameteri_int_int_int(jcontext ctx, jint p0, jint p1, jint p2) { glProgramParameteri(p0, p1, p2); }
void SM_arc_backend_sdl_jni_SDLGL_glInvalidateFramebuffer_int_int_java_nio_IntBuffer(jcontext ctx, jint p0, jint p1, jobject p2) { glInvalidateFramebuffer(p0, p1, (const GLenum*)getBufPtr(p2)); }
void SM_arc_backend_sdl_jni_SDLGL_glInvalidateSubFramebuffer_int_int_java_nio_IntBuffer_int_int_int_int(jcontext ctx, jint p0, jint p1, jobject p2, jint p3, jint p4, jint p5, jint p6) { glInvalidateSubFramebuffer(p0, p1, (const GLenum*)getBufPtr(p2), p3, p4, p5, p6); }


void SM_arc_util_Buffers_copyJni_Array1_byte_int_java_nio_Buffer_int_int(jcontext ctx, jobject p0, jint p1, jobject p2, jint p3, jint p4) {
    if (!p0 || !p2) return;
    char* src = (char*)((jarray)p0)->data + p1;
    char* dst = (char*)getBufBase(p2) + p3;
    memcpy(dst, src, p4);
}
void SM_arc_util_Buffers_copyJni_Array1_float_int_java_nio_Buffer_int_int(jcontext ctx, jobject p0, jint p1, jobject p2, jint p3, jint p4) {
    if (!p0 || !p2) return;
    char* src = (char*)((jarray)p0)->data + (p1 * sizeof(float));
    char* dst = (char*)getBufBase(p2) + p3;
    memcpy(dst, src, p4);
}
void SM_arc_util_Buffers_copyJni_Array1_float_java_nio_Buffer_int_int(jcontext ctx, jobject p0, jobject p1, jint p2, jint p3) {
    if (!p0 || !p1) return;
    char* src = (char*)((jarray)p0)->data + (p3 * sizeof(float));
    char* dst = (char*)getBufBase(p1);
    memcpy(dst, src, p2 * sizeof(float));
}
void SM_arc_util_Buffers_copyJni_Array1_int_int_java_nio_Buffer_int_int(jcontext ctx, jobject p0, jint p1, jobject p2, jint p3, jint p4) {
    if (!p0 || !p2) return;
    char* src = (char*)((jarray)p0)->data + (p1 * sizeof(int));
    char* dst = (char*)getBufBase(p2) + p3;
    memcpy(dst, src, p4);
}
void SM_arc_util_Buffers_copyJni_Array1_short_int_java_nio_Buffer_int_int(jcontext ctx, jobject p0, jint p1, jobject p2, jint p3, jint p4) {
    if (!p0 || !p2) return;
    char* src = (char*)((jarray)p0)->data + (p1 * sizeof(short));
    char* dst = (char*)getBufBase(p2) + p3;
    memcpy(dst, src, p4);
}
void SM_arc_util_Buffers_copyJni_java_nio_Buffer_int_java_nio_Buffer_int_int(jcontext ctx, jobject p0, jint p1, jobject p2, jint p3, jint p4) {
    if (!p0 || !p2) return;
    char* src = (char*)getBufBase(p0) + p1;
    char* dst = (char*)getBufBase(p2) + p3;
    memcpy(dst, src, p4);
}
jlong SM_arc_util_Buffers_getBufferAddress_java_nio_Buffer_R_long(jcontext ctx, jobject p0) {
    return (jlong)(intptr_t)getBufPtr(p0);
}
jobject SM_arc_util_Buffers_newDisposableByteBuffer_int_R_java_nio_ByteBuffer(jcontext ctx, jint size) {
    return SM_java_nio_ByteBuffer_allocateDirect_int_R_java_nio_ByteBuffer(ctx, size);
}
void SM_arc_util_Buffers_freeMemory_java_nio_ByteBuffer(jcontext ctx, jobject param0) {
}
void SM_arc_util_Buffers_clear_java_nio_ByteBuffer_int(jcontext ctx, jobject param0, jint size) {
    if (!param0) return;
    void* ptr = getBufPtr(param0);
    if (ptr && size > 0) {
        memset(ptr, 0, size);
    }
}

static std::string g_pixmapFailureReason = "None";

jobject SM_arc_graphics_Pixmap_getFailureReason_R_java_lang_String(jcontext ctx) {
    return (jobject)stringFromNative(ctx, g_pixmapFailureReason.c_str());
}

void SM_arc_graphics_Pixmap_free_long(jcontext ctx, jlong handle) {
    if (handle) {
        free((void*)handle);
    }
}

jobject SM_arc_graphics_Pixmap_createJni_Array1_long_int_int_R_java_nio_ByteBuffer(jcontext ctx, jobject out_meta, jint width, jint height) {
    if (!out_meta || width < 0 || height < 0) {
        g_pixmapFailureReason = "Invalid pixmap dimensions";
        return nullptr;
    }
    size_t size = (size_t)width * (size_t)height * 4;
    size_t allocSize = (size == 0) ? 4 : size;
    void* pixels = calloc(allocSize, 1);
    if (!pixels) {
        g_pixmapFailureReason = "Out of memory allocating pixmap pixels";
        return nullptr;
    }
    
    auto metaArr = (jarray)out_meta;
    ((jlong*)metaArr->data)[0] = (jlong)pixels;
    ((jlong*)metaArr->data)[1] = (jlong)width;
    ((jlong*)metaArr->data)[2] = (jlong)height;
    
    clinit_java_nio_ByteBuffer(ctx);
    auto bb = gcAlloc(ctx, &class_java_nio_ByteBuffer);
    init_java_nio_ByteBuffer_long_int_boolean(ctx, bb, (jlong)pixels, (jint)size, false);
    return bb;
}

jobject SM_arc_graphics_Pixmap_loadJni_Array1_long_Array1_byte_int_int_R_java_nio_ByteBuffer(jcontext ctx, jobject out_meta, jobject bytes, jint offset, jint length) {
    if (!out_meta || !bytes || length <= 0) {
        g_pixmapFailureReason = "Invalid arguments for Pixmap load";
        return nullptr;
    }
    auto arr = (jarray)bytes;
    if (offset < 0 || offset + length > arr->length) {
        g_pixmapFailureReason = "Buffer bounds error in Pixmap load";
        return nullptr;
    }
    
    const void* memPtr = (const char*)arr->data + offset;
    int w = 0, h = 0, channels = 0;
    void* pixels = stbi_load_from_memory((const stbi_uc*)memPtr, length, &w, &h, &channels, 4);
    
    if (!pixels) {
        SDL_RWops* rw = SDL_RWFromConstMem(memPtr, length);
        if (!rw) {
            g_pixmapFailureReason = SDL_GetError();
            return nullptr;
        }
        SDL_Surface* surf = IMG_Load_RW(rw, 1);
        if (!surf) {
            g_pixmapFailureReason = IMG_GetError();
            return nullptr;
        }
        SDL_Surface* rgbaSurf = surf;
        if (surf->format->format != SDL_PIXELFORMAT_RGBA32) {
            rgbaSurf = SDL_ConvertSurfaceFormat(surf, SDL_PIXELFORMAT_RGBA32, 0);
            SDL_FreeSurface(surf);
            if (!rgbaSurf) {
                g_pixmapFailureReason = SDL_GetError();
                return nullptr;
            }
        }
        w = rgbaSurf->w;
        h = rgbaSurf->h;
        size_t size = (size_t)w * (size_t)h * 4;
        size_t allocSize = (size == 0) ? 4 : size;
        pixels = malloc(allocSize);
        if (!pixels) {
            SDL_FreeSurface(rgbaSurf);
            g_pixmapFailureReason = "Out of memory allocating decoded pixels";
            return nullptr;
        }
        if (size > 0) {
            memcpy(pixels, rgbaSurf->pixels, size);
        }
        SDL_FreeSurface(rgbaSurf);
    }
    
    size_t size = (size_t)w * (size_t)h * 4;
    auto metaArr = (jarray)out_meta;
    ((jlong*)metaArr->data)[0] = (jlong)pixels;
    ((jlong*)metaArr->data)[1] = (jlong)w;
    ((jlong*)metaArr->data)[2] = (jlong)h;
    
    clinit_java_nio_ByteBuffer(ctx);
    auto bb = gcAlloc(ctx, &class_java_nio_ByteBuffer);
    init_java_nio_ByteBuffer_long_int_boolean(ctx, bb, (jlong)pixels, (jint)size, false);
    return bb;
}

}