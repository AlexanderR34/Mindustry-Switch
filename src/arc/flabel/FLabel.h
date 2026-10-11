#ifndef HEADER_arc_flabel_FLabel
#define HEADER_arc_flabel_FLabel

#include "Clearwing.h"
#include "arc/scene/ui/Label.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct arc_flabel_FLabel {
	arc_scene_ui_Label parent;
	jref F_variables;
	jref F_tokenEntries;
	jref F_clearColor;
	jref F_listener;
	jbool F_forceMarkupColor;
	jref F_originalText;
	jref F_glyphCache;
	jref F_glyphRunCapacities;
	jref F_offsetCache;
	jref F_layoutLineBreaks;
	jref F_activeEffects;
	jfloat F_textSpeed;
	jfloat F_charCooldown;
	jint F_rawCharIndex;
	jint F_glyphCharIndex;
	jint F_glyphCharCompensation;
	jint F_cachedGlyphCharIndex;
	jfloat F_lastLayoutX;
	jfloat F_lastLayoutY;
	jbool F_parsed;
	jbool F_paused;
	jbool F_ended;
	jbool F_skipping;
	jbool F_ignoringEvents;
	jbool F_ignoringEffects;
	jref F_defaultToken;
} arc_flabel_FLabel;

extern Class class_arc_flabel_FLabel;


