#include "arc/scene/ui/Slider.h"
#include "java/lang/Math.h"
#include "arc/scene/ui/Slider.h"
#include "arc/Core.h"
#include "arc/scene/ui/ProgressBar_ProgressBarStyle.h"
#include "arc/Input.h"
#include "arc/math/Interp.h"
#include "arc/scene/ui/Slider_1.h"
#include "arc/scene/event/HandCursorListener.h"
#include "arc/scene/ui/Slider_SliderStyle.h"
#include "java/lang/IllegalArgumentException.h"
#include "arc/scene/ui/Slider_invoke_java_lang_Runnable_0.h"
#include "arc/func/Floatc.h"
#include "arc/scene/ui/ProgressBar.h"
#include "arc/input/KeyCode.h"
#include "java/lang/Runnable.h"
#include "arc/scene/Scene.h"
#include "java/lang/Object.h"
#include "arc/scene/Element.h"
#include "java/lang/String.h"
#include "java/lang/NullPointerException.h"
#include "arc/scene/event/EventListener.h"
#include "arc/scene/style/Drawable.h"
#include "java/lang/Class.h"

extern "C" {


void mark_arc_scene_ui_Slider(jobject object, jint mark, jint depth) {
	if (!object) {
		return;
	}
	if (depth > GC_DEPTH_ALWAYS && (object->gcMark < GC_MARK_START || object->gcMark == mark))
		return;
	if (depth > MAX_GC_MARK_DEPTH) {
		markDeepObject(object);
		return;
	}
	mark_arc_scene_ui_ProgressBar(object, mark, depth);
	if (object->gcMark >= GC_MARK_START)
		object->gcMark = mark;
	auto self = (arc_scene_ui_Slider *) object;
	if (self->F_visualInterpolationInverse)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_visualInterpolationInverse)->clazz)->markFunction)((jobject) self->F_visualInterpolationInverse, mark, depth + 1);
	if (self->F_snapValues)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_snapValues)->clazz)->markFunction)((jobject) self->F_snapValues, mark, depth + 1);
}

void clinit_arc_scene_ui_Slider(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	clinit_arc_scene_ui_ProgressBar(ctx);
}

