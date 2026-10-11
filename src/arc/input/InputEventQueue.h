#ifndef HEADER_arc_input_InputEventQueue
#define HEADER_arc_input_InputEventQueue

#include "Clearwing.h"
#include "java/lang/Object.h"
#include "arc/input/InputProcessor.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct arc_input_InputEventQueue {
	java_lang_Object parent;
	jref F_queue;
	jref F_processingQueue;
	jref F_processor;
	jlong F_currentEventTime;
} arc_input_InputEventQueue;

extern Class class_arc_input_InputEventQueue;

extern jint SF_arc_input_InputEventQueue_SKIP;
extern jint SF_arc_input_InputEventQueue_KEY_DOWN;
extern jint SF_arc_input_InputEventQueue_KEY_UP;
extern jint SF_arc_input_InputEventQueue_KEY_TYPED;
extern jint SF_arc_input_InputEventQueue_TOUCH_DOWN;
extern jint SF_arc_input_InputEventQueue_TOUCH_UP;
extern jint SF_arc_input_InputEventQueue_TOUCH_DRAGGED;
extern jint SF_arc_input_InputEventQueue_MOUSE_MOVED;
extern jint SF_arc_input_InputEventQueue_SCROLLED;

#define VTABLE_arc_input_InputEventQueue_hashCode_R_int 0
typedef jint (*func_arc_input_InputEventQueue_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_arc_input_InputEventQueue_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_arc_input_InputEventQueue_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_input_InputEventQueue_clone_R_java_lang_Object 2
typedef jobject (*func_arc_input_InputEventQueue_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_arc_input_InputEventQueue_getClass_R_java_lang_Class 3
typedef jobject (*func_arc_input_InputEventQueue_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_arc_input_InputEventQueue_toString_R_java_lang_String 4
typedef jobject (*func_arc_input_InputEventQueue_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_arc_input_InputEventQueue_finalize 5
typedef void (*func_arc_input_InputEventQueue_finalize)(jcontext ctx, jobject self);
#define VTABLE_arc_input_InputEventQueue_notify 6
typedef void (*func_arc_input_InputEventQueue_notify)(jcontext ctx, jobject self);
#define VTABLE_arc_input_InputEventQueue_notifyAll 7
typedef void (*func_arc_input_InputEventQueue_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_arc_input_InputEventQueue_wait 8
typedef void (*func_arc_input_InputEventQueue_wait)(jcontext ctx, jobject self);
#define VTABLE_arc_input_InputEventQueue_wait_long 9
typedef void (*func_arc_input_InputEventQueue_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_arc_input_InputEventQueue_wait_long_int 10
typedef void (*func_arc_input_InputEventQueue_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);
#define VTABLE_arc_input_InputEventQueue_keyDown_arc_input_KeyCode_R_boolean 11
typedef jbool (*func_arc_input_InputEventQueue_keyDown_arc_input_KeyCode_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_input_InputEventQueue_keyUp_arc_input_KeyCode_R_boolean 12
typedef jbool (*func_arc_input_InputEventQueue_keyUp_arc_input_KeyCode_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_input_InputEventQueue_keyTyped_char_R_boolean 13
typedef jbool (*func_arc_input_InputEventQueue_keyTyped_char_R_boolean)(jcontext ctx, jobject self, jchar param0);
#define VTABLE_arc_input_InputEventQueue_touchDown_int_int_int_arc_input_KeyCode_R_boolean 14
typedef jbool (*func_arc_input_InputEventQueue_touchDown_int_int_int_arc_input_KeyCode_R_boolean)(jcontext ctx, jobject self, jint param0, jint param1, jint param2, jobject param3);
#define VTABLE_arc_input_InputEventQueue_touchUp_int_int_int_arc_input_KeyCode_R_boolean 15
typedef jbool (*func_arc_input_InputEventQueue_touchUp_int_int_int_arc_input_KeyCode_R_boolean)(jcontext ctx, jobject self, jint param0, jint param1, jint param2, jobject param3);
#define VTABLE_arc_input_InputEventQueue_touchDragged_int_int_int_R_boolean 16
typedef jbool (*func_arc_input_InputEventQueue_touchDragged_int_int_int_R_boolean)(jcontext ctx, jobject self, jint param0, jint param1, jint param2);
#define VTABLE_arc_input_InputEventQueue_mouseMoved_int_int_R_boolean 17
typedef jbool (*func_arc_input_InputEventQueue_mouseMoved_int_int_R_boolean)(jcontext ctx, jobject self, jint param0, jint param1);
#define VTABLE_arc_input_InputEventQueue_scrolled_float_float_R_boolean 18
typedef jbool (*func_arc_input_InputEventQueue_scrolled_float_float_R_boolean)(jcontext ctx, jobject self, jfloat param0, jfloat param1);
#define VTABLE_arc_input_InputEventQueue_getProcessor_R_arc_input_InputProcessor 19
typedef jobject (*func_arc_input_InputEventQueue_getProcessor_R_arc_input_InputProcessor)(jcontext ctx, jobject self);
#define VTABLE_arc_input_InputEventQueue_setProcessor_arc_input_InputProcessor 20
typedef void (*func_arc_input_InputEventQueue_setProcessor_arc_input_InputProcessor)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_input_InputEventQueue_drain 21
typedef void (*func_arc_input_InputEventQueue_drain)(jcontext ctx, jobject self);
#define VTABLE_arc_input_InputEventQueue_next_int_int_R_int 22
typedef jint (*func_arc_input_InputEventQueue_next_int_int_R_int)(jcontext ctx, jobject self, jint param0, jint param1);
#define VTABLE_arc_input_InputEventQueue_queueTime 23
typedef void (*func_arc_input_InputEventQueue_queueTime)(jcontext ctx, jobject self);
#define VTABLE_arc_input_InputEventQueue_getCurrentEventTime_R_long 24
typedef jlong (*func_arc_input_InputEventQueue_getCurrentEventTime_R_long)(jcontext ctx, jobject self);

void mark_arc_input_InputEventQueue(jobject object, jint mark, jint depth);
void clinit_arc_input_InputEventQueue(jcontext ctx);
void init_arc_input_InputEventQueue(jcontext ctx, jobject self);
void init_arc_input_InputEventQueue_arc_input_InputProcessor(jcontext ctx, jobject self, jobject param0);
jobject M_arc_input_InputEventQueue_getProcessor_R_arc_input_InputProcessor(jcontext ctx, jobject self);
void M_arc_input_InputEventQueue_setProcessor_arc_input_InputProcessor(jcontext ctx, jobject self, jobject param0);
void M_arc_input_InputEventQueue_drain(jcontext ctx, jobject self);
jint M_arc_input_InputEventQueue_next_int_int_R_int(jcontext ctx, jobject self, jint param0, jint param1);
void M_arc_input_InputEventQueue_queueTime(jcontext ctx, jobject self);
jbool M_arc_input_InputEventQueue_keyDown_arc_input_KeyCode_R_boolean(jcontext ctx, jobject self, jobject param0);
jbool M_arc_input_InputEventQueue_keyUp_arc_input_KeyCode_R_boolean(jcontext ctx, jobject self, jobject param0);
jbool M_arc_input_InputEventQueue_keyTyped_char_R_boolean(jcontext ctx, jobject self, jchar param0);
jbool M_arc_input_InputEventQueue_touchDown_int_int_int_arc_input_KeyCode_R_boolean(jcontext ctx, jobject self, jint param0, jint param1, jint param2, jobject param3);
jbool M_arc_input_InputEventQueue_touchUp_int_int_int_arc_input_KeyCode_R_boolean(jcontext ctx, jobject self, jint param0, jint param1, jint param2, jobject param3);
jbool M_arc_input_InputEventQueue_touchDragged_int_int_int_R_boolean(jcontext ctx, jobject self, jint param0, jint param1, jint param2);
jbool M_arc_input_InputEventQueue_mouseMoved_int_int_R_boolean(jcontext ctx, jobject self, jint param0, jint param1);
jbool M_arc_input_InputEventQueue_scrolled_float_float_R_boolean(jcontext ctx, jobject self, jfloat param0, jfloat param1);
jlong M_arc_input_InputEventQueue_getCurrentEventTime_R_long(jcontext ctx, jobject self);

#ifdef __cplusplus
}
#endif

#endif
