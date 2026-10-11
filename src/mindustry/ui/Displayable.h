#ifndef HEADER_mindustry_ui_Displayable
#define HEADER_mindustry_ui_Displayable

#include "Clearwing.h"
#include "java/lang/Object.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct mindustry_ui_Displayable {
	java_lang_Object parent;
} mindustry_ui_Displayable;

extern Class class_mindustry_ui_Displayable;


#define INDEX_mindustry_ui_Displayable_displayable_R_boolean 0
typedef jbool (*func_mindustry_ui_Displayable_displayable_R_boolean)(jcontext ctx, jobject self);
#define INDEX_mindustry_ui_Displayable_display_arc_scene_ui_layout_Table 1
typedef void (*func_mindustry_ui_Displayable_display_arc_scene_ui_layout_Table)(jcontext ctx, jobject self, jobject param0);

void mark_mindustry_ui_Displayable(jobject object, jint mark, jint depth);
void clinit_mindustry_ui_Displayable(jcontext ctx);
jbool M_mindustry_ui_Displayable_displayable_R_boolean(jcontext ctx, jobject self);

#ifdef __cplusplus
}
#endif

#endif
