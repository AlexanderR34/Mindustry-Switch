#include "arc/math/Rand.h"
#include "java/lang/Object.h"
#include "java/util/Random.h"
#include "java/lang/String.h"
#include "arc/math/Rand.h"
#include "java/lang/IllegalArgumentException.h"

extern "C" {

jdouble SF_arc_math_Rand_NORM_DOUBLE;
jdouble SF_arc_math_Rand_NORM_FLOAT;

void mark_arc_math_Rand(jobject object, jint mark, jint depth) {
	if (!object) {
		return;
	}
	if (depth > GC_DEPTH_ALWAYS && (object->gcMark < GC_MARK_START || object->gcMark == mark))
		return;
	if (depth > MAX_GC_MARK_DEPTH) {
		markDeepObject(object);
		return;
	}
	mark_java_util_Random(object, mark, depth);
	if (object->gcMark >= GC_MARK_START)
		object->gcMark = mark;
	auto self = (arc_math_Rand *) object;
}

void clinit_arc_math_Rand(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	clinit_java_util_Random(ctx);
	SF_arc_math_Rand_NORM_DOUBLE = jdouble(1,110223e-16);
	SF_arc_math_Rand_NORM_FLOAT = jdouble(5,960464e-08);
}

void init_arc_math_Rand(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/math/Rand:<init>", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_math_Rand(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(32);
	init_java_util_Random(ctx, (frame[0].o));
	LINE_NUMBER(33);
	sp[0].o = frame[0].o;
	clinit_java_util_Random(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_util_Random);
	init_java_util_Random(ctx, sp[1].o);
	jlong temp0 = (jlong)((func_java_util_Random_nextLong_R_long) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_util_Random_nextLong_R_long])(ctx, sp[1].o);
	((func_arc_math_Rand_setSeed_long) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_Rand_setSeed_long])(ctx, sp[0].o, temp0);
	LINE_NUMBER(34);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_arc_math_Rand_long(jcontext ctx, jobject self, jlong param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/math/Rand:<init>", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_math_Rand(ctx);
	frame[0].o = self;
	frame[1].l = param0;
	{
	LINE_NUMBER(40);
	init_java_util_Random(ctx, (frame[0].o));
	LINE_NUMBER(41);
	((func_arc_math_Rand_setSeed_long) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_math_Rand_setSeed_long])(ctx, (frame[0].o), (frame[1].l));
	LINE_NUMBER(42);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_arc_math_Rand_long_long(jcontext ctx, jobject self, jlong param0, jlong param1) {
	NULL_CHECK(self);
	jtype frame[10];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/math/Rand:<init>", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_math_Rand(ctx);
	frame[0].o = self;
	frame[1].l = param0;
	frame[3].l = param1;
	{
	LINE_NUMBER(49);
	init_java_util_Random(ctx, (frame[0].o));
	LINE_NUMBER(50);
	((func_arc_math_Rand_setState_long_long) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_math_Rand_setState_long_long])(ctx, (frame[0].o), (frame[1].l), (frame[3].l));
	LINE_NUMBER(51);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jlong SM_arc_math_Rand_murmurHash3_long_R_long(jcontext ctx, jlong param0) {
	jtype frame[7];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/math/Rand:murmurHash3", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_math_Rand(ctx);
	frame[0].l = param0;
	{
	LINE_NUMBER(54);
	frame[0].l = ((frame[0].l) ^ (bit_cast<jlong>(bit_cast<uint64_t>((frame[0].l)) >> (33))));
	LINE_NUMBER(55);
	frame[0].l = ((frame[0].l) * (jlong(-49064778989728563ll)));
	LINE_NUMBER(56);
	frame[0].l = ((frame[0].l) ^ (bit_cast<jlong>(bit_cast<uint64_t>((frame[0].l)) >> (33))));
	LINE_NUMBER(57);
	frame[0].l = ((frame[0].l) * (jlong(-4265267296055464877ll)));
	LINE_NUMBER(58);
	frame[0].l = ((frame[0].l) ^ (bit_cast<jlong>(bit_cast<uint64_t>((frame[0].l)) >> (33))));
	LINE_NUMBER(60);
	popStackFrame(ctx);
	return (frame[0].l);
	}

	popStackFrame(ctx);
}

jlong M_arc_math_Rand_nextLong_R_long(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[11];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/math/Rand:nextLong", 11 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(70);
	frame[1].l = ((jlong)((arc_math_Rand *) NULL_CHECK((frame[0].o)))->F_seed0);
	LINE_NUMBER(71);
	frame[3].l = ((jlong)((arc_math_Rand *) NULL_CHECK((frame[0].o)))->F_seed1);
	LINE_NUMBER(72);
	((arc_math_Rand *) NULL_CHECK((frame[0].o)))->F_seed0 = (frame[3].l);
	LINE_NUMBER(73);
	frame[1].l = ((frame[1].l) ^ ((frame[1].l) << (23)));
	LINE_NUMBER(74);
	sp[0].o = frame[0].o;
	jlong temp0 = (((frame[1].l) ^ (frame[3].l)) ^ (bit_cast<jlong>(bit_cast<uint64_t>((frame[1].l)) >> (17)))) ^ (bit_cast<jlong>(bit_cast<uint64_t>((frame[3].l)) >> (26)));
	((arc_math_Rand *) NULL_CHECK(sp[0].o))->F_seed1 = temp0;
	popStackFrame(ctx);
	return (temp0 + (frame[3].l));
	}

	popStackFrame(ctx);
}

jint M_arc_math_Rand_next_int_R_int(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/math/Rand:next", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(80);
	jlong temp0 = (jlong)((func_arc_math_Rand_nextLong_R_long) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_math_Rand_nextLong_R_long])(ctx, (frame[0].o));
	popStackFrame(ctx);
	return (jint((temp0 & (((jlong(1)) << (frame[1].i)) - (jlong(1))))));
	}

	popStackFrame(ctx);
}

