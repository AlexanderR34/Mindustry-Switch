#include "java/net/IPAddressUtil.h"
#include "java/lang/StringBuilder.h"
#include "java/net/URL.h"
#include "java/nio/CharBuffer.h"
#include "java/lang/IllegalArgumentException.h"
#include "java/lang/CharSequence.h"
#include "java/lang/Object.h"
#include "java/lang/String.h"
#include "java/lang/Character.h"
#include "java/nio/Buffer.h"
#include "java/lang/AssertionError.h"
#include "java/net/IPAddressUtil.h"
#include "java/util/Arrays.h"
#include "java/net/InetAddress.h"
#include "java/util/concurrent/ConcurrentHashMap.h"
#include "java/net/InetSocketAddress.h"
#include "java/lang/Class.h"
#include "java/lang/System.h"

extern "C" {

jint SF_java_net_IPAddressUtil_INADDR4SZ;
jint SF_java_net_IPAddressUtil_INADDR16SZ;
jint SF_java_net_IPAddressUtil_INT16SZ;
jlong SF_java_net_IPAddressUtil_L_IPV6_DELIMS;
jlong SF_java_net_IPAddressUtil_H_IPV6_DELIMS;
jlong SF_java_net_IPAddressUtil_L_GEN_DELIMS;
jlong SF_java_net_IPAddressUtil_H_GEN_DELIMS;
jlong SF_java_net_IPAddressUtil_L_AUTH_DELIMS;
jlong SF_java_net_IPAddressUtil_H_AUTH_DELIMS;
jlong SF_java_net_IPAddressUtil_L_COLON;
jlong SF_java_net_IPAddressUtil_H_COLON;
jlong SF_java_net_IPAddressUtil_L_SLASH;
jlong SF_java_net_IPAddressUtil_H_SLASH;
jlong SF_java_net_IPAddressUtil_L_BACKSLASH;
jlong SF_java_net_IPAddressUtil_H_BACKSLASH;
jlong SF_java_net_IPAddressUtil_L_NON_PRINTABLE;
jlong SF_java_net_IPAddressUtil_H_NON_PRINTABLE;
jlong SF_java_net_IPAddressUtil_L_EXCLUDE;
jlong SF_java_net_IPAddressUtil_H_EXCLUDE;
jobject SF_java_net_IPAddressUtil_OTHERS;
jobject SF_java_net_IPAddressUtil_cache;
jint SF_java_net_IPAddressUtil_HEXADECIMAL;
jint SF_java_net_IPAddressUtil_DECIMAL;
jint SF_java_net_IPAddressUtil_OCTAL;
jobject SF_java_net_IPAddressUtil_SUPPORTED_RADIXES;
jlong SF_java_net_IPAddressUtil_CANT_PARSE_IN_RADIX;
jlong SF_java_net_IPAddressUtil_TERMINAL_PARSE_ERROR;
jobject SF_java_net_IPAddressUtil_ALLOW_AMBIGUOUS_IPADDRESS_LITERALS_SP;
jbool SF_java_net_IPAddressUtil_ALLOW_AMBIGUOUS_IPADDRESS_LITERALS_SP_VALUE;
jbool SF_java_net_IPAddressUtil_$assertionsDisabled;

void mark_java_net_IPAddressUtil(jobject object, jint mark, jint depth) {
	if (!object) {
		if (SF_java_net_IPAddressUtil_OTHERS)
			((gc_mark_ptr) ((jclass) ((jobject) SF_java_net_IPAddressUtil_OTHERS)->clazz)->markFunction)((jobject) SF_java_net_IPAddressUtil_OTHERS, mark, depth + 1);
		if (SF_java_net_IPAddressUtil_cache)
			((gc_mark_ptr) ((jclass) ((jobject) SF_java_net_IPAddressUtil_cache)->clazz)->markFunction)((jobject) SF_java_net_IPAddressUtil_cache, mark, depth + 1);
		if (SF_java_net_IPAddressUtil_SUPPORTED_RADIXES)
			((gc_mark_ptr) ((jclass) ((jobject) SF_java_net_IPAddressUtil_SUPPORTED_RADIXES)->clazz)->markFunction)((jobject) SF_java_net_IPAddressUtil_SUPPORTED_RADIXES, mark, depth + 1);
		if (SF_java_net_IPAddressUtil_ALLOW_AMBIGUOUS_IPADDRESS_LITERALS_SP)
			((gc_mark_ptr) ((jclass) ((jobject) SF_java_net_IPAddressUtil_ALLOW_AMBIGUOUS_IPADDRESS_LITERALS_SP)->clazz)->markFunction)((jobject) SF_java_net_IPAddressUtil_ALLOW_AMBIGUOUS_IPADDRESS_LITERALS_SP, mark, depth + 1);
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
	auto self = (java_net_IPAddressUtil *) object;
}

void init_java_net_IPAddressUtil(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/net/IPAddressUtil:<init>", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_net_IPAddressUtil(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(38);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(39);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject SM_java_net_IPAddressUtil_textToNumericFormatV4_java_lang_String_R_Array1_byte(jcontext ctx, jobject param0) {
	jtype frame[16];
	auto stack = &frame[10];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/net/IPAddressUtil:textToNumericFormatV4", 16 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_net_IPAddressUtil(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(42);
	sp[0].o = (jobject) createArray(ctx, &class_byte, (jint(4)));
	frame[1].o = sp[0].o;
	LINE_NUMBER(43);
	frame[2].l = (jlong(0));
	LINE_NUMBER(44);
	frame[4].i = (jint(0));
	LINE_NUMBER(45);
	frame[5].i = (jint(1));
	LINE_NUMBER(46);
	jint temp0 = (jint)((func_java_lang_String_length_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_lang_String_length_R_int])(ctx, (frame[0].o));
	frame[6].i = temp0;
	LINE_NUMBER(47);
	if ((frame[6].i) == 0) goto label_6;
	}
	{
	if ((frame[6].i) > (15)) goto label_6;
	}
	{
	LINE_NUMBER(48);
	frame[7].i = (jint(0));
	}
label_8:;
	{
	if ((frame[7].i) >= (frame[6].i)) goto label_9;
	}
	{
	LINE_NUMBER(49);
	jint temp0 = (jint)((func_java_lang_String_charAt_int_R_char) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_lang_String_charAt_int_R_char])(ctx, (frame[0].o), (frame[7].i));
	frame[8].i = temp0;
	LINE_NUMBER(50);
	if ((frame[8].i) != (46)) goto label_12;
	}
	{
	LINE_NUMBER(51);
	if ((frame[5].i) != 0) goto label_14;
	}
	{
	if ((longCompare((frame[2].l), (jlong(0)))) < 0) goto label_14;
	}
	{
	if ((longCompare((frame[2].l), (jlong(255ll)))) > 0) goto label_14;
	}
	{
	if ((frame[4].i) != (jint(3))) goto label_15;
	}
label_14:;
	{
	LINE_NUMBER(52);
	popStackFrame(ctx);
	return (jobject(nullptr));
	}
label_15:;
	{
	LINE_NUMBER(55);
	sp[0].o = frame[1].o;
	jint temp0 = frame[4].i;
	INST_IINC(4, 1);
	ARRAY_ACCESS(jbyte, sp[0].o, temp0) = (jbyte((jint(((frame[2].l) & (jlong(255ll)))))));
	LINE_NUMBER(56);
	frame[2].l = (jlong(0));
	LINE_NUMBER(57);
	frame[5].i = (jint(1));
	goto label_18;
	}
label_12:;
	{
	LINE_NUMBER(59);
	jint temp0 = (jint)SM_java_net_IPAddressUtil_digit_char_int_R_int(ctx, (frame[8].i), (10));
	frame[9].i = temp0;
	LINE_NUMBER(60);
	if ((frame[9].i) >= 0) goto label_20;
	}
	{
	LINE_NUMBER(61);
	popStackFrame(ctx);
	return (jobject(nullptr));
	}
label_20:;
	{
	LINE_NUMBER(64);
	frame[2].l = ((frame[2].l) * (jlong(10ll)));
	LINE_NUMBER(65);
	frame[2].l = ((frame[2].l) + (jlong((frame[9].i))));
	LINE_NUMBER(66);
	frame[5].i = (jint(0));
	}
label_18:;
	{
	LINE_NUMBER(48);
	INST_IINC(7, 1);
	goto label_8;
	}
label_9:;
	{
	LINE_NUMBER(70);
	if ((frame[5].i) != 0) goto label_24;
	}
	{
	if ((longCompare((frame[2].l), (jlong(0)))) < 0) goto label_24;
	}
	{
	if ((longCompare((frame[2].l), ((jlong(1)) << (((jint(4)) - (frame[4].i)) * (8))))) >= 0) goto label_24;
	}
	{
	LINE_NUMBER(71);
	switch((frame[4].i)) {
		case 0: goto label_26;
		case 1: goto label_27;
		case 2: goto label_28;
		case 3: goto label_29;
		default: goto label_30;
	}
	}
label_26:;
	{
	LINE_NUMBER(73);
	ARRAY_ACCESS(jbyte, (frame[1].o), (jint(0))) = (jbyte((jint((((frame[2].l) >> (24)) & (jlong(255ll)))))));
	}
label_27:;
	{
	LINE_NUMBER(75);
	ARRAY_ACCESS(jbyte, (frame[1].o), (jint(1))) = (jbyte((jint((((frame[2].l) >> (16)) & (jlong(255ll)))))));
	}
label_28:;
	{
	LINE_NUMBER(77);
	ARRAY_ACCESS(jbyte, (frame[1].o), (jint(2))) = (jbyte((jint((((frame[2].l) >> (8)) & (jlong(255ll)))))));
	}
label_29:;
	{
	LINE_NUMBER(79);
	ARRAY_ACCESS(jbyte, (frame[1].o), (jint(3))) = (jbyte((jint((((frame[2].l) >> (jint(0))) & (jlong(255ll)))))));
	}
label_30:;
	{
	LINE_NUMBER(81);
	popStackFrame(ctx);
	return (frame[1].o);
	}
label_24:;
	{
	LINE_NUMBER(84);
	popStackFrame(ctx);
	return (jobject(nullptr));
	}
label_6:;
	{
	LINE_NUMBER(87);
	popStackFrame(ctx);
	return (jobject(nullptr));
	}

	popStackFrame(ctx);
}

