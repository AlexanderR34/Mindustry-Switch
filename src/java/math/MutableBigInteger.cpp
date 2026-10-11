#include "java/math/MutableBigInteger.h"
#include "java/lang/Math.h"
#include "java/math/BigInteger.h"
#include "java/lang/Integer.h"
#include "java/math/MutableBigInteger.h"
#include "java/math/SignedMutableBigInteger.h"
#include "java/lang/Long.h"
#include "java/lang/ArithmeticException.h"
#include "java/lang/Object.h"
#include "java/lang/String.h"
#include "java/lang/AssertionError.h"
#include "java/util/Arrays.h"
#include "java/math/BigDecimal.h"
#include "java/lang/Class.h"
#include "java/lang/System.h"

extern "C" {

jobject SF_java_math_MutableBigInteger_ONE;
jint SF_java_math_MutableBigInteger_KNUTH_POW2_THRESH_LEN;
jint SF_java_math_MutableBigInteger_KNUTH_POW2_THRESH_ZEROS;
jbool SF_java_math_MutableBigInteger_$assertionsDisabled;

void mark_java_math_MutableBigInteger(jobject object, jint mark, jint depth) {
	if (!object) {
		if (SF_java_math_MutableBigInteger_ONE)
			((gc_mark_ptr) ((jclass) ((jobject) SF_java_math_MutableBigInteger_ONE)->clazz)->markFunction)((jobject) SF_java_math_MutableBigInteger_ONE, mark, depth + 1);
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
	auto self = (java_math_MutableBigInteger *) object;
	if (self->F_value)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_value)->clazz)->markFunction)((jobject) self->F_value, mark, depth + 1);
}

void init_java_math_MutableBigInteger(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/math/MutableBigInteger:<init>", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_math_MutableBigInteger(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(103);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(69);
	((java_math_MutableBigInteger *) NULL_CHECK((frame[0].o)))->F_offset = (jint(0));
	LINE_NUMBER(104);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject) createArray(ctx, &class_int, (jint(1)));
	((java_math_MutableBigInteger *) NULL_CHECK(sp[0].o))->F_value = (jref) sp[1].o;
	LINE_NUMBER(105);
	((java_math_MutableBigInteger *) NULL_CHECK((frame[0].o)))->F_intLen = (jint(0));
	LINE_NUMBER(106);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_java_math_MutableBigInteger_int(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/math/MutableBigInteger:<init>", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_math_MutableBigInteger(ctx);
	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(112);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(69);
	((java_math_MutableBigInteger *) NULL_CHECK((frame[0].o)))->F_offset = (jint(0));
	LINE_NUMBER(113);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject) createArray(ctx, &class_int, (jint(1)));
	((java_math_MutableBigInteger *) NULL_CHECK(sp[0].o))->F_value = (jref) sp[1].o;
	LINE_NUMBER(114);
	((java_math_MutableBigInteger *) NULL_CHECK((frame[0].o)))->F_intLen = (jint(1));
	LINE_NUMBER(115);
	sp[0].o = (jobject)((java_math_MutableBigInteger *) NULL_CHECK((frame[0].o)))->F_value;
	ARRAY_ACCESS(jint, sp[0].o, (jint(0))) = (frame[1].i);
	LINE_NUMBER(116);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_java_math_MutableBigInteger_Array1_int(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/math/MutableBigInteger:<init>", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_math_MutableBigInteger(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(122);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(69);
	((java_math_MutableBigInteger *) NULL_CHECK((frame[0].o)))->F_offset = (jint(0));
	LINE_NUMBER(123);
	((java_math_MutableBigInteger *) NULL_CHECK((frame[0].o)))->F_value = (jref) (frame[1].o);
	LINE_NUMBER(124);
	((java_math_MutableBigInteger *) NULL_CHECK((frame[0].o)))->F_intLen = (((jarray) nullCheck(ctx, (frame[1].o)))->length);
	LINE_NUMBER(125);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_java_math_MutableBigInteger_java_math_BigInteger(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/math/MutableBigInteger:<init>", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_math_MutableBigInteger(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(131);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(69);
	((java_math_MutableBigInteger *) NULL_CHECK((frame[0].o)))->F_offset = (jint(0));
	LINE_NUMBER(132);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((java_math_BigInteger *) NULL_CHECK((frame[1].o)))->F_mag;
	((java_math_MutableBigInteger *) NULL_CHECK(sp[0].o))->F_intLen = (((jarray) nullCheck(ctx, sp[1].o))->length);
	LINE_NUMBER(133);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((java_math_BigInteger *) NULL_CHECK((frame[1].o)))->F_mag;
	sp[1].o = (jobject)SM_java_util_Arrays_copyOf_Array1_int_int_R_Array1_int(ctx, sp[1].o, ((jint)((java_math_MutableBigInteger *) NULL_CHECK((frame[0].o)))->F_intLen));
	((java_math_MutableBigInteger *) NULL_CHECK(sp[0].o))->F_value = (jref) sp[1].o;
	LINE_NUMBER(134);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_java_math_MutableBigInteger_java_math_MutableBigInteger(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/math/MutableBigInteger:<init>", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_math_MutableBigInteger(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(140);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(69);
	((java_math_MutableBigInteger *) NULL_CHECK((frame[0].o)))->F_offset = (jint(0));
	LINE_NUMBER(141);
	((java_math_MutableBigInteger *) NULL_CHECK((frame[0].o)))->F_intLen = ((jint)((java_math_MutableBigInteger *) NULL_CHECK((frame[1].o)))->F_intLen);
	LINE_NUMBER(142);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((java_math_MutableBigInteger *) NULL_CHECK((frame[1].o)))->F_value;
	sp[1].o = (jobject)SM_java_util_Arrays_copyOfRange_Array1_int_int_int_R_Array1_int(ctx, sp[1].o, ((jint)((java_math_MutableBigInteger *) NULL_CHECK((frame[1].o)))->F_offset), (((jint)((java_math_MutableBigInteger *) NULL_CHECK((frame[1].o)))->F_offset) + ((jint)((java_math_MutableBigInteger *) NULL_CHECK((frame[0].o)))->F_intLen)));
	((java_math_MutableBigInteger *) NULL_CHECK(sp[0].o))->F_value = (jref) sp[1].o;
	LINE_NUMBER(143);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_java_math_MutableBigInteger_ones_int(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/math/MutableBigInteger:ones", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(152);
	jint temp0 = frame[1].i;
	sp[0].o = (jobject)((java_math_MutableBigInteger *) NULL_CHECK((frame[0].o)))->F_value;
	if (temp0 <= (((jarray) nullCheck(ctx, sp[0].o))->length)) goto label_1;
	}
	{
	LINE_NUMBER(153);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject) createArray(ctx, &class_int, (frame[1].i));
	((java_math_MutableBigInteger *) NULL_CHECK(sp[0].o))->F_value = (jref) sp[1].o;
	}
label_1:;
	{
	LINE_NUMBER(154);
	sp[0].o = (jobject)((java_math_MutableBigInteger *) NULL_CHECK((frame[0].o)))->F_value;
	SM_java_util_Arrays_fill_Array1_int_int(ctx, sp[0].o, (jint(-1)));
	LINE_NUMBER(155);
	((java_math_MutableBigInteger *) NULL_CHECK((frame[0].o)))->F_offset = (jint(0));
	LINE_NUMBER(156);
	((java_math_MutableBigInteger *) NULL_CHECK((frame[0].o)))->F_intLen = (frame[1].i);
	LINE_NUMBER(157);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_java_math_MutableBigInteger_getMagnitudeArray_R_Array1_int(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/math/MutableBigInteger:getMagnitudeArray", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(164);
	if (((jint)((java_math_MutableBigInteger *) NULL_CHECK((frame[0].o)))->F_offset) > 0) goto label_1;
	}
	{
	sp[0].o = (jobject)((java_math_MutableBigInteger *) NULL_CHECK((frame[0].o)))->F_value;
	if ((((jarray) nullCheck(ctx, sp[0].o))->length) == ((jint)((java_math_MutableBigInteger *) NULL_CHECK((frame[0].o)))->F_intLen)) goto label_2;
	}
label_1:;
	{
	LINE_NUMBER(165);
	sp[0].o = (jobject)((java_math_MutableBigInteger *) NULL_CHECK((frame[0].o)))->F_value;
	sp[0].o = (jobject)SM_java_util_Arrays_copyOfRange_Array1_int_int_int_R_Array1_int(ctx, sp[0].o, ((jint)((java_math_MutableBigInteger *) NULL_CHECK((frame[0].o)))->F_offset), (((jint)((java_math_MutableBigInteger *) NULL_CHECK((frame[0].o)))->F_offset) + ((jint)((java_math_MutableBigInteger *) NULL_CHECK((frame[0].o)))->F_intLen)));
	popStackFrame(ctx);
	return sp[0].o;
	}
label_2:;
	{
	LINE_NUMBER(166);
	sp[0].o = (jobject)((java_math_MutableBigInteger *) NULL_CHECK((frame[0].o)))->F_value;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jlong M_java_math_MutableBigInteger_toLong_R_long(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/math/MutableBigInteger:toLong", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(174);
	if ((clinit_java_math_MutableBigInteger(ctx), (jint)SF_java_math_MutableBigInteger_$assertionsDisabled) != 0) goto label_1;
	}
	{
	if (((jint)((java_math_MutableBigInteger *) NULL_CHECK((frame[0].o)))->F_intLen) <= (jint(2))) goto label_1;
	}
	{
	clinit_java_lang_AssertionError(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_AssertionError);
	init_java_lang_AssertionError_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"this MutableBigInteger exceeds the range of long"_j))));
	throwException(ctx, sp[0].o);	}
label_1:;
	{
	LINE_NUMBER(175);
	if (((jint)((java_math_MutableBigInteger *) NULL_CHECK((frame[0].o)))->F_intLen) != 0) goto label_2;
	}
	{
	LINE_NUMBER(176);
	popStackFrame(ctx);
	return (jlong(0));
	}
label_2:;
	{
	LINE_NUMBER(177);
	sp[0].o = (jobject)((java_math_MutableBigInteger *) NULL_CHECK((frame[0].o)))->F_value;
	frame[1].l = ((jlong(((jint)ARRAY_ACCESS(jint, sp[0].o, ((jint)((java_math_MutableBigInteger *) NULL_CHECK((frame[0].o)))->F_offset))))) & (jlong(4294967295ll)));
	LINE_NUMBER(178);
	if (((jint)((java_math_MutableBigInteger *) NULL_CHECK((frame[0].o)))->F_intLen) != (jint(2))) goto label_5;
	}
	{
	jlong temp0 = (frame[1].l) << (32);
	sp[0].o = (jobject)((java_math_MutableBigInteger *) NULL_CHECK((frame[0].o)))->F_value;
	jlong temp1 = temp0 | ((jlong(((jint)ARRAY_ACCESS(jint, sp[0].o, (((jint)((java_math_MutableBigInteger *) NULL_CHECK((frame[0].o)))->F_offset) + (jint(1))))))) & (jlong(4294967295ll)));
	sp[0].l = temp1;
	sp += 1;
	goto label_6;
	}
label_5:;
	INST_LLOAD(1);
label_6:;
	popStackFrame(ctx);
	INST_LRETURN();

	popStackFrame(ctx);
}

jobject M_java_math_MutableBigInteger_toBigInteger_int_R_java_math_BigInteger(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/math/MutableBigInteger:toBigInteger", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(185);
	if (((jint)((java_math_MutableBigInteger *) NULL_CHECK((frame[0].o)))->F_intLen) == 0) goto label_1;
	}
	INST_ILOAD(1);
	if ((--sp)->i != 0) goto label_2;
label_1:;
	{
	LINE_NUMBER(186);
	clinit_java_math_BigInteger(ctx);
	sp[0].o = (jobject)SF_java_math_BigInteger_ZERO;
	popStackFrame(ctx);
	return sp[0].o;
	}
label_2:;
	{
	LINE_NUMBER(187);
	clinit_java_math_BigInteger(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_math_BigInteger);
	sp[1].o = (jobject)M_java_math_MutableBigInteger_getMagnitudeArray_R_Array1_int(ctx, (frame[0].o));
	init_java_math_BigInteger_Array1_int_int(ctx, sp[0].o, sp[1].o, (frame[1].i));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_java_math_MutableBigInteger_toBigInteger_R_java_math_BigInteger(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/math/MutableBigInteger:toBigInteger", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(194);
	((func_java_math_MutableBigInteger_normalize) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_math_MutableBigInteger_normalize])(ctx, (frame[0].o));
	LINE_NUMBER(195);
	sp[0].o = frame[0].o;
	jint temp0 = (jint)((func_java_math_MutableBigInteger_isZero_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_math_MutableBigInteger_isZero_R_boolean])(ctx, (frame[0].o));
	sp += 1;
	if (temp0 == 0) goto label_2;
	}
	INST_ICONST(0);
	goto label_3;
label_2:;
	INST_ICONST(1);
label_3:;
	POP_N(2); // Pop method args
	sp->o = (jobject)((func_java_math_MutableBigInteger_toBigInteger_int_R_java_math_BigInteger) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_math_MutableBigInteger_toBigInteger_int_R_java_math_BigInteger])(ctx, sp[0].o, sp[1].i);
	sp++;
	popStackFrame(ctx);
	INST_ARETURN();

	popStackFrame(ctx);
}

jobject M_java_math_MutableBigInteger_toBigDecimal_int_int_R_java_math_BigDecimal(jcontext ctx, jobject self, jint param0, jint param1) {
	NULL_CHECK(self);
	jtype frame[15];
	auto stack = &frame[8];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/math/MutableBigInteger:toBigDecimal", 15 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(203);
	if (((jint)((java_math_MutableBigInteger *) NULL_CHECK((frame[0].o)))->F_intLen) == 0) goto label_1;
	}
	INST_ILOAD(1);
	if ((--sp)->i != 0) goto label_2;
label_1:;
	{
	LINE_NUMBER(204);
	sp[0].o = (jobject)SM_java_math_BigDecimal_zeroValueOf_int_R_java_math_BigDecimal(ctx, (frame[2].i));
	popStackFrame(ctx);
	return sp[0].o;
	}
label_2:;
	{
	LINE_NUMBER(205);
	sp[0].o = (jobject)M_java_math_MutableBigInteger_getMagnitudeArray_R_Array1_int(ctx, (frame[0].o));
	frame[3].o = sp[0].o;
	LINE_NUMBER(206);
	frame[4].i = (((jarray) nullCheck(ctx, (frame[3].o)))->length);
	LINE_NUMBER(207);
	frame[5].i = ((jint)ARRAY_ACCESS(jint, (frame[3].o), (jint(0))));
	LINE_NUMBER(210);
	if ((frame[4].i) > (jint(2))) goto label_6;
	}
	INST_ILOAD(5);
	if ((--sp)->i >= 0) goto label_7;
	{
	if ((frame[4].i) != (jint(2))) goto label_7;
	}
label_6:;
	{
	LINE_NUMBER(211);
	clinit_java_math_BigDecimal(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_math_BigDecimal);
	clinit_java_math_BigInteger(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_math_BigInteger);
	init_java_math_BigInteger_Array1_int_int(ctx, sp[1].o, (frame[3].o), (frame[1].i));
	init_java_math_BigDecimal_java_math_BigInteger_long_int_int(ctx, sp[0].o, sp[1].o, (jlong(-9223372036854775807ll)), (frame[2].i), (jint(0)));
	popStackFrame(ctx);
	return sp[0].o;
	}
label_7:;
	{
	LINE_NUMBER(212);
	if ((frame[4].i) != (jint(2))) goto label_8;
	}
	{
	LINE_NUMBER(213);
	jlong temp0 = ((jlong(((jint)ARRAY_ACCESS(jint, (frame[3].o), (jint(1)))))) & (jlong(4294967295ll))) | (((jlong((frame[5].i))) & (jlong(4294967295ll))) << (32));
	sp[0].l = temp0;
	sp += 1;
	goto label_10;
	}
label_8:;
	{
	LINE_NUMBER(214);
	jlong temp0 = (jlong((frame[5].i))) & (jlong(4294967295ll));
	sp[0].l = temp0;
	sp += 1;
	}
label_10:;
	{
	sp -= 1;
	frame[6].l = sp[0].l;
	LINE_NUMBER(215);
	if ((frame[1].i) != (jint(-1))) goto label_12;
	}
	{
	jlong temp0 = -(frame[6].l);
	sp[0].l = temp0;
	sp += 1;
	goto label_13;
	}
label_12:;
	INST_LLOAD(6);
label_13:;
	{
	sp -= 1;
	sp[0].o = (jobject)SM_java_math_BigDecimal_valueOf_long_int_R_java_math_BigDecimal(ctx, sp[0].l, (frame[2].i));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jlong M_java_math_MutableBigInteger_toCompactValue_int_R_long(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[13];
	auto stack = &frame[7];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/math/MutableBigInteger:toCompactValue", 13 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(224);
	if (((jint)((java_math_MutableBigInteger *) NULL_CHECK((frame[0].o)))->F_intLen) == 0) goto label_1;
	}
	INST_ILOAD(1);
	if ((--sp)->i != 0) goto label_2;
label_1:;
	{
	LINE_NUMBER(225);
	popStackFrame(ctx);
	return (jlong(0));
	}
label_2:;
	{
	LINE_NUMBER(226);
	sp[0].o = (jobject)M_java_math_MutableBigInteger_getMagnitudeArray_R_Array1_int(ctx, (frame[0].o));
	frame[2].o = sp[0].o;
	LINE_NUMBER(227);
	frame[3].i = (((jarray) nullCheck(ctx, (frame[2].o)))->length);
	LINE_NUMBER(228);
	frame[4].i = ((jint)ARRAY_ACCESS(jint, (frame[2].o), (jint(0))));
	LINE_NUMBER(231);
	if ((frame[3].i) > (jint(2))) goto label_6;
	}
	INST_ILOAD(4);
	if ((--sp)->i >= 0) goto label_7;
	{
	if ((frame[3].i) != (jint(2))) goto label_7;
	}
label_6:;
	{
	LINE_NUMBER(232);
	popStackFrame(ctx);
	return (jlong(-9223372036854775807ll));
	}
label_7:;
	{
	LINE_NUMBER(233);
	if ((frame[3].i) != (jint(2))) goto label_8;
	}
	{
	LINE_NUMBER(234);
	jlong temp0 = ((jlong(((jint)ARRAY_ACCESS(jint, (frame[2].o), (jint(1)))))) & (jlong(4294967295ll))) | (((jlong((frame[4].i))) & (jlong(4294967295ll))) << (32));
	sp[0].l = temp0;
	sp += 1;
	goto label_10;
	}
label_8:;
	{
	LINE_NUMBER(235);
	jlong temp0 = (jlong((frame[4].i))) & (jlong(4294967295ll));
	sp[0].l = temp0;
	sp += 1;
	}
label_10:;
	{
	sp -= 1;
	frame[5].l = sp[0].l;
	LINE_NUMBER(236);
	if ((frame[1].i) != (jint(-1))) goto label_12;
	}
	{
	jlong temp0 = -(frame[5].l);
	sp[0].l = temp0;
	sp += 1;
	goto label_13;
	}
label_12:;
	INST_LLOAD(5);
label_13:;
	popStackFrame(ctx);
	INST_LRETURN();

	popStackFrame(ctx);
}

void M_java_math_MutableBigInteger_clear(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/math/MutableBigInteger:clear", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(243);
	sp[0].o = frame[0].o;
	sp[1].o = frame[0].o;
	jint temp0 = jint(0);
	((java_math_MutableBigInteger *) NULL_CHECK(sp[1].o))->F_intLen = temp0;
	((java_math_MutableBigInteger *) NULL_CHECK(sp[0].o))->F_offset = temp0;
	LINE_NUMBER(244);
	frame[1].i = (jint(0));
	sp[0].o = (jobject)((java_math_MutableBigInteger *) NULL_CHECK((frame[0].o)))->F_value;
	frame[2].i = (((jarray) nullCheck(ctx, sp[0].o))->length);
	}
label_3:;
	{
	if ((frame[1].i) >= (frame[2].i)) goto label_4;
	}
	{
	LINE_NUMBER(245);
	sp[0].o = (jobject)((java_math_MutableBigInteger *) NULL_CHECK((frame[0].o)))->F_value;
	ARRAY_ACCESS(jint, sp[0].o, (frame[1].i)) = (jint(0));
	LINE_NUMBER(244);
	INST_IINC(1, 1);
	goto label_3;
	}
label_4:;
	LINE_NUMBER(246);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_java_math_MutableBigInteger_reset(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/math/MutableBigInteger:reset", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(252);
	sp[0].o = frame[0].o;
	sp[1].o = frame[0].o;
	jint temp0 = jint(0);
	((java_math_MutableBigInteger *) NULL_CHECK(sp[1].o))->F_intLen = temp0;
	((java_math_MutableBigInteger *) NULL_CHECK(sp[0].o))->F_offset = temp0;
	LINE_NUMBER(253);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jint M_java_math_MutableBigInteger_compare_java_math_MutableBigInteger_R_int(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[11];
	auto stack = &frame[8];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/math/MutableBigInteger:compare", 11 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(261);
	frame[2].i = ((jint)((java_math_MutableBigInteger *) NULL_CHECK((frame[1].o)))->F_intLen);
	LINE_NUMBER(262);
	if (((jint)((java_math_MutableBigInteger *) NULL_CHECK((frame[0].o)))->F_intLen) >= (frame[2].i)) goto label_2;
	}
	{
	LINE_NUMBER(263);
	popStackFrame(ctx);
	return (jint(-1));
	}
label_2:;
	{
	LINE_NUMBER(264);
	if (((jint)((java_math_MutableBigInteger *) NULL_CHECK((frame[0].o)))->F_intLen) <= (frame[2].i)) goto label_4;
	}
	{
	LINE_NUMBER(265);
	popStackFrame(ctx);
	return (jint(1));
	}
label_4:;
	{
	LINE_NUMBER(269);
	sp[0].o = (jobject)((java_math_MutableBigInteger *) NULL_CHECK((frame[1].o)))->F_value;
	frame[3].o = sp[0].o;
	LINE_NUMBER(270);
	frame[4].i = ((jint)((java_math_MutableBigInteger *) NULL_CHECK((frame[0].o)))->F_offset);
	frame[5].i = ((jint)((java_math_MutableBigInteger *) NULL_CHECK((frame[1].o)))->F_offset);
	}
label_8:;
	{
	if ((frame[4].i) >= (((jint)((java_math_MutableBigInteger *) NULL_CHECK((frame[0].o)))->F_intLen) + ((jint)((java_math_MutableBigInteger *) NULL_CHECK((frame[0].o)))->F_offset))) goto label_9;
	}
	{
	LINE_NUMBER(271);
	sp[0].o = (jobject)((java_math_MutableBigInteger *) NULL_CHECK((frame[0].o)))->F_value;
	frame[6].i = (((jint)ARRAY_ACCESS(jint, sp[0].o, (frame[4].i))) + (bit_cast<jint>(0x80000000)));
	LINE_NUMBER(272);
	frame[7].i = (((jint)ARRAY_ACCESS(jint, (frame[3].o), (frame[5].i))) + (bit_cast<jint>(0x80000000)));
	LINE_NUMBER(273);
	if ((frame[6].i) >= (frame[7].i)) goto label_13;
	}
	{
	LINE_NUMBER(274);
	popStackFrame(ctx);
	return (jint(-1));
	}
label_13:;
	{
	LINE_NUMBER(275);
	if ((frame[6].i) <= (frame[7].i)) goto label_15;
	}
	{
	LINE_NUMBER(276);
	popStackFrame(ctx);
	return (jint(1));
	}
label_15:;
	{
	LINE_NUMBER(270);
	INST_IINC(4, 1);
	INST_IINC(5, 1);
	goto label_8;
	}
label_9:;
	{
	LINE_NUMBER(278);
	popStackFrame(ctx);
	return (jint(0));
	}

	popStackFrame(ctx);
}

jint M_java_math_MutableBigInteger_compareShifted_java_math_MutableBigInteger_int_R_int(jcontext ctx, jobject self, jobject param0, jint param1) {
	NULL_CHECK(self);
	jtype frame[13];
	auto stack = &frame[10];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/math/MutableBigInteger:compareShifted", 13 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(286);
	frame[3].i = ((jint)((java_math_MutableBigInteger *) NULL_CHECK((frame[1].o)))->F_intLen);
	LINE_NUMBER(287);
	frame[4].i = (((jint)((java_math_MutableBigInteger *) NULL_CHECK((frame[0].o)))->F_intLen) - (frame[2].i));
	LINE_NUMBER(288);
	if ((frame[4].i) >= (frame[3].i)) goto label_3;
	}
	{
	LINE_NUMBER(289);
	popStackFrame(ctx);
	return (jint(-1));
	}
label_3:;
	{
	LINE_NUMBER(290);
	if ((frame[4].i) <= (frame[3].i)) goto label_5;
	}
	{
	LINE_NUMBER(291);
	popStackFrame(ctx);
	return (jint(1));
	}
label_5:;
	{
	LINE_NUMBER(295);
	sp[0].o = (jobject)((java_math_MutableBigInteger *) NULL_CHECK((frame[1].o)))->F_value;
	frame[5].o = sp[0].o;
	LINE_NUMBER(296);
	frame[6].i = ((jint)((java_math_MutableBigInteger *) NULL_CHECK((frame[0].o)))->F_offset);
	frame[7].i = ((jint)((java_math_MutableBigInteger *) NULL_CHECK((frame[1].o)))->F_offset);
	}
label_9:;
	{
	if ((frame[6].i) >= ((frame[4].i) + ((jint)((java_math_MutableBigInteger *) NULL_CHECK((frame[0].o)))->F_offset))) goto label_10;
	}
	{
	LINE_NUMBER(297);
	sp[0].o = (jobject)((java_math_MutableBigInteger *) NULL_CHECK((frame[0].o)))->F_value;
	frame[8].i = (((jint)ARRAY_ACCESS(jint, sp[0].o, (frame[6].i))) + (bit_cast<jint>(0x80000000)));
	LINE_NUMBER(298);
	frame[9].i = (((jint)ARRAY_ACCESS(jint, (frame[5].o), (frame[7].i))) + (bit_cast<jint>(0x80000000)));
	LINE_NUMBER(299);
	if ((frame[8].i) >= (frame[9].i)) goto label_14;
	}
	{
	LINE_NUMBER(300);
	popStackFrame(ctx);
	return (jint(-1));
	}
label_14:;
	{
	LINE_NUMBER(301);
	if ((frame[8].i) <= (frame[9].i)) goto label_16;
	}
	{
	LINE_NUMBER(302);
	popStackFrame(ctx);
	return (jint(1));
	}
label_16:;
	{
	LINE_NUMBER(296);
	INST_IINC(6, 1);
	INST_IINC(7, 1);
	goto label_9;
	}
label_10:;
	{
	LINE_NUMBER(304);
	popStackFrame(ctx);
	return (jint(0));
	}

	popStackFrame(ctx);
}

jint M_java_math_MutableBigInteger_compareHalf_java_math_MutableBigInteger_R_int(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[19];
	auto stack = &frame[15];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/math/MutableBigInteger:compareHalf", 19 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(314);
	frame[2].i = ((jint)((java_math_MutableBigInteger *) NULL_CHECK((frame[1].o)))->F_intLen);
	LINE_NUMBER(315);
	frame[3].i = ((jint)((java_math_MutableBigInteger *) NULL_CHECK((frame[0].o)))->F_intLen);
	LINE_NUMBER(316);
	if ((frame[3].i) > 0) goto label_3;
	}
	{
	LINE_NUMBER(317);
	if ((frame[2].i) > 0) goto label_5;
	}
	INST_ICONST(0);
	goto label_6;
label_5:;
	INST_ICONST(-1);
label_6:;
	popStackFrame(ctx);
	INST_IRETURN();
label_3:;
	{
	LINE_NUMBER(318);
	if ((frame[3].i) <= (frame[2].i)) goto label_7;
	}
	{
	LINE_NUMBER(319);
	popStackFrame(ctx);
	return (jint(1));
	}
label_7:;
	{
	LINE_NUMBER(320);
	if ((frame[3].i) >= ((frame[2].i) - (jint(1)))) goto label_9;
	}
	{
	LINE_NUMBER(321);
	popStackFrame(ctx);
	return (jint(-1));
	}
label_9:;
	{
	LINE_NUMBER(322);
	sp[0].o = (jobject)((java_math_MutableBigInteger *) NULL_CHECK((frame[1].o)))->F_value;
	frame[4].o = sp[0].o;
	LINE_NUMBER(323);
	frame[5].i = (jint(0));
	LINE_NUMBER(324);
	frame[6].i = (jint(0));
	LINE_NUMBER(326);
	if ((frame[3].i) == (frame[2].i)) goto label_14;
	}
	{
	LINE_NUMBER(327);
	if (((jint)ARRAY_ACCESS(jint, (frame[4].o), (frame[5].i))) != (jint(1))) goto label_16;
	}
	{
	LINE_NUMBER(328);
	INST_IINC(5, 1);
	LINE_NUMBER(329);
	frame[6].i = (bit_cast<jint>(0x80000000));
	goto label_14;
	}
label_16:;
	{
	LINE_NUMBER(331);
	popStackFrame(ctx);
	return (jint(-1));
	}
label_14:;
	{
	LINE_NUMBER(335);
	sp[0].o = (jobject)((java_math_MutableBigInteger *) NULL_CHECK((frame[0].o)))->F_value;
	frame[7].o = sp[0].o;
	LINE_NUMBER(336);
	frame[8].i = ((jint)((java_math_MutableBigInteger *) NULL_CHECK((frame[0].o)))->F_offset);
	frame[9].i = (frame[5].i);
	}
label_21:;
	{
	if ((frame[8].i) >= ((frame[3].i) + ((jint)((java_math_MutableBigInteger *) NULL_CHECK((frame[0].o)))->F_offset))) goto label_22;
	}
	{
	LINE_NUMBER(337);
	sp[0].o = frame[4].o;
	jint temp0 = frame[9].i;
	INST_IINC(9, 1);
	frame[10].i = ((jint)ARRAY_ACCESS(jint, sp[0].o, temp0));
	LINE_NUMBER(338);
	frame[11].l = ((jlong(((bit_cast<jint>(bit_cast<uint32_t>((frame[10].i)) >> (jint(1)))) + (frame[6].i)))) & (jlong(4294967295ll)));
	LINE_NUMBER(339);
	sp[0].o = frame[7].o;
	jint temp1 = frame[8].i;
	INST_IINC(8, 1);
	frame[13].l = ((jlong(((jint)ARRAY_ACCESS(jint, sp[0].o, temp1)))) & (jlong(4294967295ll)));
	LINE_NUMBER(340);
	if ((longCompare((frame[13].l), (frame[11].l))) == 0) goto label_27;
	}
	{
	LINE_NUMBER(341);
	if ((longCompare((frame[13].l), (frame[11].l))) >= 0) goto label_29;
	}
	INST_ICONST(-1);
	goto label_30;
label_29:;
	INST_ICONST(1);
label_30:;
	popStackFrame(ctx);
	INST_IRETURN();
label_27:;
	{
	LINE_NUMBER(342);
	frame[6].i = (((frame[10].i) & (jint(1))) << (31));
	LINE_NUMBER(343);
	goto label_21;
	}
label_22:;
	{
	LINE_NUMBER(344);
	if ((frame[6].i) != 0) goto label_32;
	}
	INST_ICONST(0);
	goto label_33;
label_32:;
	INST_ICONST(-1);
label_33:;
	popStackFrame(ctx);
	INST_IRETURN();

	popStackFrame(ctx);
}

jint M_java_math_MutableBigInteger_getLowestSetBit_R_int(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/math/MutableBigInteger:getLowestSetBit", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(352);
	if (((jint)((java_math_MutableBigInteger *) NULL_CHECK((frame[0].o)))->F_intLen) != 0) goto label_1;
	}
	{
	LINE_NUMBER(353);
	popStackFrame(ctx);
	return (jint(-1));
	}
label_1:;
	{
	LINE_NUMBER(355);
	frame[1].i = (((jint)((java_math_MutableBigInteger *) NULL_CHECK((frame[0].o)))->F_intLen) - (jint(1)));
	}
label_3:;
	INST_ILOAD(1);
	if ((--sp)->i <= 0) goto label_4;
	{
	sp[0].o = (jobject)((java_math_MutableBigInteger *) NULL_CHECK((frame[0].o)))->F_value;
	if (((jint)ARRAY_ACCESS(jint, sp[0].o, ((frame[1].i) + ((jint)((java_math_MutableBigInteger *) NULL_CHECK((frame[0].o)))->F_offset)))) != 0) goto label_4;
	}
	INST_IINC(1, -1);
	goto label_3;
label_4:;
	{
	LINE_NUMBER(357);
	sp[0].o = (jobject)((java_math_MutableBigInteger *) NULL_CHECK((frame[0].o)))->F_value;
	frame[2].i = ((jint)ARRAY_ACCESS(jint, sp[0].o, ((frame[1].i) + ((jint)((java_math_MutableBigInteger *) NULL_CHECK((frame[0].o)))->F_offset))));
	LINE_NUMBER(358);
	if ((frame[2].i) != 0) goto label_6;
	}
	{
	LINE_NUMBER(359);
	popStackFrame(ctx);
	return (jint(-1));
	}
label_6:;
	{
	LINE_NUMBER(360);
	jint temp0 = ((((jint)((java_math_MutableBigInteger *) NULL_CHECK((frame[0].o)))->F_intLen) - (jint(1))) - (frame[1].i)) << (jint(5));
	jint temp1 = (jint)SM_java_lang_Integer_numberOfTrailingZeros_int_R_int(ctx, (frame[2].i));
	popStackFrame(ctx);
	return (temp0 + temp1);
	}

	popStackFrame(ctx);
}

jint M_java_math_MutableBigInteger_getInt_int_R_int(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/math/MutableBigInteger:getInt", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(369);
	sp[0].o = (jobject)((java_math_MutableBigInteger *) NULL_CHECK((frame[0].o)))->F_value;
	popStackFrame(ctx);
	return ((jint)ARRAY_ACCESS(jint, sp[0].o, (((jint)((java_math_MutableBigInteger *) NULL_CHECK((frame[0].o)))->F_offset) + (frame[1].i))));
	}

	popStackFrame(ctx);
}

jlong M_java_math_MutableBigInteger_getLong_int_R_long(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/math/MutableBigInteger:getLong", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(378);
	sp[0].o = (jobject)((java_math_MutableBigInteger *) NULL_CHECK((frame[0].o)))->F_value;
	popStackFrame(ctx);
	return ((jlong(((jint)ARRAY_ACCESS(jint, sp[0].o, (((jint)((java_math_MutableBigInteger *) NULL_CHECK((frame[0].o)))->F_offset) + (frame[1].i)))))) & (jlong(4294967295ll)));
	}

	popStackFrame(ctx);
}

void M_java_math_MutableBigInteger_normalize(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/math/MutableBigInteger:normalize", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(387);
	if (((jint)((java_math_MutableBigInteger *) NULL_CHECK((frame[0].o)))->F_intLen) != 0) goto label_1;
	}
	{
	LINE_NUMBER(388);
	((java_math_MutableBigInteger *) NULL_CHECK((frame[0].o)))->F_offset = (jint(0));
	LINE_NUMBER(389);
	popStackFrame(ctx);
	return;
	}
label_1:;
	{
	LINE_NUMBER(392);
	frame[1].i = ((jint)((java_math_MutableBigInteger *) NULL_CHECK((frame[0].o)))->F_offset);
	LINE_NUMBER(393);
	sp[0].o = (jobject)((java_math_MutableBigInteger *) NULL_CHECK((frame[0].o)))->F_value;
	if (((jint)ARRAY_ACCESS(jint, sp[0].o, (frame[1].i))) == 0) goto label_5;
	}
	LINE_NUMBER(394);
	popStackFrame(ctx);
	INST_RETURN();
label_5:;
	{
	LINE_NUMBER(396);
	frame[2].i = ((frame[1].i) + ((jint)((java_math_MutableBigInteger *) NULL_CHECK((frame[0].o)))->F_intLen));
	}
label_7:;
	{
	LINE_NUMBER(398);
	INST_IINC(1, 1);
	LINE_NUMBER(399);
	if ((frame[1].i) >= (frame[2].i)) goto label_9;
	}
	{
	sp[0].o = (jobject)((java_math_MutableBigInteger *) NULL_CHECK((frame[0].o)))->F_value;
	if (((jint)ARRAY_ACCESS(jint, sp[0].o, (frame[1].i))) == 0) goto label_7;
	}
label_9:;
	{
	LINE_NUMBER(401);
	frame[3].i = ((frame[1].i) - ((jint)((java_math_MutableBigInteger *) NULL_CHECK((frame[0].o)))->F_offset));
	LINE_NUMBER(402);
	sp[0].o = frame[0].o;
	((java_math_MutableBigInteger *) NULL_CHECK(sp[0].o))->F_intLen = (((jint)((java_math_MutableBigInteger *) NULL_CHECK(sp[0].o))->F_intLen) - (frame[3].i));
	LINE_NUMBER(403);
	sp[0].o = frame[0].o;
	sp += 1;
	if (((jint)((java_math_MutableBigInteger *) NULL_CHECK((frame[0].o)))->F_intLen) != 0) goto label_12;
	}
	INST_ICONST(0);
	goto label_13;
label_12:;
	{
	jint temp0 = ((jint)((java_math_MutableBigInteger *) NULL_CHECK((frame[0].o)))->F_offset) + (frame[3].i);
	sp[0].i = temp0;
	sp += 1;
	}
