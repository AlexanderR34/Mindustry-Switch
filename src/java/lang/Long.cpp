#include "java/lang/Long.h"
#include "java/lang/Math.h"
#include "java/lang/Integer.h"
#include "java/math/BigInteger.h"
#include "java/lang/StringBuilder.h"
#include "java/lang/Number.h"
#include "java/lang/Comparable.h"
#include "java/lang/IllegalArgumentException.h"
#include "java/lang/Long.h"
#include "java/nio/NativeUtils.h"
#include "java/lang/Object.h"
#include "java/lang/String.h"
#include "java/lang/NumberFormatException.h"
#include "java/lang/Character.h"
#include "java/lang/NullPointerException.h"
#include "java/lang/Class.h"
#include "java/lang/System.h"

extern "C" {

jobject SF_java_lang_Long_TYPE;
jlong SF_java_lang_Long_MAX_VALUE;
jlong SF_java_lang_Long_MIN_VALUE;
jint SF_java_lang_Long_SIZE;

void mark_java_lang_Long(jobject object, jint mark, jint depth) {
	if (!object) {
		if (SF_java_lang_Long_TYPE)
			((gc_mark_ptr) ((jclass) ((jobject) SF_java_lang_Long_TYPE)->clazz)->markFunction)((jobject) SF_java_lang_Long_TYPE, mark, depth + 1);
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
	auto self = (java_lang_Long *) object;
}

void init_java_lang_Long_long(jcontext ctx, jobject self, jlong param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/lang/Long:<init>", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_lang_Long(ctx);
	frame[0].o = self;
	frame[1].l = param0;
	{
	LINE_NUMBER(58);
	init_java_lang_Number(ctx, (frame[0].o));
	LINE_NUMBER(59);
	((java_lang_Long *) NULL_CHECK((frame[0].o)))->F_value = (frame[1].l);
	LINE_NUMBER(60);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_java_lang_Long_java_lang_String(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/lang/Long:<init>", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_lang_Long(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(75);
	init_java_lang_Number(ctx, (frame[0].o));
	LINE_NUMBER(76);
	sp[0].o = frame[0].o;
	jlong temp0 = (jlong)SM_java_lang_Long_parseLong_java_lang_String_int_R_long(ctx, (frame[1].o), (10));
	((java_lang_Long *) NULL_CHECK(sp[0].o))->F_value = temp0;
	LINE_NUMBER(77);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jdouble M_java_lang_Long_doubleValue_R_double(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/lang/Long:doubleValue", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(83);
	popStackFrame(ctx);
	return (jdouble(((jlong)((java_lang_Long *) NULL_CHECK((frame[0].o)))->F_value)));
	}

	popStackFrame(ctx);
}

jbool M_java_lang_Long_equals_java_lang_Object_R_boolean(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/lang/Long:equals", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(90);
	if ((frame[1].o) == nullptr) goto label_1;
	}
	{
	sp[0].o = (jobject)((func_java_lang_Object_getClass_R_java_lang_Class) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_Object_getClass_R_java_lang_Class])(ctx, (frame[1].o));
	sp[1].o = (jobject)((func_java_lang_Object_getClass_R_java_lang_Class) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_lang_Object_getClass_R_java_lang_Class])(ctx, (frame[0].o));
	if (sp[0].o != sp[1].o) goto label_1;
	}
	{
	if ((longCompare(((jlong)((java_lang_Long *) NULL_CHECK((checkCast(ctx, &class_java_lang_Long, (frame[1].o)))))->F_value), ((jlong)((java_lang_Long *) NULL_CHECK((frame[0].o)))->F_value))) != 0) goto label_1;
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

jfloat M_java_lang_Long_floatValue_R_float(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/lang/Long:floatValue", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(97);
	popStackFrame(ctx);
	return (jfloat(((jlong)((java_lang_Long *) NULL_CHECK((frame[0].o)))->F_value)));
	}

	popStackFrame(ctx);
}

jint SM_java_lang_Long_signum_long_R_int(jcontext ctx, jlong param0) {
	jtype frame[7];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/lang/Long:signum", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_lang_Long(ctx);
	frame[0].l = param0;
	{
	LINE_NUMBER(101);
	popStackFrame(ctx);
	return (jint((((frame[0].l) >> (63)) | (bit_cast<jlong>(bit_cast<uint64_t>((-(frame[0].l))) >> (63))))));
	}

	popStackFrame(ctx);
}

jint M_java_lang_Long_hashCode_R_int(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/lang/Long:hashCode", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(108);
	jint temp0 = (jint)SM_java_lang_Long_hashCode_long_R_int(ctx, ((jlong)((java_lang_Long *) NULL_CHECK((frame[0].o)))->F_value));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jint SM_java_lang_Long_hashCode_long_R_int(jcontext ctx, jlong param0) {
	jtype frame[7];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/lang/Long:hashCode", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_lang_Long(ctx);
	frame[0].l = param0;
	{
	LINE_NUMBER(112);
	popStackFrame(ctx);
	return (jint(((frame[0].l) ^ (bit_cast<jlong>(bit_cast<uint64_t>((frame[0].l)) >> (32))))));
	}

	popStackFrame(ctx);
}

jlong M_java_lang_Long_longValue_R_long(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/lang/Long:longValue", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(119);
	popStackFrame(ctx);
	return ((jlong)((java_lang_Long *) NULL_CHECK((frame[0].o)))->F_value);
	}

	popStackFrame(ctx);
}

jint M_java_lang_Long_intValue_R_int(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/lang/Long:intValue", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(126);
	popStackFrame(ctx);
	return (jint(((jlong)((java_lang_Long *) NULL_CHECK((frame[0].o)))->F_value)));
	}

	popStackFrame(ctx);
}

jbyte M_java_lang_Long_byteValue_R_byte(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/lang/Long:byteValue", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(133);
	popStackFrame(ctx);
	return (jbyte((jint(((jlong)((java_lang_Long *) NULL_CHECK((frame[0].o)))->F_value)))));
	}

	popStackFrame(ctx);
}

jlong SM_java_lang_Long_rotateLeft_long_int_R_long(jcontext ctx, jlong param0, jint param1) {
	jtype frame[8];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/lang/Long:rotateLeft", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_lang_Long(ctx);
	frame[0].l = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(137);
	popStackFrame(ctx);
	return (((frame[0].l) << (frame[2].i)) | (bit_cast<jlong>(bit_cast<uint64_t>((frame[0].l)) >> (-(frame[2].i)))));
	}

	popStackFrame(ctx);
}

jlong SM_java_lang_Long_rotateRight_long_int_R_long(jcontext ctx, jlong param0, jint param1) {
	jtype frame[8];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/lang/Long:rotateRight", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_lang_Long(ctx);
	frame[0].l = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(141);
	popStackFrame(ctx);
	return ((bit_cast<jlong>(bit_cast<uint64_t>((frame[0].l)) >> (frame[2].i))) | ((frame[0].l) << (-(frame[2].i))));
	}

	popStackFrame(ctx);
}

