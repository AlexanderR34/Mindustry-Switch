#ifndef HEADER_arc_scene_style_NinePatchDrawable
#define HEADER_arc_scene_style_NinePatchDrawable

#include "Clearwing.h"
#include "arc/scene/style/BaseDrawable.h"
#include "arc/scene/style/TransformDrawable.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct arc_scene_style_NinePatchDrawable {
	arc_scene_style_BaseDrawable parent;
	jref F_patch;
} arc_scene_style_NinePatchDrawable;

extern Class class_arc_scene_style_NinePatchDrawable;


#define VTABLE_arc_scene_style_NinePatchDrawable_hashCode_R_int 0
typedef jint (*func_arc_scene_style_NinePatchDrawable_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_arc_scene_style_NinePatchDrawable_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_arc_scene_style_NinePatchDrawable_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_scene_style_NinePatchDrawable_clone_R_java_lang_Object 2
typedef jobject (*func_arc_scene_style_NinePatchDrawable_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_arc_scene_style_NinePatchDrawable_getClass_R_java_lang_Class 3
typedef jobject (*func_arc_scene_style_NinePatchDrawable_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_arc_scene_style_NinePatchDrawable_toString_R_java_lang_String 4
typedef jobject (*func_arc_scene_style_NinePatchDrawable_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_arc_scene_style_NinePatchDrawable_finalize 5
typedef void (*func_arc_scene_style_NinePatchDrawable_finalize)(jcontext ctx, jobject self);
#define VTABLE_arc_scene_style_NinePatchDrawable_notify 6
typedef void (*func_arc_scene_style_NinePatchDrawable_notify)(jcontext ctx, jobject self);
#define VTABLE_arc_scene_style_NinePatchDrawable_notifyAll 7
typedef void (*func_arc_scene_style_NinePatchDrawable_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_arc_scene_style_NinePatchDrawable_wait 8
typedef void (*func_arc_scene_style_NinePatchDrawable_wait)(jcontext ctx, jobject self);
#define VTABLE_arc_scene_style_NinePatchDrawable_wait_long 9
typedef void (*func_arc_scene_style_NinePatchDrawable_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_arc_scene_style_NinePatchDrawable_wait_long_int 10
typedef void (*func_arc_scene_style_NinePatchDrawable_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);
#define VTABLE_arc_scene_style_NinePatchDrawable_draw_float_float_float_float 11
typedef void (*func_arc_scene_style_NinePatchDrawable_draw_float_float_float_float)(jcontext ctx, jobject self, jfloat param0, jfloat param1, jfloat param2, jfloat param3);
#define VTABLE_arc_scene_style_NinePatchDrawable_draw_float_float_float_float_float_float_float_float_float 12
typedef void (*func_arc_scene_style_NinePatchDrawable_draw_float_float_float_float_float_float_float_float_float)(jcontext ctx, jobject self, jfloat param0, jfloat param1, jfloat param2, jfloat param3, jfloat param4, jfloat param5, jfloat param6, jfloat param7, jfloat param8);
#define VTABLE_arc_scene_style_NinePatchDrawable_getLeftWidth_R_float 13
typedef jfloat (*func_arc_scene_style_NinePatchDrawable_getLeftWidth_R_float)(jcontext ctx, jobject self);
#define VTABLE_arc_scene_style_NinePatchDrawable_setLeftWidth_float 14
typedef void (*func_arc_scene_style_NinePatchDrawable_setLeftWidth_float)(jcontext ctx, jobject self, jfloat param0);
#define VTABLE_arc_scene_style_NinePatchDrawable_getRightWidth_R_float 15
typedef jfloat (*func_arc_scene_style_NinePatchDrawable_getRightWidth_R_float)(jcontext ctx, jobject self);
#define VTABLE_arc_scene_style_NinePatchDrawable_setRightWidth_float 16
typedef void (*func_arc_scene_style_NinePatchDrawable_setRightWidth_float)(jcontext ctx, jobject self, jfloat param0);
#define VTABLE_arc_scene_style_NinePatchDrawable_getTopHeight_R_float 17
typedef jfloat (*func_arc_scene_style_NinePatchDrawable_getTopHeight_R_float)(jcontext ctx, jobject self);
#define VTABLE_arc_scene_style_NinePatchDrawable_setTopHeight_float 18
typedef void (*func_arc_scene_style_NinePatchDrawable_setTopHeight_float)(jcontext ctx, jobject self, jfloat param0);
#define VTABLE_arc_scene_style_NinePatchDrawable_getBottomHeight_R_float 19
typedef jfloat (*func_arc_scene_style_NinePatchDrawable_getBottomHeight_R_float)(jcontext ctx, jobject self);
#define VTABLE_arc_scene_style_NinePatchDrawable_setBottomHeight_float 20
typedef void (*func_arc_scene_style_NinePatchDrawable_setBottomHeight_float)(jcontext ctx, jobject self, jfloat param0);
#define VTABLE_arc_scene_style_NinePatchDrawable_getMinWidth_R_float 21
typedef jfloat (*func_arc_scene_style_NinePatchDrawable_getMinWidth_R_float)(jcontext ctx, jobject self);
#define VTABLE_arc_scene_style_NinePatchDrawable_setMinWidth_float 22
typedef void (*func_arc_scene_style_NinePatchDrawable_setMinWidth_float)(jcontext ctx, jobject self, jfloat param0);
#define VTABLE_arc_scene_style_NinePatchDrawable_getMinHeight_R_float 23
typedef jfloat (*func_arc_scene_style_NinePatchDrawable_getMinHeight_R_float)(jcontext ctx, jobject self);
#define VTABLE_arc_scene_style_NinePatchDrawable_setMinHeight_float 24
typedef void (*func_arc_scene_style_NinePatchDrawable_setMinHeight_float)(jcontext ctx, jobject self, jfloat param0);
#define VTABLE_arc_scene_style_NinePatchDrawable_imageSize_R_float 25
typedef jfloat (*func_arc_scene_style_NinePatchDrawable_imageSize_R_float)(jcontext ctx, jobject self);
#define VTABLE_arc_scene_style_NinePatchDrawable_getName_R_java_lang_String 26
typedef jobject (*func_arc_scene_style_NinePatchDrawable_getName_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_arc_scene_style_NinePatchDrawable_setName_java_lang_String 27
typedef void (*func_arc_scene_style_NinePatchDrawable_setName_java_lang_String)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_scene_style_NinePatchDrawable_getPatch_R_arc_graphics_g2d_NinePatch 28
typedef jobject (*func_arc_scene_style_NinePatchDrawable_getPatch_R_arc_graphics_g2d_NinePatch)(jcontext ctx, jobject self);
#define VTABLE_arc_scene_style_NinePatchDrawable_setPatch_arc_graphics_g2d_NinePatch 29
typedef void (*func_arc_scene_style_NinePatchDrawable_setPatch_arc_graphics_g2d_NinePatch)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_scene_style_NinePatchDrawable_tint_arc_graphics_Color_R_arc_scene_style_NinePatchDrawable 30
typedef jobject (*func_arc_scene_style_NinePatchDrawable_tint_arc_graphics_Color_R_arc_scene_style_NinePatchDrawable)(jcontext ctx, jobject self, jobject param0);

void mark_arc_scene_style_NinePatchDrawable(jobject object, jint mark, jint depth);
void clinit_arc_scene_style_NinePatchDrawable(jcontext ctx);
void init_arc_scene_style_NinePatchDrawable(jcontext ctx, jobject self);
void init_arc_scene_style_NinePatchDrawable_arc_graphics_g2d_NinePatch(jcontext ctx, jobject self, jobject param0);
void init_arc_scene_style_NinePatchDrawable_arc_scene_style_NinePatchDrawable(jcontext ctx, jobject self, jobject param0);
void M_arc_scene_style_NinePatchDrawable_draw_float_float_float_float(jcontext ctx, jobject self, jfloat param0, jfloat param1, jfloat param2, jfloat param3);
void M_arc_scene_style_NinePatchDrawable_draw_float_float_float_float_float_float_float_float_float(jcontext ctx, jobject self, jfloat param0, jfloat param1, jfloat param2, jfloat param3, jfloat param4, jfloat param5, jfloat param6, jfloat param7, jfloat param8);
jobject M_arc_scene_style_NinePatchDrawable_getPatch_R_arc_graphics_g2d_NinePatch(jcontext ctx, jobject self);
void M_arc_scene_style_NinePatchDrawable_setPatch_arc_graphics_g2d_NinePatch(jcontext ctx, jobject self, jobject param0);
jobject M_arc_scene_style_NinePatchDrawable_tint_arc_graphics_Color_R_arc_scene_style_NinePatchDrawable(jcontext ctx, jobject self, jobject param0);

#ifdef __cplusplus
}
#endif

#endif