void init_arc_scene_ui_Slider_float_float_float_boolean(jcontext ctx, jobject self, jfloat param0, jfloat param1, jfloat param2, jbool param3) {
	NULL_CHECK(self);
	jtype frame[12];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/ui/Slider:<init>", 12 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_scene_ui_Slider(ctx);
	frame[0].o = self;
	frame[1].f = param0;
	frame[2].f = param1;
	frame[3].f = param2;
	frame[4].i = param3;
	{
	LINE_NUMBER(38);
	sp[0].o = frame[0].o;
	jfloat temp0 = frame[1].f;
	jfloat temp1 = frame[2].f;
	jfloat temp2 = frame[3].f;
	jint temp3 = frame[4].i;
	clinit_arc_Core(ctx);
	sp[1].o = (jobject)SF_arc_Core_scene;
	sp[1].o = (jobject)((func_arc_scene_Scene_getStyle_java_lang_Class_R_java_lang_Object) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_scene_Scene_getStyle_java_lang_Class_R_java_lang_Object])(ctx, sp[1].o, (((jobject) &class_arc_scene_ui_Slider$SliderStyle)));
	init_arc_scene_ui_Slider_float_float_float_boolean_arc_scene_ui_Slider$SliderStyle(ctx, sp[0].o, temp0, temp1, temp2, temp3, (checkCast(ctx, &class_arc_scene_ui_Slider$SliderStyle, sp[1].o)));
	LINE_NUMBER(39);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_arc_scene_ui_Slider_float_float_float_boolean_arc_scene_ui_Slider$SliderStyle(jcontext ctx, jobject self, jfloat param0, jfloat param1, jfloat param2, jbool param3, jobject param4) {
	NULL_CHECK(self);
	jtype frame[12];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/ui/Slider:<init>", 12 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_scene_ui_Slider(ctx);
	frame[0].o = self;
	frame[1].f = param0;
	frame[2].f = param1;
	frame[3].f = param2;
	frame[4].i = param3;
	frame[5].o = param4;
	{
	LINE_NUMBER(52);
	init_arc_scene_ui_ProgressBar_float_float_float_boolean_arc_scene_ui_ProgressBar$ProgressBarStyle(ctx, (frame[0].o), (frame[1].f), (frame[2].f), (frame[3].f), (frame[4].i), (frame[5].o));
	LINE_NUMBER(31);
	((arc_scene_ui_Slider *) NULL_CHECK((frame[0].o)))->F_draggingPointer = (jint(-1));
	LINE_NUMBER(33);
	sp[0].o = frame[0].o;
	clinit_arc_math_Interp(ctx);
	sp[1].o = (jobject)SF_arc_math_Interp_linear;
	((arc_scene_ui_Slider *) NULL_CHECK(sp[0].o))->F_visualInterpolationInverse = (jref) sp[1].o;
	LINE_NUMBER(54);
	sp[0].o = frame[0].o;
	clinit_arc_scene_event_HandCursorListener(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_scene_event_HandCursorListener);
	init_arc_scene_event_HandCursorListener(ctx, sp[1].o);
	jint temp0 = (jint)((func_arc_scene_ui_Slider_addListener_arc_scene_event_EventListener_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_Slider_addListener_arc_scene_event_EventListener_R_boolean])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(55);
	sp[0].o = frame[0].o;
	clinit_arc_scene_ui_Slider$1(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_scene_ui_Slider$1);
	init_arc_scene_ui_Slider$1_arc_scene_ui_Slider(ctx, sp[1].o, (frame[0].o));
	jint temp1 = (jint)((func_arc_scene_ui_Slider_addListener_arc_scene_event_EventListener_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_Slider_addListener_arc_scene_event_EventListener_R_boolean])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(92);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_arc_scene_ui_Slider_getStyle_R_arc_scene_ui_Slider$SliderStyle(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/ui/Slider:getStyle", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(100);
	sp[0].o = (jobject)M_arc_scene_ui_ProgressBar_getStyle_R_arc_scene_ui_ProgressBar$ProgressBarStyle(ctx, (frame[0].o));
	popStackFrame(ctx);
	return (checkCast(ctx, &class_arc_scene_ui_Slider$SliderStyle, sp[0].o));
	}

	popStackFrame(ctx);
}

void M_arc_scene_ui_Slider_setStyle_arc_scene_ui_Slider$SliderStyle(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/ui/Slider:setStyle", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(104);
	if ((frame[1].o) != nullptr) goto label_1;
	}
	{
	clinit_java_lang_NullPointerException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_NullPointerException);
	init_java_lang_NullPointerException_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"style cannot be null"_j))));
	throwException(ctx, sp[0].o);	}
label_1:;
	{
	LINE_NUMBER(105);
	if ((isInstance(ctx, (frame[1].o), &class_arc_scene_ui_Slider$SliderStyle)) != 0) goto label_2;
	}
	{
	clinit_java_lang_IllegalArgumentException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IllegalArgumentException);
	init_java_lang_IllegalArgumentException_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"style must be a SliderStyle."_j))));
	throwException(ctx, sp[0].o);	}
label_2:;
	{
	LINE_NUMBER(106);
	M_arc_scene_ui_ProgressBar_setStyle_arc_scene_ui_ProgressBar$ProgressBarStyle(ctx, (frame[0].o), (frame[1].o));
	LINE_NUMBER(107);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_arc_scene_ui_Slider_getKnobDrawable_R_arc_scene_style_Drawable(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/ui/Slider:getKnobDrawable", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(111);
	sp[0].o = (jobject)((func_arc_scene_ui_Slider_getStyle_R_arc_scene_ui_Slider$SliderStyle) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_scene_ui_Slider_getStyle_R_arc_scene_ui_Slider$SliderStyle])(ctx, (frame[0].o));
	frame[1].o = sp[0].o;
	LINE_NUMBER(112);
	if (((jint)((arc_scene_ui_ProgressBar *) NULL_CHECK((frame[0].o)))->F_disabled) == 0) goto label_2;
	}
	{
	sp[0].o = (jobject)((arc_scene_ui_ProgressBar$ProgressBarStyle *) NULL_CHECK((frame[1].o)))->F_disabledKnob;
	if (sp[0].o == nullptr) goto label_2;
	}
	{
	sp[0].o = (jobject)((arc_scene_ui_ProgressBar$ProgressBarStyle *) NULL_CHECK((frame[1].o)))->F_disabledKnob;
	sp += 1;
	goto label_3;
	}
