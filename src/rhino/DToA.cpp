#include "rhino/DToA.h"
#include "java/lang/Math.h"
#include "java/math/BigInteger.h"
#include "java/lang/Object.h"
#include "java/lang/StringBuilder.h"
#include "java/lang/String.h"
#include "rhino/DToA.h"
#include "java/lang/IllegalArgumentException.h"
#include "java/lang/Long.h"
#include "java/lang/Double.h"

extern "C" {

jint SF_rhino_DToA_DTOSTR_STANDARD;
jint SF_rhino_DToA_DTOSTR_STANDARD_EXPONENTIAL;
jint SF_rhino_DToA_DTOSTR_FIXED;
jint SF_rhino_DToA_DTOSTR_EXPONENTIAL;
jint SF_rhino_DToA_DTOSTR_PRECISION;
jint SF_rhino_DToA_Frac_mask;
jint SF_rhino_DToA_Exp_shift;
jint SF_rhino_DToA_Exp_msk1;
jlong SF_rhino_DToA_Frac_maskL;
jint SF_rhino_DToA_Exp_shiftL;
jlong SF_rhino_DToA_Exp_msk1L;
jint SF_rhino_DToA_Bias;
jint SF_rhino_DToA_P;
jint SF_rhino_DToA_Exp_shift1;
jint SF_rhino_DToA_Exp_mask;
jint SF_rhino_DToA_Exp_mask_shifted;
jint SF_rhino_DToA_Bndry_mask;
jint SF_rhino_DToA_Log2P;
jint SF_rhino_DToA_Sign_bit;
jint SF_rhino_DToA_Exp_11;
jint SF_rhino_DToA_Ten_pmax;
jint SF_rhino_DToA_Quick_max;
jint SF_rhino_DToA_Bletch;
jint SF_rhino_DToA_Frac_mask1;
jint SF_rhino_DToA_Int_max;
jint SF_rhino_DToA_n_bigtens;
jobject SF_rhino_DToA_tens;
jobject SF_rhino_DToA_bigtens;
jobject SF_rhino_DToA_dtoaModes;

void mark_rhino_DToA(jobject object, jint mark, jint depth) {
	if (!object) {
		if (SF_rhino_DToA_tens)
			((gc_mark_ptr) ((jclass) ((jobject) SF_rhino_DToA_tens)->clazz)->markFunction)((jobject) SF_rhino_DToA_tens, mark, depth + 1);
		if (SF_rhino_DToA_bigtens)
			((gc_mark_ptr) ((jclass) ((jobject) SF_rhino_DToA_bigtens)->clazz)->markFunction)((jobject) SF_rhino_DToA_bigtens, mark, depth + 1);
		if (SF_rhino_DToA_dtoaModes)
			((gc_mark_ptr) ((jclass) ((jobject) SF_rhino_DToA_dtoaModes)->clazz)->markFunction)((jobject) SF_rhino_DToA_dtoaModes, mark, depth + 1);
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
	auto self = (rhino_DToA *) object;
}

void init_rhino_DToA(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/DToA:<init>", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_rhino_DToA(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(5);
	init_java_lang_Object(ctx, (frame[0].o));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jchar SM_rhino_DToA_BASEDIGIT_int_R_char(jcontext ctx, jint param0) {
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/DToA:BASEDIGIT", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_rhino_DToA(ctx);
	frame[0].i = param0;
	{
	LINE_NUMBER(9);
	if ((frame[0].i) < (10)) goto label_1;
	}
	{
	jint temp0 = (87) + (frame[0].i);
	sp[0].i = temp0;
	sp += 1;
	goto label_2;
	}
label_1:;
	{
	jint temp0 = (48) + (frame[0].i);
	sp[0].i = temp0;
	sp += 1;
	}
label_2:;
	INST_I2C();
	popStackFrame(ctx);
	INST_IRETURN();

	popStackFrame(ctx);
}

jint SM_rhino_DToA_lo0bits_int_R_int(jcontext ctx, jint param0) {
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/DToA:lo0bits", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_rhino_DToA(ctx);
	frame[0].i = param0;
	{
	LINE_NUMBER(57);
	frame[2].i = (frame[0].i);
	LINE_NUMBER(59);
	if (((frame[2].i) & (7)) == 0) goto label_2;
	}
	{
	LINE_NUMBER(60);
	if (((frame[2].i) & (jint(1))) == 0) goto label_4;
	}
	{
	LINE_NUMBER(61);
	popStackFrame(ctx);
	return (jint(0));
	}
label_4:;
	{
	LINE_NUMBER(62);
	if (((frame[2].i) & (jint(2))) == 0) goto label_6;
	}
	{
	LINE_NUMBER(63);
	popStackFrame(ctx);
	return (jint(1));
	}
label_6:;
	{
	LINE_NUMBER(65);
	popStackFrame(ctx);
	return (jint(2));
	}
label_2:;
	{
	LINE_NUMBER(67);
	frame[1].i = (jint(0));
	LINE_NUMBER(68);
	if (((frame[2].i) & (jint(65535))) != 0) goto label_9;
	}
	{
	LINE_NUMBER(69);
	frame[1].i = (16);
	LINE_NUMBER(70);
	frame[2].i = (bit_cast<jint>(bit_cast<uint32_t>((frame[2].i)) >> (16)));
	}
label_9:;
	{
	LINE_NUMBER(72);
	if (((frame[2].i) & (255)) != 0) goto label_12;
	}
	{
	LINE_NUMBER(73);
	INST_IINC(1, 8);
	LINE_NUMBER(74);
	frame[2].i = (bit_cast<jint>(bit_cast<uint32_t>((frame[2].i)) >> (8)));
	}
label_12:;
	{
	LINE_NUMBER(76);
	if (((frame[2].i) & (15)) != 0) goto label_15;
	}
	{
	LINE_NUMBER(77);
	INST_IINC(1, 4);
	LINE_NUMBER(78);
	frame[2].i = (bit_cast<jint>(bit_cast<uint32_t>((frame[2].i)) >> (jint(4))));
	}
label_15:;
	{
	LINE_NUMBER(80);
	if (((frame[2].i) & (jint(3))) != 0) goto label_18;
	}
	{
	LINE_NUMBER(81);
	INST_IINC(1, 2);
	LINE_NUMBER(82);
	frame[2].i = (bit_cast<jint>(bit_cast<uint32_t>((frame[2].i)) >> (jint(2))));
	}
label_18:;
	{
	LINE_NUMBER(84);
	if (((frame[2].i) & (jint(1))) != 0) goto label_21;
	}
	{
	LINE_NUMBER(85);
	INST_IINC(1, 1);
	LINE_NUMBER(86);
	frame[2].i = (bit_cast<jint>(bit_cast<uint32_t>((frame[2].i)) >> (jint(1))));
	LINE_NUMBER(87);
	if (((frame[2].i) & (jint(1))) != 0) goto label_21;
	}
	{
	LINE_NUMBER(88);
	popStackFrame(ctx);
	return (32);
	}
label_21:;
	{
	LINE_NUMBER(90);
	popStackFrame(ctx);
	return (frame[1].i);
	}

	popStackFrame(ctx);
}

jint SM_rhino_DToA_hi0bits_int_R_int(jcontext ctx, jint param0) {
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/DToA:hi0bits", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_rhino_DToA(ctx);
	frame[0].i = param0;
	{
	LINE_NUMBER(95);
	frame[1].i = (jint(0));
	LINE_NUMBER(97);
	if (((frame[0].i) & (jint(-65536))) != 0) goto label_2;
	}
	{
	LINE_NUMBER(98);
	frame[1].i = (16);
	LINE_NUMBER(99);
	frame[0].i = ((frame[0].i) << (16));
	}
label_2:;
	{
	LINE_NUMBER(101);
	if (((frame[0].i) & (jint(-16777216))) != 0) goto label_5;
	}
	{
	LINE_NUMBER(102);
	INST_IINC(1, 8);
	LINE_NUMBER(103);
	frame[0].i = ((frame[0].i) << (8));
	}
label_5:;
	{
	LINE_NUMBER(105);
	if (((frame[0].i) & (jint(-268435456))) != 0) goto label_8;
	}
	{
	LINE_NUMBER(106);
	INST_IINC(1, 4);
	LINE_NUMBER(107);
	frame[0].i = ((frame[0].i) << (jint(4)));
	}
label_8:;
	{
	LINE_NUMBER(109);
	if (((frame[0].i) & (jint(-1073741824))) != 0) goto label_11;
	}
	{
	LINE_NUMBER(110);
	INST_IINC(1, 2);
	LINE_NUMBER(111);
	frame[0].i = ((frame[0].i) << (jint(2)));
	}
label_11:;
	{
	LINE_NUMBER(113);
	if (((frame[0].i) & (bit_cast<jint>(0x80000000))) != 0) goto label_14;
	}
	{
	LINE_NUMBER(114);
	INST_IINC(1, 1);
	LINE_NUMBER(115);
	if (((frame[0].i) & (jint(1073741824))) != 0) goto label_14;
	}
	{
	LINE_NUMBER(116);
	popStackFrame(ctx);
	return (32);
	}
label_14:;
	{
	LINE_NUMBER(118);
	popStackFrame(ctx);
	return (frame[1].i);
	}

	popStackFrame(ctx);
}

void SM_rhino_DToA_stuffBits_Array1_byte_int_int(jcontext ctx, jobject param0, jint param1, jint param2) {
	jtype frame[7];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/DToA:stuffBits", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_rhino_DToA(ctx);
	frame[0].o = param0;
	frame[1].i = param1;
	frame[2].i = param2;
	{
	LINE_NUMBER(122);
	ARRAY_ACCESS(jbyte, (frame[0].o), (frame[1].i)) = (jbyte(((frame[2].i) >> (24))));
	LINE_NUMBER(123);
	ARRAY_ACCESS(jbyte, (frame[0].o), ((frame[1].i) + (jint(1)))) = (jbyte(((frame[2].i) >> (16))));
	LINE_NUMBER(124);
	ARRAY_ACCESS(jbyte, (frame[0].o), ((frame[1].i) + (jint(2)))) = (jbyte(((frame[2].i) >> (8))));
	LINE_NUMBER(125);
	ARRAY_ACCESS(jbyte, (frame[0].o), ((frame[1].i) + (jint(3)))) = (jbyte((frame[2].i)));
	LINE_NUMBER(126);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject SM_rhino_DToA_d2b_double_Array1_int_Array1_int_R_java_math_BigInteger(jcontext ctx, jdouble param0, jobject param1, jobject param2) {
	jtype frame[20];
	auto stack = &frame[14];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/DToA:d2b", 20 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_rhino_DToA(ctx);
	frame[0].d = param0;
	frame[2].o = param1;
	frame[3].o = param2;
	{
	LINE_NUMBER(134);
	jlong temp0 = (jlong)SM_java_lang_Double_doubleToLongBits_double_R_long(ctx, (frame[0].d));
	frame[10].l = temp0;
	LINE_NUMBER(135);
	frame[12].i = (jint((bit_cast<jlong>(bit_cast<uint64_t>((frame[10].l)) >> (32)))));
	LINE_NUMBER(136);
	frame[13].i = (jint((frame[10].l)));
	LINE_NUMBER(138);
	frame[8].i = ((frame[12].i) & (jint(1048575)));
	LINE_NUMBER(139);
	frame[12].i = ((frame[12].i) & (jint(2147483647)));
	LINE_NUMBER(141);
	jint temp1 = bit_cast<jint>(bit_cast<uint32_t>((frame[12].i)) >> (20));
	frame[9].i = temp1;
	if (temp1 == 0) goto label_7;
	}
	{
	LINE_NUMBER(142);
	frame[8].i = ((frame[8].i) | (jint(1048576)));
	}
label_7:;
	{
	LINE_NUMBER(144);
	jint temp0 = frame[13].i;
	frame[7].i = temp0;
	if (temp0 == 0) goto label_10;
	}
	{
	LINE_NUMBER(145);
	sp[0].o = (jobject) createArray(ctx, &class_byte, (8));
	frame[4].o = sp[0].o;
	LINE_NUMBER(146);
	jint temp0 = (jint)SM_rhino_DToA_lo0bits_int_R_int(ctx, (frame[7].i));
	frame[6].i = temp0;
	LINE_NUMBER(147);
	frame[7].i = (bit_cast<jint>(bit_cast<uint32_t>((frame[7].i)) >> (frame[6].i)));
	LINE_NUMBER(148);
	if ((frame[6].i) == 0) goto label_15;
	}
	{
	LINE_NUMBER(149);
	SM_rhino_DToA_stuffBits_Array1_byte_int_int(ctx, (frame[4].o), (jint(4)), ((frame[7].i) | ((frame[8].i) << ((32) - (frame[6].i)))));
	LINE_NUMBER(150);
	frame[8].i = ((frame[8].i) >> (frame[6].i));
	goto label_18;
	}
label_15:;
	{
	LINE_NUMBER(152);
	SM_rhino_DToA_stuffBits_Array1_byte_int_int(ctx, (frame[4].o), (jint(4)), (frame[7].i));
	}
label_18:;
	{
	LINE_NUMBER(153);
	SM_rhino_DToA_stuffBits_Array1_byte_int_int(ctx, (frame[4].o), (jint(0)), (frame[8].i));
	LINE_NUMBER(154);
	if ((frame[8].i) == 0) goto label_20;
	}
	INST_ICONST(2);
	goto label_21;
label_20:;
	INST_ICONST(1);
label_21:;
	INST_ISTORE(5);
	goto label_23;
label_10:;
	{
	LINE_NUMBER(157);
	sp[0].o = (jobject) createArray(ctx, &class_byte, (jint(4)));
	frame[4].o = sp[0].o;
	LINE_NUMBER(158);
	jint temp0 = (jint)SM_rhino_DToA_lo0bits_int_R_int(ctx, (frame[8].i));
	frame[6].i = temp0;
	LINE_NUMBER(159);
	frame[8].i = (bit_cast<jint>(bit_cast<uint32_t>((frame[8].i)) >> (frame[6].i)));
	LINE_NUMBER(160);
	SM_rhino_DToA_stuffBits_Array1_byte_int_int(ctx, (frame[4].o), (jint(0)), (frame[8].i));
	LINE_NUMBER(161);
	INST_IINC(6, 32);
	LINE_NUMBER(162);
	frame[5].i = (jint(1));
	}
label_23:;
	{
	LINE_NUMBER(164);
	if ((frame[9].i) == 0) goto label_29;
	}
	{
	LINE_NUMBER(165);
	ARRAY_ACCESS(jint, (frame[2].o), (jint(0))) = ((((frame[9].i) - (1023)) - (52)) + (frame[6].i));
	LINE_NUMBER(166);
	ARRAY_ACCESS(jint, (frame[3].o), (jint(0))) = ((53) - (frame[6].i));
	goto label_32;
	}
label_29:;
	{
	LINE_NUMBER(168);
	ARRAY_ACCESS(jint, (frame[2].o), (jint(0))) = (((((frame[9].i) - (1023)) - (52)) + (jint(1))) + (frame[6].i));
	LINE_NUMBER(169);
	sp[0].o = frame[3].o;
	jint temp0 = jint(0);
	jint temp1 = (32) * (frame[5].i);
	jint temp2 = (jint)SM_rhino_DToA_hi0bits_int_R_int(ctx, (frame[8].i));
	ARRAY_ACCESS(jint, sp[0].o, temp0) = (temp1 - temp2);
	}
label_32:;
	{
	LINE_NUMBER(171);
	clinit_java_math_BigInteger(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_math_BigInteger);
	init_java_math_BigInteger_Array1_byte(ctx, sp[0].o, (frame[4].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject SM_rhino_DToA_JS_dtobasestr_int_double_R_java_lang_String(jcontext ctx, jint param0, jdouble param1) {
	jtype frame[34];
	auto stack = &frame[30];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/DToA:JS_dtobasestr", 34 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_rhino_DToA(ctx);
	frame[0].i = param0;
	frame[1].d = param1;
	{
	LINE_NUMBER(175);
	if ((jint(2)) > (frame[0].i)) goto label_1;
	}
	{
	if ((frame[0].i) <= (36)) goto label_2;
	}
label_1:;
	{
	LINE_NUMBER(176);
	clinit_java_lang_IllegalArgumentException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IllegalArgumentException);
	clinit_java_lang_StringBuilder(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[1].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"Bad base: "_j))));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder])(ctx, sp[1].o, (frame[0].i));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[1].o);
	init_java_lang_IllegalArgumentException_java_lang_String(ctx, sp[0].o, sp[1].o);
	throwException(ctx, sp[0].o);	}
label_2:;
	{
	LINE_NUMBER(179);
	jint temp0 = (jint)SM_java_lang_Double_isNaN_double_R_boolean(ctx, (frame[1].d));
	if (temp0 == 0) goto label_3;
	}
	{
	LINE_NUMBER(180);
	popStackFrame(ctx);
	return (((jobject) createStringLiteral(ctx, u8"NaN"_j)));
	}
label_3:;
	{
	LINE_NUMBER(181);
	jint temp0 = (jint)SM_java_lang_Double_isInfinite_double_R_boolean(ctx, (frame[1].d));
	if (temp0 == 0) goto label_5;
	}
	{
	LINE_NUMBER(182);
	if ((doubleCompare((frame[1].d), (jdouble(0)), -1)) <= 0) goto label_7;
	}
	(sp++)->o = ((jobject) createStringLiteral(ctx, u8"Infinity"_j));
	goto label_8;
label_7:;
	(sp++)->o = ((jobject) createStringLiteral(ctx, u8"-Infinity"_j));
label_8:;
	popStackFrame(ctx);
	INST_ARETURN();
label_5:;
	{
	LINE_NUMBER(183);
	if ((doubleCompare((frame[1].d), (jdouble(0)), -1)) != 0) goto label_9;
	}
	{
	LINE_NUMBER(185);
	popStackFrame(ctx);
	return (((jobject) createStringLiteral(ctx, u8"0"_j)));
	}
label_9:;
	{
	LINE_NUMBER(189);
	if ((doubleCompare((frame[1].d), (jdouble(0)), -1)) < 0) goto label_11;
	}
	{
	LINE_NUMBER(190);
	frame[3].i = (jint(0));
	goto label_14;
	}
label_11:;
	{
	LINE_NUMBER(192);
	frame[3].i = (jint(1));
	LINE_NUMBER(193);
	frame[1].d = (-(frame[1].d));
	}
label_14:;
	{
	LINE_NUMBER(199);
	jdouble temp0 = (jdouble)SM_java_lang_Math_floor_double_R_double(ctx, (frame[1].d));
	frame[5].d = temp0;
	LINE_NUMBER(200);
	frame[7].l = (jlong((frame[5].d)));
	LINE_NUMBER(201);
	if ((doubleCompare((jdouble((frame[7].l))), (frame[5].d), -1)) != 0) goto label_18;
	}
	{
	LINE_NUMBER(203);
	if ((frame[3].i) == 0) goto label_20;
	}
	{
	jlong temp0 = -(frame[7].l);
	sp[0].l = temp0;
	sp += 1;
	goto label_21;
	}
label_20:;
	INST_LLOAD(7);
label_21:;
	{
	sp -= 1;
	sp[0].o = (jobject)SM_java_lang_Long_toString_long_int_R_java_lang_String(ctx, sp[0].l, (frame[0].i));
	frame[4].o = sp[0].o;
	goto label_23;
	}
label_18:;
	{
	LINE_NUMBER(206);
	jlong temp0 = (jlong)SM_java_lang_Double_doubleToLongBits_double_R_long(ctx, (frame[5].d));
	frame[9].l = temp0;
	LINE_NUMBER(207);
	frame[11].i = ((jint(((frame[9].l) >> (52)))) & (2047));
	LINE_NUMBER(209);
	if ((frame[11].i) != 0) goto label_26;
	}
	{
	LINE_NUMBER(210);
	frame[12].l = (((frame[9].l) & (jlong(4503599627370495ll))) << (jint(1)));
	goto label_29;
	}
label_26:;
	{
	LINE_NUMBER(212);
	frame[12].l = (((frame[9].l) & (jlong(4503599627370495ll))) | (jlong(4503599627370496ll)));
	}
label_29:;
	{
	LINE_NUMBER(214);
	if ((frame[3].i) == 0) goto label_30;
	}
	{
	LINE_NUMBER(215);
	frame[12].l = (-(frame[12].l));
	}
label_30:;
	{
	LINE_NUMBER(217);
	INST_IINC(11, -1075);
	LINE_NUMBER(218);
	sp[0].o = (jobject)SM_java_math_BigInteger_valueOf_long_R_java_math_BigInteger(ctx, (frame[12].l));
	frame[14].o = sp[0].o;
	LINE_NUMBER(219);
	if ((frame[11].i) <= 0) goto label_34;
	}
	{
	LINE_NUMBER(220);
	sp[0].o = (jobject)((func_java_math_BigInteger_shiftLeft_int_R_java_math_BigInteger) ((void **) nullCheck(ctx, (frame[14].o))->vtable)[VTABLE_java_math_BigInteger_shiftLeft_int_R_java_math_BigInteger])(ctx, (frame[14].o), (frame[11].i));
	frame[14].o = sp[0].o;
	goto label_36;
	}
label_34:;
	{
	LINE_NUMBER(221);
	if ((frame[11].i) >= 0) goto label_36;
	}
	{
	LINE_NUMBER(222);
	sp[0].o = (jobject)((func_java_math_BigInteger_shiftRight_int_R_java_math_BigInteger) ((void **) nullCheck(ctx, (frame[14].o))->vtable)[VTABLE_java_math_BigInteger_shiftRight_int_R_java_math_BigInteger])(ctx, (frame[14].o), (-(frame[11].i)));
	frame[14].o = sp[0].o;
	}
label_36:;
	{
	LINE_NUMBER(224);
	sp[0].o = (jobject)((func_java_math_BigInteger_toString_int_R_java_lang_String) ((void **) nullCheck(ctx, (frame[14].o))->vtable)[VTABLE_java_math_BigInteger_toString_int_R_java_lang_String])(ctx, (frame[14].o), (frame[0].i));
	frame[4].o = sp[0].o;
	}
label_23:;
	{
	LINE_NUMBER(227);
	if ((doubleCompare((frame[1].d), (frame[5].d), -1)) != 0) goto label_38;
	}
	{
	LINE_NUMBER(229);
	popStackFrame(ctx);
	return (frame[4].o);
	}
label_38:;
	{
	LINE_NUMBER(238);
	clinit_java_lang_StringBuilder(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[0].o);
	frame[9].o = sp[0].o;
	LINE_NUMBER(239);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[9].o))->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, (frame[9].o), (frame[4].o));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_char_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_char_R_java_lang_StringBuilder])(ctx, sp[0].o, (46));
	LINE_NUMBER(240);
	frame[11].d = ((frame[1].d) - (frame[5].d));
	LINE_NUMBER(242);
	jlong temp0 = (jlong)SM_java_lang_Double_doubleToLongBits_double_R_long(ctx, (frame[1].d));
	frame[14].l = temp0;
	LINE_NUMBER(243);
	frame[16].i = (jint(((frame[14].l) >> (32))));
	LINE_NUMBER(244);
	frame[17].i = (jint((frame[14].l)));
	LINE_NUMBER(246);
	sp[0].o = (jobject) createArray(ctx, &class_int, (jint(1)));
	frame[18].o = sp[0].o;
	LINE_NUMBER(247);
	sp[0].o = (jobject) createArray(ctx, &class_int, (jint(1)));
	frame[19].o = sp[0].o;
	LINE_NUMBER(249);
	sp[0].o = (jobject)SM_rhino_DToA_d2b_double_Array1_int_Array1_int_R_java_math_BigInteger(ctx, (frame[11].d), (frame[18].o), (frame[19].o));
	frame[13].o = sp[0].o;
	LINE_NUMBER(253);
	frame[20].i = (-((bit_cast<jint>(bit_cast<uint32_t>((frame[16].i)) >> (20))) & (2047)));
	LINE_NUMBER(254);
	if ((frame[20].i) != 0) goto label_50;
	}
	{
	LINE_NUMBER(255);
	frame[20].i = (jint(-1));
	}