label_13:;
	{
	sp -= 2;
	((java_math_MutableBigInteger *) NULL_CHECK(sp[0].o))->F_offset = sp[1].i;
	LINE_NUMBER(404);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_java_math_MutableBigInteger_ensureCapacity_int(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/math/MutableBigInteger:ensureCapacity", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(411);
	sp[0].o = (jobject)((java_math_MutableBigInteger *) NULL_CHECK((frame[0].o)))->F_value;
	if ((((jarray) nullCheck(ctx, sp[0].o))->length) >= (frame[1].i)) goto label_1;
	}
	{
	LINE_NUMBER(412);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject) createArray(ctx, &class_int, (frame[1].i));
	((java_math_MutableBigInteger *) NULL_CHECK(sp[0].o))->F_value = (jref) sp[1].o;
	LINE_NUMBER(413);
	((java_math_MutableBigInteger *) NULL_CHECK((frame[0].o)))->F_offset = (jint(0));
	LINE_NUMBER(414);
	((java_math_MutableBigInteger *) NULL_CHECK((frame[0].o)))->F_intLen = (frame[1].i);
	}
label_1:;
	LINE_NUMBER(416);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jobject M_java_math_MutableBigInteger_toIntArray_R_Array1_int(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/math/MutableBigInteger:toIntArray", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(423);
	sp[0].o = (jobject) createArray(ctx, &class_int, ((jint)((java_math_MutableBigInteger *) NULL_CHECK((frame[0].o)))->F_intLen));
	frame[1].o = sp[0].o;
	LINE_NUMBER(424);
	frame[2].i = (jint(0));
	}
label_2:;
	{
	if ((frame[2].i) >= ((jint)((java_math_MutableBigInteger *) NULL_CHECK((frame[0].o)))->F_intLen)) goto label_3;
	}
	{
	LINE_NUMBER(425);
	sp[0].o = frame[1].o;
	jint temp0 = frame[2].i;
	sp[1].o = (jobject)((java_math_MutableBigInteger *) NULL_CHECK((frame[0].o)))->F_value;
	ARRAY_ACCESS(jint, sp[0].o, temp0) = ((jint)ARRAY_ACCESS(jint, sp[1].o, (((jint)((java_math_MutableBigInteger *) NULL_CHECK((frame[0].o)))->F_offset) + (frame[2].i))));
	LINE_NUMBER(424);
	INST_IINC(2, 1);
	goto label_2;
	}
label_3:;
	{
	LINE_NUMBER(426);
	popStackFrame(ctx);
	return (frame[1].o);
	}

	popStackFrame(ctx);
}

void M_java_math_MutableBigInteger_setInt_int_int(jcontext ctx, jobject self, jint param0, jint param1) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/math/MutableBigInteger:setInt", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(435);
	sp[0].o = (jobject)((java_math_MutableBigInteger *) NULL_CHECK((frame[0].o)))->F_value;
	ARRAY_ACCESS(jint, sp[0].o, (((jint)((java_math_MutableBigInteger *) NULL_CHECK((frame[0].o)))->F_offset) + (frame[1].i))) = (frame[2].i);
	LINE_NUMBER(436);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_java_math_MutableBigInteger_setValue_Array1_int_int(jcontext ctx, jobject self, jobject param0, jint param1) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/math/MutableBigInteger:setValue", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(443);
	((java_math_MutableBigInteger *) NULL_CHECK((frame[0].o)))->F_value = (jref) (frame[1].o);
	LINE_NUMBER(444);
	((java_math_MutableBigInteger *) NULL_CHECK((frame[0].o)))->F_intLen = (frame[2].i);
	LINE_NUMBER(445);
	((java_math_MutableBigInteger *) NULL_CHECK((frame[0].o)))->F_offset = (jint(0));
	LINE_NUMBER(446);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_java_math_MutableBigInteger_copyValue_java_math_MutableBigInteger(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/math/MutableBigInteger:copyValue", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(453);
	frame[2].i = ((jint)((java_math_MutableBigInteger *) NULL_CHECK((frame[1].o)))->F_intLen);
	LINE_NUMBER(454);
	sp[0].o = (jobject)((java_math_MutableBigInteger *) NULL_CHECK((frame[0].o)))->F_value;
	if ((((jarray) nullCheck(ctx, sp[0].o))->length) >= (frame[2].i)) goto label_2;
	}
	{
	LINE_NUMBER(455);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject) createArray(ctx, &class_int, (frame[2].i));
	((java_math_MutableBigInteger *) NULL_CHECK(sp[0].o))->F_value = (jref) sp[1].o;
	}
label_2:;
	{
	LINE_NUMBER(456);
	sp[0].o = (jobject)((java_math_MutableBigInteger *) NULL_CHECK((frame[1].o)))->F_value;
	jint temp0 = (jint)((java_math_MutableBigInteger *) NULL_CHECK((frame[1].o)))->F_offset;
	sp[1].o = (jobject)((java_math_MutableBigInteger *) NULL_CHECK((frame[0].o)))->F_value;
	SM_java_lang_System_arraycopy_java_lang_Object_int_java_lang_Object_int_int(ctx, sp[0].o, temp0, sp[1].o, (jint(0)), (frame[2].i));
	LINE_NUMBER(457);
	((java_math_MutableBigInteger *) NULL_CHECK((frame[0].o)))->F_intLen = (frame[2].i);
	LINE_NUMBER(458);
	((java_math_MutableBigInteger *) NULL_CHECK((frame[0].o)))->F_offset = (jint(0));
	LINE_NUMBER(459);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_java_math_MutableBigInteger_copyValue_Array1_int(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/math/MutableBigInteger:copyValue", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(466);
	frame[2].i = (((jarray) nullCheck(ctx, (frame[1].o)))->length);
	LINE_NUMBER(467);
	sp[0].o = (jobject)((java_math_MutableBigInteger *) NULL_CHECK((frame[0].o)))->F_value;
	if ((((jarray) nullCheck(ctx, sp[0].o))->length) >= (frame[2].i)) goto label_2;
	}
	{
	LINE_NUMBER(468);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject) createArray(ctx, &class_int, (frame[2].i));
	((java_math_MutableBigInteger *) NULL_CHECK(sp[0].o))->F_value = (jref) sp[1].o;
	}
label_2:;
	{
	LINE_NUMBER(469);
	sp[0].o = frame[1].o;
	jint temp0 = jint(0);
	sp[1].o = (jobject)((java_math_MutableBigInteger *) NULL_CHECK((frame[0].o)))->F_value;
	SM_java_lang_System_arraycopy_java_lang_Object_int_java_lang_Object_int_int(ctx, sp[0].o, temp0, sp[1].o, (jint(0)), (frame[2].i));
	LINE_NUMBER(470);
	((java_math_MutableBigInteger *) NULL_CHECK((frame[0].o)))->F_intLen = (frame[2].i);
	LINE_NUMBER(471);
	((java_math_MutableBigInteger *) NULL_CHECK((frame[0].o)))->F_offset = (jint(0));
	LINE_NUMBER(472);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jbool M_java_math_MutableBigInteger_isOne_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/math/MutableBigInteger:isOne", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(478);
	if (((jint)((java_math_MutableBigInteger *) NULL_CHECK((frame[0].o)))->F_intLen) != (jint(1))) goto label_1;
	}
	{
	sp[0].o = (jobject)((java_math_MutableBigInteger *) NULL_CHECK((frame[0].o)))->F_value;
	if (((jint)ARRAY_ACCESS(jint, sp[0].o, ((jint)((java_math_MutableBigInteger *) NULL_CHECK((frame[0].o)))->F_offset))) != (jint(1))) goto label_1;
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

jbool M_java_math_MutableBigInteger_isZero_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/math/MutableBigInteger:isZero", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(485);
	if (((jint)((java_math_MutableBigInteger *) NULL_CHECK((frame[0].o)))->F_intLen) != 0) goto label_1;
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

jbool M_java_math_MutableBigInteger_isEven_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/math/MutableBigInteger:isEven", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(492);
	if (((jint)((java_math_MutableBigInteger *) NULL_CHECK((frame[0].o)))->F_intLen) == 0) goto label_1;
	}
	{
	sp[0].o = (jobject)((java_math_MutableBigInteger *) NULL_CHECK((frame[0].o)))->F_value;
	if ((((jint)ARRAY_ACCESS(jint, sp[0].o, ((((jint)((java_math_MutableBigInteger *) NULL_CHECK((frame[0].o)))->F_offset) + ((jint)((java_math_MutableBigInteger *) NULL_CHECK((frame[0].o)))->F_intLen)) - (jint(1))))) & (jint(1))) != 0) goto label_2;
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

jbool M_java_math_MutableBigInteger_isOdd_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/math/MutableBigInteger:isOdd", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(499);
	jint temp0 = (jint)((func_java_math_MutableBigInteger_isZero_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_math_MutableBigInteger_isZero_R_boolean])(ctx, (frame[0].o));
	if (temp0 == 0) goto label_1;
	}
	INST_ICONST(0);
	goto label_2;
label_1:;
	{
	sp[0].o = (jobject)((java_math_MutableBigInteger *) NULL_CHECK((frame[0].o)))->F_value;
	if ((((jint)ARRAY_ACCESS(jint, sp[0].o, ((((jint)((java_math_MutableBigInteger *) NULL_CHECK((frame[0].o)))->F_offset) + ((jint)((java_math_MutableBigInteger *) NULL_CHECK((frame[0].o)))->F_intLen)) - (jint(1))))) & (jint(1))) != (jint(1))) goto label_3;
	}
	INST_ICONST(1);
	goto label_2;
label_3:;
	INST_ICONST(0);
label_2:;
	popStackFrame(ctx);
	INST_IRETURN();

	popStackFrame(ctx);
}

jbool M_java_math_MutableBigInteger_isNormal_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/math/MutableBigInteger:isNormal", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(508);
	jint temp0 = ((jint)((java_math_MutableBigInteger *) NULL_CHECK((frame[0].o)))->F_intLen) + ((jint)((java_math_MutableBigInteger *) NULL_CHECK((frame[0].o)))->F_offset);
	sp[0].o = (jobject)((java_math_MutableBigInteger *) NULL_CHECK((frame[0].o)))->F_value;
	if (temp0 <= (((jarray) nullCheck(ctx, sp[0].o))->length)) goto label_1;
	}
	{
	LINE_NUMBER(509);
	popStackFrame(ctx);
	return (jint(0));
	}
label_1:;
	{
	LINE_NUMBER(510);
	if (((jint)((java_math_MutableBigInteger *) NULL_CHECK((frame[0].o)))->F_intLen) != 0) goto label_3;
	}
	{
	LINE_NUMBER(511);
	popStackFrame(ctx);
	return (jint(1));
	}
label_3:;
	{
	LINE_NUMBER(512);
	sp[0].o = (jobject)((java_math_MutableBigInteger *) NULL_CHECK((frame[0].o)))->F_value;
	if (((jint)ARRAY_ACCESS(jint, sp[0].o, ((jint)((java_math_MutableBigInteger *) NULL_CHECK((frame[0].o)))->F_offset))) == 0) goto label_5;
	}
	INST_ICONST(1);
	goto label_6;
label_5:;
	INST_ICONST(0);
label_6:;
	popStackFrame(ctx);
	INST_IRETURN();

	popStackFrame(ctx);
}

