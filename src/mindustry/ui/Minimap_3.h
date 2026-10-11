#ifndef HEADER_mindustry_ui_Minimap$3
#define HEADER_mindustry_ui_Minimap$3

#include "Clearwing.h"
#include "arc/scene/event/ClickListener.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct mindustry_ui_Minimap$3 {
	arc_scene_event_ClickListener parent;
	jref F_this$0;
} mindustry_ui_Minimap$3;

extern Class class_mindustry_ui_Minimap$3;


#define VTABLE_mindustry_ui_Minimap$3_hashCode_R_int 0
typedef jint (*func_mindustry_ui_Minimap$3_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_mindustry_ui_Minimap$3_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_mindustry_ui_Minimap$3_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_ui_Minimap$3_clone_R_java_lang_Object 2
typedef jobject (*func_mindustry_ui_Minimap$3_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_mindustry_ui_Minimap$3_getClass_R_java_lang_Class 3
typedef jobject (*func_mindustry_ui_Minimap$3_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_mindustry_ui_Minimap$3_toString_R_java_lang_String 4
typedef jobject (*func_mindustry_ui_Minimap$3_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_mindustry_ui_Minimap$3_finalize 5
typedef void (*func_mindustry_ui_Minimap$3_finalize)(jcontext ctx, jobject self);
#define VTABLE_mindustry_ui_Minimap$3_notify 6
typedef void (*func_mindustry_ui_Minimap$3_notify)(jcontext ctx, jobject self);
#define VTABLE_mindustry_ui_Minimap$3_notifyAll 7
typedef void (*func_mindustry_ui_Minimap$3_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_mindustry_ui_Minimap$3_wait 8
typedef void (*func_mindustry_ui_Minimap$3_wait)(jcontext ctx, jobject self);
#define VTABLE_mindustry_ui_Minimap$3_wait_long 9
typedef void (*func_mindustry_ui_Minimap$3_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_mindustry_ui_Minimap$3_wait_long_int 10
typedef void (*func_mindustry_ui_Minimap$3_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);
#define VTABLE_mindustry_ui_Minimap$3_handle_arc_scene_event_SceneEvent_R_boolean 11
typedef jbool (*func_mindustry_ui_Minimap$3_handle_arc_scene_event_SceneEvent_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_ui_Minimap$3_touchDown_arc_scene_event_InputEvent_float_float_int_arc_input_KeyCode_R_boolean 12
typedef jbool (*func_mindustry_ui_Minimap$3_touchDown_arc_scene_event_InputEvent_float_float_int_arc_input_KeyCode_R_boolean)(jcontext ctx, jobject self, jobject param0, jfloat param1, jfloat param2, jint param3, jobject param4);
#define VTABLE_mindustry_ui_Minimap$3_touchUp_arc_scene_event_InputEvent_float_float_int_arc_input_KeyCode 13
typedef void (*func_mindustry_ui_Minimap$3_touchUp_arc_scene_event_InputEvent_float_float_int_arc_input_KeyCode)(jcontext ctx, jobject self, jobject param0, jfloat param1, jfloat param2, jint param3, jobject param4);
#define VTABLE_mindustry_ui_Minimap$3_touchDragged_arc_scene_event_InputEvent_float_float_int 14
typedef void (*func_mindustry_ui_Minimap$3_touchDragged_arc_scene_event_InputEvent_float_float_int)(jcontext ctx, jobject self, jobject param0, jfloat param1, jfloat param2, jint param3);
#define VTABLE_mindustry_ui_Minimap$3_mouseMoved_arc_scene_event_InputEvent_float_float_R_boolean 15
typedef jbool (*func_mindustry_ui_Minimap$3_mouseMoved_arc_scene_event_InputEvent_float_float_R_boolean)(jcontext ctx, jobject self, jobject param0, jfloat param1, jfloat param2);
#define VTABLE_mindustry_ui_Minimap$3_enter_arc_scene_event_InputEvent_float_float_int_arc_scene_Element 16
typedef void (*func_mindustry_ui_Minimap$3_enter_arc_scene_event_InputEvent_float_float_int_arc_scene_Element)(jcontext ctx, jobject self, jobject param0, jfloat param1, jfloat param2, jint param3, jobject param4);
#define VTABLE_mindustry_ui_Minimap$3_exit_arc_scene_event_InputEvent_float_float_int_arc_scene_Element 17
typedef void (*func_mindustry_ui_Minimap$3_exit_arc_scene_event_InputEvent_float_float_int_arc_scene_Element)(jcontext ctx, jobject self, jobject param0, jfloat param1, jfloat param2, jint param3, jobject param4);
#define VTABLE_mindustry_ui_Minimap$3_scrolled_arc_scene_event_InputEvent_float_float_float_float_R_boolean 18
typedef jbool (*func_mindustry_ui_Minimap$3_scrolled_arc_scene_event_InputEvent_float_float_float_float_R_boolean)(jcontext ctx, jobject self, jobject param0, jfloat param1, jfloat param2, jfloat param3, jfloat param4);
#define VTABLE_mindustry_ui_Minimap$3_keyDown_arc_scene_event_InputEvent_arc_input_KeyCode_R_boolean 19
typedef jbool (*func_mindustry_ui_Minimap$3_keyDown_arc_scene_event_InputEvent_arc_input_KeyCode_R_boolean)(jcontext ctx, jobject self, jobject param0, jobject param1);
#define VTABLE_mindustry_ui_Minimap$3_keyUp_arc_scene_event_InputEvent_arc_input_KeyCode_R_boolean 20
typedef jbool (*func_mindustry_ui_Minimap$3_keyUp_arc_scene_event_InputEvent_arc_input_KeyCode_R_boolean)(jcontext ctx, jobject self, jobject param0, jobject param1);
#define VTABLE_mindustry_ui_Minimap$3_keyTyped_arc_scene_event_InputEvent_char_R_boolean 21
typedef jbool (*func_mindustry_ui_Minimap$3_keyTyped_arc_scene_event_InputEvent_char_R_boolean)(jcontext ctx, jobject self, jobject param0, jchar param1);
#define VTABLE_mindustry_ui_Minimap$3_cancel 22
typedef void (*func_mindustry_ui_Minimap$3_cancel)(jcontext ctx, jobject self);
#define VTABLE_mindustry_ui_Minimap$3_clicked_arc_scene_event_InputEvent_float_float 23
typedef void (*func_mindustry_ui_Minimap$3_clicked_arc_scene_event_InputEvent_float_float)(jcontext ctx, jobject self, jobject param0, jfloat param1, jfloat param2);
#define VTABLE_mindustry_ui_Minimap$3_isOver_arc_scene_Element_float_float_R_boolean 24
typedef jbool (*func_mindustry_ui_Minimap$3_isOver_arc_scene_Element_float_float_R_boolean)(jcontext ctx, jobject self, jobject param0, jfloat param1, jfloat param2);
#define VTABLE_mindustry_ui_Minimap$3_inTapSquare_float_float_R_boolean 25
typedef jbool (*func_mindustry_ui_Minimap$3_inTapSquare_float_float_R_boolean)(jcontext ctx, jobject self, jfloat param0, jfloat param1);
#define VTABLE_mindustry_ui_Minimap$3_inTapSquare_R_boolean 26
typedef jbool (*func_mindustry_ui_Minimap$3_inTapSquare_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_mindustry_ui_Minimap$3_invalidateTapSquare 27
typedef void (*func_mindustry_ui_Minimap$3_invalidateTapSquare)(jcontext ctx, jobject self);
#define VTABLE_mindustry_ui_Minimap$3_isPressed_R_boolean 28
typedef jbool (*func_mindustry_ui_Minimap$3_isPressed_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_mindustry_ui_Minimap$3_isVisualPressed_R_boolean 29
typedef jbool (*func_mindustry_ui_Minimap$3_isVisualPressed_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_mindustry_ui_Minimap$3_isOver_R_boolean 30
typedef jbool (*func_mindustry_ui_Minimap$3_isOver_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_mindustry_ui_Minimap$3_getTapSquareSize_R_float 31
typedef jfloat (*func_mindustry_ui_Minimap$3_getTapSquareSize_R_float)(jcontext ctx, jobject self);
#define VTABLE_mindustry_ui_Minimap$3_setTapSquareSize_float 32
typedef void (*func_mindustry_ui_Minimap$3_setTapSquareSize_float)(jcontext ctx, jobject self, jfloat param0);
#define VTABLE_mindustry_ui_Minimap$3_setTapCountInterval_float 33
typedef void (*func_mindustry_ui_Minimap$3_setTapCountInterval_float)(jcontext ctx, jobject self, jfloat param0);
#define VTABLE_mindustry_ui_Minimap$3_getTapCount_R_int 34
typedef jint (*func_mindustry_ui_Minimap$3_getTapCount_R_int)(jcontext ctx, jobject self);
#define VTABLE_mindustry_ui_Minimap$3_setTapCount_int 35
typedef void (*func_mindustry_ui_Minimap$3_setTapCount_int)(jcontext ctx, jobject self, jint param0);
#define VTABLE_mindustry_ui_Minimap$3_getTouchDownX_R_float 36
typedef jfloat (*func_mindustry_ui_Minimap$3_getTouchDownX_R_float)(jcontext ctx, jobject self);
#define VTABLE_mindustry_ui_Minimap$3_getTouchDownY_R_float 37
typedef jfloat (*func_mindustry_ui_Minimap$3_getTouchDownY_R_float)(jcontext ctx, jobject self);
#define VTABLE_mindustry_ui_Minimap$3_getPressedButton_R_arc_input_KeyCode 38
typedef jobject (*func_mindustry_ui_Minimap$3_getPressedButton_R_arc_input_KeyCode)(jcontext ctx, jobject self);
#define VTABLE_mindustry_ui_Minimap$3_getPressedPointer_R_int 39
typedef jint (*func_mindustry_ui_Minimap$3_getPressedPointer_R_int)(jcontext ctx, jobject self);
#define VTABLE_mindustry_ui_Minimap$3_getButton_R_arc_input_KeyCode 40
typedef jobject (*func_mindustry_ui_Minimap$3_getButton_R_arc_input_KeyCode)(jcontext ctx, jobject self);
#define VTABLE_mindustry_ui_Minimap$3_setButton_arc_input_KeyCode 41
typedef void (*func_mindustry_ui_Minimap$3_setButton_arc_input_KeyCode)(jcontext ctx, jobject self, jobject param0);

void mark_mindustry_ui_Minimap$3(jobject object, jint mark, jint depth);
void clinit_mindustry_ui_Minimap$3(jcontext ctx);
void init_mindustry_ui_Minimap$3_mindustry_ui_Minimap(jcontext ctx, jobject self, jobject param0);
void M_mindustry_ui_Minimap$3_touchUp_arc_scene_event_InputEvent_float_float_int_arc_input_KeyCode(jcontext ctx, jobject self, jobject param0, jfloat param1, jfloat param2, jint param3, jobject param4);
void M_mindustry_ui_Minimap$3_touchDragged_arc_scene_event_InputEvent_float_float_int(jcontext ctx, jobject self, jobject param0, jfloat param1, jfloat param2, jint param3);
void M_mindustry_ui_Minimap$3_clicked_arc_scene_event_InputEvent_float_float(jcontext ctx, jobject self, jobject param0, jfloat param1, jfloat param2);

#ifdef __cplusplus
}
#endif

#endif