label_50:;
	{
	LINE_NUMBER(256);
	INST_IINC(20, 1076);
	LINE_NUMBER(259);
	sp[0].o = (jobject)SM_java_math_BigInteger_valueOf_long_R_java_math_BigInteger(ctx, (jlong(1)));
	frame[21].o = sp[0].o;
	LINE_NUMBER(260);
	frame[22].o = (frame[21].o);
	LINE_NUMBER(261);
	if ((frame[17].i) != 0) goto label_55;
	}
	{
	if (((frame[16].i) & (jint(1048575))) != 0) goto label_55;
	}
	{
	if (((frame[16].i) & (jint(2145386496))) == 0) goto label_55;
	}
	{
	LINE_NUMBER(265);
	INST_IINC(20, 1);
	LINE_NUMBER(266);
	sp[0].o = (jobject)SM_java_math_BigInteger_valueOf_long_R_java_math_BigInteger(ctx, (jlong(2ll)));
	frame[22].o = sp[0].o;
	}
label_55:;
	{
	LINE_NUMBER(269);
	sp[0].o = (jobject)((func_java_math_BigInteger_shiftLeft_int_R_java_math_BigInteger) ((void **) nullCheck(ctx, (frame[13].o))->vtable)[VTABLE_java_math_BigInteger_shiftLeft_int_R_java_math_BigInteger])(ctx, (frame[13].o), (((jint)ARRAY_ACCESS(jint, (frame[18].o), (jint(0)))) + (frame[20].i)));
	frame[13].o = sp[0].o;
	LINE_NUMBER(270);
	sp[0].o = (jobject)SM_java_math_BigInteger_valueOf_long_R_java_math_BigInteger(ctx, (jlong(1)));
	frame[23].o = sp[0].o;
	LINE_NUMBER(271);
	sp[0].o = (jobject)((func_java_math_BigInteger_shiftLeft_int_R_java_math_BigInteger) ((void **) nullCheck(ctx, (frame[23].o))->vtable)[VTABLE_java_math_BigInteger_shiftLeft_int_R_java_math_BigInteger])(ctx, (frame[23].o), (frame[20].i));
	frame[23].o = sp[0].o;
	LINE_NUMBER(277);
	sp[0].o = (jobject)SM_java_math_BigInteger_valueOf_long_R_java_math_BigInteger(ctx, (jlong((frame[0].i))));
	frame[24].o = sp[0].o;
	LINE_NUMBER(279);
	frame[25].i = (jint(0));
	}
label_62:;
	{
	LINE_NUMBER(281);
	sp[0].o = (jobject)((func_java_math_BigInteger_multiply_java_math_BigInteger_R_java_math_BigInteger) ((void **) nullCheck(ctx, (frame[13].o))->vtable)[VTABLE_java_math_BigInteger_multiply_java_math_BigInteger_R_java_math_BigInteger])(ctx, (frame[13].o), (frame[24].o));
	frame[13].o = sp[0].o;
	LINE_NUMBER(282);
	sp[0].o = (jobject)((func_java_math_BigInteger_divideAndRemainder_java_math_BigInteger_R_Array1_java_math_BigInteger) ((void **) nullCheck(ctx, (frame[13].o))->vtable)[VTABLE_java_math_BigInteger_divideAndRemainder_java_math_BigInteger_R_Array1_java_math_BigInteger])(ctx, (frame[13].o), (frame[23].o));
	frame[26].o = sp[0].o;
	LINE_NUMBER(283);
	frame[13].o = ((jobject)ARRAY_ACCESS(jobject, (frame[26].o), (jint(1))));
	LINE_NUMBER(284);
	jint temp0 = (jint)((func_java_math_BigInteger_intValue_R_int) ((void **) nullCheck(ctx, ((jobject)ARRAY_ACCESS(jobject, (frame[26].o), (jint(0)))))->vtable)[VTABLE_java_math_BigInteger_intValue_R_int])(ctx, ((jobject)ARRAY_ACCESS(jobject, (frame[26].o), (jint(0)))));
	frame[10].i = (jchar(temp0));
	LINE_NUMBER(285);
	if ((frame[21].o) != (frame[22].o)) goto label_67;
	}
	{
	LINE_NUMBER(286);
	sp[0].o = (jobject)((func_java_math_BigInteger_multiply_java_math_BigInteger_R_java_math_BigInteger) ((void **) nullCheck(ctx, (frame[21].o))->vtable)[VTABLE_java_math_BigInteger_multiply_java_math_BigInteger_R_java_math_BigInteger])(ctx, (frame[21].o), (frame[24].o));
	frame[22].o = sp[0].o;
	frame[21].o = sp[0].o;
	goto label_69;
	}
label_67:;
	{
	LINE_NUMBER(288);
	sp[0].o = (jobject)((func_java_math_BigInteger_multiply_java_math_BigInteger_R_java_math_BigInteger) ((void **) nullCheck(ctx, (frame[21].o))->vtable)[VTABLE_java_math_BigInteger_multiply_java_math_BigInteger_R_java_math_BigInteger])(ctx, (frame[21].o), (frame[24].o));
	frame[21].o = sp[0].o;
	LINE_NUMBER(289);
	sp[0].o = (jobject)((func_java_math_BigInteger_multiply_java_math_BigInteger_R_java_math_BigInteger) ((void **) nullCheck(ctx, (frame[22].o))->vtable)[VTABLE_java_math_BigInteger_multiply_java_math_BigInteger_R_java_math_BigInteger])(ctx, (frame[22].o), (frame[24].o));
	frame[22].o = sp[0].o;
	}
label_69:;
	{
	LINE_NUMBER(293);
	jint temp0 = (jint)((func_java_math_BigInteger_compareTo_java_math_BigInteger_R_int) ((void **) nullCheck(ctx, (frame[13].o))->vtable)[VTABLE_java_math_BigInteger_compareTo_java_math_BigInteger_R_int])(ctx, (frame[13].o), (frame[21].o));
	frame[27].i = temp0;
	LINE_NUMBER(295);
	sp[0].o = (jobject)((func_java_math_BigInteger_subtract_java_math_BigInteger_R_java_math_BigInteger) ((void **) nullCheck(ctx, (frame[23].o))->vtable)[VTABLE_java_math_BigInteger_subtract_java_math_BigInteger_R_java_math_BigInteger])(ctx, (frame[23].o), (frame[22].o));
	frame[28].o = sp[0].o;
	LINE_NUMBER(296);
	jint temp1 = (jint)((func_java_math_BigInteger_signum_R_int) ((void **) nullCheck(ctx, (frame[28].o))->vtable)[VTABLE_java_math_BigInteger_signum_R_int])(ctx, (frame[28].o));
	if (temp1 > 0) goto label_73;
	}
	INST_ICONST(1);
	goto label_74;
label_73:;
	{
	jint temp0 = (jint)((func_java_math_BigInteger_compareTo_java_math_BigInteger_R_int) ((void **) nullCheck(ctx, (frame[13].o))->vtable)[VTABLE_java_math_BigInteger_compareTo_java_math_BigInteger_R_int])(ctx, (frame[13].o), (frame[28].o));
	sp[0].i = temp0;
	sp += 1;
	}
label_74:;
	{
	sp -= 1;
	frame[29].i = sp[0].i;
	LINE_NUMBER(298);
	if ((frame[29].i) != 0) goto label_76;
	}
	{
	if (((frame[17].i) & (jint(1))) != 0) goto label_76;
	}
	{
	LINE_NUMBER(299);
	if ((frame[27].i) <= 0) goto label_78;
	}
	LINE_NUMBER(300);
	INST_IINC(10, 1);
label_78:;
	{
	LINE_NUMBER(301);
	frame[25].i = (jint(1));
	goto label_80;
	}