jobject M_java_math_MutableBigInteger_toString_R_java_lang_String(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/math/MutableBigInteger:toString", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(519);
	sp[0].o = (jobject)((func_java_math_MutableBigInteger_toBigInteger_int_R_java_math_BigInteger) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_math_MutableBigInteger_toBigInteger_int_R_java_math_BigInteger])(ctx, (frame[0].o), (jint(1)));
	frame[1].o = sp[0].o;
	LINE_NUMBER(520);
	sp[0].o = (jobject)((func_java_math_BigInteger_toString_R_java_lang_String) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_math_BigInteger_toString_R_java_lang_String])(ctx, (frame[1].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void M_java_math_MutableBigInteger_safeRightShift_int(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/math/MutableBigInteger:safeRightShift", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(527);
	if (((frame[1].i) / (32)) < ((jint)((java_math_MutableBigInteger *) NULL_CHECK((frame[0].o)))->F_intLen)) goto label_1;
	}
	{
	LINE_NUMBER(528);
	((func_java_math_MutableBigInteger_reset) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_math_MutableBigInteger_reset])(ctx, (frame[0].o));
	goto label_3;
	}
label_1:;
	{
	LINE_NUMBER(530);
	((func_java_math_MutableBigInteger_rightShift_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_math_MutableBigInteger_rightShift_int])(ctx, (frame[0].o), (frame[1].i));
	}
label_3:;
	LINE_NUMBER(532);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_java_math_MutableBigInteger_rightShift_int(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/math/MutableBigInteger:rightShift", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(539);
	if (((jint)((java_math_MutableBigInteger *) NULL_CHECK((frame[0].o)))->F_intLen) != 0) goto label_1;
	}
	LINE_NUMBER(540);
	popStackFrame(ctx);
	INST_RETURN();
label_1:;
	{
	LINE_NUMBER(541);
	frame[2].i = (bit_cast<jint>(bit_cast<uint32_t>((frame[1].i)) >> (jint(5))));
	LINE_NUMBER(542);
	frame[3].i = ((frame[1].i) & (31));
	LINE_NUMBER(543);
	sp[0].o = frame[0].o;
	((java_math_MutableBigInteger *) NULL_CHECK(sp[0].o))->F_intLen = (((jint)((java_math_MutableBigInteger *) NULL_CHECK(sp[0].o))->F_intLen) - (frame[2].i));
	LINE_NUMBER(544);
	if ((frame[3].i) != 0) goto label_6;
	}
	LINE_NUMBER(545);
	popStackFrame(ctx);
	INST_RETURN();
label_6:;
	{
	LINE_NUMBER(546);
	sp[0].o = (jobject)((java_math_MutableBigInteger *) NULL_CHECK((frame[0].o)))->F_value;
	jint temp0 = (jint)SM_java_math_BigInteger_bitLengthForInt_int_R_int(ctx, ((jint)ARRAY_ACCESS(jint, sp[0].o, ((jint)((java_math_MutableBigInteger *) NULL_CHECK((frame[0].o)))->F_offset))));
	frame[4].i = temp0;
	LINE_NUMBER(547);
	if ((frame[3].i) < (frame[4].i)) goto label_9;
	}
	{
	LINE_NUMBER(548);
	M_java_math_MutableBigInteger_primitiveLeftShift_int(ctx, (frame[0].o), ((32) - (frame[3].i)));
	LINE_NUMBER(549);
	sp[0].o = frame[0].o;
	((java_math_MutableBigInteger *) NULL_CHECK(sp[0].o))->F_intLen = (((jint)((java_math_MutableBigInteger *) NULL_CHECK(sp[0].o))->F_intLen) - (jint(1)));
	goto label_12;
	}
label_9:;
	{
	LINE_NUMBER(551);
	M_java_math_MutableBigInteger_primitiveRightShift_int(ctx, (frame[0].o), (frame[3].i));
	}
label_12:;
	LINE_NUMBER(553);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_java_math_MutableBigInteger_safeLeftShift_int(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/math/MutableBigInteger:safeLeftShift", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(559);
	if ((frame[1].i) <= 0) goto label_1;
	}
	{
	LINE_NUMBER(560);
	((func_java_math_MutableBigInteger_leftShift_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_math_MutableBigInteger_leftShift_int])(ctx, (frame[0].o), (frame[1].i));
	}
label_1:;
	LINE_NUMBER(562);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_java_math_MutableBigInteger_leftShift_int(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[13];
	auto stack = &frame[8];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/math/MutableBigInteger:leftShift", 13 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(574);
	if (((jint)((java_math_MutableBigInteger *) NULL_CHECK((frame[0].o)))->F_intLen) != 0) goto label_1;
	}
	LINE_NUMBER(575);
	popStackFrame(ctx);
	INST_RETURN();
label_1:;
	{
	LINE_NUMBER(576);
	frame[2].i = (bit_cast<jint>(bit_cast<uint32_t>((frame[1].i)) >> (jint(5))));
	LINE_NUMBER(577);
	frame[3].i = ((frame[1].i) & (31));
	LINE_NUMBER(578);
	sp[0].o = (jobject)((java_math_MutableBigInteger *) NULL_CHECK((frame[0].o)))->F_value;
	jint temp0 = (jint)SM_java_math_BigInteger_bitLengthForInt_int_R_int(ctx, ((jint)ARRAY_ACCESS(jint, sp[0].o, ((jint)((java_math_MutableBigInteger *) NULL_CHECK((frame[0].o)))->F_offset))));
	frame[4].i = temp0;
	LINE_NUMBER(581);
	if ((frame[1].i) > ((32) - (frame[4].i))) goto label_6;
	}
	{
	LINE_NUMBER(582);
	M_java_math_MutableBigInteger_primitiveLeftShift_int(ctx, (frame[0].o), (frame[3].i));
	LINE_NUMBER(583);
	popStackFrame(ctx);
	return;
	}
label_6:;
	{
	LINE_NUMBER(586);
	frame[5].i = ((((jint)((java_math_MutableBigInteger *) NULL_CHECK((frame[0].o)))->F_intLen) + (frame[2].i)) + (jint(1)));
	LINE_NUMBER(587);
	if ((frame[3].i) > ((32) - (frame[4].i))) goto label_10;
	}
	LINE_NUMBER(588);
	INST_IINC(5, -1);
label_10:;
	{
	LINE_NUMBER(589);
	sp[0].o = (jobject)((java_math_MutableBigInteger *) NULL_CHECK((frame[0].o)))->F_value;
	if ((((jarray) nullCheck(ctx, sp[0].o))->length) >= (frame[5].i)) goto label_12;
	}
	{
	LINE_NUMBER(591);
	sp[0].o = (jobject) createArray(ctx, &class_int, (frame[5].i));
	frame[6].o = sp[0].o;
	LINE_NUMBER(592);
	frame[7].i = (jint(0));
	}
label_15:;
	{
	if ((frame[7].i) >= ((jint)((java_math_MutableBigInteger *) NULL_CHECK((frame[0].o)))->F_intLen)) goto label_16;
	}
	{
	LINE_NUMBER(593);
	sp[0].o = frame[6].o;
	jint temp0 = frame[7].i;
	sp[1].o = (jobject)((java_math_MutableBigInteger *) NULL_CHECK((frame[0].o)))->F_value;
	ARRAY_ACCESS(jint, sp[0].o, temp0) = ((jint)ARRAY_ACCESS(jint, sp[1].o, (((jint)((java_math_MutableBigInteger *) NULL_CHECK((frame[0].o)))->F_offset) + (frame[7].i))));
	LINE_NUMBER(592);
	INST_IINC(7, 1);
	goto label_15;
	}
label_16:;
	{
	LINE_NUMBER(594);
	((func_java_math_MutableBigInteger_setValue_Array1_int_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_math_MutableBigInteger_setValue_Array1_int_int])(ctx, (frame[0].o), (frame[6].o), (frame[5].i));
	LINE_NUMBER(595);
	goto label_20;
	}
label_12:;
	{
	sp[0].o = (jobject)((java_math_MutableBigInteger *) NULL_CHECK((frame[0].o)))->F_value;
	if (((((jarray) nullCheck(ctx, sp[0].o))->length) - ((jint)((java_math_MutableBigInteger *) NULL_CHECK((frame[0].o)))->F_offset)) < (frame[5].i)) goto label_21;
	}
	{
	LINE_NUMBER(597);
	frame[6].i = (jint(0));
	}
label_23:;
	{
	if ((frame[6].i) >= ((frame[5].i) - ((jint)((java_math_MutableBigInteger *) NULL_CHECK((frame[0].o)))->F_intLen))) goto label_24;
	}
	{
	LINE_NUMBER(598);
	sp[0].o = (jobject)((java_math_MutableBigInteger *) NULL_CHECK((frame[0].o)))->F_value;
	ARRAY_ACCESS(jint, sp[0].o, ((((jint)((java_math_MutableBigInteger *) NULL_CHECK((frame[0].o)))->F_offset) + ((jint)((java_math_MutableBigInteger *) NULL_CHECK((frame[0].o)))->F_intLen)) + (frame[6].i))) = (jint(0));
	LINE_NUMBER(597);
	INST_IINC(6, 1);
	goto label_23;
	}
label_24:;
	goto label_20;
label_21:;
	{
	LINE_NUMBER(601);
	frame[6].i = (jint(0));
	}
label_27:;
	{
	if ((frame[6].i) >= ((jint)((java_math_MutableBigInteger *) NULL_CHECK((frame[0].o)))->F_intLen)) goto label_28;
	}
	{
	LINE_NUMBER(602);
	sp[0].o = (jobject)((java_math_MutableBigInteger *) NULL_CHECK((frame[0].o)))->F_value;
	jint temp0 = frame[6].i;
	sp[1].o = (jobject)((java_math_MutableBigInteger *) NULL_CHECK((frame[0].o)))->F_value;
	ARRAY_ACCESS(jint, sp[0].o, temp0) = ((jint)ARRAY_ACCESS(jint, sp[1].o, (((jint)((java_math_MutableBigInteger *) NULL_CHECK((frame[0].o)))->F_offset) + (frame[6].i))));
	LINE_NUMBER(601);
	INST_IINC(6, 1);
	goto label_27;
	}
label_28:;
	{
	LINE_NUMBER(603);
	frame[6].i = ((jint)((java_math_MutableBigInteger *) NULL_CHECK((frame[0].o)))->F_intLen);
	}
label_31:;
	{
	if ((frame[6].i) >= (frame[5].i)) goto label_32;
	}
	{
	LINE_NUMBER(604);
	sp[0].o = (jobject)((java_math_MutableBigInteger *) NULL_CHECK((frame[0].o)))->F_value;
	ARRAY_ACCESS(jint, sp[0].o, (frame[6].i)) = (jint(0));
	LINE_NUMBER(603);
	INST_IINC(6, 1);
	goto label_31;
	}
label_32:;
	{
	LINE_NUMBER(605);
	((java_math_MutableBigInteger *) NULL_CHECK((frame[0].o)))->F_offset = (jint(0));
	}
label_20:;
	{
	LINE_NUMBER(607);
	((java_math_MutableBigInteger *) NULL_CHECK((frame[0].o)))->F_intLen = (frame[5].i);
	LINE_NUMBER(608);
	if ((frame[3].i) != 0) goto label_36;
	}
	LINE_NUMBER(609);
	popStackFrame(ctx);
	INST_RETURN();
label_36:;
	{
	LINE_NUMBER(610);
	if ((frame[3].i) > ((32) - (frame[4].i))) goto label_38;
	}
	{
	LINE_NUMBER(611);
	M_java_math_MutableBigInteger_primitiveLeftShift_int(ctx, (frame[0].o), (frame[3].i));
	goto label_40;
	}
label_38:;
	{
	LINE_NUMBER(613);
	M_java_math_MutableBigInteger_primitiveRightShift_int(ctx, (frame[0].o), ((32) - (frame[3].i)));
	}
label_40:;
	LINE_NUMBER(614);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jint M_java_math_MutableBigInteger_divadd_Array1_int_Array1_int_int_R_int(jcontext ctx, jobject self, jobject param0, jobject param1, jint param2) {
	NULL_CHECK(self);
	jtype frame[15];
	auto stack = &frame[9];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/math/MutableBigInteger:divadd", 15 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].i = param2;
	{
	LINE_NUMBER(622);
	frame[4].l = (jlong(0));
	LINE_NUMBER(624);
	frame[6].i = ((((jarray) nullCheck(ctx, (frame[1].o)))->length) - (jint(1)));
	}
label_2:;
	INST_ILOAD(6);
	if ((--sp)->i < 0) goto label_3;
	{
	LINE_NUMBER(625);
	frame[7].l = ((((jlong(((jint)ARRAY_ACCESS(jint, (frame[1].o), (frame[6].i))))) & (jlong(4294967295ll))) + ((jlong(((jint)ARRAY_ACCESS(jint, (frame[2].o), ((frame[6].i) + (frame[3].i)))))) & (jlong(4294967295ll)))) + (frame[4].l));
	LINE_NUMBER(627);
	ARRAY_ACCESS(jint, (frame[2].o), ((frame[6].i) + (frame[3].i))) = (jint((frame[7].l)));
	LINE_NUMBER(628);
	frame[4].l = (bit_cast<jlong>(bit_cast<uint64_t>((frame[7].l)) >> (32)));
	LINE_NUMBER(624);
	INST_IINC(6, -1);
	goto label_2;
	}
label_3:;
	{
	LINE_NUMBER(630);
	popStackFrame(ctx);
	return (jint((frame[4].l)));
	}

	popStackFrame(ctx);
}

jint M_java_math_MutableBigInteger_mulsub_Array1_int_Array1_int_int_int_int_R_int(jcontext ctx, jobject self, jobject param0, jobject param1, jint param2, jint param3, jint param4) {
	NULL_CHECK(self);
	jtype frame[23];
	auto stack = &frame[15];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/math/MutableBigInteger:mulsub", 23 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].i = param2;
	frame[4].i = param3;
	frame[5].i = param4;
	{
	LINE_NUMBER(639);
	frame[6].l = ((jlong((frame[3].i))) & (jlong(4294967295ll)));
	LINE_NUMBER(640);
	frame[8].l = (jlong(0));
	LINE_NUMBER(641);
	frame[5].i = ((frame[5].i) + (frame[4].i));
	LINE_NUMBER(643);
	frame[10].i = ((frame[4].i) - (jint(1)));
	}
label_4:;
	INST_ILOAD(10);
	if ((--sp)->i < 0) goto label_5;
	{
	LINE_NUMBER(644);
	frame[11].l = ((((jlong(((jint)ARRAY_ACCESS(jint, (frame[2].o), (frame[10].i))))) & (jlong(4294967295ll))) * (frame[6].l)) + (frame[8].l));
	LINE_NUMBER(645);
	frame[13].l = ((jlong(((jint)ARRAY_ACCESS(jint, (frame[1].o), (frame[5].i))))) - (frame[11].l));
	LINE_NUMBER(646);
	sp[0].o = frame[1].o;
	jint temp0 = frame[5].i;
	INST_IINC(5, -1);
	ARRAY_ACCESS(jint, sp[0].o, temp0) = (jint((frame[13].l)));
	LINE_NUMBER(647);
	jlong temp1 = bit_cast<jlong>(bit_cast<uint64_t>((frame[11].l)) >> (32));
	LINE_NUMBER(648);
	sp[0].l = temp1;
	sp += 1;
	if ((longCompare(((frame[13].l) & (jlong(4294967295ll))), ((jlong(((jint((frame[11].l))) ^ (jint(-1))))) & (jlong(4294967295ll))))) <= 0) goto label_11;
	}
	{
	LINE_NUMBER(649);
	jint temp0 = jint(1);
	sp[0].i = temp0;
	sp += 1;
	goto label_13;
	}
label_11:;
	INST_ICONST(0);
label_13:;
	{
	sp -= 2;
	frame[8].l = (sp[0].l + (jlong(sp[1].i)));
	LINE_NUMBER(643);
	INST_IINC(10, -1);
	goto label_4;
	}
label_5:;
	{
	LINE_NUMBER(651);
	popStackFrame(ctx);
	return (jint((frame[8].l)));
	}

	popStackFrame(ctx);
}

jint M_java_math_MutableBigInteger_mulsubBorrow_Array1_int_Array1_int_int_int_int_R_int(jcontext ctx, jobject self, jobject param0, jobject param1, jint param2, jint param3, jint param4) {
	NULL_CHECK(self);
	jtype frame[23];
	auto stack = &frame[15];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/math/MutableBigInteger:mulsubBorrow", 23 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].i = param2;
	frame[4].i = param3;
	frame[5].i = param4;
	{
	LINE_NUMBER(659);
	frame[6].l = ((jlong((frame[3].i))) & (jlong(4294967295ll)));
	LINE_NUMBER(660);
	frame[8].l = (jlong(0));
	LINE_NUMBER(661);
	frame[5].i = ((frame[5].i) + (frame[4].i));
	LINE_NUMBER(662);
	frame[10].i = ((frame[4].i) - (jint(1)));
	}
label_4:;
	INST_ILOAD(10);
	if ((--sp)->i < 0) goto label_5;
	{
	LINE_NUMBER(663);
	frame[11].l = ((((jlong(((jint)ARRAY_ACCESS(jint, (frame[2].o), (frame[10].i))))) & (jlong(4294967295ll))) * (frame[6].l)) + (frame[8].l));
	LINE_NUMBER(664);
	sp[0].o = frame[1].o;
	jint temp0 = frame[5].i;
	INST_IINC(5, -1);
	frame[13].l = ((jlong(((jint)ARRAY_ACCESS(jint, sp[0].o, temp0)))) - (frame[11].l));
	LINE_NUMBER(665);
	jlong temp1 = bit_cast<jlong>(bit_cast<uint64_t>((frame[11].l)) >> (32));
	LINE_NUMBER(666);
	sp[0].l = temp1;
	sp += 1;
	if ((longCompare(((frame[13].l) & (jlong(4294967295ll))), ((jlong(((jint((frame[11].l))) ^ (jint(-1))))) & (jlong(4294967295ll))))) <= 0) goto label_10;
	}
	{
	LINE_NUMBER(667);
	jint temp0 = jint(1);
	sp[0].i = temp0;
	sp += 1;
	goto label_12;
	}
label_10:;
	INST_ICONST(0);
label_12:;
	{
	sp -= 2;
	frame[8].l = (sp[0].l + (jlong(sp[1].i)));
	LINE_NUMBER(662);
	INST_IINC(10, -1);
	goto label_4;
	}
label_5:;
	{
	LINE_NUMBER(669);
	popStackFrame(ctx);
	return (jint((frame[8].l)));
	}

	popStackFrame(ctx);
}

void M_java_math_MutableBigInteger_primitiveRightShift_int(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[12];
	auto stack = &frame[7];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/math/MutableBigInteger:primitiveRightShift", 12 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(678);
	sp[0].o = (jobject)((java_math_MutableBigInteger *) NULL_CHECK((frame[0].o)))->F_value;
	frame[2].o = sp[0].o;
	LINE_NUMBER(679);
	frame[3].i = ((32) - (frame[1].i));
	LINE_NUMBER(680);
	frame[4].i = ((((jint)((java_math_MutableBigInteger *) NULL_CHECK((frame[0].o)))->F_offset) + ((jint)((java_math_MutableBigInteger *) NULL_CHECK((frame[0].o)))->F_intLen)) - (jint(1)));
	frame[5].i = ((jint)ARRAY_ACCESS(jint, (frame[2].o), (frame[4].i)));
	}
label_4:;
	{
	if ((frame[4].i) <= ((jint)((java_math_MutableBigInteger *) NULL_CHECK((frame[0].o)))->F_offset)) goto label_5;
	}
	{
	LINE_NUMBER(681);
	frame[6].i = (frame[5].i);
	LINE_NUMBER(682);
	frame[5].i = ((jint)ARRAY_ACCESS(jint, (frame[2].o), ((frame[4].i) - (jint(1)))));
	LINE_NUMBER(683);
	ARRAY_ACCESS(jint, (frame[2].o), (frame[4].i)) = (((frame[5].i) << (frame[3].i)) | (bit_cast<jint>(bit_cast<uint32_t>((frame[6].i)) >> (frame[1].i))));
	LINE_NUMBER(680);
	INST_IINC(4, -1);
	goto label_4;
	}
label_5:;
	{
	LINE_NUMBER(685);
	sp[0].o = frame[2].o;
	jint temp0 = (jint)((java_math_MutableBigInteger *) NULL_CHECK((frame[0].o)))->F_offset;
	ARRAY_ACCESS(jint, sp[0].o, temp0) = (bit_cast<jint>(bit_cast<uint32_t>(((jint)ARRAY_ACCESS(jint, sp[0].o, temp0))) >> (frame[1].i)));
	LINE_NUMBER(686);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_java_math_MutableBigInteger_primitiveLeftShift_int(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[13];
	auto stack = &frame[8];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/math/MutableBigInteger:primitiveLeftShift", 13 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(694);
	sp[0].o = (jobject)((java_math_MutableBigInteger *) NULL_CHECK((frame[0].o)))->F_value;
	frame[2].o = sp[0].o;
	LINE_NUMBER(695);
	frame[3].i = ((32) - (frame[1].i));
	LINE_NUMBER(696);
	frame[4].i = ((jint)((java_math_MutableBigInteger *) NULL_CHECK((frame[0].o)))->F_offset);
	frame[5].i = ((jint)ARRAY_ACCESS(jint, (frame[2].o), (frame[4].i)));
	frame[6].i = (((frame[4].i) + ((jint)((java_math_MutableBigInteger *) NULL_CHECK((frame[0].o)))->F_intLen)) - (jint(1)));
	}
label_5:;
	{
	if ((frame[4].i) >= (frame[6].i)) goto label_6;
	}
	{
	LINE_NUMBER(697);
	frame[7].i = (frame[5].i);
	LINE_NUMBER(698);
	frame[5].i = ((jint)ARRAY_ACCESS(jint, (frame[2].o), ((frame[4].i) + (jint(1)))));
	LINE_NUMBER(699);
	ARRAY_ACCESS(jint, (frame[2].o), (frame[4].i)) = (((frame[7].i) << (frame[1].i)) | (bit_cast<jint>(bit_cast<uint32_t>((frame[5].i)) >> (frame[3].i))));
	LINE_NUMBER(696);
	INST_IINC(4, 1);
	goto label_5;
	}
label_6:;
	{
	LINE_NUMBER(701);
	sp[0].o = frame[2].o;
	jint temp0 = (((jint)((java_math_MutableBigInteger *) NULL_CHECK((frame[0].o)))->F_offset) + ((jint)((java_math_MutableBigInteger *) NULL_CHECK((frame[0].o)))->F_intLen)) - (jint(1));
	ARRAY_ACCESS(jint, sp[0].o, temp0) = (((jint)ARRAY_ACCESS(jint, sp[0].o, temp0)) << (frame[1].i));
	LINE_NUMBER(702);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_java_math_MutableBigInteger_getLower_int_R_java_math_BigInteger(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[10];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/math/MutableBigInteger:getLower", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(709);
	jint temp0 = (jint)((func_java_math_MutableBigInteger_isZero_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_math_MutableBigInteger_isZero_R_boolean])(ctx, (frame[0].o));
	if (temp0 == 0) goto label_1;
	}
	{
	LINE_NUMBER(710);
	clinit_java_math_BigInteger(ctx);
	sp[0].o = (jobject)SF_java_math_BigInteger_ZERO;
	popStackFrame(ctx);
	return sp[0].o;
	}
label_1:;
	{
	LINE_NUMBER(711);
	if (((jint)((java_math_MutableBigInteger *) NULL_CHECK((frame[0].o)))->F_intLen) >= (frame[1].i)) goto label_3;
	}
	{
	LINE_NUMBER(712);
	sp[0].o = (jobject)((func_java_math_MutableBigInteger_toBigInteger_int_R_java_math_BigInteger) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_math_MutableBigInteger_toBigInteger_int_R_java_math_BigInteger])(ctx, (frame[0].o), (jint(1)));
	popStackFrame(ctx);
	return sp[0].o;
	}
label_3:;
	{
	LINE_NUMBER(715);
	frame[2].i = (frame[1].i);
	}
label_5:;
	{
	LINE_NUMBER(716);
	if ((frame[2].i) <= 0) goto label_6;
	}
	{
	sp[0].o = (jobject)((java_math_MutableBigInteger *) NULL_CHECK((frame[0].o)))->F_value;
	if (((jint)ARRAY_ACCESS(jint, sp[0].o, ((((jint)((java_math_MutableBigInteger *) NULL_CHECK((frame[0].o)))->F_offset) + ((jint)((java_math_MutableBigInteger *) NULL_CHECK((frame[0].o)))->F_intLen)) - (frame[2].i)))) != 0) goto label_6;
	}
	{
	LINE_NUMBER(717);
	INST_IINC(2, -1);
	goto label_5;
	}
label_6:;
	{
	LINE_NUMBER(718);
	if ((frame[2].i) <= 0) goto label_8;
	}
	INST_ICONST(1);
	goto label_9;
label_8:;
	INST_ICONST(0);
label_9:;
	{
	sp -= 1;
	frame[3].i = sp[0].i;
	LINE_NUMBER(719);
	clinit_java_math_BigInteger(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_math_BigInteger);
	sp[1].o = (jobject)((java_math_MutableBigInteger *) NULL_CHECK((frame[0].o)))->F_value;
	sp[1].o = (jobject)SM_java_util_Arrays_copyOfRange_Array1_int_int_int_R_Array1_int(ctx, sp[1].o, ((((jint)((java_math_MutableBigInteger *) NULL_CHECK((frame[0].o)))->F_offset) + ((jint)((java_math_MutableBigInteger *) NULL_CHECK((frame[0].o)))->F_intLen)) - (frame[2].i)), (((jint)((java_math_MutableBigInteger *) NULL_CHECK((frame[0].o)))->F_offset) + ((jint)((java_math_MutableBigInteger *) NULL_CHECK((frame[0].o)))->F_intLen)));
	init_java_math_BigInteger_Array1_int_int(ctx, sp[0].o, sp[1].o, (frame[3].i));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void M_java_math_MutableBigInteger_keepLower_int(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/math/MutableBigInteger:keepLower", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(727);
	if (((jint)((java_math_MutableBigInteger *) NULL_CHECK((frame[0].o)))->F_intLen) < (frame[1].i)) goto label_1;
	}
	{
	LINE_NUMBER(728);
	sp[0].o = frame[0].o;
	((java_math_MutableBigInteger *) NULL_CHECK(sp[0].o))->F_offset = (((jint)((java_math_MutableBigInteger *) NULL_CHECK(sp[0].o))->F_offset) + (((jint)((java_math_MutableBigInteger *) NULL_CHECK((frame[0].o)))->F_intLen) - (frame[1].i)));
	LINE_NUMBER(729);
	((java_math_MutableBigInteger *) NULL_CHECK((frame[0].o)))->F_intLen = (frame[1].i);
	}
label_1:;
	LINE_NUMBER(731);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_java_math_MutableBigInteger_add_java_math_MutableBigInteger(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[18];
	auto stack = &frame[12];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/math/MutableBigInteger:add", 18 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(739);
	frame[2].i = ((jint)((java_math_MutableBigInteger *) NULL_CHECK((frame[0].o)))->F_intLen);
	LINE_NUMBER(740);
	frame[3].i = ((jint)((java_math_MutableBigInteger *) NULL_CHECK((frame[1].o)))->F_intLen);
	LINE_NUMBER(741);
	if (((jint)((java_math_MutableBigInteger *) NULL_CHECK((frame[0].o)))->F_intLen) <= ((jint)((java_math_MutableBigInteger *) NULL_CHECK((frame[1].o)))->F_intLen)) goto label_3;
	}
	{
	jint temp0 = (jint)((java_math_MutableBigInteger *) NULL_CHECK((frame[0].o)))->F_intLen;
	sp[0].i = temp0;
	sp += 1;
	goto label_4;
	}
label_3:;
	INST_ALOAD(1);
	sp[-1].i = ((java_math_MutableBigInteger *) NULL_CHECK(sp[-1].o))->F_intLen;
label_4:;
	{
	sp -= 1;
	frame[4].i = sp[0].i;
	LINE_NUMBER(742);
	sp[0].o = (jobject)((java_math_MutableBigInteger *) NULL_CHECK((frame[0].o)))->F_value;
	if ((((jarray) nullCheck(ctx, sp[0].o))->length) >= (frame[4].i)) goto label_6;
	}
	{
	sp[0].o = (jobject) createArray(ctx, &class_int, (frame[4].i));
	sp += 1;
	goto label_7;
	}
label_6:;
	INST_ALOAD(0);
	sp[-1].o = (jobject) ((java_math_MutableBigInteger *) NULL_CHECK(sp[-1].o))->F_value;
label_7:;
	{
	sp -= 1;
	frame[5].o = sp[0].o;
	LINE_NUMBER(744);
	frame[6].i = ((((jarray) nullCheck(ctx, (frame[5].o)))->length) - (jint(1)));
	LINE_NUMBER(746);
	frame[9].l = (jlong(0));
	}
label_10:;
	{
	LINE_NUMBER(749);
	if ((frame[2].i) <= 0) goto label_11;
	}
	INST_ILOAD(3);
	if ((--sp)->i <= 0) goto label_11;
	{
	LINE_NUMBER(750);
	INST_IINC(2, -1);
	INST_IINC(3, -1);
	LINE_NUMBER(751);
	sp[0].o = (jobject)((java_math_MutableBigInteger *) NULL_CHECK((frame[0].o)))->F_value;
	jlong temp0 = (jlong(((jint)ARRAY_ACCESS(jint, sp[0].o, ((frame[2].i) + ((jint)((java_math_MutableBigInteger *) NULL_CHECK((frame[0].o)))->F_offset)))))) & (jlong(4294967295ll));
	sp[0].o = (jobject)((java_math_MutableBigInteger *) NULL_CHECK((frame[1].o)))->F_value;
	frame[7].l = ((temp0 + ((jlong(((jint)ARRAY_ACCESS(jint, sp[0].o, ((frame[3].i) + ((jint)((java_math_MutableBigInteger *) NULL_CHECK((frame[1].o)))->F_offset)))))) & (jlong(4294967295ll)))) + (frame[9].l));
	LINE_NUMBER(753);
	sp[0].o = frame[5].o;
	jint temp1 = frame[6].i;
	INST_IINC(6, -1);
	ARRAY_ACCESS(jint, sp[0].o, temp1) = (jint((frame[7].l)));
	LINE_NUMBER(754);
	frame[9].l = (bit_cast<jlong>(bit_cast<uint64_t>((frame[7].l)) >> (32)));
	goto label_10;
	}
label_11:;
	{
	LINE_NUMBER(758);
	if ((frame[2].i) <= 0) goto label_16;
	}
	{
	LINE_NUMBER(759);
	INST_IINC(2, -1);
	LINE_NUMBER(760);
	if ((longCompare((frame[9].l), (jlong(0)))) != 0) goto label_19;
	}
	{
	sp[0].o = frame[5].o;
	sp[1].o = (jobject)((java_math_MutableBigInteger *) NULL_CHECK((frame[0].o)))->F_value;
	if (sp[0].o != sp[1].o) goto label_19;
	}
	{
	if ((frame[6].i) != ((frame[2].i) + ((jint)((java_math_MutableBigInteger *) NULL_CHECK((frame[0].o)))->F_offset))) goto label_19;
	}
	LINE_NUMBER(761);
	popStackFrame(ctx);
	INST_RETURN();
label_19:;
	{
	LINE_NUMBER(762);
	sp[0].o = (jobject)((java_math_MutableBigInteger *) NULL_CHECK((frame[0].o)))->F_value;
	frame[7].l = (((jlong(((jint)ARRAY_ACCESS(jint, sp[0].o, ((frame[2].i) + ((jint)((java_math_MutableBigInteger *) NULL_CHECK((frame[0].o)))->F_offset)))))) & (jlong(4294967295ll))) + (frame[9].l));
	LINE_NUMBER(763);
	sp[0].o = frame[5].o;
	jint temp0 = frame[6].i;
	INST_IINC(6, -1);
	ARRAY_ACCESS(jint, sp[0].o, temp0) = (jint((frame[7].l)));
	LINE_NUMBER(764);
	frame[9].l = (bit_cast<jlong>(bit_cast<uint64_t>((frame[7].l)) >> (32)));
	goto label_11;
	}
label_16:;
	{
	LINE_NUMBER(766);
	if ((frame[3].i) <= 0) goto label_23;
	}
	{
	LINE_NUMBER(767);
	INST_IINC(3, -1);
	LINE_NUMBER(768);
	sp[0].o = (jobject)((java_math_MutableBigInteger *) NULL_CHECK((frame[1].o)))->F_value;
	frame[7].l = (((jlong(((jint)ARRAY_ACCESS(jint, sp[0].o, ((frame[3].i) + ((jint)((java_math_MutableBigInteger *) NULL_CHECK((frame[1].o)))->F_offset)))))) & (jlong(4294967295ll))) + (frame[9].l));
	LINE_NUMBER(769);
	sp[0].o = frame[5].o;
	jint temp0 = frame[6].i;
	INST_IINC(6, -1);
	ARRAY_ACCESS(jint, sp[0].o, temp0) = (jint((frame[7].l)));
	LINE_NUMBER(770);
	frame[9].l = (bit_cast<jlong>(bit_cast<uint64_t>((frame[7].l)) >> (32)));
	goto label_16;
	}
label_23:;
	{
	LINE_NUMBER(773);
	if ((longCompare((frame[9].l), (jlong(0)))) <= 0) goto label_28;
	}
	{
	LINE_NUMBER(774);
	INST_IINC(4, 1);
	LINE_NUMBER(775);
	if ((((jarray) nullCheck(ctx, (frame[5].o)))->length) >= (frame[4].i)) goto label_31;
	}
	{
	LINE_NUMBER(776);
	sp[0].o = (jobject) createArray(ctx, &class_int, (frame[4].i));
	frame[11].o = sp[0].o;
	LINE_NUMBER(779);
	SM_java_lang_System_arraycopy_java_lang_Object_int_java_lang_Object_int_int(ctx, (frame[5].o), (jint(0)), (frame[11].o), (jint(1)), (((jarray) nullCheck(ctx, (frame[5].o)))->length));
	LINE_NUMBER(780);
	ARRAY_ACCESS(jint, (frame[11].o), (jint(0))) = (jint(1));
	LINE_NUMBER(781);
	frame[5].o = (frame[11].o);
	LINE_NUMBER(782);
	goto label_28;
	}
label_31:;
	{
	LINE_NUMBER(783);
	sp[0].o = frame[5].o;
	jint temp0 = frame[6].i;
	INST_IINC(6, -1);
	ARRAY_ACCESS(jint, sp[0].o, temp0) = (jint(1));
	}
label_28:;
	{
	LINE_NUMBER(787);
	((java_math_MutableBigInteger *) NULL_CHECK((frame[0].o)))->F_value = (jref) (frame[5].o);
	LINE_NUMBER(788);
	((java_math_MutableBigInteger *) NULL_CHECK((frame[0].o)))->F_intLen = (frame[4].i);
	LINE_NUMBER(789);
	((java_math_MutableBigInteger *) NULL_CHECK((frame[0].o)))->F_offset = ((((jarray) nullCheck(ctx, (frame[5].o)))->length) - (frame[4].i));
	LINE_NUMBER(790);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_java_math_MutableBigInteger_addShifted_java_math_MutableBigInteger_int(jcontext ctx, jobject self, jobject param0, jint param1) {
	NULL_CHECK(self);
	jtype frame[19];
	auto stack = &frame[13];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/math/MutableBigInteger:addShifted", 19 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(798);
	jint temp0 = (jint)((func_java_math_MutableBigInteger_isZero_R_boolean) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_math_MutableBigInteger_isZero_R_boolean])(ctx, (frame[1].o));
	if (temp0 == 0) goto label_1;
	}
	LINE_NUMBER(799);
	popStackFrame(ctx);
	INST_RETURN();
label_1:;
	{
	LINE_NUMBER(802);
	frame[3].i = ((jint)((java_math_MutableBigInteger *) NULL_CHECK((frame[0].o)))->F_intLen);
	LINE_NUMBER(803);
	frame[4].i = (((jint)((java_math_MutableBigInteger *) NULL_CHECK((frame[1].o)))->F_intLen) + (frame[2].i));
	LINE_NUMBER(804);
	if (((jint)((java_math_MutableBigInteger *) NULL_CHECK((frame[0].o)))->F_intLen) <= (frame[4].i)) goto label_5;
	}
	{
	jint temp0 = (jint)((java_math_MutableBigInteger *) NULL_CHECK((frame[0].o)))->F_intLen;
	sp[0].i = temp0;
	sp += 1;
	goto label_6;
	}
label_5:;
	INST_ILOAD(4);
label_6:;
	{
	sp -= 1;
	frame[5].i = sp[0].i;
	LINE_NUMBER(805);
	sp[0].o = (jobject)((java_math_MutableBigInteger *) NULL_CHECK((frame[0].o)))->F_value;
	if ((((jarray) nullCheck(ctx, sp[0].o))->length) >= (frame[5].i)) goto label_8;
	}
	{
	sp[0].o = (jobject) createArray(ctx, &class_int, (frame[5].i));
	sp += 1;
	goto label_9;
	}
label_8:;
	INST_ALOAD(0);
	sp[-1].o = (jobject) ((java_math_MutableBigInteger *) NULL_CHECK(sp[-1].o))->F_value;
label_9:;
	{
	sp -= 1;
	frame[6].o = sp[0].o;
	LINE_NUMBER(807);
	frame[7].i = ((((jarray) nullCheck(ctx, (frame[6].o)))->length) - (jint(1)));
	LINE_NUMBER(809);
	frame[10].l = (jlong(0));
	}
label_12:;
	{
	LINE_NUMBER(812);
	if ((frame[3].i) <= 0) goto label_13;
	}
	INST_ILOAD(4);
	if ((--sp)->i <= 0) goto label_13;
	{
	LINE_NUMBER(813);
	INST_IINC(3, -1);
	INST_IINC(4, -1);
	LINE_NUMBER(814);
	jint temp0 = (frame[4].i) + ((jint)((java_math_MutableBigInteger *) NULL_CHECK((frame[1].o)))->F_offset);
	sp[0].o = (jobject)((java_math_MutableBigInteger *) NULL_CHECK((frame[1].o)))->F_value;
	if (temp0 >= (((jarray) nullCheck(ctx, sp[0].o))->length)) goto label_16;
	}
	{
	sp[0].o = (jobject)((java_math_MutableBigInteger *) NULL_CHECK((frame[1].o)))->F_value;
	jint temp0 = (jint)ARRAY_ACCESS(jint, sp[0].o, ((frame[4].i) + ((jint)((java_math_MutableBigInteger *) NULL_CHECK((frame[1].o)))->F_offset)));
	sp[0].i = temp0;
	sp += 1;
	goto label_17;
	}
label_16:;
	INST_ICONST(0);
label_17:;
	{
	sp -= 1;
	frame[12].i = sp[0].i;
	LINE_NUMBER(815);
	sp[0].o = (jobject)((java_math_MutableBigInteger *) NULL_CHECK((frame[0].o)))->F_value;
	frame[8].l = ((((jlong(((jint)ARRAY_ACCESS(jint, sp[0].o, ((frame[3].i) + ((jint)((java_math_MutableBigInteger *) NULL_CHECK((frame[0].o)))->F_offset)))))) & (jlong(4294967295ll))) + ((jlong((frame[12].i))) & (jlong(4294967295ll)))) + (frame[10].l));
	LINE_NUMBER(817);
	sp[0].o = frame[6].o;
	jint temp0 = frame[7].i;
	INST_IINC(7, -1);
	ARRAY_ACCESS(jint, sp[0].o, temp0) = (jint((frame[8].l)));
	LINE_NUMBER(818);
	frame[10].l = (bit_cast<jlong>(bit_cast<uint64_t>((frame[8].l)) >> (32)));
	LINE_NUMBER(819);
	goto label_12;
	}
label_13:;
	{
	LINE_NUMBER(822);
	if ((frame[3].i) <= 0) goto label_22;
	}
	{
	LINE_NUMBER(823);
	INST_IINC(3, -1);
	LINE_NUMBER(824);
	if ((longCompare((frame[10].l), (jlong(0)))) != 0) goto label_25;
	}
	{
	sp[0].o = frame[6].o;
	sp[1].o = (jobject)((java_math_MutableBigInteger *) NULL_CHECK((frame[0].o)))->F_value;
	if (sp[0].o != sp[1].o) goto label_25;
	}
	{
	if ((frame[7].i) != ((frame[3].i) + ((jint)((java_math_MutableBigInteger *) NULL_CHECK((frame[0].o)))->F_offset))) goto label_25;
	}
	LINE_NUMBER(825);
	popStackFrame(ctx);
	INST_RETURN();
label_25:;
	{
	LINE_NUMBER(827);
	sp[0].o = (jobject)((java_math_MutableBigInteger *) NULL_CHECK((frame[0].o)))->F_value;
	frame[8].l = (((jlong(((jint)ARRAY_ACCESS(jint, sp[0].o, ((frame[3].i) + ((jint)((java_math_MutableBigInteger *) NULL_CHECK((frame[0].o)))->F_offset)))))) & (jlong(4294967295ll))) + (frame[10].l));
	LINE_NUMBER(828);
	sp[0].o = frame[6].o;
	jint temp0 = frame[7].i;
	INST_IINC(7, -1);
	ARRAY_ACCESS(jint, sp[0].o, temp0) = (jint((frame[8].l)));
	LINE_NUMBER(829);
	frame[10].l = (bit_cast<jlong>(bit_cast<uint64_t>((frame[8].l)) >> (32)));
	goto label_13;
	}
label_22:;
	{
	LINE_NUMBER(831);
	if ((frame[4].i) <= 0) goto label_29;
	}
	{
	LINE_NUMBER(832);
	INST_IINC(4, -1);
	LINE_NUMBER(833);
	jint temp0 = (frame[4].i) + ((jint)((java_math_MutableBigInteger *) NULL_CHECK((frame[1].o)))->F_offset);
	sp[0].o = (jobject)((java_math_MutableBigInteger *) NULL_CHECK((frame[1].o)))->F_value;
	if (temp0 >= (((jarray) nullCheck(ctx, sp[0].o))->length)) goto label_32;
	}
	{
	sp[0].o = (jobject)((java_math_MutableBigInteger *) NULL_CHECK((frame[1].o)))->F_value;
	jint temp0 = (jint)ARRAY_ACCESS(jint, sp[0].o, ((frame[4].i) + ((jint)((java_math_MutableBigInteger *) NULL_CHECK((frame[1].o)))->F_offset)));
	sp[0].i = temp0;
	sp += 1;
	goto label_33;
	}
label_32:;
	INST_ICONST(0);
label_33:;
	{
	sp -= 1;
	frame[12].i = sp[0].i;
	LINE_NUMBER(834);
	frame[8].l = (((jlong((frame[12].i))) & (jlong(4294967295ll))) + (frame[10].l));
	LINE_NUMBER(835);
	sp[0].o = frame[6].o;
	jint temp0 = frame[7].i;
	INST_IINC(7, -1);
	ARRAY_ACCESS(jint, sp[0].o, temp0) = (jint((frame[8].l)));
	LINE_NUMBER(836);
	frame[10].l = (bit_cast<jlong>(bit_cast<uint64_t>((frame[8].l)) >> (32)));
	LINE_NUMBER(837);
	goto label_22;
	}
label_29:;
	{
	LINE_NUMBER(839);
	if ((longCompare((frame[10].l), (jlong(0)))) <= 0) goto label_38;
	}
	{
	LINE_NUMBER(840);
	INST_IINC(5, 1);
	LINE_NUMBER(841);
	if ((((jarray) nullCheck(ctx, (frame[6].o)))->length) >= (frame[5].i)) goto label_41;
	}
	{
	LINE_NUMBER(842);
	sp[0].o = (jobject) createArray(ctx, &class_int, (frame[5].i));
	frame[12].o = sp[0].o;
	LINE_NUMBER(845);
	SM_java_lang_System_arraycopy_java_lang_Object_int_java_lang_Object_int_int(ctx, (frame[6].o), (jint(0)), (frame[12].o), (jint(1)), (((jarray) nullCheck(ctx, (frame[6].o)))->length));
	LINE_NUMBER(846);
	ARRAY_ACCESS(jint, (frame[12].o), (jint(0))) = (jint(1));
	LINE_NUMBER(847);
	frame[6].o = (frame[12].o);
	LINE_NUMBER(848);
	goto label_38;
	}
label_41:;
	{
	LINE_NUMBER(849);
	sp[0].o = frame[6].o;
	jint temp0 = frame[7].i;
	INST_IINC(7, -1);
	ARRAY_ACCESS(jint, sp[0].o, temp0) = (jint(1));
	}
label_38:;
	{
	LINE_NUMBER(853);
	((java_math_MutableBigInteger *) NULL_CHECK((frame[0].o)))->F_value = (jref) (frame[6].o);
	LINE_NUMBER(854);
	((java_math_MutableBigInteger *) NULL_CHECK((frame[0].o)))->F_intLen = (frame[5].i);
	LINE_NUMBER(855);
	((java_math_MutableBigInteger *) NULL_CHECK((frame[0].o)))->F_offset = ((((jarray) nullCheck(ctx, (frame[6].o)))->length) - (frame[5].i));
	LINE_NUMBER(856);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_java_math_MutableBigInteger_addDisjoint_java_math_MutableBigInteger_int(jcontext ctx, jobject self, jobject param0, jint param1) {
	NULL_CHECK(self);
	jtype frame[15];
	auto stack = &frame[10];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/math/MutableBigInteger:addDisjoint", 15 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(864);
	jint temp0 = (jint)((func_java_math_MutableBigInteger_isZero_R_boolean) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_math_MutableBigInteger_isZero_R_boolean])(ctx, (frame[1].o));
	if (temp0 == 0) goto label_1;
	}
	LINE_NUMBER(865);
	popStackFrame(ctx);
	INST_RETURN();
label_1:;
	{
	LINE_NUMBER(867);
	frame[3].i = ((jint)((java_math_MutableBigInteger *) NULL_CHECK((frame[0].o)))->F_intLen);
	LINE_NUMBER(868);
	frame[4].i = (((jint)((java_math_MutableBigInteger *) NULL_CHECK((frame[1].o)))->F_intLen) + (frame[2].i));
	LINE_NUMBER(869);
	if (((jint)((java_math_MutableBigInteger *) NULL_CHECK((frame[0].o)))->F_intLen) <= (frame[4].i)) goto label_5;
	}
	{
	jint temp0 = (jint)((java_math_MutableBigInteger *) NULL_CHECK((frame[0].o)))->F_intLen;
	sp[0].i = temp0;
	sp += 1;
	goto label_6;
	}
label_5:;
	INST_ILOAD(4);
label_6:;
	{
	sp -= 1;
	frame[5].i = sp[0].i;
	LINE_NUMBER(871);
	sp[0].o = (jobject)((java_math_MutableBigInteger *) NULL_CHECK((frame[0].o)))->F_value;
	if ((((jarray) nullCheck(ctx, sp[0].o))->length) >= (frame[5].i)) goto label_8;
	}
	{
	LINE_NUMBER(872);
	sp[0].o = (jobject) createArray(ctx, &class_int, (frame[5].i));
	frame[6].o = sp[0].o;
	goto label_11;
	}
label_8:;
	{
	LINE_NUMBER(874);
	sp[0].o = (jobject)((java_math_MutableBigInteger *) NULL_CHECK((frame[0].o)))->F_value;
	frame[6].o = sp[0].o;
	LINE_NUMBER(875);
	sp[0].o = (jobject)((java_math_MutableBigInteger *) NULL_CHECK((frame[0].o)))->F_value;
	jint temp0 = ((jint)((java_math_MutableBigInteger *) NULL_CHECK((frame[0].o)))->F_offset) + ((jint)((java_math_MutableBigInteger *) NULL_CHECK((frame[0].o)))->F_intLen);
	sp[1].o = (jobject)((java_math_MutableBigInteger *) NULL_CHECK((frame[0].o)))->F_value;
	SM_java_util_Arrays_fill_Array1_int_int_int_int(ctx, sp[0].o, temp0, (((jarray) nullCheck(ctx, sp[1].o))->length), (jint(0)));
	}
label_11:;
	{
	LINE_NUMBER(878);
	frame[7].i = ((((jarray) nullCheck(ctx, (frame[6].o)))->length) - (jint(1)));
	LINE_NUMBER(881);
	sp[0].o = (jobject)((java_math_MutableBigInteger *) NULL_CHECK((frame[0].o)))->F_value;
	SM_java_lang_System_arraycopy_java_lang_Object_int_java_lang_Object_int_int(ctx, sp[0].o, ((jint)((java_math_MutableBigInteger *) NULL_CHECK((frame[0].o)))->F_offset), (frame[6].o), (((frame[7].i) + (jint(1))) - (frame[3].i)), (frame[3].i));
	LINE_NUMBER(882);
	frame[4].i = ((frame[4].i) - (frame[3].i));
	LINE_NUMBER(883);
	frame[7].i = ((frame[7].i) - (frame[3].i));
	LINE_NUMBER(885);
	jint temp0 = frame[4].i;
	sp[0].o = (jobject)((java_math_MutableBigInteger *) NULL_CHECK((frame[1].o)))->F_value;
	jint temp1 = (jint)SM_java_lang_Math_min_int_int_R_int(ctx, temp0, ((((jarray) nullCheck(ctx, sp[0].o))->length) - ((jint)((java_math_MutableBigInteger *) NULL_CHECK((frame[1].o)))->F_offset)));
	frame[8].i = temp1;
	LINE_NUMBER(886);
	sp[0].o = (jobject)((java_math_MutableBigInteger *) NULL_CHECK((frame[1].o)))->F_value;
	SM_java_lang_System_arraycopy_java_lang_Object_int_java_lang_Object_int_int(ctx, sp[0].o, ((jint)((java_math_MutableBigInteger *) NULL_CHECK((frame[1].o)))->F_offset), (frame[6].o), (((frame[7].i) + (jint(1))) - (frame[4].i)), (frame[8].i));
	LINE_NUMBER(889);
	frame[9].i = ((((frame[7].i) + (jint(1))) - (frame[4].i)) + (frame[8].i));
	}
label_19:;
	{
	if ((frame[9].i) >= ((frame[7].i) + (jint(1)))) goto label_20;
	}
	{
	LINE_NUMBER(890);
	ARRAY_ACCESS(jint, (frame[6].o), (frame[9].i)) = (jint(0));
	LINE_NUMBER(889);
	INST_IINC(9, 1);
	goto label_19;
	}
label_20:;
	{
	LINE_NUMBER(892);
	((java_math_MutableBigInteger *) NULL_CHECK((frame[0].o)))->F_value = (jref) (frame[6].o);
	LINE_NUMBER(893);
	((java_math_MutableBigInteger *) NULL_CHECK((frame[0].o)))->F_intLen = (frame[5].i);
	LINE_NUMBER(894);
	((java_math_MutableBigInteger *) NULL_CHECK((frame[0].o)))->F_offset = ((((jarray) nullCheck(ctx, (frame[6].o)))->length) - (frame[5].i));
	LINE_NUMBER(895);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_java_math_MutableBigInteger_addLower_java_math_MutableBigInteger_int(jcontext ctx, jobject self, jobject param0, jint param1) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/math/MutableBigInteger:addLower", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(901);
	clinit_java_math_MutableBigInteger(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_math_MutableBigInteger);
	init_java_math_MutableBigInteger_java_math_MutableBigInteger(ctx, sp[0].o, (frame[1].o));
	frame[3].o = sp[0].o;
	LINE_NUMBER(902);
	if ((((jint)((java_math_MutableBigInteger *) NULL_CHECK((frame[3].o)))->F_offset) + ((jint)((java_math_MutableBigInteger *) NULL_CHECK((frame[3].o)))->F_intLen)) < (frame[2].i)) goto label_2;
	}
	{
	LINE_NUMBER(903);
	((java_math_MutableBigInteger *) NULL_CHECK((frame[3].o)))->F_offset = ((((jint)((java_math_MutableBigInteger *) NULL_CHECK((frame[3].o)))->F_offset) + ((jint)((java_math_MutableBigInteger *) NULL_CHECK((frame[3].o)))->F_intLen)) - (frame[2].i));
	LINE_NUMBER(904);
	((java_math_MutableBigInteger *) NULL_CHECK((frame[3].o)))->F_intLen = (frame[2].i);
	}
label_2:;
	{
	LINE_NUMBER(906);
	((func_java_math_MutableBigInteger_normalize) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_java_math_MutableBigInteger_normalize])(ctx, (frame[3].o));
	LINE_NUMBER(907);
	((func_java_math_MutableBigInteger_add_java_math_MutableBigInteger) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_math_MutableBigInteger_add_java_math_MutableBigInteger])(ctx, (frame[0].o), (frame[3].o));
	LINE_NUMBER(908);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jint M_java_math_MutableBigInteger_subtract_java_math_MutableBigInteger_R_int(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[17];
	auto stack = &frame[11];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/math/MutableBigInteger:subtract", 17 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(915);
	frame[2].o = (frame[0].o);
	LINE_NUMBER(917);
	sp[0].o = (jobject)((java_math_MutableBigInteger *) NULL_CHECK((frame[0].o)))->F_value;
	frame[3].o = sp[0].o;
	LINE_NUMBER(918);
	jint temp0 = (jint)((func_java_math_MutableBigInteger_compare_java_math_MutableBigInteger_R_int) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_java_math_MutableBigInteger_compare_java_math_MutableBigInteger_R_int])(ctx, (frame[2].o), (frame[1].o));
	frame[4].i = temp0;
	LINE_NUMBER(920);
	if ((frame[4].i) != 0) goto label_4;
	}
	{
	LINE_NUMBER(921);
	((func_java_math_MutableBigInteger_reset) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_math_MutableBigInteger_reset])(ctx, (frame[0].o));
	LINE_NUMBER(922);
	popStackFrame(ctx);
	return (jint(0));
	}
label_4:;
	{
	LINE_NUMBER(924);
	if ((frame[4].i) >= 0) goto label_7;
	}
	{
	LINE_NUMBER(925);
	frame[5].o = (frame[2].o);
	LINE_NUMBER(926);
	frame[2].o = (frame[1].o);
	LINE_NUMBER(927);
	frame[1].o = (frame[5].o);
	}
label_7:;
	{
	LINE_NUMBER(930);
	frame[5].i = ((jint)((java_math_MutableBigInteger *) NULL_CHECK((frame[2].o)))->F_intLen);
	LINE_NUMBER(931);
	if ((((jarray) nullCheck(ctx, (frame[3].o)))->length) >= (frame[5].i)) goto label_12;
	}
	{
	LINE_NUMBER(932);
	sp[0].o = (jobject) createArray(ctx, &class_int, (frame[5].i));
	frame[3].o = sp[0].o;
	}
label_12:;
	{
	LINE_NUMBER(934);
	frame[6].l = (jlong(0));
	LINE_NUMBER(935);
	frame[8].i = ((jint)((java_math_MutableBigInteger *) NULL_CHECK((frame[2].o)))->F_intLen);
	LINE_NUMBER(936);
	frame[9].i = ((jint)((java_math_MutableBigInteger *) NULL_CHECK((frame[1].o)))->F_intLen);
	LINE_NUMBER(937);
	frame[10].i = ((((jarray) nullCheck(ctx, (frame[3].o)))->length) - (jint(1)));
	}
label_17:;
	{
	LINE_NUMBER(940);
	if ((frame[9].i) <= 0) goto label_18;
	}
	{
	LINE_NUMBER(941);
	INST_IINC(8, -1);
	INST_IINC(9, -1);
	LINE_NUMBER(943);
	sp[0].o = (jobject)((java_math_MutableBigInteger *) NULL_CHECK((frame[2].o)))->F_value;
	jlong temp0 = (jlong(((jint)ARRAY_ACCESS(jint, sp[0].o, ((frame[8].i) + ((jint)((java_math_MutableBigInteger *) NULL_CHECK((frame[2].o)))->F_offset)))))) & (jlong(4294967295ll));
	sp[0].o = (jobject)((java_math_MutableBigInteger *) NULL_CHECK((frame[1].o)))->F_value;
	frame[6].l = ((temp0 - ((jlong(((jint)ARRAY_ACCESS(jint, sp[0].o, ((frame[9].i) + ((jint)((java_math_MutableBigInteger *) NULL_CHECK((frame[1].o)))->F_offset)))))) & (jlong(4294967295ll)))) - (jlong((jint((-((frame[6].l) >> (32))))))));
	LINE_NUMBER(945);
	sp[0].o = frame[3].o;
	jint temp1 = frame[10].i;
	INST_IINC(10, -1);
	ARRAY_ACCESS(jint, sp[0].o, temp1) = (jint((frame[6].l)));
	goto label_17;
	}
label_18:;
	{
	LINE_NUMBER(948);
	if ((frame[8].i) <= 0) goto label_22;
	}
	{
	LINE_NUMBER(949);
	INST_IINC(8, -1);
	LINE_NUMBER(950);
	sp[0].o = (jobject)((java_math_MutableBigInteger *) NULL_CHECK((frame[2].o)))->F_value;
	frame[6].l = (((jlong(((jint)ARRAY_ACCESS(jint, sp[0].o, ((frame[8].i) + ((jint)((java_math_MutableBigInteger *) NULL_CHECK((frame[2].o)))->F_offset)))))) & (jlong(4294967295ll))) - (jlong((jint((-((frame[6].l) >> (32))))))));
	LINE_NUMBER(951);
	sp[0].o = frame[3].o;
	jint temp0 = frame[10].i;
	INST_IINC(10, -1);
	ARRAY_ACCESS(jint, sp[0].o, temp0) = (jint((frame[6].l)));
	goto label_18;
	}
label_22:;
	{
	LINE_NUMBER(954);
	((java_math_MutableBigInteger *) NULL_CHECK((frame[0].o)))->F_value = (jref) (frame[3].o);
	LINE_NUMBER(955);
	((java_math_MutableBigInteger *) NULL_CHECK((frame[0].o)))->F_intLen = (frame[5].i);
	LINE_NUMBER(956);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((java_math_MutableBigInteger *) NULL_CHECK((frame[0].o)))->F_value;
	((java_math_MutableBigInteger *) NULL_CHECK(sp[0].o))->F_offset = ((((jarray) nullCheck(ctx, sp[1].o))->length) - (frame[5].i));
	LINE_NUMBER(957);
	((func_java_math_MutableBigInteger_normalize) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_math_MutableBigInteger_normalize])(ctx, (frame[0].o));
	LINE_NUMBER(958);
	popStackFrame(ctx);
	return (frame[4].i);
	}

	popStackFrame(ctx);
}

jint M_java_math_MutableBigInteger_difference_java_math_MutableBigInteger_R_int(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[14];
	auto stack = &frame[8];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/math/MutableBigInteger:difference", 14 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(967);
	frame[2].o = (frame[0].o);
	LINE_NUMBER(968);
	jint temp0 = (jint)((func_java_math_MutableBigInteger_compare_java_math_MutableBigInteger_R_int) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_java_math_MutableBigInteger_compare_java_math_MutableBigInteger_R_int])(ctx, (frame[2].o), (frame[1].o));
	frame[3].i = temp0;
	LINE_NUMBER(969);
	if ((frame[3].i) != 0) goto label_3;
	}
	{
	LINE_NUMBER(970);
	popStackFrame(ctx);
	return (jint(0));
	}
label_3:;
	{
	LINE_NUMBER(971);
	if ((frame[3].i) >= 0) goto label_5;
	}
	{
	LINE_NUMBER(972);
	frame[4].o = (frame[2].o);
	LINE_NUMBER(973);
	frame[2].o = (frame[1].o);
	LINE_NUMBER(974);
	frame[1].o = (frame[4].o);
	}
label_5:;
	{
	LINE_NUMBER(977);
	frame[4].l = (jlong(0));
	LINE_NUMBER(978);
	frame[6].i = ((jint)((java_math_MutableBigInteger *) NULL_CHECK((frame[2].o)))->F_intLen);
	LINE_NUMBER(979);
	frame[7].i = ((jint)((java_math_MutableBigInteger *) NULL_CHECK((frame[1].o)))->F_intLen);
	}
label_11:;
	{
	LINE_NUMBER(982);
	if ((frame[7].i) <= 0) goto label_12;
	}
	{
	LINE_NUMBER(983);
	INST_IINC(6, -1);
	INST_IINC(7, -1);
	LINE_NUMBER(984);
	sp[0].o = (jobject)((java_math_MutableBigInteger *) NULL_CHECK((frame[2].o)))->F_value;
	jlong temp0 = (jlong(((jint)ARRAY_ACCESS(jint, sp[0].o, (((jint)((java_math_MutableBigInteger *) NULL_CHECK((frame[2].o)))->F_offset) + (frame[6].i)))))) & (jlong(4294967295ll));
	sp[0].o = (jobject)((java_math_MutableBigInteger *) NULL_CHECK((frame[1].o)))->F_value;
	frame[4].l = ((temp0 - ((jlong(((jint)ARRAY_ACCESS(jint, sp[0].o, (((jint)((java_math_MutableBigInteger *) NULL_CHECK((frame[1].o)))->F_offset) + (frame[7].i)))))) & (jlong(4294967295ll)))) - (jlong((jint((-((frame[4].l) >> (32))))))));
	LINE_NUMBER(986);
	sp[0].o = (jobject)((java_math_MutableBigInteger *) NULL_CHECK((frame[2].o)))->F_value;
	ARRAY_ACCESS(jint, sp[0].o, (((jint)((java_math_MutableBigInteger *) NULL_CHECK((frame[2].o)))->F_offset) + (frame[6].i))) = (jint((frame[4].l)));
	goto label_11;
	}
label_12:;
	{
	LINE_NUMBER(989);
	if ((frame[6].i) <= 0) goto label_16;
	}
	{
	LINE_NUMBER(990);
	INST_IINC(6, -1);
	LINE_NUMBER(991);
	sp[0].o = (jobject)((java_math_MutableBigInteger *) NULL_CHECK((frame[2].o)))->F_value;
	frame[4].l = (((jlong(((jint)ARRAY_ACCESS(jint, sp[0].o, (((jint)((java_math_MutableBigInteger *) NULL_CHECK((frame[2].o)))->F_offset) + (frame[6].i)))))) & (jlong(4294967295ll))) - (jlong((jint((-((frame[4].l) >> (32))))))));
	LINE_NUMBER(992);
	sp[0].o = (jobject)((java_math_MutableBigInteger *) NULL_CHECK((frame[2].o)))->F_value;
	ARRAY_ACCESS(jint, sp[0].o, (((jint)((java_math_MutableBigInteger *) NULL_CHECK((frame[2].o)))->F_offset) + (frame[6].i))) = (jint((frame[4].l)));
	goto label_12;
	}
label_16:;
	{
	LINE_NUMBER(995);
	((func_java_math_MutableBigInteger_normalize) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_java_math_MutableBigInteger_normalize])(ctx, (frame[2].o));
	LINE_NUMBER(996);
	popStackFrame(ctx);
	return (frame[3].i);
	}

	popStackFrame(ctx);
}

void M_java_math_MutableBigInteger_multiply_java_math_MutableBigInteger_java_math_MutableBigInteger(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[19];
	auto stack = &frame[13];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/math/MutableBigInteger:multiply", 19 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(1004);
	frame[3].i = ((jint)((java_math_MutableBigInteger *) NULL_CHECK((frame[0].o)))->F_intLen);
	LINE_NUMBER(1005);
	frame[4].i = ((jint)((java_math_MutableBigInteger *) NULL_CHECK((frame[1].o)))->F_intLen);
	LINE_NUMBER(1006);
	frame[5].i = ((frame[3].i) + (frame[4].i));
	LINE_NUMBER(1009);
	sp[0].o = (jobject)((java_math_MutableBigInteger *) NULL_CHECK((frame[2].o)))->F_value;
	if ((((jarray) nullCheck(ctx, sp[0].o))->length) >= (frame[5].i)) goto label_4;
	}
	{
	LINE_NUMBER(1010);
	sp[0].o = frame[2].o;
	sp[1].o = (jobject) createArray(ctx, &class_int, (frame[5].i));
	((java_math_MutableBigInteger *) NULL_CHECK(sp[0].o))->F_value = (jref) sp[1].o;
	}
