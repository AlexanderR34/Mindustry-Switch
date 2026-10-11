#include "arc/math/WindowedMean.h"
#include "arc/math/Mathf.h"
#include "java/lang/Math.h"
#include "java/lang/Object.h"
#include "arc/math/WindowedMean.h"
#include "java/util/Arrays.h"
#include "java/lang/System.h"

extern "C" {


void mark_arc_math_WindowedMean(jobject object, jint mark, jint depth) {
	if (!object) {
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
	auto self = (arc_math_WindowedMean *) object;
	if (self->F_values)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_values)->clazz)->markFunction)((jobject) self->F_values, mark, depth + 1);
}

void clinit_arc_math_WindowedMean(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
}

void init_arc_math_WindowedMean_int(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/math/WindowedMean:<init>", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_math_WindowedMean(ctx);
	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(23);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(13);
	((arc_math_WindowedMean *) NULL_CHECK((frame[0].o)))->F_addedValues = (jint(0));
	LINE_NUMBER(15);
	((arc_math_WindowedMean *) NULL_CHECK((frame[0].o)))->F_mean = (jfloat(0));
	LINE_NUMBER(16);
	((arc_math_WindowedMean *) NULL_CHECK((frame[0].o)))->F_dirty = (jint(1));
	LINE_NUMBER(24);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject) createArray(ctx, &class_float, (frame[1].i));
	((arc_math_WindowedMean *) NULL_CHECK(sp[0].o))->F_values = (jref) sp[1].o;
	LINE_NUMBER(25);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_arc_math_WindowedMean_reset(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/math/WindowedMean:reset", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(28);
	((arc_math_WindowedMean *) NULL_CHECK((frame[0].o)))->F_addedValues = (jint(0));
	LINE_NUMBER(29);
	((arc_math_WindowedMean *) NULL_CHECK((frame[0].o)))->F_lastValue = (jint(0));
	LINE_NUMBER(30);
	((arc_math_WindowedMean *) NULL_CHECK((frame[0].o)))->F_mean = (jfloat(0));
	LINE_NUMBER(31);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jfloat M_arc_math_WindowedMean_get_int_R_float(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/math/WindowedMean:get", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(34);
	sp[0].o = (jobject)((arc_math_WindowedMean *) NULL_CHECK((frame[0].o)))->F_values;
	jint temp0 = (frame[1].i) + ((jint)((arc_math_WindowedMean *) NULL_CHECK((frame[0].o)))->F_lastValue);
	sp[1].o = (jobject)((arc_math_WindowedMean *) NULL_CHECK((frame[0].o)))->F_values;
	jint temp1 = (jint)SM_arc_math_Mathf_mod_int_int_R_int(ctx, temp0, (((jarray) nullCheck(ctx, sp[1].o))->length));
	popStackFrame(ctx);
	return ((jfloat)ARRAY_ACCESS(jfloat, sp[0].o, temp1));
	}

	popStackFrame(ctx);
}

jbool M_arc_math_WindowedMean_hasEnoughData_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/math/WindowedMean:hasEnoughData", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(39);
	jint temp0 = (jint)((arc_math_WindowedMean *) NULL_CHECK((frame[0].o)))->F_addedValues;
	sp[0].o = (jobject)((arc_math_WindowedMean *) NULL_CHECK((frame[0].o)))->F_values;
	if (temp0 < (((jarray) nullCheck(ctx, sp[0].o))->length)) goto label_1;
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

