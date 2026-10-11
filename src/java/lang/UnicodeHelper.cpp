#include "java/lang/UnicodeHelper.h"
#include "java/lang/CharFlow.h"
#include "java/lang/UnicodeHelper.h"
#include "java/lang/Object.h"
#include "java/lang/StringBuilder.h"
#include "java/lang/String.h"
#include "java/util/Arrays.h"
#include "java/lang/UnicodeHelper_Range.h"
#include "java/lang/Base46.h"

extern "C" {


void mark_java_lang_UnicodeHelper(jobject object, jint mark, jint depth) {
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
	auto self = (java_lang_UnicodeHelper *) object;
}

void clinit_java_lang_UnicodeHelper(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
}

void init_java_lang_UnicodeHelper(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/lang/UnicodeHelper:<init>", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_lang_UnicodeHelper(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(1589);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(1590);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jchar SM_java_lang_UnicodeHelper_hexDigit_int_R_char(jcontext ctx, jint param0) {
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/lang/UnicodeHelper:hexDigit", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_lang_UnicodeHelper(ctx);
	frame[0].i = param0;
	{
	LINE_NUMBER(1593);
	if ((frame[0].i) >= (10)) goto label_1;
	}
	{
	jint temp0 = jchar(((48) + (frame[0].i)));
	sp[0].i = temp0;
	sp += 1;
	goto label_2;
	}
label_1:;
	{
	jint temp0 = jchar(((65) + (frame[0].i)));
	sp[0].i = temp0;
	sp += 1;
	}
label_2:;
	popStackFrame(ctx);
	INST_IRETURN();

	popStackFrame(ctx);
}

jint SM_java_lang_UnicodeHelper_valueOfHexDigit_char_R_int(jcontext ctx, jchar param0) {
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/lang/UnicodeHelper:valueOfHexDigit", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_lang_UnicodeHelper(ctx);
	frame[0].i = param0;
	{
	LINE_NUMBER(1597);
	if ((frame[0].i) > (57)) goto label_1;
	}
	{
	jint temp0 = (frame[0].i) - (48);
	sp[0].i = temp0;
	sp += 1;
	goto label_2;
	}
label_1:;
	{
	jint temp0 = ((frame[0].i) - (65)) + (10);
	sp[0].i = temp0;
	sp += 1;
	}
label_2:;
	popStackFrame(ctx);
	INST_IRETURN();

	popStackFrame(ctx);
}

jobject SM_java_lang_UnicodeHelper_encodeIntPairsDiff_Array1_int_R_java_lang_String(jcontext ctx, jobject param0) {
	jtype frame[10];
	auto stack = &frame[7];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/lang/UnicodeHelper:encodeIntPairsDiff", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_lang_UnicodeHelper(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(1613);
	clinit_java_lang_StringBuilder(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[0].o);
	frame[1].o = sp[0].o;
	LINE_NUMBER(1614);
	SM_java_lang_Base46_encodeUnsigned_java_lang_StringBuilder_int(ctx, (frame[1].o), ((((jarray) nullCheck(ctx, (frame[0].o)))->length) / (jint(2))));
	LINE_NUMBER(1615);
	frame[2].i = (jint(0));
	LINE_NUMBER(1616);
	frame[3].i = (jint(0));
	LINE_NUMBER(1617);
	frame[4].i = (jint(0));
	}
label_5:;
	{
	if ((frame[4].i) >= (((jarray) nullCheck(ctx, (frame[0].o)))->length)) goto label_6;
	}
	{
	LINE_NUMBER(1618);
	frame[5].i = ((jint)ARRAY_ACCESS(jint, (frame[0].o), (frame[4].i)));
	LINE_NUMBER(1619);
	frame[6].i = ((jint)ARRAY_ACCESS(jint, (frame[0].o), ((frame[4].i) + (jint(1)))));
	LINE_NUMBER(1620);
	SM_java_lang_Base46_encode_java_lang_StringBuilder_int(ctx, (frame[1].o), ((frame[5].i) - (frame[2].i)));
	LINE_NUMBER(1621);
	SM_java_lang_Base46_encode_java_lang_StringBuilder_int(ctx, (frame[1].o), ((frame[6].i) - (frame[3].i)));
	LINE_NUMBER(1622);
	frame[2].i = (frame[5].i);
	LINE_NUMBER(1623);
	frame[3].i = (frame[6].i);
	LINE_NUMBER(1617);
	INST_IINC(4, 2);
	goto label_5;
	}
label_6:;
	{
	LINE_NUMBER(1625);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, (frame[1].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject SM_java_lang_UnicodeHelper_decodeIntPairsDiff_java_lang_String_R_Array1_int(jcontext ctx, jobject param0) {
	jtype frame[11];
	auto stack = &frame[8];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/lang/UnicodeHelper:decodeIntPairsDiff", 11 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_lang_UnicodeHelper(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(1629);
	clinit_java_lang_CharFlow(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_CharFlow);
	sp[1].o = (jobject)((func_java_lang_String_toCharArray_R_Array1_char) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_lang_String_toCharArray_R_Array1_char])(ctx, (frame[0].o));
	init_java_lang_CharFlow_Array1_char(ctx, sp[0].o, sp[1].o);
	frame[1].o = sp[0].o;
	LINE_NUMBER(1630);
	jint temp0 = (jint)SM_java_lang_Base46_decodeUnsigned_java_lang_CharFlow_R_int(ctx, (frame[1].o));
	frame[2].i = temp0;
	LINE_NUMBER(1631);
	sp[0].o = (jobject) createArray(ctx, &class_int, ((frame[2].i) * (jint(2))));
	frame[3].o = sp[0].o;
	LINE_NUMBER(1632);
	frame[4].i = (jint(0));
	LINE_NUMBER(1633);
	frame[5].i = (jint(0));
	LINE_NUMBER(1634);
	frame[6].i = (jint(0));
	LINE_NUMBER(1635);
	frame[7].i = (jint(0));
	}
label_7:;
	{
	if ((frame[7].i) >= (frame[2].i)) goto label_8;
	}
	{
	LINE_NUMBER(1636);
	jint temp0 = frame[5].i;
	jint temp1 = (jint)SM_java_lang_Base46_decode_java_lang_CharFlow_R_int(ctx, (frame[1].o));
	frame[5].i = (temp0 + temp1);
	LINE_NUMBER(1637);
	jint temp2 = frame[6].i;
	jint temp3 = (jint)SM_java_lang_Base46_decode_java_lang_CharFlow_R_int(ctx, (frame[1].o));
	frame[6].i = (temp2 + temp3);
	LINE_NUMBER(1638);
	sp[0].o = frame[3].o;
	jint temp4 = frame[4].i;
	INST_IINC(4, 1);
	ARRAY_ACCESS(jint, sp[0].o, temp4) = (frame[5].i);
	LINE_NUMBER(1639);
	sp[0].o = frame[3].o;
	jint temp5 = frame[4].i;
	INST_IINC(4, 1);
	ARRAY_ACCESS(jint, sp[0].o, temp5) = (frame[6].i);
	LINE_NUMBER(1635);
	INST_IINC(7, 1);
	goto label_7;
	}
label_8:;
	{
	LINE_NUMBER(1641);
	popStackFrame(ctx);
	return (frame[3].o);
	}

	popStackFrame(ctx);
}

jobject SM_java_lang_UnicodeHelper_encodeIntDiff_Array1_int_R_java_lang_String(jcontext ctx, jobject param0) {
	jtype frame[8];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/lang/UnicodeHelper:encodeIntDiff", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_lang_UnicodeHelper(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(1645);
	clinit_java_lang_StringBuilder(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[0].o);
	frame[1].o = sp[0].o;
	LINE_NUMBER(1646);
	SM_java_lang_Base46_encodeUnsigned_java_lang_StringBuilder_int(ctx, (frame[1].o), (((jarray) nullCheck(ctx, (frame[0].o)))->length));
	LINE_NUMBER(1647);
	frame[2].i = (jint(0));
	LINE_NUMBER(1648);
	frame[3].i = (jint(0));
	}
label_4:;
	{
	if ((frame[3].i) >= (((jarray) nullCheck(ctx, (frame[0].o)))->length)) goto label_5;
	}
	{
	LINE_NUMBER(1649);
	frame[4].i = ((jint)ARRAY_ACCESS(jint, (frame[0].o), (frame[3].i)));
	LINE_NUMBER(1650);
	SM_java_lang_Base46_encode_java_lang_StringBuilder_int(ctx, (frame[1].o), ((frame[4].i) - (frame[2].i)));
	LINE_NUMBER(1651);
	frame[2].i = (frame[4].i);
	LINE_NUMBER(1648);
	INST_IINC(3, 1);
	goto label_4;
	}
label_5:;
	{
	LINE_NUMBER(1653);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, (frame[1].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject SM_java_lang_UnicodeHelper_decodeIntDiff_java_lang_String_R_Array1_int(jcontext ctx, jobject param0) {
	jtype frame[9];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/lang/UnicodeHelper:decodeIntDiff", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_lang_UnicodeHelper(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(1657);
	clinit_java_lang_CharFlow(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_CharFlow);
	sp[1].o = (jobject)((func_java_lang_String_toCharArray_R_Array1_char) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_lang_String_toCharArray_R_Array1_char])(ctx, (frame[0].o));
	init_java_lang_CharFlow_Array1_char(ctx, sp[0].o, sp[1].o);
	frame[1].o = sp[0].o;
	LINE_NUMBER(1658);
	jint temp0 = (jint)SM_java_lang_Base46_decodeUnsigned_java_lang_CharFlow_R_int(ctx, (frame[1].o));
	frame[2].i = temp0;
	LINE_NUMBER(1659);
	sp[0].o = (jobject) createArray(ctx, &class_int, (frame[2].i));
	frame[3].o = sp[0].o;
	LINE_NUMBER(1660);
	frame[4].i = (jint(0));
	LINE_NUMBER(1661);
	frame[5].i = (jint(0));
	}
label_5:;
	{
	if ((frame[5].i) >= (frame[2].i)) goto label_6;
	}
	{
	LINE_NUMBER(1662);
	jint temp0 = frame[4].i;
	jint temp1 = (jint)SM_java_lang_Base46_decode_java_lang_CharFlow_R_int(ctx, (frame[1].o));
	frame[4].i = (temp0 + temp1);
	LINE_NUMBER(1663);
	ARRAY_ACCESS(jint, (frame[3].o), (frame[5].i)) = (frame[4].i);
	LINE_NUMBER(1661);
	INST_IINC(5, 1);
	goto label_5;
	}
label_6:;
	{
	LINE_NUMBER(1665);
	popStackFrame(ctx);
	return (frame[3].o);
	}

	popStackFrame(ctx);
}

jchar SM_java_lang_UnicodeHelper_encodeByte_byte_R_char(jcontext ctx, jbyte param0) {
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/lang/UnicodeHelper:encodeByte", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_lang_UnicodeHelper(ctx);
	frame[0].i = param0;
	{
	LINE_NUMBER(1669);
	if ((frame[0].i) >= (jint(2))) goto label_1;
	}
	{
	LINE_NUMBER(1670);
	popStackFrame(ctx);
	return (jchar(((frame[0].i) + (32))));
	}
label_1:;
	{
	LINE_NUMBER(1671);
	if ((frame[0].i) >= (59)) goto label_3;
	}
	{
	LINE_NUMBER(1672);
	popStackFrame(ctx);
	return (jchar((((frame[0].i) + (32)) + (jint(1)))));
	}
label_3:;
	{
	LINE_NUMBER(1674);
	popStackFrame(ctx);
	return (jchar((((frame[0].i) + (32)) + (jint(2)))));
	}

	popStackFrame(ctx);
}

jbyte SM_java_lang_UnicodeHelper_decodeByte_char_R_byte(jcontext ctx, jchar param0) {
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/lang/UnicodeHelper:decodeByte", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_lang_UnicodeHelper(ctx);
	frame[0].i = param0;
	{
	LINE_NUMBER(1679);
	if ((frame[0].i) <= (92)) goto label_1;
	}
	{
	LINE_NUMBER(1680);
	popStackFrame(ctx);
	return (jbyte((((frame[0].i) - (32)) - (jint(2)))));
	}
label_1:;
	{
	LINE_NUMBER(1681);
	if ((frame[0].i) <= (34)) goto label_3;
	}
	{
	LINE_NUMBER(1682);
	popStackFrame(ctx);
	return (jbyte((((frame[0].i) - (32)) - (jint(1)))));
	}
label_3:;
	{
	LINE_NUMBER(1684);
	popStackFrame(ctx);
	return (jbyte(((frame[0].i) - (32))));
	}

	popStackFrame(ctx);
}

jobject SM_java_lang_UnicodeHelper_compressRle_Array1_byte_R_java_lang_String(jcontext ctx, jobject param0) {
	jtype frame[10];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/lang/UnicodeHelper:compressRle", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_lang_UnicodeHelper(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(1689);
	clinit_java_lang_StringBuilder(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[0].o);
	frame[1].o = sp[0].o;
	LINE_NUMBER(1690);
	frame[2].i = (jint(0));
	}
label_2:;
	{
	if ((frame[2].i) >= (((jarray) nullCheck(ctx, (frame[0].o)))->length)) goto label_3;
	}
	{
	LINE_NUMBER(1691);
	frame[3].i = ((jint)ARRAY_ACCESS(jbyte, (frame[0].o), (frame[2].i)));
	LINE_NUMBER(1692);
	if ((frame[2].i) >= ((((jarray) nullCheck(ctx, (frame[0].o)))->length) - (jint(1)))) goto label_6;
	}
	{
	if ((frame[3].i) != ((jint)ARRAY_ACCESS(jbyte, (frame[0].o), ((frame[2].i) + (jint(1)))))) goto label_6;
	}
	{
	LINE_NUMBER(1693);
	frame[4].i = (jint(0));
	}
label_8:;
	{
	LINE_NUMBER(1694);
	if ((frame[4].i) >= (16384)) goto label_9;
	}
	{
	if (((jint)ARRAY_ACCESS(jbyte, (frame[0].o), ((frame[2].i) + (frame[4].i)))) != (frame[3].i)) goto label_9;
	}
	{
	LINE_NUMBER(1695);
	INST_IINC(4, 1);
	goto label_8;
	}
label_9:;
	{
	LINE_NUMBER(1697);
	frame[2].i = ((frame[2].i) + (frame[4].i));
	LINE_NUMBER(1698);
	if ((frame[4].i) >= (80)) goto label_12;
	}
	{
	LINE_NUMBER(1699);
	sp[0].o = frame[1].o;
	jint temp0 = (jint)SM_java_lang_UnicodeHelper_encodeByte_byte_R_char(ctx, (jbyte(((frame[3].i) + (32)))));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_char_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_char_R_java_lang_StringBuilder])(ctx, sp[0].o, temp0);
	LINE_NUMBER(1700);
	sp[0].o = frame[1].o;
	jint temp1 = (jint)SM_java_lang_UnicodeHelper_encodeByte_byte_R_char(ctx, (jbyte((frame[4].i))));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_char_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_char_R_java_lang_StringBuilder])(ctx, sp[0].o, temp1);
	goto label_15;
	}
