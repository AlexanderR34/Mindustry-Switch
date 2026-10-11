#ifndef HEADER_mindustry_mod_Mods$4
#define HEADER_mindustry_mod_Mods$4

#include "Clearwing.h"
#include "arc/scene/ui/Dialog.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct mindustry_mod_Mods$4 {
	arc_scene_ui_Dialog parent;
	jbool F_val$soft;
	jref F_val$toCheck;
	jref F_this$0;
} mindustry_mod_Mods$4;

extern Class class_mindustry_mod_Mods$4;


#define VTABLE_mindustry_mod_Mods$4_hashCode_R_int 0
typedef jint (*func_mindustry_mod_Mods$4_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_mindustry_mod_Mods$4_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_mindustry_mod_Mods$4_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_mod_Mods$4_clone_R_java_lang_Object 2
typedef jobject (*func_mindustry_mod_Mods$4_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_mindustry_mod_Mods$4_getClass_R_java_lang_Class 3
typedef jobject (*func_mindustry_mod_Mods$4_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_mindustry_mod_Mods$4_toString_R_java_lang_String 4
typedef jobject (*func_mindustry_mod_Mods$4_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_mindustry_mod_Mods$4_finalize 5
typedef void (*func_mindustry_mod_Mods$4_finalize)(jcontext ctx, jobject self);
#define VTABLE_mindustry_mod_Mods$4_notify 6
typedef void (*func_mindustry_mod_Mods$4_notify)(jcontext ctx, jobject self);
#define VTABLE_mindustry_mod_Mods$4_notifyAll 7
typedef void (*func_mindustry_mod_Mods$4_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_mindustry_mod_Mods$4_wait 8
typedef void (*func_mindustry_mod_Mods$4_wait)(jcontext ctx, jobject self);
#define VTABLE_mindustry_mod_Mods$4_wait_long 9
typedef void (*func_mindustry_mod_Mods$4_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_mindustry_mod_Mods$4_wait_long_int 10
typedef void (*func_mindustry_mod_Mods$4_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);
#define VTABLE_mindustry_mod_Mods$4_draw 11
typedef void (*func_mindustry_mod_Mods$4_draw)(jcontext ctx, jobject self);
#define VTABLE_mindustry_mod_Mods$4_act_float 12
typedef void (*func_mindustry_mod_Mods$4_act_float)(jcontext ctx, jobject self, jfloat param0);
#define VTABLE_mindustry_mod_Mods$4_updateVisibility 13
typedef void (*func_mindustry_mod_Mods$4_updateVisibility)(jcontext ctx, jobject self);
#define VTABLE_mindustry_mod_Mods$4_hasMouse_R_boolean 14
typedef jbool (*func_mindustry_mod_Mods$4_hasMouse_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_mindustry_mod_Mods$4_hasKeyboard_R_boolean 15
typedef jbool (*func_mindustry_mod_Mods$4_hasKeyboard_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_mindustry_mod_Mods$4_hasScroll_R_boolean 16
typedef jbool (*func_mindustry_mod_Mods$4_hasScroll_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_mindustry_mod_Mods$4_requestKeyboard 17
typedef void (*func_mindustry_mod_Mods$4_requestKeyboard)(jcontext ctx, jobject self);
#define VTABLE_mindustry_mod_Mods$4_requestScroll 18
typedef void (*func_mindustry_mod_Mods$4_requestScroll)(jcontext ctx, jobject self);
#define VTABLE_mindustry_mod_Mods$4_fire_arc_scene_event_SceneEvent_R_boolean 19
typedef jbool (*func_mindustry_mod_Mods$4_fire_arc_scene_event_SceneEvent_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_mod_Mods$4_notify_arc_scene_event_SceneEvent_boolean_R_boolean 20
typedef jbool (*func_mindustry_mod_Mods$4_notify_arc_scene_event_SceneEvent_boolean_R_boolean)(jcontext ctx, jobject self, jobject param0, jbool param1);
#define VTABLE_mindustry_mod_Mods$4_hit_float_float_boolean_R_arc_scene_Element 21
typedef jobject (*func_mindustry_mod_Mods$4_hit_float_float_boolean_R_arc_scene_Element)(jcontext ctx, jobject self, jfloat param0, jfloat param1, jbool param2);
#define VTABLE_mindustry_mod_Mods$4_remove_R_boolean 22
typedef jbool (*func_mindustry_mod_Mods$4_remove_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_mindustry_mod_Mods$4_dragged_arc_func_Floatc2 23
typedef void (*func_mindustry_mod_Mods$4_dragged_arc_func_Floatc2)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_mod_Mods$4_scrolled_arc_func_Floatc 24
typedef void (*func_mindustry_mod_Mods$4_scrolled_arc_func_Floatc)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_mod_Mods$4_addListener_arc_scene_event_EventListener_R_boolean 25
typedef jbool (*func_mindustry_mod_Mods$4_addListener_arc_scene_event_EventListener_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_mod_Mods$4_removeListener_arc_scene_event_EventListener_R_boolean 26
typedef jbool (*func_mindustry_mod_Mods$4_removeListener_arc_scene_event_EventListener_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_mod_Mods$4_getListeners_R_arc_struct_Seq 27
typedef jobject (*func_mindustry_mod_Mods$4_getListeners_R_arc_struct_Seq)(jcontext ctx, jobject self);
#define VTABLE_mindustry_mod_Mods$4_addCaptureListener_arc_scene_event_EventListener_R_boolean 28
typedef jbool (*func_mindustry_mod_Mods$4_addCaptureListener_arc_scene_event_EventListener_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_mod_Mods$4_removeCaptureListener_arc_scene_event_EventListener_R_boolean 29
typedef jbool (*func_mindustry_mod_Mods$4_removeCaptureListener_arc_scene_event_EventListener_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_mod_Mods$4_getCaptureListeners_R_arc_struct_Seq 30
typedef jobject (*func_mindustry_mod_Mods$4_getCaptureListeners_R_arc_struct_Seq)(jcontext ctx, jobject self);
#define VTABLE_mindustry_mod_Mods$4_addAction_arc_scene_Action 31
typedef void (*func_mindustry_mod_Mods$4_addAction_arc_scene_Action)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_mod_Mods$4_actions_Array1_arc_scene_Action 32
typedef void (*func_mindustry_mod_Mods$4_actions_Array1_arc_scene_Action)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_mod_Mods$4_removeAction_arc_scene_Action 33
typedef void (*func_mindustry_mod_Mods$4_removeAction_arc_scene_Action)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_mod_Mods$4_getActions_R_arc_struct_Seq 34
typedef jobject (*func_mindustry_mod_Mods$4_getActions_R_arc_struct_Seq)(jcontext ctx, jobject self);
#define VTABLE_mindustry_mod_Mods$4_hasActions_R_boolean 35
typedef jbool (*func_mindustry_mod_Mods$4_hasActions_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_mindustry_mod_Mods$4_clearActions 36
typedef void (*func_mindustry_mod_Mods$4_clearActions)(jcontext ctx, jobject self);
#define VTABLE_mindustry_mod_Mods$4_clearListeners 37
typedef void (*func_mindustry_mod_Mods$4_clearListeners)(jcontext ctx, jobject self);
#define VTABLE_mindustry_mod_Mods$4_clear 38
typedef void (*func_mindustry_mod_Mods$4_clear)(jcontext ctx, jobject self);
#define VTABLE_mindustry_mod_Mods$4_getScene_R_arc_scene_Scene 39
typedef jobject (*func_mindustry_mod_Mods$4_getScene_R_arc_scene_Scene)(jcontext ctx, jobject self);
#define VTABLE_mindustry_mod_Mods$4_setScene_arc_scene_Scene 40
typedef void (*func_mindustry_mod_Mods$4_setScene_arc_scene_Scene)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_mod_Mods$4_isDescendantOf_arc_func_Boolf_R_boolean 41
typedef jbool (*func_mindustry_mod_Mods$4_isDescendantOf_arc_func_Boolf_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_mod_Mods$4_isDescendantOf_arc_scene_Element_R_boolean 42
typedef jbool (*func_mindustry_mod_Mods$4_isDescendantOf_arc_scene_Element_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_mod_Mods$4_isAscendantOf_arc_scene_Element_R_boolean 43
typedef jbool (*func_mindustry_mod_Mods$4_isAscendantOf_arc_scene_Element_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_mod_Mods$4_hasParent_R_boolean 44
typedef jbool (*func_mindustry_mod_Mods$4_hasParent_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_mindustry_mod_Mods$4_isTouchable_R_boolean 45
typedef jbool (*func_mindustry_mod_Mods$4_isTouchable_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_mindustry_mod_Mods$4_getX_int_R_float 46
typedef jfloat (*func_mindustry_mod_Mods$4_getX_int_R_float)(jcontext ctx, jobject self, jint param0);
#define VTABLE_mindustry_mod_Mods$4_getY_int_R_float 47
typedef jfloat (*func_mindustry_mod_Mods$4_getY_int_R_float)(jcontext ctx, jobject self, jint param0);
#define VTABLE_mindustry_mod_Mods$4_setPosition_float_float 48
typedef void (*func_mindustry_mod_Mods$4_setPosition_float_float)(jcontext ctx, jobject self, jfloat param0, jfloat param1);
#define VTABLE_mindustry_mod_Mods$4_setPosition_float_float_int 49
typedef void (*func_mindustry_mod_Mods$4_setPosition_float_float_int)(jcontext ctx, jobject self, jfloat param0, jfloat param1, jint param2);
#define VTABLE_mindustry_mod_Mods$4_moveBy_float_float 50
typedef void (*func_mindustry_mod_Mods$4_moveBy_float_float)(jcontext ctx, jobject self, jfloat param0, jfloat param1);
#define VTABLE_mindustry_mod_Mods$4_getWidth_R_float 51
typedef jfloat (*func_mindustry_mod_Mods$4_getWidth_R_float)(jcontext ctx, jobject self);
#define VTABLE_mindustry_mod_Mods$4_setWidth_float 52
typedef void (*func_mindustry_mod_Mods$4_setWidth_float)(jcontext ctx, jobject self, jfloat param0);
#define VTABLE_mindustry_mod_Mods$4_getHeight_R_float 53
typedef jfloat (*func_mindustry_mod_Mods$4_getHeight_R_float)(jcontext ctx, jobject self);
#define VTABLE_mindustry_mod_Mods$4_setHeight_float 54
typedef void (*func_mindustry_mod_Mods$4_setHeight_float)(jcontext ctx, jobject self, jfloat param0);
#define VTABLE_mindustry_mod_Mods$4_getTop_R_float 55
typedef jfloat (*func_mindustry_mod_Mods$4_getTop_R_float)(jcontext ctx, jobject self);
#define VTABLE_mindustry_mod_Mods$4_getRight_R_float 56
typedef jfloat (*func_mindustry_mod_Mods$4_getRight_R_float)(jcontext ctx, jobject self);
#define VTABLE_mindustry_mod_Mods$4_sizeChanged 57
typedef void (*func_mindustry_mod_Mods$4_sizeChanged)(jcontext ctx, jobject self);
#define VTABLE_mindustry_mod_Mods$4_rotationChanged 58
typedef void (*func_mindustry_mod_Mods$4_rotationChanged)(jcontext ctx, jobject self);
#define VTABLE_mindustry_mod_Mods$4_setSize_float 59
typedef void (*func_mindustry_mod_Mods$4_setSize_float)(jcontext ctx, jobject self, jfloat param0);
#define VTABLE_mindustry_mod_Mods$4_setSize_float_float 60
typedef void (*func_mindustry_mod_Mods$4_setSize_float_float)(jcontext ctx, jobject self, jfloat param0, jfloat param1);
#define VTABLE_mindustry_mod_Mods$4_sizeBy_float 61
typedef void (*func_mindustry_mod_Mods$4_sizeBy_float)(jcontext ctx, jobject self, jfloat param0);
#define VTABLE_mindustry_mod_Mods$4_sizeBy_float_float 62
typedef void (*func_mindustry_mod_Mods$4_sizeBy_float_float)(jcontext ctx, jobject self, jfloat param0, jfloat param1);
#define VTABLE_mindustry_mod_Mods$4_setBounds_float_float_float_float 63
typedef void (*func_mindustry_mod_Mods$4_setBounds_float_float_float_float)(jcontext ctx, jobject self, jfloat param0, jfloat param1, jfloat param2, jfloat param3);
#define VTABLE_mindustry_mod_Mods$4_setOrigin_float_float 64
typedef void (*func_mindustry_mod_Mods$4_setOrigin_float_float)(jcontext ctx, jobject self, jfloat param0, jfloat param1);
#define VTABLE_mindustry_mod_Mods$4_setOrigin_int 65
typedef void (*func_mindustry_mod_Mods$4_setOrigin_int)(jcontext ctx, jobject self, jint param0);
#define VTABLE_mindustry_mod_Mods$4_setScale_float 66
typedef void (*func_mindustry_mod_Mods$4_setScale_float)(jcontext ctx, jobject self, jfloat param0);
#define VTABLE_mindustry_mod_Mods$4_setScale_float_float 67
typedef void (*func_mindustry_mod_Mods$4_setScale_float_float)(jcontext ctx, jobject self, jfloat param0, jfloat param1);
#define VTABLE_mindustry_mod_Mods$4_scaleBy_float 68
typedef void (*func_mindustry_mod_Mods$4_scaleBy_float)(jcontext ctx, jobject self, jfloat param0);
#define VTABLE_mindustry_mod_Mods$4_scaleBy_float_float 69
typedef void (*func_mindustry_mod_Mods$4_scaleBy_float_float)(jcontext ctx, jobject self, jfloat param0, jfloat param1);
#define VTABLE_mindustry_mod_Mods$4_getRotation_R_float 70
typedef jfloat (*func_mindustry_mod_Mods$4_getRotation_R_float)(jcontext ctx, jobject self);
#define VTABLE_mindustry_mod_Mods$4_setRotation_float 71
typedef void (*func_mindustry_mod_Mods$4_setRotation_float)(jcontext ctx, jobject self, jfloat param0);
#define VTABLE_mindustry_mod_Mods$4_setRotationOrigin_float_int 72
typedef void (*func_mindustry_mod_Mods$4_setRotationOrigin_float_int)(jcontext ctx, jobject self, jfloat param0, jint param1);
#define VTABLE_mindustry_mod_Mods$4_rotateBy_float 73
typedef void (*func_mindustry_mod_Mods$4_rotateBy_float)(jcontext ctx, jobject self, jfloat param0);
#define VTABLE_mindustry_mod_Mods$4_setColor_float_float_float_float 74
typedef void (*func_mindustry_mod_Mods$4_setColor_float_float_float_float)(jcontext ctx, jobject self, jfloat param0, jfloat param1, jfloat param2, jfloat param3);
#define VTABLE_mindustry_mod_Mods$4_setColor_arc_graphics_Color 75
typedef void (*func_mindustry_mod_Mods$4_setColor_arc_graphics_Color)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_mod_Mods$4_toFront 76
typedef void (*func_mindustry_mod_Mods$4_toFront)(jcontext ctx, jobject self);
#define VTABLE_mindustry_mod_Mods$4_toBack 77
typedef void (*func_mindustry_mod_Mods$4_toBack)(jcontext ctx, jobject self);
#define VTABLE_mindustry_mod_Mods$4_getZIndex_R_int 78
typedef jint (*func_mindustry_mod_Mods$4_getZIndex_R_int)(jcontext ctx, jobject self);
#define VTABLE_mindustry_mod_Mods$4_setZIndex_int 79
typedef void (*func_mindustry_mod_Mods$4_setZIndex_int)(jcontext ctx, jobject self, jint param0);
#define VTABLE_mindustry_mod_Mods$4_clipBegin_R_boolean 80
typedef jbool (*func_mindustry_mod_Mods$4_clipBegin_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_mindustry_mod_Mods$4_clipBegin_float_float_float_float_R_boolean 81
typedef jbool (*func_mindustry_mod_Mods$4_clipBegin_float_float_float_float_R_boolean)(jcontext ctx, jobject self, jfloat param0, jfloat param1, jfloat param2, jfloat param3);
#define VTABLE_mindustry_mod_Mods$4_clipEnd 82
typedef void (*func_mindustry_mod_Mods$4_clipEnd)(jcontext ctx, jobject self);
#define VTABLE_mindustry_mod_Mods$4_screenToLocalCoordinates_arc_math_geom_Vec2_R_arc_math_geom_Vec2 83
typedef jobject (*func_mindustry_mod_Mods$4_screenToLocalCoordinates_arc_math_geom_Vec2_R_arc_math_geom_Vec2)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_mod_Mods$4_stageToLocalCoordinates_arc_math_geom_Vec2_R_arc_math_geom_Vec2 84
typedef jobject (*func_mindustry_mod_Mods$4_stageToLocalCoordinates_arc_math_geom_Vec2_R_arc_math_geom_Vec2)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_mod_Mods$4_localToStageCoordinates_arc_math_geom_Vec2_R_arc_math_geom_Vec2 85
typedef jobject (*func_mindustry_mod_Mods$4_localToStageCoordinates_arc_math_geom_Vec2_R_arc_math_geom_Vec2)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_mod_Mods$4_localToParentCoordinates_arc_math_geom_Vec2_R_arc_math_geom_Vec2 86
typedef jobject (*func_mindustry_mod_Mods$4_localToParentCoordinates_arc_math_geom_Vec2_R_arc_math_geom_Vec2)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_mod_Mods$4_localToAscendantCoordinates_arc_scene_Element_arc_math_geom_Vec2_R_arc_math_geom_Vec2 87
typedef jobject (*func_mindustry_mod_Mods$4_localToAscendantCoordinates_arc_scene_Element_arc_math_geom_Vec2_R_arc_math_geom_Vec2)(jcontext ctx, jobject self, jobject param0, jobject param1);
#define VTABLE_mindustry_mod_Mods$4_parentToLocalCoordinates_arc_math_geom_Vec2_R_arc_math_geom_Vec2 88
typedef jobject (*func_mindustry_mod_Mods$4_parentToLocalCoordinates_arc_math_geom_Vec2_R_arc_math_geom_Vec2)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_mod_Mods$4_getMinWidth_R_float 89
typedef jfloat (*func_mindustry_mod_Mods$4_getMinWidth_R_float)(jcontext ctx, jobject self);
#define VTABLE_mindustry_mod_Mods$4_getMinHeight_R_float 90
typedef jfloat (*func_mindustry_mod_Mods$4_getMinHeight_R_float)(jcontext ctx, jobject self);
#define VTABLE_mindustry_mod_Mods$4_getPrefWidth_R_float 91
typedef jfloat (*func_mindustry_mod_Mods$4_getPrefWidth_R_float)(jcontext ctx, jobject self);
#define VTABLE_mindustry_mod_Mods$4_getPrefHeight_R_float 92
typedef jfloat (*func_mindustry_mod_Mods$4_getPrefHeight_R_float)(jcontext ctx, jobject self);
#define VTABLE_mindustry_mod_Mods$4_getMaxWidth_R_float 93
typedef jfloat (*func_mindustry_mod_Mods$4_getMaxWidth_R_float)(jcontext ctx, jobject self);
#define VTABLE_mindustry_mod_Mods$4_getMaxHeight_R_float 94
typedef jfloat (*func_mindustry_mod_Mods$4_getMaxHeight_R_float)(jcontext ctx, jobject self);
#define VTABLE_mindustry_mod_Mods$4_setLayoutEnabled_boolean 95
typedef void (*func_mindustry_mod_Mods$4_setLayoutEnabled_boolean)(jcontext ctx, jobject self, jbool param0);
#define VTABLE_mindustry_mod_Mods$4_validate 96
typedef void (*func_mindustry_mod_Mods$4_validate)(jcontext ctx, jobject self);
#define VTABLE_mindustry_mod_Mods$4_needsLayout_R_boolean 97
typedef jbool (*func_mindustry_mod_Mods$4_needsLayout_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_mindustry_mod_Mods$4_invalidate 98
typedef void (*func_mindustry_mod_Mods$4_invalidate)(jcontext ctx, jobject self);
#define VTABLE_mindustry_mod_Mods$4_invalidateHierarchy 99
typedef void (*func_mindustry_mod_Mods$4_invalidateHierarchy)(jcontext ctx, jobject self);
#define VTABLE_mindustry_mod_Mods$4_pack 100
typedef void (*func_mindustry_mod_Mods$4_pack)(jcontext ctx, jobject self);
#define VTABLE_mindustry_mod_Mods$4_setFillParent_boolean 101
typedef void (*func_mindustry_mod_Mods$4_setFillParent_boolean)(jcontext ctx, jobject self, jbool param0);
#define VTABLE_mindustry_mod_Mods$4_layout 102
typedef void (*func_mindustry_mod_Mods$4_layout)(jcontext ctx, jobject self);
#define VTABLE_mindustry_mod_Mods$4_keepInStage 103
typedef void (*func_mindustry_mod_Mods$4_keepInStage)(jcontext ctx, jobject self);
#define VTABLE_mindustry_mod_Mods$4_setTranslation_float_float 104
typedef void (*func_mindustry_mod_Mods$4_setTranslation_float_float)(jcontext ctx, jobject self, jfloat param0, jfloat param1);
#define VTABLE_mindustry_mod_Mods$4_keyDown_arc_input_KeyCode_java_lang_Runnable 105
typedef void (*func_mindustry_mod_Mods$4_keyDown_arc_input_KeyCode_java_lang_Runnable)(jcontext ctx, jobject self, jobject param0, jobject param1);
#define VTABLE_mindustry_mod_Mods$4_keyDown_arc_func_Cons 106
typedef void (*func_mindustry_mod_Mods$4_keyDown_arc_func_Cons)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_mod_Mods$4_fireClick 107
typedef void (*func_mindustry_mod_Mods$4_fireClick)(jcontext ctx, jobject self);
#define VTABLE_mindustry_mod_Mods$4_clicked_java_lang_Runnable_R_arc_scene_event_ClickListener 108
typedef jobject (*func_mindustry_mod_Mods$4_clicked_java_lang_Runnable_R_arc_scene_event_ClickListener)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_mod_Mods$4_clicked_arc_input_KeyCode_java_lang_Runnable_R_arc_scene_event_ClickListener 109
typedef jobject (*func_mindustry_mod_Mods$4_clicked_arc_input_KeyCode_java_lang_Runnable_R_arc_scene_event_ClickListener)(jcontext ctx, jobject self, jobject param0, jobject param1);
#define VTABLE_mindustry_mod_Mods$4_clicked_arc_func_Cons_java_lang_Runnable_R_arc_scene_event_ClickListener 110
typedef jobject (*func_mindustry_mod_Mods$4_clicked_arc_func_Cons_java_lang_Runnable_R_arc_scene_event_ClickListener)(jcontext ctx, jobject self, jobject param0, jobject param1);
#define VTABLE_mindustry_mod_Mods$4_clicked_arc_func_Cons_arc_func_Cons_R_arc_scene_event_ClickListener 111
typedef jobject (*func_mindustry_mod_Mods$4_clicked_arc_func_Cons_arc_func_Cons_R_arc_scene_event_ClickListener)(jcontext ctx, jobject self, jobject param0, jobject param1);
#define VTABLE_mindustry_mod_Mods$4_tapped_java_lang_Runnable_R_arc_scene_event_InputListener 112
typedef jobject (*func_mindustry_mod_Mods$4_tapped_java_lang_Runnable_R_arc_scene_event_InputListener)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_mod_Mods$4_hovered_java_lang_Runnable 113
typedef void (*func_mindustry_mod_Mods$4_hovered_java_lang_Runnable)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_mod_Mods$4_exited_java_lang_Runnable 114
typedef void (*func_mindustry_mod_Mods$4_exited_java_lang_Runnable)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_mod_Mods$4_released_java_lang_Runnable 115
typedef void (*func_mindustry_mod_Mods$4_released_java_lang_Runnable)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_mod_Mods$4_change 116
typedef void (*func_mindustry_mod_Mods$4_change)(jcontext ctx, jobject self);
#define VTABLE_mindustry_mod_Mods$4_changed_java_lang_Runnable 117
typedef void (*func_mindustry_mod_Mods$4_changed_java_lang_Runnable)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_mod_Mods$4_update_java_lang_Runnable_R_arc_scene_Element 118
typedef jobject (*func_mindustry_mod_Mods$4_update_java_lang_Runnable_R_arc_scene_Element)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_mod_Mods$4_visible_arc_func_Boolp_R_arc_scene_Element 119
typedef jobject (*func_mindustry_mod_Mods$4_visible_arc_func_Boolp_R_arc_scene_Element)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_mod_Mods$4_touchable_arc_func_Prov 120
typedef void (*func_mindustry_mod_Mods$4_touchable_arc_func_Prov)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_mod_Mods$4_setCullingArea_arc_math_geom_Rect 121
typedef void (*func_mindustry_mod_Mods$4_setCullingArea_arc_math_geom_Rect)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_mod_Mods$4_drawChildren 122
typedef void (*func_mindustry_mod_Mods$4_drawChildren)(jcontext ctx, jobject self);
#define VTABLE_mindustry_mod_Mods$4_computeTransform_R_arc_math_Mat 123
typedef jobject (*func_mindustry_mod_Mods$4_computeTransform_R_arc_math_Mat)(jcontext ctx, jobject self);
#define VTABLE_mindustry_mod_Mods$4_applyTransform_arc_math_Mat 124
typedef void (*func_mindustry_mod_Mods$4_applyTransform_arc_math_Mat)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_mod_Mods$4_resetTransform 125
typedef void (*func_mindustry_mod_Mods$4_resetTransform)(jcontext ctx, jobject self);
#define VTABLE_mindustry_mod_Mods$4_getCullingArea_R_arc_math_geom_Rect 126
typedef jobject (*func_mindustry_mod_Mods$4_getCullingArea_R_arc_math_geom_Rect)(jcontext ctx, jobject self);
#define VTABLE_mindustry_mod_Mods$4_childrenChanged 127
typedef void (*func_mindustry_mod_Mods$4_childrenChanged)(jcontext ctx, jobject self);
#define VTABLE_mindustry_mod_Mods$4_forEach_arc_func_Cons 128
typedef void (*func_mindustry_mod_Mods$4_forEach_arc_func_Cons)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_mod_Mods$4_fill_arc_scene_ui_layout_Table$DrawRect_R_arc_scene_Element 129
typedef jobject (*func_mindustry_mod_Mods$4_fill_arc_scene_ui_layout_Table$DrawRect_R_arc_scene_Element)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_mod_Mods$4_fill_arc_func_Cons 130
typedef void (*func_mindustry_mod_Mods$4_fill_arc_func_Cons)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_mod_Mods$4_fill_arc_scene_style_Drawable_arc_func_Cons 131
typedef void (*func_mindustry_mod_Mods$4_fill_arc_scene_style_Drawable_arc_func_Cons)(jcontext ctx, jobject self, jobject param0, jobject param1);
#define VTABLE_mindustry_mod_Mods$4_addChild_arc_scene_Element 132
typedef void (*func_mindustry_mod_Mods$4_addChild_arc_scene_Element)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_mod_Mods$4_addChildAt_int_arc_scene_Element 133
typedef void (*func_mindustry_mod_Mods$4_addChildAt_int_arc_scene_Element)(jcontext ctx, jobject self, jint param0, jobject param1);
#define VTABLE_mindustry_mod_Mods$4_addChildBefore_arc_scene_Element_arc_scene_Element 134
typedef void (*func_mindustry_mod_Mods$4_addChildBefore_arc_scene_Element_arc_scene_Element)(jcontext ctx, jobject self, jobject param0, jobject param1);
#define VTABLE_mindustry_mod_Mods$4_addChildAfter_arc_scene_Element_arc_scene_Element 135
typedef void (*func_mindustry_mod_Mods$4_addChildAfter_arc_scene_Element_arc_scene_Element)(jcontext ctx, jobject self, jobject param0, jobject param1);
#define VTABLE_mindustry_mod_Mods$4_removeChild_arc_scene_Element_R_boolean 136
typedef jbool (*func_mindustry_mod_Mods$4_removeChild_arc_scene_Element_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_mod_Mods$4_removeChild_arc_scene_Element_boolean_R_boolean 137
typedef jbool (*func_mindustry_mod_Mods$4_removeChild_arc_scene_Element_boolean_R_boolean)(jcontext ctx, jobject self, jobject param0, jbool param1);
#define VTABLE_mindustry_mod_Mods$4_clearChildren 138
typedef void (*func_mindustry_mod_Mods$4_clearChildren)(jcontext ctx, jobject self);
#define VTABLE_mindustry_mod_Mods$4_find_java_lang_String_R_arc_scene_Element 139
typedef jobject (*func_mindustry_mod_Mods$4_find_java_lang_String_R_arc_scene_Element)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_mod_Mods$4_findVisible_java_lang_String_R_arc_scene_Element 140
typedef jobject (*func_mindustry_mod_Mods$4_findVisible_java_lang_String_R_arc_scene_Element)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_mod_Mods$4_find_arc_func_Boolf_R_arc_scene_Element 141
typedef jobject (*func_mindustry_mod_Mods$4_find_arc_func_Boolf_R_arc_scene_Element)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_mod_Mods$4_swapActor_int_int_R_boolean 142
typedef jbool (*func_mindustry_mod_Mods$4_swapActor_int_int_R_boolean)(jcontext ctx, jobject self, jint param0, jint param1);
#define VTABLE_mindustry_mod_Mods$4_swapActor_arc_scene_Element_arc_scene_Element_R_boolean 143
typedef jbool (*func_mindustry_mod_Mods$4_swapActor_arc_scene_Element_arc_scene_Element_R_boolean)(jcontext ctx, jobject self, jobject param0, jobject param1);
#define VTABLE_mindustry_mod_Mods$4_getChildren_R_arc_struct_SnapshotSeq 144
typedef jobject (*func_mindustry_mod_Mods$4_getChildren_R_arc_struct_SnapshotSeq)(jcontext ctx, jobject self);
#define VTABLE_mindustry_mod_Mods$4_hasChildren_R_boolean 145
typedef jbool (*func_mindustry_mod_Mods$4_hasChildren_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_mindustry_mod_Mods$4_isTransform_R_boolean 146
typedef jbool (*func_mindustry_mod_Mods$4_isTransform_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_mindustry_mod_Mods$4_setTransform_boolean 147
typedef void (*func_mindustry_mod_Mods$4_setTransform_boolean)(jcontext ctx, jobject self, jbool param0);
#define VTABLE_mindustry_mod_Mods$4_localToDescendantCoordinates_arc_scene_Element_arc_math_geom_Vec2_R_arc_math_geom_Vec2 148
typedef jobject (*func_mindustry_mod_Mods$4_localToDescendantCoordinates_arc_scene_Element_arc_math_geom_Vec2_R_arc_math_geom_Vec2)(jcontext ctx, jobject self, jobject param0, jobject param1);
#define VTABLE_mindustry_mod_Mods$4_toString_java_lang_StringBuilder_int 149
typedef void (*func_mindustry_mod_Mods$4_toString_java_lang_StringBuilder_int)(jcontext ctx, jobject self, jobject param0, jint param1);
#define VTABLE_mindustry_mod_Mods$4_setLayoutEnabled_arc_scene_Group_boolean 150
typedef void (*func_mindustry_mod_Mods$4_setLayoutEnabled_arc_scene_Group_boolean)(jcontext ctx, jobject self, jobject param0, jbool param1);
#define VTABLE_mindustry_mod_Mods$4_obtainCell_R_arc_scene_ui_layout_Cell 151
typedef jobject (*func_mindustry_mod_Mods$4_obtainCell_R_arc_scene_ui_layout_Cell)(jcontext ctx, jobject self);
#define VTABLE_mindustry_mod_Mods$4_fill_R_arc_scene_ui_layout_Table 152
typedef jobject (*func_mindustry_mod_Mods$4_fill_R_arc_scene_ui_layout_Table)(jcontext ctx, jobject self);
#define VTABLE_mindustry_mod_Mods$4_drawBackground_float_float 153
typedef void (*func_mindustry_mod_Mods$4_drawBackground_float_float)(jcontext ctx, jobject self, jfloat param0, jfloat param1);
#define VTABLE_mindustry_mod_Mods$4_background_arc_scene_style_Drawable_R_arc_scene_ui_layout_Table 154
typedef jobject (*func_mindustry_mod_Mods$4_background_arc_scene_style_Drawable_R_arc_scene_ui_layout_Table)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_mod_Mods$4_getBackground_R_arc_scene_style_Drawable 155
typedef jobject (*func_mindustry_mod_Mods$4_getBackground_R_arc_scene_style_Drawable)(jcontext ctx, jobject self);
#define VTABLE_mindustry_mod_Mods$4_setBackground_arc_scene_style_Drawable 156
typedef void (*func_mindustry_mod_Mods$4_setBackground_arc_scene_style_Drawable)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_mod_Mods$4_getClip_R_boolean 157
typedef jbool (*func_mindustry_mod_Mods$4_getClip_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_mindustry_mod_Mods$4_setClip_boolean 158
typedef void (*func_mindustry_mod_Mods$4_setClip_boolean)(jcontext ctx, jobject self, jbool param0);
#define VTABLE_mindustry_mod_Mods$4_add_arc_scene_Element_R_arc_scene_ui_layout_Cell 159
typedef jobject (*func_mindustry_mod_Mods$4_add_arc_scene_Element_R_arc_scene_ui_layout_Cell)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_mod_Mods$4_add_Array1_arc_scene_Element 160
typedef void (*func_mindustry_mod_Mods$4_add_Array1_arc_scene_Element)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_mod_Mods$4_collapser_arc_func_Cons_arc_func_Boolp_R_arc_scene_ui_layout_Cell 161
typedef jobject (*func_mindustry_mod_Mods$4_collapser_arc_func_Cons_arc_func_Boolp_R_arc_scene_ui_layout_Cell)(jcontext ctx, jobject self, jobject param0, jobject param1);
#define VTABLE_mindustry_mod_Mods$4_collapser_arc_scene_ui_layout_Table_arc_func_Boolp_R_arc_scene_ui_layout_Cell 162
typedef jobject (*func_mindustry_mod_Mods$4_collapser_arc_scene_ui_layout_Table_arc_func_Boolp_R_arc_scene_ui_layout_Cell)(jcontext ctx, jobject self, jobject param0, jobject param1);
#define VTABLE_mindustry_mod_Mods$4_collapser_arc_func_Cons_boolean_arc_func_Boolp_R_arc_scene_ui_layout_Cell 163
typedef jobject (*func_mindustry_mod_Mods$4_collapser_arc_func_Cons_boolean_arc_func_Boolp_R_arc_scene_ui_layout_Cell)(jcontext ctx, jobject self, jobject param0, jbool param1, jobject param2);
#define VTABLE_mindustry_mod_Mods$4_collapser_arc_scene_ui_layout_Table_boolean_arc_func_Boolp_R_arc_scene_ui_layout_Cell 164
typedef jobject (*func_mindustry_mod_Mods$4_collapser_arc_scene_ui_layout_Table_boolean_arc_func_Boolp_R_arc_scene_ui_layout_Cell)(jcontext ctx, jobject self, jobject param0, jbool param1, jobject param2);
#define VTABLE_mindustry_mod_Mods$4_table_R_arc_scene_ui_layout_Cell 165
typedef jobject (*func_mindustry_mod_Mods$4_table_R_arc_scene_ui_layout_Cell)(jcontext ctx, jobject self);
#define VTABLE_mindustry_mod_Mods$4_table_arc_scene_style_Drawable_R_arc_scene_ui_layout_Cell 166
typedef jobject (*func_mindustry_mod_Mods$4_table_arc_scene_style_Drawable_R_arc_scene_ui_layout_Cell)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_mod_Mods$4_table_arc_func_Cons_R_arc_scene_ui_layout_Cell 167
typedef jobject (*func_mindustry_mod_Mods$4_table_arc_func_Cons_R_arc_scene_ui_layout_Cell)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_mod_Mods$4_wrapTable_arc_func_Cons_R_arc_scene_ui_layout_Cell 168
typedef jobject (*func_mindustry_mod_Mods$4_wrapTable_arc_func_Cons_R_arc_scene_ui_layout_Cell)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_mod_Mods$4_table_arc_scene_style_Drawable_arc_func_Cons_R_arc_scene_ui_layout_Cell 169
typedef jobject (*func_mindustry_mod_Mods$4_table_arc_scene_style_Drawable_arc_func_Cons_R_arc_scene_ui_layout_Cell)(jcontext ctx, jobject self, jobject param0, jobject param1);
#define VTABLE_mindustry_mod_Mods$4_table_arc_scene_style_Drawable_int_arc_func_Cons_R_arc_scene_ui_layout_Cell 170
typedef jobject (*func_mindustry_mod_Mods$4_table_arc_scene_style_Drawable_int_arc_func_Cons_R_arc_scene_ui_layout_Cell)(jcontext ctx, jobject self, jobject param0, jint param1, jobject param2);
#define VTABLE_mindustry_mod_Mods$4_label_arc_func_Prov_R_arc_scene_ui_layout_Cell 171
typedef jobject (*func_mindustry_mod_Mods$4_label_arc_func_Prov_R_arc_scene_ui_layout_Cell)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_mod_Mods$4_labelWrap_arc_func_Prov_R_arc_scene_ui_layout_Cell 172
typedef jobject (*func_mindustry_mod_Mods$4_labelWrap_arc_func_Prov_R_arc_scene_ui_layout_Cell)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_mod_Mods$4_labelWrap_java_lang_String_R_arc_scene_ui_layout_Cell 173
typedef jobject (*func_mindustry_mod_Mods$4_labelWrap_java_lang_String_R_arc_scene_ui_layout_Cell)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_mod_Mods$4_pane_arc_func_Cons_R_arc_scene_ui_layout_Cell 174
typedef jobject (*func_mindustry_mod_Mods$4_pane_arc_func_Cons_R_arc_scene_ui_layout_Cell)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_mod_Mods$4_pane_arc_scene_ui_ScrollPane$ScrollPaneStyle_arc_func_Cons_R_arc_scene_ui_layout_Cell 175
typedef jobject (*func_mindustry_mod_Mods$4_pane_arc_scene_ui_ScrollPane$ScrollPaneStyle_arc_func_Cons_R_arc_scene_ui_layout_Cell)(jcontext ctx, jobject self, jobject param0, jobject param1);
#define VTABLE_mindustry_mod_Mods$4_pane_arc_scene_ui_ScrollPane$ScrollPaneStyle_arc_scene_Element_R_arc_scene_ui_layout_Cell 176
typedef jobject (*func_mindustry_mod_Mods$4_pane_arc_scene_ui_ScrollPane$ScrollPaneStyle_arc_scene_Element_R_arc_scene_ui_layout_Cell)(jcontext ctx, jobject self, jobject param0, jobject param1);
#define VTABLE_mindustry_mod_Mods$4_pane_arc_scene_Element_R_arc_scene_ui_layout_Cell 177
typedef jobject (*func_mindustry_mod_Mods$4_pane_arc_scene_Element_R_arc_scene_ui_layout_Cell)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_mod_Mods$4_add_java_lang_CharSequence_R_arc_scene_ui_layout_Cell 178
typedef jobject (*func_mindustry_mod_Mods$4_add_java_lang_CharSequence_R_arc_scene_ui_layout_Cell)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_mod_Mods$4_add_java_lang_CharSequence_float_R_arc_scene_ui_layout_Cell 179
typedef jobject (*func_mindustry_mod_Mods$4_add_java_lang_CharSequence_float_R_arc_scene_ui_layout_Cell)(jcontext ctx, jobject self, jobject param0, jfloat param1);
#define VTABLE_mindustry_mod_Mods$4_add_java_lang_CharSequence_arc_scene_ui_Label$LabelStyle_float_R_arc_scene_ui_layout_Cell 180
typedef jobject (*func_mindustry_mod_Mods$4_add_java_lang_CharSequence_arc_scene_ui_Label$LabelStyle_float_R_arc_scene_ui_layout_Cell)(jcontext ctx, jobject self, jobject param0, jobject param1, jfloat param2);
#define VTABLE_mindustry_mod_Mods$4_add_java_lang_CharSequence_arc_graphics_Color_float_R_arc_scene_ui_layout_Cell 181
typedef jobject (*func_mindustry_mod_Mods$4_add_java_lang_CharSequence_arc_graphics_Color_float_R_arc_scene_ui_layout_Cell)(jcontext ctx, jobject self, jobject param0, jobject param1, jfloat param2);
#define VTABLE_mindustry_mod_Mods$4_add_java_lang_CharSequence_arc_scene_ui_Label$LabelStyle_R_arc_scene_ui_layout_Cell 182
typedef jobject (*func_mindustry_mod_Mods$4_add_java_lang_CharSequence_arc_scene_ui_Label$LabelStyle_R_arc_scene_ui_layout_Cell)(jcontext ctx, jobject self, jobject param0, jobject param1);
#define VTABLE_mindustry_mod_Mods$4_add_java_lang_CharSequence_arc_graphics_Color_R_arc_scene_ui_layout_Cell 183
typedef jobject (*func_mindustry_mod_Mods$4_add_java_lang_CharSequence_arc_graphics_Color_R_arc_scene_ui_layout_Cell)(jcontext ctx, jobject self, jobject param0, jobject param1);
#define VTABLE_mindustry_mod_Mods$4_add_R_arc_scene_ui_layout_Cell 184
typedef jobject (*func_mindustry_mod_Mods$4_add_R_arc_scene_ui_layout_Cell)(jcontext ctx, jobject self);
#define VTABLE_mindustry_mod_Mods$4_stack_Array1_arc_scene_Element_R_arc_scene_ui_layout_Cell 185
typedef jobject (*func_mindustry_mod_Mods$4_stack_Array1_arc_scene_Element_R_arc_scene_ui_layout_Cell)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_mod_Mods$4_spacer_arc_func_Floatp_arc_func_Floatp_R_arc_scene_ui_layout_Cell 186
typedef jobject (*func_mindustry_mod_Mods$4_spacer_arc_func_Floatp_arc_func_Floatp_R_arc_scene_ui_layout_Cell)(jcontext ctx, jobject self, jobject param0, jobject param1);
#define VTABLE_mindustry_mod_Mods$4_spacerX_arc_func_Floatp_R_arc_scene_ui_layout_Cell 187
typedef jobject (*func_mindustry_mod_Mods$4_spacerX_arc_func_Floatp_R_arc_scene_ui_layout_Cell)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_mod_Mods$4_spacerY_arc_func_Floatp_R_arc_scene_ui_layout_Cell 188
typedef jobject (*func_mindustry_mod_Mods$4_spacerY_arc_func_Floatp_R_arc_scene_ui_layout_Cell)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_mod_Mods$4_image_arc_func_Prov_R_arc_scene_ui_layout_Cell 189
typedef jobject (*func_mindustry_mod_Mods$4_image_arc_func_Prov_R_arc_scene_ui_layout_Cell)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_mod_Mods$4_imageDraw_arc_func_Prov_R_arc_scene_ui_layout_Cell 190
typedef jobject (*func_mindustry_mod_Mods$4_imageDraw_arc_func_Prov_R_arc_scene_ui_layout_Cell)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_mod_Mods$4_image_R_arc_scene_ui_layout_Cell 191
typedef jobject (*func_mindustry_mod_Mods$4_image_R_arc_scene_ui_layout_Cell)(jcontext ctx, jobject self);
#define VTABLE_mindustry_mod_Mods$4_image_arc_scene_style_Drawable_R_arc_scene_ui_layout_Cell 192
typedef jobject (*func_mindustry_mod_Mods$4_image_arc_scene_style_Drawable_R_arc_scene_ui_layout_Cell)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_mod_Mods$4_image_arc_scene_style_Drawable_arc_graphics_Color_R_arc_scene_ui_layout_Cell 193
typedef jobject (*func_mindustry_mod_Mods$4_image_arc_scene_style_Drawable_arc_graphics_Color_R_arc_scene_ui_layout_Cell)(jcontext ctx, jobject self, jobject param0, jobject param1);
#define VTABLE_mindustry_mod_Mods$4_image_arc_graphics_g2d_TextureRegion_R_arc_scene_ui_layout_Cell 194
typedef jobject (*func_mindustry_mod_Mods$4_image_arc_graphics_g2d_TextureRegion_R_arc_scene_ui_layout_Cell)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_mod_Mods$4_check_java_lang_String_arc_func_Boolc_R_arc_scene_ui_layout_Cell 195
typedef jobject (*func_mindustry_mod_Mods$4_check_java_lang_String_arc_func_Boolc_R_arc_scene_ui_layout_Cell)(jcontext ctx, jobject self, jobject param0, jobject param1);
#define VTABLE_mindustry_mod_Mods$4_check_java_lang_String_boolean_arc_func_Boolc_R_arc_scene_ui_layout_Cell 196
typedef jobject (*func_mindustry_mod_Mods$4_check_java_lang_String_boolean_arc_func_Boolc_R_arc_scene_ui_layout_Cell)(jcontext ctx, jobject self, jobject param0, jbool param1, jobject param2);
#define VTABLE_mindustry_mod_Mods$4_check_java_lang_String_float_boolean_arc_func_Boolc_R_arc_scene_ui_layout_Cell 197
typedef jobject (*func_mindustry_mod_Mods$4_check_java_lang_String_float_boolean_arc_func_Boolc_R_arc_scene_ui_layout_Cell)(jcontext ctx, jobject self, jobject param0, jfloat param1, jbool param2, jobject param3);
#define VTABLE_mindustry_mod_Mods$4_button_arc_func_Cons_java_lang_Runnable_R_arc_scene_ui_layout_Cell 198
typedef jobject (*func_mindustry_mod_Mods$4_button_arc_func_Cons_java_lang_Runnable_R_arc_scene_ui_layout_Cell)(jcontext ctx, jobject self, jobject param0, jobject param1);
#define VTABLE_mindustry_mod_Mods$4_button_arc_func_Cons_arc_scene_ui_Button$ButtonStyle_java_lang_Runnable_R_arc_scene_ui_layout_Cell 199
typedef jobject (*func_mindustry_mod_Mods$4_button_arc_func_Cons_arc_scene_ui_Button$ButtonStyle_java_lang_Runnable_R_arc_scene_ui_layout_Cell)(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2);
#define VTABLE_mindustry_mod_Mods$4_button_java_lang_String_java_lang_Runnable_R_arc_scene_ui_layout_Cell 200
typedef jobject (*func_mindustry_mod_Mods$4_button_java_lang_String_java_lang_Runnable_R_arc_scene_ui_layout_Cell)(jcontext ctx, jobject self, jobject param0, jobject param1);
#define VTABLE_mindustry_mod_Mods$4_button_java_lang_String_arc_scene_ui_TextButton$TextButtonStyle_java_lang_Runnable_R_arc_scene_ui_layout_Cell 201
typedef jobject (*func_mindustry_mod_Mods$4_button_java_lang_String_arc_scene_ui_TextButton$TextButtonStyle_java_lang_Runnable_R_arc_scene_ui_layout_Cell)(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2);
#define VTABLE_mindustry_mod_Mods$4_button_arc_scene_style_Drawable_java_lang_Runnable_R_arc_scene_ui_layout_Cell 202
typedef jobject (*func_mindustry_mod_Mods$4_button_arc_scene_style_Drawable_java_lang_Runnable_R_arc_scene_ui_layout_Cell)(jcontext ctx, jobject self, jobject param0, jobject param1);
#define VTABLE_mindustry_mod_Mods$4_button_arc_scene_style_Drawable_float_java_lang_Runnable_R_arc_scene_ui_layout_Cell 203
typedef jobject (*func_mindustry_mod_Mods$4_button_arc_scene_style_Drawable_float_java_lang_Runnable_R_arc_scene_ui_layout_Cell)(jcontext ctx, jobject self, jobject param0, jfloat param1, jobject param2);
#define VTABLE_mindustry_mod_Mods$4_button_arc_scene_style_Drawable_arc_scene_ui_ImageButton$ImageButtonStyle_float_java_lang_Runnable_R_arc_scene_ui_layout_Cell 204
typedef jobject (*func_mindustry_mod_Mods$4_button_arc_scene_style_Drawable_arc_scene_ui_ImageButton$ImageButtonStyle_float_java_lang_Runnable_R_arc_scene_ui_layout_Cell)(jcontext ctx, jobject self, jobject param0, jobject param1, jfloat param2, jobject param3);
#define VTABLE_mindustry_mod_Mods$4_button_arc_scene_style_Drawable_arc_scene_ui_ImageButton$ImageButtonStyle_java_lang_Runnable_R_arc_scene_ui_layout_Cell 205
typedef jobject (*func_mindustry_mod_Mods$4_button_arc_scene_style_Drawable_arc_scene_ui_ImageButton$ImageButtonStyle_java_lang_Runnable_R_arc_scene_ui_layout_Cell)(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2);
#define VTABLE_mindustry_mod_Mods$4_field_java_lang_String_arc_func_Cons_R_arc_scene_ui_layout_Cell 206
typedef jobject (*func_mindustry_mod_Mods$4_field_java_lang_String_arc_func_Cons_R_arc_scene_ui_layout_Cell)(jcontext ctx, jobject self, jobject param0, jobject param1);
#define VTABLE_mindustry_mod_Mods$4_area_java_lang_String_arc_func_Cons_R_arc_scene_ui_layout_Cell 207
typedef jobject (*func_mindustry_mod_Mods$4_area_java_lang_String_arc_func_Cons_R_arc_scene_ui_layout_Cell)(jcontext ctx, jobject self, jobject param0, jobject param1);
#define VTABLE_mindustry_mod_Mods$4_area_java_lang_String_arc_scene_ui_TextField$TextFieldStyle_arc_func_Cons_R_arc_scene_ui_layout_Cell 208
typedef jobject (*func_mindustry_mod_Mods$4_area_java_lang_String_arc_scene_ui_TextField$TextFieldStyle_arc_func_Cons_R_arc_scene_ui_layout_Cell)(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2);
#define VTABLE_mindustry_mod_Mods$4_field_java_lang_String_arc_scene_ui_TextField$TextFieldFilter_arc_func_Cons_R_arc_scene_ui_layout_Cell 209
typedef jobject (*func_mindustry_mod_Mods$4_field_java_lang_String_arc_scene_ui_TextField$TextFieldFilter_arc_func_Cons_R_arc_scene_ui_layout_Cell)(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2);
#define VTABLE_mindustry_mod_Mods$4_field_java_lang_String_arc_scene_ui_TextField$TextFieldStyle_arc_func_Cons_R_arc_scene_ui_layout_Cell 210
typedef jobject (*func_mindustry_mod_Mods$4_field_java_lang_String_arc_scene_ui_TextField$TextFieldStyle_arc_func_Cons_R_arc_scene_ui_layout_Cell)(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2);
#define VTABLE_mindustry_mod_Mods$4_rect_arc_scene_ui_layout_Table$DrawRect_R_arc_scene_ui_layout_Cell 211
typedef jobject (*func_mindustry_mod_Mods$4_rect_arc_scene_ui_layout_Table$DrawRect_R_arc_scene_ui_layout_Cell)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_mod_Mods$4_buttonRow_java_lang_String_arc_scene_style_Drawable_java_lang_Runnable_R_arc_scene_ui_layout_Cell 212
typedef jobject (*func_mindustry_mod_Mods$4_buttonRow_java_lang_String_arc_scene_style_Drawable_java_lang_Runnable_R_arc_scene_ui_layout_Cell)(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2);
#define VTABLE_mindustry_mod_Mods$4_button_java_lang_String_arc_scene_style_Drawable_java_lang_Runnable_R_arc_scene_ui_layout_Cell 213
typedef jobject (*func_mindustry_mod_Mods$4_button_java_lang_String_arc_scene_style_Drawable_java_lang_Runnable_R_arc_scene_ui_layout_Cell)(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2);
#define VTABLE_mindustry_mod_Mods$4_button_java_lang_String_arc_scene_style_Drawable_float_java_lang_Runnable_R_arc_scene_ui_layout_Cell 214
typedef jobject (*func_mindustry_mod_Mods$4_button_java_lang_String_arc_scene_style_Drawable_float_java_lang_Runnable_R_arc_scene_ui_layout_Cell)(jcontext ctx, jobject self, jobject param0, jobject param1, jfloat param2, jobject param3);
#define VTABLE_mindustry_mod_Mods$4_button_java_lang_String_arc_scene_style_Drawable_arc_scene_ui_TextButton$TextButtonStyle_float_java_lang_Runnable_R_arc_scene_ui_layout_Cell 215
typedef jobject (*func_mindustry_mod_Mods$4_button_java_lang_String_arc_scene_style_Drawable_arc_scene_ui_TextButton$TextButtonStyle_float_java_lang_Runnable_R_arc_scene_ui_layout_Cell)(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2, jfloat param3, jobject param4);
#define VTABLE_mindustry_mod_Mods$4_button_java_lang_String_arc_scene_style_Drawable_arc_scene_ui_TextButton$TextButtonStyle_java_lang_Runnable_R_arc_scene_ui_layout_Cell 216
typedef jobject (*func_mindustry_mod_Mods$4_button_java_lang_String_arc_scene_style_Drawable_arc_scene_ui_TextButton$TextButtonStyle_java_lang_Runnable_R_arc_scene_ui_layout_Cell)(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2, jobject param3);
#define VTABLE_mindustry_mod_Mods$4_buttonCenter_java_lang_String_arc_scene_style_Drawable_float_java_lang_Runnable_R_arc_scene_ui_layout_Cell 217
typedef jobject (*func_mindustry_mod_Mods$4_buttonCenter_java_lang_String_arc_scene_style_Drawable_float_java_lang_Runnable_R_arc_scene_ui_layout_Cell)(jcontext ctx, jobject self, jobject param0, jobject param1, jfloat param2, jobject param3);
#define VTABLE_mindustry_mod_Mods$4_buttonCenter_java_lang_String_arc_scene_style_Drawable_java_lang_Runnable_R_arc_scene_ui_layout_Cell 218
typedef jobject (*func_mindustry_mod_Mods$4_buttonCenter_java_lang_String_arc_scene_style_Drawable_java_lang_Runnable_R_arc_scene_ui_layout_Cell)(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2);
#define VTABLE_mindustry_mod_Mods$4_buttonCenter_java_lang_String_arc_scene_style_Drawable_arc_scene_ui_TextButton$TextButtonStyle_float_java_lang_Runnable_R_arc_scene_ui_layout_Cell 219
typedef jobject (*func_mindustry_mod_Mods$4_buttonCenter_java_lang_String_arc_scene_style_Drawable_arc_scene_ui_TextButton$TextButtonStyle_float_java_lang_Runnable_R_arc_scene_ui_layout_Cell)(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2, jfloat param3, jobject param4);
#define VTABLE_mindustry_mod_Mods$4_slider_float_float_float_arc_func_Floatc_R_arc_scene_ui_layout_Cell 220
typedef jobject (*func_mindustry_mod_Mods$4_slider_float_float_float_arc_func_Floatc_R_arc_scene_ui_layout_Cell)(jcontext ctx, jobject self, jfloat param0, jfloat param1, jfloat param2, jobject param3);
#define VTABLE_mindustry_mod_Mods$4_slider_float_float_float_float_arc_func_Floatc_R_arc_scene_ui_layout_Cell 221
typedef jobject (*func_mindustry_mod_Mods$4_slider_float_float_float_float_arc_func_Floatc_R_arc_scene_ui_layout_Cell)(jcontext ctx, jobject self, jfloat param0, jfloat param1, jfloat param2, jfloat param3, jobject param4);
#define VTABLE_mindustry_mod_Mods$4_slider_float_float_float_float_boolean_arc_func_Floatc_R_arc_scene_ui_layout_Cell 222
typedef jobject (*func_mindustry_mod_Mods$4_slider_float_float_float_float_boolean_arc_func_Floatc_R_arc_scene_ui_layout_Cell)(jcontext ctx, jobject self, jfloat param0, jfloat param1, jfloat param2, jfloat param3, jbool param4, jobject param5);
#define VTABLE_mindustry_mod_Mods$4_reset 223
typedef void (*func_mindustry_mod_Mods$4_reset)(jcontext ctx, jobject self);
#define VTABLE_mindustry_mod_Mods$4_row_R_arc_scene_ui_layout_Table 224
typedef jobject (*func_mindustry_mod_Mods$4_row_R_arc_scene_ui_layout_Table)(jcontext ctx, jobject self);
#define VTABLE_mindustry_mod_Mods$4_endRow 225
typedef void (*func_mindustry_mod_Mods$4_endRow)(jcontext ctx, jobject self);
#define VTABLE_mindustry_mod_Mods$4_getCell_arc_scene_Element_R_arc_scene_ui_layout_Cell 226
typedef jobject (*func_mindustry_mod_Mods$4_getCell_arc_scene_Element_R_arc_scene_ui_layout_Cell)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_mod_Mods$4_getCells_R_arc_struct_Seq 227
typedef jobject (*func_mindustry_mod_Mods$4_getCells_R_arc_struct_Seq)(jcontext ctx, jobject self);
#define VTABLE_mindustry_mod_Mods$4_defaults_R_arc_scene_ui_layout_Cell 228
typedef jobject (*func_mindustry_mod_Mods$4_defaults_R_arc_scene_ui_layout_Cell)(jcontext ctx, jobject self);
#define VTABLE_mindustry_mod_Mods$4_margin_float_R_arc_scene_ui_layout_Table 229
typedef jobject (*func_mindustry_mod_Mods$4_margin_float_R_arc_scene_ui_layout_Table)(jcontext ctx, jobject self, jfloat param0);
#define VTABLE_mindustry_mod_Mods$4_margin_float_float_float_float_R_arc_scene_ui_layout_Table 230
typedef jobject (*func_mindustry_mod_Mods$4_margin_float_float_float_float_R_arc_scene_ui_layout_Table)(jcontext ctx, jobject self, jfloat param0, jfloat param1, jfloat param2, jfloat param3);
#define VTABLE_mindustry_mod_Mods$4_marginTop_float_R_arc_scene_ui_layout_Table 231
typedef jobject (*func_mindustry_mod_Mods$4_marginTop_float_R_arc_scene_ui_layout_Table)(jcontext ctx, jobject self, jfloat param0);
#define VTABLE_mindustry_mod_Mods$4_marginLeft_float_R_arc_scene_ui_layout_Table 232
typedef jobject (*func_mindustry_mod_Mods$4_marginLeft_float_R_arc_scene_ui_layout_Table)(jcontext ctx, jobject self, jfloat param0);
#define VTABLE_mindustry_mod_Mods$4_marginBottom_float_R_arc_scene_ui_layout_Table 233
typedef jobject (*func_mindustry_mod_Mods$4_marginBottom_float_R_arc_scene_ui_layout_Table)(jcontext ctx, jobject self, jfloat param0);
#define VTABLE_mindustry_mod_Mods$4_marginRight_float_R_arc_scene_ui_layout_Table 234
typedef jobject (*func_mindustry_mod_Mods$4_marginRight_float_R_arc_scene_ui_layout_Table)(jcontext ctx, jobject self, jfloat param0);
#define VTABLE_mindustry_mod_Mods$4_align_int_R_arc_scene_ui_layout_Table 235
typedef jobject (*func_mindustry_mod_Mods$4_align_int_R_arc_scene_ui_layout_Table)(jcontext ctx, jobject self, jint param0);
#define VTABLE_mindustry_mod_Mods$4_center_R_arc_scene_ui_layout_Table 236
typedef jobject (*func_mindustry_mod_Mods$4_center_R_arc_scene_ui_layout_Table)(jcontext ctx, jobject self);
#define VTABLE_mindustry_mod_Mods$4_top_R_arc_scene_ui_layout_Table 237
typedef jobject (*func_mindustry_mod_Mods$4_top_R_arc_scene_ui_layout_Table)(jcontext ctx, jobject self);
#define VTABLE_mindustry_mod_Mods$4_left_R_arc_scene_ui_layout_Table 238
typedef jobject (*func_mindustry_mod_Mods$4_left_R_arc_scene_ui_layout_Table)(jcontext ctx, jobject self);
#define VTABLE_mindustry_mod_Mods$4_bottom_R_arc_scene_ui_layout_Table 239
typedef jobject (*func_mindustry_mod_Mods$4_bottom_R_arc_scene_ui_layout_Table)(jcontext ctx, jobject self);
#define VTABLE_mindustry_mod_Mods$4_right_R_arc_scene_ui_layout_Table 240
typedef jobject (*func_mindustry_mod_Mods$4_right_R_arc_scene_ui_layout_Table)(jcontext ctx, jobject self);
#define VTABLE_mindustry_mod_Mods$4_getMarginTop_R_float 241
typedef jfloat (*func_mindustry_mod_Mods$4_getMarginTop_R_float)(jcontext ctx, jobject self);
#define VTABLE_mindustry_mod_Mods$4_getMarginLeft_R_float 242
typedef jfloat (*func_mindustry_mod_Mods$4_getMarginLeft_R_float)(jcontext ctx, jobject self);
#define VTABLE_mindustry_mod_Mods$4_getMarginBottom_R_float 243
typedef jfloat (*func_mindustry_mod_Mods$4_getMarginBottom_R_float)(jcontext ctx, jobject self);
#define VTABLE_mindustry_mod_Mods$4_getMarginRight_R_float 244
typedef jfloat (*func_mindustry_mod_Mods$4_getMarginRight_R_float)(jcontext ctx, jobject self);
#define VTABLE_mindustry_mod_Mods$4_getAlign_R_int 245
typedef jint (*func_mindustry_mod_Mods$4_getAlign_R_int)(jcontext ctx, jobject self);
#define VTABLE_mindustry_mod_Mods$4_getRow_float_R_int 246
typedef jint (*func_mindustry_mod_Mods$4_getRow_float_R_int)(jcontext ctx, jobject self, jfloat param0);
#define VTABLE_mindustry_mod_Mods$4_setRound_boolean 247
typedef void (*func_mindustry_mod_Mods$4_setRound_boolean)(jcontext ctx, jobject self, jbool param0);
#define VTABLE_mindustry_mod_Mods$4_getRows_R_int 248
typedef jint (*func_mindustry_mod_Mods$4_getRows_R_int)(jcontext ctx, jobject self);
#define VTABLE_mindustry_mod_Mods$4_getColumns_R_int 249
typedef jint (*func_mindustry_mod_Mods$4_getColumns_R_int)(jcontext ctx, jobject self);
#define VTABLE_mindustry_mod_Mods$4_getRowHeight_int_R_float 250
typedef jfloat (*func_mindustry_mod_Mods$4_getRowHeight_int_R_float)(jcontext ctx, jobject self, jint param0);
#define VTABLE_mindustry_mod_Mods$4_getColumnWidth_int_R_float 251
typedef jfloat (*func_mindustry_mod_Mods$4_getColumnWidth_int_R_float)(jcontext ctx, jobject self, jint param0);
#define VTABLE_mindustry_mod_Mods$4_ensureSize_Array1_float_int_R_Array1_float 252
typedef jobject (*func_mindustry_mod_Mods$4_ensureSize_Array1_float_int_R_Array1_float)(jcontext ctx, jobject self, jobject param0, jint param1);
#define VTABLE_mindustry_mod_Mods$4_computeSize 253
typedef void (*func_mindustry_mod_Mods$4_computeSize)(jcontext ctx, jobject self);
#define VTABLE_mindustry_mod_Mods$4_layout_float_float_float_float 254
typedef void (*func_mindustry_mod_Mods$4_layout_float_float_float_float)(jcontext ctx, jobject self, jfloat param0, jfloat param1, jfloat param2, jfloat param3);
#define VTABLE_mindustry_mod_Mods$4_getStyle_R_arc_scene_ui_Dialog$DialogStyle 255
typedef jobject (*func_mindustry_mod_Mods$4_getStyle_R_arc_scene_ui_Dialog$DialogStyle)(jcontext ctx, jobject self);
#define VTABLE_mindustry_mod_Mods$4_setStyle_arc_scene_ui_Dialog$DialogStyle 256
typedef void (*func_mindustry_mod_Mods$4_setStyle_arc_scene_ui_Dialog$DialogStyle)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_mod_Mods$4_keepWithinStage 257
typedef void (*func_mindustry_mod_Mods$4_keepWithinStage)(jcontext ctx, jobject self);
#define VTABLE_mindustry_mod_Mods$4_drawStageBackground_float_float_float_float 258
typedef void (*func_mindustry_mod_Mods$4_drawStageBackground_float_float_float_float)(jcontext ctx, jobject self, jfloat param0, jfloat param1, jfloat param2, jfloat param3);
#define VTABLE_mindustry_mod_Mods$4_centerWindow 259
typedef void (*func_mindustry_mod_Mods$4_centerWindow)(jcontext ctx, jobject self);
#define VTABLE_mindustry_mod_Mods$4_isMovable_R_boolean 260
typedef jbool (*func_mindustry_mod_Mods$4_isMovable_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_mindustry_mod_Mods$4_setMovable_boolean 261
typedef void (*func_mindustry_mod_Mods$4_setMovable_boolean)(jcontext ctx, jobject self, jbool param0);
#define VTABLE_mindustry_mod_Mods$4_isModal_R_boolean 262
typedef jbool (*func_mindustry_mod_Mods$4_isModal_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_mindustry_mod_Mods$4_setModal_boolean 263
typedef void (*func_mindustry_mod_Mods$4_setModal_boolean)(jcontext ctx, jobject self, jbool param0);
#define VTABLE_mindustry_mod_Mods$4_setKeepWithinStage_boolean 264
typedef void (*func_mindustry_mod_Mods$4_setKeepWithinStage_boolean)(jcontext ctx, jobject self, jbool param0);
#define VTABLE_mindustry_mod_Mods$4_isCentered_R_boolean 265
typedef jbool (*func_mindustry_mod_Mods$4_isCentered_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_mindustry_mod_Mods$4_setCentered_boolean 266
typedef void (*func_mindustry_mod_Mods$4_setCentered_boolean)(jcontext ctx, jobject self, jbool param0);
#define VTABLE_mindustry_mod_Mods$4_isResizable_R_boolean 267
typedef jbool (*func_mindustry_mod_Mods$4_isResizable_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_mindustry_mod_Mods$4_setResizable_boolean 268
typedef void (*func_mindustry_mod_Mods$4_setResizable_boolean)(jcontext ctx, jobject self, jbool param0);
#define VTABLE_mindustry_mod_Mods$4_setResizeBorder_int 269
typedef void (*func_mindustry_mod_Mods$4_setResizeBorder_int)(jcontext ctx, jobject self, jint param0);
#define VTABLE_mindustry_mod_Mods$4_isDragging_R_boolean 270
typedef jbool (*func_mindustry_mod_Mods$4_isDragging_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_mindustry_mod_Mods$4_updateScrollFocus 271
typedef void (*func_mindustry_mod_Mods$4_updateScrollFocus)(jcontext ctx, jobject self);
#define VTABLE_mindustry_mod_Mods$4_shown_java_lang_Runnable 272
typedef void (*func_mindustry_mod_Mods$4_shown_java_lang_Runnable)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_mod_Mods$4_hidden_java_lang_Runnable 273
typedef void (*func_mindustry_mod_Mods$4_hidden_java_lang_Runnable)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_mod_Mods$4_resizedShown_java_lang_Runnable 274
typedef void (*func_mindustry_mod_Mods$4_resizedShown_java_lang_Runnable)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_mod_Mods$4_resized_java_lang_Runnable 275
typedef void (*func_mindustry_mod_Mods$4_resized_java_lang_Runnable)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_mod_Mods$4_resized_boolean_java_lang_Runnable 276
typedef void (*func_mindustry_mod_Mods$4_resized_boolean_java_lang_Runnable)(jcontext ctx, jobject self, jbool param0, jobject param1);
#define VTABLE_mindustry_mod_Mods$4_addCloseButton 277
typedef void (*func_mindustry_mod_Mods$4_addCloseButton)(jcontext ctx, jobject self);
#define VTABLE_mindustry_mod_Mods$4_closeOnBack 278
typedef void (*func_mindustry_mod_Mods$4_closeOnBack)(jcontext ctx, jobject self);
#define VTABLE_mindustry_mod_Mods$4_closeOnBack_java_lang_Runnable 279
typedef void (*func_mindustry_mod_Mods$4_closeOnBack_java_lang_Runnable)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_mod_Mods$4_isShown_R_boolean 280
typedef jbool (*func_mindustry_mod_Mods$4_isShown_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_mindustry_mod_Mods$4_show_arc_scene_Scene_arc_scene_Action_R_arc_scene_ui_Dialog 281
typedef jobject (*func_mindustry_mod_Mods$4_show_arc_scene_Scene_arc_scene_Action_R_arc_scene_ui_Dialog)(jcontext ctx, jobject self, jobject param0, jobject param1);
#define VTABLE_mindustry_mod_Mods$4_toggle 282
typedef void (*func_mindustry_mod_Mods$4_toggle)(jcontext ctx, jobject self);
#define VTABLE_mindustry_mod_Mods$4_show_R_arc_scene_ui_Dialog 283
typedef jobject (*func_mindustry_mod_Mods$4_show_R_arc_scene_ui_Dialog)(jcontext ctx, jobject self);
#define VTABLE_mindustry_mod_Mods$4_show_arc_scene_Scene_R_arc_scene_ui_Dialog 284
typedef jobject (*func_mindustry_mod_Mods$4_show_arc_scene_Scene_R_arc_scene_ui_Dialog)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_mod_Mods$4_hide_arc_scene_Action 285
typedef void (*func_mindustry_mod_Mods$4_hide_arc_scene_Action)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_mod_Mods$4_hide 286
typedef void (*func_mindustry_mod_Mods$4_hide)(jcontext ctx, jobject self);
#define VTABLE_mindustry_mod_Mods$4_lambda$closeOnBack$1_java_lang_Runnable_arc_input_KeyCode 287
typedef void (*func_mindustry_mod_Mods$4_lambda$closeOnBack$1_java_lang_Runnable_arc_input_KeyCode)(jcontext ctx, jobject self, jobject param0, jobject param1);
#define VTABLE_mindustry_mod_Mods$4_lambda$updateScrollFocus$0_Array1_boolean 288
typedef void (*func_mindustry_mod_Mods$4_lambda$updateScrollFocus$0_Array1_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_mod_Mods$4_lambda$new$7_arc_struct_Seq 289
typedef void (*func_mindustry_mod_Mods$4_lambda$new$7_arc_struct_Seq)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_mod_Mods$4_lambda$new$5_arc_struct_Seq 290
typedef void (*func_mindustry_mod_Mods$4_lambda$new$5_arc_struct_Seq)(jcontext ctx, jobject self, jobject param0);

void mark_mindustry_mod_Mods$4(jobject object, jint mark, jint depth);
void clinit_mindustry_mod_Mods$4(jcontext ctx);
void init_mindustry_mod_Mods$4_mindustry_mod_Mods_java_lang_String_boolean_arc_struct_Seq(jcontext ctx, jobject self, jobject param0, jobject param1, jbool param2, jobject param3);
void M_mindustry_mod_Mods$4_lambda$new$7_arc_struct_Seq(jcontext ctx, jobject self, jobject param0);
void SM_mindustry_mod_Mods$4_lambda$new$9_arc_struct_Seq_mindustry_mod_Mods$LoadedMod(jcontext ctx, jobject param0, jobject param1);
void SM_mindustry_mod_Mods$4_lambda$new$8_arc_struct_Seq_mindustry_mod_Mods$LoadedMod(jcontext ctx, jobject param0, jobject param1);
void M_mindustry_mod_Mods$4_lambda$new$5_arc_struct_Seq(jcontext ctx, jobject self, jobject param0);
void SM_mindustry_mod_Mods$4_lambda$new$6_arc_struct_Seq_mindustry_mod_Mods$LoadedMod(jcontext ctx, jobject param0, jobject param1);
void SM_mindustry_mod_Mods$4_lambda$new$0_arc_struct_Seq_boolean_arc_scene_ui_layout_Table(jcontext ctx, jobject param0, jbool param1, jobject param2);
void SM_mindustry_mod_Mods$4_lambda$new$1_arc_scene_ui_layout_Table_boolean_mindustry_mod_Mods$LoadedMod(jcontext ctx, jobject param0, jbool param1, jobject param2);
void SM_mindustry_mod_Mods$4_lambda$new$2_mindustry_mod_Mods$LoadedMod_boolean_arc_scene_ui_layout_Table(jcontext ctx, jobject param0, jbool param1, jobject param2);
void SM_mindustry_mod_Mods$4_lambda$new$4_arc_scene_ui_layout_Table_java_lang_String(jcontext ctx, jobject param0, jobject param1);
void SM_mindustry_mod_Mods$4_lambda$new$3_arc_scene_ui_layout_Table_java_lang_String(jcontext ctx, jobject param0, jobject param1);

#ifdef __cplusplus
}
#endif

#endif
