#ifndef HEADER_arc_scene_ui_Button$1
#define HEADER_arc_scene_ui_Button$1

#include "Clearwing.h"
#include "arc/scene/event/ClickListener.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct arc_scene_ui_Button$1 {
	arc_scene_event_ClickListener parent;
	jref F_this$0;
} arc_scene_ui_Button$1;

extern Class class_arc_scene_ui_Button$1;


#define VTABLE_arc_scene_ui_Button$1_hashCode_R_int 0
typedef jint (*func_arc_scene_ui_Button$1_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_arc_scene_ui_Button$1_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_arc_scene_ui_Button$1_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_scene_ui_Button$1_clone_R_java_lang_Object 2
typedef jobject (*func_arc_scene_ui_Button$1_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_arc_scene_ui_Button$1_getClass_R_java_lang_Class 3
typedef jobject (*func_arc_scene_ui_Button$1_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_arc_scene_ui_Button$1_toString_R_java_lang_String 4
typedef jobject (*func_arc_scene_ui_Button$1_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_arc_scene_ui_Button$1_finalize 5
typedef void (*func_arc_scene_ui_Button$1_finalize)(jcontext ctx, jobject self);
#define VTABLE_arc_scene_ui_Button$1_notify 6
typedef void (*func_arc_scene_ui_Button$1_notify)(jcontext ctx, jobject self);
#define VTABLE_arc_scene_ui_Button$1_notifyAll 7
typedef void (*func_arc_scene_ui_Button$1_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_arc_scene_ui_Button$1_wait 8
typedef void (*func_arc_scene_ui_Button$1_wait)(jcontext ctx, jobject self);
#define VTABLE_arc_scene_ui_Button$1_wait_long 9
typedef void (*func_arc_scene_ui_Button$1_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_arc_scene_ui_Button$1_wait_long_int 10
typedef void (*func_arc_scene_ui_Button$1_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);
#define VTABLE_arc_scene_ui_Button$1_handle_arc_scene_event_SceneEvent_R_boolean 11
typedef jbool (*func_arc_scene_ui_Button$1_handle_arc_scene_event_SceneEvent_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_scene_ui_Button$1_touchDown_arc_scene_event_InputEvent_float_float_int_arc_input_KeyCode_R_boolean 12
typedef jbool (*func_arc_scene_ui_Button$1_touchDown_arc_scene_event_InputEvent_float_float_int_arc_input_KeyCode_R_boolean)(jcontext ctx, jobject self, jobject param0, jfloat param1, jfloat param2, jint param3, jobject param4);
#define VTABLE_arc_scene_ui_Button$1_touchUp_arc_scene_event_InputEvent_float_float_int_arc_input_KeyCode 13
typedef void (*func_arc_scene_ui_Button$1_touchUp_arc_scene_event_InputEvent_float_float_int_arc_input_KeyCode)(jcontext ctx, jobject self, jobject param0, jfloat param1, jfloat param2, jint param3, jobject param4);
#define VTABLE_arc_scene_ui_Button$1_touchDragged_arc_scene_event_InputEvent_float_float_int 14
typedef void (*func_arc_scene_ui_Button$1_touchDragged_arc_scene_event_InputEvent_float_float_int)(jcontext ctx, jobject self, jobject param0, jfloat param1, jfloat param2, jint param3);
#define VTABLE_arc_scene_ui_Button$1_mouseMoved_arc_scene_event_InputEvent_float_float_R_boolean 15
typedef jbool (*func_arc_scene_ui_Button$1_mouseMoved_arc_scene_event_InputEvent_float_float_R_boolean)(jcontext ctx, jobject self, jobject param0, jfloat param1, jfloat param2);
#define VTABLE_arc_scene_ui_Button$1_enter_arc_scene_event_InputEvent_float_float_int_arc_scene_Element 16
typedef void (*func_arc_scene_ui_Button$1_enter_arc_scene_event_InputEvent_float_float_int_arc_scene_Element)(jcontext ctx, jobject self, jobject param0, jfloat param1, jfloat param2, jint param3, jobject param4);
#define VTABLE_arc_scene_ui_Button$1_exit_arc_scene_event_InputEvent_float_float_int_arc_scene_Element 17
typedef void (*func_arc_scene_ui_Button$1_exit_arc_scene_event_InputEvent_float_float_int_arc_scene_Element)(jcontext ctx, jobject self, jobject param0, jfloat param1, jfloat param2, jint param3, jobject param4);
#define VTABLE_arc_scene_ui_Button$1_scrolled_arc_scene_event_InputEvent_float_float_float_float_R_boolean 18
typedef jbool (*func_arc_scene_ui_Button$1_scrolled_arc_scene_event_InputEvent_float_float_float_float_R_boolean)(jcontext ctx, jobject self, jobject param0, jfloat param1, jfloat param2, jfloat param3, jfloat param4);
#define VTABLE_arc_scene_ui_Button$1_keyDown_arc_scene_event_InputEvent_arc_input_KeyCode_R_boolean 19
typedef jbool (*func_arc_scene_ui_Button$1_keyDown_arc_scene_event_InputEvent_arc_input_KeyCode_R_boolean)(jcontext ctx, jobject self, jobject param0, jobject param1);
#define VTABLE_arc_scene_ui_Button$1_keyUp_arc_scene_event_InputEvent_arc_input_KeyCode_R_boolean 20
typedef jbool (*func_arc_scene_ui_Button$1_keyUp_arc_scene_event_InputEvent_arc_input_KeyCode_R_boolean)(jcontext ctx, jobject self, jobject param0, jobject param1);
#define VTABLE_arc_scene_ui_Button$1_keyTyped_arc_scene_event_InputEvent_char_R_boolean 21
typedef jbool (*func_arc_scene_ui_Button$1_keyTyped_arc_scene_event_InputEvent_char_R_boolean)(jcontext ctx, jobject self, jobject param0, jchar param1);
#define VTABLE_arc_scene_ui_Button$1_cancel 22
typedef void (*func_arc_scene_ui_Button$1_cancel)(jcontext ctx, jobject self);
#define VTABLE_arc_scene_ui_Button$1_clicked_arc_scene_event_InputEvent_float_float 23
typedef void (*func_arc_scene_ui_Button$1_clicked_arc_scene_event_InputEvent_float_float)(jcontext ctx, jobject self, jobject param0, jfloat param1, jfloat param2);
#define VTABLE_arc_scene_ui_Button$1_isOver_arc_scene_Element_float_float_R_boolean 24
typedef jbool (*func_arc_scene_ui_Button$1_isOver_arc_scene_Element_float_float_R_boolean)(jcontext ctx, jobject self, jobject param0, jfloat param1, jfloat param2);
#define VTABLE_arc_scene_ui_Button$1_inTapSquare_float_float_R_boolean 25
typedef jbool (*func_arc_scene_ui_Button$1_inTapSquare_float_float_R_boolean)(jcontext ctx, jobject self, jfloat param0, jfloat param1);
#define VTABLE_arc_scene_ui_Button$1_inTapSquare_R_boolean 26
typedef jbool (*func_arc_scene_ui_Button$1_inTapSquare_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_arc_scene_ui_Button$1_invalidateTapSquare 27
typedef void (*func_arc_scene_ui_Button$1_invalidateTapSquare)(jcontext ctx, jobject self);
#define VTABLE_arc_scene_ui_Button$1_isPressed_R_boolean 28
typedef jbool (*func_arc_scene_ui_Button$1_isPressed_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_arc_scene_ui_Button$1_isVisualPressed_R_boolean 29
typedef jbool (*func_arc_scene_ui_Button$1_isVisualPressed_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_arc_scene_ui_Button$1_isOver_R_boolean 30
typedef jbool (*func_arc_scene_ui_Button$1_isOver_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_arc_scene_ui_Button$1_getTapSquareSize_R_float 31
typedef jfloat (*func_arc_scene_ui_Button$1_getTapSquareSize_R_float)(jcontext ctx, jobject self);
#define VTABLE_arc_scene_ui_Button$1_setTapSquareSize_float 32
typedef void (*func_arc_scene_ui_Button$1_setTapSquareSize_float)(jcontext ctx, jobject self, jfloat param0);
#define VTABLE_arc_scene_ui_Button$1_setTapCountInterval_float 33
typedef void (*func_arc_scene_ui_Button$1_setTapCountInterval_float)(jcontext ctx, jobject self, jfloat param0);
#define VTABLE_arc_scene_ui_Button$1_getTapCount_R_int 34
typedef jint (*func_arc_scene_ui_Button$1_getTapCount_R_int)(jcontext ctx, jobject self);
#define VTABLE_arc_scene_ui_Button$1_setTapCount_int 35
typedef void (*func_arc_scene_ui_Button$1_setTapCount_int)(jcontext ctx, jobject self, jint param0);
#define VTABLE_arc_scene_ui_Button$1_getTouchDownX_R_float 36
typedef jfloat (*func_arc_scene_ui_Button$1_getTouchDownX_R_float)(jcontext ctx, jobject self);
#define VTABLE_arc_scene_ui_Button$1_getTouchDownY_R_float 37
typedef jfloat (*func_arc_scene_ui_Button$1_getTouchDownY_R_float)(jcontext ctx, jobject self);
#define VTABLE_arc_scene_ui_Button$1_getPressedButton_R_arc_input_KeyCode 38
typedef jobject (*func_arc_scene_ui_Button$1_getPressedButton_R_arc_input_KeyCode)(jcontext ctx, jobject self);
#define VTABLE_arc_scene_ui_Button$1_getPressedPointer_R_int 39
typedef jint (*func_arc_scene_ui_Button$1_getPressedPointer_R_int)(jcontext ctx, jobject self);
#define VTABLE_arc_scene_ui_Button$1_getButton_R_arc_input_KeyCode 40
typedef jobject (*func_arc_scene_ui_Button$1_getButton_R_arc_input_KeyCode)(jcontext ctx, jobject self);
#define VTABLE_arc_scene_ui_Button$1_setButton_arc_input_KeyCode 41
typedef void (*func_arc_scene_ui_Button$1_setButton_arc_input_KeyCode)(jcontext ctx, jobject self, jobject param0);

void mark_arc_scene_ui_Button$1(jobject object, jint mark, jint depth);
void clinit_arc_scene_ui_Button$1(jcontext ctx);
void init_arc_scene_ui_Button$1_arc_scene_ui_Button(jcontext ctx, jobject self, jobject param0);
void M_arc_scene_ui_Button$1_clicked_arc_scene_event_InputEvent_float_float(jcontext ctx, jobject self, jobject param0, jfloat param1, jfloat param2);

#ifdef __cplusplus
}
#endif

#endif
