#ifndef HEADER_arc_scene_Element
#define HEADER_arc_scene_Element

#include "Clearwing.h"
#include "java/lang/Object.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct arc_scene_Element {
	java_lang_Object parent;
	jref F_color;
	jfloat F_originX;
	jfloat F_originY;
	jfloat F_scaleX;
	jfloat F_scaleY;
	jfloat F_rotation;
	jref F_name;
	jbool F_fillParent;
	jref F_translation;
	jbool F_visible;
	jref F_userObject;
	jref F_touchable;
	jref F_parent;
	jref F_visibility;
	jref F_touchablility;
	jbool F_cullable;
	jref F_listeners;
	jref F_captureListeners;
	jref F_actions;
	jfloat F_x;
	jfloat F_y;
	jfloat F_width;
	jfloat F_height;
	jfloat F_parentAlpha;
	jref F_stage;
	jbool F_needsLayout;
	jbool F_layoutEnabled;
	jref F_update;
} arc_scene_Element;

extern Class class_arc_scene_Element;


#define VTABLE_arc_scene_Element_hashCode_R_int 0
typedef jint (*func_arc_scene_Element_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_arc_scene_Element_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_arc_scene_Element_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_scene_Element_clone_R_java_lang_Object 2
typedef jobject (*func_arc_scene_Element_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_arc_scene_Element_getClass_R_java_lang_Class 3
typedef jobject (*func_arc_scene_Element_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_arc_scene_Element_toString_R_java_lang_String 4
typedef jobject (*func_arc_scene_Element_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_arc_scene_Element_finalize 5
typedef void (*func_arc_scene_Element_finalize)(jcontext ctx, jobject self);
#define VTABLE_arc_scene_Element_notify 6
typedef void (*func_arc_scene_Element_notify)(jcontext ctx, jobject self);
#define VTABLE_arc_scene_Element_notifyAll 7
typedef void (*func_arc_scene_Element_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_arc_scene_Element_wait 8
typedef void (*func_arc_scene_Element_wait)(jcontext ctx, jobject self);
#define VTABLE_arc_scene_Element_wait_long 9
typedef void (*func_arc_scene_Element_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_arc_scene_Element_wait_long_int 10
typedef void (*func_arc_scene_Element_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);
#define VTABLE_arc_scene_Element_draw 11
typedef void (*func_arc_scene_Element_draw)(jcontext ctx, jobject self);
#define VTABLE_arc_scene_Element_act_float 12
typedef void (*func_arc_scene_Element_act_float)(jcontext ctx, jobject self, jfloat param0);
#define VTABLE_arc_scene_Element_updateVisibility 13
typedef void (*func_arc_scene_Element_updateVisibility)(jcontext ctx, jobject self);
#define VTABLE_arc_scene_Element_hasMouse_R_boolean 14
typedef jbool (*func_arc_scene_Element_hasMouse_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_arc_scene_Element_hasKeyboard_R_boolean 15
typedef jbool (*func_arc_scene_Element_hasKeyboard_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_arc_scene_Element_hasScroll_R_boolean 16
typedef jbool (*func_arc_scene_Element_hasScroll_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_arc_scene_Element_requestKeyboard 17
typedef void (*func_arc_scene_Element_requestKeyboard)(jcontext ctx, jobject self);
#define VTABLE_arc_scene_Element_requestScroll 18
typedef void (*func_arc_scene_Element_requestScroll)(jcontext ctx, jobject self);
#define VTABLE_arc_scene_Element_fire_arc_scene_event_SceneEvent_R_boolean 19
typedef jbool (*func_arc_scene_Element_fire_arc_scene_event_SceneEvent_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_scene_Element_notify_arc_scene_event_SceneEvent_boolean_R_boolean 20
typedef jbool (*func_arc_scene_Element_notify_arc_scene_event_SceneEvent_boolean_R_boolean)(jcontext ctx, jobject self, jobject param0, jbool param1);
#define VTABLE_arc_scene_Element_hit_float_float_boolean_R_arc_scene_Element 21
typedef jobject (*func_arc_scene_Element_hit_float_float_boolean_R_arc_scene_Element)(jcontext ctx, jobject self, jfloat param0, jfloat param1, jbool param2);
#define VTABLE_arc_scene_Element_remove_R_boolean 22
typedef jbool (*func_arc_scene_Element_remove_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_arc_scene_Element_dragged_arc_func_Floatc2 23
typedef void (*func_arc_scene_Element_dragged_arc_func_Floatc2)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_scene_Element_scrolled_arc_func_Floatc 24
typedef void (*func_arc_scene_Element_scrolled_arc_func_Floatc)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_scene_Element_addListener_arc_scene_event_EventListener_R_boolean 25
typedef jbool (*func_arc_scene_Element_addListener_arc_scene_event_EventListener_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_scene_Element_removeListener_arc_scene_event_EventListener_R_boolean 26
typedef jbool (*func_arc_scene_Element_removeListener_arc_scene_event_EventListener_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_scene_Element_getListeners_R_arc_struct_Seq 27
typedef jobject (*func_arc_scene_Element_getListeners_R_arc_struct_Seq)(jcontext ctx, jobject self);
#define VTABLE_arc_scene_Element_addCaptureListener_arc_scene_event_EventListener_R_boolean 28
typedef jbool (*func_arc_scene_Element_addCaptureListener_arc_scene_event_EventListener_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_scene_Element_removeCaptureListener_arc_scene_event_EventListener_R_boolean 29
typedef jbool (*func_arc_scene_Element_removeCaptureListener_arc_scene_event_EventListener_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_scene_Element_getCaptureListeners_R_arc_struct_Seq 30
typedef jobject (*func_arc_scene_Element_getCaptureListeners_R_arc_struct_Seq)(jcontext ctx, jobject self);
#define VTABLE_arc_scene_Element_addAction_arc_scene_Action 31
typedef void (*func_arc_scene_Element_addAction_arc_scene_Action)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_scene_Element_actions_Array1_arc_scene_Action 32
typedef void (*func_arc_scene_Element_actions_Array1_arc_scene_Action)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_scene_Element_removeAction_arc_scene_Action 33
typedef void (*func_arc_scene_Element_removeAction_arc_scene_Action)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_scene_Element_getActions_R_arc_struct_Seq 34
typedef jobject (*func_arc_scene_Element_getActions_R_arc_struct_Seq)(jcontext ctx, jobject self);
#define VTABLE_arc_scene_Element_hasActions_R_boolean 35
typedef jbool (*func_arc_scene_Element_hasActions_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_arc_scene_Element_clearActions 36
typedef void (*func_arc_scene_Element_clearActions)(jcontext ctx, jobject self);
#define VTABLE_arc_scene_Element_clearListeners 37
typedef void (*func_arc_scene_Element_clearListeners)(jcontext ctx, jobject self);
#define VTABLE_arc_scene_Element_clear 38
typedef void (*func_arc_scene_Element_clear)(jcontext ctx, jobject self);
#define VTABLE_arc_scene_Element_getScene_R_arc_scene_Scene 39
typedef jobject (*func_arc_scene_Element_getScene_R_arc_scene_Scene)(jcontext ctx, jobject self);
#define VTABLE_arc_scene_Element_setScene_arc_scene_Scene 40
typedef void (*func_arc_scene_Element_setScene_arc_scene_Scene)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_scene_Element_isDescendantOf_arc_func_Boolf_R_boolean 41
typedef jbool (*func_arc_scene_Element_isDescendantOf_arc_func_Boolf_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_scene_Element_isDescendantOf_arc_scene_Element_R_boolean 42
typedef jbool (*func_arc_scene_Element_isDescendantOf_arc_scene_Element_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_scene_Element_isAscendantOf_arc_scene_Element_R_boolean 43
typedef jbool (*func_arc_scene_Element_isAscendantOf_arc_scene_Element_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_scene_Element_hasParent_R_boolean 44
typedef jbool (*func_arc_scene_Element_hasParent_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_arc_scene_Element_isTouchable_R_boolean 45
typedef jbool (*func_arc_scene_Element_isTouchable_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_arc_scene_Element_getX_int_R_float 46
typedef jfloat (*func_arc_scene_Element_getX_int_R_float)(jcontext ctx, jobject self, jint param0);
#define VTABLE_arc_scene_Element_getY_int_R_float 47
typedef jfloat (*func_arc_scene_Element_getY_int_R_float)(jcontext ctx, jobject self, jint param0);
#define VTABLE_arc_scene_Element_setPosition_float_float 48
typedef void (*func_arc_scene_Element_setPosition_float_float)(jcontext ctx, jobject self, jfloat param0, jfloat param1);
#define VTABLE_arc_scene_Element_setPosition_float_float_int 49
typedef void (*func_arc_scene_Element_setPosition_float_float_int)(jcontext ctx, jobject self, jfloat param0, jfloat param1, jint param2);
#define VTABLE_arc_scene_Element_moveBy_float_float 50
typedef void (*func_arc_scene_Element_moveBy_float_float)(jcontext ctx, jobject self, jfloat param0, jfloat param1);
#define VTABLE_arc_scene_Element_getWidth_R_float 51
typedef jfloat (*func_arc_scene_Element_getWidth_R_float)(jcontext ctx, jobject self);
#define VTABLE_arc_scene_Element_setWidth_float 52
typedef void (*func_arc_scene_Element_setWidth_float)(jcontext ctx, jobject self, jfloat param0);
#define VTABLE_arc_scene_Element_getHeight_R_float 53
typedef jfloat (*func_arc_scene_Element_getHeight_R_float)(jcontext ctx, jobject self);
#define VTABLE_arc_scene_Element_setHeight_float 54
typedef void (*func_arc_scene_Element_setHeight_float)(jcontext ctx, jobject self, jfloat param0);
#define VTABLE_arc_scene_Element_getTop_R_float 55
typedef jfloat (*func_arc_scene_Element_getTop_R_float)(jcontext ctx, jobject self);
#define VTABLE_arc_scene_Element_getRight_R_float 56
typedef jfloat (*func_arc_scene_Element_getRight_R_float)(jcontext ctx, jobject self);
#define VTABLE_arc_scene_Element_sizeChanged 57
typedef void (*func_arc_scene_Element_sizeChanged)(jcontext ctx, jobject self);
#define VTABLE_arc_scene_Element_rotationChanged 58
typedef void (*func_arc_scene_Element_rotationChanged)(jcontext ctx, jobject self);
#define VTABLE_arc_scene_Element_setSize_float 59
typedef void (*func_arc_scene_Element_setSize_float)(jcontext ctx, jobject self, jfloat param0);
#define VTABLE_arc_scene_Element_setSize_float_float 60
typedef void (*func_arc_scene_Element_setSize_float_float)(jcontext ctx, jobject self, jfloat param0, jfloat param1);
#define VTABLE_arc_scene_Element_sizeBy_float 61
typedef void (*func_arc_scene_Element_sizeBy_float)(jcontext ctx, jobject self, jfloat param0);
#define VTABLE_arc_scene_Element_sizeBy_float_float 62
typedef void (*func_arc_scene_Element_sizeBy_float_float)(jcontext ctx, jobject self, jfloat param0, jfloat param1);
#define VTABLE_arc_scene_Element_setBounds_float_float_float_float 63
typedef void (*func_arc_scene_Element_setBounds_float_float_float_float)(jcontext ctx, jobject self, jfloat param0, jfloat param1, jfloat param2, jfloat param3);
#define VTABLE_arc_scene_Element_setOrigin_float_float 64
typedef void (*func_arc_scene_Element_setOrigin_float_float)(jcontext ctx, jobject self, jfloat param0, jfloat param1);
#define VTABLE_arc_scene_Element_setOrigin_int 65
typedef void (*func_arc_scene_Element_setOrigin_int)(jcontext ctx, jobject self, jint param0);
#define VTABLE_arc_scene_Element_setScale_float 66
typedef void (*func_arc_scene_Element_setScale_float)(jcontext ctx, jobject self, jfloat param0);
#define VTABLE_arc_scene_Element_setScale_float_float 67
typedef void (*func_arc_scene_Element_setScale_float_float)(jcontext ctx, jobject self, jfloat param0, jfloat param1);
#define VTABLE_arc_scene_Element_scaleBy_float 68
typedef void (*func_arc_scene_Element_scaleBy_float)(jcontext ctx, jobject self, jfloat param0);
#define VTABLE_arc_scene_Element_scaleBy_float_float 69
typedef void (*func_arc_scene_Element_scaleBy_float_float)(jcontext ctx, jobject self, jfloat param0, jfloat param1);
#define VTABLE_arc_scene_Element_getRotation_R_float 70
typedef jfloat (*func_arc_scene_Element_getRotation_R_float)(jcontext ctx, jobject self);
#define VTABLE_arc_scene_Element_setRotation_float 71
typedef void (*func_arc_scene_Element_setRotation_float)(jcontext ctx, jobject self, jfloat param0);
#define VTABLE_arc_scene_Element_setRotationOrigin_float_int 72
typedef void (*func_arc_scene_Element_setRotationOrigin_float_int)(jcontext ctx, jobject self, jfloat param0, jint param1);
#define VTABLE_arc_scene_Element_rotateBy_float 73
typedef void (*func_arc_scene_Element_rotateBy_float)(jcontext ctx, jobject self, jfloat param0);
#define VTABLE_arc_scene_Element_setColor_float_float_float_float 74
typedef void (*func_arc_scene_Element_setColor_float_float_float_float)(jcontext ctx, jobject self, jfloat param0, jfloat param1, jfloat param2, jfloat param3);
#define VTABLE_arc_scene_Element_setColor_arc_graphics_Color 75
typedef void (*func_arc_scene_Element_setColor_arc_graphics_Color)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_scene_Element_toFront 76
typedef void (*func_arc_scene_Element_toFront)(jcontext ctx, jobject self);
#define VTABLE_arc_scene_Element_toBack 77
typedef void (*func_arc_scene_Element_toBack)(jcontext ctx, jobject self);
#define VTABLE_arc_scene_Element_getZIndex_R_int 78
typedef jint (*func_arc_scene_Element_getZIndex_R_int)(jcontext ctx, jobject self);
#define VTABLE_arc_scene_Element_setZIndex_int 79
typedef void (*func_arc_scene_Element_setZIndex_int)(jcontext ctx, jobject self, jint param0);
#define VTABLE_arc_scene_Element_clipBegin_R_boolean 80
typedef jbool (*func_arc_scene_Element_clipBegin_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_arc_scene_Element_clipBegin_float_float_float_float_R_boolean 81
typedef jbool (*func_arc_scene_Element_clipBegin_float_float_float_float_R_boolean)(jcontext ctx, jobject self, jfloat param0, jfloat param1, jfloat param2, jfloat param3);
#define VTABLE_arc_scene_Element_clipEnd 82
typedef void (*func_arc_scene_Element_clipEnd)(jcontext ctx, jobject self);
#define VTABLE_arc_scene_Element_screenToLocalCoordinates_arc_math_geom_Vec2_R_arc_math_geom_Vec2 83
typedef jobject (*func_arc_scene_Element_screenToLocalCoordinates_arc_math_geom_Vec2_R_arc_math_geom_Vec2)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_scene_Element_stageToLocalCoordinates_arc_math_geom_Vec2_R_arc_math_geom_Vec2 84
typedef jobject (*func_arc_scene_Element_stageToLocalCoordinates_arc_math_geom_Vec2_R_arc_math_geom_Vec2)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_scene_Element_localToStageCoordinates_arc_math_geom_Vec2_R_arc_math_geom_Vec2 85
typedef jobject (*func_arc_scene_Element_localToStageCoordinates_arc_math_geom_Vec2_R_arc_math_geom_Vec2)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_scene_Element_localToParentCoordinates_arc_math_geom_Vec2_R_arc_math_geom_Vec2 86
typedef jobject (*func_arc_scene_Element_localToParentCoordinates_arc_math_geom_Vec2_R_arc_math_geom_Vec2)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_scene_Element_localToAscendantCoordinates_arc_scene_Element_arc_math_geom_Vec2_R_arc_math_geom_Vec2 87
typedef jobject (*func_arc_scene_Element_localToAscendantCoordinates_arc_scene_Element_arc_math_geom_Vec2_R_arc_math_geom_Vec2)(jcontext ctx, jobject self, jobject param0, jobject param1);
#define VTABLE_arc_scene_Element_parentToLocalCoordinates_arc_math_geom_Vec2_R_arc_math_geom_Vec2 88
typedef jobject (*func_arc_scene_Element_parentToLocalCoordinates_arc_math_geom_Vec2_R_arc_math_geom_Vec2)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_scene_Element_getMinWidth_R_float 89
typedef jfloat (*func_arc_scene_Element_getMinWidth_R_float)(jcontext ctx, jobject self);
#define VTABLE_arc_scene_Element_getMinHeight_R_float 90
typedef jfloat (*func_arc_scene_Element_getMinHeight_R_float)(jcontext ctx, jobject self);
#define VTABLE_arc_scene_Element_getPrefWidth_R_float 91
typedef jfloat (*func_arc_scene_Element_getPrefWidth_R_float)(jcontext ctx, jobject self);
#define VTABLE_arc_scene_Element_getPrefHeight_R_float 92
typedef jfloat (*func_arc_scene_Element_getPrefHeight_R_float)(jcontext ctx, jobject self);
#define VTABLE_arc_scene_Element_getMaxWidth_R_float 93
typedef jfloat (*func_arc_scene_Element_getMaxWidth_R_float)(jcontext ctx, jobject self);
#define VTABLE_arc_scene_Element_getMaxHeight_R_float 94
typedef jfloat (*func_arc_scene_Element_getMaxHeight_R_float)(jcontext ctx, jobject self);
#define VTABLE_arc_scene_Element_setLayoutEnabled_boolean 95
typedef void (*func_arc_scene_Element_setLayoutEnabled_boolean)(jcontext ctx, jobject self, jbool param0);
#define VTABLE_arc_scene_Element_validate 96
typedef void (*func_arc_scene_Element_validate)(jcontext ctx, jobject self);
#define VTABLE_arc_scene_Element_needsLayout_R_boolean 97
typedef jbool (*func_arc_scene_Element_needsLayout_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_arc_scene_Element_invalidate 98
typedef void (*func_arc_scene_Element_invalidate)(jcontext ctx, jobject self);
#define VTABLE_arc_scene_Element_invalidateHierarchy 99
typedef void (*func_arc_scene_Element_invalidateHierarchy)(jcontext ctx, jobject self);
#define VTABLE_arc_scene_Element_pack 100
typedef void (*func_arc_scene_Element_pack)(jcontext ctx, jobject self);
#define VTABLE_arc_scene_Element_setFillParent_boolean 101
typedef void (*func_arc_scene_Element_setFillParent_boolean)(jcontext ctx, jobject self, jbool param0);
#define VTABLE_arc_scene_Element_layout 102
typedef void (*func_arc_scene_Element_layout)(jcontext ctx, jobject self);
#define VTABLE_arc_scene_Element_keepInStage 103
typedef void (*func_arc_scene_Element_keepInStage)(jcontext ctx, jobject self);
#define VTABLE_arc_scene_Element_setTranslation_float_float 104
typedef void (*func_arc_scene_Element_setTranslation_float_float)(jcontext ctx, jobject self, jfloat param0, jfloat param1);
#define VTABLE_arc_scene_Element_keyDown_arc_input_KeyCode_java_lang_Runnable 105
typedef void (*func_arc_scene_Element_keyDown_arc_input_KeyCode_java_lang_Runnable)(jcontext ctx, jobject self, jobject param0, jobject param1);
#define VTABLE_arc_scene_Element_keyDown_arc_func_Cons 106
typedef void (*func_arc_scene_Element_keyDown_arc_func_Cons)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_scene_Element_fireClick 107
typedef void (*func_arc_scene_Element_fireClick)(jcontext ctx, jobject self);
#define VTABLE_arc_scene_Element_clicked_java_lang_Runnable_R_arc_scene_event_ClickListener 108
typedef jobject (*func_arc_scene_Element_clicked_java_lang_Runnable_R_arc_scene_event_ClickListener)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_scene_Element_clicked_arc_input_KeyCode_java_lang_Runnable_R_arc_scene_event_ClickListener 109
typedef jobject (*func_arc_scene_Element_clicked_arc_input_KeyCode_java_lang_Runnable_R_arc_scene_event_ClickListener)(jcontext ctx, jobject self, jobject param0, jobject param1);
#define VTABLE_arc_scene_Element_clicked_arc_func_Cons_java_lang_Runnable_R_arc_scene_event_ClickListener 110
typedef jobject (*func_arc_scene_Element_clicked_arc_func_Cons_java_lang_Runnable_R_arc_scene_event_ClickListener)(jcontext ctx, jobject self, jobject param0, jobject param1);
#define VTABLE_arc_scene_Element_clicked_arc_func_Cons_arc_func_Cons_R_arc_scene_event_ClickListener 111
typedef jobject (*func_arc_scene_Element_clicked_arc_func_Cons_arc_func_Cons_R_arc_scene_event_ClickListener)(jcontext ctx, jobject self, jobject param0, jobject param1);
#define VTABLE_arc_scene_Element_tapped_java_lang_Runnable_R_arc_scene_event_InputListener 112
typedef jobject (*func_arc_scene_Element_tapped_java_lang_Runnable_R_arc_scene_event_InputListener)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_scene_Element_hovered_java_lang_Runnable 113
typedef void (*func_arc_scene_Element_hovered_java_lang_Runnable)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_scene_Element_exited_java_lang_Runnable 114
typedef void (*func_arc_scene_Element_exited_java_lang_Runnable)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_scene_Element_released_java_lang_Runnable 115
typedef void (*func_arc_scene_Element_released_java_lang_Runnable)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_scene_Element_change 116
typedef void (*func_arc_scene_Element_change)(jcontext ctx, jobject self);
#define VTABLE_arc_scene_Element_changed_java_lang_Runnable 117
typedef void (*func_arc_scene_Element_changed_java_lang_Runnable)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_scene_Element_update_java_lang_Runnable_R_arc_scene_Element 118
typedef jobject (*func_arc_scene_Element_update_java_lang_Runnable_R_arc_scene_Element)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_scene_Element_visible_arc_func_Boolp_R_arc_scene_Element 119
typedef jobject (*func_arc_scene_Element_visible_arc_func_Boolp_R_arc_scene_Element)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_scene_Element_touchable_arc_func_Prov 120
typedef void (*func_arc_scene_Element_touchable_arc_func_Prov)(jcontext ctx, jobject self, jobject param0);

void mark_arc_scene_Element(jobject object, jint mark, jint depth);
void clinit_arc_scene_Element(jcontext ctx);
void init_arc_scene_Element(jcontext ctx, jobject self);
void M_arc_scene_Element_draw(jcontext ctx, jobject self);
void M_arc_scene_Element_act_float(jcontext ctx, jobject self, jfloat param0);
void M_arc_scene_Element_updateVisibility(jcontext ctx, jobject self);
jbool M_arc_scene_Element_hasMouse_R_boolean(jcontext ctx, jobject self);
jbool M_arc_scene_Element_hasKeyboard_R_boolean(jcontext ctx, jobject self);
jbool M_arc_scene_Element_hasScroll_R_boolean(jcontext ctx, jobject self);
void M_arc_scene_Element_requestKeyboard(jcontext ctx, jobject self);
void M_arc_scene_Element_requestScroll(jcontext ctx, jobject self);
jbool M_arc_scene_Element_fire_arc_scene_event_SceneEvent_R_boolean(jcontext ctx, jobject self, jobject param0);
jbool M_arc_scene_Element_notify_arc_scene_event_SceneEvent_boolean_R_boolean(jcontext ctx, jobject self, jobject param0, jbool param1);
jobject M_arc_scene_Element_hit_float_float_boolean_R_arc_scene_Element(jcontext ctx, jobject self, jfloat param0, jfloat param1, jbool param2);
jbool M_arc_scene_Element_remove_R_boolean(jcontext ctx, jobject self);
void M_arc_scene_Element_dragged_arc_func_Floatc2(jcontext ctx, jobject self, jobject param0);
void M_arc_scene_Element_scrolled_arc_func_Floatc(jcontext ctx, jobject self, jobject param0);
jbool M_arc_scene_Element_addListener_arc_scene_event_EventListener_R_boolean(jcontext ctx, jobject self, jobject param0);
jbool M_arc_scene_Element_removeListener_arc_scene_event_EventListener_R_boolean(jcontext ctx, jobject self, jobject param0);
jobject M_arc_scene_Element_getListeners_R_arc_struct_Seq(jcontext ctx, jobject self);
jbool M_arc_scene_Element_addCaptureListener_arc_scene_event_EventListener_R_boolean(jcontext ctx, jobject self, jobject param0);
jbool M_arc_scene_Element_removeCaptureListener_arc_scene_event_EventListener_R_boolean(jcontext ctx, jobject self, jobject param0);
jobject M_arc_scene_Element_getCaptureListeners_R_arc_struct_Seq(jcontext ctx, jobject self);
void M_arc_scene_Element_addAction_arc_scene_Action(jcontext ctx, jobject self, jobject param0);
void M_arc_scene_Element_actions_Array1_arc_scene_Action(jcontext ctx, jobject self, jobject param0);
void M_arc_scene_Element_removeAction_arc_scene_Action(jcontext ctx, jobject self, jobject param0);
jobject M_arc_scene_Element_getActions_R_arc_struct_Seq(jcontext ctx, jobject self);
jbool M_arc_scene_Element_hasActions_R_boolean(jcontext ctx, jobject self);
void M_arc_scene_Element_clearActions(jcontext ctx, jobject self);
void M_arc_scene_Element_clearListeners(jcontext ctx, jobject self);
void M_arc_scene_Element_clear(jcontext ctx, jobject self);
jobject M_arc_scene_Element_getScene_R_arc_scene_Scene(jcontext ctx, jobject self);
void M_arc_scene_Element_setScene_arc_scene_Scene(jcontext ctx, jobject self, jobject param0);
jbool M_arc_scene_Element_isDescendantOf_arc_func_Boolf_R_boolean(jcontext ctx, jobject self, jobject param0);
jbool M_arc_scene_Element_isDescendantOf_arc_scene_Element_R_boolean(jcontext ctx, jobject self, jobject param0);
jbool M_arc_scene_Element_isAscendantOf_arc_scene_Element_R_boolean(jcontext ctx, jobject self, jobject param0);
jbool M_arc_scene_Element_hasParent_R_boolean(jcontext ctx, jobject self);
jbool M_arc_scene_Element_isTouchable_R_boolean(jcontext ctx, jobject self);
jfloat M_arc_scene_Element_getX_int_R_float(jcontext ctx, jobject self, jint param0);
jfloat M_arc_scene_Element_getY_int_R_float(jcontext ctx, jobject self, jint param0);
void M_arc_scene_Element_setPosition_float_float(jcontext ctx, jobject self, jfloat param0, jfloat param1);
void M_arc_scene_Element_setPosition_float_float_int(jcontext ctx, jobject self, jfloat param0, jfloat param1, jint param2);
void M_arc_scene_Element_moveBy_float_float(jcontext ctx, jobject self, jfloat param0, jfloat param1);
jfloat M_arc_scene_Element_getWidth_R_float(jcontext ctx, jobject self);
void M_arc_scene_Element_setWidth_float(jcontext ctx, jobject self, jfloat param0);
jfloat M_arc_scene_Element_getHeight_R_float(jcontext ctx, jobject self);
void M_arc_scene_Element_setHeight_float(jcontext ctx, jobject self, jfloat param0);
jfloat M_arc_scene_Element_getTop_R_float(jcontext ctx, jobject self);
jfloat M_arc_scene_Element_getRight_R_float(jcontext ctx, jobject self);
void M_arc_scene_Element_sizeChanged(jcontext ctx, jobject self);
void M_arc_scene_Element_rotationChanged(jcontext ctx, jobject self);
void M_arc_scene_Element_setSize_float(jcontext ctx, jobject self, jfloat param0);
void M_arc_scene_Element_setSize_float_float(jcontext ctx, jobject self, jfloat param0, jfloat param1);
void M_arc_scene_Element_sizeBy_float(jcontext ctx, jobject self, jfloat param0);
void M_arc_scene_Element_sizeBy_float_float(jcontext ctx, jobject self, jfloat param0, jfloat param1);
void M_arc_scene_Element_setBounds_float_float_float_float(jcontext ctx, jobject self, jfloat param0, jfloat param1, jfloat param2, jfloat param3);
void M_arc_scene_Element_setOrigin_float_float(jcontext ctx, jobject self, jfloat param0, jfloat param1);
void M_arc_scene_Element_setOrigin_int(jcontext ctx, jobject self, jint param0);
void M_arc_scene_Element_setScale_float(jcontext ctx, jobject self, jfloat param0);
void M_arc_scene_Element_setScale_float_float(jcontext ctx, jobject self, jfloat param0, jfloat param1);
void M_arc_scene_Element_scaleBy_float(jcontext ctx, jobject self, jfloat param0);
void M_arc_scene_Element_scaleBy_float_float(jcontext ctx, jobject self, jfloat param0, jfloat param1);
jfloat M_arc_scene_Element_getRotation_R_float(jcontext ctx, jobject self);
void M_arc_scene_Element_setRotation_float(jcontext ctx, jobject self, jfloat param0);
void M_arc_scene_Element_setRotationOrigin_float_int(jcontext ctx, jobject self, jfloat param0, jint param1);
void M_arc_scene_Element_rotateBy_float(jcontext ctx, jobject self, jfloat param0);
void M_arc_scene_Element_setColor_float_float_float_float(jcontext ctx, jobject self, jfloat param0, jfloat param1, jfloat param2, jfloat param3);
void M_arc_scene_Element_setColor_arc_graphics_Color(jcontext ctx, jobject self, jobject param0);
void M_arc_scene_Element_toFront(jcontext ctx, jobject self);
void M_arc_scene_Element_toBack(jcontext ctx, jobject self);
jint M_arc_scene_Element_getZIndex_R_int(jcontext ctx, jobject self);
void M_arc_scene_Element_setZIndex_int(jcontext ctx, jobject self, jint param0);
jbool M_arc_scene_Element_clipBegin_R_boolean(jcontext ctx, jobject self);
jbool M_arc_scene_Element_clipBegin_float_float_float_float_R_boolean(jcontext ctx, jobject self, jfloat param0, jfloat param1, jfloat param2, jfloat param3);
void M_arc_scene_Element_clipEnd(jcontext ctx, jobject self);
jobject M_arc_scene_Element_screenToLocalCoordinates_arc_math_geom_Vec2_R_arc_math_geom_Vec2(jcontext ctx, jobject self, jobject param0);
jobject M_arc_scene_Element_stageToLocalCoordinates_arc_math_geom_Vec2_R_arc_math_geom_Vec2(jcontext ctx, jobject self, jobject param0);
jobject M_arc_scene_Element_localToStageCoordinates_arc_math_geom_Vec2_R_arc_math_geom_Vec2(jcontext ctx, jobject self, jobject param0);
jobject M_arc_scene_Element_localToParentCoordinates_arc_math_geom_Vec2_R_arc_math_geom_Vec2(jcontext ctx, jobject self, jobject param0);
jobject M_arc_scene_Element_localToAscendantCoordinates_arc_scene_Element_arc_math_geom_Vec2_R_arc_math_geom_Vec2(jcontext ctx, jobject self, jobject param0, jobject param1);
jobject M_arc_scene_Element_parentToLocalCoordinates_arc_math_geom_Vec2_R_arc_math_geom_Vec2(jcontext ctx, jobject self, jobject param0);
jfloat M_arc_scene_Element_getMinWidth_R_float(jcontext ctx, jobject self);
jfloat M_arc_scene_Element_getMinHeight_R_float(jcontext ctx, jobject self);
jfloat M_arc_scene_Element_getPrefWidth_R_float(jcontext ctx, jobject self);
jfloat M_arc_scene_Element_getPrefHeight_R_float(jcontext ctx, jobject self);
jfloat M_arc_scene_Element_getMaxWidth_R_float(jcontext ctx, jobject self);
jfloat M_arc_scene_Element_getMaxHeight_R_float(jcontext ctx, jobject self);
void M_arc_scene_Element_setLayoutEnabled_boolean(jcontext ctx, jobject self, jbool param0);
void M_arc_scene_Element_validate(jcontext ctx, jobject self);
jbool M_arc_scene_Element_needsLayout_R_boolean(jcontext ctx, jobject self);
void M_arc_scene_Element_invalidate(jcontext ctx, jobject self);
void M_arc_scene_Element_invalidateHierarchy(jcontext ctx, jobject self);
void M_arc_scene_Element_pack(jcontext ctx, jobject self);
void M_arc_scene_Element_setFillParent_boolean(jcontext ctx, jobject self, jbool param0);
void M_arc_scene_Element_layout(jcontext ctx, jobject self);
void M_arc_scene_Element_keepInStage(jcontext ctx, jobject self);
void M_arc_scene_Element_setTranslation_float_float(jcontext ctx, jobject self, jfloat param0, jfloat param1);
void M_arc_scene_Element_keyDown_arc_input_KeyCode_java_lang_Runnable(jcontext ctx, jobject self, jobject param0, jobject param1);
void M_arc_scene_Element_keyDown_arc_func_Cons(jcontext ctx, jobject self, jobject param0);
void M_arc_scene_Element_fireClick(jcontext ctx, jobject self);
jobject M_arc_scene_Element_clicked_java_lang_Runnable_R_arc_scene_event_ClickListener(jcontext ctx, jobject self, jobject param0);
jobject M_arc_scene_Element_clicked_arc_input_KeyCode_java_lang_Runnable_R_arc_scene_event_ClickListener(jcontext ctx, jobject self, jobject param0, jobject param1);
jobject M_arc_scene_Element_clicked_arc_func_Cons_java_lang_Runnable_R_arc_scene_event_ClickListener(jcontext ctx, jobject self, jobject param0, jobject param1);
jobject M_arc_scene_Element_clicked_arc_func_Cons_arc_func_Cons_R_arc_scene_event_ClickListener(jcontext ctx, jobject self, jobject param0, jobject param1);
jobject M_arc_scene_Element_tapped_java_lang_Runnable_R_arc_scene_event_InputListener(jcontext ctx, jobject self, jobject param0);
void M_arc_scene_Element_hovered_java_lang_Runnable(jcontext ctx, jobject self, jobject param0);
void M_arc_scene_Element_exited_java_lang_Runnable(jcontext ctx, jobject self, jobject param0);
void M_arc_scene_Element_released_java_lang_Runnable(jcontext ctx, jobject self, jobject param0);
void M_arc_scene_Element_change(jcontext ctx, jobject self);
void M_arc_scene_Element_changed_java_lang_Runnable(jcontext ctx, jobject self, jobject param0);
jobject M_arc_scene_Element_update_java_lang_Runnable_R_arc_scene_Element(jcontext ctx, jobject self, jobject param0);
jobject M_arc_scene_Element_visible_arc_func_Boolp_R_arc_scene_Element(jcontext ctx, jobject self, jobject param0);
void M_arc_scene_Element_touchable_arc_func_Prov(jcontext ctx, jobject self, jobject param0);
jobject M_arc_scene_Element_toString_R_java_lang_String(jcontext ctx, jobject self);
void SM_arc_scene_Element_lambda$clicked$1_java_lang_Runnable_arc_scene_event_ClickListener(jcontext ctx, jobject param0, jobject param1);
void SM_arc_scene_Element_lambda$clicked$0_arc_input_KeyCode_arc_scene_event_ClickListener(jcontext ctx, jobject param0, jobject param1);
void SM_arc_scene_Element_lambda$keyDown$0_arc_input_KeyCode_java_lang_Runnable_arc_input_KeyCode(jcontext ctx, jobject param0, jobject param1, jobject param2);

#ifdef __cplusplus
}
#endif

#endif
