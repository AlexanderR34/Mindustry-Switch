#include "java/math/BigDecimal.h"
#include "java/math/BigInteger.h"
#include "java/lang/Integer.h"
#include "java/lang/StringBuilder.h"
#include "java/lang/Comparable.h"
#include "java/lang/Float.h"
#include "java/math/BigDecimal_LongOverflow.h"
#include "java/math/BigDecimal_StringBuilderHelper.h"
#include "java/math/RoundingMode.h"
#include "java/lang/String.h"
#include "java/lang/Character.h"
#include "java/util/Arrays.h"
#include "java/lang/Throwable.h"
#include "java/lang/Math.h"
#include "java/lang/Number.h"
#include "java/math/MutableBigInteger.h"
#include "java/lang/ThreadLocal.h"
#include "java/math/BigDecimal_1.h"
#include "java/lang/IllegalArgumentException.h"
#include "java/math/MathContext.h"
#include "java/lang/Long.h"
#include "java/lang/ArithmeticException.h"
#include "java/lang/Object.h"
#include "java/lang/NumberFormatException.h"
#include "java/lang/ArrayIndexOutOfBoundsException.h"
#include "java/lang/AssertionError.h"
#include "java/math/BigDecimal.h"
#include "java/lang/NegativeArraySizeException.h"
#include "java/lang/Class.h"
#include "java/lang/Double.h"

extern "C" {

jlong SF_java_math_BigDecimal_INFLATED;
jobject SF_java_math_BigDecimal_INFLATED_BIGINT;
jint SF_java_math_BigDecimal_MAX_COMPACT_DIGITS;
jlong SF_java_math_BigDecimal_serialVersionUID;
jobject SF_java_math_BigDecimal_threadLocalStringBuilderHelper;
jobject SF_java_math_BigDecimal_zeroThroughTen;
jobject SF_java_math_BigDecimal_ZERO_SCALED_BY;
jlong SF_java_math_BigDecimal_HALF_LONG_MAX_VALUE;
jlong SF_java_math_BigDecimal_HALF_LONG_MIN_VALUE;
jobject SF_java_math_BigDecimal_ZERO;
jobject SF_java_math_BigDecimal_ONE;
jobject SF_java_math_BigDecimal_TEN;
jint SF_java_math_BigDecimal_ROUND_UP;
jint SF_java_math_BigDecimal_ROUND_DOWN;
jint SF_java_math_BigDecimal_ROUND_CEILING;
jint SF_java_math_BigDecimal_ROUND_FLOOR;
jint SF_java_math_BigDecimal_ROUND_HALF_UP;
jint SF_java_math_BigDecimal_ROUND_HALF_DOWN;
jint SF_java_math_BigDecimal_ROUND_HALF_EVEN;
jint SF_java_math_BigDecimal_ROUND_UNNECESSARY;
jobject SF_java_math_BigDecimal_double10pow;
jobject SF_java_math_BigDecimal_float10pow;
jobject SF_java_math_BigDecimal_LONG_TEN_POWERS_TABLE;
volatile jobject SF_java_math_BigDecimal_BIG_TEN_POWERS_TABLE;
jint SF_java_math_BigDecimal_BIG_TEN_POWERS_TABLE_INITLEN;
jint SF_java_math_BigDecimal_BIG_TEN_POWERS_TABLE_MAX;
jobject SF_java_math_BigDecimal_THRESHOLDS_TABLE;
jlong SF_java_math_BigDecimal_DIV_NUM_BASE;
jobject SF_java_math_BigDecimal_LONGLONG_TEN_POWERS_TABLE;
jbool SF_java_math_BigDecimal_$assertionsDisabled;

void mark_java_math_BigDecimal(jobject object, jint mark, jint depth) {
	if (!object) {
		if (SF_java_math_BigDecimal_INFLATED_BIGINT)
			((gc_mark_ptr) ((jclass) ((jobject) SF_java_math_BigDecimal_INFLATED_BIGINT)->clazz)->markFunction)((jobject) SF_java_math_BigDecimal_INFLATED_BIGINT, mark, depth + 1);
		if (SF_java_math_BigDecimal_threadLocalStringBuilderHelper)
			((gc_mark_ptr) ((jclass) ((jobject) SF_java_math_BigDecimal_threadLocalStringBuilderHelper)->clazz)->markFunction)((jobject) SF_java_math_BigDecimal_threadLocalStringBuilderHelper, mark, depth + 1);
		if (SF_java_math_BigDecimal_zeroThroughTen)
			((gc_mark_ptr) ((jclass) ((jobject) SF_java_math_BigDecimal_zeroThroughTen)->clazz)->markFunction)((jobject) SF_java_math_BigDecimal_zeroThroughTen, mark, depth + 1);
		if (SF_java_math_BigDecimal_ZERO_SCALED_BY)
			((gc_mark_ptr) ((jclass) ((jobject) SF_java_math_BigDecimal_ZERO_SCALED_BY)->clazz)->markFunction)((jobject) SF_java_math_BigDecimal_ZERO_SCALED_BY, mark, depth + 1);
		if (SF_java_math_BigDecimal_ZERO)
			((gc_mark_ptr) ((jclass) ((jobject) SF_java_math_BigDecimal_ZERO)->clazz)->markFunction)((jobject) SF_java_math_BigDecimal_ZERO, mark, depth + 1);
		if (SF_java_math_BigDecimal_ONE)
			((gc_mark_ptr) ((jclass) ((jobject) SF_java_math_BigDecimal_ONE)->clazz)->markFunction)((jobject) SF_java_math_BigDecimal_ONE, mark, depth + 1);
		if (SF_java_math_BigDecimal_TEN)
			((gc_mark_ptr) ((jclass) ((jobject) SF_java_math_BigDecimal_TEN)->clazz)->markFunction)((jobject) SF_java_math_BigDecimal_TEN, mark, depth + 1);
		if (SF_java_math_BigDecimal_double10pow)
			((gc_mark_ptr) ((jclass) ((jobject) SF_java_math_BigDecimal_double10pow)->clazz)->markFunction)((jobject) SF_java_math_BigDecimal_double10pow, mark, depth + 1);
		if (SF_java_math_BigDecimal_float10pow)
			((gc_mark_ptr) ((jclass) ((jobject) SF_java_math_BigDecimal_float10pow)->clazz)->markFunction)((jobject) SF_java_math_BigDecimal_float10pow, mark, depth + 1);
		if (SF_java_math_BigDecimal_LONG_TEN_POWERS_TABLE)
			((gc_mark_ptr) ((jclass) ((jobject) SF_java_math_BigDecimal_LONG_TEN_POWERS_TABLE)->clazz)->markFunction)((jobject) SF_java_math_BigDecimal_LONG_TEN_POWERS_TABLE, mark, depth + 1);
		if (SF_java_math_BigDecimal_BIG_TEN_POWERS_TABLE)
			((gc_mark_ptr) ((jclass) ((jobject) SF_java_math_BigDecimal_BIG_TEN_POWERS_TABLE)->clazz)->markFunction)((jobject) SF_java_math_BigDecimal_BIG_TEN_POWERS_TABLE, mark, depth + 1);
		if (SF_java_math_BigDecimal_THRESHOLDS_TABLE)
			((gc_mark_ptr) ((jclass) ((jobject) SF_java_math_BigDecimal_THRESHOLDS_TABLE)->clazz)->markFunction)((jobject) SF_java_math_BigDecimal_THRESHOLDS_TABLE, mark, depth + 1);
		if (SF_java_math_BigDecimal_LONGLONG_TEN_POWERS_TABLE)
			((gc_mark_ptr) ((jclass) ((jobject) SF_java_math_BigDecimal_LONGLONG_TEN_POWERS_TABLE)->clazz)->markFunction)((jobject) SF_java_math_BigDecimal_LONGLONG_TEN_POWERS_TABLE, mark, depth + 1);
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
	auto self = (java_math_BigDecimal *) object;
	if (self->F_intVal)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_intVal)->clazz)->markFunction)((jobject) self->F_intVal, mark, depth + 1);
	if (self->F_stringCache)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_stringCache)->clazz)->markFunction)((jobject) self->F_stringCache, mark, depth + 1);
}

void init_java_math_BigDecimal_java_math_BigInteger_long_int_int(jcontext ctx, jobject self, jobject param0, jlong param1, jint param2, jint param3) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/math/BigDecimal:<init>", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_math_BigDecimal(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	frame[2].l = param1;
	frame[4].i = param2;
	frame[5].i = param3;
	{
	LINE_NUMBER(357);
	init_java_lang_Number(ctx, (frame[0].o));
	LINE_NUMBER(358);
	((java_math_BigDecimal *) NULL_CHECK((frame[0].o)))->F_scale = (frame[4].i);
	LINE_NUMBER(359);
	((java_math_BigDecimal *) NULL_CHECK((frame[0].o)))->F_precision = (frame[5].i);
	LINE_NUMBER(360);
	((java_math_BigDecimal *) NULL_CHECK((frame[0].o)))->F_intCompact = (frame[2].l);
	LINE_NUMBER(361);
	((java_math_BigDecimal *) NULL_CHECK((frame[0].o)))->F_intVal = (jref) (frame[1].o);
	LINE_NUMBER(362);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_java_math_BigDecimal_Array1_char_int_int(jcontext ctx, jobject self, jobject param0, jint param1, jint param2) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/math/BigDecimal:<init>", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_math_BigDecimal(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	frame[3].i = param2;
	{
	LINE_NUMBER(384);
	sp[0].o = frame[0].o;
	sp[1].o = frame[1].o;
	jint temp0 = frame[2].i;
	jint temp1 = frame[3].i;
	clinit_java_math_MathContext(ctx);
	sp[2].o = (jobject)SF_java_math_MathContext_UNLIMITED;
	init_java_math_BigDecimal_Array1_char_int_int_java_math_MathContext(ctx, sp[0].o, sp[1].o, temp0, temp1, sp[2].o);
	LINE_NUMBER(385);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_java_math_BigDecimal_Array1_char_int_int_java_math_MathContext(jcontext ctx, jobject self, jobject param0, jint param1, jint param2, jobject param3) {
	NULL_CHECK(self);
	jtype frame[25];
	auto stack = &frame[20];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/math/BigDecimal:<init>", 25 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_math_BigDecimal(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	frame[3].i = param2;
	frame[4].o = param3;
	{
	LINE_NUMBER(410);
	init_java_lang_Number(ctx, (frame[0].o));
	LINE_NUMBER(412);
	if ((((((jarray) nullCheck(ctx, (frame[1].o)))->length) | (frame[3].i)) | (frame[2].i)) < 0) goto label_8;
	}
	{
	if ((frame[3].i) <= ((((jarray) nullCheck(ctx, (frame[1].o)))->length) - (frame[2].i))) goto label_9;
	}
label_8:;
	{
	LINE_NUMBER(413);
	clinit_java_lang_NumberFormatException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_NumberFormatException);
	init_java_lang_NumberFormatException_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"Bad offset or len arguments for char[] input."_j))));
	throwException(ctx, sp[0].o);	}
label_9:;
	{
	LINE_NUMBER(423);
	frame[5].i = (jint(0));
	LINE_NUMBER(424);
	frame[6].i = (jint(0));
	LINE_NUMBER(425);
	frame[7].l = (jlong(0));
	LINE_NUMBER(426);
	frame[9].o = (jobject(nullptr));
	}
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_ArrayIndexOutOfBoundsException))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
label_5: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_NegativeArraySizeException))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 2); goto label_4; }
	}
	{
	LINE_NUMBER(431);
	frame[10].i = (jint(0));
	LINE_NUMBER(432);
	if (((jint)ARRAY_ACCESS(jchar, (frame[1].o), (frame[2].i))) != (45)) goto label_14;
	}
	{
	LINE_NUMBER(433);
	frame[10].i = (jint(1));
	LINE_NUMBER(434);
	INST_IINC(2, 1);
	LINE_NUMBER(435);
	INST_IINC(3, -1);
	goto label_18;
	}
label_14:;
	{
	LINE_NUMBER(436);
	if (((jint)ARRAY_ACCESS(jchar, (frame[1].o), (frame[2].i))) != (43)) goto label_18;
	}
	{
	LINE_NUMBER(437);
	INST_IINC(2, 1);
	LINE_NUMBER(438);
	INST_IINC(3, -1);
	}
label_18:;
	{
	LINE_NUMBER(442);
	frame[11].i = (jint(0));
	LINE_NUMBER(443);
	frame[12].l = (jlong(0));
	LINE_NUMBER(445);
	if ((frame[3].i) > (18)) goto label_23;
	}
	INST_ICONST(1);
	goto label_24;
label_23:;
	INST_ICONST(0);
label_24:;
	{
	sp -= 1;
	frame[15].i = sp[0].i;
	LINE_NUMBER(448);
	frame[16].i = (jint(0));
	LINE_NUMBER(449);
	if ((frame[15].i) == 0) goto label_27;
	}
label_28:;
	{
	LINE_NUMBER(452);
	if ((frame[3].i) <= 0) goto label_29;
	}
	{
	LINE_NUMBER(453);
	frame[14].i = ((jint)ARRAY_ACCESS(jchar, (frame[1].o), (frame[2].i)));
	LINE_NUMBER(454);
	if ((frame[14].i) != (48)) goto label_32;
	}
	{
	LINE_NUMBER(455);
	if ((frame[5].i) != 0) goto label_34;
	}
	{
	LINE_NUMBER(456);
	frame[5].i = (jint(1));
	goto label_36;
	}
label_34:;
	{
	LINE_NUMBER(457);
	if ((longCompare((frame[7].l), (jlong(0)))) == 0) goto label_36;
	}
	{
	LINE_NUMBER(458);
	frame[7].l = ((frame[7].l) * (jlong(10ll)));
	LINE_NUMBER(459);
	INST_IINC(5, 1);
	}
label_36:;
	{
	LINE_NUMBER(461);
	if ((frame[11].i) == 0) goto label_39;
	}
	{
	LINE_NUMBER(462);
	INST_IINC(6, 1);
	goto label_39;
	}
label_32:;
	{
	LINE_NUMBER(463);
	if ((frame[14].i) < (49)) goto label_41;
	}
	{
	if ((frame[14].i) > (57)) goto label_41;
	}
	{
	LINE_NUMBER(464);
	frame[17].i = ((frame[14].i) - (48));
	LINE_NUMBER(465);
	if ((frame[5].i) != (jint(1))) goto label_44;
	}
	{
	if ((longCompare((frame[7].l), (jlong(0)))) == 0) goto label_45;
	}
label_44:;
	LINE_NUMBER(466);
	INST_IINC(5, 1);
label_45:;
	{
	LINE_NUMBER(467);
	frame[7].l = (((frame[7].l) * (jlong(10ll))) + (jlong((frame[17].i))));
	LINE_NUMBER(468);
	if ((frame[11].i) == 0) goto label_47;
	}
	LINE_NUMBER(469);
	INST_IINC(6, 1);
label_47:;
	LINE_NUMBER(470);
	goto label_39;
label_41:;
	{
	if ((frame[14].i) != (46)) goto label_49;
	}
	{
	LINE_NUMBER(472);
	if ((frame[11].i) == 0) goto label_51;
	}
	{
	LINE_NUMBER(473);
	clinit_java_lang_NumberFormatException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_NumberFormatException);
	init_java_lang_NumberFormatException(ctx, sp[0].o);
	throwException(ctx, sp[0].o);	}
label_51:;
	{
	LINE_NUMBER(474);
	frame[11].i = (jint(1));
	goto label_39;
	}
label_49:;
	{
	LINE_NUMBER(475);
	jint temp0 = (jint)SM_java_lang_Character_isDigit_char_R_boolean(ctx, (frame[14].i));
	if (temp0 == 0) goto label_53;
	}
	{
	LINE_NUMBER(476);
	jint temp0 = (jint)SM_java_lang_Character_digit_char_int_R_int(ctx, (frame[14].i), (10));
	frame[17].i = temp0;
	LINE_NUMBER(477);
	if ((frame[17].i) != 0) goto label_56;
	}
	{
	LINE_NUMBER(478);
	if ((frame[5].i) != 0) goto label_58;
	}
	{
	LINE_NUMBER(479);
	frame[5].i = (jint(1));
	goto label_60;
	}
label_58:;
	{
	LINE_NUMBER(480);
	if ((longCompare((frame[7].l), (jlong(0)))) == 0) goto label_60;
	}
	{
	LINE_NUMBER(481);
	frame[7].l = ((frame[7].l) * (jlong(10ll)));
	LINE_NUMBER(482);
	INST_IINC(5, 1);
	goto label_60;
	}
label_56:;
	{
	LINE_NUMBER(485);
	if ((frame[5].i) != (jint(1))) goto label_63;
	}
	{
	if ((longCompare((frame[7].l), (jlong(0)))) == 0) goto label_64;
	}
label_63:;
	LINE_NUMBER(486);
	INST_IINC(5, 1);
label_64:;
	{
	LINE_NUMBER(487);
	frame[7].l = (((frame[7].l) * (jlong(10ll))) + (jlong((frame[17].i))));
	}
label_60:;
	{
	LINE_NUMBER(489);
	if ((frame[11].i) == 0) goto label_65;
	}
	LINE_NUMBER(490);
	INST_IINC(6, 1);
label_65:;
	LINE_NUMBER(491);
	goto label_39;
label_53:;
	{
	if ((frame[14].i) == (101)) goto label_67;
	}
	{
	if ((frame[14].i) != (69)) goto label_68;
	}
label_67:;
	{
	LINE_NUMBER(492);
	jlong temp0 = (jlong)SM_java_math_BigDecimal_parseExp_Array1_char_int_int_R_long(ctx, (frame[1].o), (frame[2].i), (frame[3].i));
	frame[12].l = temp0;
	LINE_NUMBER(494);
	if ((longCompare((jlong((jint((frame[12].l))))), (frame[12].l))) == 0) goto label_29;
	}
	{
	LINE_NUMBER(495);
	clinit_java_lang_NumberFormatException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_NumberFormatException);
	init_java_lang_NumberFormatException(ctx, sp[0].o);
	throwException(ctx, sp[0].o);	}
label_68:;
	{
	LINE_NUMBER(498);
	clinit_java_lang_NumberFormatException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_NumberFormatException);
	init_java_lang_NumberFormatException(ctx, sp[0].o);
	throwException(ctx, sp[0].o);	}
label_39:;
	{
	LINE_NUMBER(452);
	INST_IINC(2, 1);
	INST_IINC(3, -1);
	goto label_28;
	}
label_29:;
	{
	LINE_NUMBER(501);
	if ((frame[5].i) != 0) goto label_71;
	}
	{
	LINE_NUMBER(502);
	clinit_java_lang_NumberFormatException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_NumberFormatException);
	init_java_lang_NumberFormatException(ctx, sp[0].o);
	throwException(ctx, sp[0].o);	}
label_71:;
	{
	LINE_NUMBER(504);
	if ((longCompare((frame[12].l), (jlong(0)))) == 0) goto label_73;
	}
	{
	LINE_NUMBER(505);
	jint temp0 = (jint)M_java_math_BigDecimal_adjustScale_int_long_R_int(ctx, (frame[0].o), (frame[6].i), (frame[12].l));
	frame[6].i = temp0;
	}
label_73:;
	{
	LINE_NUMBER(507);
	if ((frame[10].i) == 0) goto label_75;
	}
	{
	jlong temp0 = -(frame[7].l);
	sp[0].l = temp0;
	sp += 1;
	goto label_76;
	}
label_75:;
	INST_LLOAD(7);
label_76:;
	{
	sp -= 1;
	frame[7].l = sp[0].l;
	LINE_NUMBER(508);
	frame[17].i = ((jint)((java_math_MathContext *) NULL_CHECK((frame[4].o)))->F_precision);
	LINE_NUMBER(509);
	frame[18].i = ((frame[5].i) - (frame[17].i));
	LINE_NUMBER(511);
	if ((frame[17].i) <= 0) goto label_80;
	}
	INST_ILOAD(18);
	if ((--sp)->i <= 0) goto label_80;
label_81:;
	{
	LINE_NUMBER(512);
	if ((frame[18].i) <= 0) goto label_80;
	}
	{
	LINE_NUMBER(513);
	jint temp0 = (jint)SM_java_math_BigDecimal_checkScaleNonZero_long_R_int(ctx, ((jlong((frame[6].i))) - (jlong((frame[18].i)))));
	frame[6].i = temp0;
	LINE_NUMBER(514);
	jlong temp1 = frame[7].l;
	clinit_java_math_BigDecimal(ctx);
	sp[0].o = (jobject)SF_java_math_BigDecimal_LONG_TEN_POWERS_TABLE;
	jlong temp2 = (jlong)ARRAY_ACCESS(jlong, sp[0].o, (frame[18].i));
	sp[0].o = (jobject)((java_math_MathContext *) NULL_CHECK((frame[4].o)))->F_roundingMode;
	jlong temp3 = (jlong)SM_java_math_BigDecimal_divideAndRound_long_long_int_R_long(ctx, temp1, temp2, ((jint)((java_math_RoundingMode *) NULL_CHECK(sp[0].o))->F_oldMode));
	frame[7].l = temp3;
	LINE_NUMBER(515);
	jint temp4 = (jint)SM_java_math_BigDecimal_longDigitLength_long_R_int(ctx, (frame[7].l));
	frame[5].i = temp4;
	LINE_NUMBER(516);
	frame[18].i = ((frame[5].i) - (frame[17].i));
	goto label_81;
	}
label_80:;
	LINE_NUMBER(519);
	goto label_1;
label_27:;
	{
	LINE_NUMBER(520);
	sp[0].o = (jobject) createArray(ctx, &class_char, (frame[3].i));
	frame[17].o = sp[0].o;
	}
label_86:;
	{
	LINE_NUMBER(521);
	if ((frame[3].i) <= 0) goto label_87;
	}
	{
	LINE_NUMBER(522);
	frame[14].i = ((jint)ARRAY_ACCESS(jchar, (frame[1].o), (frame[2].i)));
	LINE_NUMBER(524);
	if ((frame[14].i) < (48)) goto label_90;
	}
	{
	if ((frame[14].i) <= (57)) goto label_91;
	}
label_90:;
	{
	jint temp0 = (jint)SM_java_lang_Character_isDigit_char_R_boolean(ctx, (frame[14].i));
	if (temp0 == 0) goto label_92;
	}
label_91:;
	{
	LINE_NUMBER(527);
	if ((frame[14].i) == (48)) goto label_93;
	}
	{
	jint temp0 = (jint)SM_java_lang_Character_digit_char_int_R_int(ctx, (frame[14].i), (10));
	if (temp0 != 0) goto label_94;
	}
label_93:;
	{
	LINE_NUMBER(528);
	if ((frame[5].i) != 0) goto label_95;
	}
	{
	LINE_NUMBER(529);
	ARRAY_ACCESS(jchar, (frame[17].o), (frame[16].i)) = (frame[14].i);
	LINE_NUMBER(530);
	frame[5].i = (jint(1));
	goto label_98;
	}
label_95:;
	{
	LINE_NUMBER(531);
	if ((frame[16].i) == 0) goto label_98;
	}
	{
	LINE_NUMBER(532);
	sp[0].o = frame[17].o;
	jint temp0 = frame[16].i;
	INST_IINC(16, 1);
	ARRAY_ACCESS(jchar, sp[0].o, temp0) = (frame[14].i);
	LINE_NUMBER(533);
	INST_IINC(5, 1);
	goto label_98;
	}
label_94:;
	{
	LINE_NUMBER(536);
	if ((frame[5].i) != (jint(1))) goto label_101;
	}
	INST_ILOAD(16);
	if ((--sp)->i == 0) goto label_102;
label_101:;
	LINE_NUMBER(537);
	INST_IINC(5, 1);
label_102:;
	{
	LINE_NUMBER(538);
	sp[0].o = frame[17].o;
	jint temp0 = frame[16].i;
	INST_IINC(16, 1);
	ARRAY_ACCESS(jchar, sp[0].o, temp0) = (frame[14].i);
	}
label_98:;
	{
	LINE_NUMBER(540);
	if ((frame[11].i) == 0) goto label_103;
	}
	{
	LINE_NUMBER(541);
	INST_IINC(6, 1);
	goto label_103;
	}
label_92:;
	{
	LINE_NUMBER(545);
	if ((frame[14].i) != (46)) goto label_105;
	}
	{
	LINE_NUMBER(547);
	if ((frame[11].i) == 0) goto label_107;
	}
	{
	LINE_NUMBER(548);
	clinit_java_lang_NumberFormatException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_NumberFormatException);
	init_java_lang_NumberFormatException(ctx, sp[0].o);
	throwException(ctx, sp[0].o);	}
label_107:;
	{
	LINE_NUMBER(549);
	frame[11].i = (jint(1));
	LINE_NUMBER(550);
	goto label_103;
	}
label_105:;
	{
	LINE_NUMBER(553);
	if ((frame[14].i) == (101)) goto label_110;
	}
	{
	if ((frame[14].i) == (69)) goto label_110;
	}
	{
	LINE_NUMBER(554);
	clinit_java_lang_NumberFormatException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_NumberFormatException);
	init_java_lang_NumberFormatException(ctx, sp[0].o);
	throwException(ctx, sp[0].o);	}
label_110:;
	{
	LINE_NUMBER(555);
	jlong temp0 = (jlong)SM_java_math_BigDecimal_parseExp_Array1_char_int_int_R_long(ctx, (frame[1].o), (frame[2].i), (frame[3].i));
	frame[12].l = temp0;
	LINE_NUMBER(557);
	if ((longCompare((jlong((jint((frame[12].l))))), (frame[12].l))) == 0) goto label_87;
	}
	{
	LINE_NUMBER(558);
	clinit_java_lang_NumberFormatException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_NumberFormatException);
	init_java_lang_NumberFormatException(ctx, sp[0].o);
	throwException(ctx, sp[0].o);	}
label_103:;
	{
	LINE_NUMBER(521);
	INST_IINC(2, 1);
	INST_IINC(3, -1);
	goto label_86;
	}
label_87:;
	{
	LINE_NUMBER(562);
	if ((frame[5].i) != 0) goto label_114;
	}
	{
	LINE_NUMBER(563);
	clinit_java_lang_NumberFormatException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_NumberFormatException);
	init_java_lang_NumberFormatException(ctx, sp[0].o);
	throwException(ctx, sp[0].o);	}
label_114:;
	{
	LINE_NUMBER(565);
	if ((longCompare((frame[12].l), (jlong(0)))) == 0) goto label_116;
	}
	{
	LINE_NUMBER(566);
	jint temp0 = (jint)M_java_math_BigDecimal_adjustScale_int_long_R_int(ctx, (frame[0].o), (frame[6].i), (frame[12].l));
	frame[6].i = temp0;
	}
label_116:;
	{
	LINE_NUMBER(569);
	clinit_java_math_BigInteger(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_math_BigInteger);
	sp[1].o = frame[17].o;
	jobject temp0 = sp[1].o;
	sp[1].o = sp[0].o;
	sp[2].o = temp0;
	sp += 3;
	if ((frame[10].i) == 0) goto label_118;
	}
	INST_ICONST(-1);
	goto label_119;
label_118:;
	INST_ICONST(1);
label_119:;
	{
	sp -= 4;
	init_java_math_BigInteger_Array1_char_int_int(ctx, sp[0].o, sp[2].o, sp[3].i, (frame[5].i));
	frame[9].o = sp[0].o;
	LINE_NUMBER(570);
	jlong temp0 = (jlong)SM_java_math_BigDecimal_compactValFor_java_math_BigInteger_R_long(ctx, (frame[9].o));
	frame[7].l = temp0;
	LINE_NUMBER(571);
	frame[18].i = ((jint)((java_math_MathContext *) NULL_CHECK((frame[4].o)))->F_precision);
	LINE_NUMBER(572);
	if ((frame[18].i) <= 0) goto label_1;
	}
	{
	if ((frame[5].i) <= (frame[18].i)) goto label_1;
	}
	{
	LINE_NUMBER(573);
	if ((longCompare((frame[7].l), (jlong(-9223372036854775807ll)))) != 0) goto label_124;
	}
	{
	LINE_NUMBER(574);
	frame[19].i = ((frame[5].i) - (frame[18].i));
	}
label_126:;
	{
	LINE_NUMBER(575);
	if ((frame[19].i) <= 0) goto label_124;
	}
	{
	LINE_NUMBER(576);
	jint temp0 = (jint)SM_java_math_BigDecimal_checkScaleNonZero_long_R_int(ctx, ((jlong((frame[6].i))) - (jlong((frame[19].i)))));
	frame[6].i = temp0;
	LINE_NUMBER(577);
	sp[0].o = frame[9].o;
	jint temp1 = frame[19].i;
	sp[1].o = (jobject)((java_math_MathContext *) NULL_CHECK((frame[4].o)))->F_roundingMode;
	sp[0].o = (jobject)SM_java_math_BigDecimal_divideAndRoundByTenPow_java_math_BigInteger_int_int_R_java_math_BigInteger(ctx, sp[0].o, temp1, ((jint)((java_math_RoundingMode *) NULL_CHECK(sp[1].o))->F_oldMode));
	frame[9].o = sp[0].o;
	LINE_NUMBER(578);
	jlong temp2 = (jlong)SM_java_math_BigDecimal_compactValFor_java_math_BigInteger_R_long(ctx, (frame[9].o));
	frame[7].l = temp2;
	LINE_NUMBER(579);
	if ((longCompare((frame[7].l), (jlong(-9223372036854775807ll)))) == 0) goto label_131;
	}
	{
	LINE_NUMBER(580);
	jint temp0 = (jint)SM_java_math_BigDecimal_longDigitLength_long_R_int(ctx, (frame[7].l));
	frame[5].i = temp0;
	LINE_NUMBER(581);
	goto label_124;
	}
label_131:;
	{
	LINE_NUMBER(583);
	jint temp0 = (jint)SM_java_math_BigDecimal_bigDigitLength_java_math_BigInteger_R_int(ctx, (frame[9].o));
	frame[5].i = temp0;
	LINE_NUMBER(584);
	frame[19].i = ((frame[5].i) - (frame[18].i));
	goto label_126;
	}
label_124:;
	{
	LINE_NUMBER(587);
	if ((longCompare((frame[7].l), (jlong(-9223372036854775807ll)))) == 0) goto label_1;
	}
	{
	LINE_NUMBER(588);
	frame[19].i = ((frame[5].i) - (frame[18].i));
	}
label_136:;
	{
	LINE_NUMBER(589);
	if ((frame[19].i) <= 0) goto label_137;
	}
	{
	LINE_NUMBER(590);
	jint temp0 = (jint)SM_java_math_BigDecimal_checkScaleNonZero_long_R_int(ctx, ((jlong((frame[6].i))) - (jlong((frame[19].i)))));
	frame[6].i = temp0;
	LINE_NUMBER(591);
	jlong temp1 = frame[7].l;
	clinit_java_math_BigDecimal(ctx);
	sp[0].o = (jobject)SF_java_math_BigDecimal_LONG_TEN_POWERS_TABLE;
	jlong temp2 = (jlong)ARRAY_ACCESS(jlong, sp[0].o, (frame[19].i));
	sp[0].o = (jobject)((java_math_MathContext *) NULL_CHECK((frame[4].o)))->F_roundingMode;
	jlong temp3 = (jlong)SM_java_math_BigDecimal_divideAndRound_long_long_int_R_long(ctx, temp1, temp2, ((jint)((java_math_RoundingMode *) NULL_CHECK(sp[0].o))->F_oldMode));
	frame[7].l = temp3;
	LINE_NUMBER(592);
	jint temp4 = (jint)SM_java_math_BigDecimal_longDigitLength_long_R_int(ctx, (frame[7].l));
	frame[5].i = temp4;
	LINE_NUMBER(593);
	frame[19].i = ((frame[5].i) - (frame[18].i));
	goto label_136;
	}
label_137:;
	{
	LINE_NUMBER(595);
	frame[9].o = (jobject(nullptr));
	}
label_1:;
	popExceptionFrame(frameRef);
	popExceptionFrame(frameRef);
	LINE_NUMBER(603);
	goto label_142;
label_2:;
	{
	sp -= 1;
	LINE_NUMBER(599);
	frame[10].o = sp[0].o;
	LINE_NUMBER(600);
	clinit_java_lang_NumberFormatException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_NumberFormatException);
	init_java_lang_NumberFormatException(ctx, sp[0].o);
	throwException(ctx, sp[0].o);	}
label_4:;
	{
	sp -= 1;
	LINE_NUMBER(601);
	frame[10].o = sp[0].o;
	LINE_NUMBER(602);
	clinit_java_lang_NumberFormatException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_NumberFormatException);
	init_java_lang_NumberFormatException(ctx, sp[0].o);
	throwException(ctx, sp[0].o);	}
label_142:;
	{
	LINE_NUMBER(604);
	((java_math_BigDecimal *) NULL_CHECK((frame[0].o)))->F_scale = (frame[6].i);
	LINE_NUMBER(605);
	((java_math_BigDecimal *) NULL_CHECK((frame[0].o)))->F_precision = (frame[5].i);
	LINE_NUMBER(606);
	((java_math_BigDecimal *) NULL_CHECK((frame[0].o)))->F_intCompact = (frame[7].l);
	LINE_NUMBER(607);
	((java_math_BigDecimal *) NULL_CHECK((frame[0].o)))->F_intVal = (jref) (frame[9].o);
	LINE_NUMBER(608);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jint M_java_math_BigDecimal_adjustScale_int_long_R_int(jcontext ctx, jobject self, jint param0, jlong param1) {
	NULL_CHECK(self);
	jtype frame[10];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/math/BigDecimal:adjustScale", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].l = param1;
	{
	LINE_NUMBER(611);
	frame[4].l = ((jlong((frame[1].i))) - (frame[2].l));
	LINE_NUMBER(612);
	if ((longCompare((frame[4].l), (jlong(2147483647ll)))) > 0) goto label_2;
	}
	{
	if ((longCompare((frame[4].l), (jlong(-2147483648ll)))) >= 0) goto label_3;
	}
label_2:;
	{
	LINE_NUMBER(613);
	clinit_java_lang_NumberFormatException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_NumberFormatException);
	init_java_lang_NumberFormatException_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"Scale out of range."_j))));
	throwException(ctx, sp[0].o);	}
label_3:;
	{
	LINE_NUMBER(614);
	frame[1].i = (jint((frame[4].l)));
	LINE_NUMBER(615);
	popStackFrame(ctx);
	return (frame[1].i);
	}

	popStackFrame(ctx);
}

jlong SM_java_math_BigDecimal_parseExp_Array1_char_int_int_R_long(jcontext ctx, jobject param0, jint param1, jint param2) {
	jtype frame[12];
	auto stack = &frame[8];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/math/BigDecimal:parseExp", 12 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_math_BigDecimal(ctx);
	frame[0].o = param0;
	frame[1].i = param1;
	frame[2].i = param2;
	{
	LINE_NUMBER(622);
	frame[3].l = (jlong(0));
	LINE_NUMBER(623);
	INST_IINC(1, 1);
	LINE_NUMBER(624);
	frame[5].i = ((jint)ARRAY_ACCESS(jchar, (frame[0].o), (frame[1].i)));
	LINE_NUMBER(625);
	INST_IINC(2, -1);
	LINE_NUMBER(626);
	if ((frame[5].i) != (45)) goto label_5;
	}
	INST_ICONST(1);
	goto label_6;
label_5:;
	INST_ICONST(0);
label_6:;
	{
	sp -= 1;
	frame[6].i = sp[0].i;
	LINE_NUMBER(628);
	if ((frame[6].i) != 0) goto label_8;
	}
	{
	if ((frame[5].i) != (43)) goto label_9;
	}
label_8:;
	{
	LINE_NUMBER(629);
	INST_IINC(1, 1);
	LINE_NUMBER(630);
	frame[5].i = ((jint)ARRAY_ACCESS(jchar, (frame[0].o), (frame[1].i)));
	LINE_NUMBER(631);
	INST_IINC(2, -1);
	}
label_9:;
	{
	LINE_NUMBER(633);
	if ((frame[2].i) > 0) goto label_12;
	}
	{
	LINE_NUMBER(634);
	clinit_java_lang_NumberFormatException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_NumberFormatException);
	init_java_lang_NumberFormatException(ctx, sp[0].o);
	throwException(ctx, sp[0].o);	}
label_12:;
	{
	LINE_NUMBER(636);
	if ((frame[2].i) <= (10)) goto label_14;
	}
	{
	if ((frame[5].i) == (48)) goto label_15;
	}
	{
	jint temp0 = (jint)SM_java_lang_Character_digit_char_int_R_int(ctx, (frame[5].i), (10));
	if (temp0 != 0) goto label_14;
	}
label_15:;
	{
	LINE_NUMBER(637);
	INST_IINC(1, 1);
	LINE_NUMBER(638);
	frame[5].i = ((jint)ARRAY_ACCESS(jchar, (frame[0].o), (frame[1].i)));
	LINE_NUMBER(639);
	INST_IINC(2, -1);
	goto label_12;
	}
label_14:;
	{
	LINE_NUMBER(641);
	if ((frame[2].i) <= (10)) goto label_18;
	}
	{
	LINE_NUMBER(642);
	clinit_java_lang_NumberFormatException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_NumberFormatException);
	init_java_lang_NumberFormatException(ctx, sp[0].o);
	throwException(ctx, sp[0].o);	}
label_18:;
	{
	LINE_NUMBER(646);
	if ((frame[5].i) < (48)) goto label_20;
	}
	{
	if ((frame[5].i) > (57)) goto label_20;
	}
	{
	LINE_NUMBER(647);
	frame[7].i = ((frame[5].i) - (48));
	goto label_23;
	}
label_20:;
	{
	LINE_NUMBER(649);
	jint temp0 = (jint)SM_java_lang_Character_digit_char_int_R_int(ctx, (frame[5].i), (10));
	frame[7].i = temp0;
	LINE_NUMBER(650);
	if ((frame[7].i) >= 0) goto label_23;
	}
	{
	LINE_NUMBER(651);
	clinit_java_lang_NumberFormatException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_NumberFormatException);
	init_java_lang_NumberFormatException(ctx, sp[0].o);
	throwException(ctx, sp[0].o);	}
label_23:;
	{
	LINE_NUMBER(653);
	frame[3].l = (((frame[3].l) * (jlong(10ll))) + (jlong((frame[7].i))));
	LINE_NUMBER(654);
	if ((frame[2].i) != (jint(1))) goto label_27;
	}
	LINE_NUMBER(655);
	goto label_29;
label_27:;
	{
	LINE_NUMBER(656);
	INST_IINC(1, 1);
	LINE_NUMBER(657);
	frame[5].i = ((jint)ARRAY_ACCESS(jchar, (frame[0].o), (frame[1].i)));
	LINE_NUMBER(644);
	INST_IINC(2, -1);
	goto label_18;
	}
label_29:;
	{
	LINE_NUMBER(659);
	if ((frame[6].i) == 0) goto label_32;
	}
	{
	LINE_NUMBER(660);
	frame[3].l = (-(frame[3].l));
	}
label_32:;
	{
	LINE_NUMBER(661);
	popStackFrame(ctx);
	return (frame[3].l);
	}

	popStackFrame(ctx);
}

void init_java_math_BigDecimal_Array1_char(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/math/BigDecimal:<init>", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_math_BigDecimal(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(681);
	init_java_math_BigDecimal_Array1_char_int_int(ctx, (frame[0].o), (frame[1].o), (jint(0)), (((jarray) nullCheck(ctx, (frame[1].o)))->length));
	LINE_NUMBER(682);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_java_math_BigDecimal_Array1_char_java_math_MathContext(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/math/BigDecimal:<init>", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_math_BigDecimal(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(705);
	init_java_math_BigDecimal_Array1_char_int_int_java_math_MathContext(ctx, (frame[0].o), (frame[1].o), (jint(0)), (((jarray) nullCheck(ctx, (frame[1].o)))->length), (frame[2].o));
	LINE_NUMBER(706);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_java_math_BigDecimal_java_lang_String(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/math/BigDecimal:<init>", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_math_BigDecimal(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(810);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((func_java_lang_String_toCharArray_R_Array1_char) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_String_toCharArray_R_Array1_char])(ctx, (frame[1].o));
	jint temp0 = jint(0);
	jint temp1 = (jint)((func_java_lang_String_length_R_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_String_length_R_int])(ctx, (frame[1].o));
	init_java_math_BigDecimal_Array1_char_int_int(ctx, sp[0].o, sp[1].o, temp0, temp1);
	LINE_NUMBER(811);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_java_math_BigDecimal_java_lang_String_java_math_MathContext(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/math/BigDecimal:<init>", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_math_BigDecimal(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(828);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((func_java_lang_String_toCharArray_R_Array1_char) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_String_toCharArray_R_Array1_char])(ctx, (frame[1].o));
	jint temp0 = jint(0);
	jint temp1 = (jint)((func_java_lang_String_length_R_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_String_length_R_int])(ctx, (frame[1].o));
	init_java_math_BigDecimal_Array1_char_int_int_java_math_MathContext(ctx, sp[0].o, sp[1].o, temp0, temp1, (frame[2].o));
	LINE_NUMBER(829);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_java_math_BigDecimal_double(jcontext ctx, jobject self, jdouble param0) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/math/BigDecimal:<init>", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_math_BigDecimal(ctx);
	frame[0].o = self;
	frame[1].d = param0;
	{
	LINE_NUMBER(876);
	sp[0].o = frame[0].o;
	jdouble temp0 = frame[1].d;
	clinit_java_math_MathContext(ctx);
	sp[1].o = (jobject)SF_java_math_MathContext_UNLIMITED;
	init_java_math_BigDecimal_double_java_math_MathContext(ctx, sp[0].o, temp0, sp[1].o);
	LINE_NUMBER(877);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_java_math_BigDecimal_double_java_math_MathContext(jcontext ctx, jobject self, jdouble param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[23];
	auto stack = &frame[18];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/math/BigDecimal:<init>", 23 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_math_BigDecimal(ctx);
	frame[0].o = self;
	frame[1].d = param0;
	frame[3].o = param1;
	{
	LINE_NUMBER(897);
	init_java_lang_Number(ctx, (frame[0].o));
	LINE_NUMBER(898);
	jint temp0 = (jint)SM_java_lang_Double_isInfinite_double_R_boolean(ctx, (frame[1].d));
	if (temp0 != 0) goto label_2;
	}
	{
	jint temp0 = (jint)SM_java_lang_Double_isNaN_double_R_boolean(ctx, (frame[1].d));
	if (temp0 == 0) goto label_3;
	}
label_2:;
	{
	LINE_NUMBER(899);
	clinit_java_lang_NumberFormatException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_NumberFormatException);
	init_java_lang_NumberFormatException_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"Infinite or NaN"_j))));
	throwException(ctx, sp[0].o);	}
label_3:;
	{
	LINE_NUMBER(902);
	jlong temp0 = (jlong)SM_java_lang_Double_doubleToLongBits_double_R_long(ctx, (frame[1].d));
	frame[4].l = temp0;
	LINE_NUMBER(903);
	if ((longCompare(((frame[4].l) >> (63)), (jlong(0)))) != 0) goto label_5;
	}
	INST_ICONST(1);
	goto label_6;
label_5:;
	INST_ICONST(-1);
label_6:;
	{
	sp -= 1;
	frame[6].i = sp[0].i;
	LINE_NUMBER(904);
	frame[7].i = (jint((((frame[4].l) >> (52)) & (jlong(2047ll)))));
	LINE_NUMBER(905);
	if ((frame[7].i) != 0) goto label_9;
	}
	{
	LINE_NUMBER(906);
	jlong temp0 = ((frame[4].l) & (jlong(4503599627370495ll))) << (jint(1));
	sp[0].l = temp0;
	sp += 1;
	goto label_11;
	}
label_9:;
	{
	LINE_NUMBER(907);
	jlong temp0 = ((frame[4].l) & (jlong(4503599627370495ll))) | (jlong(4503599627370496ll));
	sp[0].l = temp0;
	sp += 1;
	}
label_11:;
	{
	sp -= 1;
	frame[8].l = sp[0].l;
	LINE_NUMBER(908);
	INST_IINC(7, -1075);
	LINE_NUMBER(915);
	if ((longCompare((frame[8].l), (jlong(0)))) != 0) goto label_14;
	}
	{
	LINE_NUMBER(916);
	sp[0].o = frame[0].o;
	clinit_java_math_BigInteger(ctx);
	sp[1].o = (jobject)SF_java_math_BigInteger_ZERO;
	((java_math_BigDecimal *) NULL_CHECK(sp[0].o))->F_intVal = (jref) sp[1].o;
	LINE_NUMBER(917);
	((java_math_BigDecimal *) NULL_CHECK((frame[0].o)))->F_scale = (jint(0));
	LINE_NUMBER(918);
	((java_math_BigDecimal *) NULL_CHECK((frame[0].o)))->F_intCompact = (jlong(0));
	LINE_NUMBER(919);
	((java_math_BigDecimal *) NULL_CHECK((frame[0].o)))->F_precision = (jint(1));
	LINE_NUMBER(920);
	popStackFrame(ctx);
	return;
	}
label_14:;
	{
	LINE_NUMBER(923);
	if ((longCompare(((frame[8].l) & (jlong(1))), (jlong(0)))) != 0) goto label_20;
	}
	{
	LINE_NUMBER(924);
	frame[8].l = ((frame[8].l) >> (jint(1)));
	LINE_NUMBER(925);
	INST_IINC(7, 1);
	goto label_14;
	}
label_20:;
	{
	LINE_NUMBER(927);
	frame[10].i = (jint(0));
	LINE_NUMBER(930);
	frame[12].l = ((jlong((frame[6].i))) * (frame[8].l));
	LINE_NUMBER(931);
	if ((frame[7].i) != 0) goto label_25;
	}
	{
	LINE_NUMBER(932);
	if ((longCompare((frame[12].l), (jlong(-9223372036854775807ll)))) != 0) goto label_27;
	}
	clinit_java_math_BigDecimal(ctx);
	(sp++)->o = SF_java_math_BigDecimal_INFLATED_BIGINT;
	goto label_28;
label_27:;
	INST_ACONST_NULL();
label_28:;
	INST_ASTORE(11);
	goto label_30;
label_25:;
	{
	LINE_NUMBER(934);
	if ((frame[7].i) >= 0) goto label_31;
	}
	{
	LINE_NUMBER(935);
	sp[0].o = (jobject)SM_java_math_BigInteger_valueOf_long_R_java_math_BigInteger(ctx, (jlong(5ll)));
	sp[0].o = (jobject)((func_java_math_BigInteger_pow_int_R_java_math_BigInteger) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_math_BigInteger_pow_int_R_java_math_BigInteger])(ctx, sp[0].o, (-(frame[7].i)));
	sp[0].o = (jobject)((func_java_math_BigInteger_multiply_long_R_java_math_BigInteger) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_math_BigInteger_multiply_long_R_java_math_BigInteger])(ctx, sp[0].o, (frame[12].l));
	frame[11].o = sp[0].o;
	LINE_NUMBER(936);
	frame[10].i = (-(frame[7].i));
	goto label_34;
	}
label_31:;
	{
	LINE_NUMBER(938);
	sp[0].o = (jobject)SM_java_math_BigInteger_valueOf_long_R_java_math_BigInteger(ctx, (jlong(2ll)));
	sp[0].o = (jobject)((func_java_math_BigInteger_pow_int_R_java_math_BigInteger) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_math_BigInteger_pow_int_R_java_math_BigInteger])(ctx, sp[0].o, (frame[7].i));
	sp[0].o = (jobject)((func_java_math_BigInteger_multiply_long_R_java_math_BigInteger) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_math_BigInteger_multiply_long_R_java_math_BigInteger])(ctx, sp[0].o, (frame[12].l));
	frame[11].o = sp[0].o;
	}
label_34:;
	{
	LINE_NUMBER(940);
	jlong temp0 = (jlong)SM_java_math_BigDecimal_compactValFor_java_math_BigInteger_R_long(ctx, (frame[11].o));
	frame[12].l = temp0;
	}
label_30:;
	{
	LINE_NUMBER(942);
	frame[14].i = (jint(0));
	LINE_NUMBER(943);
	frame[15].i = ((jint)((java_math_MathContext *) NULL_CHECK((frame[3].o)))->F_precision);
	LINE_NUMBER(944);
	if ((frame[15].i) <= 0) goto label_37;
	}
	{
	LINE_NUMBER(945);
	sp[0].o = (jobject)((java_math_MathContext *) NULL_CHECK((frame[3].o)))->F_roundingMode;
	frame[16].i = ((jint)((java_math_RoundingMode *) NULL_CHECK(sp[0].o))->F_oldMode);
	LINE_NUMBER(947);
	if ((longCompare((frame[12].l), (jlong(-9223372036854775807ll)))) != 0) goto label_40;
	}
	{
	LINE_NUMBER(948);
	jint temp0 = (jint)SM_java_math_BigDecimal_bigDigitLength_java_math_BigInteger_R_int(ctx, (frame[11].o));
	frame[14].i = temp0;
	LINE_NUMBER(949);
	frame[17].i = ((frame[14].i) - (frame[15].i));
	}
label_43:;
	{
	LINE_NUMBER(950);
	if ((frame[17].i) <= 0) goto label_40;
	}
	{
	LINE_NUMBER(951);
	jint temp0 = (jint)SM_java_math_BigDecimal_checkScaleNonZero_long_R_int(ctx, ((jlong((frame[10].i))) - (jlong((frame[17].i)))));
	frame[10].i = temp0;
	LINE_NUMBER(952);
	sp[0].o = (jobject)SM_java_math_BigDecimal_divideAndRoundByTenPow_java_math_BigInteger_int_int_R_java_math_BigInteger(ctx, (frame[11].o), (frame[17].i), (frame[16].i));
	frame[11].o = sp[0].o;
	LINE_NUMBER(953);
	jlong temp1 = (jlong)SM_java_math_BigDecimal_compactValFor_java_math_BigInteger_R_long(ctx, (frame[11].o));
	frame[12].l = temp1;
	LINE_NUMBER(954);
	if ((longCompare((frame[12].l), (jlong(-9223372036854775807ll)))) == 0) goto label_48;
	}
	LINE_NUMBER(955);
	goto label_40;
label_48:;
	{
	LINE_NUMBER(957);
	jint temp0 = (jint)SM_java_math_BigDecimal_bigDigitLength_java_math_BigInteger_R_int(ctx, (frame[11].o));
	frame[14].i = temp0;
	LINE_NUMBER(958);
	frame[17].i = ((frame[14].i) - (frame[15].i));
	goto label_43;
	}
label_40:;
	{
	LINE_NUMBER(961);
	if ((longCompare((frame[12].l), (jlong(-9223372036854775807ll)))) == 0) goto label_37;
	}
	{
	LINE_NUMBER(962);
	jint temp0 = (jint)SM_java_math_BigDecimal_longDigitLength_long_R_int(ctx, (frame[12].l));
	frame[14].i = temp0;
	LINE_NUMBER(963);
	frame[17].i = ((frame[14].i) - (frame[15].i));
	}
label_53:;
	{
	LINE_NUMBER(964);
	if ((frame[17].i) <= 0) goto label_54;
	}
	{
	LINE_NUMBER(965);
	jint temp0 = (jint)SM_java_math_BigDecimal_checkScaleNonZero_long_R_int(ctx, ((jlong((frame[10].i))) - (jlong((frame[17].i)))));
	frame[10].i = temp0;
	LINE_NUMBER(966);
	jlong temp1 = frame[12].l;
	clinit_java_math_BigDecimal(ctx);
	sp[0].o = (jobject)SF_java_math_BigDecimal_LONG_TEN_POWERS_TABLE;
	jlong temp2 = (jlong)ARRAY_ACCESS(jlong, sp[0].o, (frame[17].i));
	sp[0].o = (jobject)((java_math_MathContext *) NULL_CHECK((frame[3].o)))->F_roundingMode;
	jlong temp3 = (jlong)SM_java_math_BigDecimal_divideAndRound_long_long_int_R_long(ctx, temp1, temp2, ((jint)((java_math_RoundingMode *) NULL_CHECK(sp[0].o))->F_oldMode));
	frame[12].l = temp3;
	LINE_NUMBER(967);
	jint temp4 = (jint)SM_java_math_BigDecimal_longDigitLength_long_R_int(ctx, (frame[12].l));
	frame[14].i = temp4;
	LINE_NUMBER(968);
	frame[17].i = ((frame[14].i) - (frame[15].i));
	goto label_53;
	}
label_54:;
	{
	LINE_NUMBER(970);
	frame[11].o = (jobject(nullptr));
	}
label_37:;
	{
	LINE_NUMBER(973);
	((java_math_BigDecimal *) NULL_CHECK((frame[0].o)))->F_intVal = (jref) (frame[11].o);
	LINE_NUMBER(974);
	((java_math_BigDecimal *) NULL_CHECK((frame[0].o)))->F_intCompact = (frame[12].l);
	LINE_NUMBER(975);
	((java_math_BigDecimal *) NULL_CHECK((frame[0].o)))->F_scale = (frame[10].i);
	LINE_NUMBER(976);
	((java_math_BigDecimal *) NULL_CHECK((frame[0].o)))->F_precision = (frame[14].i);
	LINE_NUMBER(977);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_java_math_BigDecimal_java_math_BigInteger(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/math/BigDecimal:<init>", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_math_BigDecimal(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(986);
	init_java_lang_Number(ctx, (frame[0].o));
	LINE_NUMBER(987);
	((java_math_BigDecimal *) NULL_CHECK((frame[0].o)))->F_scale = (jint(0));
	LINE_NUMBER(988);
	((java_math_BigDecimal *) NULL_CHECK((frame[0].o)))->F_intVal = (jref) (frame[1].o);
	LINE_NUMBER(989);
	sp[0].o = frame[0].o;
	jlong temp0 = (jlong)SM_java_math_BigDecimal_compactValFor_java_math_BigInteger_R_long(ctx, (frame[1].o));
	((java_math_BigDecimal *) NULL_CHECK(sp[0].o))->F_intCompact = temp0;
	LINE_NUMBER(990);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_java_math_BigDecimal_java_math_BigInteger_java_math_MathContext(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/math/BigDecimal:<init>", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_math_BigDecimal(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(1005);
	init_java_math_BigDecimal_java_math_BigInteger_int_java_math_MathContext(ctx, (frame[0].o), (frame[1].o), (jint(0)), (frame[2].o));
	LINE_NUMBER(1006);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_java_math_BigDecimal_java_math_BigInteger_int(jcontext ctx, jobject self, jobject param0, jint param1) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/math/BigDecimal:<init>", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_math_BigDecimal(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(1017);
	init_java_lang_Number(ctx, (frame[0].o));
	LINE_NUMBER(1019);
	((java_math_BigDecimal *) NULL_CHECK((frame[0].o)))->F_intVal = (jref) (frame[1].o);
	LINE_NUMBER(1020);
	sp[0].o = frame[0].o;
	jlong temp0 = (jlong)SM_java_math_BigDecimal_compactValFor_java_math_BigInteger_R_long(ctx, (frame[1].o));
	((java_math_BigDecimal *) NULL_CHECK(sp[0].o))->F_intCompact = temp0;
	LINE_NUMBER(1021);
	((java_math_BigDecimal *) NULL_CHECK((frame[0].o)))->F_scale = (frame[2].i);
	LINE_NUMBER(1022);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_java_math_BigDecimal_java_math_BigInteger_int_java_math_MathContext(jcontext ctx, jobject self, jobject param0, jint param1, jobject param2) {
	NULL_CHECK(self);
	jtype frame[15];
	auto stack = &frame[10];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/math/BigDecimal:<init>", 15 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_math_BigDecimal(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	frame[3].o = param2;
	{
	LINE_NUMBER(1039);
	init_java_lang_Number(ctx, (frame[0].o));
	LINE_NUMBER(1040);
	jlong temp0 = (jlong)SM_java_math_BigDecimal_compactValFor_java_math_BigInteger_R_long(ctx, (frame[1].o));
	frame[4].l = temp0;
	LINE_NUMBER(1041);
	frame[6].i = ((jint)((java_math_MathContext *) NULL_CHECK((frame[3].o)))->F_precision);
	LINE_NUMBER(1042);
	frame[7].i = (jint(0));
	LINE_NUMBER(1043);
	if ((frame[6].i) <= 0) goto label_5;
	}
	{
	LINE_NUMBER(1044);
	sp[0].o = (jobject)((java_math_MathContext *) NULL_CHECK((frame[3].o)))->F_roundingMode;
	frame[8].i = ((jint)((java_math_RoundingMode *) NULL_CHECK(sp[0].o))->F_oldMode);
	LINE_NUMBER(1045);
	if ((longCompare((frame[4].l), (jlong(-9223372036854775807ll)))) != 0) goto label_8;
	}
	{
	LINE_NUMBER(1046);
	jint temp0 = (jint)SM_java_math_BigDecimal_bigDigitLength_java_math_BigInteger_R_int(ctx, (frame[1].o));
	frame[7].i = temp0;
	LINE_NUMBER(1047);
	frame[9].i = ((frame[7].i) - (frame[6].i));
	}
label_11:;
	{
	LINE_NUMBER(1048);
	if ((frame[9].i) <= 0) goto label_8;
	}
	{
	LINE_NUMBER(1049);
	jint temp0 = (jint)SM_java_math_BigDecimal_checkScaleNonZero_long_R_int(ctx, ((jlong((frame[2].i))) - (jlong((frame[9].i)))));
	frame[2].i = temp0;
	LINE_NUMBER(1050);
	sp[0].o = (jobject)SM_java_math_BigDecimal_divideAndRoundByTenPow_java_math_BigInteger_int_int_R_java_math_BigInteger(ctx, (frame[1].o), (frame[9].i), (frame[8].i));
	frame[1].o = sp[0].o;
	LINE_NUMBER(1051);
	jlong temp1 = (jlong)SM_java_math_BigDecimal_compactValFor_java_math_BigInteger_R_long(ctx, (frame[1].o));
	frame[4].l = temp1;
	LINE_NUMBER(1052);
	if ((longCompare((frame[4].l), (jlong(-9223372036854775807ll)))) == 0) goto label_16;
	}
	LINE_NUMBER(1053);
	goto label_8;
label_16:;
	{
	LINE_NUMBER(1055);
	jint temp0 = (jint)SM_java_math_BigDecimal_bigDigitLength_java_math_BigInteger_R_int(ctx, (frame[1].o));
	frame[7].i = temp0;
	LINE_NUMBER(1056);
	frame[9].i = ((frame[7].i) - (frame[6].i));
	goto label_11;
	}
label_8:;
	{
	LINE_NUMBER(1059);
	if ((longCompare((frame[4].l), (jlong(-9223372036854775807ll)))) == 0) goto label_5;
	}
	{
	LINE_NUMBER(1060);
	jint temp0 = (jint)SM_java_math_BigDecimal_longDigitLength_long_R_int(ctx, (frame[4].l));
	frame[7].i = temp0;
	LINE_NUMBER(1061);
	frame[9].i = ((frame[7].i) - (frame[6].i));
	}
label_21:;
	{
	LINE_NUMBER(1062);
	if ((frame[9].i) <= 0) goto label_22;
	}
	{
	LINE_NUMBER(1063);
	jint temp0 = (jint)SM_java_math_BigDecimal_checkScaleNonZero_long_R_int(ctx, ((jlong((frame[2].i))) - (jlong((frame[9].i)))));
	frame[2].i = temp0;
	LINE_NUMBER(1064);
	jlong temp1 = frame[4].l;
	clinit_java_math_BigDecimal(ctx);
	sp[0].o = (jobject)SF_java_math_BigDecimal_LONG_TEN_POWERS_TABLE;
	jlong temp2 = (jlong)SM_java_math_BigDecimal_divideAndRound_long_long_int_R_long(ctx, temp1, ((jlong)ARRAY_ACCESS(jlong, sp[0].o, (frame[9].i))), (frame[8].i));
	frame[4].l = temp2;
	LINE_NUMBER(1065);
	jint temp3 = (jint)SM_java_math_BigDecimal_longDigitLength_long_R_int(ctx, (frame[4].l));
	frame[7].i = temp3;
	LINE_NUMBER(1066);
	frame[9].i = ((frame[7].i) - (frame[6].i));
	goto label_21;
	}
label_22:;
	{
	LINE_NUMBER(1068);
	frame[1].o = (jobject(nullptr));
	}
label_5:;
	{
	LINE_NUMBER(1071);
	((java_math_BigDecimal *) NULL_CHECK((frame[0].o)))->F_intVal = (jref) (frame[1].o);
	LINE_NUMBER(1072);
	((java_math_BigDecimal *) NULL_CHECK((frame[0].o)))->F_intCompact = (frame[4].l);
	LINE_NUMBER(1073);
	((java_math_BigDecimal *) NULL_CHECK((frame[0].o)))->F_scale = (frame[2].i);
	LINE_NUMBER(1074);
	((java_math_BigDecimal *) NULL_CHECK((frame[0].o)))->F_precision = (frame[7].i);
	LINE_NUMBER(1075);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_java_math_BigDecimal_int(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/math/BigDecimal:<init>", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_math_BigDecimal(ctx);
	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(1085);
	init_java_lang_Number(ctx, (frame[0].o));
	LINE_NUMBER(1086);
	((java_math_BigDecimal *) NULL_CHECK((frame[0].o)))->F_intCompact = (jlong((frame[1].i)));
	LINE_NUMBER(1087);
	((java_math_BigDecimal *) NULL_CHECK((frame[0].o)))->F_scale = (jint(0));
	LINE_NUMBER(1088);
	((java_math_BigDecimal *) NULL_CHECK((frame[0].o)))->F_intVal = (jref) (jobject(nullptr));
	LINE_NUMBER(1089);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_java_math_BigDecimal_int_java_math_MathContext(jcontext ctx, jobject self, jint param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[14];
	auto stack = &frame[9];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/math/BigDecimal:<init>", 14 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_math_BigDecimal(ctx);
	frame[0].o = self;
	frame[1].i = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(1102);
	init_java_lang_Number(ctx, (frame[0].o));
	LINE_NUMBER(1103);
	frame[3].i = ((jint)((java_math_MathContext *) NULL_CHECK((frame[2].o)))->F_precision);
	LINE_NUMBER(1104);
	frame[4].l = (jlong((frame[1].i)));
	LINE_NUMBER(1105);
	frame[6].i = (jint(0));
	LINE_NUMBER(1106);
	frame[7].i = (jint(0));
	LINE_NUMBER(1107);
	if ((frame[3].i) <= 0) goto label_6;
	}
	{
	LINE_NUMBER(1108);
	jint temp0 = (jint)SM_java_math_BigDecimal_longDigitLength_long_R_int(ctx, (frame[4].l));
	frame[7].i = temp0;
	LINE_NUMBER(1109);
	frame[8].i = ((frame[7].i) - (frame[3].i));
	}
label_9:;
	{
	LINE_NUMBER(1110);
	if ((frame[8].i) <= 0) goto label_6;
	}
	{
	LINE_NUMBER(1111);
	jint temp0 = (jint)SM_java_math_BigDecimal_checkScaleNonZero_long_R_int(ctx, ((jlong((frame[6].i))) - (jlong((frame[8].i)))));
	frame[6].i = temp0;
	LINE_NUMBER(1112);
	jlong temp1 = frame[4].l;
	clinit_java_math_BigDecimal(ctx);
	sp[0].o = (jobject)SF_java_math_BigDecimal_LONG_TEN_POWERS_TABLE;
	jlong temp2 = (jlong)ARRAY_ACCESS(jlong, sp[0].o, (frame[8].i));
	sp[0].o = (jobject)((java_math_MathContext *) NULL_CHECK((frame[2].o)))->F_roundingMode;
	jlong temp3 = (jlong)SM_java_math_BigDecimal_divideAndRound_long_long_int_R_long(ctx, temp1, temp2, ((jint)((java_math_RoundingMode *) NULL_CHECK(sp[0].o))->F_oldMode));
	frame[4].l = temp3;
	LINE_NUMBER(1113);
	jint temp4 = (jint)SM_java_math_BigDecimal_longDigitLength_long_R_int(ctx, (frame[4].l));
	frame[7].i = temp4;
	LINE_NUMBER(1114);
	frame[8].i = ((frame[7].i) - (frame[3].i));
	goto label_9;
	}
label_6:;
	{
	LINE_NUMBER(1117);
	((java_math_BigDecimal *) NULL_CHECK((frame[0].o)))->F_intVal = (jref) (jobject(nullptr));
	LINE_NUMBER(1118);
	((java_math_BigDecimal *) NULL_CHECK((frame[0].o)))->F_intCompact = (frame[4].l);
	LINE_NUMBER(1119);
	((java_math_BigDecimal *) NULL_CHECK((frame[0].o)))->F_scale = (frame[6].i);
	LINE_NUMBER(1120);
	((java_math_BigDecimal *) NULL_CHECK((frame[0].o)))->F_precision = (frame[7].i);
	LINE_NUMBER(1121);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_java_math_BigDecimal_long(jcontext ctx, jobject self, jlong param0) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/math/BigDecimal:<init>", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_math_BigDecimal(ctx);
	frame[0].o = self;
	frame[1].l = param0;
	{
	LINE_NUMBER(1130);
	init_java_lang_Number(ctx, (frame[0].o));
	LINE_NUMBER(1131);
	((java_math_BigDecimal *) NULL_CHECK((frame[0].o)))->F_intCompact = (frame[1].l);
	LINE_NUMBER(1132);
	sp[0].o = frame[0].o;
	sp += 1;
	if ((longCompare((frame[1].l), (jlong(-9223372036854775807ll)))) != 0) goto label_3;
	}
	clinit_java_math_BigDecimal(ctx);
	(sp++)->o = SF_java_math_BigDecimal_INFLATED_BIGINT;
	goto label_4;
label_3:;
	INST_ACONST_NULL();
label_4:;
	{
	sp -= 2;
	((java_math_BigDecimal *) NULL_CHECK(sp[0].o))->F_intVal = (jref) sp[1].o;
	LINE_NUMBER(1133);
	((java_math_BigDecimal *) NULL_CHECK((frame[0].o)))->F_scale = (jint(0));
	LINE_NUMBER(1134);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_java_math_BigDecimal_long_java_math_MathContext(jcontext ctx, jobject self, jlong param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[15];
	auto stack = &frame[10];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/math/BigDecimal:<init>", 15 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_math_BigDecimal(ctx);
	frame[0].o = self;
	frame[1].l = param0;
	frame[3].o = param1;
	{
	LINE_NUMBER(1147);
	init_java_lang_Number(ctx, (frame[0].o));
	LINE_NUMBER(1148);
	frame[4].i = ((jint)((java_math_MathContext *) NULL_CHECK((frame[3].o)))->F_precision);
	LINE_NUMBER(1149);
	sp[0].o = (jobject)((java_math_MathContext *) NULL_CHECK((frame[3].o)))->F_roundingMode;
	frame[5].i = ((jint)((java_math_RoundingMode *) NULL_CHECK(sp[0].o))->F_oldMode);
	LINE_NUMBER(1150);
	frame[6].i = (jint(0));
	LINE_NUMBER(1151);
	frame[7].i = (jint(0));
	LINE_NUMBER(1152);
	if ((longCompare((frame[1].l), (jlong(-9223372036854775807ll)))) != 0) goto label_6;
	}
	clinit_java_math_BigDecimal(ctx);
	(sp++)->o = SF_java_math_BigDecimal_INFLATED_BIGINT;
	goto label_7;
label_6:;
	INST_ACONST_NULL();
label_7:;
	{
	sp -= 1;
	frame[8].o = sp[0].o;
	LINE_NUMBER(1153);
	if ((frame[4].i) <= 0) goto label_9;
	}
	{
	LINE_NUMBER(1154);
	if ((longCompare((frame[1].l), (jlong(-9223372036854775807ll)))) != 0) goto label_11;
	}
	{
	LINE_NUMBER(1155);
	frame[6].i = (19);
	LINE_NUMBER(1156);
	frame[9].i = ((frame[6].i) - (frame[4].i));
	}
label_14:;
	{
	LINE_NUMBER(1157);
	if ((frame[9].i) <= 0) goto label_11;
	}
	{
	LINE_NUMBER(1158);
	jint temp0 = (jint)SM_java_math_BigDecimal_checkScaleNonZero_long_R_int(ctx, ((jlong((frame[7].i))) - (jlong((frame[9].i)))));
	frame[7].i = temp0;
	LINE_NUMBER(1159);
	sp[0].o = (jobject)SM_java_math_BigDecimal_divideAndRoundByTenPow_java_math_BigInteger_int_int_R_java_math_BigInteger(ctx, (frame[8].o), (frame[9].i), (frame[5].i));
	frame[8].o = sp[0].o;
	LINE_NUMBER(1160);
	jlong temp1 = (jlong)SM_java_math_BigDecimal_compactValFor_java_math_BigInteger_R_long(ctx, (frame[8].o));
	frame[1].l = temp1;
	LINE_NUMBER(1161);
	if ((longCompare((frame[1].l), (jlong(-9223372036854775807ll)))) == 0) goto label_19;
	}
	LINE_NUMBER(1162);
	goto label_11;
label_19:;
	{
	LINE_NUMBER(1164);
	jint temp0 = (jint)SM_java_math_BigDecimal_bigDigitLength_java_math_BigInteger_R_int(ctx, (frame[8].o));
	frame[6].i = temp0;
	LINE_NUMBER(1165);
	frame[9].i = ((frame[6].i) - (frame[4].i));
	goto label_14;
	}
label_11:;
	{
	LINE_NUMBER(1168);
	if ((longCompare((frame[1].l), (jlong(-9223372036854775807ll)))) == 0) goto label_9;
	}
	{
	LINE_NUMBER(1169);
	jint temp0 = (jint)SM_java_math_BigDecimal_longDigitLength_long_R_int(ctx, (frame[1].l));
	frame[6].i = temp0;
	LINE_NUMBER(1170);
	frame[9].i = ((frame[6].i) - (frame[4].i));
	}
label_24:;
	{
	LINE_NUMBER(1171);
	if ((frame[9].i) <= 0) goto label_25;
	}
	{
	LINE_NUMBER(1172);
	jint temp0 = (jint)SM_java_math_BigDecimal_checkScaleNonZero_long_R_int(ctx, ((jlong((frame[7].i))) - (jlong((frame[9].i)))));
	frame[7].i = temp0;
	LINE_NUMBER(1173);
	jlong temp1 = frame[1].l;
	clinit_java_math_BigDecimal(ctx);
	sp[0].o = (jobject)SF_java_math_BigDecimal_LONG_TEN_POWERS_TABLE;
	jlong temp2 = (jlong)ARRAY_ACCESS(jlong, sp[0].o, (frame[9].i));
	sp[0].o = (jobject)((java_math_MathContext *) NULL_CHECK((frame[3].o)))->F_roundingMode;
	jlong temp3 = (jlong)SM_java_math_BigDecimal_divideAndRound_long_long_int_R_long(ctx, temp1, temp2, ((jint)((java_math_RoundingMode *) NULL_CHECK(sp[0].o))->F_oldMode));
	frame[1].l = temp3;
	LINE_NUMBER(1174);
	jint temp4 = (jint)SM_java_math_BigDecimal_longDigitLength_long_R_int(ctx, (frame[1].l));
	frame[6].i = temp4;
	LINE_NUMBER(1175);
	frame[9].i = ((frame[6].i) - (frame[4].i));
	goto label_24;
	}
label_25:;
	{
	LINE_NUMBER(1177);
	frame[8].o = (jobject(nullptr));
	}
label_9:;
	{
	LINE_NUMBER(1180);
	((java_math_BigDecimal *) NULL_CHECK((frame[0].o)))->F_intVal = (jref) (frame[8].o);
	LINE_NUMBER(1181);
	((java_math_BigDecimal *) NULL_CHECK((frame[0].o)))->F_intCompact = (frame[1].l);
	LINE_NUMBER(1182);
	((java_math_BigDecimal *) NULL_CHECK((frame[0].o)))->F_scale = (frame[7].i);
	LINE_NUMBER(1183);
	((java_math_BigDecimal *) NULL_CHECK((frame[0].o)))->F_precision = (frame[6].i);
	LINE_NUMBER(1184);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject SM_java_math_BigDecimal_valueOf_long_int_R_java_math_BigDecimal(jcontext ctx, jlong param0, jint param1) {
	jtype frame[10];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/math/BigDecimal:valueOf", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_math_BigDecimal(ctx);
	frame[0].l = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(1201);
	if ((frame[2].i) != 0) goto label_1;
	}
	{
	LINE_NUMBER(1202);
	sp[0].o = (jobject)SM_java_math_BigDecimal_valueOf_long_R_java_math_BigDecimal(ctx, (frame[0].l));
	popStackFrame(ctx);
	return sp[0].o;
	}
label_1:;
	{
	LINE_NUMBER(1203);
	if ((longCompare((frame[0].l), (jlong(0)))) != 0) goto label_3;
	}
	{
	LINE_NUMBER(1204);
	sp[0].o = (jobject)SM_java_math_BigDecimal_zeroValueOf_int_R_java_math_BigDecimal(ctx, (frame[2].i));
	popStackFrame(ctx);
	return sp[0].o;
	}
label_3:;
	{
	LINE_NUMBER(1206);
	clinit_java_math_BigDecimal(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_math_BigDecimal);
	sp[1].o = sp[0].o;
	sp += 2;
	if ((longCompare((frame[0].l), (jlong(-9223372036854775807ll)))) != 0) goto label_5;
	}
	{
	LINE_NUMBER(1207);
	clinit_java_math_BigDecimal(ctx);
	sp[0].o = (jobject)SF_java_math_BigDecimal_INFLATED_BIGINT;
	sp += 1;
	goto label_7;
	}
label_5:;
	INST_ACONST_NULL();
label_7:;
	{
	sp -= 3;
	init_java_math_BigDecimal_java_math_BigInteger_long_int_int(ctx, sp[0].o, sp[2].o, (frame[0].l), (frame[2].i), (jint(0)));
	LINE_NUMBER(1206);
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject SM_java_math_BigDecimal_valueOf_long_R_java_math_BigDecimal(jcontext ctx, jlong param0) {
	jtype frame[9];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/math/BigDecimal:valueOf", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_math_BigDecimal(ctx);
	frame[0].l = param0;
	{
	LINE_NUMBER(1222);
	if ((longCompare((frame[0].l), (jlong(0)))) < 0) goto label_1;
	}
	{
	jlong temp0 = frame[0].l;
	clinit_java_math_BigDecimal(ctx);
	sp[0].o = (jobject)SF_java_math_BigDecimal_zeroThroughTen;
	if ((longCompare(temp0, (jlong((((jarray) nullCheck(ctx, sp[0].o))->length))))) >= 0) goto label_1;
	}
	{
	LINE_NUMBER(1223);
	clinit_java_math_BigDecimal(ctx);
	sp[0].o = (jobject)SF_java_math_BigDecimal_zeroThroughTen;
	popStackFrame(ctx);
	return ((jobject)ARRAY_ACCESS(jobject, sp[0].o, (jint((frame[0].l)))));
	}
label_1:;
	{
	LINE_NUMBER(1224);
	if ((longCompare((frame[0].l), (jlong(-9223372036854775807ll)))) == 0) goto label_3;
	}
	{
	LINE_NUMBER(1225);
	clinit_java_math_BigDecimal(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_math_BigDecimal);
	init_java_math_BigDecimal_java_math_BigInteger_long_int_int(ctx, sp[0].o, (jobject(nullptr)), (frame[0].l), (jint(0)), (jint(0)));
	popStackFrame(ctx);
	return sp[0].o;
	}
label_3:;
	{
	LINE_NUMBER(1226);
	clinit_java_math_BigDecimal(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_math_BigDecimal);
	clinit_java_math_BigDecimal(ctx);
	sp[1].o = (jobject)SF_java_math_BigDecimal_INFLATED_BIGINT;
	init_java_math_BigDecimal_java_math_BigInteger_long_int_int(ctx, sp[0].o, sp[1].o, (frame[0].l), (jint(0)), (jint(0)));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject SM_java_math_BigDecimal_valueOf_long_int_int_R_java_math_BigDecimal(jcontext ctx, jlong param0, jint param1, jint param2) {
	jtype frame[11];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/math/BigDecimal:valueOf", 11 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_math_BigDecimal(ctx);
	frame[0].l = param0;
	frame[2].i = param1;
	frame[3].i = param2;
	{
	LINE_NUMBER(1230);
	if ((frame[2].i) != 0) goto label_1;
	}
	{
	if ((longCompare((frame[0].l), (jlong(0)))) < 0) goto label_1;
	}
	{
	jlong temp0 = frame[0].l;
	clinit_java_math_BigDecimal(ctx);
	sp[0].o = (jobject)SF_java_math_BigDecimal_zeroThroughTen;
	if ((longCompare(temp0, (jlong((((jarray) nullCheck(ctx, sp[0].o))->length))))) >= 0) goto label_1;
	}
	{
	LINE_NUMBER(1231);
	clinit_java_math_BigDecimal(ctx);
	sp[0].o = (jobject)SF_java_math_BigDecimal_zeroThroughTen;
	popStackFrame(ctx);
	return ((jobject)ARRAY_ACCESS(jobject, sp[0].o, (jint((frame[0].l)))));
	}
label_1:;
	{
	LINE_NUMBER(1232);
	if ((longCompare((frame[0].l), (jlong(0)))) != 0) goto label_3;
	}
	{
	LINE_NUMBER(1233);
	sp[0].o = (jobject)SM_java_math_BigDecimal_zeroValueOf_int_R_java_math_BigDecimal(ctx, (frame[2].i));
	popStackFrame(ctx);
	return sp[0].o;
	}
label_3:;
	{
	LINE_NUMBER(1235);
	clinit_java_math_BigDecimal(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_math_BigDecimal);
	sp[1].o = sp[0].o;
	sp += 2;
	if ((longCompare((frame[0].l), (jlong(-9223372036854775807ll)))) != 0) goto label_5;
	}
	clinit_java_math_BigDecimal(ctx);
	(sp++)->o = SF_java_math_BigDecimal_INFLATED_BIGINT;
	goto label_6;
label_5:;
	INST_ACONST_NULL();
label_6:;
	{
	sp -= 3;
	init_java_math_BigDecimal_java_math_BigInteger_long_int_int(ctx, sp[0].o, sp[2].o, (frame[0].l), (frame[2].i), (frame[3].i));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject SM_java_math_BigDecimal_valueOf_java_math_BigInteger_int_int_R_java_math_BigDecimal(jcontext ctx, jobject param0, jint param1, jint param2) {
	jtype frame[12];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/math/BigDecimal:valueOf", 12 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_math_BigDecimal(ctx);
	frame[0].o = param0;
	frame[1].i = param1;
	frame[2].i = param2;
	{
	LINE_NUMBER(1240);
	jlong temp0 = (jlong)SM_java_math_BigDecimal_compactValFor_java_math_BigInteger_R_long(ctx, (frame[0].o));
	frame[3].l = temp0;
	LINE_NUMBER(1241);
	if ((longCompare((frame[3].l), (jlong(0)))) != 0) goto label_2;
	}
	{
	LINE_NUMBER(1242);
	sp[0].o = (jobject)SM_java_math_BigDecimal_zeroValueOf_int_R_java_math_BigDecimal(ctx, (frame[1].i));
	popStackFrame(ctx);
	return sp[0].o;
	}
label_2:;
	{
	LINE_NUMBER(1243);
	if ((frame[1].i) != 0) goto label_4;
	}
	{
	if ((longCompare((frame[3].l), (jlong(0)))) < 0) goto label_4;
	}
	{
	jlong temp0 = frame[3].l;
	clinit_java_math_BigDecimal(ctx);
	sp[0].o = (jobject)SF_java_math_BigDecimal_zeroThroughTen;
	if ((longCompare(temp0, (jlong((((jarray) nullCheck(ctx, sp[0].o))->length))))) >= 0) goto label_4;
	}
	{
	LINE_NUMBER(1244);
	clinit_java_math_BigDecimal(ctx);
	sp[0].o = (jobject)SF_java_math_BigDecimal_zeroThroughTen;
	popStackFrame(ctx);
	return ((jobject)ARRAY_ACCESS(jobject, sp[0].o, (jint((frame[3].l)))));
	}
label_4:;
	{
	LINE_NUMBER(1246);
	clinit_java_math_BigDecimal(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_math_BigDecimal);
	init_java_math_BigDecimal_java_math_BigInteger_long_int_int(ctx, sp[0].o, (frame[0].o), (frame[3].l), (frame[1].i), (frame[2].i));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject SM_java_math_BigDecimal_zeroValueOf_int_R_java_math_BigDecimal(jcontext ctx, jint param0) {
	jtype frame[8];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/math/BigDecimal:zeroValueOf", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_math_BigDecimal(ctx);
	frame[0].i = param0;
	{
	LINE_NUMBER(1250);
	if ((frame[0].i) < 0) goto label_1;
	}
	{
	jint temp0 = frame[0].i;
	clinit_java_math_BigDecimal(ctx);
	sp[0].o = (jobject)SF_java_math_BigDecimal_ZERO_SCALED_BY;
	if (temp0 >= (((jarray) nullCheck(ctx, sp[0].o))->length)) goto label_1;
	}
	{
	LINE_NUMBER(1251);
	clinit_java_math_BigDecimal(ctx);
	sp[0].o = (jobject)SF_java_math_BigDecimal_ZERO_SCALED_BY;
	popStackFrame(ctx);
	return ((jobject)ARRAY_ACCESS(jobject, sp[0].o, (frame[0].i)));
	}
label_1:;
	{
	LINE_NUMBER(1253);
	clinit_java_math_BigDecimal(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_math_BigDecimal);
	clinit_java_math_BigInteger(ctx);
	sp[1].o = (jobject)SF_java_math_BigInteger_ZERO;
	init_java_math_BigDecimal_java_math_BigInteger_long_int_int(ctx, sp[0].o, sp[1].o, (jlong(0)), (frame[0].i), (jint(1)));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject SM_java_math_BigDecimal_valueOf_double_R_java_math_BigDecimal(jcontext ctx, jdouble param0) {
	jtype frame[6];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/math/BigDecimal:valueOf", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_math_BigDecimal(ctx);
	frame[0].d = param0;
	{
	LINE_NUMBER(1278);
	clinit_java_math_BigDecimal(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_math_BigDecimal);
	sp[1].o = (jobject)SM_java_lang_Double_toString_double_R_java_lang_String(ctx, (frame[0].d));
	init_java_math_BigDecimal_java_lang_String(ctx, sp[0].o, sp[1].o);
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_java_math_BigDecimal_add_java_math_BigDecimal_R_java_math_BigDecimal(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/math/BigDecimal:add", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(1291);
	if ((longCompare(((jlong)((java_math_BigDecimal *) NULL_CHECK((frame[0].o)))->F_intCompact), (jlong(-9223372036854775807ll)))) == 0) goto label_1;
	}
	{
	LINE_NUMBER(1292);
	if ((longCompare(((jlong)((java_math_BigDecimal *) NULL_CHECK((frame[1].o)))->F_intCompact), (jlong(-9223372036854775807ll)))) == 0) goto label_3;
	}
	{
	LINE_NUMBER(1293);
	sp[0].o = (jobject)SM_java_math_BigDecimal_add_long_int_long_int_R_java_math_BigDecimal(ctx, ((jlong)((java_math_BigDecimal *) NULL_CHECK((frame[0].o)))->F_intCompact), ((jint)((java_math_BigDecimal *) NULL_CHECK((frame[0].o)))->F_scale), ((jlong)((java_math_BigDecimal *) NULL_CHECK((frame[1].o)))->F_intCompact), ((jint)((java_math_BigDecimal *) NULL_CHECK((frame[1].o)))->F_scale));
	popStackFrame(ctx);
	return sp[0].o;
	}
label_3:;
	{
	LINE_NUMBER(1295);
	jlong temp0 = (jlong)((java_math_BigDecimal *) NULL_CHECK((frame[0].o)))->F_intCompact;
	jint temp1 = (jint)((java_math_BigDecimal *) NULL_CHECK((frame[0].o)))->F_scale;
	sp[0].o = (jobject)((java_math_BigDecimal *) NULL_CHECK((frame[1].o)))->F_intVal;
	sp[0].o = (jobject)SM_java_math_BigDecimal_add_long_int_java_math_BigInteger_int_R_java_math_BigDecimal(ctx, temp0, temp1, sp[0].o, ((jint)((java_math_BigDecimal *) NULL_CHECK((frame[1].o)))->F_scale));
	popStackFrame(ctx);
	return sp[0].o;
	}
label_1:;
	{
	LINE_NUMBER(1298);
	if ((longCompare(((jlong)((java_math_BigDecimal *) NULL_CHECK((frame[1].o)))->F_intCompact), (jlong(-9223372036854775807ll)))) == 0) goto label_5;
	}
	{
	LINE_NUMBER(1299);
	jlong temp0 = (jlong)((java_math_BigDecimal *) NULL_CHECK((frame[1].o)))->F_intCompact;
	jint temp1 = (jint)((java_math_BigDecimal *) NULL_CHECK((frame[1].o)))->F_scale;
	sp[0].o = (jobject)((java_math_BigDecimal *) NULL_CHECK((frame[0].o)))->F_intVal;
	sp[0].o = (jobject)SM_java_math_BigDecimal_add_long_int_java_math_BigInteger_int_R_java_math_BigDecimal(ctx, temp0, temp1, sp[0].o, ((jint)((java_math_BigDecimal *) NULL_CHECK((frame[0].o)))->F_scale));
	popStackFrame(ctx);
	return sp[0].o;
	}
label_5:;
	{
	LINE_NUMBER(1301);
	sp[0].o = (jobject)((java_math_BigDecimal *) NULL_CHECK((frame[0].o)))->F_intVal;
	jint temp0 = (jint)((java_math_BigDecimal *) NULL_CHECK((frame[0].o)))->F_scale;
	sp[1].o = (jobject)((java_math_BigDecimal *) NULL_CHECK((frame[1].o)))->F_intVal;
	sp[0].o = (jobject)SM_java_math_BigDecimal_add_java_math_BigInteger_int_java_math_BigInteger_int_R_java_math_BigDecimal(ctx, sp[0].o, temp0, sp[1].o, ((jint)((java_math_BigDecimal *) NULL_CHECK((frame[1].o)))->F_scale));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_java_math_BigDecimal_add_java_math_BigDecimal_java_math_MathContext_R_java_math_BigDecimal(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[16];
	auto stack = &frame[10];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/math/BigDecimal:add", 16 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(1321);
	if (((jint)((java_math_MathContext *) NULL_CHECK((frame[2].o)))->F_precision) != 0) goto label_1;
	}
	{
	LINE_NUMBER(1322);
	sp[0].o = (jobject)((func_java_math_BigDecimal_add_java_math_BigDecimal_R_java_math_BigDecimal) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_math_BigDecimal_add_java_math_BigDecimal_R_java_math_BigDecimal])(ctx, (frame[0].o), (frame[1].o));
	popStackFrame(ctx);
	return sp[0].o;
	}
label_1:;
	{
	LINE_NUMBER(1323);
	frame[3].o = (frame[0].o);
	LINE_NUMBER(1328);
	jint temp0 = (jint)((func_java_math_BigDecimal_signum_R_int) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_java_math_BigDecimal_signum_R_int])(ctx, (frame[3].o));
	if (temp0 != 0) goto label_4;
	}
	INST_ICONST(1);
	goto label_5;
label_4:;
	INST_ICONST(0);
label_5:;
	{
	sp -= 1;
	frame[4].i = sp[0].i;
	LINE_NUMBER(1329);
	jint temp0 = (jint)((func_java_math_BigDecimal_signum_R_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_math_BigDecimal_signum_R_int])(ctx, (frame[1].o));
	if (temp0 != 0) goto label_7;
	}
	INST_ICONST(1);
	goto label_8;
label_7:;
	INST_ICONST(0);
label_8:;
	{
	sp -= 1;
	frame[5].i = sp[0].i;
	LINE_NUMBER(1331);
	if ((frame[4].i) != 0) goto label_10;
	}
	INST_ILOAD(5);
	if ((--sp)->i == 0) goto label_11;
label_10:;
	{
	LINE_NUMBER(1332);
	jint temp0 = (jint)((func_java_math_BigDecimal_scale_R_int) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_java_math_BigDecimal_scale_R_int])(ctx, (frame[3].o));
	jint temp1 = (jint)((func_java_math_BigDecimal_scale_R_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_math_BigDecimal_scale_R_int])(ctx, (frame[1].o));
	jint temp2 = (jint)SM_java_lang_Math_max_int_int_R_int(ctx, temp0, temp1);
	frame[6].i = temp2;
	LINE_NUMBER(1335);
	if ((frame[4].i) == 0) goto label_13;
	}
	INST_ILOAD(5);
	if ((--sp)->i == 0) goto label_13;
	{
	LINE_NUMBER(1336);
	sp[0].o = (jobject)SM_java_math_BigDecimal_zeroValueOf_int_R_java_math_BigDecimal(ctx, (frame[6].i));
	popStackFrame(ctx);
	return sp[0].o;
	}
label_13:;
	{
	LINE_NUMBER(1337);
	if ((frame[4].i) == 0) goto label_15;
	}
	{
	sp[0].o = (jobject)SM_java_math_BigDecimal_doRound_java_math_BigDecimal_java_math_MathContext_R_java_math_BigDecimal(ctx, (frame[1].o), (frame[2].o));
	sp += 1;
	goto label_16;
	}
label_15:;
	{
	sp[0].o = (jobject)SM_java_math_BigDecimal_doRound_java_math_BigDecimal_java_math_MathContext_R_java_math_BigDecimal(ctx, (frame[3].o), (frame[2].o));
	sp += 1;
	}
label_16:;
	{
	sp -= 1;
	frame[7].o = sp[0].o;
	LINE_NUMBER(1339);
	jint temp0 = (jint)((func_java_math_BigDecimal_scale_R_int) ((void **) nullCheck(ctx, (frame[7].o))->vtable)[VTABLE_java_math_BigDecimal_scale_R_int])(ctx, (frame[7].o));
	if (temp0 != (frame[6].i)) goto label_18;
	}
	{
	LINE_NUMBER(1340);
	popStackFrame(ctx);
	return (frame[7].o);
	}
label_18:;
	{
	LINE_NUMBER(1341);
	jint temp0 = (jint)((func_java_math_BigDecimal_scale_R_int) ((void **) nullCheck(ctx, (frame[7].o))->vtable)[VTABLE_java_math_BigDecimal_scale_R_int])(ctx, (frame[7].o));
	if (temp0 <= (frame[6].i)) goto label_20;
	}
	{
	LINE_NUMBER(1342);
	sp[0].o = (jobject)((java_math_BigDecimal *) NULL_CHECK((frame[7].o)))->F_intVal;
	sp[0].o = (jobject)SM_java_math_BigDecimal_stripZerosToMatchScale_java_math_BigInteger_long_int_int_R_java_math_BigDecimal(ctx, sp[0].o, ((jlong)((java_math_BigDecimal *) NULL_CHECK((frame[7].o)))->F_intCompact), ((jint)((java_math_BigDecimal *) NULL_CHECK((frame[7].o)))->F_scale), (frame[6].i));
	popStackFrame(ctx);
	return sp[0].o;
	}
label_20:;
	{
	LINE_NUMBER(1344);
	jint temp0 = (jint)((java_math_MathContext *) NULL_CHECK((frame[2].o)))->F_precision;
	jint temp1 = (jint)((func_java_math_BigDecimal_precision_R_int) ((void **) nullCheck(ctx, (frame[7].o))->vtable)[VTABLE_java_math_BigDecimal_precision_R_int])(ctx, (frame[7].o));
	frame[8].i = (temp0 - temp1);
	LINE_NUMBER(1345);
	jint temp2 = frame[6].i;
	jint temp3 = (jint)((func_java_math_BigDecimal_scale_R_int) ((void **) nullCheck(ctx, (frame[7].o))->vtable)[VTABLE_java_math_BigDecimal_scale_R_int])(ctx, (frame[7].o));
	frame[9].i = (temp2 - temp3);
	LINE_NUMBER(1347);
	if ((frame[8].i) < (frame[9].i)) goto label_24;
	}
	{
	LINE_NUMBER(1348);
	sp[0].o = (jobject)((func_java_math_BigDecimal_setScale_int_R_java_math_BigDecimal) ((void **) nullCheck(ctx, (frame[7].o))->vtable)[VTABLE_java_math_BigDecimal_setScale_int_R_java_math_BigDecimal])(ctx, (frame[7].o), (frame[6].i));
	popStackFrame(ctx);
	return sp[0].o;
	}
label_24:;
	{
	LINE_NUMBER(1350);
	sp[0].o = frame[7].o;
	jint temp0 = (jint)((func_java_math_BigDecimal_scale_R_int) ((void **) nullCheck(ctx, (frame[7].o))->vtable)[VTABLE_java_math_BigDecimal_scale_R_int])(ctx, (frame[7].o));
	sp[0].o = (jobject)((func_java_math_BigDecimal_setScale_int_R_java_math_BigDecimal) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_math_BigDecimal_setScale_int_R_java_math_BigDecimal])(ctx, sp[0].o, (temp0 + (frame[8].i)));
	popStackFrame(ctx);
	return sp[0].o;
	}
label_11:;
	{
	LINE_NUMBER(1355);
	frame[4].l = ((jlong(((jint)((java_math_BigDecimal *) NULL_CHECK((frame[3].o)))->F_scale))) - (jlong(((jint)((java_math_BigDecimal *) NULL_CHECK((frame[1].o)))->F_scale))));
	LINE_NUMBER(1356);
	if ((longCompare((frame[4].l), (jlong(0)))) == 0) goto label_27;
	}
	{
	LINE_NUMBER(1357);
	sp[0].o = (jobject)M_java_math_BigDecimal_preAlign_java_math_BigDecimal_java_math_BigDecimal_long_java_math_MathContext_R_Array1_java_math_BigDecimal(ctx, (frame[0].o), (frame[3].o), (frame[1].o), (frame[4].l), (frame[2].o));
	frame[6].o = sp[0].o;
	LINE_NUMBER(1358);
	SM_java_math_BigDecimal_matchScale_Array1_java_math_BigDecimal(ctx, (frame[6].o));
	LINE_NUMBER(1359);
	frame[3].o = ((jobject)ARRAY_ACCESS(jobject, (frame[6].o), (jint(0))));
	LINE_NUMBER(1360);
	frame[1].o = ((jobject)ARRAY_ACCESS(jobject, (frame[6].o), (jint(1))));
	}
label_27:;
	{
	LINE_NUMBER(1362);
	sp[0].o = (jobject)M_java_math_BigDecimal_inflated_R_java_math_BigInteger(ctx, (frame[3].o));
	sp[1].o = (jobject)M_java_math_BigDecimal_inflated_R_java_math_BigInteger(ctx, (frame[1].o));
	sp[0].o = (jobject)((func_java_math_BigInteger_add_java_math_BigInteger_R_java_math_BigInteger) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_math_BigInteger_add_java_math_BigInteger_R_java_math_BigInteger])(ctx, sp[0].o, sp[1].o);
	sp[0].o = (jobject)SM_java_math_BigDecimal_doRound_java_math_BigInteger_int_java_math_MathContext_R_java_math_BigDecimal(ctx, sp[0].o, ((jint)((java_math_BigDecimal *) NULL_CHECK((frame[3].o)))->F_scale), (frame[2].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_java_math_BigDecimal_preAlign_java_math_BigDecimal_java_math_BigDecimal_long_java_math_MathContext_R_Array1_java_math_BigDecimal(jcontext ctx, jobject self, jobject param0, jobject param1, jlong param2, jobject param3) {
	NULL_CHECK(self);
	jtype frame[20];
	auto stack = &frame[13];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/math/BigDecimal:preAlign", 20 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].l = param2;
	frame[5].o = param3;
	{
	LINE_NUMBER(1388);
	if ((clinit_java_math_BigDecimal(ctx), (jint)SF_java_math_BigDecimal_$assertionsDisabled) != 0) goto label_1;
	}
	{
	if ((longCompare((frame[3].l), (jlong(0)))) != 0) goto label_1;
	}
	{
	clinit_java_lang_AssertionError(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_AssertionError);
	init_java_lang_AssertionError(ctx, sp[0].o);
	throwException(ctx, sp[0].o);	}
label_1:;
	{
	LINE_NUMBER(1392);
	if ((longCompare((frame[3].l), (jlong(0)))) >= 0) goto label_2;
	}
	{
	LINE_NUMBER(1393);
	frame[6].o = (frame[1].o);
	LINE_NUMBER(1394);
	frame[7].o = (frame[2].o);
	goto label_6;
	}
label_2:;
	{
	LINE_NUMBER(1396);
	frame[6].o = (frame[2].o);
	LINE_NUMBER(1397);
	frame[7].o = (frame[1].o);
	}
label_6:;
	{
	LINE_NUMBER(1406);
	jlong temp0 = jlong(((jint)((java_math_BigDecimal *) NULL_CHECK((frame[6].o)))->F_scale));
	jint temp1 = (jint)((func_java_math_BigDecimal_precision_R_int) ((void **) nullCheck(ctx, (frame[6].o))->vtable)[VTABLE_java_math_BigDecimal_precision_R_int])(ctx, (frame[6].o));
	frame[8].l = ((temp0 - (jlong(temp1))) + (jlong(((jint)((java_math_MathContext *) NULL_CHECK((frame[5].o)))->F_precision))));
	LINE_NUMBER(1417);
	jlong temp2 = jlong(((jint)((java_math_BigDecimal *) NULL_CHECK((frame[7].o)))->F_scale));
	jint temp3 = (jint)((func_java_math_BigDecimal_precision_R_int) ((void **) nullCheck(ctx, (frame[7].o))->vtable)[VTABLE_java_math_BigDecimal_precision_R_int])(ctx, (frame[7].o));
	frame[10].l = ((temp2 - (jlong(temp3))) + (jlong(1)));
	LINE_NUMBER(1418);
	if ((longCompare((frame[10].l), (jlong((((jint)((java_math_BigDecimal *) NULL_CHECK((frame[6].o)))->F_scale) + (jint(2))))))) <= 0) goto label_10;
	}
	{
	if ((longCompare((frame[10].l), ((frame[8].l) + (jlong(2ll))))) <= 0) goto label_10;
	}
	{
	LINE_NUMBER(1420);
	jint temp0 = (jint)((func_java_math_BigDecimal_signum_R_int) ((void **) nullCheck(ctx, (frame[7].o))->vtable)[VTABLE_java_math_BigDecimal_signum_R_int])(ctx, (frame[7].o));
	jlong temp1 = jlong(temp0);
	sp[0].o = frame[0].o;
	jlong temp2 = (jlong)SM_java_lang_Math_max_long_long_R_long(ctx, (jlong(((jint)((java_math_BigDecimal *) NULL_CHECK((frame[6].o)))->F_scale))), (frame[8].l));
	jint temp3 = (jint)M_java_math_BigDecimal_checkScale_long_R_int(ctx, sp[0].o, (temp2 + (jlong(3ll))));
	sp[0].o = (jobject)SM_java_math_BigDecimal_valueOf_long_int_R_java_math_BigDecimal(ctx, temp1, temp3);
	frame[7].o = sp[0].o;
	}
label_10:;
	{
	LINE_NUMBER(1425);
	sp[0].o = (jobject)createArray(ctx, &class_java_math_BigDecimal, (jint(2)));
	ARRAY_ACCESS(jobject, sp[0].o, (jint(0))) = (frame[6].o);
	ARRAY_ACCESS(jobject, sp[0].o, (jint(1))) = (frame[7].o);
	frame[12].o = sp[0].o;
	LINE_NUMBER(1426);
	popStackFrame(ctx);
	return (frame[12].o);
	}

	popStackFrame(ctx);
}

jobject M_java_math_BigDecimal_subtract_java_math_BigDecimal_R_java_math_BigDecimal(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/math/BigDecimal:subtract", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(1438);
	if ((longCompare(((jlong)((java_math_BigDecimal *) NULL_CHECK((frame[0].o)))->F_intCompact), (jlong(-9223372036854775807ll)))) == 0) goto label_1;
	}
	{
	LINE_NUMBER(1439);
	if ((longCompare(((jlong)((java_math_BigDecimal *) NULL_CHECK((frame[1].o)))->F_intCompact), (jlong(-9223372036854775807ll)))) == 0) goto label_3;
	}
	{
	LINE_NUMBER(1440);
	sp[0].o = (jobject)SM_java_math_BigDecimal_add_long_int_long_int_R_java_math_BigDecimal(ctx, ((jlong)((java_math_BigDecimal *) NULL_CHECK((frame[0].o)))->F_intCompact), ((jint)((java_math_BigDecimal *) NULL_CHECK((frame[0].o)))->F_scale), (-((jlong)((java_math_BigDecimal *) NULL_CHECK((frame[1].o)))->F_intCompact)), ((jint)((java_math_BigDecimal *) NULL_CHECK((frame[1].o)))->F_scale));
	popStackFrame(ctx);
	return sp[0].o;
	}
label_3:;
	{
	LINE_NUMBER(1442);
	jlong temp0 = (jlong)((java_math_BigDecimal *) NULL_CHECK((frame[0].o)))->F_intCompact;
	jint temp1 = (jint)((java_math_BigDecimal *) NULL_CHECK((frame[0].o)))->F_scale;
	sp[0].o = (jobject)((java_math_BigDecimal *) NULL_CHECK((frame[1].o)))->F_intVal;
	sp[0].o = (jobject)((func_java_math_BigInteger_negate_R_java_math_BigInteger) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_math_BigInteger_negate_R_java_math_BigInteger])(ctx, sp[0].o);
	sp[0].o = (jobject)SM_java_math_BigDecimal_add_long_int_java_math_BigInteger_int_R_java_math_BigDecimal(ctx, temp0, temp1, sp[0].o, ((jint)((java_math_BigDecimal *) NULL_CHECK((frame[1].o)))->F_scale));
	popStackFrame(ctx);
	return sp[0].o;
	}
label_1:;
	{
	LINE_NUMBER(1445);
	if ((longCompare(((jlong)((java_math_BigDecimal *) NULL_CHECK((frame[1].o)))->F_intCompact), (jlong(-9223372036854775807ll)))) == 0) goto label_5;
	}
	{
	LINE_NUMBER(1449);
	jlong temp0 = -((jlong)((java_math_BigDecimal *) NULL_CHECK((frame[1].o)))->F_intCompact);
	jint temp1 = (jint)((java_math_BigDecimal *) NULL_CHECK((frame[1].o)))->F_scale;
	sp[0].o = (jobject)((java_math_BigDecimal *) NULL_CHECK((frame[0].o)))->F_intVal;
	sp[0].o = (jobject)SM_java_math_BigDecimal_add_long_int_java_math_BigInteger_int_R_java_math_BigDecimal(ctx, temp0, temp1, sp[0].o, ((jint)((java_math_BigDecimal *) NULL_CHECK((frame[0].o)))->F_scale));
	popStackFrame(ctx);
	return sp[0].o;
	}
label_5:;
	{
	LINE_NUMBER(1451);
	sp[0].o = (jobject)((java_math_BigDecimal *) NULL_CHECK((frame[0].o)))->F_intVal;
	jint temp0 = (jint)((java_math_BigDecimal *) NULL_CHECK((frame[0].o)))->F_scale;
	sp[1].o = (jobject)((java_math_BigDecimal *) NULL_CHECK((frame[1].o)))->F_intVal;
	sp[1].o = (jobject)((func_java_math_BigInteger_negate_R_java_math_BigInteger) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_math_BigInteger_negate_R_java_math_BigInteger])(ctx, sp[1].o);
	sp[0].o = (jobject)SM_java_math_BigDecimal_add_java_math_BigInteger_int_java_math_BigInteger_int_R_java_math_BigDecimal(ctx, sp[0].o, temp0, sp[1].o, ((jint)((java_math_BigDecimal *) NULL_CHECK((frame[1].o)))->F_scale));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_java_math_BigDecimal_subtract_java_math_BigDecimal_java_math_MathContext_R_java_math_BigDecimal(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/math/BigDecimal:subtract", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(1471);
	if (((jint)((java_math_MathContext *) NULL_CHECK((frame[2].o)))->F_precision) != 0) goto label_1;
	}
	{
	LINE_NUMBER(1472);
	sp[0].o = (jobject)((func_java_math_BigDecimal_subtract_java_math_BigDecimal_R_java_math_BigDecimal) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_math_BigDecimal_subtract_java_math_BigDecimal_R_java_math_BigDecimal])(ctx, (frame[0].o), (frame[1].o));
	popStackFrame(ctx);
	return sp[0].o;
	}
label_1:;
	{
	LINE_NUMBER(1474);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((func_java_math_BigDecimal_negate_R_java_math_BigDecimal) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_math_BigDecimal_negate_R_java_math_BigDecimal])(ctx, (frame[1].o));
	sp[0].o = (jobject)((func_java_math_BigDecimal_add_java_math_BigDecimal_java_math_MathContext_R_java_math_BigDecimal) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_math_BigDecimal_add_java_math_BigDecimal_java_math_MathContext_R_java_math_BigDecimal])(ctx, sp[0].o, sp[1].o, (frame[2].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_java_math_BigDecimal_multiply_java_math_BigDecimal_R_java_math_BigDecimal(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/math/BigDecimal:multiply", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(1486);
	jint temp0 = (jint)M_java_math_BigDecimal_checkScale_long_R_int(ctx, (frame[0].o), ((jlong(((jint)((java_math_BigDecimal *) NULL_CHECK((frame[0].o)))->F_scale))) + (jlong(((jint)((java_math_BigDecimal *) NULL_CHECK((frame[1].o)))->F_scale)))));
	frame[2].i = temp0;
	LINE_NUMBER(1487);
	if ((longCompare(((jlong)((java_math_BigDecimal *) NULL_CHECK((frame[0].o)))->F_intCompact), (jlong(-9223372036854775807ll)))) == 0) goto label_2;
	}
	{
	LINE_NUMBER(1488);
	if ((longCompare(((jlong)((java_math_BigDecimal *) NULL_CHECK((frame[1].o)))->F_intCompact), (jlong(-9223372036854775807ll)))) == 0) goto label_4;
	}
	{
	LINE_NUMBER(1489);
	sp[0].o = (jobject)SM_java_math_BigDecimal_multiply_long_long_int_R_java_math_BigDecimal(ctx, ((jlong)((java_math_BigDecimal *) NULL_CHECK((frame[0].o)))->F_intCompact), ((jlong)((java_math_BigDecimal *) NULL_CHECK((frame[1].o)))->F_intCompact), (frame[2].i));
	popStackFrame(ctx);
	return sp[0].o;
	}
label_4:;
	{
	LINE_NUMBER(1491);
	jlong temp0 = (jlong)((java_math_BigDecimal *) NULL_CHECK((frame[0].o)))->F_intCompact;
	sp[0].o = (jobject)((java_math_BigDecimal *) NULL_CHECK((frame[1].o)))->F_intVal;
	sp[0].o = (jobject)SM_java_math_BigDecimal_multiply_long_java_math_BigInteger_int_R_java_math_BigDecimal(ctx, temp0, sp[0].o, (frame[2].i));
	popStackFrame(ctx);
	return sp[0].o;
	}
label_2:;
	{
	LINE_NUMBER(1494);
	if ((longCompare(((jlong)((java_math_BigDecimal *) NULL_CHECK((frame[1].o)))->F_intCompact), (jlong(-9223372036854775807ll)))) == 0) goto label_6;
	}
	{
	LINE_NUMBER(1495);
	jlong temp0 = (jlong)((java_math_BigDecimal *) NULL_CHECK((frame[1].o)))->F_intCompact;
	sp[0].o = (jobject)((java_math_BigDecimal *) NULL_CHECK((frame[0].o)))->F_intVal;
	sp[0].o = (jobject)SM_java_math_BigDecimal_multiply_long_java_math_BigInteger_int_R_java_math_BigDecimal(ctx, temp0, sp[0].o, (frame[2].i));
	popStackFrame(ctx);
	return sp[0].o;
	}
label_6:;
	{
	LINE_NUMBER(1497);
	sp[0].o = (jobject)((java_math_BigDecimal *) NULL_CHECK((frame[0].o)))->F_intVal;
	sp[1].o = (jobject)((java_math_BigDecimal *) NULL_CHECK((frame[1].o)))->F_intVal;
	sp[0].o = (jobject)SM_java_math_BigDecimal_multiply_java_math_BigInteger_java_math_BigInteger_int_R_java_math_BigDecimal(ctx, sp[0].o, sp[1].o, (frame[2].i));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_java_math_BigDecimal_multiply_java_math_BigDecimal_java_math_MathContext_R_java_math_BigDecimal(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[10];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/math/BigDecimal:multiply", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(1514);
	if (((jint)((java_math_MathContext *) NULL_CHECK((frame[2].o)))->F_precision) != 0) goto label_1;
	}
	{
	LINE_NUMBER(1515);
	sp[0].o = (jobject)((func_java_math_BigDecimal_multiply_java_math_BigDecimal_R_java_math_BigDecimal) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_math_BigDecimal_multiply_java_math_BigDecimal_R_java_math_BigDecimal])(ctx, (frame[0].o), (frame[1].o));
	popStackFrame(ctx);
	return sp[0].o;
	}
label_1:;
	{
	LINE_NUMBER(1516);
	jint temp0 = (jint)M_java_math_BigDecimal_checkScale_long_R_int(ctx, (frame[0].o), ((jlong(((jint)((java_math_BigDecimal *) NULL_CHECK((frame[0].o)))->F_scale))) + (jlong(((jint)((java_math_BigDecimal *) NULL_CHECK((frame[1].o)))->F_scale)))));
	frame[3].i = temp0;
	LINE_NUMBER(1517);
	if ((longCompare(((jlong)((java_math_BigDecimal *) NULL_CHECK((frame[0].o)))->F_intCompact), (jlong(-9223372036854775807ll)))) == 0) goto label_4;
	}
	{
	LINE_NUMBER(1518);
	if ((longCompare(((jlong)((java_math_BigDecimal *) NULL_CHECK((frame[1].o)))->F_intCompact), (jlong(-9223372036854775807ll)))) == 0) goto label_6;
	}
	{
	LINE_NUMBER(1519);
	sp[0].o = (jobject)SM_java_math_BigDecimal_multiplyAndRound_long_long_int_java_math_MathContext_R_java_math_BigDecimal(ctx, ((jlong)((java_math_BigDecimal *) NULL_CHECK((frame[0].o)))->F_intCompact), ((jlong)((java_math_BigDecimal *) NULL_CHECK((frame[1].o)))->F_intCompact), (frame[3].i), (frame[2].o));
	popStackFrame(ctx);
	return sp[0].o;
	}
label_6:;
	{
	LINE_NUMBER(1521);
	jlong temp0 = (jlong)((java_math_BigDecimal *) NULL_CHECK((frame[0].o)))->F_intCompact;
	sp[0].o = (jobject)((java_math_BigDecimal *) NULL_CHECK((frame[1].o)))->F_intVal;
	sp[0].o = (jobject)SM_java_math_BigDecimal_multiplyAndRound_long_java_math_BigInteger_int_java_math_MathContext_R_java_math_BigDecimal(ctx, temp0, sp[0].o, (frame[3].i), (frame[2].o));
	popStackFrame(ctx);
	return sp[0].o;
	}
label_4:;
	{
	LINE_NUMBER(1524);
	if ((longCompare(((jlong)((java_math_BigDecimal *) NULL_CHECK((frame[1].o)))->F_intCompact), (jlong(-9223372036854775807ll)))) == 0) goto label_8;
	}
	{
	LINE_NUMBER(1525);
	jlong temp0 = (jlong)((java_math_BigDecimal *) NULL_CHECK((frame[1].o)))->F_intCompact;
	sp[0].o = (jobject)((java_math_BigDecimal *) NULL_CHECK((frame[0].o)))->F_intVal;
	sp[0].o = (jobject)SM_java_math_BigDecimal_multiplyAndRound_long_java_math_BigInteger_int_java_math_MathContext_R_java_math_BigDecimal(ctx, temp0, sp[0].o, (frame[3].i), (frame[2].o));
	popStackFrame(ctx);
	return sp[0].o;
	}
label_8:;
	{
	LINE_NUMBER(1527);
	sp[0].o = (jobject)((java_math_BigDecimal *) NULL_CHECK((frame[0].o)))->F_intVal;
	sp[1].o = (jobject)((java_math_BigDecimal *) NULL_CHECK((frame[1].o)))->F_intVal;
	sp[0].o = (jobject)SM_java_math_BigDecimal_multiplyAndRound_java_math_BigInteger_java_math_BigInteger_int_java_math_MathContext_R_java_math_BigDecimal(ctx, sp[0].o, sp[1].o, (frame[3].i), (frame[2].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_java_math_BigDecimal_divide_java_math_BigDecimal_int_int_R_java_math_BigDecimal(jcontext ctx, jobject self, jobject param0, jint param1, jint param2) {
	NULL_CHECK(self);
	jtype frame[12];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/math/BigDecimal:divide", 12 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	frame[3].i = param2;
	{
	LINE_NUMBER(1561);
	if ((frame[3].i) < 0) goto label_1;
	}
	{
	if ((frame[3].i) <= (7)) goto label_2;
	}
label_1:;
	{
	LINE_NUMBER(1562);
	clinit_java_lang_IllegalArgumentException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IllegalArgumentException);
	init_java_lang_IllegalArgumentException_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"Invalid rounding mode"_j))));
	throwException(ctx, sp[0].o);	}
label_2:;
	{
	LINE_NUMBER(1563);
	if ((longCompare(((jlong)((java_math_BigDecimal *) NULL_CHECK((frame[0].o)))->F_intCompact), (jlong(-9223372036854775807ll)))) == 0) goto label_3;
	}
	{
	LINE_NUMBER(1564);
	if ((longCompare(((jlong)((java_math_BigDecimal *) NULL_CHECK((frame[1].o)))->F_intCompact), (jlong(-9223372036854775807ll)))) == 0) goto label_5;
	}
	{
	LINE_NUMBER(1565);
	sp[0].o = (jobject)SM_java_math_BigDecimal_divide_long_int_long_int_int_int_R_java_math_BigDecimal(ctx, ((jlong)((java_math_BigDecimal *) NULL_CHECK((frame[0].o)))->F_intCompact), ((jint)((java_math_BigDecimal *) NULL_CHECK((frame[0].o)))->F_scale), ((jlong)((java_math_BigDecimal *) NULL_CHECK((frame[1].o)))->F_intCompact), ((jint)((java_math_BigDecimal *) NULL_CHECK((frame[1].o)))->F_scale), (frame[2].i), (frame[3].i));
	popStackFrame(ctx);
	return sp[0].o;
	}
label_5:;
	{
	LINE_NUMBER(1567);
	jlong temp0 = (jlong)((java_math_BigDecimal *) NULL_CHECK((frame[0].o)))->F_intCompact;
	jint temp1 = (jint)((java_math_BigDecimal *) NULL_CHECK((frame[0].o)))->F_scale;
	sp[0].o = (jobject)((java_math_BigDecimal *) NULL_CHECK((frame[1].o)))->F_intVal;
	sp[0].o = (jobject)SM_java_math_BigDecimal_divide_long_int_java_math_BigInteger_int_int_int_R_java_math_BigDecimal(ctx, temp0, temp1, sp[0].o, ((jint)((java_math_BigDecimal *) NULL_CHECK((frame[1].o)))->F_scale), (frame[2].i), (frame[3].i));
	popStackFrame(ctx);
	return sp[0].o;
	}
label_3:;
	{
	LINE_NUMBER(1570);
	if ((longCompare(((jlong)((java_math_BigDecimal *) NULL_CHECK((frame[1].o)))->F_intCompact), (jlong(-9223372036854775807ll)))) == 0) goto label_7;
	}
	{
	LINE_NUMBER(1571);
	sp[0].o = (jobject)((java_math_BigDecimal *) NULL_CHECK((frame[0].o)))->F_intVal;
	sp[0].o = (jobject)SM_java_math_BigDecimal_divide_java_math_BigInteger_int_long_int_int_int_R_java_math_BigDecimal(ctx, sp[0].o, ((jint)((java_math_BigDecimal *) NULL_CHECK((frame[0].o)))->F_scale), ((jlong)((java_math_BigDecimal *) NULL_CHECK((frame[1].o)))->F_intCompact), ((jint)((java_math_BigDecimal *) NULL_CHECK((frame[1].o)))->F_scale), (frame[2].i), (frame[3].i));
	popStackFrame(ctx);
	return sp[0].o;
	}
label_7:;
	{
	LINE_NUMBER(1573);
	sp[0].o = (jobject)((java_math_BigDecimal *) NULL_CHECK((frame[0].o)))->F_intVal;
	jint temp0 = (jint)((java_math_BigDecimal *) NULL_CHECK((frame[0].o)))->F_scale;
	sp[1].o = (jobject)((java_math_BigDecimal *) NULL_CHECK((frame[1].o)))->F_intVal;
	sp[0].o = (jobject)SM_java_math_BigDecimal_divide_java_math_BigInteger_int_java_math_BigInteger_int_int_int_R_java_math_BigDecimal(ctx, sp[0].o, temp0, sp[1].o, ((jint)((java_math_BigDecimal *) NULL_CHECK((frame[1].o)))->F_scale), (frame[2].i), (frame[3].i));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_java_math_BigDecimal_divide_java_math_BigDecimal_int_java_math_RoundingMode_R_java_math_BigDecimal(jcontext ctx, jobject self, jobject param0, jint param1, jobject param2) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/math/BigDecimal:divide", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	frame[3].o = param2;
	{
	LINE_NUMBER(1595);
	sp[0].o = (jobject)((func_java_math_BigDecimal_divide_java_math_BigDecimal_int_int_R_java_math_BigDecimal) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_math_BigDecimal_divide_java_math_BigDecimal_int_int_R_java_math_BigDecimal])(ctx, (frame[0].o), (frame[1].o), (frame[2].i), ((jint)((java_math_RoundingMode *) NULL_CHECK((frame[3].o)))->F_oldMode));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_java_math_BigDecimal_divide_java_math_BigDecimal_int_R_java_math_BigDecimal(jcontext ctx, jobject self, jobject param0, jint param1) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/math/BigDecimal:divide", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(1626);
	sp[0].o = (jobject)((func_java_math_BigDecimal_divide_java_math_BigDecimal_int_int_R_java_math_BigDecimal) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_math_BigDecimal_divide_java_math_BigDecimal_int_int_R_java_math_BigDecimal])(ctx, (frame[0].o), (frame[1].o), ((jint)((java_math_BigDecimal *) NULL_CHECK((frame[0].o)))->F_scale), (frame[2].i));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_java_math_BigDecimal_divide_java_math_BigDecimal_java_math_RoundingMode_R_java_math_BigDecimal(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/math/BigDecimal:divide", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(1645);
	sp[0].o = (jobject)((func_java_math_BigDecimal_divide_java_math_BigDecimal_int_int_R_java_math_BigDecimal) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_math_BigDecimal_divide_java_math_BigDecimal_int_int_R_java_math_BigDecimal])(ctx, (frame[0].o), (frame[1].o), ((jint)((java_math_BigDecimal *) NULL_CHECK((frame[0].o)))->F_scale), ((jint)((java_math_RoundingMode *) NULL_CHECK((frame[2].o)))->F_oldMode));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_java_math_BigDecimal_divide_java_math_BigDecimal_R_java_math_BigDecimal(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[14];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/math/BigDecimal:divide", 14 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(1666);
	jint temp0 = (jint)((func_java_math_BigDecimal_signum_R_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_math_BigDecimal_signum_R_int])(ctx, (frame[1].o));
	if (temp0 != 0) goto label_5;
	}
	{
	LINE_NUMBER(1667);
	jint temp0 = (jint)((func_java_math_BigDecimal_signum_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_math_BigDecimal_signum_R_int])(ctx, (frame[0].o));
	if (temp0 != 0) goto label_7;
	}
	{
	LINE_NUMBER(1668);
	clinit_java_lang_ArithmeticException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_ArithmeticException);
	init_java_lang_ArithmeticException_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"Division undefined"_j))));
	throwException(ctx, sp[0].o);	}
label_7:;
	{
	LINE_NUMBER(1669);
	clinit_java_lang_ArithmeticException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_ArithmeticException);
	init_java_lang_ArithmeticException_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"Division by zero"_j))));
	throwException(ctx, sp[0].o);	}
label_5:;
	{
	LINE_NUMBER(1673);
	jint temp0 = (jint)SM_java_math_BigDecimal_saturateLong_long_R_int(ctx, ((jlong(((jint)((java_math_BigDecimal *) NULL_CHECK((frame[0].o)))->F_scale))) - (jlong(((jint)((java_math_BigDecimal *) NULL_CHECK((frame[1].o)))->F_scale)))));
	frame[2].i = temp0;
	LINE_NUMBER(1675);
	jint temp1 = (jint)((func_java_math_BigDecimal_signum_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_math_BigDecimal_signum_R_int])(ctx, (frame[0].o));
	if (temp1 != 0) goto label_10;
	}
	{
	LINE_NUMBER(1676);
	sp[0].o = (jobject)SM_java_math_BigDecimal_zeroValueOf_int_R_java_math_BigDecimal(ctx, (frame[2].i));
	popStackFrame(ctx);
	return sp[0].o;
	}
label_10:;
	{
	LINE_NUMBER(1686);
	clinit_java_math_MathContext(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_math_MathContext);
	jint temp0 = (jint)((func_java_math_BigDecimal_precision_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_math_BigDecimal_precision_R_int])(ctx, (frame[0].o));
	jlong temp1 = jlong(temp0);
	jdouble temp2 = jdouble(10.0);
	sp[1].o = frame[1].o;
	LINE_NUMBER(1687);
	jint temp3 = (jint)((func_java_math_BigDecimal_precision_R_int) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_math_BigDecimal_precision_R_int])(ctx, sp[1].o);
	jdouble temp4 = (jdouble)SM_java_lang_Math_ceil_double_R_double(ctx, ((temp2 * (jdouble(temp3))) / (jdouble(3.0))));
	jlong temp5 = temp1 + (jlong(temp4));
	jlong temp6 = jlong(2147483647ll);
	LINE_NUMBER(1686);
	jlong temp7 = (jlong)SM_java_lang_Math_min_long_long_R_long(ctx, temp5, temp6);
	jint temp8 = jint(temp7);
	clinit_java_math_RoundingMode(ctx);
	sp[1].o = (jobject)SF_java_math_RoundingMode_UNNECESSARY;
	init_java_math_MathContext_int_java_math_RoundingMode(ctx, sp[0].o, temp8, sp[1].o);
	frame[3].o = sp[0].o;
	}
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_ArithmeticException))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(1692);
	sp[0].o = (jobject)((func_java_math_BigDecimal_divide_java_math_BigDecimal_java_math_MathContext_R_java_math_BigDecimal) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_math_BigDecimal_divide_java_math_BigDecimal_java_math_MathContext_R_java_math_BigDecimal])(ctx, (frame[0].o), (frame[1].o), (frame[3].o));
	frame[4].o = sp[0].o;
	}
	popExceptionFrame(frameRef);
	LINE_NUMBER(1696);
	goto label_14;
label_2:;
	{
	sp -= 1;
	LINE_NUMBER(1693);
	frame[5].o = sp[0].o;
	LINE_NUMBER(1694);
	clinit_java_lang_ArithmeticException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_ArithmeticException);
	init_java_lang_ArithmeticException_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"Non-terminating decimal expansion; no exact representable decimal result."_j))));
	throwException(ctx, sp[0].o);	}
label_14:;
	{
	LINE_NUMBER(1698);
	jint temp0 = (jint)((func_java_math_BigDecimal_scale_R_int) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_java_math_BigDecimal_scale_R_int])(ctx, (frame[4].o));
	frame[5].i = temp0;
	LINE_NUMBER(1704);
	if ((frame[2].i) <= (frame[5].i)) goto label_17;
	}
	{
	LINE_NUMBER(1705);
	sp[0].o = (jobject)((func_java_math_BigDecimal_setScale_int_int_R_java_math_BigDecimal) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_java_math_BigDecimal_setScale_int_int_R_java_math_BigDecimal])(ctx, (frame[4].o), (frame[2].i), (7));
	popStackFrame(ctx);
	return sp[0].o;
	}
label_17:;
	{
	LINE_NUMBER(1707);
	popStackFrame(ctx);
	return (frame[4].o);
	}

	popStackFrame(ctx);
}

jobject M_java_math_BigDecimal_divide_java_math_BigDecimal_java_math_MathContext_R_java_math_BigDecimal(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[18];
	auto stack = &frame[9];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/math/BigDecimal:divide", 18 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(1725);
	frame[3].i = ((jint)((java_math_MathContext *) NULL_CHECK((frame[2].o)))->F_precision);
	LINE_NUMBER(1726);
	if ((frame[3].i) != 0) goto label_2;
	}
	{
	LINE_NUMBER(1727);
	sp[0].o = (jobject)((func_java_math_BigDecimal_divide_java_math_BigDecimal_R_java_math_BigDecimal) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_math_BigDecimal_divide_java_math_BigDecimal_R_java_math_BigDecimal])(ctx, (frame[0].o), (frame[1].o));
	popStackFrame(ctx);
	return sp[0].o;
	}
label_2:;
	{
	LINE_NUMBER(1729);
	frame[4].o = (frame[0].o);
	LINE_NUMBER(1730);
	frame[5].l = ((jlong(((jint)((java_math_BigDecimal *) NULL_CHECK((frame[4].o)))->F_scale))) - (jlong(((jint)((java_math_BigDecimal *) NULL_CHECK((frame[1].o)))->F_scale))));
	LINE_NUMBER(1743);
	jint temp0 = (jint)((func_java_math_BigDecimal_signum_R_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_math_BigDecimal_signum_R_int])(ctx, (frame[1].o));
	if (temp0 != 0) goto label_6;
	}
	{
	LINE_NUMBER(1744);
	jint temp0 = (jint)((func_java_math_BigDecimal_signum_R_int) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_java_math_BigDecimal_signum_R_int])(ctx, (frame[4].o));
	if (temp0 != 0) goto label_8;
	}
	{
	LINE_NUMBER(1745);
	clinit_java_lang_ArithmeticException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_ArithmeticException);
	init_java_lang_ArithmeticException_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"Division undefined"_j))));
	throwException(ctx, sp[0].o);	}
label_8:;
	{
	LINE_NUMBER(1746);
	clinit_java_lang_ArithmeticException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_ArithmeticException);
	init_java_lang_ArithmeticException_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"Division by zero"_j))));
	throwException(ctx, sp[0].o);	}
label_6:;
	{
	LINE_NUMBER(1748);
	jint temp0 = (jint)((func_java_math_BigDecimal_signum_R_int) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_java_math_BigDecimal_signum_R_int])(ctx, (frame[4].o));
	if (temp0 != 0) goto label_10;
	}
	{
	LINE_NUMBER(1749);
	jint temp0 = (jint)SM_java_math_BigDecimal_saturateLong_long_R_int(ctx, (frame[5].l));
	sp[0].o = (jobject)SM_java_math_BigDecimal_zeroValueOf_int_R_java_math_BigDecimal(ctx, temp0);
	popStackFrame(ctx);
	return sp[0].o;
	}
label_10:;
	{
	LINE_NUMBER(1750);
	jint temp0 = (jint)((func_java_math_BigDecimal_precision_R_int) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_java_math_BigDecimal_precision_R_int])(ctx, (frame[4].o));
	frame[7].i = temp0;
	LINE_NUMBER(1751);
	jint temp1 = (jint)((func_java_math_BigDecimal_precision_R_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_math_BigDecimal_precision_R_int])(ctx, (frame[1].o));
	frame[8].i = temp1;
	LINE_NUMBER(1752);
	if ((longCompare(((jlong)((java_math_BigDecimal *) NULL_CHECK((frame[4].o)))->F_intCompact), (jlong(-9223372036854775807ll)))) == 0) goto label_14;
	}
	{
	LINE_NUMBER(1753);
	if ((longCompare(((jlong)((java_math_BigDecimal *) NULL_CHECK((frame[1].o)))->F_intCompact), (jlong(-9223372036854775807ll)))) == 0) goto label_16;
	}
	{
	LINE_NUMBER(1754);
	sp[0].o = (jobject)SM_java_math_BigDecimal_divide_long_int_long_int_long_java_math_MathContext_R_java_math_BigDecimal(ctx, ((jlong)((java_math_BigDecimal *) NULL_CHECK((frame[4].o)))->F_intCompact), (frame[7].i), ((jlong)((java_math_BigDecimal *) NULL_CHECK((frame[1].o)))->F_intCompact), (frame[8].i), (frame[5].l), (frame[2].o));
	popStackFrame(ctx);
	return sp[0].o;
	}
label_16:;
	{
	LINE_NUMBER(1756);
	jlong temp0 = (jlong)((java_math_BigDecimal *) NULL_CHECK((frame[4].o)))->F_intCompact;
	jint temp1 = frame[7].i;
	sp[0].o = (jobject)((java_math_BigDecimal *) NULL_CHECK((frame[1].o)))->F_intVal;
	sp[0].o = (jobject)SM_java_math_BigDecimal_divide_long_int_java_math_BigInteger_int_long_java_math_MathContext_R_java_math_BigDecimal(ctx, temp0, temp1, sp[0].o, (frame[8].i), (frame[5].l), (frame[2].o));
	popStackFrame(ctx);
	return sp[0].o;
	}
label_14:;
	{
	LINE_NUMBER(1759);
	if ((longCompare(((jlong)((java_math_BigDecimal *) NULL_CHECK((frame[1].o)))->F_intCompact), (jlong(-9223372036854775807ll)))) == 0) goto label_18;
	}
	{
	LINE_NUMBER(1760);
	sp[0].o = (jobject)((java_math_BigDecimal *) NULL_CHECK((frame[4].o)))->F_intVal;
	sp[0].o = (jobject)SM_java_math_BigDecimal_divide_java_math_BigInteger_int_long_int_long_java_math_MathContext_R_java_math_BigDecimal(ctx, sp[0].o, (frame[7].i), ((jlong)((java_math_BigDecimal *) NULL_CHECK((frame[1].o)))->F_intCompact), (frame[8].i), (frame[5].l), (frame[2].o));
	popStackFrame(ctx);
	return sp[0].o;
	}
label_18:;
	{
	LINE_NUMBER(1762);
	sp[0].o = (jobject)((java_math_BigDecimal *) NULL_CHECK((frame[4].o)))->F_intVal;
	jint temp0 = frame[7].i;
	sp[1].o = (jobject)((java_math_BigDecimal *) NULL_CHECK((frame[1].o)))->F_intVal;
	sp[0].o = (jobject)SM_java_math_BigDecimal_divide_java_math_BigInteger_int_java_math_BigInteger_int_long_java_math_MathContext_R_java_math_BigDecimal(ctx, sp[0].o, temp0, sp[1].o, (frame[8].i), (frame[5].l), (frame[2].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_java_math_BigDecimal_divideToIntegralValue_java_math_BigDecimal_R_java_math_BigDecimal(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[11];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/math/BigDecimal:divideToIntegralValue", 11 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(1780);
	jint temp0 = (jint)SM_java_math_BigDecimal_saturateLong_long_R_int(ctx, ((jlong(((jint)((java_math_BigDecimal *) NULL_CHECK((frame[0].o)))->F_scale))) - (jlong(((jint)((java_math_BigDecimal *) NULL_CHECK((frame[1].o)))->F_scale)))));
	frame[2].i = temp0;
	LINE_NUMBER(1781);
	jint temp1 = (jint)M_java_math_BigDecimal_compareMagnitude_java_math_BigDecimal_R_int(ctx, (frame[0].o), (frame[1].o));
	if (temp1 >= 0) goto label_2;
	}
	{
	LINE_NUMBER(1783);
	sp[0].o = (jobject)SM_java_math_BigDecimal_zeroValueOf_int_R_java_math_BigDecimal(ctx, (frame[2].i));
	popStackFrame(ctx);
	return sp[0].o;
	}
label_2:;
	{
	LINE_NUMBER(1786);
	jint temp0 = (jint)((func_java_math_BigDecimal_signum_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_math_BigDecimal_signum_R_int])(ctx, (frame[0].o));
	if (temp0 != 0) goto label_4;
	}
	{
	jint temp0 = (jint)((func_java_math_BigDecimal_signum_R_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_math_BigDecimal_signum_R_int])(ctx, (frame[1].o));
	if (temp0 == 0) goto label_4;
	}
	{
	LINE_NUMBER(1787);
	sp[0].o = (jobject)((func_java_math_BigDecimal_setScale_int_int_R_java_math_BigDecimal) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_math_BigDecimal_setScale_int_int_R_java_math_BigDecimal])(ctx, (frame[0].o), (frame[2].i), (7));
	popStackFrame(ctx);
	return sp[0].o;
	}
label_4:;
	{
	LINE_NUMBER(1792);
	jint temp0 = (jint)((func_java_math_BigDecimal_precision_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_math_BigDecimal_precision_R_int])(ctx, (frame[0].o));
	jlong temp1 = jlong(temp0);
	jdouble temp2 = jdouble(10.0);
	sp[0].o = frame[1].o;
	LINE_NUMBER(1793);
	jint temp3 = (jint)((func_java_math_BigDecimal_precision_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_math_BigDecimal_precision_R_int])(ctx, sp[0].o);
	jdouble temp4 = (jdouble)SM_java_lang_Math_ceil_double_R_double(ctx, ((temp2 * (jdouble(temp3))) / (jdouble(3.0))));
	jlong temp5 = temp1 + (jlong(temp4));
	sp[0].o = frame[0].o;
	LINE_NUMBER(1794);
	jint temp6 = (jint)((func_java_math_BigDecimal_scale_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_math_BigDecimal_scale_R_int])(ctx, sp[0].o);
	jlong temp7 = jlong(temp6);
	jint temp8 = (jint)((func_java_math_BigDecimal_scale_R_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_math_BigDecimal_scale_R_int])(ctx, (frame[1].o));
	jlong temp9 = (jlong)SM_java_lang_Math_abs_long_R_long(ctx, (temp7 - (jlong(temp8))));
	jlong temp10 = (temp5 + temp9) + (jlong(2ll));
	jlong temp11 = jlong(2147483647ll);
	LINE_NUMBER(1792);
	jlong temp12 = (jlong)SM_java_lang_Math_min_long_long_R_long(ctx, temp10, temp11);
	frame[3].i = (jint(temp12));
	LINE_NUMBER(1796);
	sp[0].o = frame[0].o;
	sp[1].o = frame[1].o;
	clinit_java_math_MathContext(ctx);
	sp[2].o = gcAlloc(ctx, &class_java_math_MathContext);
	jint temp13 = frame[3].i;
	clinit_java_math_RoundingMode(ctx);
	sp[3].o = (jobject)SF_java_math_RoundingMode_DOWN;
	init_java_math_MathContext_int_java_math_RoundingMode(ctx, sp[2].o, temp13, sp[3].o);
	sp[0].o = (jobject)((func_java_math_BigDecimal_divide_java_math_BigDecimal_java_math_MathContext_R_java_math_BigDecimal) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_math_BigDecimal_divide_java_math_BigDecimal_java_math_MathContext_R_java_math_BigDecimal])(ctx, sp[0].o, sp[1].o, sp[2].o);
	frame[4].o = sp[0].o;
	LINE_NUMBER(1798);
	if (((jint)((java_math_BigDecimal *) NULL_CHECK((frame[4].o)))->F_scale) <= 0) goto label_11;
	}
	{
	LINE_NUMBER(1799);
	sp[0].o = frame[4].o;
	jint temp0 = jint(0);
	clinit_java_math_RoundingMode(ctx);
	sp[1].o = (jobject)SF_java_math_RoundingMode_DOWN;
	sp[0].o = (jobject)((func_java_math_BigDecimal_setScale_int_java_math_RoundingMode_R_java_math_BigDecimal) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_math_BigDecimal_setScale_int_java_math_RoundingMode_R_java_math_BigDecimal])(ctx, sp[0].o, temp0, sp[1].o);
	frame[4].o = sp[0].o;
	LINE_NUMBER(1800);
	sp[0].o = (jobject)((java_math_BigDecimal *) NULL_CHECK((frame[4].o)))->F_intVal;
	sp[0].o = (jobject)SM_java_math_BigDecimal_stripZerosToMatchScale_java_math_BigInteger_long_int_int_R_java_math_BigDecimal(ctx, sp[0].o, ((jlong)((java_math_BigDecimal *) NULL_CHECK((frame[4].o)))->F_intCompact), ((jint)((java_math_BigDecimal *) NULL_CHECK((frame[4].o)))->F_scale), (frame[2].i));
	frame[4].o = sp[0].o;
	}
label_11:;
	{
	LINE_NUMBER(1803);
	if (((jint)((java_math_BigDecimal *) NULL_CHECK((frame[4].o)))->F_scale) >= (frame[2].i)) goto label_14;
	}
	{
	LINE_NUMBER(1805);
	sp[0].o = (jobject)((func_java_math_BigDecimal_setScale_int_int_R_java_math_BigDecimal) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_java_math_BigDecimal_setScale_int_int_R_java_math_BigDecimal])(ctx, (frame[4].o), (frame[2].i), (7));
	frame[4].o = sp[0].o;
	}
label_14:;
	{
	LINE_NUMBER(1808);
	popStackFrame(ctx);
	return (frame[4].o);
	}

	popStackFrame(ctx);
}

jobject M_java_math_BigDecimal_divideToIntegralValue_java_math_BigDecimal_java_math_MathContext_R_java_math_BigDecimal(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[12];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/math/BigDecimal:divideToIntegralValue", 12 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(1832);
	if (((jint)((java_math_MathContext *) NULL_CHECK((frame[2].o)))->F_precision) == 0) goto label_1;
	}
	{
	sp[0].o = frame[0].o;
	sp[1].o = frame[1].o;
	LINE_NUMBER(1833);
	jint temp0 = (jint)M_java_math_BigDecimal_compareMagnitude_java_math_BigDecimal_R_int(ctx, sp[0].o, sp[1].o);
	if (temp0 >= 0) goto label_3;
	}
label_1:;
	{
	LINE_NUMBER(1834);
	sp[0].o = (jobject)((func_java_math_BigDecimal_divideToIntegralValue_java_math_BigDecimal_R_java_math_BigDecimal) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_math_BigDecimal_divideToIntegralValue_java_math_BigDecimal_R_java_math_BigDecimal])(ctx, (frame[0].o), (frame[1].o));
	popStackFrame(ctx);
	return sp[0].o;
	}
label_3:;
	{
	LINE_NUMBER(1837);
	jint temp0 = (jint)SM_java_math_BigDecimal_saturateLong_long_R_int(ctx, ((jlong(((jint)((java_math_BigDecimal *) NULL_CHECK((frame[0].o)))->F_scale))) - (jlong(((jint)((java_math_BigDecimal *) NULL_CHECK((frame[1].o)))->F_scale)))));
	frame[3].i = temp0;
	LINE_NUMBER(1846);
	sp[0].o = frame[0].o;
	sp[1].o = frame[1].o;
	clinit_java_math_MathContext(ctx);
	sp[2].o = gcAlloc(ctx, &class_java_math_MathContext);
	jint temp1 = (jint)((java_math_MathContext *) NULL_CHECK((frame[2].o)))->F_precision;
	clinit_java_math_RoundingMode(ctx);
	sp[3].o = (jobject)SF_java_math_RoundingMode_DOWN;
	init_java_math_MathContext_int_java_math_RoundingMode(ctx, sp[2].o, temp1, sp[3].o);
	sp[0].o = (jobject)((func_java_math_BigDecimal_divide_java_math_BigDecimal_java_math_MathContext_R_java_math_BigDecimal) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_math_BigDecimal_divide_java_math_BigDecimal_java_math_MathContext_R_java_math_BigDecimal])(ctx, sp[0].o, sp[1].o, sp[2].o);
	frame[4].o = sp[0].o;
	LINE_NUMBER(1848);
	jint temp2 = (jint)((func_java_math_BigDecimal_scale_R_int) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_java_math_BigDecimal_scale_R_int])(ctx, (frame[4].o));
	if (temp2 >= 0) goto label_6;
	}
	{
	LINE_NUMBER(1854);
	sp[0].o = (jobject)((func_java_math_BigDecimal_multiply_java_math_BigDecimal_R_java_math_BigDecimal) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_java_math_BigDecimal_multiply_java_math_BigDecimal_R_java_math_BigDecimal])(ctx, (frame[4].o), (frame[1].o));
	frame[5].o = sp[0].o;
	LINE_NUMBER(1857);
	sp[0].o = (jobject)((func_java_math_BigDecimal_subtract_java_math_BigDecimal_R_java_math_BigDecimal) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_math_BigDecimal_subtract_java_math_BigDecimal_R_java_math_BigDecimal])(ctx, (frame[0].o), (frame[5].o));
	jint temp0 = (jint)M_java_math_BigDecimal_compareMagnitude_java_math_BigDecimal_R_int(ctx, sp[0].o, (frame[1].o));
	if (temp0 < 0) goto label_9;
	}
	{
	LINE_NUMBER(1858);
	clinit_java_lang_ArithmeticException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_ArithmeticException);
	init_java_lang_ArithmeticException_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"Division impossible"_j))));
	throwException(ctx, sp[0].o);	}
label_9:;
	LINE_NUMBER(1860);
	goto label_11;
label_6:;
	{
	jint temp0 = (jint)((func_java_math_BigDecimal_scale_R_int) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_java_math_BigDecimal_scale_R_int])(ctx, (frame[4].o));
	if (temp0 <= 0) goto label_11;
	}
	{
	LINE_NUMBER(1866);
	sp[0].o = frame[4].o;
	jint temp0 = jint(0);
	clinit_java_math_RoundingMode(ctx);
	sp[1].o = (jobject)SF_java_math_RoundingMode_DOWN;
	sp[0].o = (jobject)((func_java_math_BigDecimal_setScale_int_java_math_RoundingMode_R_java_math_BigDecimal) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_math_BigDecimal_setScale_int_java_math_RoundingMode_R_java_math_BigDecimal])(ctx, sp[0].o, temp0, sp[1].o);
	frame[4].o = sp[0].o;
	}
label_11:;
	{
	LINE_NUMBER(1871);
	jint temp0 = frame[3].i;
	jint temp1 = (jint)((func_java_math_BigDecimal_scale_R_int) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_java_math_BigDecimal_scale_R_int])(ctx, (frame[4].o));
	if (temp0 <= temp1) goto label_13;
	}
	{
	jint temp0 = (jint)((java_math_MathContext *) NULL_CHECK((frame[2].o)))->F_precision;
	sp[0].o = frame[4].o;
	LINE_NUMBER(1872);
	jint temp1 = (jint)((func_java_math_BigDecimal_precision_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_math_BigDecimal_precision_R_int])(ctx, sp[0].o);
	jint temp2 = temp0 - temp1;
	frame[5].i = temp2;
	if (temp2 <= 0) goto label_13;
	}
	{
	LINE_NUMBER(1873);
	sp[0].o = frame[4].o;
	jint temp0 = (jint)((func_java_math_BigDecimal_scale_R_int) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_java_math_BigDecimal_scale_R_int])(ctx, (frame[4].o));
	jint temp1 = frame[5].i;
	jint temp2 = (frame[3].i) - ((jint)((java_math_BigDecimal *) NULL_CHECK((frame[4].o)))->F_scale);
	LINE_NUMBER(1874);
	jint temp3 = (jint)SM_java_lang_Math_min_int_int_R_int(ctx, temp1, temp2);
	jint temp4 = temp0 + temp3;
	LINE_NUMBER(1873);
	sp[0].o = (jobject)((func_java_math_BigDecimal_setScale_int_R_java_math_BigDecimal) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_math_BigDecimal_setScale_int_R_java_math_BigDecimal])(ctx, sp[0].o, temp4);
	popStackFrame(ctx);
	return sp[0].o;
	}
label_13:;
	{
	LINE_NUMBER(1876);
	sp[0].o = (jobject)((java_math_BigDecimal *) NULL_CHECK((frame[4].o)))->F_intVal;
	sp[0].o = (jobject)SM_java_math_BigDecimal_stripZerosToMatchScale_java_math_BigInteger_long_int_int_R_java_math_BigDecimal(ctx, sp[0].o, ((jlong)((java_math_BigDecimal *) NULL_CHECK((frame[4].o)))->F_intCompact), ((jint)((java_math_BigDecimal *) NULL_CHECK((frame[4].o)))->F_scale), (frame[3].i));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_java_math_BigDecimal_remainder_java_math_BigDecimal_R_java_math_BigDecimal(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/math/BigDecimal:remainder", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(1894);
	sp[0].o = (jobject)((func_java_math_BigDecimal_divideAndRemainder_java_math_BigDecimal_R_Array1_java_math_BigDecimal) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_math_BigDecimal_divideAndRemainder_java_math_BigDecimal_R_Array1_java_math_BigDecimal])(ctx, (frame[0].o), (frame[1].o));
	frame[2].o = sp[0].o;
	LINE_NUMBER(1895);
	popStackFrame(ctx);
	return ((jobject)ARRAY_ACCESS(jobject, (frame[2].o), (jint(1))));
	}

	popStackFrame(ctx);
}

jobject M_java_math_BigDecimal_remainder_java_math_BigDecimal_java_math_MathContext_R_java_math_BigDecimal(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/math/BigDecimal:remainder", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(1924);
	sp[0].o = (jobject)((func_java_math_BigDecimal_divideAndRemainder_java_math_BigDecimal_java_math_MathContext_R_Array1_java_math_BigDecimal) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_math_BigDecimal_divideAndRemainder_java_math_BigDecimal_java_math_MathContext_R_Array1_java_math_BigDecimal])(ctx, (frame[0].o), (frame[1].o), (frame[2].o));
	frame[3].o = sp[0].o;
	LINE_NUMBER(1925);
	popStackFrame(ctx);
	return ((jobject)ARRAY_ACCESS(jobject, (frame[3].o), (jint(1))));
	}

	popStackFrame(ctx);
}

jobject M_java_math_BigDecimal_divideAndRemainder_java_math_BigDecimal_R_Array1_java_math_BigDecimal(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/math/BigDecimal:divideAndRemainder", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(1950);
	sp[0].o = (jobject)createArray(ctx, &class_java_math_BigDecimal, (jint(2)));
	frame[2].o = sp[0].o;
	LINE_NUMBER(1952);
	sp[0].o = frame[2].o;
	jint temp0 = jint(0);
	sp[1].o = (jobject)((func_java_math_BigDecimal_divideToIntegralValue_java_math_BigDecimal_R_java_math_BigDecimal) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_math_BigDecimal_divideToIntegralValue_java_math_BigDecimal_R_java_math_BigDecimal])(ctx, (frame[0].o), (frame[1].o));
	ARRAY_ACCESS(jobject, sp[0].o, temp0) = sp[1].o;
	LINE_NUMBER(1953);
	sp[0].o = frame[2].o;
	jint temp1 = jint(1);
	sp[1].o = frame[0].o;
	sp[2].o = (jobject)((func_java_math_BigDecimal_multiply_java_math_BigDecimal_R_java_math_BigDecimal) ((void **) nullCheck(ctx, ((jobject)ARRAY_ACCESS(jobject, (frame[2].o), (jint(0)))))->vtable)[VTABLE_java_math_BigDecimal_multiply_java_math_BigDecimal_R_java_math_BigDecimal])(ctx, ((jobject)ARRAY_ACCESS(jobject, (frame[2].o), (jint(0)))), (frame[1].o));
	sp[1].o = (jobject)((func_java_math_BigDecimal_subtract_java_math_BigDecimal_R_java_math_BigDecimal) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_math_BigDecimal_subtract_java_math_BigDecimal_R_java_math_BigDecimal])(ctx, sp[1].o, sp[2].o);
	ARRAY_ACCESS(jobject, sp[0].o, temp1) = sp[1].o;
	LINE_NUMBER(1954);
	popStackFrame(ctx);
	return (frame[2].o);
	}

	popStackFrame(ctx);
}

jobject M_java_math_BigDecimal_divideAndRemainder_java_math_BigDecimal_java_math_MathContext_R_Array1_java_math_BigDecimal(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[10];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/math/BigDecimal:divideAndRemainder", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(1984);
	if (((jint)((java_math_MathContext *) NULL_CHECK((frame[2].o)))->F_precision) != 0) goto label_1;
	}
	{
	LINE_NUMBER(1985);
	sp[0].o = (jobject)((func_java_math_BigDecimal_divideAndRemainder_java_math_BigDecimal_R_Array1_java_math_BigDecimal) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_math_BigDecimal_divideAndRemainder_java_math_BigDecimal_R_Array1_java_math_BigDecimal])(ctx, (frame[0].o), (frame[1].o));
	popStackFrame(ctx);
	return sp[0].o;
	}
label_1:;
	{
	LINE_NUMBER(1987);
	sp[0].o = (jobject)createArray(ctx, &class_java_math_BigDecimal, (jint(2)));
	frame[3].o = sp[0].o;
	LINE_NUMBER(1988);
	frame[4].o = (frame[0].o);
	LINE_NUMBER(1990);
	sp[0].o = frame[3].o;
	jint temp0 = jint(0);
	sp[1].o = (jobject)((func_java_math_BigDecimal_divideToIntegralValue_java_math_BigDecimal_java_math_MathContext_R_java_math_BigDecimal) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_java_math_BigDecimal_divideToIntegralValue_java_math_BigDecimal_java_math_MathContext_R_java_math_BigDecimal])(ctx, (frame[4].o), (frame[1].o), (frame[2].o));
	ARRAY_ACCESS(jobject, sp[0].o, temp0) = sp[1].o;
	LINE_NUMBER(1991);
	sp[0].o = frame[3].o;
	jint temp1 = jint(1);
	sp[1].o = frame[4].o;
	sp[2].o = (jobject)((func_java_math_BigDecimal_multiply_java_math_BigDecimal_R_java_math_BigDecimal) ((void **) nullCheck(ctx, ((jobject)ARRAY_ACCESS(jobject, (frame[3].o), (jint(0)))))->vtable)[VTABLE_java_math_BigDecimal_multiply_java_math_BigDecimal_R_java_math_BigDecimal])(ctx, ((jobject)ARRAY_ACCESS(jobject, (frame[3].o), (jint(0)))), (frame[1].o));
	sp[1].o = (jobject)((func_java_math_BigDecimal_subtract_java_math_BigDecimal_R_java_math_BigDecimal) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_math_BigDecimal_subtract_java_math_BigDecimal_R_java_math_BigDecimal])(ctx, sp[1].o, sp[2].o);
	ARRAY_ACCESS(jobject, sp[0].o, temp1) = sp[1].o;
	LINE_NUMBER(1992);
	popStackFrame(ctx);
	return (frame[3].o);
	}

	popStackFrame(ctx);
}

jobject M_java_math_BigDecimal_pow_int_R_java_math_BigDecimal(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/math/BigDecimal:pow", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(2013);
	if ((frame[1].i) < 0) goto label_1;
	}
	{
	if ((frame[1].i) <= (jint(999999999))) goto label_2;
	}
label_1:;
	{
	LINE_NUMBER(2014);
	clinit_java_lang_ArithmeticException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_ArithmeticException);
	init_java_lang_ArithmeticException_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"Invalid operation"_j))));
	throwException(ctx, sp[0].o);	}
label_2:;
	{
	LINE_NUMBER(2017);
	jint temp0 = (jint)M_java_math_BigDecimal_checkScale_long_R_int(ctx, (frame[0].o), ((jlong(((jint)((java_math_BigDecimal *) NULL_CHECK((frame[0].o)))->F_scale))) * (jlong((frame[1].i)))));
	frame[2].i = temp0;
	LINE_NUMBER(2018);
	clinit_java_math_BigDecimal(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_math_BigDecimal);
	sp[1].o = (jobject)M_java_math_BigDecimal_inflated_R_java_math_BigInteger(ctx, (frame[0].o));
	sp[1].o = (jobject)((func_java_math_BigInteger_pow_int_R_java_math_BigInteger) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_math_BigInteger_pow_int_R_java_math_BigInteger])(ctx, sp[1].o, (frame[1].i));
	init_java_math_BigDecimal_java_math_BigInteger_int(ctx, sp[0].o, sp[1].o, (frame[2].i));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_java_math_BigDecimal_pow_int_java_math_MathContext_R_java_math_BigDecimal(jcontext ctx, jobject self, jint param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[13];
	auto stack = &frame[9];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/math/BigDecimal:pow", 13 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(2073);
	if (((jint)((java_math_MathContext *) NULL_CHECK((frame[2].o)))->F_precision) != 0) goto label_1;
	}
	{
	LINE_NUMBER(2074);
	sp[0].o = (jobject)((func_java_math_BigDecimal_pow_int_R_java_math_BigDecimal) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_math_BigDecimal_pow_int_R_java_math_BigDecimal])(ctx, (frame[0].o), (frame[1].i));
	popStackFrame(ctx);
	return sp[0].o;
	}
label_1:;
	{
	LINE_NUMBER(2075);
	if ((frame[1].i) < (jint(-999999999))) goto label_3;
	}
	{
	if ((frame[1].i) <= (jint(999999999))) goto label_4;
	}
label_3:;
	{
	LINE_NUMBER(2076);
	clinit_java_lang_ArithmeticException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_ArithmeticException);
	init_java_lang_ArithmeticException_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"Invalid operation"_j))));
	throwException(ctx, sp[0].o);	}
label_4:;
	{
	LINE_NUMBER(2077);
	if ((frame[1].i) != 0) goto label_5;
	}
	{
	LINE_NUMBER(2078);
	clinit_java_math_BigDecimal(ctx);
	sp[0].o = (jobject)SF_java_math_BigDecimal_ONE;
	popStackFrame(ctx);
	return sp[0].o;
	}
label_5:;
	{
	LINE_NUMBER(2079);
	frame[3].o = (frame[0].o);
	LINE_NUMBER(2080);
	frame[4].o = (frame[2].o);
	LINE_NUMBER(2081);
	jint temp0 = (jint)SM_java_lang_Math_abs_int_R_int(ctx, (frame[1].i));
	frame[5].i = temp0;
	LINE_NUMBER(2082);
	if (((jint)((java_math_MathContext *) NULL_CHECK((frame[2].o)))->F_precision) <= 0) goto label_10;
	}
	{
	LINE_NUMBER(2083);
	jint temp0 = (jint)SM_java_math_BigDecimal_longDigitLength_long_R_int(ctx, (jlong((frame[5].i))));
	frame[6].i = temp0;
	LINE_NUMBER(2084);
	if ((frame[6].i) <= ((jint)((java_math_MathContext *) NULL_CHECK((frame[2].o)))->F_precision)) goto label_13;
	}
	{
	LINE_NUMBER(2085);
	clinit_java_lang_ArithmeticException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_ArithmeticException);
	init_java_lang_ArithmeticException_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"Invalid operation"_j))));
	throwException(ctx, sp[0].o);	}
label_13:;
	{
	LINE_NUMBER(2086);
	clinit_java_math_MathContext(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_math_MathContext);
	jint temp0 = (((jint)((java_math_MathContext *) NULL_CHECK((frame[2].o)))->F_precision) + (frame[6].i)) + (jint(1));
	sp[1].o = (jobject)((java_math_MathContext *) NULL_CHECK((frame[2].o)))->F_roundingMode;
	init_java_math_MathContext_int_java_math_RoundingMode(ctx, sp[0].o, temp0, sp[1].o);
	frame[4].o = sp[0].o;
	}
label_10:;
	{
	LINE_NUMBER(2090);
	clinit_java_math_BigDecimal(ctx);
	sp[0].o = (jobject)SF_java_math_BigDecimal_ONE;
	frame[6].o = sp[0].o;
	LINE_NUMBER(2091);
	frame[7].i = (jint(0));
	LINE_NUMBER(2092);
	frame[8].i = (jint(1));
	}
label_17:;
	{
	LINE_NUMBER(2093);
	frame[5].i = ((frame[5].i) + (frame[5].i));
	LINE_NUMBER(2094);
	if ((frame[5].i) >= 0) goto label_19;
	}
	{
	LINE_NUMBER(2095);
	frame[7].i = (jint(1));
	LINE_NUMBER(2096);
	sp[0].o = (jobject)((func_java_math_BigDecimal_multiply_java_math_BigDecimal_java_math_MathContext_R_java_math_BigDecimal) ((void **) nullCheck(ctx, (frame[6].o))->vtable)[VTABLE_java_math_BigDecimal_multiply_java_math_BigDecimal_java_math_MathContext_R_java_math_BigDecimal])(ctx, (frame[6].o), (frame[3].o), (frame[4].o));
	frame[6].o = sp[0].o;
	}
label_19:;
	{
	LINE_NUMBER(2098);
	if ((frame[8].i) != (31)) goto label_22;
	}
	LINE_NUMBER(2099);
	goto label_24;
label_22:;
	{
	LINE_NUMBER(2100);
	if ((frame[7].i) == 0) goto label_25;
	}
	{
	LINE_NUMBER(2101);
	sp[0].o = (jobject)((func_java_math_BigDecimal_multiply_java_math_BigDecimal_java_math_MathContext_R_java_math_BigDecimal) ((void **) nullCheck(ctx, (frame[6].o))->vtable)[VTABLE_java_math_BigDecimal_multiply_java_math_BigDecimal_java_math_MathContext_R_java_math_BigDecimal])(ctx, (frame[6].o), (frame[6].o), (frame[4].o));
	frame[6].o = sp[0].o;
	}
label_25:;
	{
	LINE_NUMBER(2092);
	INST_IINC(8, 1);
	goto label_17;
	}
label_24:;
	{
	LINE_NUMBER(2105);
	if ((frame[1].i) >= 0) goto label_27;
	}
	{
	LINE_NUMBER(2106);
	clinit_java_math_BigDecimal(ctx);
	sp[0].o = (jobject)SF_java_math_BigDecimal_ONE;
	sp[0].o = (jobject)((func_java_math_BigDecimal_divide_java_math_BigDecimal_java_math_MathContext_R_java_math_BigDecimal) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_math_BigDecimal_divide_java_math_BigDecimal_java_math_MathContext_R_java_math_BigDecimal])(ctx, sp[0].o, (frame[6].o), (frame[4].o));
	frame[6].o = sp[0].o;
	}
label_27:;
	{
	LINE_NUMBER(2108);
	sp[0].o = (jobject)SM_java_math_BigDecimal_doRound_java_math_BigDecimal_java_math_MathContext_R_java_math_BigDecimal(ctx, (frame[6].o), (frame[2].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_java_math_BigDecimal_abs_R_java_math_BigDecimal(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/math/BigDecimal:abs", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(2119);
	jint temp0 = (jint)((func_java_math_BigDecimal_signum_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_math_BigDecimal_signum_R_int])(ctx, (frame[0].o));
	if (temp0 >= 0) goto label_1;
	}
	{
	sp[0].o = (jobject)((func_java_math_BigDecimal_negate_R_java_math_BigDecimal) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_math_BigDecimal_negate_R_java_math_BigDecimal])(ctx, (frame[0].o));
	sp += 1;
	goto label_2;
	}
label_1:;
	INST_ALOAD(0);
label_2:;
	popStackFrame(ctx);
	INST_ARETURN();

	popStackFrame(ctx);
}

jobject M_java_math_BigDecimal_abs_java_math_MathContext_R_java_math_BigDecimal(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/math/BigDecimal:abs", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(2134);
	jint temp0 = (jint)((func_java_math_BigDecimal_signum_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_math_BigDecimal_signum_R_int])(ctx, (frame[0].o));
	if (temp0 >= 0) goto label_1;
	}
	{
	sp[0].o = (jobject)((func_java_math_BigDecimal_negate_java_math_MathContext_R_java_math_BigDecimal) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_math_BigDecimal_negate_java_math_MathContext_R_java_math_BigDecimal])(ctx, (frame[0].o), (frame[1].o));
	sp += 1;
	goto label_2;
	}
label_1:;
	{
	sp[0].o = (jobject)((func_java_math_BigDecimal_plus_java_math_MathContext_R_java_math_BigDecimal) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_math_BigDecimal_plus_java_math_MathContext_R_java_math_BigDecimal])(ctx, (frame[0].o), (frame[1].o));
	sp += 1;
	}
label_2:;
	popStackFrame(ctx);
	INST_ARETURN();

	popStackFrame(ctx);
}

jobject M_java_math_BigDecimal_negate_R_java_math_BigDecimal(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/math/BigDecimal:negate", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(2144);
	if ((longCompare(((jlong)((java_math_BigDecimal *) NULL_CHECK((frame[0].o)))->F_intCompact), (jlong(-9223372036854775807ll)))) != 0) goto label_1;
	}
	{
	LINE_NUMBER(2145);
	clinit_java_math_BigDecimal(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_math_BigDecimal);
	sp[1].o = (jobject)((java_math_BigDecimal *) NULL_CHECK((frame[0].o)))->F_intVal;
	sp[1].o = (jobject)((func_java_math_BigInteger_negate_R_java_math_BigInteger) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_math_BigInteger_negate_R_java_math_BigInteger])(ctx, sp[1].o);
	init_java_math_BigDecimal_java_math_BigInteger_long_int_int(ctx, sp[0].o, sp[1].o, (jlong(-9223372036854775807ll)), ((jint)((java_math_BigDecimal *) NULL_CHECK((frame[0].o)))->F_scale), ((jint)((java_math_BigDecimal *) NULL_CHECK((frame[0].o)))->F_precision));
	popStackFrame(ctx);
	return sp[0].o;
	}
label_1:;
	{
	LINE_NUMBER(2147);
	sp[0].o = (jobject)SM_java_math_BigDecimal_valueOf_long_int_int_R_java_math_BigDecimal(ctx, (-((jlong)((java_math_BigDecimal *) NULL_CHECK((frame[0].o)))->F_intCompact)), ((jint)((java_math_BigDecimal *) NULL_CHECK((frame[0].o)))->F_scale), ((jint)((java_math_BigDecimal *) NULL_CHECK((frame[0].o)))->F_precision));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_java_math_BigDecimal_negate_java_math_MathContext_R_java_math_BigDecimal(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/math/BigDecimal:negate", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(2162);
	sp[0].o = (jobject)((func_java_math_BigDecimal_negate_R_java_math_BigDecimal) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_math_BigDecimal_negate_R_java_math_BigDecimal])(ctx, (frame[0].o));
	sp[0].o = (jobject)((func_java_math_BigDecimal_plus_java_math_MathContext_R_java_math_BigDecimal) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_math_BigDecimal_plus_java_math_MathContext_R_java_math_BigDecimal])(ctx, sp[0].o, (frame[1].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_java_math_BigDecimal_plus_R_java_math_BigDecimal(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/math/BigDecimal:plus", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(2178);
	popStackFrame(ctx);
	return (frame[0].o);
	}

	popStackFrame(ctx);
}

jobject M_java_math_BigDecimal_plus_java_math_MathContext_R_java_math_BigDecimal(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/math/BigDecimal:plus", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(2197);
	if (((jint)((java_math_MathContext *) NULL_CHECK((frame[1].o)))->F_precision) != 0) goto label_1;
	}
	{
	LINE_NUMBER(2198);
	popStackFrame(ctx);
	return (frame[0].o);
	}
label_1:;
	{
	LINE_NUMBER(2199);
	sp[0].o = (jobject)SM_java_math_BigDecimal_doRound_java_math_BigDecimal_java_math_MathContext_R_java_math_BigDecimal(ctx, (frame[0].o), (frame[1].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jint M_java_math_BigDecimal_signum_R_int(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/math/BigDecimal:signum", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(2209);
	if ((longCompare(((jlong)((java_math_BigDecimal *) NULL_CHECK((frame[0].o)))->F_intCompact), (jlong(-9223372036854775807ll)))) == 0) goto label_1;
	}
	{
	LINE_NUMBER(2210);
	jint temp0 = (jint)SM_java_lang_Long_signum_long_R_int(ctx, ((jlong)((java_math_BigDecimal *) NULL_CHECK((frame[0].o)))->F_intCompact));
	sp[0].i = temp0;
	sp += 1;
	goto label_3;
	}
label_1:;
	{
	LINE_NUMBER(2211);
	sp[0].o = (jobject)((java_math_BigDecimal *) NULL_CHECK((frame[0].o)))->F_intVal;
	jint temp0 = (jint)((func_java_math_BigInteger_signum_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_math_BigInteger_signum_R_int])(ctx, sp[0].o);
	sp[0].i = temp0;
	sp += 1;
	}
label_3:;
	LINE_NUMBER(2209);
	popStackFrame(ctx);
	INST_IRETURN();

	popStackFrame(ctx);
}

jint M_java_math_BigDecimal_scale_R_int(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/math/BigDecimal:scale", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(2225);
	popStackFrame(ctx);
	return ((jint)((java_math_BigDecimal *) NULL_CHECK((frame[0].o)))->F_scale);
	}

	popStackFrame(ctx);
}

jint M_java_math_BigDecimal_precision_R_int(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/math/BigDecimal:precision", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(2238);
	frame[1].i = ((jint)((java_math_BigDecimal *) NULL_CHECK((frame[0].o)))->F_precision);
	LINE_NUMBER(2239);
	if ((frame[1].i) != 0) goto label_2;
	}
	{
	LINE_NUMBER(2240);
	frame[2].l = ((jlong)((java_math_BigDecimal *) NULL_CHECK((frame[0].o)))->F_intCompact);
	LINE_NUMBER(2241);
	if ((longCompare((frame[2].l), (jlong(-9223372036854775807ll)))) == 0) goto label_5;
	}
	{
	LINE_NUMBER(2242);
	jint temp0 = (jint)SM_java_math_BigDecimal_longDigitLength_long_R_int(ctx, (frame[2].l));
	frame[1].i = temp0;
	goto label_7;
	}
label_5:;
	{
	LINE_NUMBER(2244);
	sp[0].o = (jobject)((java_math_BigDecimal *) NULL_CHECK((frame[0].o)))->F_intVal;
	jint temp0 = (jint)SM_java_math_BigDecimal_bigDigitLength_java_math_BigInteger_R_int(ctx, sp[0].o);
	frame[1].i = temp0;
	}
label_7:;
	{
	LINE_NUMBER(2245);
	((java_math_BigDecimal *) NULL_CHECK((frame[0].o)))->F_precision = (frame[1].i);
	}
label_2:;
	{
	LINE_NUMBER(2247);
	popStackFrame(ctx);
	return (frame[1].i);
	}

	popStackFrame(ctx);
}

jobject M_java_math_BigDecimal_unscaledValue_R_java_math_BigInteger(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/math/BigDecimal:unscaledValue", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(2260);
	sp[0].o = (jobject)M_java_math_BigDecimal_inflated_R_java_math_BigInteger(ctx, (frame[0].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_java_math_BigDecimal_round_java_math_MathContext_R_java_math_BigDecimal(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/math/BigDecimal:round", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(2357);
	sp[0].o = (jobject)((func_java_math_BigDecimal_plus_java_math_MathContext_R_java_math_BigDecimal) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_math_BigDecimal_plus_java_math_MathContext_R_java_math_BigDecimal])(ctx, (frame[0].o), (frame[1].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_java_math_BigDecimal_setScale_int_java_math_RoundingMode_R_java_math_BigDecimal(jcontext ctx, jobject self, jint param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/math/BigDecimal:setScale", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(2390);
	sp[0].o = (jobject)((func_java_math_BigDecimal_setScale_int_int_R_java_math_BigDecimal) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_math_BigDecimal_setScale_int_int_R_java_math_BigDecimal])(ctx, (frame[0].o), (frame[1].i), ((jint)((java_math_RoundingMode *) NULL_CHECK((frame[2].o)))->F_oldMode));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_java_math_BigDecimal_setScale_int_int_R_java_math_BigDecimal(jcontext ctx, jobject self, jint param0, jint param1) {
	NULL_CHECK(self);
	jtype frame[16];
	auto stack = &frame[8];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/math/BigDecimal:setScale", 16 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(2434);
	if ((frame[2].i) < 0) goto label_1;
	}
	{
	if ((frame[2].i) <= (7)) goto label_2;
	}
label_1:;
	{
	LINE_NUMBER(2435);
	clinit_java_lang_IllegalArgumentException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IllegalArgumentException);
	init_java_lang_IllegalArgumentException_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"Invalid rounding mode"_j))));
	throwException(ctx, sp[0].o);	}
label_2:;
	{
	LINE_NUMBER(2437);
	frame[3].i = ((jint)((java_math_BigDecimal *) NULL_CHECK((frame[0].o)))->F_scale);
	LINE_NUMBER(2438);
	if ((frame[1].i) != (frame[3].i)) goto label_4;
	}
	{
	LINE_NUMBER(2439);
	popStackFrame(ctx);
	return (frame[0].o);
	}
label_4:;
	{
	LINE_NUMBER(2440);
	jint temp0 = (jint)((func_java_math_BigDecimal_signum_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_math_BigDecimal_signum_R_int])(ctx, (frame[0].o));
	if (temp0 != 0) goto label_6;
	}
	{
	LINE_NUMBER(2441);
	sp[0].o = (jobject)SM_java_math_BigDecimal_zeroValueOf_int_R_java_math_BigDecimal(ctx, (frame[1].i));
	popStackFrame(ctx);
	return sp[0].o;
	}
label_6:;
	{
	LINE_NUMBER(2442);
	if ((longCompare(((jlong)((java_math_BigDecimal *) NULL_CHECK((frame[0].o)))->F_intCompact), (jlong(-9223372036854775807ll)))) == 0) goto label_8;
	}
	{
	LINE_NUMBER(2443);
	frame[4].l = ((jlong)((java_math_BigDecimal *) NULL_CHECK((frame[0].o)))->F_intCompact);
	LINE_NUMBER(2444);
	if ((frame[1].i) <= (frame[3].i)) goto label_11;
	}
	{
	LINE_NUMBER(2445);
	jint temp0 = (jint)M_java_math_BigDecimal_checkScale_long_R_int(ctx, (frame[0].o), ((jlong((frame[1].i))) - (jlong((frame[3].i)))));
	frame[6].i = temp0;
	LINE_NUMBER(2446);
	jlong temp1 = (jlong)SM_java_math_BigDecimal_longMultiplyPowerTen_long_int_R_long(ctx, (frame[4].l), (frame[6].i));
	frame[4].l = temp1;
	if ((longCompare(temp1, (jlong(-9223372036854775807ll)))) == 0) goto label_14;
	}
	{
	LINE_NUMBER(2447);
	sp[0].o = (jobject)SM_java_math_BigDecimal_valueOf_long_int_R_java_math_BigDecimal(ctx, (frame[4].l), (frame[1].i));
	popStackFrame(ctx);
	return sp[0].o;
	}
label_14:;
	{
	LINE_NUMBER(2449);
	sp[0].o = (jobject)M_java_math_BigDecimal_bigMultiplyPowerTen_int_R_java_math_BigInteger(ctx, (frame[0].o), (frame[6].i));
	frame[7].o = sp[0].o;
	LINE_NUMBER(2450);
	clinit_java_math_BigDecimal(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_math_BigDecimal);
	sp[1].o = frame[7].o;
	jlong temp0 = jlong(-9223372036854775807ll);
	jint temp1 = frame[1].i;
	jobject temp2 = sp[1].o;
	sp[1].o = sp[0].o;
	sp[2].o = temp2;
	sp[3].l = temp0;
	sp[4].i = temp1;
	sp += 5;
	if (((jint)((java_math_BigDecimal *) NULL_CHECK((frame[0].o)))->F_precision) <= 0) goto label_17;
	}
	{
	jint temp0 = ((jint)((java_math_BigDecimal *) NULL_CHECK((frame[0].o)))->F_precision) + (frame[6].i);
	sp[0].i = temp0;
	sp += 1;
	goto label_18;
	}
label_17:;
	INST_ICONST(0);
label_18:;
	POP_N(5); // Pop method args
	init_java_math_BigDecimal_java_math_BigInteger_long_int_int(ctx, sp[0].o, sp[1].o, sp[2].l, sp[3].i, sp[4].i);
	popStackFrame(ctx);
	INST_ARETURN();
label_11:;
	{
	LINE_NUMBER(2454);
	jint temp0 = (jint)M_java_math_BigDecimal_checkScale_long_R_int(ctx, (frame[0].o), ((jlong((frame[3].i))) - (jlong((frame[1].i)))));
	frame[6].i = temp0;
	LINE_NUMBER(2455);
	jint temp1 = frame[6].i;
	clinit_java_math_BigDecimal(ctx);
	sp[0].o = (jobject)SF_java_math_BigDecimal_LONG_TEN_POWERS_TABLE;
	if (temp1 >= (((jarray) nullCheck(ctx, sp[0].o))->length)) goto label_20;
	}
	{
	LINE_NUMBER(2456);
	jlong temp0 = frame[4].l;
	clinit_java_math_BigDecimal(ctx);
	sp[0].o = (jobject)SF_java_math_BigDecimal_LONG_TEN_POWERS_TABLE;
	sp[0].o = (jobject)SM_java_math_BigDecimal_divideAndRound_long_long_int_int_int_R_java_math_BigDecimal(ctx, temp0, ((jlong)ARRAY_ACCESS(jlong, sp[0].o, (frame[6].i))), (frame[1].i), (frame[2].i), (frame[1].i));
	popStackFrame(ctx);
	return sp[0].o;
	}
label_20:;
	{
	LINE_NUMBER(2458);
	sp[0].o = (jobject)M_java_math_BigDecimal_inflated_R_java_math_BigInteger(ctx, (frame[0].o));
	sp[1].o = (jobject)SM_java_math_BigDecimal_bigTenToThe_int_R_java_math_BigInteger(ctx, (frame[6].i));
	sp[0].o = (jobject)SM_java_math_BigDecimal_divideAndRound_java_math_BigInteger_java_math_BigInteger_int_int_int_R_java_math_BigDecimal(ctx, sp[0].o, sp[1].o, (frame[1].i), (frame[2].i), (frame[1].i));
	popStackFrame(ctx);
	return sp[0].o;
	}
label_8:;
	{
	LINE_NUMBER(2462);
	if ((frame[1].i) <= (frame[3].i)) goto label_22;
	}
	{
	LINE_NUMBER(2463);
	jint temp0 = (jint)M_java_math_BigDecimal_checkScale_long_R_int(ctx, (frame[0].o), ((jlong((frame[1].i))) - (jlong((frame[3].i)))));
	frame[4].i = temp0;
	LINE_NUMBER(2464);
	sp[0].o = (jobject)((java_math_BigDecimal *) NULL_CHECK((frame[0].o)))->F_intVal;
	sp[0].o = (jobject)SM_java_math_BigDecimal_bigMultiplyPowerTen_java_math_BigInteger_int_R_java_math_BigInteger(ctx, sp[0].o, (frame[4].i));
	frame[5].o = sp[0].o;
	LINE_NUMBER(2465);
	clinit_java_math_BigDecimal(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_math_BigDecimal);
	sp[1].o = frame[5].o;
	jlong temp1 = jlong(-9223372036854775807ll);
	jint temp2 = frame[1].i;
	jobject temp3 = sp[1].o;
	sp[1].o = sp[0].o;
	sp[2].o = temp3;
	sp[3].l = temp1;
	sp[4].i = temp2;
	sp += 5;
	if (((jint)((java_math_BigDecimal *) NULL_CHECK((frame[0].o)))->F_precision) <= 0) goto label_26;
	}
	{
	jint temp0 = ((jint)((java_math_BigDecimal *) NULL_CHECK((frame[0].o)))->F_precision) + (frame[4].i);
	sp[0].i = temp0;
	sp += 1;
	goto label_27;
	}
label_26:;
	INST_ICONST(0);
label_27:;
	POP_N(5); // Pop method args
	init_java_math_BigDecimal_java_math_BigInteger_long_int_int(ctx, sp[0].o, sp[1].o, sp[2].l, sp[3].i, sp[4].i);
	popStackFrame(ctx);
	INST_ARETURN();
label_22:;
	{
	LINE_NUMBER(2469);
	jint temp0 = (jint)M_java_math_BigDecimal_checkScale_long_R_int(ctx, (frame[0].o), ((jlong((frame[3].i))) - (jlong((frame[1].i)))));
	frame[4].i = temp0;
	LINE_NUMBER(2470);
	jint temp1 = frame[4].i;
	clinit_java_math_BigDecimal(ctx);
	sp[0].o = (jobject)SF_java_math_BigDecimal_LONG_TEN_POWERS_TABLE;
	if (temp1 >= (((jarray) nullCheck(ctx, sp[0].o))->length)) goto label_29;
	}
	{
	LINE_NUMBER(2471);
	sp[0].o = (jobject)((java_math_BigDecimal *) NULL_CHECK((frame[0].o)))->F_intVal;
	clinit_java_math_BigDecimal(ctx);
	sp[1].o = (jobject)SF_java_math_BigDecimal_LONG_TEN_POWERS_TABLE;
	sp[0].o = (jobject)SM_java_math_BigDecimal_divideAndRound_java_math_BigInteger_long_int_int_int_R_java_math_BigDecimal(ctx, sp[0].o, ((jlong)ARRAY_ACCESS(jlong, sp[1].o, (frame[4].i))), (frame[1].i), (frame[2].i), (frame[1].i));
	popStackFrame(ctx);
	return sp[0].o;
	}
label_29:;
	{
	LINE_NUMBER(2474);
	sp[0].o = (jobject)((java_math_BigDecimal *) NULL_CHECK((frame[0].o)))->F_intVal;
	sp[1].o = (jobject)SM_java_math_BigDecimal_bigTenToThe_int_R_java_math_BigInteger(ctx, (frame[4].i));
	sp[0].o = (jobject)SM_java_math_BigDecimal_divideAndRound_java_math_BigInteger_java_math_BigInteger_int_int_int_R_java_math_BigDecimal(ctx, sp[0].o, sp[1].o, (frame[1].i), (frame[2].i), (frame[1].i));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_java_math_BigDecimal_setScale_int_R_java_math_BigDecimal(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/math/BigDecimal:setScale", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(2516);
	sp[0].o = (jobject)((func_java_math_BigDecimal_setScale_int_int_R_java_math_BigDecimal) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_math_BigDecimal_setScale_int_int_R_java_math_BigDecimal])(ctx, (frame[0].o), (frame[1].i), (7));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_java_math_BigDecimal_movePointLeft_int_R_java_math_BigDecimal(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[11];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/math/BigDecimal:movePointLeft", 11 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(2538);
	jint temp0 = (jint)M_java_math_BigDecimal_checkScale_long_R_int(ctx, (frame[0].o), ((jlong(((jint)((java_math_BigDecimal *) NULL_CHECK((frame[0].o)))->F_scale))) + (jlong((frame[1].i)))));
	frame[2].i = temp0;
	LINE_NUMBER(2539);
	clinit_java_math_BigDecimal(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_math_BigDecimal);
	sp[1].o = (jobject)((java_math_BigDecimal *) NULL_CHECK((frame[0].o)))->F_intVal;
	init_java_math_BigDecimal_java_math_BigInteger_long_int_int(ctx, sp[0].o, sp[1].o, ((jlong)((java_math_BigDecimal *) NULL_CHECK((frame[0].o)))->F_intCompact), (frame[2].i), (jint(0)));
	frame[3].o = sp[0].o;
	LINE_NUMBER(2540);
	if (((jint)((java_math_BigDecimal *) NULL_CHECK((frame[3].o)))->F_scale) >= 0) goto label_3;
	}
	{
	sp[0].o = (jobject)((func_java_math_BigDecimal_setScale_int_int_R_java_math_BigDecimal) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_java_math_BigDecimal_setScale_int_int_R_java_math_BigDecimal])(ctx, (frame[3].o), (jint(0)), (7));
	sp += 1;
	goto label_4;
	}
label_3:;
	INST_ALOAD(3);
label_4:;
	popStackFrame(ctx);
	INST_ARETURN();

	popStackFrame(ctx);
}

jobject M_java_math_BigDecimal_movePointRight_int_R_java_math_BigDecimal(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[11];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/math/BigDecimal:movePointRight", 11 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(2560);
	jint temp0 = (jint)M_java_math_BigDecimal_checkScale_long_R_int(ctx, (frame[0].o), ((jlong(((jint)((java_math_BigDecimal *) NULL_CHECK((frame[0].o)))->F_scale))) - (jlong((frame[1].i)))));
	frame[2].i = temp0;
	LINE_NUMBER(2561);
	clinit_java_math_BigDecimal(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_math_BigDecimal);
	sp[1].o = (jobject)((java_math_BigDecimal *) NULL_CHECK((frame[0].o)))->F_intVal;
	init_java_math_BigDecimal_java_math_BigInteger_long_int_int(ctx, sp[0].o, sp[1].o, ((jlong)((java_math_BigDecimal *) NULL_CHECK((frame[0].o)))->F_intCompact), (frame[2].i), (jint(0)));
	frame[3].o = sp[0].o;
	LINE_NUMBER(2562);
	if (((jint)((java_math_BigDecimal *) NULL_CHECK((frame[3].o)))->F_scale) >= 0) goto label_3;
	}
	{
	sp[0].o = (jobject)((func_java_math_BigDecimal_setScale_int_int_R_java_math_BigDecimal) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_java_math_BigDecimal_setScale_int_int_R_java_math_BigDecimal])(ctx, (frame[3].o), (jint(0)), (7));
	sp += 1;
	goto label_4;
	}
label_3:;
	INST_ALOAD(3);
label_4:;
	popStackFrame(ctx);
	INST_ARETURN();

	popStackFrame(ctx);
}

jobject M_java_math_BigDecimal_scaleByPowerOfTen_int_R_java_math_BigDecimal(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[12];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/math/BigDecimal:scaleByPowerOfTen", 12 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(2579);
	clinit_java_math_BigDecimal(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_math_BigDecimal);
	sp[1].o = (jobject)((java_math_BigDecimal *) NULL_CHECK((frame[0].o)))->F_intVal;
	jlong temp0 = (jlong)((java_math_BigDecimal *) NULL_CHECK((frame[0].o)))->F_intCompact;
	sp[2].o = frame[0].o;
	jlong temp1 = (jlong(((jint)((java_math_BigDecimal *) NULL_CHECK((frame[0].o)))->F_scale))) - (jlong((frame[1].i)));
	LINE_NUMBER(2580);
	jint temp2 = (jint)M_java_math_BigDecimal_checkScale_long_R_int(ctx, sp[2].o, temp1);
	init_java_math_BigDecimal_java_math_BigInteger_long_int_int(ctx, sp[0].o, sp[1].o, temp0, temp2, ((jint)((java_math_BigDecimal *) NULL_CHECK((frame[0].o)))->F_precision));
	LINE_NUMBER(2579);
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_java_math_BigDecimal_stripTrailingZeros_R_java_math_BigDecimal(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/math/BigDecimal:stripTrailingZeros", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(2599);
	if ((longCompare(((jlong)((java_math_BigDecimal *) NULL_CHECK((frame[0].o)))->F_intCompact), (jlong(0)))) == 0) goto label_1;
	}
	{
	sp[0].o = (jobject)((java_math_BigDecimal *) NULL_CHECK((frame[0].o)))->F_intVal;
	if (sp[0].o == nullptr) goto label_2;
	}
	{
	sp[0].o = (jobject)((java_math_BigDecimal *) NULL_CHECK((frame[0].o)))->F_intVal;
	jint temp0 = (jint)((func_java_math_BigInteger_signum_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_math_BigInteger_signum_R_int])(ctx, sp[0].o);
	if (temp0 != 0) goto label_2;
	}
label_1:;
	{
	LINE_NUMBER(2600);
	clinit_java_math_BigDecimal(ctx);
	sp[0].o = (jobject)SF_java_math_BigDecimal_ZERO;
	popStackFrame(ctx);
	return sp[0].o;
	}
label_2:;
	{
	LINE_NUMBER(2601);
	if ((longCompare(((jlong)((java_math_BigDecimal *) NULL_CHECK((frame[0].o)))->F_intCompact), (jlong(-9223372036854775807ll)))) == 0) goto label_3;
	}
	{
	LINE_NUMBER(2602);
	sp[0].o = (jobject)SM_java_math_BigDecimal_createAndStripZerosToMatchScale_long_int_long_R_java_math_BigDecimal(ctx, ((jlong)((java_math_BigDecimal *) NULL_CHECK((frame[0].o)))->F_intCompact), ((jint)((java_math_BigDecimal *) NULL_CHECK((frame[0].o)))->F_scale), (jlong(-9223372036854775807ll)));
	popStackFrame(ctx);
	return sp[0].o;
	}
label_3:;
	{
	LINE_NUMBER(2604);
	sp[0].o = (jobject)((java_math_BigDecimal *) NULL_CHECK((frame[0].o)))->F_intVal;
	sp[0].o = (jobject)SM_java_math_BigDecimal_createAndStripZerosToMatchScale_java_math_BigInteger_int_long_R_java_math_BigDecimal(ctx, sp[0].o, ((jint)((java_math_BigDecimal *) NULL_CHECK((frame[0].o)))->F_scale), (jlong(-9223372036854775807ll)));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jint M_java_math_BigDecimal_compareTo_java_math_BigDecimal_R_int(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[10];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/math/BigDecimal:compareTo", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(2629);
	if (((jint)((java_math_BigDecimal *) NULL_CHECK((frame[0].o)))->F_scale) != ((jint)((java_math_BigDecimal *) NULL_CHECK((frame[1].o)))->F_scale)) goto label_1;
	}
	{
	LINE_NUMBER(2630);
	frame[2].l = ((jlong)((java_math_BigDecimal *) NULL_CHECK((frame[0].o)))->F_intCompact);
	LINE_NUMBER(2631);
	frame[4].l = ((jlong)((java_math_BigDecimal *) NULL_CHECK((frame[1].o)))->F_intCompact);
	LINE_NUMBER(2632);
	if ((longCompare((frame[2].l), (jlong(-9223372036854775807ll)))) == 0) goto label_1;
	}
	{
	if ((longCompare((frame[4].l), (jlong(-9223372036854775807ll)))) == 0) goto label_1;
	}
	{
	LINE_NUMBER(2633);
	if ((longCompare((frame[2].l), (frame[4].l))) == 0) goto label_6;
	}
	{
	if ((longCompare((frame[2].l), (frame[4].l))) <= 0) goto label_7;
	}
	INST_ICONST(1);
	goto label_8;
label_7:;
	INST_ICONST(-1);
	goto label_8;
label_6:;
	INST_ICONST(0);
label_8:;
	popStackFrame(ctx);
	INST_IRETURN();
label_1:;
	{
	LINE_NUMBER(2635);
	jint temp0 = (jint)((func_java_math_BigDecimal_signum_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_math_BigDecimal_signum_R_int])(ctx, (frame[0].o));
	frame[2].i = temp0;
	LINE_NUMBER(2636);
	jint temp1 = (jint)((func_java_math_BigDecimal_signum_R_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_math_BigDecimal_signum_R_int])(ctx, (frame[1].o));
	frame[3].i = temp1;
	LINE_NUMBER(2637);
	if ((frame[2].i) == (frame[3].i)) goto label_11;
	}
	{
	LINE_NUMBER(2638);
	if ((frame[2].i) <= (frame[3].i)) goto label_13;
	}
	INST_ICONST(1);
	goto label_14;
label_13:;
	INST_ICONST(-1);
label_14:;
	popStackFrame(ctx);
	INST_IRETURN();
label_11:;
	{
	LINE_NUMBER(2639);
	if ((frame[2].i) != 0) goto label_15;
	}
	{
	LINE_NUMBER(2640);
	popStackFrame(ctx);
	return (jint(0));
	}
label_15:;
	{
	LINE_NUMBER(2641);
	jint temp0 = (jint)M_java_math_BigDecimal_compareMagnitude_java_math_BigDecimal_R_int(ctx, (frame[0].o), (frame[1].o));
	frame[4].i = temp0;
	LINE_NUMBER(2642);
	if ((frame[2].i) <= 0) goto label_18;
	}
	INST_ILOAD(4);
	goto label_19;
label_18:;
	INST_ILOAD(4);
	INST_INEG();
label_19:;
	popStackFrame(ctx);
	INST_IRETURN();

	popStackFrame(ctx);
}

jint M_java_math_BigDecimal_compareMagnitude_java_math_BigDecimal_R_int(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[17];
	auto stack = &frame[13];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/math/BigDecimal:compareMagnitude", 17 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(2650);
	frame[2].l = ((jlong)((java_math_BigDecimal *) NULL_CHECK((frame[1].o)))->F_intCompact);
	LINE_NUMBER(2651);
	frame[4].l = ((jlong)((java_math_BigDecimal *) NULL_CHECK((frame[0].o)))->F_intCompact);
	LINE_NUMBER(2652);
	if ((longCompare((frame[4].l), (jlong(0)))) != 0) goto label_3;
	}
	{
	LINE_NUMBER(2653);
	if ((longCompare((frame[2].l), (jlong(0)))) != 0) goto label_5;
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
	LINE_NUMBER(2654);
	if ((longCompare((frame[2].l), (jlong(0)))) != 0) goto label_7;
	}
	{
	LINE_NUMBER(2655);
	popStackFrame(ctx);
	return (jint(1));
	}
label_7:;
	{
	LINE_NUMBER(2657);
	frame[6].l = ((jlong(((jint)((java_math_BigDecimal *) NULL_CHECK((frame[0].o)))->F_scale))) - (jlong(((jint)((java_math_BigDecimal *) NULL_CHECK((frame[1].o)))->F_scale))));
	LINE_NUMBER(2658);
	if ((longCompare((frame[6].l), (jlong(0)))) == 0) goto label_10;
	}
	{
	LINE_NUMBER(2660);
	jint temp0 = (jint)((func_java_math_BigDecimal_precision_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_math_BigDecimal_precision_R_int])(ctx, (frame[0].o));
	frame[8].l = ((jlong(temp0)) - (jlong(((jint)((java_math_BigDecimal *) NULL_CHECK((frame[0].o)))->F_scale))));
	LINE_NUMBER(2661);
	jint temp1 = (jint)((func_java_math_BigDecimal_precision_R_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_math_BigDecimal_precision_R_int])(ctx, (frame[1].o));
	frame[10].l = ((jlong(temp1)) - (jlong(((jint)((java_math_BigDecimal *) NULL_CHECK((frame[1].o)))->F_scale))));
	LINE_NUMBER(2662);
	if ((longCompare((frame[8].l), (frame[10].l))) >= 0) goto label_14;
	}
	{
	LINE_NUMBER(2663);
	popStackFrame(ctx);
	return (jint(-1));
	}
label_14:;
	{
	LINE_NUMBER(2664);
	if ((longCompare((frame[8].l), (frame[10].l))) <= 0) goto label_16;
	}
	{
	LINE_NUMBER(2665);
	popStackFrame(ctx);
	return (jint(1));
	}
label_16:;
	{
	LINE_NUMBER(2666);
	frame[12].o = (jobject(nullptr));
	LINE_NUMBER(2667);
	if ((longCompare((frame[6].l), (jlong(0)))) >= 0) goto label_19;
	}
	{
	LINE_NUMBER(2669);
	if ((longCompare((frame[6].l), (jlong(-2147483648ll)))) <= 0) goto label_10;
	}
	{
	if ((longCompare((frame[4].l), (jlong(-9223372036854775807ll)))) == 0) goto label_21;
	}
	{
	jlong temp0 = frame[4].l;
	jint temp1 = jint((-(frame[6].l)));
	LINE_NUMBER(2671);
	jlong temp2 = (jlong)SM_java_math_BigDecimal_longMultiplyPowerTen_long_int_R_long(ctx, temp0, temp1);
	frame[4].l = temp2;
	if ((longCompare(temp2, (jlong(-9223372036854775807ll)))) != 0) goto label_10;
	}
label_21:;
	{
	if ((longCompare((frame[2].l), (jlong(-9223372036854775807ll)))) != 0) goto label_10;
	}
	{
	LINE_NUMBER(2673);
	sp[0].o = (jobject)M_java_math_BigDecimal_bigMultiplyPowerTen_int_R_java_math_BigInteger(ctx, (frame[0].o), (jint((-(frame[6].l)))));
	frame[12].o = sp[0].o;
	LINE_NUMBER(2674);
	sp[0].o = frame[12].o;
	sp[1].o = (jobject)((java_math_BigDecimal *) NULL_CHECK((frame[1].o)))->F_intVal;
	jint temp0 = (jint)((func_java_math_BigInteger_compareMagnitude_java_math_BigInteger_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_math_BigInteger_compareMagnitude_java_math_BigInteger_R_int])(ctx, sp[0].o, sp[1].o);
	popStackFrame(ctx);
	return temp0;
	}
label_19:;
	{
	LINE_NUMBER(2678);
	if ((longCompare((frame[6].l), (jlong(2147483647ll)))) > 0) goto label_10;
	}
	{
	if ((longCompare((frame[2].l), (jlong(-9223372036854775807ll)))) == 0) goto label_25;
	}
	{
	jlong temp0 = frame[2].l;
	jint temp1 = jint((frame[6].l));
	LINE_NUMBER(2680);
	jlong temp2 = (jlong)SM_java_math_BigDecimal_longMultiplyPowerTen_long_int_R_long(ctx, temp0, temp1);
	frame[2].l = temp2;
	if ((longCompare(temp2, (jlong(-9223372036854775807ll)))) != 0) goto label_10;
	}
label_25:;
	{
	if ((longCompare((frame[4].l), (jlong(-9223372036854775807ll)))) != 0) goto label_10;
	}
	{
	LINE_NUMBER(2682);
	sp[0].o = (jobject)M_java_math_BigDecimal_bigMultiplyPowerTen_int_R_java_math_BigInteger(ctx, (frame[1].o), (jint((frame[6].l))));
	frame[12].o = sp[0].o;
	LINE_NUMBER(2683);
	sp[0].o = (jobject)((java_math_BigDecimal *) NULL_CHECK((frame[0].o)))->F_intVal;
	jint temp0 = (jint)((func_java_math_BigInteger_compareMagnitude_java_math_BigInteger_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_math_BigInteger_compareMagnitude_java_math_BigInteger_R_int])(ctx, sp[0].o, (frame[12].o));
	popStackFrame(ctx);
	return temp0;
	}
label_10:;
	{
	LINE_NUMBER(2687);
	if ((longCompare((frame[4].l), (jlong(-9223372036854775807ll)))) == 0) goto label_29;
	}
	{
	LINE_NUMBER(2688);
	if ((longCompare((frame[2].l), (jlong(-9223372036854775807ll)))) == 0) goto label_31;
	}
	{
	jint temp0 = (jint)SM_java_math_BigDecimal_longCompareMagnitude_long_long_R_int(ctx, (frame[4].l), (frame[2].l));
	sp[0].i = temp0;
	sp += 1;
	goto label_32;
	}
label_31:;
	INST_ICONST(-1);
label_32:;
	popStackFrame(ctx);
	INST_IRETURN();
label_29:;
	{
	LINE_NUMBER(2689);
	if ((longCompare((frame[2].l), (jlong(-9223372036854775807ll)))) == 0) goto label_33;
	}
	{
	LINE_NUMBER(2690);
	popStackFrame(ctx);
	return (jint(1));
	}
label_33:;
	{
	LINE_NUMBER(2692);
	sp[0].o = (jobject)((java_math_BigDecimal *) NULL_CHECK((frame[0].o)))->F_intVal;
	sp[1].o = (jobject)((java_math_BigDecimal *) NULL_CHECK((frame[1].o)))->F_intVal;
	jint temp0 = (jint)((func_java_math_BigInteger_compareMagnitude_java_math_BigInteger_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_math_BigInteger_compareMagnitude_java_math_BigInteger_R_int])(ctx, sp[0].o, sp[1].o);
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jbool M_java_math_BigDecimal_equals_java_lang_Object_R_boolean(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[11];
	auto stack = &frame[7];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/math/BigDecimal:equals", 11 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(2713);
	if ((isInstance(ctx, (frame[1].o), &class_java_math_BigDecimal)) != 0) goto label_1;
	}
	{
	LINE_NUMBER(2714);
	popStackFrame(ctx);
	return (jint(0));
	}
label_1:;
	{
	LINE_NUMBER(2715);
	frame[2].o = (checkCast(ctx, &class_java_math_BigDecimal, (frame[1].o)));
	LINE_NUMBER(2716);
	if ((frame[1].o) != (frame[0].o)) goto label_4;
	}
	{
	LINE_NUMBER(2717);
	popStackFrame(ctx);
	return (jint(1));
	}
label_4:;
	{
	LINE_NUMBER(2718);
	if (((jint)((java_math_BigDecimal *) NULL_CHECK((frame[0].o)))->F_scale) == ((jint)((java_math_BigDecimal *) NULL_CHECK((frame[2].o)))->F_scale)) goto label_6;
	}
	{
	LINE_NUMBER(2719);
	popStackFrame(ctx);
	return (jint(0));
	}
label_6:;
	{
	LINE_NUMBER(2720);
	frame[3].l = ((jlong)((java_math_BigDecimal *) NULL_CHECK((frame[0].o)))->F_intCompact);
	LINE_NUMBER(2721);
	frame[5].l = ((jlong)((java_math_BigDecimal *) NULL_CHECK((frame[2].o)))->F_intCompact);
	LINE_NUMBER(2722);
	if ((longCompare((frame[3].l), (jlong(-9223372036854775807ll)))) == 0) goto label_10;
	}
	{
	LINE_NUMBER(2723);
	if ((longCompare((frame[5].l), (jlong(-9223372036854775807ll)))) != 0) goto label_12;
	}
	{
	LINE_NUMBER(2724);
	sp[0].o = (jobject)((java_math_BigDecimal *) NULL_CHECK((frame[2].o)))->F_intVal;
	jlong temp0 = (jlong)SM_java_math_BigDecimal_compactValFor_java_math_BigInteger_R_long(ctx, sp[0].o);
	frame[5].l = temp0;
	}
label_12:;
	{
	LINE_NUMBER(2725);
	if ((longCompare((frame[5].l), (frame[3].l))) != 0) goto label_14;
	}
	INST_ICONST(1);
	goto label_15;
label_14:;
	INST_ICONST(0);
label_15:;
	popStackFrame(ctx);
	INST_IRETURN();
label_10:;
	{
	LINE_NUMBER(2726);
	if ((longCompare((frame[5].l), (jlong(-9223372036854775807ll)))) == 0) goto label_16;
	}
	{
	LINE_NUMBER(2727);
	jlong temp0 = frame[5].l;
	sp[0].o = (jobject)((java_math_BigDecimal *) NULL_CHECK((frame[0].o)))->F_intVal;
	jlong temp1 = (jlong)SM_java_math_BigDecimal_compactValFor_java_math_BigInteger_R_long(ctx, sp[0].o);
	if ((longCompare(temp0, temp1)) != 0) goto label_18;
	}
	INST_ICONST(1);
	goto label_19;
label_18:;
	INST_ICONST(0);
label_19:;
	popStackFrame(ctx);
	INST_IRETURN();
label_16:;
	{
	LINE_NUMBER(2729);
	sp[0].o = (jobject)M_java_math_BigDecimal_inflated_R_java_math_BigInteger(ctx, (frame[0].o));
	sp[1].o = (jobject)M_java_math_BigDecimal_inflated_R_java_math_BigInteger(ctx, (frame[2].o));
	jint temp0 = (jint)((func_java_math_BigInteger_equals_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_math_BigInteger_equals_java_lang_Object_R_boolean])(ctx, sp[0].o, sp[1].o);
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jobject M_java_math_BigDecimal_min_java_math_BigDecimal_R_java_math_BigDecimal(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/math/BigDecimal:min", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(2744);
	jint temp0 = (jint)((func_java_math_BigDecimal_compareTo_java_math_BigDecimal_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_math_BigDecimal_compareTo_java_math_BigDecimal_R_int])(ctx, (frame[0].o), (frame[1].o));
	if (temp0 > 0) goto label_1;
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

jobject M_java_math_BigDecimal_max_java_math_BigDecimal_R_java_math_BigDecimal(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/math/BigDecimal:max", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(2758);
	jint temp0 = (jint)((func_java_math_BigDecimal_compareTo_java_math_BigDecimal_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_math_BigDecimal_compareTo_java_math_BigDecimal_R_int])(ctx, (frame[0].o), (frame[1].o));
	if (temp0 < 0) goto label_1;
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

jint M_java_math_BigDecimal_hashCode_R_int(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[10];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/math/BigDecimal:hashCode", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(2774);
	if ((longCompare(((jlong)((java_math_BigDecimal *) NULL_CHECK((frame[0].o)))->F_intCompact), (jlong(-9223372036854775807ll)))) == 0) goto label_1;
	}
	{
	LINE_NUMBER(2775);
	if ((longCompare(((jlong)((java_math_BigDecimal *) NULL_CHECK((frame[0].o)))->F_intCompact), (jlong(0)))) >= 0) goto label_3;
	}
	{
	jlong temp0 = -((jlong)((java_math_BigDecimal *) NULL_CHECK((frame[0].o)))->F_intCompact);
	sp[0].l = temp0;
	sp += 1;
	goto label_4;
	}
label_3:;
	INST_ALOAD(0);
	sp[-1].l = ((java_math_BigDecimal *) NULL_CHECK(sp[-1].o))->F_intCompact;
label_4:;
	{
	sp -= 1;
	frame[1].l = sp[0].l;
	LINE_NUMBER(2776);
	frame[3].i = (jint(((jlong(((jint((bit_cast<jlong>(bit_cast<uint64_t>((frame[1].l)) >> (32))))) * (31)))) + ((frame[1].l) & (jlong(4294967295ll))))));
	LINE_NUMBER(2778);
	jint temp0 = 31;
	sp[0].i = temp0;
	sp += 1;
	if ((longCompare(((jlong)((java_math_BigDecimal *) NULL_CHECK((frame[0].o)))->F_intCompact), (jlong(0)))) >= 0) goto label_7;
	}
	{
	jint temp0 = -(frame[3].i);
	sp[0].i = temp0;
	sp += 1;
	goto label_8;
	}
label_7:;
	INST_ILOAD(3);
label_8:;
	{
	sp -= 2;
	popStackFrame(ctx);
	return ((sp[0].i * sp[1].i) + ((jint)((java_math_BigDecimal *) NULL_CHECK((frame[0].o)))->F_scale));
	}
label_1:;
	{
	LINE_NUMBER(2780);
	jint temp0 = 31;
	sp[0].o = (jobject)((java_math_BigDecimal *) NULL_CHECK((frame[0].o)))->F_intVal;
	jint temp1 = (jint)((func_java_math_BigInteger_hashCode_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_math_BigInteger_hashCode_R_int])(ctx, sp[0].o);
	popStackFrame(ctx);
	return ((temp0 * temp1) + ((jint)((java_math_BigDecimal *) NULL_CHECK((frame[0].o)))->F_scale));
	}

	popStackFrame(ctx);
}

jobject M_java_math_BigDecimal_toString_R_java_lang_String(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/math/BigDecimal:toString", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(2886);
	sp[0].o = (jobject)((java_math_BigDecimal *) NULL_CHECK((frame[0].o)))->F_stringCache;
	frame[1].o = sp[0].o;
	LINE_NUMBER(2887);
	if ((frame[1].o) != nullptr) goto label_2;
	}
	{
	LINE_NUMBER(2888);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)M_java_math_BigDecimal_layoutChars_boolean_R_java_lang_String(ctx, (frame[0].o), (jint(1)));
	frame[1].o = sp[1].o;
	((java_math_BigDecimal *) NULL_CHECK(sp[0].o))->F_stringCache = (jref) sp[1].o;
	}
label_2:;
	{
	LINE_NUMBER(2889);
	popStackFrame(ctx);
	return (frame[1].o);
	}

	popStackFrame(ctx);
}

jobject M_java_math_BigDecimal_toEngineeringString_R_java_lang_String(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/math/BigDecimal:toEngineeringString", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(2917);
	sp[0].o = (jobject)M_java_math_BigDecimal_layoutChars_boolean_R_java_lang_String(ctx, (frame[0].o), (jint(0)));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_java_math_BigDecimal_toPlainString_R_java_lang_String(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/math/BigDecimal:toPlainString", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(2954);
	if (((jint)((java_math_BigDecimal *) NULL_CHECK((frame[0].o)))->F_scale) != 0) goto label_1;
	}
	{
	LINE_NUMBER(2955);
	if ((longCompare(((jlong)((java_math_BigDecimal *) NULL_CHECK((frame[0].o)))->F_intCompact), (jlong(-9223372036854775807ll)))) == 0) goto label_3;
	}
	{
	LINE_NUMBER(2956);
	sp[0].o = (jobject)SM_java_lang_Long_toString_long_R_java_lang_String(ctx, ((jlong)((java_math_BigDecimal *) NULL_CHECK((frame[0].o)))->F_intCompact));
	popStackFrame(ctx);
	return sp[0].o;
	}
label_3:;
	{
	LINE_NUMBER(2958);
	sp[0].o = (jobject)((java_math_BigDecimal *) NULL_CHECK((frame[0].o)))->F_intVal;
	sp[0].o = (jobject)((func_java_math_BigInteger_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_math_BigInteger_toString_R_java_lang_String])(ctx, sp[0].o);
	popStackFrame(ctx);
	return sp[0].o;
	}
label_1:;
	{
	LINE_NUMBER(2961);
	if (((jint)((java_math_BigDecimal *) NULL_CHECK((frame[0].o)))->F_scale) >= 0) goto label_5;
	}
	{
	LINE_NUMBER(2962);
	jint temp0 = (jint)((func_java_math_BigDecimal_signum_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_math_BigDecimal_signum_R_int])(ctx, (frame[0].o));
	if (temp0 != 0) goto label_7;
	}
	{
	LINE_NUMBER(2963);
	popStackFrame(ctx);
	return (((jobject) createStringLiteral(ctx, u8"0"_j)));
	}
label_7:;
	{
	LINE_NUMBER(2965);
	jint temp0 = (jint)SM_java_math_BigDecimal_checkScaleNonZero_long_R_int(ctx, (-(jlong(((jint)((java_math_BigDecimal *) NULL_CHECK((frame[0].o)))->F_scale)))));
	frame[1].i = temp0;
	LINE_NUMBER(2967);
	if ((longCompare(((jlong)((java_math_BigDecimal *) NULL_CHECK((frame[0].o)))->F_intCompact), (jlong(-9223372036854775807ll)))) == 0) goto label_10;
	}
	{
	LINE_NUMBER(2968);
	clinit_java_lang_StringBuilder(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder_int(ctx, sp[0].o, ((20) + (frame[1].i)));
	frame[2].o = sp[0].o;
	LINE_NUMBER(2969);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_long_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_java_lang_StringBuilder_append_long_R_java_lang_StringBuilder])(ctx, (frame[2].o), ((jlong)((java_math_BigDecimal *) NULL_CHECK((frame[0].o)))->F_intCompact));
	goto label_13;
	}
label_10:;
	{
	LINE_NUMBER(2971);
	sp[0].o = (jobject)((java_math_BigDecimal *) NULL_CHECK((frame[0].o)))->F_intVal;
	sp[0].o = (jobject)((func_java_math_BigInteger_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_math_BigInteger_toString_R_java_lang_String])(ctx, sp[0].o);
	frame[3].o = sp[0].o;
	LINE_NUMBER(2972);
	clinit_java_lang_StringBuilder(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	jint temp0 = (jint)((func_java_lang_String_length_R_int) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_java_lang_String_length_R_int])(ctx, (frame[3].o));
	init_java_lang_StringBuilder_int(ctx, sp[0].o, (temp0 + (frame[1].i)));
	frame[2].o = sp[0].o;
	LINE_NUMBER(2973);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, (frame[2].o), (frame[3].o));
	}
label_13:;
	{
	LINE_NUMBER(2975);
	frame[3].i = (jint(0));
	}
label_16:;
	{
	if ((frame[3].i) >= (frame[1].i)) goto label_17;
	}
	{
	LINE_NUMBER(2976);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_char_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_java_lang_StringBuilder_append_char_R_java_lang_StringBuilder])(ctx, (frame[2].o), (48));
	LINE_NUMBER(2975);
	INST_IINC(3, 1);
	goto label_16;
	}
label_17:;
	{
	LINE_NUMBER(2977);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, (frame[2].o));
	popStackFrame(ctx);
	return sp[0].o;
	}
label_5:;
	{
	LINE_NUMBER(2980);
	if ((longCompare(((jlong)((java_math_BigDecimal *) NULL_CHECK((frame[0].o)))->F_intCompact), (jlong(-9223372036854775807ll)))) == 0) goto label_20;
	}
	{
	LINE_NUMBER(2981);
	jlong temp0 = (jlong)SM_java_lang_Math_abs_long_R_long(ctx, ((jlong)((java_math_BigDecimal *) NULL_CHECK((frame[0].o)))->F_intCompact));
	sp[0].o = (jobject)SM_java_lang_Long_toString_long_R_java_lang_String(ctx, temp0);
	frame[1].o = sp[0].o;
	goto label_23;
	}
label_20:;
	{
	LINE_NUMBER(2983);
	sp[0].o = (jobject)((java_math_BigDecimal *) NULL_CHECK((frame[0].o)))->F_intVal;
	sp[0].o = (jobject)((func_java_math_BigInteger_abs_R_java_math_BigInteger) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_math_BigInteger_abs_R_java_math_BigInteger])(ctx, sp[0].o);
	sp[0].o = (jobject)((func_java_math_BigInteger_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_math_BigInteger_toString_R_java_lang_String])(ctx, sp[0].o);
	frame[1].o = sp[0].o;
	}
label_23:;
	{
	LINE_NUMBER(2985);
	sp[0].o = frame[0].o;
	jint temp0 = (jint)((func_java_math_BigDecimal_signum_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_math_BigDecimal_signum_R_int])(ctx, (frame[0].o));
	sp[0].o = (jobject)M_java_math_BigDecimal_getValueString_int_java_lang_String_int_R_java_lang_String(ctx, sp[0].o, temp0, (frame[1].o), ((jint)((java_math_BigDecimal *) NULL_CHECK((frame[0].o)))->F_scale));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_java_math_BigDecimal_getValueString_int_java_lang_String_int_R_java_lang_String(jcontext ctx, jobject self, jint param0, jobject param1, jint param2) {
	NULL_CHECK(self);
	jtype frame[11];
	auto stack = &frame[7];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/math/BigDecimal:getValueString", 11 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].o = param1;
	frame[3].i = param2;
	{
	LINE_NUMBER(2992);
	jint temp0 = (jint)((func_java_lang_String_length_R_int) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_java_lang_String_length_R_int])(ctx, (frame[2].o));
	frame[5].i = (temp0 - (frame[3].i));
	LINE_NUMBER(2993);
	if ((frame[5].i) != 0) goto label_2;
	}
	{
	LINE_NUMBER(2994);
	clinit_java_lang_StringBuilder(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[0].o);
	sp += 1;
	if ((frame[1].i) >= 0) goto label_4;
	}
	(sp++)->o = ((jobject) createStringLiteral(ctx, u8"-0."_j));
	goto label_5;
label_4:;
	(sp++)->o = ((jobject) createStringLiteral(ctx, u8"0."_j));
label_5:;
	{
	sp -= 2;
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, sp[1].o);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (frame[2].o));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[0].o);
	popStackFrame(ctx);
	return sp[0].o;
	}
label_2:;
	{
	LINE_NUMBER(2995);
	if ((frame[5].i) <= 0) goto label_6;
	}
	{
	LINE_NUMBER(2996);
	clinit_java_lang_StringBuilder(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder_java_lang_String(ctx, sp[0].o, (frame[2].o));
	frame[4].o = sp[0].o;
	LINE_NUMBER(2997);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_insert_int_char_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_java_lang_StringBuilder_insert_int_char_R_java_lang_StringBuilder])(ctx, (frame[4].o), (frame[5].i), (46));
	LINE_NUMBER(2998);
	if ((frame[1].i) >= 0) goto label_10;
	}
	{
	LINE_NUMBER(2999);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_insert_int_char_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_java_lang_StringBuilder_insert_int_char_R_java_lang_StringBuilder])(ctx, (frame[4].o), (jint(0)), (45));
	goto label_10;
	}
label_6:;
	{
	LINE_NUMBER(3001);
	clinit_java_lang_StringBuilder(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	jint temp0 = (jint(3)) - (frame[5].i);
	jint temp1 = (jint)((func_java_lang_String_length_R_int) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_java_lang_String_length_R_int])(ctx, (frame[2].o));
	init_java_lang_StringBuilder_int(ctx, sp[0].o, (temp0 + temp1));
	frame[4].o = sp[0].o;
	LINE_NUMBER(3002);
	sp[0].o = frame[4].o;
	sp += 1;
	if ((frame[1].i) >= 0) goto label_13;
	}
	(sp++)->o = ((jobject) createStringLiteral(ctx, u8"-0."_j));
	goto label_14;
label_13:;
	(sp++)->o = ((jobject) createStringLiteral(ctx, u8"0."_j));
label_14:;
	{
	sp -= 2;
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(3003);
	frame[6].i = (jint(0));
	}
label_16:;
	{
	if ((frame[6].i) >= (-(frame[5].i))) goto label_17;
	}
	{
	LINE_NUMBER(3004);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_char_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_java_lang_StringBuilder_append_char_R_java_lang_StringBuilder])(ctx, (frame[4].o), (48));
	LINE_NUMBER(3003);
	INST_IINC(6, 1);
	goto label_16;
	}
label_17:;
	{
	LINE_NUMBER(3005);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, (frame[4].o), (frame[2].o));
	}
label_10:;
	{
	LINE_NUMBER(3007);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, (frame[4].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_java_math_BigDecimal_toBigInteger_R_java_math_BigInteger(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/math/BigDecimal:toBigInteger", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(3029);
	sp[0].o = (jobject)((func_java_math_BigDecimal_setScale_int_int_R_java_math_BigDecimal) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_math_BigDecimal_setScale_int_int_R_java_math_BigDecimal])(ctx, (frame[0].o), (jint(0)), (jint(1)));
	sp[0].o = (jobject)M_java_math_BigDecimal_inflated_R_java_math_BigInteger(ctx, sp[0].o);
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_java_math_BigDecimal_toBigIntegerExact_R_java_math_BigInteger(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/math/BigDecimal:toBigIntegerExact", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(3044);
	sp[0].o = (jobject)((func_java_math_BigDecimal_setScale_int_int_R_java_math_BigDecimal) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_math_BigDecimal_setScale_int_int_R_java_math_BigDecimal])(ctx, (frame[0].o), (jint(0)), (7));
	sp[0].o = (jobject)M_java_math_BigDecimal_inflated_R_java_math_BigInteger(ctx, sp[0].o);
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jlong M_java_math_BigDecimal_longValue_R_long(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/math/BigDecimal:longValue", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(3064);
	if ((longCompare(((jlong)((java_math_BigDecimal *) NULL_CHECK((frame[0].o)))->F_intCompact), (jlong(-9223372036854775807ll)))) == 0) goto label_1;
	}
	{
	if (((jint)((java_math_BigDecimal *) NULL_CHECK((frame[0].o)))->F_scale) != 0) goto label_1;
	}
	{
	LINE_NUMBER(3065);
	popStackFrame(ctx);
	return ((jlong)((java_math_BigDecimal *) NULL_CHECK((frame[0].o)))->F_intCompact);
	}
label_1:;
	{
	LINE_NUMBER(3068);
	jint temp0 = (jint)((func_java_math_BigDecimal_signum_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_math_BigDecimal_signum_R_int])(ctx, (frame[0].o));
	if (temp0 == 0) goto label_3;
	}
	{
	jint temp0 = (jint)M_java_math_BigDecimal_fractionOnly_R_boolean(ctx, (frame[0].o));
	if (temp0 != 0) goto label_3;
	}
	{
	if (((jint)((java_math_BigDecimal *) NULL_CHECK((frame[0].o)))->F_scale) > (-64)) goto label_4;
	}
label_3:;
	{
	LINE_NUMBER(3076);
	popStackFrame(ctx);
	return (jlong(0));
	}
label_4:;
	{
	LINE_NUMBER(3078);
	sp[0].o = (jobject)((func_java_math_BigDecimal_toBigInteger_R_java_math_BigInteger) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_math_BigDecimal_toBigInteger_R_java_math_BigInteger])(ctx, (frame[0].o));
	jlong temp0 = (jlong)((func_java_math_BigInteger_longValue_R_long) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_math_BigInteger_longValue_R_long])(ctx, sp[0].o);
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jbool M_java_math_BigDecimal_fractionOnly_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/math/BigDecimal:fractionOnly", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(3088);
	if ((clinit_java_math_BigDecimal(ctx), (jint)SF_java_math_BigDecimal_$assertionsDisabled) != 0) goto label_1;
	}
	{
	jint temp0 = (jint)((func_java_math_BigDecimal_signum_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_math_BigDecimal_signum_R_int])(ctx, (frame[0].o));
	if (temp0 != 0) goto label_1;
	}
	{
	clinit_java_lang_AssertionError(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_AssertionError);
	init_java_lang_AssertionError(ctx, sp[0].o);
	throwException(ctx, sp[0].o);	}
label_1:;
	{
	LINE_NUMBER(3089);
	jint temp0 = (jint)((func_java_math_BigDecimal_precision_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_math_BigDecimal_precision_R_int])(ctx, (frame[0].o));
	if ((temp0 - ((jint)((java_math_BigDecimal *) NULL_CHECK((frame[0].o)))->F_scale)) > 0) goto label_2;
	}
	INST_ICONST(1);
	goto label_3;
label_2:;
	INST_ICONST(0);
label_3:;
	popStackFrame(ctx);
	INST_IRETURN();

	popStackFrame(ctx);
}

jlong M_java_math_BigDecimal_longValueExact_R_long(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/math/BigDecimal:longValueExact", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(3105);
	if ((longCompare(((jlong)((java_math_BigDecimal *) NULL_CHECK((frame[0].o)))->F_intCompact), (jlong(-9223372036854775807ll)))) == 0) goto label_1;
	}
	{
	if (((jint)((java_math_BigDecimal *) NULL_CHECK((frame[0].o)))->F_scale) != 0) goto label_1;
	}
	{
	LINE_NUMBER(3106);
	popStackFrame(ctx);
	return ((jlong)((java_math_BigDecimal *) NULL_CHECK((frame[0].o)))->F_intCompact);
	}
label_1:;
	{
	LINE_NUMBER(3109);
	jint temp0 = (jint)((func_java_math_BigDecimal_signum_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_math_BigDecimal_signum_R_int])(ctx, (frame[0].o));
	if (temp0 != 0) goto label_3;
	}
	{
	LINE_NUMBER(3110);
	popStackFrame(ctx);
	return (jlong(0));
	}
label_3:;
	{
	LINE_NUMBER(3114);
	jint temp0 = (jint)M_java_math_BigDecimal_fractionOnly_R_boolean(ctx, (frame[0].o));
	if (temp0 == 0) goto label_5;
	}
	{
	LINE_NUMBER(3115);
	clinit_java_lang_ArithmeticException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_ArithmeticException);
	init_java_lang_ArithmeticException_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"Rounding necessary"_j))));
	throwException(ctx, sp[0].o);	}
label_5:;
	{
	LINE_NUMBER(3118);
	jint temp0 = (jint)((func_java_math_BigDecimal_precision_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_math_BigDecimal_precision_R_int])(ctx, (frame[0].o));
	if ((temp0 - ((jint)((java_math_BigDecimal *) NULL_CHECK((frame[0].o)))->F_scale)) <= (19)) goto label_7;
	}
	{
	LINE_NUMBER(3119);
	clinit_java_lang_ArithmeticException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_ArithmeticException);
	init_java_lang_ArithmeticException_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"Overflow"_j))));
	throwException(ctx, sp[0].o);	}
label_7:;
	{
	LINE_NUMBER(3122);
	sp[0].o = (jobject)((func_java_math_BigDecimal_setScale_int_int_R_java_math_BigDecimal) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_math_BigDecimal_setScale_int_int_R_java_math_BigDecimal])(ctx, (frame[0].o), (jint(0)), (7));
	frame[1].o = sp[0].o;
	LINE_NUMBER(3123);
	jint temp0 = (jint)((func_java_math_BigDecimal_precision_R_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_math_BigDecimal_precision_R_int])(ctx, (frame[1].o));
	if (temp0 < (19)) goto label_10;
	}
	{
	LINE_NUMBER(3124);
	SM_java_math_BigDecimal$LongOverflow_check_java_math_BigDecimal(ctx, (frame[1].o));
	}
label_10:;
	{
	LINE_NUMBER(3125);
	sp[0].o = (jobject)M_java_math_BigDecimal_inflated_R_java_math_BigInteger(ctx, (frame[1].o));
	jlong temp0 = (jlong)((func_java_math_BigInteger_longValue_R_long) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_math_BigInteger_longValue_R_long])(ctx, sp[0].o);
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jint M_java_math_BigDecimal_intValue_R_int(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/math/BigDecimal:intValue", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(3160);
	if ((longCompare(((jlong)((java_math_BigDecimal *) NULL_CHECK((frame[0].o)))->F_intCompact), (jlong(-9223372036854775807ll)))) == 0) goto label_1;
	}
	{
	if (((jint)((java_math_BigDecimal *) NULL_CHECK((frame[0].o)))->F_scale) != 0) goto label_1;
	}
	{
	LINE_NUMBER(3161);
	jint temp0 = jint(((jlong)((java_math_BigDecimal *) NULL_CHECK((frame[0].o)))->F_intCompact));
	sp[0].i = temp0;
	sp += 1;
	goto label_3;
	}
label_1:;
	{
	LINE_NUMBER(3162);
	jlong temp0 = (jlong)((func_java_math_BigDecimal_longValue_R_long) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_math_BigDecimal_longValue_R_long])(ctx, (frame[0].o));
	jint temp1 = jint(temp0);
	sp[0].i = temp1;
	sp += 1;
	}
label_3:;
	LINE_NUMBER(3160);
	popStackFrame(ctx);
	INST_IRETURN();

	popStackFrame(ctx);
}

jint M_java_math_BigDecimal_intValueExact_R_int(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/math/BigDecimal:intValueExact", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(3179);
	jlong temp0 = (jlong)((func_java_math_BigDecimal_longValueExact_R_long) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_math_BigDecimal_longValueExact_R_long])(ctx, (frame[0].o));
	frame[1].l = temp0;
	LINE_NUMBER(3180);
	if ((longCompare((jlong((jint((frame[1].l))))), (frame[1].l))) == 0) goto label_2;
	}
	{
	LINE_NUMBER(3181);
	clinit_java_lang_ArithmeticException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_ArithmeticException);
	init_java_lang_ArithmeticException_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"Overflow"_j))));
	throwException(ctx, sp[0].o);	}
label_2:;
	{
	LINE_NUMBER(3182);
	popStackFrame(ctx);
	return (jint((frame[1].l)));
	}

	popStackFrame(ctx);
}

jshort M_java_math_BigDecimal_shortValueExact_R_short(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/math/BigDecimal:shortValueExact", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(3199);
	jlong temp0 = (jlong)((func_java_math_BigDecimal_longValueExact_R_long) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_math_BigDecimal_longValueExact_R_long])(ctx, (frame[0].o));
	frame[1].l = temp0;
	LINE_NUMBER(3200);
	if ((longCompare((jlong((jshort((jint((frame[1].l))))))), (frame[1].l))) == 0) goto label_2;
	}
	{
	LINE_NUMBER(3201);
	clinit_java_lang_ArithmeticException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_ArithmeticException);
	init_java_lang_ArithmeticException_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"Overflow"_j))));
	throwException(ctx, sp[0].o);	}
label_2:;
	{
	LINE_NUMBER(3202);
	popStackFrame(ctx);
	return (jshort((jint((frame[1].l)))));
	}

	popStackFrame(ctx);
}

jbyte M_java_math_BigDecimal_byteValueExact_R_byte(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/math/BigDecimal:byteValueExact", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(3219);
	jlong temp0 = (jlong)((func_java_math_BigDecimal_longValueExact_R_long) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_math_BigDecimal_longValueExact_R_long])(ctx, (frame[0].o));
	frame[1].l = temp0;
	LINE_NUMBER(3220);
	if ((longCompare((jlong((jbyte((jint((frame[1].l))))))), (frame[1].l))) == 0) goto label_2;
	}
	{
	LINE_NUMBER(3221);
	clinit_java_lang_ArithmeticException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_ArithmeticException);
	init_java_lang_ArithmeticException_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"Overflow"_j))));
	throwException(ctx, sp[0].o);	}
label_2:;
	{
	LINE_NUMBER(3222);
	popStackFrame(ctx);
	return (jbyte((jint((frame[1].l)))));
	}

	popStackFrame(ctx);
}

jfloat M_java_math_BigDecimal_floatValue_R_float(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/math/BigDecimal:floatValue", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(3242);
	if ((longCompare(((jlong)((java_math_BigDecimal *) NULL_CHECK((frame[0].o)))->F_intCompact), (jlong(-9223372036854775807ll)))) == 0) goto label_1;
	}
	{
	LINE_NUMBER(3243);
	if (((jint)((java_math_BigDecimal *) NULL_CHECK((frame[0].o)))->F_scale) != 0) goto label_3;
	}
	{
	LINE_NUMBER(3244);
	popStackFrame(ctx);
	return (jfloat(((jlong)((java_math_BigDecimal *) NULL_CHECK((frame[0].o)))->F_intCompact)));
	}
label_3:;
	{
	LINE_NUMBER(3252);
	jlong temp0 = (jlong)SM_java_lang_Math_abs_long_R_long(ctx, ((jlong)((java_math_BigDecimal *) NULL_CHECK((frame[0].o)))->F_intCompact));
	if ((longCompare(temp0, (jlong(4194304ll)))) >= 0) goto label_1;
	}
	{
	LINE_NUMBER(3256);
	if (((jint)((java_math_BigDecimal *) NULL_CHECK((frame[0].o)))->F_scale) <= 0) goto label_6;
	}
	{
	jint temp0 = (jint)((java_math_BigDecimal *) NULL_CHECK((frame[0].o)))->F_scale;
	clinit_java_math_BigDecimal(ctx);
	sp[0].o = (jobject)SF_java_math_BigDecimal_float10pow;
	if (temp0 >= (((jarray) nullCheck(ctx, sp[0].o))->length)) goto label_6;
	}
	{
	LINE_NUMBER(3257);
	jfloat temp0 = jfloat(((jlong)((java_math_BigDecimal *) NULL_CHECK((frame[0].o)))->F_intCompact));
	clinit_java_math_BigDecimal(ctx);
	sp[0].o = (jobject)SF_java_math_BigDecimal_float10pow;
	popStackFrame(ctx);
	return (temp0 / ((jfloat)ARRAY_ACCESS(jfloat, sp[0].o, ((jint)((java_math_BigDecimal *) NULL_CHECK((frame[0].o)))->F_scale))));
	}
label_6:;
	{
	LINE_NUMBER(3258);
	if (((jint)((java_math_BigDecimal *) NULL_CHECK((frame[0].o)))->F_scale) >= 0) goto label_1;
	}
	{
	jint temp0 = (jint)((java_math_BigDecimal *) NULL_CHECK((frame[0].o)))->F_scale;
	clinit_java_math_BigDecimal(ctx);
	sp[0].o = (jobject)SF_java_math_BigDecimal_float10pow;
	if (temp0 <= (-(((jarray) nullCheck(ctx, sp[0].o))->length))) goto label_1;
	}
	{
	LINE_NUMBER(3259);
	jfloat temp0 = jfloat(((jlong)((java_math_BigDecimal *) NULL_CHECK((frame[0].o)))->F_intCompact));
	clinit_java_math_BigDecimal(ctx);
	sp[0].o = (jobject)SF_java_math_BigDecimal_float10pow;
	popStackFrame(ctx);
	return (temp0 * ((jfloat)ARRAY_ACCESS(jfloat, sp[0].o, (-((jint)((java_math_BigDecimal *) NULL_CHECK((frame[0].o)))->F_scale)))));
	}
label_1:;
	{
	LINE_NUMBER(3265);
	sp[0].o = (jobject)((func_java_math_BigDecimal_toString_R_java_lang_String) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_math_BigDecimal_toString_R_java_lang_String])(ctx, (frame[0].o));
	jfloat temp0 = (jfloat)SM_java_lang_Float_parseFloat_java_lang_String_R_float(ctx, sp[0].o);
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jdouble M_java_math_BigDecimal_doubleValue_R_double(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/math/BigDecimal:doubleValue", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(3285);
	if ((longCompare(((jlong)((java_math_BigDecimal *) NULL_CHECK((frame[0].o)))->F_intCompact), (jlong(-9223372036854775807ll)))) == 0) goto label_1;
	}
	{
	LINE_NUMBER(3286);
	if (((jint)((java_math_BigDecimal *) NULL_CHECK((frame[0].o)))->F_scale) != 0) goto label_3;
	}
	{
	LINE_NUMBER(3287);
	popStackFrame(ctx);
	return (jdouble(((jlong)((java_math_BigDecimal *) NULL_CHECK((frame[0].o)))->F_intCompact)));
	}
label_3:;
	{
	LINE_NUMBER(3295);
	jlong temp0 = (jlong)SM_java_lang_Math_abs_long_R_long(ctx, ((jlong)((java_math_BigDecimal *) NULL_CHECK((frame[0].o)))->F_intCompact));
	if ((longCompare(temp0, (jlong(4503599627370496ll)))) >= 0) goto label_1;
	}
	{
	LINE_NUMBER(3299);
	if (((jint)((java_math_BigDecimal *) NULL_CHECK((frame[0].o)))->F_scale) <= 0) goto label_6;
	}
	{
	jint temp0 = (jint)((java_math_BigDecimal *) NULL_CHECK((frame[0].o)))->F_scale;
	clinit_java_math_BigDecimal(ctx);
	sp[0].o = (jobject)SF_java_math_BigDecimal_double10pow;
	if (temp0 >= (((jarray) nullCheck(ctx, sp[0].o))->length)) goto label_6;
	}
	{
	LINE_NUMBER(3300);
	jdouble temp0 = jdouble(((jlong)((java_math_BigDecimal *) NULL_CHECK((frame[0].o)))->F_intCompact));
	clinit_java_math_BigDecimal(ctx);
	sp[0].o = (jobject)SF_java_math_BigDecimal_double10pow;
	popStackFrame(ctx);
	return (temp0 / ((jdouble)ARRAY_ACCESS(jdouble, sp[0].o, ((jint)((java_math_BigDecimal *) NULL_CHECK((frame[0].o)))->F_scale))));
	}
label_6:;
	{
	LINE_NUMBER(3301);
	if (((jint)((java_math_BigDecimal *) NULL_CHECK((frame[0].o)))->F_scale) >= 0) goto label_1;
	}
	{
	jint temp0 = (jint)((java_math_BigDecimal *) NULL_CHECK((frame[0].o)))->F_scale;
	clinit_java_math_BigDecimal(ctx);
	sp[0].o = (jobject)SF_java_math_BigDecimal_double10pow;
	if (temp0 <= (-(((jarray) nullCheck(ctx, sp[0].o))->length))) goto label_1;
	}
	{
	LINE_NUMBER(3302);
	jdouble temp0 = jdouble(((jlong)((java_math_BigDecimal *) NULL_CHECK((frame[0].o)))->F_intCompact));
	clinit_java_math_BigDecimal(ctx);
	sp[0].o = (jobject)SF_java_math_BigDecimal_double10pow;
	popStackFrame(ctx);
	return (temp0 * ((jdouble)ARRAY_ACCESS(jdouble, sp[0].o, (-((jint)((java_math_BigDecimal *) NULL_CHECK((frame[0].o)))->F_scale)))));
	}
label_1:;
	{
	LINE_NUMBER(3308);
	sp[0].o = (jobject)((func_java_math_BigDecimal_toString_R_java_lang_String) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_math_BigDecimal_toString_R_java_lang_String])(ctx, (frame[0].o));
	jdouble temp0 = (jdouble)SM_java_lang_Double_parseDouble_java_lang_String_R_double(ctx, sp[0].o);
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jobject M_java_math_BigDecimal_ulp_R_java_math_BigDecimal(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/math/BigDecimal:ulp", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(3346);
	jlong temp0 = jlong(1);
	jint temp1 = (jint)((func_java_math_BigDecimal_scale_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_math_BigDecimal_scale_R_int])(ctx, (frame[0].o));
	sp[0].o = (jobject)SM_java_math_BigDecimal_valueOf_long_int_int_R_java_math_BigDecimal(ctx, temp0, temp1, (jint(1)));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_java_math_BigDecimal_layoutChars_boolean_R_java_lang_String(jcontext ctx, jobject self, jbool param0) {
	NULL_CHECK(self);
	jtype frame[16];
	auto stack = &frame[11];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/math/BigDecimal:layoutChars", 16 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(3458);
	if (((jint)((java_math_BigDecimal *) NULL_CHECK((frame[0].o)))->F_scale) != 0) goto label_1;
	}
	{
	LINE_NUMBER(3459);
	if ((longCompare(((jlong)((java_math_BigDecimal *) NULL_CHECK((frame[0].o)))->F_intCompact), (jlong(-9223372036854775807ll)))) == 0) goto label_3;
	}
	{
	LINE_NUMBER(3460);
	sp[0].o = (jobject)SM_java_lang_Long_toString_long_R_java_lang_String(ctx, ((jlong)((java_math_BigDecimal *) NULL_CHECK((frame[0].o)))->F_intCompact));
	sp += 1;
	goto label_5;
	}
label_3:;
	{
	LINE_NUMBER(3461);
	sp[0].o = (jobject)((java_math_BigDecimal *) NULL_CHECK((frame[0].o)))->F_intVal;
	sp[0].o = (jobject)((func_java_math_BigInteger_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_math_BigInteger_toString_R_java_lang_String])(ctx, sp[0].o);
	sp += 1;
	}
label_5:;
	LINE_NUMBER(3459);
	popStackFrame(ctx);
	INST_ARETURN();
label_1:;
	{
	LINE_NUMBER(3462);
	if (((jint)((java_math_BigDecimal *) NULL_CHECK((frame[0].o)))->F_scale) != (jint(2))) goto label_6;
	}
	{
	if ((longCompare(((jlong)((java_math_BigDecimal *) NULL_CHECK((frame[0].o)))->F_intCompact), (jlong(0)))) < 0) goto label_6;
	}
	{
	if ((longCompare(((jlong)((java_math_BigDecimal *) NULL_CHECK((frame[0].o)))->F_intCompact), (jlong(2147483647ll)))) >= 0) goto label_6;
	}
	{
	LINE_NUMBER(3465);
	frame[2].i = ((jint(((jlong)((java_math_BigDecimal *) NULL_CHECK((frame[0].o)))->F_intCompact))) % (100));
	LINE_NUMBER(3466);
	frame[3].i = ((jint(((jlong)((java_math_BigDecimal *) NULL_CHECK((frame[0].o)))->F_intCompact))) / (100));
	LINE_NUMBER(3467);
	clinit_java_lang_StringBuilder(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[0].o);
	sp[1].o = (jobject)SM_java_lang_Integer_toString_int_R_java_lang_String(ctx, (frame[3].i));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, sp[1].o);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_char_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_char_R_java_lang_StringBuilder])(ctx, sp[0].o, (46));
	clinit_java_math_BigDecimal$StringBuilderHelper(ctx);
	sp[1].o = (jobject)SF_java_math_BigDecimal$StringBuilderHelper_DIGIT_TENS;
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_char_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_char_R_java_lang_StringBuilder])(ctx, sp[0].o, ((jint)ARRAY_ACCESS(jchar, sp[1].o, (frame[2].i))));
	clinit_java_math_BigDecimal$StringBuilderHelper(ctx);
	sp[1].o = (jobject)SF_java_math_BigDecimal$StringBuilderHelper_DIGIT_ONES;
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_char_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_char_R_java_lang_StringBuilder])(ctx, sp[0].o, ((jint)ARRAY_ACCESS(jchar, sp[1].o, (frame[2].i))));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[0].o);
	popStackFrame(ctx);
	return sp[0].o;
	}
label_6:;
	{
	LINE_NUMBER(3472);
	clinit_java_math_BigDecimal(ctx);
	sp[0].o = (jobject)SF_java_math_BigDecimal_threadLocalStringBuilderHelper;
	sp[0].o = (jobject)((func_java_lang_ThreadLocal_get_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_ThreadLocal_get_R_java_lang_Object])(ctx, sp[0].o);
	frame[2].o = (checkCast(ctx, &class_java_math_BigDecimal$StringBuilderHelper, sp[0].o));
	LINE_NUMBER(3476);
	if ((longCompare(((jlong)((java_math_BigDecimal *) NULL_CHECK((frame[0].o)))->F_intCompact), (jlong(-9223372036854775807ll)))) == 0) goto label_11;
	}
	{
	LINE_NUMBER(3477);
	sp[0].o = frame[2].o;
	jlong temp0 = (jlong)SM_java_lang_Math_abs_long_R_long(ctx, ((jlong)((java_math_BigDecimal *) NULL_CHECK((frame[0].o)))->F_intCompact));
	jint temp1 = (jint)((func_java_math_BigDecimal$StringBuilderHelper_putIntCompact_long_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_math_BigDecimal$StringBuilderHelper_putIntCompact_long_R_int])(ctx, sp[0].o, temp0);
	frame[4].i = temp1;
	LINE_NUMBER(3478);
	sp[0].o = (jobject)((func_java_math_BigDecimal$StringBuilderHelper_getCompactCharArray_R_Array1_char) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_java_math_BigDecimal$StringBuilderHelper_getCompactCharArray_R_Array1_char])(ctx, (frame[2].o));
	frame[3].o = sp[0].o;
	goto label_15;
	}
label_11:;
	{
	LINE_NUMBER(3480);
	frame[4].i = (jint(0));
	LINE_NUMBER(3481);
	sp[0].o = (jobject)((java_math_BigDecimal *) NULL_CHECK((frame[0].o)))->F_intVal;
	sp[0].o = (jobject)((func_java_math_BigInteger_abs_R_java_math_BigInteger) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_math_BigInteger_abs_R_java_math_BigInteger])(ctx, sp[0].o);
	sp[0].o = (jobject)((func_java_math_BigInteger_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_math_BigInteger_toString_R_java_lang_String])(ctx, sp[0].o);
	sp[0].o = (jobject)((func_java_lang_String_toCharArray_R_Array1_char) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_String_toCharArray_R_Array1_char])(ctx, sp[0].o);
	frame[3].o = sp[0].o;
	}
label_15:;
	{
	LINE_NUMBER(3488);
	sp[0].o = (jobject)((func_java_math_BigDecimal$StringBuilderHelper_getStringBuilder_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_java_math_BigDecimal$StringBuilderHelper_getStringBuilder_R_java_lang_StringBuilder])(ctx, (frame[2].o));
	frame[5].o = sp[0].o;
	LINE_NUMBER(3489);
	jint temp0 = (jint)((func_java_math_BigDecimal_signum_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_math_BigDecimal_signum_R_int])(ctx, (frame[0].o));
	if (temp0 >= 0) goto label_18;
	}
	{
	LINE_NUMBER(3490);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_char_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[5].o))->vtable)[VTABLE_java_lang_StringBuilder_append_char_R_java_lang_StringBuilder])(ctx, (frame[5].o), (45));
	}
label_18:;
	{
	LINE_NUMBER(3491);
	frame[6].i = ((((jarray) nullCheck(ctx, (frame[3].o)))->length) - (frame[4].i));
	LINE_NUMBER(3492);
	frame[7].l = ((-(jlong(((jint)((java_math_BigDecimal *) NULL_CHECK((frame[0].o)))->F_scale)))) + (jlong(((frame[6].i) - (jint(1))))));
	LINE_NUMBER(3493);
	if (((jint)((java_math_BigDecimal *) NULL_CHECK((frame[0].o)))->F_scale) < 0) goto label_22;
	}
	{
	if ((longCompare((frame[7].l), (jlong(-6ll)))) < 0) goto label_22;
	}
	{
	LINE_NUMBER(3494);
	frame[9].i = (((jint)((java_math_BigDecimal *) NULL_CHECK((frame[0].o)))->F_scale) - (frame[6].i));
	LINE_NUMBER(3495);
	if ((frame[9].i) < 0) goto label_25;
	}
	{
	LINE_NUMBER(3496);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_char_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[5].o))->vtable)[VTABLE_java_lang_StringBuilder_append_char_R_java_lang_StringBuilder])(ctx, (frame[5].o), (48));
	LINE_NUMBER(3497);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_char_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[5].o))->vtable)[VTABLE_java_lang_StringBuilder_append_char_R_java_lang_StringBuilder])(ctx, (frame[5].o), (46));
	}
label_28:;
	{
	LINE_NUMBER(3498);
	if ((frame[9].i) <= 0) goto label_29;
	}
	{
	LINE_NUMBER(3499);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_char_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[5].o))->vtable)[VTABLE_java_lang_StringBuilder_append_char_R_java_lang_StringBuilder])(ctx, (frame[5].o), (48));
	LINE_NUMBER(3498);
	INST_IINC(9, -1);
	goto label_28;
	}
label_29:;
	{
	LINE_NUMBER(3501);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_Array1_char_int_int_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[5].o))->vtable)[VTABLE_java_lang_StringBuilder_append_Array1_char_int_int_R_java_lang_StringBuilder])(ctx, (frame[5].o), (frame[3].o), (frame[4].i), (frame[6].i));
	goto label_32;
	}
label_25:;
	{
	LINE_NUMBER(3503);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_Array1_char_int_int_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[5].o))->vtable)[VTABLE_java_lang_StringBuilder_append_Array1_char_int_int_R_java_lang_StringBuilder])(ctx, (frame[5].o), (frame[3].o), (frame[4].i), (-(frame[9].i)));
	LINE_NUMBER(3504);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_char_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[5].o))->vtable)[VTABLE_java_lang_StringBuilder_append_char_R_java_lang_StringBuilder])(ctx, (frame[5].o), (46));
	LINE_NUMBER(3505);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_Array1_char_int_int_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[5].o))->vtable)[VTABLE_java_lang_StringBuilder_append_Array1_char_int_int_R_java_lang_StringBuilder])(ctx, (frame[5].o), (frame[3].o), ((-(frame[9].i)) + (frame[4].i)), ((jint)((java_math_BigDecimal *) NULL_CHECK((frame[0].o)))->F_scale));
	}
label_32:;
	LINE_NUMBER(3507);
	goto label_35;
label_22:;
	{
	LINE_NUMBER(3508);
	if ((frame[1].i) == 0) goto label_36;
	}
	{
	LINE_NUMBER(3509);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_char_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[5].o))->vtable)[VTABLE_java_lang_StringBuilder_append_char_R_java_lang_StringBuilder])(ctx, (frame[5].o), ((jint)ARRAY_ACCESS(jchar, (frame[3].o), (frame[4].i))));
	LINE_NUMBER(3510);
	if ((frame[6].i) <= (jint(1))) goto label_39;
	}
	{
	LINE_NUMBER(3511);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_char_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[5].o))->vtable)[VTABLE_java_lang_StringBuilder_append_char_R_java_lang_StringBuilder])(ctx, (frame[5].o), (46));
	LINE_NUMBER(3512);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_Array1_char_int_int_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[5].o))->vtable)[VTABLE_java_lang_StringBuilder_append_Array1_char_int_int_R_java_lang_StringBuilder])(ctx, (frame[5].o), (frame[3].o), ((frame[4].i) + (jint(1))), ((frame[6].i) - (jint(1))));
	goto label_39;
	}
label_36:;
	{
	LINE_NUMBER(3515);
	frame[9].i = (jint(((frame[7].l) % (jlong(3ll)))));
	LINE_NUMBER(3516);
	if ((frame[9].i) >= 0) goto label_43;
	}
	LINE_NUMBER(3517);
	INST_IINC(9, 3);
label_43:;
	{
	LINE_NUMBER(3518);
	frame[7].l = ((frame[7].l) - (jlong((frame[9].i))));
	LINE_NUMBER(3519);
	INST_IINC(9, 1);
	LINE_NUMBER(3520);
	jint temp0 = (jint)((func_java_math_BigDecimal_signum_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_math_BigDecimal_signum_R_int])(ctx, (frame[0].o));
	if (temp0 != 0) goto label_47;
	}
	{
	LINE_NUMBER(3521);
	switch((frame[9].i)) {
		case 1: goto label_49;
		case 2: goto label_50;
		case 3: goto label_51;
		default: goto label_52;
	}
	}
label_49:;
	{
	LINE_NUMBER(3523);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_char_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[5].o))->vtable)[VTABLE_java_lang_StringBuilder_append_char_R_java_lang_StringBuilder])(ctx, (frame[5].o), (48));
	LINE_NUMBER(3524);
	goto label_39;
	}
label_50:;
	{
	LINE_NUMBER(3526);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[5].o))->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, (frame[5].o), (((jobject) createStringLiteral(ctx, u8"0.00"_j))));
	LINE_NUMBER(3527);
	frame[7].l = ((frame[7].l) + (jlong(3ll)));
	LINE_NUMBER(3528);
	goto label_39;
	}
label_51:;
	{
	LINE_NUMBER(3530);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[5].o))->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, (frame[5].o), (((jobject) createStringLiteral(ctx, u8"0.0"_j))));
	LINE_NUMBER(3531);
	frame[7].l = ((frame[7].l) + (jlong(3ll)));
	LINE_NUMBER(3532);
	goto label_39;
	}
label_52:;
	{
	LINE_NUMBER(3534);
	clinit_java_lang_AssertionError(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_AssertionError);
	clinit_java_lang_StringBuilder(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[1].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"Unexpected sig value "_j))));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder])(ctx, sp[1].o, (frame[9].i));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[1].o);
	init_java_lang_AssertionError_java_lang_String(ctx, sp[0].o, sp[1].o);
	throwException(ctx, sp[0].o);	}
label_47:;
	{
	LINE_NUMBER(3536);
	if ((frame[9].i) < (frame[6].i)) goto label_58;
	}
	{
	LINE_NUMBER(3537);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_Array1_char_int_int_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[5].o))->vtable)[VTABLE_java_lang_StringBuilder_append_Array1_char_int_int_R_java_lang_StringBuilder])(ctx, (frame[5].o), (frame[3].o), (frame[4].i), (frame[6].i));
	LINE_NUMBER(3539);
	frame[10].i = ((frame[9].i) - (frame[6].i));
	}
label_61:;
	INST_ILOAD(10);
	if ((--sp)->i <= 0) goto label_62;
	{
	LINE_NUMBER(3540);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_char_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[5].o))->vtable)[VTABLE_java_lang_StringBuilder_append_char_R_java_lang_StringBuilder])(ctx, (frame[5].o), (48));
	LINE_NUMBER(3539);
	INST_IINC(10, -1);
	goto label_61;
	}
label_62:;
	goto label_39;
label_58:;
	{
	LINE_NUMBER(3542);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_Array1_char_int_int_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[5].o))->vtable)[VTABLE_java_lang_StringBuilder_append_Array1_char_int_int_R_java_lang_StringBuilder])(ctx, (frame[5].o), (frame[3].o), (frame[4].i), (frame[9].i));
	LINE_NUMBER(3543);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_char_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[5].o))->vtable)[VTABLE_java_lang_StringBuilder_append_char_R_java_lang_StringBuilder])(ctx, (frame[5].o), (46));
	LINE_NUMBER(3544);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_Array1_char_int_int_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[5].o))->vtable)[VTABLE_java_lang_StringBuilder_append_Array1_char_int_int_R_java_lang_StringBuilder])(ctx, (frame[5].o), (frame[3].o), ((frame[4].i) + (frame[9].i)), ((frame[6].i) - (frame[9].i)));
	}
label_39:;
	{
	LINE_NUMBER(3547);
	if ((longCompare((frame[7].l), (jlong(0)))) == 0) goto label_35;
	}
	{
	LINE_NUMBER(3548);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_char_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[5].o))->vtable)[VTABLE_java_lang_StringBuilder_append_char_R_java_lang_StringBuilder])(ctx, (frame[5].o), (69));
	LINE_NUMBER(3549);
	if ((longCompare((frame[7].l), (jlong(0)))) <= 0) goto label_69;
	}
	{
	LINE_NUMBER(3550);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_char_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[5].o))->vtable)[VTABLE_java_lang_StringBuilder_append_char_R_java_lang_StringBuilder])(ctx, (frame[5].o), (43));
	}
label_69:;
	{
	LINE_NUMBER(3551);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_long_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[5].o))->vtable)[VTABLE_java_lang_StringBuilder_append_long_R_java_lang_StringBuilder])(ctx, (frame[5].o), (frame[7].l));
	}
label_35:;
	{
	LINE_NUMBER(3554);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, (frame[5].o))->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, (frame[5].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject SM_java_math_BigDecimal_bigTenToThe_int_R_java_math_BigInteger(jcontext ctx, jint param0) {
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/math/BigDecimal:bigTenToThe", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_math_BigDecimal(ctx);
	frame[0].i = param0;
	{
	LINE_NUMBER(3564);
	if ((frame[0].i) >= 0) goto label_1;
	}
	{
	LINE_NUMBER(3565);
	clinit_java_math_BigInteger(ctx);
	sp[0].o = (jobject)SF_java_math_BigInteger_ZERO;
	popStackFrame(ctx);
	return sp[0].o;
	}
label_1:;
	{
	LINE_NUMBER(3567);
	if ((frame[0].i) >= (clinit_java_math_BigDecimal(ctx), (jint)SF_java_math_BigDecimal_BIG_TEN_POWERS_TABLE_MAX)) goto label_3;
	}
	{
	LINE_NUMBER(3568);
	clinit_java_math_BigDecimal(ctx);
	sp[0].o = (jobject)SF_java_math_BigDecimal_BIG_TEN_POWERS_TABLE;
	frame[1].o = sp[0].o;
	LINE_NUMBER(3569);
	if ((frame[0].i) >= (((jarray) nullCheck(ctx, (frame[1].o)))->length)) goto label_6;
	}
	{
	LINE_NUMBER(3570);
	popStackFrame(ctx);
	return ((jobject)ARRAY_ACCESS(jobject, (frame[1].o), (frame[0].i)));
	}
label_6:;
	{
	LINE_NUMBER(3572);
	sp[0].o = (jobject)SM_java_math_BigDecimal_expandBigIntegerTenPowers_int_R_java_math_BigInteger(ctx, (frame[0].i));
	popStackFrame(ctx);
	return sp[0].o;
	}
label_3:;
	{
	LINE_NUMBER(3575);
	clinit_java_math_BigInteger(ctx);
	sp[0].o = (jobject)SF_java_math_BigInteger_TEN;
	sp[0].o = (jobject)((func_java_math_BigInteger_pow_int_R_java_math_BigInteger) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_math_BigInteger_pow_int_R_java_math_BigInteger])(ctx, sp[0].o, (frame[0].i));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject SM_java_math_BigDecimal_expandBigIntegerTenPowers_int_R_java_math_BigInteger(jcontext ctx, jint param0) {
	jtype frame[12];
	auto stack = &frame[7];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/math/BigDecimal:expandBigIntegerTenPowers", 12 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_math_BigDecimal(ctx);
	frame[0].i = param0;
	{
	LINE_NUMBER(3587);
	sp[0].o = ((jobject) &class_java_math_BigDecimal);
	frame[1].o = sp[0].o;
	monitorEnter(ctx, sp[0].o);
	}
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(3588);
	clinit_java_math_BigDecimal(ctx);
	sp[0].o = (jobject)SF_java_math_BigDecimal_BIG_TEN_POWERS_TABLE;
	frame[2].o = sp[0].o;
	LINE_NUMBER(3589);
	frame[3].i = (((jarray) nullCheck(ctx, (frame[2].o)))->length);
	LINE_NUMBER(3592);
	if ((frame[3].i) > (frame[0].i)) goto label_9;
	}
	{
	LINE_NUMBER(3593);
	frame[4].i = ((frame[3].i) << (jint(1)));
	}
label_11:;
	{
	LINE_NUMBER(3594);
	if ((frame[4].i) > (frame[0].i)) goto label_12;
	}
	{
	LINE_NUMBER(3595);
	frame[4].i = ((frame[4].i) << (jint(1)));
	goto label_11;
	}
label_12:;
	{
	LINE_NUMBER(3596);
	sp[0].o = (jobject)SM_java_util_Arrays_copyOf_Array1_java_lang_Object_int_R_Array1_java_lang_Object(ctx, (frame[2].o), (frame[4].i));
	frame[2].o = (checkCast(ctx, getArrayClass(&class_java_math_BigInteger, 1), sp[0].o));
	LINE_NUMBER(3597);
	frame[5].i = (frame[3].i);
	}
label_15:;
	{
	if ((frame[5].i) >= (frame[4].i)) goto label_16;
	}
	{
	LINE_NUMBER(3598);
	sp[0].o = frame[2].o;
	jint temp0 = frame[5].i;
	sp[1].o = (jobject)ARRAY_ACCESS(jobject, (frame[2].o), ((frame[5].i) - (jint(1))));
	clinit_java_math_BigInteger(ctx);
	sp[2].o = (jobject)SF_java_math_BigInteger_TEN;
	sp[1].o = (jobject)((func_java_math_BigInteger_multiply_java_math_BigInteger_R_java_math_BigInteger) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_math_BigInteger_multiply_java_math_BigInteger_R_java_math_BigInteger])(ctx, sp[1].o, sp[2].o);
	ARRAY_ACCESS(jobject, sp[0].o, temp0) = sp[1].o;
	LINE_NUMBER(3597);
	INST_IINC(5, 1);
	goto label_15;
	}
label_16:;
	{
	LINE_NUMBER(3603);
	clinit_java_math_BigDecimal(ctx);
	SF_java_math_BigDecimal_BIG_TEN_POWERS_TABLE = (frame[2].o);
	}
label_9:;
	{
	LINE_NUMBER(3605);
	sp[0].o = (jobject)ARRAY_ACCESS(jobject, (frame[2].o), (frame[0].i));
	monitorExit(ctx, (frame[1].o));
	sp += 1;
	}
	popExceptionFrame(frameRef);
	popStackFrame(ctx);
	INST_ARETURN();
label_2:;
label_5: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	sp -= 1;
	LINE_NUMBER(3606);
	frame[6].o = sp[0].o;
	monitorExit(ctx, (frame[1].o));
	}
	popExceptionFrame(frameRef);
	INST_ALOAD(6);
	INST_ATHROW();
	
	popStackFrame(ctx);
}

jlong SM_java_math_BigDecimal_longMultiplyPowerTen_long_int_R_long(jcontext ctx, jlong param0, jint param1) {
	jtype frame[11];
	auto stack = &frame[7];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/math/BigDecimal:longMultiplyPowerTen", 11 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_math_BigDecimal(ctx);
	frame[0].l = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(3685);
	if ((longCompare((frame[0].l), (jlong(0)))) == 0) goto label_1;
	}
	INST_ILOAD(2);
	if ((--sp)->i > 0) goto label_2;
label_1:;
	{
	LINE_NUMBER(3686);
	popStackFrame(ctx);
	return (frame[0].l);
	}
label_2:;
	{
	LINE_NUMBER(3687);
	clinit_java_math_BigDecimal(ctx);
	sp[0].o = (jobject)SF_java_math_BigDecimal_LONG_TEN_POWERS_TABLE;
	frame[3].o = sp[0].o;
	LINE_NUMBER(3688);
	clinit_java_math_BigDecimal(ctx);
	sp[0].o = (jobject)SF_java_math_BigDecimal_THRESHOLDS_TABLE;
	frame[4].o = sp[0].o;
	LINE_NUMBER(3689);
	if ((frame[2].i) >= (((jarray) nullCheck(ctx, (frame[3].o)))->length)) goto label_5;
	}
	{
	if ((frame[2].i) >= (((jarray) nullCheck(ctx, (frame[4].o)))->length)) goto label_5;
	}
	{
	LINE_NUMBER(3690);
	frame[5].l = ((jlong)ARRAY_ACCESS(jlong, (frame[3].o), (frame[2].i)));
	LINE_NUMBER(3691);
	if ((longCompare((frame[0].l), (jlong(1)))) != 0) goto label_8;
	}
	{
	LINE_NUMBER(3692);
	popStackFrame(ctx);
	return (frame[5].l);
	}
label_8:;
	{
	LINE_NUMBER(3693);
	jlong temp0 = (jlong)SM_java_lang_Math_abs_long_R_long(ctx, (frame[0].l));
	if ((longCompare(temp0, ((jlong)ARRAY_ACCESS(jlong, (frame[4].o), (frame[2].i))))) > 0) goto label_5;
	}
	{
	LINE_NUMBER(3694);
	popStackFrame(ctx);
	return ((frame[0].l) * (frame[5].l));
	}
label_5:;
	{
	LINE_NUMBER(3696);
	popStackFrame(ctx);
	return (jlong(-9223372036854775807ll));
	}

	popStackFrame(ctx);
}

jobject M_java_math_BigDecimal_bigMultiplyPowerTen_int_R_java_math_BigInteger(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/math/BigDecimal:bigMultiplyPowerTen", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(3704);
	if ((frame[1].i) > 0) goto label_1;
	}
	{
	LINE_NUMBER(3705);
	sp[0].o = (jobject)M_java_math_BigDecimal_inflated_R_java_math_BigInteger(ctx, (frame[0].o));
	popStackFrame(ctx);
	return sp[0].o;
	}
label_1:;
	{
	LINE_NUMBER(3707);
	if ((longCompare(((jlong)((java_math_BigDecimal *) NULL_CHECK((frame[0].o)))->F_intCompact), (jlong(-9223372036854775807ll)))) == 0) goto label_3;
	}
	{
	LINE_NUMBER(3708);
	sp[0].o = (jobject)SM_java_math_BigDecimal_bigTenToThe_int_R_java_math_BigInteger(ctx, (frame[1].i));
	sp[0].o = (jobject)((func_java_math_BigInteger_multiply_long_R_java_math_BigInteger) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_math_BigInteger_multiply_long_R_java_math_BigInteger])(ctx, sp[0].o, ((jlong)((java_math_BigDecimal *) NULL_CHECK((frame[0].o)))->F_intCompact));
	popStackFrame(ctx);
	return sp[0].o;
	}
label_3:;
	{
	LINE_NUMBER(3710);
	sp[0].o = (jobject)((java_math_BigDecimal *) NULL_CHECK((frame[0].o)))->F_intVal;
	sp[1].o = (jobject)SM_java_math_BigDecimal_bigTenToThe_int_R_java_math_BigInteger(ctx, (frame[1].i));
	sp[0].o = (jobject)((func_java_math_BigInteger_multiply_java_math_BigInteger_R_java_math_BigInteger) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_math_BigInteger_multiply_java_math_BigInteger_R_java_math_BigInteger])(ctx, sp[0].o, sp[1].o);
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_java_math_BigDecimal_inflated_R_java_math_BigInteger(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/math/BigDecimal:inflated", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(3718);
	sp[0].o = (jobject)((java_math_BigDecimal *) NULL_CHECK((frame[0].o)))->F_intVal;
	if (sp[0].o != nullptr) goto label_1;
	}
	{
	LINE_NUMBER(3719);
	sp[0].o = (jobject)SM_java_math_BigInteger_valueOf_long_R_java_math_BigInteger(ctx, ((jlong)((java_math_BigDecimal *) NULL_CHECK((frame[0].o)))->F_intCompact));
	popStackFrame(ctx);
	return sp[0].o;
	}
label_1:;
	{
	LINE_NUMBER(3721);
	sp[0].o = (jobject)((java_math_BigDecimal *) NULL_CHECK((frame[0].o)))->F_intVal;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void SM_java_math_BigDecimal_matchScale_Array1_java_math_BigDecimal(jcontext ctx, jobject param0) {
	jtype frame[6];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/math/BigDecimal:matchScale", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_math_BigDecimal(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(3738);
	if (((jint)((java_math_BigDecimal *) NULL_CHECK(((jobject)ARRAY_ACCESS(jobject, (frame[0].o), (jint(0))))))->F_scale) != ((jint)((java_math_BigDecimal *) NULL_CHECK(((jobject)ARRAY_ACCESS(jobject, (frame[0].o), (jint(1))))))->F_scale)) goto label_1;
	}
	LINE_NUMBER(3739);
	popStackFrame(ctx);
	INST_RETURN();
label_1:;
	{
	LINE_NUMBER(3740);
	if (((jint)((java_math_BigDecimal *) NULL_CHECK(((jobject)ARRAY_ACCESS(jobject, (frame[0].o), (jint(0))))))->F_scale) >= ((jint)((java_math_BigDecimal *) NULL_CHECK(((jobject)ARRAY_ACCESS(jobject, (frame[0].o), (jint(1))))))->F_scale)) goto label_3;
	}
	{
	LINE_NUMBER(3741);
	sp[0].o = frame[0].o;
	jint temp0 = jint(0);
	sp[1].o = (jobject)((func_java_math_BigDecimal_setScale_int_int_R_java_math_BigDecimal) ((void **) nullCheck(ctx, ((jobject)ARRAY_ACCESS(jobject, (frame[0].o), (jint(0)))))->vtable)[VTABLE_java_math_BigDecimal_setScale_int_int_R_java_math_BigDecimal])(ctx, ((jobject)ARRAY_ACCESS(jobject, (frame[0].o), (jint(0)))), ((jint)((java_math_BigDecimal *) NULL_CHECK(((jobject)ARRAY_ACCESS(jobject, (frame[0].o), (jint(1))))))->F_scale), (7));
	ARRAY_ACCESS(jobject, sp[0].o, temp0) = sp[1].o;
	goto label_5;
	}
label_3:;
	{
	LINE_NUMBER(3742);
	if (((jint)((java_math_BigDecimal *) NULL_CHECK(((jobject)ARRAY_ACCESS(jobject, (frame[0].o), (jint(1))))))->F_scale) >= ((jint)((java_math_BigDecimal *) NULL_CHECK(((jobject)ARRAY_ACCESS(jobject, (frame[0].o), (jint(0))))))->F_scale)) goto label_5;
	}
	{
	LINE_NUMBER(3743);
	sp[0].o = frame[0].o;
	jint temp0 = jint(1);
	sp[1].o = (jobject)((func_java_math_BigDecimal_setScale_int_int_R_java_math_BigDecimal) ((void **) nullCheck(ctx, ((jobject)ARRAY_ACCESS(jobject, (frame[0].o), (jint(1)))))->vtable)[VTABLE_java_math_BigDecimal_setScale_int_int_R_java_math_BigDecimal])(ctx, ((jobject)ARRAY_ACCESS(jobject, (frame[0].o), (jint(1)))), ((jint)((java_math_BigDecimal *) NULL_CHECK(((jobject)ARRAY_ACCESS(jobject, (frame[0].o), (jint(0))))))->F_scale), (7));
	ARRAY_ACCESS(jobject, sp[0].o, temp0) = sp[1].o;
	}
label_5:;
	LINE_NUMBER(3745);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jint SM_java_math_BigDecimal_longDigitLength_long_R_int(jcontext ctx, jlong param0) {
	jtype frame[8];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/math/BigDecimal:longDigitLength", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_math_BigDecimal(ctx);
	frame[0].l = param0;
	{
	LINE_NUMBER(3801);
	if ((clinit_java_math_BigDecimal(ctx), (jint)SF_java_math_BigDecimal_$assertionsDisabled) != 0) goto label_1;
	}
	{
	if ((longCompare((frame[0].l), (jlong(-9223372036854775807ll)))) != 0) goto label_1;
	}
	{
	clinit_java_lang_AssertionError(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_AssertionError);
	init_java_lang_AssertionError(ctx, sp[0].o);
	throwException(ctx, sp[0].o);	}
label_1:;
	{
	LINE_NUMBER(3802);
	if ((longCompare((frame[0].l), (jlong(0)))) >= 0) goto label_2;
	}
	{
	LINE_NUMBER(3803);
	frame[0].l = (-(frame[0].l));
	}
label_2:;
	{
	LINE_NUMBER(3804);
	if ((longCompare((frame[0].l), (jlong(10ll)))) >= 0) goto label_4;
	}
	{
	LINE_NUMBER(3805);
	popStackFrame(ctx);
	return (jint(1));
	}
label_4:;
	{
	LINE_NUMBER(3806);
	jint temp0 = 64;
	jint temp1 = (jint)SM_java_lang_Long_numberOfLeadingZeros_long_R_int(ctx, (frame[0].l));
	frame[2].i = (bit_cast<jint>(bit_cast<uint32_t>((((temp0 - temp1) + (jint(1))) * (1233))) >> (12)));
	LINE_NUMBER(3807);
	clinit_java_math_BigDecimal(ctx);
	sp[0].o = (jobject)SF_java_math_BigDecimal_LONG_TEN_POWERS_TABLE;
	frame[3].o = sp[0].o;
	LINE_NUMBER(3809);
	if ((frame[2].i) >= (((jarray) nullCheck(ctx, (frame[3].o)))->length)) goto label_8;
	}
	{
	if ((longCompare((frame[0].l), ((jlong)ARRAY_ACCESS(jlong, (frame[3].o), (frame[2].i))))) >= 0) goto label_9;
	}
label_8:;
	INST_ILOAD(2);
	goto label_10;
label_9:;
	{
	jint temp0 = (frame[2].i) + (jint(1));
	sp[0].i = temp0;
	sp += 1;
	}
label_10:;
	popStackFrame(ctx);
	INST_IRETURN();

	popStackFrame(ctx);
}

jint SM_java_math_BigDecimal_bigDigitLength_java_math_BigInteger_R_int(jcontext ctx, jobject param0) {
	jtype frame[6];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/math/BigDecimal:bigDigitLength", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_math_BigDecimal(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(3825);
	if (((jint)((java_math_BigInteger *) NULL_CHECK((frame[0].o)))->F_signum) != 0) goto label_1;
	}
	{
	LINE_NUMBER(3826);
	popStackFrame(ctx);
	return (jint(1));
	}
label_1:;
	{
	LINE_NUMBER(3827);
	jint temp0 = (jint)((func_java_math_BigInteger_bitLength_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_math_BigInteger_bitLength_R_int])(ctx, (frame[0].o));
	frame[1].i = (jint((bit_cast<jlong>(bit_cast<uint64_t>((((jlong(temp0)) + (jlong(1))) * (jlong(646456993ll)))) >> (31)))));
	LINE_NUMBER(3828);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)SM_java_math_BigDecimal_bigTenToThe_int_R_java_math_BigInteger(ctx, (frame[1].i));
	jint temp1 = (jint)((func_java_math_BigInteger_compareMagnitude_java_math_BigInteger_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_math_BigInteger_compareMagnitude_java_math_BigInteger_R_int])(ctx, sp[0].o, sp[1].o);
	if (temp1 >= 0) goto label_4;
	}
	INST_ILOAD(1);
	goto label_5;
label_4:;
	{
	jint temp0 = (frame[1].i) + (jint(1));
	sp[0].i = temp0;
	sp += 1;
	}
label_5:;
	popStackFrame(ctx);
	INST_IRETURN();

	popStackFrame(ctx);
}

jint M_java_math_BigDecimal_checkScale_long_R_int(jcontext ctx, jobject self, jlong param0) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/math/BigDecimal:checkScale", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].l = param0;
	{
	LINE_NUMBER(3843);
	frame[3].i = (jint((frame[1].l)));
	LINE_NUMBER(3844);
	if ((longCompare((jlong((frame[3].i))), (frame[1].l))) == 0) goto label_2;
	}
	{
	LINE_NUMBER(3845);
	if ((longCompare((frame[1].l), (jlong(2147483647ll)))) <= 0) goto label_4;
	}
	(sp++)->i = jint(2147483647);
	goto label_5;
label_4:;
	(sp++)->i = bit_cast<jint>(0x80000000);
label_5:;
	{
	sp -= 1;
	frame[3].i = sp[0].i;
	LINE_NUMBER(3847);
	if ((longCompare(((jlong)((java_math_BigDecimal *) NULL_CHECK((frame[0].o)))->F_intCompact), (jlong(0)))) == 0) goto label_2;
	}
	{
	sp[0].o = (jobject)((java_math_BigDecimal *) NULL_CHECK((frame[0].o)))->F_intVal;
	frame[4].o = sp[0].o;
	if (sp[0].o == nullptr) goto label_8;
	}
	{
	sp[0].o = frame[4].o;
	LINE_NUMBER(3848);
	jint temp0 = (jint)((func_java_math_BigInteger_signum_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_math_BigInteger_signum_R_int])(ctx, sp[0].o);
	if (temp0 == 0) goto label_2;
	}
label_8:;
	{
	LINE_NUMBER(3849);
	clinit_java_lang_ArithmeticException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_ArithmeticException);
	sp[1].o = sp[0].o;
	sp += 2;
	if ((frame[3].i) <= 0) goto label_10;
	}
	(sp++)->o = ((jobject) createStringLiteral(ctx, u8"Underflow"_j));
	goto label_11;
label_10:;
	(sp++)->o = ((jobject) createStringLiteral(ctx, u8"Overflow"_j));
label_11:;
	POP_N(2); // Pop method args
	init_java_lang_ArithmeticException_java_lang_String(ctx, sp[0].o, sp[1].o);
	INST_ATHROW();
	label_2:;
	{
	LINE_NUMBER(3851);
	popStackFrame(ctx);
	return (frame[3].i);
	}

	popStackFrame(ctx);
}

jlong SM_java_math_BigDecimal_compactValFor_java_math_BigInteger_R_long(jcontext ctx, jobject param0) {
	jtype frame[11];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/math/BigDecimal:compactValFor", 11 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_math_BigDecimal(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(3860);
	sp[0].o = (jobject)((java_math_BigInteger *) NULL_CHECK((frame[0].o)))->F_mag;
	frame[1].o = sp[0].o;
	LINE_NUMBER(3861);
	frame[2].i = (((jarray) nullCheck(ctx, (frame[1].o)))->length);
	LINE_NUMBER(3862);
	if ((frame[2].i) != 0) goto label_3;
	}
	{
	LINE_NUMBER(3863);
	popStackFrame(ctx);
	return (jlong(0));
	}
label_3:;
	{
	LINE_NUMBER(3864);
	frame[3].i = ((jint)ARRAY_ACCESS(jint, (frame[1].o), (jint(0))));
	LINE_NUMBER(3865);
	if ((frame[2].i) > (jint(2))) goto label_6;
	}
	{
	if ((frame[2].i) != (jint(2))) goto label_7;
	}
	INST_ILOAD(3);
	if ((--sp)->i >= 0) goto label_7;
label_6:;
	{
	LINE_NUMBER(3866);
	popStackFrame(ctx);
	return (jlong(-9223372036854775807ll));
	}
label_7:;
	{
	LINE_NUMBER(3868);
	if ((frame[2].i) != (jint(2))) goto label_8;
	}
	{
	LINE_NUMBER(3869);
	jlong temp0 = ((jlong(((jint)ARRAY_ACCESS(jint, (frame[1].o), (jint(1)))))) & (jlong(4294967295ll))) + ((jlong((frame[3].i))) << (32));
	sp[0].l = temp0;
	sp += 1;
	goto label_10;
	}
label_8:;
	{
	LINE_NUMBER(3870);
	jlong temp0 = (jlong((frame[3].i))) & (jlong(4294967295ll));
	sp[0].l = temp0;
	sp += 1;
	}
label_10:;
	{
	sp -= 1;
	frame[4].l = sp[0].l;
	LINE_NUMBER(3871);
	if (((jint)((java_math_BigInteger *) NULL_CHECK((frame[0].o)))->F_signum) >= 0) goto label_12;
	}
	{
	jlong temp0 = -(frame[4].l);
	sp[0].l = temp0;
	sp += 1;
	goto label_13;
	}
label_12:;
	INST_LLOAD(4);
label_13:;
	popStackFrame(ctx);
	INST_LRETURN();

	popStackFrame(ctx);
}

jint SM_java_math_BigDecimal_longCompareMagnitude_long_long_R_int(jcontext ctx, jlong param0, jlong param1) {
	jtype frame[8];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/math/BigDecimal:longCompareMagnitude", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_math_BigDecimal(ctx);
	frame[0].l = param0;
	frame[2].l = param1;
	{
	LINE_NUMBER(3875);
	if ((longCompare((frame[0].l), (jlong(0)))) >= 0) goto label_1;
	}
	{
	LINE_NUMBER(3876);
	frame[0].l = (-(frame[0].l));
	}
label_1:;
	{
	LINE_NUMBER(3877);
	if ((longCompare((frame[2].l), (jlong(0)))) >= 0) goto label_3;
	}
	{
	LINE_NUMBER(3878);
	frame[2].l = (-(frame[2].l));
	}
label_3:;
	{
	LINE_NUMBER(3879);
	if ((longCompare((frame[0].l), (frame[2].l))) >= 0) goto label_5;
	}
	INST_ICONST(-1);
	goto label_6;
label_5:;
	{
	if ((longCompare((frame[0].l), (frame[2].l))) != 0) goto label_7;
	}
	INST_ICONST(0);
	goto label_6;
label_7:;
	INST_ICONST(1);
label_6:;
	popStackFrame(ctx);
	INST_IRETURN();

	popStackFrame(ctx);
}

jint SM_java_math_BigDecimal_saturateLong_long_R_int(jcontext ctx, jlong param0) {
	jtype frame[7];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/math/BigDecimal:saturateLong", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_math_BigDecimal(ctx);
	frame[0].l = param0;
	{
	LINE_NUMBER(3883);
	frame[2].i = (jint((frame[0].l)));
	LINE_NUMBER(3884);
	if ((longCompare((frame[0].l), (jlong((frame[2].i))))) != 0) goto label_2;
	}
	INST_ILOAD(2);
	goto label_3;
label_2:;
	{
	if ((longCompare((frame[0].l), (jlong(0)))) >= 0) goto label_4;
	}
	(sp++)->i = bit_cast<jint>(0x80000000);
	goto label_3;
label_4:;
	(sp++)->i = jint(2147483647);
label_3:;
	popStackFrame(ctx);
	INST_IRETURN();

	popStackFrame(ctx);
}

void SM_java_math_BigDecimal_print_java_lang_String_java_math_BigDecimal(jcontext ctx, jobject param0, jobject param1) {
	jtype frame[2];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/math/BigDecimal:print", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_math_BigDecimal(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	LINE_NUMBER(3897);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jobject M_java_math_BigDecimal_audit_R_java_math_BigDecimal(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/math/BigDecimal:audit", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(3919);
	if ((longCompare(((jlong)((java_math_BigDecimal *) NULL_CHECK((frame[0].o)))->F_intCompact), (jlong(-9223372036854775807ll)))) != 0) goto label_1;
	}
	{
	LINE_NUMBER(3920);
	sp[0].o = (jobject)((java_math_BigDecimal *) NULL_CHECK((frame[0].o)))->F_intVal;
	if (sp[0].o != nullptr) goto label_3;
	}
	{
	LINE_NUMBER(3921);
	SM_java_math_BigDecimal_print_java_lang_String_java_math_BigDecimal(ctx, (((jobject) createStringLiteral(ctx, u8"audit"_j))), (frame[0].o));
	LINE_NUMBER(3922);
	clinit_java_lang_AssertionError(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_AssertionError);
	init_java_lang_AssertionError_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"null intVal"_j))));
	throwException(ctx, sp[0].o);	}
label_3:;
	{
	LINE_NUMBER(3925);
	if (((jint)((java_math_BigDecimal *) NULL_CHECK((frame[0].o)))->F_precision) <= 0) goto label_6;
	}
	{
	jint temp0 = (jint)((java_math_BigDecimal *) NULL_CHECK((frame[0].o)))->F_precision;
	sp[0].o = (jobject)((java_math_BigDecimal *) NULL_CHECK((frame[0].o)))->F_intVal;
	jint temp1 = (jint)SM_java_math_BigDecimal_bigDigitLength_java_math_BigInteger_R_int(ctx, sp[0].o);
	if (temp0 == temp1) goto label_6;
	}
	{
	LINE_NUMBER(3926);
	SM_java_math_BigDecimal_print_java_lang_String_java_math_BigDecimal(ctx, (((jobject) createStringLiteral(ctx, u8"audit"_j))), (frame[0].o));
	LINE_NUMBER(3927);
	clinit_java_lang_AssertionError(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_AssertionError);
	init_java_lang_AssertionError_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"precision mismatch"_j))));
	throwException(ctx, sp[0].o);	}
label_1:;
	{
	LINE_NUMBER(3930);
	sp[0].o = (jobject)((java_math_BigDecimal *) NULL_CHECK((frame[0].o)))->F_intVal;
	if (sp[0].o == nullptr) goto label_9;
	}
	{
	LINE_NUMBER(3931);
	sp[0].o = (jobject)((java_math_BigDecimal *) NULL_CHECK((frame[0].o)))->F_intVal;
	jlong temp0 = (jlong)((func_java_math_BigInteger_longValue_R_long) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_math_BigInteger_longValue_R_long])(ctx, sp[0].o);
	frame[1].l = temp0;
	LINE_NUMBER(3932);
	if ((longCompare((frame[1].l), ((jlong)((java_math_BigDecimal *) NULL_CHECK((frame[0].o)))->F_intCompact))) == 0) goto label_9;
	}
	{
	LINE_NUMBER(3933);
	SM_java_math_BigDecimal_print_java_lang_String_java_math_BigDecimal(ctx, (((jobject) createStringLiteral(ctx, u8"audit"_j))), (frame[0].o));
	LINE_NUMBER(3934);
	clinit_java_lang_AssertionError(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_AssertionError);
	clinit_java_lang_StringBuilder(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[1].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"Inconsistent state, intCompact="_j))));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_long_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_long_R_java_lang_StringBuilder])(ctx, sp[1].o, ((jlong)((java_math_BigDecimal *) NULL_CHECK((frame[0].o)))->F_intCompact));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"\t intVal="_j))));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_long_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_long_R_java_lang_StringBuilder])(ctx, sp[1].o, (frame[1].l));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[1].o);
	init_java_lang_AssertionError_java_lang_String(ctx, sp[0].o, sp[1].o);
	throwException(ctx, sp[0].o);	}
label_9:;
	{
	LINE_NUMBER(3939);
	if (((jint)((java_math_BigDecimal *) NULL_CHECK((frame[0].o)))->F_precision) <= 0) goto label_6;
	}
	{
	jint temp0 = (jint)((java_math_BigDecimal *) NULL_CHECK((frame[0].o)))->F_precision;
	jint temp1 = (jint)SM_java_math_BigDecimal_longDigitLength_long_R_int(ctx, ((jlong)((java_math_BigDecimal *) NULL_CHECK((frame[0].o)))->F_intCompact));
	if (temp0 == temp1) goto label_6;
	}
	{
	LINE_NUMBER(3940);
	SM_java_math_BigDecimal_print_java_lang_String_java_math_BigDecimal(ctx, (((jobject) createStringLiteral(ctx, u8"audit"_j))), (frame[0].o));
	LINE_NUMBER(3941);
	clinit_java_lang_AssertionError(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_AssertionError);
	init_java_lang_AssertionError_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"precision mismatch"_j))));
	throwException(ctx, sp[0].o);	}
label_6:;
	{
	LINE_NUMBER(3944);
	popStackFrame(ctx);
	return (frame[0].o);
	}

	popStackFrame(ctx);
}

jint SM_java_math_BigDecimal_checkScaleNonZero_long_R_int(jcontext ctx, jlong param0) {
	jtype frame[7];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/math/BigDecimal:checkScaleNonZero", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_math_BigDecimal(ctx);
	frame[0].l = param0;
	{
	LINE_NUMBER(3949);
	frame[2].i = (jint((frame[0].l)));
	LINE_NUMBER(3950);
	if ((longCompare((jlong((frame[2].i))), (frame[0].l))) == 0) goto label_2;
	}
	{
	LINE_NUMBER(3951);
	clinit_java_lang_ArithmeticException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_ArithmeticException);
	sp[1].o = sp[0].o;
	sp += 2;
	if ((frame[2].i) <= 0) goto label_4;
	}
	(sp++)->o = ((jobject) createStringLiteral(ctx, u8"Underflow"_j));
	goto label_5;
label_4:;
	(sp++)->o = ((jobject) createStringLiteral(ctx, u8"Overflow"_j));
label_5:;
	POP_N(2); // Pop method args
	init_java_lang_ArithmeticException_java_lang_String(ctx, sp[0].o, sp[1].o);
	INST_ATHROW();
	label_2:;
	{
	LINE_NUMBER(3953);
	popStackFrame(ctx);
	return (frame[2].i);
	}

	popStackFrame(ctx);
}

jint SM_java_math_BigDecimal_checkScale_long_long_R_int(jcontext ctx, jlong param0, jlong param1) {
	jtype frame[9];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/math/BigDecimal:checkScale", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_math_BigDecimal(ctx);
	frame[0].l = param0;
	frame[2].l = param1;
	{
	LINE_NUMBER(3957);
	frame[4].i = (jint((frame[2].l)));
	LINE_NUMBER(3958);
	if ((longCompare((jlong((frame[4].i))), (frame[2].l))) == 0) goto label_2;
	}
	{
	LINE_NUMBER(3959);
	if ((longCompare((frame[2].l), (jlong(2147483647ll)))) <= 0) goto label_4;
	}
	(sp++)->i = jint(2147483647);
	goto label_5;
label_4:;
	(sp++)->i = bit_cast<jint>(0x80000000);
label_5:;
	{
	sp -= 1;
	frame[4].i = sp[0].i;
	LINE_NUMBER(3960);
	if ((longCompare((frame[0].l), (jlong(0)))) == 0) goto label_2;
	}
	{
	LINE_NUMBER(3961);
	clinit_java_lang_ArithmeticException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_ArithmeticException);
	sp[1].o = sp[0].o;
	sp += 2;
	if ((frame[4].i) <= 0) goto label_8;
	}
	(sp++)->o = ((jobject) createStringLiteral(ctx, u8"Underflow"_j));
	goto label_9;
label_8:;
	(sp++)->o = ((jobject) createStringLiteral(ctx, u8"Overflow"_j));
label_9:;
	POP_N(2); // Pop method args
	init_java_lang_ArithmeticException_java_lang_String(ctx, sp[0].o, sp[1].o);
	INST_ATHROW();
	label_2:;
	{
	LINE_NUMBER(3963);
	popStackFrame(ctx);
	return (frame[4].i);
	}

	popStackFrame(ctx);
}

jint SM_java_math_BigDecimal_checkScale_java_math_BigInteger_long_R_int(jcontext ctx, jobject param0, jlong param1) {
	jtype frame[8];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/math/BigDecimal:checkScale", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_math_BigDecimal(ctx);
	frame[0].o = param0;
	frame[1].l = param1;
	{
	LINE_NUMBER(3967);
	frame[3].i = (jint((frame[1].l)));
	LINE_NUMBER(3968);
	if ((longCompare((jlong((frame[3].i))), (frame[1].l))) == 0) goto label_2;
	}
	{
	LINE_NUMBER(3969);
	if ((longCompare((frame[1].l), (jlong(2147483647ll)))) <= 0) goto label_4;
	}
	(sp++)->i = jint(2147483647);
	goto label_5;
label_4:;
	(sp++)->i = bit_cast<jint>(0x80000000);
label_5:;
	{
	sp -= 1;
	frame[3].i = sp[0].i;
	LINE_NUMBER(3970);
	jint temp0 = (jint)((func_java_math_BigInteger_signum_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_math_BigInteger_signum_R_int])(ctx, (frame[0].o));
	if (temp0 == 0) goto label_2;
	}
	{
	LINE_NUMBER(3971);
	clinit_java_lang_ArithmeticException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_ArithmeticException);
	sp[1].o = sp[0].o;
	sp += 2;
	if ((frame[3].i) <= 0) goto label_8;
	}
	(sp++)->o = ((jobject) createStringLiteral(ctx, u8"Underflow"_j));
	goto label_9;
label_8:;
	(sp++)->o = ((jobject) createStringLiteral(ctx, u8"Overflow"_j));
label_9:;
	POP_N(2); // Pop method args
	init_java_lang_ArithmeticException_java_lang_String(ctx, sp[0].o, sp[1].o);
	INST_ATHROW();
	label_2:;
	{
	LINE_NUMBER(3973);
	popStackFrame(ctx);
	return (frame[3].i);
	}

	popStackFrame(ctx);
}

jobject SM_java_math_BigDecimal_doRound_java_math_BigDecimal_java_math_MathContext_R_java_math_BigDecimal(jcontext ctx, jobject param0, jobject param1) {
	jtype frame[18];
	auto stack = &frame[11];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/math/BigDecimal:doRound", 18 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_math_BigDecimal(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	{
	LINE_NUMBER(3990);
	frame[2].i = ((jint)((java_math_MathContext *) NULL_CHECK((frame[1].o)))->F_precision);
	LINE_NUMBER(3991);
	frame[3].i = (jint(0));
	LINE_NUMBER(3992);
	if ((frame[2].i) <= 0) goto label_3;
	}
	{
	LINE_NUMBER(3993);
	sp[0].o = (jobject)((java_math_BigDecimal *) NULL_CHECK((frame[0].o)))->F_intVal;
	frame[4].o = sp[0].o;
	LINE_NUMBER(3994);
	frame[5].l = ((jlong)((java_math_BigDecimal *) NULL_CHECK((frame[0].o)))->F_intCompact);
	LINE_NUMBER(3995);
	frame[7].i = ((jint)((java_math_BigDecimal *) NULL_CHECK((frame[0].o)))->F_scale);
	LINE_NUMBER(3996);
	jint temp0 = (jint)((func_java_math_BigDecimal_precision_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_math_BigDecimal_precision_R_int])(ctx, (frame[0].o));
	frame[8].i = temp0;
	LINE_NUMBER(3997);
	sp[0].o = (jobject)((java_math_MathContext *) NULL_CHECK((frame[1].o)))->F_roundingMode;
	frame[9].i = ((jint)((java_math_RoundingMode *) NULL_CHECK(sp[0].o))->F_oldMode);
	LINE_NUMBER(3999);
	if ((longCompare((frame[5].l), (jlong(-9223372036854775807ll)))) != 0) goto label_10;
	}
	{
	LINE_NUMBER(4000);
	frame[10].i = ((frame[8].i) - (frame[2].i));
	}
label_12:;
	{
	LINE_NUMBER(4001);
	if ((frame[10].i) <= 0) goto label_10;
	}
	{
	LINE_NUMBER(4002);
	jint temp0 = (jint)SM_java_math_BigDecimal_checkScaleNonZero_long_R_int(ctx, ((jlong((frame[7].i))) - (jlong((frame[10].i)))));
	frame[7].i = temp0;
	LINE_NUMBER(4003);
	sp[0].o = (jobject)SM_java_math_BigDecimal_divideAndRoundByTenPow_java_math_BigInteger_int_int_R_java_math_BigInteger(ctx, (frame[4].o), (frame[10].i), (frame[9].i));
	frame[4].o = sp[0].o;
	LINE_NUMBER(4004);
	frame[3].i = (jint(1));
	LINE_NUMBER(4005);
	jlong temp1 = (jlong)SM_java_math_BigDecimal_compactValFor_java_math_BigInteger_R_long(ctx, (frame[4].o));
	frame[5].l = temp1;
	LINE_NUMBER(4006);
	if ((longCompare((frame[5].l), (jlong(-9223372036854775807ll)))) == 0) goto label_18;
	}
	{
	LINE_NUMBER(4007);
	jint temp0 = (jint)SM_java_math_BigDecimal_longDigitLength_long_R_int(ctx, (frame[5].l));
	frame[8].i = temp0;
	LINE_NUMBER(4008);
	goto label_10;
	}
label_18:;
	{
	LINE_NUMBER(4010);
	jint temp0 = (jint)SM_java_math_BigDecimal_bigDigitLength_java_math_BigInteger_R_int(ctx, (frame[4].o));
	frame[8].i = temp0;
	LINE_NUMBER(4011);
	frame[10].i = ((frame[8].i) - (frame[2].i));
	goto label_12;
	}
label_10:;
	{
	LINE_NUMBER(4014);
	if ((longCompare((frame[5].l), (jlong(-9223372036854775807ll)))) == 0) goto label_22;
	}
	{
	LINE_NUMBER(4015);
	frame[10].i = ((frame[8].i) - (frame[2].i));
	}
label_24:;
	{
	LINE_NUMBER(4016);
	if ((frame[10].i) <= 0) goto label_22;
	}
	{
	LINE_NUMBER(4017);
	jint temp0 = (jint)SM_java_math_BigDecimal_checkScaleNonZero_long_R_int(ctx, ((jlong((frame[7].i))) - (jlong((frame[10].i)))));
	frame[7].i = temp0;
	LINE_NUMBER(4018);
	jlong temp1 = frame[5].l;
	clinit_java_math_BigDecimal(ctx);
	sp[0].o = (jobject)SF_java_math_BigDecimal_LONG_TEN_POWERS_TABLE;
	jlong temp2 = (jlong)ARRAY_ACCESS(jlong, sp[0].o, (frame[10].i));
	sp[0].o = (jobject)((java_math_MathContext *) NULL_CHECK((frame[1].o)))->F_roundingMode;
	jlong temp3 = (jlong)SM_java_math_BigDecimal_divideAndRound_long_long_int_R_long(ctx, temp1, temp2, ((jint)((java_math_RoundingMode *) NULL_CHECK(sp[0].o))->F_oldMode));
	frame[5].l = temp3;
	LINE_NUMBER(4019);
	frame[3].i = (jint(1));
	LINE_NUMBER(4020);
	jint temp4 = (jint)SM_java_math_BigDecimal_longDigitLength_long_R_int(ctx, (frame[5].l));
	frame[8].i = temp4;
	LINE_NUMBER(4021);
	frame[10].i = ((frame[8].i) - (frame[2].i));
	LINE_NUMBER(4022);
	frame[4].o = (jobject(nullptr));
	goto label_24;
	}
label_22:;
	{
	LINE_NUMBER(4025);
	if ((frame[3].i) == 0) goto label_31;
	}
	{
	clinit_java_math_BigDecimal(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_math_BigDecimal);
	init_java_math_BigDecimal_java_math_BigInteger_long_int_int(ctx, sp[0].o, (frame[4].o), (frame[5].l), (frame[7].i), (frame[8].i));
	sp += 1;
	goto label_32;
	}
label_31:;
	INST_ALOAD(0);
label_32:;
	popStackFrame(ctx);
	INST_ARETURN();
label_3:;
	{
	LINE_NUMBER(4027);
	popStackFrame(ctx);
	return (frame[0].o);
	}

	popStackFrame(ctx);
}

jobject SM_java_math_BigDecimal_doRound_long_int_java_math_MathContext_R_java_math_BigDecimal(jcontext ctx, jlong param0, jint param1, jobject param2) {
	jtype frame[12];
	auto stack = &frame[7];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/math/BigDecimal:doRound", 12 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_math_BigDecimal(ctx);
	frame[0].l = param0;
	frame[2].i = param1;
	frame[3].o = param2;
	{
	LINE_NUMBER(4035);
	frame[4].i = ((jint)((java_math_MathContext *) NULL_CHECK((frame[3].o)))->F_precision);
	LINE_NUMBER(4036);
	if ((frame[4].i) <= 0) goto label_2;
	}
	{
	if ((frame[4].i) >= (19)) goto label_2;
	}
	{
	LINE_NUMBER(4037);
	jint temp0 = (jint)SM_java_math_BigDecimal_longDigitLength_long_R_int(ctx, (frame[0].l));
	frame[5].i = temp0;
	LINE_NUMBER(4038);
	frame[6].i = ((frame[5].i) - (frame[4].i));
	}
label_5:;
	{
	LINE_NUMBER(4039);
	if ((frame[6].i) <= 0) goto label_6;
	}
	{
	LINE_NUMBER(4040);
	jint temp0 = (jint)SM_java_math_BigDecimal_checkScaleNonZero_long_R_int(ctx, ((jlong((frame[2].i))) - (jlong((frame[6].i)))));
	frame[2].i = temp0;
	LINE_NUMBER(4041);
	jlong temp1 = frame[0].l;
	clinit_java_math_BigDecimal(ctx);
	sp[0].o = (jobject)SF_java_math_BigDecimal_LONG_TEN_POWERS_TABLE;
	jlong temp2 = (jlong)ARRAY_ACCESS(jlong, sp[0].o, (frame[6].i));
	sp[0].o = (jobject)((java_math_MathContext *) NULL_CHECK((frame[3].o)))->F_roundingMode;
	jlong temp3 = (jlong)SM_java_math_BigDecimal_divideAndRound_long_long_int_R_long(ctx, temp1, temp2, ((jint)((java_math_RoundingMode *) NULL_CHECK(sp[0].o))->F_oldMode));
	frame[0].l = temp3;
	LINE_NUMBER(4042);
	jint temp4 = (jint)SM_java_math_BigDecimal_longDigitLength_long_R_int(ctx, (frame[0].l));
	frame[5].i = temp4;
	LINE_NUMBER(4043);
	frame[6].i = ((frame[5].i) - (frame[4].i));
	goto label_5;
	}
label_6:;
	{
	LINE_NUMBER(4045);
	sp[0].o = (jobject)SM_java_math_BigDecimal_valueOf_long_int_int_R_java_math_BigDecimal(ctx, (frame[0].l), (frame[2].i), (frame[5].i));
	popStackFrame(ctx);
	return sp[0].o;
	}
label_2:;
	{
	LINE_NUMBER(4047);
	sp[0].o = (jobject)SM_java_math_BigDecimal_valueOf_long_int_R_java_math_BigDecimal(ctx, (frame[0].l), (frame[2].i));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject SM_java_math_BigDecimal_doRound_java_math_BigInteger_int_java_math_MathContext_R_java_math_BigDecimal(jcontext ctx, jobject param0, jint param1, jobject param2) {
	jtype frame[16];
	auto stack = &frame[9];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/math/BigDecimal:doRound", 16 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_math_BigDecimal(ctx);
	frame[0].o = param0;
	frame[1].i = param1;
	frame[2].o = param2;
	{
	LINE_NUMBER(4055);
	frame[3].i = ((jint)((java_math_MathContext *) NULL_CHECK((frame[2].o)))->F_precision);
	LINE_NUMBER(4056);
	frame[4].i = (jint(0));
	LINE_NUMBER(4057);
	if ((frame[3].i) <= 0) goto label_3;
	}
	{
	LINE_NUMBER(4058);
	jlong temp0 = (jlong)SM_java_math_BigDecimal_compactValFor_java_math_BigInteger_R_long(ctx, (frame[0].o));
	frame[5].l = temp0;
	LINE_NUMBER(4059);
	sp[0].o = (jobject)((java_math_MathContext *) NULL_CHECK((frame[2].o)))->F_roundingMode;
	frame[7].i = ((jint)((java_math_RoundingMode *) NULL_CHECK(sp[0].o))->F_oldMode);
	LINE_NUMBER(4061);
	if ((longCompare((frame[5].l), (jlong(-9223372036854775807ll)))) != 0) goto label_7;
	}
	{
	LINE_NUMBER(4062);
	jint temp0 = (jint)SM_java_math_BigDecimal_bigDigitLength_java_math_BigInteger_R_int(ctx, (frame[0].o));
	frame[4].i = temp0;
	LINE_NUMBER(4063);
	frame[8].i = ((frame[4].i) - (frame[3].i));
	}
label_10:;
	{
	LINE_NUMBER(4064);
	if ((frame[8].i) <= 0) goto label_7;
	}
	{
	LINE_NUMBER(4065);
	jint temp0 = (jint)SM_java_math_BigDecimal_checkScaleNonZero_long_R_int(ctx, ((jlong((frame[1].i))) - (jlong((frame[8].i)))));
	frame[1].i = temp0;
	LINE_NUMBER(4066);
	sp[0].o = (jobject)SM_java_math_BigDecimal_divideAndRoundByTenPow_java_math_BigInteger_int_int_R_java_math_BigInteger(ctx, (frame[0].o), (frame[8].i), (frame[7].i));
	frame[0].o = sp[0].o;
	LINE_NUMBER(4067);
	jlong temp1 = (jlong)SM_java_math_BigDecimal_compactValFor_java_math_BigInteger_R_long(ctx, (frame[0].o));
	frame[5].l = temp1;
	LINE_NUMBER(4068);
	if ((longCompare((frame[5].l), (jlong(-9223372036854775807ll)))) == 0) goto label_15;
	}
	LINE_NUMBER(4069);
	goto label_7;
label_15:;
	{
	LINE_NUMBER(4071);
	jint temp0 = (jint)SM_java_math_BigDecimal_bigDigitLength_java_math_BigInteger_R_int(ctx, (frame[0].o));
	frame[4].i = temp0;
	LINE_NUMBER(4072);
	frame[8].i = ((frame[4].i) - (frame[3].i));
	goto label_10;
	}
label_7:;
	{
	LINE_NUMBER(4075);
	if ((longCompare((frame[5].l), (jlong(-9223372036854775807ll)))) == 0) goto label_3;
	}
	{
	LINE_NUMBER(4076);
	jint temp0 = (jint)SM_java_math_BigDecimal_longDigitLength_long_R_int(ctx, (frame[5].l));
	frame[4].i = temp0;
	LINE_NUMBER(4077);
	frame[8].i = ((frame[4].i) - (frame[3].i));
	}
label_20:;
	{
	LINE_NUMBER(4078);
	if ((frame[8].i) <= 0) goto label_21;
	}
	{
	LINE_NUMBER(4079);
	jint temp0 = (jint)SM_java_math_BigDecimal_checkScaleNonZero_long_R_int(ctx, ((jlong((frame[1].i))) - (jlong((frame[8].i)))));
	frame[1].i = temp0;
	LINE_NUMBER(4080);
	jlong temp1 = frame[5].l;
	clinit_java_math_BigDecimal(ctx);
	sp[0].o = (jobject)SF_java_math_BigDecimal_LONG_TEN_POWERS_TABLE;
	jlong temp2 = (jlong)ARRAY_ACCESS(jlong, sp[0].o, (frame[8].i));
	sp[0].o = (jobject)((java_math_MathContext *) NULL_CHECK((frame[2].o)))->F_roundingMode;
	jlong temp3 = (jlong)SM_java_math_BigDecimal_divideAndRound_long_long_int_R_long(ctx, temp1, temp2, ((jint)((java_math_RoundingMode *) NULL_CHECK(sp[0].o))->F_oldMode));
	frame[5].l = temp3;
	LINE_NUMBER(4081);
	jint temp4 = (jint)SM_java_math_BigDecimal_longDigitLength_long_R_int(ctx, (frame[5].l));
	frame[4].i = temp4;
	LINE_NUMBER(4082);
	frame[8].i = ((frame[4].i) - (frame[3].i));
	goto label_20;
	}
label_21:;
	{
	LINE_NUMBER(4084);
	sp[0].o = (jobject)SM_java_math_BigDecimal_valueOf_long_int_int_R_java_math_BigDecimal(ctx, (frame[5].l), (frame[1].i), (frame[4].i));
	popStackFrame(ctx);
	return sp[0].o;
	}
label_3:;
	{
	LINE_NUMBER(4087);
	clinit_java_math_BigDecimal(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_math_BigDecimal);
	init_java_math_BigDecimal_java_math_BigInteger_long_int_int(ctx, sp[0].o, (frame[0].o), (jlong(-9223372036854775807ll)), (frame[1].i), (frame[4].i));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject SM_java_math_BigDecimal_divideAndRoundByTenPow_java_math_BigInteger_int_int_R_java_math_BigInteger(jcontext ctx, jobject param0, jint param1, jint param2) {
	jtype frame[7];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/math/BigDecimal:divideAndRoundByTenPow", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_math_BigDecimal(ctx);
	frame[0].o = param0;
	frame[1].i = param1;
	frame[2].i = param2;
	{
	LINE_NUMBER(4094);
	jint temp0 = frame[1].i;
	clinit_java_math_BigDecimal(ctx);
	sp[0].o = (jobject)SF_java_math_BigDecimal_LONG_TEN_POWERS_TABLE;
	if (temp0 >= (((jarray) nullCheck(ctx, sp[0].o))->length)) goto label_1;
	}
	{
	LINE_NUMBER(4095);
	sp[0].o = frame[0].o;
	clinit_java_math_BigDecimal(ctx);
	sp[1].o = (jobject)SF_java_math_BigDecimal_LONG_TEN_POWERS_TABLE;
	sp[0].o = (jobject)SM_java_math_BigDecimal_divideAndRound_java_math_BigInteger_long_int_R_java_math_BigInteger(ctx, sp[0].o, ((jlong)ARRAY_ACCESS(jlong, sp[1].o, (frame[1].i))), (frame[2].i));
	frame[0].o = sp[0].o;
	goto label_3;
	}
label_1:;
	{
	LINE_NUMBER(4097);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)SM_java_math_BigDecimal_bigTenToThe_int_R_java_math_BigInteger(ctx, (frame[1].i));
	sp[0].o = (jobject)SM_java_math_BigDecimal_divideAndRound_java_math_BigInteger_java_math_BigInteger_int_R_java_math_BigInteger(ctx, sp[0].o, sp[1].o, (frame[2].i));
	frame[0].o = sp[0].o;
	}
label_3:;
	{
	LINE_NUMBER(4098);
	popStackFrame(ctx);
	return (frame[0].o);
	}

	popStackFrame(ctx);
}

jobject SM_java_math_BigDecimal_divideAndRound_long_long_int_int_int_R_java_math_BigDecimal(jcontext ctx, jlong param0, jlong param1, jint param2, jint param3, jint param4) {
	jtype frame[21];
	auto stack = &frame[13];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/math/BigDecimal:divideAndRound", 21 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_math_BigDecimal(ctx);
	frame[0].l = param0;
	frame[2].l = param1;
	frame[4].i = param2;
	frame[5].i = param3;
	frame[6].i = param4;
	{
	LINE_NUMBER(4114);
	frame[8].l = ((frame[0].l) / (frame[2].l));
	LINE_NUMBER(4115);
	if ((frame[5].i) != (jint(1))) goto label_2;
	}
	{
	if ((frame[4].i) != (frame[6].i)) goto label_2;
	}
	{
	LINE_NUMBER(4116);
	sp[0].o = (jobject)SM_java_math_BigDecimal_valueOf_long_int_R_java_math_BigDecimal(ctx, (frame[8].l), (frame[4].i));
	popStackFrame(ctx);
	return sp[0].o;
	}
label_2:;
	{
	LINE_NUMBER(4117);
	frame[10].l = ((frame[0].l) % (frame[2].l));
	LINE_NUMBER(4118);
	if ((longCompare((frame[0].l), (jlong(0)))) >= 0) goto label_5;
	}
	INST_ICONST(1);
	goto label_6;
label_5:;
	INST_ICONST(0);
label_6:;
	{
	if ((longCompare((frame[2].l), (jlong(0)))) >= 0) goto label_7;
	}
	INST_ICONST(1);
	goto label_8;
label_7:;
	INST_ICONST(0);
label_8:;
	sp -= 2; if (sp[0].i != sp[1].i) goto label_9;
	INST_ICONST(1);
	goto label_10;
label_9:;
	INST_ICONST(-1);
label_10:;
	{
	sp -= 1;
	frame[7].i = sp[0].i;
	LINE_NUMBER(4119);
	if ((longCompare((frame[10].l), (jlong(0)))) == 0) goto label_12;
	}
	{
	LINE_NUMBER(4120);
	jint temp0 = (jint)SM_java_math_BigDecimal_needIncrement_long_int_int_long_long_R_boolean(ctx, (frame[2].l), (frame[5].i), (frame[7].i), (frame[8].l), (frame[10].l));
	frame[12].i = temp0;
	LINE_NUMBER(4121);
	if ((frame[12].i) == 0) goto label_15;
	}
	{
	jlong temp0 = (frame[8].l) + (jlong((frame[7].i)));
	sp[0].l = temp0;
	sp += 1;
	goto label_16;
	}
label_15:;
	INST_LLOAD(8);
label_16:;
	{
	sp -= 1;
	sp[0].o = (jobject)SM_java_math_BigDecimal_valueOf_long_int_R_java_math_BigDecimal(ctx, sp[0].l, (frame[4].i));
	popStackFrame(ctx);
	return sp[0].o;
	}
label_12:;
	{
	LINE_NUMBER(4123);
	if ((frame[6].i) == (frame[4].i)) goto label_17;
	}
	{
	LINE_NUMBER(4124);
	sp[0].o = (jobject)SM_java_math_BigDecimal_createAndStripZerosToMatchScale_long_int_long_R_java_math_BigDecimal(ctx, (frame[8].l), (frame[4].i), (jlong((frame[6].i))));
	popStackFrame(ctx);
	return sp[0].o;
	}
label_17:;
	{
	LINE_NUMBER(4126);
	sp[0].o = (jobject)SM_java_math_BigDecimal_valueOf_long_int_R_java_math_BigDecimal(ctx, (frame[8].l), (frame[4].i));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jlong SM_java_math_BigDecimal_divideAndRound_long_long_int_R_long(jcontext ctx, jlong param0, jlong param1, jint param2) {
	jtype frame[19];
	auto stack = &frame[11];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/math/BigDecimal:divideAndRound", 19 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_math_BigDecimal(ctx);
	frame[0].l = param0;
	frame[2].l = param1;
	frame[4].i = param2;
	{
	LINE_NUMBER(4136);
	frame[6].l = ((frame[0].l) / (frame[2].l));
	LINE_NUMBER(4137);
	if ((frame[4].i) != (jint(1))) goto label_2;
	}
	{
	LINE_NUMBER(4138);
	popStackFrame(ctx);
	return (frame[6].l);
	}
label_2:;
	{
	LINE_NUMBER(4139);
	frame[8].l = ((frame[0].l) % (frame[2].l));
	LINE_NUMBER(4140);
	if ((longCompare((frame[0].l), (jlong(0)))) >= 0) goto label_5;
	}
	INST_ICONST(1);
	goto label_6;
label_5:;
	INST_ICONST(0);
label_6:;
	{
	if ((longCompare((frame[2].l), (jlong(0)))) >= 0) goto label_7;
	}
	INST_ICONST(1);
	goto label_8;
label_7:;
	INST_ICONST(0);
label_8:;
	sp -= 2; if (sp[0].i != sp[1].i) goto label_9;
	INST_ICONST(1);
	goto label_10;
label_9:;
	INST_ICONST(-1);
label_10:;
	{
	sp -= 1;
	frame[5].i = sp[0].i;
	LINE_NUMBER(4141);
	if ((longCompare((frame[8].l), (jlong(0)))) == 0) goto label_12;
	}
	{
	LINE_NUMBER(4142);
	jint temp0 = (jint)SM_java_math_BigDecimal_needIncrement_long_int_int_long_long_R_boolean(ctx, (frame[2].l), (frame[4].i), (frame[5].i), (frame[6].l), (frame[8].l));
	frame[10].i = temp0;
	LINE_NUMBER(4143);
	if ((frame[10].i) == 0) goto label_15;
	}
	{
	jlong temp0 = (frame[6].l) + (jlong((frame[5].i)));
	sp[0].l = temp0;
	sp += 1;
	goto label_16;
	}
label_15:;
	INST_LLOAD(6);
label_16:;
	popStackFrame(ctx);
	INST_LRETURN();
label_12:;
	{
	LINE_NUMBER(4145);
	popStackFrame(ctx);
	return (frame[6].l);
	}

	popStackFrame(ctx);
}

jbool SM_java_math_BigDecimal_commonNeedIncrement_int_int_int_boolean_R_boolean(jcontext ctx, jint param0, jint param1, jint param2, jbool param3) {
	jtype frame[8];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/math/BigDecimal:commonNeedIncrement", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_math_BigDecimal(ctx);
	frame[0].i = param0;
	frame[1].i = param1;
	frame[2].i = param2;
	frame[3].i = param3;
	{
	LINE_NUMBER(4154);
	switch((frame[0].i)) {
		case 0: goto label_1;
		case 1: goto label_2;
		case 2: goto label_3;
		case 3: goto label_4;
		case 4: goto label_5;
		case 5: goto label_5;
		case 6: goto label_5;
		case 7: goto label_6;
		default: goto label_5;
	}
	}
label_6:;
	{
	LINE_NUMBER(4156);
	clinit_java_lang_ArithmeticException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_ArithmeticException);
	init_java_lang_ArithmeticException_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"Rounding necessary"_j))));
	throwException(ctx, sp[0].o);	}
label_1:;
	{
	LINE_NUMBER(4159);
	popStackFrame(ctx);
	return (jint(1));
	}
label_2:;
	{
	LINE_NUMBER(4162);
	popStackFrame(ctx);
	return (jint(0));
	}
label_3:;
	{
	LINE_NUMBER(4165);
	if ((frame[1].i) <= 0) goto label_7;
	}
	INST_ICONST(1);
	goto label_8;
label_7:;
	INST_ICONST(0);
label_8:;
	popStackFrame(ctx);
	INST_IRETURN();
label_4:;
	{
	LINE_NUMBER(4168);
	if ((frame[1].i) >= 0) goto label_9;
	}
	INST_ICONST(1);
	goto label_10;
label_9:;
	INST_ICONST(0);
label_10:;
	popStackFrame(ctx);
	INST_IRETURN();
label_5:;
	{
	LINE_NUMBER(4171);
	if ((clinit_java_math_BigDecimal(ctx), (jint)SF_java_math_BigDecimal_$assertionsDisabled) != 0) goto label_11;
	}
	{
	if ((frame[0].i) < (jint(4))) goto label_12;
	}
	{
	if ((frame[0].i) <= (6)) goto label_11;
	}
label_12:;
	{
	clinit_java_lang_AssertionError(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_AssertionError);
	clinit_java_lang_StringBuilder(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[1].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"Unexpected rounding mode"_j))));
	jint temp0 = frame[0].i;
	LINE_NUMBER(4172);
	sp[2].o = (jobject)SM_java_math_RoundingMode_valueOf_int_R_java_math_RoundingMode(ctx, temp0);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_Object_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_Object_R_java_lang_StringBuilder])(ctx, sp[1].o, sp[2].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[1].o);
	init_java_lang_AssertionError_java_lang_String(ctx, sp[0].o, sp[1].o);
	throwException(ctx, sp[0].o);	}
label_11:;
	{
	LINE_NUMBER(4174);
	if ((frame[2].i) >= 0) goto label_14;
	}
	{
	LINE_NUMBER(4175);
	popStackFrame(ctx);
	return (jint(0));
	}
label_14:;
	{
	LINE_NUMBER(4176);
	if ((frame[2].i) <= 0) goto label_16;
	}
	{
	LINE_NUMBER(4177);
	popStackFrame(ctx);
	return (jint(1));
	}
label_16:;
	{
	LINE_NUMBER(4179);
	if ((clinit_java_math_BigDecimal(ctx), (jint)SF_java_math_BigDecimal_$assertionsDisabled) != 0) goto label_18;
	}
	INST_ILOAD(2);
	if ((--sp)->i == 0) goto label_18;
	{
	clinit_java_lang_AssertionError(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_AssertionError);
	init_java_lang_AssertionError(ctx, sp[0].o);
	throwException(ctx, sp[0].o);	}
label_18:;
	{
	LINE_NUMBER(4181);
	switch((frame[0].i)) {
		case 4: goto label_19;
		case 5: goto label_20;
		case 6: goto label_21;
		default: goto label_22;
	}
	}
label_20:;
	{
	LINE_NUMBER(4183);
	popStackFrame(ctx);
	return (jint(0));
	}
label_19:;
	{
	LINE_NUMBER(4186);
	popStackFrame(ctx);
	return (jint(1));
	}
label_21:;
	{
	LINE_NUMBER(4189);
	popStackFrame(ctx);
	return (frame[3].i);
	}
label_22:;
	{
	LINE_NUMBER(4192);
	clinit_java_lang_AssertionError(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_AssertionError);
	clinit_java_lang_StringBuilder(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[1].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"Unexpected rounding mode"_j))));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder])(ctx, sp[1].o, (frame[0].i));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[1].o);
	init_java_lang_AssertionError_java_lang_String(ctx, sp[0].o, sp[1].o);
	throwException(ctx, sp[0].o);	}

	popStackFrame(ctx);
}

jbool SM_java_math_BigDecimal_needIncrement_long_int_int_long_long_R_boolean(jcontext ctx, jlong param0, jint param1, jint param2, jlong param3, jlong param4) {
	jtype frame[16];
	auto stack = &frame[9];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/math/BigDecimal:needIncrement", 16 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_math_BigDecimal(ctx);
	frame[0].l = param0;
	frame[2].i = param1;
	frame[3].i = param2;
	frame[4].l = param3;
	frame[6].l = param4;
	{
	LINE_NUMBER(4203);
	if ((clinit_java_math_BigDecimal(ctx), (jint)SF_java_math_BigDecimal_$assertionsDisabled) != 0) goto label_1;
	}
	{
	if ((longCompare((frame[6].l), (jlong(0)))) != 0) goto label_1;
	}
	{
	clinit_java_lang_AssertionError(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_AssertionError);
	init_java_lang_AssertionError(ctx, sp[0].o);
	throwException(ctx, sp[0].o);	}
label_1:;
	{
	LINE_NUMBER(4206);
	if ((longCompare((frame[6].l), (jlong(-4611686018427387903ll)))) <= 0) goto label_2;
	}
	{
	if ((longCompare((frame[6].l), (jlong(4611686018427387903ll)))) <= 0) goto label_3;
	}
label_2:;
	{
	LINE_NUMBER(4207);
	frame[8].i = (jint(1));
	goto label_5;
	}
label_3:;
	{
	LINE_NUMBER(4209);
	jint temp0 = (jint)SM_java_math_BigDecimal_longCompareMagnitude_long_long_R_int(ctx, ((jlong(2ll)) * (frame[6].l)), (frame[0].l));
	frame[8].i = temp0;
	}
label_5:;
	{
	LINE_NUMBER(4212);
	jint temp0 = frame[2].i;
	jint temp1 = frame[3].i;
	jint temp2 = frame[8].i;
	sp[0].i = temp0;
	sp[1].i = temp1;
	sp[2].i = temp2;
	sp += 3;
	if ((longCompare(((frame[4].l) & (jlong(1))), (jlong(0)))) == 0) goto label_6;
	}
	INST_ICONST(1);
	goto label_7;
label_6:;
	INST_ICONST(0);
label_7:;
	POP_N(4); // Pop method args
	sp->i = (jint)SM_java_math_BigDecimal_commonNeedIncrement_int_int_int_boolean_R_boolean(ctx, sp[0].i, sp[1].i, sp[2].i, sp[3].i);
	sp++;
	popStackFrame(ctx);
	INST_IRETURN();

	popStackFrame(ctx);
}

jobject SM_java_math_BigDecimal_divideAndRound_java_math_BigInteger_long_int_R_java_math_BigInteger(jcontext ctx, jobject param0, jlong param1, jint param2) {
	jtype frame[17];
	auto stack = &frame[10];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/math/BigDecimal:divideAndRound", 17 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_math_BigDecimal(ctx);
	frame[0].o = param0;
	frame[1].l = param1;
	frame[3].i = param2;
	{
	LINE_NUMBER(4222);
	frame[6].l = (jlong(0));
	LINE_NUMBER(4223);
	frame[8].o = (jobject(nullptr));
	LINE_NUMBER(4225);
	clinit_java_math_MutableBigInteger(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_math_MutableBigInteger);
	sp[1].o = (jobject)((java_math_BigInteger *) NULL_CHECK((frame[0].o)))->F_mag;
	init_java_math_MutableBigInteger_Array1_int(ctx, sp[0].o, sp[1].o);
	frame[9].o = sp[0].o;
	LINE_NUMBER(4226);
	clinit_java_math_MutableBigInteger(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_math_MutableBigInteger);
	init_java_math_MutableBigInteger(ctx, sp[0].o);
	frame[8].o = sp[0].o;
	LINE_NUMBER(4227);
	jlong temp0 = (jlong)((func_java_math_MutableBigInteger_divide_long_java_math_MutableBigInteger_R_long) ((void **) nullCheck(ctx, (frame[9].o))->vtable)[VTABLE_java_math_MutableBigInteger_divide_long_java_math_MutableBigInteger_R_long])(ctx, (frame[9].o), (frame[1].l), (frame[8].o));
	frame[6].l = temp0;
	LINE_NUMBER(4228);
	if ((longCompare((frame[6].l), (jlong(0)))) != 0) goto label_6;
	}
	INST_ICONST(1);
	goto label_7;
label_6:;
	INST_ICONST(0);
label_7:;
	{
	sp -= 1;
	frame[4].i = sp[0].i;
	LINE_NUMBER(4229);
	if ((longCompare((frame[1].l), (jlong(0)))) >= 0) goto label_9;
	}
	{
	jint temp0 = -((jint)((java_math_BigInteger *) NULL_CHECK((frame[0].o)))->F_signum);
	sp[0].i = temp0;
	sp += 1;
	goto label_10;
	}
label_9:;
	INST_ALOAD(0);
	sp[-1].i = ((java_math_BigInteger *) NULL_CHECK(sp[-1].o))->F_signum;
label_10:;
	{
	sp -= 1;
	frame[5].i = sp[0].i;
	LINE_NUMBER(4230);
	if ((frame[4].i) != 0) goto label_12;
	}
	{
	LINE_NUMBER(4231);
	jint temp0 = (jint)SM_java_math_BigDecimal_needIncrement_long_int_int_java_math_MutableBigInteger_long_R_boolean(ctx, (frame[1].l), (frame[3].i), (frame[5].i), (frame[8].o), (frame[6].l));
	if (temp0 == 0) goto label_12;
	}
	{
	LINE_NUMBER(4232);
	sp[0].o = frame[8].o;
	clinit_java_math_MutableBigInteger(ctx);
	sp[1].o = (jobject)SF_java_math_MutableBigInteger_ONE;
	((func_java_math_MutableBigInteger_add_java_math_MutableBigInteger) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_math_MutableBigInteger_add_java_math_MutableBigInteger])(ctx, sp[0].o, sp[1].o);
	}
label_12:;
	{
	LINE_NUMBER(4235);
	sp[0].o = (jobject)((func_java_math_MutableBigInteger_toBigInteger_int_R_java_math_BigInteger) ((void **) nullCheck(ctx, (frame[8].o))->vtable)[VTABLE_java_math_MutableBigInteger_toBigInteger_int_R_java_math_BigInteger])(ctx, (frame[8].o), (frame[5].i));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject SM_java_math_BigDecimal_divideAndRound_java_math_BigInteger_long_int_int_int_R_java_math_BigDecimal(jcontext ctx, jobject param0, jlong param1, jint param2, jint param3, jint param4) {
	jtype frame[22];
	auto stack = &frame[15];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/math/BigDecimal:divideAndRound", 22 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_math_BigDecimal(ctx);
	frame[0].o = param0;
	frame[1].l = param1;
	frame[3].i = param2;
	frame[4].i = param3;
	frame[5].i = param4;
	{
	LINE_NUMBER(4251);
	frame[8].l = (jlong(0));
	LINE_NUMBER(4252);
	frame[10].o = (jobject(nullptr));
	LINE_NUMBER(4254);
	clinit_java_math_MutableBigInteger(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_math_MutableBigInteger);
	sp[1].o = (jobject)((java_math_BigInteger *) NULL_CHECK((frame[0].o)))->F_mag;
	init_java_math_MutableBigInteger_Array1_int(ctx, sp[0].o, sp[1].o);
	frame[11].o = sp[0].o;
	LINE_NUMBER(4255);
	clinit_java_math_MutableBigInteger(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_math_MutableBigInteger);
	init_java_math_MutableBigInteger(ctx, sp[0].o);
	frame[10].o = sp[0].o;
	LINE_NUMBER(4256);
	jlong temp0 = (jlong)((func_java_math_MutableBigInteger_divide_long_java_math_MutableBigInteger_R_long) ((void **) nullCheck(ctx, (frame[11].o))->vtable)[VTABLE_java_math_MutableBigInteger_divide_long_java_math_MutableBigInteger_R_long])(ctx, (frame[11].o), (frame[1].l), (frame[10].o));
	frame[8].l = temp0;
	LINE_NUMBER(4257);
	if ((longCompare((frame[8].l), (jlong(0)))) != 0) goto label_6;
	}
	INST_ICONST(1);
	goto label_7;
label_6:;
	INST_ICONST(0);
label_7:;
	{
	sp -= 1;
	frame[6].i = sp[0].i;
	LINE_NUMBER(4258);
	if ((longCompare((frame[1].l), (jlong(0)))) >= 0) goto label_9;
	}
	{
	jint temp0 = -((jint)((java_math_BigInteger *) NULL_CHECK((frame[0].o)))->F_signum);
	sp[0].i = temp0;
	sp += 1;
	goto label_10;
	}
label_9:;
	INST_ALOAD(0);
	sp[-1].i = ((java_math_BigInteger *) NULL_CHECK(sp[-1].o))->F_signum;
label_10:;
	{
	sp -= 1;
	frame[7].i = sp[0].i;
	LINE_NUMBER(4259);
	if ((frame[6].i) != 0) goto label_12;
	}
	{
	LINE_NUMBER(4260);
	jint temp0 = (jint)SM_java_math_BigDecimal_needIncrement_long_int_int_java_math_MutableBigInteger_long_R_boolean(ctx, (frame[1].l), (frame[4].i), (frame[7].i), (frame[10].o), (frame[8].l));
	if (temp0 == 0) goto label_14;
	}
	{
	LINE_NUMBER(4261);
	sp[0].o = frame[10].o;
	clinit_java_math_MutableBigInteger(ctx);
	sp[1].o = (jobject)SF_java_math_MutableBigInteger_ONE;
	((func_java_math_MutableBigInteger_add_java_math_MutableBigInteger) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_math_MutableBigInteger_add_java_math_MutableBigInteger])(ctx, sp[0].o, sp[1].o);
	}
label_14:;
	{
	LINE_NUMBER(4263);
	sp[0].o = (jobject)((func_java_math_MutableBigInteger_toBigDecimal_int_int_R_java_math_BigDecimal) ((void **) nullCheck(ctx, (frame[10].o))->vtable)[VTABLE_java_math_MutableBigInteger_toBigDecimal_int_int_R_java_math_BigDecimal])(ctx, (frame[10].o), (frame[7].i), (frame[3].i));
	popStackFrame(ctx);
	return sp[0].o;
	}
label_12:;
	{
	LINE_NUMBER(4265);
	if ((frame[5].i) == (frame[3].i)) goto label_16;
	}
	{
	LINE_NUMBER(4266);
	jlong temp0 = (jlong)((func_java_math_MutableBigInteger_toCompactValue_int_R_long) ((void **) nullCheck(ctx, (frame[10].o))->vtable)[VTABLE_java_math_MutableBigInteger_toCompactValue_int_R_long])(ctx, (frame[10].o), (frame[7].i));
	frame[12].l = temp0;
	LINE_NUMBER(4267);
	if ((longCompare((frame[12].l), (jlong(-9223372036854775807ll)))) == 0) goto label_19;
	}
	{
	LINE_NUMBER(4268);
	sp[0].o = (jobject)SM_java_math_BigDecimal_createAndStripZerosToMatchScale_long_int_long_R_java_math_BigDecimal(ctx, (frame[12].l), (frame[3].i), (jlong((frame[5].i))));
	popStackFrame(ctx);
	return sp[0].o;
	}
label_19:;
	{
	LINE_NUMBER(4270);
	sp[0].o = (jobject)((func_java_math_MutableBigInteger_toBigInteger_int_R_java_math_BigInteger) ((void **) nullCheck(ctx, (frame[10].o))->vtable)[VTABLE_java_math_MutableBigInteger_toBigInteger_int_R_java_math_BigInteger])(ctx, (frame[10].o), (frame[7].i));
	frame[14].o = sp[0].o;
	LINE_NUMBER(4271);
	sp[0].o = (jobject)SM_java_math_BigDecimal_createAndStripZerosToMatchScale_java_math_BigInteger_int_long_R_java_math_BigDecimal(ctx, (frame[14].o), (frame[3].i), (jlong((frame[5].i))));
	popStackFrame(ctx);
	return sp[0].o;
	}
label_16:;
	{
	LINE_NUMBER(4273);
	sp[0].o = (jobject)((func_java_math_MutableBigInteger_toBigDecimal_int_int_R_java_math_BigDecimal) ((void **) nullCheck(ctx, (frame[10].o))->vtable)[VTABLE_java_math_MutableBigInteger_toBigDecimal_int_int_R_java_math_BigDecimal])(ctx, (frame[10].o), (frame[7].i), (frame[3].i));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jbool SM_java_math_BigDecimal_needIncrement_long_int_int_java_math_MutableBigInteger_long_R_boolean(jcontext ctx, jlong param0, jint param1, jint param2, jobject param3, jlong param4) {
	jtype frame[12];
	auto stack = &frame[8];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/math/BigDecimal:needIncrement", 12 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_math_BigDecimal(ctx);
	frame[0].l = param0;
	frame[2].i = param1;
	frame[3].i = param2;
	frame[4].o = param3;
	frame[5].l = param4;
	{
	LINE_NUMBER(4283);
	if ((clinit_java_math_BigDecimal(ctx), (jint)SF_java_math_BigDecimal_$assertionsDisabled) != 0) goto label_1;
	}
	{
	if ((longCompare((frame[5].l), (jlong(0)))) != 0) goto label_1;
	}
	{
	clinit_java_lang_AssertionError(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_AssertionError);
	init_java_lang_AssertionError(ctx, sp[0].o);
	throwException(ctx, sp[0].o);	}
label_1:;
	{
	LINE_NUMBER(4286);
	if ((longCompare((frame[5].l), (jlong(-4611686018427387903ll)))) <= 0) goto label_2;
	}
	{
	if ((longCompare((frame[5].l), (jlong(4611686018427387903ll)))) <= 0) goto label_3;
	}
label_2:;
	{
	LINE_NUMBER(4287);
	frame[7].i = (jint(1));
	goto label_5;
	}
label_3:;
	{
	LINE_NUMBER(4289);
	jint temp0 = (jint)SM_java_math_BigDecimal_longCompareMagnitude_long_long_R_int(ctx, ((jlong(2ll)) * (frame[5].l)), (frame[0].l));
	frame[7].i = temp0;
	}
label_5:;
	{
	LINE_NUMBER(4292);
	jint temp0 = frame[2].i;
	jint temp1 = frame[3].i;
	jint temp2 = frame[7].i;
	jint temp3 = (jint)((func_java_math_MutableBigInteger_isOdd_R_boolean) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_java_math_MutableBigInteger_isOdd_R_boolean])(ctx, (frame[4].o));
	jint temp4 = (jint)SM_java_math_BigDecimal_commonNeedIncrement_int_int_int_boolean_R_boolean(ctx, temp0, temp1, temp2, temp3);
	popStackFrame(ctx);
	return temp4;
	}

	popStackFrame(ctx);
}

jobject SM_java_math_BigDecimal_divideAndRound_java_math_BigInteger_java_math_BigInteger_int_R_java_math_BigInteger(jcontext ctx, jobject param0, jobject param1, jint param2) {
	jtype frame[14];
	auto stack = &frame[9];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/math/BigDecimal:divideAndRound", 14 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_math_BigDecimal(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	frame[2].i = param2;
	{
	LINE_NUMBER(4303);
	clinit_java_math_MutableBigInteger(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_math_MutableBigInteger);
	sp[1].o = (jobject)((java_math_BigInteger *) NULL_CHECK((frame[0].o)))->F_mag;
	init_java_math_MutableBigInteger_Array1_int(ctx, sp[0].o, sp[1].o);
	frame[5].o = sp[0].o;
	LINE_NUMBER(4304);
	clinit_java_math_MutableBigInteger(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_math_MutableBigInteger);
	init_java_math_MutableBigInteger(ctx, sp[0].o);
	frame[6].o = sp[0].o;
	LINE_NUMBER(4305);
	clinit_java_math_MutableBigInteger(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_math_MutableBigInteger);
	sp[1].o = (jobject)((java_math_BigInteger *) NULL_CHECK((frame[1].o)))->F_mag;
	init_java_math_MutableBigInteger_Array1_int(ctx, sp[0].o, sp[1].o);
	frame[7].o = sp[0].o;
	LINE_NUMBER(4306);
	sp[0].o = (jobject)((func_java_math_MutableBigInteger_divide_java_math_MutableBigInteger_java_math_MutableBigInteger_R_java_math_MutableBigInteger) ((void **) nullCheck(ctx, (frame[5].o))->vtable)[VTABLE_java_math_MutableBigInteger_divide_java_math_MutableBigInteger_java_math_MutableBigInteger_R_java_math_MutableBigInteger])(ctx, (frame[5].o), (frame[7].o), (frame[6].o));
	frame[8].o = sp[0].o;
	LINE_NUMBER(4307);
	jint temp0 = (jint)((func_java_math_MutableBigInteger_isZero_R_boolean) ((void **) nullCheck(ctx, (frame[8].o))->vtable)[VTABLE_java_math_MutableBigInteger_isZero_R_boolean])(ctx, (frame[8].o));
	frame[3].i = temp0;
	LINE_NUMBER(4308);
	if (((jint)((java_math_BigInteger *) NULL_CHECK((frame[0].o)))->F_signum) == ((jint)((java_math_BigInteger *) NULL_CHECK((frame[1].o)))->F_signum)) goto label_6;
	}
	INST_ICONST(-1);
	goto label_7;
label_6:;
	INST_ICONST(1);
label_7:;
	{
	sp -= 1;
	frame[4].i = sp[0].i;
	LINE_NUMBER(4309);
	if ((frame[3].i) != 0) goto label_9;
	}
	{
	LINE_NUMBER(4310);
	jint temp0 = (jint)SM_java_math_BigDecimal_needIncrement_java_math_MutableBigInteger_int_int_java_math_MutableBigInteger_java_math_MutableBigInteger_R_boolean(ctx, (frame[7].o), (frame[2].i), (frame[4].i), (frame[6].o), (frame[8].o));
	if (temp0 == 0) goto label_9;
	}
	{
	LINE_NUMBER(4311);
	sp[0].o = frame[6].o;
	clinit_java_math_MutableBigInteger(ctx);
	sp[1].o = (jobject)SF_java_math_MutableBigInteger_ONE;
	((func_java_math_MutableBigInteger_add_java_math_MutableBigInteger) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_math_MutableBigInteger_add_java_math_MutableBigInteger])(ctx, sp[0].o, sp[1].o);
	}
label_9:;
	{
	LINE_NUMBER(4314);
	sp[0].o = (jobject)((func_java_math_MutableBigInteger_toBigInteger_int_R_java_math_BigInteger) ((void **) nullCheck(ctx, (frame[6].o))->vtable)[VTABLE_java_math_MutableBigInteger_toBigInteger_int_R_java_math_BigInteger])(ctx, (frame[6].o), (frame[4].i));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject SM_java_math_BigDecimal_divideAndRound_java_math_BigInteger_java_math_BigInteger_int_int_int_R_java_math_BigDecimal(jcontext ctx, jobject param0, jobject param1, jint param2, jint param3, jint param4) {
	jtype frame[19];
	auto stack = &frame[14];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/math/BigDecimal:divideAndRound", 19 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_math_BigDecimal(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	frame[2].i = param2;
	frame[3].i = param3;
	frame[4].i = param4;
	{
	LINE_NUMBER(4331);
	clinit_java_math_MutableBigInteger(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_math_MutableBigInteger);
	sp[1].o = (jobject)((java_math_BigInteger *) NULL_CHECK((frame[0].o)))->F_mag;
	init_java_math_MutableBigInteger_Array1_int(ctx, sp[0].o, sp[1].o);
	frame[7].o = sp[0].o;
	LINE_NUMBER(4332);
	clinit_java_math_MutableBigInteger(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_math_MutableBigInteger);
	init_java_math_MutableBigInteger(ctx, sp[0].o);
	frame[8].o = sp[0].o;
	LINE_NUMBER(4333);
	clinit_java_math_MutableBigInteger(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_math_MutableBigInteger);
	sp[1].o = (jobject)((java_math_BigInteger *) NULL_CHECK((frame[1].o)))->F_mag;
	init_java_math_MutableBigInteger_Array1_int(ctx, sp[0].o, sp[1].o);
	frame[9].o = sp[0].o;
	LINE_NUMBER(4334);
	sp[0].o = (jobject)((func_java_math_MutableBigInteger_divide_java_math_MutableBigInteger_java_math_MutableBigInteger_R_java_math_MutableBigInteger) ((void **) nullCheck(ctx, (frame[7].o))->vtable)[VTABLE_java_math_MutableBigInteger_divide_java_math_MutableBigInteger_java_math_MutableBigInteger_R_java_math_MutableBigInteger])(ctx, (frame[7].o), (frame[9].o), (frame[8].o));
	frame[10].o = sp[0].o;
	LINE_NUMBER(4335);
	jint temp0 = (jint)((func_java_math_MutableBigInteger_isZero_R_boolean) ((void **) nullCheck(ctx, (frame[10].o))->vtable)[VTABLE_java_math_MutableBigInteger_isZero_R_boolean])(ctx, (frame[10].o));
	frame[5].i = temp0;
	LINE_NUMBER(4336);
	if (((jint)((java_math_BigInteger *) NULL_CHECK((frame[0].o)))->F_signum) == ((jint)((java_math_BigInteger *) NULL_CHECK((frame[1].o)))->F_signum)) goto label_6;
	}
	INST_ICONST(-1);
	goto label_7;
label_6:;
	INST_ICONST(1);
label_7:;
	{
	sp -= 1;
	frame[6].i = sp[0].i;
	LINE_NUMBER(4337);
	if ((frame[5].i) != 0) goto label_9;
	}
	{
	LINE_NUMBER(4338);
	jint temp0 = (jint)SM_java_math_BigDecimal_needIncrement_java_math_MutableBigInteger_int_int_java_math_MutableBigInteger_java_math_MutableBigInteger_R_boolean(ctx, (frame[9].o), (frame[3].i), (frame[6].i), (frame[8].o), (frame[10].o));
	if (temp0 == 0) goto label_11;
	}
	{
	LINE_NUMBER(4339);
	sp[0].o = frame[8].o;
	clinit_java_math_MutableBigInteger(ctx);
	sp[1].o = (jobject)SF_java_math_MutableBigInteger_ONE;
	((func_java_math_MutableBigInteger_add_java_math_MutableBigInteger) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_math_MutableBigInteger_add_java_math_MutableBigInteger])(ctx, sp[0].o, sp[1].o);
	}
label_11:;
	{
	LINE_NUMBER(4341);
	sp[0].o = (jobject)((func_java_math_MutableBigInteger_toBigDecimal_int_int_R_java_math_BigDecimal) ((void **) nullCheck(ctx, (frame[8].o))->vtable)[VTABLE_java_math_MutableBigInteger_toBigDecimal_int_int_R_java_math_BigDecimal])(ctx, (frame[8].o), (frame[6].i), (frame[2].i));
	popStackFrame(ctx);
	return sp[0].o;
	}
label_9:;
	{
	LINE_NUMBER(4343);
	if ((frame[4].i) == (frame[2].i)) goto label_13;
	}
	{
	LINE_NUMBER(4344);
	jlong temp0 = (jlong)((func_java_math_MutableBigInteger_toCompactValue_int_R_long) ((void **) nullCheck(ctx, (frame[8].o))->vtable)[VTABLE_java_math_MutableBigInteger_toCompactValue_int_R_long])(ctx, (frame[8].o), (frame[6].i));
	frame[11].l = temp0;
	LINE_NUMBER(4345);
	if ((longCompare((frame[11].l), (jlong(-9223372036854775807ll)))) == 0) goto label_16;
	}
	{
	LINE_NUMBER(4346);
	sp[0].o = (jobject)SM_java_math_BigDecimal_createAndStripZerosToMatchScale_long_int_long_R_java_math_BigDecimal(ctx, (frame[11].l), (frame[2].i), (jlong((frame[4].i))));
	popStackFrame(ctx);
	return sp[0].o;
	}
label_16:;
	{
	LINE_NUMBER(4348);
	sp[0].o = (jobject)((func_java_math_MutableBigInteger_toBigInteger_int_R_java_math_BigInteger) ((void **) nullCheck(ctx, (frame[8].o))->vtable)[VTABLE_java_math_MutableBigInteger_toBigInteger_int_R_java_math_BigInteger])(ctx, (frame[8].o), (frame[6].i));
	frame[13].o = sp[0].o;
	LINE_NUMBER(4349);
	sp[0].o = (jobject)SM_java_math_BigDecimal_createAndStripZerosToMatchScale_java_math_BigInteger_int_long_R_java_math_BigDecimal(ctx, (frame[13].o), (frame[2].i), (jlong((frame[4].i))));
	popStackFrame(ctx);
	return sp[0].o;
	}
label_13:;
	{
	LINE_NUMBER(4351);
	sp[0].o = (jobject)((func_java_math_MutableBigInteger_toBigDecimal_int_int_R_java_math_BigDecimal) ((void **) nullCheck(ctx, (frame[8].o))->vtable)[VTABLE_java_math_MutableBigInteger_toBigDecimal_int_int_R_java_math_BigDecimal])(ctx, (frame[8].o), (frame[6].i), (frame[2].i));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jbool SM_java_math_BigDecimal_needIncrement_java_math_MutableBigInteger_int_int_java_math_MutableBigInteger_java_math_MutableBigInteger_R_boolean(jcontext ctx, jobject param0, jint param1, jint param2, jobject param3, jobject param4) {
	jtype frame[10];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/math/BigDecimal:needIncrement", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_math_BigDecimal(ctx);
	frame[0].o = param0;
	frame[1].i = param1;
	frame[2].i = param2;
	frame[3].o = param3;
	frame[4].o = param4;
	{
	LINE_NUMBER(4361);
	if ((clinit_java_math_BigDecimal(ctx), (jint)SF_java_math_BigDecimal_$assertionsDisabled) != 0) goto label_1;
	}
	{
	jint temp0 = (jint)((func_java_math_MutableBigInteger_isZero_R_boolean) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_java_math_MutableBigInteger_isZero_R_boolean])(ctx, (frame[4].o));
	if (temp0 == 0) goto label_1;
	}
	{
	clinit_java_lang_AssertionError(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_AssertionError);
	init_java_lang_AssertionError(ctx, sp[0].o);
	throwException(ctx, sp[0].o);	}
label_1:;
	{
	LINE_NUMBER(4362);
	jint temp0 = (jint)((func_java_math_MutableBigInteger_compareHalf_java_math_MutableBigInteger_R_int) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_java_math_MutableBigInteger_compareHalf_java_math_MutableBigInteger_R_int])(ctx, (frame[4].o), (frame[0].o));
	frame[5].i = temp0;
	LINE_NUMBER(4363);
	jint temp1 = frame[1].i;
	jint temp2 = frame[2].i;
	jint temp3 = frame[5].i;
	jint temp4 = (jint)((func_java_math_MutableBigInteger_isOdd_R_boolean) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_java_math_MutableBigInteger_isOdd_R_boolean])(ctx, (frame[3].o));
	jint temp5 = (jint)SM_java_math_BigDecimal_commonNeedIncrement_int_int_int_boolean_R_boolean(ctx, temp1, temp2, temp3, temp4);
	popStackFrame(ctx);
	return temp5;
	}

	popStackFrame(ctx);
}

jobject SM_java_math_BigDecimal_createAndStripZerosToMatchScale_java_math_BigInteger_int_long_R_java_math_BigDecimal(jcontext ctx, jobject param0, jint param1, jlong param2) {
	jtype frame[10];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/math/BigDecimal:createAndStripZerosToMatchScale", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_math_BigDecimal(ctx);
	frame[0].o = param0;
	frame[1].i = param1;
	frame[2].l = param2;
label_0:;
	{
	LINE_NUMBER(4377);
	sp[0].o = frame[0].o;
	clinit_java_math_BigInteger(ctx);
	sp[1].o = (jobject)SF_java_math_BigInteger_TEN;
	jint temp0 = (jint)((func_java_math_BigInteger_compareMagnitude_java_math_BigInteger_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_math_BigInteger_compareMagnitude_java_math_BigInteger_R_int])(ctx, sp[0].o, sp[1].o);
	if (temp0 < 0) goto label_1;
	}
	{
	if ((longCompare((jlong((frame[1].i))), (frame[2].l))) <= 0) goto label_1;
	}
	{
	LINE_NUMBER(4379);
	jint temp0 = (jint)((func_java_math_BigInteger_testBit_int_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_math_BigInteger_testBit_int_R_boolean])(ctx, (frame[0].o), (jint(0)));
	if (temp0 == 0) goto label_3;
	}
	LINE_NUMBER(4380);
	goto label_1;
label_3:;
	{
	LINE_NUMBER(4381);
	sp[0].o = frame[0].o;
	clinit_java_math_BigInteger(ctx);
	sp[1].o = (jobject)SF_java_math_BigInteger_TEN;
	sp[0].o = (jobject)((func_java_math_BigInteger_divideAndRemainder_java_math_BigInteger_R_Array1_java_math_BigInteger) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_math_BigInteger_divideAndRemainder_java_math_BigInteger_R_Array1_java_math_BigInteger])(ctx, sp[0].o, sp[1].o);
	frame[4].o = sp[0].o;
	LINE_NUMBER(4382);
	jint temp0 = (jint)((func_java_math_BigInteger_signum_R_int) ((void **) nullCheck(ctx, ((jobject)ARRAY_ACCESS(jobject, (frame[4].o), (jint(1)))))->vtable)[VTABLE_java_math_BigInteger_signum_R_int])(ctx, ((jobject)ARRAY_ACCESS(jobject, (frame[4].o), (jint(1)))));
	if (temp0 == 0) goto label_6;
	}
	LINE_NUMBER(4383);
	goto label_1;
label_6:;
	{
	LINE_NUMBER(4384);
	frame[0].o = ((jobject)ARRAY_ACCESS(jobject, (frame[4].o), (jint(0))));
	LINE_NUMBER(4385);
	jint temp0 = (jint)SM_java_math_BigDecimal_checkScale_java_math_BigInteger_long_R_int(ctx, (frame[0].o), ((jlong((frame[1].i))) - (jlong(1))));
	frame[1].i = temp0;
	goto label_0;
	}
label_1:;
	{
	LINE_NUMBER(4387);
	sp[0].o = (jobject)SM_java_math_BigDecimal_valueOf_java_math_BigInteger_int_int_R_java_math_BigDecimal(ctx, (frame[0].o), (frame[1].i), (jint(0)));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject SM_java_math_BigDecimal_createAndStripZerosToMatchScale_long_int_long_R_java_math_BigDecimal(jcontext ctx, jlong param0, jint param1, jlong param2) {
	jtype frame[13];
	auto stack = &frame[7];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/math/BigDecimal:createAndStripZerosToMatchScale", 13 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_math_BigDecimal(ctx);
	frame[0].l = param0;
	frame[2].i = param1;
	frame[3].l = param2;
label_0:;
	{
	LINE_NUMBER(4400);
	jlong temp0 = (jlong)SM_java_lang_Math_abs_long_R_long(ctx, (frame[0].l));
	if ((longCompare(temp0, (jlong(10ll)))) < 0) goto label_1;
	}
	{
	if ((longCompare((jlong((frame[2].i))), (frame[3].l))) <= 0) goto label_1;
	}
	{
	LINE_NUMBER(4401);
	if ((longCompare(((frame[0].l) & (jlong(1))), (jlong(0)))) == 0) goto label_3;
	}
	LINE_NUMBER(4402);
	goto label_1;
label_3:;
	{
	LINE_NUMBER(4403);
	frame[5].l = ((frame[0].l) % (jlong(10ll)));
	LINE_NUMBER(4404);
	if ((longCompare((frame[5].l), (jlong(0)))) == 0) goto label_6;
	}
	LINE_NUMBER(4405);
	goto label_1;
label_6:;
	{
	LINE_NUMBER(4406);
	frame[0].l = ((frame[0].l) / (jlong(10ll)));
	LINE_NUMBER(4407);
	jint temp0 = (jint)SM_java_math_BigDecimal_checkScale_long_long_R_int(ctx, (frame[0].l), ((jlong((frame[2].i))) - (jlong(1))));
	frame[2].i = temp0;
	LINE_NUMBER(4408);
	goto label_0;
	}
label_1:;
	{
	LINE_NUMBER(4409);
	sp[0].o = (jobject)SM_java_math_BigDecimal_valueOf_long_int_R_java_math_BigDecimal(ctx, (frame[0].l), (frame[2].i));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject SM_java_math_BigDecimal_stripZerosToMatchScale_java_math_BigInteger_long_int_int_R_java_math_BigDecimal(jcontext ctx, jobject param0, jlong param1, jint param2, jint param3) {
	jtype frame[10];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/math/BigDecimal:stripZerosToMatchScale", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_math_BigDecimal(ctx);
	frame[0].o = param0;
	frame[1].l = param1;
	frame[3].i = param2;
	frame[4].i = param3;
	{
	LINE_NUMBER(4413);
	if ((longCompare((frame[1].l), (jlong(-9223372036854775807ll)))) == 0) goto label_1;
	}
	{
	LINE_NUMBER(4414);
	sp[0].o = (jobject)SM_java_math_BigDecimal_createAndStripZerosToMatchScale_long_int_long_R_java_math_BigDecimal(ctx, (frame[1].l), (frame[3].i), (jlong((frame[4].i))));
	popStackFrame(ctx);
	return sp[0].o;
	}
label_1:;
	{
	LINE_NUMBER(4416);
	if ((frame[0].o) != nullptr) goto label_3;
	}
	clinit_java_math_BigDecimal(ctx);
	(sp++)->o = SF_java_math_BigDecimal_INFLATED_BIGINT;
	goto label_4;
label_3:;
	INST_ALOAD(0);
label_4:;
	{
	sp -= 1;
	sp[0].o = (jobject)SM_java_math_BigDecimal_createAndStripZerosToMatchScale_java_math_BigInteger_int_long_R_java_math_BigDecimal(ctx, sp[0].o, (frame[3].i), (jlong((frame[4].i))));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jlong SM_java_math_BigDecimal_add_long_long_R_long(jcontext ctx, jlong param0, jlong param1) {
	jtype frame[12];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/math/BigDecimal:add", 12 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_math_BigDecimal(ctx);
	frame[0].l = param0;
	frame[2].l = param1;
	{
	LINE_NUMBER(4425);
	frame[4].l = ((frame[0].l) + (frame[2].l));
	LINE_NUMBER(4428);
	if ((longCompare((((frame[4].l) ^ (frame[0].l)) & ((frame[4].l) ^ (frame[2].l))), (jlong(0)))) < 0) goto label_2;
	}
	{
	LINE_NUMBER(4429);
	popStackFrame(ctx);
	return (frame[4].l);
	}
label_2:;
	{
	LINE_NUMBER(4431);
	popStackFrame(ctx);
	return (jlong(-9223372036854775807ll));
	}

	popStackFrame(ctx);
}

jobject SM_java_math_BigDecimal_add_long_long_int_R_java_math_BigDecimal(jcontext ctx, jlong param0, jlong param1, jint param2) {
	jtype frame[12];
	auto stack = &frame[7];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/math/BigDecimal:add", 12 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_math_BigDecimal(ctx);
	frame[0].l = param0;
	frame[2].l = param1;
	frame[4].i = param2;
	{
	LINE_NUMBER(4435);
	jlong temp0 = (jlong)SM_java_math_BigDecimal_add_long_long_R_long(ctx, (frame[0].l), (frame[2].l));
	frame[5].l = temp0;
	LINE_NUMBER(4436);
	if ((longCompare((frame[5].l), (jlong(-9223372036854775807ll)))) == 0) goto label_2;
	}
	{
	LINE_NUMBER(4437);
	sp[0].o = (jobject)SM_java_math_BigDecimal_valueOf_long_int_R_java_math_BigDecimal(ctx, (frame[5].l), (frame[4].i));
	popStackFrame(ctx);
	return sp[0].o;
	}
label_2:;
	{
	LINE_NUMBER(4438);
	clinit_java_math_BigDecimal(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_math_BigDecimal);
	sp[1].o = (jobject)SM_java_math_BigInteger_valueOf_long_R_java_math_BigInteger(ctx, (frame[0].l));
	sp[1].o = (jobject)((func_java_math_BigInteger_add_long_R_java_math_BigInteger) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_math_BigInteger_add_long_R_java_math_BigInteger])(ctx, sp[1].o, (frame[2].l));
	init_java_math_BigDecimal_java_math_BigInteger_int(ctx, sp[0].o, sp[1].o, (frame[4].i));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject SM_java_math_BigDecimal_add_long_int_long_int_R_java_math_BigDecimal(jcontext ctx, jlong param0, jint param1, jlong param2, jint param3) {
	jtype frame[19];
	auto stack = &frame[12];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/math/BigDecimal:add", 19 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_math_BigDecimal(ctx);
	frame[0].l = param0;
	frame[2].i = param1;
	frame[3].l = param2;
	frame[5].i = param3;
	{
	LINE_NUMBER(4442);
	frame[6].l = ((jlong((frame[2].i))) - (jlong((frame[5].i))));
	LINE_NUMBER(4443);
	if ((longCompare((frame[6].l), (jlong(0)))) != 0) goto label_2;
	}
	{
	LINE_NUMBER(4444);
	sp[0].o = (jobject)SM_java_math_BigDecimal_add_long_long_int_R_java_math_BigDecimal(ctx, (frame[0].l), (frame[3].l), (frame[2].i));
	popStackFrame(ctx);
	return sp[0].o;
	}
label_2:;
	{
	LINE_NUMBER(4445);
	if ((longCompare((frame[6].l), (jlong(0)))) >= 0) goto label_4;
	}
	{
	LINE_NUMBER(4446);
	jint temp0 = (jint)SM_java_math_BigDecimal_checkScale_long_long_R_int(ctx, (frame[0].l), (-(frame[6].l)));
	frame[8].i = temp0;
	LINE_NUMBER(4447);
	jlong temp1 = (jlong)SM_java_math_BigDecimal_longMultiplyPowerTen_long_int_R_long(ctx, (frame[0].l), (frame[8].i));
	frame[9].l = temp1;
	LINE_NUMBER(4448);
	if ((longCompare((frame[9].l), (jlong(-9223372036854775807ll)))) == 0) goto label_8;
	}
	{
	LINE_NUMBER(4449);
	sp[0].o = (jobject)SM_java_math_BigDecimal_add_long_long_int_R_java_math_BigDecimal(ctx, (frame[9].l), (frame[3].l), (frame[5].i));
	popStackFrame(ctx);
	return sp[0].o;
	}
label_8:;
	{
	LINE_NUMBER(4451);
	sp[0].o = (jobject)SM_java_math_BigDecimal_bigMultiplyPowerTen_long_int_R_java_math_BigInteger(ctx, (frame[0].l), (frame[8].i));
	sp[0].o = (jobject)((func_java_math_BigInteger_add_long_R_java_math_BigInteger) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_math_BigInteger_add_long_R_java_math_BigInteger])(ctx, sp[0].o, (frame[3].l));
	frame[11].o = sp[0].o;
	LINE_NUMBER(4452);
	if ((longCompare(((frame[0].l) ^ (frame[3].l)), (jlong(0)))) < 0) goto label_11;
	}
	{
	LINE_NUMBER(4453);
	clinit_java_math_BigDecimal(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_math_BigDecimal);
	init_java_math_BigDecimal_java_math_BigInteger_long_int_int(ctx, sp[0].o, (frame[11].o), (jlong(-9223372036854775807ll)), (frame[5].i), (jint(0)));
	sp += 1;
	goto label_13;
	}
label_11:;
	{
	LINE_NUMBER(4454);
	sp[0].o = (jobject)SM_java_math_BigDecimal_valueOf_java_math_BigInteger_int_int_R_java_math_BigDecimal(ctx, (frame[11].o), (frame[5].i), (jint(0)));
	sp += 1;
	}
label_13:;
	LINE_NUMBER(4452);
	popStackFrame(ctx);
	INST_ARETURN();
label_4:;
	{
	LINE_NUMBER(4457);
	jint temp0 = (jint)SM_java_math_BigDecimal_checkScale_long_long_R_int(ctx, (frame[3].l), (frame[6].l));
	frame[8].i = temp0;
	LINE_NUMBER(4458);
	jlong temp1 = (jlong)SM_java_math_BigDecimal_longMultiplyPowerTen_long_int_R_long(ctx, (frame[3].l), (frame[8].i));
	frame[9].l = temp1;
	LINE_NUMBER(4459);
	if ((longCompare((frame[9].l), (jlong(-9223372036854775807ll)))) == 0) goto label_16;
	}
	{
	LINE_NUMBER(4460);
	sp[0].o = (jobject)SM_java_math_BigDecimal_add_long_long_int_R_java_math_BigDecimal(ctx, (frame[0].l), (frame[9].l), (frame[2].i));
	popStackFrame(ctx);
	return sp[0].o;
	}
label_16:;
	{
	LINE_NUMBER(4462);
	sp[0].o = (jobject)SM_java_math_BigDecimal_bigMultiplyPowerTen_long_int_R_java_math_BigInteger(ctx, (frame[3].l), (frame[8].i));
	sp[0].o = (jobject)((func_java_math_BigInteger_add_long_R_java_math_BigInteger) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_math_BigInteger_add_long_R_java_math_BigInteger])(ctx, sp[0].o, (frame[0].l));
	frame[11].o = sp[0].o;
	LINE_NUMBER(4463);
	if ((longCompare(((frame[0].l) ^ (frame[3].l)), (jlong(0)))) < 0) goto label_19;
	}
	{
	LINE_NUMBER(4464);
	clinit_java_math_BigDecimal(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_math_BigDecimal);
	init_java_math_BigDecimal_java_math_BigInteger_long_int_int(ctx, sp[0].o, (frame[11].o), (jlong(-9223372036854775807ll)), (frame[2].i), (jint(0)));
	sp += 1;
	goto label_21;
	}
label_19:;
	{
	LINE_NUMBER(4465);
	sp[0].o = (jobject)SM_java_math_BigDecimal_valueOf_java_math_BigInteger_int_int_R_java_math_BigDecimal(ctx, (frame[11].o), (frame[2].i), (jint(0)));
	sp += 1;
	}
label_21:;
	LINE_NUMBER(4463);
	popStackFrame(ctx);
	INST_ARETURN();

	popStackFrame(ctx);
}

jobject SM_java_math_BigDecimal_add_long_int_java_math_BigInteger_int_R_java_math_BigDecimal(jcontext ctx, jlong param0, jint param1, jobject param2, jint param3) {
	jtype frame[20];
	auto stack = &frame[13];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/math/BigDecimal:add", 20 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_math_BigDecimal(ctx);
	frame[0].l = param0;
	frame[2].i = param1;
	frame[3].o = param2;
	frame[4].i = param3;
	{
	LINE_NUMBER(4471);
	frame[5].i = (frame[2].i);
	LINE_NUMBER(4472);
	frame[6].l = ((jlong((frame[5].i))) - (jlong((frame[4].i))));
	LINE_NUMBER(4473);
	jint temp0 = (jint)SM_java_lang_Long_signum_long_R_int(ctx, (frame[0].l));
	if (temp0 != ((jint)((java_math_BigInteger *) NULL_CHECK((frame[3].o)))->F_signum)) goto label_3;
	}
	INST_ICONST(1);
	goto label_4;
label_3:;
	INST_ICONST(0);
label_4:;
	{
	sp -= 1;
	frame[8].i = sp[0].i;
	LINE_NUMBER(4475);
	if ((longCompare((frame[6].l), (jlong(0)))) >= 0) goto label_6;
	}
	{
	LINE_NUMBER(4476);
	jint temp0 = (jint)SM_java_math_BigDecimal_checkScale_long_long_R_int(ctx, (frame[0].l), (-(frame[6].l)));
	frame[10].i = temp0;
	LINE_NUMBER(4477);
	frame[5].i = (frame[4].i);
	LINE_NUMBER(4478);
	jlong temp1 = (jlong)SM_java_math_BigDecimal_longMultiplyPowerTen_long_int_R_long(ctx, (frame[0].l), (frame[10].i));
	frame[11].l = temp1;
	LINE_NUMBER(4479);
	if ((longCompare((frame[11].l), (jlong(-9223372036854775807ll)))) != 0) goto label_11;
	}
	{
	LINE_NUMBER(4480);
	sp[0].o = frame[3].o;
	sp[1].o = (jobject)SM_java_math_BigDecimal_bigMultiplyPowerTen_long_int_R_java_math_BigInteger(ctx, (frame[0].l), (frame[10].i));
	sp[0].o = (jobject)((func_java_math_BigInteger_add_java_math_BigInteger_R_java_math_BigInteger) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_math_BigInteger_add_java_math_BigInteger_R_java_math_BigInteger])(ctx, sp[0].o, sp[1].o);
	frame[9].o = sp[0].o;
	goto label_14;
	}
label_11:;
	{
	LINE_NUMBER(4482);
	sp[0].o = (jobject)((func_java_math_BigInteger_add_long_R_java_math_BigInteger) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_java_math_BigInteger_add_long_R_java_math_BigInteger])(ctx, (frame[3].o), (frame[11].l));
	frame[9].o = sp[0].o;
	}
label_14:;
	LINE_NUMBER(4484);
	goto label_15;
label_6:;
	{
	LINE_NUMBER(4485);
	jint temp0 = (jint)SM_java_math_BigDecimal_checkScale_java_math_BigInteger_long_R_int(ctx, (frame[3].o), (frame[6].l));
	frame[10].i = temp0;
	LINE_NUMBER(4486);
	sp[0].o = (jobject)SM_java_math_BigDecimal_bigMultiplyPowerTen_java_math_BigInteger_int_R_java_math_BigInteger(ctx, (frame[3].o), (frame[10].i));
	frame[3].o = sp[0].o;
	LINE_NUMBER(4487);
	sp[0].o = (jobject)((func_java_math_BigInteger_add_long_R_java_math_BigInteger) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_java_math_BigInteger_add_long_R_java_math_BigInteger])(ctx, (frame[3].o), (frame[0].l));
	frame[9].o = sp[0].o;
	}
label_15:;
	{
	LINE_NUMBER(4489);
	if ((frame[8].i) == 0) goto label_18;
	}
	{
	LINE_NUMBER(4490);
	clinit_java_math_BigDecimal(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_math_BigDecimal);
	init_java_math_BigDecimal_java_math_BigInteger_long_int_int(ctx, sp[0].o, (frame[9].o), (jlong(-9223372036854775807ll)), (frame[5].i), (jint(0)));
	sp += 1;
	goto label_20;
	}
label_18:;
	{
	LINE_NUMBER(4491);
	sp[0].o = (jobject)SM_java_math_BigDecimal_valueOf_java_math_BigInteger_int_int_R_java_math_BigDecimal(ctx, (frame[9].o), (frame[5].i), (jint(0)));
	sp += 1;
	}
label_20:;
	LINE_NUMBER(4489);
	popStackFrame(ctx);
	INST_ARETURN();

	popStackFrame(ctx);
}

jobject SM_java_math_BigDecimal_add_java_math_BigInteger_int_java_math_BigInteger_int_R_java_math_BigDecimal(jcontext ctx, jobject param0, jint param1, jobject param2, jint param3) {
	jtype frame[15];
	auto stack = &frame[8];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/math/BigDecimal:add", 15 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_math_BigDecimal(ctx);
	frame[0].o = param0;
	frame[1].i = param1;
	frame[2].o = param2;
	frame[3].i = param3;
	{
	LINE_NUMBER(4495);
	frame[4].i = (frame[1].i);
	LINE_NUMBER(4496);
	frame[5].l = ((jlong((frame[4].i))) - (jlong((frame[3].i))));
	LINE_NUMBER(4497);
	if ((longCompare((frame[5].l), (jlong(0)))) == 0) goto label_3;
	}
	{
	LINE_NUMBER(4498);
	if ((longCompare((frame[5].l), (jlong(0)))) >= 0) goto label_5;
	}
	{
	LINE_NUMBER(4499);
	jint temp0 = (jint)SM_java_math_BigDecimal_checkScale_java_math_BigInteger_long_R_int(ctx, (frame[0].o), (-(frame[5].l)));
	frame[7].i = temp0;
	LINE_NUMBER(4500);
	frame[4].i = (frame[3].i);
	LINE_NUMBER(4501);
	sp[0].o = (jobject)SM_java_math_BigDecimal_bigMultiplyPowerTen_java_math_BigInteger_int_R_java_math_BigInteger(ctx, (frame[0].o), (frame[7].i));
	frame[0].o = sp[0].o;
	LINE_NUMBER(4502);
	goto label_3;
	}
label_5:;
	{
	LINE_NUMBER(4503);
	jint temp0 = (jint)SM_java_math_BigDecimal_checkScale_java_math_BigInteger_long_R_int(ctx, (frame[2].o), (frame[5].l));
	frame[7].i = temp0;
	LINE_NUMBER(4504);
	sp[0].o = (jobject)SM_java_math_BigDecimal_bigMultiplyPowerTen_java_math_BigInteger_int_R_java_math_BigInteger(ctx, (frame[2].o), (frame[7].i));
	frame[2].o = sp[0].o;
	}
label_3:;
	{
	LINE_NUMBER(4507);
	sp[0].o = (jobject)((func_java_math_BigInteger_add_java_math_BigInteger_R_java_math_BigInteger) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_math_BigInteger_add_java_math_BigInteger_R_java_math_BigInteger])(ctx, (frame[0].o), (frame[2].o));
	frame[7].o = sp[0].o;
	LINE_NUMBER(4508);
	if (((jint)((java_math_BigInteger *) NULL_CHECK((frame[0].o)))->F_signum) != ((jint)((java_math_BigInteger *) NULL_CHECK((frame[2].o)))->F_signum)) goto label_12;
	}
	{
	LINE_NUMBER(4509);
	clinit_java_math_BigDecimal(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_math_BigDecimal);
	init_java_math_BigDecimal_java_math_BigInteger_long_int_int(ctx, sp[0].o, (frame[7].o), (jlong(-9223372036854775807ll)), (frame[4].i), (jint(0)));
	sp += 1;
	goto label_14;
	}
label_12:;
	{
	LINE_NUMBER(4510);
	sp[0].o = (jobject)SM_java_math_BigDecimal_valueOf_java_math_BigInteger_int_int_R_java_math_BigDecimal(ctx, (frame[7].o), (frame[4].i), (jint(0)));
	sp += 1;
	}
label_14:;
	LINE_NUMBER(4508);
	popStackFrame(ctx);
	INST_ARETURN();

	popStackFrame(ctx);
}

jobject SM_java_math_BigDecimal_bigMultiplyPowerTen_long_int_R_java_math_BigInteger(jcontext ctx, jlong param0, jint param1) {
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/math/BigDecimal:bigMultiplyPowerTen", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_math_BigDecimal(ctx);
	frame[0].l = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(4514);
	if ((frame[2].i) > 0) goto label_1;
	}
	{
	LINE_NUMBER(4515);
	sp[0].o = (jobject)SM_java_math_BigInteger_valueOf_long_R_java_math_BigInteger(ctx, (frame[0].l));
	popStackFrame(ctx);
	return sp[0].o;
	}
label_1:;
	{
	LINE_NUMBER(4516);
	sp[0].o = (jobject)SM_java_math_BigDecimal_bigTenToThe_int_R_java_math_BigInteger(ctx, (frame[2].i));
	sp[0].o = (jobject)((func_java_math_BigInteger_multiply_long_R_java_math_BigInteger) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_math_BigInteger_multiply_long_R_java_math_BigInteger])(ctx, sp[0].o, (frame[0].l));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject SM_java_math_BigDecimal_bigMultiplyPowerTen_java_math_BigInteger_int_R_java_math_BigInteger(jcontext ctx, jobject param0, jint param1) {
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/math/BigDecimal:bigMultiplyPowerTen", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_math_BigDecimal(ctx);
	frame[0].o = param0;
	frame[1].i = param1;
	{
	LINE_NUMBER(4520);
	if ((frame[1].i) > 0) goto label_1;
	}
	{
	LINE_NUMBER(4521);
	popStackFrame(ctx);
	return (frame[0].o);
	}
label_1:;
	{
	LINE_NUMBER(4522);
	jint temp0 = frame[1].i;
	clinit_java_math_BigDecimal(ctx);
	sp[0].o = (jobject)SF_java_math_BigDecimal_LONG_TEN_POWERS_TABLE;
	if (temp0 >= (((jarray) nullCheck(ctx, sp[0].o))->length)) goto label_3;
	}
	{
	LINE_NUMBER(4523);
	sp[0].o = frame[0].o;
	clinit_java_math_BigDecimal(ctx);
	sp[1].o = (jobject)SF_java_math_BigDecimal_LONG_TEN_POWERS_TABLE;
	sp[0].o = (jobject)((func_java_math_BigInteger_multiply_long_R_java_math_BigInteger) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_math_BigInteger_multiply_long_R_java_math_BigInteger])(ctx, sp[0].o, ((jlong)ARRAY_ACCESS(jlong, sp[1].o, (frame[1].i))));
	popStackFrame(ctx);
	return sp[0].o;
	}
label_3:;
	{
	LINE_NUMBER(4525);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)SM_java_math_BigDecimal_bigTenToThe_int_R_java_math_BigInteger(ctx, (frame[1].i));
	sp[0].o = (jobject)((func_java_math_BigInteger_multiply_java_math_BigInteger_R_java_math_BigInteger) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_math_BigInteger_multiply_java_math_BigInteger_R_java_math_BigInteger])(ctx, sp[0].o, sp[1].o);
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject SM_java_math_BigDecimal_divideSmallFastPath_long_int_long_int_long_java_math_MathContext_R_java_math_BigDecimal(jcontext ctx, jlong param0, jint param1, jlong param2, jint param3, jlong param4, jobject param5) {
	jtype frame[32];
	auto stack = &frame[22];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/math/BigDecimal:divideSmallFastPath", 32 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_math_BigDecimal(ctx);
	frame[0].l = param0;
	frame[2].i = param1;
	frame[3].l = param2;
	frame[5].i = param3;
	frame[6].l = param4;
	frame[8].o = param5;
	{
	LINE_NUMBER(4538);
	frame[9].i = ((jint)((java_math_MathContext *) NULL_CHECK((frame[8].o)))->F_precision);
	LINE_NUMBER(4539);
	sp[0].o = (jobject)((java_math_MathContext *) NULL_CHECK((frame[8].o)))->F_roundingMode;
	frame[10].i = ((jint)((java_math_RoundingMode *) NULL_CHECK(sp[0].o))->F_oldMode);
	LINE_NUMBER(4541);
	if ((clinit_java_math_BigDecimal(ctx), (jint)SF_java_math_BigDecimal_$assertionsDisabled) != 0) goto label_3;
	}
	{
	if ((frame[2].i) > (frame[5].i)) goto label_4;
	}
	{
	if ((frame[5].i) >= (18)) goto label_4;
	}
	{
	if ((frame[9].i) < (18)) goto label_3;
	}
label_4:;
	{
	clinit_java_lang_AssertionError(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_AssertionError);
	init_java_lang_AssertionError(ctx, sp[0].o);
	throwException(ctx, sp[0].o);	}
label_3:;
	{
	LINE_NUMBER(4542);
	frame[11].i = ((frame[5].i) - (frame[2].i));
	LINE_NUMBER(4543);
	if ((frame[11].i) != 0) goto label_6;
	}
	INST_LLOAD(0);
	goto label_7;
label_6:;
	{
	LINE_NUMBER(4544);
	jlong temp0 = (jlong)SM_java_math_BigDecimal_longMultiplyPowerTen_long_int_R_long(ctx, (frame[0].l), (frame[11].i));
	sp[0].l = temp0;
	sp += 1;
	}
label_7:;
	{
	sp -= 1;
	frame[12].l = sp[0].l;
	LINE_NUMBER(4547);
	jint temp0 = (jint)SM_java_math_BigDecimal_longCompareMagnitude_long_long_R_int(ctx, (frame[12].l), (frame[3].l));
	frame[15].i = temp0;
	LINE_NUMBER(4548);
	if ((frame[15].i) <= 0) goto label_10;
	}
	{
	LINE_NUMBER(4549);
	INST_IINC(5, -1);
	LINE_NUMBER(4550);
	jint temp0 = (jint)SM_java_math_BigDecimal_checkScaleNonZero_long_R_int(ctx, ((((frame[6].l) + (jlong((frame[5].i)))) - (jlong((frame[2].i)))) + (jlong((frame[9].i)))));
	frame[16].i = temp0;
	LINE_NUMBER(4551);
	jint temp1 = (jint)SM_java_math_BigDecimal_checkScaleNonZero_long_R_int(ctx, (((jlong((frame[9].i))) + (jlong((frame[5].i)))) - (jlong((frame[2].i)))));
	if (temp1 <= 0) goto label_14;
	}
	{
	LINE_NUMBER(4553);
	jint temp0 = (jint)SM_java_math_BigDecimal_checkScaleNonZero_long_R_int(ctx, (((jlong((frame[9].i))) + (jlong((frame[5].i)))) - (jlong((frame[2].i)))));
	frame[17].i = temp0;
	LINE_NUMBER(4555);
	jlong temp1 = (jlong)SM_java_math_BigDecimal_longMultiplyPowerTen_long_int_R_long(ctx, (frame[0].l), (frame[17].i));
	frame[18].l = temp1;
	if ((longCompare(temp1, (jlong(-9223372036854775807ll)))) != 0) goto label_18;
	}
	{
	LINE_NUMBER(4556);
	frame[14].o = (jobject(nullptr));
	LINE_NUMBER(4557);
	if (((frame[9].i) - (jint(1))) < 0) goto label_21;
	}
	{
	jint temp0 = (frame[9].i) - (jint(1));
	clinit_java_math_BigDecimal(ctx);
	sp[0].o = (jobject)SF_java_math_BigDecimal_LONG_TEN_POWERS_TABLE;
	if (temp0 >= (((jarray) nullCheck(ctx, sp[0].o))->length)) goto label_21;
	}
	{
	LINE_NUMBER(4558);
	clinit_java_math_BigDecimal(ctx);
	sp[0].o = (jobject)SF_java_math_BigDecimal_LONG_TEN_POWERS_TABLE;
	jlong temp0 = (jlong)ARRAY_ACCESS(jlong, sp[0].o, ((frame[9].i) - (jint(1))));
	jlong temp1 = frame[12].l;
	jlong temp2 = frame[3].l;
	jint temp3 = frame[16].i;
	jint temp4 = frame[10].i;
	jint temp5 = (jint)SM_java_math_BigDecimal_checkScaleNonZero_long_R_int(ctx, (frame[6].l));
	sp[0].o = (jobject)SM_java_math_BigDecimal_multiplyDivideAndRound_long_long_long_int_int_int_R_java_math_BigDecimal(ctx, temp0, temp1, temp2, temp3, temp4, temp5);
	frame[14].o = sp[0].o;
	}
label_21:;
	{
	LINE_NUMBER(4560);
	if ((frame[14].o) != nullptr) goto label_23;
	}
	{
	LINE_NUMBER(4561);
	sp[0].o = (jobject)SM_java_math_BigDecimal_bigMultiplyPowerTen_long_int_R_java_math_BigInteger(ctx, (frame[12].l), ((frame[9].i) - (jint(1))));
	frame[20].o = sp[0].o;
	LINE_NUMBER(4562);
	sp[0].o = frame[20].o;
	jlong temp0 = frame[3].l;
	jint temp1 = frame[16].i;
	jint temp2 = frame[10].i;
	jlong temp3 = frame[6].l;
	LINE_NUMBER(4563);
	jint temp4 = (jint)SM_java_math_BigDecimal_checkScaleNonZero_long_R_int(ctx, temp3);
	LINE_NUMBER(4562);
	sp[0].o = (jobject)SM_java_math_BigDecimal_divideAndRound_java_math_BigInteger_long_int_int_int_R_java_math_BigDecimal(ctx, sp[0].o, temp0, temp1, temp2, temp4);
	frame[14].o = sp[0].o;
	LINE_NUMBER(4564);
	goto label_23;
	}
label_18:;
	{
	LINE_NUMBER(4566);
	jlong temp0 = frame[18].l;
	jlong temp1 = frame[3].l;
	jint temp2 = frame[16].i;
	jint temp3 = frame[10].i;
	jint temp4 = (jint)SM_java_math_BigDecimal_checkScaleNonZero_long_R_int(ctx, (frame[6].l));
	sp[0].o = (jobject)SM_java_math_BigDecimal_divideAndRound_long_long_int_int_int_R_java_math_BigDecimal(ctx, temp0, temp1, temp2, temp3, temp4);
	frame[14].o = sp[0].o;
	}
label_23:;
	LINE_NUMBER(4568);
	goto label_29;
label_14:;
	{
	LINE_NUMBER(4569);
	jint temp0 = (jint)SM_java_math_BigDecimal_checkScaleNonZero_long_R_int(ctx, ((jlong((frame[2].i))) - (jlong((frame[9].i)))));
	frame[17].i = temp0;
	LINE_NUMBER(4571);
	if ((frame[17].i) != (frame[5].i)) goto label_31;
	}
	{
	LINE_NUMBER(4572);
	jlong temp0 = frame[0].l;
	jlong temp1 = frame[3].l;
	jint temp2 = frame[16].i;
	jint temp3 = frame[10].i;
	jint temp4 = (jint)SM_java_math_BigDecimal_checkScaleNonZero_long_R_int(ctx, (frame[6].l));
	sp[0].o = (jobject)SM_java_math_BigDecimal_divideAndRound_long_long_int_int_int_R_java_math_BigDecimal(ctx, temp0, temp1, temp2, temp3, temp4);
	frame[14].o = sp[0].o;
	goto label_29;
	}
label_31:;
	{
	LINE_NUMBER(4574);
	jint temp0 = (jint)SM_java_math_BigDecimal_checkScaleNonZero_long_R_int(ctx, ((jlong((frame[17].i))) - (jlong((frame[5].i)))));
	frame[18].i = temp0;
	LINE_NUMBER(4576);
	jlong temp1 = (jlong)SM_java_math_BigDecimal_longMultiplyPowerTen_long_int_R_long(ctx, (frame[3].l), (frame[18].i));
	frame[19].l = temp1;
	if ((longCompare(temp1, (jlong(-9223372036854775807ll)))) != 0) goto label_36;
	}
	{
	LINE_NUMBER(4577);
	sp[0].o = (jobject)SM_java_math_BigDecimal_bigMultiplyPowerTen_long_int_R_java_math_BigInteger(ctx, (frame[3].l), (frame[18].i));
	frame[21].o = sp[0].o;
	LINE_NUMBER(4578);
	sp[0].o = (jobject)SM_java_math_BigInteger_valueOf_long_R_java_math_BigInteger(ctx, (frame[0].l));
	sp[1].o = frame[21].o;
	jint temp0 = frame[16].i;
	jint temp1 = frame[10].i;
	jlong temp2 = frame[6].l;
	LINE_NUMBER(4579);
	jint temp3 = (jint)SM_java_math_BigDecimal_checkScaleNonZero_long_R_int(ctx, temp2);
	LINE_NUMBER(4578);
	sp[0].o = (jobject)SM_java_math_BigDecimal_divideAndRound_java_math_BigInteger_java_math_BigInteger_int_int_int_R_java_math_BigDecimal(ctx, sp[0].o, sp[1].o, temp0, temp1, temp3);
	frame[14].o = sp[0].o;
	LINE_NUMBER(4580);
	goto label_29;
	}
label_36:;
	{
	LINE_NUMBER(4581);
	jlong temp0 = frame[0].l;
	jlong temp1 = frame[19].l;
	jint temp2 = frame[16].i;
	jint temp3 = frame[10].i;
	jint temp4 = (jint)SM_java_math_BigDecimal_checkScaleNonZero_long_R_int(ctx, (frame[6].l));
	sp[0].o = (jobject)SM_java_math_BigDecimal_divideAndRound_long_long_int_int_int_R_java_math_BigDecimal(ctx, temp0, temp1, temp2, temp3, temp4);
	frame[14].o = sp[0].o;
	}
label_29:;
	LINE_NUMBER(4585);
	goto label_42;
label_10:;
	{
	LINE_NUMBER(4588);
	jint temp0 = (jint)SM_java_math_BigDecimal_checkScaleNonZero_long_R_int(ctx, ((((frame[6].l) + (jlong((frame[5].i)))) - (jlong((frame[2].i)))) + (jlong((frame[9].i)))));
	frame[16].i = temp0;
	LINE_NUMBER(4589);
	if ((frame[15].i) != 0) goto label_44;
	}
	{
	LINE_NUMBER(4591);
	if ((longCompare((frame[12].l), (jlong(0)))) >= 0) goto label_46;
	}
	INST_ICONST(1);
	goto label_47;
label_46:;
	INST_ICONST(0);
label_47:;
	{
	if ((longCompare((frame[3].l), (jlong(0)))) >= 0) goto label_48;
	}
	INST_ICONST(1);
	goto label_49;
label_48:;
	INST_ICONST(0);
label_49:;
	sp -= 2; if (sp[0].i != sp[1].i) goto label_50;
	INST_ICONST(1);
	goto label_51;
label_50:;
	INST_ICONST(-1);
label_51:;
	{
	sp -= 1;
	jint temp0 = frame[9].i;
	jint temp1 = frame[16].i;
	jint temp2 = (jint)SM_java_math_BigDecimal_checkScaleNonZero_long_R_int(ctx, (frame[6].l));
	sp[0].o = (jobject)SM_java_math_BigDecimal_roundedTenPower_int_int_int_int_R_java_math_BigDecimal(ctx, sp[0].i, temp0, temp1, temp2);
	frame[14].o = sp[0].o;
	goto label_42;
	}
label_44:;
	{
	LINE_NUMBER(4595);
	jlong temp0 = (jlong)SM_java_math_BigDecimal_longMultiplyPowerTen_long_int_R_long(ctx, (frame[12].l), (frame[9].i));
	frame[17].l = temp0;
	if ((longCompare(temp0, (jlong(-9223372036854775807ll)))) != 0) goto label_54;
	}
	{
	LINE_NUMBER(4596);
	frame[14].o = (jobject(nullptr));
	LINE_NUMBER(4597);
	jint temp0 = frame[9].i;
	clinit_java_math_BigDecimal(ctx);
	sp[0].o = (jobject)SF_java_math_BigDecimal_LONG_TEN_POWERS_TABLE;
	if (temp0 >= (((jarray) nullCheck(ctx, sp[0].o))->length)) goto label_57;
	}
	{
	LINE_NUMBER(4598);
	clinit_java_math_BigDecimal(ctx);
	sp[0].o = (jobject)SF_java_math_BigDecimal_LONG_TEN_POWERS_TABLE;
	jlong temp0 = (jlong)ARRAY_ACCESS(jlong, sp[0].o, (frame[9].i));
	jlong temp1 = frame[12].l;
	jlong temp2 = frame[3].l;
	jint temp3 = frame[16].i;
	jint temp4 = frame[10].i;
	jint temp5 = (jint)SM_java_math_BigDecimal_checkScaleNonZero_long_R_int(ctx, (frame[6].l));
	sp[0].o = (jobject)SM_java_math_BigDecimal_multiplyDivideAndRound_long_long_long_int_int_int_R_java_math_BigDecimal(ctx, temp0, temp1, temp2, temp3, temp4, temp5);
	frame[14].o = sp[0].o;
	}
label_57:;
	{
	LINE_NUMBER(4600);
	if ((frame[14].o) != nullptr) goto label_42;
	}
	{
	LINE_NUMBER(4601);
	sp[0].o = (jobject)SM_java_math_BigDecimal_bigMultiplyPowerTen_long_int_R_java_math_BigInteger(ctx, (frame[12].l), (frame[9].i));
	frame[19].o = sp[0].o;
	LINE_NUMBER(4602);
	sp[0].o = frame[19].o;
	jlong temp0 = frame[3].l;
	jint temp1 = frame[16].i;
	jint temp2 = frame[10].i;
	jlong temp3 = frame[6].l;
	LINE_NUMBER(4603);
	jint temp4 = (jint)SM_java_math_BigDecimal_checkScaleNonZero_long_R_int(ctx, temp3);
	LINE_NUMBER(4602);
	sp[0].o = (jobject)SM_java_math_BigDecimal_divideAndRound_java_math_BigInteger_long_int_int_int_R_java_math_BigDecimal(ctx, sp[0].o, temp0, temp1, temp2, temp4);
	frame[14].o = sp[0].o;
	LINE_NUMBER(4604);
	goto label_42;
	}
label_54:;
	{
	LINE_NUMBER(4606);
	jlong temp0 = frame[17].l;
	jlong temp1 = frame[3].l;
	jint temp2 = frame[16].i;
	jint temp3 = frame[10].i;
	jint temp4 = (jint)SM_java_math_BigDecimal_checkScaleNonZero_long_R_int(ctx, (frame[6].l));
	sp[0].o = (jobject)SM_java_math_BigDecimal_divideAndRound_long_long_int_int_int_R_java_math_BigDecimal(ctx, temp0, temp1, temp2, temp3, temp4);
	frame[14].o = sp[0].o;
	}
label_42:;
	{
	LINE_NUMBER(4611);
	sp[0].o = (jobject)SM_java_math_BigDecimal_doRound_java_math_BigDecimal_java_math_MathContext_R_java_math_BigDecimal(ctx, (frame[14].o), (frame[8].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject SM_java_math_BigDecimal_divide_long_int_long_int_long_java_math_MathContext_R_java_math_BigDecimal(jcontext ctx, jlong param0, jint param1, jlong param2, jint param3, jlong param4, jobject param5) {
	jtype frame[27];
	auto stack = &frame[18];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/math/BigDecimal:divide", 27 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_math_BigDecimal(ctx);
	frame[0].l = param0;
	frame[2].i = param1;
	frame[3].l = param2;
	frame[5].i = param3;
	frame[6].l = param4;
	frame[8].o = param5;
	{
	LINE_NUMBER(4619);
	frame[9].i = ((jint)((java_math_MathContext *) NULL_CHECK((frame[8].o)))->F_precision);
	LINE_NUMBER(4620);
	if ((frame[2].i) > (frame[5].i)) goto label_2;
	}
	{
	if ((frame[5].i) >= (18)) goto label_2;
	}
	{
	if ((frame[9].i) >= (18)) goto label_2;
	}
	{
	LINE_NUMBER(4621);
	sp[0].o = (jobject)SM_java_math_BigDecimal_divideSmallFastPath_long_int_long_int_long_java_math_MathContext_R_java_math_BigDecimal(ctx, (frame[0].l), (frame[2].i), (frame[3].l), (frame[5].i), (frame[6].l), (frame[8].o));
	popStackFrame(ctx);
	return sp[0].o;
	}
label_2:;
	{
	LINE_NUMBER(4623);
	jint temp0 = (jint)SM_java_math_BigDecimal_compareMagnitudeNormalized_long_int_long_int_R_int(ctx, (frame[0].l), (frame[2].i), (frame[3].l), (frame[5].i));
	if (temp0 <= 0) goto label_4;
	}
	LINE_NUMBER(4624);
	INST_IINC(5, -1);
label_4:;
	{
	LINE_NUMBER(4626);
	sp[0].o = (jobject)((java_math_MathContext *) NULL_CHECK((frame[8].o)))->F_roundingMode;
	frame[10].i = ((jint)((java_math_RoundingMode *) NULL_CHECK(sp[0].o))->F_oldMode);
	LINE_NUMBER(4630);
	jint temp0 = (jint)SM_java_math_BigDecimal_checkScaleNonZero_long_R_int(ctx, ((((frame[6].l) + (jlong((frame[5].i)))) - (jlong((frame[2].i)))) + (jlong((frame[9].i)))));
	frame[11].i = temp0;
	LINE_NUMBER(4632);
	jint temp1 = (jint)SM_java_math_BigDecimal_checkScaleNonZero_long_R_int(ctx, (((jlong((frame[9].i))) + (jlong((frame[5].i)))) - (jlong((frame[2].i)))));
	if (temp1 <= 0) goto label_8;
	}
	{
	LINE_NUMBER(4633);
	jint temp0 = (jint)SM_java_math_BigDecimal_checkScaleNonZero_long_R_int(ctx, (((jlong((frame[9].i))) + (jlong((frame[5].i)))) - (jlong((frame[2].i)))));
	frame[13].i = temp0;
	LINE_NUMBER(4635);
	jlong temp1 = (jlong)SM_java_math_BigDecimal_longMultiplyPowerTen_long_int_R_long(ctx, (frame[0].l), (frame[13].i));
	frame[14].l = temp1;
	if ((longCompare(temp1, (jlong(-9223372036854775807ll)))) != 0) goto label_12;
	}
	{
	LINE_NUMBER(4636);
	sp[0].o = (jobject)SM_java_math_BigDecimal_bigMultiplyPowerTen_long_int_R_java_math_BigInteger(ctx, (frame[0].l), (frame[13].i));
	frame[16].o = sp[0].o;
	LINE_NUMBER(4637);
	sp[0].o = frame[16].o;
	jlong temp0 = frame[3].l;
	jint temp1 = frame[11].i;
	jint temp2 = frame[10].i;
	jint temp3 = (jint)SM_java_math_BigDecimal_checkScaleNonZero_long_R_int(ctx, (frame[6].l));
	sp[0].o = (jobject)SM_java_math_BigDecimal_divideAndRound_java_math_BigInteger_long_int_int_int_R_java_math_BigDecimal(ctx, sp[0].o, temp0, temp1, temp2, temp3);
	frame[12].o = sp[0].o;
	LINE_NUMBER(4638);
	goto label_16;
	}
label_12:;
	{
	LINE_NUMBER(4639);
	jlong temp0 = frame[14].l;
	jlong temp1 = frame[3].l;
	jint temp2 = frame[11].i;
	jint temp3 = frame[10].i;
	jint temp4 = (jint)SM_java_math_BigDecimal_checkScaleNonZero_long_R_int(ctx, (frame[6].l));
	sp[0].o = (jobject)SM_java_math_BigDecimal_divideAndRound_long_long_int_int_int_R_java_math_BigDecimal(ctx, temp0, temp1, temp2, temp3, temp4);
	frame[12].o = sp[0].o;
	}
label_16:;
	LINE_NUMBER(4641);
	goto label_17;
label_8:;
	{
	LINE_NUMBER(4642);
	jint temp0 = (jint)SM_java_math_BigDecimal_checkScaleNonZero_long_R_int(ctx, ((jlong((frame[2].i))) - (jlong((frame[9].i)))));
	frame[13].i = temp0;
	LINE_NUMBER(4644);
	if ((frame[13].i) != (frame[5].i)) goto label_19;
	}
	{
	LINE_NUMBER(4645);
	jlong temp0 = frame[0].l;
	jlong temp1 = frame[3].l;
	jint temp2 = frame[11].i;
	jint temp3 = frame[10].i;
	jint temp4 = (jint)SM_java_math_BigDecimal_checkScaleNonZero_long_R_int(ctx, (frame[6].l));
	sp[0].o = (jobject)SM_java_math_BigDecimal_divideAndRound_long_long_int_int_int_R_java_math_BigDecimal(ctx, temp0, temp1, temp2, temp3, temp4);
	frame[12].o = sp[0].o;
	goto label_17;
	}
label_19:;
	{
	LINE_NUMBER(4647);
	jint temp0 = (jint)SM_java_math_BigDecimal_checkScaleNonZero_long_R_int(ctx, ((jlong((frame[13].i))) - (jlong((frame[5].i)))));
	frame[14].i = temp0;
	LINE_NUMBER(4649);
	jlong temp1 = (jlong)SM_java_math_BigDecimal_longMultiplyPowerTen_long_int_R_long(ctx, (frame[3].l), (frame[14].i));
	frame[15].l = temp1;
	if ((longCompare(temp1, (jlong(-9223372036854775807ll)))) != 0) goto label_24;
	}
	{
	LINE_NUMBER(4650);
	sp[0].o = (jobject)SM_java_math_BigDecimal_bigMultiplyPowerTen_long_int_R_java_math_BigInteger(ctx, (frame[3].l), (frame[14].i));
	frame[17].o = sp[0].o;
	LINE_NUMBER(4651);
	sp[0].o = (jobject)SM_java_math_BigInteger_valueOf_long_R_java_math_BigInteger(ctx, (frame[0].l));
	sp[1].o = frame[17].o;
	jint temp0 = frame[11].i;
	jint temp1 = frame[10].i;
	jlong temp2 = frame[6].l;
	LINE_NUMBER(4652);
	jint temp3 = (jint)SM_java_math_BigDecimal_checkScaleNonZero_long_R_int(ctx, temp2);
	LINE_NUMBER(4651);
	sp[0].o = (jobject)SM_java_math_BigDecimal_divideAndRound_java_math_BigInteger_java_math_BigInteger_int_int_int_R_java_math_BigDecimal(ctx, sp[0].o, sp[1].o, temp0, temp1, temp3);
	frame[12].o = sp[0].o;
	LINE_NUMBER(4653);
	goto label_17;
	}
label_24:;
	{
	LINE_NUMBER(4654);
	jlong temp0 = frame[0].l;
	jlong temp1 = frame[15].l;
	jint temp2 = frame[11].i;
	jint temp3 = frame[10].i;
	jint temp4 = (jint)SM_java_math_BigDecimal_checkScaleNonZero_long_R_int(ctx, (frame[6].l));
	sp[0].o = (jobject)SM_java_math_BigDecimal_divideAndRound_long_long_int_int_int_R_java_math_BigDecimal(ctx, temp0, temp1, temp2, temp3, temp4);
	frame[12].o = sp[0].o;
	}
label_17:;
	{
	LINE_NUMBER(4659);
	sp[0].o = (jobject)SM_java_math_BigDecimal_doRound_java_math_BigDecimal_java_math_MathContext_R_java_math_BigDecimal(ctx, (frame[12].o), (frame[8].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject SM_java_math_BigDecimal_divide_java_math_BigInteger_int_long_int_long_java_math_MathContext_R_java_math_BigDecimal(jcontext ctx, jobject param0, jint param1, jlong param2, jint param3, jlong param4, jobject param5) {
	jtype frame[24];
	auto stack = &frame[17];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/math/BigDecimal:divide", 24 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_math_BigDecimal(ctx);
	frame[0].o = param0;
	frame[1].i = param1;
	frame[2].l = param2;
	frame[4].i = param3;
	frame[5].l = param4;
	frame[7].o = param5;
	{
	LINE_NUMBER(4668);
	jint temp0 = (jint)SM_java_math_BigDecimal_compareMagnitudeNormalized_long_int_java_math_BigInteger_int_R_int(ctx, (frame[2].l), (frame[4].i), (frame[0].o), (frame[1].i));
	if ((-temp0) <= 0) goto label_1;
	}
	LINE_NUMBER(4669);
	INST_IINC(4, -1);
label_1:;
	{
	LINE_NUMBER(4671);
	frame[8].i = ((jint)((java_math_MathContext *) NULL_CHECK((frame[7].o)))->F_precision);
	LINE_NUMBER(4672);
	sp[0].o = (jobject)((java_math_MathContext *) NULL_CHECK((frame[7].o)))->F_roundingMode;
	frame[9].i = ((jint)((java_math_RoundingMode *) NULL_CHECK(sp[0].o))->F_oldMode);
	LINE_NUMBER(4678);
	jint temp0 = (jint)SM_java_math_BigDecimal_checkScaleNonZero_long_R_int(ctx, ((((frame[5].l) + (jlong((frame[4].i)))) - (jlong((frame[1].i)))) + (jlong((frame[8].i)))));
	frame[11].i = temp0;
	LINE_NUMBER(4679);
	jint temp1 = (jint)SM_java_math_BigDecimal_checkScaleNonZero_long_R_int(ctx, (((jlong((frame[8].i))) + (jlong((frame[4].i)))) - (jlong((frame[1].i)))));
	if (temp1 <= 0) goto label_6;
	}
	{
	LINE_NUMBER(4680);
	jint temp0 = (jint)SM_java_math_BigDecimal_checkScaleNonZero_long_R_int(ctx, (((jlong((frame[8].i))) + (jlong((frame[4].i)))) - (jlong((frame[1].i)))));
	frame[12].i = temp0;
	LINE_NUMBER(4681);
	sp[0].o = (jobject)SM_java_math_BigDecimal_bigMultiplyPowerTen_java_math_BigInteger_int_R_java_math_BigInteger(ctx, (frame[0].o), (frame[12].i));
	frame[13].o = sp[0].o;
	LINE_NUMBER(4682);
	sp[0].o = frame[13].o;
	jlong temp1 = frame[2].l;
	jint temp2 = frame[11].i;
	jint temp3 = frame[9].i;
	jint temp4 = (jint)SM_java_math_BigDecimal_checkScaleNonZero_long_R_int(ctx, (frame[5].l));
	sp[0].o = (jobject)SM_java_math_BigDecimal_divideAndRound_java_math_BigInteger_long_int_int_int_R_java_math_BigDecimal(ctx, sp[0].o, temp1, temp2, temp3, temp4);
	frame[10].o = sp[0].o;
	LINE_NUMBER(4683);
	goto label_11;
	}
label_6:;
	{
	LINE_NUMBER(4684);
	jint temp0 = (jint)SM_java_math_BigDecimal_checkScaleNonZero_long_R_int(ctx, ((jlong((frame[1].i))) - (jlong((frame[8].i)))));
	frame[12].i = temp0;
	LINE_NUMBER(4686);
	if ((frame[12].i) != (frame[4].i)) goto label_13;
	}
	{
	LINE_NUMBER(4687);
	sp[0].o = frame[0].o;
	jlong temp0 = frame[2].l;
	jint temp1 = frame[11].i;
	jint temp2 = frame[9].i;
	jint temp3 = (jint)SM_java_math_BigDecimal_checkScaleNonZero_long_R_int(ctx, (frame[5].l));
	sp[0].o = (jobject)SM_java_math_BigDecimal_divideAndRound_java_math_BigInteger_long_int_int_int_R_java_math_BigDecimal(ctx, sp[0].o, temp0, temp1, temp2, temp3);
	frame[10].o = sp[0].o;
	goto label_11;
	}
label_13:;
	{
	LINE_NUMBER(4689);
	jint temp0 = (jint)SM_java_math_BigDecimal_checkScaleNonZero_long_R_int(ctx, ((jlong((frame[12].i))) - (jlong((frame[4].i)))));
	frame[13].i = temp0;
	LINE_NUMBER(4691);
	jlong temp1 = (jlong)SM_java_math_BigDecimal_longMultiplyPowerTen_long_int_R_long(ctx, (frame[2].l), (frame[13].i));
	frame[14].l = temp1;
	if ((longCompare(temp1, (jlong(-9223372036854775807ll)))) != 0) goto label_18;
	}
	{
	LINE_NUMBER(4692);
	sp[0].o = (jobject)SM_java_math_BigDecimal_bigMultiplyPowerTen_long_int_R_java_math_BigInteger(ctx, (frame[2].l), (frame[13].i));
	frame[16].o = sp[0].o;
	LINE_NUMBER(4693);
	sp[0].o = frame[0].o;
	sp[1].o = frame[16].o;
	jint temp0 = frame[11].i;
	jint temp1 = frame[9].i;
	jint temp2 = (jint)SM_java_math_BigDecimal_checkScaleNonZero_long_R_int(ctx, (frame[5].l));
	sp[0].o = (jobject)SM_java_math_BigDecimal_divideAndRound_java_math_BigInteger_java_math_BigInteger_int_int_int_R_java_math_BigDecimal(ctx, sp[0].o, sp[1].o, temp0, temp1, temp2);
	frame[10].o = sp[0].o;
	LINE_NUMBER(4694);
	goto label_11;
	}
label_18:;
	{
	LINE_NUMBER(4695);
	sp[0].o = frame[0].o;
	jlong temp0 = frame[14].l;
	jint temp1 = frame[11].i;
	jint temp2 = frame[9].i;
	jint temp3 = (jint)SM_java_math_BigDecimal_checkScaleNonZero_long_R_int(ctx, (frame[5].l));
	sp[0].o = (jobject)SM_java_math_BigDecimal_divideAndRound_java_math_BigInteger_long_int_int_int_R_java_math_BigDecimal(ctx, sp[0].o, temp0, temp1, temp2, temp3);
	frame[10].o = sp[0].o;
	}
label_11:;
	{
	LINE_NUMBER(4700);
	sp[0].o = (jobject)SM_java_math_BigDecimal_doRound_java_math_BigDecimal_java_math_MathContext_R_java_math_BigDecimal(ctx, (frame[10].o), (frame[7].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject SM_java_math_BigDecimal_divide_long_int_java_math_BigInteger_int_long_java_math_MathContext_R_java_math_BigDecimal(jcontext ctx, jlong param0, jint param1, jobject param2, jint param3, jlong param4, jobject param5) {
	jtype frame[21];
	auto stack = &frame[15];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/math/BigDecimal:divide", 21 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_math_BigDecimal(ctx);
	frame[0].l = param0;
	frame[2].i = param1;
	frame[3].o = param2;
	frame[4].i = param3;
	frame[5].l = param4;
	frame[7].o = param5;
	{
	LINE_NUMBER(4709);
	jint temp0 = (jint)SM_java_math_BigDecimal_compareMagnitudeNormalized_long_int_java_math_BigInteger_int_R_int(ctx, (frame[0].l), (frame[2].i), (frame[3].o), (frame[4].i));
	if (temp0 <= 0) goto label_1;
	}
	LINE_NUMBER(4710);
	INST_IINC(4, -1);
label_1:;
	{
	LINE_NUMBER(4712);
	frame[8].i = ((jint)((java_math_MathContext *) NULL_CHECK((frame[7].o)))->F_precision);
	LINE_NUMBER(4713);
	sp[0].o = (jobject)((java_math_MathContext *) NULL_CHECK((frame[7].o)))->F_roundingMode;
	frame[9].i = ((jint)((java_math_RoundingMode *) NULL_CHECK(sp[0].o))->F_oldMode);
	LINE_NUMBER(4719);
	jint temp0 = (jint)SM_java_math_BigDecimal_checkScaleNonZero_long_R_int(ctx, ((((frame[5].l) + (jlong((frame[4].i)))) - (jlong((frame[2].i)))) + (jlong((frame[8].i)))));
	frame[11].i = temp0;
	LINE_NUMBER(4720);
	jint temp1 = (jint)SM_java_math_BigDecimal_checkScaleNonZero_long_R_int(ctx, (((jlong((frame[8].i))) + (jlong((frame[4].i)))) - (jlong((frame[2].i)))));
	if (temp1 <= 0) goto label_6;
	}
	{
	LINE_NUMBER(4721);
	jint temp0 = (jint)SM_java_math_BigDecimal_checkScaleNonZero_long_R_int(ctx, (((jlong((frame[8].i))) + (jlong((frame[4].i)))) - (jlong((frame[2].i)))));
	frame[12].i = temp0;
	LINE_NUMBER(4722);
	sp[0].o = (jobject)SM_java_math_BigDecimal_bigMultiplyPowerTen_long_int_R_java_math_BigInteger(ctx, (frame[0].l), (frame[12].i));
	frame[13].o = sp[0].o;
	LINE_NUMBER(4723);
	sp[0].o = frame[13].o;
	sp[1].o = frame[3].o;
	jint temp1 = frame[11].i;
	jint temp2 = frame[9].i;
	jint temp3 = (jint)SM_java_math_BigDecimal_checkScaleNonZero_long_R_int(ctx, (frame[5].l));
	sp[0].o = (jobject)SM_java_math_BigDecimal_divideAndRound_java_math_BigInteger_java_math_BigInteger_int_int_int_R_java_math_BigDecimal(ctx, sp[0].o, sp[1].o, temp1, temp2, temp3);
	frame[10].o = sp[0].o;
	LINE_NUMBER(4724);
	goto label_11;
	}
label_6:;
	{
	LINE_NUMBER(4725);
	jint temp0 = (jint)SM_java_math_BigDecimal_checkScaleNonZero_long_R_int(ctx, ((jlong((frame[2].i))) - (jlong((frame[8].i)))));
	frame[12].i = temp0;
	LINE_NUMBER(4726);
	jint temp1 = (jint)SM_java_math_BigDecimal_checkScaleNonZero_long_R_int(ctx, ((jlong((frame[12].i))) - (jlong((frame[4].i)))));
	frame[13].i = temp1;
	LINE_NUMBER(4727);
	sp[0].o = (jobject)SM_java_math_BigDecimal_bigMultiplyPowerTen_java_math_BigInteger_int_R_java_math_BigInteger(ctx, (frame[3].o), (frame[13].i));
	frame[14].o = sp[0].o;
	LINE_NUMBER(4728);
	sp[0].o = (jobject)SM_java_math_BigInteger_valueOf_long_R_java_math_BigInteger(ctx, (frame[0].l));
	sp[1].o = frame[14].o;
	jint temp2 = frame[11].i;
	jint temp3 = frame[9].i;
	jint temp4 = (jint)SM_java_math_BigDecimal_checkScaleNonZero_long_R_int(ctx, (frame[5].l));
	sp[0].o = (jobject)SM_java_math_BigDecimal_divideAndRound_java_math_BigInteger_java_math_BigInteger_int_int_int_R_java_math_BigDecimal(ctx, sp[0].o, sp[1].o, temp2, temp3, temp4);
	frame[10].o = sp[0].o;
	}
label_11:;
	{
	LINE_NUMBER(4731);
	sp[0].o = (jobject)SM_java_math_BigDecimal_doRound_java_math_BigDecimal_java_math_MathContext_R_java_math_BigDecimal(ctx, (frame[10].o), (frame[7].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject SM_java_math_BigDecimal_divide_java_math_BigInteger_int_java_math_BigInteger_int_long_java_math_MathContext_R_java_math_BigDecimal(jcontext ctx, jobject param0, jint param1, jobject param2, jint param3, jlong param4, jobject param5) {
	jtype frame[20];
	auto stack = &frame[14];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/math/BigDecimal:divide", 20 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_math_BigDecimal(ctx);
	frame[0].o = param0;
	frame[1].i = param1;
	frame[2].o = param2;
	frame[3].i = param3;
	frame[4].l = param4;
	frame[6].o = param5;
	{
	LINE_NUMBER(4740);
	jint temp0 = (jint)SM_java_math_BigDecimal_compareMagnitudeNormalized_java_math_BigInteger_int_java_math_BigInteger_int_R_int(ctx, (frame[0].o), (frame[1].i), (frame[2].o), (frame[3].i));
	if (temp0 <= 0) goto label_1;
	}
	LINE_NUMBER(4741);
	INST_IINC(3, -1);
label_1:;
	{
	LINE_NUMBER(4743);
	frame[7].i = ((jint)((java_math_MathContext *) NULL_CHECK((frame[6].o)))->F_precision);
	LINE_NUMBER(4744);
	sp[0].o = (jobject)((java_math_MathContext *) NULL_CHECK((frame[6].o)))->F_roundingMode;
	frame[8].i = ((jint)((java_math_RoundingMode *) NULL_CHECK(sp[0].o))->F_oldMode);
	LINE_NUMBER(4750);
	jint temp0 = (jint)SM_java_math_BigDecimal_checkScaleNonZero_long_R_int(ctx, ((((frame[4].l) + (jlong((frame[3].i)))) - (jlong((frame[1].i)))) + (jlong((frame[7].i)))));
	frame[10].i = temp0;
	LINE_NUMBER(4751);
	jint temp1 = (jint)SM_java_math_BigDecimal_checkScaleNonZero_long_R_int(ctx, (((jlong((frame[7].i))) + (jlong((frame[3].i)))) - (jlong((frame[1].i)))));
	if (temp1 <= 0) goto label_6;
	}
	{
	LINE_NUMBER(4752);
	jint temp0 = (jint)SM_java_math_BigDecimal_checkScaleNonZero_long_R_int(ctx, (((jlong((frame[7].i))) + (jlong((frame[3].i)))) - (jlong((frame[1].i)))));
	frame[11].i = temp0;
	LINE_NUMBER(4753);
	sp[0].o = (jobject)SM_java_math_BigDecimal_bigMultiplyPowerTen_java_math_BigInteger_int_R_java_math_BigInteger(ctx, (frame[0].o), (frame[11].i));
	frame[12].o = sp[0].o;
	LINE_NUMBER(4754);
	sp[0].o = frame[12].o;
	sp[1].o = frame[2].o;
	jint temp1 = frame[10].i;
	jint temp2 = frame[8].i;
	jint temp3 = (jint)SM_java_math_BigDecimal_checkScaleNonZero_long_R_int(ctx, (frame[4].l));
	sp[0].o = (jobject)SM_java_math_BigDecimal_divideAndRound_java_math_BigInteger_java_math_BigInteger_int_int_int_R_java_math_BigDecimal(ctx, sp[0].o, sp[1].o, temp1, temp2, temp3);
	frame[9].o = sp[0].o;
	LINE_NUMBER(4755);
	goto label_11;
	}
label_6:;
	{
	LINE_NUMBER(4756);
	jint temp0 = (jint)SM_java_math_BigDecimal_checkScaleNonZero_long_R_int(ctx, ((jlong((frame[1].i))) - (jlong((frame[7].i)))));
	frame[11].i = temp0;
	LINE_NUMBER(4757);
	jint temp1 = (jint)SM_java_math_BigDecimal_checkScaleNonZero_long_R_int(ctx, ((jlong((frame[11].i))) - (jlong((frame[3].i)))));
	frame[12].i = temp1;
	LINE_NUMBER(4758);
	sp[0].o = (jobject)SM_java_math_BigDecimal_bigMultiplyPowerTen_java_math_BigInteger_int_R_java_math_BigInteger(ctx, (frame[2].o), (frame[12].i));
	frame[13].o = sp[0].o;
	LINE_NUMBER(4759);
	sp[0].o = frame[0].o;
	sp[1].o = frame[13].o;
	jint temp2 = frame[10].i;
	jint temp3 = frame[8].i;
	jint temp4 = (jint)SM_java_math_BigDecimal_checkScaleNonZero_long_R_int(ctx, (frame[4].l));
	sp[0].o = (jobject)SM_java_math_BigDecimal_divideAndRound_java_math_BigInteger_java_math_BigInteger_int_int_int_R_java_math_BigDecimal(ctx, sp[0].o, sp[1].o, temp2, temp3, temp4);
	frame[9].o = sp[0].o;
	}
label_11:;
	{
	LINE_NUMBER(4762);
	sp[0].o = (jobject)SM_java_math_BigDecimal_doRound_java_math_BigDecimal_java_math_MathContext_R_java_math_BigDecimal(ctx, (frame[9].o), (frame[6].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject SM_java_math_BigDecimal_multiplyDivideAndRound_long_long_long_int_int_int_R_java_math_BigDecimal(jcontext ctx, jlong param0, jlong param1, jlong param2, jint param3, jint param4, jint param5) {
	jtype frame[42];
	auto stack = &frame[32];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/math/BigDecimal:multiplyDivideAndRound", 42 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_math_BigDecimal(ctx);
	frame[0].l = param0;
	frame[2].l = param1;
	frame[4].l = param2;
	frame[6].i = param3;
	frame[7].i = param4;
	frame[8].i = param5;
	{
	LINE_NUMBER(4771);
	jint temp0 = (jint)SM_java_lang_Long_signum_long_R_int(ctx, (frame[0].l));
	jint temp1 = (jint)SM_java_lang_Long_signum_long_R_int(ctx, (frame[2].l));
	jint temp2 = temp0 * temp1;
	jint temp3 = (jint)SM_java_lang_Long_signum_long_R_int(ctx, (frame[4].l));
	frame[9].i = (temp2 * temp3);
	LINE_NUMBER(4772);
	jlong temp4 = (jlong)SM_java_lang_Math_abs_long_R_long(ctx, (frame[0].l));
	frame[0].l = temp4;
	LINE_NUMBER(4773);
	jlong temp5 = (jlong)SM_java_lang_Math_abs_long_R_long(ctx, (frame[2].l));
	frame[2].l = temp5;
	LINE_NUMBER(4774);
	jlong temp6 = (jlong)SM_java_lang_Math_abs_long_R_long(ctx, (frame[4].l));
	frame[4].l = temp6;
	LINE_NUMBER(4776);
	frame[10].l = (bit_cast<jlong>(bit_cast<uint64_t>((frame[0].l)) >> (32)));
	LINE_NUMBER(4777);
	frame[12].l = ((frame[0].l) & (jlong(4294967295ll)));
	LINE_NUMBER(4778);
	frame[14].l = (bit_cast<jlong>(bit_cast<uint64_t>((frame[2].l)) >> (32)));
	LINE_NUMBER(4779);
	frame[16].l = ((frame[2].l) & (jlong(4294967295ll)));
	LINE_NUMBER(4780);
	frame[18].l = ((frame[12].l) * (frame[16].l));
	LINE_NUMBER(4781);
	frame[20].l = ((frame[18].l) & (jlong(4294967295ll)));
	LINE_NUMBER(4782);
	frame[22].l = (bit_cast<jlong>(bit_cast<uint64_t>((frame[18].l)) >> (32)));
	LINE_NUMBER(4783);
	frame[18].l = (((frame[10].l) * (frame[16].l)) + (frame[22].l));
	LINE_NUMBER(4784);
	frame[22].l = ((frame[18].l) & (jlong(4294967295ll)));
	LINE_NUMBER(4785);
	frame[24].l = (bit_cast<jlong>(bit_cast<uint64_t>((frame[18].l)) >> (32)));
	LINE_NUMBER(4786);
	frame[18].l = (((frame[12].l) * (frame[14].l)) + (frame[22].l));
	LINE_NUMBER(4787);
	frame[22].l = ((frame[18].l) & (jlong(4294967295ll)));
	LINE_NUMBER(4788);
	frame[24].l = ((frame[24].l) + (bit_cast<jlong>(bit_cast<uint64_t>((frame[18].l)) >> (32))));
	LINE_NUMBER(4789);
	frame[26].l = (bit_cast<jlong>(bit_cast<uint64_t>((frame[24].l)) >> (32)));
	LINE_NUMBER(4790);
	frame[24].l = ((frame[24].l) & (jlong(4294967295ll)));
	LINE_NUMBER(4791);
	frame[18].l = (((frame[10].l) * (frame[14].l)) + (frame[24].l));
	LINE_NUMBER(4792);
	frame[24].l = ((frame[18].l) & (jlong(4294967295ll)));
	LINE_NUMBER(4793);
	frame[26].l = (((bit_cast<jlong>(bit_cast<uint64_t>((frame[18].l)) >> (32))) + (frame[26].l)) & (jlong(4294967295ll)));
	LINE_NUMBER(4794);
	jlong temp7 = (jlong)SM_java_math_BigDecimal_make64_long_long_R_long(ctx, (frame[26].l), (frame[24].l));
	frame[28].l = temp7;
	LINE_NUMBER(4795);
	jlong temp8 = (jlong)SM_java_math_BigDecimal_make64_long_long_R_long(ctx, (frame[22].l), (frame[20].l));
	frame[30].l = temp8;
	LINE_NUMBER(4797);
	sp[0].o = (jobject)SM_java_math_BigDecimal_divideAndRound128_long_long_long_int_int_int_int_R_java_math_BigDecimal(ctx, (frame[28].l), (frame[30].l), (frame[4].l), (frame[9].i), (frame[6].i), (frame[7].i), (frame[8].i));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject SM_java_math_BigDecimal_divideAndRound128_long_long_long_int_int_int_int_R_java_math_BigDecimal(jcontext ctx, jlong param0, jlong param1, jlong param2, jint param3, jint param4, jint param5, jint param6) {
	jtype frame[44];
	auto stack = &frame[34];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/math/BigDecimal:divideAndRound128", 44 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_math_BigDecimal(ctx);
	frame[0].l = param0;
	frame[2].l = param1;
	frame[4].l = param2;
	frame[6].i = param3;
	frame[7].i = param4;
	frame[8].i = param5;
	frame[9].i = param6;
	{
	LINE_NUMBER(4809);
	if ((longCompare((frame[0].l), (frame[4].l))) < 0) goto label_1;
	}
	{
	LINE_NUMBER(4810);
	popStackFrame(ctx);
	return (jobject(nullptr));
	}
label_1:;
	{
	LINE_NUMBER(4813);
	jint temp0 = (jint)SM_java_lang_Long_numberOfLeadingZeros_long_R_int(ctx, (frame[4].l));
	frame[10].i = temp0;
	LINE_NUMBER(4814);
	frame[4].l = ((frame[4].l) << (frame[10].i));
	LINE_NUMBER(4816);
	frame[11].l = (bit_cast<jlong>(bit_cast<uint64_t>((frame[4].l)) >> (32)));
	LINE_NUMBER(4817);
	frame[13].l = ((frame[4].l) & (jlong(4294967295ll)));
	LINE_NUMBER(4819);
	frame[15].l = ((frame[2].l) << (frame[10].i));
	LINE_NUMBER(4820);
	frame[17].l = (bit_cast<jlong>(bit_cast<uint64_t>((frame[15].l)) >> (32)));
	LINE_NUMBER(4821);
	frame[19].l = ((frame[15].l) & (jlong(4294967295ll)));
	LINE_NUMBER(4823);
	frame[15].l = (((frame[0].l) << (frame[10].i)) | (bit_cast<jlong>(bit_cast<uint64_t>((frame[2].l)) >> ((64) - (frame[10].i)))));
	LINE_NUMBER(4824);
	frame[21].l = ((frame[15].l) & (jlong(4294967295ll)));
	LINE_NUMBER(4826);
	if ((longCompare((frame[11].l), (jlong(1)))) != 0) goto label_12;
	}
	{
	LINE_NUMBER(4827);
	frame[23].l = (frame[15].l);
	LINE_NUMBER(4828);
	frame[25].l = (jlong(0));
	goto label_16;
	}
label_12:;
	{
	LINE_NUMBER(4829);
	if ((longCompare((frame[15].l), (jlong(0)))) < 0) goto label_17;
	}
	{
	LINE_NUMBER(4830);
	frame[23].l = ((frame[15].l) / (frame[11].l));
	LINE_NUMBER(4831);
	frame[25].l = ((frame[15].l) - ((frame[23].l) * (frame[11].l)));
	goto label_16;
	}
label_17:;
	{
	LINE_NUMBER(4833);
	sp[0].o = (jobject)SM_java_math_BigDecimal_divRemNegativeLong_long_long_R_Array1_long(ctx, (frame[15].l), (frame[11].l));
	frame[27].o = sp[0].o;
	LINE_NUMBER(4834);
	frame[23].l = ((jlong)ARRAY_ACCESS(jlong, (frame[27].o), (jint(1))));
	LINE_NUMBER(4835);
	frame[25].l = ((jlong)ARRAY_ACCESS(jlong, (frame[27].o), (jint(0))));
	}
label_16:;
	{
	LINE_NUMBER(4838);
	if ((longCompare((frame[23].l), (jlong(4294967296ll)))) >= 0) goto label_23;
	}
	{
	jlong temp0 = (frame[23].l) * (frame[13].l);
	jlong temp1 = (jlong)SM_java_math_BigDecimal_make64_long_long_R_long(ctx, (frame[25].l), (frame[17].l));
	jint temp2 = (jint)SM_java_math_BigDecimal_unsignedLongCompare_long_long_R_boolean(ctx, temp0, temp1);
	if (temp2 == 0) goto label_24;
	}
label_23:;
	{
	LINE_NUMBER(4839);
	frame[23].l = ((frame[23].l) - (jlong(1)));
	LINE_NUMBER(4840);
	frame[25].l = ((frame[25].l) + (frame[11].l));
	LINE_NUMBER(4841);
	if ((longCompare((frame[25].l), (jlong(4294967296ll)))) < 0) goto label_16;
	}
	LINE_NUMBER(4842);
	goto label_24;
label_24:;
	{
	LINE_NUMBER(4845);
	jlong temp0 = (jlong)SM_java_math_BigDecimal_mulsub_long_long_long_long_long_R_long(ctx, (frame[21].l), (frame[17].l), (frame[11].l), (frame[13].l), (frame[23].l));
	frame[15].l = temp0;
	LINE_NUMBER(4846);
	frame[17].l = ((frame[15].l) & (jlong(4294967295ll)));
	LINE_NUMBER(4848);
	if ((longCompare((frame[11].l), (jlong(1)))) != 0) goto label_30;
	}
	{
	LINE_NUMBER(4849);
	frame[27].l = (frame[15].l);
	LINE_NUMBER(4850);
	frame[25].l = (jlong(0));
	goto label_33;
	}
label_30:;
	{
	LINE_NUMBER(4851);
	if ((longCompare((frame[15].l), (jlong(0)))) < 0) goto label_34;
	}
	{
	LINE_NUMBER(4852);
	frame[27].l = ((frame[15].l) / (frame[11].l));
	LINE_NUMBER(4853);
	frame[25].l = ((frame[15].l) - ((frame[27].l) * (frame[11].l)));
	goto label_33;
	}
label_34:;
	{
	LINE_NUMBER(4855);
	sp[0].o = (jobject)SM_java_math_BigDecimal_divRemNegativeLong_long_long_R_Array1_long(ctx, (frame[15].l), (frame[11].l));
	frame[29].o = sp[0].o;
	LINE_NUMBER(4856);
	frame[27].l = ((jlong)ARRAY_ACCESS(jlong, (frame[29].o), (jint(1))));
	LINE_NUMBER(4857);
	frame[25].l = ((jlong)ARRAY_ACCESS(jlong, (frame[29].o), (jint(0))));
	}
label_33:;
	{
	LINE_NUMBER(4860);
	if ((longCompare((frame[27].l), (jlong(4294967296ll)))) >= 0) goto label_39;
	}
	{
	jlong temp0 = (frame[27].l) * (frame[13].l);
	jlong temp1 = (jlong)SM_java_math_BigDecimal_make64_long_long_R_long(ctx, (frame[25].l), (frame[19].l));
	jint temp2 = (jint)SM_java_math_BigDecimal_unsignedLongCompare_long_long_R_boolean(ctx, temp0, temp1);
	if (temp2 == 0) goto label_40;
	}
label_39:;
	{
	LINE_NUMBER(4861);
	frame[27].l = ((frame[27].l) - (jlong(1)));
	LINE_NUMBER(4862);
	frame[25].l = ((frame[25].l) + (frame[11].l));
	LINE_NUMBER(4863);
	if ((longCompare((frame[25].l), (jlong(4294967296ll)))) < 0) goto label_33;
	}
	LINE_NUMBER(4864);
	goto label_40;
label_40:;
	{
	LINE_NUMBER(4867);
	if ((jint((frame[23].l))) >= 0) goto label_44;
	}
	{
	LINE_NUMBER(4870);
	clinit_java_math_MutableBigInteger(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_math_MutableBigInteger);
	sp[1].o = (jobject) createArray(ctx, &class_int, (jint(2)));
	ARRAY_ACCESS(jint, sp[1].o, (jint(0))) = (jint((frame[23].l)));
	ARRAY_ACCESS(jint, sp[1].o, (jint(1))) = (jint((frame[27].l)));
	init_java_math_MutableBigInteger_Array1_int(ctx, sp[0].o, sp[1].o);
	frame[29].o = sp[0].o;
	LINE_NUMBER(4871);
	if ((frame[8].i) != (jint(1))) goto label_47;
	}
	{
	if ((frame[7].i) != (frame[9].i)) goto label_47;
	}
	{
	LINE_NUMBER(4872);
	sp[0].o = (jobject)((func_java_math_MutableBigInteger_toBigDecimal_int_int_R_java_math_BigDecimal) ((void **) nullCheck(ctx, (frame[29].o))->vtable)[VTABLE_java_math_MutableBigInteger_toBigDecimal_int_int_R_java_math_BigDecimal])(ctx, (frame[29].o), (frame[6].i), (frame[7].i));
	popStackFrame(ctx);
	return sp[0].o;
	}
label_47:;
	{
	LINE_NUMBER(4874);
	jlong temp0 = (jlong)SM_java_math_BigDecimal_mulsub_long_long_long_long_long_R_long(ctx, (frame[17].l), (frame[19].l), (frame[11].l), (frame[13].l), (frame[27].l));
	frame[30].l = (bit_cast<jlong>(bit_cast<uint64_t>(temp0) >> (frame[10].i)));
	LINE_NUMBER(4875);
	if ((longCompare((frame[30].l), (jlong(0)))) == 0) goto label_50;
	}
	{
	LINE_NUMBER(4876);
	jint temp0 = (jint)SM_java_math_BigDecimal_needIncrement_long_int_int_java_math_MutableBigInteger_long_R_boolean(ctx, (bit_cast<jlong>(bit_cast<uint64_t>((frame[4].l)) >> (frame[10].i))), (frame[8].i), (frame[6].i), (frame[29].o), (frame[30].l));
	if (temp0 == 0) goto label_52;
	}
	{
	LINE_NUMBER(4877);
	sp[0].o = frame[29].o;
	clinit_java_math_MutableBigInteger(ctx);
	sp[1].o = (jobject)SF_java_math_MutableBigInteger_ONE;
	((func_java_math_MutableBigInteger_add_java_math_MutableBigInteger) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_math_MutableBigInteger_add_java_math_MutableBigInteger])(ctx, sp[0].o, sp[1].o);
	}
label_52:;
	{
	LINE_NUMBER(4879);
	sp[0].o = (jobject)((func_java_math_MutableBigInteger_toBigDecimal_int_int_R_java_math_BigDecimal) ((void **) nullCheck(ctx, (frame[29].o))->vtable)[VTABLE_java_math_MutableBigInteger_toBigDecimal_int_int_R_java_math_BigDecimal])(ctx, (frame[29].o), (frame[6].i), (frame[7].i));
	popStackFrame(ctx);
	return sp[0].o;
	}
label_50:;
	{
	LINE_NUMBER(4881);
	if ((frame[9].i) == (frame[7].i)) goto label_54;
	}
	{
	LINE_NUMBER(4882);
	sp[0].o = (jobject)((func_java_math_MutableBigInteger_toBigInteger_int_R_java_math_BigInteger) ((void **) nullCheck(ctx, (frame[29].o))->vtable)[VTABLE_java_math_MutableBigInteger_toBigInteger_int_R_java_math_BigInteger])(ctx, (frame[29].o), (frame[6].i));
	frame[32].o = sp[0].o;
	LINE_NUMBER(4883);
	sp[0].o = (jobject)SM_java_math_BigDecimal_createAndStripZerosToMatchScale_java_math_BigInteger_int_long_R_java_math_BigDecimal(ctx, (frame[32].o), (frame[7].i), (jlong((frame[9].i))));
	popStackFrame(ctx);
	return sp[0].o;
	}
label_54:;
	{
	LINE_NUMBER(4885);
	sp[0].o = (jobject)((func_java_math_MutableBigInteger_toBigDecimal_int_int_R_java_math_BigDecimal) ((void **) nullCheck(ctx, (frame[29].o))->vtable)[VTABLE_java_math_MutableBigInteger_toBigDecimal_int_int_R_java_math_BigDecimal])(ctx, (frame[29].o), (frame[6].i), (frame[7].i));
	popStackFrame(ctx);
	return sp[0].o;
	}
label_44:;
	{
	LINE_NUMBER(4890);
	jlong temp0 = (jlong)SM_java_math_BigDecimal_make64_long_long_R_long(ctx, (frame[23].l), (frame[27].l));
	frame[29].l = temp0;
	LINE_NUMBER(4891);
	frame[29].l = ((frame[29].l) * (jlong((frame[6].i))));
	LINE_NUMBER(4893);
	if ((frame[8].i) != (jint(1))) goto label_59;
	}
	{
	if ((frame[7].i) != (frame[9].i)) goto label_59;
	}
	{
	LINE_NUMBER(4894);
	sp[0].o = (jobject)SM_java_math_BigDecimal_valueOf_long_int_R_java_math_BigDecimal(ctx, (frame[29].l), (frame[7].i));
	popStackFrame(ctx);
	return sp[0].o;
	}
label_59:;
	{
	LINE_NUMBER(4896);
	jlong temp0 = (jlong)SM_java_math_BigDecimal_mulsub_long_long_long_long_long_R_long(ctx, (frame[17].l), (frame[19].l), (frame[11].l), (frame[13].l), (frame[27].l));
	frame[31].l = (bit_cast<jlong>(bit_cast<uint64_t>(temp0) >> (frame[10].i)));
	LINE_NUMBER(4897);
	if ((longCompare((frame[31].l), (jlong(0)))) == 0) goto label_62;
	}
	{
	LINE_NUMBER(4898);
	jint temp0 = (jint)SM_java_math_BigDecimal_needIncrement_long_int_int_long_long_R_boolean(ctx, (bit_cast<jlong>(bit_cast<uint64_t>((frame[4].l)) >> (frame[10].i))), (frame[8].i), (frame[6].i), (frame[29].l), (frame[31].l));
	frame[33].i = temp0;
	LINE_NUMBER(4899);
	if ((frame[33].i) == 0) goto label_65;
	}
	{
	jlong temp0 = (frame[29].l) + (jlong((frame[6].i)));
	sp[0].l = temp0;
	sp += 1;
	goto label_66;
	}
label_65:;
	INST_LLOAD(29);
label_66:;
	{
	sp -= 1;
	sp[0].o = (jobject)SM_java_math_BigDecimal_valueOf_long_int_R_java_math_BigDecimal(ctx, sp[0].l, (frame[7].i));
	popStackFrame(ctx);
	return sp[0].o;
	}
label_62:;
	{
	LINE_NUMBER(4901);
	if ((frame[9].i) == (frame[7].i)) goto label_67;
	}
	{
	LINE_NUMBER(4902);
	sp[0].o = (jobject)SM_java_math_BigDecimal_createAndStripZerosToMatchScale_long_int_long_R_java_math_BigDecimal(ctx, (frame[29].l), (frame[7].i), (jlong((frame[9].i))));
	popStackFrame(ctx);
	return sp[0].o;
	}
label_67:;
	{
	LINE_NUMBER(4904);
	sp[0].o = (jobject)SM_java_math_BigDecimal_valueOf_long_int_R_java_math_BigDecimal(ctx, (frame[29].l), (frame[7].i));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject SM_java_math_BigDecimal_roundedTenPower_int_int_int_int_R_java_math_BigDecimal(jcontext ctx, jint param0, jint param1, jint param2, jint param3) {
	jtype frame[9];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/math/BigDecimal:roundedTenPower", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_math_BigDecimal(ctx);
	frame[0].i = param0;
	frame[1].i = param1;
	frame[2].i = param2;
	frame[3].i = param3;
	{
	LINE_NUMBER(4914);
	if ((frame[2].i) <= (frame[3].i)) goto label_1;
	}
	{
	LINE_NUMBER(4915);
	frame[4].i = ((frame[2].i) - (frame[3].i));
	LINE_NUMBER(4916);
	if ((frame[4].i) >= (frame[1].i)) goto label_4;
	}
	{
	LINE_NUMBER(4917);
	sp[0].o = (jobject)SM_java_math_BigDecimal_scaledTenPow_int_int_int_R_java_math_BigDecimal(ctx, ((frame[1].i) - (frame[4].i)), (frame[0].i), (frame[3].i));
	popStackFrame(ctx);
	return sp[0].o;
	}
label_4:;
	{
	LINE_NUMBER(4919);
	sp[0].o = (jobject)SM_java_math_BigDecimal_valueOf_long_int_R_java_math_BigDecimal(ctx, (jlong((frame[0].i))), ((frame[2].i) - (frame[1].i)));
	popStackFrame(ctx);
	return sp[0].o;
	}
label_1:;
	{
	LINE_NUMBER(4922);
	sp[0].o = (jobject)SM_java_math_BigDecimal_scaledTenPow_int_int_int_R_java_math_BigDecimal(ctx, (frame[1].i), (frame[0].i), (frame[2].i));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject SM_java_math_BigDecimal_scaledTenPow_int_int_int_R_java_math_BigDecimal(jcontext ctx, jint param0, jint param1, jint param2) {
	jtype frame[12];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/math/BigDecimal:scaledTenPow", 12 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_math_BigDecimal(ctx);
	frame[0].i = param0;
	frame[1].i = param1;
	frame[2].i = param2;
	{
	LINE_NUMBER(4927);
	jint temp0 = frame[0].i;
	clinit_java_math_BigDecimal(ctx);
	sp[0].o = (jobject)SF_java_math_BigDecimal_LONG_TEN_POWERS_TABLE;
	if (temp0 >= (((jarray) nullCheck(ctx, sp[0].o))->length)) goto label_1;
	}
	{
	LINE_NUMBER(4928);
	jlong temp0 = jlong((frame[1].i));
	clinit_java_math_BigDecimal(ctx);
	sp[0].o = (jobject)SF_java_math_BigDecimal_LONG_TEN_POWERS_TABLE;
	sp[0].o = (jobject)SM_java_math_BigDecimal_valueOf_long_int_R_java_math_BigDecimal(ctx, (temp0 * ((jlong)ARRAY_ACCESS(jlong, sp[0].o, (frame[0].i)))), (frame[2].i));
	popStackFrame(ctx);
	return sp[0].o;
	}
label_1:;
	{
	LINE_NUMBER(4930);
	sp[0].o = (jobject)SM_java_math_BigDecimal_bigTenToThe_int_R_java_math_BigInteger(ctx, (frame[0].i));
	frame[3].o = sp[0].o;
	LINE_NUMBER(4931);
	if ((frame[1].i) != (jint(-1))) goto label_4;
	}
	{
	LINE_NUMBER(4932);
	sp[0].o = (jobject)((func_java_math_BigInteger_negate_R_java_math_BigInteger) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_java_math_BigInteger_negate_R_java_math_BigInteger])(ctx, (frame[3].o));
	frame[3].o = sp[0].o;
	}
label_4:;
	{
	LINE_NUMBER(4934);
	clinit_java_math_BigDecimal(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_math_BigDecimal);
	init_java_math_BigDecimal_java_math_BigInteger_long_int_int(ctx, sp[0].o, (frame[3].o), (jlong(-9223372036854775807ll)), (frame[2].i), ((frame[0].i) + (jint(1))));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject SM_java_math_BigDecimal_divRemNegativeLong_long_long_R_Array1_long(jcontext ctx, jlong param0, jlong param1) {
	jtype frame[14];
	auto stack = &frame[8];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/math/BigDecimal:divRemNegativeLong", 14 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_math_BigDecimal(ctx);
	frame[0].l = param0;
	frame[2].l = param1;
	{
	LINE_NUMBER(4948);
	if ((clinit_java_math_BigDecimal(ctx), (jint)SF_java_math_BigDecimal_$assertionsDisabled) != 0) goto label_1;
	}
	{
	if ((longCompare((frame[0].l), (jlong(0)))) < 0) goto label_1;
	}
	{
	clinit_java_lang_AssertionError(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_AssertionError);
	clinit_java_lang_StringBuilder(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[1].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"Non-negative numerator "_j))));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_long_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_long_R_java_lang_StringBuilder])(ctx, sp[1].o, (frame[0].l));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[1].o);
	init_java_lang_AssertionError_java_lang_String(ctx, sp[0].o, sp[1].o);
	throwException(ctx, sp[0].o);	}
label_1:;
	{
	LINE_NUMBER(4949);
	if ((clinit_java_math_BigDecimal(ctx), (jint)SF_java_math_BigDecimal_$assertionsDisabled) != 0) goto label_2;
	}
	{
	if ((longCompare((frame[2].l), (jlong(1)))) != 0) goto label_2;
	}
	{
	clinit_java_lang_AssertionError(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_AssertionError);
	init_java_lang_AssertionError_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"Unity denominator"_j))));
	throwException(ctx, sp[0].o);	}
label_2:;
	{
	LINE_NUMBER(4952);
	frame[4].l = ((bit_cast<jlong>(bit_cast<uint64_t>((frame[0].l)) >> (jint(1)))) / (bit_cast<jlong>(bit_cast<uint64_t>((frame[2].l)) >> (jint(1)))));
	LINE_NUMBER(4953);
	frame[6].l = ((frame[0].l) - ((frame[4].l) * (frame[2].l)));
	}
label_4:;
	{
	LINE_NUMBER(4956);
	if ((longCompare((frame[6].l), (jlong(0)))) >= 0) goto label_5;
	}
	{
	LINE_NUMBER(4957);
	frame[6].l = ((frame[6].l) + (frame[2].l));
	LINE_NUMBER(4958);
	frame[4].l = ((frame[4].l) - (jlong(1)));
	goto label_4;
	}
label_5:;
	{
	LINE_NUMBER(4960);
	if ((longCompare((frame[6].l), (frame[2].l))) < 0) goto label_8;
	}
	{
	LINE_NUMBER(4961);
	frame[6].l = ((frame[6].l) - (frame[2].l));
	LINE_NUMBER(4962);
	frame[4].l = ((frame[4].l) + (jlong(1)));
	goto label_5;
	}
label_8:;
	{
	LINE_NUMBER(4966);
	sp[0].o = (jobject) createArray(ctx, &class_long, (jint(2)));
	ARRAY_ACCESS(jlong, sp[0].o, (jint(0))) = (frame[6].l);
	ARRAY_ACCESS(jlong, sp[0].o, (jint(1))) = (frame[4].l);
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jlong SM_java_math_BigDecimal_make64_long_long_R_long(jcontext ctx, jlong param0, jlong param1) {
	jtype frame[8];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/math/BigDecimal:make64", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_math_BigDecimal(ctx);
	frame[0].l = param0;
	frame[2].l = param1;
	{
	LINE_NUMBER(4970);
	popStackFrame(ctx);
	return (((frame[0].l) << (32)) | (frame[2].l));
	}

	popStackFrame(ctx);
}

jlong SM_java_math_BigDecimal_mulsub_long_long_long_long_long_R_long(jcontext ctx, jlong param0, jlong param1, jlong param2, jlong param3, jlong param4) {
	jtype frame[18];
	auto stack = &frame[12];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/math/BigDecimal:mulsub", 18 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_math_BigDecimal(ctx);
	frame[0].l = param0;
	frame[2].l = param1;
	frame[4].l = param2;
	frame[6].l = param3;
	frame[8].l = param4;
	{
	LINE_NUMBER(4974);
	frame[10].l = ((frame[2].l) - ((frame[8].l) * (frame[6].l)));
	LINE_NUMBER(4975);
	jlong temp0 = (jlong)SM_java_math_BigDecimal_make64_long_long_R_long(ctx, (((frame[0].l) + (bit_cast<jlong>(bit_cast<uint64_t>((frame[10].l)) >> (32)))) - ((frame[8].l) * (frame[4].l))), ((frame[10].l) & (jlong(4294967295ll))));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jbool SM_java_math_BigDecimal_unsignedLongCompare_long_long_R_boolean(jcontext ctx, jlong param0, jlong param1) {
	jtype frame[10];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/math/BigDecimal:unsignedLongCompare", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_math_BigDecimal(ctx);
	frame[0].l = param0;
	frame[2].l = param1;
	{
	LINE_NUMBER(4979);
	if ((longCompare(((frame[0].l) + (jlong(-9223372036854775807ll))), ((frame[2].l) + (jlong(-9223372036854775807ll))))) <= 0) goto label_1;
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

jbool SM_java_math_BigDecimal_unsignedLongCompareEq_long_long_R_boolean(jcontext ctx, jlong param0, jlong param1) {
	jtype frame[10];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/math/BigDecimal:unsignedLongCompareEq", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_math_BigDecimal(ctx);
	frame[0].l = param0;
	frame[2].l = param1;
	{
	LINE_NUMBER(4983);
	if ((longCompare(((frame[0].l) + (jlong(-9223372036854775807ll))), ((frame[2].l) + (jlong(-9223372036854775807ll))))) < 0) goto label_1;
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

jint SM_java_math_BigDecimal_compareMagnitudeNormalized_long_int_long_int_R_int(jcontext ctx, jlong param0, jint param1, jlong param2, jint param3) {
	jtype frame[11];
	auto stack = &frame[7];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/math/BigDecimal:compareMagnitudeNormalized", 11 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_math_BigDecimal(ctx);
	frame[0].l = param0;
	frame[2].i = param1;
	frame[3].l = param2;
	frame[5].i = param3;
	{
	LINE_NUMBER(4990);
	frame[6].i = ((frame[2].i) - (frame[5].i));
	LINE_NUMBER(4991);
	if ((frame[6].i) == 0) goto label_2;
	}
	{
	LINE_NUMBER(4992);
	if ((frame[6].i) >= 0) goto label_4;
	}
	{
	LINE_NUMBER(4993);
	jlong temp0 = (jlong)SM_java_math_BigDecimal_longMultiplyPowerTen_long_int_R_long(ctx, (frame[0].l), (-(frame[6].i)));
	frame[0].l = temp0;
	goto label_2;
	}
label_4:;
	{
	LINE_NUMBER(4995);
	jlong temp0 = (jlong)SM_java_math_BigDecimal_longMultiplyPowerTen_long_int_R_long(ctx, (frame[3].l), (frame[6].i));
	frame[3].l = temp0;
	}
label_2:;
	{
	LINE_NUMBER(4998);
	if ((longCompare((frame[0].l), (jlong(-9223372036854775807ll)))) == 0) goto label_6;
	}
	{
	LINE_NUMBER(4999);
	if ((longCompare((frame[3].l), (jlong(-9223372036854775807ll)))) == 0) goto label_8;
	}
	{
	jint temp0 = (jint)SM_java_math_BigDecimal_longCompareMagnitude_long_long_R_int(ctx, (frame[0].l), (frame[3].l));
	sp[0].i = temp0;
	sp += 1;
	goto label_9;
	}
label_8:;
	INST_ICONST(-1);
label_9:;
	popStackFrame(ctx);
	INST_IRETURN();
label_6:;
	{
	LINE_NUMBER(5001);
	popStackFrame(ctx);
	return (jint(1));
	}

	popStackFrame(ctx);
}

jint SM_java_math_BigDecimal_compareMagnitudeNormalized_long_int_java_math_BigInteger_int_R_int(jcontext ctx, jlong param0, jint param1, jobject param2, jint param3) {
	jtype frame[10];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/math/BigDecimal:compareMagnitudeNormalized", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_math_BigDecimal(ctx);
	frame[0].l = param0;
	frame[2].i = param1;
	frame[3].o = param2;
	frame[4].i = param3;
	{
	LINE_NUMBER(5007);
	if ((longCompare((frame[0].l), (jlong(0)))) != 0) goto label_1;
	}
	{
	LINE_NUMBER(5008);
	popStackFrame(ctx);
	return (jint(-1));
	}
label_1:;
	{
	LINE_NUMBER(5009);
	frame[5].i = ((frame[2].i) - (frame[4].i));
	LINE_NUMBER(5010);
	if ((frame[5].i) >= 0) goto label_4;
	}
	{
	LINE_NUMBER(5011);
	jlong temp0 = (jlong)SM_java_math_BigDecimal_longMultiplyPowerTen_long_int_R_long(ctx, (frame[0].l), (-(frame[5].i)));
	if ((longCompare(temp0, (jlong(-9223372036854775807ll)))) != 0) goto label_4;
	}
	{
	LINE_NUMBER(5012);
	sp[0].o = (jobject)SM_java_math_BigDecimal_bigMultiplyPowerTen_long_int_R_java_math_BigInteger(ctx, (frame[0].l), (-(frame[5].i)));
	jint temp0 = (jint)((func_java_math_BigInteger_compareMagnitude_java_math_BigInteger_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_math_BigInteger_compareMagnitude_java_math_BigInteger_R_int])(ctx, sp[0].o, (frame[3].o));
	popStackFrame(ctx);
	return temp0;
	}
label_4:;
	{
	LINE_NUMBER(5015);
	popStackFrame(ctx);
	return (jint(-1));
	}

	popStackFrame(ctx);
}

jint SM_java_math_BigDecimal_compareMagnitudeNormalized_java_math_BigInteger_int_java_math_BigInteger_int_R_int(jcontext ctx, jobject param0, jint param1, jobject param2, jint param3) {
	jtype frame[8];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/math/BigDecimal:compareMagnitudeNormalized", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_math_BigDecimal(ctx);
	frame[0].o = param0;
	frame[1].i = param1;
	frame[2].o = param2;
	frame[3].i = param3;
	{
	LINE_NUMBER(5020);
	frame[4].i = ((frame[1].i) - (frame[3].i));
	LINE_NUMBER(5021);
	if ((frame[4].i) >= 0) goto label_2;
	}
	{
	LINE_NUMBER(5022);
	sp[0].o = (jobject)SM_java_math_BigDecimal_bigMultiplyPowerTen_java_math_BigInteger_int_R_java_math_BigInteger(ctx, (frame[0].o), (-(frame[4].i)));
	jint temp0 = (jint)((func_java_math_BigInteger_compareMagnitude_java_math_BigInteger_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_math_BigInteger_compareMagnitude_java_math_BigInteger_R_int])(ctx, sp[0].o, (frame[2].o));
	popStackFrame(ctx);
	return temp0;
	}
label_2:;
	{
	LINE_NUMBER(5024);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)SM_java_math_BigDecimal_bigMultiplyPowerTen_java_math_BigInteger_int_R_java_math_BigInteger(ctx, (frame[2].o), (frame[4].i));
	jint temp0 = (jint)((func_java_math_BigInteger_compareMagnitude_java_math_BigInteger_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_math_BigInteger_compareMagnitude_java_math_BigInteger_R_int])(ctx, sp[0].o, sp[1].o);
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jlong SM_java_math_BigDecimal_multiply_long_long_R_long(jcontext ctx, jlong param0, jlong param1) {
	jtype frame[14];
	auto stack = &frame[10];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/math/BigDecimal:multiply", 14 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_math_BigDecimal(ctx);
	frame[0].l = param0;
	frame[2].l = param1;
	{
	LINE_NUMBER(5029);
	frame[4].l = ((frame[0].l) * (frame[2].l));
	LINE_NUMBER(5030);
	jlong temp0 = (jlong)SM_java_lang_Math_abs_long_R_long(ctx, (frame[0].l));
	frame[6].l = temp0;
	LINE_NUMBER(5031);
	jlong temp1 = (jlong)SM_java_lang_Math_abs_long_R_long(ctx, (frame[2].l));
	frame[8].l = temp1;
	LINE_NUMBER(5032);
	if ((longCompare((bit_cast<jlong>(bit_cast<uint64_t>(((frame[6].l) | (frame[8].l))) >> (31))), (jlong(0)))) == 0) goto label_4;
	}
	{
	if ((longCompare((frame[2].l), (jlong(0)))) == 0) goto label_4;
	}
	{
	if ((longCompare(((frame[4].l) / (frame[2].l)), (frame[0].l))) != 0) goto label_5;
	}
label_4:;
	{
	LINE_NUMBER(5033);
	popStackFrame(ctx);
	return (frame[4].l);
	}
label_5:;
	{
	LINE_NUMBER(5035);
	popStackFrame(ctx);
	return (jlong(-9223372036854775807ll));
	}

	popStackFrame(ctx);
}

jobject SM_java_math_BigDecimal_multiply_long_long_int_R_java_math_BigDecimal(jcontext ctx, jlong param0, jlong param1, jint param2) {
	jtype frame[14];
	auto stack = &frame[7];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/math/BigDecimal:multiply", 14 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_math_BigDecimal(ctx);
	frame[0].l = param0;
	frame[2].l = param1;
	frame[4].i = param2;
	{
	LINE_NUMBER(5039);
	jlong temp0 = (jlong)SM_java_math_BigDecimal_multiply_long_long_R_long(ctx, (frame[0].l), (frame[2].l));
	frame[5].l = temp0;
	LINE_NUMBER(5040);
	if ((longCompare((frame[5].l), (jlong(-9223372036854775807ll)))) == 0) goto label_2;
	}
	{
	LINE_NUMBER(5041);
	sp[0].o = (jobject)SM_java_math_BigDecimal_valueOf_long_int_R_java_math_BigDecimal(ctx, (frame[5].l), (frame[4].i));
	popStackFrame(ctx);
	return sp[0].o;
	}
label_2:;
	{
	LINE_NUMBER(5043);
	clinit_java_math_BigDecimal(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_math_BigDecimal);
	sp[1].o = (jobject)SM_java_math_BigInteger_valueOf_long_R_java_math_BigInteger(ctx, (frame[0].l));
	sp[1].o = (jobject)((func_java_math_BigInteger_multiply_long_R_java_math_BigInteger) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_math_BigInteger_multiply_long_R_java_math_BigInteger])(ctx, sp[1].o, (frame[2].l));
	init_java_math_BigDecimal_java_math_BigInteger_long_int_int(ctx, sp[0].o, sp[1].o, (jlong(-9223372036854775807ll)), (frame[4].i), (jint(0)));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject SM_java_math_BigDecimal_multiply_long_java_math_BigInteger_int_R_java_math_BigDecimal(jcontext ctx, jlong param0, jobject param1, jint param2) {
	jtype frame[11];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/math/BigDecimal:multiply", 11 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_math_BigDecimal(ctx);
	frame[0].l = param0;
	frame[2].o = param1;
	frame[3].i = param2;
	{
	LINE_NUMBER(5047);
	if ((longCompare((frame[0].l), (jlong(0)))) != 0) goto label_1;
	}
	{
	LINE_NUMBER(5048);
	sp[0].o = (jobject)SM_java_math_BigDecimal_zeroValueOf_int_R_java_math_BigDecimal(ctx, (frame[3].i));
	popStackFrame(ctx);
	return sp[0].o;
	}
label_1:;
	{
	LINE_NUMBER(5050);
	clinit_java_math_BigDecimal(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_math_BigDecimal);
	sp[1].o = (jobject)((func_java_math_BigInteger_multiply_long_R_java_math_BigInteger) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_java_math_BigInteger_multiply_long_R_java_math_BigInteger])(ctx, (frame[2].o), (frame[0].l));
	init_java_math_BigDecimal_java_math_BigInteger_long_int_int(ctx, sp[0].o, sp[1].o, (jlong(-9223372036854775807ll)), (frame[3].i), (jint(0)));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject SM_java_math_BigDecimal_multiply_java_math_BigInteger_java_math_BigInteger_int_R_java_math_BigDecimal(jcontext ctx, jobject param0, jobject param1, jint param2) {
	jtype frame[10];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/math/BigDecimal:multiply", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_math_BigDecimal(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	frame[2].i = param2;
	{
	LINE_NUMBER(5054);
	clinit_java_math_BigDecimal(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_math_BigDecimal);
	sp[1].o = (jobject)((func_java_math_BigInteger_multiply_java_math_BigInteger_R_java_math_BigInteger) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_math_BigInteger_multiply_java_math_BigInteger_R_java_math_BigInteger])(ctx, (frame[0].o), (frame[1].o));
	init_java_math_BigDecimal_java_math_BigInteger_long_int_int(ctx, sp[0].o, sp[1].o, (jlong(-9223372036854775807ll)), (frame[2].i), (jint(0)));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject SM_java_math_BigDecimal_multiplyAndRound_long_long_int_java_math_MathContext_R_java_math_BigDecimal(jcontext ctx, jlong param0, jlong param1, jint param2, jobject param3) {
	jtype frame[37];
	auto stack = &frame[30];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/math/BigDecimal:multiplyAndRound", 37 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_math_BigDecimal(ctx);
	frame[0].l = param0;
	frame[2].l = param1;
	frame[4].i = param2;
	frame[5].o = param3;
	{
	LINE_NUMBER(5061);
	jlong temp0 = (jlong)SM_java_math_BigDecimal_multiply_long_long_R_long(ctx, (frame[0].l), (frame[2].l));
	frame[6].l = temp0;
	LINE_NUMBER(5062);
	if ((longCompare((frame[6].l), (jlong(-9223372036854775807ll)))) == 0) goto label_2;
	}
	{
	LINE_NUMBER(5063);
	sp[0].o = (jobject)SM_java_math_BigDecimal_doRound_long_int_java_math_MathContext_R_java_math_BigDecimal(ctx, (frame[6].l), (frame[4].i), (frame[5].o));
	popStackFrame(ctx);
	return sp[0].o;
	}
label_2:;
	{
	LINE_NUMBER(5066);
	frame[8].i = (jint(1));
	LINE_NUMBER(5067);
	if ((longCompare((frame[0].l), (jlong(0)))) >= 0) goto label_5;
	}
	{
	LINE_NUMBER(5068);
	frame[0].l = (-(frame[0].l));
	LINE_NUMBER(5069);
	frame[8].i = (jint(-1));
	}
label_5:;
	{
	LINE_NUMBER(5071);
	if ((longCompare((frame[2].l), (jlong(0)))) >= 0) goto label_8;
	}
	{
	LINE_NUMBER(5072);
	frame[2].l = (-(frame[2].l));
	LINE_NUMBER(5073);
	frame[8].i = ((frame[8].i) * (jint(-1)));
	}
label_8:;
	{
	LINE_NUMBER(5076);
	frame[9].l = (bit_cast<jlong>(bit_cast<uint64_t>((frame[0].l)) >> (32)));
	LINE_NUMBER(5077);
	frame[11].l = ((frame[0].l) & (jlong(4294967295ll)));
	LINE_NUMBER(5078);
	frame[13].l = (bit_cast<jlong>(bit_cast<uint64_t>((frame[2].l)) >> (32)));
	LINE_NUMBER(5079);
	frame[15].l = ((frame[2].l) & (jlong(4294967295ll)));
	LINE_NUMBER(5080);
	frame[6].l = ((frame[11].l) * (frame[15].l));
	LINE_NUMBER(5081);
	frame[17].l = ((frame[6].l) & (jlong(4294967295ll)));
	LINE_NUMBER(5082);
	frame[19].l = (bit_cast<jlong>(bit_cast<uint64_t>((frame[6].l)) >> (32)));
	LINE_NUMBER(5083);
	frame[6].l = (((frame[9].l) * (frame[15].l)) + (frame[19].l));
	LINE_NUMBER(5084);
	frame[19].l = ((frame[6].l) & (jlong(4294967295ll)));
	LINE_NUMBER(5085);
	frame[21].l = (bit_cast<jlong>(bit_cast<uint64_t>((frame[6].l)) >> (32)));
	LINE_NUMBER(5086);
	frame[6].l = (((frame[11].l) * (frame[13].l)) + (frame[19].l));
	LINE_NUMBER(5087);
	frame[19].l = ((frame[6].l) & (jlong(4294967295ll)));
	LINE_NUMBER(5088);
	frame[21].l = ((frame[21].l) + (bit_cast<jlong>(bit_cast<uint64_t>((frame[6].l)) >> (32))));
	LINE_NUMBER(5089);
	frame[23].l = (bit_cast<jlong>(bit_cast<uint64_t>((frame[21].l)) >> (32)));
	LINE_NUMBER(5090);
	frame[21].l = ((frame[21].l) & (jlong(4294967295ll)));
	LINE_NUMBER(5091);
	frame[6].l = (((frame[9].l) * (frame[13].l)) + (frame[21].l));
	LINE_NUMBER(5092);
	frame[21].l = ((frame[6].l) & (jlong(4294967295ll)));
	LINE_NUMBER(5093);
	frame[23].l = (((bit_cast<jlong>(bit_cast<uint64_t>((frame[6].l)) >> (32))) + (frame[23].l)) & (jlong(4294967295ll)));
	LINE_NUMBER(5094);
	jlong temp0 = (jlong)SM_java_math_BigDecimal_make64_long_long_R_long(ctx, (frame[23].l), (frame[21].l));
	frame[25].l = temp0;
	LINE_NUMBER(5095);
	jlong temp1 = (jlong)SM_java_math_BigDecimal_make64_long_long_R_long(ctx, (frame[19].l), (frame[17].l));
	frame[27].l = temp1;
	LINE_NUMBER(5096);
	sp[0].o = (jobject)SM_java_math_BigDecimal_doRound128_long_long_int_int_java_math_MathContext_R_java_math_BigDecimal(ctx, (frame[25].l), (frame[27].l), (frame[8].i), (frame[4].i), (frame[5].o));
	frame[29].o = sp[0].o;
	LINE_NUMBER(5097);
	if ((frame[29].o) == nullptr) goto label_32;
	}
	{
	LINE_NUMBER(5098);
	popStackFrame(ctx);
	return (frame[29].o);
	}
label_32:;
	{
	LINE_NUMBER(5100);
	clinit_java_math_BigDecimal(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_math_BigDecimal);
	sp[1].o = (jobject)SM_java_math_BigInteger_valueOf_long_R_java_math_BigInteger(ctx, (frame[0].l));
	sp[1].o = (jobject)((func_java_math_BigInteger_multiply_long_R_java_math_BigInteger) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_math_BigInteger_multiply_long_R_java_math_BigInteger])(ctx, sp[1].o, ((frame[2].l) * (jlong((frame[8].i)))));
	init_java_math_BigDecimal_java_math_BigInteger_long_int_int(ctx, sp[0].o, sp[1].o, (jlong(-9223372036854775807ll)), (frame[4].i), (jint(0)));
	frame[29].o = sp[0].o;
	LINE_NUMBER(5101);
	sp[0].o = (jobject)SM_java_math_BigDecimal_doRound_java_math_BigDecimal_java_math_MathContext_R_java_math_BigDecimal(ctx, (frame[29].o), (frame[5].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject SM_java_math_BigDecimal_multiplyAndRound_long_java_math_BigInteger_int_java_math_MathContext_R_java_math_BigDecimal(jcontext ctx, jlong param0, jobject param1, jint param2, jobject param3) {
	jtype frame[9];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/math/BigDecimal:multiplyAndRound", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_math_BigDecimal(ctx);
	frame[0].l = param0;
	frame[2].o = param1;
	frame[3].i = param2;
	frame[4].o = param3;
	{
	LINE_NUMBER(5105);
	if ((longCompare((frame[0].l), (jlong(0)))) != 0) goto label_1;
	}
	{
	LINE_NUMBER(5106);
	sp[0].o = (jobject)SM_java_math_BigDecimal_zeroValueOf_int_R_java_math_BigDecimal(ctx, (frame[3].i));
	popStackFrame(ctx);
	return sp[0].o;
	}
label_1:;
	{
	LINE_NUMBER(5108);
	sp[0].o = (jobject)((func_java_math_BigInteger_multiply_long_R_java_math_BigInteger) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_java_math_BigInteger_multiply_long_R_java_math_BigInteger])(ctx, (frame[2].o), (frame[0].l));
	sp[0].o = (jobject)SM_java_math_BigDecimal_doRound_java_math_BigInteger_int_java_math_MathContext_R_java_math_BigDecimal(ctx, sp[0].o, (frame[3].i), (frame[4].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject SM_java_math_BigDecimal_multiplyAndRound_java_math_BigInteger_java_math_BigInteger_int_java_math_MathContext_R_java_math_BigDecimal(jcontext ctx, jobject param0, jobject param1, jint param2, jobject param3) {
	jtype frame[7];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/math/BigDecimal:multiplyAndRound", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_math_BigDecimal(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	frame[2].i = param2;
	frame[3].o = param3;
	{
	LINE_NUMBER(5112);
	sp[0].o = (jobject)((func_java_math_BigInteger_multiply_java_math_BigInteger_R_java_math_BigInteger) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_math_BigInteger_multiply_java_math_BigInteger_R_java_math_BigInteger])(ctx, (frame[0].o), (frame[1].o));
	sp[0].o = (jobject)SM_java_math_BigDecimal_doRound_java_math_BigInteger_int_java_math_MathContext_R_java_math_BigDecimal(ctx, sp[0].o, (frame[2].i), (frame[3].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject SM_java_math_BigDecimal_doRound128_long_long_int_int_java_math_MathContext_R_java_math_BigDecimal(jcontext ctx, jlong param0, jlong param1, jint param2, jint param3, jobject param4) {
	jtype frame[20];
	auto stack = &frame[10];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/math/BigDecimal:doRound128", 20 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_math_BigDecimal(ctx);
	frame[0].l = param0;
	frame[2].l = param1;
	frame[4].i = param2;
	frame[5].i = param3;
	frame[6].o = param4;
	{
	LINE_NUMBER(5120);
	frame[7].i = ((jint)((java_math_MathContext *) NULL_CHECK((frame[6].o)))->F_precision);
	LINE_NUMBER(5122);
	frame[9].o = (jobject(nullptr));
	LINE_NUMBER(5123);
	jint temp0 = (jint)SM_java_math_BigDecimal_precision_long_long_R_int(ctx, (frame[0].l), (frame[2].l));
	jint temp1 = temp0 - (frame[7].i);
	frame[8].i = temp1;
	if (temp1 <= 0) goto label_4;
	}
	{
	jint temp0 = frame[8].i;
	clinit_java_math_BigDecimal(ctx);
	sp[0].o = (jobject)SF_java_math_BigDecimal_LONG_TEN_POWERS_TABLE;
	if (temp0 >= (((jarray) nullCheck(ctx, sp[0].o))->length)) goto label_4;
	}
	{
	LINE_NUMBER(5124);
	jint temp0 = (jint)SM_java_math_BigDecimal_checkScaleNonZero_long_R_int(ctx, ((jlong((frame[5].i))) - (jlong((frame[8].i)))));
	frame[5].i = temp0;
	LINE_NUMBER(5125);
	jlong temp1 = frame[0].l;
	jlong temp2 = frame[2].l;
	clinit_java_math_BigDecimal(ctx);
	sp[0].o = (jobject)SF_java_math_BigDecimal_LONG_TEN_POWERS_TABLE;
	jlong temp3 = (jlong)ARRAY_ACCESS(jlong, sp[0].o, (frame[8].i));
	jint temp4 = frame[4].i;
	jint temp5 = frame[5].i;
	sp[0].o = (jobject)((java_math_MathContext *) NULL_CHECK((frame[6].o)))->F_roundingMode;
	sp[0].o = (jobject)SM_java_math_BigDecimal_divideAndRound128_long_long_long_int_int_int_int_R_java_math_BigDecimal(ctx, temp1, temp2, temp3, temp4, temp5, ((jint)((java_math_RoundingMode *) NULL_CHECK(sp[0].o))->F_oldMode), (frame[5].i));
	frame[9].o = sp[0].o;
	}
label_4:;
	{
	LINE_NUMBER(5127);
	if ((frame[9].o) == nullptr) goto label_7;
	}
	{
	LINE_NUMBER(5128);
	sp[0].o = (jobject)SM_java_math_BigDecimal_doRound_java_math_BigDecimal_java_math_MathContext_R_java_math_BigDecimal(ctx, (frame[9].o), (frame[6].o));
	popStackFrame(ctx);
	return sp[0].o;
	}
label_7:;
	{
	LINE_NUMBER(5130);
	popStackFrame(ctx);
	return (jobject(nullptr));
	}

	popStackFrame(ctx);
}

jint SM_java_math_BigDecimal_precision_long_long_R_int(jcontext ctx, jlong param0, jlong param1) {
	jtype frame[14];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/math/BigDecimal:precision", 14 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_math_BigDecimal(ctx);
	frame[0].l = param0;
	frame[2].l = param1;
	{
	LINE_NUMBER(5160);
	if ((longCompare((frame[0].l), (jlong(0)))) != 0) goto label_1;
	}
	{
	LINE_NUMBER(5161);
	if ((longCompare((frame[2].l), (jlong(0)))) < 0) goto label_3;
	}
	{
	LINE_NUMBER(5162);
	jint temp0 = (jint)SM_java_math_BigDecimal_longDigitLength_long_R_int(ctx, (frame[2].l));
	popStackFrame(ctx);
	return temp0;
	}
label_3:;
	{
	LINE_NUMBER(5164);
	jlong temp0 = frame[2].l;
	clinit_java_math_BigDecimal(ctx);
	sp[0].o = (jobject)SF_java_math_BigDecimal_LONGLONG_TEN_POWERS_TABLE;
	jint temp1 = (jint)SM_java_math_BigDecimal_unsignedLongCompareEq_long_long_R_boolean(ctx, temp0, ((jlong)ARRAY_ACCESS(jlong, ((jobject)ARRAY_ACCESS(jobject, sp[0].o, (jint(0)))), (jint(1)))));
	if (temp1 == 0) goto label_5;
	}
	INST_BIPUSH(20);
	goto label_6;
label_5:;
	INST_BIPUSH(19);
label_6:;
	popStackFrame(ctx);
	INST_IRETURN();
label_1:;
	{
	LINE_NUMBER(5167);
	jint temp0 = 128;
	jint temp1 = (jint)SM_java_lang_Long_numberOfLeadingZeros_long_R_int(ctx, (frame[0].l));
	frame[4].i = (bit_cast<jint>(bit_cast<uint32_t>((((temp0 - temp1) + (jint(1))) * (1233))) >> (12)));
	LINE_NUMBER(5168);
	frame[5].i = ((frame[4].i) - (19));
	LINE_NUMBER(5169);
	jint temp2 = frame[5].i;
	clinit_java_math_BigDecimal(ctx);
	sp[0].o = (jobject)SF_java_math_BigDecimal_LONGLONG_TEN_POWERS_TABLE;
	if (temp2 >= (((jarray) nullCheck(ctx, sp[0].o))->length)) goto label_9;
	}
	{
	jlong temp0 = frame[0].l;
	jlong temp1 = frame[2].l;
	clinit_java_math_BigDecimal(ctx);
	sp[0].o = (jobject)SF_java_math_BigDecimal_LONGLONG_TEN_POWERS_TABLE;
	jlong temp2 = (jlong)ARRAY_ACCESS(jlong, ((jobject)ARRAY_ACCESS(jobject, sp[0].o, (frame[5].i))), (jint(0)));
	clinit_java_math_BigDecimal(ctx);
	sp[0].o = (jobject)SF_java_math_BigDecimal_LONGLONG_TEN_POWERS_TABLE;
	jint temp3 = (jint)SM_java_math_BigDecimal_longLongCompareMagnitude_long_long_long_long_R_boolean(ctx, temp0, temp1, temp2, ((jlong)ARRAY_ACCESS(jlong, ((jobject)ARRAY_ACCESS(jobject, sp[0].o, (frame[5].i))), (jint(1)))));
	if (temp3 == 0) goto label_10;
	}
label_9:;
	{
	LINE_NUMBER(5170);
	jint temp0 = frame[4].i;
	sp[0].i = temp0;
	sp += 1;
	goto label_11;
	}
label_10:;
	{
	jint temp0 = (frame[4].i) + (jint(1));
	sp[0].i = temp0;
	sp += 1;
	}
label_11:;
	LINE_NUMBER(5169);
	popStackFrame(ctx);
	INST_IRETURN();

	popStackFrame(ctx);
}

jbool SM_java_math_BigDecimal_longLongCompareMagnitude_long_long_long_long_R_boolean(jcontext ctx, jlong param0, jlong param1, jlong param2, jlong param3) {
	jtype frame[14];
	auto stack = &frame[8];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/math/BigDecimal:longLongCompareMagnitude", 14 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_math_BigDecimal(ctx);
	frame[0].l = param0;
	frame[2].l = param1;
	frame[4].l = param2;
	frame[6].l = param3;
	{
	LINE_NUMBER(5178);
	if ((longCompare((frame[0].l), (frame[4].l))) == 0) goto label_1;
	}
	{
	LINE_NUMBER(5179);
	if ((longCompare((frame[0].l), (frame[4].l))) >= 0) goto label_3;
	}
	INST_ICONST(1);
	goto label_4;
label_3:;
	INST_ICONST(0);
label_4:;
	popStackFrame(ctx);
	INST_IRETURN();
label_1:;
	{
	LINE_NUMBER(5181);
	if ((longCompare(((frame[2].l) + (jlong(-9223372036854775807ll))), ((frame[6].l) + (jlong(-9223372036854775807ll))))) >= 0) goto label_5;
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

jobject SM_java_math_BigDecimal_divide_long_int_long_int_int_int_R_java_math_BigDecimal(jcontext ctx, jlong param0, jint param1, jlong param2, jint param3, jint param4, jint param5) {
	jtype frame[22];
	auto stack = &frame[13];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/math/BigDecimal:divide", 22 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_math_BigDecimal(ctx);
	frame[0].l = param0;
	frame[2].i = param1;
	frame[3].l = param2;
	frame[5].i = param3;
	frame[6].i = param4;
	frame[7].i = param5;
	{
	LINE_NUMBER(5185);
	jint temp0 = (jint)SM_java_math_BigDecimal_checkScale_long_long_R_int(ctx, (frame[0].l), ((jlong((frame[6].i))) + (jlong((frame[5].i)))));
	if (temp0 <= (frame[2].i)) goto label_1;
	}
	{
	LINE_NUMBER(5186);
	frame[8].i = ((frame[6].i) + (frame[5].i));
	LINE_NUMBER(5187);
	frame[9].i = ((frame[8].i) - (frame[2].i));
	LINE_NUMBER(5188);
	jint temp0 = frame[9].i;
	clinit_java_math_BigDecimal(ctx);
	sp[0].o = (jobject)SF_java_math_BigDecimal_LONG_TEN_POWERS_TABLE;
	if (temp0 >= (((jarray) nullCheck(ctx, sp[0].o))->length)) goto label_5;
	}
	{
	LINE_NUMBER(5189);
	frame[10].l = (frame[0].l);
	LINE_NUMBER(5190);
	jlong temp0 = (jlong)SM_java_math_BigDecimal_longMultiplyPowerTen_long_int_R_long(ctx, (frame[10].l), (frame[9].i));
	frame[10].l = temp0;
	if ((longCompare(temp0, (jlong(-9223372036854775807ll)))) == 0) goto label_8;
	}
	{
	LINE_NUMBER(5191);
	sp[0].o = (jobject)SM_java_math_BigDecimal_divideAndRound_long_long_int_int_int_R_java_math_BigDecimal(ctx, (frame[10].l), (frame[3].l), (frame[6].i), (frame[7].i), (frame[6].i));
	popStackFrame(ctx);
	return sp[0].o;
	}
label_8:;
	{
	LINE_NUMBER(5193);
	clinit_java_math_BigDecimal(ctx);
	sp[0].o = (jobject)SF_java_math_BigDecimal_LONG_TEN_POWERS_TABLE;
	sp[0].o = (jobject)SM_java_math_BigDecimal_multiplyDivideAndRound_long_long_long_int_int_int_R_java_math_BigDecimal(ctx, ((jlong)ARRAY_ACCESS(jlong, sp[0].o, (frame[9].i))), (frame[0].l), (frame[3].l), (frame[6].i), (frame[7].i), (frame[6].i));
	frame[12].o = sp[0].o;
	LINE_NUMBER(5194);
	if ((frame[12].o) == nullptr) goto label_5;
	}
	{
	LINE_NUMBER(5195);
	popStackFrame(ctx);
	return (frame[12].o);
	}
label_5:;
	{
	LINE_NUMBER(5198);
	sp[0].o = (jobject)SM_java_math_BigDecimal_bigMultiplyPowerTen_long_int_R_java_math_BigInteger(ctx, (frame[0].l), (frame[9].i));
	frame[10].o = sp[0].o;
	LINE_NUMBER(5199);
	sp[0].o = (jobject)SM_java_math_BigDecimal_divideAndRound_java_math_BigInteger_long_int_int_int_R_java_math_BigDecimal(ctx, (frame[10].o), (frame[3].l), (frame[6].i), (frame[7].i), (frame[6].i));
	popStackFrame(ctx);
	return sp[0].o;
	}
label_1:;
	{
	LINE_NUMBER(5201);
	jint temp0 = (jint)SM_java_math_BigDecimal_checkScale_long_long_R_int(ctx, (frame[3].l), ((jlong((frame[2].i))) - (jlong((frame[6].i)))));
	frame[8].i = temp0;
	LINE_NUMBER(5202);
	frame[9].i = ((frame[8].i) - (frame[5].i));
	LINE_NUMBER(5203);
	jint temp1 = frame[9].i;
	clinit_java_math_BigDecimal(ctx);
	sp[0].o = (jobject)SF_java_math_BigDecimal_LONG_TEN_POWERS_TABLE;
	if (temp1 >= (((jarray) nullCheck(ctx, sp[0].o))->length)) goto label_15;
	}
	{
	LINE_NUMBER(5204);
	frame[10].l = (frame[3].l);
	LINE_NUMBER(5205);
	jlong temp0 = (jlong)SM_java_math_BigDecimal_longMultiplyPowerTen_long_int_R_long(ctx, (frame[10].l), (frame[9].i));
	frame[10].l = temp0;
	if ((longCompare(temp0, (jlong(-9223372036854775807ll)))) == 0) goto label_15;
	}
	{
	LINE_NUMBER(5206);
	sp[0].o = (jobject)SM_java_math_BigDecimal_divideAndRound_long_long_int_int_int_R_java_math_BigDecimal(ctx, (frame[0].l), (frame[10].l), (frame[6].i), (frame[7].i), (frame[6].i));
	popStackFrame(ctx);
	return sp[0].o;
	}
label_15:;
	{
	LINE_NUMBER(5209);
	sp[0].o = (jobject)SM_java_math_BigDecimal_bigMultiplyPowerTen_long_int_R_java_math_BigInteger(ctx, (frame[3].l), (frame[9].i));
	frame[10].o = sp[0].o;
	LINE_NUMBER(5210);
	sp[0].o = (jobject)SM_java_math_BigInteger_valueOf_long_R_java_math_BigInteger(ctx, (frame[0].l));
	sp[0].o = (jobject)SM_java_math_BigDecimal_divideAndRound_java_math_BigInteger_java_math_BigInteger_int_int_int_R_java_math_BigDecimal(ctx, sp[0].o, (frame[10].o), (frame[6].i), (frame[7].i), (frame[6].i));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject SM_java_math_BigDecimal_divide_java_math_BigInteger_int_long_int_int_int_R_java_math_BigDecimal(jcontext ctx, jobject param0, jint param1, jlong param2, jint param3, jint param4, jint param5) {
	jtype frame[17];
	auto stack = &frame[11];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/math/BigDecimal:divide", 17 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_math_BigDecimal(ctx);
	frame[0].o = param0;
	frame[1].i = param1;
	frame[2].l = param2;
	frame[4].i = param3;
	frame[5].i = param4;
	frame[6].i = param5;
	{
	LINE_NUMBER(5215);
	jint temp0 = (jint)SM_java_math_BigDecimal_checkScale_java_math_BigInteger_long_R_int(ctx, (frame[0].o), ((jlong((frame[5].i))) + (jlong((frame[4].i)))));
	if (temp0 <= (frame[1].i)) goto label_1;
	}
	{
	LINE_NUMBER(5216);
	frame[7].i = ((frame[5].i) + (frame[4].i));
	LINE_NUMBER(5217);
	frame[8].i = ((frame[7].i) - (frame[1].i));
	LINE_NUMBER(5218);
	sp[0].o = (jobject)SM_java_math_BigDecimal_bigMultiplyPowerTen_java_math_BigInteger_int_R_java_math_BigInteger(ctx, (frame[0].o), (frame[8].i));
	frame[9].o = sp[0].o;
	LINE_NUMBER(5219);
	sp[0].o = (jobject)SM_java_math_BigDecimal_divideAndRound_java_math_BigInteger_long_int_int_int_R_java_math_BigDecimal(ctx, (frame[9].o), (frame[2].l), (frame[5].i), (frame[6].i), (frame[5].i));
	popStackFrame(ctx);
	return sp[0].o;
	}
label_1:;
	{
	LINE_NUMBER(5221);
	jint temp0 = (jint)SM_java_math_BigDecimal_checkScale_long_long_R_int(ctx, (frame[2].l), ((jlong((frame[1].i))) - (jlong((frame[5].i)))));
	frame[7].i = temp0;
	LINE_NUMBER(5222);
	frame[8].i = ((frame[7].i) - (frame[4].i));
	LINE_NUMBER(5223);
	jint temp1 = frame[8].i;
	clinit_java_math_BigDecimal(ctx);
	sp[0].o = (jobject)SF_java_math_BigDecimal_LONG_TEN_POWERS_TABLE;
	if (temp1 >= (((jarray) nullCheck(ctx, sp[0].o))->length)) goto label_8;
	}
	{
	LINE_NUMBER(5224);
	frame[9].l = (frame[2].l);
	LINE_NUMBER(5225);
	jlong temp0 = (jlong)SM_java_math_BigDecimal_longMultiplyPowerTen_long_int_R_long(ctx, (frame[9].l), (frame[8].i));
	frame[9].l = temp0;
	if ((longCompare(temp0, (jlong(-9223372036854775807ll)))) == 0) goto label_8;
	}
	{
	LINE_NUMBER(5226);
	sp[0].o = (jobject)SM_java_math_BigDecimal_divideAndRound_java_math_BigInteger_long_int_int_int_R_java_math_BigDecimal(ctx, (frame[0].o), (frame[9].l), (frame[5].i), (frame[6].i), (frame[5].i));
	popStackFrame(ctx);
	return sp[0].o;
	}
label_8:;
	{
	LINE_NUMBER(5229);
	sp[0].o = (jobject)SM_java_math_BigDecimal_bigMultiplyPowerTen_long_int_R_java_math_BigInteger(ctx, (frame[2].l), (frame[8].i));
	frame[9].o = sp[0].o;
	LINE_NUMBER(5230);
	sp[0].o = (jobject)SM_java_math_BigDecimal_divideAndRound_java_math_BigInteger_java_math_BigInteger_int_int_int_R_java_math_BigDecimal(ctx, (frame[0].o), (frame[9].o), (frame[5].i), (frame[6].i), (frame[5].i));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject SM_java_math_BigDecimal_divide_long_int_java_math_BigInteger_int_int_int_R_java_math_BigDecimal(jcontext ctx, jlong param0, jint param1, jobject param2, jint param3, jint param4, jint param5) {
	jtype frame[16];
	auto stack = &frame[10];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/math/BigDecimal:divide", 16 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_math_BigDecimal(ctx);
	frame[0].l = param0;
	frame[2].i = param1;
	frame[3].o = param2;
	frame[4].i = param3;
	frame[5].i = param4;
	frame[6].i = param5;
	{
	LINE_NUMBER(5235);
	jint temp0 = (jint)SM_java_math_BigDecimal_checkScale_long_long_R_int(ctx, (frame[0].l), ((jlong((frame[5].i))) + (jlong((frame[4].i)))));
	if (temp0 <= (frame[2].i)) goto label_1;
	}
	{
	LINE_NUMBER(5236);
	frame[7].i = ((frame[5].i) + (frame[4].i));
	LINE_NUMBER(5237);
	frame[8].i = ((frame[7].i) - (frame[2].i));
	LINE_NUMBER(5238);
	sp[0].o = (jobject)SM_java_math_BigDecimal_bigMultiplyPowerTen_long_int_R_java_math_BigInteger(ctx, (frame[0].l), (frame[8].i));
	frame[9].o = sp[0].o;
	LINE_NUMBER(5239);
	sp[0].o = (jobject)SM_java_math_BigDecimal_divideAndRound_java_math_BigInteger_java_math_BigInteger_int_int_int_R_java_math_BigDecimal(ctx, (frame[9].o), (frame[3].o), (frame[5].i), (frame[6].i), (frame[5].i));
	popStackFrame(ctx);
	return sp[0].o;
	}
label_1:;
	{
	LINE_NUMBER(5241);
	jint temp0 = (jint)SM_java_math_BigDecimal_checkScale_java_math_BigInteger_long_R_int(ctx, (frame[3].o), ((jlong((frame[2].i))) - (jlong((frame[5].i)))));
	frame[7].i = temp0;
	LINE_NUMBER(5242);
	frame[8].i = ((frame[7].i) - (frame[4].i));
	LINE_NUMBER(5243);
	sp[0].o = (jobject)SM_java_math_BigDecimal_bigMultiplyPowerTen_java_math_BigInteger_int_R_java_math_BigInteger(ctx, (frame[3].o), (frame[8].i));
	frame[9].o = sp[0].o;
	LINE_NUMBER(5244);
	sp[0].o = (jobject)SM_java_math_BigInteger_valueOf_long_R_java_math_BigInteger(ctx, (frame[0].l));
	sp[0].o = (jobject)SM_java_math_BigDecimal_divideAndRound_java_math_BigInteger_java_math_BigInteger_int_int_int_R_java_math_BigDecimal(ctx, sp[0].o, (frame[9].o), (frame[5].i), (frame[6].i), (frame[5].i));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject SM_java_math_BigDecimal_divide_java_math_BigInteger_int_java_math_BigInteger_int_int_int_R_java_math_BigDecimal(jcontext ctx, jobject param0, jint param1, jobject param2, jint param3, jint param4, jint param5) {
	jtype frame[14];
	auto stack = &frame[9];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/math/BigDecimal:divide", 14 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_math_BigDecimal(ctx);
	frame[0].o = param0;
	frame[1].i = param1;
	frame[2].o = param2;
	frame[3].i = param3;
	frame[4].i = param4;
	frame[5].i = param5;
	{
	LINE_NUMBER(5249);
	jint temp0 = (jint)SM_java_math_BigDecimal_checkScale_java_math_BigInteger_long_R_int(ctx, (frame[0].o), ((jlong((frame[4].i))) + (jlong((frame[3].i)))));
	if (temp0 <= (frame[1].i)) goto label_1;
	}
	{
	LINE_NUMBER(5250);
	frame[6].i = ((frame[4].i) + (frame[3].i));
	LINE_NUMBER(5251);
	frame[7].i = ((frame[6].i) - (frame[1].i));
	LINE_NUMBER(5252);
	sp[0].o = (jobject)SM_java_math_BigDecimal_bigMultiplyPowerTen_java_math_BigInteger_int_R_java_math_BigInteger(ctx, (frame[0].o), (frame[7].i));
	frame[8].o = sp[0].o;
	LINE_NUMBER(5253);
	sp[0].o = (jobject)SM_java_math_BigDecimal_divideAndRound_java_math_BigInteger_java_math_BigInteger_int_int_int_R_java_math_BigDecimal(ctx, (frame[8].o), (frame[2].o), (frame[4].i), (frame[5].i), (frame[4].i));
	popStackFrame(ctx);
	return sp[0].o;
	}
label_1:;
	{
	LINE_NUMBER(5255);
	jint temp0 = (jint)SM_java_math_BigDecimal_checkScale_java_math_BigInteger_long_R_int(ctx, (frame[2].o), ((jlong((frame[1].i))) - (jlong((frame[4].i)))));
	frame[6].i = temp0;
	LINE_NUMBER(5256);
	frame[7].i = ((frame[6].i) - (frame[3].i));
	LINE_NUMBER(5257);
	sp[0].o = (jobject)SM_java_math_BigDecimal_bigMultiplyPowerTen_java_math_BigInteger_int_R_java_math_BigInteger(ctx, (frame[2].o), (frame[7].i));
	frame[8].o = sp[0].o;
	LINE_NUMBER(5258);
	sp[0].o = (jobject)SM_java_math_BigDecimal_divideAndRound_java_math_BigInteger_java_math_BigInteger_int_int_int_R_java_math_BigDecimal(ctx, (frame[0].o), (frame[8].o), (frame[4].i), (frame[5].i), (frame[4].i));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jint M_java_math_BigDecimal_compareTo_java_lang_Object_R_int(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/math/BigDecimal:compareTo", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(221);
	jint temp0 = (jint)((func_java_math_BigDecimal_compareTo_java_math_BigDecimal_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_math_BigDecimal_compareTo_java_math_BigDecimal_R_int])(ctx, (frame[0].o), (checkCast(ctx, &class_java_math_BigDecimal, (frame[1].o))));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jobject SM_java_math_BigDecimal_access$000_java_math_BigDecimal_R_java_math_BigInteger(jcontext ctx, jobject param0) {
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/math/BigDecimal:access$000", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_math_BigDecimal(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(221);
	sp[0].o = (jobject)M_java_math_BigDecimal_inflated_R_java_math_BigInteger(ctx, (frame[0].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void clinit_java_math_BigDecimal(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	clinit_java_lang_Number(ctx);
	SF_java_math_BigDecimal_INFLATED = jlong(-9223372036854775807ll);
	SF_java_math_BigDecimal_MAX_COMPACT_DIGITS = jint(18);
	SF_java_math_BigDecimal_serialVersionUID = jlong(6108874887143696463ll);
	SF_java_math_BigDecimal_HALF_LONG_MAX_VALUE = jlong(4611686018427387903ll);
	SF_java_math_BigDecimal_HALF_LONG_MIN_VALUE = jlong(-4611686018427387903ll);
	SF_java_math_BigDecimal_ROUND_UP = jint(0);
	SF_java_math_BigDecimal_ROUND_DOWN = jint(1);
	SF_java_math_BigDecimal_ROUND_CEILING = jint(2);
	SF_java_math_BigDecimal_ROUND_FLOOR = jint(3);
	SF_java_math_BigDecimal_ROUND_HALF_UP = jint(4);
	SF_java_math_BigDecimal_ROUND_HALF_DOWN = jint(5);
	SF_java_math_BigDecimal_ROUND_HALF_EVEN = jint(6);
	SF_java_math_BigDecimal_ROUND_UNNECESSARY = jint(7);
	SF_java_math_BigDecimal_DIV_NUM_BASE = jlong(4294967296ll);
	jtype frame[10];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/math/BigDecimal:<clinit>", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_math_BigDecimal(ctx);
	{
	LINE_NUMBER(221);
	jint temp0 = (jint)((func_java_lang_Class_desiredAssertionStatus_R_boolean) ((void **) nullCheck(ctx, (((jobject) &class_java_math_BigDecimal)))->vtable)[VTABLE_java_lang_Class_desiredAssertionStatus_R_boolean])(ctx, (((jobject) &class_java_math_BigDecimal)));
	if (temp0 != 0) goto label_1;
	}
	INST_ICONST(1);
	goto label_2;
label_1:;
	INST_ICONST(0);
label_2:;
	{
	sp -= 1;
	clinit_java_math_BigDecimal(ctx);
	SF_java_math_BigDecimal_$assertionsDisabled = sp[0].i;
	LINE_NUMBER(262);
	sp[0].o = (jobject)SM_java_math_BigInteger_valueOf_long_R_java_math_BigInteger(ctx, (jlong(-9223372036854775807ll)));
	clinit_java_math_BigDecimal(ctx);
	SF_java_math_BigDecimal_INFLATED_BIGINT = sp[0].o;
	LINE_NUMBER(279);
	clinit_java_math_BigDecimal$1(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_math_BigDecimal$1);
	init_java_math_BigDecimal$1(ctx, sp[0].o);
	clinit_java_math_BigDecimal(ctx);
	SF_java_math_BigDecimal_threadLocalStringBuilderHelper = sp[0].o;
	LINE_NUMBER(287);
	sp[0].o = (jobject)createArray(ctx, &class_java_math_BigDecimal, (11));
	jint temp0 = jint(0);
	clinit_java_math_BigDecimal(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_math_BigDecimal);
	clinit_java_math_BigInteger(ctx);
	sp[2].o = (jobject)SF_java_math_BigInteger_ZERO;
	init_java_math_BigDecimal_java_math_BigInteger_long_int_int(ctx, sp[1].o, sp[2].o, (jlong(0)), (jint(0)), (jint(1)));
	ARRAY_ACCESS(jobject, sp[0].o, temp0) = sp[1].o;
	jint temp1 = jint(1);
	clinit_java_math_BigDecimal(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_math_BigDecimal);
	clinit_java_math_BigInteger(ctx);
	sp[2].o = (jobject)SF_java_math_BigInteger_ONE;
	init_java_math_BigDecimal_java_math_BigInteger_long_int_int(ctx, sp[1].o, sp[2].o, (jlong(1)), (jint(0)), (jint(1)));
	ARRAY_ACCESS(jobject, sp[0].o, temp1) = sp[1].o;
	jint temp2 = jint(2);
	clinit_java_math_BigDecimal(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_math_BigDecimal);
	jlong temp3 = jlong(2ll);
	LINE_NUMBER(290);
	sp[2].o = (jobject)SM_java_math_BigInteger_valueOf_long_R_java_math_BigInteger(ctx, temp3);
	init_java_math_BigDecimal_java_math_BigInteger_long_int_int(ctx, sp[1].o, sp[2].o, (jlong(2ll)), (jint(0)), (jint(1)));
	ARRAY_ACCESS(jobject, sp[0].o, temp2) = sp[1].o;
	jint temp4 = jint(3);
	clinit_java_math_BigDecimal(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_math_BigDecimal);
	jlong temp5 = jlong(3ll);
	LINE_NUMBER(291);
	sp[2].o = (jobject)SM_java_math_BigInteger_valueOf_long_R_java_math_BigInteger(ctx, temp5);
	init_java_math_BigDecimal_java_math_BigInteger_long_int_int(ctx, sp[1].o, sp[2].o, (jlong(3ll)), (jint(0)), (jint(1)));
	ARRAY_ACCESS(jobject, sp[0].o, temp4) = sp[1].o;
	jint temp6 = jint(4);
	clinit_java_math_BigDecimal(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_math_BigDecimal);
	jlong temp7 = jlong(4ll);
	LINE_NUMBER(292);
	sp[2].o = (jobject)SM_java_math_BigInteger_valueOf_long_R_java_math_BigInteger(ctx, temp7);
	init_java_math_BigDecimal_java_math_BigInteger_long_int_int(ctx, sp[1].o, sp[2].o, (jlong(4ll)), (jint(0)), (jint(1)));
	ARRAY_ACCESS(jobject, sp[0].o, temp6) = sp[1].o;
	jint temp8 = jint(5);
	clinit_java_math_BigDecimal(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_math_BigDecimal);
	jlong temp9 = jlong(5ll);
	LINE_NUMBER(293);
	sp[2].o = (jobject)SM_java_math_BigInteger_valueOf_long_R_java_math_BigInteger(ctx, temp9);
	init_java_math_BigDecimal_java_math_BigInteger_long_int_int(ctx, sp[1].o, sp[2].o, (jlong(5ll)), (jint(0)), (jint(1)));
	ARRAY_ACCESS(jobject, sp[0].o, temp8) = sp[1].o;
	jint temp10 = 6;
	clinit_java_math_BigDecimal(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_math_BigDecimal);
	jlong temp11 = jlong(6ll);
	LINE_NUMBER(294);
	sp[2].o = (jobject)SM_java_math_BigInteger_valueOf_long_R_java_math_BigInteger(ctx, temp11);
	init_java_math_BigDecimal_java_math_BigInteger_long_int_int(ctx, sp[1].o, sp[2].o, (jlong(6ll)), (jint(0)), (jint(1)));
	ARRAY_ACCESS(jobject, sp[0].o, temp10) = sp[1].o;
	jint temp12 = 7;
	clinit_java_math_BigDecimal(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_math_BigDecimal);
	jlong temp13 = jlong(7ll);
	LINE_NUMBER(295);
	sp[2].o = (jobject)SM_java_math_BigInteger_valueOf_long_R_java_math_BigInteger(ctx, temp13);
	init_java_math_BigDecimal_java_math_BigInteger_long_int_int(ctx, sp[1].o, sp[2].o, (jlong(7ll)), (jint(0)), (jint(1)));
	ARRAY_ACCESS(jobject, sp[0].o, temp12) = sp[1].o;
	jint temp14 = 8;
	clinit_java_math_BigDecimal(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_math_BigDecimal);
	jlong temp15 = jlong(8ll);
	LINE_NUMBER(296);
	sp[2].o = (jobject)SM_java_math_BigInteger_valueOf_long_R_java_math_BigInteger(ctx, temp15);
	init_java_math_BigDecimal_java_math_BigInteger_long_int_int(ctx, sp[1].o, sp[2].o, (jlong(8ll)), (jint(0)), (jint(1)));
	ARRAY_ACCESS(jobject, sp[0].o, temp14) = sp[1].o;
	jint temp16 = 9;
	clinit_java_math_BigDecimal(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_math_BigDecimal);
	jlong temp17 = jlong(9ll);
	LINE_NUMBER(297);
	sp[2].o = (jobject)SM_java_math_BigInteger_valueOf_long_R_java_math_BigInteger(ctx, temp17);
	init_java_math_BigDecimal_java_math_BigInteger_long_int_int(ctx, sp[1].o, sp[2].o, (jlong(9ll)), (jint(0)), (jint(1)));
	ARRAY_ACCESS(jobject, sp[0].o, temp16) = sp[1].o;
	jint temp18 = 10;
	clinit_java_math_BigDecimal(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_math_BigDecimal);
	clinit_java_math_BigInteger(ctx);
	sp[2].o = (jobject)SF_java_math_BigInteger_TEN;
	init_java_math_BigDecimal_java_math_BigInteger_long_int_int(ctx, sp[1].o, sp[2].o, (jlong(10ll)), (jint(0)), (jint(2)));
	ARRAY_ACCESS(jobject, sp[0].o, temp18) = sp[1].o;
	clinit_java_math_BigDecimal(ctx);
	SF_java_math_BigDecimal_zeroThroughTen = sp[0].o;
	LINE_NUMBER(302);
	sp[0].o = (jobject)createArray(ctx, &class_java_math_BigDecimal, (16));
	jint temp19 = jint(0);
	clinit_java_math_BigDecimal(ctx);
	sp[1].o = (jobject)SF_java_math_BigDecimal_zeroThroughTen;
	ARRAY_ACCESS(jobject, sp[0].o, temp19) = ((jobject)ARRAY_ACCESS(jobject, sp[1].o, (jint(0))));
	jint temp20 = jint(1);
	clinit_java_math_BigDecimal(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_math_BigDecimal);
	clinit_java_math_BigInteger(ctx);
	sp[2].o = (jobject)SF_java_math_BigInteger_ZERO;
	init_java_math_BigDecimal_java_math_BigInteger_long_int_int(ctx, sp[1].o, sp[2].o, (jlong(0)), (jint(1)), (jint(1)));
	ARRAY_ACCESS(jobject, sp[0].o, temp20) = sp[1].o;
	jint temp21 = jint(2);
	clinit_java_math_BigDecimal(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_math_BigDecimal);
	clinit_java_math_BigInteger(ctx);
	sp[2].o = (jobject)SF_java_math_BigInteger_ZERO;
	init_java_math_BigDecimal_java_math_BigInteger_long_int_int(ctx, sp[1].o, sp[2].o, (jlong(0)), (jint(2)), (jint(1)));
	ARRAY_ACCESS(jobject, sp[0].o, temp21) = sp[1].o;
	jint temp22 = jint(3);
	clinit_java_math_BigDecimal(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_math_BigDecimal);
	clinit_java_math_BigInteger(ctx);
	sp[2].o = (jobject)SF_java_math_BigInteger_ZERO;
	init_java_math_BigDecimal_java_math_BigInteger_long_int_int(ctx, sp[1].o, sp[2].o, (jlong(0)), (jint(3)), (jint(1)));
	ARRAY_ACCESS(jobject, sp[0].o, temp22) = sp[1].o;
	jint temp23 = jint(4);
	clinit_java_math_BigDecimal(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_math_BigDecimal);
	clinit_java_math_BigInteger(ctx);
	sp[2].o = (jobject)SF_java_math_BigInteger_ZERO;
	init_java_math_BigDecimal_java_math_BigInteger_long_int_int(ctx, sp[1].o, sp[2].o, (jlong(0)), (jint(4)), (jint(1)));
	ARRAY_ACCESS(jobject, sp[0].o, temp23) = sp[1].o;
	jint temp24 = jint(5);
	clinit_java_math_BigDecimal(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_math_BigDecimal);
	clinit_java_math_BigInteger(ctx);
	sp[2].o = (jobject)SF_java_math_BigInteger_ZERO;
	init_java_math_BigDecimal_java_math_BigInteger_long_int_int(ctx, sp[1].o, sp[2].o, (jlong(0)), (jint(5)), (jint(1)));
	ARRAY_ACCESS(jobject, sp[0].o, temp24) = sp[1].o;
	jint temp25 = 6;
	clinit_java_math_BigDecimal(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_math_BigDecimal);
	clinit_java_math_BigInteger(ctx);
	sp[2].o = (jobject)SF_java_math_BigInteger_ZERO;
	init_java_math_BigDecimal_java_math_BigInteger_long_int_int(ctx, sp[1].o, sp[2].o, (jlong(0)), (6), (jint(1)));
	ARRAY_ACCESS(jobject, sp[0].o, temp25) = sp[1].o;
	jint temp26 = 7;
	clinit_java_math_BigDecimal(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_math_BigDecimal);
	clinit_java_math_BigInteger(ctx);
	sp[2].o = (jobject)SF_java_math_BigInteger_ZERO;
	init_java_math_BigDecimal_java_math_BigInteger_long_int_int(ctx, sp[1].o, sp[2].o, (jlong(0)), (7), (jint(1)));
	ARRAY_ACCESS(jobject, sp[0].o, temp26) = sp[1].o;
	jint temp27 = 8;
	clinit_java_math_BigDecimal(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_math_BigDecimal);
	clinit_java_math_BigInteger(ctx);
	sp[2].o = (jobject)SF_java_math_BigInteger_ZERO;
	init_java_math_BigDecimal_java_math_BigInteger_long_int_int(ctx, sp[1].o, sp[2].o, (jlong(0)), (8), (jint(1)));
	ARRAY_ACCESS(jobject, sp[0].o, temp27) = sp[1].o;
	jint temp28 = 9;
	clinit_java_math_BigDecimal(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_math_BigDecimal);
	clinit_java_math_BigInteger(ctx);
	sp[2].o = (jobject)SF_java_math_BigInteger_ZERO;
	init_java_math_BigDecimal_java_math_BigInteger_long_int_int(ctx, sp[1].o, sp[2].o, (jlong(0)), (9), (jint(1)));
	ARRAY_ACCESS(jobject, sp[0].o, temp28) = sp[1].o;
	jint temp29 = 10;
	clinit_java_math_BigDecimal(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_math_BigDecimal);
	clinit_java_math_BigInteger(ctx);
	sp[2].o = (jobject)SF_java_math_BigInteger_ZERO;
	init_java_math_BigDecimal_java_math_BigInteger_long_int_int(ctx, sp[1].o, sp[2].o, (jlong(0)), (10), (jint(1)));
	ARRAY_ACCESS(jobject, sp[0].o, temp29) = sp[1].o;
	jint temp30 = 11;
	clinit_java_math_BigDecimal(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_math_BigDecimal);
	clinit_java_math_BigInteger(ctx);
	sp[2].o = (jobject)SF_java_math_BigInteger_ZERO;
	init_java_math_BigDecimal_java_math_BigInteger_long_int_int(ctx, sp[1].o, sp[2].o, (jlong(0)), (11), (jint(1)));
	ARRAY_ACCESS(jobject, sp[0].o, temp30) = sp[1].o;
	jint temp31 = 12;
	clinit_java_math_BigDecimal(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_math_BigDecimal);
	clinit_java_math_BigInteger(ctx);
	sp[2].o = (jobject)SF_java_math_BigInteger_ZERO;
	init_java_math_BigDecimal_java_math_BigInteger_long_int_int(ctx, sp[1].o, sp[2].o, (jlong(0)), (12), (jint(1)));
	ARRAY_ACCESS(jobject, sp[0].o, temp31) = sp[1].o;
	jint temp32 = 13;
	clinit_java_math_BigDecimal(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_math_BigDecimal);
	clinit_java_math_BigInteger(ctx);
	sp[2].o = (jobject)SF_java_math_BigInteger_ZERO;
	init_java_math_BigDecimal_java_math_BigInteger_long_int_int(ctx, sp[1].o, sp[2].o, (jlong(0)), (13), (jint(1)));
	ARRAY_ACCESS(jobject, sp[0].o, temp32) = sp[1].o;
	jint temp33 = 14;
	clinit_java_math_BigDecimal(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_math_BigDecimal);
	clinit_java_math_BigInteger(ctx);
	sp[2].o = (jobject)SF_java_math_BigInteger_ZERO;
	init_java_math_BigDecimal_java_math_BigInteger_long_int_int(ctx, sp[1].o, sp[2].o, (jlong(0)), (14), (jint(1)));
	ARRAY_ACCESS(jobject, sp[0].o, temp33) = sp[1].o;
	jint temp34 = 15;
	clinit_java_math_BigDecimal(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_math_BigDecimal);
	clinit_java_math_BigInteger(ctx);
	sp[2].o = (jobject)SF_java_math_BigInteger_ZERO;
	init_java_math_BigDecimal_java_math_BigInteger_long_int_int(ctx, sp[1].o, sp[2].o, (jlong(0)), (15), (jint(1)));
	ARRAY_ACCESS(jobject, sp[0].o, temp34) = sp[1].o;
	clinit_java_math_BigDecimal(ctx);
	SF_java_math_BigDecimal_ZERO_SCALED_BY = sp[0].o;
	LINE_NUMBER(331);
	clinit_java_math_BigDecimal(ctx);
	sp[0].o = (jobject)SF_java_math_BigDecimal_zeroThroughTen;
	clinit_java_math_BigDecimal(ctx);
	SF_java_math_BigDecimal_ZERO = ((jobject)ARRAY_ACCESS(jobject, sp[0].o, (jint(0))));
	LINE_NUMBER(339);
	clinit_java_math_BigDecimal(ctx);
	sp[0].o = (jobject)SF_java_math_BigDecimal_zeroThroughTen;
	clinit_java_math_BigDecimal(ctx);
	SF_java_math_BigDecimal_ONE = ((jobject)ARRAY_ACCESS(jobject, sp[0].o, (jint(1))));
	LINE_NUMBER(347);
	clinit_java_math_BigDecimal(ctx);
	sp[0].o = (jobject)SF_java_math_BigDecimal_zeroThroughTen;
	clinit_java_math_BigDecimal(ctx);
	SF_java_math_BigDecimal_TEN = ((jobject)ARRAY_ACCESS(jobject, sp[0].o, (10)));
	LINE_NUMBER(3315);
	sp[0].o = (jobject) createArray(ctx, &class_double, (23));
	ARRAY_ACCESS(jdouble, sp[0].o, (jint(0))) = (jdouble(1));
	ARRAY_ACCESS(jdouble, sp[0].o, (jint(1))) = (jdouble(10.0));
	ARRAY_ACCESS(jdouble, sp[0].o, (jint(2))) = (jdouble(100.0));
	ARRAY_ACCESS(jdouble, sp[0].o, (jint(3))) = (jdouble(1000.0));
	ARRAY_ACCESS(jdouble, sp[0].o, (jint(4))) = (jdouble(10000.0));
	ARRAY_ACCESS(jdouble, sp[0].o, (jint(5))) = (jdouble(100000.0));
	ARRAY_ACCESS(jdouble, sp[0].o, (6)) = (jdouble(1000000.0));
	ARRAY_ACCESS(jdouble, sp[0].o, (7)) = (jdouble(1.0E7));
	ARRAY_ACCESS(jdouble, sp[0].o, (8)) = (jdouble(1.0E8));
	ARRAY_ACCESS(jdouble, sp[0].o, (9)) = (jdouble(1,000000e+09));
	ARRAY_ACCESS(jdouble, sp[0].o, (10)) = (jdouble(1,000000e+10));
	ARRAY_ACCESS(jdouble, sp[0].o, (11)) = (jdouble(1,000000e+11));
	ARRAY_ACCESS(jdouble, sp[0].o, (12)) = (jdouble(1,000000e+12));
	ARRAY_ACCESS(jdouble, sp[0].o, (13)) = (jdouble(1,000000e+13));
	ARRAY_ACCESS(jdouble, sp[0].o, (14)) = (jdouble(1,000000e+14));
	ARRAY_ACCESS(jdouble, sp[0].o, (15)) = (jdouble(1,000000e+15));
	ARRAY_ACCESS(jdouble, sp[0].o, (16)) = (jdouble(1,000000e+16));
	ARRAY_ACCESS(jdouble, sp[0].o, (17)) = (jdouble(1,000000e+17));
	ARRAY_ACCESS(jdouble, sp[0].o, (18)) = (jdouble(1,000000e+18));
	ARRAY_ACCESS(jdouble, sp[0].o, (19)) = (jdouble(1,000000e+19));
	ARRAY_ACCESS(jdouble, sp[0].o, (20)) = (jdouble(1,000000e+20));
	ARRAY_ACCESS(jdouble, sp[0].o, (21)) = (jdouble(1,000000e+21));
	ARRAY_ACCESS(jdouble, sp[0].o, (22)) = (jdouble(1,000000e+22));
	clinit_java_math_BigDecimal(ctx);
	SF_java_math_BigDecimal_double10pow = sp[0].o;
	LINE_NUMBER(3326);
	sp[0].o = (jobject) createArray(ctx, &class_float, (11));
	ARRAY_ACCESS(jfloat, sp[0].o, (jint(0))) = (jfloat(1));
	ARRAY_ACCESS(jfloat, sp[0].o, (jint(1))) = (jfloat(10.0f));
	ARRAY_ACCESS(jfloat, sp[0].o, (jint(2))) = (jfloat(100.0f));
	ARRAY_ACCESS(jfloat, sp[0].o, (jint(3))) = (jfloat(1000.0f));
	ARRAY_ACCESS(jfloat, sp[0].o, (jint(4))) = (jfloat(10000.0f));
	ARRAY_ACCESS(jfloat, sp[0].o, (jint(5))) = (jfloat(100000.0f));
	ARRAY_ACCESS(jfloat, sp[0].o, (6)) = (jfloat(1000000.0f));
	ARRAY_ACCESS(jfloat, sp[0].o, (7)) = (jfloat(1.0E7f));
	ARRAY_ACCESS(jfloat, sp[0].o, (8)) = (jfloat(1.0E8f));
	ARRAY_ACCESS(jfloat, sp[0].o, (9)) = (jfloat(1,000000e+09f));
	ARRAY_ACCESS(jfloat, sp[0].o, (10)) = (jfloat(1,000000e+10f));
	clinit_java_math_BigDecimal(ctx);
	SF_java_math_BigDecimal_float10pow = sp[0].o;
	LINE_NUMBER(3609);
	sp[0].o = (jobject) createArray(ctx, &class_long, (19));
	ARRAY_ACCESS(jlong, sp[0].o, (jint(0))) = (jlong(1));
	ARRAY_ACCESS(jlong, sp[0].o, (jint(1))) = (jlong(10ll));
	ARRAY_ACCESS(jlong, sp[0].o, (jint(2))) = (jlong(100ll));
	ARRAY_ACCESS(jlong, sp[0].o, (jint(3))) = (jlong(1000ll));
	ARRAY_ACCESS(jlong, sp[0].o, (jint(4))) = (jlong(10000ll));
	ARRAY_ACCESS(jlong, sp[0].o, (jint(5))) = (jlong(100000ll));
	ARRAY_ACCESS(jlong, sp[0].o, (6)) = (jlong(1000000ll));
	ARRAY_ACCESS(jlong, sp[0].o, (7)) = (jlong(10000000ll));
	ARRAY_ACCESS(jlong, sp[0].o, (8)) = (jlong(100000000ll));
	ARRAY_ACCESS(jlong, sp[0].o, (9)) = (jlong(1000000000ll));
	ARRAY_ACCESS(jlong, sp[0].o, (10)) = (jlong(10000000000ll));
	ARRAY_ACCESS(jlong, sp[0].o, (11)) = (jlong(100000000000ll));
	ARRAY_ACCESS(jlong, sp[0].o, (12)) = (jlong(1000000000000ll));
	ARRAY_ACCESS(jlong, sp[0].o, (13)) = (jlong(10000000000000ll));
	ARRAY_ACCESS(jlong, sp[0].o, (14)) = (jlong(100000000000000ll));
	ARRAY_ACCESS(jlong, sp[0].o, (15)) = (jlong(1000000000000000ll));
	ARRAY_ACCESS(jlong, sp[0].o, (16)) = (jlong(10000000000000000ll));
	ARRAY_ACCESS(jlong, sp[0].o, (17)) = (jlong(100000000000000000ll));
	ARRAY_ACCESS(jlong, sp[0].o, (18)) = (jlong(1000000000000000000ll));
	clinit_java_math_BigDecimal(ctx);
	SF_java_math_BigDecimal_LONG_TEN_POWERS_TABLE = sp[0].o;
	LINE_NUMBER(3631);
	sp[0].o = (jobject)createArray(ctx, &class_java_math_BigInteger, (19));
	jint temp35 = jint(0);
	clinit_java_math_BigInteger(ctx);
	sp[1].o = (jobject)SF_java_math_BigInteger_ONE;
	ARRAY_ACCESS(jobject, sp[0].o, temp35) = sp[1].o;
	jint temp36 = jint(1);
	jlong temp37 = jlong(10ll);
	LINE_NUMBER(3633);
	sp[1].o = (jobject)SM_java_math_BigInteger_valueOf_long_R_java_math_BigInteger(ctx, temp37);
	ARRAY_ACCESS(jobject, sp[0].o, temp36) = sp[1].o;
	jint temp38 = jint(2);
	jlong temp39 = jlong(100ll);
	LINE_NUMBER(3634);
	sp[1].o = (jobject)SM_java_math_BigInteger_valueOf_long_R_java_math_BigInteger(ctx, temp39);
	ARRAY_ACCESS(jobject, sp[0].o, temp38) = sp[1].o;
	jint temp40 = jint(3);
	jlong temp41 = jlong(1000ll);
	LINE_NUMBER(3635);
	sp[1].o = (jobject)SM_java_math_BigInteger_valueOf_long_R_java_math_BigInteger(ctx, temp41);
	ARRAY_ACCESS(jobject, sp[0].o, temp40) = sp[1].o;
	jint temp42 = jint(4);
	jlong temp43 = jlong(10000ll);
	LINE_NUMBER(3636);
	sp[1].o = (jobject)SM_java_math_BigInteger_valueOf_long_R_java_math_BigInteger(ctx, temp43);
	ARRAY_ACCESS(jobject, sp[0].o, temp42) = sp[1].o;
	jint temp44 = jint(5);
	jlong temp45 = jlong(100000ll);
	LINE_NUMBER(3637);
	sp[1].o = (jobject)SM_java_math_BigInteger_valueOf_long_R_java_math_BigInteger(ctx, temp45);
	ARRAY_ACCESS(jobject, sp[0].o, temp44) = sp[1].o;
	jint temp46 = 6;
	jlong temp47 = jlong(1000000ll);
	LINE_NUMBER(3638);
	sp[1].o = (jobject)SM_java_math_BigInteger_valueOf_long_R_java_math_BigInteger(ctx, temp47);
	ARRAY_ACCESS(jobject, sp[0].o, temp46) = sp[1].o;
	jint temp48 = 7;
	jlong temp49 = jlong(10000000ll);
	LINE_NUMBER(3639);
	sp[1].o = (jobject)SM_java_math_BigInteger_valueOf_long_R_java_math_BigInteger(ctx, temp49);
	ARRAY_ACCESS(jobject, sp[0].o, temp48) = sp[1].o;
	jint temp50 = 8;
	jlong temp51 = jlong(100000000ll);
	LINE_NUMBER(3640);
	sp[1].o = (jobject)SM_java_math_BigInteger_valueOf_long_R_java_math_BigInteger(ctx, temp51);
	ARRAY_ACCESS(jobject, sp[0].o, temp50) = sp[1].o;
	jint temp52 = 9;
	jlong temp53 = jlong(1000000000ll);
	LINE_NUMBER(3641);
	sp[1].o = (jobject)SM_java_math_BigInteger_valueOf_long_R_java_math_BigInteger(ctx, temp53);
	ARRAY_ACCESS(jobject, sp[0].o, temp52) = sp[1].o;
	jint temp54 = 10;
	jlong temp55 = jlong(10000000000ll);
	LINE_NUMBER(3642);
	sp[1].o = (jobject)SM_java_math_BigInteger_valueOf_long_R_java_math_BigInteger(ctx, temp55);
	ARRAY_ACCESS(jobject, sp[0].o, temp54) = sp[1].o;
	jint temp56 = 11;
	jlong temp57 = jlong(100000000000ll);
	LINE_NUMBER(3643);
	sp[1].o = (jobject)SM_java_math_BigInteger_valueOf_long_R_java_math_BigInteger(ctx, temp57);
	ARRAY_ACCESS(jobject, sp[0].o, temp56) = sp[1].o;
	jint temp58 = 12;
	jlong temp59 = jlong(1000000000000ll);
	LINE_NUMBER(3644);
	sp[1].o = (jobject)SM_java_math_BigInteger_valueOf_long_R_java_math_BigInteger(ctx, temp59);
	ARRAY_ACCESS(jobject, sp[0].o, temp58) = sp[1].o;
	jint temp60 = 13;
	jlong temp61 = jlong(10000000000000ll);
	LINE_NUMBER(3645);
	sp[1].o = (jobject)SM_java_math_BigInteger_valueOf_long_R_java_math_BigInteger(ctx, temp61);
	ARRAY_ACCESS(jobject, sp[0].o, temp60) = sp[1].o;
	jint temp62 = 14;
	jlong temp63 = jlong(100000000000000ll);
	LINE_NUMBER(3646);
	sp[1].o = (jobject)SM_java_math_BigInteger_valueOf_long_R_java_math_BigInteger(ctx, temp63);
	ARRAY_ACCESS(jobject, sp[0].o, temp62) = sp[1].o;
	jint temp64 = 15;
	jlong temp65 = jlong(1000000000000000ll);
	LINE_NUMBER(3647);
	sp[1].o = (jobject)SM_java_math_BigInteger_valueOf_long_R_java_math_BigInteger(ctx, temp65);
	ARRAY_ACCESS(jobject, sp[0].o, temp64) = sp[1].o;
	jint temp66 = 16;
	jlong temp67 = jlong(10000000000000000ll);
	LINE_NUMBER(3648);
	sp[1].o = (jobject)SM_java_math_BigInteger_valueOf_long_R_java_math_BigInteger(ctx, temp67);
	ARRAY_ACCESS(jobject, sp[0].o, temp66) = sp[1].o;
	jint temp68 = 17;
	jlong temp69 = jlong(100000000000000000ll);
	LINE_NUMBER(3649);
	sp[1].o = (jobject)SM_java_math_BigInteger_valueOf_long_R_java_math_BigInteger(ctx, temp69);
	ARRAY_ACCESS(jobject, sp[0].o, temp68) = sp[1].o;
	jint temp70 = 18;
	jlong temp71 = jlong(1000000000000000000ll);
	LINE_NUMBER(3650);
	sp[1].o = (jobject)SM_java_math_BigInteger_valueOf_long_R_java_math_BigInteger(ctx, temp71);
	ARRAY_ACCESS(jobject, sp[0].o, temp70) = sp[1].o;
	clinit_java_math_BigDecimal(ctx);
	SF_java_math_BigDecimal_BIG_TEN_POWERS_TABLE = sp[0].o;
	LINE_NUMBER(3653);
	clinit_java_math_BigDecimal(ctx);
	sp[0].o = (jobject)SF_java_math_BigDecimal_BIG_TEN_POWERS_TABLE;
	clinit_java_math_BigDecimal(ctx);
	SF_java_math_BigDecimal_BIG_TEN_POWERS_TABLE_INITLEN = (((jarray) nullCheck(ctx, sp[0].o))->length);
	LINE_NUMBER(3655);
	clinit_java_math_BigDecimal(ctx);
	SF_java_math_BigDecimal_BIG_TEN_POWERS_TABLE_MAX = ((16) * (clinit_java_math_BigDecimal(ctx), (jint)SF_java_math_BigDecimal_BIG_TEN_POWERS_TABLE_INITLEN));
	LINE_NUMBER(3658);
	sp[0].o = (jobject) createArray(ctx, &class_long, (19));
	ARRAY_ACCESS(jlong, sp[0].o, (jint(0))) = (jlong(9223372036854775807ll));
	ARRAY_ACCESS(jlong, sp[0].o, (jint(1))) = (jlong(922337203685477580ll));
	ARRAY_ACCESS(jlong, sp[0].o, (jint(2))) = (jlong(92233720368547758ll));
	ARRAY_ACCESS(jlong, sp[0].o, (jint(3))) = (jlong(9223372036854775ll));
	ARRAY_ACCESS(jlong, sp[0].o, (jint(4))) = (jlong(922337203685477ll));
	ARRAY_ACCESS(jlong, sp[0].o, (jint(5))) = (jlong(92233720368547ll));
	ARRAY_ACCESS(jlong, sp[0].o, (6)) = (jlong(9223372036854ll));
	ARRAY_ACCESS(jlong, sp[0].o, (7)) = (jlong(922337203685ll));
	ARRAY_ACCESS(jlong, sp[0].o, (8)) = (jlong(92233720368ll));
	ARRAY_ACCESS(jlong, sp[0].o, (9)) = (jlong(9223372036ll));
	ARRAY_ACCESS(jlong, sp[0].o, (10)) = (jlong(922337203ll));
	ARRAY_ACCESS(jlong, sp[0].o, (11)) = (jlong(92233720ll));
	ARRAY_ACCESS(jlong, sp[0].o, (12)) = (jlong(9223372ll));
	ARRAY_ACCESS(jlong, sp[0].o, (13)) = (jlong(922337ll));
	ARRAY_ACCESS(jlong, sp[0].o, (14)) = (jlong(92233ll));
	ARRAY_ACCESS(jlong, sp[0].o, (15)) = (jlong(9223ll));
	ARRAY_ACCESS(jlong, sp[0].o, (16)) = (jlong(922ll));
	ARRAY_ACCESS(jlong, sp[0].o, (17)) = (jlong(92ll));
	ARRAY_ACCESS(jlong, sp[0].o, (18)) = (jlong(9ll));
	clinit_java_math_BigDecimal(ctx);
	SF_java_math_BigDecimal_THRESHOLDS_TABLE = sp[0].o;
	LINE_NUMBER(5133);
	sp[0].o = (jobject)createArray(ctx, getArrayClass(&class_long, 1), (20));
	jint temp72 = jint(0);
	sp[1].o = (jobject) createArray(ctx, &class_long, (jint(2)));
	ARRAY_ACCESS(jlong, sp[1].o, (jint(0))) = (jlong(0));
	ARRAY_ACCESS(jlong, sp[1].o, (jint(1))) = (jlong(-8446744073709551616ll));
	ARRAY_ACCESS(jobject, sp[0].o, temp72) = sp[1].o;
	jint temp73 = jint(1);
	sp[1].o = (jobject) createArray(ctx, &class_long, (jint(2)));
	ARRAY_ACCESS(jlong, sp[1].o, (jint(0))) = (jlong(5ll));
	ARRAY_ACCESS(jlong, sp[1].o, (jint(1))) = (jlong(7766279631452241920ll));
	ARRAY_ACCESS(jobject, sp[0].o, temp73) = sp[1].o;
	jint temp74 = jint(2);
	sp[1].o = (jobject) createArray(ctx, &class_long, (jint(2)));
	ARRAY_ACCESS(jlong, sp[1].o, (jint(0))) = (jlong(54ll));
	ARRAY_ACCESS(jlong, sp[1].o, (jint(1))) = (jlong(3875820019684212736ll));
	ARRAY_ACCESS(jobject, sp[0].o, temp74) = sp[1].o;
	jint temp75 = jint(3);
	sp[1].o = (jobject) createArray(ctx, &class_long, (jint(2)));
	ARRAY_ACCESS(jlong, sp[1].o, (jint(0))) = (jlong(542ll));
	ARRAY_ACCESS(jlong, sp[1].o, (jint(1))) = (jlong(1864712049423024128ll));
	ARRAY_ACCESS(jobject, sp[0].o, temp75) = sp[1].o;
	jint temp76 = jint(4);
	sp[1].o = (jobject) createArray(ctx, &class_long, (jint(2)));
	ARRAY_ACCESS(jlong, sp[1].o, (jint(0))) = (jlong(5421ll));
	ARRAY_ACCESS(jlong, sp[1].o, (jint(1))) = (jlong(200376420520689664ll));
	ARRAY_ACCESS(jobject, sp[0].o, temp76) = sp[1].o;
	jint temp77 = jint(5);
	sp[1].o = (jobject) createArray(ctx, &class_long, (jint(2)));
	ARRAY_ACCESS(jlong, sp[1].o, (jint(0))) = (jlong(54210ll));
	ARRAY_ACCESS(jlong, sp[1].o, (jint(1))) = (jlong(2003764205206896640ll));
	ARRAY_ACCESS(jobject, sp[0].o, temp77) = sp[1].o;
	jint temp78 = 6;
	sp[1].o = (jobject) createArray(ctx, &class_long, (jint(2)));
	ARRAY_ACCESS(jlong, sp[1].o, (jint(0))) = (jlong(542101ll));
	ARRAY_ACCESS(jlong, sp[1].o, (jint(1))) = (jlong(1590897978359414784ll));
	ARRAY_ACCESS(jobject, sp[0].o, temp78) = sp[1].o;
	jint temp79 = 7;
	sp[1].o = (jobject) createArray(ctx, &class_long, (jint(2)));
	ARRAY_ACCESS(jlong, sp[1].o, (jint(0))) = (jlong(5421010ll));
	ARRAY_ACCESS(jlong, sp[1].o, (jint(1))) = (jlong(-2537764290115403776ll));
	ARRAY_ACCESS(jobject, sp[0].o, temp79) = sp[1].o;
	jint temp80 = 8;
	sp[1].o = (jobject) createArray(ctx, &class_long, (jint(2)));
	ARRAY_ACCESS(jlong, sp[1].o, (jint(0))) = (jlong(54210108ll));
	ARRAY_ACCESS(jlong, sp[1].o, (jint(1))) = (jlong(-6930898827444486144ll));
	ARRAY_ACCESS(jobject, sp[0].o, temp80) = sp[1].o;
	jint temp81 = 9;
	sp[1].o = (jobject) createArray(ctx, &class_long, (jint(2)));
	ARRAY_ACCESS(jlong, sp[1].o, (jint(0))) = (jlong(542101086ll));
	ARRAY_ACCESS(jlong, sp[1].o, (jint(1))) = (jlong(4477988020393345024ll));
	ARRAY_ACCESS(jobject, sp[0].o, temp81) = sp[1].o;
	jint temp82 = 10;
	sp[1].o = (jobject) createArray(ctx, &class_long, (jint(2)));
	ARRAY_ACCESS(jlong, sp[1].o, (jint(0))) = (jlong(5421010862ll));
	ARRAY_ACCESS(jlong, sp[1].o, (jint(1))) = (jlong(7886392056514347008ll));
	ARRAY_ACCESS(jobject, sp[0].o, temp82) = sp[1].o;
	jint temp83 = 11;
	sp[1].o = (jobject) createArray(ctx, &class_long, (jint(2)));
	ARRAY_ACCESS(jlong, sp[1].o, (jint(0))) = (jlong(54210108624ll));
	ARRAY_ACCESS(jlong, sp[1].o, (jint(1))) = (jlong(5076944270305263616ll));
	ARRAY_ACCESS(jobject, sp[0].o, temp83) = sp[1].o;
	jint temp84 = 12;
	sp[1].o = (jobject) createArray(ctx, &class_long, (jint(2)));
	ARRAY_ACCESS(jlong, sp[1].o, (jint(0))) = (jlong(542101086242ll));
	ARRAY_ACCESS(jlong, sp[1].o, (jint(1))) = (jlong(-4570789518076018688ll));
	ARRAY_ACCESS(jobject, sp[0].o, temp84) = sp[1].o;
	jint temp85 = 13;
	sp[1].o = (jobject) createArray(ctx, &class_long, (jint(2)));
	ARRAY_ACCESS(jlong, sp[1].o, (jint(0))) = (jlong(5421010862427ll));
	ARRAY_ACCESS(jlong, sp[1].o, (jint(1))) = (jlong(-8814407033341083648ll));
	ARRAY_ACCESS(jobject, sp[0].o, temp85) = sp[1].o;
	jint temp86 = 14;
	sp[1].o = (jobject) createArray(ctx, &class_long, (jint(2)));
	ARRAY_ACCESS(jlong, sp[1].o, (jint(0))) = (jlong(54210108624275ll));
	ARRAY_ACCESS(jlong, sp[1].o, (jint(1))) = (jlong(4089650035136921600ll));
	ARRAY_ACCESS(jobject, sp[0].o, temp86) = sp[1].o;
	jint temp87 = 15;
	sp[1].o = (jobject) createArray(ctx, &class_long, (jint(2)));
	ARRAY_ACCESS(jlong, sp[1].o, (jint(0))) = (jlong(542101086242752ll));
	ARRAY_ACCESS(jlong, sp[1].o, (jint(1))) = (jlong(4003012203950112768ll));
	ARRAY_ACCESS(jobject, sp[0].o, temp87) = sp[1].o;
	jint temp88 = 16;
	sp[1].o = (jobject) createArray(ctx, &class_long, (jint(2)));
	ARRAY_ACCESS(jlong, sp[1].o, (jint(0))) = (jlong(5421010862427522ll));
	ARRAY_ACCESS(jlong, sp[1].o, (jint(1))) = (jlong(3136633892082024448ll));
	ARRAY_ACCESS(jobject, sp[0].o, temp88) = sp[1].o;
	jint temp89 = 17;
	sp[1].o = (jobject) createArray(ctx, &class_long, (jint(2)));
	ARRAY_ACCESS(jlong, sp[1].o, (jint(0))) = (jlong(54210108624275221ll));
	ARRAY_ACCESS(jlong, sp[1].o, (jint(1))) = (jlong(-5527149226598858752ll));
	ARRAY_ACCESS(jobject, sp[0].o, temp89) = sp[1].o;
	jint temp90 = 18;
	sp[1].o = (jobject) createArray(ctx, &class_long, (jint(2)));
	ARRAY_ACCESS(jlong, sp[1].o, (jint(0))) = (jlong(542101086242752217ll));
	ARRAY_ACCESS(jlong, sp[1].o, (jint(1))) = (jlong(68739955140067328ll));
	ARRAY_ACCESS(jobject, sp[0].o, temp90) = sp[1].o;
	jint temp91 = 19;
	sp[1].o = (jobject) createArray(ctx, &class_long, (jint(2)));
	ARRAY_ACCESS(jlong, sp[1].o, (jint(0))) = (jlong(5421010862427522170ll));
	ARRAY_ACCESS(jlong, sp[1].o, (jint(1))) = (jlong(687399551400673280ll));
	ARRAY_ACCESS(jobject, sp[0].o, temp91) = sp[1].o;
	clinit_java_math_BigDecimal(ctx);
	SF_java_math_BigDecimal_LONGLONG_TEN_POWERS_TABLE = sp[0].o;
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void *vtable_java_math_BigDecimal[] {
	(void *) M_java_math_BigDecimal_hashCode_R_int,
	(void *) M_java_math_BigDecimal_equals_java_lang_Object_R_boolean,
	(void *) M_java_lang_Object_clone_R_java_lang_Object,
	(void *) M_java_lang_Object_getClass_R_java_lang_Class,
	(void *) M_java_math_BigDecimal_toString_R_java_lang_String,
	(void *) M_java_lang_Object_finalize,
	(void *) M_java_lang_Object_notify,
	(void *) M_java_lang_Object_notifyAll,
	(void *) M_java_lang_Object_wait,
	(void *) M_java_lang_Object_wait_long,
	(void *) M_java_lang_Object_wait_long_int,
	(void *) M_java_math_BigDecimal_intValue_R_int,
	(void *) M_java_lang_Number_byteValue_R_byte,
	(void *) M_java_math_BigDecimal_longValue_R_long,
	(void *) M_java_math_BigDecimal_floatValue_R_float,
	(void *) M_java_math_BigDecimal_doubleValue_R_double,
	(void *) M_java_lang_Number_shortValue_R_short,
	(void *) M_java_math_BigDecimal_compareTo_java_lang_Object_R_int,
	(void *) M_java_math_BigDecimal_adjustScale_int_long_R_int,
	(void *) M_java_math_BigDecimal_add_java_math_BigDecimal_R_java_math_BigDecimal,
	(void *) M_java_math_BigDecimal_add_java_math_BigDecimal_java_math_MathContext_R_java_math_BigDecimal,
	(void *) M_java_math_BigDecimal_preAlign_java_math_BigDecimal_java_math_BigDecimal_long_java_math_MathContext_R_Array1_java_math_BigDecimal,
	(void *) M_java_math_BigDecimal_subtract_java_math_BigDecimal_R_java_math_BigDecimal,
	(void *) M_java_math_BigDecimal_subtract_java_math_BigDecimal_java_math_MathContext_R_java_math_BigDecimal,
	(void *) M_java_math_BigDecimal_multiply_java_math_BigDecimal_R_java_math_BigDecimal,
	(void *) M_java_math_BigDecimal_multiply_java_math_BigDecimal_java_math_MathContext_R_java_math_BigDecimal,
	(void *) M_java_math_BigDecimal_divide_java_math_BigDecimal_int_int_R_java_math_BigDecimal,
	(void *) M_java_math_BigDecimal_divide_java_math_BigDecimal_int_java_math_RoundingMode_R_java_math_BigDecimal,
	(void *) M_java_math_BigDecimal_divide_java_math_BigDecimal_int_R_java_math_BigDecimal,
	(void *) M_java_math_BigDecimal_divide_java_math_BigDecimal_java_math_RoundingMode_R_java_math_BigDecimal,
	(void *) M_java_math_BigDecimal_divide_java_math_BigDecimal_R_java_math_BigDecimal,
	(void *) M_java_math_BigDecimal_divide_java_math_BigDecimal_java_math_MathContext_R_java_math_BigDecimal,
	(void *) M_java_math_BigDecimal_divideToIntegralValue_java_math_BigDecimal_R_java_math_BigDecimal,
	(void *) M_java_math_BigDecimal_divideToIntegralValue_java_math_BigDecimal_java_math_MathContext_R_java_math_BigDecimal,
	(void *) M_java_math_BigDecimal_remainder_java_math_BigDecimal_R_java_math_BigDecimal,
	(void *) M_java_math_BigDecimal_remainder_java_math_BigDecimal_java_math_MathContext_R_java_math_BigDecimal,
	(void *) M_java_math_BigDecimal_divideAndRemainder_java_math_BigDecimal_R_Array1_java_math_BigDecimal,
	(void *) M_java_math_BigDecimal_divideAndRemainder_java_math_BigDecimal_java_math_MathContext_R_Array1_java_math_BigDecimal,
	(void *) M_java_math_BigDecimal_pow_int_R_java_math_BigDecimal,
	(void *) M_java_math_BigDecimal_pow_int_java_math_MathContext_R_java_math_BigDecimal,
	(void *) M_java_math_BigDecimal_abs_R_java_math_BigDecimal,
	(void *) M_java_math_BigDecimal_abs_java_math_MathContext_R_java_math_BigDecimal,
	(void *) M_java_math_BigDecimal_negate_R_java_math_BigDecimal,
	(void *) M_java_math_BigDecimal_negate_java_math_MathContext_R_java_math_BigDecimal,
	(void *) M_java_math_BigDecimal_plus_R_java_math_BigDecimal,
	(void *) M_java_math_BigDecimal_plus_java_math_MathContext_R_java_math_BigDecimal,
	(void *) M_java_math_BigDecimal_signum_R_int,
	(void *) M_java_math_BigDecimal_scale_R_int,
	(void *) M_java_math_BigDecimal_precision_R_int,
	(void *) M_java_math_BigDecimal_unscaledValue_R_java_math_BigInteger,
	(void *) M_java_math_BigDecimal_round_java_math_MathContext_R_java_math_BigDecimal,
	(void *) M_java_math_BigDecimal_setScale_int_java_math_RoundingMode_R_java_math_BigDecimal,
	(void *) M_java_math_BigDecimal_setScale_int_int_R_java_math_BigDecimal,
	(void *) M_java_math_BigDecimal_setScale_int_R_java_math_BigDecimal,
	(void *) M_java_math_BigDecimal_movePointLeft_int_R_java_math_BigDecimal,
	(void *) M_java_math_BigDecimal_movePointRight_int_R_java_math_BigDecimal,
	(void *) M_java_math_BigDecimal_scaleByPowerOfTen_int_R_java_math_BigDecimal,
	(void *) M_java_math_BigDecimal_stripTrailingZeros_R_java_math_BigDecimal,
	(void *) M_java_math_BigDecimal_compareTo_java_math_BigDecimal_R_int,
	(void *) M_java_math_BigDecimal_compareMagnitude_java_math_BigDecimal_R_int,
	(void *) M_java_math_BigDecimal_min_java_math_BigDecimal_R_java_math_BigDecimal,
	(void *) M_java_math_BigDecimal_max_java_math_BigDecimal_R_java_math_BigDecimal,
	(void *) M_java_math_BigDecimal_toEngineeringString_R_java_lang_String,
	(void *) M_java_math_BigDecimal_toPlainString_R_java_lang_String,
	(void *) M_java_math_BigDecimal_getValueString_int_java_lang_String_int_R_java_lang_String,
	(void *) M_java_math_BigDecimal_toBigInteger_R_java_math_BigInteger,
	(void *) M_java_math_BigDecimal_toBigIntegerExact_R_java_math_BigInteger,
	(void *) M_java_math_BigDecimal_fractionOnly_R_boolean,
	(void *) M_java_math_BigDecimal_longValueExact_R_long,
	(void *) M_java_math_BigDecimal_intValueExact_R_int,
	(void *) M_java_math_BigDecimal_shortValueExact_R_short,
	(void *) M_java_math_BigDecimal_byteValueExact_R_byte,
	(void *) M_java_math_BigDecimal_ulp_R_java_math_BigDecimal,
	(void *) M_java_math_BigDecimal_layoutChars_boolean_R_java_lang_String,
	(void *) M_java_math_BigDecimal_bigMultiplyPowerTen_int_R_java_math_BigInteger,
	(void *) M_java_math_BigDecimal_inflated_R_java_math_BigInteger,
	(void *) M_java_math_BigDecimal_checkScale_long_R_int,
	(void *) M_java_math_BigDecimal_audit_R_java_math_BigDecimal,
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
	{ "adjustScale", "(IJ)I" },
	{ "add", "(Ljava/math/BigDecimal;)Ljava/math/BigDecimal;" },
	{ "add", "(Ljava/math/BigDecimal;Ljava/math/MathContext;)Ljava/math/BigDecimal;" },
	{ "preAlign", "(Ljava/math/BigDecimal;Ljava/math/BigDecimal;JLjava/math/MathContext;)[Ljava/math/BigDecimal;" },
	{ "subtract", "(Ljava/math/BigDecimal;)Ljava/math/BigDecimal;" },
	{ "subtract", "(Ljava/math/BigDecimal;Ljava/math/MathContext;)Ljava/math/BigDecimal;" },
	{ "multiply", "(Ljava/math/BigDecimal;)Ljava/math/BigDecimal;" },
	{ "multiply", "(Ljava/math/BigDecimal;Ljava/math/MathContext;)Ljava/math/BigDecimal;" },
	{ "divide", "(Ljava/math/BigDecimal;II)Ljava/math/BigDecimal;" },
	{ "divide", "(Ljava/math/BigDecimal;ILjava/math/RoundingMode;)Ljava/math/BigDecimal;" },
	{ "divide", "(Ljava/math/BigDecimal;I)Ljava/math/BigDecimal;" },
	{ "divide", "(Ljava/math/BigDecimal;Ljava/math/RoundingMode;)Ljava/math/BigDecimal;" },
	{ "divide", "(Ljava/math/BigDecimal;)Ljava/math/BigDecimal;" },
	{ "divide", "(Ljava/math/BigDecimal;Ljava/math/MathContext;)Ljava/math/BigDecimal;" },
	{ "divideToIntegralValue", "(Ljava/math/BigDecimal;)Ljava/math/BigDecimal;" },
	{ "divideToIntegralValue", "(Ljava/math/BigDecimal;Ljava/math/MathContext;)Ljava/math/BigDecimal;" },
	{ "remainder", "(Ljava/math/BigDecimal;)Ljava/math/BigDecimal;" },
	{ "remainder", "(Ljava/math/BigDecimal;Ljava/math/MathContext;)Ljava/math/BigDecimal;" },
	{ "divideAndRemainder", "(Ljava/math/BigDecimal;)[Ljava/math/BigDecimal;" },
	{ "divideAndRemainder", "(Ljava/math/BigDecimal;Ljava/math/MathContext;)[Ljava/math/BigDecimal;" },
	{ "pow", "(I)Ljava/math/BigDecimal;" },
	{ "pow", "(ILjava/math/MathContext;)Ljava/math/BigDecimal;" },
	{ "abs", "()Ljava/math/BigDecimal;" },
	{ "abs", "(Ljava/math/MathContext;)Ljava/math/BigDecimal;" },
	{ "negate", "()Ljava/math/BigDecimal;" },
	{ "negate", "(Ljava/math/MathContext;)Ljava/math/BigDecimal;" },
	{ "plus", "()Ljava/math/BigDecimal;" },
	{ "plus", "(Ljava/math/MathContext;)Ljava/math/BigDecimal;" },
	{ "signum", "()I" },
	{ "scale", "()I" },
	{ "precision", "()I" },
	{ "unscaledValue", "()Ljava/math/BigInteger;" },
	{ "round", "(Ljava/math/MathContext;)Ljava/math/BigDecimal;" },
	{ "setScale", "(ILjava/math/RoundingMode;)Ljava/math/BigDecimal;" },
	{ "setScale", "(II)Ljava/math/BigDecimal;" },
	{ "setScale", "(I)Ljava/math/BigDecimal;" },
	{ "movePointLeft", "(I)Ljava/math/BigDecimal;" },
	{ "movePointRight", "(I)Ljava/math/BigDecimal;" },
	{ "scaleByPowerOfTen", "(I)Ljava/math/BigDecimal;" },
	{ "stripTrailingZeros", "()Ljava/math/BigDecimal;" },
	{ "compareTo", "(Ljava/math/BigDecimal;)I" },
	{ "compareMagnitude", "(Ljava/math/BigDecimal;)I" },
	{ "min", "(Ljava/math/BigDecimal;)Ljava/math/BigDecimal;" },
	{ "max", "(Ljava/math/BigDecimal;)Ljava/math/BigDecimal;" },
	{ "toEngineeringString", "()Ljava/lang/String;" },
	{ "toPlainString", "()Ljava/lang/String;" },
	{ "getValueString", "(ILjava/lang/String;I)Ljava/lang/String;" },
	{ "toBigInteger", "()Ljava/math/BigInteger;" },
	{ "toBigIntegerExact", "()Ljava/math/BigInteger;" },
	{ "fractionOnly", "()Z" },
	{ "longValueExact", "()J" },
	{ "intValueExact", "()I" },
	{ "shortValueExact", "()S" },
	{ "byteValueExact", "()B" },
	{ "ulp", "()Ljava/math/BigDecimal;" },
	{ "layoutChars", "(Z)Ljava/lang/String;" },
	{ "bigMultiplyPowerTen", "(I)Ljava/math/BigInteger;" },
	{ "inflated", "()Ljava/math/BigInteger;" },
	{ "checkScale", "(J)I" },
	{ "audit", "()Ljava/math/BigDecimal;" },
};

static jclass interfaces[] { &class_java_lang_Comparable, };

static jclass innerClasses[] {
	&class_java_math_BigDecimal$LongOverflow,
	&class_java_math_BigDecimal$StringBuilderHelper,
};

static FieldMetadata fields[] {
	{ "intVal", &class_java_math_BigInteger, offsetof(java_math_BigDecimal, F_intVal), "Ljava/math/BigInteger;", 2 },
	{ "scale", &class_int, offsetof(java_math_BigDecimal, F_scale), "I", 18 },
	{ "precision", &class_int, offsetof(java_math_BigDecimal, F_precision), "I", 130 },
	{ "stringCache", &class_java_lang_String, offsetof(java_math_BigDecimal, F_stringCache), "Ljava/lang/String;", 130 },
	{ "INFLATED", &class_long, (intptr_t) &SF_java_math_BigDecimal_INFLATED, "J", 24 },
	{ "INFLATED_BIGINT", &class_java_math_BigInteger, (intptr_t) &SF_java_math_BigDecimal_INFLATED_BIGINT, "Ljava/math/BigInteger;", 26 },
	{ "intCompact", &class_long, offsetof(java_math_BigDecimal, F_intCompact), "J", 130 },
	{ "MAX_COMPACT_DIGITS", &class_int, (intptr_t) &SF_java_math_BigDecimal_MAX_COMPACT_DIGITS, "I", 26 },
	{ "serialVersionUID", &class_long, (intptr_t) &SF_java_math_BigDecimal_serialVersionUID, "J", 26 },
	{ "threadLocalStringBuilderHelper", &class_java_lang_ThreadLocal, (intptr_t) &SF_java_math_BigDecimal_threadLocalStringBuilderHelper, "Ljava/lang/ThreadLocal;", 26 },
	{ "zeroThroughTen", getArrayClass(&class_java_math_BigDecimal, 1), (intptr_t) &SF_java_math_BigDecimal_zeroThroughTen, "[Ljava/math/BigDecimal;", 26 },
	{ "ZERO_SCALED_BY", getArrayClass(&class_java_math_BigDecimal, 1), (intptr_t) &SF_java_math_BigDecimal_ZERO_SCALED_BY, "[Ljava/math/BigDecimal;", 26 },
	{ "HALF_LONG_MAX_VALUE", &class_long, (intptr_t) &SF_java_math_BigDecimal_HALF_LONG_MAX_VALUE, "J", 26 },
	{ "HALF_LONG_MIN_VALUE", &class_long, (intptr_t) &SF_java_math_BigDecimal_HALF_LONG_MIN_VALUE, "J", 26 },
	{ "ZERO", &class_java_math_BigDecimal, (intptr_t) &SF_java_math_BigDecimal_ZERO, "Ljava/math/BigDecimal;", 25 },
	{ "ONE", &class_java_math_BigDecimal, (intptr_t) &SF_java_math_BigDecimal_ONE, "Ljava/math/BigDecimal;", 25 },
	{ "TEN", &class_java_math_BigDecimal, (intptr_t) &SF_java_math_BigDecimal_TEN, "Ljava/math/BigDecimal;", 25 },
	{ "ROUND_UP", &class_int, (intptr_t) &SF_java_math_BigDecimal_ROUND_UP, "I", 25 },
	{ "ROUND_DOWN", &class_int, (intptr_t) &SF_java_math_BigDecimal_ROUND_DOWN, "I", 25 },
	{ "ROUND_CEILING", &class_int, (intptr_t) &SF_java_math_BigDecimal_ROUND_CEILING, "I", 25 },
	{ "ROUND_FLOOR", &class_int, (intptr_t) &SF_java_math_BigDecimal_ROUND_FLOOR, "I", 25 },
	{ "ROUND_HALF_UP", &class_int, (intptr_t) &SF_java_math_BigDecimal_ROUND_HALF_UP, "I", 25 },
	{ "ROUND_HALF_DOWN", &class_int, (intptr_t) &SF_java_math_BigDecimal_ROUND_HALF_DOWN, "I", 25 },
	{ "ROUND_HALF_EVEN", &class_int, (intptr_t) &SF_java_math_BigDecimal_ROUND_HALF_EVEN, "I", 25 },
	{ "ROUND_UNNECESSARY", &class_int, (intptr_t) &SF_java_math_BigDecimal_ROUND_UNNECESSARY, "I", 25 },
	{ "double10pow", getArrayClass(&class_double, 1), (intptr_t) &SF_java_math_BigDecimal_double10pow, "[D", 26 },
	{ "float10pow", getArrayClass(&class_float, 1), (intptr_t) &SF_java_math_BigDecimal_float10pow, "[F", 26 },
	{ "LONG_TEN_POWERS_TABLE", getArrayClass(&class_long, 1), (intptr_t) &SF_java_math_BigDecimal_LONG_TEN_POWERS_TABLE, "[J", 26 },
	{ "BIG_TEN_POWERS_TABLE", getArrayClass(&class_java_math_BigInteger, 1), (intptr_t) &SF_java_math_BigDecimal_BIG_TEN_POWERS_TABLE, "[Ljava/math/BigInteger;", 74 },
	{ "BIG_TEN_POWERS_TABLE_INITLEN", &class_int, (intptr_t) &SF_java_math_BigDecimal_BIG_TEN_POWERS_TABLE_INITLEN, "I", 26 },
	{ "BIG_TEN_POWERS_TABLE_MAX", &class_int, (intptr_t) &SF_java_math_BigDecimal_BIG_TEN_POWERS_TABLE_MAX, "I", 26 },
	{ "THRESHOLDS_TABLE", getArrayClass(&class_long, 1), (intptr_t) &SF_java_math_BigDecimal_THRESHOLDS_TABLE, "[J", 26 },
	{ "DIV_NUM_BASE", &class_long, (intptr_t) &SF_java_math_BigDecimal_DIV_NUM_BASE, "J", 26 },
	{ "LONGLONG_TEN_POWERS_TABLE", getArrayClass(&class_long, 2), (intptr_t) &SF_java_math_BigDecimal_LONGLONG_TEN_POWERS_TABLE, "[[J", 26 },
	{ "$assertionsDisabled", &class_boolean, (intptr_t) &SF_java_math_BigDecimal_$assertionsDisabled, "Z", 4120 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_java_math_BigDecimal_java_math_BigInteger_long_int_int, 0, "(Ljava/math/BigInteger;JII)V", 0 },
	{ "<init>", (intptr_t) init_java_math_BigDecimal_Array1_char_int_int, 0, "([CII)V", 1 },
	{ "<init>", (intptr_t) init_java_math_BigDecimal_Array1_char_int_int_java_math_MathContext, 0, "([CIILjava/math/MathContext;)V", 1 },
	{ "adjustScale", (intptr_t) M_java_math_BigDecimal_adjustScale_int_long_R_int, VTABLE_java_math_BigDecimal_adjustScale_int_long_R_int, "(IJ)I", 2 },
	{ "parseExp", (intptr_t) SM_java_math_BigDecimal_parseExp_Array1_char_int_int_R_long, 0, "([CII)J", 10 },
	{ "<init>", (intptr_t) init_java_math_BigDecimal_Array1_char, 0, "([C)V", 1 },
	{ "<init>", (intptr_t) init_java_math_BigDecimal_Array1_char_java_math_MathContext, 0, "([CLjava/math/MathContext;)V", 1 },
	{ "<init>", (intptr_t) init_java_math_BigDecimal_java_lang_String, 0, "(Ljava/lang/String;)V", 1 },
	{ "<init>", (intptr_t) init_java_math_BigDecimal_java_lang_String_java_math_MathContext, 0, "(Ljava/lang/String;Ljava/math/MathContext;)V", 1 },
	{ "<init>", (intptr_t) init_java_math_BigDecimal_double, 0, "(D)V", 1 },
	{ "<init>", (intptr_t) init_java_math_BigDecimal_double_java_math_MathContext, 0, "(DLjava/math/MathContext;)V", 1 },
	{ "<init>", (intptr_t) init_java_math_BigDecimal_java_math_BigInteger, 0, "(Ljava/math/BigInteger;)V", 1 },
	{ "<init>", (intptr_t) init_java_math_BigDecimal_java_math_BigInteger_java_math_MathContext, 0, "(Ljava/math/BigInteger;Ljava/math/MathContext;)V", 1 },
	{ "<init>", (intptr_t) init_java_math_BigDecimal_java_math_BigInteger_int, 0, "(Ljava/math/BigInteger;I)V", 1 },
	{ "<init>", (intptr_t) init_java_math_BigDecimal_java_math_BigInteger_int_java_math_MathContext, 0, "(Ljava/math/BigInteger;ILjava/math/MathContext;)V", 1 },
	{ "<init>", (intptr_t) init_java_math_BigDecimal_int, 0, "(I)V", 1 },
	{ "<init>", (intptr_t) init_java_math_BigDecimal_int_java_math_MathContext, 0, "(ILjava/math/MathContext;)V", 1 },
	{ "<init>", (intptr_t) init_java_math_BigDecimal_long, 0, "(J)V", 1 },
	{ "<init>", (intptr_t) init_java_math_BigDecimal_long_java_math_MathContext, 0, "(JLjava/math/MathContext;)V", 1 },
	{ "valueOf", (intptr_t) SM_java_math_BigDecimal_valueOf_long_int_R_java_math_BigDecimal, 0, "(JI)Ljava/math/BigDecimal;", 9 },
	{ "valueOf", (intptr_t) SM_java_math_BigDecimal_valueOf_long_R_java_math_BigDecimal, 0, "(J)Ljava/math/BigDecimal;", 9 },
	{ "valueOf", (intptr_t) SM_java_math_BigDecimal_valueOf_long_int_int_R_java_math_BigDecimal, 0, "(JII)Ljava/math/BigDecimal;", 8 },
	{ "valueOf", (intptr_t) SM_java_math_BigDecimal_valueOf_java_math_BigInteger_int_int_R_java_math_BigDecimal, 0, "(Ljava/math/BigInteger;II)Ljava/math/BigDecimal;", 8 },
	{ "zeroValueOf", (intptr_t) SM_java_math_BigDecimal_zeroValueOf_int_R_java_math_BigDecimal, 0, "(I)Ljava/math/BigDecimal;", 8 },
	{ "valueOf", (intptr_t) SM_java_math_BigDecimal_valueOf_double_R_java_math_BigDecimal, 0, "(D)Ljava/math/BigDecimal;", 9 },
	{ "add", (intptr_t) M_java_math_BigDecimal_add_java_math_BigDecimal_R_java_math_BigDecimal, VTABLE_java_math_BigDecimal_add_java_math_BigDecimal_R_java_math_BigDecimal, "(Ljava/math/BigDecimal;)Ljava/math/BigDecimal;", 1 },
	{ "add", (intptr_t) M_java_math_BigDecimal_add_java_math_BigDecimal_java_math_MathContext_R_java_math_BigDecimal, VTABLE_java_math_BigDecimal_add_java_math_BigDecimal_java_math_MathContext_R_java_math_BigDecimal, "(Ljava/math/BigDecimal;Ljava/math/MathContext;)Ljava/math/BigDecimal;", 1 },
	{ "preAlign", (intptr_t) M_java_math_BigDecimal_preAlign_java_math_BigDecimal_java_math_BigDecimal_long_java_math_MathContext_R_Array1_java_math_BigDecimal, VTABLE_java_math_BigDecimal_preAlign_java_math_BigDecimal_java_math_BigDecimal_long_java_math_MathContext_R_Array1_java_math_BigDecimal, "(Ljava/math/BigDecimal;Ljava/math/BigDecimal;JLjava/math/MathContext;)[Ljava/math/BigDecimal;", 2 },
	{ "subtract", (intptr_t) M_java_math_BigDecimal_subtract_java_math_BigDecimal_R_java_math_BigDecimal, VTABLE_java_math_BigDecimal_subtract_java_math_BigDecimal_R_java_math_BigDecimal, "(Ljava/math/BigDecimal;)Ljava/math/BigDecimal;", 1 },
	{ "subtract", (intptr_t) M_java_math_BigDecimal_subtract_java_math_BigDecimal_java_math_MathContext_R_java_math_BigDecimal, VTABLE_java_math_BigDecimal_subtract_java_math_BigDecimal_java_math_MathContext_R_java_math_BigDecimal, "(Ljava/math/BigDecimal;Ljava/math/MathContext;)Ljava/math/BigDecimal;", 1 },
	{ "multiply", (intptr_t) M_java_math_BigDecimal_multiply_java_math_BigDecimal_R_java_math_BigDecimal, VTABLE_java_math_BigDecimal_multiply_java_math_BigDecimal_R_java_math_BigDecimal, "(Ljava/math/BigDecimal;)Ljava/math/BigDecimal;", 1 },
	{ "multiply", (intptr_t) M_java_math_BigDecimal_multiply_java_math_BigDecimal_java_math_MathContext_R_java_math_BigDecimal, VTABLE_java_math_BigDecimal_multiply_java_math_BigDecimal_java_math_MathContext_R_java_math_BigDecimal, "(Ljava/math/BigDecimal;Ljava/math/MathContext;)Ljava/math/BigDecimal;", 1 },
	{ "divide", (intptr_t) M_java_math_BigDecimal_divide_java_math_BigDecimal_int_int_R_java_math_BigDecimal, VTABLE_java_math_BigDecimal_divide_java_math_BigDecimal_int_int_R_java_math_BigDecimal, "(Ljava/math/BigDecimal;II)Ljava/math/BigDecimal;", 1 },
	{ "divide", (intptr_t) M_java_math_BigDecimal_divide_java_math_BigDecimal_int_java_math_RoundingMode_R_java_math_BigDecimal, VTABLE_java_math_BigDecimal_divide_java_math_BigDecimal_int_java_math_RoundingMode_R_java_math_BigDecimal, "(Ljava/math/BigDecimal;ILjava/math/RoundingMode;)Ljava/math/BigDecimal;", 1 },
	{ "divide", (intptr_t) M_java_math_BigDecimal_divide_java_math_BigDecimal_int_R_java_math_BigDecimal, VTABLE_java_math_BigDecimal_divide_java_math_BigDecimal_int_R_java_math_BigDecimal, "(Ljava/math/BigDecimal;I)Ljava/math/BigDecimal;", 1 },
	{ "divide", (intptr_t) M_java_math_BigDecimal_divide_java_math_BigDecimal_java_math_RoundingMode_R_java_math_BigDecimal, VTABLE_java_math_BigDecimal_divide_java_math_BigDecimal_java_math_RoundingMode_R_java_math_BigDecimal, "(Ljava/math/BigDecimal;Ljava/math/RoundingMode;)Ljava/math/BigDecimal;", 1 },
	{ "divide", (intptr_t) M_java_math_BigDecimal_divide_java_math_BigDecimal_R_java_math_BigDecimal, VTABLE_java_math_BigDecimal_divide_java_math_BigDecimal_R_java_math_BigDecimal, "(Ljava/math/BigDecimal;)Ljava/math/BigDecimal;", 1 },
	{ "divide", (intptr_t) M_java_math_BigDecimal_divide_java_math_BigDecimal_java_math_MathContext_R_java_math_BigDecimal, VTABLE_java_math_BigDecimal_divide_java_math_BigDecimal_java_math_MathContext_R_java_math_BigDecimal, "(Ljava/math/BigDecimal;Ljava/math/MathContext;)Ljava/math/BigDecimal;", 1 },
	{ "divideToIntegralValue", (intptr_t) M_java_math_BigDecimal_divideToIntegralValue_java_math_BigDecimal_R_java_math_BigDecimal, VTABLE_java_math_BigDecimal_divideToIntegralValue_java_math_BigDecimal_R_java_math_BigDecimal, "(Ljava/math/BigDecimal;)Ljava/math/BigDecimal;", 1 },
	{ "divideToIntegralValue", (intptr_t) M_java_math_BigDecimal_divideToIntegralValue_java_math_BigDecimal_java_math_MathContext_R_java_math_BigDecimal, VTABLE_java_math_BigDecimal_divideToIntegralValue_java_math_BigDecimal_java_math_MathContext_R_java_math_BigDecimal, "(Ljava/math/BigDecimal;Ljava/math/MathContext;)Ljava/math/BigDecimal;", 1 },
	{ "remainder", (intptr_t) M_java_math_BigDecimal_remainder_java_math_BigDecimal_R_java_math_BigDecimal, VTABLE_java_math_BigDecimal_remainder_java_math_BigDecimal_R_java_math_BigDecimal, "(Ljava/math/BigDecimal;)Ljava/math/BigDecimal;", 1 },
	{ "remainder", (intptr_t) M_java_math_BigDecimal_remainder_java_math_BigDecimal_java_math_MathContext_R_java_math_BigDecimal, VTABLE_java_math_BigDecimal_remainder_java_math_BigDecimal_java_math_MathContext_R_java_math_BigDecimal, "(Ljava/math/BigDecimal;Ljava/math/MathContext;)Ljava/math/BigDecimal;", 1 },
	{ "divideAndRemainder", (intptr_t) M_java_math_BigDecimal_divideAndRemainder_java_math_BigDecimal_R_Array1_java_math_BigDecimal, VTABLE_java_math_BigDecimal_divideAndRemainder_java_math_BigDecimal_R_Array1_java_math_BigDecimal, "(Ljava/math/BigDecimal;)[Ljava/math/BigDecimal;", 1 },
	{ "divideAndRemainder", (intptr_t) M_java_math_BigDecimal_divideAndRemainder_java_math_BigDecimal_java_math_MathContext_R_Array1_java_math_BigDecimal, VTABLE_java_math_BigDecimal_divideAndRemainder_java_math_BigDecimal_java_math_MathContext_R_Array1_java_math_BigDecimal, "(Ljava/math/BigDecimal;Ljava/math/MathContext;)[Ljava/math/BigDecimal;", 1 },
	{ "pow", (intptr_t) M_java_math_BigDecimal_pow_int_R_java_math_BigDecimal, VTABLE_java_math_BigDecimal_pow_int_R_java_math_BigDecimal, "(I)Ljava/math/BigDecimal;", 1 },
	{ "pow", (intptr_t) M_java_math_BigDecimal_pow_int_java_math_MathContext_R_java_math_BigDecimal, VTABLE_java_math_BigDecimal_pow_int_java_math_MathContext_R_java_math_BigDecimal, "(ILjava/math/MathContext;)Ljava/math/BigDecimal;", 1 },
	{ "abs", (intptr_t) M_java_math_BigDecimal_abs_R_java_math_BigDecimal, VTABLE_java_math_BigDecimal_abs_R_java_math_BigDecimal, "()Ljava/math/BigDecimal;", 1 },
	{ "abs", (intptr_t) M_java_math_BigDecimal_abs_java_math_MathContext_R_java_math_BigDecimal, VTABLE_java_math_BigDecimal_abs_java_math_MathContext_R_java_math_BigDecimal, "(Ljava/math/MathContext;)Ljava/math/BigDecimal;", 1 },
	{ "negate", (intptr_t) M_java_math_BigDecimal_negate_R_java_math_BigDecimal, VTABLE_java_math_BigDecimal_negate_R_java_math_BigDecimal, "()Ljava/math/BigDecimal;", 1 },
	{ "negate", (intptr_t) M_java_math_BigDecimal_negate_java_math_MathContext_R_java_math_BigDecimal, VTABLE_java_math_BigDecimal_negate_java_math_MathContext_R_java_math_BigDecimal, "(Ljava/math/MathContext;)Ljava/math/BigDecimal;", 1 },
	{ "plus", (intptr_t) M_java_math_BigDecimal_plus_R_java_math_BigDecimal, VTABLE_java_math_BigDecimal_plus_R_java_math_BigDecimal, "()Ljava/math/BigDecimal;", 1 },
	{ "plus", (intptr_t) M_java_math_BigDecimal_plus_java_math_MathContext_R_java_math_BigDecimal, VTABLE_java_math_BigDecimal_plus_java_math_MathContext_R_java_math_BigDecimal, "(Ljava/math/MathContext;)Ljava/math/BigDecimal;", 1 },
	{ "signum", (intptr_t) M_java_math_BigDecimal_signum_R_int, VTABLE_java_math_BigDecimal_signum_R_int, "()I", 1 },
	{ "scale", (intptr_t) M_java_math_BigDecimal_scale_R_int, VTABLE_java_math_BigDecimal_scale_R_int, "()I", 1 },
	{ "precision", (intptr_t) M_java_math_BigDecimal_precision_R_int, VTABLE_java_math_BigDecimal_precision_R_int, "()I", 1 },
	{ "unscaledValue", (intptr_t) M_java_math_BigDecimal_unscaledValue_R_java_math_BigInteger, VTABLE_java_math_BigDecimal_unscaledValue_R_java_math_BigInteger, "()Ljava/math/BigInteger;", 1 },
	{ "round", (intptr_t) M_java_math_BigDecimal_round_java_math_MathContext_R_java_math_BigDecimal, VTABLE_java_math_BigDecimal_round_java_math_MathContext_R_java_math_BigDecimal, "(Ljava/math/MathContext;)Ljava/math/BigDecimal;", 1 },
	{ "setScale", (intptr_t) M_java_math_BigDecimal_setScale_int_java_math_RoundingMode_R_java_math_BigDecimal, VTABLE_java_math_BigDecimal_setScale_int_java_math_RoundingMode_R_java_math_BigDecimal, "(ILjava/math/RoundingMode;)Ljava/math/BigDecimal;", 1 },
	{ "setScale", (intptr_t) M_java_math_BigDecimal_setScale_int_int_R_java_math_BigDecimal, VTABLE_java_math_BigDecimal_setScale_int_int_R_java_math_BigDecimal, "(II)Ljava/math/BigDecimal;", 1 },
	{ "setScale", (intptr_t) M_java_math_BigDecimal_setScale_int_R_java_math_BigDecimal, VTABLE_java_math_BigDecimal_setScale_int_R_java_math_BigDecimal, "(I)Ljava/math/BigDecimal;", 1 },
	{ "movePointLeft", (intptr_t) M_java_math_BigDecimal_movePointLeft_int_R_java_math_BigDecimal, VTABLE_java_math_BigDecimal_movePointLeft_int_R_java_math_BigDecimal, "(I)Ljava/math/BigDecimal;", 1 },
	{ "movePointRight", (intptr_t) M_java_math_BigDecimal_movePointRight_int_R_java_math_BigDecimal, VTABLE_java_math_BigDecimal_movePointRight_int_R_java_math_BigDecimal, "(I)Ljava/math/BigDecimal;", 1 },
	{ "scaleByPowerOfTen", (intptr_t) M_java_math_BigDecimal_scaleByPowerOfTen_int_R_java_math_BigDecimal, VTABLE_java_math_BigDecimal_scaleByPowerOfTen_int_R_java_math_BigDecimal, "(I)Ljava/math/BigDecimal;", 1 },
	{ "stripTrailingZeros", (intptr_t) M_java_math_BigDecimal_stripTrailingZeros_R_java_math_BigDecimal, VTABLE_java_math_BigDecimal_stripTrailingZeros_R_java_math_BigDecimal, "()Ljava/math/BigDecimal;", 1 },
	{ "compareTo", (intptr_t) M_java_math_BigDecimal_compareTo_java_math_BigDecimal_R_int, VTABLE_java_math_BigDecimal_compareTo_java_math_BigDecimal_R_int, "(Ljava/math/BigDecimal;)I", 1 },
	{ "compareMagnitude", (intptr_t) M_java_math_BigDecimal_compareMagnitude_java_math_BigDecimal_R_int, VTABLE_java_math_BigDecimal_compareMagnitude_java_math_BigDecimal_R_int, "(Ljava/math/BigDecimal;)I", 2 },
	{ "equals", (intptr_t) M_java_math_BigDecimal_equals_java_lang_Object_R_boolean, VTABLE_java_math_BigDecimal_equals_java_lang_Object_R_boolean, "(Ljava/lang/Object;)Z", 1 },
	{ "min", (intptr_t) M_java_math_BigDecimal_min_java_math_BigDecimal_R_java_math_BigDecimal, VTABLE_java_math_BigDecimal_min_java_math_BigDecimal_R_java_math_BigDecimal, "(Ljava/math/BigDecimal;)Ljava/math/BigDecimal;", 1 },
	{ "max", (intptr_t) M_java_math_BigDecimal_max_java_math_BigDecimal_R_java_math_BigDecimal, VTABLE_java_math_BigDecimal_max_java_math_BigDecimal_R_java_math_BigDecimal, "(Ljava/math/BigDecimal;)Ljava/math/BigDecimal;", 1 },
	{ "hashCode", (intptr_t) M_java_math_BigDecimal_hashCode_R_int, VTABLE_java_math_BigDecimal_hashCode_R_int, "()I", 1 },
	{ "toString", (intptr_t) M_java_math_BigDecimal_toString_R_java_lang_String, VTABLE_java_math_BigDecimal_toString_R_java_lang_String, "()Ljava/lang/String;", 1 },
	{ "toEngineeringString", (intptr_t) M_java_math_BigDecimal_toEngineeringString_R_java_lang_String, VTABLE_java_math_BigDecimal_toEngineeringString_R_java_lang_String, "()Ljava/lang/String;", 1 },
	{ "toPlainString", (intptr_t) M_java_math_BigDecimal_toPlainString_R_java_lang_String, VTABLE_java_math_BigDecimal_toPlainString_R_java_lang_String, "()Ljava/lang/String;", 1 },
	{ "getValueString", (intptr_t) M_java_math_BigDecimal_getValueString_int_java_lang_String_int_R_java_lang_String, VTABLE_java_math_BigDecimal_getValueString_int_java_lang_String_int_R_java_lang_String, "(ILjava/lang/String;I)Ljava/lang/String;", 2 },
	{ "toBigInteger", (intptr_t) M_java_math_BigDecimal_toBigInteger_R_java_math_BigInteger, VTABLE_java_math_BigDecimal_toBigInteger_R_java_math_BigInteger, "()Ljava/math/BigInteger;", 1 },
	{ "toBigIntegerExact", (intptr_t) M_java_math_BigDecimal_toBigIntegerExact_R_java_math_BigInteger, VTABLE_java_math_BigDecimal_toBigIntegerExact_R_java_math_BigInteger, "()Ljava/math/BigInteger;", 1 },
	{ "longValue", (intptr_t) M_java_math_BigDecimal_longValue_R_long, VTABLE_java_math_BigDecimal_longValue_R_long, "()J", 1 },
	{ "fractionOnly", (intptr_t) M_java_math_BigDecimal_fractionOnly_R_boolean, VTABLE_java_math_BigDecimal_fractionOnly_R_boolean, "()Z", 2 },
	{ "longValueExact", (intptr_t) M_java_math_BigDecimal_longValueExact_R_long, VTABLE_java_math_BigDecimal_longValueExact_R_long, "()J", 1 },
	{ "intValue", (intptr_t) M_java_math_BigDecimal_intValue_R_int, VTABLE_java_math_BigDecimal_intValue_R_int, "()I", 1 },
	{ "intValueExact", (intptr_t) M_java_math_BigDecimal_intValueExact_R_int, VTABLE_java_math_BigDecimal_intValueExact_R_int, "()I", 1 },
	{ "shortValueExact", (intptr_t) M_java_math_BigDecimal_shortValueExact_R_short, VTABLE_java_math_BigDecimal_shortValueExact_R_short, "()S", 1 },
	{ "byteValueExact", (intptr_t) M_java_math_BigDecimal_byteValueExact_R_byte, VTABLE_java_math_BigDecimal_byteValueExact_R_byte, "()B", 1 },
	{ "floatValue", (intptr_t) M_java_math_BigDecimal_floatValue_R_float, VTABLE_java_math_BigDecimal_floatValue_R_float, "()F", 1 },
	{ "doubleValue", (intptr_t) M_java_math_BigDecimal_doubleValue_R_double, VTABLE_java_math_BigDecimal_doubleValue_R_double, "()D", 1 },
	{ "ulp", (intptr_t) M_java_math_BigDecimal_ulp_R_java_math_BigDecimal, VTABLE_java_math_BigDecimal_ulp_R_java_math_BigDecimal, "()Ljava/math/BigDecimal;", 1 },
	{ "layoutChars", (intptr_t) M_java_math_BigDecimal_layoutChars_boolean_R_java_lang_String, VTABLE_java_math_BigDecimal_layoutChars_boolean_R_java_lang_String, "(Z)Ljava/lang/String;", 2 },
	{ "bigTenToThe", (intptr_t) SM_java_math_BigDecimal_bigTenToThe_int_R_java_math_BigInteger, 0, "(I)Ljava/math/BigInteger;", 10 },
	{ "expandBigIntegerTenPowers", (intptr_t) SM_java_math_BigDecimal_expandBigIntegerTenPowers_int_R_java_math_BigInteger, 0, "(I)Ljava/math/BigInteger;", 10 },
	{ "longMultiplyPowerTen", (intptr_t) SM_java_math_BigDecimal_longMultiplyPowerTen_long_int_R_long, 0, "(JI)J", 10 },
	{ "bigMultiplyPowerTen", (intptr_t) M_java_math_BigDecimal_bigMultiplyPowerTen_int_R_java_math_BigInteger, VTABLE_java_math_BigDecimal_bigMultiplyPowerTen_int_R_java_math_BigInteger, "(I)Ljava/math/BigInteger;", 2 },
	{ "inflated", (intptr_t) M_java_math_BigDecimal_inflated_R_java_math_BigInteger, VTABLE_java_math_BigDecimal_inflated_R_java_math_BigInteger, "()Ljava/math/BigInteger;", 2 },
	{ "matchScale", (intptr_t) SM_java_math_BigDecimal_matchScale_Array1_java_math_BigDecimal, 0, "([Ljava/math/BigDecimal;)V", 10 },
	{ "longDigitLength", (intptr_t) SM_java_math_BigDecimal_longDigitLength_long_R_int, 0, "(J)I", 8 },
	{ "bigDigitLength", (intptr_t) SM_java_math_BigDecimal_bigDigitLength_java_math_BigInteger_R_int, 0, "(Ljava/math/BigInteger;)I", 10 },
	{ "checkScale", (intptr_t) M_java_math_BigDecimal_checkScale_long_R_int, VTABLE_java_math_BigDecimal_checkScale_long_R_int, "(J)I", 2 },
	{ "compactValFor", (intptr_t) SM_java_math_BigDecimal_compactValFor_java_math_BigInteger_R_long, 0, "(Ljava/math/BigInteger;)J", 10 },
	{ "longCompareMagnitude", (intptr_t) SM_java_math_BigDecimal_longCompareMagnitude_long_long_R_int, 0, "(JJ)I", 10 },
	{ "saturateLong", (intptr_t) SM_java_math_BigDecimal_saturateLong_long_R_int, 0, "(J)I", 10 },
	{ "print", (intptr_t) SM_java_math_BigDecimal_print_java_lang_String_java_math_BigDecimal, 0, "(Ljava/lang/String;Ljava/math/BigDecimal;)V", 10 },
	{ "audit", (intptr_t) M_java_math_BigDecimal_audit_R_java_math_BigDecimal, VTABLE_java_math_BigDecimal_audit_R_java_math_BigDecimal, "()Ljava/math/BigDecimal;", 2 },
	{ "checkScaleNonZero", (intptr_t) SM_java_math_BigDecimal_checkScaleNonZero_long_R_int, 0, "(J)I", 10 },
	{ "checkScale", (intptr_t) SM_java_math_BigDecimal_checkScale_long_long_R_int, 0, "(JJ)I", 10 },
	{ "checkScale", (intptr_t) SM_java_math_BigDecimal_checkScale_java_math_BigInteger_long_R_int, 0, "(Ljava/math/BigInteger;J)I", 10 },
	{ "doRound", (intptr_t) SM_java_math_BigDecimal_doRound_java_math_BigDecimal_java_math_MathContext_R_java_math_BigDecimal, 0, "(Ljava/math/BigDecimal;Ljava/math/MathContext;)Ljava/math/BigDecimal;", 10 },
	{ "doRound", (intptr_t) SM_java_math_BigDecimal_doRound_long_int_java_math_MathContext_R_java_math_BigDecimal, 0, "(JILjava/math/MathContext;)Ljava/math/BigDecimal;", 10 },
	{ "doRound", (intptr_t) SM_java_math_BigDecimal_doRound_java_math_BigInteger_int_java_math_MathContext_R_java_math_BigDecimal, 0, "(Ljava/math/BigInteger;ILjava/math/MathContext;)Ljava/math/BigDecimal;", 10 },
	{ "divideAndRoundByTenPow", (intptr_t) SM_java_math_BigDecimal_divideAndRoundByTenPow_java_math_BigInteger_int_int_R_java_math_BigInteger, 0, "(Ljava/math/BigInteger;II)Ljava/math/BigInteger;", 10 },
	{ "divideAndRound", (intptr_t) SM_java_math_BigDecimal_divideAndRound_long_long_int_int_int_R_java_math_BigDecimal, 0, "(JJIII)Ljava/math/BigDecimal;", 10 },
	{ "divideAndRound", (intptr_t) SM_java_math_BigDecimal_divideAndRound_long_long_int_R_long, 0, "(JJI)J", 10 },
	{ "commonNeedIncrement", (intptr_t) SM_java_math_BigDecimal_commonNeedIncrement_int_int_int_boolean_R_boolean, 0, "(IIIZ)Z", 10 },
	{ "needIncrement", (intptr_t) SM_java_math_BigDecimal_needIncrement_long_int_int_long_long_R_boolean, 0, "(JIIJJ)Z", 10 },
	{ "divideAndRound", (intptr_t) SM_java_math_BigDecimal_divideAndRound_java_math_BigInteger_long_int_R_java_math_BigInteger, 0, "(Ljava/math/BigInteger;JI)Ljava/math/BigInteger;", 10 },
	{ "divideAndRound", (intptr_t) SM_java_math_BigDecimal_divideAndRound_java_math_BigInteger_long_int_int_int_R_java_math_BigDecimal, 0, "(Ljava/math/BigInteger;JIII)Ljava/math/BigDecimal;", 10 },
	{ "needIncrement", (intptr_t) SM_java_math_BigDecimal_needIncrement_long_int_int_java_math_MutableBigInteger_long_R_boolean, 0, "(JIILjava/math/MutableBigInteger;J)Z", 10 },
	{ "divideAndRound", (intptr_t) SM_java_math_BigDecimal_divideAndRound_java_math_BigInteger_java_math_BigInteger_int_R_java_math_BigInteger, 0, "(Ljava/math/BigInteger;Ljava/math/BigInteger;I)Ljava/math/BigInteger;", 10 },
	{ "divideAndRound", (intptr_t) SM_java_math_BigDecimal_divideAndRound_java_math_BigInteger_java_math_BigInteger_int_int_int_R_java_math_BigDecimal, 0, "(Ljava/math/BigInteger;Ljava/math/BigInteger;III)Ljava/math/BigDecimal;", 10 },
	{ "needIncrement", (intptr_t) SM_java_math_BigDecimal_needIncrement_java_math_MutableBigInteger_int_int_java_math_MutableBigInteger_java_math_MutableBigInteger_R_boolean, 0, "(Ljava/math/MutableBigInteger;IILjava/math/MutableBigInteger;Ljava/math/MutableBigInteger;)Z", 10 },
	{ "createAndStripZerosToMatchScale", (intptr_t) SM_java_math_BigDecimal_createAndStripZerosToMatchScale_java_math_BigInteger_int_long_R_java_math_BigDecimal, 0, "(Ljava/math/BigInteger;IJ)Ljava/math/BigDecimal;", 10 },
	{ "createAndStripZerosToMatchScale", (intptr_t) SM_java_math_BigDecimal_createAndStripZerosToMatchScale_long_int_long_R_java_math_BigDecimal, 0, "(JIJ)Ljava/math/BigDecimal;", 10 },
	{ "stripZerosToMatchScale", (intptr_t) SM_java_math_BigDecimal_stripZerosToMatchScale_java_math_BigInteger_long_int_int_R_java_math_BigDecimal, 0, "(Ljava/math/BigInteger;JII)Ljava/math/BigDecimal;", 10 },
	{ "add", (intptr_t) SM_java_math_BigDecimal_add_long_long_R_long, 0, "(JJ)J", 10 },
	{ "add", (intptr_t) SM_java_math_BigDecimal_add_long_long_int_R_java_math_BigDecimal, 0, "(JJI)Ljava/math/BigDecimal;", 10 },
	{ "add", (intptr_t) SM_java_math_BigDecimal_add_long_int_long_int_R_java_math_BigDecimal, 0, "(JIJI)Ljava/math/BigDecimal;", 10 },
	{ "add", (intptr_t) SM_java_math_BigDecimal_add_long_int_java_math_BigInteger_int_R_java_math_BigDecimal, 0, "(JILjava/math/BigInteger;I)Ljava/math/BigDecimal;", 10 },
	{ "add", (intptr_t) SM_java_math_BigDecimal_add_java_math_BigInteger_int_java_math_BigInteger_int_R_java_math_BigDecimal, 0, "(Ljava/math/BigInteger;ILjava/math/BigInteger;I)Ljava/math/BigDecimal;", 10 },
	{ "bigMultiplyPowerTen", (intptr_t) SM_java_math_BigDecimal_bigMultiplyPowerTen_long_int_R_java_math_BigInteger, 0, "(JI)Ljava/math/BigInteger;", 10 },
	{ "bigMultiplyPowerTen", (intptr_t) SM_java_math_BigDecimal_bigMultiplyPowerTen_java_math_BigInteger_int_R_java_math_BigInteger, 0, "(Ljava/math/BigInteger;I)Ljava/math/BigInteger;", 10 },
	{ "divideSmallFastPath", (intptr_t) SM_java_math_BigDecimal_divideSmallFastPath_long_int_long_int_long_java_math_MathContext_R_java_math_BigDecimal, 0, "(JIJIJLjava/math/MathContext;)Ljava/math/BigDecimal;", 10 },
	{ "divide", (intptr_t) SM_java_math_BigDecimal_divide_long_int_long_int_long_java_math_MathContext_R_java_math_BigDecimal, 0, "(JIJIJLjava/math/MathContext;)Ljava/math/BigDecimal;", 10 },
	{ "divide", (intptr_t) SM_java_math_BigDecimal_divide_java_math_BigInteger_int_long_int_long_java_math_MathContext_R_java_math_BigDecimal, 0, "(Ljava/math/BigInteger;IJIJLjava/math/MathContext;)Ljava/math/BigDecimal;", 10 },
	{ "divide", (intptr_t) SM_java_math_BigDecimal_divide_long_int_java_math_BigInteger_int_long_java_math_MathContext_R_java_math_BigDecimal, 0, "(JILjava/math/BigInteger;IJLjava/math/MathContext;)Ljava/math/BigDecimal;", 10 },
	{ "divide", (intptr_t) SM_java_math_BigDecimal_divide_java_math_BigInteger_int_java_math_BigInteger_int_long_java_math_MathContext_R_java_math_BigDecimal, 0, "(Ljava/math/BigInteger;ILjava/math/BigInteger;IJLjava/math/MathContext;)Ljava/math/BigDecimal;", 10 },
	{ "multiplyDivideAndRound", (intptr_t) SM_java_math_BigDecimal_multiplyDivideAndRound_long_long_long_int_int_int_R_java_math_BigDecimal, 0, "(JJJIII)Ljava/math/BigDecimal;", 10 },
	{ "divideAndRound128", (intptr_t) SM_java_math_BigDecimal_divideAndRound128_long_long_long_int_int_int_int_R_java_math_BigDecimal, 0, "(JJJIIII)Ljava/math/BigDecimal;", 10 },
	{ "roundedTenPower", (intptr_t) SM_java_math_BigDecimal_roundedTenPower_int_int_int_int_R_java_math_BigDecimal, 0, "(IIII)Ljava/math/BigDecimal;", 10 },
	{ "scaledTenPow", (intptr_t) SM_java_math_BigDecimal_scaledTenPow_int_int_int_R_java_math_BigDecimal, 0, "(III)Ljava/math/BigDecimal;", 8 },
	{ "divRemNegativeLong", (intptr_t) SM_java_math_BigDecimal_divRemNegativeLong_long_long_R_Array1_long, 0, "(JJ)[J", 10 },
	{ "make64", (intptr_t) SM_java_math_BigDecimal_make64_long_long_R_long, 0, "(JJ)J", 10 },
	{ "mulsub", (intptr_t) SM_java_math_BigDecimal_mulsub_long_long_long_long_long_R_long, 0, "(JJJJJ)J", 10 },
	{ "unsignedLongCompare", (intptr_t) SM_java_math_BigDecimal_unsignedLongCompare_long_long_R_boolean, 0, "(JJ)Z", 10 },
	{ "unsignedLongCompareEq", (intptr_t) SM_java_math_BigDecimal_unsignedLongCompareEq_long_long_R_boolean, 0, "(JJ)Z", 10 },
	{ "compareMagnitudeNormalized", (intptr_t) SM_java_math_BigDecimal_compareMagnitudeNormalized_long_int_long_int_R_int, 0, "(JIJI)I", 10 },
	{ "compareMagnitudeNormalized", (intptr_t) SM_java_math_BigDecimal_compareMagnitudeNormalized_long_int_java_math_BigInteger_int_R_int, 0, "(JILjava/math/BigInteger;I)I", 10 },
	{ "compareMagnitudeNormalized", (intptr_t) SM_java_math_BigDecimal_compareMagnitudeNormalized_java_math_BigInteger_int_java_math_BigInteger_int_R_int, 0, "(Ljava/math/BigInteger;ILjava/math/BigInteger;I)I", 10 },
	{ "multiply", (intptr_t) SM_java_math_BigDecimal_multiply_long_long_R_long, 0, "(JJ)J", 10 },
	{ "multiply", (intptr_t) SM_java_math_BigDecimal_multiply_long_long_int_R_java_math_BigDecimal, 0, "(JJI)Ljava/math/BigDecimal;", 10 },
	{ "multiply", (intptr_t) SM_java_math_BigDecimal_multiply_long_java_math_BigInteger_int_R_java_math_BigDecimal, 0, "(JLjava/math/BigInteger;I)Ljava/math/BigDecimal;", 10 },
	{ "multiply", (intptr_t) SM_java_math_BigDecimal_multiply_java_math_BigInteger_java_math_BigInteger_int_R_java_math_BigDecimal, 0, "(Ljava/math/BigInteger;Ljava/math/BigInteger;I)Ljava/math/BigDecimal;", 10 },
	{ "multiplyAndRound", (intptr_t) SM_java_math_BigDecimal_multiplyAndRound_long_long_int_java_math_MathContext_R_java_math_BigDecimal, 0, "(JJILjava/math/MathContext;)Ljava/math/BigDecimal;", 10 },
	{ "multiplyAndRound", (intptr_t) SM_java_math_BigDecimal_multiplyAndRound_long_java_math_BigInteger_int_java_math_MathContext_R_java_math_BigDecimal, 0, "(JLjava/math/BigInteger;ILjava/math/MathContext;)Ljava/math/BigDecimal;", 10 },
	{ "multiplyAndRound", (intptr_t) SM_java_math_BigDecimal_multiplyAndRound_java_math_BigInteger_java_math_BigInteger_int_java_math_MathContext_R_java_math_BigDecimal, 0, "(Ljava/math/BigInteger;Ljava/math/BigInteger;ILjava/math/MathContext;)Ljava/math/BigDecimal;", 10 },
	{ "doRound128", (intptr_t) SM_java_math_BigDecimal_doRound128_long_long_int_int_java_math_MathContext_R_java_math_BigDecimal, 0, "(JJIILjava/math/MathContext;)Ljava/math/BigDecimal;", 10 },
	{ "precision", (intptr_t) SM_java_math_BigDecimal_precision_long_long_R_int, 0, "(JJ)I", 10 },
	{ "longLongCompareMagnitude", (intptr_t) SM_java_math_BigDecimal_longLongCompareMagnitude_long_long_long_long_R_boolean, 0, "(JJJJ)Z", 10 },
	{ "divide", (intptr_t) SM_java_math_BigDecimal_divide_long_int_long_int_int_int_R_java_math_BigDecimal, 0, "(JIJIII)Ljava/math/BigDecimal;", 10 },
	{ "divide", (intptr_t) SM_java_math_BigDecimal_divide_java_math_BigInteger_int_long_int_int_int_R_java_math_BigDecimal, 0, "(Ljava/math/BigInteger;IJIII)Ljava/math/BigDecimal;", 10 },
	{ "divide", (intptr_t) SM_java_math_BigDecimal_divide_long_int_java_math_BigInteger_int_int_int_R_java_math_BigDecimal, 0, "(JILjava/math/BigInteger;III)Ljava/math/BigDecimal;", 10 },
	{ "divide", (intptr_t) SM_java_math_BigDecimal_divide_java_math_BigInteger_int_java_math_BigInteger_int_int_int_R_java_math_BigDecimal, 0, "(Ljava/math/BigInteger;ILjava/math/BigInteger;III)Ljava/math/BigDecimal;", 10 },
	{ "compareTo", (intptr_t) M_java_math_BigDecimal_compareTo_java_lang_Object_R_int, VTABLE_java_math_BigDecimal_compareTo_java_lang_Object_R_int, "(Ljava/lang/Object;)I", 4161 },
	{ "access$000", (intptr_t) SM_java_math_BigDecimal_access$000_java_math_BigDecimal_R_java_math_BigInteger, 0, "(Ljava/math/BigDecimal;)Ljava/math/BigInteger;", 4104 },
	{ "<clinit>", (intptr_t) clinit_java_math_BigDecimal, 0, "()V", 8 },
};

Class class_java_math_BigDecimal{
		.nativeName = (intptr_t) "java/math/BigDecimal",
		.parentClass = (intptr_t) &class_java_lang_Number,
		.size = sizeof(java_math_BigDecimal),
		.classVtable = (intptr_t) vtable_java_math_BigDecimal,
		.staticInitializer = (intptr_t) clinit_java_math_BigDecimal,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_java_math_BigDecimal,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 2,
		.nativeInnerClasses = (intptr_t) innerClasses,
		.access = 33,
		.interfaceCount = 1,
		.nativeInterfaces = (intptr_t) interfaces,
		.fieldCount = 35,
		.nativeFields = (intptr_t) fields,
		.methodCount = 162,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 78,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_java_math_BigDecimal = registerClass(&class_java_math_BigDecimal);

}
