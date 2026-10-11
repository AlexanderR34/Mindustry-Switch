#include "java/lang/Integer.h"
#include "java/lang/Math.h"
#include "java/lang/Integer.h"
#include "java/lang/StringBuilder.h"
#include "java/lang/Number.h"
#include "java/lang/Comparable.h"
#include "java/lang/IllegalArgumentException.h"
#include "java/nio/NativeUtils.h"
#include "java/lang/Object.h"
#include "java/lang/String.h"
#include "java/lang/NumberFormatException.h"
#include "java/lang/Character.h"
#include "java/lang/NullPointerException.h"
#include "java/lang/Class.h"
#include "java/lang/System.h"

extern "C" {

jobject SF_java_lang_Integer_TYPE;
jobject SF_java_lang_Integer_DIGITS;
jint SF_java_lang_Integer_MAX_VALUE;
jint SF_java_lang_Integer_MIN_VALUE;
jint SF_java_lang_Integer_SIZE;

void mark_java_lang_Integer(jobject object, jint mark, jint depth) {
	if (!object) {
		if (SF_java_lang_Integer_TYPE)
			((gc_mark_ptr) ((jclass) ((jobject) SF_java_lang_Integer_TYPE)->clazz)->markFunction)((jobject) SF_java_lang_Integer_TYPE, mark, depth + 1);
		if (SF_java_lang_Integer_DIGITS)
			((gc_mark_ptr) ((jclass) ((jobject) SF_java_lang_Integer_DIGITS)->clazz)->markFunction)((jobject) SF_java_lang_Integer_DIGITS, mark, depth + 1);
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
	auto self = (java_lang_Integer *) object;
}

void init_java_lang_Integer_int(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/lang/Integer:<init>", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_lang_Integer(ctx);
	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(59);
	init_java_lang_Number(ctx, (frame[0].o));
	LINE_NUMBER(60);
	((java_lang_Integer *) NULL_CHECK((frame[0].o)))->F_value = (frame[1].i);
	LINE_NUMBER(61);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_java_lang_Integer_java_lang_String(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/lang/Integer:<init>", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_lang_Integer(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(63);
	init_java_lang_Number(ctx, (frame[0].o));
	LINE_NUMBER(64);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)SM_java_lang_Integer_valueOf_java_lang_String_R_java_lang_Integer(ctx, (frame[1].o));
	jint temp0 = (jint)((func_java_lang_Integer_intValue_R_int) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_Integer_intValue_R_int])(ctx, sp[1].o);
	((java_lang_Integer *) NULL_CHECK(sp[0].o))->F_value = temp0;
	LINE_NUMBER(65);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jbyte M_java_lang_Integer_byteValue_R_byte(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/lang/Integer:byteValue", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(71);
	popStackFrame(ctx);
	return (jbyte(((jint)((java_lang_Integer *) NULL_CHECK((frame[0].o)))->F_value)));
	}

	popStackFrame(ctx);
}

jdouble M_java_lang_Integer_doubleValue_R_double(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/lang/Integer:doubleValue", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(78);
	popStackFrame(ctx);
	return (jdouble(((jint)((java_lang_Integer *) NULL_CHECK((frame[0].o)))->F_value)));
	}

	popStackFrame(ctx);
}

jbool M_java_lang_Integer_equals_java_lang_Object_R_boolean(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/lang/Integer:equals", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(85);
	if ((frame[1].o) == nullptr) goto label_1;
	}
	{
	sp[0].o = (jobject)((func_java_lang_Object_getClass_R_java_lang_Class) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_Object_getClass_R_java_lang_Class])(ctx, (frame[1].o));
	sp[1].o = (jobject)((func_java_lang_Object_getClass_R_java_lang_Class) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_lang_Object_getClass_R_java_lang_Class])(ctx, (frame[0].o));
	if (sp[0].o != sp[1].o) goto label_1;
	}
	{
	if (((jint)((java_lang_Integer *) NULL_CHECK((checkCast(ctx, &class_java_lang_Integer, (frame[1].o)))))->F_value) != ((jint)((java_lang_Integer *) NULL_CHECK((frame[0].o)))->F_value)) goto label_1;
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

jfloat M_java_lang_Integer_floatValue_R_float(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/lang/Integer:floatValue", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(92);
	popStackFrame(ctx);
	return (jfloat(((jint)((java_lang_Integer *) NULL_CHECK((frame[0].o)))->F_value)));
	}

	popStackFrame(ctx);
}

jint M_java_lang_Integer_hashCode_R_int(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/lang/Integer:hashCode", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(99);
	popStackFrame(ctx);
	return ((jint)((java_lang_Integer *) NULL_CHECK((frame[0].o)))->F_value);
	}

	popStackFrame(ctx);
}

jint M_java_lang_Integer_intValue_R_int(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/lang/Integer:intValue", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(106);
	popStackFrame(ctx);
	return ((jint)((java_lang_Integer *) NULL_CHECK((frame[0].o)))->F_value);
	}

	popStackFrame(ctx);
}

jlong M_java_lang_Integer_longValue_R_long(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/lang/Integer:longValue", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(113);
	popStackFrame(ctx);
	return (jlong(((jint)((java_lang_Integer *) NULL_CHECK((frame[0].o)))->F_value)));
	}

	popStackFrame(ctx);
}

jint SM_java_lang_Integer_rotateLeft_int_int_R_int(jcontext ctx, jint param0, jint param1) {
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/lang/Integer:rotateLeft", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_lang_Integer(ctx);
	frame[0].i = param0;
	frame[1].i = param1;
	{
	LINE_NUMBER(117);
	popStackFrame(ctx);
	return (((frame[0].i) << (frame[1].i)) | (bit_cast<jint>(bit_cast<uint32_t>((frame[0].i)) >> (-(frame[1].i)))));
	}

	popStackFrame(ctx);
}

jint SM_java_lang_Integer_rotateRight_int_int_R_int(jcontext ctx, jint param0, jint param1) {
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/lang/Integer:rotateRight", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_lang_Integer(ctx);
	frame[0].i = param0;
	frame[1].i = param1;
	{
	LINE_NUMBER(121);
	popStackFrame(ctx);
	return ((bit_cast<jint>(bit_cast<uint32_t>((frame[0].i)) >> (frame[1].i))) | ((frame[0].i) << (-(frame[1].i))));
	}

	popStackFrame(ctx);
}

