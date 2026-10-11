#ifndef HEADER_mindustry_ui_Styles$50
#define HEADER_mindustry_ui_Styles$50

#include "Clearwing.h"
#include "arc/scene/style/ScaledNinePatchDrawable.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct mindustry_ui_Styles$50 {
	arc_scene_style_ScaledNinePatchDrawable parent;
} mindustry_ui_Styles$50;

extern Class class_mindustry_ui_Styles$50;


#define VTABLE_mindustry_ui_Styles$50_hashCode_R_int 0
typedef jint (*func_mindustry_ui_Styles$50_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_mindustry_ui_Styles$50_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_mindustry_ui_Styles$50_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_ui_Styles$50_clone_R_java_lang_Object 2
typedef jobject (*func_mindustry_ui_Styles$50_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_mindustry_ui_Styles$50_getClass_R_java_lang_Class 3
typedef jobject (*func_mindustry_ui_Styles$50_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_mindustry_ui_Styles$50_toString_R_java_lang_String 4
typedef jobject (*func_mindustry_ui_Styles$50_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_mindustry_ui_Styles$50_finalize 5
typedef void (*func_mindustry_ui_Styles$50_finalize)(jcontext ctx, jobject self);
#define VTABLE_mindustry_ui_Styles$50_notify 6
typedef void (*func_mindustry_ui_Styles$50_notify)(jcontext ctx, jobject self);
#define VTABLE_mindustry_ui_Styles$50_notifyAll 7
typedef void (*func_mindustry_ui_Styles$50_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_mindustry_ui_Styles$50_wait 8
typedef void (*func_mindustry_ui_Styles$50_wait)(jcontext ctx, jobject self);
#define VTABLE_mindustry_ui_Styles$50_wait_long 9
typedef void (*func_mindustry_ui_Styles$50_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_mindustry_ui_Styles$50_wait_long_int 10
typedef void (*func_mindustry_ui_Styles$50_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);
#define VTABLE_mindustry_ui_Styles$50_draw_float_float_float_float 11
typedef void (*func_mindustry_ui_Styles$50_draw_float_float_float_float)(jcontext ctx, jobject self, jfloat param0, jfloat param1, jfloat param2, jfloat param3);
#define VTABLE_mindustry_ui_Styles$50_draw_float_float_float_float_float_float_float_float_float 12
typedef void (*func_mindustry_ui_Styles$50_draw_float_float_float_float_float_float_float_float_float)(jcontext ctx, jobject self, jfloat param0, jfloat param1, jfloat param2, jfloat param3, jfloat param4, jfloat param5, jfloat param6, jfloat param7, jfloat param8);
#define VTABLE_mindustry_ui_Styles$50_getLeftWidth_R_float 13
typedef jfloat (*func_mindustry_ui_Styles$50_getLeftWidth_R_float)(jcontext ctx, jobject self);
#define VTABLE_mindustry_ui_Styles$50_setLeftWidth_float 14
typedef void (*func_mindustry_ui_Styles$50_setLeftWidth_float)(jcontext ctx, jobject self, jfloat param0);
#define VTABLE_mindustry_ui_Styles$50_getRightWidth_R_float 15
typedef jfloat (*func_mindustry_ui_Styles$50_getRightWidth_R_float)(jcontext ctx, jobject self);
#define VTABLE_mindustry_ui_Styles$50_setRightWidth_float 16
typedef void (*func_mindustry_ui_Styles$50_setRightWidth_float)(jcontext ctx, jobject self, jfloat param0);
#define VTABLE_mindustry_ui_Styles$50_getTopHeight_R_float 17
typedef jfloat (*func_mindustry_ui_Styles$50_getTopHeight_R_float)(jcontext ctx, jobject self);
#define VTABLE_mindustry_ui_Styles$50_setTopHeight_float 18
typedef void (*func_mindustry_ui_Styles$50_setTopHeight_float)(jcontext ctx, jobject self, jfloat param0);
#define VTABLE_mindustry_ui_Styles$50_getBottomHeight_R_float 19
typedef jfloat (*func_mindustry_ui_Styles$50_getBottomHeight_R_float)(jcontext ctx, jobject self);
#define VTABLE_mindustry_ui_Styles$50_setBottomHeight_float 20
typedef void (*func_mindustry_ui_Styles$50_setBottomHeight_float)(jcontext ctx, jobject self, jfloat param0);
#define VTABLE_mindustry_ui_Styles$50_getMinWidth_R_float 21
typedef jfloat (*func_mindustry_ui_Styles$50_getMinWidth_R_float)(jcontext ctx, jobject self);
#define VTABLE_mindustry_ui_Styles$50_setMinWidth_float 22
typedef void (*func_mindustry_ui_Styles$50_setMinWidth_float)(jcontext ctx, jobject self, jfloat param0);
#define VTABLE_mindustry_ui_Styles$50_getMinHeight_R_float 23
typedef jfloat (*func_mindustry_ui_Styles$50_getMinHeight_R_float)(jcontext ctx, jobject self);
#define VTABLE_mindustry_ui_Styles$50_setMinHeight_float 24
typedef void (*func_mindustry_ui_Styles$50_setMinHeight_float)(jcontext ctx, jobject self, jfloat param0);
#define VTABLE_mindustry_ui_Styles$50_imageSize_R_float 25
typedef jfloat (*func_mindustry_ui_Styles$50_imageSize_R_float)(jcontext ctx, jobject self);
#define VTABLE_mindustry_ui_Styles$50_getName_R_java_lang_String 26
typedef jobject (*func_mindustry_ui_Styles$50_getName_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_mindustry_ui_Styles$50_setName_java_lang_String 27
typedef void (*func_mindustry_ui_Styles$50_setName_java_lang_String)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_ui_Styles$50_getPatch_R_arc_graphics_g2d_NinePatch 28
typedef jobject (*func_mindustry_ui_Styles$50_getPatch_R_arc_graphics_g2d_NinePatch)(jcontext ctx, jobject self);
#define VTABLE_mindustry_ui_Styles$50_setPatch_arc_graphics_g2d_NinePatch 29
typedef void (*func_mindustry_ui_Styles$50_setPatch_arc_graphics_g2d_NinePatch)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_ui_Styles$50_tint_arc_graphics_Color_R_arc_scene_style_NinePatchDrawable 30
typedef jobject (*func_mindustry_ui_Styles$50_tint_arc_graphics_Color_R_arc_scene_style_NinePatchDrawable)(jcontext ctx, jobject self, jobject param0);

void mark_mindustry_ui_Styles$50(jobject object, jint mark, jint depth);
void clinit_mindustry_ui_Styles$50(jcontext ctx);
void init_mindustry_ui_Styles$50_arc_graphics_g2d_NinePatch(jcontext ctx, jobject self, jobject param0);
jfloat M_mindustry_ui_Styles$50_getLeftWidth_R_float(jcontext ctx, jobject self);
jfloat M_mindustry_ui_Styles$50_getRightWidth_R_float(jcontext ctx, jobject self);
jfloat M_mindustry_ui_Styles$50_getTopHeight_R_float(jcontext ctx, jobject self);
jfloat M_mindustry_ui_Styles$50_getBottomHeight_R_float(jcontext ctx, jobject self);

#ifdef __cplusplus
}
#endif

#endif
