#ifndef HEADER_mindustry_ui_dialogs_ResearchDialog$View$2
#define HEADER_mindustry_ui_dialogs_ResearchDialog$View$2

#include "Clearwing.h"
#include "arc/scene/event/InputListener.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct mindustry_ui_dialogs_ResearchDialog$View$2 {
	arc_scene_event_InputListener parent;
	jref F_this$1;
} mindustry_ui_dialogs_ResearchDialog$View$2;

extern Class class_mindustry_ui_dialogs_ResearchDialog$View$2;


#define VTABLE_mindustry_ui_dialogs_ResearchDialog$View$2_hashCode_R_int 0
typedef jint (*func_mindustry_ui_dialogs_ResearchDialog$View$2_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_mindustry_ui_dialogs_ResearchDialog$View$2_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_mindustry_ui_dialogs_ResearchDialog$View$2_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_ui_dialogs_ResearchDialog$View$2_clone_R_java_lang_Object 2
typedef jobject (*func_mindustry_ui_dialogs_ResearchDialog$View$2_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_mindustry_ui_dialogs_ResearchDialog$View$2_getClass_R_java_lang_Class 3
typedef jobject (*func_mindustry_ui_dialogs_ResearchDialog$View$2_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_mindustry_ui_dialogs_ResearchDialog$View$2_toString_R_java_lang_String 4
typedef jobject (*func_mindustry_ui_dialogs_ResearchDialog$View$2_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_mindustry_ui_dialogs_ResearchDialog$View$2_finalize 5
typedef void (*func_mindustry_ui_dialogs_ResearchDialog$View$2_finalize)(jcontext ctx, jobject self);
#define VTABLE_mindustry_ui_dialogs_ResearchDialog$View$2_notify 6
typedef void (*func_mindustry_ui_dialogs_ResearchDialog$View$2_notify)(jcontext ctx, jobject self);
#define VTABLE_mindustry_ui_dialogs_ResearchDialog$View$2_notifyAll 7
typedef void (*func_mindustry_ui_dialogs_ResearchDialog$View$2_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_mindustry_ui_dialogs_ResearchDialog$View$2_wait 8
typedef void (*func_mindustry_ui_dialogs_ResearchDialog$View$2_wait)(jcontext ctx, jobject self);
#define VTABLE_mindustry_ui_dialogs_ResearchDialog$View$2_wait_long 9
typedef void (*func_mindustry_ui_dialogs_ResearchDialog$View$2_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_mindustry_ui_dialogs_ResearchDialog$View$2_wait_long_int 10
typedef void (*func_mindustry_ui_dialogs_ResearchDialog$View$2_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);
#define VTABLE_mindustry_ui_dialogs_ResearchDialog$View$2_handle_arc_scene_event_SceneEvent_R_boolean 11
typedef jbool (*func_mindustry_ui_dialogs_ResearchDialog$View$2_handle_arc_scene_event_SceneEvent_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_ui_dialogs_ResearchDialog$View$2_touchDown_arc_scene_event_InputEvent_float_float_int_arc_input_KeyCode_R_boolean 12
typedef jbool (*func_mindustry_ui_dialogs_ResearchDialog$View$2_touchDown_arc_scene_event_InputEvent_float_float_int_arc_input_KeyCode_R_boolean)(jcontext ctx, jobject self, jobject param0, jfloat param1, jfloat param2, jint param3, jobject param4);
#define VTABLE_mindustry_ui_dialogs_ResearchDialog$View$2_touchUp_arc_scene_event_InputEvent_float_float_int_arc_input_KeyCode 13
typedef void (*func_mindustry_ui_dialogs_ResearchDialog$View$2_touchUp_arc_scene_event_InputEvent_float_float_int_arc_input_KeyCode)(jcontext ctx, jobject self, jobject param0, jfloat param1, jfloat param2, jint param3, jobject param4);
#define VTABLE_mindustry_ui_dialogs_ResearchDialog$View$2_touchDragged_arc_scene_event_InputEvent_float_float_int 14
typedef void (*func_mindustry_ui_dialogs_ResearchDialog$View$2_touchDragged_arc_scene_event_InputEvent_float_float_int)(jcontext ctx, jobject self, jobject param0, jfloat param1, jfloat param2, jint param3);
#define VTABLE_mindustry_ui_dialogs_ResearchDialog$View$2_mouseMoved_arc_scene_event_InputEvent_float_float_R_boolean 15
typedef jbool (*func_mindustry_ui_dialogs_ResearchDialog$View$2_mouseMoved_arc_scene_event_InputEvent_float_float_R_boolean)(jcontext ctx, jobject self, jobject param0, jfloat param1, jfloat param2);
#define VTABLE_mindustry_ui_dialogs_ResearchDialog$View$2_enter_arc_scene_event_InputEvent_float_float_int_arc_scene_Element 16
typedef void (*func_mindustry_ui_dialogs_ResearchDialog$View$2_enter_arc_scene_event_InputEvent_float_float_int_arc_scene_Element)(jcontext ctx, jobject self, jobject param0, jfloat param1, jfloat param2, jint param3, jobject param4);
#define VTABLE_mindustry_ui_dialogs_ResearchDialog$View$2_exit_arc_scene_event_InputEvent_float_float_int_arc_scene_Element 17
typedef void (*func_mindustry_ui_dialogs_ResearchDialog$View$2_exit_arc_scene_event_InputEvent_float_float_int_arc_scene_Element)(jcontext ctx, jobject self, jobject param0, jfloat param1, jfloat param2, jint param3, jobject param4);
#define VTABLE_mindustry_ui_dialogs_ResearchDialog$View$2_scrolled_arc_scene_event_InputEvent_float_float_float_float_R_boolean 18
typedef jbool (*func_mindustry_ui_dialogs_ResearchDialog$View$2_scrolled_arc_scene_event_InputEvent_float_float_float_float_R_boolean)(jcontext ctx, jobject self, jobject param0, jfloat param1, jfloat param2, jfloat param3, jfloat param4);
#define VTABLE_mindustry_ui_dialogs_ResearchDialog$View$2_keyDown_arc_scene_event_InputEvent_arc_input_KeyCode_R_boolean 19
typedef jbool (*func_mindustry_ui_dialogs_ResearchDialog$View$2_keyDown_arc_scene_event_InputEvent_arc_input_KeyCode_R_boolean)(jcontext ctx, jobject self, jobject param0, jobject param1);
#define VTABLE_mindustry_ui_dialogs_ResearchDialog$View$2_keyUp_arc_scene_event_InputEvent_arc_input_KeyCode_R_boolean 20
typedef jbool (*func_mindustry_ui_dialogs_ResearchDialog$View$2_keyUp_arc_scene_event_InputEvent_arc_input_KeyCode_R_boolean)(jcontext ctx, jobject self, jobject param0, jobject param1);
#define VTABLE_mindustry_ui_dialogs_ResearchDialog$View$2_keyTyped_arc_scene_event_InputEvent_char_R_boolean 21
typedef jbool (*func_mindustry_ui_dialogs_ResearchDialog$View$2_keyTyped_arc_scene_event_InputEvent_char_R_boolean)(jcontext ctx, jobject self, jobject param0, jchar param1);

void mark_mindustry_ui_dialogs_ResearchDialog$View$2(jobject object, jint mark, jint depth);
void clinit_mindustry_ui_dialogs_ResearchDialog$View$2(jcontext ctx);
void init_mindustry_ui_dialogs_ResearchDialog$View$2_mindustry_ui_dialogs_ResearchDialog$View(jcontext ctx, jobject self, jobject param0);
jbool M_mindustry_ui_dialogs_ResearchDialog$View$2_touchDown_arc_scene_event_InputEvent_float_float_int_arc_input_KeyCode_R_boolean(jcontext ctx, jobject self, jobject param0, jfloat param1, jfloat param2, jint param3, jobject param4);

#ifdef __cplusplus
}
#endif

#endif