void M_arc_math_WindowedMean_clear(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/math/WindowedMean:clear", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(44);
	((arc_math_WindowedMean *) NULL_CHECK((frame[0].o)))->F_addedValues = (jint(0));
	LINE_NUMBER(45);
	((arc_math_WindowedMean *) NULL_CHECK((frame[0].o)))->F_lastValue = (jint(0));
	LINE_NUMBER(46);
	sp[0].o = (jobject)((arc_math_WindowedMean *) NULL_CHECK((frame[0].o)))->F_values;
	SM_java_util_Arrays_fill_Array1_float_float(ctx, sp[0].o, (jfloat(0)));
	LINE_NUMBER(47);
	((arc_math_WindowedMean *) NULL_CHECK((frame[0].o)))->F_dirty = (jint(1));
	LINE_NUMBER(48);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_arc_math_WindowedMean_fill_float(jcontext ctx, jobject self, jfloat param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/math/WindowedMean:fill", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	{
	LINE_NUMBER(51);
	((arc_math_WindowedMean *) NULL_CHECK((frame[0].o)))->F_dirty = (jint(1));
	LINE_NUMBER(52);
	sp[0].o = (jobject)((arc_math_WindowedMean *) NULL_CHECK((frame[0].o)))->F_values;
	SM_java_util_Arrays_fill_Array1_float_float(ctx, sp[0].o, (frame[1].f));
	LINE_NUMBER(53);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((arc_math_WindowedMean *) NULL_CHECK((frame[0].o)))->F_values;
	((arc_math_WindowedMean *) NULL_CHECK(sp[0].o))->F_addedValues = (((jarray) nullCheck(ctx, sp[1].o))->length);
	LINE_NUMBER(54);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_arc_math_WindowedMean_add_float(jcontext ctx, jobject self, jfloat param0) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/math/WindowedMean:add", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	{
	LINE_NUMBER(61);
	jint temp0 = (jint)((arc_math_WindowedMean *) NULL_CHECK((frame[0].o)))->F_addedValues;
	sp[0].o = (jobject)((arc_math_WindowedMean *) NULL_CHECK((frame[0].o)))->F_values;
	if (temp0 >= (((jarray) nullCheck(ctx, sp[0].o))->length)) goto label_1;
	}
	{
	sp[0].o = frame[0].o;
	((arc_math_WindowedMean *) NULL_CHECK(sp[0].o))->F_addedValues = (((jint)((arc_math_WindowedMean *) NULL_CHECK(sp[0].o))->F_addedValues) + (jint(1)));
	}
label_1:;
	{
	LINE_NUMBER(62);
	sp[0].o = (jobject)((arc_math_WindowedMean *) NULL_CHECK((frame[0].o)))->F_values;
	sp[1].o = frame[0].o;
	jint temp0 = (jint)((arc_math_WindowedMean *) NULL_CHECK(sp[1].o))->F_lastValue;
	((arc_math_WindowedMean *) NULL_CHECK(sp[1].o))->F_lastValue = (temp0 + (jint(1)));
	ARRAY_ACCESS(jfloat, sp[0].o, temp0) = (frame[1].f);
	LINE_NUMBER(63);
	jint temp3 = (jint)((arc_math_WindowedMean *) NULL_CHECK((frame[0].o)))->F_lastValue;
	sp[0].o = (jobject)((arc_math_WindowedMean *) NULL_CHECK((frame[0].o)))->F_values;
	if (temp3 <= ((((jarray) nullCheck(ctx, sp[0].o))->length) - (jint(1)))) goto label_3;
	}
	{
	((arc_math_WindowedMean *) NULL_CHECK((frame[0].o)))->F_lastValue = (jint(0));
	}
label_3:;
	{
	LINE_NUMBER(64);
	((arc_math_WindowedMean *) NULL_CHECK((frame[0].o)))->F_dirty = (jint(1));
	LINE_NUMBER(65);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jfloat M_arc_math_WindowedMean_mean_R_float(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/math/WindowedMean:mean", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(73);
	jint temp0 = (jint)((func_arc_math_WindowedMean_hasEnoughData_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_math_WindowedMean_hasEnoughData_R_boolean])(ctx, (frame[0].o));
	if (temp0 == 0) goto label_1;
	}
	{
	LINE_NUMBER(74);
	if (((jint)((arc_math_WindowedMean *) NULL_CHECK((frame[0].o)))->F_dirty) == 0) goto label_3;
	}
	{
	LINE_NUMBER(75);
	frame[1].f = (jfloat(0));
	LINE_NUMBER(76);
	frame[2].i = (jint(0));
	}
label_6:;
	{
	jint temp0 = frame[2].i;
	sp[0].o = (jobject)((arc_math_WindowedMean *) NULL_CHECK((frame[0].o)))->F_values;
	if (temp0 >= (((jarray) nullCheck(ctx, sp[0].o))->length)) goto label_7;
	}
	{
	LINE_NUMBER(77);
	jfloat temp0 = frame[1].f;
	sp[0].o = (jobject)((arc_math_WindowedMean *) NULL_CHECK((frame[0].o)))->F_values;
	frame[1].f = (temp0 + ((jfloat)ARRAY_ACCESS(jfloat, sp[0].o, (frame[2].i))));
	LINE_NUMBER(76);
	INST_IINC(2, 1);
	goto label_6;
	}
label_7:;
	{
	LINE_NUMBER(79);
	sp[0].o = frame[0].o;
	jfloat temp0 = frame[1].f;
	sp[1].o = (jobject)((arc_math_WindowedMean *) NULL_CHECK((frame[0].o)))->F_values;
	((arc_math_WindowedMean *) NULL_CHECK(sp[0].o))->F_mean = (temp0 / (jfloat((((jarray) nullCheck(ctx, sp[1].o))->length))));
	LINE_NUMBER(80);
	((arc_math_WindowedMean *) NULL_CHECK((frame[0].o)))->F_dirty = (jint(0));
	}
label_3:;
	{
	LINE_NUMBER(82);
	popStackFrame(ctx);
	return ((jfloat)((arc_math_WindowedMean *) NULL_CHECK((frame[0].o)))->F_mean);
	}
label_1:;
	{
	LINE_NUMBER(83);
	popStackFrame(ctx);
	return (jfloat(0));
	}

	popStackFrame(ctx);
}

jfloat M_arc_math_WindowedMean_rawMean_R_float(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/math/WindowedMean:rawMean", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(88);
	jint temp0 = (jint)((func_arc_math_WindowedMean_hasEnoughData_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_math_WindowedMean_hasEnoughData_R_boolean])(ctx, (frame[0].o));
	if (temp0 == 0) goto label_1;
	}
	{
	LINE_NUMBER(89);
	jfloat temp0 = (jfloat)((func_arc_math_WindowedMean_mean_R_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_math_WindowedMean_mean_R_float])(ctx, (frame[0].o));
	popStackFrame(ctx);
	return temp0;
	}
label_1:;
	{
	LINE_NUMBER(90);
	if (((jint)((arc_math_WindowedMean *) NULL_CHECK((frame[0].o)))->F_addedValues) != 0) goto label_3;
	}
	{
	LINE_NUMBER(91);
	popStackFrame(ctx);
	return (jfloat(0));
	}
label_3:;
	{
	LINE_NUMBER(93);
	frame[1].f = (jfloat(0));
	LINE_NUMBER(94);
	frame[2].i = (jint(0));
	}
label_6:;
	{
	if ((frame[2].i) >= ((jint)((arc_math_WindowedMean *) NULL_CHECK((frame[0].o)))->F_lastValue)) goto label_7;
	}
	{
	LINE_NUMBER(95);
	jfloat temp0 = frame[1].f;
	sp[0].o = (jobject)((arc_math_WindowedMean *) NULL_CHECK((frame[0].o)))->F_values;
	frame[1].f = (temp0 + ((jfloat)ARRAY_ACCESS(jfloat, sp[0].o, (frame[2].i))));
	LINE_NUMBER(94);
	INST_IINC(2, 1);
	goto label_6;
	}
label_7:;
	{
	LINE_NUMBER(97);
	popStackFrame(ctx);
	return ((frame[1].f) / (jfloat(((jint)((arc_math_WindowedMean *) NULL_CHECK((frame[0].o)))->F_addedValues))));
	}

	popStackFrame(ctx);
}

