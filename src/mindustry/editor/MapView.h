#ifndef HEADER_mindustry_editor_MapView
#define HEADER_mindustry_editor_MapView

#include "Clearwing.h"
#include "arc/scene/Element.h"
#include "arc/input/GestureDetector_GestureListener.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct mindustry_editor_MapView {
	arc_scene_Element parent;
	jref F_tool;
	jfloat F_offsetx;
	jfloat F_offsety;
	jfloat F_zoom;
	jbool F_grid;
	jref F_image;
	jref F_vec;
	jref F_rect;
	jref F_brushPolygons;
	jbool F_drawing;
	jint F_lastx;
	jint F_lasty;
	jint F_startx;
	jint F_starty;
	jfloat F_mousex;
	jfloat F_mousey;
	jref F_lastTool;
} mindustry_editor_MapView;

extern Class class_mindustry_editor_MapView;


#define VTABLE_mindustry_editor_MapView_hashCode_R_int 0
typedef jint (*func_mindustry_editor_MapView_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_mindustry_editor_MapView_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_mindustry_editor_MapView_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_editor_MapView_clone_R_java_lang_Object 2
typedef jobject (*func_mindustry_editor_MapView_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_mindustry_editor_MapView_getClass_R_java_lang_Class 3
typedef jobject (*func_mindustry_editor_MapView_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_mindustry_editor_MapView_toString_R_java_lang_String 4
typedef jobject (*func_mindustry_editor_MapView_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_mindustry_editor_MapView_finalize 5
typedef void (*func_mindustry_editor_MapView_finalize)(jcontext ctx, jobject self);
#define VTABLE_mindustry_editor_MapView_notify 6
typedef void (*func_mindustry_editor_MapView_notify)(jcontext ctx, jobject self);
#define VTABLE_mindustry_editor_MapView_notifyAll 7
typedef void (*func_mindustry_editor_MapView_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_mindustry_editor_MapView_wait 8
typedef void (*func_mindustry_editor_MapView_wait)(jcontext ctx, jobject self);
#define VTABLE_mindustry_editor_MapView_wait_long 9
typedef void (*func_mindustry_editor_MapView_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_mindustry_editor_MapView_wait_long_int 10
typedef void (*func_mindustry_editor_MapView_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);
#define VTABLE_mindustry_editor_MapView_draw 11
typedef void (*func_mindustry_editor_MapView_draw)(jcontext ctx, jobject self);
#define VTABLE_mindustry_editor_MapView_act_float 12
typedef void (*func_mindustry_editor_MapView_act_float)(jcontext ctx, jobject self, jfloat param0);
#define VTABLE_mindustry_editor_MapView_updateVisibility 13
typedef void (*func_mindustry_editor_MapView_updateVisibility)(jcontext ctx, jobject self);
#define VTABLE_mindustry_editor_MapView_hasMouse_R_boolean 14
typedef jbool (*func_mindustry_editor_MapView_hasMouse_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_mindustry_editor_MapView_hasKeyboard_R_boolean 15
typedef jbool (*func_mindustry_editor_MapView_hasKeyboard_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_mindustry_editor_MapView_hasScroll_R_boolean 16
typedef jbool (*func_mindustry_editor_MapView_hasScroll_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_mindustry_editor_MapView_requestKeyboard 17
typedef void (*func_mindustry_editor_MapView_requestKeyboard)(jcontext ctx, jobject self);
#define VTABLE_mindustry_editor_MapView_requestScroll 18
typedef void (*func_mindustry_editor_MapView_requestScroll)(jcontext ctx, jobject self);
#define VTABLE_mindustry_editor_MapView_fire_arc_scene_event_SceneEvent_R_boolean 19
typedef jbool (*func_mindustry_editor_MapView_fire_arc_scene_event_SceneEvent_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_editor_MapView_notify_arc_scene_event_SceneEvent_boolean_R_boolean 20
typedef jbool (*func_mindustry_editor_MapView_notify_arc_scene_event_SceneEvent_boolean_R_boolean)(jcontext ctx, jobject self, jobject param0, jbool param1);
#define VTABLE_mindustry_editor_MapView_hit_float_float_boolean_R_arc_scene_Element 21
typedef jobject (*func_mindustry_editor_MapView_hit_float_float_boolean_R_arc_scene_Element)(jcontext ctx, jobject self, jfloat param0, jfloat param1, jbool param2);
#define VTABLE_mindustry_editor_MapView_remove_R_boolean 22
typedef jbool (*func_mindustry_editor_MapView_remove_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_mindustry_editor_MapView_dragged_arc_func_Floatc2 23
typedef void (*func_mindustry_editor_MapView_dragged_arc_func_Floatc2)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_editor_MapView_scrolled_arc_func_Floatc 24
typedef void (*func_mindustry_editor_MapView_scrolled_arc_func_Floatc)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_editor_MapView_addListener_arc_scene_event_EventListener_R_boolean 25
typedef jbool (*func_mindustry_editor_MapView_addListener_arc_scene_event_EventListener_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_editor_MapView_removeListener_arc_scene_event_EventListener_R_boolean 26
typedef jbool (*func_mindustry_editor_MapView_removeListener_arc_scene_event_EventListener_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_editor_MapView_getListeners_R_arc_struct_Seq 27
typedef jobject (*func_mindustry_editor_MapView_getListeners_R_arc_struct_Seq)(jcontext ctx, jobject self);
#define VTABLE_mindustry_editor_MapView_addCaptureListener_arc_scene_event_EventListener_R_boolean 28
typedef jbool (*func_mindustry_editor_MapView_addCaptureListener_arc_scene_event_EventListener_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_editor_MapView_removeCaptureListener_arc_scene_event_EventListener_R_boolean 29
typedef jbool (*func_mindustry_editor_MapView_removeCaptureListener_arc_scene_event_EventListener_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_editor_MapView_getCaptureListeners_R_arc_struct_Seq 30
typedef jobject (*func_mindustry_editor_MapView_getCaptureListeners_R_arc_struct_Seq)(jcontext ctx, jobject self);
#define VTABLE_mindustry_editor_MapView_addAction_arc_scene_Action 31
typedef void (*func_mindustry_editor_MapView_addAction_arc_scene_Action)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_editor_MapView_actions_Array1_arc_scene_Action 32
typedef void (*func_mindustry_editor_MapView_actions_Array1_arc_scene_Action)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_editor_MapView_removeAction_arc_scene_Action 33
typedef void (*func_mindustry_editor_MapView_removeAction_arc_scene_Action)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_editor_MapView_getActions_R_arc_struct_Seq 34
typedef jobject (*func_mindustry_editor_MapView_getActions_R_arc_struct_Seq)(jcontext ctx, jobject self);
#define VTABLE_mindustry_editor_MapView_hasActions_R_boolean 35
typedef jbool (*func_mindustry_editor_MapView_hasActions_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_mindustry_editor_MapView_clearActions 36
typedef void (*func_mindustry_editor_MapView_clearActions)(jcontext ctx, jobject self);
#define VTABLE_mindustry_editor_MapView_clearListeners 37
typedef void (*func_mindustry_editor_MapView_clearListeners)(jcontext ctx, jobject self);
#define VTABLE_mindustry_editor_MapView_clear 38
typedef void (*func_mindustry_editor_MapView_clear)(jcontext ctx, jobject self);
#define VTABLE_mindustry_editor_MapView_getScene_R_arc_scene_Scene 39
typedef jobject (*func_mindustry_editor_MapView_getScene_R_arc_scene_Scene)(jcontext ctx, jobject self);
#define VTABLE_mindustry_editor_MapView_setScene_arc_scene_Scene 40
typedef void (*func_mindustry_editor_MapView_setScene_arc_scene_Scene)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_editor_MapView_isDescendantOf_arc_func_Boolf_R_boolean 41
typedef jbool (*func_mindustry_editor_MapView_isDescendantOf_arc_func_Boolf_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_editor_MapView_isDescendantOf_arc_scene_Element_R_boolean 42
typedef jbool (*func_mindustry_editor_MapView_isDescendantOf_arc_scene_Element_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_editor_MapView_isAscendantOf_arc_scene_Element_R_boolean 43
typedef jbool (*func_mindustry_editor_MapView_isAscendantOf_arc_scene_Element_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_editor_MapView_hasParent_R_boolean 44
typedef jbool (*func_mindustry_editor_MapView_hasParent_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_mindustry_editor_MapView_isTouchable_R_boolean 45
typedef jbool (*func_mindustry_editor_MapView_isTouchable_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_mindustry_editor_MapView_getX_int_R_float 46
typedef jfloat (*func_mindustry_editor_MapView_getX_int_R_float)(jcontext ctx, jobject self, jint param0);
#define VTABLE_mindustry_editor_MapView_getY_int_R_float 47
typedef jfloat (*func_mindustry_editor_MapView_getY_int_R_float)(jcontext ctx, jobject self, jint param0);
#define VTABLE_mindustry_editor_MapView_setPosition_float_float 48
typedef void (*func_mindustry_editor_MapView_setPosition_float_float)(jcontext ctx, jobject self, jfloat param0, jfloat param1);
#define VTABLE_mindustry_editor_MapView_setPosition_float_float_int 49
typedef void (*func_mindustry_editor_MapView_setPosition_float_float_int)(jcontext ctx, jobject self, jfloat param0, jfloat param1, jint param2);
#define VTABLE_mindustry_editor_MapView_moveBy_float_float 50
typedef void (*func_mindustry_editor_MapView_moveBy_float_float)(jcontext ctx, jobject self, jfloat param0, jfloat param1);
#define VTABLE_mindustry_editor_MapView_getWidth_R_float 51
typedef jfloat (*func_mindustry_editor_MapView_getWidth_R_float)(jcontext ctx, jobject self);
#define VTABLE_mindustry_editor_MapView_setWidth_float 52
typedef void (*func_mindustry_editor_MapView_setWidth_float)(jcontext ctx, jobject self, jfloat param0);
#define VTABLE_mindustry_editor_MapView_getHeight_R_float 53
typedef jfloat (*func_mindustry_editor_MapView_getHeight_R_float)(jcontext ctx, jobject self);
#define VTABLE_mindustry_editor_MapView_setHeight_float 54
typedef void (*func_mindustry_editor_MapView_setHeight_float)(jcontext ctx, jobject self, jfloat param0);
#define VTABLE_mindustry_editor_MapView_getTop_R_float 55
typedef jfloat (*func_mindustry_editor_MapView_getTop_R_float)(jcontext ctx, jobject self);
#define VTABLE_mindustry_editor_MapView_getRight_R_float 56
typedef jfloat (*func_mindustry_editor_MapView_getRight_R_float)(jcontext ctx, jobject self);
#define VTABLE_mindustry_editor_MapView_sizeChanged 57
typedef void (*func_mindustry_editor_MapView_sizeChanged)(jcontext ctx, jobject self);
#define VTABLE_mindustry_editor_MapView_rotationChanged 58
typedef void (*func_mindustry_editor_MapView_rotationChanged)(jcontext ctx, jobject self);
#define VTABLE_mindustry_editor_MapView_setSize_float 59
typedef void (*func_mindustry_editor_MapView_setSize_float)(jcontext ctx, jobject self, jfloat param0);
#define VTABLE_mindustry_editor_MapView_setSize_float_float 60
typedef void (*func_mindustry_editor_MapView_setSize_float_float)(jcontext ctx, jobject self, jfloat param0, jfloat param1);
#define VTABLE_mindustry_editor_MapView_sizeBy_float 61
typedef void (*func_mindustry_editor_MapView_sizeBy_float)(jcontext ctx, jobject self, jfloat param0);
#define VTABLE_mindustry_editor_MapView_sizeBy_float_float 62
typedef void (*func_mindustry_editor_MapView_sizeBy_float_float)(jcontext ctx, jobject self, jfloat param0, jfloat param1);
#define VTABLE_mindustry_editor_MapView_setBounds_float_float_float_float 63
typedef void (*func_mindustry_editor_MapView_setBounds_float_float_float_float)(jcontext ctx, jobject self, jfloat param0, jfloat param1, jfloat param2, jfloat param3);
#define VTABLE_mindustry_editor_MapView_setOrigin_float_float 64
typedef void (*func_mindustry_editor_MapView_setOrigin_float_float)(jcontext ctx, jobject self, jfloat param0, jfloat param1);
#define VTABLE_mindustry_editor_MapView_setOrigin_int 65
typedef void (*func_mindustry_editor_MapView_setOrigin_int)(jcontext ctx, jobject self, jint param0);
#define VTABLE_mindustry_editor_MapView_setScale_float 66
typedef void (*func_mindustry_editor_MapView_setScale_float)(jcontext ctx, jobject self, jfloat param0);
#define VTABLE_mindustry_editor_MapView_setScale_float_float 67
typedef void (*func_mindustry_editor_MapView_setScale_float_float)(jcontext ctx, jobject self, jfloat param0, jfloat param1);
#define VTABLE_mindustry_editor_MapView_scaleBy_float 68
typedef void (*func_mindustry_editor_MapView_scaleBy_float)(jcontext ctx, jobject self, jfloat param0);
#define VTABLE_mindustry_editor_MapView_scaleBy_float_float 69
typedef void (*func_mindustry_editor_MapView_scaleBy_float_float)(jcontext ctx, jobject self, jfloat param0, jfloat param1);
#define VTABLE_mindustry_editor_MapView_getRotation_R_float 70
typedef jfloat (*func_mindustry_editor_MapView_getRotation_R_float)(jcontext ctx, jobject self);
#define VTABLE_mindustry_editor_MapView_setRotation_float 71
typedef void (*func_mindustry_editor_MapView_setRotation_float)(jcontext ctx, jobject self, jfloat param0);
#define VTABLE_mindustry_editor_MapView_setRotationOrigin_float_int 72
typedef void (*func_mindustry_editor_MapView_setRotationOrigin_float_int)(jcontext ctx, jobject self, jfloat param0, jint param1);
#define VTABLE_mindustry_editor_MapView_rotateBy_float 73
typedef void (*func_mindustry_editor_MapView_rotateBy_float)(jcontext ctx, jobject self, jfloat param0);
#define VTABLE_mindustry_editor_MapView_setColor_float_float_float_float 74
typedef void (*func_mindustry_editor_MapView_setColor_float_float_float_float)(jcontext ctx, jobject self, jfloat param0, jfloat param1, jfloat param2, jfloat param3);
#define VTABLE_mindustry_editor_MapView_setColor_arc_graphics_Color 75
typedef void (*func_mindustry_editor_MapView_setColor_arc_graphics_Color)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_editor_MapView_toFront 76
typedef void (*func_mindustry_editor_MapView_toFront)(jcontext ctx, jobject self);
#define VTABLE_mindustry_editor_MapView_toBack 77
typedef void (*func_mindustry_editor_MapView_toBack)(jcontext ctx, jobject self);
#define VTABLE_mindustry_editor_MapView_getZIndex_R_int 78
typedef jint (*func_mindustry_editor_MapView_getZIndex_R_int)(jcontext ctx, jobject self);
#define VTABLE_mindustry_editor_MapView_setZIndex_int 79
typedef void (*func_mindustry_editor_MapView_setZIndex_int)(jcontext ctx, jobject self, jint param0);
#define VTABLE_mindustry_editor_MapView_clipBegin_R_boolean 80
typedef jbool (*func_mindustry_editor_MapView_clipBegin_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_mindustry_editor_MapView_clipBegin_float_float_float_float_R_boolean 81
typedef jbool (*func_mindustry_editor_MapView_clipBegin_float_float_float_float_R_boolean)(jcontext ctx, jobject self, jfloat param0, jfloat param1, jfloat param2, jfloat param3);
#define VTABLE_mindustry_editor_MapView_clipEnd 82
typedef void (*func_mindustry_editor_MapView_clipEnd)(jcontext ctx, jobject self);
#define VTABLE_mindustry_editor_MapView_screenToLocalCoordinates_arc_math_geom_Vec2_R_arc_math_geom_Vec2 83
typedef jobject (*func_mindustry_editor_MapView_screenToLocalCoordinates_arc_math_geom_Vec2_R_arc_math_geom_Vec2)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_editor_MapView_stageToLocalCoordinates_arc_math_geom_Vec2_R_arc_math_geom_Vec2 84
typedef jobject (*func_mindustry_editor_MapView_stageToLocalCoordinates_arc_math_geom_Vec2_R_arc_math_geom_Vec2)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_editor_MapView_localToStageCoordinates_arc_math_geom_Vec2_R_arc_math_geom_Vec2 85
typedef jobject (*func_mindustry_editor_MapView_localToStageCoordinates_arc_math_geom_Vec2_R_arc_math_geom_Vec2)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_editor_MapView_localToParentCoordinates_arc_math_geom_Vec2_R_arc_math_geom_Vec2 86
typedef jobject (*func_mindustry_editor_MapView_localToParentCoordinates_arc_math_geom_Vec2_R_arc_math_geom_Vec2)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_editor_MapView_localToAscendantCoordinates_arc_scene_Element_arc_math_geom_Vec2_R_arc_math_geom_Vec2 87
typedef jobject (*func_mindustry_editor_MapView_localToAscendantCoordinates_arc_scene_Element_arc_math_geom_Vec2_R_arc_math_geom_Vec2)(jcontext ctx, jobject self, jobject param0, jobject param1);
#define VTABLE_mindustry_editor_MapView_parentToLocalCoordinates_arc_math_geom_Vec2_R_arc_math_geom_Vec2 88
typedef jobject (*func_mindustry_editor_MapView_parentToLocalCoordinates_arc_math_geom_Vec2_R_arc_math_geom_Vec2)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_editor_MapView_getMinWidth_R_float 89
typedef jfloat (*func_mindustry_editor_MapView_getMinWidth_R_float)(jcontext ctx, jobject self);
#define VTABLE_mindustry_editor_MapView_getMinHeight_R_float 90
typedef jfloat (*func_mindustry_editor_MapView_getMinHeight_R_float)(jcontext ctx, jobject self);
#define VTABLE_mindustry_editor_MapView_getPrefWidth_R_float 91
typedef jfloat (*func_mindustry_editor_MapView_getPrefWidth_R_float)(jcontext ctx, jobject self);
#define VTABLE_mindustry_editor_MapView_getPrefHeight_R_float 92
typedef jfloat (*func_mindustry_editor_MapView_getPrefHeight_R_float)(jcontext ctx, jobject self);
#define VTABLE_mindustry_editor_MapView_getMaxWidth_R_float 93
typedef jfloat (*func_mindustry_editor_MapView_getMaxWidth_R_float)(jcontext ctx, jobject self);
#define VTABLE_mindustry_editor_MapView_getMaxHeight_R_float 94
typedef jfloat (*func_mindustry_editor_MapView_getMaxHeight_R_float)(jcontext ctx, jobject self);
#define VTABLE_mindustry_editor_MapView_setLayoutEnabled_boolean 95
typedef void (*func_mindustry_editor_MapView_setLayoutEnabled_boolean)(jcontext ctx, jobject self, jbool param0);
#define VTABLE_mindustry_editor_MapView_validate 96
typedef void (*func_mindustry_editor_MapView_validate)(jcontext ctx, jobject self);
#define VTABLE_mindustry_editor_MapView_needsLayout_R_boolean 97
typedef jbool (*func_mindustry_editor_MapView_needsLayout_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_mindustry_editor_MapView_invalidate 98
typedef void (*func_mindustry_editor_MapView_invalidate)(jcontext ctx, jobject self);
#define VTABLE_mindustry_editor_MapView_invalidateHierarchy 99
typedef void (*func_mindustry_editor_MapView_invalidateHierarchy)(jcontext ctx, jobject self);
#define VTABLE_mindustry_editor_MapView_pack 100
typedef void (*func_mindustry_editor_MapView_pack)(jcontext ctx, jobject self);
#define VTABLE_mindustry_editor_MapView_setFillParent_boolean 101
typedef void (*func_mindustry_editor_MapView_setFillParent_boolean)(jcontext ctx, jobject self, jbool param0);
#define VTABLE_mindustry_editor_MapView_layout 102
typedef void (*func_mindustry_editor_MapView_layout)(jcontext ctx, jobject self);
#define VTABLE_mindustry_editor_MapView_keepInStage 103
typedef void (*func_mindustry_editor_MapView_keepInStage)(jcontext ctx, jobject self);
#define VTABLE_mindustry_editor_MapView_setTranslation_float_float 104
typedef void (*func_mindustry_editor_MapView_setTranslation_float_float)(jcontext ctx, jobject self, jfloat param0, jfloat param1);
#define VTABLE_mindustry_editor_MapView_keyDown_arc_input_KeyCode_java_lang_Runnable 105
typedef void (*func_mindustry_editor_MapView_keyDown_arc_input_KeyCode_java_lang_Runnable)(jcontext ctx, jobject self, jobject param0, jobject param1);
#define VTABLE_mindustry_editor_MapView_keyDown_arc_func_Cons 106
typedef void (*func_mindustry_editor_MapView_keyDown_arc_func_Cons)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_editor_MapView_fireClick 107
typedef void (*func_mindustry_editor_MapView_fireClick)(jcontext ctx, jobject self);
#define VTABLE_mindustry_editor_MapView_clicked_java_lang_Runnable_R_arc_scene_event_ClickListener 108
typedef jobject (*func_mindustry_editor_MapView_clicked_java_lang_Runnable_R_arc_scene_event_ClickListener)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_editor_MapView_clicked_arc_input_KeyCode_java_lang_Runnable_R_arc_scene_event_ClickListener 109
typedef jobject (*func_mindustry_editor_MapView_clicked_arc_input_KeyCode_java_lang_Runnable_R_arc_scene_event_ClickListener)(jcontext ctx, jobject self, jobject param0, jobject param1);
#define VTABLE_mindustry_editor_MapView_clicked_arc_func_Cons_java_lang_Runnable_R_arc_scene_event_ClickListener 110
typedef jobject (*func_mindustry_editor_MapView_clicked_arc_func_Cons_java_lang_Runnable_R_arc_scene_event_ClickListener)(jcontext ctx, jobject self, jobject param0, jobject param1);
#define VTABLE_mindustry_editor_MapView_clicked_arc_func_Cons_arc_func_Cons_R_arc_scene_event_ClickListener 111
typedef jobject (*func_mindustry_editor_MapView_clicked_arc_func_Cons_arc_func_Cons_R_arc_scene_event_ClickListener)(jcontext ctx, jobject self, jobject param0, jobject param1);
#define VTABLE_mindustry_editor_MapView_tapped_java_lang_Runnable_R_arc_scene_event_InputListener 112
typedef jobject (*func_mindustry_editor_MapView_tapped_java_lang_Runnable_R_arc_scene_event_InputListener)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_editor_MapView_hovered_java_lang_Runnable 113
typedef void (*func_mindustry_editor_MapView_hovered_java_lang_Runnable)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_editor_MapView_exited_java_lang_Runnable 114
typedef void (*func_mindustry_editor_MapView_exited_java_lang_Runnable)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_editor_MapView_released_java_lang_Runnable 115
typedef void (*func_mindustry_editor_MapView_released_java_lang_Runnable)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_editor_MapView_change 116
typedef void (*func_mindustry_editor_MapView_change)(jcontext ctx, jobject self);
#define VTABLE_mindustry_editor_MapView_changed_java_lang_Runnable 117
typedef void (*func_mindustry_editor_MapView_changed_java_lang_Runnable)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_editor_MapView_update_java_lang_Runnable_R_arc_scene_Element 118
typedef jobject (*func_mindustry_editor_MapView_update_java_lang_Runnable_R_arc_scene_Element)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_editor_MapView_visible_arc_func_Boolp_R_arc_scene_Element 119
typedef jobject (*func_mindustry_editor_MapView_visible_arc_func_Boolp_R_arc_scene_Element)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_editor_MapView_touchable_arc_func_Prov 120
typedef void (*func_mindustry_editor_MapView_touchable_arc_func_Prov)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_editor_MapView_touchDown_float_float_int_arc_input_KeyCode_R_boolean 121
typedef jbool (*func_mindustry_editor_MapView_touchDown_float_float_int_arc_input_KeyCode_R_boolean)(jcontext ctx, jobject self, jfloat param0, jfloat param1, jint param2, jobject param3);
#define VTABLE_mindustry_editor_MapView_tap_float_float_int_arc_input_KeyCode_R_boolean 122
typedef jbool (*func_mindustry_editor_MapView_tap_float_float_int_arc_input_KeyCode_R_boolean)(jcontext ctx, jobject self, jfloat param0, jfloat param1, jint param2, jobject param3);
#define VTABLE_mindustry_editor_MapView_longPress_float_float_R_boolean 123
typedef jbool (*func_mindustry_editor_MapView_longPress_float_float_R_boolean)(jcontext ctx, jobject self, jfloat param0, jfloat param1);
#define VTABLE_mindustry_editor_MapView_fling_float_float_arc_input_KeyCode_R_boolean 124
typedef jbool (*func_mindustry_editor_MapView_fling_float_float_arc_input_KeyCode_R_boolean)(jcontext ctx, jobject self, jfloat param0, jfloat param1, jobject param2);
#define VTABLE_mindustry_editor_MapView_pan_float_float_float_float_R_boolean 125
typedef jbool (*func_mindustry_editor_MapView_pan_float_float_float_float_R_boolean)(jcontext ctx, jobject self, jfloat param0, jfloat param1, jfloat param2, jfloat param3);
#define VTABLE_mindustry_editor_MapView_panStop_float_float_int_arc_input_KeyCode_R_boolean 126
typedef jbool (*func_mindustry_editor_MapView_panStop_float_float_int_arc_input_KeyCode_R_boolean)(jcontext ctx, jobject self, jfloat param0, jfloat param1, jint param2, jobject param3);
#define VTABLE_mindustry_editor_MapView_zoom_float_float_R_boolean 127
typedef jbool (*func_mindustry_editor_MapView_zoom_float_float_R_boolean)(jcontext ctx, jobject self, jfloat param0, jfloat param1);
#define VTABLE_mindustry_editor_MapView_pinch_arc_math_geom_Vec2_arc_math_geom_Vec2_arc_math_geom_Vec2_arc_math_geom_Vec2_R_boolean 128
typedef jbool (*func_mindustry_editor_MapView_pinch_arc_math_geom_Vec2_arc_math_geom_Vec2_arc_math_geom_Vec2_arc_math_geom_Vec2_R_boolean)(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2, jobject param3);
#define VTABLE_mindustry_editor_MapView_pinchStop 129
typedef void (*func_mindustry_editor_MapView_pinchStop)(jcontext ctx, jobject self);
#define VTABLE_mindustry_editor_MapView_getTool_R_mindustry_editor_EditorTool 130
typedef jobject (*func_mindustry_editor_MapView_getTool_R_mindustry_editor_EditorTool)(jcontext ctx, jobject self);
#define VTABLE_mindustry_editor_MapView_setTool_mindustry_editor_EditorTool 131
typedef void (*func_mindustry_editor_MapView_setTool_mindustry_editor_EditorTool)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_editor_MapView_isGrid_R_boolean 132
typedef jbool (*func_mindustry_editor_MapView_isGrid_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_mindustry_editor_MapView_setGrid_boolean 133
typedef void (*func_mindustry_editor_MapView_setGrid_boolean)(jcontext ctx, jobject self, jbool param0);
#define VTABLE_mindustry_editor_MapView_center 134
typedef void (*func_mindustry_editor_MapView_center)(jcontext ctx, jobject self);
#define VTABLE_mindustry_editor_MapView_clampZoom 135
typedef void (*func_mindustry_editor_MapView_clampZoom)(jcontext ctx, jobject self);
#define VTABLE_mindustry_editor_MapView_project_float_float_R_arc_math_geom_Point2 136
typedef jobject (*func_mindustry_editor_MapView_project_float_float_R_arc_math_geom_Point2)(jcontext ctx, jobject self, jfloat param0, jfloat param1);
#define VTABLE_mindustry_editor_MapView_unproject_int_int_R_arc_math_geom_Vec2 137
typedef jobject (*func_mindustry_editor_MapView_unproject_int_int_R_arc_math_geom_Vec2)(jcontext ctx, jobject self, jint param0, jint param1);
#define VTABLE_mindustry_editor_MapView_active_R_boolean 138
typedef jbool (*func_mindustry_editor_MapView_active_R_boolean)(jcontext ctx, jobject self);

void mark_mindustry_editor_MapView(jobject object, jint mark, jint depth);
void clinit_mindustry_editor_MapView(jcontext ctx);
void init_mindustry_editor_MapView(jcontext ctx, jobject self);
jobject M_mindustry_editor_MapView_getTool_R_mindustry_editor_EditorTool(jcontext ctx, jobject self);
void M_mindustry_editor_MapView_setTool_mindustry_editor_EditorTool(jcontext ctx, jobject self, jobject param0);
jbool M_mindustry_editor_MapView_isGrid_R_boolean(jcontext ctx, jobject self);
void M_mindustry_editor_MapView_setGrid_boolean(jcontext ctx, jobject self, jbool param0);
void M_mindustry_editor_MapView_center(jcontext ctx, jobject self);
void M_mindustry_editor_MapView_act_float(jcontext ctx, jobject self, jfloat param0);
void M_mindustry_editor_MapView_clampZoom(jcontext ctx, jobject self);
jobject M_mindustry_editor_MapView_project_float_float_R_arc_math_geom_Point2(jcontext ctx, jobject self, jfloat param0, jfloat param1);
jobject M_mindustry_editor_MapView_unproject_int_int_R_arc_math_geom_Vec2(jcontext ctx, jobject self, jint param0, jint param1);
void M_mindustry_editor_MapView_draw(jcontext ctx, jobject self);
jbool M_mindustry_editor_MapView_active_R_boolean(jcontext ctx, jobject self);
jbool M_mindustry_editor_MapView_pan_float_float_float_float_R_boolean(jcontext ctx, jobject self, jfloat param0, jfloat param1, jfloat param2, jfloat param3);
jbool M_mindustry_editor_MapView_zoom_float_float_R_boolean(jcontext ctx, jobject self, jfloat param0, jfloat param1);
jbool M_mindustry_editor_MapView_pinch_arc_math_geom_Vec2_arc_math_geom_Vec2_arc_math_geom_Vec2_arc_math_geom_Vec2_R_boolean(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2, jobject param3);
void M_mindustry_editor_MapView_pinchStop(jcontext ctx, jobject self);
jbool SM_mindustry_editor_MapView_lambda$new$0_float_float_float_int_int_R_boolean(jcontext ctx, jfloat param0, jfloat param1, jfloat param2, jint param3, jint param4);

#ifdef __cplusplus
}
#endif

#endif
