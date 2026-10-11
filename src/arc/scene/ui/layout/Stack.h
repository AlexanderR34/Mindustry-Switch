#ifndef HEADER_arc_scene_ui_layout_Stack
#define HEADER_arc_scene_ui_layout_Stack

#include "Clearwing.h"
#include "arc/scene/ui/layout/WidgetGroup.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct arc_scene_ui_layout_Stack {
	arc_scene_ui_layout_WidgetGroup parent;
	jfloat F_prefWidth;
	jfloat F_prefHeight;
	jfloat F_minWidth;
	jfloat F_minHeight;
	jbool F_sizeInvalid;
} arc_scene_ui_layout_Stack;

extern Class class_arc_scene_ui_layout_Stack;


#define VTABLE_arc_scene_ui_layout_Stack_hashCode_R_int 0
typedef jint (*func_arc_scene_ui_layout_Stack_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_arc_scene_ui_layout_Stack_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_arc_scene_ui_layout_Stack_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_scene_ui_layout_Stack_clone_R_java_lang_Object 2
typedef jobject (*func_arc_scene_ui_layout_Stack_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_arc_scene_ui_layout_Stack_getClass_R_java_lang_Class 3
typedef jobject (*func_arc_scene_ui_layout_Stack_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_arc_scene_ui_layout_Stack_toString_R_java_lang_String 4
typedef jobject (*func_arc_scene_ui_layout_Stack_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_arc_scene_ui_layout_Stack_finalize 5
typedef void (*func_arc_scene_ui_layout_Stack_finalize)(jcontext ctx, jobject self);
#define VTABLE_arc_scene_ui_layout_Stack_notify 6
typedef void (*func_arc_scene_ui_layout_Stack_notify)(jcontext ctx, jobject self);
#define VTABLE_arc_scene_ui_layout_Stack_notifyAll 7
typedef void (*func_arc_scene_ui_layout_Stack_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_arc_scene_ui_layout_Stack_wait 8
typedef void (*func_arc_scene_ui_layout_Stack_wait)(jcontext ctx, jobject self);
#define VTABLE_arc_scene_ui_layout_Stack_wait_long 9
typedef void (*func_arc_scene_ui_layout_Stack_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_arc_scene_ui_layout_Stack_wait_long_int 10
typedef void (*func_arc_scene_ui_layout_Stack_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);
#define VTABLE_arc_scene_ui_layout_Stack_draw 11
typedef void (*func_arc_scene_ui_layout_Stack_draw)(jcontext ctx, jobject self);
#define VTABLE_arc_scene_ui_layout_Stack_act_float 12
typedef void (*func_arc_scene_ui_layout_Stack_act_float)(jcontext ctx, jobject self, jfloat param0);
#define VTABLE_arc_scene_ui_layout_Stack_updateVisibility 13
typedef void (*func_arc_scene_ui_layout_Stack_updateVisibility)(jcontext ctx, jobject self);
#define VTABLE_arc_scene_ui_layout_Stack_hasMouse_R_boolean 14
typedef jbool (*func_arc_scene_ui_layout_Stack_hasMouse_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_arc_scene_ui_layout_Stack_hasKeyboard_R_boolean 15
typedef jbool (*func_arc_scene_ui_layout_Stack_hasKeyboard_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_arc_scene_ui_layout_Stack_hasScroll_R_boolean 16
typedef jbool (*func_arc_scene_ui_layout_Stack_hasScroll_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_arc_scene_ui_layout_Stack_requestKeyboard 17
typedef void (*func_arc_scene_ui_layout_Stack_requestKeyboard)(jcontext ctx, jobject self);
#define VTABLE_arc_scene_ui_layout_Stack_requestScroll 18
typedef void (*func_arc_scene_ui_layout_Stack_requestScroll)(jcontext ctx, jobject self);
#define VTABLE_arc_scene_ui_layout_Stack_fire_arc_scene_event_SceneEvent_R_boolean 19
typedef jbool (*func_arc_scene_ui_layout_Stack_fire_arc_scene_event_SceneEvent_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_scene_ui_layout_Stack_notify_arc_scene_event_SceneEvent_boolean_R_boolean 20
typedef jbool (*func_arc_scene_ui_layout_Stack_notify_arc_scene_event_SceneEvent_boolean_R_boolean)(jcontext ctx, jobject self, jobject param0, jbool param1);
#define VTABLE_arc_scene_ui_layout_Stack_hit_float_float_boolean_R_arc_scene_Element 21
typedef jobject (*func_arc_scene_ui_layout_Stack_hit_float_float_boolean_R_arc_scene_Element)(jcontext ctx, jobject self, jfloat param0, jfloat param1, jbool param2);
#define VTABLE_arc_scene_ui_layout_Stack_remove_R_boolean 22
typedef jbool (*func_arc_scene_ui_layout_Stack_remove_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_arc_scene_ui_layout_Stack_dragged_arc_func_Floatc2 23
typedef void (*func_arc_scene_ui_layout_Stack_dragged_arc_func_Floatc2)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_scene_ui_layout_Stack_scrolled_arc_func_Floatc 24
typedef void (*func_arc_scene_ui_layout_Stack_scrolled_arc_func_Floatc)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_scene_ui_layout_Stack_addListener_arc_scene_event_EventListener_R_boolean 25
typedef jbool (*func_arc_scene_ui_layout_Stack_addListener_arc_scene_event_EventListener_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_scene_ui_layout_Stack_removeListener_arc_scene_event_EventListener_R_boolean 26
typedef jbool (*func_arc_scene_ui_layout_Stack_removeListener_arc_scene_event_EventListener_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_scene_ui_layout_Stack_getListeners_R_arc_struct_Seq 27
typedef jobject (*func_arc_scene_ui_layout_Stack_getListeners_R_arc_struct_Seq)(jcontext ctx, jobject self);
#define VTABLE_arc_scene_ui_layout_Stack_addCaptureListener_arc_scene_event_EventListener_R_boolean 28
typedef jbool (*func_arc_scene_ui_layout_Stack_addCaptureListener_arc_scene_event_EventListener_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_scene_ui_layout_Stack_removeCaptureListener_arc_scene_event_EventListener_R_boolean 29
typedef jbool (*func_arc_scene_ui_layout_Stack_removeCaptureListener_arc_scene_event_EventListener_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_scene_ui_layout_Stack_getCaptureListeners_R_arc_struct_Seq 30
typedef jobject (*func_arc_scene_ui_layout_Stack_getCaptureListeners_R_arc_struct_Seq)(jcontext ctx, jobject self);
#define VTABLE_arc_scene_ui_layout_Stack_addAction_arc_scene_Action 31
typedef void (*func_arc_scene_ui_layout_Stack_addAction_arc_scene_Action)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_scene_ui_layout_Stack_actions_Array1_arc_scene_Action 32
typedef void (*func_arc_scene_ui_layout_Stack_actions_Array1_arc_scene_Action)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_scene_ui_layout_Stack_removeAction_arc_scene_Action 33
typedef void (*func_arc_scene_ui_layout_Stack_removeAction_arc_scene_Action)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_scene_ui_layout_Stack_getActions_R_arc_struct_Seq 34
typedef jobject (*func_arc_scene_ui_layout_Stack_getActions_R_arc_struct_Seq)(jcontext ctx, jobject self);
#define VTABLE_arc_scene_ui_layout_Stack_hasActions_R_boolean 35
typedef jbool (*func_arc_scene_ui_layout_Stack_hasActions_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_arc_scene_ui_layout_Stack_clearActions 36
typedef void (*func_arc_scene_ui_layout_Stack_clearActions)(jcontext ctx, jobject self);
#define VTABLE_arc_scene_ui_layout_Stack_clearListeners 37
typedef void (*func_arc_scene_ui_layout_Stack_clearListeners)(jcontext ctx, jobject self);
#define VTABLE_arc_scene_ui_layout_Stack_clear 38
typedef void (*func_arc_scene_ui_layout_Stack_clear)(jcontext ctx, jobject self);
#define VTABLE_arc_scene_ui_layout_Stack_getScene_R_arc_scene_Scene 39
typedef jobject (*func_arc_scene_ui_layout_Stack_getScene_R_arc_scene_Scene)(jcontext ctx, jobject self);
#define VTABLE_arc_scene_ui_layout_Stack_setScene_arc_scene_Scene 40
typedef void (*func_arc_scene_ui_layout_Stack_setScene_arc_scene_Scene)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_scene_ui_layout_Stack_isDescendantOf_arc_func_Boolf_R_boolean 41
typedef jbool (*func_arc_scene_ui_layout_Stack_isDescendantOf_arc_func_Boolf_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_scene_ui_layout_Stack_isDescendantOf_arc_scene_Element_R_boolean 42
typedef jbool (*func_arc_scene_ui_layout_Stack_isDescendantOf_arc_scene_Element_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_scene_ui_layout_Stack_isAscendantOf_arc_scene_Element_R_boolean 43
typedef jbool (*func_arc_scene_ui_layout_Stack_isAscendantOf_arc_scene_Element_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_scene_ui_layout_Stack_hasParent_R_boolean 44
typedef jbool (*func_arc_scene_ui_layout_Stack_hasParent_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_arc_scene_ui_layout_Stack_isTouchable_R_boolean 45
typedef jbool (*func_arc_scene_ui_layout_Stack_isTouchable_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_arc_scene_ui_layout_Stack_getX_int_R_float 46
typedef jfloat (*func_arc_scene_ui_layout_Stack_getX_int_R_float)(jcontext ctx, jobject self, jint param0);
#define VTABLE_arc_scene_ui_layout_Stack_getY_int_R_float 47
typedef jfloat (*func_arc_scene_ui_layout_Stack_getY_int_R_float)(jcontext ctx, jobject self, jint param0);
#define VTABLE_arc_scene_ui_layout_Stack_setPosition_float_float 48
typedef void (*func_arc_scene_ui_layout_Stack_setPosition_float_float)(jcontext ctx, jobject self, jfloat param0, jfloat param1);
#define VTABLE_arc_scene_ui_layout_Stack_setPosition_float_float_int 49
typedef void (*func_arc_scene_ui_layout_Stack_setPosition_float_float_int)(jcontext ctx, jobject self, jfloat param0, jfloat param1, jint param2);
#define VTABLE_arc_scene_ui_layout_Stack_moveBy_float_float 50
typedef void (*func_arc_scene_ui_layout_Stack_moveBy_float_float)(jcontext ctx, jobject self, jfloat param0, jfloat param1);
#define VTABLE_arc_scene_ui_layout_Stack_getWidth_R_float 51
typedef jfloat (*func_arc_scene_ui_layout_Stack_getWidth_R_float)(jcontext ctx, jobject self);
#define VTABLE_arc_scene_ui_layout_Stack_setWidth_float 52
typedef void (*func_arc_scene_ui_layout_Stack_setWidth_float)(jcontext ctx, jobject self, jfloat param0);
#define VTABLE_arc_scene_ui_layout_Stack_getHeight_R_float 53
typedef jfloat (*func_arc_scene_ui_layout_Stack_getHeight_R_float)(jcontext ctx, jobject self);
#define VTABLE_arc_scene_ui_layout_Stack_setHeight_float 54
typedef void (*func_arc_scene_ui_layout_Stack_setHeight_float)(jcontext ctx, jobject self, jfloat param0);
#define VTABLE_arc_scene_ui_layout_Stack_getTop_R_float 55
typedef jfloat (*func_arc_scene_ui_layout_Stack_getTop_R_float)(jcontext ctx, jobject self);
#define VTABLE_arc_scene_ui_layout_Stack_getRight_R_float 56
typedef jfloat (*func_arc_scene_ui_layout_Stack_getRight_R_float)(jcontext ctx, jobject self);
#define VTABLE_arc_scene_ui_layout_Stack_sizeChanged 57
typedef void (*func_arc_scene_ui_layout_Stack_sizeChanged)(jcontext ctx, jobject self);
#define VTABLE_arc_scene_ui_layout_Stack_rotationChanged 58
typedef void (*func_arc_scene_ui_layout_Stack_rotationChanged)(jcontext ctx, jobject self);
#define VTABLE_arc_scene_ui_layout_Stack_setSize_float 59
typedef void (*func_arc_scene_ui_layout_Stack_setSize_float)(jcontext ctx, jobject self, jfloat param0);
#define VTABLE_arc_scene_ui_layout_Stack_setSize_float_float 60
typedef void (*func_arc_scene_ui_layout_Stack_setSize_float_float)(jcontext ctx, jobject self, jfloat param0, jfloat param1);
#define VTABLE_arc_scene_ui_layout_Stack_sizeBy_float 61
typedef void (*func_arc_scene_ui_layout_Stack_sizeBy_float)(jcontext ctx, jobject self, jfloat param0);
#define VTABLE_arc_scene_ui_layout_Stack_sizeBy_float_float 62
typedef void (*func_arc_scene_ui_layout_Stack_sizeBy_float_float)(jcontext ctx, jobject self, jfloat param0, jfloat param1);
#define VTABLE_arc_scene_ui_layout_Stack_setBounds_float_float_float_float 63
typedef void (*func_arc_scene_ui_layout_Stack_setBounds_float_float_float_float)(jcontext ctx, jobject self, jfloat param0, jfloat param1, jfloat param2, jfloat param3);
#define VTABLE_arc_scene_ui_layout_Stack_setOrigin_float_float 64
typedef void (*func_arc_scene_ui_layout_Stack_setOrigin_float_float)(jcontext ctx, jobject self, jfloat param0, jfloat param1);
#define VTABLE_arc_scene_ui_layout_Stack_setOrigin_int 65
typedef void (*func_arc_scene_ui_layout_Stack_setOrigin_int)(jcontext ctx, jobject self, jint param0);
#define VTABLE_arc_scene_ui_layout_Stack_setScale_float 66
typedef void (*func_arc_scene_ui_layout_Stack_setScale_float)(jcontext ctx, jobject self, jfloat param0);
#define VTABLE_arc_scene_ui_layout_Stack_setScale_float_float 67
typedef void (*func_arc_scene_ui_layout_Stack_setScale_float_float)(jcontext ctx, jobject self, jfloat param0, jfloat param1);
#define VTABLE_arc_scene_ui_layout_Stack_scaleBy_float 68
typedef void (*func_arc_scene_ui_layout_Stack_scaleBy_float)(jcontext ctx, jobject self, jfloat param0);
#define VTABLE_arc_scene_ui_layout_Stack_scaleBy_float_float 69
typedef void (*func_arc_scene_ui_layout_Stack_scaleBy_float_float)(jcontext ctx, jobject self, jfloat param0, jfloat param1);
#define VTABLE_arc_scene_ui_layout_Stack_getRotation_R_float 70
typedef jfloat (*func_arc_scene_ui_layout_Stack_getRotation_R_float)(jcontext ctx, jobject self);
#define VTABLE_arc_scene_ui_layout_Stack_setRotation_float 71
typedef void (*func_arc_scene_ui_layout_Stack_setRotation_float)(jcontext ctx, jobject self, jfloat param0);
#define VTABLE_arc_scene_ui_layout_Stack_setRotationOrigin_float_int 72
typedef void (*func_arc_scene_ui_layout_Stack_setRotationOrigin_float_int)(jcontext ctx, jobject self, jfloat param0, jint param1);
#define VTABLE_arc_scene_ui_layout_Stack_rotateBy_float 73
typedef void (*func_arc_scene_ui_layout_Stack_rotateBy_float)(jcontext ctx, jobject self, jfloat param0);
#define VTABLE_arc_scene_ui_layout_Stack_setColor_float_float_float_float 74
typedef void (*func_arc_scene_ui_layout_Stack_setColor_float_float_float_float)(jcontext ctx, jobject self, jfloat param0, jfloat param1, jfloat param2, jfloat param3);
#define VTABLE_arc_scene_ui_layout_Stack_setColor_arc_graphics_Color 75
typedef void (*func_arc_scene_ui_layout_Stack_setColor_arc_graphics_Color)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_scene_ui_layout_Stack_toFront 76
typedef void (*func_arc_scene_ui_layout_Stack_toFront)(jcontext ctx, jobject self);
#define VTABLE_arc_scene_ui_layout_Stack_toBack 77
typedef void (*func_arc_scene_ui_layout_Stack_toBack)(jcontext ctx, jobject self);
#define VTABLE_arc_scene_ui_layout_Stack_getZIndex_R_int 78
typedef jint (*func_arc_scene_ui_layout_Stack_getZIndex_R_int)(jcontext ctx, jobject self);
#define VTABLE_arc_scene_ui_layout_Stack_setZIndex_int 79
typedef void (*func_arc_scene_ui_layout_Stack_setZIndex_int)(jcontext ctx, jobject self, jint param0);
#define VTABLE_arc_scene_ui_layout_Stack_clipBegin_R_boolean 80
typedef jbool (*func_arc_scene_ui_layout_Stack_clipBegin_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_arc_scene_ui_layout_Stack_clipBegin_float_float_float_float_R_boolean 81
typedef jbool (*func_arc_scene_ui_layout_Stack_clipBegin_float_float_float_float_R_boolean)(jcontext ctx, jobject self, jfloat param0, jfloat param1, jfloat param2, jfloat param3);
#define VTABLE_arc_scene_ui_layout_Stack_clipEnd 82
typedef void (*func_arc_scene_ui_layout_Stack_clipEnd)(jcontext ctx, jobject self);
#define VTABLE_arc_scene_ui_layout_Stack_screenToLocalCoordinates_arc_math_geom_Vec2_R_arc_math_geom_Vec2 83
typedef jobject (*func_arc_scene_ui_layout_Stack_screenToLocalCoordinates_arc_math_geom_Vec2_R_arc_math_geom_Vec2)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_scene_ui_layout_Stack_stageToLocalCoordinates_arc_math_geom_Vec2_R_arc_math_geom_Vec2 84
typedef jobject (*func_arc_scene_ui_layout_Stack_stageToLocalCoordinates_arc_math_geom_Vec2_R_arc_math_geom_Vec2)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_scene_ui_layout_Stack_localToStageCoordinates_arc_math_geom_Vec2_R_arc_math_geom_Vec2 85
typedef jobject (*func_arc_scene_ui_layout_Stack_localToStageCoordinates_arc_math_geom_Vec2_R_arc_math_geom_Vec2)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_scene_ui_layout_Stack_localToParentCoordinates_arc_math_geom_Vec2_R_arc_math_geom_Vec2 86
typedef jobject (*func_arc_scene_ui_layout_Stack_localToParentCoordinates_arc_math_geom_Vec2_R_arc_math_geom_Vec2)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_scene_ui_layout_Stack_localToAscendantCoordinates_arc_scene_Element_arc_math_geom_Vec2_R_arc_math_geom_Vec2 87
typedef jobject (*func_arc_scene_ui_layout_Stack_localToAscendantCoordinates_arc_scene_Element_arc_math_geom_Vec2_R_arc_math_geom_Vec2)(jcontext ctx, jobject self, jobject param0, jobject param1);
#define VTABLE_arc_scene_ui_layout_Stack_parentToLocalCoordinates_arc_math_geom_Vec2_R_arc_math_geom_Vec2 88
typedef jobject (*func_arc_scene_ui_layout_Stack_parentToLocalCoordinates_arc_math_geom_Vec2_R_arc_math_geom_Vec2)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_scene_ui_layout_Stack_getMinWidth_R_float 89
typedef jfloat (*func_arc_scene_ui_layout_Stack_getMinWidth_R_float)(jcontext ctx, jobject self);
#define VTABLE_arc_scene_ui_layout_Stack_getMinHeight_R_float 90
typedef jfloat (*func_arc_scene_ui_layout_Stack_getMinHeight_R_float)(jcontext ctx, jobject self);
#define VTABLE_arc_scene_ui_layout_Stack_getPrefWidth_R_float 91
typedef jfloat (*func_arc_scene_ui_layout_Stack_getPrefWidth_R_float)(jcontext ctx, jobject self);
#define VTABLE_arc_scene_ui_layout_Stack_getPrefHeight_R_float 92
typedef jfloat (*func_arc_scene_ui_layout_Stack_getPrefHeight_R_float)(jcontext ctx, jobject self);
#define VTABLE_arc_scene_ui_layout_Stack_getMaxWidth_R_float 93
typedef jfloat (*func_arc_scene_ui_layout_Stack_getMaxWidth_R_float)(jcontext ctx, jobject self);
#define VTABLE_arc_scene_ui_layout_Stack_getMaxHeight_R_float 94
typedef jfloat (*func_arc_scene_ui_layout_Stack_getMaxHeight_R_float)(jcontext ctx, jobject self);
#define VTABLE_arc_scene_ui_layout_Stack_setLayoutEnabled_boolean 95
typedef void (*func_arc_scene_ui_layout_Stack_setLayoutEnabled_boolean)(jcontext ctx, jobject self, jbool param0);
#define VTABLE_arc_scene_ui_layout_Stack_validate 96
typedef void (*func_arc_scene_ui_layout_Stack_validate)(jcontext ctx, jobject self);
#define VTABLE_arc_scene_ui_layout_Stack_needsLayout_R_boolean 97
typedef jbool (*func_arc_scene_ui_layout_Stack_needsLayout_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_arc_scene_ui_layout_Stack_invalidate 98
typedef void (*func_arc_scene_ui_layout_Stack_invalidate)(jcontext ctx, jobject self);
#define VTABLE_arc_scene_ui_layout_Stack_invalidateHierarchy 99
typedef void (*func_arc_scene_ui_layout_Stack_invalidateHierarchy)(jcontext ctx, jobject self);
#define VTABLE_arc_scene_ui_layout_Stack_pack 100
typedef void (*func_arc_scene_ui_layout_Stack_pack)(jcontext ctx, jobject self);
#define VTABLE_arc_scene_ui_layout_Stack_setFillParent_boolean 101
typedef void (*func_arc_scene_ui_layout_Stack_setFillParent_boolean)(jcontext ctx, jobject self, jbool param0);
#define VTABLE_arc_scene_ui_layout_Stack_layout 102
typedef void (*func_arc_scene_ui_layout_Stack_layout)(jcontext ctx, jobject self);
#define VTABLE_arc_scene_ui_layout_Stack_keepInStage 103
typedef void (*func_arc_scene_ui_layout_Stack_keepInStage)(jcontext ctx, jobject self);
#define VTABLE_arc_scene_ui_layout_Stack_setTranslation_float_float 104
typedef void (*func_arc_scene_ui_layout_Stack_setTranslation_float_float)(jcontext ctx, jobject self, jfloat param0, jfloat param1);
#define VTABLE_arc_scene_ui_layout_Stack_keyDown_arc_input_KeyCode_java_lang_Runnable 105
typedef void (*func_arc_scene_ui_layout_Stack_keyDown_arc_input_KeyCode_java_lang_Runnable)(jcontext ctx, jobject self, jobject param0, jobject param1);
#define VTABLE_arc_scene_ui_layout_Stack_keyDown_arc_func_Cons 106
typedef void (*func_arc_scene_ui_layout_Stack_keyDown_arc_func_Cons)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_scene_ui_layout_Stack_fireClick 107
typedef void (*func_arc_scene_ui_layout_Stack_fireClick)(jcontext ctx, jobject self);
#define VTABLE_arc_scene_ui_layout_Stack_clicked_java_lang_Runnable_R_arc_scene_event_ClickListener 108
typedef jobject (*func_arc_scene_ui_layout_Stack_clicked_java_lang_Runnable_R_arc_scene_event_ClickListener)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_scene_ui_layout_Stack_clicked_arc_input_KeyCode_java_lang_Runnable_R_arc_scene_event_ClickListener 109
typedef jobject (*func_arc_scene_ui_layout_Stack_clicked_arc_input_KeyCode_java_lang_Runnable_R_arc_scene_event_ClickListener)(jcontext ctx, jobject self, jobject param0, jobject param1);
#define VTABLE_arc_scene_ui_layout_Stack_clicked_arc_func_Cons_java_lang_Runnable_R_arc_scene_event_ClickListener 110
typedef jobject (*func_arc_scene_ui_layout_Stack_clicked_arc_func_Cons_java_lang_Runnable_R_arc_scene_event_ClickListener)(jcontext ctx, jobject self, jobject param0, jobject param1);
#define VTABLE_arc_scene_ui_layout_Stack_clicked_arc_func_Cons_arc_func_Cons_R_arc_scene_event_ClickListener 111
typedef jobject (*func_arc_scene_ui_layout_Stack_clicked_arc_func_Cons_arc_func_Cons_R_arc_scene_event_ClickListener)(jcontext ctx, jobject self, jobject param0, jobject param1);
#define VTABLE_arc_scene_ui_layout_Stack_tapped_java_lang_Runnable_R_arc_scene_event_InputListener 112
typedef jobject (*func_arc_scene_ui_layout_Stack_tapped_java_lang_Runnable_R_arc_scene_event_InputListener)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_scene_ui_layout_Stack_hovered_java_lang_Runnable 113
typedef void (*func_arc_scene_ui_layout_Stack_hovered_java_lang_Runnable)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_scene_ui_layout_Stack_exited_java_lang_Runnable 114
typedef void (*func_arc_scene_ui_layout_Stack_exited_java_lang_Runnable)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_scene_ui_layout_Stack_released_java_lang_Runnable 115
typedef void (*func_arc_scene_ui_layout_Stack_released_java_lang_Runnable)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_scene_ui_layout_Stack_change 116
typedef void (*func_arc_scene_ui_layout_Stack_change)(jcontext ctx, jobject self);
#define VTABLE_arc_scene_ui_layout_Stack_changed_java_lang_Runnable 117
typedef void (*func_arc_scene_ui_layout_Stack_changed_java_lang_Runnable)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_scene_ui_layout_Stack_update_java_lang_Runnable_R_arc_scene_Element 118
typedef jobject (*func_arc_scene_ui_layout_Stack_update_java_lang_Runnable_R_arc_scene_Element)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_scene_ui_layout_Stack_visible_arc_func_Boolp_R_arc_scene_Element 119
typedef jobject (*func_arc_scene_ui_layout_Stack_visible_arc_func_Boolp_R_arc_scene_Element)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_scene_ui_layout_Stack_touchable_arc_func_Prov 120
typedef void (*func_arc_scene_ui_layout_Stack_touchable_arc_func_Prov)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_scene_ui_layout_Stack_setCullingArea_arc_math_geom_Rect 121
typedef void (*func_arc_scene_ui_layout_Stack_setCullingArea_arc_math_geom_Rect)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_scene_ui_layout_Stack_drawChildren 122
typedef void (*func_arc_scene_ui_layout_Stack_drawChildren)(jcontext ctx, jobject self);
#define VTABLE_arc_scene_ui_layout_Stack_computeTransform_R_arc_math_Mat 123
typedef jobject (*func_arc_scene_ui_layout_Stack_computeTransform_R_arc_math_Mat)(jcontext ctx, jobject self);
#define VTABLE_arc_scene_ui_layout_Stack_applyTransform_arc_math_Mat 124
typedef void (*func_arc_scene_ui_layout_Stack_applyTransform_arc_math_Mat)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_scene_ui_layout_Stack_resetTransform 125
typedef void (*func_arc_scene_ui_layout_Stack_resetTransform)(jcontext ctx, jobject self);
#define VTABLE_arc_scene_ui_layout_Stack_getCullingArea_R_arc_math_geom_Rect 126
typedef jobject (*func_arc_scene_ui_layout_Stack_getCullingArea_R_arc_math_geom_Rect)(jcontext ctx, jobject self);
#define VTABLE_arc_scene_ui_layout_Stack_childrenChanged 127
typedef void (*func_arc_scene_ui_layout_Stack_childrenChanged)(jcontext ctx, jobject self);
#define VTABLE_arc_scene_ui_layout_Stack_forEach_arc_func_Cons 128
typedef void (*func_arc_scene_ui_layout_Stack_forEach_arc_func_Cons)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_scene_ui_layout_Stack_fill_arc_scene_ui_layout_Table$DrawRect_R_arc_scene_Element 129
typedef jobject (*func_arc_scene_ui_layout_Stack_fill_arc_scene_ui_layout_Table$DrawRect_R_arc_scene_Element)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_scene_ui_layout_Stack_fill_arc_func_Cons 130
typedef void (*func_arc_scene_ui_layout_Stack_fill_arc_func_Cons)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_scene_ui_layout_Stack_fill_arc_scene_style_Drawable_arc_func_Cons 131
typedef void (*func_arc_scene_ui_layout_Stack_fill_arc_scene_style_Drawable_arc_func_Cons)(jcontext ctx, jobject self, jobject param0, jobject param1);
#define VTABLE_arc_scene_ui_layout_Stack_addChild_arc_scene_Element 132
typedef void (*func_arc_scene_ui_layout_Stack_addChild_arc_scene_Element)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_scene_ui_layout_Stack_addChildAt_int_arc_scene_Element 133
typedef void (*func_arc_scene_ui_layout_Stack_addChildAt_int_arc_scene_Element)(jcontext ctx, jobject self, jint param0, jobject param1);
#define VTABLE_arc_scene_ui_layout_Stack_addChildBefore_arc_scene_Element_arc_scene_Element 134
typedef void (*func_arc_scene_ui_layout_Stack_addChildBefore_arc_scene_Element_arc_scene_Element)(jcontext ctx, jobject self, jobject param0, jobject param1);
#define VTABLE_arc_scene_ui_layout_Stack_addChildAfter_arc_scene_Element_arc_scene_Element 135
typedef void (*func_arc_scene_ui_layout_Stack_addChildAfter_arc_scene_Element_arc_scene_Element)(jcontext ctx, jobject self, jobject param0, jobject param1);
#define VTABLE_arc_scene_ui_layout_Stack_removeChild_arc_scene_Element_R_boolean 136
typedef jbool (*func_arc_scene_ui_layout_Stack_removeChild_arc_scene_Element_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_scene_ui_layout_Stack_removeChild_arc_scene_Element_boolean_R_boolean 137
typedef jbool (*func_arc_scene_ui_layout_Stack_removeChild_arc_scene_Element_boolean_R_boolean)(jcontext ctx, jobject self, jobject param0, jbool param1);
#define VTABLE_arc_scene_ui_layout_Stack_clearChildren 138
typedef void (*func_arc_scene_ui_layout_Stack_clearChildren)(jcontext ctx, jobject self);
#define VTABLE_arc_scene_ui_layout_Stack_find_java_lang_String_R_arc_scene_Element 139
typedef jobject (*func_arc_scene_ui_layout_Stack_find_java_lang_String_R_arc_scene_Element)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_scene_ui_layout_Stack_findVisible_java_lang_String_R_arc_scene_Element 140
typedef jobject (*func_arc_scene_ui_layout_Stack_findVisible_java_lang_String_R_arc_scene_Element)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_scene_ui_layout_Stack_find_arc_func_Boolf_R_arc_scene_Element 141
typedef jobject (*func_arc_scene_ui_layout_Stack_find_arc_func_Boolf_R_arc_scene_Element)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_scene_ui_layout_Stack_swapActor_int_int_R_boolean 142
typedef jbool (*func_arc_scene_ui_layout_Stack_swapActor_int_int_R_boolean)(jcontext ctx, jobject self, jint param0, jint param1);
#define VTABLE_arc_scene_ui_layout_Stack_swapActor_arc_scene_Element_arc_scene_Element_R_boolean 143
typedef jbool (*func_arc_scene_ui_layout_Stack_swapActor_arc_scene_Element_arc_scene_Element_R_boolean)(jcontext ctx, jobject self, jobject param0, jobject param1);
#define VTABLE_arc_scene_ui_layout_Stack_getChildren_R_arc_struct_SnapshotSeq 144
typedef jobject (*func_arc_scene_ui_layout_Stack_getChildren_R_arc_struct_SnapshotSeq)(jcontext ctx, jobject self);
#define VTABLE_arc_scene_ui_layout_Stack_hasChildren_R_boolean 145
typedef jbool (*func_arc_scene_ui_layout_Stack_hasChildren_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_arc_scene_ui_layout_Stack_isTransform_R_boolean 146
typedef jbool (*func_arc_scene_ui_layout_Stack_isTransform_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_arc_scene_ui_layout_Stack_setTransform_boolean 147
typedef void (*func_arc_scene_ui_layout_Stack_setTransform_boolean)(jcontext ctx, jobject self, jbool param0);
#define VTABLE_arc_scene_ui_layout_Stack_localToDescendantCoordinates_arc_scene_Element_arc_math_geom_Vec2_R_arc_math_geom_Vec2 148
typedef jobject (*func_arc_scene_ui_layout_Stack_localToDescendantCoordinates_arc_scene_Element_arc_math_geom_Vec2_R_arc_math_geom_Vec2)(jcontext ctx, jobject self, jobject param0, jobject param1);
#define VTABLE_arc_scene_ui_layout_Stack_toString_java_lang_StringBuilder_int 149
typedef void (*func_arc_scene_ui_layout_Stack_toString_java_lang_StringBuilder_int)(jcontext ctx, jobject self, jobject param0, jint param1);
#define VTABLE_arc_scene_ui_layout_Stack_setLayoutEnabled_arc_scene_Group_boolean 150
typedef void (*func_arc_scene_ui_layout_Stack_setLayoutEnabled_arc_scene_Group_boolean)(jcontext ctx, jobject self, jobject param0, jbool param1);
#define VTABLE_arc_scene_ui_layout_Stack_computeSize 151
typedef void (*func_arc_scene_ui_layout_Stack_computeSize)(jcontext ctx, jobject self);
#define VTABLE_arc_scene_ui_layout_Stack_add_arc_scene_Element 152
typedef void (*func_arc_scene_ui_layout_Stack_add_arc_scene_Element)(jcontext ctx, jobject self, jobject param0);

void mark_arc_scene_ui_layout_Stack(jobject object, jint mark, jint depth);
void clinit_arc_scene_ui_layout_Stack(jcontext ctx);
void init_arc_scene_ui_layout_Stack(jcontext ctx, jobject self);
void init_arc_scene_ui_layout_Stack_Array1_arc_scene_Element(jcontext ctx, jobject self, jobject param0);
void M_arc_scene_ui_layout_Stack_invalidate(jcontext ctx, jobject self);
void M_arc_scene_ui_layout_Stack_computeSize(jcontext ctx, jobject self);
void M_arc_scene_ui_layout_Stack_add_arc_scene_Element(jcontext ctx, jobject self, jobject param0);
void M_arc_scene_ui_layout_Stack_layout(jcontext ctx, jobject self);
jfloat M_arc_scene_ui_layout_Stack_getPrefWidth_R_float(jcontext ctx, jobject self);
jfloat M_arc_scene_ui_layout_Stack_getPrefHeight_R_float(jcontext ctx, jobject self);
jfloat M_arc_scene_ui_layout_Stack_getMinWidth_R_float(jcontext ctx, jobject self);
jfloat M_arc_scene_ui_layout_Stack_getMinHeight_R_float(jcontext ctx, jobject self);

#ifdef __cplusplus
}
#endif

#endif
