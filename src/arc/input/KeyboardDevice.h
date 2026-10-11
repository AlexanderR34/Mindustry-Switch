#ifndef HEADER_arc_input_KeyboardDevice
#define HEADER_arc_input_KeyboardDevice

#include "Clearwing.h"
#include "java/lang/Object.h"
#include "arc/input/InputProcessor.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct arc_input_KeyboardDevice {
	java_lang_Object parent;
	jref F_pressed;
	jref F_justReleased;
	jref F_lastFramePressed;
	jref F_justPressed;
	jref F_axes;
} arc_input_KeyboardDevice;

extern Class class_arc_input_KeyboardDevice;


#define VTABLE_arc_input_KeyboardDevice_hashCode_R_int 0
typedef jint (*func_arc_input_KeyboardDevice_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_arc_input_KeyboardDevice_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_arc_input_KeyboardDevice_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_input_KeyboardDevice_clone_R_java_lang_Object 2
typedef jobject (*func_arc_input_KeyboardDevice_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_arc_input_KeyboardDevice_getClass_R_java_lang_Class 3
typedef jobject (*func_arc_input_KeyboardDevice_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_arc_input_KeyboardDevice_toString_R_java_lang_String 4
typedef jobject (*func_arc_input_KeyboardDevice_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_arc_input_KeyboardDevice_finalize 5
typedef void (*func_arc_input_KeyboardDevice_finalize)(jcontext ctx, jobject self);
#define VTABLE_arc_input_KeyboardDevice_notify 6
typedef void (*func_arc_input_KeyboardDevice_notify)(jcontext ctx, jobject self);
#define VTABLE_arc_input_KeyboardDevice_notifyAll 7
typedef void (*func_arc_input_KeyboardDevice_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_arc_input_KeyboardDevice_wait 8
typedef void (*func_arc_input_KeyboardDevice_wait)(jcontext ctx, jobject self);
#define VTABLE_arc_input_KeyboardDevice_wait_long 9
typedef void (*func_arc_input_KeyboardDevice_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_arc_input_KeyboardDevice_wait_long_int 10
typedef void (*func_arc_input_KeyboardDevice_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);
#define VTABLE_arc_input_KeyboardDevice_keyDown_arc_input_KeyCode_R_boolean 11
typedef jbool (*func_arc_input_KeyboardDevice_keyDown_arc_input_KeyCode_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_input_KeyboardDevice_keyUp_arc_input_KeyCode_R_boolean 12
typedef jbool (*func_arc_input_KeyboardDevice_keyUp_arc_input_KeyCode_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_input_KeyboardDevice_keyTyped_char_R_boolean 13
typedef jbool (*func_arc_input_KeyboardDevice_keyTyped_char_R_boolean)(jcontext ctx, jobject self, jchar param0);
#define VTABLE_arc_input_KeyboardDevice_touchDown_int_int_int_arc_input_KeyCode_R_boolean 14
typedef jbool (*func_arc_input_KeyboardDevice_touchDown_int_int_int_arc_input_KeyCode_R_boolean)(jcontext ctx, jobject self, jint param0, jint param1, jint param2, jobject param3);
#define VTABLE_arc_input_KeyboardDevice_touchUp_int_int_int_arc_input_KeyCode_R_boolean 15
typedef jbool (*func_arc_input_KeyboardDevice_touchUp_int_int_int_arc_input_KeyCode_R_boolean)(jcontext ctx, jobject self, jint param0, jint param1, jint param2, jobject param3);
#define VTABLE_arc_input_KeyboardDevice_touchDragged_int_int_int_R_boolean 16
typedef jbool (*func_arc_input_KeyboardDevice_touchDragged_int_int_int_R_boolean)(jcontext ctx, jobject self, jint param0, jint param1, jint param2);
#define VTABLE_arc_input_KeyboardDevice_mouseMoved_int_int_R_boolean 17
typedef jbool (*func_arc_input_KeyboardDevice_mouseMoved_int_int_R_boolean)(jcontext ctx, jobject self, jint param0, jint param1);
#define VTABLE_arc_input_KeyboardDevice_scrolled_float_float_R_boolean 18
typedef jbool (*func_arc_input_KeyboardDevice_scrolled_float_float_R_boolean)(jcontext ctx, jobject self, jfloat param0, jfloat param1);
#define VTABLE_arc_input_KeyboardDevice_postUpdate 19
typedef void (*func_arc_input_KeyboardDevice_postUpdate)(jcontext ctx, jobject self);
#define VTABLE_arc_input_KeyboardDevice_isPressed_arc_input_KeyCode_R_boolean 20
typedef jbool (*func_arc_input_KeyboardDevice_isPressed_arc_input_KeyCode_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_input_KeyboardDevice_isTapped_arc_input_KeyCode_R_boolean 21
typedef jbool (*func_arc_input_KeyboardDevice_isTapped_arc_input_KeyCode_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_input_KeyboardDevice_isReleased_arc_input_KeyCode_R_boolean 22
typedef jbool (*func_arc_input_KeyboardDevice_isReleased_arc_input_KeyCode_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_input_KeyboardDevice_getAxis_arc_input_KeyCode_R_float 23
typedef jfloat (*func_arc_input_KeyboardDevice_getAxis_arc_input_KeyCode_R_float)(jcontext ctx, jobject self, jobject param0);

void mark_arc_input_KeyboardDevice(jobject object, jint mark, jint depth);
void clinit_arc_input_KeyboardDevice(jcontext ctx);
void init_arc_input_KeyboardDevice(jcontext ctx, jobject self);
void M_arc_input_KeyboardDevice_postUpdate(jcontext ctx, jobject self);
jbool M_arc_input_KeyboardDevice_isPressed_arc_input_KeyCode_R_boolean(jcontext ctx, jobject self, jobject param0);
jbool M_arc_input_KeyboardDevice_isTapped_arc_input_KeyCode_R_boolean(jcontext ctx, jobject self, jobject param0);
jbool M_arc_input_KeyboardDevice_isReleased_arc_input_KeyCode_R_boolean(jcontext ctx, jobject self, jobject param0);
jfloat M_arc_input_KeyboardDevice_getAxis_arc_input_KeyCode_R_float(jcontext ctx, jobject self, jobject param0);
jbool M_arc_input_KeyboardDevice_keyDown_arc_input_KeyCode_R_boolean(jcontext ctx, jobject self, jobject param0);
jbool M_arc_input_KeyboardDevice_keyUp_arc_input_KeyCode_R_boolean(jcontext ctx, jobject self, jobject param0);
jbool M_arc_input_KeyboardDevice_touchDown_int_int_int_arc_input_KeyCode_R_boolean(jcontext ctx, jobject self, jint param0, jint param1, jint param2, jobject param3);
jbool M_arc_input_KeyboardDevice_touchUp_int_int_int_arc_input_KeyCode_R_boolean(jcontext ctx, jobject self, jint param0, jint param1, jint param2, jobject param3);
jbool M_arc_input_KeyboardDevice_scrolled_float_float_R_boolean(jcontext ctx, jobject self, jfloat param0, jfloat param1);

#ifdef __cplusplus
}
#endif

#endif