label_2:;
	{
	LINE_NUMBER(113);
	jint temp0 = (jint)((func_arc_scene_ui_Slider_isDragging_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_scene_ui_Slider_isDragging_R_boolean])(ctx, (frame[0].o));
	if (temp0 == 0) goto label_4;
	}
	{
	sp[0].o = (jobject)((arc_scene_ui_Slider$SliderStyle *) NULL_CHECK((frame[1].o)))->F_knobDown;
	if (sp[0].o == nullptr) goto label_4;
	}
	{
	sp[0].o = (jobject)((arc_scene_ui_Slider$SliderStyle *) NULL_CHECK((frame[1].o)))->F_knobDown;
	sp += 1;
	goto label_3;
	}
label_4:;
	{
	LINE_NUMBER(114);
	if (((jint)((arc_scene_ui_Slider *) NULL_CHECK((frame[0].o)))->F_mouseOver) == 0) goto label_5;
	}
	{
	sp[0].o = (jobject)((arc_scene_ui_Slider$SliderStyle *) NULL_CHECK((frame[1].o)))->F_knobOver;
	if (sp[0].o == nullptr) goto label_5;
	}
	{
	sp[0].o = (jobject)((arc_scene_ui_Slider$SliderStyle *) NULL_CHECK((frame[1].o)))->F_knobOver;
	sp += 1;
	goto label_3;
	}
label_5:;
	INST_ALOAD(1);
	sp[-1].o = (jobject) ((arc_scene_ui_ProgressBar$ProgressBarStyle *) NULL_CHECK(sp[-1].o))->F_knob;
label_3:;
	LINE_NUMBER(112);
	popStackFrame(ctx);
	INST_ARETURN();

	popStackFrame(ctx);
}

jbool M_arc_scene_ui_Slider_calculatePositionAndValue_float_float_R_boolean(jcontext ctx, jobject self, jfloat param0, jfloat param1) {
	NULL_CHECK(self);
	jtype frame[18];
	auto stack = &frame[12];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/ui/Slider:calculatePositionAndValue", 18 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	frame[2].f = param1;
	{
	LINE_NUMBER(118);
	sp[0].o = (jobject)((func_arc_scene_ui_Slider_getStyle_R_arc_scene_ui_Slider$SliderStyle) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_scene_ui_Slider_getStyle_R_arc_scene_ui_Slider$SliderStyle])(ctx, (frame[0].o));
	frame[3].o = sp[0].o;
	LINE_NUMBER(119);
	sp[0].o = (jobject)((func_arc_scene_ui_Slider_getKnobDrawable_R_arc_scene_style_Drawable) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_scene_ui_Slider_getKnobDrawable_R_arc_scene_style_Drawable])(ctx, (frame[0].o));
	frame[4].o = sp[0].o;
	LINE_NUMBER(120);
	if (((jint)((arc_scene_ui_ProgressBar *) NULL_CHECK((frame[0].o)))->F_disabled) == 0) goto label_3;
	}
	{
	sp[0].o = (jobject)((arc_scene_ui_ProgressBar$ProgressBarStyle *) NULL_CHECK((frame[3].o)))->F_disabledBackground;
	if (sp[0].o == nullptr) goto label_3;
	}
	{
	sp[0].o = (jobject)((arc_scene_ui_ProgressBar$ProgressBarStyle *) NULL_CHECK((frame[3].o)))->F_disabledBackground;
	sp += 1;
	goto label_4;
	}
label_3:;
	INST_ALOAD(3);
	sp[-1].o = (jobject) ((arc_scene_ui_ProgressBar$ProgressBarStyle *) NULL_CHECK(sp[-1].o))->F_background;