jfloat M_arc_math_WindowedMean_oldest_R_float(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/math/WindowedMean:oldest", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(103);
	jint temp0 = (jint)((arc_math_WindowedMean *) NULL_CHECK((frame[0].o)))->F_addedValues;
	sp[0].o = (jobject)((arc_math_WindowedMean *) NULL_CHECK((frame[0].o)))->F_values;
	if (temp0 >= (((jarray) nullCheck(ctx, sp[0].o))->length)) goto label_1;
	}
	{
	sp[0].o = (jobject)((arc_math_WindowedMean *) NULL_CHECK((frame[0].o)))->F_values;
	jfloat temp0 = (jfloat)ARRAY_ACCESS(jfloat, sp[0].o, (jint(0)));
	sp[0].f = temp0;
	sp += 1;
	goto label_2;
	}
label_1:;
	{
	sp[0].o = (jobject)((arc_math_WindowedMean *) NULL_CHECK((frame[0].o)))->F_values;
	jfloat temp0 = (jfloat)ARRAY_ACCESS(jfloat, sp[0].o, ((jint)((arc_math_WindowedMean *) NULL_CHECK((frame[0].o)))->F_lastValue));
	sp[0].f = temp0;
	sp += 1;
	}
label_2:;
	popStackFrame(ctx);
	INST_FRETURN();

	popStackFrame(ctx);
}

