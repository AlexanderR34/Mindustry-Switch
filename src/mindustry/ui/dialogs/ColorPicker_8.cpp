#include "mindustry/ui/dialogs/ColorPicker_8.h"
#include "arc/scene/ui/Slider.h"
#include "mindustry/ui/dialogs/ColorPicker_8_invoke_arc_func_Floatc_1.h"
#include "java/lang/Object.h"
#include "arc/scene/Element.h"
#include "mindustry/ui/dialogs/ColorPicker_8.h"
#include "arc/func/Floatc.h"
#include "mindustry/ui/dialogs/ColorPicker.h"
#include "arc/scene/ui/ProgressBar.h"

extern "C" {


void mark_mindustry_ui_dialogs_ColorPicker$8(jobject object, jint mark, jint depth) {
	if (!object) {
		return;
	}
	if (depth > GC_DEPTH_ALWAYS && (object->gcMark < GC_MARK_START || object->gcMark == mark))
		return;
	if (depth > MAX_GC_MARK_DEPTH) {
		markDeepObject(object);
		return;
	}
	mark_arc_scene_ui_Slider(object, mark, depth);
	if (object->gcMark >= GC_MARK_START)
		object->gcMark = mark;
	auto self = (mindustry_ui_dialogs_ColorPicker$8 *) object;
	if (self->F_this$0)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_this$0)->clazz)->markFunction)((jobject) self->F_this$0, mark, depth + 1);
}

void clinit_mindustry_ui_dialogs_ColorPicker$8(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	clinit_arc_scene_ui_Slider(ctx);
}

