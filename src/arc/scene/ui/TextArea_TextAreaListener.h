#ifndef HEADER_arc_scene_ui_TextArea$TextAreaListener
#define HEADER_arc_scene_ui_TextArea$TextAreaListener

#include "Clearwing.h"
#include "arc/scene/ui/TextField_TextFieldClickListener.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct arc_scene_ui_TextArea$TextAreaListener {
	arc_scene_ui_TextField$TextFieldClickListener parent;
	jref F_this$0;
} arc_scene_ui_TextArea$TextAreaListener;

extern Class class_arc_scene_ui_TextArea$TextAreaListener;


#define VTABLE_arc_scene_ui_TextArea$TextAreaListener_hashCode_R_int 0
typedef jint (*func_arc_scene_ui_TextArea$TextAreaListener_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_arc_scene_ui_TextArea$TextAreaListener_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_arc_scene_ui_TextArea$TextAreaListener_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_scene_ui_TextArea$TextAreaListener_clone_R_java_lang_Object 2
typedef jobject (*func_arc_scene_ui_TextArea$TextAreaListener_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_arc_scene_ui_TextArea$TextAreaListener_getClass_R_java_lang_Class 3
typedef jobject (*func_arc_scene_ui_TextArea$TextAreaListener_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_arc_scene_ui_TextArea$TextAreaListener_toString_R_java_lang_String 4
typedef jobject (*func_arc_scene_ui_TextArea$TextAreaListener_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_arc_scene_ui_TextArea$TextAreaListener_finalize 5
typedef void (*func_arc_scene_ui_TextArea$TextAreaListener_finalize)(jcontext ctx, jobject self);
#define VTABLE_arc_scene_ui_TextArea$TextAreaListener_notify 6
typedef void (*func_arc_scene_ui_TextArea$TextAreaListener_notify)(jcontext ctx, jobject self);
#define VTABLE_arc_scene_ui_TextArea$TextAreaListener_notifyAll 7
typedef void (*func_arc_scene_ui_TextArea$TextAreaListener_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_arc_scene_ui_TextArea$TextAreaListener_wait 8
typedef void (*func_arc_scene_ui_TextArea$TextAreaListener_wait)(jcontext ctx, jobject self);
#define VTABLE_arc_scene_ui_TextArea$TextAreaListener_wait_long 9
typedef void (*func_arc_scene_ui_TextArea$TextAreaListener_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_arc_scene_ui_TextArea$TextAreaListener_wait_long_int 10
typedef void (*func_arc_scene_ui_TextArea$TextAreaListener_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);
#define VTABLE_arc_scene_ui_TextArea$TextAreaListener_handle_arc_scene_event_SceneEvent_R_boolean 11
typedef jbool (*func_arc_scene_ui_TextArea$TextAreaListener_handle_arc_scene_event_SceneEvent_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_scene_ui_TextArea$TextAreaListener_touchDown_arc_scene_event_InputEvent_float_float_int_arc_input_KeyCode_R_boolean 12
typedef jbool (*func_arc_scene_ui_TextArea$TextAreaListener_touchDown_arc_scene_event_InputEvent_float_float_int_arc_input_KeyCode_R_boolean)(jcontext ctx, jobject self, jobject param0, jfloat param1, jfloat param2, jint param3, jobject param4);
#define VTABLE_arc_scene_ui_TextArea$TextAreaListener_touchUp_arc_scene_event_InputEvent_float_float_int_arc_input_KeyCode 13
typedef void (*func_arc_scene_ui_TextArea$TextAreaListener_touchUp_arc_scene_event_InputEvent_float_float_int_arc_input_KeyCode)(jcontext ctx, jobject self, jobject param0, jfloat param1, jfloat param2, jint param3, jobject param4);
#define VTABLE_arc_scene_ui_TextArea$TextAreaListener_touchDragged_arc_scene_event_InputEvent_float_float_int 14
typedef void (*func_arc_scene_ui_TextArea$TextAreaListener_touchDragged_arc_scene_event_InputEvent_float_float_int)(jcontext ctx, jobject self, jobject param0, jfloat param1, jfloat param2, jint param3);
#define VTABLE_arc_scene_ui_TextArea$TextAreaListener_mouseMoved_arc_scene_event_InputEvent_float_float_R_boolean 15
typedef jbool (*func_arc_scene_ui_TextArea$TextAreaListener_mouseMoved_arc_scene_event_InputEvent_float_float_R_boolean)(jcontext ctx, jobject self, jobject param0, jfloat param1, jfloat param2);
#define VTABLE_arc_scene_ui_TextArea$TextAreaListener_enter_arc_scene_event_InputEvent_float_float_int_arc_scene_Element 16
typedef void (*func_arc_scene_ui_TextArea$TextAreaListener_enter_arc_scene_event_InputEvent_float_float_int_arc_scene_Element)(jcontext ctx, jobject self, jobject param0, jfloat param1, jfloat param2, jint param3, jobject param4);
#define VTABLE_arc_scene_ui_TextArea$TextAreaListener_exit_arc_scene_event_InputEvent_float_float_int_arc_scene_Element 17
typedef void (*func_arc_scene_ui_TextArea$TextAreaListener_exit_arc_scene_event_InputEvent_float_float_int_arc_scene_Element)(jcontext ctx, jobject self, jobject param0, jfloat param1, jfloat param2, jint param3, jobject param4);
#define VTABLE_arc_scene_ui_TextArea$TextAreaListener_scrolled_arc_scene_event_InputEvent_float_float_float_float_R_boolean 18
typedef jbool (*func_arc_scene_ui_TextArea$TextAreaListener_scrolled_arc_scene_event_InputEvent_float_float_float_float_R_boolean)(jcontext ctx, jobject self, jobject param0, jfloat param1, jfloat param2, jfloat param3, jfloat param4);
#define VTABLE_arc_scene_ui_TextArea$TextAreaListener_keyDown_arc_scene_event_InputEvent_arc_input_KeyCode_R_boolean 19
typedef jbool (*func_arc_scene_ui_TextArea$TextAreaListener_keyDown_arc_scene_event_InputEvent_arc_input_KeyCode_R_boolean)(jcontext ctx, jobject self, jobject param0, jobject param1);
#define VTABLE_arc_scene_ui_TextArea$TextAreaListener_keyUp_arc_scene_event_InputEvent_arc_input_KeyCode_R_boolean 20
typedef jbool (*func_arc_scene_ui_TextArea$TextAreaListener_keyUp_arc_scene_event_InputEvent_arc_input_KeyCode_R_boolean)(jcontext ctx, jobject self, jobject param0, jobject param1);
#define VTABLE_arc_scene_ui_TextArea$TextAreaListener_keyTyped_arc_scene_event_InputEvent_char_R_boolean 21
typedef jbool (*func_arc_scene_ui_TextArea$TextAreaListener_keyTyped_arc_scene_event_InputEvent_char_R_boolean)(jcontext ctx, jobject self, jobject param0, jchar param1);
#define VTABLE_arc_scene_ui_TextArea$TextAreaListener_cancel 22
typedef void (*func_arc_scene_ui_TextArea$TextAreaListener_cancel)(jcontext ctx, jobject self);
#define VTABLE_arc_scene_ui_TextArea$TextAreaListener_clicked_arc_scene_event_InputEvent_float_float 23
typedef void (*func_arc_scene_ui_TextArea$TextAreaListener_clicked_arc_scene_event_InputEvent_float_float)(jcontext ctx, jobject self, jobject param0, jfloat param1, jfloat param2);
#define VTABLE_arc_scene_ui_TextArea$TextAreaListener_isOver_arc_scene_Element_float_float_R_boolean 24
typedef jbool (*func_arc_scene_ui_TextArea$TextAreaListener_isOver_arc_scene_Element_float_float_R_boolean)(jcontext ctx, jobject self, jobject param0, jfloat param1, jfloat param2);
#define VTABLE_arc_scene_ui_TextArea$TextAreaListener_inTapSquare_float_float_R_boolean 25
typedef jbool (*func_arc_scene_ui_TextArea$TextAreaListener_inTapSquare_float_float_R_boolean)(jcontext ctx, jobject self, jfloat param0, jfloat param1);
#define VTABLE_arc_scene_ui_TextArea$TextAreaListener_inTapSquare_R_boolean 26
typedef jbool (*func_arc_scene_ui_TextArea$TextAreaListener_inTapSquare_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_arc_scene_ui_TextArea$TextAreaListener_invalidateTapSquare 27
typedef void (*func_arc_scene_ui_TextArea$TextAreaListener_invalidateTapSquare)(jcontext ctx, jobject self);
#define VTABLE_arc_scene_ui_TextArea$TextAreaListener_isPressed_R_boolean 28
typedef jbool (*func_arc_scene_ui_TextArea$TextAreaListener_isPressed_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_arc_scene_ui_TextArea$TextAreaListener_isVisualPressed_R_boolean 29
typedef jbool (*func_arc_scene_ui_TextArea$TextAreaListener_isVisualPressed_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_arc_scene_ui_TextArea$TextAreaListener_isOver_R_boolean 30
typedef jbool (*func_arc_scene_ui_TextArea$TextAreaListener_isOver_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_arc_scene_ui_TextArea$TextAreaListener_getTapSquareSize_R_float 31
typedef jfloat (*func_arc_scene_ui_TextArea$TextAreaListener_getTapSquareSize_R_float)(jcontext ctx, jobject self);
#define VTABLE_arc_scene_ui_TextArea$TextAreaListener_setTapSquareSize_float 32
typedef void (*func_arc_scene_ui_TextArea$TextAreaListener_setTapSquareSize_float)(jcontext ctx, jobject self, jfloat param0);
#define VTABLE_arc_scene_ui_TextArea$TextAreaListener_setTapCountInterval_float 33
typedef void (*func_arc_scene_ui_TextArea$TextAreaListener_setTapCountInterval_float)(jcontext ctx, jobject self, jfloat param0);
#define VTABLE_arc_scene_ui_TextArea$TextAreaListener_getTapCount_R_int 34
typedef jint (*func_arc_scene_ui_TextArea$TextAreaListener_getTapCount_R_int)(jcontext ctx, jobject self);
#define VTABLE_arc_scene_ui_TextArea$TextAreaListener_setTapCount_int 35
typedef void (*func_arc_scene_ui_TextArea$TextAreaListener_setTapCount_int)(jcontext ctx, jobject self, jint param0);
#define VTABLE_arc_scene_ui_TextArea$TextAreaListener_getTouchDownX_R_float 36
typedef jfloat (*func_arc_scene_ui_TextArea$TextAreaListener_getTouchDownX_R_float)(jcontext ctx, jobject self);
#define VTABLE_arc_scene_ui_TextArea$TextAreaListener_getTouchDownY_R_float 37
typedef jfloat (*func_arc_scene_ui_TextArea$TextAreaListener_getTouchDownY_R_float)(jcontext ctx, jobject self);
#define VTABLE_arc_scene_ui_TextArea$TextAreaListener_getPressedButton_R_arc_input_KeyCode 38
typedef jobject (*func_arc_scene_ui_TextArea$TextAreaListener_getPressedButton_R_arc_input_KeyCode)(jcontext ctx, jobject self);
#define VTABLE_arc_scene_ui_TextArea$TextAreaListener_getPressedPointer_R_int 39
typedef jint (*func_arc_scene_ui_TextArea$TextAreaListener_getPressedPointer_R_int)(jcontext ctx, jobject self);
#define VTABLE_arc_scene_ui_TextArea$TextAreaListener_getButton_R_arc_input_KeyCode 40
typedef jobject (*func_arc_scene_ui_TextArea$TextAreaListener_getButton_R_arc_input_KeyCode)(jcontext ctx, jobject self);
#define VTABLE_arc_scene_ui_TextArea$TextAreaListener_setButton_arc_input_KeyCode 41
typedef void (*func_arc_scene_ui_TextArea$TextAreaListener_setButton_arc_input_KeyCode)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_scene_ui_TextArea$TextAreaListener_setCursorPosition_float_float 42
typedef void (*func_arc_scene_ui_TextArea$TextAreaListener_setCursorPosition_float_float)(jcontext ctx, jobject self, jfloat param0, jfloat param1);
#define VTABLE_arc_scene_ui_TextArea$TextAreaListener_goHome_boolean 43
typedef void (*func_arc_scene_ui_TextArea$TextAreaListener_goHome_boolean)(jcontext ctx, jobject self, jbool param0);
#define VTABLE_arc_scene_ui_TextArea$TextAreaListener_goEnd_boolean 44
typedef void (*func_arc_scene_ui_TextArea$TextAreaListener_goEnd_boolean)(jcontext ctx, jobject self, jbool param0);
#define VTABLE_arc_scene_ui_TextArea$TextAreaListener_scheduleKeyRepeatTask_arc_input_KeyCode 45
typedef void (*func_arc_scene_ui_TextArea$TextAreaListener_scheduleKeyRepeatTask_arc_input_KeyCode)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_scene_ui_TextArea$TextAreaListener_checkFocusTraverse_char_R_boolean 46
typedef jbool (*func_arc_scene_ui_TextArea$TextAreaListener_checkFocusTraverse_char_R_boolean)(jcontext ctx, jobject self, jchar param0);

void mark_arc_scene_ui_TextArea$TextAreaListener(jobject object, jint mark, jint depth);
void clinit_arc_scene_ui_TextArea$TextAreaListener(jcontext ctx);
void init_arc_scene_ui_TextArea$TextAreaListener_arc_scene_ui_TextArea(jcontext ctx, jobject self, jobject param0);
void M_arc_scene_ui_TextArea$TextAreaListener_setCursorPosition_float_float(jcontext ctx, jobject self, jfloat param0, jfloat param1);
jbool M_arc_scene_ui_TextArea$TextAreaListener_checkFocusTraverse_char_R_boolean(jcontext ctx, jobject self, jchar param0);
jbool M_arc_scene_ui_TextArea$TextAreaListener_keyDown_arc_scene_event_InputEvent_arc_input_KeyCode_R_boolean(jcontext ctx, jobject self, jobject param0, jobject param1);
jbool M_arc_scene_ui_TextArea$TextAreaListener_keyTyped_arc_scene_event_InputEvent_char_R_boolean(jcontext ctx, jobject self, jobject param0, jchar param1);
void M_arc_scene_ui_TextArea$TextAreaListener_goHome_boolean(jcontext ctx, jobject self, jbool param0);
void M_arc_scene_ui_TextArea$TextAreaListener_goEnd_boolean(jcontext ctx, jobject self, jbool param0);

#ifdef __cplusplus
}
#endif

#endif
