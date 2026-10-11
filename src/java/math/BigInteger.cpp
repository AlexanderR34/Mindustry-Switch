#include "java/math/BigInteger.h"
#include "java/math/BigInteger.h"
#include "java/lang/Integer.h"
#include "java/lang/StringBuilder.h"
#include "java/util/Random.h"
#include "java/lang/Comparable.h"
#include "java/lang/Float.h"
#include "java/lang/reflect/Constructor.h"
#include "java/lang/String.h"
#include "java/lang/Character.h"
#include "java/util/Arrays.h"
#include "java/util/concurrent/ThreadLocalRandom.h"
#include "java/lang/reflect/Method.h"
#include "java/lang/Math.h"
#include "java/lang/reflect/Field.h"
#include "java/lang/Number.h"
#include "java/math/MutableBigInteger.h"
#include "java/math/BitSieve.h"
#include "java/lang/annotation/Annotation.h"
#include "java/lang/IllegalArgumentException.h"
#include "java/lang/Long.h"
#include "java/lang/ArithmeticException.h"
#include "java/lang/Object.h"
#include "java/lang/NumberFormatException.h"
#include "java/lang/AssertionError.h"
#include "java/lang/Class.h"
#include "java/lang/Double.h"
#include "java/lang/System.h"
#include "java/lang/Deprecated.h"

extern "C" {

jlong SF_java_math_BigInteger_LONG_MASK;
jint SF_java_math_BigInteger_MAX_MAG_LENGTH;
jint SF_java_math_BigInteger_PRIME_SEARCH_BIT_LENGTH_LIMIT;
jint SF_java_math_BigInteger_KARATSUBA_THRESHOLD;
jint SF_java_math_BigInteger_TOOM_COOK_THRESHOLD;
jint SF_java_math_BigInteger_KARATSUBA_SQUARE_THRESHOLD;
jint SF_java_math_BigInteger_TOOM_COOK_SQUARE_THRESHOLD;
jint SF_java_math_BigInteger_BURNIKEL_ZIEGLER_THRESHOLD;
jint SF_java_math_BigInteger_BURNIKEL_ZIEGLER_OFFSET;
jint SF_java_math_BigInteger_SCHOENHAGE_BASE_CONVERSION_THRESHOLD;
jint SF_java_math_BigInteger_MULTIPLY_SQUARE_THRESHOLD;
jint SF_java_math_BigInteger_MONTGOMERY_INTRINSIC_THRESHOLD;
jobject SF_java_math_BigInteger_bitsPerDigit;
jint SF_java_math_BigInteger_SMALL_PRIME_THRESHOLD;
jint SF_java_math_BigInteger_DEFAULT_PRIME_CERTAINTY;
jobject SF_java_math_BigInteger_SMALL_PRIME_PRODUCT;
jint SF_java_math_BigInteger_MAX_CONSTANT;
jobject SF_java_math_BigInteger_posConst;
jobject SF_java_math_BigInteger_negConst;
volatile jobject SF_java_math_BigInteger_powerCache;
jobject SF_java_math_BigInteger_logCache;
jdouble SF_java_math_BigInteger_LOG_TWO;
jobject SF_java_math_BigInteger_ZERO;
jobject SF_java_math_BigInteger_ONE;
jobject SF_java_math_BigInteger_TWO;
jobject SF_java_math_BigInteger_NEGATIVE_ONE;
jobject SF_java_math_BigInteger_TEN;
jobject SF_java_math_BigInteger_bnExpModThreshTable;
jobject SF_java_math_BigInteger_zeros;
jobject SF_java_math_BigInteger_digitsPerLong;
jobject SF_java_math_BigInteger_longRadix;
jobject SF_java_math_BigInteger_digitsPerInt;
jobject SF_java_math_BigInteger_intRadix;
jlong SF_java_math_BigInteger_serialVersionUID;
jbool SF_java_math_BigInteger_$assertionsDisabled;

void mark_java_math_BigInteger(jobject object, jint mark, jint depth) {
	if (!object) {
		if (SF_java_math_BigInteger_bitsPerDigit)
			((gc_mark_ptr) ((jclass) ((jobject) SF_java_math_BigInteger_bitsPerDigit)->clazz)->markFunction)((jobject) SF_java_math_BigInteger_bitsPerDigit, mark, depth + 1);
		if (SF_java_math_BigInteger_SMALL_PRIME_PRODUCT)
			((gc_mark_ptr) ((jclass) ((jobject) SF_java_math_BigInteger_SMALL_PRIME_PRODUCT)->clazz)->markFunction)((jobject) SF_java_math_BigInteger_SMALL_PRIME_PRODUCT, mark, depth + 1);
		if (SF_java_math_BigInteger_posConst)
			((gc_mark_ptr) ((jclass) ((jobject) SF_java_math_BigInteger_posConst)->clazz)->markFunction)((jobject) SF_java_math_BigInteger_posConst, mark, depth + 1);
		if (SF_java_math_BigInteger_negConst)
			((gc_mark_ptr) ((jclass) ((jobject) SF_java_math_BigInteger_negConst)->clazz)->markFunction)((jobject) SF_java_math_BigInteger_negConst, mark, depth + 1);
		if (SF_java_math_BigInteger_powerCache)
			((gc_mark_ptr) ((jclass) ((jobject) SF_java_math_BigInteger_powerCache)->clazz)->markFunction)((jobject) SF_java_math_BigInteger_powerCache, mark, depth + 1);
		if (SF_java_math_BigInteger_logCache)
			((gc_mark_ptr) ((jclass) ((jobject) SF_java_math_BigInteger_logCache)->clazz)->markFunction)((jobject) SF_java_math_BigInteger_logCache, mark, depth + 1);
		if (SF_java_math_BigInteger_ZERO)
			((gc_mark_ptr) ((jclass) ((jobject) SF_java_math_BigInteger_ZERO)->clazz)->markFunction)((jobject) SF_java_math_BigInteger_ZERO, mark, depth + 1);
		if (SF_java_math_BigInteger_ONE)
			((gc_mark_ptr) ((jclass) ((jobject) SF_java_math_BigInteger_ONE)->clazz)->markFunction)((jobject) SF_java_math_BigInteger_ONE, mark, depth + 1);
		if (SF_java_math_BigInteger_TWO)
			((gc_mark_ptr) ((jclass) ((jobject) SF_java_math_BigInteger_TWO)->clazz)->markFunction)((jobject) SF_java_math_BigInteger_TWO, mark, depth + 1);
		if (SF_java_math_BigInteger_NEGATIVE_ONE)
			((gc_mark_ptr) ((jclass) ((jobject) SF_java_math_BigInteger_NEGATIVE_ONE)->clazz)->markFunction)((jobject) SF_java_math_BigInteger_NEGATIVE_ONE, mark, depth + 1);
		if (SF_java_math_BigInteger_TEN)
			((gc_mark_ptr) ((jclass) ((jobject) SF_java_math_BigInteger_TEN)->clazz)->markFunction)((jobject) SF_java_math_BigInteger_TEN, mark, depth + 1);
		if (SF_java_math_BigInteger_bnExpModThreshTable)
			((gc_mark_ptr) ((jclass) ((jobject) SF_java_math_BigInteger_bnExpModThreshTable)->clazz)->markFunction)((jobject) SF_java_math_BigInteger_bnExpModThreshTable, mark, depth + 1);
		if (SF_java_math_BigInteger_zeros)
			((gc_mark_ptr) ((jclass) ((jobject) SF_java_math_BigInteger_zeros)->clazz)->markFunction)((jobject) SF_java_math_BigInteger_zeros, mark, depth + 1);
		if (SF_java_math_BigInteger_digitsPerLong)
			((gc_mark_ptr) ((jclass) ((jobject) SF_java_math_BigInteger_digitsPerLong)->clazz)->markFunction)((jobject) SF_java_math_BigInteger_digitsPerLong, mark, depth + 1);
		if (SF_java_math_BigInteger_longRadix)
			((gc_mark_ptr) ((jclass) ((jobject) SF_java_math_BigInteger_longRadix)->clazz)->markFunction)((jobject) SF_java_math_BigInteger_longRadix, mark, depth + 1);
		if (SF_java_math_BigInteger_digitsPerInt)
			((gc_mark_ptr) ((jclass) ((jobject) SF_java_math_BigInteger_digitsPerInt)->clazz)->markFunction)((jobject) SF_java_math_BigInteger_digitsPerInt, mark, depth + 1);
		if (SF_java_math_BigInteger_intRadix)
			((gc_mark_ptr) ((jclass) ((jobject) SF_java_math_BigInteger_intRadix)->clazz)->markFunction)((jobject) SF_java_math_BigInteger_intRadix, mark, depth + 1);
		return;
	}
	if (depth > GC_DEPTH_ALWAYS && (object->gcMark < GC_MARK_START || object->gcMark == mark))
		return;
	if (depth > MAX_GC_MARK_DEPTH) {
		markDeepObject(object);
		return;
	}
	mark_java_lang_Number(object, mark, depth);
	if (object->gcMark >= GC_MARK_START)
		object->gcMark = mark;
	auto self = (java_math_BigInteger *) object;
	if (self->F_mag)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_mag)->clazz)->markFunction)((jobject) self->F_mag, mark, depth + 1);
}

void init_java_math_BigInteger_Array1_byte(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/math/BigInteger:<init>", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_math_BigInteger(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(298);
	init_java_lang_Number(ctx, (frame[0].o));
	LINE_NUMBER(299);
	if ((((jarray) nullCheck(ctx, (frame[1].o)))->length) != 0) goto label_2;
	}
	{
	LINE_NUMBER(300);
	clinit_java_lang_NumberFormatException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_NumberFormatException);
	init_java_lang_NumberFormatException_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"Zero length BigInteger"_j))));
	throwException(ctx, sp[0].o);	}
label_2:;
	{
	LINE_NUMBER(302);
	if (((jint)ARRAY_ACCESS(jbyte, (frame[1].o), (jint(0)))) >= 0) goto label_4;
	}
	{
	LINE_NUMBER(303);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)SM_java_math_BigInteger_makePositive_Array1_byte_R_Array1_int(ctx, (frame[1].o));
	((java_math_BigInteger *) NULL_CHECK(sp[0].o))->F_mag = (jref) sp[1].o;
	LINE_NUMBER(304);
	((java_math_BigInteger *) NULL_CHECK((frame[0].o)))->F_signum = (jint(-1));
	goto label_7;
	}
label_4:;
	{
	LINE_NUMBER(306);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)SM_java_math_BigInteger_stripLeadingZeroBytes_Array1_byte_R_Array1_int(ctx, (frame[1].o));
	((java_math_BigInteger *) NULL_CHECK(sp[0].o))->F_mag = (jref) sp[1].o;
	LINE_NUMBER(307);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((java_math_BigInteger *) NULL_CHECK((frame[0].o)))->F_mag;
	sp += 1;
	if ((((jarray) nullCheck(ctx, sp[0].o))->length) != 0) goto label_9;
	}
	INST_ICONST(0);
	goto label_10;
label_9:;
	INST_ICONST(1);
label_10:;
	sp -= 2;
	((java_math_BigInteger *) NULL_CHECK(sp[0].o))->F_signum = sp[1].i;
label_7:;
	{
	LINE_NUMBER(309);
	sp[0].o = (jobject)((java_math_BigInteger *) NULL_CHECK((frame[0].o)))->F_mag;
	if ((((jarray) nullCheck(ctx, sp[0].o))->length) < (jint(67108864))) goto label_11;
	}
	{
	LINE_NUMBER(310);
	M_java_math_BigInteger_checkRange(ctx, (frame[0].o));
	}
label_11:;
	LINE_NUMBER(312);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void init_java_math_BigInteger_Array1_int(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/math/BigInteger:<init>", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_math_BigInteger(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(320);
	init_java_lang_Number(ctx, (frame[0].o));
	LINE_NUMBER(321);
	if ((((jarray) nullCheck(ctx, (frame[1].o)))->length) != 0) goto label_2;
	}
	{
	LINE_NUMBER(322);
	clinit_java_lang_NumberFormatException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_NumberFormatException);
	init_java_lang_NumberFormatException_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"Zero length BigInteger"_j))));
	throwException(ctx, sp[0].o);	}
label_2:;
	{
	LINE_NUMBER(324);
	if (((jint)ARRAY_ACCESS(jint, (frame[1].o), (jint(0)))) >= 0) goto label_4;
	}
	{
	LINE_NUMBER(325);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)SM_java_math_BigInteger_makePositive_Array1_int_R_Array1_int(ctx, (frame[1].o));
	((java_math_BigInteger *) NULL_CHECK(sp[0].o))->F_mag = (jref) sp[1].o;
	LINE_NUMBER(326);
	((java_math_BigInteger *) NULL_CHECK((frame[0].o)))->F_signum = (jint(-1));
	goto label_7;
	}
label_4:;
	{
	LINE_NUMBER(328);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)SM_java_math_BigInteger_trustedStripLeadingZeroInts_Array1_int_R_Array1_int(ctx, (frame[1].o));
	((java_math_BigInteger *) NULL_CHECK(sp[0].o))->F_mag = (jref) sp[1].o;
	LINE_NUMBER(329);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((java_math_BigInteger *) NULL_CHECK((frame[0].o)))->F_mag;
	sp += 1;
	if ((((jarray) nullCheck(ctx, sp[0].o))->length) != 0) goto label_9;
	}
	INST_ICONST(0);
	goto label_10;
label_9:;
	INST_ICONST(1);
label_10:;
	sp -= 2;
	((java_math_BigInteger *) NULL_CHECK(sp[0].o))->F_signum = sp[1].i;
label_7:;
	{
	LINE_NUMBER(331);
	sp[0].o = (jobject)((java_math_BigInteger *) NULL_CHECK((frame[0].o)))->F_mag;
	if ((((jarray) nullCheck(ctx, sp[0].o))->length) < (jint(67108864))) goto label_11;
	}
	{
	LINE_NUMBER(332);
	M_java_math_BigInteger_checkRange(ctx, (frame[0].o));
	}
label_11:;
	LINE_NUMBER(334);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void init_java_math_BigInteger_int_Array1_byte(jcontext ctx, jobject self, jint param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/math/BigInteger:<init>", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_math_BigInteger(ctx);
	frame[0].o = self;
	frame[1].i = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(352);
	init_java_lang_Number(ctx, (frame[0].o));
	LINE_NUMBER(353);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)SM_java_math_BigInteger_stripLeadingZeroBytes_Array1_byte_R_Array1_int(ctx, (frame[2].o));
	((java_math_BigInteger *) NULL_CHECK(sp[0].o))->F_mag = (jref) sp[1].o;
	LINE_NUMBER(355);
	if ((frame[1].i) < (jint(-1))) goto label_3;
	}
	{
	if ((frame[1].i) <= (jint(1))) goto label_4;
	}
label_3:;
	{
	LINE_NUMBER(356);
	clinit_java_lang_NumberFormatException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_NumberFormatException);
	init_java_lang_NumberFormatException_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"Invalid signum value"_j))));
	throwException(ctx, sp[0].o);	}
label_4:;
	{
	LINE_NUMBER(358);
	sp[0].o = (jobject)((java_math_BigInteger *) NULL_CHECK((frame[0].o)))->F_mag;
	if ((((jarray) nullCheck(ctx, sp[0].o))->length) != 0) goto label_5;
	}
	{
	LINE_NUMBER(359);
	((java_math_BigInteger *) NULL_CHECK((frame[0].o)))->F_signum = (jint(0));
	goto label_7;
	}
label_5:;
	{
	LINE_NUMBER(361);
	if ((frame[1].i) != 0) goto label_8;
	}
	{
	LINE_NUMBER(362);
	clinit_java_lang_NumberFormatException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_NumberFormatException);
	init_java_lang_NumberFormatException_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"signum-magnitude mismatch"_j))));
	throwException(ctx, sp[0].o);	}
label_8:;
	{
	LINE_NUMBER(363);
	((java_math_BigInteger *) NULL_CHECK((frame[0].o)))->F_signum = (frame[1].i);
	}
label_7:;
	{
	LINE_NUMBER(365);
	sp[0].o = (jobject)((java_math_BigInteger *) NULL_CHECK((frame[0].o)))->F_mag;
	if ((((jarray) nullCheck(ctx, sp[0].o))->length) < (jint(67108864))) goto label_10;
	}
	{
	LINE_NUMBER(366);
	M_java_math_BigInteger_checkRange(ctx, (frame[0].o));
	}
label_10:;
	LINE_NUMBER(368);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void init_java_math_BigInteger_int_Array1_int(jcontext ctx, jobject self, jint param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/math/BigInteger:<init>", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_math_BigInteger(ctx);
	frame[0].o = self;
	frame[1].i = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(376);
	init_java_lang_Number(ctx, (frame[0].o));
	LINE_NUMBER(377);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)SM_java_math_BigInteger_stripLeadingZeroInts_Array1_int_R_Array1_int(ctx, (frame[2].o));
	((java_math_BigInteger *) NULL_CHECK(sp[0].o))->F_mag = (jref) sp[1].o;
	LINE_NUMBER(379);
	if ((frame[1].i) < (jint(-1))) goto label_3;
	}
	{
	if ((frame[1].i) <= (jint(1))) goto label_4;
	}
label_3:;
	{
	LINE_NUMBER(380);
	clinit_java_lang_NumberFormatException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_NumberFormatException);
	init_java_lang_NumberFormatException_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"Invalid signum value"_j))));
	throwException(ctx, sp[0].o);	}
label_4:;
	{
	LINE_NUMBER(382);
	sp[0].o = (jobject)((java_math_BigInteger *) NULL_CHECK((frame[0].o)))->F_mag;
	if ((((jarray) nullCheck(ctx, sp[0].o))->length) != 0) goto label_5;
	}
	{
	LINE_NUMBER(383);
	((java_math_BigInteger *) NULL_CHECK((frame[0].o)))->F_signum = (jint(0));
	goto label_7;
	}
label_5:;
	{
	LINE_NUMBER(385);
	if ((frame[1].i) != 0) goto label_8;
	}
	{
	LINE_NUMBER(386);
	clinit_java_lang_NumberFormatException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_NumberFormatException);
	init_java_lang_NumberFormatException_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"signum-magnitude mismatch"_j))));
	throwException(ctx, sp[0].o);	}
label_8:;
	{
	LINE_NUMBER(387);
	((java_math_BigInteger *) NULL_CHECK((frame[0].o)))->F_signum = (frame[1].i);
	}
label_7:;
	{
	LINE_NUMBER(389);
	sp[0].o = (jobject)((java_math_BigInteger *) NULL_CHECK((frame[0].o)))->F_mag;
	if ((((jarray) nullCheck(ctx, sp[0].o))->length) < (jint(67108864))) goto label_10;
	}
	{
	LINE_NUMBER(390);
	M_java_math_BigInteger_checkRange(ctx, (frame[0].o));
	}
label_10:;
	LINE_NUMBER(392);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void init_java_math_BigInteger_java_lang_String_int(jcontext ctx, jobject self, jobject param0, jint param1) {
	NULL_CHECK(self);
	jtype frame[22];
	auto stack = &frame[17];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/math/BigInteger:<init>", 22 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_math_BigInteger(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(411);
	init_java_lang_Number(ctx, (frame[0].o));
	LINE_NUMBER(412);
	frame[3].i = (jint(0));
	LINE_NUMBER(413);
	jint temp0 = (jint)((func_java_lang_String_length_R_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_String_length_R_int])(ctx, (frame[1].o));
	frame[5].i = temp0;
	LINE_NUMBER(415);
	if ((frame[2].i) < (jint(2))) goto label_4;
	}
	{
	if ((frame[2].i) <= (36)) goto label_5;
	}
label_4:;
	{
	LINE_NUMBER(416);
	clinit_java_lang_NumberFormatException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_NumberFormatException);
	init_java_lang_NumberFormatException_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"Radix out of range"_j))));
	throwException(ctx, sp[0].o);	}
label_5:;
	{
	LINE_NUMBER(417);
	if ((frame[5].i) != 0) goto label_6;
	}
	{
	LINE_NUMBER(418);
	clinit_java_lang_NumberFormatException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_NumberFormatException);
	init_java_lang_NumberFormatException_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"Zero length BigInteger"_j))));
	throwException(ctx, sp[0].o);	}
label_6:;
	{
	LINE_NUMBER(421);
	frame[6].i = (jint(1));
	LINE_NUMBER(422);
	jint temp0 = (jint)((func_java_lang_String_lastIndexOf_int_R_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_String_lastIndexOf_int_R_int])(ctx, (frame[1].o), (45));
	frame[7].i = temp0;
	LINE_NUMBER(423);
	jint temp1 = (jint)((func_java_lang_String_lastIndexOf_int_R_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_String_lastIndexOf_int_R_int])(ctx, (frame[1].o), (43));
	frame[8].i = temp1;
	LINE_NUMBER(424);
	if ((frame[7].i) < 0) goto label_11;
	}
	{
	LINE_NUMBER(425);
	if ((frame[7].i) != 0) goto label_13;
	}
	INST_ILOAD(8);
	if ((--sp)->i < 0) goto label_14;
label_13:;
	{
	LINE_NUMBER(426);
	clinit_java_lang_NumberFormatException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_NumberFormatException);
	init_java_lang_NumberFormatException_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"Illegal embedded sign character"_j))));
	throwException(ctx, sp[0].o);	}
label_14:;
	{
	LINE_NUMBER(428);
	frame[6].i = (jint(-1));
	LINE_NUMBER(429);
	frame[3].i = (jint(1));
	goto label_16;
	}
label_11:;
	{
	LINE_NUMBER(430);
	if ((frame[8].i) < 0) goto label_16;
	}
	{
	LINE_NUMBER(431);
	if ((frame[8].i) == 0) goto label_18;
	}
	{
	LINE_NUMBER(432);
	clinit_java_lang_NumberFormatException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_NumberFormatException);
	init_java_lang_NumberFormatException_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"Illegal embedded sign character"_j))));
	throwException(ctx, sp[0].o);	}
label_18:;
	{
	LINE_NUMBER(434);
	frame[3].i = (jint(1));
	}
label_16:;
	{
	LINE_NUMBER(436);
	if ((frame[3].i) != (frame[5].i)) goto label_20;
	}
	{
	LINE_NUMBER(437);
	clinit_java_lang_NumberFormatException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_NumberFormatException);
	init_java_lang_NumberFormatException_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"Zero length BigInteger"_j))));
	throwException(ctx, sp[0].o);	}
label_20:;
	{
	LINE_NUMBER(440);
	if ((frame[3].i) >= (frame[5].i)) goto label_22;
	}
	{
	sp[0].o = frame[1].o;
	jint temp0 = frame[3].i;
	LINE_NUMBER(441);
	jint temp1 = (jint)((func_java_lang_String_charAt_int_R_char) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_String_charAt_int_R_char])(ctx, sp[0].o, temp0);
	jint temp2 = (jint)SM_java_lang_Character_digit_char_int_R_int(ctx, temp1, (frame[2].i));
	if (temp2 != 0) goto label_22;
	}
	{
	LINE_NUMBER(442);
	INST_IINC(3, 1);
	goto label_20;
	}
label_22:;
	{
	LINE_NUMBER(445);
	if ((frame[3].i) != (frame[5].i)) goto label_25;
	}
	{
	LINE_NUMBER(446);
	((java_math_BigInteger *) NULL_CHECK((frame[0].o)))->F_signum = (jint(0));
	LINE_NUMBER(447);
	sp[0].o = frame[0].o;
	clinit_java_math_BigInteger(ctx);
	sp[1].o = (jobject)SF_java_math_BigInteger_ZERO;
	sp[1].o = (jobject)((java_math_BigInteger *) NULL_CHECK(sp[1].o))->F_mag;
	((java_math_BigInteger *) NULL_CHECK(sp[0].o))->F_mag = (jref) sp[1].o;
	LINE_NUMBER(448);
	popStackFrame(ctx);
	return;
	}
label_25:;
	{
	LINE_NUMBER(451);
	frame[4].i = ((frame[5].i) - (frame[3].i));
	LINE_NUMBER(452);
	((java_math_BigInteger *) NULL_CHECK((frame[0].o)))->F_signum = (frame[6].i);
	LINE_NUMBER(456);
	jlong temp0 = jlong((frame[4].i));
	clinit_java_math_BigInteger(ctx);
	sp[0].o = (jobject)SF_java_math_BigInteger_bitsPerDigit;
	frame[9].l = ((bit_cast<jlong>(bit_cast<uint64_t>((temp0 * ((jlong)ARRAY_ACCESS(jlong, sp[0].o, (frame[2].i))))) >> (10))) + (jlong(1)));
	LINE_NUMBER(457);
	if ((longCompare(((frame[9].l) + (jlong(31ll))), (jlong(4294967296ll)))) < 0) goto label_32;
	}
	LINE_NUMBER(458);
	SM_java_math_BigInteger_reportOverflow(ctx);
label_32:;
	{
	LINE_NUMBER(460);
	frame[11].i = (bit_cast<jint>(bit_cast<uint32_t>((jint(((frame[9].l) + (jlong(31ll)))))) >> (jint(5))));
	LINE_NUMBER(461);
	sp[0].o = (jobject) createArray(ctx, &class_int, (frame[11].i));
	frame[12].o = sp[0].o;
	LINE_NUMBER(464);
	jint temp0 = frame[4].i;
	clinit_java_math_BigInteger(ctx);
	sp[0].o = (jobject)SF_java_math_BigInteger_digitsPerInt;
	frame[13].i = (temp0 % ((jint)ARRAY_ACCESS(jint, sp[0].o, (frame[2].i))));
	LINE_NUMBER(465);
	if ((frame[13].i) != 0) goto label_37;
	}
	{
	LINE_NUMBER(466);
	clinit_java_math_BigInteger(ctx);
	sp[0].o = (jobject)SF_java_math_BigInteger_digitsPerInt;
	frame[13].i = ((jint)ARRAY_ACCESS(jint, sp[0].o, (frame[2].i)));
	}
label_37:;
	{
	LINE_NUMBER(467);
	sp[0].o = frame[1].o;
	jint temp0 = frame[3].i;
	jint temp1 = (frame[3].i) + (frame[13].i);
	frame[3].i = temp1;
	sp[0].o = (jobject)((func_java_lang_String_substring_int_int_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_String_substring_int_int_R_java_lang_String])(ctx, sp[0].o, temp0, temp1);
	frame[14].o = sp[0].o;
	LINE_NUMBER(468);
	sp[0].o = frame[12].o;
	jint temp4 = (frame[11].i) - (jint(1));
	jint temp5 = (jint)SM_java_lang_Integer_parseInt_java_lang_String_int_R_int(ctx, (frame[14].o), (frame[2].i));
	ARRAY_ACCESS(jint, sp[0].o, temp4) = temp5;
	LINE_NUMBER(469);
	if (((jint)ARRAY_ACCESS(jint, (frame[12].o), ((frame[11].i) - (jint(1))))) >= 0) goto label_41;
	}
	{
	LINE_NUMBER(470);
	clinit_java_lang_NumberFormatException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_NumberFormatException);
	init_java_lang_NumberFormatException_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"Illegal digit"_j))));
	throwException(ctx, sp[0].o);	}
label_41:;
	{
	LINE_NUMBER(473);
	clinit_java_math_BigInteger(ctx);
	sp[0].o = (jobject)SF_java_math_BigInteger_intRadix;
	frame[15].i = ((jint)ARRAY_ACCESS(jint, sp[0].o, (frame[2].i)));
	LINE_NUMBER(474);
	frame[16].i = (jint(0));
	}
label_44:;
	{
	LINE_NUMBER(475);
	if ((frame[3].i) >= (frame[5].i)) goto label_45;
	}
	{
	LINE_NUMBER(476);
	sp[0].o = frame[1].o;
	jint temp0 = frame[3].i;
	jint temp1 = frame[3].i;
	clinit_java_math_BigInteger(ctx);
	sp[1].o = (jobject)SF_java_math_BigInteger_digitsPerInt;
	jint temp2 = temp1 + ((jint)ARRAY_ACCESS(jint, sp[1].o, (frame[2].i)));
	frame[3].i = temp2;
	sp[0].o = (jobject)((func_java_lang_String_substring_int_int_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_String_substring_int_int_R_java_lang_String])(ctx, sp[0].o, temp0, temp2);
	frame[14].o = sp[0].o;
	LINE_NUMBER(477);
	jint temp5 = (jint)SM_java_lang_Integer_parseInt_java_lang_String_int_R_int(ctx, (frame[14].o), (frame[2].i));
	frame[16].i = temp5;
	LINE_NUMBER(478);
	if ((frame[16].i) >= 0) goto label_49;
	}
	{
	LINE_NUMBER(479);
	clinit_java_lang_NumberFormatException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_NumberFormatException);
	init_java_lang_NumberFormatException_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"Illegal digit"_j))));
	throwException(ctx, sp[0].o);	}
label_49:;
	{
	LINE_NUMBER(480);
	SM_java_math_BigInteger_destructiveMulAdd_Array1_int_int_int(ctx, (frame[12].o), (frame[15].i), (frame[16].i));
	goto label_44;
	}
label_45:;
	{
	LINE_NUMBER(483);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)SM_java_math_BigInteger_trustedStripLeadingZeroInts_Array1_int_R_Array1_int(ctx, (frame[12].o));
	((java_math_BigInteger *) NULL_CHECK(sp[0].o))->F_mag = (jref) sp[1].o;
	LINE_NUMBER(484);
	sp[0].o = (jobject)((java_math_BigInteger *) NULL_CHECK((frame[0].o)))->F_mag;
	if ((((jarray) nullCheck(ctx, sp[0].o))->length) < (jint(67108864))) goto label_52;
	}
	{
	LINE_NUMBER(485);
	M_java_math_BigInteger_checkRange(ctx, (frame[0].o));
	}
label_52:;
	LINE_NUMBER(487);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void init_java_math_BigInteger_Array1_char_int_int(jcontext ctx, jobject self, jobject param0, jint param1, jint param2) {
	NULL_CHECK(self);
	jtype frame[17];
	auto stack = &frame[10];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/math/BigInteger:<init>", 17 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_math_BigInteger(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	frame[3].i = param2;
	{
	LINE_NUMBER(493);
	init_java_lang_Number(ctx, (frame[0].o));
	LINE_NUMBER(494);
	frame[4].i = (jint(0));
	}
label_2:;
	{
	LINE_NUMBER(497);
	if ((frame[4].i) >= (frame[3].i)) goto label_3;
	}
	{
	jint temp0 = (jint)SM_java_lang_Character_digit_char_int_R_int(ctx, ((jint)ARRAY_ACCESS(jchar, (frame[1].o), (frame[4].i))), (10));
	if (temp0 != 0) goto label_3;
	}
	{
	LINE_NUMBER(498);
	INST_IINC(4, 1);
	goto label_2;
	}
label_3:;
	{
	LINE_NUMBER(500);
	if ((frame[4].i) != (frame[3].i)) goto label_5;
	}
	{
	LINE_NUMBER(501);
	((java_math_BigInteger *) NULL_CHECK((frame[0].o)))->F_signum = (jint(0));
	LINE_NUMBER(502);
	sp[0].o = frame[0].o;
	clinit_java_math_BigInteger(ctx);
	sp[1].o = (jobject)SF_java_math_BigInteger_ZERO;
	sp[1].o = (jobject)((java_math_BigInteger *) NULL_CHECK(sp[1].o))->F_mag;
	((java_math_BigInteger *) NULL_CHECK(sp[0].o))->F_mag = (jref) sp[1].o;
	LINE_NUMBER(503);
	popStackFrame(ctx);
	return;
	}
label_5:;
	{
	LINE_NUMBER(506);
	frame[5].i = ((frame[3].i) - (frame[4].i));
	LINE_NUMBER(507);
	((java_math_BigInteger *) NULL_CHECK((frame[0].o)))->F_signum = (frame[2].i);
	LINE_NUMBER(510);
	if ((frame[3].i) >= (10)) goto label_11;
	}
	{
	LINE_NUMBER(511);
	frame[6].i = (jint(1));
	goto label_14;
	}
label_11:;
	{
	LINE_NUMBER(513);
	jlong temp0 = jlong((frame[5].i));
	clinit_java_math_BigInteger(ctx);
	sp[0].o = (jobject)SF_java_math_BigInteger_bitsPerDigit;
	frame[7].l = ((bit_cast<jlong>(bit_cast<uint64_t>((temp0 * ((jlong)ARRAY_ACCESS(jlong, sp[0].o, (10))))) >> (10))) + (jlong(1)));
	LINE_NUMBER(514);
	if ((longCompare(((frame[7].l) + (jlong(31ll))), (jlong(4294967296ll)))) < 0) goto label_16;
	}
	LINE_NUMBER(515);
	SM_java_math_BigInteger_reportOverflow(ctx);
label_16:;
	{
	LINE_NUMBER(517);
	frame[6].i = (bit_cast<jint>(bit_cast<uint32_t>((jint(((frame[7].l) + (jlong(31ll)))))) >> (jint(5))));
	}
label_14:;
	{
	LINE_NUMBER(519);
	sp[0].o = (jobject) createArray(ctx, &class_int, (frame[6].i));
	frame[7].o = sp[0].o;
	LINE_NUMBER(522);
	jint temp0 = frame[5].i;
	clinit_java_math_BigInteger(ctx);
	sp[0].o = (jobject)SF_java_math_BigInteger_digitsPerInt;
	frame[8].i = (temp0 % ((jint)ARRAY_ACCESS(jint, sp[0].o, (10))));
	LINE_NUMBER(523);
	if ((frame[8].i) != 0) goto label_20;
	}
	{
	LINE_NUMBER(524);
	clinit_java_math_BigInteger(ctx);
	sp[0].o = (jobject)SF_java_math_BigInteger_digitsPerInt;
	frame[8].i = ((jint)ARRAY_ACCESS(jint, sp[0].o, (10)));
	}
label_20:;
	{
	LINE_NUMBER(525);
	sp[0].o = frame[7].o;
	jint temp0 = (frame[6].i) - (jint(1));
	sp[1].o = frame[0].o;
	sp[2].o = frame[1].o;
	jint temp1 = frame[4].i;
	jint temp2 = (frame[4].i) + (frame[8].i);
	frame[4].i = temp2;
	jint temp5 = (jint)M_java_math_BigInteger_parseInt_Array1_char_int_int_R_int(ctx, sp[1].o, sp[2].o, temp1, temp2);
	ARRAY_ACCESS(jint, sp[0].o, temp0) = temp5;
	}
label_22:;
	{
	LINE_NUMBER(528);
	if ((frame[4].i) >= (frame[3].i)) goto label_23;
	}
	{
	LINE_NUMBER(529);
	sp[0].o = frame[0].o;
	sp[1].o = frame[1].o;
	jint temp0 = frame[4].i;
	jint temp1 = frame[4].i;
	clinit_java_math_BigInteger(ctx);
	sp[2].o = (jobject)SF_java_math_BigInteger_digitsPerInt;
	jint temp2 = temp1 + ((jint)ARRAY_ACCESS(jint, sp[2].o, (10)));
	frame[4].i = temp2;
	jint temp5 = (jint)M_java_math_BigInteger_parseInt_Array1_char_int_int_R_int(ctx, sp[0].o, sp[1].o, temp0, temp2);
	frame[9].i = temp5;
	LINE_NUMBER(530);
	sp[0].o = frame[7].o;
	clinit_java_math_BigInteger(ctx);
	sp[1].o = (jobject)SF_java_math_BigInteger_intRadix;
	SM_java_math_BigInteger_destructiveMulAdd_Array1_int_int_int(ctx, sp[0].o, ((jint)ARRAY_ACCESS(jint, sp[1].o, (10))), (frame[9].i));
	LINE_NUMBER(531);
	goto label_22;
	}
label_23:;
	{
	LINE_NUMBER(532);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)SM_java_math_BigInteger_trustedStripLeadingZeroInts_Array1_int_R_Array1_int(ctx, (frame[7].o));
	((java_math_BigInteger *) NULL_CHECK(sp[0].o))->F_mag = (jref) sp[1].o;
	LINE_NUMBER(533);
	sp[0].o = (jobject)((java_math_BigInteger *) NULL_CHECK((frame[0].o)))->F_mag;
	if ((((jarray) nullCheck(ctx, sp[0].o))->length) < (jint(67108864))) goto label_28;
	}
	{
	LINE_NUMBER(534);
	M_java_math_BigInteger_checkRange(ctx, (frame[0].o));
	}
label_28:;
	LINE_NUMBER(536);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jint M_java_math_BigInteger_parseInt_Array1_char_int_int_R_int(jcontext ctx, jobject self, jobject param0, jint param1, jint param2) {
	NULL_CHECK(self);
	jtype frame[12];
	auto stack = &frame[7];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/math/BigInteger:parseInt", 12 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	frame[3].i = param2;
	{
	LINE_NUMBER(542);
	sp[0].o = frame[1].o;
	jint temp0 = frame[2].i;
	INST_IINC(2, 1);
	jint temp1 = (jint)SM_java_lang_Character_digit_char_int_R_int(ctx, ((jint)ARRAY_ACCESS(jchar, sp[0].o, temp0)), (10));
	frame[4].i = temp1;
	LINE_NUMBER(543);
	if ((frame[4].i) != (jint(-1))) goto label_2;
	}
	{
	LINE_NUMBER(544);
	clinit_java_lang_NumberFormatException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_NumberFormatException);
	clinit_java_lang_String(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_lang_String);
	init_java_lang_String_Array1_char(ctx, sp[1].o, (frame[1].o));
	init_java_lang_NumberFormatException_java_lang_String(ctx, sp[0].o, sp[1].o);
	throwException(ctx, sp[0].o);	}
label_2:;
	{
	LINE_NUMBER(546);
	frame[5].i = (frame[2].i);
	}
label_4:;
	{
	if ((frame[5].i) >= (frame[3].i)) goto label_5;
	}
	{
	LINE_NUMBER(547);
	jint temp0 = (jint)SM_java_lang_Character_digit_char_int_R_int(ctx, ((jint)ARRAY_ACCESS(jchar, (frame[1].o), (frame[5].i))), (10));
	frame[6].i = temp0;
	LINE_NUMBER(548);
	if ((frame[6].i) != (jint(-1))) goto label_8;
	}
	{
	LINE_NUMBER(549);
	clinit_java_lang_NumberFormatException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_NumberFormatException);
	clinit_java_lang_String(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_lang_String);
	init_java_lang_String_Array1_char(ctx, sp[1].o, (frame[1].o));
	init_java_lang_NumberFormatException_java_lang_String(ctx, sp[0].o, sp[1].o);
	throwException(ctx, sp[0].o);	}
label_8:;
	{
	LINE_NUMBER(550);
	frame[4].i = (((10) * (frame[4].i)) + (frame[6].i));
	LINE_NUMBER(546);
	INST_IINC(5, 1);
	goto label_4;
	}
label_5:;
	{
	LINE_NUMBER(553);
	popStackFrame(ctx);
	return (frame[4].i);
	}

	popStackFrame(ctx);
}

void SM_java_math_BigInteger_destructiveMulAdd_Array1_int_int_int(jcontext ctx, jobject param0, jint param1, jint param2) {
	jtype frame[21];
	auto stack = &frame[15];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/math/BigInteger:destructiveMulAdd", 21 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_math_BigInteger(ctx);
	frame[0].o = param0;
	frame[1].i = param1;
	frame[2].i = param2;
	{
	LINE_NUMBER(567);
	frame[3].l = ((jlong((frame[1].i))) & (jlong(4294967295ll)));
	LINE_NUMBER(568);
	frame[5].l = ((jlong((frame[2].i))) & (jlong(4294967295ll)));
	LINE_NUMBER(569);
	frame[7].i = (((jarray) nullCheck(ctx, (frame[0].o)))->length);
	LINE_NUMBER(571);
	frame[8].l = (jlong(0));
	LINE_NUMBER(572);
	frame[10].l = (jlong(0));
	LINE_NUMBER(573);
	frame[12].i = ((frame[7].i) - (jint(1)));
	}
label_6:;
	INST_ILOAD(12);
	if ((--sp)->i < 0) goto label_7;
	{
	LINE_NUMBER(574);
	frame[8].l = (((frame[3].l) * ((jlong(((jint)ARRAY_ACCESS(jint, (frame[0].o), (frame[12].i))))) & (jlong(4294967295ll)))) + (frame[10].l));
	LINE_NUMBER(575);
	ARRAY_ACCESS(jint, (frame[0].o), (frame[12].i)) = (jint((frame[8].l)));
	LINE_NUMBER(576);
	frame[10].l = (bit_cast<jlong>(bit_cast<uint64_t>((frame[8].l)) >> (32)));
	LINE_NUMBER(573);
	INST_IINC(12, -1);
	goto label_6;
	}
label_7:;
	{
	LINE_NUMBER(580);
	frame[12].l = (((jlong(((jint)ARRAY_ACCESS(jint, (frame[0].o), ((frame[7].i) - (jint(1))))))) & (jlong(4294967295ll))) + (frame[5].l));
	LINE_NUMBER(581);
	ARRAY_ACCESS(jint, (frame[0].o), ((frame[7].i) - (jint(1)))) = (jint((frame[12].l)));
	LINE_NUMBER(582);
	frame[10].l = (bit_cast<jlong>(bit_cast<uint64_t>((frame[12].l)) >> (32)));
	LINE_NUMBER(583);
	frame[14].i = ((frame[7].i) - (jint(2)));
	}
label_15:;
	INST_ILOAD(14);
	if ((--sp)->i < 0) goto label_16;
	{
	LINE_NUMBER(584);
	frame[12].l = (((jlong(((jint)ARRAY_ACCESS(jint, (frame[0].o), (frame[14].i))))) & (jlong(4294967295ll))) + (frame[10].l));
	LINE_NUMBER(585);
	ARRAY_ACCESS(jint, (frame[0].o), (frame[14].i)) = (jint((frame[12].l)));
	LINE_NUMBER(586);
	frame[10].l = (bit_cast<jlong>(bit_cast<uint64_t>((frame[12].l)) >> (32)));
	LINE_NUMBER(583);
	INST_IINC(14, -1);
	goto label_15;
	}
label_16:;
	LINE_NUMBER(588);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void init_java_math_BigInteger_java_lang_String(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/math/BigInteger:<init>", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_math_BigInteger(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(604);
	init_java_math_BigInteger_java_lang_String_int(ctx, (frame[0].o), (frame[1].o), (10));
	LINE_NUMBER(605);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_java_math_BigInteger_int_java_util_Random(jcontext ctx, jobject self, jint param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/math/BigInteger:<init>", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_math_BigInteger(ctx);
	frame[0].o = self;
	frame[1].i = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(621);
	sp[0].o = frame[0].o;
	jint temp0 = jint(1);
	sp[1].o = (jobject)SM_java_math_BigInteger_randomBits_int_java_util_Random_R_Array1_byte(ctx, (frame[1].i), (frame[2].o));
	init_java_math_BigInteger_int_Array1_byte(ctx, sp[0].o, temp0, sp[1].o);
	LINE_NUMBER(622);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject SM_java_math_BigInteger_randomBits_int_java_util_Random_R_Array1_byte(jcontext ctx, jint param0, jobject param1) {
	jtype frame[11];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/math/BigInteger:randomBits", 11 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_math_BigInteger(ctx);
	frame[0].i = param0;
	frame[1].o = param1;
	{
	LINE_NUMBER(625);
	if ((frame[0].i) >= 0) goto label_1;
	}
	{
	LINE_NUMBER(626);
	clinit_java_lang_IllegalArgumentException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IllegalArgumentException);
	init_java_lang_IllegalArgumentException_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"numBits must be non-negative"_j))));
	throwException(ctx, sp[0].o);	}
label_1:;
	{
	LINE_NUMBER(627);
	frame[2].i = (jint((((jlong((frame[0].i))) + (jlong(7ll))) / (jlong(8ll)))));
	LINE_NUMBER(628);
	sp[0].o = (jobject) createArray(ctx, &class_byte, (frame[2].i));
	frame[3].o = sp[0].o;
	LINE_NUMBER(631);
	if ((frame[2].i) <= 0) goto label_5;
	}
	{
	LINE_NUMBER(632);
	((func_java_util_Random_nextBytes_Array1_byte) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_util_Random_nextBytes_Array1_byte])(ctx, (frame[1].o), (frame[3].o));
	LINE_NUMBER(633);
	frame[4].i = (((8) * (frame[2].i)) - (frame[0].i));
	LINE_NUMBER(634);
	sp[0].o = frame[3].o;
	jint temp0 = jint(0);
	ARRAY_ACCESS(jbyte, sp[0].o, temp0) = (jbyte((((jint)ARRAY_ACCESS(jbyte, sp[0].o, temp0)) & (((jint(1)) << ((8) - (frame[4].i))) - (jint(1))))));
	}
label_5:;
	{
	LINE_NUMBER(636);
	popStackFrame(ctx);
	return (frame[3].o);
	}

	popStackFrame(ctx);
}

void init_java_math_BigInteger_int_int_java_util_Random(jcontext ctx, jobject self, jint param0, jint param1, jobject param2) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/math/BigInteger:<init>", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_math_BigInteger(ctx);
	frame[0].o = self;
	frame[1].i = param0;
	frame[2].i = param1;
	frame[3].o = param2;
	{
	LINE_NUMBER(658);
	init_java_lang_Number(ctx, (frame[0].o));
	LINE_NUMBER(661);
	if ((frame[1].i) >= (jint(2))) goto label_2;
	}
	{
	LINE_NUMBER(662);
	clinit_java_lang_ArithmeticException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_ArithmeticException);
	init_java_lang_ArithmeticException_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"bitLength < 2"_j))));
	throwException(ctx, sp[0].o);	}
label_2:;
	{
	LINE_NUMBER(663);
	if ((frame[1].i) >= (95)) goto label_4;
	}
	{
	LINE_NUMBER(664);
	sp[0].o = (jobject)SM_java_math_BigInteger_smallPrime_int_int_java_util_Random_R_java_math_BigInteger(ctx, (frame[1].i), (frame[2].i), (frame[3].o));
	sp += 1;
	goto label_6;
	}
label_4:;
	{
	LINE_NUMBER(665);
	sp[0].o = (jobject)SM_java_math_BigInteger_largePrime_int_int_java_util_Random_R_java_math_BigInteger(ctx, (frame[1].i), (frame[2].i), (frame[3].o));
	sp += 1;
	}
label_6:;
	{
	sp -= 1;
	frame[4].o = sp[0].o;
	LINE_NUMBER(666);
	((java_math_BigInteger *) NULL_CHECK((frame[0].o)))->F_signum = (jint(1));
	LINE_NUMBER(667);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((java_math_BigInteger *) NULL_CHECK((frame[4].o)))->F_mag;
	((java_math_BigInteger *) NULL_CHECK(sp[0].o))->F_mag = (jref) sp[1].o;
	LINE_NUMBER(668);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject SM_java_math_BigInteger_probablePrime_int_java_util_Random_R_java_math_BigInteger(jcontext ctx, jint param0, jobject param1) {
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/math/BigInteger:probablePrime", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_math_BigInteger(ctx);
	frame[0].i = param0;
	frame[1].o = param1;
	{
	LINE_NUMBER(692);
	if ((frame[0].i) >= (jint(2))) goto label_1;
	}
	{
	LINE_NUMBER(693);
	clinit_java_lang_ArithmeticException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_ArithmeticException);
	init_java_lang_ArithmeticException_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"bitLength < 2"_j))));
	throwException(ctx, sp[0].o);	}
label_1:;
	{
	LINE_NUMBER(695);
	if ((frame[0].i) >= (95)) goto label_3;
	}
	{
	LINE_NUMBER(696);
	sp[0].o = (jobject)SM_java_math_BigInteger_smallPrime_int_int_java_util_Random_R_java_math_BigInteger(ctx, (frame[0].i), (100), (frame[1].o));
	sp += 1;
	goto label_5;
	}
label_3:;
	{
	LINE_NUMBER(697);
	sp[0].o = (jobject)SM_java_math_BigInteger_largePrime_int_int_java_util_Random_R_java_math_BigInteger(ctx, (frame[0].i), (100), (frame[1].o));
	sp += 1;
	}
label_5:;
	LINE_NUMBER(695);
	popStackFrame(ctx);
	INST_ARETURN();

	popStackFrame(ctx);
}

jobject SM_java_math_BigInteger_smallPrime_int_int_java_util_Random_R_java_math_BigInteger(jcontext ctx, jint param0, jint param1, jobject param2) {
	jtype frame[14];
	auto stack = &frame[10];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/math/BigInteger:smallPrime", 14 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_math_BigInteger(ctx);
	frame[0].i = param0;
	frame[1].i = param1;
	frame[2].o = param2;
	{
	LINE_NUMBER(708);
	frame[3].i = (bit_cast<jint>(bit_cast<uint32_t>(((frame[0].i) + (31))) >> (jint(5))));
	LINE_NUMBER(709);
	sp[0].o = (jobject) createArray(ctx, &class_int, (frame[3].i));
	frame[4].o = sp[0].o;
	LINE_NUMBER(710);
	frame[5].i = ((jint(1)) << (((frame[0].i) + (31)) & (31)));
	LINE_NUMBER(711);
	frame[6].i = (((frame[5].i) << (jint(1))) - (jint(1)));
	}
label_4:;
	{
	LINE_NUMBER(715);
	frame[7].i = (jint(0));
	}
label_5:;
	{
	if ((frame[7].i) >= (frame[3].i)) goto label_6;
	}
	{
	LINE_NUMBER(716);
	sp[0].o = frame[4].o;
	jint temp0 = frame[7].i;
	jint temp1 = (jint)((func_java_util_Random_nextInt_R_int) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_java_util_Random_nextInt_R_int])(ctx, (frame[2].o));
	ARRAY_ACCESS(jint, sp[0].o, temp0) = temp1;
	LINE_NUMBER(715);
	INST_IINC(7, 1);
	goto label_5;
	}
label_6:;
	{
	LINE_NUMBER(717);
	ARRAY_ACCESS(jint, (frame[4].o), (jint(0))) = ((((jint)ARRAY_ACCESS(jint, (frame[4].o), (jint(0)))) & (frame[6].i)) | (frame[5].i));
	LINE_NUMBER(718);
	if ((frame[0].i) <= (jint(2))) goto label_10;
	}
	{
	LINE_NUMBER(719);
	sp[0].o = frame[4].o;
	jint temp0 = (frame[3].i) - (jint(1));
	ARRAY_ACCESS(jint, sp[0].o, temp0) = (((jint)ARRAY_ACCESS(jint, sp[0].o, temp0)) | (jint(1)));
	}
label_10:;
	{
	LINE_NUMBER(721);
	clinit_java_math_BigInteger(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_math_BigInteger);
	init_java_math_BigInteger_Array1_int_int(ctx, sp[0].o, (frame[4].o), (jint(1)));
	frame[7].o = sp[0].o;
	LINE_NUMBER(724);
	if ((frame[0].i) <= (6)) goto label_13;
	}
	{
	LINE_NUMBER(725);
	sp[0].o = frame[7].o;
	clinit_java_math_BigInteger(ctx);
	sp[1].o = (jobject)SF_java_math_BigInteger_SMALL_PRIME_PRODUCT;
	sp[0].o = (jobject)((func_java_math_BigInteger_remainder_java_math_BigInteger_R_java_math_BigInteger) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_math_BigInteger_remainder_java_math_BigInteger_R_java_math_BigInteger])(ctx, sp[0].o, sp[1].o);
	jlong temp0 = (jlong)((func_java_math_BigInteger_longValue_R_long) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_math_BigInteger_longValue_R_long])(ctx, sp[0].o);
	frame[8].l = temp0;
	LINE_NUMBER(726);
	if ((longCompare(((frame[8].l) % (jlong(3ll))), (jlong(0)))) == 0) goto label_4;
	}
	{
	if ((longCompare(((frame[8].l) % (jlong(5ll))), (jlong(0)))) == 0) goto label_4;
	}
	{
	if ((longCompare(((frame[8].l) % (jlong(7ll))), (jlong(0)))) == 0) goto label_4;
	}
	{
	if ((longCompare(((frame[8].l) % (jlong(11ll))), (jlong(0)))) == 0) goto label_4;
	}
	{
	if ((longCompare(((frame[8].l) % (jlong(13ll))), (jlong(0)))) == 0) goto label_4;
	}
	{
	if ((longCompare(((frame[8].l) % (jlong(17ll))), (jlong(0)))) == 0) goto label_4;
	}
	{
	if ((longCompare(((frame[8].l) % (jlong(19ll))), (jlong(0)))) == 0) goto label_4;
	}
	{
	if ((longCompare(((frame[8].l) % (jlong(23ll))), (jlong(0)))) == 0) goto label_4;
	}
	{
	if ((longCompare(((frame[8].l) % (jlong(29ll))), (jlong(0)))) == 0) goto label_4;
	}
	{
	if ((longCompare(((frame[8].l) % (jlong(31ll))), (jlong(0)))) == 0) goto label_4;
	}
	{
	if ((longCompare(((frame[8].l) % (jlong(37ll))), (jlong(0)))) == 0) goto label_4;
	}
	{
	if ((longCompare(((frame[8].l) % (jlong(41ll))), (jlong(0)))) != 0) goto label_13;
	}
	LINE_NUMBER(729);
	goto label_4;
label_13:;
	{
	LINE_NUMBER(733);
	if ((frame[0].i) >= (jint(4))) goto label_17;
	}
	{
	LINE_NUMBER(734);
	popStackFrame(ctx);
	return (frame[7].o);
	}
label_17:;
	{
	LINE_NUMBER(737);
	jint temp0 = (jint)((func_java_math_BigInteger_primeToCertainty_int_java_util_Random_R_boolean) ((void **) nullCheck(ctx, (frame[7].o))->vtable)[VTABLE_java_math_BigInteger_primeToCertainty_int_java_util_Random_R_boolean])(ctx, (frame[7].o), (frame[1].i), (frame[2].o));
	if (temp0 == 0) goto label_19;
	}
	{
	LINE_NUMBER(738);
	popStackFrame(ctx);
	return (frame[7].o);
	}
label_19:;
	LINE_NUMBER(739);
	goto label_4;

	popStackFrame(ctx);
}

jobject SM_java_math_BigInteger_largePrime_int_int_java_util_Random_R_java_math_BigInteger(jcontext ctx, jint param0, jint param1, jobject param2) {
	jtype frame[11];
	auto stack = &frame[7];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/math/BigInteger:largePrime", 11 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_math_BigInteger(ctx);
	frame[0].i = param0;
	frame[1].i = param1;
	frame[2].o = param2;
	{
	LINE_NUMBER(753);
	clinit_java_math_BigInteger(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_math_BigInteger);
	init_java_math_BigInteger_int_java_util_Random(ctx, sp[0].o, (frame[0].i), (frame[2].o));
	sp[0].o = (jobject)((func_java_math_BigInteger_setBit_int_R_java_math_BigInteger) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_math_BigInteger_setBit_int_R_java_math_BigInteger])(ctx, sp[0].o, ((frame[0].i) - (jint(1))));
	frame[3].o = sp[0].o;
	LINE_NUMBER(754);
	sp[0].o = (jobject)((java_math_BigInteger *) NULL_CHECK((frame[3].o)))->F_mag;
	sp[1].o = (jobject)((java_math_BigInteger *) NULL_CHECK((frame[3].o)))->F_mag;
	jint temp0 = (((jarray) nullCheck(ctx, sp[1].o))->length) - (jint(1));
	ARRAY_ACCESS(jint, sp[0].o, temp0) = (((jint)ARRAY_ACCESS(jint, sp[0].o, temp0)) & (-2));
	LINE_NUMBER(757);
	jint temp3 = (jint)SM_java_math_BigInteger_getPrimeSearchLen_int_R_int(ctx, (frame[0].i));
	frame[4].i = temp3;
	LINE_NUMBER(758);
	clinit_java_math_BitSieve(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_math_BitSieve);
	init_java_math_BitSieve_java_math_BigInteger_int(ctx, sp[0].o, (frame[3].o), (frame[4].i));
	frame[5].o = sp[0].o;
	LINE_NUMBER(759);
	sp[0].o = (jobject)((func_java_math_BitSieve_retrieve_java_math_BigInteger_int_java_util_Random_R_java_math_BigInteger) ((void **) nullCheck(ctx, (frame[5].o))->vtable)[VTABLE_java_math_BitSieve_retrieve_java_math_BigInteger_int_java_util_Random_R_java_math_BigInteger])(ctx, (frame[5].o), (frame[3].o), (frame[1].i), (frame[2].o));
	frame[6].o = sp[0].o;
	}
label_5:;
	{
	LINE_NUMBER(761);
	if ((frame[6].o) == nullptr) goto label_6;
	}
	{
	jint temp0 = (jint)((func_java_math_BigInteger_bitLength_R_int) ((void **) nullCheck(ctx, (frame[6].o))->vtable)[VTABLE_java_math_BigInteger_bitLength_R_int])(ctx, (frame[6].o));
	if (temp0 == (frame[0].i)) goto label_7;
	}
label_6:;
	{
	LINE_NUMBER(762);
	sp[0].o = frame[3].o;
	sp[1].o = (jobject)SM_java_math_BigInteger_valueOf_long_R_java_math_BigInteger(ctx, (jlong(((jint(2)) * (frame[4].i)))));
	sp[0].o = (jobject)((func_java_math_BigInteger_add_java_math_BigInteger_R_java_math_BigInteger) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_math_BigInteger_add_java_math_BigInteger_R_java_math_BigInteger])(ctx, sp[0].o, sp[1].o);
	frame[3].o = sp[0].o;
	LINE_NUMBER(763);
	jint temp0 = (jint)((func_java_math_BigInteger_bitLength_R_int) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_java_math_BigInteger_bitLength_R_int])(ctx, (frame[3].o));
	if (temp0 == (frame[0].i)) goto label_9;
	}
	{
	LINE_NUMBER(764);
	clinit_java_math_BigInteger(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_math_BigInteger);
	init_java_math_BigInteger_int_java_util_Random(ctx, sp[0].o, (frame[0].i), (frame[2].o));
	sp[0].o = (jobject)((func_java_math_BigInteger_setBit_int_R_java_math_BigInteger) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_math_BigInteger_setBit_int_R_java_math_BigInteger])(ctx, sp[0].o, ((frame[0].i) - (jint(1))));
	frame[3].o = sp[0].o;
	}
label_9:;
	{
	LINE_NUMBER(765);
	sp[0].o = (jobject)((java_math_BigInteger *) NULL_CHECK((frame[3].o)))->F_mag;
	sp[1].o = (jobject)((java_math_BigInteger *) NULL_CHECK((frame[3].o)))->F_mag;
	jint temp0 = (((jarray) nullCheck(ctx, sp[1].o))->length) - (jint(1));
	ARRAY_ACCESS(jint, sp[0].o, temp0) = (((jint)ARRAY_ACCESS(jint, sp[0].o, temp0)) & (-2));
	LINE_NUMBER(766);
	clinit_java_math_BitSieve(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_math_BitSieve);
	init_java_math_BitSieve_java_math_BigInteger_int(ctx, sp[0].o, (frame[3].o), (frame[4].i));
	frame[5].o = sp[0].o;
	LINE_NUMBER(767);
	sp[0].o = (jobject)((func_java_math_BitSieve_retrieve_java_math_BigInteger_int_java_util_Random_R_java_math_BigInteger) ((void **) nullCheck(ctx, (frame[5].o))->vtable)[VTABLE_java_math_BitSieve_retrieve_java_math_BigInteger_int_java_util_Random_R_java_math_BigInteger])(ctx, (frame[5].o), (frame[3].o), (frame[1].i), (frame[2].o));
	frame[6].o = sp[0].o;
	goto label_5;
	}
label_7:;
	{
	LINE_NUMBER(769);
	popStackFrame(ctx);
	return (frame[6].o);
	}

	popStackFrame(ctx);
}

jobject M_java_math_BigInteger_nextProbablePrime_R_java_math_BigInteger(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/math/BigInteger:nextProbablePrime", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(785);
	if (((jint)((java_math_BigInteger *) NULL_CHECK((frame[0].o)))->F_signum) >= 0) goto label_1;
	}
	{
	LINE_NUMBER(786);
	clinit_java_lang_ArithmeticException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_ArithmeticException);
	clinit_java_lang_StringBuilder(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[1].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"start < 0: "_j))));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_Object_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_Object_R_java_lang_StringBuilder])(ctx, sp[1].o, (frame[0].o));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[1].o);
	init_java_lang_ArithmeticException_java_lang_String(ctx, sp[0].o, sp[1].o);
	throwException(ctx, sp[0].o);	}
label_1:;
	{
	LINE_NUMBER(789);
	if (((jint)((java_math_BigInteger *) NULL_CHECK((frame[0].o)))->F_signum) == 0) goto label_3;
	}
	{
	sp[0].o = frame[0].o;
	clinit_java_math_BigInteger(ctx);
	sp[1].o = (jobject)SF_java_math_BigInteger_ONE;
	jint temp0 = (jint)((func_java_math_BigInteger_equals_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_math_BigInteger_equals_java_lang_Object_R_boolean])(ctx, sp[0].o, sp[1].o);
	if (temp0 == 0) goto label_4;
	}
label_3:;
	{
	LINE_NUMBER(790);
	clinit_java_math_BigInteger(ctx);
	sp[0].o = (jobject)SF_java_math_BigInteger_TWO;
	popStackFrame(ctx);
	return sp[0].o;
	}
label_4:;
	{
	LINE_NUMBER(792);
	sp[0].o = frame[0].o;
	clinit_java_math_BigInteger(ctx);
	sp[1].o = (jobject)SF_java_math_BigInteger_ONE;
	sp[0].o = (jobject)((func_java_math_BigInteger_add_java_math_BigInteger_R_java_math_BigInteger) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_math_BigInteger_add_java_math_BigInteger_R_java_math_BigInteger])(ctx, sp[0].o, sp[1].o);
	frame[1].o = sp[0].o;
	LINE_NUMBER(795);
	jint temp0 = (jint)((func_java_math_BigInteger_bitLength_R_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_math_BigInteger_bitLength_R_int])(ctx, (frame[1].o));
	if (temp0 >= (95)) goto label_6;
	}
	{
	LINE_NUMBER(798);
	jint temp0 = (jint)((func_java_math_BigInteger_testBit_int_R_boolean) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_math_BigInteger_testBit_int_R_boolean])(ctx, (frame[1].o), (jint(0)));
	if (temp0 != 0) goto label_8;
	}
	{
	LINE_NUMBER(799);
	sp[0].o = frame[1].o;
	clinit_java_math_BigInteger(ctx);
	sp[1].o = (jobject)SF_java_math_BigInteger_ONE;
	sp[0].o = (jobject)((func_java_math_BigInteger_add_java_math_BigInteger_R_java_math_BigInteger) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_math_BigInteger_add_java_math_BigInteger_R_java_math_BigInteger])(ctx, sp[0].o, sp[1].o);
	frame[1].o = sp[0].o;
	}
label_8:;
	{
	LINE_NUMBER(803);
	jint temp0 = (jint)((func_java_math_BigInteger_bitLength_R_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_math_BigInteger_bitLength_R_int])(ctx, (frame[1].o));
	if (temp0 <= (6)) goto label_10;
	}
	{
	LINE_NUMBER(804);
	sp[0].o = frame[1].o;
	clinit_java_math_BigInteger(ctx);
	sp[1].o = (jobject)SF_java_math_BigInteger_SMALL_PRIME_PRODUCT;
	sp[0].o = (jobject)((func_java_math_BigInteger_remainder_java_math_BigInteger_R_java_math_BigInteger) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_math_BigInteger_remainder_java_math_BigInteger_R_java_math_BigInteger])(ctx, sp[0].o, sp[1].o);
	jlong temp0 = (jlong)((func_java_math_BigInteger_longValue_R_long) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_math_BigInteger_longValue_R_long])(ctx, sp[0].o);
	frame[2].l = temp0;
	LINE_NUMBER(805);
	if ((longCompare(((frame[2].l) % (jlong(3ll))), (jlong(0)))) == 0) goto label_13;
	}
	{
	if ((longCompare(((frame[2].l) % (jlong(5ll))), (jlong(0)))) == 0) goto label_13;
	}
	{
	if ((longCompare(((frame[2].l) % (jlong(7ll))), (jlong(0)))) == 0) goto label_13;
	}
	{
	if ((longCompare(((frame[2].l) % (jlong(11ll))), (jlong(0)))) == 0) goto label_13;
	}
	{
	if ((longCompare(((frame[2].l) % (jlong(13ll))), (jlong(0)))) == 0) goto label_13;
	}
	{
	if ((longCompare(((frame[2].l) % (jlong(17ll))), (jlong(0)))) == 0) goto label_13;
	}
	{
	if ((longCompare(((frame[2].l) % (jlong(19ll))), (jlong(0)))) == 0) goto label_13;
	}
	{
	if ((longCompare(((frame[2].l) % (jlong(23ll))), (jlong(0)))) == 0) goto label_13;
	}
	{
	if ((longCompare(((frame[2].l) % (jlong(29ll))), (jlong(0)))) == 0) goto label_13;
	}
	{
	if ((longCompare(((frame[2].l) % (jlong(31ll))), (jlong(0)))) == 0) goto label_13;
	}
	{
	if ((longCompare(((frame[2].l) % (jlong(37ll))), (jlong(0)))) == 0) goto label_13;
	}
	{
	if ((longCompare(((frame[2].l) % (jlong(41ll))), (jlong(0)))) != 0) goto label_10;
	}
label_13:;
	{
	LINE_NUMBER(808);
	sp[0].o = frame[1].o;
	clinit_java_math_BigInteger(ctx);
	sp[1].o = (jobject)SF_java_math_BigInteger_TWO;
	sp[0].o = (jobject)((func_java_math_BigInteger_add_java_math_BigInteger_R_java_math_BigInteger) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_math_BigInteger_add_java_math_BigInteger_R_java_math_BigInteger])(ctx, sp[0].o, sp[1].o);
	frame[1].o = sp[0].o;
	LINE_NUMBER(809);
	goto label_8;
	}
label_10:;
	{
	LINE_NUMBER(814);
	jint temp0 = (jint)((func_java_math_BigInteger_bitLength_R_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_math_BigInteger_bitLength_R_int])(ctx, (frame[1].o));
	if (temp0 >= (jint(4))) goto label_15;
	}
	{
	LINE_NUMBER(815);
	popStackFrame(ctx);
	return (frame[1].o);
	}
label_15:;
	{
	LINE_NUMBER(818);
	jint temp0 = (jint)((func_java_math_BigInteger_primeToCertainty_int_java_util_Random_R_boolean) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_math_BigInteger_primeToCertainty_int_java_util_Random_R_boolean])(ctx, (frame[1].o), (100), (jobject(nullptr)));
	if (temp0 == 0) goto label_17;
	}
	{
	LINE_NUMBER(819);
	popStackFrame(ctx);
	return (frame[1].o);
	}
label_17:;
	{
	LINE_NUMBER(821);
	sp[0].o = frame[1].o;
	clinit_java_math_BigInteger(ctx);
	sp[1].o = (jobject)SF_java_math_BigInteger_TWO;
	sp[0].o = (jobject)((func_java_math_BigInteger_add_java_math_BigInteger_R_java_math_BigInteger) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_math_BigInteger_add_java_math_BigInteger_R_java_math_BigInteger])(ctx, sp[0].o, sp[1].o);
	frame[1].o = sp[0].o;
	goto label_8;
	}
label_6:;
	{
	LINE_NUMBER(826);
	jint temp0 = (jint)((func_java_math_BigInteger_testBit_int_R_boolean) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_math_BigInteger_testBit_int_R_boolean])(ctx, (frame[1].o), (jint(0)));
	if (temp0 == 0) goto label_19;
	}
	{
	LINE_NUMBER(827);
	sp[0].o = frame[1].o;
	clinit_java_math_BigInteger(ctx);
	sp[1].o = (jobject)SF_java_math_BigInteger_ONE;
	sp[0].o = (jobject)((func_java_math_BigInteger_subtract_java_math_BigInteger_R_java_math_BigInteger) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_math_BigInteger_subtract_java_math_BigInteger_R_java_math_BigInteger])(ctx, sp[0].o, sp[1].o);
	frame[1].o = sp[0].o;
	}
label_19:;
	{
	LINE_NUMBER(830);
	jint temp0 = (jint)((func_java_math_BigInteger_bitLength_R_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_math_BigInteger_bitLength_R_int])(ctx, (frame[1].o));
	jint temp1 = (jint)SM_java_math_BigInteger_getPrimeSearchLen_int_R_int(ctx, temp0);
	frame[2].i = temp1;
	}
label_21:;
	{
	LINE_NUMBER(833);
	clinit_java_math_BitSieve(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_math_BitSieve);
	init_java_math_BitSieve_java_math_BigInteger_int(ctx, sp[0].o, (frame[1].o), (frame[2].i));
	frame[3].o = sp[0].o;
	LINE_NUMBER(834);
	sp[0].o = (jobject)((func_java_math_BitSieve_retrieve_java_math_BigInteger_int_java_util_Random_R_java_math_BigInteger) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_java_math_BitSieve_retrieve_java_math_BigInteger_int_java_util_Random_R_java_math_BigInteger])(ctx, (frame[3].o), (frame[1].o), (100), (jobject(nullptr)));
	frame[4].o = sp[0].o;
	LINE_NUMBER(836);
	if ((frame[4].o) == nullptr) goto label_24;
	}
	{
	LINE_NUMBER(837);
	popStackFrame(ctx);
	return (frame[4].o);
	}
label_24:;
	{
	LINE_NUMBER(838);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)SM_java_math_BigInteger_valueOf_long_R_java_math_BigInteger(ctx, (jlong(((jint(2)) * (frame[2].i)))));
	sp[0].o = (jobject)((func_java_math_BigInteger_add_java_math_BigInteger_R_java_math_BigInteger) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_math_BigInteger_add_java_math_BigInteger_R_java_math_BigInteger])(ctx, sp[0].o, sp[1].o);
	frame[1].o = sp[0].o;
	LINE_NUMBER(839);
	goto label_21;
	}

	popStackFrame(ctx);
}

jint SM_java_math_BigInteger_getPrimeSearchLen_int_R_int(jcontext ctx, jint param0) {
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/math/BigInteger:getPrimeSearchLen", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_math_BigInteger(ctx);
	frame[0].i = param0;
	{
	LINE_NUMBER(843);
	if ((frame[0].i) <= (jint(500000001))) goto label_1;
	}
	{
	LINE_NUMBER(844);
	clinit_java_lang_ArithmeticException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_ArithmeticException);
	init_java_lang_ArithmeticException_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"Prime search implementation restriction on bitLength"_j))));
	throwException(ctx, sp[0].o);	}
label_1:;
	{
	LINE_NUMBER(846);
	popStackFrame(ctx);
	return (((frame[0].i) / (20)) * (64));
	}

	popStackFrame(ctx);
}

jbool M_java_math_BigInteger_primeToCertainty_int_java_util_Random_R_boolean(jcontext ctx, jobject self, jint param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/math/BigInteger:primeToCertainty", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(864);
	frame[3].i = (jint(0));
	LINE_NUMBER(865);
	jint temp0 = (jint)SM_java_lang_Math_min_int_int_R_int(ctx, (frame[1].i), (jint(2147483646)));
	frame[4].i = ((temp0 + (jint(1))) / (jint(2)));
	LINE_NUMBER(870);
	jint temp1 = (jint)((func_java_math_BigInteger_bitLength_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_math_BigInteger_bitLength_R_int])(ctx, (frame[0].o));
	frame[5].i = temp1;
	LINE_NUMBER(871);
	if ((frame[5].i) >= (100)) goto label_4;
	}
	{
	LINE_NUMBER(872);
	frame[3].i = (50);
	LINE_NUMBER(873);
	if ((frame[4].i) >= (frame[3].i)) goto label_7;
	}
	INST_ILOAD(4);
	goto label_8;
label_7:;
	INST_ILOAD(3);
label_8:;
	{
	sp -= 1;
	frame[3].i = sp[0].i;
	LINE_NUMBER(874);
	jint temp0 = (jint)M_java_math_BigInteger_passesMillerRabin_int_java_util_Random_R_boolean(ctx, (frame[0].o), (frame[3].i), (frame[2].o));
	popStackFrame(ctx);
	return temp0;
	}
label_4:;
	{
	LINE_NUMBER(877);
	if ((frame[5].i) >= (256)) goto label_10;
	}
	{
	LINE_NUMBER(878);
	frame[3].i = (27);
	goto label_12;
	}
label_10:;
	{
	LINE_NUMBER(879);
	if ((frame[5].i) >= (512)) goto label_13;
	}
	{
	LINE_NUMBER(880);
	frame[3].i = (15);
	goto label_12;
	}
label_13:;
	{
	LINE_NUMBER(881);
	if ((frame[5].i) >= (768)) goto label_15;
	}
	{
	LINE_NUMBER(882);
	frame[3].i = (8);
	goto label_12;
	}
label_15:;
	{
	LINE_NUMBER(883);
	if ((frame[5].i) >= (1024)) goto label_17;
	}
	{
	LINE_NUMBER(884);
	frame[3].i = (jint(4));
	goto label_12;
	}
label_17:;
	{
	LINE_NUMBER(886);
	frame[3].i = (jint(2));
	}
label_12:;
	{
	LINE_NUMBER(888);
	if ((frame[4].i) >= (frame[3].i)) goto label_19;
	}
	INST_ILOAD(4);
	goto label_20;
label_19:;
	INST_ILOAD(3);
label_20:;
	{
	sp -= 1;
	frame[3].i = sp[0].i;
	LINE_NUMBER(890);
	jint temp0 = (jint)M_java_math_BigInteger_passesMillerRabin_int_java_util_Random_R_boolean(ctx, (frame[0].o), (frame[3].i), (frame[2].o));
	if (temp0 == 0) goto label_22;
	}
	{
	jint temp0 = (jint)M_java_math_BigInteger_passesLucasLehmer_R_boolean(ctx, (frame[0].o));
	if (temp0 == 0) goto label_22;
	}
	INST_ICONST(1);
	goto label_23;
label_22:;
	INST_ICONST(0);
label_23:;
	popStackFrame(ctx);
	INST_IRETURN();

	popStackFrame(ctx);
}

jbool M_java_math_BigInteger_passesLucasLehmer_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/math/BigInteger:passesLucasLehmer", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(900);
	sp[0].o = frame[0].o;
	clinit_java_math_BigInteger(ctx);
	sp[1].o = (jobject)SF_java_math_BigInteger_ONE;
	sp[0].o = (jobject)((func_java_math_BigInteger_add_java_math_BigInteger_R_java_math_BigInteger) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_math_BigInteger_add_java_math_BigInteger_R_java_math_BigInteger])(ctx, sp[0].o, sp[1].o);
	frame[1].o = sp[0].o;
	LINE_NUMBER(903);
	frame[2].i = (jint(5));
	}
label_2:;
	{
	LINE_NUMBER(904);
	jint temp0 = (jint)SM_java_math_BigInteger_jacobiSymbol_int_java_math_BigInteger_R_int(ctx, (frame[2].i), (frame[0].o));
	if (temp0 == (jint(-1))) goto label_3;
	}
	{
	LINE_NUMBER(906);
	if ((frame[2].i) >= 0) goto label_5;
	}
	{
	jint temp0 = (jint)SM_java_lang_Math_abs_int_R_int(ctx, (frame[2].i));
	jint temp1 = temp0 + (jint(2));
	sp[0].i = temp1;
	sp += 1;
	goto label_6;
	}
label_5:;
	{
	jint temp0 = -((frame[2].i) + (jint(2)));
	sp[0].i = temp0;
	sp += 1;
	}
label_6:;
	INST_ISTORE(2);
	goto label_2;
label_3:;
	{
	LINE_NUMBER(910);
	sp[0].o = (jobject)SM_java_math_BigInteger_lucasLehmerSequence_int_java_math_BigInteger_java_math_BigInteger_R_java_math_BigInteger(ctx, (frame[2].i), (frame[1].o), (frame[0].o));
	frame[3].o = sp[0].o;
	LINE_NUMBER(913);
	sp[0].o = (jobject)((func_java_math_BigInteger_mod_java_math_BigInteger_R_java_math_BigInteger) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_java_math_BigInteger_mod_java_math_BigInteger_R_java_math_BigInteger])(ctx, (frame[3].o), (frame[0].o));
	clinit_java_math_BigInteger(ctx);
	sp[1].o = (jobject)SF_java_math_BigInteger_ZERO;
	jint temp0 = (jint)((func_java_math_BigInteger_equals_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_math_BigInteger_equals_java_lang_Object_R_boolean])(ctx, sp[0].o, sp[1].o);
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jint SM_java_math_BigInteger_jacobiSymbol_int_java_math_BigInteger_R_int(jcontext ctx, jint param0, jobject param1) {
	jtype frame[8];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/math/BigInteger:jacobiSymbol", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_math_BigInteger(ctx);
	frame[0].i = param0;
	frame[1].o = param1;
	{
	LINE_NUMBER(921);
	if ((frame[0].i) != 0) goto label_1;
	}
	{
	LINE_NUMBER(922);
	popStackFrame(ctx);
	return (jint(0));
	}
label_1:;
	{
	LINE_NUMBER(925);
	frame[2].i = (jint(1));
	LINE_NUMBER(926);
	sp[0].o = (jobject)((java_math_BigInteger *) NULL_CHECK((frame[1].o)))->F_mag;
	sp[1].o = (jobject)((java_math_BigInteger *) NULL_CHECK((frame[1].o)))->F_mag;
	frame[3].i = ((jint)ARRAY_ACCESS(jint, sp[0].o, ((((jarray) nullCheck(ctx, sp[1].o))->length) - (jint(1)))));
	LINE_NUMBER(929);
	if ((frame[0].i) >= 0) goto label_5;
	}
	{
	LINE_NUMBER(930);
	frame[0].i = (-(frame[0].i));
	LINE_NUMBER(931);
	frame[4].i = ((frame[3].i) & (7));
	LINE_NUMBER(932);
	if ((frame[4].i) == (jint(3))) goto label_9;
	}
	{
	if ((frame[4].i) != (7)) goto label_5;
	}
label_9:;
	{
	LINE_NUMBER(933);
	frame[2].i = (-(frame[2].i));
	}
label_5:;
	{
	LINE_NUMBER(937);
	if (((frame[0].i) & (jint(3))) != 0) goto label_10;
	}
	{
	LINE_NUMBER(938);
	frame[0].i = ((frame[0].i) >> (jint(2)));
	goto label_5;
	}
label_10:;
	{
	LINE_NUMBER(939);
	if (((frame[0].i) & (jint(1))) != 0) goto label_12;
	}
	{
	LINE_NUMBER(940);
	frame[0].i = ((frame[0].i) >> (jint(1)));
	LINE_NUMBER(941);
	if ((((frame[3].i) ^ ((frame[3].i) >> (jint(1)))) & (jint(2))) == 0) goto label_12;
	}
	{
	LINE_NUMBER(942);
	frame[2].i = (-(frame[2].i));
	}
label_12:;
	{
	LINE_NUMBER(944);
	if ((frame[0].i) != (jint(1))) goto label_16;
	}
	{
	LINE_NUMBER(945);
	popStackFrame(ctx);
	return (frame[2].i);
	}
label_16:;
	{
	LINE_NUMBER(947);
	if ((((frame[0].i) & (frame[3].i)) & (jint(2))) == 0) goto label_18;
	}
	{
	LINE_NUMBER(948);
	frame[2].i = (-(frame[2].i));
	}
label_18:;
	{
	LINE_NUMBER(950);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)SM_java_math_BigInteger_valueOf_long_R_java_math_BigInteger(ctx, (jlong((frame[0].i))));
	sp[0].o = (jobject)((func_java_math_BigInteger_mod_java_math_BigInteger_R_java_math_BigInteger) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_math_BigInteger_mod_java_math_BigInteger_R_java_math_BigInteger])(ctx, sp[0].o, sp[1].o);
	jint temp0 = (jint)((func_java_math_BigInteger_intValue_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_math_BigInteger_intValue_R_int])(ctx, sp[0].o);
	frame[3].i = temp0;
	}
label_20:;
	{
	LINE_NUMBER(953);
	if ((frame[3].i) == 0) goto label_21;
	}
label_22:;
	{
	LINE_NUMBER(954);
	if (((frame[3].i) & (jint(3))) != 0) goto label_23;
	}
	{
	LINE_NUMBER(955);
	frame[3].i = ((frame[3].i) >> (jint(2)));
	goto label_22;
	}
label_23:;
	{
	LINE_NUMBER(956);
	if (((frame[3].i) & (jint(1))) != 0) goto label_25;
	}
	{
	LINE_NUMBER(957);
	frame[3].i = ((frame[3].i) >> (jint(1)));
	LINE_NUMBER(958);
	if ((((frame[0].i) ^ ((frame[0].i) >> (jint(1)))) & (jint(2))) == 0) goto label_25;
	}
	{
	LINE_NUMBER(959);
	frame[2].i = (-(frame[2].i));
	}
label_25:;
	{
	LINE_NUMBER(961);
	if ((frame[3].i) != (jint(1))) goto label_29;
	}
	{
	LINE_NUMBER(962);
	popStackFrame(ctx);
	return (frame[2].i);
	}
label_29:;
	{
	LINE_NUMBER(964);
	if ((clinit_java_math_BigInteger(ctx), (jint)SF_java_math_BigInteger_$assertionsDisabled) != 0) goto label_31;
	}
	{
	if ((frame[3].i) < (frame[0].i)) goto label_31;
	}
	{
	clinit_java_lang_AssertionError(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_AssertionError);
	init_java_lang_AssertionError(ctx, sp[0].o);
	throwException(ctx, sp[0].o);	}
label_31:;
	{
	LINE_NUMBER(965);
	frame[4].i = (frame[3].i);
	frame[3].i = (frame[0].i);
	frame[0].i = (frame[4].i);
	LINE_NUMBER(966);
	if ((((frame[3].i) & (frame[0].i)) & (jint(2))) == 0) goto label_34;
	}
	{
	LINE_NUMBER(967);
	frame[2].i = (-(frame[2].i));
	}
label_34:;
	{
	LINE_NUMBER(969);
	frame[3].i = ((frame[3].i) % (frame[0].i));
	LINE_NUMBER(970);
	goto label_20;
	}
label_21:;
	{
	LINE_NUMBER(971);
	popStackFrame(ctx);
	return (jint(0));
	}

	popStackFrame(ctx);
}

jobject SM_java_math_BigInteger_lucasLehmerSequence_int_java_math_BigInteger_java_math_BigInteger_R_java_math_BigInteger(jcontext ctx, jint param0, jobject param1, jobject param2) {
	jtype frame[12];
	auto stack = &frame[9];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/math/BigInteger:lucasLehmerSequence", 12 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_math_BigInteger(ctx);
	frame[0].i = param0;
	frame[1].o = param1;
	frame[2].o = param2;
	{
	LINE_NUMBER(975);
	sp[0].o = (jobject)SM_java_math_BigInteger_valueOf_long_R_java_math_BigInteger(ctx, (jlong((frame[0].i))));
	frame[3].o = sp[0].o;
	LINE_NUMBER(976);
	clinit_java_math_BigInteger(ctx);
	sp[0].o = (jobject)SF_java_math_BigInteger_ONE;
	frame[4].o = sp[0].o;
	LINE_NUMBER(977);
	clinit_java_math_BigInteger(ctx);
	sp[0].o = (jobject)SF_java_math_BigInteger_ONE;
	frame[6].o = sp[0].o;
	LINE_NUMBER(979);
	jint temp0 = (jint)((func_java_math_BigInteger_bitLength_R_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_math_BigInteger_bitLength_R_int])(ctx, (frame[1].o));
	frame[8].i = (temp0 - (jint(2)));
	}
label_4:;
	INST_ILOAD(8);
	if ((--sp)->i < 0) goto label_5;
	{
	LINE_NUMBER(980);
	sp[0].o = (jobject)((func_java_math_BigInteger_multiply_java_math_BigInteger_R_java_math_BigInteger) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_java_math_BigInteger_multiply_java_math_BigInteger_R_java_math_BigInteger])(ctx, (frame[4].o), (frame[6].o));
	sp[0].o = (jobject)((func_java_math_BigInteger_mod_java_math_BigInteger_R_java_math_BigInteger) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_math_BigInteger_mod_java_math_BigInteger_R_java_math_BigInteger])(ctx, sp[0].o, (frame[2].o));
	frame[5].o = sp[0].o;
	LINE_NUMBER(982);
	sp[0].o = (jobject)M_java_math_BigInteger_square_R_java_math_BigInteger(ctx, (frame[6].o));
	sp[1].o = frame[3].o;
	sp[2].o = (jobject)M_java_math_BigInteger_square_R_java_math_BigInteger(ctx, (frame[4].o));
	sp[1].o = (jobject)((func_java_math_BigInteger_multiply_java_math_BigInteger_R_java_math_BigInteger) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_math_BigInteger_multiply_java_math_BigInteger_R_java_math_BigInteger])(ctx, sp[1].o, sp[2].o);
	sp[0].o = (jobject)((func_java_math_BigInteger_add_java_math_BigInteger_R_java_math_BigInteger) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_math_BigInteger_add_java_math_BigInteger_R_java_math_BigInteger])(ctx, sp[0].o, sp[1].o);
	sp[0].o = (jobject)((func_java_math_BigInteger_mod_java_math_BigInteger_R_java_math_BigInteger) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_math_BigInteger_mod_java_math_BigInteger_R_java_math_BigInteger])(ctx, sp[0].o, (frame[2].o));
	frame[7].o = sp[0].o;
	LINE_NUMBER(983);
	jint temp0 = (jint)((func_java_math_BigInteger_testBit_int_R_boolean) ((void **) nullCheck(ctx, (frame[7].o))->vtable)[VTABLE_java_math_BigInteger_testBit_int_R_boolean])(ctx, (frame[7].o), (jint(0)));
	if (temp0 == 0) goto label_9;
	}
	{
	LINE_NUMBER(984);
	sp[0].o = (jobject)((func_java_math_BigInteger_subtract_java_math_BigInteger_R_java_math_BigInteger) ((void **) nullCheck(ctx, (frame[7].o))->vtable)[VTABLE_java_math_BigInteger_subtract_java_math_BigInteger_R_java_math_BigInteger])(ctx, (frame[7].o), (frame[2].o));
	frame[7].o = sp[0].o;
	}
label_9:;
	{
	LINE_NUMBER(986);
	sp[0].o = (jobject)((func_java_math_BigInteger_shiftRight_int_R_java_math_BigInteger) ((void **) nullCheck(ctx, (frame[7].o))->vtable)[VTABLE_java_math_BigInteger_shiftRight_int_R_java_math_BigInteger])(ctx, (frame[7].o), (jint(1)));
	frame[7].o = sp[0].o;
	LINE_NUMBER(988);
	frame[4].o = (frame[5].o);
	frame[6].o = (frame[7].o);
	LINE_NUMBER(989);
	jint temp0 = (jint)((func_java_math_BigInteger_testBit_int_R_boolean) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_math_BigInteger_testBit_int_R_boolean])(ctx, (frame[1].o), (frame[8].i));
	if (temp0 == 0) goto label_13;
	}
	{
	LINE_NUMBER(990);
	sp[0].o = (jobject)((func_java_math_BigInteger_add_java_math_BigInteger_R_java_math_BigInteger) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_java_math_BigInteger_add_java_math_BigInteger_R_java_math_BigInteger])(ctx, (frame[4].o), (frame[6].o));
	sp[0].o = (jobject)((func_java_math_BigInteger_mod_java_math_BigInteger_R_java_math_BigInteger) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_math_BigInteger_mod_java_math_BigInteger_R_java_math_BigInteger])(ctx, sp[0].o, (frame[2].o));
	frame[5].o = sp[0].o;
	LINE_NUMBER(991);
	jint temp0 = (jint)((func_java_math_BigInteger_testBit_int_R_boolean) ((void **) nullCheck(ctx, (frame[5].o))->vtable)[VTABLE_java_math_BigInteger_testBit_int_R_boolean])(ctx, (frame[5].o), (jint(0)));
	if (temp0 == 0) goto label_16;
	}
	{
	LINE_NUMBER(992);
	sp[0].o = (jobject)((func_java_math_BigInteger_subtract_java_math_BigInteger_R_java_math_BigInteger) ((void **) nullCheck(ctx, (frame[5].o))->vtable)[VTABLE_java_math_BigInteger_subtract_java_math_BigInteger_R_java_math_BigInteger])(ctx, (frame[5].o), (frame[2].o));
	frame[5].o = sp[0].o;
	}
label_16:;
	{
	LINE_NUMBER(994);
	sp[0].o = (jobject)((func_java_math_BigInteger_shiftRight_int_R_java_math_BigInteger) ((void **) nullCheck(ctx, (frame[5].o))->vtable)[VTABLE_java_math_BigInteger_shiftRight_int_R_java_math_BigInteger])(ctx, (frame[5].o), (jint(1)));
	frame[5].o = sp[0].o;
	LINE_NUMBER(995);
	sp[0].o = frame[6].o;
	sp[1].o = (jobject)((func_java_math_BigInteger_multiply_java_math_BigInteger_R_java_math_BigInteger) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_java_math_BigInteger_multiply_java_math_BigInteger_R_java_math_BigInteger])(ctx, (frame[3].o), (frame[4].o));
	sp[0].o = (jobject)((func_java_math_BigInteger_add_java_math_BigInteger_R_java_math_BigInteger) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_math_BigInteger_add_java_math_BigInteger_R_java_math_BigInteger])(ctx, sp[0].o, sp[1].o);
	sp[0].o = (jobject)((func_java_math_BigInteger_mod_java_math_BigInteger_R_java_math_BigInteger) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_math_BigInteger_mod_java_math_BigInteger_R_java_math_BigInteger])(ctx, sp[0].o, (frame[2].o));
	frame[7].o = sp[0].o;
	LINE_NUMBER(996);
	jint temp0 = (jint)((func_java_math_BigInteger_testBit_int_R_boolean) ((void **) nullCheck(ctx, (frame[7].o))->vtable)[VTABLE_java_math_BigInteger_testBit_int_R_boolean])(ctx, (frame[7].o), (jint(0)));
	if (temp0 == 0) goto label_20;
	}
	{
	LINE_NUMBER(997);
	sp[0].o = (jobject)((func_java_math_BigInteger_subtract_java_math_BigInteger_R_java_math_BigInteger) ((void **) nullCheck(ctx, (frame[7].o))->vtable)[VTABLE_java_math_BigInteger_subtract_java_math_BigInteger_R_java_math_BigInteger])(ctx, (frame[7].o), (frame[2].o));
	frame[7].o = sp[0].o;
	}
label_20:;
	{
	LINE_NUMBER(998);
	sp[0].o = (jobject)((func_java_math_BigInteger_shiftRight_int_R_java_math_BigInteger) ((void **) nullCheck(ctx, (frame[7].o))->vtable)[VTABLE_java_math_BigInteger_shiftRight_int_R_java_math_BigInteger])(ctx, (frame[7].o), (jint(1)));
	frame[7].o = sp[0].o;
	LINE_NUMBER(1000);
	frame[4].o = (frame[5].o);
	frame[6].o = (frame[7].o);
	}
label_13:;
	{
	LINE_NUMBER(979);
	INST_IINC(8, -1);
	goto label_4;
	}
label_5:;
	{
	LINE_NUMBER(1003);
	popStackFrame(ctx);
	return (frame[4].o);
	}

	popStackFrame(ctx);
}

jbool M_java_math_BigInteger_passesMillerRabin_int_java_util_Random_R_boolean(jcontext ctx, jobject self, jint param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[14];
	auto stack = &frame[10];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/math/BigInteger:passesMillerRabin", 14 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(1017);
	sp[0].o = frame[0].o;
	clinit_java_math_BigInteger(ctx);
	sp[1].o = (jobject)SF_java_math_BigInteger_ONE;
	sp[0].o = (jobject)((func_java_math_BigInteger_subtract_java_math_BigInteger_R_java_math_BigInteger) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_math_BigInteger_subtract_java_math_BigInteger_R_java_math_BigInteger])(ctx, sp[0].o, sp[1].o);
	frame[3].o = sp[0].o;
	LINE_NUMBER(1018);
	frame[4].o = (frame[3].o);
	LINE_NUMBER(1019);
	jint temp0 = (jint)((func_java_math_BigInteger_getLowestSetBit_R_int) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_java_math_BigInteger_getLowestSetBit_R_int])(ctx, (frame[4].o));
	frame[5].i = temp0;
	LINE_NUMBER(1020);
	sp[0].o = (jobject)((func_java_math_BigInteger_shiftRight_int_R_java_math_BigInteger) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_java_math_BigInteger_shiftRight_int_R_java_math_BigInteger])(ctx, (frame[4].o), (frame[5].i));
	frame[4].o = sp[0].o;
	LINE_NUMBER(1023);
	if ((frame[2].o) != nullptr) goto label_5;
	}
	{
	LINE_NUMBER(1024);
	sp[0].o = (jobject)SM_java_util_concurrent_ThreadLocalRandom_current_R_java_util_concurrent_ThreadLocalRandom(ctx);
	frame[2].o = sp[0].o;
	}
label_5:;
	{
	LINE_NUMBER(1026);
	frame[6].i = (jint(0));
	}
label_7:;
	{
	if ((frame[6].i) >= (frame[1].i)) goto label_8;
	}
label_9:;
	{
	LINE_NUMBER(1030);
	clinit_java_math_BigInteger(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_math_BigInteger);
	jint temp0 = (jint)((func_java_math_BigInteger_bitLength_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_math_BigInteger_bitLength_R_int])(ctx, (frame[0].o));
	init_java_math_BigInteger_int_java_util_Random(ctx, sp[0].o, temp0, (frame[2].o));
	frame[7].o = sp[0].o;
	LINE_NUMBER(1031);
	sp[0].o = frame[7].o;
	clinit_java_math_BigInteger(ctx);
	sp[1].o = (jobject)SF_java_math_BigInteger_ONE;
	jint temp1 = (jint)((func_java_math_BigInteger_compareTo_java_math_BigInteger_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_math_BigInteger_compareTo_java_math_BigInteger_R_int])(ctx, sp[0].o, sp[1].o);
	if (temp1 <= 0) goto label_9;
	}
	{
	jint temp0 = (jint)((func_java_math_BigInteger_compareTo_java_math_BigInteger_R_int) ((void **) nullCheck(ctx, (frame[7].o))->vtable)[VTABLE_java_math_BigInteger_compareTo_java_math_BigInteger_R_int])(ctx, (frame[7].o), (frame[0].o));
	if (temp0 >= 0) goto label_9;
	}
	{
	LINE_NUMBER(1033);
	frame[8].i = (jint(0));
	LINE_NUMBER(1034);
	sp[0].o = (jobject)((func_java_math_BigInteger_modPow_java_math_BigInteger_java_math_BigInteger_R_java_math_BigInteger) ((void **) nullCheck(ctx, (frame[7].o))->vtable)[VTABLE_java_math_BigInteger_modPow_java_math_BigInteger_java_math_BigInteger_R_java_math_BigInteger])(ctx, (frame[7].o), (frame[4].o), (frame[0].o));
	frame[9].o = sp[0].o;
	}
label_13:;
	{
	LINE_NUMBER(1035);
	if ((frame[8].i) != 0) goto label_14;
	}
	{
	sp[0].o = frame[9].o;
	clinit_java_math_BigInteger(ctx);
	sp[1].o = (jobject)SF_java_math_BigInteger_ONE;
	jint temp0 = (jint)((func_java_math_BigInteger_equals_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_math_BigInteger_equals_java_lang_Object_R_boolean])(ctx, sp[0].o, sp[1].o);
	if (temp0 != 0) goto label_15;
	}
label_14:;
	{
	jint temp0 = (jint)((func_java_math_BigInteger_equals_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, (frame[9].o))->vtable)[VTABLE_java_math_BigInteger_equals_java_lang_Object_R_boolean])(ctx, (frame[9].o), (frame[3].o));
	if (temp0 != 0) goto label_15;
	}
	{
	LINE_NUMBER(1036);
	if ((frame[8].i) <= 0) goto label_17;
	}
	{
	sp[0].o = frame[9].o;
	clinit_java_math_BigInteger(ctx);
	sp[1].o = (jobject)SF_java_math_BigInteger_ONE;
	jint temp0 = (jint)((func_java_math_BigInteger_equals_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_math_BigInteger_equals_java_lang_Object_R_boolean])(ctx, sp[0].o, sp[1].o);
	if (temp0 != 0) goto label_18;
	}
label_17:;
	{
	INST_IINC(8, 1);
	if ((frame[8].i) != (frame[5].i)) goto label_19;
	}
label_18:;
	{
	LINE_NUMBER(1037);
	popStackFrame(ctx);
	return (jint(0));
	}
label_19:;
	{
	LINE_NUMBER(1038);
	sp[0].o = frame[9].o;
	clinit_java_math_BigInteger(ctx);
	sp[1].o = (jobject)SF_java_math_BigInteger_TWO;
	sp[0].o = (jobject)((func_java_math_BigInteger_modPow_java_math_BigInteger_java_math_BigInteger_R_java_math_BigInteger) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_math_BigInteger_modPow_java_math_BigInteger_java_math_BigInteger_R_java_math_BigInteger])(ctx, sp[0].o, sp[1].o, (frame[0].o));
	frame[9].o = sp[0].o;
	goto label_13;
	}
label_15:;
	{
	LINE_NUMBER(1026);
	INST_IINC(6, 1);
	goto label_7;
	}
label_8:;
	{
	LINE_NUMBER(1041);
	popStackFrame(ctx);
	return (jint(1));
	}

	popStackFrame(ctx);
}

void init_java_math_BigInteger_Array1_int_int(jcontext ctx, jobject self, jobject param0, jint param1) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/math/BigInteger:<init>", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_math_BigInteger(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(1049);
	init_java_lang_Number(ctx, (frame[0].o));
	LINE_NUMBER(1050);
	sp[0].o = frame[0].o;
	sp += 1;
	if ((((jarray) nullCheck(ctx, (frame[1].o)))->length) != 0) goto label_2;
	}
	INST_ICONST(0);
	goto label_3;
label_2:;
	INST_ILOAD(2);
label_3:;
	{
	sp -= 2;
	((java_math_BigInteger *) NULL_CHECK(sp[0].o))->F_signum = sp[1].i;
	LINE_NUMBER(1051);
	((java_math_BigInteger *) NULL_CHECK((frame[0].o)))->F_mag = (jref) (frame[1].o);
	LINE_NUMBER(1052);
	sp[0].o = (jobject)((java_math_BigInteger *) NULL_CHECK((frame[0].o)))->F_mag;
	if ((((jarray) nullCheck(ctx, sp[0].o))->length) < (jint(67108864))) goto label_6;
	}
	{
	LINE_NUMBER(1053);
	M_java_math_BigInteger_checkRange(ctx, (frame[0].o));
	}
label_6:;
	LINE_NUMBER(1055);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void init_java_math_BigInteger_Array1_byte_int(jcontext ctx, jobject self, jobject param0, jint param1) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/math/BigInteger:<init>", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_math_BigInteger(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(1061);
	init_java_lang_Number(ctx, (frame[0].o));
	LINE_NUMBER(1062);
	sp[0].o = frame[0].o;
	sp += 1;
	if ((((jarray) nullCheck(ctx, (frame[1].o)))->length) != 0) goto label_2;
	}
	INST_ICONST(0);
	goto label_3;
label_2:;
	INST_ILOAD(2);
label_3:;
	{
	sp -= 2;
	((java_math_BigInteger *) NULL_CHECK(sp[0].o))->F_signum = sp[1].i;
	LINE_NUMBER(1063);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)SM_java_math_BigInteger_stripLeadingZeroBytes_Array1_byte_R_Array1_int(ctx, (frame[1].o));
	((java_math_BigInteger *) NULL_CHECK(sp[0].o))->F_mag = (jref) sp[1].o;
	LINE_NUMBER(1064);
	sp[0].o = (jobject)((java_math_BigInteger *) NULL_CHECK((frame[0].o)))->F_mag;
	if ((((jarray) nullCheck(ctx, sp[0].o))->length) < (jint(67108864))) goto label_6;
	}
	{
	LINE_NUMBER(1065);
	M_java_math_BigInteger_checkRange(ctx, (frame[0].o));
	}
label_6:;
	LINE_NUMBER(1067);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_java_math_BigInteger_checkRange(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/math/BigInteger:checkRange", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(1076);
	sp[0].o = (jobject)((java_math_BigInteger *) NULL_CHECK((frame[0].o)))->F_mag;
	if ((((jarray) nullCheck(ctx, sp[0].o))->length) > (jint(67108864))) goto label_1;
	}
	{
	sp[0].o = (jobject)((java_math_BigInteger *) NULL_CHECK((frame[0].o)))->F_mag;
	if ((((jarray) nullCheck(ctx, sp[0].o))->length) != (jint(67108864))) goto label_2;
	}
	{
	sp[0].o = (jobject)((java_math_BigInteger *) NULL_CHECK((frame[0].o)))->F_mag;
	if (((jint)ARRAY_ACCESS(jint, sp[0].o, (jint(0)))) >= 0) goto label_2;
	}
label_1:;
	LINE_NUMBER(1077);
	SM_java_math_BigInteger_reportOverflow(ctx);
label_2:;
	LINE_NUMBER(1079);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void SM_java_math_BigInteger_reportOverflow(jcontext ctx) {
	jtype frame[3];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/math/BigInteger:reportOverflow", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_math_BigInteger(ctx);
	{
	LINE_NUMBER(1082);
	clinit_java_lang_ArithmeticException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_ArithmeticException);
	init_java_lang_ArithmeticException_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"BigInteger would overflow supported range"_j))));
	throwException(ctx, sp[0].o);	}

	popStackFrame(ctx);
}

jobject SM_java_math_BigInteger_valueOf_long_R_java_math_BigInteger(jcontext ctx, jlong param0) {
	jtype frame[6];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/math/BigInteger:valueOf", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_math_BigInteger(ctx);
	frame[0].l = param0;
	{
	LINE_NUMBER(1098);
	if ((longCompare((frame[0].l), (jlong(0)))) != 0) goto label_1;
	}
	{
	LINE_NUMBER(1099);
	clinit_java_math_BigInteger(ctx);
	sp[0].o = (jobject)SF_java_math_BigInteger_ZERO;
	popStackFrame(ctx);
	return sp[0].o;
	}
label_1:;
	{
	LINE_NUMBER(1100);
	if ((longCompare((frame[0].l), (jlong(0)))) <= 0) goto label_3;
	}
	{
	if ((longCompare((frame[0].l), (jlong(16ll)))) > 0) goto label_3;
	}
	{
	LINE_NUMBER(1101);
	clinit_java_math_BigInteger(ctx);
	sp[0].o = (jobject)SF_java_math_BigInteger_posConst;
	popStackFrame(ctx);
	return ((jobject)ARRAY_ACCESS(jobject, sp[0].o, (jint((frame[0].l)))));
	}
label_3:;
	{
	LINE_NUMBER(1102);
	if ((longCompare((frame[0].l), (jlong(0)))) >= 0) goto label_5;
	}
	{
	if ((longCompare((frame[0].l), (jlong(-16ll)))) < 0) goto label_5;
	}
	{
	LINE_NUMBER(1103);
	clinit_java_math_BigInteger(ctx);
	sp[0].o = (jobject)SF_java_math_BigInteger_negConst;
	popStackFrame(ctx);
	return ((jobject)ARRAY_ACCESS(jobject, sp[0].o, (jint((-(frame[0].l))))));
	}
label_5:;
	{
	LINE_NUMBER(1105);
	clinit_java_math_BigInteger(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_math_BigInteger);
	init_java_math_BigInteger_long(ctx, sp[0].o, (frame[0].l));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void init_java_math_BigInteger_long(jcontext ctx, jobject self, jlong param0) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/math/BigInteger:<init>", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_math_BigInteger(ctx);
	frame[0].o = self;
	frame[1].l = param0;
	{
	LINE_NUMBER(1111);
	init_java_lang_Number(ctx, (frame[0].o));
	LINE_NUMBER(1112);
	if ((longCompare((frame[1].l), (jlong(0)))) >= 0) goto label_2;
	}
	{
	LINE_NUMBER(1113);
	frame[1].l = (-(frame[1].l));
	LINE_NUMBER(1114);
	((java_math_BigInteger *) NULL_CHECK((frame[0].o)))->F_signum = (jint(-1));
	goto label_5;
	}
label_2:;
	{
	LINE_NUMBER(1116);
	((java_math_BigInteger *) NULL_CHECK((frame[0].o)))->F_signum = (jint(1));
	}
label_5:;
	{
	LINE_NUMBER(1119);
	frame[3].i = (jint((bit_cast<jlong>(bit_cast<uint64_t>((frame[1].l)) >> (32)))));
	LINE_NUMBER(1120);
	if ((frame[3].i) != 0) goto label_7;
	}
	{
	LINE_NUMBER(1121);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject) createArray(ctx, &class_int, (jint(1)));
	((java_math_BigInteger *) NULL_CHECK(sp[0].o))->F_mag = (jref) sp[1].o;
	LINE_NUMBER(1122);
	sp[0].o = (jobject)((java_math_BigInteger *) NULL_CHECK((frame[0].o)))->F_mag;
	ARRAY_ACCESS(jint, sp[0].o, (jint(0))) = (jint((frame[1].l)));
	goto label_10;
	}
label_7:;
	{
	LINE_NUMBER(1124);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject) createArray(ctx, &class_int, (jint(2)));
	((java_math_BigInteger *) NULL_CHECK(sp[0].o))->F_mag = (jref) sp[1].o;
	LINE_NUMBER(1125);
	sp[0].o = (jobject)((java_math_BigInteger *) NULL_CHECK((frame[0].o)))->F_mag;
	ARRAY_ACCESS(jint, sp[0].o, (jint(0))) = (frame[3].i);
	LINE_NUMBER(1126);
	sp[0].o = (jobject)((java_math_BigInteger *) NULL_CHECK((frame[0].o)))->F_mag;
	ARRAY_ACCESS(jint, sp[0].o, (jint(1))) = (jint((frame[1].l)));
	}
label_10:;
	LINE_NUMBER(1128);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jobject SM_java_math_BigInteger_valueOf_Array1_int_R_java_math_BigInteger(jcontext ctx, jobject param0) {
	jtype frame[5];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/math/BigInteger:valueOf", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_math_BigInteger(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(1136);
	if (((jint)ARRAY_ACCESS(jint, (frame[0].o), (jint(0)))) <= 0) goto label_1;
	}
	{
	clinit_java_math_BigInteger(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_math_BigInteger);
	init_java_math_BigInteger_Array1_int_int(ctx, sp[0].o, (frame[0].o), (jint(1)));
	sp += 1;
	goto label_2;
	}
label_1:;
	{
	clinit_java_math_BigInteger(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_math_BigInteger);
	init_java_math_BigInteger_Array1_int(ctx, sp[0].o, (frame[0].o));
	sp += 1;
	}
label_2:;
	popStackFrame(ctx);
	INST_ARETURN();

	popStackFrame(ctx);
}

jobject M_java_math_BigInteger_add_java_math_BigInteger_R_java_math_BigInteger(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/math/BigInteger:add", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(1231);
	if (((jint)((java_math_BigInteger *) NULL_CHECK((frame[1].o)))->F_signum) != 0) goto label_1;
	}
	{
	LINE_NUMBER(1232);
	popStackFrame(ctx);
	return (frame[0].o);
	}
label_1:;
	{
	LINE_NUMBER(1233);
	if (((jint)((java_math_BigInteger *) NULL_CHECK((frame[0].o)))->F_signum) != 0) goto label_3;
	}
	{
	LINE_NUMBER(1234);
	popStackFrame(ctx);
	return (frame[1].o);
	}
label_3:;
	{
	LINE_NUMBER(1235);
	if (((jint)((java_math_BigInteger *) NULL_CHECK((frame[1].o)))->F_signum) != ((jint)((java_math_BigInteger *) NULL_CHECK((frame[0].o)))->F_signum)) goto label_5;
	}
	{
	LINE_NUMBER(1236);
	clinit_java_math_BigInteger(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_math_BigInteger);
	sp[1].o = (jobject)((java_math_BigInteger *) NULL_CHECK((frame[0].o)))->F_mag;
	sp[2].o = (jobject)((java_math_BigInteger *) NULL_CHECK((frame[1].o)))->F_mag;
	sp[1].o = (jobject)SM_java_math_BigInteger_add_Array1_int_Array1_int_R_Array1_int(ctx, sp[1].o, sp[2].o);
	init_java_math_BigInteger_Array1_int_int(ctx, sp[0].o, sp[1].o, ((jint)((java_math_BigInteger *) NULL_CHECK((frame[0].o)))->F_signum));
	popStackFrame(ctx);
	return sp[0].o;
	}
label_5:;
	{
	LINE_NUMBER(1238);
	jint temp0 = (jint)((func_java_math_BigInteger_compareMagnitude_java_math_BigInteger_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_math_BigInteger_compareMagnitude_java_math_BigInteger_R_int])(ctx, (frame[0].o), (frame[1].o));
	frame[2].i = temp0;
	LINE_NUMBER(1239);
	if ((frame[2].i) != 0) goto label_8;
	}
	{
	LINE_NUMBER(1240);
	clinit_java_math_BigInteger(ctx);
	sp[0].o = (jobject)SF_java_math_BigInteger_ZERO;
	popStackFrame(ctx);
	return sp[0].o;
	}
label_8:;
	{
	LINE_NUMBER(1241);
	if ((frame[2].i) <= 0) goto label_10;
	}
	{
	sp[0].o = (jobject)((java_math_BigInteger *) NULL_CHECK((frame[0].o)))->F_mag;
	sp[1].o = (jobject)((java_math_BigInteger *) NULL_CHECK((frame[1].o)))->F_mag;
	sp[0].o = (jobject)SM_java_math_BigInteger_subtract_Array1_int_Array1_int_R_Array1_int(ctx, sp[0].o, sp[1].o);
	sp += 1;
	goto label_11;
	}
label_10:;
	{
	LINE_NUMBER(1242);
	sp[0].o = (jobject)((java_math_BigInteger *) NULL_CHECK((frame[1].o)))->F_mag;
	sp[1].o = (jobject)((java_math_BigInteger *) NULL_CHECK((frame[0].o)))->F_mag;
	sp[0].o = (jobject)SM_java_math_BigInteger_subtract_Array1_int_Array1_int_R_Array1_int(ctx, sp[0].o, sp[1].o);
	sp += 1;
	}
label_11:;
	{
	sp -= 1;
	frame[3].o = sp[0].o;
	LINE_NUMBER(1243);
	sp[0].o = (jobject)SM_java_math_BigInteger_trustedStripLeadingZeroInts_Array1_int_R_Array1_int(ctx, (frame[3].o));
	frame[3].o = sp[0].o;
	LINE_NUMBER(1245);
	clinit_java_math_BigInteger(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_math_BigInteger);
	sp[1].o = frame[3].o;
	jobject temp0 = sp[1].o;
	sp[1].o = sp[0].o;
	sp[2].o = temp0;
	sp += 3;
	if ((frame[2].i) != ((jint)((java_math_BigInteger *) NULL_CHECK((frame[0].o)))->F_signum)) goto label_14;
	}
	INST_ICONST(1);
	goto label_15;
label_14:;
	INST_ICONST(-1);
label_15:;
	POP_N(3); // Pop method args
	init_java_math_BigInteger_Array1_int_int(ctx, sp[0].o, sp[1].o, sp[2].i);
	popStackFrame(ctx);
	INST_ARETURN();

	popStackFrame(ctx);
}

jobject M_java_math_BigInteger_add_long_R_java_math_BigInteger(jcontext ctx, jobject self, jlong param0) {
	NULL_CHECK(self);
	jtype frame[10];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/math/BigInteger:add", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].l = param0;
	{
	LINE_NUMBER(1253);
	if ((longCompare((frame[1].l), (jlong(0)))) != 0) goto label_1;
	}
	{
	LINE_NUMBER(1254);
	popStackFrame(ctx);
	return (frame[0].o);
	}
label_1:;
	{
	LINE_NUMBER(1255);
	if (((jint)((java_math_BigInteger *) NULL_CHECK((frame[0].o)))->F_signum) != 0) goto label_3;
	}
	{
	LINE_NUMBER(1256);
	sp[0].o = (jobject)SM_java_math_BigInteger_valueOf_long_R_java_math_BigInteger(ctx, (frame[1].l));
	popStackFrame(ctx);
	return sp[0].o;
	}
label_3:;
	{
	LINE_NUMBER(1257);
	jint temp0 = (jint)SM_java_lang_Long_signum_long_R_int(ctx, (frame[1].l));
	if (temp0 != ((jint)((java_math_BigInteger *) NULL_CHECK((frame[0].o)))->F_signum)) goto label_5;
	}
	{
	LINE_NUMBER(1258);
	clinit_java_math_BigInteger(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_math_BigInteger);
	sp[1].o = (jobject)((java_math_BigInteger *) NULL_CHECK((frame[0].o)))->F_mag;
	jlong temp0 = (jlong)SM_java_lang_Math_abs_long_R_long(ctx, (frame[1].l));
	sp[1].o = (jobject)SM_java_math_BigInteger_add_Array1_int_long_R_Array1_int(ctx, sp[1].o, temp0);
	init_java_math_BigInteger_Array1_int_int(ctx, sp[0].o, sp[1].o, ((jint)((java_math_BigInteger *) NULL_CHECK((frame[0].o)))->F_signum));
	popStackFrame(ctx);
	return sp[0].o;
	}
label_5:;
	{
	LINE_NUMBER(1259);
	jint temp0 = (jint)((func_java_math_BigInteger_compareMagnitude_long_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_math_BigInteger_compareMagnitude_long_R_int])(ctx, (frame[0].o), (frame[1].l));
	frame[3].i = temp0;
	LINE_NUMBER(1260);
	if ((frame[3].i) != 0) goto label_8;
	}
	{
	LINE_NUMBER(1261);
	clinit_java_math_BigInteger(ctx);
	sp[0].o = (jobject)SF_java_math_BigInteger_ZERO;
	popStackFrame(ctx);
	return sp[0].o;
	}
label_8:;
	{
	LINE_NUMBER(1262);
	if ((frame[3].i) <= 0) goto label_10;
	}
	{
	sp[0].o = (jobject)((java_math_BigInteger *) NULL_CHECK((frame[0].o)))->F_mag;
	jlong temp0 = (jlong)SM_java_lang_Math_abs_long_R_long(ctx, (frame[1].l));
	sp[0].o = (jobject)SM_java_math_BigInteger_subtract_Array1_int_long_R_Array1_int(ctx, sp[0].o, temp0);
	sp += 1;
	goto label_11;
	}
label_10:;
	{
	jlong temp0 = (jlong)SM_java_lang_Math_abs_long_R_long(ctx, (frame[1].l));
	sp[0].o = (jobject)((java_math_BigInteger *) NULL_CHECK((frame[0].o)))->F_mag;
	sp[0].o = (jobject)SM_java_math_BigInteger_subtract_long_Array1_int_R_Array1_int(ctx, temp0, sp[0].o);
	sp += 1;
	}
label_11:;
	{
	sp -= 1;
	frame[4].o = sp[0].o;
	LINE_NUMBER(1263);
	sp[0].o = (jobject)SM_java_math_BigInteger_trustedStripLeadingZeroInts_Array1_int_R_Array1_int(ctx, (frame[4].o));
	frame[4].o = sp[0].o;
	LINE_NUMBER(1264);
	clinit_java_math_BigInteger(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_math_BigInteger);
	sp[1].o = frame[4].o;
	jobject temp0 = sp[1].o;
	sp[1].o = sp[0].o;
	sp[2].o = temp0;
	sp += 3;
	if ((frame[3].i) != ((jint)((java_math_BigInteger *) NULL_CHECK((frame[0].o)))->F_signum)) goto label_14;
	}
	INST_ICONST(1);
	goto label_15;
label_14:;
	INST_ICONST(-1);
label_15:;
	POP_N(3); // Pop method args
	init_java_math_BigInteger_Array1_int_int(ctx, sp[0].o, sp[1].o, sp[2].i);
	popStackFrame(ctx);
	INST_ARETURN();

	popStackFrame(ctx);
}

jobject SM_java_math_BigInteger_add_Array1_int_long_R_Array1_int(jcontext ctx, jobject param0, jlong param1) {
	jtype frame[17];
	auto stack = &frame[11];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/math/BigInteger:add", 17 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_math_BigInteger(ctx);
	frame[0].o = param0;
	frame[1].l = param1;
	{
	LINE_NUMBER(1275);
	frame[4].l = (jlong(0));
	LINE_NUMBER(1276);
	frame[6].i = (((jarray) nullCheck(ctx, (frame[0].o)))->length);
	LINE_NUMBER(1278);
	frame[8].i = (jint((bit_cast<jlong>(bit_cast<uint64_t>((frame[1].l)) >> (32)))));
	LINE_NUMBER(1279);
	if ((frame[8].i) != 0) goto label_4;
	}
	{
	LINE_NUMBER(1280);
	sp[0].o = (jobject) createArray(ctx, &class_int, (frame[6].i));
	frame[7].o = sp[0].o;
	LINE_NUMBER(1281);
	sp[0].o = frame[0].o;
	INST_IINC(6, -1);
	frame[4].l = (((jlong(((jint)ARRAY_ACCESS(jint, sp[0].o, (frame[6].i))))) & (jlong(4294967295ll))) + (frame[1].l));
	LINE_NUMBER(1282);
	ARRAY_ACCESS(jint, (frame[7].o), (frame[6].i)) = (jint((frame[4].l)));
	goto label_8;
	}
label_4:;
	{
	LINE_NUMBER(1284);
	if ((frame[6].i) != (jint(1))) goto label_9;
	}
	{
	LINE_NUMBER(1285);
	sp[0].o = (jobject) createArray(ctx, &class_int, (jint(2)));
	frame[7].o = sp[0].o;
	LINE_NUMBER(1286);
	frame[4].l = ((frame[1].l) + ((jlong(((jint)ARRAY_ACCESS(jint, (frame[0].o), (jint(0)))))) & (jlong(4294967295ll))));
	LINE_NUMBER(1287);
	ARRAY_ACCESS(jint, (frame[7].o), (jint(1))) = (jint((frame[4].l)));
	LINE_NUMBER(1288);
	ARRAY_ACCESS(jint, (frame[7].o), (jint(0))) = (jint((bit_cast<jlong>(bit_cast<uint64_t>((frame[4].l)) >> (32)))));
	LINE_NUMBER(1289);
	popStackFrame(ctx);
	return (frame[7].o);
	}
label_9:;
	{
	LINE_NUMBER(1291);
	sp[0].o = (jobject) createArray(ctx, &class_int, (frame[6].i));
	frame[7].o = sp[0].o;
	LINE_NUMBER(1292);
	sp[0].o = frame[0].o;
	INST_IINC(6, -1);
	frame[4].l = (((jlong(((jint)ARRAY_ACCESS(jint, sp[0].o, (frame[6].i))))) & (jlong(4294967295ll))) + ((frame[1].l) & (jlong(4294967295ll))));
	LINE_NUMBER(1293);
	ARRAY_ACCESS(jint, (frame[7].o), (frame[6].i)) = (jint((frame[4].l)));
	LINE_NUMBER(1294);
	sp[0].o = frame[0].o;
	INST_IINC(6, -1);
	frame[4].l = ((((jlong(((jint)ARRAY_ACCESS(jint, sp[0].o, (frame[6].i))))) & (jlong(4294967295ll))) + ((jlong((frame[8].i))) & (jlong(4294967295ll)))) + (bit_cast<jlong>(bit_cast<uint64_t>((frame[4].l)) >> (32))));
	LINE_NUMBER(1295);
	ARRAY_ACCESS(jint, (frame[7].o), (frame[6].i)) = (jint((frame[4].l)));
	}
label_8:;
	{
	LINE_NUMBER(1299);
	if ((longCompare((bit_cast<jlong>(bit_cast<uint64_t>((frame[4].l)) >> (32))), (jlong(0)))) == 0) goto label_19;
	}
	INST_ICONST(1);
	goto label_20;
label_19:;
	INST_ICONST(0);
label_20:;
	INST_ISTORE(9);
label_21:;
	{
	LINE_NUMBER(1300);
	if ((frame[6].i) <= 0) goto label_22;
	}
	INST_ILOAD(9);
	if ((--sp)->i == 0) goto label_22;
	{
	LINE_NUMBER(1301);
	sp[0].o = frame[7].o;
	INST_IINC(6, -1);
	jint temp0 = frame[6].i;
	jint temp1 = ((jint)ARRAY_ACCESS(jint, (frame[0].o), (frame[6].i))) + (jint(1));
	ARRAY_ACCESS(jint, sp[0].o, temp0) = temp1;
	if (temp1 != 0) goto label_24;
	}
	INST_ICONST(1);
	goto label_25;
label_24:;
	INST_ICONST(0);
label_25:;
	INST_ISTORE(9);
	goto label_21;
label_22:;
	{
	LINE_NUMBER(1303);
	if ((frame[6].i) <= 0) goto label_26;
	}
	{
	LINE_NUMBER(1304);
	sp[0].o = frame[7].o;
	INST_IINC(6, -1);
	ARRAY_ACCESS(jint, sp[0].o, (frame[6].i)) = ((jint)ARRAY_ACCESS(jint, (frame[0].o), (frame[6].i)));
	goto label_22;
	}
label_26:;
	{
	LINE_NUMBER(1306);
	if ((frame[9].i) == 0) goto label_28;
	}
	{
	LINE_NUMBER(1307);
	sp[0].o = (jobject) createArray(ctx, &class_int, ((((jarray) nullCheck(ctx, (frame[7].o)))->length) + (jint(1))));
	frame[10].o = sp[0].o;
	LINE_NUMBER(1308);
	SM_java_lang_System_arraycopy_java_lang_Object_int_java_lang_Object_int_int(ctx, (frame[7].o), (jint(0)), (frame[10].o), (jint(1)), (((jarray) nullCheck(ctx, (frame[7].o)))->length));
	LINE_NUMBER(1309);
	ARRAY_ACCESS(jint, (frame[10].o), (jint(0))) = (jint(1));
	LINE_NUMBER(1310);
	popStackFrame(ctx);
	return (frame[10].o);
	}
label_28:;
	{
	LINE_NUMBER(1312);
	popStackFrame(ctx);
	return (frame[7].o);
	}

	popStackFrame(ctx);
}

jobject SM_java_math_BigInteger_add_Array1_int_Array1_int_R_Array1_int(jcontext ctx, jobject param0, jobject param1) {
	jtype frame[15];
	auto stack = &frame[9];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/math/BigInteger:add", 15 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_math_BigInteger(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	{
	LINE_NUMBER(1322);
	if ((((jarray) nullCheck(ctx, (frame[0].o)))->length) >= (((jarray) nullCheck(ctx, (frame[1].o)))->length)) goto label_1;
	}
	{
	LINE_NUMBER(1323);
	frame[2].o = (frame[0].o);
	LINE_NUMBER(1324);
	frame[0].o = (frame[1].o);
	LINE_NUMBER(1325);
	frame[1].o = (frame[2].o);
	}
label_1:;
	{
	LINE_NUMBER(1328);
	frame[2].i = (((jarray) nullCheck(ctx, (frame[0].o)))->length);
	LINE_NUMBER(1329);
	frame[3].i = (((jarray) nullCheck(ctx, (frame[1].o)))->length);
	LINE_NUMBER(1330);
	sp[0].o = (jobject) createArray(ctx, &class_int, (frame[2].i));
	frame[4].o = sp[0].o;
	LINE_NUMBER(1331);
	frame[5].l = (jlong(0));
	LINE_NUMBER(1332);
	if ((frame[3].i) != (jint(1))) goto label_9;
	}
	{
	LINE_NUMBER(1333);
	sp[0].o = frame[0].o;
	INST_IINC(2, -1);
	frame[5].l = (((jlong(((jint)ARRAY_ACCESS(jint, sp[0].o, (frame[2].i))))) & (jlong(4294967295ll))) + ((jlong(((jint)ARRAY_ACCESS(jint, (frame[1].o), (jint(0)))))) & (jlong(4294967295ll))));
	LINE_NUMBER(1334);
	ARRAY_ACCESS(jint, (frame[4].o), (frame[2].i)) = (jint((frame[5].l)));
	goto label_12;
	}
label_9:;
	{
	LINE_NUMBER(1337);
	if ((frame[3].i) <= 0) goto label_12;
	}
	{
	LINE_NUMBER(1338);
	sp[0].o = frame[0].o;
	INST_IINC(2, -1);
	jlong temp0 = (jlong(((jint)ARRAY_ACCESS(jint, sp[0].o, (frame[2].i))))) & (jlong(4294967295ll));
	sp[0].o = frame[1].o;
	INST_IINC(3, -1);
	frame[5].l = ((temp0 + ((jlong(((jint)ARRAY_ACCESS(jint, sp[0].o, (frame[3].i))))) & (jlong(4294967295ll)))) + (bit_cast<jlong>(bit_cast<uint64_t>((frame[5].l)) >> (32))));
	LINE_NUMBER(1340);
	ARRAY_ACCESS(jint, (frame[4].o), (frame[2].i)) = (jint((frame[5].l)));
	goto label_9;
	}
label_12:;
	{
	LINE_NUMBER(1344);
	if ((longCompare((bit_cast<jlong>(bit_cast<uint64_t>((frame[5].l)) >> (32))), (jlong(0)))) == 0) goto label_15;
	}
	INST_ICONST(1);
	goto label_16;
label_15:;
	INST_ICONST(0);
label_16:;
	INST_ISTORE(7);
label_17:;
	{
	LINE_NUMBER(1345);
	if ((frame[2].i) <= 0) goto label_18;
	}
	INST_ILOAD(7);
	if ((--sp)->i == 0) goto label_18;
	{
	LINE_NUMBER(1346);
	sp[0].o = frame[4].o;
	INST_IINC(2, -1);
	jint temp0 = frame[2].i;
	jint temp1 = ((jint)ARRAY_ACCESS(jint, (frame[0].o), (frame[2].i))) + (jint(1));
	ARRAY_ACCESS(jint, sp[0].o, temp0) = temp1;
	if (temp1 != 0) goto label_20;
	}
	INST_ICONST(1);
	goto label_21;
label_20:;
	INST_ICONST(0);
label_21:;
	INST_ISTORE(7);
	goto label_17;
label_18:;
	{
	LINE_NUMBER(1349);
	if ((frame[2].i) <= 0) goto label_22;
	}
	{
	LINE_NUMBER(1350);
	sp[0].o = frame[4].o;
	INST_IINC(2, -1);
	ARRAY_ACCESS(jint, sp[0].o, (frame[2].i)) = ((jint)ARRAY_ACCESS(jint, (frame[0].o), (frame[2].i)));
	goto label_18;
	}
label_22:;
	{
	LINE_NUMBER(1353);
	if ((frame[7].i) == 0) goto label_24;
	}
	{
	LINE_NUMBER(1354);
	sp[0].o = (jobject) createArray(ctx, &class_int, ((((jarray) nullCheck(ctx, (frame[4].o)))->length) + (jint(1))));
	frame[8].o = sp[0].o;
	LINE_NUMBER(1355);
	SM_java_lang_System_arraycopy_java_lang_Object_int_java_lang_Object_int_int(ctx, (frame[4].o), (jint(0)), (frame[8].o), (jint(1)), (((jarray) nullCheck(ctx, (frame[4].o)))->length));
	LINE_NUMBER(1356);
	ARRAY_ACCESS(jint, (frame[8].o), (jint(0))) = (jint(1));
	LINE_NUMBER(1357);
	popStackFrame(ctx);
	return (frame[8].o);
	}
label_24:;
	{
	LINE_NUMBER(1359);
	popStackFrame(ctx);
	return (frame[4].o);
	}

	popStackFrame(ctx);
}

jobject SM_java_math_BigInteger_subtract_long_Array1_int_R_Array1_int(jcontext ctx, jlong param0, jobject param1) {
	jtype frame[16];
	auto stack = &frame[8];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/math/BigInteger:subtract", 16 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_math_BigInteger(ctx);
	frame[0].l = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(1363);
	frame[3].i = (jint((bit_cast<jlong>(bit_cast<uint64_t>((frame[0].l)) >> (32)))));
	LINE_NUMBER(1364);
	if ((frame[3].i) != 0) goto label_2;
	}
	{
	LINE_NUMBER(1365);
	sp[0].o = (jobject) createArray(ctx, &class_int, (jint(1)));
	frame[4].o = sp[0].o;
	LINE_NUMBER(1366);
	ARRAY_ACCESS(jint, (frame[4].o), (jint(0))) = (jint(((frame[0].l) - ((jlong(((jint)ARRAY_ACCESS(jint, (frame[2].o), (jint(0)))))) & (jlong(4294967295ll))))));
	LINE_NUMBER(1367);
	popStackFrame(ctx);
	return (frame[4].o);
	}
label_2:;
	{
	LINE_NUMBER(1369);
	sp[0].o = (jobject) createArray(ctx, &class_int, (jint(2)));
	frame[4].o = sp[0].o;
	LINE_NUMBER(1370);
	if ((((jarray) nullCheck(ctx, (frame[2].o)))->length) != (jint(1))) goto label_7;
	}
	{
	LINE_NUMBER(1371);
	frame[5].l = (((jlong((jint((frame[0].l))))) & (jlong(4294967295ll))) - ((jlong(((jint)ARRAY_ACCESS(jint, (frame[2].o), (jint(0)))))) & (jlong(4294967295ll))));
	LINE_NUMBER(1372);
	ARRAY_ACCESS(jint, (frame[4].o), (jint(1))) = (jint((frame[5].l)));
	LINE_NUMBER(1374);
	if ((longCompare(((frame[5].l) >> (32)), (jlong(0)))) == 0) goto label_11;
	}
	INST_ICONST(1);
	goto label_12;
label_11:;
	INST_ICONST(0);
label_12:;
	{
	sp -= 1;
	frame[7].i = sp[0].i;
	LINE_NUMBER(1375);
	if ((frame[7].i) == 0) goto label_14;
	}
	{
	LINE_NUMBER(1376);
	ARRAY_ACCESS(jint, (frame[4].o), (jint(0))) = ((frame[3].i) - (jint(1)));
	goto label_16;
	}
label_14:;
	{
	LINE_NUMBER(1378);
	ARRAY_ACCESS(jint, (frame[4].o), (jint(0))) = (frame[3].i);
	}
label_16:;
	{
	LINE_NUMBER(1380);
	popStackFrame(ctx);
	return (frame[4].o);
	}
label_7:;
	{
	LINE_NUMBER(1382);
	frame[5].l = (((jlong((jint((frame[0].l))))) & (jlong(4294967295ll))) - ((jlong(((jint)ARRAY_ACCESS(jint, (frame[2].o), (jint(1)))))) & (jlong(4294967295ll))));
	LINE_NUMBER(1383);
	ARRAY_ACCESS(jint, (frame[4].o), (jint(1))) = (jint((frame[5].l)));
	LINE_NUMBER(1384);
	frame[5].l = ((((jlong((frame[3].i))) & (jlong(4294967295ll))) - ((jlong(((jint)ARRAY_ACCESS(jint, (frame[2].o), (jint(0)))))) & (jlong(4294967295ll)))) + ((frame[5].l) >> (32)));
	LINE_NUMBER(1385);
	ARRAY_ACCESS(jint, (frame[4].o), (jint(0))) = (jint((frame[5].l)));
	LINE_NUMBER(1386);
	popStackFrame(ctx);
	return (frame[4].o);
	}

	popStackFrame(ctx);
}

jobject SM_java_math_BigInteger_subtract_Array1_int_long_R_Array1_int(jcontext ctx, jobject param0, jlong param1) {
	jtype frame[15];
	auto stack = &frame[9];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/math/BigInteger:subtract", 15 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_math_BigInteger(ctx);
	frame[0].o = param0;
	frame[1].l = param1;
	{
	LINE_NUMBER(1399);
	frame[3].i = (jint((bit_cast<jlong>(bit_cast<uint64_t>((frame[1].l)) >> (32)))));
	LINE_NUMBER(1400);
	frame[4].i = (((jarray) nullCheck(ctx, (frame[0].o)))->length);
	LINE_NUMBER(1401);
	sp[0].o = (jobject) createArray(ctx, &class_int, (frame[4].i));
	frame[5].o = sp[0].o;
	LINE_NUMBER(1402);
	frame[6].l = (jlong(0));
	LINE_NUMBER(1404);
	if ((frame[3].i) != 0) goto label_5;
	}
	{
	LINE_NUMBER(1405);
	sp[0].o = frame[0].o;
	INST_IINC(4, -1);
	frame[6].l = (((jlong(((jint)ARRAY_ACCESS(jint, sp[0].o, (frame[4].i))))) & (jlong(4294967295ll))) - (frame[1].l));
	LINE_NUMBER(1406);
	ARRAY_ACCESS(jint, (frame[5].o), (frame[4].i)) = (jint((frame[6].l)));
	goto label_8;
	}
label_5:;
	{
	LINE_NUMBER(1408);
	sp[0].o = frame[0].o;
	INST_IINC(4, -1);
	frame[6].l = (((jlong(((jint)ARRAY_ACCESS(jint, sp[0].o, (frame[4].i))))) & (jlong(4294967295ll))) - ((frame[1].l) & (jlong(4294967295ll))));
	LINE_NUMBER(1409);
	ARRAY_ACCESS(jint, (frame[5].o), (frame[4].i)) = (jint((frame[6].l)));
	LINE_NUMBER(1410);
	sp[0].o = frame[0].o;
	INST_IINC(4, -1);
	frame[6].l = ((((jlong(((jint)ARRAY_ACCESS(jint, sp[0].o, (frame[4].i))))) & (jlong(4294967295ll))) - ((jlong((frame[3].i))) & (jlong(4294967295ll)))) + ((frame[6].l) >> (32)));
	LINE_NUMBER(1411);
	ARRAY_ACCESS(jint, (frame[5].o), (frame[4].i)) = (jint((frame[6].l)));
	}
label_8:;
	{
	LINE_NUMBER(1415);
	if ((longCompare(((frame[6].l) >> (32)), (jlong(0)))) == 0) goto label_12;
	}
	INST_ICONST(1);
	goto label_13;
label_12:;
	INST_ICONST(0);
label_13:;
	INST_ISTORE(8);
label_14:;
	{
	LINE_NUMBER(1416);
	if ((frame[4].i) <= 0) goto label_15;
	}
	INST_ILOAD(8);
	if ((--sp)->i == 0) goto label_15;
	{
	LINE_NUMBER(1417);
	sp[0].o = frame[5].o;
	INST_IINC(4, -1);
	jint temp0 = frame[4].i;
	jint temp1 = ((jint)ARRAY_ACCESS(jint, (frame[0].o), (frame[4].i))) - (jint(1));
	ARRAY_ACCESS(jint, sp[0].o, temp0) = temp1;
	if (temp1 != (jint(-1))) goto label_17;
	}
	INST_ICONST(1);
	goto label_18;
label_17:;
	INST_ICONST(0);
label_18:;
	INST_ISTORE(8);
	goto label_14;
label_15:;
	{
	LINE_NUMBER(1420);
	if ((frame[4].i) <= 0) goto label_19;
	}
	{
	LINE_NUMBER(1421);
	sp[0].o = frame[5].o;
	INST_IINC(4, -1);
	ARRAY_ACCESS(jint, sp[0].o, (frame[4].i)) = ((jint)ARRAY_ACCESS(jint, (frame[0].o), (frame[4].i)));
	goto label_15;
	}
label_19:;
	{
	LINE_NUMBER(1423);
	popStackFrame(ctx);
	return (frame[5].o);
	}

	popStackFrame(ctx);
}

jobject M_java_math_BigInteger_subtract_java_math_BigInteger_R_java_math_BigInteger(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/math/BigInteger:subtract", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(1433);
	if (((jint)((java_math_BigInteger *) NULL_CHECK((frame[1].o)))->F_signum) != 0) goto label_1;
	}
	{
	LINE_NUMBER(1434);
	popStackFrame(ctx);
	return (frame[0].o);
	}
label_1:;
	{
	LINE_NUMBER(1435);
	if (((jint)((java_math_BigInteger *) NULL_CHECK((frame[0].o)))->F_signum) != 0) goto label_3;
	}
	{
	LINE_NUMBER(1436);
	sp[0].o = (jobject)((func_java_math_BigInteger_negate_R_java_math_BigInteger) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_math_BigInteger_negate_R_java_math_BigInteger])(ctx, (frame[1].o));
	popStackFrame(ctx);
	return sp[0].o;
	}
label_3:;
	{
	LINE_NUMBER(1437);
	if (((jint)((java_math_BigInteger *) NULL_CHECK((frame[1].o)))->F_signum) == ((jint)((java_math_BigInteger *) NULL_CHECK((frame[0].o)))->F_signum)) goto label_5;
	}
	{
	LINE_NUMBER(1438);
	clinit_java_math_BigInteger(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_math_BigInteger);
	sp[1].o = (jobject)((java_math_BigInteger *) NULL_CHECK((frame[0].o)))->F_mag;
	sp[2].o = (jobject)((java_math_BigInteger *) NULL_CHECK((frame[1].o)))->F_mag;
	sp[1].o = (jobject)SM_java_math_BigInteger_add_Array1_int_Array1_int_R_Array1_int(ctx, sp[1].o, sp[2].o);
	init_java_math_BigInteger_Array1_int_int(ctx, sp[0].o, sp[1].o, ((jint)((java_math_BigInteger *) NULL_CHECK((frame[0].o)))->F_signum));
	popStackFrame(ctx);
	return sp[0].o;
	}
label_5:;
	{
	LINE_NUMBER(1440);
	jint temp0 = (jint)((func_java_math_BigInteger_compareMagnitude_java_math_BigInteger_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_math_BigInteger_compareMagnitude_java_math_BigInteger_R_int])(ctx, (frame[0].o), (frame[1].o));
	frame[2].i = temp0;
	LINE_NUMBER(1441);
	if ((frame[2].i) != 0) goto label_8;
	}
	{
	LINE_NUMBER(1442);
	clinit_java_math_BigInteger(ctx);
	sp[0].o = (jobject)SF_java_math_BigInteger_ZERO;
	popStackFrame(ctx);
	return sp[0].o;
	}
label_8:;
	{
	LINE_NUMBER(1443);
	if ((frame[2].i) <= 0) goto label_10;
	}
	{
	sp[0].o = (jobject)((java_math_BigInteger *) NULL_CHECK((frame[0].o)))->F_mag;
	sp[1].o = (jobject)((java_math_BigInteger *) NULL_CHECK((frame[1].o)))->F_mag;
	sp[0].o = (jobject)SM_java_math_BigInteger_subtract_Array1_int_Array1_int_R_Array1_int(ctx, sp[0].o, sp[1].o);
	sp += 1;
	goto label_11;
	}
label_10:;
	{
	LINE_NUMBER(1444);
	sp[0].o = (jobject)((java_math_BigInteger *) NULL_CHECK((frame[1].o)))->F_mag;
	sp[1].o = (jobject)((java_math_BigInteger *) NULL_CHECK((frame[0].o)))->F_mag;
	sp[0].o = (jobject)SM_java_math_BigInteger_subtract_Array1_int_Array1_int_R_Array1_int(ctx, sp[0].o, sp[1].o);
	sp += 1;
	}
label_11:;
	{
	sp -= 1;
	frame[3].o = sp[0].o;
	LINE_NUMBER(1445);
	sp[0].o = (jobject)SM_java_math_BigInteger_trustedStripLeadingZeroInts_Array1_int_R_Array1_int(ctx, (frame[3].o));
	frame[3].o = sp[0].o;
	LINE_NUMBER(1446);
	clinit_java_math_BigInteger(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_math_BigInteger);
	sp[1].o = frame[3].o;
	jobject temp0 = sp[1].o;
	sp[1].o = sp[0].o;
	sp[2].o = temp0;
	sp += 3;
	if ((frame[2].i) != ((jint)((java_math_BigInteger *) NULL_CHECK((frame[0].o)))->F_signum)) goto label_14;
	}
	INST_ICONST(1);
	goto label_15;
label_14:;
	INST_ICONST(-1);
label_15:;
	POP_N(3); // Pop method args
	init_java_math_BigInteger_Array1_int_int(ctx, sp[0].o, sp[1].o, sp[2].i);
	popStackFrame(ctx);
	INST_ARETURN();

	popStackFrame(ctx);
}

jobject SM_java_math_BigInteger_subtract_Array1_int_Array1_int_R_Array1_int(jcontext ctx, jobject param0, jobject param1) {
	jtype frame[14];
	auto stack = &frame[8];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/math/BigInteger:subtract", 14 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_math_BigInteger(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	{
	LINE_NUMBER(1456);
	frame[2].i = (((jarray) nullCheck(ctx, (frame[0].o)))->length);
	LINE_NUMBER(1457);
	sp[0].o = (jobject) createArray(ctx, &class_int, (frame[2].i));
	frame[3].o = sp[0].o;
	LINE_NUMBER(1458);
	frame[4].i = (((jarray) nullCheck(ctx, (frame[1].o)))->length);
	LINE_NUMBER(1459);
	frame[5].l = (jlong(0));
	}
label_4:;
	{
	LINE_NUMBER(1462);
	if ((frame[4].i) <= 0) goto label_5;
	}
	{
	LINE_NUMBER(1463);
	sp[0].o = frame[0].o;
	INST_IINC(2, -1);
	jlong temp0 = (jlong(((jint)ARRAY_ACCESS(jint, sp[0].o, (frame[2].i))))) & (jlong(4294967295ll));
	sp[0].o = frame[1].o;
	INST_IINC(4, -1);
	frame[5].l = ((temp0 - ((jlong(((jint)ARRAY_ACCESS(jint, sp[0].o, (frame[4].i))))) & (jlong(4294967295ll)))) + ((frame[5].l) >> (32)));
	LINE_NUMBER(1466);
	ARRAY_ACCESS(jint, (frame[3].o), (frame[2].i)) = (jint((frame[5].l)));
	goto label_4;
	}
label_5:;
	{
	LINE_NUMBER(1470);
	if ((longCompare(((frame[5].l) >> (32)), (jlong(0)))) == 0) goto label_8;
	}
	INST_ICONST(1);
	goto label_9;
label_8:;
	INST_ICONST(0);
label_9:;
	INST_ISTORE(7);
label_10:;
	{
	LINE_NUMBER(1471);
	if ((frame[2].i) <= 0) goto label_11;
	}
	INST_ILOAD(7);
	if ((--sp)->i == 0) goto label_11;
	{
	LINE_NUMBER(1472);
	sp[0].o = frame[3].o;
	INST_IINC(2, -1);
	jint temp0 = frame[2].i;
	jint temp1 = ((jint)ARRAY_ACCESS(jint, (frame[0].o), (frame[2].i))) - (jint(1));
	ARRAY_ACCESS(jint, sp[0].o, temp0) = temp1;
	if (temp1 != (jint(-1))) goto label_13;
	}
	INST_ICONST(1);
	goto label_14;
label_13:;
	INST_ICONST(0);
label_14:;
	INST_ISTORE(7);
	goto label_10;
label_11:;
	{
	LINE_NUMBER(1475);
	if ((frame[2].i) <= 0) goto label_15;
	}
	{
	LINE_NUMBER(1476);
	sp[0].o = frame[3].o;
	INST_IINC(2, -1);
	ARRAY_ACCESS(jint, sp[0].o, (frame[2].i)) = ((jint)ARRAY_ACCESS(jint, (frame[0].o), (frame[2].i)));
	goto label_11;
	}
label_15:;
	{
	LINE_NUMBER(1478);
	popStackFrame(ctx);
	return (frame[3].o);
	}

	popStackFrame(ctx);
}

jobject M_java_math_BigInteger_multiply_java_math_BigInteger_R_java_math_BigInteger(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/math/BigInteger:multiply", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(1491);
	sp[0].o = (jobject)M_java_math_BigInteger_multiply_java_math_BigInteger_boolean_R_java_math_BigInteger(ctx, (frame[0].o), (frame[1].o), (jint(0)));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_java_math_BigInteger_multiply_java_math_BigInteger_boolean_R_java_math_BigInteger(jcontext ctx, jobject self, jobject param0, jbool param1) {
	NULL_CHECK(self);
	jtype frame[12];
	auto stack = &frame[7];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/math/BigInteger:multiply", 12 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(1503);
	if (((jint)((java_math_BigInteger *) NULL_CHECK((frame[1].o)))->F_signum) == 0) goto label_1;
	}
	{
	if (((jint)((java_math_BigInteger *) NULL_CHECK((frame[0].o)))->F_signum) != 0) goto label_2;
	}
label_1:;
	{
	LINE_NUMBER(1504);
	clinit_java_math_BigInteger(ctx);
	sp[0].o = (jobject)SF_java_math_BigInteger_ZERO;
	popStackFrame(ctx);
	return sp[0].o;
	}
label_2:;
	{
	LINE_NUMBER(1506);
	sp[0].o = (jobject)((java_math_BigInteger *) NULL_CHECK((frame[0].o)))->F_mag;
	frame[3].i = (((jarray) nullCheck(ctx, sp[0].o))->length);
	LINE_NUMBER(1508);
	if ((frame[1].o) != (frame[0].o)) goto label_4;
	}
	{
	if ((frame[3].i) <= (20)) goto label_4;
	}
	{
	LINE_NUMBER(1509);
	sp[0].o = (jobject)M_java_math_BigInteger_square_R_java_math_BigInteger(ctx, (frame[0].o));
	popStackFrame(ctx);
	return sp[0].o;
	}
label_4:;
	{
	LINE_NUMBER(1512);
	sp[0].o = (jobject)((java_math_BigInteger *) NULL_CHECK((frame[1].o)))->F_mag;
	frame[4].i = (((jarray) nullCheck(ctx, sp[0].o))->length);
	LINE_NUMBER(1514);
	if ((frame[3].i) < (80)) goto label_7;
	}
	{
	if ((frame[4].i) >= (80)) goto label_8;
	}
label_7:;
	{
	LINE_NUMBER(1515);
	if (((jint)((java_math_BigInteger *) NULL_CHECK((frame[0].o)))->F_signum) != ((jint)((java_math_BigInteger *) NULL_CHECK((frame[1].o)))->F_signum)) goto label_9;
	}
	INST_ICONST(1);
	goto label_10;
label_9:;
	INST_ICONST(-1);
label_10:;
	{
	sp -= 1;
	frame[5].i = sp[0].i;
	LINE_NUMBER(1516);
	sp[0].o = (jobject)((java_math_BigInteger *) NULL_CHECK((frame[1].o)))->F_mag;
	if ((((jarray) nullCheck(ctx, sp[0].o))->length) != (jint(1))) goto label_12;
	}
	{
	LINE_NUMBER(1517);
	sp[0].o = (jobject)((java_math_BigInteger *) NULL_CHECK((frame[0].o)))->F_mag;
	sp[1].o = (jobject)((java_math_BigInteger *) NULL_CHECK((frame[1].o)))->F_mag;
	sp[0].o = (jobject)SM_java_math_BigInteger_multiplyByInt_Array1_int_int_int_R_java_math_BigInteger(ctx, sp[0].o, ((jint)ARRAY_ACCESS(jint, sp[1].o, (jint(0)))), (frame[5].i));
	popStackFrame(ctx);
	return sp[0].o;
	}
label_12:;
	{
	LINE_NUMBER(1519);
	sp[0].o = (jobject)((java_math_BigInteger *) NULL_CHECK((frame[0].o)))->F_mag;
	if ((((jarray) nullCheck(ctx, sp[0].o))->length) != (jint(1))) goto label_14;
	}
	{
	LINE_NUMBER(1520);
	sp[0].o = (jobject)((java_math_BigInteger *) NULL_CHECK((frame[1].o)))->F_mag;
	sp[1].o = (jobject)((java_math_BigInteger *) NULL_CHECK((frame[0].o)))->F_mag;
	sp[0].o = (jobject)SM_java_math_BigInteger_multiplyByInt_Array1_int_int_int_R_java_math_BigInteger(ctx, sp[0].o, ((jint)ARRAY_ACCESS(jint, sp[1].o, (jint(0)))), (frame[5].i));
	popStackFrame(ctx);
	return sp[0].o;
	}
label_14:;
	{
	LINE_NUMBER(1522);
	sp[0].o = (jobject)((java_math_BigInteger *) NULL_CHECK((frame[0].o)))->F_mag;
	jint temp0 = frame[3].i;
	sp[1].o = (jobject)((java_math_BigInteger *) NULL_CHECK((frame[1].o)))->F_mag;
	sp[0].o = (jobject)SM_java_math_BigInteger_multiplyToLen_Array1_int_int_Array1_int_int_Array1_int_R_Array1_int(ctx, sp[0].o, temp0, sp[1].o, (frame[4].i), (jobject(nullptr)));
	frame[6].o = sp[0].o;
	LINE_NUMBER(1524);
	sp[0].o = (jobject)SM_java_math_BigInteger_trustedStripLeadingZeroInts_Array1_int_R_Array1_int(ctx, (frame[6].o));
	frame[6].o = sp[0].o;
	LINE_NUMBER(1525);
	clinit_java_math_BigInteger(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_math_BigInteger);
	init_java_math_BigInteger_Array1_int_int(ctx, sp[0].o, (frame[6].o), (frame[5].i));
	popStackFrame(ctx);
	return sp[0].o;
	}
label_8:;
	{
	LINE_NUMBER(1527);
	if ((frame[3].i) >= (240)) goto label_18;
	}
	{
	if ((frame[4].i) >= (240)) goto label_18;
	}
	{
	LINE_NUMBER(1528);
	sp[0].o = (jobject)SM_java_math_BigInteger_multiplyKaratsuba_java_math_BigInteger_java_math_BigInteger_R_java_math_BigInteger(ctx, (frame[0].o), (frame[1].o));
	popStackFrame(ctx);
	return sp[0].o;
	}
label_18:;
	{
	LINE_NUMBER(1575);
	if ((frame[2].i) != 0) goto label_20;
	}
	{
	LINE_NUMBER(1580);
	sp[0].o = (jobject)((java_math_BigInteger *) NULL_CHECK((frame[0].o)))->F_mag;
	sp[1].o = (jobject)((java_math_BigInteger *) NULL_CHECK((frame[0].o)))->F_mag;
	jint temp0 = (jint)SM_java_math_BigInteger_bitLength_Array1_int_int_R_int(ctx, sp[0].o, (((jarray) nullCheck(ctx, sp[1].o))->length));
	sp[0].o = (jobject)((java_math_BigInteger *) NULL_CHECK((frame[1].o)))->F_mag;
	sp[1].o = (jobject)((java_math_BigInteger *) NULL_CHECK((frame[1].o)))->F_mag;
	jint temp1 = ((jarray) nullCheck(ctx, sp[1].o))->length;
	LINE_NUMBER(1581);
	jint temp2 = (jint)SM_java_math_BigInteger_bitLength_Array1_int_int_R_int(ctx, sp[0].o, temp1);
	if ((longCompare((jlong((temp0 + temp2))), (jlong(2147483648ll)))) <= 0) goto label_20;
	}
	LINE_NUMBER(1583);
	SM_java_math_BigInteger_reportOverflow(ctx);
label_20:;
	{
	LINE_NUMBER(1587);
	sp[0].o = (jobject)SM_java_math_BigInteger_multiplyToomCook3_java_math_BigInteger_java_math_BigInteger_R_java_math_BigInteger(ctx, (frame[0].o), (frame[1].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject SM_java_math_BigInteger_multiplyByInt_Array1_int_int_int_R_java_math_BigInteger(jcontext ctx, jobject param0, jint param1, jint param2) {
	jtype frame[17];
	auto stack = &frame[13];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/math/BigInteger:multiplyByInt", 17 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_math_BigInteger(ctx);
	frame[0].o = param0;
	frame[1].i = param1;
	frame[2].i = param2;
	{
	LINE_NUMBER(1593);
	jint temp0 = (jint)SM_java_lang_Integer_bitCount_int_R_int(ctx, (frame[1].i));
	if (temp0 != (jint(1))) goto label_1;
	}
	{
	LINE_NUMBER(1594);
	clinit_java_math_BigInteger(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_math_BigInteger);
	sp[1].o = frame[0].o;
	jint temp0 = (jint)SM_java_lang_Integer_numberOfTrailingZeros_int_R_int(ctx, (frame[1].i));
	sp[1].o = (jobject)SM_java_math_BigInteger_shiftLeft_Array1_int_int_R_Array1_int(ctx, sp[1].o, temp0);
	init_java_math_BigInteger_Array1_int_int(ctx, sp[0].o, sp[1].o, (frame[2].i));
	popStackFrame(ctx);
	return sp[0].o;
	}
label_1:;
	{
	LINE_NUMBER(1596);
	frame[3].i = (((jarray) nullCheck(ctx, (frame[0].o)))->length);
	LINE_NUMBER(1597);
	sp[0].o = (jobject) createArray(ctx, &class_int, ((frame[3].i) + (jint(1))));
	frame[4].o = sp[0].o;
	LINE_NUMBER(1598);
	frame[5].l = (jlong(0));
	LINE_NUMBER(1599);
	frame[7].l = ((jlong((frame[1].i))) & (jlong(4294967295ll)));
	LINE_NUMBER(1600);
	frame[9].i = ((((jarray) nullCheck(ctx, (frame[4].o)))->length) - (jint(1)));
	LINE_NUMBER(1601);
	frame[10].i = ((frame[3].i) - (jint(1)));
	}
label_8:;
	INST_ILOAD(10);
	if ((--sp)->i < 0) goto label_9;
	{
	LINE_NUMBER(1602);
	frame[11].l = ((((jlong(((jint)ARRAY_ACCESS(jint, (frame[0].o), (frame[10].i))))) & (jlong(4294967295ll))) * (frame[7].l)) + (frame[5].l));
	LINE_NUMBER(1603);
	sp[0].o = frame[4].o;
	jint temp0 = frame[9].i;
	INST_IINC(9, -1);
	ARRAY_ACCESS(jint, sp[0].o, temp0) = (jint((frame[11].l)));
	LINE_NUMBER(1604);
	frame[5].l = (bit_cast<jlong>(bit_cast<uint64_t>((frame[11].l)) >> (32)));
	LINE_NUMBER(1601);
	INST_IINC(10, -1);
	goto label_8;
	}
label_9:;
	{
	LINE_NUMBER(1606);
	if ((longCompare((frame[5].l), (jlong(0)))) != 0) goto label_14;
	}
	{
	LINE_NUMBER(1607);
	sp[0].o = (jobject)SM_java_util_Arrays_copyOfRange_Array1_int_int_int_R_Array1_int(ctx, (frame[4].o), (jint(1)), (((jarray) nullCheck(ctx, (frame[4].o)))->length));
	frame[4].o = sp[0].o;
	goto label_16;
	}
label_14:;
	{
	LINE_NUMBER(1609);
	ARRAY_ACCESS(jint, (frame[4].o), (frame[9].i)) = (jint((frame[5].l)));
	}
label_16:;
	{
	LINE_NUMBER(1611);
	clinit_java_math_BigInteger(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_math_BigInteger);
	init_java_math_BigInteger_Array1_int_int(ctx, sp[0].o, (frame[4].o), (frame[2].i));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_java_math_BigInteger_multiply_long_R_java_math_BigInteger(jcontext ctx, jobject self, jlong param0) {
	NULL_CHECK(self);
	jtype frame[23];
	auto stack = &frame[17];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/math/BigInteger:multiply", 23 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].l = param0;
	{
	LINE_NUMBER(1619);
	if ((longCompare((frame[1].l), (jlong(0)))) == 0) goto label_1;
	}
	{
	if (((jint)((java_math_BigInteger *) NULL_CHECK((frame[0].o)))->F_signum) != 0) goto label_2;
	}
label_1:;
	{
	LINE_NUMBER(1620);
	clinit_java_math_BigInteger(ctx);
	sp[0].o = (jobject)SF_java_math_BigInteger_ZERO;
	popStackFrame(ctx);
	return sp[0].o;
	}
label_2:;
	{
	LINE_NUMBER(1621);
	if ((longCompare((frame[1].l), (jlong(-9223372036854775807ll)))) != 0) goto label_3;
	}
	{
	LINE_NUMBER(1622);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)SM_java_math_BigInteger_valueOf_long_R_java_math_BigInteger(ctx, (frame[1].l));
	sp[0].o = (jobject)((func_java_math_BigInteger_multiply_java_math_BigInteger_R_java_math_BigInteger) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_math_BigInteger_multiply_java_math_BigInteger_R_java_math_BigInteger])(ctx, sp[0].o, sp[1].o);
	popStackFrame(ctx);
	return sp[0].o;
	}
label_3:;
	{
	LINE_NUMBER(1623);
	if ((longCompare((frame[1].l), (jlong(0)))) <= 0) goto label_5;
	}
	{
	jint temp0 = (jint)((java_math_BigInteger *) NULL_CHECK((frame[0].o)))->F_signum;
	sp[0].i = temp0;
	sp += 1;
	goto label_6;
	}
label_5:;
	{
	jint temp0 = -((jint)((java_math_BigInteger *) NULL_CHECK((frame[0].o)))->F_signum);
	sp[0].i = temp0;
	sp += 1;
	}
label_6:;
	{
	sp -= 1;
	frame[3].i = sp[0].i;
	LINE_NUMBER(1624);
	if ((longCompare((frame[1].l), (jlong(0)))) >= 0) goto label_8;
	}
	{
	LINE_NUMBER(1625);
	frame[1].l = (-(frame[1].l));
	}
label_8:;
	{
	LINE_NUMBER(1626);
	frame[4].l = (bit_cast<jlong>(bit_cast<uint64_t>((frame[1].l)) >> (32)));
	LINE_NUMBER(1627);
	frame[6].l = ((frame[1].l) & (jlong(4294967295ll)));
	LINE_NUMBER(1629);
	sp[0].o = (jobject)((java_math_BigInteger *) NULL_CHECK((frame[0].o)))->F_mag;
	frame[8].i = (((jarray) nullCheck(ctx, sp[0].o))->length);
	LINE_NUMBER(1630);
	sp[0].o = (jobject)((java_math_BigInteger *) NULL_CHECK((frame[0].o)))->F_mag;
	frame[9].o = sp[0].o;
	LINE_NUMBER(1631);
	if ((longCompare((frame[4].l), (jlong(0)))) != 0) goto label_14;
	}
	{
	sp[0].o = (jobject) createArray(ctx, &class_int, ((frame[8].i) + (jint(1))));
	sp += 1;
	goto label_15;
	}
label_14:;
	{
	sp[0].o = (jobject) createArray(ctx, &class_int, ((frame[8].i) + (jint(2))));
	sp += 1;
	}
label_15:;
	{
	sp -= 1;
	frame[10].o = sp[0].o;
	LINE_NUMBER(1632);
	frame[11].l = (jlong(0));
	LINE_NUMBER(1633);
	frame[13].i = ((((jarray) nullCheck(ctx, (frame[10].o)))->length) - (jint(1)));
	LINE_NUMBER(1634);
	frame[14].i = ((frame[8].i) - (jint(1)));
	}
label_19:;
	INST_ILOAD(14);
	if ((--sp)->i < 0) goto label_20;
	{
	LINE_NUMBER(1635);
	frame[15].l = ((((jlong(((jint)ARRAY_ACCESS(jint, (frame[9].o), (frame[14].i))))) & (jlong(4294967295ll))) * (frame[6].l)) + (frame[11].l));
	LINE_NUMBER(1636);
	sp[0].o = frame[10].o;
	jint temp0 = frame[13].i;
	INST_IINC(13, -1);
	ARRAY_ACCESS(jint, sp[0].o, temp0) = (jint((frame[15].l)));
	LINE_NUMBER(1637);
	frame[11].l = (bit_cast<jlong>(bit_cast<uint64_t>((frame[15].l)) >> (32)));
	LINE_NUMBER(1634);
	INST_IINC(14, -1);
	goto label_19;
	}
label_20:;
	{
	LINE_NUMBER(1639);
	ARRAY_ACCESS(jint, (frame[10].o), (frame[13].i)) = (jint((frame[11].l)));
	LINE_NUMBER(1640);
	if ((longCompare((frame[4].l), (jlong(0)))) == 0) goto label_26;
	}
	{
	LINE_NUMBER(1641);
	frame[11].l = (jlong(0));
	LINE_NUMBER(1642);
	frame[13].i = ((((jarray) nullCheck(ctx, (frame[10].o)))->length) - (jint(2)));
	LINE_NUMBER(1643);
	frame[14].i = ((frame[8].i) - (jint(1)));
	}
label_30:;
	INST_ILOAD(14);
	if ((--sp)->i < 0) goto label_31;
	{
	LINE_NUMBER(1644);
	frame[15].l = (((((jlong(((jint)ARRAY_ACCESS(jint, (frame[9].o), (frame[14].i))))) & (jlong(4294967295ll))) * (frame[4].l)) + ((jlong(((jint)ARRAY_ACCESS(jint, (frame[10].o), (frame[13].i))))) & (jlong(4294967295ll)))) + (frame[11].l));
	LINE_NUMBER(1646);
	sp[0].o = frame[10].o;
	jint temp0 = frame[13].i;
	INST_IINC(13, -1);
	ARRAY_ACCESS(jint, sp[0].o, temp0) = (jint((frame[15].l)));
	LINE_NUMBER(1647);
	frame[11].l = (bit_cast<jlong>(bit_cast<uint64_t>((frame[15].l)) >> (32)));
	LINE_NUMBER(1643);
	INST_IINC(14, -1);
	goto label_30;
	}
label_31:;
	{
	LINE_NUMBER(1649);
	ARRAY_ACCESS(jint, (frame[10].o), (jint(0))) = (jint((frame[11].l)));
	}
label_26:;
	{
	LINE_NUMBER(1651);
	if ((longCompare((frame[11].l), (jlong(0)))) != 0) goto label_36;
	}
	{
	LINE_NUMBER(1652);
	sp[0].o = (jobject)SM_java_util_Arrays_copyOfRange_Array1_int_int_int_R_Array1_int(ctx, (frame[10].o), (jint(1)), (((jarray) nullCheck(ctx, (frame[10].o)))->length));
	frame[10].o = sp[0].o;
	}
label_36:;
	{
	LINE_NUMBER(1653);
	clinit_java_math_BigInteger(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_math_BigInteger);
	init_java_math_BigInteger_Array1_int_int(ctx, sp[0].o, (frame[10].o), (frame[3].i));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject SM_java_math_BigInteger_multiplyToLen_Array1_int_int_Array1_int_int_Array1_int_R_Array1_int(jcontext ctx, jobject param0, jint param1, jobject param2, jint param3, jobject param4) {
	jtype frame[20];
	auto stack = &frame[14];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/math/BigInteger:multiplyToLen", 20 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_math_BigInteger(ctx);
	frame[0].o = param0;
	frame[1].i = param1;
	frame[2].o = param2;
	frame[3].i = param3;
	frame[4].o = param4;
	{
	LINE_NUMBER(1661);
	frame[5].i = ((frame[1].i) - (jint(1)));
	LINE_NUMBER(1662);
	frame[6].i = ((frame[3].i) - (jint(1)));
	LINE_NUMBER(1664);
	if ((frame[4].o) == nullptr) goto label_3;
	}
	{
	if ((((jarray) nullCheck(ctx, (frame[4].o)))->length) >= ((frame[1].i) + (frame[3].i))) goto label_4;
	}
label_3:;
	{
	LINE_NUMBER(1665);
	sp[0].o = (jobject) createArray(ctx, &class_int, ((frame[1].i) + (frame[3].i)));
	frame[4].o = sp[0].o;
	}
label_4:;
	{
	LINE_NUMBER(1667);
	frame[7].l = (jlong(0));
	LINE_NUMBER(1668);
	frame[9].i = (frame[6].i);
	frame[10].i = (((frame[6].i) + (jint(1))) + (frame[5].i));
	}
label_7:;
	INST_ILOAD(9);
	if ((--sp)->i < 0) goto label_8;
	{
	LINE_NUMBER(1669);
	frame[11].l = ((((jlong(((jint)ARRAY_ACCESS(jint, (frame[2].o), (frame[9].i))))) & (jlong(4294967295ll))) * ((jlong(((jint)ARRAY_ACCESS(jint, (frame[0].o), (frame[5].i))))) & (jlong(4294967295ll)))) + (frame[7].l));
	LINE_NUMBER(1671);
	ARRAY_ACCESS(jint, (frame[4].o), (frame[10].i)) = (jint((frame[11].l)));
	LINE_NUMBER(1672);
	frame[7].l = (bit_cast<jlong>(bit_cast<uint64_t>((frame[11].l)) >> (32)));
	LINE_NUMBER(1668);
	INST_IINC(9, -1);
	INST_IINC(10, -1);
	goto label_7;
	}
label_8:;
	{
	LINE_NUMBER(1674);
	ARRAY_ACCESS(jint, (frame[4].o), (frame[5].i)) = (jint((frame[7].l)));
	LINE_NUMBER(1676);
	frame[9].i = ((frame[5].i) - (jint(1)));
	}
label_14:;
	INST_ILOAD(9);
	if ((--sp)->i < 0) goto label_15;
	{
	LINE_NUMBER(1677);
	frame[7].l = (jlong(0));
	LINE_NUMBER(1678);
	frame[10].i = (frame[6].i);
	frame[11].i = (((frame[6].i) + (jint(1))) + (frame[9].i));
	}
label_19:;
	INST_ILOAD(10);
	if ((--sp)->i < 0) goto label_20;
	{
	LINE_NUMBER(1679);
	frame[12].l = (((((jlong(((jint)ARRAY_ACCESS(jint, (frame[2].o), (frame[10].i))))) & (jlong(4294967295ll))) * ((jlong(((jint)ARRAY_ACCESS(jint, (frame[0].o), (frame[9].i))))) & (jlong(4294967295ll)))) + ((jlong(((jint)ARRAY_ACCESS(jint, (frame[4].o), (frame[11].i))))) & (jlong(4294967295ll)))) + (frame[7].l));
	LINE_NUMBER(1682);
	ARRAY_ACCESS(jint, (frame[4].o), (frame[11].i)) = (jint((frame[12].l)));
	LINE_NUMBER(1683);
	frame[7].l = (bit_cast<jlong>(bit_cast<uint64_t>((frame[12].l)) >> (32)));
	LINE_NUMBER(1678);
	INST_IINC(10, -1);
	INST_IINC(11, -1);
	goto label_19;
	}
label_20:;
	{
	LINE_NUMBER(1685);
	ARRAY_ACCESS(jint, (frame[4].o), (frame[9].i)) = (jint((frame[7].l)));
	LINE_NUMBER(1676);
	INST_IINC(9, -1);
	goto label_14;
	}
label_15:;
	{
	LINE_NUMBER(1687);
	popStackFrame(ctx);
	return (frame[4].o);
	}

	popStackFrame(ctx);
}

jobject SM_java_math_BigInteger_multiplyKaratsuba_java_math_BigInteger_java_math_BigInteger_R_java_math_BigInteger(jcontext ctx, jobject param0, jobject param1) {
	jtype frame[16];
	auto stack = &frame[13];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/math/BigInteger:multiplyKaratsuba", 16 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_math_BigInteger(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	{
	LINE_NUMBER(1706);
	sp[0].o = (jobject)((java_math_BigInteger *) NULL_CHECK((frame[0].o)))->F_mag;
	frame[2].i = (((jarray) nullCheck(ctx, sp[0].o))->length);
	LINE_NUMBER(1707);
	sp[0].o = (jobject)((java_math_BigInteger *) NULL_CHECK((frame[1].o)))->F_mag;
	frame[3].i = (((jarray) nullCheck(ctx, sp[0].o))->length);
	LINE_NUMBER(1710);
	jint temp0 = (jint)SM_java_lang_Math_max_int_int_R_int(ctx, (frame[2].i), (frame[3].i));
	frame[4].i = ((temp0 + (jint(1))) / (jint(2)));
	LINE_NUMBER(1714);
	sp[0].o = (jobject)M_java_math_BigInteger_getLower_int_R_java_math_BigInteger(ctx, (frame[0].o), (frame[4].i));
	frame[5].o = sp[0].o;
	LINE_NUMBER(1715);
	sp[0].o = (jobject)M_java_math_BigInteger_getUpper_int_R_java_math_BigInteger(ctx, (frame[0].o), (frame[4].i));
	frame[6].o = sp[0].o;
	LINE_NUMBER(1716);
	sp[0].o = (jobject)M_java_math_BigInteger_getLower_int_R_java_math_BigInteger(ctx, (frame[1].o), (frame[4].i));
	frame[7].o = sp[0].o;
	LINE_NUMBER(1717);
	sp[0].o = (jobject)M_java_math_BigInteger_getUpper_int_R_java_math_BigInteger(ctx, (frame[1].o), (frame[4].i));
	frame[8].o = sp[0].o;
	LINE_NUMBER(1719);
	sp[0].o = (jobject)((func_java_math_BigInteger_multiply_java_math_BigInteger_R_java_math_BigInteger) ((void **) nullCheck(ctx, (frame[6].o))->vtable)[VTABLE_java_math_BigInteger_multiply_java_math_BigInteger_R_java_math_BigInteger])(ctx, (frame[6].o), (frame[8].o));
	frame[9].o = sp[0].o;
	LINE_NUMBER(1720);
	sp[0].o = (jobject)((func_java_math_BigInteger_multiply_java_math_BigInteger_R_java_math_BigInteger) ((void **) nullCheck(ctx, (frame[5].o))->vtable)[VTABLE_java_math_BigInteger_multiply_java_math_BigInteger_R_java_math_BigInteger])(ctx, (frame[5].o), (frame[7].o));
	frame[10].o = sp[0].o;
	LINE_NUMBER(1723);
	sp[0].o = (jobject)((func_java_math_BigInteger_add_java_math_BigInteger_R_java_math_BigInteger) ((void **) nullCheck(ctx, (frame[6].o))->vtable)[VTABLE_java_math_BigInteger_add_java_math_BigInteger_R_java_math_BigInteger])(ctx, (frame[6].o), (frame[5].o));
	sp[1].o = (jobject)((func_java_math_BigInteger_add_java_math_BigInteger_R_java_math_BigInteger) ((void **) nullCheck(ctx, (frame[8].o))->vtable)[VTABLE_java_math_BigInteger_add_java_math_BigInteger_R_java_math_BigInteger])(ctx, (frame[8].o), (frame[7].o));
	sp[0].o = (jobject)((func_java_math_BigInteger_multiply_java_math_BigInteger_R_java_math_BigInteger) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_math_BigInteger_multiply_java_math_BigInteger_R_java_math_BigInteger])(ctx, sp[0].o, sp[1].o);
	frame[11].o = sp[0].o;
	LINE_NUMBER(1726);
	sp[0].o = (jobject)((func_java_math_BigInteger_shiftLeft_int_R_java_math_BigInteger) ((void **) nullCheck(ctx, (frame[9].o))->vtable)[VTABLE_java_math_BigInteger_shiftLeft_int_R_java_math_BigInteger])(ctx, (frame[9].o), ((32) * (frame[4].i)));
	sp[1].o = (jobject)((func_java_math_BigInteger_subtract_java_math_BigInteger_R_java_math_BigInteger) ((void **) nullCheck(ctx, (frame[11].o))->vtable)[VTABLE_java_math_BigInteger_subtract_java_math_BigInteger_R_java_math_BigInteger])(ctx, (frame[11].o), (frame[9].o));
	sp[1].o = (jobject)((func_java_math_BigInteger_subtract_java_math_BigInteger_R_java_math_BigInteger) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_math_BigInteger_subtract_java_math_BigInteger_R_java_math_BigInteger])(ctx, sp[1].o, (frame[10].o));
	sp[0].o = (jobject)((func_java_math_BigInteger_add_java_math_BigInteger_R_java_math_BigInteger) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_math_BigInteger_add_java_math_BigInteger_R_java_math_BigInteger])(ctx, sp[0].o, sp[1].o);
	sp[0].o = (jobject)((func_java_math_BigInteger_shiftLeft_int_R_java_math_BigInteger) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_math_BigInteger_shiftLeft_int_R_java_math_BigInteger])(ctx, sp[0].o, ((32) * (frame[4].i)));
	sp[0].o = (jobject)((func_java_math_BigInteger_add_java_math_BigInteger_R_java_math_BigInteger) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_math_BigInteger_add_java_math_BigInteger_R_java_math_BigInteger])(ctx, sp[0].o, (frame[10].o));
	frame[12].o = sp[0].o;
	LINE_NUMBER(1728);
	if (((jint)((java_math_BigInteger *) NULL_CHECK((frame[0].o)))->F_signum) == ((jint)((java_math_BigInteger *) NULL_CHECK((frame[1].o)))->F_signum)) goto label_12;
	}
	{
	LINE_NUMBER(1729);
	sp[0].o = (jobject)((func_java_math_BigInteger_negate_R_java_math_BigInteger) ((void **) nullCheck(ctx, (frame[12].o))->vtable)[VTABLE_java_math_BigInteger_negate_R_java_math_BigInteger])(ctx, (frame[12].o));
	popStackFrame(ctx);
	return sp[0].o;
	}
label_12:;
	{
	LINE_NUMBER(1731);
	popStackFrame(ctx);
	return (frame[12].o);
	}

	popStackFrame(ctx);
}

jobject SM_java_math_BigInteger_multiplyToomCook3_java_math_BigInteger_java_math_BigInteger_R_java_math_BigInteger(jcontext ctx, jobject param0, jobject param1) {
	jtype frame[30];
	auto stack = &frame[25];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/math/BigInteger:multiplyToomCook3", 30 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_math_BigInteger(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	{
	LINE_NUMBER(1764);
	sp[0].o = (jobject)((java_math_BigInteger *) NULL_CHECK((frame[0].o)))->F_mag;
	frame[2].i = (((jarray) nullCheck(ctx, sp[0].o))->length);
	LINE_NUMBER(1765);
	sp[0].o = (jobject)((java_math_BigInteger *) NULL_CHECK((frame[1].o)))->F_mag;
	frame[3].i = (((jarray) nullCheck(ctx, sp[0].o))->length);
	LINE_NUMBER(1767);
	jint temp0 = (jint)SM_java_lang_Math_max_int_int_R_int(ctx, (frame[2].i), (frame[3].i));
	frame[4].i = temp0;
	LINE_NUMBER(1770);
	frame[5].i = (((frame[4].i) + (jint(2))) / (jint(3)));
	LINE_NUMBER(1773);
	frame[6].i = ((frame[4].i) - ((jint(2)) * (frame[5].i)));
	LINE_NUMBER(1778);
	sp[0].o = (jobject)M_java_math_BigInteger_getToomSlice_int_int_int_int_R_java_math_BigInteger(ctx, (frame[0].o), (frame[5].i), (frame[6].i), (jint(0)), (frame[4].i));
	frame[9].o = sp[0].o;
	LINE_NUMBER(1779);
	sp[0].o = (jobject)M_java_math_BigInteger_getToomSlice_int_int_int_int_R_java_math_BigInteger(ctx, (frame[0].o), (frame[5].i), (frame[6].i), (jint(1)), (frame[4].i));
	frame[8].o = sp[0].o;
	LINE_NUMBER(1780);
	sp[0].o = (jobject)M_java_math_BigInteger_getToomSlice_int_int_int_int_R_java_math_BigInteger(ctx, (frame[0].o), (frame[5].i), (frame[6].i), (jint(2)), (frame[4].i));
	frame[7].o = sp[0].o;
	LINE_NUMBER(1781);
	sp[0].o = (jobject)M_java_math_BigInteger_getToomSlice_int_int_int_int_R_java_math_BigInteger(ctx, (frame[1].o), (frame[5].i), (frame[6].i), (jint(0)), (frame[4].i));
	frame[12].o = sp[0].o;
	LINE_NUMBER(1782);
	sp[0].o = (jobject)M_java_math_BigInteger_getToomSlice_int_int_int_int_R_java_math_BigInteger(ctx, (frame[1].o), (frame[5].i), (frame[6].i), (jint(1)), (frame[4].i));
	frame[11].o = sp[0].o;
	LINE_NUMBER(1783);
	sp[0].o = (jobject)M_java_math_BigInteger_getToomSlice_int_int_int_int_R_java_math_BigInteger(ctx, (frame[1].o), (frame[5].i), (frame[6].i), (jint(2)), (frame[4].i));
	frame[10].o = sp[0].o;
	LINE_NUMBER(1787);
	sp[0].o = (jobject)M_java_math_BigInteger_multiply_java_math_BigInteger_boolean_R_java_math_BigInteger(ctx, (frame[7].o), (frame[10].o), (jint(1)));
	frame[13].o = sp[0].o;
	LINE_NUMBER(1788);
	sp[0].o = (jobject)((func_java_math_BigInteger_add_java_math_BigInteger_R_java_math_BigInteger) ((void **) nullCheck(ctx, (frame[9].o))->vtable)[VTABLE_java_math_BigInteger_add_java_math_BigInteger_R_java_math_BigInteger])(ctx, (frame[9].o), (frame[7].o));
	frame[21].o = sp[0].o;
	LINE_NUMBER(1789);
	sp[0].o = (jobject)((func_java_math_BigInteger_add_java_math_BigInteger_R_java_math_BigInteger) ((void **) nullCheck(ctx, (frame[12].o))->vtable)[VTABLE_java_math_BigInteger_add_java_math_BigInteger_R_java_math_BigInteger])(ctx, (frame[12].o), (frame[10].o));
	frame[22].o = sp[0].o;
	LINE_NUMBER(1790);
	sp[0].o = (jobject)((func_java_math_BigInteger_subtract_java_math_BigInteger_R_java_math_BigInteger) ((void **) nullCheck(ctx, (frame[21].o))->vtable)[VTABLE_java_math_BigInteger_subtract_java_math_BigInteger_R_java_math_BigInteger])(ctx, (frame[21].o), (frame[8].o));
	sp[1].o = (jobject)((func_java_math_BigInteger_subtract_java_math_BigInteger_R_java_math_BigInteger) ((void **) nullCheck(ctx, (frame[22].o))->vtable)[VTABLE_java_math_BigInteger_subtract_java_math_BigInteger_R_java_math_BigInteger])(ctx, (frame[22].o), (frame[11].o));
	sp[0].o = (jobject)M_java_math_BigInteger_multiply_java_math_BigInteger_boolean_R_java_math_BigInteger(ctx, sp[0].o, sp[1].o, (jint(1)));
	frame[16].o = sp[0].o;
	LINE_NUMBER(1791);
	sp[0].o = (jobject)((func_java_math_BigInteger_add_java_math_BigInteger_R_java_math_BigInteger) ((void **) nullCheck(ctx, (frame[21].o))->vtable)[VTABLE_java_math_BigInteger_add_java_math_BigInteger_R_java_math_BigInteger])(ctx, (frame[21].o), (frame[8].o));
	frame[21].o = sp[0].o;
	LINE_NUMBER(1792);
	sp[0].o = (jobject)((func_java_math_BigInteger_add_java_math_BigInteger_R_java_math_BigInteger) ((void **) nullCheck(ctx, (frame[22].o))->vtable)[VTABLE_java_math_BigInteger_add_java_math_BigInteger_R_java_math_BigInteger])(ctx, (frame[22].o), (frame[11].o));
	frame[22].o = sp[0].o;
	LINE_NUMBER(1793);
	sp[0].o = (jobject)M_java_math_BigInteger_multiply_java_math_BigInteger_boolean_R_java_math_BigInteger(ctx, (frame[21].o), (frame[22].o), (jint(1)));
	frame[14].o = sp[0].o;
	LINE_NUMBER(1794);
	sp[0].o = (jobject)((func_java_math_BigInteger_add_java_math_BigInteger_R_java_math_BigInteger) ((void **) nullCheck(ctx, (frame[21].o))->vtable)[VTABLE_java_math_BigInteger_add_java_math_BigInteger_R_java_math_BigInteger])(ctx, (frame[21].o), (frame[9].o));
	sp[0].o = (jobject)((func_java_math_BigInteger_shiftLeft_int_R_java_math_BigInteger) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_math_BigInteger_shiftLeft_int_R_java_math_BigInteger])(ctx, sp[0].o, (jint(1)));
	sp[0].o = (jobject)((func_java_math_BigInteger_subtract_java_math_BigInteger_R_java_math_BigInteger) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_math_BigInteger_subtract_java_math_BigInteger_R_java_math_BigInteger])(ctx, sp[0].o, (frame[7].o));
	sp[1].o = frame[22].o;
	sp[2].o = frame[12].o;
	LINE_NUMBER(1795);
	sp[1].o = (jobject)((func_java_math_BigInteger_add_java_math_BigInteger_R_java_math_BigInteger) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_math_BigInteger_add_java_math_BigInteger_R_java_math_BigInteger])(ctx, sp[1].o, sp[2].o);
	sp[1].o = (jobject)((func_java_math_BigInteger_shiftLeft_int_R_java_math_BigInteger) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_math_BigInteger_shiftLeft_int_R_java_math_BigInteger])(ctx, sp[1].o, (jint(1)));
	sp[1].o = (jobject)((func_java_math_BigInteger_subtract_java_math_BigInteger_R_java_math_BigInteger) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_math_BigInteger_subtract_java_math_BigInteger_R_java_math_BigInteger])(ctx, sp[1].o, (frame[10].o));
	jint temp1 = jint(1);
	LINE_NUMBER(1794);
	sp[0].o = (jobject)M_java_math_BigInteger_multiply_java_math_BigInteger_boolean_R_java_math_BigInteger(ctx, sp[0].o, sp[1].o, temp1);
	frame[15].o = sp[0].o;
	LINE_NUMBER(1796);
	sp[0].o = (jobject)M_java_math_BigInteger_multiply_java_math_BigInteger_boolean_R_java_math_BigInteger(ctx, (frame[9].o), (frame[12].o), (jint(1)));
	frame[17].o = sp[0].o;
	LINE_NUMBER(1804);
	sp[0].o = (jobject)((func_java_math_BigInteger_subtract_java_math_BigInteger_R_java_math_BigInteger) ((void **) nullCheck(ctx, (frame[15].o))->vtable)[VTABLE_java_math_BigInteger_subtract_java_math_BigInteger_R_java_math_BigInteger])(ctx, (frame[15].o), (frame[16].o));
	sp[0].o = (jobject)M_java_math_BigInteger_exactDivideBy3_R_java_math_BigInteger(ctx, sp[0].o);
	frame[19].o = sp[0].o;
	LINE_NUMBER(1805);
	sp[0].o = (jobject)((func_java_math_BigInteger_subtract_java_math_BigInteger_R_java_math_BigInteger) ((void **) nullCheck(ctx, (frame[14].o))->vtable)[VTABLE_java_math_BigInteger_subtract_java_math_BigInteger_R_java_math_BigInteger])(ctx, (frame[14].o), (frame[16].o));
	sp[0].o = (jobject)((func_java_math_BigInteger_shiftRight_int_R_java_math_BigInteger) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_math_BigInteger_shiftRight_int_R_java_math_BigInteger])(ctx, sp[0].o, (jint(1)));
	frame[20].o = sp[0].o;
	LINE_NUMBER(1806);
	sp[0].o = (jobject)((func_java_math_BigInteger_subtract_java_math_BigInteger_R_java_math_BigInteger) ((void **) nullCheck(ctx, (frame[14].o))->vtable)[VTABLE_java_math_BigInteger_subtract_java_math_BigInteger_R_java_math_BigInteger])(ctx, (frame[14].o), (frame[13].o));
	frame[18].o = sp[0].o;
	LINE_NUMBER(1807);
	sp[0].o = (jobject)((func_java_math_BigInteger_subtract_java_math_BigInteger_R_java_math_BigInteger) ((void **) nullCheck(ctx, (frame[19].o))->vtable)[VTABLE_java_math_BigInteger_subtract_java_math_BigInteger_R_java_math_BigInteger])(ctx, (frame[19].o), (frame[18].o));
	sp[0].o = (jobject)((func_java_math_BigInteger_shiftRight_int_R_java_math_BigInteger) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_math_BigInteger_shiftRight_int_R_java_math_BigInteger])(ctx, sp[0].o, (jint(1)));
	frame[19].o = sp[0].o;
	LINE_NUMBER(1808);
	sp[0].o = (jobject)((func_java_math_BigInteger_subtract_java_math_BigInteger_R_java_math_BigInteger) ((void **) nullCheck(ctx, (frame[18].o))->vtable)[VTABLE_java_math_BigInteger_subtract_java_math_BigInteger_R_java_math_BigInteger])(ctx, (frame[18].o), (frame[20].o));
	sp[0].o = (jobject)((func_java_math_BigInteger_subtract_java_math_BigInteger_R_java_math_BigInteger) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_math_BigInteger_subtract_java_math_BigInteger_R_java_math_BigInteger])(ctx, sp[0].o, (frame[17].o));
	frame[18].o = sp[0].o;
	LINE_NUMBER(1809);
	sp[0].o = frame[19].o;
	sp[1].o = (jobject)((func_java_math_BigInteger_shiftLeft_int_R_java_math_BigInteger) ((void **) nullCheck(ctx, (frame[17].o))->vtable)[VTABLE_java_math_BigInteger_shiftLeft_int_R_java_math_BigInteger])(ctx, (frame[17].o), (jint(1)));
	sp[0].o = (jobject)((func_java_math_BigInteger_subtract_java_math_BigInteger_R_java_math_BigInteger) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_math_BigInteger_subtract_java_math_BigInteger_R_java_math_BigInteger])(ctx, sp[0].o, sp[1].o);
	frame[19].o = sp[0].o;
	LINE_NUMBER(1810);
	sp[0].o = (jobject)((func_java_math_BigInteger_subtract_java_math_BigInteger_R_java_math_BigInteger) ((void **) nullCheck(ctx, (frame[20].o))->vtable)[VTABLE_java_math_BigInteger_subtract_java_math_BigInteger_R_java_math_BigInteger])(ctx, (frame[20].o), (frame[19].o));
	frame[20].o = sp[0].o;
	LINE_NUMBER(1813);
	frame[23].i = ((frame[5].i) * (32));
	LINE_NUMBER(1815);
	sp[0].o = (jobject)((func_java_math_BigInteger_shiftLeft_int_R_java_math_BigInteger) ((void **) nullCheck(ctx, (frame[17].o))->vtable)[VTABLE_java_math_BigInteger_shiftLeft_int_R_java_math_BigInteger])(ctx, (frame[17].o), (frame[23].i));
	sp[0].o = (jobject)((func_java_math_BigInteger_add_java_math_BigInteger_R_java_math_BigInteger) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_math_BigInteger_add_java_math_BigInteger_R_java_math_BigInteger])(ctx, sp[0].o, (frame[19].o));
	sp[0].o = (jobject)((func_java_math_BigInteger_shiftLeft_int_R_java_math_BigInteger) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_math_BigInteger_shiftLeft_int_R_java_math_BigInteger])(ctx, sp[0].o, (frame[23].i));
	sp[0].o = (jobject)((func_java_math_BigInteger_add_java_math_BigInteger_R_java_math_BigInteger) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_math_BigInteger_add_java_math_BigInteger_R_java_math_BigInteger])(ctx, sp[0].o, (frame[18].o));
	sp[0].o = (jobject)((func_java_math_BigInteger_shiftLeft_int_R_java_math_BigInteger) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_math_BigInteger_shiftLeft_int_R_java_math_BigInteger])(ctx, sp[0].o, (frame[23].i));
	sp[0].o = (jobject)((func_java_math_BigInteger_add_java_math_BigInteger_R_java_math_BigInteger) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_math_BigInteger_add_java_math_BigInteger_R_java_math_BigInteger])(ctx, sp[0].o, (frame[20].o));
	sp[0].o = (jobject)((func_java_math_BigInteger_shiftLeft_int_R_java_math_BigInteger) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_math_BigInteger_shiftLeft_int_R_java_math_BigInteger])(ctx, sp[0].o, (frame[23].i));
	sp[0].o = (jobject)((func_java_math_BigInteger_add_java_math_BigInteger_R_java_math_BigInteger) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_math_BigInteger_add_java_math_BigInteger_R_java_math_BigInteger])(ctx, sp[0].o, (frame[13].o));
	frame[24].o = sp[0].o;
	LINE_NUMBER(1817);
	if (((jint)((java_math_BigInteger *) NULL_CHECK((frame[0].o)))->F_signum) == ((jint)((java_math_BigInteger *) NULL_CHECK((frame[1].o)))->F_signum)) goto label_32;
	}
	{
	LINE_NUMBER(1818);
	sp[0].o = (jobject)((func_java_math_BigInteger_negate_R_java_math_BigInteger) ((void **) nullCheck(ctx, (frame[24].o))->vtable)[VTABLE_java_math_BigInteger_negate_R_java_math_BigInteger])(ctx, (frame[24].o));
	popStackFrame(ctx);
	return sp[0].o;
	}
label_32:;
	{
	LINE_NUMBER(1820);
	popStackFrame(ctx);
	return (frame[24].o);
	}

	popStackFrame(ctx);
}

jobject M_java_math_BigInteger_getToomSlice_int_int_int_int_R_java_math_BigInteger(jcontext ctx, jobject self, jint param0, jint param1, jint param2, jint param3) {
	NULL_CHECK(self);
	jtype frame[16];
	auto stack = &frame[11];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/math/BigInteger:getToomSlice", 16 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].i = param1;
	frame[3].i = param2;
	frame[4].i = param3;
	{
	LINE_NUMBER(1842);
	sp[0].o = (jobject)((java_math_BigInteger *) NULL_CHECK((frame[0].o)))->F_mag;
	frame[8].i = (((jarray) nullCheck(ctx, sp[0].o))->length);
	LINE_NUMBER(1843);
	frame[9].i = ((frame[4].i) - (frame[8].i));
	LINE_NUMBER(1845);
	if ((frame[3].i) != 0) goto label_3;
	}
	{
	LINE_NUMBER(1846);
	frame[5].i = ((jint(0)) - (frame[9].i));
	LINE_NUMBER(1847);
	frame[6].i = (((frame[2].i) - (jint(1))) - (frame[9].i));
	goto label_7;
	}
label_3:;
	{
	LINE_NUMBER(1849);
	frame[5].i = (((frame[2].i) + (((frame[3].i) - (jint(1))) * (frame[1].i))) - (frame[9].i));
	LINE_NUMBER(1850);
	frame[6].i = (((frame[5].i) + (frame[1].i)) - (jint(1)));
	}
label_7:;
	{
	LINE_NUMBER(1853);
	if ((frame[5].i) >= 0) goto label_9;
	}
	{
	LINE_NUMBER(1854);
	frame[5].i = (jint(0));
	}
label_9:;
	{
	LINE_NUMBER(1856);
	if ((frame[6].i) >= 0) goto label_11;
	}
	{
	LINE_NUMBER(1857);
	clinit_java_math_BigInteger(ctx);
	sp[0].o = (jobject)SF_java_math_BigInteger_ZERO;
	popStackFrame(ctx);
	return sp[0].o;
	}
label_11:;
	{
	LINE_NUMBER(1860);
	frame[7].i = (((frame[6].i) - (frame[5].i)) + (jint(1)));
	LINE_NUMBER(1862);
	if ((frame[7].i) > 0) goto label_14;
	}
	{
	LINE_NUMBER(1863);
	clinit_java_math_BigInteger(ctx);
	sp[0].o = (jobject)SF_java_math_BigInteger_ZERO;
	popStackFrame(ctx);
	return sp[0].o;
	}
label_14:;
	{
	LINE_NUMBER(1868);
	if ((frame[5].i) != 0) goto label_16;
	}
	{
	if ((frame[7].i) < (frame[8].i)) goto label_16;
	}
	{
	LINE_NUMBER(1869);
	sp[0].o = (jobject)((func_java_math_BigInteger_abs_R_java_math_BigInteger) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_math_BigInteger_abs_R_java_math_BigInteger])(ctx, (frame[0].o));
	popStackFrame(ctx);
	return sp[0].o;
	}
label_16:;
	{
	LINE_NUMBER(1872);
	sp[0].o = (jobject) createArray(ctx, &class_int, (frame[7].i));
	frame[10].o = sp[0].o;
	LINE_NUMBER(1873);
	sp[0].o = (jobject)((java_math_BigInteger *) NULL_CHECK((frame[0].o)))->F_mag;
	SM_java_lang_System_arraycopy_java_lang_Object_int_java_lang_Object_int_int(ctx, sp[0].o, (frame[5].i), (frame[10].o), (jint(0)), (frame[7].i));
	LINE_NUMBER(1875);
	clinit_java_math_BigInteger(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_math_BigInteger);
	sp[1].o = (jobject)SM_java_math_BigInteger_trustedStripLeadingZeroInts_Array1_int_R_Array1_int(ctx, (frame[10].o));
	init_java_math_BigInteger_Array1_int_int(ctx, sp[0].o, sp[1].o, (jint(1)));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_java_math_BigInteger_exactDivideBy3_R_java_math_BigInteger(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[16];
	auto stack = &frame[12];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/math/BigInteger:exactDivideBy3", 16 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(1887);
	sp[0].o = (jobject)((java_math_BigInteger *) NULL_CHECK((frame[0].o)))->F_mag;
	frame[1].i = (((jarray) nullCheck(ctx, sp[0].o))->length);
	LINE_NUMBER(1888);
	sp[0].o = (jobject) createArray(ctx, &class_int, (frame[1].i));
	frame[2].o = sp[0].o;
	LINE_NUMBER(1890);
	frame[9].l = (jlong(0));
	LINE_NUMBER(1891);
	frame[11].i = ((frame[1].i) - (jint(1)));
	}
label_4:;
	INST_ILOAD(11);
	if ((--sp)->i < 0) goto label_5;
	{
	LINE_NUMBER(1892);
	sp[0].o = (jobject)((java_math_BigInteger *) NULL_CHECK((frame[0].o)))->F_mag;
	frame[3].l = ((jlong(((jint)ARRAY_ACCESS(jint, sp[0].o, (frame[11].i))))) & (jlong(4294967295ll)));
	LINE_NUMBER(1893);
	frame[5].l = ((frame[3].l) - (frame[9].l));
	LINE_NUMBER(1894);
	if ((longCompare((frame[9].l), (frame[3].l))) <= 0) goto label_9;
	}
	{
	LINE_NUMBER(1895);
	frame[9].l = (jlong(1));
	goto label_11;
	}
label_9:;
	{
	LINE_NUMBER(1897);
	frame[9].l = (jlong(0));
	}
label_11:;
	{
	LINE_NUMBER(1903);
	frame[7].l = (((frame[5].l) * (jlong(2863311531ll))) & (jlong(4294967295ll)));
	LINE_NUMBER(1904);
	ARRAY_ACCESS(jint, (frame[2].o), (frame[11].i)) = (jint((frame[7].l)));
	LINE_NUMBER(1908);
	if ((longCompare((frame[7].l), (jlong(1431655766ll)))) < 0) goto label_14;
	}
	{
	LINE_NUMBER(1909);
	frame[9].l = ((frame[9].l) + (jlong(1)));
	LINE_NUMBER(1910);
	if ((longCompare((frame[7].l), (jlong(2863311531ll)))) < 0) goto label_14;
	}
	{
	LINE_NUMBER(1911);
	frame[9].l = ((frame[9].l) + (jlong(1)));
	}
label_14:;
	{
	LINE_NUMBER(1891);
	INST_IINC(11, -1);
	goto label_4;
	}
label_5:;
	{
	LINE_NUMBER(1914);
	sp[0].o = (jobject)SM_java_math_BigInteger_trustedStripLeadingZeroInts_Array1_int_R_Array1_int(ctx, (frame[2].o));
	frame[2].o = sp[0].o;
	LINE_NUMBER(1915);
	clinit_java_math_BigInteger(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_math_BigInteger);
	init_java_math_BigInteger_Array1_int_int(ctx, sp[0].o, (frame[2].o), ((jint)((java_math_BigInteger *) NULL_CHECK((frame[0].o)))->F_signum));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_java_math_BigInteger_getLower_int_R_java_math_BigInteger(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/math/BigInteger:getLower", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(1923);
	sp[0].o = (jobject)((java_math_BigInteger *) NULL_CHECK((frame[0].o)))->F_mag;
	frame[2].i = (((jarray) nullCheck(ctx, sp[0].o))->length);
	LINE_NUMBER(1925);
	if ((frame[2].i) > (frame[1].i)) goto label_2;
	}
	{
	LINE_NUMBER(1926);
	sp[0].o = (jobject)((func_java_math_BigInteger_abs_R_java_math_BigInteger) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_math_BigInteger_abs_R_java_math_BigInteger])(ctx, (frame[0].o));
	popStackFrame(ctx);
	return sp[0].o;
	}
label_2:;
	{
	LINE_NUMBER(1929);
	sp[0].o = (jobject) createArray(ctx, &class_int, (frame[1].i));
	frame[3].o = sp[0].o;
	LINE_NUMBER(1930);
	sp[0].o = (jobject)((java_math_BigInteger *) NULL_CHECK((frame[0].o)))->F_mag;
	SM_java_lang_System_arraycopy_java_lang_Object_int_java_lang_Object_int_int(ctx, sp[0].o, ((frame[2].i) - (frame[1].i)), (frame[3].o), (jint(0)), (frame[1].i));
	LINE_NUMBER(1932);
	clinit_java_math_BigInteger(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_math_BigInteger);
	sp[1].o = (jobject)SM_java_math_BigInteger_trustedStripLeadingZeroInts_Array1_int_R_Array1_int(ctx, (frame[3].o));
	init_java_math_BigInteger_Array1_int_int(ctx, sp[0].o, sp[1].o, (jint(1)));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_java_math_BigInteger_getUpper_int_R_java_math_BigInteger(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[10];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/math/BigInteger:getUpper", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(1941);
	sp[0].o = (jobject)((java_math_BigInteger *) NULL_CHECK((frame[0].o)))->F_mag;
	frame[2].i = (((jarray) nullCheck(ctx, sp[0].o))->length);
	LINE_NUMBER(1943);
	if ((frame[2].i) > (frame[1].i)) goto label_2;
	}
	{
	LINE_NUMBER(1944);
	clinit_java_math_BigInteger(ctx);
	sp[0].o = (jobject)SF_java_math_BigInteger_ZERO;
	popStackFrame(ctx);
	return sp[0].o;
	}
label_2:;
	{
	LINE_NUMBER(1947);
	frame[3].i = ((frame[2].i) - (frame[1].i));
	LINE_NUMBER(1948);
	sp[0].o = (jobject) createArray(ctx, &class_int, (frame[3].i));
	frame[4].o = sp[0].o;
	LINE_NUMBER(1949);
	sp[0].o = (jobject)((java_math_BigInteger *) NULL_CHECK((frame[0].o)))->F_mag;
	SM_java_lang_System_arraycopy_java_lang_Object_int_java_lang_Object_int_int(ctx, sp[0].o, (jint(0)), (frame[4].o), (jint(0)), (frame[3].i));
	LINE_NUMBER(1951);
	clinit_java_math_BigInteger(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_math_BigInteger);
	sp[1].o = (jobject)SM_java_math_BigInteger_trustedStripLeadingZeroInts_Array1_int_R_Array1_int(ctx, (frame[4].o));
	init_java_math_BigInteger_Array1_int_int(ctx, sp[0].o, sp[1].o, (jint(1)));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_java_math_BigInteger_square_R_java_math_BigInteger(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/math/BigInteger:square", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(1962);
	sp[0].o = (jobject)M_java_math_BigInteger_square_boolean_R_java_math_BigInteger(ctx, (frame[0].o), (jint(0)));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_java_math_BigInteger_square_boolean_R_java_math_BigInteger(jcontext ctx, jobject self, jbool param0) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/math/BigInteger:square", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(1973);
	if (((jint)((java_math_BigInteger *) NULL_CHECK((frame[0].o)))->F_signum) != 0) goto label_1;
	}
	{
	LINE_NUMBER(1974);
	clinit_java_math_BigInteger(ctx);
	sp[0].o = (jobject)SF_java_math_BigInteger_ZERO;
	popStackFrame(ctx);
	return sp[0].o;
	}
label_1:;
	{
	LINE_NUMBER(1976);
	sp[0].o = (jobject)((java_math_BigInteger *) NULL_CHECK((frame[0].o)))->F_mag;
	frame[2].i = (((jarray) nullCheck(ctx, sp[0].o))->length);
	LINE_NUMBER(1978);
	if ((frame[2].i) >= (128)) goto label_4;
	}
	{
	LINE_NUMBER(1979);
	sp[0].o = (jobject)((java_math_BigInteger *) NULL_CHECK((frame[0].o)))->F_mag;
	sp[0].o = (jobject)SM_java_math_BigInteger_squareToLen_Array1_int_int_Array1_int_R_Array1_int(ctx, sp[0].o, (frame[2].i), (jobject(nullptr)));
	frame[3].o = sp[0].o;
	LINE_NUMBER(1980);
	clinit_java_math_BigInteger(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_math_BigInteger);
	sp[1].o = (jobject)SM_java_math_BigInteger_trustedStripLeadingZeroInts_Array1_int_R_Array1_int(ctx, (frame[3].o));
	init_java_math_BigInteger_Array1_int_int(ctx, sp[0].o, sp[1].o, (jint(1)));
	popStackFrame(ctx);
	return sp[0].o;
	}
label_4:;
	{
	LINE_NUMBER(1982);
	if ((frame[2].i) >= (216)) goto label_7;
	}
	{
	LINE_NUMBER(1983);
	sp[0].o = (jobject)M_java_math_BigInteger_squareKaratsuba_R_java_math_BigInteger(ctx, (frame[0].o));
	popStackFrame(ctx);
	return sp[0].o;
	}
label_7:;
	{
	LINE_NUMBER(1988);
	if ((frame[1].i) != 0) goto label_9;
	}
	{
	LINE_NUMBER(1989);
	sp[0].o = (jobject)((java_math_BigInteger *) NULL_CHECK((frame[0].o)))->F_mag;
	sp[1].o = (jobject)((java_math_BigInteger *) NULL_CHECK((frame[0].o)))->F_mag;
	jint temp0 = (jint)SM_java_math_BigInteger_bitLength_Array1_int_int_R_int(ctx, sp[0].o, (((jarray) nullCheck(ctx, sp[1].o))->length));
	if ((longCompare((jlong(temp0)), (jlong(1073741824ll)))) <= 0) goto label_9;
	}
	LINE_NUMBER(1990);
	SM_java_math_BigInteger_reportOverflow(ctx);
label_9:;
	{
	LINE_NUMBER(1994);
	sp[0].o = (jobject)M_java_math_BigInteger_squareToomCook3_R_java_math_BigInteger(ctx, (frame[0].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject SM_java_math_BigInteger_squareToLen_Array1_int_int_Array1_int_R_Array1_int(jcontext ctx, jobject param0, jint param1, jobject param2) {
	jtype frame[8];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/math/BigInteger:squareToLen", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_math_BigInteger(ctx);
	frame[0].o = param0;
	frame[1].i = param1;
	frame[2].o = param2;
	{
	LINE_NUMBER(2004);
	frame[3].i = ((frame[1].i) << (jint(1)));
	LINE_NUMBER(2005);
	if ((frame[2].o) == nullptr) goto label_2;
	}
	{
	if ((((jarray) nullCheck(ctx, (frame[2].o)))->length) >= (frame[3].i)) goto label_3;
	}
label_2:;
	{
	LINE_NUMBER(2006);
	sp[0].o = (jobject) createArray(ctx, &class_int, (frame[3].i));
	frame[2].o = sp[0].o;
	}
label_3:;
	{
	LINE_NUMBER(2009);
	SM_java_math_BigInteger_implSquareToLenChecks_Array1_int_int_Array1_int_int(ctx, (frame[0].o), (frame[1].i), (frame[2].o), (frame[3].i));
	LINE_NUMBER(2010);
	sp[0].o = (jobject)SM_java_math_BigInteger_implSquareToLen_Array1_int_int_Array1_int_int_R_Array1_int(ctx, (frame[0].o), (frame[1].i), (frame[2].o), (frame[3].i));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void SM_java_math_BigInteger_implSquareToLenChecks_Array1_int_int_Array1_int_int(jcontext ctx, jobject param0, jint param1, jobject param2, jint param3) {
	jtype frame[9];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/math/BigInteger:implSquareToLenChecks", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_math_BigInteger(ctx);
	frame[0].o = param0;
	frame[1].i = param1;
	frame[2].o = param2;
	frame[3].i = param3;
	{
	LINE_NUMBER(2017);
	if ((frame[1].i) >= (jint(1))) goto label_1;
	}
	{
	LINE_NUMBER(2018);
	clinit_java_lang_IllegalArgumentException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IllegalArgumentException);
	clinit_java_lang_StringBuilder(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[1].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"invalid input length: "_j))));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder])(ctx, sp[1].o, (frame[1].i));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[1].o);
	init_java_lang_IllegalArgumentException_java_lang_String(ctx, sp[0].o, sp[1].o);
	throwException(ctx, sp[0].o);	}
label_1:;
	{
	LINE_NUMBER(2020);
	if ((frame[1].i) <= (((jarray) nullCheck(ctx, (frame[0].o)))->length)) goto label_3;
	}
	{
	LINE_NUMBER(2021);
	clinit_java_lang_IllegalArgumentException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IllegalArgumentException);
	clinit_java_lang_StringBuilder(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[1].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"input length out of bound: "_j))));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder])(ctx, sp[1].o, (frame[1].i));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8" > "_j))));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jarray) nullCheck(ctx, (frame[0].o)))->length));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[1].o);
	init_java_lang_IllegalArgumentException_java_lang_String(ctx, sp[0].o, sp[1].o);
	throwException(ctx, sp[0].o);	}
label_3:;
	{
	LINE_NUMBER(2024);
	if (((frame[1].i) * (jint(2))) <= (((jarray) nullCheck(ctx, (frame[2].o)))->length)) goto label_5;
	}
	{
	LINE_NUMBER(2025);
	clinit_java_lang_IllegalArgumentException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IllegalArgumentException);
	clinit_java_lang_StringBuilder(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[1].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"input length out of bound: "_j))));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder])(ctx, sp[1].o, ((frame[1].i) * (jint(2))));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8" > "_j))));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jarray) nullCheck(ctx, (frame[2].o)))->length));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[1].o);
	init_java_lang_IllegalArgumentException_java_lang_String(ctx, sp[0].o, sp[1].o);
	throwException(ctx, sp[0].o);	}
label_5:;
	{
	LINE_NUMBER(2028);
	if ((frame[3].i) >= (jint(1))) goto label_7;
	}
	{
	LINE_NUMBER(2029);
	clinit_java_lang_IllegalArgumentException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IllegalArgumentException);
	clinit_java_lang_StringBuilder(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[1].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"invalid input length: "_j))));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder])(ctx, sp[1].o, (frame[3].i));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[1].o);
	init_java_lang_IllegalArgumentException_java_lang_String(ctx, sp[0].o, sp[1].o);
	throwException(ctx, sp[0].o);	}
label_7:;
	{
	LINE_NUMBER(2031);
	if ((frame[3].i) <= (((jarray) nullCheck(ctx, (frame[2].o)))->length)) goto label_9;
	}
	{
	LINE_NUMBER(2032);
	clinit_java_lang_IllegalArgumentException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IllegalArgumentException);
	clinit_java_lang_StringBuilder(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[1].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"input length out of bound: "_j))));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder])(ctx, sp[1].o, (frame[1].i));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8" > "_j))));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jarray) nullCheck(ctx, (frame[2].o)))->length));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[1].o);
	init_java_lang_IllegalArgumentException_java_lang_String(ctx, sp[0].o, sp[1].o);
	throwException(ctx, sp[0].o);	}
label_9:;
	LINE_NUMBER(2035);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jobject SM_java_math_BigInteger_implSquareToLen_Array1_int_int_Array1_int_int_R_Array1_int(jcontext ctx, jobject param0, jint param1, jobject param2, jint param3) {
	jtype frame[17];
	auto stack = &frame[11];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/math/BigInteger:implSquareToLen", 17 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_math_BigInteger(ctx);
	frame[0].o = param0;
	frame[1].i = param1;
	frame[2].o = param2;
	frame[3].i = param3;
	{
	LINE_NUMBER(2077);
	frame[4].i = (jint(0));
	LINE_NUMBER(2078);
	frame[5].i = (jint(0));
	frame[6].i = (jint(0));
	}
label_3:;
	{
	if ((frame[5].i) >= (frame[1].i)) goto label_4;
	}
	{
	LINE_NUMBER(2079);
	frame[7].l = ((jlong(((jint)ARRAY_ACCESS(jint, (frame[0].o), (frame[5].i))))) & (jlong(4294967295ll)));
	LINE_NUMBER(2080);
	frame[9].l = ((frame[7].l) * (frame[7].l));
	LINE_NUMBER(2081);
	sp[0].o = frame[2].o;
	jint temp0 = frame[6].i;
	INST_IINC(6, 1);
	ARRAY_ACCESS(jint, sp[0].o, temp0) = (((frame[4].i) << (31)) | (jint((bit_cast<jlong>(bit_cast<uint64_t>((frame[9].l)) >> (33))))));
	LINE_NUMBER(2082);
	sp[0].o = frame[2].o;
	jint temp1 = frame[6].i;
	INST_IINC(6, 1);
	ARRAY_ACCESS(jint, sp[0].o, temp1) = (jint((bit_cast<jlong>(bit_cast<uint64_t>((frame[9].l)) >> (jint(1))))));
	LINE_NUMBER(2083);
	frame[4].i = (jint((frame[9].l)));
	LINE_NUMBER(2078);
	INST_IINC(5, 1);
	goto label_3;
	}
label_4:;
	{
	LINE_NUMBER(2087);
	frame[5].i = (frame[1].i);
	frame[6].i = (jint(1));
	}
label_12:;
	INST_ILOAD(5);
	if ((--sp)->i <= 0) goto label_13;
	{
	LINE_NUMBER(2088);
	frame[7].i = ((jint)ARRAY_ACCESS(jint, (frame[0].o), ((frame[5].i) - (jint(1)))));
	LINE_NUMBER(2089);
	jint temp0 = (jint)SM_java_math_BigInteger_mulAdd_Array1_int_Array1_int_int_int_int_R_int(ctx, (frame[2].o), (frame[0].o), (frame[6].i), ((frame[5].i) - (jint(1))), (frame[7].i));
	frame[7].i = temp0;
	LINE_NUMBER(2090);
	jint temp1 = (jint)SM_java_math_BigInteger_addOne_Array1_int_int_int_int_R_int(ctx, (frame[2].o), ((frame[6].i) - (jint(1))), (frame[5].i), (frame[7].i));
	LINE_NUMBER(2087);
	INST_IINC(5, -1);
	INST_IINC(6, 2);
	goto label_12;
	}
label_13:;
	{
	LINE_NUMBER(2094);
	SM_java_math_BigInteger_primitiveLeftShift_Array1_int_int_int(ctx, (frame[2].o), (frame[3].i), (jint(1)));
	LINE_NUMBER(2095);
	sp[0].o = frame[2].o;
	jint temp0 = (frame[3].i) - (jint(1));
	ARRAY_ACCESS(jint, sp[0].o, temp0) = (((jint)ARRAY_ACCESS(jint, sp[0].o, temp0)) | (((jint)ARRAY_ACCESS(jint, (frame[0].o), ((frame[1].i) - (jint(1))))) & (jint(1))));
	LINE_NUMBER(2097);
	popStackFrame(ctx);
	return (frame[2].o);
	}

	popStackFrame(ctx);
}

jobject M_java_math_BigInteger_squareKaratsuba_R_java_math_BigInteger(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[10];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/math/BigInteger:squareKaratsuba", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(2108);
	sp[0].o = (jobject)((java_math_BigInteger *) NULL_CHECK((frame[0].o)))->F_mag;
	frame[1].i = (((((jarray) nullCheck(ctx, sp[0].o))->length) + (jint(1))) / (jint(2)));
	LINE_NUMBER(2110);
	sp[0].o = (jobject)M_java_math_BigInteger_getLower_int_R_java_math_BigInteger(ctx, (frame[0].o), (frame[1].i));
	frame[2].o = sp[0].o;
	LINE_NUMBER(2111);
	sp[0].o = (jobject)M_java_math_BigInteger_getUpper_int_R_java_math_BigInteger(ctx, (frame[0].o), (frame[1].i));
	frame[3].o = sp[0].o;
	LINE_NUMBER(2113);
	sp[0].o = (jobject)M_java_math_BigInteger_square_R_java_math_BigInteger(ctx, (frame[3].o));
	frame[4].o = sp[0].o;
	LINE_NUMBER(2114);
	sp[0].o = (jobject)M_java_math_BigInteger_square_R_java_math_BigInteger(ctx, (frame[2].o));
	frame[5].o = sp[0].o;
	LINE_NUMBER(2117);
	sp[0].o = (jobject)((func_java_math_BigInteger_shiftLeft_int_R_java_math_BigInteger) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_java_math_BigInteger_shiftLeft_int_R_java_math_BigInteger])(ctx, (frame[4].o), ((frame[1].i) * (32)));
	sp[1].o = (jobject)((func_java_math_BigInteger_add_java_math_BigInteger_R_java_math_BigInteger) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_java_math_BigInteger_add_java_math_BigInteger_R_java_math_BigInteger])(ctx, (frame[2].o), (frame[3].o));
	sp[1].o = (jobject)M_java_math_BigInteger_square_R_java_math_BigInteger(ctx, sp[1].o);
	sp[2].o = (jobject)((func_java_math_BigInteger_add_java_math_BigInteger_R_java_math_BigInteger) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_java_math_BigInteger_add_java_math_BigInteger_R_java_math_BigInteger])(ctx, (frame[4].o), (frame[5].o));
	sp[1].o = (jobject)((func_java_math_BigInteger_subtract_java_math_BigInteger_R_java_math_BigInteger) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_math_BigInteger_subtract_java_math_BigInteger_R_java_math_BigInteger])(ctx, sp[1].o, sp[2].o);
	sp[0].o = (jobject)((func_java_math_BigInteger_add_java_math_BigInteger_R_java_math_BigInteger) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_math_BigInteger_add_java_math_BigInteger_R_java_math_BigInteger])(ctx, sp[0].o, sp[1].o);
	sp[0].o = (jobject)((func_java_math_BigInteger_shiftLeft_int_R_java_math_BigInteger) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_math_BigInteger_shiftLeft_int_R_java_math_BigInteger])(ctx, sp[0].o, ((frame[1].i) * (32)));
	sp[0].o = (jobject)((func_java_math_BigInteger_add_java_math_BigInteger_R_java_math_BigInteger) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_math_BigInteger_add_java_math_BigInteger_R_java_math_BigInteger])(ctx, sp[0].o, (frame[5].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_java_math_BigInteger_squareToomCook3_R_java_math_BigInteger(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[22];
	auto stack = &frame[17];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/math/BigInteger:squareToomCook3", 22 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(2128);
	sp[0].o = (jobject)((java_math_BigInteger *) NULL_CHECK((frame[0].o)))->F_mag;
	frame[1].i = (((jarray) nullCheck(ctx, sp[0].o))->length);
	LINE_NUMBER(2131);
	frame[2].i = (((frame[1].i) + (jint(2))) / (jint(3)));
	LINE_NUMBER(2134);
	frame[3].i = ((frame[1].i) - ((jint(2)) * (frame[2].i)));
	LINE_NUMBER(2139);
	sp[0].o = (jobject)M_java_math_BigInteger_getToomSlice_int_int_int_int_R_java_math_BigInteger(ctx, (frame[0].o), (frame[2].i), (frame[3].i), (jint(0)), (frame[1].i));
	frame[6].o = sp[0].o;
	LINE_NUMBER(2140);
	sp[0].o = (jobject)M_java_math_BigInteger_getToomSlice_int_int_int_int_R_java_math_BigInteger(ctx, (frame[0].o), (frame[2].i), (frame[3].i), (jint(1)), (frame[1].i));
	frame[5].o = sp[0].o;
	LINE_NUMBER(2141);
	sp[0].o = (jobject)M_java_math_BigInteger_getToomSlice_int_int_int_int_R_java_math_BigInteger(ctx, (frame[0].o), (frame[2].i), (frame[3].i), (jint(2)), (frame[1].i));
	frame[4].o = sp[0].o;
	LINE_NUMBER(2144);
	sp[0].o = (jobject)M_java_math_BigInteger_square_boolean_R_java_math_BigInteger(ctx, (frame[4].o), (jint(1)));
	frame[7].o = sp[0].o;
	LINE_NUMBER(2145);
	sp[0].o = (jobject)((func_java_math_BigInteger_add_java_math_BigInteger_R_java_math_BigInteger) ((void **) nullCheck(ctx, (frame[6].o))->vtable)[VTABLE_java_math_BigInteger_add_java_math_BigInteger_R_java_math_BigInteger])(ctx, (frame[6].o), (frame[4].o));
	frame[15].o = sp[0].o;
	LINE_NUMBER(2146);
	sp[0].o = (jobject)((func_java_math_BigInteger_subtract_java_math_BigInteger_R_java_math_BigInteger) ((void **) nullCheck(ctx, (frame[15].o))->vtable)[VTABLE_java_math_BigInteger_subtract_java_math_BigInteger_R_java_math_BigInteger])(ctx, (frame[15].o), (frame[5].o));
	sp[0].o = (jobject)M_java_math_BigInteger_square_boolean_R_java_math_BigInteger(ctx, sp[0].o, (jint(1)));
	frame[10].o = sp[0].o;
	LINE_NUMBER(2147);
	sp[0].o = (jobject)((func_java_math_BigInteger_add_java_math_BigInteger_R_java_math_BigInteger) ((void **) nullCheck(ctx, (frame[15].o))->vtable)[VTABLE_java_math_BigInteger_add_java_math_BigInteger_R_java_math_BigInteger])(ctx, (frame[15].o), (frame[5].o));
	frame[15].o = sp[0].o;
	LINE_NUMBER(2148);
	sp[0].o = (jobject)M_java_math_BigInteger_square_boolean_R_java_math_BigInteger(ctx, (frame[15].o), (jint(1)));
	frame[8].o = sp[0].o;
	LINE_NUMBER(2149);
	sp[0].o = (jobject)M_java_math_BigInteger_square_boolean_R_java_math_BigInteger(ctx, (frame[6].o), (jint(1)));
	frame[11].o = sp[0].o;
	LINE_NUMBER(2150);
	sp[0].o = (jobject)((func_java_math_BigInteger_add_java_math_BigInteger_R_java_math_BigInteger) ((void **) nullCheck(ctx, (frame[15].o))->vtable)[VTABLE_java_math_BigInteger_add_java_math_BigInteger_R_java_math_BigInteger])(ctx, (frame[15].o), (frame[6].o));
	sp[0].o = (jobject)((func_java_math_BigInteger_shiftLeft_int_R_java_math_BigInteger) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_math_BigInteger_shiftLeft_int_R_java_math_BigInteger])(ctx, sp[0].o, (jint(1)));
	sp[0].o = (jobject)((func_java_math_BigInteger_subtract_java_math_BigInteger_R_java_math_BigInteger) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_math_BigInteger_subtract_java_math_BigInteger_R_java_math_BigInteger])(ctx, sp[0].o, (frame[4].o));
	sp[0].o = (jobject)M_java_math_BigInteger_square_boolean_R_java_math_BigInteger(ctx, sp[0].o, (jint(1)));
	frame[9].o = sp[0].o;
	LINE_NUMBER(2158);
	sp[0].o = (jobject)((func_java_math_BigInteger_subtract_java_math_BigInteger_R_java_math_BigInteger) ((void **) nullCheck(ctx, (frame[9].o))->vtable)[VTABLE_java_math_BigInteger_subtract_java_math_BigInteger_R_java_math_BigInteger])(ctx, (frame[9].o), (frame[10].o));
	sp[0].o = (jobject)M_java_math_BigInteger_exactDivideBy3_R_java_math_BigInteger(ctx, sp[0].o);
	frame[13].o = sp[0].o;
	LINE_NUMBER(2159);
	sp[0].o = (jobject)((func_java_math_BigInteger_subtract_java_math_BigInteger_R_java_math_BigInteger) ((void **) nullCheck(ctx, (frame[8].o))->vtable)[VTABLE_java_math_BigInteger_subtract_java_math_BigInteger_R_java_math_BigInteger])(ctx, (frame[8].o), (frame[10].o));
	sp[0].o = (jobject)((func_java_math_BigInteger_shiftRight_int_R_java_math_BigInteger) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_math_BigInteger_shiftRight_int_R_java_math_BigInteger])(ctx, sp[0].o, (jint(1)));
	frame[14].o = sp[0].o;
	LINE_NUMBER(2160);
	sp[0].o = (jobject)((func_java_math_BigInteger_subtract_java_math_BigInteger_R_java_math_BigInteger) ((void **) nullCheck(ctx, (frame[8].o))->vtable)[VTABLE_java_math_BigInteger_subtract_java_math_BigInteger_R_java_math_BigInteger])(ctx, (frame[8].o), (frame[7].o));
	frame[12].o = sp[0].o;
	LINE_NUMBER(2161);
	sp[0].o = (jobject)((func_java_math_BigInteger_subtract_java_math_BigInteger_R_java_math_BigInteger) ((void **) nullCheck(ctx, (frame[13].o))->vtable)[VTABLE_java_math_BigInteger_subtract_java_math_BigInteger_R_java_math_BigInteger])(ctx, (frame[13].o), (frame[12].o));
	sp[0].o = (jobject)((func_java_math_BigInteger_shiftRight_int_R_java_math_BigInteger) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_math_BigInteger_shiftRight_int_R_java_math_BigInteger])(ctx, sp[0].o, (jint(1)));
	frame[13].o = sp[0].o;
	LINE_NUMBER(2162);
	sp[0].o = (jobject)((func_java_math_BigInteger_subtract_java_math_BigInteger_R_java_math_BigInteger) ((void **) nullCheck(ctx, (frame[12].o))->vtable)[VTABLE_java_math_BigInteger_subtract_java_math_BigInteger_R_java_math_BigInteger])(ctx, (frame[12].o), (frame[14].o));
	sp[0].o = (jobject)((func_java_math_BigInteger_subtract_java_math_BigInteger_R_java_math_BigInteger) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_math_BigInteger_subtract_java_math_BigInteger_R_java_math_BigInteger])(ctx, sp[0].o, (frame[11].o));
	frame[12].o = sp[0].o;
	LINE_NUMBER(2163);
	sp[0].o = frame[13].o;
	sp[1].o = (jobject)((func_java_math_BigInteger_shiftLeft_int_R_java_math_BigInteger) ((void **) nullCheck(ctx, (frame[11].o))->vtable)[VTABLE_java_math_BigInteger_shiftLeft_int_R_java_math_BigInteger])(ctx, (frame[11].o), (jint(1)));
	sp[0].o = (jobject)((func_java_math_BigInteger_subtract_java_math_BigInteger_R_java_math_BigInteger) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_math_BigInteger_subtract_java_math_BigInteger_R_java_math_BigInteger])(ctx, sp[0].o, sp[1].o);
	frame[13].o = sp[0].o;
	LINE_NUMBER(2164);
	sp[0].o = (jobject)((func_java_math_BigInteger_subtract_java_math_BigInteger_R_java_math_BigInteger) ((void **) nullCheck(ctx, (frame[14].o))->vtable)[VTABLE_java_math_BigInteger_subtract_java_math_BigInteger_R_java_math_BigInteger])(ctx, (frame[14].o), (frame[13].o));
	frame[14].o = sp[0].o;
	LINE_NUMBER(2167);
	frame[16].i = ((frame[2].i) * (32));
	LINE_NUMBER(2169);
	sp[0].o = (jobject)((func_java_math_BigInteger_shiftLeft_int_R_java_math_BigInteger) ((void **) nullCheck(ctx, (frame[11].o))->vtable)[VTABLE_java_math_BigInteger_shiftLeft_int_R_java_math_BigInteger])(ctx, (frame[11].o), (frame[16].i));
	sp[0].o = (jobject)((func_java_math_BigInteger_add_java_math_BigInteger_R_java_math_BigInteger) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_math_BigInteger_add_java_math_BigInteger_R_java_math_BigInteger])(ctx, sp[0].o, (frame[13].o));
	sp[0].o = (jobject)((func_java_math_BigInteger_shiftLeft_int_R_java_math_BigInteger) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_math_BigInteger_shiftLeft_int_R_java_math_BigInteger])(ctx, sp[0].o, (frame[16].i));
	sp[0].o = (jobject)((func_java_math_BigInteger_add_java_math_BigInteger_R_java_math_BigInteger) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_math_BigInteger_add_java_math_BigInteger_R_java_math_BigInteger])(ctx, sp[0].o, (frame[12].o));
	sp[0].o = (jobject)((func_java_math_BigInteger_shiftLeft_int_R_java_math_BigInteger) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_math_BigInteger_shiftLeft_int_R_java_math_BigInteger])(ctx, sp[0].o, (frame[16].i));
	sp[0].o = (jobject)((func_java_math_BigInteger_add_java_math_BigInteger_R_java_math_BigInteger) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_math_BigInteger_add_java_math_BigInteger_R_java_math_BigInteger])(ctx, sp[0].o, (frame[14].o));
	sp[0].o = (jobject)((func_java_math_BigInteger_shiftLeft_int_R_java_math_BigInteger) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_math_BigInteger_shiftLeft_int_R_java_math_BigInteger])(ctx, sp[0].o, (frame[16].i));
	sp[0].o = (jobject)((func_java_math_BigInteger_add_java_math_BigInteger_R_java_math_BigInteger) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_math_BigInteger_add_java_math_BigInteger_R_java_math_BigInteger])(ctx, sp[0].o, (frame[7].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_java_math_BigInteger_divide_java_math_BigInteger_R_java_math_BigInteger(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/math/BigInteger:divide", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(2182);
	sp[0].o = (jobject)((java_math_BigInteger *) NULL_CHECK((frame[1].o)))->F_mag;
	if ((((jarray) nullCheck(ctx, sp[0].o))->length) < (80)) goto label_1;
	}
	{
	sp[0].o = (jobject)((java_math_BigInteger *) NULL_CHECK((frame[0].o)))->F_mag;
	jint temp0 = ((jarray) nullCheck(ctx, sp[0].o))->length;
	sp[0].o = (jobject)((java_math_BigInteger *) NULL_CHECK((frame[1].o)))->F_mag;
	if ((temp0 - (((jarray) nullCheck(ctx, sp[0].o))->length)) >= (40)) goto label_2;
	}
label_1:;
	{
	LINE_NUMBER(2184);
	sp[0].o = (jobject)M_java_math_BigInteger_divideKnuth_java_math_BigInteger_R_java_math_BigInteger(ctx, (frame[0].o), (frame[1].o));
	popStackFrame(ctx);
	return sp[0].o;
	}
label_2:;
	{
	LINE_NUMBER(2186);
	sp[0].o = (jobject)M_java_math_BigInteger_divideBurnikelZiegler_java_math_BigInteger_R_java_math_BigInteger(ctx, (frame[0].o), (frame[1].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_java_math_BigInteger_divideKnuth_java_math_BigInteger_R_java_math_BigInteger(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/math/BigInteger:divideKnuth", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(2199);
	clinit_java_math_MutableBigInteger(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_math_MutableBigInteger);
	init_java_math_MutableBigInteger(ctx, sp[0].o);
	frame[2].o = sp[0].o;
	LINE_NUMBER(2200);
	clinit_java_math_MutableBigInteger(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_math_MutableBigInteger);
	sp[1].o = (jobject)((java_math_BigInteger *) NULL_CHECK((frame[0].o)))->F_mag;
	init_java_math_MutableBigInteger_Array1_int(ctx, sp[0].o, sp[1].o);
	frame[3].o = sp[0].o;
	LINE_NUMBER(2201);
	clinit_java_math_MutableBigInteger(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_math_MutableBigInteger);
	sp[1].o = (jobject)((java_math_BigInteger *) NULL_CHECK((frame[1].o)))->F_mag;
	init_java_math_MutableBigInteger_Array1_int(ctx, sp[0].o, sp[1].o);
	frame[4].o = sp[0].o;
	LINE_NUMBER(2203);
	sp[0].o = (jobject)((func_java_math_MutableBigInteger_divideKnuth_java_math_MutableBigInteger_java_math_MutableBigInteger_boolean_R_java_math_MutableBigInteger) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_java_math_MutableBigInteger_divideKnuth_java_math_MutableBigInteger_java_math_MutableBigInteger_boolean_R_java_math_MutableBigInteger])(ctx, (frame[3].o), (frame[4].o), (frame[2].o), (jint(0)));
	LINE_NUMBER(2204);
	sp[0].o = (jobject)((func_java_math_MutableBigInteger_toBigInteger_int_R_java_math_BigInteger) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_java_math_MutableBigInteger_toBigInteger_int_R_java_math_BigInteger])(ctx, (frame[2].o), (((jint)((java_math_BigInteger *) NULL_CHECK((frame[0].o)))->F_signum) * ((jint)((java_math_BigInteger *) NULL_CHECK((frame[1].o)))->F_signum)));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_java_math_BigInteger_divideAndRemainder_java_math_BigInteger_R_Array1_java_math_BigInteger(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/math/BigInteger:divideAndRemainder", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(2219);
	sp[0].o = (jobject)((java_math_BigInteger *) NULL_CHECK((frame[1].o)))->F_mag;
	if ((((jarray) nullCheck(ctx, sp[0].o))->length) < (80)) goto label_1;
	}
	{
	sp[0].o = (jobject)((java_math_BigInteger *) NULL_CHECK((frame[0].o)))->F_mag;
	jint temp0 = ((jarray) nullCheck(ctx, sp[0].o))->length;
	sp[0].o = (jobject)((java_math_BigInteger *) NULL_CHECK((frame[1].o)))->F_mag;
	if ((temp0 - (((jarray) nullCheck(ctx, sp[0].o))->length)) >= (40)) goto label_2;
	}
label_1:;
	{
	LINE_NUMBER(2221);
	sp[0].o = (jobject)M_java_math_BigInteger_divideAndRemainderKnuth_java_math_BigInteger_R_Array1_java_math_BigInteger(ctx, (frame[0].o), (frame[1].o));
	popStackFrame(ctx);
	return sp[0].o;
	}
label_2:;
	{
	LINE_NUMBER(2223);
	sp[0].o = (jobject)M_java_math_BigInteger_divideAndRemainderBurnikelZiegler_java_math_BigInteger_R_Array1_java_math_BigInteger(ctx, (frame[0].o), (frame[1].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_java_math_BigInteger_divideAndRemainderKnuth_java_math_BigInteger_R_Array1_java_math_BigInteger(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[12];
	auto stack = &frame[7];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/math/BigInteger:divideAndRemainderKnuth", 12 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(2229);
	sp[0].o = (jobject)createArray(ctx, &class_java_math_BigInteger, (jint(2)));
	frame[2].o = sp[0].o;
	LINE_NUMBER(2230);
	clinit_java_math_MutableBigInteger(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_math_MutableBigInteger);
	init_java_math_MutableBigInteger(ctx, sp[0].o);
	frame[3].o = sp[0].o;
	LINE_NUMBER(2231);
	clinit_java_math_MutableBigInteger(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_math_MutableBigInteger);
	sp[1].o = (jobject)((java_math_BigInteger *) NULL_CHECK((frame[0].o)))->F_mag;
	init_java_math_MutableBigInteger_Array1_int(ctx, sp[0].o, sp[1].o);
	frame[4].o = sp[0].o;
	LINE_NUMBER(2232);
	clinit_java_math_MutableBigInteger(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_math_MutableBigInteger);
	sp[1].o = (jobject)((java_math_BigInteger *) NULL_CHECK((frame[1].o)))->F_mag;
	init_java_math_MutableBigInteger_Array1_int(ctx, sp[0].o, sp[1].o);
	frame[5].o = sp[0].o;
	LINE_NUMBER(2233);
	sp[0].o = (jobject)((func_java_math_MutableBigInteger_divideKnuth_java_math_MutableBigInteger_java_math_MutableBigInteger_R_java_math_MutableBigInteger) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_java_math_MutableBigInteger_divideKnuth_java_math_MutableBigInteger_java_math_MutableBigInteger_R_java_math_MutableBigInteger])(ctx, (frame[4].o), (frame[5].o), (frame[3].o));
	frame[6].o = sp[0].o;
	LINE_NUMBER(2234);
	sp[0].o = frame[2].o;
	jint temp0 = jint(0);
	sp[1].o = frame[3].o;
	jobject temp1 = sp[1].o;
	sp[1].i = temp0;
	sp[2].o = temp1;
	sp += 3;
	if (((jint)((java_math_BigInteger *) NULL_CHECK((frame[0].o)))->F_signum) != ((jint)((java_math_BigInteger *) NULL_CHECK((frame[1].o)))->F_signum)) goto label_6;
	}
	INST_ICONST(1);
	goto label_7;
label_6:;
	INST_ICONST(-1);
label_7:;
	{
	sp -= 4;
	sp[2].o = (jobject)((func_java_math_MutableBigInteger_toBigInteger_int_R_java_math_BigInteger) ((void **) nullCheck(ctx, sp[2].o)->vtable)[VTABLE_java_math_MutableBigInteger_toBigInteger_int_R_java_math_BigInteger])(ctx, sp[2].o, sp[3].i);
	ARRAY_ACCESS(jobject, sp[0].o, sp[1].i) = sp[2].o;
	LINE_NUMBER(2235);
	sp[0].o = frame[2].o;
	jint temp0 = jint(1);
	sp[1].o = (jobject)((func_java_math_MutableBigInteger_toBigInteger_int_R_java_math_BigInteger) ((void **) nullCheck(ctx, (frame[6].o))->vtable)[VTABLE_java_math_MutableBigInteger_toBigInteger_int_R_java_math_BigInteger])(ctx, (frame[6].o), ((jint)((java_math_BigInteger *) NULL_CHECK((frame[0].o)))->F_signum));
	ARRAY_ACCESS(jobject, sp[0].o, temp0) = sp[1].o;
	LINE_NUMBER(2236);
	popStackFrame(ctx);
	return (frame[2].o);
	}

	popStackFrame(ctx);
}

jobject M_java_math_BigInteger_remainder_java_math_BigInteger_R_java_math_BigInteger(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/math/BigInteger:remainder", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(2248);
	sp[0].o = (jobject)((java_math_BigInteger *) NULL_CHECK((frame[1].o)))->F_mag;
	if ((((jarray) nullCheck(ctx, sp[0].o))->length) < (80)) goto label_1;
	}
	{
	sp[0].o = (jobject)((java_math_BigInteger *) NULL_CHECK((frame[0].o)))->F_mag;
	jint temp0 = ((jarray) nullCheck(ctx, sp[0].o))->length;
	sp[0].o = (jobject)((java_math_BigInteger *) NULL_CHECK((frame[1].o)))->F_mag;
	if ((temp0 - (((jarray) nullCheck(ctx, sp[0].o))->length)) >= (40)) goto label_2;
	}
label_1:;
	{
	LINE_NUMBER(2250);
	sp[0].o = (jobject)M_java_math_BigInteger_remainderKnuth_java_math_BigInteger_R_java_math_BigInteger(ctx, (frame[0].o), (frame[1].o));
	popStackFrame(ctx);
	return sp[0].o;
	}
label_2:;
	{
	LINE_NUMBER(2252);
	sp[0].o = (jobject)M_java_math_BigInteger_remainderBurnikelZiegler_java_math_BigInteger_R_java_math_BigInteger(ctx, (frame[0].o), (frame[1].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_java_math_BigInteger_remainderKnuth_java_math_BigInteger_R_java_math_BigInteger(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/math/BigInteger:remainderKnuth", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(2258);
	clinit_java_math_MutableBigInteger(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_math_MutableBigInteger);
	init_java_math_MutableBigInteger(ctx, sp[0].o);
	frame[2].o = sp[0].o;
	LINE_NUMBER(2259);
	clinit_java_math_MutableBigInteger(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_math_MutableBigInteger);
	sp[1].o = (jobject)((java_math_BigInteger *) NULL_CHECK((frame[0].o)))->F_mag;
	init_java_math_MutableBigInteger_Array1_int(ctx, sp[0].o, sp[1].o);
	frame[3].o = sp[0].o;
	LINE_NUMBER(2260);
	clinit_java_math_MutableBigInteger(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_math_MutableBigInteger);
	sp[1].o = (jobject)((java_math_BigInteger *) NULL_CHECK((frame[1].o)))->F_mag;
	init_java_math_MutableBigInteger_Array1_int(ctx, sp[0].o, sp[1].o);
	frame[4].o = sp[0].o;
	LINE_NUMBER(2262);
	sp[0].o = (jobject)((func_java_math_MutableBigInteger_divideKnuth_java_math_MutableBigInteger_java_math_MutableBigInteger_R_java_math_MutableBigInteger) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_java_math_MutableBigInteger_divideKnuth_java_math_MutableBigInteger_java_math_MutableBigInteger_R_java_math_MutableBigInteger])(ctx, (frame[3].o), (frame[4].o), (frame[2].o));
	sp[0].o = (jobject)((func_java_math_MutableBigInteger_toBigInteger_int_R_java_math_BigInteger) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_math_MutableBigInteger_toBigInteger_int_R_java_math_BigInteger])(ctx, sp[0].o, ((jint)((java_math_BigInteger *) NULL_CHECK((frame[0].o)))->F_signum));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_java_math_BigInteger_divideBurnikelZiegler_java_math_BigInteger_R_java_math_BigInteger(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/math/BigInteger:divideBurnikelZiegler", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(2271);
	sp[0].o = (jobject)M_java_math_BigInteger_divideAndRemainderBurnikelZiegler_java_math_BigInteger_R_Array1_java_math_BigInteger(ctx, (frame[0].o), (frame[1].o));
	popStackFrame(ctx);
	return ((jobject)ARRAY_ACCESS(jobject, sp[0].o, (jint(0))));
	}

	popStackFrame(ctx);
}

jobject M_java_math_BigInteger_remainderBurnikelZiegler_java_math_BigInteger_R_java_math_BigInteger(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/math/BigInteger:remainderBurnikelZiegler", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(2280);
	sp[0].o = (jobject)M_java_math_BigInteger_divideAndRemainderBurnikelZiegler_java_math_BigInteger_R_Array1_java_math_BigInteger(ctx, (frame[0].o), (frame[1].o));
	popStackFrame(ctx);
	return ((jobject)ARRAY_ACCESS(jobject, sp[0].o, (jint(1))));
	}

	popStackFrame(ctx);
}

jobject M_java_math_BigInteger_divideAndRemainderBurnikelZiegler_java_math_BigInteger_R_Array1_java_math_BigInteger(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[10];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/math/BigInteger:divideAndRemainderBurnikelZiegler", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(2290);
	clinit_java_math_MutableBigInteger(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_math_MutableBigInteger);
	init_java_math_MutableBigInteger(ctx, sp[0].o);
	frame[2].o = sp[0].o;
	LINE_NUMBER(2291);
	clinit_java_math_MutableBigInteger(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_math_MutableBigInteger);
	init_java_math_MutableBigInteger_java_math_BigInteger(ctx, sp[0].o, (frame[0].o));
	clinit_java_math_MutableBigInteger(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_math_MutableBigInteger);
	init_java_math_MutableBigInteger_java_math_BigInteger(ctx, sp[1].o, (frame[1].o));
	sp[0].o = (jobject)((func_java_math_MutableBigInteger_divideAndRemainderBurnikelZiegler_java_math_MutableBigInteger_java_math_MutableBigInteger_R_java_math_MutableBigInteger) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_math_MutableBigInteger_divideAndRemainderBurnikelZiegler_java_math_MutableBigInteger_java_math_MutableBigInteger_R_java_math_MutableBigInteger])(ctx, sp[0].o, sp[1].o, (frame[2].o));
	frame[3].o = sp[0].o;
	LINE_NUMBER(2292);
	jint temp0 = (jint)((func_java_math_MutableBigInteger_isZero_R_boolean) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_java_math_MutableBigInteger_isZero_R_boolean])(ctx, (frame[2].o));
	if (temp0 == 0) goto label_3;
	}
	clinit_java_math_BigInteger(ctx);
	(sp++)->o = SF_java_math_BigInteger_ZERO;
	goto label_4;
label_3:;
	{
	sp[0].o = (jobject)((func_java_math_MutableBigInteger_toBigInteger_int_R_java_math_BigInteger) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_java_math_MutableBigInteger_toBigInteger_int_R_java_math_BigInteger])(ctx, (frame[2].o), (((jint)((java_math_BigInteger *) NULL_CHECK((frame[0].o)))->F_signum) * ((jint)((java_math_BigInteger *) NULL_CHECK((frame[1].o)))->F_signum)));
	sp += 1;
	}
label_4:;
	{
	sp -= 1;
	frame[4].o = sp[0].o;
	LINE_NUMBER(2293);
	jint temp0 = (jint)((func_java_math_MutableBigInteger_isZero_R_boolean) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_java_math_MutableBigInteger_isZero_R_boolean])(ctx, (frame[3].o));
	if (temp0 == 0) goto label_6;
	}
	clinit_java_math_BigInteger(ctx);
	(sp++)->o = SF_java_math_BigInteger_ZERO;
	goto label_7;
label_6:;
	{
	sp[0].o = (jobject)((func_java_math_MutableBigInteger_toBigInteger_int_R_java_math_BigInteger) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_java_math_MutableBigInteger_toBigInteger_int_R_java_math_BigInteger])(ctx, (frame[3].o), ((jint)((java_math_BigInteger *) NULL_CHECK((frame[0].o)))->F_signum));
	sp += 1;
	}
label_7:;
	{
	sp -= 1;
	frame[5].o = sp[0].o;
	LINE_NUMBER(2294);
	sp[0].o = (jobject)createArray(ctx, &class_java_math_BigInteger, (jint(2)));
	ARRAY_ACCESS(jobject, sp[0].o, (jint(0))) = (frame[4].o);
	ARRAY_ACCESS(jobject, sp[0].o, (jint(1))) = (frame[5].o);
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_java_math_BigInteger_pow_int_R_java_math_BigInteger(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[20];
	auto stack = &frame[16];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/math/BigInteger:pow", 20 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(2307);
	if ((frame[1].i) >= 0) goto label_1;
	}
	{
	LINE_NUMBER(2308);
	clinit_java_lang_ArithmeticException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_ArithmeticException);
	init_java_lang_ArithmeticException_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"Negative exponent"_j))));
	throwException(ctx, sp[0].o);	}
label_1:;
	{
	LINE_NUMBER(2310);
	if (((jint)((java_math_BigInteger *) NULL_CHECK((frame[0].o)))->F_signum) != 0) goto label_3;
	}
	{
	LINE_NUMBER(2311);
	if ((frame[1].i) != 0) goto label_5;
	}
	clinit_java_math_BigInteger(ctx);
	(sp++)->o = SF_java_math_BigInteger_ONE;
	goto label_6;
label_5:;
	INST_ALOAD(0);
label_6:;
	popStackFrame(ctx);
	INST_ARETURN();
label_3:;
	{
	LINE_NUMBER(2314);
	sp[0].o = (jobject)((func_java_math_BigInteger_abs_R_java_math_BigInteger) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_math_BigInteger_abs_R_java_math_BigInteger])(ctx, (frame[0].o));
	frame[2].o = sp[0].o;
	LINE_NUMBER(2320);
	jint temp0 = (jint)((func_java_math_BigInteger_getLowestSetBit_R_int) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_java_math_BigInteger_getLowestSetBit_R_int])(ctx, (frame[2].o));
	frame[3].i = temp0;
	LINE_NUMBER(2321);
	frame[4].l = ((jlong((frame[3].i))) * (jlong((frame[1].i))));
	LINE_NUMBER(2322);
	if ((longCompare((frame[4].l), (jlong(2147483647ll)))) <= 0) goto label_10;
	}
	LINE_NUMBER(2323);
	SM_java_math_BigInteger_reportOverflow(ctx);
label_10:;
	{
	LINE_NUMBER(2325);
	frame[6].i = (jint((frame[4].l)));
	LINE_NUMBER(2330);
	if ((frame[3].i) <= 0) goto label_13;
	}
	{
	LINE_NUMBER(2331);
	sp[0].o = (jobject)((func_java_math_BigInteger_shiftRight_int_R_java_math_BigInteger) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_java_math_BigInteger_shiftRight_int_R_java_math_BigInteger])(ctx, (frame[2].o), (frame[3].i));
	frame[2].o = sp[0].o;
	LINE_NUMBER(2332);
	jint temp0 = (jint)((func_java_math_BigInteger_bitLength_R_int) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_java_math_BigInteger_bitLength_R_int])(ctx, (frame[2].o));
	frame[7].i = temp0;
	LINE_NUMBER(2333);
	if ((frame[7].i) != (jint(1))) goto label_17;
	}
	{
	LINE_NUMBER(2334);
	if (((jint)((java_math_BigInteger *) NULL_CHECK((frame[0].o)))->F_signum) >= 0) goto label_19;
	}
	{
	if (((frame[1].i) & (jint(1))) != (jint(1))) goto label_19;
	}
	{
	LINE_NUMBER(2335);
	clinit_java_math_BigInteger(ctx);
	sp[0].o = (jobject)SF_java_math_BigInteger_NEGATIVE_ONE;
	sp[0].o = (jobject)((func_java_math_BigInteger_shiftLeft_int_R_java_math_BigInteger) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_math_BigInteger_shiftLeft_int_R_java_math_BigInteger])(ctx, sp[0].o, (frame[6].i));
	popStackFrame(ctx);
	return sp[0].o;
	}
label_19:;
	{
	LINE_NUMBER(2337);
	clinit_java_math_BigInteger(ctx);
	sp[0].o = (jobject)SF_java_math_BigInteger_ONE;
	sp[0].o = (jobject)((func_java_math_BigInteger_shiftLeft_int_R_java_math_BigInteger) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_math_BigInteger_shiftLeft_int_R_java_math_BigInteger])(ctx, sp[0].o, (frame[6].i));
	popStackFrame(ctx);
	return sp[0].o;
	}
label_13:;
	{
	LINE_NUMBER(2341);
	jint temp0 = (jint)((func_java_math_BigInteger_bitLength_R_int) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_java_math_BigInteger_bitLength_R_int])(ctx, (frame[2].o));
	frame[7].i = temp0;
	LINE_NUMBER(2342);
	if ((frame[7].i) != (jint(1))) goto label_17;
	}
	{
	LINE_NUMBER(2343);
	if (((jint)((java_math_BigInteger *) NULL_CHECK((frame[0].o)))->F_signum) >= 0) goto label_23;
	}
	{
	if (((frame[1].i) & (jint(1))) != (jint(1))) goto label_23;
	}
	{
	LINE_NUMBER(2344);
	clinit_java_math_BigInteger(ctx);
	sp[0].o = (jobject)SF_java_math_BigInteger_NEGATIVE_ONE;
	popStackFrame(ctx);
	return sp[0].o;
	}
label_23:;
	{
	LINE_NUMBER(2346);
	clinit_java_math_BigInteger(ctx);
	sp[0].o = (jobject)SF_java_math_BigInteger_ONE;
	popStackFrame(ctx);
	return sp[0].o;
	}
label_17:;
	{
	LINE_NUMBER(2354);
	frame[8].l = ((jlong((frame[7].i))) * (jlong((frame[1].i))));
	LINE_NUMBER(2358);
	sp[0].o = (jobject)((java_math_BigInteger *) NULL_CHECK((frame[2].o)))->F_mag;
	if ((((jarray) nullCheck(ctx, sp[0].o))->length) != (jint(1))) goto label_26;
	}
	{
	if ((longCompare((frame[8].l), (jlong(62ll)))) > 0) goto label_26;
	}
	{
	LINE_NUMBER(2360);
	if (((jint)((java_math_BigInteger *) NULL_CHECK((frame[0].o)))->F_signum) >= 0) goto label_28;
	}
	{
	if (((frame[1].i) & (jint(1))) != (jint(1))) goto label_28;
	}
	INST_ICONST(-1);
	goto label_29;
label_28:;
	INST_ICONST(1);
label_29:;
	{
	sp -= 1;
	frame[10].i = sp[0].i;
	LINE_NUMBER(2361);
	frame[11].l = (jlong(1));
	LINE_NUMBER(2362);
	sp[0].o = (jobject)((java_math_BigInteger *) NULL_CHECK((frame[2].o)))->F_mag;
	frame[13].l = ((jlong(((jint)ARRAY_ACCESS(jint, sp[0].o, (jint(0)))))) & (jlong(4294967295ll)));
	LINE_NUMBER(2364);
	frame[15].i = (frame[1].i);
	}
label_33:;
	{
	LINE_NUMBER(2367);
	if ((frame[15].i) == 0) goto label_34;
	}
	{
	LINE_NUMBER(2368);
	if (((frame[15].i) & (jint(1))) != (jint(1))) goto label_36;
	}
	{
	LINE_NUMBER(2369);
	frame[11].l = ((frame[11].l) * (frame[13].l));
	}
label_36:;
	{
	LINE_NUMBER(2372);
	jint temp0 = bit_cast<jint>(bit_cast<uint32_t>((frame[15].i)) >> (jint(1)));
	frame[15].i = temp0;
	if (temp0 == 0) goto label_33;
	}
	{
	LINE_NUMBER(2373);
	frame[13].l = ((frame[13].l) * (frame[13].l));
	goto label_33;
	}
label_34:;
	{
	LINE_NUMBER(2378);
	if ((frame[3].i) <= 0) goto label_39;
	}
	{
	LINE_NUMBER(2379);
	if ((longCompare(((jlong((frame[6].i))) + (frame[8].l)), (jlong(62ll)))) > 0) goto label_41;
	}
	{
	LINE_NUMBER(2380);
	sp[0].o = (jobject)SM_java_math_BigInteger_valueOf_long_R_java_math_BigInteger(ctx, (((frame[11].l) << (frame[6].i)) * (jlong((frame[10].i)))));
	popStackFrame(ctx);
	return sp[0].o;
	}
label_41:;
	{
	LINE_NUMBER(2382);
	sp[0].o = (jobject)SM_java_math_BigInteger_valueOf_long_R_java_math_BigInteger(ctx, ((frame[11].l) * (jlong((frame[10].i)))));
	sp[0].o = (jobject)((func_java_math_BigInteger_shiftLeft_int_R_java_math_BigInteger) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_math_BigInteger_shiftLeft_int_R_java_math_BigInteger])(ctx, sp[0].o, (frame[6].i));
	popStackFrame(ctx);
	return sp[0].o;
	}
label_39:;
	{
	LINE_NUMBER(2385);
	sp[0].o = (jobject)SM_java_math_BigInteger_valueOf_long_R_java_math_BigInteger(ctx, ((frame[11].l) * (jlong((frame[10].i)))));
	popStackFrame(ctx);
	return sp[0].o;
	}
label_26:;
	{
	LINE_NUMBER(2388);
	jint temp0 = (jint)((func_java_math_BigInteger_bitLength_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_math_BigInteger_bitLength_R_int])(ctx, (frame[0].o));
	if ((longCompare((((jlong(temp0)) * (jlong((frame[1].i)))) / (jlong(32ll))), (jlong(67108864ll)))) <= 0) goto label_43;
	}
	LINE_NUMBER(2389);
	SM_java_math_BigInteger_reportOverflow(ctx);
label_43:;
	{
	LINE_NUMBER(2395);
	clinit_java_math_BigInteger(ctx);
	sp[0].o = (jobject)SF_java_math_BigInteger_ONE;
	frame[10].o = sp[0].o;
	LINE_NUMBER(2397);
	frame[11].i = (frame[1].i);
	}
label_46:;
	{
	LINE_NUMBER(2399);
	if ((frame[11].i) == 0) goto label_47;
	}
	{
	LINE_NUMBER(2400);
	if (((frame[11].i) & (jint(1))) != (jint(1))) goto label_49;
	}
	{
	LINE_NUMBER(2401);
	sp[0].o = (jobject)((func_java_math_BigInteger_multiply_java_math_BigInteger_R_java_math_BigInteger) ((void **) nullCheck(ctx, (frame[10].o))->vtable)[VTABLE_java_math_BigInteger_multiply_java_math_BigInteger_R_java_math_BigInteger])(ctx, (frame[10].o), (frame[2].o));
	frame[10].o = sp[0].o;
	}
label_49:;
	{
	LINE_NUMBER(2404);
	jint temp0 = bit_cast<jint>(bit_cast<uint32_t>((frame[11].i)) >> (jint(1)));
	frame[11].i = temp0;
	if (temp0 == 0) goto label_46;
	}
	{
	LINE_NUMBER(2405);
	sp[0].o = (jobject)M_java_math_BigInteger_square_R_java_math_BigInteger(ctx, (frame[2].o));
	frame[2].o = sp[0].o;
	goto label_46;
	}
label_47:;
	{
	LINE_NUMBER(2410);
	if ((frame[3].i) <= 0) goto label_52;
	}
	{
	LINE_NUMBER(2411);
	sp[0].o = (jobject)((func_java_math_BigInteger_shiftLeft_int_R_java_math_BigInteger) ((void **) nullCheck(ctx, (frame[10].o))->vtable)[VTABLE_java_math_BigInteger_shiftLeft_int_R_java_math_BigInteger])(ctx, (frame[10].o), (frame[6].i));
	frame[10].o = sp[0].o;
	}
label_52:;
	{
	LINE_NUMBER(2414);
	if (((jint)((java_math_BigInteger *) NULL_CHECK((frame[0].o)))->F_signum) >= 0) goto label_54;
	}
	{
	if (((frame[1].i) & (jint(1))) != (jint(1))) goto label_54;
	}
	{
	LINE_NUMBER(2415);
	sp[0].o = (jobject)((func_java_math_BigInteger_negate_R_java_math_BigInteger) ((void **) nullCheck(ctx, (frame[10].o))->vtable)[VTABLE_java_math_BigInteger_negate_R_java_math_BigInteger])(ctx, (frame[10].o));
	popStackFrame(ctx);
	return sp[0].o;
	}
label_54:;
	{
	LINE_NUMBER(2417);
	popStackFrame(ctx);
	return (frame[10].o);
	}

	popStackFrame(ctx);
}

jobject M_java_math_BigInteger_gcd_java_math_BigInteger_R_java_math_BigInteger(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/math/BigInteger:gcd", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(2431);
	if (((jint)((java_math_BigInteger *) NULL_CHECK((frame[1].o)))->F_signum) != 0) goto label_1;
	}
	{
	LINE_NUMBER(2432);
	sp[0].o = (jobject)((func_java_math_BigInteger_abs_R_java_math_BigInteger) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_math_BigInteger_abs_R_java_math_BigInteger])(ctx, (frame[0].o));
	popStackFrame(ctx);
	return sp[0].o;
	}
label_1:;
	{
	LINE_NUMBER(2433);
	if (((jint)((java_math_BigInteger *) NULL_CHECK((frame[0].o)))->F_signum) != 0) goto label_3;
	}
	{
	LINE_NUMBER(2434);
	sp[0].o = (jobject)((func_java_math_BigInteger_abs_R_java_math_BigInteger) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_math_BigInteger_abs_R_java_math_BigInteger])(ctx, (frame[1].o));
	popStackFrame(ctx);
	return sp[0].o;
	}
label_3:;
	{
	LINE_NUMBER(2436);
	clinit_java_math_MutableBigInteger(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_math_MutableBigInteger);
	init_java_math_MutableBigInteger_java_math_BigInteger(ctx, sp[0].o, (frame[0].o));
	frame[2].o = sp[0].o;
	LINE_NUMBER(2437);
	clinit_java_math_MutableBigInteger(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_math_MutableBigInteger);
	init_java_math_MutableBigInteger_java_math_BigInteger(ctx, sp[0].o, (frame[1].o));
	frame[3].o = sp[0].o;
	LINE_NUMBER(2439);
	sp[0].o = (jobject)((func_java_math_MutableBigInteger_hybridGCD_java_math_MutableBigInteger_R_java_math_MutableBigInteger) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_java_math_MutableBigInteger_hybridGCD_java_math_MutableBigInteger_R_java_math_MutableBigInteger])(ctx, (frame[2].o), (frame[3].o));
	frame[4].o = sp[0].o;
	LINE_NUMBER(2441);
	sp[0].o = (jobject)((func_java_math_MutableBigInteger_toBigInteger_int_R_java_math_BigInteger) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_java_math_MutableBigInteger_toBigInteger_int_R_java_math_BigInteger])(ctx, (frame[4].o), (jint(1)));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jint SM_java_math_BigInteger_bitLengthForInt_int_R_int(jcontext ctx, jint param0) {
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/math/BigInteger:bitLengthForInt", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_math_BigInteger(ctx);
	frame[0].i = param0;
	{
	LINE_NUMBER(2448);
	jint temp0 = 32;
	jint temp1 = (jint)SM_java_lang_Integer_numberOfLeadingZeros_int_R_int(ctx, (frame[0].i));
	popStackFrame(ctx);
	return (temp0 - temp1);
	}

	popStackFrame(ctx);
}

jobject SM_java_math_BigInteger_leftShift_Array1_int_int_int_R_Array1_int(jcontext ctx, jobject param0, jint param1, jint param2) {
	jtype frame[12];
	auto stack = &frame[7];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/math/BigInteger:leftShift", 12 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_math_BigInteger(ctx);
	frame[0].o = param0;
	frame[1].i = param1;
	frame[2].i = param2;
	{
	LINE_NUMBER(2456);
	frame[3].i = (bit_cast<jint>(bit_cast<uint32_t>((frame[2].i)) >> (jint(5))));
	LINE_NUMBER(2457);
	frame[4].i = ((frame[2].i) & (31));
	LINE_NUMBER(2458);
	jint temp0 = (jint)SM_java_math_BigInteger_bitLengthForInt_int_R_int(ctx, ((jint)ARRAY_ACCESS(jint, (frame[0].o), (jint(0)))));
	frame[5].i = temp0;
	LINE_NUMBER(2461);
	if ((frame[2].i) > ((32) - (frame[5].i))) goto label_4;
	}
	{
	LINE_NUMBER(2462);
	SM_java_math_BigInteger_primitiveLeftShift_Array1_int_int_int(ctx, (frame[0].o), (frame[1].i), (frame[4].i));
	LINE_NUMBER(2463);
	popStackFrame(ctx);
	return (frame[0].o);
	}
label_4:;
	{
	LINE_NUMBER(2465);
	if ((frame[4].i) > ((32) - (frame[5].i))) goto label_7;
	}
	{
	LINE_NUMBER(2466);
	sp[0].o = (jobject) createArray(ctx, &class_int, ((frame[3].i) + (frame[1].i)));
	frame[6].o = sp[0].o;
	LINE_NUMBER(2467);
	SM_java_lang_System_arraycopy_java_lang_Object_int_java_lang_Object_int_int(ctx, (frame[0].o), (jint(0)), (frame[6].o), (jint(0)), (frame[1].i));
	LINE_NUMBER(2468);
	SM_java_math_BigInteger_primitiveLeftShift_Array1_int_int_int(ctx, (frame[6].o), (((jarray) nullCheck(ctx, (frame[6].o)))->length), (frame[4].i));
	LINE_NUMBER(2469);
	popStackFrame(ctx);
	return (frame[6].o);
	}
label_7:;
	{
	LINE_NUMBER(2471);
	sp[0].o = (jobject) createArray(ctx, &class_int, (((frame[3].i) + (frame[1].i)) + (jint(1))));
	frame[6].o = sp[0].o;
	LINE_NUMBER(2472);
	SM_java_lang_System_arraycopy_java_lang_Object_int_java_lang_Object_int_int(ctx, (frame[0].o), (jint(0)), (frame[6].o), (jint(0)), (frame[1].i));
	LINE_NUMBER(2473);
	SM_java_math_BigInteger_primitiveRightShift_Array1_int_int_int(ctx, (frame[6].o), (((jarray) nullCheck(ctx, (frame[6].o)))->length), ((32) - (frame[4].i)));
	LINE_NUMBER(2474);
	popStackFrame(ctx);
	return (frame[6].o);
	}

	popStackFrame(ctx);
}

void SM_java_math_BigInteger_primitiveRightShift_Array1_int_int_int(jcontext ctx, jobject param0, jint param1, jint param2) {
	jtype frame[12];
	auto stack = &frame[7];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/math/BigInteger:primitiveRightShift", 12 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_math_BigInteger(ctx);
	frame[0].o = param0;
	frame[1].i = param1;
	frame[2].i = param2;
	{
	LINE_NUMBER(2481);
	frame[3].i = ((32) - (frame[2].i));
	LINE_NUMBER(2482);
	frame[4].i = ((frame[1].i) - (jint(1)));
	frame[5].i = ((jint)ARRAY_ACCESS(jint, (frame[0].o), (frame[4].i)));
	}
label_3:;
	INST_ILOAD(4);
	if ((--sp)->i <= 0) goto label_4;
	{
	LINE_NUMBER(2483);
	frame[6].i = (frame[5].i);
	LINE_NUMBER(2484);
	frame[5].i = ((jint)ARRAY_ACCESS(jint, (frame[0].o), ((frame[4].i) - (jint(1)))));
	LINE_NUMBER(2485);
	ARRAY_ACCESS(jint, (frame[0].o), (frame[4].i)) = (((frame[5].i) << (frame[3].i)) | (bit_cast<jint>(bit_cast<uint32_t>((frame[6].i)) >> (frame[2].i))));
	LINE_NUMBER(2482);
	INST_IINC(4, -1);
	goto label_3;
	}
label_4:;
	{
	LINE_NUMBER(2487);
	sp[0].o = frame[0].o;
	jint temp0 = jint(0);
	ARRAY_ACCESS(jint, sp[0].o, temp0) = (bit_cast<jint>(bit_cast<uint32_t>(((jint)ARRAY_ACCESS(jint, sp[0].o, temp0))) >> (frame[2].i)));
	LINE_NUMBER(2488);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_java_math_BigInteger_primitiveLeftShift_Array1_int_int_int(jcontext ctx, jobject param0, jint param1, jint param2) {
	jtype frame[13];
	auto stack = &frame[8];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/math/BigInteger:primitiveLeftShift", 13 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_math_BigInteger(ctx);
	frame[0].o = param0;
	frame[1].i = param1;
	frame[2].i = param2;
	{
	LINE_NUMBER(2492);
	if ((frame[1].i) == 0) goto label_1;
	}
	INST_ILOAD(2);
	if ((--sp)->i != 0) goto label_2;
label_1:;
	LINE_NUMBER(2493);
	popStackFrame(ctx);
	INST_RETURN();
label_2:;
	{
	LINE_NUMBER(2495);
	frame[3].i = ((32) - (frame[2].i));
	LINE_NUMBER(2496);
	frame[4].i = (jint(0));
	frame[5].i = ((jint)ARRAY_ACCESS(jint, (frame[0].o), (frame[4].i)));
	frame[6].i = (((frame[4].i) + (frame[1].i)) - (jint(1)));
	}
label_6:;
	{
	if ((frame[4].i) >= (frame[6].i)) goto label_7;
	}
	{
	LINE_NUMBER(2497);
	frame[7].i = (frame[5].i);
	LINE_NUMBER(2498);
	frame[5].i = ((jint)ARRAY_ACCESS(jint, (frame[0].o), ((frame[4].i) + (jint(1)))));
	LINE_NUMBER(2499);
	ARRAY_ACCESS(jint, (frame[0].o), (frame[4].i)) = (((frame[7].i) << (frame[2].i)) | (bit_cast<jint>(bit_cast<uint32_t>((frame[5].i)) >> (frame[3].i))));
	LINE_NUMBER(2496);
	INST_IINC(4, 1);
	goto label_6;
	}
label_7:;
	{
	LINE_NUMBER(2501);
	sp[0].o = frame[0].o;
	jint temp0 = (frame[1].i) - (jint(1));
	ARRAY_ACCESS(jint, sp[0].o, temp0) = (((jint)ARRAY_ACCESS(jint, sp[0].o, temp0)) << (frame[2].i));
	LINE_NUMBER(2502);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jint SM_java_math_BigInteger_bitLength_Array1_int_int_R_int(jcontext ctx, jobject param0, jint param1) {
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/math/BigInteger:bitLength", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_math_BigInteger(ctx);
	frame[0].o = param0;
	frame[1].i = param1;
	{
	LINE_NUMBER(2509);
	if ((frame[1].i) != 0) goto label_1;
	}
	{
	LINE_NUMBER(2510);
	popStackFrame(ctx);
	return (jint(0));
	}
label_1:;
	{
	LINE_NUMBER(2511);
	jint temp0 = ((frame[1].i) - (jint(1))) << (jint(5));
	jint temp1 = (jint)SM_java_math_BigInteger_bitLengthForInt_int_R_int(ctx, ((jint)ARRAY_ACCESS(jint, (frame[0].o), (jint(0)))));
	popStackFrame(ctx);
	return (temp0 + temp1);
	}

	popStackFrame(ctx);
}

jobject M_java_math_BigInteger_abs_R_java_math_BigInteger(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/math/BigInteger:abs", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(2521);
	if (((jint)((java_math_BigInteger *) NULL_CHECK((frame[0].o)))->F_signum) < 0) goto label_1;
	}
	INST_ALOAD(0);
	goto label_2;
label_1:;
	INST_ALOAD(0);
	POP_N(1); // Pop method args
	sp->o = (jobject)((func_java_math_BigInteger_negate_R_java_math_BigInteger) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_math_BigInteger_negate_R_java_math_BigInteger])(ctx, sp[0].o);
	sp++;
label_2:;
	popStackFrame(ctx);
	INST_ARETURN();

	popStackFrame(ctx);
}

jobject M_java_math_BigInteger_negate_R_java_math_BigInteger(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/math/BigInteger:negate", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(2530);
	clinit_java_math_BigInteger(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_math_BigInteger);
	sp[1].o = (jobject)((java_math_BigInteger *) NULL_CHECK((frame[0].o)))->F_mag;
	init_java_math_BigInteger_Array1_int_int(ctx, sp[0].o, sp[1].o, (-((jint)((java_math_BigInteger *) NULL_CHECK((frame[0].o)))->F_signum)));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jint M_java_math_BigInteger_signum_R_int(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/math/BigInteger:signum", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(2540);
	popStackFrame(ctx);
	return ((jint)((java_math_BigInteger *) NULL_CHECK((frame[0].o)))->F_signum);
	}

	popStackFrame(ctx);
}

jobject M_java_math_BigInteger_mod_java_math_BigInteger_R_java_math_BigInteger(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/math/BigInteger:mod", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(2556);
	if (((jint)((java_math_BigInteger *) NULL_CHECK((frame[1].o)))->F_signum) > 0) goto label_1;
	}
	{
	LINE_NUMBER(2557);
	clinit_java_lang_ArithmeticException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_ArithmeticException);
	init_java_lang_ArithmeticException_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"BigInteger: modulus not positive"_j))));
	throwException(ctx, sp[0].o);	}
label_1:;
	{
	LINE_NUMBER(2559);
	sp[0].o = (jobject)((func_java_math_BigInteger_remainder_java_math_BigInteger_R_java_math_BigInteger) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_math_BigInteger_remainder_java_math_BigInteger_R_java_math_BigInteger])(ctx, (frame[0].o), (frame[1].o));
	frame[2].o = sp[0].o;
	LINE_NUMBER(2560);
	if (((jint)((java_math_BigInteger *) NULL_CHECK((frame[2].o)))->F_signum) < 0) goto label_4;
	}
	INST_ALOAD(2);
	goto label_5;
label_4:;
	{
	sp[0].o = (jobject)((func_java_math_BigInteger_add_java_math_BigInteger_R_java_math_BigInteger) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_java_math_BigInteger_add_java_math_BigInteger_R_java_math_BigInteger])(ctx, (frame[2].o), (frame[1].o));
	sp += 1;
	}
label_5:;
	popStackFrame(ctx);
	INST_ARETURN();

	popStackFrame(ctx);
}

jobject M_java_math_BigInteger_modPow_java_math_BigInteger_java_math_BigInteger_R_java_math_BigInteger(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[21];
	auto stack = &frame[17];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/math/BigInteger:modPow", 21 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(2577);
	if (((jint)((java_math_BigInteger *) NULL_CHECK((frame[2].o)))->F_signum) > 0) goto label_1;
	}
	{
	LINE_NUMBER(2578);
	clinit_java_lang_ArithmeticException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_ArithmeticException);
	init_java_lang_ArithmeticException_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"BigInteger: modulus not positive"_j))));
	throwException(ctx, sp[0].o);	}
label_1:;
	{
	LINE_NUMBER(2581);
	if (((jint)((java_math_BigInteger *) NULL_CHECK((frame[1].o)))->F_signum) != 0) goto label_3;
	}
	{
	LINE_NUMBER(2582);
	sp[0].o = frame[2].o;
	clinit_java_math_BigInteger(ctx);
	sp[1].o = (jobject)SF_java_math_BigInteger_ONE;
	jint temp0 = (jint)((func_java_math_BigInteger_equals_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_math_BigInteger_equals_java_lang_Object_R_boolean])(ctx, sp[0].o, sp[1].o);
	if (temp0 == 0) goto label_5;
	}
	clinit_java_math_BigInteger(ctx);
	(sp++)->o = SF_java_math_BigInteger_ZERO;
	goto label_6;
label_5:;
	clinit_java_math_BigInteger(ctx);
	(sp++)->o = SF_java_math_BigInteger_ONE;
label_6:;
	popStackFrame(ctx);
	INST_ARETURN();
label_3:;
	{
	LINE_NUMBER(2584);
	sp[0].o = frame[0].o;
	clinit_java_math_BigInteger(ctx);
	sp[1].o = (jobject)SF_java_math_BigInteger_ONE;
	jint temp0 = (jint)((func_java_math_BigInteger_equals_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_math_BigInteger_equals_java_lang_Object_R_boolean])(ctx, sp[0].o, sp[1].o);
	if (temp0 == 0) goto label_7;
	}
	{
	LINE_NUMBER(2585);
	sp[0].o = frame[2].o;
	clinit_java_math_BigInteger(ctx);
	sp[1].o = (jobject)SF_java_math_BigInteger_ONE;
	jint temp0 = (jint)((func_java_math_BigInteger_equals_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_math_BigInteger_equals_java_lang_Object_R_boolean])(ctx, sp[0].o, sp[1].o);
	if (temp0 == 0) goto label_9;
	}
	clinit_java_math_BigInteger(ctx);
	(sp++)->o = SF_java_math_BigInteger_ZERO;
	goto label_10;
label_9:;
	clinit_java_math_BigInteger(ctx);
	(sp++)->o = SF_java_math_BigInteger_ONE;
label_10:;
	popStackFrame(ctx);
	INST_ARETURN();
label_7:;
	{
	LINE_NUMBER(2587);
	sp[0].o = frame[0].o;
	clinit_java_math_BigInteger(ctx);
	sp[1].o = (jobject)SF_java_math_BigInteger_ZERO;
	jint temp0 = (jint)((func_java_math_BigInteger_equals_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_math_BigInteger_equals_java_lang_Object_R_boolean])(ctx, sp[0].o, sp[1].o);
	if (temp0 == 0) goto label_11;
	}
	{
	if (((jint)((java_math_BigInteger *) NULL_CHECK((frame[1].o)))->F_signum) < 0) goto label_11;
	}
	{
	LINE_NUMBER(2588);
	clinit_java_math_BigInteger(ctx);
	sp[0].o = (jobject)SF_java_math_BigInteger_ZERO;
	popStackFrame(ctx);
	return sp[0].o;
	}
label_11:;
	{
	LINE_NUMBER(2590);
	sp[0].o = frame[0].o;
	clinit_java_math_BigInteger(ctx);
	sp[1].o = (jobject)SF_java_math_BigInteger_negConst;
	jint temp0 = (jint)((func_java_math_BigInteger_equals_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_math_BigInteger_equals_java_lang_Object_R_boolean])(ctx, sp[0].o, ((jobject)ARRAY_ACCESS(jobject, sp[1].o, (jint(1)))));
	if (temp0 == 0) goto label_13;
	}
	{
	jint temp0 = (jint)((func_java_math_BigInteger_testBit_int_R_boolean) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_math_BigInteger_testBit_int_R_boolean])(ctx, (frame[1].o), (jint(0)));
	if (temp0 != 0) goto label_13;
	}
	{
	LINE_NUMBER(2591);
	sp[0].o = frame[2].o;
	clinit_java_math_BigInteger(ctx);
	sp[1].o = (jobject)SF_java_math_BigInteger_ONE;
	jint temp0 = (jint)((func_java_math_BigInteger_equals_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_math_BigInteger_equals_java_lang_Object_R_boolean])(ctx, sp[0].o, sp[1].o);
	if (temp0 == 0) goto label_15;
	}
	clinit_java_math_BigInteger(ctx);
	(sp++)->o = SF_java_math_BigInteger_ZERO;
	goto label_16;
label_15:;
	clinit_java_math_BigInteger(ctx);
	(sp++)->o = SF_java_math_BigInteger_ONE;
label_16:;
	popStackFrame(ctx);
	INST_ARETURN();
label_13:;
	{
	LINE_NUMBER(2594);
	if (((jint)((java_math_BigInteger *) NULL_CHECK((frame[1].o)))->F_signum) >= 0) goto label_17;
	}
	INST_ICONST(1);
	goto label_18;
label_17:;
	INST_ICONST(0);
label_18:;
	{
	sp -= 1;
	frame[3].i = sp[0].i;
	if (sp[0].i == 0) goto label_20;
	}
	{
	LINE_NUMBER(2595);
	sp[0].o = (jobject)((func_java_math_BigInteger_negate_R_java_math_BigInteger) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_math_BigInteger_negate_R_java_math_BigInteger])(ctx, (frame[1].o));
	frame[1].o = sp[0].o;
	}
label_20:;
	{
	LINE_NUMBER(2597);
	if (((jint)((java_math_BigInteger *) NULL_CHECK((frame[0].o)))->F_signum) < 0) goto label_22;
	}
	{
	jint temp0 = (jint)((func_java_math_BigInteger_compareTo_java_math_BigInteger_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_math_BigInteger_compareTo_java_math_BigInteger_R_int])(ctx, (frame[0].o), (frame[2].o));
	if (temp0 < 0) goto label_23;
	}
label_22:;
	{
	LINE_NUMBER(2598);
	sp[0].o = (jobject)((func_java_math_BigInteger_mod_java_math_BigInteger_R_java_math_BigInteger) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_math_BigInteger_mod_java_math_BigInteger_R_java_math_BigInteger])(ctx, (frame[0].o), (frame[2].o));
	sp += 1;
	goto label_24;
	}
label_23:;
	INST_ALOAD(0);
label_24:;
	{
	sp -= 1;
	frame[4].o = sp[0].o;
	LINE_NUMBER(2600);
	jint temp0 = (jint)((func_java_math_BigInteger_testBit_int_R_boolean) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_java_math_BigInteger_testBit_int_R_boolean])(ctx, (frame[2].o), (jint(0)));
	if (temp0 == 0) goto label_26;
	}
	{
	LINE_NUMBER(2601);
	sp[0].o = (jobject)M_java_math_BigInteger_oddModPow_java_math_BigInteger_java_math_BigInteger_R_java_math_BigInteger(ctx, (frame[4].o), (frame[1].o), (frame[2].o));
	frame[5].o = sp[0].o;
	goto label_29;
	}
label_26:;
	{
	LINE_NUMBER(2610);
	jint temp0 = (jint)((func_java_math_BigInteger_getLowestSetBit_R_int) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_java_math_BigInteger_getLowestSetBit_R_int])(ctx, (frame[2].o));
	frame[6].i = temp0;
	LINE_NUMBER(2612);
	sp[0].o = (jobject)((func_java_math_BigInteger_shiftRight_int_R_java_math_BigInteger) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_java_math_BigInteger_shiftRight_int_R_java_math_BigInteger])(ctx, (frame[2].o), (frame[6].i));
	frame[7].o = sp[0].o;
	LINE_NUMBER(2613);
	clinit_java_math_BigInteger(ctx);
	sp[0].o = (jobject)SF_java_math_BigInteger_ONE;
	sp[0].o = (jobject)((func_java_math_BigInteger_shiftLeft_int_R_java_math_BigInteger) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_math_BigInteger_shiftLeft_int_R_java_math_BigInteger])(ctx, sp[0].o, (frame[6].i));
	frame[8].o = sp[0].o;
	LINE_NUMBER(2616);
	if (((jint)((java_math_BigInteger *) NULL_CHECK((frame[0].o)))->F_signum) < 0) goto label_33;
	}
	{
	jint temp0 = (jint)((func_java_math_BigInteger_compareTo_java_math_BigInteger_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_math_BigInteger_compareTo_java_math_BigInteger_R_int])(ctx, (frame[0].o), (frame[7].o));
	if (temp0 < 0) goto label_34;
	}
label_33:;
	{
	LINE_NUMBER(2617);
	sp[0].o = (jobject)((func_java_math_BigInteger_mod_java_math_BigInteger_R_java_math_BigInteger) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_math_BigInteger_mod_java_math_BigInteger_R_java_math_BigInteger])(ctx, (frame[0].o), (frame[7].o));
	sp += 1;
	goto label_35;
	}
label_34:;
	INST_ALOAD(0);
label_35:;
	{
	sp -= 1;
	frame[9].o = sp[0].o;
	LINE_NUMBER(2620);
	sp[0].o = frame[7].o;
	clinit_java_math_BigInteger(ctx);
	sp[1].o = (jobject)SF_java_math_BigInteger_ONE;
	jint temp0 = (jint)((func_java_math_BigInteger_equals_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_math_BigInteger_equals_java_lang_Object_R_boolean])(ctx, sp[0].o, sp[1].o);
	if (temp0 == 0) goto label_37;
	}
	clinit_java_math_BigInteger(ctx);
	(sp++)->o = SF_java_math_BigInteger_ZERO;
	goto label_38;
label_37:;
	{
	LINE_NUMBER(2621);
	sp[0].o = (jobject)M_java_math_BigInteger_oddModPow_java_math_BigInteger_java_math_BigInteger_R_java_math_BigInteger(ctx, (frame[9].o), (frame[1].o), (frame[7].o));
	sp += 1;
	}
label_38:;
	{
	sp -= 1;
	frame[10].o = sp[0].o;
	LINE_NUMBER(2624);
	sp[0].o = (jobject)M_java_math_BigInteger_modPow2_java_math_BigInteger_int_R_java_math_BigInteger(ctx, (frame[4].o), (frame[1].o), (frame[6].i));
	frame[11].o = sp[0].o;
	LINE_NUMBER(2627);
	sp[0].o = (jobject)((func_java_math_BigInteger_modInverse_java_math_BigInteger_R_java_math_BigInteger) ((void **) nullCheck(ctx, (frame[8].o))->vtable)[VTABLE_java_math_BigInteger_modInverse_java_math_BigInteger_R_java_math_BigInteger])(ctx, (frame[8].o), (frame[7].o));
	frame[12].o = sp[0].o;
	LINE_NUMBER(2628);
	sp[0].o = (jobject)((func_java_math_BigInteger_modInverse_java_math_BigInteger_R_java_math_BigInteger) ((void **) nullCheck(ctx, (frame[7].o))->vtable)[VTABLE_java_math_BigInteger_modInverse_java_math_BigInteger_R_java_math_BigInteger])(ctx, (frame[7].o), (frame[8].o));
	frame[13].o = sp[0].o;
	LINE_NUMBER(2630);
	sp[0].o = (jobject)((java_math_BigInteger *) NULL_CHECK((frame[2].o)))->F_mag;
	if ((((jarray) nullCheck(ctx, sp[0].o))->length) >= (jint(33554432))) goto label_43;
	}
	{
	LINE_NUMBER(2631);
	sp[0].o = (jobject)((func_java_math_BigInteger_multiply_java_math_BigInteger_R_java_math_BigInteger) ((void **) nullCheck(ctx, (frame[10].o))->vtable)[VTABLE_java_math_BigInteger_multiply_java_math_BigInteger_R_java_math_BigInteger])(ctx, (frame[10].o), (frame[8].o));
	sp[0].o = (jobject)((func_java_math_BigInteger_multiply_java_math_BigInteger_R_java_math_BigInteger) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_math_BigInteger_multiply_java_math_BigInteger_R_java_math_BigInteger])(ctx, sp[0].o, (frame[12].o));
	sp[1].o = (jobject)((func_java_math_BigInteger_multiply_java_math_BigInteger_R_java_math_BigInteger) ((void **) nullCheck(ctx, (frame[11].o))->vtable)[VTABLE_java_math_BigInteger_multiply_java_math_BigInteger_R_java_math_BigInteger])(ctx, (frame[11].o), (frame[7].o));
	sp[1].o = (jobject)((func_java_math_BigInteger_multiply_java_math_BigInteger_R_java_math_BigInteger) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_math_BigInteger_multiply_java_math_BigInteger_R_java_math_BigInteger])(ctx, sp[1].o, (frame[13].o));
	sp[0].o = (jobject)((func_java_math_BigInteger_add_java_math_BigInteger_R_java_math_BigInteger) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_math_BigInteger_add_java_math_BigInteger_R_java_math_BigInteger])(ctx, sp[0].o, sp[1].o);
	sp[0].o = (jobject)((func_java_math_BigInteger_mod_java_math_BigInteger_R_java_math_BigInteger) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_math_BigInteger_mod_java_math_BigInteger_R_java_math_BigInteger])(ctx, sp[0].o, (frame[2].o));
	frame[5].o = sp[0].o;
	goto label_29;
	}
label_43:;
	{
	LINE_NUMBER(2633);
	clinit_java_math_MutableBigInteger(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_math_MutableBigInteger);
	init_java_math_MutableBigInteger(ctx, sp[0].o);
	frame[14].o = sp[0].o;
	LINE_NUMBER(2634);
	clinit_java_math_MutableBigInteger(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_math_MutableBigInteger);
	sp[1].o = (jobject)((func_java_math_BigInteger_multiply_java_math_BigInteger_R_java_math_BigInteger) ((void **) nullCheck(ctx, (frame[10].o))->vtable)[VTABLE_java_math_BigInteger_multiply_java_math_BigInteger_R_java_math_BigInteger])(ctx, (frame[10].o), (frame[8].o));
	init_java_math_MutableBigInteger_java_math_BigInteger(ctx, sp[0].o, sp[1].o);
	clinit_java_math_MutableBigInteger(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_math_MutableBigInteger);
	init_java_math_MutableBigInteger_java_math_BigInteger(ctx, sp[1].o, (frame[12].o));
	((func_java_math_MutableBigInteger_multiply_java_math_MutableBigInteger_java_math_MutableBigInteger) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_math_MutableBigInteger_multiply_java_math_MutableBigInteger_java_math_MutableBigInteger])(ctx, sp[0].o, sp[1].o, (frame[14].o));
	LINE_NUMBER(2635);
	clinit_java_math_MutableBigInteger(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_math_MutableBigInteger);
	init_java_math_MutableBigInteger(ctx, sp[0].o);
	frame[15].o = sp[0].o;
	LINE_NUMBER(2636);
	clinit_java_math_MutableBigInteger(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_math_MutableBigInteger);
	sp[1].o = (jobject)((func_java_math_BigInteger_multiply_java_math_BigInteger_R_java_math_BigInteger) ((void **) nullCheck(ctx, (frame[11].o))->vtable)[VTABLE_java_math_BigInteger_multiply_java_math_BigInteger_R_java_math_BigInteger])(ctx, (frame[11].o), (frame[7].o));
	init_java_math_MutableBigInteger_java_math_BigInteger(ctx, sp[0].o, sp[1].o);
	clinit_java_math_MutableBigInteger(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_math_MutableBigInteger);
	init_java_math_MutableBigInteger_java_math_BigInteger(ctx, sp[1].o, (frame[13].o));
	((func_java_math_MutableBigInteger_multiply_java_math_MutableBigInteger_java_math_MutableBigInteger) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_math_MutableBigInteger_multiply_java_math_MutableBigInteger_java_math_MutableBigInteger])(ctx, sp[0].o, sp[1].o, (frame[15].o));
	LINE_NUMBER(2637);
	((func_java_math_MutableBigInteger_add_java_math_MutableBigInteger) ((void **) nullCheck(ctx, (frame[14].o))->vtable)[VTABLE_java_math_MutableBigInteger_add_java_math_MutableBigInteger])(ctx, (frame[14].o), (frame[15].o));
	LINE_NUMBER(2638);
	clinit_java_math_MutableBigInteger(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_math_MutableBigInteger);
	init_java_math_MutableBigInteger(ctx, sp[0].o);
	frame[16].o = sp[0].o;
	LINE_NUMBER(2639);
	sp[0].o = frame[14].o;
	clinit_java_math_MutableBigInteger(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_math_MutableBigInteger);
	init_java_math_MutableBigInteger_java_math_BigInteger(ctx, sp[1].o, (frame[2].o));
	sp[0].o = (jobject)((func_java_math_MutableBigInteger_divide_java_math_MutableBigInteger_java_math_MutableBigInteger_R_java_math_MutableBigInteger) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_math_MutableBigInteger_divide_java_math_MutableBigInteger_java_math_MutableBigInteger_R_java_math_MutableBigInteger])(ctx, sp[0].o, sp[1].o, (frame[16].o));
	sp[0].o = (jobject)((func_java_math_MutableBigInteger_toBigInteger_R_java_math_BigInteger) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_math_MutableBigInteger_toBigInteger_R_java_math_BigInteger])(ctx, sp[0].o);
	frame[5].o = sp[0].o;
	}
label_29:;
	{
	LINE_NUMBER(2643);
	if ((frame[3].i) == 0) goto label_52;
	}
	{
	sp[0].o = (jobject)((func_java_math_BigInteger_modInverse_java_math_BigInteger_R_java_math_BigInteger) ((void **) nullCheck(ctx, (frame[5].o))->vtable)[VTABLE_java_math_BigInteger_modInverse_java_math_BigInteger_R_java_math_BigInteger])(ctx, (frame[5].o), (frame[2].o));
	sp += 1;
	goto label_53;
	}
label_52:;
	INST_ALOAD(5);
label_53:;
	popStackFrame(ctx);
	INST_ARETURN();

	popStackFrame(ctx);
}

jobject SM_java_math_BigInteger_montgomeryMultiply_Array1_int_Array1_int_Array1_int_int_long_Array1_int_R_Array1_int(jcontext ctx, jobject param0, jobject param1, jobject param2, jint param3, jlong param4, jobject param5) {
	jtype frame[15];
	auto stack = &frame[7];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/math/BigInteger:montgomeryMultiply", 15 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_math_BigInteger(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	frame[2].o = param2;
	frame[3].i = param3;
	frame[4].l = param4;
	frame[6].o = param5;
	{
	LINE_NUMBER(2653);
	SM_java_math_BigInteger_implMontgomeryMultiplyChecks_Array1_int_Array1_int_Array1_int_int_Array1_int(ctx, (frame[0].o), (frame[1].o), (frame[2].o), (frame[3].i), (frame[6].o));
	LINE_NUMBER(2654);
	if ((frame[3].i) <= (512)) goto label_2;
	}
	{
	LINE_NUMBER(2656);
	sp[0].o = (jobject)SM_java_math_BigInteger_multiplyToLen_Array1_int_int_Array1_int_int_Array1_int_R_Array1_int(ctx, (frame[0].o), (frame[3].i), (frame[1].o), (frame[3].i), (frame[6].o));
	frame[6].o = sp[0].o;
	LINE_NUMBER(2657);
	sp[0].o = (jobject)SM_java_math_BigInteger_montReduce_Array1_int_Array1_int_int_int_R_Array1_int(ctx, (frame[6].o), (frame[2].o), (frame[3].i), (jint((frame[4].l))));
	popStackFrame(ctx);
	return sp[0].o;
	}
label_2:;
	{
	LINE_NUMBER(2659);
	sp[0].o = frame[0].o;
	sp[1].o = frame[1].o;
	sp[2].o = frame[2].o;
	jint temp0 = frame[3].i;
	jlong temp1 = frame[4].l;
	sp[3].o = (jobject)SM_java_math_BigInteger_materialize_Array1_int_int_R_Array1_int(ctx, (frame[6].o), (frame[3].i));
	sp[0].o = (jobject)SM_java_math_BigInteger_implMontgomeryMultiply_Array1_int_Array1_int_Array1_int_int_long_Array1_int_R_Array1_int(ctx, sp[0].o, sp[1].o, sp[2].o, temp0, temp1, sp[3].o);
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject SM_java_math_BigInteger_montgomerySquare_Array1_int_Array1_int_int_long_Array1_int_R_Array1_int(jcontext ctx, jobject param0, jobject param1, jint param2, jlong param3, jobject param4) {
	jtype frame[13];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/math/BigInteger:montgomerySquare", 13 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_math_BigInteger(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	frame[2].i = param2;
	frame[3].l = param3;
	frame[5].o = param4;
	{
	LINE_NUMBER(2664);
	SM_java_math_BigInteger_implMontgomeryMultiplyChecks_Array1_int_Array1_int_Array1_int_int_Array1_int(ctx, (frame[0].o), (frame[0].o), (frame[1].o), (frame[2].i), (frame[5].o));
	LINE_NUMBER(2665);
	if ((frame[2].i) <= (512)) goto label_2;
	}
	{
	LINE_NUMBER(2667);
	sp[0].o = (jobject)SM_java_math_BigInteger_squareToLen_Array1_int_int_Array1_int_R_Array1_int(ctx, (frame[0].o), (frame[2].i), (frame[5].o));
	frame[5].o = sp[0].o;
	LINE_NUMBER(2668);
	sp[0].o = (jobject)SM_java_math_BigInteger_montReduce_Array1_int_Array1_int_int_int_R_Array1_int(ctx, (frame[5].o), (frame[1].o), (frame[2].i), (jint((frame[3].l))));
	popStackFrame(ctx);
	return sp[0].o;
	}
label_2:;
	{
	LINE_NUMBER(2670);
	sp[0].o = frame[0].o;
	sp[1].o = frame[1].o;
	jint temp0 = frame[2].i;
	jlong temp1 = frame[3].l;
	sp[2].o = (jobject)SM_java_math_BigInteger_materialize_Array1_int_int_R_Array1_int(ctx, (frame[5].o), (frame[2].i));
	sp[0].o = (jobject)SM_java_math_BigInteger_implMontgomerySquare_Array1_int_Array1_int_int_long_Array1_int_R_Array1_int(ctx, sp[0].o, sp[1].o, temp0, temp1, sp[2].o);
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void SM_java_math_BigInteger_implMontgomeryMultiplyChecks_Array1_int_Array1_int_Array1_int_int_Array1_int(jcontext ctx, jobject param0, jobject param1, jobject param2, jint param3, jobject param4) {
	jtype frame[9];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/math/BigInteger:implMontgomeryMultiplyChecks", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_math_BigInteger(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	frame[2].o = param2;
	frame[3].i = param3;
	frame[4].o = param4;
	{
	LINE_NUMBER(2677);
	if (((frame[3].i) % (jint(2))) == 0) goto label_1;
	}
	{
	LINE_NUMBER(2678);
	clinit_java_lang_IllegalArgumentException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IllegalArgumentException);
	clinit_java_lang_StringBuilder(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[1].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"input array length must be even: "_j))));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder])(ctx, sp[1].o, (frame[3].i));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[1].o);
	init_java_lang_IllegalArgumentException_java_lang_String(ctx, sp[0].o, sp[1].o);
	throwException(ctx, sp[0].o);	}
label_1:;
	{
	LINE_NUMBER(2681);
	if ((frame[3].i) >= (jint(1))) goto label_3;
	}
	{
	LINE_NUMBER(2682);
	clinit_java_lang_IllegalArgumentException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IllegalArgumentException);
	clinit_java_lang_StringBuilder(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[1].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"invalid input length: "_j))));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder])(ctx, sp[1].o, (frame[3].i));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[1].o);
	init_java_lang_IllegalArgumentException_java_lang_String(ctx, sp[0].o, sp[1].o);
	throwException(ctx, sp[0].o);	}
label_3:;
	{
	LINE_NUMBER(2685);
	if ((frame[3].i) > (((jarray) nullCheck(ctx, (frame[0].o)))->length)) goto label_5;
	}
	{
	if ((frame[3].i) > (((jarray) nullCheck(ctx, (frame[1].o)))->length)) goto label_5;
	}
	{
	if ((frame[3].i) > (((jarray) nullCheck(ctx, (frame[2].o)))->length)) goto label_5;
	}
	INST_ALOAD(4);
	if ((--sp)->o == nullptr) goto label_6;
	{
	if ((frame[3].i) <= (((jarray) nullCheck(ctx, (frame[4].o)))->length)) goto label_6;
	}
label_5:;
	{
	LINE_NUMBER(2689);
	clinit_java_lang_IllegalArgumentException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IllegalArgumentException);
	clinit_java_lang_StringBuilder(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[1].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"input array length out of bound: "_j))));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder])(ctx, sp[1].o, (frame[3].i));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[1].o);
	init_java_lang_IllegalArgumentException_java_lang_String(ctx, sp[0].o, sp[1].o);
	throwException(ctx, sp[0].o);	}
label_6:;
	LINE_NUMBER(2691);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jobject SM_java_math_BigInteger_materialize_Array1_int_int_R_Array1_int(jcontext ctx, jobject param0, jint param1) {
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/math/BigInteger:materialize", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_math_BigInteger(ctx);
	frame[0].o = param0;
	frame[1].i = param1;
	{
	LINE_NUMBER(2697);
	if ((frame[0].o) == nullptr) goto label_1;
	}
	{
	if ((((jarray) nullCheck(ctx, (frame[0].o)))->length) >= (frame[1].i)) goto label_2;
	}
label_1:;
	{
	LINE_NUMBER(2698);
	sp[0].o = (jobject) createArray(ctx, &class_int, (frame[1].i));
	frame[0].o = sp[0].o;
	}
label_2:;
	{
	LINE_NUMBER(2699);
	popStackFrame(ctx);
	return (frame[0].o);
	}

	popStackFrame(ctx);
}

jobject SM_java_math_BigInteger_implMontgomeryMultiply_Array1_int_Array1_int_Array1_int_int_long_Array1_int_R_Array1_int(jcontext ctx, jobject param0, jobject param1, jobject param2, jint param3, jlong param4, jobject param5) {
	jtype frame[12];
	auto stack = &frame[7];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/math/BigInteger:implMontgomeryMultiply", 12 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_math_BigInteger(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	frame[2].o = param2;
	frame[3].i = param3;
	frame[4].l = param4;
	frame[6].o = param5;
	{
	LINE_NUMBER(2706);
	sp[0].o = (jobject)SM_java_math_BigInteger_multiplyToLen_Array1_int_int_Array1_int_int_Array1_int_R_Array1_int(ctx, (frame[0].o), (frame[3].i), (frame[1].o), (frame[3].i), (frame[6].o));
	frame[6].o = sp[0].o;
	LINE_NUMBER(2707);
	sp[0].o = (jobject)SM_java_math_BigInteger_montReduce_Array1_int_Array1_int_int_int_R_Array1_int(ctx, (frame[6].o), (frame[2].o), (frame[3].i), (jint((frame[4].l))));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject SM_java_math_BigInteger_implMontgomerySquare_Array1_int_Array1_int_int_long_Array1_int_R_Array1_int(jcontext ctx, jobject param0, jobject param1, jint param2, jlong param3, jobject param4) {
	jtype frame[11];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/math/BigInteger:implMontgomerySquare", 11 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_math_BigInteger(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	frame[2].i = param2;
	frame[3].l = param3;
	frame[5].o = param4;
	{
	LINE_NUMBER(2711);
	sp[0].o = (jobject)SM_java_math_BigInteger_squareToLen_Array1_int_int_Array1_int_R_Array1_int(ctx, (frame[0].o), (frame[2].i), (frame[5].o));
	frame[5].o = sp[0].o;
	LINE_NUMBER(2712);
	sp[0].o = (jobject)SM_java_math_BigInteger_montReduce_Array1_int_Array1_int_int_int_R_Array1_int(ctx, (frame[5].o), (frame[1].o), (frame[2].i), (jint((frame[3].l))));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_java_math_BigInteger_oddModPow_java_math_BigInteger_java_math_BigInteger_R_java_math_BigInteger(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[39];
	auto stack = &frame[30];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/math/BigInteger:oddModPow", 39 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(2781);
	sp[0].o = frame[1].o;
	clinit_java_math_BigInteger(ctx);
	sp[1].o = (jobject)SF_java_math_BigInteger_ONE;
	jint temp0 = (jint)((func_java_math_BigInteger_equals_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_math_BigInteger_equals_java_lang_Object_R_boolean])(ctx, sp[0].o, sp[1].o);
	if (temp0 == 0) goto label_1;
	}
	{
	LINE_NUMBER(2782);
	popStackFrame(ctx);
	return (frame[0].o);
	}
label_1:;
	{
	LINE_NUMBER(2785);
	if (((jint)((java_math_BigInteger *) NULL_CHECK((frame[0].o)))->F_signum) != 0) goto label_3;
	}
	{
	LINE_NUMBER(2786);
	clinit_java_math_BigInteger(ctx);
	sp[0].o = (jobject)SF_java_math_BigInteger_ZERO;
	popStackFrame(ctx);
	return sp[0].o;
	}
label_3:;
	{
	LINE_NUMBER(2788);
	sp[0].o = (jobject)((java_math_BigInteger *) NULL_CHECK((frame[0].o)))->F_mag;
	sp[0].o = (jobject)((func_java_lang_Object_clone_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_Object_clone_R_java_lang_Object])(ctx, sp[0].o);
	frame[3].o = (checkCast(ctx, getArrayClass(&class_int, 1), sp[0].o));
	LINE_NUMBER(2789);
	sp[0].o = (jobject)((java_math_BigInteger *) NULL_CHECK((frame[1].o)))->F_mag;
	frame[4].o = sp[0].o;
	LINE_NUMBER(2790);
	sp[0].o = (jobject)((java_math_BigInteger *) NULL_CHECK((frame[2].o)))->F_mag;
	frame[5].o = sp[0].o;
	LINE_NUMBER(2791);
	frame[6].i = (((jarray) nullCheck(ctx, (frame[5].o)))->length);
	LINE_NUMBER(2797);
	if (((frame[6].i) & (jint(1))) == 0) goto label_9;
	}
	{
	LINE_NUMBER(2798);
	sp[0].o = (jobject) createArray(ctx, &class_int, ((frame[6].i) + (jint(1))));
	frame[7].o = sp[0].o;
	LINE_NUMBER(2799);
	SM_java_lang_System_arraycopy_java_lang_Object_int_java_lang_Object_int_int(ctx, (frame[5].o), (jint(0)), (frame[7].o), (jint(1)), (frame[6].i));
	LINE_NUMBER(2800);
	frame[5].o = (frame[7].o);
	LINE_NUMBER(2801);
	INST_IINC(6, 1);
	}
label_9:;
	{
	LINE_NUMBER(2805);
	frame[7].i = (jint(0));
	LINE_NUMBER(2806);
	jint temp0 = (jint)SM_java_math_BigInteger_bitLength_Array1_int_int_R_int(ctx, (frame[4].o), (((jarray) nullCheck(ctx, (frame[4].o)))->length));
	frame[8].i = temp0;
	LINE_NUMBER(2808);
	if ((frame[8].i) != (17)) goto label_16;
	}
	{
	if (((jint)ARRAY_ACCESS(jint, (frame[4].o), (jint(0)))) == (jint(65537))) goto label_17;
	}
label_16:;
	{
	LINE_NUMBER(2809);
	jint temp0 = frame[8].i;
	clinit_java_math_BigInteger(ctx);
	sp[0].o = (jobject)SF_java_math_BigInteger_bnExpModThreshTable;
	if (temp0 <= ((jint)ARRAY_ACCESS(jint, sp[0].o, (frame[7].i)))) goto label_17;
	}
	{
	LINE_NUMBER(2810);
	INST_IINC(7, 1);
	goto label_16;
	}
label_17:;
	{
	LINE_NUMBER(2815);
	frame[9].i = ((jint(1)) << (frame[7].i));
	LINE_NUMBER(2818);
	sp[0].o = (jobject)createArray(ctx, getArrayClass(&class_int, 1), (frame[9].i));
	frame[10].o = sp[0].o;
	LINE_NUMBER(2819);
	frame[11].i = (jint(0));
	}
label_21:;
	{
	if ((frame[11].i) >= (frame[9].i)) goto label_22;
	}
	{
	LINE_NUMBER(2820);
	sp[0].o = frame[10].o;
	jint temp0 = frame[11].i;
	sp[1].o = (jobject) createArray(ctx, &class_int, (frame[6].i));
	ARRAY_ACCESS(jobject, sp[0].o, temp0) = sp[1].o;
	LINE_NUMBER(2819);
	INST_IINC(11, 1);
	goto label_21;
	}
label_22:;
	{
	LINE_NUMBER(2824);
	frame[11].l = (((jlong(((jint)ARRAY_ACCESS(jint, (frame[5].o), ((frame[6].i) - (jint(1))))))) & (jlong(4294967295ll))) + (((jlong(((jint)ARRAY_ACCESS(jint, (frame[5].o), ((frame[6].i) - (jint(2))))))) & (jlong(4294967295ll))) << (32)));
	LINE_NUMBER(2825);
	jlong temp0 = (jlong)SM_java_math_MutableBigInteger_inverseMod64_long_R_long(ctx, (frame[11].l));
	frame[13].l = (-temp0);
	LINE_NUMBER(2828);
	sp[0].o = (jobject)SM_java_math_BigInteger_leftShift_Array1_int_int_int_R_Array1_int(ctx, (frame[3].o), (((jarray) nullCheck(ctx, (frame[3].o)))->length), ((frame[6].i) << (jint(5))));
	frame[15].o = sp[0].o;
	LINE_NUMBER(2830);
	clinit_java_math_MutableBigInteger(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_math_MutableBigInteger);
	init_java_math_MutableBigInteger(ctx, sp[0].o);
	frame[16].o = sp[0].o;
	LINE_NUMBER(2831);
	clinit_java_math_MutableBigInteger(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_math_MutableBigInteger);
	init_java_math_MutableBigInteger_Array1_int(ctx, sp[0].o, (frame[15].o));
	frame[17].o = sp[0].o;
	LINE_NUMBER(2832);
	clinit_java_math_MutableBigInteger(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_math_MutableBigInteger);
	init_java_math_MutableBigInteger_Array1_int(ctx, sp[0].o, (frame[5].o));
	frame[18].o = sp[0].o;
	LINE_NUMBER(2833);
	((func_java_math_MutableBigInteger_normalize) ((void **) nullCheck(ctx, (frame[18].o))->vtable)[VTABLE_java_math_MutableBigInteger_normalize])(ctx, (frame[18].o));
	LINE_NUMBER(2836);
	sp[0].o = (jobject)((func_java_math_MutableBigInteger_divide_java_math_MutableBigInteger_java_math_MutableBigInteger_R_java_math_MutableBigInteger) ((void **) nullCheck(ctx, (frame[17].o))->vtable)[VTABLE_java_math_MutableBigInteger_divide_java_math_MutableBigInteger_java_math_MutableBigInteger_R_java_math_MutableBigInteger])(ctx, (frame[17].o), (frame[18].o), (frame[16].o));
	frame[19].o = sp[0].o;
	LINE_NUMBER(2837);
	sp[0].o = frame[10].o;
	jint temp1 = jint(0);
	sp[1].o = (jobject)((func_java_math_MutableBigInteger_toIntArray_R_Array1_int) ((void **) nullCheck(ctx, (frame[19].o))->vtable)[VTABLE_java_math_MutableBigInteger_toIntArray_R_Array1_int])(ctx, (frame[19].o));
	ARRAY_ACCESS(jobject, sp[0].o, temp1) = sp[1].o;
	LINE_NUMBER(2840);
	if ((((jarray) nullCheck(ctx, ((jobject)ARRAY_ACCESS(jobject, (frame[10].o), (jint(0))))))->length) >= (frame[6].i)) goto label_34;
	}
	{
	LINE_NUMBER(2841);
	frame[20].i = ((frame[6].i) - (((jarray) nullCheck(ctx, ((jobject)ARRAY_ACCESS(jobject, (frame[10].o), (jint(0))))))->length));
	LINE_NUMBER(2842);
	sp[0].o = (jobject) createArray(ctx, &class_int, (frame[6].i));
	frame[21].o = sp[0].o;
	LINE_NUMBER(2843);
	SM_java_lang_System_arraycopy_java_lang_Object_int_java_lang_Object_int_int(ctx, ((jobject)ARRAY_ACCESS(jobject, (frame[10].o), (jint(0)))), (jint(0)), (frame[21].o), (frame[20].i), (((jarray) nullCheck(ctx, ((jobject)ARRAY_ACCESS(jobject, (frame[10].o), (jint(0))))))->length));
	LINE_NUMBER(2844);
	ARRAY_ACCESS(jobject, (frame[10].o), (jint(0))) = (frame[21].o);
	}
label_34:;
	{
	LINE_NUMBER(2848);
	sp[0].o = (jobject)SM_java_math_BigInteger_montgomerySquare_Array1_int_Array1_int_int_long_Array1_int_R_Array1_int(ctx, ((jobject)ARRAY_ACCESS(jobject, (frame[10].o), (jint(0)))), (frame[5].o), (frame[6].i), (frame[13].l), (jobject(nullptr)));
	frame[20].o = sp[0].o;
	LINE_NUMBER(2851);
	sp[0].o = (jobject)SM_java_util_Arrays_copyOf_Array1_int_int_R_Array1_int(ctx, (frame[20].o), (frame[6].i));
	frame[21].o = sp[0].o;
	LINE_NUMBER(2854);
	frame[22].i = (jint(1));
	}
label_41:;
	{
	if ((frame[22].i) >= (frame[9].i)) goto label_42;
	}
	{
	LINE_NUMBER(2855);
	sp[0].o = frame[10].o;
	jint temp0 = frame[22].i;
	sp[1].o = (jobject)SM_java_math_BigInteger_montgomeryMultiply_Array1_int_Array1_int_Array1_int_int_long_Array1_int_R_Array1_int(ctx, (frame[21].o), ((jobject)ARRAY_ACCESS(jobject, (frame[10].o), ((frame[22].i) - (jint(1))))), (frame[5].o), (frame[6].i), (frame[13].l), (jobject(nullptr)));
	ARRAY_ACCESS(jobject, sp[0].o, temp0) = sp[1].o;
	LINE_NUMBER(2854);
	INST_IINC(22, 1);
	goto label_41;
	}
label_42:;
	{
	LINE_NUMBER(2859);
	frame[22].i = ((jint(1)) << (((frame[8].i) - (jint(1))) & (31)));
	LINE_NUMBER(2861);
	frame[23].i = (jint(0));
	LINE_NUMBER(2862);
	frame[24].i = (((jarray) nullCheck(ctx, (frame[4].o)))->length);
	LINE_NUMBER(2863);
	frame[25].i = (jint(0));
	LINE_NUMBER(2864);
	frame[26].i = (jint(0));
	}
label_49:;
	{
	if ((frame[26].i) > (frame[7].i)) goto label_50;
	}
	{
	LINE_NUMBER(2865);
	jint temp0 = (frame[23].i) << (jint(1));
	sp[0].i = temp0;
	sp += 1;
	if ((((jint)ARRAY_ACCESS(jint, (frame[4].o), (frame[25].i))) & (frame[22].i)) == 0) goto label_52;
	}
	INST_ICONST(1);
	goto label_53;
label_52:;
	INST_ICONST(0);
label_53:;
	{
	sp -= 2;
	frame[23].i = (sp[0].i | sp[1].i);
	LINE_NUMBER(2866);
	frame[22].i = (bit_cast<jint>(bit_cast<uint32_t>((frame[22].i)) >> (jint(1))));
	LINE_NUMBER(2867);
	if ((frame[22].i) != 0) goto label_56;
	}
	{
	LINE_NUMBER(2868);
	INST_IINC(25, 1);
	LINE_NUMBER(2869);
	frame[22].i = (bit_cast<jint>(0x80000000));
	LINE_NUMBER(2870);
	INST_IINC(24, -1);
	}
label_56:;
	{
	LINE_NUMBER(2864);
	INST_IINC(26, 1);
	goto label_49;
	}
label_50:;
	{
	LINE_NUMBER(2874);
	frame[26].i = (frame[8].i);
	LINE_NUMBER(2877);
	INST_IINC(8, -1);
	LINE_NUMBER(2878);
	frame[27].i = (jint(1));
	LINE_NUMBER(2880);
	frame[26].i = ((frame[8].i) - (frame[7].i));
	}
label_63:;
	{
	LINE_NUMBER(2881);
	if (((frame[23].i) & (jint(1))) != 0) goto label_64;
	}
	{
	LINE_NUMBER(2882);
	frame[23].i = (bit_cast<jint>(bit_cast<uint32_t>((frame[23].i)) >> (jint(1))));
	LINE_NUMBER(2883);
	INST_IINC(26, 1);
	goto label_63;
	}
label_64:;
	{
	LINE_NUMBER(2886);
	frame[28].o = ((jobject)ARRAY_ACCESS(jobject, (frame[10].o), (bit_cast<jint>(bit_cast<uint32_t>((frame[23].i)) >> (jint(1))))));
	LINE_NUMBER(2888);
	frame[23].i = (jint(0));
	LINE_NUMBER(2889);
	if ((frame[26].i) != (frame[8].i)) goto label_69;
	}
	{
	LINE_NUMBER(2890);
	frame[27].i = (jint(0));
	}
label_69:;
	{
	LINE_NUMBER(2894);
	INST_IINC(8, -1);
	LINE_NUMBER(2896);
	frame[23].i = ((frame[23].i) << (jint(1)));
	LINE_NUMBER(2898);
	if ((frame[24].i) == 0) goto label_73;
	}
	{
	LINE_NUMBER(2899);
	jint temp0 = frame[23].i;
	sp[0].i = temp0;
	sp += 1;
	if ((((jint)ARRAY_ACCESS(jint, (frame[4].o), (frame[25].i))) & (frame[22].i)) == 0) goto label_75;
	}
	INST_ICONST(1);
	goto label_76;
label_75:;
	INST_ICONST(0);
label_76:;
	{
	sp -= 2;
	frame[23].i = (sp[0].i | sp[1].i);
	LINE_NUMBER(2900);
	frame[22].i = (bit_cast<jint>(bit_cast<uint32_t>((frame[22].i)) >> (jint(1))));
	LINE_NUMBER(2901);
	if ((frame[22].i) != 0) goto label_73;
	}
	{
	LINE_NUMBER(2902);
	INST_IINC(25, 1);
	LINE_NUMBER(2903);
	frame[22].i = (bit_cast<jint>(0x80000000));
	LINE_NUMBER(2904);
	INST_IINC(24, -1);
	}
label_73:;
	{
	LINE_NUMBER(2909);
	if (((frame[23].i) & (frame[9].i)) == 0) goto label_82;
	}
	{
	LINE_NUMBER(2910);
	frame[26].i = ((frame[8].i) - (frame[7].i));
	}
label_84:;
	{
	LINE_NUMBER(2911);
	if (((frame[23].i) & (jint(1))) != 0) goto label_85;
	}
	{
	LINE_NUMBER(2912);
	frame[23].i = (bit_cast<jint>(bit_cast<uint32_t>((frame[23].i)) >> (jint(1))));
	LINE_NUMBER(2913);
	INST_IINC(26, 1);
	goto label_84;
	}
label_85:;
	{
	LINE_NUMBER(2915);
	frame[28].o = ((jobject)ARRAY_ACCESS(jobject, (frame[10].o), (bit_cast<jint>(bit_cast<uint32_t>((frame[23].i)) >> (jint(1))))));
	LINE_NUMBER(2916);
	frame[23].i = (jint(0));
	}
label_82:;
	{
	LINE_NUMBER(2920);
	if ((frame[8].i) != (frame[26].i)) goto label_89;
	}
	{
	LINE_NUMBER(2921);
	if ((frame[27].i) == 0) goto label_91;
	}
	{
	LINE_NUMBER(2922);
	sp[0].o = (jobject)((func_java_lang_Object_clone_R_java_lang_Object) ((void **) nullCheck(ctx, (frame[28].o))->vtable)[VTABLE_java_lang_Object_clone_R_java_lang_Object])(ctx, (frame[28].o));
	frame[20].o = (checkCast(ctx, getArrayClass(&class_int, 1), sp[0].o));
	LINE_NUMBER(2923);
	frame[27].i = (jint(0));
	goto label_89;
	}
label_91:;
	{
	LINE_NUMBER(2925);
	frame[21].o = (frame[20].o);
	LINE_NUMBER(2926);
	sp[0].o = (jobject)SM_java_math_BigInteger_montgomeryMultiply_Array1_int_Array1_int_Array1_int_int_long_Array1_int_R_Array1_int(ctx, (frame[21].o), (frame[28].o), (frame[5].o), (frame[6].i), (frame[13].l), (frame[15].o));
	frame[15].o = sp[0].o;
	LINE_NUMBER(2927);
	frame[21].o = (frame[15].o);
	frame[15].o = (frame[20].o);
	frame[20].o = (frame[21].o);
	}
label_89:;
	{
	LINE_NUMBER(2932);
	if ((frame[8].i) != 0) goto label_96;
	}
	LINE_NUMBER(2933);
	goto label_98;
label_96:;
	{
	LINE_NUMBER(2936);
	if ((frame[27].i) != 0) goto label_69;
	}
	{
	LINE_NUMBER(2937);
	frame[21].o = (frame[20].o);
	LINE_NUMBER(2938);
	sp[0].o = (jobject)SM_java_math_BigInteger_montgomerySquare_Array1_int_Array1_int_int_long_Array1_int_R_Array1_int(ctx, (frame[21].o), (frame[5].o), (frame[6].i), (frame[13].l), (frame[15].o));
	frame[15].o = sp[0].o;
	LINE_NUMBER(2939);
	frame[21].o = (frame[15].o);
	frame[15].o = (frame[20].o);
	frame[20].o = (frame[21].o);
	goto label_69;
	}
label_98:;
	{
	LINE_NUMBER(2944);
	sp[0].o = (jobject) createArray(ctx, &class_int, ((jint(2)) * (frame[6].i)));
	frame[29].o = sp[0].o;
	LINE_NUMBER(2945);
	SM_java_lang_System_arraycopy_java_lang_Object_int_java_lang_Object_int_int(ctx, (frame[20].o), (jint(0)), (frame[29].o), (frame[6].i), (frame[6].i));
	LINE_NUMBER(2947);
	sp[0].o = (jobject)SM_java_math_BigInteger_montReduce_Array1_int_Array1_int_int_int_R_Array1_int(ctx, (frame[29].o), (frame[5].o), (frame[6].i), (jint((frame[13].l))));
	frame[20].o = sp[0].o;
	LINE_NUMBER(2949);
	sp[0].o = (jobject)SM_java_util_Arrays_copyOf_Array1_int_int_R_Array1_int(ctx, (frame[20].o), (frame[6].i));
	frame[29].o = sp[0].o;
	LINE_NUMBER(2951);
	clinit_java_math_BigInteger(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_math_BigInteger);
	init_java_math_BigInteger_int_Array1_int(ctx, sp[0].o, (jint(1)), (frame[29].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject SM_java_math_BigInteger_montReduce_Array1_int_Array1_int_int_int_R_Array1_int(jcontext ctx, jobject param0, jobject param1, jint param2, jint param3) {
	jtype frame[15];
	auto stack = &frame[9];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/math/BigInteger:montReduce", 15 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_math_BigInteger(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	frame[2].i = param2;
	frame[3].i = param3;
	{
	LINE_NUMBER(2959);
	frame[4].i = (jint(0));
	LINE_NUMBER(2960);
	frame[5].i = (frame[2].i);
	LINE_NUMBER(2961);
	frame[6].i = (jint(0));
	}
label_3:;
	{
	LINE_NUMBER(2964);
	frame[7].i = ((jint)ARRAY_ACCESS(jint, (frame[0].o), (((((jarray) nullCheck(ctx, (frame[0].o)))->length) - (jint(1))) - (frame[6].i))));
	LINE_NUMBER(2965);
	jint temp0 = (jint)SM_java_math_BigInteger_mulAdd_Array1_int_Array1_int_int_int_int_R_int(ctx, (frame[0].o), (frame[1].o), (frame[6].i), (frame[2].i), ((frame[3].i) * (frame[7].i)));
	frame[8].i = temp0;
	LINE_NUMBER(2966);
	jint temp1 = frame[4].i;
	jint temp2 = (jint)SM_java_math_BigInteger_addOne_Array1_int_int_int_int_R_int(ctx, (frame[0].o), (frame[6].i), (frame[2].i), (frame[8].i));
	frame[4].i = (temp1 + temp2);
	LINE_NUMBER(2967);
	INST_IINC(6, 1);
	LINE_NUMBER(2968);
	INST_IINC(5, -1);
	if ((frame[5].i) > 0) goto label_3;
	}
label_8:;
	{
	LINE_NUMBER(2970);
	if ((frame[4].i) <= 0) goto label_9;
	}
	{
	LINE_NUMBER(2971);
	jint temp0 = frame[4].i;
	jint temp1 = (jint)SM_java_math_BigInteger_subN_Array1_int_Array1_int_int_R_int(ctx, (frame[0].o), (frame[1].o), (frame[2].i));
	frame[4].i = (temp0 + temp1);
	goto label_8;
	}
label_9:;
	{
	LINE_NUMBER(2973);
	jint temp0 = (jint)SM_java_math_BigInteger_intArrayCmpToLen_Array1_int_Array1_int_int_R_int(ctx, (frame[0].o), (frame[1].o), (frame[2].i));
	if (temp0 < 0) goto label_11;
	}
	{
	LINE_NUMBER(2974);
	jint temp0 = (jint)SM_java_math_BigInteger_subN_Array1_int_Array1_int_int_R_int(ctx, (frame[0].o), (frame[1].o), (frame[2].i));
	goto label_9;
	}
label_11:;
	{
	LINE_NUMBER(2976);
	popStackFrame(ctx);
	return (frame[0].o);
	}

	popStackFrame(ctx);
}

jint SM_java_math_BigInteger_intArrayCmpToLen_Array1_int_Array1_int_int_R_int(jcontext ctx, jobject param0, jobject param1, jint param2) {
	jtype frame[12];
	auto stack = &frame[8];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/math/BigInteger:intArrayCmpToLen", 12 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_math_BigInteger(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	frame[2].i = param2;
	{
	LINE_NUMBER(2985);
	frame[3].i = (jint(0));
	}
label_1:;
	{
	if ((frame[3].i) >= (frame[2].i)) goto label_2;
	}
	{
	LINE_NUMBER(2986);
	frame[4].l = ((jlong(((jint)ARRAY_ACCESS(jint, (frame[0].o), (frame[3].i))))) & (jlong(4294967295ll)));
	LINE_NUMBER(2987);
	frame[6].l = ((jlong(((jint)ARRAY_ACCESS(jint, (frame[1].o), (frame[3].i))))) & (jlong(4294967295ll)));
	LINE_NUMBER(2988);
	if ((longCompare((frame[4].l), (frame[6].l))) >= 0) goto label_6;
	}
	{
	LINE_NUMBER(2989);
	popStackFrame(ctx);
	return (jint(-1));
	}
label_6:;
	{
	LINE_NUMBER(2990);
	if ((longCompare((frame[4].l), (frame[6].l))) <= 0) goto label_8;
	}
	{
	LINE_NUMBER(2991);
	popStackFrame(ctx);
	return (jint(1));
	}
label_8:;
	{
	LINE_NUMBER(2985);
	INST_IINC(3, 1);
	goto label_1;
	}
label_2:;
	{
	LINE_NUMBER(2993);
	popStackFrame(ctx);
	return (jint(0));
	}

	popStackFrame(ctx);
}

jint SM_java_math_BigInteger_subN_Array1_int_Array1_int_int_R_int(jcontext ctx, jobject param0, jobject param1, jint param2) {
	jtype frame[11];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/math/BigInteger:subN", 11 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_math_BigInteger(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	frame[2].i = param2;
	{
	LINE_NUMBER(3000);
	frame[3].l = (jlong(0));
	}
label_1:;
	{
	LINE_NUMBER(3002);
	INST_IINC(2, -1);
	if ((frame[2].i) < 0) goto label_2;
	}
	{
	LINE_NUMBER(3003);
	frame[3].l = ((((jlong(((jint)ARRAY_ACCESS(jint, (frame[0].o), (frame[2].i))))) & (jlong(4294967295ll))) - ((jlong(((jint)ARRAY_ACCESS(jint, (frame[1].o), (frame[2].i))))) & (jlong(4294967295ll)))) + ((frame[3].l) >> (32)));
	LINE_NUMBER(3005);
	ARRAY_ACCESS(jint, (frame[0].o), (frame[2].i)) = (jint((frame[3].l)));
	goto label_1;
	}
label_2:;
	{
	LINE_NUMBER(3008);
	popStackFrame(ctx);
	return (jint(((frame[3].l) >> (32))));
	}

	popStackFrame(ctx);
}

jint SM_java_math_BigInteger_mulAdd_Array1_int_Array1_int_int_int_int_R_int(jcontext ctx, jobject param0, jobject param1, jint param2, jint param3, jint param4) {
	jtype frame[10];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/math/BigInteger:mulAdd", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_math_BigInteger(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	frame[2].i = param2;
	frame[3].i = param3;
	frame[4].i = param4;
	{
	LINE_NUMBER(3015);
	SM_java_math_BigInteger_implMulAddCheck_Array1_int_Array1_int_int_int_int(ctx, (frame[0].o), (frame[1].o), (frame[2].i), (frame[3].i), (frame[4].i));
	LINE_NUMBER(3016);
	jint temp0 = (jint)SM_java_math_BigInteger_implMulAdd_Array1_int_Array1_int_int_int_int_R_int(ctx, (frame[0].o), (frame[1].o), (frame[2].i), (frame[3].i), (frame[4].i));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

void SM_java_math_BigInteger_implMulAddCheck_Array1_int_Array1_int_int_int_int(jcontext ctx, jobject param0, jobject param1, jint param2, jint param3, jint param4) {
	jtype frame[10];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/math/BigInteger:implMulAddCheck", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_math_BigInteger(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	frame[2].i = param2;
	frame[3].i = param3;
	frame[4].i = param4;
	{
	LINE_NUMBER(3023);
	if ((frame[3].i) <= (((jarray) nullCheck(ctx, (frame[1].o)))->length)) goto label_1;
	}
	{
	LINE_NUMBER(3024);
	clinit_java_lang_IllegalArgumentException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IllegalArgumentException);
	clinit_java_lang_StringBuilder(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[1].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"input length is out of bound: "_j))));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder])(ctx, sp[1].o, (frame[3].i));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8" > "_j))));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jarray) nullCheck(ctx, (frame[1].o)))->length));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[1].o);
	init_java_lang_IllegalArgumentException_java_lang_String(ctx, sp[0].o, sp[1].o);
	throwException(ctx, sp[0].o);	}
label_1:;
	{
	LINE_NUMBER(3026);
	if ((frame[2].i) >= 0) goto label_3;
	}
	{
	LINE_NUMBER(3027);
	clinit_java_lang_IllegalArgumentException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IllegalArgumentException);
	clinit_java_lang_StringBuilder(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[1].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"input offset is invalid: "_j))));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder])(ctx, sp[1].o, (frame[2].i));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[1].o);
	init_java_lang_IllegalArgumentException_java_lang_String(ctx, sp[0].o, sp[1].o);
	throwException(ctx, sp[0].o);	}
label_3:;
	{
	LINE_NUMBER(3029);
	if ((frame[2].i) <= ((((jarray) nullCheck(ctx, (frame[0].o)))->length) - (jint(1)))) goto label_5;
	}
	{
	LINE_NUMBER(3030);
	clinit_java_lang_IllegalArgumentException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IllegalArgumentException);
	clinit_java_lang_StringBuilder(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[1].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"input offset is out of bound: "_j))));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder])(ctx, sp[1].o, (frame[2].i));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8" > "_j))));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder])(ctx, sp[1].o, ((((jarray) nullCheck(ctx, (frame[0].o)))->length) - (jint(1))));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[1].o);
	init_java_lang_IllegalArgumentException_java_lang_String(ctx, sp[0].o, sp[1].o);
	throwException(ctx, sp[0].o);	}
label_5:;
	{
	LINE_NUMBER(3032);
	if ((frame[3].i) <= ((((jarray) nullCheck(ctx, (frame[0].o)))->length) - (frame[2].i))) goto label_7;
	}
	{
	LINE_NUMBER(3033);
	clinit_java_lang_IllegalArgumentException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IllegalArgumentException);
	clinit_java_lang_StringBuilder(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[1].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"input len is out of bound: "_j))));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder])(ctx, sp[1].o, (frame[3].i));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8" > "_j))));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder])(ctx, sp[1].o, ((((jarray) nullCheck(ctx, (frame[0].o)))->length) - (frame[2].i)));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[1].o);
	init_java_lang_IllegalArgumentException_java_lang_String(ctx, sp[0].o, sp[1].o);
	throwException(ctx, sp[0].o);	}
label_7:;
	LINE_NUMBER(3035);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jint SM_java_math_BigInteger_implMulAdd_Array1_int_Array1_int_int_int_int_R_int(jcontext ctx, jobject param0, jobject param1, jint param2, jint param3, jint param4) {
	jtype frame[18];
	auto stack = &frame[12];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/math/BigInteger:implMulAdd", 18 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_math_BigInteger(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	frame[2].i = param2;
	frame[3].i = param3;
	frame[4].i = param4;
	{
	LINE_NUMBER(3041);
	frame[5].l = ((jlong((frame[4].i))) & (jlong(4294967295ll)));
	LINE_NUMBER(3042);
	frame[7].l = (jlong(0));
	LINE_NUMBER(3044);
	frame[2].i = (((((jarray) nullCheck(ctx, (frame[0].o)))->length) - (frame[2].i)) - (jint(1)));
	LINE_NUMBER(3045);
	frame[9].i = ((frame[3].i) - (jint(1)));
	}
label_4:;
	INST_ILOAD(9);
	if ((--sp)->i < 0) goto label_5;
	{
	LINE_NUMBER(3046);
	frame[10].l = (((((jlong(((jint)ARRAY_ACCESS(jint, (frame[1].o), (frame[9].i))))) & (jlong(4294967295ll))) * (frame[5].l)) + ((jlong(((jint)ARRAY_ACCESS(jint, (frame[0].o), (frame[2].i))))) & (jlong(4294967295ll)))) + (frame[7].l));
	LINE_NUMBER(3048);
	sp[0].o = frame[0].o;
	jint temp0 = frame[2].i;
	INST_IINC(2, -1);
	ARRAY_ACCESS(jint, sp[0].o, temp0) = (jint((frame[10].l)));
	LINE_NUMBER(3049);
	frame[7].l = (bit_cast<jlong>(bit_cast<uint64_t>((frame[10].l)) >> (32)));
	LINE_NUMBER(3045);
	INST_IINC(9, -1);
	goto label_4;
	}
label_5:;
	{
	LINE_NUMBER(3051);
	popStackFrame(ctx);
	return (jint((frame[7].l)));
	}

	popStackFrame(ctx);
}

jint SM_java_math_BigInteger_addOne_Array1_int_int_int_int_R_int(jcontext ctx, jobject param0, jint param1, jint param2, jint param3) {
	jtype frame[12];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/math/BigInteger:addOne", 12 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_math_BigInteger(ctx);
	frame[0].o = param0;
	frame[1].i = param1;
	frame[2].i = param2;
	frame[3].i = param3;
	{
	LINE_NUMBER(3059);
	frame[1].i = ((((((jarray) nullCheck(ctx, (frame[0].o)))->length) - (jint(1))) - (frame[2].i)) - (frame[1].i));
	LINE_NUMBER(3060);
	frame[4].l = (((jlong(((jint)ARRAY_ACCESS(jint, (frame[0].o), (frame[1].i))))) & (jlong(4294967295ll))) + ((jlong((frame[3].i))) & (jlong(4294967295ll))));
	LINE_NUMBER(3062);
	ARRAY_ACCESS(jint, (frame[0].o), (frame[1].i)) = (jint((frame[4].l)));
	LINE_NUMBER(3063);
	if ((longCompare((bit_cast<jlong>(bit_cast<uint64_t>((frame[4].l)) >> (32))), (jlong(0)))) != 0) goto label_4;
	}
	{
	LINE_NUMBER(3064);
	popStackFrame(ctx);
	return (jint(0));
	}
label_4:;
	{
	LINE_NUMBER(3065);
	INST_IINC(2, -1);
	if ((frame[2].i) < 0) goto label_6;
	}
	{
	LINE_NUMBER(3066);
	INST_IINC(1, -1);
	if ((frame[1].i) >= 0) goto label_8;
	}
	{
	LINE_NUMBER(3067);
	popStackFrame(ctx);
	return (jint(1));
	}
label_8:;
	{
	LINE_NUMBER(3069);
	sp[0].o = frame[0].o;
	jint temp0 = frame[1].i;
	ARRAY_ACCESS(jint, sp[0].o, temp0) = (((jint)ARRAY_ACCESS(jint, sp[0].o, temp0)) + (jint(1)));
	LINE_NUMBER(3070);
	if (((jint)ARRAY_ACCESS(jint, (frame[0].o), (frame[1].i))) == 0) goto label_4;
	}
	{
	LINE_NUMBER(3071);
	popStackFrame(ctx);
	return (jint(0));
	}
label_6:;
	{
	LINE_NUMBER(3074);
	popStackFrame(ctx);
	return (jint(1));
	}

	popStackFrame(ctx);
}

jobject M_java_math_BigInteger_modPow2_java_math_BigInteger_int_R_java_math_BigInteger(jcontext ctx, jobject self, jobject param0, jint param1) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[7];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/math/BigInteger:modPow2", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(3085);
	clinit_java_math_BigInteger(ctx);
	sp[0].o = (jobject)SF_java_math_BigInteger_ONE;
	frame[3].o = sp[0].o;
	LINE_NUMBER(3086);
	sp[0].o = (jobject)M_java_math_BigInteger_mod2_int_R_java_math_BigInteger(ctx, (frame[0].o), (frame[2].i));
	frame[4].o = sp[0].o;
	LINE_NUMBER(3087);
	frame[5].i = (jint(0));
	LINE_NUMBER(3089);
	jint temp0 = (jint)((func_java_math_BigInteger_bitLength_R_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_math_BigInteger_bitLength_R_int])(ctx, (frame[1].o));
	frame[6].i = temp0;
	LINE_NUMBER(3091);
	jint temp1 = (jint)((func_java_math_BigInteger_testBit_int_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_math_BigInteger_testBit_int_R_boolean])(ctx, (frame[0].o), (jint(0)));
	if (temp1 == 0) goto label_5;
	}
	{
	LINE_NUMBER(3092);
	if (((frame[2].i) - (jint(1))) >= (frame[6].i)) goto label_7;
	}
	{
	jint temp0 = (frame[2].i) - (jint(1));
	sp[0].i = temp0;
	sp += 1;
	goto label_8;
	}
label_7:;
	INST_ILOAD(6);
label_8:;
	INST_ISTORE(6);
label_5:;
	{
	LINE_NUMBER(3094);
	if ((frame[5].i) >= (frame[6].i)) goto label_9;
	}
	{
	LINE_NUMBER(3095);
	jint temp0 = (jint)((func_java_math_BigInteger_testBit_int_R_boolean) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_math_BigInteger_testBit_int_R_boolean])(ctx, (frame[1].o), (frame[5].i));
	if (temp0 == 0) goto label_11;
	}
	{
	LINE_NUMBER(3096);
	sp[0].o = (jobject)((func_java_math_BigInteger_multiply_java_math_BigInteger_R_java_math_BigInteger) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_java_math_BigInteger_multiply_java_math_BigInteger_R_java_math_BigInteger])(ctx, (frame[3].o), (frame[4].o));
	sp[0].o = (jobject)M_java_math_BigInteger_mod2_int_R_java_math_BigInteger(ctx, sp[0].o, (frame[2].i));
	frame[3].o = sp[0].o;
	}
label_11:;
	{
	LINE_NUMBER(3097);
	INST_IINC(5, 1);
	LINE_NUMBER(3098);
	if ((frame[5].i) >= (frame[6].i)) goto label_5;
	}
	{
	LINE_NUMBER(3099);
	sp[0].o = (jobject)M_java_math_BigInteger_square_R_java_math_BigInteger(ctx, (frame[4].o));
	sp[0].o = (jobject)M_java_math_BigInteger_mod2_int_R_java_math_BigInteger(ctx, sp[0].o, (frame[2].i));
	frame[4].o = sp[0].o;
	goto label_5;
	}
label_9:;
	{
	LINE_NUMBER(3102);
	popStackFrame(ctx);
	return (frame[3].o);
	}

	popStackFrame(ctx);
}

jobject M_java_math_BigInteger_mod2_int_R_java_math_BigInteger(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[13];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/math/BigInteger:mod2", 13 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(3110);
	jint temp0 = (jint)((func_java_math_BigInteger_bitLength_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_math_BigInteger_bitLength_R_int])(ctx, (frame[0].o));
	if (temp0 > (frame[1].i)) goto label_1;
	}
	{
	LINE_NUMBER(3111);
	popStackFrame(ctx);
	return (frame[0].o);
	}
label_1:;
	{
	LINE_NUMBER(3114);
	frame[2].i = (bit_cast<jint>(bit_cast<uint32_t>(((frame[1].i) + (31))) >> (jint(5))));
	LINE_NUMBER(3115);
	sp[0].o = (jobject) createArray(ctx, &class_int, (frame[2].i));
	frame[3].o = sp[0].o;
	LINE_NUMBER(3116);
	sp[0].o = (jobject)((java_math_BigInteger *) NULL_CHECK((frame[0].o)))->F_mag;
	sp[1].o = (jobject)((java_math_BigInteger *) NULL_CHECK((frame[0].o)))->F_mag;
	SM_java_lang_System_arraycopy_java_lang_Object_int_java_lang_Object_int_int(ctx, sp[0].o, ((((jarray) nullCheck(ctx, sp[1].o))->length) - (frame[2].i)), (frame[3].o), (jint(0)), (frame[2].i));
	LINE_NUMBER(3119);
	frame[4].i = (((frame[2].i) << (jint(5))) - (frame[1].i));
	LINE_NUMBER(3120);
	sp[0].o = frame[3].o;
	jint temp0 = jint(0);
	ARRAY_ACCESS(jint, sp[0].o, temp0) = (jint(((jlong(((jint)ARRAY_ACCESS(jint, sp[0].o, temp0)))) & (((jlong(1)) << ((32) - (frame[4].i))) - (jlong(1))))));
	LINE_NUMBER(3122);
	if (((jint)ARRAY_ACCESS(jint, (frame[3].o), (jint(0)))) != 0) goto label_8;
	}
	{
	clinit_java_math_BigInteger(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_math_BigInteger);
	init_java_math_BigInteger_int_Array1_int(ctx, sp[0].o, (jint(1)), (frame[3].o));
	sp += 1;
	goto label_9;
	}
label_8:;
	{
	clinit_java_math_BigInteger(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_math_BigInteger);
	init_java_math_BigInteger_Array1_int_int(ctx, sp[0].o, (frame[3].o), (jint(1)));
	sp += 1;
	}
label_9:;
	popStackFrame(ctx);
	INST_ARETURN();

	popStackFrame(ctx);
}

jobject M_java_math_BigInteger_modInverse_java_math_BigInteger_R_java_math_BigInteger(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/math/BigInteger:modInverse", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(3135);
	if (((jint)((java_math_BigInteger *) NULL_CHECK((frame[1].o)))->F_signum) == (jint(1))) goto label_1;
	}
	{
	LINE_NUMBER(3136);
	clinit_java_lang_ArithmeticException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_ArithmeticException);
	init_java_lang_ArithmeticException_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"BigInteger: modulus not positive"_j))));
	throwException(ctx, sp[0].o);	}
label_1:;
	{
	LINE_NUMBER(3138);
	sp[0].o = frame[1].o;
	clinit_java_math_BigInteger(ctx);
	sp[1].o = (jobject)SF_java_math_BigInteger_ONE;
	jint temp0 = (jint)((func_java_math_BigInteger_equals_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_math_BigInteger_equals_java_lang_Object_R_boolean])(ctx, sp[0].o, sp[1].o);
	if (temp0 == 0) goto label_3;
	}
	{
	LINE_NUMBER(3139);
	clinit_java_math_BigInteger(ctx);
	sp[0].o = (jobject)SF_java_math_BigInteger_ZERO;
	popStackFrame(ctx);
	return sp[0].o;
	}
label_3:;
	{
	LINE_NUMBER(3142);
	frame[2].o = (frame[0].o);
	LINE_NUMBER(3143);
	if (((jint)((java_math_BigInteger *) NULL_CHECK((frame[0].o)))->F_signum) < 0) goto label_6;
	}
	{
	jint temp0 = (jint)((func_java_math_BigInteger_compareMagnitude_java_math_BigInteger_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_math_BigInteger_compareMagnitude_java_math_BigInteger_R_int])(ctx, (frame[0].o), (frame[1].o));
	if (temp0 < 0) goto label_7;
	}
label_6:;
	{
	LINE_NUMBER(3144);
	sp[0].o = (jobject)((func_java_math_BigInteger_mod_java_math_BigInteger_R_java_math_BigInteger) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_math_BigInteger_mod_java_math_BigInteger_R_java_math_BigInteger])(ctx, (frame[0].o), (frame[1].o));
	frame[2].o = sp[0].o;
	}
label_7:;
	{
	LINE_NUMBER(3146);
	sp[0].o = frame[2].o;
	clinit_java_math_BigInteger(ctx);
	sp[1].o = (jobject)SF_java_math_BigInteger_ONE;
	jint temp0 = (jint)((func_java_math_BigInteger_equals_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_math_BigInteger_equals_java_lang_Object_R_boolean])(ctx, sp[0].o, sp[1].o);
	if (temp0 == 0) goto label_8;
	}
	{
	LINE_NUMBER(3147);
	clinit_java_math_BigInteger(ctx);
	sp[0].o = (jobject)SF_java_math_BigInteger_ONE;
	popStackFrame(ctx);
	return sp[0].o;
	}
label_8:;
	{
	LINE_NUMBER(3149);
	clinit_java_math_MutableBigInteger(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_math_MutableBigInteger);
	init_java_math_MutableBigInteger_java_math_BigInteger(ctx, sp[0].o, (frame[2].o));
	frame[3].o = sp[0].o;
	LINE_NUMBER(3150);
	clinit_java_math_MutableBigInteger(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_math_MutableBigInteger);
	init_java_math_MutableBigInteger_java_math_BigInteger(ctx, sp[0].o, (frame[1].o));
	frame[4].o = sp[0].o;
	LINE_NUMBER(3152);
	sp[0].o = (jobject)((func_java_math_MutableBigInteger_mutableModInverse_java_math_MutableBigInteger_R_java_math_MutableBigInteger) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_java_math_MutableBigInteger_mutableModInverse_java_math_MutableBigInteger_R_java_math_MutableBigInteger])(ctx, (frame[3].o), (frame[4].o));
	frame[5].o = sp[0].o;
	LINE_NUMBER(3153);
	sp[0].o = (jobject)((func_java_math_MutableBigInteger_toBigInteger_int_R_java_math_BigInteger) ((void **) nullCheck(ctx, (frame[5].o))->vtable)[VTABLE_java_math_MutableBigInteger_toBigInteger_int_R_java_math_BigInteger])(ctx, (frame[5].o), (jint(1)));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_java_math_BigInteger_shiftLeft_int_R_java_math_BigInteger(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/math/BigInteger:shiftLeft", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(3169);
	if (((jint)((java_math_BigInteger *) NULL_CHECK((frame[0].o)))->F_signum) != 0) goto label_1;
	}
	{
	LINE_NUMBER(3170);
	clinit_java_math_BigInteger(ctx);
	sp[0].o = (jobject)SF_java_math_BigInteger_ZERO;
	popStackFrame(ctx);
	return sp[0].o;
	}
label_1:;
	{
	LINE_NUMBER(3171);
	if ((frame[1].i) <= 0) goto label_3;
	}
	{
	LINE_NUMBER(3172);
	clinit_java_math_BigInteger(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_math_BigInteger);
	sp[1].o = (jobject)((java_math_BigInteger *) NULL_CHECK((frame[0].o)))->F_mag;
	sp[1].o = (jobject)SM_java_math_BigInteger_shiftLeft_Array1_int_int_R_Array1_int(ctx, sp[1].o, (frame[1].i));
	init_java_math_BigInteger_Array1_int_int(ctx, sp[0].o, sp[1].o, ((jint)((java_math_BigInteger *) NULL_CHECK((frame[0].o)))->F_signum));
	popStackFrame(ctx);
	return sp[0].o;
	}
label_3:;
	{
	LINE_NUMBER(3173);
	if ((frame[1].i) != 0) goto label_5;
	}
	{
	LINE_NUMBER(3174);
	popStackFrame(ctx);
	return (frame[0].o);
	}
label_5:;
	{
	LINE_NUMBER(3178);
	sp[0].o = (jobject)M_java_math_BigInteger_shiftRightImpl_int_R_java_math_BigInteger(ctx, (frame[0].o), (-(frame[1].i)));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject SM_java_math_BigInteger_shiftLeft_Array1_int_int_R_Array1_int(jcontext ctx, jobject param0, jint param1) {
	jtype frame[15];
	auto stack = &frame[10];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/math/BigInteger:shiftLeft", 15 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_math_BigInteger(ctx);
	frame[0].o = param0;
	frame[1].i = param1;
	{
	LINE_NUMBER(3192);
	frame[2].i = (bit_cast<jint>(bit_cast<uint32_t>((frame[1].i)) >> (jint(5))));
	LINE_NUMBER(3193);
	frame[3].i = ((frame[1].i) & (31));
	LINE_NUMBER(3194);
	frame[4].i = (((jarray) nullCheck(ctx, (frame[0].o)))->length);
	LINE_NUMBER(3195);
	frame[5].o = (jobject(nullptr));
	LINE_NUMBER(3197);
	if ((frame[3].i) != 0) goto label_5;
	}
	{
	LINE_NUMBER(3198);
	sp[0].o = (jobject) createArray(ctx, &class_int, ((frame[4].i) + (frame[2].i)));
	frame[5].o = sp[0].o;
	LINE_NUMBER(3199);
	SM_java_lang_System_arraycopy_java_lang_Object_int_java_lang_Object_int_int(ctx, (frame[0].o), (jint(0)), (frame[5].o), (jint(0)), (frame[4].i));
	goto label_8;
	}
label_5:;
	{
	LINE_NUMBER(3201);
	frame[6].i = (jint(0));
	LINE_NUMBER(3202);
	frame[7].i = ((32) - (frame[3].i));
	LINE_NUMBER(3203);
	frame[8].i = (bit_cast<jint>(bit_cast<uint32_t>(((jint)ARRAY_ACCESS(jint, (frame[0].o), (jint(0))))) >> (frame[7].i)));
	LINE_NUMBER(3204);
	if ((frame[8].i) == 0) goto label_12;
	}
	{
	LINE_NUMBER(3205);
	sp[0].o = (jobject) createArray(ctx, &class_int, (((frame[4].i) + (frame[2].i)) + (jint(1))));
	frame[5].o = sp[0].o;
	LINE_NUMBER(3206);
	sp[0].o = frame[5].o;
	jint temp0 = frame[6].i;
	INST_IINC(6, 1);
	ARRAY_ACCESS(jint, sp[0].o, temp0) = (frame[8].i);
	goto label_15;
	}
label_12:;
	{
	LINE_NUMBER(3208);
	sp[0].o = (jobject) createArray(ctx, &class_int, ((frame[4].i) + (frame[2].i)));
	frame[5].o = sp[0].o;
	}
label_15:;
	{
	LINE_NUMBER(3210);
	frame[9].i = (jint(0));
	}
label_16:;
	{
	LINE_NUMBER(3211);
	if ((frame[9].i) >= ((frame[4].i) - (jint(1)))) goto label_17;
	}
	{
	LINE_NUMBER(3212);
	sp[0].o = frame[5].o;
	jint temp0 = frame[6].i;
	INST_IINC(6, 1);
	sp[1].o = frame[0].o;
	jint temp1 = frame[9].i;
	INST_IINC(9, 1);
	ARRAY_ACCESS(jint, sp[0].o, temp0) = ((((jint)ARRAY_ACCESS(jint, sp[1].o, temp1)) << (frame[3].i)) | (bit_cast<jint>(bit_cast<uint32_t>(((jint)ARRAY_ACCESS(jint, (frame[0].o), (frame[9].i)))) >> (frame[7].i))));
	goto label_16;
	}
label_17:;
	{
	LINE_NUMBER(3213);
	ARRAY_ACCESS(jint, (frame[5].o), (frame[6].i)) = (((jint)ARRAY_ACCESS(jint, (frame[0].o), (frame[9].i))) << (frame[3].i));
	}
label_8:;
	{
	LINE_NUMBER(3215);
	popStackFrame(ctx);
	return (frame[5].o);
	}

	popStackFrame(ctx);
}

jobject M_java_math_BigInteger_shiftRight_int_R_java_math_BigInteger(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/math/BigInteger:shiftRight", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(3229);
	if (((jint)((java_math_BigInteger *) NULL_CHECK((frame[0].o)))->F_signum) != 0) goto label_1;
	}
	{
	LINE_NUMBER(3230);
	clinit_java_math_BigInteger(ctx);
	sp[0].o = (jobject)SF_java_math_BigInteger_ZERO;
	popStackFrame(ctx);
	return sp[0].o;
	}
label_1:;
	{
	LINE_NUMBER(3231);
	if ((frame[1].i) <= 0) goto label_3;
	}
	{
	LINE_NUMBER(3232);
	sp[0].o = (jobject)M_java_math_BigInteger_shiftRightImpl_int_R_java_math_BigInteger(ctx, (frame[0].o), (frame[1].i));
	popStackFrame(ctx);
	return sp[0].o;
	}
label_3:;
	{
	LINE_NUMBER(3233);
	if ((frame[1].i) != 0) goto label_5;
	}
	{
	LINE_NUMBER(3234);
	popStackFrame(ctx);
	return (frame[0].o);
	}
label_5:;
	{
	LINE_NUMBER(3238);
	clinit_java_math_BigInteger(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_math_BigInteger);
	sp[1].o = (jobject)((java_math_BigInteger *) NULL_CHECK((frame[0].o)))->F_mag;
	sp[1].o = (jobject)SM_java_math_BigInteger_shiftLeft_Array1_int_int_R_Array1_int(ctx, sp[1].o, (-(frame[1].i)));
	init_java_math_BigInteger_Array1_int_int(ctx, sp[0].o, sp[1].o, ((jint)((java_math_BigInteger *) NULL_CHECK((frame[0].o)))->F_signum));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_java_math_BigInteger_shiftRightImpl_int_R_java_math_BigInteger(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[15];
	auto stack = &frame[10];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/math/BigInteger:shiftRightImpl", 15 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(3251);
	frame[2].i = (bit_cast<jint>(bit_cast<uint32_t>((frame[1].i)) >> (jint(5))));
	LINE_NUMBER(3252);
	frame[3].i = ((frame[1].i) & (31));
	LINE_NUMBER(3253);
	sp[0].o = (jobject)((java_math_BigInteger *) NULL_CHECK((frame[0].o)))->F_mag;
	frame[4].i = (((jarray) nullCheck(ctx, sp[0].o))->length);
	LINE_NUMBER(3254);
	frame[5].o = (jobject(nullptr));
	LINE_NUMBER(3257);
	if ((frame[2].i) < (frame[4].i)) goto label_5;
	}
	{
	LINE_NUMBER(3258);
	if (((jint)((java_math_BigInteger *) NULL_CHECK((frame[0].o)))->F_signum) < 0) goto label_7;
	}
	clinit_java_math_BigInteger(ctx);
	(sp++)->o = SF_java_math_BigInteger_ZERO;
	goto label_8;
label_7:;
	{
	clinit_java_math_BigInteger(ctx);
	sp[0].o = (jobject)SF_java_math_BigInteger_negConst;
	sp[0].o = (jobject)ARRAY_ACCESS(jobject, sp[0].o, (jint(1)));
	sp += 1;
	}
label_8:;
	popStackFrame(ctx);
	INST_ARETURN();
label_5:;
	{
	LINE_NUMBER(3260);
	if ((frame[3].i) != 0) goto label_9;
	}
	{
	LINE_NUMBER(3261);
	frame[6].i = ((frame[4].i) - (frame[2].i));
	LINE_NUMBER(3262);
	sp[0].o = (jobject)((java_math_BigInteger *) NULL_CHECK((frame[0].o)))->F_mag;
	sp[0].o = (jobject)SM_java_util_Arrays_copyOf_Array1_int_int_R_Array1_int(ctx, sp[0].o, (frame[6].i));
	frame[5].o = sp[0].o;
	LINE_NUMBER(3263);
	goto label_13;
	}
label_9:;
	{
	LINE_NUMBER(3264);
	frame[6].i = (jint(0));
	LINE_NUMBER(3265);
	sp[0].o = (jobject)((java_math_BigInteger *) NULL_CHECK((frame[0].o)))->F_mag;
	frame[7].i = (bit_cast<jint>(bit_cast<uint32_t>(((jint)ARRAY_ACCESS(jint, sp[0].o, (jint(0))))) >> (frame[3].i)));
	LINE_NUMBER(3266);
	if ((frame[7].i) == 0) goto label_16;
	}
	{
	LINE_NUMBER(3267);
	sp[0].o = (jobject) createArray(ctx, &class_int, ((frame[4].i) - (frame[2].i)));
	frame[5].o = sp[0].o;
	LINE_NUMBER(3268);
	sp[0].o = frame[5].o;
	jint temp0 = frame[6].i;
	INST_IINC(6, 1);
	ARRAY_ACCESS(jint, sp[0].o, temp0) = (frame[7].i);
	goto label_19;
	}
label_16:;
	{
	LINE_NUMBER(3270);
	sp[0].o = (jobject) createArray(ctx, &class_int, (((frame[4].i) - (frame[2].i)) - (jint(1))));
	frame[5].o = sp[0].o;
	}
label_19:;
	{
	LINE_NUMBER(3273);
	frame[8].i = ((32) - (frame[3].i));
	LINE_NUMBER(3274);
	frame[9].i = (jint(0));
	}
label_21:;
	{
	LINE_NUMBER(3275);
	if ((frame[9].i) >= (((frame[4].i) - (frame[2].i)) - (jint(1)))) goto label_13;
	}
	{
	LINE_NUMBER(3276);
	sp[0].o = frame[5].o;
	jint temp0 = frame[6].i;
	INST_IINC(6, 1);
	sp[1].o = (jobject)((java_math_BigInteger *) NULL_CHECK((frame[0].o)))->F_mag;
	jint temp1 = frame[9].i;
	INST_IINC(9, 1);
	jint temp2 = ((jint)ARRAY_ACCESS(jint, sp[1].o, temp1)) << (frame[8].i);
	sp[1].o = (jobject)((java_math_BigInteger *) NULL_CHECK((frame[0].o)))->F_mag;
	ARRAY_ACCESS(jint, sp[0].o, temp0) = (temp2 | (bit_cast<jint>(bit_cast<uint32_t>(((jint)ARRAY_ACCESS(jint, sp[1].o, (frame[9].i)))) >> (frame[3].i))));
	goto label_21;
	}
label_13:;
	{
	LINE_NUMBER(3279);
	if (((jint)((java_math_BigInteger *) NULL_CHECK((frame[0].o)))->F_signum) >= 0) goto label_23;
	}
	{
	LINE_NUMBER(3281);
	frame[6].i = (jint(0));
	LINE_NUMBER(3282);
	frame[7].i = ((frame[4].i) - (jint(1)));
	frame[8].i = ((frame[4].i) - (frame[2].i));
	}
label_27:;
	{
	if ((frame[7].i) < (frame[8].i)) goto label_28;
	}
	INST_ILOAD(6);
	if ((--sp)->i != 0) goto label_28;
	{
	LINE_NUMBER(3283);
	sp[0].o = (jobject)((java_math_BigInteger *) NULL_CHECK((frame[0].o)))->F_mag;
	if (((jint)ARRAY_ACCESS(jint, sp[0].o, (frame[7].i))) == 0) goto label_30;
	}
	INST_ICONST(1);
	goto label_31;
label_30:;
	INST_ICONST(0);
label_31:;
	{
	sp -= 1;
	frame[6].i = sp[0].i;
	LINE_NUMBER(3282);
	INST_IINC(7, -1);
	goto label_27;
	}
label_28:;
	{
	LINE_NUMBER(3284);
	if ((frame[6].i) != 0) goto label_33;
	}
	INST_ILOAD(3);
	if ((--sp)->i == 0) goto label_33;
	{
	LINE_NUMBER(3285);
	sp[0].o = (jobject)((java_math_BigInteger *) NULL_CHECK((frame[0].o)))->F_mag;
	if ((((jint)ARRAY_ACCESS(jint, sp[0].o, (((frame[4].i) - (frame[2].i)) - (jint(1))))) << ((32) - (frame[3].i))) == 0) goto label_35;
	}
	INST_ICONST(1);
	goto label_36;
label_35:;
	INST_ICONST(0);
label_36:;
	INST_ISTORE(6);
label_33:;
	{
	LINE_NUMBER(3287);
	if ((frame[6].i) == 0) goto label_23;
	}
	{
	LINE_NUMBER(3288);
	sp[0].o = (jobject)((func_java_math_BigInteger_javaIncrement_Array1_int_R_Array1_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_math_BigInteger_javaIncrement_Array1_int_R_Array1_int])(ctx, (frame[0].o), (frame[5].o));
	frame[5].o = sp[0].o;
	}
label_23:;
	{
	LINE_NUMBER(3291);
	clinit_java_math_BigInteger(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_math_BigInteger);
	init_java_math_BigInteger_Array1_int_int(ctx, sp[0].o, (frame[5].o), ((jint)((java_math_BigInteger *) NULL_CHECK((frame[0].o)))->F_signum));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_java_math_BigInteger_javaIncrement_Array1_int_R_Array1_int(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/math/BigInteger:javaIncrement", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(3295);
	frame[2].i = (jint(0));
	LINE_NUMBER(3296);
	frame[3].i = ((((jarray) nullCheck(ctx, (frame[1].o)))->length) - (jint(1)));
	}
label_2:;
	INST_ILOAD(3);
	if ((--sp)->i < 0) goto label_3;
	INST_ILOAD(2);
	if ((--sp)->i != 0) goto label_3;
	{
	LINE_NUMBER(3297);
	sp[0].o = frame[1].o;
	jint temp0 = frame[3].i;
	jint temp3 = ((jint)ARRAY_ACCESS(jint, sp[0].o, temp0)) + (jint(1));
	ARRAY_ACCESS(jint, sp[0].o, temp0) = temp3;
	frame[2].i = temp3;
	LINE_NUMBER(3296);
	INST_IINC(3, -1);
	goto label_2;
	}
label_3:;
	{
	LINE_NUMBER(3298);
	if ((frame[2].i) != 0) goto label_6;
	}
	{
	LINE_NUMBER(3299);
	sp[0].o = (jobject) createArray(ctx, &class_int, ((((jarray) nullCheck(ctx, (frame[1].o)))->length) + (jint(1))));
	frame[1].o = sp[0].o;
	LINE_NUMBER(3300);
	ARRAY_ACCESS(jint, (frame[1].o), (jint(0))) = (jint(1));
	}
label_6:;
	{
	LINE_NUMBER(3302);
	popStackFrame(ctx);
	return (frame[1].o);
	}

	popStackFrame(ctx);
}

jobject M_java_math_BigInteger_and_java_math_BigInteger_R_java_math_BigInteger(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[10];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/math/BigInteger:and", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(3316);
	jint temp0 = (jint)M_java_math_BigInteger_intLength_R_int(ctx, (frame[0].o));
	jint temp1 = (jint)M_java_math_BigInteger_intLength_R_int(ctx, (frame[1].o));
	jint temp2 = (jint)SM_java_lang_Math_max_int_int_R_int(ctx, temp0, temp1);
	sp[0].o = (jobject) createArray(ctx, &class_int, temp2);
	frame[2].o = sp[0].o;
	LINE_NUMBER(3317);
	frame[3].i = (jint(0));
	}
label_2:;
	{
	if ((frame[3].i) >= (((jarray) nullCheck(ctx, (frame[2].o)))->length)) goto label_3;
	}
	{
	LINE_NUMBER(3318);
	sp[0].o = frame[2].o;
	jint temp0 = frame[3].i;
	jint temp1 = (jint)M_java_math_BigInteger_getInt_int_R_int(ctx, (frame[0].o), (((((jarray) nullCheck(ctx, (frame[2].o)))->length) - (frame[3].i)) - (jint(1))));
	sp[1].o = frame[1].o;
	jint temp2 = ((((jarray) nullCheck(ctx, (frame[2].o)))->length) - (frame[3].i)) - (jint(1));
	LINE_NUMBER(3319);
	jint temp3 = (jint)M_java_math_BigInteger_getInt_int_R_int(ctx, sp[1].o, temp2);
	ARRAY_ACCESS(jint, sp[0].o, temp0) = (temp1 & temp3);
	LINE_NUMBER(3317);
	INST_IINC(3, 1);
	goto label_2;
	}
label_3:;
	{
	LINE_NUMBER(3321);
	sp[0].o = (jobject)SM_java_math_BigInteger_valueOf_Array1_int_R_java_math_BigInteger(ctx, (frame[2].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_java_math_BigInteger_or_java_math_BigInteger_R_java_math_BigInteger(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[10];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/math/BigInteger:or", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(3333);
	jint temp0 = (jint)M_java_math_BigInteger_intLength_R_int(ctx, (frame[0].o));
	jint temp1 = (jint)M_java_math_BigInteger_intLength_R_int(ctx, (frame[1].o));
	jint temp2 = (jint)SM_java_lang_Math_max_int_int_R_int(ctx, temp0, temp1);
	sp[0].o = (jobject) createArray(ctx, &class_int, temp2);
	frame[2].o = sp[0].o;
	LINE_NUMBER(3334);
	frame[3].i = (jint(0));
	}
label_2:;
	{
	if ((frame[3].i) >= (((jarray) nullCheck(ctx, (frame[2].o)))->length)) goto label_3;
	}
	{
	LINE_NUMBER(3335);
	sp[0].o = frame[2].o;
	jint temp0 = frame[3].i;
	jint temp1 = (jint)M_java_math_BigInteger_getInt_int_R_int(ctx, (frame[0].o), (((((jarray) nullCheck(ctx, (frame[2].o)))->length) - (frame[3].i)) - (jint(1))));
	sp[1].o = frame[1].o;
	jint temp2 = ((((jarray) nullCheck(ctx, (frame[2].o)))->length) - (frame[3].i)) - (jint(1));
	LINE_NUMBER(3336);
	jint temp3 = (jint)M_java_math_BigInteger_getInt_int_R_int(ctx, sp[1].o, temp2);
	ARRAY_ACCESS(jint, sp[0].o, temp0) = (temp1 | temp3);
	LINE_NUMBER(3334);
	INST_IINC(3, 1);
	goto label_2;
	}
label_3:;
	{
	LINE_NUMBER(3338);
	sp[0].o = (jobject)SM_java_math_BigInteger_valueOf_Array1_int_R_java_math_BigInteger(ctx, (frame[2].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_java_math_BigInteger_xor_java_math_BigInteger_R_java_math_BigInteger(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[10];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/math/BigInteger:xor", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(3350);
	jint temp0 = (jint)M_java_math_BigInteger_intLength_R_int(ctx, (frame[0].o));
	jint temp1 = (jint)M_java_math_BigInteger_intLength_R_int(ctx, (frame[1].o));
	jint temp2 = (jint)SM_java_lang_Math_max_int_int_R_int(ctx, temp0, temp1);
	sp[0].o = (jobject) createArray(ctx, &class_int, temp2);
	frame[2].o = sp[0].o;
	LINE_NUMBER(3351);
	frame[3].i = (jint(0));
	}
label_2:;
	{
	if ((frame[3].i) >= (((jarray) nullCheck(ctx, (frame[2].o)))->length)) goto label_3;
	}
	{
	LINE_NUMBER(3352);
	sp[0].o = frame[2].o;
	jint temp0 = frame[3].i;
	jint temp1 = (jint)M_java_math_BigInteger_getInt_int_R_int(ctx, (frame[0].o), (((((jarray) nullCheck(ctx, (frame[2].o)))->length) - (frame[3].i)) - (jint(1))));
	sp[1].o = frame[1].o;
	jint temp2 = ((((jarray) nullCheck(ctx, (frame[2].o)))->length) - (frame[3].i)) - (jint(1));
	LINE_NUMBER(3353);
	jint temp3 = (jint)M_java_math_BigInteger_getInt_int_R_int(ctx, sp[1].o, temp2);
	ARRAY_ACCESS(jint, sp[0].o, temp0) = (temp1 ^ temp3);
	LINE_NUMBER(3351);
	INST_IINC(3, 1);
	goto label_2;
	}
label_3:;
	{
	LINE_NUMBER(3355);
	sp[0].o = (jobject)SM_java_math_BigInteger_valueOf_Array1_int_R_java_math_BigInteger(ctx, (frame[2].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_java_math_BigInteger_not_R_java_math_BigInteger(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/math/BigInteger:not", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(3366);
	jint temp0 = (jint)M_java_math_BigInteger_intLength_R_int(ctx, (frame[0].o));
	sp[0].o = (jobject) createArray(ctx, &class_int, temp0);
	frame[1].o = sp[0].o;
	LINE_NUMBER(3367);
	frame[2].i = (jint(0));
	}
label_2:;
	{
	if ((frame[2].i) >= (((jarray) nullCheck(ctx, (frame[1].o)))->length)) goto label_3;
	}
	{
	LINE_NUMBER(3368);
	sp[0].o = frame[1].o;
	jint temp0 = frame[2].i;
	jint temp1 = (jint)M_java_math_BigInteger_getInt_int_R_int(ctx, (frame[0].o), (((((jarray) nullCheck(ctx, (frame[1].o)))->length) - (frame[2].i)) - (jint(1))));
	ARRAY_ACCESS(jint, sp[0].o, temp0) = (temp1 ^ (jint(-1)));
	LINE_NUMBER(3367);
	INST_IINC(2, 1);
	goto label_2;
	}
label_3:;
	{
	LINE_NUMBER(3370);
	sp[0].o = (jobject)SM_java_math_BigInteger_valueOf_Array1_int_R_java_math_BigInteger(ctx, (frame[1].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_java_math_BigInteger_andNot_java_math_BigInteger_R_java_math_BigInteger(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[10];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/math/BigInteger:andNot", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(3384);
	jint temp0 = (jint)M_java_math_BigInteger_intLength_R_int(ctx, (frame[0].o));
	jint temp1 = (jint)M_java_math_BigInteger_intLength_R_int(ctx, (frame[1].o));
	jint temp2 = (jint)SM_java_lang_Math_max_int_int_R_int(ctx, temp0, temp1);
	sp[0].o = (jobject) createArray(ctx, &class_int, temp2);
	frame[2].o = sp[0].o;
	LINE_NUMBER(3385);
	frame[3].i = (jint(0));
	}
label_2:;
	{
	if ((frame[3].i) >= (((jarray) nullCheck(ctx, (frame[2].o)))->length)) goto label_3;
	}
	{
	LINE_NUMBER(3386);
	sp[0].o = frame[2].o;
	jint temp0 = frame[3].i;
	jint temp1 = (jint)M_java_math_BigInteger_getInt_int_R_int(ctx, (frame[0].o), (((((jarray) nullCheck(ctx, (frame[2].o)))->length) - (frame[3].i)) - (jint(1))));
	sp[1].o = frame[1].o;
	jint temp2 = ((((jarray) nullCheck(ctx, (frame[2].o)))->length) - (frame[3].i)) - (jint(1));
	LINE_NUMBER(3387);
	jint temp3 = (jint)M_java_math_BigInteger_getInt_int_R_int(ctx, sp[1].o, temp2);
	ARRAY_ACCESS(jint, sp[0].o, temp0) = (temp1 & (temp3 ^ (jint(-1))));
	LINE_NUMBER(3385);
	INST_IINC(3, 1);
	goto label_2;
	}
label_3:;
	{
	LINE_NUMBER(3389);
	sp[0].o = (jobject)SM_java_math_BigInteger_valueOf_Array1_int_R_java_math_BigInteger(ctx, (frame[2].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jbool M_java_math_BigInteger_testBit_int_R_boolean(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/math/BigInteger:testBit", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(3404);
	if ((frame[1].i) >= 0) goto label_1;
	}
	{
	LINE_NUMBER(3405);
	clinit_java_lang_ArithmeticException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_ArithmeticException);
	init_java_lang_ArithmeticException_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"Negative bit address"_j))));
	throwException(ctx, sp[0].o);	}
label_1:;
	{
	LINE_NUMBER(3407);
	jint temp0 = (jint)M_java_math_BigInteger_getInt_int_R_int(ctx, (frame[0].o), (bit_cast<jint>(bit_cast<uint32_t>((frame[1].i)) >> (jint(5)))));
	if ((temp0 & ((jint(1)) << ((frame[1].i) & (31)))) == 0) goto label_3;
	}
	INST_ICONST(1);
	goto label_4;
label_3:;
	INST_ICONST(0);
label_4:;
	popStackFrame(ctx);
	INST_IRETURN();

	popStackFrame(ctx);
}

jobject M_java_math_BigInteger_setBit_int_R_java_math_BigInteger(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[11];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/math/BigInteger:setBit", 11 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(3419);
	if ((frame[1].i) >= 0) goto label_1;
	}
	{
	LINE_NUMBER(3420);
	clinit_java_lang_ArithmeticException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_ArithmeticException);
	init_java_lang_ArithmeticException_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"Negative bit address"_j))));
	throwException(ctx, sp[0].o);	}
label_1:;
	{
	LINE_NUMBER(3422);
	frame[2].i = (bit_cast<jint>(bit_cast<uint32_t>((frame[1].i)) >> (jint(5))));
	LINE_NUMBER(3423);
	jint temp0 = (jint)M_java_math_BigInteger_intLength_R_int(ctx, (frame[0].o));
	jint temp1 = (jint)SM_java_lang_Math_max_int_int_R_int(ctx, temp0, ((frame[2].i) + (jint(2))));
	sp[0].o = (jobject) createArray(ctx, &class_int, temp1);
	frame[3].o = sp[0].o;
	LINE_NUMBER(3425);
	frame[4].i = (jint(0));
	}
label_5:;
	{
	if ((frame[4].i) >= (((jarray) nullCheck(ctx, (frame[3].o)))->length)) goto label_6;
	}
	{
	LINE_NUMBER(3426);
	sp[0].o = frame[3].o;
	jint temp0 = ((((jarray) nullCheck(ctx, (frame[3].o)))->length) - (frame[4].i)) - (jint(1));
	jint temp1 = (jint)M_java_math_BigInteger_getInt_int_R_int(ctx, (frame[0].o), (frame[4].i));
	ARRAY_ACCESS(jint, sp[0].o, temp0) = temp1;
	LINE_NUMBER(3425);
	INST_IINC(4, 1);
	goto label_5;
	}
label_6:;
	{
	LINE_NUMBER(3428);
	sp[0].o = frame[3].o;
	jint temp0 = ((((jarray) nullCheck(ctx, (frame[3].o)))->length) - (frame[2].i)) - (jint(1));
	ARRAY_ACCESS(jint, sp[0].o, temp0) = (((jint)ARRAY_ACCESS(jint, sp[0].o, temp0)) | ((jint(1)) << ((frame[1].i) & (31))));
	LINE_NUMBER(3430);
	sp[0].o = (jobject)SM_java_math_BigInteger_valueOf_Array1_int_R_java_math_BigInteger(ctx, (frame[3].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_java_math_BigInteger_clearBit_int_R_java_math_BigInteger(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[11];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/math/BigInteger:clearBit", 11 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(3443);
	if ((frame[1].i) >= 0) goto label_1;
	}
	{
	LINE_NUMBER(3444);
	clinit_java_lang_ArithmeticException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_ArithmeticException);
	init_java_lang_ArithmeticException_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"Negative bit address"_j))));
	throwException(ctx, sp[0].o);	}
label_1:;
	{
	LINE_NUMBER(3446);
	frame[2].i = (bit_cast<jint>(bit_cast<uint32_t>((frame[1].i)) >> (jint(5))));
	LINE_NUMBER(3447);
	jint temp0 = (jint)M_java_math_BigInteger_intLength_R_int(ctx, (frame[0].o));
	jint temp1 = (jint)SM_java_lang_Math_max_int_int_R_int(ctx, temp0, ((bit_cast<jint>(bit_cast<uint32_t>(((frame[1].i) + (jint(1)))) >> (jint(5)))) + (jint(1))));
	sp[0].o = (jobject) createArray(ctx, &class_int, temp1);
	frame[3].o = sp[0].o;
	LINE_NUMBER(3449);
	frame[4].i = (jint(0));
	}
label_5:;
	{
	if ((frame[4].i) >= (((jarray) nullCheck(ctx, (frame[3].o)))->length)) goto label_6;
	}
	{
	LINE_NUMBER(3450);
	sp[0].o = frame[3].o;
	jint temp0 = ((((jarray) nullCheck(ctx, (frame[3].o)))->length) - (frame[4].i)) - (jint(1));
	jint temp1 = (jint)M_java_math_BigInteger_getInt_int_R_int(ctx, (frame[0].o), (frame[4].i));
	ARRAY_ACCESS(jint, sp[0].o, temp0) = temp1;
	LINE_NUMBER(3449);
	INST_IINC(4, 1);
	goto label_5;
	}
label_6:;
	{
	LINE_NUMBER(3452);
	sp[0].o = frame[3].o;
	jint temp0 = ((((jarray) nullCheck(ctx, (frame[3].o)))->length) - (frame[2].i)) - (jint(1));
	ARRAY_ACCESS(jint, sp[0].o, temp0) = (((jint)ARRAY_ACCESS(jint, sp[0].o, temp0)) & (((jint(1)) << ((frame[1].i) & (31))) ^ (jint(-1))));
	LINE_NUMBER(3454);
	sp[0].o = (jobject)SM_java_math_BigInteger_valueOf_Array1_int_R_java_math_BigInteger(ctx, (frame[3].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_java_math_BigInteger_flipBit_int_R_java_math_BigInteger(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[11];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/math/BigInteger:flipBit", 11 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(3467);
	if ((frame[1].i) >= 0) goto label_1;
	}
	{
	LINE_NUMBER(3468);
	clinit_java_lang_ArithmeticException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_ArithmeticException);
	init_java_lang_ArithmeticException_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"Negative bit address"_j))));
	throwException(ctx, sp[0].o);	}
label_1:;
	{
	LINE_NUMBER(3470);
	frame[2].i = (bit_cast<jint>(bit_cast<uint32_t>((frame[1].i)) >> (jint(5))));
	LINE_NUMBER(3471);
	jint temp0 = (jint)M_java_math_BigInteger_intLength_R_int(ctx, (frame[0].o));
	jint temp1 = (jint)SM_java_lang_Math_max_int_int_R_int(ctx, temp0, ((frame[2].i) + (jint(2))));
	sp[0].o = (jobject) createArray(ctx, &class_int, temp1);
	frame[3].o = sp[0].o;
	LINE_NUMBER(3473);
	frame[4].i = (jint(0));
	}
label_5:;
	{
	if ((frame[4].i) >= (((jarray) nullCheck(ctx, (frame[3].o)))->length)) goto label_6;
	}
	{
	LINE_NUMBER(3474);
	sp[0].o = frame[3].o;
	jint temp0 = ((((jarray) nullCheck(ctx, (frame[3].o)))->length) - (frame[4].i)) - (jint(1));
	jint temp1 = (jint)M_java_math_BigInteger_getInt_int_R_int(ctx, (frame[0].o), (frame[4].i));
	ARRAY_ACCESS(jint, sp[0].o, temp0) = temp1;
	LINE_NUMBER(3473);
	INST_IINC(4, 1);
	goto label_5;
	}
label_6:;
	{
	LINE_NUMBER(3476);
	sp[0].o = frame[3].o;
	jint temp0 = ((((jarray) nullCheck(ctx, (frame[3].o)))->length) - (frame[2].i)) - (jint(1));
	ARRAY_ACCESS(jint, sp[0].o, temp0) = (((jint)ARRAY_ACCESS(jint, sp[0].o, temp0)) ^ ((jint(1)) << ((frame[1].i) & (31))));
	LINE_NUMBER(3478);
	sp[0].o = (jobject)SM_java_math_BigInteger_valueOf_Array1_int_R_java_math_BigInteger(ctx, (frame[3].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jint M_java_math_BigInteger_getLowestSetBit_R_int(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/math/BigInteger:getLowestSetBit", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(3490);
	frame[1].i = (((jint)((java_math_BigInteger *) NULL_CHECK((frame[0].o)))->F_lowestSetBit) - (jint(2)));
	LINE_NUMBER(3491);
	if ((frame[1].i) != (-2)) goto label_2;
	}
	{
	LINE_NUMBER(3492);
	frame[1].i = (jint(0));
	LINE_NUMBER(3493);
	if (((jint)((java_math_BigInteger *) NULL_CHECK((frame[0].o)))->F_signum) != 0) goto label_5;
	}
	{
	LINE_NUMBER(3494);
	INST_IINC(1, -1);
	goto label_7;
	}
label_5:;
	{
	LINE_NUMBER(3498);
	frame[2].i = (jint(0));
	}
label_8:;
	{
	jint temp0 = (jint)M_java_math_BigInteger_getInt_int_R_int(ctx, (frame[0].o), (frame[2].i));
	frame[3].i = temp0;
	if (temp0 != 0) goto label_10;
	}
	INST_IINC(2, 1);
	goto label_8;
label_10:;
	{
	LINE_NUMBER(3500);
	jint temp0 = frame[1].i;
	jint temp1 = (frame[2].i) << (jint(5));
	jint temp2 = (jint)SM_java_lang_Integer_numberOfTrailingZeros_int_R_int(ctx, (frame[3].i));
	frame[1].i = (temp0 + (temp1 + temp2));
	}
label_7:;
	{
	LINE_NUMBER(3502);
	((java_math_BigInteger *) NULL_CHECK((frame[0].o)))->F_lowestSetBit = ((frame[1].i) + (jint(2)));
	}
label_2:;
	{
	LINE_NUMBER(3504);
	popStackFrame(ctx);
	return (frame[1].i);
	}

	popStackFrame(ctx);
}

jint M_java_math_BigInteger_bitLength_R_int(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[10];
	auto stack = &frame[7];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/math/BigInteger:bitLength", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(3521);
	frame[1].i = (((jint)((java_math_BigInteger *) NULL_CHECK((frame[0].o)))->F_bitLength) - (jint(1)));
	LINE_NUMBER(3522);
	if ((frame[1].i) != (jint(-1))) goto label_2;
	}
	{
	LINE_NUMBER(3523);
	sp[0].o = (jobject)((java_math_BigInteger *) NULL_CHECK((frame[0].o)))->F_mag;
	frame[2].o = sp[0].o;
	LINE_NUMBER(3524);
	frame[3].i = (((jarray) nullCheck(ctx, (frame[2].o)))->length);
	LINE_NUMBER(3525);
	if ((frame[3].i) != 0) goto label_6;
	}
	{
	LINE_NUMBER(3526);
	frame[1].i = (jint(0));
	goto label_8;
	}
label_6:;
	{
	LINE_NUMBER(3529);
	jint temp0 = ((frame[3].i) - (jint(1))) << (jint(5));
	sp[0].o = (jobject)((java_math_BigInteger *) NULL_CHECK((frame[0].o)))->F_mag;
	jint temp1 = (jint)SM_java_math_BigInteger_bitLengthForInt_int_R_int(ctx, ((jint)ARRAY_ACCESS(jint, sp[0].o, (jint(0)))));
	frame[4].i = (temp0 + temp1);
	LINE_NUMBER(3530);
	if (((jint)((java_math_BigInteger *) NULL_CHECK((frame[0].o)))->F_signum) >= 0) goto label_10;
	}
	{
	LINE_NUMBER(3532);
	sp[0].o = (jobject)((java_math_BigInteger *) NULL_CHECK((frame[0].o)))->F_mag;
	jint temp0 = (jint)SM_java_lang_Integer_bitCount_int_R_int(ctx, ((jint)ARRAY_ACCESS(jint, sp[0].o, (jint(0)))));
	if (temp0 != (jint(1))) goto label_12;
	}
	INST_ICONST(1);
	goto label_13;
label_12:;
	INST_ICONST(0);
label_13:;
	{
	sp -= 1;
	frame[5].i = sp[0].i;
	LINE_NUMBER(3533);
	frame[6].i = (jint(1));
	}
label_15:;
	{
	if ((frame[6].i) >= (frame[3].i)) goto label_16;
	}
	INST_ILOAD(5);
	if ((--sp)->i == 0) goto label_16;
	{
	LINE_NUMBER(3534);
	sp[0].o = (jobject)((java_math_BigInteger *) NULL_CHECK((frame[0].o)))->F_mag;
	if (((jint)ARRAY_ACCESS(jint, sp[0].o, (frame[6].i))) != 0) goto label_18;
	}
	INST_ICONST(1);
	goto label_19;
label_18:;
	INST_ICONST(0);
label_19:;
	{
	sp -= 1;
	frame[5].i = sp[0].i;
	LINE_NUMBER(3533);
	INST_IINC(6, 1);
	goto label_15;
	}
label_16:;
	{
	LINE_NUMBER(3536);
	if ((frame[5].i) == 0) goto label_21;
	}
	{
	jint temp0 = (frame[4].i) - (jint(1));
	sp[0].i = temp0;
	sp += 1;
	goto label_22;
	}
label_21:;
	INST_ILOAD(4);
label_22:;
	{
	sp -= 1;
	frame[1].i = sp[0].i;
	LINE_NUMBER(3537);
	goto label_8;
	}
label_10:;
	{
	LINE_NUMBER(3538);
	frame[1].i = (frame[4].i);
	}
label_8:;
	{
	LINE_NUMBER(3541);
	((java_math_BigInteger *) NULL_CHECK((frame[0].o)))->F_bitLength = ((frame[1].i) + (jint(1)));
	}
label_2:;
	{
	LINE_NUMBER(3543);
	popStackFrame(ctx);
	return (frame[1].i);
	}

	popStackFrame(ctx);
}

jint M_java_math_BigInteger_bitCount_R_int(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/math/BigInteger:bitCount", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(3555);
	frame[1].i = (((jint)((java_math_BigInteger *) NULL_CHECK((frame[0].o)))->F_bitCount) - (jint(1)));
	LINE_NUMBER(3556);
	if ((frame[1].i) != (jint(-1))) goto label_2;
	}
	{
	LINE_NUMBER(3557);
	frame[1].i = (jint(0));
	LINE_NUMBER(3559);
	frame[2].i = (jint(0));
	}
label_5:;
	{
	jint temp0 = frame[2].i;
	sp[0].o = (jobject)((java_math_BigInteger *) NULL_CHECK((frame[0].o)))->F_mag;
	if (temp0 >= (((jarray) nullCheck(ctx, sp[0].o))->length)) goto label_6;
	}
	{
	LINE_NUMBER(3560);
	jint temp0 = frame[1].i;
	sp[0].o = (jobject)((java_math_BigInteger *) NULL_CHECK((frame[0].o)))->F_mag;
	jint temp1 = (jint)SM_java_lang_Integer_bitCount_int_R_int(ctx, ((jint)ARRAY_ACCESS(jint, sp[0].o, (frame[2].i))));
	frame[1].i = (temp0 + temp1);
	LINE_NUMBER(3559);
	INST_IINC(2, 1);
	goto label_5;
	}
label_6:;
	{
	LINE_NUMBER(3561);
	if (((jint)((java_math_BigInteger *) NULL_CHECK((frame[0].o)))->F_signum) >= 0) goto label_9;
	}
	{
	LINE_NUMBER(3563);
	frame[2].i = (jint(0));
	LINE_NUMBER(3564);
	sp[0].o = (jobject)((java_math_BigInteger *) NULL_CHECK((frame[0].o)))->F_mag;
	frame[3].i = ((((jarray) nullCheck(ctx, sp[0].o))->length) - (jint(1)));
	}
label_12:;
	{
	sp[0].o = (jobject)((java_math_BigInteger *) NULL_CHECK((frame[0].o)))->F_mag;
	if (((jint)ARRAY_ACCESS(jint, sp[0].o, (frame[3].i))) != 0) goto label_13;
	}
	{
	LINE_NUMBER(3565);
	INST_IINC(2, 32);
	LINE_NUMBER(3564);
	INST_IINC(3, -1);
	goto label_12;
	}
label_13:;
	{
	LINE_NUMBER(3566);
	jint temp0 = frame[2].i;
	sp[0].o = (jobject)((java_math_BigInteger *) NULL_CHECK((frame[0].o)))->F_mag;
	jint temp1 = (jint)SM_java_lang_Integer_numberOfTrailingZeros_int_R_int(ctx, ((jint)ARRAY_ACCESS(jint, sp[0].o, (frame[3].i))));
	frame[2].i = (temp0 + temp1);
	LINE_NUMBER(3567);
	frame[1].i = ((frame[1].i) + ((frame[2].i) - (jint(1))));
	}
label_9:;
	{
	LINE_NUMBER(3569);
	((java_math_BigInteger *) NULL_CHECK((frame[0].o)))->F_bitCount = ((frame[1].i) + (jint(1)));
	}
label_2:;
	{
	LINE_NUMBER(3571);
	popStackFrame(ctx);
	return (frame[1].i);
	}

	popStackFrame(ctx);
}

jbool M_java_math_BigInteger_isProbablePrime_int_R_boolean(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/math/BigInteger:isProbablePrime", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(3591);
	if ((frame[1].i) > 0) goto label_1;
	}
	{
	LINE_NUMBER(3592);
	popStackFrame(ctx);
	return (jint(1));
	}
label_1:;
	{
	LINE_NUMBER(3593);
	sp[0].o = (jobject)((func_java_math_BigInteger_abs_R_java_math_BigInteger) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_math_BigInteger_abs_R_java_math_BigInteger])(ctx, (frame[0].o));
	frame[2].o = sp[0].o;
	LINE_NUMBER(3594);
	sp[0].o = frame[2].o;
	clinit_java_math_BigInteger(ctx);
	sp[1].o = (jobject)SF_java_math_BigInteger_TWO;
	jint temp0 = (jint)((func_java_math_BigInteger_equals_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_math_BigInteger_equals_java_lang_Object_R_boolean])(ctx, sp[0].o, sp[1].o);
	if (temp0 == 0) goto label_4;
	}
	{
	LINE_NUMBER(3595);
	popStackFrame(ctx);
	return (jint(1));
	}
label_4:;
	{
	LINE_NUMBER(3596);
	jint temp0 = (jint)((func_java_math_BigInteger_testBit_int_R_boolean) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_java_math_BigInteger_testBit_int_R_boolean])(ctx, (frame[2].o), (jint(0)));
	if (temp0 == 0) goto label_6;
	}
	{
	sp[0].o = frame[2].o;
	clinit_java_math_BigInteger(ctx);
	sp[1].o = (jobject)SF_java_math_BigInteger_ONE;
	jint temp0 = (jint)((func_java_math_BigInteger_equals_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_math_BigInteger_equals_java_lang_Object_R_boolean])(ctx, sp[0].o, sp[1].o);
	if (temp0 == 0) goto label_7;
	}
label_6:;
	{
	LINE_NUMBER(3597);
	popStackFrame(ctx);
	return (jint(0));
	}
label_7:;
	{
	LINE_NUMBER(3599);
	jint temp0 = (jint)((func_java_math_BigInteger_primeToCertainty_int_java_util_Random_R_boolean) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_java_math_BigInteger_primeToCertainty_int_java_util_Random_R_boolean])(ctx, (frame[2].o), (frame[1].i), (jobject(nullptr)));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jint M_java_math_BigInteger_compareTo_java_math_BigInteger_R_int(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/math/BigInteger:compareTo", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(3618);
	if (((jint)((java_math_BigInteger *) NULL_CHECK((frame[0].o)))->F_signum) != ((jint)((java_math_BigInteger *) NULL_CHECK((frame[1].o)))->F_signum)) goto label_1;
	}
	{
	LINE_NUMBER(3619);
	switch(((jint)((java_math_BigInteger *) NULL_CHECK((frame[0].o)))->F_signum)) {
		case -1: goto label_3;
		case 1: goto label_4;
		default: goto label_5;
	}
	}
label_4:;
	{
	LINE_NUMBER(3621);
	jint temp0 = (jint)((func_java_math_BigInteger_compareMagnitude_java_math_BigInteger_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_math_BigInteger_compareMagnitude_java_math_BigInteger_R_int])(ctx, (frame[0].o), (frame[1].o));
	popStackFrame(ctx);
	return temp0;
	}
label_3:;
	{
	LINE_NUMBER(3623);
	jint temp0 = (jint)((func_java_math_BigInteger_compareMagnitude_java_math_BigInteger_R_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_math_BigInteger_compareMagnitude_java_math_BigInteger_R_int])(ctx, (frame[1].o), (frame[0].o));
	popStackFrame(ctx);
	return temp0;
	}
label_5:;
	{
	LINE_NUMBER(3625);
	popStackFrame(ctx);
	return (jint(0));
	}
label_1:;
	{
	LINE_NUMBER(3628);
	if (((jint)((java_math_BigInteger *) NULL_CHECK((frame[0].o)))->F_signum) <= ((jint)((java_math_BigInteger *) NULL_CHECK((frame[1].o)))->F_signum)) goto label_6;
	}
	INST_ICONST(1);
	goto label_7;
label_6:;
	INST_ICONST(-1);
label_7:;
	popStackFrame(ctx);
	INST_IRETURN();

	popStackFrame(ctx);
}

jint M_java_math_BigInteger_compareMagnitude_java_math_BigInteger_R_int(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[15];
	auto stack = &frame[9];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/math/BigInteger:compareMagnitude", 15 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(3640);
	sp[0].o = (jobject)((java_math_BigInteger *) NULL_CHECK((frame[0].o)))->F_mag;
	frame[2].o = sp[0].o;
	LINE_NUMBER(3641);
	frame[3].i = (((jarray) nullCheck(ctx, (frame[2].o)))->length);
	LINE_NUMBER(3642);
	sp[0].o = (jobject)((java_math_BigInteger *) NULL_CHECK((frame[1].o)))->F_mag;
	frame[4].o = sp[0].o;
	LINE_NUMBER(3643);
	frame[5].i = (((jarray) nullCheck(ctx, (frame[4].o)))->length);
	LINE_NUMBER(3644);
	if ((frame[3].i) >= (frame[5].i)) goto label_5;
	}
	{
	LINE_NUMBER(3645);
	popStackFrame(ctx);
	return (jint(-1));
	}
label_5:;
	{
	LINE_NUMBER(3646);
	if ((frame[3].i) <= (frame[5].i)) goto label_7;
	}
	{
	LINE_NUMBER(3647);
	popStackFrame(ctx);
	return (jint(1));
	}
label_7:;
	{
	LINE_NUMBER(3648);
	frame[6].i = (jint(0));
	}
label_9:;
	{
	if ((frame[6].i) >= (frame[3].i)) goto label_10;
	}
	{
	LINE_NUMBER(3649);
	frame[7].i = ((jint)ARRAY_ACCESS(jint, (frame[2].o), (frame[6].i)));
	LINE_NUMBER(3650);
	frame[8].i = ((jint)ARRAY_ACCESS(jint, (frame[4].o), (frame[6].i)));
	LINE_NUMBER(3651);
	if ((frame[7].i) == (frame[8].i)) goto label_14;
	}
	{
	LINE_NUMBER(3652);
	if ((longCompare(((jlong((frame[7].i))) & (jlong(4294967295ll))), ((jlong((frame[8].i))) & (jlong(4294967295ll))))) >= 0) goto label_16;
	}
	INST_ICONST(-1);
	goto label_17;
label_16:;
	INST_ICONST(1);
label_17:;
	popStackFrame(ctx);
	INST_IRETURN();
label_14:;
	{
	LINE_NUMBER(3648);
	INST_IINC(6, 1);
	goto label_9;
	}
label_10:;
	{
	LINE_NUMBER(3654);
	popStackFrame(ctx);
	return (jint(0));
	}

	popStackFrame(ctx);
}

jint M_java_math_BigInteger_compareMagnitude_long_R_int(jcontext ctx, jobject self, jlong param0) {
	NULL_CHECK(self);
	jtype frame[14];
	auto stack = &frame[8];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/math/BigInteger:compareMagnitude", 14 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].l = param0;
	{
	LINE_NUMBER(3662);
	if ((clinit_java_math_BigInteger(ctx), (jint)SF_java_math_BigInteger_$assertionsDisabled) != 0) goto label_1;
	}
	{
	if ((longCompare((frame[1].l), (jlong(-9223372036854775807ll)))) != 0) goto label_1;
	}
	{
	clinit_java_lang_AssertionError(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_AssertionError);
	init_java_lang_AssertionError(ctx, sp[0].o);
	throwException(ctx, sp[0].o);	}
label_1:;
	{
	LINE_NUMBER(3663);
	sp[0].o = (jobject)((java_math_BigInteger *) NULL_CHECK((frame[0].o)))->F_mag;
	frame[3].o = sp[0].o;
	LINE_NUMBER(3664);
	frame[4].i = (((jarray) nullCheck(ctx, (frame[3].o)))->length);
	LINE_NUMBER(3665);
	if ((frame[4].i) <= (jint(2))) goto label_4;
	}
	{
	LINE_NUMBER(3666);
	popStackFrame(ctx);
	return (jint(1));
	}
label_4:;
	{
	LINE_NUMBER(3668);
	if ((longCompare((frame[1].l), (jlong(0)))) >= 0) goto label_6;
	}
	{
	LINE_NUMBER(3669);
	frame[1].l = (-(frame[1].l));
	}
label_6:;
	{
	LINE_NUMBER(3671);
	frame[5].i = (jint((bit_cast<jlong>(bit_cast<uint64_t>((frame[1].l)) >> (32)))));
	LINE_NUMBER(3672);
	if ((frame[5].i) != 0) goto label_9;
	}
	{
	LINE_NUMBER(3673);
	if ((frame[4].i) >= (jint(1))) goto label_11;
	}
	{
	LINE_NUMBER(3674);
	popStackFrame(ctx);
	return (jint(-1));
	}
label_11:;
	{
	LINE_NUMBER(3675);
	if ((frame[4].i) <= (jint(1))) goto label_13;
	}
	{
	LINE_NUMBER(3676);
	popStackFrame(ctx);
	return (jint(1));
	}
label_13:;
	{
	LINE_NUMBER(3677);
	frame[6].i = ((jint)ARRAY_ACCESS(jint, (frame[3].o), (jint(0))));
	LINE_NUMBER(3678);
	frame[7].i = (jint((frame[1].l)));
	LINE_NUMBER(3679);
	if ((frame[6].i) == (frame[7].i)) goto label_17;
	}
	{
	LINE_NUMBER(3680);
	if ((longCompare(((jlong((frame[6].i))) & (jlong(4294967295ll))), ((jlong((frame[7].i))) & (jlong(4294967295ll))))) >= 0) goto label_19;
	}
	INST_ICONST(-1);
	goto label_20;
label_19:;
	INST_ICONST(1);
label_20:;
	popStackFrame(ctx);
	INST_IRETURN();
label_17:;
	{
	LINE_NUMBER(3682);
	popStackFrame(ctx);
	return (jint(0));
	}
label_9:;
	{
	LINE_NUMBER(3684);
	if ((frame[4].i) >= (jint(2))) goto label_21;
	}
	{
	LINE_NUMBER(3685);
	popStackFrame(ctx);
	return (jint(-1));
	}
label_21:;
	{
	LINE_NUMBER(3686);
	frame[6].i = ((jint)ARRAY_ACCESS(jint, (frame[3].o), (jint(0))));
	LINE_NUMBER(3687);
	frame[7].i = (frame[5].i);
	LINE_NUMBER(3688);
	if ((frame[6].i) == (frame[7].i)) goto label_25;
	}
	{
	LINE_NUMBER(3689);
	if ((longCompare(((jlong((frame[6].i))) & (jlong(4294967295ll))), ((jlong((frame[7].i))) & (jlong(4294967295ll))))) >= 0) goto label_27;
	}
	INST_ICONST(-1);
	goto label_28;
label_27:;
	INST_ICONST(1);
label_28:;
	popStackFrame(ctx);
	INST_IRETURN();
label_25:;
	{
	LINE_NUMBER(3691);
	frame[6].i = ((jint)ARRAY_ACCESS(jint, (frame[3].o), (jint(1))));
	LINE_NUMBER(3692);
	frame[7].i = (jint((frame[1].l)));
	LINE_NUMBER(3693);
	if ((frame[6].i) == (frame[7].i)) goto label_31;
	}
	{
	LINE_NUMBER(3694);
	if ((longCompare(((jlong((frame[6].i))) & (jlong(4294967295ll))), ((jlong((frame[7].i))) & (jlong(4294967295ll))))) >= 0) goto label_33;
	}
	INST_ICONST(-1);
	goto label_34;
label_33:;
	INST_ICONST(1);
label_34:;
	popStackFrame(ctx);
	INST_IRETURN();
label_31:;
	{
	LINE_NUMBER(3696);
	popStackFrame(ctx);
	return (jint(0));
	}

	popStackFrame(ctx);
}

jbool M_java_math_BigInteger_equals_java_lang_Object_R_boolean(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[10];
	auto stack = &frame[7];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/math/BigInteger:equals", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(3709);
	if ((frame[1].o) != (frame[0].o)) goto label_1;
	}
	{
	LINE_NUMBER(3710);
	popStackFrame(ctx);
	return (jint(1));
	}
label_1:;
	{
	LINE_NUMBER(3712);
	if ((isInstance(ctx, (frame[1].o), &class_java_math_BigInteger)) != 0) goto label_3;
	}
	{
	LINE_NUMBER(3713);
	popStackFrame(ctx);
	return (jint(0));
	}
label_3:;
	{
	LINE_NUMBER(3715);
	frame[2].o = (checkCast(ctx, &class_java_math_BigInteger, (frame[1].o)));
	LINE_NUMBER(3716);
	if (((jint)((java_math_BigInteger *) NULL_CHECK((frame[2].o)))->F_signum) == ((jint)((java_math_BigInteger *) NULL_CHECK((frame[0].o)))->F_signum)) goto label_6;
	}
	{
	LINE_NUMBER(3717);
	popStackFrame(ctx);
	return (jint(0));
	}
label_6:;
	{
	LINE_NUMBER(3719);
	sp[0].o = (jobject)((java_math_BigInteger *) NULL_CHECK((frame[0].o)))->F_mag;
	frame[3].o = sp[0].o;
	LINE_NUMBER(3720);
	frame[4].i = (((jarray) nullCheck(ctx, (frame[3].o)))->length);
	LINE_NUMBER(3721);
	sp[0].o = (jobject)((java_math_BigInteger *) NULL_CHECK((frame[2].o)))->F_mag;
	frame[5].o = sp[0].o;
	LINE_NUMBER(3722);
	if ((frame[4].i) == (((jarray) nullCheck(ctx, (frame[5].o)))->length)) goto label_11;
	}
	{
	LINE_NUMBER(3723);
	popStackFrame(ctx);
	return (jint(0));
	}
label_11:;
	{
	LINE_NUMBER(3725);
	frame[6].i = (jint(0));
	}
label_13:;
	{
	if ((frame[6].i) >= (frame[4].i)) goto label_14;
	}
	{
	LINE_NUMBER(3726);
	if (((jint)ARRAY_ACCESS(jint, (frame[5].o), (frame[6].i))) == ((jint)ARRAY_ACCESS(jint, (frame[3].o), (frame[6].i)))) goto label_16;
	}
	{
	LINE_NUMBER(3727);
	popStackFrame(ctx);
	return (jint(0));
	}
label_16:;
	{
	LINE_NUMBER(3725);
	INST_IINC(6, 1);
	goto label_13;
	}
label_14:;
	{
	LINE_NUMBER(3729);
	popStackFrame(ctx);
	return (jint(1));
	}

	popStackFrame(ctx);
}

jobject M_java_math_BigInteger_min_java_math_BigInteger_R_java_math_BigInteger(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/math/BigInteger:min", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(3740);
	jint temp0 = (jint)((func_java_math_BigInteger_compareTo_java_math_BigInteger_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_math_BigInteger_compareTo_java_math_BigInteger_R_int])(ctx, (frame[0].o), (frame[1].o));
	if (temp0 >= 0) goto label_1;
	}
	INST_ALOAD(0);
	goto label_2;
label_1:;
	INST_ALOAD(1);
label_2:;
	popStackFrame(ctx);
	INST_ARETURN();

	popStackFrame(ctx);
}

jobject M_java_math_BigInteger_max_java_math_BigInteger_R_java_math_BigInteger(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/math/BigInteger:max", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(3751);
	jint temp0 = (jint)((func_java_math_BigInteger_compareTo_java_math_BigInteger_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_math_BigInteger_compareTo_java_math_BigInteger_R_int])(ctx, (frame[0].o), (frame[1].o));
	if (temp0 <= 0) goto label_1;
	}
	INST_ALOAD(0);
	goto label_2;
label_1:;
	INST_ALOAD(1);
label_2:;
	popStackFrame(ctx);
	INST_ARETURN();

	popStackFrame(ctx);
}

jint M_java_math_BigInteger_hashCode_R_int(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/math/BigInteger:hashCode", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(3763);
	frame[1].i = (jint(0));
	LINE_NUMBER(3765);
	frame[2].i = (jint(0));
	}
label_2:;
	{
	jint temp0 = frame[2].i;
	sp[0].o = (jobject)((java_math_BigInteger *) NULL_CHECK((frame[0].o)))->F_mag;
	if (temp0 >= (((jarray) nullCheck(ctx, sp[0].o))->length)) goto label_3;
	}
	{
	LINE_NUMBER(3766);
	jlong temp0 = jlong(((31) * (frame[1].i)));
	sp[0].o = (jobject)((java_math_BigInteger *) NULL_CHECK((frame[0].o)))->F_mag;
	frame[1].i = (jint((temp0 + ((jlong(((jint)ARRAY_ACCESS(jint, sp[0].o, (frame[2].i))))) & (jlong(4294967295ll))))));
	LINE_NUMBER(3765);
	INST_IINC(2, 1);
	goto label_2;
	}
label_3:;
	{
	LINE_NUMBER(3768);
	popStackFrame(ctx);
	return ((frame[1].i) * ((jint)((java_math_BigInteger *) NULL_CHECK((frame[0].o)))->F_signum));
	}

	popStackFrame(ctx);
}

jobject M_java_math_BigInteger_toString_int_R_java_lang_String(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/math/BigInteger:toString", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(3789);
	if (((jint)((java_math_BigInteger *) NULL_CHECK((frame[0].o)))->F_signum) != 0) goto label_1;
	}
	{
	LINE_NUMBER(3790);
	popStackFrame(ctx);
	return (((jobject) createStringLiteral(ctx, u8"0"_j)));
	}
label_1:;
	{
	LINE_NUMBER(3791);
	if ((frame[1].i) < (jint(2))) goto label_3;
	}
	{
	if ((frame[1].i) <= (36)) goto label_4;
	}
label_3:;
	{
	LINE_NUMBER(3792);
	frame[1].i = (10);
	}
label_4:;
	{
	LINE_NUMBER(3795);
	sp[0].o = (jobject)((java_math_BigInteger *) NULL_CHECK((frame[0].o)))->F_mag;
	if ((((jarray) nullCheck(ctx, sp[0].o))->length) > (20)) goto label_5;
	}
	{
	LINE_NUMBER(3796);
	sp[0].o = (jobject)M_java_math_BigInteger_smallToString_int_R_java_lang_String(ctx, (frame[0].o), (frame[1].i));
	popStackFrame(ctx);
	return sp[0].o;
	}
label_5:;
	{
	LINE_NUMBER(3800);
	clinit_java_lang_StringBuilder(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[0].o);
	frame[2].o = sp[0].o;
	LINE_NUMBER(3801);
	if (((jint)((java_math_BigInteger *) NULL_CHECK((frame[0].o)))->F_signum) >= 0) goto label_8;
	}
	{
	LINE_NUMBER(3802);
	sp[0].o = (jobject)((func_java_math_BigInteger_negate_R_java_math_BigInteger) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_math_BigInteger_negate_R_java_math_BigInteger])(ctx, (frame[0].o));
	SM_java_math_BigInteger_toString_java_math_BigInteger_java_lang_StringBuilder_int_int(ctx, sp[0].o, (frame[2].o), (frame[1].i), (jint(0)));
	LINE_NUMBER(3803);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_insert_int_char_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_java_lang_StringBuilder_insert_int_char_R_java_lang_StringBuilder])(ctx, (frame[2].o), (jint(0)), (45));
	goto label_11;
	}
label_8:;
	{
	LINE_NUMBER(3806);
	SM_java_math_BigInteger_toString_java_math_BigInteger_java_lang_StringBuilder_int_int(ctx, (frame[0].o), (frame[2].o), (frame[1].i), (jint(0)));
	}
label_11:;
	{
	LINE_NUMBER(3808);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, (frame[2].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_java_math_BigInteger_smallToString_int_R_java_lang_String(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[18];
	auto stack = &frame[13];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/math/BigInteger:smallToString", 18 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(3813);
	if (((jint)((java_math_BigInteger *) NULL_CHECK((frame[0].o)))->F_signum) != 0) goto label_1;
	}
	{
	LINE_NUMBER(3814);
	popStackFrame(ctx);
	return (((jobject) createStringLiteral(ctx, u8"0"_j)));
	}
label_1:;
	{
	LINE_NUMBER(3818);
	jint temp0 = jint(4);
	sp[0].o = (jobject)((java_math_BigInteger *) NULL_CHECK((frame[0].o)))->F_mag;
	frame[2].i = (((temp0 * (((jarray) nullCheck(ctx, sp[0].o))->length)) + (6)) / (7));
	LINE_NUMBER(3819);
	sp[0].o = (jobject)createArray(ctx, &class_java_lang_String, (frame[2].i));
	frame[3].o = sp[0].o;
	LINE_NUMBER(3822);
	sp[0].o = (jobject)((func_java_math_BigInteger_abs_R_java_math_BigInteger) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_math_BigInteger_abs_R_java_math_BigInteger])(ctx, (frame[0].o));
	frame[4].o = sp[0].o;
	LINE_NUMBER(3823);
	frame[5].i = (jint(0));
	}
label_6:;
	{
	LINE_NUMBER(3824);
	if (((jint)((java_math_BigInteger *) NULL_CHECK((frame[4].o)))->F_signum) == 0) goto label_7;
	}
	{
	LINE_NUMBER(3825);
	clinit_java_math_BigInteger(ctx);
	sp[0].o = (jobject)SF_java_math_BigInteger_longRadix;
	frame[6].o = ((jobject)ARRAY_ACCESS(jobject, sp[0].o, (frame[1].i)));
	LINE_NUMBER(3827);
	clinit_java_math_MutableBigInteger(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_math_MutableBigInteger);
	init_java_math_MutableBigInteger(ctx, sp[0].o);
	frame[7].o = sp[0].o;
	LINE_NUMBER(3828);
	clinit_java_math_MutableBigInteger(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_math_MutableBigInteger);
	sp[1].o = (jobject)((java_math_BigInteger *) NULL_CHECK((frame[4].o)))->F_mag;
	init_java_math_MutableBigInteger_Array1_int(ctx, sp[0].o, sp[1].o);
	frame[8].o = sp[0].o;
	LINE_NUMBER(3829);
	clinit_java_math_MutableBigInteger(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_math_MutableBigInteger);
	sp[1].o = (jobject)((java_math_BigInteger *) NULL_CHECK((frame[6].o)))->F_mag;
	init_java_math_MutableBigInteger_Array1_int(ctx, sp[0].o, sp[1].o);
	frame[9].o = sp[0].o;
	LINE_NUMBER(3830);
	sp[0].o = (jobject)((func_java_math_MutableBigInteger_divide_java_math_MutableBigInteger_java_math_MutableBigInteger_R_java_math_MutableBigInteger) ((void **) nullCheck(ctx, (frame[8].o))->vtable)[VTABLE_java_math_MutableBigInteger_divide_java_math_MutableBigInteger_java_math_MutableBigInteger_R_java_math_MutableBigInteger])(ctx, (frame[8].o), (frame[9].o), (frame[7].o));
	frame[10].o = sp[0].o;
	LINE_NUMBER(3831);
	sp[0].o = (jobject)((func_java_math_MutableBigInteger_toBigInteger_int_R_java_math_BigInteger) ((void **) nullCheck(ctx, (frame[7].o))->vtable)[VTABLE_java_math_MutableBigInteger_toBigInteger_int_R_java_math_BigInteger])(ctx, (frame[7].o), (((jint)((java_math_BigInteger *) NULL_CHECK((frame[4].o)))->F_signum) * ((jint)((java_math_BigInteger *) NULL_CHECK((frame[6].o)))->F_signum)));
	frame[11].o = sp[0].o;
	LINE_NUMBER(3832);
	sp[0].o = (jobject)((func_java_math_MutableBigInteger_toBigInteger_int_R_java_math_BigInteger) ((void **) nullCheck(ctx, (frame[10].o))->vtable)[VTABLE_java_math_MutableBigInteger_toBigInteger_int_R_java_math_BigInteger])(ctx, (frame[10].o), (((jint)((java_math_BigInteger *) NULL_CHECK((frame[4].o)))->F_signum) * ((jint)((java_math_BigInteger *) NULL_CHECK((frame[6].o)))->F_signum)));
	frame[12].o = sp[0].o;
	LINE_NUMBER(3834);
	sp[0].o = frame[3].o;
	jint temp0 = frame[5].i;
	INST_IINC(5, 1);
	jlong temp1 = (jlong)((func_java_math_BigInteger_longValue_R_long) ((void **) nullCheck(ctx, (frame[12].o))->vtable)[VTABLE_java_math_BigInteger_longValue_R_long])(ctx, (frame[12].o));
	sp[1].o = (jobject)SM_java_lang_Long_toString_long_int_R_java_lang_String(ctx, temp1, (frame[1].i));
	ARRAY_ACCESS(jobject, sp[0].o, temp0) = sp[1].o;
	LINE_NUMBER(3835);
	frame[4].o = (frame[11].o);
	LINE_NUMBER(3836);
	goto label_6;
	}
label_7:;
	{
	LINE_NUMBER(3839);
	clinit_java_lang_StringBuilder(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	jint temp0 = frame[5].i;
	clinit_java_math_BigInteger(ctx);
	sp[1].o = (jobject)SF_java_math_BigInteger_digitsPerLong;
	init_java_lang_StringBuilder_int(ctx, sp[0].o, ((temp0 * ((jint)ARRAY_ACCESS(jint, sp[1].o, (frame[1].i)))) + (jint(1))));
	frame[6].o = sp[0].o;
	LINE_NUMBER(3840);
	if (((jint)((java_math_BigInteger *) NULL_CHECK((frame[0].o)))->F_signum) >= 0) goto label_19;
	}
	{
	LINE_NUMBER(3841);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_char_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[6].o))->vtable)[VTABLE_java_lang_StringBuilder_append_char_R_java_lang_StringBuilder])(ctx, (frame[6].o), (45));
	}
label_19:;
	{
	LINE_NUMBER(3843);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[6].o))->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, (frame[6].o), ((jobject)ARRAY_ACCESS(jobject, (frame[3].o), ((frame[5].i) - (jint(1))))));
	LINE_NUMBER(3846);
	frame[7].i = ((frame[5].i) - (jint(2)));
	}
label_22:;
	INST_ILOAD(7);
	if ((--sp)->i < 0) goto label_23;
	{
	LINE_NUMBER(3848);
	clinit_java_math_BigInteger(ctx);
	sp[0].o = (jobject)SF_java_math_BigInteger_digitsPerLong;
	jint temp0 = (jint)ARRAY_ACCESS(jint, sp[0].o, (frame[1].i));
	jint temp1 = (jint)((func_java_lang_String_length_R_int) ((void **) nullCheck(ctx, ((jobject)ARRAY_ACCESS(jobject, (frame[3].o), (frame[7].i))))->vtable)[VTABLE_java_lang_String_length_R_int])(ctx, ((jobject)ARRAY_ACCESS(jobject, (frame[3].o), (frame[7].i))));
	frame[8].i = (temp0 - temp1);
	LINE_NUMBER(3849);
	if ((frame[8].i) == 0) goto label_26;
	}
	{
	LINE_NUMBER(3850);
	sp[0].o = frame[6].o;
	clinit_java_math_BigInteger(ctx);
	sp[1].o = (jobject)SF_java_math_BigInteger_zeros;
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, ((jobject)ARRAY_ACCESS(jobject, sp[1].o, (frame[8].i))));
	}
label_26:;
	{
	LINE_NUMBER(3852);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[6].o))->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, (frame[6].o), ((jobject)ARRAY_ACCESS(jobject, (frame[3].o), (frame[7].i))));
	LINE_NUMBER(3846);
	INST_IINC(7, -1);
	goto label_22;
	}
label_23:;
	{
	LINE_NUMBER(3854);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, (frame[6].o))->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, (frame[6].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void SM_java_math_BigInteger_toString_java_math_BigInteger_java_lang_StringBuilder_int_int(jcontext ctx, jobject param0, jobject param1, jint param2, jint param3) {
	jtype frame[14];
	auto stack = &frame[9];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/math/BigInteger:toString", 14 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_math_BigInteger(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	frame[2].i = param2;
	frame[3].i = param3;
	{
	LINE_NUMBER(3874);
	sp[0].o = (jobject)((java_math_BigInteger *) NULL_CHECK((frame[0].o)))->F_mag;
	if ((((jarray) nullCheck(ctx, sp[0].o))->length) > (20)) goto label_1;
	}
	{
	LINE_NUMBER(3875);
	sp[0].o = (jobject)M_java_math_BigInteger_smallToString_int_R_java_lang_String(ctx, (frame[0].o), (frame[2].i));
	frame[4].o = sp[0].o;
	LINE_NUMBER(3879);
	jint temp0 = (jint)((func_java_lang_String_length_R_int) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_java_lang_String_length_R_int])(ctx, (frame[4].o));
	if (temp0 >= (frame[3].i)) goto label_4;
	}
	{
	jint temp0 = (jint)((func_java_lang_StringBuilder_length_R_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_StringBuilder_length_R_int])(ctx, (frame[1].o));
	if (temp0 <= 0) goto label_4;
	}
	{
	LINE_NUMBER(3880);
	jint temp0 = (jint)((func_java_lang_String_length_R_int) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_java_lang_String_length_R_int])(ctx, (frame[4].o));
	frame[5].i = temp0;
	}
label_6:;
	{
	if ((frame[5].i) >= (frame[3].i)) goto label_4;
	}
	{
	LINE_NUMBER(3881);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_char_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_StringBuilder_append_char_R_java_lang_StringBuilder])(ctx, (frame[1].o), (48));
	LINE_NUMBER(3880);
	INST_IINC(5, 1);
	goto label_6;
	}
label_4:;
	{
	LINE_NUMBER(3885);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, (frame[1].o), (frame[4].o));
	LINE_NUMBER(3886);
	popStackFrame(ctx);
	return;
	}
label_1:;
	{
	LINE_NUMBER(3890);
	jint temp0 = (jint)((func_java_math_BigInteger_bitLength_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_math_BigInteger_bitLength_R_int])(ctx, (frame[0].o));
	frame[4].i = temp0;
	LINE_NUMBER(3895);
	jdouble temp1 = (jdouble((frame[4].i))) * (clinit_java_math_BigInteger(ctx), (jdouble)SF_java_math_BigInteger_LOG_TWO);
	clinit_java_math_BigInteger(ctx);
	sp[0].o = (jobject)SF_java_math_BigInteger_logCache;
	jdouble temp2 = (jdouble)SM_java_lang_Math_log_double_R_double(ctx, (temp1 / ((jdouble)ARRAY_ACCESS(jdouble, sp[0].o, (frame[2].i)))));
	jlong temp3 = (jlong)SM_java_lang_Math_round_double_R_long(ctx, ((temp2 / (clinit_java_math_BigInteger(ctx), (jdouble)SF_java_math_BigInteger_LOG_TWO)) - (jdouble(1))));
	frame[5].i = (jint(temp3));
	LINE_NUMBER(3896);
	sp[0].o = (jobject)SM_java_math_BigInteger_getRadixConversionCache_int_int_R_java_math_BigInteger(ctx, (frame[2].i), (frame[5].i));
	frame[6].o = sp[0].o;
	LINE_NUMBER(3898);
	sp[0].o = (jobject)((func_java_math_BigInteger_divideAndRemainder_java_math_BigInteger_R_Array1_java_math_BigInteger) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_math_BigInteger_divideAndRemainder_java_math_BigInteger_R_Array1_java_math_BigInteger])(ctx, (frame[0].o), (frame[6].o));
	frame[7].o = sp[0].o;
	LINE_NUMBER(3900);
	frame[8].i = ((jint(1)) << (frame[5].i));
	LINE_NUMBER(3903);
	SM_java_math_BigInteger_toString_java_math_BigInteger_java_lang_StringBuilder_int_int(ctx, ((jobject)ARRAY_ACCESS(jobject, (frame[7].o), (jint(0)))), (frame[1].o), (frame[2].i), ((frame[3].i) - (frame[8].i)));
	LINE_NUMBER(3904);
	SM_java_math_BigInteger_toString_java_math_BigInteger_java_lang_StringBuilder_int_int(ctx, ((jobject)ARRAY_ACCESS(jobject, (frame[7].o), (jint(1)))), (frame[1].o), (frame[2].i), (frame[8].i));
	LINE_NUMBER(3905);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject SM_java_math_BigInteger_getRadixConversionCache_int_int_R_java_math_BigInteger(jcontext ctx, jint param0, jint param1) {
	jtype frame[10];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/math/BigInteger:getRadixConversionCache", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_math_BigInteger(ctx);
	frame[0].i = param0;
	frame[1].i = param1;
	{
	LINE_NUMBER(3915);
	clinit_java_math_BigInteger(ctx);
	sp[0].o = (jobject)SF_java_math_BigInteger_powerCache;
	frame[2].o = ((jobject)ARRAY_ACCESS(jobject, sp[0].o, (frame[0].i)));
	LINE_NUMBER(3916);
	if ((frame[1].i) >= (((jarray) nullCheck(ctx, (frame[2].o)))->length)) goto label_2;
	}
	{
	LINE_NUMBER(3917);
	popStackFrame(ctx);
	return ((jobject)ARRAY_ACCESS(jobject, (frame[2].o), (frame[1].i)));
	}
label_2:;
	{
	LINE_NUMBER(3920);
	frame[3].i = (((jarray) nullCheck(ctx, (frame[2].o)))->length);
	LINE_NUMBER(3921);
	sp[0].o = (jobject)SM_java_util_Arrays_copyOf_Array1_java_lang_Object_int_R_Array1_java_lang_Object(ctx, (frame[2].o), ((frame[1].i) + (jint(1))));
	frame[2].o = (checkCast(ctx, getArrayClass(&class_java_math_BigInteger, 1), sp[0].o));
	LINE_NUMBER(3922);
	frame[4].i = (frame[3].i);
	}
label_6:;
	{
	if ((frame[4].i) > (frame[1].i)) goto label_7;
	}
	{
	LINE_NUMBER(3923);
	sp[0].o = frame[2].o;
	jint temp0 = frame[4].i;
	sp[1].o = (jobject)((func_java_math_BigInteger_pow_int_R_java_math_BigInteger) ((void **) nullCheck(ctx, ((jobject)ARRAY_ACCESS(jobject, (frame[2].o), ((frame[4].i) - (jint(1))))))->vtable)[VTABLE_java_math_BigInteger_pow_int_R_java_math_BigInteger])(ctx, ((jobject)ARRAY_ACCESS(jobject, (frame[2].o), ((frame[4].i) - (jint(1))))), (jint(2)));
	ARRAY_ACCESS(jobject, sp[0].o, temp0) = sp[1].o;
	LINE_NUMBER(3922);
	INST_IINC(4, 1);
	goto label_6;
	}
label_7:;
	{
	LINE_NUMBER(3926);
	clinit_java_math_BigInteger(ctx);
	sp[0].o = (jobject)SF_java_math_BigInteger_powerCache;
	frame[4].o = sp[0].o;
	LINE_NUMBER(3927);
	if ((frame[1].i) < (((jarray) nullCheck(ctx, ((jobject)ARRAY_ACCESS(jobject, (frame[4].o), (frame[0].i)))))->length)) goto label_11;
	}
	{
	LINE_NUMBER(3928);
	sp[0].o = (jobject)((func_java_lang_Object_clone_R_java_lang_Object) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_java_lang_Object_clone_R_java_lang_Object])(ctx, (frame[4].o));
	frame[4].o = (checkCast(ctx, getArrayClass(&class_java_math_BigInteger, 2), sp[0].o));
	LINE_NUMBER(3929);
	ARRAY_ACCESS(jobject, (frame[4].o), (frame[0].i)) = (frame[2].o);
	LINE_NUMBER(3930);
	clinit_java_math_BigInteger(ctx);
	SF_java_math_BigInteger_powerCache = (frame[4].o);
	}
label_11:;
	{
	LINE_NUMBER(3932);
	popStackFrame(ctx);
	return ((jobject)ARRAY_ACCESS(jobject, (frame[2].o), (frame[1].i)));
	}

	popStackFrame(ctx);
}

jobject M_java_math_BigInteger_toString_R_java_lang_String(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/math/BigInteger:toString", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(3957);
	sp[0].o = (jobject)((func_java_math_BigInteger_toString_int_R_java_lang_String) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_math_BigInteger_toString_int_R_java_lang_String])(ctx, (frame[0].o), (10));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_java_math_BigInteger_toByteArray_R_Array1_byte(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[10];
	auto stack = &frame[7];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/math/BigInteger:toByteArray", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(3975);
	jint temp0 = (jint)((func_java_math_BigInteger_bitLength_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_math_BigInteger_bitLength_R_int])(ctx, (frame[0].o));
	frame[1].i = ((temp0 / (8)) + (jint(1)));
	LINE_NUMBER(3976);
	sp[0].o = (jobject) createArray(ctx, &class_byte, (frame[1].i));
	frame[2].o = sp[0].o;
	LINE_NUMBER(3978);
	frame[3].i = ((frame[1].i) - (jint(1)));
	frame[4].i = (jint(4));
	frame[5].i = (jint(0));
	frame[6].i = (jint(0));
	}
label_6:;
	INST_ILOAD(3);
	if ((--sp)->i < 0) goto label_7;
	{
	LINE_NUMBER(3979);
	if ((frame[4].i) != (jint(4))) goto label_9;
	}
	{
	LINE_NUMBER(3980);
	sp[0].o = frame[0].o;
	jint temp0 = frame[6].i;
	INST_IINC(6, 1);
	jint temp1 = (jint)M_java_math_BigInteger_getInt_int_R_int(ctx, sp[0].o, temp0);
	frame[5].i = temp1;
	LINE_NUMBER(3981);
	frame[4].i = (jint(1));
	goto label_12;
	}
label_9:;
	{
	LINE_NUMBER(3983);
	frame[5].i = (bit_cast<jint>(bit_cast<uint32_t>((frame[5].i)) >> (8)));
	LINE_NUMBER(3984);
	INST_IINC(4, 1);
	}
label_12:;
	{
	LINE_NUMBER(3986);
	ARRAY_ACCESS(jbyte, (frame[2].o), (frame[3].i)) = (jbyte((frame[5].i)));
	LINE_NUMBER(3978);
	INST_IINC(3, -1);
	goto label_6;
	}
label_7:;
	{
	LINE_NUMBER(3988);
	popStackFrame(ctx);
	return (frame[2].o);
	}

	popStackFrame(ctx);
}

jint M_java_math_BigInteger_intValue_R_int(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/math/BigInteger:intValue", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(4007);
	frame[1].i = (jint(0));
	LINE_NUMBER(4008);
	jint temp0 = (jint)M_java_math_BigInteger_getInt_int_R_int(ctx, (frame[0].o), (jint(0)));
	frame[1].i = temp0;
	LINE_NUMBER(4009);
	popStackFrame(ctx);
	return (frame[1].i);
	}

	popStackFrame(ctx);
}

jlong M_java_math_BigInteger_longValue_R_long(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[10];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/math/BigInteger:longValue", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(4028);
	frame[1].l = (jlong(0));
	LINE_NUMBER(4030);
	frame[3].i = (jint(1));
	}
label_2:;
	INST_ILOAD(3);
	if ((--sp)->i < 0) goto label_3;
	{
	LINE_NUMBER(4031);
	jlong temp0 = (frame[1].l) << (32);
	jint temp1 = (jint)M_java_math_BigInteger_getInt_int_R_int(ctx, (frame[0].o), (frame[3].i));
	frame[1].l = (temp0 + ((jlong(temp1)) & (jlong(4294967295ll))));
	LINE_NUMBER(4030);
	INST_IINC(3, -1);
	goto label_2;
	}
label_3:;
	{
	LINE_NUMBER(4032);
	popStackFrame(ctx);
	return (frame[1].l);
	}

	popStackFrame(ctx);
}

jfloat M_java_math_BigInteger_floatValue_R_float(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[13];
	auto stack = &frame[10];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/math/BigInteger:floatValue", 13 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(4051);
	if (((jint)((java_math_BigInteger *) NULL_CHECK((frame[0].o)))->F_signum) != 0) goto label_1;
	}
	{
	LINE_NUMBER(4052);
	popStackFrame(ctx);
	return (jfloat(0));
	}
label_1:;
	{
	LINE_NUMBER(4055);
	sp[0].o = (jobject)((java_math_BigInteger *) NULL_CHECK((frame[0].o)))->F_mag;
	jint temp0 = ((((jarray) nullCheck(ctx, sp[0].o))->length) - (jint(1))) << (jint(5));
	sp[0].o = (jobject)((java_math_BigInteger *) NULL_CHECK((frame[0].o)))->F_mag;
	jint temp1 = (jint)SM_java_math_BigInteger_bitLengthForInt_int_R_int(ctx, ((jint)ARRAY_ACCESS(jint, sp[0].o, (jint(0)))));
	frame[1].i = ((temp0 + temp1) - (jint(1)));
	LINE_NUMBER(4058);
	if ((frame[1].i) >= (63)) goto label_4;
	}
	{
	LINE_NUMBER(4059);
	jlong temp0 = (jlong)((func_java_math_BigInteger_longValue_R_long) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_math_BigInteger_longValue_R_long])(ctx, (frame[0].o));
	popStackFrame(ctx);
	return (jfloat(temp0));
	}
label_4:;
	{
	LINE_NUMBER(4060);
	if ((frame[1].i) <= (127)) goto label_6;
	}
	{
	LINE_NUMBER(4061);
	if (((jint)((java_math_BigInteger *) NULL_CHECK((frame[0].o)))->F_signum) <= 0) goto label_8;
	}
	(sp++)->f = jfloat(std::numeric_limits<float>::infinity());
	goto label_9;
label_8:;
	(sp++)->f = jfloat(-std::numeric_limits<float>::infinity());
label_9:;
	popStackFrame(ctx);
	INST_FRETURN();
label_6:;
	{
	LINE_NUMBER(4074);
	frame[2].i = ((frame[1].i) - (24));
	LINE_NUMBER(4080);
	frame[4].i = ((frame[2].i) & (31));
	LINE_NUMBER(4081);
	frame[5].i = ((32) - (frame[4].i));
	LINE_NUMBER(4083);
	if ((frame[4].i) != 0) goto label_13;
	}
	{
	LINE_NUMBER(4084);
	sp[0].o = (jobject)((java_math_BigInteger *) NULL_CHECK((frame[0].o)))->F_mag;
	frame[3].i = ((jint)ARRAY_ACCESS(jint, sp[0].o, (jint(0))));
	goto label_16;
	}
label_13:;
	{
	LINE_NUMBER(4086);
	sp[0].o = (jobject)((java_math_BigInteger *) NULL_CHECK((frame[0].o)))->F_mag;
	frame[3].i = (bit_cast<jint>(bit_cast<uint32_t>(((jint)ARRAY_ACCESS(jint, sp[0].o, (jint(0))))) >> (frame[4].i)));
	LINE_NUMBER(4087);
	if ((frame[3].i) != 0) goto label_16;
	}
	{
	LINE_NUMBER(4088);
	sp[0].o = (jobject)((java_math_BigInteger *) NULL_CHECK((frame[0].o)))->F_mag;
	jint temp0 = ((jint)ARRAY_ACCESS(jint, sp[0].o, (jint(0)))) << (frame[5].i);
	sp[0].o = (jobject)((java_math_BigInteger *) NULL_CHECK((frame[0].o)))->F_mag;
	frame[3].i = (temp0 | (bit_cast<jint>(bit_cast<uint32_t>(((jint)ARRAY_ACCESS(jint, sp[0].o, (jint(1))))) >> (frame[4].i))));
	}
label_16:;
	{
	LINE_NUMBER(4092);
	frame[6].i = ((frame[3].i) >> (jint(1)));
	LINE_NUMBER(4093);
	frame[6].i = ((frame[6].i) & (jint(8388607)));
	LINE_NUMBER(4102);
	if (((frame[3].i) & (jint(1))) == 0) goto label_21;
	}
	{
	if (((frame[6].i) & (jint(1))) != 0) goto label_22;
	}
	{
	sp[0].o = frame[0].o;
	LINE_NUMBER(4103);
	sp[0].o = (jobject)((func_java_math_BigInteger_abs_R_java_math_BigInteger) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_math_BigInteger_abs_R_java_math_BigInteger])(ctx, sp[0].o);
	jint temp0 = (jint)((func_java_math_BigInteger_getLowestSetBit_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_math_BigInteger_getLowestSetBit_R_int])(ctx, sp[0].o);
	if (temp0 >= (frame[2].i)) goto label_21;
	}
label_22:;
	INST_ICONST(1);
	goto label_24;
label_21:;
	INST_ICONST(0);
label_24:;
	{
	sp -= 1;
	frame[7].i = sp[0].i;
	LINE_NUMBER(4104);
	if ((frame[7].i) == 0) goto label_26;
	}
	{
	jint temp0 = (frame[6].i) + (jint(1));
	sp[0].i = temp0;
	sp += 1;
	goto label_27;
	}
label_26:;
	INST_ILOAD(6);
label_27:;
	{
	sp -= 1;
	frame[8].i = sp[0].i;
	LINE_NUMBER(4105);
	frame[9].i = (((frame[1].i) + (127)) << (23));
	LINE_NUMBER(4107);
	frame[9].i = ((frame[9].i) + (frame[8].i));
	LINE_NUMBER(4115);
	frame[9].i = ((frame[9].i) | (((jint)((java_math_BigInteger *) NULL_CHECK((frame[0].o)))->F_signum) & (bit_cast<jint>(0x80000000))));
	LINE_NUMBER(4116);
	jfloat temp0 = (jfloat)SM_java_lang_Float_intBitsToFloat_int_R_float(ctx, (frame[9].i));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jdouble M_java_math_BigInteger_doubleValue_R_double(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[22];
	auto stack = &frame[16];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/math/BigInteger:doubleValue", 22 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(4135);
	if (((jint)((java_math_BigInteger *) NULL_CHECK((frame[0].o)))->F_signum) != 0) goto label_1;
	}
	{
	LINE_NUMBER(4136);
	popStackFrame(ctx);
	return (jdouble(0));
	}
label_1:;
	{
	LINE_NUMBER(4139);
	sp[0].o = (jobject)((java_math_BigInteger *) NULL_CHECK((frame[0].o)))->F_mag;
	jint temp0 = ((((jarray) nullCheck(ctx, sp[0].o))->length) - (jint(1))) << (jint(5));
	sp[0].o = (jobject)((java_math_BigInteger *) NULL_CHECK((frame[0].o)))->F_mag;
	jint temp1 = (jint)SM_java_math_BigInteger_bitLengthForInt_int_R_int(ctx, ((jint)ARRAY_ACCESS(jint, sp[0].o, (jint(0)))));
	frame[1].i = ((temp0 + temp1) - (jint(1)));
	LINE_NUMBER(4142);
	if ((frame[1].i) >= (63)) goto label_4;
	}
	{
	LINE_NUMBER(4143);
	jlong temp0 = (jlong)((func_java_math_BigInteger_longValue_R_long) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_math_BigInteger_longValue_R_long])(ctx, (frame[0].o));
	popStackFrame(ctx);
	return (jdouble(temp0));
	}
label_4:;
	{
	LINE_NUMBER(4144);
	if ((frame[1].i) <= (1023)) goto label_6;
	}
	{
	LINE_NUMBER(4145);
	if (((jint)((java_math_BigInteger *) NULL_CHECK((frame[0].o)))->F_signum) <= 0) goto label_8;
	}
	(sp++)->d = jdouble(std::numeric_limits<double>::infinity());
	goto label_9;
label_8:;
	(sp++)->d = jdouble(-std::numeric_limits<double>::infinity());
label_9:;
	popStackFrame(ctx);
	INST_DRETURN();
label_6:;
	{
	LINE_NUMBER(4158);
	frame[2].i = ((frame[1].i) - (53));
	LINE_NUMBER(4164);
	frame[5].i = ((frame[2].i) & (31));
	LINE_NUMBER(4165);
	frame[6].i = ((32) - (frame[5].i));
	LINE_NUMBER(4169);
	if ((frame[5].i) != 0) goto label_13;
	}
	{
	LINE_NUMBER(4170);
	sp[0].o = (jobject)((java_math_BigInteger *) NULL_CHECK((frame[0].o)))->F_mag;
	frame[7].i = ((jint)ARRAY_ACCESS(jint, sp[0].o, (jint(0))));
	LINE_NUMBER(4171);
	sp[0].o = (jobject)((java_math_BigInteger *) NULL_CHECK((frame[0].o)))->F_mag;
	frame[8].i = ((jint)ARRAY_ACCESS(jint, sp[0].o, (jint(1))));
	goto label_17;
	}
label_13:;
	{
	LINE_NUMBER(4173);
	sp[0].o = (jobject)((java_math_BigInteger *) NULL_CHECK((frame[0].o)))->F_mag;
	frame[7].i = (bit_cast<jint>(bit_cast<uint32_t>(((jint)ARRAY_ACCESS(jint, sp[0].o, (jint(0))))) >> (frame[5].i)));
	LINE_NUMBER(4174);
	sp[0].o = (jobject)((java_math_BigInteger *) NULL_CHECK((frame[0].o)))->F_mag;
	jint temp0 = ((jint)ARRAY_ACCESS(jint, sp[0].o, (jint(0)))) << (frame[6].i);
	sp[0].o = (jobject)((java_math_BigInteger *) NULL_CHECK((frame[0].o)))->F_mag;
	frame[8].i = (temp0 | (bit_cast<jint>(bit_cast<uint32_t>(((jint)ARRAY_ACCESS(jint, sp[0].o, (jint(1))))) >> (frame[5].i))));
	LINE_NUMBER(4175);
	if ((frame[7].i) != 0) goto label_17;
	}
	{
	LINE_NUMBER(4176);
	frame[7].i = (frame[8].i);
	LINE_NUMBER(4177);
	sp[0].o = (jobject)((java_math_BigInteger *) NULL_CHECK((frame[0].o)))->F_mag;
	jint temp0 = ((jint)ARRAY_ACCESS(jint, sp[0].o, (jint(1)))) << (frame[6].i);
	sp[0].o = (jobject)((java_math_BigInteger *) NULL_CHECK((frame[0].o)))->F_mag;
	frame[8].i = (temp0 | (bit_cast<jint>(bit_cast<uint32_t>(((jint)ARRAY_ACCESS(jint, sp[0].o, (jint(2))))) >> (frame[5].i))));
	}
label_17:;
	{
	LINE_NUMBER(4181);
	frame[3].l = ((((jlong((frame[7].i))) & (jlong(4294967295ll))) << (32)) | ((jlong((frame[8].i))) & (jlong(4294967295ll))));
	LINE_NUMBER(4184);
	frame[9].l = ((frame[3].l) >> (jint(1)));
	LINE_NUMBER(4185);
	frame[9].l = ((frame[9].l) & (jlong(4503599627370495ll)));
	LINE_NUMBER(4194);
	if ((longCompare(((frame[3].l) & (jlong(1))), (jlong(0)))) == 0) goto label_25;
	}
	{
	if ((longCompare(((frame[9].l) & (jlong(1))), (jlong(0)))) != 0) goto label_26;
	}
	{
	sp[0].o = frame[0].o;
	LINE_NUMBER(4195);
	sp[0].o = (jobject)((func_java_math_BigInteger_abs_R_java_math_BigInteger) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_math_BigInteger_abs_R_java_math_BigInteger])(ctx, sp[0].o);
	jint temp0 = (jint)((func_java_math_BigInteger_getLowestSetBit_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_math_BigInteger_getLowestSetBit_R_int])(ctx, sp[0].o);
	if (temp0 >= (frame[2].i)) goto label_25;
	}
label_26:;
	INST_ICONST(1);
	goto label_28;
label_25:;
	INST_ICONST(0);
label_28:;
	{
	sp -= 1;
	frame[11].i = sp[0].i;
	LINE_NUMBER(4196);
	if ((frame[11].i) == 0) goto label_30;
	}
	{
	jlong temp0 = (frame[9].l) + (jlong(1));
	sp[0].l = temp0;
	sp += 1;
	goto label_31;
	}
label_30:;
	INST_LLOAD(9);
label_31:;
	{
	sp -= 1;
	frame[12].l = sp[0].l;
	LINE_NUMBER(4197);
	frame[14].l = ((jlong(((frame[1].i) + (1023)))) << (52));
	LINE_NUMBER(4199);
	frame[14].l = ((frame[14].l) + (frame[12].l));
	LINE_NUMBER(4207);
	frame[14].l = ((frame[14].l) | ((jlong(((jint)((java_math_BigInteger *) NULL_CHECK((frame[0].o)))->F_signum))) & (bit_cast<jlong>(0x8000000000000000ll))));
	LINE_NUMBER(4208);
	jdouble temp0 = (jdouble)SM_java_lang_Double_longBitsToDouble_long_R_double(ctx, (frame[14].l));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jobject SM_java_math_BigInteger_stripLeadingZeroInts_Array1_int_R_Array1_int(jcontext ctx, jobject param0) {
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/math/BigInteger:stripLeadingZeroInts", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_math_BigInteger(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(4215);
	frame[1].i = (((jarray) nullCheck(ctx, (frame[0].o)))->length);
	LINE_NUMBER(4219);
	frame[2].i = (jint(0));
	}
label_2:;
	{
	if ((frame[2].i) >= (frame[1].i)) goto label_3;
	}
	{
	if (((jint)ARRAY_ACCESS(jint, (frame[0].o), (frame[2].i))) != 0) goto label_3;
	}
	INST_IINC(2, 1);
	goto label_2;
label_3:;
	{
	LINE_NUMBER(4221);
	sp[0].o = (jobject)SM_java_util_Arrays_copyOfRange_Array1_int_int_int_R_Array1_int(ctx, (frame[0].o), (frame[2].i), (frame[1].i));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject SM_java_math_BigInteger_trustedStripLeadingZeroInts_Array1_int_R_Array1_int(jcontext ctx, jobject param0) {
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/math/BigInteger:trustedStripLeadingZeroInts", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_math_BigInteger(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(4229);
	frame[1].i = (((jarray) nullCheck(ctx, (frame[0].o)))->length);
	LINE_NUMBER(4233);
	frame[2].i = (jint(0));
	}
label_2:;
	{
	if ((frame[2].i) >= (frame[1].i)) goto label_3;
	}
	{
	if (((jint)ARRAY_ACCESS(jint, (frame[0].o), (frame[2].i))) != 0) goto label_3;
	}
	INST_IINC(2, 1);
	goto label_2;
label_3:;
	{
	LINE_NUMBER(4235);
	if ((frame[2].i) != 0) goto label_4;
	}
	INST_ALOAD(0);
	goto label_5;
label_4:;
	{
	sp[0].o = (jobject)SM_java_util_Arrays_copyOfRange_Array1_int_int_int_R_Array1_int(ctx, (frame[0].o), (frame[2].i), (frame[1].i));
	sp += 1;
	}
label_5:;
	popStackFrame(ctx);
	INST_ARETURN();

	popStackFrame(ctx);
}

jobject SM_java_math_BigInteger_stripLeadingZeroBytes_Array1_byte_R_Array1_int(jcontext ctx, jobject param0) {
	jtype frame[15];
	auto stack = &frame[10];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/math/BigInteger:stripLeadingZeroBytes", 15 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_math_BigInteger(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(4242);
	frame[1].i = (((jarray) nullCheck(ctx, (frame[0].o)))->length);
	LINE_NUMBER(4246);
	frame[2].i = (jint(0));
	}
label_2:;
	{
	if ((frame[2].i) >= (frame[1].i)) goto label_3;
	}
	{
	if (((jint)ARRAY_ACCESS(jbyte, (frame[0].o), (frame[2].i))) != 0) goto label_3;
	}
	INST_IINC(2, 1);
	goto label_2;
label_3:;
	{
	LINE_NUMBER(4250);
	frame[3].i = (bit_cast<jint>(bit_cast<uint32_t>((((frame[1].i) - (frame[2].i)) + (jint(3)))) >> (jint(2))));
	LINE_NUMBER(4251);
	sp[0].o = (jobject) createArray(ctx, &class_int, (frame[3].i));
	frame[4].o = sp[0].o;
	LINE_NUMBER(4252);
	frame[5].i = ((frame[1].i) - (jint(1)));
	LINE_NUMBER(4253);
	frame[6].i = ((frame[3].i) - (jint(1)));
	}
label_7:;
	INST_ILOAD(6);
	if ((--sp)->i < 0) goto label_8;
	{
	LINE_NUMBER(4254);
	sp[0].o = frame[4].o;
	jint temp0 = frame[6].i;
	sp[1].o = frame[0].o;
	jint temp1 = frame[5].i;
	INST_IINC(5, -1);
	ARRAY_ACCESS(jint, sp[0].o, temp0) = (((jint)ARRAY_ACCESS(jbyte, sp[1].o, temp1)) & (255));
	LINE_NUMBER(4255);
	frame[7].i = (((frame[5].i) - (frame[2].i)) + (jint(1)));
	LINE_NUMBER(4256);
	jint temp2 = (jint)SM_java_lang_Math_min_int_int_R_int(ctx, (jint(3)), (frame[7].i));
	frame[8].i = temp2;
	LINE_NUMBER(4257);
	frame[9].i = (8);
	}
label_13:;
	{
	if ((frame[9].i) > ((frame[8].i) << (jint(3)))) goto label_14;
	}
	{
	LINE_NUMBER(4258);
	sp[0].o = frame[4].o;
	jint temp0 = frame[6].i;
	jint temp3 = (jint)ARRAY_ACCESS(jint, sp[0].o, temp0);
	sp[1].o = frame[0].o;
	jint temp4 = frame[5].i;
	INST_IINC(5, -1);
	ARRAY_ACCESS(jint, sp[0].o, temp0) = (temp3 | ((((jint)ARRAY_ACCESS(jbyte, sp[1].o, temp4)) & (255)) << (frame[9].i)));
	LINE_NUMBER(4257);
	INST_IINC(9, 8);
	goto label_13;
	}
label_14:;
	{
	LINE_NUMBER(4253);
	INST_IINC(6, -1);
	goto label_7;
	}
label_8:;
	{
	LINE_NUMBER(4260);
	popStackFrame(ctx);
	return (frame[4].o);
	}

	popStackFrame(ctx);
}

jobject SM_java_math_BigInteger_makePositive_Array1_byte_R_Array1_int(jcontext ctx, jobject param0) {
	jtype frame[17];
	auto stack = &frame[11];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/math/BigInteger:makePositive", 17 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_math_BigInteger(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(4269);
	frame[3].i = (((jarray) nullCheck(ctx, (frame[0].o)))->length);
	LINE_NUMBER(4272);
	frame[1].i = (jint(0));
	}
label_2:;
	{
	if ((frame[1].i) >= (frame[3].i)) goto label_3;
	}
	{
	if (((jint)ARRAY_ACCESS(jbyte, (frame[0].o), (frame[1].i))) != (jint(-1))) goto label_3;
	}
	INST_IINC(1, 1);
	goto label_2;
label_3:;
	{
	LINE_NUMBER(4278);
	frame[2].i = (frame[1].i);
	}
label_4:;
	{
	if ((frame[2].i) >= (frame[3].i)) goto label_5;
	}
	{
	if (((jint)ARRAY_ACCESS(jbyte, (frame[0].o), (frame[2].i))) != 0) goto label_5;
	}
	INST_IINC(2, 1);
	goto label_4;
label_5:;
	{
	LINE_NUMBER(4281);
	if ((frame[2].i) != (frame[3].i)) goto label_6;
	}
	INST_ICONST(1);
	goto label_7;
label_6:;
	INST_ICONST(0);
label_7:;
	{
	sp -= 1;
	frame[4].i = sp[0].i;
	LINE_NUMBER(4282);
	frame[5].i = (bit_cast<jint>(bit_cast<uint32_t>(((((frame[3].i) - (frame[1].i)) + (frame[4].i)) + (jint(3)))) >> (jint(2))));
	LINE_NUMBER(4283);
	sp[0].o = (jobject) createArray(ctx, &class_int, (frame[5].i));
	frame[6].o = sp[0].o;
	LINE_NUMBER(4287);
	frame[7].i = ((frame[3].i) - (jint(1)));
	LINE_NUMBER(4288);
	frame[8].i = ((frame[5].i) - (jint(1)));
	}
label_12:;
	INST_ILOAD(8);
	if ((--sp)->i < 0) goto label_13;
	{
	LINE_NUMBER(4289);
	sp[0].o = frame[6].o;
	jint temp0 = frame[8].i;
	sp[1].o = frame[0].o;
	jint temp1 = frame[7].i;
	INST_IINC(7, -1);
	ARRAY_ACCESS(jint, sp[0].o, temp0) = (((jint)ARRAY_ACCESS(jbyte, sp[1].o, temp1)) & (255));
	LINE_NUMBER(4290);
	jint temp2 = (jint)SM_java_lang_Math_min_int_int_R_int(ctx, (jint(3)), (((frame[7].i) - (frame[1].i)) + (jint(1))));
	frame[9].i = temp2;
	LINE_NUMBER(4291);
	if ((frame[9].i) >= 0) goto label_17;
	}
	{
	LINE_NUMBER(4292);
	frame[9].i = (jint(0));
	}
label_17:;
	{
	LINE_NUMBER(4293);
	frame[10].i = (8);
	}
label_19:;
	{
	if ((frame[10].i) > ((8) * (frame[9].i))) goto label_20;
	}
	{
	LINE_NUMBER(4294);
	sp[0].o = frame[6].o;
	jint temp0 = frame[8].i;
	jint temp3 = (jint)ARRAY_ACCESS(jint, sp[0].o, temp0);
	sp[1].o = frame[0].o;
	jint temp4 = frame[7].i;
	INST_IINC(7, -1);
	ARRAY_ACCESS(jint, sp[0].o, temp0) = (temp3 | ((((jint)ARRAY_ACCESS(jbyte, sp[1].o, temp4)) & (255)) << (frame[10].i)));
	LINE_NUMBER(4293);
	INST_IINC(10, 8);
	goto label_19;
	}
label_20:;
	{
	LINE_NUMBER(4297);
	frame[10].i = (bit_cast<jint>(bit_cast<uint32_t>((jint(-1))) >> ((8) * ((jint(3)) - (frame[9].i)))));
	LINE_NUMBER(4298);
	ARRAY_ACCESS(jint, (frame[6].o), (frame[8].i)) = ((((jint)ARRAY_ACCESS(jint, (frame[6].o), (frame[8].i))) ^ (jint(-1))) & (frame[10].i));
	LINE_NUMBER(4288);
	INST_IINC(8, -1);
	goto label_12;
	}
label_13:;
	{
	LINE_NUMBER(4302);
	frame[8].i = ((((jarray) nullCheck(ctx, (frame[6].o)))->length) - (jint(1)));
	}
label_25:;
	INST_ILOAD(8);
	if ((--sp)->i < 0) goto label_26;
	{
	LINE_NUMBER(4303);
	ARRAY_ACCESS(jint, (frame[6].o), (frame[8].i)) = (jint((((jlong(((jint)ARRAY_ACCESS(jint, (frame[6].o), (frame[8].i))))) & (jlong(4294967295ll))) + (jlong(1)))));
	LINE_NUMBER(4304);
	if (((jint)ARRAY_ACCESS(jint, (frame[6].o), (frame[8].i))) == 0) goto label_29;
	}
	LINE_NUMBER(4305);
	goto label_26;
label_29:;
	{
	LINE_NUMBER(4302);
	INST_IINC(8, -1);
	goto label_25;
	}
label_26:;
	{
	LINE_NUMBER(4308);
	popStackFrame(ctx);
	return (frame[6].o);
	}

	popStackFrame(ctx);
}

jobject SM_java_math_BigInteger_makePositive_Array1_int_R_Array1_int(jcontext ctx, jobject param0) {
	jtype frame[10];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/math/BigInteger:makePositive", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_math_BigInteger(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(4319);
	frame[1].i = (jint(0));
	}
label_1:;
	{
	if ((frame[1].i) >= (((jarray) nullCheck(ctx, (frame[0].o)))->length)) goto label_2;
	}
	{
	if (((jint)ARRAY_ACCESS(jint, (frame[0].o), (frame[1].i))) != (jint(-1))) goto label_2;
	}
	INST_IINC(1, 1);
	goto label_1;
label_2:;
	{
	LINE_NUMBER(4324);
	frame[2].i = (frame[1].i);
	}
label_3:;
	{
	if ((frame[2].i) >= (((jarray) nullCheck(ctx, (frame[0].o)))->length)) goto label_4;
	}
	{
	if (((jint)ARRAY_ACCESS(jint, (frame[0].o), (frame[2].i))) != 0) goto label_4;
	}
	INST_IINC(2, 1);
	goto label_3;
label_4:;
	{
	LINE_NUMBER(4326);
	if ((frame[2].i) != (((jarray) nullCheck(ctx, (frame[0].o)))->length)) goto label_5;
	}
	INST_ICONST(1);
	goto label_6;
label_5:;
	INST_ICONST(0);
label_6:;
	{
	sp -= 1;
	frame[3].i = sp[0].i;
	LINE_NUMBER(4327);
	sp[0].o = (jobject) createArray(ctx, &class_int, (((((jarray) nullCheck(ctx, (frame[0].o)))->length) - (frame[1].i)) + (frame[3].i)));
	frame[4].o = sp[0].o;
	LINE_NUMBER(4331);
	frame[5].i = (frame[1].i);
	}
label_9:;
	{
	if ((frame[5].i) >= (((jarray) nullCheck(ctx, (frame[0].o)))->length)) goto label_10;
	}
	{
	LINE_NUMBER(4332);
	ARRAY_ACCESS(jint, (frame[4].o), (((frame[5].i) - (frame[1].i)) + (frame[3].i))) = (((jint)ARRAY_ACCESS(jint, (frame[0].o), (frame[5].i))) ^ (jint(-1)));
	LINE_NUMBER(4331);
	INST_IINC(5, 1);
	goto label_9;
	}
label_10:;
	{
	LINE_NUMBER(4335);
	frame[5].i = ((((jarray) nullCheck(ctx, (frame[4].o)))->length) - (jint(1)));
	}
label_13:;
	{
	sp[0].o = frame[4].o;
	jint temp0 = frame[5].i;
	jint temp3 = ((jint)ARRAY_ACCESS(jint, sp[0].o, temp0)) + (jint(1));
	ARRAY_ACCESS(jint, sp[0].o, temp0) = temp3;
	if (temp3 != 0) goto label_14;
	}
	INST_IINC(5, -1);
	goto label_13;
label_14:;
	{
	LINE_NUMBER(4338);
	popStackFrame(ctx);
	return (frame[4].o);
	}

	popStackFrame(ctx);
}

jint M_java_math_BigInteger_intLength_R_int(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/math/BigInteger:intLength", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(4403);
	jint temp0 = (jint)((func_java_math_BigInteger_bitLength_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_math_BigInteger_bitLength_R_int])(ctx, (frame[0].o));
	popStackFrame(ctx);
	return ((bit_cast<jint>(bit_cast<uint32_t>(temp0) >> (jint(5)))) + (jint(1)));
	}

	popStackFrame(ctx);
}

jint M_java_math_BigInteger_signBit_R_int(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/math/BigInteger:signBit", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(4408);
	if (((jint)((java_math_BigInteger *) NULL_CHECK((frame[0].o)))->F_signum) >= 0) goto label_1;
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

jint M_java_math_BigInteger_signInt_R_int(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/math/BigInteger:signInt", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(4413);
	if (((jint)((java_math_BigInteger *) NULL_CHECK((frame[0].o)))->F_signum) >= 0) goto label_1;
	}
	INST_ICONST(-1);
	goto label_2;
label_1:;
	INST_ICONST(0);
label_2:;
	popStackFrame(ctx);
	INST_IRETURN();

	popStackFrame(ctx);
}

jint M_java_math_BigInteger_getInt_int_R_int(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/math/BigInteger:getInt", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(4423);
	if ((frame[1].i) >= 0) goto label_1;
	}
	{
	LINE_NUMBER(4424);
	popStackFrame(ctx);
	return (jint(0));
	}
label_1:;
	{
	LINE_NUMBER(4425);
	jint temp0 = frame[1].i;
	sp[0].o = (jobject)((java_math_BigInteger *) NULL_CHECK((frame[0].o)))->F_mag;
	if (temp0 < (((jarray) nullCheck(ctx, sp[0].o))->length)) goto label_3;
	}
	{
	LINE_NUMBER(4426);
	jint temp0 = (jint)M_java_math_BigInteger_signInt_R_int(ctx, (frame[0].o));
	popStackFrame(ctx);
	return temp0;
	}
label_3:;
	{
	LINE_NUMBER(4428);
	sp[0].o = (jobject)((java_math_BigInteger *) NULL_CHECK((frame[0].o)))->F_mag;
	sp[1].o = (jobject)((java_math_BigInteger *) NULL_CHECK((frame[0].o)))->F_mag;
	frame[2].i = ((jint)ARRAY_ACCESS(jint, sp[0].o, (((((jarray) nullCheck(ctx, sp[1].o))->length) - (frame[1].i)) - (jint(1)))));
	LINE_NUMBER(4430);
	if (((jint)((java_math_BigInteger *) NULL_CHECK((frame[0].o)))->F_signum) < 0) goto label_6;
	}
	INST_ILOAD(2);
	goto label_7;
label_6:;
	{
	LINE_NUMBER(4431);
	jint temp0 = frame[1].i;
	jint temp1 = (jint)M_java_math_BigInteger_firstNonzeroIntNum_R_int(ctx, (frame[0].o));
	if (temp0 > temp1) goto label_8;
	}
	{
	jint temp0 = -(frame[2].i);
	sp[0].i = temp0;
	sp += 1;
	goto label_7;
	}
label_8:;
	{
	jint temp0 = (frame[2].i) ^ (jint(-1));
	sp[0].i = temp0;
	sp += 1;
	}
label_7:;
	LINE_NUMBER(4430);
	popStackFrame(ctx);
	INST_IRETURN();

	popStackFrame(ctx);
}

jint M_java_math_BigInteger_firstNonzeroIntNum_R_int(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/math/BigInteger:firstNonzeroIntNum", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(4440);
	frame[1].i = (((jint)((java_math_BigInteger *) NULL_CHECK((frame[0].o)))->F_firstNonzeroIntNum) - (jint(2)));
	LINE_NUMBER(4441);
	if ((frame[1].i) != (-2)) goto label_2;
	}
	{
	LINE_NUMBER(4442);
	frame[1].i = (jint(0));
	LINE_NUMBER(4446);
	sp[0].o = (jobject)((java_math_BigInteger *) NULL_CHECK((frame[0].o)))->F_mag;
	frame[3].i = (((jarray) nullCheck(ctx, sp[0].o))->length);
	LINE_NUMBER(4447);
	frame[2].i = ((frame[3].i) - (jint(1)));
	}
label_6:;
	INST_ILOAD(2);
	if ((--sp)->i < 0) goto label_7;
	{
	sp[0].o = (jobject)((java_math_BigInteger *) NULL_CHECK((frame[0].o)))->F_mag;
	if (((jint)ARRAY_ACCESS(jint, sp[0].o, (frame[2].i))) != 0) goto label_7;
	}
	INST_IINC(2, -1);
	goto label_6;
label_7:;
	{
	LINE_NUMBER(4449);
	frame[1].i = (((frame[3].i) - (frame[2].i)) - (jint(1)));
	LINE_NUMBER(4450);
	((java_math_BigInteger *) NULL_CHECK((frame[0].o)))->F_firstNonzeroIntNum = ((frame[1].i) + (jint(2)));
	}
label_2:;
	{
	LINE_NUMBER(4452);
	popStackFrame(ctx);
	return (frame[1].i);
	}

	popStackFrame(ctx);
}

jobject M_java_math_BigInteger_magSerializedForm_R_Array1_byte(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[12];
	auto stack = &frame[9];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/math/BigInteger:magSerializedForm", 12 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(4567);
	sp[0].o = (jobject)((java_math_BigInteger *) NULL_CHECK((frame[0].o)))->F_mag;
	frame[1].i = (((jarray) nullCheck(ctx, sp[0].o))->length);
	LINE_NUMBER(4569);
	if ((frame[1].i) != 0) goto label_2;
	}
	INST_ICONST(0);
	goto label_3;
label_2:;
	{
	jint temp0 = ((frame[1].i) - (jint(1))) << (jint(5));
	sp[0].o = (jobject)((java_math_BigInteger *) NULL_CHECK((frame[0].o)))->F_mag;
	jint temp1 = (jint)SM_java_math_BigInteger_bitLengthForInt_int_R_int(ctx, ((jint)ARRAY_ACCESS(jint, sp[0].o, (jint(0)))));
	jint temp2 = temp0 + temp1;
	sp[0].i = temp2;
	sp += 1;
	}
label_3:;
	{
	sp -= 1;
	frame[2].i = sp[0].i;
	LINE_NUMBER(4570);
	frame[3].i = (bit_cast<jint>(bit_cast<uint32_t>(((frame[2].i) + (7))) >> (jint(3))));
	LINE_NUMBER(4571);
	sp[0].o = (jobject) createArray(ctx, &class_byte, (frame[3].i));
	frame[4].o = sp[0].o;
	LINE_NUMBER(4573);
	frame[5].i = ((frame[3].i) - (jint(1)));
	frame[6].i = (jint(4));
	frame[7].i = ((frame[1].i) - (jint(1)));
	frame[8].i = (jint(0));
	}
label_10:;
	{
	LINE_NUMBER(4574);
	if ((frame[5].i) < 0) goto label_11;
	}
	{
	LINE_NUMBER(4575);
	if ((frame[6].i) != (jint(4))) goto label_13;
	}
	{
	LINE_NUMBER(4576);
	sp[0].o = (jobject)((java_math_BigInteger *) NULL_CHECK((frame[0].o)))->F_mag;
	jint temp0 = frame[7].i;
	INST_IINC(7, -1);
	frame[8].i = ((jint)ARRAY_ACCESS(jint, sp[0].o, temp0));
	LINE_NUMBER(4577);
	frame[6].i = (jint(1));
	goto label_16;
	}
label_13:;
	{
	LINE_NUMBER(4579);
	frame[8].i = (bit_cast<jint>(bit_cast<uint32_t>((frame[8].i)) >> (8)));
	LINE_NUMBER(4580);
	INST_IINC(6, 1);
	}
label_16:;
	{
	LINE_NUMBER(4582);
	ARRAY_ACCESS(jbyte, (frame[4].o), (frame[5].i)) = (jbyte((frame[8].i)));
	LINE_NUMBER(4574);
	INST_IINC(5, -1);
	goto label_10;
	}
label_11:;
	{
	LINE_NUMBER(4584);
	popStackFrame(ctx);
	return (frame[4].o);
	}

	popStackFrame(ctx);
}

jlong M_java_math_BigInteger_longValueExact_R_long(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/math/BigInteger:longValueExact", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(4600);
	sp[0].o = (jobject)((java_math_BigInteger *) NULL_CHECK((frame[0].o)))->F_mag;
	if ((((jarray) nullCheck(ctx, sp[0].o))->length) > (jint(2))) goto label_1;
	}
	{
	jint temp0 = (jint)((func_java_math_BigInteger_bitLength_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_math_BigInteger_bitLength_R_int])(ctx, (frame[0].o));
	if (temp0 > (63)) goto label_1;
	}
	{
	LINE_NUMBER(4601);
	jlong temp0 = (jlong)((func_java_math_BigInteger_longValue_R_long) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_math_BigInteger_longValue_R_long])(ctx, (frame[0].o));
	popStackFrame(ctx);
	return temp0;
	}
label_1:;
	{
	LINE_NUMBER(4603);
	clinit_java_lang_ArithmeticException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_ArithmeticException);
	init_java_lang_ArithmeticException_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"BigInteger out of long range"_j))));
	throwException(ctx, sp[0].o);	}

	popStackFrame(ctx);
}

jint M_java_math_BigInteger_intValueExact_R_int(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/math/BigInteger:intValueExact", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(4619);
	sp[0].o = (jobject)((java_math_BigInteger *) NULL_CHECK((frame[0].o)))->F_mag;
	if ((((jarray) nullCheck(ctx, sp[0].o))->length) > (jint(1))) goto label_1;
	}
	{
	jint temp0 = (jint)((func_java_math_BigInteger_bitLength_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_math_BigInteger_bitLength_R_int])(ctx, (frame[0].o));
	if (temp0 > (31)) goto label_1;
	}
	{
	LINE_NUMBER(4620);
	jint temp0 = (jint)((func_java_math_BigInteger_intValue_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_math_BigInteger_intValue_R_int])(ctx, (frame[0].o));
	popStackFrame(ctx);
	return temp0;
	}
label_1:;
	{
	LINE_NUMBER(4622);
	clinit_java_lang_ArithmeticException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_ArithmeticException);
	init_java_lang_ArithmeticException_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"BigInteger out of int range"_j))));
	throwException(ctx, sp[0].o);	}

	popStackFrame(ctx);
}

jshort M_java_math_BigInteger_shortValueExact_R_short(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/math/BigInteger:shortValueExact", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(4638);
	sp[0].o = (jobject)((java_math_BigInteger *) NULL_CHECK((frame[0].o)))->F_mag;
	if ((((jarray) nullCheck(ctx, sp[0].o))->length) > (jint(1))) goto label_1;
	}
	{
	jint temp0 = (jint)((func_java_math_BigInteger_bitLength_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_math_BigInteger_bitLength_R_int])(ctx, (frame[0].o));
	if (temp0 > (31)) goto label_1;
	}
	{
	LINE_NUMBER(4639);
	jint temp0 = (jint)((func_java_math_BigInteger_intValue_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_math_BigInteger_intValue_R_int])(ctx, (frame[0].o));
	frame[1].i = temp0;
	LINE_NUMBER(4640);
	if ((frame[1].i) < (-32768)) goto label_1;
	}
	{
	if ((frame[1].i) > (32767)) goto label_1;
	}
	{
	LINE_NUMBER(4641);
	jint temp0 = (jint)((func_java_math_BigInteger_shortValue_R_short) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_math_BigInteger_shortValue_R_short])(ctx, (frame[0].o));
	popStackFrame(ctx);
	return temp0;
	}
label_1:;
	{
	LINE_NUMBER(4643);
	clinit_java_lang_ArithmeticException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_ArithmeticException);
	init_java_lang_ArithmeticException_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"BigInteger out of short range"_j))));
	throwException(ctx, sp[0].o);	}

	popStackFrame(ctx);
}

jbyte M_java_math_BigInteger_byteValueExact_R_byte(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/math/BigInteger:byteValueExact", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(4659);
	sp[0].o = (jobject)((java_math_BigInteger *) NULL_CHECK((frame[0].o)))->F_mag;
	if ((((jarray) nullCheck(ctx, sp[0].o))->length) > (jint(1))) goto label_1;
	}
	{
	jint temp0 = (jint)((func_java_math_BigInteger_bitLength_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_math_BigInteger_bitLength_R_int])(ctx, (frame[0].o));
	if (temp0 > (31)) goto label_1;
	}
	{
	LINE_NUMBER(4660);
	jint temp0 = (jint)((func_java_math_BigInteger_intValue_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_math_BigInteger_intValue_R_int])(ctx, (frame[0].o));
	frame[1].i = temp0;
	LINE_NUMBER(4661);
	if ((frame[1].i) < (-128)) goto label_1;
	}
	{
	if ((frame[1].i) > (127)) goto label_1;
	}
	{
	LINE_NUMBER(4662);
	jint temp0 = (jint)((func_java_math_BigInteger_byteValue_R_byte) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_math_BigInteger_byteValue_R_byte])(ctx, (frame[0].o));
	popStackFrame(ctx);
	return temp0;
	}
label_1:;
	{
	LINE_NUMBER(4664);
	clinit_java_lang_ArithmeticException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_ArithmeticException);
	init_java_lang_ArithmeticException_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"BigInteger out of byte range"_j))));
	throwException(ctx, sp[0].o);	}

	popStackFrame(ctx);
}

jint M_java_math_BigInteger_compareTo_java_lang_Object_R_int(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/math/BigInteger:compareTo", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(121);
	jint temp0 = (jint)((func_java_math_BigInteger_compareTo_java_math_BigInteger_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_math_BigInteger_compareTo_java_math_BigInteger_R_int])(ctx, (frame[0].o), (checkCast(ctx, &class_java_math_BigInteger, (frame[1].o))));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

void clinit_java_math_BigInteger(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	clinit_java_lang_Number(ctx);
	SF_java_math_BigInteger_LONG_MASK = jlong(4294967295ll);
	SF_java_math_BigInteger_MAX_MAG_LENGTH = jint(67108864);
	SF_java_math_BigInteger_PRIME_SEARCH_BIT_LENGTH_LIMIT = jint(500000000);
	SF_java_math_BigInteger_KARATSUBA_THRESHOLD = jint(80);
	SF_java_math_BigInteger_TOOM_COOK_THRESHOLD = jint(240);
	SF_java_math_BigInteger_KARATSUBA_SQUARE_THRESHOLD = jint(128);
	SF_java_math_BigInteger_TOOM_COOK_SQUARE_THRESHOLD = jint(216);
	SF_java_math_BigInteger_BURNIKEL_ZIEGLER_THRESHOLD = jint(80);
	SF_java_math_BigInteger_BURNIKEL_ZIEGLER_OFFSET = jint(40);
	SF_java_math_BigInteger_SCHOENHAGE_BASE_CONVERSION_THRESHOLD = jint(20);
	SF_java_math_BigInteger_MULTIPLY_SQUARE_THRESHOLD = jint(20);
	SF_java_math_BigInteger_MONTGOMERY_INTRINSIC_THRESHOLD = jint(512);
	SF_java_math_BigInteger_SMALL_PRIME_THRESHOLD = jint(95);
	SF_java_math_BigInteger_DEFAULT_PRIME_CERTAINTY = jint(100);
	SF_java_math_BigInteger_MAX_CONSTANT = jint(16);
	SF_java_math_BigInteger_serialVersionUID = jlong(-8287574255936472291ll);
	jtype frame[9];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/math/BigInteger:<clinit>", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_math_BigInteger(ctx);
	{
	LINE_NUMBER(121);
	jint temp0 = (jint)((func_java_lang_Class_desiredAssertionStatus_R_boolean) ((void **) nullCheck(ctx, (((jobject) &class_java_math_BigInteger)))->vtable)[VTABLE_java_lang_Class_desiredAssertionStatus_R_boolean])(ctx, (((jobject) &class_java_math_BigInteger)));
	if (temp0 != 0) goto label_1;
	}
	INST_ICONST(1);
	goto label_2;
label_1:;
	INST_ICONST(0);
label_2:;
	{
	sp -= 1;
	clinit_java_math_BigInteger(ctx);
	SF_java_math_BigInteger_$assertionsDisabled = sp[0].i;
	LINE_NUMBER(558);
	sp[0].o = (jobject) createArray(ctx, &class_long, (37));
	ARRAY_ACCESS(jlong, sp[0].o, (jint(0))) = (jlong(0));
	ARRAY_ACCESS(jlong, sp[0].o, (jint(1))) = (jlong(0));
	ARRAY_ACCESS(jlong, sp[0].o, (jint(2))) = (jlong(1024ll));
	ARRAY_ACCESS(jlong, sp[0].o, (jint(3))) = (jlong(1624ll));
	ARRAY_ACCESS(jlong, sp[0].o, (jint(4))) = (jlong(2048ll));
	ARRAY_ACCESS(jlong, sp[0].o, (jint(5))) = (jlong(2378ll));
	ARRAY_ACCESS(jlong, sp[0].o, (6)) = (jlong(2648ll));
	ARRAY_ACCESS(jlong, sp[0].o, (7)) = (jlong(2875ll));
	ARRAY_ACCESS(jlong, sp[0].o, (8)) = (jlong(3072ll));
	ARRAY_ACCESS(jlong, sp[0].o, (9)) = (jlong(3247ll));
	ARRAY_ACCESS(jlong, sp[0].o, (10)) = (jlong(3402ll));
	ARRAY_ACCESS(jlong, sp[0].o, (11)) = (jlong(3543ll));
	ARRAY_ACCESS(jlong, sp[0].o, (12)) = (jlong(3672ll));
	ARRAY_ACCESS(jlong, sp[0].o, (13)) = (jlong(3790ll));
	ARRAY_ACCESS(jlong, sp[0].o, (14)) = (jlong(3899ll));
	ARRAY_ACCESS(jlong, sp[0].o, (15)) = (jlong(4001ll));
	ARRAY_ACCESS(jlong, sp[0].o, (16)) = (jlong(4096ll));
	ARRAY_ACCESS(jlong, sp[0].o, (17)) = (jlong(4186ll));
	ARRAY_ACCESS(jlong, sp[0].o, (18)) = (jlong(4271ll));
	ARRAY_ACCESS(jlong, sp[0].o, (19)) = (jlong(4350ll));
	ARRAY_ACCESS(jlong, sp[0].o, (20)) = (jlong(4426ll));
	ARRAY_ACCESS(jlong, sp[0].o, (21)) = (jlong(4498ll));
	ARRAY_ACCESS(jlong, sp[0].o, (22)) = (jlong(4567ll));
	ARRAY_ACCESS(jlong, sp[0].o, (23)) = (jlong(4633ll));
	ARRAY_ACCESS(jlong, sp[0].o, (24)) = (jlong(4696ll));
	ARRAY_ACCESS(jlong, sp[0].o, (25)) = (jlong(4756ll));
	ARRAY_ACCESS(jlong, sp[0].o, (26)) = (jlong(4814ll));
	ARRAY_ACCESS(jlong, sp[0].o, (27)) = (jlong(4870ll));
	ARRAY_ACCESS(jlong, sp[0].o, (28)) = (jlong(4923ll));
	ARRAY_ACCESS(jlong, sp[0].o, (29)) = (jlong(4975ll));
	ARRAY_ACCESS(jlong, sp[0].o, (30)) = (jlong(5025ll));
	ARRAY_ACCESS(jlong, sp[0].o, (31)) = (jlong(5074ll));
	ARRAY_ACCESS(jlong, sp[0].o, (32)) = (jlong(5120ll));
	ARRAY_ACCESS(jlong, sp[0].o, (33)) = (jlong(5166ll));
	ARRAY_ACCESS(jlong, sp[0].o, (34)) = (jlong(5210ll));
	ARRAY_ACCESS(jlong, sp[0].o, (35)) = (jlong(5253ll));
	ARRAY_ACCESS(jlong, sp[0].o, (36)) = (jlong(5295ll));
	clinit_java_math_BigInteger(ctx);
	SF_java_math_BigInteger_bitsPerDigit = sp[0].o;
	LINE_NUMBER(742);
	jlong temp0 = jlong(152125131763605ll);
	LINE_NUMBER(743);
	sp[0].o = (jobject)SM_java_math_BigInteger_valueOf_long_R_java_math_BigInteger(ctx, temp0);
	clinit_java_math_BigInteger(ctx);
	SF_java_math_BigInteger_SMALL_PRIME_PRODUCT = sp[0].o;
	LINE_NUMBER(1145);
	sp[0].o = (jobject)createArray(ctx, &class_java_math_BigInteger, (17));
	clinit_java_math_BigInteger(ctx);
	SF_java_math_BigInteger_posConst = sp[0].o;
	LINE_NUMBER(1146);
	sp[0].o = (jobject)createArray(ctx, &class_java_math_BigInteger, (17));
	clinit_java_math_BigInteger(ctx);
	SF_java_math_BigInteger_negConst = sp[0].o;
	LINE_NUMBER(1159);
	jdouble temp1 = (jdouble)SM_java_lang_Math_log_double_R_double(ctx, (jdouble(2.0)));
	clinit_java_math_BigInteger(ctx);
	SF_java_math_BigInteger_LOG_TWO = temp1;
	LINE_NUMBER(1170);
	frame[0].i = (jint(1));
	}
label_10:;
	{
	if ((frame[0].i) > (16)) goto label_11;
	}
	{
	LINE_NUMBER(1171);
	sp[0].o = (jobject) createArray(ctx, &class_int, (jint(1)));
	frame[1].o = sp[0].o;
	LINE_NUMBER(1172);
	ARRAY_ACCESS(jint, (frame[1].o), (jint(0))) = (frame[0].i);
	LINE_NUMBER(1173);
	clinit_java_math_BigInteger(ctx);
	sp[0].o = (jobject)SF_java_math_BigInteger_posConst;
	jint temp0 = frame[0].i;
	clinit_java_math_BigInteger(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_math_BigInteger);
	init_java_math_BigInteger_Array1_int_int(ctx, sp[1].o, (frame[1].o), (jint(1)));
	ARRAY_ACCESS(jobject, sp[0].o, temp0) = sp[1].o;
	LINE_NUMBER(1174);
	clinit_java_math_BigInteger(ctx);
	sp[0].o = (jobject)SF_java_math_BigInteger_negConst;
	jint temp1 = frame[0].i;
	clinit_java_math_BigInteger(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_math_BigInteger);
	init_java_math_BigInteger_Array1_int_int(ctx, sp[1].o, (frame[1].o), (jint(-1)));
	ARRAY_ACCESS(jobject, sp[0].o, temp1) = sp[1].o;
	LINE_NUMBER(1170);
	INST_IINC(0, 1);
	goto label_10;
	}
label_11:;
	{
	LINE_NUMBER(1182);
	sp[0].o = (jobject)createArray(ctx, getArrayClass(&class_java_math_BigInteger, 1), (37));
	clinit_java_math_BigInteger(ctx);
	SF_java_math_BigInteger_powerCache = sp[0].o;
	LINE_NUMBER(1183);
	sp[0].o = (jobject) createArray(ctx, &class_double, (37));
	clinit_java_math_BigInteger(ctx);
	SF_java_math_BigInteger_logCache = sp[0].o;
	LINE_NUMBER(1185);
	frame[0].i = (jint(2));
	}
label_19:;
	{
	if ((frame[0].i) > (36)) goto label_20;
	}
	{
	LINE_NUMBER(1186);
	clinit_java_math_BigInteger(ctx);
	sp[0].o = (jobject)SF_java_math_BigInteger_powerCache;
	jint temp0 = frame[0].i;
	sp[1].o = (jobject)createArray(ctx, &class_java_math_BigInteger, (jint(1)));
	jint temp1 = jint(0);
	sp[2].o = (jobject)SM_java_math_BigInteger_valueOf_long_R_java_math_BigInteger(ctx, (jlong((frame[0].i))));
	ARRAY_ACCESS(jobject, sp[1].o, temp1) = sp[2].o;
	ARRAY_ACCESS(jobject, sp[0].o, temp0) = sp[1].o;
	LINE_NUMBER(1187);
	clinit_java_math_BigInteger(ctx);
	sp[0].o = (jobject)SF_java_math_BigInteger_logCache;
	jint temp2 = frame[0].i;
	jdouble temp3 = (jdouble)SM_java_lang_Math_log_double_R_double(ctx, (jdouble((frame[0].i))));
	ARRAY_ACCESS(jdouble, sp[0].o, temp2) = temp3;
	LINE_NUMBER(1185);
	INST_IINC(0, 1);
	goto label_19;
	}
label_20:;
	{
	LINE_NUMBER(1196);
	clinit_java_math_BigInteger(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_math_BigInteger);
	sp[1].o = (jobject) createArray(ctx, &class_int, (jint(0)));
	init_java_math_BigInteger_Array1_int_int(ctx, sp[0].o, sp[1].o, (jint(0)));
	clinit_java_math_BigInteger(ctx);
	SF_java_math_BigInteger_ZERO = sp[0].o;
	LINE_NUMBER(1203);
	sp[0].o = (jobject)SM_java_math_BigInteger_valueOf_long_R_java_math_BigInteger(ctx, (jlong(1)));
	clinit_java_math_BigInteger(ctx);
	SF_java_math_BigInteger_ONE = sp[0].o;
	LINE_NUMBER(1208);
	sp[0].o = (jobject)SM_java_math_BigInteger_valueOf_long_R_java_math_BigInteger(ctx, (jlong(2ll)));
	clinit_java_math_BigInteger(ctx);
	SF_java_math_BigInteger_TWO = sp[0].o;
	LINE_NUMBER(1213);
	sp[0].o = (jobject)SM_java_math_BigInteger_valueOf_long_R_java_math_BigInteger(ctx, (jlong(-1ll)));
	clinit_java_math_BigInteger(ctx);
	SF_java_math_BigInteger_NEGATIVE_ONE = sp[0].o;
	LINE_NUMBER(1220);
	sp[0].o = (jobject)SM_java_math_BigInteger_valueOf_long_R_java_math_BigInteger(ctx, (jlong(10ll)));
	clinit_java_math_BigInteger(ctx);
	SF_java_math_BigInteger_TEN = sp[0].o;
	LINE_NUMBER(2715);
	sp[0].o = (jobject) createArray(ctx, &class_int, (7));
	ARRAY_ACCESS(jint, sp[0].o, (jint(0))) = (7);
	ARRAY_ACCESS(jint, sp[0].o, (jint(1))) = (25);
	ARRAY_ACCESS(jint, sp[0].o, (jint(2))) = (81);
	ARRAY_ACCESS(jint, sp[0].o, (jint(3))) = (241);
	ARRAY_ACCESS(jint, sp[0].o, (jint(4))) = (673);
	ARRAY_ACCESS(jint, sp[0].o, (jint(5))) = (1793);
	ARRAY_ACCESS(jint, sp[0].o, (6)) = (jint(2147483647));
	clinit_java_math_BigInteger(ctx);
	SF_java_math_BigInteger_bnExpModThreshTable = sp[0].o;
	LINE_NUMBER(3936);
	sp[0].o = (jobject)createArray(ctx, &class_java_lang_String, (64));
	clinit_java_math_BigInteger(ctx);
	SF_java_math_BigInteger_zeros = sp[0].o;
	LINE_NUMBER(3938);
	clinit_java_math_BigInteger(ctx);
	sp[0].o = (jobject)SF_java_math_BigInteger_zeros;
	ARRAY_ACCESS(jobject, sp[0].o, (63)) = (((jobject) createStringLiteral(ctx, u8"000000000000000000000000000000000000000000000000000000000000000"_j)));
	LINE_NUMBER(3940);
	frame[0].i = (jint(0));
	}
label_32:;
	{
	if ((frame[0].i) >= (63)) goto label_33;
	}
	{
	LINE_NUMBER(3941);
	clinit_java_math_BigInteger(ctx);
	sp[0].o = (jobject)SF_java_math_BigInteger_zeros;
	jint temp0 = frame[0].i;
	clinit_java_math_BigInteger(ctx);
	sp[1].o = (jobject)SF_java_math_BigInteger_zeros;
	sp[1].o = (jobject)((func_java_lang_String_substring_int_int_R_java_lang_String) ((void **) nullCheck(ctx, ((jobject)ARRAY_ACCESS(jobject, sp[1].o, (63))))->vtable)[VTABLE_java_lang_String_substring_int_int_R_java_lang_String])(ctx, ((jobject)ARRAY_ACCESS(jobject, sp[1].o, (63))), (jint(0)), (frame[0].i));
	ARRAY_ACCESS(jobject, sp[0].o, temp0) = sp[1].o;
	LINE_NUMBER(3940);
	INST_IINC(0, 1);
	goto label_32;
	}
label_33:;
	{
	LINE_NUMBER(4352);
	sp[0].o = (jobject) createArray(ctx, &class_int, (37));
	ARRAY_ACCESS(jint, sp[0].o, (jint(0))) = (jint(0));
	ARRAY_ACCESS(jint, sp[0].o, (jint(1))) = (jint(0));
	ARRAY_ACCESS(jint, sp[0].o, (jint(2))) = (62);
	ARRAY_ACCESS(jint, sp[0].o, (jint(3))) = (39);
	ARRAY_ACCESS(jint, sp[0].o, (jint(4))) = (31);
	ARRAY_ACCESS(jint, sp[0].o, (jint(5))) = (27);
	ARRAY_ACCESS(jint, sp[0].o, (6)) = (24);
	ARRAY_ACCESS(jint, sp[0].o, (7)) = (22);
	ARRAY_ACCESS(jint, sp[0].o, (8)) = (20);
	ARRAY_ACCESS(jint, sp[0].o, (9)) = (19);
	ARRAY_ACCESS(jint, sp[0].o, (10)) = (18);
	ARRAY_ACCESS(jint, sp[0].o, (11)) = (18);
	ARRAY_ACCESS(jint, sp[0].o, (12)) = (17);
	ARRAY_ACCESS(jint, sp[0].o, (13)) = (17);
	ARRAY_ACCESS(jint, sp[0].o, (14)) = (16);
	ARRAY_ACCESS(jint, sp[0].o, (15)) = (16);
	ARRAY_ACCESS(jint, sp[0].o, (16)) = (15);
	ARRAY_ACCESS(jint, sp[0].o, (17)) = (15);
	ARRAY_ACCESS(jint, sp[0].o, (18)) = (15);
	ARRAY_ACCESS(jint, sp[0].o, (19)) = (14);
	ARRAY_ACCESS(jint, sp[0].o, (20)) = (14);
	ARRAY_ACCESS(jint, sp[0].o, (21)) = (14);
	ARRAY_ACCESS(jint, sp[0].o, (22)) = (14);
	ARRAY_ACCESS(jint, sp[0].o, (23)) = (13);
	ARRAY_ACCESS(jint, sp[0].o, (24)) = (13);
	ARRAY_ACCESS(jint, sp[0].o, (25)) = (13);
	ARRAY_ACCESS(jint, sp[0].o, (26)) = (13);
	ARRAY_ACCESS(jint, sp[0].o, (27)) = (13);
	ARRAY_ACCESS(jint, sp[0].o, (28)) = (13);
	ARRAY_ACCESS(jint, sp[0].o, (29)) = (12);
	ARRAY_ACCESS(jint, sp[0].o, (30)) = (12);
	ARRAY_ACCESS(jint, sp[0].o, (31)) = (12);
	ARRAY_ACCESS(jint, sp[0].o, (32)) = (12);
	ARRAY_ACCESS(jint, sp[0].o, (33)) = (12);
	ARRAY_ACCESS(jint, sp[0].o, (34)) = (12);
	ARRAY_ACCESS(jint, sp[0].o, (35)) = (12);
	ARRAY_ACCESS(jint, sp[0].o, (36)) = (12);
	clinit_java_math_BigInteger(ctx);
	SF_java_math_BigInteger_digitsPerLong = sp[0].o;
	LINE_NUMBER(4356);
	sp[0].o = (jobject)createArray(ctx, &class_java_math_BigInteger, (37));
	ARRAY_ACCESS(jobject, sp[0].o, (jint(0))) = (jobject(nullptr));
	ARRAY_ACCESS(jobject, sp[0].o, (jint(1))) = (jobject(nullptr));
	jint temp0 = jint(2);
	jlong temp1 = jlong(4611686018427387904ll);
	LINE_NUMBER(4357);
	sp[1].o = (jobject)SM_java_math_BigInteger_valueOf_long_R_java_math_BigInteger(ctx, temp1);
	ARRAY_ACCESS(jobject, sp[0].o, temp0) = sp[1].o;
	jint temp2 = jint(3);
	sp[1].o = (jobject)SM_java_math_BigInteger_valueOf_long_R_java_math_BigInteger(ctx, (jlong(4052555153018976267ll)));
	ARRAY_ACCESS(jobject, sp[0].o, temp2) = sp[1].o;
	jint temp3 = jint(4);
	jlong temp4 = jlong(4611686018427387904ll);
	LINE_NUMBER(4358);
	sp[1].o = (jobject)SM_java_math_BigInteger_valueOf_long_R_java_math_BigInteger(ctx, temp4);
	ARRAY_ACCESS(jobject, sp[0].o, temp3) = sp[1].o;
	jint temp5 = jint(5);
	sp[1].o = (jobject)SM_java_math_BigInteger_valueOf_long_R_java_math_BigInteger(ctx, (jlong(7450580596923828125ll)));
	ARRAY_ACCESS(jobject, sp[0].o, temp5) = sp[1].o;
	jint temp6 = 6;
	jlong temp7 = jlong(4738381338321616896ll);
	LINE_NUMBER(4359);
	sp[1].o = (jobject)SM_java_math_BigInteger_valueOf_long_R_java_math_BigInteger(ctx, temp7);
	ARRAY_ACCESS(jobject, sp[0].o, temp6) = sp[1].o;
	jint temp8 = 7;
	sp[1].o = (jobject)SM_java_math_BigInteger_valueOf_long_R_java_math_BigInteger(ctx, (jlong(3909821048582988049ll)));
	ARRAY_ACCESS(jobject, sp[0].o, temp8) = sp[1].o;
	jint temp9 = 8;
	jlong temp10 = jlong(1152921504606846976ll);
	LINE_NUMBER(4360);
	sp[1].o = (jobject)SM_java_math_BigInteger_valueOf_long_R_java_math_BigInteger(ctx, temp10);
	ARRAY_ACCESS(jobject, sp[0].o, temp9) = sp[1].o;
	jint temp11 = 9;
	sp[1].o = (jobject)SM_java_math_BigInteger_valueOf_long_R_java_math_BigInteger(ctx, (jlong(1350851717672992089ll)));
	ARRAY_ACCESS(jobject, sp[0].o, temp11) = sp[1].o;
	jint temp12 = 10;
	jlong temp13 = jlong(1000000000000000000ll);
	LINE_NUMBER(4361);
	sp[1].o = (jobject)SM_java_math_BigInteger_valueOf_long_R_java_math_BigInteger(ctx, temp13);
	ARRAY_ACCESS(jobject, sp[0].o, temp12) = sp[1].o;
	jint temp14 = 11;
	sp[1].o = (jobject)SM_java_math_BigInteger_valueOf_long_R_java_math_BigInteger(ctx, (jlong(5559917313492231481ll)));
	ARRAY_ACCESS(jobject, sp[0].o, temp14) = sp[1].o;
	jint temp15 = 12;
	jlong temp16 = jlong(2218611106740436992ll);
	LINE_NUMBER(4362);
	sp[1].o = (jobject)SM_java_math_BigInteger_valueOf_long_R_java_math_BigInteger(ctx, temp16);
	ARRAY_ACCESS(jobject, sp[0].o, temp15) = sp[1].o;
	jint temp17 = 13;
	sp[1].o = (jobject)SM_java_math_BigInteger_valueOf_long_R_java_math_BigInteger(ctx, (jlong(8650415919381337933ll)));
	ARRAY_ACCESS(jobject, sp[0].o, temp17) = sp[1].o;
	jint temp18 = 14;
	jlong temp19 = jlong(2177953337809371136ll);
	LINE_NUMBER(4363);
	sp[1].o = (jobject)SM_java_math_BigInteger_valueOf_long_R_java_math_BigInteger(ctx, temp19);
	ARRAY_ACCESS(jobject, sp[0].o, temp18) = sp[1].o;
	jint temp20 = 15;
	sp[1].o = (jobject)SM_java_math_BigInteger_valueOf_long_R_java_math_BigInteger(ctx, (jlong(6568408355712890625ll)));
	ARRAY_ACCESS(jobject, sp[0].o, temp20) = sp[1].o;
	jint temp21 = 16;
	jlong temp22 = jlong(1152921504606846976ll);
	LINE_NUMBER(4364);
	sp[1].o = (jobject)SM_java_math_BigInteger_valueOf_long_R_java_math_BigInteger(ctx, temp22);
	ARRAY_ACCESS(jobject, sp[0].o, temp21) = sp[1].o;
	jint temp23 = 17;
	sp[1].o = (jobject)SM_java_math_BigInteger_valueOf_long_R_java_math_BigInteger(ctx, (jlong(2862423051509815793ll)));
	ARRAY_ACCESS(jobject, sp[0].o, temp23) = sp[1].o;
	jint temp24 = 18;
	jlong temp25 = jlong(6746640616477458432ll);
	LINE_NUMBER(4365);
	sp[1].o = (jobject)SM_java_math_BigInteger_valueOf_long_R_java_math_BigInteger(ctx, temp25);
	ARRAY_ACCESS(jobject, sp[0].o, temp24) = sp[1].o;
	jint temp26 = 19;
	sp[1].o = (jobject)SM_java_math_BigInteger_valueOf_long_R_java_math_BigInteger(ctx, (jlong(799006685782884121ll)));
	ARRAY_ACCESS(jobject, sp[0].o, temp26) = sp[1].o;
	jint temp27 = 20;
	jlong temp28 = jlong(1638400000000000000ll);
	LINE_NUMBER(4366);
	sp[1].o = (jobject)SM_java_math_BigInteger_valueOf_long_R_java_math_BigInteger(ctx, temp28);
	ARRAY_ACCESS(jobject, sp[0].o, temp27) = sp[1].o;
	jint temp29 = 21;
	sp[1].o = (jobject)SM_java_math_BigInteger_valueOf_long_R_java_math_BigInteger(ctx, (jlong(3243919932521508681ll)));
	ARRAY_ACCESS(jobject, sp[0].o, temp29) = sp[1].o;
	jint temp30 = 22;
	jlong temp31 = jlong(6221821273427820544ll);
	LINE_NUMBER(4367);
	sp[1].o = (jobject)SM_java_math_BigInteger_valueOf_long_R_java_math_BigInteger(ctx, temp31);
	ARRAY_ACCESS(jobject, sp[0].o, temp30) = sp[1].o;
	jint temp32 = 23;
	sp[1].o = (jobject)SM_java_math_BigInteger_valueOf_long_R_java_math_BigInteger(ctx, (jlong(504036361936467383ll)));
	ARRAY_ACCESS(jobject, sp[0].o, temp32) = sp[1].o;
	jint temp33 = 24;
	jlong temp34 = jlong(876488338465357824ll);
	LINE_NUMBER(4368);
	sp[1].o = (jobject)SM_java_math_BigInteger_valueOf_long_R_java_math_BigInteger(ctx, temp34);
	ARRAY_ACCESS(jobject, sp[0].o, temp33) = sp[1].o;
	jint temp35 = 25;
	sp[1].o = (jobject)SM_java_math_BigInteger_valueOf_long_R_java_math_BigInteger(ctx, (jlong(1490116119384765625ll)));
	ARRAY_ACCESS(jobject, sp[0].o, temp35) = sp[1].o;
	jint temp36 = 26;
	jlong temp37 = jlong(2481152873203736576ll);
	LINE_NUMBER(4369);
	sp[1].o = (jobject)SM_java_math_BigInteger_valueOf_long_R_java_math_BigInteger(ctx, temp37);
	ARRAY_ACCESS(jobject, sp[0].o, temp36) = sp[1].o;
	jint temp38 = 27;
	sp[1].o = (jobject)SM_java_math_BigInteger_valueOf_long_R_java_math_BigInteger(ctx, (jlong(4052555153018976267ll)));
	ARRAY_ACCESS(jobject, sp[0].o, temp38) = sp[1].o;
	jint temp39 = 28;
	jlong temp40 = jlong(6502111422497947648ll);
	LINE_NUMBER(4370);
	sp[1].o = (jobject)SM_java_math_BigInteger_valueOf_long_R_java_math_BigInteger(ctx, temp40);
	ARRAY_ACCESS(jobject, sp[0].o, temp39) = sp[1].o;
	jint temp41 = 29;
	sp[1].o = (jobject)SM_java_math_BigInteger_valueOf_long_R_java_math_BigInteger(ctx, (jlong(353814783205469041ll)));
	ARRAY_ACCESS(jobject, sp[0].o, temp41) = sp[1].o;
	jint temp42 = 30;
	jlong temp43 = jlong(531441000000000000ll);
	LINE_NUMBER(4371);
	sp[1].o = (jobject)SM_java_math_BigInteger_valueOf_long_R_java_math_BigInteger(ctx, temp43);
	ARRAY_ACCESS(jobject, sp[0].o, temp42) = sp[1].o;
	jint temp44 = 31;
	sp[1].o = (jobject)SM_java_math_BigInteger_valueOf_long_R_java_math_BigInteger(ctx, (jlong(787662783788549761ll)));
	ARRAY_ACCESS(jobject, sp[0].o, temp44) = sp[1].o;
	jint temp45 = 32;
	jlong temp46 = jlong(1152921504606846976ll);
	LINE_NUMBER(4372);
	sp[1].o = (jobject)SM_java_math_BigInteger_valueOf_long_R_java_math_BigInteger(ctx, temp46);
	ARRAY_ACCESS(jobject, sp[0].o, temp45) = sp[1].o;
	jint temp47 = 33;
	sp[1].o = (jobject)SM_java_math_BigInteger_valueOf_long_R_java_math_BigInteger(ctx, (jlong(1667889514952984961ll)));
	ARRAY_ACCESS(jobject, sp[0].o, temp47) = sp[1].o;
	jint temp48 = 34;
	jlong temp49 = jlong(2386420683693101056ll);
	LINE_NUMBER(4373);
	sp[1].o = (jobject)SM_java_math_BigInteger_valueOf_long_R_java_math_BigInteger(ctx, temp49);
	ARRAY_ACCESS(jobject, sp[0].o, temp48) = sp[1].o;
	jint temp50 = 35;
	sp[1].o = (jobject)SM_java_math_BigInteger_valueOf_long_R_java_math_BigInteger(ctx, (jlong(3379220508056640625ll)));
	ARRAY_ACCESS(jobject, sp[0].o, temp50) = sp[1].o;
	jint temp51 = 36;
	jlong temp52 = jlong(4738381338321616896ll);
	LINE_NUMBER(4374);
	sp[1].o = (jobject)SM_java_math_BigInteger_valueOf_long_R_java_math_BigInteger(ctx, temp52);
	ARRAY_ACCESS(jobject, sp[0].o, temp51) = sp[1].o;
	clinit_java_math_BigInteger(ctx);
	SF_java_math_BigInteger_longRadix = sp[0].o;
	LINE_NUMBER(4379);
	sp[0].o = (jobject) createArray(ctx, &class_int, (37));
	ARRAY_ACCESS(jint, sp[0].o, (jint(0))) = (jint(0));
	ARRAY_ACCESS(jint, sp[0].o, (jint(1))) = (jint(0));
	ARRAY_ACCESS(jint, sp[0].o, (jint(2))) = (30);
	ARRAY_ACCESS(jint, sp[0].o, (jint(3))) = (19);
	ARRAY_ACCESS(jint, sp[0].o, (jint(4))) = (15);
	ARRAY_ACCESS(jint, sp[0].o, (jint(5))) = (13);
	ARRAY_ACCESS(jint, sp[0].o, (6)) = (11);
	ARRAY_ACCESS(jint, sp[0].o, (7)) = (11);
	ARRAY_ACCESS(jint, sp[0].o, (8)) = (10);
	ARRAY_ACCESS(jint, sp[0].o, (9)) = (9);
	ARRAY_ACCESS(jint, sp[0].o, (10)) = (9);
	ARRAY_ACCESS(jint, sp[0].o, (11)) = (8);
	ARRAY_ACCESS(jint, sp[0].o, (12)) = (8);
	ARRAY_ACCESS(jint, sp[0].o, (13)) = (8);
	ARRAY_ACCESS(jint, sp[0].o, (14)) = (8);
	ARRAY_ACCESS(jint, sp[0].o, (15)) = (7);
	ARRAY_ACCESS(jint, sp[0].o, (16)) = (7);
	ARRAY_ACCESS(jint, sp[0].o, (17)) = (7);
	ARRAY_ACCESS(jint, sp[0].o, (18)) = (7);
	ARRAY_ACCESS(jint, sp[0].o, (19)) = (7);
	ARRAY_ACCESS(jint, sp[0].o, (20)) = (7);
	ARRAY_ACCESS(jint, sp[0].o, (21)) = (7);
	ARRAY_ACCESS(jint, sp[0].o, (22)) = (6);
	ARRAY_ACCESS(jint, sp[0].o, (23)) = (6);
	ARRAY_ACCESS(jint, sp[0].o, (24)) = (6);
	ARRAY_ACCESS(jint, sp[0].o, (25)) = (6);
	ARRAY_ACCESS(jint, sp[0].o, (26)) = (6);
	ARRAY_ACCESS(jint, sp[0].o, (27)) = (6);
	ARRAY_ACCESS(jint, sp[0].o, (28)) = (6);
	ARRAY_ACCESS(jint, sp[0].o, (29)) = (6);
	ARRAY_ACCESS(jint, sp[0].o, (30)) = (6);
	ARRAY_ACCESS(jint, sp[0].o, (31)) = (6);
	ARRAY_ACCESS(jint, sp[0].o, (32)) = (6);
	ARRAY_ACCESS(jint, sp[0].o, (33)) = (6);
	ARRAY_ACCESS(jint, sp[0].o, (34)) = (6);
	ARRAY_ACCESS(jint, sp[0].o, (35)) = (6);
	ARRAY_ACCESS(jint, sp[0].o, (36)) = (jint(5));
	clinit_java_math_BigInteger(ctx);
	SF_java_math_BigInteger_digitsPerInt = sp[0].o;
	LINE_NUMBER(4383);
	sp[0].o = (jobject) createArray(ctx, &class_int, (37));
	ARRAY_ACCESS(jint, sp[0].o, (jint(0))) = (jint(0));
	ARRAY_ACCESS(jint, sp[0].o, (jint(1))) = (jint(0));
	ARRAY_ACCESS(jint, sp[0].o, (jint(2))) = (jint(1073741824));
	ARRAY_ACCESS(jint, sp[0].o, (jint(3))) = (jint(1162261467));
	ARRAY_ACCESS(jint, sp[0].o, (jint(4))) = (jint(1073741824));
	ARRAY_ACCESS(jint, sp[0].o, (jint(5))) = (jint(1220703125));
	ARRAY_ACCESS(jint, sp[0].o, (6)) = (jint(362797056));
	ARRAY_ACCESS(jint, sp[0].o, (7)) = (jint(1977326743));
	ARRAY_ACCESS(jint, sp[0].o, (8)) = (jint(1073741824));
	ARRAY_ACCESS(jint, sp[0].o, (9)) = (jint(387420489));
	ARRAY_ACCESS(jint, sp[0].o, (10)) = (jint(1000000000));
	ARRAY_ACCESS(jint, sp[0].o, (11)) = (jint(214358881));
	ARRAY_ACCESS(jint, sp[0].o, (12)) = (jint(429981696));
	ARRAY_ACCESS(jint, sp[0].o, (13)) = (jint(815730721));
	ARRAY_ACCESS(jint, sp[0].o, (14)) = (jint(1475789056));
	ARRAY_ACCESS(jint, sp[0].o, (15)) = (jint(170859375));
	ARRAY_ACCESS(jint, sp[0].o, (16)) = (jint(268435456));
	ARRAY_ACCESS(jint, sp[0].o, (17)) = (jint(410338673));
	ARRAY_ACCESS(jint, sp[0].o, (18)) = (jint(612220032));
	ARRAY_ACCESS(jint, sp[0].o, (19)) = (jint(893871739));
	ARRAY_ACCESS(jint, sp[0].o, (20)) = (jint(1280000000));
	ARRAY_ACCESS(jint, sp[0].o, (21)) = (jint(1801088541));
	ARRAY_ACCESS(jint, sp[0].o, (22)) = (jint(113379904));
	ARRAY_ACCESS(jint, sp[0].o, (23)) = (jint(148035889));
	ARRAY_ACCESS(jint, sp[0].o, (24)) = (jint(191102976));
	ARRAY_ACCESS(jint, sp[0].o, (25)) = (jint(244140625));
	ARRAY_ACCESS(jint, sp[0].o, (26)) = (jint(308915776));
	ARRAY_ACCESS(jint, sp[0].o, (27)) = (jint(387420489));
	ARRAY_ACCESS(jint, sp[0].o, (28)) = (jint(481890304));
	ARRAY_ACCESS(jint, sp[0].o, (29)) = (jint(594823321));
	ARRAY_ACCESS(jint, sp[0].o, (30)) = (jint(729000000));
	ARRAY_ACCESS(jint, sp[0].o, (31)) = (jint(887503681));
	ARRAY_ACCESS(jint, sp[0].o, (32)) = (jint(1073741824));
	ARRAY_ACCESS(jint, sp[0].o, (33)) = (jint(1291467969));
	ARRAY_ACCESS(jint, sp[0].o, (34)) = (jint(1544804416));
	ARRAY_ACCESS(jint, sp[0].o, (35)) = (jint(1838265625));
	ARRAY_ACCESS(jint, sp[0].o, (36)) = (jint(60466176));
	clinit_java_math_BigInteger(ctx);
	SF_java_math_BigInteger_intRadix = sp[0].o;
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

static void initAnnotations(jcontext ctx) {
	auto &clazz = class_java_math_BigInteger;
	auto fields = (java_lang_reflect_Field **) ((jarray) clazz.fields)->data;
	auto methods = (java_lang_reflect_Method **) ((jarray) clazz.methods)->data;
	auto constructors = (java_lang_reflect_Constructor **) ((jarray) clazz.constructors)->data;

	fields[0]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[1]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	{ // Field bitCount
		auto annotationArray = (jarray) createArray(ctx, &class_java_lang_annotation_Annotation, 1);
		fields[2]->F_annotations = (intptr_t) annotationArray;
		auto annotations = (jobject *) annotationArray->data;
		annotations[0] = gcAlloc(ctx, &class_java_lang_Deprecated);
		((java_lang_Deprecated *)annotations[0])->F_since = (intptr_t) ((jobject) createStringLiteral(ctx, u8""_j));
		((java_lang_Deprecated *)annotations[0])->F_forRemoval = 0;
	}

	{ // Field bitLength
		auto annotationArray = (jarray) createArray(ctx, &class_java_lang_annotation_Annotation, 1);
		fields[3]->F_annotations = (intptr_t) annotationArray;
		auto annotations = (jobject *) annotationArray->data;
		annotations[0] = gcAlloc(ctx, &class_java_lang_Deprecated);
		((java_lang_Deprecated *)annotations[0])->F_since = (intptr_t) ((jobject) createStringLiteral(ctx, u8""_j));
		((java_lang_Deprecated *)annotations[0])->F_forRemoval = 0;
	}

	{ // Field lowestSetBit
		auto annotationArray = (jarray) createArray(ctx, &class_java_lang_annotation_Annotation, 1);
		fields[4]->F_annotations = (intptr_t) annotationArray;
		auto annotations = (jobject *) annotationArray->data;
		annotations[0] = gcAlloc(ctx, &class_java_lang_Deprecated);
		((java_lang_Deprecated *)annotations[0])->F_since = (intptr_t) ((jobject) createStringLiteral(ctx, u8""_j));
		((java_lang_Deprecated *)annotations[0])->F_forRemoval = 0;
	}

	{ // Field firstNonzeroIntNum
		auto annotationArray = (jarray) createArray(ctx, &class_java_lang_annotation_Annotation, 1);
		fields[5]->F_annotations = (intptr_t) annotationArray;
		auto annotations = (jobject *) annotationArray->data;
		annotations[0] = gcAlloc(ctx, &class_java_lang_Deprecated);
		((java_lang_Deprecated *)annotations[0])->F_since = (intptr_t) ((jobject) createStringLiteral(ctx, u8""_j));
		((java_lang_Deprecated *)annotations[0])->F_forRemoval = 0;
	}

	fields[6]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[7]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[8]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[9]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[10]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[11]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[12]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[13]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[14]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[15]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[16]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[17]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[18]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[19]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[20]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[21]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[22]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[23]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[24]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[25]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[26]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[27]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[28]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[29]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[30]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[31]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[32]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[33]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[34]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[35]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[36]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[37]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[38]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[39]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[40]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	((java_lang_reflect_Method *) ((java_lang_reflect_Constructor *) constructors[0])->F_method)->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	((java_lang_reflect_Method *) ((java_lang_reflect_Constructor *) constructors[1])->F_method)->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	((java_lang_reflect_Method *) ((java_lang_reflect_Constructor *) constructors[2])->F_method)->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	((java_lang_reflect_Method *) ((java_lang_reflect_Constructor *) constructors[3])->F_method)->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	((java_lang_reflect_Method *) ((java_lang_reflect_Constructor *) constructors[4])->F_method)->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	((java_lang_reflect_Method *) ((java_lang_reflect_Constructor *) constructors[5])->F_method)->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[0]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[1]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	((java_lang_reflect_Method *) ((java_lang_reflect_Constructor *) constructors[6])->F_method)->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	((java_lang_reflect_Method *) ((java_lang_reflect_Constructor *) constructors[7])->F_method)->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[2]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	((java_lang_reflect_Method *) ((java_lang_reflect_Constructor *) constructors[8])->F_method)->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[3]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[4]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[5]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[6]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[7]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[8]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[9]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[10]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[11]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[12]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	((java_lang_reflect_Method *) ((java_lang_reflect_Constructor *) constructors[9])->F_method)->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	((java_lang_reflect_Method *) ((java_lang_reflect_Constructor *) constructors[10])->F_method)->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[13]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[14]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[15]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	((java_lang_reflect_Method *) ((java_lang_reflect_Constructor *) constructors[11])->F_method)->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[16]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[17]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[18]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[19]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[20]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[21]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[22]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[23]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[24]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[25]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[26]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[27]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[28]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[29]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[30]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[31]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[32]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[33]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[34]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[35]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[36]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[37]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[38]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[39]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[40]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[41]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[42]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[43]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[44]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[45]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[46]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[47]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[48]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[49]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[50]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[51]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[52]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[53]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[54]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[55]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[56]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[57]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[58]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[59]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[60]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[61]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[62]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[63]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[64]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[65]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[66]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[67]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[68]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[69]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[70]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[71]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[72]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[73]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[74]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[75]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[76]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[77]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[78]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[79]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[80]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[81]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[82]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[83]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[84]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[85]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[86]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[87]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[88]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[89]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[90]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[91]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[92]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[93]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[94]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[95]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[96]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[97]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[98]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[99]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[100]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[101]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[102]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[103]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[104]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[105]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[106]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[107]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[108]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[109]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[110]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[111]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[112]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[113]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[114]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[115]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[116]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[117]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[118]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[119]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[120]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[121]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[122]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[123]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[124]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[125]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[126]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[127]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[128]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[129]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[130]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[131]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[132]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);
}

void *vtable_java_math_BigInteger[] {
	(void *) M_java_math_BigInteger_hashCode_R_int,
	(void *) M_java_math_BigInteger_equals_java_lang_Object_R_boolean,
	(void *) M_java_lang_Object_clone_R_java_lang_Object,
	(void *) M_java_lang_Object_getClass_R_java_lang_Class,
	(void *) M_java_math_BigInteger_toString_R_java_lang_String,
	(void *) M_java_lang_Object_finalize,
	(void *) M_java_lang_Object_notify,
	(void *) M_java_lang_Object_notifyAll,
	(void *) M_java_lang_Object_wait,
	(void *) M_java_lang_Object_wait_long,
	(void *) M_java_lang_Object_wait_long_int,
	(void *) M_java_math_BigInteger_intValue_R_int,
	(void *) M_java_lang_Number_byteValue_R_byte,
	(void *) M_java_math_BigInteger_longValue_R_long,
	(void *) M_java_math_BigInteger_floatValue_R_float,
	(void *) M_java_math_BigInteger_doubleValue_R_double,
	(void *) M_java_lang_Number_shortValue_R_short,
	(void *) M_java_math_BigInteger_compareTo_java_lang_Object_R_int,
	(void *) M_java_math_BigInteger_parseInt_Array1_char_int_int_R_int,
	(void *) M_java_math_BigInteger_nextProbablePrime_R_java_math_BigInteger,
	(void *) M_java_math_BigInteger_primeToCertainty_int_java_util_Random_R_boolean,
	(void *) M_java_math_BigInteger_passesLucasLehmer_R_boolean,
	(void *) M_java_math_BigInteger_passesMillerRabin_int_java_util_Random_R_boolean,
	(void *) M_java_math_BigInteger_checkRange,
	(void *) M_java_math_BigInteger_add_java_math_BigInteger_R_java_math_BigInteger,
	(void *) M_java_math_BigInteger_add_long_R_java_math_BigInteger,
	(void *) M_java_math_BigInteger_subtract_java_math_BigInteger_R_java_math_BigInteger,
	(void *) M_java_math_BigInteger_multiply_java_math_BigInteger_R_java_math_BigInteger,
	(void *) M_java_math_BigInteger_multiply_java_math_BigInteger_boolean_R_java_math_BigInteger,
	(void *) M_java_math_BigInteger_multiply_long_R_java_math_BigInteger,
	(void *) M_java_math_BigInteger_getToomSlice_int_int_int_int_R_java_math_BigInteger,
	(void *) M_java_math_BigInteger_exactDivideBy3_R_java_math_BigInteger,
	(void *) M_java_math_BigInteger_getLower_int_R_java_math_BigInteger,
	(void *) M_java_math_BigInteger_getUpper_int_R_java_math_BigInteger,
	(void *) M_java_math_BigInteger_square_R_java_math_BigInteger,
	(void *) M_java_math_BigInteger_square_boolean_R_java_math_BigInteger,
	(void *) M_java_math_BigInteger_squareKaratsuba_R_java_math_BigInteger,
	(void *) M_java_math_BigInteger_squareToomCook3_R_java_math_BigInteger,
	(void *) M_java_math_BigInteger_divide_java_math_BigInteger_R_java_math_BigInteger,
	(void *) M_java_math_BigInteger_divideKnuth_java_math_BigInteger_R_java_math_BigInteger,
	(void *) M_java_math_BigInteger_divideAndRemainder_java_math_BigInteger_R_Array1_java_math_BigInteger,
	(void *) M_java_math_BigInteger_divideAndRemainderKnuth_java_math_BigInteger_R_Array1_java_math_BigInteger,
	(void *) M_java_math_BigInteger_remainder_java_math_BigInteger_R_java_math_BigInteger,
	(void *) M_java_math_BigInteger_remainderKnuth_java_math_BigInteger_R_java_math_BigInteger,
	(void *) M_java_math_BigInteger_divideBurnikelZiegler_java_math_BigInteger_R_java_math_BigInteger,
	(void *) M_java_math_BigInteger_remainderBurnikelZiegler_java_math_BigInteger_R_java_math_BigInteger,
	(void *) M_java_math_BigInteger_divideAndRemainderBurnikelZiegler_java_math_BigInteger_R_Array1_java_math_BigInteger,
	(void *) M_java_math_BigInteger_pow_int_R_java_math_BigInteger,
	(void *) M_java_math_BigInteger_gcd_java_math_BigInteger_R_java_math_BigInteger,
	(void *) M_java_math_BigInteger_abs_R_java_math_BigInteger,
	(void *) M_java_math_BigInteger_negate_R_java_math_BigInteger,
	(void *) M_java_math_BigInteger_signum_R_int,
	(void *) M_java_math_BigInteger_mod_java_math_BigInteger_R_java_math_BigInteger,
	(void *) M_java_math_BigInteger_modPow_java_math_BigInteger_java_math_BigInteger_R_java_math_BigInteger,
	(void *) M_java_math_BigInteger_oddModPow_java_math_BigInteger_java_math_BigInteger_R_java_math_BigInteger,
	(void *) M_java_math_BigInteger_modPow2_java_math_BigInteger_int_R_java_math_BigInteger,
	(void *) M_java_math_BigInteger_mod2_int_R_java_math_BigInteger,
	(void *) M_java_math_BigInteger_modInverse_java_math_BigInteger_R_java_math_BigInteger,
	(void *) M_java_math_BigInteger_shiftLeft_int_R_java_math_BigInteger,
	(void *) M_java_math_BigInteger_shiftRight_int_R_java_math_BigInteger,
	(void *) M_java_math_BigInteger_shiftRightImpl_int_R_java_math_BigInteger,
	(void *) M_java_math_BigInteger_javaIncrement_Array1_int_R_Array1_int,
	(void *) M_java_math_BigInteger_and_java_math_BigInteger_R_java_math_BigInteger,
	(void *) M_java_math_BigInteger_or_java_math_BigInteger_R_java_math_BigInteger,
	(void *) M_java_math_BigInteger_xor_java_math_BigInteger_R_java_math_BigInteger,
	(void *) M_java_math_BigInteger_not_R_java_math_BigInteger,
	(void *) M_java_math_BigInteger_andNot_java_math_BigInteger_R_java_math_BigInteger,
	(void *) M_java_math_BigInteger_testBit_int_R_boolean,
	(void *) M_java_math_BigInteger_setBit_int_R_java_math_BigInteger,
	(void *) M_java_math_BigInteger_clearBit_int_R_java_math_BigInteger,
	(void *) M_java_math_BigInteger_flipBit_int_R_java_math_BigInteger,
	(void *) M_java_math_BigInteger_getLowestSetBit_R_int,
	(void *) M_java_math_BigInteger_bitLength_R_int,
	(void *) M_java_math_BigInteger_bitCount_R_int,
	(void *) M_java_math_BigInteger_isProbablePrime_int_R_boolean,
	(void *) M_java_math_BigInteger_compareTo_java_math_BigInteger_R_int,
	(void *) M_java_math_BigInteger_compareMagnitude_java_math_BigInteger_R_int,
	(void *) M_java_math_BigInteger_compareMagnitude_long_R_int,
	(void *) M_java_math_BigInteger_min_java_math_BigInteger_R_java_math_BigInteger,
	(void *) M_java_math_BigInteger_max_java_math_BigInteger_R_java_math_BigInteger,
	(void *) M_java_math_BigInteger_toString_int_R_java_lang_String,
	(void *) M_java_math_BigInteger_smallToString_int_R_java_lang_String,
	(void *) M_java_math_BigInteger_toByteArray_R_Array1_byte,
	(void *) M_java_math_BigInteger_intLength_R_int,
	(void *) M_java_math_BigInteger_signBit_R_int,
	(void *) M_java_math_BigInteger_signInt_R_int,
	(void *) M_java_math_BigInteger_getInt_int_R_int,
	(void *) M_java_math_BigInteger_firstNonzeroIntNum_R_int,
	(void *) M_java_math_BigInteger_magSerializedForm_R_Array1_byte,
	(void *) M_java_math_BigInteger_longValueExact_R_long,
	(void *) M_java_math_BigInteger_intValueExact_R_int,
	(void *) M_java_math_BigInteger_shortValueExact_R_short,
	(void *) M_java_math_BigInteger_byteValueExact_R_byte,
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
	{ "intValue", "()I" },
	{ "byteValue", "()B" },
	{ "longValue", "()J" },
	{ "floatValue", "()F" },
	{ "doubleValue", "()D" },
	{ "shortValue", "()S" },
	{ "compareTo", "(Ljava/lang/Object;)I" },
	{ "parseInt", "([CII)I" },
	{ "nextProbablePrime", "()Ljava/math/BigInteger;" },
	{ "primeToCertainty", "(ILjava/util/Random;)Z" },
	{ "passesLucasLehmer", "()Z" },
	{ "passesMillerRabin", "(ILjava/util/Random;)Z" },
	{ "checkRange", "()V" },
	{ "add", "(Ljava/math/BigInteger;)Ljava/math/BigInteger;" },
	{ "add", "(J)Ljava/math/BigInteger;" },
	{ "subtract", "(Ljava/math/BigInteger;)Ljava/math/BigInteger;" },
	{ "multiply", "(Ljava/math/BigInteger;)Ljava/math/BigInteger;" },
	{ "multiply", "(Ljava/math/BigInteger;Z)Ljava/math/BigInteger;" },
	{ "multiply", "(J)Ljava/math/BigInteger;" },
	{ "getToomSlice", "(IIII)Ljava/math/BigInteger;" },
	{ "exactDivideBy3", "()Ljava/math/BigInteger;" },
	{ "getLower", "(I)Ljava/math/BigInteger;" },
	{ "getUpper", "(I)Ljava/math/BigInteger;" },
	{ "square", "()Ljava/math/BigInteger;" },
	{ "square", "(Z)Ljava/math/BigInteger;" },
	{ "squareKaratsuba", "()Ljava/math/BigInteger;" },
	{ "squareToomCook3", "()Ljava/math/BigInteger;" },
	{ "divide", "(Ljava/math/BigInteger;)Ljava/math/BigInteger;" },
	{ "divideKnuth", "(Ljava/math/BigInteger;)Ljava/math/BigInteger;" },
	{ "divideAndRemainder", "(Ljava/math/BigInteger;)[Ljava/math/BigInteger;" },
	{ "divideAndRemainderKnuth", "(Ljava/math/BigInteger;)[Ljava/math/BigInteger;" },
	{ "remainder", "(Ljava/math/BigInteger;)Ljava/math/BigInteger;" },
	{ "remainderKnuth", "(Ljava/math/BigInteger;)Ljava/math/BigInteger;" },
	{ "divideBurnikelZiegler", "(Ljava/math/BigInteger;)Ljava/math/BigInteger;" },
	{ "remainderBurnikelZiegler", "(Ljava/math/BigInteger;)Ljava/math/BigInteger;" },
	{ "divideAndRemainderBurnikelZiegler", "(Ljava/math/BigInteger;)[Ljava/math/BigInteger;" },
	{ "pow", "(I)Ljava/math/BigInteger;" },
	{ "gcd", "(Ljava/math/BigInteger;)Ljava/math/BigInteger;" },
	{ "abs", "()Ljava/math/BigInteger;" },
	{ "negate", "()Ljava/math/BigInteger;" },
	{ "signum", "()I" },
	{ "mod", "(Ljava/math/BigInteger;)Ljava/math/BigInteger;" },
	{ "modPow", "(Ljava/math/BigInteger;Ljava/math/BigInteger;)Ljava/math/BigInteger;" },
	{ "oddModPow", "(Ljava/math/BigInteger;Ljava/math/BigInteger;)Ljava/math/BigInteger;" },
	{ "modPow2", "(Ljava/math/BigInteger;I)Ljava/math/BigInteger;" },
	{ "mod2", "(I)Ljava/math/BigInteger;" },
	{ "modInverse", "(Ljava/math/BigInteger;)Ljava/math/BigInteger;" },
	{ "shiftLeft", "(I)Ljava/math/BigInteger;" },
	{ "shiftRight", "(I)Ljava/math/BigInteger;" },
	{ "shiftRightImpl", "(I)Ljava/math/BigInteger;" },
	{ "javaIncrement", "([I)[I" },
	{ "and", "(Ljava/math/BigInteger;)Ljava/math/BigInteger;" },
	{ "or", "(Ljava/math/BigInteger;)Ljava/math/BigInteger;" },
	{ "xor", "(Ljava/math/BigInteger;)Ljava/math/BigInteger;" },
	{ "not", "()Ljava/math/BigInteger;" },
	{ "andNot", "(Ljava/math/BigInteger;)Ljava/math/BigInteger;" },
	{ "testBit", "(I)Z" },
	{ "setBit", "(I)Ljava/math/BigInteger;" },
	{ "clearBit", "(I)Ljava/math/BigInteger;" },
	{ "flipBit", "(I)Ljava/math/BigInteger;" },
	{ "getLowestSetBit", "()I" },
	{ "bitLength", "()I" },
	{ "bitCount", "()I" },
	{ "isProbablePrime", "(I)Z" },
	{ "compareTo", "(Ljava/math/BigInteger;)I" },
	{ "compareMagnitude", "(Ljava/math/BigInteger;)I" },
	{ "compareMagnitude", "(J)I" },
	{ "min", "(Ljava/math/BigInteger;)Ljava/math/BigInteger;" },
	{ "max", "(Ljava/math/BigInteger;)Ljava/math/BigInteger;" },
	{ "toString", "(I)Ljava/lang/String;" },
	{ "smallToString", "(I)Ljava/lang/String;" },
	{ "toByteArray", "()[B" },
	{ "intLength", "()I" },
	{ "signBit", "()I" },
	{ "signInt", "()I" },
	{ "getInt", "(I)I" },
	{ "firstNonzeroIntNum", "()I" },
	{ "magSerializedForm", "()[B" },
	{ "longValueExact", "()J" },
	{ "intValueExact", "()I" },
	{ "shortValueExact", "()S" },
	{ "byteValueExact", "()B" },
};

static jclass interfaces[] { &class_java_lang_Comparable, };

static FieldMetadata fields[] {
	{ "signum", &class_int, offsetof(java_math_BigInteger, F_signum), "I", 0 },
	{ "mag", getArrayClass(&class_int, 1), offsetof(java_math_BigInteger, F_mag), "[I", 0 },
	{ "bitCount", &class_int, offsetof(java_math_BigInteger, F_bitCount), "I", 131074 },
	{ "bitLength", &class_int, offsetof(java_math_BigInteger, F_bitLength), "I", 131074 },
	{ "lowestSetBit", &class_int, offsetof(java_math_BigInteger, F_lowestSetBit), "I", 131074 },
	{ "firstNonzeroIntNum", &class_int, offsetof(java_math_BigInteger, F_firstNonzeroIntNum), "I", 131074 },
	{ "LONG_MASK", &class_long, (intptr_t) &SF_java_math_BigInteger_LONG_MASK, "J", 24 },
	{ "MAX_MAG_LENGTH", &class_int, (intptr_t) &SF_java_math_BigInteger_MAX_MAG_LENGTH, "I", 26 },
	{ "PRIME_SEARCH_BIT_LENGTH_LIMIT", &class_int, (intptr_t) &SF_java_math_BigInteger_PRIME_SEARCH_BIT_LENGTH_LIMIT, "I", 26 },
	{ "KARATSUBA_THRESHOLD", &class_int, (intptr_t) &SF_java_math_BigInteger_KARATSUBA_THRESHOLD, "I", 26 },
	{ "TOOM_COOK_THRESHOLD", &class_int, (intptr_t) &SF_java_math_BigInteger_TOOM_COOK_THRESHOLD, "I", 26 },
	{ "KARATSUBA_SQUARE_THRESHOLD", &class_int, (intptr_t) &SF_java_math_BigInteger_KARATSUBA_SQUARE_THRESHOLD, "I", 26 },
	{ "TOOM_COOK_SQUARE_THRESHOLD", &class_int, (intptr_t) &SF_java_math_BigInteger_TOOM_COOK_SQUARE_THRESHOLD, "I", 26 },
	{ "BURNIKEL_ZIEGLER_THRESHOLD", &class_int, (intptr_t) &SF_java_math_BigInteger_BURNIKEL_ZIEGLER_THRESHOLD, "I", 24 },
	{ "BURNIKEL_ZIEGLER_OFFSET", &class_int, (intptr_t) &SF_java_math_BigInteger_BURNIKEL_ZIEGLER_OFFSET, "I", 24 },
	{ "SCHOENHAGE_BASE_CONVERSION_THRESHOLD", &class_int, (intptr_t) &SF_java_math_BigInteger_SCHOENHAGE_BASE_CONVERSION_THRESHOLD, "I", 26 },
	{ "MULTIPLY_SQUARE_THRESHOLD", &class_int, (intptr_t) &SF_java_math_BigInteger_MULTIPLY_SQUARE_THRESHOLD, "I", 26 },
	{ "MONTGOMERY_INTRINSIC_THRESHOLD", &class_int, (intptr_t) &SF_java_math_BigInteger_MONTGOMERY_INTRINSIC_THRESHOLD, "I", 26 },
	{ "bitsPerDigit", getArrayClass(&class_long, 1), (intptr_t) &SF_java_math_BigInteger_bitsPerDigit, "[J", 10 },
	{ "SMALL_PRIME_THRESHOLD", &class_int, (intptr_t) &SF_java_math_BigInteger_SMALL_PRIME_THRESHOLD, "I", 26 },
	{ "DEFAULT_PRIME_CERTAINTY", &class_int, (intptr_t) &SF_java_math_BigInteger_DEFAULT_PRIME_CERTAINTY, "I", 26 },
	{ "SMALL_PRIME_PRODUCT", &class_java_math_BigInteger, (intptr_t) &SF_java_math_BigInteger_SMALL_PRIME_PRODUCT, "Ljava/math/BigInteger;", 26 },
	{ "MAX_CONSTANT", &class_int, (intptr_t) &SF_java_math_BigInteger_MAX_CONSTANT, "I", 26 },
	{ "posConst", getArrayClass(&class_java_math_BigInteger, 1), (intptr_t) &SF_java_math_BigInteger_posConst, "[Ljava/math/BigInteger;", 10 },
	{ "negConst", getArrayClass(&class_java_math_BigInteger, 1), (intptr_t) &SF_java_math_BigInteger_negConst, "[Ljava/math/BigInteger;", 10 },
	{ "powerCache", getArrayClass(&class_java_math_BigInteger, 2), (intptr_t) &SF_java_math_BigInteger_powerCache, "[[Ljava/math/BigInteger;", 74 },
	{ "logCache", getArrayClass(&class_double, 1), (intptr_t) &SF_java_math_BigInteger_logCache, "[D", 26 },
	{ "LOG_TWO", &class_double, (intptr_t) &SF_java_math_BigInteger_LOG_TWO, "D", 26 },
	{ "ZERO", &class_java_math_BigInteger, (intptr_t) &SF_java_math_BigInteger_ZERO, "Ljava/math/BigInteger;", 25 },
	{ "ONE", &class_java_math_BigInteger, (intptr_t) &SF_java_math_BigInteger_ONE, "Ljava/math/BigInteger;", 25 },
	{ "TWO", &class_java_math_BigInteger, (intptr_t) &SF_java_math_BigInteger_TWO, "Ljava/math/BigInteger;", 26 },
	{ "NEGATIVE_ONE", &class_java_math_BigInteger, (intptr_t) &SF_java_math_BigInteger_NEGATIVE_ONE, "Ljava/math/BigInteger;", 26 },
	{ "TEN", &class_java_math_BigInteger, (intptr_t) &SF_java_math_BigInteger_TEN, "Ljava/math/BigInteger;", 25 },
	{ "bnExpModThreshTable", getArrayClass(&class_int, 1), (intptr_t) &SF_java_math_BigInteger_bnExpModThreshTable, "[I", 8 },
	{ "zeros", getArrayClass(&class_java_lang_String, 1), (intptr_t) &SF_java_math_BigInteger_zeros, "[Ljava/lang/String;", 10 },
	{ "digitsPerLong", getArrayClass(&class_int, 1), (intptr_t) &SF_java_math_BigInteger_digitsPerLong, "[I", 10 },
	{ "longRadix", getArrayClass(&class_java_math_BigInteger, 1), (intptr_t) &SF_java_math_BigInteger_longRadix, "[Ljava/math/BigInteger;", 10 },
	{ "digitsPerInt", getArrayClass(&class_int, 1), (intptr_t) &SF_java_math_BigInteger_digitsPerInt, "[I", 10 },
	{ "intRadix", getArrayClass(&class_int, 1), (intptr_t) &SF_java_math_BigInteger_intRadix, "[I", 10 },
	{ "serialVersionUID", &class_long, (intptr_t) &SF_java_math_BigInteger_serialVersionUID, "J", 26 },
	{ "$assertionsDisabled", &class_boolean, (intptr_t) &SF_java_math_BigInteger_$assertionsDisabled, "Z", 4120 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_java_math_BigInteger_Array1_byte, 0, "([B)V", 1 },
	{ "<init>", (intptr_t) init_java_math_BigInteger_Array1_int, 0, "([I)V", 2 },
	{ "<init>", (intptr_t) init_java_math_BigInteger_int_Array1_byte, 0, "(I[B)V", 1 },
	{ "<init>", (intptr_t) init_java_math_BigInteger_int_Array1_int, 0, "(I[I)V", 2 },
	{ "<init>", (intptr_t) init_java_math_BigInteger_java_lang_String_int, 0, "(Ljava/lang/String;I)V", 1 },
	{ "<init>", (intptr_t) init_java_math_BigInteger_Array1_char_int_int, 0, "([CII)V", 0 },
	{ "parseInt", (intptr_t) M_java_math_BigInteger_parseInt_Array1_char_int_int_R_int, VTABLE_java_math_BigInteger_parseInt_Array1_char_int_int_R_int, "([CII)I", 2 },
	{ "destructiveMulAdd", (intptr_t) SM_java_math_BigInteger_destructiveMulAdd_Array1_int_int_int, 0, "([III)V", 10 },
	{ "<init>", (intptr_t) init_java_math_BigInteger_java_lang_String, 0, "(Ljava/lang/String;)V", 1 },
	{ "<init>", (intptr_t) init_java_math_BigInteger_int_java_util_Random, 0, "(ILjava/util/Random;)V", 1 },
	{ "randomBits", (intptr_t) SM_java_math_BigInteger_randomBits_int_java_util_Random_R_Array1_byte, 0, "(ILjava/util/Random;)[B", 10 },
	{ "<init>", (intptr_t) init_java_math_BigInteger_int_int_java_util_Random, 0, "(IILjava/util/Random;)V", 1 },
	{ "probablePrime", (intptr_t) SM_java_math_BigInteger_probablePrime_int_java_util_Random_R_java_math_BigInteger, 0, "(ILjava/util/Random;)Ljava/math/BigInteger;", 9 },
	{ "smallPrime", (intptr_t) SM_java_math_BigInteger_smallPrime_int_int_java_util_Random_R_java_math_BigInteger, 0, "(IILjava/util/Random;)Ljava/math/BigInteger;", 10 },
	{ "largePrime", (intptr_t) SM_java_math_BigInteger_largePrime_int_int_java_util_Random_R_java_math_BigInteger, 0, "(IILjava/util/Random;)Ljava/math/BigInteger;", 10 },
	{ "nextProbablePrime", (intptr_t) M_java_math_BigInteger_nextProbablePrime_R_java_math_BigInteger, VTABLE_java_math_BigInteger_nextProbablePrime_R_java_math_BigInteger, "()Ljava/math/BigInteger;", 1 },
	{ "getPrimeSearchLen", (intptr_t) SM_java_math_BigInteger_getPrimeSearchLen_int_R_int, 0, "(I)I", 10 },
	{ "primeToCertainty", (intptr_t) M_java_math_BigInteger_primeToCertainty_int_java_util_Random_R_boolean, VTABLE_java_math_BigInteger_primeToCertainty_int_java_util_Random_R_boolean, "(ILjava/util/Random;)Z", 0 },
	{ "passesLucasLehmer", (intptr_t) M_java_math_BigInteger_passesLucasLehmer_R_boolean, VTABLE_java_math_BigInteger_passesLucasLehmer_R_boolean, "()Z", 2 },
	{ "jacobiSymbol", (intptr_t) SM_java_math_BigInteger_jacobiSymbol_int_java_math_BigInteger_R_int, 0, "(ILjava/math/BigInteger;)I", 10 },
	{ "lucasLehmerSequence", (intptr_t) SM_java_math_BigInteger_lucasLehmerSequence_int_java_math_BigInteger_java_math_BigInteger_R_java_math_BigInteger, 0, "(ILjava/math/BigInteger;Ljava/math/BigInteger;)Ljava/math/BigInteger;", 10 },
	{ "passesMillerRabin", (intptr_t) M_java_math_BigInteger_passesMillerRabin_int_java_util_Random_R_boolean, VTABLE_java_math_BigInteger_passesMillerRabin_int_java_util_Random_R_boolean, "(ILjava/util/Random;)Z", 2 },
	{ "<init>", (intptr_t) init_java_math_BigInteger_Array1_int_int, 0, "([II)V", 0 },
	{ "<init>", (intptr_t) init_java_math_BigInteger_Array1_byte_int, 0, "([BI)V", 2 },
	{ "checkRange", (intptr_t) M_java_math_BigInteger_checkRange, VTABLE_java_math_BigInteger_checkRange, "()V", 2 },
	{ "reportOverflow", (intptr_t) SM_java_math_BigInteger_reportOverflow, 0, "()V", 10 },
	{ "valueOf", (intptr_t) SM_java_math_BigInteger_valueOf_long_R_java_math_BigInteger, 0, "(J)Ljava/math/BigInteger;", 9 },
	{ "<init>", (intptr_t) init_java_math_BigInteger_long, 0, "(J)V", 2 },
	{ "valueOf", (intptr_t) SM_java_math_BigInteger_valueOf_Array1_int_R_java_math_BigInteger, 0, "([I)Ljava/math/BigInteger;", 10 },
	{ "add", (intptr_t) M_java_math_BigInteger_add_java_math_BigInteger_R_java_math_BigInteger, VTABLE_java_math_BigInteger_add_java_math_BigInteger_R_java_math_BigInteger, "(Ljava/math/BigInteger;)Ljava/math/BigInteger;", 1 },
	{ "add", (intptr_t) M_java_math_BigInteger_add_long_R_java_math_BigInteger, VTABLE_java_math_BigInteger_add_long_R_java_math_BigInteger, "(J)Ljava/math/BigInteger;", 0 },
	{ "add", (intptr_t) SM_java_math_BigInteger_add_Array1_int_long_R_Array1_int, 0, "([IJ)[I", 10 },
	{ "add", (intptr_t) SM_java_math_BigInteger_add_Array1_int_Array1_int_R_Array1_int, 0, "([I[I)[I", 10 },
	{ "subtract", (intptr_t) SM_java_math_BigInteger_subtract_long_Array1_int_R_Array1_int, 0, "(J[I)[I", 10 },
	{ "subtract", (intptr_t) SM_java_math_BigInteger_subtract_Array1_int_long_R_Array1_int, 0, "([IJ)[I", 10 },
	{ "subtract", (intptr_t) M_java_math_BigInteger_subtract_java_math_BigInteger_R_java_math_BigInteger, VTABLE_java_math_BigInteger_subtract_java_math_BigInteger_R_java_math_BigInteger, "(Ljava/math/BigInteger;)Ljava/math/BigInteger;", 1 },
	{ "subtract", (intptr_t) SM_java_math_BigInteger_subtract_Array1_int_Array1_int_R_Array1_int, 0, "([I[I)[I", 10 },
	{ "multiply", (intptr_t) M_java_math_BigInteger_multiply_java_math_BigInteger_R_java_math_BigInteger, VTABLE_java_math_BigInteger_multiply_java_math_BigInteger_R_java_math_BigInteger, "(Ljava/math/BigInteger;)Ljava/math/BigInteger;", 1 },
	{ "multiply", (intptr_t) M_java_math_BigInteger_multiply_java_math_BigInteger_boolean_R_java_math_BigInteger, VTABLE_java_math_BigInteger_multiply_java_math_BigInteger_boolean_R_java_math_BigInteger, "(Ljava/math/BigInteger;Z)Ljava/math/BigInteger;", 2 },
	{ "multiplyByInt", (intptr_t) SM_java_math_BigInteger_multiplyByInt_Array1_int_int_int_R_java_math_BigInteger, 0, "([III)Ljava/math/BigInteger;", 10 },
	{ "multiply", (intptr_t) M_java_math_BigInteger_multiply_long_R_java_math_BigInteger, VTABLE_java_math_BigInteger_multiply_long_R_java_math_BigInteger, "(J)Ljava/math/BigInteger;", 0 },
	{ "multiplyToLen", (intptr_t) SM_java_math_BigInteger_multiplyToLen_Array1_int_int_Array1_int_int_Array1_int_R_Array1_int, 0, "([II[II[I)[I", 10 },
	{ "multiplyKaratsuba", (intptr_t) SM_java_math_BigInteger_multiplyKaratsuba_java_math_BigInteger_java_math_BigInteger_R_java_math_BigInteger, 0, "(Ljava/math/BigInteger;Ljava/math/BigInteger;)Ljava/math/BigInteger;", 10 },
	{ "multiplyToomCook3", (intptr_t) SM_java_math_BigInteger_multiplyToomCook3_java_math_BigInteger_java_math_BigInteger_R_java_math_BigInteger, 0, "(Ljava/math/BigInteger;Ljava/math/BigInteger;)Ljava/math/BigInteger;", 10 },
	{ "getToomSlice", (intptr_t) M_java_math_BigInteger_getToomSlice_int_int_int_int_R_java_math_BigInteger, VTABLE_java_math_BigInteger_getToomSlice_int_int_int_int_R_java_math_BigInteger, "(IIII)Ljava/math/BigInteger;", 2 },
	{ "exactDivideBy3", (intptr_t) M_java_math_BigInteger_exactDivideBy3_R_java_math_BigInteger, VTABLE_java_math_BigInteger_exactDivideBy3_R_java_math_BigInteger, "()Ljava/math/BigInteger;", 2 },
	{ "getLower", (intptr_t) M_java_math_BigInteger_getLower_int_R_java_math_BigInteger, VTABLE_java_math_BigInteger_getLower_int_R_java_math_BigInteger, "(I)Ljava/math/BigInteger;", 2 },
	{ "getUpper", (intptr_t) M_java_math_BigInteger_getUpper_int_R_java_math_BigInteger, VTABLE_java_math_BigInteger_getUpper_int_R_java_math_BigInteger, "(I)Ljava/math/BigInteger;", 2 },
	{ "square", (intptr_t) M_java_math_BigInteger_square_R_java_math_BigInteger, VTABLE_java_math_BigInteger_square_R_java_math_BigInteger, "()Ljava/math/BigInteger;", 2 },
	{ "square", (intptr_t) M_java_math_BigInteger_square_boolean_R_java_math_BigInteger, VTABLE_java_math_BigInteger_square_boolean_R_java_math_BigInteger, "(Z)Ljava/math/BigInteger;", 2 },
	{ "squareToLen", (intptr_t) SM_java_math_BigInteger_squareToLen_Array1_int_int_Array1_int_R_Array1_int, 0, "([II[I)[I", 26 },
	{ "implSquareToLenChecks", (intptr_t) SM_java_math_BigInteger_implSquareToLenChecks_Array1_int_int_Array1_int_int, 0, "([II[II)V", 10 },
	{ "implSquareToLen", (intptr_t) SM_java_math_BigInteger_implSquareToLen_Array1_int_int_Array1_int_int_R_Array1_int, 0, "([II[II)[I", 26 },
	{ "squareKaratsuba", (intptr_t) M_java_math_BigInteger_squareKaratsuba_R_java_math_BigInteger, VTABLE_java_math_BigInteger_squareKaratsuba_R_java_math_BigInteger, "()Ljava/math/BigInteger;", 2 },
	{ "squareToomCook3", (intptr_t) M_java_math_BigInteger_squareToomCook3_R_java_math_BigInteger, VTABLE_java_math_BigInteger_squareToomCook3_R_java_math_BigInteger, "()Ljava/math/BigInteger;", 2 },
	{ "divide", (intptr_t) M_java_math_BigInteger_divide_java_math_BigInteger_R_java_math_BigInteger, VTABLE_java_math_BigInteger_divide_java_math_BigInteger_R_java_math_BigInteger, "(Ljava/math/BigInteger;)Ljava/math/BigInteger;", 1 },
	{ "divideKnuth", (intptr_t) M_java_math_BigInteger_divideKnuth_java_math_BigInteger_R_java_math_BigInteger, VTABLE_java_math_BigInteger_divideKnuth_java_math_BigInteger_R_java_math_BigInteger, "(Ljava/math/BigInteger;)Ljava/math/BigInteger;", 2 },
	{ "divideAndRemainder", (intptr_t) M_java_math_BigInteger_divideAndRemainder_java_math_BigInteger_R_Array1_java_math_BigInteger, VTABLE_java_math_BigInteger_divideAndRemainder_java_math_BigInteger_R_Array1_java_math_BigInteger, "(Ljava/math/BigInteger;)[Ljava/math/BigInteger;", 1 },
	{ "divideAndRemainderKnuth", (intptr_t) M_java_math_BigInteger_divideAndRemainderKnuth_java_math_BigInteger_R_Array1_java_math_BigInteger, VTABLE_java_math_BigInteger_divideAndRemainderKnuth_java_math_BigInteger_R_Array1_java_math_BigInteger, "(Ljava/math/BigInteger;)[Ljava/math/BigInteger;", 2 },
	{ "remainder", (intptr_t) M_java_math_BigInteger_remainder_java_math_BigInteger_R_java_math_BigInteger, VTABLE_java_math_BigInteger_remainder_java_math_BigInteger_R_java_math_BigInteger, "(Ljava/math/BigInteger;)Ljava/math/BigInteger;", 1 },
	{ "remainderKnuth", (intptr_t) M_java_math_BigInteger_remainderKnuth_java_math_BigInteger_R_java_math_BigInteger, VTABLE_java_math_BigInteger_remainderKnuth_java_math_BigInteger_R_java_math_BigInteger, "(Ljava/math/BigInteger;)Ljava/math/BigInteger;", 2 },
	{ "divideBurnikelZiegler", (intptr_t) M_java_math_BigInteger_divideBurnikelZiegler_java_math_BigInteger_R_java_math_BigInteger, VTABLE_java_math_BigInteger_divideBurnikelZiegler_java_math_BigInteger_R_java_math_BigInteger, "(Ljava/math/BigInteger;)Ljava/math/BigInteger;", 2 },
	{ "remainderBurnikelZiegler", (intptr_t) M_java_math_BigInteger_remainderBurnikelZiegler_java_math_BigInteger_R_java_math_BigInteger, VTABLE_java_math_BigInteger_remainderBurnikelZiegler_java_math_BigInteger_R_java_math_BigInteger, "(Ljava/math/BigInteger;)Ljava/math/BigInteger;", 2 },
	{ "divideAndRemainderBurnikelZiegler", (intptr_t) M_java_math_BigInteger_divideAndRemainderBurnikelZiegler_java_math_BigInteger_R_Array1_java_math_BigInteger, VTABLE_java_math_BigInteger_divideAndRemainderBurnikelZiegler_java_math_BigInteger_R_Array1_java_math_BigInteger, "(Ljava/math/BigInteger;)[Ljava/math/BigInteger;", 2 },
	{ "pow", (intptr_t) M_java_math_BigInteger_pow_int_R_java_math_BigInteger, VTABLE_java_math_BigInteger_pow_int_R_java_math_BigInteger, "(I)Ljava/math/BigInteger;", 1 },
	{ "gcd", (intptr_t) M_java_math_BigInteger_gcd_java_math_BigInteger_R_java_math_BigInteger, VTABLE_java_math_BigInteger_gcd_java_math_BigInteger_R_java_math_BigInteger, "(Ljava/math/BigInteger;)Ljava/math/BigInteger;", 1 },
	{ "bitLengthForInt", (intptr_t) SM_java_math_BigInteger_bitLengthForInt_int_R_int, 0, "(I)I", 8 },
	{ "leftShift", (intptr_t) SM_java_math_BigInteger_leftShift_Array1_int_int_int_R_Array1_int, 0, "([III)[I", 10 },
	{ "primitiveRightShift", (intptr_t) SM_java_math_BigInteger_primitiveRightShift_Array1_int_int_int, 0, "([III)V", 8 },
	{ "primitiveLeftShift", (intptr_t) SM_java_math_BigInteger_primitiveLeftShift_Array1_int_int_int, 0, "([III)V", 8 },
	{ "bitLength", (intptr_t) SM_java_math_BigInteger_bitLength_Array1_int_int_R_int, 0, "([II)I", 10 },
	{ "abs", (intptr_t) M_java_math_BigInteger_abs_R_java_math_BigInteger, VTABLE_java_math_BigInteger_abs_R_java_math_BigInteger, "()Ljava/math/BigInteger;", 1 },
	{ "negate", (intptr_t) M_java_math_BigInteger_negate_R_java_math_BigInteger, VTABLE_java_math_BigInteger_negate_R_java_math_BigInteger, "()Ljava/math/BigInteger;", 1 },
	{ "signum", (intptr_t) M_java_math_BigInteger_signum_R_int, VTABLE_java_math_BigInteger_signum_R_int, "()I", 1 },
	{ "mod", (intptr_t) M_java_math_BigInteger_mod_java_math_BigInteger_R_java_math_BigInteger, VTABLE_java_math_BigInteger_mod_java_math_BigInteger_R_java_math_BigInteger, "(Ljava/math/BigInteger;)Ljava/math/BigInteger;", 1 },
	{ "modPow", (intptr_t) M_java_math_BigInteger_modPow_java_math_BigInteger_java_math_BigInteger_R_java_math_BigInteger, VTABLE_java_math_BigInteger_modPow_java_math_BigInteger_java_math_BigInteger_R_java_math_BigInteger, "(Ljava/math/BigInteger;Ljava/math/BigInteger;)Ljava/math/BigInteger;", 1 },
	{ "montgomeryMultiply", (intptr_t) SM_java_math_BigInteger_montgomeryMultiply_Array1_int_Array1_int_Array1_int_int_long_Array1_int_R_Array1_int, 0, "([I[I[IIJ[I)[I", 10 },
	{ "montgomerySquare", (intptr_t) SM_java_math_BigInteger_montgomerySquare_Array1_int_Array1_int_int_long_Array1_int_R_Array1_int, 0, "([I[IIJ[I)[I", 10 },
	{ "implMontgomeryMultiplyChecks", (intptr_t) SM_java_math_BigInteger_implMontgomeryMultiplyChecks_Array1_int_Array1_int_Array1_int_int_Array1_int, 0, "([I[I[II[I)V", 10 },
	{ "materialize", (intptr_t) SM_java_math_BigInteger_materialize_Array1_int_int_R_Array1_int, 0, "([II)[I", 10 },
	{ "implMontgomeryMultiply", (intptr_t) SM_java_math_BigInteger_implMontgomeryMultiply_Array1_int_Array1_int_Array1_int_int_long_Array1_int_R_Array1_int, 0, "([I[I[IIJ[I)[I", 10 },
	{ "implMontgomerySquare", (intptr_t) SM_java_math_BigInteger_implMontgomerySquare_Array1_int_Array1_int_int_long_Array1_int_R_Array1_int, 0, "([I[IIJ[I)[I", 10 },
	{ "oddModPow", (intptr_t) M_java_math_BigInteger_oddModPow_java_math_BigInteger_java_math_BigInteger_R_java_math_BigInteger, VTABLE_java_math_BigInteger_oddModPow_java_math_BigInteger_java_math_BigInteger_R_java_math_BigInteger, "(Ljava/math/BigInteger;Ljava/math/BigInteger;)Ljava/math/BigInteger;", 2 },
	{ "montReduce", (intptr_t) SM_java_math_BigInteger_montReduce_Array1_int_Array1_int_int_int_R_Array1_int, 0, "([I[III)[I", 10 },
	{ "intArrayCmpToLen", (intptr_t) SM_java_math_BigInteger_intArrayCmpToLen_Array1_int_Array1_int_int_R_int, 0, "([I[II)I", 10 },
	{ "subN", (intptr_t) SM_java_math_BigInteger_subN_Array1_int_Array1_int_int_R_int, 0, "([I[II)I", 10 },
	{ "mulAdd", (intptr_t) SM_java_math_BigInteger_mulAdd_Array1_int_Array1_int_int_int_int_R_int, 0, "([I[IIII)I", 8 },
	{ "implMulAddCheck", (intptr_t) SM_java_math_BigInteger_implMulAddCheck_Array1_int_Array1_int_int_int_int, 0, "([I[IIII)V", 10 },
	{ "implMulAdd", (intptr_t) SM_java_math_BigInteger_implMulAdd_Array1_int_Array1_int_int_int_int_R_int, 0, "([I[IIII)I", 10 },
	{ "addOne", (intptr_t) SM_java_math_BigInteger_addOne_Array1_int_int_int_int_R_int, 0, "([IIII)I", 8 },
	{ "modPow2", (intptr_t) M_java_math_BigInteger_modPow2_java_math_BigInteger_int_R_java_math_BigInteger, VTABLE_java_math_BigInteger_modPow2_java_math_BigInteger_int_R_java_math_BigInteger, "(Ljava/math/BigInteger;I)Ljava/math/BigInteger;", 2 },
	{ "mod2", (intptr_t) M_java_math_BigInteger_mod2_int_R_java_math_BigInteger, VTABLE_java_math_BigInteger_mod2_int_R_java_math_BigInteger, "(I)Ljava/math/BigInteger;", 2 },
	{ "modInverse", (intptr_t) M_java_math_BigInteger_modInverse_java_math_BigInteger_R_java_math_BigInteger, VTABLE_java_math_BigInteger_modInverse_java_math_BigInteger_R_java_math_BigInteger, "(Ljava/math/BigInteger;)Ljava/math/BigInteger;", 1 },
	{ "shiftLeft", (intptr_t) M_java_math_BigInteger_shiftLeft_int_R_java_math_BigInteger, VTABLE_java_math_BigInteger_shiftLeft_int_R_java_math_BigInteger, "(I)Ljava/math/BigInteger;", 1 },
	{ "shiftLeft", (intptr_t) SM_java_math_BigInteger_shiftLeft_Array1_int_int_R_Array1_int, 0, "([II)[I", 10 },
	{ "shiftRight", (intptr_t) M_java_math_BigInteger_shiftRight_int_R_java_math_BigInteger, VTABLE_java_math_BigInteger_shiftRight_int_R_java_math_BigInteger, "(I)Ljava/math/BigInteger;", 1 },
	{ "shiftRightImpl", (intptr_t) M_java_math_BigInteger_shiftRightImpl_int_R_java_math_BigInteger, VTABLE_java_math_BigInteger_shiftRightImpl_int_R_java_math_BigInteger, "(I)Ljava/math/BigInteger;", 2 },
	{ "javaIncrement", (intptr_t) M_java_math_BigInteger_javaIncrement_Array1_int_R_Array1_int, VTABLE_java_math_BigInteger_javaIncrement_Array1_int_R_Array1_int, "([I)[I", 0 },
	{ "and", (intptr_t) M_java_math_BigInteger_and_java_math_BigInteger_R_java_math_BigInteger, VTABLE_java_math_BigInteger_and_java_math_BigInteger_R_java_math_BigInteger, "(Ljava/math/BigInteger;)Ljava/math/BigInteger;", 1 },
	{ "or", (intptr_t) M_java_math_BigInteger_or_java_math_BigInteger_R_java_math_BigInteger, VTABLE_java_math_BigInteger_or_java_math_BigInteger_R_java_math_BigInteger, "(Ljava/math/BigInteger;)Ljava/math/BigInteger;", 1 },
	{ "xor", (intptr_t) M_java_math_BigInteger_xor_java_math_BigInteger_R_java_math_BigInteger, VTABLE_java_math_BigInteger_xor_java_math_BigInteger_R_java_math_BigInteger, "(Ljava/math/BigInteger;)Ljava/math/BigInteger;", 1 },
	{ "not", (intptr_t) M_java_math_BigInteger_not_R_java_math_BigInteger, VTABLE_java_math_BigInteger_not_R_java_math_BigInteger, "()Ljava/math/BigInteger;", 1 },
	{ "andNot", (intptr_t) M_java_math_BigInteger_andNot_java_math_BigInteger_R_java_math_BigInteger, VTABLE_java_math_BigInteger_andNot_java_math_BigInteger_R_java_math_BigInteger, "(Ljava/math/BigInteger;)Ljava/math/BigInteger;", 1 },
	{ "testBit", (intptr_t) M_java_math_BigInteger_testBit_int_R_boolean, VTABLE_java_math_BigInteger_testBit_int_R_boolean, "(I)Z", 1 },
	{ "setBit", (intptr_t) M_java_math_BigInteger_setBit_int_R_java_math_BigInteger, VTABLE_java_math_BigInteger_setBit_int_R_java_math_BigInteger, "(I)Ljava/math/BigInteger;", 1 },
	{ "clearBit", (intptr_t) M_java_math_BigInteger_clearBit_int_R_java_math_BigInteger, VTABLE_java_math_BigInteger_clearBit_int_R_java_math_BigInteger, "(I)Ljava/math/BigInteger;", 1 },
	{ "flipBit", (intptr_t) M_java_math_BigInteger_flipBit_int_R_java_math_BigInteger, VTABLE_java_math_BigInteger_flipBit_int_R_java_math_BigInteger, "(I)Ljava/math/BigInteger;", 1 },
	{ "getLowestSetBit", (intptr_t) M_java_math_BigInteger_getLowestSetBit_R_int, VTABLE_java_math_BigInteger_getLowestSetBit_R_int, "()I", 1 },
	{ "bitLength", (intptr_t) M_java_math_BigInteger_bitLength_R_int, VTABLE_java_math_BigInteger_bitLength_R_int, "()I", 1 },
	{ "bitCount", (intptr_t) M_java_math_BigInteger_bitCount_R_int, VTABLE_java_math_BigInteger_bitCount_R_int, "()I", 1 },
	{ "isProbablePrime", (intptr_t) M_java_math_BigInteger_isProbablePrime_int_R_boolean, VTABLE_java_math_BigInteger_isProbablePrime_int_R_boolean, "(I)Z", 1 },
	{ "compareTo", (intptr_t) M_java_math_BigInteger_compareTo_java_math_BigInteger_R_int, VTABLE_java_math_BigInteger_compareTo_java_math_BigInteger_R_int, "(Ljava/math/BigInteger;)I", 1 },
	{ "compareMagnitude", (intptr_t) M_java_math_BigInteger_compareMagnitude_java_math_BigInteger_R_int, VTABLE_java_math_BigInteger_compareMagnitude_java_math_BigInteger_R_int, "(Ljava/math/BigInteger;)I", 16 },
	{ "compareMagnitude", (intptr_t) M_java_math_BigInteger_compareMagnitude_long_R_int, VTABLE_java_math_BigInteger_compareMagnitude_long_R_int, "(J)I", 16 },
	{ "equals", (intptr_t) M_java_math_BigInteger_equals_java_lang_Object_R_boolean, VTABLE_java_math_BigInteger_equals_java_lang_Object_R_boolean, "(Ljava/lang/Object;)Z", 1 },
	{ "min", (intptr_t) M_java_math_BigInteger_min_java_math_BigInteger_R_java_math_BigInteger, VTABLE_java_math_BigInteger_min_java_math_BigInteger_R_java_math_BigInteger, "(Ljava/math/BigInteger;)Ljava/math/BigInteger;", 1 },
	{ "max", (intptr_t) M_java_math_BigInteger_max_java_math_BigInteger_R_java_math_BigInteger, VTABLE_java_math_BigInteger_max_java_math_BigInteger_R_java_math_BigInteger, "(Ljava/math/BigInteger;)Ljava/math/BigInteger;", 1 },
	{ "hashCode", (intptr_t) M_java_math_BigInteger_hashCode_R_int, VTABLE_java_math_BigInteger_hashCode_R_int, "()I", 1 },
	{ "toString", (intptr_t) M_java_math_BigInteger_toString_int_R_java_lang_String, VTABLE_java_math_BigInteger_toString_int_R_java_lang_String, "(I)Ljava/lang/String;", 1 },
	{ "smallToString", (intptr_t) M_java_math_BigInteger_smallToString_int_R_java_lang_String, VTABLE_java_math_BigInteger_smallToString_int_R_java_lang_String, "(I)Ljava/lang/String;", 2 },
	{ "toString", (intptr_t) SM_java_math_BigInteger_toString_java_math_BigInteger_java_lang_StringBuilder_int_int, 0, "(Ljava/math/BigInteger;Ljava/lang/StringBuilder;II)V", 10 },
	{ "getRadixConversionCache", (intptr_t) SM_java_math_BigInteger_getRadixConversionCache_int_int_R_java_math_BigInteger, 0, "(II)Ljava/math/BigInteger;", 10 },
	{ "toString", (intptr_t) M_java_math_BigInteger_toString_R_java_lang_String, VTABLE_java_math_BigInteger_toString_R_java_lang_String, "()Ljava/lang/String;", 1 },
	{ "toByteArray", (intptr_t) M_java_math_BigInteger_toByteArray_R_Array1_byte, VTABLE_java_math_BigInteger_toByteArray_R_Array1_byte, "()[B", 1 },
	{ "intValue", (intptr_t) M_java_math_BigInteger_intValue_R_int, VTABLE_java_math_BigInteger_intValue_R_int, "()I", 1 },
	{ "longValue", (intptr_t) M_java_math_BigInteger_longValue_R_long, VTABLE_java_math_BigInteger_longValue_R_long, "()J", 1 },
	{ "floatValue", (intptr_t) M_java_math_BigInteger_floatValue_R_float, VTABLE_java_math_BigInteger_floatValue_R_float, "()F", 1 },
	{ "doubleValue", (intptr_t) M_java_math_BigInteger_doubleValue_R_double, VTABLE_java_math_BigInteger_doubleValue_R_double, "()D", 1 },
	{ "stripLeadingZeroInts", (intptr_t) SM_java_math_BigInteger_stripLeadingZeroInts_Array1_int_R_Array1_int, 0, "([I)[I", 10 },
	{ "trustedStripLeadingZeroInts", (intptr_t) SM_java_math_BigInteger_trustedStripLeadingZeroInts_Array1_int_R_Array1_int, 0, "([I)[I", 10 },
	{ "stripLeadingZeroBytes", (intptr_t) SM_java_math_BigInteger_stripLeadingZeroBytes_Array1_byte_R_Array1_int, 0, "([B)[I", 10 },
	{ "makePositive", (intptr_t) SM_java_math_BigInteger_makePositive_Array1_byte_R_Array1_int, 0, "([B)[I", 10 },
	{ "makePositive", (intptr_t) SM_java_math_BigInteger_makePositive_Array1_int_R_Array1_int, 0, "([I)[I", 10 },
	{ "intLength", (intptr_t) M_java_math_BigInteger_intLength_R_int, VTABLE_java_math_BigInteger_intLength_R_int, "()I", 2 },
	{ "signBit", (intptr_t) M_java_math_BigInteger_signBit_R_int, VTABLE_java_math_BigInteger_signBit_R_int, "()I", 2 },
	{ "signInt", (intptr_t) M_java_math_BigInteger_signInt_R_int, VTABLE_java_math_BigInteger_signInt_R_int, "()I", 2 },
	{ "getInt", (intptr_t) M_java_math_BigInteger_getInt_int_R_int, VTABLE_java_math_BigInteger_getInt_int_R_int, "(I)I", 2 },
	{ "firstNonzeroIntNum", (intptr_t) M_java_math_BigInteger_firstNonzeroIntNum_R_int, VTABLE_java_math_BigInteger_firstNonzeroIntNum_R_int, "()I", 2 },
	{ "magSerializedForm", (intptr_t) M_java_math_BigInteger_magSerializedForm_R_Array1_byte, VTABLE_java_math_BigInteger_magSerializedForm_R_Array1_byte, "()[B", 2 },
	{ "longValueExact", (intptr_t) M_java_math_BigInteger_longValueExact_R_long, VTABLE_java_math_BigInteger_longValueExact_R_long, "()J", 1 },
	{ "intValueExact", (intptr_t) M_java_math_BigInteger_intValueExact_R_int, VTABLE_java_math_BigInteger_intValueExact_R_int, "()I", 1 },
	{ "shortValueExact", (intptr_t) M_java_math_BigInteger_shortValueExact_R_short, VTABLE_java_math_BigInteger_shortValueExact_R_short, "()S", 1 },
	{ "byteValueExact", (intptr_t) M_java_math_BigInteger_byteValueExact_R_byte, VTABLE_java_math_BigInteger_byteValueExact_R_byte, "()B", 1 },
	{ "compareTo", (intptr_t) M_java_math_BigInteger_compareTo_java_lang_Object_R_int, VTABLE_java_math_BigInteger_compareTo_java_lang_Object_R_int, "(Ljava/lang/Object;)I", 4161 },
	{ "<clinit>", (intptr_t) clinit_java_math_BigInteger, 0, "()V", 8 },
};

Class class_java_math_BigInteger{
		.nativeName = (intptr_t) "java/math/BigInteger",
		.parentClass = (intptr_t) &class_java_lang_Number,
		.size = sizeof(java_math_BigInteger),
		.classVtable = (intptr_t) vtable_java_math_BigInteger,
		.staticInitializer = (intptr_t) clinit_java_math_BigInteger,
		.annotationInitializer = (intptr_t) initAnnotations,
		.markFunction = (intptr_t) mark_java_math_BigInteger,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 33,
		.interfaceCount = 1,
		.nativeInterfaces = (intptr_t) interfaces,
		.fieldCount = 41,
		.nativeFields = (intptr_t) fields,
		.methodCount = 145,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 93,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_java_math_BigInteger = registerClass(&class_java_math_BigInteger);

}