label_4:;
	{
	sp -= 1;
	frame[5].o = sp[0].o;
	LINE_NUMBER(123);
	frame[7].f = ((jfloat)((arc_scene_ui_ProgressBar *) NULL_CHECK((frame[0].o)))->F_position);
	LINE_NUMBER(125);
	jfloat temp0 = (jfloat)((func_arc_scene_ui_Slider_getMinValue_R_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_scene_ui_Slider_getMinValue_R_float])(ctx, (frame[0].o));
	frame[8].f = temp0;
	LINE_NUMBER(126);
	jfloat temp1 = (jfloat)((func_arc_scene_ui_Slider_getMaxValue_R_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_scene_ui_Slider_getMaxValue_R_float])(ctx, (frame[0].o));
	frame[9].f = temp1;
	LINE_NUMBER(128);
	if (((jint)((arc_scene_ui_ProgressBar *) NULL_CHECK((frame[0].o)))->F_vertical) == 0) goto label_9;
	}
	{
	LINE_NUMBER(129);
	jfloat temp0 = (jfloat)((func_arc_scene_ui_Slider_getHeight_R_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_scene_ui_Slider_getHeight_R_float])(ctx, (frame[0].o));
	jfloat temp1 = (jfloat)((func_arc_scene_style_Drawable_getTopHeight_R_float) resolveInterfaceMethod(ctx, &class_arc_scene_style_Drawable, INDEX_arc_scene_style_Drawable_getTopHeight_R_float, (frame[5].o)))(ctx, (frame[5].o));
	jfloat temp2 = temp0 - temp1;
	jfloat temp3 = (jfloat)((func_arc_scene_style_Drawable_getBottomHeight_R_float) resolveInterfaceMethod(ctx, &class_arc_scene_style_Drawable, INDEX_arc_scene_style_Drawable_getBottomHeight_R_float, (frame[5].o)))(ctx, (frame[5].o));
	frame[10].f = (temp2 - temp3);
	LINE_NUMBER(130);
	if ((frame[4].o) != nullptr) goto label_12;
	}
	INST_FCONST(0);
	goto label_13;
label_12:;
	INST_ALOAD(4);
	POP_N(1); // Pop method args
	sp->f = (jfloat)((func_arc_scene_style_Drawable_getMinHeight_R_float) resolveInterfaceMethod(ctx, &class_arc_scene_style_Drawable, INDEX_arc_scene_style_Drawable_getMinHeight_R_float, sp[0].o))(ctx, sp[0].o);
	sp++;
label_13:;
	{
	sp -= 1;
	frame[11].f = sp[0].f;
	LINE_NUMBER(131);
	sp[0].o = frame[0].o;
	jfloat temp0 = frame[2].f;
	jfloat temp1 = (jfloat)((func_arc_scene_style_Drawable_getBottomHeight_R_float) resolveInterfaceMethod(ctx, &class_arc_scene_style_Drawable, INDEX_arc_scene_style_Drawable_getBottomHeight_R_float, (frame[5].o)))(ctx, (frame[5].o));
	((arc_scene_ui_ProgressBar *) NULL_CHECK(sp[0].o))->F_position = ((temp0 - temp1) - ((frame[11].f) * (jfloat(0.5f))));
	LINE_NUMBER(132);
	jfloat temp2 = frame[8].f;
	jfloat temp3 = (frame[9].f) - (frame[8].f);
	sp[0].o = (jobject)((arc_scene_ui_Slider *) NULL_CHECK((frame[0].o)))->F_visualInterpolationInverse;
	jfloat temp4 = (jfloat)((func_arc_math_Interp_apply_float_R_float) resolveInterfaceMethod(ctx, &class_arc_math_Interp, INDEX_arc_math_Interp_apply_float_R_float, sp[0].o))(ctx, sp[0].o, (((jfloat)((arc_scene_ui_ProgressBar *) NULL_CHECK((frame[0].o)))->F_position) / ((frame[10].f) - (frame[11].f))));
	frame[6].f = (temp2 + (temp3 * temp4));
	LINE_NUMBER(133);
	sp[0].o = frame[0].o;
	jfloat temp5 = (jfloat)SM_java_lang_Math_max_float_float_R_float(ctx, (jfloat(0)), ((jfloat)((arc_scene_ui_ProgressBar *) NULL_CHECK((frame[0].o)))->F_position));
	((arc_scene_ui_ProgressBar *) NULL_CHECK(sp[0].o))->F_position = temp5;
	LINE_NUMBER(134);
	sp[0].o = frame[0].o;
	jfloat temp6 = (jfloat)SM_java_lang_Math_min_float_float_R_float(ctx, ((frame[10].f) - (frame[11].f)), ((jfloat)((arc_scene_ui_ProgressBar *) NULL_CHECK((frame[0].o)))->F_position));
	((arc_scene_ui_ProgressBar *) NULL_CHECK(sp[0].o))->F_position = temp6;
	LINE_NUMBER(135);
	goto label_19;
	}
