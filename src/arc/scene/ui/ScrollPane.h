#ifndef HEADER_arc_scene_ui_ScrollPane
#define HEADER_arc_scene_ui_ScrollPane

#include "Clearwing.h"
#include "arc/scene/ui/layout/WidgetGroup.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct arc_scene_ui_ScrollPane {
	arc_scene_ui_layout_WidgetGroup parent;
	jref F_hScrollBounds;
	jref F_vScrollBounds;
	jref F_hKnobBounds;
	jref F_vKnobBounds;
	jref F_lastPoint;
	jref F_widgetAreaBounds;
	jref F_widgetCullingArea;
	jref F_scissorBounds;
	jbool F_disableX;
	jbool F_disableY;
	jbool F_scrollX;
	jbool F_scrollY;
	jbool F_vScrollOnRight;
	jbool F_hScrollOnBottom;
	jfloat F_amountX;
	jfloat F_amountY;
	jfloat F_visualAmountX;
	jfloat F_visualAmountY;
	jfloat F_maxX;
	jfloat F_maxY;
	jbool F_touchScrollH;
	jbool F_touchScrollV;
	jfloat F_areaWidth;
	jfloat F_areaHeight;
	jfloat F_fadeAlpha;
	jfloat F_fadeAlphaSeconds;
	jfloat F_fadeDelay;
	jfloat F_fadeDelaySeconds;
	jbool F_cancelTouchFocus;
	jbool F_flickScroll;
	jfloat F_velocityX;
	jfloat F_velocityY;
	jfloat F_flingTimer;
	jfloat F_flingTime;
	jint F_draggingPointer;
	jref F_style;
	jref F_widget;
	jref F_flickScrollListener;
	jbool F_fadeScrollBars;
	jbool F_smoothScrolling;
	jbool F_overscrollX;
	jbool F_overscrollY;
	jfloat F_overscrollDistance;
	jfloat F_overscrollSpeedMin;
	jfloat F_overscrollSpeedMax;
	jbool F_forceScrollX;
	jbool F_forceScrollY;
	jbool F_clamp;
	jbool F_scrollbarsOnTop;
	jbool F_variableSizeKnobs;
	jbool F_clip;
} arc_scene_ui_ScrollPane;

extern Class class_arc_scene_ui_ScrollPane;