jlong SM_java_lang_Long_reverse_long_R_long(jcontext ctx, jlong param0) {
	jtype frame[8];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/lang/Long:reverse", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_lang_Long(ctx);
	frame[0].l = param0;
	{
	LINE_NUMBER(145);
	frame[0].l = ((((frame[0].l) & (jlong(6148914691236517205ll))) << (jint(1))) | ((bit_cast<jlong>(bit_cast<uint64_t>((frame[0].l)) >> (jint(1)))) & (jlong(6148914691236517205ll))));
	LINE_NUMBER(146);
	frame[0].l = ((((frame[0].l) & (jlong(3689348814741910323ll))) << (jint(2))) | ((bit_cast<jlong>(bit_cast<uint64_t>((frame[0].l)) >> (jint(2)))) & (jlong(3689348814741910323ll))));
	LINE_NUMBER(147);
	frame[0].l = ((((frame[0].l) & (jlong(1085102592571150095ll))) << (jint(4))) | ((bit_cast<jlong>(bit_cast<uint64_t>((frame[0].l)) >> (jint(4)))) & (jlong(1085102592571150095ll))));
	LINE_NUMBER(148);
	jlong temp0 = (jlong)SM_java_lang_Long_reverseBytes_long_R_long(ctx, (frame[0].l));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jlong SM_java_lang_Long_reverseBytes_long_R_long(jcontext ctx, jlong param0) {
	jtype frame[8];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/lang/Long:reverseBytes", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_lang_Long(ctx);
	frame[0].l = param0;
	{
	LINE_NUMBER(152);
	frame[0].l = ((((frame[0].l) & (jlong(71777214294589695ll))) << (8)) | ((bit_cast<jlong>(bit_cast<uint64_t>((frame[0].l)) >> (8))) & (jlong(71777214294589695ll))));
	LINE_NUMBER(153);
	popStackFrame(ctx);
	return (((((frame[0].l) << (48)) | (((frame[0].l) & (jlong(4294901760ll))) << (16))) | ((bit_cast<jlong>(bit_cast<uint64_t>((frame[0].l)) >> (16))) & (jlong(4294901760ll)))) | (bit_cast<jlong>(bit_cast<uint64_t>((frame[0].l)) >> (48))));
	}

	popStackFrame(ctx);
}

jlong SM_java_lang_Long_parseLong_java_lang_String_R_long(jcontext ctx, jobject param0) {
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/lang/Long:parseLong", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_lang_Long(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(163);
	jlong temp0 = (jlong)SM_java_lang_Long_parseLong_java_lang_String_int_R_long(ctx, (frame[0].o), (10));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jlong SM_java_lang_Long_parseLong_java_lang_String_int_R_long(jcontext ctx, jobject param0, jint param1) {
	jtype frame[9];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/lang/Long:parseLong", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_lang_Long(ctx);
	frame[0].o = param0;
	frame[1].i = param1;
	{
	LINE_NUMBER(175);
	if ((frame[1].i) < (jint(2))) goto label_1;
	}
	{
	if ((frame[1].i) <= (36)) goto label_2;
	}
label_1:;
	{
	LINE_NUMBER(176);
	clinit_java_lang_NumberFormatException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_NumberFormatException);
	clinit_java_lang_StringBuilder(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[1].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"Invalid radix: "_j))));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder])(ctx, sp[1].o, (frame[1].i));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[1].o);
	init_java_lang_NumberFormatException_java_lang_String(ctx, sp[0].o, sp[1].o);
	throwException(ctx, sp[0].o);	}
label_2:;
	{
	LINE_NUMBER(178);
	if ((frame[0].o) != nullptr) goto label_3;
	}
	{
	LINE_NUMBER(179);
	sp[0].o = (jobject)SM_java_lang_Long_invalidLong_java_lang_String_R_java_lang_NumberFormatException(ctx, (frame[0].o));
	throwException(ctx, sp[0].o);	}
label_3:;
	{
	LINE_NUMBER(181);
	jint temp0 = (jint)((func_java_lang_String_length_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_lang_String_length_R_int])(ctx, (frame[0].o));
	frame[2].i = temp0;
	frame[3].i = (jint(0));
	LINE_NUMBER(182);
	if ((frame[2].i) != 0) goto label_7;
	}
	{
	LINE_NUMBER(183);
	sp[0].o = (jobject)SM_java_lang_Long_invalidLong_java_lang_String_R_java_lang_NumberFormatException(ctx, (frame[0].o));
	throwException(ctx, sp[0].o);	}
label_7:;
	{
	LINE_NUMBER(185);
	jint temp0 = (jint)((func_java_lang_String_charAt_int_R_char) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_lang_String_charAt_int_R_char])(ctx, (frame[0].o), (frame[3].i));
	if (temp0 != (45)) goto label_9;
	}
	INST_ICONST(1);
	goto label_10;
label_9:;
	INST_ICONST(0);
label_10:;
	{
	sp -= 1;
	frame[4].i = sp[0].i;
	LINE_NUMBER(186);
	if ((frame[4].i) == 0) goto label_12;
	}
	{
	INST_IINC(3, 1);
	if ((frame[3].i) != (frame[2].i)) goto label_12;
	}
	{
	LINE_NUMBER(187);
	sp[0].o = (jobject)SM_java_lang_Long_invalidLong_java_lang_String_R_java_lang_NumberFormatException(ctx, (frame[0].o));
	throwException(ctx, sp[0].o);	}