jobject SM_java_net_IPAddressUtil_validateNumericFormatV4_java_lang_String_R_Array1_byte(jcontext ctx, jobject param0) {
	jtype frame[6];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/net/IPAddressUtil:validateNumericFormatV4", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_net_IPAddressUtil(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(92);
	sp[0].o = (jobject)SM_java_net_IPAddressUtil_textToNumericFormatV4_java_lang_String_R_Array1_byte(ctx, (frame[0].o));
	frame[1].o = sp[0].o;
	LINE_NUMBER(93);
	if ((frame[1].o) != nullptr) goto label_2;
	}
	{
	jint temp0 = (jint)SM_java_net_IPAddressUtil_isBsdParsableV4_java_lang_String_R_boolean(ctx, (frame[0].o));
	if (temp0 == 0) goto label_2;
	}
	{
	LINE_NUMBER(94);
	clinit_java_lang_IllegalArgumentException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IllegalArgumentException);
	clinit_java_lang_StringBuilder(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[1].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"Invalid IP address literal: "_j))));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (frame[0].o));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[1].o);
	init_java_lang_IllegalArgumentException_java_lang_String(ctx, sp[0].o, sp[1].o);
	throwException(ctx, sp[0].o);	}
label_2:;
	{
	LINE_NUMBER(96);
	popStackFrame(ctx);
	return (frame[1].o);
	}

	popStackFrame(ctx);
}

jobject SM_java_net_IPAddressUtil_textToNumericFormatV6_java_lang_String_R_Array1_byte(jcontext ctx, jobject param0) {
	jtype frame[22];
	auto stack = &frame[17];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/net/IPAddressUtil:textToNumericFormatV6", 22 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_net_IPAddressUtil(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(101);
	jint temp0 = (jint)((func_java_lang_String_length_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_lang_String_length_R_int])(ctx, (frame[0].o));
	if (temp0 >= (jint(2))) goto label_1;
	}
	{
	LINE_NUMBER(102);
	popStackFrame(ctx);
	return (jobject(nullptr));
	}
label_1:;
	{
	LINE_NUMBER(104);
	sp[0].o = (jobject)((func_java_lang_String_toCharArray_R_Array1_char) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_lang_String_toCharArray_R_Array1_char])(ctx, (frame[0].o));
	frame[1].o = sp[0].o;
	LINE_NUMBER(105);
	sp[0].o = (jobject) createArray(ctx, &class_byte, (16));
	frame[2].o = sp[0].o;
	LINE_NUMBER(106);
	frame[3].i = (((jarray) nullCheck(ctx, (frame[1].o)))->length);
	LINE_NUMBER(107);
	jint temp0 = (jint)((func_java_lang_String_indexOf_int_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_lang_String_indexOf_int_R_int])(ctx, (frame[0].o), (37));
	frame[4].i = temp0;
	LINE_NUMBER(108);
	if ((frame[4].i) != ((frame[3].i) - (jint(1)))) goto label_7;
	}
	{
	LINE_NUMBER(109);
	popStackFrame(ctx);
	return (jobject(nullptr));
	}
label_7:;
	{
	LINE_NUMBER(111);
	if ((frame[4].i) == (jint(-1))) goto label_9;
	}
	{
	LINE_NUMBER(112);
	frame[3].i = (frame[4].i);
	}
label_9:;
	{
	LINE_NUMBER(115);
	frame[5].i = (jint(-1));
	LINE_NUMBER(116);
	frame[6].i = (jint(0));
	LINE_NUMBER(117);
	frame[7].i = (jint(0));
	LINE_NUMBER(118);
	if (((jint)ARRAY_ACCESS(jchar, (frame[1].o), (frame[6].i))) != (58)) goto label_14;
	}
	{
	LINE_NUMBER(119);
	INST_IINC(6, 1);
	LINE_NUMBER(120);
	if (((jint)ARRAY_ACCESS(jchar, (frame[1].o), (frame[6].i))) == (58)) goto label_14;
	}
	{
	LINE_NUMBER(121);
	popStackFrame(ctx);
	return (jobject(nullptr));
	}
label_14:;
	{
	LINE_NUMBER(125);
	frame[8].i = (frame[6].i);
	LINE_NUMBER(126);
	frame[9].i = (jint(0));
	LINE_NUMBER(127);
	frame[10].i = (jint(0));
	}
label_20:;
	{
	LINE_NUMBER(131);
	if ((frame[6].i) >= (frame[3].i)) goto label_21;
	}
	{
	LINE_NUMBER(132);
	sp[0].o = frame[1].o;
	jint temp0 = frame[6].i;
	INST_IINC(6, 1);
	frame[12].i = ((jint)ARRAY_ACCESS(jchar, sp[0].o, temp0));
	LINE_NUMBER(133);
	jint temp1 = (jint)SM_java_net_IPAddressUtil_digit_char_int_R_int(ctx, (frame[12].i), (16));
	frame[11].i = temp1;
	LINE_NUMBER(134);
	if ((frame[11].i) == (jint(-1))) goto label_25;
	}
	{
	LINE_NUMBER(135);
	frame[10].i = ((frame[10].i) << (jint(4)));
	LINE_NUMBER(136);
	frame[10].i = ((frame[10].i) | (frame[11].i));
	LINE_NUMBER(137);
	if ((frame[10].i) <= (jint(65535))) goto label_29;
	}
	{
	LINE_NUMBER(138);
	popStackFrame(ctx);
	return (jobject(nullptr));
	}
label_29:;
	{
	LINE_NUMBER(141);
	frame[9].i = (jint(1));
	goto label_31;
	}
label_25:;
	{
	LINE_NUMBER(143);
	if ((frame[12].i) == (58)) goto label_32;
	}
	{
	LINE_NUMBER(144);
	if ((frame[12].i) != (46)) goto label_34;
	}
	{
	if (((frame[7].i) + (jint(4))) > (16)) goto label_34;
	}
	{
	LINE_NUMBER(145);
	sp[0].o = (jobject)((func_java_lang_String_substring_int_int_R_java_lang_String) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_lang_String_substring_int_int_R_java_lang_String])(ctx, (frame[0].o), (frame[8].i), (frame[3].i));
	frame[13].o = sp[0].o;
	LINE_NUMBER(146);
	frame[14].i = (jint(0));
	LINE_NUMBER(148);
	frame[15].i = (jint(0));
	}
label_38:;
	{
	jint temp0 = (jint)((func_java_lang_String_indexOf_int_int_R_int) ((void **) nullCheck(ctx, (frame[13].o))->vtable)[VTABLE_java_lang_String_indexOf_int_int_R_int])(ctx, (frame[13].o), (46), (frame[15].i));
	frame[15].i = temp0;
	if (temp0 == (jint(-1))) goto label_39;
	}
	{
	LINE_NUMBER(149);
	INST_IINC(14, 1);
	LINE_NUMBER(148);
	INST_IINC(15, 1);
	goto label_38;
	}
label_39:;
	{
	LINE_NUMBER(152);
	if ((frame[14].i) == (jint(3))) goto label_42;
	}
	{
	LINE_NUMBER(153);
	popStackFrame(ctx);
	return (jobject(nullptr));
	}
label_42:;
	{
	LINE_NUMBER(156);
	sp[0].o = (jobject)SM_java_net_IPAddressUtil_textToNumericFormatV4_java_lang_String_R_Array1_byte(ctx, (frame[13].o));
	frame[15].o = sp[0].o;
	LINE_NUMBER(157);
	if ((frame[15].o) != nullptr) goto label_45;
	}
	{
	LINE_NUMBER(158);
	popStackFrame(ctx);
	return (jobject(nullptr));
	}
label_45:;
	{
	LINE_NUMBER(161);
	frame[16].i = (jint(0));
	}
label_47:;
	{
	if ((frame[16].i) >= (jint(4))) goto label_48;
	}
	{
	LINE_NUMBER(162);
	sp[0].o = frame[2].o;
	jint temp0 = frame[7].i;
	INST_IINC(7, 1);
	ARRAY_ACCESS(jbyte, sp[0].o, temp0) = ((jint)ARRAY_ACCESS(jbyte, (frame[15].o), (frame[16].i)));
	LINE_NUMBER(161);
	INST_IINC(16, 1);
	goto label_47;
	}
label_48:;
	{
	LINE_NUMBER(165);
	frame[9].i = (jint(0));
	LINE_NUMBER(166);
	goto label_21;
	}
label_34:;
	{
	LINE_NUMBER(169);
	popStackFrame(ctx);
	return (jobject(nullptr));
	}
label_32:;
	{
	LINE_NUMBER(172);
	frame[8].i = (frame[6].i);
	LINE_NUMBER(173);
	if ((frame[9].i) != 0) goto label_53;
	}
	{
	LINE_NUMBER(174);
	if ((frame[5].i) == (jint(-1))) goto label_55;
	}
	{
	LINE_NUMBER(175);
	popStackFrame(ctx);
	return (jobject(nullptr));
	}
label_55:;
	{
	LINE_NUMBER(178);
	frame[5].i = (frame[7].i);
	goto label_31;
	}
label_53:;
	{
	LINE_NUMBER(180);
	if ((frame[6].i) != (frame[3].i)) goto label_57;
	}
	{
	LINE_NUMBER(181);
	popStackFrame(ctx);
	return (jobject(nullptr));
	}
label_57:;
	{
	LINE_NUMBER(184);
	if (((frame[7].i) + (jint(2))) <= (16)) goto label_59;
	}
	{
	LINE_NUMBER(185);
	popStackFrame(ctx);
	return (jobject(nullptr));
	}
label_59:;
	{
	LINE_NUMBER(188);
	sp[0].o = frame[2].o;
	jint temp0 = frame[7].i;
	INST_IINC(7, 1);
	ARRAY_ACCESS(jbyte, sp[0].o, temp0) = (jbyte((((frame[10].i) >> (8)) & (255))));
	LINE_NUMBER(189);
	sp[0].o = frame[2].o;
	jint temp1 = frame[7].i;
	INST_IINC(7, 1);
	ARRAY_ACCESS(jbyte, sp[0].o, temp1) = (jbyte(((frame[10].i) & (255))));
	LINE_NUMBER(190);
	frame[9].i = (jint(0));
	LINE_NUMBER(191);
	frame[10].i = (jint(0));
	}
label_31:;
	LINE_NUMBER(194);
	goto label_20;
label_21:;
	{
	LINE_NUMBER(196);
	if ((frame[9].i) == 0) goto label_64;
	}
	{
	LINE_NUMBER(197);
	if (((frame[7].i) + (jint(2))) <= (16)) goto label_66;
	}
	{
	LINE_NUMBER(198);
	popStackFrame(ctx);
	return (jobject(nullptr));
	}