label_12:;
	{
	LINE_NUMBER(1702);
	sp[0].o = frame[1].o;
	jint temp0 = (jint)SM_java_lang_UnicodeHelper_encodeByte_byte_R_char(ctx, (64));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_char_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_char_R_java_lang_StringBuilder])(ctx, sp[0].o, temp0);
	LINE_NUMBER(1703);
	sp[0].o = frame[1].o;
	jint temp1 = (jint)SM_java_lang_UnicodeHelper_encodeByte_byte_R_char(ctx, (frame[3].i));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_char_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_char_R_java_lang_StringBuilder])(ctx, sp[0].o, temp1);
	LINE_NUMBER(1704);
	frame[5].i = (jint(0));
	}
label_18:;
	{
	if ((frame[5].i) >= (jint(3))) goto label_15;
	}
	{
	LINE_NUMBER(1705);
	sp[0].o = frame[1].o;
	jint temp0 = (jint)SM_java_lang_UnicodeHelper_encodeByte_byte_R_char(ctx, (jbyte(((frame[4].i) & (63)))));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_char_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_char_R_java_lang_StringBuilder])(ctx, sp[0].o, temp0);
	LINE_NUMBER(1706);
	frame[4].i = ((frame[4].i) / (64));
	LINE_NUMBER(1704);
	INST_IINC(5, 1);
	goto label_18;
	}