label_76:;
	{
	LINE_NUMBER(302);
	if ((frame[27].i) < 0) goto label_81;
	}
	INST_ILOAD(27);
	if ((--sp)->i != 0) goto label_82;
	{
	if (((frame[17].i) & (jint(1))) != 0) goto label_82;
	}
label_81:;
	{
	LINE_NUMBER(303);
	if ((frame[29].i) <= 0) goto label_83;
	}
	{
	LINE_NUMBER(306);
	sp[0].o = (jobject)((func_java_math_BigInteger_shiftLeft_int_R_java_math_BigInteger) ((void **) nullCheck(ctx, (frame[13].o))->vtable)[VTABLE_java_math_BigInteger_shiftLeft_int_R_java_math_BigInteger])(ctx, (frame[13].o), (jint(1)));
	frame[13].o = sp[0].o;
	LINE_NUMBER(307);
	jint temp0 = (jint)((func_java_math_BigInteger_compareTo_java_math_BigInteger_R_int) ((void **) nullCheck(ctx, (frame[13].o))->vtable)[VTABLE_java_math_BigInteger_compareTo_java_math_BigInteger_R_int])(ctx, (frame[13].o), (frame[23].o));
	frame[29].i = temp0;
	LINE_NUMBER(308);
	if ((frame[29].i) <= 0) goto label_83;
	}
	LINE_NUMBER(310);
	INST_IINC(10, 1);
label_83:;
	{
	LINE_NUMBER(312);
	frame[25].i = (jint(1));
	goto label_80;
	}
label_82:;
	{
	LINE_NUMBER(313);
	if ((frame[29].i) <= 0) goto label_80;
	}
	{
	LINE_NUMBER(314);
	INST_IINC(10, 1);
	LINE_NUMBER(315);
	frame[25].i = (jint(1));
	}
label_80:;
	{
	LINE_NUMBER(318);
	sp[0].o = frame[9].o;
	jint temp0 = (jint)SM_rhino_DToA_BASEDIGIT_int_R_char(ctx, (frame[10].i));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_char_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_char_R_java_lang_StringBuilder])(ctx, sp[0].o, temp0);
	LINE_NUMBER(319);
	if ((frame[25].i) == 0) goto label_62;
	}
	{
	LINE_NUMBER(321);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, (frame[9].o))->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, (frame[9].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jint SM_rhino_DToA_word0_double_R_int(jcontext ctx, jdouble param0) {
	jtype frame[7];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/DToA:word0", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_rhino_DToA(ctx);
	frame[0].d = param0;
	{
	LINE_NUMBER(359);
	jlong temp0 = (jlong)SM_java_lang_Double_doubleToLongBits_double_R_long(ctx, (frame[0].d));
	frame[2].l = temp0;
	LINE_NUMBER(360);
	popStackFrame(ctx);
	return (jint(((frame[2].l) >> (32))));
	}

	popStackFrame(ctx);
}

jdouble SM_rhino_DToA_setWord0_double_int_R_double(jcontext ctx, jdouble param0, jint param1) {
	jtype frame[11];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/DToA:setWord0", 11 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_rhino_DToA(ctx);
	frame[0].d = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(364);
	jlong temp0 = (jlong)SM_java_lang_Double_doubleToLongBits_double_R_long(ctx, (frame[0].d));
	frame[3].l = temp0;
	LINE_NUMBER(365);
	frame[3].l = (((jlong((frame[2].i))) << (32)) | ((frame[3].l) & (jlong(4294967295ll))));
	LINE_NUMBER(366);
	jdouble temp1 = (jdouble)SM_java_lang_Double_longBitsToDouble_long_R_double(ctx, (frame[3].l));
	popStackFrame(ctx);
	return temp1;
	}

	popStackFrame(ctx);
}

jint SM_rhino_DToA_word1_double_R_int(jcontext ctx, jdouble param0) {
	jtype frame[6];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/DToA:word1", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_rhino_DToA(ctx);
	frame[0].d = param0;
	{
	LINE_NUMBER(370);
	jlong temp0 = (jlong)SM_java_lang_Double_doubleToLongBits_double_R_long(ctx, (frame[0].d));
	frame[2].l = temp0;
	LINE_NUMBER(371);
	popStackFrame(ctx);
	return (jint((frame[2].l)));
	}

	popStackFrame(ctx);
}

jobject SM_rhino_DToA_pow5mult_java_math_BigInteger_int_R_java_math_BigInteger(jcontext ctx, jobject param0, jint param1) {
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/DToA:pow5mult", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_rhino_DToA(ctx);
	frame[0].o = param0;
	frame[1].i = param1;
	{
	LINE_NUMBER(377);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)SM_java_math_BigInteger_valueOf_long_R_java_math_BigInteger(ctx, (jlong(5ll)));
	sp[1].o = (jobject)((func_java_math_BigInteger_pow_int_R_java_math_BigInteger) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_math_BigInteger_pow_int_R_java_math_BigInteger])(ctx, sp[1].o, (frame[1].i));
	sp[0].o = (jobject)((func_java_math_BigInteger_multiply_java_math_BigInteger_R_java_math_BigInteger) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_math_BigInteger_multiply_java_math_BigInteger_R_java_math_BigInteger])(ctx, sp[0].o, sp[1].o);
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jbool SM_rhino_DToA_roundOff_java_lang_StringBuilder_R_boolean(jcontext ctx, jobject param0) {
	jtype frame[7];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/DToA:roundOff", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_rhino_DToA(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(381);
	jint temp0 = (jint)((func_java_lang_StringBuilder_length_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_lang_StringBuilder_length_R_int])(ctx, (frame[0].o));
	frame[1].i = temp0;
	}
label_1:;
	{
	LINE_NUMBER(382);
	if ((frame[1].i) == 0) goto label_2;
	}
	{
	LINE_NUMBER(383);
	INST_IINC(1, -1);
	LINE_NUMBER(384);
	jint temp0 = (jint)((func_java_lang_StringBuilder_charAt_int_R_char) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_lang_StringBuilder_charAt_int_R_char])(ctx, (frame[0].o), (frame[1].i));
	frame[2].i = temp0;
	LINE_NUMBER(385);
	if ((frame[2].i) == (57)) goto label_6;
	}
	{
	LINE_NUMBER(386);
	((func_java_lang_StringBuilder_setCharAt_int_char) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_lang_StringBuilder_setCharAt_int_char])(ctx, (frame[0].o), (frame[1].i), (jchar(((frame[2].i) + (jint(1))))));
	LINE_NUMBER(387);
	((func_java_lang_StringBuilder_setLength_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_lang_StringBuilder_setLength_int])(ctx, (frame[0].o), ((frame[1].i) + (jint(1))));
	LINE_NUMBER(388);
	popStackFrame(ctx);
	return (jint(0));
	}
label_6:;
	LINE_NUMBER(390);
	goto label_1;
label_2:;
	{
	LINE_NUMBER(391);
	((func_java_lang_StringBuilder_setLength_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_lang_StringBuilder_setLength_int])(ctx, (frame[0].o), (jint(0)));
	LINE_NUMBER(392);
	popStackFrame(ctx);
	return (jint(1));
	}

	popStackFrame(ctx);
}

jint SM_rhino_DToA_JS_dtoa_double_int_boolean_int_Array1_boolean_java_lang_StringBuilder_R_int(jcontext ctx, jdouble param0, jint param1, jbool param2, jint param3, jobject param4, jobject param5) {
	jtype frame[56];
	auto stack = &frame[50];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/DToA:JS_dtoa", 56 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_rhino_DToA(ctx);
	frame[0].d = param0;
	frame[2].i = param1;
	frame[3].i = param2;
	frame[4].i = param3;
	frame[5].o = param4;
	frame[6].o = param5;
	{
	LINE_NUMBER(445);
	sp[0].o = (jobject) createArray(ctx, &class_int, (jint(1)));
	frame[33].o = sp[0].o;
	LINE_NUMBER(446);
	sp[0].o = (jobject) createArray(ctx, &class_int, (jint(1)));
	frame[34].o = sp[0].o;
	LINE_NUMBER(450);
	jint temp0 = (jint)SM_rhino_DToA_word0_double_R_int(ctx, (frame[0].d));
	if ((temp0 & (bit_cast<jint>(0x80000000))) == 0) goto label_3;
	}
	{
	LINE_NUMBER(452);
	ARRAY_ACCESS(jbyte, (frame[5].o), (jint(0))) = (jint(1));
	LINE_NUMBER(454);
	jdouble temp0 = frame[0].d;
	jint temp1 = (jint)SM_rhino_DToA_word0_double_R_int(ctx, (frame[0].d));
	jdouble temp2 = (jdouble)SM_rhino_DToA_setWord0_double_int_R_double(ctx, temp0, (temp1 & (jint(2147483647))));
	frame[0].d = temp2;
	goto label_6;
	}
label_3:;
	{
	LINE_NUMBER(456);
	ARRAY_ACCESS(jbyte, (frame[5].o), (jint(0))) = (jint(0));
	}
label_6:;
	{
	LINE_NUMBER(458);
	jint temp0 = (jint)SM_rhino_DToA_word0_double_R_int(ctx, (frame[0].d));
	if ((temp0 & (jint(2146435072))) != (jint(2146435072))) goto label_7;
	}
	{
	LINE_NUMBER(460);
	sp[0].o = frame[6].o;
	jint temp0 = (jint)SM_rhino_DToA_word1_double_R_int(ctx, (frame[0].d));
	sp += 1;
	if (temp0 != 0) goto label_9;
	}
	{
	jint temp0 = (jint)SM_rhino_DToA_word0_double_R_int(ctx, (frame[0].d));
	if ((temp0 & (jint(1048575))) != 0) goto label_9;
	}
	(sp++)->o = ((jobject) createStringLiteral(ctx, u8"Infinity"_j));
	goto label_10;
label_9:;
	(sp++)->o = ((jobject) createStringLiteral(ctx, u8"NaN"_j));
label_10:;
	{
	sp -= 2;
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(461);
	popStackFrame(ctx);
	return (9999);
	}
label_7:;
	{
	LINE_NUMBER(463);
	if ((doubleCompare((frame[0].d), (jdouble(0)), -1)) != 0) goto label_12;
	}
	{
	LINE_NUMBER(465);
	((func_java_lang_StringBuilder_setLength_int) ((void **) nullCheck(ctx, (frame[6].o))->vtable)[VTABLE_java_lang_StringBuilder_setLength_int])(ctx, (frame[6].o), (jint(0)));
	LINE_NUMBER(466);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_char_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[6].o))->vtable)[VTABLE_java_lang_StringBuilder_append_char_R_java_lang_StringBuilder])(ctx, (frame[6].o), (48));
	LINE_NUMBER(467);
	popStackFrame(ctx);
	return (jint(1));
	}
label_12:;
	{
	LINE_NUMBER(470);
	sp[0].o = (jobject)SM_rhino_DToA_d2b_double_Array1_int_Array1_int_R_java_math_BigInteger(ctx, (frame[0].d), (frame[33].o), (frame[34].o));
	frame[27].o = sp[0].o;
	LINE_NUMBER(471);
	jint temp0 = (jint)SM_rhino_DToA_word0_double_R_int(ctx, (frame[0].d));
	jint temp1 = (bit_cast<jint>(bit_cast<uint32_t>(temp0) >> (20))) & (2047);
	frame[9].i = temp1;
	if (temp1 == 0) goto label_18;
	}
	{
	LINE_NUMBER(472);
	jdouble temp0 = frame[0].d;
	jint temp1 = (jint)SM_rhino_DToA_word0_double_R_int(ctx, (frame[0].d));
	jdouble temp2 = (jdouble)SM_rhino_DToA_setWord0_double_int_R_double(ctx, temp0, ((temp1 & (jint(1048575))) | (jint(1072693248))));
	frame[35].d = temp2;
	LINE_NUMBER(494);
	INST_IINC(9, -1023);
	LINE_NUMBER(495);
	frame[42].i = (jint(0));
	goto label_23;
	}
label_18:;
	{
	LINE_NUMBER(498);
	frame[9].i = ((((jint)ARRAY_ACCESS(jint, (frame[34].o), (jint(0)))) + ((jint)ARRAY_ACCESS(jint, (frame[33].o), (jint(0))))) + (1074));
	LINE_NUMBER(499);
	if ((frame[9].i) <= (32)) goto label_25;
	}
	{
	jdouble temp0 = frame[0].d;
	LINE_NUMBER(500);
	jint temp1 = (jint)SM_rhino_DToA_word0_double_R_int(ctx, temp0);
	jlong temp2 = (jlong(temp1)) << ((64) - (frame[9].i));
	jint temp3 = (jint)SM_rhino_DToA_word1_double_R_int(ctx, (frame[0].d));
	jlong temp4 = temp2 | (jlong((bit_cast<jint>(bit_cast<uint32_t>(temp3) >> ((frame[9].i) - (32))))));
	sp[0].l = temp4;
	sp += 1;
	goto label_27;
	}
label_25:;
	{
	jdouble temp0 = frame[0].d;
	LINE_NUMBER(501);
	jint temp1 = (jint)SM_rhino_DToA_word1_double_R_int(ctx, temp0);
	jlong temp2 = (jlong(temp1)) << ((32) - (frame[9].i));
	sp[0].l = temp2;
	sp += 1;
	}
label_27:;
	{
	sp -= 1;
	frame[25].l = sp[0].l;
	LINE_NUMBER(504);
	jdouble temp0 = jdouble((frame[25].l));
	jint temp1 = (jint)SM_rhino_DToA_word0_double_R_int(ctx, (jdouble((frame[25].l))));
	jdouble temp2 = (jdouble)SM_rhino_DToA_setWord0_double_int_R_double(ctx, temp0, (temp1 - (jint(32505856))));
	frame[35].d = temp2;
	LINE_NUMBER(505);
	INST_IINC(9, -1075);
	LINE_NUMBER(506);
	frame[42].i = (jint(1));
	}
label_23:;
	{
	LINE_NUMBER(509);
	frame[37].d = (((((frame[35].d) - (jdouble(1.5))) * (jdouble(0.289529654602168))) + (jdouble(0.1760912590558))) + ((jdouble((frame[9].i))) * (jdouble(0.301029995663981))));
	LINE_NUMBER(510);
	frame[16].i = (jint((frame[37].d)));
	LINE_NUMBER(511);
	if ((doubleCompare((frame[37].d), (jdouble(0)), 1)) >= 0) goto label_34;
	}
	{
	if ((doubleCompare((frame[37].d), (jdouble((frame[16].i))), -1)) == 0) goto label_34;
	}
	LINE_NUMBER(512);
	INST_IINC(16, -1);
label_34:;
	{
	LINE_NUMBER(513);
	frame[43].i = (jint(1));
	LINE_NUMBER(514);
	if ((frame[16].i) < 0) goto label_37;
	}
	{
	if ((frame[16].i) > (22)) goto label_37;
	}
	{
	LINE_NUMBER(515);
	jdouble temp0 = frame[0].d;
	clinit_rhino_DToA(ctx);
	sp[0].o = (jobject)SF_rhino_DToA_tens;
	if ((doubleCompare(temp0, ((jdouble)ARRAY_ACCESS(jdouble, sp[0].o, (frame[16].i))), 1)) >= 0) goto label_39;
	}
	LINE_NUMBER(516);
	INST_IINC(16, -1);
label_39:;
	{
	LINE_NUMBER(517);
	frame[43].i = (jint(0));
	}
label_37:;
	{
	LINE_NUMBER(521);
	frame[14].i = ((((jint)ARRAY_ACCESS(jint, (frame[34].o), (jint(0)))) - (frame[9].i)) - (jint(1)));
	LINE_NUMBER(523);
	if ((frame[14].i) < 0) goto label_42;
	}
	{
	LINE_NUMBER(524);
	frame[7].i = (jint(0));
	LINE_NUMBER(525);
	frame[20].i = (frame[14].i);
	goto label_46;
	}