#define VTABLE_arc_flabel_FLabel_hashCode_R_int 0
typedef jint (*func_arc_flabel_FLabel_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_arc_flabel_FLabel_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_arc_flabel_FLabel_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_flabel_FLabel_clone_R_java_lang_Object 2
typedef jobject (*func_arc_flabel_FLabel_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_arc_flabel_FLabel_getClass_R_java_lang_Class 3
typedef jobject (*func_arc_flabel_FLabel_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_arc_flabel_FLabel_toString_R_java_lang_String 4
typedef jobject (*func_arc_flabel_FLabel_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_arc_flabel_FLabel_finalize 5
typedef void (*func_arc_flabel_FLabel_finalize)(jcontext ctx, jobject self);
#define VTABLE_arc_flabel_FLabel_notify 6
typedef void (*func_arc_flabel_FLabel_notify)(jcontext ctx, jobject self);
#define VTABLE_arc_flabel_FLabel_notifyAll 7
typedef void (*func_arc_flabel_FLabel_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_arc_flabel_FLabel_wait 8
typedef void (*func_arc_flabel_FLabel_wait)(jcontext ctx, jobject self);
#define VTABLE_arc_flabel_FLabel_wait_long 9
typedef void (*func_arc_flabel_FLabel_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_arc_flabel_FLabel_wait_long_int 10
typedef void (*func_arc_flabel_FLabel_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);
#define VTABLE_arc_flabel_FLabel_draw 11
typedef void (*func_arc_flabel_FLabel_draw)(jcontext ctx, jobject self);
#define VTABLE_arc_flabel_FLabel_act_float 12
typedef void (*func_arc_flabel_FLabel_act_float)(jcontext ctx, jobject self, jfloat param0);
#define VTABLE_arc_flabel_FLabel_updateVisibility 13
typedef void (*func_arc_flabel_FLabel_updateVisibility)(jcontext ctx, jobject self);
#define VTABLE_arc_flabel_FLabel_hasMouse_R_boolean 14
typedef jbool (*func_arc_flabel_FLabel_hasMouse_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_arc_flabel_FLabel_hasKeyboard_R_boolean 15
typedef jbool (*func_arc_flabel_FLabel_hasKeyboard_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_arc_flabel_FLabel_hasScroll_R_boolean 16
typedef jbool (*func_arc_flabel_FLabel_hasScroll_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_arc_flabel_FLabel_requestKeyboard 17
typedef void (*func_arc_flabel_FLabel_requestKeyboard)(jcontext ctx, jobject self);
#define VTABLE_arc_flabel_FLabel_requestScroll 18
typedef void (*func_arc_flabel_FLabel_requestScroll)(jcontext ctx, jobject self);
#define VTABLE_arc_flabel_FLabel_fire_arc_scene_event_SceneEvent_R_boolean 19
typedef jbool (*func_arc_flabel_FLabel_fire_arc_scene_event_SceneEvent_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_flabel_FLabel_notify_arc_scene_event_SceneEvent_boolean_R_boolean 20
typedef jbool (*func_arc_flabel_FLabel_notify_arc_scene_event_SceneEvent_boolean_R_boolean)(jcontext ctx, jobject self, jobject param0, jbool param1);
#define VTABLE_arc_flabel_FLabel_hit_float_float_boolean_R_arc_scene_Element 21
typedef jobject (*func_arc_flabel_FLabel_hit_float_float_boolean_R_arc_scene_Element)(jcontext ctx, jobject self, jfloat param0, jfloat param1, jbool param2);
#define VTABLE_arc_flabel_FLabel_remove_R_boolean 22
typedef jbool (*func_arc_flabel_FLabel_remove_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_arc_flabel_FLabel_dragged_arc_func_Floatc2 23
typedef void (*func_arc_flabel_FLabel_dragged_arc_func_Floatc2)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_flabel_FLabel_scrolled_arc_func_Floatc 24
typedef void (*func_arc_flabel_FLabel_scrolled_arc_func_Floatc)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_flabel_FLabel_addListener_arc_scene_event_EventListener_R_boolean 25
typedef jbool (*func_arc_flabel_FLabel_addListener_arc_scene_event_EventListener_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_flabel_FLabel_removeListener_arc_scene_event_EventListener_R_boolean 26
typedef jbool (*func_arc_flabel_FLabel_removeListener_arc_scene_event_EventListener_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_flabel_FLabel_getListeners_R_arc_struct_Seq 27
typedef jobject (*func_arc_flabel_FLabel_getListeners_R_arc_struct_Seq)(jcontext ctx, jobject self);
#define VTABLE_arc_flabel_FLabel_addCaptureListener_arc_scene_event_EventListener_R_boolean 28
typedef jbool (*func_arc_flabel_FLabel_addCaptureListener_arc_scene_event_EventListener_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_flabel_FLabel_removeCaptureListener_arc_scene_event_EventListener_R_boolean 29
typedef jbool (*func_arc_flabel_FLabel_removeCaptureListener_arc_scene_event_EventListener_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_flabel_FLabel_getCaptureListeners_R_arc_struct_Seq 30
typedef jobject (*func_arc_flabel_FLabel_getCaptureListeners_R_arc_struct_Seq)(jcontext ctx, jobject self);
#define VTABLE_arc_flabel_FLabel_addAction_arc_scene_Action 31
typedef void (*func_arc_flabel_FLabel_addAction_arc_scene_Action)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_flabel_FLabel_actions_Array1_arc_scene_Action 32
typedef void (*func_arc_flabel_FLabel_actions_Array1_arc_scene_Action)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_flabel_FLabel_removeAction_arc_scene_Action 33
typedef void (*func_arc_flabel_FLabel_removeAction_arc_scene_Action)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_flabel_FLabel_getActions_R_arc_struct_Seq 34
typedef jobject (*func_arc_flabel_FLabel_getActions_R_arc_struct_Seq)(jcontext ctx, jobject self);
#define VTABLE_arc_flabel_FLabel_hasActions_R_boolean 35
typedef jbool (*func_arc_flabel_FLabel_hasActions_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_arc_flabel_FLabel_clearActions 36
typedef void (*func_arc_flabel_FLabel_clearActions)(jcontext ctx, jobject self);
#define VTABLE_arc_flabel_FLabel_clearListeners 37
typedef void (*func_arc_flabel_FLabel_clearListeners)(jcontext ctx, jobject self);
#define VTABLE_arc_flabel_FLabel_clear 38
typedef void (*func_arc_flabel_FLabel_clear)(jcontext ctx, jobject self);
#define VTABLE_arc_flabel_FLabel_getScene_R_arc_scene_Scene 39
typedef jobject (*func_arc_flabel_FLabel_getScene_R_arc_scene_Scene)(jcontext ctx, jobject self);
#define VTABLE_arc_flabel_FLabel_setScene_arc_scene_Scene 40
typedef void (*func_arc_flabel_FLabel_setScene_arc_scene_Scene)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_flabel_FLabel_isDescendantOf_arc_func_Boolf_R_boolean 41
typedef jbool (*func_arc_flabel_FLabel_isDescendantOf_arc_func_Boolf_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_flabel_FLabel_isDescendantOf_arc_scene_Element_R_boolean 42
typedef jbool (*func_arc_flabel_FLabel_isDescendantOf_arc_scene_Element_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_flabel_FLabel_isAscendantOf_arc_scene_Element_R_boolean 43
typedef jbool (*func_arc_flabel_FLabel_isAscendantOf_arc_scene_Element_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_flabel_FLabel_hasParent_R_boolean 44
typedef jbool (*func_arc_flabel_FLabel_hasParent_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_arc_flabel_FLabel_isTouchable_R_boolean 45
typedef jbool (*func_arc_flabel_FLabel_isTouchable_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_arc_flabel_FLabel_getX_int_R_float 46
typedef jfloat (*func_arc_flabel_FLabel_getX_int_R_float)(jcontext ctx, jobject self, jint param0);
#define VTABLE_arc_flabel_FLabel_getY_int_R_float 47
typedef jfloat (*func_arc_flabel_FLabel_getY_int_R_float)(jcontext ctx, jobject self, jint param0);
#define VTABLE_arc_flabel_FLabel_setPosition_float_float 48
typedef void (*func_arc_flabel_FLabel_setPosition_float_float)(jcontext ctx, jobject self, jfloat param0, jfloat param1);
#define VTABLE_arc_flabel_FLabel_setPosition_float_float_int 49
typedef void (*func_arc_flabel_FLabel_setPosition_float_float_int)(jcontext ctx, jobject self, jfloat param0, jfloat param1, jint param2);
#define VTABLE_arc_flabel_FLabel_moveBy_float_float 50
typedef void (*func_arc_flabel_FLabel_moveBy_float_float)(jcontext ctx, jobject self, jfloat param0, jfloat param1);
#define VTABLE_arc_flabel_FLabel_getWidth_R_float 51
typedef jfloat (*func_arc_flabel_FLabel_getWidth_R_float)(jcontext ctx, jobject self);
#define VTABLE_arc_flabel_FLabel_setWidth_float 52
typedef void (*func_arc_flabel_FLabel_setWidth_float)(jcontext ctx, jobject self, jfloat param0);
#define VTABLE_arc_flabel_FLabel_getHeight_R_float 53
typedef jfloat (*func_arc_flabel_FLabel_getHeight_R_float)(jcontext ctx, jobject self);
#define VTABLE_arc_flabel_FLabel_setHeight_float 54
typedef void (*func_arc_flabel_FLabel_setHeight_float)(jcontext ctx, jobject self, jfloat param0);
#define VTABLE_arc_flabel_FLabel_getTop_R_float 55
typedef jfloat (*func_arc_flabel_FLabel_getTop_R_float)(jcontext ctx, jobject self);
#define VTABLE_arc_flabel_FLabel_getRight_R_float 56
typedef jfloat (*func_arc_flabel_FLabel_getRight_R_float)(jcontext ctx, jobject self);
#define VTABLE_arc_flabel_FLabel_sizeChanged 57
typedef void (*func_arc_flabel_FLabel_sizeChanged)(jcontext ctx, jobject self);
#define VTABLE_arc_flabel_FLabel_rotationChanged 58
typedef void (*func_arc_flabel_FLabel_rotationChanged)(jcontext ctx, jobject self);
#define VTABLE_arc_flabel_FLabel_setSize_float 59
typedef void (*func_arc_flabel_FLabel_setSize_float)(jcontext ctx, jobject self, jfloat param0);
#define VTABLE_arc_flabel_FLabel_setSize_float_float 60
typedef void (*func_arc_flabel_FLabel_setSize_float_float)(jcontext ctx, jobject self, jfloat param0, jfloat param1);
#define VTABLE_arc_flabel_FLabel_sizeBy_float 61
typedef void (*func_arc_flabel_FLabel_sizeBy_float)(jcontext ctx, jobject self, jfloat param0);
#define VTABLE_arc_flabel_FLabel_sizeBy_float_float 62
typedef void (*func_arc_flabel_FLabel_sizeBy_float_float)(jcontext ctx, jobject self, jfloat param0, jfloat param1);
#define VTABLE_arc_flabel_FLabel_setBounds_float_float_float_float 63
typedef void (*func_arc_flabel_FLabel_setBounds_float_float_float_float)(jcontext ctx, jobject self, jfloat param0, jfloat param1, jfloat param2, jfloat param3);
#define VTABLE_arc_flabel_FLabel_setOrigin_float_float 64
typedef void (*func_arc_flabel_FLabel_setOrigin_float_float)(jcontext ctx, jobject self, jfloat param0, jfloat param1);
#define VTABLE_arc_flabel_FLabel_setOrigin_int 65
typedef void (*func_arc_flabel_FLabel_setOrigin_int)(jcontext ctx, jobject self, jint param0);
#define VTABLE_arc_flabel_FLabel_setScale_float 66
typedef void (*func_arc_flabel_FLabel_setScale_float)(jcontext ctx, jobject self, jfloat param0);
#define VTABLE_arc_flabel_FLabel_setScale_float_float 67
typedef void (*func_arc_flabel_FLabel_setScale_float_float)(jcontext ctx, jobject self, jfloat param0, jfloat param1);
#define VTABLE_arc_flabel_FLabel_scaleBy_float 68
typedef void (*func_arc_flabel_FLabel_scaleBy_float)(jcontext ctx, jobject self, jfloat param0);
#define VTABLE_arc_flabel_FLabel_scaleBy_float_float 69
typedef void (*func_arc_flabel_FLabel_scaleBy_float_float)(jcontext ctx, jobject self, jfloat param0, jfloat param1);
#define VTABLE_arc_flabel_FLabel_getRotation_R_float 70
typedef jfloat (*func_arc_flabel_FLabel_getRotation_R_float)(jcontext ctx, jobject self);
#define VTABLE_arc_flabel_FLabel_setRotation_float 71
typedef void (*func_arc_flabel_FLabel_setRotation_float)(jcontext ctx, jobject self, jfloat param0);
#define VTABLE_arc_flabel_FLabel_setRotationOrigin_float_int 72
typedef void (*func_arc_flabel_FLabel_setRotationOrigin_float_int)(jcontext ctx, jobject self, jfloat param0, jint param1);
#define VTABLE_arc_flabel_FLabel_rotateBy_float 73
typedef void (*func_arc_flabel_FLabel_rotateBy_float)(jcontext ctx, jobject self, jfloat param0);
#define VTABLE_arc_flabel_FLabel_setColor_float_float_float_float 74
typedef void (*func_arc_flabel_FLabel_setColor_float_float_float_float)(jcontext ctx, jobject self, jfloat param0, jfloat param1, jfloat param2, jfloat param3);
#define VTABLE_arc_flabel_FLabel_setColor_arc_graphics_Color 75
typedef void (*func_arc_flabel_FLabel_setColor_arc_graphics_Color)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_flabel_FLabel_toFront 76
typedef void (*func_arc_flabel_FLabel_toFront)(jcontext ctx, jobject self);
#define VTABLE_arc_flabel_FLabel_toBack 77
typedef void (*func_arc_flabel_FLabel_toBack)(jcontext ctx, jobject self);
#define VTABLE_arc_flabel_FLabel_getZIndex_R_int 78
typedef jint (*func_arc_flabel_FLabel_getZIndex_R_int)(jcontext ctx, jobject self);
#define VTABLE_arc_flabel_FLabel_setZIndex_int 79
typedef void (*func_arc_flabel_FLabel_setZIndex_int)(jcontext ctx, jobject self, jint param0);
#define VTABLE_arc_flabel_FLabel_clipBegin_R_boolean 80
typedef jbool (*func_arc_flabel_FLabel_clipBegin_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_arc_flabel_FLabel_clipBegin_float_float_float_float_R_boolean 81
typedef jbool (*func_arc_flabel_FLabel_clipBegin_float_float_float_float_R_boolean)(jcontext ctx, jobject self, jfloat param0, jfloat param1, jfloat param2, jfloat param3);
#define VTABLE_arc_flabel_FLabel_clipEnd 82
typedef void (*func_arc_flabel_FLabel_clipEnd)(jcontext ctx, jobject self);
#define VTABLE_arc_flabel_FLabel_screenToLocalCoordinates_arc_math_geom_Vec2_R_arc_math_geom_Vec2 83
typedef jobject (*func_arc_flabel_FLabel_screenToLocalCoordinates_arc_math_geom_Vec2_R_arc_math_geom_Vec2)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_flabel_FLabel_stageToLocalCoordinates_arc_math_geom_Vec2_R_arc_math_geom_Vec2 84
typedef jobject (*func_arc_flabel_FLabel_stageToLocalCoordinates_arc_math_geom_Vec2_R_arc_math_geom_Vec2)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_flabel_FLabel_localToStageCoordinates_arc_math_geom_Vec2_R_arc_math_geom_Vec2 85
typedef jobject (*func_arc_flabel_FLabel_localToStageCoordinates_arc_math_geom_Vec2_R_arc_math_geom_Vec2)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_flabel_FLabel_localToParentCoordinates_arc_math_geom_Vec2_R_arc_math_geom_Vec2 86
typedef jobject (*func_arc_flabel_FLabel_localToParentCoordinates_arc_math_geom_Vec2_R_arc_math_geom_Vec2)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_flabel_FLabel_localToAscendantCoordinates_arc_scene_Element_arc_math_geom_Vec2_R_arc_math_geom_Vec2 87
typedef jobject (*func_arc_flabel_FLabel_localToAscendantCoordinates_arc_scene_Element_arc_math_geom_Vec2_R_arc_math_geom_Vec2)(jcontext ctx, jobject self, jobject param0, jobject param1);
#define VTABLE_arc_flabel_FLabel_parentToLocalCoordinates_arc_math_geom_Vec2_R_arc_math_geom_Vec2 88
typedef jobject (*func_arc_flabel_FLabel_parentToLocalCoordinates_arc_math_geom_Vec2_R_arc_math_geom_Vec2)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_flabel_FLabel_getMinWidth_R_float 89
typedef jfloat (*func_arc_flabel_FLabel_getMinWidth_R_float)(jcontext ctx, jobject self);
#define VTABLE_arc_flabel_FLabel_getMinHeight_R_float 90
typedef jfloat (*func_arc_flabel_FLabel_getMinHeight_R_float)(jcontext ctx, jobject self);
#define VTABLE_arc_flabel_FLabel_getPrefWidth_R_float 91
typedef jfloat (*func_arc_flabel_FLabel_getPrefWidth_R_float)(jcontext ctx, jobject self);
#define VTABLE_arc_flabel_FLabel_getPrefHeight_R_float 92
typedef jfloat (*func_arc_flabel_FLabel_getPrefHeight_R_float)(jcontext ctx, jobject self);
#define VTABLE_arc_flabel_FLabel_getMaxWidth_R_float 93
typedef jfloat (*func_arc_flabel_FLabel_getMaxWidth_R_float)(jcontext ctx, jobject self);
#define VTABLE_arc_flabel_FLabel_getMaxHeight_R_float 94
typedef jfloat (*func_arc_flabel_FLabel_getMaxHeight_R_float)(jcontext ctx, jobject self);
#define VTABLE_arc_flabel_FLabel_setLayoutEnabled_boolean 95
typedef void (*func_arc_flabel_FLabel_setLayoutEnabled_boolean)(jcontext ctx, jobject self, jbool param0);
#define VTABLE_arc_flabel_FLabel_validate 96
typedef void (*func_arc_flabel_FLabel_validate)(jcontext ctx, jobject self);
#define VTABLE_arc_flabel_FLabel_needsLayout_R_boolean 97
typedef jbool (*func_arc_flabel_FLabel_needsLayout_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_arc_flabel_FLabel_invalidate 98
typedef void (*func_arc_flabel_FLabel_invalidate)(jcontext ctx, jobject self);
#define VTABLE_arc_flabel_FLabel_invalidateHierarchy 99
typedef void (*func_arc_flabel_FLabel_invalidateHierarchy)(jcontext ctx, jobject self);
#define VTABLE_arc_flabel_FLabel_pack 100
typedef void (*func_arc_flabel_FLabel_pack)(jcontext ctx, jobject self);
#define VTABLE_arc_flabel_FLabel_setFillParent_boolean 101
typedef void (*func_arc_flabel_FLabel_setFillParent_boolean)(jcontext ctx, jobject self, jbool param0);
#define VTABLE_arc_flabel_FLabel_layout 102
typedef void (*func_arc_flabel_FLabel_layout)(jcontext ctx, jobject self);
#define VTABLE_arc_flabel_FLabel_keepInStage 103
typedef void (*func_arc_flabel_FLabel_keepInStage)(jcontext ctx, jobject self);
#define VTABLE_arc_flabel_FLabel_setTranslation_float_float 104
typedef void (*func_arc_flabel_FLabel_setTranslation_float_float)(jcontext ctx, jobject self, jfloat param0, jfloat param1);
#define VTABLE_arc_flabel_FLabel_keyDown_arc_input_KeyCode_java_lang_Runnable 105
typedef void (*func_arc_flabel_FLabel_keyDown_arc_input_KeyCode_java_lang_Runnable)(jcontext ctx, jobject self, jobject param0, jobject param1);
#define VTABLE_arc_flabel_FLabel_keyDown_arc_func_Cons 106
typedef void (*func_arc_flabel_FLabel_keyDown_arc_func_Cons)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_flabel_FLabel_fireClick 107
typedef void (*func_arc_flabel_FLabel_fireClick)(jcontext ctx, jobject self);
#define VTABLE_arc_flabel_FLabel_clicked_java_lang_Runnable_R_arc_scene_event_ClickListener 108
typedef jobject (*func_arc_flabel_FLabel_clicked_java_lang_Runnable_R_arc_scene_event_ClickListener)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_flabel_FLabel_clicked_arc_input_KeyCode_java_lang_Runnable_R_arc_scene_event_ClickListener 109
typedef jobject (*func_arc_flabel_FLabel_clicked_arc_input_KeyCode_java_lang_Runnable_R_arc_scene_event_ClickListener)(jcontext ctx, jobject self, jobject param0, jobject param1);
#define VTABLE_arc_flabel_FLabel_clicked_arc_func_Cons_java_lang_Runnable_R_arc_scene_event_ClickListener 110
typedef jobject (*func_arc_flabel_FLabel_clicked_arc_func_Cons_java_lang_Runnable_R_arc_scene_event_ClickListener)(jcontext ctx, jobject self, jobject param0, jobject param1);
#define VTABLE_arc_flabel_FLabel_clicked_arc_func_Cons_arc_func_Cons_R_arc_scene_event_ClickListener 111
typedef jobject (*func_arc_flabel_FLabel_clicked_arc_func_Cons_arc_func_Cons_R_arc_scene_event_ClickListener)(jcontext ctx, jobject self, jobject param0, jobject param1);
#define VTABLE_arc_flabel_FLabel_tapped_java_lang_Runnable_R_arc_scene_event_InputListener 112
typedef jobject (*func_arc_flabel_FLabel_tapped_java_lang_Runnable_R_arc_scene_event_InputListener)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_flabel_FLabel_hovered_java_lang_Runnable 113
typedef void (*func_arc_flabel_FLabel_hovered_java_lang_Runnable)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_flabel_FLabel_exited_java_lang_Runnable 114
typedef void (*func_arc_flabel_FLabel_exited_java_lang_Runnable)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_flabel_FLabel_released_java_lang_Runnable 115
typedef void (*func_arc_flabel_FLabel_released_java_lang_Runnable)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_flabel_FLabel_change 116
typedef void (*func_arc_flabel_FLabel_change)(jcontext ctx, jobject self);
#define VTABLE_arc_flabel_FLabel_changed_java_lang_Runnable 117
typedef void (*func_arc_flabel_FLabel_changed_java_lang_Runnable)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_flabel_FLabel_update_java_lang_Runnable_R_arc_scene_Element 118
typedef jobject (*func_arc_flabel_FLabel_update_java_lang_Runnable_R_arc_scene_Element)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_flabel_FLabel_visible_arc_func_Boolp_R_arc_scene_Element 119
typedef jobject (*func_arc_flabel_FLabel_visible_arc_func_Boolp_R_arc_scene_Element)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_flabel_FLabel_touchable_arc_func_Prov 120
typedef void (*func_arc_flabel_FLabel_touchable_arc_func_Prov)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_flabel_FLabel_getStyle_R_arc_scene_ui_Label$LabelStyle 121
typedef jobject (*func_arc_flabel_FLabel_getStyle_R_arc_scene_ui_Label$LabelStyle)(jcontext ctx, jobject self);
#define VTABLE_arc_flabel_FLabel_setStyle_arc_scene_ui_Label$LabelStyle 122
typedef void (*func_arc_flabel_FLabel_setStyle_arc_scene_ui_Label$LabelStyle)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_flabel_FLabel_setText_arc_func_Prov 123
typedef void (*func_arc_flabel_FLabel_setText_arc_func_Prov)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_flabel_FLabel_setTextInternal_java_lang_CharSequence 124
typedef void (*func_arc_flabel_FLabel_setTextInternal_java_lang_CharSequence)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_flabel_FLabel_textEquals_java_lang_CharSequence_R_boolean 125
typedef jbool (*func_arc_flabel_FLabel_textEquals_java_lang_CharSequence_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_flabel_FLabel_getText_R_java_lang_StringBuilder 126
typedef jobject (*func_arc_flabel_FLabel_getText_R_java_lang_StringBuilder)(jcontext ctx, jobject self);
#define VTABLE_arc_flabel_FLabel_setText_java_lang_CharSequence 127
typedef void (*func_arc_flabel_FLabel_setText_java_lang_CharSequence)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_flabel_FLabel_scaleAndComputePrefSize 128
typedef void (*func_arc_flabel_FLabel_scaleAndComputePrefSize)(jcontext ctx, jobject self);
#define VTABLE_arc_flabel_FLabel_computePrefSize 129
typedef void (*func_arc_flabel_FLabel_computePrefSize)(jcontext ctx, jobject self);
#define VTABLE_arc_flabel_FLabel_getGlyphLayout_R_arc_graphics_g2d_GlyphLayout 130
typedef jobject (*func_arc_flabel_FLabel_getGlyphLayout_R_arc_graphics_g2d_GlyphLayout)(jcontext ctx, jobject self);
#define VTABLE_arc_flabel_FLabel_setWrap_boolean 131
typedef void (*func_arc_flabel_FLabel_setWrap_boolean)(jcontext ctx, jobject self, jbool param0);
#define VTABLE_arc_flabel_FLabel_setWrap_boolean_boolean 132
typedef void (*func_arc_flabel_FLabel_setWrap_boolean_boolean)(jcontext ctx, jobject self, jbool param0, jbool param1);
#define VTABLE_arc_flabel_FLabel_getLabelAlign_R_int 133
typedef jint (*func_arc_flabel_FLabel_getLabelAlign_R_int)(jcontext ctx, jobject self);
#define VTABLE_arc_flabel_FLabel_getLineAlign_R_int 134
typedef jint (*func_arc_flabel_FLabel_getLineAlign_R_int)(jcontext ctx, jobject self);
#define VTABLE_arc_flabel_FLabel_setAlignment_int 135
typedef void (*func_arc_flabel_FLabel_setAlignment_int)(jcontext ctx, jobject self, jint param0);
#define VTABLE_arc_flabel_FLabel_setAlignment_int_int 136
typedef void (*func_arc_flabel_FLabel_setAlignment_int_int)(jcontext ctx, jobject self, jint param0, jint param1);
#define VTABLE_arc_flabel_FLabel_setFontScale_float 137
typedef void (*func_arc_flabel_FLabel_setFontScale_float)(jcontext ctx, jobject self, jfloat param0);
#define VTABLE_arc_flabel_FLabel_setFontScale_float_float 138
typedef void (*func_arc_flabel_FLabel_setFontScale_float_float)(jcontext ctx, jobject self, jfloat param0, jfloat param1);
#define VTABLE_arc_flabel_FLabel_getFontScaleX_R_float 139
typedef jfloat (*func_arc_flabel_FLabel_getFontScaleX_R_float)(jcontext ctx, jobject self);
#define VTABLE_arc_flabel_FLabel_setFontScaleX_float 140
typedef void (*func_arc_flabel_FLabel_setFontScaleX_float)(jcontext ctx, jobject self, jfloat param0);
#define VTABLE_arc_flabel_FLabel_getFontScaleY_R_float 141
typedef jfloat (*func_arc_flabel_FLabel_getFontScaleY_R_float)(jcontext ctx, jobject self);
#define VTABLE_arc_flabel_FLabel_setFontScaleY_float 142
typedef void (*func_arc_flabel_FLabel_setFontScaleY_float)(jcontext ctx, jobject self, jfloat param0);
#define VTABLE_arc_flabel_FLabel_setEllipsis_java_lang_String 143
typedef void (*func_arc_flabel_FLabel_setEllipsis_java_lang_String)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_flabel_FLabel_setEllipsis_boolean 144
typedef void (*func_arc_flabel_FLabel_setEllipsis_boolean)(jcontext ctx, jobject self, jbool param0);
#define VTABLE_arc_flabel_FLabel_getFontCache_R_arc_graphics_g2d_FontCache 145
typedef jobject (*func_arc_flabel_FLabel_getFontCache_R_arc_graphics_g2d_FontCache)(jcontext ctx, jobject self);
#define VTABLE_arc_flabel_FLabel_lambda$setText$0_arc_func_Prov 146
typedef void (*func_arc_flabel_FLabel_lambda$setText$0_arc_func_Prov)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_flabel_FLabel_setText_java_lang_CharSequence_boolean 147
typedef void (*func_arc_flabel_FLabel_setText_java_lang_CharSequence_boolean)(jcontext ctx, jobject self, jobject param0, jbool param1);
#define VTABLE_arc_flabel_FLabel_getOriginalText_R_java_lang_StringBuilder 148
typedef jobject (*func_arc_flabel_FLabel_getOriginalText_R_java_lang_StringBuilder)(jcontext ctx, jobject self);
#define VTABLE_arc_flabel_FLabel_saveOriginalText 149
typedef void (*func_arc_flabel_FLabel_saveOriginalText)(jcontext ctx, jobject self);
#define VTABLE_arc_flabel_FLabel_restoreOriginalText 150
typedef void (*func_arc_flabel_FLabel_restoreOriginalText)(jcontext ctx, jobject self);
#define VTABLE_arc_flabel_FLabel_getTypingListener_R_arc_flabel_FListener 151
typedef jobject (*func_arc_flabel_FLabel_getTypingListener_R_arc_flabel_FListener)(jcontext ctx, jobject self);
#define VTABLE_arc_flabel_FLabel_setTypingListener_arc_flabel_FListener 152
typedef void (*func_arc_flabel_FLabel_setTypingListener_arc_flabel_FListener)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_flabel_FLabel_getClearColor_R_arc_graphics_Color 153
typedef jobject (*func_arc_flabel_FLabel_getClearColor_R_arc_graphics_Color)(jcontext ctx, jobject self);
#define VTABLE_arc_flabel_FLabel_setForceMarkupColor_boolean 154
typedef void (*func_arc_flabel_FLabel_setForceMarkupColor_boolean)(jcontext ctx, jobject self, jbool param0);
#define VTABLE_arc_flabel_FLabel_getDefaultToken_R_java_lang_String 155
typedef jobject (*func_arc_flabel_FLabel_getDefaultToken_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_arc_flabel_FLabel_setDefaultToken_java_lang_String 156
typedef void (*func_arc_flabel_FLabel_setDefaultToken_java_lang_String)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_flabel_FLabel_parseTokens 157
typedef void (*func_arc_flabel_FLabel_parseTokens)(jcontext ctx, jobject self);
#define VTABLE_arc_flabel_FLabel_skipToTheEnd 158
typedef void (*func_arc_flabel_FLabel_skipToTheEnd)(jcontext ctx, jobject self);
#define VTABLE_arc_flabel_FLabel_skipToTheEnd_boolean 159
typedef void (*func_arc_flabel_FLabel_skipToTheEnd_boolean)(jcontext ctx, jobject self, jbool param0);
#define VTABLE_arc_flabel_FLabel_skipToTheEnd_boolean_boolean 160
typedef void (*func_arc_flabel_FLabel_skipToTheEnd_boolean_boolean)(jcontext ctx, jobject self, jbool param0, jbool param1);
#define VTABLE_arc_flabel_FLabel_cancelSkipping 161
typedef void (*func_arc_flabel_FLabel_cancelSkipping)(jcontext ctx, jobject self);
#define VTABLE_arc_flabel_FLabel_isPaused_R_boolean 162
typedef jbool (*func_arc_flabel_FLabel_isPaused_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_arc_flabel_FLabel_pause 163
typedef void (*func_arc_flabel_FLabel_pause)(jcontext ctx, jobject self);
#define VTABLE_arc_flabel_FLabel_resume 164
typedef void (*func_arc_flabel_FLabel_resume)(jcontext ctx, jobject self);
#define VTABLE_arc_flabel_FLabel_hasEnded_R_boolean 165
typedef jbool (*func_arc_flabel_FLabel_hasEnded_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_arc_flabel_FLabel_restart 166
typedef void (*func_arc_flabel_FLabel_restart)(jcontext ctx, jobject self);
#define VTABLE_arc_flabel_FLabel_restart_java_lang_CharSequence 167
typedef void (*func_arc_flabel_FLabel_restart_java_lang_CharSequence)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_flabel_FLabel_getVariables_R_arc_struct_ObjectMap 168
typedef jobject (*func_arc_flabel_FLabel_getVariables_R_arc_struct_ObjectMap)(jcontext ctx, jobject self);
#define VTABLE_arc_flabel_FLabel_setVariable_java_lang_String_java_lang_String 169
typedef void (*func_arc_flabel_FLabel_setVariable_java_lang_String_java_lang_String)(jcontext ctx, jobject self, jobject param0, jobject param1);
#define VTABLE_arc_flabel_FLabel_setVariables_arc_struct_ObjectMap 170
typedef void (*func_arc_flabel_FLabel_setVariables_arc_struct_ObjectMap)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_flabel_FLabel_clearVariables 171
typedef void (*func_arc_flabel_FLabel_clearVariables)(jcontext ctx, jobject self);
#define VTABLE_arc_flabel_FLabel_processCharProgression 172
typedef void (*func_arc_flabel_FLabel_processCharProgression)(jcontext ctx, jobject self);
#define VTABLE_arc_flabel_FLabel_layoutCache 173
typedef void (*func_arc_flabel_FLabel_layoutCache)(jcontext ctx, jobject self);
#define VTABLE_arc_flabel_FLabel_addMissingGlyphs 174
typedef void (*func_arc_flabel_FLabel_addMissingGlyphs)(jcontext ctx, jobject self);
#define VTABLE_arc_flabel_FLabel_lambda$setVariables$0_java_lang_String_java_lang_String 175
typedef void (*func_arc_flabel_FLabel_lambda$setVariables$0_java_lang_String_java_lang_String)(jcontext ctx, jobject self, jobject param0, jobject param1);

void mark_arc_flabel_FLabel(jobject object, jint mark, jint depth);
void clinit_arc_flabel_FLabel(jcontext ctx);
void init_arc_flabel_FLabel_java_lang_CharSequence(jcontext ctx, jobject self, jobject param0);
void M_arc_flabel_FLabel_setText_java_lang_CharSequence(jcontext ctx, jobject self, jobject param0);
void M_arc_flabel_FLabel_setText_java_lang_CharSequence_boolean(jcontext ctx, jobject self, jobject param0, jbool param1);
jobject M_arc_flabel_FLabel_getOriginalText_R_java_lang_StringBuilder(jcontext ctx, jobject self);
void M_arc_flabel_FLabel_saveOriginalText(jcontext ctx, jobject self);
void M_arc_flabel_FLabel_restoreOriginalText(jcontext ctx, jobject self);
jobject M_arc_flabel_FLabel_getTypingListener_R_arc_flabel_FListener(jcontext ctx, jobject self);
void M_arc_flabel_FLabel_setTypingListener_arc_flabel_FListener(jcontext ctx, jobject self, jobject param0);
jobject M_arc_flabel_FLabel_getClearColor_R_arc_graphics_Color(jcontext ctx, jobject self);
void M_arc_flabel_FLabel_setForceMarkupColor_boolean(jcontext ctx, jobject self, jbool param0);
jobject M_arc_flabel_FLabel_getDefaultToken_R_java_lang_String(jcontext ctx, jobject self);
void M_arc_flabel_FLabel_setDefaultToken_java_lang_String(jcontext ctx, jobject self, jobject param0);
void M_arc_flabel_FLabel_parseTokens(jcontext ctx, jobject self);
void M_arc_flabel_FLabel_skipToTheEnd(jcontext ctx, jobject self);
void M_arc_flabel_FLabel_skipToTheEnd_boolean(jcontext ctx, jobject self, jbool param0);
void M_arc_flabel_FLabel_skipToTheEnd_boolean_boolean(jcontext ctx, jobject self, jbool param0, jbool param1);
void M_arc_flabel_FLabel_cancelSkipping(jcontext ctx, jobject self);
jbool M_arc_flabel_FLabel_isPaused_R_boolean(jcontext ctx, jobject self);
void M_arc_flabel_FLabel_pause(jcontext ctx, jobject self);
void M_arc_flabel_FLabel_resume(jcontext ctx, jobject self);
jbool M_arc_flabel_FLabel_hasEnded_R_boolean(jcontext ctx, jobject self);
void M_arc_flabel_FLabel_restart(jcontext ctx, jobject self);
void M_arc_flabel_FLabel_restart_java_lang_CharSequence(jcontext ctx, jobject self, jobject param0);
jobject M_arc_flabel_FLabel_getVariables_R_arc_struct_ObjectMap(jcontext ctx, jobject self);
void M_arc_flabel_FLabel_setVariable_java_lang_String_java_lang_String(jcontext ctx, jobject self, jobject param0, jobject param1);
void M_arc_flabel_FLabel_setVariables_arc_struct_ObjectMap(jcontext ctx, jobject self, jobject param0);
void M_arc_flabel_FLabel_clearVariables(jcontext ctx, jobject self);
void M_arc_flabel_FLabel_act_float(jcontext ctx, jobject self, jfloat param0);
void M_arc_flabel_FLabel_processCharProgression(jcontext ctx, jobject self);
jbool M_arc_flabel_FLabel_remove_R_boolean(jcontext ctx, jobject self);
void M_arc_flabel_FLabel_layout(jcontext ctx, jobject self);
void M_arc_flabel_FLabel_layoutCache(jcontext ctx, jobject self);
void M_arc_flabel_FLabel_addMissingGlyphs(jcontext ctx, jobject self);
void M_arc_flabel_FLabel_draw(jcontext ctx, jobject self);
void M_arc_flabel_FLabel_lambda$setVariables$0_java_lang_String_java_lang_String(jcontext ctx, jobject self, jobject param0, jobject param1);

#ifdef __cplusplus
}
#endif

#endif
