#ifndef HEADER_arc_scene_style_TransformDrawable
#define HEADER_arc_scene_style_TransformDrawable

#include "Clearwing.h"
#include "java/lang/Object.h"
#include "arc/scene/style/Drawable.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct arc_scene_style_TransformDrawable {
	java_lang_Object parent;
} arc_scene_style_TransformDrawable;

extern Class class_arc_scene_style_TransformDrawable;


#define INDEX_arc_scene_style_TransformDrawable_draw_float_float_float_float_float_float_float_float_float 0
typedef void (*func_arc_scene_style_TransformDrawable_draw_float_float_float_float_float_float_float_float_float)(jcontext ctx, jobject self, jfloat param0, jfloat param1, jfloat param2, jfloat param3, jfloat param4, jfloat param5, jfloat param6, jfloat param7, jfloat param8);

void mark_arc_scene_style_TransformDrawable(jobject object, jint mark, jint depth);
void clinit_arc_scene_style_TransformDrawable(jcontext ctx);

#ifdef __cplusplus
}
#endif

#endif