label_42:;
	{
	LINE_NUMBER(527);
	frame[7].i = (-(frame[14].i));
	LINE_NUMBER(528);
	frame[20].i = (jint(0));
	}
label_46:;
	{
	LINE_NUMBER(530);
	if ((frame[16].i) < 0) goto label_48;
	}
	{
	LINE_NUMBER(531);
	frame[8].i = (jint(0));
	LINE_NUMBER(532);
	frame[21].i = (frame[16].i);
	LINE_NUMBER(533);
	frame[20].i = ((frame[20].i) + (frame[16].i));
	goto label_52;
	}
label_48:;
	{
	LINE_NUMBER(535);
	frame[7].i = ((frame[7].i) - (frame[16].i));
	LINE_NUMBER(536);
	frame[8].i = (-(frame[16].i));
	LINE_NUMBER(537);
	frame[21].i = (jint(0));
	}
label_52:;
	{
	LINE_NUMBER(541);
	if ((frame[2].i) < 0) goto label_55;
	}
	{
	if ((frame[2].i) <= (9)) goto label_56;
	}
label_55:;
	{
	LINE_NUMBER(542);
	frame[2].i = (jint(0));
	}
label_56:;
	{
	LINE_NUMBER(543);
	frame[44].i = (jint(1));
	LINE_NUMBER(544);
	if ((frame[2].i) <= (jint(5))) goto label_58;
	}
	{
	LINE_NUMBER(545);
	INST_IINC(2, -4);
	LINE_NUMBER(546);
	frame[44].i = (jint(0));
	}
label_58:;
	{
	LINE_NUMBER(548);
	frame[45].i = (jint(1));
	LINE_NUMBER(549);
	jint temp0 = jint(0);
	frame[13].i = temp0;
	frame[11].i = temp0;
	LINE_NUMBER(550);
	switch((frame[2].i)) {
		case 0: goto label_64;
		case 1: goto label_64;
		case 2: goto label_65;
		case 3: goto label_65;
		case 4: goto label_66;
		case 5: goto label_67;
		default: goto label_68;
	}
	}
label_64:;
	{
	LINE_NUMBER(553);
	jint temp0 = jint(-1);
	frame[13].i = temp0;
	frame[11].i = temp0;
	LINE_NUMBER(554);
	frame[4].i = (jint(0));
	LINE_NUMBER(555);
	goto label_68;
	}
label_65:;
	{
	LINE_NUMBER(558);
	frame[45].i = (jint(0));
	}
label_66:;
	{
	LINE_NUMBER(561);
	if ((frame[4].i) > 0) goto label_71;
	}
	{
	LINE_NUMBER(562);
	frame[4].i = (jint(1));
	}
label_71:;
	{
	LINE_NUMBER(563);
	jint temp0 = frame[4].i;
	frame[13].i = temp0;
	frame[11].i = temp0;
	LINE_NUMBER(564);
	goto label_68;
	}
label_67:;
	{
	LINE_NUMBER(567);
	frame[9].i = (((frame[4].i) + (frame[16].i)) + (jint(1)));
	LINE_NUMBER(568);
	frame[11].i = (frame[9].i);
	LINE_NUMBER(569);
	frame[13].i = ((frame[9].i) - (jint(1)));
	LINE_NUMBER(570);
	if ((frame[9].i) > 0) goto label_68;
	}
label_68:;
	{
	LINE_NUMBER(577);
	frame[46].i = (jint(0));
	LINE_NUMBER(578);
	if ((frame[11].i) < 0) goto label_78;
	}
	{
	if ((frame[11].i) > (14)) goto label_78;
	}
	INST_ILOAD(44);
	if ((--sp)->i == 0) goto label_78;
	{
	LINE_NUMBER(582);
	frame[9].i = (jint(0));
	LINE_NUMBER(583);
	frame[35].d = (frame[0].d);
	LINE_NUMBER(584);
	frame[17].i = (frame[16].i);
	LINE_NUMBER(585);
	frame[12].i = (frame[11].i);
	LINE_NUMBER(586);
	frame[10].i = (jint(2));
	LINE_NUMBER(588);
	if ((frame[16].i) <= 0) goto label_85;
	}
	{
	LINE_NUMBER(589);
	clinit_rhino_DToA(ctx);
	sp[0].o = (jobject)SF_rhino_DToA_tens;
	frame[37].d = ((jdouble)ARRAY_ACCESS(jdouble, sp[0].o, ((frame[16].i) & (15))));
	LINE_NUMBER(590);
	frame[14].i = ((frame[16].i) >> (jint(4)));
	LINE_NUMBER(591);
	if (((frame[14].i) & (16)) == 0) goto label_89;
	}
	{
	LINE_NUMBER(593);
	frame[14].i = ((frame[14].i) & (15));
	LINE_NUMBER(594);
	jdouble temp0 = frame[0].d;
	clinit_rhino_DToA(ctx);
	sp[0].o = (jobject)SF_rhino_DToA_bigtens;
	frame[0].d = (temp0 / ((jdouble)ARRAY_ACCESS(jdouble, sp[0].o, (jint(4)))));
	LINE_NUMBER(595);
	INST_IINC(10, 1);
	}
label_89:;
	{
	LINE_NUMBER(597);
	if ((frame[14].i) == 0) goto label_93;
	}
	{
	LINE_NUMBER(598);
	if (((frame[14].i) & (jint(1))) == 0) goto label_95;
	}
	{
	LINE_NUMBER(599);
	INST_IINC(10, 1);
	LINE_NUMBER(600);
	jdouble temp0 = frame[37].d;
	clinit_rhino_DToA(ctx);
	sp[0].o = (jobject)SF_rhino_DToA_bigtens;
	frame[37].d = (temp0 * ((jdouble)ARRAY_ACCESS(jdouble, sp[0].o, (frame[9].i))));
	}
label_95:;
	{
	LINE_NUMBER(597);
	frame[14].i = ((frame[14].i) >> (jint(1)));
	INST_IINC(9, 1);
	goto label_89;
	}
label_93:;
	{
	LINE_NUMBER(602);
	frame[0].d = ((frame[0].d) / (frame[37].d));
	goto label_98;
	}
label_85:;
	{
	LINE_NUMBER(603);
	jint temp0 = -(frame[16].i);
	frame[15].i = temp0;
	if (temp0 == 0) goto label_98;
	}
	{
	LINE_NUMBER(604);
	jdouble temp0 = frame[0].d;
	clinit_rhino_DToA(ctx);
	sp[0].o = (jobject)SF_rhino_DToA_tens;
	frame[0].d = (temp0 * ((jdouble)ARRAY_ACCESS(jdouble, sp[0].o, ((frame[15].i) & (15)))));
	LINE_NUMBER(605);
	frame[14].i = ((frame[15].i) >> (jint(4)));
	}
label_102:;
	INST_ILOAD(14);
	if ((--sp)->i == 0) goto label_98;
	{
	LINE_NUMBER(606);
	if (((frame[14].i) & (jint(1))) == 0) goto label_104;
	}
	{
	LINE_NUMBER(607);
	INST_IINC(10, 1);
	LINE_NUMBER(608);
	jdouble temp0 = frame[0].d;
	clinit_rhino_DToA(ctx);
	sp[0].o = (jobject)SF_rhino_DToA_bigtens;
	frame[0].d = (temp0 * ((jdouble)ARRAY_ACCESS(jdouble, sp[0].o, (frame[9].i))));
	}
label_104:;
	{
	LINE_NUMBER(605);
	frame[14].i = ((frame[14].i) >> (jint(1)));
	INST_IINC(9, 1);
	goto label_102;
	}
label_98:;
	{
	LINE_NUMBER(612);
	if ((frame[43].i) == 0) goto label_107;
	}
	{
	if ((doubleCompare((frame[0].d), (jdouble(1)), 1)) >= 0) goto label_107;
	}
	INST_ILOAD(11);
	if ((--sp)->i <= 0) goto label_107;
	{
	LINE_NUMBER(613);
	if ((frame[13].i) > 0) goto label_109;
	}
	{
	LINE_NUMBER(614);
	frame[46].i = (jint(1));
	goto label_107;
	}
label_109:;
	{
	LINE_NUMBER(616);
	frame[11].i = (frame[13].i);
	LINE_NUMBER(617);
	INST_IINC(16, -1);
	LINE_NUMBER(618);
	frame[0].d = ((frame[0].d) * (jdouble(10.0)));
	LINE_NUMBER(619);
	INST_IINC(10, 1);
	}
label_107:;
	{
	LINE_NUMBER(625);
	frame[39].d = (((jdouble((frame[10].i))) * (frame[0].d)) + (jdouble(7.0)));
	LINE_NUMBER(626);
	jdouble temp0 = frame[39].d;
	jint temp1 = (jint)SM_rhino_DToA_word0_double_R_int(ctx, (frame[39].d));
	jdouble temp2 = (jdouble)SM_rhino_DToA_setWord0_double_int_R_double(ctx, temp0, (temp1 - (jint(54525952))));
	frame[39].d = temp2;
	LINE_NUMBER(627);
	if ((frame[11].i) != 0) goto label_116;
	}
	{
	LINE_NUMBER(628);
	frame[32].o = (jobject(nullptr));
	LINE_NUMBER(629);
	frame[0].d = ((frame[0].d) - (jdouble(5.0)));
	LINE_NUMBER(630);
	if ((doubleCompare((frame[0].d), (frame[39].d), -1)) <= 0) goto label_120;
	}
	{
	LINE_NUMBER(631);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_char_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[6].o))->vtable)[VTABLE_java_lang_StringBuilder_append_char_R_java_lang_StringBuilder])(ctx, (frame[6].o), (49));
	LINE_NUMBER(632);
	INST_IINC(16, 1);
	LINE_NUMBER(633);
	popStackFrame(ctx);
	return ((frame[16].i) + (jint(1)));
	}
label_120:;
	{
	LINE_NUMBER(635);
	if ((doubleCompare((frame[0].d), (-(frame[39].d)), 1)) >= 0) goto label_124;
	}
	{
	LINE_NUMBER(636);
	((func_java_lang_StringBuilder_setLength_int) ((void **) nullCheck(ctx, (frame[6].o))->vtable)[VTABLE_java_lang_StringBuilder_setLength_int])(ctx, (frame[6].o), (jint(0)));
	LINE_NUMBER(637);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_char_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[6].o))->vtable)[VTABLE_java_lang_StringBuilder_append_char_R_java_lang_StringBuilder])(ctx, (frame[6].o), (48));
	LINE_NUMBER(638);
	popStackFrame(ctx);
	return (jint(1));
	}
label_124:;
	{
	LINE_NUMBER(640);
	frame[46].i = (jint(1));
	}
label_116:;
	{
	LINE_NUMBER(642);
	if ((frame[46].i) != 0) goto label_128;
	}
	{
	LINE_NUMBER(643);
	frame[46].i = (jint(1));
	LINE_NUMBER(644);
	if ((frame[45].i) == 0) goto label_131;
	}
	{
	LINE_NUMBER(648);
	jdouble temp0 = jdouble(0.5);
	clinit_rhino_DToA(ctx);
	sp[0].o = (jobject)SF_rhino_DToA_tens;
	frame[39].d = ((temp0 / ((jdouble)ARRAY_ACCESS(jdouble, sp[0].o, ((frame[11].i) - (jint(1)))))) - (frame[39].d));
	LINE_NUMBER(649);
	frame[9].i = (jint(0));
	}
label_134:;
	{
	LINE_NUMBER(650);
	frame[23].l = (jlong((frame[0].d)));
	LINE_NUMBER(651);
	frame[0].d = ((frame[0].d) - (jdouble((frame[23].l))));
	LINE_NUMBER(652);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_char_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[6].o))->vtable)[VTABLE_java_lang_StringBuilder_append_char_R_java_lang_StringBuilder])(ctx, (frame[6].o), (jchar((jint(((jlong(48ll)) + (frame[23].l)))))));
	LINE_NUMBER(653);
	if ((doubleCompare((frame[0].d), (frame[39].d), 1)) >= 0) goto label_138;
	}
	{
	LINE_NUMBER(654);
	popStackFrame(ctx);
	return ((frame[16].i) + (jint(1)));
	}
label_138:;
	{
	LINE_NUMBER(656);
	if ((doubleCompare(((jdouble(1)) - (frame[0].d)), (frame[39].d), 1)) >= 0) goto label_140;
	}
label_141:;
	{
	LINE_NUMBER(660);
	sp[0].o = frame[6].o;
	jint temp0 = (jint)((func_java_lang_StringBuilder_length_R_int) ((void **) nullCheck(ctx, (frame[6].o))->vtable)[VTABLE_java_lang_StringBuilder_length_R_int])(ctx, (frame[6].o));
	jint temp1 = (jint)((func_java_lang_StringBuilder_charAt_int_R_char) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_charAt_int_R_char])(ctx, sp[0].o, (temp0 - (jint(1))));
	frame[47].i = temp1;
	LINE_NUMBER(661);
	sp[0].o = frame[6].o;
	jint temp2 = (jint)((func_java_lang_StringBuilder_length_R_int) ((void **) nullCheck(ctx, (frame[6].o))->vtable)[VTABLE_java_lang_StringBuilder_length_R_int])(ctx, (frame[6].o));
	((func_java_lang_StringBuilder_setLength_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_setLength_int])(ctx, sp[0].o, (temp2 - (jint(1))));
	LINE_NUMBER(662);
	if ((frame[47].i) == (57)) goto label_144;
	}
	goto label_145;
label_144:;
	{
	LINE_NUMBER(663);
	jint temp0 = (jint)((func_java_lang_StringBuilder_length_R_int) ((void **) nullCheck(ctx, (frame[6].o))->vtable)[VTABLE_java_lang_StringBuilder_length_R_int])(ctx, (frame[6].o));
	if (temp0 != 0) goto label_141;
	}
	{
	LINE_NUMBER(664);
	INST_IINC(16, 1);
	LINE_NUMBER(665);
	frame[47].i = (48);
	LINE_NUMBER(666);
	goto label_145;
	}
label_145:;
	{
	LINE_NUMBER(669);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_char_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[6].o))->vtable)[VTABLE_java_lang_StringBuilder_append_char_R_java_lang_StringBuilder])(ctx, (frame[6].o), (jchar(((frame[47].i) + (jint(1))))));
	LINE_NUMBER(670);
	popStackFrame(ctx);
	return ((frame[16].i) + (jint(1)));
	}
label_140:;
	{
	LINE_NUMBER(672);
	INST_IINC(9, 1);
	if ((frame[9].i) < (frame[11].i)) goto label_150;
	}
	LINE_NUMBER(673);
	goto label_128;
label_150:;
	{
	LINE_NUMBER(674);
	frame[39].d = ((frame[39].d) * (jdouble(10.0)));
	LINE_NUMBER(675);
	frame[0].d = ((frame[0].d) * (jdouble(10.0)));
	goto label_134;
	}
label_131:;
	{
	LINE_NUMBER(679);
	jdouble temp0 = frame[39].d;
	clinit_rhino_DToA(ctx);
	sp[0].o = (jobject)SF_rhino_DToA_tens;
	frame[39].d = (temp0 * ((jdouble)ARRAY_ACCESS(jdouble, sp[0].o, ((frame[11].i) - (jint(1))))));
	LINE_NUMBER(680);
	frame[9].i = (jint(1));
	}
label_154:;
	{
	LINE_NUMBER(681);
	frame[23].l = (jlong((frame[0].d)));
	LINE_NUMBER(682);
	frame[0].d = ((frame[0].d) - (jdouble((frame[23].l))));
	LINE_NUMBER(683);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_char_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[6].o))->vtable)[VTABLE_java_lang_StringBuilder_append_char_R_java_lang_StringBuilder])(ctx, (frame[6].o), (jchar((jint(((jlong(48ll)) + (frame[23].l)))))));
	LINE_NUMBER(684);
	if ((frame[9].i) != (frame[11].i)) goto label_158;
	}
	{
	LINE_NUMBER(685);
	if ((doubleCompare((frame[0].d), ((jdouble(0.5)) + (frame[39].d)), -1)) <= 0) goto label_160;
	}