jfloat M_arc_math_WindowedMean_latest_R_float(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/math/WindowedMean:latest", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(108);
	sp[0].o = (jobject)((arc_math_WindowedMean *) NULL_CHECK((frame[0].o)))->F_values;
	sp += 1;
	if ((((jint)((arc_math_WindowedMean *) NULL_CHECK((frame[0].o)))->F_lastValue) - (jint(1))) != (jint(-1))) goto label_1;
	}
	{
	sp[0].o = (jobject)((arc_math_WindowedMean *) NULL_CHECK((frame[0].o)))->F_values;
	jint temp0 = (((jarray) nullCheck(ctx, sp[0].o))->length) - (jint(1));
	sp[0].i = temp0;
	sp += 1;
	goto label_2;
	}
label_1:;
	{
	jint temp0 = ((jint)((arc_math_WindowedMean *) NULL_CHECK((frame[0].o)))->F_lastValue) - (jint(1));
	sp[0].i = temp0;
	sp += 1;
	}
label_2:;
	INST_FALOAD();
	popStackFrame(ctx);
	INST_FRETURN();

	popStackFrame(ctx);
}

jfloat M_arc_math_WindowedMean_standardDeviation_R_float(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/math/WindowedMean:standardDeviation", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(113);
	jint temp0 = (jint)((func_arc_math_WindowedMean_hasEnoughData_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_math_WindowedMean_hasEnoughData_R_boolean])(ctx, (frame[0].o));
	if (temp0 != 0) goto label_1;
	}
	INST_FCONST(0);
	popStackFrame(ctx);
	INST_FRETURN();
label_1:;
	{
	LINE_NUMBER(115);
	jfloat temp0 = (jfloat)((func_arc_math_WindowedMean_mean_R_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_math_WindowedMean_mean_R_float])(ctx, (frame[0].o));
	frame[1].f = temp0;
	LINE_NUMBER(116);
	frame[2].f = (jfloat(0));
	LINE_NUMBER(117);
	frame[3].i = (jint(0));
	}
label_4:;
	{
	jint temp0 = frame[3].i;
	sp[0].o = (jobject)((arc_math_WindowedMean *) NULL_CHECK((frame[0].o)))->F_values;
	if (temp0 >= (((jarray) nullCheck(ctx, sp[0].o))->length)) goto label_5;
	}
	{
	LINE_NUMBER(118);
	jfloat temp0 = frame[2].f;
	sp[0].o = (jobject)((arc_math_WindowedMean *) NULL_CHECK((frame[0].o)))->F_values;
	jfloat temp1 = ((jfloat)ARRAY_ACCESS(jfloat, sp[0].o, (frame[3].i))) - (frame[1].f);
	sp[0].o = (jobject)((arc_math_WindowedMean *) NULL_CHECK((frame[0].o)))->F_values;
	frame[2].f = (temp0 + (temp1 * (((jfloat)ARRAY_ACCESS(jfloat, sp[0].o, (frame[3].i))) - (frame[1].f))));
	LINE_NUMBER(117);
	INST_IINC(3, 1);
	goto label_4;
	}
