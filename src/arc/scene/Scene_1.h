#ifndef HEADER_arc_scene_Scene$1
#define HEADER_arc_scene_Scene$1

#include "Clearwing.h"
#include "arc/util/viewport/ScreenViewport.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct arc_scene_Scene$1 {
	arc_util_viewport_ScreenViewport parent;
	jref F_this$0;
} arc_scene_Scene$1;

extern Class class_arc_scene_Scene$1;


#define VTABLE_arc_scene_Scene$1_hashCode_R_int 0
typedef jint (*func_arc_scene_Scene$1_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_arc_scene_Scene$1_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_arc_scene_Scene$1_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_scene_Scene$1_clone_R_java_lang_Object 2
typedef jobject (*func_arc_scene_Scene$1_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_arc_scene_Scene$1_getClass_R_java_lang_Class 3
typedef jobject (*func_arc_scene_Scene$1_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_arc_scene_Scene$1_toString_R_java_lang_String 4
typedef jobject (*func_arc_scene_Scene$1_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_arc_scene_Scene$1_finalize 5
typedef void (*func_arc_scene_Scene$1_finalize)(jcontext ctx, jobject self);
#define VTABLE_arc_scene_Scene$1_notify 6
typedef void (*func_arc_scene_Scene$1_notify)(jcontext ctx, jobject self);
#define VTABLE_arc_scene_Scene$1_notifyAll 7
typedef void (*func_arc_scene_Scene$1_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_arc_scene_Scene$1_wait 8
typedef void (*func_arc_scene_Scene$1_wait)(jcontext ctx, jobject self);
#define VTABLE_arc_scene_Scene$1_wait_long 9
typedef void (*func_arc_scene_Scene$1_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_arc_scene_Scene$1_wait_long_int 10
typedef void (*func_arc_scene_Scene$1_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);
#define VTABLE_arc_scene_Scene$1_apply 11
typedef void (*func_arc_scene_Scene$1_apply)(jcontext ctx, jobject self);
#define VTABLE_arc_scene_Scene$1_apply_boolean 12
typedef void (*func_arc_scene_Scene$1_apply_boolean)(jcontext ctx, jobject self, jbool param0);
#define VTABLE_arc_scene_Scene$1_update_int_int 13
typedef void (*func_arc_scene_Scene$1_update_int_int)(jcontext ctx, jobject self, jint param0, jint param1);
#define VTABLE_arc_scene_Scene$1_update_int_int_boolean 14
typedef void (*func_arc_scene_Scene$1_update_int_int_boolean)(jcontext ctx, jobject self, jint param0, jint param1, jbool param2);
#define VTABLE_arc_scene_Scene$1_unproject_arc_math_geom_Vec2_R_arc_math_geom_Vec2 15
typedef jobject (*func_arc_scene_Scene$1_unproject_arc_math_geom_Vec2_R_arc_math_geom_Vec2)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_scene_Scene$1_project_arc_math_geom_Vec2_R_arc_math_geom_Vec2 16
typedef jobject (*func_arc_scene_Scene$1_project_arc_math_geom_Vec2_R_arc_math_geom_Vec2)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_scene_Scene$1_calculateScissors_arc_math_Mat_arc_math_geom_Rect_arc_math_geom_Rect 17
typedef void (*func_arc_scene_Scene$1_calculateScissors_arc_math_Mat_arc_math_geom_Rect_arc_math_geom_Rect)(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2);
#define VTABLE_arc_scene_Scene$1_toScreenCoordinates_arc_math_geom_Vec2_arc_math_Mat_R_arc_math_geom_Vec2 18
typedef jobject (*func_arc_scene_Scene$1_toScreenCoordinates_arc_math_geom_Vec2_arc_math_Mat_R_arc_math_geom_Vec2)(jcontext ctx, jobject self, jobject param0, jobject param1);
#define VTABLE_arc_scene_Scene$1_getCamera_R_arc_graphics_Camera 19
typedef jobject (*func_arc_scene_Scene$1_getCamera_R_arc_graphics_Camera)(jcontext ctx, jobject self);
#define VTABLE_arc_scene_Scene$1_setCamera_arc_graphics_Camera 20
typedef void (*func_arc_scene_Scene$1_setCamera_arc_graphics_Camera)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_scene_Scene$1_getWorldWidth_R_float 21
typedef jfloat (*func_arc_scene_Scene$1_getWorldWidth_R_float)(jcontext ctx, jobject self);
#define VTABLE_arc_scene_Scene$1_setWorldWidth_float 22
typedef void (*func_arc_scene_Scene$1_setWorldWidth_float)(jcontext ctx, jobject self, jfloat param0);
#define VTABLE_arc_scene_Scene$1_getWorldHeight_R_float 23
typedef jfloat (*func_arc_scene_Scene$1_getWorldHeight_R_float)(jcontext ctx, jobject self);
#define VTABLE_arc_scene_Scene$1_setWorldHeight_float 24
typedef void (*func_arc_scene_Scene$1_setWorldHeight_float)(jcontext ctx, jobject self, jfloat param0);
#define VTABLE_arc_scene_Scene$1_setWorldSize_float_float 25
typedef void (*func_arc_scene_Scene$1_setWorldSize_float_float)(jcontext ctx, jobject self, jfloat param0, jfloat param1);
#define VTABLE_arc_scene_Scene$1_getScreenX_R_int 26
typedef jint (*func_arc_scene_Scene$1_getScreenX_R_int)(jcontext ctx, jobject self);
#define VTABLE_arc_scene_Scene$1_setScreenX_int 27
typedef void (*func_arc_scene_Scene$1_setScreenX_int)(jcontext ctx, jobject self, jint param0);
#define VTABLE_arc_scene_Scene$1_getScreenY_R_int 28
typedef jint (*func_arc_scene_Scene$1_getScreenY_R_int)(jcontext ctx, jobject self);
#define VTABLE_arc_scene_Scene$1_setScreenY_int 29
typedef void (*func_arc_scene_Scene$1_setScreenY_int)(jcontext ctx, jobject self, jint param0);
#define VTABLE_arc_scene_Scene$1_getScreenWidth_R_int 30
typedef jint (*func_arc_scene_Scene$1_getScreenWidth_R_int)(jcontext ctx, jobject self);
#define VTABLE_arc_scene_Scene$1_setScreenWidth_int 31
typedef void (*func_arc_scene_Scene$1_setScreenWidth_int)(jcontext ctx, jobject self, jint param0);
#define VTABLE_arc_scene_Scene$1_getScreenHeight_R_int 32
typedef jint (*func_arc_scene_Scene$1_getScreenHeight_R_int)(jcontext ctx, jobject self);
#define VTABLE_arc_scene_Scene$1_setScreenHeight_int 33
typedef void (*func_arc_scene_Scene$1_setScreenHeight_int)(jcontext ctx, jobject self, jint param0);
#define VTABLE_arc_scene_Scene$1_setScreenPosition_int_int 34
typedef void (*func_arc_scene_Scene$1_setScreenPosition_int_int)(jcontext ctx, jobject self, jint param0, jint param1);
#define VTABLE_arc_scene_Scene$1_setScreenSize_int_int 35
typedef void (*func_arc_scene_Scene$1_setScreenSize_int_int)(jcontext ctx, jobject self, jint param0, jint param1);
#define VTABLE_arc_scene_Scene$1_setScreenBounds_int_int_int_int 36
typedef void (*func_arc_scene_Scene$1_setScreenBounds_int_int_int_int)(jcontext ctx, jobject self, jint param0, jint param1, jint param2, jint param3);
#define VTABLE_arc_scene_Scene$1_getLeftGutterWidth_R_int 37
typedef jint (*func_arc_scene_Scene$1_getLeftGutterWidth_R_int)(jcontext ctx, jobject self);
#define VTABLE_arc_scene_Scene$1_getRightGutterX_R_int 38
typedef jint (*func_arc_scene_Scene$1_getRightGutterX_R_int)(jcontext ctx, jobject self);
#define VTABLE_arc_scene_Scene$1_getRightGutterWidth_R_int 39
typedef jint (*func_arc_scene_Scene$1_getRightGutterWidth_R_int)(jcontext ctx, jobject self);
#define VTABLE_arc_scene_Scene$1_getBottomGutterHeight_R_int 40
typedef jint (*func_arc_scene_Scene$1_getBottomGutterHeight_R_int)(jcontext ctx, jobject self);
#define VTABLE_arc_scene_Scene$1_getTopGutterY_R_int 41
typedef jint (*func_arc_scene_Scene$1_getTopGutterY_R_int)(jcontext ctx, jobject self);
#define VTABLE_arc_scene_Scene$1_getTopGutterHeight_R_int 42
typedef jint (*func_arc_scene_Scene$1_getTopGutterHeight_R_int)(jcontext ctx, jobject self);
#define VTABLE_arc_scene_Scene$1_getUnitsPerPixel_R_float 43
typedef jfloat (*func_arc_scene_Scene$1_getUnitsPerPixel_R_float)(jcontext ctx, jobject self);
#define VTABLE_arc_scene_Scene$1_setUnitsPerPixel_float 44
typedef void (*func_arc_scene_Scene$1_setUnitsPerPixel_float)(jcontext ctx, jobject self, jfloat param0);

void mark_arc_scene_Scene$1(jobject object, jint mark, jint depth);
void clinit_arc_scene_Scene$1(jcontext ctx);
void init_arc_scene_Scene$1_arc_scene_Scene(jcontext ctx, jobject self, jobject param0);
void M_arc_scene_Scene$1_calculateScissors_arc_math_Mat_arc_math_geom_Rect_arc_math_geom_Rect(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2);

#ifdef __cplusplus
}
#endif

#endif