label_66:;
	{
	LINE_NUMBER(201);
	sp[0].o = frame[2].o;
	jint temp0 = frame[7].i;
	INST_IINC(7, 1);
	ARRAY_ACCESS(jbyte, sp[0].o, temp0) = (jbyte((((frame[10].i) >> (8)) & (255))));
	LINE_NUMBER(202);
	sp[0].o = frame[2].o;
	jint temp1 = frame[7].i;
	INST_IINC(7, 1);
	ARRAY_ACCESS(jbyte, sp[0].o, temp1) = (jbyte(((frame[10].i) & (255))));
	}
label_64:;
	{
	LINE_NUMBER(205);
	if ((frame[5].i) == (jint(-1))) goto label_69;
	}
	{
	LINE_NUMBER(206);
	frame[11].i = ((frame[7].i) - (frame[5].i));
	LINE_NUMBER(207);
	if ((frame[7].i) != (16)) goto label_72;
	}
	{
	LINE_NUMBER(208);
	popStackFrame(ctx);
	return (jobject(nullptr));
	}
label_72:;
	{
	LINE_NUMBER(211);
	frame[6].i = (jint(1));
	}
label_74:;
	{
	if ((frame[6].i) > (frame[11].i)) goto label_75;
	}
	{
	LINE_NUMBER(212);
	ARRAY_ACCESS(jbyte, (frame[2].o), ((16) - (frame[6].i))) = ((jint)ARRAY_ACCESS(jbyte, (frame[2].o), (((frame[5].i) + (frame[11].i)) - (frame[6].i))));
	LINE_NUMBER(213);
	ARRAY_ACCESS(jbyte, (frame[2].o), (((frame[5].i) + (frame[11].i)) - (frame[6].i))) = (jint(0));
	LINE_NUMBER(211);
	INST_IINC(6, 1);
	goto label_74;
	}
label_75:;
	{
	LINE_NUMBER(216);
	frame[7].i = (16);
	}
label_69:;
	{
	LINE_NUMBER(219);
	if ((frame[7].i) == (16)) goto label_79;
	}
	{
	LINE_NUMBER(220);
	popStackFrame(ctx);
	return (jobject(nullptr));
	}
label_79:;
	{
	LINE_NUMBER(223);
	sp[0].o = (jobject)SM_java_net_IPAddressUtil_convertFromIPv4MappedAddress_Array1_byte_R_Array1_byte(ctx, (frame[2].o));
	frame[12].o = sp[0].o;
	LINE_NUMBER(224);
	if ((frame[12].o) == nullptr) goto label_82;
	}
	{
	LINE_NUMBER(225);
	popStackFrame(ctx);
	return (frame[12].o);
	}
label_82:;
	{
	LINE_NUMBER(228);
	popStackFrame(ctx);
	return (frame[2].o);
	}

	popStackFrame(ctx);
}

jbool SM_java_net_IPAddressUtil_isIPv4LiteralAddress_java_lang_String_R_boolean(jcontext ctx, jobject param0) {
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/net/IPAddressUtil:isIPv4LiteralAddress", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_net_IPAddressUtil(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(235);
	sp[0].o = (jobject)SM_java_net_IPAddressUtil_textToNumericFormatV4_java_lang_String_R_Array1_byte(ctx, (frame[0].o));
	if (sp[0].o == nullptr) goto label_1;
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

jbool SM_java_net_IPAddressUtil_isIPv6LiteralAddress_java_lang_String_R_boolean(jcontext ctx, jobject param0) {
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/net/IPAddressUtil:isIPv6LiteralAddress", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_net_IPAddressUtil(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(239);
	sp[0].o = (jobject)SM_java_net_IPAddressUtil_textToNumericFormatV6_java_lang_String_R_Array1_byte(ctx, (frame[0].o));
	if (sp[0].o == nullptr) goto label_1;
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

jobject SM_java_net_IPAddressUtil_convertFromIPv4MappedAddress_Array1_byte_R_Array1_byte(jcontext ctx, jobject param0) {
	jtype frame[7];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/net/IPAddressUtil:convertFromIPv4MappedAddress", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_net_IPAddressUtil(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(243);
	jint temp0 = (jint)SM_java_net_IPAddressUtil_isIPv4MappedAddress_Array1_byte_R_boolean(ctx, (frame[0].o));
	if (temp0 == 0) goto label_1;
	}
	{
	LINE_NUMBER(244);
	sp[0].o = (jobject) createArray(ctx, &class_byte, (jint(4)));
	frame[1].o = sp[0].o;
	LINE_NUMBER(245);
	SM_java_lang_System_arraycopy_java_lang_Object_int_java_lang_Object_int_int(ctx, (frame[0].o), (12), (frame[1].o), (jint(0)), (jint(4)));
	LINE_NUMBER(246);
	popStackFrame(ctx);
	return (frame[1].o);
	}
label_1:;
	{
	LINE_NUMBER(248);
	popStackFrame(ctx);
	return (jobject(nullptr));
	}

	popStackFrame(ctx);
}

jbool SM_java_net_IPAddressUtil_isIPv4MappedAddress_Array1_byte_R_boolean(jcontext ctx, jobject param0) {
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/net/IPAddressUtil:isIPv4MappedAddress", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_net_IPAddressUtil(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(253);
	if ((((jarray) nullCheck(ctx, (frame[0].o)))->length) >= (16)) goto label_1;
	}
	{
	LINE_NUMBER(254);
	popStackFrame(ctx);
	return (jint(0));
	}
label_1:;
	{
	LINE_NUMBER(256);
	if (((jint)ARRAY_ACCESS(jbyte, (frame[0].o), (jint(0)))) != 0) goto label_3;
	}
	{
	if (((jint)ARRAY_ACCESS(jbyte, (frame[0].o), (jint(1)))) != 0) goto label_3;
	}
	{
	if (((jint)ARRAY_ACCESS(jbyte, (frame[0].o), (jint(2)))) != 0) goto label_3;
	}
	{
	if (((jint)ARRAY_ACCESS(jbyte, (frame[0].o), (jint(3)))) != 0) goto label_3;
	}
	{
	if (((jint)ARRAY_ACCESS(jbyte, (frame[0].o), (jint(4)))) != 0) goto label_3;
	}
	{
	if (((jint)ARRAY_ACCESS(jbyte, (frame[0].o), (jint(5)))) != 0) goto label_3;
	}
	{
	if (((jint)ARRAY_ACCESS(jbyte, (frame[0].o), (6))) != 0) goto label_3;
	}
	{
	if (((jint)ARRAY_ACCESS(jbyte, (frame[0].o), (7))) != 0) goto label_3;
	}
	{
	if (((jint)ARRAY_ACCESS(jbyte, (frame[0].o), (8))) != 0) goto label_3;
	}
	{
	if (((jint)ARRAY_ACCESS(jbyte, (frame[0].o), (9))) != 0) goto label_3;
	}
	{
	if (((jint)ARRAY_ACCESS(jbyte, (frame[0].o), (10))) != (jint(-1))) goto label_3;
	}
	{
	if (((jint)ARRAY_ACCESS(jbyte, (frame[0].o), (11))) != (jint(-1))) goto label_3;
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

jbool SM_java_net_IPAddressUtil_match_char_long_long_R_boolean(jcontext ctx, jchar param0, jlong param1, jlong param2) {
	jtype frame[9];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/net/IPAddressUtil:match", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_net_IPAddressUtil(ctx);
	frame[0].i = param0;
	frame[1].l = param1;
	frame[3].l = param2;
	{
	LINE_NUMBER(261);
	if ((frame[0].i) >= (64)) goto label_1;
	}
	{
	LINE_NUMBER(262);
	if ((longCompare((((jlong(1)) << (frame[0].i)) & (frame[1].l)), (jlong(0)))) == 0) goto label_3;
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
	LINE_NUMBER(263);
	if ((frame[0].i) >= (128)) goto label_5;
	}
	{
	LINE_NUMBER(264);
	if ((longCompare((((jlong(1)) << ((frame[0].i) - (64))) & (frame[3].l)), (jlong(0)))) == 0) goto label_7;
	}
	INST_ICONST(1);
	goto label_8;
label_7:;
	INST_ICONST(0);
label_8:;
	popStackFrame(ctx);
	INST_IRETURN();
label_5:;
	{
	LINE_NUMBER(266);
	popStackFrame(ctx);
	return (jint(0));
	}

	popStackFrame(ctx);
}

jint SM_java_net_IPAddressUtil_scan_java_lang_String_long_long_R_int(jcontext ctx, jobject param0, jlong param1, jlong param2) {
	jtype frame[13];
	auto stack = &frame[8];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/net/IPAddressUtil:scan", 13 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_net_IPAddressUtil(ctx);
	frame[0].o = param0;
	frame[1].l = param1;
	frame[3].l = param2;
	{
	LINE_NUMBER(271);
	frame[5].i = (jint(-1));
	LINE_NUMBER(273);
	if ((frame[0].o) == nullptr) goto label_2;
	}
	{
	jint temp0 = (jint)((func_java_lang_String_length_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_lang_String_length_R_int])(ctx, (frame[0].o));
	frame[6].i = temp0;
	if (temp0 == 0) goto label_2;
	}
	{
	LINE_NUMBER(274);
	frame[7].i = (jint(0));
	}
label_5:;
	{
	LINE_NUMBER(277);
	INST_IINC(5, 1);
	LINE_NUMBER(278);
	if ((frame[5].i) >= (frame[6].i)) goto label_7;
	}
	{
	jint temp0 = (jint)((func_java_lang_String_charAt_int_R_char) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_lang_String_charAt_int_R_char])(ctx, (frame[0].o), (frame[5].i));
	jint temp1 = (jint)SM_java_net_IPAddressUtil_match_char_long_long_R_boolean(ctx, temp0, (frame[1].l), (frame[3].l));
	frame[7].i = temp1;
	if (temp1 == 0) goto label_5;
	}
label_7:;
	{
	LINE_NUMBER(280);
	if ((frame[7].i) == 0) goto label_8;
	}
	INST_ILOAD(5);
	goto label_9;
label_8:;
	INST_ICONST(-1);
label_9:;
	popStackFrame(ctx);
	INST_IRETURN();
label_2:;
	{
	LINE_NUMBER(282);
	popStackFrame(ctx);
	return (jint(-1));
	}

	popStackFrame(ctx);
}

jint SM_java_net_IPAddressUtil_scan_java_lang_String_long_long_Array1_char_R_int(jcontext ctx, jobject param0, jlong param1, jlong param2, jobject param3) {
	jtype frame[16];
	auto stack = &frame[11];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/net/IPAddressUtil:scan", 16 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_net_IPAddressUtil(ctx);
	frame[0].o = param0;
	frame[1].l = param1;
	frame[3].l = param2;
	frame[5].o = param3;
	{
	LINE_NUMBER(287);
	frame[6].i = (jint(-1));
	LINE_NUMBER(289);
	if ((frame[0].o) == nullptr) goto label_2;
	}
	{
	jint temp0 = (jint)((func_java_lang_String_length_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_lang_String_length_R_int])(ctx, (frame[0].o));
	frame[7].i = temp0;
	if (temp0 == 0) goto label_2;
	}
	{
	LINE_NUMBER(290);
	frame[8].i = (jint(0));
	LINE_NUMBER(291);
	frame[9].i = ((jint)ARRAY_ACCESS(jchar, (frame[5].o), (jint(0))));
	}
label_6:;
	{
	LINE_NUMBER(294);
	INST_IINC(6, 1);
	LINE_NUMBER(296);
	if ((frame[6].i) >= (frame[7].i)) goto label_8;
	}
	{
	jint temp0 = (jint)((func_java_lang_String_charAt_int_R_char) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_lang_String_charAt_int_R_char])(ctx, (frame[0].o), (frame[6].i));
	frame[10].i = temp0;
	jint temp3 = (jint)SM_java_net_IPAddressUtil_match_char_long_long_R_boolean(ctx, temp0, (frame[1].l), (frame[3].l));
	frame[8].i = temp3;
	if (temp3 == 0) goto label_10;
	}
	LINE_NUMBER(297);
	goto label_8;
label_10:;
	{
	LINE_NUMBER(300);
	if ((frame[10].i) < (frame[9].i)) goto label_12;
	}
	{
	jint temp0 = (jint)SM_java_util_Arrays_binarySearch_Array1_char_char_R_int(ctx, (frame[5].o), (frame[10].i));
	if (temp0 <= (jint(-1))) goto label_12;
	}
	{
	LINE_NUMBER(301);
	frame[8].i = (jint(1));
	LINE_NUMBER(302);
	goto label_8;
	}
label_12:;
	LINE_NUMBER(304);
	goto label_6;
label_8:;
	{
	LINE_NUMBER(306);
	if ((frame[8].i) == 0) goto label_15;
	}
	INST_ILOAD(6);
	goto label_16;
label_15:;
	INST_ICONST(-1);
label_16:;
	popStackFrame(ctx);
	INST_IRETURN();
label_2:;
	{
	LINE_NUMBER(308);
	popStackFrame(ctx);
	return (jint(-1));
	}

	popStackFrame(ctx);
}

