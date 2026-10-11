#include "arc/math/Extrapolator.h"
#include "java/lang/Math.h"
#include "java/lang/Object.h"
#include "java/lang/String.h"
#include "java/lang/UnsupportedOperationException.h"
#include "java/util/Arrays.h"
#include "arc/math/Extrapolator.h"

extern "C" {


void mark_arc_math_Extrapolator(jobject object, jint mark, jint depth) {
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
	auto self = (arc_math_Extrapolator *) object;
	if (self->F_snapPos)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_snapPos)->clazz)->markFunction)((jobject) self->F_snapPos, mark, depth + 1);
	if (self->F_snapVel)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_snapVel)->clazz)->markFunction)((jobject) self->F_snapVel, mark, depth + 1);
	if (self->F_aimPos)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_aimPos)->clazz)->markFunction)((jobject) self->F_aimPos, mark, depth + 1);
	if (self->F_lastPacketPos)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_lastPacketPos)->clazz)->markFunction)((jobject) self->F_lastPacketPos, mark, depth + 1);
	if (self->F_tmpArr)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_tmpArr)->clazz)->markFunction)((jobject) self->F_tmpArr, mark, depth + 1);
	if (self->F_tmpArr2)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_tmpArr2)->clazz)->markFunction)((jobject) self->F_tmpArr2, mark, depth + 1);
}

void clinit_arc_math_Extrapolator(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
}

