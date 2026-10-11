#ifndef HEADER_arc_scene_utils_Cullable
#define HEADER_arc_scene_utils_Cullable

#include "Clearwing.h"
#include "java/lang/Object.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct arc_scene_utils_Cullable {
	java_lang_Object parent;
} arc_scene_utils_Cullable;

extern Class class_arc_scene_utils_Cullable;


#define INDEX_arc_scene_utils_Cullable_setCullingArea_arc_math_geom_Rect 0
typedef void (*func_arc_scene_utils_Cullable_setCullingArea_arc_math_geom_Rect)(jcontext ctx, jobject self, jobject param0);

void mark_arc_scene_utils_Cullable(jobject object, jint mark, jint depth);
void clinit_arc_scene_utils_Cullable(jcontext ctx);

#ifdef __cplusplus
}
#endif

#endif
