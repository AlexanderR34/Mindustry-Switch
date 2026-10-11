#include "arc/math/Interp.h"
#include "arc/math/Interp_Exp.h"
#include "arc/math/Interp_Pow.h"
#include "arc/math/Interp_invoke_arc_math_Interp_4.h"
#include "arc/math/Interp_invoke_arc_math_Interp_3.h"
#include "arc/math/Interp_invoke_arc_math_Interp_6.h"
#include "arc/math/Interp_invoke_arc_math_Interp_5.h"
#include "arc/math/Interp_invoke_arc_math_Interp_0.h"
#include "arc/math/Interp_SwingIn.h"
#include "arc/math/Interp_invoke_arc_math_Interp_2.h"
#include "arc/math/Interp_invoke_arc_math_Interp_1.h"
#include "arc/math/Interp_Swing.h"
#include "arc/math/Interp_invoke_arc_math_Interp_8.h"
#include "arc/math/Interp_invoke_arc_math_Interp_7.h"
#include "arc/math/Interp_ElasticIn.h"
#include "arc/math/Interp_invoke_arc_math_Interp_10.h"
#include "arc/math/Interp_invoke_arc_math_Interp_9.h"
#include "arc/math/Interp_invoke_arc_math_Interp_11.h"
#include "arc/math/Interp_invoke_arc_math_Interp_12.h"
#include "arc/math/Interp_invoke_arc_math_Interp_13.h"
#include "arc/math/Interp_invoke_arc_math_Interp_14.h"
#include "arc/math/Interp_ExpOut.h"
#include "arc/math/Interp_invoke_arc_math_Interp_15.h"
#include "arc/math/Interp_invoke_arc_math_Interp_16.h"
#include "arc/math/Interp_invoke_arc_math_Interp_17.h"
#include "arc/math/Interp_Bounce.h"
#include "java/lang/Math.h"
#include "arc/math/Mathf.h"
#include "arc/math/Interp_SwingOut.h"
#include "arc/math/Interp.h"
#include "arc/math/Interp_PowIn.h"
#include "arc/math/Interp_PowOut.h"
#include "arc/math/Interp_Elastic.h"
#include "java/lang/Object.h"
#include "arc/math/Interp_BounceIn.h"
#include "arc/math/Interp_ExpIn.h"
#include "arc/math/Interp_BounceOut.h"
#include "arc/math/Interp_ElasticOut.h"

