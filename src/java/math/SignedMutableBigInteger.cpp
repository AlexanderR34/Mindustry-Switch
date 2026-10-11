#include "java/math/SignedMutableBigInteger.h"
#include "java/math/BigInteger.h"
#include "java/lang/Object.h"
#include "java/lang/String.h"
#include "java/math/MutableBigInteger.h"
#include "java/math/SignedMutableBigInteger.h"

extern "C" {


void mark_java_math_SignedMutableBigInteger(jobject object, jint mark, jint depth) {
	if (!object) {
		return;
	}
	if (depth > GC_DEPTH_ALWAYS && (object->gcMark < GC_MARK_START || object->gcMark == mark))
		return;
	if (depth > MAX_GC_MARK_DEPTH) {
		markDeepObject(object);
		return;
	}
	mark_java_math_MutableBigInteger(object, mark, depth);
	if (object->gcMark >= GC_MARK_START)
		object->gcMark = mark;
	auto self = (java_math_SignedMutableBigInteger *) object;
}

void clinit_java_math_SignedMutableBigInteger(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	clinit_java_math_MutableBigInteger(ctx);
}

void init_java_math_SignedMutableBigInteger(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/math/SignedMutableBigInteger:<init>", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_math_SignedMutableBigInteger(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(61);
	init_java_math_MutableBigInteger(ctx, (frame[0].o));
	LINE_NUMBER(52);
	((java_math_SignedMutableBigInteger *) NULL_CHECK((frame[0].o)))->F_sign = (jint(1));
	LINE_NUMBER(62);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_java_math_SignedMutableBigInteger_int(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/math/SignedMutableBigInteger:<init>", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_math_SignedMutableBigInteger(ctx);
	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(69);
	init_java_math_MutableBigInteger_int(ctx, (frame[0].o), (frame[1].i));
	LINE_NUMBER(52);
	((java_math_SignedMutableBigInteger *) NULL_CHECK((frame[0].o)))->F_sign = (jint(1));
	LINE_NUMBER(70);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_java_math_SignedMutableBigInteger_java_math_MutableBigInteger(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/math/SignedMutableBigInteger:<init>", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_math_SignedMutableBigInteger(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(77);
	init_java_math_MutableBigInteger_java_math_MutableBigInteger(ctx, (frame[0].o), (frame[1].o));
	LINE_NUMBER(52);
	((java_math_SignedMutableBigInteger *) NULL_CHECK((frame[0].o)))->F_sign = (jint(1));
	LINE_NUMBER(78);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_java_math_SignedMutableBigInteger_signedAdd_java_math_SignedMutableBigInteger(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/math/SignedMutableBigInteger:signedAdd", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(86);
	if (((jint)((java_math_SignedMutableBigInteger *) NULL_CHECK((frame[0].o)))->F_sign) != ((jint)((java_math_SignedMutableBigInteger *) NULL_CHECK((frame[1].o)))->F_sign)) goto label_1;
	}
	{
	LINE_NUMBER(87);
	((func_java_math_SignedMutableBigInteger_add_java_math_MutableBigInteger) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_math_SignedMutableBigInteger_add_java_math_MutableBigInteger])(ctx, (frame[0].o), (frame[1].o));
	goto label_3;
	}
label_1:;
	{
	LINE_NUMBER(89);
	sp[0].o = frame[0].o;
	jint temp0 = (jint)((java_math_SignedMutableBigInteger *) NULL_CHECK((frame[0].o)))->F_sign;
	jint temp1 = (jint)((func_java_math_SignedMutableBigInteger_subtract_java_math_MutableBigInteger_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_math_SignedMutableBigInteger_subtract_java_math_MutableBigInteger_R_int])(ctx, (frame[0].o), (frame[1].o));
	((java_math_SignedMutableBigInteger *) NULL_CHECK(sp[0].o))->F_sign = (temp0 * temp1);
	}
label_3:;
	LINE_NUMBER(91);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_java_math_SignedMutableBigInteger_signedAdd_java_math_MutableBigInteger(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/math/SignedMutableBigInteger:signedAdd", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(97);
	if (((jint)((java_math_SignedMutableBigInteger *) NULL_CHECK((frame[0].o)))->F_sign) != (jint(1))) goto label_1;
	}
	{
	LINE_NUMBER(98);
	((func_java_math_SignedMutableBigInteger_add_java_math_MutableBigInteger) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_math_SignedMutableBigInteger_add_java_math_MutableBigInteger])(ctx, (frame[0].o), (frame[1].o));
	goto label_3;
	}
label_1:;
	{
	LINE_NUMBER(100);
	sp[0].o = frame[0].o;
	jint temp0 = (jint)((java_math_SignedMutableBigInteger *) NULL_CHECK((frame[0].o)))->F_sign;
	jint temp1 = (jint)((func_java_math_SignedMutableBigInteger_subtract_java_math_MutableBigInteger_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_math_SignedMutableBigInteger_subtract_java_math_MutableBigInteger_R_int])(ctx, (frame[0].o), (frame[1].o));
	((java_math_SignedMutableBigInteger *) NULL_CHECK(sp[0].o))->F_sign = (temp0 * temp1);
	}
label_3:;
	LINE_NUMBER(102);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_java_math_SignedMutableBigInteger_signedSubtract_java_math_SignedMutableBigInteger(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/math/SignedMutableBigInteger:signedSubtract", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(108);
	if (((jint)((java_math_SignedMutableBigInteger *) NULL_CHECK((frame[0].o)))->F_sign) != ((jint)((java_math_SignedMutableBigInteger *) NULL_CHECK((frame[1].o)))->F_sign)) goto label_1;
	}
	{
	LINE_NUMBER(109);
	sp[0].o = frame[0].o;
	jint temp0 = (jint)((java_math_SignedMutableBigInteger *) NULL_CHECK((frame[0].o)))->F_sign;
	jint temp1 = (jint)((func_java_math_SignedMutableBigInteger_subtract_java_math_MutableBigInteger_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_math_SignedMutableBigInteger_subtract_java_math_MutableBigInteger_R_int])(ctx, (frame[0].o), (frame[1].o));
	((java_math_SignedMutableBigInteger *) NULL_CHECK(sp[0].o))->F_sign = (temp0 * temp1);
	goto label_3;
	}
label_1:;
	{
	LINE_NUMBER(111);
	((func_java_math_SignedMutableBigInteger_add_java_math_MutableBigInteger) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_math_SignedMutableBigInteger_add_java_math_MutableBigInteger])(ctx, (frame[0].o), (frame[1].o));
	}
label_3:;
	LINE_NUMBER(113);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_java_math_SignedMutableBigInteger_signedSubtract_java_math_MutableBigInteger(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/math/SignedMutableBigInteger:signedSubtract", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(119);
	if (((jint)((java_math_SignedMutableBigInteger *) NULL_CHECK((frame[0].o)))->F_sign) != (jint(1))) goto label_1;
	}
	{
	LINE_NUMBER(120);
	sp[0].o = frame[0].o;
	jint temp0 = (jint)((java_math_SignedMutableBigInteger *) NULL_CHECK((frame[0].o)))->F_sign;
	jint temp1 = (jint)((func_java_math_SignedMutableBigInteger_subtract_java_math_MutableBigInteger_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_math_SignedMutableBigInteger_subtract_java_math_MutableBigInteger_R_int])(ctx, (frame[0].o), (frame[1].o));
	((java_math_SignedMutableBigInteger *) NULL_CHECK(sp[0].o))->F_sign = (temp0 * temp1);
	goto label_3;
	}
label_1:;
	{
	LINE_NUMBER(122);
	((func_java_math_SignedMutableBigInteger_add_java_math_MutableBigInteger) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_math_SignedMutableBigInteger_add_java_math_MutableBigInteger])(ctx, (frame[0].o), (frame[1].o));
	}