label_5:;
	{
	LINE_NUMBER(121);
	jfloat temp0 = frame[2].f;
	sp[0].o = (jobject)((arc_math_WindowedMean *) NULL_CHECK((frame[0].o)))->F_values;
	jdouble temp1 = (jdouble)SM_java_lang_Math_sqrt_double_R_double(ctx, (jdouble((temp0 / (jfloat((((jarray) nullCheck(ctx, sp[0].o))->length)))))));
	popStackFrame(ctx);
	return (jfloat(temp1));
	}

	popStackFrame(ctx);
}

jfloat M_arc_math_WindowedMean_lowest_R_float(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/math/WindowedMean:lowest", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(125);
	frame[1].f = (jfloat(3,402823e+38f));
	LINE_NUMBER(126);
	frame[2].i = (jint(0));
	}
label_2:;
	{
	jint temp0 = frame[2].i;
	sp[0].o = (jobject)((arc_math_WindowedMean *) NULL_CHECK((frame[0].o)))->F_values;
	if (temp0 >= (((jarray) nullCheck(ctx, sp[0].o))->length)) goto label_3;
	}
	{
	LINE_NUMBER(127);
	jfloat temp0 = frame[1].f;
	sp[0].o = (jobject)((arc_math_WindowedMean *) NULL_CHECK((frame[0].o)))->F_values;
	jfloat temp1 = (jfloat)SM_java_lang_Math_min_float_float_R_float(ctx, temp0, ((jfloat)ARRAY_ACCESS(jfloat, sp[0].o, (frame[2].i))));
	frame[1].f = temp1;
	LINE_NUMBER(126);
	INST_IINC(2, 1);
	goto label_2;
	}
label_3:;
	{
	LINE_NUMBER(128);
	popStackFrame(ctx);
	return (frame[1].f);
	}

	popStackFrame(ctx);
}

jfloat M_arc_math_WindowedMean_highest_R_float(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/math/WindowedMean:highest", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(132);
	frame[1].f = (jfloat(1,175494e-38f));
	LINE_NUMBER(133);
	frame[2].i = (jint(0));
	}
label_2:;
	{
	jint temp0 = frame[2].i;
	sp[0].o = (jobject)((arc_math_WindowedMean *) NULL_CHECK((frame[0].o)))->F_values;
	if (temp0 >= (((jarray) nullCheck(ctx, sp[0].o))->length)) goto label_3;
	}
	{
	LINE_NUMBER(134);
	jfloat temp0 = frame[1].f;
	sp[0].o = (jobject)((arc_math_WindowedMean *) NULL_CHECK((frame[0].o)))->F_values;
	jfloat temp1 = (jfloat)SM_java_lang_Math_max_float_float_R_float(ctx, temp0, ((jfloat)ARRAY_ACCESS(jfloat, sp[0].o, (frame[2].i))));
	frame[1].f = temp1;
	LINE_NUMBER(133);
	INST_IINC(2, 1);
	goto label_2;
	}
label_3:;
	{
	LINE_NUMBER(135);
	popStackFrame(ctx);
	return (frame[1].f);
	}

	popStackFrame(ctx);
}

jint M_arc_math_WindowedMean_getCount_R_int(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/math/WindowedMean:getCount", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(139);
	popStackFrame(ctx);
	return ((jint)((arc_math_WindowedMean *) NULL_CHECK((frame[0].o)))->F_addedValues);
	}

	popStackFrame(ctx);
}

jint M_arc_math_WindowedMean_getWindowSize_R_int(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/math/WindowedMean:getWindowSize", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(143);
	sp[0].o = (jobject)((arc_math_WindowedMean *) NULL_CHECK((frame[0].o)))->F_values;
	popStackFrame(ctx);
	return (((jarray) nullCheck(ctx, sp[0].o))->length);
	}

	popStackFrame(ctx);
}

