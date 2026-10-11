#ifndef HEADER_mindustry_ui_dialogs_PlanetDialog$5
#define HEADER_mindustry_ui_dialogs_PlanetDialog$5

#include "Clearwing.h"
#include "arc/scene/Element.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct mindustry_ui_dialogs_PlanetDialog$5 {
	arc_scene_Element parent;
	jref F_this$0;
} mindustry_ui_dialogs_PlanetDialog$5;

extern Class class_mindustry_ui_dialogs_PlanetDialog$5;


#define VTABLE_mindustry_ui_dialogs_PlanetDialog$5_hashCode_R_int 0
typedef jint (*func_mindustry_ui_dialogs_PlanetDialog$5_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_mindustry_ui_dialogs_PlanetDialog$5_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_mindustry_ui_dialogs_PlanetDialog$5_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_ui_dialogs_PlanetDialog$5_clone_R_java_lang_Object 2
typedef jobject (*func_mindustry_ui_dialogs_PlanetDialog$5_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_mindustry_ui_dialogs_PlanetDialog$5_getClass_R_java_lang_Class 3
typedef jobject (*func_mindustry_ui_dialogs_PlanetDialog$5_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_mindustry_ui_dialogs_PlanetDialog$5_toString_R_java_lang_String 4
typedef jobject (*func_mindustry_ui_dialogs_PlanetDialog$5_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_mindustry_ui_dialogs_PlanetDialog$5_finalize 5
typedef void (*func_mindustry_ui_dialogs_PlanetDialog$5_finalize)(jcontext ctx, jobject self);
#define VTABLE_mindustry_ui_dialogs_PlanetDialog$5_notify 6
typedef void (*func_mindustry_ui_dialogs_PlanetDialog$5_notify)(jcontext ctx, jobject self);
#define VTABLE_mindustry_ui_dialogs_PlanetDialog$5_notifyAll 7
typedef void (*func_mindustry_ui_dialogs_PlanetDialog$5_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_mindustry_ui_dialogs_PlanetDialog$5_wait 8
typedef void (*func_mindustry_ui_dialogs_PlanetDialog$5_wait)(jcontext ctx, jobject self);
#define VTABLE_mindustry_ui_dialogs_PlanetDialog$5_wait_long 9
typedef void (*func_mindustry_ui_dialogs_PlanetDialog$5_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_mindustry_ui_dialogs_PlanetDialog$5_wait_long_int 10
typedef void (*func_mindustry_ui_dialogs_PlanetDialog$5_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);
#define VTABLE_mindustry_ui_dialogs_PlanetDialog$5_draw 11
typedef void (*func_mindustry_ui_dialogs_PlanetDialog$5_draw)(jcontext ctx, jobject self);
#define VTABLE_mindustry_ui_dialogs_PlanetDialog$5_act_float 12
typedef void (*func_mindustry_ui_dialogs_PlanetDialog$5_act_float)(jcontext ctx, jobject self, jfloat param0);
#define VTABLE_mindustry_ui_dialogs_PlanetDialog$5_updateVisibility 13
typedef void (*func_mindustry_ui_dialogs_PlanetDialog$5_updateVisibility)(jcontext ctx, jobject self);
#define VTABLE_mindustry_ui_dialogs_PlanetDialog$5_hasMouse_R_boolean 14
typedef jbool (*func_mindustry_ui_dialogs_PlanetDialog$5_hasMouse_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_mindustry_ui_dialogs_PlanetDialog$5_hasKeyboard_R_boolean 15
typedef jbool (*func_mindustry_ui_dialogs_PlanetDialog$5_hasKeyboard_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_mindustry_ui_dialogs_PlanetDialog$5_hasScroll_R_boolean 16
typedef jbool (*func_mindustry_ui_dialogs_PlanetDialog$5_hasScroll_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_mindustry_ui_dialogs_PlanetDialog$5_requestKeyboard 17
typedef void (*func_mindustry_ui_dialogs_PlanetDialog$5_requestKeyboard)(jcontext ctx, jobject self);
#define VTABLE_mindustry_ui_dialogs_PlanetDialog$5_requestScroll 18
typedef void (*func_mindustry_ui_dialogs_PlanetDialog$5_requestScroll)(jcontext ctx, jobject self);
#define VTABLE_mindustry_ui_dialogs_PlanetDialog$5_fire_arc_scene_event_SceneEvent_R_boolean 19
typedef jbool (*func_mindustry_ui_dialogs_PlanetDialog$5_fire_arc_scene_event_SceneEvent_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_ui_dialogs_PlanetDialog$5_notify_arc_scene_event_SceneEvent_boolean_R_boolean 20
typedef jbool (*func_mindustry_ui_dialogs_PlanetDialog$5_notify_arc_scene_event_SceneEvent_boolean_R_boolean)(jcontext ctx, jobject self, jobject param0, jbool param1);
#define VTABLE_mindustry_ui_dialogs_PlanetDialog$5_hit_float_float_boolean_R_arc_scene_Element 21
typedef jobject (*func_mindustry_ui_dialogs_PlanetDialog$5_hit_float_float_boolean_R_arc_scene_Element)(jcontext ctx, jobject self, jfloat param0, jfloat param1, jbool param2);
#define VTABLE_mindustry_ui_dialogs_PlanetDialog$5_remove_R_boolean 22
typedef jbool (*func_mindustry_ui_dialogs_PlanetDialog$5_remove_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_mindustry_ui_dialogs_PlanetDialog$5_dragged_arc_func_Floatc2 23
typedef void (*func_mindustry_ui_dialogs_PlanetDialog$5_dragged_arc_func_Floatc2)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_ui_dialogs_PlanetDialog$5_scrolled_arc_func_Floatc 24
typedef void (*func_mindustry_ui_dialogs_PlanetDialog$5_scrolled_arc_func_Floatc)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_ui_dialogs_PlanetDialog$5_addListener_arc_scene_event_EventListener_R_boolean 25
typedef jbool (*func_mindustry_ui_dialogs_PlanetDialog$5_addListener_arc_scene_event_EventListener_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_ui_dialogs_PlanetDialog$5_removeListener_arc_scene_event_EventListener_R_boolean 26
typedef jbool (*func_mindustry_ui_dialogs_PlanetDialog$5_removeListener_arc_scene_event_EventListener_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_ui_dialogs_PlanetDialog$5_getListeners_R_arc_struct_Seq 27
typedef jobject (*func_mindustry_ui_dialogs_PlanetDialog$5_getListeners_R_arc_struct_Seq)(jcontext ctx, jobject self);
#define VTABLE_mindustry_ui_dialogs_PlanetDialog$5_addCaptureListener_arc_scene_event_EventListener_R_boolean 28
typedef jbool (*func_mindustry_ui_dialogs_PlanetDialog$5_addCaptureListener_arc_scene_event_EventListener_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_ui_dialogs_PlanetDialog$5_removeCaptureListener_arc_scene_event_EventListener_R_boolean 29
typedef jbool (*func_mindustry_ui_dialogs_PlanetDialog$5_removeCaptureListener_arc_scene_event_EventListener_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_ui_dialogs_PlanetDialog$5_getCaptureListeners_R_arc_struct_Seq 30
typedef jobject (*func_mindustry_ui_dialogs_PlanetDialog$5_getCaptureListeners_R_arc_struct_Seq)(jcontext ctx, jobject self);
#define VTABLE_mindustry_ui_dialogs_PlanetDialog$5_addAction_arc_scene_Action 31
typedef void (*func_mindustry_ui_dialogs_PlanetDialog$5_addAction_arc_scene_Action)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_ui_dialogs_PlanetDialog$5_actions_Array1_arc_scene_Action 32
typedef void (*func_mindustry_ui_dialogs_PlanetDialog$5_actions_Array1_arc_scene_Action)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_ui_dialogs_PlanetDialog$5_removeAction_arc_scene_Action 33
typedef void (*func_mindustry_ui_dialogs_PlanetDialog$5_removeAction_arc_scene_Action)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_ui_dialogs_PlanetDialog$5_getActions_R_arc_struct_Seq 34
typedef jobject (*func_mindustry_ui_dialogs_PlanetDialog$5_getActions_R_arc_struct_Seq)(jcontext ctx, jobject self);
#define VTABLE_mindustry_ui_dialogs_PlanetDialog$5_hasActions_R_boolean 35
typedef jbool (*func_mindustry_ui_dialogs_PlanetDialog$5_hasActions_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_mindustry_ui_dialogs_PlanetDialog$5_clearActions 36
typedef void (*func_mindustry_ui_dialogs_PlanetDialog$5_clearActions)(jcontext ctx, jobject self);
#define VTABLE_mindustry_ui_dialogs_PlanetDialog$5_clearListeners 37
typedef void (*func_mindustry_ui_dialogs_PlanetDialog$5_clearListeners)(jcontext ctx, jobject self);
#define VTABLE_mindustry_ui_dialogs_PlanetDialog$5_clear 38
typedef void (*func_mindustry_ui_dialogs_PlanetDialog$5_clear)(jcontext ctx, jobject self);
#define VTABLE_mindustry_ui_dialogs_PlanetDialog$5_getScene_R_arc_scene_Scene 39
typedef jobject (*func_mindustry_ui_dialogs_PlanetDialog$5_getScene_R_arc_scene_Scene)(jcontext ctx, jobject self);
#define VTABLE_mindustry_ui_dialogs_PlanetDialog$5_setScene_arc_scene_Scene 40
typedef void (*func_mindustry_ui_dialogs_PlanetDialog$5_setScene_arc_scene_Scene)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_ui_dialogs_PlanetDialog$5_isDescendantOf_arc_func_Boolf_R_boolean 41
typedef jbool (*func_mindustry_ui_dialogs_PlanetDialog$5_isDescendantOf_arc_func_Boolf_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_ui_dialogs_PlanetDialog$5_isDescendantOf_arc_scene_Element_R_boolean 42
typedef jbool (*func_mindustry_ui_dialogs_PlanetDialog$5_isDescendantOf_arc_scene_Element_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_ui_dialogs_PlanetDialog$5_isAscendantOf_arc_scene_Element_R_boolean 43
typedef jbool (*func_mindustry_ui_dialogs_PlanetDialog$5_isAscendantOf_arc_scene_Element_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_ui_dialogs_PlanetDialog$5_hasParent_R_boolean 44
typedef jbool (*func_mindustry_ui_dialogs_PlanetDialog$5_hasParent_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_mindustry_ui_dialogs_PlanetDialog$5_isTouchable_R_boolean 45
typedef jbool (*func_mindustry_ui_dialogs_PlanetDialog$5_isTouchable_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_mindustry_ui_dialogs_PlanetDialog$5_getX_int_R_float 46
typedef jfloat (*func_mindustry_ui_dialogs_PlanetDialog$5_getX_int_R_float)(jcontext ctx, jobject self, jint param0);
#define VTABLE_mindustry_ui_dialogs_PlanetDialog$5_getY_int_R_float 47
typedef jfloat (*func_mindustry_ui_dialogs_PlanetDialog$5_getY_int_R_float)(jcontext ctx, jobject self, jint param0);
#define VTABLE_mindustry_ui_dialogs_PlanetDialog$5_setPosition_float_float 48
typedef void (*func_mindustry_ui_dialogs_PlanetDialog$5_setPosition_float_float)(jcontext ctx, jobject self, jfloat param0, jfloat param1);
#define VTABLE_mindustry_ui_dialogs_PlanetDialog$5_setPosition_float_float_int 49
typedef void (*func_mindustry_ui_dialogs_PlanetDialog$5_setPosition_float_float_int)(jcontext ctx, jobject self, jfloat param0, jfloat param1, jint param2);
#define VTABLE_mindustry_ui_dialogs_PlanetDialog$5_moveBy_float_float 50
typedef void (*func_mindustry_ui_dialogs_PlanetDialog$5_moveBy_float_float)(jcontext ctx, jobject self, jfloat param0, jfloat param1);
#define VTABLE_mindustry_ui_dialogs_PlanetDialog$5_getWidth_R_float 51
typedef jfloat (*func_mindustry_ui_dialogs_PlanetDialog$5_getWidth_R_float)(jcontext ctx, jobject self);
#define VTABLE_mindustry_ui_dialogs_PlanetDialog$5_setWidth_float 52
typedef void (*func_mindustry_ui_dialogs_PlanetDialog$5_setWidth_float)(jcontext ctx, jobject self, jfloat param0);
#define VTABLE_mindustry_ui_dialogs_PlanetDialog$5_getHeight_R_float 53
typedef jfloat (*func_mindustry_ui_dialogs_PlanetDialog$5_getHeight_R_float)(jcontext ctx, jobject self);
#define VTABLE_mindustry_ui_dialogs_PlanetDialog$5_setHeight_float 54
typedef void (*func_mindustry_ui_dialogs_PlanetDialog$5_setHeight_float)(jcontext ctx, jobject self, jfloat param0);
#define VTABLE_mindustry_ui_dialogs_PlanetDialog$5_getTop_R_float 55
typedef jfloat (*func_mindustry_ui_dialogs_PlanetDialog$5_getTop_R_float)(jcontext ctx, jobject self);
#define VTABLE_mindustry_ui_dialogs_PlanetDialog$5_getRight_R_float 56
typedef jfloat (*func_mindustry_ui_dialogs_PlanetDialog$5_getRight_R_float)(jcontext ctx, jobject self);
#define VTABLE_mindustry_ui_dialogs_PlanetDialog$5_sizeChanged 57
typedef void (*func_mindustry_ui_dialogs_PlanetDialog$5_sizeChanged)(jcontext ctx, jobject self);
#define VTABLE_mindustry_ui_dialogs_PlanetDialog$5_rotationChanged 58
typedef void (*func_mindustry_ui_dialogs_PlanetDialog$5_rotationChanged)(jcontext ctx, jobject self);
#define VTABLE_mindustry_ui_dialogs_PlanetDialog$5_setSize_float 59
typedef void (*func_mindustry_ui_dialogs_PlanetDialog$5_setSize_float)(jcontext ctx, jobject self, jfloat param0);
#define VTABLE_mindustry_ui_dialogs_PlanetDialog$5_setSize_float_float 60
typedef void (*func_mindustry_ui_dialogs_PlanetDialog$5_setSize_float_float)(jcontext ctx, jobject self, jfloat param0, jfloat param1);
#define VTABLE_mindustry_ui_dialogs_PlanetDialog$5_sizeBy_float 61
typedef void (*func_mindustry_ui_dialogs_PlanetDialog$5_sizeBy_float)(jcontext ctx, jobject self, jfloat param0);
#define VTABLE_mindustry_ui_dialogs_PlanetDialog$5_sizeBy_float_float 62
typedef void (*func_mindustry_ui_dialogs_PlanetDialog$5_sizeBy_float_float)(jcontext ctx, jobject self, jfloat param0, jfloat param1);
#define VTABLE_mindustry_ui_dialogs_PlanetDialog$5_setBounds_float_float_float_float 63
typedef void (*func_mindustry_ui_dialogs_PlanetDialog$5_setBounds_float_float_float_float)(jcontext ctx, jobject self, jfloat param0, jfloat param1, jfloat param2, jfloat param3);
#define VTABLE_mindustry_ui_dialogs_PlanetDialog$5_setOrigin_float_float 64
typedef void (*func_mindustry_ui_dialogs_PlanetDialog$5_setOrigin_float_float)(jcontext ctx, jobject self, jfloat param0, jfloat param1);
#define VTABLE_mindustry_ui_dialogs_PlanetDialog$5_setOrigin_int 65
typedef void (*func_mindustry_ui_dialogs_PlanetDialog$5_setOrigin_int)(jcontext ctx, jobject self, jint param0);
#define VTABLE_mindustry_ui_dialogs_PlanetDialog$5_setScale_float 66
typedef void (*func_mindustry_ui_dialogs_PlanetDialog$5_setScale_float)(jcontext ctx, jobject self, jfloat param0);
#define VTABLE_mindustry_ui_dialogs_PlanetDialog$5_setScale_float_float 67
typedef void (*func_mindustry_ui_dialogs_PlanetDialog$5_setScale_float_float)(jcontext ctx, jobject self, jfloat param0, jfloat param1);
#define VTABLE_mindustry_ui_dialogs_PlanetDialog$5_scaleBy_float 68
typedef void (*func_mindustry_ui_dialogs_PlanetDialog$5_scaleBy_float)(jcontext ctx, jobject self, jfloat param0);
#define VTABLE_mindustry_ui_dialogs_PlanetDialog$5_scaleBy_float_float 69
typedef void (*func_mindustry_ui_dialogs_PlanetDialog$5_scaleBy_float_float)(jcontext ctx, jobject self, jfloat param0, jfloat param1);
#define VTABLE_mindustry_ui_dialogs_PlanetDialog$5_getRotation_R_float 70
typedef jfloat (*func_mindustry_ui_dialogs_PlanetDialog$5_getRotation_R_float)(jcontext ctx, jobject self);
#define VTABLE_mindustry_ui_dialogs_PlanetDialog$5_setRotation_float 71
typedef void (*func_mindustry_ui_dialogs_PlanetDialog$5_setRotation_float)(jcontext ctx, jobject self, jfloat param0);
#define VTABLE_mindustry_ui_dialogs_PlanetDialog$5_setRotationOrigin_float_int 72
typedef void (*func_mindustry_ui_dialogs_PlanetDialog$5_setRotationOrigin_float_int)(jcontext ctx, jobject self, jfloat param0, jint param1);
#define VTABLE_mindustry_ui_dialogs_PlanetDialog$5_rotateBy_float 73
typedef void (*func_mindustry_ui_dialogs_PlanetDialog$5_rotateBy_float)(jcontext ctx, jobject self, jfloat param0);
#define VTABLE_mindustry_ui_dialogs_PlanetDialog$5_setColor_float_float_float_float 74
typedef void (*func_mindustry_ui_dialogs_PlanetDialog$5_setColor_float_float_float_float)(jcontext ctx, jobject self, jfloat param0, jfloat param1, jfloat param2, jfloat param3);
#define VTABLE_mindustry_ui_dialogs_PlanetDialog$5_setColor_arc_graphics_Color 75
typedef void (*func_mindustry_ui_dialogs_PlanetDialog$5_setColor_arc_graphics_Color)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_ui_dialogs_PlanetDialog$5_toFront 76
typedef void (*func_mindustry_ui_dialogs_PlanetDialog$5_toFront)(jcontext ctx, jobject self);
#define VTABLE_mindustry_ui_dialogs_PlanetDialog$5_toBack 77
typedef void (*func_mindustry_ui_dialogs_PlanetDialog$5_toBack)(jcontext ctx, jobject self);
#define VTABLE_mindustry_ui_dialogs_PlanetDialog$5_getZIndex_R_int 78
typedef jint (*func_mindustry_ui_dialogs_PlanetDialog$5_getZIndex_R_int)(jcontext ctx, jobject self);
#define VTABLE_mindustry_ui_dialogs_PlanetDialog$5_setZIndex_int 79
typedef void (*func_mindustry_ui_dialogs_PlanetDialog$5_setZIndex_int)(jcontext ctx, jobject self, jint param0);
#define VTABLE_mindustry_ui_dialogs_PlanetDialog$5_clipBegin_R_boolean 80
typedef jbool (*func_mindustry_ui_dialogs_PlanetDialog$5_clipBegin_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_mindustry_ui_dialogs_PlanetDialog$5_clipBegin_float_float_float_float_R_boolean 81
typedef jbool (*func_mindustry_ui_dialogs_PlanetDialog$5_clipBegin_float_float_float_float_R_boolean)(jcontext ctx, jobject self, jfloat param0, jfloat param1, jfloat param2, jfloat param3);
#define VTABLE_mindustry_ui_dialogs_PlanetDialog$5_clipEnd 82
typedef void (*func_mindustry_ui_dialogs_PlanetDialog$5_clipEnd)(jcontext ctx, jobject self);
#define VTABLE_mindustry_ui_dialogs_PlanetDialog$5_screenToLocalCoordinates_arc_math_geom_Vec2_R_arc_math_geom_Vec2 83
typedef jobject (*func_mindustry_ui_dialogs_PlanetDialog$5_screenToLocalCoordinates_arc_math_geom_Vec2_R_arc_math_geom_Vec2)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_ui_dialogs_PlanetDialog$5_stageToLocalCoordinates_arc_math_geom_Vec2_R_arc_math_geom_Vec2 84
typedef jobject (*func_mindustry_ui_dialogs_PlanetDialog$5_stageToLocalCoordinates_arc_math_geom_Vec2_R_arc_math_geom_Vec2)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_ui_dialogs_PlanetDialog$5_localToStageCoordinates_arc_math_geom_Vec2_R_arc_math_geom_Vec2 85
typedef jobject (*func_mindustry_ui_dialogs_PlanetDialog$5_localToStageCoordinates_arc_math_geom_Vec2_R_arc_math_geom_Vec2)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_ui_dialogs_PlanetDialog$5_localToParentCoordinates_arc_math_geom_Vec2_R_arc_math_geom_Vec2 86
typedef jobject (*func_mindustry_ui_dialogs_PlanetDialog$5_localToParentCoordinates_arc_math_geom_Vec2_R_arc_math_geom_Vec2)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_ui_dialogs_PlanetDialog$5_localToAscendantCoordinates_arc_scene_Element_arc_math_geom_Vec2_R_arc_math_geom_Vec2 87
typedef jobject (*func_mindustry_ui_dialogs_PlanetDialog$5_localToAscendantCoordinates_arc_scene_Element_arc_math_geom_Vec2_R_arc_math_geom_Vec2)(jcontext ctx, jobject self, jobject param0, jobject param1);
#define VTABLE_mindustry_ui_dialogs_PlanetDialog$5_parentToLocalCoordinates_arc_math_geom_Vec2_R_arc_math_geom_Vec2 88
typedef jobject (*func_mindustry_ui_dialogs_PlanetDialog$5_parentToLocalCoordinates_arc_math_geom_Vec2_R_arc_math_geom_Vec2)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_ui_dialogs_PlanetDialog$5_getMinWidth_R_float 89
typedef jfloat (*func_mindustry_ui_dialogs_PlanetDialog$5_getMinWidth_R_float)(jcontext ctx, jobject self);
#define VTABLE_mindustry_ui_dialogs_PlanetDialog$5_getMinHeight_R_float 90
typedef jfloat (*func_mindustry_ui_dialogs_PlanetDialog$5_getMinHeight_R_float)(jcontext ctx, jobject self);
#define VTABLE_mindustry_ui_dialogs_PlanetDialog$5_getPrefWidth_R_float 91
typedef jfloat (*func_mindustry_ui_dialogs_PlanetDialog$5_getPrefWidth_R_float)(jcontext ctx, jobject self);
#define VTABLE_mindustry_ui_dialogs_PlanetDialog$5_getPrefHeight_R_float 92
typedef jfloat (*func_mindustry_ui_dialogs_PlanetDialog$5_getPrefHeight_R_float)(jcontext ctx, jobject self);
#define VTABLE_mindustry_ui_dialogs_PlanetDialog$5_getMaxWidth_R_float 93
typedef jfloat (*func_mindustry_ui_dialogs_PlanetDialog$5_getMaxWidth_R_float)(jcontext ctx, jobject self);
#define VTABLE_mindustry_ui_dialogs_PlanetDialog$5_getMaxHeight_R_float 94
typedef jfloat (*func_mindustry_ui_dialogs_PlanetDialog$5_getMaxHeight_R_float)(jcontext ctx, jobject self);
#define VTABLE_mindustry_ui_dialogs_PlanetDialog$5_setLayoutEnabled_boolean 95
typedef void (*func_mindustry_ui_dialogs_PlanetDialog$5_setLayoutEnabled_boolean)(jcontext ctx, jobject self, jbool param0);
#define VTABLE_mindustry_ui_dialogs_PlanetDialog$5_validate 96
typedef void (*func_mindustry_ui_dialogs_PlanetDialog$5_validate)(jcontext ctx, jobject self);
#define VTABLE_mindustry_ui_dialogs_PlanetDialog$5_needsLayout_R_boolean 97
typedef jbool (*func_mindustry_ui_dialogs_PlanetDialog$5_needsLayout_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_mindustry_ui_dialogs_PlanetDialog$5_invalidate 98
typedef void (*func_mindustry_ui_dialogs_PlanetDialog$5_invalidate)(jcontext ctx, jobject self);
#define VTABLE_mindustry_ui_dialogs_PlanetDialog$5_invalidateHierarchy 99
typedef void (*func_mindustry_ui_dialogs_PlanetDialog$5_invalidateHierarchy)(jcontext ctx, jobject self);
#define VTABLE_mindustry_ui_dialogs_PlanetDialog$5_pack 100
typedef void (*func_mindustry_ui_dialogs_PlanetDialog$5_pack)(jcontext ctx, jobject self);
#define VTABLE_mindustry_ui_dialogs_PlanetDialog$5_setFillParent_boolean 101
typedef void (*func_mindustry_ui_dialogs_PlanetDialog$5_setFillParent_boolean)(jcontext ctx, jobject self, jbool param0);
#define VTABLE_mindustry_ui_dialogs_PlanetDialog$5_layout 102
typedef void (*func_mindustry_ui_dialogs_PlanetDialog$5_layout)(jcontext ctx, jobject self);
#define VTABLE_mindustry_ui_dialogs_PlanetDialog$5_keepInStage 103
typedef void (*func_mindustry_ui_dialogs_PlanetDialog$5_keepInStage)(jcontext ctx, jobject self);
#define VTABLE_mindustry_ui_dialogs_PlanetDialog$5_setTranslation_float_float 104
typedef void (*func_mindustry_ui_dialogs_PlanetDialog$5_setTranslation_float_float)(jcontext ctx, jobject self, jfloat param0, jfloat param1);
#define VTABLE_mindustry_ui_dialogs_PlanetDialog$5_keyDown_arc_input_KeyCode_java_lang_Runnable 105
typedef void (*func_mindustry_ui_dialogs_PlanetDialog$5_keyDown_arc_input_KeyCode_java_lang_Runnable)(jcontext ctx, jobject self, jobject param0, jobject param1);
#define VTABLE_mindustry_ui_dialogs_PlanetDialog$5_keyDown_arc_func_Cons 106
typedef void (*func_mindustry_ui_dialogs_PlanetDialog$5_keyDown_arc_func_Cons)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_ui_dialogs_PlanetDialog$5_fireClick 107
typedef void (*func_mindustry_ui_dialogs_PlanetDialog$5_fireClick)(jcontext ctx, jobject self);
#define VTABLE_mindustry_ui_dialogs_PlanetDialog$5_clicked_java_lang_Runnable_R_arc_scene_event_ClickListener 108
typedef jobject (*func_mindustry_ui_dialogs_PlanetDialog$5_clicked_java_lang_Runnable_R_arc_scene_event_ClickListener)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_ui_dialogs_PlanetDialog$5_clicked_arc_input_KeyCode_java_lang_Runnable_R_arc_scene_event_ClickListener 109
typedef jobject (*func_mindustry_ui_dialogs_PlanetDialog$5_clicked_arc_input_KeyCode_java_lang_Runnable_R_arc_scene_event_ClickListener)(jcontext ctx, jobject self, jobject param0, jobject param1);
#define VTABLE_mindustry_ui_dialogs_PlanetDialog$5_clicked_arc_func_Cons_java_lang_Runnable_R_arc_scene_event_ClickListener 110
typedef jobject (*func_mindustry_ui_dialogs_PlanetDialog$5_clicked_arc_func_Cons_java_lang_Runnable_R_arc_scene_event_ClickListener)(jcontext ctx, jobject self, jobject param0, jobject param1);
#define VTABLE_mindustry_ui_dialogs_PlanetDialog$5_clicked_arc_func_Cons_arc_func_Cons_R_arc_scene_event_ClickListener 111
typedef jobject (*func_mindustry_ui_dialogs_PlanetDialog$5_clicked_arc_func_Cons_arc_func_Cons_R_arc_scene_event_ClickListener)(jcontext ctx, jobject self, jobject param0, jobject param1);
#define VTABLE_mindustry_ui_dialogs_PlanetDialog$5_tapped_java_lang_Runnable_R_arc_scene_event_InputListener 112
typedef jobject (*func_mindustry_ui_dialogs_PlanetDialog$5_tapped_java_lang_Runnable_R_arc_scene_event_InputListener)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_ui_dialogs_PlanetDialog$5_hovered_java_lang_Runnable 113
typedef void (*func_mindustry_ui_dialogs_PlanetDialog$5_hovered_java_lang_Runnable)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_ui_dialogs_PlanetDialog$5_exited_java_lang_Runnable 114
typedef void (*func_mindustry_ui_dialogs_PlanetDialog$5_exited_java_lang_Runnable)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_ui_dialogs_PlanetDialog$5_released_java_lang_Runnable 115
typedef void (*func_mindustry_ui_dialogs_PlanetDialog$5_released_java_lang_Runnable)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_ui_dialogs_PlanetDialog$5_change 116
typedef void (*func_mindustry_ui_dialogs_PlanetDialog$5_change)(jcontext ctx, jobject self);
#define VTABLE_mindustry_ui_dialogs_PlanetDialog$5_changed_java_lang_Runnable 117
typedef void (*func_mindustry_ui_dialogs_PlanetDialog$5_changed_java_lang_Runnable)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_ui_dialogs_PlanetDialog$5_update_java_lang_Runnable_R_arc_scene_Element 118
typedef jobject (*func_mindustry_ui_dialogs_PlanetDialog$5_update_java_lang_Runnable_R_arc_scene_Element)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_ui_dialogs_PlanetDialog$5_visible_arc_func_Boolp_R_arc_scene_Element 119
typedef jobject (*func_mindustry_ui_dialogs_PlanetDialog$5_visible_arc_func_Boolp_R_arc_scene_Element)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_ui_dialogs_PlanetDialog$5_touchable_arc_func_Prov 120
typedef void (*func_mindustry_ui_dialogs_PlanetDialog$5_touchable_arc_func_Prov)(jcontext ctx, jobject self, jobject param0);

void mark_mindustry_ui_dialogs_PlanetDialog$5(jobject object, jint mark, jint depth);
void clinit_mindustry_ui_dialogs_PlanetDialog$5(jcontext ctx);
void init_mindustry_ui_dialogs_PlanetDialog$5_mindustry_ui_dialogs_PlanetDialog(jcontext ctx, jobject self, jobject param0);
void M_mindustry_ui_dialogs_PlanetDialog$5_act_float(jcontext ctx, jobject self, jfloat param0);
void M_mindustry_ui_dialogs_PlanetDialog$5_draw(jcontext ctx, jobject self);
jbool SM_mindustry_ui_dialogs_PlanetDialog$5_lambda$act$0_arc_scene_Element_R_boolean(jcontext ctx, jobject param0);

#ifdef __cplusplus
}
#endif

#endif
