#ifndef HEADER_arc_scene_ui_TextField$TextFieldValidator
#define HEADER_arc_scene_ui_TextField$TextFieldValidator

#include "Clearwing.h"
#include "java/lang/Object.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct arc_scene_ui_TextField$TextFieldValidator {
	java_lang_Object parent;
} arc_scene_ui_TextField$TextFieldValidator;

extern Class class_arc_scene_ui_TextField$TextFieldValidator;


#define INDEX_arc_scene_ui_TextField$TextFieldValidator_valid_java_lang_String_R_boolean 0
typedef jbool (*func_arc_scene_ui_TextField$TextFieldValidator_valid_java_lang_String_R_boolean)(jcontext ctx, jobject self, jobject param0);

void mark_arc_scene_ui_TextField$TextFieldValidator(jobject object, jint mark, jint depth);
void clinit_arc_scene_ui_TextField$TextFieldValidator(jcontext ctx);

#ifdef __cplusplus
}
#endif

#endif
