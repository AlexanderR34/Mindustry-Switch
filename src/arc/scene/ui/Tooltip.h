#ifndef HEADER_arc_scene_ui_Tooltip
#define HEADER_arc_scene_ui_Tooltip

#include "Clearwing.h"
#include "arc/scene/event/InputListener.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct arc_scene_ui_Tooltip {
	arc_scene_event_InputListener parent;
	jref F_manager;
	jref F_container;
	jbool F_allowMobile;
	jbool F_instant;
	jbool F_always;
	jref F_targetActor;
	jref F_show;
} arc_scene_ui_Tooltip;

extern Class class_arc_scene_ui_Tooltip;

extern jobject SF_arc_scene_ui_Tooltip_tmp;

#define VTABLE_arc_scene_ui_Tooltip_hashCode_R_int 0
typedef jint (*func_arc_scene_ui_Tooltip_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_arc_scene_ui_Tooltip_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_arc_scene_ui_Tooltip_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_scene_ui_Tooltip_clone_R_java_lang_Object 2
typedef jobject (*func_arc_scene_ui_Tooltip_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_arc_scene_ui_Tooltip_getClass_R_java_lang_Class 3
typedef jobject (*func_arc_scene_ui_Tooltip_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_arc_scene_ui_Tooltip_toString_R_java_lang_String 4
typedef jobject (*func_arc_scene_ui_Tooltip_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_arc_scene_ui_Tooltip_finalize 5
typedef void (*func_arc_scene_ui_Tooltip_finalize)(jcontext ctx, jobject self);
#define VTABLE_arc_scene_ui_Tooltip_notify 6
typedef void (*func_arc_scene_ui_Tooltip_notify)(jcontext ctx, jobject self);
#define VTABLE_arc_scene_ui_Tooltip_notifyAll 7
typedef void (*func_arc_scene_ui_Tooltip_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_arc_scene_ui_Tooltip_wait 8
typedef void (*func_arc_scene_ui_Tooltip_wait)(jcontext ctx, jobject self);
#define VTABLE_arc_scene_ui_Tooltip_wait_long 9
typedef void (*func_arc_scene_ui_Tooltip_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_arc_scene_ui_Tooltip_wait_long_int 10
typedef void (*func_arc_scene_ui_Tooltip_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);
#define VTABLE_arc_scene_ui_Tooltip_handle_arc_scene_event_SceneEvent_R_boolean 11
typedef jbool (*func_arc_scene_ui_Tooltip_handle_arc_scene_event_SceneEvent_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_scene_ui_Tooltip_touchDown_arc_scene_event_InputEvent_float_float_int_arc_input_KeyCode_R_boolean 12
typedef jbool (*func_arc_scene_ui_Tooltip_touchDown_arc_scene_event_InputEvent_float_float_int_arc_input_KeyCode_R_boolean)(jcontext ctx, jobject self, jobject param0, jfloat param1, jfloat param2, jint param3, jobject param4);
#define VTABLE_arc_scene_ui_Tooltip_touchUp_arc_scene_event_InputEvent_float_float_int_arc_input_KeyCode 13
typedef void (*func_arc_scene_ui_Tooltip_touchUp_arc_scene_event_InputEvent_float_float_int_arc_input_KeyCode)(jcontext ctx, jobject self, jobject param0, jfloat param1, jfloat param2, jint param3, jobject param4);
#define VTABLE_arc_scene_ui_Tooltip_touchDragged_arc_scene_event_InputEvent_float_float_int 14
typedef void (*func_arc_scene_ui_Tooltip_touchDragged_arc_scene_event_InputEvent_float_float_int)(jcontext ctx, jobject self, jobject param0, jfloat param1, jfloat param2, jint param3);
#define VTABLE_arc_scene_ui_Tooltip_mouseMoved_arc_scene_event_InputEvent_float_float_R_boolean 15
typedef jbool (*func_arc_scene_ui_Tooltip_mouseMoved_arc_scene_event_InputEvent_float_float_R_boolean)(jcontext ctx, jobject self, jobject param0, jfloat param1, jfloat param2);
#define VTABLE_arc_scene_ui_Tooltip_enter_arc_scene_event_InputEvent_float_float_int_arc_scene_Element 16
typedef void (*func_arc_scene_ui_Tooltip_enter_arc_scene_event_InputEvent_float_float_int_arc_scene_Element)(jcontext ctx, jobject self, jobject param0, jfloat param1, jfloat param2, jint param3, jobject param4);
#define VTABLE_arc_scene_ui_Tooltip_exit_arc_scene_event_InputEvent_float_float_int_arc_scene_Element 17
typedef void (*func_arc_scene_ui_Tooltip_exit_arc_scene_event_InputEvent_float_float_int_arc_scene_Element)(jcontext ctx, jobject self, jobject param0, jfloat param1, jfloat param2, jint param3, jobject param4);
#define VTABLE_arc_scene_ui_Tooltip_scrolled_arc_scene_event_InputEvent_float_float_float_float_R_boolean 18
typedef jbool (*func_arc_scene_ui_Tooltip_scrolled_arc_scene_event_InputEvent_float_float_float_float_R_boolean)(jcontext ctx, jobject self, jobject param0, jfloat param1, jfloat param2, jfloat param3, jfloat param4);
#define VTABLE_arc_scene_ui_Tooltip_keyDown_arc_scene_event_InputEvent_arc_input_KeyCode_R_boolean 19
typedef jbool (*func_arc_scene_ui_Tooltip_keyDown_arc_scene_event_InputEvent_arc_input_KeyCode_R_boolean)(jcontext ctx, jobject self, jobject param0, jobject param1);
#define VTABLE_arc_scene_ui_Tooltip_keyUp_arc_scene_event_InputEvent_arc_input_KeyCode_R_boolean 20
typedef jbool (*func_arc_scene_ui_Tooltip_keyUp_arc_scene_event_InputEvent_arc_input_KeyCode_R_boolean)(jcontext ctx, jobject self, jobject param0, jobject param1);
#define VTABLE_arc_scene_ui_Tooltip_keyTyped_arc_scene_event_InputEvent_char_R_boolean 21
typedef jbool (*func_arc_scene_ui_Tooltip_keyTyped_arc_scene_event_InputEvent_char_R_boolean)(jcontext ctx, jobject self, jobject param0, jchar param1);
#define VTABLE_arc_scene_ui_Tooltip_getManager_R_arc_scene_ui_Tooltip$Tooltips 22
typedef jobject (*func_arc_scene_ui_Tooltip_getManager_R_arc_scene_ui_Tooltip$Tooltips)(jcontext ctx, jobject self);
#define VTABLE_arc_scene_ui_Tooltip_getContainer_R_arc_scene_ui_layout_Table 23
typedef jobject (*func_arc_scene_ui_Tooltip_getContainer_R_arc_scene_ui_layout_Table)(jcontext ctx, jobject self);
#define VTABLE_arc_scene_ui_Tooltip_setInstant_boolean 24
typedef void (*func_arc_scene_ui_Tooltip_setInstant_boolean)(jcontext ctx, jobject self, jbool param0);
#define VTABLE_arc_scene_ui_Tooltip_setAlways_boolean 25
typedef void (*func_arc_scene_ui_Tooltip_setAlways_boolean)(jcontext ctx, jobject self, jbool param0);
#define VTABLE_arc_scene_ui_Tooltip_setContainerPosition_arc_scene_Element_float_float 26
typedef void (*func_arc_scene_ui_Tooltip_setContainerPosition_arc_scene_Element_float_float)(jcontext ctx, jobject self, jobject param0, jfloat param1, jfloat param2);
#define VTABLE_arc_scene_ui_Tooltip_show_arc_scene_Element_float_float 27
typedef void (*func_arc_scene_ui_Tooltip_show_arc_scene_Element_float_float)(jcontext ctx, jobject self, jobject param0, jfloat param1, jfloat param2);
#define VTABLE_arc_scene_ui_Tooltip_hide 28
typedef void (*func_arc_scene_ui_Tooltip_hide)(jcontext ctx, jobject self);

void mark_arc_scene_ui_Tooltip(jobject object, jint mark, jint depth);
void clinit_arc_scene_ui_Tooltip(jcontext ctx);
void init_arc_scene_ui_Tooltip_arc_func_Cons(jcontext ctx, jobject self, jobject param0);
void init_arc_scene_ui_Tooltip_arc_func_Cons_java_lang_Runnable(jcontext ctx, jobject self, jobject param0, jobject param1);
void init_arc_scene_ui_Tooltip_arc_func_Cons_arc_scene_ui_Tooltip$Tooltips(jcontext ctx, jobject self, jobject param0, jobject param1);
jobject M_arc_scene_ui_Tooltip_getManager_R_arc_scene_ui_Tooltip$Tooltips(jcontext ctx, jobject self);
jobject M_arc_scene_ui_Tooltip_getContainer_R_arc_scene_ui_layout_Table(jcontext ctx, jobject self);
void M_arc_scene_ui_Tooltip_setInstant_boolean(jcontext ctx, jobject self, jbool param0);
void M_arc_scene_ui_Tooltip_setAlways_boolean(jcontext ctx, jobject self, jbool param0);
jbool M_arc_scene_ui_Tooltip_touchDown_arc_scene_event_InputEvent_float_float_int_arc_input_KeyCode_R_boolean(jcontext ctx, jobject self, jobject param0, jfloat param1, jfloat param2, jint param3, jobject param4);
void M_arc_scene_ui_Tooltip_touchUp_arc_scene_event_InputEvent_float_float_int_arc_input_KeyCode(jcontext ctx, jobject self, jobject param0, jfloat param1, jfloat param2, jint param3, jobject param4);
jbool M_arc_scene_ui_Tooltip_mouseMoved_arc_scene_event_InputEvent_float_float_R_boolean(jcontext ctx, jobject self, jobject param0, jfloat param1, jfloat param2);
void M_arc_scene_ui_Tooltip_setContainerPosition_arc_scene_Element_float_float(jcontext ctx, jobject self, jobject param0, jfloat param1, jfloat param2);
void M_arc_scene_ui_Tooltip_enter_arc_scene_event_InputEvent_float_float_int_arc_scene_Element(jcontext ctx, jobject self, jobject param0, jfloat param1, jfloat param2, jint param3, jobject param4);
void M_arc_scene_ui_Tooltip_exit_arc_scene_event_InputEvent_float_float_int_arc_scene_Element(jcontext ctx, jobject self, jobject param0, jfloat param1, jfloat param2, jint param3, jobject param4);
void M_arc_scene_ui_Tooltip_show_arc_scene_Element_float_float(jcontext ctx, jobject self, jobject param0, jfloat param1, jfloat param2);
void M_arc_scene_ui_Tooltip_hide(jcontext ctx, jobject self);

#ifdef __cplusplus
}
#endif

#endif