jint SM_java_lang_Integer_reverse_int_R_int(jcontext ctx, jint param0) {
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/lang/Integer:reverse", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_lang_Integer(ctx);
	frame[0].i = param0;
	{
	LINE_NUMBER(125);
	frame[0].i = ((((frame[0].i) & (jint(1431655765))) << (jint(1))) | ((bit_cast<jint>(bit_cast<uint32_t>((frame[0].i)) >> (jint(1)))) & (jint(1431655765))));
	LINE_NUMBER(126);
	frame[0].i = ((((frame[0].i) & (jint(858993459))) << (jint(2))) | ((bit_cast<jint>(bit_cast<uint32_t>((frame[0].i)) >> (jint(2)))) & (jint(858993459))));
	LINE_NUMBER(127);
	frame[0].i = ((((frame[0].i) & (jint(252645135))) << (jint(4))) | ((bit_cast<jint>(bit_cast<uint32_t>((frame[0].i)) >> (jint(4)))) & (jint(252645135))));
	LINE_NUMBER(128);
	jint temp0 = (jint)SM_java_lang_Integer_reverseBytes_int_R_int(ctx, (frame[0].i));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jint SM_java_lang_Integer_reverseBytes_int_R_int(jcontext ctx, jint param0) {
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/lang/Integer:reverseBytes", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_lang_Integer(ctx);
	frame[0].i = param0;
	{
	LINE_NUMBER(132);
	popStackFrame(ctx);
	return ((((bit_cast<jint>(bit_cast<uint32_t>((frame[0].i)) >> (24))) | (((frame[0].i) >> (8)) & (jint(65280)))) | (((frame[0].i) << (8)) & (jint(16711680)))) | ((frame[0].i) << (24)));
	}

	popStackFrame(ctx);
}

jint SM_java_lang_Integer_compareUnsigned_int_int_R_int(jcontext ctx, jint param0, jint param1) {
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/lang/Integer:compareUnsigned", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_lang_Integer(ctx);
	frame[0].i = param0;
	frame[1].i = param1;
	{
	LINE_NUMBER(148);
	jint temp0 = (jint)SM_java_lang_Integer_compare_int_int_R_int(ctx, ((frame[0].i) + (bit_cast<jint>(0x80000000))), ((frame[1].i) + (bit_cast<jint>(0x80000000))));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jlong SM_java_lang_Integer_toUnsignedLong_int_R_long(jcontext ctx, jint param0) {
	jtype frame[5];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/lang/Integer:toUnsignedLong", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_lang_Integer(ctx);
	frame[0].i = param0;
	{
	LINE_NUMBER(169);
	popStackFrame(ctx);
	return ((jlong((frame[0].i))) & (jlong(4294967295ll)));
	}

	popStackFrame(ctx);
}

jint SM_java_lang_Integer_divideUnsigned_int_int_R_int(jcontext ctx, jint param0, jint param1) {
	jtype frame[6];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/lang/Integer:divideUnsigned", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_lang_Integer(ctx);
	frame[0].i = param0;
	frame[1].i = param1;
	{
	LINE_NUMBER(192);
	jlong temp0 = (jlong)SM_java_lang_Integer_toUnsignedLong_int_R_long(ctx, (frame[0].i));
	jlong temp1 = (jlong)SM_java_lang_Integer_toUnsignedLong_int_R_long(ctx, (frame[1].i));
	popStackFrame(ctx);
	return (jint((temp0 / temp1)));
	}

	popStackFrame(ctx);
}

jint SM_java_lang_Integer_remainderUnsigned_int_int_R_int(jcontext ctx, jint param0, jint param1) {
	jtype frame[6];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/lang/Integer:remainderUnsigned", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_lang_Integer(ctx);
	frame[0].i = param0;
	frame[1].i = param1;
	{
	LINE_NUMBER(209);
	jlong temp0 = (jlong)SM_java_lang_Integer_toUnsignedLong_int_R_long(ctx, (frame[0].i));
	jlong temp1 = (jlong)SM_java_lang_Integer_toUnsignedLong_int_R_long(ctx, (frame[1].i));
	popStackFrame(ctx);
	return (jint((temp0 % temp1)));
	}

	popStackFrame(ctx);
}

jint SM_java_lang_Integer_bitCount_int_R_int(jcontext ctx, jint param0) {
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/lang/Integer:bitCount", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_lang_Integer(ctx);
	frame[0].i = param0;
	{
	LINE_NUMBER(224);
	frame[0].i = ((frame[0].i) - ((bit_cast<jint>(bit_cast<uint32_t>((frame[0].i)) >> (jint(1)))) & (jint(1431655765))));
	LINE_NUMBER(225);
	frame[0].i = (((frame[0].i) & (jint(858993459))) + ((bit_cast<jint>(bit_cast<uint32_t>((frame[0].i)) >> (jint(2)))) & (jint(858993459))));
	LINE_NUMBER(226);
	frame[0].i = (((frame[0].i) + (bit_cast<jint>(bit_cast<uint32_t>((frame[0].i)) >> (jint(4))))) & (jint(252645135)));
	LINE_NUMBER(227);
	frame[0].i = ((frame[0].i) + (bit_cast<jint>(bit_cast<uint32_t>((frame[0].i)) >> (8))));
	LINE_NUMBER(228);
	frame[0].i = ((frame[0].i) + (bit_cast<jint>(bit_cast<uint32_t>((frame[0].i)) >> (16))));
	LINE_NUMBER(229);
	popStackFrame(ctx);
	return ((frame[0].i) & (63));
	}

	popStackFrame(ctx);
}

jint SM_java_lang_Integer_lowestOneBit_int_R_int(jcontext ctx, jint param0) {
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/lang/Integer:lowestOneBit", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_lang_Integer(ctx);
	frame[0].i = param0;
	{
	LINE_NUMBER(233);
	popStackFrame(ctx);
	return ((frame[0].i) & (-(frame[0].i)));
	}

	popStackFrame(ctx);
}

jint SM_java_lang_Integer_highestOneBit_int_R_int(jcontext ctx, jint param0) {
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/lang/Integer:highestOneBit", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_lang_Integer(ctx);
	frame[0].i = param0;
	{
	LINE_NUMBER(237);
	jint temp0 = frame[0].i;
	jint temp1 = bit_cast<jint>(0x80000000);
	jint temp2 = (jint)SM_java_lang_Integer_numberOfLeadingZeros_int_R_int(ctx, (frame[0].i));
	popStackFrame(ctx);
	return (temp0 & (bit_cast<jint>(bit_cast<uint32_t>(temp1) >> temp2)));
	}

	popStackFrame(ctx);
}

jint SM_java_lang_Integer_parseInt_java_lang_String_R_int(jcontext ctx, jobject param0) {
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/lang/Integer:parseInt", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_lang_Integer(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(246);
	jint temp0 = (jint)SM_java_lang_Integer_parseInt_java_lang_String_int_R_int(ctx, (frame[0].o), (10));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jint SM_java_lang_Integer_parseInt_java_lang_String_int_R_int(jcontext ctx, jobject param0, jint param1) {
	jtype frame[10];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/lang/Integer:parseInt", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_lang_Integer(ctx);
	frame[0].o = param0;
	frame[1].i = param1;
	{
	LINE_NUMBER(258);
	if ((frame[1].i) < (jint(2))) goto label_1;
	}
	{
	if ((frame[1].i) <= (36)) goto label_2;
	}
label_1:;
	{
	LINE_NUMBER(259);
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
	LINE_NUMBER(261);
	if ((frame[0].o) != nullptr) goto label_3;
	}
	{
	LINE_NUMBER(262);
	sp[0].o = (jobject)SM_java_lang_Integer_invalidInt_java_lang_String_R_java_lang_NumberFormatException(ctx, (frame[0].o));
	throwException(ctx, sp[0].o);	}
label_3:;
	{
	LINE_NUMBER(264);
	jint temp0 = (jint)((func_java_lang_String_length_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_lang_String_length_R_int])(ctx, (frame[0].o));
	frame[2].i = temp0;
	frame[3].i = (jint(0));
	LINE_NUMBER(265);
	if ((frame[2].i) != 0) goto label_7;
	}
	{
	LINE_NUMBER(266);
	sp[0].o = (jobject)SM_java_lang_Integer_invalidInt_java_lang_String_R_java_lang_NumberFormatException(ctx, (frame[0].o));
	throwException(ctx, sp[0].o);	}
label_7:;
	{
	LINE_NUMBER(268);
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
	LINE_NUMBER(269);
	if ((frame[4].i) == 0) goto label_12;
	}
	{
	INST_IINC(3, 1);
	if ((frame[3].i) != (frame[2].i)) goto label_12;
	}
	{
	LINE_NUMBER(270);
	sp[0].o = (jobject)SM_java_lang_Integer_invalidInt_java_lang_String_R_java_lang_NumberFormatException(ctx, (frame[0].o));
	throwException(ctx, sp[0].o);	}
label_12:;
	{
	LINE_NUMBER(272);
	jint temp0 = (jint)((func_java_lang_String_charAt_int_R_char) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_lang_String_charAt_int_R_char])(ctx, (frame[0].o), (frame[3].i));
	if (temp0 != (43)) goto label_14;
	}
	INST_ICONST(1);
	goto label_15;
label_14:;
	INST_ICONST(0);
label_15:;
	{
	sp -= 1;
	frame[5].i = sp[0].i;
	LINE_NUMBER(273);
	if ((frame[5].i) == 0) goto label_17;
	}
	{
	INST_IINC(3, 1);
	if ((frame[3].i) != (frame[2].i)) goto label_17;
	}
	{
	LINE_NUMBER(274);
	sp[0].o = (jobject)SM_java_lang_Integer_invalidInt_java_lang_String_R_java_lang_NumberFormatException(ctx, (frame[0].o));
	throwException(ctx, sp[0].o);	}
label_17:;
	{
	LINE_NUMBER(277);
	jint temp0 = (jint)SM_java_lang_Integer_parse_java_lang_String_int_int_boolean_R_int(ctx, (frame[0].o), (frame[3].i), (frame[1].i), (frame[4].i));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jint SM_java_lang_Integer_parse_java_lang_String_int_int_boolean_R_int(jcontext ctx, jobject param0, jint param1, jint param2, jbool param3) {
	jtype frame[11];
	auto stack = &frame[9];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/lang/Integer:parse", 11 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_lang_Integer(ctx);
	frame[0].o = param0;
	frame[1].i = param1;
	frame[2].i = param2;
	frame[3].i = param3;
	{
	LINE_NUMBER(281);
	frame[4].i = ((bit_cast<jint>(0x80000000)) / (frame[2].i));
	LINE_NUMBER(282);
	frame[5].i = (jint(0));
	jint temp0 = (jint)((func_java_lang_String_length_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_lang_String_length_R_int])(ctx, (frame[0].o));
	frame[6].i = temp0;
	}
label_3:;
	{
	LINE_NUMBER(283);
	if ((frame[1].i) >= (frame[6].i)) goto label_4;
	}
	{
	LINE_NUMBER(284);
	sp[0].o = frame[0].o;
	jint temp0 = frame[1].i;
	INST_IINC(1, 1);
	jint temp1 = (jint)((func_java_lang_String_charAt_int_R_char) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_String_charAt_int_R_char])(ctx, sp[0].o, temp0);
	jint temp2 = (jint)SM_java_lang_Character_digit_char_int_R_int(ctx, temp1, (frame[2].i));
	frame[7].i = temp2;
	LINE_NUMBER(285);
	if ((frame[7].i) != (jint(-1))) goto label_7;
	}
	{
	LINE_NUMBER(286);
	sp[0].o = (jobject)SM_java_lang_Integer_invalidInt_java_lang_String_R_java_lang_NumberFormatException(ctx, (frame[0].o));
	throwException(ctx, sp[0].o);	}
label_7:;
	{
	LINE_NUMBER(288);
	if ((frame[4].i) <= (frame[5].i)) goto label_9;
	}
	{
	LINE_NUMBER(289);
	sp[0].o = (jobject)SM_java_lang_Integer_invalidInt_java_lang_String_R_java_lang_NumberFormatException(ctx, (frame[0].o));
	throwException(ctx, sp[0].o);	}
label_9:;
	{
	LINE_NUMBER(291);
	frame[8].i = (((frame[5].i) * (frame[2].i)) - (frame[7].i));
	LINE_NUMBER(292);
	if ((frame[8].i) <= (frame[5].i)) goto label_12;
	}
	{
	LINE_NUMBER(293);
	sp[0].o = (jobject)SM_java_lang_Integer_invalidInt_java_lang_String_R_java_lang_NumberFormatException(ctx, (frame[0].o));
	throwException(ctx, sp[0].o);	}
label_12:;
	{
	LINE_NUMBER(295);
	frame[5].i = (frame[8].i);
	LINE_NUMBER(296);
	goto label_3;
	}
label_4:;
	{
	LINE_NUMBER(297);
	if ((frame[3].i) != 0) goto label_15;
	}
	{
	LINE_NUMBER(298);
	frame[5].i = (-(frame[5].i));
	LINE_NUMBER(299);
	if ((frame[5].i) >= 0) goto label_15;
	}
	{
	LINE_NUMBER(300);
	sp[0].o = (jobject)SM_java_lang_Integer_invalidInt_java_lang_String_R_java_lang_NumberFormatException(ctx, (frame[0].o));
	throwException(ctx, sp[0].o);	}
label_15:;
	{
	LINE_NUMBER(303);
	popStackFrame(ctx);
	return (frame[5].i);
	}

	popStackFrame(ctx);
}

jobject SM_java_lang_Integer_getInteger_java_lang_String_R_java_lang_Integer(jcontext ctx, jobject param0) {
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/lang/Integer:getInteger", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_lang_Integer(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(307);
	sp[0].o = (jobject)SM_java_lang_Integer_getInteger_java_lang_String_java_lang_Integer_R_java_lang_Integer(ctx, (frame[0].o), (checkCast(ctx, &class_java_lang_Integer, (jobject(nullptr)))));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject SM_java_lang_Integer_getInteger_java_lang_String_int_R_java_lang_Integer(jcontext ctx, jobject param0, jint param1) {
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/lang/Integer:getInteger", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_lang_Integer(ctx);
	frame[0].o = param0;
	frame[1].i = param1;
	{
	LINE_NUMBER(311);
	sp[0].o = (jobject)SM_java_lang_Integer_getInteger_java_lang_String_java_lang_Integer_R_java_lang_Integer(ctx, (frame[0].o), (checkCast(ctx, &class_java_lang_Integer, (jobject(nullptr)))));
	frame[2].o = sp[0].o;
	LINE_NUMBER(312);
	if ((frame[2].o) != nullptr) goto label_2;
	}
	INST_ILOAD(1);
	goto label_3;
label_2:;
	INST_ALOAD(2);
	POP_N(1); // Pop method args
	sp->i = (jint)((func_java_lang_Integer_intValue_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_Integer_intValue_R_int])(ctx, sp[0].o);
	sp++;
label_3:;
	POP_N(1); // Pop method args
	sp->o = (jobject)SM_java_lang_Integer_valueOf_int_R_java_lang_Integer(ctx, sp[0].i);
	sp++;
	popStackFrame(ctx);
	INST_ARETURN();

	popStackFrame(ctx);
}

jobject SM_java_lang_Integer_getInteger_java_lang_String_java_lang_Integer_R_java_lang_Integer(jcontext ctx, jobject param0, jobject param1) {
	jtype frame[5];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/lang/Integer:getInteger", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_lang_Integer(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	{
	LINE_NUMBER(316);
	frame[2].o = (jobject(nullptr));
	}
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_NullPointerException))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
label_4: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_IllegalArgumentException))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 2); goto label_2; }
	}
	{
	LINE_NUMBER(319);
	sp[0].o = (jobject)SM_java_lang_System_getProperty_java_lang_String_R_java_lang_String(ctx, (frame[0].o));
	frame[2].o = sp[0].o;
	}
	popExceptionFrame(frameRef);
	popExceptionFrame(frameRef);
	LINE_NUMBER(321);
	goto label_10;