jint M_arc_math_Rand_nextInt_R_int(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/math/Rand:nextInt", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(90);
	jlong temp0 = (jlong)((func_arc_math_Rand_nextLong_R_long) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_math_Rand_nextLong_R_long])(ctx, (frame[0].o));
	popStackFrame(ctx);
	return (jint(temp0));
	}

	popStackFrame(ctx);
}

jint M_arc_math_Rand_nextInt_int_R_int(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/math/Rand:nextInt", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(103);
	jlong temp0 = (jlong)((func_arc_math_Rand_nextLong_long_R_long) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_math_Rand_nextLong_long_R_long])(ctx, (frame[0].o), (jlong((frame[1].i))));
	popStackFrame(ctx);
	return (jint(temp0));
	}

	popStackFrame(ctx);
}

jlong M_arc_math_Rand_nextLong_long_R_long(jcontext ctx, jobject self, jlong param0) {
	NULL_CHECK(self);
	jtype frame[13];
	auto stack = &frame[7];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/math/Rand:nextLong", 13 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].l = param0;
	{
	LINE_NUMBER(116);
	if ((longCompare((frame[1].l), (jlong(0)))) > 0) goto label_1;
	}
	{
	clinit_java_lang_IllegalArgumentException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IllegalArgumentException);
	init_java_lang_IllegalArgumentException_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"n must be positive"_j))));
	throwException(ctx, sp[0].o);	}
label_1:;
	{
	LINE_NUMBER(118);
	jlong temp0 = (jlong)((func_arc_math_Rand_nextLong_R_long) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_math_Rand_nextLong_R_long])(ctx, (frame[0].o));
	frame[3].l = (bit_cast<jlong>(bit_cast<uint64_t>(temp0) >> (jint(1))));
	LINE_NUMBER(119);
	frame[5].l = ((frame[3].l) % (frame[1].l));
	LINE_NUMBER(120);
	if ((longCompare((((frame[3].l) - (frame[5].l)) + ((frame[1].l) - (jlong(1)))), (jlong(0)))) < 0) goto label_4;
	}
	INST_LLOAD(5);
	popStackFrame(ctx);
	INST_LRETURN();