extern "C" {

jobject SF_arc_math_Interp_linear;
jobject SF_arc_math_Interp_reverse;
jobject SF_arc_math_Interp_smooth;
jobject SF_arc_math_Interp_smooth2;
jobject SF_arc_math_Interp_one;
jobject SF_arc_math_Interp_zero;
jobject SF_arc_math_Interp_slope;
jobject SF_arc_math_Interp_smoother;
jobject SF_arc_math_Interp_fade;
jobject SF_arc_math_Interp_pow2;
jobject SF_arc_math_Interp_pow2In;
jobject SF_arc_math_Interp_slowFast;
jobject SF_arc_math_Interp_pow2Out;
jobject SF_arc_math_Interp_fastSlow;
jobject SF_arc_math_Interp_pow2InInverse;
jobject SF_arc_math_Interp_pow2OutInverse;
jobject SF_arc_math_Interp_pow3;
jobject SF_arc_math_Interp_pow3In;
jobject SF_arc_math_Interp_pow3Out;
jobject SF_arc_math_Interp_pow3InInverse;
jobject SF_arc_math_Interp_pow3OutInverse;
jobject SF_arc_math_Interp_pow4;
jobject SF_arc_math_Interp_pow4In;
jobject SF_arc_math_Interp_pow4Out;
jobject SF_arc_math_Interp_pow5;
jobject SF_arc_math_Interp_pow5In;
jobject SF_arc_math_Interp_pow10In;
jobject SF_arc_math_Interp_pow10Out;
jobject SF_arc_math_Interp_pow5Out;
jobject SF_arc_math_Interp_sine;
jobject SF_arc_math_Interp_sineIn;
jobject SF_arc_math_Interp_sineOut;
jobject SF_arc_math_Interp_exp10;
jobject SF_arc_math_Interp_exp10In;
jobject SF_arc_math_Interp_exp10Out;
jobject SF_arc_math_Interp_exp5;
jobject SF_arc_math_Interp_exp5In;
jobject SF_arc_math_Interp_exp5Out;
jobject SF_arc_math_Interp_circle;
jobject SF_arc_math_Interp_circleIn;
jobject SF_arc_math_Interp_circleOut;
jobject SF_arc_math_Interp_elastic;
jobject SF_arc_math_Interp_elasticIn;
jobject SF_arc_math_Interp_elasticOut;
jobject SF_arc_math_Interp_swing;
jobject SF_arc_math_Interp_swingIn;
jobject SF_arc_math_Interp_swingOut;
jobject SF_arc_math_Interp_bounce;
jobject SF_arc_math_Interp_bounceIn;
jobject SF_arc_math_Interp_bounceOut;

void mark_arc_math_Interp(jobject object, jint mark, jint depth) {
	if (!object) {
		if (SF_arc_math_Interp_linear)
			((gc_mark_ptr) ((jclass) ((jobject) SF_arc_math_Interp_linear)->clazz)->markFunction)((jobject) SF_arc_math_Interp_linear, mark, depth + 1);
		if (SF_arc_math_Interp_reverse)
			((gc_mark_ptr) ((jclass) ((jobject) SF_arc_math_Interp_reverse)->clazz)->markFunction)((jobject) SF_arc_math_Interp_reverse, mark, depth + 1);
		if (SF_arc_math_Interp_smooth)
			((gc_mark_ptr) ((jclass) ((jobject) SF_arc_math_Interp_smooth)->clazz)->markFunction)((jobject) SF_arc_math_Interp_smooth, mark, depth + 1);
		if (SF_arc_math_Interp_smooth2)
			((gc_mark_ptr) ((jclass) ((jobject) SF_arc_math_Interp_smooth2)->clazz)->markFunction)((jobject) SF_arc_math_Interp_smooth2, mark, depth + 1);
		if (SF_arc_math_Interp_one)
			((gc_mark_ptr) ((jclass) ((jobject) SF_arc_math_Interp_one)->clazz)->markFunction)((jobject) SF_arc_math_Interp_one, mark, depth + 1);
		if (SF_arc_math_Interp_zero)
			((gc_mark_ptr) ((jclass) ((jobject) SF_arc_math_Interp_zero)->clazz)->markFunction)((jobject) SF_arc_math_Interp_zero, mark, depth + 1);
		if (SF_arc_math_Interp_slope)
			((gc_mark_ptr) ((jclass) ((jobject) SF_arc_math_Interp_slope)->clazz)->markFunction)((jobject) SF_arc_math_Interp_slope, mark, depth + 1);
		if (SF_arc_math_Interp_smoother)
			((gc_mark_ptr) ((jclass) ((jobject) SF_arc_math_Interp_smoother)->clazz)->markFunction)((jobject) SF_arc_math_Interp_smoother, mark, depth + 1);
		if (SF_arc_math_Interp_fade)
			((gc_mark_ptr) ((jclass) ((jobject) SF_arc_math_Interp_fade)->clazz)->markFunction)((jobject) SF_arc_math_Interp_fade, mark, depth + 1);
		if (SF_arc_math_Interp_pow2)
			((gc_mark_ptr) ((jclass) ((jobject) SF_arc_math_Interp_pow2)->clazz)->markFunction)((jobject) SF_arc_math_Interp_pow2, mark, depth + 1);
		if (SF_arc_math_Interp_pow2In)
			((gc_mark_ptr) ((jclass) ((jobject) SF_arc_math_Interp_pow2In)->clazz)->markFunction)((jobject) SF_arc_math_Interp_pow2In, mark, depth + 1);
		if (SF_arc_math_Interp_slowFast)
			((gc_mark_ptr) ((jclass) ((jobject) SF_arc_math_Interp_slowFast)->clazz)->markFunction)((jobject) SF_arc_math_Interp_slowFast, mark, depth + 1);
		if (SF_arc_math_Interp_pow2Out)
			((gc_mark_ptr) ((jclass) ((jobject) SF_arc_math_Interp_pow2Out)->clazz)->markFunction)((jobject) SF_arc_math_Interp_pow2Out, mark, depth + 1);
		if (SF_arc_math_Interp_fastSlow)
			((gc_mark_ptr) ((jclass) ((jobject) SF_arc_math_Interp_fastSlow)->clazz)->markFunction)((jobject) SF_arc_math_Interp_fastSlow, mark, depth + 1);
		if (SF_arc_math_Interp_pow2InInverse)
			((gc_mark_ptr) ((jclass) ((jobject) SF_arc_math_Interp_pow2InInverse)->clazz)->markFunction)((jobject) SF_arc_math_Interp_pow2InInverse, mark, depth + 1);
		if (SF_arc_math_Interp_pow2OutInverse)
			((gc_mark_ptr) ((jclass) ((jobject) SF_arc_math_Interp_pow2OutInverse)->clazz)->markFunction)((jobject) SF_arc_math_Interp_pow2OutInverse, mark, depth + 1);
		if (SF_arc_math_Interp_pow3)
			((gc_mark_ptr) ((jclass) ((jobject) SF_arc_math_Interp_pow3)->clazz)->markFunction)((jobject) SF_arc_math_Interp_pow3, mark, depth + 1);
		if (SF_arc_math_Interp_pow3In)
			((gc_mark_ptr) ((jclass) ((jobject) SF_arc_math_Interp_pow3In)->clazz)->markFunction)((jobject) SF_arc_math_Interp_pow3In, mark, depth + 1);
		if (SF_arc_math_Interp_pow3Out)
			((gc_mark_ptr) ((jclass) ((jobject) SF_arc_math_Interp_pow3Out)->clazz)->markFunction)((jobject) SF_arc_math_Interp_pow3Out, mark, depth + 1);
		if (SF_arc_math_Interp_pow3InInverse)
			((gc_mark_ptr) ((jclass) ((jobject) SF_arc_math_Interp_pow3InInverse)->clazz)->markFunction)((jobject) SF_arc_math_Interp_pow3InInverse, mark, depth + 1);
		if (SF_arc_math_Interp_pow3OutInverse)
			((gc_mark_ptr) ((jclass) ((jobject) SF_arc_math_Interp_pow3OutInverse)->clazz)->markFunction)((jobject) SF_arc_math_Interp_pow3OutInverse, mark, depth + 1);
		if (SF_arc_math_Interp_pow4)
			((gc_mark_ptr) ((jclass) ((jobject) SF_arc_math_Interp_pow4)->clazz)->markFunction)((jobject) SF_arc_math_Interp_pow4, mark, depth + 1);
		if (SF_arc_math_Interp_pow4In)
			((gc_mark_ptr) ((jclass) ((jobject) SF_arc_math_Interp_pow4In)->clazz)->markFunction)((jobject) SF_arc_math_Interp_pow4In, mark, depth + 1);
		if (SF_arc_math_Interp_pow4Out)
			((gc_mark_ptr) ((jclass) ((jobject) SF_arc_math_Interp_pow4Out)->clazz)->markFunction)((jobject) SF_arc_math_Interp_pow4Out, mark, depth + 1);
		if (SF_arc_math_Interp_pow5)
			((gc_mark_ptr) ((jclass) ((jobject) SF_arc_math_Interp_pow5)->clazz)->markFunction)((jobject) SF_arc_math_Interp_pow5, mark, depth + 1);
		if (SF_arc_math_Interp_pow5In)
			((gc_mark_ptr) ((jclass) ((jobject) SF_arc_math_Interp_pow5In)->clazz)->markFunction)((jobject) SF_arc_math_Interp_pow5In, mark, depth + 1);
		if (SF_arc_math_Interp_pow10In)
			((gc_mark_ptr) ((jclass) ((jobject) SF_arc_math_Interp_pow10In)->clazz)->markFunction)((jobject) SF_arc_math_Interp_pow10In, mark, depth + 1);
		if (SF_arc_math_Interp_pow10Out)
			((gc_mark_ptr) ((jclass) ((jobject) SF_arc_math_Interp_pow10Out)->clazz)->markFunction)((jobject) SF_arc_math_Interp_pow10Out, mark, depth + 1);
		if (SF_arc_math_Interp_pow5Out)
			((gc_mark_ptr) ((jclass) ((jobject) SF_arc_math_Interp_pow5Out)->clazz)->markFunction)((jobject) SF_arc_math_Interp_pow5Out, mark, depth + 1);
		if (SF_arc_math_Interp_sine)
			((gc_mark_ptr) ((jclass) ((jobject) SF_arc_math_Interp_sine)->clazz)->markFunction)((jobject) SF_arc_math_Interp_sine, mark, depth + 1);
		if (SF_arc_math_Interp_sineIn)
			((gc_mark_ptr) ((jclass) ((jobject) SF_arc_math_Interp_sineIn)->clazz)->markFunction)((jobject) SF_arc_math_Interp_sineIn, mark, depth + 1);
		if (SF_arc_math_Interp_sineOut)
			((gc_mark_ptr) ((jclass) ((jobject) SF_arc_math_Interp_sineOut)->clazz)->markFunction)((jobject) SF_arc_math_Interp_sineOut, mark, depth + 1);
		if (SF_arc_math_Interp_exp10)
			((gc_mark_ptr) ((jclass) ((jobject) SF_arc_math_Interp_exp10)->clazz)->markFunction)((jobject) SF_arc_math_Interp_exp10, mark, depth + 1);
		if (SF_arc_math_Interp_exp10In)
			((gc_mark_ptr) ((jclass) ((jobject) SF_arc_math_Interp_exp10In)->clazz)->markFunction)((jobject) SF_arc_math_Interp_exp10In, mark, depth + 1);
		if (SF_arc_math_Interp_exp10Out)
			((gc_mark_ptr) ((jclass) ((jobject) SF_arc_math_Interp_exp10Out)->clazz)->markFunction)((jobject) SF_arc_math_Interp_exp10Out, mark, depth + 1);
		if (SF_arc_math_Interp_exp5)
			((gc_mark_ptr) ((jclass) ((jobject) SF_arc_math_Interp_exp5)->clazz)->markFunction)((jobject) SF_arc_math_Interp_exp5, mark, depth + 1);
		if (SF_arc_math_Interp_exp5In)
			((gc_mark_ptr) ((jclass) ((jobject) SF_arc_math_Interp_exp5In)->clazz)->markFunction)((jobject) SF_arc_math_Interp_exp5In, mark, depth + 1);
		if (SF_arc_math_Interp_exp5Out)
			((gc_mark_ptr) ((jclass) ((jobject) SF_arc_math_Interp_exp5Out)->clazz)->markFunction)((jobject) SF_arc_math_Interp_exp5Out, mark, depth + 1);
		if (SF_arc_math_Interp_circle)
			((gc_mark_ptr) ((jclass) ((jobject) SF_arc_math_Interp_circle)->clazz)->markFunction)((jobject) SF_arc_math_Interp_circle, mark, depth + 1);
		if (SF_arc_math_Interp_circleIn)
			((gc_mark_ptr) ((jclass) ((jobject) SF_arc_math_Interp_circleIn)->clazz)->markFunction)((jobject) SF_arc_math_Interp_circleIn, mark, depth + 1);
		if (SF_arc_math_Interp_circleOut)
			((gc_mark_ptr) ((jclass) ((jobject) SF_arc_math_Interp_circleOut)->clazz)->markFunction)((jobject) SF_arc_math_Interp_circleOut, mark, depth + 1);
		if (SF_arc_math_Interp_elastic)
			((gc_mark_ptr) ((jclass) ((jobject) SF_arc_math_Interp_elastic)->clazz)->markFunction)((jobject) SF_arc_math_Interp_elastic, mark, depth + 1);
		if (SF_arc_math_Interp_elasticIn)
			((gc_mark_ptr) ((jclass) ((jobject) SF_arc_math_Interp_elasticIn)->clazz)->markFunction)((jobject) SF_arc_math_Interp_elasticIn, mark, depth + 1);
		if (SF_arc_math_Interp_elasticOut)
			((gc_mark_ptr) ((jclass) ((jobject) SF_arc_math_Interp_elasticOut)->clazz)->markFunction)((jobject) SF_arc_math_Interp_elasticOut, mark, depth + 1);
		if (SF_arc_math_Interp_swing)
			((gc_mark_ptr) ((jclass) ((jobject) SF_arc_math_Interp_swing)->clazz)->markFunction)((jobject) SF_arc_math_Interp_swing, mark, depth + 1);
		if (SF_arc_math_Interp_swingIn)
			((gc_mark_ptr) ((jclass) ((jobject) SF_arc_math_Interp_swingIn)->clazz)->markFunction)((jobject) SF_arc_math_Interp_swingIn, mark, depth + 1);
		if (SF_arc_math_Interp_swingOut)
			((gc_mark_ptr) ((jclass) ((jobject) SF_arc_math_Interp_swingOut)->clazz)->markFunction)((jobject) SF_arc_math_Interp_swingOut, mark, depth + 1);
		if (SF_arc_math_Interp_bounce)
			((gc_mark_ptr) ((jclass) ((jobject) SF_arc_math_Interp_bounce)->clazz)->markFunction)((jobject) SF_arc_math_Interp_bounce, mark, depth + 1);
		if (SF_arc_math_Interp_bounceIn)
			((gc_mark_ptr) ((jclass) ((jobject) SF_arc_math_Interp_bounceIn)->clazz)->markFunction)((jobject) SF_arc_math_Interp_bounceIn, mark, depth + 1);
		if (SF_arc_math_Interp_bounceOut)
			((gc_mark_ptr) ((jclass) ((jobject) SF_arc_math_Interp_bounceOut)->clazz)->markFunction)((jobject) SF_arc_math_Interp_bounceOut, mark, depth + 1);
		return;
	}
	if (depth > GC_DEPTH_ALWAYS && (object->gcMark < GC_MARK_START || object->gcMark == mark))
		return;
	if (depth > MAX_GC_MARK_DEPTH) {
		markDeepObject(object);
		return;
	}
	if (object->gcMark >= GC_MARK_START)
		object->gcMark = mark;
	auto self = (arc_math_Interp *) object;
}

jfloat M_arc_math_Interp_apply_float_float_float_R_float(jcontext ctx, jobject self, jfloat param0, jfloat param1, jfloat param2) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/math/Interp:apply", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	frame[2].f = param1;
	frame[3].f = param2;
	{
	LINE_NUMBER(87);
	jfloat temp0 = frame[1].f;
	jfloat temp1 = (frame[2].f) - (frame[1].f);
	jfloat temp2 = (jfloat)((func_arc_math_Interp_apply_float_R_float) resolveInterfaceMethod(ctx, &class_arc_math_Interp, INDEX_arc_math_Interp_apply_float_R_float, (frame[0].o)))(ctx, (frame[0].o), (frame[3].f));
	popStackFrame(ctx);
	return (temp0 + (temp1 * temp2));
	}

	popStackFrame(ctx);
}

