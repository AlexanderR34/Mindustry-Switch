#ifndef HEADER_arc_scene_ui_Label
#define HEADER_arc_scene_ui_Label

#include "Clearwing.h"
#include "arc/scene/Element.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct arc_scene_ui_Label {
	arc_scene_Element parent;
	jref F_layout;
	jref F_prefSize;
	jref F_text;
	jref F_style;
	jref F_cache;
	jint F_labelAlign;
	jint F_lineAlign;
	jbool F_wrap;
	jbool F_wrapFit;
	jfloat F_lastPrefHeight;
	jbool F_prefSizeInvalid;
	jfloat F_fontScaleX;
	jfloat F_fontScaleY;
	jbool F_fontScaleChanged;
	jref F_ellipsis;
} arc_scene_ui_Label;

extern Class class_arc_scene_ui_Label;

extern jobject SF_arc_scene_ui_Label_tempColor;
extern jobject SF_arc_scene_ui_Label_prefSizeLayout;

#define VTABLE_arc_scene_ui_Label_hashCode_R_int 0
typedef jint (*func_arc_scene_ui_Label_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_arc_scene_ui_Label_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_arc_scene_ui_Label_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_scene_ui_Label_clone_R_java_lang_Object 2
typedef jobject (*func_arc_scene_ui_Label_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_arc_scene_ui_Label_getClass_R_java_lang_Class 3
typedef jobject (*func_arc_scene_ui_Label_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_arc_scene_ui_Label_toString_R_java_lang_String 4
typedef jobject (*func_arc_scene_ui_Label_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_arc_scene_ui_Label_finalize 5
typedef void (*func_arc_scene_ui_Label_finalize)(jcontext ctx, jobject self);
#define VTABLE_arc_scene_ui_Label_notify 6
typedef void (*func_arc_scene_ui_Label_notify)(jcontext ctx, jobject self);
#define VTABLE_arc_scene_ui_Label_notifyAll 7
typedef void (*func_arc_scene_ui_Label_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_arc_scene_ui_Label_wait 8
typedef void (*func_arc_scene_ui_Label_wait)(jcontext ctx, jobject self);
#define VTABLE_arc_scene_ui_Label_wait_long 9
typedef void (*func_arc_scene_ui_Label_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_arc_scene_ui_Label_wait_long_int 10
typedef void (*func_arc_scene_ui_Label_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);
#define VTABLE_arc_scene_ui_Label_draw 11
typedef void (*func_arc_scene_ui_Label_draw)(jcontext ctx, jobject self);
#define VTABLE_arc_scene_ui_Label_act_float 12
typedef void (*func_arc_scene_ui_Label_act_float)(jcontext ctx, jobject self, jfloat param0);
#define VTABLE_arc_scene_ui_Label_updateVisibility 13
typedef void (*func_arc_scene_ui_Label_updateVisibility)(jcontext ctx, jobject self);
#define VTABLE_arc_scene_ui_Label_hasMouse_R_boolean 14
typedef jbool (*func_arc_scene_ui_Label_hasMouse_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_arc_scene_ui_Label_hasKeyboard_R_boolean 15
typedef jbool (*func_arc_scene_ui_Label_hasKeyboard_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_arc_scene_ui_Label_hasScroll_R_boolean 16
typedef jbool (*func_arc_scene_ui_Label_hasScroll_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_arc_scene_ui_Label_requestKeyboard 17
typedef void (*func_arc_scene_ui_Label_requestKeyboard)(jcontext ctx, jobject self);
#define VTABLE_arc_scene_ui_Label_requestScroll 18
typedef void (*func_arc_scene_ui_Label_requestScroll)(jcontext ctx, jobject self);
#define VTABLE_arc_scene_ui_Label_fire_arc_scene_event_SceneEvent_R_boolean 19
typedef jbool (*func_arc_scene_ui_Label_fire_arc_scene_event_SceneEvent_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_scene_ui_Label_notify_arc_scene_event_SceneEvent_boolean_R_boolean 20
typedef jbool (*func_arc_scene_ui_Label_notify_arc_scene_event_SceneEvent_boolean_R_boolean)(jcontext ctx, jobject self, jobject param0, jbool param1);
#define VTABLE_arc_scene_ui_Label_hit_float_float_boolean_R_arc_scene_Element 21
typedef jobject (*func_arc_scene_ui_Label_hit_float_float_boolean_R_arc_scene_Element)(jcontext ctx, jobject self, jfloat param0, jfloat param1, jbool param2);
#define VTABLE_arc_scene_ui_Label_remove_R_boolean 22
typedef jbool (*func_arc_scene_ui_Label_remove_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_arc_scene_ui_Label_dragged_arc_func_Floatc2 23
typedef void (*func_arc_scene_ui_Label_dragged_arc_func_Floatc2)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_scene_ui_Label_scrolled_arc_func_Floatc 24
typedef void (*func_arc_scene_ui_Label_scrolled_arc_func_Floatc)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_scene_ui_Label_addListener_arc_scene_event_EventListener_R_boolean 25
typedef jbool (*func_arc_scene_ui_Label_addListener_arc_scene_event_EventListener_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_scene_ui_Label_removeListener_arc_scene_event_EventListener_R_boolean 26
typedef jbool (*func_arc_scene_ui_Label_removeListener_arc_scene_event_EventListener_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_scene_ui_Label_getListeners_R_arc_struct_Seq 27
typedef jobject (*func_arc_scene_ui_Label_getListeners_R_arc_struct_Seq)(jcontext ctx, jobject self);
#define VTABLE_arc_scene_ui_Label_addCaptureListener_arc_scene_event_EventListener_R_boolean 28
typedef jbool (*func_arc_scene_ui_Label_addCaptureListener_arc_scene_event_EventListener_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_scene_ui_Label_removeCaptureListener_arc_scene_event_EventListener_R_boolean 29
typedef jbool (*func_arc_scene_ui_Label_removeCaptureListener_arc_scene_event_EventListener_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_scene_ui_Label_getCaptureListeners_R_arc_struct_Seq 30
typedef jobject (*func_arc_scene_ui_Label_getCaptureListeners_R_arc_struct_Seq)(jcontext ctx, jobject self);
#define VTABLE_arc_scene_ui_Label_addAction_arc_scene_Action 31
typedef void (*func_arc_scene_ui_Label_addAction_arc_scene_Action)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_scene_ui_Label_actions_Array1_arc_scene_Action 32
typedef void (*func_arc_scene_ui_Label_actions_Array1_arc_scene_Action)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_scene_ui_Label_removeAction_arc_scene_Action 33
typedef void (*func_arc_scene_ui_Label_removeAction_arc_scene_Action)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_scene_ui_Label_getActions_R_arc_struct_Seq 34
typedef jobject (*func_arc_scene_ui_Label_getActions_R_arc_struct_Seq)(jcontext ctx, jobject self);
#define VTABLE_arc_scene_ui_Label_hasActions_R_boolean 35
typedef jbool (*func_arc_scene_ui_Label_hasActions_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_arc_scene_ui_Label_clearActions 36
typedef void (*func_arc_scene_ui_Label_clearActions)(jcontext ctx, jobject self);
#define VTABLE_arc_scene_ui_Label_clearListeners 37
typedef void (*func_arc_scene_ui_Label_clearListeners)(jcontext ctx, jobject self);
#define VTABLE_arc_scene_ui_Label_clear 38
typedef void (*func_arc_scene_ui_Label_clear)(jcontext ctx, jobject self);
#define VTABLE_arc_scene_ui_Label_getScene_R_arc_scene_Scene 39
typedef jobject (*func_arc_scene_ui_Label_getScene_R_arc_scene_Scene)(jcontext ctx, jobject self);
#define VTABLE_arc_scene_ui_Label_setScene_arc_scene_Scene 40
typedef void (*func_arc_scene_ui_Label_setScene_arc_scene_Scene)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_scene_ui_Label_isDescendantOf_arc_func_Boolf_R_boolean 41
typedef jbool (*func_arc_scene_ui_Label_isDescendantOf_arc_func_Boolf_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_scene_ui_Label_isDescendantOf_arc_scene_Element_R_boolean 42
typedef jbool (*func_arc_scene_ui_Label_isDescendantOf_arc_scene_Element_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_scene_ui_Label_isAscendantOf_arc_scene_Element_R_boolean 43
typedef jbool (*func_arc_scene_ui_Label_isAscendantOf_arc_scene_Element_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_scene_ui_Label_hasParent_R_boolean 44
typedef jbool (*func_arc_scene_ui_Label_hasParent_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_arc_scene_ui_Label_isTouchable_R_boolean 45
typedef jbool (*func_arc_scene_ui_Label_isTouchable_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_arc_scene_ui_Label_getX_int_R_float 46
typedef jfloat (*func_arc_scene_ui_Label_getX_int_R_float)(jcontext ctx, jobject self, jint param0);
#define VTABLE_arc_scene_ui_Label_getY_int_R_float 47
typedef jfloat (*func_arc_scene_ui_Label_getY_int_R_float)(jcontext ctx, jobject self, jint param0);
#define VTABLE_arc_scene_ui_Label_setPosition_float_float 48
typedef void (*func_arc_scene_ui_Label_setPosition_float_float)(jcontext ctx, jobject self, jfloat param0, jfloat param1);
#define VTABLE_arc_scene_ui_Label_setPosition_float_float_int 49
typedef void (*func_arc_scene_ui_Label_setPosition_float_float_int)(jcontext ctx, jobject self, jfloat param0, jfloat param1, jint param2);
#define VTABLE_arc_scene_ui_Label_moveBy_float_float 50
typedef void (*func_arc_scene_ui_Label_moveBy_float_float)(jcontext ctx, jobject self, jfloat param0, jfloat param1);
#define VTABLE_arc_scene_ui_Label_getWidth_R_float 51
typedef jfloat (*func_arc_scene_ui_Label_getWidth_R_float)(jcontext ctx, jobject self);
#define VTABLE_arc_scene_ui_Label_setWidth_float 52
typedef void (*func_arc_scene_ui_Label_setWidth_float)(jcontext ctx, jobject self, jfloat param0);
#define VTABLE_arc_scene_ui_Label_getHeight_R_float 53
typedef jfloat (*func_arc_scene_ui_Label_getHeight_R_float)(jcontext ctx, jobject self);
#define VTABLE_arc_scene_ui_Label_setHeight_float 54
typedef void (*func_arc_scene_ui_Label_setHeight_float)(jcontext ctx, jobject self, jfloat param0);
#define VTABLE_arc_scene_ui_Label_getTop_R_float 55
typedef jfloat (*func_arc_scene_ui_Label_getTop_R_float)(jcontext ctx, jobject self);
#define VTABLE_arc_scene_ui_Label_getRight_R_float 56
typedef jfloat (*func_arc_scene_ui_Label_getRight_R_float)(jcontext ctx, jobject self);
#define VTABLE_arc_scene_ui_Label_sizeChanged 57
typedef void (*func_arc_scene_ui_Label_sizeChanged)(jcontext ctx, jobject self);
#define VTABLE_arc_scene_ui_Label_rotationChanged 58
typedef void (*func_arc_scene_ui_Label_rotationChanged)(jcontext ctx, jobject self);
#define VTABLE_arc_scene_ui_Label_setSize_float 59
typedef void (*func_arc_scene_ui_Label_setSize_float)(jcontext ctx, jobject self, jfloat param0);
#define VTABLE_arc_scene_ui_Label_setSize_float_float 60
typedef void (*func_arc_scene_ui_Label_setSize_float_float)(jcontext ctx, jobject self, jfloat param0, jfloat param1);
#define VTABLE_arc_scene_ui_Label_sizeBy_float 61
typedef void (*func_arc_scene_ui_Label_sizeBy_float)(jcontext ctx, jobject self, jfloat param0);
#define VTABLE_arc_scene_ui_Label_sizeBy_float_float 62
typedef void (*func_arc_scene_ui_Label_sizeBy_float_float)(jcontext ctx, jobject self, jfloat param0, jfloat param1);
#define VTABLE_arc_scene_ui_Label_setBounds_float_float_float_float 63
typedef void (*func_arc_scene_ui_Label_setBounds_float_float_float_float)(jcontext ctx, jobject self, jfloat param0, jfloat param1, jfloat param2, jfloat param3);
#define VTABLE_arc_scene_ui_Label_setOrigin_float_float 64
typedef void (*func_arc_scene_ui_Label_setOrigin_float_float)(jcontext ctx, jobject self, jfloat param0, jfloat param1);
#define VTABLE_arc_scene_ui_Label_setOrigin_int 65
typedef void (*func_arc_scene_ui_Label_setOrigin_int)(jcontext ctx, jobject self, jint param0);
#define VTABLE_arc_scene_ui_Label_setScale_float 66
typedef void (*func_arc_scene_ui_Label_setScale_float)(jcontext ctx, jobject self, jfloat param0);
#define VTABLE_arc_scene_ui_Label_setScale_float_float 67
typedef void (*func_arc_scene_ui_Label_setScale_float_float)(jcontext ctx, jobject self, jfloat param0, jfloat param1);
#define VTABLE_arc_scene_ui_Label_scaleBy_float 68
typedef void (*func_arc_scene_ui_Label_scaleBy_float)(jcontext ctx, jobject self, jfloat param0);
#define VTABLE_arc_scene_ui_Label_scaleBy_float_float 69
typedef void (*func_arc_scene_ui_Label_scaleBy_float_float)(jcontext ctx, jobject self, jfloat param0, jfloat param1);
#define VTABLE_arc_scene_ui_Label_getRotation_R_float 70
typedef jfloat (*func_arc_scene_ui_Label_getRotation_R_float)(jcontext ctx, jobject self);
#define VTABLE_arc_scene_ui_Label_setRotation_float 71
typedef void (*func_arc_scene_ui_Label_setRotation_float)(jcontext ctx, jobject self, jfloat param0);
#define VTABLE_arc_scene_ui_Label_setRotationOrigin_float_int 72
typedef void (*func_arc_scene_ui_Label_setRotationOrigin_float_int)(jcontext ctx, jobject self, jfloat param0, jint param1);
#define VTABLE_arc_scene_ui_Label_rotateBy_float 73
typedef void (*func_arc_scene_ui_Label_rotateBy_float)(jcontext ctx, jobject self, jfloat param0);
#define VTABLE_arc_scene_ui_Label_setColor_float_float_float_float 74
typedef void (*func_arc_scene_ui_Label_setColor_float_float_float_float)(jcontext ctx, jobject self, jfloat param0, jfloat param1, jfloat param2, jfloat param3);
#define VTABLE_arc_scene_ui_Label_setColor_arc_graphics_Color 75
typedef void (*func_arc_scene_ui_Label_setColor_arc_graphics_Color)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_scene_ui_Label_toFront 76
typedef void (*func_arc_scene_ui_Label_toFront)(jcontext ctx, jobject self);
#define VTABLE_arc_scene_ui_Label_toBack 77
typedef void (*func_arc_scene_ui_Label_toBack)(jcontext ctx, jobject self);
#define VTABLE_arc_scene_ui_Label_getZIndex_R_int 78
typedef jint (*func_arc_scene_ui_Label_getZIndex_R_int)(jcontext ctx, jobject self);
#define VTABLE_arc_scene_ui_Label_setZIndex_int 79
typedef void (*func_arc_scene_ui_Label_setZIndex_int)(jcontext ctx, jobject self, jint param0);
#define VTABLE_arc_scene_ui_Label_clipBegin_R_boolean 80
typedef jbool (*func_arc_scene_ui_Label_clipBegin_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_arc_scene_ui_Label_clipBegin_float_float_float_float_R_boolean 81
typedef jbool (*func_arc_scene_ui_Label_clipBegin_float_float_float_float_R_boolean)(jcontext ctx, jobject self, jfloat param0, jfloat param1, jfloat param2, jfloat param3);
#define VTABLE_arc_scene_ui_Label_clipEnd 82
typedef void (*func_arc_scene_ui_Label_clipEnd)(jcontext ctx, jobject self);
#define VTABLE_arc_scene_ui_Label_screenToLocalCoordinates_arc_math_geom_Vec2_R_arc_math_geom_Vec2 83
typedef jobject (*func_arc_scene_ui_Label_screenToLocalCoordinates_arc_math_geom_Vec2_R_arc_math_geom_Vec2)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_scene_ui_Label_stageToLocalCoordinates_arc_math_geom_Vec2_R_arc_math_geom_Vec2 84
typedef jobject (*func_arc_scene_ui_Label_stageToLocalCoordinates_arc_math_geom_Vec2_R_arc_math_geom_Vec2)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_scene_ui_Label_localToStageCoordinates_arc_math_geom_Vec2_R_arc_math_geom_Vec2 85
typedef jobject (*func_arc_scene_ui_Label_localToStageCoordinates_arc_math_geom_Vec2_R_arc_math_geom_Vec2)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_scene_ui_Label_localToParentCoordinates_arc_math_geom_Vec2_R_arc_math_geom_Vec2 86
typedef jobject (*func_arc_scene_ui_Label_localToParentCoordinates_arc_math_geom_Vec2_R_arc_math_geom_Vec2)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_scene_ui_Label_localToAscendantCoordinates_arc_scene_Element_arc_math_geom_Vec2_R_arc_math_geom_Vec2 87
typedef jobject (*func_arc_scene_ui_Label_localToAscendantCoordinates_arc_scene_Element_arc_math_geom_Vec2_R_arc_math_geom_Vec2)(jcontext ctx, jobject self, jobject param0, jobject param1);
#define VTABLE_arc_scene_ui_Label_parentToLocalCoordinates_arc_math_geom_Vec2_R_arc_math_geom_Vec2 88
typedef jobject (*func_arc_scene_ui_Label_parentToLocalCoordinates_arc_math_geom_Vec2_R_arc_math_geom_Vec2)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_scene_ui_Label_getMinWidth_R_float 89
typedef jfloat (*func_arc_scene_ui_Label_getMinWidth_R_float)(jcontext ctx, jobject self);
#define VTABLE_arc_scene_ui_Label_getMinHeight_R_float 90
typedef jfloat (*func_arc_scene_ui_Label_getMinHeight_R_float)(jcontext ctx, jobject self);
#define VTABLE_arc_scene_ui_Label_getPrefWidth_R_float 91
typedef jfloat (*func_arc_scene_ui_Label_getPrefWidth_R_float)(jcontext ctx, jobject self);
#define VTABLE_arc_scene_ui_Label_getPrefHeight_R_float 92
typedef jfloat (*func_arc_scene_ui_Label_getPrefHeight_R_float)(jcontext ctx, jobject self);
#define VTABLE_arc_scene_ui_Label_getMaxWidth_R_float 93
typedef jfloat (*func_arc_scene_ui_Label_getMaxWidth_R_float)(jcontext ctx, jobject self);
#define VTABLE_arc_scene_ui_Label_getMaxHeight_R_float 94
typedef jfloat (*func_arc_scene_ui_Label_getMaxHeight_R_float)(jcontext ctx, jobject self);
#define VTABLE_arc_scene_ui_Label_setLayoutEnabled_boolean 95
typedef void (*func_arc_scene_ui_Label_setLayoutEnabled_boolean)(jcontext ctx, jobject self, jbool param0);
#define VTABLE_arc_scene_ui_Label_validate 96
typedef void (*func_arc_scene_ui_Label_validate)(jcontext ctx, jobject self);
#define VTABLE_arc_scene_ui_Label_needsLayout_R_boolean 97
typedef jbool (*func_arc_scene_ui_Label_needsLayout_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_arc_scene_ui_Label_invalidate 98
typedef void (*func_arc_scene_ui_Label_invalidate)(jcontext ctx, jobject self);
#define VTABLE_arc_scene_ui_Label_invalidateHierarchy 99
typedef void (*func_arc_scene_ui_Label_invalidateHierarchy)(jcontext ctx, jobject self);
#define VTABLE_arc_scene_ui_Label_pack 100
typedef void (*func_arc_scene_ui_Label_pack)(jcontext ctx, jobject self);
#define VTABLE_arc_scene_ui_Label_setFillParent_boolean 101
typedef void (*func_arc_scene_ui_Label_setFillParent_boolean)(jcontext ctx, jobject self, jbool param0);
#define VTABLE_arc_scene_ui_Label_layout 102
typedef void (*func_arc_scene_ui_Label_layout)(jcontext ctx, jobject self);
#define VTABLE_arc_scene_ui_Label_keepInStage 103
typedef void (*func_arc_scene_ui_Label_keepInStage)(jcontext ctx, jobject self);
#define VTABLE_arc_scene_ui_Label_setTranslation_float_float 104
typedef void (*func_arc_scene_ui_Label_setTranslation_float_float)(jcontext ctx, jobject self, jfloat param0, jfloat param1);
#define VTABLE_arc_scene_ui_Label_keyDown_arc_input_KeyCode_java_lang_Runnable 105
typedef void (*func_arc_scene_ui_Label_keyDown_arc_input_KeyCode_java_lang_Runnable)(jcontext ctx, jobject self, jobject param0, jobject param1);
#define VTABLE_arc_scene_ui_Label_keyDown_arc_func_Cons 106
typedef void (*func_arc_scene_ui_Label_keyDown_arc_func_Cons)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_scene_ui_Label_fireClick 107
typedef void (*func_arc_scene_ui_Label_fireClick)(jcontext ctx, jobject self);
#define VTABLE_arc_scene_ui_Label_clicked_java_lang_Runnable_R_arc_scene_event_ClickListener 108
typedef jobject (*func_arc_scene_ui_Label_clicked_java_lang_Runnable_R_arc_scene_event_ClickListener)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_scene_ui_Label_clicked_arc_input_KeyCode_java_lang_Runnable_R_arc_scene_event_ClickListener 109
typedef jobject (*func_arc_scene_ui_Label_clicked_arc_input_KeyCode_java_lang_Runnable_R_arc_scene_event_ClickListener)(jcontext ctx, jobject self, jobject param0, jobject param1);
#define VTABLE_arc_scene_ui_Label_clicked_arc_func_Cons_java_lang_Runnable_R_arc_scene_event_ClickListener 110
typedef jobject (*func_arc_scene_ui_Label_clicked_arc_func_Cons_java_lang_Runnable_R_arc_scene_event_ClickListener)(jcontext ctx, jobject self, jobject param0, jobject param1);
#define VTABLE_arc_scene_ui_Label_clicked_arc_func_Cons_arc_func_Cons_R_arc_scene_event_ClickListener 111
typedef jobject (*func_arc_scene_ui_Label_clicked_arc_func_Cons_arc_func_Cons_R_arc_scene_event_ClickListener)(jcontext ctx, jobject self, jobject param0, jobject param1);
#define VTABLE_arc_scene_ui_Label_tapped_java_lang_Runnable_R_arc_scene_event_InputListener 112
typedef jobject (*func_arc_scene_ui_Label_tapped_java_lang_Runnable_R_arc_scene_event_InputListener)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_scene_ui_Label_hovered_java_lang_Runnable 113
typedef void (*func_arc_scene_ui_Label_hovered_java_lang_Runnable)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_scene_ui_Label_exited_java_lang_Runnable 114
typedef void (*func_arc_scene_ui_Label_exited_java_lang_Runnable)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_scene_ui_Label_released_java_lang_Runnable 115
typedef void (*func_arc_scene_ui_Label_released_java_lang_Runnable)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_scene_ui_Label_change 116
typedef void (*func_arc_scene_ui_Label_change)(jcontext ctx, jobject self);
#define VTABLE_arc_scene_ui_Label_changed_java_lang_Runnable 117
typedef void (*func_arc_scene_ui_Label_changed_java_lang_Runnable)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_scene_ui_Label_update_java_lang_Runnable_R_arc_scene_Element 118
typedef jobject (*func_arc_scene_ui_Label_update_java_lang_Runnable_R_arc_scene_Element)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_scene_ui_Label_visible_arc_func_Boolp_R_arc_scene_Element 119
typedef jobject (*func_arc_scene_ui_Label_visible_arc_func_Boolp_R_arc_scene_Element)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_scene_ui_Label_touchable_arc_func_Prov 120
typedef void (*func_arc_scene_ui_Label_touchable_arc_func_Prov)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_scene_ui_Label_getStyle_R_arc_scene_ui_Label$LabelStyle 121
typedef jobject (*func_arc_scene_ui_Label_getStyle_R_arc_scene_ui_Label$LabelStyle)(jcontext ctx, jobject self);
#define VTABLE_arc_scene_ui_Label_setStyle_arc_scene_ui_Label$LabelStyle 122
typedef void (*func_arc_scene_ui_Label_setStyle_arc_scene_ui_Label$LabelStyle)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_scene_ui_Label_setText_arc_func_Prov 123
typedef void (*func_arc_scene_ui_Label_setText_arc_func_Prov)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_scene_ui_Label_setTextInternal_java_lang_CharSequence 124
typedef void (*func_arc_scene_ui_Label_setTextInternal_java_lang_CharSequence)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_scene_ui_Label_textEquals_java_lang_CharSequence_R_boolean 125
typedef jbool (*func_arc_scene_ui_Label_textEquals_java_lang_CharSequence_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_scene_ui_Label_getText_R_java_lang_StringBuilder 126
typedef jobject (*func_arc_scene_ui_Label_getText_R_java_lang_StringBuilder)(jcontext ctx, jobject self);
#define VTABLE_arc_scene_ui_Label_setText_java_lang_CharSequence 127
typedef void (*func_arc_scene_ui_Label_setText_java_lang_CharSequence)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_scene_ui_Label_scaleAndComputePrefSize 128
typedef void (*func_arc_scene_ui_Label_scaleAndComputePrefSize)(jcontext ctx, jobject self);
#define VTABLE_arc_scene_ui_Label_computePrefSize 129
typedef void (*func_arc_scene_ui_Label_computePrefSize)(jcontext ctx, jobject self);
#define VTABLE_arc_scene_ui_Label_getGlyphLayout_R_arc_graphics_g2d_GlyphLayout 130
typedef jobject (*func_arc_scene_ui_Label_getGlyphLayout_R_arc_graphics_g2d_GlyphLayout)(jcontext ctx, jobject self);
#define VTABLE_arc_scene_ui_Label_setWrap_boolean 131
typedef void (*func_arc_scene_ui_Label_setWrap_boolean)(jcontext ctx, jobject self, jbool param0);
#define VTABLE_arc_scene_ui_Label_setWrap_boolean_boolean 132
typedef void (*func_arc_scene_ui_Label_setWrap_boolean_boolean)(jcontext ctx, jobject self, jbool param0, jbool param1);
#define VTABLE_arc_scene_ui_Label_getLabelAlign_R_int 133
typedef jint (*func_arc_scene_ui_Label_getLabelAlign_R_int)(jcontext ctx, jobject self);
#define VTABLE_arc_scene_ui_Label_getLineAlign_R_int 134
typedef jint (*func_arc_scene_ui_Label_getLineAlign_R_int)(jcontext ctx, jobject self);
#define VTABLE_arc_scene_ui_Label_setAlignment_int 135
typedef void (*func_arc_scene_ui_Label_setAlignment_int)(jcontext ctx, jobject self, jint param0);
#define VTABLE_arc_scene_ui_Label_setAlignment_int_int 136
typedef void (*func_arc_scene_ui_Label_setAlignment_int_int)(jcontext ctx, jobject self, jint param0, jint param1);
#define VTABLE_arc_scene_ui_Label_setFontScale_float 137
typedef void (*func_arc_scene_ui_Label_setFontScale_float)(jcontext ctx, jobject self, jfloat param0);
#define VTABLE_arc_scene_ui_Label_setFontScale_float_float 138
typedef void (*func_arc_scene_ui_Label_setFontScale_float_float)(jcontext ctx, jobject self, jfloat param0, jfloat param1);
#define VTABLE_arc_scene_ui_Label_getFontScaleX_R_float 139
typedef jfloat (*func_arc_scene_ui_Label_getFontScaleX_R_float)(jcontext ctx, jobject self);
#define VTABLE_arc_scene_ui_Label_setFontScaleX_float 140
typedef void (*func_arc_scene_ui_Label_setFontScaleX_float)(jcontext ctx, jobject self, jfloat param0);
#define VTABLE_arc_scene_ui_Label_getFontScaleY_R_float 141
typedef jfloat (*func_arc_scene_ui_Label_getFontScaleY_R_float)(jcontext ctx, jobject self);
#define VTABLE_arc_scene_ui_Label_setFontScaleY_float 142
typedef void (*func_arc_scene_ui_Label_setFontScaleY_float)(jcontext ctx, jobject self, jfloat param0);
#define VTABLE_arc_scene_ui_Label_setEllipsis_java_lang_String 143
typedef void (*func_arc_scene_ui_Label_setEllipsis_java_lang_String)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_scene_ui_Label_setEllipsis_boolean 144
typedef void (*func_arc_scene_ui_Label_setEllipsis_boolean)(jcontext ctx, jobject self, jbool param0);
#define VTABLE_arc_scene_ui_Label_getFontCache_R_arc_graphics_g2d_FontCache 145
typedef jobject (*func_arc_scene_ui_Label_getFontCache_R_arc_graphics_g2d_FontCache)(jcontext ctx, jobject self);
#define VTABLE_arc_scene_ui_Label_lambda$setText$0_arc_func_Prov 146
typedef void (*func_arc_scene_ui_Label_lambda$setText$0_arc_func_Prov)(jcontext ctx, jobject self, jobject param0);

void mark_arc_scene_ui_Label(jobject object, jint mark, jint depth);
void clinit_arc_scene_ui_Label(jcontext ctx);
void init_arc_scene_ui_Label_arc_func_Prov(jcontext ctx, jobject self, jobject param0);
void init_arc_scene_ui_Label_java_lang_CharSequence(jcontext ctx, jobject self, jobject param0);
void init_arc_scene_ui_Label_java_lang_CharSequence_arc_scene_ui_Label$LabelStyle(jcontext ctx, jobject self, jobject param0, jobject param1);
jobject M_arc_scene_ui_Label_getStyle_R_arc_scene_ui_Label$LabelStyle(jcontext ctx, jobject self);
void M_arc_scene_ui_Label_setStyle_arc_scene_ui_Label$LabelStyle(jcontext ctx, jobject self, jobject param0);
void M_arc_scene_ui_Label_setText_arc_func_Prov(jcontext ctx, jobject self, jobject param0);
void M_arc_scene_ui_Label_setTextInternal_java_lang_CharSequence(jcontext ctx, jobject self, jobject param0);
jbool M_arc_scene_ui_Label_textEquals_java_lang_CharSequence_R_boolean(jcontext ctx, jobject self, jobject param0);
jobject M_arc_scene_ui_Label_getText_R_java_lang_StringBuilder(jcontext ctx, jobject self);
void M_arc_scene_ui_Label_setText_java_lang_CharSequence(jcontext ctx, jobject self, jobject param0);
void M_arc_scene_ui_Label_invalidate(jcontext ctx, jobject self);
void M_arc_scene_ui_Label_scaleAndComputePrefSize(jcontext ctx, jobject self);
void M_arc_scene_ui_Label_computePrefSize(jcontext ctx, jobject self);
void M_arc_scene_ui_Label_layout(jcontext ctx, jobject self);
void M_arc_scene_ui_Label_draw(jcontext ctx, jobject self);
jfloat M_arc_scene_ui_Label_getMinWidth_R_float(jcontext ctx, jobject self);
jfloat M_arc_scene_ui_Label_getPrefWidth_R_float(jcontext ctx, jobject self);
jfloat M_arc_scene_ui_Label_getPrefHeight_R_float(jcontext ctx, jobject self);
jobject M_arc_scene_ui_Label_getGlyphLayout_R_arc_graphics_g2d_GlyphLayout(jcontext ctx, jobject self);
void M_arc_scene_ui_Label_setWrap_boolean(jcontext ctx, jobject self, jbool param0);
void M_arc_scene_ui_Label_setWrap_boolean_boolean(jcontext ctx, jobject self, jbool param0, jbool param1);
jint M_arc_scene_ui_Label_getLabelAlign_R_int(jcontext ctx, jobject self);
jint M_arc_scene_ui_Label_getLineAlign_R_int(jcontext ctx, jobject self);
void M_arc_scene_ui_Label_setAlignment_int(jcontext ctx, jobject self, jint param0);
void M_arc_scene_ui_Label_setAlignment_int_int(jcontext ctx, jobject self, jint param0, jint param1);
void M_arc_scene_ui_Label_setFontScale_float(jcontext ctx, jobject self, jfloat param0);
void M_arc_scene_ui_Label_setFontScale_float_float(jcontext ctx, jobject self, jfloat param0, jfloat param1);
jfloat M_arc_scene_ui_Label_getFontScaleX_R_float(jcontext ctx, jobject self);
void M_arc_scene_ui_Label_setFontScaleX_float(jcontext ctx, jobject self, jfloat param0);
jfloat M_arc_scene_ui_Label_getFontScaleY_R_float(jcontext ctx, jobject self);
void M_arc_scene_ui_Label_setFontScaleY_float(jcontext ctx, jobject self, jfloat param0);
void M_arc_scene_ui_Label_setEllipsis_java_lang_String(jcontext ctx, jobject self, jobject param0);
void M_arc_scene_ui_Label_setEllipsis_boolean(jcontext ctx, jobject self, jbool param0);
jobject M_arc_scene_ui_Label_getFontCache_R_arc_graphics_g2d_FontCache(jcontext ctx, jobject self);
jobject M_arc_scene_ui_Label_toString_R_java_lang_String(jcontext ctx, jobject self);
void M_arc_scene_ui_Label_lambda$setText$0_arc_func_Prov(jcontext ctx, jobject self, jobject param0);

#ifdef __cplusplus
}
#endif

#endif
