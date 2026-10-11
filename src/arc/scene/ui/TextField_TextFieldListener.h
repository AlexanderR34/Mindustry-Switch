#ifndef HEADER_arc_scene_ui_TextField$TextFieldListener
#define HEADER_arc_scene_ui_TextField$TextFieldListener

#include "Clearwing.h"
#include "java/lang/Object.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct arc_scene_ui_TextField$TextFieldListener {
	java_lang_Object parent;
} arc_scene_ui_TextField$TextFieldListener;

extern Class class_arc_scene_ui_TextField$TextFieldListener;


#define INDEX_arc_scene_ui_TextField$TextFieldListener_keyTyped_arc_scene_ui_TextField_char 0
typedef void (*func_arc_scene_ui_TextField$TextFieldListener_keyTyped_arc_scene_ui_TextField_char)(jcontext ctx, jobject self, jobject param0, jchar param1);

void mark_arc_scene_ui_TextField$TextFieldListener(jobject object, jint mark, jint depth);
void clinit_arc_scene_ui_TextField$TextFieldListener(jcontext ctx);

#ifdef __cplusplus
}
#endif

#endif
