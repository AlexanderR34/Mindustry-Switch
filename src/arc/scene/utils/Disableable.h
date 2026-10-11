#ifndef HEADER_arc_scene_utils_Disableable
#define HEADER_arc_scene_utils_Disableable

#include "Clearwing.h"
#include "java/lang/Object.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct arc_scene_utils_Disableable {
	java_lang_Object parent;
} arc_scene_utils_Disableable;

extern Class class_arc_scene_utils_Disableable;


#define INDEX_arc_scene_utils_Disableable_isDisabled_R_boolean 0
typedef jbool (*func_arc_scene_utils_Disableable_isDisabled_R_boolean)(jcontext ctx, jobject self);
#define INDEX_arc_scene_utils_Disableable_setDisabled_boolean 1
typedef void (*func_arc_scene_utils_Disableable_setDisabled_boolean)(jcontext ctx, jobject self, jbool param0);

void mark_arc_scene_utils_Disableable(jobject object, jint mark, jint depth);
void clinit_arc_scene_utils_Disableable(jcontext ctx);

#ifdef __cplusplus
}
#endif

#endif