#define VTABLE_arc_scene_ui_ScrollPane_hashCode_R_int 0
typedef jint (*func_arc_scene_ui_ScrollPane_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_arc_scene_ui_ScrollPane_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_arc_scene_ui_ScrollPane_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_scene_ui_ScrollPane_clone_R_java_lang_Object 2
typedef jobject (*func_arc_scene_ui_ScrollPane_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_arc_scene_ui_ScrollPane_getClass_R_java_lang_Class 3
typedef jobject (*func_arc_scene_ui_ScrollPane_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_arc_scene_ui_ScrollPane_toString_R_java_lang_String 4
typedef jobject (*func_arc_scene_ui_ScrollPane_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_arc_scene_ui_ScrollPane_finalize 5
typedef void (*func_arc_scene_ui_ScrollPane_finalize)(jcontext ctx, jobject self);
#define VTABLE_arc_scene_ui_ScrollPane_notify 6
typedef void (*func_arc_scene_ui_ScrollPane_notify)(jcontext ctx, jobject self);
#define VTABLE_arc_scene_ui_ScrollPane_notifyAll 7
typedef void (*func_arc_scene_ui_ScrollPane_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_arc_scene_ui_ScrollPane_wait 8
typedef void (*func_arc_scene_ui_ScrollPane_wait)(jcontext ctx, jobject self);
#define VTABLE_arc_scene_ui_ScrollPane_wait_long 9
typedef void (*func_arc_scene_ui_ScrollPane_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_arc_scene_ui_ScrollPane_wait_long_int 10
typedef void (*func_arc_scene_ui_ScrollPane_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);
#define VTABLE_arc_scene_ui_ScrollPane_draw 11
typedef void (*func_arc_scene_ui_ScrollPane_draw)(jcontext ctx, jobject self);
#define VTABLE_arc_scene_ui_ScrollPane_act_float 12
typedef void (*func_arc_scene_ui_ScrollPane_act_float)(jcontext ctx, jobject self, jfloat param0);
#define VTABLE_arc_scene_ui_ScrollPane_updateVisibility 13
typedef void (*func_arc_scene_ui_ScrollPane_updateVisibility)(jcontext ctx, jobject self);
#define VTABLE_arc_scene_ui_ScrollPane_hasMouse_R_boolean 14
typedef jbool (*func_arc_scene_ui_ScrollPane_hasMouse_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_arc_scene_ui_ScrollPane_hasKeyboard_R_boolean 15
typedef jbool (*func_arc_scene_ui_ScrollPane_hasKeyboard_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_arc_scene_ui_ScrollPane_hasScroll_R_boolean 16
typedef jbool (*func_arc_scene_ui_ScrollPane_hasScroll_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_arc_scene_ui_ScrollPane_requestKeyboard 17
typedef void (*func_arc_scene_ui_ScrollPane_requestKeyboard)(jcontext ctx, jobject self);
#define VTABLE_arc_scene_ui_ScrollPane_requestScroll 18
typedef void (*func_arc_scene_ui_ScrollPane_requestScroll)(jcontext ctx, jobject self);
#define VTABLE_arc_scene_ui_ScrollPane_fire_arc_scene_event_SceneEvent_R_boolean 19
typedef jbool (*func_arc_scene_ui_ScrollPane_fire_arc_scene_event_SceneEvent_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_scene_ui_ScrollPane_notify_arc_scene_event_SceneEvent_boolean_R_boolean 20
typedef jbool (*func_arc_scene_ui_ScrollPane_notify_arc_scene_event_SceneEvent_boolean_R_boolean)(jcontext ctx, jobject self, jobject param0, jbool param1);
#define VTABLE_arc_scene_ui_ScrollPane_hit_float_float_boolean_R_arc_scene_Element 21
typedef jobject (*func_arc_scene_ui_ScrollPane_hit_float_float_boolean_R_arc_scene_Element)(jcontext ctx, jobject self, jfloat param0, jfloat param1, jbool param2);
#define VTABLE_arc_scene_ui_ScrollPane_remove_R_boolean 22
typedef jbool (*func_arc_scene_ui_ScrollPane_remove_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_arc_scene_ui_ScrollPane_dragged_arc_func_Floatc2 23
typedef void (*func_arc_scene_ui_ScrollPane_dragged_arc_func_Floatc2)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_scene_ui_ScrollPane_scrolled_arc_func_Floatc 24
typedef void (*func_arc_scene_ui_ScrollPane_scrolled_arc_func_Floatc)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_scene_ui_ScrollPane_addListener_arc_scene_event_EventListener_R_boolean 25
typedef jbool (*func_arc_scene_ui_ScrollPane_addListener_arc_scene_event_EventListener_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_scene_ui_ScrollPane_removeListener_arc_scene_event_EventListener_R_boolean 26
typedef jbool (*func_arc_scene_ui_ScrollPane_removeListener_arc_scene_event_EventListener_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_scene_ui_ScrollPane_getListeners_R_arc_struct_Seq 27
typedef jobject (*func_arc_scene_ui_ScrollPane_getListeners_R_arc_struct_Seq)(jcontext ctx, jobject self);
#define VTABLE_arc_scene_ui_ScrollPane_addCaptureListener_arc_scene_event_EventListener_R_boolean 28
typedef jbool (*func_arc_scene_ui_ScrollPane_addCaptureListener_arc_scene_event_EventListener_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_scene_ui_ScrollPane_removeCaptureListener_arc_scene_event_EventListener_R_boolean 29
typedef jbool (*func_arc_scene_ui_ScrollPane_removeCaptureListener_arc_scene_event_EventListener_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_scene_ui_ScrollPane_getCaptureListeners_R_arc_struct_Seq 30
typedef jobject (*func_arc_scene_ui_ScrollPane_getCaptureListeners_R_arc_struct_Seq)(jcontext ctx, jobject self);
#define VTABLE_arc_scene_ui_ScrollPane_addAction_arc_scene_Action 31
typedef void (*func_arc_scene_ui_ScrollPane_addAction_arc_scene_Action)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_scene_ui_ScrollPane_actions_Array1_arc_scene_Action 32
typedef void (*func_arc_scene_ui_ScrollPane_actions_Array1_arc_scene_Action)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_scene_ui_ScrollPane_removeAction_arc_scene_Action 33
typedef void (*func_arc_scene_ui_ScrollPane_removeAction_arc_scene_Action)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_scene_ui_ScrollPane_getActions_R_arc_struct_Seq 34
typedef jobject (*func_arc_scene_ui_ScrollPane_getActions_R_arc_struct_Seq)(jcontext ctx, jobject self);
#define VTABLE_arc_scene_ui_ScrollPane_hasActions_R_boolean 35
typedef jbool (*func_arc_scene_ui_ScrollPane_hasActions_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_arc_scene_ui_ScrollPane_clearActions 36
typedef void (*func_arc_scene_ui_ScrollPane_clearActions)(jcontext ctx, jobject self);
#define VTABLE_arc_scene_ui_ScrollPane_clearListeners 37
typedef void (*func_arc_scene_ui_ScrollPane_clearListeners)(jcontext ctx, jobject self);
#define VTABLE_arc_scene_ui_ScrollPane_clear 38
typedef void (*func_arc_scene_ui_ScrollPane_clear)(jcontext ctx, jobject self);
#define VTABLE_arc_scene_ui_ScrollPane_getScene_R_arc_scene_Scene 39
typedef jobject (*func_arc_scene_ui_ScrollPane_getScene_R_arc_scene_Scene)(jcontext ctx, jobject self);
#define VTABLE_arc_scene_ui_ScrollPane_setScene_arc_scene_Scene 40
typedef void (*func_arc_scene_ui_ScrollPane_setScene_arc_scene_Scene)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_scene_ui_ScrollPane_isDescendantOf_arc_func_Boolf_R_boolean 41
typedef jbool (*func_arc_scene_ui_ScrollPane_isDescendantOf_arc_func_Boolf_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_scene_ui_ScrollPane_isDescendantOf_arc_scene_Element_R_boolean 42
typedef jbool (*func_arc_scene_ui_ScrollPane_isDescendantOf_arc_scene_Element_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_scene_ui_ScrollPane_isAscendantOf_arc_scene_Element_R_boolean 43
typedef jbool (*func_arc_scene_ui_ScrollPane_isAscendantOf_arc_scene_Element_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_scene_ui_ScrollPane_hasParent_R_boolean 44
typedef jbool (*func_arc_scene_ui_ScrollPane_hasParent_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_arc_scene_ui_ScrollPane_isTouchable_R_boolean 45
typedef jbool (*func_arc_scene_ui_ScrollPane_isTouchable_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_arc_scene_ui_ScrollPane_getX_int_R_float 46
typedef jfloat (*func_arc_scene_ui_ScrollPane_getX_int_R_float)(jcontext ctx, jobject self, jint param0);
#define VTABLE_arc_scene_ui_ScrollPane_getY_int_R_float 47
typedef jfloat (*func_arc_scene_ui_ScrollPane_getY_int_R_float)(jcontext ctx, jobject self, jint param0);
#define VTABLE_arc_scene_ui_ScrollPane_setPosition_float_float 48
typedef void (*func_arc_scene_ui_ScrollPane_setPosition_float_float)(jcontext ctx, jobject self, jfloat param0, jfloat param1);
#define VTABLE_arc_scene_ui_ScrollPane_setPosition_float_float_int 49
typedef void (*func_arc_scene_ui_ScrollPane_setPosition_float_float_int)(jcontext ctx, jobject self, jfloat param0, jfloat param1, jint param2);
#define VTABLE_arc_scene_ui_ScrollPane_moveBy_float_float 50
typedef void (*func_arc_scene_ui_ScrollPane_moveBy_float_float)(jcontext ctx, jobject self, jfloat param0, jfloat param1);
#define VTABLE_arc_scene_ui_ScrollPane_getWidth_R_float 51
typedef jfloat (*func_arc_scene_ui_ScrollPane_getWidth_R_float)(jcontext ctx, jobject self);
#define VTABLE_arc_scene_ui_ScrollPane_setWidth_float 52
typedef void (*func_arc_scene_ui_ScrollPane_setWidth_float)(jcontext ctx, jobject self, jfloat param0);
#define VTABLE_arc_scene_ui_ScrollPane_getHeight_R_float 53
typedef jfloat (*func_arc_scene_ui_ScrollPane_getHeight_R_float)(jcontext ctx, jobject self);
#define VTABLE_arc_scene_ui_ScrollPane_setHeight_float 54
typedef void (*func_arc_scene_ui_ScrollPane_setHeight_float)(jcontext ctx, jobject self, jfloat param0);
#define VTABLE_arc_scene_ui_ScrollPane_getTop_R_float 55
typedef jfloat (*func_arc_scene_ui_ScrollPane_getTop_R_float)(jcontext ctx, jobject self);
#define VTABLE_arc_scene_ui_ScrollPane_getRight_R_float 56
typedef jfloat (*func_arc_scene_ui_ScrollPane_getRight_R_float)(jcontext ctx, jobject self);
#define VTABLE_arc_scene_ui_ScrollPane_sizeChanged 57
typedef void (*func_arc_scene_ui_ScrollPane_sizeChanged)(jcontext ctx, jobject self);
#define VTABLE_arc_scene_ui_ScrollPane_rotationChanged 58
typedef void (*func_arc_scene_ui_ScrollPane_rotationChanged)(jcontext ctx, jobject self);
#define VTABLE_arc_scene_ui_ScrollPane_setSize_float 59
typedef void (*func_arc_scene_ui_ScrollPane_setSize_float)(jcontext ctx, jobject self, jfloat param0);
#define VTABLE_arc_scene_ui_ScrollPane_setSize_float_float 60
typedef void (*func_arc_scene_ui_ScrollPane_setSize_float_float)(jcontext ctx, jobject self, jfloat param0, jfloat param1);
#define VTABLE_arc_scene_ui_ScrollPane_sizeBy_float 61
typedef void (*func_arc_scene_ui_ScrollPane_sizeBy_float)(jcontext ctx, jobject self, jfloat param0);
#define VTABLE_arc_scene_ui_ScrollPane_sizeBy_float_float 62
typedef void (*func_arc_scene_ui_ScrollPane_sizeBy_float_float)(jcontext ctx, jobject self, jfloat param0, jfloat param1);
#define VTABLE_arc_scene_ui_ScrollPane_setBounds_float_float_float_float 63
typedef void (*func_arc_scene_ui_ScrollPane_setBounds_float_float_float_float)(jcontext ctx, jobject self, jfloat param0, jfloat param1, jfloat param2, jfloat param3);
#define VTABLE_arc_scene_ui_ScrollPane_setOrigin_float_float 64
typedef void (*func_arc_scene_ui_ScrollPane_setOrigin_float_float)(jcontext ctx, jobject self, jfloat param0, jfloat param1);
#define VTABLE_arc_scene_ui_ScrollPane_setOrigin_int 65
typedef void (*func_arc_scene_ui_ScrollPane_setOrigin_int)(jcontext ctx, jobject self, jint param0);
#define VTABLE_arc_scene_ui_ScrollPane_setScale_float 66
typedef void (*func_arc_scene_ui_ScrollPane_setScale_float)(jcontext ctx, jobject self, jfloat param0);
#define VTABLE_arc_scene_ui_ScrollPane_setScale_float_float 67
typedef void (*func_arc_scene_ui_ScrollPane_setScale_float_float)(jcontext ctx, jobject self, jfloat param0, jfloat param1);
#define VTABLE_arc_scene_ui_ScrollPane_scaleBy_float 68
typedef void (*func_arc_scene_ui_ScrollPane_scaleBy_float)(jcontext ctx, jobject self, jfloat param0);
#define VTABLE_arc_scene_ui_ScrollPane_scaleBy_float_float 69
typedef void (*func_arc_scene_ui_ScrollPane_scaleBy_float_float)(jcontext ctx, jobject self, jfloat param0, jfloat param1);
#define VTABLE_arc_scene_ui_ScrollPane_getRotation_R_float 70
typedef jfloat (*func_arc_scene_ui_ScrollPane_getRotation_R_float)(jcontext ctx, jobject self);
#define VTABLE_arc_scene_ui_ScrollPane_setRotation_float 71
typedef void (*func_arc_scene_ui_ScrollPane_setRotation_float)(jcontext ctx, jobject self, jfloat param0);
#define VTABLE_arc_scene_ui_ScrollPane_setRotationOrigin_float_int 72
typedef void (*func_arc_scene_ui_ScrollPane_setRotationOrigin_float_int)(jcontext ctx, jobject self, jfloat param0, jint param1);
#define VTABLE_arc_scene_ui_ScrollPane_rotateBy_float 73
typedef void (*func_arc_scene_ui_ScrollPane_rotateBy_float)(jcontext ctx, jobject self, jfloat param0);
#define VTABLE_arc_scene_ui_ScrollPane_setColor_float_float_float_float 74
typedef void (*func_arc_scene_ui_ScrollPane_setColor_float_float_float_float)(jcontext ctx, jobject self, jfloat param0, jfloat param1, jfloat param2, jfloat param3);
#define VTABLE_arc_scene_ui_ScrollPane_setColor_arc_graphics_Color 75
typedef void (*func_arc_scene_ui_ScrollPane_setColor_arc_graphics_Color)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_scene_ui_ScrollPane_toFront 76
typedef void (*func_arc_scene_ui_ScrollPane_toFront)(jcontext ctx, jobject self);
#define VTABLE_arc_scene_ui_ScrollPane_toBack 77
typedef void (*func_arc_scene_ui_ScrollPane_toBack)(jcontext ctx, jobject self);
#define VTABLE_arc_scene_ui_ScrollPane_getZIndex_R_int 78
typedef jint (*func_arc_scene_ui_ScrollPane_getZIndex_R_int)(jcontext ctx, jobject self);
#define VTABLE_arc_scene_ui_ScrollPane_setZIndex_int 79
typedef void (*func_arc_scene_ui_ScrollPane_setZIndex_int)(jcontext ctx, jobject self, jint param0);
#define VTABLE_arc_scene_ui_ScrollPane_clipBegin_R_boolean 80
typedef jbool (*func_arc_scene_ui_ScrollPane_clipBegin_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_arc_scene_ui_ScrollPane_clipBegin_float_float_float_float_R_boolean 81
typedef jbool (*func_arc_scene_ui_ScrollPane_clipBegin_float_float_float_float_R_boolean)(jcontext ctx, jobject self, jfloat param0, jfloat param1, jfloat param2, jfloat param3);
#define VTABLE_arc_scene_ui_ScrollPane_clipEnd 82
typedef void (*func_arc_scene_ui_ScrollPane_clipEnd)(jcontext ctx, jobject self);
#define VTABLE_arc_scene_ui_ScrollPane_screenToLocalCoordinates_arc_math_geom_Vec2_R_arc_math_geom_Vec2 83
typedef jobject (*func_arc_scene_ui_ScrollPane_screenToLocalCoordinates_arc_math_geom_Vec2_R_arc_math_geom_Vec2)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_scene_ui_ScrollPane_stageToLocalCoordinates_arc_math_geom_Vec2_R_arc_math_geom_Vec2 84
typedef jobject (*func_arc_scene_ui_ScrollPane_stageToLocalCoordinates_arc_math_geom_Vec2_R_arc_math_geom_Vec2)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_scene_ui_ScrollPane_localToStageCoordinates_arc_math_geom_Vec2_R_arc_math_geom_Vec2 85
typedef jobject (*func_arc_scene_ui_ScrollPane_localToStageCoordinates_arc_math_geom_Vec2_R_arc_math_geom_Vec2)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_scene_ui_ScrollPane_localToParentCoordinates_arc_math_geom_Vec2_R_arc_math_geom_Vec2 86
typedef jobject (*func_arc_scene_ui_ScrollPane_localToParentCoordinates_arc_math_geom_Vec2_R_arc_math_geom_Vec2)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_scene_ui_ScrollPane_localToAscendantCoordinates_arc_scene_Element_arc_math_geom_Vec2_R_arc_math_geom_Vec2 87
typedef jobject (*func_arc_scene_ui_ScrollPane_localToAscendantCoordinates_arc_scene_Element_arc_math_geom_Vec2_R_arc_math_geom_Vec2)(jcontext ctx, jobject self, jobject param0, jobject param1);
#define VTABLE_arc_scene_ui_ScrollPane_parentToLocalCoordinates_arc_math_geom_Vec2_R_arc_math_geom_Vec2 88
typedef jobject (*func_arc_scene_ui_ScrollPane_parentToLocalCoordinates_arc_math_geom_Vec2_R_arc_math_geom_Vec2)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_scene_ui_ScrollPane_getMinWidth_R_float 89
typedef jfloat (*func_arc_scene_ui_ScrollPane_getMinWidth_R_float)(jcontext ctx, jobject self);
#define VTABLE_arc_scene_ui_ScrollPane_getMinHeight_R_float 90
typedef jfloat (*func_arc_scene_ui_ScrollPane_getMinHeight_R_float)(jcontext ctx, jobject self);
#define VTABLE_arc_scene_ui_ScrollPane_getPrefWidth_R_float 91
typedef jfloat (*func_arc_scene_ui_ScrollPane_getPrefWidth_R_float)(jcontext ctx, jobject self);
#define VTABLE_arc_scene_ui_ScrollPane_getPrefHeight_R_float 92
typedef jfloat (*func_arc_scene_ui_ScrollPane_getPrefHeight_R_float)(jcontext ctx, jobject self);
#define VTABLE_arc_scene_ui_ScrollPane_getMaxWidth_R_float 93
typedef jfloat (*func_arc_scene_ui_ScrollPane_getMaxWidth_R_float)(jcontext ctx, jobject self);
#define VTABLE_arc_scene_ui_ScrollPane_getMaxHeight_R_float 94
typedef jfloat (*func_arc_scene_ui_ScrollPane_getMaxHeight_R_float)(jcontext ctx, jobject self);
#define VTABLE_arc_scene_ui_ScrollPane_setLayoutEnabled_boolean 95
typedef void (*func_arc_scene_ui_ScrollPane_setLayoutEnabled_boolean)(jcontext ctx, jobject self, jbool param0);
#define VTABLE_arc_scene_ui_ScrollPane_validate 96
typedef void (*func_arc_scene_ui_ScrollPane_validate)(jcontext ctx, jobject self);
#define VTABLE_arc_scene_ui_ScrollPane_needsLayout_R_boolean 97
typedef jbool (*func_arc_scene_ui_ScrollPane_needsLayout_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_arc_scene_ui_ScrollPane_invalidate 98
typedef void (*func_arc_scene_ui_ScrollPane_invalidate)(jcontext ctx, jobject self);
#define VTABLE_arc_scene_ui_ScrollPane_invalidateHierarchy 99
typedef void (*func_arc_scene_ui_ScrollPane_invalidateHierarchy)(jcontext ctx, jobject self);
#define VTABLE_arc_scene_ui_ScrollPane_pack 100
typedef void (*func_arc_scene_ui_ScrollPane_pack)(jcontext ctx, jobject self);
#define VTABLE_arc_scene_ui_ScrollPane_setFillParent_boolean 101
typedef void (*func_arc_scene_ui_ScrollPane_setFillParent_boolean)(jcontext ctx, jobject self, jbool param0);
#define VTABLE_arc_scene_ui_ScrollPane_layout 102
typedef void (*func_arc_scene_ui_ScrollPane_layout)(jcontext ctx, jobject self);
#define VTABLE_arc_scene_ui_ScrollPane_keepInStage 103
typedef void (*func_arc_scene_ui_ScrollPane_keepInStage)(jcontext ctx, jobject self);
#define VTABLE_arc_scene_ui_ScrollPane_setTranslation_float_float 104
typedef void (*func_arc_scene_ui_ScrollPane_setTranslation_float_float)(jcontext ctx, jobject self, jfloat param0, jfloat param1);
#define VTABLE_arc_scene_ui_ScrollPane_keyDown_arc_input_KeyCode_java_lang_Runnable 105
typedef void (*func_arc_scene_ui_ScrollPane_keyDown_arc_input_KeyCode_java_lang_Runnable)(jcontext ctx, jobject self, jobject param0, jobject param1);
#define VTABLE_arc_scene_ui_ScrollPane_keyDown_arc_func_Cons 106
typedef void (*func_arc_scene_ui_ScrollPane_keyDown_arc_func_Cons)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_scene_ui_ScrollPane_fireClick 107
typedef void (*func_arc_scene_ui_ScrollPane_fireClick)(jcontext ctx, jobject self);
#define VTABLE_arc_scene_ui_ScrollPane_clicked_java_lang_Runnable_R_arc_scene_event_ClickListener 108
typedef jobject (*func_arc_scene_ui_ScrollPane_clicked_java_lang_Runnable_R_arc_scene_event_ClickListener)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_scene_ui_ScrollPane_clicked_arc_input_KeyCode_java_lang_Runnable_R_arc_scene_event_ClickListener 109
typedef jobject (*func_arc_scene_ui_ScrollPane_clicked_arc_input_KeyCode_java_lang_Runnable_R_arc_scene_event_ClickListener)(jcontext ctx, jobject self, jobject param0, jobject param1);
#define VTABLE_arc_scene_ui_ScrollPane_clicked_arc_func_Cons_java_lang_Runnable_R_arc_scene_event_ClickListener 110
typedef jobject (*func_arc_scene_ui_ScrollPane_clicked_arc_func_Cons_java_lang_Runnable_R_arc_scene_event_ClickListener)(jcontext ctx, jobject self, jobject param0, jobject param1);
#define VTABLE_arc_scene_ui_ScrollPane_clicked_arc_func_Cons_arc_func_Cons_R_arc_scene_event_ClickListener 111
typedef jobject (*func_arc_scene_ui_ScrollPane_clicked_arc_func_Cons_arc_func_Cons_R_arc_scene_event_ClickListener)(jcontext ctx, jobject self, jobject param0, jobject param1);
#define VTABLE_arc_scene_ui_ScrollPane_tapped_java_lang_Runnable_R_arc_scene_event_InputListener 112
typedef jobject (*func_arc_scene_ui_ScrollPane_tapped_java_lang_Runnable_R_arc_scene_event_InputListener)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_scene_ui_ScrollPane_hovered_java_lang_Runnable 113
typedef void (*func_arc_scene_ui_ScrollPane_hovered_java_lang_Runnable)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_scene_ui_ScrollPane_exited_java_lang_Runnable 114
typedef void (*func_arc_scene_ui_ScrollPane_exited_java_lang_Runnable)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_scene_ui_ScrollPane_released_java_lang_Runnable 115
typedef void (*func_arc_scene_ui_ScrollPane_released_java_lang_Runnable)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_scene_ui_ScrollPane_change 116
typedef void (*func_arc_scene_ui_ScrollPane_change)(jcontext ctx, jobject self);
#define VTABLE_arc_scene_ui_ScrollPane_changed_java_lang_Runnable 117
typedef void (*func_arc_scene_ui_ScrollPane_changed_java_lang_Runnable)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_scene_ui_ScrollPane_update_java_lang_Runnable_R_arc_scene_Element 118
typedef jobject (*func_arc_scene_ui_ScrollPane_update_java_lang_Runnable_R_arc_scene_Element)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_scene_ui_ScrollPane_visible_arc_func_Boolp_R_arc_scene_Element 119
typedef jobject (*func_arc_scene_ui_ScrollPane_visible_arc_func_Boolp_R_arc_scene_Element)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_scene_ui_ScrollPane_touchable_arc_func_Prov 120
typedef void (*func_arc_scene_ui_ScrollPane_touchable_arc_func_Prov)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_scene_ui_ScrollPane_setCullingArea_arc_math_geom_Rect 121
typedef void (*func_arc_scene_ui_ScrollPane_setCullingArea_arc_math_geom_Rect)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_scene_ui_ScrollPane_drawChildren 122
typedef void (*func_arc_scene_ui_ScrollPane_drawChildren)(jcontext ctx, jobject self);
#define VTABLE_arc_scene_ui_ScrollPane_computeTransform_R_arc_math_Mat 123
typedef jobject (*func_arc_scene_ui_ScrollPane_computeTransform_R_arc_math_Mat)(jcontext ctx, jobject self);
#define VTABLE_arc_scene_ui_ScrollPane_applyTransform_arc_math_Mat 124
typedef void (*func_arc_scene_ui_ScrollPane_applyTransform_arc_math_Mat)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_scene_ui_ScrollPane_resetTransform 125
typedef void (*func_arc_scene_ui_ScrollPane_resetTransform)(jcontext ctx, jobject self);
#define VTABLE_arc_scene_ui_ScrollPane_getCullingArea_R_arc_math_geom_Rect 126
typedef jobject (*func_arc_scene_ui_ScrollPane_getCullingArea_R_arc_math_geom_Rect)(jcontext ctx, jobject self);
#define VTABLE_arc_scene_ui_ScrollPane_childrenChanged 127
typedef void (*func_arc_scene_ui_ScrollPane_childrenChanged)(jcontext ctx, jobject self);
#define VTABLE_arc_scene_ui_ScrollPane_forEach_arc_func_Cons 128
typedef void (*func_arc_scene_ui_ScrollPane_forEach_arc_func_Cons)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_scene_ui_ScrollPane_fill_arc_scene_ui_layout_Table$DrawRect_R_arc_scene_Element 129
typedef jobject (*func_arc_scene_ui_ScrollPane_fill_arc_scene_ui_layout_Table$DrawRect_R_arc_scene_Element)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_scene_ui_ScrollPane_fill_arc_func_Cons 130
typedef void (*func_arc_scene_ui_ScrollPane_fill_arc_func_Cons)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_scene_ui_ScrollPane_fill_arc_scene_style_Drawable_arc_func_Cons 131
typedef void (*func_arc_scene_ui_ScrollPane_fill_arc_scene_style_Drawable_arc_func_Cons)(jcontext ctx, jobject self, jobject param0, jobject param1);
#define VTABLE_arc_scene_ui_ScrollPane_addChild_arc_scene_Element 132
typedef void (*func_arc_scene_ui_ScrollPane_addChild_arc_scene_Element)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_scene_ui_ScrollPane_addChildAt_int_arc_scene_Element 133
typedef void (*func_arc_scene_ui_ScrollPane_addChildAt_int_arc_scene_Element)(jcontext ctx, jobject self, jint param0, jobject param1);
#define VTABLE_arc_scene_ui_ScrollPane_addChildBefore_arc_scene_Element_arc_scene_Element 134
typedef void (*func_arc_scene_ui_ScrollPane_addChildBefore_arc_scene_Element_arc_scene_Element)(jcontext ctx, jobject self, jobject param0, jobject param1);
#define VTABLE_arc_scene_ui_ScrollPane_addChildAfter_arc_scene_Element_arc_scene_Element 135
typedef void (*func_arc_scene_ui_ScrollPane_addChildAfter_arc_scene_Element_arc_scene_Element)(jcontext ctx, jobject self, jobject param0, jobject param1);
#define VTABLE_arc_scene_ui_ScrollPane_removeChild_arc_scene_Element_R_boolean 136
typedef jbool (*func_arc_scene_ui_ScrollPane_removeChild_arc_scene_Element_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_scene_ui_ScrollPane_removeChild_arc_scene_Element_boolean_R_boolean 137
typedef jbool (*func_arc_scene_ui_ScrollPane_removeChild_arc_scene_Element_boolean_R_boolean)(jcontext ctx, jobject self, jobject param0, jbool param1);
#define VTABLE_arc_scene_ui_ScrollPane_clearChildren 138
typedef void (*func_arc_scene_ui_ScrollPane_clearChildren)(jcontext ctx, jobject self);
#define VTABLE_arc_scene_ui_ScrollPane_find_java_lang_String_R_arc_scene_Element 139
typedef jobject (*func_arc_scene_ui_ScrollPane_find_java_lang_String_R_arc_scene_Element)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_scene_ui_ScrollPane_findVisible_java_lang_String_R_arc_scene_Element 140
typedef jobject (*func_arc_scene_ui_ScrollPane_findVisible_java_lang_String_R_arc_scene_Element)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_scene_ui_ScrollPane_find_arc_func_Boolf_R_arc_scene_Element 141
typedef jobject (*func_arc_scene_ui_ScrollPane_find_arc_func_Boolf_R_arc_scene_Element)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_scene_ui_ScrollPane_swapActor_int_int_R_boolean 142
typedef jbool (*func_arc_scene_ui_ScrollPane_swapActor_int_int_R_boolean)(jcontext ctx, jobject self, jint param0, jint param1);
#define VTABLE_arc_scene_ui_ScrollPane_swapActor_arc_scene_Element_arc_scene_Element_R_boolean 143
typedef jbool (*func_arc_scene_ui_ScrollPane_swapActor_arc_scene_Element_arc_scene_Element_R_boolean)(jcontext ctx, jobject self, jobject param0, jobject param1);
#define VTABLE_arc_scene_ui_ScrollPane_getChildren_R_arc_struct_SnapshotSeq 144
typedef jobject (*func_arc_scene_ui_ScrollPane_getChildren_R_arc_struct_SnapshotSeq)(jcontext ctx, jobject self);
#define VTABLE_arc_scene_ui_ScrollPane_hasChildren_R_boolean 145
typedef jbool (*func_arc_scene_ui_ScrollPane_hasChildren_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_arc_scene_ui_ScrollPane_isTransform_R_boolean 146
typedef jbool (*func_arc_scene_ui_ScrollPane_isTransform_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_arc_scene_ui_ScrollPane_setTransform_boolean 147
typedef void (*func_arc_scene_ui_ScrollPane_setTransform_boolean)(jcontext ctx, jobject self, jbool param0);
#define VTABLE_arc_scene_ui_ScrollPane_localToDescendantCoordinates_arc_scene_Element_arc_math_geom_Vec2_R_arc_math_geom_Vec2 148
typedef jobject (*func_arc_scene_ui_ScrollPane_localToDescendantCoordinates_arc_scene_Element_arc_math_geom_Vec2_R_arc_math_geom_Vec2)(jcontext ctx, jobject self, jobject param0, jobject param1);
#define VTABLE_arc_scene_ui_ScrollPane_toString_java_lang_StringBuilder_int 149
typedef void (*func_arc_scene_ui_ScrollPane_toString_java_lang_StringBuilder_int)(jcontext ctx, jobject self, jobject param0, jint param1);
#define VTABLE_arc_scene_ui_ScrollPane_setLayoutEnabled_arc_scene_Group_boolean 150
typedef void (*func_arc_scene_ui_ScrollPane_setLayoutEnabled_arc_scene_Group_boolean)(jcontext ctx, jobject self, jobject param0, jbool param1);
#define VTABLE_arc_scene_ui_ScrollPane_resetFade 151
typedef void (*func_arc_scene_ui_ScrollPane_resetFade)(jcontext ctx, jobject self);
#define VTABLE_arc_scene_ui_ScrollPane_cancelTouchFocus 152
typedef void (*func_arc_scene_ui_ScrollPane_cancelTouchFocus)(jcontext ctx, jobject self);
#define VTABLE_arc_scene_ui_ScrollPane_cancel 153
typedef void (*func_arc_scene_ui_ScrollPane_cancel)(jcontext ctx, jobject self);
#define VTABLE_arc_scene_ui_ScrollPane_clamp 154
typedef void (*func_arc_scene_ui_ScrollPane_clamp)(jcontext ctx, jobject self);
#define VTABLE_arc_scene_ui_ScrollPane_getStyle_R_arc_scene_ui_ScrollPane$ScrollPaneStyle 155
typedef jobject (*func_arc_scene_ui_ScrollPane_getStyle_R_arc_scene_ui_ScrollPane$ScrollPaneStyle)(jcontext ctx, jobject self);
#define VTABLE_arc_scene_ui_ScrollPane_setStyle_arc_scene_ui_ScrollPane$ScrollPaneStyle 156
typedef void (*func_arc_scene_ui_ScrollPane_setStyle_arc_scene_ui_ScrollPane$ScrollPaneStyle)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_scene_ui_ScrollPane_setClip_boolean 157
typedef void (*func_arc_scene_ui_ScrollPane_setClip_boolean)(jcontext ctx, jobject self, jbool param0);
#define VTABLE_arc_scene_ui_ScrollPane_fling_float_float_float 158
typedef void (*func_arc_scene_ui_ScrollPane_fling_float_float_float)(jcontext ctx, jobject self, jfloat param0, jfloat param1, jfloat param2);
#define VTABLE_arc_scene_ui_ScrollPane_getWidget_R_arc_scene_Element 159
typedef jobject (*func_arc_scene_ui_ScrollPane_getWidget_R_arc_scene_Element)(jcontext ctx, jobject self);
#define VTABLE_arc_scene_ui_ScrollPane_setWidget_arc_scene_Element 160
typedef void (*func_arc_scene_ui_ScrollPane_setWidget_arc_scene_Element)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_scene_ui_ScrollPane_scrollX_float 161
typedef void (*func_arc_scene_ui_ScrollPane_scrollX_float)(jcontext ctx, jobject self, jfloat param0);
#define VTABLE_arc_scene_ui_ScrollPane_scrollY_float 162
typedef void (*func_arc_scene_ui_ScrollPane_scrollY_float)(jcontext ctx, jobject self, jfloat param0);
#define VTABLE_arc_scene_ui_ScrollPane_visualScrollX_float 163
typedef void (*func_arc_scene_ui_ScrollPane_visualScrollX_float)(jcontext ctx, jobject self, jfloat param0);
#define VTABLE_arc_scene_ui_ScrollPane_visualScrollY_float 164
typedef void (*func_arc_scene_ui_ScrollPane_visualScrollY_float)(jcontext ctx, jobject self, jfloat param0);
#define VTABLE_arc_scene_ui_ScrollPane_getMouseWheelX_R_float 165
typedef jfloat (*func_arc_scene_ui_ScrollPane_getMouseWheelX_R_float)(jcontext ctx, jobject self);
#define VTABLE_arc_scene_ui_ScrollPane_getMouseWheelY_R_float 166
typedef jfloat (*func_arc_scene_ui_ScrollPane_getMouseWheelY_R_float)(jcontext ctx, jobject self);
#define VTABLE_arc_scene_ui_ScrollPane_setScrollXForce_float 167
typedef void (*func_arc_scene_ui_ScrollPane_setScrollXForce_float)(jcontext ctx, jobject self, jfloat param0);
#define VTABLE_arc_scene_ui_ScrollPane_getScrollX_R_float 168
typedef jfloat (*func_arc_scene_ui_ScrollPane_getScrollX_R_float)(jcontext ctx, jobject self);
#define VTABLE_arc_scene_ui_ScrollPane_setScrollYForce_float 169
typedef void (*func_arc_scene_ui_ScrollPane_setScrollYForce_float)(jcontext ctx, jobject self, jfloat param0);
#define VTABLE_arc_scene_ui_ScrollPane_getScrollY_R_float 170
typedef jfloat (*func_arc_scene_ui_ScrollPane_getScrollY_R_float)(jcontext ctx, jobject self);
#define VTABLE_arc_scene_ui_ScrollPane_updateVisualScroll 171
typedef void (*func_arc_scene_ui_ScrollPane_updateVisualScroll)(jcontext ctx, jobject self);
#define VTABLE_arc_scene_ui_ScrollPane_getVisualScrollX_R_float 172
typedef jfloat (*func_arc_scene_ui_ScrollPane_getVisualScrollX_R_float)(jcontext ctx, jobject self);
#define VTABLE_arc_scene_ui_ScrollPane_getVisualScrollY_R_float 173
typedef jfloat (*func_arc_scene_ui_ScrollPane_getVisualScrollY_R_float)(jcontext ctx, jobject self);
#define VTABLE_arc_scene_ui_ScrollPane_getVisualScrollPercentX_R_float 174
typedef jfloat (*func_arc_scene_ui_ScrollPane_getVisualScrollPercentX_R_float)(jcontext ctx, jobject self);
#define VTABLE_arc_scene_ui_ScrollPane_getVisualScrollPercentY_R_float 175
typedef jfloat (*func_arc_scene_ui_ScrollPane_getVisualScrollPercentY_R_float)(jcontext ctx, jobject self);
#define VTABLE_arc_scene_ui_ScrollPane_getScrollPercentX_R_float 176
typedef jfloat (*func_arc_scene_ui_ScrollPane_getScrollPercentX_R_float)(jcontext ctx, jobject self);
#define VTABLE_arc_scene_ui_ScrollPane_setScrollPercentX_float 177
typedef void (*func_arc_scene_ui_ScrollPane_setScrollPercentX_float)(jcontext ctx, jobject self, jfloat param0);
#define VTABLE_arc_scene_ui_ScrollPane_getScrollPercentY_R_float 178
typedef jfloat (*func_arc_scene_ui_ScrollPane_getScrollPercentY_R_float)(jcontext ctx, jobject self);
#define VTABLE_arc_scene_ui_ScrollPane_setScrollPercentY_float 179
typedef void (*func_arc_scene_ui_ScrollPane_setScrollPercentY_float)(jcontext ctx, jobject self, jfloat param0);
#define VTABLE_arc_scene_ui_ScrollPane_setFlickScroll_boolean 180
typedef void (*func_arc_scene_ui_ScrollPane_setFlickScroll_boolean)(jcontext ctx, jobject self, jbool param0);
#define VTABLE_arc_scene_ui_ScrollPane_setFlickScrollTapSquareSize_float 181
typedef void (*func_arc_scene_ui_ScrollPane_setFlickScrollTapSquareSize_float)(jcontext ctx, jobject self, jfloat param0);
#define VTABLE_arc_scene_ui_ScrollPane_scrollTo_float_float_float_float 182
typedef void (*func_arc_scene_ui_ScrollPane_scrollTo_float_float_float_float)(jcontext ctx, jobject self, jfloat param0, jfloat param1, jfloat param2, jfloat param3);
#define VTABLE_arc_scene_ui_ScrollPane_scrollTo_float_float_float_float_boolean_boolean 183
typedef void (*func_arc_scene_ui_ScrollPane_scrollTo_float_float_float_float_boolean_boolean)(jcontext ctx, jobject self, jfloat param0, jfloat param1, jfloat param2, jfloat param3, jbool param4, jbool param5);
#define VTABLE_arc_scene_ui_ScrollPane_getMaxX_R_float 184
typedef jfloat (*func_arc_scene_ui_ScrollPane_getMaxX_R_float)(jcontext ctx, jobject self);
#define VTABLE_arc_scene_ui_ScrollPane_getMaxY_R_float 185
typedef jfloat (*func_arc_scene_ui_ScrollPane_getMaxY_R_float)(jcontext ctx, jobject self);
#define VTABLE_arc_scene_ui_ScrollPane_getScrollBarHeight_R_float 186
typedef jfloat (*func_arc_scene_ui_ScrollPane_getScrollBarHeight_R_float)(jcontext ctx, jobject self);
#define VTABLE_arc_scene_ui_ScrollPane_getScrollBarWidth_R_float 187
typedef jfloat (*func_arc_scene_ui_ScrollPane_getScrollBarWidth_R_float)(jcontext ctx, jobject self);
#define VTABLE_arc_scene_ui_ScrollPane_getScrollWidth_R_float 188
typedef jfloat (*func_arc_scene_ui_ScrollPane_getScrollWidth_R_float)(jcontext ctx, jobject self);
#define VTABLE_arc_scene_ui_ScrollPane_getScrollHeight_R_float 189
typedef jfloat (*func_arc_scene_ui_ScrollPane_getScrollHeight_R_float)(jcontext ctx, jobject self);
#define VTABLE_arc_scene_ui_ScrollPane_isScrollX_R_boolean 190
typedef jbool (*func_arc_scene_ui_ScrollPane_isScrollX_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_arc_scene_ui_ScrollPane_setScrollX_float 191
typedef void (*func_arc_scene_ui_ScrollPane_setScrollX_float)(jcontext ctx, jobject self, jfloat param0);
#define VTABLE_arc_scene_ui_ScrollPane_isScrollY_R_boolean 192
typedef jbool (*func_arc_scene_ui_ScrollPane_isScrollY_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_arc_scene_ui_ScrollPane_setScrollY_float 193
typedef void (*func_arc_scene_ui_ScrollPane_setScrollY_float)(jcontext ctx, jobject self, jfloat param0);
#define VTABLE_arc_scene_ui_ScrollPane_setScrollingDisabled_boolean_boolean 194
typedef void (*func_arc_scene_ui_ScrollPane_setScrollingDisabled_boolean_boolean)(jcontext ctx, jobject self, jbool param0, jbool param1);
#define VTABLE_arc_scene_ui_ScrollPane_setScrollingDisabledX_boolean 195
typedef void (*func_arc_scene_ui_ScrollPane_setScrollingDisabledX_boolean)(jcontext ctx, jobject self, jbool param0);
#define VTABLE_arc_scene_ui_ScrollPane_setScrollingDisabledY_boolean 196
typedef void (*func_arc_scene_ui_ScrollPane_setScrollingDisabledY_boolean)(jcontext ctx, jobject self, jbool param0);
#define VTABLE_arc_scene_ui_ScrollPane_isScrollingDisabledX_R_boolean 197
typedef jbool (*func_arc_scene_ui_ScrollPane_isScrollingDisabledX_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_arc_scene_ui_ScrollPane_isScrollingDisabledY_R_boolean 198
typedef jbool (*func_arc_scene_ui_ScrollPane_isScrollingDisabledY_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_arc_scene_ui_ScrollPane_isLeftEdge_R_boolean 199
typedef jbool (*func_arc_scene_ui_ScrollPane_isLeftEdge_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_arc_scene_ui_ScrollPane_isRightEdge_R_boolean 200
typedef jbool (*func_arc_scene_ui_ScrollPane_isRightEdge_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_arc_scene_ui_ScrollPane_isTopEdge_R_boolean 201
typedef jbool (*func_arc_scene_ui_ScrollPane_isTopEdge_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_arc_scene_ui_ScrollPane_isBottomEdge_R_boolean 202
typedef jbool (*func_arc_scene_ui_ScrollPane_isBottomEdge_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_arc_scene_ui_ScrollPane_isDragging_R_boolean 203
typedef jbool (*func_arc_scene_ui_ScrollPane_isDragging_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_arc_scene_ui_ScrollPane_isPanning_R_boolean 204
typedef jbool (*func_arc_scene_ui_ScrollPane_isPanning_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_arc_scene_ui_ScrollPane_isFlinging_R_boolean 205
typedef jbool (*func_arc_scene_ui_ScrollPane_isFlinging_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_arc_scene_ui_ScrollPane_getVelocityX_R_float 206
typedef jfloat (*func_arc_scene_ui_ScrollPane_getVelocityX_R_float)(jcontext ctx, jobject self);
#define VTABLE_arc_scene_ui_ScrollPane_setVelocityX_float 207
typedef void (*func_arc_scene_ui_ScrollPane_setVelocityX_float)(jcontext ctx, jobject self, jfloat param0);
#define VTABLE_arc_scene_ui_ScrollPane_getVelocityY_R_float 208
typedef jfloat (*func_arc_scene_ui_ScrollPane_getVelocityY_R_float)(jcontext ctx, jobject self);
#define VTABLE_arc_scene_ui_ScrollPane_setVelocityY_float 209
typedef void (*func_arc_scene_ui_ScrollPane_setVelocityY_float)(jcontext ctx, jobject self, jfloat param0);
#define VTABLE_arc_scene_ui_ScrollPane_setOverscroll_boolean_boolean 210
typedef void (*func_arc_scene_ui_ScrollPane_setOverscroll_boolean_boolean)(jcontext ctx, jobject self, jbool param0, jbool param1);
#define VTABLE_arc_scene_ui_ScrollPane_setupOverscroll_float_float_float 211
typedef void (*func_arc_scene_ui_ScrollPane_setupOverscroll_float_float_float)(jcontext ctx, jobject self, jfloat param0, jfloat param1, jfloat param2);
#define VTABLE_arc_scene_ui_ScrollPane_setForceScroll_boolean_boolean 212
typedef void (*func_arc_scene_ui_ScrollPane_setForceScroll_boolean_boolean)(jcontext ctx, jobject self, jbool param0, jbool param1);
#define VTABLE_arc_scene_ui_ScrollPane_isForceScrollX_R_boolean 213
typedef jbool (*func_arc_scene_ui_ScrollPane_isForceScrollX_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_arc_scene_ui_ScrollPane_isForceScrollY_R_boolean 214
typedef jbool (*func_arc_scene_ui_ScrollPane_isForceScrollY_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_arc_scene_ui_ScrollPane_setFlingTime_float 215
typedef void (*func_arc_scene_ui_ScrollPane_setFlingTime_float)(jcontext ctx, jobject self, jfloat param0);
#define VTABLE_arc_scene_ui_ScrollPane_setClamp_boolean 216
typedef void (*func_arc_scene_ui_ScrollPane_setClamp_boolean)(jcontext ctx, jobject self, jbool param0);
#define VTABLE_arc_scene_ui_ScrollPane_setScrollBarPositions_boolean_boolean 217
typedef void (*func_arc_scene_ui_ScrollPane_setScrollBarPositions_boolean_boolean)(jcontext ctx, jobject self, jbool param0, jbool param1);
#define VTABLE_arc_scene_ui_ScrollPane_setFadeScrollBars_boolean 218
typedef void (*func_arc_scene_ui_ScrollPane_setFadeScrollBars_boolean)(jcontext ctx, jobject self, jbool param0);
#define VTABLE_arc_scene_ui_ScrollPane_setupFadeScrollBars_float_float 219
typedef void (*func_arc_scene_ui_ScrollPane_setupFadeScrollBars_float_float)(jcontext ctx, jobject self, jfloat param0, jfloat param1);
#define VTABLE_arc_scene_ui_ScrollPane_setSmoothScrolling_boolean 220
typedef void (*func_arc_scene_ui_ScrollPane_setSmoothScrolling_boolean)(jcontext ctx, jobject self, jbool param0);
#define VTABLE_arc_scene_ui_ScrollPane_setScrollbarsOnTop_boolean 221
typedef void (*func_arc_scene_ui_ScrollPane_setScrollbarsOnTop_boolean)(jcontext ctx, jobject self, jbool param0);
#define VTABLE_arc_scene_ui_ScrollPane_getVariableSizeKnobs_R_boolean 222
typedef jbool (*func_arc_scene_ui_ScrollPane_getVariableSizeKnobs_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_arc_scene_ui_ScrollPane_setVariableSizeKnobs_boolean 223
typedef void (*func_arc_scene_ui_ScrollPane_setVariableSizeKnobs_boolean)(jcontext ctx, jobject self, jbool param0);
#define VTABLE_arc_scene_ui_ScrollPane_setCancelTouchFocus_boolean 224
typedef void (*func_arc_scene_ui_ScrollPane_setCancelTouchFocus_boolean)(jcontext ctx, jobject self, jbool param0);

void mark_arc_scene_ui_ScrollPane(jobject object, jint mark, jint depth);
void clinit_arc_scene_ui_ScrollPane(jcontext ctx);
void init_arc_scene_ui_ScrollPane_arc_scene_Element(jcontext ctx, jobject self, jobject param0);
void init_arc_scene_ui_ScrollPane_arc_scene_Element_arc_scene_ui_ScrollPane$ScrollPaneStyle(jcontext ctx, jobject self, jobject param0, jobject param1);
void M_arc_scene_ui_ScrollPane_resetFade(jcontext ctx, jobject self);
void M_arc_scene_ui_ScrollPane_cancelTouchFocus(jcontext ctx, jobject self);
void M_arc_scene_ui_ScrollPane_cancel(jcontext ctx, jobject self);
void M_arc_scene_ui_ScrollPane_clamp(jcontext ctx, jobject self);
jobject M_arc_scene_ui_ScrollPane_getStyle_R_arc_scene_ui_ScrollPane$ScrollPaneStyle(jcontext ctx, jobject self);
void M_arc_scene_ui_ScrollPane_setStyle_arc_scene_ui_ScrollPane$ScrollPaneStyle(jcontext ctx, jobject self, jobject param0);
void M_arc_scene_ui_ScrollPane_act_float(jcontext ctx, jobject self, jfloat param0);
void M_arc_scene_ui_ScrollPane_setClip_boolean(jcontext ctx, jobject self, jbool param0);
void M_arc_scene_ui_ScrollPane_layout(jcontext ctx, jobject self);
void M_arc_scene_ui_ScrollPane_draw(jcontext ctx, jobject self);
void M_arc_scene_ui_ScrollPane_fling_float_float_float(jcontext ctx, jobject self, jfloat param0, jfloat param1, jfloat param2);
jfloat M_arc_scene_ui_ScrollPane_getPrefWidth_R_float(jcontext ctx, jobject self);
jfloat M_arc_scene_ui_ScrollPane_getPrefHeight_R_float(jcontext ctx, jobject self);
jfloat M_arc_scene_ui_ScrollPane_getMinWidth_R_float(jcontext ctx, jobject self);
jfloat M_arc_scene_ui_ScrollPane_getMinHeight_R_float(jcontext ctx, jobject self);
jobject M_arc_scene_ui_ScrollPane_getWidget_R_arc_scene_Element(jcontext ctx, jobject self);
void M_arc_scene_ui_ScrollPane_setWidget_arc_scene_Element(jcontext ctx, jobject self, jobject param0);
jbool M_arc_scene_ui_ScrollPane_removeChild_arc_scene_Element_R_boolean(jcontext ctx, jobject self, jobject param0);
jbool M_arc_scene_ui_ScrollPane_removeChild_arc_scene_Element_boolean_R_boolean(jcontext ctx, jobject self, jobject param0, jbool param1);
jobject M_arc_scene_ui_ScrollPane_hit_float_float_boolean_R_arc_scene_Element(jcontext ctx, jobject self, jfloat param0, jfloat param1, jbool param2);
void M_arc_scene_ui_ScrollPane_scrollX_float(jcontext ctx, jobject self, jfloat param0);
void M_arc_scene_ui_ScrollPane_scrollY_float(jcontext ctx, jobject self, jfloat param0);
void M_arc_scene_ui_ScrollPane_visualScrollX_float(jcontext ctx, jobject self, jfloat param0);
void M_arc_scene_ui_ScrollPane_visualScrollY_float(jcontext ctx, jobject self, jfloat param0);
jfloat M_arc_scene_ui_ScrollPane_getMouseWheelX_R_float(jcontext ctx, jobject self);
jfloat M_arc_scene_ui_ScrollPane_getMouseWheelY_R_float(jcontext ctx, jobject self);
void M_arc_scene_ui_ScrollPane_setScrollXForce_float(jcontext ctx, jobject self, jfloat param0);
jfloat M_arc_scene_ui_ScrollPane_getScrollX_R_float(jcontext ctx, jobject self);
void M_arc_scene_ui_ScrollPane_setScrollYForce_float(jcontext ctx, jobject self, jfloat param0);
jfloat M_arc_scene_ui_ScrollPane_getScrollY_R_float(jcontext ctx, jobject self);
void M_arc_scene_ui_ScrollPane_updateVisualScroll(jcontext ctx, jobject self);
jfloat M_arc_scene_ui_ScrollPane_getVisualScrollX_R_float(jcontext ctx, jobject self);
jfloat M_arc_scene_ui_ScrollPane_getVisualScrollY_R_float(jcontext ctx, jobject self);
jfloat M_arc_scene_ui_ScrollPane_getVisualScrollPercentX_R_float(jcontext ctx, jobject self);
jfloat M_arc_scene_ui_ScrollPane_getVisualScrollPercentY_R_float(jcontext ctx, jobject self);
jfloat M_arc_scene_ui_ScrollPane_getScrollPercentX_R_float(jcontext ctx, jobject self);
void M_arc_scene_ui_ScrollPane_setScrollPercentX_float(jcontext ctx, jobject self, jfloat param0);
jfloat M_arc_scene_ui_ScrollPane_getScrollPercentY_R_float(jcontext ctx, jobject self);
void M_arc_scene_ui_ScrollPane_setScrollPercentY_float(jcontext ctx, jobject self, jfloat param0);
void M_arc_scene_ui_ScrollPane_setFlickScroll_boolean(jcontext ctx, jobject self, jbool param0);
void M_arc_scene_ui_ScrollPane_setFlickScrollTapSquareSize_float(jcontext ctx, jobject self, jfloat param0);
void M_arc_scene_ui_ScrollPane_scrollTo_float_float_float_float(jcontext ctx, jobject self, jfloat param0, jfloat param1, jfloat param2, jfloat param3);
void M_arc_scene_ui_ScrollPane_scrollTo_float_float_float_float_boolean_boolean(jcontext ctx, jobject self, jfloat param0, jfloat param1, jfloat param2, jfloat param3, jbool param4, jbool param5);
jfloat M_arc_scene_ui_ScrollPane_getMaxX_R_float(jcontext ctx, jobject self);
jfloat M_arc_scene_ui_ScrollPane_getMaxY_R_float(jcontext ctx, jobject self);
jfloat M_arc_scene_ui_ScrollPane_getScrollBarHeight_R_float(jcontext ctx, jobject self);
jfloat M_arc_scene_ui_ScrollPane_getScrollBarWidth_R_float(jcontext ctx, jobject self);
jfloat M_arc_scene_ui_ScrollPane_getScrollWidth_R_float(jcontext ctx, jobject self);
jfloat M_arc_scene_ui_ScrollPane_getScrollHeight_R_float(jcontext ctx, jobject self);
jbool M_arc_scene_ui_ScrollPane_isScrollX_R_boolean(jcontext ctx, jobject self);
void M_arc_scene_ui_ScrollPane_setScrollX_float(jcontext ctx, jobject self, jfloat param0);
jbool M_arc_scene_ui_ScrollPane_isScrollY_R_boolean(jcontext ctx, jobject self);
void M_arc_scene_ui_ScrollPane_setScrollY_float(jcontext ctx, jobject self, jfloat param0);
void M_arc_scene_ui_ScrollPane_setScrollingDisabled_boolean_boolean(jcontext ctx, jobject self, jbool param0, jbool param1);
void M_arc_scene_ui_ScrollPane_setScrollingDisabledX_boolean(jcontext ctx, jobject self, jbool param0);
void M_arc_scene_ui_ScrollPane_setScrollingDisabledY_boolean(jcontext ctx, jobject self, jbool param0);
jbool M_arc_scene_ui_ScrollPane_isScrollingDisabledX_R_boolean(jcontext ctx, jobject self);
jbool M_arc_scene_ui_ScrollPane_isScrollingDisabledY_R_boolean(jcontext ctx, jobject self);
jbool M_arc_scene_ui_ScrollPane_isLeftEdge_R_boolean(jcontext ctx, jobject self);
jbool M_arc_scene_ui_ScrollPane_isRightEdge_R_boolean(jcontext ctx, jobject self);
jbool M_arc_scene_ui_ScrollPane_isTopEdge_R_boolean(jcontext ctx, jobject self);
jbool M_arc_scene_ui_ScrollPane_isBottomEdge_R_boolean(jcontext ctx, jobject self);
jbool M_arc_scene_ui_ScrollPane_isDragging_R_boolean(jcontext ctx, jobject self);
jbool M_arc_scene_ui_ScrollPane_isPanning_R_boolean(jcontext ctx, jobject self);
jbool M_arc_scene_ui_ScrollPane_isFlinging_R_boolean(jcontext ctx, jobject self);
jfloat M_arc_scene_ui_ScrollPane_getVelocityX_R_float(jcontext ctx, jobject self);
void M_arc_scene_ui_ScrollPane_setVelocityX_float(jcontext ctx, jobject self, jfloat param0);
jfloat M_arc_scene_ui_ScrollPane_getVelocityY_R_float(jcontext ctx, jobject self);
void M_arc_scene_ui_ScrollPane_setVelocityY_float(jcontext ctx, jobject self, jfloat param0);
void M_arc_scene_ui_ScrollPane_setOverscroll_boolean_boolean(jcontext ctx, jobject self, jbool param0, jbool param1);
void M_arc_scene_ui_ScrollPane_setupOverscroll_float_float_float(jcontext ctx, jobject self, jfloat param0, jfloat param1, jfloat param2);
void M_arc_scene_ui_ScrollPane_setForceScroll_boolean_boolean(jcontext ctx, jobject self, jbool param0, jbool param1);
jbool M_arc_scene_ui_ScrollPane_isForceScrollX_R_boolean(jcontext ctx, jobject self);
jbool M_arc_scene_ui_ScrollPane_isForceScrollY_R_boolean(jcontext ctx, jobject self);
void M_arc_scene_ui_ScrollPane_setFlingTime_float(jcontext ctx, jobject self, jfloat param0);
void M_arc_scene_ui_ScrollPane_setClamp_boolean(jcontext ctx, jobject self, jbool param0);
void M_arc_scene_ui_ScrollPane_setScrollBarPositions_boolean_boolean(jcontext ctx, jobject self, jbool param0, jbool param1);
void M_arc_scene_ui_ScrollPane_setFadeScrollBars_boolean(jcontext ctx, jobject self, jbool param0);
void M_arc_scene_ui_ScrollPane_setupFadeScrollBars_float_float(jcontext ctx, jobject self, jfloat param0, jfloat param1);
void M_arc_scene_ui_ScrollPane_setSmoothScrolling_boolean(jcontext ctx, jobject self, jbool param0);
void M_arc_scene_ui_ScrollPane_setScrollbarsOnTop_boolean(jcontext ctx, jobject self, jbool param0);
jbool M_arc_scene_ui_ScrollPane_getVariableSizeKnobs_R_boolean(jcontext ctx, jobject self);
void M_arc_scene_ui_ScrollPane_setVariableSizeKnobs_boolean(jcontext ctx, jobject self, jbool param0);
void M_arc_scene_ui_ScrollPane_setCancelTouchFocus_boolean(jcontext ctx, jobject self, jbool param0);

#ifdef __cplusplus
}
#endif

#endif