label_4:;
	LINE_NUMBER(121);
	goto label_1;

	popStackFrame(ctx);
}

jdouble M_arc_math_Rand_nextDouble_R_double(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/math/Rand:nextDouble", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(132);
	jlong temp0 = (jlong)((func_arc_math_Rand_nextLong_R_long) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_math_Rand_nextLong_R_long])(ctx, (frame[0].o));
	popStackFrame(ctx);
	return ((jdouble((bit_cast<jlong>(bit_cast<uint64_t>(temp0) >> (11))))) * (jdouble(1,110223e-16)));
	}

	popStackFrame(ctx);
}

jfloat M_arc_math_Rand_nextFloat_R_float(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/math/Rand:nextFloat", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(143);
	jlong temp0 = (jlong)((func_arc_math_Rand_nextLong_R_long) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_math_Rand_nextLong_R_long])(ctx, (frame[0].o));
	popStackFrame(ctx);
	return (jfloat(((jdouble((bit_cast<jlong>(bit_cast<uint64_t>(temp0) >> (40))))) * (jdouble(5,960464e-08)))));
	}

	popStackFrame(ctx);
}

jbool M_arc_math_Rand_nextBoolean_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/math/Rand:nextBoolean", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(153);
	jlong temp0 = (jlong)((func_arc_math_Rand_nextLong_R_long) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_math_Rand_nextLong_R_long])(ctx, (frame[0].o));
	if ((longCompare((temp0 & (jlong(1))), (jlong(0)))) == 0) goto label_1;
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

void M_arc_math_Rand_nextBytes_Array1_byte(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[10];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/math/Rand:nextBytes", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(165);
	frame[3].i = (((jarray) nullCheck(ctx, (frame[1].o)))->length);
	}
label_1:;
	{
	LINE_NUMBER(166);
	if ((frame[3].i) == 0) goto label_2;
	}
	{
	LINE_NUMBER(167);
	if ((frame[3].i) >= (8)) goto label_4;
	}
	INST_ILOAD(3);
	goto label_5;
label_4:;
	INST_BIPUSH(8);
label_5:;
	{
	sp -= 1;
	frame[2].i = sp[0].i;
	LINE_NUMBER(168);
	jlong temp0 = (jlong)((func_arc_math_Rand_nextLong_R_long) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_math_Rand_nextLong_R_long])(ctx, (frame[0].o));
	frame[4].l = temp0;
	}
label_7:;
	{
	jint temp0 = frame[2].i;
	INST_IINC(2, -1);
	if (temp0 == 0) goto label_8;
	}
	{
	LINE_NUMBER(169);
	sp[0].o = frame[1].o;
	INST_IINC(3, -1);
	ARRAY_ACCESS(jbyte, sp[0].o, (frame[3].i)) = (jbyte((jint((frame[4].l)))));
	LINE_NUMBER(168);
	frame[4].l = ((frame[4].l) >> (8));
	goto label_7;
	}
label_8:;
	goto label_1;