jobject SM_java_net_IPAddressUtil_describeChar_char_R_java_lang_String(jcontext ctx, jchar param0) {
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/net/IPAddressUtil:describeChar", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_net_IPAddressUtil(ctx);
	frame[0].i = param0;
	{
	LINE_NUMBER(313);
	if ((frame[0].i) < (32)) goto label_1;
	}
	{
	if ((frame[0].i) == (127)) goto label_1;
	}
	{
	LINE_NUMBER(314);
	if ((frame[0].i) != (92)) goto label_3;
	}
	(sp++)->o = ((jobject) createStringLiteral(ctx, u8"'\\'"_j));
	goto label_4;
label_3:;
	{
	clinit_java_lang_StringBuilder(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[0].o);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"'"_j))));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_char_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_char_R_java_lang_StringBuilder])(ctx, sp[0].o, (frame[0].i));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"'"_j))));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[0].o);
	sp += 1;
	}
label_4:;
	popStackFrame(ctx);
	INST_ARETURN();
label_1:;
	{
	LINE_NUMBER(315);
	if ((frame[0].i) != (10)) goto label_5;
	}
	{
	LINE_NUMBER(316);
	popStackFrame(ctx);
	return (((jobject) createStringLiteral(ctx, u8"LF"_j)));
	}
label_5:;
	{
	LINE_NUMBER(318);
	if ((frame[0].i) != (13)) goto label_7;
	}
	(sp++)->o = ((jobject) createStringLiteral(ctx, u8"CR"_j));
	goto label_8;
label_7:;
	{
	clinit_java_lang_StringBuilder(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[0].o);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"control char (code="_j))));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_char_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_char_R_java_lang_StringBuilder])(ctx, sp[0].o, (frame[0].i));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8")"_j))));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[0].o);
	sp += 1;
	}
label_8:;
	popStackFrame(ctx);
	INST_ARETURN();

	popStackFrame(ctx);
}

jobject SM_java_net_IPAddressUtil_checkUserInfo_java_lang_String_R_java_lang_String(jcontext ctx, jobject param0) {
	jtype frame[7];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/net/IPAddressUtil:checkUserInfo", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_net_IPAddressUtil(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(323);
	jint temp0 = (jint)SM_java_net_IPAddressUtil_scan_java_lang_String_long_long_R_int(ctx, (frame[0].o), (jlong(-9223231260711714817ll)), (jlong(-9223372035915251711ll)));
	frame[1].i = temp0;
	LINE_NUMBER(324);
	if ((frame[1].i) < 0) goto label_2;
	}
	{
	clinit_java_lang_StringBuilder(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[0].o);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"Illegal character found in user-info: "_j))));
	jint temp0 = (jint)((func_java_lang_String_charAt_int_R_char) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_lang_String_charAt_int_R_char])(ctx, (frame[0].o), (frame[1].i));
	sp[1].o = (jobject)SM_java_net_IPAddressUtil_describeChar_char_R_java_lang_String(ctx, temp0);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, sp[1].o);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[0].o);
	sp += 1;
	goto label_3;
	}
label_2:;
	INST_ACONST_NULL();
label_3:;
	popStackFrame(ctx);
	INST_ARETURN();

	popStackFrame(ctx);
}

jobject SM_java_net_IPAddressUtil_checkHost_java_lang_String_R_java_lang_String(jcontext ctx, jobject param0) {
	jtype frame[7];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/net/IPAddressUtil:checkHost", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_net_IPAddressUtil(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(329);
	jint temp0 = (jint)((func_java_lang_String_startsWith_java_lang_String_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_lang_String_startsWith_java_lang_String_R_boolean])(ctx, (frame[0].o), (((jobject) createStringLiteral(ctx, u8"["_j))));
	if (temp0 == 0) goto label_1;
	}
	{
	jint temp0 = (jint)((func_java_lang_String_endsWith_java_lang_String_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_lang_String_endsWith_java_lang_String_R_boolean])(ctx, (frame[0].o), (((jobject) createStringLiteral(ctx, u8"]"_j))));
	if (temp0 == 0) goto label_1;
	}
	{
	LINE_NUMBER(330);
	sp[0].o = frame[0].o;
	jint temp0 = jint(1);
	jint temp1 = (jint)((func_java_lang_String_length_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_lang_String_length_R_int])(ctx, (frame[0].o));
	sp[0].o = (jobject)((func_java_lang_String_substring_int_int_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_String_substring_int_int_R_java_lang_String])(ctx, sp[0].o, temp0, (temp1 - (jint(1))));
	frame[0].o = sp[0].o;
	LINE_NUMBER(331);
	jint temp2 = (jint)SM_java_net_IPAddressUtil_isIPv6LiteralAddress_java_lang_String_R_boolean(ctx, (frame[0].o));
	if (temp2 == 0) goto label_4;
	}
	{
	LINE_NUMBER(332);
	jint temp0 = (jint)((func_java_lang_String_indexOf_int_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_lang_String_indexOf_int_R_int])(ctx, (frame[0].o), (37));
	frame[1].i = temp0;
	LINE_NUMBER(333);
	if ((frame[1].i) < 0) goto label_7;
	}
	{
	LINE_NUMBER(334);
	sp[0].o = (jobject)((func_java_lang_String_substring_int_R_java_lang_String) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_lang_String_substring_int_R_java_lang_String])(ctx, (frame[0].o), (frame[1].i));
	frame[0].o = sp[0].o;
	jint temp0 = (jint)SM_java_net_IPAddressUtil_scan_java_lang_String_long_long_R_int(ctx, sp[0].o, (jlong(4294967295ll)), (jlong(-9223372036183687168ll)));
	frame[1].i = temp0;
	LINE_NUMBER(335);
	if ((frame[1].i) < 0) goto label_7;
	}
	{
	LINE_NUMBER(336);
	clinit_java_lang_StringBuilder(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[0].o);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"Illegal character found in IPv6 scoped address: "_j))));
	jint temp0 = (jint)((func_java_lang_String_charAt_int_R_char) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_lang_String_charAt_int_R_char])(ctx, (frame[0].o), (frame[1].i));
	sp[1].o = (jobject)SM_java_net_IPAddressUtil_describeChar_char_R_java_lang_String(ctx, temp0);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, sp[1].o);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[0].o);
	popStackFrame(ctx);
	return sp[0].o;
	}
label_7:;
	{
	LINE_NUMBER(340);
	popStackFrame(ctx);
	return (jobject(nullptr));
	}
label_4:;
	{
	LINE_NUMBER(342);
	popStackFrame(ctx);
	return (((jobject) createStringLiteral(ctx, u8"Unrecognized IPv6 address format"_j)));
	}
label_1:;
	{
	LINE_NUMBER(345);
	jint temp0 = (jint)SM_java_net_IPAddressUtil_scan_java_lang_String_long_long_R_int(ctx, (frame[0].o), (jlong(-8935000884560003073ll)), (jlong(-9223372035915251711ll)));
	frame[1].i = temp0;
	LINE_NUMBER(346);
	if ((frame[1].i) < 0) goto label_12;
	}
	{
	clinit_java_lang_StringBuilder(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[0].o);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"Illegal character found in host: "_j))));
	jint temp0 = (jint)((func_java_lang_String_charAt_int_R_char) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_lang_String_charAt_int_R_char])(ctx, (frame[0].o), (frame[1].i));
	sp[1].o = (jobject)SM_java_net_IPAddressUtil_describeChar_char_R_java_lang_String(ctx, temp0);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, sp[1].o);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[0].o);
	sp += 1;
	goto label_13;
	}
label_12:;
	INST_ACONST_NULL();
label_13:;
	popStackFrame(ctx);
	INST_ARETURN();

	popStackFrame(ctx);
}

