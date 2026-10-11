#ifndef HEADER_arc_scene_ui_TextField
#define HEADER_arc_scene_ui_TextField

#include "Clearwing.h"
#include "arc/scene/Element.h"
#include "arc/scene/utils/Disableable.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct arc_scene_ui_TextField {
	arc_scene_Element parent;
	jref F_imeData;
	jref F_layout;
	jref F_glyphPositions;
	jref F_text;
	jint F_cursor;
	jint F_selectionStart;
	jbool F_hasSelection;
	jbool F_writeEnters;
	jref F_displayText;
	jfloat F_fontOffset;
	jfloat F_textHeight;
	jfloat F_textOffset;
	jref F_inputDialogListener;
	jref F_style;
	jref F_inputListener;
	jref F_listener;
	jref F_validator;
	jref F_filter;
	jbool F_focusTraversal;
	jbool F_onlyFontChars;
	jbool F_disabled;
	jref F_undoText;
	jlong F_lastChangeTime;
	jbool F_passwordMode;
	jfloat F_renderOffset;
	jbool F_cursorOn;
	jbool F_hasInputDialog;
	jlong F_lastBlink;
	jref F_keyRepeatTask;
	jbool F_programmaticChangeEvents;
	jref F_messageText;
	jint F_textHAlign;
	jfloat F_selectionX;
	jfloat F_selectionWidth;
	jref F_passwordBuffer;
	jchar F_passwordCharacter;
	jint F_visibleTextStart;
	jint F_visibleTextEnd;
	jint F_maxLength;
	jfloat F_blinkTime;
} arc_scene_ui_TextField;

extern Class class_arc_scene_ui_TextField;

extern jchar SF_arc_scene_ui_TextField_BACKSPACE;
extern jchar SF_arc_scene_ui_TextField_TAB;
extern jchar SF_arc_scene_ui_TextField_DELETE;
extern jchar SF_arc_scene_ui_TextField_BULLET;
extern jobject SF_arc_scene_ui_TextField_tmp1;
extern jobject SF_arc_scene_ui_TextField_tmp2;
extern jobject SF_arc_scene_ui_TextField_tmp3;
extern jfloat SF_arc_scene_ui_TextField_keyRepeatInitialTime;
extern jfloat SF_arc_scene_ui_TextField_keyRepeatTime;