jobject M_arc_math_WindowedMean_getWindowValues_R_Array1_float(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/math/WindowedMean:getWindowValues", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(151);
	sp[0].o = (jobject) createArray(ctx, &class_float, ((jint)((arc_math_WindowedMean *) NULL_CHECK((frame[0].o)))->F_addedValues));
	frame[1].o = sp[0].o;
	LINE_NUMBER(152);
	jint temp0 = (jint)((func_arc_math_WindowedMean_hasEnoughData_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_math_WindowedMean_hasEnoughData_R_boolean])(ctx, (frame[0].o));
	if (temp0 == 0) goto label_2;
	}
	{
	LINE_NUMBER(153);
	frame[2].i = (jint(0));
	}
label_4:;
	{
	if ((frame[2].i) >= (((jarray) nullCheck(ctx, (frame[1].o)))->length)) goto label_5;
	}
	{
	LINE_NUMBER(154);
	sp[0].o = frame[1].o;
	jint temp0 = frame[2].i;
	sp[1].o = (jobject)((arc_math_WindowedMean *) NULL_CHECK((frame[0].o)))->F_values;
	jint temp1 = (frame[2].i) + ((jint)((arc_math_WindowedMean *) NULL_CHECK((frame[0].o)))->F_lastValue);
	sp[2].o = (jobject)((arc_math_WindowedMean *) NULL_CHECK((frame[0].o)))->F_values;
	ARRAY_ACCESS(jfloat, sp[0].o, temp0) = ((jfloat)ARRAY_ACCESS(jfloat, sp[1].o, (temp1 % (((jarray) nullCheck(ctx, sp[2].o))->length))));
	LINE_NUMBER(153);
	INST_IINC(2, 1);
	goto label_4;
	}
label_5:;
	goto label_8;
label_2:;
	{
	LINE_NUMBER(157);
	sp[0].o = (jobject)((arc_math_WindowedMean *) NULL_CHECK((frame[0].o)))->F_values;
	SM_java_lang_System_arraycopy_java_lang_Object_int_java_lang_Object_int_int(ctx, sp[0].o, (jint(0)), (frame[1].o), (jint(0)), ((jint)((arc_math_WindowedMean *) NULL_CHECK((frame[0].o)))->F_addedValues));
	}
label_8:;
	{
	LINE_NUMBER(159);
	popStackFrame(ctx);
	return (frame[1].o);
	}

	popStackFrame(ctx);
}

void *vtable_arc_math_WindowedMean[] {
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
	(void *) M_arc_math_WindowedMean_reset,
	(void *) M_arc_math_WindowedMean_get_int_R_float,
	(void *) M_arc_math_WindowedMean_hasEnoughData_R_boolean,
	(void *) M_arc_math_WindowedMean_clear,
	(void *) M_arc_math_WindowedMean_fill_float,
	(void *) M_arc_math_WindowedMean_add_float,
	(void *) M_arc_math_WindowedMean_mean_R_float,
	(void *) M_arc_math_WindowedMean_rawMean_R_float,
	(void *) M_arc_math_WindowedMean_oldest_R_float,
	(void *) M_arc_math_WindowedMean_latest_R_float,
	(void *) M_arc_math_WindowedMean_standardDeviation_R_float,
	(void *) M_arc_math_WindowedMean_lowest_R_float,
	(void *) M_arc_math_WindowedMean_highest_R_float,
	(void *) M_arc_math_WindowedMean_getCount_R_int,
	(void *) M_arc_math_WindowedMean_getWindowSize_R_int,
	(void *) M_arc_math_WindowedMean_getWindowValues_R_Array1_float,
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
	{ "reset", "()V" },
	{ "get", "(I)F" },
	{ "hasEnoughData", "()Z" },
	{ "clear", "()V" },
	{ "fill", "(F)V" },
	{ "add", "(F)V" },
	{ "mean", "()F" },
	{ "rawMean", "()F" },
	{ "oldest", "()F" },
	{ "latest", "()F" },
	{ "standardDeviation", "()F" },
	{ "lowest", "()F" },
	{ "highest", "()F" },
	{ "getCount", "()I" },
	{ "getWindowSize", "()I" },
	{ "getWindowValues", "()[F" },
};