label_2:;
	LINE_NUMBER(320);
	INST_ASTORE(3);
label_10:;
	{
	LINE_NUMBER(323);
	if ((frame[2].o) == nullptr) goto label_11;
	}
label_8: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_NumberFormatException))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_7; }
	}
	{
	LINE_NUMBER(325);
	jint temp0 = (jint)SM_java_lang_Integer_parseInt_java_lang_String_R_int(ctx, (frame[2].o));
	sp[0].o = (jobject)SM_java_lang_Integer_valueOf_int_R_java_lang_Integer(ctx, temp0);
	sp += 1;
	}
	popExceptionFrame(frameRef);
	popStackFrame(ctx);
	INST_ARETURN();
label_7:;
	LINE_NUMBER(326);
	INST_ASTORE(3);
label_11:;
	{
	LINE_NUMBER(330);
	popStackFrame(ctx);
	return (frame[1].o);
	}

	popStackFrame(ctx);
}

jobject SM_java_lang_Integer_invalidInt_java_lang_String_R_java_lang_NumberFormatException(jcontext ctx, jobject param0) {
	jtype frame[5];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/lang/Integer:invalidInt", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_lang_Integer(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(334);
	clinit_java_lang_NumberFormatException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_NumberFormatException);
	clinit_java_lang_StringBuilder(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[1].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"Invalid int: \""_j))));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (frame[0].o));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"\""_j))));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[1].o);
	init_java_lang_NumberFormatException_java_lang_String(ctx, sp[0].o, sp[1].o);
	throwException(ctx, sp[0].o);	}

	popStackFrame(ctx);
}