label_3:;
	{
	LINE_NUMBER(123);
	if (((jint)((java_math_MutableBigInteger *) NULL_CHECK((frame[0].o)))->F_intLen) != 0) goto label_4;
	}
	{
	LINE_NUMBER(124);
	((java_math_SignedMutableBigInteger *) NULL_CHECK((frame[0].o)))->F_sign = (jint(1));
	}
label_4:;
	LINE_NUMBER(125);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jobject M_java_math_SignedMutableBigInteger_toString_R_java_lang_String(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/math/SignedMutableBigInteger:toString", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(132);
	sp[0].o = (jobject)((func_java_math_SignedMutableBigInteger_toBigInteger_int_R_java_math_BigInteger) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_math_SignedMutableBigInteger_toBigInteger_int_R_java_math_BigInteger])(ctx, (frame[0].o), ((jint)((java_math_SignedMutableBigInteger *) NULL_CHECK((frame[0].o)))->F_sign));
	sp[0].o = (jobject)((func_java_math_BigInteger_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_math_BigInteger_toString_R_java_lang_String])(ctx, sp[0].o);
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void *vtable_java_math_SignedMutableBigInteger[] {
	(void *) M_java_lang_Object_hashCode_R_int,
	(void *) M_java_lang_Object_equals_java_lang_Object_R_boolean,
	(void *) M_java_lang_Object_clone_R_java_lang_Object,
	(void *) M_java_lang_Object_getClass_R_java_lang_Class,
	(void *) M_java_math_SignedMutableBigInteger_toString_R_java_lang_String,
	(void *) M_java_lang_Object_finalize,
	(void *) M_java_lang_Object_notify,
	(void *) M_java_lang_Object_notifyAll,
	(void *) M_java_lang_Object_wait,
	(void *) M_java_lang_Object_wait_long,
	(void *) M_java_lang_Object_wait_long_int,
	(void *) M_java_math_MutableBigInteger_ones_int,
	(void *) M_java_math_MutableBigInteger_getMagnitudeArray_R_Array1_int,
	(void *) M_java_math_MutableBigInteger_toLong_R_long,
	(void *) M_java_math_MutableBigInteger_toBigInteger_int_R_java_math_BigInteger,
	(void *) M_java_math_MutableBigInteger_toBigInteger_R_java_math_BigInteger,
	(void *) M_java_math_MutableBigInteger_toBigDecimal_int_int_R_java_math_BigDecimal,
	(void *) M_java_math_MutableBigInteger_toCompactValue_int_R_long,
	(void *) M_java_math_MutableBigInteger_clear,
	(void *) M_java_math_MutableBigInteger_reset,
	(void *) M_java_math_MutableBigInteger_compare_java_math_MutableBigInteger_R_int,
	(void *) M_java_math_MutableBigInteger_compareShifted_java_math_MutableBigInteger_int_R_int,
	(void *) M_java_math_MutableBigInteger_compareHalf_java_math_MutableBigInteger_R_int,
	(void *) M_java_math_MutableBigInteger_getLowestSetBit_R_int,
	(void *) M_java_math_MutableBigInteger_getInt_int_R_int,
	(void *) M_java_math_MutableBigInteger_getLong_int_R_long,
	(void *) M_java_math_MutableBigInteger_normalize,
	(void *) M_java_math_MutableBigInteger_ensureCapacity_int,
	(void *) M_java_math_MutableBigInteger_toIntArray_R_Array1_int,
	(void *) M_java_math_MutableBigInteger_setInt_int_int,
	(void *) M_java_math_MutableBigInteger_setValue_Array1_int_int,
	(void *) M_java_math_MutableBigInteger_copyValue_java_math_MutableBigInteger,
	(void *) M_java_math_MutableBigInteger_copyValue_Array1_int,
	(void *) M_java_math_MutableBigInteger_isOne_R_boolean,
	(void *) M_java_math_MutableBigInteger_isZero_R_boolean,
	(void *) M_java_math_MutableBigInteger_isEven_R_boolean,
	(void *) M_java_math_MutableBigInteger_isOdd_R_boolean,
	(void *) M_java_math_MutableBigInteger_isNormal_R_boolean,
	(void *) M_java_math_MutableBigInteger_safeRightShift_int,
	(void *) M_java_math_MutableBigInteger_rightShift_int,
	(void *) M_java_math_MutableBigInteger_safeLeftShift_int,
	(void *) M_java_math_MutableBigInteger_leftShift_int,
	(void *) M_java_math_MutableBigInteger_divadd_Array1_int_Array1_int_int_R_int,
	(void *) M_java_math_MutableBigInteger_mulsub_Array1_int_Array1_int_int_int_int_R_int,
	(void *) M_java_math_MutableBigInteger_mulsubBorrow_Array1_int_Array1_int_int_int_int_R_int,
	(void *) M_java_math_MutableBigInteger_primitiveRightShift_int,
	(void *) M_java_math_MutableBigInteger_primitiveLeftShift_int,
	(void *) M_java_math_MutableBigInteger_getLower_int_R_java_math_BigInteger,
	(void *) M_java_math_MutableBigInteger_keepLower_int,
	(void *) M_java_math_MutableBigInteger_add_java_math_MutableBigInteger,
	(void *) M_java_math_MutableBigInteger_addShifted_java_math_MutableBigInteger_int,
	(void *) M_java_math_MutableBigInteger_addDisjoint_java_math_MutableBigInteger_int,
	(void *) M_java_math_MutableBigInteger_addLower_java_math_MutableBigInteger_int,
	(void *) M_java_math_MutableBigInteger_subtract_java_math_MutableBigInteger_R_int,
	(void *) M_java_math_MutableBigInteger_difference_java_math_MutableBigInteger_R_int,
	(void *) M_java_math_MutableBigInteger_multiply_java_math_MutableBigInteger_java_math_MutableBigInteger,
	(void *) M_java_math_MutableBigInteger_mul_int_java_math_MutableBigInteger,
	(void *) M_java_math_MutableBigInteger_divideOneWord_int_java_math_MutableBigInteger_R_int,
	(void *) M_java_math_MutableBigInteger_divide_java_math_MutableBigInteger_java_math_MutableBigInteger_R_java_math_MutableBigInteger,
	(void *) M_java_math_MutableBigInteger_divide_java_math_MutableBigInteger_java_math_MutableBigInteger_boolean_R_java_math_MutableBigInteger,
	(void *) M_java_math_MutableBigInteger_divideKnuth_java_math_MutableBigInteger_java_math_MutableBigInteger_R_java_math_MutableBigInteger,
	(void *) M_java_math_MutableBigInteger_divideKnuth_java_math_MutableBigInteger_java_math_MutableBigInteger_boolean_R_java_math_MutableBigInteger,
	(void *) M_java_math_MutableBigInteger_divideAndRemainderBurnikelZiegler_java_math_MutableBigInteger_java_math_MutableBigInteger_R_java_math_MutableBigInteger,
	(void *) M_java_math_MutableBigInteger_divide2n1n_java_math_MutableBigInteger_java_math_MutableBigInteger_R_java_math_MutableBigInteger,
	(void *) M_java_math_MutableBigInteger_divide3n2n_java_math_MutableBigInteger_java_math_MutableBigInteger_R_java_math_MutableBigInteger,
	(void *) M_java_math_MutableBigInteger_getBlock_int_int_int_R_java_math_MutableBigInteger,
	(void *) M_java_math_MutableBigInteger_bitLength_R_long,
	(void *) M_java_math_MutableBigInteger_divide_long_java_math_MutableBigInteger_R_long,
	(void *) M_java_math_MutableBigInteger_divideMagnitude_java_math_MutableBigInteger_java_math_MutableBigInteger_boolean_R_java_math_MutableBigInteger,
	(void *) M_java_math_MutableBigInteger_divideLongMagnitude_long_java_math_MutableBigInteger_R_java_math_MutableBigInteger,
	(void *) M_java_math_MutableBigInteger_divaddLong_int_int_Array1_int_int_R_int,
	(void *) M_java_math_MutableBigInteger_mulsubLong_Array1_int_int_int_int_int_R_int,
	(void *) M_java_math_MutableBigInteger_unsignedLongCompare_long_long_R_boolean,
	(void *) M_java_math_MutableBigInteger_hybridGCD_java_math_MutableBigInteger_R_java_math_MutableBigInteger,
	(void *) M_java_math_MutableBigInteger_binaryGCD_java_math_MutableBigInteger_R_java_math_MutableBigInteger,
	(void *) M_java_math_MutableBigInteger_mutableModInverse_java_math_MutableBigInteger_R_java_math_MutableBigInteger,
	(void *) M_java_math_MutableBigInteger_modInverseMP2_int_R_java_math_MutableBigInteger,
	(void *) M_java_math_MutableBigInteger_modInverse_java_math_MutableBigInteger_R_java_math_MutableBigInteger,
	(void *) M_java_math_MutableBigInteger_euclidModInverse_int_R_java_math_MutableBigInteger,
	(void *) M_java_math_SignedMutableBigInteger_signedAdd_java_math_SignedMutableBigInteger,
	(void *) M_java_math_SignedMutableBigInteger_signedAdd_java_math_MutableBigInteger,
	(void *) M_java_math_SignedMutableBigInteger_signedSubtract_java_math_SignedMutableBigInteger,
	(void *) M_java_math_SignedMutableBigInteger_signedSubtract_java_math_MutableBigInteger,
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
	{ "ones", "(I)V" },
	{ "getMagnitudeArray", "()[I" },
	{ "toLong", "()J" },
	{ "toBigInteger", "(I)Ljava/math/BigInteger;" },
	{ "toBigInteger", "()Ljava/math/BigInteger;" },
	{ "toBigDecimal", "(II)Ljava/math/BigDecimal;" },
	{ "toCompactValue", "(I)J" },
	{ "clear", "()V" },
	{ "reset", "()V" },
	{ "compare", "(Ljava/math/MutableBigInteger;)I" },
	{ "compareShifted", "(Ljava/math/MutableBigInteger;I)I" },
	{ "compareHalf", "(Ljava/math/MutableBigInteger;)I" },
	{ "getLowestSetBit", "()I" },
	{ "getInt", "(I)I" },
	{ "getLong", "(I)J" },
	{ "normalize", "()V" },
	{ "ensureCapacity", "(I)V" },
	{ "toIntArray", "()[I" },
	{ "setInt", "(II)V" },
	{ "setValue", "([II)V" },
	{ "copyValue", "(Ljava/math/MutableBigInteger;)V" },
	{ "copyValue", "([I)V" },
	{ "isOne", "()Z" },
	{ "isZero", "()Z" },
	{ "isEven", "()Z" },
	{ "isOdd", "()Z" },
	{ "isNormal", "()Z" },
	{ "safeRightShift", "(I)V" },
	{ "rightShift", "(I)V" },
	{ "safeLeftShift", "(I)V" },
	{ "leftShift", "(I)V" },
	{ "divadd", "([I[II)I" },
	{ "mulsub", "([I[IIII)I" },
	{ "mulsubBorrow", "([I[IIII)I" },
	{ "primitiveRightShift", "(I)V" },
	{ "primitiveLeftShift", "(I)V" },
	{ "getLower", "(I)Ljava/math/BigInteger;" },
	{ "keepLower", "(I)V" },
	{ "add", "(Ljava/math/MutableBigInteger;)V" },
	{ "addShifted", "(Ljava/math/MutableBigInteger;I)V" },
	{ "addDisjoint", "(Ljava/math/MutableBigInteger;I)V" },
	{ "addLower", "(Ljava/math/MutableBigInteger;I)V" },
	{ "subtract", "(Ljava/math/MutableBigInteger;)I" },
	{ "difference", "(Ljava/math/MutableBigInteger;)I" },
	{ "multiply", "(Ljava/math/MutableBigInteger;Ljava/math/MutableBigInteger;)V" },
	{ "mul", "(ILjava/math/MutableBigInteger;)V" },
	{ "divideOneWord", "(ILjava/math/MutableBigInteger;)I" },
	{ "divide", "(Ljava/math/MutableBigInteger;Ljava/math/MutableBigInteger;)Ljava/math/MutableBigInteger;" },
	{ "divide", "(Ljava/math/MutableBigInteger;Ljava/math/MutableBigInteger;Z)Ljava/math/MutableBigInteger;" },
	{ "divideKnuth", "(Ljava/math/MutableBigInteger;Ljava/math/MutableBigInteger;)Ljava/math/MutableBigInteger;" },
	{ "divideKnuth", "(Ljava/math/MutableBigInteger;Ljava/math/MutableBigInteger;Z)Ljava/math/MutableBigInteger;" },
	{ "divideAndRemainderBurnikelZiegler", "(Ljava/math/MutableBigInteger;Ljava/math/MutableBigInteger;)Ljava/math/MutableBigInteger;" },
	{ "divide2n1n", "(Ljava/math/MutableBigInteger;Ljava/math/MutableBigInteger;)Ljava/math/MutableBigInteger;" },
	{ "divide3n2n", "(Ljava/math/MutableBigInteger;Ljava/math/MutableBigInteger;)Ljava/math/MutableBigInteger;" },
	{ "getBlock", "(III)Ljava/math/MutableBigInteger;" },
	{ "bitLength", "()J" },
	{ "divide", "(JLjava/math/MutableBigInteger;)J" },
	{ "divideMagnitude", "(Ljava/math/MutableBigInteger;Ljava/math/MutableBigInteger;Z)Ljava/math/MutableBigInteger;" },
	{ "divideLongMagnitude", "(JLjava/math/MutableBigInteger;)Ljava/math/MutableBigInteger;" },
	{ "divaddLong", "(II[II)I" },
	{ "mulsubLong", "([IIIII)I" },
	{ "unsignedLongCompare", "(JJ)Z" },
	{ "hybridGCD", "(Ljava/math/MutableBigInteger;)Ljava/math/MutableBigInteger;" },
	{ "binaryGCD", "(Ljava/math/MutableBigInteger;)Ljava/math/MutableBigInteger;" },
	{ "mutableModInverse", "(Ljava/math/MutableBigInteger;)Ljava/math/MutableBigInteger;" },
	{ "modInverseMP2", "(I)Ljava/math/MutableBigInteger;" },
	{ "modInverse", "(Ljava/math/MutableBigInteger;)Ljava/math/MutableBigInteger;" },
	{ "euclidModInverse", "(I)Ljava/math/MutableBigInteger;" },
	{ "signedAdd", "(Ljava/math/SignedMutableBigInteger;)V" },
	{ "signedAdd", "(Ljava/math/MutableBigInteger;)V" },
	{ "signedSubtract", "(Ljava/math/SignedMutableBigInteger;)V" },
	{ "signedSubtract", "(Ljava/math/MutableBigInteger;)V" },
};