jobject SM_java_net_IPAddressUtil_checkAuth_java_lang_String_R_java_lang_String(jcontext ctx, jobject param0) {
	jtype frame[7];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/net/IPAddressUtil:checkAuth", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_net_IPAddressUtil(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(351);
	jint temp0 = (jint)SM_java_net_IPAddressUtil_scan_java_lang_String_long_long_R_int(ctx, (frame[0].o), (jlong(-9223231260711714817ll)), (jlong(-9223372036586340352ll)));
	frame[1].i = temp0;
	LINE_NUMBER(352);
	if ((frame[1].i) < 0) goto label_2;
	}
	{
	clinit_java_lang_StringBuilder(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[0].o);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"Illegal character found in authority: "_j))));
	jint temp0 = (jint)((func_java_lang_String_charAt_int_R_char) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_lang_String_charAt_int_R_char])(ctx, (frame[0].o), (frame[1].i));
	sp[1].o = (jobject)SM_java_net_IPAddressUtil_describeChar_char_R_java_lang_String(ctx, temp0);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, sp[1].o);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[0].o);
	sp += 1;
	goto label_3;
	}
label_2:;
	INST_ACONST_NULL();
label_3:;
	popStackFrame(ctx);
	INST_ARETURN();

	popStackFrame(ctx);
}

jobject SM_java_net_IPAddressUtil_checkAuthority_java_net_URL_R_java_lang_String(jcontext ctx, jobject param0) {
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/net/IPAddressUtil:checkAuthority", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_net_IPAddressUtil(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(356);
	popStackFrame(ctx);
	return (jobject(nullptr));
	}

	popStackFrame(ctx);
}

jobject SM_java_net_IPAddressUtil_checkExternalForm_java_net_URL_R_java_lang_String(jcontext ctx, jobject param0) {
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/net/IPAddressUtil:checkExternalForm", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_net_IPAddressUtil(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(376);
	popStackFrame(ctx);
	return (jobject(nullptr));
	}

	popStackFrame(ctx);
}

jobject SM_java_net_IPAddressUtil_checkHostString_java_lang_String_R_java_lang_String(jcontext ctx, jobject param0) {
	jtype frame[8];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/net/IPAddressUtil:checkHostString", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_net_IPAddressUtil(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(391);
	if ((frame[0].o) != nullptr) goto label_1;
	}
	{
	LINE_NUMBER(392);
	popStackFrame(ctx);
	return (jobject(nullptr));
	}
label_1:;
	{
	LINE_NUMBER(394);
	sp[0].o = frame[0].o;
	jlong temp0 = jlong(140741783322623ll);
	jlong temp1 = jlong(-9223372036854775807ll);
	clinit_java_net_IPAddressUtil(ctx);
	sp[1].o = (jobject)SF_java_net_IPAddressUtil_OTHERS;
	jint temp2 = (jint)SM_java_net_IPAddressUtil_scan_java_lang_String_long_long_Array1_char_R_int(ctx, sp[0].o, temp0, temp1, sp[1].o);
	frame[1].i = temp2;
	LINE_NUMBER(395);
	if ((frame[1].i) < 0) goto label_4;
	}
	{
	clinit_java_lang_StringBuilder(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[0].o);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"Illegal character found in host: "_j))));
	jint temp0 = (jint)((func_java_lang_String_charAt_int_R_char) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_lang_String_charAt_int_R_char])(ctx, (frame[0].o), (frame[1].i));
	sp[1].o = (jobject)SM_java_net_IPAddressUtil_describeChar_char_R_java_lang_String(ctx, temp0);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, sp[1].o);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[0].o);
	sp += 1;
	goto label_5;
	}
label_4:;
	INST_ACONST_NULL();
label_5:;
	popStackFrame(ctx);
	INST_ARETURN();

	popStackFrame(ctx);
}

jobject SM_java_net_IPAddressUtil_toScopedAddress_java_net_InetAddress_R_java_net_InetAddress(jcontext ctx, jobject param0) {
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/net/IPAddressUtil:toScopedAddress", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_net_IPAddressUtil(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(400);
	popStackFrame(ctx);
	return (frame[0].o);
	}

	popStackFrame(ctx);
}

jobject SM_java_net_IPAddressUtil_toScopedAddress_java_net_InetSocketAddress_R_java_net_InetSocketAddress(jcontext ctx, jobject param0) {
	jtype frame[7];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/net/IPAddressUtil:toScopedAddress", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_net_IPAddressUtil(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(420);
	sp[0].o = (jobject)((func_java_net_InetSocketAddress_getAddress_R_java_net_InetAddress) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_net_InetSocketAddress_getAddress_R_java_net_InetAddress])(ctx, (frame[0].o));
	frame[1].o = sp[0].o;
	LINE_NUMBER(422);
	sp[0].o = (jobject)SM_java_net_IPAddressUtil_toScopedAddress_java_net_InetAddress_R_java_net_InetAddress(ctx, (frame[1].o));
	frame[2].o = sp[0].o;
	if (sp[0].o != (frame[1].o)) goto label_3;
	}
	INST_ALOAD(0);
	goto label_4;
label_3:;
	{
	clinit_java_net_InetSocketAddress(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_net_InetSocketAddress);
	sp[1].o = frame[2].o;
	jint temp0 = (jint)((func_java_net_InetSocketAddress_getPort_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_net_InetSocketAddress_getPort_R_int])(ctx, (frame[0].o));
	init_java_net_InetSocketAddress_java_net_InetAddress_int(ctx, sp[0].o, sp[1].o, temp0);
	sp += 1;
	}
label_4:;
	popStackFrame(ctx);
	INST_ARETURN();

	popStackFrame(ctx);
}

jobject SM_java_net_IPAddressUtil_findScopedAddress_java_net_InetAddress_R_java_net_InetAddress(jcontext ctx, jobject param0) {
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/net/IPAddressUtil:findScopedAddress", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_net_IPAddressUtil(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(426);
	popStackFrame(ctx);
	return (frame[0].o);
	}

	popStackFrame(ctx);
}

jint SM_java_net_IPAddressUtil_digit_char_int_R_int(jcontext ctx, jchar param0, jint param1) {
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/net/IPAddressUtil:digit", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_net_IPAddressUtil(ctx);
	frame[0].i = param0;
	frame[1].i = param1;
	{
	LINE_NUMBER(449);
	jint temp0 = (jint)SM_java_net_IPAddressUtil_parseAsciiDigit_char_int_R_int(ctx, (frame[0].i), (frame[1].i));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jbool SM_java_net_IPAddressUtil_isBsdParsableV4_java_lang_String_R_boolean(jcontext ctx, jobject param0) {
	jtype frame[15];
	auto stack = &frame[11];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/net/IPAddressUtil:isBsdParsableV4", 15 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_net_IPAddressUtil(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(453);
	jint temp0 = (jint)((func_java_lang_String_charAt_int_R_char) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_lang_String_charAt_int_R_char])(ctx, (frame[0].o), (jint(0)));
	frame[1].i = temp0;
	LINE_NUMBER(454);
	jint temp1 = (jint)SM_java_net_IPAddressUtil_parseAsciiDigit_char_int_R_int(ctx, (frame[1].i), (10));
	if (temp1 != (jint(-1))) goto label_2;
	}
	{
	LINE_NUMBER(455);
	popStackFrame(ctx);
	return (jint(0));
	}
label_2:;
	{
	LINE_NUMBER(457);
	sp[0].o = frame[0].o;
	jint temp0 = (jint)((func_java_lang_String_length_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_lang_String_length_R_int])(ctx, (frame[0].o));
	jint temp1 = (jint)((func_java_lang_String_charAt_int_R_char) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_String_charAt_int_R_char])(ctx, sp[0].o, (temp0 - (jint(1))));
	frame[2].i = temp1;
	LINE_NUMBER(458);
	if ((frame[2].i) == (46)) goto label_5;
	}
	{
	jint temp0 = (jint)SM_java_net_IPAddressUtil_parseAsciiHexDigit_char_R_int(ctx, (frame[2].i));
	if (temp0 == (jint(-1))) goto label_5;
	}
	{
	LINE_NUMBER(459);
	sp[0].o = (jobject)SM_java_nio_CharBuffer_wrap_java_lang_CharSequence_R_java_nio_CharBuffer(ctx, (frame[0].o));
	frame[3].o = sp[0].o;
	LINE_NUMBER(460);
	frame[4].i = (jint(0));
	}
label_8:;
	{
	LINE_NUMBER(464);
	jint temp0 = (jint)((func_java_nio_CharBuffer_hasRemaining_R_boolean) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_java_nio_CharBuffer_hasRemaining_R_boolean])(ctx, (frame[3].o));
	if (temp0 != 0) goto label_9;
	}
	{
	LINE_NUMBER(465);
	popStackFrame(ctx);
	return (jint(1));
	}
label_9:;
	{
	LINE_NUMBER(468);
	frame[5].l = (jlong(-1ll));
	LINE_NUMBER(469);
	clinit_java_net_IPAddressUtil(ctx);
	sp[0].o = (jobject)SF_java_net_IPAddressUtil_SUPPORTED_RADIXES;
	frame[7].o = sp[0].o;
	LINE_NUMBER(470);
	frame[8].i = (((jarray) nullCheck(ctx, (frame[7].o)))->length);
	LINE_NUMBER(472);
	frame[9].i = (jint(0));
	}
label_14:;
	{
	if ((frame[9].i) >= (frame[8].i)) goto label_15;
	}
	{
	LINE_NUMBER(473);
	frame[10].i = ((jint)ARRAY_ACCESS(jint, (frame[7].o), (frame[9].i)));
	LINE_NUMBER(474);
	jlong temp0 = (jlong)SM_java_net_IPAddressUtil_parseV4FieldBsd_int_java_nio_CharBuffer_int_R_long(ctx, (frame[10].i), (frame[3].o), (frame[4].i));
	frame[5].l = temp0;
	LINE_NUMBER(475);
	if ((longCompare((frame[5].l), (jlong(0)))) < 0) goto label_19;
	}
	{
	LINE_NUMBER(476);
	INST_IINC(4, 1);
	LINE_NUMBER(477);
	goto label_15;
	}
label_19:;
	{
	LINE_NUMBER(480);
	if ((longCompare((frame[5].l), (jlong(-2ll)))) != 0) goto label_22;
	}
	{
	LINE_NUMBER(481);
	popStackFrame(ctx);
	return (jint(0));
	}
label_22:;
	{
	LINE_NUMBER(472);
	INST_IINC(9, 1);
	goto label_14;
	}
label_15:;
	{
	LINE_NUMBER(484);
	if ((longCompare((frame[5].l), (jlong(0)))) >= 0) goto label_8;
	}
	{
	LINE_NUMBER(486);
	popStackFrame(ctx);
	return (jint(0));
	}
label_5:;
	{
	LINE_NUMBER(488);
	popStackFrame(ctx);
	return (jint(0));
	}

	popStackFrame(ctx);
}