label_2:;
	LINE_NUMBER(171);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_arc_math_Rand_setSeed_long(jcontext ctx, jobject self, jlong param0) {
	NULL_CHECK(self);
	jtype frame[10];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/math/Rand:setSeed", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].l = param0;
	{
	LINE_NUMBER(182);
	if ((longCompare((frame[1].l), (jlong(0)))) != 0) goto label_1;
	}
	(sp++)->l = bit_cast<jlong>(0x8000000000000000ll);
	goto label_2;
label_1:;
	INST_LLOAD(1);
label_2:;
	{
	sp -= 1;
	jlong temp0 = (jlong)SM_arc_math_Rand_murmurHash3_long_R_long(ctx, sp[0].l);
	frame[3].l = temp0;
	LINE_NUMBER(183);
	sp[0].o = frame[0].o;
	jlong temp1 = frame[3].l;
	jlong temp2 = (jlong)SM_arc_math_Rand_murmurHash3_long_R_long(ctx, (frame[3].l));
	((func_arc_math_Rand_setState_long_long) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_Rand_setState_long_long])(ctx, sp[0].o, temp1, temp2);
	LINE_NUMBER(184);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jbool M_arc_math_Rand_chance_double_R_boolean(jcontext ctx, jobject self, jdouble param0) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/math/Rand:chance", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].d = param0;
	{
	LINE_NUMBER(187);
	jdouble temp0 = (jdouble)((func_arc_math_Rand_nextDouble_R_double) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_math_Rand_nextDouble_R_double])(ctx, (frame[0].o));
	if ((doubleCompare(temp0, (frame[1].d), 1)) >= 0) goto label_1;
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

jfloat M_arc_math_Rand_range_float_R_float(jcontext ctx, jobject self, jfloat param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/math/Rand:range", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	{
	LINE_NUMBER(191);
	jfloat temp0 = (jfloat)((func_arc_math_Rand_nextFloat_R_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_math_Rand_nextFloat_R_float])(ctx, (frame[0].o));
	popStackFrame(ctx);
	return (((temp0 * (frame[1].f)) * (jfloat(2))) - (frame[1].f));
	}

	popStackFrame(ctx);
}

jfloat M_arc_math_Rand_random_float_R_float(jcontext ctx, jobject self, jfloat param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/math/Rand:random", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	{
	LINE_NUMBER(195);
	jfloat temp0 = (jfloat)((func_arc_math_Rand_nextFloat_R_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_math_Rand_nextFloat_R_float])(ctx, (frame[0].o));
	popStackFrame(ctx);
	return (temp0 * (frame[1].f));
	}

	popStackFrame(ctx);
}

jint M_arc_math_Rand_random_int_R_int(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/math/Rand:random", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(200);
	jint temp0 = (jint)((func_arc_math_Rand_nextInt_int_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_math_Rand_nextInt_int_R_int])(ctx, (frame[0].o), ((frame[1].i) + (jint(1))));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jfloat M_arc_math_Rand_random_float_float_R_float(jcontext ctx, jobject self, jfloat param0, jfloat param1) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/math/Rand:random", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	frame[2].f = param1;
	{
	LINE_NUMBER(204);
	jfloat temp0 = frame[1].f;
	jfloat temp1 = (frame[2].f) - (frame[1].f);
	jfloat temp2 = (jfloat)((func_arc_math_Rand_nextFloat_R_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_math_Rand_nextFloat_R_float])(ctx, (frame[0].o));
	popStackFrame(ctx);
	return (temp0 + (temp1 * temp2));
	}

	popStackFrame(ctx);
}

jint M_arc_math_Rand_range_int_R_int(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/math/Rand:range", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(208);
	jint temp0 = (jint)((func_arc_math_Rand_nextInt_int_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_math_Rand_nextInt_int_R_int])(ctx, (frame[0].o), (((frame[1].i) * (jint(2))) + (jint(1))));
	popStackFrame(ctx);
	return (temp0 - (frame[1].i));
	}

	popStackFrame(ctx);
}

jint M_arc_math_Rand_random_int_int_R_int(jcontext ctx, jobject self, jint param0, jint param1) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/math/Rand:random", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(212);
	if ((frame[1].i) < (frame[2].i)) goto label_1;
	}
	INST_ILOAD(1);
	popStackFrame(ctx);
	INST_IRETURN();
label_1:;
	{
	LINE_NUMBER(213);
	jint temp0 = frame[1].i;
	jint temp1 = (jint)((func_arc_math_Rand_nextInt_int_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_math_Rand_nextInt_int_R_int])(ctx, (frame[0].o), (((frame[2].i) - (frame[1].i)) + (jint(1))));
	popStackFrame(ctx);
	return (temp0 + temp1);
	}

	popStackFrame(ctx);
}

