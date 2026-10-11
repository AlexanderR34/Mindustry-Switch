#ifndef HEADER_mindustry_ui_dialogs_ColorPicker$8
#define HEADER_mindustry_ui_dialogs_ColorPicker$8

#include "Clearwing.h"
#include "arc/scene/ui/Slider.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct mindustry_ui_dialogs_ColorPicker$8 {
	arc_scene_ui_Slider parent;
	jref F_this$0;
} mindustry_ui_dialogs_ColorPicker$8;

extern Class class_mindustry_ui_dialogs_ColorPicker$8;


#define VTABLE_mindustry_ui_dialogs_ColorPicker$8_hashCode_R_int 0
typedef jint (*func_mindustry_ui_dialogs_ColorPicker$8_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_mindustry_ui_dialogs_ColorPicker$8_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_mindustry_ui_dialogs_ColorPicker$8_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_ui_dialogs_ColorPicker$8_clone_R_java_lang_Object 2
typedef jobject (*func_mindustry_ui_dialogs_ColorPicker$8_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_mindustry_ui_dialogs_ColorPicker$8_getClass_R_java_lang_Class 3
typedef jobject (*func_mindustry_ui_dialogs_ColorPicker$8_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_mindustry_ui_dialogs_ColorPicker$8_toString_R_java_lang_String 4
typedef jobject (*func_mindustry_ui_dialogs_ColorPicker$8_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_mindustry_ui_dialogs_ColorPicker$8_finalize 5
typedef void (*func_mindustry_ui_dialogs_ColorPicker$8_finalize)(jcontext ctx, jobject self);
#define VTABLE_mindustry_ui_dialogs_ColorPicker$8_notify 6
typedef void (*func_mindustry_ui_dialogs_ColorPicker$8_notify)(jcontext ctx, jobject self);
#define VTABLE_mindustry_ui_dialogs_ColorPicker$8_notifyAll 7
typedef void (*func_mindustry_ui_dialogs_ColorPicker$8_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_mindustry_ui_dialogs_ColorPicker$8_wait 8
typedef void (*func_mindustry_ui_dialogs_ColorPicker$8_wait)(jcontext ctx, jobject self);
#define VTABLE_mindustry_ui_dialogs_ColorPicker$8_wait_long 9
typedef void (*func_mindustry_ui_dialogs_ColorPicker$8_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_mindustry_ui_dialogs_ColorPicker$8_wait_long_int 10
typedef void (*func_mindustry_ui_dialogs_ColorPicker$8_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);
#define VTABLE_mindustry_ui_dialogs_ColorPicker$8_draw 11
typedef void (*func_mindustry_ui_dialogs_ColorPicker$8_draw)(jcontext ctx, jobject self);
#define VTABLE_mindustry_ui_dialogs_ColorPicker$8_act_float 12
typedef void (*func_mindustry_ui_dialogs_ColorPicker$8_act_float)(jcontext ctx, jobject self, jfloat param0);
#define VTABLE_mindustry_ui_dialogs_ColorPicker$8_updateVisibility 13
typedef void (*func_mindustry_ui_dialogs_ColorPicker$8_updateVisibility)(jcontext ctx, jobject self);
#define VTABLE_mindustry_ui_dialogs_ColorPicker$8_hasMouse_R_boolean 14
typedef jbool (*func_mindustry_ui_dialogs_ColorPicker$8_hasMouse_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_mindustry_ui_dialogs_ColorPicker$8_hasKeyboard_R_boolean 15
typedef jbool (*func_mindustry_ui_dialogs_ColorPicker$8_hasKeyboard_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_mindustry_ui_dialogs_ColorPicker$8_hasScroll_R_boolean 16
typedef jbool (*func_mindustry_ui_dialogs_ColorPicker$8_hasScroll_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_mindustry_ui_dialogs_ColorPicker$8_requestKeyboard 17
typedef void (*func_mindustry_ui_dialogs_ColorPicker$8_requestKeyboard)(jcontext ctx, jobject self);
#define VTABLE_mindustry_ui_dialogs_ColorPicker$8_requestScroll 18
typedef void (*func_mindustry_ui_dialogs_ColorPicker$8_requestScroll)(jcontext ctx, jobject self);
#define VTABLE_mindustry_ui_dialogs_ColorPicker$8_fire_arc_scene_event_SceneEvent_R_boolean 19
typedef jbool (*func_mindustry_ui_dialogs_ColorPicker$8_fire_arc_scene_event_SceneEvent_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_ui_dialogs_ColorPicker$8_notify_arc_scene_event_SceneEvent_boolean_R_boolean 20
typedef jbool (*func_mindustry_ui_dialogs_ColorPicker$8_notify_arc_scene_event_SceneEvent_boolean_R_boolean)(jcontext ctx, jobject self, jobject param0, jbool param1);
#define VTABLE_mindustry_ui_dialogs_ColorPicker$8_hit_float_float_boolean_R_arc_scene_Element 21
typedef jobject (*func_mindustry_ui_dialogs_ColorPicker$8_hit_float_float_boolean_R_arc_scene_Element)(jcontext ctx, jobject self, jfloat param0, jfloat param1, jbool param2);
#define VTABLE_mindustry_ui_dialogs_ColorPicker$8_remove_R_boolean 22
typedef jbool (*func_mindustry_ui_dialogs_ColorPicker$8_remove_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_mindustry_ui_dialogs_ColorPicker$8_dragged_arc_func_Floatc2 23
typedef void (*func_mindustry_ui_dialogs_ColorPicker$8_dragged_arc_func_Floatc2)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_ui_dialogs_ColorPicker$8_scrolled_arc_func_Floatc 24
typedef void (*func_mindustry_ui_dialogs_ColorPicker$8_scrolled_arc_func_Floatc)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_ui_dialogs_ColorPicker$8_addListener_arc_scene_event_EventListener_R_boolean 25
typedef jbool (*func_mindustry_ui_dialogs_ColorPicker$8_addListener_arc_scene_event_EventListener_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_ui_dialogs_ColorPicker$8_removeListener_arc_scene_event_EventListener_R_boolean 26
typedef jbool (*func_mindustry_ui_dialogs_ColorPicker$8_removeListener_arc_scene_event_EventListener_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_ui_dialogs_ColorPicker$8_getListeners_R_arc_struct_Seq 27
typedef jobject (*func_mindustry_ui_dialogs_ColorPicker$8_getListeners_R_arc_struct_Seq)(jcontext ctx, jobject self);
#define VTABLE_mindustry_ui_dialogs_ColorPicker$8_addCaptureListener_arc_scene_event_EventListener_R_boolean 28
typedef jbool (*func_mindustry_ui_dialogs_ColorPicker$8_addCaptureListener_arc_scene_event_EventListener_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_ui_dialogs_ColorPicker$8_removeCaptureListener_arc_scene_event_EventListener_R_boolean 29
typedef jbool (*func_mindustry_ui_dialogs_ColorPicker$8_removeCaptureListener_arc_scene_event_EventListener_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_ui_dialogs_ColorPicker$8_getCaptureListeners_R_arc_struct_Seq 30
typedef jobject (*func_mindustry_ui_dialogs_ColorPicker$8_getCaptureListeners_R_arc_struct_Seq)(jcontext ctx, jobject self);
#define VTABLE_mindustry_ui_dialogs_ColorPicker$8_addAction_arc_scene_Action 31
typedef void (*func_mindustry_ui_dialogs_ColorPicker$8_addAction_arc_scene_Action)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_ui_dialogs_ColorPicker$8_actions_Array1_arc_scene_Action 32
typedef void (*func_mindustry_ui_dialogs_ColorPicker$8_actions_Array1_arc_scene_Action)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_ui_dialogs_ColorPicker$8_removeAction_arc_scene_Action 33
typedef void (*func_mindustry_ui_dialogs_ColorPicker$8_removeAction_arc_scene_Action)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_ui_dialogs_ColorPicker$8_getActions_R_arc_struct_Seq 34
typedef jobject (*func_mindustry_ui_dialogs_ColorPicker$8_getActions_R_arc_struct_Seq)(jcontext ctx, jobject self);
#define VTABLE_mindustry_ui_dialogs_ColorPicker$8_hasActions_R_boolean 35
typedef jbool (*func_mindustry_ui_dialogs_ColorPicker$8_hasActions_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_mindustry_ui_dialogs_ColorPicker$8_clearActions 36
typedef void (*func_mindustry_ui_dialogs_ColorPicker$8_clearActions)(jcontext ctx, jobject self);
#define VTABLE_mindustry_ui_dialogs_ColorPicker$8_clearListeners 37
typedef void (*func_mindustry_ui_dialogs_ColorPicker$8_clearListeners)(jcontext ctx, jobject self);
#define VTABLE_mindustry_ui_dialogs_ColorPicker$8_clear 38
typedef void (*func_mindustry_ui_dialogs_ColorPicker$8_clear)(jcontext ctx, jobject self);
#define VTABLE_mindustry_ui_dialogs_ColorPicker$8_getScene_R_arc_scene_Scene 39
typedef jobject (*func_mindustry_ui_dialogs_ColorPicker$8_getScene_R_arc_scene_Scene)(jcontext ctx, jobject self);
#define VTABLE_mindustry_ui_dialogs_ColorPicker$8_setScene_arc_scene_Scene 40
typedef void (*func_mindustry_ui_dialogs_ColorPicker$8_setScene_arc_scene_Scene)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_ui_dialogs_ColorPicker$8_isDescendantOf_arc_func_Boolf_R_boolean 41
typedef jbool (*func_mindustry_ui_dialogs_ColorPicker$8_isDescendantOf_arc_func_Boolf_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_ui_dialogs_ColorPicker$8_isDescendantOf_arc_scene_Element_R_boolean 42
typedef jbool (*func_mindustry_ui_dialogs_ColorPicker$8_isDescendantOf_arc_scene_Element_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_ui_dialogs_ColorPicker$8_isAscendantOf_arc_scene_Element_R_boolean 43
typedef jbool (*func_mindustry_ui_dialogs_ColorPicker$8_isAscendantOf_arc_scene_Element_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_ui_dialogs_ColorPicker$8_hasParent_R_boolean 44
typedef jbool (*func_mindustry_ui_dialogs_ColorPicker$8_hasParent_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_mindustry_ui_dialogs_ColorPicker$8_isTouchable_R_boolean 45
typedef jbool (*func_mindustry_ui_dialogs_ColorPicker$8_isTouchable_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_mindustry_ui_dialogs_ColorPicker$8_getX_int_R_float 46
typedef jfloat (*func_mindustry_ui_dialogs_ColorPicker$8_getX_int_R_float)(jcontext ctx, jobject self, jint param0);
#define VTABLE_mindustry_ui_dialogs_ColorPicker$8_getY_int_R_float 47
typedef jfloat (*func_mindustry_ui_dialogs_ColorPicker$8_getY_int_R_float)(jcontext ctx, jobject self, jint param0);
#define VTABLE_mindustry_ui_dialogs_ColorPicker$8_setPosition_float_float 48
typedef void (*func_mindustry_ui_dialogs_ColorPicker$8_setPosition_float_float)(jcontext ctx, jobject self, jfloat param0, jfloat param1);
#define VTABLE_mindustry_ui_dialogs_ColorPicker$8_setPosition_float_float_int 49
typedef void (*func_mindustry_ui_dialogs_ColorPicker$8_setPosition_float_float_int)(jcontext ctx, jobject self, jfloat param0, jfloat param1, jint param2);
#define VTABLE_mindustry_ui_dialogs_ColorPicker$8_moveBy_float_float 50
typedef void (*func_mindustry_ui_dialogs_ColorPicker$8_moveBy_float_float)(jcontext ctx, jobject self, jfloat param0, jfloat param1);
#define VTABLE_mindustry_ui_dialogs_ColorPicker$8_getWidth_R_float 51
typedef jfloat (*func_mindustry_ui_dialogs_ColorPicker$8_getWidth_R_float)(jcontext ctx, jobject self);
#define VTABLE_mindustry_ui_dialogs_ColorPicker$8_setWidth_float 52
typedef void (*func_mindustry_ui_dialogs_ColorPicker$8_setWidth_float)(jcontext ctx, jobject self, jfloat param0);
#define VTABLE_mindustry_ui_dialogs_ColorPicker$8_getHeight_R_float 53
typedef jfloat (*func_mindustry_ui_dialogs_ColorPicker$8_getHeight_R_float)(jcontext ctx, jobject self);
#define VTABLE_mindustry_ui_dialogs_ColorPicker$8_setHeight_float 54
typedef void (*func_mindustry_ui_dialogs_ColorPicker$8_setHeight_float)(jcontext ctx, jobject self, jfloat param0);
#define VTABLE_mindustry_ui_dialogs_ColorPicker$8_getTop_R_float 55
typedef jfloat (*func_mindustry_ui_dialogs_ColorPicker$8_getTop_R_float)(jcontext ctx, jobject self);
#define VTABLE_mindustry_ui_dialogs_ColorPicker$8_getRight_R_float 56
typedef jfloat (*func_mindustry_ui_dialogs_ColorPicker$8_getRight_R_float)(jcontext ctx, jobject self);
#define VTABLE_mindustry_ui_dialogs_ColorPicker$8_sizeChanged 57
typedef void (*func_mindustry_ui_dialogs_ColorPicker$8_sizeChanged)(jcontext ctx, jobject self);
#define VTABLE_mindustry_ui_dialogs_ColorPicker$8_rotationChanged 58
typedef void (*func_mindustry_ui_dialogs_ColorPicker$8_rotationChanged)(jcontext ctx, jobject self);
#define VTABLE_mindustry_ui_dialogs_ColorPicker$8_setSize_float 59
typedef void (*func_mindustry_ui_dialogs_ColorPicker$8_setSize_float)(jcontext ctx, jobject self, jfloat param0);
#define VTABLE_mindustry_ui_dialogs_ColorPicker$8_setSize_float_float 60
typedef void (*func_mindustry_ui_dialogs_ColorPicker$8_setSize_float_float)(jcontext ctx, jobject self, jfloat param0, jfloat param1);
#define VTABLE_mindustry_ui_dialogs_ColorPicker$8_sizeBy_float 61
typedef void (*func_mindustry_ui_dialogs_ColorPicker$8_sizeBy_float)(jcontext ctx, jobject self, jfloat param0);
#define VTABLE_mindustry_ui_dialogs_ColorPicker$8_sizeBy_float_float 62
typedef void (*func_mindustry_ui_dialogs_ColorPicker$8_sizeBy_float_float)(jcontext ctx, jobject self, jfloat param0, jfloat param1);
#define VTABLE_mindustry_ui_dialogs_ColorPicker$8_setBounds_float_float_float_float 63
typedef void (*func_mindustry_ui_dialogs_ColorPicker$8_setBounds_float_float_float_float)(jcontext ctx, jobject self, jfloat param0, jfloat param1, jfloat param2, jfloat param3);
#define VTABLE_mindustry_ui_dialogs_ColorPicker$8_setOrigin_float_float 64
typedef void (*func_mindustry_ui_dialogs_ColorPicker$8_setOrigin_float_float)(jcontext ctx, jobject self, jfloat param0, jfloat param1);
#define VTABLE_mindustry_ui_dialogs_ColorPicker$8_setOrigin_int 65
typedef void (*func_mindustry_ui_dialogs_ColorPicker$8_setOrigin_int)(jcontext ctx, jobject self, jint param0);
#define VTABLE_mindustry_ui_dialogs_ColorPicker$8_setScale_float 66
typedef void (*func_mindustry_ui_dialogs_ColorPicker$8_setScale_float)(jcontext ctx, jobject self, jfloat param0);
#define VTABLE_mindustry_ui_dialogs_ColorPicker$8_setScale_float_float 67
typedef void (*func_mindustry_ui_dialogs_ColorPicker$8_setScale_float_float)(jcontext ctx, jobject self, jfloat param0, jfloat param1);
#define VTABLE_mindustry_ui_dialogs_ColorPicker$8_scaleBy_float 68
typedef void (*func_mindustry_ui_dialogs_ColorPicker$8_scaleBy_float)(jcontext ctx, jobject self, jfloat param0);
#define VTABLE_mindustry_ui_dialogs_ColorPicker$8_scaleBy_float_float 69
typedef void (*func_mindustry_ui_dialogs_ColorPicker$8_scaleBy_float_float)(jcontext ctx, jobject self, jfloat param0, jfloat param1);
#define VTABLE_mindustry_ui_dialogs_ColorPicker$8_getRotation_R_float 70
typedef jfloat (*func_mindustry_ui_dialogs_ColorPicker$8_getRotation_R_float)(jcontext ctx, jobject self);
#define VTABLE_mindustry_ui_dialogs_ColorPicker$8_setRotation_float 71
typedef void (*func_mindustry_ui_dialogs_ColorPicker$8_setRotation_float)(jcontext ctx, jobject self, jfloat param0);
#define VTABLE_mindustry_ui_dialogs_ColorPicker$8_setRotationOrigin_float_int 72
typedef void (*func_mindustry_ui_dialogs_ColorPicker$8_setRotationOrigin_float_int)(jcontext ctx, jobject self, jfloat param0, jint param1);
#define VTABLE_mindustry_ui_dialogs_ColorPicker$8_rotateBy_float 73
typedef void (*func_mindustry_ui_dialogs_ColorPicker$8_rotateBy_float)(jcontext ctx, jobject self, jfloat param0);
#define VTABLE_mindustry_ui_dialogs_ColorPicker$8_setColor_float_float_float_float 74
typedef void (*func_mindustry_ui_dialogs_ColorPicker$8_setColor_float_float_float_float)(jcontext ctx, jobject self, jfloat param0, jfloat param1, jfloat param2, jfloat param3);
#define VTABLE_mindustry_ui_dialogs_ColorPicker$8_setColor_arc_graphics_Color 75
typedef void (*func_mindustry_ui_dialogs_ColorPicker$8_setColor_arc_graphics_Color)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_ui_dialogs_ColorPicker$8_toFront 76
typedef void (*func_mindustry_ui_dialogs_ColorPicker$8_toFront)(jcontext ctx, jobject self);
#define VTABLE_mindustry_ui_dialogs_ColorPicker$8_toBack 77
typedef void (*func_mindustry_ui_dialogs_ColorPicker$8_toBack)(jcontext ctx, jobject self);
#define VTABLE_mindustry_ui_dialogs_ColorPicker$8_getZIndex_R_int 78
typedef jint (*func_mindustry_ui_dialogs_ColorPicker$8_getZIndex_R_int)(jcontext ctx, jobject self);
#define VTABLE_mindustry_ui_dialogs_ColorPicker$8_setZIndex_int 79
typedef void (*func_mindustry_ui_dialogs_ColorPicker$8_setZIndex_int)(jcontext ctx, jobject self, jint param0);
#define VTABLE_mindustry_ui_dialogs_ColorPicker$8_clipBegin_R_boolean 80
typedef jbool (*func_mindustry_ui_dialogs_ColorPicker$8_clipBegin_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_mindustry_ui_dialogs_ColorPicker$8_clipBegin_float_float_float_float_R_boolean 81
typedef jbool (*func_mindustry_ui_dialogs_ColorPicker$8_clipBegin_float_float_float_float_R_boolean)(jcontext ctx, jobject self, jfloat param0, jfloat param1, jfloat param2, jfloat param3);
#define VTABLE_mindustry_ui_dialogs_ColorPicker$8_clipEnd 82
typedef void (*func_mindustry_ui_dialogs_ColorPicker$8_clipEnd)(jcontext ctx, jobject self);
#define VTABLE_mindustry_ui_dialogs_ColorPicker$8_screenToLocalCoordinates_arc_math_geom_Vec2_R_arc_math_geom_Vec2 83
typedef jobject (*func_mindustry_ui_dialogs_ColorPicker$8_screenToLocalCoordinates_arc_math_geom_Vec2_R_arc_math_geom_Vec2)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_ui_dialogs_ColorPicker$8_stageToLocalCoordinates_arc_math_geom_Vec2_R_arc_math_geom_Vec2 84
typedef jobject (*func_mindustry_ui_dialogs_ColorPicker$8_stageToLocalCoordinates_arc_math_geom_Vec2_R_arc_math_geom_Vec2)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_ui_dialogs_ColorPicker$8_localToStageCoordinates_arc_math_geom_Vec2_R_arc_math_geom_Vec2 85
typedef jobject (*func_mindustry_ui_dialogs_ColorPicker$8_localToStageCoordinates_arc_math_geom_Vec2_R_arc_math_geom_Vec2)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_ui_dialogs_ColorPicker$8_localToParentCoordinates_arc_math_geom_Vec2_R_arc_math_geom_Vec2 86
typedef jobject (*func_mindustry_ui_dialogs_ColorPicker$8_localToParentCoordinates_arc_math_geom_Vec2_R_arc_math_geom_Vec2)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_ui_dialogs_ColorPicker$8_localToAscendantCoordinates_arc_scene_Element_arc_math_geom_Vec2_R_arc_math_geom_Vec2 87
typedef jobject (*func_mindustry_ui_dialogs_ColorPicker$8_localToAscendantCoordinates_arc_scene_Element_arc_math_geom_Vec2_R_arc_math_geom_Vec2)(jcontext ctx, jobject self, jobject param0, jobject param1);
#define VTABLE_mindustry_ui_dialogs_ColorPicker$8_parentToLocalCoordinates_arc_math_geom_Vec2_R_arc_math_geom_Vec2 88
typedef jobject (*func_mindustry_ui_dialogs_ColorPicker$8_parentToLocalCoordinates_arc_math_geom_Vec2_R_arc_math_geom_Vec2)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_ui_dialogs_ColorPicker$8_getMinWidth_R_float 89
typedef jfloat (*func_mindustry_ui_dialogs_ColorPicker$8_getMinWidth_R_float)(jcontext ctx, jobject self);
#define VTABLE_mindustry_ui_dialogs_ColorPicker$8_getMinHeight_R_float 90
typedef jfloat (*func_mindustry_ui_dialogs_ColorPicker$8_getMinHeight_R_float)(jcontext ctx, jobject self);
#define VTABLE_mindustry_ui_dialogs_ColorPicker$8_getPrefWidth_R_float 91
typedef jfloat (*func_mindustry_ui_dialogs_ColorPicker$8_getPrefWidth_R_float)(jcontext ctx, jobject self);
#define VTABLE_mindustry_ui_dialogs_ColorPicker$8_getPrefHeight_R_float 92
typedef jfloat (*func_mindustry_ui_dialogs_ColorPicker$8_getPrefHeight_R_float)(jcontext ctx, jobject self);
#define VTABLE_mindustry_ui_dialogs_ColorPicker$8_getMaxWidth_R_float 93
typedef jfloat (*func_mindustry_ui_dialogs_ColorPicker$8_getMaxWidth_R_float)(jcontext ctx, jobject self);
#define VTABLE_mindustry_ui_dialogs_ColorPicker$8_getMaxHeight_R_float 94
typedef jfloat (*func_mindustry_ui_dialogs_ColorPicker$8_getMaxHeight_R_float)(jcontext ctx, jobject self);
#define VTABLE_mindustry_ui_dialogs_ColorPicker$8_setLayoutEnabled_boolean 95
typedef void (*func_mindustry_ui_dialogs_ColorPicker$8_setLayoutEnabled_boolean)(jcontext ctx, jobject self, jbool param0);
#define VTABLE_mindustry_ui_dialogs_ColorPicker$8_validate 96
typedef void (*func_mindustry_ui_dialogs_ColorPicker$8_validate)(jcontext ctx, jobject self);
#define VTABLE_mindustry_ui_dialogs_ColorPicker$8_needsLayout_R_boolean 97
typedef jbool (*func_mindustry_ui_dialogs_ColorPicker$8_needsLayout_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_mindustry_ui_dialogs_ColorPicker$8_invalidate 98
typedef void (*func_mindustry_ui_dialogs_ColorPicker$8_invalidate)(jcontext ctx, jobject self);
#define VTABLE_mindustry_ui_dialogs_ColorPicker$8_invalidateHierarchy 99
typedef void (*func_mindustry_ui_dialogs_ColorPicker$8_invalidateHierarchy)(jcontext ctx, jobject self);
#define VTABLE_mindustry_ui_dialogs_ColorPicker$8_pack 100
typedef void (*func_mindustry_ui_dialogs_ColorPicker$8_pack)(jcontext ctx, jobject self);
#define VTABLE_mindustry_ui_dialogs_ColorPicker$8_setFillParent_boolean 101
typedef void (*func_mindustry_ui_dialogs_ColorPicker$8_setFillParent_boolean)(jcontext ctx, jobject self, jbool param0);
#define VTABLE_mindustry_ui_dialogs_ColorPicker$8_layout 102
typedef void (*func_mindustry_ui_dialogs_ColorPicker$8_layout)(jcontext ctx, jobject self);
#define VTABLE_mindustry_ui_dialogs_ColorPicker$8_keepInStage 103
typedef void (*func_mindustry_ui_dialogs_ColorPicker$8_keepInStage)(jcontext ctx, jobject self);
#define VTABLE_mindustry_ui_dialogs_ColorPicker$8_setTranslation_float_float 104
typedef void (*func_mindustry_ui_dialogs_ColorPicker$8_setTranslation_float_float)(jcontext ctx, jobject self, jfloat param0, jfloat param1);
#define VTABLE_mindustry_ui_dialogs_ColorPicker$8_keyDown_arc_input_KeyCode_java_lang_Runnable 105
typedef void (*func_mindustry_ui_dialogs_ColorPicker$8_keyDown_arc_input_KeyCode_java_lang_Runnable)(jcontext ctx, jobject self, jobject param0, jobject param1);
#define VTABLE_mindustry_ui_dialogs_ColorPicker$8_keyDown_arc_func_Cons 106
typedef void (*func_mindustry_ui_dialogs_ColorPicker$8_keyDown_arc_func_Cons)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_ui_dialogs_ColorPicker$8_fireClick 107
typedef void (*func_mindustry_ui_dialogs_ColorPicker$8_fireClick)(jcontext ctx, jobject self);
#define VTABLE_mindustry_ui_dialogs_ColorPicker$8_clicked_java_lang_Runnable_R_arc_scene_event_ClickListener 108
typedef jobject (*func_mindustry_ui_dialogs_ColorPicker$8_clicked_java_lang_Runnable_R_arc_scene_event_ClickListener)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_ui_dialogs_ColorPicker$8_clicked_arc_input_KeyCode_java_lang_Runnable_R_arc_scene_event_ClickListener 109
typedef jobject (*func_mindustry_ui_dialogs_ColorPicker$8_clicked_arc_input_KeyCode_java_lang_Runnable_R_arc_scene_event_ClickListener)(jcontext ctx, jobject self, jobject param0, jobject param1);
#define VTABLE_mindustry_ui_dialogs_ColorPicker$8_clicked_arc_func_Cons_java_lang_Runnable_R_arc_scene_event_ClickListener 110
typedef jobject (*func_mindustry_ui_dialogs_ColorPicker$8_clicked_arc_func_Cons_java_lang_Runnable_R_arc_scene_event_ClickListener)(jcontext ctx, jobject self, jobject param0, jobject param1);
#define VTABLE_mindustry_ui_dialogs_ColorPicker$8_clicked_arc_func_Cons_arc_func_Cons_R_arc_scene_event_ClickListener 111
typedef jobject (*func_mindustry_ui_dialogs_ColorPicker$8_clicked_arc_func_Cons_arc_func_Cons_R_arc_scene_event_ClickListener)(jcontext ctx, jobject self, jobject param0, jobject param1);
#define VTABLE_mindustry_ui_dialogs_ColorPicker$8_tapped_java_lang_Runnable_R_arc_scene_event_InputListener 112
typedef jobject (*func_mindustry_ui_dialogs_ColorPicker$8_tapped_java_lang_Runnable_R_arc_scene_event_InputListener)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_ui_dialogs_ColorPicker$8_hovered_java_lang_Runnable 113
typedef void (*func_mindustry_ui_dialogs_ColorPicker$8_hovered_java_lang_Runnable)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_ui_dialogs_ColorPicker$8_exited_java_lang_Runnable 114
typedef void (*func_mindustry_ui_dialogs_ColorPicker$8_exited_java_lang_Runnable)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_ui_dialogs_ColorPicker$8_released_java_lang_Runnable 115
typedef void (*func_mindustry_ui_dialogs_ColorPicker$8_released_java_lang_Runnable)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_ui_dialogs_ColorPicker$8_change 116
typedef void (*func_mindustry_ui_dialogs_ColorPicker$8_change)(jcontext ctx, jobject self);
#define VTABLE_mindustry_ui_dialogs_ColorPicker$8_changed_java_lang_Runnable 117
typedef void (*func_mindustry_ui_dialogs_ColorPicker$8_changed_java_lang_Runnable)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_ui_dialogs_ColorPicker$8_update_java_lang_Runnable_R_arc_scene_Element 118
typedef jobject (*func_mindustry_ui_dialogs_ColorPicker$8_update_java_lang_Runnable_R_arc_scene_Element)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_ui_dialogs_ColorPicker$8_visible_arc_func_Boolp_R_arc_scene_Element 119
typedef jobject (*func_mindustry_ui_dialogs_ColorPicker$8_visible_arc_func_Boolp_R_arc_scene_Element)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_ui_dialogs_ColorPicker$8_touchable_arc_func_Prov 120
typedef void (*func_mindustry_ui_dialogs_ColorPicker$8_touchable_arc_func_Prov)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_ui_dialogs_ColorPicker$8_isDisabled_R_boolean 121
typedef jbool (*func_mindustry_ui_dialogs_ColorPicker$8_isDisabled_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_mindustry_ui_dialogs_ColorPicker$8_setDisabled_boolean 122
typedef void (*func_mindustry_ui_dialogs_ColorPicker$8_setDisabled_boolean)(jcontext ctx, jobject self, jbool param0);
#define VTABLE_mindustry_ui_dialogs_ColorPicker$8_getStyle_R_arc_scene_ui_ProgressBar$ProgressBarStyle 123
typedef jobject (*func_mindustry_ui_dialogs_ColorPicker$8_getStyle_R_arc_scene_ui_ProgressBar$ProgressBarStyle)(jcontext ctx, jobject self);
#define VTABLE_mindustry_ui_dialogs_ColorPicker$8_setStyle_arc_scene_ui_ProgressBar$ProgressBarStyle 124
typedef void (*func_mindustry_ui_dialogs_ColorPicker$8_setStyle_arc_scene_ui_ProgressBar$ProgressBarStyle)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_ui_dialogs_ColorPicker$8_getValue_R_float 125
typedef jfloat (*func_mindustry_ui_dialogs_ColorPicker$8_getValue_R_float)(jcontext ctx, jobject self);
#define VTABLE_mindustry_ui_dialogs_ColorPicker$8_getVisualValue_R_float 126
typedef jfloat (*func_mindustry_ui_dialogs_ColorPicker$8_getVisualValue_R_float)(jcontext ctx, jobject self);
#define VTABLE_mindustry_ui_dialogs_ColorPicker$8_getPercent_R_float 127
typedef jfloat (*func_mindustry_ui_dialogs_ColorPicker$8_getPercent_R_float)(jcontext ctx, jobject self);
#define VTABLE_mindustry_ui_dialogs_ColorPicker$8_getVisualPercent_R_float 128
typedef jfloat (*func_mindustry_ui_dialogs_ColorPicker$8_getVisualPercent_R_float)(jcontext ctx, jobject self);
#define VTABLE_mindustry_ui_dialogs_ColorPicker$8_getKnobDrawable_R_arc_scene_style_Drawable 129
typedef jobject (*func_mindustry_ui_dialogs_ColorPicker$8_getKnobDrawable_R_arc_scene_style_Drawable)(jcontext ctx, jobject self);
#define VTABLE_mindustry_ui_dialogs_ColorPicker$8_getKnobPosition_R_float 130
typedef jfloat (*func_mindustry_ui_dialogs_ColorPicker$8_getKnobPosition_R_float)(jcontext ctx, jobject self);
#define VTABLE_mindustry_ui_dialogs_ColorPicker$8_setValue_float_R_boolean 131
typedef jbool (*func_mindustry_ui_dialogs_ColorPicker$8_setValue_float_R_boolean)(jcontext ctx, jobject self, jfloat param0);
#define VTABLE_mindustry_ui_dialogs_ColorPicker$8_setValue_float_boolean_R_boolean 132
typedef jbool (*func_mindustry_ui_dialogs_ColorPicker$8_setValue_float_boolean_R_boolean)(jcontext ctx, jobject self, jfloat param0, jbool param1);
#define VTABLE_mindustry_ui_dialogs_ColorPicker$8_clamp_float_R_float 133
typedef jfloat (*func_mindustry_ui_dialogs_ColorPicker$8_clamp_float_R_float)(jcontext ctx, jobject self, jfloat param0);
#define VTABLE_mindustry_ui_dialogs_ColorPicker$8_setRange_float_float 134
typedef void (*func_mindustry_ui_dialogs_ColorPicker$8_setRange_float_float)(jcontext ctx, jobject self, jfloat param0, jfloat param1);
#define VTABLE_mindustry_ui_dialogs_ColorPicker$8_getMinValue_R_float 135
typedef jfloat (*func_mindustry_ui_dialogs_ColorPicker$8_getMinValue_R_float)(jcontext ctx, jobject self);
#define VTABLE_mindustry_ui_dialogs_ColorPicker$8_getMaxValue_R_float 136
typedef jfloat (*func_mindustry_ui_dialogs_ColorPicker$8_getMaxValue_R_float)(jcontext ctx, jobject self);
#define VTABLE_mindustry_ui_dialogs_ColorPicker$8_getStepSize_R_float 137
typedef jfloat (*func_mindustry_ui_dialogs_ColorPicker$8_getStepSize_R_float)(jcontext ctx, jobject self);
#define VTABLE_mindustry_ui_dialogs_ColorPicker$8_setStepSize_float 138
typedef void (*func_mindustry_ui_dialogs_ColorPicker$8_setStepSize_float)(jcontext ctx, jobject self, jfloat param0);
#define VTABLE_mindustry_ui_dialogs_ColorPicker$8_setAnimateDuration_float 139
typedef void (*func_mindustry_ui_dialogs_ColorPicker$8_setAnimateDuration_float)(jcontext ctx, jobject self, jfloat param0);
#define VTABLE_mindustry_ui_dialogs_ColorPicker$8_setAnimateInterpolation_arc_math_Interp 140
typedef void (*func_mindustry_ui_dialogs_ColorPicker$8_setAnimateInterpolation_arc_math_Interp)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_ui_dialogs_ColorPicker$8_setVisualInterpolation_arc_math_Interp 141
typedef void (*func_mindustry_ui_dialogs_ColorPicker$8_setVisualInterpolation_arc_math_Interp)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_ui_dialogs_ColorPicker$8_setRound_boolean 142
typedef void (*func_mindustry_ui_dialogs_ColorPicker$8_setRound_boolean)(jcontext ctx, jobject self, jbool param0);
#define VTABLE_mindustry_ui_dialogs_ColorPicker$8_isVertical_R_boolean 143
typedef jbool (*func_mindustry_ui_dialogs_ColorPicker$8_isVertical_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_mindustry_ui_dialogs_ColorPicker$8_getStyle_R_arc_scene_ui_Slider$SliderStyle 144
typedef jobject (*func_mindustry_ui_dialogs_ColorPicker$8_getStyle_R_arc_scene_ui_Slider$SliderStyle)(jcontext ctx, jobject self);
#define VTABLE_mindustry_ui_dialogs_ColorPicker$8_setStyle_arc_scene_ui_Slider$SliderStyle 145
typedef void (*func_mindustry_ui_dialogs_ColorPicker$8_setStyle_arc_scene_ui_Slider$SliderStyle)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_ui_dialogs_ColorPicker$8_calculatePositionAndValue_float_float_R_boolean 146
typedef jbool (*func_mindustry_ui_dialogs_ColorPicker$8_calculatePositionAndValue_float_float_R_boolean)(jcontext ctx, jobject self, jfloat param0, jfloat param1);
#define VTABLE_mindustry_ui_dialogs_ColorPicker$8_moved_arc_func_Floatc 147
typedef void (*func_mindustry_ui_dialogs_ColorPicker$8_moved_arc_func_Floatc)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_ui_dialogs_ColorPicker$8_snap_float_R_float 148
typedef jfloat (*func_mindustry_ui_dialogs_ColorPicker$8_snap_float_R_float)(jcontext ctx, jobject self, jfloat param0);
#define VTABLE_mindustry_ui_dialogs_ColorPicker$8_setSnapToValues_Array1_float_float 149
typedef void (*func_mindustry_ui_dialogs_ColorPicker$8_setSnapToValues_Array1_float_float)(jcontext ctx, jobject self, jobject param0, jfloat param1);
#define VTABLE_mindustry_ui_dialogs_ColorPicker$8_isDragging_R_boolean 150
typedef jbool (*func_mindustry_ui_dialogs_ColorPicker$8_isDragging_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_mindustry_ui_dialogs_ColorPicker$8_setVisualInterpolationInverse_arc_math_Interp 151
typedef void (*func_mindustry_ui_dialogs_ColorPicker$8_setVisualInterpolationInverse_arc_math_Interp)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_ui_dialogs_ColorPicker$8_lambda$moved$0_arc_func_Floatc 152
typedef void (*func_mindustry_ui_dialogs_ColorPicker$8_lambda$moved$0_arc_func_Floatc)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_ui_dialogs_ColorPicker$8_lambda$new$0_float 153
typedef void (*func_mindustry_ui_dialogs_ColorPicker$8_lambda$new$0_float)(jcontext ctx, jobject self, jfloat param0);

void mark_mindustry_ui_dialogs_ColorPicker$8(jobject object, jint mark, jint depth);
void clinit_mindustry_ui_dialogs_ColorPicker$8(jcontext ctx);
void init_mindustry_ui_dialogs_ColorPicker$8_mindustry_ui_dialogs_ColorPicker_float_float_float_boolean(jcontext ctx, jobject self, jobject param0, jfloat param1, jfloat param2, jfloat param3, jbool param4);
void M_mindustry_ui_dialogs_ColorPicker$8_lambda$new$0_float(jcontext ctx, jobject self, jfloat param0);

#ifdef __cplusplus
}
#endif

#endif