label_9:;
	{
	LINE_NUMBER(136);
	jfloat temp0 = (jfloat)((func_arc_scene_ui_Slider_getWidth_R_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_scene_ui_Slider_getWidth_R_float])(ctx, (frame[0].o));
	jfloat temp1 = (jfloat)((func_arc_scene_style_Drawable_getLeftWidth_R_float) resolveInterfaceMethod(ctx, &class_arc_scene_style_Drawable, INDEX_arc_scene_style_Drawable_getLeftWidth_R_float, (frame[5].o)))(ctx, (frame[5].o));
	jfloat temp2 = temp0 - temp1;
	jfloat temp3 = (jfloat)((func_arc_scene_style_Drawable_getRightWidth_R_float) resolveInterfaceMethod(ctx, &class_arc_scene_style_Drawable, INDEX_arc_scene_style_Drawable_getRightWidth_R_float, (frame[5].o)))(ctx, (frame[5].o));
	frame[10].f = (temp2 - temp3);
	LINE_NUMBER(137);
	if ((frame[4].o) != nullptr) goto label_21;
	}
	INST_FCONST(0);
	goto label_22;
label_21:;
	INST_ALOAD(4);
	POP_N(1); // Pop method args
	sp->f = (jfloat)((func_arc_scene_style_Drawable_getMinWidth_R_float) resolveInterfaceMethod(ctx, &class_arc_scene_style_Drawable, INDEX_arc_scene_style_Drawable_getMinWidth_R_float, sp[0].o))(ctx, sp[0].o);
	sp++;
label_22:;
	{
	sp -= 1;
	frame[11].f = sp[0].f;
	LINE_NUMBER(138);
	sp[0].o = frame[0].o;
	jfloat temp0 = frame[1].f;
	jfloat temp1 = (jfloat)((func_arc_scene_style_Drawable_getLeftWidth_R_float) resolveInterfaceMethod(ctx, &class_arc_scene_style_Drawable, INDEX_arc_scene_style_Drawable_getLeftWidth_R_float, (frame[5].o)))(ctx, (frame[5].o));
	((arc_scene_ui_ProgressBar *) NULL_CHECK(sp[0].o))->F_position = ((temp0 - temp1) - ((frame[11].f) * (jfloat(0.5f))));
	LINE_NUMBER(139);
	jfloat temp2 = frame[8].f;
	jfloat temp3 = (frame[9].f) - (frame[8].f);
	sp[0].o = (jobject)((arc_scene_ui_Slider *) NULL_CHECK((frame[0].o)))->F_visualInterpolationInverse;
	jfloat temp4 = (jfloat)((func_arc_math_Interp_apply_float_R_float) resolveInterfaceMethod(ctx, &class_arc_math_Interp, INDEX_arc_math_Interp_apply_float_R_float, sp[0].o))(ctx, sp[0].o, (((jfloat)((arc_scene_ui_ProgressBar *) NULL_CHECK((frame[0].o)))->F_position) / ((frame[10].f) - (frame[11].f))));
	frame[6].f = (temp2 + (temp3 * temp4));
	LINE_NUMBER(140);
	sp[0].o = frame[0].o;
	jfloat temp5 = (jfloat)SM_java_lang_Math_max_float_float_R_float(ctx, (jfloat(0)), ((jfloat)((arc_scene_ui_ProgressBar *) NULL_CHECK((frame[0].o)))->F_position));
	((arc_scene_ui_ProgressBar *) NULL_CHECK(sp[0].o))->F_position = temp5;
	LINE_NUMBER(141);
	sp[0].o = frame[0].o;
	jfloat temp6 = (jfloat)SM_java_lang_Math_min_float_float_R_float(ctx, ((frame[10].f) - (frame[11].f)), ((jfloat)((arc_scene_ui_ProgressBar *) NULL_CHECK((frame[0].o)))->F_position));
	((arc_scene_ui_ProgressBar *) NULL_CHECK(sp[0].o))->F_position = temp6;
	}