jfloat SM_arc_math_Interp_lambda$static$16_float_R_float(jcontext ctx, jfloat param0) {
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/math/Interp:lambda$static$16", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_math_Interp(ctx);
	frame[0].f = param0;
	{
	LINE_NUMBER(69);
	frame[0].f = ((frame[0].f) - (jfloat(1)));
	LINE_NUMBER(70);
	jdouble temp0 = (jdouble)SM_java_lang_Math_sqrt_double_R_double(ctx, (jdouble(((jfloat(1)) - ((frame[0].f) * (frame[0].f))))));
	popStackFrame(ctx);
	return (jfloat(temp0));
	}

	popStackFrame(ctx);
}

jfloat SM_arc_math_Interp_lambda$static$15_float_R_float(jcontext ctx, jfloat param0) {
	jtype frame[5];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/math/Interp:lambda$static$15", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_math_Interp(ctx);
	frame[0].f = param0;
	{
	LINE_NUMBER(67);
	jfloat temp0 = jfloat(1);
	jdouble temp1 = (jdouble)SM_java_lang_Math_sqrt_double_R_double(ctx, (jdouble(((jfloat(1)) - ((frame[0].f) * (frame[0].f))))));
	popStackFrame(ctx);
	return (temp0 - (jfloat(temp1)));
	}

	popStackFrame(ctx);
}

jfloat SM_arc_math_Interp_lambda$static$14_float_R_float(jcontext ctx, jfloat param0) {
	jtype frame[5];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/math/Interp:lambda$static$14", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_math_Interp(ctx);
	frame[0].f = param0;
	{
	LINE_NUMBER(59);
	if ((floatCompare((frame[0].f), (jfloat(0.5f)), 1)) > 0) goto label_1;
	}
	{
	LINE_NUMBER(60);
	frame[0].f = ((frame[0].f) * (jfloat(2)));
	LINE_NUMBER(61);
	jfloat temp0 = jfloat(1);
	jdouble temp1 = (jdouble)SM_java_lang_Math_sqrt_double_R_double(ctx, (jdouble(((jfloat(1)) - ((frame[0].f) * (frame[0].f))))));
	popStackFrame(ctx);
	return ((temp0 - (jfloat(temp1))) / (jfloat(2)));
	}
label_1:;
	{
	LINE_NUMBER(63);
	frame[0].f = ((frame[0].f) - (jfloat(1)));
	LINE_NUMBER(64);
	frame[0].f = ((frame[0].f) * (jfloat(2)));
	LINE_NUMBER(65);
	jdouble temp0 = (jdouble)SM_java_lang_Math_sqrt_double_R_double(ctx, (jdouble(((jfloat(1)) - ((frame[0].f) * (frame[0].f))))));
	popStackFrame(ctx);
	return (((jfloat(temp0)) + (jfloat(1))) / (jfloat(2)));
	}

	popStackFrame(ctx);
}