static FieldMetadata fields[] {
	{ "sign", &class_int, offsetof(java_math_SignedMutableBigInteger, F_sign), "I", 0 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_java_math_SignedMutableBigInteger, 0, "()V", 0 },
	{ "<init>", (intptr_t) init_java_math_SignedMutableBigInteger_int, 0, "(I)V", 0 },
	{ "<init>", (intptr_t) init_java_math_SignedMutableBigInteger_java_math_MutableBigInteger, 0, "(Ljava/math/MutableBigInteger;)V", 0 },
	{ "signedAdd", (intptr_t) M_java_math_SignedMutableBigInteger_signedAdd_java_math_SignedMutableBigInteger, VTABLE_java_math_SignedMutableBigInteger_signedAdd_java_math_SignedMutableBigInteger, "(Ljava/math/SignedMutableBigInteger;)V", 0 },
	{ "signedAdd", (intptr_t) M_java_math_SignedMutableBigInteger_signedAdd_java_math_MutableBigInteger, VTABLE_java_math_SignedMutableBigInteger_signedAdd_java_math_MutableBigInteger, "(Ljava/math/MutableBigInteger;)V", 0 },
	{ "signedSubtract", (intptr_t) M_java_math_SignedMutableBigInteger_signedSubtract_java_math_SignedMutableBigInteger, VTABLE_java_math_SignedMutableBigInteger_signedSubtract_java_math_SignedMutableBigInteger, "(Ljava/math/SignedMutableBigInteger;)V", 0 },
	{ "signedSubtract", (intptr_t) M_java_math_SignedMutableBigInteger_signedSubtract_java_math_MutableBigInteger, VTABLE_java_math_SignedMutableBigInteger_signedSubtract_java_math_MutableBigInteger, "(Ljava/math/MutableBigInteger;)V", 0 },
	{ "toString", (intptr_t) M_java_math_SignedMutableBigInteger_toString_R_java_lang_String, VTABLE_java_math_SignedMutableBigInteger_toString_R_java_lang_String, "()Ljava/lang/String;", 1 },
};

Class class_java_math_SignedMutableBigInteger{
		.nativeName = (intptr_t) "java/math/SignedMutableBigInteger",
		.parentClass = (intptr_t) &class_java_math_MutableBigInteger,
		.size = sizeof(java_math_SignedMutableBigInteger),
		.classVtable = (intptr_t) vtable_java_math_SignedMutableBigInteger,
		.staticInitializer = (intptr_t) clinit_java_math_SignedMutableBigInteger,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_java_math_SignedMutableBigInteger,
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
		.methodCount = 8,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 83,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_java_math_SignedMutableBigInteger = registerClass(&class_java_math_SignedMutableBigInteger);

}