void init_mindustry_ui_dialogs_ColorPicker$8_mindustry_ui_dialogs_ColorPicker_float_float_float_boolean(jcontext ctx, jobject self, jobject param0, jfloat param1, jfloat param2, jfloat param3, jbool param4) {
	NULL_CHECK(self);
	jtype frame[11];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/dialogs/ColorPicker$8:<init>", 11 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_ui_dialogs_ColorPicker$8(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	frame[2].f = param1;
	frame[3].f = param2;
	frame[4].f = param3;
	frame[5].i = param4;
	{
	LINE_NUMBER(123);
	((mindustry_ui_dialogs_ColorPicker$8 *) NULL_CHECK((frame[0].o)))->F_this$0 = (jref) (frame[1].o);
	init_arc_scene_ui_Slider_float_float_float_boolean(ctx, (frame[0].o), (frame[2].f), (frame[3].f), (frame[4].f), (frame[5].i));
	LINE_NUMBER(124);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((mindustry_ui_dialogs_ColorPicker$8 *) NULL_CHECK((frame[0].o)))->F_this$0;
	jint temp0 = (jint)((func_mindustry_ui_dialogs_ColorPicker$8_setValue_float_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_ui_dialogs_ColorPicker$8_setValue_float_R_boolean])(ctx, sp[0].o, ((jfloat)((mindustry_ui_dialogs_ColorPicker *) NULL_CHECK(sp[1].o))->F_a));
	LINE_NUMBER(126);
	sp[0].o = frame[0].o;
	{ /* InvokeDynamic */
		clinit_mindustry_ui_dialogs_ColorPicker$8_invoke_arc_func_Floatc_1(ctx);
		auto proxy = (mindustry_ui_dialogs_ColorPicker$8_invoke_arc_func_Floatc_1 *) gcAlloc(ctx, &class_mindustry_ui_dialogs_ColorPicker$8_invoke_arc_func_Floatc_1);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[1].o = (jobject) proxy;
	}
	((func_mindustry_ui_dialogs_ColorPicker$8_moved_arc_func_Floatc) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_ui_dialogs_ColorPicker$8_moved_arc_func_Floatc])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(123);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_ui_dialogs_ColorPicker$8_lambda$new$0_float(jcontext ctx, jobject self, jfloat param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/dialogs/ColorPicker$8:lambda$new$0", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	{
	LINE_NUMBER(127);
	sp[0].o = (jobject)((mindustry_ui_dialogs_ColorPicker$8 *) NULL_CHECK((frame[0].o)))->F_this$0;
	((mindustry_ui_dialogs_ColorPicker *) NULL_CHECK(sp[0].o))->F_a = (frame[1].f);
	LINE_NUMBER(128);
	sp[0].o = (jobject)((mindustry_ui_dialogs_ColorPicker$8 *) NULL_CHECK((frame[0].o)))->F_this$0;
	((func_mindustry_ui_dialogs_ColorPicker_updateColor) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_ui_dialogs_ColorPicker_updateColor])(ctx, sp[0].o);
	LINE_NUMBER(129);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void *vtable_mindustry_ui_dialogs_ColorPicker$8[] {
	(void *) M_java_lang_Object_hashCode_R_int,
	(void *) M_java_lang_Object_equals_java_lang_Object_R_boolean,
	(void *) M_java_lang_Object_clone_R_java_lang_Object,
	(void *) M_java_lang_Object_getClass_R_java_lang_Class,
	(void *) M_arc_scene_Element_toString_R_java_lang_String,
	(void *) M_java_lang_Object_finalize,
	(void *) M_java_lang_Object_notify,
	(void *) M_java_lang_Object_notifyAll,
	(void *) M_java_lang_Object_wait,
	(void *) M_java_lang_Object_wait_long,
	(void *) M_java_lang_Object_wait_long_int,
	(void *) M_arc_scene_ui_ProgressBar_draw,
	(void *) M_arc_scene_ui_ProgressBar_act_float,
	(void *) M_arc_scene_Element_updateVisibility,
	(void *) M_arc_scene_Element_hasMouse_R_boolean,
	(void *) M_arc_scene_Element_hasKeyboard_R_boolean,
	(void *) M_arc_scene_Element_hasScroll_R_boolean,
	(void *) M_arc_scene_Element_requestKeyboard,
	(void *) M_arc_scene_Element_requestScroll,
	(void *) M_arc_scene_Element_fire_arc_scene_event_SceneEvent_R_boolean,
	(void *) M_arc_scene_Element_notify_arc_scene_event_SceneEvent_boolean_R_boolean,
	(void *) M_arc_scene_Element_hit_float_float_boolean_R_arc_scene_Element,
	(void *) M_arc_scene_Element_remove_R_boolean,
	(void *) M_arc_scene_Element_dragged_arc_func_Floatc2,
	(void *) M_arc_scene_Element_scrolled_arc_func_Floatc,
	(void *) M_arc_scene_Element_addListener_arc_scene_event_EventListener_R_boolean,
	(void *) M_arc_scene_Element_removeListener_arc_scene_event_EventListener_R_boolean,
	(void *) M_arc_scene_Element_getListeners_R_arc_struct_Seq,
	(void *) M_arc_scene_Element_addCaptureListener_arc_scene_event_EventListener_R_boolean,
	(void *) M_arc_scene_Element_removeCaptureListener_arc_scene_event_EventListener_R_boolean,
	(void *) M_arc_scene_Element_getCaptureListeners_R_arc_struct_Seq,
	(void *) M_arc_scene_Element_addAction_arc_scene_Action,
	(void *) M_arc_scene_Element_actions_Array1_arc_scene_Action,
	(void *) M_arc_scene_Element_removeAction_arc_scene_Action,
	(void *) M_arc_scene_Element_getActions_R_arc_struct_Seq,
	(void *) M_arc_scene_Element_hasActions_R_boolean,
	(void *) M_arc_scene_Element_clearActions,
	(void *) M_arc_scene_Element_clearListeners,
	(void *) M_arc_scene_Element_clear,
	(void *) M_arc_scene_Element_getScene_R_arc_scene_Scene,
	(void *) M_arc_scene_Element_setScene_arc_scene_Scene,
	(void *) M_arc_scene_Element_isDescendantOf_arc_func_Boolf_R_boolean,
	(void *) M_arc_scene_Element_isDescendantOf_arc_scene_Element_R_boolean,
	(void *) M_arc_scene_Element_isAscendantOf_arc_scene_Element_R_boolean,
	(void *) M_arc_scene_Element_hasParent_R_boolean,
	(void *) M_arc_scene_Element_isTouchable_R_boolean,
	(void *) M_arc_scene_Element_getX_int_R_float,
	(void *) M_arc_scene_Element_getY_int_R_float,
	(void *) M_arc_scene_Element_setPosition_float_float,
	(void *) M_arc_scene_Element_setPosition_float_float_int,
	(void *) M_arc_scene_Element_moveBy_float_float,
	(void *) M_arc_scene_Element_getWidth_R_float,
	(void *) M_arc_scene_Element_setWidth_float,
	(void *) M_arc_scene_Element_getHeight_R_float,
	(void *) M_arc_scene_Element_setHeight_float,
	(void *) M_arc_scene_Element_getTop_R_float,
	(void *) M_arc_scene_Element_getRight_R_float,
	(void *) M_arc_scene_Element_sizeChanged,
	(void *) M_arc_scene_Element_rotationChanged,
	(void *) M_arc_scene_Element_setSize_float,
	(void *) M_arc_scene_Element_setSize_float_float,
	(void *) M_arc_scene_Element_sizeBy_float,
	(void *) M_arc_scene_Element_sizeBy_float_float,
	(void *) M_arc_scene_Element_setBounds_float_float_float_float,
	(void *) M_arc_scene_Element_setOrigin_float_float,
	(void *) M_arc_scene_Element_setOrigin_int,
	(void *) M_arc_scene_Element_setScale_float,
	(void *) M_arc_scene_Element_setScale_float_float,
	(void *) M_arc_scene_Element_scaleBy_float,
	(void *) M_arc_scene_Element_scaleBy_float_float,
	(void *) M_arc_scene_Element_getRotation_R_float,
	(void *) M_arc_scene_Element_setRotation_float,
	(void *) M_arc_scene_Element_setRotationOrigin_float_int,
	(void *) M_arc_scene_Element_rotateBy_float,
	(void *) M_arc_scene_Element_setColor_float_float_float_float,
	(void *) M_arc_scene_Element_setColor_arc_graphics_Color,
	(void *) M_arc_scene_Element_toFront,
	(void *) M_arc_scene_Element_toBack,
	(void *) M_arc_scene_Element_getZIndex_R_int,
	(void *) M_arc_scene_Element_setZIndex_int,
	(void *) M_arc_scene_Element_clipBegin_R_boolean,
	(void *) M_arc_scene_Element_clipBegin_float_float_float_float_R_boolean,
	(void *) M_arc_scene_Element_clipEnd,
	(void *) M_arc_scene_Element_screenToLocalCoordinates_arc_math_geom_Vec2_R_arc_math_geom_Vec2,
	(void *) M_arc_scene_Element_stageToLocalCoordinates_arc_math_geom_Vec2_R_arc_math_geom_Vec2,
	(void *) M_arc_scene_Element_localToStageCoordinates_arc_math_geom_Vec2_R_arc_math_geom_Vec2,
	(void *) M_arc_scene_Element_localToParentCoordinates_arc_math_geom_Vec2_R_arc_math_geom_Vec2,
	(void *) M_arc_scene_Element_localToAscendantCoordinates_arc_scene_Element_arc_math_geom_Vec2_R_arc_math_geom_Vec2,
	(void *) M_arc_scene_Element_parentToLocalCoordinates_arc_math_geom_Vec2_R_arc_math_geom_Vec2,
	(void *) M_arc_scene_Element_getMinWidth_R_float,
	(void *) M_arc_scene_Element_getMinHeight_R_float,
	(void *) M_arc_scene_ui_ProgressBar_getPrefWidth_R_float,
	(void *) M_arc_scene_ui_ProgressBar_getPrefHeight_R_float,
	(void *) M_arc_scene_Element_getMaxWidth_R_float,
	(void *) M_arc_scene_Element_getMaxHeight_R_float,
	(void *) M_arc_scene_Element_setLayoutEnabled_boolean,
	(void *) M_arc_scene_Element_validate,
	(void *) M_arc_scene_Element_needsLayout_R_boolean,
	(void *) M_arc_scene_Element_invalidate,
	(void *) M_arc_scene_Element_invalidateHierarchy,
	(void *) M_arc_scene_Element_pack,
	(void *) M_arc_scene_Element_setFillParent_boolean,
	(void *) M_arc_scene_Element_layout,
	(void *) M_arc_scene_Element_keepInStage,
	(void *) M_arc_scene_Element_setTranslation_float_float,
	(void *) M_arc_scene_Element_keyDown_arc_input_KeyCode_java_lang_Runnable,
	(void *) M_arc_scene_Element_keyDown_arc_func_Cons,
	(void *) M_arc_scene_Element_fireClick,
	(void *) M_arc_scene_Element_clicked_java_lang_Runnable_R_arc_scene_event_ClickListener,
	(void *) M_arc_scene_Element_clicked_arc_input_KeyCode_java_lang_Runnable_R_arc_scene_event_ClickListener,
	(void *) M_arc_scene_Element_clicked_arc_func_Cons_java_lang_Runnable_R_arc_scene_event_ClickListener,
	(void *) M_arc_scene_Element_clicked_arc_func_Cons_arc_func_Cons_R_arc_scene_event_ClickListener,
	(void *) M_arc_scene_Element_tapped_java_lang_Runnable_R_arc_scene_event_InputListener,
	(void *) M_arc_scene_Element_hovered_java_lang_Runnable,
	(void *) M_arc_scene_Element_exited_java_lang_Runnable,
	(void *) M_arc_scene_Element_released_java_lang_Runnable,
	(void *) M_arc_scene_Element_change,
	(void *) M_arc_scene_Element_changed_java_lang_Runnable,
	(void *) M_arc_scene_Element_update_java_lang_Runnable_R_arc_scene_Element,
	(void *) M_arc_scene_Element_visible_arc_func_Boolp_R_arc_scene_Element,
	(void *) M_arc_scene_Element_touchable_arc_func_Prov,
	(void *) M_arc_scene_ui_ProgressBar_isDisabled_R_boolean,
	(void *) M_arc_scene_ui_ProgressBar_setDisabled_boolean,
	(void *) M_arc_scene_ui_Slider_getStyle_R_arc_scene_ui_ProgressBar$ProgressBarStyle,
	(void *) M_arc_scene_ui_ProgressBar_setStyle_arc_scene_ui_ProgressBar$ProgressBarStyle,
	(void *) M_arc_scene_ui_ProgressBar_getValue_R_float,
	(void *) M_arc_scene_ui_ProgressBar_getVisualValue_R_float,
	(void *) M_arc_scene_ui_ProgressBar_getPercent_R_float,
	(void *) M_arc_scene_ui_ProgressBar_getVisualPercent_R_float,
	(void *) M_arc_scene_ui_Slider_getKnobDrawable_R_arc_scene_style_Drawable,
	(void *) M_arc_scene_ui_ProgressBar_getKnobPosition_R_float,
	(void *) M_arc_scene_ui_ProgressBar_setValue_float_R_boolean,
	(void *) M_arc_scene_ui_ProgressBar_setValue_float_boolean_R_boolean,
	(void *) M_arc_scene_ui_ProgressBar_clamp_float_R_float,
	(void *) M_arc_scene_ui_ProgressBar_setRange_float_float,
	(void *) M_arc_scene_ui_ProgressBar_getMinValue_R_float,
	(void *) M_arc_scene_ui_ProgressBar_getMaxValue_R_float,
	(void *) M_arc_scene_ui_ProgressBar_getStepSize_R_float,
	(void *) M_arc_scene_ui_ProgressBar_setStepSize_float,
	(void *) M_arc_scene_ui_ProgressBar_setAnimateDuration_float,
	(void *) M_arc_scene_ui_ProgressBar_setAnimateInterpolation_arc_math_Interp,
	(void *) M_arc_scene_ui_ProgressBar_setVisualInterpolation_arc_math_Interp,
	(void *) M_arc_scene_ui_ProgressBar_setRound_boolean,
	(void *) M_arc_scene_ui_ProgressBar_isVertical_R_boolean,
	(void *) M_arc_scene_ui_Slider_getStyle_R_arc_scene_ui_Slider$SliderStyle,
	(void *) M_arc_scene_ui_Slider_setStyle_arc_scene_ui_Slider$SliderStyle,
	(void *) M_arc_scene_ui_Slider_calculatePositionAndValue_float_float_R_boolean,
	(void *) M_arc_scene_ui_Slider_moved_arc_func_Floatc,
	(void *) M_arc_scene_ui_Slider_snap_float_R_float,
	(void *) M_arc_scene_ui_Slider_setSnapToValues_Array1_float_float,
	(void *) M_arc_scene_ui_Slider_isDragging_R_boolean,
	(void *) M_arc_scene_ui_Slider_setVisualInterpolationInverse_arc_math_Interp,
	(void *) M_arc_scene_ui_Slider_lambda$moved$0_arc_func_Floatc,
	(void *) M_mindustry_ui_dialogs_ColorPicker$8_lambda$new$0_float,
};

static VtableEntry vtableEntries[] {
	{ "hashCode", "()I" },
	{ "equals", "(Ljava/lang/Object;)Z" },
	{ "clone", "()Ljava/lang/Object;" },
	{ "getClass", "()Ljava/lang/Class;" },
	{ "toString", "()Ljava/lang/String;" },
	{ "finalize", "()V" },
	{ "notify", "()V" },
	{ "notifyAll", "()V" },
	{ "wait", "()V" },
	{ "wait", "(J)V" },
	{ "wait", "(JI)V" },
	{ "draw", "()V" },
	{ "act", "(F)V" },
	{ "updateVisibility", "()V" },
	{ "hasMouse", "()Z" },
	{ "hasKeyboard", "()Z" },
	{ "hasScroll", "()Z" },
	{ "requestKeyboard", "()V" },
	{ "requestScroll", "()V" },
	{ "fire", "(Larc/scene/event/SceneEvent;)Z" },
	{ "notify", "(Larc/scene/event/SceneEvent;Z)Z" },
	{ "hit", "(FFZ)Larc/scene/Element;" },
	{ "remove", "()Z" },
	{ "dragged", "(Larc/func/Floatc2;)V" },
	{ "scrolled", "(Larc/func/Floatc;)V" },
	{ "addListener", "(Larc/scene/event/EventListener;)Z" },
	{ "removeListener", "(Larc/scene/event/EventListener;)Z" },
	{ "getListeners", "()Larc/struct/Seq;" },
	{ "addCaptureListener", "(Larc/scene/event/EventListener;)Z" },
	{ "removeCaptureListener", "(Larc/scene/event/EventListener;)Z" },
	{ "getCaptureListeners", "()Larc/struct/Seq;" },
	{ "addAction", "(Larc/scene/Action;)V" },
	{ "actions", "([Larc/scene/Action;)V" },
	{ "removeAction", "(Larc/scene/Action;)V" },
	{ "getActions", "()Larc/struct/Seq;" },
	{ "hasActions", "()Z" },
	{ "clearActions", "()V" },
	{ "clearListeners", "()V" },
	{ "clear", "()V" },
	{ "getScene", "()Larc/scene/Scene;" },
	{ "setScene", "(Larc/scene/Scene;)V" },
	{ "isDescendantOf", "(Larc/func/Boolf;)Z" },
	{ "isDescendantOf", "(Larc/scene/Element;)Z" },
	{ "isAscendantOf", "(Larc/scene/Element;)Z" },
	{ "hasParent", "()Z" },
	{ "isTouchable", "()Z" },
	{ "getX", "(I)F" },
	{ "getY", "(I)F" },
	{ "setPosition", "(FF)V" },
	{ "setPosition", "(FFI)V" },
	{ "moveBy", "(FF)V" },
	{ "getWidth", "()F" },
	{ "setWidth", "(F)V" },
	{ "getHeight", "()F" },
	{ "setHeight", "(F)V" },
	{ "getTop", "()F" },
	{ "getRight", "()F" },
	{ "sizeChanged", "()V" },
	{ "rotationChanged", "()V" },
	{ "setSize", "(F)V" },
	{ "setSize", "(FF)V" },
	{ "sizeBy", "(F)V" },
	{ "sizeBy", "(FF)V" },
	{ "setBounds", "(FFFF)V" },
	{ "setOrigin", "(FF)V" },
	{ "setOrigin", "(I)V" },
	{ "setScale", "(F)V" },
	{ "setScale", "(FF)V" },
	{ "scaleBy", "(F)V" },
	{ "scaleBy", "(FF)V" },
	{ "getRotation", "()F" },
	{ "setRotation", "(F)V" },
	{ "setRotationOrigin", "(FI)V" },
	{ "rotateBy", "(F)V" },
	{ "setColor", "(FFFF)V" },
	{ "setColor", "(Larc/graphics/Color;)V" },
	{ "toFront", "()V" },
	{ "toBack", "()V" },
	{ "getZIndex", "()I" },
	{ "setZIndex", "(I)V" },
	{ "clipBegin", "()Z" },
	{ "clipBegin", "(FFFF)Z" },
	{ "clipEnd", "()V" },
	{ "screenToLocalCoordinates", "(Larc/math/geom/Vec2;)Larc/math/geom/Vec2;" },
	{ "stageToLocalCoordinates", "(Larc/math/geom/Vec2;)Larc/math/geom/Vec2;" },
	{ "localToStageCoordinates", "(Larc/math/geom/Vec2;)Larc/math/geom/Vec2;" },
	{ "localToParentCoordinates", "(Larc/math/geom/Vec2;)Larc/math/geom/Vec2;" },
	{ "localToAscendantCoordinates", "(Larc/scene/Element;Larc/math/geom/Vec2;)Larc/math/geom/Vec2;" },
	{ "parentToLocalCoordinates", "(Larc/math/geom/Vec2;)Larc/math/geom/Vec2;" },
	{ "getMinWidth", "()F" },
	{ "getMinHeight", "()F" },
	{ "getPrefWidth", "()F" },
	{ "getPrefHeight", "()F" },
	{ "getMaxWidth", "()F" },
	{ "getMaxHeight", "()F" },
	{ "setLayoutEnabled", "(Z)V" },
	{ "validate", "()V" },
	{ "needsLayout", "()Z" },
	{ "invalidate", "()V" },
	{ "invalidateHierarchy", "()V" },
	{ "pack", "()V" },
	{ "setFillParent", "(Z)V" },
	{ "layout", "()V" },
	{ "keepInStage", "()V" },
	{ "setTranslation", "(FF)V" },
	{ "keyDown", "(Larc/input/KeyCode;Ljava/lang/Runnable;)V" },
	{ "keyDown", "(Larc/func/Cons;)V" },
	{ "fireClick", "()V" },
	{ "clicked", "(Ljava/lang/Runnable;)Larc/scene/event/ClickListener;" },
	{ "clicked", "(Larc/input/KeyCode;Ljava/lang/Runnable;)Larc/scene/event/ClickListener;" },
	{ "clicked", "(Larc/func/Cons;Ljava/lang/Runnable;)Larc/scene/event/ClickListener;" },
	{ "clicked", "(Larc/func/Cons;Larc/func/Cons;)Larc/scene/event/ClickListener;" },
	{ "tapped", "(Ljava/lang/Runnable;)Larc/scene/event/InputListener;" },
	{ "hovered", "(Ljava/lang/Runnable;)V" },
	{ "exited", "(Ljava/lang/Runnable;)V" },
	{ "released", "(Ljava/lang/Runnable;)V" },
	{ "change", "()V" },
	{ "changed", "(Ljava/lang/Runnable;)V" },
	{ "update", "(Ljava/lang/Runnable;)Larc/scene/Element;" },
	{ "visible", "(Larc/func/Boolp;)Larc/scene/Element;" },
	{ "touchable", "(Larc/func/Prov;)V" },
	{ "isDisabled", "()Z" },
	{ "setDisabled", "(Z)V" },
	{ "getStyle", "()Larc/scene/ui/ProgressBar$ProgressBarStyle;" },
	{ "setStyle", "(Larc/scene/ui/ProgressBar$ProgressBarStyle;)V" },
	{ "getValue", "()F" },
	{ "getVisualValue", "()F" },
	{ "getPercent", "()F" },
	{ "getVisualPercent", "()F" },
	{ "getKnobDrawable", "()Larc/scene/style/Drawable;" },
	{ "getKnobPosition", "()F" },
	{ "setValue", "(F)Z" },
	{ "setValue", "(FZ)Z" },
	{ "clamp", "(F)F" },
	{ "setRange", "(FF)V" },
	{ "getMinValue", "()F" },
	{ "getMaxValue", "()F" },
	{ "getStepSize", "()F" },
	{ "setStepSize", "(F)V" },
	{ "setAnimateDuration", "(F)V" },
	{ "setAnimateInterpolation", "(Larc/math/Interp;)V" },
	{ "setVisualInterpolation", "(Larc/math/Interp;)V" },
	{ "setRound", "(Z)V" },
	{ "isVertical", "()Z" },
	{ "getStyle", "()Larc/scene/ui/Slider$SliderStyle;" },
	{ "setStyle", "(Larc/scene/ui/Slider$SliderStyle;)V" },
	{ "calculatePositionAndValue", "(FF)Z" },
	{ "moved", "(Larc/func/Floatc;)V" },
	{ "snap", "(F)F" },
	{ "setSnapToValues", "([FF)V" },
	{ "isDragging", "()Z" },
	{ "setVisualInterpolationInverse", "(Larc/math/Interp;)V" },
	{ "lambda$moved$0", "(Larc/func/Floatc;)V" },
	{ "lambda$new$0", "(F)V" },
};

static FieldMetadata fields[] {
	{ "this$0", &class_mindustry_ui_dialogs_ColorPicker, offsetof(mindustry_ui_dialogs_ColorPicker$8, F_this$0), "Lmindustry/ui/dialogs/ColorPicker;", 4112 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_mindustry_ui_dialogs_ColorPicker$8_mindustry_ui_dialogs_ColorPicker_float_float_float_boolean, 0, "(Lmindustry/ui/dialogs/ColorPicker;FFFZ)V", 0 },
	{ "lambda$new$0", (intptr_t) M_mindustry_ui_dialogs_ColorPicker$8_lambda$new$0_float, VTABLE_mindustry_ui_dialogs_ColorPicker$8_lambda$new$0_float, "(F)V", 4098 },
};

Class class_mindustry_ui_dialogs_ColorPicker$8{
		.nativeName = (intptr_t) "mindustry/ui/dialogs/ColorPicker$8",
		.parentClass = (intptr_t) &class_arc_scene_ui_Slider,
		.size = sizeof(mindustry_ui_dialogs_ColorPicker$8),
		.classVtable = (intptr_t) vtable_mindustry_ui_dialogs_ColorPicker$8,
		.staticInitializer = (intptr_t) clinit_mindustry_ui_dialogs_ColorPicker$8,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_mindustry_ui_dialogs_ColorPicker$8,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 32,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 1,
		.nativeFields = (intptr_t) fields,
		.methodCount = 2,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 154,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = true,
		.synthetic = false,
};
static bool registered_mindustry_ui_dialogs_ColorPicker$8 = registerClass(&class_mindustry_ui_dialogs_ColorPicker$8);

}