label_15:;
	LINE_NUMBER(1709);
	goto label_22;
label_6:;
	{
	LINE_NUMBER(1710);
	sp[0].o = frame[1].o;
	sp[1].o = frame[0].o;
	jint temp0 = frame[2].i;
	INST_IINC(2, 1);
	jint temp1 = (jint)SM_java_lang_UnicodeHelper_encodeByte_byte_R_char(ctx, ((jint)ARRAY_ACCESS(jbyte, sp[1].o, temp0)));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_char_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_char_R_java_lang_StringBuilder])(ctx, sp[0].o, temp1);
	}
label_22:;
	LINE_NUMBER(1712);
	goto label_2;
label_3:;
	{
	LINE_NUMBER(1713);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, (frame[1].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject SM_java_lang_UnicodeHelper_extractRle_java_lang_String_R_Array1_java_lang_UnicodeHelper$Range(jcontext ctx, jobject param0) {
	jtype frame[20];
	auto stack = &frame[12];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/lang/UnicodeHelper:extractRle", 20 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_lang_UnicodeHelper(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(1717);
	sp[0].o = (jobject)createArray(ctx, &class_java_lang_UnicodeHelper$Range, (16384));
	frame[1].o = sp[0].o;
	LINE_NUMBER(1718);
	sp[0].o = (jobject) createArray(ctx, &class_byte, (16384));
	frame[2].o = sp[0].o;
	LINE_NUMBER(1719);
	frame[3].i = (jint(0));
	LINE_NUMBER(1720);
	frame[4].i = (jint(0));
	LINE_NUMBER(1721);
	frame[5].i = (jint(0));
	LINE_NUMBER(1722);
	frame[6].i = (jint(0));
	}
label_6:;
	{
	jint temp0 = frame[6].i;
	jint temp1 = (jint)((func_java_lang_String_length_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_lang_String_length_R_int])(ctx, (frame[0].o));
	if (temp0 >= temp1) goto label_7;
	}
	{
	LINE_NUMBER(1723);
	jint temp0 = (jint)((func_java_lang_String_charAt_int_R_char) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_lang_String_charAt_int_R_char])(ctx, (frame[0].o), (frame[6].i));
	jint temp1 = (jint)SM_java_lang_UnicodeHelper_decodeByte_char_R_byte(ctx, temp0);
	frame[7].i = temp1;
	LINE_NUMBER(1725);
	if ((frame[7].i) != (64)) goto label_10;
	}
	{
	LINE_NUMBER(1726);
	sp[0].o = frame[0].o;
	INST_IINC(6, 1);
	jint temp0 = (jint)((func_java_lang_String_charAt_int_R_char) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_String_charAt_int_R_char])(ctx, sp[0].o, (frame[6].i));
	jint temp1 = (jint)SM_java_lang_UnicodeHelper_decodeByte_char_R_byte(ctx, temp0);
	frame[7].i = temp1;
	LINE_NUMBER(1727);
	frame[8].i = (jint(0));
	LINE_NUMBER(1728);
	frame[9].i = (jint(1));
	LINE_NUMBER(1729);
	frame[10].i = (jint(0));
	}