jlong SM_java_net_IPAddressUtil_parseV4FieldBsd_int_java_nio_CharBuffer_int_R_long(jcontext ctx, jint param0, jobject param1, jint param2) {
	jtype frame[14];
	auto stack = &frame[10];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/net/IPAddressUtil:parseV4FieldBsd", 14 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_net_IPAddressUtil(ctx);
	frame[0].i = param0;
	frame[1].o = param1;
	frame[2].i = param2;
	{
	LINE_NUMBER(494);
	jint temp0 = (jint)((func_java_nio_CharBuffer_position_R_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_nio_CharBuffer_position_R_int])(ctx, (frame[1].o));
	frame[3].i = temp0;
	LINE_NUMBER(495);
	frame[4].l = (jlong(0));
	LINE_NUMBER(496);
	frame[6].i = (jint(0));
	LINE_NUMBER(497);
	jint temp1 = (jint)SM_java_net_IPAddressUtil_checkPrefix_java_nio_CharBuffer_int_R_boolean(ctx, (frame[1].o), (frame[0].i));
	if (temp1 != 0) goto label_4;
	}
	{
	LINE_NUMBER(498);
	frame[4].l = (jlong(-1ll));
	}
label_4:;
	{
	LINE_NUMBER(501);
	frame[7].i = (jint(0));
	}
label_6:;
	{
	LINE_NUMBER(503);
	jint temp0 = (jint)((func_java_nio_CharBuffer_hasRemaining_R_boolean) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_nio_CharBuffer_hasRemaining_R_boolean])(ctx, (frame[1].o));
	if (temp0 == 0) goto label_7;
	}
	{
	if ((longCompare((frame[4].l), (jlong(-1ll)))) == 0) goto label_7;
	}
	INST_ILOAD(7);
	if ((--sp)->i != 0) goto label_7;
	{
	LINE_NUMBER(504);
	jint temp0 = (jint)((func_java_nio_CharBuffer_get_R_char) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_nio_CharBuffer_get_R_char])(ctx, (frame[1].o));
	frame[8].i = temp0;
	LINE_NUMBER(505);
	if ((frame[8].i) != (46)) goto label_10;
	}
	{
	LINE_NUMBER(506);
	frame[7].i = (jint(1));
	LINE_NUMBER(507);
	if ((frame[2].i) != (jint(3))) goto label_13;
	}
	{
	LINE_NUMBER(508);
	popStackFrame(ctx);
	return (jlong(-2ll));
	}
label_13:;
	{
	LINE_NUMBER(511);
	if ((frame[6].i) != 0) goto label_15;
	}
	{
	LINE_NUMBER(512);
	popStackFrame(ctx);
	return (jlong(-2ll));
	}
label_15:;
	{
	LINE_NUMBER(515);
	if ((longCompare((frame[4].l), (jlong(255ll)))) <= 0) goto label_17;
	}
	{
	LINE_NUMBER(516);
	popStackFrame(ctx);
	return (jlong(-2ll));
	}
label_10:;
	{
	LINE_NUMBER(519);
	jint temp0 = (jint)SM_java_net_IPAddressUtil_parseAsciiDigit_char_int_R_int(ctx, (frame[8].i), (frame[0].i));
	frame[9].i = temp0;
	LINE_NUMBER(520);
	if ((frame[9].i) >= 0) goto label_20;
	}
	{
	LINE_NUMBER(521);
	popStackFrame(ctx);
	return (jlong(-2ll));
	}
label_20:;
	{
	LINE_NUMBER(524);
	INST_IINC(6, 1);
	LINE_NUMBER(525);
	frame[4].l = ((frame[4].l) * (jlong((frame[0].i))));
	LINE_NUMBER(526);
	frame[4].l = ((frame[4].l) + (jlong((frame[9].i))));
	}
label_17:;
	LINE_NUMBER(528);
	goto label_6;
label_7:;
	{
	LINE_NUMBER(530);
	if ((longCompare((frame[4].l), (jlong(-1ll)))) != 0) goto label_24;
	}
	{
	LINE_NUMBER(531);
	sp[0].o = (jobject)((func_java_nio_CharBuffer_position_int_R_java_nio_CharBuffer) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_nio_CharBuffer_position_int_R_java_nio_CharBuffer])(ctx, (frame[1].o), (frame[3].i));
	goto label_26;
	}
label_24:;
	{
	LINE_NUMBER(532);
	if ((frame[7].i) != 0) goto label_26;
	}
	{
	LINE_NUMBER(533);
	frame[8].l = (((jlong(1)) << (((jint(4)) - (frame[2].i)) * (8))) - (jlong(1)));
	LINE_NUMBER(534);
	if ((longCompare((frame[4].l), (frame[8].l))) <= 0) goto label_26;
	}
	{
	LINE_NUMBER(535);
	popStackFrame(ctx);
	return (jlong(-2ll));
	}
label_26:;
	{
	LINE_NUMBER(539);
	popStackFrame(ctx);
	return (frame[4].l);
	}

	popStackFrame(ctx);
}

jbool SM_java_net_IPAddressUtil_checkPrefix_java_nio_CharBuffer_int_R_boolean(jcontext ctx, jobject param0, jint param1) {
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/net/IPAddressUtil:checkPrefix", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_net_IPAddressUtil(ctx);
	frame[0].o = param0;
	frame[1].i = param1;
	{
	LINE_NUMBER(543);
	switch((frame[1].i)) {
		case 8: goto label_1;
		case 10: goto label_2;
		case 16: goto label_3;
		default: goto label_4;
	}
	}
label_1:;
	{
	LINE_NUMBER(545);
	jint temp0 = (jint)SM_java_net_IPAddressUtil_isOctalFieldStart_java_nio_CharBuffer_R_boolean(ctx, (frame[0].o));
	popStackFrame(ctx);
	return temp0;
	}
label_2:;
	{
	LINE_NUMBER(547);
	jint temp0 = (jint)SM_java_net_IPAddressUtil_isDecimalFieldStart_java_nio_CharBuffer_R_boolean(ctx, (frame[0].o));
	popStackFrame(ctx);
	return temp0;
	}
label_3:;
	{
	LINE_NUMBER(549);
	jint temp0 = (jint)SM_java_net_IPAddressUtil_isHexFieldStart_java_nio_CharBuffer_R_boolean(ctx, (frame[0].o));
	popStackFrame(ctx);
	return temp0;
	}
label_4:;
	{
	LINE_NUMBER(551);
	clinit_java_lang_AssertionError(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_AssertionError);
	init_java_lang_AssertionError_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"Not supported radix"_j))));
	throwException(ctx, sp[0].o);	}

	popStackFrame(ctx);
}

jbool SM_java_net_IPAddressUtil_isOctalFieldStart_java_nio_CharBuffer_R_boolean(jcontext ctx, jobject param0) {
	jtype frame[8];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/net/IPAddressUtil:isOctalFieldStart", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_net_IPAddressUtil(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(556);
	jint temp0 = (jint)((func_java_nio_CharBuffer_remaining_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_nio_CharBuffer_remaining_R_int])(ctx, (frame[0].o));
	if (temp0 >= (jint(2))) goto label_1;
	}
	{
	LINE_NUMBER(557);
	popStackFrame(ctx);
	return (jint(0));
	}
label_1:;
	{
	LINE_NUMBER(559);
	jint temp0 = (jint)((func_java_nio_CharBuffer_position_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_nio_CharBuffer_position_R_int])(ctx, (frame[0].o));
	frame[1].i = temp0;
	LINE_NUMBER(560);
	jint temp1 = (jint)((func_java_nio_CharBuffer_get_R_char) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_nio_CharBuffer_get_R_char])(ctx, (frame[0].o));
	frame[2].i = temp1;
	LINE_NUMBER(561);
	jint temp2 = (jint)((func_java_nio_CharBuffer_get_R_char) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_nio_CharBuffer_get_R_char])(ctx, (frame[0].o));
	frame[3].i = temp2;
	LINE_NUMBER(562);
	if ((frame[2].i) != (48)) goto label_6;
	}
	{
	if ((frame[3].i) == (46)) goto label_6;
	}
	INST_ICONST(1);
	goto label_7;
label_6:;
	INST_ICONST(0);
label_7:;
	{
	sp -= 1;
	frame[4].i = sp[0].i;
	LINE_NUMBER(563);
	if ((frame[4].i) == 0) goto label_9;
	}
	{
	LINE_NUMBER(564);
	sp[0].o = (jobject)((func_java_nio_CharBuffer_position_int_R_java_nio_CharBuffer) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_nio_CharBuffer_position_int_R_java_nio_CharBuffer])(ctx, (frame[0].o), ((frame[1].i) + (jint(1))));
	}
label_9:;
	{
	LINE_NUMBER(567);
	popStackFrame(ctx);
	return (frame[4].i);
	}

	popStackFrame(ctx);
}

jbool SM_java_net_IPAddressUtil_isDecimalFieldStart_java_nio_CharBuffer_R_boolean(jcontext ctx, jobject param0) {
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/net/IPAddressUtil:isDecimalFieldStart", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_net_IPAddressUtil(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(572);
	jint temp0 = (jint)((func_java_nio_CharBuffer_hasRemaining_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_nio_CharBuffer_hasRemaining_R_boolean])(ctx, (frame[0].o));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jbool SM_java_net_IPAddressUtil_isHexFieldStart_java_nio_CharBuffer_R_boolean(jcontext ctx, jobject param0) {
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/net/IPAddressUtil:isHexFieldStart", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_net_IPAddressUtil(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(576);
	jint temp0 = (jint)((func_java_nio_CharBuffer_remaining_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_nio_CharBuffer_remaining_R_int])(ctx, (frame[0].o));
	if (temp0 >= (jint(2))) goto label_1;
	}
	{
	LINE_NUMBER(577);
	popStackFrame(ctx);
	return (jint(0));
	}
label_1:;
	{
	LINE_NUMBER(579);
	jint temp0 = (jint)((func_java_nio_CharBuffer_get_R_char) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_nio_CharBuffer_get_R_char])(ctx, (frame[0].o));
	frame[1].i = temp0;
	LINE_NUMBER(580);
	jint temp1 = (jint)((func_java_nio_CharBuffer_get_R_char) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_nio_CharBuffer_get_R_char])(ctx, (frame[0].o));
	frame[2].i = temp1;
	LINE_NUMBER(581);
	if ((frame[1].i) != (48)) goto label_5;
	}
	{
	if ((frame[2].i) == (120)) goto label_6;
	}
	{
	if ((frame[2].i) != (88)) goto label_5;
	}
label_6:;
	INST_ICONST(1);
	goto label_7;
label_5:;
	INST_ICONST(0);
