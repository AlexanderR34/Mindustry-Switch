#ifndef HEADER_arc_scene_style_Drawable
#define HEADER_arc_scene_style_Drawable

#include "Clearwing.h"
#include "java/lang/Object.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct arc_scene_style_Drawable {
	java_lang_Object parent;
} arc_scene_style_Drawable;

extern Class class_arc_scene_style_Drawable;


#define INDEX_arc_scene_style_Drawable_draw_float_float_float_float 0
typedef void (*func_arc_scene_style_Drawable_draw_float_float_float_float)(jcontext ctx, jobject self, jfloat param0, jfloat param1, jfloat param2, jfloat param3);
#define INDEX_arc_scene_style_Drawable_draw_float_float_float_float_float_float_float_float_float 1
typedef void (*func_arc_scene_style_Drawable_draw_float_float_float_float_float_float_float_float_float)(jcontext ctx, jobject self, jfloat param0, jfloat param1, jfloat param2, jfloat param3, jfloat param4, jfloat param5, jfloat param6, jfloat param7, jfloat param8);
#define INDEX_arc_scene_style_Drawable_getLeftWidth_R_float 2
typedef jfloat (*func_arc_scene_style_Drawable_getLeftWidth_R_float)(jcontext ctx, jobject self);
#define INDEX_arc_scene_style_Drawable_setLeftWidth_float 3
typedef void (*func_arc_scene_style_Drawable_setLeftWidth_float)(jcontext ctx, jobject self, jfloat param0);
#define INDEX_arc_scene_style_Drawable_getRightWidth_R_float 4
typedef jfloat (*func_arc_scene_style_Drawable_getRightWidth_R_float)(jcontext ctx, jobject self);
#define INDEX_arc_scene_style_Drawable_setRightWidth_float 5
typedef void (*func_arc_scene_style_Drawable_setRightWidth_float)(jcontext ctx, jobject self, jfloat param0);
#define INDEX_arc_scene_style_Drawable_getTopHeight_R_float 6
typedef jfloat (*func_arc_scene_style_Drawable_getTopHeight_R_float)(jcontext ctx, jobject self);
#define INDEX_arc_scene_style_Drawable_setTopHeight_float 7
typedef void (*func_arc_scene_style_Drawable_setTopHeight_float)(jcontext ctx, jobject self, jfloat param0);
#define INDEX_arc_scene_style_Drawable_getBottomHeight_R_float 8
typedef jfloat (*func_arc_scene_style_Drawable_getBottomHeight_R_float)(jcontext ctx, jobject self);
#define INDEX_arc_scene_style_Drawable_setBottomHeight_float 9
typedef void (*func_arc_scene_style_Drawable_setBottomHeight_float)(jcontext ctx, jobject self, jfloat param0);
#define INDEX_arc_scene_style_Drawable_getMinWidth_R_float 10
typedef jfloat (*func_arc_scene_style_Drawable_getMinWidth_R_float)(jcontext ctx, jobject self);
#define INDEX_arc_scene_style_Drawable_setMinWidth_float 11
typedef void (*func_arc_scene_style_Drawable_setMinWidth_float)(jcontext ctx, jobject self, jfloat param0);
#define INDEX_arc_scene_style_Drawable_getMinHeight_R_float 12
typedef jfloat (*func_arc_scene_style_Drawable_getMinHeight_R_float)(jcontext ctx, jobject self);
#define INDEX_arc_scene_style_Drawable_setMinHeight_float 13
typedef void (*func_arc_scene_style_Drawable_setMinHeight_float)(jcontext ctx, jobject self, jfloat param0);
#define INDEX_arc_scene_style_Drawable_imageSize_R_float 14
typedef jfloat (*func_arc_scene_style_Drawable_imageSize_R_float)(jcontext ctx, jobject self);

void mark_arc_scene_style_Drawable(jobject object, jint mark, jint depth);
void clinit_arc_scene_style_Drawable(jcontext ctx);
jfloat M_arc_scene_style_Drawable_imageSize_R_float(jcontext ctx, jobject self);

#ifdef __cplusplus
}
#endif

#endif