label_19:;
	{
	LINE_NUMBER(144);
	frame[10].f = (frame[6].f);
	LINE_NUMBER(145);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_input;
	clinit_arc_input_KeyCode(ctx);
	sp[1].o = (jobject)SF_arc_input_KeyCode_shiftLeft;
	jint temp0 = (jint)((func_arc_Input_keyDown_arc_input_KeyCode_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_Input_keyDown_arc_input_KeyCode_R_boolean])(ctx, sp[0].o, sp[1].o);
	if (temp0 != 0) goto label_28;
	}
	{
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_input;
	clinit_arc_input_KeyCode(ctx);
	sp[1].o = (jobject)SF_arc_input_KeyCode_shiftRight;
	jint temp0 = (jint)((func_arc_Input_keyDown_arc_input_KeyCode_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_Input_keyDown_arc_input_KeyCode_R_boolean])(ctx, sp[0].o, sp[1].o);
	if (temp0 != 0) goto label_28;
	}
	{
	LINE_NUMBER(146);
	jfloat temp0 = (jfloat)((func_arc_scene_ui_Slider_snap_float_R_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_scene_ui_Slider_snap_float_R_float])(ctx, (frame[0].o), (frame[6].f));
	frame[6].f = temp0;
	}
label_28:;
	{
	LINE_NUMBER(147);
	jint temp0 = (jint)((func_arc_scene_ui_Slider_setValue_float_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_scene_ui_Slider_setValue_float_R_boolean])(ctx, (frame[0].o), (frame[6].f));
	frame[11].i = temp0;
	LINE_NUMBER(148);
	if ((floatCompare((frame[6].f), (frame[10].f), -1)) != 0) goto label_31;
	}
	{
	((arc_scene_ui_ProgressBar *) NULL_CHECK((frame[0].o)))->F_position = (frame[7].f);
	}
label_31:;
	{
	LINE_NUMBER(149);
	popStackFrame(ctx);
	return (frame[11].i);
	}

	popStackFrame(ctx);
}

void M_arc_scene_ui_Slider_moved_arc_func_Floatc(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/ui/Slider:moved", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(153);
	sp[0].o = frame[0].o;
	{ /* InvokeDynamic */
		clinit_arc_scene_ui_Slider_invoke_java_lang_Runnable_0(ctx);
		auto proxy = (arc_scene_ui_Slider_invoke_java_lang_Runnable_0 *) gcAlloc(ctx, &class_arc_scene_ui_Slider_invoke_java_lang_Runnable_0);
		proxy->F_field1 = (jref) (frame[1].o);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[1].o = (jobject) proxy;
	}
	((func_arc_scene_ui_Slider_changed_java_lang_Runnable) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_Slider_changed_java_lang_Runnable])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(154);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jfloat M_arc_scene_ui_Slider_snap_float_R_float(jcontext ctx, jobject self, jfloat param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/ui/Slider:snap", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	{
	LINE_NUMBER(158);
	sp[0].o = (jobject)((arc_scene_ui_Slider *) NULL_CHECK((frame[0].o)))->F_snapValues;
	if (sp[0].o != nullptr) goto label_1;
	}
	INST_FLOAD(1);
	popStackFrame(ctx);
	INST_FRETURN();
label_1:;
	{
	LINE_NUMBER(159);
	frame[2].i = (jint(0));
	}
label_2:;
	{
	jint temp0 = frame[2].i;
	sp[0].o = (jobject)((arc_scene_ui_Slider *) NULL_CHECK((frame[0].o)))->F_snapValues;
	if (temp0 >= (((jarray) nullCheck(ctx, sp[0].o))->length)) goto label_3;
	}
	{
	LINE_NUMBER(160);
	jfloat temp0 = frame[1].f;
	sp[0].o = (jobject)((arc_scene_ui_Slider *) NULL_CHECK((frame[0].o)))->F_snapValues;
	jfloat temp1 = (jfloat)SM_java_lang_Math_abs_float_R_float(ctx, (temp0 - ((jfloat)ARRAY_ACCESS(jfloat, sp[0].o, (frame[2].i)))));
	if ((floatCompare(temp1, ((jfloat)((arc_scene_ui_Slider *) NULL_CHECK((frame[0].o)))->F_threshold), 1)) > 0) goto label_5;
	}
	{
	sp[0].o = (jobject)((arc_scene_ui_Slider *) NULL_CHECK((frame[0].o)))->F_snapValues;
	popStackFrame(ctx);
	return ((jfloat)ARRAY_ACCESS(jfloat, sp[0].o, (frame[2].i)));
	}