label_12:;
	{
	LINE_NUMBER(190);
	jlong temp0 = (jlong)SM_java_lang_Long_parse_java_lang_String_int_int_boolean_R_long(ctx, (frame[0].o), (frame[3].i), (frame[1].i), (frame[4].i));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jlong SM_java_lang_Long_parse_java_lang_String_int_int_boolean_R_long(jcontext ctx, jobject param0, jint param1, jint param2, jbool param3) {
	jtype frame[17];
	auto stack = &frame[13];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/lang/Long:parse", 17 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_lang_Long(ctx);
	frame[0].o = param0;
	frame[1].i = param1;
	frame[2].i = param2;
	frame[3].i = param3;
	{
	LINE_NUMBER(194);
	frame[4].l = ((jlong(-9223372036854775807ll)) / (jlong((frame[2].i))));
	LINE_NUMBER(195);
	frame[6].l = (jlong(0));
	jint temp0 = (jint)((func_java_lang_String_length_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_lang_String_length_R_int])(ctx, (frame[0].o));
	frame[8].l = (jlong(temp0));
	}
label_3:;
	{
	LINE_NUMBER(196);
	if ((longCompare((jlong((frame[1].i))), (frame[8].l))) >= 0) goto label_4;
	}
	{
	LINE_NUMBER(197);
	sp[0].o = frame[0].o;
	jint temp0 = frame[1].i;
	INST_IINC(1, 1);
	jint temp1 = (jint)((func_java_lang_String_charAt_int_R_char) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_String_charAt_int_R_char])(ctx, sp[0].o, temp0);
	jint temp2 = (jint)SM_java_lang_Character_digit_char_int_R_int(ctx, temp1, (frame[2].i));
	frame[10].i = temp2;
	LINE_NUMBER(198);
	if ((frame[10].i) != (jint(-1))) goto label_7;
	}
	{
	LINE_NUMBER(199);
	sp[0].o = (jobject)SM_java_lang_Long_invalidLong_java_lang_String_R_java_lang_NumberFormatException(ctx, (frame[0].o));
	throwException(ctx, sp[0].o);	}
label_7:;
	{
	LINE_NUMBER(201);
	if ((longCompare((frame[4].l), (frame[6].l))) <= 0) goto label_9;
	}
	{
	LINE_NUMBER(202);
	sp[0].o = (jobject)SM_java_lang_Long_invalidLong_java_lang_String_R_java_lang_NumberFormatException(ctx, (frame[0].o));
	throwException(ctx, sp[0].o);	}
label_9:;
	{
	LINE_NUMBER(204);
	frame[11].l = (((frame[6].l) * (jlong((frame[2].i)))) - (jlong((frame[10].i))));
	LINE_NUMBER(205);
	if ((longCompare((frame[11].l), (frame[6].l))) <= 0) goto label_12;
	}
	{
	LINE_NUMBER(206);
	sp[0].o = (jobject)SM_java_lang_Long_invalidLong_java_lang_String_R_java_lang_NumberFormatException(ctx, (frame[0].o));
	throwException(ctx, sp[0].o);	}
label_12:;
	{
	LINE_NUMBER(208);
	frame[6].l = (frame[11].l);
	LINE_NUMBER(209);
	goto label_3;
	}
label_4:;
	{
	LINE_NUMBER(210);
	if ((frame[3].i) != 0) goto label_15;
	}
	{
	LINE_NUMBER(211);
	frame[6].l = (-(frame[6].l));
	LINE_NUMBER(212);
	if ((longCompare((frame[6].l), (jlong(0)))) >= 0) goto label_15;
	}
	{
	LINE_NUMBER(213);
	sp[0].o = (jobject)SM_java_lang_Long_invalidLong_java_lang_String_R_java_lang_NumberFormatException(ctx, (frame[0].o));
	throwException(ctx, sp[0].o);	}
label_15:;
	{
	LINE_NUMBER(216);
	popStackFrame(ctx);
	return (frame[6].l);
	}

	popStackFrame(ctx);
}

jobject SM_java_lang_Long_invalidLong_java_lang_String_R_java_lang_NumberFormatException(jcontext ctx, jobject param0) {
	jtype frame[5];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/lang/Long:invalidLong", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_lang_Long(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(220);
	clinit_java_lang_NumberFormatException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_NumberFormatException);
	clinit_java_lang_StringBuilder(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[1].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"Invalid long: \""_j))));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (frame[0].o));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"\""_j))));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[1].o);
	init_java_lang_NumberFormatException_java_lang_String(ctx, sp[0].o, sp[1].o);
	throwException(ctx, sp[0].o);	}

	popStackFrame(ctx);
}

jobject M_java_lang_Long_toString_R_java_lang_String(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/lang/Long:toString", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(228);
	sp[0].o = (jobject)SM_java_lang_Long_toString_long_R_java_lang_String(ctx, ((jlong)((java_lang_Long *) NULL_CHECK((frame[0].o)))->F_value));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject SM_java_lang_Long_toString_long_R_java_lang_String(jcontext ctx, jlong param0) {
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/lang/Long:toString", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_lang_Long(ctx);
	frame[0].l = param0;
	{
	LINE_NUMBER(236);
	sp[0].o = (jobject)SM_java_lang_Long_toString_long_int_R_java_lang_String(ctx, (frame[0].l), (10));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject SM_java_lang_Long_toHexString_long_R_java_lang_String(jcontext ctx, jlong param0) {
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/lang/Long:toHexString", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_lang_Long(ctx);
	frame[0].l = param0;
	{
	LINE_NUMBER(296);
	sp[0].o = (jobject)SM_java_lang_Long_toUnsignedString0_long_int_R_java_lang_String(ctx, (frame[0].l), (jint(4)));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject SM_java_lang_Long_toBinaryString_long_R_java_lang_String(jcontext ctx, jlong param0) {
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/lang/Long:toBinaryString", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_lang_Long(ctx);
	frame[0].l = param0;
	{
	LINE_NUMBER(300);
	sp[0].o = (jobject)SM_java_lang_Long_toUnsignedString0_long_int_R_java_lang_String(ctx, (frame[0].l), (jint(1)));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject SM_java_lang_Long_getLong_java_lang_String_R_java_lang_Long(jcontext ctx, jobject param0) {
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/lang/Long:getLong", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_lang_Long(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(304);
	sp[0].o = (jobject)SM_java_lang_Long_getLong_java_lang_String_java_lang_Long_R_java_lang_Long(ctx, (frame[0].o), (jobject(nullptr)));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject SM_java_lang_Long_getLong_java_lang_String_long_R_java_lang_Long(jcontext ctx, jobject param0, jlong param1) {
	jtype frame[6];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/lang/Long:getLong", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_lang_Long(ctx);
	frame[0].o = param0;
	frame[1].l = param1;
	{
	LINE_NUMBER(308);
	sp[0].o = (jobject)SM_java_lang_Long_getLong_java_lang_String_java_lang_Long_R_java_lang_Long(ctx, (frame[0].o), (jobject(nullptr)));
	frame[3].o = sp[0].o;
	LINE_NUMBER(309);
	if ((frame[3].o) != nullptr) goto label_2;
	}
	{
	sp[0].o = (jobject)SM_java_lang_Long_valueOf_long_R_java_lang_Long(ctx, (frame[1].l));
	sp += 1;
	goto label_3;
	}
label_2:;
	INST_ALOAD(3);
label_3:;
	popStackFrame(ctx);
	INST_ARETURN();

	popStackFrame(ctx);
}

jobject SM_java_lang_Long_getLong_java_lang_String_java_lang_Long_R_java_lang_Long(jcontext ctx, jobject param0, jobject param1) {
	jtype frame[6];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/lang/Long:getLong", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_lang_Long(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	{
	LINE_NUMBER(313);
	frame[2].o = (jobject(nullptr));
	}
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_IllegalArgumentException))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
label_4: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_NullPointerException))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 2); goto label_2; }
	}
	{
	LINE_NUMBER(315);
	sp[0].o = (jobject)SM_java_lang_System_getProperty_java_lang_String_R_java_lang_String(ctx, (frame[0].o));
	frame[2].o = sp[0].o;
	}
	popExceptionFrame(frameRef);
	popExceptionFrame(frameRef);
	LINE_NUMBER(317);
	goto label_10;
label_2:;
	LINE_NUMBER(316);
	INST_ASTORE(3);
label_10:;
	{
	LINE_NUMBER(318);
	if ((frame[2].o) == nullptr) goto label_11;
	}
label_8: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_NumberFormatException))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_7; }
	}
	{
	LINE_NUMBER(320);
	jlong temp0 = (jlong)SM_java_lang_Long_parseLong_java_lang_String_R_long(ctx, (frame[2].o));
	sp[0].o = (jobject)SM_java_lang_Long_valueOf_long_R_java_lang_Long(ctx, temp0);
	sp += 1;
	}
	popExceptionFrame(frameRef);
	popStackFrame(ctx);
	INST_ARETURN();