label_7:;
	popStackFrame(ctx);
	INST_IRETURN();

	popStackFrame(ctx);
}

jint SM_java_net_IPAddressUtil_parseAsciiDigit_char_int_R_int(jcontext ctx, jchar param0, jint param1) {
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/net/IPAddressUtil:parseAsciiDigit", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_net_IPAddressUtil(ctx);
	frame[0].i = param0;
	frame[1].i = param1;
	{
	LINE_NUMBER(586);
	if ((clinit_java_net_IPAddressUtil(ctx), (jint)SF_java_net_IPAddressUtil_$assertionsDisabled) != 0) goto label_1;
	}
	{
	if ((frame[1].i) == (8)) goto label_1;
	}
	{
	if ((frame[1].i) == (10)) goto label_1;
	}
	{
	if ((frame[1].i) == (16)) goto label_1;
	}
	{
	clinit_java_lang_AssertionError(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_AssertionError);
	init_java_lang_AssertionError(ctx, sp[0].o);
	throwException(ctx, sp[0].o);	}
label_1:;
	{
	LINE_NUMBER(588);
	if ((frame[1].i) != (16)) goto label_2;
	}
	{
	LINE_NUMBER(589);
	jint temp0 = (jint)SM_java_net_IPAddressUtil_parseAsciiHexDigit_char_R_int(ctx, (frame[0].i));
	popStackFrame(ctx);
	return temp0;
	}
label_2:;
	{
	LINE_NUMBER(591);
	frame[2].i = ((frame[0].i) - (48));
	LINE_NUMBER(592);
	if ((frame[2].i) < 0) goto label_5;
	}
	{
	if ((frame[2].i) >= (frame[1].i)) goto label_5;
	}
	INST_ILOAD(2);
	goto label_6;
label_5:;
	INST_ICONST(-1);
label_6:;
	popStackFrame(ctx);
	INST_IRETURN();

	popStackFrame(ctx);
}

jint SM_java_net_IPAddressUtil_parseAsciiHexDigit_char_R_int(jcontext ctx, jchar param0) {
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/net/IPAddressUtil:parseAsciiHexDigit", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_net_IPAddressUtil(ctx);
	frame[0].i = param0;
	{
	LINE_NUMBER(597);
	jint temp0 = (jint)SM_java_lang_Character_toLowerCase_char_R_char(ctx, (frame[0].i));
	frame[1].i = temp0;
	LINE_NUMBER(598);
	if ((frame[1].i) < (97)) goto label_2;
	}
	{
	if ((frame[1].i) > (102)) goto label_2;
	}
	{
	jint temp0 = ((frame[1].i) - (97)) + (10);
	sp[0].i = temp0;
	sp += 1;
	goto label_3;
	}
label_2:;
	{
	jint temp0 = (jint)SM_java_net_IPAddressUtil_parseAsciiDigit_char_int_R_int(ctx, (frame[1].i), (10));
	sp[0].i = temp0;
	sp += 1;
	}
label_3:;
	popStackFrame(ctx);
	INST_IRETURN();

	popStackFrame(ctx);
}

