#ifndef HEADER_mindustry_ui_Minimap
#define HEADER_mindustry_ui_Minimap

#include "Clearwing.h"
#include "arc/scene/ui/layout/Table.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct mindustry_ui_Minimap {
	arc_scene_ui_layout_Table parent;
} mindustry_ui_Minimap;

extern Class class_mindustry_ui_Minimap;


#define VTABLE_mindustry_ui_Minimap_hashCode_R_int 0
typedef jint (*func_mindustry_ui_Minimap_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_mindustry_ui_Minimap_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_mindustry_ui_Minimap_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_ui_Minimap_clone_R_java_lang_Object 2
typedef jobject (*func_mindustry_ui_Minimap_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_mindustry_ui_Minimap_getClass_R_java_lang_Class 3
typedef jobject (*func_mindustry_ui_Minimap_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_mindustry_ui_Minimap_toString_R_java_lang_String 4
typedef jobject (*func_mindustry_ui_Minimap_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_mindustry_ui_Minimap_finalize 5
typedef void (*func_mindustry_ui_Minimap_finalize)(jcontext ctx, jobject self);
#define VTABLE_mindustry_ui_Minimap_notify 6
typedef void (*func_mindustry_ui_Minimap_notify)(jcontext ctx, jobject self);
#define VTABLE_mindustry_ui_Minimap_notifyAll 7
typedef void (*func_mindustry_ui_Minimap_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_mindustry_ui_Minimap_wait 8
typedef void (*func_mindustry_ui_Minimap_wait)(jcontext ctx, jobject self);
#define VTABLE_mindustry_ui_Minimap_wait_long 9
typedef void (*func_mindustry_ui_Minimap_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_mindustry_ui_Minimap_wait_long_int 10
typedef void (*func_mindustry_ui_Minimap_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);
#define VTABLE_mindustry_ui_Minimap_draw 11
typedef void (*func_mindustry_ui_Minimap_draw)(jcontext ctx, jobject self);
#define VTABLE_mindustry_ui_Minimap_act_float 12
typedef void (*func_mindustry_ui_Minimap_act_float)(jcontext ctx, jobject self, jfloat param0);
#define VTABLE_mindustry_ui_Minimap_updateVisibility 13
typedef void (*func_mindustry_ui_Minimap_updateVisibility)(jcontext ctx, jobject self);
#define VTABLE_mindustry_ui_Minimap_hasMouse_R_boolean 14
typedef jbool (*func_mindustry_ui_Minimap_hasMouse_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_mindustry_ui_Minimap_hasKeyboard_R_boolean 15
typedef jbool (*func_mindustry_ui_Minimap_hasKeyboard_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_mindustry_ui_Minimap_hasScroll_R_boolean 16
typedef jbool (*func_mindustry_ui_Minimap_hasScroll_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_mindustry_ui_Minimap_requestKeyboard 17
typedef void (*func_mindustry_ui_Minimap_requestKeyboard)(jcontext ctx, jobject self);
#define VTABLE_mindustry_ui_Minimap_requestScroll 18
typedef void (*func_mindustry_ui_Minimap_requestScroll)(jcontext ctx, jobject self);
#define VTABLE_mindustry_ui_Minimap_fire_arc_scene_event_SceneEvent_R_boolean 19
typedef jbool (*func_mindustry_ui_Minimap_fire_arc_scene_event_SceneEvent_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_ui_Minimap_notify_arc_scene_event_SceneEvent_boolean_R_boolean 20
typedef jbool (*func_mindustry_ui_Minimap_notify_arc_scene_event_SceneEvent_boolean_R_boolean)(jcontext ctx, jobject self, jobject param0, jbool param1);
#define VTABLE_mindustry_ui_Minimap_hit_float_float_boolean_R_arc_scene_Element 21
typedef jobject (*func_mindustry_ui_Minimap_hit_float_float_boolean_R_arc_scene_Element)(jcontext ctx, jobject self, jfloat param0, jfloat param1, jbool param2);
#define VTABLE_mindustry_ui_Minimap_remove_R_boolean 22
typedef jbool (*func_mindustry_ui_Minimap_remove_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_mindustry_ui_Minimap_dragged_arc_func_Floatc2 23
typedef void (*func_mindustry_ui_Minimap_dragged_arc_func_Floatc2)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_ui_Minimap_scrolled_arc_func_Floatc 24
typedef void (*func_mindustry_ui_Minimap_scrolled_arc_func_Floatc)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_ui_Minimap_addListener_arc_scene_event_EventListener_R_boolean 25
typedef jbool (*func_mindustry_ui_Minimap_addListener_arc_scene_event_EventListener_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_ui_Minimap_removeListener_arc_scene_event_EventListener_R_boolean 26
typedef jbool (*func_mindustry_ui_Minimap_removeListener_arc_scene_event_EventListener_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_ui_Minimap_getListeners_R_arc_struct_Seq 27
typedef jobject (*func_mindustry_ui_Minimap_getListeners_R_arc_struct_Seq)(jcontext ctx, jobject self);
#define VTABLE_mindustry_ui_Minimap_addCaptureListener_arc_scene_event_EventListener_R_boolean 28
typedef jbool (*func_mindustry_ui_Minimap_addCaptureListener_arc_scene_event_EventListener_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_ui_Minimap_removeCaptureListener_arc_scene_event_EventListener_R_boolean 29
typedef jbool (*func_mindustry_ui_Minimap_removeCaptureListener_arc_scene_event_EventListener_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_ui_Minimap_getCaptureListeners_R_arc_struct_Seq 30
typedef jobject (*func_mindustry_ui_Minimap_getCaptureListeners_R_arc_struct_Seq)(jcontext ctx, jobject self);
#define VTABLE_mindustry_ui_Minimap_addAction_arc_scene_Action 31
typedef void (*func_mindustry_ui_Minimap_addAction_arc_scene_Action)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_ui_Minimap_actions_Array1_arc_scene_Action 32
typedef void (*func_mindustry_ui_Minimap_actions_Array1_arc_scene_Action)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_ui_Minimap_removeAction_arc_scene_Action 33
typedef void (*func_mindustry_ui_Minimap_removeAction_arc_scene_Action)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_ui_Minimap_getActions_R_arc_struct_Seq 34
typedef jobject (*func_mindustry_ui_Minimap_getActions_R_arc_struct_Seq)(jcontext ctx, jobject self);
#define VTABLE_mindustry_ui_Minimap_hasActions_R_boolean 35
typedef jbool (*func_mindustry_ui_Minimap_hasActions_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_mindustry_ui_Minimap_clearActions 36
typedef void (*func_mindustry_ui_Minimap_clearActions)(jcontext ctx, jobject self);
#define VTABLE_mindustry_ui_Minimap_clearListeners 37
typedef void (*func_mindustry_ui_Minimap_clearListeners)(jcontext ctx, jobject self);
#define VTABLE_mindustry_ui_Minimap_clear 38
typedef void (*func_mindustry_ui_Minimap_clear)(jcontext ctx, jobject self);
#define VTABLE_mindustry_ui_Minimap_getScene_R_arc_scene_Scene 39
typedef jobject (*func_mindustry_ui_Minimap_getScene_R_arc_scene_Scene)(jcontext ctx, jobject self);
#define VTABLE_mindustry_ui_Minimap_setScene_arc_scene_Scene 40
typedef void (*func_mindustry_ui_Minimap_setScene_arc_scene_Scene)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_ui_Minimap_isDescendantOf_arc_func_Boolf_R_boolean 41
typedef jbool (*func_mindustry_ui_Minimap_isDescendantOf_arc_func_Boolf_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_ui_Minimap_isDescendantOf_arc_scene_Element_R_boolean 42
typedef jbool (*func_mindustry_ui_Minimap_isDescendantOf_arc_scene_Element_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_ui_Minimap_isAscendantOf_arc_scene_Element_R_boolean 43
typedef jbool (*func_mindustry_ui_Minimap_isAscendantOf_arc_scene_Element_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_ui_Minimap_hasParent_R_boolean 44
typedef jbool (*func_mindustry_ui_Minimap_hasParent_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_mindustry_ui_Minimap_isTouchable_R_boolean 45
typedef jbool (*func_mindustry_ui_Minimap_isTouchable_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_mindustry_ui_Minimap_getX_int_R_float 46
typedef jfloat (*func_mindustry_ui_Minimap_getX_int_R_float)(jcontext ctx, jobject self, jint param0);
#define VTABLE_mindustry_ui_Minimap_getY_int_R_float 47
typedef jfloat (*func_mindustry_ui_Minimap_getY_int_R_float)(jcontext ctx, jobject self, jint param0);
#define VTABLE_mindustry_ui_Minimap_setPosition_float_float 48
typedef void (*func_mindustry_ui_Minimap_setPosition_float_float)(jcontext ctx, jobject self, jfloat param0, jfloat param1);
#define VTABLE_mindustry_ui_Minimap_setPosition_float_float_int 49
typedef void (*func_mindustry_ui_Minimap_setPosition_float_float_int)(jcontext ctx, jobject self, jfloat param0, jfloat param1, jint param2);
#define VTABLE_mindustry_ui_Minimap_moveBy_float_float 50
typedef void (*func_mindustry_ui_Minimap_moveBy_float_float)(jcontext ctx, jobject self, jfloat param0, jfloat param1);
#define VTABLE_mindustry_ui_Minimap_getWidth_R_float 51
typedef jfloat (*func_mindustry_ui_Minimap_getWidth_R_float)(jcontext ctx, jobject self);
#define VTABLE_mindustry_ui_Minimap_setWidth_float 52
typedef void (*func_mindustry_ui_Minimap_setWidth_float)(jcontext ctx, jobject self, jfloat param0);
#define VTABLE_mindustry_ui_Minimap_getHeight_R_float 53
typedef jfloat (*func_mindustry_ui_Minimap_getHeight_R_float)(jcontext ctx, jobject self);
#define VTABLE_mindustry_ui_Minimap_setHeight_float 54
typedef void (*func_mindustry_ui_Minimap_setHeight_float)(jcontext ctx, jobject self, jfloat param0);
#define VTABLE_mindustry_ui_Minimap_getTop_R_float 55
typedef jfloat (*func_mindustry_ui_Minimap_getTop_R_float)(jcontext ctx, jobject self);
#define VTABLE_mindustry_ui_Minimap_getRight_R_float 56
typedef jfloat (*func_mindustry_ui_Minimap_getRight_R_float)(jcontext ctx, jobject self);
#define VTABLE_mindustry_ui_Minimap_sizeChanged 57
typedef void (*func_mindustry_ui_Minimap_sizeChanged)(jcontext ctx, jobject self);
#define VTABLE_mindustry_ui_Minimap_rotationChanged 58
typedef void (*func_mindustry_ui_Minimap_rotationChanged)(jcontext ctx, jobject self);
#define VTABLE_mindustry_ui_Minimap_setSize_float 59
typedef void (*func_mindustry_ui_Minimap_setSize_float)(jcontext ctx, jobject self, jfloat param0);
#define VTABLE_mindustry_ui_Minimap_setSize_float_float 60
typedef void (*func_mindustry_ui_Minimap_setSize_float_float)(jcontext ctx, jobject self, jfloat param0, jfloat param1);
#define VTABLE_mindustry_ui_Minimap_sizeBy_float 61
typedef void (*func_mindustry_ui_Minimap_sizeBy_float)(jcontext ctx, jobject self, jfloat param0);
#define VTABLE_mindustry_ui_Minimap_sizeBy_float_float 62
typedef void (*func_mindustry_ui_Minimap_sizeBy_float_float)(jcontext ctx, jobject self, jfloat param0, jfloat param1);
#define VTABLE_mindustry_ui_Minimap_setBounds_float_float_float_float 63
typedef void (*func_mindustry_ui_Minimap_setBounds_float_float_float_float)(jcontext ctx, jobject self, jfloat param0, jfloat param1, jfloat param2, jfloat param3);
#define VTABLE_mindustry_ui_Minimap_setOrigin_float_float 64
typedef void (*func_mindustry_ui_Minimap_setOrigin_float_float)(jcontext ctx, jobject self, jfloat param0, jfloat param1);
#define VTABLE_mindustry_ui_Minimap_setOrigin_int 65
typedef void (*func_mindustry_ui_Minimap_setOrigin_int)(jcontext ctx, jobject self, jint param0);
#define VTABLE_mindustry_ui_Minimap_setScale_float 66
typedef void (*func_mindustry_ui_Minimap_setScale_float)(jcontext ctx, jobject self, jfloat param0);
#define VTABLE_mindustry_ui_Minimap_setScale_float_float 67
typedef void (*func_mindustry_ui_Minimap_setScale_float_float)(jcontext ctx, jobject self, jfloat param0, jfloat param1);
#define VTABLE_mindustry_ui_Minimap_scaleBy_float 68
typedef void (*func_mindustry_ui_Minimap_scaleBy_float)(jcontext ctx, jobject self, jfloat param0);
#define VTABLE_mindustry_ui_Minimap_scaleBy_float_float 69
typedef void (*func_mindustry_ui_Minimap_scaleBy_float_float)(jcontext ctx, jobject self, jfloat param0, jfloat param1);
#define VTABLE_mindustry_ui_Minimap_getRotation_R_float 70
typedef jfloat (*func_mindustry_ui_Minimap_getRotation_R_float)(jcontext ctx, jobject self);
#define VTABLE_mindustry_ui_Minimap_setRotation_float 71
typedef void (*func_mindustry_ui_Minimap_setRotation_float)(jcontext ctx, jobject self, jfloat param0);
#define VTABLE_mindustry_ui_Minimap_setRotationOrigin_float_int 72
typedef void (*func_mindustry_ui_Minimap_setRotationOrigin_float_int)(jcontext ctx, jobject self, jfloat param0, jint param1);
#define VTABLE_mindustry_ui_Minimap_rotateBy_float 73
typedef void (*func_mindustry_ui_Minimap_rotateBy_float)(jcontext ctx, jobject self, jfloat param0);
#define VTABLE_mindustry_ui_Minimap_setColor_float_float_float_float 74
typedef void (*func_mindustry_ui_Minimap_setColor_float_float_float_float)(jcontext ctx, jobject self, jfloat param0, jfloat param1, jfloat param2, jfloat param3);
#define VTABLE_mindustry_ui_Minimap_setColor_arc_graphics_Color 75
typedef void (*func_mindustry_ui_Minimap_setColor_arc_graphics_Color)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_ui_Minimap_toFront 76
typedef void (*func_mindustry_ui_Minimap_toFront)(jcontext ctx, jobject self);
#define VTABLE_mindustry_ui_Minimap_toBack 77
typedef void (*func_mindustry_ui_Minimap_toBack)(jcontext ctx, jobject self);
#define VTABLE_mindustry_ui_Minimap_getZIndex_R_int 78
typedef jint (*func_mindustry_ui_Minimap_getZIndex_R_int)(jcontext ctx, jobject self);
#define VTABLE_mindustry_ui_Minimap_setZIndex_int 79
typedef void (*func_mindustry_ui_Minimap_setZIndex_int)(jcontext ctx, jobject self, jint param0);
#define VTABLE_mindustry_ui_Minimap_clipBegin_R_boolean 80
typedef jbool (*func_mindustry_ui_Minimap_clipBegin_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_mindustry_ui_Minimap_clipBegin_float_float_float_float_R_boolean 81
typedef jbool (*func_mindustry_ui_Minimap_clipBegin_float_float_float_float_R_boolean)(jcontext ctx, jobject self, jfloat param0, jfloat param1, jfloat param2, jfloat param3);
#define VTABLE_mindustry_ui_Minimap_clipEnd 82
typedef void (*func_mindustry_ui_Minimap_clipEnd)(jcontext ctx, jobject self);
#define VTABLE_mindustry_ui_Minimap_screenToLocalCoordinates_arc_math_geom_Vec2_R_arc_math_geom_Vec2 83
typedef jobject (*func_mindustry_ui_Minimap_screenToLocalCoordinates_arc_math_geom_Vec2_R_arc_math_geom_Vec2)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_ui_Minimap_stageToLocalCoordinates_arc_math_geom_Vec2_R_arc_math_geom_Vec2 84
typedef jobject (*func_mindustry_ui_Minimap_stageToLocalCoordinates_arc_math_geom_Vec2_R_arc_math_geom_Vec2)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_ui_Minimap_localToStageCoordinates_arc_math_geom_Vec2_R_arc_math_geom_Vec2 85
typedef jobject (*func_mindustry_ui_Minimap_localToStageCoordinates_arc_math_geom_Vec2_R_arc_math_geom_Vec2)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_ui_Minimap_localToParentCoordinates_arc_math_geom_Vec2_R_arc_math_geom_Vec2 86
typedef jobject (*func_mindustry_ui_Minimap_localToParentCoordinates_arc_math_geom_Vec2_R_arc_math_geom_Vec2)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_ui_Minimap_localToAscendantCoordinates_arc_scene_Element_arc_math_geom_Vec2_R_arc_math_geom_Vec2 87
typedef jobject (*func_mindustry_ui_Minimap_localToAscendantCoordinates_arc_scene_Element_arc_math_geom_Vec2_R_arc_math_geom_Vec2)(jcontext ctx, jobject self, jobject param0, jobject param1);
#define VTABLE_mindustry_ui_Minimap_parentToLocalCoordinates_arc_math_geom_Vec2_R_arc_math_geom_Vec2 88
typedef jobject (*func_mindustry_ui_Minimap_parentToLocalCoordinates_arc_math_geom_Vec2_R_arc_math_geom_Vec2)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_ui_Minimap_getMinWidth_R_float 89
typedef jfloat (*func_mindustry_ui_Minimap_getMinWidth_R_float)(jcontext ctx, jobject self);
#define VTABLE_mindustry_ui_Minimap_getMinHeight_R_float 90
typedef jfloat (*func_mindustry_ui_Minimap_getMinHeight_R_float)(jcontext ctx, jobject self);
#define VTABLE_mindustry_ui_Minimap_getPrefWidth_R_float 91
typedef jfloat (*func_mindustry_ui_Minimap_getPrefWidth_R_float)(jcontext ctx, jobject self);
#define VTABLE_mindustry_ui_Minimap_getPrefHeight_R_float 92
typedef jfloat (*func_mindustry_ui_Minimap_getPrefHeight_R_float)(jcontext ctx, jobject self);
#define VTABLE_mindustry_ui_Minimap_getMaxWidth_R_float 93
typedef jfloat (*func_mindustry_ui_Minimap_getMaxWidth_R_float)(jcontext ctx, jobject self);
#define VTABLE_mindustry_ui_Minimap_getMaxHeight_R_float 94
typedef jfloat (*func_mindustry_ui_Minimap_getMaxHeight_R_float)(jcontext ctx, jobject self);
#define VTABLE_mindustry_ui_Minimap_setLayoutEnabled_boolean 95
typedef void (*func_mindustry_ui_Minimap_setLayoutEnabled_boolean)(jcontext ctx, jobject self, jbool param0);
#define VTABLE_mindustry_ui_Minimap_validate 96
typedef void (*func_mindustry_ui_Minimap_validate)(jcontext ctx, jobject self);
#define VTABLE_mindustry_ui_Minimap_needsLayout_R_boolean 97
typedef jbool (*func_mindustry_ui_Minimap_needsLayout_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_mindustry_ui_Minimap_invalidate 98
typedef void (*func_mindustry_ui_Minimap_invalidate)(jcontext ctx, jobject self);
#define VTABLE_mindustry_ui_Minimap_invalidateHierarchy 99
typedef void (*func_mindustry_ui_Minimap_invalidateHierarchy)(jcontext ctx, jobject self);
#define VTABLE_mindustry_ui_Minimap_pack 100
typedef void (*func_mindustry_ui_Minimap_pack)(jcontext ctx, jobject self);
#define VTABLE_mindustry_ui_Minimap_setFillParent_boolean 101
typedef void (*func_mindustry_ui_Minimap_setFillParent_boolean)(jcontext ctx, jobject self, jbool param0);
#define VTABLE_mindustry_ui_Minimap_layout 102
typedef void (*func_mindustry_ui_Minimap_layout)(jcontext ctx, jobject self);
#define VTABLE_mindustry_ui_Minimap_keepInStage 103
typedef void (*func_mindustry_ui_Minimap_keepInStage)(jcontext ctx, jobject self);
#define VTABLE_mindustry_ui_Minimap_setTranslation_float_float 104
typedef void (*func_mindustry_ui_Minimap_setTranslation_float_float)(jcontext ctx, jobject self, jfloat param0, jfloat param1);
#define VTABLE_mindustry_ui_Minimap_keyDown_arc_input_KeyCode_java_lang_Runnable 105
typedef void (*func_mindustry_ui_Minimap_keyDown_arc_input_KeyCode_java_lang_Runnable)(jcontext ctx, jobject self, jobject param0, jobject param1);
#define VTABLE_mindustry_ui_Minimap_keyDown_arc_func_Cons 106
typedef void (*func_mindustry_ui_Minimap_keyDown_arc_func_Cons)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_ui_Minimap_fireClick 107
typedef void (*func_mindustry_ui_Minimap_fireClick)(jcontext ctx, jobject self);
#define VTABLE_mindustry_ui_Minimap_clicked_java_lang_Runnable_R_arc_scene_event_ClickListener 108
typedef jobject (*func_mindustry_ui_Minimap_clicked_java_lang_Runnable_R_arc_scene_event_ClickListener)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_ui_Minimap_clicked_arc_input_KeyCode_java_lang_Runnable_R_arc_scene_event_ClickListener 109
typedef jobject (*func_mindustry_ui_Minimap_clicked_arc_input_KeyCode_java_lang_Runnable_R_arc_scene_event_ClickListener)(jcontext ctx, jobject self, jobject param0, jobject param1);
#define VTABLE_mindustry_ui_Minimap_clicked_arc_func_Cons_java_lang_Runnable_R_arc_scene_event_ClickListener 110
typedef jobject (*func_mindustry_ui_Minimap_clicked_arc_func_Cons_java_lang_Runnable_R_arc_scene_event_ClickListener)(jcontext ctx, jobject self, jobject param0, jobject param1);
#define VTABLE_mindustry_ui_Minimap_clicked_arc_func_Cons_arc_func_Cons_R_arc_scene_event_ClickListener 111
typedef jobject (*func_mindustry_ui_Minimap_clicked_arc_func_Cons_arc_func_Cons_R_arc_scene_event_ClickListener)(jcontext ctx, jobject self, jobject param0, jobject param1);
#define VTABLE_mindustry_ui_Minimap_tapped_java_lang_Runnable_R_arc_scene_event_InputListener 112
typedef jobject (*func_mindustry_ui_Minimap_tapped_java_lang_Runnable_R_arc_scene_event_InputListener)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_ui_Minimap_hovered_java_lang_Runnable 113
typedef void (*func_mindustry_ui_Minimap_hovered_java_lang_Runnable)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_ui_Minimap_exited_java_lang_Runnable 114
typedef void (*func_mindustry_ui_Minimap_exited_java_lang_Runnable)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_ui_Minimap_released_java_lang_Runnable 115
typedef void (*func_mindustry_ui_Minimap_released_java_lang_Runnable)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_ui_Minimap_change 116
typedef void (*func_mindustry_ui_Minimap_change)(jcontext ctx, jobject self);
#define VTABLE_mindustry_ui_Minimap_changed_java_lang_Runnable 117
typedef void (*func_mindustry_ui_Minimap_changed_java_lang_Runnable)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_ui_Minimap_update_java_lang_Runnable_R_arc_scene_Element 118
typedef jobject (*func_mindustry_ui_Minimap_update_java_lang_Runnable_R_arc_scene_Element)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_ui_Minimap_visible_arc_func_Boolp_R_arc_scene_Element 119
typedef jobject (*func_mindustry_ui_Minimap_visible_arc_func_Boolp_R_arc_scene_Element)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_ui_Minimap_touchable_arc_func_Prov 120
typedef void (*func_mindustry_ui_Minimap_touchable_arc_func_Prov)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_ui_Minimap_setCullingArea_arc_math_geom_Rect 121
typedef void (*func_mindustry_ui_Minimap_setCullingArea_arc_math_geom_Rect)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_ui_Minimap_drawChildren 122
typedef void (*func_mindustry_ui_Minimap_drawChildren)(jcontext ctx, jobject self);
#define VTABLE_mindustry_ui_Minimap_computeTransform_R_arc_math_Mat 123
typedef jobject (*func_mindustry_ui_Minimap_computeTransform_R_arc_math_Mat)(jcontext ctx, jobject self);
#define VTABLE_mindustry_ui_Minimap_applyTransform_arc_math_Mat 124
typedef void (*func_mindustry_ui_Minimap_applyTransform_arc_math_Mat)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_ui_Minimap_resetTransform 125
typedef void (*func_mindustry_ui_Minimap_resetTransform)(jcontext ctx, jobject self);
#define VTABLE_mindustry_ui_Minimap_getCullingArea_R_arc_math_geom_Rect 126
typedef jobject (*func_mindustry_ui_Minimap_getCullingArea_R_arc_math_geom_Rect)(jcontext ctx, jobject self);
#define VTABLE_mindustry_ui_Minimap_childrenChanged 127
typedef void (*func_mindustry_ui_Minimap_childrenChanged)(jcontext ctx, jobject self);
#define VTABLE_mindustry_ui_Minimap_forEach_arc_func_Cons 128
typedef void (*func_mindustry_ui_Minimap_forEach_arc_func_Cons)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_ui_Minimap_fill_arc_scene_ui_layout_Table$DrawRect_R_arc_scene_Element 129
typedef jobject (*func_mindustry_ui_Minimap_fill_arc_scene_ui_layout_Table$DrawRect_R_arc_scene_Element)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_ui_Minimap_fill_arc_func_Cons 130
typedef void (*func_mindustry_ui_Minimap_fill_arc_func_Cons)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_ui_Minimap_fill_arc_scene_style_Drawable_arc_func_Cons 131
typedef void (*func_mindustry_ui_Minimap_fill_arc_scene_style_Drawable_arc_func_Cons)(jcontext ctx, jobject self, jobject param0, jobject param1);
#define VTABLE_mindustry_ui_Minimap_addChild_arc_scene_Element 132
typedef void (*func_mindustry_ui_Minimap_addChild_arc_scene_Element)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_ui_Minimap_addChildAt_int_arc_scene_Element 133
typedef void (*func_mindustry_ui_Minimap_addChildAt_int_arc_scene_Element)(jcontext ctx, jobject self, jint param0, jobject param1);
#define VTABLE_mindustry_ui_Minimap_addChildBefore_arc_scene_Element_arc_scene_Element 134
typedef void (*func_mindustry_ui_Minimap_addChildBefore_arc_scene_Element_arc_scene_Element)(jcontext ctx, jobject self, jobject param0, jobject param1);
#define VTABLE_mindustry_ui_Minimap_addChildAfter_arc_scene_Element_arc_scene_Element 135
typedef void (*func_mindustry_ui_Minimap_addChildAfter_arc_scene_Element_arc_scene_Element)(jcontext ctx, jobject self, jobject param0, jobject param1);
#define VTABLE_mindustry_ui_Minimap_removeChild_arc_scene_Element_R_boolean 136
typedef jbool (*func_mindustry_ui_Minimap_removeChild_arc_scene_Element_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_ui_Minimap_removeChild_arc_scene_Element_boolean_R_boolean 137
typedef jbool (*func_mindustry_ui_Minimap_removeChild_arc_scene_Element_boolean_R_boolean)(jcontext ctx, jobject self, jobject param0, jbool param1);
#define VTABLE_mindustry_ui_Minimap_clearChildren 138
typedef void (*func_mindustry_ui_Minimap_clearChildren)(jcontext ctx, jobject self);
#define VTABLE_mindustry_ui_Minimap_find_java_lang_String_R_arc_scene_Element 139
typedef jobject (*func_mindustry_ui_Minimap_find_java_lang_String_R_arc_scene_Element)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_ui_Minimap_findVisible_java_lang_String_R_arc_scene_Element 140
typedef jobject (*func_mindustry_ui_Minimap_findVisible_java_lang_String_R_arc_scene_Element)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_ui_Minimap_find_arc_func_Boolf_R_arc_scene_Element 141
typedef jobject (*func_mindustry_ui_Minimap_find_arc_func_Boolf_R_arc_scene_Element)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_ui_Minimap_swapActor_int_int_R_boolean 142
typedef jbool (*func_mindustry_ui_Minimap_swapActor_int_int_R_boolean)(jcontext ctx, jobject self, jint param0, jint param1);
#define VTABLE_mindustry_ui_Minimap_swapActor_arc_scene_Element_arc_scene_Element_R_boolean 143
typedef jbool (*func_mindustry_ui_Minimap_swapActor_arc_scene_Element_arc_scene_Element_R_boolean)(jcontext ctx, jobject self, jobject param0, jobject param1);
#define VTABLE_mindustry_ui_Minimap_getChildren_R_arc_struct_SnapshotSeq 144
typedef jobject (*func_mindustry_ui_Minimap_getChildren_R_arc_struct_SnapshotSeq)(jcontext ctx, jobject self);
#define VTABLE_mindustry_ui_Minimap_hasChildren_R_boolean 145
typedef jbool (*func_mindustry_ui_Minimap_hasChildren_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_mindustry_ui_Minimap_isTransform_R_boolean 146
typedef jbool (*func_mindustry_ui_Minimap_isTransform_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_mindustry_ui_Minimap_setTransform_boolean 147
typedef void (*func_mindustry_ui_Minimap_setTransform_boolean)(jcontext ctx, jobject self, jbool param0);
#define VTABLE_mindustry_ui_Minimap_localToDescendantCoordinates_arc_scene_Element_arc_math_geom_Vec2_R_arc_math_geom_Vec2 148
typedef jobject (*func_mindustry_ui_Minimap_localToDescendantCoordinates_arc_scene_Element_arc_math_geom_Vec2_R_arc_math_geom_Vec2)(jcontext ctx, jobject self, jobject param0, jobject param1);
#define VTABLE_mindustry_ui_Minimap_toString_java_lang_StringBuilder_int 149
typedef void (*func_mindustry_ui_Minimap_toString_java_lang_StringBuilder_int)(jcontext ctx, jobject self, jobject param0, jint param1);
#define VTABLE_mindustry_ui_Minimap_setLayoutEnabled_arc_scene_Group_boolean 150
typedef void (*func_mindustry_ui_Minimap_setLayoutEnabled_arc_scene_Group_boolean)(jcontext ctx, jobject self, jobject param0, jbool param1);
#define VTABLE_mindustry_ui_Minimap_obtainCell_R_arc_scene_ui_layout_Cell 151
typedef jobject (*func_mindustry_ui_Minimap_obtainCell_R_arc_scene_ui_layout_Cell)(jcontext ctx, jobject self);
#define VTABLE_mindustry_ui_Minimap_fill_R_arc_scene_ui_layout_Table 152
typedef jobject (*func_mindustry_ui_Minimap_fill_R_arc_scene_ui_layout_Table)(jcontext ctx, jobject self);
#define VTABLE_mindustry_ui_Minimap_drawBackground_float_float 153
typedef void (*func_mindustry_ui_Minimap_drawBackground_float_float)(jcontext ctx, jobject self, jfloat param0, jfloat param1);
#define VTABLE_mindustry_ui_Minimap_background_arc_scene_style_Drawable_R_arc_scene_ui_layout_Table 154
typedef jobject (*func_mindustry_ui_Minimap_background_arc_scene_style_Drawable_R_arc_scene_ui_layout_Table)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_ui_Minimap_getBackground_R_arc_scene_style_Drawable 155
typedef jobject (*func_mindustry_ui_Minimap_getBackground_R_arc_scene_style_Drawable)(jcontext ctx, jobject self);
#define VTABLE_mindustry_ui_Minimap_setBackground_arc_scene_style_Drawable 156
typedef void (*func_mindustry_ui_Minimap_setBackground_arc_scene_style_Drawable)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_ui_Minimap_getClip_R_boolean 157
typedef jbool (*func_mindustry_ui_Minimap_getClip_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_mindustry_ui_Minimap_setClip_boolean 158
typedef void (*func_mindustry_ui_Minimap_setClip_boolean)(jcontext ctx, jobject self, jbool param0);
#define VTABLE_mindustry_ui_Minimap_add_arc_scene_Element_R_arc_scene_ui_layout_Cell 159
typedef jobject (*func_mindustry_ui_Minimap_add_arc_scene_Element_R_arc_scene_ui_layout_Cell)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_ui_Minimap_add_Array1_arc_scene_Element 160
typedef void (*func_mindustry_ui_Minimap_add_Array1_arc_scene_Element)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_ui_Minimap_collapser_arc_func_Cons_arc_func_Boolp_R_arc_scene_ui_layout_Cell 161
typedef jobject (*func_mindustry_ui_Minimap_collapser_arc_func_Cons_arc_func_Boolp_R_arc_scene_ui_layout_Cell)(jcontext ctx, jobject self, jobject param0, jobject param1);
#define VTABLE_mindustry_ui_Minimap_collapser_arc_scene_ui_layout_Table_arc_func_Boolp_R_arc_scene_ui_layout_Cell 162
typedef jobject (*func_mindustry_ui_Minimap_collapser_arc_scene_ui_layout_Table_arc_func_Boolp_R_arc_scene_ui_layout_Cell)(jcontext ctx, jobject self, jobject param0, jobject param1);
#define VTABLE_mindustry_ui_Minimap_collapser_arc_func_Cons_boolean_arc_func_Boolp_R_arc_scene_ui_layout_Cell 163
typedef jobject (*func_mindustry_ui_Minimap_collapser_arc_func_Cons_boolean_arc_func_Boolp_R_arc_scene_ui_layout_Cell)(jcontext ctx, jobject self, jobject param0, jbool param1, jobject param2);
#define VTABLE_mindustry_ui_Minimap_collapser_arc_scene_ui_layout_Table_boolean_arc_func_Boolp_R_arc_scene_ui_layout_Cell 164
typedef jobject (*func_mindustry_ui_Minimap_collapser_arc_scene_ui_layout_Table_boolean_arc_func_Boolp_R_arc_scene_ui_layout_Cell)(jcontext ctx, jobject self, jobject param0, jbool param1, jobject param2);
#define VTABLE_mindustry_ui_Minimap_table_R_arc_scene_ui_layout_Cell 165
typedef jobject (*func_mindustry_ui_Minimap_table_R_arc_scene_ui_layout_Cell)(jcontext ctx, jobject self);
#define VTABLE_mindustry_ui_Minimap_table_arc_scene_style_Drawable_R_arc_scene_ui_layout_Cell 166
typedef jobject (*func_mindustry_ui_Minimap_table_arc_scene_style_Drawable_R_arc_scene_ui_layout_Cell)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_ui_Minimap_table_arc_func_Cons_R_arc_scene_ui_layout_Cell 167
typedef jobject (*func_mindustry_ui_Minimap_table_arc_func_Cons_R_arc_scene_ui_layout_Cell)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_ui_Minimap_wrapTable_arc_func_Cons_R_arc_scene_ui_layout_Cell 168
typedef jobject (*func_mindustry_ui_Minimap_wrapTable_arc_func_Cons_R_arc_scene_ui_layout_Cell)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_ui_Minimap_table_arc_scene_style_Drawable_arc_func_Cons_R_arc_scene_ui_layout_Cell 169
typedef jobject (*func_mindustry_ui_Minimap_table_arc_scene_style_Drawable_arc_func_Cons_R_arc_scene_ui_layout_Cell)(jcontext ctx, jobject self, jobject param0, jobject param1);
#define VTABLE_mindustry_ui_Minimap_table_arc_scene_style_Drawable_int_arc_func_Cons_R_arc_scene_ui_layout_Cell 170
typedef jobject (*func_mindustry_ui_Minimap_table_arc_scene_style_Drawable_int_arc_func_Cons_R_arc_scene_ui_layout_Cell)(jcontext ctx, jobject self, jobject param0, jint param1, jobject param2);
#define VTABLE_mindustry_ui_Minimap_label_arc_func_Prov_R_arc_scene_ui_layout_Cell 171
typedef jobject (*func_mindustry_ui_Minimap_label_arc_func_Prov_R_arc_scene_ui_layout_Cell)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_ui_Minimap_labelWrap_arc_func_Prov_R_arc_scene_ui_layout_Cell 172
typedef jobject (*func_mindustry_ui_Minimap_labelWrap_arc_func_Prov_R_arc_scene_ui_layout_Cell)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_ui_Minimap_labelWrap_java_lang_String_R_arc_scene_ui_layout_Cell 173
typedef jobject (*func_mindustry_ui_Minimap_labelWrap_java_lang_String_R_arc_scene_ui_layout_Cell)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_ui_Minimap_pane_arc_func_Cons_R_arc_scene_ui_layout_Cell 174
typedef jobject (*func_mindustry_ui_Minimap_pane_arc_func_Cons_R_arc_scene_ui_layout_Cell)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_ui_Minimap_pane_arc_scene_ui_ScrollPane$ScrollPaneStyle_arc_func_Cons_R_arc_scene_ui_layout_Cell 175
typedef jobject (*func_mindustry_ui_Minimap_pane_arc_scene_ui_ScrollPane$ScrollPaneStyle_arc_func_Cons_R_arc_scene_ui_layout_Cell)(jcontext ctx, jobject self, jobject param0, jobject param1);
#define VTABLE_mindustry_ui_Minimap_pane_arc_scene_ui_ScrollPane$ScrollPaneStyle_arc_scene_Element_R_arc_scene_ui_layout_Cell 176
typedef jobject (*func_mindustry_ui_Minimap_pane_arc_scene_ui_ScrollPane$ScrollPaneStyle_arc_scene_Element_R_arc_scene_ui_layout_Cell)(jcontext ctx, jobject self, jobject param0, jobject param1);
#define VTABLE_mindustry_ui_Minimap_pane_arc_scene_Element_R_arc_scene_ui_layout_Cell 177
typedef jobject (*func_mindustry_ui_Minimap_pane_arc_scene_Element_R_arc_scene_ui_layout_Cell)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_ui_Minimap_add_java_lang_CharSequence_R_arc_scene_ui_layout_Cell 178
typedef jobject (*func_mindustry_ui_Minimap_add_java_lang_CharSequence_R_arc_scene_ui_layout_Cell)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_ui_Minimap_add_java_lang_CharSequence_float_R_arc_scene_ui_layout_Cell 179
typedef jobject (*func_mindustry_ui_Minimap_add_java_lang_CharSequence_float_R_arc_scene_ui_layout_Cell)(jcontext ctx, jobject self, jobject param0, jfloat param1);
#define VTABLE_mindustry_ui_Minimap_add_java_lang_CharSequence_arc_scene_ui_Label$LabelStyle_float_R_arc_scene_ui_layout_Cell 180
typedef jobject (*func_mindustry_ui_Minimap_add_java_lang_CharSequence_arc_scene_ui_Label$LabelStyle_float_R_arc_scene_ui_layout_Cell)(jcontext ctx, jobject self, jobject param0, jobject param1, jfloat param2);
#define VTABLE_mindustry_ui_Minimap_add_java_lang_CharSequence_arc_graphics_Color_float_R_arc_scene_ui_layout_Cell 181
typedef jobject (*func_mindustry_ui_Minimap_add_java_lang_CharSequence_arc_graphics_Color_float_R_arc_scene_ui_layout_Cell)(jcontext ctx, jobject self, jobject param0, jobject param1, jfloat param2);
#define VTABLE_mindustry_ui_Minimap_add_java_lang_CharSequence_arc_scene_ui_Label$LabelStyle_R_arc_scene_ui_layout_Cell 182
typedef jobject (*func_mindustry_ui_Minimap_add_java_lang_CharSequence_arc_scene_ui_Label$LabelStyle_R_arc_scene_ui_layout_Cell)(jcontext ctx, jobject self, jobject param0, jobject param1);
#define VTABLE_mindustry_ui_Minimap_add_java_lang_CharSequence_arc_graphics_Color_R_arc_scene_ui_layout_Cell 183
typedef jobject (*func_mindustry_ui_Minimap_add_java_lang_CharSequence_arc_graphics_Color_R_arc_scene_ui_layout_Cell)(jcontext ctx, jobject self, jobject param0, jobject param1);
#define VTABLE_mindustry_ui_Minimap_add_R_arc_scene_ui_layout_Cell 184
typedef jobject (*func_mindustry_ui_Minimap_add_R_arc_scene_ui_layout_Cell)(jcontext ctx, jobject self);
#define VTABLE_mindustry_ui_Minimap_stack_Array1_arc_scene_Element_R_arc_scene_ui_layout_Cell 185
typedef jobject (*func_mindustry_ui_Minimap_stack_Array1_arc_scene_Element_R_arc_scene_ui_layout_Cell)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_ui_Minimap_spacer_arc_func_Floatp_arc_func_Floatp_R_arc_scene_ui_layout_Cell 186
typedef jobject (*func_mindustry_ui_Minimap_spacer_arc_func_Floatp_arc_func_Floatp_R_arc_scene_ui_layout_Cell)(jcontext ctx, jobject self, jobject param0, jobject param1);
#define VTABLE_mindustry_ui_Minimap_spacerX_arc_func_Floatp_R_arc_scene_ui_layout_Cell 187
typedef jobject (*func_mindustry_ui_Minimap_spacerX_arc_func_Floatp_R_arc_scene_ui_layout_Cell)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_ui_Minimap_spacerY_arc_func_Floatp_R_arc_scene_ui_layout_Cell 188
typedef jobject (*func_mindustry_ui_Minimap_spacerY_arc_func_Floatp_R_arc_scene_ui_layout_Cell)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_ui_Minimap_image_arc_func_Prov_R_arc_scene_ui_layout_Cell 189
typedef jobject (*func_mindustry_ui_Minimap_image_arc_func_Prov_R_arc_scene_ui_layout_Cell)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_ui_Minimap_imageDraw_arc_func_Prov_R_arc_scene_ui_layout_Cell 190
typedef jobject (*func_mindustry_ui_Minimap_imageDraw_arc_func_Prov_R_arc_scene_ui_layout_Cell)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_ui_Minimap_image_R_arc_scene_ui_layout_Cell 191
typedef jobject (*func_mindustry_ui_Minimap_image_R_arc_scene_ui_layout_Cell)(jcontext ctx, jobject self);
#define VTABLE_mindustry_ui_Minimap_image_arc_scene_style_Drawable_R_arc_scene_ui_layout_Cell 192
typedef jobject (*func_mindustry_ui_Minimap_image_arc_scene_style_Drawable_R_arc_scene_ui_layout_Cell)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_ui_Minimap_image_arc_scene_style_Drawable_arc_graphics_Color_R_arc_scene_ui_layout_Cell 193
typedef jobject (*func_mindustry_ui_Minimap_image_arc_scene_style_Drawable_arc_graphics_Color_R_arc_scene_ui_layout_Cell)(jcontext ctx, jobject self, jobject param0, jobject param1);
#define VTABLE_mindustry_ui_Minimap_image_arc_graphics_g2d_TextureRegion_R_arc_scene_ui_layout_Cell 194
typedef jobject (*func_mindustry_ui_Minimap_image_arc_graphics_g2d_TextureRegion_R_arc_scene_ui_layout_Cell)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_ui_Minimap_check_java_lang_String_arc_func_Boolc_R_arc_scene_ui_layout_Cell 195
typedef jobject (*func_mindustry_ui_Minimap_check_java_lang_String_arc_func_Boolc_R_arc_scene_ui_layout_Cell)(jcontext ctx, jobject self, jobject param0, jobject param1);
#define VTABLE_mindustry_ui_Minimap_check_java_lang_String_boolean_arc_func_Boolc_R_arc_scene_ui_layout_Cell 196
typedef jobject (*func_mindustry_ui_Minimap_check_java_lang_String_boolean_arc_func_Boolc_R_arc_scene_ui_layout_Cell)(jcontext ctx, jobject self, jobject param0, jbool param1, jobject param2);
#define VTABLE_mindustry_ui_Minimap_check_java_lang_String_float_boolean_arc_func_Boolc_R_arc_scene_ui_layout_Cell 197
typedef jobject (*func_mindustry_ui_Minimap_check_java_lang_String_float_boolean_arc_func_Boolc_R_arc_scene_ui_layout_Cell)(jcontext ctx, jobject self, jobject param0, jfloat param1, jbool param2, jobject param3);
#define VTABLE_mindustry_ui_Minimap_button_arc_func_Cons_java_lang_Runnable_R_arc_scene_ui_layout_Cell 198
typedef jobject (*func_mindustry_ui_Minimap_button_arc_func_Cons_java_lang_Runnable_R_arc_scene_ui_layout_Cell)(jcontext ctx, jobject self, jobject param0, jobject param1);
#define VTABLE_mindustry_ui_Minimap_button_arc_func_Cons_arc_scene_ui_Button$ButtonStyle_java_lang_Runnable_R_arc_scene_ui_layout_Cell 199
typedef jobject (*func_mindustry_ui_Minimap_button_arc_func_Cons_arc_scene_ui_Button$ButtonStyle_java_lang_Runnable_R_arc_scene_ui_layout_Cell)(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2);
#define VTABLE_mindustry_ui_Minimap_button_java_lang_String_java_lang_Runnable_R_arc_scene_ui_layout_Cell 200
typedef jobject (*func_mindustry_ui_Minimap_button_java_lang_String_java_lang_Runnable_R_arc_scene_ui_layout_Cell)(jcontext ctx, jobject self, jobject param0, jobject param1);
#define VTABLE_mindustry_ui_Minimap_button_java_lang_String_arc_scene_ui_TextButton$TextButtonStyle_java_lang_Runnable_R_arc_scene_ui_layout_Cell 201
typedef jobject (*func_mindustry_ui_Minimap_button_java_lang_String_arc_scene_ui_TextButton$TextButtonStyle_java_lang_Runnable_R_arc_scene_ui_layout_Cell)(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2);
#define VTABLE_mindustry_ui_Minimap_button_arc_scene_style_Drawable_java_lang_Runnable_R_arc_scene_ui_layout_Cell 202
typedef jobject (*func_mindustry_ui_Minimap_button_arc_scene_style_Drawable_java_lang_Runnable_R_arc_scene_ui_layout_Cell)(jcontext ctx, jobject self, jobject param0, jobject param1);
#define VTABLE_mindustry_ui_Minimap_button_arc_scene_style_Drawable_float_java_lang_Runnable_R_arc_scene_ui_layout_Cell 203
typedef jobject (*func_mindustry_ui_Minimap_button_arc_scene_style_Drawable_float_java_lang_Runnable_R_arc_scene_ui_layout_Cell)(jcontext ctx, jobject self, jobject param0, jfloat param1, jobject param2);
#define VTABLE_mindustry_ui_Minimap_button_arc_scene_style_Drawable_arc_scene_ui_ImageButton$ImageButtonStyle_float_java_lang_Runnable_R_arc_scene_ui_layout_Cell 204
typedef jobject (*func_mindustry_ui_Minimap_button_arc_scene_style_Drawable_arc_scene_ui_ImageButton$ImageButtonStyle_float_java_lang_Runnable_R_arc_scene_ui_layout_Cell)(jcontext ctx, jobject self, jobject param0, jobject param1, jfloat param2, jobject param3);
#define VTABLE_mindustry_ui_Minimap_button_arc_scene_style_Drawable_arc_scene_ui_ImageButton$ImageButtonStyle_java_lang_Runnable_R_arc_scene_ui_layout_Cell 205
typedef jobject (*func_mindustry_ui_Minimap_button_arc_scene_style_Drawable_arc_scene_ui_ImageButton$ImageButtonStyle_java_lang_Runnable_R_arc_scene_ui_layout_Cell)(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2);
#define VTABLE_mindustry_ui_Minimap_field_java_lang_String_arc_func_Cons_R_arc_scene_ui_layout_Cell 206
typedef jobject (*func_mindustry_ui_Minimap_field_java_lang_String_arc_func_Cons_R_arc_scene_ui_layout_Cell)(jcontext ctx, jobject self, jobject param0, jobject param1);
#define VTABLE_mindustry_ui_Minimap_area_java_lang_String_arc_func_Cons_R_arc_scene_ui_layout_Cell 207
typedef jobject (*func_mindustry_ui_Minimap_area_java_lang_String_arc_func_Cons_R_arc_scene_ui_layout_Cell)(jcontext ctx, jobject self, jobject param0, jobject param1);
#define VTABLE_mindustry_ui_Minimap_area_java_lang_String_arc_scene_ui_TextField$TextFieldStyle_arc_func_Cons_R_arc_scene_ui_layout_Cell 208
typedef jobject (*func_mindustry_ui_Minimap_area_java_lang_String_arc_scene_ui_TextField$TextFieldStyle_arc_func_Cons_R_arc_scene_ui_layout_Cell)(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2);
#define VTABLE_mindustry_ui_Minimap_field_java_lang_String_arc_scene_ui_TextField$TextFieldFilter_arc_func_Cons_R_arc_scene_ui_layout_Cell 209
typedef jobject (*func_mindustry_ui_Minimap_field_java_lang_String_arc_scene_ui_TextField$TextFieldFilter_arc_func_Cons_R_arc_scene_ui_layout_Cell)(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2);
#define VTABLE_mindustry_ui_Minimap_field_java_lang_String_arc_scene_ui_TextField$TextFieldStyle_arc_func_Cons_R_arc_scene_ui_layout_Cell 210
typedef jobject (*func_mindustry_ui_Minimap_field_java_lang_String_arc_scene_ui_TextField$TextFieldStyle_arc_func_Cons_R_arc_scene_ui_layout_Cell)(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2);
#define VTABLE_mindustry_ui_Minimap_rect_arc_scene_ui_layout_Table$DrawRect_R_arc_scene_ui_layout_Cell 211
typedef jobject (*func_mindustry_ui_Minimap_rect_arc_scene_ui_layout_Table$DrawRect_R_arc_scene_ui_layout_Cell)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_ui_Minimap_buttonRow_java_lang_String_arc_scene_style_Drawable_java_lang_Runnable_R_arc_scene_ui_layout_Cell 212
typedef jobject (*func_mindustry_ui_Minimap_buttonRow_java_lang_String_arc_scene_style_Drawable_java_lang_Runnable_R_arc_scene_ui_layout_Cell)(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2);
#define VTABLE_mindustry_ui_Minimap_button_java_lang_String_arc_scene_style_Drawable_java_lang_Runnable_R_arc_scene_ui_layout_Cell 213
typedef jobject (*func_mindustry_ui_Minimap_button_java_lang_String_arc_scene_style_Drawable_java_lang_Runnable_R_arc_scene_ui_layout_Cell)(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2);
#define VTABLE_mindustry_ui_Minimap_button_java_lang_String_arc_scene_style_Drawable_float_java_lang_Runnable_R_arc_scene_ui_layout_Cell 214
typedef jobject (*func_mindustry_ui_Minimap_button_java_lang_String_arc_scene_style_Drawable_float_java_lang_Runnable_R_arc_scene_ui_layout_Cell)(jcontext ctx, jobject self, jobject param0, jobject param1, jfloat param2, jobject param3);
#define VTABLE_mindustry_ui_Minimap_button_java_lang_String_arc_scene_style_Drawable_arc_scene_ui_TextButton$TextButtonStyle_float_java_lang_Runnable_R_arc_scene_ui_layout_Cell 215
typedef jobject (*func_mindustry_ui_Minimap_button_java_lang_String_arc_scene_style_Drawable_arc_scene_ui_TextButton$TextButtonStyle_float_java_lang_Runnable_R_arc_scene_ui_layout_Cell)(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2, jfloat param3, jobject param4);
#define VTABLE_mindustry_ui_Minimap_button_java_lang_String_arc_scene_style_Drawable_arc_scene_ui_TextButton$TextButtonStyle_java_lang_Runnable_R_arc_scene_ui_layout_Cell 216
typedef jobject (*func_mindustry_ui_Minimap_button_java_lang_String_arc_scene_style_Drawable_arc_scene_ui_TextButton$TextButtonStyle_java_lang_Runnable_R_arc_scene_ui_layout_Cell)(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2, jobject param3);
#define VTABLE_mindustry_ui_Minimap_buttonCenter_java_lang_String_arc_scene_style_Drawable_float_java_lang_Runnable_R_arc_scene_ui_layout_Cell 217
typedef jobject (*func_mindustry_ui_Minimap_buttonCenter_java_lang_String_arc_scene_style_Drawable_float_java_lang_Runnable_R_arc_scene_ui_layout_Cell)(jcontext ctx, jobject self, jobject param0, jobject param1, jfloat param2, jobject param3);
#define VTABLE_mindustry_ui_Minimap_buttonCenter_java_lang_String_arc_scene_style_Drawable_java_lang_Runnable_R_arc_scene_ui_layout_Cell 218
typedef jobject (*func_mindustry_ui_Minimap_buttonCenter_java_lang_String_arc_scene_style_Drawable_java_lang_Runnable_R_arc_scene_ui_layout_Cell)(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2);
#define VTABLE_mindustry_ui_Minimap_buttonCenter_java_lang_String_arc_scene_style_Drawable_arc_scene_ui_TextButton$TextButtonStyle_float_java_lang_Runnable_R_arc_scene_ui_layout_Cell 219
typedef jobject (*func_mindustry_ui_Minimap_buttonCenter_java_lang_String_arc_scene_style_Drawable_arc_scene_ui_TextButton$TextButtonStyle_float_java_lang_Runnable_R_arc_scene_ui_layout_Cell)(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2, jfloat param3, jobject param4);
#define VTABLE_mindustry_ui_Minimap_slider_float_float_float_arc_func_Floatc_R_arc_scene_ui_layout_Cell 220
typedef jobject (*func_mindustry_ui_Minimap_slider_float_float_float_arc_func_Floatc_R_arc_scene_ui_layout_Cell)(jcontext ctx, jobject self, jfloat param0, jfloat param1, jfloat param2, jobject param3);
#define VTABLE_mindustry_ui_Minimap_slider_float_float_float_float_arc_func_Floatc_R_arc_scene_ui_layout_Cell 221
typedef jobject (*func_mindustry_ui_Minimap_slider_float_float_float_float_arc_func_Floatc_R_arc_scene_ui_layout_Cell)(jcontext ctx, jobject self, jfloat param0, jfloat param1, jfloat param2, jfloat param3, jobject param4);
#define VTABLE_mindustry_ui_Minimap_slider_float_float_float_float_boolean_arc_func_Floatc_R_arc_scene_ui_layout_Cell 222
typedef jobject (*func_mindustry_ui_Minimap_slider_float_float_float_float_boolean_arc_func_Floatc_R_arc_scene_ui_layout_Cell)(jcontext ctx, jobject self, jfloat param0, jfloat param1, jfloat param2, jfloat param3, jbool param4, jobject param5);
#define VTABLE_mindustry_ui_Minimap_reset 223
typedef void (*func_mindustry_ui_Minimap_reset)(jcontext ctx, jobject self);
#define VTABLE_mindustry_ui_Minimap_row_R_arc_scene_ui_layout_Table 224
typedef jobject (*func_mindustry_ui_Minimap_row_R_arc_scene_ui_layout_Table)(jcontext ctx, jobject self);
#define VTABLE_mindustry_ui_Minimap_endRow 225
typedef void (*func_mindustry_ui_Minimap_endRow)(jcontext ctx, jobject self);
#define VTABLE_mindustry_ui_Minimap_getCell_arc_scene_Element_R_arc_scene_ui_layout_Cell 226
typedef jobject (*func_mindustry_ui_Minimap_getCell_arc_scene_Element_R_arc_scene_ui_layout_Cell)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_ui_Minimap_getCells_R_arc_struct_Seq 227
typedef jobject (*func_mindustry_ui_Minimap_getCells_R_arc_struct_Seq)(jcontext ctx, jobject self);
#define VTABLE_mindustry_ui_Minimap_defaults_R_arc_scene_ui_layout_Cell 228
typedef jobject (*func_mindustry_ui_Minimap_defaults_R_arc_scene_ui_layout_Cell)(jcontext ctx, jobject self);
#define VTABLE_mindustry_ui_Minimap_margin_float_R_arc_scene_ui_layout_Table 229
typedef jobject (*func_mindustry_ui_Minimap_margin_float_R_arc_scene_ui_layout_Table)(jcontext ctx, jobject self, jfloat param0);
#define VTABLE_mindustry_ui_Minimap_margin_float_float_float_float_R_arc_scene_ui_layout_Table 230
typedef jobject (*func_mindustry_ui_Minimap_margin_float_float_float_float_R_arc_scene_ui_layout_Table)(jcontext ctx, jobject self, jfloat param0, jfloat param1, jfloat param2, jfloat param3);
#define VTABLE_mindustry_ui_Minimap_marginTop_float_R_arc_scene_ui_layout_Table 231
typedef jobject (*func_mindustry_ui_Minimap_marginTop_float_R_arc_scene_ui_layout_Table)(jcontext ctx, jobject self, jfloat param0);
#define VTABLE_mindustry_ui_Minimap_marginLeft_float_R_arc_scene_ui_layout_Table 232
typedef jobject (*func_mindustry_ui_Minimap_marginLeft_float_R_arc_scene_ui_layout_Table)(jcontext ctx, jobject self, jfloat param0);
#define VTABLE_mindustry_ui_Minimap_marginBottom_float_R_arc_scene_ui_layout_Table 233
typedef jobject (*func_mindustry_ui_Minimap_marginBottom_float_R_arc_scene_ui_layout_Table)(jcontext ctx, jobject self, jfloat param0);
#define VTABLE_mindustry_ui_Minimap_marginRight_float_R_arc_scene_ui_layout_Table 234
typedef jobject (*func_mindustry_ui_Minimap_marginRight_float_R_arc_scene_ui_layout_Table)(jcontext ctx, jobject self, jfloat param0);
#define VTABLE_mindustry_ui_Minimap_align_int_R_arc_scene_ui_layout_Table 235
typedef jobject (*func_mindustry_ui_Minimap_align_int_R_arc_scene_ui_layout_Table)(jcontext ctx, jobject self, jint param0);
#define VTABLE_mindustry_ui_Minimap_center_R_arc_scene_ui_layout_Table 236
typedef jobject (*func_mindustry_ui_Minimap_center_R_arc_scene_ui_layout_Table)(jcontext ctx, jobject self);
#define VTABLE_mindustry_ui_Minimap_top_R_arc_scene_ui_layout_Table 237
typedef jobject (*func_mindustry_ui_Minimap_top_R_arc_scene_ui_layout_Table)(jcontext ctx, jobject self);
#define VTABLE_mindustry_ui_Minimap_left_R_arc_scene_ui_layout_Table 238
typedef jobject (*func_mindustry_ui_Minimap_left_R_arc_scene_ui_layout_Table)(jcontext ctx, jobject self);
#define VTABLE_mindustry_ui_Minimap_bottom_R_arc_scene_ui_layout_Table 239
typedef jobject (*func_mindustry_ui_Minimap_bottom_R_arc_scene_ui_layout_Table)(jcontext ctx, jobject self);
#define VTABLE_mindustry_ui_Minimap_right_R_arc_scene_ui_layout_Table 240
typedef jobject (*func_mindustry_ui_Minimap_right_R_arc_scene_ui_layout_Table)(jcontext ctx, jobject self);
#define VTABLE_mindustry_ui_Minimap_getMarginTop_R_float 241
typedef jfloat (*func_mindustry_ui_Minimap_getMarginTop_R_float)(jcontext ctx, jobject self);
#define VTABLE_mindustry_ui_Minimap_getMarginLeft_R_float 242
typedef jfloat (*func_mindustry_ui_Minimap_getMarginLeft_R_float)(jcontext ctx, jobject self);
#define VTABLE_mindustry_ui_Minimap_getMarginBottom_R_float 243
typedef jfloat (*func_mindustry_ui_Minimap_getMarginBottom_R_float)(jcontext ctx, jobject self);
#define VTABLE_mindustry_ui_Minimap_getMarginRight_R_float 244
typedef jfloat (*func_mindustry_ui_Minimap_getMarginRight_R_float)(jcontext ctx, jobject self);
#define VTABLE_mindustry_ui_Minimap_getAlign_R_int 245
typedef jint (*func_mindustry_ui_Minimap_getAlign_R_int)(jcontext ctx, jobject self);
#define VTABLE_mindustry_ui_Minimap_getRow_float_R_int 246
typedef jint (*func_mindustry_ui_Minimap_getRow_float_R_int)(jcontext ctx, jobject self, jfloat param0);
#define VTABLE_mindustry_ui_Minimap_setRound_boolean 247
typedef void (*func_mindustry_ui_Minimap_setRound_boolean)(jcontext ctx, jobject self, jbool param0);
#define VTABLE_mindustry_ui_Minimap_getRows_R_int 248
typedef jint (*func_mindustry_ui_Minimap_getRows_R_int)(jcontext ctx, jobject self);
#define VTABLE_mindustry_ui_Minimap_getColumns_R_int 249
typedef jint (*func_mindustry_ui_Minimap_getColumns_R_int)(jcontext ctx, jobject self);
#define VTABLE_mindustry_ui_Minimap_getRowHeight_int_R_float 250
typedef jfloat (*func_mindustry_ui_Minimap_getRowHeight_int_R_float)(jcontext ctx, jobject self, jint param0);
#define VTABLE_mindustry_ui_Minimap_getColumnWidth_int_R_float 251
typedef jfloat (*func_mindustry_ui_Minimap_getColumnWidth_int_R_float)(jcontext ctx, jobject self, jint param0);
#define VTABLE_mindustry_ui_Minimap_ensureSize_Array1_float_int_R_Array1_float 252
typedef jobject (*func_mindustry_ui_Minimap_ensureSize_Array1_float_int_R_Array1_float)(jcontext ctx, jobject self, jobject param0, jint param1);
#define VTABLE_mindustry_ui_Minimap_computeSize 253
typedef void (*func_mindustry_ui_Minimap_computeSize)(jcontext ctx, jobject self);
#define VTABLE_mindustry_ui_Minimap_layout_float_float_float_float 254
typedef void (*func_mindustry_ui_Minimap_layout_float_float_float_float)(jcontext ctx, jobject self, jfloat param0, jfloat param1, jfloat param2, jfloat param3);
#define VTABLE_mindustry_ui_Minimap_lambda$new$0 255
typedef void (*func_mindustry_ui_Minimap_lambda$new$0)(jcontext ctx, jobject self);

void mark_mindustry_ui_Minimap(jobject object, jint mark, jint depth);
void clinit_mindustry_ui_Minimap(jcontext ctx);
void init_mindustry_ui_Minimap(jcontext ctx, jobject self);
jfloat SM_mindustry_ui_Minimap_access$200_mindustry_ui_Minimap_R_float(jcontext ctx, jobject param0);
void M_mindustry_ui_Minimap_lambda$new$0(jcontext ctx, jobject self);

#ifdef __cplusplus
}
#endif

#endif
