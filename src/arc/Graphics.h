#ifndef HEADER_arc_Graphics
#define HEADER_arc_Graphics

#include "Clearwing.h"
#include "java/lang/Object.h"
#include "arc/util/Disposable.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct arc_Graphics {
	java_lang_Object parent;
	jref F_lastCursor;
} arc_Graphics;

extern Class class_arc_Graphics;


#define VTABLE_arc_Graphics_hashCode_R_int 0
typedef jint (*func_arc_Graphics_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_arc_Graphics_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_arc_Graphics_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_Graphics_clone_R_java_lang_Object 2
typedef jobject (*func_arc_Graphics_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_arc_Graphics_getClass_R_java_lang_Class 3
typedef jobject (*func_arc_Graphics_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_arc_Graphics_toString_R_java_lang_String 4
typedef jobject (*func_arc_Graphics_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_arc_Graphics_finalize 5
typedef void (*func_arc_Graphics_finalize)(jcontext ctx, jobject self);
#define VTABLE_arc_Graphics_notify 6
typedef void (*func_arc_Graphics_notify)(jcontext ctx, jobject self);
#define VTABLE_arc_Graphics_notifyAll 7
typedef void (*func_arc_Graphics_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_arc_Graphics_wait 8
typedef void (*func_arc_Graphics_wait)(jcontext ctx, jobject self);
#define VTABLE_arc_Graphics_wait_long 9
typedef void (*func_arc_Graphics_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_arc_Graphics_wait_long_int 10
typedef void (*func_arc_Graphics_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);
#define VTABLE_arc_Graphics_dispose 11
typedef void (*func_arc_Graphics_dispose)(jcontext ctx, jobject self);
#define VTABLE_arc_Graphics_isDisposed_R_boolean 12
typedef jbool (*func_arc_Graphics_isDisposed_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_arc_Graphics_isGL30Available_R_boolean 13
typedef jbool (*func_arc_Graphics_isGL30Available_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_arc_Graphics_supportsInstancing_R_boolean 14
typedef jbool (*func_arc_Graphics_supportsInstancing_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_arc_Graphics_getGL20_R_arc_graphics_GL20 15
typedef jobject (*func_arc_Graphics_getGL20_R_arc_graphics_GL20)(jcontext ctx, jobject self);
#define VTABLE_arc_Graphics_setGL20_arc_graphics_GL20 16
typedef void (*func_arc_Graphics_setGL20_arc_graphics_GL20)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_Graphics_getGL30_R_arc_graphics_GL30 17
typedef jobject (*func_arc_Graphics_getGL30_R_arc_graphics_GL30)(jcontext ctx, jobject self);
#define VTABLE_arc_Graphics_setGL30_arc_graphics_GL30 18
typedef void (*func_arc_Graphics_setGL30_arc_graphics_GL30)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_Graphics_clear_float_float_float_float 19
typedef void (*func_arc_Graphics_clear_float_float_float_float)(jcontext ctx, jobject self, jfloat param0, jfloat param1, jfloat param2, jfloat param3);
#define VTABLE_arc_Graphics_clear_arc_graphics_Color 20
typedef void (*func_arc_Graphics_clear_arc_graphics_Color)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_Graphics_isPortrait_R_boolean 21
typedef jbool (*func_arc_Graphics_isPortrait_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_arc_Graphics_getWidth_R_int 22
typedef jint (*func_arc_Graphics_getWidth_R_int)(jcontext ctx, jobject self);
#define VTABLE_arc_Graphics_getHeight_R_int 23
typedef jint (*func_arc_Graphics_getHeight_R_int)(jcontext ctx, jobject self);
#define VTABLE_arc_Graphics_getAspect_R_float 24
typedef jfloat (*func_arc_Graphics_getAspect_R_float)(jcontext ctx, jobject self);
#define VTABLE_arc_Graphics_isHidden_R_boolean 25
typedef jbool (*func_arc_Graphics_isHidden_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_arc_Graphics_getBackBufferWidth_R_int 26
typedef jint (*func_arc_Graphics_getBackBufferWidth_R_int)(jcontext ctx, jobject self);
#define VTABLE_arc_Graphics_getBackBufferHeight_R_int 27
typedef jint (*func_arc_Graphics_getBackBufferHeight_R_int)(jcontext ctx, jobject self);
#define VTABLE_arc_Graphics_getSafeInsets_R_Array1_int 28
typedef jobject (*func_arc_Graphics_getSafeInsets_R_Array1_int)(jcontext ctx, jobject self);
#define VTABLE_arc_Graphics_getFrameId_R_long 29
typedef jlong (*func_arc_Graphics_getFrameId_R_long)(jcontext ctx, jobject self);
#define VTABLE_arc_Graphics_getDeltaTime_R_float 30
typedef jfloat (*func_arc_Graphics_getDeltaTime_R_float)(jcontext ctx, jobject self);
#define VTABLE_arc_Graphics_getFramesPerSecond_R_int 31
typedef jint (*func_arc_Graphics_getFramesPerSecond_R_int)(jcontext ctx, jobject self);
#define VTABLE_arc_Graphics_getGLVersion_R_arc_graphics_gl_GLVersion 32
typedef jobject (*func_arc_Graphics_getGLVersion_R_arc_graphics_gl_GLVersion)(jcontext ctx, jobject self);
#define VTABLE_arc_Graphics_getPpiX_R_float 33
typedef jfloat (*func_arc_Graphics_getPpiX_R_float)(jcontext ctx, jobject self);
#define VTABLE_arc_Graphics_getPpiY_R_float 34
typedef jfloat (*func_arc_Graphics_getPpiY_R_float)(jcontext ctx, jobject self);
#define VTABLE_arc_Graphics_getPpcX_R_float 35
typedef jfloat (*func_arc_Graphics_getPpcX_R_float)(jcontext ctx, jobject self);
#define VTABLE_arc_Graphics_getPpcY_R_float 36
typedef jfloat (*func_arc_Graphics_getPpcY_R_float)(jcontext ctx, jobject self);
#define VTABLE_arc_Graphics_getDensity_R_float 37
typedef jfloat (*func_arc_Graphics_getDensity_R_float)(jcontext ctx, jobject self);
#define VTABLE_arc_Graphics_setFullscreen_boolean_R_boolean 38
typedef jbool (*func_arc_Graphics_setFullscreen_boolean_R_boolean)(jcontext ctx, jobject self, jbool param0);
#define VTABLE_arc_Graphics_setWindowPosition_int_int 39
typedef void (*func_arc_Graphics_setWindowPosition_int_int)(jcontext ctx, jobject self, jint param0, jint param1);
#define VTABLE_arc_Graphics_setWindowSize_int_int 40
typedef void (*func_arc_Graphics_setWindowSize_int_int)(jcontext ctx, jobject self, jint param0, jint param1);
#define VTABLE_arc_Graphics_setTitle_java_lang_String 41
typedef void (*func_arc_Graphics_setTitle_java_lang_String)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_Graphics_setVSync_boolean 42
typedef void (*func_arc_Graphics_setVSync_boolean)(jcontext ctx, jobject self, jbool param0);
#define VTABLE_arc_Graphics_getBufferFormat_R_arc_Graphics$BufferFormat 43
typedef jobject (*func_arc_Graphics_getBufferFormat_R_arc_Graphics$BufferFormat)(jcontext ctx, jobject self);
#define VTABLE_arc_Graphics_supportsExtension_java_lang_String_R_boolean 44
typedef jbool (*func_arc_Graphics_supportsExtension_java_lang_String_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_Graphics_setPreferredFPS_int 45
typedef void (*func_arc_Graphics_setPreferredFPS_int)(jcontext ctx, jobject self, jint param0);
#define VTABLE_arc_Graphics_isContinuousRendering_R_boolean 46
typedef jbool (*func_arc_Graphics_isContinuousRendering_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_arc_Graphics_setContinuousRendering_boolean 47
typedef void (*func_arc_Graphics_setContinuousRendering_boolean)(jcontext ctx, jobject self, jbool param0);
#define VTABLE_arc_Graphics_requestRendering 48
typedef void (*func_arc_Graphics_requestRendering)(jcontext ctx, jobject self);
#define VTABLE_arc_Graphics_isFullscreen_R_boolean 49
typedef jbool (*func_arc_Graphics_isFullscreen_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_arc_Graphics_newCursor_arc_graphics_Pixmap_int_int_R_arc_Graphics$Cursor 50
typedef jobject (*func_arc_Graphics_newCursor_arc_graphics_Pixmap_int_int_R_arc_Graphics$Cursor)(jcontext ctx, jobject self, jobject param0, jint param1, jint param2);
#define VTABLE_arc_Graphics_newCursor_arc_graphics_Pixmap_int_arc_graphics_Color_int_R_arc_Graphics$Cursor 51
typedef jobject (*func_arc_Graphics_newCursor_arc_graphics_Pixmap_int_arc_graphics_Color_int_R_arc_Graphics$Cursor)(jcontext ctx, jobject self, jobject param0, jint param1, jobject param2, jint param3);
#define VTABLE_arc_Graphics_newCursor_java_lang_String_int_R_arc_Graphics$Cursor 52
typedef jobject (*func_arc_Graphics_newCursor_java_lang_String_int_R_arc_Graphics$Cursor)(jcontext ctx, jobject self, jobject param0, jint param1);
#define VTABLE_arc_Graphics_newCursor_java_lang_String_R_arc_Graphics$Cursor 53
typedef jobject (*func_arc_Graphics_newCursor_java_lang_String_R_arc_Graphics$Cursor)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_Graphics_newCursor_java_lang_String_int_arc_graphics_Color_int_R_arc_Graphics$Cursor 54
typedef jobject (*func_arc_Graphics_newCursor_java_lang_String_int_arc_graphics_Color_int_R_arc_Graphics$Cursor)(jcontext ctx, jobject self, jobject param0, jint param1, jobject param2, jint param3);
#define VTABLE_arc_Graphics_restoreCursor 55
typedef void (*func_arc_Graphics_restoreCursor)(jcontext ctx, jobject self);
#define VTABLE_arc_Graphics_cursor_arc_Graphics$Cursor 56
typedef void (*func_arc_Graphics_cursor_arc_Graphics$Cursor)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_Graphics_setCursor_arc_Graphics$Cursor 57
typedef void (*func_arc_Graphics_setCursor_arc_Graphics$Cursor)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_Graphics_setSystemCursor_arc_Graphics$Cursor$SystemCursor 58
typedef void (*func_arc_Graphics_setSystemCursor_arc_Graphics$Cursor$SystemCursor)(jcontext ctx, jobject self, jobject param0);

void mark_arc_Graphics(jobject object, jint mark, jint depth);
void clinit_arc_Graphics(jcontext ctx);
void init_arc_Graphics(jcontext ctx, jobject self);
jbool M_arc_Graphics_isGL30Available_R_boolean(jcontext ctx, jobject self);
jbool M_arc_Graphics_supportsInstancing_R_boolean(jcontext ctx, jobject self);
void M_arc_Graphics_clear_float_float_float_float(jcontext ctx, jobject self, jfloat param0, jfloat param1, jfloat param2, jfloat param3);
void M_arc_Graphics_clear_arc_graphics_Color(jcontext ctx, jobject self, jobject param0);
jbool M_arc_Graphics_isPortrait_R_boolean(jcontext ctx, jobject self);
jfloat M_arc_Graphics_getAspect_R_float(jcontext ctx, jobject self);
jbool M_arc_Graphics_isHidden_R_boolean(jcontext ctx, jobject self);
jobject M_arc_Graphics_getSafeInsets_R_Array1_int(jcontext ctx, jobject self);
jbool M_arc_Graphics_setFullscreen_boolean_R_boolean(jcontext ctx, jobject self, jbool param0);
void M_arc_Graphics_setWindowPosition_int_int(jcontext ctx, jobject self, jint param0, jint param1);
void M_arc_Graphics_setWindowSize_int_int(jcontext ctx, jobject self, jint param0, jint param1);
void M_arc_Graphics_setPreferredFPS_int(jcontext ctx, jobject self, jint param0);
jobject M_arc_Graphics_newCursor_arc_graphics_Pixmap_int_arc_graphics_Color_int_R_arc_Graphics$Cursor(jcontext ctx, jobject self, jobject param0, jint param1, jobject param2, jint param3);
jobject M_arc_Graphics_newCursor_java_lang_String_int_R_arc_Graphics$Cursor(jcontext ctx, jobject self, jobject param0, jint param1);
jobject M_arc_Graphics_newCursor_java_lang_String_R_arc_Graphics$Cursor(jcontext ctx, jobject self, jobject param0);
jobject M_arc_Graphics_newCursor_java_lang_String_int_arc_graphics_Color_int_R_arc_Graphics$Cursor(jcontext ctx, jobject self, jobject param0, jint param1, jobject param2, jint param3);
void M_arc_Graphics_restoreCursor(jcontext ctx, jobject self);
void M_arc_Graphics_cursor_arc_Graphics$Cursor(jcontext ctx, jobject self, jobject param0);
void M_arc_Graphics_dispose(jcontext ctx, jobject self);

#ifdef __cplusplus
}
#endif

#endif