label_4:;
	{
	LINE_NUMBER(1011);
	((java_math_MutableBigInteger *) NULL_CHECK((frame[2].o)))->F_offset = (jint(0));
	LINE_NUMBER(1012);
	((java_math_MutableBigInteger *) NULL_CHECK((frame[2].o)))->F_intLen = (frame[5].i);
	LINE_NUMBER(1015);
	frame[6].l = (jlong(0));
	LINE_NUMBER(1016);
	frame[8].i = ((frame[4].i) - (jint(1)));
	frame[9].i = (((frame[4].i) + (frame[3].i)) - (jint(1)));
	}
label_10:;
	INST_ILOAD(8);
	if ((--sp)->i < 0) goto label_11;
	{
	LINE_NUMBER(1017);
	sp[0].o = (jobject)((java_math_MutableBigInteger *) NULL_CHECK((frame[1].o)))->F_value;
	jlong temp0 = (jlong(((jint)ARRAY_ACCESS(jint, sp[0].o, ((frame[8].i) + ((jint)((java_math_MutableBigInteger *) NULL_CHECK((frame[1].o)))->F_offset)))))) & (jlong(4294967295ll));
	sp[0].o = (jobject)((java_math_MutableBigInteger *) NULL_CHECK((frame[0].o)))->F_value;
	frame[10].l = ((temp0 * ((jlong(((jint)ARRAY_ACCESS(jint, sp[0].o, (((frame[3].i) - (jint(1))) + ((jint)((java_math_MutableBigInteger *) NULL_CHECK((frame[0].o)))->F_offset)))))) & (jlong(4294967295ll)))) + (frame[6].l));
	LINE_NUMBER(1019);
	sp[0].o = (jobject)((java_math_MutableBigInteger *) NULL_CHECK((frame[2].o)))->F_value;
	ARRAY_ACCESS(jint, sp[0].o, (frame[9].i)) = (jint((frame[10].l)));
	LINE_NUMBER(1020);
	frame[6].l = (bit_cast<jlong>(bit_cast<uint64_t>((frame[10].l)) >> (32)));
	LINE_NUMBER(1016);
	INST_IINC(8, -1);
	INST_IINC(9, -1);
	goto label_10;
	}
label_11:;
	{
	LINE_NUMBER(1022);
	sp[0].o = (jobject)((java_math_MutableBigInteger *) NULL_CHECK((frame[2].o)))->F_value;
	ARRAY_ACCESS(jint, sp[0].o, ((frame[3].i) - (jint(1)))) = (jint((frame[6].l)));
	LINE_NUMBER(1025);
	frame[8].i = ((frame[3].i) - (jint(2)));
	}
label_17:;
	INST_ILOAD(8);
	if ((--sp)->i < 0) goto label_18;
	{
	LINE_NUMBER(1026);
	frame[6].l = (jlong(0));
	LINE_NUMBER(1027);
	frame[9].i = ((frame[4].i) - (jint(1)));
	frame[10].i = ((frame[4].i) + (frame[8].i));
	}
label_22:;
	INST_ILOAD(9);
	if ((--sp)->i < 0) goto label_23;
	{
	LINE_NUMBER(1028);
	sp[0].o = (jobject)((java_math_MutableBigInteger *) NULL_CHECK((frame[1].o)))->F_value;
	jlong temp0 = (jlong(((jint)ARRAY_ACCESS(jint, sp[0].o, ((frame[9].i) + ((jint)((java_math_MutableBigInteger *) NULL_CHECK((frame[1].o)))->F_offset)))))) & (jlong(4294967295ll));
	sp[0].o = (jobject)((java_math_MutableBigInteger *) NULL_CHECK((frame[0].o)))->F_value;
	jlong temp1 = temp0 * ((jlong(((jint)ARRAY_ACCESS(jint, sp[0].o, ((frame[8].i) + ((jint)((java_math_MutableBigInteger *) NULL_CHECK((frame[0].o)))->F_offset)))))) & (jlong(4294967295ll)));
	sp[0].o = (jobject)((java_math_MutableBigInteger *) NULL_CHECK((frame[2].o)))->F_value;
	frame[11].l = ((temp1 + ((jlong(((jint)ARRAY_ACCESS(jint, sp[0].o, (frame[10].i))))) & (jlong(4294967295ll)))) + (frame[6].l));
	LINE_NUMBER(1031);
	sp[0].o = (jobject)((java_math_MutableBigInteger *) NULL_CHECK((frame[2].o)))->F_value;
	ARRAY_ACCESS(jint, sp[0].o, (frame[10].i)) = (jint((frame[11].l)));
	LINE_NUMBER(1032);
	frame[6].l = (bit_cast<jlong>(bit_cast<uint64_t>((frame[11].l)) >> (32)));
	LINE_NUMBER(1027);
	INST_IINC(9, -1);
	INST_IINC(10, -1);
	goto label_22;
	}
label_23:;
	{
	LINE_NUMBER(1034);
	sp[0].o = (jobject)((java_math_MutableBigInteger *) NULL_CHECK((frame[2].o)))->F_value;
	ARRAY_ACCESS(jint, sp[0].o, (frame[8].i)) = (jint((frame[6].l)));
	LINE_NUMBER(1025);
	INST_IINC(8, -1);
	goto label_17;
	}
label_18:;
	{
	LINE_NUMBER(1038);
	((func_java_math_MutableBigInteger_normalize) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_java_math_MutableBigInteger_normalize])(ctx, (frame[2].o));
	LINE_NUMBER(1039);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_java_math_MutableBigInteger_mul_int_java_math_MutableBigInteger(jcontext ctx, jobject self, jint param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[17];
	auto stack = &frame[11];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/math/MutableBigInteger:mul", 17 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(1046);
	if ((frame[1].i) != (jint(1))) goto label_1;
	}
	{
	LINE_NUMBER(1047);
	((func_java_math_MutableBigInteger_copyValue_java_math_MutableBigInteger) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_java_math_MutableBigInteger_copyValue_java_math_MutableBigInteger])(ctx, (frame[2].o), (frame[0].o));
	LINE_NUMBER(1048);
	popStackFrame(ctx);
	return;
	}
label_1:;
	{
	LINE_NUMBER(1051);
	if ((frame[1].i) != 0) goto label_4;
	}
	{
	LINE_NUMBER(1052);
	((func_java_math_MutableBigInteger_clear) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_java_math_MutableBigInteger_clear])(ctx, (frame[2].o));
	LINE_NUMBER(1053);
	popStackFrame(ctx);
	return;
	}
label_4:;
	{
	LINE_NUMBER(1057);
	frame[3].l = ((jlong((frame[1].i))) & (jlong(4294967295ll)));
	LINE_NUMBER(1058);
	sp[0].o = (jobject)((java_math_MutableBigInteger *) NULL_CHECK((frame[2].o)))->F_value;
	if ((((jarray) nullCheck(ctx, sp[0].o))->length) >= (((jint)((java_math_MutableBigInteger *) NULL_CHECK((frame[0].o)))->F_intLen) + (jint(1)))) goto label_8;
	}
	{
	sp[0].o = (jobject) createArray(ctx, &class_int, (((jint)((java_math_MutableBigInteger *) NULL_CHECK((frame[0].o)))->F_intLen) + (jint(1))));
	sp += 1;
	goto label_9;
	}
label_8:;
	{
	LINE_NUMBER(1059);
	sp[0].o = (jobject)((java_math_MutableBigInteger *) NULL_CHECK((frame[2].o)))->F_value;
	sp += 1;
	}
label_9:;
	{
	sp -= 1;
	frame[5].o = sp[0].o;
	LINE_NUMBER(1060);
	frame[6].l = (jlong(0));
	LINE_NUMBER(1061);
	frame[8].i = (((jint)((java_math_MutableBigInteger *) NULL_CHECK((frame[0].o)))->F_intLen) - (jint(1)));
	}
label_12:;
	INST_ILOAD(8);
	if ((--sp)->i < 0) goto label_13;
	{
	LINE_NUMBER(1062);
	jlong temp0 = frame[3].l;
	sp[0].o = (jobject)((java_math_MutableBigInteger *) NULL_CHECK((frame[0].o)))->F_value;
	frame[9].l = ((temp0 * ((jlong(((jint)ARRAY_ACCESS(jint, sp[0].o, ((frame[8].i) + ((jint)((java_math_MutableBigInteger *) NULL_CHECK((frame[0].o)))->F_offset)))))) & (jlong(4294967295ll)))) + (frame[6].l));
	LINE_NUMBER(1063);
	ARRAY_ACCESS(jint, (frame[5].o), ((frame[8].i) + (jint(1)))) = (jint((frame[9].l)));
	LINE_NUMBER(1064);
	frame[6].l = (bit_cast<jlong>(bit_cast<uint64_t>((frame[9].l)) >> (32)));
	LINE_NUMBER(1061);
	INST_IINC(8, -1);
	goto label_12;
	}
label_13:;
	{
	LINE_NUMBER(1067);
	if ((longCompare((frame[6].l), (jlong(0)))) != 0) goto label_18;
	}
	{
	LINE_NUMBER(1068);
	((java_math_MutableBigInteger *) NULL_CHECK((frame[2].o)))->F_offset = (jint(1));
	LINE_NUMBER(1069);
	((java_math_MutableBigInteger *) NULL_CHECK((frame[2].o)))->F_intLen = ((jint)((java_math_MutableBigInteger *) NULL_CHECK((frame[0].o)))->F_intLen);
	goto label_21;
	}
label_18:;
	{
	LINE_NUMBER(1071);
	((java_math_MutableBigInteger *) NULL_CHECK((frame[2].o)))->F_offset = (jint(0));
	LINE_NUMBER(1072);
	((java_math_MutableBigInteger *) NULL_CHECK((frame[2].o)))->F_intLen = (((jint)((java_math_MutableBigInteger *) NULL_CHECK((frame[0].o)))->F_intLen) + (jint(1)));
	LINE_NUMBER(1073);
	ARRAY_ACCESS(jint, (frame[5].o), (jint(0))) = (jint((frame[6].l)));
	}
label_21:;
	{
	LINE_NUMBER(1075);
	((java_math_MutableBigInteger *) NULL_CHECK((frame[2].o)))->F_value = (jref) (frame[5].o);
	LINE_NUMBER(1076);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jint M_java_math_MutableBigInteger_divideOneWord_int_java_math_MutableBigInteger_R_int(jcontext ctx, jobject self, jint param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[21];
	auto stack = &frame[15];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/math/MutableBigInteger:divideOneWord", 21 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(1087);
	frame[3].l = ((jlong((frame[1].i))) & (jlong(4294967295ll)));
	LINE_NUMBER(1090);
	if (((jint)((java_math_MutableBigInteger *) NULL_CHECK((frame[0].o)))->F_intLen) != (jint(1))) goto label_2;
	}
	{
	LINE_NUMBER(1091);
	sp[0].o = (jobject)((java_math_MutableBigInteger *) NULL_CHECK((frame[0].o)))->F_value;
	frame[5].l = ((jlong(((jint)ARRAY_ACCESS(jint, sp[0].o, ((jint)((java_math_MutableBigInteger *) NULL_CHECK((frame[0].o)))->F_offset))))) & (jlong(4294967295ll)));
	LINE_NUMBER(1092);
	frame[7].i = (jint(((frame[5].l) / (frame[3].l))));
	LINE_NUMBER(1093);
	frame[8].i = (jint(((frame[5].l) - ((jlong((frame[7].i))) * (frame[3].l)))));
	LINE_NUMBER(1094);
	sp[0].o = (jobject)((java_math_MutableBigInteger *) NULL_CHECK((frame[2].o)))->F_value;
	ARRAY_ACCESS(jint, sp[0].o, (jint(0))) = (frame[7].i);
	LINE_NUMBER(1095);
	sp[0].o = frame[2].o;
	sp += 1;
	if ((frame[7].i) != 0) goto label_8;
	}
	INST_ICONST(0);
	goto label_9;
label_8:;
	INST_ICONST(1);
label_9:;
	{
	sp -= 2;
	((java_math_MutableBigInteger *) NULL_CHECK(sp[0].o))->F_intLen = sp[1].i;
	LINE_NUMBER(1096);
	((java_math_MutableBigInteger *) NULL_CHECK((frame[2].o)))->F_offset = (jint(0));
	LINE_NUMBER(1097);
	popStackFrame(ctx);
	return (frame[8].i);
	}
label_2:;
	{
	LINE_NUMBER(1100);
	sp[0].o = (jobject)((java_math_MutableBigInteger *) NULL_CHECK((frame[2].o)))->F_value;
	if ((((jarray) nullCheck(ctx, sp[0].o))->length) >= ((jint)((java_math_MutableBigInteger *) NULL_CHECK((frame[0].o)))->F_intLen)) goto label_12;
	}
	{
	LINE_NUMBER(1101);
	sp[0].o = frame[2].o;
	sp[1].o = (jobject) createArray(ctx, &class_int, ((jint)((java_math_MutableBigInteger *) NULL_CHECK((frame[0].o)))->F_intLen));
	((java_math_MutableBigInteger *) NULL_CHECK(sp[0].o))->F_value = (jref) sp[1].o;
	}
label_12:;
	{
	LINE_NUMBER(1102);
	((java_math_MutableBigInteger *) NULL_CHECK((frame[2].o)))->F_offset = (jint(0));
	LINE_NUMBER(1103);
	((java_math_MutableBigInteger *) NULL_CHECK((frame[2].o)))->F_intLen = ((jint)((java_math_MutableBigInteger *) NULL_CHECK((frame[0].o)))->F_intLen);
	LINE_NUMBER(1106);
	jint temp0 = (jint)SM_java_lang_Integer_numberOfLeadingZeros_int_R_int(ctx, (frame[1].i));
	frame[5].i = temp0;
	LINE_NUMBER(1108);
	sp[0].o = (jobject)((java_math_MutableBigInteger *) NULL_CHECK((frame[0].o)))->F_value;
	frame[6].i = ((jint)ARRAY_ACCESS(jint, sp[0].o, ((jint)((java_math_MutableBigInteger *) NULL_CHECK((frame[0].o)))->F_offset)));
	LINE_NUMBER(1109);
	frame[7].l = ((jlong((frame[6].i))) & (jlong(4294967295ll)));
	LINE_NUMBER(1110);
	if ((longCompare((frame[7].l), (frame[3].l))) >= 0) goto label_19;
	}
	{
	LINE_NUMBER(1111);
	sp[0].o = (jobject)((java_math_MutableBigInteger *) NULL_CHECK((frame[2].o)))->F_value;
	ARRAY_ACCESS(jint, sp[0].o, (jint(0))) = (jint(0));
	goto label_21;
	}
label_19:;
	{
	LINE_NUMBER(1113);
	sp[0].o = (jobject)((java_math_MutableBigInteger *) NULL_CHECK((frame[2].o)))->F_value;
	ARRAY_ACCESS(jint, sp[0].o, (jint(0))) = (jint(((frame[7].l) / (frame[3].l))));
	LINE_NUMBER(1114);
	jlong temp0 = frame[7].l;
	sp[0].o = (jobject)((java_math_MutableBigInteger *) NULL_CHECK((frame[2].o)))->F_value;
	frame[6].i = (jint((temp0 - ((jlong(((jint)ARRAY_ACCESS(jint, sp[0].o, (jint(0)))))) * (frame[3].l)))));
	LINE_NUMBER(1115);
	frame[7].l = ((jlong((frame[6].i))) & (jlong(4294967295ll)));
	}
label_21:;
	{
	LINE_NUMBER(1117);
	frame[9].i = ((jint)((java_math_MutableBigInteger *) NULL_CHECK((frame[0].o)))->F_intLen);
	}
label_24:;
	{
	LINE_NUMBER(1118);
	INST_IINC(9, -1);
	if ((frame[9].i) <= 0) goto label_25;
	}
	{
	LINE_NUMBER(1119);
	jlong temp0 = (frame[7].l) << (32);
	sp[0].o = (jobject)((java_math_MutableBigInteger *) NULL_CHECK((frame[0].o)))->F_value;
	frame[10].l = (temp0 | ((jlong(((jint)ARRAY_ACCESS(jint, sp[0].o, ((((jint)((java_math_MutableBigInteger *) NULL_CHECK((frame[0].o)))->F_offset) + ((jint)((java_math_MutableBigInteger *) NULL_CHECK((frame[0].o)))->F_intLen)) - (frame[9].i)))))) & (jlong(4294967295ll))));
	LINE_NUMBER(1122);
	if ((longCompare((frame[10].l), (jlong(0)))) < 0) goto label_28;
	}
	{
	LINE_NUMBER(1123);
	frame[12].i = (jint(((frame[10].l) / (frame[3].l))));
	LINE_NUMBER(1124);
	frame[6].i = (jint(((frame[10].l) - ((jlong((frame[12].i))) * (frame[3].l)))));
	goto label_31;
	}
label_28:;
	{
	LINE_NUMBER(1126);
	jlong temp0 = (jlong)SM_java_math_MutableBigInteger_divWord_long_int_R_long(ctx, (frame[10].l), (frame[1].i));
	frame[13].l = temp0;
	LINE_NUMBER(1127);
	frame[12].i = (jint(((frame[13].l) & (jlong(4294967295ll)))));
	LINE_NUMBER(1128);
	frame[6].i = (jint((bit_cast<jlong>(bit_cast<uint64_t>((frame[13].l)) >> (32)))));
	}
label_31:;
	{
	LINE_NUMBER(1130);
	sp[0].o = (jobject)((java_math_MutableBigInteger *) NULL_CHECK((frame[2].o)))->F_value;
	ARRAY_ACCESS(jint, sp[0].o, (((jint)((java_math_MutableBigInteger *) NULL_CHECK((frame[0].o)))->F_intLen) - (frame[9].i))) = (frame[12].i);
	LINE_NUMBER(1131);
	frame[7].l = ((jlong((frame[6].i))) & (jlong(4294967295ll)));
	LINE_NUMBER(1132);
	goto label_24;
	}
label_25:;
	{
	LINE_NUMBER(1134);
	((func_java_math_MutableBigInteger_normalize) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_java_math_MutableBigInteger_normalize])(ctx, (frame[2].o));
	LINE_NUMBER(1136);
	if ((frame[5].i) <= 0) goto label_37;
	}
	{
	LINE_NUMBER(1137);
	popStackFrame(ctx);
	return ((frame[6].i) % (frame[1].i));
	}
label_37:;
	{
	LINE_NUMBER(1139);
	popStackFrame(ctx);
	return (frame[6].i);
	}

	popStackFrame(ctx);
}

jobject M_java_math_MutableBigInteger_divide_java_math_MutableBigInteger_java_math_MutableBigInteger_R_java_math_MutableBigInteger(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/math/MutableBigInteger:divide", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(1148);
	sp[0].o = (jobject)((func_java_math_MutableBigInteger_divide_java_math_MutableBigInteger_java_math_MutableBigInteger_boolean_R_java_math_MutableBigInteger) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_math_MutableBigInteger_divide_java_math_MutableBigInteger_java_math_MutableBigInteger_boolean_R_java_math_MutableBigInteger])(ctx, (frame[0].o), (frame[1].o), (frame[2].o), (jint(1)));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_java_math_MutableBigInteger_divide_java_math_MutableBigInteger_java_math_MutableBigInteger_boolean_R_java_math_MutableBigInteger(jcontext ctx, jobject self, jobject param0, jobject param1, jbool param2) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/math/MutableBigInteger:divide", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].i = param2;
	{
	LINE_NUMBER(1152);
	if (((jint)((java_math_MutableBigInteger *) NULL_CHECK((frame[1].o)))->F_intLen) < (80)) goto label_1;
	}
	{
	if ((((jint)((java_math_MutableBigInteger *) NULL_CHECK((frame[0].o)))->F_intLen) - ((jint)((java_math_MutableBigInteger *) NULL_CHECK((frame[1].o)))->F_intLen)) >= (40)) goto label_2;
	}
label_1:;
	{
	LINE_NUMBER(1154);
	sp[0].o = (jobject)((func_java_math_MutableBigInteger_divideKnuth_java_math_MutableBigInteger_java_math_MutableBigInteger_boolean_R_java_math_MutableBigInteger) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_math_MutableBigInteger_divideKnuth_java_math_MutableBigInteger_java_math_MutableBigInteger_boolean_R_java_math_MutableBigInteger])(ctx, (frame[0].o), (frame[1].o), (frame[2].o), (frame[3].i));
	popStackFrame(ctx);
	return sp[0].o;
	}
label_2:;
	{
	LINE_NUMBER(1156);
	sp[0].o = (jobject)((func_java_math_MutableBigInteger_divideAndRemainderBurnikelZiegler_java_math_MutableBigInteger_java_math_MutableBigInteger_R_java_math_MutableBigInteger) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_math_MutableBigInteger_divideAndRemainderBurnikelZiegler_java_math_MutableBigInteger_java_math_MutableBigInteger_R_java_math_MutableBigInteger])(ctx, (frame[0].o), (frame[1].o), (frame[2].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_java_math_MutableBigInteger_divideKnuth_java_math_MutableBigInteger_java_math_MutableBigInteger_R_java_math_MutableBigInteger(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/math/MutableBigInteger:divideKnuth", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(1164);
	sp[0].o = (jobject)((func_java_math_MutableBigInteger_divideKnuth_java_math_MutableBigInteger_java_math_MutableBigInteger_boolean_R_java_math_MutableBigInteger) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_math_MutableBigInteger_divideKnuth_java_math_MutableBigInteger_java_math_MutableBigInteger_boolean_R_java_math_MutableBigInteger])(ctx, (frame[0].o), (frame[1].o), (frame[2].o), (jint(1)));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_java_math_MutableBigInteger_divideKnuth_java_math_MutableBigInteger_java_math_MutableBigInteger_boolean_R_java_math_MutableBigInteger(jcontext ctx, jobject self, jobject param0, jobject param1, jbool param2) {
	NULL_CHECK(self);
	jtype frame[13];
	auto stack = &frame[8];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/math/MutableBigInteger:divideKnuth", 13 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].i = param2;
	{
	LINE_NUMBER(1179);
	if (((jint)((java_math_MutableBigInteger *) NULL_CHECK((frame[1].o)))->F_intLen) != 0) goto label_1;
	}
	{
	LINE_NUMBER(1180);
	clinit_java_lang_ArithmeticException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_ArithmeticException);
	init_java_lang_ArithmeticException_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"BigInteger divide by zero"_j))));
	throwException(ctx, sp[0].o);	}
label_1:;
	{
	LINE_NUMBER(1183);
	if (((jint)((java_math_MutableBigInteger *) NULL_CHECK((frame[0].o)))->F_intLen) != 0) goto label_3;
	}
	{
	LINE_NUMBER(1184);
	sp[0].o = frame[2].o;
	sp[1].o = frame[2].o;
	jint temp0 = jint(0);
	((java_math_MutableBigInteger *) NULL_CHECK(sp[1].o))->F_offset = temp0;
	((java_math_MutableBigInteger *) NULL_CHECK(sp[0].o))->F_intLen = temp0;
	LINE_NUMBER(1185);
	if ((frame[3].i) == 0) goto label_6;
	}
	{
	clinit_java_math_MutableBigInteger(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_math_MutableBigInteger);
	init_java_math_MutableBigInteger(ctx, sp[0].o);
	sp += 1;
	goto label_7;
	}
label_6:;
	INST_ACONST_NULL();
label_7:;
	popStackFrame(ctx);
	INST_ARETURN();
label_3:;
	{
	LINE_NUMBER(1188);
	jint temp0 = (jint)((func_java_math_MutableBigInteger_compare_java_math_MutableBigInteger_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_math_MutableBigInteger_compare_java_math_MutableBigInteger_R_int])(ctx, (frame[0].o), (frame[1].o));
	frame[4].i = temp0;
	LINE_NUMBER(1190);
	if ((frame[4].i) >= 0) goto label_9;
	}
	{
	LINE_NUMBER(1191);
	sp[0].o = frame[2].o;
	sp[1].o = frame[2].o;
	jint temp0 = jint(0);
	((java_math_MutableBigInteger *) NULL_CHECK(sp[1].o))->F_offset = temp0;
	((java_math_MutableBigInteger *) NULL_CHECK(sp[0].o))->F_intLen = temp0;
	LINE_NUMBER(1192);
	if ((frame[3].i) == 0) goto label_12;
	}
	{
	clinit_java_math_MutableBigInteger(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_math_MutableBigInteger);
	init_java_math_MutableBigInteger_java_math_MutableBigInteger(ctx, sp[0].o, (frame[0].o));
	sp += 1;
	goto label_13;
	}
label_12:;
	INST_ACONST_NULL();
label_13:;
	popStackFrame(ctx);
	INST_ARETURN();
label_9:;
	{
	LINE_NUMBER(1195);
	if ((frame[4].i) != 0) goto label_14;
	}
	{
	LINE_NUMBER(1196);
	sp[0].o = (jobject)((java_math_MutableBigInteger *) NULL_CHECK((frame[2].o)))->F_value;
	jint temp0 = jint(0);
	sp[1].o = frame[2].o;
	jint temp1 = jint(1);
	((java_math_MutableBigInteger *) NULL_CHECK(sp[1].o))->F_intLen = temp1;
	ARRAY_ACCESS(jint, sp[0].o, temp0) = temp1;
	LINE_NUMBER(1197);
	((java_math_MutableBigInteger *) NULL_CHECK((frame[2].o)))->F_offset = (jint(0));
	LINE_NUMBER(1198);
	if ((frame[3].i) == 0) goto label_18;
	}
	{
	clinit_java_math_MutableBigInteger(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_math_MutableBigInteger);
	init_java_math_MutableBigInteger(ctx, sp[0].o);
	sp += 1;
	goto label_19;
	}
label_18:;
	INST_ACONST_NULL();
label_19:;
	popStackFrame(ctx);
	INST_ARETURN();
label_14:;
	{
	LINE_NUMBER(1201);
	((func_java_math_MutableBigInteger_clear) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_java_math_MutableBigInteger_clear])(ctx, (frame[2].o));
	LINE_NUMBER(1203);
	if (((jint)((java_math_MutableBigInteger *) NULL_CHECK((frame[1].o)))->F_intLen) != (jint(1))) goto label_21;
	}
	{
	LINE_NUMBER(1204);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((java_math_MutableBigInteger *) NULL_CHECK((frame[1].o)))->F_value;
	jint temp0 = (jint)((func_java_math_MutableBigInteger_divideOneWord_int_java_math_MutableBigInteger_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_math_MutableBigInteger_divideOneWord_int_java_math_MutableBigInteger_R_int])(ctx, sp[0].o, ((jint)ARRAY_ACCESS(jint, sp[1].o, ((jint)((java_math_MutableBigInteger *) NULL_CHECK((frame[1].o)))->F_offset))), (frame[2].o));
	frame[5].i = temp0;
	LINE_NUMBER(1205);
	if ((frame[3].i) == 0) goto label_24;
	}
	{
	LINE_NUMBER(1206);
	if ((frame[5].i) != 0) goto label_26;
	}
	{
	LINE_NUMBER(1207);
	clinit_java_math_MutableBigInteger(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_math_MutableBigInteger);
	init_java_math_MutableBigInteger(ctx, sp[0].o);
	popStackFrame(ctx);
	return sp[0].o;
	}
label_26:;
	{
	LINE_NUMBER(1208);
	clinit_java_math_MutableBigInteger(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_math_MutableBigInteger);
	init_java_math_MutableBigInteger_int(ctx, sp[0].o, (frame[5].i));
	popStackFrame(ctx);
	return sp[0].o;
	}
label_24:;
	{
	LINE_NUMBER(1210);
	popStackFrame(ctx);
	return (jobject(nullptr));
	}
label_21:;
	{
	LINE_NUMBER(1215);
	if (((jint)((java_math_MutableBigInteger *) NULL_CHECK((frame[0].o)))->F_intLen) < (6)) goto label_28;
	}
	{
	LINE_NUMBER(1216);
	jint temp0 = (jint)M_java_math_MutableBigInteger_getLowestSetBit_R_int(ctx, (frame[0].o));
	jint temp1 = (jint)M_java_math_MutableBigInteger_getLowestSetBit_R_int(ctx, (frame[1].o));
	jint temp2 = (jint)SM_java_lang_Math_min_int_int_R_int(ctx, temp0, temp1);
	frame[5].i = temp2;
	LINE_NUMBER(1217);
	if ((frame[5].i) < (96)) goto label_28;
	}
	{
	LINE_NUMBER(1218);
	clinit_java_math_MutableBigInteger(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_math_MutableBigInteger);
	init_java_math_MutableBigInteger_java_math_MutableBigInteger(ctx, sp[0].o, (frame[0].o));
	frame[6].o = sp[0].o;
	LINE_NUMBER(1219);
	clinit_java_math_MutableBigInteger(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_math_MutableBigInteger);
	init_java_math_MutableBigInteger_java_math_MutableBigInteger(ctx, sp[0].o, (frame[1].o));
	frame[1].o = sp[0].o;
	LINE_NUMBER(1220);
	((func_java_math_MutableBigInteger_rightShift_int) ((void **) nullCheck(ctx, (frame[6].o))->vtable)[VTABLE_java_math_MutableBigInteger_rightShift_int])(ctx, (frame[6].o), (frame[5].i));
	LINE_NUMBER(1221);
	((func_java_math_MutableBigInteger_rightShift_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_math_MutableBigInteger_rightShift_int])(ctx, (frame[1].o), (frame[5].i));
	LINE_NUMBER(1222);
	sp[0].o = (jobject)((func_java_math_MutableBigInteger_divideKnuth_java_math_MutableBigInteger_java_math_MutableBigInteger_R_java_math_MutableBigInteger) ((void **) nullCheck(ctx, (frame[6].o))->vtable)[VTABLE_java_math_MutableBigInteger_divideKnuth_java_math_MutableBigInteger_java_math_MutableBigInteger_R_java_math_MutableBigInteger])(ctx, (frame[6].o), (frame[1].o), (frame[2].o));
	frame[7].o = sp[0].o;
	LINE_NUMBER(1223);
	((func_java_math_MutableBigInteger_leftShift_int) ((void **) nullCheck(ctx, (frame[7].o))->vtable)[VTABLE_java_math_MutableBigInteger_leftShift_int])(ctx, (frame[7].o), (frame[5].i));
	LINE_NUMBER(1224);
	popStackFrame(ctx);
	return (frame[7].o);
	}
label_28:;
	{
	LINE_NUMBER(1228);
	sp[0].o = (jobject)M_java_math_MutableBigInteger_divideMagnitude_java_math_MutableBigInteger_java_math_MutableBigInteger_boolean_R_java_math_MutableBigInteger(ctx, (frame[0].o), (frame[1].o), (frame[2].o), (frame[3].i));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_java_math_MutableBigInteger_divideAndRemainderBurnikelZiegler_java_math_MutableBigInteger_java_math_MutableBigInteger_R_java_math_MutableBigInteger(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[25];
	auto stack = &frame[19];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/math/MutableBigInteger:divideAndRemainderBurnikelZiegler", 25 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(1243);
	frame[3].i = ((jint)((java_math_MutableBigInteger *) NULL_CHECK((frame[0].o)))->F_intLen);
	LINE_NUMBER(1244);
	frame[4].i = ((jint)((java_math_MutableBigInteger *) NULL_CHECK((frame[1].o)))->F_intLen);
	LINE_NUMBER(1247);
	sp[0].o = frame[2].o;
	sp[1].o = frame[2].o;
	jint temp0 = jint(0);
	((java_math_MutableBigInteger *) NULL_CHECK(sp[1].o))->F_intLen = temp0;
	((java_math_MutableBigInteger *) NULL_CHECK(sp[0].o))->F_offset = temp0;
	LINE_NUMBER(1249);
	if ((frame[3].i) >= (frame[4].i)) goto label_4;
	}
	{
	LINE_NUMBER(1250);
	popStackFrame(ctx);
	return (frame[0].o);
	}
label_4:;
	{
	LINE_NUMBER(1257);
	jint temp0 = jint(1);
	jint temp1 = 32;
	jint temp2 = (jint)SM_java_lang_Integer_numberOfLeadingZeros_int_R_int(ctx, ((frame[4].i) / (80)));
	frame[5].i = (temp0 << (temp1 - temp2));
	LINE_NUMBER(1259);
	frame[6].i = ((((frame[4].i) + (frame[5].i)) - (jint(1))) / (frame[5].i));
	LINE_NUMBER(1260);
	frame[7].i = ((frame[6].i) * (frame[5].i));
	LINE_NUMBER(1261);
	frame[8].l = ((jlong(32ll)) * (jlong((frame[7].i))));
	LINE_NUMBER(1262);
	jlong temp3 = jlong(0);
	jlong temp4 = frame[8].l;
	jlong temp5 = (jlong)((func_java_math_MutableBigInteger_bitLength_R_long) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_math_MutableBigInteger_bitLength_R_long])(ctx, (frame[1].o));
	jlong temp6 = (jlong)SM_java_lang_Math_max_long_long_R_long(ctx, temp3, (temp4 - temp5));
	frame[10].i = (jint(temp6));
	LINE_NUMBER(1263);
	clinit_java_math_MutableBigInteger(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_math_MutableBigInteger);
	init_java_math_MutableBigInteger_java_math_MutableBigInteger(ctx, sp[0].o, (frame[1].o));
	frame[11].o = sp[0].o;
	LINE_NUMBER(1264);
	((func_java_math_MutableBigInteger_safeLeftShift_int) ((void **) nullCheck(ctx, (frame[11].o))->vtable)[VTABLE_java_math_MutableBigInteger_safeLeftShift_int])(ctx, (frame[11].o), (frame[10].i));
	LINE_NUMBER(1265);
	clinit_java_math_MutableBigInteger(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_math_MutableBigInteger);
	init_java_math_MutableBigInteger_java_math_MutableBigInteger(ctx, sp[0].o, (frame[0].o));
	frame[12].o = sp[0].o;
	LINE_NUMBER(1266);
	((func_java_math_MutableBigInteger_safeLeftShift_int) ((void **) nullCheck(ctx, (frame[12].o))->vtable)[VTABLE_java_math_MutableBigInteger_safeLeftShift_int])(ctx, (frame[12].o), (frame[10].i));
	LINE_NUMBER(1269);
	jlong temp7 = (jlong)((func_java_math_MutableBigInteger_bitLength_R_long) ((void **) nullCheck(ctx, (frame[12].o))->vtable)[VTABLE_java_math_MutableBigInteger_bitLength_R_long])(ctx, (frame[12].o));
	frame[13].i = (jint(((temp7 + (frame[8].l)) / (frame[8].l))));
	LINE_NUMBER(1270);
	if ((frame[13].i) >= (jint(2))) goto label_16;
	}
	{
	LINE_NUMBER(1271);
	frame[13].i = (jint(2));
	}
label_16:;
	{
	LINE_NUMBER(1275);
	sp[0].o = (jobject)M_java_math_MutableBigInteger_getBlock_int_int_int_R_java_math_MutableBigInteger(ctx, (frame[12].o), ((frame[13].i) - (jint(1))), (frame[13].i), (frame[7].i));
	frame[14].o = sp[0].o;
	LINE_NUMBER(1278);
	sp[0].o = (jobject)M_java_math_MutableBigInteger_getBlock_int_int_int_R_java_math_MutableBigInteger(ctx, (frame[12].o), ((frame[13].i) - (jint(2))), (frame[13].i), (frame[7].i));
	frame[15].o = sp[0].o;
	LINE_NUMBER(1279);
	((func_java_math_MutableBigInteger_addDisjoint_java_math_MutableBigInteger_int) ((void **) nullCheck(ctx, (frame[15].o))->vtable)[VTABLE_java_math_MutableBigInteger_addDisjoint_java_math_MutableBigInteger_int])(ctx, (frame[15].o), (frame[14].o), (frame[7].i));
	LINE_NUMBER(1282);
	clinit_java_math_MutableBigInteger(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_math_MutableBigInteger);
	init_java_math_MutableBigInteger(ctx, sp[0].o);
	frame[16].o = sp[0].o;
	LINE_NUMBER(1284);
	frame[18].i = ((frame[13].i) - (jint(2)));
	}
label_22:;
	INST_ILOAD(18);
	if ((--sp)->i <= 0) goto label_23;
	{
	LINE_NUMBER(1286);
	sp[0].o = (jobject)M_java_math_MutableBigInteger_divide2n1n_java_math_MutableBigInteger_java_math_MutableBigInteger_R_java_math_MutableBigInteger(ctx, (frame[15].o), (frame[11].o), (frame[16].o));
	frame[17].o = sp[0].o;
	LINE_NUMBER(1289);
	sp[0].o = (jobject)M_java_math_MutableBigInteger_getBlock_int_int_int_R_java_math_MutableBigInteger(ctx, (frame[12].o), ((frame[18].i) - (jint(1))), (frame[13].i), (frame[7].i));
	frame[15].o = sp[0].o;
	LINE_NUMBER(1290);
	((func_java_math_MutableBigInteger_addDisjoint_java_math_MutableBigInteger_int) ((void **) nullCheck(ctx, (frame[15].o))->vtable)[VTABLE_java_math_MutableBigInteger_addDisjoint_java_math_MutableBigInteger_int])(ctx, (frame[15].o), (frame[17].o), (frame[7].i));
	LINE_NUMBER(1291);
	((func_java_math_MutableBigInteger_addShifted_java_math_MutableBigInteger_int) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_java_math_MutableBigInteger_addShifted_java_math_MutableBigInteger_int])(ctx, (frame[2].o), (frame[16].o), ((frame[18].i) * (frame[7].i)));
	LINE_NUMBER(1284);
	INST_IINC(18, -1);
	goto label_22;
	}
