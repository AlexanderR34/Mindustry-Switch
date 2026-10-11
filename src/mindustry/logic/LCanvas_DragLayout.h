#ifndef HEADER_mindustry_logic_LCanvas$DragLayout
#define HEADER_mindustry_logic_LCanvas$DragLayout

#include "Clearwing.h"
#include "arc/scene/ui/layout/WidgetGroup.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct mindustry_logic_LCanvas$DragLayout {
	arc_scene_ui_layout_WidgetGroup parent;
	jfloat F_space;
	jfloat F_prefWidth;
	jfloat F_prefHeight;
	jref F_seq;
	jint F_insertPosition;
	jbool F_invalidated;
	jref F_jumps;
	jref F_processedJumps;
	jref F_reprBefore;
	jref F_reprAfter;
	jbool F_updateJumpHeights;
	jref F_this$0;
} mindustry_logic_LCanvas$DragLayout;

extern Class class_mindustry_logic_LCanvas$DragLayout;


#define VTABLE_mindustry_logic_LCanvas$DragLayout_hashCode_R_int 0
typedef jint (*func_mindustry_logic_LCanvas$DragLayout_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_mindustry_logic_LCanvas$DragLayout_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_mindustry_logic_LCanvas$DragLayout_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_logic_LCanvas$DragLayout_clone_R_java_lang_Object 2
typedef jobject (*func_mindustry_logic_LCanvas$DragLayout_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_mindustry_logic_LCanvas$DragLayout_getClass_R_java_lang_Class 3
typedef jobject (*func_mindustry_logic_LCanvas$DragLayout_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_mindustry_logic_LCanvas$DragLayout_toString_R_java_lang_String 4
typedef jobject (*func_mindustry_logic_LCanvas$DragLayout_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_mindustry_logic_LCanvas$DragLayout_finalize 5
typedef void (*func_mindustry_logic_LCanvas$DragLayout_finalize)(jcontext ctx, jobject self);
#define VTABLE_mindustry_logic_LCanvas$DragLayout_notify 6
typedef void (*func_mindustry_logic_LCanvas$DragLayout_notify)(jcontext ctx, jobject self);
#define VTABLE_mindustry_logic_LCanvas$DragLayout_notifyAll 7
typedef void (*func_mindustry_logic_LCanvas$DragLayout_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_mindustry_logic_LCanvas$DragLayout_wait 8
typedef void (*func_mindustry_logic_LCanvas$DragLayout_wait)(jcontext ctx, jobject self);
#define VTABLE_mindustry_logic_LCanvas$DragLayout_wait_long 9
typedef void (*func_mindustry_logic_LCanvas$DragLayout_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_mindustry_logic_LCanvas$DragLayout_wait_long_int 10
typedef void (*func_mindustry_logic_LCanvas$DragLayout_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);
#define VTABLE_mindustry_logic_LCanvas$DragLayout_draw 11
typedef void (*func_mindustry_logic_LCanvas$DragLayout_draw)(jcontext ctx, jobject self);
#define VTABLE_mindustry_logic_LCanvas$DragLayout_act_float 12
typedef void (*func_mindustry_logic_LCanvas$DragLayout_act_float)(jcontext ctx, jobject self, jfloat param0);
#define VTABLE_mindustry_logic_LCanvas$DragLayout_updateVisibility 13
typedef void (*func_mindustry_logic_LCanvas$DragLayout_updateVisibility)(jcontext ctx, jobject self);
#define VTABLE_mindustry_logic_LCanvas$DragLayout_hasMouse_R_boolean 14
typedef jbool (*func_mindustry_logic_LCanvas$DragLayout_hasMouse_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_mindustry_logic_LCanvas$DragLayout_hasKeyboard_R_boolean 15
typedef jbool (*func_mindustry_logic_LCanvas$DragLayout_hasKeyboard_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_mindustry_logic_LCanvas$DragLayout_hasScroll_R_boolean 16
typedef jbool (*func_mindustry_logic_LCanvas$DragLayout_hasScroll_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_mindustry_logic_LCanvas$DragLayout_requestKeyboard 17
typedef void (*func_mindustry_logic_LCanvas$DragLayout_requestKeyboard)(jcontext ctx, jobject self);
#define VTABLE_mindustry_logic_LCanvas$DragLayout_requestScroll 18
typedef void (*func_mindustry_logic_LCanvas$DragLayout_requestScroll)(jcontext ctx, jobject self);
#define VTABLE_mindustry_logic_LCanvas$DragLayout_fire_arc_scene_event_SceneEvent_R_boolean 19
typedef jbool (*func_mindustry_logic_LCanvas$DragLayout_fire_arc_scene_event_SceneEvent_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_logic_LCanvas$DragLayout_notify_arc_scene_event_SceneEvent_boolean_R_boolean 20
typedef jbool (*func_mindustry_logic_LCanvas$DragLayout_notify_arc_scene_event_SceneEvent_boolean_R_boolean)(jcontext ctx, jobject self, jobject param0, jbool param1);
#define VTABLE_mindustry_logic_LCanvas$DragLayout_hit_float_float_boolean_R_arc_scene_Element 21
typedef jobject (*func_mindustry_logic_LCanvas$DragLayout_hit_float_float_boolean_R_arc_scene_Element)(jcontext ctx, jobject self, jfloat param0, jfloat param1, jbool param2);
#define VTABLE_mindustry_logic_LCanvas$DragLayout_remove_R_boolean 22
typedef jbool (*func_mindustry_logic_LCanvas$DragLayout_remove_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_mindustry_logic_LCanvas$DragLayout_dragged_arc_func_Floatc2 23
typedef void (*func_mindustry_logic_LCanvas$DragLayout_dragged_arc_func_Floatc2)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_logic_LCanvas$DragLayout_scrolled_arc_func_Floatc 24
typedef void (*func_mindustry_logic_LCanvas$DragLayout_scrolled_arc_func_Floatc)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_logic_LCanvas$DragLayout_addListener_arc_scene_event_EventListener_R_boolean 25
typedef jbool (*func_mindustry_logic_LCanvas$DragLayout_addListener_arc_scene_event_EventListener_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_logic_LCanvas$DragLayout_removeListener_arc_scene_event_EventListener_R_boolean 26
typedef jbool (*func_mindustry_logic_LCanvas$DragLayout_removeListener_arc_scene_event_EventListener_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_logic_LCanvas$DragLayout_getListeners_R_arc_struct_Seq 27
typedef jobject (*func_mindustry_logic_LCanvas$DragLayout_getListeners_R_arc_struct_Seq)(jcontext ctx, jobject self);
#define VTABLE_mindustry_logic_LCanvas$DragLayout_addCaptureListener_arc_scene_event_EventListener_R_boolean 28
typedef jbool (*func_mindustry_logic_LCanvas$DragLayout_addCaptureListener_arc_scene_event_EventListener_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_logic_LCanvas$DragLayout_removeCaptureListener_arc_scene_event_EventListener_R_boolean 29
typedef jbool (*func_mindustry_logic_LCanvas$DragLayout_removeCaptureListener_arc_scene_event_EventListener_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_logic_LCanvas$DragLayout_getCaptureListeners_R_arc_struct_Seq 30
typedef jobject (*func_mindustry_logic_LCanvas$DragLayout_getCaptureListeners_R_arc_struct_Seq)(jcontext ctx, jobject self);
#define VTABLE_mindustry_logic_LCanvas$DragLayout_addAction_arc_scene_Action 31
typedef void (*func_mindustry_logic_LCanvas$DragLayout_addAction_arc_scene_Action)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_logic_LCanvas$DragLayout_actions_Array1_arc_scene_Action 32
typedef void (*func_mindustry_logic_LCanvas$DragLayout_actions_Array1_arc_scene_Action)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_logic_LCanvas$DragLayout_removeAction_arc_scene_Action 33
typedef void (*func_mindustry_logic_LCanvas$DragLayout_removeAction_arc_scene_Action)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_logic_LCanvas$DragLayout_getActions_R_arc_struct_Seq 34
typedef jobject (*func_mindustry_logic_LCanvas$DragLayout_getActions_R_arc_struct_Seq)(jcontext ctx, jobject self);
#define VTABLE_mindustry_logic_LCanvas$DragLayout_hasActions_R_boolean 35
typedef jbool (*func_mindustry_logic_LCanvas$DragLayout_hasActions_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_mindustry_logic_LCanvas$DragLayout_clearActions 36
typedef void (*func_mindustry_logic_LCanvas$DragLayout_clearActions)(jcontext ctx, jobject self);
#define VTABLE_mindustry_logic_LCanvas$DragLayout_clearListeners 37
typedef void (*func_mindustry_logic_LCanvas$DragLayout_clearListeners)(jcontext ctx, jobject self);
#define VTABLE_mindustry_logic_LCanvas$DragLayout_clear 38
typedef void (*func_mindustry_logic_LCanvas$DragLayout_clear)(jcontext ctx, jobject self);
#define VTABLE_mindustry_logic_LCanvas$DragLayout_getScene_R_arc_scene_Scene 39
typedef jobject (*func_mindustry_logic_LCanvas$DragLayout_getScene_R_arc_scene_Scene)(jcontext ctx, jobject self);
#define VTABLE_mindustry_logic_LCanvas$DragLayout_setScene_arc_scene_Scene 40
typedef void (*func_mindustry_logic_LCanvas$DragLayout_setScene_arc_scene_Scene)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_logic_LCanvas$DragLayout_isDescendantOf_arc_func_Boolf_R_boolean 41
typedef jbool (*func_mindustry_logic_LCanvas$DragLayout_isDescendantOf_arc_func_Boolf_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_logic_LCanvas$DragLayout_isDescendantOf_arc_scene_Element_R_boolean 42
typedef jbool (*func_mindustry_logic_LCanvas$DragLayout_isDescendantOf_arc_scene_Element_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_logic_LCanvas$DragLayout_isAscendantOf_arc_scene_Element_R_boolean 43
typedef jbool (*func_mindustry_logic_LCanvas$DragLayout_isAscendantOf_arc_scene_Element_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_logic_LCanvas$DragLayout_hasParent_R_boolean 44
typedef jbool (*func_mindustry_logic_LCanvas$DragLayout_hasParent_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_mindustry_logic_LCanvas$DragLayout_isTouchable_R_boolean 45
typedef jbool (*func_mindustry_logic_LCanvas$DragLayout_isTouchable_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_mindustry_logic_LCanvas$DragLayout_getX_int_R_float 46
typedef jfloat (*func_mindustry_logic_LCanvas$DragLayout_getX_int_R_float)(jcontext ctx, jobject self, jint param0);
#define VTABLE_mindustry_logic_LCanvas$DragLayout_getY_int_R_float 47
typedef jfloat (*func_mindustry_logic_LCanvas$DragLayout_getY_int_R_float)(jcontext ctx, jobject self, jint param0);
#define VTABLE_mindustry_logic_LCanvas$DragLayout_setPosition_float_float 48
typedef void (*func_mindustry_logic_LCanvas$DragLayout_setPosition_float_float)(jcontext ctx, jobject self, jfloat param0, jfloat param1);
#define VTABLE_mindustry_logic_LCanvas$DragLayout_setPosition_float_float_int 49
typedef void (*func_mindustry_logic_LCanvas$DragLayout_setPosition_float_float_int)(jcontext ctx, jobject self, jfloat param0, jfloat param1, jint param2);
#define VTABLE_mindustry_logic_LCanvas$DragLayout_moveBy_float_float 50
typedef void (*func_mindustry_logic_LCanvas$DragLayout_moveBy_float_float)(jcontext ctx, jobject self, jfloat param0, jfloat param1);
#define VTABLE_mindustry_logic_LCanvas$DragLayout_getWidth_R_float 51
typedef jfloat (*func_mindustry_logic_LCanvas$DragLayout_getWidth_R_float)(jcontext ctx, jobject self);
#define VTABLE_mindustry_logic_LCanvas$DragLayout_setWidth_float 52
typedef void (*func_mindustry_logic_LCanvas$DragLayout_setWidth_float)(jcontext ctx, jobject self, jfloat param0);
#define VTABLE_mindustry_logic_LCanvas$DragLayout_getHeight_R_float 53
typedef jfloat (*func_mindustry_logic_LCanvas$DragLayout_getHeight_R_float)(jcontext ctx, jobject self);
#define VTABLE_mindustry_logic_LCanvas$DragLayout_setHeight_float 54
typedef void (*func_mindustry_logic_LCanvas$DragLayout_setHeight_float)(jcontext ctx, jobject self, jfloat param0);
#define VTABLE_mindustry_logic_LCanvas$DragLayout_getTop_R_float 55
typedef jfloat (*func_mindustry_logic_LCanvas$DragLayout_getTop_R_float)(jcontext ctx, jobject self);
#define VTABLE_mindustry_logic_LCanvas$DragLayout_getRight_R_float 56
typedef jfloat (*func_mindustry_logic_LCanvas$DragLayout_getRight_R_float)(jcontext ctx, jobject self);
#define VTABLE_mindustry_logic_LCanvas$DragLayout_sizeChanged 57
typedef void (*func_mindustry_logic_LCanvas$DragLayout_sizeChanged)(jcontext ctx, jobject self);
#define VTABLE_mindustry_logic_LCanvas$DragLayout_rotationChanged 58
typedef void (*func_mindustry_logic_LCanvas$DragLayout_rotationChanged)(jcontext ctx, jobject self);
#define VTABLE_mindustry_logic_LCanvas$DragLayout_setSize_float 59
typedef void (*func_mindustry_logic_LCanvas$DragLayout_setSize_float)(jcontext ctx, jobject self, jfloat param0);
#define VTABLE_mindustry_logic_LCanvas$DragLayout_setSize_float_float 60
typedef void (*func_mindustry_logic_LCanvas$DragLayout_setSize_float_float)(jcontext ctx, jobject self, jfloat param0, jfloat param1);
#define VTABLE_mindustry_logic_LCanvas$DragLayout_sizeBy_float 61
typedef void (*func_mindustry_logic_LCanvas$DragLayout_sizeBy_float)(jcontext ctx, jobject self, jfloat param0);
#define VTABLE_mindustry_logic_LCanvas$DragLayout_sizeBy_float_float 62
typedef void (*func_mindustry_logic_LCanvas$DragLayout_sizeBy_float_float)(jcontext ctx, jobject self, jfloat param0, jfloat param1);
#define VTABLE_mindustry_logic_LCanvas$DragLayout_setBounds_float_float_float_float 63
typedef void (*func_mindustry_logic_LCanvas$DragLayout_setBounds_float_float_float_float)(jcontext ctx, jobject self, jfloat param0, jfloat param1, jfloat param2, jfloat param3);
#define VTABLE_mindustry_logic_LCanvas$DragLayout_setOrigin_float_float 64
typedef void (*func_mindustry_logic_LCanvas$DragLayout_setOrigin_float_float)(jcontext ctx, jobject self, jfloat param0, jfloat param1);
#define VTABLE_mindustry_logic_LCanvas$DragLayout_setOrigin_int 65
typedef void (*func_mindustry_logic_LCanvas$DragLayout_setOrigin_int)(jcontext ctx, jobject self, jint param0);
#define VTABLE_mindustry_logic_LCanvas$DragLayout_setScale_float 66
typedef void (*func_mindustry_logic_LCanvas$DragLayout_setScale_float)(jcontext ctx, jobject self, jfloat param0);
#define VTABLE_mindustry_logic_LCanvas$DragLayout_setScale_float_float 67
typedef void (*func_mindustry_logic_LCanvas$DragLayout_setScale_float_float)(jcontext ctx, jobject self, jfloat param0, jfloat param1);
#define VTABLE_mindustry_logic_LCanvas$DragLayout_scaleBy_float 68
typedef void (*func_mindustry_logic_LCanvas$DragLayout_scaleBy_float)(jcontext ctx, jobject self, jfloat param0);
#define VTABLE_mindustry_logic_LCanvas$DragLayout_scaleBy_float_float 69
typedef void (*func_mindustry_logic_LCanvas$DragLayout_scaleBy_float_float)(jcontext ctx, jobject self, jfloat param0, jfloat param1);
#define VTABLE_mindustry_logic_LCanvas$DragLayout_getRotation_R_float 70
typedef jfloat (*func_mindustry_logic_LCanvas$DragLayout_getRotation_R_float)(jcontext ctx, jobject self);
#define VTABLE_mindustry_logic_LCanvas$DragLayout_setRotation_float 71
typedef void (*func_mindustry_logic_LCanvas$DragLayout_setRotation_float)(jcontext ctx, jobject self, jfloat param0);
#define VTABLE_mindustry_logic_LCanvas$DragLayout_setRotationOrigin_float_int 72
typedef void (*func_mindustry_logic_LCanvas$DragLayout_setRotationOrigin_float_int)(jcontext ctx, jobject self, jfloat param0, jint param1);
#define VTABLE_mindustry_logic_LCanvas$DragLayout_rotateBy_float 73
typedef void (*func_mindustry_logic_LCanvas$DragLayout_rotateBy_float)(jcontext ctx, jobject self, jfloat param0);
#define VTABLE_mindustry_logic_LCanvas$DragLayout_setColor_float_float_float_float 74
typedef void (*func_mindustry_logic_LCanvas$DragLayout_setColor_float_float_float_float)(jcontext ctx, jobject self, jfloat param0, jfloat param1, jfloat param2, jfloat param3);
#define VTABLE_mindustry_logic_LCanvas$DragLayout_setColor_arc_graphics_Color 75
typedef void (*func_mindustry_logic_LCanvas$DragLayout_setColor_arc_graphics_Color)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_logic_LCanvas$DragLayout_toFront 76
typedef void (*func_mindustry_logic_LCanvas$DragLayout_toFront)(jcontext ctx, jobject self);
#define VTABLE_mindustry_logic_LCanvas$DragLayout_toBack 77
typedef void (*func_mindustry_logic_LCanvas$DragLayout_toBack)(jcontext ctx, jobject self);
#define VTABLE_mindustry_logic_LCanvas$DragLayout_getZIndex_R_int 78
typedef jint (*func_mindustry_logic_LCanvas$DragLayout_getZIndex_R_int)(jcontext ctx, jobject self);
#define VTABLE_mindustry_logic_LCanvas$DragLayout_setZIndex_int 79
typedef void (*func_mindustry_logic_LCanvas$DragLayout_setZIndex_int)(jcontext ctx, jobject self, jint param0);
#define VTABLE_mindustry_logic_LCanvas$DragLayout_clipBegin_R_boolean 80
typedef jbool (*func_mindustry_logic_LCanvas$DragLayout_clipBegin_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_mindustry_logic_LCanvas$DragLayout_clipBegin_float_float_float_float_R_boolean 81
typedef jbool (*func_mindustry_logic_LCanvas$DragLayout_clipBegin_float_float_float_float_R_boolean)(jcontext ctx, jobject self, jfloat param0, jfloat param1, jfloat param2, jfloat param3);
#define VTABLE_mindustry_logic_LCanvas$DragLayout_clipEnd 82
typedef void (*func_mindustry_logic_LCanvas$DragLayout_clipEnd)(jcontext ctx, jobject self);
#define VTABLE_mindustry_logic_LCanvas$DragLayout_screenToLocalCoordinates_arc_math_geom_Vec2_R_arc_math_geom_Vec2 83
typedef jobject (*func_mindustry_logic_LCanvas$DragLayout_screenToLocalCoordinates_arc_math_geom_Vec2_R_arc_math_geom_Vec2)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_logic_LCanvas$DragLayout_stageToLocalCoordinates_arc_math_geom_Vec2_R_arc_math_geom_Vec2 84
typedef jobject (*func_mindustry_logic_LCanvas$DragLayout_stageToLocalCoordinates_arc_math_geom_Vec2_R_arc_math_geom_Vec2)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_logic_LCanvas$DragLayout_localToStageCoordinates_arc_math_geom_Vec2_R_arc_math_geom_Vec2 85
typedef jobject (*func_mindustry_logic_LCanvas$DragLayout_localToStageCoordinates_arc_math_geom_Vec2_R_arc_math_geom_Vec2)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_logic_LCanvas$DragLayout_localToParentCoordinates_arc_math_geom_Vec2_R_arc_math_geom_Vec2 86
typedef jobject (*func_mindustry_logic_LCanvas$DragLayout_localToParentCoordinates_arc_math_geom_Vec2_R_arc_math_geom_Vec2)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_logic_LCanvas$DragLayout_localToAscendantCoordinates_arc_scene_Element_arc_math_geom_Vec2_R_arc_math_geom_Vec2 87
typedef jobject (*func_mindustry_logic_LCanvas$DragLayout_localToAscendantCoordinates_arc_scene_Element_arc_math_geom_Vec2_R_arc_math_geom_Vec2)(jcontext ctx, jobject self, jobject param0, jobject param1);
#define VTABLE_mindustry_logic_LCanvas$DragLayout_parentToLocalCoordinates_arc_math_geom_Vec2_R_arc_math_geom_Vec2 88
typedef jobject (*func_mindustry_logic_LCanvas$DragLayout_parentToLocalCoordinates_arc_math_geom_Vec2_R_arc_math_geom_Vec2)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_logic_LCanvas$DragLayout_getMinWidth_R_float 89
typedef jfloat (*func_mindustry_logic_LCanvas$DragLayout_getMinWidth_R_float)(jcontext ctx, jobject self);
#define VTABLE_mindustry_logic_LCanvas$DragLayout_getMinHeight_R_float 90
typedef jfloat (*func_mindustry_logic_LCanvas$DragLayout_getMinHeight_R_float)(jcontext ctx, jobject self);
#define VTABLE_mindustry_logic_LCanvas$DragLayout_getPrefWidth_R_float 91
typedef jfloat (*func_mindustry_logic_LCanvas$DragLayout_getPrefWidth_R_float)(jcontext ctx, jobject self);
#define VTABLE_mindustry_logic_LCanvas$DragLayout_getPrefHeight_R_float 92
typedef jfloat (*func_mindustry_logic_LCanvas$DragLayout_getPrefHeight_R_float)(jcontext ctx, jobject self);
#define VTABLE_mindustry_logic_LCanvas$DragLayout_getMaxWidth_R_float 93
typedef jfloat (*func_mindustry_logic_LCanvas$DragLayout_getMaxWidth_R_float)(jcontext ctx, jobject self);
#define VTABLE_mindustry_logic_LCanvas$DragLayout_getMaxHeight_R_float 94
typedef jfloat (*func_mindustry_logic_LCanvas$DragLayout_getMaxHeight_R_float)(jcontext ctx, jobject self);
#define VTABLE_mindustry_logic_LCanvas$DragLayout_setLayoutEnabled_boolean 95
typedef void (*func_mindustry_logic_LCanvas$DragLayout_setLayoutEnabled_boolean)(jcontext ctx, jobject self, jbool param0);
#define VTABLE_mindustry_logic_LCanvas$DragLayout_validate 96
typedef void (*func_mindustry_logic_LCanvas$DragLayout_validate)(jcontext ctx, jobject self);
#define VTABLE_mindustry_logic_LCanvas$DragLayout_needsLayout_R_boolean 97
typedef jbool (*func_mindustry_logic_LCanvas$DragLayout_needsLayout_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_mindustry_logic_LCanvas$DragLayout_invalidate 98
typedef void (*func_mindustry_logic_LCanvas$DragLayout_invalidate)(jcontext ctx, jobject self);
#define VTABLE_mindustry_logic_LCanvas$DragLayout_invalidateHierarchy 99
typedef void (*func_mindustry_logic_LCanvas$DragLayout_invalidateHierarchy)(jcontext ctx, jobject self);
#define VTABLE_mindustry_logic_LCanvas$DragLayout_pack 100
typedef void (*func_mindustry_logic_LCanvas$DragLayout_pack)(jcontext ctx, jobject self);
#define VTABLE_mindustry_logic_LCanvas$DragLayout_setFillParent_boolean 101
typedef void (*func_mindustry_logic_LCanvas$DragLayout_setFillParent_boolean)(jcontext ctx, jobject self, jbool param0);
#define VTABLE_mindustry_logic_LCanvas$DragLayout_layout 102
typedef void (*func_mindustry_logic_LCanvas$DragLayout_layout)(jcontext ctx, jobject self);
#define VTABLE_mindustry_logic_LCanvas$DragLayout_keepInStage 103
typedef void (*func_mindustry_logic_LCanvas$DragLayout_keepInStage)(jcontext ctx, jobject self);
#define VTABLE_mindustry_logic_LCanvas$DragLayout_setTranslation_float_float 104
typedef void (*func_mindustry_logic_LCanvas$DragLayout_setTranslation_float_float)(jcontext ctx, jobject self, jfloat param0, jfloat param1);
#define VTABLE_mindustry_logic_LCanvas$DragLayout_keyDown_arc_input_KeyCode_java_lang_Runnable 105
typedef void (*func_mindustry_logic_LCanvas$DragLayout_keyDown_arc_input_KeyCode_java_lang_Runnable)(jcontext ctx, jobject self, jobject param0, jobject param1);
#define VTABLE_mindustry_logic_LCanvas$DragLayout_keyDown_arc_func_Cons 106
typedef void (*func_mindustry_logic_LCanvas$DragLayout_keyDown_arc_func_Cons)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_logic_LCanvas$DragLayout_fireClick 107
typedef void (*func_mindustry_logic_LCanvas$DragLayout_fireClick)(jcontext ctx, jobject self);
#define VTABLE_mindustry_logic_LCanvas$DragLayout_clicked_java_lang_Runnable_R_arc_scene_event_ClickListener 108
typedef jobject (*func_mindustry_logic_LCanvas$DragLayout_clicked_java_lang_Runnable_R_arc_scene_event_ClickListener)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_logic_LCanvas$DragLayout_clicked_arc_input_KeyCode_java_lang_Runnable_R_arc_scene_event_ClickListener 109
typedef jobject (*func_mindustry_logic_LCanvas$DragLayout_clicked_arc_input_KeyCode_java_lang_Runnable_R_arc_scene_event_ClickListener)(jcontext ctx, jobject self, jobject param0, jobject param1);
#define VTABLE_mindustry_logic_LCanvas$DragLayout_clicked_arc_func_Cons_java_lang_Runnable_R_arc_scene_event_ClickListener 110
typedef jobject (*func_mindustry_logic_LCanvas$DragLayout_clicked_arc_func_Cons_java_lang_Runnable_R_arc_scene_event_ClickListener)(jcontext ctx, jobject self, jobject param0, jobject param1);
#define VTABLE_mindustry_logic_LCanvas$DragLayout_clicked_arc_func_Cons_arc_func_Cons_R_arc_scene_event_ClickListener 111
typedef jobject (*func_mindustry_logic_LCanvas$DragLayout_clicked_arc_func_Cons_arc_func_Cons_R_arc_scene_event_ClickListener)(jcontext ctx, jobject self, jobject param0, jobject param1);
#define VTABLE_mindustry_logic_LCanvas$DragLayout_tapped_java_lang_Runnable_R_arc_scene_event_InputListener 112
typedef jobject (*func_mindustry_logic_LCanvas$DragLayout_tapped_java_lang_Runnable_R_arc_scene_event_InputListener)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_logic_LCanvas$DragLayout_hovered_java_lang_Runnable 113
typedef void (*func_mindustry_logic_LCanvas$DragLayout_hovered_java_lang_Runnable)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_logic_LCanvas$DragLayout_exited_java_lang_Runnable 114
typedef void (*func_mindustry_logic_LCanvas$DragLayout_exited_java_lang_Runnable)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_logic_LCanvas$DragLayout_released_java_lang_Runnable 115
typedef void (*func_mindustry_logic_LCanvas$DragLayout_released_java_lang_Runnable)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_logic_LCanvas$DragLayout_change 116
typedef void (*func_mindustry_logic_LCanvas$DragLayout_change)(jcontext ctx, jobject self);
#define VTABLE_mindustry_logic_LCanvas$DragLayout_changed_java_lang_Runnable 117
typedef void (*func_mindustry_logic_LCanvas$DragLayout_changed_java_lang_Runnable)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_logic_LCanvas$DragLayout_update_java_lang_Runnable_R_arc_scene_Element 118
typedef jobject (*func_mindustry_logic_LCanvas$DragLayout_update_java_lang_Runnable_R_arc_scene_Element)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_logic_LCanvas$DragLayout_visible_arc_func_Boolp_R_arc_scene_Element 119
typedef jobject (*func_mindustry_logic_LCanvas$DragLayout_visible_arc_func_Boolp_R_arc_scene_Element)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_logic_LCanvas$DragLayout_touchable_arc_func_Prov 120
typedef void (*func_mindustry_logic_LCanvas$DragLayout_touchable_arc_func_Prov)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_logic_LCanvas$DragLayout_setCullingArea_arc_math_geom_Rect 121
typedef void (*func_mindustry_logic_LCanvas$DragLayout_setCullingArea_arc_math_geom_Rect)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_logic_LCanvas$DragLayout_drawChildren 122
typedef void (*func_mindustry_logic_LCanvas$DragLayout_drawChildren)(jcontext ctx, jobject self);
#define VTABLE_mindustry_logic_LCanvas$DragLayout_computeTransform_R_arc_math_Mat 123
typedef jobject (*func_mindustry_logic_LCanvas$DragLayout_computeTransform_R_arc_math_Mat)(jcontext ctx, jobject self);
#define VTABLE_mindustry_logic_LCanvas$DragLayout_applyTransform_arc_math_Mat 124
typedef void (*func_mindustry_logic_LCanvas$DragLayout_applyTransform_arc_math_Mat)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_logic_LCanvas$DragLayout_resetTransform 125
typedef void (*func_mindustry_logic_LCanvas$DragLayout_resetTransform)(jcontext ctx, jobject self);
#define VTABLE_mindustry_logic_LCanvas$DragLayout_getCullingArea_R_arc_math_geom_Rect 126
typedef jobject (*func_mindustry_logic_LCanvas$DragLayout_getCullingArea_R_arc_math_geom_Rect)(jcontext ctx, jobject self);
#define VTABLE_mindustry_logic_LCanvas$DragLayout_childrenChanged 127
typedef void (*func_mindustry_logic_LCanvas$DragLayout_childrenChanged)(jcontext ctx, jobject self);
#define VTABLE_mindustry_logic_LCanvas$DragLayout_forEach_arc_func_Cons 128
typedef void (*func_mindustry_logic_LCanvas$DragLayout_forEach_arc_func_Cons)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_logic_LCanvas$DragLayout_fill_arc_scene_ui_layout_Table$DrawRect_R_arc_scene_Element 129
typedef jobject (*func_mindustry_logic_LCanvas$DragLayout_fill_arc_scene_ui_layout_Table$DrawRect_R_arc_scene_Element)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_logic_LCanvas$DragLayout_fill_arc_func_Cons 130
typedef void (*func_mindustry_logic_LCanvas$DragLayout_fill_arc_func_Cons)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_logic_LCanvas$DragLayout_fill_arc_scene_style_Drawable_arc_func_Cons 131
typedef void (*func_mindustry_logic_LCanvas$DragLayout_fill_arc_scene_style_Drawable_arc_func_Cons)(jcontext ctx, jobject self, jobject param0, jobject param1);
#define VTABLE_mindustry_logic_LCanvas$DragLayout_addChild_arc_scene_Element 132
typedef void (*func_mindustry_logic_LCanvas$DragLayout_addChild_arc_scene_Element)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_logic_LCanvas$DragLayout_addChildAt_int_arc_scene_Element 133
typedef void (*func_mindustry_logic_LCanvas$DragLayout_addChildAt_int_arc_scene_Element)(jcontext ctx, jobject self, jint param0, jobject param1);
#define VTABLE_mindustry_logic_LCanvas$DragLayout_addChildBefore_arc_scene_Element_arc_scene_Element 134
typedef void (*func_mindustry_logic_LCanvas$DragLayout_addChildBefore_arc_scene_Element_arc_scene_Element)(jcontext ctx, jobject self, jobject param0, jobject param1);
#define VTABLE_mindustry_logic_LCanvas$DragLayout_addChildAfter_arc_scene_Element_arc_scene_Element 135
typedef void (*func_mindustry_logic_LCanvas$DragLayout_addChildAfter_arc_scene_Element_arc_scene_Element)(jcontext ctx, jobject self, jobject param0, jobject param1);
#define VTABLE_mindustry_logic_LCanvas$DragLayout_removeChild_arc_scene_Element_R_boolean 136
typedef jbool (*func_mindustry_logic_LCanvas$DragLayout_removeChild_arc_scene_Element_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_logic_LCanvas$DragLayout_removeChild_arc_scene_Element_boolean_R_boolean 137
typedef jbool (*func_mindustry_logic_LCanvas$DragLayout_removeChild_arc_scene_Element_boolean_R_boolean)(jcontext ctx, jobject self, jobject param0, jbool param1);
#define VTABLE_mindustry_logic_LCanvas$DragLayout_clearChildren 138
typedef void (*func_mindustry_logic_LCanvas$DragLayout_clearChildren)(jcontext ctx, jobject self);
#define VTABLE_mindustry_logic_LCanvas$DragLayout_find_java_lang_String_R_arc_scene_Element 139
typedef jobject (*func_mindustry_logic_LCanvas$DragLayout_find_java_lang_String_R_arc_scene_Element)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_logic_LCanvas$DragLayout_findVisible_java_lang_String_R_arc_scene_Element 140
typedef jobject (*func_mindustry_logic_LCanvas$DragLayout_findVisible_java_lang_String_R_arc_scene_Element)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_logic_LCanvas$DragLayout_find_arc_func_Boolf_R_arc_scene_Element 141
typedef jobject (*func_mindustry_logic_LCanvas$DragLayout_find_arc_func_Boolf_R_arc_scene_Element)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_logic_LCanvas$DragLayout_swapActor_int_int_R_boolean 142
typedef jbool (*func_mindustry_logic_LCanvas$DragLayout_swapActor_int_int_R_boolean)(jcontext ctx, jobject self, jint param0, jint param1);
#define VTABLE_mindustry_logic_LCanvas$DragLayout_swapActor_arc_scene_Element_arc_scene_Element_R_boolean 143
typedef jbool (*func_mindustry_logic_LCanvas$DragLayout_swapActor_arc_scene_Element_arc_scene_Element_R_boolean)(jcontext ctx, jobject self, jobject param0, jobject param1);
#define VTABLE_mindustry_logic_LCanvas$DragLayout_getChildren_R_arc_struct_SnapshotSeq 144
typedef jobject (*func_mindustry_logic_LCanvas$DragLayout_getChildren_R_arc_struct_SnapshotSeq)(jcontext ctx, jobject self);
#define VTABLE_mindustry_logic_LCanvas$DragLayout_hasChildren_R_boolean 145
typedef jbool (*func_mindustry_logic_LCanvas$DragLayout_hasChildren_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_mindustry_logic_LCanvas$DragLayout_isTransform_R_boolean 146
typedef jbool (*func_mindustry_logic_LCanvas$DragLayout_isTransform_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_mindustry_logic_LCanvas$DragLayout_setTransform_boolean 147
typedef void (*func_mindustry_logic_LCanvas$DragLayout_setTransform_boolean)(jcontext ctx, jobject self, jbool param0);
#define VTABLE_mindustry_logic_LCanvas$DragLayout_localToDescendantCoordinates_arc_scene_Element_arc_math_geom_Vec2_R_arc_math_geom_Vec2 148
typedef jobject (*func_mindustry_logic_LCanvas$DragLayout_localToDescendantCoordinates_arc_scene_Element_arc_math_geom_Vec2_R_arc_math_geom_Vec2)(jcontext ctx, jobject self, jobject param0, jobject param1);
#define VTABLE_mindustry_logic_LCanvas$DragLayout_toString_java_lang_StringBuilder_int 149
typedef void (*func_mindustry_logic_LCanvas$DragLayout_toString_java_lang_StringBuilder_int)(jcontext ctx, jobject self, jobject param0, jint param1);
#define VTABLE_mindustry_logic_LCanvas$DragLayout_setLayoutEnabled_arc_scene_Group_boolean 150
typedef void (*func_mindustry_logic_LCanvas$DragLayout_setLayoutEnabled_arc_scene_Group_boolean)(jcontext ctx, jobject self, jobject param0, jbool param1);
#define VTABLE_mindustry_logic_LCanvas$DragLayout_setJumpHeights 151
typedef void (*func_mindustry_logic_LCanvas$DragLayout_setJumpHeights)(jcontext ctx, jobject self);
#define VTABLE_mindustry_logic_LCanvas$DragLayout_getJumpHeight_int_arc_struct_Seq_arc_struct_Bits_R_int 152
typedef jint (*func_mindustry_logic_LCanvas$DragLayout_getJumpHeight_int_arc_struct_Seq_arc_struct_Bits_R_int)(jcontext ctx, jobject self, jint param0, jobject param1, jobject param2);
#define VTABLE_mindustry_logic_LCanvas$DragLayout_finishLayout 153
typedef void (*func_mindustry_logic_LCanvas$DragLayout_finishLayout)(jcontext ctx, jobject self);
#define VTABLE_mindustry_logic_LCanvas$DragLayout_lambda$setJumpHeights$3_arc_scene_Element 154
typedef void (*func_mindustry_logic_LCanvas$DragLayout_lambda$setJumpHeights$3_arc_scene_Element)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_logic_LCanvas$DragLayout_lambda$setJumpHeights$0_arc_scene_Element 155
typedef void (*func_mindustry_logic_LCanvas$DragLayout_lambda$setJumpHeights$0_arc_scene_Element)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_logic_LCanvas$DragLayout_lambda$layout$0_arc_scene_Element_R_float 156
typedef jfloat (*func_mindustry_logic_LCanvas$DragLayout_lambda$layout$0_arc_scene_Element_R_float)(jcontext ctx, jobject self, jobject param0);

void mark_mindustry_logic_LCanvas$DragLayout(jobject object, jint mark, jint depth);
void clinit_mindustry_logic_LCanvas$DragLayout(jcontext ctx);
void init_mindustry_logic_LCanvas$DragLayout_mindustry_logic_LCanvas(jcontext ctx, jobject self, jobject param0);
void M_mindustry_logic_LCanvas$DragLayout_layout(jcontext ctx, jobject self);
void M_mindustry_logic_LCanvas$DragLayout_setJumpHeights(jcontext ctx, jobject self);
jint M_mindustry_logic_LCanvas$DragLayout_getJumpHeight_int_arc_struct_Seq_arc_struct_Bits_R_int(jcontext ctx, jobject self, jint param0, jobject param1, jobject param2);
jfloat M_mindustry_logic_LCanvas$DragLayout_getPrefWidth_R_float(jcontext ctx, jobject self);
jfloat M_mindustry_logic_LCanvas$DragLayout_getPrefHeight_R_float(jcontext ctx, jobject self);
void M_mindustry_logic_LCanvas$DragLayout_draw(jcontext ctx, jobject self);
void M_mindustry_logic_LCanvas$DragLayout_finishLayout(jcontext ctx, jobject self);
void SM_mindustry_logic_LCanvas$DragLayout_lambda$draw$1_arc_scene_Element(jcontext ctx, jobject param0);
void SM_mindustry_logic_LCanvas$DragLayout_lambda$draw$0_arc_scene_Element(jcontext ctx, jobject param0);
jbool SM_mindustry_logic_LCanvas$DragLayout_lambda$getJumpHeight$0_mindustry_logic_LCanvas$JumpCurve_arc_struct_Bits_mindustry_logic_LCanvas$JumpCurve_R_boolean(jcontext ctx, jobject param0, jobject param1, jobject param2);
void M_mindustry_logic_LCanvas$DragLayout_lambda$setJumpHeights$3_arc_scene_Element(jcontext ctx, jobject self, jobject param0);
jbool SM_mindustry_logic_LCanvas$DragLayout_lambda$setJumpHeights$2_mindustry_logic_LCanvas$JumpCurve_arc_struct_Bits_mindustry_logic_LCanvas$JumpCurve_R_boolean(jcontext ctx, jobject param0, jobject param1, jobject param2);
jint SM_mindustry_logic_LCanvas$DragLayout_lambda$setJumpHeights$1_mindustry_logic_LCanvas$JumpCurve_mindustry_logic_LCanvas$JumpCurve_R_int(jcontext ctx, jobject param0, jobject param1);
void M_mindustry_logic_LCanvas$DragLayout_lambda$setJumpHeights$0_arc_scene_Element(jcontext ctx, jobject self, jobject param0);
jfloat M_mindustry_logic_LCanvas$DragLayout_lambda$layout$0_arc_scene_Element_R_float(jcontext ctx, jobject self, jobject param0);

#ifdef __cplusplus
}
#endif

#endif