void M_arc_math_Rand_setState_long_long(jcontext ctx, jobject self, jlong param0, jlong param1) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/math/Rand:setState", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].l = param0;
	frame[3].l = param1;
	{
	LINE_NUMBER(222);
	((arc_math_Rand *) NULL_CHECK((frame[0].o)))->F_seed0 = (frame[1].l);
	LINE_NUMBER(223);
	((arc_math_Rand *) NULL_CHECK((frame[0].o)))->F_seed1 = (frame[3].l);
	LINE_NUMBER(224);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jlong M_arc_math_Rand_getState_int_R_long(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/math/Rand:getState", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(232);
	if ((frame[1].i) != 0) goto label_1;
	}
	{
	jlong temp0 = (jlong)((arc_math_Rand *) NULL_CHECK((frame[0].o)))->F_seed0;
	sp[0].l = temp0;
	sp += 1;
	goto label_2;
	}
label_1:;
	INST_ALOAD(0);
	sp[-1].l = ((arc_math_Rand *) NULL_CHECK(sp[-1].o))->F_seed1;
label_2:;
	popStackFrame(ctx);
	INST_LRETURN();

	popStackFrame(ctx);
}

void *vtable_arc_math_Rand[] {
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
	(void *) M_arc_math_Rand_next_int_R_int,
	(void *) M_arc_math_Rand_nextDouble_R_double,
	(void *) M_arc_math_Rand_nextFloat_R_float,
	(void *) M_arc_math_Rand_nextInt_R_int,
	(void *) M_arc_math_Rand_nextInt_int_R_int,
	(void *) M_arc_math_Rand_nextLong_R_long,
	(void *) M_arc_math_Rand_setSeed_long,
	(void *) M_arc_math_Rand_nextBoolean_R_boolean,
	(void *) M_arc_math_Rand_nextBytes_Array1_byte,
	(void *) M_arc_math_Rand_nextLong_long_R_long,
	(void *) M_arc_math_Rand_chance_double_R_boolean,
	(void *) M_arc_math_Rand_range_float_R_float,
	(void *) M_arc_math_Rand_random_float_R_float,
	(void *) M_arc_math_Rand_random_int_R_int,
	(void *) M_arc_math_Rand_random_float_float_R_float,
	(void *) M_arc_math_Rand_range_int_R_int,
	(void *) M_arc_math_Rand_random_int_int_R_int,
	(void *) M_arc_math_Rand_setState_long_long,
	(void *) M_arc_math_Rand_getState_int_R_long,
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
	{ "next", "(I)I" },
	{ "nextDouble", "()D" },
	{ "nextFloat", "()F" },
	{ "nextInt", "()I" },
	{ "nextInt", "(I)I" },
	{ "nextLong", "()J" },
	{ "setSeed", "(J)V" },
	{ "nextBoolean", "()Z" },
	{ "nextBytes", "([B)V" },
	{ "nextLong", "(J)J" },
	{ "chance", "(D)Z" },
	{ "range", "(F)F" },
	{ "random", "(F)F" },
	{ "random", "(I)I" },
	{ "random", "(FF)F" },
	{ "range", "(I)I" },
	{ "random", "(II)I" },
	{ "setState", "(JJ)V" },
	{ "getState", "(I)J" },
};