label_23:;
	{
	LINE_NUMBER(1294);
	sp[0].o = (jobject)M_java_math_MutableBigInteger_divide2n1n_java_math_MutableBigInteger_java_math_MutableBigInteger_R_java_math_MutableBigInteger(ctx, (frame[15].o), (frame[11].o), (frame[16].o));
	frame[17].o = sp[0].o;
	LINE_NUMBER(1295);
	((func_java_math_MutableBigInteger_add_java_math_MutableBigInteger) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_java_math_MutableBigInteger_add_java_math_MutableBigInteger])(ctx, (frame[2].o), (frame[16].o));
	LINE_NUMBER(1297);
	((func_java_math_MutableBigInteger_rightShift_int) ((void **) nullCheck(ctx, (frame[17].o))->vtable)[VTABLE_java_math_MutableBigInteger_rightShift_int])(ctx, (frame[17].o), (frame[10].i));
	LINE_NUMBER(1298);
	popStackFrame(ctx);
	return (frame[17].o);
	}

	popStackFrame(ctx);
}

jobject M_java_math_MutableBigInteger_divide2n1n_java_math_MutableBigInteger_java_math_MutableBigInteger_R_java_math_MutableBigInteger(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[12];
	auto stack = &frame[8];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/math/MutableBigInteger:divide2n1n", 12 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(1313);
	frame[3].i = ((jint)((java_math_MutableBigInteger *) NULL_CHECK((frame[1].o)))->F_intLen);
	LINE_NUMBER(1316);
	if (((frame[3].i) % (jint(2))) != 0) goto label_2;
	}
	{
	if ((frame[3].i) >= (80)) goto label_3;
	}
label_2:;
	{
	LINE_NUMBER(1317);
	sp[0].o = (jobject)((func_java_math_MutableBigInteger_divideKnuth_java_math_MutableBigInteger_java_math_MutableBigInteger_R_java_math_MutableBigInteger) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_math_MutableBigInteger_divideKnuth_java_math_MutableBigInteger_java_math_MutableBigInteger_R_java_math_MutableBigInteger])(ctx, (frame[0].o), (frame[1].o), (frame[2].o));
	popStackFrame(ctx);
	return sp[0].o;
	}
label_3:;
	{
	LINE_NUMBER(1321);
	clinit_java_math_MutableBigInteger(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_math_MutableBigInteger);
	init_java_math_MutableBigInteger_java_math_MutableBigInteger(ctx, sp[0].o, (frame[0].o));
	frame[4].o = sp[0].o;
	LINE_NUMBER(1322);
	((func_java_math_MutableBigInteger_safeRightShift_int) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_java_math_MutableBigInteger_safeRightShift_int])(ctx, (frame[4].o), ((32) * ((frame[3].i) / (jint(2)))));
	LINE_NUMBER(1323);
	M_java_math_MutableBigInteger_keepLower_int(ctx, (frame[0].o), ((frame[3].i) / (jint(2))));
	LINE_NUMBER(1326);
	clinit_java_math_MutableBigInteger(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_math_MutableBigInteger);
	init_java_math_MutableBigInteger(ctx, sp[0].o);
	frame[5].o = sp[0].o;
	LINE_NUMBER(1327);
	sp[0].o = (jobject)M_java_math_MutableBigInteger_divide3n2n_java_math_MutableBigInteger_java_math_MutableBigInteger_R_java_math_MutableBigInteger(ctx, (frame[4].o), (frame[1].o), (frame[5].o));
	frame[6].o = sp[0].o;
	LINE_NUMBER(1330);
	((func_java_math_MutableBigInteger_addDisjoint_java_math_MutableBigInteger_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_math_MutableBigInteger_addDisjoint_java_math_MutableBigInteger_int])(ctx, (frame[0].o), (frame[6].o), ((frame[3].i) / (jint(2))));
	LINE_NUMBER(1331);
	sp[0].o = (jobject)M_java_math_MutableBigInteger_divide3n2n_java_math_MutableBigInteger_java_math_MutableBigInteger_R_java_math_MutableBigInteger(ctx, (frame[0].o), (frame[1].o), (frame[2].o));
	frame[7].o = sp[0].o;
	LINE_NUMBER(1334);
	((func_java_math_MutableBigInteger_addDisjoint_java_math_MutableBigInteger_int) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_java_math_MutableBigInteger_addDisjoint_java_math_MutableBigInteger_int])(ctx, (frame[2].o), (frame[5].o), ((frame[3].i) / (jint(2))));
	LINE_NUMBER(1335);
	popStackFrame(ctx);
	return (frame[7].o);
	}

	popStackFrame(ctx);
}

jobject M_java_math_MutableBigInteger_divide3n2n_java_math_MutableBigInteger_java_math_MutableBigInteger_R_java_math_MutableBigInteger(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[13];
	auto stack = &frame[9];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/math/MutableBigInteger:divide3n2n", 13 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(1348);
	frame[3].i = (((jint)((java_math_MutableBigInteger *) NULL_CHECK((frame[1].o)))->F_intLen) / (jint(2)));
	LINE_NUMBER(1351);
	clinit_java_math_MutableBigInteger(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_math_MutableBigInteger);
	init_java_math_MutableBigInteger_java_math_MutableBigInteger(ctx, sp[0].o, (frame[0].o));
	frame[4].o = sp[0].o;
	LINE_NUMBER(1352);
	((func_java_math_MutableBigInteger_safeRightShift_int) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_java_math_MutableBigInteger_safeRightShift_int])(ctx, (frame[4].o), ((32) * (frame[3].i)));
	LINE_NUMBER(1355);
	clinit_java_math_MutableBigInteger(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_math_MutableBigInteger);
	init_java_math_MutableBigInteger_java_math_MutableBigInteger(ctx, sp[0].o, (frame[1].o));
	frame[5].o = sp[0].o;
	LINE_NUMBER(1356);
	((func_java_math_MutableBigInteger_safeRightShift_int) ((void **) nullCheck(ctx, (frame[5].o))->vtable)[VTABLE_java_math_MutableBigInteger_safeRightShift_int])(ctx, (frame[5].o), ((frame[3].i) * (32)));
	LINE_NUMBER(1357);
	sp[0].o = (jobject)M_java_math_MutableBigInteger_getLower_int_R_java_math_BigInteger(ctx, (frame[1].o), (frame[3].i));
	frame[6].o = sp[0].o;
	LINE_NUMBER(1361);
	jint temp0 = (jint)M_java_math_MutableBigInteger_compareShifted_java_math_MutableBigInteger_int_R_int(ctx, (frame[0].o), (frame[1].o), (frame[3].i));
	if (temp0 >= 0) goto label_7;
	}
	{
	LINE_NUMBER(1363);
	sp[0].o = (jobject)M_java_math_MutableBigInteger_divide2n1n_java_math_MutableBigInteger_java_math_MutableBigInteger_R_java_math_MutableBigInteger(ctx, (frame[4].o), (frame[5].o), (frame[2].o));
	frame[7].o = sp[0].o;
	LINE_NUMBER(1366);
	clinit_java_math_MutableBigInteger(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_math_MutableBigInteger);
	sp[1].o = (jobject)((func_java_math_MutableBigInteger_toBigInteger_R_java_math_BigInteger) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_java_math_MutableBigInteger_toBigInteger_R_java_math_BigInteger])(ctx, (frame[2].o));
	sp[1].o = (jobject)((func_java_math_BigInteger_multiply_java_math_BigInteger_R_java_math_BigInteger) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_math_BigInteger_multiply_java_math_BigInteger_R_java_math_BigInteger])(ctx, sp[1].o, (frame[6].o));
	init_java_math_MutableBigInteger_java_math_BigInteger(ctx, sp[0].o, sp[1].o);
	frame[8].o = sp[0].o;
	goto label_11;
	}
label_7:;
	{
	LINE_NUMBER(1369);
	M_java_math_MutableBigInteger_ones_int(ctx, (frame[2].o), (frame[3].i));
	LINE_NUMBER(1370);
	((func_java_math_MutableBigInteger_add_java_math_MutableBigInteger) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_java_math_MutableBigInteger_add_java_math_MutableBigInteger])(ctx, (frame[4].o), (frame[5].o));
	LINE_NUMBER(1371);
	((func_java_math_MutableBigInteger_leftShift_int) ((void **) nullCheck(ctx, (frame[5].o))->vtable)[VTABLE_java_math_MutableBigInteger_leftShift_int])(ctx, (frame[5].o), ((32) * (frame[3].i)));
	LINE_NUMBER(1372);
	jint temp0 = (jint)((func_java_math_MutableBigInteger_subtract_java_math_MutableBigInteger_R_int) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_java_math_MutableBigInteger_subtract_java_math_MutableBigInteger_R_int])(ctx, (frame[4].o), (frame[5].o));
	LINE_NUMBER(1373);
	frame[7].o = (frame[4].o);
	LINE_NUMBER(1376);
	clinit_java_math_MutableBigInteger(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_math_MutableBigInteger);
	init_java_math_MutableBigInteger_java_math_BigInteger(ctx, sp[0].o, (frame[6].o));
	frame[8].o = sp[0].o;
	LINE_NUMBER(1377);
	((func_java_math_MutableBigInteger_leftShift_int) ((void **) nullCheck(ctx, (frame[8].o))->vtable)[VTABLE_java_math_MutableBigInteger_leftShift_int])(ctx, (frame[8].o), ((32) * (frame[3].i)));
	LINE_NUMBER(1378);
	sp[0].o = frame[8].o;
	clinit_java_math_MutableBigInteger(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_math_MutableBigInteger);
	init_java_math_MutableBigInteger_java_math_BigInteger(ctx, sp[1].o, (frame[6].o));
	jint temp1 = (jint)((func_java_math_MutableBigInteger_subtract_java_math_MutableBigInteger_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_math_MutableBigInteger_subtract_java_math_MutableBigInteger_R_int])(ctx, sp[0].o, sp[1].o);
	}
label_11:;
	{
	LINE_NUMBER(1383);
	((func_java_math_MutableBigInteger_leftShift_int) ((void **) nullCheck(ctx, (frame[7].o))->vtable)[VTABLE_java_math_MutableBigInteger_leftShift_int])(ctx, (frame[7].o), ((32) * (frame[3].i)));
	LINE_NUMBER(1384);
	((func_java_math_MutableBigInteger_addLower_java_math_MutableBigInteger_int) ((void **) nullCheck(ctx, (frame[7].o))->vtable)[VTABLE_java_math_MutableBigInteger_addLower_java_math_MutableBigInteger_int])(ctx, (frame[7].o), (frame[0].o), (frame[3].i));
	}
label_20:;
	{
	LINE_NUMBER(1387);
	jint temp0 = (jint)((func_java_math_MutableBigInteger_compare_java_math_MutableBigInteger_R_int) ((void **) nullCheck(ctx, (frame[7].o))->vtable)[VTABLE_java_math_MutableBigInteger_compare_java_math_MutableBigInteger_R_int])(ctx, (frame[7].o), (frame[8].o));
	if (temp0 >= 0) goto label_21;
	}
	{
	LINE_NUMBER(1388);
	((func_java_math_MutableBigInteger_add_java_math_MutableBigInteger) ((void **) nullCheck(ctx, (frame[7].o))->vtable)[VTABLE_java_math_MutableBigInteger_add_java_math_MutableBigInteger])(ctx, (frame[7].o), (frame[1].o));
	LINE_NUMBER(1389);
	sp[0].o = frame[2].o;
	clinit_java_math_MutableBigInteger(ctx);
	sp[1].o = (jobject)SF_java_math_MutableBigInteger_ONE;
	jint temp0 = (jint)((func_java_math_MutableBigInteger_subtract_java_math_MutableBigInteger_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_math_MutableBigInteger_subtract_java_math_MutableBigInteger_R_int])(ctx, sp[0].o, sp[1].o);
	goto label_20;
	}
label_21:;
	{
	LINE_NUMBER(1391);
	jint temp0 = (jint)((func_java_math_MutableBigInteger_subtract_java_math_MutableBigInteger_R_int) ((void **) nullCheck(ctx, (frame[7].o))->vtable)[VTABLE_java_math_MutableBigInteger_subtract_java_math_MutableBigInteger_R_int])(ctx, (frame[7].o), (frame[8].o));
	LINE_NUMBER(1393);
	popStackFrame(ctx);
	return (frame[7].o);
	}

	popStackFrame(ctx);
}

jobject M_java_math_MutableBigInteger_getBlock_int_int_int_R_java_math_MutableBigInteger(jcontext ctx, jobject self, jint param0, jint param1, jint param2) {
	NULL_CHECK(self);
	jtype frame[11];
	auto stack = &frame[7];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/math/MutableBigInteger:getBlock", 11 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].i = param1;
	frame[3].i = param2;
	{
	LINE_NUMBER(1406);
	frame[4].i = ((frame[1].i) * (frame[3].i));
	LINE_NUMBER(1407);
	if ((frame[4].i) < ((jint)((java_math_MutableBigInteger *) NULL_CHECK((frame[0].o)))->F_intLen)) goto label_2;
	}
	{
	LINE_NUMBER(1408);
	clinit_java_math_MutableBigInteger(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_math_MutableBigInteger);
	init_java_math_MutableBigInteger(ctx, sp[0].o);
	popStackFrame(ctx);
	return sp[0].o;
	}
label_2:;
	{
	LINE_NUMBER(1412);
	if ((frame[1].i) != ((frame[2].i) - (jint(1)))) goto label_4;
	}
	{
	LINE_NUMBER(1413);
	frame[5].i = ((jint)((java_math_MutableBigInteger *) NULL_CHECK((frame[0].o)))->F_intLen);
	goto label_7;
	}
label_4:;
	{
	LINE_NUMBER(1415);
	frame[5].i = (((frame[1].i) + (jint(1))) * (frame[3].i));
	}
label_7:;
	{
	LINE_NUMBER(1417);
	if ((frame[5].i) <= ((jint)((java_math_MutableBigInteger *) NULL_CHECK((frame[0].o)))->F_intLen)) goto label_8;
	}
	{
	LINE_NUMBER(1418);
	clinit_java_math_MutableBigInteger(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_math_MutableBigInteger);
	init_java_math_MutableBigInteger(ctx, sp[0].o);
	popStackFrame(ctx);
	return sp[0].o;
	}
label_8:;
	{
	LINE_NUMBER(1421);
	sp[0].o = (jobject)((java_math_MutableBigInteger *) NULL_CHECK((frame[0].o)))->F_value;
	sp[0].o = (jobject)SM_java_util_Arrays_copyOfRange_Array1_int_int_int_R_Array1_int(ctx, sp[0].o, ((((jint)((java_math_MutableBigInteger *) NULL_CHECK((frame[0].o)))->F_offset) + ((jint)((java_math_MutableBigInteger *) NULL_CHECK((frame[0].o)))->F_intLen)) - (frame[5].i)), ((((jint)((java_math_MutableBigInteger *) NULL_CHECK((frame[0].o)))->F_offset) + ((jint)((java_math_MutableBigInteger *) NULL_CHECK((frame[0].o)))->F_intLen)) - (frame[4].i)));
	frame[6].o = sp[0].o;
	LINE_NUMBER(1422);
	clinit_java_math_MutableBigInteger(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_math_MutableBigInteger);
	init_java_math_MutableBigInteger_Array1_int(ctx, sp[0].o, (frame[6].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jlong M_java_math_MutableBigInteger_bitLength_R_long(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/math/MutableBigInteger:bitLength", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(1427);
	if (((jint)((java_math_MutableBigInteger *) NULL_CHECK((frame[0].o)))->F_intLen) != 0) goto label_1;
	}
	{
	LINE_NUMBER(1428);
	popStackFrame(ctx);
	return (jlong(0));
	}
label_1:;
	{
	LINE_NUMBER(1429);
	jlong temp0 = (jlong(((jint)((java_math_MutableBigInteger *) NULL_CHECK((frame[0].o)))->F_intLen))) * (jlong(32ll));
	sp[0].o = (jobject)((java_math_MutableBigInteger *) NULL_CHECK((frame[0].o)))->F_value;
	jint temp1 = (jint)SM_java_lang_Integer_numberOfLeadingZeros_int_R_int(ctx, ((jint)ARRAY_ACCESS(jint, sp[0].o, ((jint)((java_math_MutableBigInteger *) NULL_CHECK((frame[0].o)))->F_offset))));
	popStackFrame(ctx);
	return (temp0 - (jlong(temp1)));
	}

	popStackFrame(ctx);
}

jlong M_java_math_MutableBigInteger_divide_long_java_math_MutableBigInteger_R_long(jcontext ctx, jobject self, jlong param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/math/MutableBigInteger:divide", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].l = param0;
	frame[3].o = param1;
	{
	LINE_NUMBER(1440);
	if ((longCompare((frame[1].l), (jlong(0)))) != 0) goto label_1;
	}
	{
	LINE_NUMBER(1441);
	clinit_java_lang_ArithmeticException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_ArithmeticException);
	init_java_lang_ArithmeticException_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"BigInteger divide by zero"_j))));
	throwException(ctx, sp[0].o);	}
label_1:;
	{
	LINE_NUMBER(1444);
	if (((jint)((java_math_MutableBigInteger *) NULL_CHECK((frame[0].o)))->F_intLen) != 0) goto label_3;
	}
	{
	LINE_NUMBER(1445);
	sp[0].o = frame[3].o;
	sp[1].o = frame[3].o;
	jint temp0 = jint(0);
	((java_math_MutableBigInteger *) NULL_CHECK(sp[1].o))->F_offset = temp0;
	((java_math_MutableBigInteger *) NULL_CHECK(sp[0].o))->F_intLen = temp0;
	LINE_NUMBER(1446);
	popStackFrame(ctx);
	return (jlong(0));
	}
label_3:;
	{
	LINE_NUMBER(1448);
	if ((longCompare((frame[1].l), (jlong(0)))) >= 0) goto label_6;
	}
	{
	LINE_NUMBER(1449);
	frame[1].l = (-(frame[1].l));
	}
label_6:;
	{
	LINE_NUMBER(1451);
	frame[4].i = (jint((bit_cast<jlong>(bit_cast<uint64_t>((frame[1].l)) >> (32)))));
	LINE_NUMBER(1452);
	((func_java_math_MutableBigInteger_clear) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_java_math_MutableBigInteger_clear])(ctx, (frame[3].o));
	LINE_NUMBER(1454);
	if ((frame[4].i) != 0) goto label_10;
	}
	{
	LINE_NUMBER(1455);
	jint temp0 = (jint)((func_java_math_MutableBigInteger_divideOneWord_int_java_math_MutableBigInteger_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_math_MutableBigInteger_divideOneWord_int_java_math_MutableBigInteger_R_int])(ctx, (frame[0].o), (jint((frame[1].l))), (frame[3].o));
	popStackFrame(ctx);
	return ((jlong(temp0)) & (jlong(4294967295ll)));
	}
