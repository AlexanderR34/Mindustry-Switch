#ifndef HEADER_mindustry_world_meta_StatValue
#define HEADER_mindustry_world_meta_StatValue

#include "Clearwing.h"
#include "java/lang/Object.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct mindustry_world_meta_StatValue {
	java_lang_Object parent;
} mindustry_world_meta_StatValue;

extern Class class_mindustry_world_meta_StatValue;


#define INDEX_mindustry_world_meta_StatValue_display_arc_scene_ui_layout_Table 0
typedef void (*func_mindustry_world_meta_StatValue_display_arc_scene_ui_layout_Table)(jcontext ctx, jobject self, jobject param0);

void mark_mindustry_world_meta_StatValue(jobject object, jint mark, jint depth);
void clinit_mindustry_world_meta_StatValue(jcontext ctx);

#ifdef __cplusplus
}
#endif

#endif
