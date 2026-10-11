#ifndef HEADER_arc_scene_Scene
#define HEADER_arc_scene_Scene

#include "Clearwing.h"
#include "java/lang/Object.h"
#include "arc/input/InputProcessor.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct arc_scene_Scene {
	java_lang_Object parent;
	jref F_root;
	jfloat F_marginLeft;
	jfloat F_marginRight;
	jfloat F_marginTop;
	jfloat F_marginBottom;
	jref F_styleDefaults;
	jref F_tempCoords;
	jref F_pointerOverActors;
	jref F_pointerTouched;
	jref F_pointerScreenX;
	jref F_pointerScreenY;
	jref F_touchFocuses;
	jref F_viewport;
	jint F_mouseScreenX;
	jint F_mouseScreenY;
	jref F_mouseOverElement;
	jref F_keyboardFocus;
	jref F_scrollFocus;
	jbool F_actionsRequestRendering;
} arc_scene_Scene;

extern Class class_arc_scene_Scene;


#define VTABLE_arc_scene_Scene_hashCode_R_int 0
typedef jint (*func_arc_scene_Scene_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_arc_scene_Scene_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_arc_scene_Scene_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_scene_Scene_clone_R_java_lang_Object 2
typedef jobject (*func_arc_scene_Scene_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_arc_scene_Scene_getClass_R_java_lang_Class 3
typedef jobject (*func_arc_scene_Scene_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_arc_scene_Scene_toString_R_java_lang_String 4
typedef jobject (*func_arc_scene_Scene_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_arc_scene_Scene_finalize 5
typedef void (*func_arc_scene_Scene_finalize)(jcontext ctx, jobject self);
#define VTABLE_arc_scene_Scene_notify 6
typedef void (*func_arc_scene_Scene_notify)(jcontext ctx, jobject self);
#define VTABLE_arc_scene_Scene_notifyAll 7
typedef void (*func_arc_scene_Scene_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_arc_scene_Scene_wait 8
typedef void (*func_arc_scene_Scene_wait)(jcontext ctx, jobject self);
#define VTABLE_arc_scene_Scene_wait_long 9
typedef void (*func_arc_scene_Scene_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_arc_scene_Scene_wait_long_int 10
typedef void (*func_arc_scene_Scene_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);
#define VTABLE_arc_scene_Scene_keyDown_arc_input_KeyCode_R_boolean 11
typedef jbool (*func_arc_scene_Scene_keyDown_arc_input_KeyCode_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_scene_Scene_keyUp_arc_input_KeyCode_R_boolean 12
typedef jbool (*func_arc_scene_Scene_keyUp_arc_input_KeyCode_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_scene_Scene_keyTyped_char_R_boolean 13
typedef jbool (*func_arc_scene_Scene_keyTyped_char_R_boolean)(jcontext ctx, jobject self, jchar param0);
#define VTABLE_arc_scene_Scene_touchDown_int_int_int_arc_input_KeyCode_R_boolean 14
typedef jbool (*func_arc_scene_Scene_touchDown_int_int_int_arc_input_KeyCode_R_boolean)(jcontext ctx, jobject self, jint param0, jint param1, jint param2, jobject param3);
#define VTABLE_arc_scene_Scene_touchUp_int_int_int_arc_input_KeyCode_R_boolean 15
typedef jbool (*func_arc_scene_Scene_touchUp_int_int_int_arc_input_KeyCode_R_boolean)(jcontext ctx, jobject self, jint param0, jint param1, jint param2, jobject param3);
#define VTABLE_arc_scene_Scene_touchDragged_int_int_int_R_boolean 16
typedef jbool (*func_arc_scene_Scene_touchDragged_int_int_int_R_boolean)(jcontext ctx, jobject self, jint param0, jint param1, jint param2);
#define VTABLE_arc_scene_Scene_mouseMoved_int_int_R_boolean 17
typedef jbool (*func_arc_scene_Scene_mouseMoved_int_int_R_boolean)(jcontext ctx, jobject self, jint param0, jint param1);
#define VTABLE_arc_scene_Scene_scrolled_float_float_R_boolean 18
typedef jbool (*func_arc_scene_Scene_scrolled_float_float_R_boolean)(jcontext ctx, jobject self, jfloat param0, jfloat param1);
#define VTABLE_arc_scene_Scene_getStyle_java_lang_Class_R_java_lang_Object 19
typedef jobject (*func_arc_scene_Scene_getStyle_java_lang_Class_R_java_lang_Object)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_scene_Scene_hasStyle_java_lang_Class_R_boolean 20
typedef jbool (*func_arc_scene_Scene_hasStyle_java_lang_Class_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_scene_Scene_addStyle_java_lang_Class_java_lang_Object 21
typedef void (*func_arc_scene_Scene_addStyle_java_lang_Class_java_lang_Object)(jcontext ctx, jobject self, jobject param0, jobject param1);
#define VTABLE_arc_scene_Scene_registerStyles_java_lang_Class 22
typedef void (*func_arc_scene_Scene_registerStyles_java_lang_Class)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_scene_Scene_registerStyles_java_lang_Object 23
typedef void (*func_arc_scene_Scene_registerStyles_java_lang_Object)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_scene_Scene_getHoverElement_R_arc_scene_Element 24
typedef jobject (*func_arc_scene_Scene_getHoverElement_R_arc_scene_Element)(jcontext ctx, jobject self);
#define VTABLE_arc_scene_Scene_hasField_R_boolean 25
typedef jbool (*func_arc_scene_Scene_hasField_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_arc_scene_Scene_hasMouse_R_boolean 26
typedef jbool (*func_arc_scene_Scene_hasMouse_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_arc_scene_Scene_hasMouse_float_float_R_boolean 27
typedef jbool (*func_arc_scene_Scene_hasMouse_float_float_R_boolean)(jcontext ctx, jobject self, jfloat param0, jfloat param1);
#define VTABLE_arc_scene_Scene_hasDialog_R_boolean 28
typedef jbool (*func_arc_scene_Scene_hasDialog_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_arc_scene_Scene_hasKeyboard_R_boolean 29
typedef jbool (*func_arc_scene_Scene_hasKeyboard_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_arc_scene_Scene_hasScroll_R_boolean 30
typedef jbool (*func_arc_scene_Scene_hasScroll_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_arc_scene_Scene_getDialog_R_arc_scene_ui_Dialog 31
typedef jobject (*func_arc_scene_Scene_getDialog_R_arc_scene_ui_Dialog)(jcontext ctx, jobject self);
#define VTABLE_arc_scene_Scene_draw 32
typedef void (*func_arc_scene_Scene_draw)(jcontext ctx, jobject self);
#define VTABLE_arc_scene_Scene_act 33
typedef void (*func_arc_scene_Scene_act)(jcontext ctx, jobject self);
#define VTABLE_arc_scene_Scene_act_float 34
typedef void (*func_arc_scene_Scene_act_float)(jcontext ctx, jobject self, jfloat param0);
#define VTABLE_arc_scene_Scene_find_java_lang_String_R_arc_scene_Element 35
typedef jobject (*func_arc_scene_Scene_find_java_lang_String_R_arc_scene_Element)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_scene_Scene_findVisible_java_lang_String_R_arc_scene_Element 36
typedef jobject (*func_arc_scene_Scene_findVisible_java_lang_String_R_arc_scene_Element)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_scene_Scene_find_arc_func_Boolf_R_arc_scene_Element 37
typedef jobject (*func_arc_scene_Scene_find_arc_func_Boolf_R_arc_scene_Element)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_scene_Scene_table_R_arc_scene_ui_layout_Table 38
typedef jobject (*func_arc_scene_Scene_table_R_arc_scene_ui_layout_Table)(jcontext ctx, jobject self);
#define VTABLE_arc_scene_Scene_table_arc_func_Cons_R_arc_scene_ui_layout_Table 39
typedef jobject (*func_arc_scene_Scene_table_arc_func_Cons_R_arc_scene_ui_layout_Table)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_scene_Scene_table_arc_scene_style_Drawable_arc_func_Cons_R_arc_scene_ui_layout_Table 40
typedef jobject (*func_arc_scene_Scene_table_arc_scene_style_Drawable_arc_func_Cons_R_arc_scene_ui_layout_Table)(jcontext ctx, jobject self, jobject param0, jobject param1);
#define VTABLE_arc_scene_Scene_fireEnterAndExit_arc_scene_Element_int_int_int_R_arc_scene_Element 41
typedef jobject (*func_arc_scene_Scene_fireEnterAndExit_arc_scene_Element_int_int_int_R_arc_scene_Element)(jcontext ctx, jobject self, jobject param0, jint param1, jint param2, jint param3);
#define VTABLE_arc_scene_Scene_addTouchFocus_arc_scene_event_EventListener_arc_scene_Element_arc_scene_Element_int_arc_input_KeyCode 42
typedef void (*func_arc_scene_Scene_addTouchFocus_arc_scene_event_EventListener_arc_scene_Element_arc_scene_Element_int_arc_input_KeyCode)(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2, jint param3, jobject param4);
#define VTABLE_arc_scene_Scene_removeTouchFocus_arc_scene_event_EventListener_arc_scene_Element_arc_scene_Element_int_arc_input_KeyCode 43
typedef void (*func_arc_scene_Scene_removeTouchFocus_arc_scene_event_EventListener_arc_scene_Element_arc_scene_Element_int_arc_input_KeyCode)(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2, jint param3, jobject param4);
#define VTABLE_arc_scene_Scene_cancelTouchFocus_arc_scene_Element 44
typedef void (*func_arc_scene_Scene_cancelTouchFocus_arc_scene_Element)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_scene_Scene_cancelTouchFocus 45
typedef void (*func_arc_scene_Scene_cancelTouchFocus)(jcontext ctx, jobject self);
#define VTABLE_arc_scene_Scene_cancelTouchFocusExcept_arc_scene_event_EventListener_arc_scene_Element 46
typedef void (*func_arc_scene_Scene_cancelTouchFocusExcept_arc_scene_event_EventListener_arc_scene_Element)(jcontext ctx, jobject self, jobject param0, jobject param1);
#define VTABLE_arc_scene_Scene_add_arc_scene_Element 47
typedef void (*func_arc_scene_Scene_add_arc_scene_Element)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_scene_Scene_addAction_arc_scene_Action 48
typedef void (*func_arc_scene_Scene_addAction_arc_scene_Action)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_scene_Scene_getElements_R_arc_struct_Seq 49
typedef jobject (*func_arc_scene_Scene_getElements_R_arc_struct_Seq)(jcontext ctx, jobject self);
#define VTABLE_arc_scene_Scene_addListener_arc_scene_event_EventListener_R_boolean 50
typedef jbool (*func_arc_scene_Scene_addListener_arc_scene_event_EventListener_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_scene_Scene_removeListener_arc_scene_event_EventListener_R_boolean 51
typedef jbool (*func_arc_scene_Scene_removeListener_arc_scene_event_EventListener_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_scene_Scene_addCaptureListener_arc_scene_event_EventListener_R_boolean 52
typedef jbool (*func_arc_scene_Scene_addCaptureListener_arc_scene_event_EventListener_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_scene_Scene_removeCaptureListener_arc_scene_event_EventListener_R_boolean 53
typedef jbool (*func_arc_scene_Scene_removeCaptureListener_arc_scene_event_EventListener_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_scene_Scene_clear 54
typedef void (*func_arc_scene_Scene_clear)(jcontext ctx, jobject self);
#define VTABLE_arc_scene_Scene_unfocusAll 55
typedef void (*func_arc_scene_Scene_unfocusAll)(jcontext ctx, jobject self);
#define VTABLE_arc_scene_Scene_unfocus_arc_scene_Element 56
typedef void (*func_arc_scene_Scene_unfocus_arc_scene_Element)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_scene_Scene_setKeyboardFocus_arc_scene_Element_R_boolean 57
typedef jbool (*func_arc_scene_Scene_setKeyboardFocus_arc_scene_Element_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_scene_Scene_getKeyboardFocus_R_arc_scene_Element 58
typedef jobject (*func_arc_scene_Scene_getKeyboardFocus_R_arc_scene_Element)(jcontext ctx, jobject self);
#define VTABLE_arc_scene_Scene_setScrollFocus_arc_scene_Element_R_boolean 59
typedef jbool (*func_arc_scene_Scene_setScrollFocus_arc_scene_Element_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_scene_Scene_getScrollFocus_R_arc_scene_Element 60
typedef jobject (*func_arc_scene_Scene_getScrollFocus_R_arc_scene_Element)(jcontext ctx, jobject self);
#define VTABLE_arc_scene_Scene_getViewport_R_arc_util_viewport_Viewport 61
typedef jobject (*func_arc_scene_Scene_getViewport_R_arc_util_viewport_Viewport)(jcontext ctx, jobject self);
#define VTABLE_arc_scene_Scene_setViewport_arc_util_viewport_Viewport 62
typedef void (*func_arc_scene_Scene_setViewport_arc_util_viewport_Viewport)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_scene_Scene_getWidth_R_float 63
typedef jfloat (*func_arc_scene_Scene_getWidth_R_float)(jcontext ctx, jobject self);
#define VTABLE_arc_scene_Scene_getHeight_R_float 64
typedef jfloat (*func_arc_scene_Scene_getHeight_R_float)(jcontext ctx, jobject self);
#define VTABLE_arc_scene_Scene_getCamera_R_arc_graphics_Camera 65
typedef jobject (*func_arc_scene_Scene_getCamera_R_arc_graphics_Camera)(jcontext ctx, jobject self);
#define VTABLE_arc_scene_Scene_hit_float_float_boolean_R_arc_scene_Element 66
typedef jobject (*func_arc_scene_Scene_hit_float_float_boolean_R_arc_scene_Element)(jcontext ctx, jobject self, jfloat param0, jfloat param1, jbool param2);
#define VTABLE_arc_scene_Scene_screenToStageCoordinates_arc_math_geom_Vec2_R_arc_math_geom_Vec2 67
typedef jobject (*func_arc_scene_Scene_screenToStageCoordinates_arc_math_geom_Vec2_R_arc_math_geom_Vec2)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_scene_Scene_stageToScreenCoordinates_arc_math_geom_Vec2_R_arc_math_geom_Vec2 68
typedef jobject (*func_arc_scene_Scene_stageToScreenCoordinates_arc_math_geom_Vec2_R_arc_math_geom_Vec2)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_scene_Scene_toScreenCoordinates_arc_math_geom_Vec2_arc_math_Mat_R_arc_math_geom_Vec2 69
typedef jobject (*func_arc_scene_Scene_toScreenCoordinates_arc_math_geom_Vec2_arc_math_Mat_R_arc_math_geom_Vec2)(jcontext ctx, jobject self, jobject param0, jobject param1);
#define VTABLE_arc_scene_Scene_calculateScissors_arc_math_geom_Rect_arc_math_geom_Rect 70
typedef void (*func_arc_scene_Scene_calculateScissors_arc_math_geom_Rect_arc_math_geom_Rect)(jcontext ctx, jobject self, jobject param0, jobject param1);
#define VTABLE_arc_scene_Scene_getActionsRequestRendering_R_boolean 71
typedef jbool (*func_arc_scene_Scene_getActionsRequestRendering_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_arc_scene_Scene_setActionsRequestRendering_boolean 72
typedef void (*func_arc_scene_Scene_setActionsRequestRendering_boolean)(jcontext ctx, jobject self, jbool param0);
#define VTABLE_arc_scene_Scene_isInsideViewport_int_int_R_boolean 73
typedef jbool (*func_arc_scene_Scene_isInsideViewport_int_int_R_boolean)(jcontext ctx, jobject self, jint param0, jint param1);
#define VTABLE_arc_scene_Scene_resize_int_int 74
typedef void (*func_arc_scene_Scene_resize_int_int)(jcontext ctx, jobject self, jint param0, jint param1);
#define VTABLE_arc_scene_Scene_lambda$registerStyles$3_java_lang_Object_java_lang_reflect_Field 75
typedef void (*func_arc_scene_Scene_lambda$registerStyles$3_java_lang_Object_java_lang_reflect_Field)(jcontext ctx, jobject self, jobject param0, jobject param1);
#define VTABLE_arc_scene_Scene_lambda$registerStyles$1_java_lang_reflect_Field 76
typedef void (*func_arc_scene_Scene_lambda$registerStyles$1_java_lang_reflect_Field)(jcontext ctx, jobject self, jobject param0);

void mark_arc_scene_Scene(jobject object, jint mark, jint depth);
void clinit_arc_scene_Scene(jcontext ctx);
void init_arc_scene_Scene(jcontext ctx, jobject self);
void init_arc_scene_Scene_arc_util_viewport_Viewport(jcontext ctx, jobject self, jobject param0);
jobject M_arc_scene_Scene_getStyle_java_lang_Class_R_java_lang_Object(jcontext ctx, jobject self, jobject param0);
jbool M_arc_scene_Scene_hasStyle_java_lang_Class_R_boolean(jcontext ctx, jobject self, jobject param0);
void M_arc_scene_Scene_addStyle_java_lang_Class_java_lang_Object(jcontext ctx, jobject self, jobject param0, jobject param1);
void M_arc_scene_Scene_registerStyles_java_lang_Class(jcontext ctx, jobject self, jobject param0);
void M_arc_scene_Scene_registerStyles_java_lang_Object(jcontext ctx, jobject self, jobject param0);
jobject M_arc_scene_Scene_getHoverElement_R_arc_scene_Element(jcontext ctx, jobject self);
jbool M_arc_scene_Scene_hasField_R_boolean(jcontext ctx, jobject self);
jbool M_arc_scene_Scene_hasMouse_R_boolean(jcontext ctx, jobject self);
jbool M_arc_scene_Scene_hasMouse_float_float_R_boolean(jcontext ctx, jobject self, jfloat param0, jfloat param1);
jbool M_arc_scene_Scene_hasDialog_R_boolean(jcontext ctx, jobject self);
jbool M_arc_scene_Scene_hasKeyboard_R_boolean(jcontext ctx, jobject self);
jbool M_arc_scene_Scene_hasScroll_R_boolean(jcontext ctx, jobject self);
jobject M_arc_scene_Scene_getDialog_R_arc_scene_ui_Dialog(jcontext ctx, jobject self);
void M_arc_scene_Scene_draw(jcontext ctx, jobject self);
void M_arc_scene_Scene_act(jcontext ctx, jobject self);
void M_arc_scene_Scene_act_float(jcontext ctx, jobject self, jfloat param0);
jobject M_arc_scene_Scene_find_java_lang_String_R_arc_scene_Element(jcontext ctx, jobject self, jobject param0);
jobject M_arc_scene_Scene_findVisible_java_lang_String_R_arc_scene_Element(jcontext ctx, jobject self, jobject param0);
jobject M_arc_scene_Scene_find_arc_func_Boolf_R_arc_scene_Element(jcontext ctx, jobject self, jobject param0);
jobject M_arc_scene_Scene_table_R_arc_scene_ui_layout_Table(jcontext ctx, jobject self);
jobject M_arc_scene_Scene_table_arc_func_Cons_R_arc_scene_ui_layout_Table(jcontext ctx, jobject self, jobject param0);
jobject M_arc_scene_Scene_table_arc_scene_style_Drawable_arc_func_Cons_R_arc_scene_ui_layout_Table(jcontext ctx, jobject self, jobject param0, jobject param1);
jobject M_arc_scene_Scene_fireEnterAndExit_arc_scene_Element_int_int_int_R_arc_scene_Element(jcontext ctx, jobject self, jobject param0, jint param1, jint param2, jint param3);
jbool M_arc_scene_Scene_touchDown_int_int_int_arc_input_KeyCode_R_boolean(jcontext ctx, jobject self, jint param0, jint param1, jint param2, jobject param3);
jbool M_arc_scene_Scene_touchDragged_int_int_int_R_boolean(jcontext ctx, jobject self, jint param0, jint param1, jint param2);
jbool M_arc_scene_Scene_touchUp_int_int_int_arc_input_KeyCode_R_boolean(jcontext ctx, jobject self, jint param0, jint param1, jint param2, jobject param3);
jbool M_arc_scene_Scene_mouseMoved_int_int_R_boolean(jcontext ctx, jobject self, jint param0, jint param1);
jbool M_arc_scene_Scene_scrolled_float_float_R_boolean(jcontext ctx, jobject self, jfloat param0, jfloat param1);
jbool M_arc_scene_Scene_keyDown_arc_input_KeyCode_R_boolean(jcontext ctx, jobject self, jobject param0);
jbool M_arc_scene_Scene_keyUp_arc_input_KeyCode_R_boolean(jcontext ctx, jobject self, jobject param0);
jbool M_arc_scene_Scene_keyTyped_char_R_boolean(jcontext ctx, jobject self, jchar param0);
void M_arc_scene_Scene_addTouchFocus_arc_scene_event_EventListener_arc_scene_Element_arc_scene_Element_int_arc_input_KeyCode(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2, jint param3, jobject param4);
void M_arc_scene_Scene_removeTouchFocus_arc_scene_event_EventListener_arc_scene_Element_arc_scene_Element_int_arc_input_KeyCode(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2, jint param3, jobject param4);
void M_arc_scene_Scene_cancelTouchFocus_arc_scene_Element(jcontext ctx, jobject self, jobject param0);
void M_arc_scene_Scene_cancelTouchFocus(jcontext ctx, jobject self);
void M_arc_scene_Scene_cancelTouchFocusExcept_arc_scene_event_EventListener_arc_scene_Element(jcontext ctx, jobject self, jobject param0, jobject param1);
void M_arc_scene_Scene_add_arc_scene_Element(jcontext ctx, jobject self, jobject param0);
void M_arc_scene_Scene_addAction_arc_scene_Action(jcontext ctx, jobject self, jobject param0);
jobject M_arc_scene_Scene_getElements_R_arc_struct_Seq(jcontext ctx, jobject self);
jbool M_arc_scene_Scene_addListener_arc_scene_event_EventListener_R_boolean(jcontext ctx, jobject self, jobject param0);
jbool M_arc_scene_Scene_removeListener_arc_scene_event_EventListener_R_boolean(jcontext ctx, jobject self, jobject param0);
jbool M_arc_scene_Scene_addCaptureListener_arc_scene_event_EventListener_R_boolean(jcontext ctx, jobject self, jobject param0);
jbool M_arc_scene_Scene_removeCaptureListener_arc_scene_event_EventListener_R_boolean(jcontext ctx, jobject self, jobject param0);
void M_arc_scene_Scene_clear(jcontext ctx, jobject self);
void M_arc_scene_Scene_unfocusAll(jcontext ctx, jobject self);
void M_arc_scene_Scene_unfocus_arc_scene_Element(jcontext ctx, jobject self, jobject param0);
jbool M_arc_scene_Scene_setKeyboardFocus_arc_scene_Element_R_boolean(jcontext ctx, jobject self, jobject param0);
jobject M_arc_scene_Scene_getKeyboardFocus_R_arc_scene_Element(jcontext ctx, jobject self);
jbool M_arc_scene_Scene_setScrollFocus_arc_scene_Element_R_boolean(jcontext ctx, jobject self, jobject param0);
jobject M_arc_scene_Scene_getScrollFocus_R_arc_scene_Element(jcontext ctx, jobject self);
jobject M_arc_scene_Scene_getViewport_R_arc_util_viewport_Viewport(jcontext ctx, jobject self);
void M_arc_scene_Scene_setViewport_arc_util_viewport_Viewport(jcontext ctx, jobject self, jobject param0);
jfloat M_arc_scene_Scene_getWidth_R_float(jcontext ctx, jobject self);
jfloat M_arc_scene_Scene_getHeight_R_float(jcontext ctx, jobject self);
jobject M_arc_scene_Scene_getCamera_R_arc_graphics_Camera(jcontext ctx, jobject self);
jobject M_arc_scene_Scene_hit_float_float_boolean_R_arc_scene_Element(jcontext ctx, jobject self, jfloat param0, jfloat param1, jbool param2);
jobject M_arc_scene_Scene_screenToStageCoordinates_arc_math_geom_Vec2_R_arc_math_geom_Vec2(jcontext ctx, jobject self, jobject param0);
jobject M_arc_scene_Scene_stageToScreenCoordinates_arc_math_geom_Vec2_R_arc_math_geom_Vec2(jcontext ctx, jobject self, jobject param0);
jobject M_arc_scene_Scene_toScreenCoordinates_arc_math_geom_Vec2_arc_math_Mat_R_arc_math_geom_Vec2(jcontext ctx, jobject self, jobject param0, jobject param1);
void M_arc_scene_Scene_calculateScissors_arc_math_geom_Rect_arc_math_geom_Rect(jcontext ctx, jobject self, jobject param0, jobject param1);
jbool M_arc_scene_Scene_getActionsRequestRendering_R_boolean(jcontext ctx, jobject self);
void M_arc_scene_Scene_setActionsRequestRendering_boolean(jcontext ctx, jobject self, jbool param0);
jbool M_arc_scene_Scene_isInsideViewport_int_int_R_boolean(jcontext ctx, jobject self, jint param0, jint param1);
void M_arc_scene_Scene_resize_int_int(jcontext ctx, jobject self, jint param0, jint param1);
jobject SM_arc_scene_Scene_lambda$addTouchFocus$0_R_arc_scene_Scene$TouchFocus(jcontext ctx);
jbool SM_arc_scene_Scene_lambda$hasDialog$0_arc_scene_Element_R_boolean(jcontext ctx, jobject param0);
void M_arc_scene_Scene_lambda$registerStyles$3_java_lang_Object_java_lang_reflect_Field(jcontext ctx, jobject self, jobject param0, jobject param1);
jbool SM_arc_scene_Scene_lambda$registerStyles$2_java_lang_reflect_Field_R_boolean(jcontext ctx, jobject param0);
void M_arc_scene_Scene_lambda$registerStyles$1_java_lang_reflect_Field(jcontext ctx, jobject self, jobject param0);
jbool SM_arc_scene_Scene_lambda$registerStyles$0_java_lang_reflect_Field_R_boolean(jcontext ctx, jobject param0);
jobject SM_arc_scene_Scene_lambda$getStyle$0_java_lang_Class_R_java_lang_RuntimeException(jcontext ctx, jobject param0);

#ifdef __cplusplus
}
#endif

#endif