void clinit_java_net_IPAddressUtil(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	SF_java_net_IPAddressUtil_INADDR4SZ = jint(4);
	SF_java_net_IPAddressUtil_INADDR16SZ = jint(16);
	SF_java_net_IPAddressUtil_INT16SZ = jint(2);
	SF_java_net_IPAddressUtil_L_IPV6_DELIMS = jlong(0ll);
	SF_java_net_IPAddressUtil_H_IPV6_DELIMS = jlong(671088640ll);
	SF_java_net_IPAddressUtil_L_GEN_DELIMS = jlong(-8935000888854970368ll);
	SF_java_net_IPAddressUtil_H_GEN_DELIMS = jlong(671088641ll);
	SF_java_net_IPAddressUtil_L_AUTH_DELIMS = jlong(288230376151711744ll);
	SF_java_net_IPAddressUtil_H_AUTH_DELIMS = jlong(671088641ll);
	SF_java_net_IPAddressUtil_L_COLON = jlong(288230376151711744ll);
	SF_java_net_IPAddressUtil_H_COLON = jlong(0ll);
	SF_java_net_IPAddressUtil_L_SLASH = jlong(140737488355328ll);
	SF_java_net_IPAddressUtil_H_SLASH = jlong(0ll);
	SF_java_net_IPAddressUtil_L_BACKSLASH = jlong(0ll);
	SF_java_net_IPAddressUtil_H_BACKSLASH = jlong(268435456ll);
	SF_java_net_IPAddressUtil_L_NON_PRINTABLE = jlong(4294967295ll);
	SF_java_net_IPAddressUtil_H_NON_PRINTABLE = jlong(-9223372036854775807ll);
	SF_java_net_IPAddressUtil_L_EXCLUDE = jlong(-8935000884560003073ll);
	SF_java_net_IPAddressUtil_H_EXCLUDE = jlong(-9223372035915251711ll);
	SF_java_net_IPAddressUtil_HEXADECIMAL = jint(16);
	SF_java_net_IPAddressUtil_DECIMAL = jint(10);
	SF_java_net_IPAddressUtil_OCTAL = jint(8);
	SF_java_net_IPAddressUtil_CANT_PARSE_IN_RADIX = jlong(-1ll);
	SF_java_net_IPAddressUtil_TERMINAL_PARSE_ERROR = jlong(-2ll);
	SF_java_net_IPAddressUtil_ALLOW_AMBIGUOUS_IPADDRESS_LITERALS_SP = ((jobject) createStringLiteral(ctx, u8"jdk.net.allowAmbiguousIPAddressLiterals"_j));
	SF_java_net_IPAddressUtil_ALLOW_AMBIGUOUS_IPADDRESS_LITERALS_SP_VALUE = jint(0);
	jtype frame[4];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/net/IPAddressUtil:<clinit>", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_net_IPAddressUtil(ctx);
	{
	LINE_NUMBER(7);
	jint temp0 = (jint)((func_java_lang_Class_desiredAssertionStatus_R_boolean) ((void **) nullCheck(ctx, (((jobject) &class_java_net_IPAddressUtil)))->vtable)[VTABLE_java_lang_Class_desiredAssertionStatus_R_boolean])(ctx, (((jobject) &class_java_net_IPAddressUtil)));
	if (temp0 != 0) goto label_1;
	}
	INST_ICONST(1);
	goto label_2;
label_1:;
	INST_ICONST(0);
label_2:;
	{
	sp -= 1;
	clinit_java_net_IPAddressUtil(ctx);
	SF_java_net_IPAddressUtil_$assertionsDisabled = sp[0].i;
	LINE_NUMBER(27);
	sp[0].o = (jobject) createArray(ctx, &class_char, (17));
	ARRAY_ACCESS(jchar, sp[0].o, (jint(0))) = (8263);
	ARRAY_ACCESS(jchar, sp[0].o, (jint(1))) = (8264);
	ARRAY_ACCESS(jchar, sp[0].o, (jint(2))) = (8265);
	ARRAY_ACCESS(jchar, sp[0].o, (jint(3))) = (8448);
	ARRAY_ACCESS(jchar, sp[0].o, (jint(4))) = (8449);
	ARRAY_ACCESS(jchar, sp[0].o, (jint(5))) = (8453);
	ARRAY_ACCESS(jchar, sp[0].o, (6)) = (8454);
	ARRAY_ACCESS(jchar, sp[0].o, (7)) = (10868);
	ARRAY_ACCESS(jchar, sp[0].o, (8)) = (jint(65109));
	ARRAY_ACCESS(jchar, sp[0].o, (9)) = (jint(65110));
	ARRAY_ACCESS(jchar, sp[0].o, (10)) = (jint(65119));
	ARRAY_ACCESS(jchar, sp[0].o, (11)) = (jint(65131));
	ARRAY_ACCESS(jchar, sp[0].o, (12)) = (jint(65283));
	ARRAY_ACCESS(jchar, sp[0].o, (13)) = (jint(65295));
	ARRAY_ACCESS(jchar, sp[0].o, (14)) = (jint(65306));
	ARRAY_ACCESS(jchar, sp[0].o, (15)) = (jint(65311));
	ARRAY_ACCESS(jchar, sp[0].o, (16)) = (jint(65312));
	clinit_java_net_IPAddressUtil(ctx);
	SF_java_net_IPAddressUtil_OTHERS = sp[0].o;
	LINE_NUMBER(28);
	clinit_java_util_concurrent_ConcurrentHashMap(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_util_concurrent_ConcurrentHashMap);
	init_java_util_concurrent_ConcurrentHashMap(ctx, sp[0].o);
	clinit_java_net_IPAddressUtil(ctx);
	SF_java_net_IPAddressUtil_cache = sp[0].o;
	LINE_NUMBER(32);
	sp[0].o = (jobject) createArray(ctx, &class_int, (jint(3)));
	ARRAY_ACCESS(jint, sp[0].o, (jint(0))) = (16);
	ARRAY_ACCESS(jint, sp[0].o, (jint(1))) = (8);
	ARRAY_ACCESS(jint, sp[0].o, (jint(2))) = (10);
	clinit_java_net_IPAddressUtil(ctx);
	SF_java_net_IPAddressUtil_SUPPORTED_RADIXES = sp[0].o;
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void *vtable_java_net_IPAddressUtil[] {
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

static FieldMetadata fields[] {
	{ "INADDR4SZ", &class_int, (intptr_t) &SF_java_net_IPAddressUtil_INADDR4SZ, "I", 26 },
	{ "INADDR16SZ", &class_int, (intptr_t) &SF_java_net_IPAddressUtil_INADDR16SZ, "I", 26 },
	{ "INT16SZ", &class_int, (intptr_t) &SF_java_net_IPAddressUtil_INT16SZ, "I", 26 },
	{ "L_IPV6_DELIMS", &class_long, (intptr_t) &SF_java_net_IPAddressUtil_L_IPV6_DELIMS, "J", 26 },
	{ "H_IPV6_DELIMS", &class_long, (intptr_t) &SF_java_net_IPAddressUtil_H_IPV6_DELIMS, "J", 26 },
	{ "L_GEN_DELIMS", &class_long, (intptr_t) &SF_java_net_IPAddressUtil_L_GEN_DELIMS, "J", 26 },
	{ "H_GEN_DELIMS", &class_long, (intptr_t) &SF_java_net_IPAddressUtil_H_GEN_DELIMS, "J", 26 },
	{ "L_AUTH_DELIMS", &class_long, (intptr_t) &SF_java_net_IPAddressUtil_L_AUTH_DELIMS, "J", 26 },
	{ "H_AUTH_DELIMS", &class_long, (intptr_t) &SF_java_net_IPAddressUtil_H_AUTH_DELIMS, "J", 26 },
	{ "L_COLON", &class_long, (intptr_t) &SF_java_net_IPAddressUtil_L_COLON, "J", 26 },
	{ "H_COLON", &class_long, (intptr_t) &SF_java_net_IPAddressUtil_H_COLON, "J", 26 },
	{ "L_SLASH", &class_long, (intptr_t) &SF_java_net_IPAddressUtil_L_SLASH, "J", 26 },
	{ "H_SLASH", &class_long, (intptr_t) &SF_java_net_IPAddressUtil_H_SLASH, "J", 26 },
	{ "L_BACKSLASH", &class_long, (intptr_t) &SF_java_net_IPAddressUtil_L_BACKSLASH, "J", 26 },
	{ "H_BACKSLASH", &class_long, (intptr_t) &SF_java_net_IPAddressUtil_H_BACKSLASH, "J", 26 },
	{ "L_NON_PRINTABLE", &class_long, (intptr_t) &SF_java_net_IPAddressUtil_L_NON_PRINTABLE, "J", 26 },
	{ "H_NON_PRINTABLE", &class_long, (intptr_t) &SF_java_net_IPAddressUtil_H_NON_PRINTABLE, "J", 26 },
	{ "L_EXCLUDE", &class_long, (intptr_t) &SF_java_net_IPAddressUtil_L_EXCLUDE, "J", 26 },
	{ "H_EXCLUDE", &class_long, (intptr_t) &SF_java_net_IPAddressUtil_H_EXCLUDE, "J", 26 },
	{ "OTHERS", getArrayClass(&class_char, 1), (intptr_t) &SF_java_net_IPAddressUtil_OTHERS, "[C", 26 },
	{ "cache", &class_java_util_concurrent_ConcurrentHashMap, (intptr_t) &SF_java_net_IPAddressUtil_cache, "Ljava/util/concurrent/ConcurrentHashMap;", 26 },
	{ "HEXADECIMAL", &class_int, (intptr_t) &SF_java_net_IPAddressUtil_HEXADECIMAL, "I", 26 },
	{ "DECIMAL", &class_int, (intptr_t) &SF_java_net_IPAddressUtil_DECIMAL, "I", 26 },
	{ "OCTAL", &class_int, (intptr_t) &SF_java_net_IPAddressUtil_OCTAL, "I", 26 },
	{ "SUPPORTED_RADIXES", getArrayClass(&class_int, 1), (intptr_t) &SF_java_net_IPAddressUtil_SUPPORTED_RADIXES, "[I", 26 },
	{ "CANT_PARSE_IN_RADIX", &class_long, (intptr_t) &SF_java_net_IPAddressUtil_CANT_PARSE_IN_RADIX, "J", 26 },
	{ "TERMINAL_PARSE_ERROR", &class_long, (intptr_t) &SF_java_net_IPAddressUtil_TERMINAL_PARSE_ERROR, "J", 26 },
	{ "ALLOW_AMBIGUOUS_IPADDRESS_LITERALS_SP", &class_java_lang_String, (intptr_t) &SF_java_net_IPAddressUtil_ALLOW_AMBIGUOUS_IPADDRESS_LITERALS_SP, "Ljava/lang/String;", 26 },
	{ "ALLOW_AMBIGUOUS_IPADDRESS_LITERALS_SP_VALUE", &class_boolean, (intptr_t) &SF_java_net_IPAddressUtil_ALLOW_AMBIGUOUS_IPADDRESS_LITERALS_SP_VALUE, "Z", 26 },
	{ "$assertionsDisabled", &class_boolean, (intptr_t) &SF_java_net_IPAddressUtil_$assertionsDisabled, "Z", 4120 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_java_net_IPAddressUtil, 0, "()V", 1 },
	{ "textToNumericFormatV4", (intptr_t) SM_java_net_IPAddressUtil_textToNumericFormatV4_java_lang_String_R_Array1_byte, 0, "(Ljava/lang/String;)[B", 9 },
	{ "validateNumericFormatV4", (intptr_t) SM_java_net_IPAddressUtil_validateNumericFormatV4_java_lang_String_R_Array1_byte, 0, "(Ljava/lang/String;)[B", 9 },
	{ "textToNumericFormatV6", (intptr_t) SM_java_net_IPAddressUtil_textToNumericFormatV6_java_lang_String_R_Array1_byte, 0, "(Ljava/lang/String;)[B", 9 },
	{ "isIPv4LiteralAddress", (intptr_t) SM_java_net_IPAddressUtil_isIPv4LiteralAddress_java_lang_String_R_boolean, 0, "(Ljava/lang/String;)Z", 9 },
	{ "isIPv6LiteralAddress", (intptr_t) SM_java_net_IPAddressUtil_isIPv6LiteralAddress_java_lang_String_R_boolean, 0, "(Ljava/lang/String;)Z", 9 },
	{ "convertFromIPv4MappedAddress", (intptr_t) SM_java_net_IPAddressUtil_convertFromIPv4MappedAddress_Array1_byte_R_Array1_byte, 0, "([B)[B", 9 },
	{ "isIPv4MappedAddress", (intptr_t) SM_java_net_IPAddressUtil_isIPv4MappedAddress_Array1_byte_R_boolean, 0, "([B)Z", 10 },
	{ "match", (intptr_t) SM_java_net_IPAddressUtil_match_char_long_long_R_boolean, 0, "(CJJ)Z", 9 },
	{ "scan", (intptr_t) SM_java_net_IPAddressUtil_scan_java_lang_String_long_long_R_int, 0, "(Ljava/lang/String;JJ)I", 9 },
	{ "scan", (intptr_t) SM_java_net_IPAddressUtil_scan_java_lang_String_long_long_Array1_char_R_int, 0, "(Ljava/lang/String;JJ[C)I", 9 },
	{ "describeChar", (intptr_t) SM_java_net_IPAddressUtil_describeChar_char_R_java_lang_String, 0, "(C)Ljava/lang/String;", 10 },
	{ "checkUserInfo", (intptr_t) SM_java_net_IPAddressUtil_checkUserInfo_java_lang_String_R_java_lang_String, 0, "(Ljava/lang/String;)Ljava/lang/String;", 10 },
	{ "checkHost", (intptr_t) SM_java_net_IPAddressUtil_checkHost_java_lang_String_R_java_lang_String, 0, "(Ljava/lang/String;)Ljava/lang/String;", 10 },
	{ "checkAuth", (intptr_t) SM_java_net_IPAddressUtil_checkAuth_java_lang_String_R_java_lang_String, 0, "(Ljava/lang/String;)Ljava/lang/String;", 10 },
	{ "checkAuthority", (intptr_t) SM_java_net_IPAddressUtil_checkAuthority_java_net_URL_R_java_lang_String, 0, "(Ljava/net/URL;)Ljava/lang/String;", 9 },
	{ "checkExternalForm", (intptr_t) SM_java_net_IPAddressUtil_checkExternalForm_java_net_URL_R_java_lang_String, 0, "(Ljava/net/URL;)Ljava/lang/String;", 9 },
	{ "checkHostString", (intptr_t) SM_java_net_IPAddressUtil_checkHostString_java_lang_String_R_java_lang_String, 0, "(Ljava/lang/String;)Ljava/lang/String;", 9 },
	{ "toScopedAddress", (intptr_t) SM_java_net_IPAddressUtil_toScopedAddress_java_net_InetAddress_R_java_net_InetAddress, 0, "(Ljava/net/InetAddress;)Ljava/net/InetAddress;", 9 },
	{ "toScopedAddress", (intptr_t) SM_java_net_IPAddressUtil_toScopedAddress_java_net_InetSocketAddress_R_java_net_InetSocketAddress, 0, "(Ljava/net/InetSocketAddress;)Ljava/net/InetSocketAddress;", 9 },
	{ "findScopedAddress", (intptr_t) SM_java_net_IPAddressUtil_findScopedAddress_java_net_InetAddress_R_java_net_InetAddress, 0, "(Ljava/net/InetAddress;)Ljava/net/InetAddress;", 10 },
	{ "digit", (intptr_t) SM_java_net_IPAddressUtil_digit_char_int_R_int, 0, "(CI)I", 9 },
	{ "isBsdParsableV4", (intptr_t) SM_java_net_IPAddressUtil_isBsdParsableV4_java_lang_String_R_boolean, 0, "(Ljava/lang/String;)Z", 9 },
	{ "parseV4FieldBsd", (intptr_t) SM_java_net_IPAddressUtil_parseV4FieldBsd_int_java_nio_CharBuffer_int_R_long, 0, "(ILjava/nio/CharBuffer;I)J", 10 },
	{ "checkPrefix", (intptr_t) SM_java_net_IPAddressUtil_checkPrefix_java_nio_CharBuffer_int_R_boolean, 0, "(Ljava/nio/CharBuffer;I)Z", 10 },
	{ "isOctalFieldStart", (intptr_t) SM_java_net_IPAddressUtil_isOctalFieldStart_java_nio_CharBuffer_R_boolean, 0, "(Ljava/nio/CharBuffer;)Z", 10 },
	{ "isDecimalFieldStart", (intptr_t) SM_java_net_IPAddressUtil_isDecimalFieldStart_java_nio_CharBuffer_R_boolean, 0, "(Ljava/nio/CharBuffer;)Z", 10 },
	{ "isHexFieldStart", (intptr_t) SM_java_net_IPAddressUtil_isHexFieldStart_java_nio_CharBuffer_R_boolean, 0, "(Ljava/nio/CharBuffer;)Z", 10 },
	{ "parseAsciiDigit", (intptr_t) SM_java_net_IPAddressUtil_parseAsciiDigit_char_int_R_int, 0, "(CI)I", 9 },
	{ "parseAsciiHexDigit", (intptr_t) SM_java_net_IPAddressUtil_parseAsciiHexDigit_char_R_int, 0, "(C)I", 10 },
	{ "<clinit>", (intptr_t) clinit_java_net_IPAddressUtil, 0, "()V", 8 },
};

Class class_java_net_IPAddressUtil{
		.nativeName = (intptr_t) "java/net/IPAddressUtil",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(java_net_IPAddressUtil),
		.classVtable = (intptr_t) vtable_java_net_IPAddressUtil,
		.staticInitializer = (intptr_t) clinit_java_net_IPAddressUtil,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_java_net_IPAddressUtil,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 33,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 30,
		.nativeFields = (intptr_t) fields,
		.methodCount = 31,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 11,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_java_net_IPAddressUtil = registerClass(&class_java_net_IPAddressUtil);

}
