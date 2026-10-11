#ifndef HEADER_mindustry_ui_BorderImage
#define HEADER_mindustry_ui_BorderImage

#include "Clearwing.h"
#include "arc/scene/ui/Image.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct mindustry_ui_BorderImage {
	arc_scene_ui_Image parent;
	jfloat F_thickness;
	jfloat F_pad;
	jref F_borderColor;
	jbool F_forceNearest;
	jbool F_drawAlpha;
	jref F_alphaColor;
} mindustry_ui_BorderImage;

extern Class class_mindustry_ui_BorderImage;


#define VTABLE_mindustry_ui_BorderImage_hashCode_R_int 0
typedef jint (*func_mindustry_ui_BorderImage_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_mindustry_ui_BorderImage_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_mindustry_ui_BorderImage_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_ui_BorderImage_clone_R_java_lang_Object 2
typedef jobject (*func_mindustry_ui_BorderImage_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_mindustry_ui_BorderImage_getClass_R_java_lang_Class 3
typedef jobject (*func_mindustry_ui_BorderImage_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_mindustry_ui_BorderImage_toString_R_java_lang_String 4
typedef jobject (*func_mindustry_ui_BorderImage_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_mindustry_ui_BorderImage_finalize 5
typedef void (*func_mindustry_ui_BorderImage_finalize)(jcontext ctx, jobject self);
#define VTABLE_mindustry_ui_BorderImage_notify 6
typedef void (*func_mindustry_ui_BorderImage_notify)(jcontext ctx, jobject self);
#define VTABLE_mindustry_ui_BorderImage_notifyAll 7
typedef void (*func_mindustry_ui_BorderImage_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_mindustry_ui_BorderImage_wait 8
typedef void (*func_mindustry_ui_BorderImage_wait)(jcontext ctx, jobject self);
#define VTABLE_mindustry_ui_BorderImage_wait_long 9
typedef void (*func_mindustry_ui_BorderImage_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_mindustry_ui_BorderImage_wait_long_int 10
typedef void (*func_mindustry_ui_BorderImage_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);
#define VTABLE_mindustry_ui_BorderImage_draw 11
typedef void (*func_mindustry_ui_BorderImage_draw)(jcontext ctx, jobject self);
#define VTABLE_mindustry_ui_BorderImage_act_float 12
typedef void (*func_mindustry_ui_BorderImage_act_float)(jcontext ctx, jobject self, jfloat param0);
#define VTABLE_mindustry_ui_BorderImage_updateVisibility 13
typedef void (*func_mindustry_ui_BorderImage_updateVisibility)(jcontext ctx, jobject self);
#define VTABLE_mindustry_ui_BorderImage_hasMouse_R_boolean 14
typedef jbool (*func_mindustry_ui_BorderImage_hasMouse_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_mindustry_ui_BorderImage_hasKeyboard_R_boolean 15
typedef jbool (*func_mindustry_ui_BorderImage_hasKeyboard_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_mindustry_ui_BorderImage_hasScroll_R_boolean 16
typedef jbool (*func_mindustry_ui_BorderImage_hasScroll_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_mindustry_ui_BorderImage_requestKeyboard 17
typedef void (*func_mindustry_ui_BorderImage_requestKeyboard)(jcontext ctx, jobject self);
#define VTABLE_mindustry_ui_BorderImage_requestScroll 18
typedef void (*func_mindustry_ui_BorderImage_requestScroll)(jcontext ctx, jobject self);
#define VTABLE_mindustry_ui_BorderImage_fire_arc_scene_event_SceneEvent_R_boolean 19
typedef jbool (*func_mindustry_ui_BorderImage_fire_arc_scene_event_SceneEvent_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_ui_BorderImage_notify_arc_scene_event_SceneEvent_boolean_R_boolean 20
typedef jbool (*func_mindustry_ui_BorderImage_notify_arc_scene_event_SceneEvent_boolean_R_boolean)(jcontext ctx, jobject self, jobject param0, jbool param1);
#define VTABLE_mindustry_ui_BorderImage_hit_float_float_boolean_R_arc_scene_Element 21
typedef jobject (*func_mindustry_ui_BorderImage_hit_float_float_boolean_R_arc_scene_Element)(jcontext ctx, jobject self, jfloat param0, jfloat param1, jbool param2);
#define VTABLE_mindustry_ui_BorderImage_remove_R_boolean 22
typedef jbool (*func_mindustry_ui_BorderImage_remove_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_mindustry_ui_BorderImage_dragged_arc_func_Floatc2 23
typedef void (*func_mindustry_ui_BorderImage_dragged_arc_func_Floatc2)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_ui_BorderImage_scrolled_arc_func_Floatc 24
typedef void (*func_mindustry_ui_BorderImage_scrolled_arc_func_Floatc)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_ui_BorderImage_addListener_arc_scene_event_EventListener_R_boolean 25
typedef jbool (*func_mindustry_ui_BorderImage_addListener_arc_scene_event_EventListener_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_ui_BorderImage_removeListener_arc_scene_event_EventListener_R_boolean 26
typedef jbool (*func_mindustry_ui_BorderImage_removeListener_arc_scene_event_EventListener_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_ui_BorderImage_getListeners_R_arc_struct_Seq 27
typedef jobject (*func_mindustry_ui_BorderImage_getListeners_R_arc_struct_Seq)(jcontext ctx, jobject self);
#define VTABLE_mindustry_ui_BorderImage_addCaptureListener_arc_scene_event_EventListener_R_boolean 28
typedef jbool (*func_mindustry_ui_BorderImage_addCaptureListener_arc_scene_event_EventListener_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_ui_BorderImage_removeCaptureListener_arc_scene_event_EventListener_R_boolean 29
typedef jbool (*func_mindustry_ui_BorderImage_removeCaptureListener_arc_scene_event_EventListener_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_ui_BorderImage_getCaptureListeners_R_arc_struct_Seq 30
typedef jobject (*func_mindustry_ui_BorderImage_getCaptureListeners_R_arc_struct_Seq)(jcontext ctx, jobject self);
#define VTABLE_mindustry_ui_BorderImage_addAction_arc_scene_Action 31
typedef void (*func_mindustry_ui_BorderImage_addAction_arc_scene_Action)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_ui_BorderImage_actions_Array1_arc_scene_Action 32
typedef void (*func_mindustry_ui_BorderImage_actions_Array1_arc_scene_Action)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_ui_BorderImage_removeAction_arc_scene_Action 33
typedef void (*func_mindustry_ui_BorderImage_removeAction_arc_scene_Action)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_ui_BorderImage_getActions_R_arc_struct_Seq 34
typedef jobject (*func_mindustry_ui_BorderImage_getActions_R_arc_struct_Seq)(jcontext ctx, jobject self);
#define VTABLE_mindustry_ui_BorderImage_hasActions_R_boolean 35
typedef jbool (*func_mindustry_ui_BorderImage_hasActions_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_mindustry_ui_BorderImage_clearActions 36
typedef void (*func_mindustry_ui_BorderImage_clearActions)(jcontext ctx, jobject self);
#define VTABLE_mindustry_ui_BorderImage_clearListeners 37
typedef void (*func_mindustry_ui_BorderImage_clearListeners)(jcontext ctx, jobject self);
#define VTABLE_mindustry_ui_BorderImage_clear 38
typedef void (*func_mindustry_ui_BorderImage_clear)(jcontext ctx, jobject self);
#define VTABLE_mindustry_ui_BorderImage_getScene_R_arc_scene_Scene 39
typedef jobject (*func_mindustry_ui_BorderImage_getScene_R_arc_scene_Scene)(jcontext ctx, jobject self);
#define VTABLE_mindustry_ui_BorderImage_setScene_arc_scene_Scene 40
typedef void (*func_mindustry_ui_BorderImage_setScene_arc_scene_Scene)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_ui_BorderImage_isDescendantOf_arc_func_Boolf_R_boolean 41
typedef jbool (*func_mindustry_ui_BorderImage_isDescendantOf_arc_func_Boolf_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_ui_BorderImage_isDescendantOf_arc_scene_Element_R_boolean 42
typedef jbool (*func_mindustry_ui_BorderImage_isDescendantOf_arc_scene_Element_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_ui_BorderImage_isAscendantOf_arc_scene_Element_R_boolean 43
typedef jbool (*func_mindustry_ui_BorderImage_isAscendantOf_arc_scene_Element_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_ui_BorderImage_hasParent_R_boolean 44
typedef jbool (*func_mindustry_ui_BorderImage_hasParent_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_mindustry_ui_BorderImage_isTouchable_R_boolean 45
typedef jbool (*func_mindustry_ui_BorderImage_isTouchable_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_mindustry_ui_BorderImage_getX_int_R_float 46
typedef jfloat (*func_mindustry_ui_BorderImage_getX_int_R_float)(jcontext ctx, jobject self, jint param0);
#define VTABLE_mindustry_ui_BorderImage_getY_int_R_float 47
typedef jfloat (*func_mindustry_ui_BorderImage_getY_int_R_float)(jcontext ctx, jobject self, jint param0);
#define VTABLE_mindustry_ui_BorderImage_setPosition_float_float 48
typedef void (*func_mindustry_ui_BorderImage_setPosition_float_float)(jcontext ctx, jobject self, jfloat param0, jfloat param1);
#define VTABLE_mindustry_ui_BorderImage_setPosition_float_float_int 49
typedef void (*func_mindustry_ui_BorderImage_setPosition_float_float_int)(jcontext ctx, jobject self, jfloat param0, jfloat param1, jint param2);
#define VTABLE_mindustry_ui_BorderImage_moveBy_float_float 50
typedef void (*func_mindustry_ui_BorderImage_moveBy_float_float)(jcontext ctx, jobject self, jfloat param0, jfloat param1);
#define VTABLE_mindustry_ui_BorderImage_getWidth_R_float 51
typedef jfloat (*func_mindustry_ui_BorderImage_getWidth_R_float)(jcontext ctx, jobject self);
#define VTABLE_mindustry_ui_BorderImage_setWidth_float 52
typedef void (*func_mindustry_ui_BorderImage_setWidth_float)(jcontext ctx, jobject self, jfloat param0);
#define VTABLE_mindustry_ui_BorderImage_getHeight_R_float 53
typedef jfloat (*func_mindustry_ui_BorderImage_getHeight_R_float)(jcontext ctx, jobject self);
#define VTABLE_mindustry_ui_BorderImage_setHeight_float 54
typedef void (*func_mindustry_ui_BorderImage_setHeight_float)(jcontext ctx, jobject self, jfloat param0);
#define VTABLE_mindustry_ui_BorderImage_getTop_R_float 55
typedef jfloat (*func_mindustry_ui_BorderImage_getTop_R_float)(jcontext ctx, jobject self);
#define VTABLE_mindustry_ui_BorderImage_getRight_R_float 56
typedef jfloat (*func_mindustry_ui_BorderImage_getRight_R_float)(jcontext ctx, jobject self);
#define VTABLE_mindustry_ui_BorderImage_sizeChanged 57
typedef void (*func_mindustry_ui_BorderImage_sizeChanged)(jcontext ctx, jobject self);
#define VTABLE_mindustry_ui_BorderImage_rotationChanged 58
typedef void (*func_mindustry_ui_BorderImage_rotationChanged)(jcontext ctx, jobject self);
#define VTABLE_mindustry_ui_BorderImage_setSize_float 59
typedef void (*func_mindustry_ui_BorderImage_setSize_float)(jcontext ctx, jobject self, jfloat param0);
#define VTABLE_mindustry_ui_BorderImage_setSize_float_float 60
typedef void (*func_mindustry_ui_BorderImage_setSize_float_float)(jcontext ctx, jobject self, jfloat param0, jfloat param1);
#define VTABLE_mindustry_ui_BorderImage_sizeBy_float 61
typedef void (*func_mindustry_ui_BorderImage_sizeBy_float)(jcontext ctx, jobject self, jfloat param0);
#define VTABLE_mindustry_ui_BorderImage_sizeBy_float_float 62
typedef void (*func_mindustry_ui_BorderImage_sizeBy_float_float)(jcontext ctx, jobject self, jfloat param0, jfloat param1);
#define VTABLE_mindustry_ui_BorderImage_setBounds_float_float_float_float 63
typedef void (*func_mindustry_ui_BorderImage_setBounds_float_float_float_float)(jcontext ctx, jobject self, jfloat param0, jfloat param1, jfloat param2, jfloat param3);
#define VTABLE_mindustry_ui_BorderImage_setOrigin_float_float 64
typedef void (*func_mindustry_ui_BorderImage_setOrigin_float_float)(jcontext ctx, jobject self, jfloat param0, jfloat param1);
#define VTABLE_mindustry_ui_BorderImage_setOrigin_int 65
typedef void (*func_mindustry_ui_BorderImage_setOrigin_int)(jcontext ctx, jobject self, jint param0);
#define VTABLE_mindustry_ui_BorderImage_setScale_float 66
typedef void (*func_mindustry_ui_BorderImage_setScale_float)(jcontext ctx, jobject self, jfloat param0);
#define VTABLE_mindustry_ui_BorderImage_setScale_float_float 67
typedef void (*func_mindustry_ui_BorderImage_setScale_float_float)(jcontext ctx, jobject self, jfloat param0, jfloat param1);
#define VTABLE_mindustry_ui_BorderImage_scaleBy_float 68
typedef void (*func_mindustry_ui_BorderImage_scaleBy_float)(jcontext ctx, jobject self, jfloat param0);
#define VTABLE_mindustry_ui_BorderImage_scaleBy_float_float 69
typedef void (*func_mindustry_ui_BorderImage_scaleBy_float_float)(jcontext ctx, jobject self, jfloat param0, jfloat param1);
#define VTABLE_mindustry_ui_BorderImage_getRotation_R_float 70
typedef jfloat (*func_mindustry_ui_BorderImage_getRotation_R_float)(jcontext ctx, jobject self);
#define VTABLE_mindustry_ui_BorderImage_setRotation_float 71
typedef void (*func_mindustry_ui_BorderImage_setRotation_float)(jcontext ctx, jobject self, jfloat param0);
#define VTABLE_mindustry_ui_BorderImage_setRotationOrigin_float_int 72
typedef void (*func_mindustry_ui_BorderImage_setRotationOrigin_float_int)(jcontext ctx, jobject self, jfloat param0, jint param1);
#define VTABLE_mindustry_ui_BorderImage_rotateBy_float 73
typedef void (*func_mindustry_ui_BorderImage_rotateBy_float)(jcontext ctx, jobject self, jfloat param0);
#define VTABLE_mindustry_ui_BorderImage_setColor_float_float_float_float 74
typedef void (*func_mindustry_ui_BorderImage_setColor_float_float_float_float)(jcontext ctx, jobject self, jfloat param0, jfloat param1, jfloat param2, jfloat param3);
#define VTABLE_mindustry_ui_BorderImage_setColor_arc_graphics_Color 75
typedef void (*func_mindustry_ui_BorderImage_setColor_arc_graphics_Color)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_ui_BorderImage_toFront 76
typedef void (*func_mindustry_ui_BorderImage_toFront)(jcontext ctx, jobject self);
#define VTABLE_mindustry_ui_BorderImage_toBack 77
typedef void (*func_mindustry_ui_BorderImage_toBack)(jcontext ctx, jobject self);
#define VTABLE_mindustry_ui_BorderImage_getZIndex_R_int 78
typedef jint (*func_mindustry_ui_BorderImage_getZIndex_R_int)(jcontext ctx, jobject self);
#define VTABLE_mindustry_ui_BorderImage_setZIndex_int 79
typedef void (*func_mindustry_ui_BorderImage_setZIndex_int)(jcontext ctx, jobject self, jint param0);
#define VTABLE_mindustry_ui_BorderImage_clipBegin_R_boolean 80
typedef jbool (*func_mindustry_ui_BorderImage_clipBegin_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_mindustry_ui_BorderImage_clipBegin_float_float_float_float_R_boolean 81
typedef jbool (*func_mindustry_ui_BorderImage_clipBegin_float_float_float_float_R_boolean)(jcontext ctx, jobject self, jfloat param0, jfloat param1, jfloat param2, jfloat param3);
#define VTABLE_mindustry_ui_BorderImage_clipEnd 82
typedef void (*func_mindustry_ui_BorderImage_clipEnd)(jcontext ctx, jobject self);
#define VTABLE_mindustry_ui_BorderImage_screenToLocalCoordinates_arc_math_geom_Vec2_R_arc_math_geom_Vec2 83
typedef jobject (*func_mindustry_ui_BorderImage_screenToLocalCoordinates_arc_math_geom_Vec2_R_arc_math_geom_Vec2)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_ui_BorderImage_stageToLocalCoordinates_arc_math_geom_Vec2_R_arc_math_geom_Vec2 84
typedef jobject (*func_mindustry_ui_BorderImage_stageToLocalCoordinates_arc_math_geom_Vec2_R_arc_math_geom_Vec2)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_ui_BorderImage_localToStageCoordinates_arc_math_geom_Vec2_R_arc_math_geom_Vec2 85
typedef jobject (*func_mindustry_ui_BorderImage_localToStageCoordinates_arc_math_geom_Vec2_R_arc_math_geom_Vec2)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_ui_BorderImage_localToParentCoordinates_arc_math_geom_Vec2_R_arc_math_geom_Vec2 86
typedef jobject (*func_mindustry_ui_BorderImage_localToParentCoordinates_arc_math_geom_Vec2_R_arc_math_geom_Vec2)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_ui_BorderImage_localToAscendantCoordinates_arc_scene_Element_arc_math_geom_Vec2_R_arc_math_geom_Vec2 87
typedef jobject (*func_mindustry_ui_BorderImage_localToAscendantCoordinates_arc_scene_Element_arc_math_geom_Vec2_R_arc_math_geom_Vec2)(jcontext ctx, jobject self, jobject param0, jobject param1);
#define VTABLE_mindustry_ui_BorderImage_parentToLocalCoordinates_arc_math_geom_Vec2_R_arc_math_geom_Vec2 88
typedef jobject (*func_mindustry_ui_BorderImage_parentToLocalCoordinates_arc_math_geom_Vec2_R_arc_math_geom_Vec2)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_ui_BorderImage_getMinWidth_R_float 89
typedef jfloat (*func_mindustry_ui_BorderImage_getMinWidth_R_float)(jcontext ctx, jobject self);
#define VTABLE_mindustry_ui_BorderImage_getMinHeight_R_float 90
typedef jfloat (*func_mindustry_ui_BorderImage_getMinHeight_R_float)(jcontext ctx, jobject self);
#define VTABLE_mindustry_ui_BorderImage_getPrefWidth_R_float 91
typedef jfloat (*func_mindustry_ui_BorderImage_getPrefWidth_R_float)(jcontext ctx, jobject self);
#define VTABLE_mindustry_ui_BorderImage_getPrefHeight_R_float 92
typedef jfloat (*func_mindustry_ui_BorderImage_getPrefHeight_R_float)(jcontext ctx, jobject self);
#define VTABLE_mindustry_ui_BorderImage_getMaxWidth_R_float 93
typedef jfloat (*func_mindustry_ui_BorderImage_getMaxWidth_R_float)(jcontext ctx, jobject self);
#define VTABLE_mindustry_ui_BorderImage_getMaxHeight_R_float 94
typedef jfloat (*func_mindustry_ui_BorderImage_getMaxHeight_R_float)(jcontext ctx, jobject self);
#define VTABLE_mindustry_ui_BorderImage_setLayoutEnabled_boolean 95
typedef void (*func_mindustry_ui_BorderImage_setLayoutEnabled_boolean)(jcontext ctx, jobject self, jbool param0);
#define VTABLE_mindustry_ui_BorderImage_validate 96
typedef void (*func_mindustry_ui_BorderImage_validate)(jcontext ctx, jobject self);
#define VTABLE_mindustry_ui_BorderImage_needsLayout_R_boolean 97
typedef jbool (*func_mindustry_ui_BorderImage_needsLayout_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_mindustry_ui_BorderImage_invalidate 98
typedef void (*func_mindustry_ui_BorderImage_invalidate)(jcontext ctx, jobject self);
#define VTABLE_mindustry_ui_BorderImage_invalidateHierarchy 99
typedef void (*func_mindustry_ui_BorderImage_invalidateHierarchy)(jcontext ctx, jobject self);
#define VTABLE_mindustry_ui_BorderImage_pack 100
typedef void (*func_mindustry_ui_BorderImage_pack)(jcontext ctx, jobject self);
#define VTABLE_mindustry_ui_BorderImage_setFillParent_boolean 101
typedef void (*func_mindustry_ui_BorderImage_setFillParent_boolean)(jcontext ctx, jobject self, jbool param0);
#define VTABLE_mindustry_ui_BorderImage_layout 102
typedef void (*func_mindustry_ui_BorderImage_layout)(jcontext ctx, jobject self);
#define VTABLE_mindustry_ui_BorderImage_keepInStage 103
typedef void (*func_mindustry_ui_BorderImage_keepInStage)(jcontext ctx, jobject self);
#define VTABLE_mindustry_ui_BorderImage_setTranslation_float_float 104
typedef void (*func_mindustry_ui_BorderImage_setTranslation_float_float)(jcontext ctx, jobject self, jfloat param0, jfloat param1);
#define VTABLE_mindustry_ui_BorderImage_keyDown_arc_input_KeyCode_java_lang_Runnable 105
typedef void (*func_mindustry_ui_BorderImage_keyDown_arc_input_KeyCode_java_lang_Runnable)(jcontext ctx, jobject self, jobject param0, jobject param1);
#define VTABLE_mindustry_ui_BorderImage_keyDown_arc_func_Cons 106
typedef void (*func_mindustry_ui_BorderImage_keyDown_arc_func_Cons)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_ui_BorderImage_fireClick 107
typedef void (*func_mindustry_ui_BorderImage_fireClick)(jcontext ctx, jobject self);
#define VTABLE_mindustry_ui_BorderImage_clicked_java_lang_Runnable_R_arc_scene_event_ClickListener 108
typedef jobject (*func_mindustry_ui_BorderImage_clicked_java_lang_Runnable_R_arc_scene_event_ClickListener)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_ui_BorderImage_clicked_arc_input_KeyCode_java_lang_Runnable_R_arc_scene_event_ClickListener 109
typedef jobject (*func_mindustry_ui_BorderImage_clicked_arc_input_KeyCode_java_lang_Runnable_R_arc_scene_event_ClickListener)(jcontext ctx, jobject self, jobject param0, jobject param1);
#define VTABLE_mindustry_ui_BorderImage_clicked_arc_func_Cons_java_lang_Runnable_R_arc_scene_event_ClickListener 110
typedef jobject (*func_mindustry_ui_BorderImage_clicked_arc_func_Cons_java_lang_Runnable_R_arc_scene_event_ClickListener)(jcontext ctx, jobject self, jobject param0, jobject param1);
#define VTABLE_mindustry_ui_BorderImage_clicked_arc_func_Cons_arc_func_Cons_R_arc_scene_event_ClickListener 111
typedef jobject (*func_mindustry_ui_BorderImage_clicked_arc_func_Cons_arc_func_Cons_R_arc_scene_event_ClickListener)(jcontext ctx, jobject self, jobject param0, jobject param1);
#define VTABLE_mindustry_ui_BorderImage_tapped_java_lang_Runnable_R_arc_scene_event_InputListener 112
typedef jobject (*func_mindustry_ui_BorderImage_tapped_java_lang_Runnable_R_arc_scene_event_InputListener)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_ui_BorderImage_hovered_java_lang_Runnable 113
typedef void (*func_mindustry_ui_BorderImage_hovered_java_lang_Runnable)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_ui_BorderImage_exited_java_lang_Runnable 114
typedef void (*func_mindustry_ui_BorderImage_exited_java_lang_Runnable)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_ui_BorderImage_released_java_lang_Runnable 115
typedef void (*func_mindustry_ui_BorderImage_released_java_lang_Runnable)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_ui_BorderImage_change 116
typedef void (*func_mindustry_ui_BorderImage_change)(jcontext ctx, jobject self);
#define VTABLE_mindustry_ui_BorderImage_changed_java_lang_Runnable 117
typedef void (*func_mindustry_ui_BorderImage_changed_java_lang_Runnable)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_ui_BorderImage_update_java_lang_Runnable_R_arc_scene_Element 118
typedef jobject (*func_mindustry_ui_BorderImage_update_java_lang_Runnable_R_arc_scene_Element)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_ui_BorderImage_visible_arc_func_Boolp_R_arc_scene_Element 119
typedef jobject (*func_mindustry_ui_BorderImage_visible_arc_func_Boolp_R_arc_scene_Element)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_ui_BorderImage_touchable_arc_func_Prov 120
typedef void (*func_mindustry_ui_BorderImage_touchable_arc_func_Prov)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_ui_BorderImage_getRegion_R_arc_graphics_g2d_TextureRegion 121
typedef jobject (*func_mindustry_ui_BorderImage_getRegion_R_arc_graphics_g2d_TextureRegion)(jcontext ctx, jobject self);
#define VTABLE_mindustry_ui_BorderImage_getDrawable_R_arc_scene_style_Drawable 122
typedef jobject (*func_mindustry_ui_BorderImage_getDrawable_R_arc_scene_style_Drawable)(jcontext ctx, jobject self);
#define VTABLE_mindustry_ui_BorderImage_setDrawable_arc_graphics_g2d_TextureRegion 123
typedef void (*func_mindustry_ui_BorderImage_setDrawable_arc_graphics_g2d_TextureRegion)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_ui_BorderImage_setDrawable_arc_scene_style_Drawable 124
typedef void (*func_mindustry_ui_BorderImage_setDrawable_arc_scene_style_Drawable)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_ui_BorderImage_setScaling_arc_util_Scaling_R_arc_scene_ui_Image 125
typedef jobject (*func_mindustry_ui_BorderImage_setScaling_arc_util_Scaling_R_arc_scene_ui_Image)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_ui_BorderImage_setAlign_int 126
typedef void (*func_mindustry_ui_BorderImage_setAlign_int)(jcontext ctx, jobject self, jint param0);
#define VTABLE_mindustry_ui_BorderImage_getImageX_R_float 127
typedef jfloat (*func_mindustry_ui_BorderImage_getImageX_R_float)(jcontext ctx, jobject self);
#define VTABLE_mindustry_ui_BorderImage_getImageY_R_float 128
typedef jfloat (*func_mindustry_ui_BorderImage_getImageY_R_float)(jcontext ctx, jobject self);
#define VTABLE_mindustry_ui_BorderImage_getImageWidth_R_float 129
typedef jfloat (*func_mindustry_ui_BorderImage_getImageWidth_R_float)(jcontext ctx, jobject self);
#define VTABLE_mindustry_ui_BorderImage_getImageHeight_R_float 130
typedef jfloat (*func_mindustry_ui_BorderImage_getImageHeight_R_float)(jcontext ctx, jobject self);
#define VTABLE_mindustry_ui_BorderImage_border_arc_graphics_Color_R_mindustry_ui_BorderImage 131
typedef jobject (*func_mindustry_ui_BorderImage_border_arc_graphics_Color_R_mindustry_ui_BorderImage)(jcontext ctx, jobject self, jobject param0);

void mark_mindustry_ui_BorderImage(jobject object, jint mark, jint depth);
void clinit_mindustry_ui_BorderImage(jcontext ctx);
void init_mindustry_ui_BorderImage(jcontext ctx, jobject self);
void init_mindustry_ui_BorderImage_arc_graphics_Texture(jcontext ctx, jobject self, jobject param0);
void init_mindustry_ui_BorderImage_arc_graphics_Texture_float(jcontext ctx, jobject self, jobject param0, jfloat param1);
void init_mindustry_ui_BorderImage_arc_graphics_g2d_TextureRegion_float(jcontext ctx, jobject self, jobject param0, jfloat param1);
void init_mindustry_ui_BorderImage_arc_scene_style_Drawable(jcontext ctx, jobject self, jobject param0);
jobject M_mindustry_ui_BorderImage_border_arc_graphics_Color_R_mindustry_ui_BorderImage(jcontext ctx, jobject self, jobject param0);
void M_mindustry_ui_BorderImage_draw(jcontext ctx, jobject self);

#ifdef __cplusplus
}
#endif

#endif