#define VTABLE_arc_scene_ui_TextField_hashCode_R_int 0
typedef jint (*func_arc_scene_ui_TextField_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_arc_scene_ui_TextField_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_arc_scene_ui_TextField_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_scene_ui_TextField_clone_R_java_lang_Object 2
typedef jobject (*func_arc_scene_ui_TextField_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_arc_scene_ui_TextField_getClass_R_java_lang_Class 3
typedef jobject (*func_arc_scene_ui_TextField_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_arc_scene_ui_TextField_toString_R_java_lang_String 4
typedef jobject (*func_arc_scene_ui_TextField_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_arc_scene_ui_TextField_finalize 5
typedef void (*func_arc_scene_ui_TextField_finalize)(jcontext ctx, jobject self);
#define VTABLE_arc_scene_ui_TextField_notify 6
typedef void (*func_arc_scene_ui_TextField_notify)(jcontext ctx, jobject self);
#define VTABLE_arc_scene_ui_TextField_notifyAll 7
typedef void (*func_arc_scene_ui_TextField_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_arc_scene_ui_TextField_wait 8
typedef void (*func_arc_scene_ui_TextField_wait)(jcontext ctx, jobject self);
#define VTABLE_arc_scene_ui_TextField_wait_long 9
typedef void (*func_arc_scene_ui_TextField_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_arc_scene_ui_TextField_wait_long_int 10
typedef void (*func_arc_scene_ui_TextField_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);
#define VTABLE_arc_scene_ui_TextField_draw 11
typedef void (*func_arc_scene_ui_TextField_draw)(jcontext ctx, jobject self);
#define VTABLE_arc_scene_ui_TextField_act_float 12
typedef void (*func_arc_scene_ui_TextField_act_float)(jcontext ctx, jobject self, jfloat param0);
#define VTABLE_arc_scene_ui_TextField_updateVisibility 13
typedef void (*func_arc_scene_ui_TextField_updateVisibility)(jcontext ctx, jobject self);
#define VTABLE_arc_scene_ui_TextField_hasMouse_R_boolean 14
typedef jbool (*func_arc_scene_ui_TextField_hasMouse_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_arc_scene_ui_TextField_hasKeyboard_R_boolean 15
typedef jbool (*func_arc_scene_ui_TextField_hasKeyboard_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_arc_scene_ui_TextField_hasScroll_R_boolean 16
typedef jbool (*func_arc_scene_ui_TextField_hasScroll_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_arc_scene_ui_TextField_requestKeyboard 17
typedef void (*func_arc_scene_ui_TextField_requestKeyboard)(jcontext ctx, jobject self);
#define VTABLE_arc_scene_ui_TextField_requestScroll 18
typedef void (*func_arc_scene_ui_TextField_requestScroll)(jcontext ctx, jobject self);
#define VTABLE_arc_scene_ui_TextField_fire_arc_scene_event_SceneEvent_R_boolean 19
typedef jbool (*func_arc_scene_ui_TextField_fire_arc_scene_event_SceneEvent_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_scene_ui_TextField_notify_arc_scene_event_SceneEvent_boolean_R_boolean 20
typedef jbool (*func_arc_scene_ui_TextField_notify_arc_scene_event_SceneEvent_boolean_R_boolean)(jcontext ctx, jobject self, jobject param0, jbool param1);
#define VTABLE_arc_scene_ui_TextField_hit_float_float_boolean_R_arc_scene_Element 21
typedef jobject (*func_arc_scene_ui_TextField_hit_float_float_boolean_R_arc_scene_Element)(jcontext ctx, jobject self, jfloat param0, jfloat param1, jbool param2);
#define VTABLE_arc_scene_ui_TextField_remove_R_boolean 22
typedef jbool (*func_arc_scene_ui_TextField_remove_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_arc_scene_ui_TextField_dragged_arc_func_Floatc2 23
typedef void (*func_arc_scene_ui_TextField_dragged_arc_func_Floatc2)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_scene_ui_TextField_scrolled_arc_func_Floatc 24
typedef void (*func_arc_scene_ui_TextField_scrolled_arc_func_Floatc)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_scene_ui_TextField_addListener_arc_scene_event_EventListener_R_boolean 25
typedef jbool (*func_arc_scene_ui_TextField_addListener_arc_scene_event_EventListener_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_scene_ui_TextField_removeListener_arc_scene_event_EventListener_R_boolean 26
typedef jbool (*func_arc_scene_ui_TextField_removeListener_arc_scene_event_EventListener_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_scene_ui_TextField_getListeners_R_arc_struct_Seq 27
typedef jobject (*func_arc_scene_ui_TextField_getListeners_R_arc_struct_Seq)(jcontext ctx, jobject self);
#define VTABLE_arc_scene_ui_TextField_addCaptureListener_arc_scene_event_EventListener_R_boolean 28
typedef jbool (*func_arc_scene_ui_TextField_addCaptureListener_arc_scene_event_EventListener_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_scene_ui_TextField_removeCaptureListener_arc_scene_event_EventListener_R_boolean 29
typedef jbool (*func_arc_scene_ui_TextField_removeCaptureListener_arc_scene_event_EventListener_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_scene_ui_TextField_getCaptureListeners_R_arc_struct_Seq 30
typedef jobject (*func_arc_scene_ui_TextField_getCaptureListeners_R_arc_struct_Seq)(jcontext ctx, jobject self);
#define VTABLE_arc_scene_ui_TextField_addAction_arc_scene_Action 31
typedef void (*func_arc_scene_ui_TextField_addAction_arc_scene_Action)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_scene_ui_TextField_actions_Array1_arc_scene_Action 32
typedef void (*func_arc_scene_ui_TextField_actions_Array1_arc_scene_Action)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_scene_ui_TextField_removeAction_arc_scene_Action 33
typedef void (*func_arc_scene_ui_TextField_removeAction_arc_scene_Action)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_scene_ui_TextField_getActions_R_arc_struct_Seq 34
typedef jobject (*func_arc_scene_ui_TextField_getActions_R_arc_struct_Seq)(jcontext ctx, jobject self);
#define VTABLE_arc_scene_ui_TextField_hasActions_R_boolean 35
typedef jbool (*func_arc_scene_ui_TextField_hasActions_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_arc_scene_ui_TextField_clearActions 36
typedef void (*func_arc_scene_ui_TextField_clearActions)(jcontext ctx, jobject self);
#define VTABLE_arc_scene_ui_TextField_clearListeners 37
typedef void (*func_arc_scene_ui_TextField_clearListeners)(jcontext ctx, jobject self);
#define VTABLE_arc_scene_ui_TextField_clear 38
typedef void (*func_arc_scene_ui_TextField_clear)(jcontext ctx, jobject self);
#define VTABLE_arc_scene_ui_TextField_getScene_R_arc_scene_Scene 39
typedef jobject (*func_arc_scene_ui_TextField_getScene_R_arc_scene_Scene)(jcontext ctx, jobject self);
#define VTABLE_arc_scene_ui_TextField_setScene_arc_scene_Scene 40
typedef void (*func_arc_scene_ui_TextField_setScene_arc_scene_Scene)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_scene_ui_TextField_isDescendantOf_arc_func_Boolf_R_boolean 41
typedef jbool (*func_arc_scene_ui_TextField_isDescendantOf_arc_func_Boolf_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_scene_ui_TextField_isDescendantOf_arc_scene_Element_R_boolean 42
typedef jbool (*func_arc_scene_ui_TextField_isDescendantOf_arc_scene_Element_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_scene_ui_TextField_isAscendantOf_arc_scene_Element_R_boolean 43
typedef jbool (*func_arc_scene_ui_TextField_isAscendantOf_arc_scene_Element_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_scene_ui_TextField_hasParent_R_boolean 44
typedef jbool (*func_arc_scene_ui_TextField_hasParent_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_arc_scene_ui_TextField_isTouchable_R_boolean 45
typedef jbool (*func_arc_scene_ui_TextField_isTouchable_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_arc_scene_ui_TextField_getX_int_R_float 46
typedef jfloat (*func_arc_scene_ui_TextField_getX_int_R_float)(jcontext ctx, jobject self, jint param0);
#define VTABLE_arc_scene_ui_TextField_getY_int_R_float 47
typedef jfloat (*func_arc_scene_ui_TextField_getY_int_R_float)(jcontext ctx, jobject self, jint param0);
#define VTABLE_arc_scene_ui_TextField_setPosition_float_float 48
typedef void (*func_arc_scene_ui_TextField_setPosition_float_float)(jcontext ctx, jobject self, jfloat param0, jfloat param1);
#define VTABLE_arc_scene_ui_TextField_setPosition_float_float_int 49
typedef void (*func_arc_scene_ui_TextField_setPosition_float_float_int)(jcontext ctx, jobject self, jfloat param0, jfloat param1, jint param2);
#define VTABLE_arc_scene_ui_TextField_moveBy_float_float 50
typedef void (*func_arc_scene_ui_TextField_moveBy_float_float)(jcontext ctx, jobject self, jfloat param0, jfloat param1);
#define VTABLE_arc_scene_ui_TextField_getWidth_R_float 51
typedef jfloat (*func_arc_scene_ui_TextField_getWidth_R_float)(jcontext ctx, jobject self);
#define VTABLE_arc_scene_ui_TextField_setWidth_float 52
typedef void (*func_arc_scene_ui_TextField_setWidth_float)(jcontext ctx, jobject self, jfloat param0);
#define VTABLE_arc_scene_ui_TextField_getHeight_R_float 53
typedef jfloat (*func_arc_scene_ui_TextField_getHeight_R_float)(jcontext ctx, jobject self);
#define VTABLE_arc_scene_ui_TextField_setHeight_float 54
typedef void (*func_arc_scene_ui_TextField_setHeight_float)(jcontext ctx, jobject self, jfloat param0);
#define VTABLE_arc_scene_ui_TextField_getTop_R_float 55
typedef jfloat (*func_arc_scene_ui_TextField_getTop_R_float)(jcontext ctx, jobject self);
#define VTABLE_arc_scene_ui_TextField_getRight_R_float 56
typedef jfloat (*func_arc_scene_ui_TextField_getRight_R_float)(jcontext ctx, jobject self);
#define VTABLE_arc_scene_ui_TextField_sizeChanged 57
typedef void (*func_arc_scene_ui_TextField_sizeChanged)(jcontext ctx, jobject self);
#define VTABLE_arc_scene_ui_TextField_rotationChanged 58
typedef void (*func_arc_scene_ui_TextField_rotationChanged)(jcontext ctx, jobject self);
#define VTABLE_arc_scene_ui_TextField_setSize_float 59
typedef void (*func_arc_scene_ui_TextField_setSize_float)(jcontext ctx, jobject self, jfloat param0);
#define VTABLE_arc_scene_ui_TextField_setSize_float_float 60
typedef void (*func_arc_scene_ui_TextField_setSize_float_float)(jcontext ctx, jobject self, jfloat param0, jfloat param1);
#define VTABLE_arc_scene_ui_TextField_sizeBy_float 61
typedef void (*func_arc_scene_ui_TextField_sizeBy_float)(jcontext ctx, jobject self, jfloat param0);
#define VTABLE_arc_scene_ui_TextField_sizeBy_float_float 62
typedef void (*func_arc_scene_ui_TextField_sizeBy_float_float)(jcontext ctx, jobject self, jfloat param0, jfloat param1);
#define VTABLE_arc_scene_ui_TextField_setBounds_float_float_float_float 63
typedef void (*func_arc_scene_ui_TextField_setBounds_float_float_float_float)(jcontext ctx, jobject self, jfloat param0, jfloat param1, jfloat param2, jfloat param3);
#define VTABLE_arc_scene_ui_TextField_setOrigin_float_float 64
typedef void (*func_arc_scene_ui_TextField_setOrigin_float_float)(jcontext ctx, jobject self, jfloat param0, jfloat param1);
#define VTABLE_arc_scene_ui_TextField_setOrigin_int 65
typedef void (*func_arc_scene_ui_TextField_setOrigin_int)(jcontext ctx, jobject self, jint param0);
#define VTABLE_arc_scene_ui_TextField_setScale_float 66
typedef void (*func_arc_scene_ui_TextField_setScale_float)(jcontext ctx, jobject self, jfloat param0);
#define VTABLE_arc_scene_ui_TextField_setScale_float_float 67
typedef void (*func_arc_scene_ui_TextField_setScale_float_float)(jcontext ctx, jobject self, jfloat param0, jfloat param1);
#define VTABLE_arc_scene_ui_TextField_scaleBy_float 68
typedef void (*func_arc_scene_ui_TextField_scaleBy_float)(jcontext ctx, jobject self, jfloat param0);
#define VTABLE_arc_scene_ui_TextField_scaleBy_float_float 69
typedef void (*func_arc_scene_ui_TextField_scaleBy_float_float)(jcontext ctx, jobject self, jfloat param0, jfloat param1);
#define VTABLE_arc_scene_ui_TextField_getRotation_R_float 70
typedef jfloat (*func_arc_scene_ui_TextField_getRotation_R_float)(jcontext ctx, jobject self);
#define VTABLE_arc_scene_ui_TextField_setRotation_float 71
typedef void (*func_arc_scene_ui_TextField_setRotation_float)(jcontext ctx, jobject self, jfloat param0);
#define VTABLE_arc_scene_ui_TextField_setRotationOrigin_float_int 72
typedef void (*func_arc_scene_ui_TextField_setRotationOrigin_float_int)(jcontext ctx, jobject self, jfloat param0, jint param1);
#define VTABLE_arc_scene_ui_TextField_rotateBy_float 73
typedef void (*func_arc_scene_ui_TextField_rotateBy_float)(jcontext ctx, jobject self, jfloat param0);
#define VTABLE_arc_scene_ui_TextField_setColor_float_float_float_float 74
typedef void (*func_arc_scene_ui_TextField_setColor_float_float_float_float)(jcontext ctx, jobject self, jfloat param0, jfloat param1, jfloat param2, jfloat param3);
#define VTABLE_arc_scene_ui_TextField_setColor_arc_graphics_Color 75
typedef void (*func_arc_scene_ui_TextField_setColor_arc_graphics_Color)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_scene_ui_TextField_toFront 76
typedef void (*func_arc_scene_ui_TextField_toFront)(jcontext ctx, jobject self);
#define VTABLE_arc_scene_ui_TextField_toBack 77
typedef void (*func_arc_scene_ui_TextField_toBack)(jcontext ctx, jobject self);
#define VTABLE_arc_scene_ui_TextField_getZIndex_R_int 78
typedef jint (*func_arc_scene_ui_TextField_getZIndex_R_int)(jcontext ctx, jobject self);
#define VTABLE_arc_scene_ui_TextField_setZIndex_int 79
typedef void (*func_arc_scene_ui_TextField_setZIndex_int)(jcontext ctx, jobject self, jint param0);
#define VTABLE_arc_scene_ui_TextField_clipBegin_R_boolean 80
typedef jbool (*func_arc_scene_ui_TextField_clipBegin_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_arc_scene_ui_TextField_clipBegin_float_float_float_float_R_boolean 81
typedef jbool (*func_arc_scene_ui_TextField_clipBegin_float_float_float_float_R_boolean)(jcontext ctx, jobject self, jfloat param0, jfloat param1, jfloat param2, jfloat param3);
#define VTABLE_arc_scene_ui_TextField_clipEnd 82
typedef void (*func_arc_scene_ui_TextField_clipEnd)(jcontext ctx, jobject self);
#define VTABLE_arc_scene_ui_TextField_screenToLocalCoordinates_arc_math_geom_Vec2_R_arc_math_geom_Vec2 83
typedef jobject (*func_arc_scene_ui_TextField_screenToLocalCoordinates_arc_math_geom_Vec2_R_arc_math_geom_Vec2)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_scene_ui_TextField_stageToLocalCoordinates_arc_math_geom_Vec2_R_arc_math_geom_Vec2 84
typedef jobject (*func_arc_scene_ui_TextField_stageToLocalCoordinates_arc_math_geom_Vec2_R_arc_math_geom_Vec2)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_scene_ui_TextField_localToStageCoordinates_arc_math_geom_Vec2_R_arc_math_geom_Vec2 85
typedef jobject (*func_arc_scene_ui_TextField_localToStageCoordinates_arc_math_geom_Vec2_R_arc_math_geom_Vec2)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_scene_ui_TextField_localToParentCoordinates_arc_math_geom_Vec2_R_arc_math_geom_Vec2 86
typedef jobject (*func_arc_scene_ui_TextField_localToParentCoordinates_arc_math_geom_Vec2_R_arc_math_geom_Vec2)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_scene_ui_TextField_localToAscendantCoordinates_arc_scene_Element_arc_math_geom_Vec2_R_arc_math_geom_Vec2 87
typedef jobject (*func_arc_scene_ui_TextField_localToAscendantCoordinates_arc_scene_Element_arc_math_geom_Vec2_R_arc_math_geom_Vec2)(jcontext ctx, jobject self, jobject param0, jobject param1);
#define VTABLE_arc_scene_ui_TextField_parentToLocalCoordinates_arc_math_geom_Vec2_R_arc_math_geom_Vec2 88
typedef jobject (*func_arc_scene_ui_TextField_parentToLocalCoordinates_arc_math_geom_Vec2_R_arc_math_geom_Vec2)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_scene_ui_TextField_getMinWidth_R_float 89
typedef jfloat (*func_arc_scene_ui_TextField_getMinWidth_R_float)(jcontext ctx, jobject self);
#define VTABLE_arc_scene_ui_TextField_getMinHeight_R_float 90
typedef jfloat (*func_arc_scene_ui_TextField_getMinHeight_R_float)(jcontext ctx, jobject self);
#define VTABLE_arc_scene_ui_TextField_getPrefWidth_R_float 91
typedef jfloat (*func_arc_scene_ui_TextField_getPrefWidth_R_float)(jcontext ctx, jobject self);
#define VTABLE_arc_scene_ui_TextField_getPrefHeight_R_float 92
typedef jfloat (*func_arc_scene_ui_TextField_getPrefHeight_R_float)(jcontext ctx, jobject self);
#define VTABLE_arc_scene_ui_TextField_getMaxWidth_R_float 93
typedef jfloat (*func_arc_scene_ui_TextField_getMaxWidth_R_float)(jcontext ctx, jobject self);
#define VTABLE_arc_scene_ui_TextField_getMaxHeight_R_float 94
typedef jfloat (*func_arc_scene_ui_TextField_getMaxHeight_R_float)(jcontext ctx, jobject self);
#define VTABLE_arc_scene_ui_TextField_setLayoutEnabled_boolean 95
typedef void (*func_arc_scene_ui_TextField_setLayoutEnabled_boolean)(jcontext ctx, jobject self, jbool param0);
#define VTABLE_arc_scene_ui_TextField_validate 96
typedef void (*func_arc_scene_ui_TextField_validate)(jcontext ctx, jobject self);
#define VTABLE_arc_scene_ui_TextField_needsLayout_R_boolean 97
typedef jbool (*func_arc_scene_ui_TextField_needsLayout_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_arc_scene_ui_TextField_invalidate 98
typedef void (*func_arc_scene_ui_TextField_invalidate)(jcontext ctx, jobject self);
#define VTABLE_arc_scene_ui_TextField_invalidateHierarchy 99
typedef void (*func_arc_scene_ui_TextField_invalidateHierarchy)(jcontext ctx, jobject self);
#define VTABLE_arc_scene_ui_TextField_pack 100
typedef void (*func_arc_scene_ui_TextField_pack)(jcontext ctx, jobject self);
#define VTABLE_arc_scene_ui_TextField_setFillParent_boolean 101
typedef void (*func_arc_scene_ui_TextField_setFillParent_boolean)(jcontext ctx, jobject self, jbool param0);
#define VTABLE_arc_scene_ui_TextField_layout 102
typedef void (*func_arc_scene_ui_TextField_layout)(jcontext ctx, jobject self);
#define VTABLE_arc_scene_ui_TextField_keepInStage 103
typedef void (*func_arc_scene_ui_TextField_keepInStage)(jcontext ctx, jobject self);
#define VTABLE_arc_scene_ui_TextField_setTranslation_float_float 104
typedef void (*func_arc_scene_ui_TextField_setTranslation_float_float)(jcontext ctx, jobject self, jfloat param0, jfloat param1);
#define VTABLE_arc_scene_ui_TextField_keyDown_arc_input_KeyCode_java_lang_Runnable 105
typedef void (*func_arc_scene_ui_TextField_keyDown_arc_input_KeyCode_java_lang_Runnable)(jcontext ctx, jobject self, jobject param0, jobject param1);
#define VTABLE_arc_scene_ui_TextField_keyDown_arc_func_Cons 106
typedef void (*func_arc_scene_ui_TextField_keyDown_arc_func_Cons)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_scene_ui_TextField_fireClick 107
typedef void (*func_arc_scene_ui_TextField_fireClick)(jcontext ctx, jobject self);
#define VTABLE_arc_scene_ui_TextField_clicked_java_lang_Runnable_R_arc_scene_event_ClickListener 108
typedef jobject (*func_arc_scene_ui_TextField_clicked_java_lang_Runnable_R_arc_scene_event_ClickListener)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_scene_ui_TextField_clicked_arc_input_KeyCode_java_lang_Runnable_R_arc_scene_event_ClickListener 109
typedef jobject (*func_arc_scene_ui_TextField_clicked_arc_input_KeyCode_java_lang_Runnable_R_arc_scene_event_ClickListener)(jcontext ctx, jobject self, jobject param0, jobject param1);
#define VTABLE_arc_scene_ui_TextField_clicked_arc_func_Cons_java_lang_Runnable_R_arc_scene_event_ClickListener 110
typedef jobject (*func_arc_scene_ui_TextField_clicked_arc_func_Cons_java_lang_Runnable_R_arc_scene_event_ClickListener)(jcontext ctx, jobject self, jobject param0, jobject param1);
#define VTABLE_arc_scene_ui_TextField_clicked_arc_func_Cons_arc_func_Cons_R_arc_scene_event_ClickListener 111
typedef jobject (*func_arc_scene_ui_TextField_clicked_arc_func_Cons_arc_func_Cons_R_arc_scene_event_ClickListener)(jcontext ctx, jobject self, jobject param0, jobject param1);
#define VTABLE_arc_scene_ui_TextField_tapped_java_lang_Runnable_R_arc_scene_event_InputListener 112
typedef jobject (*func_arc_scene_ui_TextField_tapped_java_lang_Runnable_R_arc_scene_event_InputListener)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_scene_ui_TextField_hovered_java_lang_Runnable 113
typedef void (*func_arc_scene_ui_TextField_hovered_java_lang_Runnable)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_scene_ui_TextField_exited_java_lang_Runnable 114
typedef void (*func_arc_scene_ui_TextField_exited_java_lang_Runnable)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_scene_ui_TextField_released_java_lang_Runnable 115
typedef void (*func_arc_scene_ui_TextField_released_java_lang_Runnable)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_scene_ui_TextField_change 116
typedef void (*func_arc_scene_ui_TextField_change)(jcontext ctx, jobject self);
#define VTABLE_arc_scene_ui_TextField_changed_java_lang_Runnable 117
typedef void (*func_arc_scene_ui_TextField_changed_java_lang_Runnable)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_scene_ui_TextField_update_java_lang_Runnable_R_arc_scene_Element 118
typedef jobject (*func_arc_scene_ui_TextField_update_java_lang_Runnable_R_arc_scene_Element)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_scene_ui_TextField_visible_arc_func_Boolp_R_arc_scene_Element 119
typedef jobject (*func_arc_scene_ui_TextField_visible_arc_func_Boolp_R_arc_scene_Element)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_scene_ui_TextField_touchable_arc_func_Prov 120
typedef void (*func_arc_scene_ui_TextField_touchable_arc_func_Prov)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_scene_ui_TextField_isDisabled_R_boolean 121
typedef jbool (*func_arc_scene_ui_TextField_isDisabled_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_arc_scene_ui_TextField_setDisabled_boolean 122
typedef void (*func_arc_scene_ui_TextField_setDisabled_boolean)(jcontext ctx, jobject self, jbool param0);
#define VTABLE_arc_scene_ui_TextField_initialize 123
typedef void (*func_arc_scene_ui_TextField_initialize)(jcontext ctx, jobject self);
#define VTABLE_arc_scene_ui_TextField_createInputListener_R_arc_scene_event_InputListener 124
typedef jobject (*func_arc_scene_ui_TextField_createInputListener_R_arc_scene_event_InputListener)(jcontext ctx, jobject self);
#define VTABLE_arc_scene_ui_TextField_letterUnderCursor_float_R_int 125
typedef jint (*func_arc_scene_ui_TextField_letterUnderCursor_float_R_int)(jcontext ctx, jobject self, jfloat param0);
#define VTABLE_arc_scene_ui_TextField_isWordCharacter_char_R_boolean 126
typedef jbool (*func_arc_scene_ui_TextField_isWordCharacter_char_R_boolean)(jcontext ctx, jobject self, jchar param0);
#define VTABLE_arc_scene_ui_TextField_wordUnderCursor_int_R_Array1_int 127
typedef jobject (*func_arc_scene_ui_TextField_wordUnderCursor_int_R_Array1_int)(jcontext ctx, jobject self, jint param0);
#define VTABLE_arc_scene_ui_TextField_wordUnderCursor_float_R_Array1_int 128
typedef jobject (*func_arc_scene_ui_TextField_wordUnderCursor_float_R_Array1_int)(jcontext ctx, jobject self, jfloat param0);
#define VTABLE_arc_scene_ui_TextField_withinMaxLength_int_R_boolean 129
typedef jbool (*func_arc_scene_ui_TextField_withinMaxLength_int_R_boolean)(jcontext ctx, jobject self, jint param0);
#define VTABLE_arc_scene_ui_TextField_removeInputDialog 130
typedef void (*func_arc_scene_ui_TextField_removeInputDialog)(jcontext ctx, jobject self);
#define VTABLE_arc_scene_ui_TextField_addInputDialog 131
typedef void (*func_arc_scene_ui_TextField_addInputDialog)(jcontext ctx, jobject self);
#define VTABLE_arc_scene_ui_TextField_getMaxLength_R_int 132
typedef jint (*func_arc_scene_ui_TextField_getMaxLength_R_int)(jcontext ctx, jobject self);
#define VTABLE_arc_scene_ui_TextField_setMaxLength_int 133
typedef void (*func_arc_scene_ui_TextField_setMaxLength_int)(jcontext ctx, jobject self, jint param0);
#define VTABLE_arc_scene_ui_TextField_clearText 134
typedef void (*func_arc_scene_ui_TextField_clearText)(jcontext ctx, jobject self);
#define VTABLE_arc_scene_ui_TextField_setOnlyFontChars_boolean 135
typedef void (*func_arc_scene_ui_TextField_setOnlyFontChars_boolean)(jcontext ctx, jobject self, jbool param0);
#define VTABLE_arc_scene_ui_TextField_getStyle_R_arc_scene_ui_TextField$TextFieldStyle 136
typedef jobject (*func_arc_scene_ui_TextField_getStyle_R_arc_scene_ui_TextField$TextFieldStyle)(jcontext ctx, jobject self);
#define VTABLE_arc_scene_ui_TextField_setStyle_arc_scene_ui_TextField$TextFieldStyle 137
typedef void (*func_arc_scene_ui_TextField_setStyle_arc_scene_ui_TextField$TextFieldStyle)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_scene_ui_TextField_calculateOffsets 138
typedef void (*func_arc_scene_ui_TextField_calculateOffsets)(jcontext ctx, jobject self);
#define VTABLE_arc_scene_ui_TextField_getBackgroundDrawable_R_arc_scene_style_Drawable 139
typedef jobject (*func_arc_scene_ui_TextField_getBackgroundDrawable_R_arc_scene_style_Drawable)(jcontext ctx, jobject self);
#define VTABLE_arc_scene_ui_TextField_isValid_R_boolean 140
typedef jbool (*func_arc_scene_ui_TextField_isValid_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_arc_scene_ui_TextField_getTextY_arc_graphics_g2d_Font_arc_scene_style_Drawable_R_float 141
typedef jfloat (*func_arc_scene_ui_TextField_getTextY_arc_graphics_g2d_Font_arc_scene_style_Drawable_R_float)(jcontext ctx, jobject self, jobject param0, jobject param1);
#define VTABLE_arc_scene_ui_TextField_drawSelection_arc_scene_style_Drawable_arc_graphics_g2d_Font_float_float 142
typedef void (*func_arc_scene_ui_TextField_drawSelection_arc_scene_style_Drawable_arc_graphics_g2d_Font_float_float)(jcontext ctx, jobject self, jobject param0, jobject param1, jfloat param2, jfloat param3);
#define VTABLE_arc_scene_ui_TextField_drawText_arc_graphics_g2d_Font_float_float 143
typedef void (*func_arc_scene_ui_TextField_drawText_arc_graphics_g2d_Font_float_float)(jcontext ctx, jobject self, jobject param0, jfloat param1, jfloat param2);
#define VTABLE_arc_scene_ui_TextField_drawCursor_arc_scene_style_Drawable_arc_graphics_g2d_Font_float_float 144
typedef void (*func_arc_scene_ui_TextField_drawCursor_arc_scene_style_Drawable_arc_graphics_g2d_Font_float_float)(jcontext ctx, jobject self, jobject param0, jobject param1, jfloat param2, jfloat param3);
#define VTABLE_arc_scene_ui_TextField_updateDisplayText 145
typedef void (*func_arc_scene_ui_TextField_updateDisplayText)(jcontext ctx, jobject self);
#define VTABLE_arc_scene_ui_TextField_blink 146
typedef void (*func_arc_scene_ui_TextField_blink)(jcontext ctx, jobject self);
#define VTABLE_arc_scene_ui_TextField_copy 147
typedef void (*func_arc_scene_ui_TextField_copy)(jcontext ctx, jobject self);
#define VTABLE_arc_scene_ui_TextField_cut 148
typedef void (*func_arc_scene_ui_TextField_cut)(jcontext ctx, jobject self);
#define VTABLE_arc_scene_ui_TextField_cut_boolean 149
typedef void (*func_arc_scene_ui_TextField_cut_boolean)(jcontext ctx, jobject self, jbool param0);
#define VTABLE_arc_scene_ui_TextField_paste_java_lang_String_boolean 150
typedef void (*func_arc_scene_ui_TextField_paste_java_lang_String_boolean)(jcontext ctx, jobject self, jobject param0, jbool param1);
#define VTABLE_arc_scene_ui_TextField_insert_int_java_lang_CharSequence_java_lang_String_R_java_lang_String 151
typedef jobject (*func_arc_scene_ui_TextField_insert_int_java_lang_CharSequence_java_lang_String_R_java_lang_String)(jcontext ctx, jobject self, jint param0, jobject param1, jobject param2);
#define VTABLE_arc_scene_ui_TextField_delete_boolean_R_int 152
typedef jint (*func_arc_scene_ui_TextField_delete_boolean_R_int)(jcontext ctx, jobject self, jbool param0);
#define VTABLE_arc_scene_ui_TextField_next_boolean 153
typedef void (*func_arc_scene_ui_TextField_next_boolean)(jcontext ctx, jobject self, jbool param0);
#define VTABLE_arc_scene_ui_TextField_findNextTextField_arc_struct_Seq_arc_scene_ui_TextField_arc_math_geom_Vec2_arc_math_geom_Vec2_boolean_R_arc_scene_ui_TextField 154
typedef jobject (*func_arc_scene_ui_TextField_findNextTextField_arc_struct_Seq_arc_scene_ui_TextField_arc_math_geom_Vec2_arc_math_geom_Vec2_boolean_R_arc_scene_ui_TextField)(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2, jobject param3, jbool param4);
#define VTABLE_arc_scene_ui_TextField_getDefaultInputListener_R_arc_scene_event_InputListener 155
typedef jobject (*func_arc_scene_ui_TextField_getDefaultInputListener_R_arc_scene_event_InputListener)(jcontext ctx, jobject self);
#define VTABLE_arc_scene_ui_TextField_setTextFieldListener_arc_scene_ui_TextField$TextFieldListener 156
typedef void (*func_arc_scene_ui_TextField_setTextFieldListener_arc_scene_ui_TextField$TextFieldListener)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_scene_ui_TextField_typed_char_java_lang_Runnable 157
typedef void (*func_arc_scene_ui_TextField_typed_char_java_lang_Runnable)(jcontext ctx, jobject self, jchar param0, jobject param1);
#define VTABLE_arc_scene_ui_TextField_typed_arc_func_Cons 158
typedef void (*func_arc_scene_ui_TextField_typed_arc_func_Cons)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_scene_ui_TextField_getFilter_R_arc_scene_ui_TextField$TextFieldFilter 159
typedef jobject (*func_arc_scene_ui_TextField_getFilter_R_arc_scene_ui_TextField$TextFieldFilter)(jcontext ctx, jobject self);
#define VTABLE_arc_scene_ui_TextField_setFilter_arc_scene_ui_TextField$TextFieldFilter 160
typedef void (*func_arc_scene_ui_TextField_setFilter_arc_scene_ui_TextField$TextFieldFilter)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_scene_ui_TextField_setValidator_arc_scene_ui_TextField$TextFieldValidator 161
typedef void (*func_arc_scene_ui_TextField_setValidator_arc_scene_ui_TextField$TextFieldValidator)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_scene_ui_TextField_getValidator_R_arc_scene_ui_TextField$TextFieldValidator 162
typedef jobject (*func_arc_scene_ui_TextField_getValidator_R_arc_scene_ui_TextField$TextFieldValidator)(jcontext ctx, jobject self);
#define VTABLE_arc_scene_ui_TextField_setFocusTraversal_boolean 163
typedef void (*func_arc_scene_ui_TextField_setFocusTraversal_boolean)(jcontext ctx, jobject self, jbool param0);
#define VTABLE_arc_scene_ui_TextField_getMessageText_R_java_lang_String 164
typedef jobject (*func_arc_scene_ui_TextField_getMessageText_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_arc_scene_ui_TextField_setMessageText_java_lang_String 165
typedef void (*func_arc_scene_ui_TextField_setMessageText_java_lang_String)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_scene_ui_TextField_appendText_java_lang_String 166
typedef void (*func_arc_scene_ui_TextField_appendText_java_lang_String)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_scene_ui_TextField_getText_R_java_lang_String 167
typedef jobject (*func_arc_scene_ui_TextField_getText_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_arc_scene_ui_TextField_setText_java_lang_String 168
typedef void (*func_arc_scene_ui_TextField_setText_java_lang_String)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_scene_ui_TextField_changeText_java_lang_String_java_lang_String_R_boolean 169
typedef jbool (*func_arc_scene_ui_TextField_changeText_java_lang_String_java_lang_String_R_boolean)(jcontext ctx, jobject self, jobject param0, jobject param1);
#define VTABLE_arc_scene_ui_TextField_getProgrammaticChangeEvents_R_boolean 170
typedef jbool (*func_arc_scene_ui_TextField_getProgrammaticChangeEvents_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_arc_scene_ui_TextField_setProgrammaticChangeEvents_boolean 171
typedef void (*func_arc_scene_ui_TextField_setProgrammaticChangeEvents_boolean)(jcontext ctx, jobject self, jbool param0);
#define VTABLE_arc_scene_ui_TextField_getSelectionStart_R_int 172
typedef jint (*func_arc_scene_ui_TextField_getSelectionStart_R_int)(jcontext ctx, jobject self);
#define VTABLE_arc_scene_ui_TextField_getSelection_R_java_lang_String 173
typedef jobject (*func_arc_scene_ui_TextField_getSelection_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_arc_scene_ui_TextField_setSelection_int_int 174
typedef void (*func_arc_scene_ui_TextField_setSelection_int_int)(jcontext ctx, jobject self, jint param0, jint param1);
#define VTABLE_arc_scene_ui_TextField_selectAll 175
typedef void (*func_arc_scene_ui_TextField_selectAll)(jcontext ctx, jobject self);
#define VTABLE_arc_scene_ui_TextField_clearSelection 176
typedef void (*func_arc_scene_ui_TextField_clearSelection)(jcontext ctx, jobject self);
#define VTABLE_arc_scene_ui_TextField_getCursorPosition_R_int 177
typedef jint (*func_arc_scene_ui_TextField_getCursorPosition_R_int)(jcontext ctx, jobject self);
#define VTABLE_arc_scene_ui_TextField_setCursorPosition_int 178
typedef void (*func_arc_scene_ui_TextField_setCursorPosition_int)(jcontext ctx, jobject self, jint param0);
#define VTABLE_arc_scene_ui_TextField_setAlignment_int 179
typedef void (*func_arc_scene_ui_TextField_setAlignment_int)(jcontext ctx, jobject self, jint param0);
#define VTABLE_arc_scene_ui_TextField_isPasswordMode_R_boolean 180
typedef jbool (*func_arc_scene_ui_TextField_isPasswordMode_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_arc_scene_ui_TextField_setPasswordMode_boolean 181
typedef void (*func_arc_scene_ui_TextField_setPasswordMode_boolean)(jcontext ctx, jobject self, jbool param0);
#define VTABLE_arc_scene_ui_TextField_setPasswordCharacter_char 182
typedef void (*func_arc_scene_ui_TextField_setPasswordCharacter_char)(jcontext ctx, jobject self, jchar param0);
#define VTABLE_arc_scene_ui_TextField_setBlinkTime_float 183
typedef void (*func_arc_scene_ui_TextField_setBlinkTime_float)(jcontext ctx, jobject self, jfloat param0);
#define VTABLE_arc_scene_ui_TextField_moveCursor_boolean_boolean 184
typedef void (*func_arc_scene_ui_TextField_moveCursor_boolean_boolean)(jcontext ctx, jobject self, jbool param0, jbool param1);
#define VTABLE_arc_scene_ui_TextField_continueCursor_int_int_R_boolean 185
typedef jbool (*func_arc_scene_ui_TextField_continueCursor_int_int_R_boolean)(jcontext ctx, jobject self, jint param0, jint param1);
#define VTABLE_arc_scene_ui_TextField_lambda$addInputDialog$0 186
typedef void (*func_arc_scene_ui_TextField_lambda$addInputDialog$0)(jcontext ctx, jobject self);
#define VTABLE_arc_scene_ui_TextField_lambda$addInputDialog$2 187
typedef void (*func_arc_scene_ui_TextField_lambda$addInputDialog$2)(jcontext ctx, jobject self);
#define VTABLE_arc_scene_ui_TextField_lambda$addInputDialog$1_java_lang_String 188
typedef void (*func_arc_scene_ui_TextField_lambda$addInputDialog$1_java_lang_String)(jcontext ctx, jobject self, jobject param0);

void mark_arc_scene_ui_TextField(jobject object, jint mark, jint depth);
void clinit_arc_scene_ui_TextField(jcontext ctx);
void init_arc_scene_ui_TextField(jcontext ctx, jobject self);
void init_arc_scene_ui_TextField_java_lang_String(jcontext ctx, jobject self, jobject param0);
void init_arc_scene_ui_TextField_java_lang_String_arc_scene_ui_TextField$TextFieldStyle(jcontext ctx, jobject self, jobject param0, jobject param1);
void M_arc_scene_ui_TextField_initialize(jcontext ctx, jobject self);
jobject M_arc_scene_ui_TextField_createInputListener_R_arc_scene_event_InputListener(jcontext ctx, jobject self);
jint M_arc_scene_ui_TextField_letterUnderCursor_float_R_int(jcontext ctx, jobject self, jfloat param0);
jbool M_arc_scene_ui_TextField_isWordCharacter_char_R_boolean(jcontext ctx, jobject self, jchar param0);
jobject M_arc_scene_ui_TextField_wordUnderCursor_int_R_Array1_int(jcontext ctx, jobject self, jint param0);
jobject M_arc_scene_ui_TextField_wordUnderCursor_float_R_Array1_int(jcontext ctx, jobject self, jfloat param0);
jbool M_arc_scene_ui_TextField_withinMaxLength_int_R_boolean(jcontext ctx, jobject self, jint param0);
void M_arc_scene_ui_TextField_removeInputDialog(jcontext ctx, jobject self);
void M_arc_scene_ui_TextField_addInputDialog(jcontext ctx, jobject self);
jint M_arc_scene_ui_TextField_getMaxLength_R_int(jcontext ctx, jobject self);
void M_arc_scene_ui_TextField_setMaxLength_int(jcontext ctx, jobject self, jint param0);
void M_arc_scene_ui_TextField_clearText(jcontext ctx, jobject self);
void M_arc_scene_ui_TextField_setOnlyFontChars_boolean(jcontext ctx, jobject self, jbool param0);
jobject M_arc_scene_ui_TextField_getStyle_R_arc_scene_ui_TextField$TextFieldStyle(jcontext ctx, jobject self);
void M_arc_scene_ui_TextField_setStyle_arc_scene_ui_TextField$TextFieldStyle(jcontext ctx, jobject self, jobject param0);
void M_arc_scene_ui_TextField_calculateOffsets(jcontext ctx, jobject self);
jobject M_arc_scene_ui_TextField_getBackgroundDrawable_R_arc_scene_style_Drawable(jcontext ctx, jobject self);
void M_arc_scene_ui_TextField_draw(jcontext ctx, jobject self);
jbool M_arc_scene_ui_TextField_isValid_R_boolean(jcontext ctx, jobject self);
jfloat M_arc_scene_ui_TextField_getTextY_arc_graphics_g2d_Font_arc_scene_style_Drawable_R_float(jcontext ctx, jobject self, jobject param0, jobject param1);
void M_arc_scene_ui_TextField_drawSelection_arc_scene_style_Drawable_arc_graphics_g2d_Font_float_float(jcontext ctx, jobject self, jobject param0, jobject param1, jfloat param2, jfloat param3);
void M_arc_scene_ui_TextField_drawText_arc_graphics_g2d_Font_float_float(jcontext ctx, jobject self, jobject param0, jfloat param1, jfloat param2);
void M_arc_scene_ui_TextField_drawCursor_arc_scene_style_Drawable_arc_graphics_g2d_Font_float_float(jcontext ctx, jobject self, jobject param0, jobject param1, jfloat param2, jfloat param3);
void M_arc_scene_ui_TextField_updateDisplayText(jcontext ctx, jobject self);
void M_arc_scene_ui_TextField_blink(jcontext ctx, jobject self);
void M_arc_scene_ui_TextField_copy(jcontext ctx, jobject self);
void M_arc_scene_ui_TextField_cut(jcontext ctx, jobject self);
void M_arc_scene_ui_TextField_cut_boolean(jcontext ctx, jobject self, jbool param0);
void M_arc_scene_ui_TextField_paste_java_lang_String_boolean(jcontext ctx, jobject self, jobject param0, jbool param1);
jobject M_arc_scene_ui_TextField_insert_int_java_lang_CharSequence_java_lang_String_R_java_lang_String(jcontext ctx, jobject self, jint param0, jobject param1, jobject param2);
jint M_arc_scene_ui_TextField_delete_boolean_R_int(jcontext ctx, jobject self, jbool param0);
void M_arc_scene_ui_TextField_next_boolean(jcontext ctx, jobject self, jbool param0);
jobject M_arc_scene_ui_TextField_findNextTextField_arc_struct_Seq_arc_scene_ui_TextField_arc_math_geom_Vec2_arc_math_geom_Vec2_boolean_R_arc_scene_ui_TextField(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2, jobject param3, jbool param4);
jobject M_arc_scene_ui_TextField_getDefaultInputListener_R_arc_scene_event_InputListener(jcontext ctx, jobject self);
void M_arc_scene_ui_TextField_setTextFieldListener_arc_scene_ui_TextField$TextFieldListener(jcontext ctx, jobject self, jobject param0);
void M_arc_scene_ui_TextField_typed_char_java_lang_Runnable(jcontext ctx, jobject self, jchar param0, jobject param1);
void M_arc_scene_ui_TextField_typed_arc_func_Cons(jcontext ctx, jobject self, jobject param0);
jobject M_arc_scene_ui_TextField_getFilter_R_arc_scene_ui_TextField$TextFieldFilter(jcontext ctx, jobject self);
void M_arc_scene_ui_TextField_setFilter_arc_scene_ui_TextField$TextFieldFilter(jcontext ctx, jobject self, jobject param0);
void M_arc_scene_ui_TextField_setValidator_arc_scene_ui_TextField$TextFieldValidator(jcontext ctx, jobject self, jobject param0);
jobject M_arc_scene_ui_TextField_getValidator_R_arc_scene_ui_TextField$TextFieldValidator(jcontext ctx, jobject self);
void M_arc_scene_ui_TextField_setFocusTraversal_boolean(jcontext ctx, jobject self, jbool param0);
jobject M_arc_scene_ui_TextField_getMessageText_R_java_lang_String(jcontext ctx, jobject self);
void M_arc_scene_ui_TextField_setMessageText_java_lang_String(jcontext ctx, jobject self, jobject param0);
void M_arc_scene_ui_TextField_appendText_java_lang_String(jcontext ctx, jobject self, jobject param0);
jobject M_arc_scene_ui_TextField_getText_R_java_lang_String(jcontext ctx, jobject self);
void M_arc_scene_ui_TextField_setText_java_lang_String(jcontext ctx, jobject self, jobject param0);
jbool M_arc_scene_ui_TextField_changeText_java_lang_String_java_lang_String_R_boolean(jcontext ctx, jobject self, jobject param0, jobject param1);
jbool M_arc_scene_ui_TextField_getProgrammaticChangeEvents_R_boolean(jcontext ctx, jobject self);
void M_arc_scene_ui_TextField_setProgrammaticChangeEvents_boolean(jcontext ctx, jobject self, jbool param0);
jint M_arc_scene_ui_TextField_getSelectionStart_R_int(jcontext ctx, jobject self);
jobject M_arc_scene_ui_TextField_getSelection_R_java_lang_String(jcontext ctx, jobject self);
void M_arc_scene_ui_TextField_setSelection_int_int(jcontext ctx, jobject self, jint param0, jint param1);
void M_arc_scene_ui_TextField_selectAll(jcontext ctx, jobject self);
void M_arc_scene_ui_TextField_clearSelection(jcontext ctx, jobject self);
jint M_arc_scene_ui_TextField_getCursorPosition_R_int(jcontext ctx, jobject self);
void M_arc_scene_ui_TextField_setCursorPosition_int(jcontext ctx, jobject self, jint param0);
jfloat M_arc_scene_ui_TextField_getPrefWidth_R_float(jcontext ctx, jobject self);
jfloat M_arc_scene_ui_TextField_getPrefHeight_R_float(jcontext ctx, jobject self);
void M_arc_scene_ui_TextField_setAlignment_int(jcontext ctx, jobject self, jint param0);
jbool M_arc_scene_ui_TextField_isPasswordMode_R_boolean(jcontext ctx, jobject self);
void M_arc_scene_ui_TextField_setPasswordMode_boolean(jcontext ctx, jobject self, jbool param0);
void M_arc_scene_ui_TextField_setPasswordCharacter_char(jcontext ctx, jobject self, jchar param0);
void M_arc_scene_ui_TextField_setBlinkTime_float(jcontext ctx, jobject self, jfloat param0);
jbool M_arc_scene_ui_TextField_isDisabled_R_boolean(jcontext ctx, jobject self);
void M_arc_scene_ui_TextField_setDisabled_boolean(jcontext ctx, jobject self, jbool param0);
void M_arc_scene_ui_TextField_moveCursor_boolean_boolean(jcontext ctx, jobject self, jbool param0, jbool param1);
jbool M_arc_scene_ui_TextField_continueCursor_int_int_R_boolean(jcontext ctx, jobject self, jint param0, jint param1);
void SM_arc_scene_ui_TextField_lambda$typed$1_arc_func_Cons_arc_scene_ui_TextField_char(jcontext ctx, jobject param0, jobject param1, jchar param2);
void SM_arc_scene_ui_TextField_lambda$typed$0_char_java_lang_Runnable_arc_scene_ui_TextField_char(jcontext ctx, jchar param0, jobject param1, jobject param2, jchar param3);
void M_arc_scene_ui_TextField_lambda$addInputDialog$0(jcontext ctx, jobject self);
void M_arc_scene_ui_TextField_lambda$addInputDialog$2(jcontext ctx, jobject self);
void M_arc_scene_ui_TextField_lambda$addInputDialog$1_java_lang_String(jcontext ctx, jobject self, jobject param0);

#ifdef __cplusplus
}
#endif

#endif