static FieldMetadata fields[] {
	{ "values", getArrayClass(&class_float, 1), offsetof(arc_math_WindowedMean, F_values), "[F", 0 },
	{ "addedValues", &class_int, offsetof(arc_math_WindowedMean, F_addedValues), "I", 0 },
	{ "lastValue", &class_int, offsetof(arc_math_WindowedMean, F_lastValue), "I", 0 },
	{ "mean", &class_float, offsetof(arc_math_WindowedMean, F_mean), "F", 0 },
	{ "dirty", &class_boolean, offsetof(arc_math_WindowedMean, F_dirty), "Z", 0 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_arc_math_WindowedMean_int, 0, "(I)V", 1 },
	{ "reset", (intptr_t) M_arc_math_WindowedMean_reset, VTABLE_arc_math_WindowedMean_reset, "()V", 1 },
	{ "get", (intptr_t) M_arc_math_WindowedMean_get_int_R_float, VTABLE_arc_math_WindowedMean_get_int_R_float, "(I)F", 1 },
	{ "hasEnoughData", (intptr_t) M_arc_math_WindowedMean_hasEnoughData_R_boolean, VTABLE_arc_math_WindowedMean_hasEnoughData_R_boolean, "()Z", 1 },
	{ "clear", (intptr_t) M_arc_math_WindowedMean_clear, VTABLE_arc_math_WindowedMean_clear, "()V", 1 },
	{ "fill", (intptr_t) M_arc_math_WindowedMean_fill_float, VTABLE_arc_math_WindowedMean_fill_float, "(F)V", 1 },
	{ "add", (intptr_t) M_arc_math_WindowedMean_add_float, VTABLE_arc_math_WindowedMean_add_float, "(F)V", 1 },
	{ "mean", (intptr_t) M_arc_math_WindowedMean_mean_R_float, VTABLE_arc_math_WindowedMean_mean_R_float, "()F", 1 },
	{ "rawMean", (intptr_t) M_arc_math_WindowedMean_rawMean_R_float, VTABLE_arc_math_WindowedMean_rawMean_R_float, "()F", 1 },
	{ "oldest", (intptr_t) M_arc_math_WindowedMean_oldest_R_float, VTABLE_arc_math_WindowedMean_oldest_R_float, "()F", 1 },
	{ "latest", (intptr_t) M_arc_math_WindowedMean_latest_R_float, VTABLE_arc_math_WindowedMean_latest_R_float, "()F", 1 },
	{ "standardDeviation", (intptr_t) M_arc_math_WindowedMean_standardDeviation_R_float, VTABLE_arc_math_WindowedMean_standardDeviation_R_float, "()F", 1 },
	{ "lowest", (intptr_t) M_arc_math_WindowedMean_lowest_R_float, VTABLE_arc_math_WindowedMean_lowest_R_float, "()F", 1 },
	{ "highest", (intptr_t) M_arc_math_WindowedMean_highest_R_float, VTABLE_arc_math_WindowedMean_highest_R_float, "()F", 1 },
	{ "getCount", (intptr_t) M_arc_math_WindowedMean_getCount_R_int, VTABLE_arc_math_WindowedMean_getCount_R_int, "()I", 1 },
	{ "getWindowSize", (intptr_t) M_arc_math_WindowedMean_getWindowSize_R_int, VTABLE_arc_math_WindowedMean_getWindowSize_R_int, "()I", 1 },
	{ "getWindowValues", (intptr_t) M_arc_math_WindowedMean_getWindowValues_R_Array1_float, VTABLE_arc_math_WindowedMean_getWindowValues_R_Array1_float, "()[F", 1 },
};

Class class_arc_math_WindowedMean{
		.nativeName = (intptr_t) "arc/math/WindowedMean",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(arc_math_WindowedMean),
		.classVtable = (intptr_t) vtable_arc_math_WindowedMean,
		.staticInitializer = (intptr_t) clinit_arc_math_WindowedMean,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_arc_math_WindowedMean,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 49,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 5,
		.nativeFields = (intptr_t) fields,
		.methodCount = 17,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 27,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_arc_math_WindowedMean = registerClass(&class_arc_math_WindowedMean);

}