jint SM_java_lang_Integer_hashCode_int_R_int(jcontext ctx, jint param0) {
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/lang/Integer:hashCode", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_lang_Integer(ctx);
	frame[0].i = param0;
	{
	LINE_NUMBER(347);
	popStackFrame(ctx);
	return (frame[0].i);
	}

	popStackFrame(ctx);
}

jshort M_java_lang_Integer_shortValue_R_short(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/lang/Integer:shortValue", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(354);
	popStackFrame(ctx);
	return (jshort(((jint)((java_lang_Integer *) NULL_CHECK((frame[0].o)))->F_value)));
	}

	popStackFrame(ctx);
}

jobject SM_java_lang_Integer_toBinaryString_int_R_java_lang_String(jcontext ctx, jint param0) {
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/lang/Integer:toBinaryString", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_lang_Integer(ctx);
	frame[0].i = param0;
	{
	LINE_NUMBER(363);
	sp[0].o = (jobject)SM_java_lang_Integer_intToBinaryString_int_R_java_lang_String(ctx, (frame[0].i));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject SM_java_lang_Integer_intToBinaryString_int_R_java_lang_String(jcontext ctx, jint param0) {
	jtype frame[10];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/lang/Integer:intToBinaryString", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_lang_Integer(ctx);
	frame[0].i = param0;
	{
	LINE_NUMBER(367);
	frame[1].i = (32);
	LINE_NUMBER(368);
	sp[0].o = (jobject) createArray(ctx, &class_char, (frame[1].i));
	frame[2].o = sp[0].o;
	LINE_NUMBER(369);
	frame[3].i = (frame[1].i);
	}
label_3:;
	{
	LINE_NUMBER(372);
	sp[0].o = frame[2].o;
	INST_IINC(3, -1);
	jint temp0 = frame[3].i;
	clinit_java_lang_Integer(ctx);
	sp[1].o = (jobject)SF_java_lang_Integer_DIGITS;
	ARRAY_ACCESS(jchar, sp[0].o, temp0) = ((jint)ARRAY_ACCESS(jchar, sp[1].o, ((frame[0].i) & (jint(1)))));
	LINE_NUMBER(373);
	jint temp1 = bit_cast<jint>(bit_cast<uint32_t>((frame[0].i)) >> (jint(1)));
	frame[0].i = temp1;
	if (temp1 != 0) goto label_3;
	}
	{
	LINE_NUMBER(375);
	clinit_java_lang_String(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_String);
	init_java_lang_String_Array1_char_int_int(ctx, sp[0].o, (frame[2].o), (frame[3].i), ((frame[1].i) - (frame[3].i)));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject SM_java_lang_Integer_toHexString_int_R_java_lang_String(jcontext ctx, jint param0) {
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/lang/Integer:toHexString", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_lang_Integer(ctx);
	frame[0].i = param0;
	{
	LINE_NUMBER(389);
	sp[0].o = (jobject)SM_java_lang_Integer_intToHexString_int_int_R_java_lang_String(ctx, (frame[0].i), (jint(0)));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject SM_java_lang_Integer_intToHexString_int_int_R_java_lang_String(jcontext ctx, jint param0, jint param1) {
	jtype frame[12];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/lang/Integer:intToHexString", 12 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_lang_Integer(ctx);
	frame[0].i = param0;
	frame[1].i = param1;
	{
	LINE_NUMBER(393);
	frame[2].i = (8);
	LINE_NUMBER(394);
	sp[0].o = (jobject) createArray(ctx, &class_char, (frame[2].i));
	frame[3].o = sp[0].o;
	LINE_NUMBER(395);
	frame[4].i = (frame[2].i);
	LINE_NUMBER(397);
	clinit_java_lang_Integer(ctx);
	sp[0].o = (jobject)SF_java_lang_Integer_DIGITS;
	frame[5].o = sp[0].o;
	}
label_4:;
	{
	LINE_NUMBER(399);
	sp[0].o = frame[3].o;
	INST_IINC(4, -1);
	ARRAY_ACCESS(jchar, sp[0].o, (frame[4].i)) = ((jint)ARRAY_ACCESS(jchar, (frame[5].o), ((frame[0].i) & (15))));
	LINE_NUMBER(400);
	jint temp0 = bit_cast<jint>(bit_cast<uint32_t>((frame[0].i)) >> (jint(4)));
	frame[0].i = temp0;
	if (temp0 != 0) goto label_4;
	}
	{
	if (((frame[2].i) - (frame[4].i)) < (frame[1].i)) goto label_4;
	}
	{
	LINE_NUMBER(402);
	clinit_java_lang_String(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_String);
	init_java_lang_String_Array1_char_int_int(ctx, sp[0].o, (frame[3].o), (frame[4].i), ((frame[2].i) - (frame[4].i)));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject SM_java_lang_Integer_intToOctalString_int_R_java_lang_String(jcontext ctx, jint param0) {
	jtype frame[10];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/lang/Integer:intToOctalString", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_lang_Integer(ctx);
	frame[0].i = param0;
	{
	LINE_NUMBER(406);
	frame[1].i = (11);
	LINE_NUMBER(407);
	sp[0].o = (jobject) createArray(ctx, &class_char, (frame[1].i));
	frame[2].o = sp[0].o;
	LINE_NUMBER(408);
	frame[3].i = (frame[1].i);
	}
label_3:;
	{
	LINE_NUMBER(411);
	sp[0].o = frame[2].o;
	INST_IINC(3, -1);
	jint temp0 = frame[3].i;
	clinit_java_lang_Integer(ctx);
	sp[1].o = (jobject)SF_java_lang_Integer_DIGITS;
	ARRAY_ACCESS(jchar, sp[0].o, temp0) = ((jint)ARRAY_ACCESS(jchar, sp[1].o, ((frame[0].i) & (7))));
	LINE_NUMBER(412);
	jint temp1 = bit_cast<jint>(bit_cast<uint32_t>((frame[0].i)) >> (jint(3)));
	frame[0].i = temp1;
	if (temp1 != 0) goto label_3;
	}
	{
	LINE_NUMBER(414);
	clinit_java_lang_String(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_String);
	init_java_lang_String_Array1_char_int_int(ctx, sp[0].o, (frame[2].o), (frame[3].i), ((frame[1].i) - (frame[3].i)));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject SM_java_lang_Integer_toOctalString_int_R_java_lang_String(jcontext ctx, jint param0) {
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/lang/Integer:toOctalString", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_lang_Integer(ctx);
	frame[0].i = param0;
	{
	LINE_NUMBER(426);
	sp[0].o = (jobject)SM_java_lang_Integer_intToOctalString_int_R_java_lang_String(ctx, (frame[0].i));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_java_lang_Integer_toString_R_java_lang_String(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/lang/Integer:toString", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(434);
	sp[0].o = (jobject)SM_java_lang_Integer_toString_int_R_java_lang_String(ctx, ((jint)((java_lang_Integer *) NULL_CHECK((frame[0].o)))->F_value));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject SM_java_lang_Integer_toString_int_R_java_lang_String(jcontext ctx, jint param0) {
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/lang/Integer:toString", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_lang_Integer(ctx);
	frame[0].i = param0;
	{
	LINE_NUMBER(442);
	sp[0].o = (jobject)SM_java_lang_Integer_toString_int_int_R_java_lang_String(ctx, (frame[0].i), (10));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject SM_java_lang_Integer_valueOf_java_lang_String_R_java_lang_Integer(jcontext ctx, jobject param0) {
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/lang/Integer:valueOf", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_lang_Integer(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(465);
	clinit_java_lang_Integer(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_Integer);
	jint temp0 = (jint)SM_java_lang_Integer_parseInt_java_lang_String_R_int(ctx, (frame[0].o));
	init_java_lang_Integer_int(ctx, sp[0].o, temp0);
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject SM_java_lang_Integer_valueOf_java_lang_String_int_R_java_lang_Integer(jcontext ctx, jobject param0, jint param1) {
	jtype frame[6];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/lang/Integer:valueOf", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_lang_Integer(ctx);
	frame[0].o = param0;
	frame[1].i = param1;
	{
	LINE_NUMBER(475);
	clinit_java_lang_Integer(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_Integer);
	jint temp0 = (jint)SM_java_lang_Integer_parseInt_java_lang_String_int_R_int(ctx, (frame[0].o), (frame[1].i));
	init_java_lang_Integer_int(ctx, sp[0].o, temp0);
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject SM_java_lang_Integer_valueOf_int_R_java_lang_Integer(jcontext ctx, jint param0) {
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/lang/Integer:valueOf", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_lang_Integer(ctx);
	frame[0].i = param0;
	{
	LINE_NUMBER(485);
	clinit_java_lang_Integer(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_Integer);
	init_java_lang_Integer_int(ctx, sp[0].o, (frame[0].i));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jint SM_java_lang_Integer_signum_int_R_int(jcontext ctx, jint param0) {
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/lang/Integer:signum", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_lang_Integer(ctx);
	frame[0].i = param0;
	{
	LINE_NUMBER(498);
	popStackFrame(ctx);
	return (((frame[0].i) >> (31)) | (bit_cast<jint>(bit_cast<uint32_t>((-(frame[0].i))) >> (31))));
	}

	popStackFrame(ctx);
}

jint SM_java_lang_Integer_compare_int_int_R_int(jcontext ctx, jint param0, jint param1) {
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/lang/Integer:compare", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_lang_Integer(ctx);
	frame[0].i = param0;
	frame[1].i = param1;
	{
	LINE_NUMBER(503);
	if ((frame[0].i) <= (frame[1].i)) goto label_1;
	}
	{
	LINE_NUMBER(504);
	popStackFrame(ctx);
	return (jint(1));
	}
label_1:;
	{
	LINE_NUMBER(505);
	if ((frame[0].i) >= (frame[1].i)) goto label_3;
	}
	{
	LINE_NUMBER(506);
	popStackFrame(ctx);
	return (jint(-1));
	}
label_3:;
	{
	LINE_NUMBER(507);
	popStackFrame(ctx);
	return (jint(0));
	}

	popStackFrame(ctx);
}

jint M_java_lang_Integer_compareTo_java_lang_Integer_R_int(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/lang/Integer:compareTo", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(512);
	if (((jint)((java_lang_Integer *) NULL_CHECK((frame[0].o)))->F_value) >= ((jint)((java_lang_Integer *) NULL_CHECK((frame[1].o)))->F_value)) goto label_1;
	}
	INST_ICONST(-1);
	goto label_2;
label_1:;
	{
	if (((jint)((java_lang_Integer *) NULL_CHECK((frame[0].o)))->F_value) <= ((jint)((java_lang_Integer *) NULL_CHECK((frame[1].o)))->F_value)) goto label_3;
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

jint SM_java_lang_Integer_numberOfLeadingZeros_int_R_int(jcontext ctx, jint param0) {
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/lang/Integer:numberOfLeadingZeros", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_lang_Integer(ctx);
	frame[0].i = param0;
	{
	LINE_NUMBER(516);
	if ((frame[0].i) != 0) goto label_1;
	}
	{
	LINE_NUMBER(517);
	popStackFrame(ctx);
	return (32);
	}
label_1:;
	{
	LINE_NUMBER(519);
	frame[1].i = (jint(0));
	LINE_NUMBER(520);
	if ((bit_cast<jint>(bit_cast<uint32_t>((frame[0].i)) >> (16))) == 0) goto label_4;
	}
	{
	LINE_NUMBER(521);
	frame[0].i = (bit_cast<jint>(bit_cast<uint32_t>((frame[0].i)) >> (16)));
	LINE_NUMBER(522);
	frame[1].i = ((frame[1].i) | (16));
	}
label_4:;
	{
	LINE_NUMBER(524);
	if ((bit_cast<jint>(bit_cast<uint32_t>((frame[0].i)) >> (8))) == 0) goto label_7;
	}
	{
	LINE_NUMBER(525);
	frame[0].i = (bit_cast<jint>(bit_cast<uint32_t>((frame[0].i)) >> (8)));
	LINE_NUMBER(526);
	frame[1].i = ((frame[1].i) | (8));
	}
label_7:;
	{
	LINE_NUMBER(528);
	if ((bit_cast<jint>(bit_cast<uint32_t>((frame[0].i)) >> (jint(4)))) == 0) goto label_10;
	}
	{
	LINE_NUMBER(529);
	frame[0].i = (bit_cast<jint>(bit_cast<uint32_t>((frame[0].i)) >> (jint(4))));
	LINE_NUMBER(530);
	frame[1].i = ((frame[1].i) | (jint(4)));
	}
label_10:;
	{
	LINE_NUMBER(532);
	if ((bit_cast<jint>(bit_cast<uint32_t>((frame[0].i)) >> (jint(2)))) == 0) goto label_13;
	}
	{
	LINE_NUMBER(533);
	frame[0].i = (bit_cast<jint>(bit_cast<uint32_t>((frame[0].i)) >> (jint(2))));
	LINE_NUMBER(534);
	frame[1].i = ((frame[1].i) | (jint(2)));
	}
label_13:;
	{
	LINE_NUMBER(536);
	if ((bit_cast<jint>(bit_cast<uint32_t>((frame[0].i)) >> (jint(1)))) == 0) goto label_16;
	}
	{
	LINE_NUMBER(537);
	frame[0].i = (bit_cast<jint>(bit_cast<uint32_t>((frame[0].i)) >> (jint(1))));
	LINE_NUMBER(538);
	frame[1].i = ((frame[1].i) | (jint(1)));
	}
label_16:;
	{
	LINE_NUMBER(540);
	popStackFrame(ctx);
	return (((32) - (frame[1].i)) - (jint(1)));
	}

	popStackFrame(ctx);
}

jint SM_java_lang_Integer_numberOfTrailingZeros_int_R_int(jcontext ctx, jint param0) {
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/lang/Integer:numberOfTrailingZeros", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_lang_Integer(ctx);
	frame[0].i = param0;
	{
	LINE_NUMBER(545);
	if ((frame[0].i) != 0) goto label_1;
	}
	{
	LINE_NUMBER(546);
	popStackFrame(ctx);
	return (32);
	}
label_1:;
	{
	LINE_NUMBER(547);
	frame[2].i = (31);
	LINE_NUMBER(548);
	frame[1].i = ((frame[0].i) << (16));
	LINE_NUMBER(549);
	if ((frame[1].i) == 0) goto label_5;
	}
	{
	LINE_NUMBER(550);
	frame[2].i = ((frame[2].i) - (16));
	LINE_NUMBER(551);
	frame[0].i = (frame[1].i);
	}
label_5:;
	{
	LINE_NUMBER(553);
	frame[1].i = ((frame[0].i) << (8));
	LINE_NUMBER(554);
	if ((frame[1].i) == 0) goto label_9;
	}
	{
	LINE_NUMBER(555);
	frame[2].i = ((frame[2].i) - (8));
	LINE_NUMBER(556);
	frame[0].i = (frame[1].i);
	}
label_9:;
	{
	LINE_NUMBER(558);
	frame[1].i = ((frame[0].i) << (jint(4)));
	LINE_NUMBER(559);
	if ((frame[1].i) == 0) goto label_13;
	}
	{
	LINE_NUMBER(560);
	frame[2].i = ((frame[2].i) - (jint(4)));
	LINE_NUMBER(561);
	frame[0].i = (frame[1].i);
	}
label_13:;
	{
	LINE_NUMBER(563);
	frame[1].i = ((frame[0].i) << (jint(2)));
	LINE_NUMBER(564);
	if ((frame[1].i) == 0) goto label_17;
	}
	{
	LINE_NUMBER(565);
	frame[2].i = ((frame[2].i) - (jint(2)));
	LINE_NUMBER(566);
	frame[0].i = (frame[1].i);
	}
label_17:;
	{
	LINE_NUMBER(568);
	popStackFrame(ctx);
	return ((frame[2].i) - (bit_cast<jint>(bit_cast<uint32_t>(((frame[0].i) << (jint(1)))) >> (31))));
	}

	popStackFrame(ctx);
}

jint SM_java_lang_Integer_sum_int_int_R_int(jcontext ctx, jint param0, jint param1) {
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/lang/Integer:sum", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_lang_Integer(ctx);
	frame[0].i = param0;
	frame[1].i = param1;
	{
	LINE_NUMBER(581);
	popStackFrame(ctx);
	return ((frame[0].i) + (frame[1].i));
	}

	popStackFrame(ctx);
}

jint SM_java_lang_Integer_max_int_int_R_int(jcontext ctx, jint param0, jint param1) {
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/lang/Integer:max", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_lang_Integer(ctx);
	frame[0].i = param0;
	frame[1].i = param1;
	{
	LINE_NUMBER(595);
	jint temp0 = (jint)SM_java_lang_Math_max_int_int_R_int(ctx, (frame[0].i), (frame[1].i));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jint SM_java_lang_Integer_min_int_int_R_int(jcontext ctx, jint param0, jint param1) {
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/lang/Integer:min", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_lang_Integer(ctx);
	frame[0].i = param0;
	frame[1].i = param1;
	{
	LINE_NUMBER(609);
	jint temp0 = (jint)SM_java_lang_Math_min_int_int_R_int(ctx, (frame[0].i), (frame[1].i));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jint M_java_lang_Integer_compareTo_java_lang_Object_R_int(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/lang/Integer:compareTo", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(33);
	jint temp0 = (jint)((func_java_lang_Integer_compareTo_java_lang_Integer_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_lang_Integer_compareTo_java_lang_Integer_R_int])(ctx, (frame[0].o), (checkCast(ctx, &class_java_lang_Integer, (frame[1].o))));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

void clinit_java_lang_Integer(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	clinit_java_lang_Number(ctx);
	SF_java_lang_Integer_MAX_VALUE = jint(2147483647);
	SF_java_lang_Integer_MIN_VALUE = bit_cast<jint>(0x80000000);
	SF_java_lang_Integer_SIZE = jint(32);
	jtype frame[4];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/lang/Integer:<clinit>", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_lang_Integer(ctx);
	{
	LINE_NUMBER(35);
	sp[0].o = (jobject)SM_java_nio_NativeUtils_getPrimitive_java_lang_String_R_java_lang_Class(ctx, (((jobject) createStringLiteral(ctx, u8"I"_j))));
	clinit_java_lang_Integer(ctx);
	SF_java_lang_Integer_TYPE = sp[0].o;
	LINE_NUMBER(37);
	sp[0].o = (jobject) createArray(ctx, &class_char, (36));
	ARRAY_ACCESS(jchar, sp[0].o, (jint(0))) = (48);
	ARRAY_ACCESS(jchar, sp[0].o, (jint(1))) = (49);
	ARRAY_ACCESS(jchar, sp[0].o, (jint(2))) = (50);
	ARRAY_ACCESS(jchar, sp[0].o, (jint(3))) = (51);
	ARRAY_ACCESS(jchar, sp[0].o, (jint(4))) = (52);
	ARRAY_ACCESS(jchar, sp[0].o, (jint(5))) = (53);
	ARRAY_ACCESS(jchar, sp[0].o, (6)) = (54);
	ARRAY_ACCESS(jchar, sp[0].o, (7)) = (55);
	ARRAY_ACCESS(jchar, sp[0].o, (8)) = (56);
	ARRAY_ACCESS(jchar, sp[0].o, (9)) = (57);
	ARRAY_ACCESS(jchar, sp[0].o, (10)) = (97);
	ARRAY_ACCESS(jchar, sp[0].o, (11)) = (98);
	ARRAY_ACCESS(jchar, sp[0].o, (12)) = (99);
	ARRAY_ACCESS(jchar, sp[0].o, (13)) = (100);
	ARRAY_ACCESS(jchar, sp[0].o, (14)) = (101);
	ARRAY_ACCESS(jchar, sp[0].o, (15)) = (102);
	ARRAY_ACCESS(jchar, sp[0].o, (16)) = (103);
	ARRAY_ACCESS(jchar, sp[0].o, (17)) = (104);
	ARRAY_ACCESS(jchar, sp[0].o, (18)) = (105);
	ARRAY_ACCESS(jchar, sp[0].o, (19)) = (106);
	ARRAY_ACCESS(jchar, sp[0].o, (20)) = (107);
	ARRAY_ACCESS(jchar, sp[0].o, (21)) = (108);
	ARRAY_ACCESS(jchar, sp[0].o, (22)) = (109);
	ARRAY_ACCESS(jchar, sp[0].o, (23)) = (110);
	ARRAY_ACCESS(jchar, sp[0].o, (24)) = (111);
	ARRAY_ACCESS(jchar, sp[0].o, (25)) = (112);
	ARRAY_ACCESS(jchar, sp[0].o, (26)) = (113);
	ARRAY_ACCESS(jchar, sp[0].o, (27)) = (114);
	ARRAY_ACCESS(jchar, sp[0].o, (28)) = (115);
	ARRAY_ACCESS(jchar, sp[0].o, (29)) = (116);
	ARRAY_ACCESS(jchar, sp[0].o, (30)) = (117);
	ARRAY_ACCESS(jchar, sp[0].o, (31)) = (118);
	ARRAY_ACCESS(jchar, sp[0].o, (32)) = (119);
	ARRAY_ACCESS(jchar, sp[0].o, (33)) = (120);
	ARRAY_ACCESS(jchar, sp[0].o, (34)) = (121);
	ARRAY_ACCESS(jchar, sp[0].o, (35)) = (122);
	clinit_java_lang_Integer(ctx);
	SF_java_lang_Integer_DIGITS = sp[0].o;
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void *vtable_java_lang_Integer[] {
	(void *) M_java_lang_Integer_hashCode_R_int,
	(void *) M_java_lang_Integer_equals_java_lang_Object_R_boolean,
	(void *) M_java_lang_Object_clone_R_java_lang_Object,
	(void *) M_java_lang_Object_getClass_R_java_lang_Class,
	(void *) M_java_lang_Integer_toString_R_java_lang_String,
	(void *) M_java_lang_Object_finalize,
	(void *) M_java_lang_Object_notify,
	(void *) M_java_lang_Object_notifyAll,
	(void *) M_java_lang_Object_wait,
	(void *) M_java_lang_Object_wait_long,
	(void *) M_java_lang_Object_wait_long_int,
	(void *) M_java_lang_Integer_intValue_R_int,
	(void *) M_java_lang_Integer_byteValue_R_byte,
	(void *) M_java_lang_Integer_longValue_R_long,
	(void *) M_java_lang_Integer_floatValue_R_float,
	(void *) M_java_lang_Integer_doubleValue_R_double,
	(void *) M_java_lang_Integer_shortValue_R_short,
	(void *) M_java_lang_Integer_compareTo_java_lang_Object_R_int,
	(void *) M_java_lang_Integer_compareTo_java_lang_Integer_R_int,
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
	{ "compareTo", "(Ljava/lang/Integer;)I" },
};

static jclass interfaces[] { &class_java_lang_Comparable, };

static FieldMetadata fields[] {
	{ "TYPE", &class_java_lang_Class, (intptr_t) &SF_java_lang_Integer_TYPE, "Ljava/lang/Class;", 25 },
	{ "DIGITS", getArrayClass(&class_char, 1), (intptr_t) &SF_java_lang_Integer_DIGITS, "[C", 25 },
	{ "MAX_VALUE", &class_int, (intptr_t) &SF_java_lang_Integer_MAX_VALUE, "I", 25 },
	{ "MIN_VALUE", &class_int, (intptr_t) &SF_java_lang_Integer_MIN_VALUE, "I", 25 },
	{ "SIZE", &class_int, (intptr_t) &SF_java_lang_Integer_SIZE, "I", 25 },
	{ "value", &class_int, offsetof(java_lang_Integer, F_value), "I", 2 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_java_lang_Integer_int, 0, "(I)V", 1 },
	{ "<init>", (intptr_t) init_java_lang_Integer_java_lang_String, 0, "(Ljava/lang/String;)V", 1 },
	{ "byteValue", (intptr_t) M_java_lang_Integer_byteValue_R_byte, VTABLE_java_lang_Integer_byteValue_R_byte, "()B", 1 },
	{ "doubleValue", (intptr_t) M_java_lang_Integer_doubleValue_R_double, VTABLE_java_lang_Integer_doubleValue_R_double, "()D", 1 },
	{ "equals", (intptr_t) M_java_lang_Integer_equals_java_lang_Object_R_boolean, VTABLE_java_lang_Integer_equals_java_lang_Object_R_boolean, "(Ljava/lang/Object;)Z", 1 },
	{ "floatValue", (intptr_t) M_java_lang_Integer_floatValue_R_float, VTABLE_java_lang_Integer_floatValue_R_float, "()F", 1 },
	{ "hashCode", (intptr_t) M_java_lang_Integer_hashCode_R_int, VTABLE_java_lang_Integer_hashCode_R_int, "()I", 1 },
	{ "intValue", (intptr_t) M_java_lang_Integer_intValue_R_int, VTABLE_java_lang_Integer_intValue_R_int, "()I", 1 },
	{ "longValue", (intptr_t) M_java_lang_Integer_longValue_R_long, VTABLE_java_lang_Integer_longValue_R_long, "()J", 1 },
	{ "rotateLeft", (intptr_t) SM_java_lang_Integer_rotateLeft_int_int_R_int, 0, "(II)I", 9 },
	{ "rotateRight", (intptr_t) SM_java_lang_Integer_rotateRight_int_int_R_int, 0, "(II)I", 9 },
	{ "reverse", (intptr_t) SM_java_lang_Integer_reverse_int_R_int, 0, "(I)I", 9 },
	{ "reverseBytes", (intptr_t) SM_java_lang_Integer_reverseBytes_int_R_int, 0, "(I)I", 9 },
	{ "compareUnsigned", (intptr_t) SM_java_lang_Integer_compareUnsigned_int_int_R_int, 0, "(II)I", 9 },
	{ "toUnsignedLong", (intptr_t) SM_java_lang_Integer_toUnsignedLong_int_R_long, 0, "(I)J", 9 },
	{ "divideUnsigned", (intptr_t) SM_java_lang_Integer_divideUnsigned_int_int_R_int, 0, "(II)I", 9 },
	{ "remainderUnsigned", (intptr_t) SM_java_lang_Integer_remainderUnsigned_int_int_R_int, 0, "(II)I", 9 },
	{ "bitCount", (intptr_t) SM_java_lang_Integer_bitCount_int_R_int, 0, "(I)I", 9 },
	{ "lowestOneBit", (intptr_t) SM_java_lang_Integer_lowestOneBit_int_R_int, 0, "(I)I", 9 },
	{ "highestOneBit", (intptr_t) SM_java_lang_Integer_highestOneBit_int_R_int, 0, "(I)I", 9 },
	{ "parseInt", (intptr_t) SM_java_lang_Integer_parseInt_java_lang_String_R_int, 0, "(Ljava/lang/String;)I", 9 },
	{ "parseInt", (intptr_t) SM_java_lang_Integer_parseInt_java_lang_String_int_R_int, 0, "(Ljava/lang/String;I)I", 9 },
	{ "parse", (intptr_t) SM_java_lang_Integer_parse_java_lang_String_int_int_boolean_R_int, 0, "(Ljava/lang/String;IIZ)I", 10 },
	{ "getInteger", (intptr_t) SM_java_lang_Integer_getInteger_java_lang_String_R_java_lang_Integer, 0, "(Ljava/lang/String;)Ljava/lang/Integer;", 9 },
	{ "getInteger", (intptr_t) SM_java_lang_Integer_getInteger_java_lang_String_int_R_java_lang_Integer, 0, "(Ljava/lang/String;I)Ljava/lang/Integer;", 9 },
	{ "getInteger", (intptr_t) SM_java_lang_Integer_getInteger_java_lang_String_java_lang_Integer_R_java_lang_Integer, 0, "(Ljava/lang/String;Ljava/lang/Integer;)Ljava/lang/Integer;", 9 },
	{ "invalidInt", (intptr_t) SM_java_lang_Integer_invalidInt_java_lang_String_R_java_lang_NumberFormatException, 0, "(Ljava/lang/String;)Ljava/lang/NumberFormatException;", 10 },
	{ "hashCode", (intptr_t) SM_java_lang_Integer_hashCode_int_R_int, 0, "(I)I", 9 },
	{ "shortValue", (intptr_t) M_java_lang_Integer_shortValue_R_short, VTABLE_java_lang_Integer_shortValue_R_short, "()S", 1 },
	{ "toBinaryString", (intptr_t) SM_java_lang_Integer_toBinaryString_int_R_java_lang_String, 0, "(I)Ljava/lang/String;", 9 },
	{ "intToBinaryString", (intptr_t) SM_java_lang_Integer_intToBinaryString_int_R_java_lang_String, 0, "(I)Ljava/lang/String;", 10 },
	{ "toHexString", (intptr_t) SM_java_lang_Integer_toHexString_int_R_java_lang_String, 0, "(I)Ljava/lang/String;", 9 },
	{ "intToHexString", (intptr_t) SM_java_lang_Integer_intToHexString_int_int_R_java_lang_String, 0, "(II)Ljava/lang/String;", 9 },
	{ "intToOctalString", (intptr_t) SM_java_lang_Integer_intToOctalString_int_R_java_lang_String, 0, "(I)Ljava/lang/String;", 9 },
	{ "toOctalString", (intptr_t) SM_java_lang_Integer_toOctalString_int_R_java_lang_String, 0, "(I)Ljava/lang/String;", 9 },
	{ "toString", (intptr_t) M_java_lang_Integer_toString_R_java_lang_String, VTABLE_java_lang_Integer_toString_R_java_lang_String, "()Ljava/lang/String;", 1 },
	{ "toString", (intptr_t) SM_java_lang_Integer_toString_int_R_java_lang_String, 0, "(I)Ljava/lang/String;", 9 },
	{ "toString", (intptr_t) SM_java_lang_Integer_toString_int_int_R_java_lang_String, 0, "(II)Ljava/lang/String;", 265 },
	{ "valueOf", (intptr_t) SM_java_lang_Integer_valueOf_java_lang_String_R_java_lang_Integer, 0, "(Ljava/lang/String;)Ljava/lang/Integer;", 9 },
	{ "valueOf", (intptr_t) SM_java_lang_Integer_valueOf_java_lang_String_int_R_java_lang_Integer, 0, "(Ljava/lang/String;I)Ljava/lang/Integer;", 9 },
	{ "valueOf", (intptr_t) SM_java_lang_Integer_valueOf_int_R_java_lang_Integer, 0, "(I)Ljava/lang/Integer;", 9 },
	{ "signum", (intptr_t) SM_java_lang_Integer_signum_int_R_int, 0, "(I)I", 9 },
	{ "compare", (intptr_t) SM_java_lang_Integer_compare_int_int_R_int, 0, "(II)I", 9 },
	{ "compareTo", (intptr_t) M_java_lang_Integer_compareTo_java_lang_Integer_R_int, VTABLE_java_lang_Integer_compareTo_java_lang_Integer_R_int, "(Ljava/lang/Integer;)I", 1 },
	{ "numberOfLeadingZeros", (intptr_t) SM_java_lang_Integer_numberOfLeadingZeros_int_R_int, 0, "(I)I", 9 },
	{ "numberOfTrailingZeros", (intptr_t) SM_java_lang_Integer_numberOfTrailingZeros_int_R_int, 0, "(I)I", 9 },
	{ "sum", (intptr_t) SM_java_lang_Integer_sum_int_int_R_int, 0, "(II)I", 9 },
	{ "max", (intptr_t) SM_java_lang_Integer_max_int_int_R_int, 0, "(II)I", 9 },
	{ "min", (intptr_t) SM_java_lang_Integer_min_int_int_R_int, 0, "(II)I", 9 },
	{ "compareTo", (intptr_t) M_java_lang_Integer_compareTo_java_lang_Object_R_int, VTABLE_java_lang_Integer_compareTo_java_lang_Object_R_int, "(Ljava/lang/Object;)I", 4161 },
	{ "<clinit>", (intptr_t) clinit_java_lang_Integer, 0, "()V", 8 },
};

Class class_java_lang_Integer{
		.nativeName = (intptr_t) "java/lang/Integer",
		.parentClass = (intptr_t) &class_java_lang_Number,
		.size = sizeof(java_lang_Integer),
		.classVtable = (intptr_t) vtable_java_lang_Integer,
		.staticInitializer = (intptr_t) clinit_java_lang_Integer,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_java_lang_Integer,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 49,
		.interfaceCount = 1,
		.nativeInterfaces = (intptr_t) interfaces,
		.fieldCount = 6,
		.nativeFields = (intptr_t) fields,
		.methodCount = 51,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 19,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_java_lang_Integer = registerClass(&class_java_lang_Integer);

}