label_5:;
	{
	LINE_NUMBER(159);
	INST_IINC(2, 1);
	goto label_2;
	}
label_3:;
	{
	LINE_NUMBER(162);
	popStackFrame(ctx);
	return (frame[1].f);
	}

	popStackFrame(ctx);
}

void M_arc_scene_ui_Slider_setSnapToValues_Array1_float_float(jcontext ctx, jobject self, jobject param0, jfloat param1) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/ui/Slider:setSnapToValues", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].f = param1;
	{
	LINE_NUMBER(170);
	((arc_scene_ui_Slider *) NULL_CHECK((frame[0].o)))->F_snapValues = (jref) (frame[1].o);
	LINE_NUMBER(171);
	((arc_scene_ui_Slider *) NULL_CHECK((frame[0].o)))->F_threshold = (frame[2].f);
	LINE_NUMBER(172);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jbool M_arc_scene_ui_Slider_isDragging_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/ui/Slider:isDragging", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(176);
	if (((jint)((arc_scene_ui_Slider *) NULL_CHECK((frame[0].o)))->F_draggingPointer) == (jint(-1))) goto label_1;
	}
	INST_ICONST(1);
	goto label_2;
label_1:;
	INST_ICONST(0);
label_2:;
	popStackFrame(ctx);
	INST_IRETURN();

	popStackFrame(ctx);
}