label_161:;
	{
	LINE_NUMBER(689);
	sp[0].o = frame[6].o;
	jint temp0 = (jint)((func_java_lang_StringBuilder_length_R_int) ((void **) nullCheck(ctx, (frame[6].o))->vtable)[VTABLE_java_lang_StringBuilder_length_R_int])(ctx, (frame[6].o));
	jint temp1 = (jint)((func_java_lang_StringBuilder_charAt_int_R_char) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_charAt_int_R_char])(ctx, sp[0].o, (temp0 - (jint(1))));
	frame[47].i = temp1;
	LINE_NUMBER(690);
	sp[0].o = frame[6].o;
	jint temp2 = (jint)((func_java_lang_StringBuilder_length_R_int) ((void **) nullCheck(ctx, (frame[6].o))->vtable)[VTABLE_java_lang_StringBuilder_length_R_int])(ctx, (frame[6].o));
	((func_java_lang_StringBuilder_setLength_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_setLength_int])(ctx, sp[0].o, (temp2 - (jint(1))));
	LINE_NUMBER(691);
	if ((frame[47].i) == (57)) goto label_164;
	}
	goto label_165;
label_164:;
	{
	LINE_NUMBER(692);
	jint temp0 = (jint)((func_java_lang_StringBuilder_length_R_int) ((void **) nullCheck(ctx, (frame[6].o))->vtable)[VTABLE_java_lang_StringBuilder_length_R_int])(ctx, (frame[6].o));
	if (temp0 != 0) goto label_161;
	}
	{
	LINE_NUMBER(693);
	INST_IINC(16, 1);
	LINE_NUMBER(694);
	frame[47].i = (48);
	LINE_NUMBER(695);
	goto label_165;
	}
label_165:;
	{
	LINE_NUMBER(698);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_char_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[6].o))->vtable)[VTABLE_java_lang_StringBuilder_append_char_R_java_lang_StringBuilder])(ctx, (frame[6].o), (jchar(((frame[47].i) + (jint(1))))));
	LINE_NUMBER(699);
	popStackFrame(ctx);
	return ((frame[16].i) + (jint(1)));
	}
label_160:;
	{
	LINE_NUMBER(700);
	if ((doubleCompare((frame[0].d), ((jdouble(0.5)) - (frame[39].d)), 1)) >= 0) goto label_128;
	}
	{
	LINE_NUMBER(701);
	SM_rhino_DToA_stripTrailingZeroes_java_lang_StringBuilder(ctx, (frame[6].o));
	LINE_NUMBER(704);
	popStackFrame(ctx);
	return ((frame[16].i) + (jint(1)));
	}
label_158:;
	{
	LINE_NUMBER(680);
	INST_IINC(9, 1);
	frame[0].d = ((frame[0].d) * (jdouble(10.0)));
	goto label_154;
	}
label_128:;
	{
	LINE_NUMBER(711);
	if ((frame[46].i) == 0) goto label_78;
	}
	{
	LINE_NUMBER(712);
	((func_java_lang_StringBuilder_setLength_int) ((void **) nullCheck(ctx, (frame[6].o))->vtable)[VTABLE_java_lang_StringBuilder_setLength_int])(ctx, (frame[6].o), (jint(0)));
	LINE_NUMBER(713);
	frame[0].d = (frame[35].d);
	LINE_NUMBER(714);
	frame[16].i = (frame[17].i);
	LINE_NUMBER(715);
	frame[11].i = (frame[12].i);
	}
label_78:;
	{
	LINE_NUMBER(721);
	if (((jint)ARRAY_ACCESS(jint, (frame[33].o), (jint(0)))) < 0) goto label_176;
	}
	{
	if ((frame[16].i) > (14)) goto label_176;
	}
	{
	LINE_NUMBER(723);
	clinit_rhino_DToA(ctx);
	sp[0].o = (jobject)SF_rhino_DToA_tens;
	frame[37].d = ((jdouble)ARRAY_ACCESS(jdouble, sp[0].o, (frame[16].i)));
	LINE_NUMBER(724);
	if ((frame[4].i) >= 0) goto label_179;
	}
	INST_ILOAD(11);
	if ((--sp)->i > 0) goto label_179;
	{
	LINE_NUMBER(725);
	frame[32].o = (jobject(nullptr));
	LINE_NUMBER(726);
	if ((frame[11].i) < 0) goto label_182;
	}
	{
	if ((doubleCompare((frame[0].d), ((jdouble(5.0)) * (frame[37].d)), 1)) < 0) goto label_182;
	}
	INST_ILOAD(3);
	if ((--sp)->i != 0) goto label_183;
	{
	if ((doubleCompare((frame[0].d), ((jdouble(5.0)) * (frame[37].d)), -1)) != 0) goto label_183;
	}
label_182:;
	{
	LINE_NUMBER(727);
	((func_java_lang_StringBuilder_setLength_int) ((void **) nullCheck(ctx, (frame[6].o))->vtable)[VTABLE_java_lang_StringBuilder_setLength_int])(ctx, (frame[6].o), (jint(0)));
	LINE_NUMBER(728);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_char_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[6].o))->vtable)[VTABLE_java_lang_StringBuilder_append_char_R_java_lang_StringBuilder])(ctx, (frame[6].o), (48));
	LINE_NUMBER(729);
	popStackFrame(ctx);
	return (jint(1));
	}
label_183:;
	{
	LINE_NUMBER(731);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_char_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[6].o))->vtable)[VTABLE_java_lang_StringBuilder_append_char_R_java_lang_StringBuilder])(ctx, (frame[6].o), (49));
	LINE_NUMBER(732);
	INST_IINC(16, 1);
	LINE_NUMBER(733);
	popStackFrame(ctx);
	return ((frame[16].i) + (jint(1)));
	}
label_179:;
	{
	LINE_NUMBER(735);
	frame[9].i = (jint(1));
	}
label_188:;
	{
	LINE_NUMBER(736);
	frame[23].l = (jlong(((frame[0].d) / (frame[37].d))));
	LINE_NUMBER(737);
	frame[0].d = ((frame[0].d) - ((jdouble((frame[23].l))) * (frame[37].d)));
	LINE_NUMBER(738);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_char_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[6].o))->vtable)[VTABLE_java_lang_StringBuilder_append_char_R_java_lang_StringBuilder])(ctx, (frame[6].o), (jchar((jint(((jlong(48ll)) + (frame[23].l)))))));
	LINE_NUMBER(739);
	if ((frame[9].i) != (frame[11].i)) goto label_192;
	}
	{
	LINE_NUMBER(740);
	frame[0].d = ((frame[0].d) + (frame[0].d));
	LINE_NUMBER(741);
	if ((doubleCompare((frame[0].d), (frame[37].d), -1)) > 0) goto label_195;
	}
	{
	if ((doubleCompare((frame[0].d), (frame[37].d), -1)) != 0) goto label_196;
	}
	{
	if ((longCompare(((frame[23].l) & (jlong(1))), (jlong(0)))) != 0) goto label_195;
	}
	INST_ILOAD(3);
	if ((--sp)->i == 0) goto label_196;
label_195:;
	{
	LINE_NUMBER(752);
	sp[0].o = frame[6].o;
	jint temp0 = (jint)((func_java_lang_StringBuilder_length_R_int) ((void **) nullCheck(ctx, (frame[6].o))->vtable)[VTABLE_java_lang_StringBuilder_length_R_int])(ctx, (frame[6].o));
	jint temp1 = (jint)((func_java_lang_StringBuilder_charAt_int_R_char) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_charAt_int_R_char])(ctx, sp[0].o, (temp0 - (jint(1))));
	frame[47].i = temp1;
	LINE_NUMBER(753);
	sp[0].o = frame[6].o;
	jint temp2 = (jint)((func_java_lang_StringBuilder_length_R_int) ((void **) nullCheck(ctx, (frame[6].o))->vtable)[VTABLE_java_lang_StringBuilder_length_R_int])(ctx, (frame[6].o));
	((func_java_lang_StringBuilder_setLength_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_setLength_int])(ctx, sp[0].o, (temp2 - (jint(1))));
	LINE_NUMBER(754);
	if ((frame[47].i) == (57)) goto label_199;
	}
	goto label_200;
label_199:;
	{
	LINE_NUMBER(755);
	jint temp0 = (jint)((func_java_lang_StringBuilder_length_R_int) ((void **) nullCheck(ctx, (frame[6].o))->vtable)[VTABLE_java_lang_StringBuilder_length_R_int])(ctx, (frame[6].o));
	if (temp0 != 0) goto label_195;
	}
	{
	LINE_NUMBER(756);
	INST_IINC(16, 1);
	LINE_NUMBER(757);
	frame[47].i = (48);
	LINE_NUMBER(758);
	goto label_200;
	}
label_200:;
	{
	LINE_NUMBER(761);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_char_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[6].o))->vtable)[VTABLE_java_lang_StringBuilder_append_char_R_java_lang_StringBuilder])(ctx, (frame[6].o), (jchar(((frame[47].i) + (jint(1))))));
	LINE_NUMBER(762);
	goto label_196;
	}
label_192:;
	{
	LINE_NUMBER(765);
	frame[0].d = ((frame[0].d) * (jdouble(10.0)));
	LINE_NUMBER(766);
	if ((doubleCompare((frame[0].d), (jdouble(0)), -1)) != 0) goto label_206;
	}
	LINE_NUMBER(767);
	goto label_196;
label_206:;
	{
	LINE_NUMBER(735);
	INST_IINC(9, 1);
	goto label_188;
	}
label_196:;
	{
	LINE_NUMBER(769);
	popStackFrame(ctx);
	return ((frame[16].i) + (jint(1)));
	}
label_176:;
	{
	LINE_NUMBER(772);
	frame[18].i = (frame[7].i);
	LINE_NUMBER(773);
	frame[19].i = (frame[8].i);
	LINE_NUMBER(774);
	frame[31].o = (jobject(nullptr));
	LINE_NUMBER(775);
	if ((frame[45].i) == 0) goto label_211;
	}
	{
	LINE_NUMBER(776);
	if ((frame[2].i) >= (jint(2))) goto label_213;
	}
	{
	LINE_NUMBER(777);
	if ((frame[42].i) == 0) goto label_215;
	}
	{
	jint temp0 = ((jint)ARRAY_ACCESS(jint, (frame[33].o), (jint(0)))) + (1075);
	sp[0].i = temp0;
	sp += 1;
	goto label_216;
	}
label_215:;
	{
	jint temp0 = (54) - ((jint)ARRAY_ACCESS(jint, (frame[34].o), (jint(0))));
	sp[0].i = temp0;
	sp += 1;
	}
label_216:;
	INST_ISTORE(9);
	goto label_217;
label_213:;
	{
	LINE_NUMBER(781);
	frame[14].i = ((frame[11].i) - (jint(1)));
	LINE_NUMBER(782);
	if ((frame[19].i) < (frame[14].i)) goto label_219;
	}
	{
	LINE_NUMBER(783);
	frame[19].i = ((frame[19].i) - (frame[14].i));
	goto label_221;
	}
label_219:;
	{
	LINE_NUMBER(785);
	jint temp0 = frame[21].i;
	jint temp1 = (frame[14].i) - (frame[19].i);
	frame[14].i = temp1;
	frame[21].i = (temp0 + temp1);
	LINE_NUMBER(786);
	frame[8].i = ((frame[8].i) + (frame[14].i));
	LINE_NUMBER(787);
	frame[19].i = (jint(0));
	}
label_221:;
	{
	LINE_NUMBER(789);
	jint temp0 = frame[11].i;
	frame[9].i = temp0;
	if (temp0 >= 0) goto label_217;
	}
	{
	LINE_NUMBER(790);
	frame[18].i = ((frame[18].i) - (frame[9].i));
	LINE_NUMBER(791);
	frame[9].i = (jint(0));
	}
label_217:;
	{
	LINE_NUMBER(795);
	frame[7].i = ((frame[7].i) + (frame[9].i));
	LINE_NUMBER(796);
	frame[20].i = ((frame[20].i) + (frame[9].i));
	LINE_NUMBER(797);
	sp[0].o = (jobject)SM_java_math_BigInteger_valueOf_long_R_java_math_BigInteger(ctx, (jlong(1)));
	frame[31].o = sp[0].o;
	}
label_211:;
	{
	LINE_NUMBER(803);
	if ((frame[18].i) <= 0) goto label_228;
	}
	INST_ILOAD(20);
	if ((--sp)->i <= 0) goto label_228;
	{
	LINE_NUMBER(804);
	jint temp0 = (jint)SM_java_lang_Math_min_int_int_R_int(ctx, (frame[18].i), (frame[20].i));
	frame[9].i = temp0;
	LINE_NUMBER(805);
	frame[7].i = ((frame[7].i) - (frame[9].i));
	LINE_NUMBER(806);
	frame[18].i = ((frame[18].i) - (frame[9].i));
	LINE_NUMBER(807);
	frame[20].i = ((frame[20].i) - (frame[9].i));
	}
label_228:;
	{
	LINE_NUMBER(811);
	if ((frame[8].i) <= 0) goto label_233;
	}
	{
	LINE_NUMBER(812);
	if ((frame[45].i) == 0) goto label_235;
	}
	{
	LINE_NUMBER(813);
	if ((frame[19].i) <= 0) goto label_237;
	}
	{
	LINE_NUMBER(814);
	sp[0].o = (jobject)SM_rhino_DToA_pow5mult_java_math_BigInteger_int_R_java_math_BigInteger(ctx, (frame[31].o), (frame[19].i));
	frame[31].o = sp[0].o;
	LINE_NUMBER(815);
	sp[0].o = (jobject)((func_java_math_BigInteger_multiply_java_math_BigInteger_R_java_math_BigInteger) ((void **) nullCheck(ctx, (frame[31].o))->vtable)[VTABLE_java_math_BigInteger_multiply_java_math_BigInteger_R_java_math_BigInteger])(ctx, (frame[31].o), (frame[27].o));
	frame[28].o = sp[0].o;
	LINE_NUMBER(816);
	frame[27].o = (frame[28].o);
	}
label_237:;
	{
	LINE_NUMBER(818);
	jint temp0 = (frame[8].i) - (frame[19].i);
	frame[14].i = temp0;
	if (temp0 == 0) goto label_233;
	}
	{
	LINE_NUMBER(819);
	sp[0].o = (jobject)SM_rhino_DToA_pow5mult_java_math_BigInteger_int_R_java_math_BigInteger(ctx, (frame[27].o), (frame[14].i));
	frame[27].o = sp[0].o;
	goto label_233;
	}
label_235:;
	{
	LINE_NUMBER(821);
	sp[0].o = (jobject)SM_rhino_DToA_pow5mult_java_math_BigInteger_int_R_java_math_BigInteger(ctx, (frame[27].o), (frame[8].i));
	frame[27].o = sp[0].o;
	}
label_233:;
	{
	LINE_NUMBER(826);
	sp[0].o = (jobject)SM_java_math_BigInteger_valueOf_long_R_java_math_BigInteger(ctx, (jlong(1)));
	frame[32].o = sp[0].o;
	LINE_NUMBER(827);
	if ((frame[21].i) <= 0) goto label_243;
	}
	{
	LINE_NUMBER(828);
	sp[0].o = (jobject)SM_rhino_DToA_pow5mult_java_math_BigInteger_int_R_java_math_BigInteger(ctx, (frame[32].o), (frame[21].i));
	frame[32].o = sp[0].o;
	}