label_15:;
	{
	if ((frame[10].i) >= (jint(3))) goto label_16;
	}
	{
	LINE_NUMBER(1730);
	sp[0].o = frame[0].o;
	INST_IINC(6, 1);
	jint temp0 = (jint)((func_java_lang_String_charAt_int_R_char) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_String_charAt_int_R_char])(ctx, sp[0].o, (frame[6].i));
	jint temp1 = (jint)SM_java_lang_UnicodeHelper_decodeByte_char_R_byte(ctx, temp0);
	frame[11].i = temp1;
	LINE_NUMBER(1731);
	frame[8].i = ((frame[8].i) | ((frame[9].i) * (frame[11].i)));
	LINE_NUMBER(1732);
	frame[9].i = ((frame[9].i) * (64));
	LINE_NUMBER(1729);
	INST_IINC(10, 1);
	goto label_15;
	}
label_16:;
	LINE_NUMBER(1734);
	goto label_21;
label_10:;
	{
	if ((frame[7].i) < (32)) goto label_22;
	}
	{
	LINE_NUMBER(1735);
	frame[7].i = (jbyte(((frame[7].i) - (32))));
	LINE_NUMBER(1736);
	sp[0].o = frame[0].o;
	INST_IINC(6, 1);
	jint temp0 = (jint)((func_java_lang_String_charAt_int_R_char) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_String_charAt_int_R_char])(ctx, sp[0].o, (frame[6].i));
	jint temp1 = (jint)SM_java_lang_UnicodeHelper_decodeByte_char_R_byte(ctx, temp0);
	frame[8].i = temp1;
	goto label_21;
	}