label_10:;
	{
	LINE_NUMBER(1457);
	sp[0].o = (jobject)M_java_math_MutableBigInteger_divideLongMagnitude_long_java_math_MutableBigInteger_R_java_math_MutableBigInteger(ctx, (frame[0].o), (frame[1].l), (frame[3].o));
	jlong temp0 = (jlong)M_java_math_MutableBigInteger_toLong_R_long(ctx, sp[0].o);
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

void SM_java_math_MutableBigInteger_copyAndShift_Array1_int_int_int_Array1_int_int_int(jcontext ctx, jobject param0, jint param1, jint param2, jobject param3, jint param4, jint param5) {
	jtype frame[15];
	auto stack = &frame[10];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/math/MutableBigInteger:copyAndShift", 15 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_math_MutableBigInteger(ctx);
	frame[0].o = param0;
	frame[1].i = param1;
	frame[2].i = param2;
	frame[3].o = param3;
	frame[4].i = param4;
	frame[5].i = param5;
	{
	LINE_NUMBER(1462);
	frame[6].i = ((32) - (frame[5].i));
	LINE_NUMBER(1463);
	frame[7].i = ((jint)ARRAY_ACCESS(jint, (frame[0].o), (frame[1].i)));
	LINE_NUMBER(1464);
	frame[8].i = (jint(0));
	}
label_3:;
	{
	if ((frame[8].i) >= ((frame[2].i) - (jint(1)))) goto label_4;
	}
	{
	LINE_NUMBER(1465);
	frame[9].i = (frame[7].i);
	LINE_NUMBER(1466);
	sp[0].o = frame[0].o;
	INST_IINC(1, 1);
	frame[7].i = ((jint)ARRAY_ACCESS(jint, sp[0].o, (frame[1].i)));
	LINE_NUMBER(1467);
	ARRAY_ACCESS(jint, (frame[3].o), ((frame[4].i) + (frame[8].i))) = (((frame[9].i) << (frame[5].i)) | (bit_cast<jint>(bit_cast<uint32_t>((frame[7].i)) >> (frame[6].i))));
	LINE_NUMBER(1464);
	INST_IINC(8, 1);
	goto label_3;
	}
label_4:;
	{
	LINE_NUMBER(1469);
	ARRAY_ACCESS(jint, (frame[3].o), (((frame[4].i) + (frame[2].i)) - (jint(1)))) = ((frame[7].i) << (frame[5].i));
	LINE_NUMBER(1470);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_java_math_MutableBigInteger_divideMagnitude_java_math_MutableBigInteger_java_math_MutableBigInteger_boolean_R_java_math_MutableBigInteger(jcontext ctx, jobject self, jobject param0, jobject param1, jbool param2) {
	NULL_CHECK(self);
	jtype frame[35];
	auto stack = &frame[28];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/math/MutableBigInteger:divideMagnitude", 35 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].i = param2;
	{
	LINE_NUMBER(1482);
	sp[0].o = (jobject)((java_math_MutableBigInteger *) NULL_CHECK((frame[1].o)))->F_value;
	jint temp0 = (jint)SM_java_lang_Integer_numberOfLeadingZeros_int_R_int(ctx, ((jint)ARRAY_ACCESS(jint, sp[0].o, ((jint)((java_math_MutableBigInteger *) NULL_CHECK((frame[1].o)))->F_offset))));
	frame[4].i = temp0;
	LINE_NUMBER(1484);
	frame[5].i = ((jint)((java_math_MutableBigInteger *) NULL_CHECK((frame[1].o)))->F_intLen);
	LINE_NUMBER(1487);
	if ((frame[4].i) <= 0) goto label_3;
	}
	{
	LINE_NUMBER(1488);
	sp[0].o = (jobject) createArray(ctx, &class_int, (frame[5].i));
	frame[6].o = sp[0].o;
	LINE_NUMBER(1489);
	sp[0].o = (jobject)((java_math_MutableBigInteger *) NULL_CHECK((frame[1].o)))->F_value;
	SM_java_math_MutableBigInteger_copyAndShift_Array1_int_int_int_Array1_int_int_int(ctx, sp[0].o, ((jint)((java_math_MutableBigInteger *) NULL_CHECK((frame[1].o)))->F_offset), (frame[5].i), (frame[6].o), (jint(0)), (frame[4].i));
	LINE_NUMBER(1490);
	sp[0].o = (jobject)((java_math_MutableBigInteger *) NULL_CHECK((frame[0].o)))->F_value;
	jint temp0 = (jint)SM_java_lang_Integer_numberOfLeadingZeros_int_R_int(ctx, ((jint)ARRAY_ACCESS(jint, sp[0].o, ((jint)((java_math_MutableBigInteger *) NULL_CHECK((frame[0].o)))->F_offset))));
	if (temp0 < (frame[4].i)) goto label_7;
	}
	{
	LINE_NUMBER(1491);
	sp[0].o = (jobject) createArray(ctx, &class_int, (((jint)((java_math_MutableBigInteger *) NULL_CHECK((frame[0].o)))->F_intLen) + (jint(1))));
	frame[8].o = sp[0].o;
	LINE_NUMBER(1492);
	clinit_java_math_MutableBigInteger(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_math_MutableBigInteger);
	init_java_math_MutableBigInteger_Array1_int(ctx, sp[0].o, (frame[8].o));
	frame[7].o = sp[0].o;
	LINE_NUMBER(1493);
	((java_math_MutableBigInteger *) NULL_CHECK((frame[7].o)))->F_intLen = ((jint)((java_math_MutableBigInteger *) NULL_CHECK((frame[0].o)))->F_intLen);
	LINE_NUMBER(1494);
	((java_math_MutableBigInteger *) NULL_CHECK((frame[7].o)))->F_offset = (jint(1));
	LINE_NUMBER(1495);
	sp[0].o = (jobject)((java_math_MutableBigInteger *) NULL_CHECK((frame[0].o)))->F_value;
	SM_java_math_MutableBigInteger_copyAndShift_Array1_int_int_int_Array1_int_int_int(ctx, sp[0].o, ((jint)((java_math_MutableBigInteger *) NULL_CHECK((frame[0].o)))->F_offset), ((jint)((java_math_MutableBigInteger *) NULL_CHECK((frame[0].o)))->F_intLen), (frame[8].o), (jint(1)), (frame[4].i));
	LINE_NUMBER(1496);
	goto label_14;
	}
label_7:;
	{
	LINE_NUMBER(1497);
	sp[0].o = (jobject) createArray(ctx, &class_int, (((jint)((java_math_MutableBigInteger *) NULL_CHECK((frame[0].o)))->F_intLen) + (jint(2))));
	frame[8].o = sp[0].o;
	LINE_NUMBER(1498);
	clinit_java_math_MutableBigInteger(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_math_MutableBigInteger);
	init_java_math_MutableBigInteger_Array1_int(ctx, sp[0].o, (frame[8].o));
	frame[7].o = sp[0].o;
	LINE_NUMBER(1499);
	((java_math_MutableBigInteger *) NULL_CHECK((frame[7].o)))->F_intLen = (((jint)((java_math_MutableBigInteger *) NULL_CHECK((frame[0].o)))->F_intLen) + (jint(1)));
	LINE_NUMBER(1500);
	((java_math_MutableBigInteger *) NULL_CHECK((frame[7].o)))->F_offset = (jint(1));
	LINE_NUMBER(1501);
	frame[9].i = ((jint)((java_math_MutableBigInteger *) NULL_CHECK((frame[0].o)))->F_offset);
	LINE_NUMBER(1502);
	frame[10].i = (jint(0));
	LINE_NUMBER(1503);
	frame[11].i = ((32) - (frame[4].i));
	LINE_NUMBER(1504);
	frame[12].i = (jint(1));
	}
label_22:;
	{
	if ((frame[12].i) >= (((jint)((java_math_MutableBigInteger *) NULL_CHECK((frame[0].o)))->F_intLen) + (jint(1)))) goto label_23;
	}
	{
	LINE_NUMBER(1505);
	frame[13].i = (frame[10].i);
	LINE_NUMBER(1506);
	sp[0].o = (jobject)((java_math_MutableBigInteger *) NULL_CHECK((frame[0].o)))->F_value;
	frame[10].i = ((jint)ARRAY_ACCESS(jint, sp[0].o, (frame[9].i)));
	LINE_NUMBER(1507);
	ARRAY_ACCESS(jint, (frame[8].o), (frame[12].i)) = (((frame[13].i) << (frame[4].i)) | (bit_cast<jint>(bit_cast<uint32_t>((frame[10].i)) >> (frame[11].i))));
	LINE_NUMBER(1504);
	INST_IINC(12, 1);
	INST_IINC(9, 1);
	goto label_22;
	}
label_23:;
	{
	LINE_NUMBER(1509);
	ARRAY_ACCESS(jint, (frame[8].o), (((jint)((java_math_MutableBigInteger *) NULL_CHECK((frame[0].o)))->F_intLen) + (jint(1)))) = ((frame[10].i) << (frame[4].i));
	LINE_NUMBER(1510);
	goto label_14;
	}
label_3:;
	{
	LINE_NUMBER(1512);
	sp[0].o = (jobject)((java_math_MutableBigInteger *) NULL_CHECK((frame[1].o)))->F_value;
	sp[0].o = (jobject)SM_java_util_Arrays_copyOfRange_Array1_int_int_int_R_Array1_int(ctx, sp[0].o, ((jint)((java_math_MutableBigInteger *) NULL_CHECK((frame[1].o)))->F_offset), (((jint)((java_math_MutableBigInteger *) NULL_CHECK((frame[1].o)))->F_offset) + ((jint)((java_math_MutableBigInteger *) NULL_CHECK((frame[1].o)))->F_intLen)));
	frame[6].o = sp[0].o;
	LINE_NUMBER(1513);
	clinit_java_math_MutableBigInteger(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_math_MutableBigInteger);
	sp[1].o = (jobject) createArray(ctx, &class_int, (((jint)((java_math_MutableBigInteger *) NULL_CHECK((frame[0].o)))->F_intLen) + (jint(1))));
	init_java_math_MutableBigInteger_Array1_int(ctx, sp[0].o, sp[1].o);
	frame[7].o = sp[0].o;
	LINE_NUMBER(1514);
	sp[0].o = (jobject)((java_math_MutableBigInteger *) NULL_CHECK((frame[0].o)))->F_value;
	jint temp0 = (jint)((java_math_MutableBigInteger *) NULL_CHECK((frame[0].o)))->F_offset;
	sp[1].o = (jobject)((java_math_MutableBigInteger *) NULL_CHECK((frame[7].o)))->F_value;
	SM_java_lang_System_arraycopy_java_lang_Object_int_java_lang_Object_int_int(ctx, sp[0].o, temp0, sp[1].o, (jint(1)), ((jint)((java_math_MutableBigInteger *) NULL_CHECK((frame[0].o)))->F_intLen));
	LINE_NUMBER(1515);
	((java_math_MutableBigInteger *) NULL_CHECK((frame[7].o)))->F_intLen = ((jint)((java_math_MutableBigInteger *) NULL_CHECK((frame[0].o)))->F_intLen);
	LINE_NUMBER(1516);
	((java_math_MutableBigInteger *) NULL_CHECK((frame[7].o)))->F_offset = (jint(1));
	}
label_14:;
	{
	LINE_NUMBER(1519);
	frame[8].i = ((jint)((java_math_MutableBigInteger *) NULL_CHECK((frame[7].o)))->F_intLen);
	LINE_NUMBER(1522);
	frame[9].i = (((frame[8].i) - (frame[5].i)) + (jint(1)));
	LINE_NUMBER(1523);
	sp[0].o = (jobject)((java_math_MutableBigInteger *) NULL_CHECK((frame[2].o)))->F_value;
	if ((((jarray) nullCheck(ctx, sp[0].o))->length) >= (frame[9].i)) goto label_35;
	}
	{
	LINE_NUMBER(1524);
	sp[0].o = frame[2].o;
	sp[1].o = (jobject) createArray(ctx, &class_int, (frame[9].i));
	((java_math_MutableBigInteger *) NULL_CHECK(sp[0].o))->F_value = (jref) sp[1].o;
	LINE_NUMBER(1525);
	((java_math_MutableBigInteger *) NULL_CHECK((frame[2].o)))->F_offset = (jint(0));
	}
label_35:;
	{
	LINE_NUMBER(1527);
	((java_math_MutableBigInteger *) NULL_CHECK((frame[2].o)))->F_intLen = (frame[9].i);
	LINE_NUMBER(1528);
	sp[0].o = (jobject)((java_math_MutableBigInteger *) NULL_CHECK((frame[2].o)))->F_value;
	frame[10].o = sp[0].o;
	LINE_NUMBER(1532);
	if (((jint)((java_math_MutableBigInteger *) NULL_CHECK((frame[7].o)))->F_intLen) != (frame[8].i)) goto label_40;
	}
	{
	LINE_NUMBER(1533);
	((java_math_MutableBigInteger *) NULL_CHECK((frame[7].o)))->F_offset = (jint(0));
	LINE_NUMBER(1534);
	sp[0].o = (jobject)((java_math_MutableBigInteger *) NULL_CHECK((frame[7].o)))->F_value;
	ARRAY_ACCESS(jint, sp[0].o, (jint(0))) = (jint(0));
	LINE_NUMBER(1535);
	sp[0].o = frame[7].o;
	((java_math_MutableBigInteger *) NULL_CHECK(sp[0].o))->F_intLen = (((jint)((java_math_MutableBigInteger *) NULL_CHECK(sp[0].o))->F_intLen) + (jint(1)));
	}
label_40:;
	{
	LINE_NUMBER(1538);
	frame[11].i = ((jint)ARRAY_ACCESS(jint, (frame[6].o), (jint(0))));
	LINE_NUMBER(1539);
	frame[12].l = ((jlong((frame[11].i))) & (jlong(4294967295ll)));
	LINE_NUMBER(1540);
	frame[14].i = ((jint)ARRAY_ACCESS(jint, (frame[6].o), (jint(1))));
	LINE_NUMBER(1543);
	frame[15].i = (jint(0));
	}
label_47:;
	{
	if ((frame[15].i) >= ((frame[9].i) - (jint(1)))) goto label_48;
	}
	{
	LINE_NUMBER(1546);
	frame[16].i = (jint(0));
	LINE_NUMBER(1547);
	frame[17].i = (jint(0));
	LINE_NUMBER(1548);
	frame[18].i = (jint(0));
	LINE_NUMBER(1549);
	sp[0].o = (jobject)((java_math_MutableBigInteger *) NULL_CHECK((frame[7].o)))->F_value;
	frame[19].i = ((jint)ARRAY_ACCESS(jint, sp[0].o, ((frame[15].i) + ((jint)((java_math_MutableBigInteger *) NULL_CHECK((frame[7].o)))->F_offset))));
	LINE_NUMBER(1550);
	frame[20].i = ((frame[19].i) + (bit_cast<jint>(0x80000000)));
	LINE_NUMBER(1551);
	sp[0].o = (jobject)((java_math_MutableBigInteger *) NULL_CHECK((frame[7].o)))->F_value;
	frame[21].i = ((jint)ARRAY_ACCESS(jint, sp[0].o, (((frame[15].i) + (jint(1))) + ((jint)((java_math_MutableBigInteger *) NULL_CHECK((frame[7].o)))->F_offset))));
	LINE_NUMBER(1553);
	if ((frame[19].i) != (frame[11].i)) goto label_56;
	}
	{
	LINE_NUMBER(1554);
	frame[16].i = (jint(-1));
	LINE_NUMBER(1555);
	frame[17].i = ((frame[19].i) + (frame[21].i));
	LINE_NUMBER(1556);
	if (((frame[17].i) + (bit_cast<jint>(0x80000000))) >= (frame[20].i)) goto label_60;
	}
	INST_ICONST(1);
	goto label_61;
label_60:;
	INST_ICONST(0);
label_61:;
	INST_ISTORE(18);
	goto label_62;
label_56:;
	{
	LINE_NUMBER(1558);
	frame[22].l = (((jlong((frame[19].i))) << (32)) | ((jlong((frame[21].i))) & (jlong(4294967295ll))));
	LINE_NUMBER(1559);
	if ((longCompare((frame[22].l), (jlong(0)))) < 0) goto label_64;
	}
	{
	LINE_NUMBER(1560);
	frame[16].i = (jint(((frame[22].l) / (frame[12].l))));
	LINE_NUMBER(1561);
	frame[17].i = (jint(((frame[22].l) - ((jlong((frame[16].i))) * (frame[12].l)))));
	goto label_62;
	}
label_64:;
	{
	LINE_NUMBER(1563);
	jlong temp0 = (jlong)SM_java_math_MutableBigInteger_divWord_long_int_R_long(ctx, (frame[22].l), (frame[11].i));
	frame[24].l = temp0;
	LINE_NUMBER(1564);
	frame[16].i = (jint(((frame[24].l) & (jlong(4294967295ll)))));
	LINE_NUMBER(1565);
	frame[17].i = (jint((bit_cast<jlong>(bit_cast<uint64_t>((frame[24].l)) >> (32)))));
	}
label_62:;
	{
	LINE_NUMBER(1569);
	if ((frame[16].i) != 0) goto label_69;
	}
	LINE_NUMBER(1570);
	goto label_71;
label_69:;
	{
	LINE_NUMBER(1572);
	if ((frame[18].i) != 0) goto label_72;
	}
	{
	LINE_NUMBER(1573);
	sp[0].o = (jobject)((java_math_MutableBigInteger *) NULL_CHECK((frame[7].o)))->F_value;
	frame[22].l = ((jlong(((jint)ARRAY_ACCESS(jint, sp[0].o, (((frame[15].i) + (jint(2))) + ((jint)((java_math_MutableBigInteger *) NULL_CHECK((frame[7].o)))->F_offset)))))) & (jlong(4294967295ll)));
	LINE_NUMBER(1574);
	frame[24].l = ((((jlong((frame[17].i))) & (jlong(4294967295ll))) << (32)) | (frame[22].l));
	LINE_NUMBER(1575);
	frame[26].l = (((jlong((frame[14].i))) & (jlong(4294967295ll))) * ((jlong((frame[16].i))) & (jlong(4294967295ll))));
	LINE_NUMBER(1577);
	jint temp0 = (jint)M_java_math_MutableBigInteger_unsignedLongCompare_long_long_R_boolean(ctx, (frame[0].o), (frame[26].l), (frame[24].l));
	if (temp0 == 0) goto label_72;
	}
	{
	LINE_NUMBER(1578);
	INST_IINC(16, -1);
	LINE_NUMBER(1579);
	frame[17].i = (jint((((jlong((frame[17].i))) & (jlong(4294967295ll))) + (frame[12].l))));
	LINE_NUMBER(1580);
	if ((longCompare(((jlong((frame[17].i))) & (jlong(4294967295ll))), (frame[12].l))) < 0) goto label_72;
	}
	{
	LINE_NUMBER(1581);
	frame[26].l = ((frame[26].l) - ((jlong((frame[14].i))) & (jlong(4294967295ll))));
	LINE_NUMBER(1582);
	frame[24].l = ((((jlong((frame[17].i))) & (jlong(4294967295ll))) << (32)) | (frame[22].l));
	LINE_NUMBER(1583);
	jint temp0 = (jint)M_java_math_MutableBigInteger_unsignedLongCompare_long_long_R_boolean(ctx, (frame[0].o), (frame[26].l), (frame[24].l));
	if (temp0 == 0) goto label_72;
	}
	LINE_NUMBER(1584);
	INST_IINC(16, -1);
label_72:;
	{
	LINE_NUMBER(1590);
	sp[0].o = (jobject)((java_math_MutableBigInteger *) NULL_CHECK((frame[7].o)))->F_value;
	ARRAY_ACCESS(jint, sp[0].o, ((frame[15].i) + ((jint)((java_math_MutableBigInteger *) NULL_CHECK((frame[7].o)))->F_offset))) = (jint(0));
	LINE_NUMBER(1591);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((java_math_MutableBigInteger *) NULL_CHECK((frame[7].o)))->F_value;
	jint temp0 = (jint)M_java_math_MutableBigInteger_mulsub_Array1_int_Array1_int_int_int_int_R_int(ctx, sp[0].o, sp[1].o, (frame[6].o), (frame[16].i), (frame[5].i), ((frame[15].i) + ((jint)((java_math_MutableBigInteger *) NULL_CHECK((frame[7].o)))->F_offset)));
	frame[22].i = temp0;
	LINE_NUMBER(1594);
	if (((frame[22].i) + (bit_cast<jint>(0x80000000))) <= (frame[20].i)) goto label_86;
	}
	{
	LINE_NUMBER(1596);
	sp[0].o = frame[0].o;
	sp[1].o = frame[6].o;
	sp[2].o = (jobject)((java_math_MutableBigInteger *) NULL_CHECK((frame[7].o)))->F_value;
	jint temp0 = (jint)M_java_math_MutableBigInteger_divadd_Array1_int_Array1_int_int_R_int(ctx, sp[0].o, sp[1].o, sp[2].o, (((frame[15].i) + (jint(1))) + ((jint)((java_math_MutableBigInteger *) NULL_CHECK((frame[7].o)))->F_offset)));
	LINE_NUMBER(1597);
	INST_IINC(16, -1);
	}
label_86:;
	{
	LINE_NUMBER(1601);
	ARRAY_ACCESS(jint, (frame[10].o), (frame[15].i)) = (frame[16].i);
	}
label_71:;
	{
	LINE_NUMBER(1543);
	INST_IINC(15, 1);
	goto label_47;
	}
label_48:;
	{
	LINE_NUMBER(1605);
	frame[15].i = (jint(0));
	LINE_NUMBER(1606);
	frame[16].i = (jint(0));
	LINE_NUMBER(1607);
	frame[17].i = (jint(0));
	LINE_NUMBER(1608);
	sp[0].o = (jobject)((java_math_MutableBigInteger *) NULL_CHECK((frame[7].o)))->F_value;
	frame[18].i = ((jint)ARRAY_ACCESS(jint, sp[0].o, (((frame[9].i) - (jint(1))) + ((jint)((java_math_MutableBigInteger *) NULL_CHECK((frame[7].o)))->F_offset))));
	LINE_NUMBER(1609);
	frame[19].i = ((frame[18].i) + (bit_cast<jint>(0x80000000)));
	LINE_NUMBER(1610);
	sp[0].o = (jobject)((java_math_MutableBigInteger *) NULL_CHECK((frame[7].o)))->F_value;
	frame[20].i = ((jint)ARRAY_ACCESS(jint, sp[0].o, ((frame[9].i) + ((jint)((java_math_MutableBigInteger *) NULL_CHECK((frame[7].o)))->F_offset))));
	LINE_NUMBER(1612);
	if ((frame[18].i) != (frame[11].i)) goto label_95;
	}
	{
	LINE_NUMBER(1613);
	frame[15].i = (jint(-1));
	LINE_NUMBER(1614);
	frame[16].i = ((frame[18].i) + (frame[20].i));
	LINE_NUMBER(1615);
	if (((frame[16].i) + (bit_cast<jint>(0x80000000))) >= (frame[19].i)) goto label_99;
	}
	INST_ICONST(1);
	goto label_100;
label_99:;
	INST_ICONST(0);
label_100:;
	INST_ISTORE(17);
	goto label_101;
label_95:;
	{
	LINE_NUMBER(1617);
	frame[21].l = (((jlong((frame[18].i))) << (32)) | ((jlong((frame[20].i))) & (jlong(4294967295ll))));
	LINE_NUMBER(1618);
	if ((longCompare((frame[21].l), (jlong(0)))) < 0) goto label_103;
	}
	{
	LINE_NUMBER(1619);
	frame[15].i = (jint(((frame[21].l) / (frame[12].l))));
	LINE_NUMBER(1620);
	frame[16].i = (jint(((frame[21].l) - ((jlong((frame[15].i))) * (frame[12].l)))));
	goto label_101;
	}
label_103:;
	{
	LINE_NUMBER(1622);
	jlong temp0 = (jlong)SM_java_math_MutableBigInteger_divWord_long_int_R_long(ctx, (frame[21].l), (frame[11].i));
	frame[23].l = temp0;
	LINE_NUMBER(1623);
	frame[15].i = (jint(((frame[23].l) & (jlong(4294967295ll)))));
	LINE_NUMBER(1624);
	frame[16].i = (jint((bit_cast<jlong>(bit_cast<uint64_t>((frame[23].l)) >> (32)))));
	}
label_101:;
	{
	LINE_NUMBER(1627);
	if ((frame[15].i) == 0) goto label_108;
	}
	{
	LINE_NUMBER(1628);
	if ((frame[17].i) != 0) goto label_110;
	}
	{
	LINE_NUMBER(1629);
	sp[0].o = (jobject)((java_math_MutableBigInteger *) NULL_CHECK((frame[7].o)))->F_value;
	frame[21].l = ((jlong(((jint)ARRAY_ACCESS(jint, sp[0].o, (((frame[9].i) + (jint(1))) + ((jint)((java_math_MutableBigInteger *) NULL_CHECK((frame[7].o)))->F_offset)))))) & (jlong(4294967295ll)));
	LINE_NUMBER(1630);
	frame[23].l = ((((jlong((frame[16].i))) & (jlong(4294967295ll))) << (32)) | (frame[21].l));
	LINE_NUMBER(1631);
	frame[25].l = (((jlong((frame[14].i))) & (jlong(4294967295ll))) * ((jlong((frame[15].i))) & (jlong(4294967295ll))));
	LINE_NUMBER(1633);
	jint temp0 = (jint)M_java_math_MutableBigInteger_unsignedLongCompare_long_long_R_boolean(ctx, (frame[0].o), (frame[25].l), (frame[23].l));
	if (temp0 == 0) goto label_110;
	}
	{
	LINE_NUMBER(1634);
	INST_IINC(15, -1);
	LINE_NUMBER(1635);
	frame[16].i = (jint((((jlong((frame[16].i))) & (jlong(4294967295ll))) + (frame[12].l))));
	LINE_NUMBER(1636);
	if ((longCompare(((jlong((frame[16].i))) & (jlong(4294967295ll))), (frame[12].l))) < 0) goto label_110;
	}
	{
	LINE_NUMBER(1637);
	frame[25].l = ((frame[25].l) - ((jlong((frame[14].i))) & (jlong(4294967295ll))));
	LINE_NUMBER(1638);
	frame[23].l = ((((jlong((frame[16].i))) & (jlong(4294967295ll))) << (32)) | (frame[21].l));
	LINE_NUMBER(1639);
	jint temp0 = (jint)M_java_math_MutableBigInteger_unsignedLongCompare_long_long_R_boolean(ctx, (frame[0].o), (frame[25].l), (frame[23].l));
	if (temp0 == 0) goto label_110;
	}
	LINE_NUMBER(1640);
	INST_IINC(15, -1);
label_110:;
	{
	LINE_NUMBER(1648);
	sp[0].o = (jobject)((java_math_MutableBigInteger *) NULL_CHECK((frame[7].o)))->F_value;
	ARRAY_ACCESS(jint, sp[0].o, (((frame[9].i) - (jint(1))) + ((jint)((java_math_MutableBigInteger *) NULL_CHECK((frame[7].o)))->F_offset))) = (jint(0));
	LINE_NUMBER(1649);
	if ((frame[3].i) == 0) goto label_123;
	}
	{
	LINE_NUMBER(1650);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((java_math_MutableBigInteger *) NULL_CHECK((frame[7].o)))->F_value;
	jint temp0 = (jint)M_java_math_MutableBigInteger_mulsub_Array1_int_Array1_int_int_int_int_R_int(ctx, sp[0].o, sp[1].o, (frame[6].o), (frame[15].i), (frame[5].i), (((frame[9].i) - (jint(1))) + ((jint)((java_math_MutableBigInteger *) NULL_CHECK((frame[7].o)))->F_offset)));
	frame[21].i = temp0;
	goto label_126;
	}
label_123:;
	{
	LINE_NUMBER(1652);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((java_math_MutableBigInteger *) NULL_CHECK((frame[7].o)))->F_value;
	jint temp0 = (jint)M_java_math_MutableBigInteger_mulsubBorrow_Array1_int_Array1_int_int_int_int_R_int(ctx, sp[0].o, sp[1].o, (frame[6].o), (frame[15].i), (frame[5].i), (((frame[9].i) - (jint(1))) + ((jint)((java_math_MutableBigInteger *) NULL_CHECK((frame[7].o)))->F_offset)));
	frame[21].i = temp0;
	}
label_126:;
	{
	LINE_NUMBER(1655);
	if (((frame[21].i) + (bit_cast<jint>(0x80000000))) <= (frame[19].i)) goto label_127;
	}
	{
	LINE_NUMBER(1657);
	if ((frame[3].i) == 0) goto label_129;
	}
	{
	LINE_NUMBER(1658);
	sp[0].o = frame[0].o;
	sp[1].o = frame[6].o;
	sp[2].o = (jobject)((java_math_MutableBigInteger *) NULL_CHECK((frame[7].o)))->F_value;
	jint temp0 = (jint)M_java_math_MutableBigInteger_divadd_Array1_int_Array1_int_int_R_int(ctx, sp[0].o, sp[1].o, sp[2].o, ((((frame[9].i) - (jint(1))) + (jint(1))) + ((jint)((java_math_MutableBigInteger *) NULL_CHECK((frame[7].o)))->F_offset)));
	}
label_129:;
	LINE_NUMBER(1659);
	INST_IINC(15, -1);
label_127:;
	{
	LINE_NUMBER(1663);
	ARRAY_ACCESS(jint, (frame[10].o), ((frame[9].i) - (jint(1)))) = (frame[15].i);
	}
label_108:;
	{
	LINE_NUMBER(1667);
	if ((frame[3].i) == 0) goto label_131;
	}
	{
	LINE_NUMBER(1669);
	if ((frame[4].i) <= 0) goto label_133;
	}
	{
	LINE_NUMBER(1670);
	((func_java_math_MutableBigInteger_rightShift_int) ((void **) nullCheck(ctx, (frame[7].o))->vtable)[VTABLE_java_math_MutableBigInteger_rightShift_int])(ctx, (frame[7].o), (frame[4].i));
	}
label_133:;
	{
	LINE_NUMBER(1671);
	((func_java_math_MutableBigInteger_normalize) ((void **) nullCheck(ctx, (frame[7].o))->vtable)[VTABLE_java_math_MutableBigInteger_normalize])(ctx, (frame[7].o));
	}
label_131:;
	{
	LINE_NUMBER(1673);
	((func_java_math_MutableBigInteger_normalize) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_java_math_MutableBigInteger_normalize])(ctx, (frame[2].o));
	LINE_NUMBER(1674);
	if ((frame[3].i) == 0) goto label_136;
	}
	INST_ALOAD(7);
	goto label_137;
label_136:;
	INST_ACONST_NULL();
label_137:;
	popStackFrame(ctx);
	INST_ARETURN();

	popStackFrame(ctx);
}

jobject M_java_math_MutableBigInteger_divideLongMagnitude_long_java_math_MutableBigInteger_R_java_math_MutableBigInteger(jcontext ctx, jobject self, jlong param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[33];
	auto stack = &frame[26];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/math/MutableBigInteger:divideLongMagnitude", 33 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].l = param0;
	frame[3].o = param1;
	{
	LINE_NUMBER(1684);
	clinit_java_math_MutableBigInteger(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_math_MutableBigInteger);
	sp[1].o = (jobject) createArray(ctx, &class_int, (((jint)((java_math_MutableBigInteger *) NULL_CHECK((frame[0].o)))->F_intLen) + (jint(1))));
	init_java_math_MutableBigInteger_Array1_int(ctx, sp[0].o, sp[1].o);
	frame[4].o = sp[0].o;
	LINE_NUMBER(1685);
	sp[0].o = (jobject)((java_math_MutableBigInteger *) NULL_CHECK((frame[0].o)))->F_value;
	jint temp0 = (jint)((java_math_MutableBigInteger *) NULL_CHECK((frame[0].o)))->F_offset;
	sp[1].o = (jobject)((java_math_MutableBigInteger *) NULL_CHECK((frame[4].o)))->F_value;
	SM_java_lang_System_arraycopy_java_lang_Object_int_java_lang_Object_int_int(ctx, sp[0].o, temp0, sp[1].o, (jint(1)), ((jint)((java_math_MutableBigInteger *) NULL_CHECK((frame[0].o)))->F_intLen));
	LINE_NUMBER(1686);
	((java_math_MutableBigInteger *) NULL_CHECK((frame[4].o)))->F_intLen = ((jint)((java_math_MutableBigInteger *) NULL_CHECK((frame[0].o)))->F_intLen);
	LINE_NUMBER(1687);
	((java_math_MutableBigInteger *) NULL_CHECK((frame[4].o)))->F_offset = (jint(1));
	LINE_NUMBER(1689);
	frame[5].i = ((jint)((java_math_MutableBigInteger *) NULL_CHECK((frame[4].o)))->F_intLen);
	LINE_NUMBER(1691);
	frame[6].i = (((frame[5].i) - (jint(2))) + (jint(1)));
	LINE_NUMBER(1692);
	sp[0].o = (jobject)((java_math_MutableBigInteger *) NULL_CHECK((frame[3].o)))->F_value;
	if ((((jarray) nullCheck(ctx, sp[0].o))->length) >= (frame[6].i)) goto label_7;
	}
	{
	LINE_NUMBER(1693);
	sp[0].o = frame[3].o;
	sp[1].o = (jobject) createArray(ctx, &class_int, (frame[6].i));
	((java_math_MutableBigInteger *) NULL_CHECK(sp[0].o))->F_value = (jref) sp[1].o;
	LINE_NUMBER(1694);
	((java_math_MutableBigInteger *) NULL_CHECK((frame[3].o)))->F_offset = (jint(0));
	}
label_7:;
	{
	LINE_NUMBER(1696);
	((java_math_MutableBigInteger *) NULL_CHECK((frame[3].o)))->F_intLen = (frame[6].i);
	LINE_NUMBER(1697);
	sp[0].o = (jobject)((java_math_MutableBigInteger *) NULL_CHECK((frame[3].o)))->F_value;
	frame[7].o = sp[0].o;
	LINE_NUMBER(1700);
	jint temp0 = (jint)SM_java_lang_Long_numberOfLeadingZeros_long_R_int(ctx, (frame[1].l));
	frame[8].i = temp0;
	LINE_NUMBER(1701);
	if ((frame[8].i) <= 0) goto label_13;
	}
	{
	LINE_NUMBER(1702);
	frame[1].l = ((frame[1].l) << (frame[8].i));
	LINE_NUMBER(1703);
	((func_java_math_MutableBigInteger_leftShift_int) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_java_math_MutableBigInteger_leftShift_int])(ctx, (frame[4].o), (frame[8].i));
	}
label_13:;
	{
	LINE_NUMBER(1707);
	if (((jint)((java_math_MutableBigInteger *) NULL_CHECK((frame[4].o)))->F_intLen) != (frame[5].i)) goto label_16;
	}
	{
	LINE_NUMBER(1708);
	((java_math_MutableBigInteger *) NULL_CHECK((frame[4].o)))->F_offset = (jint(0));
	LINE_NUMBER(1709);
	sp[0].o = (jobject)((java_math_MutableBigInteger *) NULL_CHECK((frame[4].o)))->F_value;
	ARRAY_ACCESS(jint, sp[0].o, (jint(0))) = (jint(0));
	LINE_NUMBER(1710);
	sp[0].o = frame[4].o;
	((java_math_MutableBigInteger *) NULL_CHECK(sp[0].o))->F_intLen = (((jint)((java_math_MutableBigInteger *) NULL_CHECK(sp[0].o))->F_intLen) + (jint(1)));
	}
label_16:;
	{
	LINE_NUMBER(1713);
	frame[9].i = (jint((bit_cast<jlong>(bit_cast<uint64_t>((frame[1].l)) >> (32)))));
	LINE_NUMBER(1714);
	frame[10].l = ((jlong((frame[9].i))) & (jlong(4294967295ll)));
	LINE_NUMBER(1715);
	frame[12].i = (jint(((frame[1].l) & (jlong(4294967295ll)))));
	LINE_NUMBER(1718);
	frame[13].i = (jint(0));
	}
label_23:;
	{
	if ((frame[13].i) >= (frame[6].i)) goto label_24;
	}
	{
	LINE_NUMBER(1721);
	frame[14].i = (jint(0));
	LINE_NUMBER(1722);
	frame[15].i = (jint(0));
	LINE_NUMBER(1723);
	frame[16].i = (jint(0));
	LINE_NUMBER(1724);
	sp[0].o = (jobject)((java_math_MutableBigInteger *) NULL_CHECK((frame[4].o)))->F_value;
	frame[17].i = ((jint)ARRAY_ACCESS(jint, sp[0].o, ((frame[13].i) + ((jint)((java_math_MutableBigInteger *) NULL_CHECK((frame[4].o)))->F_offset))));
	LINE_NUMBER(1725);
	frame[18].i = ((frame[17].i) + (bit_cast<jint>(0x80000000)));
	LINE_NUMBER(1726);
	sp[0].o = (jobject)((java_math_MutableBigInteger *) NULL_CHECK((frame[4].o)))->F_value;
	frame[19].i = ((jint)ARRAY_ACCESS(jint, sp[0].o, (((frame[13].i) + (jint(1))) + ((jint)((java_math_MutableBigInteger *) NULL_CHECK((frame[4].o)))->F_offset))));
	LINE_NUMBER(1728);
	if ((frame[17].i) != (frame[9].i)) goto label_32;
	}
	{
	LINE_NUMBER(1729);
	frame[14].i = (jint(-1));
	LINE_NUMBER(1730);
	frame[15].i = ((frame[17].i) + (frame[19].i));
	LINE_NUMBER(1731);
	if (((frame[15].i) + (bit_cast<jint>(0x80000000))) >= (frame[18].i)) goto label_36;
	}
	INST_ICONST(1);
	goto label_37;
label_36:;
	INST_ICONST(0);
label_37:;
	INST_ISTORE(16);
	goto label_38;
label_32:;
	{
	LINE_NUMBER(1733);
	frame[20].l = (((jlong((frame[17].i))) << (32)) | ((jlong((frame[19].i))) & (jlong(4294967295ll))));
	LINE_NUMBER(1734);
	if ((longCompare((frame[20].l), (jlong(0)))) < 0) goto label_40;
	}
	{
	LINE_NUMBER(1735);
	frame[14].i = (jint(((frame[20].l) / (frame[10].l))));
	LINE_NUMBER(1736);
	frame[15].i = (jint(((frame[20].l) - ((jlong((frame[14].i))) * (frame[10].l)))));
	goto label_38;
	}
label_40:;
	{
	LINE_NUMBER(1738);
	jlong temp0 = (jlong)SM_java_math_MutableBigInteger_divWord_long_int_R_long(ctx, (frame[20].l), (frame[9].i));
	frame[22].l = temp0;
	LINE_NUMBER(1739);
	frame[14].i = (jint(((frame[22].l) & (jlong(4294967295ll)))));
	LINE_NUMBER(1740);
	frame[15].i = (jint((bit_cast<jlong>(bit_cast<uint64_t>((frame[22].l)) >> (32)))));
	}
label_38:;
	{
	LINE_NUMBER(1744);
	if ((frame[14].i) != 0) goto label_45;
	}
	LINE_NUMBER(1745);
	goto label_47;
label_45:;
	{
	LINE_NUMBER(1747);
	if ((frame[16].i) != 0) goto label_48;
	}
	{
	LINE_NUMBER(1748);
	sp[0].o = (jobject)((java_math_MutableBigInteger *) NULL_CHECK((frame[4].o)))->F_value;
	frame[20].l = ((jlong(((jint)ARRAY_ACCESS(jint, sp[0].o, (((frame[13].i) + (jint(2))) + ((jint)((java_math_MutableBigInteger *) NULL_CHECK((frame[4].o)))->F_offset)))))) & (jlong(4294967295ll)));
	LINE_NUMBER(1749);
	frame[22].l = ((((jlong((frame[15].i))) & (jlong(4294967295ll))) << (32)) | (frame[20].l));
	LINE_NUMBER(1750);
	frame[24].l = (((jlong((frame[12].i))) & (jlong(4294967295ll))) * ((jlong((frame[14].i))) & (jlong(4294967295ll))));
	LINE_NUMBER(1752);
	jint temp0 = (jint)M_java_math_MutableBigInteger_unsignedLongCompare_long_long_R_boolean(ctx, (frame[0].o), (frame[24].l), (frame[22].l));
	if (temp0 == 0) goto label_48;
	}
	{
	LINE_NUMBER(1753);
	INST_IINC(14, -1);
	LINE_NUMBER(1754);
	frame[15].i = (jint((((jlong((frame[15].i))) & (jlong(4294967295ll))) + (frame[10].l))));
	LINE_NUMBER(1755);
	if ((longCompare(((jlong((frame[15].i))) & (jlong(4294967295ll))), (frame[10].l))) < 0) goto label_48;
	}
	{
	LINE_NUMBER(1756);
	frame[24].l = ((frame[24].l) - ((jlong((frame[12].i))) & (jlong(4294967295ll))));
	LINE_NUMBER(1757);
	frame[22].l = ((((jlong((frame[15].i))) & (jlong(4294967295ll))) << (32)) | (frame[20].l));
	LINE_NUMBER(1758);
	jint temp0 = (jint)M_java_math_MutableBigInteger_unsignedLongCompare_long_long_R_boolean(ctx, (frame[0].o), (frame[24].l), (frame[22].l));
	if (temp0 == 0) goto label_48;
	}
	LINE_NUMBER(1759);
	INST_IINC(14, -1);
label_48:;
	{
	LINE_NUMBER(1765);
	sp[0].o = (jobject)((java_math_MutableBigInteger *) NULL_CHECK((frame[4].o)))->F_value;
	ARRAY_ACCESS(jint, sp[0].o, ((frame[13].i) + ((jint)((java_math_MutableBigInteger *) NULL_CHECK((frame[4].o)))->F_offset))) = (jint(0));
	LINE_NUMBER(1766);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((java_math_MutableBigInteger *) NULL_CHECK((frame[4].o)))->F_value;
	jint temp0 = (jint)M_java_math_MutableBigInteger_mulsubLong_Array1_int_int_int_int_int_R_int(ctx, sp[0].o, sp[1].o, (frame[9].i), (frame[12].i), (frame[14].i), ((frame[13].i) + ((jint)((java_math_MutableBigInteger *) NULL_CHECK((frame[4].o)))->F_offset)));
	frame[20].i = temp0;
	LINE_NUMBER(1769);
	if (((frame[20].i) + (bit_cast<jint>(0x80000000))) <= (frame[18].i)) goto label_62;
	}
	{
	LINE_NUMBER(1771);
	sp[0].o = frame[0].o;
	jint temp0 = frame[9].i;
	jint temp1 = frame[12].i;
	sp[1].o = (jobject)((java_math_MutableBigInteger *) NULL_CHECK((frame[4].o)))->F_value;
	jint temp2 = (jint)M_java_math_MutableBigInteger_divaddLong_int_int_Array1_int_int_R_int(ctx, sp[0].o, temp0, temp1, sp[1].o, (((frame[13].i) + (jint(1))) + ((jint)((java_math_MutableBigInteger *) NULL_CHECK((frame[4].o)))->F_offset)));
	LINE_NUMBER(1772);
	INST_IINC(14, -1);
	}
label_62:;
	{
	LINE_NUMBER(1776);
	ARRAY_ACCESS(jint, (frame[7].o), (frame[13].i)) = (frame[14].i);
	}
label_47:;
	{
	LINE_NUMBER(1718);
	INST_IINC(13, 1);
	goto label_23;
	}
label_24:;
	{
	LINE_NUMBER(1780);
	if ((frame[8].i) <= 0) goto label_65;
	}
	{
	LINE_NUMBER(1781);
	((func_java_math_MutableBigInteger_rightShift_int) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_java_math_MutableBigInteger_rightShift_int])(ctx, (frame[4].o), (frame[8].i));
	}
label_65:;
	{
	LINE_NUMBER(1783);
	((func_java_math_MutableBigInteger_normalize) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_java_math_MutableBigInteger_normalize])(ctx, (frame[3].o));
	LINE_NUMBER(1784);
	((func_java_math_MutableBigInteger_normalize) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_java_math_MutableBigInteger_normalize])(ctx, (frame[4].o));
	LINE_NUMBER(1785);
	popStackFrame(ctx);
	return (frame[4].o);
	}

	popStackFrame(ctx);
}

jint M_java_math_MutableBigInteger_divaddLong_int_int_Array1_int_int_R_int(jcontext ctx, jobject self, jint param0, jint param1, jobject param2, jint param3) {
	NULL_CHECK(self);
	jtype frame[15];
	auto stack = &frame[9];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/math/MutableBigInteger:divaddLong", 15 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].i = param1;
	frame[3].o = param2;
	frame[4].i = param3;
	{
	LINE_NUMBER(1794);
	frame[5].l = (jlong(0));
	LINE_NUMBER(1796);
	frame[7].l = (((jlong((frame[2].i))) & (jlong(4294967295ll))) + ((jlong(((jint)ARRAY_ACCESS(jint, (frame[3].o), ((jint(1)) + (frame[4].i)))))) & (jlong(4294967295ll))));
	LINE_NUMBER(1797);
	ARRAY_ACCESS(jint, (frame[3].o), ((jint(1)) + (frame[4].i))) = (jint((frame[7].l)));
	LINE_NUMBER(1799);
	frame[7].l = ((((jlong((frame[1].i))) & (jlong(4294967295ll))) + ((jlong(((jint)ARRAY_ACCESS(jint, (frame[3].o), (frame[4].i))))) & (jlong(4294967295ll)))) + (frame[5].l));
	LINE_NUMBER(1800);
	ARRAY_ACCESS(jint, (frame[3].o), (frame[4].i)) = (jint((frame[7].l)));
	LINE_NUMBER(1801);
	frame[5].l = (bit_cast<jlong>(bit_cast<uint64_t>((frame[7].l)) >> (32)));
	LINE_NUMBER(1802);
	popStackFrame(ctx);
	return (jint((frame[5].l)));
	}

	popStackFrame(ctx);
}

jint M_java_math_MutableBigInteger_mulsubLong_Array1_int_int_int_int_int_R_int(jcontext ctx, jobject self, jobject param0, jint param1, jint param2, jint param3, jint param4) {
	NULL_CHECK(self);
	jtype frame[22];
	auto stack = &frame[14];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/math/MutableBigInteger:mulsubLong", 22 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	frame[3].i = param2;
	frame[4].i = param3;
	frame[5].i = param4;
	{
	LINE_NUMBER(1811);
	frame[6].l = ((jlong((frame[4].i))) & (jlong(4294967295ll)));
	LINE_NUMBER(1812);
	INST_IINC(5, 2);
	LINE_NUMBER(1813);
	frame[8].l = (((jlong((frame[3].i))) & (jlong(4294967295ll))) * (frame[6].l));
	LINE_NUMBER(1814);
	frame[10].l = ((jlong(((jint)ARRAY_ACCESS(jint, (frame[1].o), (frame[5].i))))) - (frame[8].l));
	LINE_NUMBER(1815);
	sp[0].o = frame[1].o;
	jint temp0 = frame[5].i;
	INST_IINC(5, -1);
	ARRAY_ACCESS(jint, sp[0].o, temp0) = (jint((frame[10].l)));
	LINE_NUMBER(1816);
	jlong temp1 = bit_cast<jlong>(bit_cast<uint64_t>((frame[8].l)) >> (32));
	LINE_NUMBER(1817);
	sp[0].l = temp1;
	sp += 1;
	if ((longCompare(((frame[10].l) & (jlong(4294967295ll))), ((jlong(((jint((frame[8].l))) ^ (jint(-1))))) & (jlong(4294967295ll))))) <= 0) goto label_7;
	}
	{
	LINE_NUMBER(1818);
	jint temp0 = jint(1);
	sp[0].i = temp0;
	sp += 1;
	goto label_9;
	}
label_7:;
	INST_ICONST(0);
label_9:;
	{
	sp -= 2;
	frame[12].l = (sp[0].l + (jlong(sp[1].i)));
	LINE_NUMBER(1819);
	frame[8].l = ((((jlong((frame[2].i))) & (jlong(4294967295ll))) * (frame[6].l)) + (frame[12].l));
	LINE_NUMBER(1820);
	frame[10].l = ((jlong(((jint)ARRAY_ACCESS(jint, (frame[1].o), (frame[5].i))))) - (frame[8].l));
	LINE_NUMBER(1821);
	sp[0].o = frame[1].o;
	jint temp0 = frame[5].i;
	INST_IINC(5, -1);
	ARRAY_ACCESS(jint, sp[0].o, temp0) = (jint((frame[10].l)));
	LINE_NUMBER(1822);
	jlong temp1 = bit_cast<jlong>(bit_cast<uint64_t>((frame[8].l)) >> (32));
	LINE_NUMBER(1823);
	sp[0].l = temp1;
	sp += 1;
	if ((longCompare(((frame[10].l) & (jlong(4294967295ll))), ((jlong(((jint((frame[8].l))) ^ (jint(-1))))) & (jlong(4294967295ll))))) <= 0) goto label_15;
	}
	{
	LINE_NUMBER(1824);
	jint temp0 = jint(1);
	sp[0].i = temp0;
	sp += 1;
	goto label_17;
	}
label_15:;
	INST_ICONST(0);
label_17:;
	{
	sp -= 2;
	frame[12].l = (sp[0].l + (jlong(sp[1].i)));
	LINE_NUMBER(1825);
	popStackFrame(ctx);
	return (jint((frame[12].l)));
	}

	popStackFrame(ctx);
}

jbool M_java_math_MutableBigInteger_unsignedLongCompare_long_long_R_boolean(jcontext ctx, jobject self, jlong param0, jlong param1) {
	NULL_CHECK(self);
	jtype frame[11];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/math/MutableBigInteger:unsignedLongCompare", 11 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].l = param0;
	frame[3].l = param1;
	{
	LINE_NUMBER(1833);
	if ((longCompare(((frame[1].l) + (jlong(-9223372036854775807ll))), ((frame[3].l) + (jlong(-9223372036854775807ll))))) <= 0) goto label_1;
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

jlong SM_java_math_MutableBigInteger_divWord_long_int_R_long(jcontext ctx, jlong param0, jint param1) {
	jtype frame[15];
	auto stack = &frame[9];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/math/MutableBigInteger:divWord", 15 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_math_MutableBigInteger(ctx);
	frame[0].l = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(1844);
	frame[3].l = ((jlong((frame[2].i))) & (jlong(4294967295ll)));
	LINE_NUMBER(1847);
	if ((longCompare((frame[3].l), (jlong(1)))) != 0) goto label_2;
	}
	{
	LINE_NUMBER(1848);
	frame[7].l = (jlong((jint((frame[0].l)))));
	LINE_NUMBER(1849);
	frame[5].l = (jlong(0));
	LINE_NUMBER(1850);
	popStackFrame(ctx);
	return (((frame[5].l) << (32)) | ((frame[7].l) & (jlong(4294967295ll))));
	}
label_2:;
	{
	LINE_NUMBER(1854);
	frame[7].l = ((bit_cast<jlong>(bit_cast<uint64_t>((frame[0].l)) >> (jint(1)))) / (bit_cast<jlong>(bit_cast<uint64_t>((frame[3].l)) >> (jint(1)))));
	LINE_NUMBER(1855);
	frame[5].l = ((frame[0].l) - ((frame[7].l) * (frame[3].l)));
	}
label_7:;
	{
	LINE_NUMBER(1858);
	if ((longCompare((frame[5].l), (jlong(0)))) >= 0) goto label_8;
	}
	{
	LINE_NUMBER(1859);
	frame[5].l = ((frame[5].l) + (frame[3].l));
	LINE_NUMBER(1860);
	frame[7].l = ((frame[7].l) - (jlong(1)));
	goto label_7;
	}
label_8:;
	{
	LINE_NUMBER(1862);
	if ((longCompare((frame[5].l), (frame[3].l))) < 0) goto label_11;
	}
	{
	LINE_NUMBER(1863);
	frame[5].l = ((frame[5].l) - (frame[3].l));
	LINE_NUMBER(1864);
	frame[7].l = ((frame[7].l) + (jlong(1)));
	goto label_8;
	}
label_11:;
	{
	LINE_NUMBER(1867);
	popStackFrame(ctx);
	return (((frame[5].l) << (32)) | ((frame[7].l) & (jlong(4294967295ll))));
	}

	popStackFrame(ctx);
}

jobject M_java_math_MutableBigInteger_hybridGCD_java_math_MutableBigInteger_R_java_math_MutableBigInteger(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/math/MutableBigInteger:hybridGCD", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(1876);
	frame[2].o = (frame[0].o);
	LINE_NUMBER(1877);
	clinit_java_math_MutableBigInteger(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_math_MutableBigInteger);
	init_java_math_MutableBigInteger(ctx, sp[0].o);
	frame[3].o = sp[0].o;
	}
label_2:;
	{
	LINE_NUMBER(1879);
	if (((jint)((java_math_MutableBigInteger *) NULL_CHECK((frame[1].o)))->F_intLen) == 0) goto label_3;
	}
	{
	LINE_NUMBER(1880);
	jint temp0 = (jint)SM_java_lang_Math_abs_int_R_int(ctx, (((jint)((java_math_MutableBigInteger *) NULL_CHECK((frame[2].o)))->F_intLen) - ((jint)((java_math_MutableBigInteger *) NULL_CHECK((frame[1].o)))->F_intLen)));
	if (temp0 >= (jint(2))) goto label_5;
	}
	{
	LINE_NUMBER(1881);
	sp[0].o = (jobject)M_java_math_MutableBigInteger_binaryGCD_java_math_MutableBigInteger_R_java_math_MutableBigInteger(ctx, (frame[2].o), (frame[1].o));
	popStackFrame(ctx);
	return sp[0].o;
	}
label_5:;
	{
	LINE_NUMBER(1883);
	sp[0].o = (jobject)((func_java_math_MutableBigInteger_divide_java_math_MutableBigInteger_java_math_MutableBigInteger_R_java_math_MutableBigInteger) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_java_math_MutableBigInteger_divide_java_math_MutableBigInteger_java_math_MutableBigInteger_R_java_math_MutableBigInteger])(ctx, (frame[2].o), (frame[1].o), (frame[3].o));
	frame[4].o = sp[0].o;
	LINE_NUMBER(1884);
	frame[2].o = (frame[1].o);
	LINE_NUMBER(1885);
	frame[1].o = (frame[4].o);
	LINE_NUMBER(1886);
	goto label_2;
	}
label_3:;
	{
	LINE_NUMBER(1887);
	popStackFrame(ctx);
	return (frame[2].o);
	}

	popStackFrame(ctx);
}

jobject M_java_math_MutableBigInteger_binaryGCD_java_math_MutableBigInteger_R_java_math_MutableBigInteger(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[16];
	auto stack = &frame[13];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/math/MutableBigInteger:binaryGCD", 16 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(1896);
	frame[2].o = (frame[0].o);
	LINE_NUMBER(1897);
	clinit_java_math_MutableBigInteger(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_math_MutableBigInteger);
	init_java_math_MutableBigInteger(ctx, sp[0].o);
	frame[3].o = sp[0].o;
	LINE_NUMBER(1900);
	jint temp0 = (jint)M_java_math_MutableBigInteger_getLowestSetBit_R_int(ctx, (frame[2].o));
	frame[4].i = temp0;
	LINE_NUMBER(1901);
	jint temp1 = (jint)M_java_math_MutableBigInteger_getLowestSetBit_R_int(ctx, (frame[1].o));
	frame[5].i = temp1;
	LINE_NUMBER(1902);
	if ((frame[4].i) >= (frame[5].i)) goto label_5;
	}
	INST_ILOAD(4);
	goto label_6;
label_5:;
	INST_ILOAD(5);
label_6:;
	{
	sp -= 1;
	frame[6].i = sp[0].i;
	LINE_NUMBER(1903);
	if ((frame[6].i) == 0) goto label_8;
	}
	{
	LINE_NUMBER(1904);
	((func_java_math_MutableBigInteger_rightShift_int) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_java_math_MutableBigInteger_rightShift_int])(ctx, (frame[2].o), (frame[6].i));
	LINE_NUMBER(1905);
	((func_java_math_MutableBigInteger_rightShift_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_math_MutableBigInteger_rightShift_int])(ctx, (frame[1].o), (frame[6].i));
	}
label_8:;
	{
	LINE_NUMBER(1909);
	if ((frame[6].i) != (frame[4].i)) goto label_11;
	}
	INST_ICONST(1);
	goto label_12;
label_11:;
	INST_ICONST(0);