label_243:;
	{
	LINE_NUMBER(833);
	frame[41].i = (jint(0));
	LINE_NUMBER(834);
	if ((frame[2].i) >= (jint(2))) goto label_246;
	}
	{
	LINE_NUMBER(835);
	jint temp0 = (jint)SM_rhino_DToA_word1_double_R_int(ctx, (frame[0].d));
	if (temp0 != 0) goto label_246;
	}
	{
	jint temp0 = (jint)SM_rhino_DToA_word0_double_R_int(ctx, (frame[0].d));
	if ((temp0 & (jint(1048575))) != 0) goto label_246;
	}
	{
	jdouble temp0 = frame[0].d;
	LINE_NUMBER(836);
	jint temp1 = (jint)SM_rhino_DToA_word0_double_R_int(ctx, temp0);
	if ((temp1 & (jint(2145386496))) == 0) goto label_246;
	}
	{
	LINE_NUMBER(840);
	INST_IINC(7, 1);
	LINE_NUMBER(841);
	INST_IINC(20, 1);
	LINE_NUMBER(842);
	frame[41].i = (jint(1));
	}
label_246:;
	{
	LINE_NUMBER(853);
	sp[0].o = (jobject)((func_java_math_BigInteger_toByteArray_R_Array1_byte) ((void **) nullCheck(ctx, (frame[32].o))->vtable)[VTABLE_java_math_BigInteger_toByteArray_R_Array1_byte])(ctx, (frame[32].o));
	frame[47].o = sp[0].o;
	LINE_NUMBER(854);
	frame[48].i = (jint(0));
	LINE_NUMBER(855);
	frame[49].i = (jint(0));
	}
label_254:;
	{
	if ((frame[49].i) >= (jint(4))) goto label_255;
	}
	{
	LINE_NUMBER(856);
	frame[48].i = ((frame[48].i) << (8));
	LINE_NUMBER(857);
	if ((frame[49].i) >= (((jarray) nullCheck(ctx, (frame[47].o)))->length)) goto label_258;
	}
	{
	LINE_NUMBER(858);
	frame[48].i = ((frame[48].i) | (((jint)ARRAY_ACCESS(jbyte, (frame[47].o), (frame[49].i))) & (255)));
	}
label_258:;
	{
	LINE_NUMBER(855);
	INST_IINC(49, 1);
	goto label_254;
	}
label_255:;
	{
	LINE_NUMBER(860);
	if ((frame[21].i) == 0) goto label_260;
	}
	{
	jint temp0 = 32;
	jint temp1 = (jint)SM_rhino_DToA_hi0bits_int_R_int(ctx, (frame[48].i));
	jint temp2 = temp0 - temp1;
	sp[0].i = temp2;
	sp += 1;
	goto label_261;
	}
label_260:;
	INST_ICONST(1);
label_261:;
	{
	sp -= 1;
	jint temp0 = (sp[0].i + (frame[20].i)) & (31);
	frame[9].i = temp0;
	if (temp0 == 0) goto label_262;
	}
	{
	LINE_NUMBER(861);
	frame[9].i = ((32) - (frame[9].i));
	}
label_262:;
	{
	LINE_NUMBER(863);
	if ((frame[9].i) <= (jint(4))) goto label_264;
	}
	{
	LINE_NUMBER(864);
	INST_IINC(9, -4);
	LINE_NUMBER(865);
	frame[7].i = ((frame[7].i) + (frame[9].i));
	LINE_NUMBER(866);
	frame[18].i = ((frame[18].i) + (frame[9].i));
	LINE_NUMBER(867);
	frame[20].i = ((frame[20].i) + (frame[9].i));
	goto label_269;
	}
label_264:;
	{
	LINE_NUMBER(868);
	if ((frame[9].i) >= (jint(4))) goto label_269;
	}
	{
	LINE_NUMBER(869);
	INST_IINC(9, 28);
	LINE_NUMBER(870);
	frame[7].i = ((frame[7].i) + (frame[9].i));
	LINE_NUMBER(871);
	frame[18].i = ((frame[18].i) + (frame[9].i));
	LINE_NUMBER(872);
	frame[20].i = ((frame[20].i) + (frame[9].i));
	}
label_269:;
	{
	LINE_NUMBER(875);
	if ((frame[7].i) <= 0) goto label_274;
	}
	{
	LINE_NUMBER(876);
	sp[0].o = (jobject)((func_java_math_BigInteger_shiftLeft_int_R_java_math_BigInteger) ((void **) nullCheck(ctx, (frame[27].o))->vtable)[VTABLE_java_math_BigInteger_shiftLeft_int_R_java_math_BigInteger])(ctx, (frame[27].o), (frame[7].i));
	frame[27].o = sp[0].o;
	}
label_274:;
	{
	LINE_NUMBER(877);
	if ((frame[20].i) <= 0) goto label_276;
	}
	{
	LINE_NUMBER(878);
	sp[0].o = (jobject)((func_java_math_BigInteger_shiftLeft_int_R_java_math_BigInteger) ((void **) nullCheck(ctx, (frame[32].o))->vtable)[VTABLE_java_math_BigInteger_shiftLeft_int_R_java_math_BigInteger])(ctx, (frame[32].o), (frame[20].i));
	frame[32].o = sp[0].o;
	}
label_276:;
	{
	LINE_NUMBER(881);
	if ((frame[43].i) == 0) goto label_278;
	}
	{
	LINE_NUMBER(882);
	jint temp0 = (jint)((func_java_math_BigInteger_compareTo_java_math_BigInteger_R_int) ((void **) nullCheck(ctx, (frame[27].o))->vtable)[VTABLE_java_math_BigInteger_compareTo_java_math_BigInteger_R_int])(ctx, (frame[27].o), (frame[32].o));
	if (temp0 >= 0) goto label_278;
	}
	{
	LINE_NUMBER(883);
	INST_IINC(16, -1);
	LINE_NUMBER(884);
	sp[0].o = frame[27].o;
	sp[1].o = (jobject)SM_java_math_BigInteger_valueOf_long_R_java_math_BigInteger(ctx, (jlong(10ll)));
	sp[0].o = (jobject)((func_java_math_BigInteger_multiply_java_math_BigInteger_R_java_math_BigInteger) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_math_BigInteger_multiply_java_math_BigInteger_R_java_math_BigInteger])(ctx, sp[0].o, sp[1].o);
	frame[27].o = sp[0].o;
	LINE_NUMBER(885);
	if ((frame[45].i) == 0) goto label_283;
	}
	{
	LINE_NUMBER(886);
	sp[0].o = frame[31].o;
	sp[1].o = (jobject)SM_java_math_BigInteger_valueOf_long_R_java_math_BigInteger(ctx, (jlong(10ll)));
	sp[0].o = (jobject)((func_java_math_BigInteger_multiply_java_math_BigInteger_R_java_math_BigInteger) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_math_BigInteger_multiply_java_math_BigInteger_R_java_math_BigInteger])(ctx, sp[0].o, sp[1].o);
	frame[31].o = sp[0].o;
	}
label_283:;
	{
	LINE_NUMBER(887);
	frame[11].i = (frame[13].i);
	}
label_278:;
	{
	LINE_NUMBER(892);
	if ((frame[11].i) > 0) goto label_285;
	}
	{
	if ((frame[2].i) <= (jint(2))) goto label_285;
	}
	{
	LINE_NUMBER(895);
	if ((frame[11].i) < 0) goto label_287;
	}
	{
	sp[0].o = frame[27].o;
	sp[1].o = frame[32].o;
	jlong temp0 = jlong(5ll);
	LINE_NUMBER(896);
	sp[2].o = (jobject)SM_java_math_BigInteger_valueOf_long_R_java_math_BigInteger(ctx, temp0);
	sp[1].o = (jobject)((func_java_math_BigInteger_multiply_java_math_BigInteger_R_java_math_BigInteger) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_math_BigInteger_multiply_java_math_BigInteger_R_java_math_BigInteger])(ctx, sp[1].o, sp[2].o);
	frame[32].o = sp[1].o;
	jint temp1 = (jint)((func_java_math_BigInteger_compareTo_java_math_BigInteger_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_math_BigInteger_compareTo_java_math_BigInteger_R_int])(ctx, sp[0].o, sp[1].o);
	frame[9].i = temp1;
	if (temp1 < 0) goto label_287;
	}
	INST_ILOAD(9);
	if ((--sp)->i != 0) goto label_289;
	INST_ILOAD(3);
	if ((--sp)->i != 0) goto label_289;
label_287:;
	{
	LINE_NUMBER(903);
	((func_java_lang_StringBuilder_setLength_int) ((void **) nullCheck(ctx, (frame[6].o))->vtable)[VTABLE_java_lang_StringBuilder_setLength_int])(ctx, (frame[6].o), (jint(0)));
	LINE_NUMBER(904);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_char_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[6].o))->vtable)[VTABLE_java_lang_StringBuilder_append_char_R_java_lang_StringBuilder])(ctx, (frame[6].o), (48));
	LINE_NUMBER(905);
	popStackFrame(ctx);
	return (jint(1));
	}
label_289:;
	{
	LINE_NUMBER(909);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_char_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[6].o))->vtable)[VTABLE_java_lang_StringBuilder_append_char_R_java_lang_StringBuilder])(ctx, (frame[6].o), (49));
	LINE_NUMBER(910);
	INST_IINC(16, 1);
	LINE_NUMBER(911);
	popStackFrame(ctx);
	return ((frame[16].i) + (jint(1)));
	}
label_285:;
	{
	LINE_NUMBER(913);
	if ((frame[45].i) == 0) goto label_294;
	}
	{
	LINE_NUMBER(914);
	if ((frame[18].i) <= 0) goto label_296;
	}
	{
	LINE_NUMBER(915);
	sp[0].o = (jobject)((func_java_math_BigInteger_shiftLeft_int_R_java_math_BigInteger) ((void **) nullCheck(ctx, (frame[31].o))->vtable)[VTABLE_java_math_BigInteger_shiftLeft_int_R_java_math_BigInteger])(ctx, (frame[31].o), (frame[18].i));
	frame[31].o = sp[0].o;
	}
label_296:;
	{
	LINE_NUMBER(921);
	frame[30].o = (frame[31].o);
	LINE_NUMBER(922);
	if ((frame[41].i) == 0) goto label_299;
	}
	{
	LINE_NUMBER(923);
	frame[31].o = (frame[30].o);
	LINE_NUMBER(924);
	sp[0].o = (jobject)((func_java_math_BigInteger_shiftLeft_int_R_java_math_BigInteger) ((void **) nullCheck(ctx, (frame[31].o))->vtable)[VTABLE_java_math_BigInteger_shiftLeft_int_R_java_math_BigInteger])(ctx, (frame[31].o), (jint(1)));
	frame[31].o = sp[0].o;
	}
label_299:;
	{
	LINE_NUMBER(929);
	frame[9].i = (jint(1));
	}
label_302:;
	{
	LINE_NUMBER(930);
	sp[0].o = (jobject)((func_java_math_BigInteger_divideAndRemainder_java_math_BigInteger_R_Array1_java_math_BigInteger) ((void **) nullCheck(ctx, (frame[27].o))->vtable)[VTABLE_java_math_BigInteger_divideAndRemainder_java_math_BigInteger_R_Array1_java_math_BigInteger])(ctx, (frame[27].o), (frame[32].o));
	frame[49].o = sp[0].o;
	LINE_NUMBER(931);
	frame[27].o = ((jobject)ARRAY_ACCESS(jobject, (frame[49].o), (jint(1))));
	LINE_NUMBER(932);
	jint temp0 = (jint)((func_java_math_BigInteger_intValue_R_int) ((void **) nullCheck(ctx, ((jobject)ARRAY_ACCESS(jobject, (frame[49].o), (jint(0)))))->vtable)[VTABLE_java_math_BigInteger_intValue_R_int])(ctx, ((jobject)ARRAY_ACCESS(jobject, (frame[49].o), (jint(0)))));
	frame[22].i = (jchar((temp0 + (48))));
	LINE_NUMBER(936);
	jint temp1 = (jint)((func_java_math_BigInteger_compareTo_java_math_BigInteger_R_int) ((void **) nullCheck(ctx, (frame[27].o))->vtable)[VTABLE_java_math_BigInteger_compareTo_java_math_BigInteger_R_int])(ctx, (frame[27].o), (frame[30].o));
	frame[14].i = temp1;
	LINE_NUMBER(938);
	sp[0].o = (jobject)((func_java_math_BigInteger_subtract_java_math_BigInteger_R_java_math_BigInteger) ((void **) nullCheck(ctx, (frame[32].o))->vtable)[VTABLE_java_math_BigInteger_subtract_java_math_BigInteger_R_java_math_BigInteger])(ctx, (frame[32].o), (frame[31].o));
	frame[29].o = sp[0].o;
	LINE_NUMBER(939);
	jint temp2 = (jint)((func_java_math_BigInteger_signum_R_int) ((void **) nullCheck(ctx, (frame[29].o))->vtable)[VTABLE_java_math_BigInteger_signum_R_int])(ctx, (frame[29].o));
	if (temp2 > 0) goto label_308;
	}
	INST_ICONST(1);
	goto label_309;
label_308:;
	{
	jint temp0 = (jint)((func_java_math_BigInteger_compareTo_java_math_BigInteger_R_int) ((void **) nullCheck(ctx, (frame[27].o))->vtable)[VTABLE_java_math_BigInteger_compareTo_java_math_BigInteger_R_int])(ctx, (frame[27].o), (frame[29].o));
	sp[0].i = temp0;
	sp += 1;
	}
label_309:;
	{
	sp -= 1;
	frame[15].i = sp[0].i;
	LINE_NUMBER(941);
	if ((frame[15].i) != 0) goto label_311;
	}
	INST_ILOAD(2);
	if ((--sp)->i != 0) goto label_311;
	{
	jint temp0 = (jint)SM_rhino_DToA_word1_double_R_int(ctx, (frame[0].d));
	if ((temp0 & (jint(1))) != 0) goto label_311;
	}
	{
	LINE_NUMBER(942);
	if ((frame[22].i) != (57)) goto label_313;
	}
	{
	LINE_NUMBER(943);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_char_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[6].o))->vtable)[VTABLE_java_lang_StringBuilder_append_char_R_java_lang_StringBuilder])(ctx, (frame[6].o), (57));
	LINE_NUMBER(944);
	jint temp0 = (jint)SM_rhino_DToA_roundOff_java_lang_StringBuilder_R_boolean(ctx, (frame[6].o));
	if (temp0 == 0) goto label_316;
	}
	{
	LINE_NUMBER(945);
	INST_IINC(16, 1);
	LINE_NUMBER(946);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_char_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[6].o))->vtable)[VTABLE_java_lang_StringBuilder_append_char_R_java_lang_StringBuilder])(ctx, (frame[6].o), (49));
	}
label_316:;
	{
	LINE_NUMBER(948);
	popStackFrame(ctx);
	return ((frame[16].i) + (jint(1)));
	}
label_313:;
	{
	LINE_NUMBER(951);
	if ((frame[14].i) <= 0) goto label_319;
	}
	{
	LINE_NUMBER(952);
	frame[22].i = (jchar(((frame[22].i) + (jint(1)))));
	}
label_319:;
	{
	LINE_NUMBER(953);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_char_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[6].o))->vtable)[VTABLE_java_lang_StringBuilder_append_char_R_java_lang_StringBuilder])(ctx, (frame[6].o), (frame[22].i));
	LINE_NUMBER(954);
	popStackFrame(ctx);
	return ((frame[16].i) + (jint(1)));
	}
label_311:;
	{
	LINE_NUMBER(956);
	if ((frame[14].i) < 0) goto label_322;
	}
	INST_ILOAD(14);
	if ((--sp)->i != 0) goto label_323;
	INST_ILOAD(2);
	if ((--sp)->i != 0) goto label_323;
	{
	jdouble temp0 = frame[0].d;
	LINE_NUMBER(959);
	jint temp1 = (jint)SM_rhino_DToA_word1_double_R_int(ctx, temp0);
	if ((temp1 & (jint(1))) != 0) goto label_323;
	}
