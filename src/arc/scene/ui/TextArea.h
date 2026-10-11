#ifndef HEADER_arc_scene_ui_TextArea
#define HEADER_arc_scene_ui_TextArea

#include "Clearwing.h"
#include "arc/scene/ui/TextField.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct arc_scene_ui_TextArea {
	arc_scene_ui_TextField parent;
	jref F_linesBreak;
	jint F_cursorLine;
	jint F_firstLineShowing;
	jfloat F_moveOffset;
	jref F_lastText;
	jint F_linesShowing;
	jfloat F_prefRows;
} arc_scene_ui_TextArea;

extern Class class_arc_scene_ui_TextArea;


#define VTABLE_arc_scene_ui_TextArea_hashCode_R_int 0
typedef jint (*func_arc_scene_ui_TextArea_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_arc_scene_ui_TextArea_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_arc_scene_ui_TextArea_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_scene_ui_TextArea_clone_R_java_lang_Object 2
typedef jobject (*func_arc_scene_ui_TextArea_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_arc_scene_ui_TextArea_getClass_R_java_lang_Class 3
typedef jobject (*func_arc_scene_ui_TextArea_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_arc_scene_ui_TextArea_toString_R_java_lang_String 4
typedef jobject (*func_arc_scene_ui_TextArea_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_arc_scene_ui_TextArea_finalize 5
typedef void (*func_arc_scene_ui_TextArea_finalize)(jcontext ctx, jobject self);
#define VTABLE_arc_scene_ui_TextArea_notify 6
typedef void (*func_arc_scene_ui_TextArea_notify)(jcontext ctx, jobject self);
#define VTABLE_arc_scene_ui_TextArea_notifyAll 7
typedef void (*func_arc_scene_ui_TextArea_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_arc_scene_ui_TextArea_wait 8
typedef void (*func_arc_scene_ui_TextArea_wait)(jcontext ctx, jobject self);
#define VTABLE_arc_scene_ui_TextArea_wait_long 9
typedef void (*func_arc_scene_ui_TextArea_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_arc_scene_ui_TextArea_wait_long_int 10
typedef void (*func_arc_scene_ui_TextArea_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);
#define VTABLE_arc_scene_ui_TextArea_draw 11
typedef void (*func_arc_scene_ui_TextArea_draw)(jcontext ctx, jobject self);
#define VTABLE_arc_scene_ui_TextArea_act_float 12
typedef void (*func_arc_scene_ui_TextArea_act_float)(jcontext ctx, jobject self, jfloat param0);
#define VTABLE_arc_scene_ui_TextArea_updateVisibility 13
typedef void (*func_arc_scene_ui_TextArea_updateVisibility)(jcontext ctx, jobject self);
#define VTABLE_arc_scene_ui_TextArea_hasMouse_R_boolean 14
typedef jbool (*func_arc_scene_ui_TextArea_hasMouse_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_arc_scene_ui_TextArea_hasKeyboard_R_boolean 15
typedef jbool (*func_arc_scene_ui_TextArea_hasKeyboard_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_arc_scene_ui_TextArea_hasScroll_R_boolean 16
typedef jbool (*func_arc_scene_ui_TextArea_hasScroll_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_arc_scene_ui_TextArea_requestKeyboard 17
typedef void (*func_arc_scene_ui_TextArea_requestKeyboard)(jcontext ctx, jobject self);
#define VTABLE_arc_scene_ui_TextArea_requestScroll 18
typedef void (*func_arc_scene_ui_TextArea_requestScroll)(jcontext ctx, jobject self);
#define VTABLE_arc_scene_ui_TextArea_fire_arc_scene_event_SceneEvent_R_boolean 19
typedef jbool (*func_arc_scene_ui_TextArea_fire_arc_scene_event_SceneEvent_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_scene_ui_TextArea_notify_arc_scene_event_SceneEvent_boolean_R_boolean 20
typedef jbool (*func_arc_scene_ui_TextArea_notify_arc_scene_event_SceneEvent_boolean_R_boolean)(jcontext ctx, jobject self, jobject param0, jbool param1);
#define VTABLE_arc_scene_ui_TextArea_hit_float_float_boolean_R_arc_scene_Element 21
typedef jobject (*func_arc_scene_ui_TextArea_hit_float_float_boolean_R_arc_scene_Element)(jcontext ctx, jobject self, jfloat param0, jfloat param1, jbool param2);
#define VTABLE_arc_scene_ui_TextArea_remove_R_boolean 22
typedef jbool (*func_arc_scene_ui_TextArea_remove_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_arc_scene_ui_TextArea_dragged_arc_func_Floatc2 23
typedef void (*func_arc_scene_ui_TextArea_dragged_arc_func_Floatc2)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_scene_ui_TextArea_scrolled_arc_func_Floatc 24
typedef void (*func_arc_scene_ui_TextArea_scrolled_arc_func_Floatc)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_scene_ui_TextArea_addListener_arc_scene_event_EventListener_R_boolean 25
typedef jbool (*func_arc_scene_ui_TextArea_addListener_arc_scene_event_EventListener_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_scene_ui_TextArea_removeListener_arc_scene_event_EventListener_R_boolean 26
typedef jbool (*func_arc_scene_ui_TextArea_removeListener_arc_scene_event_EventListener_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_scene_ui_TextArea_getListeners_R_arc_struct_Seq 27
typedef jobject (*func_arc_scene_ui_TextArea_getListeners_R_arc_struct_Seq)(jcontext ctx, jobject self);
#define VTABLE_arc_scene_ui_TextArea_addCaptureListener_arc_scene_event_EventListener_R_boolean 28
typedef jbool (*func_arc_scene_ui_TextArea_addCaptureListener_arc_scene_event_EventListener_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_scene_ui_TextArea_removeCaptureListener_arc_scene_event_EventListener_R_boolean 29
typedef jbool (*func_arc_scene_ui_TextArea_removeCaptureListener_arc_scene_event_EventListener_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_scene_ui_TextArea_getCaptureListeners_R_arc_struct_Seq 30
typedef jobject (*func_arc_scene_ui_TextArea_getCaptureListeners_R_arc_struct_Seq)(jcontext ctx, jobject self);
#define VTABLE_arc_scene_ui_TextArea_addAction_arc_scene_Action 31
typedef void (*func_arc_scene_ui_TextArea_addAction_arc_scene_Action)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_scene_ui_TextArea_actions_Array1_arc_scene_Action 32
typedef void (*func_arc_scene_ui_TextArea_actions_Array1_arc_scene_Action)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_scene_ui_TextArea_removeAction_arc_scene_Action 33
typedef void (*func_arc_scene_ui_TextArea_removeAction_arc_scene_Action)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_scene_ui_TextArea_getActions_R_arc_struct_Seq 34
typedef jobject (*func_arc_scene_ui_TextArea_getActions_R_arc_struct_Seq)(jcontext ctx, jobject self);
#define VTABLE_arc_scene_ui_TextArea_hasActions_R_boolean 35
typedef jbool (*func_arc_scene_ui_TextArea_hasActions_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_arc_scene_ui_TextArea_clearActions 36
typedef void (*func_arc_scene_ui_TextArea_clearActions)(jcontext ctx, jobject self);
#define VTABLE_arc_scene_ui_TextArea_clearListeners 37
typedef void (*func_arc_scene_ui_TextArea_clearListeners)(jcontext ctx, jobject self);
#define VTABLE_arc_scene_ui_TextArea_clear 38
typedef void (*func_arc_scene_ui_TextArea_clear)(jcontext ctx, jobject self);
#define VTABLE_arc_scene_ui_TextArea_getScene_R_arc_scene_Scene 39
typedef jobject (*func_arc_scene_ui_TextArea_getScene_R_arc_scene_Scene)(jcontext ctx, jobject self);
#define VTABLE_arc_scene_ui_TextArea_setScene_arc_scene_Scene 40
typedef void (*func_arc_scene_ui_TextArea_setScene_arc_scene_Scene)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_scene_ui_TextArea_isDescendantOf_arc_func_Boolf_R_boolean 41
typedef jbool (*func_arc_scene_ui_TextArea_isDescendantOf_arc_func_Boolf_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_scene_ui_TextArea_isDescendantOf_arc_scene_Element_R_boolean 42
typedef jbool (*func_arc_scene_ui_TextArea_isDescendantOf_arc_scene_Element_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_scene_ui_TextArea_isAscendantOf_arc_scene_Element_R_boolean 43
typedef jbool (*func_arc_scene_ui_TextArea_isAscendantOf_arc_scene_Element_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_scene_ui_TextArea_hasParent_R_boolean 44
typedef jbool (*func_arc_scene_ui_TextArea_hasParent_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_arc_scene_ui_TextArea_isTouchable_R_boolean 45
typedef jbool (*func_arc_scene_ui_TextArea_isTouchable_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_arc_scene_ui_TextArea_getX_int_R_float 46
typedef jfloat (*func_arc_scene_ui_TextArea_getX_int_R_float)(jcontext ctx, jobject self, jint param0);
#define VTABLE_arc_scene_ui_TextArea_getY_int_R_float 47
typedef jfloat (*func_arc_scene_ui_TextArea_getY_int_R_float)(jcontext ctx, jobject self, jint param0);
#define VTABLE_arc_scene_ui_TextArea_setPosition_float_float 48
typedef void (*func_arc_scene_ui_TextArea_setPosition_float_float)(jcontext ctx, jobject self, jfloat param0, jfloat param1);
#define VTABLE_arc_scene_ui_TextArea_setPosition_float_float_int 49
typedef void (*func_arc_scene_ui_TextArea_setPosition_float_float_int)(jcontext ctx, jobject self, jfloat param0, jfloat param1, jint param2);
#define VTABLE_arc_scene_ui_TextArea_moveBy_float_float 50
typedef void (*func_arc_scene_ui_TextArea_moveBy_float_float)(jcontext ctx, jobject self, jfloat param0, jfloat param1);
#define VTABLE_arc_scene_ui_TextArea_getWidth_R_float 51
typedef jfloat (*func_arc_scene_ui_TextArea_getWidth_R_float)(jcontext ctx, jobject self);
#define VTABLE_arc_scene_ui_TextArea_setWidth_float 52
typedef void (*func_arc_scene_ui_TextArea_setWidth_float)(jcontext ctx, jobject self, jfloat param0);
#define VTABLE_arc_scene_ui_TextArea_getHeight_R_float 53
typedef jfloat (*func_arc_scene_ui_TextArea_getHeight_R_float)(jcontext ctx, jobject self);
#define VTABLE_arc_scene_ui_TextArea_setHeight_float 54
typedef void (*func_arc_scene_ui_TextArea_setHeight_float)(jcontext ctx, jobject self, jfloat param0);
#define VTABLE_arc_scene_ui_TextArea_getTop_R_float 55
typedef jfloat (*func_arc_scene_ui_TextArea_getTop_R_float)(jcontext ctx, jobject self);
#define VTABLE_arc_scene_ui_TextArea_getRight_R_float 56
typedef jfloat (*func_arc_scene_ui_TextArea_getRight_R_float)(jcontext ctx, jobject self);
#define VTABLE_arc_scene_ui_TextArea_sizeChanged 57
typedef void (*func_arc_scene_ui_TextArea_sizeChanged)(jcontext ctx, jobject self);
#define VTABLE_arc_scene_ui_TextArea_rotationChanged 58
typedef void (*func_arc_scene_ui_TextArea_rotationChanged)(jcontext ctx, jobject self);
#define VTABLE_arc_scene_ui_TextArea_setSize_float 59
typedef void (*func_arc_scene_ui_TextArea_setSize_float)(jcontext ctx, jobject self, jfloat param0);
#define VTABLE_arc_scene_ui_TextArea_setSize_float_float 60
typedef void (*func_arc_scene_ui_TextArea_setSize_float_float)(jcontext ctx, jobject self, jfloat param0, jfloat param1);
#define VTABLE_arc_scene_ui_TextArea_sizeBy_float 61
typedef void (*func_arc_scene_ui_TextArea_sizeBy_float)(jcontext ctx, jobject self, jfloat param0);
#define VTABLE_arc_scene_ui_TextArea_sizeBy_float_float 62
typedef void (*func_arc_scene_ui_TextArea_sizeBy_float_float)(jcontext ctx, jobject self, jfloat param0, jfloat param1);
#define VTABLE_arc_scene_ui_TextArea_setBounds_float_float_float_float 63
typedef void (*func_arc_scene_ui_TextArea_setBounds_float_float_float_float)(jcontext ctx, jobject self, jfloat param0, jfloat param1, jfloat param2, jfloat param3);
#define VTABLE_arc_scene_ui_TextArea_setOrigin_float_float 64
typedef void (*func_arc_scene_ui_TextArea_setOrigin_float_float)(jcontext ctx, jobject self, jfloat param0, jfloat param1);
#define VTABLE_arc_scene_ui_TextArea_setOrigin_int 65
typedef void (*func_arc_scene_ui_TextArea_setOrigin_int)(jcontext ctx, jobject self, jint param0);
#define VTABLE_arc_scene_ui_TextArea_setScale_float 66
typedef void (*func_arc_scene_ui_TextArea_setScale_float)(jcontext ctx, jobject self, jfloat param0);
#define VTABLE_arc_scene_ui_TextArea_setScale_float_float 67
typedef void (*func_arc_scene_ui_TextArea_setScale_float_float)(jcontext ctx, jobject self, jfloat param0, jfloat param1);
#define VTABLE_arc_scene_ui_TextArea_scaleBy_float 68
typedef void (*func_arc_scene_ui_TextArea_scaleBy_float)(jcontext ctx, jobject self, jfloat param0);
#define VTABLE_arc_scene_ui_TextArea_scaleBy_float_float 69
typedef void (*func_arc_scene_ui_TextArea_scaleBy_float_float)(jcontext ctx, jobject self, jfloat param0, jfloat param1);
#define VTABLE_arc_scene_ui_TextArea_getRotation_R_float 70
typedef jfloat (*func_arc_scene_ui_TextArea_getRotation_R_float)(jcontext ctx, jobject self);
#define VTABLE_arc_scene_ui_TextArea_setRotation_float 71
typedef void (*func_arc_scene_ui_TextArea_setRotation_float)(jcontext ctx, jobject self, jfloat param0);
#define VTABLE_arc_scene_ui_TextArea_setRotationOrigin_float_int 72
typedef void (*func_arc_scene_ui_TextArea_setRotationOrigin_float_int)(jcontext ctx, jobject self, jfloat param0, jint param1);
#define VTABLE_arc_scene_ui_TextArea_rotateBy_float 73
typedef void (*func_arc_scene_ui_TextArea_rotateBy_float)(jcontext ctx, jobject self, jfloat param0);
#define VTABLE_arc_scene_ui_TextArea_setColor_float_float_float_float 74
typedef void (*func_arc_scene_ui_TextArea_setColor_float_float_float_float)(jcontext ctx, jobject self, jfloat param0, jfloat param1, jfloat param2, jfloat param3);
#define VTABLE_arc_scene_ui_TextArea_setColor_arc_graphics_Color 75
typedef void (*func_arc_scene_ui_TextArea_setColor_arc_graphics_Color)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_scene_ui_TextArea_toFront 76
typedef void (*func_arc_scene_ui_TextArea_toFront)(jcontext ctx, jobject self);
#define VTABLE_arc_scene_ui_TextArea_toBack 77
typedef void (*func_arc_scene_ui_TextArea_toBack)(jcontext ctx, jobject self);
#define VTABLE_arc_scene_ui_TextArea_getZIndex_R_int 78
typedef jint (*func_arc_scene_ui_TextArea_getZIndex_R_int)(jcontext ctx, jobject self);
#define VTABLE_arc_scene_ui_TextArea_setZIndex_int 79
typedef void (*func_arc_scene_ui_TextArea_setZIndex_int)(jcontext ctx, jobject self, jint param0);
#define VTABLE_arc_scene_ui_TextArea_clipBegin_R_boolean 80
typedef jbool (*func_arc_scene_ui_TextArea_clipBegin_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_arc_scene_ui_TextArea_clipBegin_float_float_float_float_R_boolean 81
typedef jbool (*func_arc_scene_ui_TextArea_clipBegin_float_float_float_float_R_boolean)(jcontext ctx, jobject self, jfloat param0, jfloat param1, jfloat param2, jfloat param3);
#define VTABLE_arc_scene_ui_TextArea_clipEnd 82
typedef void (*func_arc_scene_ui_TextArea_clipEnd)(jcontext ctx, jobject self);
#define VTABLE_arc_scene_ui_TextArea_screenToLocalCoordinates_arc_math_geom_Vec2_R_arc_math_geom_Vec2 83
typedef jobject (*func_arc_scene_ui_TextArea_screenToLocalCoordinates_arc_math_geom_Vec2_R_arc_math_geom_Vec2)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_scene_ui_TextArea_stageToLocalCoordinates_arc_math_geom_Vec2_R_arc_math_geom_Vec2 84
typedef jobject (*func_arc_scene_ui_TextArea_stageToLocalCoordinates_arc_math_geom_Vec2_R_arc_math_geom_Vec2)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_scene_ui_TextArea_localToStageCoordinates_arc_math_geom_Vec2_R_arc_math_geom_Vec2 85
typedef jobject (*func_arc_scene_ui_TextArea_localToStageCoordinates_arc_math_geom_Vec2_R_arc_math_geom_Vec2)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_scene_ui_TextArea_localToParentCoordinates_arc_math_geom_Vec2_R_arc_math_geom_Vec2 86
typedef jobject (*func_arc_scene_ui_TextArea_localToParentCoordinates_arc_math_geom_Vec2_R_arc_math_geom_Vec2)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_scene_ui_TextArea_localToAscendantCoordinates_arc_scene_Element_arc_math_geom_Vec2_R_arc_math_geom_Vec2 87
typedef jobject (*func_arc_scene_ui_TextArea_localToAscendantCoordinates_arc_scene_Element_arc_math_geom_Vec2_R_arc_math_geom_Vec2)(jcontext ctx, jobject self, jobject param0, jobject param1);
#define VTABLE_arc_scene_ui_TextArea_parentToLocalCoordinates_arc_math_geom_Vec2_R_arc_math_geom_Vec2 88
typedef jobject (*func_arc_scene_ui_TextArea_parentToLocalCoordinates_arc_math_geom_Vec2_R_arc_math_geom_Vec2)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_scene_ui_TextArea_getMinWidth_R_float 89
typedef jfloat (*func_arc_scene_ui_TextArea_getMinWidth_R_float)(jcontext ctx, jobject self);
#define VTABLE_arc_scene_ui_TextArea_getMinHeight_R_float 90
typedef jfloat (*func_arc_scene_ui_TextArea_getMinHeight_R_float)(jcontext ctx, jobject self);
#define VTABLE_arc_scene_ui_TextArea_getPrefWidth_R_float 91
typedef jfloat (*func_arc_scene_ui_TextArea_getPrefWidth_R_float)(jcontext ctx, jobject self);
#define VTABLE_arc_scene_ui_TextArea_getPrefHeight_R_float 92
typedef jfloat (*func_arc_scene_ui_TextArea_getPrefHeight_R_float)(jcontext ctx, jobject self);
#define VTABLE_arc_scene_ui_TextArea_getMaxWidth_R_float 93
typedef jfloat (*func_arc_scene_ui_TextArea_getMaxWidth_R_float)(jcontext ctx, jobject self);
#define VTABLE_arc_scene_ui_TextArea_getMaxHeight_R_float 94
typedef jfloat (*func_arc_scene_ui_TextArea_getMaxHeight_R_float)(jcontext ctx, jobject self);
#define VTABLE_arc_scene_ui_TextArea_setLayoutEnabled_boolean 95
typedef void (*func_arc_scene_ui_TextArea_setLayoutEnabled_boolean)(jcontext ctx, jobject self, jbool param0);
#define VTABLE_arc_scene_ui_TextArea_validate 96
typedef void (*func_arc_scene_ui_TextArea_validate)(jcontext ctx, jobject self);
#define VTABLE_arc_scene_ui_TextArea_needsLayout_R_boolean 97
typedef jbool (*func_arc_scene_ui_TextArea_needsLayout_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_arc_scene_ui_TextArea_invalidate 98
typedef void (*func_arc_scene_ui_TextArea_invalidate)(jcontext ctx, jobject self);
#define VTABLE_arc_scene_ui_TextArea_invalidateHierarchy 99
typedef void (*func_arc_scene_ui_TextArea_invalidateHierarchy)(jcontext ctx, jobject self);
#define VTABLE_arc_scene_ui_TextArea_pack 100
typedef void (*func_arc_scene_ui_TextArea_pack)(jcontext ctx, jobject self);
#define VTABLE_arc_scene_ui_TextArea_setFillParent_boolean 101
typedef void (*func_arc_scene_ui_TextArea_setFillParent_boolean)(jcontext ctx, jobject self, jbool param0);
#define VTABLE_arc_scene_ui_TextArea_layout 102
typedef void (*func_arc_scene_ui_TextArea_layout)(jcontext ctx, jobject self);
#define VTABLE_arc_scene_ui_TextArea_keepInStage 103
typedef void (*func_arc_scene_ui_TextArea_keepInStage)(jcontext ctx, jobject self);
#define VTABLE_arc_scene_ui_TextArea_setTranslation_float_float 104
typedef void (*func_arc_scene_ui_TextArea_setTranslation_float_float)(jcontext ctx, jobject self, jfloat param0, jfloat param1);
#define VTABLE_arc_scene_ui_TextArea_keyDown_arc_input_KeyCode_java_lang_Runnable 105
typedef void (*func_arc_scene_ui_TextArea_keyDown_arc_input_KeyCode_java_lang_Runnable)(jcontext ctx, jobject self, jobject param0, jobject param1);
#define VTABLE_arc_scene_ui_TextArea_keyDown_arc_func_Cons 106
typedef void (*func_arc_scene_ui_TextArea_keyDown_arc_func_Cons)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_scene_ui_TextArea_fireClick 107
typedef void (*func_arc_scene_ui_TextArea_fireClick)(jcontext ctx, jobject self);
#define VTABLE_arc_scene_ui_TextArea_clicked_java_lang_Runnable_R_arc_scene_event_ClickListener 108
typedef jobject (*func_arc_scene_ui_TextArea_clicked_java_lang_Runnable_R_arc_scene_event_ClickListener)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_scene_ui_TextArea_clicked_arc_input_KeyCode_java_lang_Runnable_R_arc_scene_event_ClickListener 109
typedef jobject (*func_arc_scene_ui_TextArea_clicked_arc_input_KeyCode_java_lang_Runnable_R_arc_scene_event_ClickListener)(jcontext ctx, jobject self, jobject param0, jobject param1);
#define VTABLE_arc_scene_ui_TextArea_clicked_arc_func_Cons_java_lang_Runnable_R_arc_scene_event_ClickListener 110
typedef jobject (*func_arc_scene_ui_TextArea_clicked_arc_func_Cons_java_lang_Runnable_R_arc_scene_event_ClickListener)(jcontext ctx, jobject self, jobject param0, jobject param1);
#define VTABLE_arc_scene_ui_TextArea_clicked_arc_func_Cons_arc_func_Cons_R_arc_scene_event_ClickListener 111
typedef jobject (*func_arc_scene_ui_TextArea_clicked_arc_func_Cons_arc_func_Cons_R_arc_scene_event_ClickListener)(jcontext ctx, jobject self, jobject param0, jobject param1);
#define VTABLE_arc_scene_ui_TextArea_tapped_java_lang_Runnable_R_arc_scene_event_InputListener 112
typedef jobject (*func_arc_scene_ui_TextArea_tapped_java_lang_Runnable_R_arc_scene_event_InputListener)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_scene_ui_TextArea_hovered_java_lang_Runnable 113
typedef void (*func_arc_scene_ui_TextArea_hovered_java_lang_Runnable)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_scene_ui_TextArea_exited_java_lang_Runnable 114
typedef void (*func_arc_scene_ui_TextArea_exited_java_lang_Runnable)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_scene_ui_TextArea_released_java_lang_Runnable 115
typedef void (*func_arc_scene_ui_TextArea_released_java_lang_Runnable)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_scene_ui_TextArea_change 116
typedef void (*func_arc_scene_ui_TextArea_change)(jcontext ctx, jobject self);
#define VTABLE_arc_scene_ui_TextArea_changed_java_lang_Runnable 117
typedef void (*func_arc_scene_ui_TextArea_changed_java_lang_Runnable)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_scene_ui_TextArea_update_java_lang_Runnable_R_arc_scene_Element 118
typedef jobject (*func_arc_scene_ui_TextArea_update_java_lang_Runnable_R_arc_scene_Element)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_scene_ui_TextArea_visible_arc_func_Boolp_R_arc_scene_Element 119
typedef jobject (*func_arc_scene_ui_TextArea_visible_arc_func_Boolp_R_arc_scene_Element)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_scene_ui_TextArea_touchable_arc_func_Prov 120
typedef void (*func_arc_scene_ui_TextArea_touchable_arc_func_Prov)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_scene_ui_TextArea_isDisabled_R_boolean 121
typedef jbool (*func_arc_scene_ui_TextArea_isDisabled_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_arc_scene_ui_TextArea_setDisabled_boolean 122
typedef void (*func_arc_scene_ui_TextArea_setDisabled_boolean)(jcontext ctx, jobject self, jbool param0);
#define VTABLE_arc_scene_ui_TextArea_initialize 123
typedef void (*func_arc_scene_ui_TextArea_initialize)(jcontext ctx, jobject self);
#define VTABLE_arc_scene_ui_TextArea_createInputListener_R_arc_scene_event_InputListener 124
typedef jobject (*func_arc_scene_ui_TextArea_createInputListener_R_arc_scene_event_InputListener)(jcontext ctx, jobject self);
#define VTABLE_arc_scene_ui_TextArea_letterUnderCursor_float_R_int 125
typedef jint (*func_arc_scene_ui_TextArea_letterUnderCursor_float_R_int)(jcontext ctx, jobject self, jfloat param0);
#define VTABLE_arc_scene_ui_TextArea_isWordCharacter_char_R_boolean 126
typedef jbool (*func_arc_scene_ui_TextArea_isWordCharacter_char_R_boolean)(jcontext ctx, jobject self, jchar param0);
#define VTABLE_arc_scene_ui_TextArea_wordUnderCursor_int_R_Array1_int 127
typedef jobject (*func_arc_scene_ui_TextArea_wordUnderCursor_int_R_Array1_int)(jcontext ctx, jobject self, jint param0);
#define VTABLE_arc_scene_ui_TextArea_wordUnderCursor_float_R_Array1_int 128
typedef jobject (*func_arc_scene_ui_TextArea_wordUnderCursor_float_R_Array1_int)(jcontext ctx, jobject self, jfloat param0);
#define VTABLE_arc_scene_ui_TextArea_withinMaxLength_int_R_boolean 129
typedef jbool (*func_arc_scene_ui_TextArea_withinMaxLength_int_R_boolean)(jcontext ctx, jobject self, jint param0);
#define VTABLE_arc_scene_ui_TextArea_removeInputDialog 130
typedef void (*func_arc_scene_ui_TextArea_removeInputDialog)(jcontext ctx, jobject self);
#define VTABLE_arc_scene_ui_TextArea_addInputDialog 131
typedef void (*func_arc_scene_ui_TextArea_addInputDialog)(jcontext ctx, jobject self);
#define VTABLE_arc_scene_ui_TextArea_getMaxLength_R_int 132
typedef jint (*func_arc_scene_ui_TextArea_getMaxLength_R_int)(jcontext ctx, jobject self);
#define VTABLE_arc_scene_ui_TextArea_setMaxLength_int 133
typedef void (*func_arc_scene_ui_TextArea_setMaxLength_int)(jcontext ctx, jobject self, jint param0);
#define VTABLE_arc_scene_ui_TextArea_clearText 134
typedef void (*func_arc_scene_ui_TextArea_clearText)(jcontext ctx, jobject self);
#define VTABLE_arc_scene_ui_TextArea_setOnlyFontChars_boolean 135
typedef void (*func_arc_scene_ui_TextArea_setOnlyFontChars_boolean)(jcontext ctx, jobject self, jbool param0);
#define VTABLE_arc_scene_ui_TextArea_getStyle_R_arc_scene_ui_TextField$TextFieldStyle 136
typedef jobject (*func_arc_scene_ui_TextArea_getStyle_R_arc_scene_ui_TextField$TextFieldStyle)(jcontext ctx, jobject self);
#define VTABLE_arc_scene_ui_TextArea_setStyle_arc_scene_ui_TextField$TextFieldStyle 137
typedef void (*func_arc_scene_ui_TextArea_setStyle_arc_scene_ui_TextField$TextFieldStyle)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_scene_ui_TextArea_calculateOffsets 138
typedef void (*func_arc_scene_ui_TextArea_calculateOffsets)(jcontext ctx, jobject self);
#define VTABLE_arc_scene_ui_TextArea_getBackgroundDrawable_R_arc_scene_style_Drawable 139
typedef jobject (*func_arc_scene_ui_TextArea_getBackgroundDrawable_R_arc_scene_style_Drawable)(jcontext ctx, jobject self);
#define VTABLE_arc_scene_ui_TextArea_isValid_R_boolean 140
typedef jbool (*func_arc_scene_ui_TextArea_isValid_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_arc_scene_ui_TextArea_getTextY_arc_graphics_g2d_Font_arc_scene_style_Drawable_R_float 141
typedef jfloat (*func_arc_scene_ui_TextArea_getTextY_arc_graphics_g2d_Font_arc_scene_style_Drawable_R_float)(jcontext ctx, jobject self, jobject param0, jobject param1);
#define VTABLE_arc_scene_ui_TextArea_drawSelection_arc_scene_style_Drawable_arc_graphics_g2d_Font_float_float 142
typedef void (*func_arc_scene_ui_TextArea_drawSelection_arc_scene_style_Drawable_arc_graphics_g2d_Font_float_float)(jcontext ctx, jobject self, jobject param0, jobject param1, jfloat param2, jfloat param3);
#define VTABLE_arc_scene_ui_TextArea_drawText_arc_graphics_g2d_Font_float_float 143
typedef void (*func_arc_scene_ui_TextArea_drawText_arc_graphics_g2d_Font_float_float)(jcontext ctx, jobject self, jobject param0, jfloat param1, jfloat param2);
#define VTABLE_arc_scene_ui_TextArea_drawCursor_arc_scene_style_Drawable_arc_graphics_g2d_Font_float_float 144
typedef void (*func_arc_scene_ui_TextArea_drawCursor_arc_scene_style_Drawable_arc_graphics_g2d_Font_float_float)(jcontext ctx, jobject self, jobject param0, jobject param1, jfloat param2, jfloat param3);
#define VTABLE_arc_scene_ui_TextArea_updateDisplayText 145
typedef void (*func_arc_scene_ui_TextArea_updateDisplayText)(jcontext ctx, jobject self);
#define VTABLE_arc_scene_ui_TextArea_blink 146
typedef void (*func_arc_scene_ui_TextArea_blink)(jcontext ctx, jobject self);
#define VTABLE_arc_scene_ui_TextArea_copy 147
typedef void (*func_arc_scene_ui_TextArea_copy)(jcontext ctx, jobject self);
#define VTABLE_arc_scene_ui_TextArea_cut 148
typedef void (*func_arc_scene_ui_TextArea_cut)(jcontext ctx, jobject self);
#define VTABLE_arc_scene_ui_TextArea_cut_boolean 149
typedef void (*func_arc_scene_ui_TextArea_cut_boolean)(jcontext ctx, jobject self, jbool param0);
#define VTABLE_arc_scene_ui_TextArea_paste_java_lang_String_boolean 150
typedef void (*func_arc_scene_ui_TextArea_paste_java_lang_String_boolean)(jcontext ctx, jobject self, jobject param0, jbool param1);
#define VTABLE_arc_scene_ui_TextArea_insert_int_java_lang_CharSequence_java_lang_String_R_java_lang_String 151
typedef jobject (*func_arc_scene_ui_TextArea_insert_int_java_lang_CharSequence_java_lang_String_R_java_lang_String)(jcontext ctx, jobject self, jint param0, jobject param1, jobject param2);
#define VTABLE_arc_scene_ui_TextArea_delete_boolean_R_int 152
typedef jint (*func_arc_scene_ui_TextArea_delete_boolean_R_int)(jcontext ctx, jobject self, jbool param0);
#define VTABLE_arc_scene_ui_TextArea_next_boolean 153
typedef void (*func_arc_scene_ui_TextArea_next_boolean)(jcontext ctx, jobject self, jbool param0);
#define VTABLE_arc_scene_ui_TextArea_findNextTextField_arc_struct_Seq_arc_scene_ui_TextField_arc_math_geom_Vec2_arc_math_geom_Vec2_boolean_R_arc_scene_ui_TextField 154
typedef jobject (*func_arc_scene_ui_TextArea_findNextTextField_arc_struct_Seq_arc_scene_ui_TextField_arc_math_geom_Vec2_arc_math_geom_Vec2_boolean_R_arc_scene_ui_TextField)(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2, jobject param3, jbool param4);
#define VTABLE_arc_scene_ui_TextArea_getDefaultInputListener_R_arc_scene_event_InputListener 155
typedef jobject (*func_arc_scene_ui_TextArea_getDefaultInputListener_R_arc_scene_event_InputListener)(jcontext ctx, jobject self);
#define VTABLE_arc_scene_ui_TextArea_setTextFieldListener_arc_scene_ui_TextField$TextFieldListener 156
typedef void (*func_arc_scene_ui_TextArea_setTextFieldListener_arc_scene_ui_TextField$TextFieldListener)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_scene_ui_TextArea_typed_char_java_lang_Runnable 157
typedef void (*func_arc_scene_ui_TextArea_typed_char_java_lang_Runnable)(jcontext ctx, jobject self, jchar param0, jobject param1);
#define VTABLE_arc_scene_ui_TextArea_typed_arc_func_Cons 158
typedef void (*func_arc_scene_ui_TextArea_typed_arc_func_Cons)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_scene_ui_TextArea_getFilter_R_arc_scene_ui_TextField$TextFieldFilter 159
typedef jobject (*func_arc_scene_ui_TextArea_getFilter_R_arc_scene_ui_TextField$TextFieldFilter)(jcontext ctx, jobject self);
#define VTABLE_arc_scene_ui_TextArea_setFilter_arc_scene_ui_TextField$TextFieldFilter 160
typedef void (*func_arc_scene_ui_TextArea_setFilter_arc_scene_ui_TextField$TextFieldFilter)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_scene_ui_TextArea_setValidator_arc_scene_ui_TextField$TextFieldValidator 161
typedef void (*func_arc_scene_ui_TextArea_setValidator_arc_scene_ui_TextField$TextFieldValidator)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_scene_ui_TextArea_getValidator_R_arc_scene_ui_TextField$TextFieldValidator 162
typedef jobject (*func_arc_scene_ui_TextArea_getValidator_R_arc_scene_ui_TextField$TextFieldValidator)(jcontext ctx, jobject self);
#define VTABLE_arc_scene_ui_TextArea_setFocusTraversal_boolean 163
typedef void (*func_arc_scene_ui_TextArea_setFocusTraversal_boolean)(jcontext ctx, jobject self, jbool param0);
#define VTABLE_arc_scene_ui_TextArea_getMessageText_R_java_lang_String 164
typedef jobject (*func_arc_scene_ui_TextArea_getMessageText_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_arc_scene_ui_TextArea_setMessageText_java_lang_String 165
typedef void (*func_arc_scene_ui_TextArea_setMessageText_java_lang_String)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_scene_ui_TextArea_appendText_java_lang_String 166
typedef void (*func_arc_scene_ui_TextArea_appendText_java_lang_String)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_scene_ui_TextArea_getText_R_java_lang_String 167
typedef jobject (*func_arc_scene_ui_TextArea_getText_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_arc_scene_ui_TextArea_setText_java_lang_String 168
typedef void (*func_arc_scene_ui_TextArea_setText_java_lang_String)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_scene_ui_TextArea_changeText_java_lang_String_java_lang_String_R_boolean 169
typedef jbool (*func_arc_scene_ui_TextArea_changeText_java_lang_String_java_lang_String_R_boolean)(jcontext ctx, jobject self, jobject param0, jobject param1);
#define VTABLE_arc_scene_ui_TextArea_getProgrammaticChangeEvents_R_boolean 170
typedef jbool (*func_arc_scene_ui_TextArea_getProgrammaticChangeEvents_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_arc_scene_ui_TextArea_setProgrammaticChangeEvents_boolean 171
typedef void (*func_arc_scene_ui_TextArea_setProgrammaticChangeEvents_boolean)(jcontext ctx, jobject self, jbool param0);
#define VTABLE_arc_scene_ui_TextArea_getSelectionStart_R_int 172
typedef jint (*func_arc_scene_ui_TextArea_getSelectionStart_R_int)(jcontext ctx, jobject self);
#define VTABLE_arc_scene_ui_TextArea_getSelection_R_java_lang_String 173
typedef jobject (*func_arc_scene_ui_TextArea_getSelection_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_arc_scene_ui_TextArea_setSelection_int_int 174
typedef void (*func_arc_scene_ui_TextArea_setSelection_int_int)(jcontext ctx, jobject self, jint param0, jint param1);
#define VTABLE_arc_scene_ui_TextArea_selectAll 175
typedef void (*func_arc_scene_ui_TextArea_selectAll)(jcontext ctx, jobject self);
#define VTABLE_arc_scene_ui_TextArea_clearSelection 176
typedef void (*func_arc_scene_ui_TextArea_clearSelection)(jcontext ctx, jobject self);
#define VTABLE_arc_scene_ui_TextArea_getCursorPosition_R_int 177
typedef jint (*func_arc_scene_ui_TextArea_getCursorPosition_R_int)(jcontext ctx, jobject self);
#define VTABLE_arc_scene_ui_TextArea_setCursorPosition_int 178
typedef void (*func_arc_scene_ui_TextArea_setCursorPosition_int)(jcontext ctx, jobject self, jint param0);
#define VTABLE_arc_scene_ui_TextArea_setAlignment_int 179
typedef void (*func_arc_scene_ui_TextArea_setAlignment_int)(jcontext ctx, jobject self, jint param0);
#define VTABLE_arc_scene_ui_TextArea_isPasswordMode_R_boolean 180
typedef jbool (*func_arc_scene_ui_TextArea_isPasswordMode_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_arc_scene_ui_TextArea_setPasswordMode_boolean 181
typedef void (*func_arc_scene_ui_TextArea_setPasswordMode_boolean)(jcontext ctx, jobject self, jbool param0);
#define VTABLE_arc_scene_ui_TextArea_setPasswordCharacter_char 182
typedef void (*func_arc_scene_ui_TextArea_setPasswordCharacter_char)(jcontext ctx, jobject self, jchar param0);
#define VTABLE_arc_scene_ui_TextArea_setBlinkTime_float 183
typedef void (*func_arc_scene_ui_TextArea_setBlinkTime_float)(jcontext ctx, jobject self, jfloat param0);
#define VTABLE_arc_scene_ui_TextArea_moveCursor_boolean_boolean 184
typedef void (*func_arc_scene_ui_TextArea_moveCursor_boolean_boolean)(jcontext ctx, jobject self, jbool param0, jbool param1);
#define VTABLE_arc_scene_ui_TextArea_continueCursor_int_int_R_boolean 185
typedef jbool (*func_arc_scene_ui_TextArea_continueCursor_int_int_R_boolean)(jcontext ctx, jobject self, jint param0, jint param1);
#define VTABLE_arc_scene_ui_TextArea_lambda$addInputDialog$0 186
typedef void (*func_arc_scene_ui_TextArea_lambda$addInputDialog$0)(jcontext ctx, jobject self);
#define VTABLE_arc_scene_ui_TextArea_lambda$addInputDialog$2 187
typedef void (*func_arc_scene_ui_TextArea_lambda$addInputDialog$2)(jcontext ctx, jobject self);
#define VTABLE_arc_scene_ui_TextArea_lambda$addInputDialog$1_java_lang_String 188
typedef void (*func_arc_scene_ui_TextArea_lambda$addInputDialog$1_java_lang_String)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_scene_ui_TextArea_setPrefRows_float 189
typedef void (*func_arc_scene_ui_TextArea_setPrefRows_float)(jcontext ctx, jobject self, jfloat param0);
#define VTABLE_arc_scene_ui_TextArea_getLines_R_int 190
typedef jint (*func_arc_scene_ui_TextArea_getLines_R_int)(jcontext ctx, jobject self);
#define VTABLE_arc_scene_ui_TextArea_newLineAtEnd_R_boolean 191
typedef jbool (*func_arc_scene_ui_TextArea_newLineAtEnd_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_arc_scene_ui_TextArea_moveCursorLine_int 192
typedef void (*func_arc_scene_ui_TextArea_moveCursorLine_int)(jcontext ctx, jobject self, jint param0);
#define VTABLE_arc_scene_ui_TextArea_updateCurrentLine 193
typedef void (*func_arc_scene_ui_TextArea_updateCurrentLine)(jcontext ctx, jobject self);
#define VTABLE_arc_scene_ui_TextArea_showCursor 194
typedef void (*func_arc_scene_ui_TextArea_showCursor)(jcontext ctx, jobject self);
#define VTABLE_arc_scene_ui_TextArea_calculateCurrentLineIndex_int_R_int 195
typedef jint (*func_arc_scene_ui_TextArea_calculateCurrentLineIndex_int_R_int)(jcontext ctx, jobject self, jint param0);
#define VTABLE_arc_scene_ui_TextArea_getCursorLine_R_int 196
typedef jint (*func_arc_scene_ui_TextArea_getCursorLine_R_int)(jcontext ctx, jobject self);
#define VTABLE_arc_scene_ui_TextArea_getFirstLineShowing_R_int 197
typedef jint (*func_arc_scene_ui_TextArea_getFirstLineShowing_R_int)(jcontext ctx, jobject self);
#define VTABLE_arc_scene_ui_TextArea_getLinesShowing_R_int 198
typedef jint (*func_arc_scene_ui_TextArea_getLinesShowing_R_int)(jcontext ctx, jobject self);
#define VTABLE_arc_scene_ui_TextArea_getCursorX_R_float 199
typedef jfloat (*func_arc_scene_ui_TextArea_getCursorX_R_float)(jcontext ctx, jobject self);
#define VTABLE_arc_scene_ui_TextArea_getCursorY_R_float 200
typedef jfloat (*func_arc_scene_ui_TextArea_getCursorY_R_float)(jcontext ctx, jobject self);

void mark_arc_scene_ui_TextArea(jobject object, jint mark, jint depth);
void clinit_arc_scene_ui_TextArea(jcontext ctx);
void init_arc_scene_ui_TextArea_java_lang_String(jcontext ctx, jobject self, jobject param0);
void init_arc_scene_ui_TextArea_java_lang_String_arc_scene_ui_TextField$TextFieldStyle(jcontext ctx, jobject self, jobject param0, jobject param1);
void M_arc_scene_ui_TextArea_initialize(jcontext ctx, jobject self);
jint M_arc_scene_ui_TextArea_letterUnderCursor_float_R_int(jcontext ctx, jobject self, jfloat param0);
void M_arc_scene_ui_TextArea_setPrefRows_float(jcontext ctx, jobject self, jfloat param0);
jfloat M_arc_scene_ui_TextArea_getPrefHeight_R_float(jcontext ctx, jobject self);
jint M_arc_scene_ui_TextArea_getLines_R_int(jcontext ctx, jobject self);
jbool M_arc_scene_ui_TextArea_newLineAtEnd_R_boolean(jcontext ctx, jobject self);
void M_arc_scene_ui_TextArea_moveCursorLine_int(jcontext ctx, jobject self, jint param0);
void M_arc_scene_ui_TextArea_updateCurrentLine(jcontext ctx, jobject self);
void M_arc_scene_ui_TextArea_showCursor(jcontext ctx, jobject self);
jint M_arc_scene_ui_TextArea_calculateCurrentLineIndex_int_R_int(jcontext ctx, jobject self, jint param0);
void M_arc_scene_ui_TextArea_sizeChanged(jcontext ctx, jobject self);
jfloat M_arc_scene_ui_TextArea_getTextY_arc_graphics_g2d_Font_arc_scene_style_Drawable_R_float(jcontext ctx, jobject self, jobject param0, jobject param1);
void M_arc_scene_ui_TextArea_drawSelection_arc_scene_style_Drawable_arc_graphics_g2d_Font_float_float(jcontext ctx, jobject self, jobject param0, jobject param1, jfloat param2, jfloat param3);
void M_arc_scene_ui_TextArea_drawText_arc_graphics_g2d_Font_float_float(jcontext ctx, jobject self, jobject param0, jfloat param1, jfloat param2);
void M_arc_scene_ui_TextArea_drawCursor_arc_scene_style_Drawable_arc_graphics_g2d_Font_float_float(jcontext ctx, jobject self, jobject param0, jobject param1, jfloat param2, jfloat param3);
void M_arc_scene_ui_TextArea_calculateOffsets(jcontext ctx, jobject self);
jobject M_arc_scene_ui_TextArea_createInputListener_R_arc_scene_event_InputListener(jcontext ctx, jobject self);
void M_arc_scene_ui_TextArea_setSelection_int_int(jcontext ctx, jobject self, jint param0, jint param1);
void M_arc_scene_ui_TextArea_moveCursor_boolean_boolean(jcontext ctx, jobject self, jbool param0, jbool param1);
jbool M_arc_scene_ui_TextArea_continueCursor_int_int_R_boolean(jcontext ctx, jobject self, jint param0, jint param1);
jint M_arc_scene_ui_TextArea_getCursorLine_R_int(jcontext ctx, jobject self);
jint M_arc_scene_ui_TextArea_getFirstLineShowing_R_int(jcontext ctx, jobject self);
jint M_arc_scene_ui_TextArea_getLinesShowing_R_int(jcontext ctx, jobject self);
jfloat M_arc_scene_ui_TextArea_getCursorX_R_float(jcontext ctx, jobject self);
jfloat M_arc_scene_ui_TextArea_getCursorY_R_float(jcontext ctx, jobject self);

#ifdef __cplusplus
}
#endif

#endif