jfloat SM_arc_math_Interp_lambda$static$13_float_R_float(jcontext ctx, jfloat param0) {
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/math/Interp:lambda$static$13", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_math_Interp(ctx);
	frame[0].f = param0;
	{
	LINE_NUMBER(51);
	jfloat temp0 = (jfloat)SM_arc_math_Mathf_sin_float_R_float(ctx, (((frame[0].f) * (jfloat(3.1415927f))) / (jfloat(2))));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jfloat SM_arc_math_Interp_lambda$static$12_float_R_float(jcontext ctx, jfloat param0) {
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/math/Interp:lambda$static$12", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_math_Interp(ctx);
	frame[0].f = param0;
	{
	LINE_NUMBER(50);
	jfloat temp0 = jfloat(1);
	jfloat temp1 = (jfloat)SM_arc_math_Mathf_cos_float_R_float(ctx, (((frame[0].f) * (jfloat(3.1415927f))) / (jfloat(2))));
	popStackFrame(ctx);
	return (temp0 - temp1);
	}

	popStackFrame(ctx);
}

jfloat SM_arc_math_Interp_lambda$static$11_float_R_float(jcontext ctx, jfloat param0) {
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/math/Interp:lambda$static$11", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_math_Interp(ctx);
	frame[0].f = param0;
	{
	LINE_NUMBER(49);
	jfloat temp0 = jfloat(1);
	jfloat temp1 = (jfloat)SM_arc_math_Mathf_cos_float_R_float(ctx, ((frame[0].f) * (jfloat(3.1415927f))));
	popStackFrame(ctx);
	return ((temp0 - temp1) / (jfloat(2)));
	}

	popStackFrame(ctx);
}

jfloat SM_arc_math_Interp_lambda$static$10_float_R_float(jcontext ctx, jfloat param0) {
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/math/Interp:lambda$static$10", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_math_Interp(ctx);
	frame[0].f = param0;
	{
	LINE_NUMBER(40);
	jfloat temp0 = jfloat(1);
	jdouble temp1 = (jdouble)SM_java_lang_Math_cbrt_double_R_double(ctx, (jdouble((-((frame[0].f) - (jfloat(1)))))));
	popStackFrame(ctx);
	return (temp0 - (jfloat(temp1)));
	}

	popStackFrame(ctx);
}

jfloat SM_arc_math_Interp_lambda$static$9_float_R_float(jcontext ctx, jfloat param0) {
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/math/Interp:lambda$static$9", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_math_Interp(ctx);
	frame[0].f = param0;
	{
	LINE_NUMBER(39);
	jdouble temp0 = (jdouble)SM_java_lang_Math_cbrt_double_R_double(ctx, (jdouble((frame[0].f))));
	popStackFrame(ctx);
	return (jfloat(temp0));
	}

	popStackFrame(ctx);
}

jfloat SM_arc_math_Interp_lambda$static$8_float_R_float(jcontext ctx, jfloat param0) {
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/math/Interp:lambda$static$8", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_math_Interp(ctx);
	frame[0].f = param0;
	{
	LINE_NUMBER(35);
	jfloat temp0 = jfloat(1);
	jdouble temp1 = (jdouble)SM_java_lang_Math_sqrt_double_R_double(ctx, (jdouble((-((frame[0].f) - (jfloat(1)))))));
	popStackFrame(ctx);
	return (temp0 - (jfloat(temp1)));
	}

	popStackFrame(ctx);
}

jfloat SM_arc_math_Interp_lambda$static$7_float_R_float(jcontext ctx, jfloat param0) {
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/math/Interp:lambda$static$7", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_math_Interp(ctx);
	frame[0].f = param0;
	{
	LINE_NUMBER(34);
	jdouble temp0 = (jdouble)SM_java_lang_Math_sqrt_double_R_double(ctx, (jdouble((frame[0].f))));
	popStackFrame(ctx);
	return (jfloat(temp0));
	}

	popStackFrame(ctx);
}

jfloat SM_arc_math_Interp_lambda$static$6_float_R_float(jcontext ctx, jfloat param0) {
	jtype frame[5];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/math/Interp:lambda$static$6", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_math_Interp(ctx);
	frame[0].f = param0;
	{
	LINE_NUMBER(25);
	popStackFrame(ctx);
	return ((((frame[0].f) * (frame[0].f)) * (frame[0].f)) * (((frame[0].f) * (((frame[0].f) * (jfloat(6.0f))) - (jfloat(15.0f)))) + (jfloat(10.0f))));
	}

	popStackFrame(ctx);
}

jfloat SM_arc_math_Interp_lambda$static$5_float_R_float(jcontext ctx, jfloat param0) {
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/math/Interp:lambda$static$5", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_math_Interp(ctx);
	frame[0].f = param0;
	{
	LINE_NUMBER(20);
	popStackFrame(ctx);
	return (jfloat(0));
	}

	popStackFrame(ctx);
}

jfloat SM_arc_math_Interp_lambda$static$4_float_R_float(jcontext ctx, jfloat param0) {
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/math/Interp:lambda$static$4", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_math_Interp(ctx);
	frame[0].f = param0;
	{
	LINE_NUMBER(19);
	popStackFrame(ctx);
	return (jfloat(1));
	}

	popStackFrame(ctx);
}

jfloat SM_arc_math_Interp_lambda$static$3_float_R_float(jcontext ctx, jfloat param0) {
	jtype frame[5];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/math/Interp:lambda$static$3", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_math_Interp(ctx);
	frame[0].f = param0;
	{
	LINE_NUMBER(15);
	frame[0].f = (((frame[0].f) * (frame[0].f)) * ((jfloat(3.0f)) - ((jfloat(2)) * (frame[0].f))));
	LINE_NUMBER(16);
	popStackFrame(ctx);
	return (((frame[0].f) * (frame[0].f)) * ((jfloat(3.0f)) - ((jfloat(2)) * (frame[0].f))));
	}

	popStackFrame(ctx);
}

jfloat SM_arc_math_Interp_lambda$static$2_float_R_float(jcontext ctx, jfloat param0) {
	jtype frame[5];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/math/Interp:lambda$static$2", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_math_Interp(ctx);
	frame[0].f = param0;
	{
	LINE_NUMBER(11);
	popStackFrame(ctx);
	return (((frame[0].f) * (frame[0].f)) * ((jfloat(3.0f)) - ((jfloat(2)) * (frame[0].f))));
	}

	popStackFrame(ctx);
}

jfloat SM_arc_math_Interp_lambda$static$1_float_R_float(jcontext ctx, jfloat param0) {
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/math/Interp:lambda$static$1", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_math_Interp(ctx);
	frame[0].f = param0;
	{
	LINE_NUMBER(9);
	popStackFrame(ctx);
	return ((jfloat(1)) - (frame[0].f));
	}

	popStackFrame(ctx);
}

jfloat SM_arc_math_Interp_lambda$static$0_float_R_float(jcontext ctx, jfloat param0) {
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/math/Interp:lambda$static$0", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_math_Interp(ctx);
	frame[0].f = param0;
	{
	LINE_NUMBER(8);
	popStackFrame(ctx);
	return (frame[0].f);
	}

	popStackFrame(ctx);
}

void clinit_arc_math_Interp(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	jtype frame[6];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/math/Interp:<clinit>", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_math_Interp(ctx);
	{
	LINE_NUMBER(8);
	{ /* InvokeDynamic */
		clinit_arc_math_Interp_invoke_arc_math_Interp_0(ctx);
		auto proxy = (arc_math_Interp_invoke_arc_math_Interp_0 *) gcAlloc(ctx, &class_arc_math_Interp_invoke_arc_math_Interp_0);
		sp[0].o = (jobject) proxy;
	}
	clinit_arc_math_Interp(ctx);
	SF_arc_math_Interp_linear = sp[0].o;
	LINE_NUMBER(9);
	{ /* InvokeDynamic */
		clinit_arc_math_Interp_invoke_arc_math_Interp_1(ctx);
		auto proxy = (arc_math_Interp_invoke_arc_math_Interp_1 *) gcAlloc(ctx, &class_arc_math_Interp_invoke_arc_math_Interp_1);
		sp[0].o = (jobject) proxy;
	}
	clinit_arc_math_Interp(ctx);
	SF_arc_math_Interp_reverse = sp[0].o;
	LINE_NUMBER(11);
	{ /* InvokeDynamic */
		clinit_arc_math_Interp_invoke_arc_math_Interp_2(ctx);
		auto proxy = (arc_math_Interp_invoke_arc_math_Interp_2 *) gcAlloc(ctx, &class_arc_math_Interp_invoke_arc_math_Interp_2);
		sp[0].o = (jobject) proxy;
	}
	clinit_arc_math_Interp(ctx);
	SF_arc_math_Interp_smooth = sp[0].o;
	LINE_NUMBER(14);
	{ /* InvokeDynamic */
		clinit_arc_math_Interp_invoke_arc_math_Interp_3(ctx);
		auto proxy = (arc_math_Interp_invoke_arc_math_Interp_3 *) gcAlloc(ctx, &class_arc_math_Interp_invoke_arc_math_Interp_3);
		sp[0].o = (jobject) proxy;
	}
	clinit_arc_math_Interp(ctx);
	SF_arc_math_Interp_smooth2 = sp[0].o;
	LINE_NUMBER(19);
	{ /* InvokeDynamic */
		clinit_arc_math_Interp_invoke_arc_math_Interp_4(ctx);
		auto proxy = (arc_math_Interp_invoke_arc_math_Interp_4 *) gcAlloc(ctx, &class_arc_math_Interp_invoke_arc_math_Interp_4);
		sp[0].o = (jobject) proxy;
	}
	clinit_arc_math_Interp(ctx);
	SF_arc_math_Interp_one = sp[0].o;
	LINE_NUMBER(20);
	{ /* InvokeDynamic */
		clinit_arc_math_Interp_invoke_arc_math_Interp_5(ctx);
		auto proxy = (arc_math_Interp_invoke_arc_math_Interp_5 *) gcAlloc(ctx, &class_arc_math_Interp_invoke_arc_math_Interp_5);
		sp[0].o = (jobject) proxy;
	}
	clinit_arc_math_Interp(ctx);
	SF_arc_math_Interp_zero = sp[0].o;
	LINE_NUMBER(21);
	{ /* InvokeDynamic */
		clinit_arc_math_Interp_invoke_arc_math_Interp_6(ctx);
		auto proxy = (arc_math_Interp_invoke_arc_math_Interp_6 *) gcAlloc(ctx, &class_arc_math_Interp_invoke_arc_math_Interp_6);
		sp[0].o = (jobject) proxy;
	}
	clinit_arc_math_Interp(ctx);
	SF_arc_math_Interp_slope = sp[0].o;
	LINE_NUMBER(25);
	{ /* InvokeDynamic */
		clinit_arc_math_Interp_invoke_arc_math_Interp_7(ctx);
		auto proxy = (arc_math_Interp_invoke_arc_math_Interp_7 *) gcAlloc(ctx, &class_arc_math_Interp_invoke_arc_math_Interp_7);
		sp[0].o = (jobject) proxy;
	}
	clinit_arc_math_Interp(ctx);
	SF_arc_math_Interp_smoother = sp[0].o;
	LINE_NUMBER(26);
	clinit_arc_math_Interp(ctx);
	sp[0].o = (jobject)SF_arc_math_Interp_smoother;
	clinit_arc_math_Interp(ctx);
	SF_arc_math_Interp_fade = sp[0].o;
	LINE_NUMBER(27);
	clinit_arc_math_Interp$Pow(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_math_Interp$Pow);
	init_arc_math_Interp$Pow_int(ctx, sp[0].o, (jint(2)));
	clinit_arc_math_Interp(ctx);
	SF_arc_math_Interp_pow2 = sp[0].o;
	LINE_NUMBER(29);
	clinit_arc_math_Interp$PowIn(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_math_Interp$PowIn);
	init_arc_math_Interp$PowIn_int(ctx, sp[0].o, (jint(2)));
	clinit_arc_math_Interp(ctx);
	SF_arc_math_Interp_pow2In = sp[0].o;
	LINE_NUMBER(30);
	clinit_arc_math_Interp(ctx);
	sp[0].o = (jobject)SF_arc_math_Interp_pow2In;
	clinit_arc_math_Interp(ctx);
	SF_arc_math_Interp_slowFast = sp[0].o;
	LINE_NUMBER(32);
	clinit_arc_math_Interp$PowOut(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_math_Interp$PowOut);
	init_arc_math_Interp$PowOut_int(ctx, sp[0].o, (jint(2)));
	clinit_arc_math_Interp(ctx);
	SF_arc_math_Interp_pow2Out = sp[0].o;
	LINE_NUMBER(33);
	clinit_arc_math_Interp(ctx);
	sp[0].o = (jobject)SF_arc_math_Interp_pow2Out;
	clinit_arc_math_Interp(ctx);
	SF_arc_math_Interp_fastSlow = sp[0].o;
	LINE_NUMBER(34);
	{ /* InvokeDynamic */
		clinit_arc_math_Interp_invoke_arc_math_Interp_8(ctx);
		auto proxy = (arc_math_Interp_invoke_arc_math_Interp_8 *) gcAlloc(ctx, &class_arc_math_Interp_invoke_arc_math_Interp_8);
		sp[0].o = (jobject) proxy;
	}
	clinit_arc_math_Interp(ctx);
	SF_arc_math_Interp_pow2InInverse = sp[0].o;
	LINE_NUMBER(35);
	{ /* InvokeDynamic */
		clinit_arc_math_Interp_invoke_arc_math_Interp_9(ctx);
		auto proxy = (arc_math_Interp_invoke_arc_math_Interp_9 *) gcAlloc(ctx, &class_arc_math_Interp_invoke_arc_math_Interp_9);
		sp[0].o = (jobject) proxy;
	}
	clinit_arc_math_Interp(ctx);
	SF_arc_math_Interp_pow2OutInverse = sp[0].o;
	LINE_NUMBER(36);
	clinit_arc_math_Interp$Pow(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_math_Interp$Pow);
	init_arc_math_Interp$Pow_int(ctx, sp[0].o, (jint(3)));
	clinit_arc_math_Interp(ctx);
	SF_arc_math_Interp_pow3 = sp[0].o;
	LINE_NUMBER(37);
	clinit_arc_math_Interp$PowIn(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_math_Interp$PowIn);
	init_arc_math_Interp$PowIn_int(ctx, sp[0].o, (jint(3)));
	clinit_arc_math_Interp(ctx);
	SF_arc_math_Interp_pow3In = sp[0].o;
	LINE_NUMBER(38);
	clinit_arc_math_Interp$PowOut(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_math_Interp$PowOut);
	init_arc_math_Interp$PowOut_int(ctx, sp[0].o, (jint(3)));
	clinit_arc_math_Interp(ctx);
	SF_arc_math_Interp_pow3Out = sp[0].o;
	LINE_NUMBER(39);
	{ /* InvokeDynamic */
		clinit_arc_math_Interp_invoke_arc_math_Interp_10(ctx);
		auto proxy = (arc_math_Interp_invoke_arc_math_Interp_10 *) gcAlloc(ctx, &class_arc_math_Interp_invoke_arc_math_Interp_10);
		sp[0].o = (jobject) proxy;
	}
	clinit_arc_math_Interp(ctx);
	SF_arc_math_Interp_pow3InInverse = sp[0].o;
	LINE_NUMBER(40);
	{ /* InvokeDynamic */
		clinit_arc_math_Interp_invoke_arc_math_Interp_11(ctx);
		auto proxy = (arc_math_Interp_invoke_arc_math_Interp_11 *) gcAlloc(ctx, &class_arc_math_Interp_invoke_arc_math_Interp_11);
		sp[0].o = (jobject) proxy;
	}
	clinit_arc_math_Interp(ctx);
	SF_arc_math_Interp_pow3OutInverse = sp[0].o;
	LINE_NUMBER(41);
	clinit_arc_math_Interp$Pow(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_math_Interp$Pow);
	init_arc_math_Interp$Pow_int(ctx, sp[0].o, (jint(4)));
	clinit_arc_math_Interp(ctx);
	SF_arc_math_Interp_pow4 = sp[0].o;
	LINE_NUMBER(42);
	clinit_arc_math_Interp$PowIn(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_math_Interp$PowIn);
	init_arc_math_Interp$PowIn_int(ctx, sp[0].o, (jint(4)));
	clinit_arc_math_Interp(ctx);
	SF_arc_math_Interp_pow4In = sp[0].o;
	LINE_NUMBER(43);
	clinit_arc_math_Interp$PowOut(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_math_Interp$PowOut);
	init_arc_math_Interp$PowOut_int(ctx, sp[0].o, (jint(4)));
	clinit_arc_math_Interp(ctx);
	SF_arc_math_Interp_pow4Out = sp[0].o;
	LINE_NUMBER(44);
	clinit_arc_math_Interp$Pow(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_math_Interp$Pow);
	init_arc_math_Interp$Pow_int(ctx, sp[0].o, (jint(5)));
	clinit_arc_math_Interp(ctx);
	SF_arc_math_Interp_pow5 = sp[0].o;
	LINE_NUMBER(45);
	clinit_arc_math_Interp$PowIn(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_math_Interp$PowIn);
	init_arc_math_Interp$PowIn_int(ctx, sp[0].o, (jint(5)));
	clinit_arc_math_Interp(ctx);
	SF_arc_math_Interp_pow5In = sp[0].o;
	LINE_NUMBER(46);
	clinit_arc_math_Interp$PowIn(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_math_Interp$PowIn);
	init_arc_math_Interp$PowIn_int(ctx, sp[0].o, (10));
	clinit_arc_math_Interp(ctx);
	SF_arc_math_Interp_pow10In = sp[0].o;
	LINE_NUMBER(47);
	clinit_arc_math_Interp$PowOut(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_math_Interp$PowOut);
	init_arc_math_Interp$PowOut_int(ctx, sp[0].o, (10));
	clinit_arc_math_Interp(ctx);
	SF_arc_math_Interp_pow10Out = sp[0].o;
	LINE_NUMBER(48);
	clinit_arc_math_Interp$PowOut(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_math_Interp$PowOut);
	init_arc_math_Interp$PowOut_int(ctx, sp[0].o, (jint(5)));
	clinit_arc_math_Interp(ctx);
	SF_arc_math_Interp_pow5Out = sp[0].o;
	LINE_NUMBER(49);
	{ /* InvokeDynamic */
		clinit_arc_math_Interp_invoke_arc_math_Interp_12(ctx);
		auto proxy = (arc_math_Interp_invoke_arc_math_Interp_12 *) gcAlloc(ctx, &class_arc_math_Interp_invoke_arc_math_Interp_12);
		sp[0].o = (jobject) proxy;
	}
	clinit_arc_math_Interp(ctx);
	SF_arc_math_Interp_sine = sp[0].o;
	LINE_NUMBER(50);
	{ /* InvokeDynamic */
		clinit_arc_math_Interp_invoke_arc_math_Interp_13(ctx);
		auto proxy = (arc_math_Interp_invoke_arc_math_Interp_13 *) gcAlloc(ctx, &class_arc_math_Interp_invoke_arc_math_Interp_13);
		sp[0].o = (jobject) proxy;
	}
	clinit_arc_math_Interp(ctx);
	SF_arc_math_Interp_sineIn = sp[0].o;
	LINE_NUMBER(51);
	{ /* InvokeDynamic */
		clinit_arc_math_Interp_invoke_arc_math_Interp_14(ctx);
		auto proxy = (arc_math_Interp_invoke_arc_math_Interp_14 *) gcAlloc(ctx, &class_arc_math_Interp_invoke_arc_math_Interp_14);
		sp[0].o = (jobject) proxy;
	}
	clinit_arc_math_Interp(ctx);
	SF_arc_math_Interp_sineOut = sp[0].o;
	LINE_NUMBER(52);
	clinit_arc_math_Interp$Exp(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_math_Interp$Exp);
	init_arc_math_Interp$Exp_float_float(ctx, sp[0].o, (jfloat(2)), (jfloat(10.0f)));
	clinit_arc_math_Interp(ctx);
	SF_arc_math_Interp_exp10 = sp[0].o;
	LINE_NUMBER(53);
	clinit_arc_math_Interp$ExpIn(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_math_Interp$ExpIn);
	init_arc_math_Interp$ExpIn_float_float(ctx, sp[0].o, (jfloat(2)), (jfloat(10.0f)));
	clinit_arc_math_Interp(ctx);
	SF_arc_math_Interp_exp10In = sp[0].o;
	LINE_NUMBER(54);
	clinit_arc_math_Interp$ExpOut(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_math_Interp$ExpOut);
	init_arc_math_Interp$ExpOut_float_float(ctx, sp[0].o, (jfloat(2)), (jfloat(10.0f)));
	clinit_arc_math_Interp(ctx);
	SF_arc_math_Interp_exp10Out = sp[0].o;
	LINE_NUMBER(55);
	clinit_arc_math_Interp$Exp(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_math_Interp$Exp);
	init_arc_math_Interp$Exp_float_float(ctx, sp[0].o, (jfloat(2)), (jfloat(5.0f)));
	clinit_arc_math_Interp(ctx);
	SF_arc_math_Interp_exp5 = sp[0].o;
	LINE_NUMBER(56);
	clinit_arc_math_Interp$ExpIn(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_math_Interp$ExpIn);
	init_arc_math_Interp$ExpIn_float_float(ctx, sp[0].o, (jfloat(2)), (jfloat(5.0f)));
	clinit_arc_math_Interp(ctx);
	SF_arc_math_Interp_exp5In = sp[0].o;
	LINE_NUMBER(57);
	clinit_arc_math_Interp$ExpOut(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_math_Interp$ExpOut);
	init_arc_math_Interp$ExpOut_float_float(ctx, sp[0].o, (jfloat(2)), (jfloat(5.0f)));
	clinit_arc_math_Interp(ctx);
	SF_arc_math_Interp_exp5Out = sp[0].o;
	LINE_NUMBER(58);
	{ /* InvokeDynamic */
		clinit_arc_math_Interp_invoke_arc_math_Interp_15(ctx);
		auto proxy = (arc_math_Interp_invoke_arc_math_Interp_15 *) gcAlloc(ctx, &class_arc_math_Interp_invoke_arc_math_Interp_15);
		sp[0].o = (jobject) proxy;
	}
	clinit_arc_math_Interp(ctx);
	SF_arc_math_Interp_circle = sp[0].o;
	LINE_NUMBER(67);
	{ /* InvokeDynamic */
		clinit_arc_math_Interp_invoke_arc_math_Interp_16(ctx);
		auto proxy = (arc_math_Interp_invoke_arc_math_Interp_16 *) gcAlloc(ctx, &class_arc_math_Interp_invoke_arc_math_Interp_16);
		sp[0].o = (jobject) proxy;
	}
	clinit_arc_math_Interp(ctx);
	SF_arc_math_Interp_circleIn = sp[0].o;
	LINE_NUMBER(68);
	{ /* InvokeDynamic */
		clinit_arc_math_Interp_invoke_arc_math_Interp_17(ctx);
		auto proxy = (arc_math_Interp_invoke_arc_math_Interp_17 *) gcAlloc(ctx, &class_arc_math_Interp_invoke_arc_math_Interp_17);
		sp[0].o = (jobject) proxy;
	}
	clinit_arc_math_Interp(ctx);
	SF_arc_math_Interp_circleOut = sp[0].o;
	LINE_NUMBER(72);
	clinit_arc_math_Interp$Elastic(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_math_Interp$Elastic);
	init_arc_math_Interp$Elastic_float_float_int_float(ctx, sp[0].o, (jfloat(2)), (jfloat(10.0f)), (7), (jfloat(1)));
	clinit_arc_math_Interp(ctx);
	SF_arc_math_Interp_elastic = sp[0].o;
	LINE_NUMBER(73);
	clinit_arc_math_Interp$ElasticIn(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_math_Interp$ElasticIn);
	init_arc_math_Interp$ElasticIn_float_float_int_float(ctx, sp[0].o, (jfloat(2)), (jfloat(10.0f)), (6), (jfloat(1)));
	clinit_arc_math_Interp(ctx);
	SF_arc_math_Interp_elasticIn = sp[0].o;
	LINE_NUMBER(74);
	clinit_arc_math_Interp$ElasticOut(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_math_Interp$ElasticOut);
	init_arc_math_Interp$ElasticOut_float_float_int_float(ctx, sp[0].o, (jfloat(2)), (jfloat(10.0f)), (7), (jfloat(1)));
	clinit_arc_math_Interp(ctx);
	SF_arc_math_Interp_elasticOut = sp[0].o;
	LINE_NUMBER(75);
	clinit_arc_math_Interp$Swing(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_math_Interp$Swing);
	init_arc_math_Interp$Swing_float(ctx, sp[0].o, (jfloat(1.5f)));
	clinit_arc_math_Interp(ctx);
	SF_arc_math_Interp_swing = sp[0].o;
	LINE_NUMBER(76);
	clinit_arc_math_Interp$SwingIn(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_math_Interp$SwingIn);
	init_arc_math_Interp$SwingIn_float(ctx, sp[0].o, (jfloat(2)));
	clinit_arc_math_Interp(ctx);
	SF_arc_math_Interp_swingIn = sp[0].o;
	LINE_NUMBER(77);
	clinit_arc_math_Interp$SwingOut(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_math_Interp$SwingOut);
	init_arc_math_Interp$SwingOut_float(ctx, sp[0].o, (jfloat(2)));
	clinit_arc_math_Interp(ctx);
	SF_arc_math_Interp_swingOut = sp[0].o;
	LINE_NUMBER(78);
	clinit_arc_math_Interp$Bounce(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_math_Interp$Bounce);
	init_arc_math_Interp$Bounce_int(ctx, sp[0].o, (jint(4)));
	clinit_arc_math_Interp(ctx);
	SF_arc_math_Interp_bounce = sp[0].o;
	LINE_NUMBER(79);
	clinit_arc_math_Interp$BounceIn(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_math_Interp$BounceIn);
	init_arc_math_Interp$BounceIn_int(ctx, sp[0].o, (jint(4)));
	clinit_arc_math_Interp(ctx);
	SF_arc_math_Interp_bounceIn = sp[0].o;
	LINE_NUMBER(80);
	clinit_arc_math_Interp$BounceOut(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_math_Interp$BounceOut);
	init_arc_math_Interp$BounceOut_int(ctx, sp[0].o, (jint(4)));
	clinit_arc_math_Interp(ctx);
	SF_arc_math_Interp_bounceOut = sp[0].o;
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void *vtable_arc_math_Interp[] {
	(void *) M_java_lang_Object_hashCode_R_int,
	(void *) M_java_lang_Object_equals_java_lang_Object_R_boolean,
	(void *) M_java_lang_Object_clone_R_java_lang_Object,
	(void *) M_java_lang_Object_getClass_R_java_lang_Class,
	(void *) M_java_lang_Object_toString_R_java_lang_String,
	(void *) M_java_lang_Object_finalize,
	(void *) M_java_lang_Object_notify,
	(void *) M_java_lang_Object_notifyAll,
	(void *) M_java_lang_Object_wait,
	(void *) M_java_lang_Object_wait_long,
	(void *) M_java_lang_Object_wait_long_int,
	(void *) nullptr,
	(void *) M_arc_math_Interp_apply_float_float_float_R_float,
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
	{ "apply", "(F)F" },
	{ "apply", "(FFF)F" },
};

static jclass innerClasses[] {
	&class_arc_math_Interp$Pow,
	&class_arc_math_Interp$PowIn,
	&class_arc_math_Interp$PowOut,
	&class_arc_math_Interp$Exp,
	&class_arc_math_Interp$ExpIn,
	&class_arc_math_Interp$ExpOut,
	&class_arc_math_Interp$Elastic,
	&class_arc_math_Interp$ElasticIn,
	&class_arc_math_Interp$ElasticOut,
	&class_arc_math_Interp$Swing,
	&class_arc_math_Interp$SwingIn,
	&class_arc_math_Interp$SwingOut,
	&class_arc_math_Interp$Bounce,
	&class_arc_math_Interp$BounceIn,
	&class_arc_math_Interp$BounceOut,
};

static FieldMetadata fields[] {
	{ "linear", &class_arc_math_Interp, (intptr_t) &SF_arc_math_Interp_linear, "Larc/math/Interp;", 25 },
	{ "reverse", &class_arc_math_Interp, (intptr_t) &SF_arc_math_Interp_reverse, "Larc/math/Interp;", 25 },
	{ "smooth", &class_arc_math_Interp, (intptr_t) &SF_arc_math_Interp_smooth, "Larc/math/Interp;", 25 },
	{ "smooth2", &class_arc_math_Interp, (intptr_t) &SF_arc_math_Interp_smooth2, "Larc/math/Interp;", 25 },
	{ "one", &class_arc_math_Interp, (intptr_t) &SF_arc_math_Interp_one, "Larc/math/Interp;", 25 },
	{ "zero", &class_arc_math_Interp, (intptr_t) &SF_arc_math_Interp_zero, "Larc/math/Interp;", 25 },
	{ "slope", &class_arc_math_Interp, (intptr_t) &SF_arc_math_Interp_slope, "Larc/math/Interp;", 25 },
	{ "smoother", &class_arc_math_Interp, (intptr_t) &SF_arc_math_Interp_smoother, "Larc/math/Interp;", 25 },
	{ "fade", &class_arc_math_Interp, (intptr_t) &SF_arc_math_Interp_fade, "Larc/math/Interp;", 25 },
	{ "pow2", &class_arc_math_Interp$Pow, (intptr_t) &SF_arc_math_Interp_pow2, "Larc/math/Interp$Pow;", 25 },
	{ "pow2In", &class_arc_math_Interp$PowIn, (intptr_t) &SF_arc_math_Interp_pow2In, "Larc/math/Interp$PowIn;", 25 },
	{ "slowFast", &class_arc_math_Interp$PowIn, (intptr_t) &SF_arc_math_Interp_slowFast, "Larc/math/Interp$PowIn;", 25 },
	{ "pow2Out", &class_arc_math_Interp$PowOut, (intptr_t) &SF_arc_math_Interp_pow2Out, "Larc/math/Interp$PowOut;", 25 },
	{ "fastSlow", &class_arc_math_Interp$PowOut, (intptr_t) &SF_arc_math_Interp_fastSlow, "Larc/math/Interp$PowOut;", 25 },
	{ "pow2InInverse", &class_arc_math_Interp, (intptr_t) &SF_arc_math_Interp_pow2InInverse, "Larc/math/Interp;", 25 },
	{ "pow2OutInverse", &class_arc_math_Interp, (intptr_t) &SF_arc_math_Interp_pow2OutInverse, "Larc/math/Interp;", 25 },
	{ "pow3", &class_arc_math_Interp$Pow, (intptr_t) &SF_arc_math_Interp_pow3, "Larc/math/Interp$Pow;", 25 },
	{ "pow3In", &class_arc_math_Interp$PowIn, (intptr_t) &SF_arc_math_Interp_pow3In, "Larc/math/Interp$PowIn;", 25 },
	{ "pow3Out", &class_arc_math_Interp$PowOut, (intptr_t) &SF_arc_math_Interp_pow3Out, "Larc/math/Interp$PowOut;", 25 },
	{ "pow3InInverse", &class_arc_math_Interp, (intptr_t) &SF_arc_math_Interp_pow3InInverse, "Larc/math/Interp;", 25 },
	{ "pow3OutInverse", &class_arc_math_Interp, (intptr_t) &SF_arc_math_Interp_pow3OutInverse, "Larc/math/Interp;", 25 },
	{ "pow4", &class_arc_math_Interp$Pow, (intptr_t) &SF_arc_math_Interp_pow4, "Larc/math/Interp$Pow;", 25 },
	{ "pow4In", &class_arc_math_Interp$PowIn, (intptr_t) &SF_arc_math_Interp_pow4In, "Larc/math/Interp$PowIn;", 25 },
	{ "pow4Out", &class_arc_math_Interp$PowOut, (intptr_t) &SF_arc_math_Interp_pow4Out, "Larc/math/Interp$PowOut;", 25 },
	{ "pow5", &class_arc_math_Interp$Pow, (intptr_t) &SF_arc_math_Interp_pow5, "Larc/math/Interp$Pow;", 25 },
	{ "pow5In", &class_arc_math_Interp$PowIn, (intptr_t) &SF_arc_math_Interp_pow5In, "Larc/math/Interp$PowIn;", 25 },
	{ "pow10In", &class_arc_math_Interp$PowIn, (intptr_t) &SF_arc_math_Interp_pow10In, "Larc/math/Interp$PowIn;", 25 },
	{ "pow10Out", &class_arc_math_Interp$PowOut, (intptr_t) &SF_arc_math_Interp_pow10Out, "Larc/math/Interp$PowOut;", 25 },
	{ "pow5Out", &class_arc_math_Interp$PowOut, (intptr_t) &SF_arc_math_Interp_pow5Out, "Larc/math/Interp$PowOut;", 25 },
	{ "sine", &class_arc_math_Interp, (intptr_t) &SF_arc_math_Interp_sine, "Larc/math/Interp;", 25 },
	{ "sineIn", &class_arc_math_Interp, (intptr_t) &SF_arc_math_Interp_sineIn, "Larc/math/Interp;", 25 },
	{ "sineOut", &class_arc_math_Interp, (intptr_t) &SF_arc_math_Interp_sineOut, "Larc/math/Interp;", 25 },
	{ "exp10", &class_arc_math_Interp$Exp, (intptr_t) &SF_arc_math_Interp_exp10, "Larc/math/Interp$Exp;", 25 },
	{ "exp10In", &class_arc_math_Interp$ExpIn, (intptr_t) &SF_arc_math_Interp_exp10In, "Larc/math/Interp$ExpIn;", 25 },
	{ "exp10Out", &class_arc_math_Interp$ExpOut, (intptr_t) &SF_arc_math_Interp_exp10Out, "Larc/math/Interp$ExpOut;", 25 },
	{ "exp5", &class_arc_math_Interp$Exp, (intptr_t) &SF_arc_math_Interp_exp5, "Larc/math/Interp$Exp;", 25 },
	{ "exp5In", &class_arc_math_Interp$ExpIn, (intptr_t) &SF_arc_math_Interp_exp5In, "Larc/math/Interp$ExpIn;", 25 },
	{ "exp5Out", &class_arc_math_Interp$ExpOut, (intptr_t) &SF_arc_math_Interp_exp5Out, "Larc/math/Interp$ExpOut;", 25 },
	{ "circle", &class_arc_math_Interp, (intptr_t) &SF_arc_math_Interp_circle, "Larc/math/Interp;", 25 },
	{ "circleIn", &class_arc_math_Interp, (intptr_t) &SF_arc_math_Interp_circleIn, "Larc/math/Interp;", 25 },
	{ "circleOut", &class_arc_math_Interp, (intptr_t) &SF_arc_math_Interp_circleOut, "Larc/math/Interp;", 25 },
	{ "elastic", &class_arc_math_Interp$Elastic, (intptr_t) &SF_arc_math_Interp_elastic, "Larc/math/Interp$Elastic;", 25 },
	{ "elasticIn", &class_arc_math_Interp$ElasticIn, (intptr_t) &SF_arc_math_Interp_elasticIn, "Larc/math/Interp$ElasticIn;", 25 },
	{ "elasticOut", &class_arc_math_Interp$ElasticOut, (intptr_t) &SF_arc_math_Interp_elasticOut, "Larc/math/Interp$ElasticOut;", 25 },
	{ "swing", &class_arc_math_Interp$Swing, (intptr_t) &SF_arc_math_Interp_swing, "Larc/math/Interp$Swing;", 25 },
	{ "swingIn", &class_arc_math_Interp$SwingIn, (intptr_t) &SF_arc_math_Interp_swingIn, "Larc/math/Interp$SwingIn;", 25 },
	{ "swingOut", &class_arc_math_Interp$SwingOut, (intptr_t) &SF_arc_math_Interp_swingOut, "Larc/math/Interp$SwingOut;", 25 },
	{ "bounce", &class_arc_math_Interp$Bounce, (intptr_t) &SF_arc_math_Interp_bounce, "Larc/math/Interp$Bounce;", 25 },
	{ "bounceIn", &class_arc_math_Interp$BounceIn, (intptr_t) &SF_arc_math_Interp_bounceIn, "Larc/math/Interp$BounceIn;", 25 },
	{ "bounceOut", &class_arc_math_Interp$BounceOut, (intptr_t) &SF_arc_math_Interp_bounceOut, "Larc/math/Interp$BounceOut;", 25 },
};

static MethodMetadata methods[] {
	{ "apply", 0, INDEX_arc_math_Interp_apply_float_R_float, "(F)F", 1025 },
	{ "apply", (intptr_t) M_arc_math_Interp_apply_float_float_float_R_float, INDEX_arc_math_Interp_apply_float_float_float_R_float, "(FFF)F", 1 },
	{ "lambda$static$16", (intptr_t) SM_arc_math_Interp_lambda$static$16_float_R_float, 0, "(F)F", 4106 },
	{ "lambda$static$15", (intptr_t) SM_arc_math_Interp_lambda$static$15_float_R_float, 0, "(F)F", 4106 },
	{ "lambda$static$14", (intptr_t) SM_arc_math_Interp_lambda$static$14_float_R_float, 0, "(F)F", 4106 },
	{ "lambda$static$13", (intptr_t) SM_arc_math_Interp_lambda$static$13_float_R_float, 0, "(F)F", 4106 },
	{ "lambda$static$12", (intptr_t) SM_arc_math_Interp_lambda$static$12_float_R_float, 0, "(F)F", 4106 },
	{ "lambda$static$11", (intptr_t) SM_arc_math_Interp_lambda$static$11_float_R_float, 0, "(F)F", 4106 },
	{ "lambda$static$10", (intptr_t) SM_arc_math_Interp_lambda$static$10_float_R_float, 0, "(F)F", 4106 },
	{ "lambda$static$9", (intptr_t) SM_arc_math_Interp_lambda$static$9_float_R_float, 0, "(F)F", 4106 },
	{ "lambda$static$8", (intptr_t) SM_arc_math_Interp_lambda$static$8_float_R_float, 0, "(F)F", 4106 },
	{ "lambda$static$7", (intptr_t) SM_arc_math_Interp_lambda$static$7_float_R_float, 0, "(F)F", 4106 },
	{ "lambda$static$6", (intptr_t) SM_arc_math_Interp_lambda$static$6_float_R_float, 0, "(F)F", 4106 },
	{ "lambda$static$5", (intptr_t) SM_arc_math_Interp_lambda$static$5_float_R_float, 0, "(F)F", 4106 },
	{ "lambda$static$4", (intptr_t) SM_arc_math_Interp_lambda$static$4_float_R_float, 0, "(F)F", 4106 },
	{ "lambda$static$3", (intptr_t) SM_arc_math_Interp_lambda$static$3_float_R_float, 0, "(F)F", 4106 },
	{ "lambda$static$2", (intptr_t) SM_arc_math_Interp_lambda$static$2_float_R_float, 0, "(F)F", 4106 },
	{ "lambda$static$1", (intptr_t) SM_arc_math_Interp_lambda$static$1_float_R_float, 0, "(F)F", 4106 },
	{ "lambda$static$0", (intptr_t) SM_arc_math_Interp_lambda$static$0_float_R_float, 0, "(F)F", 4106 },
	{ "<clinit>", (intptr_t) clinit_arc_math_Interp, 0, "()V", 8 },
};

Class class_arc_math_Interp{
		.nativeName = (intptr_t) "arc/math/Interp",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(arc_math_Interp),
		.classVtable = (intptr_t) vtable_arc_math_Interp,
		.staticInitializer = (intptr_t) clinit_arc_math_Interp,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_arc_math_Interp,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 15,
		.nativeInnerClasses = (intptr_t) innerClasses,
		.access = 1537,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 50,
		.nativeFields = (intptr_t) fields,
		.methodCount = 20,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 13,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_arc_math_Interp = registerClass(&class_arc_math_Interp);

}