label_22:;
	{
	LINE_NUMBER(1738);
	frame[8].i = (jint(1));
	}
label_21:;
	{
	LINE_NUMBER(1740);
	if ((frame[7].i) != 0) goto label_26;
	}
	{
	if ((frame[8].i) >= (128)) goto label_27;
	}
label_26:;
	{
	LINE_NUMBER(1741);
	if (((frame[3].i) + (frame[8].i)) < (((jarray) nullCheck(ctx, (frame[2].o)))->length)) goto label_28;
	}
	{
	LINE_NUMBER(1742);
	sp[0].o = frame[1].o;
	jint temp0 = frame[4].i;
	INST_IINC(4, 1);
	clinit_java_lang_UnicodeHelper$Range(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_lang_UnicodeHelper$Range);
	jint temp1 = frame[5].i;
	jint temp2 = (frame[5].i) + (frame[3].i);
	sp[2].o = (jobject)SM_java_util_Arrays_copyOf_Array1_byte_int_R_Array1_byte(ctx, (frame[2].o), (frame[3].i));
	init_java_lang_UnicodeHelper$Range_int_int_Array1_byte(ctx, sp[1].o, temp1, temp2, sp[2].o);
	ARRAY_ACCESS(jobject, sp[0].o, temp0) = sp[1].o;
	LINE_NUMBER(1743);
	frame[5].i = ((frame[5].i) + ((frame[3].i) + (frame[8].i)));
	LINE_NUMBER(1744);
	frame[3].i = (jint(0));
	}