static FieldMetadata fields[] {
	{ "NORM_DOUBLE", &class_double, (intptr_t) &SF_arc_math_Rand_NORM_DOUBLE, "D", 26 },
	{ "NORM_FLOAT", &class_double, (intptr_t) &SF_arc_math_Rand_NORM_FLOAT, "D", 26 },
	{ "seed0", &class_long, offsetof(arc_math_Rand, F_seed0), "J", 1 },
	{ "seed1", &class_long, offsetof(arc_math_Rand, F_seed1), "J", 1 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_arc_math_Rand, 0, "()V", 1 },
	{ "<init>", (intptr_t) init_arc_math_Rand_long, 0, "(J)V", 1 },
	{ "<init>", (intptr_t) init_arc_math_Rand_long_long, 0, "(JJ)V", 1 },
	{ "murmurHash3", (intptr_t) SM_arc_math_Rand_murmurHash3_long_R_long, 0, "(J)J", 10 },
	{ "nextLong", (intptr_t) M_arc_math_Rand_nextLong_R_long, VTABLE_arc_math_Rand_nextLong_R_long, "()J", 1 },
	{ "next", (intptr_t) M_arc_math_Rand_next_int_R_int, VTABLE_arc_math_Rand_next_int_R_int, "(I)I", 20 },
	{ "nextInt", (intptr_t) M_arc_math_Rand_nextInt_R_int, VTABLE_arc_math_Rand_nextInt_R_int, "()I", 1 },
	{ "nextInt", (intptr_t) M_arc_math_Rand_nextInt_int_R_int, VTABLE_arc_math_Rand_nextInt_int_R_int, "(I)I", 1 },
	{ "nextLong", (intptr_t) M_arc_math_Rand_nextLong_long_R_long, VTABLE_arc_math_Rand_nextLong_long_R_long, "(J)J", 1 },
	{ "nextDouble", (intptr_t) M_arc_math_Rand_nextDouble_R_double, VTABLE_arc_math_Rand_nextDouble_R_double, "()D", 1 },
	{ "nextFloat", (intptr_t) M_arc_math_Rand_nextFloat_R_float, VTABLE_arc_math_Rand_nextFloat_R_float, "()F", 1 },
	{ "nextBoolean", (intptr_t) M_arc_math_Rand_nextBoolean_R_boolean, VTABLE_arc_math_Rand_nextBoolean_R_boolean, "()Z", 1 },
	{ "nextBytes", (intptr_t) M_arc_math_Rand_nextBytes_Array1_byte, VTABLE_arc_math_Rand_nextBytes_Array1_byte, "([B)V", 1 },
	{ "setSeed", (intptr_t) M_arc_math_Rand_setSeed_long, VTABLE_arc_math_Rand_setSeed_long, "(J)V", 1 },
	{ "chance", (intptr_t) M_arc_math_Rand_chance_double_R_boolean, VTABLE_arc_math_Rand_chance_double_R_boolean, "(D)Z", 1 },
	{ "range", (intptr_t) M_arc_math_Rand_range_float_R_float, VTABLE_arc_math_Rand_range_float_R_float, "(F)F", 1 },
	{ "random", (intptr_t) M_arc_math_Rand_random_float_R_float, VTABLE_arc_math_Rand_random_float_R_float, "(F)F", 1 },
	{ "random", (intptr_t) M_arc_math_Rand_random_int_R_int, VTABLE_arc_math_Rand_random_int_R_int, "(I)I", 1 },
	{ "random", (intptr_t) M_arc_math_Rand_random_float_float_R_float, VTABLE_arc_math_Rand_random_float_float_R_float, "(FF)F", 1 },
	{ "range", (intptr_t) M_arc_math_Rand_range_int_R_int, VTABLE_arc_math_Rand_range_int_R_int, "(I)I", 1 },
	{ "random", (intptr_t) M_arc_math_Rand_random_int_int_R_int, VTABLE_arc_math_Rand_random_int_int_R_int, "(II)I", 1 },
	{ "setState", (intptr_t) M_arc_math_Rand_setState_long_long, VTABLE_arc_math_Rand_setState_long_long, "(JJ)V", 1 },
	{ "getState", (intptr_t) M_arc_math_Rand_getState_int_R_long, VTABLE_arc_math_Rand_getState_int_R_long, "(I)J", 1 },
};

Class class_arc_math_Rand{
		.nativeName = (intptr_t) "arc/math/Rand",
		.parentClass = (intptr_t) &class_java_util_Random,
		.size = sizeof(arc_math_Rand),
		.classVtable = (intptr_t) vtable_arc_math_Rand,
		.staticInitializer = (intptr_t) clinit_arc_math_Rand,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_arc_math_Rand,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 33,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 4,
		.nativeFields = (intptr_t) fields,
		.methodCount = 23,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 30,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_arc_math_Rand = registerClass(&class_arc_math_Rand);

}
