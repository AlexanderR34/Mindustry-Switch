#include "arc/math/Mathf.h"
#include "arc/math/Mathf.h"
#include "java/lang/Math.h"
#include "java/lang/Integer.h"
#include "arc/math/geom/Vec2.h"
#include "java/lang/Object.h"
#include "arc/math/Rand.h"
#include "arc/util/Time.h"
#include "arc/math/geom/Position.h"

extern "C" {

jobject SF_arc_math_Mathf_signs;
jobject SF_arc_math_Mathf_zeroOne;
jobject SF_arc_math_Mathf_booleans;
jfloat SF_arc_math_Mathf_FLOAT_ROUNDING_ERROR;
jfloat SF_arc_math_Mathf_PI;
jfloat SF_arc_math_Mathf_pi;
jfloat SF_arc_math_Mathf_halfPi;
jfloat SF_arc_math_Mathf_PI2;
jfloat SF_arc_math_Mathf_E;
jfloat SF_arc_math_Mathf_sqrt2;
jfloat SF_arc_math_Mathf_sqrt3;
jfloat SF_arc_math_Mathf_radiansToDegrees;
jfloat SF_arc_math_Mathf_radDeg;
jfloat SF_arc_math_Mathf_degreesToRadians;
jfloat SF_arc_math_Mathf_degRad;
jdouble SF_arc_math_Mathf_doubleDegRad;
jdouble SF_arc_math_Mathf_doubleRadDeg;
jint SF_arc_math_Mathf_sinBits;
jint SF_arc_math_Mathf_sinMask;
jint SF_arc_math_Mathf_sinCount;
jobject SF_arc_math_Mathf_sinTable;
jfloat SF_arc_math_Mathf_radFull;
jfloat SF_arc_math_Mathf_degFull;
jfloat SF_arc_math_Mathf_radToIndex;
jfloat SF_arc_math_Mathf_degToIndex;
jint SF_arc_math_Mathf_BIG_ENOUGH_INT;
jdouble SF_arc_math_Mathf_BIG_ENOUGH_FLOOR;
jdouble SF_arc_math_Mathf_CEIL;
jdouble SF_arc_math_Mathf_BIG_ENOUGH_ROUND;
jobject SF_arc_math_Mathf_seedr;
jobject SF_arc_math_Mathf_v1;
jobject SF_arc_math_Mathf_v2;
jobject SF_arc_math_Mathf_v3;
jobject SF_arc_math_Mathf_rand;

void mark_arc_math_Mathf(jobject object, jint mark, jint depth) {
	if (!object) {
		if (SF_arc_math_Mathf_signs)
			((gc_mark_ptr) ((jclass) ((jobject) SF_arc_math_Mathf_signs)->clazz)->markFunction)((jobject) SF_arc_math_Mathf_signs, mark, depth + 1);
		if (SF_arc_math_Mathf_zeroOne)
			((gc_mark_ptr) ((jclass) ((jobject) SF_arc_math_Mathf_zeroOne)->clazz)->markFunction)((jobject) SF_arc_math_Mathf_zeroOne, mark, depth + 1);
		if (SF_arc_math_Mathf_booleans)
			((gc_mark_ptr) ((jclass) ((jobject) SF_arc_math_Mathf_booleans)->clazz)->markFunction)((jobject) SF_arc_math_Mathf_booleans, mark, depth + 1);
		if (SF_arc_math_Mathf_sinTable)
			((gc_mark_ptr) ((jclass) ((jobject) SF_arc_math_Mathf_sinTable)->clazz)->markFunction)((jobject) SF_arc_math_Mathf_sinTable, mark, depth + 1);
		if (SF_arc_math_Mathf_seedr)
			((gc_mark_ptr) ((jclass) ((jobject) SF_arc_math_Mathf_seedr)->clazz)->markFunction)((jobject) SF_arc_math_Mathf_seedr, mark, depth + 1);
		if (SF_arc_math_Mathf_v1)
			((gc_mark_ptr) ((jclass) ((jobject) SF_arc_math_Mathf_v1)->clazz)->markFunction)((jobject) SF_arc_math_Mathf_v1, mark, depth + 1);
		if (SF_arc_math_Mathf_v2)
			((gc_mark_ptr) ((jclass) ((jobject) SF_arc_math_Mathf_v2)->clazz)->markFunction)((jobject) SF_arc_math_Mathf_v2, mark, depth + 1);
		if (SF_arc_math_Mathf_v3)
			((gc_mark_ptr) ((jclass) ((jobject) SF_arc_math_Mathf_v3)->clazz)->markFunction)((jobject) SF_arc_math_Mathf_v3, mark, depth + 1);
		if (SF_arc_math_Mathf_rand)
			((gc_mark_ptr) ((jclass) ((jobject) SF_arc_math_Mathf_rand)->clazz)->markFunction)((jobject) SF_arc_math_Mathf_rand, mark, depth + 1);
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
	auto self = (arc_math_Mathf *) object;
}

void init_arc_math_Mathf(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/math/Mathf:<init>", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_math_Mathf(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(6);
	init_java_lang_Object(ctx, (frame[0].o));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jfloat SM_arc_math_Mathf_sin_float_R_float(jcontext ctx, jfloat param0) {
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/math/Mathf:sin", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_math_Mathf(ctx);
	frame[0].f = param0;
	{
	LINE_NUMBER(56);
	clinit_arc_math_Mathf(ctx);
	sp[0].o = (jobject)SF_arc_math_Mathf_sinTable;
	popStackFrame(ctx);
	return ((jfloat)ARRAY_ACCESS(jfloat, sp[0].o, ((jint(((frame[0].f) * (jfloat(2607.5945f))))) & (16383))));
	}

	popStackFrame(ctx);
}

jfloat SM_arc_math_Mathf_cos_float_R_float(jcontext ctx, jfloat param0) {
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/math/Mathf:cos", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_math_Mathf(ctx);
	frame[0].f = param0;
	{
	LINE_NUMBER(61);
	clinit_arc_math_Mathf(ctx);
	sp[0].o = (jobject)SF_arc_math_Mathf_sinTable;
	popStackFrame(ctx);
	return ((jfloat)ARRAY_ACCESS(jfloat, sp[0].o, ((jint((((frame[0].f) + (jfloat(1.5707964f))) * (jfloat(2607.5945f))))) & (16383))));
	}

	popStackFrame(ctx);
}

jfloat SM_arc_math_Mathf_sinDeg_float_R_float(jcontext ctx, jfloat param0) {
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/math/Mathf:sinDeg", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_math_Mathf(ctx);
	frame[0].f = param0;
	{
	LINE_NUMBER(66);
	clinit_arc_math_Mathf(ctx);
	sp[0].o = (jobject)SF_arc_math_Mathf_sinTable;
	popStackFrame(ctx);
	return ((jfloat)ARRAY_ACCESS(jfloat, sp[0].o, ((jint(((frame[0].f) * (jfloat(45.511112f))))) & (16383))));
	}

	popStackFrame(ctx);
}

jfloat SM_arc_math_Mathf_cosDeg_float_R_float(jcontext ctx, jfloat param0) {
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/math/Mathf:cosDeg", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_math_Mathf(ctx);
	frame[0].f = param0;
	{
	LINE_NUMBER(71);
	clinit_arc_math_Mathf(ctx);
	sp[0].o = (jobject)SF_arc_math_Mathf_sinTable;
	popStackFrame(ctx);
	return ((jfloat)ARRAY_ACCESS(jfloat, sp[0].o, ((jint((((frame[0].f) + (jfloat(90.0f))) * (jfloat(45.511112f))))) & (16383))));
	}

	popStackFrame(ctx);
}

jfloat SM_arc_math_Mathf_absin_float_float_R_float(jcontext ctx, jfloat param0, jfloat param1) {
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/math/Mathf:absin", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_math_Mathf(ctx);
	frame[0].f = param0;
	frame[1].f = param1;
	{
	LINE_NUMBER(75);
	jfloat temp0 = (jfloat)SM_arc_math_Mathf_absin_float_float_float_R_float(ctx, (clinit_arc_util_Time(ctx), (jfloat)SF_arc_util_Time_time), (frame[0].f), (frame[1].f));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jfloat SM_arc_math_Mathf_absin_float_float_float_R_float(jcontext ctx, jfloat param0, jfloat param1, jfloat param2) {
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/math/Mathf:absin", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_math_Mathf(ctx);
	frame[0].f = param0;
	frame[1].f = param1;
	frame[2].f = param2;
	{
	LINE_NUMBER(79);
	jfloat temp0 = (jfloat)SM_arc_math_Mathf_sin_float_float_float_R_float(ctx, (frame[0].f), ((frame[1].f) * (jfloat(2))), (frame[2].f));
	popStackFrame(ctx);
	return ((temp0 + (frame[2].f)) / (jfloat(2)));
	}

	popStackFrame(ctx);
}

jfloat SM_arc_math_Mathf_tan_float_float_float_R_float(jcontext ctx, jfloat param0, jfloat param1, jfloat param2) {
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/math/Mathf:tan", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_math_Mathf(ctx);
	frame[0].f = param0;
	frame[1].f = param1;
	frame[2].f = param2;
	{
	LINE_NUMBER(83);
	jfloat temp0 = (jfloat)SM_arc_math_Mathf_sin_float_R_float(ctx, ((frame[0].f) / (frame[1].f)));
	jfloat temp1 = (jfloat)SM_arc_math_Mathf_cos_float_R_float(ctx, ((frame[0].f) / (frame[1].f)));
	popStackFrame(ctx);
	return ((temp0 / temp1) * (frame[2].f));
	}

	popStackFrame(ctx);
}

jfloat SM_arc_math_Mathf_sin_float_float_R_float(jcontext ctx, jfloat param0, jfloat param1) {
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/math/Mathf:sin", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_math_Mathf(ctx);
	frame[0].f = param0;
	frame[1].f = param1;
	{
	LINE_NUMBER(87);
	jfloat temp0 = (jfloat)SM_arc_math_Mathf_sin_float_R_float(ctx, ((clinit_arc_util_Time(ctx), (jfloat)SF_arc_util_Time_time) / (frame[0].f)));
	popStackFrame(ctx);
	return (temp0 * (frame[1].f));
	}

	popStackFrame(ctx);
}

jfloat SM_arc_math_Mathf_sin_float_float_float_R_float(jcontext ctx, jfloat param0, jfloat param1, jfloat param2) {
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/math/Mathf:sin", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_math_Mathf(ctx);
	frame[0].f = param0;
	frame[1].f = param1;
	frame[2].f = param2;
	{
	LINE_NUMBER(91);
	jfloat temp0 = (jfloat)SM_arc_math_Mathf_sin_float_R_float(ctx, ((frame[0].f) / (frame[1].f)));
	popStackFrame(ctx);
	return (temp0 * (frame[2].f));
	}

	popStackFrame(ctx);
}

jfloat SM_arc_math_Mathf_cos_float_float_float_R_float(jcontext ctx, jfloat param0, jfloat param1, jfloat param2) {
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/math/Mathf:cos", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_math_Mathf(ctx);
	frame[0].f = param0;
	frame[1].f = param1;
	frame[2].f = param2;
	{
	LINE_NUMBER(95);
	jfloat temp0 = (jfloat)SM_arc_math_Mathf_cos_float_R_float(ctx, ((frame[0].f) / (frame[1].f)));
	popStackFrame(ctx);
	return (temp0 * (frame[2].f));
	}

	popStackFrame(ctx);
}

jfloat SM_arc_math_Mathf_angle_float_float_R_float(jcontext ctx, jfloat param0, jfloat param1) {
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/math/Mathf:angle", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_math_Mathf(ctx);
	frame[0].f = param0;
	frame[1].f = param1;
	{
	LINE_NUMBER(99);
	jfloat temp0 = (jfloat)SM_arc_math_Mathf_atan2_float_float_R_float(ctx, (frame[0].f), (frame[1].f));
	frame[2].f = (temp0 * (jfloat(57.295776f)));
	LINE_NUMBER(100);
	if ((floatCompare((frame[2].f), (jfloat(0)), 1)) >= 0) goto label_2;
	}
	{
	frame[2].f = ((frame[2].f) + (jfloat(360.0f)));
	}
label_2:;
	{
	LINE_NUMBER(101);
	popStackFrame(ctx);
	return (frame[2].f);
	}

	popStackFrame(ctx);
}

jfloat SM_arc_math_Mathf_angleExact_float_float_R_float(jcontext ctx, jfloat param0, jfloat param1) {
	jtype frame[7];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/math/Mathf:angleExact", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_math_Mathf(ctx);
	frame[0].f = param0;
	frame[1].f = param1;
	{
	LINE_NUMBER(105);
	jdouble temp0 = (jdouble)SM_java_lang_Math_atan2_double_double_R_double(ctx, (jdouble((frame[1].f))), (jdouble((frame[0].f))));
	frame[2].f = ((jfloat(temp0)) * (jfloat(57.295776f)));
	LINE_NUMBER(106);
	if ((floatCompare((frame[2].f), (jfloat(0)), 1)) >= 0) goto label_2;
	}
	{
	frame[2].f = ((frame[2].f) + (jfloat(360.0f)));
	}
label_2:;
	{
	LINE_NUMBER(107);
	popStackFrame(ctx);
	return (frame[2].f);
	}

	popStackFrame(ctx);
}

jfloat SM_arc_math_Mathf_wrapAngleAroundZero_float_R_float(jcontext ctx, jfloat param0) {
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/math/Mathf:wrapAngleAroundZero", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_math_Mathf(ctx);
	frame[0].f = param0;
	{
	LINE_NUMBER(114);
	if ((floatCompare((frame[0].f), (jfloat(0)), -1)) < 0) goto label_1;
	}
	{
	LINE_NUMBER(115);
	frame[1].f = (fmodf((frame[0].f), (jfloat(6.2831855f))));
	LINE_NUMBER(116);
	if ((floatCompare((frame[1].f), (jfloat(3.1415927f)), -1)) <= 0) goto label_4;
	}
	{
	frame[1].f = ((frame[1].f) - (jfloat(6.2831855f)));
	}
label_4:;
	{
	LINE_NUMBER(117);
	popStackFrame(ctx);
	return (frame[1].f);
	}
label_1:;
	{
	LINE_NUMBER(119);
	frame[1].f = (fmodf((-(frame[0].f)), (jfloat(6.2831855f))));
	LINE_NUMBER(120);
	if ((floatCompare((frame[1].f), (jfloat(3.1415927f)), -1)) <= 0) goto label_6;
	}
	{
	frame[1].f = ((frame[1].f) - (jfloat(6.2831855f)));
	}
label_6:;
	{
	LINE_NUMBER(121);
	popStackFrame(ctx);
	return (-(frame[1].f));
	}

	popStackFrame(ctx);
}

jfloat SM_arc_math_Mathf_atn_double_R_float(jcontext ctx, jdouble param0) {
	jtype frame[26];
	auto stack = &frame[18];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/math/Mathf:atn", 26 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_math_Mathf(ctx);
	frame[0].d = param0;
	{
	LINE_NUMBER(131);
	jdouble temp0 = (jdouble)SM_java_lang_Math_abs_double_R_double(ctx, (frame[0].d));
	frame[2].d = temp0;
	LINE_NUMBER(133);
	frame[4].d = (((frame[2].d) - (jdouble(1))) / ((frame[2].d) + (jdouble(1))));
	LINE_NUMBER(135);
	frame[6].d = ((frame[4].d) * (frame[4].d));
	frame[8].d = ((frame[4].d) * (frame[6].d));
	frame[10].d = ((frame[8].d) * (frame[6].d));
	frame[12].d = ((frame[10].d) * (frame[6].d));
	frame[14].d = ((frame[12].d) * (frame[6].d));
	frame[16].d = ((frame[14].d) * (frame[6].d));
	LINE_NUMBER(136);
	jdouble temp1 = (jdouble)SM_java_lang_Math_copySign_double_double_R_double(ctx, ((jdouble(0.7853981633974483)) + (((((((jdouble(0.99997726)) * (frame[4].d)) - ((jdouble(0.33262347)) * (frame[8].d))) + ((jdouble(0.19354346)) * (frame[10].d))) - ((jdouble(0.11643287)) * (frame[12].d))) + ((jdouble(0.05265332)) * (frame[14].d))) - ((jdouble(0.0117212)) * (frame[16].d)))), (frame[0].d));
	popStackFrame(ctx);
	return (jfloat(temp1));
	}

	popStackFrame(ctx);
}

jfloat SM_arc_math_Mathf_atan2_float_float_R_float(jcontext ctx, jfloat param0, jfloat param1) {
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/math/Mathf:atan2", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_math_Mathf(ctx);
	frame[0].f = param0;
	frame[1].f = param1;
	{
	LINE_NUMBER(152);
	frame[2].f = ((frame[1].f) / (frame[0].f));
	LINE_NUMBER(153);
	if ((floatCompare((frame[2].f), (frame[2].f), -1)) == 0) goto label_2;
	}
	{
	LINE_NUMBER(154);
	if ((floatCompare((frame[1].f), (frame[0].f), -1)) != 0) goto label_4;
	}
	INST_FCONST(1);
	goto label_5;
label_4:;
	(sp++)->f = jfloat(-1.0f);
label_5:;
	INST_FSTORE(2);
	goto label_6;
label_2:;
	{
	LINE_NUMBER(155);
	if ((floatCompare(((frame[2].f) - (frame[2].f)), ((frame[2].f) - (frame[2].f)), -1)) == 0) goto label_6;
	}
	{
	LINE_NUMBER(156);
	frame[0].f = (jfloat(0));
	}
label_6:;
	{
	LINE_NUMBER(159);
	if ((floatCompare((frame[0].f), (jfloat(0)), -1)) <= 0) goto label_8;
	}
	{
	LINE_NUMBER(160);
	jfloat temp0 = (jfloat)SM_arc_math_Mathf_atn_double_R_float(ctx, (jdouble((frame[2].f))));
	popStackFrame(ctx);
	return temp0;
	}
label_8:;
	{
	LINE_NUMBER(161);
	if ((floatCompare((frame[0].f), (jfloat(0)), 1)) >= 0) goto label_10;
	}
	{
	LINE_NUMBER(162);
	if ((floatCompare((frame[1].f), (jfloat(0)), -1)) < 0) goto label_12;
	}
	{
	jfloat temp0 = (jfloat)SM_arc_math_Mathf_atn_double_R_float(ctx, (jdouble((frame[2].f))));
	jfloat temp1 = temp0 + (jfloat(3.1415927f));
	sp[0].f = temp1;
	sp += 1;
	goto label_13;
	}
label_12:;
	{
	jfloat temp0 = (jfloat)SM_arc_math_Mathf_atn_double_R_float(ctx, (jdouble((frame[2].f))));
	jfloat temp1 = temp0 - (jfloat(3.1415927f));
	sp[0].f = temp1;
	sp += 1;
	}
label_13:;
	popStackFrame(ctx);
	INST_FRETURN();
label_10:;
	{
	LINE_NUMBER(163);
	if ((floatCompare((frame[1].f), (jfloat(0)), -1)) <= 0) goto label_14;
	}
	{
	LINE_NUMBER(164);
	popStackFrame(ctx);
	return ((frame[0].f) + (jfloat(1.5707964f)));
	}
label_14:;
	{
	LINE_NUMBER(165);
	if ((floatCompare((frame[1].f), (jfloat(0)), 1)) >= 0) goto label_16;
	}
	{
	LINE_NUMBER(166);
	popStackFrame(ctx);
	return ((frame[0].f) - (jfloat(1.5707964f)));
	}
label_16:;
	{
	LINE_NUMBER(168);
	popStackFrame(ctx);
	return ((frame[0].f) + (frame[1].f));
	}

	popStackFrame(ctx);
}

jint SM_arc_math_Mathf_digits_int_R_int(jcontext ctx, jint param0) {
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/math/Mathf:digits", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_math_Mathf(ctx);
	frame[0].i = param0;
	{
	LINE_NUMBER(173);
	if ((frame[0].i) >= (jint(100000))) goto label_1;
	}
	{
	if ((frame[0].i) >= (100)) goto label_2;
	}
	{
	if ((frame[0].i) >= (10)) goto label_3;
	}
	INST_ICONST(1);
	goto label_4;
label_3:;
	INST_ICONST(2);
	goto label_4;
label_2:;
	{
	if ((frame[0].i) >= (1000)) goto label_5;
	}
	INST_ICONST(3);
	goto label_4;
label_5:;
	{
	if ((frame[0].i) >= (10000)) goto label_6;
	}
	INST_ICONST(4);
	goto label_4;
label_6:;
	INST_ICONST(5);
	goto label_4;
label_1:;
	{
	if ((frame[0].i) >= (jint(10000000))) goto label_7;
	}
	{
	if ((frame[0].i) >= (jint(1000000))) goto label_8;
	}
	INST_BIPUSH(6);
	goto label_4;
label_8:;
	INST_BIPUSH(7);
	goto label_4;
label_7:;
	{
	if ((frame[0].i) >= (jint(100000000))) goto label_9;
	}
	INST_BIPUSH(8);
	goto label_4;
label_9:;
	{
	if ((frame[0].i) >= (jint(1000000000))) goto label_10;
	}
	INST_BIPUSH(9);
	goto label_4;
label_10:;
	INST_BIPUSH(10);
label_4:;
	popStackFrame(ctx);
	INST_IRETURN();

	popStackFrame(ctx);
}

jint SM_arc_math_Mathf_digits_long_R_int(jcontext ctx, jlong param0) {
	jtype frame[6];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/math/Mathf:digits", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_math_Mathf(ctx);
	frame[0].l = param0;
	{
	LINE_NUMBER(177);
	if ((longCompare((frame[0].l), (jlong(0)))) != 0) goto label_1;
	}
	INST_ICONST(1);
	goto label_2;
label_1:;
	{
	jdouble temp0 = (jdouble)SM_java_lang_Math_log10_double_R_double(ctx, (jdouble((frame[0].l))));
	jint temp1 = jint((temp0 + (jdouble(1))));
	sp[0].i = temp1;
	sp += 1;
	}
label_2:;
	popStackFrame(ctx);
	INST_IRETURN();

	popStackFrame(ctx);
}

jfloat SM_arc_math_Mathf_sqrt_float_R_float(jcontext ctx, jfloat param0) {
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/math/Mathf:sqrt", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_math_Mathf(ctx);
	frame[0].f = param0;
	{
	LINE_NUMBER(181);
	jdouble temp0 = (jdouble)SM_java_lang_Math_sqrt_double_R_double(ctx, (jdouble((frame[0].f))));
	popStackFrame(ctx);
	return (jfloat(temp0));
	}

	popStackFrame(ctx);
}

jfloat SM_arc_math_Mathf_sqr_float_R_float(jcontext ctx, jfloat param0) {
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/math/Mathf:sqr", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_math_Mathf(ctx);
	frame[0].f = param0;
	{
	LINE_NUMBER(185);
	popStackFrame(ctx);
	return ((frame[0].f) * (frame[0].f));
	}

	popStackFrame(ctx);
}

jfloat SM_arc_math_Mathf_map_float_float_float_float_float_R_float(jcontext ctx, jfloat param0, jfloat param1, jfloat param2, jfloat param3, jfloat param4) {
	jtype frame[9];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/math/Mathf:map", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_math_Mathf(ctx);
	frame[0].f = param0;
	frame[1].f = param1;
	frame[2].f = param2;
	frame[3].f = param3;
	frame[4].f = param4;
	{
	LINE_NUMBER(189);
	popStackFrame(ctx);
	return ((frame[3].f) + ((((frame[0].f) - (frame[1].f)) * ((frame[4].f) - (frame[3].f))) / ((frame[2].f) - (frame[1].f))));
	}

	popStackFrame(ctx);
}

jfloat SM_arc_math_Mathf_map_float_float_float_R_float(jcontext ctx, jfloat param0, jfloat param1, jfloat param2) {
	jtype frame[8];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/math/Mathf:map", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_math_Mathf(ctx);
	frame[0].f = param0;
	frame[1].f = param1;
	frame[2].f = param2;
	{
	LINE_NUMBER(194);
	jfloat temp0 = (jfloat)SM_arc_math_Mathf_map_float_float_float_float_float_R_float(ctx, (frame[0].f), (jfloat(0)), (jfloat(1)), (frame[1].f), (frame[2].f));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jint SM_arc_math_Mathf_sign_float_R_int(jcontext ctx, jfloat param0) {
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/math/Mathf:sign", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_math_Mathf(ctx);
	frame[0].f = param0;
	{
	LINE_NUMBER(199);
	if ((floatCompare((frame[0].f), (jfloat(0)), 1)) >= 0) goto label_1;
	}
	INST_ICONST(-1);
	goto label_2;
label_1:;
	INST_ICONST(1);
label_2:;
	popStackFrame(ctx);
	INST_IRETURN();

	popStackFrame(ctx);
}

jint SM_arc_math_Mathf_sign_boolean_R_int(jcontext ctx, jbool param0) {
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/math/Mathf:sign", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_math_Mathf(ctx);
	frame[0].i = param0;
	{
	LINE_NUMBER(204);
	if ((frame[0].i) == 0) goto label_1;
	}
	INST_ICONST(1);
	goto label_2;
label_1:;
	INST_ICONST(-1);
label_2:;
	popStackFrame(ctx);
	INST_IRETURN();

	popStackFrame(ctx);
}

jint SM_arc_math_Mathf_num_boolean_R_int(jcontext ctx, jbool param0) {
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/math/Mathf:num", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_math_Mathf(ctx);
	frame[0].i = param0;
	{
	LINE_NUMBER(209);
	if ((frame[0].i) == 0) goto label_1;
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

jfloat SM_arc_math_Mathf_pow_float_float_R_float(jcontext ctx, jfloat param0, jfloat param1) {
	jtype frame[6];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/math/Mathf:pow", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_math_Mathf(ctx);
	frame[0].f = param0;
	frame[1].f = param1;
	{
	LINE_NUMBER(213);
	jdouble temp0 = (jdouble)SM_java_lang_Math_pow_double_double_R_double(ctx, (jdouble((frame[0].f))), (jdouble((frame[1].f))));
	popStackFrame(ctx);
	return (jfloat(temp0));
	}

	popStackFrame(ctx);
}

jint SM_arc_math_Mathf_pow_int_int_R_int(jcontext ctx, jint param0, jint param1) {
	jtype frame[6];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/math/Mathf:pow", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_math_Mathf(ctx);
	frame[0].i = param0;
	frame[1].i = param1;
	{
	LINE_NUMBER(217);
	jdouble temp0 = (jdouble)SM_java_lang_Math_pow_double_double_R_double(ctx, (jdouble((frame[0].i))), (jdouble((frame[1].i))));
	jdouble temp1 = (jdouble)SM_java_lang_Math_ceil_double_R_double(ctx, temp0);
	popStackFrame(ctx);
	return (jint(temp1));
	}

	popStackFrame(ctx);
}

jfloat SM_arc_math_Mathf_range_float_R_float(jcontext ctx, jfloat param0) {
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/math/Mathf:range", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_math_Mathf(ctx);
	frame[0].f = param0;
	{
	LINE_NUMBER(221);
	jfloat temp0 = (jfloat)SM_arc_math_Mathf_random_float_float_R_float(ctx, (-(frame[0].f)), (frame[0].f));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jint SM_arc_math_Mathf_range_int_R_int(jcontext ctx, jint param0) {
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/math/Mathf:range", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_math_Mathf(ctx);
	frame[0].i = param0;
	{
	LINE_NUMBER(225);
	jint temp0 = (jint)SM_arc_math_Mathf_random_int_int_R_int(ctx, (-(frame[0].i)), (frame[0].i));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jfloat SM_arc_math_Mathf_range_float_float_R_float(jcontext ctx, jfloat param0, jfloat param1) {
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/math/Mathf:range", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_math_Mathf(ctx);
	frame[0].f = param0;
	frame[1].f = param1;
	{
	LINE_NUMBER(229);
	jint temp0 = (jint)SM_arc_math_Mathf_chance_double_R_boolean(ctx, (jdouble(0.5)));
	if (temp0 == 0) goto label_1;
	}
	{
	LINE_NUMBER(230);
	jfloat temp0 = (jfloat)SM_arc_math_Mathf_random_float_float_R_float(ctx, (frame[0].f), (frame[1].f));
	popStackFrame(ctx);
	return temp0;
	}
label_1:;
	{
	LINE_NUMBER(232);
	jfloat temp0 = (jfloat)SM_arc_math_Mathf_random_float_float_R_float(ctx, (frame[0].f), (frame[1].f));
	popStackFrame(ctx);
	return (-temp0);
	}

	popStackFrame(ctx);
}

jbool SM_arc_math_Mathf_chanceDelta_double_R_boolean(jcontext ctx, jdouble param0) {
	jtype frame[8];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/math/Mathf:chanceDelta", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_math_Mathf(ctx);
	frame[0].d = param0;
	{
	LINE_NUMBER(237);
	clinit_arc_math_Mathf(ctx);
	sp[0].o = (jobject)SF_arc_math_Mathf_rand;
	jfloat temp0 = (jfloat)((func_arc_math_Rand_nextFloat_R_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_Rand_nextFloat_R_float])(ctx, sp[0].o);
	if ((doubleCompare((jdouble(temp0)), ((frame[0].d) * (jdouble((clinit_arc_util_Time(ctx), (jfloat)SF_arc_util_Time_delta)))), 1)) >= 0) goto label_1;
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

jbool SM_arc_math_Mathf_chance_double_R_boolean(jcontext ctx, jdouble param0) {
	jtype frame[6];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/math/Mathf:chance", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_math_Mathf(ctx);
	frame[0].d = param0;
	{
	LINE_NUMBER(241);
	if ((doubleCompare((frame[0].d), (jdouble(1)), -1)) >= 0) goto label_1;
	}
	{
	clinit_arc_math_Mathf(ctx);
	sp[0].o = (jobject)SF_arc_math_Mathf_rand;
	jfloat temp0 = (jfloat)((func_arc_math_Rand_nextFloat_R_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_Rand_nextFloat_R_float])(ctx, sp[0].o);
	if ((doubleCompare((jdouble(temp0)), (frame[0].d), 1)) >= 0) goto label_2;
	}
label_1:;
	INST_ICONST(1);
	goto label_3;
label_2:;
	INST_ICONST(0);
label_3:;
	popStackFrame(ctx);
	INST_IRETURN();

	popStackFrame(ctx);
}

jint SM_arc_math_Mathf_random_int_R_int(jcontext ctx, jint param0) {
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/math/Mathf:random", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_math_Mathf(ctx);
	frame[0].i = param0;
	{
	LINE_NUMBER(246);
	clinit_arc_math_Mathf(ctx);
	sp[0].o = (jobject)SF_arc_math_Mathf_rand;
	jint temp0 = (jint)((func_arc_math_Rand_nextInt_int_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_Rand_nextInt_int_R_int])(ctx, sp[0].o, ((frame[0].i) + (jint(1))));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jint SM_arc_math_Mathf_random_int_int_R_int(jcontext ctx, jint param0, jint param1) {
	jtype frame[6];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/math/Mathf:random", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_math_Mathf(ctx);
	frame[0].i = param0;
	frame[1].i = param1;
	{
	LINE_NUMBER(251);
	jint temp0 = frame[0].i;
	clinit_arc_math_Mathf(ctx);
	sp[0].o = (jobject)SF_arc_math_Mathf_rand;
	jint temp1 = (jint)((func_arc_math_Rand_nextInt_int_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_Rand_nextInt_int_R_int])(ctx, sp[0].o, (((frame[1].i) - (frame[0].i)) + (jint(1))));
	popStackFrame(ctx);
	return (temp0 + temp1);
	}

	popStackFrame(ctx);
}

jlong SM_arc_math_Mathf_random_long_R_long(jcontext ctx, jlong param0) {
	jtype frame[6];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/math/Mathf:random", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_math_Mathf(ctx);
	frame[0].l = param0;
	{
	LINE_NUMBER(256);
	clinit_arc_math_Mathf(ctx);
	sp[0].o = (jobject)SF_arc_math_Mathf_rand;
	jdouble temp0 = (jdouble)((func_arc_math_Rand_nextDouble_R_double) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_Rand_nextDouble_R_double])(ctx, sp[0].o);
	popStackFrame(ctx);
	return (jlong((temp0 * (jdouble((frame[0].l))))));
	}

	popStackFrame(ctx);
}

jlong SM_arc_math_Mathf_random_long_long_R_long(jcontext ctx, jlong param0, jlong param1) {
	jtype frame[12];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/math/Mathf:random", 12 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_math_Mathf(ctx);
	frame[0].l = param0;
	frame[2].l = param1;
	{
	LINE_NUMBER(261);
	jlong temp0 = frame[0].l;
	clinit_arc_math_Mathf(ctx);
	sp[0].o = (jobject)SF_arc_math_Mathf_rand;
	jdouble temp1 = (jdouble)((func_arc_math_Rand_nextDouble_R_double) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_Rand_nextDouble_R_double])(ctx, sp[0].o);
	popStackFrame(ctx);
	return (temp0 + (jlong((temp1 * (jdouble(((frame[2].l) - (frame[0].l))))))));
	}

	popStackFrame(ctx);
}

jbool SM_arc_math_Mathf_randomBoolean_R_boolean(jcontext ctx) {
	jtype frame[1];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/math/Mathf:randomBoolean", 1 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_math_Mathf(ctx);
	{
	LINE_NUMBER(266);
	clinit_arc_math_Mathf(ctx);
	sp[0].o = (jobject)SF_arc_math_Mathf_rand;
	jint temp0 = (jint)((func_arc_math_Rand_nextBoolean_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_Rand_nextBoolean_R_boolean])(ctx, sp[0].o);
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jbool SM_arc_math_Mathf_randomBoolean_float_R_boolean(jcontext ctx, jfloat param0) {
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/math/Mathf:randomBoolean", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_math_Mathf(ctx);
	frame[0].f = param0;
	{
	LINE_NUMBER(271);
	jfloat temp0 = (jfloat)SM_arc_math_Mathf_random_R_float(ctx);
	if ((floatCompare(temp0, (frame[0].f), 1)) >= 0) goto label_1;
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

jfloat SM_arc_math_Mathf_random_R_float(jcontext ctx) {
	jtype frame[1];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/math/Mathf:random", 1 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_math_Mathf(ctx);
	{
	LINE_NUMBER(276);
	clinit_arc_math_Mathf(ctx);
	sp[0].o = (jobject)SF_arc_math_Mathf_rand;
	jfloat temp0 = (jfloat)((func_arc_math_Rand_nextFloat_R_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_Rand_nextFloat_R_float])(ctx, sp[0].o);
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jfloat SM_arc_math_Mathf_random_float_R_float(jcontext ctx, jfloat param0) {
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/math/Mathf:random", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_math_Mathf(ctx);
	frame[0].f = param0;
	{
	LINE_NUMBER(281);
	clinit_arc_math_Mathf(ctx);
	sp[0].o = (jobject)SF_arc_math_Mathf_rand;
	jfloat temp0 = (jfloat)((func_arc_math_Rand_nextFloat_R_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_Rand_nextFloat_R_float])(ctx, sp[0].o);
	popStackFrame(ctx);
	return (temp0 * (frame[0].f));
	}

	popStackFrame(ctx);
}

jfloat SM_arc_math_Mathf_random_float_float_R_float(jcontext ctx, jfloat param0, jfloat param1) {
	jtype frame[6];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/math/Mathf:random", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_math_Mathf(ctx);
	frame[0].f = param0;
	frame[1].f = param1;
	{
	LINE_NUMBER(286);
	jfloat temp0 = frame[0].f;
	clinit_arc_math_Mathf(ctx);
	sp[0].o = (jobject)SF_arc_math_Mathf_rand;
	jfloat temp1 = (jfloat)((func_arc_math_Rand_nextFloat_R_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_Rand_nextFloat_R_float])(ctx, sp[0].o);
	popStackFrame(ctx);
	return (temp0 + (temp1 * ((frame[1].f) - (frame[0].f))));
	}

	popStackFrame(ctx);
}

jint SM_arc_math_Mathf_randomSign_R_int(jcontext ctx) {
	jtype frame[3];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/math/Mathf:randomSign", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_math_Mathf(ctx);
	{
	LINE_NUMBER(291);
	jint temp0 = jint(1);
	clinit_arc_math_Mathf(ctx);
	sp[0].o = (jobject)SF_arc_math_Mathf_rand;
	jint temp1 = (jint)((func_arc_math_Rand_nextInt_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_Rand_nextInt_R_int])(ctx, sp[0].o);
	popStackFrame(ctx);
	return (temp0 | (temp1 >> (31)));
	}

	popStackFrame(ctx);
}

jint SM_arc_math_Mathf_randomSeed_long_int_int_R_int(jcontext ctx, jlong param0, jint param1, jint param2) {
	jtype frame[7];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/math/Mathf:randomSeed", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_math_Mathf(ctx);
	frame[0].l = param0;
	frame[2].i = param1;
	frame[3].i = param2;
	{
	LINE_NUMBER(298);
	clinit_arc_math_Mathf(ctx);
	sp[0].o = (jobject)SF_arc_math_Mathf_seedr;
	((func_arc_math_Rand_setSeed_long) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_Rand_setSeed_long])(ctx, sp[0].o, (frame[0].l));
	LINE_NUMBER(299);
	jint temp0 = (jint)SM_arc_math_Mathf_isPowerOfTwo_int_R_boolean(ctx, (frame[3].i));
	if (temp0 == 0) goto label_2;
	}
	{
	LINE_NUMBER(300);
	clinit_arc_math_Mathf(ctx);
	sp[0].o = (jobject)SF_arc_math_Mathf_seedr;
	jint temp0 = (jint)((func_arc_math_Rand_nextInt_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_Rand_nextInt_R_int])(ctx, sp[0].o);
	}
label_2:;
	{
	LINE_NUMBER(302);
	clinit_arc_math_Mathf(ctx);
	sp[0].o = (jobject)SF_arc_math_Mathf_seedr;
	jint temp0 = (jint)((func_arc_math_Rand_nextInt_int_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_Rand_nextInt_int_R_int])(ctx, sp[0].o, (((frame[3].i) - (frame[2].i)) + (jint(1))));
	popStackFrame(ctx);
	return (temp0 + (frame[2].i));
	}

	popStackFrame(ctx);
}

jfloat SM_arc_math_Mathf_randomSeed_long_float_float_R_float(jcontext ctx, jlong param0, jfloat param1, jfloat param2) {
	jtype frame[8];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/math/Mathf:randomSeed", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_math_Mathf(ctx);
	frame[0].l = param0;
	frame[2].f = param1;
	frame[3].f = param2;
	{
	LINE_NUMBER(307);
	clinit_arc_math_Mathf(ctx);
	sp[0].o = (jobject)SF_arc_math_Mathf_seedr;
	((func_arc_math_Rand_setSeed_long) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_Rand_setSeed_long])(ctx, sp[0].o, (frame[0].l));
	LINE_NUMBER(308);
	jfloat temp0 = frame[2].f;
	clinit_arc_math_Mathf(ctx);
	sp[0].o = (jobject)SF_arc_math_Mathf_seedr;
	jfloat temp1 = (jfloat)((func_arc_math_Rand_nextFloat_R_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_Rand_nextFloat_R_float])(ctx, sp[0].o);
	popStackFrame(ctx);
	return (temp0 + (temp1 * ((frame[3].f) - (frame[2].f))));
	}

	popStackFrame(ctx);
}

jfloat SM_arc_math_Mathf_randomSeed_long_R_float(jcontext ctx, jlong param0) {
	jtype frame[7];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/math/Mathf:randomSeed", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_math_Mathf(ctx);
	frame[0].l = param0;
	{
	LINE_NUMBER(312);
	clinit_arc_math_Mathf(ctx);
	sp[0].o = (jobject)SF_arc_math_Mathf_seedr;
	((func_arc_math_Rand_setSeed_long) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_Rand_setSeed_long])(ctx, sp[0].o, ((frame[0].l) * (jlong(99999ll))));
	LINE_NUMBER(313);
	clinit_arc_math_Mathf(ctx);
	sp[0].o = (jobject)SF_arc_math_Mathf_seedr;
	jfloat temp0 = (jfloat)((func_arc_math_Rand_nextFloat_R_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_Rand_nextFloat_R_float])(ctx, sp[0].o);
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jfloat SM_arc_math_Mathf_randomSeed_long_float_R_float(jcontext ctx, jlong param0, jfloat param1) {
	jtype frame[8];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/math/Mathf:randomSeed", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_math_Mathf(ctx);
	frame[0].l = param0;
	frame[2].f = param1;
	{
	LINE_NUMBER(317);
	clinit_arc_math_Mathf(ctx);
	sp[0].o = (jobject)SF_arc_math_Mathf_seedr;
	((func_arc_math_Rand_setSeed_long) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_Rand_setSeed_long])(ctx, sp[0].o, ((frame[0].l) * (jlong(99999ll))));
	LINE_NUMBER(318);
	clinit_arc_math_Mathf(ctx);
	sp[0].o = (jobject)SF_arc_math_Mathf_seedr;
	jfloat temp0 = (jfloat)((func_arc_math_Rand_nextFloat_R_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_Rand_nextFloat_R_float])(ctx, sp[0].o);
	popStackFrame(ctx);
	return (temp0 * (frame[2].f));
	}

	popStackFrame(ctx);
}

jfloat SM_arc_math_Mathf_randomSeedRange_long_float_R_float(jcontext ctx, jlong param0, jfloat param1) {
	jtype frame[8];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/math/Mathf:randomSeedRange", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_math_Mathf(ctx);
	frame[0].l = param0;
	frame[2].f = param1;
	{
	LINE_NUMBER(322);
	clinit_arc_math_Mathf(ctx);
	sp[0].o = (jobject)SF_arc_math_Mathf_seedr;
	((func_arc_math_Rand_setSeed_long) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_Rand_setSeed_long])(ctx, sp[0].o, ((frame[0].l) * (jlong(99999ll))));
	LINE_NUMBER(323);
	jfloat temp0 = frame[2].f;
	clinit_arc_math_Mathf(ctx);
	sp[0].o = (jobject)SF_arc_math_Mathf_seedr;
	jfloat temp1 = (jfloat)((func_arc_math_Rand_nextFloat_R_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_Rand_nextFloat_R_float])(ctx, sp[0].o);
	popStackFrame(ctx);
	return ((temp0 * (temp1 - (jfloat(0.5f)))) * (jfloat(2)));
	}

	popStackFrame(ctx);
}

jfloat SM_arc_math_Mathf_randomTriangular_R_float(jcontext ctx) {
	jtype frame[2];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/math/Mathf:randomTriangular", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_math_Mathf(ctx);
	{
	LINE_NUMBER(333);
	clinit_arc_math_Mathf(ctx);
	sp[0].o = (jobject)SF_arc_math_Mathf_rand;
	jfloat temp0 = (jfloat)((func_arc_math_Rand_nextFloat_R_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_Rand_nextFloat_R_float])(ctx, sp[0].o);
	clinit_arc_math_Mathf(ctx);
	sp[0].o = (jobject)SF_arc_math_Mathf_rand;
	jfloat temp1 = (jfloat)((func_arc_math_Rand_nextFloat_R_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_Rand_nextFloat_R_float])(ctx, sp[0].o);
	popStackFrame(ctx);
	return (temp0 - temp1);
	}

	popStackFrame(ctx);
}

jfloat SM_arc_math_Mathf_randomTriangular_float_R_float(jcontext ctx, jfloat param0) {
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/math/Mathf:randomTriangular", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_math_Mathf(ctx);
	frame[0].f = param0;
	{
	LINE_NUMBER(344);
	clinit_arc_math_Mathf(ctx);
	sp[0].o = (jobject)SF_arc_math_Mathf_rand;
	jfloat temp0 = (jfloat)((func_arc_math_Rand_nextFloat_R_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_Rand_nextFloat_R_float])(ctx, sp[0].o);
	clinit_arc_math_Mathf(ctx);
	sp[0].o = (jobject)SF_arc_math_Mathf_rand;
	jfloat temp1 = (jfloat)((func_arc_math_Rand_nextFloat_R_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_Rand_nextFloat_R_float])(ctx, sp[0].o);
	popStackFrame(ctx);
	return ((temp0 - temp1) * (frame[0].f));
	}

	popStackFrame(ctx);
}

jfloat SM_arc_math_Mathf_randomTriangular_float_float_R_float(jcontext ctx, jfloat param0, jfloat param1) {
	jtype frame[6];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/math/Mathf:randomTriangular", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_math_Mathf(ctx);
	frame[0].f = param0;
	frame[1].f = param1;
	{
	LINE_NUMBER(356);
	jfloat temp0 = (jfloat)SM_arc_math_Mathf_randomTriangular_float_float_float_R_float(ctx, (frame[0].f), (frame[1].f), (((frame[0].f) + (frame[1].f)) * (jfloat(0.5f))));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jfloat SM_arc_math_Mathf_randomTriangular_float_float_float_R_float(jcontext ctx, jfloat param0, jfloat param1, jfloat param2) {
	jtype frame[9];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/math/Mathf:randomTriangular", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_math_Mathf(ctx);
	frame[0].f = param0;
	frame[1].f = param1;
	frame[2].f = param2;
	{
	LINE_NUMBER(367);
	clinit_arc_math_Mathf(ctx);
	sp[0].o = (jobject)SF_arc_math_Mathf_rand;
	jfloat temp0 = (jfloat)((func_arc_math_Rand_nextFloat_R_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_Rand_nextFloat_R_float])(ctx, sp[0].o);
	frame[3].f = temp0;
	LINE_NUMBER(368);
	frame[4].f = ((frame[1].f) - (frame[0].f));
	LINE_NUMBER(369);
	if ((floatCompare((frame[3].f), (((frame[2].f) - (frame[0].f)) / (frame[4].f)), 1)) > 0) goto label_3;
	}
	{
	jfloat temp0 = frame[0].f;
	jdouble temp1 = (jdouble)SM_java_lang_Math_sqrt_double_R_double(ctx, (jdouble((((frame[3].f) * (frame[4].f)) * ((frame[2].f) - (frame[0].f))))));
	popStackFrame(ctx);
	return (temp0 + (jfloat(temp1)));
	}
label_3:;
	{
	LINE_NUMBER(370);
	jfloat temp0 = frame[1].f;
	jdouble temp1 = (jdouble)SM_java_lang_Math_sqrt_double_R_double(ctx, (jdouble(((((jfloat(1)) - (frame[3].f)) * (frame[4].f)) * ((frame[1].f) - (frame[2].f))))));
	popStackFrame(ctx);
	return (temp0 - (jfloat(temp1)));
	}

	popStackFrame(ctx);
}

jint SM_arc_math_Mathf_nextPowerOfTwo_int_R_int(jcontext ctx, jint param0) {
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/math/Mathf:nextPowerOfTwo", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_math_Mathf(ctx);
	frame[0].i = param0;
	{
	LINE_NUMBER(375);
	if ((frame[0].i) != 0) goto label_1;
	}
	INST_ICONST(1);
	popStackFrame(ctx);
	INST_IRETURN();
label_1:;
	{
	LINE_NUMBER(376);
	INST_IINC(0, -1);
	LINE_NUMBER(377);
	frame[0].i = ((frame[0].i) | ((frame[0].i) >> (jint(1))));
	LINE_NUMBER(378);
	frame[0].i = ((frame[0].i) | ((frame[0].i) >> (jint(2))));
	LINE_NUMBER(379);
	frame[0].i = ((frame[0].i) | ((frame[0].i) >> (jint(4))));
	LINE_NUMBER(380);
	frame[0].i = ((frame[0].i) | ((frame[0].i) >> (8)));
	LINE_NUMBER(381);
	frame[0].i = ((frame[0].i) | ((frame[0].i) >> (16)));
	LINE_NUMBER(382);
	popStackFrame(ctx);
	return ((frame[0].i) + (jint(1)));
	}

	popStackFrame(ctx);
}

jbool SM_arc_math_Mathf_isPowerOfTwo_int_R_boolean(jcontext ctx, jint param0) {
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/math/Mathf:isPowerOfTwo", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_math_Mathf(ctx);
	frame[0].i = param0;
	{
	LINE_NUMBER(386);
	if ((frame[0].i) == 0) goto label_1;
	}
	{
	if (((frame[0].i) & ((frame[0].i) - (jint(1)))) != 0) goto label_1;
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

jint SM_arc_math_Mathf_clamp_int_int_int_R_int(jcontext ctx, jint param0, jint param1, jint param2) {
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/math/Mathf:clamp", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_math_Mathf(ctx);
	frame[0].i = param0;
	frame[1].i = param1;
	frame[2].i = param2;
	{
	LINE_NUMBER(390);
	jint temp0 = (jint)SM_java_lang_Math_min_int_int_R_int(ctx, (frame[0].i), (frame[2].i));
	jint temp1 = (jint)SM_java_lang_Math_max_int_int_R_int(ctx, temp0, (frame[1].i));
	popStackFrame(ctx);
	return temp1;
	}

	popStackFrame(ctx);
}

jlong SM_arc_math_Mathf_clamp_long_long_long_R_long(jcontext ctx, jlong param0, jlong param1, jlong param2) {
	jtype frame[10];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/math/Mathf:clamp", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_math_Mathf(ctx);
	frame[0].l = param0;
	frame[2].l = param1;
	frame[4].l = param2;
	{
	LINE_NUMBER(394);
	jlong temp0 = (jlong)SM_java_lang_Math_min_long_long_R_long(ctx, (frame[0].l), (frame[4].l));
	jlong temp1 = (jlong)SM_java_lang_Math_max_long_long_R_long(ctx, temp0, (frame[2].l));
	popStackFrame(ctx);
	return temp1;
	}

	popStackFrame(ctx);
}

jfloat SM_arc_math_Mathf_clamp_float_float_float_R_float(jcontext ctx, jfloat param0, jfloat param1, jfloat param2) {
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/math/Mathf:clamp", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_math_Mathf(ctx);
	frame[0].f = param0;
	frame[1].f = param1;
	frame[2].f = param2;
	{
	LINE_NUMBER(398);
	jfloat temp0 = (jfloat)SM_java_lang_Math_min_float_float_R_float(ctx, (frame[0].f), (frame[2].f));
	jfloat temp1 = (jfloat)SM_java_lang_Math_max_float_float_R_float(ctx, temp0, (frame[1].f));
	popStackFrame(ctx);
	return temp1;
	}

	popStackFrame(ctx);
}

jfloat SM_arc_math_Mathf_clamp_float_R_float(jcontext ctx, jfloat param0) {
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/math/Mathf:clamp", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_math_Mathf(ctx);
	frame[0].f = param0;
	{
	LINE_NUMBER(403);
	jfloat temp0 = (jfloat)SM_java_lang_Math_min_float_float_R_float(ctx, (frame[0].f), (jfloat(1)));
	jfloat temp1 = (jfloat)SM_java_lang_Math_max_float_float_R_float(ctx, temp0, (jfloat(0)));
	popStackFrame(ctx);
	return temp1;
	}

	popStackFrame(ctx);
}

jdouble SM_arc_math_Mathf_clamp_double_double_double_R_double(jcontext ctx, jdouble param0, jdouble param1, jdouble param2) {
	jtype frame[10];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/math/Mathf:clamp", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_math_Mathf(ctx);
	frame[0].d = param0;
	frame[2].d = param1;
	frame[4].d = param2;
	{
	LINE_NUMBER(407);
	jdouble temp0 = (jdouble)SM_java_lang_Math_min_double_double_R_double(ctx, (frame[0].d), (frame[4].d));
	jdouble temp1 = (jdouble)SM_java_lang_Math_max_double_double_R_double(ctx, temp0, (frame[2].d));
	popStackFrame(ctx);
	return temp1;
	}

	popStackFrame(ctx);
}

jfloat SM_arc_math_Mathf_maxZero_float_R_float(jcontext ctx, jfloat param0) {
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/math/Mathf:maxZero", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_math_Mathf(ctx);
	frame[0].f = param0;
	{
	LINE_NUMBER(411);
	jfloat temp0 = (jfloat)SM_java_lang_Math_max_float_float_R_float(ctx, (frame[0].f), (jfloat(0)));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jfloat SM_arc_math_Mathf_approach_float_float_float_R_float(jcontext ctx, jfloat param0, jfloat param1, jfloat param2) {
	jtype frame[7];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/math/Mathf:approach", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_math_Mathf(ctx);
	frame[0].f = param0;
	frame[1].f = param1;
	frame[2].f = param2;
	{
	LINE_NUMBER(416);
	jfloat temp0 = frame[0].f;
	jfloat temp1 = (jfloat)SM_arc_math_Mathf_clamp_float_float_float_R_float(ctx, ((frame[1].f) - (frame[0].f)), (-(frame[2].f)), (frame[2].f));
	popStackFrame(ctx);
	return (temp0 + temp1);
	}

	popStackFrame(ctx);
}

jfloat SM_arc_math_Mathf_approachDelta_float_float_float_R_float(jcontext ctx, jfloat param0, jfloat param1, jfloat param2) {
	jtype frame[7];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/math/Mathf:approachDelta", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_math_Mathf(ctx);
	frame[0].f = param0;
	frame[1].f = param1;
	frame[2].f = param2;
	{
	LINE_NUMBER(421);
	jfloat temp0 = (jfloat)SM_arc_math_Mathf_approach_float_float_float_R_float(ctx, (frame[0].f), (frame[1].f), ((clinit_arc_util_Time(ctx), (jfloat)SF_arc_util_Time_delta) * (frame[2].f)));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jfloat SM_arc_math_Mathf_lerp_float_float_float_R_float(jcontext ctx, jfloat param0, jfloat param1, jfloat param2) {
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/math/Mathf:lerp", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_math_Mathf(ctx);
	frame[0].f = param0;
	frame[1].f = param1;
	frame[2].f = param2;
	{
	LINE_NUMBER(426);
	popStackFrame(ctx);
	return ((frame[0].f) + (((frame[1].f) - (frame[0].f)) * (frame[2].f)));
	}

	popStackFrame(ctx);
}

jfloat SM_arc_math_Mathf_lerpDelta_float_float_float_R_float(jcontext ctx, jfloat param0, jfloat param1, jfloat param2) {
	jtype frame[7];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/math/Mathf:lerpDelta", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_math_Mathf(ctx);
	frame[0].f = param0;
	frame[1].f = param1;
	frame[2].f = param2;
	{
	LINE_NUMBER(431);
	jfloat temp0 = frame[0].f;
	jfloat temp1 = frame[1].f;
	jfloat temp2 = (jfloat)SM_arc_math_Mathf_clamp_float_R_float(ctx, ((frame[2].f) * (clinit_arc_util_Time(ctx), (jfloat)SF_arc_util_Time_delta)));
	jfloat temp3 = (jfloat)SM_arc_math_Mathf_lerp_float_float_float_R_float(ctx, temp0, temp1, temp2);
	popStackFrame(ctx);
	return temp3;
	}

	popStackFrame(ctx);
}

jfloat SM_arc_math_Mathf_slerpRad_float_float_float_R_float(jcontext ctx, jfloat param0, jfloat param1, jfloat param2) {
	jtype frame[7];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/math/Mathf:slerpRad", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_math_Mathf(ctx);
	frame[0].f = param0;
	frame[1].f = param1;
	frame[2].f = param2;
	{
	LINE_NUMBER(443);
	frame[3].f = ((fmodf(((((frame[1].f) - (frame[0].f)) + (jfloat(6.2831855f))) + (jfloat(3.1415927f))), (jfloat(6.2831855f)))) - (jfloat(3.1415927f)));
	LINE_NUMBER(444);
	popStackFrame(ctx);
	return (fmodf((((frame[0].f) + ((frame[3].f) * (frame[2].f))) + (jfloat(6.2831855f))), (jfloat(6.2831855f))));
	}

	popStackFrame(ctx);
}

jfloat SM_arc_math_Mathf_slerp_float_float_float_R_float(jcontext ctx, jfloat param0, jfloat param1, jfloat param2) {
	jtype frame[7];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/math/Mathf:slerp", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_math_Mathf(ctx);
	frame[0].f = param0;
	frame[1].f = param1;
	frame[2].f = param2;
	{
	LINE_NUMBER(456);
	frame[3].f = ((fmodf(((((frame[1].f) - (frame[0].f)) + (jfloat(360.0f))) + (jfloat(180.0f))), (jfloat(360.0f)))) - (jfloat(180.0f)));
	LINE_NUMBER(457);
	popStackFrame(ctx);
	return (fmodf((((frame[0].f) + ((frame[3].f) * (frame[2].f))) + (jfloat(360.0f))), (jfloat(360.0f))));
	}

	popStackFrame(ctx);
}

jfloat SM_arc_math_Mathf_slerpDelta_float_float_float_R_float(jcontext ctx, jfloat param0, jfloat param1, jfloat param2) {
	jtype frame[7];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/math/Mathf:slerpDelta", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_math_Mathf(ctx);
	frame[0].f = param0;
	frame[1].f = param1;
	frame[2].f = param2;
	{
	LINE_NUMBER(461);
	jfloat temp0 = frame[0].f;
	jfloat temp1 = frame[1].f;
	jfloat temp2 = (jfloat)SM_arc_math_Mathf_clamp_float_R_float(ctx, ((frame[2].f) * (clinit_arc_util_Time(ctx), (jfloat)SF_arc_util_Time_delta)));
	jfloat temp3 = (jfloat)SM_arc_math_Mathf_slerp_float_float_float_R_float(ctx, temp0, temp1, temp2);
	popStackFrame(ctx);
	return temp3;
	}

	popStackFrame(ctx);
}

jint SM_arc_math_Mathf_floor_float_R_int(jcontext ctx, jfloat param0) {
	jtype frame[5];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/math/Mathf:floor", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_math_Mathf(ctx);
	frame[0].f = param0;
	{
	LINE_NUMBER(469);
	popStackFrame(ctx);
	return ((jint(((jdouble((frame[0].f))) + (jdouble(16384.0))))) - (16384));
	}

	popStackFrame(ctx);
}

jint SM_arc_math_Mathf_floorPositive_float_R_int(jcontext ctx, jfloat param0) {
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/math/Mathf:floorPositive", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_math_Mathf(ctx);
	frame[0].f = param0;
	{
	LINE_NUMBER(477);
	popStackFrame(ctx);
	return (jint((frame[0].f)));
	}

	popStackFrame(ctx);
}

jint SM_arc_math_Mathf_ceil_float_R_int(jcontext ctx, jfloat param0) {
	jtype frame[6];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/math/Mathf:ceil", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_math_Mathf(ctx);
	frame[0].f = param0;
	{
	LINE_NUMBER(485);
	popStackFrame(ctx);
	return ((16384) - (jint(((jdouble(16384.0)) - (jdouble((frame[0].f)))))));
	}

	popStackFrame(ctx);
}

jint SM_arc_math_Mathf_ceilPositive_float_R_int(jcontext ctx, jfloat param0) {
	jtype frame[5];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/math/Mathf:ceilPositive", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_math_Mathf(ctx);
	frame[0].f = param0;
	{
	LINE_NUMBER(493);
	popStackFrame(ctx);
	return (jint(((jdouble((frame[0].f))) + (jdouble(0.9999999)))));
	}

	popStackFrame(ctx);
}

jint SM_arc_math_Mathf_round_float_R_int(jcontext ctx, jfloat param0) {
	jtype frame[5];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/math/Mathf:round", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_math_Mathf(ctx);
	frame[0].f = param0;
	{
	LINE_NUMBER(501);
	popStackFrame(ctx);
	return ((jint(((jdouble((frame[0].f))) + (jdouble(16384.5))))) - (16384));
	}

	popStackFrame(ctx);
}

jint SM_arc_math_Mathf_round_int_int_R_int(jcontext ctx, jint param0, jint param1) {
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/math/Mathf:round", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_math_Mathf(ctx);
	frame[0].i = param0;
	frame[1].i = param1;
	{
	LINE_NUMBER(505);
	popStackFrame(ctx);
	return (((frame[0].i) / (frame[1].i)) * (frame[1].i));
	}

	popStackFrame(ctx);
}

jfloat SM_arc_math_Mathf_round_float_float_R_float(jcontext ctx, jfloat param0, jfloat param1) {
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/math/Mathf:round", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_math_Mathf(ctx);
	frame[0].f = param0;
	frame[1].f = param1;
	{
	LINE_NUMBER(509);
	popStackFrame(ctx);
	return ((jfloat((jint(((frame[0].f) / (frame[1].f)))))) * (frame[1].f));
	}

	popStackFrame(ctx);
}

jint SM_arc_math_Mathf_round_float_int_R_int(jcontext ctx, jfloat param0, jint param1) {
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/math/Mathf:round", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_math_Mathf(ctx);
	frame[0].f = param0;
	frame[1].i = param1;
	{
	LINE_NUMBER(513);
	popStackFrame(ctx);
	return ((jint(((frame[0].f) / (jfloat((frame[1].i)))))) * (frame[1].i));
	}

	popStackFrame(ctx);
}

jint SM_arc_math_Mathf_roundPositive_float_R_int(jcontext ctx, jfloat param0) {
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/math/Mathf:roundPositive", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_math_Mathf(ctx);
	frame[0].f = param0;
	{
	LINE_NUMBER(518);
	popStackFrame(ctx);
	return (jint(((frame[0].f) + (jfloat(0.5f)))));
	}

	popStackFrame(ctx);
}

jbool SM_arc_math_Mathf_zero_float_R_boolean(jcontext ctx, jfloat param0) {
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/math/Mathf:zero", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_math_Mathf(ctx);
	frame[0].f = param0;
	{
	LINE_NUMBER(523);
	jfloat temp0 = (jfloat)SM_java_lang_Math_abs_float_R_float(ctx, (frame[0].f));
	if ((floatCompare(temp0, (jfloat(1,000000e-06f)), 1)) > 0) goto label_1;
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

jbool SM_arc_math_Mathf_zero_double_R_boolean(jcontext ctx, jdouble param0) {
	jtype frame[6];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/math/Mathf:zero", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_math_Mathf(ctx);
	frame[0].d = param0;
	{
	LINE_NUMBER(528);
	jdouble temp0 = (jdouble)SM_java_lang_Math_abs_double_R_double(ctx, (frame[0].d));
	if ((doubleCompare(temp0, (jdouble(1,000000e-06)), 1)) > 0) goto label_1;
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

jbool SM_arc_math_Mathf_zero_float_float_R_boolean(jcontext ctx, jfloat param0, jfloat param1) {
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/math/Mathf:zero", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_math_Mathf(ctx);
	frame[0].f = param0;
	frame[1].f = param1;
	{
	LINE_NUMBER(536);
	jfloat temp0 = (jfloat)SM_java_lang_Math_abs_float_R_float(ctx, (frame[0].f));
	if ((floatCompare(temp0, (frame[1].f), 1)) > 0) goto label_1;
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

jbool SM_arc_math_Mathf_equal_float_float_R_boolean(jcontext ctx, jfloat param0, jfloat param1) {
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/math/Mathf:equal", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_math_Mathf(ctx);
	frame[0].f = param0;
	frame[1].f = param1;
	{
	LINE_NUMBER(545);
	jfloat temp0 = (jfloat)SM_java_lang_Math_abs_float_R_float(ctx, ((frame[0].f) - (frame[1].f)));
	if ((floatCompare(temp0, (jfloat(1,000000e-06f)), 1)) > 0) goto label_1;
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

jbool SM_arc_math_Mathf_equal_float_float_float_R_boolean(jcontext ctx, jfloat param0, jfloat param1, jfloat param2) {
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/math/Mathf:equal", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_math_Mathf(ctx);
	frame[0].f = param0;
	frame[1].f = param1;
	frame[2].f = param2;
	{
	LINE_NUMBER(555);
	jfloat temp0 = (jfloat)SM_java_lang_Math_abs_float_R_float(ctx, ((frame[0].f) - (frame[1].f)));
	if ((floatCompare(temp0, (frame[2].f), 1)) > 0) goto label_1;
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

jfloat SM_arc_math_Mathf_log_float_float_R_float(jcontext ctx, jfloat param0, jfloat param1) {
	jtype frame[6];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/math/Mathf:log", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_math_Mathf(ctx);
	frame[0].f = param0;
	frame[1].f = param1;
	{
	LINE_NUMBER(560);
	jdouble temp0 = (jdouble)SM_java_lang_Math_log_double_R_double(ctx, (jdouble((frame[1].f))));
	jdouble temp1 = (jdouble)SM_java_lang_Math_log_double_R_double(ctx, (jdouble((frame[0].f))));
	popStackFrame(ctx);
	return (jfloat((temp0 / temp1)));
	}

	popStackFrame(ctx);
}

jfloat SM_arc_math_Mathf_log2_float_R_float(jcontext ctx, jfloat param0) {
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/math/Mathf:log2", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_math_Mathf(ctx);
	frame[0].f = param0;
	{
	LINE_NUMBER(565);
	jfloat temp0 = (jfloat)SM_arc_math_Mathf_log_float_float_R_float(ctx, (jfloat(2)), (frame[0].f));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jint SM_arc_math_Mathf_log2_int_R_int(jcontext ctx, jint param0) {
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/math/Mathf:log2", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_math_Mathf(ctx);
	frame[0].i = param0;
	{
	LINE_NUMBER(570);
	if ((frame[0].i) != 0) goto label_1;
	}
	INST_ICONST(0);
	goto label_2;
label_1:;
	{
	jint temp0 = 31;
	jint temp1 = (jint)SM_java_lang_Integer_numberOfLeadingZeros_int_R_int(ctx, (frame[0].i));
	jint temp2 = temp0 - temp1;
	sp[0].i = temp2;
	sp += 1;
	}
label_2:;
	popStackFrame(ctx);
	INST_IRETURN();

	popStackFrame(ctx);
}

jfloat SM_arc_math_Mathf_mod_float_float_R_float(jcontext ctx, jfloat param0, jfloat param1) {
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/math/Mathf:mod", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_math_Mathf(ctx);
	frame[0].f = param0;
	frame[1].f = param1;
	{
	LINE_NUMBER(575);
	popStackFrame(ctx);
	return (fmodf(((fmodf((frame[0].f), (frame[1].f))) + (frame[1].f)), (frame[1].f)));
	}

	popStackFrame(ctx);
}

jint SM_arc_math_Mathf_mod_int_int_R_int(jcontext ctx, jint param0, jint param1) {
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/math/Mathf:mod", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_math_Mathf(ctx);
	frame[0].i = param0;
	frame[1].i = param1;
	{
	LINE_NUMBER(580);
	popStackFrame(ctx);
	return ((((frame[0].i) % (frame[1].i)) + (frame[1].i)) % (frame[1].i));
	}

	popStackFrame(ctx);
}

jfloat SM_arc_math_Mathf_sample_Array1_float_float_R_float(jcontext ctx, jobject param0, jfloat param1) {
	jtype frame[9];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/math/Mathf:sample", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_math_Mathf(ctx);
	frame[0].o = param0;
	frame[1].f = param1;
	{
	LINE_NUMBER(585);
	jfloat temp0 = (jfloat)SM_arc_math_Mathf_clamp_float_R_float(ctx, (frame[1].f));
	frame[1].f = temp0;
	LINE_NUMBER(586);
	frame[2].f = ((frame[1].f) * (jfloat(((((jarray) nullCheck(ctx, (frame[0].o)))->length) - (jint(1))))));
	LINE_NUMBER(587);
	jint temp1 = (jint)SM_java_lang_Math_min_int_int_R_int(ctx, (jint(((frame[1].f) * (jfloat(((((jarray) nullCheck(ctx, (frame[0].o)))->length) - (jint(1)))))))), ((((jarray) nullCheck(ctx, (frame[0].o)))->length) - (jint(1))));
	frame[3].i = temp1;
	LINE_NUMBER(588);
	jint temp2 = (jint)SM_java_lang_Math_min_int_int_R_int(ctx, ((frame[3].i) + (jint(1))), ((((jarray) nullCheck(ctx, (frame[0].o)))->length) - (jint(1))));
	frame[4].i = temp2;
	LINE_NUMBER(589);
	frame[5].f = ((frame[2].f) - (jfloat((frame[3].i))));
	LINE_NUMBER(590);
	jfloat temp3 = (jfloat)SM_arc_math_Mathf_lerp_float_float_float_R_float(ctx, ((jfloat)ARRAY_ACCESS(jfloat, (frame[0].o), (frame[3].i))), ((jfloat)ARRAY_ACCESS(jfloat, (frame[0].o), (frame[4].i))), (frame[5].f));
	popStackFrame(ctx);
	return temp3;
	}

	popStackFrame(ctx);
}

jfloat SM_arc_math_Mathf_slope_float_R_float(jcontext ctx, jfloat param0) {
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/math/Mathf:slope", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_math_Mathf(ctx);
	frame[0].f = param0;
	{
	LINE_NUMBER(595);
	jfloat temp0 = jfloat(1);
	jfloat temp1 = (jfloat)SM_java_lang_Math_abs_float_R_float(ctx, ((frame[0].f) - (jfloat(0.5f))));
	popStackFrame(ctx);
	return (temp0 - (temp1 * (jfloat(2))));
	}

	popStackFrame(ctx);
}

jfloat SM_arc_math_Mathf_curve_float_float_R_float(jcontext ctx, jfloat param0, jfloat param1) {
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/math/Mathf:curve", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_math_Mathf(ctx);
	frame[0].f = param0;
	frame[1].f = param1;
	{
	LINE_NUMBER(600);
	if ((floatCompare((frame[0].f), (frame[1].f), 1)) >= 0) goto label_1;
	}
	{
	LINE_NUMBER(601);
	popStackFrame(ctx);
	return (jfloat(0));
	}
label_1:;
	{
	LINE_NUMBER(603);
	popStackFrame(ctx);
	return (((frame[0].f) - (frame[1].f)) / ((jfloat(1)) - (frame[1].f)));
	}

	popStackFrame(ctx);
}

jfloat SM_arc_math_Mathf_curve_float_float_float_R_float(jcontext ctx, jfloat param0, jfloat param1, jfloat param2) {
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/math/Mathf:curve", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_math_Mathf(ctx);
	frame[0].f = param0;
	frame[1].f = param1;
	frame[2].f = param2;
	{
	LINE_NUMBER(609);
	if ((floatCompare((frame[0].f), (frame[1].f), 1)) >= 0) goto label_1;
	}
	{
	LINE_NUMBER(610);
	popStackFrame(ctx);
	return (jfloat(0));
	}
label_1:;
	{
	LINE_NUMBER(611);
	if ((floatCompare((frame[0].f), (frame[2].f), -1)) <= 0) goto label_3;
	}
	{
	LINE_NUMBER(612);
	popStackFrame(ctx);
	return (jfloat(1));
	}
label_3:;
	{
	LINE_NUMBER(614);
	popStackFrame(ctx);
	return (((frame[0].f) - (frame[1].f)) / ((frame[2].f) - (frame[1].f)));
	}

	popStackFrame(ctx);
}

jfloat SM_arc_math_Mathf_curveMargin_float_float_R_float(jcontext ctx, jfloat param0, jfloat param1) {
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/math/Mathf:curveMargin", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_math_Mathf(ctx);
	frame[0].f = param0;
	frame[1].f = param1;
	{
	LINE_NUMBER(620);
	jfloat temp0 = (jfloat)SM_arc_math_Mathf_curveMargin_float_float_float_R_float(ctx, (frame[0].f), (frame[1].f), (frame[1].f));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jfloat SM_arc_math_Mathf_curveMargin_float_float_float_R_float(jcontext ctx, jfloat param0, jfloat param1, jfloat param2) {
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/math/Mathf:curveMargin", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_math_Mathf(ctx);
	frame[0].f = param0;
	frame[1].f = param1;
	frame[2].f = param2;
	{
	LINE_NUMBER(625);
	if ((floatCompare((frame[0].f), (frame[1].f), 1)) >= 0) goto label_1;
	}
	{
	popStackFrame(ctx);
	return (((frame[0].f) / (frame[1].f)) * (jfloat(0.5f)));
	}
label_1:;
	{
	LINE_NUMBER(626);
	if ((floatCompare((frame[0].f), ((jfloat(1)) - (frame[2].f)), -1)) <= 0) goto label_2;
	}
	{
	popStackFrame(ctx);
	return ((((((frame[0].f) - (jfloat(1))) + (frame[2].f)) / (frame[2].f)) * (jfloat(0.5f))) + (jfloat(0.5f)));
	}
label_2:;
	{
	LINE_NUMBER(627);
	popStackFrame(ctx);
	return (jfloat(0.5f));
	}

	popStackFrame(ctx);
}

jfloat SM_arc_math_Mathf_len_float_float_R_float(jcontext ctx, jfloat param0, jfloat param1) {
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/math/Mathf:len", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_math_Mathf(ctx);
	frame[0].f = param0;
	frame[1].f = param1;
	{
	LINE_NUMBER(631);
	jdouble temp0 = (jdouble)SM_java_lang_Math_sqrt_double_R_double(ctx, (jdouble((((frame[0].f) * (frame[0].f)) + ((frame[1].f) * (frame[1].f))))));
	popStackFrame(ctx);
	return (jfloat(temp0));
	}

	popStackFrame(ctx);
}

jfloat SM_arc_math_Mathf_len2_float_float_R_float(jcontext ctx, jfloat param0, jfloat param1) {
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/math/Mathf:len2", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_math_Mathf(ctx);
	frame[0].f = param0;
	frame[1].f = param1;
	{
	LINE_NUMBER(635);
	popStackFrame(ctx);
	return (((frame[0].f) * (frame[0].f)) + ((frame[1].f) * (frame[1].f)));
	}

	popStackFrame(ctx);
}

jfloat SM_arc_math_Mathf_dot_float_float_float_float_R_float(jcontext ctx, jfloat param0, jfloat param1, jfloat param2, jfloat param3) {
	jtype frame[7];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/math/Mathf:dot", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_math_Mathf(ctx);
	frame[0].f = param0;
	frame[1].f = param1;
	frame[2].f = param2;
	frame[3].f = param3;
	{
	LINE_NUMBER(639);
	popStackFrame(ctx);
	return (((frame[0].f) * (frame[2].f)) + ((frame[1].f) * (frame[3].f)));
	}

	popStackFrame(ctx);
}

jfloat SM_arc_math_Mathf_dst_float_float_R_float(jcontext ctx, jfloat param0, jfloat param1) {
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/math/Mathf:dst", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_math_Mathf(ctx);
	frame[0].f = param0;
	frame[1].f = param1;
	{
	LINE_NUMBER(643);
	jdouble temp0 = (jdouble)SM_java_lang_Math_sqrt_double_R_double(ctx, (jdouble((((frame[0].f) * (frame[0].f)) + ((frame[1].f) * (frame[1].f))))));
	popStackFrame(ctx);
	return (jfloat(temp0));
	}

	popStackFrame(ctx);
}

jfloat SM_arc_math_Mathf_dst2_float_float_R_float(jcontext ctx, jfloat param0, jfloat param1) {
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/math/Mathf:dst2", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_math_Mathf(ctx);
	frame[0].f = param0;
	frame[1].f = param1;
	{
	LINE_NUMBER(647);
	popStackFrame(ctx);
	return (((frame[0].f) * (frame[0].f)) + ((frame[1].f) * (frame[1].f)));
	}

	popStackFrame(ctx);
}

jfloat SM_arc_math_Mathf_dst_float_float_float_float_R_float(jcontext ctx, jfloat param0, jfloat param1, jfloat param2, jfloat param3) {
	jtype frame[9];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/math/Mathf:dst", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_math_Mathf(ctx);
	frame[0].f = param0;
	frame[1].f = param1;
	frame[2].f = param2;
	frame[3].f = param3;
	{
	LINE_NUMBER(651);
	frame[4].f = ((frame[2].f) - (frame[0].f));
	LINE_NUMBER(652);
	frame[5].f = ((frame[3].f) - (frame[1].f));
	LINE_NUMBER(653);
	jdouble temp0 = (jdouble)SM_java_lang_Math_sqrt_double_R_double(ctx, (jdouble((((frame[4].f) * (frame[4].f)) + ((frame[5].f) * (frame[5].f))))));
	popStackFrame(ctx);
	return (jfloat(temp0));
	}

	popStackFrame(ctx);
}

jfloat SM_arc_math_Mathf_dst2_float_float_float_float_R_float(jcontext ctx, jfloat param0, jfloat param1, jfloat param2, jfloat param3) {
	jtype frame[9];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/math/Mathf:dst2", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_math_Mathf(ctx);
	frame[0].f = param0;
	frame[1].f = param1;
	frame[2].f = param2;
	frame[3].f = param3;
	{
	LINE_NUMBER(657);
	frame[4].f = ((frame[2].f) - (frame[0].f));
	LINE_NUMBER(658);
	frame[5].f = ((frame[3].f) - (frame[1].f));
	LINE_NUMBER(659);
	popStackFrame(ctx);
	return (((frame[4].f) * (frame[4].f)) + ((frame[5].f) * (frame[5].f)));
	}

	popStackFrame(ctx);
}

jfloat SM_arc_math_Mathf_dstm_float_float_float_float_R_float(jcontext ctx, jfloat param0, jfloat param1, jfloat param2, jfloat param3) {
	jtype frame[7];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/math/Mathf:dstm", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_math_Mathf(ctx);
	frame[0].f = param0;
	frame[1].f = param1;
	frame[2].f = param2;
	frame[3].f = param3;
	{
	LINE_NUMBER(664);
	jfloat temp0 = (jfloat)SM_java_lang_Math_abs_float_R_float(ctx, ((frame[0].f) - (frame[2].f)));
	jfloat temp1 = (jfloat)SM_java_lang_Math_abs_float_R_float(ctx, ((frame[1].f) - (frame[3].f)));
	popStackFrame(ctx);
	return (temp0 + temp1);
	}

	popStackFrame(ctx);
}

jobject SM_arc_math_Mathf_arrive_arc_math_geom_Position_arc_math_geom_Position_arc_math_geom_Vec2_float_float_float_float_R_arc_math_geom_Vec2(jcontext ctx, jobject param0, jobject param1, jobject param2, jfloat param3, jfloat param4, jfloat param5, jfloat param6) {
	jtype frame[16];
	auto stack = &frame[7];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/math/Mathf:arrive", 16 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_math_Mathf(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	frame[2].o = param2;
	frame[3].f = param3;
	frame[4].f = param4;
	frame[5].f = param5;
	frame[6].f = param6;
	{
	LINE_NUMBER(668);
	jfloat temp0 = (jfloat)((func_arc_math_geom_Position_getX_R_float) resolveInterfaceMethod(ctx, &class_arc_math_geom_Position, INDEX_arc_math_geom_Position_getX_R_float, (frame[0].o)))(ctx, (frame[0].o));
	jfloat temp1 = (jfloat)((func_arc_math_geom_Position_getY_R_float) resolveInterfaceMethod(ctx, &class_arc_math_geom_Position, INDEX_arc_math_geom_Position_getY_R_float, (frame[0].o)))(ctx, (frame[0].o));
	jfloat temp2 = (jfloat)((func_arc_math_geom_Position_getX_R_float) resolveInterfaceMethod(ctx, &class_arc_math_geom_Position, INDEX_arc_math_geom_Position_getX_R_float, (frame[1].o)))(ctx, (frame[1].o));
	jfloat temp3 = (jfloat)((func_arc_math_geom_Position_getY_R_float) resolveInterfaceMethod(ctx, &class_arc_math_geom_Position, INDEX_arc_math_geom_Position_getY_R_float, (frame[1].o)))(ctx, (frame[1].o));
	sp[0].o = (jobject)SM_arc_math_Mathf_arrive_float_float_float_float_arc_math_geom_Vec2_float_float_float_float_R_arc_math_geom_Vec2(ctx, temp0, temp1, temp2, temp3, (frame[2].o), (frame[3].f), (frame[4].f), (frame[5].f), (frame[6].f));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject SM_arc_math_Mathf_arrive_float_float_float_float_arc_math_geom_Vec2_float_float_float_float_R_arc_math_geom_Vec2(jcontext ctx, jfloat param0, jfloat param1, jfloat param2, jfloat param3, jobject param4, jfloat param5, jfloat param6, jfloat param7, jfloat param8) {
	jtype frame[16];
	auto stack = &frame[12];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/math/Mathf:arrive", 16 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_math_Mathf(ctx);
	frame[0].f = param0;
	frame[1].f = param1;
	frame[2].f = param2;
	frame[3].f = param3;
	frame[4].o = param4;
	frame[5].f = param5;
	frame[6].f = param6;
	frame[7].f = param7;
	frame[8].f = param8;
	{
	LINE_NUMBER(673);
	clinit_arc_math_Mathf(ctx);
	sp[0].o = (jobject)SF_arc_math_Mathf_v1;
	sp[0].o = (jobject)((func_arc_math_geom_Vec2_set_float_float_R_arc_math_geom_Vec2) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Vec2_set_float_float_R_arc_math_geom_Vec2])(ctx, sp[0].o, (frame[2].f), (frame[3].f));
	sp[0].o = (jobject)((func_arc_math_geom_Vec2_sub_float_float_R_arc_math_geom_Vec2) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Vec2_sub_float_float_R_arc_math_geom_Vec2])(ctx, sp[0].o, (frame[0].f), (frame[1].f));
	frame[9].o = sp[0].o;
	LINE_NUMBER(674);
	jfloat temp0 = (jfloat)((func_arc_math_geom_Vec2_len_R_float) ((void **) nullCheck(ctx, (frame[9].o))->vtable)[VTABLE_arc_math_geom_Vec2_len_R_float])(ctx, (frame[9].o));
	frame[10].f = temp0;
	LINE_NUMBER(676);
	if ((floatCompare((frame[10].f), (frame[6].f), 1)) > 0) goto label_3;
	}
	{
	clinit_arc_math_Mathf(ctx);
	sp[0].o = (jobject)SF_arc_math_Mathf_v3;
	sp[0].o = (jobject)((func_arc_math_geom_Vec2_setZero_R_arc_math_geom_Vec2) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Vec2_setZero_R_arc_math_geom_Vec2])(ctx, sp[0].o);
	popStackFrame(ctx);
	return sp[0].o;
	}
label_3:;
	{
	LINE_NUMBER(677);
	frame[11].f = (frame[7].f);
	LINE_NUMBER(678);
	if ((floatCompare((frame[10].f), (frame[5].f), 1)) > 0) goto label_5;
	}
	{
	frame[11].f = ((frame[11].f) * ((frame[10].f) / (frame[5].f)));
	}
label_5:;
	{
	LINE_NUMBER(680);
	sp[0].o = (jobject)((func_arc_math_geom_Vec2_sub_float_float_R_arc_math_geom_Vec2) ((void **) nullCheck(ctx, (frame[9].o))->vtable)[VTABLE_arc_math_geom_Vec2_sub_float_float_R_arc_math_geom_Vec2])(ctx, (frame[9].o), (((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK((frame[4].o)))->F_x) / (frame[8].f)), (((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK((frame[4].o)))->F_y) / (frame[8].f)));
	sp[0].o = (jobject)((func_arc_math_geom_Vec2_limit_float_R_arc_math_geom_Vec2) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Vec2_limit_float_R_arc_math_geom_Vec2])(ctx, sp[0].o, (frame[11].f));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jbool SM_arc_math_Mathf_within_float_float_float_float_float_R_boolean(jcontext ctx, jfloat param0, jfloat param1, jfloat param2, jfloat param3, jfloat param4) {
	jtype frame[9];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/math/Mathf:within", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_math_Mathf(ctx);
	frame[0].f = param0;
	frame[1].f = param1;
	frame[2].f = param2;
	frame[3].f = param3;
	frame[4].f = param4;
	{
	LINE_NUMBER(685);
	jfloat temp0 = (jfloat)SM_arc_math_Mathf_dst2_float_float_float_float_R_float(ctx, (frame[0].f), (frame[1].f), (frame[2].f), (frame[3].f));
	if ((floatCompare(temp0, ((frame[4].f) * (frame[4].f)), 1)) >= 0) goto label_1;
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

jbool SM_arc_math_Mathf_within_float_float_float_R_boolean(jcontext ctx, jfloat param0, jfloat param1, jfloat param2) {
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/math/Mathf:within", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_math_Mathf(ctx);
	frame[0].f = param0;
	frame[1].f = param1;
	frame[2].f = param2;
	{
	LINE_NUMBER(690);
	if ((floatCompare((((frame[0].f) * (frame[0].f)) + ((frame[1].f) * (frame[1].f))), ((frame[2].f) * (frame[2].f)), 1)) >= 0) goto label_1;
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

void clinit_arc_math_Mathf(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	SF_arc_math_Mathf_FLOAT_ROUNDING_ERROR = jfloat(1,000000e-06f);
	SF_arc_math_Mathf_PI = jfloat(3.1415927f);
	SF_arc_math_Mathf_pi = jfloat(3.1415927f);
	SF_arc_math_Mathf_halfPi = jfloat(1.5707964f);
	SF_arc_math_Mathf_PI2 = jfloat(6.2831855f);
	SF_arc_math_Mathf_E = jfloat(2.7182817f);
	SF_arc_math_Mathf_radiansToDegrees = jfloat(57.295776f);
	SF_arc_math_Mathf_radDeg = jfloat(57.295776f);
	SF_arc_math_Mathf_degreesToRadians = jfloat(0.017453292f);
	SF_arc_math_Mathf_degRad = jfloat(0.017453292f);
	SF_arc_math_Mathf_doubleDegRad = jdouble(0.017453292519943295);
	SF_arc_math_Mathf_doubleRadDeg = jdouble(57.29577951308232);
	SF_arc_math_Mathf_sinBits = jint(14);
	SF_arc_math_Mathf_sinMask = jint(16383);
	SF_arc_math_Mathf_sinCount = jint(16384);
	SF_arc_math_Mathf_radFull = jfloat(6.2831855f);
	SF_arc_math_Mathf_degFull = jfloat(360.0f);
	SF_arc_math_Mathf_radToIndex = jfloat(2607.5945f);
	SF_arc_math_Mathf_degToIndex = jfloat(45.511112f);
	SF_arc_math_Mathf_BIG_ENOUGH_INT = jint(16384);
	SF_arc_math_Mathf_BIG_ENOUGH_FLOOR = jdouble(16384.0);
	SF_arc_math_Mathf_CEIL = jdouble(0.9999999);
	SF_arc_math_Mathf_BIG_ENOUGH_ROUND = jdouble(16384.5);
	jtype frame[5];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/math/Mathf:<clinit>", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_math_Mathf(ctx);
	{
	LINE_NUMBER(7);
	sp[0].o = (jobject) createArray(ctx, &class_int, (jint(2)));
	ARRAY_ACCESS(jint, sp[0].o, (jint(0))) = (jint(-1));
	ARRAY_ACCESS(jint, sp[0].o, (jint(1))) = (jint(1));
	clinit_arc_math_Mathf(ctx);
	SF_arc_math_Mathf_signs = sp[0].o;
	LINE_NUMBER(8);
	sp[0].o = (jobject) createArray(ctx, &class_int, (jint(2)));
	ARRAY_ACCESS(jint, sp[0].o, (jint(0))) = (jint(0));
	ARRAY_ACCESS(jint, sp[0].o, (jint(1))) = (jint(1));
	clinit_arc_math_Mathf(ctx);
	SF_arc_math_Mathf_zeroOne = sp[0].o;
	LINE_NUMBER(9);
	sp[0].o = (jobject) createArray(ctx, &class_boolean, (jint(2)));
	ARRAY_ACCESS(jbyte, sp[0].o, (jint(0))) = (jint(1));
	ARRAY_ACCESS(jbyte, sp[0].o, (jint(1))) = (jint(0));
	clinit_arc_math_Mathf(ctx);
	SF_arc_math_Mathf_booleans = sp[0].o;
	LINE_NUMBER(14);
	jfloat temp0 = (jfloat)SM_arc_math_Mathf_sqrt_float_R_float(ctx, (jfloat(2)));
	clinit_arc_math_Mathf(ctx);
	SF_arc_math_Mathf_sqrt2 = temp0;
	LINE_NUMBER(15);
	jfloat temp1 = (jfloat)SM_arc_math_Mathf_sqrt_float_R_float(ctx, (jfloat(3.0f)));
	clinit_arc_math_Mathf(ctx);
	SF_arc_math_Mathf_sqrt3 = temp1;
	LINE_NUMBER(28);
	sp[0].o = (jobject) createArray(ctx, &class_float, (16384));
	clinit_arc_math_Mathf(ctx);
	SF_arc_math_Mathf_sinTable = sp[0].o;
	LINE_NUMBER(37);
	clinit_arc_math_Rand(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_math_Rand);
	init_arc_math_Rand(ctx, sp[0].o);
	clinit_arc_math_Mathf(ctx);
	SF_arc_math_Mathf_seedr = sp[0].o;
	LINE_NUMBER(38);
	clinit_arc_math_geom_Vec2(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_math_geom_Vec2);
	init_arc_math_geom_Vec2(ctx, sp[0].o);
	clinit_arc_math_Mathf(ctx);
	SF_arc_math_Mathf_v1 = sp[0].o;
	clinit_arc_math_geom_Vec2(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_math_geom_Vec2);
	init_arc_math_geom_Vec2(ctx, sp[0].o);
	clinit_arc_math_Mathf(ctx);
	SF_arc_math_Mathf_v2 = sp[0].o;
	clinit_arc_math_geom_Vec2(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_math_geom_Vec2);
	init_arc_math_geom_Vec2(ctx, sp[0].o);
	clinit_arc_math_Mathf(ctx);
	SF_arc_math_Mathf_v3 = sp[0].o;
	LINE_NUMBER(41);
	frame[0].i = (jint(0));
	}
label_9:;
	{
	if ((frame[0].i) >= (16384)) goto label_10;
	}
	{
	LINE_NUMBER(42);
	clinit_arc_math_Mathf(ctx);
	sp[0].o = (jobject)SF_arc_math_Mathf_sinTable;
	jint temp0 = frame[0].i;
	jdouble temp1 = (jdouble)SM_java_lang_Math_sin_double_R_double(ctx, (jdouble(((((jfloat((frame[0].i))) + (jfloat(0.5f))) / (jfloat(16384.0f))) * (jfloat(6.2831855f))))));
	ARRAY_ACCESS(jfloat, sp[0].o, temp0) = (jfloat(temp1));
	LINE_NUMBER(41);
	INST_IINC(0, 1);
	goto label_9;
	}
label_10:;
	{
	LINE_NUMBER(43);
	frame[0].i = (jint(0));
	}
label_13:;
	{
	if ((frame[0].i) >= (360)) goto label_14;
	}
	{
	LINE_NUMBER(44);
	clinit_arc_math_Mathf(ctx);
	sp[0].o = (jobject)SF_arc_math_Mathf_sinTable;
	jint temp0 = (jint(((jfloat((frame[0].i))) * (jfloat(45.511112f))))) & (16383);
	jdouble temp1 = (jdouble)SM_java_lang_Math_sin_double_R_double(ctx, (jdouble(((jfloat((frame[0].i))) * (jfloat(0.017453292f))))));
	ARRAY_ACCESS(jfloat, sp[0].o, temp0) = (jfloat(temp1));
	LINE_NUMBER(43);
	INST_IINC(0, 90);
	goto label_13;
	}
label_14:;
	{
	LINE_NUMBER(46);
	clinit_arc_math_Mathf(ctx);
	sp[0].o = (jobject)SF_arc_math_Mathf_sinTable;
	ARRAY_ACCESS(jfloat, sp[0].o, (jint(0))) = (jfloat(0));
	LINE_NUMBER(47);
	clinit_arc_math_Mathf(ctx);
	sp[0].o = (jobject)SF_arc_math_Mathf_sinTable;
	ARRAY_ACCESS(jfloat, sp[0].o, (4096)) = (jfloat(1));
	LINE_NUMBER(48);
	clinit_arc_math_Mathf(ctx);
	sp[0].o = (jobject)SF_arc_math_Mathf_sinTable;
	ARRAY_ACCESS(jfloat, sp[0].o, (8192)) = (jfloat(0));
	LINE_NUMBER(49);
	clinit_arc_math_Mathf(ctx);
	sp[0].o = (jobject)SF_arc_math_Mathf_sinTable;
	ARRAY_ACCESS(jfloat, sp[0].o, (12288)) = (jfloat(-1.0f));
	LINE_NUMBER(52);
	clinit_arc_math_Rand(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_math_Rand);
	init_arc_math_Rand(ctx, sp[0].o);
	clinit_arc_math_Mathf(ctx);
	SF_arc_math_Mathf_rand = sp[0].o;
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void *vtable_arc_math_Mathf[] {
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
};

static FieldMetadata fields[] {
	{ "signs", getArrayClass(&class_int, 1), (intptr_t) &SF_arc_math_Mathf_signs, "[I", 25 },
	{ "zeroOne", getArrayClass(&class_int, 1), (intptr_t) &SF_arc_math_Mathf_zeroOne, "[I", 25 },
	{ "booleans", getArrayClass(&class_boolean, 1), (intptr_t) &SF_arc_math_Mathf_booleans, "[Z", 25 },
	{ "FLOAT_ROUNDING_ERROR", &class_float, (intptr_t) &SF_arc_math_Mathf_FLOAT_ROUNDING_ERROR, "F", 25 },
	{ "PI", &class_float, (intptr_t) &SF_arc_math_Mathf_PI, "F", 25 },
	{ "pi", &class_float, (intptr_t) &SF_arc_math_Mathf_pi, "F", 25 },
	{ "halfPi", &class_float, (intptr_t) &SF_arc_math_Mathf_halfPi, "F", 25 },
	{ "PI2", &class_float, (intptr_t) &SF_arc_math_Mathf_PI2, "F", 25 },
	{ "E", &class_float, (intptr_t) &SF_arc_math_Mathf_E, "F", 25 },
	{ "sqrt2", &class_float, (intptr_t) &SF_arc_math_Mathf_sqrt2, "F", 25 },
	{ "sqrt3", &class_float, (intptr_t) &SF_arc_math_Mathf_sqrt3, "F", 25 },
	{ "radiansToDegrees", &class_float, (intptr_t) &SF_arc_math_Mathf_radiansToDegrees, "F", 25 },
	{ "radDeg", &class_float, (intptr_t) &SF_arc_math_Mathf_radDeg, "F", 25 },
	{ "degreesToRadians", &class_float, (intptr_t) &SF_arc_math_Mathf_degreesToRadians, "F", 25 },
	{ "degRad", &class_float, (intptr_t) &SF_arc_math_Mathf_degRad, "F", 25 },
	{ "doubleDegRad", &class_double, (intptr_t) &SF_arc_math_Mathf_doubleDegRad, "D", 25 },
	{ "doubleRadDeg", &class_double, (intptr_t) &SF_arc_math_Mathf_doubleRadDeg, "D", 25 },
	{ "sinBits", &class_int, (intptr_t) &SF_arc_math_Mathf_sinBits, "I", 26 },
	{ "sinMask", &class_int, (intptr_t) &SF_arc_math_Mathf_sinMask, "I", 26 },
	{ "sinCount", &class_int, (intptr_t) &SF_arc_math_Mathf_sinCount, "I", 26 },
	{ "sinTable", getArrayClass(&class_float, 1), (intptr_t) &SF_arc_math_Mathf_sinTable, "[F", 26 },
	{ "radFull", &class_float, (intptr_t) &SF_arc_math_Mathf_radFull, "F", 26 },
	{ "degFull", &class_float, (intptr_t) &SF_arc_math_Mathf_degFull, "F", 26 },
	{ "radToIndex", &class_float, (intptr_t) &SF_arc_math_Mathf_radToIndex, "F", 26 },
	{ "degToIndex", &class_float, (intptr_t) &SF_arc_math_Mathf_degToIndex, "F", 26 },
	{ "BIG_ENOUGH_INT", &class_int, (intptr_t) &SF_arc_math_Mathf_BIG_ENOUGH_INT, "I", 26 },
	{ "BIG_ENOUGH_FLOOR", &class_double, (intptr_t) &SF_arc_math_Mathf_BIG_ENOUGH_FLOOR, "D", 26 },
	{ "CEIL", &class_double, (intptr_t) &SF_arc_math_Mathf_CEIL, "D", 26 },
	{ "BIG_ENOUGH_ROUND", &class_double, (intptr_t) &SF_arc_math_Mathf_BIG_ENOUGH_ROUND, "D", 26 },
	{ "seedr", &class_arc_math_Rand, (intptr_t) &SF_arc_math_Mathf_seedr, "Larc/math/Rand;", 26 },
	{ "v1", &class_arc_math_geom_Vec2, (intptr_t) &SF_arc_math_Mathf_v1, "Larc/math/geom/Vec2;", 26 },
	{ "v2", &class_arc_math_geom_Vec2, (intptr_t) &SF_arc_math_Mathf_v2, "Larc/math/geom/Vec2;", 26 },
	{ "v3", &class_arc_math_geom_Vec2, (intptr_t) &SF_arc_math_Mathf_v3, "Larc/math/geom/Vec2;", 26 },
	{ "rand", &class_arc_math_Rand, (intptr_t) &SF_arc_math_Mathf_rand, "Larc/math/Rand;", 9 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_arc_math_Mathf, 0, "()V", 1 },
	{ "sin", (intptr_t) SM_arc_math_Mathf_sin_float_R_float, 0, "(F)F", 9 },
	{ "cos", (intptr_t) SM_arc_math_Mathf_cos_float_R_float, 0, "(F)F", 9 },
	{ "sinDeg", (intptr_t) SM_arc_math_Mathf_sinDeg_float_R_float, 0, "(F)F", 9 },
	{ "cosDeg", (intptr_t) SM_arc_math_Mathf_cosDeg_float_R_float, 0, "(F)F", 9 },
	{ "absin", (intptr_t) SM_arc_math_Mathf_absin_float_float_R_float, 0, "(FF)F", 9 },
	{ "absin", (intptr_t) SM_arc_math_Mathf_absin_float_float_float_R_float, 0, "(FFF)F", 9 },
	{ "tan", (intptr_t) SM_arc_math_Mathf_tan_float_float_float_R_float, 0, "(FFF)F", 9 },
	{ "sin", (intptr_t) SM_arc_math_Mathf_sin_float_float_R_float, 0, "(FF)F", 9 },
	{ "sin", (intptr_t) SM_arc_math_Mathf_sin_float_float_float_R_float, 0, "(FFF)F", 9 },
	{ "cos", (intptr_t) SM_arc_math_Mathf_cos_float_float_float_R_float, 0, "(FFF)F", 9 },
	{ "angle", (intptr_t) SM_arc_math_Mathf_angle_float_float_R_float, 0, "(FF)F", 9 },
	{ "angleExact", (intptr_t) SM_arc_math_Mathf_angleExact_float_float_R_float, 0, "(FF)F", 9 },
	{ "wrapAngleAroundZero", (intptr_t) SM_arc_math_Mathf_wrapAngleAroundZero_float_R_float, 0, "(F)F", 9 },
	{ "atn", (intptr_t) SM_arc_math_Mathf_atn_double_R_float, 0, "(D)F", 10 },
	{ "atan2", (intptr_t) SM_arc_math_Mathf_atan2_float_float_R_float, 0, "(FF)F", 9 },
	{ "digits", (intptr_t) SM_arc_math_Mathf_digits_int_R_int, 0, "(I)I", 9 },
	{ "digits", (intptr_t) SM_arc_math_Mathf_digits_long_R_int, 0, "(J)I", 9 },
	{ "sqrt", (intptr_t) SM_arc_math_Mathf_sqrt_float_R_float, 0, "(F)F", 9 },
	{ "sqr", (intptr_t) SM_arc_math_Mathf_sqr_float_R_float, 0, "(F)F", 9 },
	{ "map", (intptr_t) SM_arc_math_Mathf_map_float_float_float_float_float_R_float, 0, "(FFFFF)F", 9 },
	{ "map", (intptr_t) SM_arc_math_Mathf_map_float_float_float_R_float, 0, "(FFF)F", 9 },
	{ "sign", (intptr_t) SM_arc_math_Mathf_sign_float_R_int, 0, "(F)I", 9 },
	{ "sign", (intptr_t) SM_arc_math_Mathf_sign_boolean_R_int, 0, "(Z)I", 9 },
	{ "num", (intptr_t) SM_arc_math_Mathf_num_boolean_R_int, 0, "(Z)I", 9 },
	{ "pow", (intptr_t) SM_arc_math_Mathf_pow_float_float_R_float, 0, "(FF)F", 9 },
	{ "pow", (intptr_t) SM_arc_math_Mathf_pow_int_int_R_int, 0, "(II)I", 9 },
	{ "range", (intptr_t) SM_arc_math_Mathf_range_float_R_float, 0, "(F)F", 9 },
	{ "range", (intptr_t) SM_arc_math_Mathf_range_int_R_int, 0, "(I)I", 9 },
	{ "range", (intptr_t) SM_arc_math_Mathf_range_float_float_R_float, 0, "(FF)F", 9 },
	{ "chanceDelta", (intptr_t) SM_arc_math_Mathf_chanceDelta_double_R_boolean, 0, "(D)Z", 9 },
	{ "chance", (intptr_t) SM_arc_math_Mathf_chance_double_R_boolean, 0, "(D)Z", 9 },
	{ "random", (intptr_t) SM_arc_math_Mathf_random_int_R_int, 0, "(I)I", 9 },
	{ "random", (intptr_t) SM_arc_math_Mathf_random_int_int_R_int, 0, "(II)I", 9 },
	{ "random", (intptr_t) SM_arc_math_Mathf_random_long_R_long, 0, "(J)J", 9 },
	{ "random", (intptr_t) SM_arc_math_Mathf_random_long_long_R_long, 0, "(JJ)J", 9 },
	{ "randomBoolean", (intptr_t) SM_arc_math_Mathf_randomBoolean_R_boolean, 0, "()Z", 9 },
	{ "randomBoolean", (intptr_t) SM_arc_math_Mathf_randomBoolean_float_R_boolean, 0, "(F)Z", 9 },
	{ "random", (intptr_t) SM_arc_math_Mathf_random_R_float, 0, "()F", 9 },
	{ "random", (intptr_t) SM_arc_math_Mathf_random_float_R_float, 0, "(F)F", 9 },
	{ "random", (intptr_t) SM_arc_math_Mathf_random_float_float_R_float, 0, "(FF)F", 9 },
	{ "randomSign", (intptr_t) SM_arc_math_Mathf_randomSign_R_int, 0, "()I", 9 },
	{ "randomSeed", (intptr_t) SM_arc_math_Mathf_randomSeed_long_int_int_R_int, 0, "(JII)I", 9 },
	{ "randomSeed", (intptr_t) SM_arc_math_Mathf_randomSeed_long_float_float_R_float, 0, "(JFF)F", 9 },
	{ "randomSeed", (intptr_t) SM_arc_math_Mathf_randomSeed_long_R_float, 0, "(J)F", 9 },
	{ "randomSeed", (intptr_t) SM_arc_math_Mathf_randomSeed_long_float_R_float, 0, "(JF)F", 9 },
	{ "randomSeedRange", (intptr_t) SM_arc_math_Mathf_randomSeedRange_long_float_R_float, 0, "(JF)F", 9 },
	{ "randomTriangular", (intptr_t) SM_arc_math_Mathf_randomTriangular_R_float, 0, "()F", 9 },
	{ "randomTriangular", (intptr_t) SM_arc_math_Mathf_randomTriangular_float_R_float, 0, "(F)F", 9 },
	{ "randomTriangular", (intptr_t) SM_arc_math_Mathf_randomTriangular_float_float_R_float, 0, "(FF)F", 9 },
	{ "randomTriangular", (intptr_t) SM_arc_math_Mathf_randomTriangular_float_float_float_R_float, 0, "(FFF)F", 9 },
	{ "nextPowerOfTwo", (intptr_t) SM_arc_math_Mathf_nextPowerOfTwo_int_R_int, 0, "(I)I", 9 },
	{ "isPowerOfTwo", (intptr_t) SM_arc_math_Mathf_isPowerOfTwo_int_R_boolean, 0, "(I)Z", 9 },
	{ "clamp", (intptr_t) SM_arc_math_Mathf_clamp_int_int_int_R_int, 0, "(III)I", 9 },
	{ "clamp", (intptr_t) SM_arc_math_Mathf_clamp_long_long_long_R_long, 0, "(JJJ)J", 9 },
	{ "clamp", (intptr_t) SM_arc_math_Mathf_clamp_float_float_float_R_float, 0, "(FFF)F", 9 },
	{ "clamp", (intptr_t) SM_arc_math_Mathf_clamp_float_R_float, 0, "(F)F", 9 },
	{ "clamp", (intptr_t) SM_arc_math_Mathf_clamp_double_double_double_R_double, 0, "(DDD)D", 9 },
	{ "maxZero", (intptr_t) SM_arc_math_Mathf_maxZero_float_R_float, 0, "(F)F", 9 },
	{ "approach", (intptr_t) SM_arc_math_Mathf_approach_float_float_float_R_float, 0, "(FFF)F", 9 },
	{ "approachDelta", (intptr_t) SM_arc_math_Mathf_approachDelta_float_float_float_R_float, 0, "(FFF)F", 9 },
	{ "lerp", (intptr_t) SM_arc_math_Mathf_lerp_float_float_float_R_float, 0, "(FFF)F", 9 },
	{ "lerpDelta", (intptr_t) SM_arc_math_Mathf_lerpDelta_float_float_float_R_float, 0, "(FFF)F", 9 },
	{ "slerpRad", (intptr_t) SM_arc_math_Mathf_slerpRad_float_float_float_R_float, 0, "(FFF)F", 9 },
	{ "slerp", (intptr_t) SM_arc_math_Mathf_slerp_float_float_float_R_float, 0, "(FFF)F", 9 },
	{ "slerpDelta", (intptr_t) SM_arc_math_Mathf_slerpDelta_float_float_float_R_float, 0, "(FFF)F", 9 },
	{ "floor", (intptr_t) SM_arc_math_Mathf_floor_float_R_int, 0, "(F)I", 9 },
	{ "floorPositive", (intptr_t) SM_arc_math_Mathf_floorPositive_float_R_int, 0, "(F)I", 9 },
	{ "ceil", (intptr_t) SM_arc_math_Mathf_ceil_float_R_int, 0, "(F)I", 9 },
	{ "ceilPositive", (intptr_t) SM_arc_math_Mathf_ceilPositive_float_R_int, 0, "(F)I", 9 },
	{ "round", (intptr_t) SM_arc_math_Mathf_round_float_R_int, 0, "(F)I", 9 },
	{ "round", (intptr_t) SM_arc_math_Mathf_round_int_int_R_int, 0, "(II)I", 9 },
	{ "round", (intptr_t) SM_arc_math_Mathf_round_float_float_R_float, 0, "(FF)F", 9 },
	{ "round", (intptr_t) SM_arc_math_Mathf_round_float_int_R_int, 0, "(FI)I", 9 },
	{ "roundPositive", (intptr_t) SM_arc_math_Mathf_roundPositive_float_R_int, 0, "(F)I", 9 },
	{ "zero", (intptr_t) SM_arc_math_Mathf_zero_float_R_boolean, 0, "(F)Z", 9 },
	{ "zero", (intptr_t) SM_arc_math_Mathf_zero_double_R_boolean, 0, "(D)Z", 9 },
	{ "zero", (intptr_t) SM_arc_math_Mathf_zero_float_float_R_boolean, 0, "(FF)Z", 9 },
	{ "equal", (intptr_t) SM_arc_math_Mathf_equal_float_float_R_boolean, 0, "(FF)Z", 9 },
	{ "equal", (intptr_t) SM_arc_math_Mathf_equal_float_float_float_R_boolean, 0, "(FFF)Z", 9 },
	{ "log", (intptr_t) SM_arc_math_Mathf_log_float_float_R_float, 0, "(FF)F", 9 },
	{ "log2", (intptr_t) SM_arc_math_Mathf_log2_float_R_float, 0, "(F)F", 9 },
	{ "log2", (intptr_t) SM_arc_math_Mathf_log2_int_R_int, 0, "(I)I", 9 },
	{ "mod", (intptr_t) SM_arc_math_Mathf_mod_float_float_R_float, 0, "(FF)F", 9 },
	{ "mod", (intptr_t) SM_arc_math_Mathf_mod_int_int_R_int, 0, "(II)I", 9 },
	{ "sample", (intptr_t) SM_arc_math_Mathf_sample_Array1_float_float_R_float, 0, "([FF)F", 9 },
	{ "slope", (intptr_t) SM_arc_math_Mathf_slope_float_R_float, 0, "(F)F", 9 },
	{ "curve", (intptr_t) SM_arc_math_Mathf_curve_float_float_R_float, 0, "(FF)F", 9 },
	{ "curve", (intptr_t) SM_arc_math_Mathf_curve_float_float_float_R_float, 0, "(FFF)F", 9 },
	{ "curveMargin", (intptr_t) SM_arc_math_Mathf_curveMargin_float_float_R_float, 0, "(FF)F", 9 },
	{ "curveMargin", (intptr_t) SM_arc_math_Mathf_curveMargin_float_float_float_R_float, 0, "(FFF)F", 9 },
	{ "len", (intptr_t) SM_arc_math_Mathf_len_float_float_R_float, 0, "(FF)F", 9 },
	{ "len2", (intptr_t) SM_arc_math_Mathf_len2_float_float_R_float, 0, "(FF)F", 9 },
	{ "dot", (intptr_t) SM_arc_math_Mathf_dot_float_float_float_float_R_float, 0, "(FFFF)F", 9 },
	{ "dst", (intptr_t) SM_arc_math_Mathf_dst_float_float_R_float, 0, "(FF)F", 9 },
	{ "dst2", (intptr_t) SM_arc_math_Mathf_dst2_float_float_R_float, 0, "(FF)F", 9 },
	{ "dst", (intptr_t) SM_arc_math_Mathf_dst_float_float_float_float_R_float, 0, "(FFFF)F", 9 },
	{ "dst2", (intptr_t) SM_arc_math_Mathf_dst2_float_float_float_float_R_float, 0, "(FFFF)F", 9 },
	{ "dstm", (intptr_t) SM_arc_math_Mathf_dstm_float_float_float_float_R_float, 0, "(FFFF)F", 9 },
	{ "arrive", (intptr_t) SM_arc_math_Mathf_arrive_arc_math_geom_Position_arc_math_geom_Position_arc_math_geom_Vec2_float_float_float_float_R_arc_math_geom_Vec2, 0, "(Larc/math/geom/Position;Larc/math/geom/Position;Larc/math/geom/Vec2;FFFF)Larc/math/geom/Vec2;", 9 },
	{ "arrive", (intptr_t) SM_arc_math_Mathf_arrive_float_float_float_float_arc_math_geom_Vec2_float_float_float_float_R_arc_math_geom_Vec2, 0, "(FFFFLarc/math/geom/Vec2;FFFF)Larc/math/geom/Vec2;", 9 },
	{ "within", (intptr_t) SM_arc_math_Mathf_within_float_float_float_float_float_R_boolean, 0, "(FFFFF)Z", 9 },
	{ "within", (intptr_t) SM_arc_math_Mathf_within_float_float_float_R_boolean, 0, "(FFF)Z", 9 },
	{ "<clinit>", (intptr_t) clinit_arc_math_Mathf, 0, "()V", 8 },
};

Class class_arc_math_Mathf{
		.nativeName = (intptr_t) "arc/math/Mathf",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(arc_math_Mathf),
		.classVtable = (intptr_t) vtable_arc_math_Mathf,
		.staticInitializer = (intptr_t) clinit_arc_math_Mathf,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_arc_math_Mathf,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 49,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 34,
		.nativeFields = (intptr_t) fields,
		.methodCount = 104,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 11,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_arc_math_Mathf = registerClass(&class_arc_math_Mathf);

}
