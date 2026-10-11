#ifndef HEADER_mindustry_ui_Bar
#define HEADER_mindustry_ui_Bar

#include "Clearwing.h"
#include "arc/scene/Element.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct mindustry_ui_Bar {
	arc_scene_Element parent;
	jref F_fraction;
	jref F_name;
	jfloat F_value;
	jfloat F_lastValue;
	jfloat F_blink;
	jfloat F_outlineRadius;
	jref F_blinkColor;
	jref F_outlineColor;
} mindustry_ui_Bar;

extern Class class_mindustry_ui_Bar;

extern jobject SF_mindustry_ui_Bar_scissor;

#define VTABLE_mindustry_ui_Bar_hashCode_R_int 0
typedef jint (*func_mindustry_ui_Bar_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_mindustry_ui_Bar_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_mindustry_ui_Bar_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_ui_Bar_clone_R_java_lang_Object 2
typedef jobject (*func_mindustry_ui_Bar_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_mindustry_ui_Bar_getClass_R_java_lang_Class 3
typedef jobject (*func_mindustry_ui_Bar_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_mindustry_ui_Bar_toString_R_java_lang_String 4
typedef jobject (*func_mindustry_ui_Bar_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_mindustry_ui_Bar_finalize 5
typedef void (*func_mindustry_ui_Bar_finalize)(jcontext ctx, jobject self);
#define VTABLE_mindustry_ui_Bar_notify 6
typedef void (*func_mindustry_ui_Bar_notify)(jcontext ctx, jobject self);
#define VTABLE_mindustry_ui_Bar_notifyAll 7
typedef void (*func_mindustry_ui_Bar_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_mindustry_ui_Bar_wait 8
typedef void (*func_mindustry_ui_Bar_wait)(jcontext ctx, jobject self);
#define VTABLE_mindustry_ui_Bar_wait_long 9
typedef void (*func_mindustry_ui_Bar_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_mindustry_ui_Bar_wait_long_int 10
typedef void (*func_mindustry_ui_Bar_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);
#define VTABLE_mindustry_ui_Bar_draw 11
typedef void (*func_mindustry_ui_Bar_draw)(jcontext ctx, jobject self);
#define VTABLE_mindustry_ui_Bar_act_float 12
typedef void (*func_mindustry_ui_Bar_act_float)(jcontext ctx, jobject self, jfloat param0);
#define VTABLE_mindustry_ui_Bar_updateVisibility 13
typedef void (*func_mindustry_ui_Bar_updateVisibility)(jcontext ctx, jobject self);
#define VTABLE_mindustry_ui_Bar_hasMouse_R_boolean 14
typedef jbool (*func_mindustry_ui_Bar_hasMouse_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_mindustry_ui_Bar_hasKeyboard_R_boolean 15
typedef jbool (*func_mindustry_ui_Bar_hasKeyboard_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_mindustry_ui_Bar_hasScroll_R_boolean 16
typedef jbool (*func_mindustry_ui_Bar_hasScroll_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_mindustry_ui_Bar_requestKeyboard 17
typedef void (*func_mindustry_ui_Bar_requestKeyboard)(jcontext ctx, jobject self);
#define VTABLE_mindustry_ui_Bar_requestScroll 18
typedef void (*func_mindustry_ui_Bar_requestScroll)(jcontext ctx, jobject self);
#define VTABLE_mindustry_ui_Bar_fire_arc_scene_event_SceneEvent_R_boolean 19
typedef jbool (*func_mindustry_ui_Bar_fire_arc_scene_event_SceneEvent_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_ui_Bar_notify_arc_scene_event_SceneEvent_boolean_R_boolean 20
typedef jbool (*func_mindustry_ui_Bar_notify_arc_scene_event_SceneEvent_boolean_R_boolean)(jcontext ctx, jobject self, jobject param0, jbool param1);
#define VTABLE_mindustry_ui_Bar_hit_float_float_boolean_R_arc_scene_Element 21
typedef jobject (*func_mindustry_ui_Bar_hit_float_float_boolean_R_arc_scene_Element)(jcontext ctx, jobject self, jfloat param0, jfloat param1, jbool param2);
#define VTABLE_mindustry_ui_Bar_remove_R_boolean 22
typedef jbool (*func_mindustry_ui_Bar_remove_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_mindustry_ui_Bar_dragged_arc_func_Floatc2 23
typedef void (*func_mindustry_ui_Bar_dragged_arc_func_Floatc2)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_ui_Bar_scrolled_arc_func_Floatc 24
typedef void (*func_mindustry_ui_Bar_scrolled_arc_func_Floatc)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_ui_Bar_addListener_arc_scene_event_EventListener_R_boolean 25
typedef jbool (*func_mindustry_ui_Bar_addListener_arc_scene_event_EventListener_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_ui_Bar_removeListener_arc_scene_event_EventListener_R_boolean 26
typedef jbool (*func_mindustry_ui_Bar_removeListener_arc_scene_event_EventListener_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_ui_Bar_getListeners_R_arc_struct_Seq 27
typedef jobject (*func_mindustry_ui_Bar_getListeners_R_arc_struct_Seq)(jcontext ctx, jobject self);
#define VTABLE_mindustry_ui_Bar_addCaptureListener_arc_scene_event_EventListener_R_boolean 28
typedef jbool (*func_mindustry_ui_Bar_addCaptureListener_arc_scene_event_EventListener_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_ui_Bar_removeCaptureListener_arc_scene_event_EventListener_R_boolean 29
typedef jbool (*func_mindustry_ui_Bar_removeCaptureListener_arc_scene_event_EventListener_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_ui_Bar_getCaptureListeners_R_arc_struct_Seq 30
typedef jobject (*func_mindustry_ui_Bar_getCaptureListeners_R_arc_struct_Seq)(jcontext ctx, jobject self);
#define VTABLE_mindustry_ui_Bar_addAction_arc_scene_Action 31
typedef void (*func_mindustry_ui_Bar_addAction_arc_scene_Action)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_ui_Bar_actions_Array1_arc_scene_Action 32
typedef void (*func_mindustry_ui_Bar_actions_Array1_arc_scene_Action)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_ui_Bar_removeAction_arc_scene_Action 33
typedef void (*func_mindustry_ui_Bar_removeAction_arc_scene_Action)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_ui_Bar_getActions_R_arc_struct_Seq 34
typedef jobject (*func_mindustry_ui_Bar_getActions_R_arc_struct_Seq)(jcontext ctx, jobject self);
#define VTABLE_mindustry_ui_Bar_hasActions_R_boolean 35
typedef jbool (*func_mindustry_ui_Bar_hasActions_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_mindustry_ui_Bar_clearActions 36
typedef void (*func_mindustry_ui_Bar_clearActions)(jcontext ctx, jobject self);
#define VTABLE_mindustry_ui_Bar_clearListeners 37
typedef void (*func_mindustry_ui_Bar_clearListeners)(jcontext ctx, jobject self);
#define VTABLE_mindustry_ui_Bar_clear 38
typedef void (*func_mindustry_ui_Bar_clear)(jcontext ctx, jobject self);
#define VTABLE_mindustry_ui_Bar_getScene_R_arc_scene_Scene 39
typedef jobject (*func_mindustry_ui_Bar_getScene_R_arc_scene_Scene)(jcontext ctx, jobject self);
#define VTABLE_mindustry_ui_Bar_setScene_arc_scene_Scene 40
typedef void (*func_mindustry_ui_Bar_setScene_arc_scene_Scene)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_ui_Bar_isDescendantOf_arc_func_Boolf_R_boolean 41
typedef jbool (*func_mindustry_ui_Bar_isDescendantOf_arc_func_Boolf_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_ui_Bar_isDescendantOf_arc_scene_Element_R_boolean 42
typedef jbool (*func_mindustry_ui_Bar_isDescendantOf_arc_scene_Element_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_ui_Bar_isAscendantOf_arc_scene_Element_R_boolean 43
typedef jbool (*func_mindustry_ui_Bar_isAscendantOf_arc_scene_Element_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_ui_Bar_hasParent_R_boolean 44
typedef jbool (*func_mindustry_ui_Bar_hasParent_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_mindustry_ui_Bar_isTouchable_R_boolean 45
typedef jbool (*func_mindustry_ui_Bar_isTouchable_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_mindustry_ui_Bar_getX_int_R_float 46
typedef jfloat (*func_mindustry_ui_Bar_getX_int_R_float)(jcontext ctx, jobject self, jint param0);
#define VTABLE_mindustry_ui_Bar_getY_int_R_float 47
typedef jfloat (*func_mindustry_ui_Bar_getY_int_R_float)(jcontext ctx, jobject self, jint param0);
#define VTABLE_mindustry_ui_Bar_setPosition_float_float 48
typedef void (*func_mindustry_ui_Bar_setPosition_float_float)(jcontext ctx, jobject self, jfloat param0, jfloat param1);
#define VTABLE_mindustry_ui_Bar_setPosition_float_float_int 49
typedef void (*func_mindustry_ui_Bar_setPosition_float_float_int)(jcontext ctx, jobject self, jfloat param0, jfloat param1, jint param2);
#define VTABLE_mindustry_ui_Bar_moveBy_float_float 50
typedef void (*func_mindustry_ui_Bar_moveBy_float_float)(jcontext ctx, jobject self, jfloat param0, jfloat param1);
#define VTABLE_mindustry_ui_Bar_getWidth_R_float 51
typedef jfloat (*func_mindustry_ui_Bar_getWidth_R_float)(jcontext ctx, jobject self);
#define VTABLE_mindustry_ui_Bar_setWidth_float 52
typedef void (*func_mindustry_ui_Bar_setWidth_float)(jcontext ctx, jobject self, jfloat param0);
#define VTABLE_mindustry_ui_Bar_getHeight_R_float 53
typedef jfloat (*func_mindustry_ui_Bar_getHeight_R_float)(jcontext ctx, jobject self);
#define VTABLE_mindustry_ui_Bar_setHeight_float 54
typedef void (*func_mindustry_ui_Bar_setHeight_float)(jcontext ctx, jobject self, jfloat param0);
#define VTABLE_mindustry_ui_Bar_getTop_R_float 55
typedef jfloat (*func_mindustry_ui_Bar_getTop_R_float)(jcontext ctx, jobject self);
#define VTABLE_mindustry_ui_Bar_getRight_R_float 56
typedef jfloat (*func_mindustry_ui_Bar_getRight_R_float)(jcontext ctx, jobject self);
#define VTABLE_mindustry_ui_Bar_sizeChanged 57
typedef void (*func_mindustry_ui_Bar_sizeChanged)(jcontext ctx, jobject self);
#define VTABLE_mindustry_ui_Bar_rotationChanged 58
typedef void (*func_mindustry_ui_Bar_rotationChanged)(jcontext ctx, jobject self);
#define VTABLE_mindustry_ui_Bar_setSize_float 59
typedef void (*func_mindustry_ui_Bar_setSize_float)(jcontext ctx, jobject self, jfloat param0);
#define VTABLE_mindustry_ui_Bar_setSize_float_float 60
typedef void (*func_mindustry_ui_Bar_setSize_float_float)(jcontext ctx, jobject self, jfloat param0, jfloat param1);
#define VTABLE_mindustry_ui_Bar_sizeBy_float 61
typedef void (*func_mindustry_ui_Bar_sizeBy_float)(jcontext ctx, jobject self, jfloat param0);
#define VTABLE_mindustry_ui_Bar_sizeBy_float_float 62
typedef void (*func_mindustry_ui_Bar_sizeBy_float_float)(jcontext ctx, jobject self, jfloat param0, jfloat param1);
#define VTABLE_mindustry_ui_Bar_setBounds_float_float_float_float 63
typedef void (*func_mindustry_ui_Bar_setBounds_float_float_float_float)(jcontext ctx, jobject self, jfloat param0, jfloat param1, jfloat param2, jfloat param3);
#define VTABLE_mindustry_ui_Bar_setOrigin_float_float 64
typedef void (*func_mindustry_ui_Bar_setOrigin_float_float)(jcontext ctx, jobject self, jfloat param0, jfloat param1);
#define VTABLE_mindustry_ui_Bar_setOrigin_int 65
typedef void (*func_mindustry_ui_Bar_setOrigin_int)(jcontext ctx, jobject self, jint param0);
#define VTABLE_mindustry_ui_Bar_setScale_float 66
typedef void (*func_mindustry_ui_Bar_setScale_float)(jcontext ctx, jobject self, jfloat param0);
#define VTABLE_mindustry_ui_Bar_setScale_float_float 67
typedef void (*func_mindustry_ui_Bar_setScale_float_float)(jcontext ctx, jobject self, jfloat param0, jfloat param1);
#define VTABLE_mindustry_ui_Bar_scaleBy_float 68
typedef void (*func_mindustry_ui_Bar_scaleBy_float)(jcontext ctx, jobject self, jfloat param0);
#define VTABLE_mindustry_ui_Bar_scaleBy_float_float 69
typedef void (*func_mindustry_ui_Bar_scaleBy_float_float)(jcontext ctx, jobject self, jfloat param0, jfloat param1);
#define VTABLE_mindustry_ui_Bar_getRotation_R_float 70
typedef jfloat (*func_mindustry_ui_Bar_getRotation_R_float)(jcontext ctx, jobject self);
#define VTABLE_mindustry_ui_Bar_setRotation_float 71
typedef void (*func_mindustry_ui_Bar_setRotation_float)(jcontext ctx, jobject self, jfloat param0);
#define VTABLE_mindustry_ui_Bar_setRotationOrigin_float_int 72
typedef void (*func_mindustry_ui_Bar_setRotationOrigin_float_int)(jcontext ctx, jobject self, jfloat param0, jint param1);
#define VTABLE_mindustry_ui_Bar_rotateBy_float 73
typedef void (*func_mindustry_ui_Bar_rotateBy_float)(jcontext ctx, jobject self, jfloat param0);
#define VTABLE_mindustry_ui_Bar_setColor_float_float_float_float 74
typedef void (*func_mindustry_ui_Bar_setColor_float_float_float_float)(jcontext ctx, jobject self, jfloat param0, jfloat param1, jfloat param2, jfloat param3);
#define VTABLE_mindustry_ui_Bar_setColor_arc_graphics_Color 75
typedef void (*func_mindustry_ui_Bar_setColor_arc_graphics_Color)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_ui_Bar_toFront 76
typedef void (*func_mindustry_ui_Bar_toFront)(jcontext ctx, jobject self);
#define VTABLE_mindustry_ui_Bar_toBack 77
typedef void (*func_mindustry_ui_Bar_toBack)(jcontext ctx, jobject self);
#define VTABLE_mindustry_ui_Bar_getZIndex_R_int 78
typedef jint (*func_mindustry_ui_Bar_getZIndex_R_int)(jcontext ctx, jobject self);
#define VTABLE_mindustry_ui_Bar_setZIndex_int 79
typedef void (*func_mindustry_ui_Bar_setZIndex_int)(jcontext ctx, jobject self, jint param0);
#define VTABLE_mindustry_ui_Bar_clipBegin_R_boolean 80
typedef jbool (*func_mindustry_ui_Bar_clipBegin_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_mindustry_ui_Bar_clipBegin_float_float_float_float_R_boolean 81
typedef jbool (*func_mindustry_ui_Bar_clipBegin_float_float_float_float_R_boolean)(jcontext ctx, jobject self, jfloat param0, jfloat param1, jfloat param2, jfloat param3);
#define VTABLE_mindustry_ui_Bar_clipEnd 82
typedef void (*func_mindustry_ui_Bar_clipEnd)(jcontext ctx, jobject self);
#define VTABLE_mindustry_ui_Bar_screenToLocalCoordinates_arc_math_geom_Vec2_R_arc_math_geom_Vec2 83
typedef jobject (*func_mindustry_ui_Bar_screenToLocalCoordinates_arc_math_geom_Vec2_R_arc_math_geom_Vec2)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_ui_Bar_stageToLocalCoordinates_arc_math_geom_Vec2_R_arc_math_geom_Vec2 84
typedef jobject (*func_mindustry_ui_Bar_stageToLocalCoordinates_arc_math_geom_Vec2_R_arc_math_geom_Vec2)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_ui_Bar_localToStageCoordinates_arc_math_geom_Vec2_R_arc_math_geom_Vec2 85
typedef jobject (*func_mindustry_ui_Bar_localToStageCoordinates_arc_math_geom_Vec2_R_arc_math_geom_Vec2)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_ui_Bar_localToParentCoordinates_arc_math_geom_Vec2_R_arc_math_geom_Vec2 86
typedef jobject (*func_mindustry_ui_Bar_localToParentCoordinates_arc_math_geom_Vec2_R_arc_math_geom_Vec2)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_ui_Bar_localToAscendantCoordinates_arc_scene_Element_arc_math_geom_Vec2_R_arc_math_geom_Vec2 87
typedef jobject (*func_mindustry_ui_Bar_localToAscendantCoordinates_arc_scene_Element_arc_math_geom_Vec2_R_arc_math_geom_Vec2)(jcontext ctx, jobject self, jobject param0, jobject param1);
#define VTABLE_mindustry_ui_Bar_parentToLocalCoordinates_arc_math_geom_Vec2_R_arc_math_geom_Vec2 88
typedef jobject (*func_mindustry_ui_Bar_parentToLocalCoordinates_arc_math_geom_Vec2_R_arc_math_geom_Vec2)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_ui_Bar_getMinWidth_R_float 89
typedef jfloat (*func_mindustry_ui_Bar_getMinWidth_R_float)(jcontext ctx, jobject self);
#define VTABLE_mindustry_ui_Bar_getMinHeight_R_float 90
typedef jfloat (*func_mindustry_ui_Bar_getMinHeight_R_float)(jcontext ctx, jobject self);
#define VTABLE_mindustry_ui_Bar_getPrefWidth_R_float 91
typedef jfloat (*func_mindustry_ui_Bar_getPrefWidth_R_float)(jcontext ctx, jobject self);
#define VTABLE_mindustry_ui_Bar_getPrefHeight_R_float 92
typedef jfloat (*func_mindustry_ui_Bar_getPrefHeight_R_float)(jcontext ctx, jobject self);
#define VTABLE_mindustry_ui_Bar_getMaxWidth_R_float 93
typedef jfloat (*func_mindustry_ui_Bar_getMaxWidth_R_float)(jcontext ctx, jobject self);
#define VTABLE_mindustry_ui_Bar_getMaxHeight_R_float 94
typedef jfloat (*func_mindustry_ui_Bar_getMaxHeight_R_float)(jcontext ctx, jobject self);
#define VTABLE_mindustry_ui_Bar_setLayoutEnabled_boolean 95
typedef void (*func_mindustry_ui_Bar_setLayoutEnabled_boolean)(jcontext ctx, jobject self, jbool param0);
#define VTABLE_mindustry_ui_Bar_validate 96
typedef void (*func_mindustry_ui_Bar_validate)(jcontext ctx, jobject self);
#define VTABLE_mindustry_ui_Bar_needsLayout_R_boolean 97
typedef jbool (*func_mindustry_ui_Bar_needsLayout_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_mindustry_ui_Bar_invalidate 98
typedef void (*func_mindustry_ui_Bar_invalidate)(jcontext ctx, jobject self);
#define VTABLE_mindustry_ui_Bar_invalidateHierarchy 99
typedef void (*func_mindustry_ui_Bar_invalidateHierarchy)(jcontext ctx, jobject self);
#define VTABLE_mindustry_ui_Bar_pack 100
typedef void (*func_mindustry_ui_Bar_pack)(jcontext ctx, jobject self);
#define VTABLE_mindustry_ui_Bar_setFillParent_boolean 101
typedef void (*func_mindustry_ui_Bar_setFillParent_boolean)(jcontext ctx, jobject self, jbool param0);
#define VTABLE_mindustry_ui_Bar_layout 102
typedef void (*func_mindustry_ui_Bar_layout)(jcontext ctx, jobject self);
#define VTABLE_mindustry_ui_Bar_keepInStage 103
typedef void (*func_mindustry_ui_Bar_keepInStage)(jcontext ctx, jobject self);
#define VTABLE_mindustry_ui_Bar_setTranslation_float_float 104
typedef void (*func_mindustry_ui_Bar_setTranslation_float_float)(jcontext ctx, jobject self, jfloat param0, jfloat param1);
#define VTABLE_mindustry_ui_Bar_keyDown_arc_input_KeyCode_java_lang_Runnable 105
typedef void (*func_mindustry_ui_Bar_keyDown_arc_input_KeyCode_java_lang_Runnable)(jcontext ctx, jobject self, jobject param0, jobject param1);
#define VTABLE_mindustry_ui_Bar_keyDown_arc_func_Cons 106
typedef void (*func_mindustry_ui_Bar_keyDown_arc_func_Cons)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_ui_Bar_fireClick 107
typedef void (*func_mindustry_ui_Bar_fireClick)(jcontext ctx, jobject self);
#define VTABLE_mindustry_ui_Bar_clicked_java_lang_Runnable_R_arc_scene_event_ClickListener 108
typedef jobject (*func_mindustry_ui_Bar_clicked_java_lang_Runnable_R_arc_scene_event_ClickListener)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_ui_Bar_clicked_arc_input_KeyCode_java_lang_Runnable_R_arc_scene_event_ClickListener 109
typedef jobject (*func_mindustry_ui_Bar_clicked_arc_input_KeyCode_java_lang_Runnable_R_arc_scene_event_ClickListener)(jcontext ctx, jobject self, jobject param0, jobject param1);
#define VTABLE_mindustry_ui_Bar_clicked_arc_func_Cons_java_lang_Runnable_R_arc_scene_event_ClickListener 110
typedef jobject (*func_mindustry_ui_Bar_clicked_arc_func_Cons_java_lang_Runnable_R_arc_scene_event_ClickListener)(jcontext ctx, jobject self, jobject param0, jobject param1);
#define VTABLE_mindustry_ui_Bar_clicked_arc_func_Cons_arc_func_Cons_R_arc_scene_event_ClickListener 111
typedef jobject (*func_mindustry_ui_Bar_clicked_arc_func_Cons_arc_func_Cons_R_arc_scene_event_ClickListener)(jcontext ctx, jobject self, jobject param0, jobject param1);
#define VTABLE_mindustry_ui_Bar_tapped_java_lang_Runnable_R_arc_scene_event_InputListener 112
typedef jobject (*func_mindustry_ui_Bar_tapped_java_lang_Runnable_R_arc_scene_event_InputListener)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_ui_Bar_hovered_java_lang_Runnable 113
typedef void (*func_mindustry_ui_Bar_hovered_java_lang_Runnable)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_ui_Bar_exited_java_lang_Runnable 114
typedef void (*func_mindustry_ui_Bar_exited_java_lang_Runnable)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_ui_Bar_released_java_lang_Runnable 115
typedef void (*func_mindustry_ui_Bar_released_java_lang_Runnable)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_ui_Bar_change 116
typedef void (*func_mindustry_ui_Bar_change)(jcontext ctx, jobject self);
#define VTABLE_mindustry_ui_Bar_changed_java_lang_Runnable 117
typedef void (*func_mindustry_ui_Bar_changed_java_lang_Runnable)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_ui_Bar_update_java_lang_Runnable_R_arc_scene_Element 118
typedef jobject (*func_mindustry_ui_Bar_update_java_lang_Runnable_R_arc_scene_Element)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_ui_Bar_visible_arc_func_Boolp_R_arc_scene_Element 119
typedef jobject (*func_mindustry_ui_Bar_visible_arc_func_Boolp_R_arc_scene_Element)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_ui_Bar_touchable_arc_func_Prov 120
typedef void (*func_mindustry_ui_Bar_touchable_arc_func_Prov)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_ui_Bar_reset_float 121
typedef void (*func_mindustry_ui_Bar_reset_float)(jcontext ctx, jobject self, jfloat param0);
#define VTABLE_mindustry_ui_Bar_set_arc_func_Prov_arc_func_Floatp_arc_graphics_Color 122
typedef void (*func_mindustry_ui_Bar_set_arc_func_Prov_arc_func_Floatp_arc_graphics_Color)(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2);
#define VTABLE_mindustry_ui_Bar_snap 123
typedef void (*func_mindustry_ui_Bar_snap)(jcontext ctx, jobject self);
#define VTABLE_mindustry_ui_Bar_outline_arc_graphics_Color_float_R_mindustry_ui_Bar 124
typedef jobject (*func_mindustry_ui_Bar_outline_arc_graphics_Color_float_R_mindustry_ui_Bar)(jcontext ctx, jobject self, jobject param0, jfloat param1);
#define VTABLE_mindustry_ui_Bar_flash 125
typedef void (*func_mindustry_ui_Bar_flash)(jcontext ctx, jobject self);
#define VTABLE_mindustry_ui_Bar_blink_arc_graphics_Color_R_mindustry_ui_Bar 126
typedef jobject (*func_mindustry_ui_Bar_blink_arc_graphics_Color_R_mindustry_ui_Bar)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_ui_Bar_lambda$set$0_arc_func_Prov 127
typedef void (*func_mindustry_ui_Bar_lambda$set$0_arc_func_Prov)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_ui_Bar_lambda$new$0_arc_func_Prov_arc_func_Prov 128
typedef void (*func_mindustry_ui_Bar_lambda$new$0_arc_func_Prov_arc_func_Prov)(jcontext ctx, jobject self, jobject param0, jobject param1);

void mark_mindustry_ui_Bar(jobject object, jint mark, jint depth);
void clinit_mindustry_ui_Bar(jcontext ctx);
void init_mindustry_ui_Bar_java_lang_String_arc_graphics_Color_arc_func_Floatp(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2);
void init_mindustry_ui_Bar_arc_func_Prov_arc_func_Prov_arc_func_Floatp(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2);
void init_mindustry_ui_Bar(jcontext ctx, jobject self);
void M_mindustry_ui_Bar_reset_float(jcontext ctx, jobject self, jfloat param0);
void M_mindustry_ui_Bar_set_arc_func_Prov_arc_func_Floatp_arc_graphics_Color(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2);
void M_mindustry_ui_Bar_snap(jcontext ctx, jobject self);
jobject M_mindustry_ui_Bar_outline_arc_graphics_Color_float_R_mindustry_ui_Bar(jcontext ctx, jobject self, jobject param0, jfloat param1);
void M_mindustry_ui_Bar_flash(jcontext ctx, jobject self);
jobject M_mindustry_ui_Bar_blink_arc_graphics_Color_R_mindustry_ui_Bar(jcontext ctx, jobject self, jobject param0);
void M_mindustry_ui_Bar_draw(jcontext ctx, jobject self);
void M_mindustry_ui_Bar_lambda$set$0_arc_func_Prov(jcontext ctx, jobject self, jobject param0);
void M_mindustry_ui_Bar_lambda$new$0_arc_func_Prov_arc_func_Prov(jcontext ctx, jobject self, jobject param0, jobject param1);

#ifdef __cplusplus
}
#endif

#endif
