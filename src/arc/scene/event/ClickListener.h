#ifndef HEADER_arc_scene_event_ClickListener
#define HEADER_arc_scene_event_ClickListener

#include "Clearwing.h"
#include "arc/scene/event/InputListener.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct arc_scene_event_ClickListener {
	arc_scene_event_InputListener parent;
	jfloat F_tapSquareSize;
	jfloat F_touchDownX;
	jfloat F_touchDownY;
	jint F_pressedPointer;
	jref F_pressedButton;
	jref F_button;
	jbool F_pressed;
	jbool F_over;
	jbool F_overAny;
	jbool F_cancelled;
	jlong F_visualPressedTime;
	jlong F_tapCountInterval;
	jint F_tapCount;
	jlong F_lastTapTime;
	jbool F_stop;
} arc_scene_event_ClickListener;

extern Class class_arc_scene_event_ClickListener;

extern jfloat SF_arc_scene_event_ClickListener_visualPressedDuration;
extern jobject SF_arc_scene_event_ClickListener_clicked;

#define VTABLE_arc_scene_event_ClickListener_hashCode_R_int 0
typedef jint (*func_arc_scene_event_ClickListener_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_arc_scene_event_ClickListener_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_arc_scene_event_ClickListener_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_scene_event_ClickListener_clone_R_java_lang_Object 2
typedef jobject (*func_arc_scene_event_ClickListener_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_arc_scene_event_ClickListener_getClass_R_java_lang_Class 3
typedef jobject (*func_arc_scene_event_ClickListener_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_arc_scene_event_ClickListener_toString_R_java_lang_String 4
typedef jobject (*func_arc_scene_event_ClickListener_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_arc_scene_event_ClickListener_finalize 5
typedef void (*func_arc_scene_event_ClickListener_finalize)(jcontext ctx, jobject self);
#define VTABLE_arc_scene_event_ClickListener_notify 6
typedef void (*func_arc_scene_event_ClickListener_notify)(jcontext ctx, jobject self);
#define VTABLE_arc_scene_event_ClickListener_notifyAll 7
typedef void (*func_arc_scene_event_ClickListener_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_arc_scene_event_ClickListener_wait 8
typedef void (*func_arc_scene_event_ClickListener_wait)(jcontext ctx, jobject self);
#define VTABLE_arc_scene_event_ClickListener_wait_long 9
typedef void (*func_arc_scene_event_ClickListener_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_arc_scene_event_ClickListener_wait_long_int 10
typedef void (*func_arc_scene_event_ClickListener_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);
#define VTABLE_arc_scene_event_ClickListener_handle_arc_scene_event_SceneEvent_R_boolean 11
typedef jbool (*func_arc_scene_event_ClickListener_handle_arc_scene_event_SceneEvent_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_scene_event_ClickListener_touchDown_arc_scene_event_InputEvent_float_float_int_arc_input_KeyCode_R_boolean 12
typedef jbool (*func_arc_scene_event_ClickListener_touchDown_arc_scene_event_InputEvent_float_float_int_arc_input_KeyCode_R_boolean)(jcontext ctx, jobject self, jobject param0, jfloat param1, jfloat param2, jint param3, jobject param4);
#define VTABLE_arc_scene_event_ClickListener_touchUp_arc_scene_event_InputEvent_float_float_int_arc_input_KeyCode 13
typedef void (*func_arc_scene_event_ClickListener_touchUp_arc_scene_event_InputEvent_float_float_int_arc_input_KeyCode)(jcontext ctx, jobject self, jobject param0, jfloat param1, jfloat param2, jint param3, jobject param4);
#define VTABLE_arc_scene_event_ClickListener_touchDragged_arc_scene_event_InputEvent_float_float_int 14
typedef void (*func_arc_scene_event_ClickListener_touchDragged_arc_scene_event_InputEvent_float_float_int)(jcontext ctx, jobject self, jobject param0, jfloat param1, jfloat param2, jint param3);
#define VTABLE_arc_scene_event_ClickListener_mouseMoved_arc_scene_event_InputEvent_float_float_R_boolean 15
typedef jbool (*func_arc_scene_event_ClickListener_mouseMoved_arc_scene_event_InputEvent_float_float_R_boolean)(jcontext ctx, jobject self, jobject param0, jfloat param1, jfloat param2);
#define VTABLE_arc_scene_event_ClickListener_enter_arc_scene_event_InputEvent_float_float_int_arc_scene_Element 16
typedef void (*func_arc_scene_event_ClickListener_enter_arc_scene_event_InputEvent_float_float_int_arc_scene_Element)(jcontext ctx, jobject self, jobject param0, jfloat param1, jfloat param2, jint param3, jobject param4);
#define VTABLE_arc_scene_event_ClickListener_exit_arc_scene_event_InputEvent_float_float_int_arc_scene_Element 17
typedef void (*func_arc_scene_event_ClickListener_exit_arc_scene_event_InputEvent_float_float_int_arc_scene_Element)(jcontext ctx, jobject self, jobject param0, jfloat param1, jfloat param2, jint param3, jobject param4);
#define VTABLE_arc_scene_event_ClickListener_scrolled_arc_scene_event_InputEvent_float_float_float_float_R_boolean 18
typedef jbool (*func_arc_scene_event_ClickListener_scrolled_arc_scene_event_InputEvent_float_float_float_float_R_boolean)(jcontext ctx, jobject self, jobject param0, jfloat param1, jfloat param2, jfloat param3, jfloat param4);
#define VTABLE_arc_scene_event_ClickListener_keyDown_arc_scene_event_InputEvent_arc_input_KeyCode_R_boolean 19
typedef jbool (*func_arc_scene_event_ClickListener_keyDown_arc_scene_event_InputEvent_arc_input_KeyCode_R_boolean)(jcontext ctx, jobject self, jobject param0, jobject param1);
#define VTABLE_arc_scene_event_ClickListener_keyUp_arc_scene_event_InputEvent_arc_input_KeyCode_R_boolean 20
typedef jbool (*func_arc_scene_event_ClickListener_keyUp_arc_scene_event_InputEvent_arc_input_KeyCode_R_boolean)(jcontext ctx, jobject self, jobject param0, jobject param1);
#define VTABLE_arc_scene_event_ClickListener_keyTyped_arc_scene_event_InputEvent_char_R_boolean 21
typedef jbool (*func_arc_scene_event_ClickListener_keyTyped_arc_scene_event_InputEvent_char_R_boolean)(jcontext ctx, jobject self, jobject param0, jchar param1);
#define VTABLE_arc_scene_event_ClickListener_cancel 22
typedef void (*func_arc_scene_event_ClickListener_cancel)(jcontext ctx, jobject self);
#define VTABLE_arc_scene_event_ClickListener_clicked_arc_scene_event_InputEvent_float_float 23
typedef void (*func_arc_scene_event_ClickListener_clicked_arc_scene_event_InputEvent_float_float)(jcontext ctx, jobject self, jobject param0, jfloat param1, jfloat param2);
#define VTABLE_arc_scene_event_ClickListener_isOver_arc_scene_Element_float_float_R_boolean 24
typedef jbool (*func_arc_scene_event_ClickListener_isOver_arc_scene_Element_float_float_R_boolean)(jcontext ctx, jobject self, jobject param0, jfloat param1, jfloat param2);
#define VTABLE_arc_scene_event_ClickListener_inTapSquare_float_float_R_boolean 25
typedef jbool (*func_arc_scene_event_ClickListener_inTapSquare_float_float_R_boolean)(jcontext ctx, jobject self, jfloat param0, jfloat param1);
#define VTABLE_arc_scene_event_ClickListener_inTapSquare_R_boolean 26
typedef jbool (*func_arc_scene_event_ClickListener_inTapSquare_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_arc_scene_event_ClickListener_invalidateTapSquare 27
typedef void (*func_arc_scene_event_ClickListener_invalidateTapSquare)(jcontext ctx, jobject self);
#define VTABLE_arc_scene_event_ClickListener_isPressed_R_boolean 28
typedef jbool (*func_arc_scene_event_ClickListener_isPressed_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_arc_scene_event_ClickListener_isVisualPressed_R_boolean 29
typedef jbool (*func_arc_scene_event_ClickListener_isVisualPressed_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_arc_scene_event_ClickListener_isOver_R_boolean 30
typedef jbool (*func_arc_scene_event_ClickListener_isOver_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_arc_scene_event_ClickListener_getTapSquareSize_R_float 31
typedef jfloat (*func_arc_scene_event_ClickListener_getTapSquareSize_R_float)(jcontext ctx, jobject self);
#define VTABLE_arc_scene_event_ClickListener_setTapSquareSize_float 32
typedef void (*func_arc_scene_event_ClickListener_setTapSquareSize_float)(jcontext ctx, jobject self, jfloat param0);
#define VTABLE_arc_scene_event_ClickListener_setTapCountInterval_float 33
typedef void (*func_arc_scene_event_ClickListener_setTapCountInterval_float)(jcontext ctx, jobject self, jfloat param0);
#define VTABLE_arc_scene_event_ClickListener_getTapCount_R_int 34
typedef jint (*func_arc_scene_event_ClickListener_getTapCount_R_int)(jcontext ctx, jobject self);
#define VTABLE_arc_scene_event_ClickListener_setTapCount_int 35
typedef void (*func_arc_scene_event_ClickListener_setTapCount_int)(jcontext ctx, jobject self, jint param0);
#define VTABLE_arc_scene_event_ClickListener_getTouchDownX_R_float 36
typedef jfloat (*func_arc_scene_event_ClickListener_getTouchDownX_R_float)(jcontext ctx, jobject self);
#define VTABLE_arc_scene_event_ClickListener_getTouchDownY_R_float 37
typedef jfloat (*func_arc_scene_event_ClickListener_getTouchDownY_R_float)(jcontext ctx, jobject self);
#define VTABLE_arc_scene_event_ClickListener_getPressedButton_R_arc_input_KeyCode 38
typedef jobject (*func_arc_scene_event_ClickListener_getPressedButton_R_arc_input_KeyCode)(jcontext ctx, jobject self);
#define VTABLE_arc_scene_event_ClickListener_getPressedPointer_R_int 39
typedef jint (*func_arc_scene_event_ClickListener_getPressedPointer_R_int)(jcontext ctx, jobject self);
#define VTABLE_arc_scene_event_ClickListener_getButton_R_arc_input_KeyCode 40
typedef jobject (*func_arc_scene_event_ClickListener_getButton_R_arc_input_KeyCode)(jcontext ctx, jobject self);
#define VTABLE_arc_scene_event_ClickListener_setButton_arc_input_KeyCode 41
typedef void (*func_arc_scene_event_ClickListener_setButton_arc_input_KeyCode)(jcontext ctx, jobject self, jobject param0);

void mark_arc_scene_event_ClickListener(jobject object, jint mark, jint depth);
void clinit_arc_scene_event_ClickListener(jcontext ctx);
void init_arc_scene_event_ClickListener(jcontext ctx, jobject self);
void init_arc_scene_event_ClickListener_arc_input_KeyCode(jcontext ctx, jobject self, jobject param0);
jbool M_arc_scene_event_ClickListener_touchDown_arc_scene_event_InputEvent_float_float_int_arc_input_KeyCode_R_boolean(jcontext ctx, jobject self, jobject param0, jfloat param1, jfloat param2, jint param3, jobject param4);
void M_arc_scene_event_ClickListener_touchDragged_arc_scene_event_InputEvent_float_float_int(jcontext ctx, jobject self, jobject param0, jfloat param1, jfloat param2, jint param3);
void M_arc_scene_event_ClickListener_touchUp_arc_scene_event_InputEvent_float_float_int_arc_input_KeyCode(jcontext ctx, jobject self, jobject param0, jfloat param1, jfloat param2, jint param3, jobject param4);
void M_arc_scene_event_ClickListener_enter_arc_scene_event_InputEvent_float_float_int_arc_scene_Element(jcontext ctx, jobject self, jobject param0, jfloat param1, jfloat param2, jint param3, jobject param4);
void M_arc_scene_event_ClickListener_exit_arc_scene_event_InputEvent_float_float_int_arc_scene_Element(jcontext ctx, jobject self, jobject param0, jfloat param1, jfloat param2, jint param3, jobject param4);
void M_arc_scene_event_ClickListener_cancel(jcontext ctx, jobject self);
void M_arc_scene_event_ClickListener_clicked_arc_scene_event_InputEvent_float_float(jcontext ctx, jobject self, jobject param0, jfloat param1, jfloat param2);
jbool M_arc_scene_event_ClickListener_isOver_arc_scene_Element_float_float_R_boolean(jcontext ctx, jobject self, jobject param0, jfloat param1, jfloat param2);
jbool M_arc_scene_event_ClickListener_inTapSquare_float_float_R_boolean(jcontext ctx, jobject self, jfloat param0, jfloat param1);
jbool M_arc_scene_event_ClickListener_inTapSquare_R_boolean(jcontext ctx, jobject self);
void M_arc_scene_event_ClickListener_invalidateTapSquare(jcontext ctx, jobject self);
jbool M_arc_scene_event_ClickListener_isPressed_R_boolean(jcontext ctx, jobject self);
jbool M_arc_scene_event_ClickListener_isVisualPressed_R_boolean(jcontext ctx, jobject self);
jbool M_arc_scene_event_ClickListener_isOver_R_boolean(jcontext ctx, jobject self);
jfloat M_arc_scene_event_ClickListener_getTapSquareSize_R_float(jcontext ctx, jobject self);
void M_arc_scene_event_ClickListener_setTapSquareSize_float(jcontext ctx, jobject self, jfloat param0);
void M_arc_scene_event_ClickListener_setTapCountInterval_float(jcontext ctx, jobject self, jfloat param0);
jint M_arc_scene_event_ClickListener_getTapCount_R_int(jcontext ctx, jobject self);
void M_arc_scene_event_ClickListener_setTapCount_int(jcontext ctx, jobject self, jint param0);
jfloat M_arc_scene_event_ClickListener_getTouchDownX_R_float(jcontext ctx, jobject self);
jfloat M_arc_scene_event_ClickListener_getTouchDownY_R_float(jcontext ctx, jobject self);
jobject M_arc_scene_event_ClickListener_getPressedButton_R_arc_input_KeyCode(jcontext ctx, jobject self);
jint M_arc_scene_event_ClickListener_getPressedPointer_R_int(jcontext ctx, jobject self);
jobject M_arc_scene_event_ClickListener_getButton_R_arc_input_KeyCode(jcontext ctx, jobject self);
void M_arc_scene_event_ClickListener_setButton_arc_input_KeyCode(jcontext ctx, jobject self, jobject param0);
void SM_arc_scene_event_ClickListener_lambda$static$0(jcontext ctx);

#ifdef __cplusplus
}
#endif

#endif