label_322:;
	{
	LINE_NUMBER(961);
	if ((frame[15].i) <= 0) goto label_325;
	}
	{
	LINE_NUMBER(964);
	sp[0].o = (jobject)((func_java_math_BigInteger_shiftLeft_int_R_java_math_BigInteger) ((void **) nullCheck(ctx, (frame[27].o))->vtable)[VTABLE_java_math_BigInteger_shiftLeft_int_R_java_math_BigInteger])(ctx, (frame[27].o), (jint(1)));
	frame[27].o = sp[0].o;
	LINE_NUMBER(965);
	jint temp0 = (jint)((func_java_math_BigInteger_compareTo_java_math_BigInteger_R_int) ((void **) nullCheck(ctx, (frame[27].o))->vtable)[VTABLE_java_math_BigInteger_compareTo_java_math_BigInteger_R_int])(ctx, (frame[27].o), (frame[32].o));
	frame[15].i = temp0;
	LINE_NUMBER(966);
	if ((frame[15].i) > 0) goto label_329;
	}
	INST_ILOAD(15);
	if ((--sp)->i != 0) goto label_325;
	{
	if (((frame[22].i) & (jint(1))) == (jint(1))) goto label_329;
	}
	INST_ILOAD(3);
	if ((--sp)->i == 0) goto label_325;
label_329:;
	{
	jint temp0 = frame[22].i;
	frame[22].i = (jchar(((frame[22].i) + (jint(1)))));
	if (temp0 != (57)) goto label_325;
	}
	{
	LINE_NUMBER(968);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_char_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[6].o))->vtable)[VTABLE_java_lang_StringBuilder_append_char_R_java_lang_StringBuilder])(ctx, (frame[6].o), (57));
	LINE_NUMBER(969);
	jint temp0 = (jint)SM_rhino_DToA_roundOff_java_lang_StringBuilder_R_boolean(ctx, (frame[6].o));
	if (temp0 == 0) goto label_332;
	}
	{
	LINE_NUMBER(970);
	INST_IINC(16, 1);
	LINE_NUMBER(971);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_char_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[6].o))->vtable)[VTABLE_java_lang_StringBuilder_append_char_R_java_lang_StringBuilder])(ctx, (frame[6].o), (49));
	}
label_332:;
	{
	LINE_NUMBER(973);
	popStackFrame(ctx);
	return ((frame[16].i) + (jint(1)));
	}
label_325:;
	{
	LINE_NUMBER(977);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_char_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[6].o))->vtable)[VTABLE_java_lang_StringBuilder_append_char_R_java_lang_StringBuilder])(ctx, (frame[6].o), (frame[22].i));
	LINE_NUMBER(978);
	popStackFrame(ctx);
	return ((frame[16].i) + (jint(1)));
	}
label_323:;
	{
	LINE_NUMBER(980);
	if ((frame[15].i) <= 0) goto label_336;
	}
	{
	LINE_NUMBER(981);
	if ((frame[22].i) != (57)) goto label_338;
	}
	{
	LINE_NUMBER(985);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_char_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[6].o))->vtable)[VTABLE_java_lang_StringBuilder_append_char_R_java_lang_StringBuilder])(ctx, (frame[6].o), (57));
	LINE_NUMBER(986);
	jint temp0 = (jint)SM_rhino_DToA_roundOff_java_lang_StringBuilder_R_boolean(ctx, (frame[6].o));
	if (temp0 == 0) goto label_341;
	}
	{
	LINE_NUMBER(987);
	INST_IINC(16, 1);
	LINE_NUMBER(988);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_char_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[6].o))->vtable)[VTABLE_java_lang_StringBuilder_append_char_R_java_lang_StringBuilder])(ctx, (frame[6].o), (49));
	}
label_341:;
	{
	LINE_NUMBER(990);
	popStackFrame(ctx);
	return ((frame[16].i) + (jint(1)));
	}
label_338:;
	{
	LINE_NUMBER(992);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_char_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[6].o))->vtable)[VTABLE_java_lang_StringBuilder_append_char_R_java_lang_StringBuilder])(ctx, (frame[6].o), (jchar(((frame[22].i) + (jint(1))))));
	LINE_NUMBER(993);
	popStackFrame(ctx);
	return ((frame[16].i) + (jint(1)));
	}
label_336:;
	{
	LINE_NUMBER(995);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_char_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[6].o))->vtable)[VTABLE_java_lang_StringBuilder_append_char_R_java_lang_StringBuilder])(ctx, (frame[6].o), (frame[22].i));
	LINE_NUMBER(996);
	if ((frame[9].i) != (frame[11].i)) goto label_346;
	}
	LINE_NUMBER(997);
	goto label_348;
label_346:;
	{
	LINE_NUMBER(998);
	sp[0].o = frame[27].o;
	sp[1].o = (jobject)SM_java_math_BigInteger_valueOf_long_R_java_math_BigInteger(ctx, (jlong(10ll)));
	sp[0].o = (jobject)((func_java_math_BigInteger_multiply_java_math_BigInteger_R_java_math_BigInteger) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_math_BigInteger_multiply_java_math_BigInteger_R_java_math_BigInteger])(ctx, sp[0].o, sp[1].o);
	frame[27].o = sp[0].o;
	LINE_NUMBER(999);
	if ((frame[30].o) != (frame[31].o)) goto label_350;
	}
	{
	LINE_NUMBER(1000);
	sp[0].o = frame[31].o;
	sp[1].o = (jobject)SM_java_math_BigInteger_valueOf_long_R_java_math_BigInteger(ctx, (jlong(10ll)));
	sp[0].o = (jobject)((func_java_math_BigInteger_multiply_java_math_BigInteger_R_java_math_BigInteger) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_math_BigInteger_multiply_java_math_BigInteger_R_java_math_BigInteger])(ctx, sp[0].o, sp[1].o);
	frame[31].o = sp[0].o;
	frame[30].o = sp[0].o;
	goto label_352;
	}
label_350:;
	{
	LINE_NUMBER(1002);
	sp[0].o = frame[30].o;
	sp[1].o = (jobject)SM_java_math_BigInteger_valueOf_long_R_java_math_BigInteger(ctx, (jlong(10ll)));
	sp[0].o = (jobject)((func_java_math_BigInteger_multiply_java_math_BigInteger_R_java_math_BigInteger) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_math_BigInteger_multiply_java_math_BigInteger_R_java_math_BigInteger])(ctx, sp[0].o, sp[1].o);
	frame[30].o = sp[0].o;
	LINE_NUMBER(1003);
	sp[0].o = frame[31].o;
	sp[1].o = (jobject)SM_java_math_BigInteger_valueOf_long_R_java_math_BigInteger(ctx, (jlong(10ll)));
	sp[0].o = (jobject)((func_java_math_BigInteger_multiply_java_math_BigInteger_R_java_math_BigInteger) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_math_BigInteger_multiply_java_math_BigInteger_R_java_math_BigInteger])(ctx, sp[0].o, sp[1].o);
	frame[31].o = sp[0].o;
	}
label_352:;
	{
	LINE_NUMBER(929);
	INST_IINC(9, 1);
	goto label_302;
	}
label_294:;
	{
	LINE_NUMBER(1007);
	frame[9].i = (jint(1));
	}
label_354:;
	{
	LINE_NUMBER(1009);
	sp[0].o = (jobject)((func_java_math_BigInteger_divideAndRemainder_java_math_BigInteger_R_Array1_java_math_BigInteger) ((void **) nullCheck(ctx, (frame[27].o))->vtable)[VTABLE_java_math_BigInteger_divideAndRemainder_java_math_BigInteger_R_Array1_java_math_BigInteger])(ctx, (frame[27].o), (frame[32].o));
	frame[49].o = sp[0].o;
	LINE_NUMBER(1010);
	frame[27].o = ((jobject)ARRAY_ACCESS(jobject, (frame[49].o), (jint(1))));
	LINE_NUMBER(1011);
	jint temp0 = (jint)((func_java_math_BigInteger_intValue_R_int) ((void **) nullCheck(ctx, ((jobject)ARRAY_ACCESS(jobject, (frame[49].o), (jint(0)))))->vtable)[VTABLE_java_math_BigInteger_intValue_R_int])(ctx, ((jobject)ARRAY_ACCESS(jobject, (frame[49].o), (jint(0)))));
	frame[22].i = (jchar((temp0 + (48))));
	LINE_NUMBER(1012);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_char_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[6].o))->vtable)[VTABLE_java_lang_StringBuilder_append_char_R_java_lang_StringBuilder])(ctx, (frame[6].o), (frame[22].i));
	LINE_NUMBER(1013);
	if ((frame[9].i) < (frame[11].i)) goto label_359;
	}
	LINE_NUMBER(1014);
	goto label_348;
label_359:;
	{
	LINE_NUMBER(1015);
	sp[0].o = frame[27].o;
	sp[1].o = (jobject)SM_java_math_BigInteger_valueOf_long_R_java_math_BigInteger(ctx, (jlong(10ll)));
	sp[0].o = (jobject)((func_java_math_BigInteger_multiply_java_math_BigInteger_R_java_math_BigInteger) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_math_BigInteger_multiply_java_math_BigInteger_R_java_math_BigInteger])(ctx, sp[0].o, sp[1].o);
	frame[27].o = sp[0].o;
	LINE_NUMBER(1007);
	INST_IINC(9, 1);
	goto label_354;
	}
label_348:;
	{
	LINE_NUMBER(1020);
	sp[0].o = (jobject)((func_java_math_BigInteger_shiftLeft_int_R_java_math_BigInteger) ((void **) nullCheck(ctx, (frame[27].o))->vtable)[VTABLE_java_math_BigInteger_shiftLeft_int_R_java_math_BigInteger])(ctx, (frame[27].o), (jint(1)));
	frame[27].o = sp[0].o;
	LINE_NUMBER(1021);
	jint temp0 = (jint)((func_java_math_BigInteger_compareTo_java_math_BigInteger_R_int) ((void **) nullCheck(ctx, (frame[27].o))->vtable)[VTABLE_java_math_BigInteger_compareTo_java_math_BigInteger_R_int])(ctx, (frame[27].o), (frame[32].o));
	frame[14].i = temp0;
	LINE_NUMBER(1022);
	if ((frame[14].i) > 0) goto label_364;
	}
	INST_ILOAD(14);
	if ((--sp)->i != 0) goto label_365;
	{
	if (((frame[22].i) & (jint(1))) == (jint(1))) goto label_364;
	}
	INST_ILOAD(3);
	if ((--sp)->i == 0) goto label_365;
label_364:;
	{
	LINE_NUMBER(1031);
	jint temp0 = (jint)SM_rhino_DToA_roundOff_java_lang_StringBuilder_R_boolean(ctx, (frame[6].o));
	if (temp0 == 0) goto label_366;
	}
	{
	LINE_NUMBER(1032);
	INST_IINC(16, 1);
	LINE_NUMBER(1033);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_char_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[6].o))->vtable)[VTABLE_java_lang_StringBuilder_append_char_R_java_lang_StringBuilder])(ctx, (frame[6].o), (49));
	LINE_NUMBER(1034);
	popStackFrame(ctx);
	return ((frame[16].i) + (jint(1)));
	}
label_365:;
	{
	LINE_NUMBER(1037);
	SM_rhino_DToA_stripTrailingZeroes_java_lang_StringBuilder(ctx, (frame[6].o));
	}
label_366:;
	{
	LINE_NUMBER(1051);
	popStackFrame(ctx);
	return ((frame[16].i) + (jint(1)));
	}

	popStackFrame(ctx);
}

void SM_rhino_DToA_stripTrailingZeroes_java_lang_StringBuilder(jcontext ctx, jobject param0) {
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/DToA:stripTrailingZeroes", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_rhino_DToA(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(1058);
	jint temp0 = (jint)((func_java_lang_StringBuilder_length_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_lang_StringBuilder_length_R_int])(ctx, (frame[0].o));
	frame[1].i = temp0;
	}
label_1:;
	{
	LINE_NUMBER(1059);
	jint temp0 = frame[1].i;
	INST_IINC(1, -1);
	if (temp0 <= 0) goto label_2;
	}
	{
	jint temp0 = (jint)((func_java_lang_StringBuilder_charAt_int_R_char) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_lang_StringBuilder_charAt_int_R_char])(ctx, (frame[0].o), (frame[1].i));
	if (temp0 != (48)) goto label_2;
	}
	goto label_1;
label_2:;
	{
	LINE_NUMBER(1062);
	((func_java_lang_StringBuilder_setLength_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_lang_StringBuilder_setLength_int])(ctx, (frame[0].o), ((frame[1].i) + (jint(1))));
	LINE_NUMBER(1063);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_rhino_DToA_JS_dtostr_java_lang_StringBuilder_int_int_double(jcontext ctx, jobject param0, jint param1, jint param2, jdouble param3) {
	jtype frame[19];
	auto stack = &frame[12];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/DToA:JS_dtostr", 19 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_rhino_DToA(ctx);
	frame[0].o = param0;
	frame[1].i = param1;
	frame[2].i = param2;
	frame[3].d = param3;
	{
	LINE_NUMBER(1076);
	sp[0].o = (jobject) createArray(ctx, &class_boolean, (jint(1)));
	frame[6].o = sp[0].o;
	LINE_NUMBER(1082);
	if ((frame[1].i) != (jint(2))) goto label_2;
	}
	{
	if ((doubleCompare((frame[3].d), (jdouble(1,000000e+21)), -1)) >= 0) goto label_3;
	}
	{
	if ((doubleCompare((frame[3].d), (jdouble(-1,000000e+21)), 1)) > 0) goto label_2;
	}
label_3:;
	{
	LINE_NUMBER(1083);
	frame[1].i = (jint(0));
	}
label_2:;
	{
	LINE_NUMBER(1085);
	jdouble temp0 = frame[3].d;
	clinit_rhino_DToA(ctx);
	sp[0].o = (jobject)SF_rhino_DToA_dtoaModes;
	jint temp1 = (jint)ARRAY_ACCESS(jint, sp[0].o, (frame[1].i));
	sp[0].d = temp0;
	sp[1].i = temp1;
	sp += 2;
	if ((frame[1].i) < (jint(2))) goto label_4;
	}
	INST_ICONST(1);
	goto label_5;
label_4:;
	INST_ICONST(0);
label_5:;
	{
	sp -= 3;
	jint temp0 = (jint)SM_rhino_DToA_JS_dtoa_double_int_boolean_int_Array1_boolean_java_lang_StringBuilder_R_int(ctx, sp[0].d, sp[1].i, sp[2].i, (frame[2].i), (frame[6].o), (frame[0].o));
	frame[5].i = temp0;
	LINE_NUMBER(1086);
	jint temp1 = (jint)((func_java_lang_StringBuilder_length_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_lang_StringBuilder_length_R_int])(ctx, (frame[0].o));
	frame[7].i = temp1;
	LINE_NUMBER(1089);
	if ((frame[5].i) == (9999)) goto label_8;
	}
	{
	LINE_NUMBER(1090);
	frame[8].i = (jint(0));
	LINE_NUMBER(1091);
	frame[9].i = (jint(0));
	LINE_NUMBER(1094);
	switch((frame[1].i)) {
		case 0: goto label_12;
		case 1: goto label_13;
		case 2: goto label_14;
		case 3: goto label_15;
		case 4: goto label_16;
		default: goto label_17;
	}
	}
label_12:;
	{
	LINE_NUMBER(1096);
	if ((frame[5].i) < (-5)) goto label_18;
	}
	{
	if ((frame[5].i) <= (21)) goto label_19;
	}
label_18:;
	{
	LINE_NUMBER(1097);
	frame[8].i = (jint(1));
	goto label_17;
	}
label_19:;
	{
	LINE_NUMBER(1099);
	frame[9].i = (frame[5].i);
	LINE_NUMBER(1100);
	goto label_17;
	}
label_14:;
	{
	LINE_NUMBER(1103);
	if ((frame[2].i) < 0) goto label_21;
	}
	{
	LINE_NUMBER(1104);
	frame[9].i = ((frame[5].i) + (frame[2].i));
	goto label_17;
	}
label_21:;
	{
	LINE_NUMBER(1106);
	frame[9].i = (frame[5].i);
	LINE_NUMBER(1107);
	goto label_17;
	}
label_15:;
	{
	LINE_NUMBER(1111);
	frame[9].i = (frame[2].i);
	}
label_13:;
	{
	LINE_NUMBER(1114);
	frame[8].i = (jint(1));
	LINE_NUMBER(1115);
	goto label_17;
	}
label_16:;
	{
	LINE_NUMBER(1119);
	frame[9].i = (frame[2].i);
	LINE_NUMBER(1120);
	if ((frame[5].i) < (-5)) goto label_26;
	}
	{
	if ((frame[5].i) <= (frame[2].i)) goto label_17;
	}
label_26:;
	{
	LINE_NUMBER(1121);
	frame[8].i = (jint(1));
	}
label_17:;
	{
	LINE_NUMBER(1126);
	if ((frame[7].i) >= (frame[9].i)) goto label_27;
	}
	{
	LINE_NUMBER(1127);
	frame[10].i = (frame[9].i);
	LINE_NUMBER(1128);
	frame[7].i = (frame[9].i);
	}
label_30:;
	{
	LINE_NUMBER(1130);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_char_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_lang_StringBuilder_append_char_R_java_lang_StringBuilder])(ctx, (frame[0].o), (48));
	LINE_NUMBER(1131);
	jint temp0 = (jint)((func_java_lang_StringBuilder_length_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_lang_StringBuilder_length_R_int])(ctx, (frame[0].o));
	if (temp0 != (frame[10].i)) goto label_30;
	}