label_12:;
	{
	sp -= 1;
	frame[7].i = sp[0].i;
	LINE_NUMBER(1910);
	if ((frame[7].i) == 0) goto label_14;
	}
	INST_ALOAD(1);
	goto label_15;
label_14:;
	INST_ALOAD(2);
label_15:;
	{
	sp -= 1;
	frame[8].o = sp[0].o;
	LINE_NUMBER(1911);
	if ((frame[7].i) == 0) goto label_17;
	}
	INST_ICONST(-1);
	goto label_18;
label_17:;
	INST_ICONST(1);
label_18:;
	INST_ISTORE(9);
label_19:;
	{
	LINE_NUMBER(1914);
	jint temp0 = (jint)M_java_math_MutableBigInteger_getLowestSetBit_R_int(ctx, (frame[8].o));
	frame[10].i = temp0;
	if (temp0 < 0) goto label_21;
	}
	{
	LINE_NUMBER(1916);
	((func_java_math_MutableBigInteger_rightShift_int) ((void **) nullCheck(ctx, (frame[8].o))->vtable)[VTABLE_java_math_MutableBigInteger_rightShift_int])(ctx, (frame[8].o), (frame[10].i));
	LINE_NUMBER(1918);
	if ((frame[9].i) <= 0) goto label_24;
	}
	{
	LINE_NUMBER(1919);
	frame[2].o = (frame[8].o);
	goto label_26;
	}
label_24:;
	{
	LINE_NUMBER(1921);
	frame[1].o = (frame[8].o);
	}
label_26:;
	{
	LINE_NUMBER(1924);
	if (((jint)((java_math_MutableBigInteger *) NULL_CHECK((frame[2].o)))->F_intLen) >= (jint(2))) goto label_27;
	}
	{
	if (((jint)((java_math_MutableBigInteger *) NULL_CHECK((frame[1].o)))->F_intLen) >= (jint(2))) goto label_27;
	}
	{
	LINE_NUMBER(1925);
	sp[0].o = (jobject)((java_math_MutableBigInteger *) NULL_CHECK((frame[2].o)))->F_value;
	frame[11].i = ((jint)ARRAY_ACCESS(jint, sp[0].o, ((jint)((java_math_MutableBigInteger *) NULL_CHECK((frame[2].o)))->F_offset)));
	LINE_NUMBER(1926);
	sp[0].o = (jobject)((java_math_MutableBigInteger *) NULL_CHECK((frame[1].o)))->F_value;
	frame[12].i = ((jint)ARRAY_ACCESS(jint, sp[0].o, ((jint)((java_math_MutableBigInteger *) NULL_CHECK((frame[1].o)))->F_offset)));
	LINE_NUMBER(1927);
	jint temp0 = (jint)SM_java_math_MutableBigInteger_binaryGcd_int_int_R_int(ctx, (frame[11].i), (frame[12].i));
	frame[11].i = temp0;
	LINE_NUMBER(1928);
	sp[0].o = (jobject)((java_math_MutableBigInteger *) NULL_CHECK((frame[3].o)))->F_value;
	ARRAY_ACCESS(jint, sp[0].o, (jint(0))) = (frame[11].i);
	LINE_NUMBER(1929);
	((java_math_MutableBigInteger *) NULL_CHECK((frame[3].o)))->F_intLen = (jint(1));
	LINE_NUMBER(1930);
	((java_math_MutableBigInteger *) NULL_CHECK((frame[3].o)))->F_offset = (jint(0));
	LINE_NUMBER(1931);
	if ((frame[6].i) <= 0) goto label_35;
	}
	{
	LINE_NUMBER(1932);
	((func_java_math_MutableBigInteger_leftShift_int) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_java_math_MutableBigInteger_leftShift_int])(ctx, (frame[3].o), (frame[6].i));
	}
label_35:;
	{
	LINE_NUMBER(1933);
	popStackFrame(ctx);
	return (frame[3].o);
	}
label_27:;
	{
	LINE_NUMBER(1937);
	jint temp0 = (jint)M_java_math_MutableBigInteger_difference_java_math_MutableBigInteger_R_int(ctx, (frame[2].o), (frame[1].o));
	frame[9].i = temp0;
	if (temp0 != 0) goto label_37;
	}
	LINE_NUMBER(1938);
	goto label_21;
label_37:;
	{
	LINE_NUMBER(1939);
	if ((frame[9].i) < 0) goto label_39;
	}
	INST_ALOAD(2);
	goto label_40;
label_39:;
	INST_ALOAD(1);
label_40:;
	INST_ASTORE(8);
	goto label_19;
label_21:;
	{
	LINE_NUMBER(1942);
	if ((frame[6].i) <= 0) goto label_41;
	}
	{
	LINE_NUMBER(1943);
	((func_java_math_MutableBigInteger_leftShift_int) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_java_math_MutableBigInteger_leftShift_int])(ctx, (frame[2].o), (frame[6].i));
	}
label_41:;
	{
	LINE_NUMBER(1944);
	popStackFrame(ctx);
	return (frame[2].o);
	}

	popStackFrame(ctx);
}

jint SM_java_math_MutableBigInteger_binaryGcd_int_int_R_int(jcontext ctx, jint param0, jint param1) {
	jtype frame[8];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/math/MutableBigInteger:binaryGcd", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_math_MutableBigInteger(ctx);
	frame[0].i = param0;
	frame[1].i = param1;
	{
	LINE_NUMBER(1951);
	if ((frame[1].i) != 0) goto label_1;
	}
	{
	LINE_NUMBER(1952);
	popStackFrame(ctx);
	return (frame[0].i);
	}
label_1:;
	{
	LINE_NUMBER(1953);
	if ((frame[0].i) != 0) goto label_3;
	}
	{
	LINE_NUMBER(1954);
	popStackFrame(ctx);
	return (frame[1].i);
	}
label_3:;
	{
	LINE_NUMBER(1957);
	jint temp0 = (jint)SM_java_lang_Integer_numberOfTrailingZeros_int_R_int(ctx, (frame[0].i));
	frame[2].i = temp0;
	LINE_NUMBER(1958);
	jint temp1 = (jint)SM_java_lang_Integer_numberOfTrailingZeros_int_R_int(ctx, (frame[1].i));
	frame[3].i = temp1;
	LINE_NUMBER(1959);
	frame[0].i = (bit_cast<jint>(bit_cast<uint32_t>((frame[0].i)) >> (frame[2].i)));
	LINE_NUMBER(1960);
	frame[1].i = (bit_cast<jint>(bit_cast<uint32_t>((frame[1].i)) >> (frame[3].i)));
	LINE_NUMBER(1962);
	if ((frame[2].i) >= (frame[3].i)) goto label_9;
	}
	INST_ILOAD(2);
	goto label_10;
label_9:;
	INST_ILOAD(3);
label_10:;
	INST_ISTORE(4);
label_11:;
	{
	LINE_NUMBER(1964);
	if ((frame[0].i) == (frame[1].i)) goto label_12;
	}
	{
	LINE_NUMBER(1965);
	if (((frame[0].i) + (bit_cast<jint>(0x80000000))) <= ((frame[1].i) + (bit_cast<jint>(0x80000000)))) goto label_14;
	}
	{
	LINE_NUMBER(1966);
	frame[0].i = ((frame[0].i) - (frame[1].i));
	LINE_NUMBER(1967);
	jint temp0 = frame[0].i;
	jint temp1 = (jint)SM_java_lang_Integer_numberOfTrailingZeros_int_R_int(ctx, (frame[0].i));
	frame[0].i = (bit_cast<jint>(bit_cast<uint32_t>(temp0) >> temp1));
	goto label_11;
	}
label_14:;
	{
	LINE_NUMBER(1969);
	frame[1].i = ((frame[1].i) - (frame[0].i));
	LINE_NUMBER(1970);
	jint temp0 = frame[1].i;
	jint temp1 = (jint)SM_java_lang_Integer_numberOfTrailingZeros_int_R_int(ctx, (frame[1].i));
	frame[1].i = (bit_cast<jint>(bit_cast<uint32_t>(temp0) >> temp1));
	goto label_11;
	}
label_12:;
	{
	LINE_NUMBER(1973);
	popStackFrame(ctx);
	return ((frame[0].i) << (frame[4].i));
	}

	popStackFrame(ctx);
}

jobject M_java_math_MutableBigInteger_mutableModInverse_java_math_MutableBigInteger_R_java_math_MutableBigInteger(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[14];
	auto stack = &frame[11];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/math/MutableBigInteger:mutableModInverse", 14 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(1982);
	jint temp0 = (jint)((func_java_math_MutableBigInteger_isOdd_R_boolean) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_math_MutableBigInteger_isOdd_R_boolean])(ctx, (frame[1].o));
	if (temp0 == 0) goto label_1;
	}
	{
	LINE_NUMBER(1983);
	sp[0].o = (jobject)M_java_math_MutableBigInteger_modInverse_java_math_MutableBigInteger_R_java_math_MutableBigInteger(ctx, (frame[0].o), (frame[1].o));
	popStackFrame(ctx);
	return sp[0].o;
	}
label_1:;
	{
	LINE_NUMBER(1986);
	jint temp0 = (jint)((func_java_math_MutableBigInteger_isEven_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_math_MutableBigInteger_isEven_R_boolean])(ctx, (frame[0].o));
	if (temp0 == 0) goto label_3;
	}
	{
	LINE_NUMBER(1987);
	clinit_java_lang_ArithmeticException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_ArithmeticException);
	init_java_lang_ArithmeticException_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"BigInteger not invertible."_j))));
	throwException(ctx, sp[0].o);	}
label_3:;
	{
	LINE_NUMBER(1990);
	jint temp0 = (jint)M_java_math_MutableBigInteger_getLowestSetBit_R_int(ctx, (frame[1].o));
	frame[2].i = temp0;
	LINE_NUMBER(1993);
	clinit_java_math_MutableBigInteger(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_math_MutableBigInteger);
	init_java_math_MutableBigInteger_java_math_MutableBigInteger(ctx, sp[0].o, (frame[1].o));
	frame[3].o = sp[0].o;
	LINE_NUMBER(1994);
	((func_java_math_MutableBigInteger_rightShift_int) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_java_math_MutableBigInteger_rightShift_int])(ctx, (frame[3].o), (frame[2].i));
	LINE_NUMBER(1996);
	jint temp1 = (jint)((func_java_math_MutableBigInteger_isOne_R_boolean) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_java_math_MutableBigInteger_isOne_R_boolean])(ctx, (frame[3].o));
	if (temp1 == 0) goto label_8;
	}
	{
	LINE_NUMBER(1997);
	sp[0].o = (jobject)((func_java_math_MutableBigInteger_modInverseMP2_int_R_java_math_MutableBigInteger) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_math_MutableBigInteger_modInverseMP2_int_R_java_math_MutableBigInteger])(ctx, (frame[0].o), (frame[2].i));
	popStackFrame(ctx);
	return sp[0].o;
	}
label_8:;
	{
	LINE_NUMBER(2000);
	sp[0].o = (jobject)M_java_math_MutableBigInteger_modInverse_java_math_MutableBigInteger_R_java_math_MutableBigInteger(ctx, (frame[0].o), (frame[3].o));
	frame[4].o = sp[0].o;
	LINE_NUMBER(2003);
	sp[0].o = (jobject)((func_java_math_MutableBigInteger_modInverseMP2_int_R_java_math_MutableBigInteger) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_math_MutableBigInteger_modInverseMP2_int_R_java_math_MutableBigInteger])(ctx, (frame[0].o), (frame[2].i));
	frame[5].o = sp[0].o;
	LINE_NUMBER(2006);
	sp[0].o = (jobject)SM_java_math_MutableBigInteger_modInverseBP2_java_math_MutableBigInteger_int_R_java_math_MutableBigInteger(ctx, (frame[3].o), (frame[2].i));
	frame[6].o = sp[0].o;
	LINE_NUMBER(2007);
	sp[0].o = (jobject)((func_java_math_MutableBigInteger_modInverseMP2_int_R_java_math_MutableBigInteger) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_java_math_MutableBigInteger_modInverseMP2_int_R_java_math_MutableBigInteger])(ctx, (frame[3].o), (frame[2].i));
	frame[7].o = sp[0].o;
	LINE_NUMBER(2009);
	clinit_java_math_MutableBigInteger(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_math_MutableBigInteger);
	init_java_math_MutableBigInteger(ctx, sp[0].o);
	frame[8].o = sp[0].o;
	LINE_NUMBER(2010);
	clinit_java_math_MutableBigInteger(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_math_MutableBigInteger);
	init_java_math_MutableBigInteger(ctx, sp[0].o);
	frame[9].o = sp[0].o;
	LINE_NUMBER(2011);
	clinit_java_math_MutableBigInteger(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_math_MutableBigInteger);
	init_java_math_MutableBigInteger(ctx, sp[0].o);
	frame[10].o = sp[0].o;
	LINE_NUMBER(2013);
	((func_java_math_MutableBigInteger_leftShift_int) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_java_math_MutableBigInteger_leftShift_int])(ctx, (frame[4].o), (frame[2].i));
	LINE_NUMBER(2014);
	((func_java_math_MutableBigInteger_multiply_java_math_MutableBigInteger_java_math_MutableBigInteger) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_java_math_MutableBigInteger_multiply_java_math_MutableBigInteger_java_math_MutableBigInteger])(ctx, (frame[4].o), (frame[6].o), (frame[10].o));
	LINE_NUMBER(2016);
	((func_java_math_MutableBigInteger_multiply_java_math_MutableBigInteger_java_math_MutableBigInteger) ((void **) nullCheck(ctx, (frame[5].o))->vtable)[VTABLE_java_math_MutableBigInteger_multiply_java_math_MutableBigInteger_java_math_MutableBigInteger])(ctx, (frame[5].o), (frame[3].o), (frame[8].o));
	LINE_NUMBER(2017);
	((func_java_math_MutableBigInteger_multiply_java_math_MutableBigInteger_java_math_MutableBigInteger) ((void **) nullCheck(ctx, (frame[8].o))->vtable)[VTABLE_java_math_MutableBigInteger_multiply_java_math_MutableBigInteger_java_math_MutableBigInteger])(ctx, (frame[8].o), (frame[7].o), (frame[9].o));
	LINE_NUMBER(2019);
	((func_java_math_MutableBigInteger_add_java_math_MutableBigInteger) ((void **) nullCheck(ctx, (frame[10].o))->vtable)[VTABLE_java_math_MutableBigInteger_add_java_math_MutableBigInteger])(ctx, (frame[10].o), (frame[9].o));
	LINE_NUMBER(2020);
	sp[0].o = (jobject)((func_java_math_MutableBigInteger_divide_java_math_MutableBigInteger_java_math_MutableBigInteger_R_java_math_MutableBigInteger) ((void **) nullCheck(ctx, (frame[10].o))->vtable)[VTABLE_java_math_MutableBigInteger_divide_java_math_MutableBigInteger_java_math_MutableBigInteger_R_java_math_MutableBigInteger])(ctx, (frame[10].o), (frame[1].o), (frame[8].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_java_math_MutableBigInteger_modInverseMP2_int_R_java_math_MutableBigInteger(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[16];
	auto stack = &frame[8];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/math/MutableBigInteger:modInverseMP2", 16 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(2027);
	jint temp0 = (jint)((func_java_math_MutableBigInteger_isEven_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_math_MutableBigInteger_isEven_R_boolean])(ctx, (frame[0].o));
	if (temp0 == 0) goto label_1;
	}
	{
	LINE_NUMBER(2028);
	clinit_java_lang_ArithmeticException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_ArithmeticException);
	init_java_lang_ArithmeticException_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"Non-invertible. (GCD != 1)"_j))));
	throwException(ctx, sp[0].o);	}
label_1:;
	{
	LINE_NUMBER(2030);
	if ((frame[1].i) <= (64)) goto label_3;
	}
	{
	LINE_NUMBER(2031);
	sp[0].o = (jobject)((func_java_math_MutableBigInteger_euclidModInverse_int_R_java_math_MutableBigInteger) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_math_MutableBigInteger_euclidModInverse_int_R_java_math_MutableBigInteger])(ctx, (frame[0].o), (frame[1].i));
	popStackFrame(ctx);
	return sp[0].o;
	}
label_3:;
	{
	LINE_NUMBER(2033);
	sp[0].o = (jobject)((java_math_MutableBigInteger *) NULL_CHECK((frame[0].o)))->F_value;
	jint temp0 = (jint)SM_java_math_MutableBigInteger_inverseMod32_int_R_int(ctx, ((jint)ARRAY_ACCESS(jint, sp[0].o, ((((jint)((java_math_MutableBigInteger *) NULL_CHECK((frame[0].o)))->F_offset) + ((jint)((java_math_MutableBigInteger *) NULL_CHECK((frame[0].o)))->F_intLen)) - (jint(1))))));
	frame[2].i = temp0;
	LINE_NUMBER(2035);
	if ((frame[1].i) >= (33)) goto label_6;
	}
	{
	LINE_NUMBER(2036);
	if ((frame[1].i) != (32)) goto label_8;
	}
	INST_ILOAD(2);
	goto label_9;
label_8:;
	{
	jint temp0 = (frame[2].i) & (((jint(1)) << (frame[1].i)) - (jint(1)));
	sp[0].i = temp0;
	sp += 1;
	}
label_9:;
	{
	sp -= 1;
	frame[2].i = sp[0].i;
	LINE_NUMBER(2037);
	clinit_java_math_MutableBigInteger(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_math_MutableBigInteger);
	init_java_math_MutableBigInteger_int(ctx, sp[0].o, (frame[2].i));
	popStackFrame(ctx);
	return sp[0].o;
	}
label_6:;
	{
	LINE_NUMBER(2040);
	sp[0].o = (jobject)((java_math_MutableBigInteger *) NULL_CHECK((frame[0].o)))->F_value;
	frame[3].l = ((jlong(((jint)ARRAY_ACCESS(jint, sp[0].o, ((((jint)((java_math_MutableBigInteger *) NULL_CHECK((frame[0].o)))->F_offset) + ((jint)((java_math_MutableBigInteger *) NULL_CHECK((frame[0].o)))->F_intLen)) - (jint(1))))))) & (jlong(4294967295ll)));
	LINE_NUMBER(2041);
	if (((jint)((java_math_MutableBigInteger *) NULL_CHECK((frame[0].o)))->F_intLen) <= (jint(1))) goto label_12;
	}
	{
	LINE_NUMBER(2042);
	jlong temp0 = frame[3].l;
	sp[0].o = (jobject)((java_math_MutableBigInteger *) NULL_CHECK((frame[0].o)))->F_value;
	frame[3].l = (temp0 | ((jlong(((jint)ARRAY_ACCESS(jint, sp[0].o, ((((jint)((java_math_MutableBigInteger *) NULL_CHECK((frame[0].o)))->F_offset) + ((jint)((java_math_MutableBigInteger *) NULL_CHECK((frame[0].o)))->F_intLen)) - (jint(2))))))) << (32)));
	}
label_12:;
	{
	LINE_NUMBER(2043);
	frame[5].l = ((jlong((frame[2].i))) & (jlong(4294967295ll)));
	LINE_NUMBER(2044);
	frame[5].l = ((frame[5].l) * ((jlong(2ll)) - ((frame[3].l) * (frame[5].l))));
	LINE_NUMBER(2045);
	if ((frame[1].i) != (64)) goto label_16;
	}
	INST_LLOAD(5);
	goto label_17;
label_16:;
	{
	jlong temp0 = (frame[5].l) & (((jlong(1)) << (frame[1].i)) - (jlong(1)));
	sp[0].l = temp0;
	sp += 1;
	}
label_17:;
	{
	sp -= 1;
	frame[5].l = sp[0].l;
	LINE_NUMBER(2047);
	clinit_java_math_MutableBigInteger(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_math_MutableBigInteger);
	sp[1].o = (jobject) createArray(ctx, &class_int, (jint(2)));
	init_java_math_MutableBigInteger_Array1_int(ctx, sp[0].o, sp[1].o);
	frame[7].o = sp[0].o;
	LINE_NUMBER(2048);
	sp[0].o = (jobject)((java_math_MutableBigInteger *) NULL_CHECK((frame[7].o)))->F_value;
	ARRAY_ACCESS(jint, sp[0].o, (jint(0))) = (jint((bit_cast<jlong>(bit_cast<uint64_t>((frame[5].l)) >> (32)))));
	LINE_NUMBER(2049);
	sp[0].o = (jobject)((java_math_MutableBigInteger *) NULL_CHECK((frame[7].o)))->F_value;
	ARRAY_ACCESS(jint, sp[0].o, (jint(1))) = (jint((frame[5].l)));
	LINE_NUMBER(2050);
	((java_math_MutableBigInteger *) NULL_CHECK((frame[7].o)))->F_intLen = (jint(2));
	LINE_NUMBER(2051);
	((func_java_math_MutableBigInteger_normalize) ((void **) nullCheck(ctx, (frame[7].o))->vtable)[VTABLE_java_math_MutableBigInteger_normalize])(ctx, (frame[7].o));
	LINE_NUMBER(2052);
	popStackFrame(ctx);
	return (frame[7].o);
	}

	popStackFrame(ctx);
}

jint SM_java_math_MutableBigInteger_inverseMod32_int_R_int(jcontext ctx, jint param0) {
	jtype frame[6];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/math/MutableBigInteger:inverseMod32", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_math_MutableBigInteger(ctx);
	frame[0].i = param0;
	{
	LINE_NUMBER(2060);
	frame[1].i = (frame[0].i);
	LINE_NUMBER(2061);
	frame[1].i = ((frame[1].i) * ((jint(2)) - ((frame[0].i) * (frame[1].i))));
	LINE_NUMBER(2062);
	frame[1].i = ((frame[1].i) * ((jint(2)) - ((frame[0].i) * (frame[1].i))));
	LINE_NUMBER(2063);
	frame[1].i = ((frame[1].i) * ((jint(2)) - ((frame[0].i) * (frame[1].i))));
	LINE_NUMBER(2064);
	frame[1].i = ((frame[1].i) * ((jint(2)) - ((frame[0].i) * (frame[1].i))));
	LINE_NUMBER(2065);
	popStackFrame(ctx);
	return (frame[1].i);
	}

	popStackFrame(ctx);
}

jlong SM_java_math_MutableBigInteger_inverseMod64_long_R_long(jcontext ctx, jlong param0) {
	jtype frame[12];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/math/MutableBigInteger:inverseMod64", 12 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_math_MutableBigInteger(ctx);
	frame[0].l = param0;
	{
	LINE_NUMBER(2073);
	frame[2].l = (frame[0].l);
	LINE_NUMBER(2074);
	frame[2].l = ((frame[2].l) * ((jlong(2ll)) - ((frame[0].l) * (frame[2].l))));
	LINE_NUMBER(2075);
	frame[2].l = ((frame[2].l) * ((jlong(2ll)) - ((frame[0].l) * (frame[2].l))));
	LINE_NUMBER(2076);
	frame[2].l = ((frame[2].l) * ((jlong(2ll)) - ((frame[0].l) * (frame[2].l))));
	LINE_NUMBER(2077);
	frame[2].l = ((frame[2].l) * ((jlong(2ll)) - ((frame[0].l) * (frame[2].l))));
	LINE_NUMBER(2078);
	frame[2].l = ((frame[2].l) * ((jlong(2ll)) - ((frame[0].l) * (frame[2].l))));
	LINE_NUMBER(2079);
	if ((clinit_java_math_MutableBigInteger(ctx), (jint)SF_java_math_MutableBigInteger_$assertionsDisabled) != 0) goto label_7;
	}
	{
	if ((longCompare(((frame[2].l) * (frame[0].l)), (jlong(1)))) == 0) goto label_7;
	}
	{
	clinit_java_lang_AssertionError(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_AssertionError);
	init_java_lang_AssertionError(ctx, sp[0].o);
	throwException(ctx, sp[0].o);	}
label_7:;
	{
	LINE_NUMBER(2080);
	popStackFrame(ctx);
	return (frame[2].l);
	}

	popStackFrame(ctx);
}

jobject SM_java_math_MutableBigInteger_modInverseBP2_java_math_MutableBigInteger_int_R_java_math_MutableBigInteger(jcontext ctx, jobject param0, jint param1) {
	jtype frame[6];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/math/MutableBigInteger:modInverseBP2", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_math_MutableBigInteger(ctx);
	frame[0].o = param0;
	frame[1].i = param1;
	{
	LINE_NUMBER(2088);
	clinit_java_math_MutableBigInteger(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_math_MutableBigInteger);
	init_java_math_MutableBigInteger_int(ctx, sp[0].o, (jint(1)));
	clinit_java_math_MutableBigInteger(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_math_MutableBigInteger);
	init_java_math_MutableBigInteger_java_math_MutableBigInteger(ctx, sp[1].o, (frame[0].o));
	sp[0].o = (jobject)SM_java_math_MutableBigInteger_fixup_java_math_MutableBigInteger_java_math_MutableBigInteger_int_R_java_math_MutableBigInteger(ctx, sp[0].o, sp[1].o, (frame[1].i));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_java_math_MutableBigInteger_modInverse_java_math_MutableBigInteger_R_java_math_MutableBigInteger(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[15];
	auto stack = &frame[11];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/math/MutableBigInteger:modInverse", 15 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(2101);
	clinit_java_math_MutableBigInteger(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_math_MutableBigInteger);
	init_java_math_MutableBigInteger_java_math_MutableBigInteger(ctx, sp[0].o, (frame[1].o));
	frame[2].o = sp[0].o;
	LINE_NUMBER(2102);
	clinit_java_math_MutableBigInteger(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_math_MutableBigInteger);
	init_java_math_MutableBigInteger_java_math_MutableBigInteger(ctx, sp[0].o, (frame[0].o));
	frame[3].o = sp[0].o;
	LINE_NUMBER(2103);
	clinit_java_math_MutableBigInteger(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_math_MutableBigInteger);
	init_java_math_MutableBigInteger_java_math_MutableBigInteger(ctx, sp[0].o, (frame[2].o));
	frame[4].o = sp[0].o;
	LINE_NUMBER(2104);
	clinit_java_math_SignedMutableBigInteger(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_math_SignedMutableBigInteger);
	init_java_math_SignedMutableBigInteger_int(ctx, sp[0].o, (jint(1)));
	frame[5].o = sp[0].o;
	LINE_NUMBER(2105);
	clinit_java_math_SignedMutableBigInteger(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_math_SignedMutableBigInteger);
	init_java_math_SignedMutableBigInteger(ctx, sp[0].o);
	frame[6].o = sp[0].o;
	LINE_NUMBER(2106);
	frame[7].o = (jobject(nullptr));
	LINE_NUMBER(2107);
	frame[8].o = (jobject(nullptr));
	LINE_NUMBER(2109);
	frame[9].i = (jint(0));
	LINE_NUMBER(2111);
	jint temp0 = (jint)((func_java_math_MutableBigInteger_isEven_R_boolean) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_java_math_MutableBigInteger_isEven_R_boolean])(ctx, (frame[3].o));
	if (temp0 == 0) goto label_9;
	}
	{
	LINE_NUMBER(2112);
	jint temp0 = (jint)M_java_math_MutableBigInteger_getLowestSetBit_R_int(ctx, (frame[3].o));
	frame[10].i = temp0;
	LINE_NUMBER(2113);
	((func_java_math_MutableBigInteger_rightShift_int) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_java_math_MutableBigInteger_rightShift_int])(ctx, (frame[3].o), (frame[10].i));
	LINE_NUMBER(2114);
	((func_java_math_SignedMutableBigInteger_leftShift_int) ((void **) nullCheck(ctx, (frame[6].o))->vtable)[VTABLE_java_math_SignedMutableBigInteger_leftShift_int])(ctx, (frame[6].o), (frame[10].i));
	LINE_NUMBER(2115);
	frame[9].i = (frame[10].i);
	}
label_9:;
	{
	LINE_NUMBER(2119);
	jint temp0 = (jint)((func_java_math_MutableBigInteger_isOne_R_boolean) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_java_math_MutableBigInteger_isOne_R_boolean])(ctx, (frame[3].o));
	if (temp0 != 0) goto label_14;
	}
	{
	LINE_NUMBER(2121);
	jint temp0 = (jint)((func_java_math_MutableBigInteger_isZero_R_boolean) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_java_math_MutableBigInteger_isZero_R_boolean])(ctx, (frame[3].o));
	if (temp0 == 0) goto label_16;
	}
	{
	LINE_NUMBER(2122);
	clinit_java_lang_ArithmeticException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_ArithmeticException);
	init_java_lang_ArithmeticException_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"BigInteger not invertible."_j))));
	throwException(ctx, sp[0].o);	}
label_16:;
	{
	LINE_NUMBER(2125);
	jint temp0 = (jint)((func_java_math_MutableBigInteger_compare_java_math_MutableBigInteger_R_int) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_java_math_MutableBigInteger_compare_java_math_MutableBigInteger_R_int])(ctx, (frame[3].o), (frame[4].o));
	if (temp0 >= 0) goto label_18;
	}
	{
	LINE_NUMBER(2126);
	frame[7].o = (frame[3].o);
	frame[3].o = (frame[4].o);
	frame[4].o = (frame[7].o);
	LINE_NUMBER(2127);
	frame[8].o = (frame[6].o);
	frame[6].o = (frame[5].o);
	frame[5].o = (frame[8].o);
	}
label_18:;
	{
	LINE_NUMBER(2131);
	sp[0].o = (jobject)((java_math_MutableBigInteger *) NULL_CHECK((frame[3].o)))->F_value;
	jint temp0 = (jint)ARRAY_ACCESS(jint, sp[0].o, ((((jint)((java_math_MutableBigInteger *) NULL_CHECK((frame[3].o)))->F_offset) + ((jint)((java_math_MutableBigInteger *) NULL_CHECK((frame[3].o)))->F_intLen)) - (jint(1))));
	sp[0].o = (jobject)((java_math_MutableBigInteger *) NULL_CHECK((frame[4].o)))->F_value;
	if (((temp0 ^ ((jint)ARRAY_ACCESS(jint, sp[0].o, ((((jint)((java_math_MutableBigInteger *) NULL_CHECK((frame[4].o)))->F_offset) + ((jint)((java_math_MutableBigInteger *) NULL_CHECK((frame[4].o)))->F_intLen)) - (jint(1)))))) & (jint(3))) != 0) goto label_21;
	}
	{
	LINE_NUMBER(2133);
	jint temp0 = (jint)((func_java_math_MutableBigInteger_subtract_java_math_MutableBigInteger_R_int) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_java_math_MutableBigInteger_subtract_java_math_MutableBigInteger_R_int])(ctx, (frame[3].o), (frame[4].o));
	LINE_NUMBER(2134);
	((func_java_math_SignedMutableBigInteger_signedSubtract_java_math_SignedMutableBigInteger) ((void **) nullCheck(ctx, (frame[5].o))->vtable)[VTABLE_java_math_SignedMutableBigInteger_signedSubtract_java_math_SignedMutableBigInteger])(ctx, (frame[5].o), (frame[6].o));
	goto label_24;
	}
label_21:;
	{
	LINE_NUMBER(2136);
	((func_java_math_MutableBigInteger_add_java_math_MutableBigInteger) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_java_math_MutableBigInteger_add_java_math_MutableBigInteger])(ctx, (frame[3].o), (frame[4].o));
	LINE_NUMBER(2137);
	((func_java_math_SignedMutableBigInteger_signedAdd_java_math_SignedMutableBigInteger) ((void **) nullCheck(ctx, (frame[5].o))->vtable)[VTABLE_java_math_SignedMutableBigInteger_signedAdd_java_math_SignedMutableBigInteger])(ctx, (frame[5].o), (frame[6].o));
	}
label_24:;
	{
	LINE_NUMBER(2141);
	jint temp0 = (jint)M_java_math_MutableBigInteger_getLowestSetBit_R_int(ctx, (frame[3].o));
	frame[10].i = temp0;
	LINE_NUMBER(2142);
	((func_java_math_MutableBigInteger_rightShift_int) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_java_math_MutableBigInteger_rightShift_int])(ctx, (frame[3].o), (frame[10].i));
	LINE_NUMBER(2143);
	((func_java_math_SignedMutableBigInteger_leftShift_int) ((void **) nullCheck(ctx, (frame[6].o))->vtable)[VTABLE_java_math_SignedMutableBigInteger_leftShift_int])(ctx, (frame[6].o), (frame[10].i));
	LINE_NUMBER(2144);
	frame[9].i = ((frame[9].i) + (frame[10].i));
	LINE_NUMBER(2145);
	goto label_9;
	}
label_14:;
	{
	LINE_NUMBER(2147);
	jint temp0 = (jint)((func_java_math_SignedMutableBigInteger_compare_java_math_MutableBigInteger_R_int) ((void **) nullCheck(ctx, (frame[5].o))->vtable)[VTABLE_java_math_SignedMutableBigInteger_compare_java_math_MutableBigInteger_R_int])(ctx, (frame[5].o), (frame[2].o));
	if (temp0 < 0) goto label_30;
	}
	{
	LINE_NUMBER(2148);
	sp[0].o = frame[5].o;
	sp[1].o = frame[2].o;
	clinit_java_math_MutableBigInteger(ctx);
	sp[2].o = gcAlloc(ctx, &class_java_math_MutableBigInteger);
	init_java_math_MutableBigInteger(ctx, sp[2].o);
	sp[0].o = (jobject)((func_java_math_SignedMutableBigInteger_divide_java_math_MutableBigInteger_java_math_MutableBigInteger_R_java_math_MutableBigInteger) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_math_SignedMutableBigInteger_divide_java_math_MutableBigInteger_java_math_MutableBigInteger_R_java_math_MutableBigInteger])(ctx, sp[0].o, sp[1].o, sp[2].o);
	frame[10].o = sp[0].o;
	LINE_NUMBER(2153);
	((func_java_math_SignedMutableBigInteger_copyValue_java_math_MutableBigInteger) ((void **) nullCheck(ctx, (frame[5].o))->vtable)[VTABLE_java_math_SignedMutableBigInteger_copyValue_java_math_MutableBigInteger])(ctx, (frame[5].o), (frame[10].o));
	}
label_30:;
	{
	LINE_NUMBER(2156);
	if (((jint)((java_math_SignedMutableBigInteger *) NULL_CHECK((frame[5].o)))->F_sign) >= 0) goto label_33;
	}
	{
	LINE_NUMBER(2157);
	((func_java_math_SignedMutableBigInteger_signedAdd_java_math_MutableBigInteger) ((void **) nullCheck(ctx, (frame[5].o))->vtable)[VTABLE_java_math_SignedMutableBigInteger_signedAdd_java_math_MutableBigInteger])(ctx, (frame[5].o), (frame[2].o));
	}
label_33:;
	{
	LINE_NUMBER(2160);
	sp[0].o = (jobject)SM_java_math_MutableBigInteger_fixup_java_math_MutableBigInteger_java_math_MutableBigInteger_int_R_java_math_MutableBigInteger(ctx, (frame[5].o), (frame[2].o), (frame[9].i));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject SM_java_math_MutableBigInteger_fixup_java_math_MutableBigInteger_java_math_MutableBigInteger_int_R_java_math_MutableBigInteger(jcontext ctx, jobject param0, jobject param1, jint param2) {
	jtype frame[12];
	auto stack = &frame[8];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/math/MutableBigInteger:fixup", 12 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_math_MutableBigInteger(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	frame[2].i = param2;
	{
	LINE_NUMBER(2170);
	clinit_java_math_MutableBigInteger(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_math_MutableBigInteger);
	init_java_math_MutableBigInteger(ctx, sp[0].o);
	frame[3].o = sp[0].o;
	LINE_NUMBER(2172);
	sp[0].o = (jobject)((java_math_MutableBigInteger *) NULL_CHECK((frame[1].o)))->F_value;
	jint temp0 = (jint)SM_java_math_MutableBigInteger_inverseMod32_int_R_int(ctx, ((jint)ARRAY_ACCESS(jint, sp[0].o, ((((jint)((java_math_MutableBigInteger *) NULL_CHECK((frame[1].o)))->F_offset) + ((jint)((java_math_MutableBigInteger *) NULL_CHECK((frame[1].o)))->F_intLen)) - (jint(1))))));
	frame[4].i = (-temp0);
	LINE_NUMBER(2174);
	frame[5].i = (jint(0));
	frame[6].i = ((frame[2].i) >> (jint(5)));
	}
label_4:;
	{
	if ((frame[5].i) >= (frame[6].i)) goto label_5;
	}
	{
	LINE_NUMBER(2176);
	jint temp0 = frame[4].i;
	sp[0].o = (jobject)((java_math_MutableBigInteger *) NULL_CHECK((frame[0].o)))->F_value;
	frame[7].i = (temp0 * ((jint)ARRAY_ACCESS(jint, sp[0].o, ((((jint)((java_math_MutableBigInteger *) NULL_CHECK((frame[0].o)))->F_offset) + ((jint)((java_math_MutableBigInteger *) NULL_CHECK((frame[0].o)))->F_intLen)) - (jint(1))))));
	LINE_NUMBER(2178);
	((func_java_math_MutableBigInteger_mul_int_java_math_MutableBigInteger) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_math_MutableBigInteger_mul_int_java_math_MutableBigInteger])(ctx, (frame[1].o), (frame[7].i), (frame[3].o));
	LINE_NUMBER(2179);
	((func_java_math_MutableBigInteger_add_java_math_MutableBigInteger) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_math_MutableBigInteger_add_java_math_MutableBigInteger])(ctx, (frame[0].o), (frame[3].o));
	LINE_NUMBER(2181);
	sp[0].o = frame[0].o;
	((java_math_MutableBigInteger *) NULL_CHECK(sp[0].o))->F_intLen = (((jint)((java_math_MutableBigInteger *) NULL_CHECK(sp[0].o))->F_intLen) - (jint(1)));
	LINE_NUMBER(2174);
	INST_IINC(5, 1);
	goto label_4;
	}