label_28:;
	{
	LINE_NUMBER(1746);
	jint temp0 = frame[8].i;
	INST_IINC(8, -1);
	if (temp0 <= 0) goto label_32;
	}
	{
	LINE_NUMBER(1747);
	sp[0].o = frame[2].o;
	jint temp0 = frame[3].i;
	INST_IINC(3, 1);
	ARRAY_ACCESS(jbyte, sp[0].o, temp0) = (frame[7].i);
	goto label_28;
	}
label_27:;
	{
	LINE_NUMBER(1750);
	if ((frame[3].i) <= 0) goto label_34;
	}
	{
	LINE_NUMBER(1751);
	sp[0].o = frame[1].o;
	jint temp0 = frame[4].i;
	INST_IINC(4, 1);
	clinit_java_lang_UnicodeHelper$Range(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_lang_UnicodeHelper$Range);
	jint temp1 = frame[5].i;
	jint temp2 = (frame[5].i) + (frame[3].i);
	sp[2].o = (jobject)SM_java_util_Arrays_copyOf_Array1_byte_int_R_Array1_byte(ctx, (frame[2].o), (frame[3].i));
	init_java_lang_UnicodeHelper$Range_int_int_Array1_byte(ctx, sp[1].o, temp1, temp2, sp[2].o);
	ARRAY_ACCESS(jobject, sp[0].o, temp0) = sp[1].o;
	}
