#ifndef HEADER_mindustry_ui_fragments_HudFragment$4
#define HEADER_mindustry_ui_fragments_HudFragment$4

#include "Clearwing.h"
#include "arc/scene/Element.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct mindustry_ui_fragments_HudFragment$4 {
	arc_scene_Element parent;
	jref F_this$0;
} mindustry_ui_fragments_HudFragment$4;

extern Class class_mindustry_ui_fragments_HudFragment$4;


#define VTABLE_mindustry_ui_fragments_HudFragment$4_hashCode_R_int 0
typedef jint (*func_mindustry_ui_fragments_HudFragment$4_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_mindustry_ui_fragments_HudFragment$4_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_mindustry_ui_fragments_HudFragment$4_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_ui_fragments_HudFragment$4_clone_R_java_lang_Object 2
typedef jobject (*func_mindustry_ui_fragments_HudFragment$4_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_mindustry_ui_fragments_HudFragment$4_getClass_R_java_lang_Class 3
typedef jobject (*func_mindustry_ui_fragments_HudFragment$4_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_mindustry_ui_fragments_HudFragment$4_toString_R_java_lang_String 4
typedef jobject (*func_mindustry_ui_fragments_HudFragment$4_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_mindustry_ui_fragments_HudFragment$4_finalize 5
typedef void (*func_mindustry_ui_fragments_HudFragment$4_finalize)(jcontext ctx, jobject self);
#define VTABLE_mindustry_ui_fragments_HudFragment$4_notify 6
typedef void (*func_mindustry_ui_fragments_HudFragment$4_notify)(jcontext ctx, jobject self);
#define VTABLE_mindustry_ui_fragments_HudFragment$4_notifyAll 7
typedef void (*func_mindustry_ui_fragments_HudFragment$4_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_mindustry_ui_fragments_HudFragment$4_wait 8
typedef void (*func_mindustry_ui_fragments_HudFragment$4_wait)(jcontext ctx, jobject self);
#define VTABLE_mindustry_ui_fragments_HudFragment$4_wait_long 9
typedef void (*func_mindustry_ui_fragments_HudFragment$4_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_mindustry_ui_fragments_HudFragment$4_wait_long_int 10
typedef void (*func_mindustry_ui_fragments_HudFragment$4_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);
#define VTABLE_mindustry_ui_fragments_HudFragment$4_draw 11
typedef void (*func_mindustry_ui_fragments_HudFragment$4_draw)(jcontext ctx, jobject self);
#define VTABLE_mindustry_ui_fragments_HudFragment$4_act_float 12
typedef void (*func_mindustry_ui_fragments_HudFragment$4_act_float)(jcontext ctx, jobject self, jfloat param0);
#define VTABLE_mindustry_ui_fragments_HudFragment$4_updateVisibility 13
typedef void (*func_mindustry_ui_fragments_HudFragment$4_updateVisibility)(jcontext ctx, jobject self);
#define VTABLE_mindustry_ui_fragments_HudFragment$4_hasMouse_R_boolean 14
typedef jbool (*func_mindustry_ui_fragments_HudFragment$4_hasMouse_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_mindustry_ui_fragments_HudFragment$4_hasKeyboard_R_boolean 15
typedef jbool (*func_mindustry_ui_fragments_HudFragment$4_hasKeyboard_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_mindustry_ui_fragments_HudFragment$4_hasScroll_R_boolean 16
typedef jbool (*func_mindustry_ui_fragments_HudFragment$4_hasScroll_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_mindustry_ui_fragments_HudFragment$4_requestKeyboard 17
typedef void (*func_mindustry_ui_fragments_HudFragment$4_requestKeyboard)(jcontext ctx, jobject self);
#define VTABLE_mindustry_ui_fragments_HudFragment$4_requestScroll 18
typedef void (*func_mindustry_ui_fragments_HudFragment$4_requestScroll)(jcontext ctx, jobject self);
#define VTABLE_mindustry_ui_fragments_HudFragment$4_fire_arc_scene_event_SceneEvent_R_boolean 19
typedef jbool (*func_mindustry_ui_fragments_HudFragment$4_fire_arc_scene_event_SceneEvent_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_ui_fragments_HudFragment$4_notify_arc_scene_event_SceneEvent_boolean_R_boolean 20
typedef jbool (*func_mindustry_ui_fragments_HudFragment$4_notify_arc_scene_event_SceneEvent_boolean_R_boolean)(jcontext ctx, jobject self, jobject param0, jbool param1);
#define VTABLE_mindustry_ui_fragments_HudFragment$4_hit_float_float_boolean_R_arc_scene_Element 21
typedef jobject (*func_mindustry_ui_fragments_HudFragment$4_hit_float_float_boolean_R_arc_scene_Element)(jcontext ctx, jobject self, jfloat param0, jfloat param1, jbool param2);
#define VTABLE_mindustry_ui_fragments_HudFragment$4_remove_R_boolean 22
typedef jbool (*func_mindustry_ui_fragments_HudFragment$4_remove_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_mindustry_ui_fragments_HudFragment$4_dragged_arc_func_Floatc2 23
typedef void (*func_mindustry_ui_fragments_HudFragment$4_dragged_arc_func_Floatc2)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_ui_fragments_HudFragment$4_scrolled_arc_func_Floatc 24
typedef void (*func_mindustry_ui_fragments_HudFragment$4_scrolled_arc_func_Floatc)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_ui_fragments_HudFragment$4_addListener_arc_scene_event_EventListener_R_boolean 25
typedef jbool (*func_mindustry_ui_fragments_HudFragment$4_addListener_arc_scene_event_EventListener_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_ui_fragments_HudFragment$4_removeListener_arc_scene_event_EventListener_R_boolean 26
typedef jbool (*func_mindustry_ui_fragments_HudFragment$4_removeListener_arc_scene_event_EventListener_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_ui_fragments_HudFragment$4_getListeners_R_arc_struct_Seq 27
typedef jobject (*func_mindustry_ui_fragments_HudFragment$4_getListeners_R_arc_struct_Seq)(jcontext ctx, jobject self);
#define VTABLE_mindustry_ui_fragments_HudFragment$4_addCaptureListener_arc_scene_event_EventListener_R_boolean 28
typedef jbool (*func_mindustry_ui_fragments_HudFragment$4_addCaptureListener_arc_scene_event_EventListener_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_ui_fragments_HudFragment$4_removeCaptureListener_arc_scene_event_EventListener_R_boolean 29
typedef jbool (*func_mindustry_ui_fragments_HudFragment$4_removeCaptureListener_arc_scene_event_EventListener_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_ui_fragments_HudFragment$4_getCaptureListeners_R_arc_struct_Seq 30
typedef jobject (*func_mindustry_ui_fragments_HudFragment$4_getCaptureListeners_R_arc_struct_Seq)(jcontext ctx, jobject self);
#define VTABLE_mindustry_ui_fragments_HudFragment$4_addAction_arc_scene_Action 31
typedef void (*func_mindustry_ui_fragments_HudFragment$4_addAction_arc_scene_Action)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_ui_fragments_HudFragment$4_actions_Array1_arc_scene_Action 32
typedef void (*func_mindustry_ui_fragments_HudFragment$4_actions_Array1_arc_scene_Action)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_ui_fragments_HudFragment$4_removeAction_arc_scene_Action 33
typedef void (*func_mindustry_ui_fragments_HudFragment$4_removeAction_arc_scene_Action)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_ui_fragments_HudFragment$4_getActions_R_arc_struct_Seq 34
typedef jobject (*func_mindustry_ui_fragments_HudFragment$4_getActions_R_arc_struct_Seq)(jcontext ctx, jobject self);
#define VTABLE_mindustry_ui_fragments_HudFragment$4_hasActions_R_boolean 35
typedef jbool (*func_mindustry_ui_fragments_HudFragment$4_hasActions_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_mindustry_ui_fragments_HudFragment$4_clearActions 36
typedef void (*func_mindustry_ui_fragments_HudFragment$4_clearActions)(jcontext ctx, jobject self);
#define VTABLE_mindustry_ui_fragments_HudFragment$4_clearListeners 37
typedef void (*func_mindustry_ui_fragments_HudFragment$4_clearListeners)(jcontext ctx, jobject self);
#define VTABLE_mindustry_ui_fragments_HudFragment$4_clear 38
typedef void (*func_mindustry_ui_fragments_HudFragment$4_clear)(jcontext ctx, jobject self);
#define VTABLE_mindustry_ui_fragments_HudFragment$4_getScene_R_arc_scene_Scene 39
typedef jobject (*func_mindustry_ui_fragments_HudFragment$4_getScene_R_arc_scene_Scene)(jcontext ctx, jobject self);
#define VTABLE_mindustry_ui_fragments_HudFragment$4_setScene_arc_scene_Scene 40
typedef void (*func_mindustry_ui_fragments_HudFragment$4_setScene_arc_scene_Scene)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_ui_fragments_HudFragment$4_isDescendantOf_arc_func_Boolf_R_boolean 41
typedef jbool (*func_mindustry_ui_fragments_HudFragment$4_isDescendantOf_arc_func_Boolf_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_ui_fragments_HudFragment$4_isDescendantOf_arc_scene_Element_R_boolean 42
typedef jbool (*func_mindustry_ui_fragments_HudFragment$4_isDescendantOf_arc_scene_Element_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_ui_fragments_HudFragment$4_isAscendantOf_arc_scene_Element_R_boolean 43
typedef jbool (*func_mindustry_ui_fragments_HudFragment$4_isAscendantOf_arc_scene_Element_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_ui_fragments_HudFragment$4_hasParent_R_boolean 44
typedef jbool (*func_mindustry_ui_fragments_HudFragment$4_hasParent_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_mindustry_ui_fragments_HudFragment$4_isTouchable_R_boolean 45
typedef jbool (*func_mindustry_ui_fragments_HudFragment$4_isTouchable_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_mindustry_ui_fragments_HudFragment$4_getX_int_R_float 46
typedef jfloat (*func_mindustry_ui_fragments_HudFragment$4_getX_int_R_float)(jcontext ctx, jobject self, jint param0);
#define VTABLE_mindustry_ui_fragments_HudFragment$4_getY_int_R_float 47
typedef jfloat (*func_mindustry_ui_fragments_HudFragment$4_getY_int_R_float)(jcontext ctx, jobject self, jint param0);
#define VTABLE_mindustry_ui_fragments_HudFragment$4_setPosition_float_float 48
typedef void (*func_mindustry_ui_fragments_HudFragment$4_setPosition_float_float)(jcontext ctx, jobject self, jfloat param0, jfloat param1);
#define VTABLE_mindustry_ui_fragments_HudFragment$4_setPosition_float_float_int 49
typedef void (*func_mindustry_ui_fragments_HudFragment$4_setPosition_float_float_int)(jcontext ctx, jobject self, jfloat param0, jfloat param1, jint param2);
#define VTABLE_mindustry_ui_fragments_HudFragment$4_moveBy_float_float 50
typedef void (*func_mindustry_ui_fragments_HudFragment$4_moveBy_float_float)(jcontext ctx, jobject self, jfloat param0, jfloat param1);
#define VTABLE_mindustry_ui_fragments_HudFragment$4_getWidth_R_float 51
typedef jfloat (*func_mindustry_ui_fragments_HudFragment$4_getWidth_R_float)(jcontext ctx, jobject self);
#define VTABLE_mindustry_ui_fragments_HudFragment$4_setWidth_float 52
typedef void (*func_mindustry_ui_fragments_HudFragment$4_setWidth_float)(jcontext ctx, jobject self, jfloat param0);
#define VTABLE_mindustry_ui_fragments_HudFragment$4_getHeight_R_float 53
typedef jfloat (*func_mindustry_ui_fragments_HudFragment$4_getHeight_R_float)(jcontext ctx, jobject self);
#define VTABLE_mindustry_ui_fragments_HudFragment$4_setHeight_float 54
typedef void (*func_mindustry_ui_fragments_HudFragment$4_setHeight_float)(jcontext ctx, jobject self, jfloat param0);
#define VTABLE_mindustry_ui_fragments_HudFragment$4_getTop_R_float 55
typedef jfloat (*func_mindustry_ui_fragments_HudFragment$4_getTop_R_float)(jcontext ctx, jobject self);
#define VTABLE_mindustry_ui_fragments_HudFragment$4_getRight_R_float 56
typedef jfloat (*func_mindustry_ui_fragments_HudFragment$4_getRight_R_float)(jcontext ctx, jobject self);
#define VTABLE_mindustry_ui_fragments_HudFragment$4_sizeChanged 57
typedef void (*func_mindustry_ui_fragments_HudFragment$4_sizeChanged)(jcontext ctx, jobject self);
#define VTABLE_mindustry_ui_fragments_HudFragment$4_rotationChanged 58
typedef void (*func_mindustry_ui_fragments_HudFragment$4_rotationChanged)(jcontext ctx, jobject self);
#define VTABLE_mindustry_ui_fragments_HudFragment$4_setSize_float 59
typedef void (*func_mindustry_ui_fragments_HudFragment$4_setSize_float)(jcontext ctx, jobject self, jfloat param0);
#define VTABLE_mindustry_ui_fragments_HudFragment$4_setSize_float_float 60
typedef void (*func_mindustry_ui_fragments_HudFragment$4_setSize_float_float)(jcontext ctx, jobject self, jfloat param0, jfloat param1);
#define VTABLE_mindustry_ui_fragments_HudFragment$4_sizeBy_float 61
typedef void (*func_mindustry_ui_fragments_HudFragment$4_sizeBy_float)(jcontext ctx, jobject self, jfloat param0);
#define VTABLE_mindustry_ui_fragments_HudFragment$4_sizeBy_float_float 62
typedef void (*func_mindustry_ui_fragments_HudFragment$4_sizeBy_float_float)(jcontext ctx, jobject self, jfloat param0, jfloat param1);
#define VTABLE_mindustry_ui_fragments_HudFragment$4_setBounds_float_float_float_float 63
typedef void (*func_mindustry_ui_fragments_HudFragment$4_setBounds_float_float_float_float)(jcontext ctx, jobject self, jfloat param0, jfloat param1, jfloat param2, jfloat param3);
#define VTABLE_mindustry_ui_fragments_HudFragment$4_setOrigin_float_float 64
typedef void (*func_mindustry_ui_fragments_HudFragment$4_setOrigin_float_float)(jcontext ctx, jobject self, jfloat param0, jfloat param1);
#define VTABLE_mindustry_ui_fragments_HudFragment$4_setOrigin_int 65
typedef void (*func_mindustry_ui_fragments_HudFragment$4_setOrigin_int)(jcontext ctx, jobject self, jint param0);
#define VTABLE_mindustry_ui_fragments_HudFragment$4_setScale_float 66
typedef void (*func_mindustry_ui_fragments_HudFragment$4_setScale_float)(jcontext ctx, jobject self, jfloat param0);
#define VTABLE_mindustry_ui_fragments_HudFragment$4_setScale_float_float 67
typedef void (*func_mindustry_ui_fragments_HudFragment$4_setScale_float_float)(jcontext ctx, jobject self, jfloat param0, jfloat param1);
#define VTABLE_mindustry_ui_fragments_HudFragment$4_scaleBy_float 68
typedef void (*func_mindustry_ui_fragments_HudFragment$4_scaleBy_float)(jcontext ctx, jobject self, jfloat param0);
#define VTABLE_mindustry_ui_fragments_HudFragment$4_scaleBy_float_float 69
typedef void (*func_mindustry_ui_fragments_HudFragment$4_scaleBy_float_float)(jcontext ctx, jobject self, jfloat param0, jfloat param1);
#define VTABLE_mindustry_ui_fragments_HudFragment$4_getRotation_R_float 70
typedef jfloat (*func_mindustry_ui_fragments_HudFragment$4_getRotation_R_float)(jcontext ctx, jobject self);
#define VTABLE_mindustry_ui_fragments_HudFragment$4_setRotation_float 71
typedef void (*func_mindustry_ui_fragments_HudFragment$4_setRotation_float)(jcontext ctx, jobject self, jfloat param0);
#define VTABLE_mindustry_ui_fragments_HudFragment$4_setRotationOrigin_float_int 72
typedef void (*func_mindustry_ui_fragments_HudFragment$4_setRotationOrigin_float_int)(jcontext ctx, jobject self, jfloat param0, jint param1);
#define VTABLE_mindustry_ui_fragments_HudFragment$4_rotateBy_float 73
typedef void (*func_mindustry_ui_fragments_HudFragment$4_rotateBy_float)(jcontext ctx, jobject self, jfloat param0);
#define VTABLE_mindustry_ui_fragments_HudFragment$4_setColor_float_float_float_float 74
typedef void (*func_mindustry_ui_fragments_HudFragment$4_setColor_float_float_float_float)(jcontext ctx, jobject self, jfloat param0, jfloat param1, jfloat param2, jfloat param3);
#define VTABLE_mindustry_ui_fragments_HudFragment$4_setColor_arc_graphics_Color 75
typedef void (*func_mindustry_ui_fragments_HudFragment$4_setColor_arc_graphics_Color)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_ui_fragments_HudFragment$4_toFront 76
typedef void (*func_mindustry_ui_fragments_HudFragment$4_toFront)(jcontext ctx, jobject self);
#define VTABLE_mindustry_ui_fragments_HudFragment$4_toBack 77
typedef void (*func_mindustry_ui_fragments_HudFragment$4_toBack)(jcontext ctx, jobject self);
#define VTABLE_mindustry_ui_fragments_HudFragment$4_getZIndex_R_int 78
typedef jint (*func_mindustry_ui_fragments_HudFragment$4_getZIndex_R_int)(jcontext ctx, jobject self);
#define VTABLE_mindustry_ui_fragments_HudFragment$4_setZIndex_int 79
typedef void (*func_mindustry_ui_fragments_HudFragment$4_setZIndex_int)(jcontext ctx, jobject self, jint param0);
#define VTABLE_mindustry_ui_fragments_HudFragment$4_clipBegin_R_boolean 80
typedef jbool (*func_mindustry_ui_fragments_HudFragment$4_clipBegin_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_mindustry_ui_fragments_HudFragment$4_clipBegin_float_float_float_float_R_boolean 81
typedef jbool (*func_mindustry_ui_fragments_HudFragment$4_clipBegin_float_float_float_float_R_boolean)(jcontext ctx, jobject self, jfloat param0, jfloat param1, jfloat param2, jfloat param3);
#define VTABLE_mindustry_ui_fragments_HudFragment$4_clipEnd 82
typedef void (*func_mindustry_ui_fragments_HudFragment$4_clipEnd)(jcontext ctx, jobject self);
#define VTABLE_mindustry_ui_fragments_HudFragment$4_screenToLocalCoordinates_arc_math_geom_Vec2_R_arc_math_geom_Vec2 83
typedef jobject (*func_mindustry_ui_fragments_HudFragment$4_screenToLocalCoordinates_arc_math_geom_Vec2_R_arc_math_geom_Vec2)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_ui_fragments_HudFragment$4_stageToLocalCoordinates_arc_math_geom_Vec2_R_arc_math_geom_Vec2 84
typedef jobject (*func_mindustry_ui_fragments_HudFragment$4_stageToLocalCoordinates_arc_math_geom_Vec2_R_arc_math_geom_Vec2)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_ui_fragments_HudFragment$4_localToStageCoordinates_arc_math_geom_Vec2_R_arc_math_geom_Vec2 85
typedef jobject (*func_mindustry_ui_fragments_HudFragment$4_localToStageCoordinates_arc_math_geom_Vec2_R_arc_math_geom_Vec2)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_ui_fragments_HudFragment$4_localToParentCoordinates_arc_math_geom_Vec2_R_arc_math_geom_Vec2 86
typedef jobject (*func_mindustry_ui_fragments_HudFragment$4_localToParentCoordinates_arc_math_geom_Vec2_R_arc_math_geom_Vec2)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_ui_fragments_HudFragment$4_localToAscendantCoordinates_arc_scene_Element_arc_math_geom_Vec2_R_arc_math_geom_Vec2 87
typedef jobject (*func_mindustry_ui_fragments_HudFragment$4_localToAscendantCoordinates_arc_scene_Element_arc_math_geom_Vec2_R_arc_math_geom_Vec2)(jcontext ctx, jobject self, jobject param0, jobject param1);
#define VTABLE_mindustry_ui_fragments_HudFragment$4_parentToLocalCoordinates_arc_math_geom_Vec2_R_arc_math_geom_Vec2 88
typedef jobject (*func_mindustry_ui_fragments_HudFragment$4_parentToLocalCoordinates_arc_math_geom_Vec2_R_arc_math_geom_Vec2)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_ui_fragments_HudFragment$4_getMinWidth_R_float 89
typedef jfloat (*func_mindustry_ui_fragments_HudFragment$4_getMinWidth_R_float)(jcontext ctx, jobject self);
#define VTABLE_mindustry_ui_fragments_HudFragment$4_getMinHeight_R_float 90
typedef jfloat (*func_mindustry_ui_fragments_HudFragment$4_getMinHeight_R_float)(jcontext ctx, jobject self);
#define VTABLE_mindustry_ui_fragments_HudFragment$4_getPrefWidth_R_float 91
typedef jfloat (*func_mindustry_ui_fragments_HudFragment$4_getPrefWidth_R_float)(jcontext ctx, jobject self);
#define VTABLE_mindustry_ui_fragments_HudFragment$4_getPrefHeight_R_float 92
typedef jfloat (*func_mindustry_ui_fragments_HudFragment$4_getPrefHeight_R_float)(jcontext ctx, jobject self);
#define VTABLE_mindustry_ui_fragments_HudFragment$4_getMaxWidth_R_float 93
typedef jfloat (*func_mindustry_ui_fragments_HudFragment$4_getMaxWidth_R_float)(jcontext ctx, jobject self);
#define VTABLE_mindustry_ui_fragments_HudFragment$4_getMaxHeight_R_float 94
typedef jfloat (*func_mindustry_ui_fragments_HudFragment$4_getMaxHeight_R_float)(jcontext ctx, jobject self);
#define VTABLE_mindustry_ui_fragments_HudFragment$4_setLayoutEnabled_boolean 95
typedef void (*func_mindustry_ui_fragments_HudFragment$4_setLayoutEnabled_boolean)(jcontext ctx, jobject self, jbool param0);
#define VTABLE_mindustry_ui_fragments_HudFragment$4_validate 96
typedef void (*func_mindustry_ui_fragments_HudFragment$4_validate)(jcontext ctx, jobject self);
#define VTABLE_mindustry_ui_fragments_HudFragment$4_needsLayout_R_boolean 97
typedef jbool (*func_mindustry_ui_fragments_HudFragment$4_needsLayout_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_mindustry_ui_fragments_HudFragment$4_invalidate 98
typedef void (*func_mindustry_ui_fragments_HudFragment$4_invalidate)(jcontext ctx, jobject self);
#define VTABLE_mindustry_ui_fragments_HudFragment$4_invalidateHierarchy 99
typedef void (*func_mindustry_ui_fragments_HudFragment$4_invalidateHierarchy)(jcontext ctx, jobject self);
#define VTABLE_mindustry_ui_fragments_HudFragment$4_pack 100
typedef void (*func_mindustry_ui_fragments_HudFragment$4_pack)(jcontext ctx, jobject self);
#define VTABLE_mindustry_ui_fragments_HudFragment$4_setFillParent_boolean 101
typedef void (*func_mindustry_ui_fragments_HudFragment$4_setFillParent_boolean)(jcontext ctx, jobject self, jbool param0);
#define VTABLE_mindustry_ui_fragments_HudFragment$4_layout 102
typedef void (*func_mindustry_ui_fragments_HudFragment$4_layout)(jcontext ctx, jobject self);
#define VTABLE_mindustry_ui_fragments_HudFragment$4_keepInStage 103
typedef void (*func_mindustry_ui_fragments_HudFragment$4_keepInStage)(jcontext ctx, jobject self);
#define VTABLE_mindustry_ui_fragments_HudFragment$4_setTranslation_float_float 104
typedef void (*func_mindustry_ui_fragments_HudFragment$4_setTranslation_float_float)(jcontext ctx, jobject self, jfloat param0, jfloat param1);
#define VTABLE_mindustry_ui_fragments_HudFragment$4_keyDown_arc_input_KeyCode_java_lang_Runnable 105
typedef void (*func_mindustry_ui_fragments_HudFragment$4_keyDown_arc_input_KeyCode_java_lang_Runnable)(jcontext ctx, jobject self, jobject param0, jobject param1);
#define VTABLE_mindustry_ui_fragments_HudFragment$4_keyDown_arc_func_Cons 106
typedef void (*func_mindustry_ui_fragments_HudFragment$4_keyDown_arc_func_Cons)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_ui_fragments_HudFragment$4_fireClick 107
typedef void (*func_mindustry_ui_fragments_HudFragment$4_fireClick)(jcontext ctx, jobject self);
#define VTABLE_mindustry_ui_fragments_HudFragment$4_clicked_java_lang_Runnable_R_arc_scene_event_ClickListener 108
typedef jobject (*func_mindustry_ui_fragments_HudFragment$4_clicked_java_lang_Runnable_R_arc_scene_event_ClickListener)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_ui_fragments_HudFragment$4_clicked_arc_input_KeyCode_java_lang_Runnable_R_arc_scene_event_ClickListener 109
typedef jobject (*func_mindustry_ui_fragments_HudFragment$4_clicked_arc_input_KeyCode_java_lang_Runnable_R_arc_scene_event_ClickListener)(jcontext ctx, jobject self, jobject param0, jobject param1);
#define VTABLE_mindustry_ui_fragments_HudFragment$4_clicked_arc_func_Cons_java_lang_Runnable_R_arc_scene_event_ClickListener 110
typedef jobject (*func_mindustry_ui_fragments_HudFragment$4_clicked_arc_func_Cons_java_lang_Runnable_R_arc_scene_event_ClickListener)(jcontext ctx, jobject self, jobject param0, jobject param1);
#define VTABLE_mindustry_ui_fragments_HudFragment$4_clicked_arc_func_Cons_arc_func_Cons_R_arc_scene_event_ClickListener 111
typedef jobject (*func_mindustry_ui_fragments_HudFragment$4_clicked_arc_func_Cons_arc_func_Cons_R_arc_scene_event_ClickListener)(jcontext ctx, jobject self, jobject param0, jobject param1);
#define VTABLE_mindustry_ui_fragments_HudFragment$4_tapped_java_lang_Runnable_R_arc_scene_event_InputListener 112
typedef jobject (*func_mindustry_ui_fragments_HudFragment$4_tapped_java_lang_Runnable_R_arc_scene_event_InputListener)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_ui_fragments_HudFragment$4_hovered_java_lang_Runnable 113
typedef void (*func_mindustry_ui_fragments_HudFragment$4_hovered_java_lang_Runnable)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_ui_fragments_HudFragment$4_exited_java_lang_Runnable 114
typedef void (*func_mindustry_ui_fragments_HudFragment$4_exited_java_lang_Runnable)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_ui_fragments_HudFragment$4_released_java_lang_Runnable 115
typedef void (*func_mindustry_ui_fragments_HudFragment$4_released_java_lang_Runnable)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_ui_fragments_HudFragment$4_change 116
typedef void (*func_mindustry_ui_fragments_HudFragment$4_change)(jcontext ctx, jobject self);
#define VTABLE_mindustry_ui_fragments_HudFragment$4_changed_java_lang_Runnable 117
typedef void (*func_mindustry_ui_fragments_HudFragment$4_changed_java_lang_Runnable)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_ui_fragments_HudFragment$4_update_java_lang_Runnable_R_arc_scene_Element 118
typedef jobject (*func_mindustry_ui_fragments_HudFragment$4_update_java_lang_Runnable_R_arc_scene_Element)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_ui_fragments_HudFragment$4_visible_arc_func_Boolp_R_arc_scene_Element 119
typedef jobject (*func_mindustry_ui_fragments_HudFragment$4_visible_arc_func_Boolp_R_arc_scene_Element)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_ui_fragments_HudFragment$4_touchable_arc_func_Prov 120
typedef void (*func_mindustry_ui_fragments_HudFragment$4_touchable_arc_func_Prov)(jcontext ctx, jobject self, jobject param0);

void mark_mindustry_ui_fragments_HudFragment$4(jobject object, jint mark, jint depth);
void clinit_mindustry_ui_fragments_HudFragment$4(jcontext ctx);
void init_mindustry_ui_fragments_HudFragment$4_mindustry_ui_fragments_HudFragment(jcontext ctx, jobject self, jobject param0);
void M_mindustry_ui_fragments_HudFragment$4_draw(jcontext ctx, jobject self);

#ifdef __cplusplus
}
#endif

#endif