void init_arc_math_Extrapolator_int(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/math/Extrapolator:<init>", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_math_Extrapolator(ctx);
	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(11);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(12);
	((arc_math_Extrapolator *) NULL_CHECK((frame[0].o)))->F_size = (frame[1].i);
	LINE_NUMBER(13);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject) createArray(ctx, &class_float, (frame[1].i));
	((arc_math_Extrapolator *) NULL_CHECK(sp[0].o))->F_snapPos = (jref) sp[1].o;
	LINE_NUMBER(14);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject) createArray(ctx, &class_float, (frame[1].i));
	((arc_math_Extrapolator *) NULL_CHECK(sp[0].o))->F_snapVel = (jref) sp[1].o;
	LINE_NUMBER(15);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject) createArray(ctx, &class_float, (frame[1].i));
	((arc_math_Extrapolator *) NULL_CHECK(sp[0].o))->F_aimPos = (jref) sp[1].o;
	LINE_NUMBER(16);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject) createArray(ctx, &class_float, (frame[1].i));
	((arc_math_Extrapolator *) NULL_CHECK(sp[0].o))->F_lastPacketPos = (jref) sp[1].o;
	LINE_NUMBER(17);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject) createArray(ctx, &class_float, (frame[1].i));
	((arc_math_Extrapolator *) NULL_CHECK(sp[0].o))->F_tmpArr = (jref) sp[1].o;
	LINE_NUMBER(18);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject) createArray(ctx, &class_float, (frame[1].i));
	((arc_math_Extrapolator *) NULL_CHECK(sp[0].o))->F_tmpArr2 = (jref) sp[1].o;
	LINE_NUMBER(19);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jbool M_arc_math_Extrapolator_addSample_double_double_Array1_float_R_boolean(jcontext ctx, jobject self, jdouble param0, jdouble param1, jobject param2) {
	NULL_CHECK(self);
	jtype frame[17];
	auto stack = &frame[10];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/math/Extrapolator:addSample", 17 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].d = param0;
	frame[3].d = param1;
	frame[5].o = param2;
	{
	LINE_NUMBER(24);
	sp[0].o = (jobject)((arc_math_Extrapolator *) NULL_CHECK((frame[0].o)))->F_tmpArr2;
	frame[6].o = sp[0].o;
	LINE_NUMBER(25);
	jdouble temp0 = (jdouble)SM_java_lang_Math_abs_double_R_double(ctx, ((frame[1].d) - ((jdouble)((arc_math_Extrapolator *) NULL_CHECK((frame[0].o)))->F_lastPacketTime)));
	if ((doubleCompare(temp0, (jdouble(1,000000e-04)), -1)) <= 0) goto label_2;
	}
	{
	LINE_NUMBER(26);
	frame[7].d = ((jdouble(1)) / ((frame[1].d) - ((jdouble)((arc_math_Extrapolator *) NULL_CHECK((frame[0].o)))->F_lastPacketTime)));
	LINE_NUMBER(27);
	frame[9].i = (jint(0));
	}
label_5:;
	{
	if ((frame[9].i) >= ((jint)((arc_math_Extrapolator *) NULL_CHECK((frame[0].o)))->F_size)) goto label_6;
	}
	{
	LINE_NUMBER(28);
	sp[0].o = frame[6].o;
	jint temp0 = frame[9].i;
	jfloat temp1 = (jfloat)ARRAY_ACCESS(jfloat, (frame[5].o), (frame[9].i));
	sp[1].o = (jobject)((arc_math_Extrapolator *) NULL_CHECK((frame[0].o)))->F_lastPacketPos;
	ARRAY_ACCESS(jfloat, sp[0].o, temp0) = (jfloat(((jdouble((temp1 - ((jfloat)ARRAY_ACCESS(jfloat, sp[1].o, (frame[9].i)))))) * (frame[7].d))));
	LINE_NUMBER(27);
	INST_IINC(9, 1);
	goto label_5;
	}
label_6:;
	LINE_NUMBER(30);
	goto label_9;
label_2:;
	{
	LINE_NUMBER(31);
	sp[0].o = (jobject)M_arc_math_Extrapolator_clear_Array1_float_R_Array1_float(ctx, (frame[0].o), (frame[6].o));
	}
label_9:;
	{
	LINE_NUMBER(34);
	jint temp0 = (jint)((func_arc_math_Extrapolator_addSample_double_double_Array1_float_Array1_float_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_math_Extrapolator_addSample_double_double_Array1_float_Array1_float_R_boolean])(ctx, (frame[0].o), (frame[1].d), (frame[3].d), (frame[5].o), (frame[6].o));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jbool M_arc_math_Extrapolator_addSample_double_double_Array1_float_Array1_float_R_boolean(jcontext ctx, jobject self, jdouble param0, jdouble param1, jobject param2, jobject param3) {
	NULL_CHECK(self);
	jtype frame[18];
	auto stack = &frame[10];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/math/Extrapolator:addSample", 18 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].d = param0;
	frame[3].d = param1;
	frame[5].o = param2;
	frame[6].o = param3;
	{
	LINE_NUMBER(38);
	jint temp0 = (jint)M_arc_math_Extrapolator_estimates_double_double_R_boolean(ctx, (frame[0].o), (frame[1].d), (frame[3].d));
	if (temp0 != 0) goto label_1;
	}
	{
	LINE_NUMBER(39);
	popStackFrame(ctx);
	return (jint(0));
	}
label_1:;
	{
	LINE_NUMBER(42);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((arc_math_Extrapolator *) NULL_CHECK((frame[0].o)))->F_lastPacketPos;
	M_arc_math_Extrapolator_copyArray_Array1_float_Array1_float(ctx, sp[0].o, sp[1].o, (frame[5].o));
	LINE_NUMBER(43);
	((arc_math_Extrapolator *) NULL_CHECK((frame[0].o)))->F_lastPacketTime = (frame[1].d);
	LINE_NUMBER(44);
	sp[0].o = frame[0].o;
	jdouble temp0 = frame[3].d;
	sp[1].o = (jobject)((arc_math_Extrapolator *) NULL_CHECK((frame[0].o)))->F_snapPos;
	jint temp1 = (jint)((func_arc_math_Extrapolator_readPosition_double_Array1_float_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_Extrapolator_readPosition_double_Array1_float_R_boolean])(ctx, sp[0].o, temp0, sp[1].o);
	LINE_NUMBER(45);
	((arc_math_Extrapolator *) NULL_CHECK((frame[0].o)))->F_aimTime = ((frame[3].d) + ((jdouble)((arc_math_Extrapolator *) NULL_CHECK((frame[0].o)))->F_updateTime));
	LINE_NUMBER(46);
	frame[7].d = (((jdouble)((arc_math_Extrapolator *) NULL_CHECK((frame[0].o)))->F_aimTime) - (frame[1].d));
	LINE_NUMBER(47);
	((arc_math_Extrapolator *) NULL_CHECK((frame[0].o)))->F_snapTime = (frame[3].d);
	LINE_NUMBER(48);
	frame[9].i = (jint(0));
	}
label_9:;
	{
	if ((frame[9].i) >= ((jint)((arc_math_Extrapolator *) NULL_CHECK((frame[0].o)))->F_size)) goto label_10;
	}
	{
	LINE_NUMBER(49);
	sp[0].o = (jobject)((arc_math_Extrapolator *) NULL_CHECK((frame[0].o)))->F_aimPos;
	ARRAY_ACCESS(jfloat, sp[0].o, (frame[9].i)) = (jfloat(((jdouble(((jfloat)ARRAY_ACCESS(jfloat, (frame[5].o), (frame[9].i))))) + ((jdouble(((jfloat)ARRAY_ACCESS(jfloat, (frame[6].o), (frame[9].i))))) * (frame[7].d)))));
	LINE_NUMBER(48);
	INST_IINC(9, 1);
	goto label_9;
	}
label_10:;
	{
	LINE_NUMBER(58);
	jdouble temp0 = (jdouble)SM_java_lang_Math_abs_double_R_double(ctx, (((jdouble)((arc_math_Extrapolator *) NULL_CHECK((frame[0].o)))->F_aimTime) - ((jdouble)((arc_math_Extrapolator *) NULL_CHECK((frame[0].o)))->F_snapTime)));
	if ((doubleCompare(temp0, (jdouble(1,000000e-04)), 1)) >= 0) goto label_13;
	}
	{
	LINE_NUMBER(59);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((arc_math_Extrapolator *) NULL_CHECK((frame[0].o)))->F_snapVel;
	M_arc_math_Extrapolator_copyArray_Array1_float_Array1_float(ctx, sp[0].o, sp[1].o, (frame[6].o));
	goto label_15;
	}
label_13:;
	{
	LINE_NUMBER(61);
	frame[7].d = ((jdouble(1)) / (((jdouble)((arc_math_Extrapolator *) NULL_CHECK((frame[0].o)))->F_aimTime) - ((jdouble)((arc_math_Extrapolator *) NULL_CHECK((frame[0].o)))->F_snapTime)));
	LINE_NUMBER(62);
	frame[9].i = (jint(0));
	}
label_17:;
	{
	if ((frame[9].i) >= ((jint)((arc_math_Extrapolator *) NULL_CHECK((frame[0].o)))->F_size)) goto label_15;
	}
	{
	LINE_NUMBER(63);
	sp[0].o = (jobject)((arc_math_Extrapolator *) NULL_CHECK((frame[0].o)))->F_snapVel;
	jint temp0 = frame[9].i;
	sp[1].o = (jobject)((arc_math_Extrapolator *) NULL_CHECK((frame[0].o)))->F_aimPos;
	jfloat temp1 = (jfloat)ARRAY_ACCESS(jfloat, sp[1].o, (frame[9].i));
	sp[1].o = (jobject)((arc_math_Extrapolator *) NULL_CHECK((frame[0].o)))->F_snapPos;
	ARRAY_ACCESS(jfloat, sp[0].o, temp0) = (jfloat(((jdouble((temp1 - ((jfloat)ARRAY_ACCESS(jfloat, sp[1].o, (frame[9].i)))))) * (frame[7].d))));
	LINE_NUMBER(62);
	INST_IINC(9, 1);
	goto label_17;
	}
label_15:;
	{
	LINE_NUMBER(67);
	popStackFrame(ctx);
	return (jint(1));
	}

	popStackFrame(ctx);
}

jbool M_arc_math_Extrapolator_addSample_double_double_float_R_boolean(jcontext ctx, jobject self, jdouble param0, jdouble param1, jfloat param2) {
	NULL_CHECK(self);
	jtype frame[12];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/math/Extrapolator:addSample", 12 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].d = param0;
	frame[3].d = param1;
	frame[5].f = param2;
	{
	LINE_NUMBER(74);
	M_arc_math_Extrapolator_checkArraySizeOne(ctx, (frame[0].o));
	LINE_NUMBER(76);
	sp[0].o = (jobject)((arc_math_Extrapolator *) NULL_CHECK((frame[0].o)))->F_tmpArr;
	ARRAY_ACCESS(jfloat, sp[0].o, (jint(0))) = (frame[5].f);
	LINE_NUMBER(77);
	sp[0].o = frame[0].o;
	jdouble temp0 = frame[1].d;
	jdouble temp1 = frame[3].d;
	sp[1].o = (jobject)((arc_math_Extrapolator *) NULL_CHECK((frame[0].o)))->F_tmpArr;
	jint temp2 = (jint)((func_arc_math_Extrapolator_addSample_double_double_Array1_float_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_Extrapolator_addSample_double_double_Array1_float_R_boolean])(ctx, sp[0].o, temp0, temp1, sp[1].o);
	popStackFrame(ctx);
	return temp2;
	}

	popStackFrame(ctx);
}

jbool M_arc_math_Extrapolator_addSample_double_double_float_float_R_boolean(jcontext ctx, jobject self, jdouble param0, jdouble param1, jfloat param2, jfloat param3) {
	NULL_CHECK(self);
	jtype frame[14];
	auto stack = &frame[7];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/math/Extrapolator:addSample", 14 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].d = param0;
	frame[3].d = param1;
	frame[5].f = param2;
	frame[6].f = param3;
	{
	LINE_NUMBER(84);
	M_arc_math_Extrapolator_checkArraySizeOne(ctx, (frame[0].o));
	LINE_NUMBER(86);
	sp[0].o = (jobject)((arc_math_Extrapolator *) NULL_CHECK((frame[0].o)))->F_tmpArr;
	ARRAY_ACCESS(jfloat, sp[0].o, (jint(0))) = (frame[5].f);
	LINE_NUMBER(87);
	sp[0].o = (jobject)((arc_math_Extrapolator *) NULL_CHECK((frame[0].o)))->F_tmpArr2;
	ARRAY_ACCESS(jfloat, sp[0].o, (jint(0))) = (frame[6].f);
	LINE_NUMBER(88);
	sp[0].o = frame[0].o;
	jdouble temp0 = frame[1].d;
	jdouble temp1 = frame[3].d;
	sp[1].o = (jobject)((arc_math_Extrapolator *) NULL_CHECK((frame[0].o)))->F_tmpArr;
	sp[2].o = (jobject)((arc_math_Extrapolator *) NULL_CHECK((frame[0].o)))->F_tmpArr2;
	jint temp2 = (jint)((func_arc_math_Extrapolator_addSample_double_double_Array1_float_Array1_float_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_Extrapolator_addSample_double_double_Array1_float_Array1_float_R_boolean])(ctx, sp[0].o, temp0, temp1, sp[1].o, sp[2].o);
	popStackFrame(ctx);
	return temp2;
	}

	popStackFrame(ctx);
}

void M_arc_math_Extrapolator_reset_double_double_Array1_float(jcontext ctx, jobject self, jdouble param0, jdouble param1, jobject param2) {
	NULL_CHECK(self);
	jtype frame[14];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/math/Extrapolator:reset", 14 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].d = param0;
	frame[3].d = param1;
	frame[5].o = param2;
	{
	LINE_NUMBER(92);
	sp[0].o = frame[0].o;
	jdouble temp0 = frame[1].d;
	jdouble temp1 = frame[3].d;
	sp[1].o = frame[5].o;
	sp[2].o = frame[0].o;
	sp[3].o = (jobject)((arc_math_Extrapolator *) NULL_CHECK((frame[0].o)))->F_tmpArr;
	sp[2].o = (jobject)M_arc_math_Extrapolator_clear_Array1_float_R_Array1_float(ctx, sp[2].o, sp[3].o);
	((func_arc_math_Extrapolator_reset_double_double_Array1_float_Array1_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_Extrapolator_reset_double_double_Array1_float_Array1_float])(ctx, sp[0].o, temp0, temp1, sp[1].o, sp[2].o);
	LINE_NUMBER(93);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_arc_math_Extrapolator_reset_double_double_Array1_float_Array1_float(jcontext ctx, jobject self, jdouble param0, jdouble param1, jobject param2, jobject param3) {
	NULL_CHECK(self);
	jtype frame[16];
	auto stack = &frame[8];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/math/Extrapolator:reset", 16 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].d = param0;
	frame[3].d = param1;
	frame[5].o = param2;
	frame[6].o = param3;
	{
	LINE_NUMBER(96);
	((arc_math_Extrapolator *) NULL_CHECK((frame[0].o)))->F_lastPacketTime = (frame[1].d);
	LINE_NUMBER(97);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((arc_math_Extrapolator *) NULL_CHECK((frame[0].o)))->F_lastPacketPos;
	M_arc_math_Extrapolator_copyArray_Array1_float_Array1_float(ctx, sp[0].o, sp[1].o, (frame[5].o));
	LINE_NUMBER(98);
	((arc_math_Extrapolator *) NULL_CHECK((frame[0].o)))->F_snapTime = (frame[3].d);
	LINE_NUMBER(99);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((arc_math_Extrapolator *) NULL_CHECK((frame[0].o)))->F_snapPos;
	M_arc_math_Extrapolator_copyArray_Array1_float_Array1_float(ctx, sp[0].o, sp[1].o, (frame[5].o));
	LINE_NUMBER(100);
	((arc_math_Extrapolator *) NULL_CHECK((frame[0].o)))->F_updateTime = ((frame[3].d) - (frame[1].d));
	LINE_NUMBER(101);
	((arc_math_Extrapolator *) NULL_CHECK((frame[0].o)))->F_latency = ((jdouble)((arc_math_Extrapolator *) NULL_CHECK((frame[0].o)))->F_updateTime);
	LINE_NUMBER(102);
	((arc_math_Extrapolator *) NULL_CHECK((frame[0].o)))->F_aimTime = ((frame[3].d) + ((jdouble)((arc_math_Extrapolator *) NULL_CHECK((frame[0].o)))->F_updateTime));
	LINE_NUMBER(103);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((arc_math_Extrapolator *) NULL_CHECK((frame[0].o)))->F_snapVel;
	M_arc_math_Extrapolator_copyArray_Array1_float_Array1_float(ctx, sp[0].o, sp[1].o, (frame[6].o));
	LINE_NUMBER(105);
	frame[7].i = (jint(0));
	}
label_9:;
	{
	if ((frame[7].i) >= ((jint)((arc_math_Extrapolator *) NULL_CHECK((frame[0].o)))->F_size)) goto label_10;
	}
	{
	LINE_NUMBER(106);
	sp[0].o = (jobject)((arc_math_Extrapolator *) NULL_CHECK((frame[0].o)))->F_aimPos;
	jint temp0 = frame[7].i;
	sp[1].o = (jobject)((arc_math_Extrapolator *) NULL_CHECK((frame[0].o)))->F_snapPos;
	jdouble temp1 = jdouble(((jfloat)ARRAY_ACCESS(jfloat, sp[1].o, (frame[7].i))));
	sp[1].o = (jobject)((arc_math_Extrapolator *) NULL_CHECK((frame[0].o)))->F_snapVel;
	ARRAY_ACCESS(jfloat, sp[0].o, temp0) = (jfloat((temp1 + ((jdouble(((jfloat)ARRAY_ACCESS(jfloat, sp[1].o, (frame[7].i))))) * ((jdouble)((arc_math_Extrapolator *) NULL_CHECK((frame[0].o)))->F_updateTime)))));
	LINE_NUMBER(105);
	INST_IINC(7, 1);
	goto label_9;
	}
label_10:;
	LINE_NUMBER(108);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_arc_math_Extrapolator_reset_double_double_float(jcontext ctx, jobject self, jdouble param0, jdouble param1, jfloat param2) {
	NULL_CHECK(self);
	jtype frame[13];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/math/Extrapolator:reset", 13 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].d = param0;
	frame[3].d = param1;
	frame[5].f = param2;
	{
	LINE_NUMBER(114);
	M_arc_math_Extrapolator_checkArraySizeOne(ctx, (frame[0].o));
	LINE_NUMBER(116);
	((func_arc_math_Extrapolator_reset_double_double_float_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_math_Extrapolator_reset_double_double_float_float])(ctx, (frame[0].o), (frame[1].d), (frame[3].d), (frame[5].f), (jfloat(0)));
	LINE_NUMBER(117);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_arc_math_Extrapolator_reset_double_double_float_float(jcontext ctx, jobject self, jdouble param0, jdouble param1, jfloat param2, jfloat param3) {
	NULL_CHECK(self);
	jtype frame[15];
	auto stack = &frame[7];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/math/Extrapolator:reset", 15 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].d = param0;
	frame[3].d = param1;
	frame[5].f = param2;
	frame[6].f = param3;
	{
	LINE_NUMBER(123);
	M_arc_math_Extrapolator_checkArraySizeOne(ctx, (frame[0].o));
	LINE_NUMBER(125);
	((arc_math_Extrapolator *) NULL_CHECK((frame[0].o)))->F_lastPacketTime = (frame[1].d);
	LINE_NUMBER(126);
	sp[0].o = (jobject)((arc_math_Extrapolator *) NULL_CHECK((frame[0].o)))->F_lastPacketPos;
	ARRAY_ACCESS(jfloat, sp[0].o, (jint(0))) = (frame[5].f);
	LINE_NUMBER(127);
	((arc_math_Extrapolator *) NULL_CHECK((frame[0].o)))->F_snapTime = (frame[3].d);
	LINE_NUMBER(128);
	sp[0].o = (jobject)((arc_math_Extrapolator *) NULL_CHECK((frame[0].o)))->F_snapPos;
	ARRAY_ACCESS(jfloat, sp[0].o, (jint(0))) = (frame[5].f);
	LINE_NUMBER(129);
	((arc_math_Extrapolator *) NULL_CHECK((frame[0].o)))->F_updateTime = ((frame[3].d) - (frame[1].d));
	LINE_NUMBER(130);
	((arc_math_Extrapolator *) NULL_CHECK((frame[0].o)))->F_latency = ((jdouble)((arc_math_Extrapolator *) NULL_CHECK((frame[0].o)))->F_updateTime);
	LINE_NUMBER(131);
	((arc_math_Extrapolator *) NULL_CHECK((frame[0].o)))->F_aimTime = ((frame[3].d) + ((jdouble)((arc_math_Extrapolator *) NULL_CHECK((frame[0].o)))->F_updateTime));
	LINE_NUMBER(132);
	sp[0].o = (jobject)((arc_math_Extrapolator *) NULL_CHECK((frame[0].o)))->F_snapVel;
	ARRAY_ACCESS(jfloat, sp[0].o, (jint(0))) = (frame[6].f);
	LINE_NUMBER(133);
	sp[0].o = (jobject)((arc_math_Extrapolator *) NULL_CHECK((frame[0].o)))->F_aimPos;
	jint temp0 = jint(0);
	sp[1].o = (jobject)((arc_math_Extrapolator *) NULL_CHECK((frame[0].o)))->F_snapPos;
	jdouble temp1 = jdouble(((jfloat)ARRAY_ACCESS(jfloat, sp[1].o, (jint(0)))));
	sp[1].o = (jobject)((arc_math_Extrapolator *) NULL_CHECK((frame[0].o)))->F_snapVel;
	ARRAY_ACCESS(jfloat, sp[0].o, temp0) = (jfloat((temp1 + ((jdouble(((jfloat)ARRAY_ACCESS(jfloat, sp[1].o, (jint(0)))))) * ((jdouble)((arc_math_Extrapolator *) NULL_CHECK((frame[0].o)))->F_updateTime)))));
	LINE_NUMBER(134);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jbool M_arc_math_Extrapolator_readPosition_double_Array1_float_R_boolean(jcontext ctx, jobject self, jdouble param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/math/Extrapolator:readPosition", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].d = param0;
	frame[3].o = param1;
	{
	LINE_NUMBER(137);
	jint temp0 = (jint)((func_arc_math_Extrapolator_readPosition_double_Array1_float_Array1_float_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_math_Extrapolator_readPosition_double_Array1_float_Array1_float_R_boolean])(ctx, (frame[0].o), (frame[1].d), (frame[3].o), (jobject(nullptr)));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jbool M_arc_math_Extrapolator_readPosition_double_Array1_float_Array1_float_R_boolean(jcontext ctx, jobject self, jdouble param0, jobject param1, jobject param2) {
	NULL_CHECK(self);
	jtype frame[19];
	auto stack = &frame[9];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/math/Extrapolator:readPosition", 19 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].d = param0;
	frame[3].o = param1;
	frame[4].o = param2;
	{
	LINE_NUMBER(141);
	frame[5].i = (jint(1));
	LINE_NUMBER(144);
	if ((doubleCompare((frame[1].d), ((jdouble)((arc_math_Extrapolator *) NULL_CHECK((frame[0].o)))->F_snapTime), 1)) >= 0) goto label_2;
	}
	{
	LINE_NUMBER(145);
	frame[1].d = ((jdouble)((arc_math_Extrapolator *) NULL_CHECK((frame[0].o)))->F_snapTime);
	LINE_NUMBER(146);
	frame[5].i = (jint(0));
	}
label_2:;
	{
	LINE_NUMBER(150);
	frame[6].d = (((jdouble)((arc_math_Extrapolator *) NULL_CHECK((frame[0].o)))->F_aimTime) + ((jdouble)((arc_math_Extrapolator *) NULL_CHECK((frame[0].o)))->F_updateTime));
	LINE_NUMBER(151);
	if ((doubleCompare((frame[1].d), (frame[6].d), -1)) <= 0) goto label_6;
	}
	{
	LINE_NUMBER(152);
	frame[1].d = (frame[6].d);
	LINE_NUMBER(153);
	frame[5].i = (jint(0));
	}
label_6:;
	{
	LINE_NUMBER(157);
	frame[8].i = (jint(0));
	}
label_9:;
	{
	if ((frame[8].i) >= ((jint)((arc_math_Extrapolator *) NULL_CHECK((frame[0].o)))->F_size)) goto label_10;
	}
	{
	LINE_NUMBER(158);
	if ((frame[4].o) == nullptr) goto label_12;
	}
	{
	LINE_NUMBER(159);
	sp[0].o = frame[4].o;
	jint temp0 = frame[8].i;
	sp[1].o = (jobject)((arc_math_Extrapolator *) NULL_CHECK((frame[0].o)))->F_snapVel;
	ARRAY_ACCESS(jfloat, sp[0].o, temp0) = ((jfloat)ARRAY_ACCESS(jfloat, sp[1].o, (frame[8].i)));
	}
label_12:;
	{
	LINE_NUMBER(162);
	sp[0].o = frame[3].o;
	jint temp0 = frame[8].i;
	sp[1].o = (jobject)((arc_math_Extrapolator *) NULL_CHECK((frame[0].o)))->F_snapPos;
	jdouble temp1 = jdouble(((jfloat)ARRAY_ACCESS(jfloat, sp[1].o, (frame[8].i))));
	sp[1].o = (jobject)((arc_math_Extrapolator *) NULL_CHECK((frame[0].o)))->F_snapVel;
	ARRAY_ACCESS(jfloat, sp[0].o, temp0) = (jfloat((temp1 + ((jdouble(((jfloat)ARRAY_ACCESS(jfloat, sp[1].o, (frame[8].i))))) * ((frame[1].d) - ((jdouble)((arc_math_Extrapolator *) NULL_CHECK((frame[0].o)))->F_snapTime))))));
	LINE_NUMBER(157);
	INST_IINC(8, 1);
	goto label_9;
	}
label_10:;
	{
	LINE_NUMBER(165);
	if ((frame[5].i) != 0) goto label_15;
	}
	INST_ALOAD(4);
	if ((--sp)->o == nullptr) goto label_15;
	{
	LINE_NUMBER(166);
	sp[0].o = (jobject)M_arc_math_Extrapolator_clear_Array1_float_R_Array1_float(ctx, (frame[0].o), (frame[4].o));
	}
label_15:;
	{
	LINE_NUMBER(169);
	popStackFrame(ctx);
	return (frame[5].i);
	}

	popStackFrame(ctx);
}

jfloat M_arc_math_Extrapolator_readPosition_double_R_float(jcontext ctx, jobject self, jdouble param0) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/math/Extrapolator:readPosition", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].d = param0;
	{
	LINE_NUMBER(176);
	M_arc_math_Extrapolator_checkArraySizeOne(ctx, (frame[0].o));
	LINE_NUMBER(178);
	sp[0].o = frame[0].o;
	jdouble temp0 = frame[1].d;
	sp[1].o = (jobject)((arc_math_Extrapolator *) NULL_CHECK((frame[0].o)))->F_tmpArr;
	jint temp1 = (jint)((func_arc_math_Extrapolator_readPosition_double_Array1_float_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_Extrapolator_readPosition_double_Array1_float_R_boolean])(ctx, sp[0].o, temp0, sp[1].o);
	if (temp1 == 0) goto label_2;
	}
	{
	LINE_NUMBER(179);
	sp[0].o = (jobject)((arc_math_Extrapolator *) NULL_CHECK((frame[0].o)))->F_tmpArr;
	popStackFrame(ctx);
	return ((jfloat)ARRAY_ACCESS(jfloat, sp[0].o, (jint(0))));
	}
label_2:;
	{
	LINE_NUMBER(182);
	popStackFrame(ctx);
	return (jfloat(0));
	}

	popStackFrame(ctx);
}

jdouble M_arc_math_Extrapolator_estimateLatency_R_double(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/math/Extrapolator:estimateLatency", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(186);
	popStackFrame(ctx);
	return ((jdouble)((arc_math_Extrapolator *) NULL_CHECK((frame[0].o)))->F_latency);
	}

	popStackFrame(ctx);
}

jdouble M_arc_math_Extrapolator_estimateUpdateTime_R_double(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/math/Extrapolator:estimateUpdateTime", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(190);
	popStackFrame(ctx);
	return ((jdouble)((arc_math_Extrapolator *) NULL_CHECK((frame[0].o)))->F_updateTime);
	}

	popStackFrame(ctx);
}

jbool M_arc_math_Extrapolator_estimates_double_double_R_boolean(jcontext ctx, jobject self, jdouble param0, jdouble param1) {
	NULL_CHECK(self);
	jtype frame[14];
	auto stack = &frame[9];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/math/Extrapolator:estimates", 14 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].d = param0;
	frame[3].d = param1;
	{
	LINE_NUMBER(194);
	if ((doubleCompare((frame[1].d), ((jdouble)((arc_math_Extrapolator *) NULL_CHECK((frame[0].o)))->F_lastPacketTime), 1)) > 0) goto label_1;
	}
	{
	LINE_NUMBER(195);
	popStackFrame(ctx);
	return (jint(0));
	}
label_1:;
	{
	LINE_NUMBER(202);
	frame[5].d = ((frame[3].d) - (frame[1].d));
	LINE_NUMBER(203);
	if ((doubleCompare((frame[5].d), (jdouble(0)), 1)) >= 0) goto label_4;
	}
	{
	LINE_NUMBER(204);
	frame[5].d = (jdouble(0));
	}
label_4:;
	{
	LINE_NUMBER(206);
	if ((doubleCompare((frame[5].d), ((jdouble)((arc_math_Extrapolator *) NULL_CHECK((frame[0].o)))->F_latency), -1)) <= 0) goto label_6;
	}
	{
	LINE_NUMBER(207);
	((arc_math_Extrapolator *) NULL_CHECK((frame[0].o)))->F_latency = ((((jdouble)((arc_math_Extrapolator *) NULL_CHECK((frame[0].o)))->F_latency) + (frame[5].d)) * (jdouble(0.5)));
	goto label_8;
	}
label_6:;
	{
	LINE_NUMBER(209);
	((arc_math_Extrapolator *) NULL_CHECK((frame[0].o)))->F_latency = (((((jdouble)((arc_math_Extrapolator *) NULL_CHECK((frame[0].o)))->F_latency) * (jdouble(7.0))) + (frame[5].d)) * (jdouble(0.125)));
	}
label_8:;
	{
	LINE_NUMBER(215);
	frame[7].d = ((frame[1].d) - ((jdouble)((arc_math_Extrapolator *) NULL_CHECK((frame[0].o)))->F_lastPacketTime));
	LINE_NUMBER(216);
	if ((doubleCompare((frame[7].d), ((jdouble)((arc_math_Extrapolator *) NULL_CHECK((frame[0].o)))->F_updateTime), -1)) <= 0) goto label_10;
	}
	{
	LINE_NUMBER(217);
	((arc_math_Extrapolator *) NULL_CHECK((frame[0].o)))->F_updateTime = ((((jdouble)((arc_math_Extrapolator *) NULL_CHECK((frame[0].o)))->F_updateTime) + (frame[7].d)) * (jdouble(0.5)));
	goto label_12;
	}
label_10:;
	{
	LINE_NUMBER(219);
	((arc_math_Extrapolator *) NULL_CHECK((frame[0].o)))->F_updateTime = (((((jdouble)((arc_math_Extrapolator *) NULL_CHECK((frame[0].o)))->F_updateTime) * (jdouble(7.0))) + (frame[7].d)) * (jdouble(0.125)));
	}
label_12:;
	{
	LINE_NUMBER(222);
	popStackFrame(ctx);
	return (jint(1));
	}

	popStackFrame(ctx);
}

jobject M_arc_math_Extrapolator_clear_Array1_float_R_Array1_float(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/math/Extrapolator:clear", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(226);
	SM_java_util_Arrays_fill_Array1_float_float(ctx, (frame[1].o), (jfloat(0)));
	LINE_NUMBER(227);
	popStackFrame(ctx);
	return (frame[1].o);
	}

	popStackFrame(ctx);
}

void M_arc_math_Extrapolator_copyArray_Array1_float_Array1_float(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/math/Extrapolator:copyArray", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(231);
	frame[3].i = (jint(0));
	frame[4].i = (((jarray) nullCheck(ctx, (frame[2].o)))->length);
	}
label_2:;
	{
	if ((frame[3].i) >= (frame[4].i)) goto label_3;
	}
	{
	LINE_NUMBER(232);
	ARRAY_ACCESS(jfloat, (frame[1].o), (frame[3].i)) = ((jfloat)ARRAY_ACCESS(jfloat, (frame[2].o), (frame[3].i)));
	LINE_NUMBER(231);
	INST_IINC(3, 1);
	goto label_2;
	}
label_3:;
	LINE_NUMBER(234);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_arc_math_Extrapolator_checkArraySizeOne(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/math/Extrapolator:checkArraySizeOne", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(237);
	if (((jint)((arc_math_Extrapolator *) NULL_CHECK((frame[0].o)))->F_size) == (jint(1))) goto label_1;
	}
	{
	LINE_NUMBER(238);
	clinit_java_lang_UnsupportedOperationException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_UnsupportedOperationException);
	init_java_lang_UnsupportedOperationException_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"This function should be called only when size = 1!"_j))));
	throwException(ctx, sp[0].o);	}
label_1:;
	LINE_NUMBER(240);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void *vtable_arc_math_Extrapolator[] {
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
	(void *) M_arc_math_Extrapolator_addSample_double_double_Array1_float_R_boolean,
	(void *) M_arc_math_Extrapolator_addSample_double_double_Array1_float_Array1_float_R_boolean,
	(void *) M_arc_math_Extrapolator_addSample_double_double_float_R_boolean,
	(void *) M_arc_math_Extrapolator_addSample_double_double_float_float_R_boolean,
	(void *) M_arc_math_Extrapolator_reset_double_double_Array1_float,
	(void *) M_arc_math_Extrapolator_reset_double_double_Array1_float_Array1_float,
	(void *) M_arc_math_Extrapolator_reset_double_double_float,
	(void *) M_arc_math_Extrapolator_reset_double_double_float_float,
	(void *) M_arc_math_Extrapolator_readPosition_double_Array1_float_R_boolean,
	(void *) M_arc_math_Extrapolator_readPosition_double_Array1_float_Array1_float_R_boolean,
	(void *) M_arc_math_Extrapolator_readPosition_double_R_float,
	(void *) M_arc_math_Extrapolator_estimateLatency_R_double,
	(void *) M_arc_math_Extrapolator_estimateUpdateTime_R_double,
	(void *) M_arc_math_Extrapolator_estimates_double_double_R_boolean,
	(void *) M_arc_math_Extrapolator_clear_Array1_float_R_Array1_float,
	(void *) M_arc_math_Extrapolator_copyArray_Array1_float_Array1_float,
	(void *) M_arc_math_Extrapolator_checkArraySizeOne,
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
	{ "addSample", "(DD[F)Z" },
	{ "addSample", "(DD[F[F)Z" },
	{ "addSample", "(DDF)Z" },
	{ "addSample", "(DDFF)Z" },
	{ "reset", "(DD[F)V" },
	{ "reset", "(DD[F[F)V" },
	{ "reset", "(DDF)V" },
	{ "reset", "(DDFF)V" },
	{ "readPosition", "(D[F)Z" },
	{ "readPosition", "(D[F[F)Z" },
	{ "readPosition", "(D)F" },
	{ "estimateLatency", "()D" },
	{ "estimateUpdateTime", "()D" },
	{ "estimates", "(DD)Z" },
	{ "clear", "([F)[F" },
	{ "copyArray", "([F[F)V" },
	{ "checkArraySizeOne", "()V" },
};

static FieldMetadata fields[] {
	{ "snapPos", getArrayClass(&class_float, 1), offsetof(arc_math_Extrapolator, F_snapPos), "[F", 2 },
	{ "snapVel", getArrayClass(&class_float, 1), offsetof(arc_math_Extrapolator, F_snapVel), "[F", 2 },
	{ "aimPos", getArrayClass(&class_float, 1), offsetof(arc_math_Extrapolator, F_aimPos), "[F", 2 },
	{ "lastPacketPos", getArrayClass(&class_float, 1), offsetof(arc_math_Extrapolator, F_lastPacketPos), "[F", 2 },
	{ "tmpArr", getArrayClass(&class_float, 1), offsetof(arc_math_Extrapolator, F_tmpArr), "[F", 2 },
	{ "tmpArr2", getArrayClass(&class_float, 1), offsetof(arc_math_Extrapolator, F_tmpArr2), "[F", 2 },
	{ "snapTime", &class_double, offsetof(arc_math_Extrapolator, F_snapTime), "D", 2 },
	{ "aimTime", &class_double, offsetof(arc_math_Extrapolator, F_aimTime), "D", 2 },
	{ "lastPacketTime", &class_double, offsetof(arc_math_Extrapolator, F_lastPacketTime), "D", 2 },
	{ "latency", &class_double, offsetof(arc_math_Extrapolator, F_latency), "D", 2 },
	{ "updateTime", &class_double, offsetof(arc_math_Extrapolator, F_updateTime), "D", 2 },
	{ "size", &class_int, offsetof(arc_math_Extrapolator, F_size), "I", 2 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_arc_math_Extrapolator_int, 0, "(I)V", 1 },
	{ "addSample", (intptr_t) M_arc_math_Extrapolator_addSample_double_double_Array1_float_R_boolean, VTABLE_arc_math_Extrapolator_addSample_double_double_Array1_float_R_boolean, "(DD[F)Z", 1 },
	{ "addSample", (intptr_t) M_arc_math_Extrapolator_addSample_double_double_Array1_float_Array1_float_R_boolean, VTABLE_arc_math_Extrapolator_addSample_double_double_Array1_float_Array1_float_R_boolean, "(DD[F[F)Z", 1 },
	{ "addSample", (intptr_t) M_arc_math_Extrapolator_addSample_double_double_float_R_boolean, VTABLE_arc_math_Extrapolator_addSample_double_double_float_R_boolean, "(DDF)Z", 1 },
	{ "addSample", (intptr_t) M_arc_math_Extrapolator_addSample_double_double_float_float_R_boolean, VTABLE_arc_math_Extrapolator_addSample_double_double_float_float_R_boolean, "(DDFF)Z", 1 },
	{ "reset", (intptr_t) M_arc_math_Extrapolator_reset_double_double_Array1_float, VTABLE_arc_math_Extrapolator_reset_double_double_Array1_float, "(DD[F)V", 1 },
	{ "reset", (intptr_t) M_arc_math_Extrapolator_reset_double_double_Array1_float_Array1_float, VTABLE_arc_math_Extrapolator_reset_double_double_Array1_float_Array1_float, "(DD[F[F)V", 1 },
	{ "reset", (intptr_t) M_arc_math_Extrapolator_reset_double_double_float, VTABLE_arc_math_Extrapolator_reset_double_double_float, "(DDF)V", 1 },
	{ "reset", (intptr_t) M_arc_math_Extrapolator_reset_double_double_float_float, VTABLE_arc_math_Extrapolator_reset_double_double_float_float, "(DDFF)V", 1 },
	{ "readPosition", (intptr_t) M_arc_math_Extrapolator_readPosition_double_Array1_float_R_boolean, VTABLE_arc_math_Extrapolator_readPosition_double_Array1_float_R_boolean, "(D[F)Z", 1 },
	{ "readPosition", (intptr_t) M_arc_math_Extrapolator_readPosition_double_Array1_float_Array1_float_R_boolean, VTABLE_arc_math_Extrapolator_readPosition_double_Array1_float_Array1_float_R_boolean, "(D[F[F)Z", 1 },
	{ "readPosition", (intptr_t) M_arc_math_Extrapolator_readPosition_double_R_float, VTABLE_arc_math_Extrapolator_readPosition_double_R_float, "(D)F", 1 },
	{ "estimateLatency", (intptr_t) M_arc_math_Extrapolator_estimateLatency_R_double, VTABLE_arc_math_Extrapolator_estimateLatency_R_double, "()D", 1 },
	{ "estimateUpdateTime", (intptr_t) M_arc_math_Extrapolator_estimateUpdateTime_R_double, VTABLE_arc_math_Extrapolator_estimateUpdateTime_R_double, "()D", 1 },
	{ "estimates", (intptr_t) M_arc_math_Extrapolator_estimates_double_double_R_boolean, VTABLE_arc_math_Extrapolator_estimates_double_double_R_boolean, "(DD)Z", 2 },
	{ "clear", (intptr_t) M_arc_math_Extrapolator_clear_Array1_float_R_Array1_float, VTABLE_arc_math_Extrapolator_clear_Array1_float_R_Array1_float, "([F)[F", 2 },
	{ "copyArray", (intptr_t) M_arc_math_Extrapolator_copyArray_Array1_float_Array1_float, VTABLE_arc_math_Extrapolator_copyArray_Array1_float_Array1_float, "([F[F)V", 2 },
	{ "checkArraySizeOne", (intptr_t) M_arc_math_Extrapolator_checkArraySizeOne, VTABLE_arc_math_Extrapolator_checkArraySizeOne, "()V", 2 },
};

Class class_arc_math_Extrapolator{
		.nativeName = (intptr_t) "arc/math/Extrapolator",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(arc_math_Extrapolator),
		.classVtable = (intptr_t) vtable_arc_math_Extrapolator,
		.staticInitializer = (intptr_t) clinit_arc_math_Extrapolator,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_arc_math_Extrapolator,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 33,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 12,
		.nativeFields = (intptr_t) fields,
		.methodCount = 18,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 28,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_arc_math_Extrapolator = registerClass(&class_arc_math_Extrapolator);

}