label_7:;
	LINE_NUMBER(321);
	INST_ASTORE(3);
label_11:;
	{
	LINE_NUMBER(324);
	popStackFrame(ctx);
	return (frame[1].o);
	}

	popStackFrame(ctx);
}

jobject SM_java_lang_Long_toUnsignedString0_long_int_R_java_lang_String(jcontext ctx, jlong param0, jint param1) {
	jtype frame[12];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/lang/Long:toUnsignedString0", 12 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_lang_Long(ctx);
	frame[0].l = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(334);
	jint temp0 = 64;
	jint temp1 = (jint)SM_java_lang_Long_numberOfLeadingZeros_long_R_int(ctx, (frame[0].l));
	frame[3].i = (temp0 - temp1);
	LINE_NUMBER(335);
	jint temp2 = (jint)SM_java_lang_Math_max_int_int_R_int(ctx, (((frame[3].i) + ((frame[2].i) - (jint(1)))) / (frame[2].i)), (jint(1)));
	frame[4].i = temp2;
	LINE_NUMBER(336);
	sp[0].o = (jobject) createArray(ctx, &class_char, (frame[4].i));
	frame[5].o = sp[0].o;
	LINE_NUMBER(338);
	jint temp3 = (jint)SM_java_lang_Long_formatUnsignedLong_long_int_Array1_char_int_int_R_int(ctx, (frame[0].l), (frame[2].i), (frame[5].o), (jint(0)), (frame[4].i));
	LINE_NUMBER(339);
	clinit_java_lang_String(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_String);
	init_java_lang_String_Array1_char(ctx, sp[0].o, (frame[5].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jint SM_java_lang_Long_bitCount_long_R_int(jcontext ctx, jlong param0) {
	jtype frame[8];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/lang/Long:bitCount", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_lang_Long(ctx);
	frame[0].l = param0;
	{
	LINE_NUMBER(354);
	frame[0].l = ((frame[0].l) - ((bit_cast<jlong>(bit_cast<uint64_t>((frame[0].l)) >> (jint(1)))) & (jlong(6148914691236517205ll))));
	LINE_NUMBER(355);
	frame[0].l = (((frame[0].l) & (jlong(3689348814741910323ll))) + ((bit_cast<jlong>(bit_cast<uint64_t>((frame[0].l)) >> (jint(2)))) & (jlong(3689348814741910323ll))));
	LINE_NUMBER(356);
	frame[0].l = (((frame[0].l) + (bit_cast<jlong>(bit_cast<uint64_t>((frame[0].l)) >> (jint(4))))) & (jlong(1085102592571150095ll)));
	LINE_NUMBER(357);
	frame[0].l = ((frame[0].l) + (bit_cast<jlong>(bit_cast<uint64_t>((frame[0].l)) >> (8))));
	LINE_NUMBER(358);
	frame[0].l = ((frame[0].l) + (bit_cast<jlong>(bit_cast<uint64_t>((frame[0].l)) >> (16))));
	LINE_NUMBER(359);
	frame[0].l = ((frame[0].l) + (bit_cast<jlong>(bit_cast<uint64_t>((frame[0].l)) >> (32))));
	LINE_NUMBER(360);
	popStackFrame(ctx);
	return ((jint((frame[0].l))) & (127));
	}

	popStackFrame(ctx);
}

jint SM_java_lang_Long_formatUnsignedLong_long_int_Array1_char_int_int_R_int(jcontext ctx, jlong param0, jint param1, jobject param2, jint param3, jint param4) {
	jtype frame[14];
	auto stack = &frame[9];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/lang/Long:formatUnsignedLong", 14 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_lang_Long(ctx);
	frame[0].l = param0;
	frame[2].i = param1;
	frame[3].o = param2;
	frame[4].i = param3;
	frame[5].i = param4;
	{
	LINE_NUMBER(373);
	frame[6].i = (frame[5].i);
	LINE_NUMBER(374);
	frame[7].i = ((jint(1)) << (frame[2].i));
	LINE_NUMBER(375);
	frame[8].i = ((frame[7].i) - (jint(1)));
	}
label_3:;
	{
	LINE_NUMBER(377);
	sp[0].o = frame[3].o;
	jint temp0 = frame[4].i;
	INST_IINC(6, -1);
	jint temp1 = temp0 + (frame[6].i);
	clinit_java_lang_Integer(ctx);
	sp[1].o = (jobject)SF_java_lang_Integer_DIGITS;
	ARRAY_ACCESS(jchar, sp[0].o, temp1) = ((jint)ARRAY_ACCESS(jchar, sp[1].o, ((jint((frame[0].l))) & (frame[8].i))));
	LINE_NUMBER(378);
	frame[0].l = (bit_cast<jlong>(bit_cast<uint64_t>((frame[0].l)) >> (frame[2].i)));
	LINE_NUMBER(379);
	if ((longCompare((frame[0].l), (jlong(0)))) == 0) goto label_6;
	}
	INST_ILOAD(6);
	if ((--sp)->i > 0) goto label_3;
label_6:;
	{
	LINE_NUMBER(381);
	popStackFrame(ctx);
	return (frame[6].i);
	}

	popStackFrame(ctx);
}

jobject SM_java_lang_Long_valueOf_long_R_java_lang_Long(jcontext ctx, jlong param0) {
	jtype frame[6];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/lang/Long:valueOf", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_lang_Long(ctx);
	frame[0].l = param0;
	{
	LINE_NUMBER(391);
	clinit_java_lang_Long(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_Long);
	init_java_lang_Long_long(ctx, sp[0].o, (frame[0].l));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject SM_java_lang_Long_valueOf_java_lang_String_R_java_lang_Long(jcontext ctx, jobject param0) {
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/lang/Long:valueOf", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_lang_Long(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(395);
	popStackFrame(ctx);
	return (jobject(nullptr));
	}

	popStackFrame(ctx);
}

jint SM_java_lang_Long_compare_long_long_R_int(jcontext ctx, jlong param0, jlong param1) {
	jtype frame[8];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/lang/Long:compare", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_lang_Long(ctx);
	frame[0].l = param0;
	frame[2].l = param1;
	{
	LINE_NUMBER(399);
	if ((longCompare((frame[0].l), (frame[2].l))) <= 0) goto label_1;
	}
	{
	LINE_NUMBER(400);
	popStackFrame(ctx);
	return (jint(1));
	}
label_1:;
	{
	LINE_NUMBER(401);
	if ((longCompare((frame[0].l), (frame[2].l))) >= 0) goto label_3;
	}
	{
	LINE_NUMBER(402);
	popStackFrame(ctx);
	return (jint(-1));
	}
label_3:;
	{
	LINE_NUMBER(403);
	popStackFrame(ctx);
	return (jint(0));
	}

	popStackFrame(ctx);
}

jint M_java_lang_Long_compareTo_java_lang_Long_R_int(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/lang/Long:compareTo", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(407);
	if ((longCompare(((jlong)((java_lang_Long *) NULL_CHECK((frame[0].o)))->F_value), ((jlong)((java_lang_Long *) NULL_CHECK((frame[1].o)))->F_value))) >= 0) goto label_1;
	}
	INST_ICONST(-1);
	goto label_2;
label_1:;
	{
	if ((longCompare(((jlong)((java_lang_Long *) NULL_CHECK((frame[0].o)))->F_value), ((jlong)((java_lang_Long *) NULL_CHECK((frame[1].o)))->F_value))) <= 0) goto label_3;
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

jint SM_java_lang_Long_compareUnsigned_long_long_R_int(jcontext ctx, jlong param0, jlong param1) {
	jtype frame[10];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/lang/Long:compareUnsigned", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_lang_Long(ctx);
	frame[0].l = param0;
	frame[2].l = param1;
	{
	LINE_NUMBER(423);
	jint temp0 = (jint)SM_java_lang_Long_compare_long_long_R_int(ctx, ((frame[0].l) + (jlong(-9223372036854775807ll))), ((frame[2].l) + (jlong(-9223372036854775807ll))));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jlong SM_java_lang_Long_divideUnsigned_long_long_R_long(jcontext ctx, jlong param0, jlong param1) {
	jtype frame[8];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/lang/Long:divideUnsigned", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_lang_Long(ctx);
	frame[0].l = param0;
	frame[2].l = param1;
	{
	LINE_NUMBER(446);
	if ((longCompare((frame[2].l), (jlong(0)))) >= 0) goto label_1;
	}
	{
	LINE_NUMBER(449);
	jint temp0 = (jint)SM_java_lang_Long_compareUnsigned_long_long_R_int(ctx, (frame[0].l), (frame[2].l));
	if (temp0 >= 0) goto label_3;
	}
	INST_LCONST(0);
	goto label_4;
label_3:;
	INST_LCONST(1);
label_4:;
	popStackFrame(ctx);
	INST_LRETURN();
label_1:;
	{
	LINE_NUMBER(452);
	if ((longCompare((frame[0].l), (jlong(0)))) <= 0) goto label_5;
	}
	{
	LINE_NUMBER(453);
	popStackFrame(ctx);
	return ((frame[0].l) / (frame[2].l));
	}
label_5:;
	{
	LINE_NUMBER(461);
	sp[0].o = (jobject)SM_java_lang_Long_toUnsignedBigInteger_long_R_java_math_BigInteger(ctx, (frame[0].l));
	jlong temp0 = frame[2].l;
	LINE_NUMBER(462);
	sp[1].o = (jobject)SM_java_lang_Long_toUnsignedBigInteger_long_R_java_math_BigInteger(ctx, temp0);
	sp[0].o = (jobject)((func_java_math_BigInteger_divide_java_math_BigInteger_R_java_math_BigInteger) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_math_BigInteger_divide_java_math_BigInteger_R_java_math_BigInteger])(ctx, sp[0].o, sp[1].o);
	jlong temp1 = (jlong)((func_java_math_BigInteger_longValue_R_long) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_math_BigInteger_longValue_R_long])(ctx, sp[0].o);
	LINE_NUMBER(461);
	popStackFrame(ctx);
	return temp1;
	}

	popStackFrame(ctx);
}

jlong SM_java_lang_Long_remainderUnsigned_long_long_R_long(jcontext ctx, jlong param0, jlong param1) {
	jtype frame[8];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/lang/Long:remainderUnsigned", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_lang_Long(ctx);
	frame[0].l = param0;
	frame[2].l = param1;
	{
	LINE_NUMBER(479);
	if ((longCompare((frame[0].l), (jlong(0)))) <= 0) goto label_1;
	}
	{
	if ((longCompare((frame[2].l), (jlong(0)))) <= 0) goto label_1;
	}
	{
	LINE_NUMBER(480);
	popStackFrame(ctx);
	return ((frame[0].l) % (frame[2].l));
	}
label_1:;
	{
	LINE_NUMBER(482);
	jint temp0 = (jint)SM_java_lang_Long_compareUnsigned_long_long_R_int(ctx, (frame[0].l), (frame[2].l));
	if (temp0 >= 0) goto label_3;
	}
	{
	LINE_NUMBER(483);
	popStackFrame(ctx);
	return (frame[0].l);
	}
label_3:;
	{
	LINE_NUMBER(485);
	sp[0].o = (jobject)SM_java_lang_Long_toUnsignedBigInteger_long_R_java_math_BigInteger(ctx, (frame[0].l));
	jlong temp0 = frame[2].l;
	LINE_NUMBER(486);
	sp[1].o = (jobject)SM_java_lang_Long_toUnsignedBigInteger_long_R_java_math_BigInteger(ctx, temp0);
	sp[0].o = (jobject)((func_java_math_BigInteger_remainder_java_math_BigInteger_R_java_math_BigInteger) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_math_BigInteger_remainder_java_math_BigInteger_R_java_math_BigInteger])(ctx, sp[0].o, sp[1].o);
	jlong temp1 = (jlong)((func_java_math_BigInteger_longValue_R_long) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_math_BigInteger_longValue_R_long])(ctx, sp[0].o);
	LINE_NUMBER(485);
	popStackFrame(ctx);
	return temp1;
	}

	popStackFrame(ctx);
}

jobject SM_java_lang_Long_toUnsignedBigInteger_long_R_java_math_BigInteger(jcontext ctx, jlong param0) {
	jtype frame[8];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/lang/Long:toUnsignedBigInteger", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_lang_Long(ctx);
	frame[0].l = param0;
	{
	LINE_NUMBER(495);
	if ((longCompare((frame[0].l), (jlong(0)))) < 0) goto label_1;
	}
	{
	LINE_NUMBER(496);
	sp[0].o = (jobject)SM_java_math_BigInteger_valueOf_long_R_java_math_BigInteger(ctx, (frame[0].l));
	popStackFrame(ctx);
	return sp[0].o;
	}
label_1:;
	{
	LINE_NUMBER(498);
	frame[2].i = (jint((bit_cast<jlong>(bit_cast<uint64_t>((frame[0].l)) >> (32)))));
	LINE_NUMBER(499);
	frame[3].i = (jint((frame[0].l)));
	LINE_NUMBER(502);
	jlong temp0 = (jlong)SM_java_lang_Integer_toUnsignedLong_int_R_long(ctx, (frame[2].i));
	sp[0].o = (jobject)SM_java_math_BigInteger_valueOf_long_R_java_math_BigInteger(ctx, temp0);
	sp[0].o = (jobject)((func_java_math_BigInteger_shiftLeft_int_R_java_math_BigInteger) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_math_BigInteger_shiftLeft_int_R_java_math_BigInteger])(ctx, sp[0].o, (32));
	jint temp1 = frame[3].i;
	LINE_NUMBER(503);
	jlong temp2 = (jlong)SM_java_lang_Integer_toUnsignedLong_int_R_long(ctx, temp1);
	sp[1].o = (jobject)SM_java_math_BigInteger_valueOf_long_R_java_math_BigInteger(ctx, temp2);
	sp[0].o = (jobject)((func_java_math_BigInteger_add_java_math_BigInteger_R_java_math_BigInteger) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_math_BigInteger_add_java_math_BigInteger_R_java_math_BigInteger])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(502);
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jint SM_java_lang_Long_numberOfLeadingZeros_long_R_int(jcontext ctx, jlong param0) {
	jtype frame[8];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/lang/Long:numberOfLeadingZeros", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_lang_Long(ctx);
	frame[0].l = param0;
	{
	LINE_NUMBER(509);
	if ((longCompare((frame[0].l), (jlong(0)))) != 0) goto label_1;
	}
	{
	LINE_NUMBER(510);
	popStackFrame(ctx);
	return (64);
	}
label_1:;
	{
	LINE_NUMBER(511);
	frame[2].i = (jint(1));
	LINE_NUMBER(512);
	frame[3].i = (jint((bit_cast<jlong>(bit_cast<uint64_t>((frame[0].l)) >> (32)))));
	LINE_NUMBER(513);
	if ((frame[3].i) != 0) goto label_5;
	}
	{
	LINE_NUMBER(514);
	INST_IINC(2, 32);
	LINE_NUMBER(515);
	frame[3].i = (jint((frame[0].l)));
	}
label_5:;
	{
	LINE_NUMBER(517);
	if ((bit_cast<jint>(bit_cast<uint32_t>((frame[3].i)) >> (16))) != 0) goto label_8;
	}
	{
	LINE_NUMBER(518);
	INST_IINC(2, 16);
	LINE_NUMBER(519);
	frame[3].i = ((frame[3].i) << (16));
	}
label_8:;
	{
	LINE_NUMBER(521);
	if ((bit_cast<jint>(bit_cast<uint32_t>((frame[3].i)) >> (24))) != 0) goto label_11;
	}
	{
	LINE_NUMBER(522);
	INST_IINC(2, 8);
	LINE_NUMBER(523);
	frame[3].i = ((frame[3].i) << (8));
	}
label_11:;
	{
	LINE_NUMBER(525);
	if ((bit_cast<jint>(bit_cast<uint32_t>((frame[3].i)) >> (28))) != 0) goto label_14;
	}
	{
	LINE_NUMBER(526);
	INST_IINC(2, 4);
	LINE_NUMBER(527);
	frame[3].i = ((frame[3].i) << (jint(4)));
	}
label_14:;
	{
	LINE_NUMBER(529);
	if ((bit_cast<jint>(bit_cast<uint32_t>((frame[3].i)) >> (30))) != 0) goto label_17;
	}
	{
	LINE_NUMBER(530);
	INST_IINC(2, 2);
	LINE_NUMBER(531);
	frame[3].i = ((frame[3].i) << (jint(2)));
	}
label_17:;
	{
	LINE_NUMBER(533);
	frame[2].i = ((frame[2].i) - (bit_cast<jint>(bit_cast<uint32_t>((frame[3].i)) >> (31))));
	LINE_NUMBER(534);
	popStackFrame(ctx);
	return (frame[2].i);
	}

	popStackFrame(ctx);
}

jint SM_java_lang_Long_numberOfTrailingZeros_long_R_int(jcontext ctx, jlong param0) {
	jtype frame[9];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/lang/Long:numberOfTrailingZeros", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_lang_Long(ctx);
	frame[0].l = param0;
	{
	LINE_NUMBER(539);
	if ((longCompare((frame[0].l), (jlong(0)))) != 0) goto label_1;
	}
	{
	LINE_NUMBER(540);
	popStackFrame(ctx);
	return (64);
	}
label_1:;
	{
	LINE_NUMBER(541);
	frame[4].i = (63);
	LINE_NUMBER(542);
	frame[3].i = (jint((frame[0].l)));
	LINE_NUMBER(543);
	if ((frame[3].i) == 0) goto label_5;
	}
	{
	LINE_NUMBER(544);
	frame[4].i = ((frame[4].i) - (32));
	LINE_NUMBER(545);
	frame[2].i = (frame[3].i);
	goto label_9;
	}
label_5:;
	{
	LINE_NUMBER(547);
	frame[2].i = (jint((bit_cast<jlong>(bit_cast<uint64_t>((frame[0].l)) >> (32)))));
	}
label_9:;
	{
	LINE_NUMBER(548);
	frame[3].i = ((frame[2].i) << (16));
	LINE_NUMBER(549);
	if ((frame[3].i) == 0) goto label_11;
	}
	{
	LINE_NUMBER(550);
	frame[4].i = ((frame[4].i) - (16));
	LINE_NUMBER(551);
	frame[2].i = (frame[3].i);
	}
label_11:;
	{
	LINE_NUMBER(553);
	frame[3].i = ((frame[2].i) << (8));
	LINE_NUMBER(554);
	if ((frame[3].i) == 0) goto label_15;
	}
	{
	LINE_NUMBER(555);
	frame[4].i = ((frame[4].i) - (8));
	LINE_NUMBER(556);
	frame[2].i = (frame[3].i);
	}
label_15:;
	{
	LINE_NUMBER(558);
	frame[3].i = ((frame[2].i) << (jint(4)));
	LINE_NUMBER(559);
	if ((frame[3].i) == 0) goto label_19;
	}
	{
	LINE_NUMBER(560);
	frame[4].i = ((frame[4].i) - (jint(4)));
	LINE_NUMBER(561);
	frame[2].i = (frame[3].i);
	}
label_19:;
	{
	LINE_NUMBER(563);
	frame[3].i = ((frame[2].i) << (jint(2)));
	LINE_NUMBER(564);
	if ((frame[3].i) == 0) goto label_23;
	}
	{
	LINE_NUMBER(565);
	frame[4].i = ((frame[4].i) - (jint(2)));
	LINE_NUMBER(566);
	frame[2].i = (frame[3].i);
	}
label_23:;
	{
	LINE_NUMBER(568);
	popStackFrame(ctx);
	return ((frame[4].i) - (bit_cast<jint>(bit_cast<uint32_t>(((frame[2].i) << (jint(1)))) >> (31))));
	}

	popStackFrame(ctx);
}

jlong SM_java_lang_Long_sum_long_long_R_long(jcontext ctx, jlong param0, jlong param1) {
	jtype frame[8];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/lang/Long:sum", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_lang_Long(ctx);
	frame[0].l = param0;
	frame[2].l = param1;
	{
	LINE_NUMBER(572);
	popStackFrame(ctx);
	return ((frame[0].l) + (frame[2].l));
	}

	popStackFrame(ctx);
}

jlong SM_java_lang_Long_max_long_long_R_long(jcontext ctx, jlong param0, jlong param1) {
	jtype frame[8];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/lang/Long:max", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_lang_Long(ctx);
	frame[0].l = param0;
	frame[2].l = param1;
	{
	LINE_NUMBER(576);
	jlong temp0 = (jlong)SM_java_lang_Math_max_long_long_R_long(ctx, (frame[0].l), (frame[2].l));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jlong SM_java_lang_Long_min_long_long_R_long(jcontext ctx, jlong param0, jlong param1) {
	jtype frame[8];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/lang/Long:min", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_lang_Long(ctx);
	frame[0].l = param0;
	frame[2].l = param1;
	{
	LINE_NUMBER(580);
	jlong temp0 = (jlong)SM_java_lang_Math_min_long_long_R_long(ctx, (frame[0].l), (frame[2].l));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jint M_java_lang_Long_compareTo_java_lang_Object_R_int(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/lang/Long:compareTo", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(34);
	jint temp0 = (jint)((func_java_lang_Long_compareTo_java_lang_Long_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_lang_Long_compareTo_java_lang_Long_R_int])(ctx, (frame[0].o), (checkCast(ctx, &class_java_lang_Long, (frame[1].o))));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

void clinit_java_lang_Long(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	clinit_java_lang_Number(ctx);
	SF_java_lang_Long_MAX_VALUE = jlong(9223372036854775807ll);
	SF_java_lang_Long_MIN_VALUE = jlong(-9223372036854775807ll);
	SF_java_lang_Long_SIZE = jint(64);
	jtype frame[1];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/lang/Long:<clinit>", 1 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_lang_Long(ctx);
	{
	LINE_NUMBER(36);
	sp[0].o = (jobject)SM_java_nio_NativeUtils_getPrimitive_java_lang_String_R_java_lang_Class(ctx, (((jobject) createStringLiteral(ctx, u8"J"_j))));
	clinit_java_lang_Long(ctx);
	SF_java_lang_Long_TYPE = sp[0].o;
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void *vtable_java_lang_Long[] {
	(void *) M_java_lang_Long_hashCode_R_int,
	(void *) M_java_lang_Long_equals_java_lang_Object_R_boolean,
	(void *) M_java_lang_Object_clone_R_java_lang_Object,
	(void *) M_java_lang_Object_getClass_R_java_lang_Class,
	(void *) M_java_lang_Long_toString_R_java_lang_String,
	(void *) M_java_lang_Object_finalize,
	(void *) M_java_lang_Object_notify,
	(void *) M_java_lang_Object_notifyAll,
	(void *) M_java_lang_Object_wait,
	(void *) M_java_lang_Object_wait_long,
	(void *) M_java_lang_Object_wait_long_int,
	(void *) M_java_lang_Long_intValue_R_int,
	(void *) M_java_lang_Long_byteValue_R_byte,
	(void *) M_java_lang_Long_longValue_R_long,
	(void *) M_java_lang_Long_floatValue_R_float,
	(void *) M_java_lang_Long_doubleValue_R_double,
	(void *) M_java_lang_Number_shortValue_R_short,
	(void *) M_java_lang_Long_compareTo_java_lang_Object_R_int,
	(void *) M_java_lang_Long_compareTo_java_lang_Long_R_int,
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
	{ "compareTo", "(Ljava/lang/Long;)I" },
};

static jclass interfaces[] { &class_java_lang_Comparable, };

static FieldMetadata fields[] {
	{ "TYPE", &class_java_lang_Class, (intptr_t) &SF_java_lang_Long_TYPE, "Ljava/lang/Class;", 25 },
	{ "MAX_VALUE", &class_long, (intptr_t) &SF_java_lang_Long_MAX_VALUE, "J", 25 },
	{ "MIN_VALUE", &class_long, (intptr_t) &SF_java_lang_Long_MIN_VALUE, "J", 25 },
	{ "SIZE", &class_int, (intptr_t) &SF_java_lang_Long_SIZE, "I", 25 },
	{ "value", &class_long, offsetof(java_lang_Long, F_value), "J", 2 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_java_lang_Long_long, 0, "(J)V", 1 },
	{ "<init>", (intptr_t) init_java_lang_Long_java_lang_String, 0, "(Ljava/lang/String;)V", 1 },
	{ "doubleValue", (intptr_t) M_java_lang_Long_doubleValue_R_double, VTABLE_java_lang_Long_doubleValue_R_double, "()D", 1 },
	{ "equals", (intptr_t) M_java_lang_Long_equals_java_lang_Object_R_boolean, VTABLE_java_lang_Long_equals_java_lang_Object_R_boolean, "(Ljava/lang/Object;)Z", 1 },
	{ "floatValue", (intptr_t) M_java_lang_Long_floatValue_R_float, VTABLE_java_lang_Long_floatValue_R_float, "()F", 1 },
	{ "signum", (intptr_t) SM_java_lang_Long_signum_long_R_int, 0, "(J)I", 9 },
	{ "hashCode", (intptr_t) M_java_lang_Long_hashCode_R_int, VTABLE_java_lang_Long_hashCode_R_int, "()I", 1 },
	{ "hashCode", (intptr_t) SM_java_lang_Long_hashCode_long_R_int, 0, "(J)I", 9 },
	{ "longValue", (intptr_t) M_java_lang_Long_longValue_R_long, VTABLE_java_lang_Long_longValue_R_long, "()J", 1 },
	{ "intValue", (intptr_t) M_java_lang_Long_intValue_R_int, VTABLE_java_lang_Long_intValue_R_int, "()I", 1 },
	{ "byteValue", (intptr_t) M_java_lang_Long_byteValue_R_byte, VTABLE_java_lang_Long_byteValue_R_byte, "()B", 1 },
	{ "rotateLeft", (intptr_t) SM_java_lang_Long_rotateLeft_long_int_R_long, 0, "(JI)J", 9 },
	{ "rotateRight", (intptr_t) SM_java_lang_Long_rotateRight_long_int_R_long, 0, "(JI)J", 9 },
	{ "reverse", (intptr_t) SM_java_lang_Long_reverse_long_R_long, 0, "(J)J", 9 },
	{ "reverseBytes", (intptr_t) SM_java_lang_Long_reverseBytes_long_R_long, 0, "(J)J", 9 },
	{ "parseLong", (intptr_t) SM_java_lang_Long_parseLong_java_lang_String_R_long, 0, "(Ljava/lang/String;)J", 9 },
	{ "parseLong", (intptr_t) SM_java_lang_Long_parseLong_java_lang_String_int_R_long, 0, "(Ljava/lang/String;I)J", 9 },
	{ "parse", (intptr_t) SM_java_lang_Long_parse_java_lang_String_int_int_boolean_R_long, 0, "(Ljava/lang/String;IIZ)J", 10 },
	{ "invalidLong", (intptr_t) SM_java_lang_Long_invalidLong_java_lang_String_R_java_lang_NumberFormatException, 0, "(Ljava/lang/String;)Ljava/lang/NumberFormatException;", 10 },
	{ "toString", (intptr_t) M_java_lang_Long_toString_R_java_lang_String, VTABLE_java_lang_Long_toString_R_java_lang_String, "()Ljava/lang/String;", 1 },
	{ "toString", (intptr_t) SM_java_lang_Long_toString_long_R_java_lang_String, 0, "(J)Ljava/lang/String;", 9 },
	{ "toString", (intptr_t) SM_java_lang_Long_toString_long_int_R_java_lang_String, 0, "(JI)Ljava/lang/String;", 265 },
	{ "toHexString", (intptr_t) SM_java_lang_Long_toHexString_long_R_java_lang_String, 0, "(J)Ljava/lang/String;", 9 },
	{ "toBinaryString", (intptr_t) SM_java_lang_Long_toBinaryString_long_R_java_lang_String, 0, "(J)Ljava/lang/String;", 9 },
	{ "getLong", (intptr_t) SM_java_lang_Long_getLong_java_lang_String_R_java_lang_Long, 0, "(Ljava/lang/String;)Ljava/lang/Long;", 9 },
	{ "getLong", (intptr_t) SM_java_lang_Long_getLong_java_lang_String_long_R_java_lang_Long, 0, "(Ljava/lang/String;J)Ljava/lang/Long;", 9 },
	{ "getLong", (intptr_t) SM_java_lang_Long_getLong_java_lang_String_java_lang_Long_R_java_lang_Long, 0, "(Ljava/lang/String;Ljava/lang/Long;)Ljava/lang/Long;", 9 },
	{ "toUnsignedString0", (intptr_t) SM_java_lang_Long_toUnsignedString0_long_int_R_java_lang_String, 0, "(JI)Ljava/lang/String;", 8 },
	{ "bitCount", (intptr_t) SM_java_lang_Long_bitCount_long_R_int, 0, "(J)I", 9 },
	{ "formatUnsignedLong", (intptr_t) SM_java_lang_Long_formatUnsignedLong_long_int_Array1_char_int_int_R_int, 0, "(JI[CII)I", 8 },
	{ "valueOf", (intptr_t) SM_java_lang_Long_valueOf_long_R_java_lang_Long, 0, "(J)Ljava/lang/Long;", 9 },
	{ "valueOf", (intptr_t) SM_java_lang_Long_valueOf_java_lang_String_R_java_lang_Long, 0, "(Ljava/lang/String;)Ljava/lang/Long;", 9 },
	{ "compare", (intptr_t) SM_java_lang_Long_compare_long_long_R_int, 0, "(JJ)I", 9 },
	{ "compareTo", (intptr_t) M_java_lang_Long_compareTo_java_lang_Long_R_int, VTABLE_java_lang_Long_compareTo_java_lang_Long_R_int, "(Ljava/lang/Long;)I", 1 },
	{ "compareUnsigned", (intptr_t) SM_java_lang_Long_compareUnsigned_long_long_R_int, 0, "(JJ)I", 9 },
	{ "divideUnsigned", (intptr_t) SM_java_lang_Long_divideUnsigned_long_long_R_long, 0, "(JJ)J", 9 },
	{ "remainderUnsigned", (intptr_t) SM_java_lang_Long_remainderUnsigned_long_long_R_long, 0, "(JJ)J", 9 },
	{ "toUnsignedBigInteger", (intptr_t) SM_java_lang_Long_toUnsignedBigInteger_long_R_java_math_BigInteger, 0, "(J)Ljava/math/BigInteger;", 10 },
	{ "numberOfLeadingZeros", (intptr_t) SM_java_lang_Long_numberOfLeadingZeros_long_R_int, 0, "(J)I", 9 },
	{ "numberOfTrailingZeros", (intptr_t) SM_java_lang_Long_numberOfTrailingZeros_long_R_int, 0, "(J)I", 9 },
	{ "sum", (intptr_t) SM_java_lang_Long_sum_long_long_R_long, 0, "(JJ)J", 9 },
	{ "max", (intptr_t) SM_java_lang_Long_max_long_long_R_long, 0, "(JJ)J", 9 },
	{ "min", (intptr_t) SM_java_lang_Long_min_long_long_R_long, 0, "(JJ)J", 9 },
	{ "compareTo", (intptr_t) M_java_lang_Long_compareTo_java_lang_Object_R_int, VTABLE_java_lang_Long_compareTo_java_lang_Object_R_int, "(Ljava/lang/Object;)I", 4161 },
	{ "<clinit>", (intptr_t) clinit_java_lang_Long, 0, "()V", 8 },
};

Class class_java_lang_Long{
		.nativeName = (intptr_t) "java/lang/Long",
		.parentClass = (intptr_t) &class_java_lang_Number,
		.size = sizeof(java_lang_Long),
		.classVtable = (intptr_t) vtable_java_lang_Long,
		.staticInitializer = (intptr_t) clinit_java_lang_Long,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_java_lang_Long,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 49,
		.interfaceCount = 1,
		.nativeInterfaces = (intptr_t) interfaces,
		.fieldCount = 5,
		.nativeFields = (intptr_t) fields,
		.methodCount = 45,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 19,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_java_lang_Long = registerClass(&class_java_lang_Long);

}
