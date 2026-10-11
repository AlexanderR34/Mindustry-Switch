#ifndef HEADER_mindustry_core_UI$10
#define HEADER_mindustry_core_UI$10

#include "Clearwing.h"
#include "arc/scene/ui/Dialog.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct mindustry_core_UI$10 {
	arc_scene_ui_Dialog parent;
	jref F_val$text;
	jref F_this$0;
} mindustry_core_UI$10;

extern Class class_mindustry_core_UI$10;


#define VTABLE_mindustry_core_UI$10_hashCode_R_int 0
typedef jint (*func_mindustry_core_UI$10_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_mindustry_core_UI$10_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_mindustry_core_UI$10_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_core_UI$10_clone_R_java_lang_Object 2
typedef jobject (*func_mindustry_core_UI$10_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_mindustry_core_UI$10_getClass_R_java_lang_Class 3
typedef jobject (*func_mindustry_core_UI$10_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_mindustry_core_UI$10_toString_R_java_lang_String 4
typedef jobject (*func_mindustry_core_UI$10_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_mindustry_core_UI$10_finalize 5
typedef void (*func_mindustry_core_UI$10_finalize)(jcontext ctx, jobject self);
#define VTABLE_mindustry_core_UI$10_notify 6
typedef void (*func_mindustry_core_UI$10_notify)(jcontext ctx, jobject self);
#define VTABLE_mindustry_core_UI$10_notifyAll 7
typedef void (*func_mindustry_core_UI$10_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_mindustry_core_UI$10_wait 8
typedef void (*func_mindustry_core_UI$10_wait)(jcontext ctx, jobject self);
#define VTABLE_mindustry_core_UI$10_wait_long 9
typedef void (*func_mindustry_core_UI$10_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_mindustry_core_UI$10_wait_long_int 10
typedef void (*func_mindustry_core_UI$10_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);
#define VTABLE_mindustry_core_UI$10_draw 11
typedef void (*func_mindustry_core_UI$10_draw)(jcontext ctx, jobject self);
#define VTABLE_mindustry_core_UI$10_act_float 12
typedef void (*func_mindustry_core_UI$10_act_float)(jcontext ctx, jobject self, jfloat param0);
#define VTABLE_mindustry_core_UI$10_updateVisibility 13
typedef void (*func_mindustry_core_UI$10_updateVisibility)(jcontext ctx, jobject self);
#define VTABLE_mindustry_core_UI$10_hasMouse_R_boolean 14
typedef jbool (*func_mindustry_core_UI$10_hasMouse_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_mindustry_core_UI$10_hasKeyboard_R_boolean 15
typedef jbool (*func_mindustry_core_UI$10_hasKeyboard_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_mindustry_core_UI$10_hasScroll_R_boolean 16
typedef jbool (*func_mindustry_core_UI$10_hasScroll_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_mindustry_core_UI$10_requestKeyboard 17
typedef void (*func_mindustry_core_UI$10_requestKeyboard)(jcontext ctx, jobject self);
#define VTABLE_mindustry_core_UI$10_requestScroll 18
typedef void (*func_mindustry_core_UI$10_requestScroll)(jcontext ctx, jobject self);
#define VTABLE_mindustry_core_UI$10_fire_arc_scene_event_SceneEvent_R_boolean 19
typedef jbool (*func_mindustry_core_UI$10_fire_arc_scene_event_SceneEvent_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_core_UI$10_notify_arc_scene_event_SceneEvent_boolean_R_boolean 20
typedef jbool (*func_mindustry_core_UI$10_notify_arc_scene_event_SceneEvent_boolean_R_boolean)(jcontext ctx, jobject self, jobject param0, jbool param1);
#define VTABLE_mindustry_core_UI$10_hit_float_float_boolean_R_arc_scene_Element 21
typedef jobject (*func_mindustry_core_UI$10_hit_float_float_boolean_R_arc_scene_Element)(jcontext ctx, jobject self, jfloat param0, jfloat param1, jbool param2);
#define VTABLE_mindustry_core_UI$10_remove_R_boolean 22
typedef jbool (*func_mindustry_core_UI$10_remove_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_mindustry_core_UI$10_dragged_arc_func_Floatc2 23
typedef void (*func_mindustry_core_UI$10_dragged_arc_func_Floatc2)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_core_UI$10_scrolled_arc_func_Floatc 24
typedef void (*func_mindustry_core_UI$10_scrolled_arc_func_Floatc)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_core_UI$10_addListener_arc_scene_event_EventListener_R_boolean 25
typedef jbool (*func_mindustry_core_UI$10_addListener_arc_scene_event_EventListener_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_core_UI$10_removeListener_arc_scene_event_EventListener_R_boolean 26
typedef jbool (*func_mindustry_core_UI$10_removeListener_arc_scene_event_EventListener_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_core_UI$10_getListeners_R_arc_struct_Seq 27
typedef jobject (*func_mindustry_core_UI$10_getListeners_R_arc_struct_Seq)(jcontext ctx, jobject self);
#define VTABLE_mindustry_core_UI$10_addCaptureListener_arc_scene_event_EventListener_R_boolean 28
typedef jbool (*func_mindustry_core_UI$10_addCaptureListener_arc_scene_event_EventListener_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_core_UI$10_removeCaptureListener_arc_scene_event_EventListener_R_boolean 29
typedef jbool (*func_mindustry_core_UI$10_removeCaptureListener_arc_scene_event_EventListener_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_core_UI$10_getCaptureListeners_R_arc_struct_Seq 30
typedef jobject (*func_mindustry_core_UI$10_getCaptureListeners_R_arc_struct_Seq)(jcontext ctx, jobject self);
#define VTABLE_mindustry_core_UI$10_addAction_arc_scene_Action 31
typedef void (*func_mindustry_core_UI$10_addAction_arc_scene_Action)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_core_UI$10_actions_Array1_arc_scene_Action 32
typedef void (*func_mindustry_core_UI$10_actions_Array1_arc_scene_Action)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_core_UI$10_removeAction_arc_scene_Action 33
typedef void (*func_mindustry_core_UI$10_removeAction_arc_scene_Action)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_core_UI$10_getActions_R_arc_struct_Seq 34
typedef jobject (*func_mindustry_core_UI$10_getActions_R_arc_struct_Seq)(jcontext ctx, jobject self);
#define VTABLE_mindustry_core_UI$10_hasActions_R_boolean 35
typedef jbool (*func_mindustry_core_UI$10_hasActions_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_mindustry_core_UI$10_clearActions 36
typedef void (*func_mindustry_core_UI$10_clearActions)(jcontext ctx, jobject self);
#define VTABLE_mindustry_core_UI$10_clearListeners 37
typedef void (*func_mindustry_core_UI$10_clearListeners)(jcontext ctx, jobject self);
#define VTABLE_mindustry_core_UI$10_clear 38
typedef void (*func_mindustry_core_UI$10_clear)(jcontext ctx, jobject self);
#define VTABLE_mindustry_core_UI$10_getScene_R_arc_scene_Scene 39
typedef jobject (*func_mindustry_core_UI$10_getScene_R_arc_scene_Scene)(jcontext ctx, jobject self);
#define VTABLE_mindustry_core_UI$10_setScene_arc_scene_Scene 40
typedef void (*func_mindustry_core_UI$10_setScene_arc_scene_Scene)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_core_UI$10_isDescendantOf_arc_func_Boolf_R_boolean 41
typedef jbool (*func_mindustry_core_UI$10_isDescendantOf_arc_func_Boolf_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_core_UI$10_isDescendantOf_arc_scene_Element_R_boolean 42
typedef jbool (*func_mindustry_core_UI$10_isDescendantOf_arc_scene_Element_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_core_UI$10_isAscendantOf_arc_scene_Element_R_boolean 43
typedef jbool (*func_mindustry_core_UI$10_isAscendantOf_arc_scene_Element_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_core_UI$10_hasParent_R_boolean 44
typedef jbool (*func_mindustry_core_UI$10_hasParent_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_mindustry_core_UI$10_isTouchable_R_boolean 45
typedef jbool (*func_mindustry_core_UI$10_isTouchable_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_mindustry_core_UI$10_getX_int_R_float 46
typedef jfloat (*func_mindustry_core_UI$10_getX_int_R_float)(jcontext ctx, jobject self, jint param0);
#define VTABLE_mindustry_core_UI$10_getY_int_R_float 47
typedef jfloat (*func_mindustry_core_UI$10_getY_int_R_float)(jcontext ctx, jobject self, jint param0);
#define VTABLE_mindustry_core_UI$10_setPosition_float_float 48
typedef void (*func_mindustry_core_UI$10_setPosition_float_float)(jcontext ctx, jobject self, jfloat param0, jfloat param1);
#define VTABLE_mindustry_core_UI$10_setPosition_float_float_int 49
typedef void (*func_mindustry_core_UI$10_setPosition_float_float_int)(jcontext ctx, jobject self, jfloat param0, jfloat param1, jint param2);
#define VTABLE_mindustry_core_UI$10_moveBy_float_float 50
typedef void (*func_mindustry_core_UI$10_moveBy_float_float)(jcontext ctx, jobject self, jfloat param0, jfloat param1);
#define VTABLE_mindustry_core_UI$10_getWidth_R_float 51
typedef jfloat (*func_mindustry_core_UI$10_getWidth_R_float)(jcontext ctx, jobject self);
#define VTABLE_mindustry_core_UI$10_setWidth_float 52
typedef void (*func_mindustry_core_UI$10_setWidth_float)(jcontext ctx, jobject self, jfloat param0);
#define VTABLE_mindustry_core_UI$10_getHeight_R_float 53
typedef jfloat (*func_mindustry_core_UI$10_getHeight_R_float)(jcontext ctx, jobject self);
#define VTABLE_mindustry_core_UI$10_setHeight_float 54
typedef void (*func_mindustry_core_UI$10_setHeight_float)(jcontext ctx, jobject self, jfloat param0);
#define VTABLE_mindustry_core_UI$10_getTop_R_float 55
typedef jfloat (*func_mindustry_core_UI$10_getTop_R_float)(jcontext ctx, jobject self);
#define VTABLE_mindustry_core_UI$10_getRight_R_float 56
typedef jfloat (*func_mindustry_core_UI$10_getRight_R_float)(jcontext ctx, jobject self);
#define VTABLE_mindustry_core_UI$10_sizeChanged 57
typedef void (*func_mindustry_core_UI$10_sizeChanged)(jcontext ctx, jobject self);
#define VTABLE_mindustry_core_UI$10_rotationChanged 58
typedef void (*func_mindustry_core_UI$10_rotationChanged)(jcontext ctx, jobject self);
#define VTABLE_mindustry_core_UI$10_setSize_float 59
typedef void (*func_mindustry_core_UI$10_setSize_float)(jcontext ctx, jobject self, jfloat param0);
#define VTABLE_mindustry_core_UI$10_setSize_float_float 60
typedef void (*func_mindustry_core_UI$10_setSize_float_float)(jcontext ctx, jobject self, jfloat param0, jfloat param1);
#define VTABLE_mindustry_core_UI$10_sizeBy_float 61
typedef void (*func_mindustry_core_UI$10_sizeBy_float)(jcontext ctx, jobject self, jfloat param0);
#define VTABLE_mindustry_core_UI$10_sizeBy_float_float 62
typedef void (*func_mindustry_core_UI$10_sizeBy_float_float)(jcontext ctx, jobject self, jfloat param0, jfloat param1);
#define VTABLE_mindustry_core_UI$10_setBounds_float_float_float_float 63
typedef void (*func_mindustry_core_UI$10_setBounds_float_float_float_float)(jcontext ctx, jobject self, jfloat param0, jfloat param1, jfloat param2, jfloat param3);
#define VTABLE_mindustry_core_UI$10_setOrigin_float_float 64
typedef void (*func_mindustry_core_UI$10_setOrigin_float_float)(jcontext ctx, jobject self, jfloat param0, jfloat param1);
#define VTABLE_mindustry_core_UI$10_setOrigin_int 65
typedef void (*func_mindustry_core_UI$10_setOrigin_int)(jcontext ctx, jobject self, jint param0);
#define VTABLE_mindustry_core_UI$10_setScale_float 66
typedef void (*func_mindustry_core_UI$10_setScale_float)(jcontext ctx, jobject self, jfloat param0);
#define VTABLE_mindustry_core_UI$10_setScale_float_float 67
typedef void (*func_mindustry_core_UI$10_setScale_float_float)(jcontext ctx, jobject self, jfloat param0, jfloat param1);
#define VTABLE_mindustry_core_UI$10_scaleBy_float 68
typedef void (*func_mindustry_core_UI$10_scaleBy_float)(jcontext ctx, jobject self, jfloat param0);
#define VTABLE_mindustry_core_UI$10_scaleBy_float_float 69
typedef void (*func_mindustry_core_UI$10_scaleBy_float_float)(jcontext ctx, jobject self, jfloat param0, jfloat param1);
#define VTABLE_mindustry_core_UI$10_getRotation_R_float 70
typedef jfloat (*func_mindustry_core_UI$10_getRotation_R_float)(jcontext ctx, jobject self);
#define VTABLE_mindustry_core_UI$10_setRotation_float 71
typedef void (*func_mindustry_core_UI$10_setRotation_float)(jcontext ctx, jobject self, jfloat param0);
#define VTABLE_mindustry_core_UI$10_setRotationOrigin_float_int 72
typedef void (*func_mindustry_core_UI$10_setRotationOrigin_float_int)(jcontext ctx, jobject self, jfloat param0, jint param1);
#define VTABLE_mindustry_core_UI$10_rotateBy_float 73
typedef void (*func_mindustry_core_UI$10_rotateBy_float)(jcontext ctx, jobject self, jfloat param0);
#define VTABLE_mindustry_core_UI$10_setColor_float_float_float_float 74
typedef void (*func_mindustry_core_UI$10_setColor_float_float_float_float)(jcontext ctx, jobject self, jfloat param0, jfloat param1, jfloat param2, jfloat param3);
#define VTABLE_mindustry_core_UI$10_setColor_arc_graphics_Color 75
typedef void (*func_mindustry_core_UI$10_setColor_arc_graphics_Color)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_core_UI$10_toFront 76
typedef void (*func_mindustry_core_UI$10_toFront)(jcontext ctx, jobject self);
#define VTABLE_mindustry_core_UI$10_toBack 77
typedef void (*func_mindustry_core_UI$10_toBack)(jcontext ctx, jobject self);
#define VTABLE_mindustry_core_UI$10_getZIndex_R_int 78
typedef jint (*func_mindustry_core_UI$10_getZIndex_R_int)(jcontext ctx, jobject self);
#define VTABLE_mindustry_core_UI$10_setZIndex_int 79
typedef void (*func_mindustry_core_UI$10_setZIndex_int)(jcontext ctx, jobject self, jint param0);
#define VTABLE_mindustry_core_UI$10_clipBegin_R_boolean 80
typedef jbool (*func_mindustry_core_UI$10_clipBegin_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_mindustry_core_UI$10_clipBegin_float_float_float_float_R_boolean 81
typedef jbool (*func_mindustry_core_UI$10_clipBegin_float_float_float_float_R_boolean)(jcontext ctx, jobject self, jfloat param0, jfloat param1, jfloat param2, jfloat param3);
#define VTABLE_mindustry_core_UI$10_clipEnd 82
typedef void (*func_mindustry_core_UI$10_clipEnd)(jcontext ctx, jobject self);
#define VTABLE_mindustry_core_UI$10_screenToLocalCoordinates_arc_math_geom_Vec2_R_arc_math_geom_Vec2 83
typedef jobject (*func_mindustry_core_UI$10_screenToLocalCoordinates_arc_math_geom_Vec2_R_arc_math_geom_Vec2)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_core_UI$10_stageToLocalCoordinates_arc_math_geom_Vec2_R_arc_math_geom_Vec2 84
typedef jobject (*func_mindustry_core_UI$10_stageToLocalCoordinates_arc_math_geom_Vec2_R_arc_math_geom_Vec2)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_core_UI$10_localToStageCoordinates_arc_math_geom_Vec2_R_arc_math_geom_Vec2 85
typedef jobject (*func_mindustry_core_UI$10_localToStageCoordinates_arc_math_geom_Vec2_R_arc_math_geom_Vec2)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_core_UI$10_localToParentCoordinates_arc_math_geom_Vec2_R_arc_math_geom_Vec2 86
typedef jobject (*func_mindustry_core_UI$10_localToParentCoordinates_arc_math_geom_Vec2_R_arc_math_geom_Vec2)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_core_UI$10_localToAscendantCoordinates_arc_scene_Element_arc_math_geom_Vec2_R_arc_math_geom_Vec2 87
typedef jobject (*func_mindustry_core_UI$10_localToAscendantCoordinates_arc_scene_Element_arc_math_geom_Vec2_R_arc_math_geom_Vec2)(jcontext ctx, jobject self, jobject param0, jobject param1);
#define VTABLE_mindustry_core_UI$10_parentToLocalCoordinates_arc_math_geom_Vec2_R_arc_math_geom_Vec2 88
typedef jobject (*func_mindustry_core_UI$10_parentToLocalCoordinates_arc_math_geom_Vec2_R_arc_math_geom_Vec2)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_core_UI$10_getMinWidth_R_float 89
typedef jfloat (*func_mindustry_core_UI$10_getMinWidth_R_float)(jcontext ctx, jobject self);
#define VTABLE_mindustry_core_UI$10_getMinHeight_R_float 90
typedef jfloat (*func_mindustry_core_UI$10_getMinHeight_R_float)(jcontext ctx, jobject self);
#define VTABLE_mindustry_core_UI$10_getPrefWidth_R_float 91
typedef jfloat (*func_mindustry_core_UI$10_getPrefWidth_R_float)(jcontext ctx, jobject self);
#define VTABLE_mindustry_core_UI$10_getPrefHeight_R_float 92
typedef jfloat (*func_mindustry_core_UI$10_getPrefHeight_R_float)(jcontext ctx, jobject self);
#define VTABLE_mindustry_core_UI$10_getMaxWidth_R_float 93
typedef jfloat (*func_mindustry_core_UI$10_getMaxWidth_R_float)(jcontext ctx, jobject self);
#define VTABLE_mindustry_core_UI$10_getMaxHeight_R_float 94
typedef jfloat (*func_mindustry_core_UI$10_getMaxHeight_R_float)(jcontext ctx, jobject self);
#define VTABLE_mindustry_core_UI$10_setLayoutEnabled_boolean 95
typedef void (*func_mindustry_core_UI$10_setLayoutEnabled_boolean)(jcontext ctx, jobject self, jbool param0);
#define VTABLE_mindustry_core_UI$10_validate 96
typedef void (*func_mindustry_core_UI$10_validate)(jcontext ctx, jobject self);
#define VTABLE_mindustry_core_UI$10_needsLayout_R_boolean 97
typedef jbool (*func_mindustry_core_UI$10_needsLayout_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_mindustry_core_UI$10_invalidate 98
typedef void (*func_mindustry_core_UI$10_invalidate)(jcontext ctx, jobject self);
#define VTABLE_mindustry_core_UI$10_invalidateHierarchy 99
typedef void (*func_mindustry_core_UI$10_invalidateHierarchy)(jcontext ctx, jobject self);
#define VTABLE_mindustry_core_UI$10_pack 100
typedef void (*func_mindustry_core_UI$10_pack)(jcontext ctx, jobject self);
#define VTABLE_mindustry_core_UI$10_setFillParent_boolean 101
typedef void (*func_mindustry_core_UI$10_setFillParent_boolean)(jcontext ctx, jobject self, jbool param0);
#define VTABLE_mindustry_core_UI$10_layout 102
typedef void (*func_mindustry_core_UI$10_layout)(jcontext ctx, jobject self);
#define VTABLE_mindustry_core_UI$10_keepInStage 103
typedef void (*func_mindustry_core_UI$10_keepInStage)(jcontext ctx, jobject self);
#define VTABLE_mindustry_core_UI$10_setTranslation_float_float 104
typedef void (*func_mindustry_core_UI$10_setTranslation_float_float)(jcontext ctx, jobject self, jfloat param0, jfloat param1);
#define VTABLE_mindustry_core_UI$10_keyDown_arc_input_KeyCode_java_lang_Runnable 105
typedef void (*func_mindustry_core_UI$10_keyDown_arc_input_KeyCode_java_lang_Runnable)(jcontext ctx, jobject self, jobject param0, jobject param1);
#define VTABLE_mindustry_core_UI$10_keyDown_arc_func_Cons 106
typedef void (*func_mindustry_core_UI$10_keyDown_arc_func_Cons)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_core_UI$10_fireClick 107
typedef void (*func_mindustry_core_UI$10_fireClick)(jcontext ctx, jobject self);
#define VTABLE_mindustry_core_UI$10_clicked_java_lang_Runnable_R_arc_scene_event_ClickListener 108
typedef jobject (*func_mindustry_core_UI$10_clicked_java_lang_Runnable_R_arc_scene_event_ClickListener)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_core_UI$10_clicked_arc_input_KeyCode_java_lang_Runnable_R_arc_scene_event_ClickListener 109
typedef jobject (*func_mindustry_core_UI$10_clicked_arc_input_KeyCode_java_lang_Runnable_R_arc_scene_event_ClickListener)(jcontext ctx, jobject self, jobject param0, jobject param1);
#define VTABLE_mindustry_core_UI$10_clicked_arc_func_Cons_java_lang_Runnable_R_arc_scene_event_ClickListener 110
typedef jobject (*func_mindustry_core_UI$10_clicked_arc_func_Cons_java_lang_Runnable_R_arc_scene_event_ClickListener)(jcontext ctx, jobject self, jobject param0, jobject param1);
#define VTABLE_mindustry_core_UI$10_clicked_arc_func_Cons_arc_func_Cons_R_arc_scene_event_ClickListener 111
typedef jobject (*func_mindustry_core_UI$10_clicked_arc_func_Cons_arc_func_Cons_R_arc_scene_event_ClickListener)(jcontext ctx, jobject self, jobject param0, jobject param1);
#define VTABLE_mindustry_core_UI$10_tapped_java_lang_Runnable_R_arc_scene_event_InputListener 112
typedef jobject (*func_mindustry_core_UI$10_tapped_java_lang_Runnable_R_arc_scene_event_InputListener)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_core_UI$10_hovered_java_lang_Runnable 113
typedef void (*func_mindustry_core_UI$10_hovered_java_lang_Runnable)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_core_UI$10_exited_java_lang_Runnable 114
typedef void (*func_mindustry_core_UI$10_exited_java_lang_Runnable)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_core_UI$10_released_java_lang_Runnable 115
typedef void (*func_mindustry_core_UI$10_released_java_lang_Runnable)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_core_UI$10_change 116
typedef void (*func_mindustry_core_UI$10_change)(jcontext ctx, jobject self);
#define VTABLE_mindustry_core_UI$10_changed_java_lang_Runnable 117
typedef void (*func_mindustry_core_UI$10_changed_java_lang_Runnable)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_core_UI$10_update_java_lang_Runnable_R_arc_scene_Element 118
typedef jobject (*func_mindustry_core_UI$10_update_java_lang_Runnable_R_arc_scene_Element)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_core_UI$10_visible_arc_func_Boolp_R_arc_scene_Element 119
typedef jobject (*func_mindustry_core_UI$10_visible_arc_func_Boolp_R_arc_scene_Element)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_core_UI$10_touchable_arc_func_Prov 120
typedef void (*func_mindustry_core_UI$10_touchable_arc_func_Prov)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_core_UI$10_setCullingArea_arc_math_geom_Rect 121
typedef void (*func_mindustry_core_UI$10_setCullingArea_arc_math_geom_Rect)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_core_UI$10_drawChildren 122
typedef void (*func_mindustry_core_UI$10_drawChildren)(jcontext ctx, jobject self);
#define VTABLE_mindustry_core_UI$10_computeTransform_R_arc_math_Mat 123
typedef jobject (*func_mindustry_core_UI$10_computeTransform_R_arc_math_Mat)(jcontext ctx, jobject self);
#define VTABLE_mindustry_core_UI$10_applyTransform_arc_math_Mat 124
typedef void (*func_mindustry_core_UI$10_applyTransform_arc_math_Mat)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_core_UI$10_resetTransform 125
typedef void (*func_mindustry_core_UI$10_resetTransform)(jcontext ctx, jobject self);
#define VTABLE_mindustry_core_UI$10_getCullingArea_R_arc_math_geom_Rect 126
typedef jobject (*func_mindustry_core_UI$10_getCullingArea_R_arc_math_geom_Rect)(jcontext ctx, jobject self);
#define VTABLE_mindustry_core_UI$10_childrenChanged 127
typedef void (*func_mindustry_core_UI$10_childrenChanged)(jcontext ctx, jobject self);
#define VTABLE_mindustry_core_UI$10_forEach_arc_func_Cons 128
typedef void (*func_mindustry_core_UI$10_forEach_arc_func_Cons)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_core_UI$10_fill_arc_scene_ui_layout_Table$DrawRect_R_arc_scene_Element 129
typedef jobject (*func_mindustry_core_UI$10_fill_arc_scene_ui_layout_Table$DrawRect_R_arc_scene_Element)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_core_UI$10_fill_arc_func_Cons 130
typedef void (*func_mindustry_core_UI$10_fill_arc_func_Cons)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_core_UI$10_fill_arc_scene_style_Drawable_arc_func_Cons 131
typedef void (*func_mindustry_core_UI$10_fill_arc_scene_style_Drawable_arc_func_Cons)(jcontext ctx, jobject self, jobject param0, jobject param1);
#define VTABLE_mindustry_core_UI$10_addChild_arc_scene_Element 132
typedef void (*func_mindustry_core_UI$10_addChild_arc_scene_Element)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_core_UI$10_addChildAt_int_arc_scene_Element 133
typedef void (*func_mindustry_core_UI$10_addChildAt_int_arc_scene_Element)(jcontext ctx, jobject self, jint param0, jobject param1);
#define VTABLE_mindustry_core_UI$10_addChildBefore_arc_scene_Element_arc_scene_Element 134
typedef void (*func_mindustry_core_UI$10_addChildBefore_arc_scene_Element_arc_scene_Element)(jcontext ctx, jobject self, jobject param0, jobject param1);
#define VTABLE_mindustry_core_UI$10_addChildAfter_arc_scene_Element_arc_scene_Element 135
typedef void (*func_mindustry_core_UI$10_addChildAfter_arc_scene_Element_arc_scene_Element)(jcontext ctx, jobject self, jobject param0, jobject param1);
#define VTABLE_mindustry_core_UI$10_removeChild_arc_scene_Element_R_boolean 136
typedef jbool (*func_mindustry_core_UI$10_removeChild_arc_scene_Element_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_core_UI$10_removeChild_arc_scene_Element_boolean_R_boolean 137
typedef jbool (*func_mindustry_core_UI$10_removeChild_arc_scene_Element_boolean_R_boolean)(jcontext ctx, jobject self, jobject param0, jbool param1);
#define VTABLE_mindustry_core_UI$10_clearChildren 138
typedef void (*func_mindustry_core_UI$10_clearChildren)(jcontext ctx, jobject self);
#define VTABLE_mindustry_core_UI$10_find_java_lang_String_R_arc_scene_Element 139
typedef jobject (*func_mindustry_core_UI$10_find_java_lang_String_R_arc_scene_Element)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_core_UI$10_findVisible_java_lang_String_R_arc_scene_Element 140
typedef jobject (*func_mindustry_core_UI$10_findVisible_java_lang_String_R_arc_scene_Element)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_core_UI$10_find_arc_func_Boolf_R_arc_scene_Element 141
typedef jobject (*func_mindustry_core_UI$10_find_arc_func_Boolf_R_arc_scene_Element)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_core_UI$10_swapActor_int_int_R_boolean 142
typedef jbool (*func_mindustry_core_UI$10_swapActor_int_int_R_boolean)(jcontext ctx, jobject self, jint param0, jint param1);
#define VTABLE_mindustry_core_UI$10_swapActor_arc_scene_Element_arc_scene_Element_R_boolean 143
typedef jbool (*func_mindustry_core_UI$10_swapActor_arc_scene_Element_arc_scene_Element_R_boolean)(jcontext ctx, jobject self, jobject param0, jobject param1);
#define VTABLE_mindustry_core_UI$10_getChildren_R_arc_struct_SnapshotSeq 144
typedef jobject (*func_mindustry_core_UI$10_getChildren_R_arc_struct_SnapshotSeq)(jcontext ctx, jobject self);
#define VTABLE_mindustry_core_UI$10_hasChildren_R_boolean 145
typedef jbool (*func_mindustry_core_UI$10_hasChildren_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_mindustry_core_UI$10_isTransform_R_boolean 146
typedef jbool (*func_mindustry_core_UI$10_isTransform_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_mindustry_core_UI$10_setTransform_boolean 147
typedef void (*func_mindustry_core_UI$10_setTransform_boolean)(jcontext ctx, jobject self, jbool param0);
#define VTABLE_mindustry_core_UI$10_localToDescendantCoordinates_arc_scene_Element_arc_math_geom_Vec2_R_arc_math_geom_Vec2 148
typedef jobject (*func_mindustry_core_UI$10_localToDescendantCoordinates_arc_scene_Element_arc_math_geom_Vec2_R_arc_math_geom_Vec2)(jcontext ctx, jobject self, jobject param0, jobject param1);
#define VTABLE_mindustry_core_UI$10_toString_java_lang_StringBuilder_int 149
typedef void (*func_mindustry_core_UI$10_toString_java_lang_StringBuilder_int)(jcontext ctx, jobject self, jobject param0, jint param1);
#define VTABLE_mindustry_core_UI$10_setLayoutEnabled_arc_scene_Group_boolean 150
typedef void (*func_mindustry_core_UI$10_setLayoutEnabled_arc_scene_Group_boolean)(jcontext ctx, jobject self, jobject param0, jbool param1);
#define VTABLE_mindustry_core_UI$10_obtainCell_R_arc_scene_ui_layout_Cell 151
typedef jobject (*func_mindustry_core_UI$10_obtainCell_R_arc_scene_ui_layout_Cell)(jcontext ctx, jobject self);
#define VTABLE_mindustry_core_UI$10_fill_R_arc_scene_ui_layout_Table 152
typedef jobject (*func_mindustry_core_UI$10_fill_R_arc_scene_ui_layout_Table)(jcontext ctx, jobject self);
#define VTABLE_mindustry_core_UI$10_drawBackground_float_float 153
typedef void (*func_mindustry_core_UI$10_drawBackground_float_float)(jcontext ctx, jobject self, jfloat param0, jfloat param1);
#define VTABLE_mindustry_core_UI$10_background_arc_scene_style_Drawable_R_arc_scene_ui_layout_Table 154
typedef jobject (*func_mindustry_core_UI$10_background_arc_scene_style_Drawable_R_arc_scene_ui_layout_Table)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_core_UI$10_getBackground_R_arc_scene_style_Drawable 155
typedef jobject (*func_mindustry_core_UI$10_getBackground_R_arc_scene_style_Drawable)(jcontext ctx, jobject self);
#define VTABLE_mindustry_core_UI$10_setBackground_arc_scene_style_Drawable 156
typedef void (*func_mindustry_core_UI$10_setBackground_arc_scene_style_Drawable)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_core_UI$10_getClip_R_boolean 157
typedef jbool (*func_mindustry_core_UI$10_getClip_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_mindustry_core_UI$10_setClip_boolean 158
typedef void (*func_mindustry_core_UI$10_setClip_boolean)(jcontext ctx, jobject self, jbool param0);
#define VTABLE_mindustry_core_UI$10_add_arc_scene_Element_R_arc_scene_ui_layout_Cell 159
typedef jobject (*func_mindustry_core_UI$10_add_arc_scene_Element_R_arc_scene_ui_layout_Cell)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_core_UI$10_add_Array1_arc_scene_Element 160
typedef void (*func_mindustry_core_UI$10_add_Array1_arc_scene_Element)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_core_UI$10_collapser_arc_func_Cons_arc_func_Boolp_R_arc_scene_ui_layout_Cell 161
typedef jobject (*func_mindustry_core_UI$10_collapser_arc_func_Cons_arc_func_Boolp_R_arc_scene_ui_layout_Cell)(jcontext ctx, jobject self, jobject param0, jobject param1);
#define VTABLE_mindustry_core_UI$10_collapser_arc_scene_ui_layout_Table_arc_func_Boolp_R_arc_scene_ui_layout_Cell 162
typedef jobject (*func_mindustry_core_UI$10_collapser_arc_scene_ui_layout_Table_arc_func_Boolp_R_arc_scene_ui_layout_Cell)(jcontext ctx, jobject self, jobject param0, jobject param1);
#define VTABLE_mindustry_core_UI$10_collapser_arc_func_Cons_boolean_arc_func_Boolp_R_arc_scene_ui_layout_Cell 163
typedef jobject (*func_mindustry_core_UI$10_collapser_arc_func_Cons_boolean_arc_func_Boolp_R_arc_scene_ui_layout_Cell)(jcontext ctx, jobject self, jobject param0, jbool param1, jobject param2);
#define VTABLE_mindustry_core_UI$10_collapser_arc_scene_ui_layout_Table_boolean_arc_func_Boolp_R_arc_scene_ui_layout_Cell 164
typedef jobject (*func_mindustry_core_UI$10_collapser_arc_scene_ui_layout_Table_boolean_arc_func_Boolp_R_arc_scene_ui_layout_Cell)(jcontext ctx, jobject self, jobject param0, jbool param1, jobject param2);
#define VTABLE_mindustry_core_UI$10_table_R_arc_scene_ui_layout_Cell 165
typedef jobject (*func_mindustry_core_UI$10_table_R_arc_scene_ui_layout_Cell)(jcontext ctx, jobject self);
#define VTABLE_mindustry_core_UI$10_table_arc_scene_style_Drawable_R_arc_scene_ui_layout_Cell 166
typedef jobject (*func_mindustry_core_UI$10_table_arc_scene_style_Drawable_R_arc_scene_ui_layout_Cell)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_core_UI$10_table_arc_func_Cons_R_arc_scene_ui_layout_Cell 167
typedef jobject (*func_mindustry_core_UI$10_table_arc_func_Cons_R_arc_scene_ui_layout_Cell)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_core_UI$10_wrapTable_arc_func_Cons_R_arc_scene_ui_layout_Cell 168
typedef jobject (*func_mindustry_core_UI$10_wrapTable_arc_func_Cons_R_arc_scene_ui_layout_Cell)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_core_UI$10_table_arc_scene_style_Drawable_arc_func_Cons_R_arc_scene_ui_layout_Cell 169
typedef jobject (*func_mindustry_core_UI$10_table_arc_scene_style_Drawable_arc_func_Cons_R_arc_scene_ui_layout_Cell)(jcontext ctx, jobject self, jobject param0, jobject param1);
#define VTABLE_mindustry_core_UI$10_table_arc_scene_style_Drawable_int_arc_func_Cons_R_arc_scene_ui_layout_Cell 170
typedef jobject (*func_mindustry_core_UI$10_table_arc_scene_style_Drawable_int_arc_func_Cons_R_arc_scene_ui_layout_Cell)(jcontext ctx, jobject self, jobject param0, jint param1, jobject param2);
#define VTABLE_mindustry_core_UI$10_label_arc_func_Prov_R_arc_scene_ui_layout_Cell 171
typedef jobject (*func_mindustry_core_UI$10_label_arc_func_Prov_R_arc_scene_ui_layout_Cell)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_core_UI$10_labelWrap_arc_func_Prov_R_arc_scene_ui_layout_Cell 172
typedef jobject (*func_mindustry_core_UI$10_labelWrap_arc_func_Prov_R_arc_scene_ui_layout_Cell)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_core_UI$10_labelWrap_java_lang_String_R_arc_scene_ui_layout_Cell 173
typedef jobject (*func_mindustry_core_UI$10_labelWrap_java_lang_String_R_arc_scene_ui_layout_Cell)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_core_UI$10_pane_arc_func_Cons_R_arc_scene_ui_layout_Cell 174
typedef jobject (*func_mindustry_core_UI$10_pane_arc_func_Cons_R_arc_scene_ui_layout_Cell)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_core_UI$10_pane_arc_scene_ui_ScrollPane$ScrollPaneStyle_arc_func_Cons_R_arc_scene_ui_layout_Cell 175
typedef jobject (*func_mindustry_core_UI$10_pane_arc_scene_ui_ScrollPane$ScrollPaneStyle_arc_func_Cons_R_arc_scene_ui_layout_Cell)(jcontext ctx, jobject self, jobject param0, jobject param1);
#define VTABLE_mindustry_core_UI$10_pane_arc_scene_ui_ScrollPane$ScrollPaneStyle_arc_scene_Element_R_arc_scene_ui_layout_Cell 176
typedef jobject (*func_mindustry_core_UI$10_pane_arc_scene_ui_ScrollPane$ScrollPaneStyle_arc_scene_Element_R_arc_scene_ui_layout_Cell)(jcontext ctx, jobject self, jobject param0, jobject param1);
#define VTABLE_mindustry_core_UI$10_pane_arc_scene_Element_R_arc_scene_ui_layout_Cell 177
typedef jobject (*func_mindustry_core_UI$10_pane_arc_scene_Element_R_arc_scene_ui_layout_Cell)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_core_UI$10_add_java_lang_CharSequence_R_arc_scene_ui_layout_Cell 178
typedef jobject (*func_mindustry_core_UI$10_add_java_lang_CharSequence_R_arc_scene_ui_layout_Cell)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_core_UI$10_add_java_lang_CharSequence_float_R_arc_scene_ui_layout_Cell 179
typedef jobject (*func_mindustry_core_UI$10_add_java_lang_CharSequence_float_R_arc_scene_ui_layout_Cell)(jcontext ctx, jobject self, jobject param0, jfloat param1);
#define VTABLE_mindustry_core_UI$10_add_java_lang_CharSequence_arc_scene_ui_Label$LabelStyle_float_R_arc_scene_ui_layout_Cell 180
typedef jobject (*func_mindustry_core_UI$10_add_java_lang_CharSequence_arc_scene_ui_Label$LabelStyle_float_R_arc_scene_ui_layout_Cell)(jcontext ctx, jobject self, jobject param0, jobject param1, jfloat param2);
#define VTABLE_mindustry_core_UI$10_add_java_lang_CharSequence_arc_graphics_Color_float_R_arc_scene_ui_layout_Cell 181
typedef jobject (*func_mindustry_core_UI$10_add_java_lang_CharSequence_arc_graphics_Color_float_R_arc_scene_ui_layout_Cell)(jcontext ctx, jobject self, jobject param0, jobject param1, jfloat param2);
#define VTABLE_mindustry_core_UI$10_add_java_lang_CharSequence_arc_scene_ui_Label$LabelStyle_R_arc_scene_ui_layout_Cell 182
typedef jobject (*func_mindustry_core_UI$10_add_java_lang_CharSequence_arc_scene_ui_Label$LabelStyle_R_arc_scene_ui_layout_Cell)(jcontext ctx, jobject self, jobject param0, jobject param1);
#define VTABLE_mindustry_core_UI$10_add_java_lang_CharSequence_arc_graphics_Color_R_arc_scene_ui_layout_Cell 183
typedef jobject (*func_mindustry_core_UI$10_add_java_lang_CharSequence_arc_graphics_Color_R_arc_scene_ui_layout_Cell)(jcontext ctx, jobject self, jobject param0, jobject param1);
#define VTABLE_mindustry_core_UI$10_add_R_arc_scene_ui_layout_Cell 184
typedef jobject (*func_mindustry_core_UI$10_add_R_arc_scene_ui_layout_Cell)(jcontext ctx, jobject self);
#define VTABLE_mindustry_core_UI$10_stack_Array1_arc_scene_Element_R_arc_scene_ui_layout_Cell 185
typedef jobject (*func_mindustry_core_UI$10_stack_Array1_arc_scene_Element_R_arc_scene_ui_layout_Cell)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_core_UI$10_spacer_arc_func_Floatp_arc_func_Floatp_R_arc_scene_ui_layout_Cell 186
typedef jobject (*func_mindustry_core_UI$10_spacer_arc_func_Floatp_arc_func_Floatp_R_arc_scene_ui_layout_Cell)(jcontext ctx, jobject self, jobject param0, jobject param1);
#define VTABLE_mindustry_core_UI$10_spacerX_arc_func_Floatp_R_arc_scene_ui_layout_Cell 187
typedef jobject (*func_mindustry_core_UI$10_spacerX_arc_func_Floatp_R_arc_scene_ui_layout_Cell)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_core_UI$10_spacerY_arc_func_Floatp_R_arc_scene_ui_layout_Cell 188
typedef jobject (*func_mindustry_core_UI$10_spacerY_arc_func_Floatp_R_arc_scene_ui_layout_Cell)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_core_UI$10_image_arc_func_Prov_R_arc_scene_ui_layout_Cell 189
typedef jobject (*func_mindustry_core_UI$10_image_arc_func_Prov_R_arc_scene_ui_layout_Cell)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_core_UI$10_imageDraw_arc_func_Prov_R_arc_scene_ui_layout_Cell 190
typedef jobject (*func_mindustry_core_UI$10_imageDraw_arc_func_Prov_R_arc_scene_ui_layout_Cell)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_core_UI$10_image_R_arc_scene_ui_layout_Cell 191
typedef jobject (*func_mindustry_core_UI$10_image_R_arc_scene_ui_layout_Cell)(jcontext ctx, jobject self);
#define VTABLE_mindustry_core_UI$10_image_arc_scene_style_Drawable_R_arc_scene_ui_layout_Cell 192
typedef jobject (*func_mindustry_core_UI$10_image_arc_scene_style_Drawable_R_arc_scene_ui_layout_Cell)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_core_UI$10_image_arc_scene_style_Drawable_arc_graphics_Color_R_arc_scene_ui_layout_Cell 193
typedef jobject (*func_mindustry_core_UI$10_image_arc_scene_style_Drawable_arc_graphics_Color_R_arc_scene_ui_layout_Cell)(jcontext ctx, jobject self, jobject param0, jobject param1);
#define VTABLE_mindustry_core_UI$10_image_arc_graphics_g2d_TextureRegion_R_arc_scene_ui_layout_Cell 194
typedef jobject (*func_mindustry_core_UI$10_image_arc_graphics_g2d_TextureRegion_R_arc_scene_ui_layout_Cell)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_core_UI$10_check_java_lang_String_arc_func_Boolc_R_arc_scene_ui_layout_Cell 195
typedef jobject (*func_mindustry_core_UI$10_check_java_lang_String_arc_func_Boolc_R_arc_scene_ui_layout_Cell)(jcontext ctx, jobject self, jobject param0, jobject param1);
#define VTABLE_mindustry_core_UI$10_check_java_lang_String_boolean_arc_func_Boolc_R_arc_scene_ui_layout_Cell 196
typedef jobject (*func_mindustry_core_UI$10_check_java_lang_String_boolean_arc_func_Boolc_R_arc_scene_ui_layout_Cell)(jcontext ctx, jobject self, jobject param0, jbool param1, jobject param2);
#define VTABLE_mindustry_core_UI$10_check_java_lang_String_float_boolean_arc_func_Boolc_R_arc_scene_ui_layout_Cell 197
typedef jobject (*func_mindustry_core_UI$10_check_java_lang_String_float_boolean_arc_func_Boolc_R_arc_scene_ui_layout_Cell)(jcontext ctx, jobject self, jobject param0, jfloat param1, jbool param2, jobject param3);
#define VTABLE_mindustry_core_UI$10_button_arc_func_Cons_java_lang_Runnable_R_arc_scene_ui_layout_Cell 198
typedef jobject (*func_mindustry_core_UI$10_button_arc_func_Cons_java_lang_Runnable_R_arc_scene_ui_layout_Cell)(jcontext ctx, jobject self, jobject param0, jobject param1);
#define VTABLE_mindustry_core_UI$10_button_arc_func_Cons_arc_scene_ui_Button$ButtonStyle_java_lang_Runnable_R_arc_scene_ui_layout_Cell 199
typedef jobject (*func_mindustry_core_UI$10_button_arc_func_Cons_arc_scene_ui_Button$ButtonStyle_java_lang_Runnable_R_arc_scene_ui_layout_Cell)(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2);
#define VTABLE_mindustry_core_UI$10_button_java_lang_String_java_lang_Runnable_R_arc_scene_ui_layout_Cell 200
typedef jobject (*func_mindustry_core_UI$10_button_java_lang_String_java_lang_Runnable_R_arc_scene_ui_layout_Cell)(jcontext ctx, jobject self, jobject param0, jobject param1);
#define VTABLE_mindustry_core_UI$10_button_java_lang_String_arc_scene_ui_TextButton$TextButtonStyle_java_lang_Runnable_R_arc_scene_ui_layout_Cell 201
typedef jobject (*func_mindustry_core_UI$10_button_java_lang_String_arc_scene_ui_TextButton$TextButtonStyle_java_lang_Runnable_R_arc_scene_ui_layout_Cell)(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2);
#define VTABLE_mindustry_core_UI$10_button_arc_scene_style_Drawable_java_lang_Runnable_R_arc_scene_ui_layout_Cell 202
typedef jobject (*func_mindustry_core_UI$10_button_arc_scene_style_Drawable_java_lang_Runnable_R_arc_scene_ui_layout_Cell)(jcontext ctx, jobject self, jobject param0, jobject param1);
#define VTABLE_mindustry_core_UI$10_button_arc_scene_style_Drawable_float_java_lang_Runnable_R_arc_scene_ui_layout_Cell 203
typedef jobject (*func_mindustry_core_UI$10_button_arc_scene_style_Drawable_float_java_lang_Runnable_R_arc_scene_ui_layout_Cell)(jcontext ctx, jobject self, jobject param0, jfloat param1, jobject param2);
#define VTABLE_mindustry_core_UI$10_button_arc_scene_style_Drawable_arc_scene_ui_ImageButton$ImageButtonStyle_float_java_lang_Runnable_R_arc_scene_ui_layout_Cell 204
typedef jobject (*func_mindustry_core_UI$10_button_arc_scene_style_Drawable_arc_scene_ui_ImageButton$ImageButtonStyle_float_java_lang_Runnable_R_arc_scene_ui_layout_Cell)(jcontext ctx, jobject self, jobject param0, jobject param1, jfloat param2, jobject param3);
#define VTABLE_mindustry_core_UI$10_button_arc_scene_style_Drawable_arc_scene_ui_ImageButton$ImageButtonStyle_java_lang_Runnable_R_arc_scene_ui_layout_Cell 205
typedef jobject (*func_mindustry_core_UI$10_button_arc_scene_style_Drawable_arc_scene_ui_ImageButton$ImageButtonStyle_java_lang_Runnable_R_arc_scene_ui_layout_Cell)(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2);
#define VTABLE_mindustry_core_UI$10_field_java_lang_String_arc_func_Cons_R_arc_scene_ui_layout_Cell 206
typedef jobject (*func_mindustry_core_UI$10_field_java_lang_String_arc_func_Cons_R_arc_scene_ui_layout_Cell)(jcontext ctx, jobject self, jobject param0, jobject param1);
#define VTABLE_mindustry_core_UI$10_area_java_lang_String_arc_func_Cons_R_arc_scene_ui_layout_Cell 207
typedef jobject (*func_mindustry_core_UI$10_area_java_lang_String_arc_func_Cons_R_arc_scene_ui_layout_Cell)(jcontext ctx, jobject self, jobject param0, jobject param1);
#define VTABLE_mindustry_core_UI$10_area_java_lang_String_arc_scene_ui_TextField$TextFieldStyle_arc_func_Cons_R_arc_scene_ui_layout_Cell 208
typedef jobject (*func_mindustry_core_UI$10_area_java_lang_String_arc_scene_ui_TextField$TextFieldStyle_arc_func_Cons_R_arc_scene_ui_layout_Cell)(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2);
#define VTABLE_mindustry_core_UI$10_field_java_lang_String_arc_scene_ui_TextField$TextFieldFilter_arc_func_Cons_R_arc_scene_ui_layout_Cell 209
typedef jobject (*func_mindustry_core_UI$10_field_java_lang_String_arc_scene_ui_TextField$TextFieldFilter_arc_func_Cons_R_arc_scene_ui_layout_Cell)(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2);
#define VTABLE_mindustry_core_UI$10_field_java_lang_String_arc_scene_ui_TextField$TextFieldStyle_arc_func_Cons_R_arc_scene_ui_layout_Cell 210
typedef jobject (*func_mindustry_core_UI$10_field_java_lang_String_arc_scene_ui_TextField$TextFieldStyle_arc_func_Cons_R_arc_scene_ui_layout_Cell)(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2);
#define VTABLE_mindustry_core_UI$10_rect_arc_scene_ui_layout_Table$DrawRect_R_arc_scene_ui_layout_Cell 211
typedef jobject (*func_mindustry_core_UI$10_rect_arc_scene_ui_layout_Table$DrawRect_R_arc_scene_ui_layout_Cell)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_core_UI$10_buttonRow_java_lang_String_arc_scene_style_Drawable_java_lang_Runnable_R_arc_scene_ui_layout_Cell 212
typedef jobject (*func_mindustry_core_UI$10_buttonRow_java_lang_String_arc_scene_style_Drawable_java_lang_Runnable_R_arc_scene_ui_layout_Cell)(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2);
#define VTABLE_mindustry_core_UI$10_button_java_lang_String_arc_scene_style_Drawable_java_lang_Runnable_R_arc_scene_ui_layout_Cell 213
typedef jobject (*func_mindustry_core_UI$10_button_java_lang_String_arc_scene_style_Drawable_java_lang_Runnable_R_arc_scene_ui_layout_Cell)(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2);
#define VTABLE_mindustry_core_UI$10_button_java_lang_String_arc_scene_style_Drawable_float_java_lang_Runnable_R_arc_scene_ui_layout_Cell 214
typedef jobject (*func_mindustry_core_UI$10_button_java_lang_String_arc_scene_style_Drawable_float_java_lang_Runnable_R_arc_scene_ui_layout_Cell)(jcontext ctx, jobject self, jobject param0, jobject param1, jfloat param2, jobject param3);
#define VTABLE_mindustry_core_UI$10_button_java_lang_String_arc_scene_style_Drawable_arc_scene_ui_TextButton$TextButtonStyle_float_java_lang_Runnable_R_arc_scene_ui_layout_Cell 215
typedef jobject (*func_mindustry_core_UI$10_button_java_lang_String_arc_scene_style_Drawable_arc_scene_ui_TextButton$TextButtonStyle_float_java_lang_Runnable_R_arc_scene_ui_layout_Cell)(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2, jfloat param3, jobject param4);
#define VTABLE_mindustry_core_UI$10_button_java_lang_String_arc_scene_style_Drawable_arc_scene_ui_TextButton$TextButtonStyle_java_lang_Runnable_R_arc_scene_ui_layout_Cell 216
typedef jobject (*func_mindustry_core_UI$10_button_java_lang_String_arc_scene_style_Drawable_arc_scene_ui_TextButton$TextButtonStyle_java_lang_Runnable_R_arc_scene_ui_layout_Cell)(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2, jobject param3);
#define VTABLE_mindustry_core_UI$10_buttonCenter_java_lang_String_arc_scene_style_Drawable_float_java_lang_Runnable_R_arc_scene_ui_layout_Cell 217
typedef jobject (*func_mindustry_core_UI$10_buttonCenter_java_lang_String_arc_scene_style_Drawable_float_java_lang_Runnable_R_arc_scene_ui_layout_Cell)(jcontext ctx, jobject self, jobject param0, jobject param1, jfloat param2, jobject param3);
#define VTABLE_mindustry_core_UI$10_buttonCenter_java_lang_String_arc_scene_style_Drawable_java_lang_Runnable_R_arc_scene_ui_layout_Cell 218
typedef jobject (*func_mindustry_core_UI$10_buttonCenter_java_lang_String_arc_scene_style_Drawable_java_lang_Runnable_R_arc_scene_ui_layout_Cell)(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2);
#define VTABLE_mindustry_core_UI$10_buttonCenter_java_lang_String_arc_scene_style_Drawable_arc_scene_ui_TextButton$TextButtonStyle_float_java_lang_Runnable_R_arc_scene_ui_layout_Cell 219
typedef jobject (*func_mindustry_core_UI$10_buttonCenter_java_lang_String_arc_scene_style_Drawable_arc_scene_ui_TextButton$TextButtonStyle_float_java_lang_Runnable_R_arc_scene_ui_layout_Cell)(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2, jfloat param3, jobject param4);
#define VTABLE_mindustry_core_UI$10_slider_float_float_float_arc_func_Floatc_R_arc_scene_ui_layout_Cell 220
typedef jobject (*func_mindustry_core_UI$10_slider_float_float_float_arc_func_Floatc_R_arc_scene_ui_layout_Cell)(jcontext ctx, jobject self, jfloat param0, jfloat param1, jfloat param2, jobject param3);
#define VTABLE_mindustry_core_UI$10_slider_float_float_float_float_arc_func_Floatc_R_arc_scene_ui_layout_Cell 221
typedef jobject (*func_mindustry_core_UI$10_slider_float_float_float_float_arc_func_Floatc_R_arc_scene_ui_layout_Cell)(jcontext ctx, jobject self, jfloat param0, jfloat param1, jfloat param2, jfloat param3, jobject param4);
#define VTABLE_mindustry_core_UI$10_slider_float_float_float_float_boolean_arc_func_Floatc_R_arc_scene_ui_layout_Cell 222
typedef jobject (*func_mindustry_core_UI$10_slider_float_float_float_float_boolean_arc_func_Floatc_R_arc_scene_ui_layout_Cell)(jcontext ctx, jobject self, jfloat param0, jfloat param1, jfloat param2, jfloat param3, jbool param4, jobject param5);
#define VTABLE_mindustry_core_UI$10_reset 223
typedef void (*func_mindustry_core_UI$10_reset)(jcontext ctx, jobject self);
#define VTABLE_mindustry_core_UI$10_row_R_arc_scene_ui_layout_Table 224
typedef jobject (*func_mindustry_core_UI$10_row_R_arc_scene_ui_layout_Table)(jcontext ctx, jobject self);
#define VTABLE_mindustry_core_UI$10_endRow 225
typedef void (*func_mindustry_core_UI$10_endRow)(jcontext ctx, jobject self);
#define VTABLE_mindustry_core_UI$10_getCell_arc_scene_Element_R_arc_scene_ui_layout_Cell 226
typedef jobject (*func_mindustry_core_UI$10_getCell_arc_scene_Element_R_arc_scene_ui_layout_Cell)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_core_UI$10_getCells_R_arc_struct_Seq 227
typedef jobject (*func_mindustry_core_UI$10_getCells_R_arc_struct_Seq)(jcontext ctx, jobject self);
#define VTABLE_mindustry_core_UI$10_defaults_R_arc_scene_ui_layout_Cell 228
typedef jobject (*func_mindustry_core_UI$10_defaults_R_arc_scene_ui_layout_Cell)(jcontext ctx, jobject self);
#define VTABLE_mindustry_core_UI$10_margin_float_R_arc_scene_ui_layout_Table 229
typedef jobject (*func_mindustry_core_UI$10_margin_float_R_arc_scene_ui_layout_Table)(jcontext ctx, jobject self, jfloat param0);
#define VTABLE_mindustry_core_UI$10_margin_float_float_float_float_R_arc_scene_ui_layout_Table 230
typedef jobject (*func_mindustry_core_UI$10_margin_float_float_float_float_R_arc_scene_ui_layout_Table)(jcontext ctx, jobject self, jfloat param0, jfloat param1, jfloat param2, jfloat param3);
#define VTABLE_mindustry_core_UI$10_marginTop_float_R_arc_scene_ui_layout_Table 231
typedef jobject (*func_mindustry_core_UI$10_marginTop_float_R_arc_scene_ui_layout_Table)(jcontext ctx, jobject self, jfloat param0);
#define VTABLE_mindustry_core_UI$10_marginLeft_float_R_arc_scene_ui_layout_Table 232
typedef jobject (*func_mindustry_core_UI$10_marginLeft_float_R_arc_scene_ui_layout_Table)(jcontext ctx, jobject self, jfloat param0);
#define VTABLE_mindustry_core_UI$10_marginBottom_float_R_arc_scene_ui_layout_Table 233
typedef jobject (*func_mindustry_core_UI$10_marginBottom_float_R_arc_scene_ui_layout_Table)(jcontext ctx, jobject self, jfloat param0);
#define VTABLE_mindustry_core_UI$10_marginRight_float_R_arc_scene_ui_layout_Table 234
typedef jobject (*func_mindustry_core_UI$10_marginRight_float_R_arc_scene_ui_layout_Table)(jcontext ctx, jobject self, jfloat param0);
#define VTABLE_mindustry_core_UI$10_align_int_R_arc_scene_ui_layout_Table 235
typedef jobject (*func_mindustry_core_UI$10_align_int_R_arc_scene_ui_layout_Table)(jcontext ctx, jobject self, jint param0);
#define VTABLE_mindustry_core_UI$10_center_R_arc_scene_ui_layout_Table 236
typedef jobject (*func_mindustry_core_UI$10_center_R_arc_scene_ui_layout_Table)(jcontext ctx, jobject self);
#define VTABLE_mindustry_core_UI$10_top_R_arc_scene_ui_layout_Table 237
typedef jobject (*func_mindustry_core_UI$10_top_R_arc_scene_ui_layout_Table)(jcontext ctx, jobject self);
#define VTABLE_mindustry_core_UI$10_left_R_arc_scene_ui_layout_Table 238
typedef jobject (*func_mindustry_core_UI$10_left_R_arc_scene_ui_layout_Table)(jcontext ctx, jobject self);
#define VTABLE_mindustry_core_UI$10_bottom_R_arc_scene_ui_layout_Table 239
typedef jobject (*func_mindustry_core_UI$10_bottom_R_arc_scene_ui_layout_Table)(jcontext ctx, jobject self);
#define VTABLE_mindustry_core_UI$10_right_R_arc_scene_ui_layout_Table 240
typedef jobject (*func_mindustry_core_UI$10_right_R_arc_scene_ui_layout_Table)(jcontext ctx, jobject self);
#define VTABLE_mindustry_core_UI$10_getMarginTop_R_float 241
typedef jfloat (*func_mindustry_core_UI$10_getMarginTop_R_float)(jcontext ctx, jobject self);
#define VTABLE_mindustry_core_UI$10_getMarginLeft_R_float 242
typedef jfloat (*func_mindustry_core_UI$10_getMarginLeft_R_float)(jcontext ctx, jobject self);
#define VTABLE_mindustry_core_UI$10_getMarginBottom_R_float 243
typedef jfloat (*func_mindustry_core_UI$10_getMarginBottom_R_float)(jcontext ctx, jobject self);
#define VTABLE_mindustry_core_UI$10_getMarginRight_R_float 244
typedef jfloat (*func_mindustry_core_UI$10_getMarginRight_R_float)(jcontext ctx, jobject self);
#define VTABLE_mindustry_core_UI$10_getAlign_R_int 245
typedef jint (*func_mindustry_core_UI$10_getAlign_R_int)(jcontext ctx, jobject self);
#define VTABLE_mindustry_core_UI$10_getRow_float_R_int 246
typedef jint (*func_mindustry_core_UI$10_getRow_float_R_int)(jcontext ctx, jobject self, jfloat param0);
#define VTABLE_mindustry_core_UI$10_setRound_boolean 247
typedef void (*func_mindustry_core_UI$10_setRound_boolean)(jcontext ctx, jobject self, jbool param0);
#define VTABLE_mindustry_core_UI$10_getRows_R_int 248
typedef jint (*func_mindustry_core_UI$10_getRows_R_int)(jcontext ctx, jobject self);
#define VTABLE_mindustry_core_UI$10_getColumns_R_int 249
typedef jint (*func_mindustry_core_UI$10_getColumns_R_int)(jcontext ctx, jobject self);
#define VTABLE_mindustry_core_UI$10_getRowHeight_int_R_float 250
typedef jfloat (*func_mindustry_core_UI$10_getRowHeight_int_R_float)(jcontext ctx, jobject self, jint param0);
#define VTABLE_mindustry_core_UI$10_getColumnWidth_int_R_float 251
typedef jfloat (*func_mindustry_core_UI$10_getColumnWidth_int_R_float)(jcontext ctx, jobject self, jint param0);
#define VTABLE_mindustry_core_UI$10_ensureSize_Array1_float_int_R_Array1_float 252
typedef jobject (*func_mindustry_core_UI$10_ensureSize_Array1_float_int_R_Array1_float)(jcontext ctx, jobject self, jobject param0, jint param1);
#define VTABLE_mindustry_core_UI$10_computeSize 253
typedef void (*func_mindustry_core_UI$10_computeSize)(jcontext ctx, jobject self);
#define VTABLE_mindustry_core_UI$10_layout_float_float_float_float 254
typedef void (*func_mindustry_core_UI$10_layout_float_float_float_float)(jcontext ctx, jobject self, jfloat param0, jfloat param1, jfloat param2, jfloat param3);
#define VTABLE_mindustry_core_UI$10_getStyle_R_arc_scene_ui_Dialog$DialogStyle 255
typedef jobject (*func_mindustry_core_UI$10_getStyle_R_arc_scene_ui_Dialog$DialogStyle)(jcontext ctx, jobject self);
#define VTABLE_mindustry_core_UI$10_setStyle_arc_scene_ui_Dialog$DialogStyle 256
typedef void (*func_mindustry_core_UI$10_setStyle_arc_scene_ui_Dialog$DialogStyle)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_core_UI$10_keepWithinStage 257
typedef void (*func_mindustry_core_UI$10_keepWithinStage)(jcontext ctx, jobject self);
#define VTABLE_mindustry_core_UI$10_drawStageBackground_float_float_float_float 258
typedef void (*func_mindustry_core_UI$10_drawStageBackground_float_float_float_float)(jcontext ctx, jobject self, jfloat param0, jfloat param1, jfloat param2, jfloat param3);
#define VTABLE_mindustry_core_UI$10_centerWindow 259
typedef void (*func_mindustry_core_UI$10_centerWindow)(jcontext ctx, jobject self);
#define VTABLE_mindustry_core_UI$10_isMovable_R_boolean 260
typedef jbool (*func_mindustry_core_UI$10_isMovable_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_mindustry_core_UI$10_setMovable_boolean 261
typedef void (*func_mindustry_core_UI$10_setMovable_boolean)(jcontext ctx, jobject self, jbool param0);
#define VTABLE_mindustry_core_UI$10_isModal_R_boolean 262
typedef jbool (*func_mindustry_core_UI$10_isModal_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_mindustry_core_UI$10_setModal_boolean 263
typedef void (*func_mindustry_core_UI$10_setModal_boolean)(jcontext ctx, jobject self, jbool param0);
#define VTABLE_mindustry_core_UI$10_setKeepWithinStage_boolean 264
typedef void (*func_mindustry_core_UI$10_setKeepWithinStage_boolean)(jcontext ctx, jobject self, jbool param0);
#define VTABLE_mindustry_core_UI$10_isCentered_R_boolean 265
typedef jbool (*func_mindustry_core_UI$10_isCentered_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_mindustry_core_UI$10_setCentered_boolean 266
typedef void (*func_mindustry_core_UI$10_setCentered_boolean)(jcontext ctx, jobject self, jbool param0);
#define VTABLE_mindustry_core_UI$10_isResizable_R_boolean 267
typedef jbool (*func_mindustry_core_UI$10_isResizable_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_mindustry_core_UI$10_setResizable_boolean 268
typedef void (*func_mindustry_core_UI$10_setResizable_boolean)(jcontext ctx, jobject self, jbool param0);
#define VTABLE_mindustry_core_UI$10_setResizeBorder_int 269
typedef void (*func_mindustry_core_UI$10_setResizeBorder_int)(jcontext ctx, jobject self, jint param0);
#define VTABLE_mindustry_core_UI$10_isDragging_R_boolean 270
typedef jbool (*func_mindustry_core_UI$10_isDragging_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_mindustry_core_UI$10_updateScrollFocus 271
typedef void (*func_mindustry_core_UI$10_updateScrollFocus)(jcontext ctx, jobject self);
#define VTABLE_mindustry_core_UI$10_shown_java_lang_Runnable 272
typedef void (*func_mindustry_core_UI$10_shown_java_lang_Runnable)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_core_UI$10_hidden_java_lang_Runnable 273
typedef void (*func_mindustry_core_UI$10_hidden_java_lang_Runnable)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_core_UI$10_resizedShown_java_lang_Runnable 274
typedef void (*func_mindustry_core_UI$10_resizedShown_java_lang_Runnable)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_core_UI$10_resized_java_lang_Runnable 275
typedef void (*func_mindustry_core_UI$10_resized_java_lang_Runnable)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_core_UI$10_resized_boolean_java_lang_Runnable 276
typedef void (*func_mindustry_core_UI$10_resized_boolean_java_lang_Runnable)(jcontext ctx, jobject self, jbool param0, jobject param1);
#define VTABLE_mindustry_core_UI$10_addCloseButton 277
typedef void (*func_mindustry_core_UI$10_addCloseButton)(jcontext ctx, jobject self);
#define VTABLE_mindustry_core_UI$10_closeOnBack 278
typedef void (*func_mindustry_core_UI$10_closeOnBack)(jcontext ctx, jobject self);
#define VTABLE_mindustry_core_UI$10_closeOnBack_java_lang_Runnable 279
typedef void (*func_mindustry_core_UI$10_closeOnBack_java_lang_Runnable)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_core_UI$10_isShown_R_boolean 280
typedef jbool (*func_mindustry_core_UI$10_isShown_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_mindustry_core_UI$10_show_arc_scene_Scene_arc_scene_Action_R_arc_scene_ui_Dialog 281
typedef jobject (*func_mindustry_core_UI$10_show_arc_scene_Scene_arc_scene_Action_R_arc_scene_ui_Dialog)(jcontext ctx, jobject self, jobject param0, jobject param1);
#define VTABLE_mindustry_core_UI$10_toggle 282
typedef void (*func_mindustry_core_UI$10_toggle)(jcontext ctx, jobject self);
#define VTABLE_mindustry_core_UI$10_show_R_arc_scene_ui_Dialog 283
typedef jobject (*func_mindustry_core_UI$10_show_R_arc_scene_ui_Dialog)(jcontext ctx, jobject self);
#define VTABLE_mindustry_core_UI$10_show_arc_scene_Scene_R_arc_scene_ui_Dialog 284
typedef jobject (*func_mindustry_core_UI$10_show_arc_scene_Scene_R_arc_scene_ui_Dialog)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_core_UI$10_hide_arc_scene_Action 285
typedef void (*func_mindustry_core_UI$10_hide_arc_scene_Action)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_core_UI$10_hide 286
typedef void (*func_mindustry_core_UI$10_hide)(jcontext ctx, jobject self);
#define VTABLE_mindustry_core_UI$10_lambda$closeOnBack$1_java_lang_Runnable_arc_input_KeyCode 287
typedef void (*func_mindustry_core_UI$10_lambda$closeOnBack$1_java_lang_Runnable_arc_input_KeyCode)(jcontext ctx, jobject self, jobject param0, jobject param1);
#define VTABLE_mindustry_core_UI$10_lambda$updateScrollFocus$0_Array1_boolean 288
typedef void (*func_mindustry_core_UI$10_lambda$updateScrollFocus$0_Array1_boolean)(jcontext ctx, jobject self, jobject param0);

void mark_mindustry_core_UI$10(jobject object, jint mark, jint depth);
void clinit_mindustry_core_UI$10(jcontext ctx);
void init_mindustry_core_UI$10_mindustry_core_UI_java_lang_String_java_lang_String(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2);

#ifdef __cplusplus
}
#endif

#endif
