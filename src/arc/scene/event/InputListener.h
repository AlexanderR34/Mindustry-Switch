#ifndef HEADER_arc_scene_event_InputListener
#define HEADER_arc_scene_event_InputListener

#include "Clearwing.h"
#include "java/lang/Object.h"
#include "arc/scene/event/EventListener.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct arc_scene_event_InputListener {
	java_lang_Object parent;
} arc_scene_event_InputListener;

extern Class class_arc_scene_event_InputListener;

extern jobject SF_arc_scene_event_InputListener_tmpCoords;

#define VTABLE_arc_scene_event_InputListener_hashCode_R_int 0
typedef jint (*func_arc_scene_event_InputListener_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_arc_scene_event_InputListener_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_arc_scene_event_InputListener_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_scene_event_InputListener_clone_R_java_lang_Object 2
typedef jobject (*func_arc_scene_event_InputListener_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_arc_scene_event_InputListener_getClass_R_java_lang_Class 3
typedef jobject (*func_arc_scene_event_InputListener_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_arc_scene_event_InputListener_toString_R_java_lang_String 4
typedef jobject (*func_arc_scene_event_InputListener_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_arc_scene_event_InputListener_finalize 5
typedef void (*func_arc_scene_event_InputListener_finalize)(jcontext ctx, jobject self);
#define VTABLE_arc_scene_event_InputListener_notify 6
typedef void (*func_arc_scene_event_InputListener_notify)(jcontext ctx, jobject self);
#define VTABLE_arc_scene_event_InputListener_notifyAll 7
typedef void (*func_arc_scene_event_InputListener_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_arc_scene_event_InputListener_wait 8
typedef void (*func_arc_scene_event_InputListener_wait)(jcontext ctx, jobject self);
#define VTABLE_arc_scene_event_InputListener_wait_long 9
typedef void (*func_arc_scene_event_InputListener_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_arc_scene_event_InputListener_wait_long_int 10
typedef void (*func_arc_scene_event_InputListener_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);
#define VTABLE_arc_scene_event_InputListener_handle_arc_scene_event_SceneEvent_R_boolean 11
typedef jbool (*func_arc_scene_event_InputListener_handle_arc_scene_event_SceneEvent_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_scene_event_InputListener_touchDown_arc_scene_event_InputEvent_float_float_int_arc_input_KeyCode_R_boolean 12
typedef jbool (*func_arc_scene_event_InputListener_touchDown_arc_scene_event_InputEvent_float_float_int_arc_input_KeyCode_R_boolean)(jcontext ctx, jobject self, jobject param0, jfloat param1, jfloat param2, jint param3, jobject param4);
#define VTABLE_arc_scene_event_InputListener_touchUp_arc_scene_event_InputEvent_float_float_int_arc_input_KeyCode 13
typedef void (*func_arc_scene_event_InputListener_touchUp_arc_scene_event_InputEvent_float_float_int_arc_input_KeyCode)(jcontext ctx, jobject self, jobject param0, jfloat param1, jfloat param2, jint param3, jobject param4);
#define VTABLE_arc_scene_event_InputListener_touchDragged_arc_scene_event_InputEvent_float_float_int 14
typedef void (*func_arc_scene_event_InputListener_touchDragged_arc_scene_event_InputEvent_float_float_int)(jcontext ctx, jobject self, jobject param0, jfloat param1, jfloat param2, jint param3);
#define VTABLE_arc_scene_event_InputListener_mouseMoved_arc_scene_event_InputEvent_float_float_R_boolean 15
typedef jbool (*func_arc_scene_event_InputListener_mouseMoved_arc_scene_event_InputEvent_float_float_R_boolean)(jcontext ctx, jobject self, jobject param0, jfloat param1, jfloat param2);
#define VTABLE_arc_scene_event_InputListener_enter_arc_scene_event_InputEvent_float_float_int_arc_scene_Element 16
typedef void (*func_arc_scene_event_InputListener_enter_arc_scene_event_InputEvent_float_float_int_arc_scene_Element)(jcontext ctx, jobject self, jobject param0, jfloat param1, jfloat param2, jint param3, jobject param4);
#define VTABLE_arc_scene_event_InputListener_exit_arc_scene_event_InputEvent_float_float_int_arc_scene_Element 17
typedef void (*func_arc_scene_event_InputListener_exit_arc_scene_event_InputEvent_float_float_int_arc_scene_Element)(jcontext ctx, jobject self, jobject param0, jfloat param1, jfloat param2, jint param3, jobject param4);
#define VTABLE_arc_scene_event_InputListener_scrolled_arc_scene_event_InputEvent_float_float_float_float_R_boolean 18
typedef jbool (*func_arc_scene_event_InputListener_scrolled_arc_scene_event_InputEvent_float_float_float_float_R_boolean)(jcontext ctx, jobject self, jobject param0, jfloat param1, jfloat param2, jfloat param3, jfloat param4);
#define VTABLE_arc_scene_event_InputListener_keyDown_arc_scene_event_InputEvent_arc_input_KeyCode_R_boolean 19
typedef jbool (*func_arc_scene_event_InputListener_keyDown_arc_scene_event_InputEvent_arc_input_KeyCode_R_boolean)(jcontext ctx, jobject self, jobject param0, jobject param1);
#define VTABLE_arc_scene_event_InputListener_keyUp_arc_scene_event_InputEvent_arc_input_KeyCode_R_boolean 20
typedef jbool (*func_arc_scene_event_InputListener_keyUp_arc_scene_event_InputEvent_arc_input_KeyCode_R_boolean)(jcontext ctx, jobject self, jobject param0, jobject param1);
#define VTABLE_arc_scene_event_InputListener_keyTyped_arc_scene_event_InputEvent_char_R_boolean 21
typedef jbool (*func_arc_scene_event_InputListener_keyTyped_arc_scene_event_InputEvent_char_R_boolean)(jcontext ctx, jobject self, jobject param0, jchar param1);

void mark_arc_scene_event_InputListener(jobject object, jint mark, jint depth);
void clinit_arc_scene_event_InputListener(jcontext ctx);
void init_arc_scene_event_InputListener(jcontext ctx, jobject self);
jbool M_arc_scene_event_InputListener_handle_arc_scene_event_SceneEvent_R_boolean(jcontext ctx, jobject self, jobject param0);
jbool M_arc_scene_event_InputListener_touchDown_arc_scene_event_InputEvent_float_float_int_arc_input_KeyCode_R_boolean(jcontext ctx, jobject self, jobject param0, jfloat param1, jfloat param2, jint param3, jobject param4);
void M_arc_scene_event_InputListener_touchUp_arc_scene_event_InputEvent_float_float_int_arc_input_KeyCode(jcontext ctx, jobject self, jobject param0, jfloat param1, jfloat param2, jint param3, jobject param4);
void M_arc_scene_event_InputListener_touchDragged_arc_scene_event_InputEvent_float_float_int(jcontext ctx, jobject self, jobject param0, jfloat param1, jfloat param2, jint param3);
jbool M_arc_scene_event_InputListener_mouseMoved_arc_scene_event_InputEvent_float_float_R_boolean(jcontext ctx, jobject self, jobject param0, jfloat param1, jfloat param2);
void M_arc_scene_event_InputListener_enter_arc_scene_event_InputEvent_float_float_int_arc_scene_Element(jcontext ctx, jobject self, jobject param0, jfloat param1, jfloat param2, jint param3, jobject param4);
void M_arc_scene_event_InputListener_exit_arc_scene_event_InputEvent_float_float_int_arc_scene_Element(jcontext ctx, jobject self, jobject param0, jfloat param1, jfloat param2, jint param3, jobject param4);
jbool M_arc_scene_event_InputListener_scrolled_arc_scene_event_InputEvent_float_float_float_float_R_boolean(jcontext ctx, jobject self, jobject param0, jfloat param1, jfloat param2, jfloat param3, jfloat param4);
jbool M_arc_scene_event_InputListener_keyDown_arc_scene_event_InputEvent_arc_input_KeyCode_R_boolean(jcontext ctx, jobject self, jobject param0, jobject param1);
jbool M_arc_scene_event_InputListener_keyUp_arc_scene_event_InputEvent_arc_input_KeyCode_R_boolean(jcontext ctx, jobject self, jobject param0, jobject param1);
jbool M_arc_scene_event_InputListener_keyTyped_arc_scene_event_InputEvent_char_R_boolean(jcontext ctx, jobject self, jobject param0, jchar param1);

#ifdef __cplusplus
}
#endif

#endif