label_5:;
	{
	LINE_NUMBER(2183);
	frame[5].i = ((frame[2].i) & (31));
	LINE_NUMBER(2184);
	if ((frame[5].i) == 0) goto label_12;
	}
	{
	LINE_NUMBER(2186);
	jint temp0 = frame[4].i;
	sp[0].o = (jobject)((java_math_MutableBigInteger *) NULL_CHECK((frame[0].o)))->F_value;
	frame[6].i = (temp0 * ((jint)ARRAY_ACCESS(jint, sp[0].o, ((((jint)((java_math_MutableBigInteger *) NULL_CHECK((frame[0].o)))->F_offset) + ((jint)((java_math_MutableBigInteger *) NULL_CHECK((frame[0].o)))->F_intLen)) - (jint(1))))));
	LINE_NUMBER(2187);
	frame[6].i = ((frame[6].i) & (((jint(1)) << (frame[5].i)) - (jint(1))));
	LINE_NUMBER(2189);
	((func_java_math_MutableBigInteger_mul_int_java_math_MutableBigInteger) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_math_MutableBigInteger_mul_int_java_math_MutableBigInteger])(ctx, (frame[1].o), (frame[6].i), (frame[3].o));
	LINE_NUMBER(2190);
	((func_java_math_MutableBigInteger_add_java_math_MutableBigInteger) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_math_MutableBigInteger_add_java_math_MutableBigInteger])(ctx, (frame[0].o), (frame[3].o));
	LINE_NUMBER(2192);
	((func_java_math_MutableBigInteger_rightShift_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_math_MutableBigInteger_rightShift_int])(ctx, (frame[0].o), (frame[5].i));
	}
label_12:;
	{
	LINE_NUMBER(2196);
	jint temp0 = (jint)((func_java_math_MutableBigInteger_compare_java_math_MutableBigInteger_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_math_MutableBigInteger_compare_java_math_MutableBigInteger_R_int])(ctx, (frame[0].o), (frame[1].o));
	if (temp0 < 0) goto label_18;
	}
	{
	LINE_NUMBER(2197);
	sp[0].o = frame[0].o;
	sp[1].o = frame[1].o;
	clinit_java_math_MutableBigInteger(ctx);
	sp[2].o = gcAlloc(ctx, &class_java_math_MutableBigInteger);
	init_java_math_MutableBigInteger(ctx, sp[2].o);
	sp[0].o = (jobject)((func_java_math_MutableBigInteger_divide_java_math_MutableBigInteger_java_math_MutableBigInteger_R_java_math_MutableBigInteger) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_math_MutableBigInteger_divide_java_math_MutableBigInteger_java_math_MutableBigInteger_R_java_math_MutableBigInteger])(ctx, sp[0].o, sp[1].o, sp[2].o);
	frame[0].o = sp[0].o;
	}
label_18:;
	{
	LINE_NUMBER(2199);
	popStackFrame(ctx);
	return (frame[0].o);
	}

	popStackFrame(ctx);
}

jobject M_java_math_MutableBigInteger_euclidModInverse_int_R_java_math_MutableBigInteger(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[14];
	auto stack = &frame[11];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/math/MutableBigInteger:euclidModInverse", 14 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(2207);
	clinit_java_math_MutableBigInteger(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_math_MutableBigInteger);
	init_java_math_MutableBigInteger_int(ctx, sp[0].o, (jint(1)));
	frame[2].o = sp[0].o;
	LINE_NUMBER(2208);
	((func_java_math_MutableBigInteger_leftShift_int) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_java_math_MutableBigInteger_leftShift_int])(ctx, (frame[2].o), (frame[1].i));
	LINE_NUMBER(2209);
	clinit_java_math_MutableBigInteger(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_math_MutableBigInteger);
	init_java_math_MutableBigInteger_java_math_MutableBigInteger(ctx, sp[0].o, (frame[2].o));
	frame[3].o = sp[0].o;
	LINE_NUMBER(2211);
	clinit_java_math_MutableBigInteger(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_math_MutableBigInteger);
	init_java_math_MutableBigInteger_java_math_MutableBigInteger(ctx, sp[0].o, (frame[0].o));
	frame[4].o = sp[0].o;
	LINE_NUMBER(2212);
	clinit_java_math_MutableBigInteger(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_math_MutableBigInteger);
	init_java_math_MutableBigInteger(ctx, sp[0].o);
	frame[5].o = sp[0].o;
	LINE_NUMBER(2213);
	sp[0].o = (jobject)((func_java_math_MutableBigInteger_divide_java_math_MutableBigInteger_java_math_MutableBigInteger_R_java_math_MutableBigInteger) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_java_math_MutableBigInteger_divide_java_math_MutableBigInteger_java_math_MutableBigInteger_R_java_math_MutableBigInteger])(ctx, (frame[2].o), (frame[4].o), (frame[5].o));
	frame[6].o = sp[0].o;
	LINE_NUMBER(2215);
	frame[7].o = (frame[2].o);
	LINE_NUMBER(2217);
	frame[2].o = (frame[6].o);
	LINE_NUMBER(2218);
	frame[6].o = (frame[7].o);
	LINE_NUMBER(2220);
	clinit_java_math_MutableBigInteger(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_math_MutableBigInteger);
	init_java_math_MutableBigInteger_java_math_MutableBigInteger(ctx, sp[0].o, (frame[5].o));
	frame[8].o = sp[0].o;
	LINE_NUMBER(2221);
	clinit_java_math_MutableBigInteger(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_math_MutableBigInteger);
	init_java_math_MutableBigInteger_int(ctx, sp[0].o, (jint(1)));
	frame[9].o = sp[0].o;
	LINE_NUMBER(2222);
	clinit_java_math_MutableBigInteger(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_math_MutableBigInteger);
	init_java_math_MutableBigInteger(ctx, sp[0].o);
	frame[10].o = sp[0].o;
	}
label_12:;
	{
	LINE_NUMBER(2224);
	jint temp0 = (jint)((func_java_math_MutableBigInteger_isOne_R_boolean) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_java_math_MutableBigInteger_isOne_R_boolean])(ctx, (frame[2].o));
	if (temp0 != 0) goto label_13;
	}
	{
	LINE_NUMBER(2225);
	sp[0].o = (jobject)((func_java_math_MutableBigInteger_divide_java_math_MutableBigInteger_java_math_MutableBigInteger_R_java_math_MutableBigInteger) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_java_math_MutableBigInteger_divide_java_math_MutableBigInteger_java_math_MutableBigInteger_R_java_math_MutableBigInteger])(ctx, (frame[4].o), (frame[2].o), (frame[5].o));
	frame[6].o = sp[0].o;
	LINE_NUMBER(2227);
	if (((jint)((java_math_MutableBigInteger *) NULL_CHECK((frame[6].o)))->F_intLen) != 0) goto label_16;
	}
	{
	LINE_NUMBER(2228);
	clinit_java_lang_ArithmeticException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_ArithmeticException);
	init_java_lang_ArithmeticException_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"BigInteger not invertible."_j))));
	throwException(ctx, sp[0].o);	}
label_16:;
	{
	LINE_NUMBER(2230);
	frame[7].o = (frame[6].o);
	LINE_NUMBER(2231);
	frame[4].o = (frame[7].o);
	LINE_NUMBER(2233);
	if (((jint)((java_math_MutableBigInteger *) NULL_CHECK((frame[5].o)))->F_intLen) != (jint(1))) goto label_20;
	}
	{
	LINE_NUMBER(2234);
	sp[0].o = frame[8].o;
	sp[1].o = (jobject)((java_math_MutableBigInteger *) NULL_CHECK((frame[5].o)))->F_value;
	((func_java_math_MutableBigInteger_mul_int_java_math_MutableBigInteger) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_math_MutableBigInteger_mul_int_java_math_MutableBigInteger])(ctx, sp[0].o, ((jint)ARRAY_ACCESS(jint, sp[1].o, ((jint)((java_math_MutableBigInteger *) NULL_CHECK((frame[5].o)))->F_offset))), (frame[10].o));
	goto label_22;
	}
label_20:;
	{
	LINE_NUMBER(2236);
	((func_java_math_MutableBigInteger_multiply_java_math_MutableBigInteger_java_math_MutableBigInteger) ((void **) nullCheck(ctx, (frame[5].o))->vtable)[VTABLE_java_math_MutableBigInteger_multiply_java_math_MutableBigInteger_java_math_MutableBigInteger])(ctx, (frame[5].o), (frame[8].o), (frame[10].o));
	}
label_22:;
	{
	LINE_NUMBER(2237);
	frame[7].o = (frame[5].o);
	LINE_NUMBER(2238);
	frame[5].o = (frame[10].o);
	LINE_NUMBER(2239);
	frame[10].o = (frame[7].o);
	LINE_NUMBER(2240);
	((func_java_math_MutableBigInteger_add_java_math_MutableBigInteger) ((void **) nullCheck(ctx, (frame[9].o))->vtable)[VTABLE_java_math_MutableBigInteger_add_java_math_MutableBigInteger])(ctx, (frame[9].o), (frame[5].o));
	LINE_NUMBER(2242);
	jint temp0 = (jint)((func_java_math_MutableBigInteger_isOne_R_boolean) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_java_math_MutableBigInteger_isOne_R_boolean])(ctx, (frame[4].o));
	if (temp0 == 0) goto label_27;
	}
	{
	LINE_NUMBER(2243);
	popStackFrame(ctx);
	return (frame[9].o);
	}
label_27:;
	{
	LINE_NUMBER(2245);
	sp[0].o = (jobject)((func_java_math_MutableBigInteger_divide_java_math_MutableBigInteger_java_math_MutableBigInteger_R_java_math_MutableBigInteger) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_java_math_MutableBigInteger_divide_java_math_MutableBigInteger_java_math_MutableBigInteger_R_java_math_MutableBigInteger])(ctx, (frame[2].o), (frame[4].o), (frame[5].o));
	frame[6].o = sp[0].o;
	LINE_NUMBER(2247);
	if (((jint)((java_math_MutableBigInteger *) NULL_CHECK((frame[6].o)))->F_intLen) != 0) goto label_30;
	}
	{
	LINE_NUMBER(2248);
	clinit_java_lang_ArithmeticException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_ArithmeticException);
	init_java_lang_ArithmeticException_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"BigInteger not invertible."_j))));
	throwException(ctx, sp[0].o);	}
label_30:;
	{
	LINE_NUMBER(2250);
	frame[7].o = (frame[2].o);
	LINE_NUMBER(2251);
	frame[2].o = (frame[6].o);
	LINE_NUMBER(2253);
	if (((jint)((java_math_MutableBigInteger *) NULL_CHECK((frame[5].o)))->F_intLen) != (jint(1))) goto label_34;
	}
	{
	LINE_NUMBER(2254);
	sp[0].o = frame[9].o;
	sp[1].o = (jobject)((java_math_MutableBigInteger *) NULL_CHECK((frame[5].o)))->F_value;
	((func_java_math_MutableBigInteger_mul_int_java_math_MutableBigInteger) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_math_MutableBigInteger_mul_int_java_math_MutableBigInteger])(ctx, sp[0].o, ((jint)ARRAY_ACCESS(jint, sp[1].o, ((jint)((java_math_MutableBigInteger *) NULL_CHECK((frame[5].o)))->F_offset))), (frame[10].o));
	goto label_36;
	}
label_34:;
	{
	LINE_NUMBER(2256);
	((func_java_math_MutableBigInteger_multiply_java_math_MutableBigInteger_java_math_MutableBigInteger) ((void **) nullCheck(ctx, (frame[5].o))->vtable)[VTABLE_java_math_MutableBigInteger_multiply_java_math_MutableBigInteger_java_math_MutableBigInteger])(ctx, (frame[5].o), (frame[9].o), (frame[10].o));
	}
label_36:;
	{
	LINE_NUMBER(2257);
	frame[7].o = (frame[5].o);
	frame[5].o = (frame[10].o);
	frame[10].o = (frame[7].o);
	LINE_NUMBER(2259);
	((func_java_math_MutableBigInteger_add_java_math_MutableBigInteger) ((void **) nullCheck(ctx, (frame[8].o))->vtable)[VTABLE_java_math_MutableBigInteger_add_java_math_MutableBigInteger])(ctx, (frame[8].o), (frame[5].o));
	goto label_12;
	}
label_13:;
	{
	LINE_NUMBER(2261);
	jint temp0 = (jint)((func_java_math_MutableBigInteger_subtract_java_math_MutableBigInteger_R_int) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_java_math_MutableBigInteger_subtract_java_math_MutableBigInteger_R_int])(ctx, (frame[3].o), (frame[8].o));
	LINE_NUMBER(2262);
	popStackFrame(ctx);
	return (frame[3].o);
	}

	popStackFrame(ctx);
}

void clinit_java_math_MutableBigInteger(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	SF_java_math_MutableBigInteger_KNUTH_POW2_THRESH_LEN = jint(6);
	SF_java_math_MutableBigInteger_KNUTH_POW2_THRESH_ZEROS = jint(3);
	jtype frame[3];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/math/MutableBigInteger:<clinit>", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_math_MutableBigInteger(ctx);
	{
	LINE_NUMBER(50);
	jint temp0 = (jint)((func_java_lang_Class_desiredAssertionStatus_R_boolean) ((void **) nullCheck(ctx, (((jobject) &class_java_math_MutableBigInteger)))->vtable)[VTABLE_java_lang_Class_desiredAssertionStatus_R_boolean])(ctx, (((jobject) &class_java_math_MutableBigInteger)));
	if (temp0 != 0) goto label_1;
	}
	INST_ICONST(1);
	goto label_2;
label_1:;
	INST_ICONST(0);
label_2:;
	{
	sp -= 1;
	clinit_java_math_MutableBigInteger(ctx);
	SF_java_math_MutableBigInteger_$assertionsDisabled = sp[0].i;
	LINE_NUMBER(77);
	clinit_java_math_MutableBigInteger(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_math_MutableBigInteger);
	init_java_math_MutableBigInteger_int(ctx, sp[0].o, (jint(1)));
	clinit_java_math_MutableBigInteger(ctx);
	SF_java_math_MutableBigInteger_ONE = sp[0].o;
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void *vtable_java_math_MutableBigInteger[] {
	(void *) M_java_lang_Object_hashCode_R_int,
	(void *) M_java_lang_Object_equals_java_lang_Object_R_boolean,
	(void *) M_java_lang_Object_clone_R_java_lang_Object,
	(void *) M_java_lang_Object_getClass_R_java_lang_Class,
	(void *) M_java_math_MutableBigInteger_toString_R_java_lang_String,
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
};

static FieldMetadata fields[] {
	{ "value", getArrayClass(&class_int, 1), offsetof(java_math_MutableBigInteger, F_value), "[I", 0 },
	{ "intLen", &class_int, offsetof(java_math_MutableBigInteger, F_intLen), "I", 0 },
	{ "offset", &class_int, offsetof(java_math_MutableBigInteger, F_offset), "I", 0 },
	{ "ONE", &class_java_math_MutableBigInteger, (intptr_t) &SF_java_math_MutableBigInteger_ONE, "Ljava/math/MutableBigInteger;", 24 },
	{ "KNUTH_POW2_THRESH_LEN", &class_int, (intptr_t) &SF_java_math_MutableBigInteger_KNUTH_POW2_THRESH_LEN, "I", 24 },
	{ "KNUTH_POW2_THRESH_ZEROS", &class_int, (intptr_t) &SF_java_math_MutableBigInteger_KNUTH_POW2_THRESH_ZEROS, "I", 24 },
	{ "$assertionsDisabled", &class_boolean, (intptr_t) &SF_java_math_MutableBigInteger_$assertionsDisabled, "Z", 4120 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_java_math_MutableBigInteger, 0, "()V", 0 },
	{ "<init>", (intptr_t) init_java_math_MutableBigInteger_int, 0, "(I)V", 0 },
	{ "<init>", (intptr_t) init_java_math_MutableBigInteger_Array1_int, 0, "([I)V", 0 },
	{ "<init>", (intptr_t) init_java_math_MutableBigInteger_java_math_BigInteger, 0, "(Ljava/math/BigInteger;)V", 0 },
	{ "<init>", (intptr_t) init_java_math_MutableBigInteger_java_math_MutableBigInteger, 0, "(Ljava/math/MutableBigInteger;)V", 0 },
	{ "ones", (intptr_t) M_java_math_MutableBigInteger_ones_int, VTABLE_java_math_MutableBigInteger_ones_int, "(I)V", 2 },
	{ "getMagnitudeArray", (intptr_t) M_java_math_MutableBigInteger_getMagnitudeArray_R_Array1_int, VTABLE_java_math_MutableBigInteger_getMagnitudeArray_R_Array1_int, "()[I", 2 },
	{ "toLong", (intptr_t) M_java_math_MutableBigInteger_toLong_R_long, VTABLE_java_math_MutableBigInteger_toLong_R_long, "()J", 2 },
	{ "toBigInteger", (intptr_t) M_java_math_MutableBigInteger_toBigInteger_int_R_java_math_BigInteger, VTABLE_java_math_MutableBigInteger_toBigInteger_int_R_java_math_BigInteger, "(I)Ljava/math/BigInteger;", 0 },
	{ "toBigInteger", (intptr_t) M_java_math_MutableBigInteger_toBigInteger_R_java_math_BigInteger, VTABLE_java_math_MutableBigInteger_toBigInteger_R_java_math_BigInteger, "()Ljava/math/BigInteger;", 0 },
	{ "toBigDecimal", (intptr_t) M_java_math_MutableBigInteger_toBigDecimal_int_int_R_java_math_BigDecimal, VTABLE_java_math_MutableBigInteger_toBigDecimal_int_int_R_java_math_BigDecimal, "(II)Ljava/math/BigDecimal;", 0 },
	{ "toCompactValue", (intptr_t) M_java_math_MutableBigInteger_toCompactValue_int_R_long, VTABLE_java_math_MutableBigInteger_toCompactValue_int_R_long, "(I)J", 0 },
	{ "clear", (intptr_t) M_java_math_MutableBigInteger_clear, VTABLE_java_math_MutableBigInteger_clear, "()V", 0 },
	{ "reset", (intptr_t) M_java_math_MutableBigInteger_reset, VTABLE_java_math_MutableBigInteger_reset, "()V", 0 },
	{ "compare", (intptr_t) M_java_math_MutableBigInteger_compare_java_math_MutableBigInteger_R_int, VTABLE_java_math_MutableBigInteger_compare_java_math_MutableBigInteger_R_int, "(Ljava/math/MutableBigInteger;)I", 16 },
	{ "compareShifted", (intptr_t) M_java_math_MutableBigInteger_compareShifted_java_math_MutableBigInteger_int_R_int, VTABLE_java_math_MutableBigInteger_compareShifted_java_math_MutableBigInteger_int_R_int, "(Ljava/math/MutableBigInteger;I)I", 2 },
	{ "compareHalf", (intptr_t) M_java_math_MutableBigInteger_compareHalf_java_math_MutableBigInteger_R_int, VTABLE_java_math_MutableBigInteger_compareHalf_java_math_MutableBigInteger_R_int, "(Ljava/math/MutableBigInteger;)I", 16 },
	{ "getLowestSetBit", (intptr_t) M_java_math_MutableBigInteger_getLowestSetBit_R_int, VTABLE_java_math_MutableBigInteger_getLowestSetBit_R_int, "()I", 18 },
	{ "getInt", (intptr_t) M_java_math_MutableBigInteger_getInt_int_R_int, VTABLE_java_math_MutableBigInteger_getInt_int_R_int, "(I)I", 18 },
	{ "getLong", (intptr_t) M_java_math_MutableBigInteger_getLong_int_R_long, VTABLE_java_math_MutableBigInteger_getLong_int_R_long, "(I)J", 18 },
	{ "normalize", (intptr_t) M_java_math_MutableBigInteger_normalize, VTABLE_java_math_MutableBigInteger_normalize, "()V", 16 },
	{ "ensureCapacity", (intptr_t) M_java_math_MutableBigInteger_ensureCapacity_int, VTABLE_java_math_MutableBigInteger_ensureCapacity_int, "(I)V", 18 },
	{ "toIntArray", (intptr_t) M_java_math_MutableBigInteger_toIntArray_R_Array1_int, VTABLE_java_math_MutableBigInteger_toIntArray_R_Array1_int, "()[I", 0 },
	{ "setInt", (intptr_t) M_java_math_MutableBigInteger_setInt_int_int, VTABLE_java_math_MutableBigInteger_setInt_int_int, "(II)V", 0 },
	{ "setValue", (intptr_t) M_java_math_MutableBigInteger_setValue_Array1_int_int, VTABLE_java_math_MutableBigInteger_setValue_Array1_int_int, "([II)V", 0 },
	{ "copyValue", (intptr_t) M_java_math_MutableBigInteger_copyValue_java_math_MutableBigInteger, VTABLE_java_math_MutableBigInteger_copyValue_java_math_MutableBigInteger, "(Ljava/math/MutableBigInteger;)V", 0 },
	{ "copyValue", (intptr_t) M_java_math_MutableBigInteger_copyValue_Array1_int, VTABLE_java_math_MutableBigInteger_copyValue_Array1_int, "([I)V", 0 },
	{ "isOne", (intptr_t) M_java_math_MutableBigInteger_isOne_R_boolean, VTABLE_java_math_MutableBigInteger_isOne_R_boolean, "()Z", 0 },
	{ "isZero", (intptr_t) M_java_math_MutableBigInteger_isZero_R_boolean, VTABLE_java_math_MutableBigInteger_isZero_R_boolean, "()Z", 0 },
	{ "isEven", (intptr_t) M_java_math_MutableBigInteger_isEven_R_boolean, VTABLE_java_math_MutableBigInteger_isEven_R_boolean, "()Z", 0 },
	{ "isOdd", (intptr_t) M_java_math_MutableBigInteger_isOdd_R_boolean, VTABLE_java_math_MutableBigInteger_isOdd_R_boolean, "()Z", 0 },
	{ "isNormal", (intptr_t) M_java_math_MutableBigInteger_isNormal_R_boolean, VTABLE_java_math_MutableBigInteger_isNormal_R_boolean, "()Z", 0 },
	{ "toString", (intptr_t) M_java_math_MutableBigInteger_toString_R_java_lang_String, VTABLE_java_math_MutableBigInteger_toString_R_java_lang_String, "()Ljava/lang/String;", 1 },
	{ "safeRightShift", (intptr_t) M_java_math_MutableBigInteger_safeRightShift_int, VTABLE_java_math_MutableBigInteger_safeRightShift_int, "(I)V", 0 },
	{ "rightShift", (intptr_t) M_java_math_MutableBigInteger_rightShift_int, VTABLE_java_math_MutableBigInteger_rightShift_int, "(I)V", 0 },
	{ "safeLeftShift", (intptr_t) M_java_math_MutableBigInteger_safeLeftShift_int, VTABLE_java_math_MutableBigInteger_safeLeftShift_int, "(I)V", 0 },
	{ "leftShift", (intptr_t) M_java_math_MutableBigInteger_leftShift_int, VTABLE_java_math_MutableBigInteger_leftShift_int, "(I)V", 0 },
	{ "divadd", (intptr_t) M_java_math_MutableBigInteger_divadd_Array1_int_Array1_int_int_R_int, VTABLE_java_math_MutableBigInteger_divadd_Array1_int_Array1_int_int_R_int, "([I[II)I", 2 },
	{ "mulsub", (intptr_t) M_java_math_MutableBigInteger_mulsub_Array1_int_Array1_int_int_int_int_R_int, VTABLE_java_math_MutableBigInteger_mulsub_Array1_int_Array1_int_int_int_int_R_int, "([I[IIII)I", 2 },
	{ "mulsubBorrow", (intptr_t) M_java_math_MutableBigInteger_mulsubBorrow_Array1_int_Array1_int_int_int_int_R_int, VTABLE_java_math_MutableBigInteger_mulsubBorrow_Array1_int_Array1_int_int_int_int_R_int, "([I[IIII)I", 2 },
	{ "primitiveRightShift", (intptr_t) M_java_math_MutableBigInteger_primitiveRightShift_int, VTABLE_java_math_MutableBigInteger_primitiveRightShift_int, "(I)V", 18 },
	{ "primitiveLeftShift", (intptr_t) M_java_math_MutableBigInteger_primitiveLeftShift_int, VTABLE_java_math_MutableBigInteger_primitiveLeftShift_int, "(I)V", 18 },
	{ "getLower", (intptr_t) M_java_math_MutableBigInteger_getLower_int_R_java_math_BigInteger, VTABLE_java_math_MutableBigInteger_getLower_int_R_java_math_BigInteger, "(I)Ljava/math/BigInteger;", 2 },
	{ "keepLower", (intptr_t) M_java_math_MutableBigInteger_keepLower_int, VTABLE_java_math_MutableBigInteger_keepLower_int, "(I)V", 2 },
	{ "add", (intptr_t) M_java_math_MutableBigInteger_add_java_math_MutableBigInteger, VTABLE_java_math_MutableBigInteger_add_java_math_MutableBigInteger, "(Ljava/math/MutableBigInteger;)V", 0 },
	{ "addShifted", (intptr_t) M_java_math_MutableBigInteger_addShifted_java_math_MutableBigInteger_int, VTABLE_java_math_MutableBigInteger_addShifted_java_math_MutableBigInteger_int, "(Ljava/math/MutableBigInteger;I)V", 0 },
	{ "addDisjoint", (intptr_t) M_java_math_MutableBigInteger_addDisjoint_java_math_MutableBigInteger_int, VTABLE_java_math_MutableBigInteger_addDisjoint_java_math_MutableBigInteger_int, "(Ljava/math/MutableBigInteger;I)V", 0 },
	{ "addLower", (intptr_t) M_java_math_MutableBigInteger_addLower_java_math_MutableBigInteger_int, VTABLE_java_math_MutableBigInteger_addLower_java_math_MutableBigInteger_int, "(Ljava/math/MutableBigInteger;I)V", 0 },
	{ "subtract", (intptr_t) M_java_math_MutableBigInteger_subtract_java_math_MutableBigInteger_R_int, VTABLE_java_math_MutableBigInteger_subtract_java_math_MutableBigInteger_R_int, "(Ljava/math/MutableBigInteger;)I", 0 },
	{ "difference", (intptr_t) M_java_math_MutableBigInteger_difference_java_math_MutableBigInteger_R_int, VTABLE_java_math_MutableBigInteger_difference_java_math_MutableBigInteger_R_int, "(Ljava/math/MutableBigInteger;)I", 2 },
	{ "multiply", (intptr_t) M_java_math_MutableBigInteger_multiply_java_math_MutableBigInteger_java_math_MutableBigInteger, VTABLE_java_math_MutableBigInteger_multiply_java_math_MutableBigInteger_java_math_MutableBigInteger, "(Ljava/math/MutableBigInteger;Ljava/math/MutableBigInteger;)V", 0 },
	{ "mul", (intptr_t) M_java_math_MutableBigInteger_mul_int_java_math_MutableBigInteger, VTABLE_java_math_MutableBigInteger_mul_int_java_math_MutableBigInteger, "(ILjava/math/MutableBigInteger;)V", 0 },
	{ "divideOneWord", (intptr_t) M_java_math_MutableBigInteger_divideOneWord_int_java_math_MutableBigInteger_R_int, VTABLE_java_math_MutableBigInteger_divideOneWord_int_java_math_MutableBigInteger_R_int, "(ILjava/math/MutableBigInteger;)I", 0 },
	{ "divide", (intptr_t) M_java_math_MutableBigInteger_divide_java_math_MutableBigInteger_java_math_MutableBigInteger_R_java_math_MutableBigInteger, VTABLE_java_math_MutableBigInteger_divide_java_math_MutableBigInteger_java_math_MutableBigInteger_R_java_math_MutableBigInteger, "(Ljava/math/MutableBigInteger;Ljava/math/MutableBigInteger;)Ljava/math/MutableBigInteger;", 0 },
	{ "divide", (intptr_t) M_java_math_MutableBigInteger_divide_java_math_MutableBigInteger_java_math_MutableBigInteger_boolean_R_java_math_MutableBigInteger, VTABLE_java_math_MutableBigInteger_divide_java_math_MutableBigInteger_java_math_MutableBigInteger_boolean_R_java_math_MutableBigInteger, "(Ljava/math/MutableBigInteger;Ljava/math/MutableBigInteger;Z)Ljava/math/MutableBigInteger;", 0 },
	{ "divideKnuth", (intptr_t) M_java_math_MutableBigInteger_divideKnuth_java_math_MutableBigInteger_java_math_MutableBigInteger_R_java_math_MutableBigInteger, VTABLE_java_math_MutableBigInteger_divideKnuth_java_math_MutableBigInteger_java_math_MutableBigInteger_R_java_math_MutableBigInteger, "(Ljava/math/MutableBigInteger;Ljava/math/MutableBigInteger;)Ljava/math/MutableBigInteger;", 0 },
	{ "divideKnuth", (intptr_t) M_java_math_MutableBigInteger_divideKnuth_java_math_MutableBigInteger_java_math_MutableBigInteger_boolean_R_java_math_MutableBigInteger, VTABLE_java_math_MutableBigInteger_divideKnuth_java_math_MutableBigInteger_java_math_MutableBigInteger_boolean_R_java_math_MutableBigInteger, "(Ljava/math/MutableBigInteger;Ljava/math/MutableBigInteger;Z)Ljava/math/MutableBigInteger;", 0 },
	{ "divideAndRemainderBurnikelZiegler", (intptr_t) M_java_math_MutableBigInteger_divideAndRemainderBurnikelZiegler_java_math_MutableBigInteger_java_math_MutableBigInteger_R_java_math_MutableBigInteger, VTABLE_java_math_MutableBigInteger_divideAndRemainderBurnikelZiegler_java_math_MutableBigInteger_java_math_MutableBigInteger_R_java_math_MutableBigInteger, "(Ljava/math/MutableBigInteger;Ljava/math/MutableBigInteger;)Ljava/math/MutableBigInteger;", 0 },
	{ "divide2n1n", (intptr_t) M_java_math_MutableBigInteger_divide2n1n_java_math_MutableBigInteger_java_math_MutableBigInteger_R_java_math_MutableBigInteger, VTABLE_java_math_MutableBigInteger_divide2n1n_java_math_MutableBigInteger_java_math_MutableBigInteger_R_java_math_MutableBigInteger, "(Ljava/math/MutableBigInteger;Ljava/math/MutableBigInteger;)Ljava/math/MutableBigInteger;", 2 },
	{ "divide3n2n", (intptr_t) M_java_math_MutableBigInteger_divide3n2n_java_math_MutableBigInteger_java_math_MutableBigInteger_R_java_math_MutableBigInteger, VTABLE_java_math_MutableBigInteger_divide3n2n_java_math_MutableBigInteger_java_math_MutableBigInteger_R_java_math_MutableBigInteger, "(Ljava/math/MutableBigInteger;Ljava/math/MutableBigInteger;)Ljava/math/MutableBigInteger;", 2 },
	{ "getBlock", (intptr_t) M_java_math_MutableBigInteger_getBlock_int_int_int_R_java_math_MutableBigInteger, VTABLE_java_math_MutableBigInteger_getBlock_int_int_int_R_java_math_MutableBigInteger, "(III)Ljava/math/MutableBigInteger;", 2 },
	{ "bitLength", (intptr_t) M_java_math_MutableBigInteger_bitLength_R_long, VTABLE_java_math_MutableBigInteger_bitLength_R_long, "()J", 0 },
	{ "divide", (intptr_t) M_java_math_MutableBigInteger_divide_long_java_math_MutableBigInteger_R_long, VTABLE_java_math_MutableBigInteger_divide_long_java_math_MutableBigInteger_R_long, "(JLjava/math/MutableBigInteger;)J", 0 },
	{ "copyAndShift", (intptr_t) SM_java_math_MutableBigInteger_copyAndShift_Array1_int_int_int_Array1_int_int_int, 0, "([III[III)V", 10 },
	{ "divideMagnitude", (intptr_t) M_java_math_MutableBigInteger_divideMagnitude_java_math_MutableBigInteger_java_math_MutableBigInteger_boolean_R_java_math_MutableBigInteger, VTABLE_java_math_MutableBigInteger_divideMagnitude_java_math_MutableBigInteger_java_math_MutableBigInteger_boolean_R_java_math_MutableBigInteger, "(Ljava/math/MutableBigInteger;Ljava/math/MutableBigInteger;Z)Ljava/math/MutableBigInteger;", 2 },
	{ "divideLongMagnitude", (intptr_t) M_java_math_MutableBigInteger_divideLongMagnitude_long_java_math_MutableBigInteger_R_java_math_MutableBigInteger, VTABLE_java_math_MutableBigInteger_divideLongMagnitude_long_java_math_MutableBigInteger_R_java_math_MutableBigInteger, "(JLjava/math/MutableBigInteger;)Ljava/math/MutableBigInteger;", 2 },
	{ "divaddLong", (intptr_t) M_java_math_MutableBigInteger_divaddLong_int_int_Array1_int_int_R_int, VTABLE_java_math_MutableBigInteger_divaddLong_int_int_Array1_int_int_R_int, "(II[II)I", 2 },
	{ "mulsubLong", (intptr_t) M_java_math_MutableBigInteger_mulsubLong_Array1_int_int_int_int_int_R_int, VTABLE_java_math_MutableBigInteger_mulsubLong_Array1_int_int_int_int_int_R_int, "([IIIII)I", 2 },
	{ "unsignedLongCompare", (intptr_t) M_java_math_MutableBigInteger_unsignedLongCompare_long_long_R_boolean, VTABLE_java_math_MutableBigInteger_unsignedLongCompare_long_long_R_boolean, "(JJ)Z", 2 },
	{ "divWord", (intptr_t) SM_java_math_MutableBigInteger_divWord_long_int_R_long, 0, "(JI)J", 8 },
	{ "hybridGCD", (intptr_t) M_java_math_MutableBigInteger_hybridGCD_java_math_MutableBigInteger_R_java_math_MutableBigInteger, VTABLE_java_math_MutableBigInteger_hybridGCD_java_math_MutableBigInteger_R_java_math_MutableBigInteger, "(Ljava/math/MutableBigInteger;)Ljava/math/MutableBigInteger;", 0 },
	{ "binaryGCD", (intptr_t) M_java_math_MutableBigInteger_binaryGCD_java_math_MutableBigInteger_R_java_math_MutableBigInteger, VTABLE_java_math_MutableBigInteger_binaryGCD_java_math_MutableBigInteger_R_java_math_MutableBigInteger, "(Ljava/math/MutableBigInteger;)Ljava/math/MutableBigInteger;", 2 },
	{ "binaryGcd", (intptr_t) SM_java_math_MutableBigInteger_binaryGcd_int_int_R_int, 0, "(II)I", 8 },
	{ "mutableModInverse", (intptr_t) M_java_math_MutableBigInteger_mutableModInverse_java_math_MutableBigInteger_R_java_math_MutableBigInteger, VTABLE_java_math_MutableBigInteger_mutableModInverse_java_math_MutableBigInteger_R_java_math_MutableBigInteger, "(Ljava/math/MutableBigInteger;)Ljava/math/MutableBigInteger;", 0 },
	{ "modInverseMP2", (intptr_t) M_java_math_MutableBigInteger_modInverseMP2_int_R_java_math_MutableBigInteger, VTABLE_java_math_MutableBigInteger_modInverseMP2_int_R_java_math_MutableBigInteger, "(I)Ljava/math/MutableBigInteger;", 0 },
	{ "inverseMod32", (intptr_t) SM_java_math_MutableBigInteger_inverseMod32_int_R_int, 0, "(I)I", 8 },
	{ "inverseMod64", (intptr_t) SM_java_math_MutableBigInteger_inverseMod64_long_R_long, 0, "(J)J", 8 },
	{ "modInverseBP2", (intptr_t) SM_java_math_MutableBigInteger_modInverseBP2_java_math_MutableBigInteger_int_R_java_math_MutableBigInteger, 0, "(Ljava/math/MutableBigInteger;I)Ljava/math/MutableBigInteger;", 8 },
	{ "modInverse", (intptr_t) M_java_math_MutableBigInteger_modInverse_java_math_MutableBigInteger_R_java_math_MutableBigInteger, VTABLE_java_math_MutableBigInteger_modInverse_java_math_MutableBigInteger_R_java_math_MutableBigInteger, "(Ljava/math/MutableBigInteger;)Ljava/math/MutableBigInteger;", 2 },
	{ "fixup", (intptr_t) SM_java_math_MutableBigInteger_fixup_java_math_MutableBigInteger_java_math_MutableBigInteger_int_R_java_math_MutableBigInteger, 0, "(Ljava/math/MutableBigInteger;Ljava/math/MutableBigInteger;I)Ljava/math/MutableBigInteger;", 8 },
	{ "euclidModInverse", (intptr_t) M_java_math_MutableBigInteger_euclidModInverse_int_R_java_math_MutableBigInteger, VTABLE_java_math_MutableBigInteger_euclidModInverse_int_R_java_math_MutableBigInteger, "(I)Ljava/math/MutableBigInteger;", 0 },
	{ "<clinit>", (intptr_t) clinit_java_math_MutableBigInteger, 0, "()V", 8 },
};

Class class_java_math_MutableBigInteger{
		.nativeName = (intptr_t) "java/math/MutableBigInteger",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(java_math_MutableBigInteger),
		.classVtable = (intptr_t) vtable_java_math_MutableBigInteger,
		.staticInitializer = (intptr_t) clinit_java_math_MutableBigInteger,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_java_math_MutableBigInteger,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 32,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 7,
		.nativeFields = (intptr_t) fields,
		.methodCount = 82,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 79,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_java_math_MutableBigInteger = registerClass(&class_java_math_MutableBigInteger);

}
