#ifndef HEADER_arc_Input
#define HEADER_arc_Input

#include "Clearwing.h"
#include "java/lang/Object.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct arc_Input {
	java_lang_Object parent;
	jref F_keyboard;
	jref F_inputMultiplexer;
	jref F_caughtKeys;
	jref F_mouseReturn;
	jbool F_useKeyboard;
} arc_Input;

extern Class class_arc_Input;


#define VTABLE_arc_Input_hashCode_R_int 0
typedef jint (*func_arc_Input_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_arc_Input_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_arc_Input_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_Input_clone_R_java_lang_Object 2
typedef jobject (*func_arc_Input_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_arc_Input_getClass_R_java_lang_Class 3
typedef jobject (*func_arc_Input_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_arc_Input_toString_R_java_lang_String 4
typedef jobject (*func_arc_Input_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_arc_Input_finalize 5
typedef void (*func_arc_Input_finalize)(jcontext ctx, jobject self);
#define VTABLE_arc_Input_notify 6
typedef void (*func_arc_Input_notify)(jcontext ctx, jobject self);
#define VTABLE_arc_Input_notifyAll 7
typedef void (*func_arc_Input_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_arc_Input_wait 8
typedef void (*func_arc_Input_wait)(jcontext ctx, jobject self);
#define VTABLE_arc_Input_wait_long 9
typedef void (*func_arc_Input_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_arc_Input_wait_long_int 10
typedef void (*func_arc_Input_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);
#define VTABLE_arc_Input_mouseWorld_float_float_R_arc_math_geom_Vec2 11
typedef jobject (*func_arc_Input_mouseWorld_float_float_R_arc_math_geom_Vec2)(jcontext ctx, jobject self, jfloat param0, jfloat param1);
#define VTABLE_arc_Input_mouseScreen_float_float_R_arc_math_geom_Vec2 12
typedef jobject (*func_arc_Input_mouseScreen_float_float_R_arc_math_geom_Vec2)(jcontext ctx, jobject self, jfloat param0, jfloat param1);
#define VTABLE_arc_Input_mouseWorldX_R_float 13
typedef jfloat (*func_arc_Input_mouseWorldX_R_float)(jcontext ctx, jobject self);
#define VTABLE_arc_Input_mouseWorldY_R_float 14
typedef jfloat (*func_arc_Input_mouseWorldY_R_float)(jcontext ctx, jobject self);
#define VTABLE_arc_Input_mouseWorld_R_arc_math_geom_Vec2 15
typedef jobject (*func_arc_Input_mouseWorld_R_arc_math_geom_Vec2)(jcontext ctx, jobject self);
#define VTABLE_arc_Input_mouse_R_arc_math_geom_Vec2 16
typedef jobject (*func_arc_Input_mouse_R_arc_math_geom_Vec2)(jcontext ctx, jobject self);
#define VTABLE_arc_Input_setUseKeyboard_boolean 17
typedef void (*func_arc_Input_setUseKeyboard_boolean)(jcontext ctx, jobject self, jbool param0);
#define VTABLE_arc_Input_useKeyboard_R_boolean 18
typedef jbool (*func_arc_Input_useKeyboard_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_arc_Input_mouseX_R_int 19
typedef jint (*func_arc_Input_mouseX_R_int)(jcontext ctx, jobject self);
#define VTABLE_arc_Input_mouseX_int_R_int 20
typedef jint (*func_arc_Input_mouseX_int_R_int)(jcontext ctx, jobject self, jint param0);
#define VTABLE_arc_Input_deltaX_R_int 21
typedef jint (*func_arc_Input_deltaX_R_int)(jcontext ctx, jobject self);
#define VTABLE_arc_Input_deltaX_int_R_int 22
typedef jint (*func_arc_Input_deltaX_int_R_int)(jcontext ctx, jobject self, jint param0);
#define VTABLE_arc_Input_mouseY_R_int 23
typedef jint (*func_arc_Input_mouseY_R_int)(jcontext ctx, jobject self);
#define VTABLE_arc_Input_mouseY_int_R_int 24
typedef jint (*func_arc_Input_mouseY_int_R_int)(jcontext ctx, jobject self, jint param0);
#define VTABLE_arc_Input_deltaY_R_int 25
typedef jint (*func_arc_Input_deltaY_R_int)(jcontext ctx, jobject self);
#define VTABLE_arc_Input_deltaY_int_R_int 26
typedef jint (*func_arc_Input_deltaY_int_R_int)(jcontext ctx, jobject self, jint param0);
#define VTABLE_arc_Input_isTouched_R_boolean 27
typedef jbool (*func_arc_Input_isTouched_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_arc_Input_justTouched_R_boolean 28
typedef jbool (*func_arc_Input_justTouched_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_arc_Input_getTouches_R_int 29
typedef jint (*func_arc_Input_getTouches_R_int)(jcontext ctx, jobject self);
#define VTABLE_arc_Input_isTouched_int_R_boolean 30
typedef jbool (*func_arc_Input_isTouched_int_R_boolean)(jcontext ctx, jobject self, jint param0);
#define VTABLE_arc_Input_getPressure_R_float 31
typedef jfloat (*func_arc_Input_getPressure_R_float)(jcontext ctx, jobject self);
#define VTABLE_arc_Input_getPressure_int_R_float 32
typedef jfloat (*func_arc_Input_getPressure_int_R_float)(jcontext ctx, jobject self, jint param0);
#define VTABLE_arc_Input_shift_R_boolean 33
typedef jbool (*func_arc_Input_shift_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_arc_Input_ctrl_R_boolean 34
typedef jbool (*func_arc_Input_ctrl_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_arc_Input_alt_R_boolean 35
typedef jbool (*func_arc_Input_alt_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_arc_Input_keyDown_arc_input_KeyCode_R_boolean 36
typedef jbool (*func_arc_Input_keyDown_arc_input_KeyCode_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_Input_keyTap_arc_input_KeyCode_R_boolean 37
typedef jbool (*func_arc_Input_keyTap_arc_input_KeyCode_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_Input_keyRelease_arc_input_KeyCode_R_boolean 38
typedef jbool (*func_arc_Input_keyRelease_arc_input_KeyCode_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_Input_axis_arc_input_KeyCode_R_float 39
typedef jfloat (*func_arc_Input_axis_arc_input_KeyCode_R_float)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_Input_keyDown_arc_input_KeyBind_R_boolean 40
typedef jbool (*func_arc_Input_keyDown_arc_input_KeyBind_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_Input_keyTap_arc_input_KeyBind_R_boolean 41
typedef jbool (*func_arc_Input_keyTap_arc_input_KeyBind_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_Input_keyRelease_arc_input_KeyBind_R_boolean 42
typedef jbool (*func_arc_Input_keyRelease_arc_input_KeyBind_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_Input_axis_arc_input_KeyBind_R_float 43
typedef jfloat (*func_arc_Input_axis_arc_input_KeyBind_R_float)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_Input_axisTap_arc_input_KeyBind_R_float 44
typedef jfloat (*func_arc_Input_axisTap_arc_input_KeyBind_R_float)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_Input_getTextInput_arc_Input$TextInput 45
typedef void (*func_arc_Input_getTextInput_arc_Input$TextInput)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_Input_isShowingTextInput_R_boolean 46
typedef jbool (*func_arc_Input_isShowingTextInput_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_arc_Input_setOnscreenKeyboardVisible_boolean 47
typedef void (*func_arc_Input_setOnscreenKeyboardVisible_boolean)(jcontext ctx, jobject self, jbool param0);
#define VTABLE_arc_Input_vibrate_int 48
typedef void (*func_arc_Input_vibrate_int)(jcontext ctx, jobject self, jint param0);
#define VTABLE_arc_Input_vibrate_Array1_long_int 49
typedef void (*func_arc_Input_vibrate_Array1_long_int)(jcontext ctx, jobject self, jobject param0, jint param1);
#define VTABLE_arc_Input_cancelVibrate 50
typedef void (*func_arc_Input_cancelVibrate)(jcontext ctx, jobject self);
#define VTABLE_arc_Input_getAccelerometer_R_arc_math_geom_Vec3 51
typedef jobject (*func_arc_Input_getAccelerometer_R_arc_math_geom_Vec3)(jcontext ctx, jobject self);
#define VTABLE_arc_Input_getGyroscope_R_arc_math_geom_Vec3 52
typedef jobject (*func_arc_Input_getGyroscope_R_arc_math_geom_Vec3)(jcontext ctx, jobject self);
#define VTABLE_arc_Input_getOrientation_R_arc_math_geom_Vec3 53
typedef jobject (*func_arc_Input_getOrientation_R_arc_math_geom_Vec3)(jcontext ctx, jobject self);
#define VTABLE_arc_Input_getRotationMatrix_Array1_float 54
typedef void (*func_arc_Input_getRotationMatrix_Array1_float)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_Input_getCurrentEventTime_R_long 55
typedef jlong (*func_arc_Input_getCurrentEventTime_R_long)(jcontext ctx, jobject self);
#define VTABLE_arc_Input_setCatch_arc_input_KeyCode_boolean 56
typedef void (*func_arc_Input_setCatch_arc_input_KeyCode_boolean)(jcontext ctx, jobject self, jobject param0, jbool param1);
#define VTABLE_arc_Input_isCatch_arc_input_KeyCode_R_boolean 57
typedef jbool (*func_arc_Input_isCatch_arc_input_KeyCode_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_Input_addProcessor_arc_input_InputProcessor 58
typedef void (*func_arc_Input_addProcessor_arc_input_InputProcessor)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_Input_removeProcessor_arc_input_InputProcessor 59
typedef void (*func_arc_Input_removeProcessor_arc_input_InputProcessor)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_Input_getInputProcessors_R_arc_struct_Seq 60
typedef jobject (*func_arc_Input_getInputProcessors_R_arc_struct_Seq)(jcontext ctx, jobject self);
#define VTABLE_arc_Input_getInputMultiplexer_R_arc_input_InputMultiplexer 61
typedef jobject (*func_arc_Input_getInputMultiplexer_R_arc_input_InputMultiplexer)(jcontext ctx, jobject self);
#define VTABLE_arc_Input_getKeyboard_R_arc_input_KeyboardDevice 62
typedef jobject (*func_arc_Input_getKeyboard_R_arc_input_KeyboardDevice)(jcontext ctx, jobject self);
#define VTABLE_arc_Input_isPeripheralAvailable_arc_Input$Peripheral_R_boolean 63
typedef jbool (*func_arc_Input_isPeripheralAvailable_arc_Input$Peripheral_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_Input_getRotation_R_int 64
typedef jint (*func_arc_Input_getRotation_R_int)(jcontext ctx, jobject self);
#define VTABLE_arc_Input_getNativeOrientation_R_arc_Input$Orientation 65
typedef jobject (*func_arc_Input_getNativeOrientation_R_arc_Input$Orientation)(jcontext ctx, jobject self);
#define VTABLE_arc_Input_getKeyName_arc_input_KeyCode_R_java_lang_String 66
typedef jobject (*func_arc_Input_getKeyName_arc_input_KeyCode_R_java_lang_String)(jcontext ctx, jobject self, jobject param0);

void mark_arc_Input(jobject object, jint mark, jint depth);
void clinit_arc_Input(jcontext ctx);
void init_arc_Input(jcontext ctx, jobject self);
jobject M_arc_Input_mouseWorld_float_float_R_arc_math_geom_Vec2(jcontext ctx, jobject self, jfloat param0, jfloat param1);
jobject M_arc_Input_mouseScreen_float_float_R_arc_math_geom_Vec2(jcontext ctx, jobject self, jfloat param0, jfloat param1);
jfloat M_arc_Input_mouseWorldX_R_float(jcontext ctx, jobject self);
jfloat M_arc_Input_mouseWorldY_R_float(jcontext ctx, jobject self);
jobject M_arc_Input_mouseWorld_R_arc_math_geom_Vec2(jcontext ctx, jobject self);
jobject M_arc_Input_mouse_R_arc_math_geom_Vec2(jcontext ctx, jobject self);
void M_arc_Input_setUseKeyboard_boolean(jcontext ctx, jobject self, jbool param0);
jbool M_arc_Input_useKeyboard_R_boolean(jcontext ctx, jobject self);
jint M_arc_Input_getTouches_R_int(jcontext ctx, jobject self);
jfloat M_arc_Input_getPressure_R_float(jcontext ctx, jobject self);
jfloat M_arc_Input_getPressure_int_R_float(jcontext ctx, jobject self, jint param0);
jbool M_arc_Input_shift_R_boolean(jcontext ctx, jobject self);
jbool M_arc_Input_ctrl_R_boolean(jcontext ctx, jobject self);
jbool M_arc_Input_alt_R_boolean(jcontext ctx, jobject self);
jbool M_arc_Input_keyDown_arc_input_KeyCode_R_boolean(jcontext ctx, jobject self, jobject param0);
jbool M_arc_Input_keyTap_arc_input_KeyCode_R_boolean(jcontext ctx, jobject self, jobject param0);
jbool M_arc_Input_keyRelease_arc_input_KeyCode_R_boolean(jcontext ctx, jobject self, jobject param0);
jfloat M_arc_Input_axis_arc_input_KeyCode_R_float(jcontext ctx, jobject self, jobject param0);
jbool M_arc_Input_keyDown_arc_input_KeyBind_R_boolean(jcontext ctx, jobject self, jobject param0);
jbool M_arc_Input_keyTap_arc_input_KeyBind_R_boolean(jcontext ctx, jobject self, jobject param0);
jbool M_arc_Input_keyRelease_arc_input_KeyBind_R_boolean(jcontext ctx, jobject self, jobject param0);
jfloat M_arc_Input_axis_arc_input_KeyBind_R_float(jcontext ctx, jobject self, jobject param0);
jfloat M_arc_Input_axisTap_arc_input_KeyBind_R_float(jcontext ctx, jobject self, jobject param0);
void M_arc_Input_getTextInput_arc_Input$TextInput(jcontext ctx, jobject self, jobject param0);
jbool M_arc_Input_isShowingTextInput_R_boolean(jcontext ctx, jobject self);
void M_arc_Input_setOnscreenKeyboardVisible_boolean(jcontext ctx, jobject self, jbool param0);
void M_arc_Input_vibrate_int(jcontext ctx, jobject self, jint param0);
void M_arc_Input_vibrate_Array1_long_int(jcontext ctx, jobject self, jobject param0, jint param1);
void M_arc_Input_cancelVibrate(jcontext ctx, jobject self);
jobject M_arc_Input_getAccelerometer_R_arc_math_geom_Vec3(jcontext ctx, jobject self);
jobject M_arc_Input_getGyroscope_R_arc_math_geom_Vec3(jcontext ctx, jobject self);
jobject M_arc_Input_getOrientation_R_arc_math_geom_Vec3(jcontext ctx, jobject self);
void M_arc_Input_getRotationMatrix_Array1_float(jcontext ctx, jobject self, jobject param0);
void M_arc_Input_setCatch_arc_input_KeyCode_boolean(jcontext ctx, jobject self, jobject param0, jbool param1);
jbool M_arc_Input_isCatch_arc_input_KeyCode_R_boolean(jcontext ctx, jobject self, jobject param0);
void M_arc_Input_addProcessor_arc_input_InputProcessor(jcontext ctx, jobject self, jobject param0);
void M_arc_Input_removeProcessor_arc_input_InputProcessor(jcontext ctx, jobject self, jobject param0);
jobject M_arc_Input_getInputProcessors_R_arc_struct_Seq(jcontext ctx, jobject self);
jobject M_arc_Input_getInputMultiplexer_R_arc_input_InputMultiplexer(jcontext ctx, jobject self);
jobject M_arc_Input_getKeyboard_R_arc_input_KeyboardDevice(jcontext ctx, jobject self);
jbool M_arc_Input_isPeripheralAvailable_arc_Input$Peripheral_R_boolean(jcontext ctx, jobject self, jobject param0);
jint M_arc_Input_getRotation_R_int(jcontext ctx, jobject self);
jobject M_arc_Input_getNativeOrientation_R_arc_Input$Orientation(jcontext ctx, jobject self);
jobject M_arc_Input_getKeyName_arc_input_KeyCode_R_java_lang_String(jcontext ctx, jobject self, jobject param0);

#ifdef __cplusplus
}
#endif

#endif