label_27:;
	{
	LINE_NUMBER(1134);
	if ((frame[8].i) == 0) goto label_32;
	}
	{
	LINE_NUMBER(1136);
	if ((frame[7].i) == (jint(1))) goto label_34;
	}
	{
	LINE_NUMBER(1137);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_insert_int_char_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_lang_StringBuilder_insert_int_char_R_java_lang_StringBuilder])(ctx, (frame[0].o), (jint(1)), (46));
	}
label_34:;
	{
	LINE_NUMBER(1139);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_char_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_lang_StringBuilder_append_char_R_java_lang_StringBuilder])(ctx, (frame[0].o), (101));
	LINE_NUMBER(1140);
	if (((frame[5].i) - (jint(1))) < 0) goto label_37;
	}
	{
	LINE_NUMBER(1141);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_char_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_lang_StringBuilder_append_char_R_java_lang_StringBuilder])(ctx, (frame[0].o), (43));
	}
label_37:;
	{
	LINE_NUMBER(1142);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder])(ctx, (frame[0].o), ((frame[5].i) - (jint(1))));
	goto label_8;
	}
label_32:;
	{
	LINE_NUMBER(1144);
	if ((frame[5].i) == (frame[7].i)) goto label_8;
	}
	{
	LINE_NUMBER(1147);
	if ((frame[5].i) <= 0) goto label_40;
	}
	{
	LINE_NUMBER(1149);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_insert_int_char_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_lang_StringBuilder_insert_int_char_R_java_lang_StringBuilder])(ctx, (frame[0].o), (frame[5].i), (46));
	goto label_8;
	}
label_40:;
	{
	LINE_NUMBER(1152);
	frame[11].i = (jint(0));
	}
label_42:;
	{
	if ((frame[11].i) >= ((jint(1)) - (frame[5].i))) goto label_43;
	}
	{
	LINE_NUMBER(1153);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_insert_int_char_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_lang_StringBuilder_insert_int_char_R_java_lang_StringBuilder])(ctx, (frame[0].o), (jint(0)), (48));
	LINE_NUMBER(1152);
	INST_IINC(11, 1);
	goto label_42;
	}
label_43:;
	{
	LINE_NUMBER(1154);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_insert_int_char_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_lang_StringBuilder_insert_int_char_R_java_lang_StringBuilder])(ctx, (frame[0].o), (jint(1)), (46));
	}
label_8:;
	{
	LINE_NUMBER(1160);
	if (((jint)ARRAY_ACCESS(jbyte, (frame[6].o), (jint(0)))) == 0) goto label_46;
	}
	{
	jdouble temp0 = frame[3].d;
	LINE_NUMBER(1161);
	jint temp1 = (jint)SM_rhino_DToA_word0_double_R_int(ctx, temp0);
	if (temp1 != (bit_cast<jint>(0x80000000))) goto label_48;
	}
	{
	jint temp0 = (jint)SM_rhino_DToA_word1_double_R_int(ctx, (frame[3].d));
	if (temp0 == 0) goto label_46;
	}
label_48:;
	{
	jdouble temp0 = frame[3].d;
	LINE_NUMBER(1162);
	jint temp1 = (jint)SM_rhino_DToA_word0_double_R_int(ctx, temp0);
	if ((temp1 & (jint(2146435072))) != (jint(2146435072))) goto label_50;
	}
	{
	jdouble temp0 = frame[3].d;
	LINE_NUMBER(1163);
	jint temp1 = (jint)SM_rhino_DToA_word1_double_R_int(ctx, temp0);
	if (temp1 != 0) goto label_46;
	}
	{
	jint temp0 = (jint)SM_rhino_DToA_word0_double_R_int(ctx, (frame[3].d));
	if ((temp0 & (jint(1048575))) != 0) goto label_46;
	}
label_50:;
	{
	LINE_NUMBER(1164);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_insert_int_char_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_lang_StringBuilder_insert_int_char_R_java_lang_StringBuilder])(ctx, (frame[0].o), (jint(0)), (45));
	}
label_46:;
	LINE_NUMBER(1166);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void clinit_rhino_DToA(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	SF_rhino_DToA_DTOSTR_STANDARD = jint(0);
	SF_rhino_DToA_DTOSTR_STANDARD_EXPONENTIAL = jint(1);
	SF_rhino_DToA_DTOSTR_FIXED = jint(2);
	SF_rhino_DToA_DTOSTR_EXPONENTIAL = jint(3);
	SF_rhino_DToA_DTOSTR_PRECISION = jint(4);
	SF_rhino_DToA_Frac_mask = jint(1048575);
	SF_rhino_DToA_Exp_shift = jint(20);
	SF_rhino_DToA_Exp_msk1 = jint(1048576);
	SF_rhino_DToA_Frac_maskL = jlong(4503599627370495ll);
	SF_rhino_DToA_Exp_shiftL = jint(52);
	SF_rhino_DToA_Exp_msk1L = jlong(4503599627370496ll);
	SF_rhino_DToA_Bias = jint(1023);
	SF_rhino_DToA_P = jint(53);
	SF_rhino_DToA_Exp_shift1 = jint(20);
	SF_rhino_DToA_Exp_mask = jint(2146435072);
	SF_rhino_DToA_Exp_mask_shifted = jint(2047);
	SF_rhino_DToA_Bndry_mask = jint(1048575);
	SF_rhino_DToA_Log2P = jint(1);
	SF_rhino_DToA_Sign_bit = bit_cast<jint>(0x80000000);
	SF_rhino_DToA_Exp_11 = jint(1072693248);
	SF_rhino_DToA_Ten_pmax = jint(22);
	SF_rhino_DToA_Quick_max = jint(14);
	SF_rhino_DToA_Bletch = jint(16);
	SF_rhino_DToA_Frac_mask1 = jint(1048575);
	SF_rhino_DToA_Int_max = jint(14);
	SF_rhino_DToA_n_bigtens = jint(5);
	jtype frame[5];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/DToA:<clinit>", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_rhino_DToA(ctx);
	{
	LINE_NUMBER(47);
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
	clinit_rhino_DToA(ctx);
	SF_rhino_DToA_tens = sp[0].o;
	LINE_NUMBER(53);
	sp[0].o = (jobject) createArray(ctx, &class_double, (jint(5)));
	ARRAY_ACCESS(jdouble, sp[0].o, (jint(0))) = (jdouble(1,000000e+16));
	ARRAY_ACCESS(jdouble, sp[0].o, (jint(1))) = (jdouble(1,000000e+32));
	ARRAY_ACCESS(jdouble, sp[0].o, (jint(2))) = (jdouble(1,000000e+64));
	ARRAY_ACCESS(jdouble, sp[0].o, (jint(3))) = (jdouble(1,000000e+128));
	ARRAY_ACCESS(jdouble, sp[0].o, (jint(4))) = (jdouble(1,000000e+256));
	clinit_rhino_DToA(ctx);
	SF_rhino_DToA_bigtens = sp[0].o;
	LINE_NUMBER(1066);
	sp[0].o = (jobject) createArray(ctx, &class_int, (jint(5)));
	ARRAY_ACCESS(jint, sp[0].o, (jint(0))) = (jint(0));
	ARRAY_ACCESS(jint, sp[0].o, (jint(1))) = (jint(0));
	ARRAY_ACCESS(jint, sp[0].o, (jint(2))) = (jint(3));
	ARRAY_ACCESS(jint, sp[0].o, (jint(3))) = (jint(2));
	ARRAY_ACCESS(jint, sp[0].o, (jint(4))) = (jint(2));
	clinit_rhino_DToA(ctx);
	SF_rhino_DToA_dtoaModes = sp[0].o;
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void *vtable_rhino_DToA[] {
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
	{ "DTOSTR_STANDARD", &class_int, (intptr_t) &SF_rhino_DToA_DTOSTR_STANDARD, "I", 24 },
	{ "DTOSTR_STANDARD_EXPONENTIAL", &class_int, (intptr_t) &SF_rhino_DToA_DTOSTR_STANDARD_EXPONENTIAL, "I", 24 },
	{ "DTOSTR_FIXED", &class_int, (intptr_t) &SF_rhino_DToA_DTOSTR_FIXED, "I", 24 },
	{ "DTOSTR_EXPONENTIAL", &class_int, (intptr_t) &SF_rhino_DToA_DTOSTR_EXPONENTIAL, "I", 24 },
	{ "DTOSTR_PRECISION", &class_int, (intptr_t) &SF_rhino_DToA_DTOSTR_PRECISION, "I", 24 },
	{ "Frac_mask", &class_int, (intptr_t) &SF_rhino_DToA_Frac_mask, "I", 26 },
	{ "Exp_shift", &class_int, (intptr_t) &SF_rhino_DToA_Exp_shift, "I", 26 },
	{ "Exp_msk1", &class_int, (intptr_t) &SF_rhino_DToA_Exp_msk1, "I", 26 },
	{ "Frac_maskL", &class_long, (intptr_t) &SF_rhino_DToA_Frac_maskL, "J", 26 },
	{ "Exp_shiftL", &class_int, (intptr_t) &SF_rhino_DToA_Exp_shiftL, "I", 26 },
	{ "Exp_msk1L", &class_long, (intptr_t) &SF_rhino_DToA_Exp_msk1L, "J", 26 },
	{ "Bias", &class_int, (intptr_t) &SF_rhino_DToA_Bias, "I", 26 },
	{ "P", &class_int, (intptr_t) &SF_rhino_DToA_P, "I", 26 },
	{ "Exp_shift1", &class_int, (intptr_t) &SF_rhino_DToA_Exp_shift1, "I", 26 },
	{ "Exp_mask", &class_int, (intptr_t) &SF_rhino_DToA_Exp_mask, "I", 26 },
	{ "Exp_mask_shifted", &class_int, (intptr_t) &SF_rhino_DToA_Exp_mask_shifted, "I", 26 },
	{ "Bndry_mask", &class_int, (intptr_t) &SF_rhino_DToA_Bndry_mask, "I", 26 },
	{ "Log2P", &class_int, (intptr_t) &SF_rhino_DToA_Log2P, "I", 26 },
	{ "Sign_bit", &class_int, (intptr_t) &SF_rhino_DToA_Sign_bit, "I", 26 },
	{ "Exp_11", &class_int, (intptr_t) &SF_rhino_DToA_Exp_11, "I", 26 },
	{ "Ten_pmax", &class_int, (intptr_t) &SF_rhino_DToA_Ten_pmax, "I", 26 },
	{ "Quick_max", &class_int, (intptr_t) &SF_rhino_DToA_Quick_max, "I", 26 },
	{ "Bletch", &class_int, (intptr_t) &SF_rhino_DToA_Bletch, "I", 26 },
	{ "Frac_mask1", &class_int, (intptr_t) &SF_rhino_DToA_Frac_mask1, "I", 26 },
	{ "Int_max", &class_int, (intptr_t) &SF_rhino_DToA_Int_max, "I", 26 },
	{ "n_bigtens", &class_int, (intptr_t) &SF_rhino_DToA_n_bigtens, "I", 26 },
	{ "tens", getArrayClass(&class_double, 1), (intptr_t) &SF_rhino_DToA_tens, "[D", 26 },
	{ "bigtens", getArrayClass(&class_double, 1), (intptr_t) &SF_rhino_DToA_bigtens, "[D", 26 },
	{ "dtoaModes", getArrayClass(&class_int, 1), (intptr_t) &SF_rhino_DToA_dtoaModes, "[I", 26 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_rhino_DToA, 0, "()V", 0 },
	{ "BASEDIGIT", (intptr_t) SM_rhino_DToA_BASEDIGIT_int_R_char, 0, "(I)C", 10 },
	{ "lo0bits", (intptr_t) SM_rhino_DToA_lo0bits_int_R_int, 0, "(I)I", 10 },
	{ "hi0bits", (intptr_t) SM_rhino_DToA_hi0bits_int_R_int, 0, "(I)I", 10 },
	{ "stuffBits", (intptr_t) SM_rhino_DToA_stuffBits_Array1_byte_int_int, 0, "([BII)V", 10 },
	{ "d2b", (intptr_t) SM_rhino_DToA_d2b_double_Array1_int_Array1_int_R_java_math_BigInteger, 0, "(D[I[I)Ljava/math/BigInteger;", 10 },
	{ "JS_dtobasestr", (intptr_t) SM_rhino_DToA_JS_dtobasestr_int_double_R_java_lang_String, 0, "(ID)Ljava/lang/String;", 8 },
	{ "word0", (intptr_t) SM_rhino_DToA_word0_double_R_int, 0, "(D)I", 8 },
	{ "setWord0", (intptr_t) SM_rhino_DToA_setWord0_double_int_R_double, 0, "(DI)D", 8 },
	{ "word1", (intptr_t) SM_rhino_DToA_word1_double_R_int, 0, "(D)I", 8 },
	{ "pow5mult", (intptr_t) SM_rhino_DToA_pow5mult_java_math_BigInteger_int_R_java_math_BigInteger, 0, "(Ljava/math/BigInteger;I)Ljava/math/BigInteger;", 8 },
	{ "roundOff", (intptr_t) SM_rhino_DToA_roundOff_java_lang_StringBuilder_R_boolean, 0, "(Ljava/lang/StringBuilder;)Z", 8 },
	{ "JS_dtoa", (intptr_t) SM_rhino_DToA_JS_dtoa_double_int_boolean_int_Array1_boolean_java_lang_StringBuilder_R_int, 0, "(DIZI[ZLjava/lang/StringBuilder;)I", 8 },
	{ "stripTrailingZeroes", (intptr_t) SM_rhino_DToA_stripTrailingZeroes_java_lang_StringBuilder, 0, "(Ljava/lang/StringBuilder;)V", 10 },
	{ "JS_dtostr", (intptr_t) SM_rhino_DToA_JS_dtostr_java_lang_StringBuilder_int_int_double, 0, "(Ljava/lang/StringBuilder;IID)V", 8 },
	{ "<clinit>", (intptr_t) clinit_rhino_DToA, 0, "()V", 8 },
};

Class class_rhino_DToA{
		.nativeName = (intptr_t) "rhino/DToA",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(rhino_DToA),
		.classVtable = (intptr_t) vtable_rhino_DToA,
		.staticInitializer = (intptr_t) clinit_rhino_DToA,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_rhino_DToA,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 32,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 29,
		.nativeFields = (intptr_t) fields,
		.methodCount = 16,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 11,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_rhino_DToA = registerClass(&class_rhino_DToA);

}
