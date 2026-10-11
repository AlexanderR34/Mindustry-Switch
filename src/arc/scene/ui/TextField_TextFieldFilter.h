#ifndef HEADER_arc_scene_ui_TextField$TextFieldFilter
#define HEADER_arc_scene_ui_TextField$TextFieldFilter

#include "Clearwing.h"
#include "java/lang/Object.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct arc_scene_ui_TextField$TextFieldFilter {
	java_lang_Object parent;
} arc_scene_ui_TextField$TextFieldFilter;

extern Class class_arc_scene_ui_TextField$TextFieldFilter;

extern jobject SF_arc_scene_ui_TextField$TextFieldFilter_digitsOnly;
extern jobject SF_arc_scene_ui_TextField$TextFieldFilter_floatsOnly;

#define INDEX_arc_scene_ui_TextField$TextFieldFilter_acceptChar_arc_scene_ui_TextField_char_R_boolean 0
typedef jbool (*func_arc_scene_ui_TextField$TextFieldFilter_acceptChar_arc_scene_ui_TextField_char_R_boolean)(jcontext ctx, jobject self, jobject param0, jchar param1);

void mark_arc_scene_ui_TextField$TextFieldFilter(jobject object, jint mark, jint depth);
void clinit_arc_scene_ui_TextField$TextFieldFilter(jcontext ctx);
jbool SM_arc_scene_ui_TextField$TextFieldFilter_lambda$static$1_arc_scene_ui_TextField_char_R_boolean(jcontext ctx, jobject param0, jchar param1);
jbool SM_arc_scene_ui_TextField$TextFieldFilter_lambda$static$0_arc_scene_ui_TextField_char_R_boolean(jcontext ctx, jobject param0, jchar param1);

#ifdef __cplusplus
}
#endif

#endif