label_34:;
	{
	LINE_NUMBER(1753);
	frame[5].i = ((frame[5].i) + ((frame[3].i) + (frame[8].i)));
	LINE_NUMBER(1754);
	frame[3].i = (jint(0));
	}
label_32:;
	{
	LINE_NUMBER(1722);
	INST_IINC(6, 1);
	goto label_6;
	}
label_7:;
	{
	LINE_NUMBER(1757);
	sp[0].o = (jobject)SM_java_util_Arrays_copyOf_Array1_java_lang_Object_int_R_Array1_java_lang_Object(ctx, (frame[1].o), (frame[4].i));
	popStackFrame(ctx);
	return (checkCast(ctx, getArrayClass(&class_java_lang_UnicodeHelper$Range, 1), sp[0].o));
	}

	popStackFrame(ctx);
}

void *vtable_java_lang_UnicodeHelper[] {
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

static jclass innerClasses[] {
	&class_java_lang_UnicodeHelper$Range,
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_java_lang_UnicodeHelper, 0, "()V", 2 },
	{ "hexDigit", (intptr_t) SM_java_lang_UnicodeHelper_hexDigit_int_R_char, 0, "(I)C", 8 },
	{ "valueOfHexDigit", (intptr_t) SM_java_lang_UnicodeHelper_valueOfHexDigit_char_R_int, 0, "(C)I", 8 },
	{ "encodeIntPairsDiff", (intptr_t) SM_java_lang_UnicodeHelper_encodeIntPairsDiff_Array1_int_R_java_lang_String, 0, "([I)Ljava/lang/String;", 9 },
	{ "decodeIntPairsDiff", (intptr_t) SM_java_lang_UnicodeHelper_decodeIntPairsDiff_java_lang_String_R_Array1_int, 0, "(Ljava/lang/String;)[I", 9 },
	{ "encodeIntDiff", (intptr_t) SM_java_lang_UnicodeHelper_encodeIntDiff_Array1_int_R_java_lang_String, 0, "([I)Ljava/lang/String;", 9 },
	{ "decodeIntDiff", (intptr_t) SM_java_lang_UnicodeHelper_decodeIntDiff_java_lang_String_R_Array1_int, 0, "(Ljava/lang/String;)[I", 9 },
	{ "encodeByte", (intptr_t) SM_java_lang_UnicodeHelper_encodeByte_byte_R_char, 0, "(B)C", 9 },
	{ "decodeByte", (intptr_t) SM_java_lang_UnicodeHelper_decodeByte_char_R_byte, 0, "(C)B", 9 },
	{ "compressRle", (intptr_t) SM_java_lang_UnicodeHelper_compressRle_Array1_byte_R_java_lang_String, 0, "([B)Ljava/lang/String;", 9 },
	{ "extractRle", (intptr_t) SM_java_lang_UnicodeHelper_extractRle_java_lang_String_R_Array1_java_lang_UnicodeHelper$Range, 0, "(Ljava/lang/String;)[Ljava/lang/UnicodeHelper$Range;", 9 },
};

Class class_java_lang_UnicodeHelper{
		.nativeName = (intptr_t) "java/lang/UnicodeHelper",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(java_lang_UnicodeHelper),
		.classVtable = (intptr_t) vtable_java_lang_UnicodeHelper,
		.staticInitializer = (intptr_t) clinit_java_lang_UnicodeHelper,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_java_lang_UnicodeHelper,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 1,
		.nativeInnerClasses = (intptr_t) innerClasses,
		.access = 32,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 0,
		.nativeFields = (intptr_t) nullptr,
		.methodCount = 11,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 11,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_java_lang_UnicodeHelper = registerClass(&class_java_lang_UnicodeHelper);

}