void M_arc_scene_ui_Slider_setVisualInterpolationInverse_arc_math_Interp(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/ui/Slider:setVisualInterpolationInverse", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(184);
	((arc_scene_ui_Slider *) NULL_CHECK((frame[0].o)))->F_visualInterpolationInverse = (jref) (frame[1].o);
	LINE_NUMBER(185);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_arc_scene_ui_Slider_getStyle_R_arc_scene_ui_ProgressBar$ProgressBarStyle(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/ui/Slider:getStyle", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(30);
	sp[0].o = (jobject)((func_arc_scene_ui_Slider_getStyle_R_arc_scene_ui_Slider$SliderStyle) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_scene_ui_Slider_getStyle_R_arc_scene_ui_Slider$SliderStyle])(ctx, (frame[0].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void M_arc_scene_ui_Slider_lambda$moved$0_arc_func_Floatc(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/ui/Slider:lambda$moved$0", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(153);
	sp[0].o = frame[1].o;
	jfloat temp0 = (jfloat)((func_arc_scene_ui_Slider_getValue_R_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_scene_ui_Slider_getValue_R_float])(ctx, (frame[0].o));
	((func_arc_func_Floatc_get_float) resolveInterfaceMethod(ctx, &class_arc_func_Floatc, INDEX_arc_func_Floatc_get_float, sp[0].o))(ctx, sp[0].o, temp0);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void *vtable_arc_scene_ui_Slider[] {
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
};

static jclass innerClasses[] {
	&class_arc_scene_ui_Slider$SliderStyle,
};

static FieldMetadata fields[] {
	{ "draggingPointer", &class_int, offsetof(arc_scene_ui_Slider, F_draggingPointer), "I", 0 },
	{ "mouseOver", &class_boolean, offsetof(arc_scene_ui_Slider, F_mouseOver), "Z", 0 },
	{ "visualInterpolationInverse", &class_arc_math_Interp, offsetof(arc_scene_ui_Slider, F_visualInterpolationInverse), "Larc/math/Interp;", 2 },
	{ "snapValues", getArrayClass(&class_float, 1), offsetof(arc_scene_ui_Slider, F_snapValues), "[F", 2 },
	{ "threshold", &class_float, offsetof(arc_scene_ui_Slider, F_threshold), "F", 2 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_arc_scene_ui_Slider_float_float_float_boolean, 0, "(FFFZ)V", 1 },
	{ "<init>", (intptr_t) init_arc_scene_ui_Slider_float_float_float_boolean_arc_scene_ui_Slider$SliderStyle, 0, "(FFFZLarc/scene/ui/Slider$SliderStyle;)V", 1 },
	{ "getStyle", (intptr_t) M_arc_scene_ui_Slider_getStyle_R_arc_scene_ui_Slider$SliderStyle, VTABLE_arc_scene_ui_Slider_getStyle_R_arc_scene_ui_Slider$SliderStyle, "()Larc/scene/ui/Slider$SliderStyle;", 1 },
	{ "setStyle", (intptr_t) M_arc_scene_ui_Slider_setStyle_arc_scene_ui_Slider$SliderStyle, VTABLE_arc_scene_ui_Slider_setStyle_arc_scene_ui_Slider$SliderStyle, "(Larc/scene/ui/Slider$SliderStyle;)V", 1 },
	{ "getKnobDrawable", (intptr_t) M_arc_scene_ui_Slider_getKnobDrawable_R_arc_scene_style_Drawable, VTABLE_arc_scene_ui_Slider_getKnobDrawable_R_arc_scene_style_Drawable, "()Larc/scene/style/Drawable;", 4 },
	{ "calculatePositionAndValue", (intptr_t) M_arc_scene_ui_Slider_calculatePositionAndValue_float_float_R_boolean, VTABLE_arc_scene_ui_Slider_calculatePositionAndValue_float_float_R_boolean, "(FF)Z", 0 },
	{ "moved", (intptr_t) M_arc_scene_ui_Slider_moved_arc_func_Floatc, VTABLE_arc_scene_ui_Slider_moved_arc_func_Floatc, "(Larc/func/Floatc;)V", 1 },
	{ "snap", (intptr_t) M_arc_scene_ui_Slider_snap_float_R_float, VTABLE_arc_scene_ui_Slider_snap_float_R_float, "(F)F", 4 },
	{ "setSnapToValues", (intptr_t) M_arc_scene_ui_Slider_setSnapToValues_Array1_float_float, VTABLE_arc_scene_ui_Slider_setSnapToValues_Array1_float_float, "([FF)V", 1 },
	{ "isDragging", (intptr_t) M_arc_scene_ui_Slider_isDragging_R_boolean, VTABLE_arc_scene_ui_Slider_isDragging_R_boolean, "()Z", 1 },
	{ "setVisualInterpolationInverse", (intptr_t) M_arc_scene_ui_Slider_setVisualInterpolationInverse_arc_math_Interp, VTABLE_arc_scene_ui_Slider_setVisualInterpolationInverse_arc_math_Interp, "(Larc/math/Interp;)V", 1 },
	{ "getStyle", (intptr_t) M_arc_scene_ui_Slider_getStyle_R_arc_scene_ui_ProgressBar$ProgressBarStyle, VTABLE_arc_scene_ui_Slider_getStyle_R_arc_scene_ui_ProgressBar$ProgressBarStyle, "()Larc/scene/ui/ProgressBar$ProgressBarStyle;", 4161 },
	{ "lambda$moved$0", (intptr_t) M_arc_scene_ui_Slider_lambda$moved$0_arc_func_Floatc, VTABLE_arc_scene_ui_Slider_lambda$moved$0_arc_func_Floatc, "(Larc/func/Floatc;)V", 4098 },
};

Class class_arc_scene_ui_Slider{
		.nativeName = (intptr_t) "arc/scene/ui/Slider",
		.parentClass = (intptr_t) &class_arc_scene_ui_ProgressBar,
		.size = sizeof(arc_scene_ui_Slider),
		.classVtable = (intptr_t) vtable_arc_scene_ui_Slider,
		.staticInitializer = (intptr_t) clinit_arc_scene_ui_Slider,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_arc_scene_ui_Slider,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 1,
		.nativeInnerClasses = (intptr_t) innerClasses,
		.access = 33,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 5,
		.nativeFields = (intptr_t) fields,
		.methodCount = 13,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 153,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_arc_scene_ui_Slider = registerClass(&class_arc_scene_ui_Slider);

}
