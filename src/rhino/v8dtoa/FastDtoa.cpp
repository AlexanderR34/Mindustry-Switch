#include "rhino/v8dtoa/FastDtoa.h"
#include "rhino/v8dtoa/FastDtoa.h"
#include "java/lang/Object.h"
#include "rhino/v8dtoa/CachedPowers.h"
#include "java/lang/String.h"
#include "java/lang/AssertionError.h"
#include "rhino/v8dtoa/DoubleHelper.h"
#include "rhino/v8dtoa/DiyFp.h"
#include "java/lang/Class.h"
#include "rhino/v8dtoa/FastDtoaBuilder.h"
#include "java/lang/Double.h"

extern "C" {

jint SF_rhino_v8dtoa_FastDtoa_kFastDtoaMaximalLength;
jint SF_rhino_v8dtoa_FastDtoa_minimal_target_exponent;
jint SF_rhino_v8dtoa_FastDtoa_maximal_target_exponent;
jint SF_rhino_v8dtoa_FastDtoa_kTen4;
jint SF_rhino_v8dtoa_FastDtoa_kTen5;
jint SF_rhino_v8dtoa_FastDtoa_kTen6;
jint SF_rhino_v8dtoa_FastDtoa_kTen7;
jint SF_rhino_v8dtoa_FastDtoa_kTen8;
jint SF_rhino_v8dtoa_FastDtoa_kTen9;
jbool SF_rhino_v8dtoa_FastDtoa_$assertionsDisabled;

void mark_rhino_v8dtoa_FastDtoa(jobject object, jint mark, jint depth) {
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
	auto self = (rhino_v8dtoa_FastDtoa *) object;
}

void init_rhino_v8dtoa_FastDtoa(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/v8dtoa/FastDtoa:<init>", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_rhino_v8dtoa_FastDtoa(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(33);
	init_java_lang_Object(ctx, (frame[0].o));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jbool SM_rhino_v8dtoa_FastDtoa_roundWeed_rhino_v8dtoa_FastDtoaBuilder_long_long_long_long_long_R_boolean(jcontext ctx, jobject param0, jlong param1, jlong param2, jlong param3, jlong param4, jlong param5) {
	jtype frame[23];
	auto stack = &frame[15];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/v8dtoa/FastDtoa:roundWeed", 23 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_rhino_v8dtoa_FastDtoa(ctx);
	frame[0].o = param0;
	frame[1].l = param1;
	frame[3].l = param2;
	frame[5].l = param3;
	frame[7].l = param4;
	frame[9].l = param5;
	{
	LINE_NUMBER(69);
	frame[11].l = ((frame[1].l) - (frame[9].l));
	LINE_NUMBER(70);
	frame[13].l = ((frame[1].l) + (frame[9].l));
	}
label_2:;
	{
	LINE_NUMBER(140);
	if ((longCompare((frame[5].l), (frame[11].l))) >= 0) goto label_3;
	}
	{
	if ((longCompare(((frame[3].l) - (frame[5].l)), (frame[7].l))) < 0) goto label_3;
	}
	{
	if ((longCompare(((frame[5].l) + (frame[7].l)), (frame[11].l))) < 0) goto label_4;
	}
	{
	if ((longCompare(((frame[11].l) - (frame[5].l)), (((frame[5].l) + (frame[7].l)) - (frame[11].l)))) < 0) goto label_3;
	}
label_4:;
	{
	LINE_NUMBER(144);
	((func_rhino_v8dtoa_FastDtoaBuilder_decreaseLast) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_rhino_v8dtoa_FastDtoaBuilder_decreaseLast])(ctx, (frame[0].o));
	LINE_NUMBER(145);
	frame[5].l = ((frame[5].l) + (frame[7].l));
	goto label_2;
	}
label_3:;
	{
	LINE_NUMBER(151);
	if ((longCompare((frame[5].l), (frame[13].l))) >= 0) goto label_6;
	}
	{
	if ((longCompare(((frame[3].l) - (frame[5].l)), (frame[7].l))) < 0) goto label_6;
	}
	{
	if ((longCompare(((frame[5].l) + (frame[7].l)), (frame[13].l))) < 0) goto label_7;
	}
	{
	if ((longCompare(((frame[13].l) - (frame[5].l)), (((frame[5].l) + (frame[7].l)) - (frame[13].l)))) <= 0) goto label_6;
	}
label_7:;
	{
	LINE_NUMBER(155);
	popStackFrame(ctx);
	return (jint(0));
	}
label_6:;
	{
	LINE_NUMBER(163);
	if ((longCompare(((jlong(2ll)) * (frame[9].l)), (frame[5].l))) > 0) goto label_8;
	}
	{
	if ((longCompare((frame[5].l), ((frame[3].l) - ((jlong(4ll)) * (frame[9].l))))) > 0) goto label_8;
	}
	INST_ICONST(1);
	goto label_9;
label_8:;
	INST_ICONST(0);
label_9:;
	popStackFrame(ctx);
	INST_IRETURN();

	popStackFrame(ctx);
}

jlong SM_rhino_v8dtoa_FastDtoa_biggestPowerTen_int_int_R_long(jcontext ctx, jint param0, jint param1) {
	jtype frame[10];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/v8dtoa/FastDtoa:biggestPowerTen", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_rhino_v8dtoa_FastDtoa(ctx);
	frame[0].i = param0;
	frame[1].i = param1;
	{
	LINE_NUMBER(182);
	switch((frame[1].i)) {
		case 0: goto label_1;
		case 1: goto label_2;
		case 2: goto label_2;
		case 3: goto label_2;
		case 4: goto label_3;
		case 5: goto label_3;
		case 6: goto label_3;
		case 7: goto label_4;
		case 8: goto label_4;
		case 9: goto label_4;
		case 10: goto label_5;
		case 11: goto label_5;
		case 12: goto label_5;
		case 13: goto label_5;
		case 14: goto label_6;
		case 15: goto label_6;
		case 16: goto label_6;
		case 17: goto label_7;
		case 18: goto label_7;
		case 19: goto label_7;
		case 20: goto label_8;
		case 21: goto label_8;
		case 22: goto label_8;
		case 23: goto label_8;
		case 24: goto label_9;
		case 25: goto label_9;
		case 26: goto label_9;
		case 27: goto label_10;
		case 28: goto label_10;
		case 29: goto label_10;
		case 30: goto label_11;
		case 31: goto label_11;
		case 32: goto label_11;
		default: goto label_12;
	}
	}
label_11:;
	{
	LINE_NUMBER(186);
	if ((jint(1000000000)) > (frame[0].i)) goto label_10;
	}
	{
	LINE_NUMBER(187);
	frame[2].i = (jint(1000000000));
	LINE_NUMBER(188);
	frame[3].i = (9);
	LINE_NUMBER(189);
	goto label_16;
	}
label_10:;
	{
	LINE_NUMBER(194);
	if ((jint(100000000)) > (frame[0].i)) goto label_9;
	}
	{
	LINE_NUMBER(195);
	frame[2].i = (jint(100000000));
	LINE_NUMBER(196);
	frame[3].i = (8);
	LINE_NUMBER(197);
	goto label_16;
	}
label_9:;
	{
	LINE_NUMBER(202);
	if ((jint(10000000)) > (frame[0].i)) goto label_8;
	}
	{
	LINE_NUMBER(203);
	frame[2].i = (jint(10000000));
	LINE_NUMBER(204);
	frame[3].i = (7);
	LINE_NUMBER(205);
	goto label_16;
	}
label_8:;
	{
	LINE_NUMBER(211);
	if ((jint(1000000)) > (frame[0].i)) goto label_7;
	}
	{
	LINE_NUMBER(212);
	frame[2].i = (jint(1000000));
	LINE_NUMBER(213);
	frame[3].i = (6);
	LINE_NUMBER(214);
	goto label_16;
	}
label_7:;
	{
	LINE_NUMBER(219);
	if ((jint(100000)) > (frame[0].i)) goto label_6;
	}
	{
	LINE_NUMBER(220);
	frame[2].i = (jint(100000));
	LINE_NUMBER(221);
	frame[3].i = (jint(5));
	LINE_NUMBER(222);
	goto label_16;
	}
label_6:;
	{
	LINE_NUMBER(227);
	if ((10000) > (frame[0].i)) goto label_5;
	}
	{
	LINE_NUMBER(228);
	frame[2].i = (10000);
	LINE_NUMBER(229);
	frame[3].i = (jint(4));
	LINE_NUMBER(230);
	goto label_16;
	}
label_5:;
	{
	LINE_NUMBER(236);
	if ((1000) > (frame[0].i)) goto label_4;
	}
	{
	LINE_NUMBER(237);
	frame[2].i = (1000);
	LINE_NUMBER(238);
	frame[3].i = (jint(3));
	LINE_NUMBER(239);
	goto label_16;
	}
label_4:;
	{
	LINE_NUMBER(244);
	if ((100) > (frame[0].i)) goto label_3;
	}
	{
	LINE_NUMBER(245);
	frame[2].i = (100);
	LINE_NUMBER(246);
	frame[3].i = (jint(2));
	LINE_NUMBER(247);
	goto label_16;
	}
label_3:;
	{
	LINE_NUMBER(252);
	if ((10) > (frame[0].i)) goto label_2;
	}
	{
	LINE_NUMBER(253);
	frame[2].i = (10);
	LINE_NUMBER(254);
	frame[3].i = (jint(1));
	LINE_NUMBER(255);
	goto label_16;
	}
label_2:;
	{
	LINE_NUMBER(260);
	if ((jint(1)) > (frame[0].i)) goto label_1;
	}
	{
	LINE_NUMBER(261);
	frame[2].i = (jint(1));
	LINE_NUMBER(262);
	frame[3].i = (jint(0));
	LINE_NUMBER(263);
	goto label_16;
	}
label_1:;
	{
	LINE_NUMBER(266);
	frame[2].i = (jint(0));
	LINE_NUMBER(267);
	frame[3].i = (jint(-1));
	LINE_NUMBER(268);
	goto label_16;
	}
label_12:;
	{
	LINE_NUMBER(271);
	frame[2].i = (jint(0));
	LINE_NUMBER(272);
	frame[3].i = (jint(0));
	}
label_16:;
	{
	LINE_NUMBER(275);
	popStackFrame(ctx);
	return (((jlong((frame[2].i))) << (32)) | ((jlong(4294967295ll)) & (jlong((frame[3].i)))));
	}

	popStackFrame(ctx);
}

jbool SM_rhino_v8dtoa_FastDtoa_uint64_lte_long_long_R_boolean(jcontext ctx, jlong param0, jlong param1) {
	jtype frame[9];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/v8dtoa/FastDtoa:uint64_lte", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_rhino_v8dtoa_FastDtoa(ctx);
	frame[0].l = param0;
	frame[2].l = param1;
	{
	LINE_NUMBER(280);
	if ((longCompare((frame[0].l), (frame[2].l))) == 0) goto label_1;
	}
	{
	if ((longCompare((frame[0].l), (frame[2].l))) >= 0) goto label_2;
	}
	INST_ICONST(1);
	goto label_3;
label_2:;
	INST_ICONST(0);
label_3:;
	{
	if ((longCompare((frame[0].l), (jlong(0)))) >= 0) goto label_4;
	}
	INST_ICONST(1);
	goto label_5;
label_4:;
	INST_ICONST(0);
label_5:;
	{
	sp -= 2;
	jint temp0 = sp[0].i ^ sp[1].i;
	sp[0].i = temp0;
	sp += 1;
	if ((longCompare((frame[2].l), (jlong(0)))) >= 0) goto label_6;
	}
	INST_ICONST(1);
	goto label_7;
label_6:;
	INST_ICONST(0);
label_7:;
	INST_IXOR();
	if ((--sp)->i == 0) goto label_8;
label_1:;
	INST_ICONST(1);
	goto label_9;
label_8:;
	INST_ICONST(0);
label_9:;
	popStackFrame(ctx);
	INST_IRETURN();

	popStackFrame(ctx);
}

jbool SM_rhino_v8dtoa_FastDtoa_digitGen_rhino_v8dtoa_DiyFp_rhino_v8dtoa_DiyFp_rhino_v8dtoa_DiyFp_rhino_v8dtoa_FastDtoaBuilder_int_R_boolean(jcontext ctx, jobject param0, jobject param1, jobject param2, jobject param3, jint param4) {
	jtype frame[33];
	auto stack = &frame[22];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/v8dtoa/FastDtoa:digitGen", 33 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_rhino_v8dtoa_FastDtoa(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	frame[2].o = param2;
	frame[3].o = param3;
	frame[4].i = param4;
	{
	LINE_NUMBER(330);
	if ((clinit_rhino_v8dtoa_FastDtoa(ctx), (jint)SF_rhino_v8dtoa_FastDtoa_$assertionsDisabled) != 0) goto label_1;
	}
	{
	jint temp0 = (jint)((func_rhino_v8dtoa_DiyFp_e_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_rhino_v8dtoa_DiyFp_e_R_int])(ctx, (frame[0].o));
	jint temp1 = (jint)((func_rhino_v8dtoa_DiyFp_e_R_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_rhino_v8dtoa_DiyFp_e_R_int])(ctx, (frame[1].o));
	if (temp0 != temp1) goto label_2;
	}
	{
	jint temp0 = (jint)((func_rhino_v8dtoa_DiyFp_e_R_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_rhino_v8dtoa_DiyFp_e_R_int])(ctx, (frame[1].o));
	jint temp1 = (jint)((func_rhino_v8dtoa_DiyFp_e_R_int) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_rhino_v8dtoa_DiyFp_e_R_int])(ctx, (frame[2].o));
	if (temp0 == temp1) goto label_1;
	}
label_2:;
	{
	clinit_java_lang_AssertionError(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_AssertionError);
	init_java_lang_AssertionError(ctx, sp[0].o);
	throwException(ctx, sp[0].o);	}
label_1:;
	{
	LINE_NUMBER(331);
	if ((clinit_rhino_v8dtoa_FastDtoa(ctx), (jint)SF_rhino_v8dtoa_FastDtoa_$assertionsDisabled) != 0) goto label_3;
	}
	{
	jlong temp0 = (jlong)((func_rhino_v8dtoa_DiyFp_f_R_long) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_rhino_v8dtoa_DiyFp_f_R_long])(ctx, (frame[0].o));
	jlong temp1 = temp0 + (jlong(1));
	jlong temp2 = (jlong)((func_rhino_v8dtoa_DiyFp_f_R_long) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_rhino_v8dtoa_DiyFp_f_R_long])(ctx, (frame[2].o));
	jint temp3 = (jint)SM_rhino_v8dtoa_FastDtoa_uint64_lte_long_long_R_boolean(ctx, temp1, (temp2 - (jlong(1))));
	if (temp3 != 0) goto label_3;
	}
	{
	clinit_java_lang_AssertionError(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_AssertionError);
	init_java_lang_AssertionError(ctx, sp[0].o);
	throwException(ctx, sp[0].o);	}
label_3:;
	{
	LINE_NUMBER(332);
	if ((clinit_rhino_v8dtoa_FastDtoa(ctx), (jint)SF_rhino_v8dtoa_FastDtoa_$assertionsDisabled) != 0) goto label_4;
	}
	{
	jint temp0 = -60;
	jint temp1 = (jint)((func_rhino_v8dtoa_DiyFp_e_R_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_rhino_v8dtoa_DiyFp_e_R_int])(ctx, (frame[1].o));
	if (temp0 > temp1) goto label_5;
	}
	{
	jint temp0 = (jint)((func_rhino_v8dtoa_DiyFp_e_R_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_rhino_v8dtoa_DiyFp_e_R_int])(ctx, (frame[1].o));
	if (temp0 <= (-32)) goto label_4;
	}
label_5:;
	{
	clinit_java_lang_AssertionError(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_AssertionError);
	init_java_lang_AssertionError(ctx, sp[0].o);
	throwException(ctx, sp[0].o);	}
label_4:;
	{
	LINE_NUMBER(344);
	frame[5].l = (jlong(1));
	LINE_NUMBER(345);
	clinit_rhino_v8dtoa_DiyFp(ctx);
	sp[0].o = gcAlloc(ctx, &class_rhino_v8dtoa_DiyFp);
	jlong temp0 = (jlong)((func_rhino_v8dtoa_DiyFp_f_R_long) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_rhino_v8dtoa_DiyFp_f_R_long])(ctx, (frame[0].o));
	jlong temp1 = temp0 - (frame[5].l);
	jint temp2 = (jint)((func_rhino_v8dtoa_DiyFp_e_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_rhino_v8dtoa_DiyFp_e_R_int])(ctx, (frame[0].o));
	init_rhino_v8dtoa_DiyFp_long_int(ctx, sp[0].o, temp1, temp2);
	frame[7].o = sp[0].o;
	LINE_NUMBER(346);
	clinit_rhino_v8dtoa_DiyFp(ctx);
	sp[0].o = gcAlloc(ctx, &class_rhino_v8dtoa_DiyFp);
	jlong temp3 = (jlong)((func_rhino_v8dtoa_DiyFp_f_R_long) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_rhino_v8dtoa_DiyFp_f_R_long])(ctx, (frame[2].o));
	jlong temp4 = temp3 + (frame[5].l);
	jint temp5 = (jint)((func_rhino_v8dtoa_DiyFp_e_R_int) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_rhino_v8dtoa_DiyFp_e_R_int])(ctx, (frame[2].o));
	init_rhino_v8dtoa_DiyFp_long_int(ctx, sp[0].o, temp4, temp5);
	frame[8].o = sp[0].o;
	LINE_NUMBER(349);
	sp[0].o = (jobject)SM_rhino_v8dtoa_DiyFp_minus_rhino_v8dtoa_DiyFp_rhino_v8dtoa_DiyFp_R_rhino_v8dtoa_DiyFp(ctx, (frame[8].o), (frame[7].o));
	frame[9].o = sp[0].o;
	LINE_NUMBER(357);
	clinit_rhino_v8dtoa_DiyFp(ctx);
	sp[0].o = gcAlloc(ctx, &class_rhino_v8dtoa_DiyFp);
	jlong temp6 = jlong(1);
	jint temp7 = (jint)((func_rhino_v8dtoa_DiyFp_e_R_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_rhino_v8dtoa_DiyFp_e_R_int])(ctx, (frame[1].o));
	jlong temp8 = temp6 << (-temp7);
	jint temp9 = (jint)((func_rhino_v8dtoa_DiyFp_e_R_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_rhino_v8dtoa_DiyFp_e_R_int])(ctx, (frame[1].o));
	init_rhino_v8dtoa_DiyFp_long_int(ctx, sp[0].o, temp8, temp9);
	frame[10].o = sp[0].o;
	LINE_NUMBER(359);
	jlong temp10 = (jlong)((func_rhino_v8dtoa_DiyFp_f_R_long) ((void **) nullCheck(ctx, (frame[8].o))->vtable)[VTABLE_rhino_v8dtoa_DiyFp_f_R_long])(ctx, (frame[8].o));
	jint temp11 = (jint)((func_rhino_v8dtoa_DiyFp_e_R_int) ((void **) nullCheck(ctx, (frame[10].o))->vtable)[VTABLE_rhino_v8dtoa_DiyFp_e_R_int])(ctx, (frame[10].o));
	frame[11].i = (jint(((bit_cast<jlong>(bit_cast<uint64_t>(temp10) >> (-temp11))) & (jlong(4294967295ll)))));
	LINE_NUMBER(361);
	jlong temp12 = (jlong)((func_rhino_v8dtoa_DiyFp_f_R_long) ((void **) nullCheck(ctx, (frame[8].o))->vtable)[VTABLE_rhino_v8dtoa_DiyFp_f_R_long])(ctx, (frame[8].o));
	jlong temp13 = (jlong)((func_rhino_v8dtoa_DiyFp_f_R_long) ((void **) nullCheck(ctx, (frame[10].o))->vtable)[VTABLE_rhino_v8dtoa_DiyFp_f_R_long])(ctx, (frame[10].o));
	frame[12].l = (temp12 & (temp13 - (jlong(1))));
	LINE_NUMBER(362);
	jint temp14 = frame[11].i;
	jint temp15 = 64;
	jint temp16 = (jint)((func_rhino_v8dtoa_DiyFp_e_R_int) ((void **) nullCheck(ctx, (frame[10].o))->vtable)[VTABLE_rhino_v8dtoa_DiyFp_e_R_int])(ctx, (frame[10].o));
	jlong temp17 = (jlong)SM_rhino_v8dtoa_FastDtoa_biggestPowerTen_int_int_R_long(ctx, temp14, (temp15 - (-temp16)));
	frame[14].l = temp17;
	LINE_NUMBER(363);
	frame[16].i = (jint(((bit_cast<jlong>(bit_cast<uint64_t>((frame[14].l)) >> (32))) & (jlong(4294967295ll)))));
	LINE_NUMBER(364);
	frame[17].i = (jint(((frame[14].l) & (jlong(4294967295ll)))));
	LINE_NUMBER(365);
	frame[18].i = ((frame[17].i) + (jint(1)));
	}
label_16:;
	{
	LINE_NUMBER(370);
	if ((frame[18].i) <= 0) goto label_17;
	}
	{
	LINE_NUMBER(371);
	frame[19].i = ((frame[11].i) / (frame[16].i));
	LINE_NUMBER(372);
	((func_rhino_v8dtoa_FastDtoaBuilder_append_char) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_rhino_v8dtoa_FastDtoaBuilder_append_char])(ctx, (frame[3].o), (jchar(((48) + (frame[19].i)))));
	LINE_NUMBER(373);
	frame[11].i = ((frame[11].i) % (frame[16].i));
	LINE_NUMBER(374);
	INST_IINC(18, -1);
	LINE_NUMBER(377);
	jlong temp0 = jlong((frame[11].i));
	sp[0].o = frame[10].o;
	LINE_NUMBER(378);
	jint temp1 = (jint)((func_rhino_v8dtoa_DiyFp_e_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_v8dtoa_DiyFp_e_R_int])(ctx, sp[0].o);
	frame[20].l = ((temp0 << (-temp1)) + (frame[12].l));
	LINE_NUMBER(381);
	jlong temp2 = frame[20].l;
	jlong temp3 = (jlong)((func_rhino_v8dtoa_DiyFp_f_R_long) ((void **) nullCheck(ctx, (frame[9].o))->vtable)[VTABLE_rhino_v8dtoa_DiyFp_f_R_long])(ctx, (frame[9].o));
	if ((longCompare(temp2, temp3)) >= 0) goto label_25;
	}
	{
	LINE_NUMBER(384);
	((rhino_v8dtoa_FastDtoaBuilder *) NULL_CHECK((frame[3].o)))->F_point = ((((jint)((rhino_v8dtoa_FastDtoaBuilder *) NULL_CHECK((frame[3].o)))->F_end) - (frame[4].i)) + (frame[18].i));
	LINE_NUMBER(385);
	sp[0].o = frame[3].o;
	sp[1].o = (jobject)SM_rhino_v8dtoa_DiyFp_minus_rhino_v8dtoa_DiyFp_rhino_v8dtoa_DiyFp_R_rhino_v8dtoa_DiyFp(ctx, (frame[8].o), (frame[1].o));
	jlong temp0 = (jlong)((func_rhino_v8dtoa_DiyFp_f_R_long) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_rhino_v8dtoa_DiyFp_f_R_long])(ctx, sp[1].o);
	sp[1].o = frame[9].o;
	LINE_NUMBER(386);
	jlong temp1 = (jlong)((func_rhino_v8dtoa_DiyFp_f_R_long) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_rhino_v8dtoa_DiyFp_f_R_long])(ctx, sp[1].o);
	jlong temp2 = frame[20].l;
	jlong temp3 = jlong((frame[16].i));
	sp[1].o = frame[10].o;
	LINE_NUMBER(387);
	jint temp4 = (jint)((func_rhino_v8dtoa_DiyFp_e_R_int) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_rhino_v8dtoa_DiyFp_e_R_int])(ctx, sp[1].o);
	jlong temp5 = temp3 << (-temp4);
	jlong temp6 = frame[5].l;
	LINE_NUMBER(385);
	jint temp7 = (jint)SM_rhino_v8dtoa_FastDtoa_roundWeed_rhino_v8dtoa_FastDtoaBuilder_long_long_long_long_long_R_boolean(ctx, sp[0].o, temp0, temp1, temp2, temp5, temp6);
	popStackFrame(ctx);
	return temp7;
	}
label_25:;
	{
	LINE_NUMBER(389);
	frame[16].i = ((frame[16].i) / (10));
	LINE_NUMBER(390);
	goto label_16;
	}
label_17:;
	{
	LINE_NUMBER(407);
	frame[12].l = ((frame[12].l) * (jlong(5ll)));
	LINE_NUMBER(408);
	frame[5].l = ((frame[5].l) * (jlong(5ll)));
	LINE_NUMBER(409);
	sp[0].o = frame[9].o;
	jlong temp0 = (jlong)((func_rhino_v8dtoa_DiyFp_f_R_long) ((void **) nullCheck(ctx, (frame[9].o))->vtable)[VTABLE_rhino_v8dtoa_DiyFp_f_R_long])(ctx, (frame[9].o));
	((func_rhino_v8dtoa_DiyFp_setF_long) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_v8dtoa_DiyFp_setF_long])(ctx, sp[0].o, (temp0 * (jlong(5ll))));
	LINE_NUMBER(410);
	sp[0].o = frame[9].o;
	jint temp1 = (jint)((func_rhino_v8dtoa_DiyFp_e_R_int) ((void **) nullCheck(ctx, (frame[9].o))->vtable)[VTABLE_rhino_v8dtoa_DiyFp_e_R_int])(ctx, (frame[9].o));
	((func_rhino_v8dtoa_DiyFp_setE_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_v8dtoa_DiyFp_setE_int])(ctx, sp[0].o, (temp1 + (jint(1))));
	LINE_NUMBER(411);
	sp[0].o = frame[10].o;
	jlong temp2 = (jlong)((func_rhino_v8dtoa_DiyFp_f_R_long) ((void **) nullCheck(ctx, (frame[10].o))->vtable)[VTABLE_rhino_v8dtoa_DiyFp_f_R_long])(ctx, (frame[10].o));
	((func_rhino_v8dtoa_DiyFp_setF_long) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_v8dtoa_DiyFp_setF_long])(ctx, sp[0].o, (bit_cast<jlong>(bit_cast<uint64_t>(temp2) >> (jint(1)))));
	LINE_NUMBER(412);
	sp[0].o = frame[10].o;
	jint temp3 = (jint)((func_rhino_v8dtoa_DiyFp_e_R_int) ((void **) nullCheck(ctx, (frame[10].o))->vtable)[VTABLE_rhino_v8dtoa_DiyFp_e_R_int])(ctx, (frame[10].o));
	((func_rhino_v8dtoa_DiyFp_setE_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_v8dtoa_DiyFp_setE_int])(ctx, sp[0].o, (temp3 + (jint(1))));
	LINE_NUMBER(414);
	jlong temp4 = frame[12].l;
	jint temp5 = (jint)((func_rhino_v8dtoa_DiyFp_e_R_int) ((void **) nullCheck(ctx, (frame[10].o))->vtable)[VTABLE_rhino_v8dtoa_DiyFp_e_R_int])(ctx, (frame[10].o));
	frame[19].i = (jint(((bit_cast<jlong>(bit_cast<uint64_t>(temp4) >> (-temp5))) & (jlong(4294967295ll)))));
	LINE_NUMBER(415);
	((func_rhino_v8dtoa_FastDtoaBuilder_append_char) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_rhino_v8dtoa_FastDtoaBuilder_append_char])(ctx, (frame[3].o), (jchar(((48) + (frame[19].i)))));
	LINE_NUMBER(416);
	jlong temp6 = frame[12].l;
	jlong temp7 = (jlong)((func_rhino_v8dtoa_DiyFp_f_R_long) ((void **) nullCheck(ctx, (frame[10].o))->vtable)[VTABLE_rhino_v8dtoa_DiyFp_f_R_long])(ctx, (frame[10].o));
	frame[12].l = (temp6 & (temp7 - (jlong(1))));
	LINE_NUMBER(417);
	INST_IINC(18, -1);
	LINE_NUMBER(418);
	jlong temp8 = frame[12].l;
	jlong temp9 = (jlong)((func_rhino_v8dtoa_DiyFp_f_R_long) ((void **) nullCheck(ctx, (frame[9].o))->vtable)[VTABLE_rhino_v8dtoa_DiyFp_f_R_long])(ctx, (frame[9].o));
	if ((longCompare(temp8, temp9)) >= 0) goto label_42;
	}
	{
	LINE_NUMBER(419);
	((rhino_v8dtoa_FastDtoaBuilder *) NULL_CHECK((frame[3].o)))->F_point = ((((jint)((rhino_v8dtoa_FastDtoaBuilder *) NULL_CHECK((frame[3].o)))->F_end) - (frame[4].i)) + (frame[18].i));
	LINE_NUMBER(420);
	sp[0].o = frame[3].o;
	sp[1].o = (jobject)SM_rhino_v8dtoa_DiyFp_minus_rhino_v8dtoa_DiyFp_rhino_v8dtoa_DiyFp_R_rhino_v8dtoa_DiyFp(ctx, (frame[8].o), (frame[1].o));
	jlong temp0 = (jlong)((func_rhino_v8dtoa_DiyFp_f_R_long) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_rhino_v8dtoa_DiyFp_f_R_long])(ctx, sp[1].o);
	jlong temp1 = temp0 * (frame[5].l);
	sp[1].o = frame[9].o;
	LINE_NUMBER(421);
	jlong temp2 = (jlong)((func_rhino_v8dtoa_DiyFp_f_R_long) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_rhino_v8dtoa_DiyFp_f_R_long])(ctx, sp[1].o);
	jlong temp3 = frame[12].l;
	jlong temp4 = (jlong)((func_rhino_v8dtoa_DiyFp_f_R_long) ((void **) nullCheck(ctx, (frame[10].o))->vtable)[VTABLE_rhino_v8dtoa_DiyFp_f_R_long])(ctx, (frame[10].o));
	jlong temp5 = frame[5].l;
	LINE_NUMBER(420);
	jint temp6 = (jint)SM_rhino_v8dtoa_FastDtoa_roundWeed_rhino_v8dtoa_FastDtoaBuilder_long_long_long_long_long_R_boolean(ctx, sp[0].o, temp1, temp2, temp3, temp4, temp5);
	popStackFrame(ctx);
	return temp6;
	}
label_42:;
	LINE_NUMBER(423);
	goto label_17;

	popStackFrame(ctx);
}

jbool SM_rhino_v8dtoa_FastDtoa_grisu3_double_rhino_v8dtoa_FastDtoaBuilder_R_boolean(jcontext ctx, jdouble param0, jobject param1) {
	jtype frame[18];
	auto stack = &frame[13];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/v8dtoa/FastDtoa:grisu3", 18 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_rhino_v8dtoa_FastDtoa(ctx);
	frame[0].d = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(439);
	jlong temp0 = (jlong)SM_java_lang_Double_doubleToLongBits_double_R_long(ctx, (frame[0].d));
	frame[3].l = temp0;
	LINE_NUMBER(440);
	sp[0].o = (jobject)SM_rhino_v8dtoa_DoubleHelper_asNormalizedDiyFp_long_R_rhino_v8dtoa_DiyFp(ctx, (frame[3].l));
	frame[5].o = sp[0].o;
	LINE_NUMBER(445);
	clinit_rhino_v8dtoa_DiyFp(ctx);
	sp[0].o = gcAlloc(ctx, &class_rhino_v8dtoa_DiyFp);
	init_rhino_v8dtoa_DiyFp(ctx, sp[0].o);
	frame[6].o = sp[0].o;
	clinit_rhino_v8dtoa_DiyFp(ctx);
	sp[0].o = gcAlloc(ctx, &class_rhino_v8dtoa_DiyFp);
	init_rhino_v8dtoa_DiyFp(ctx, sp[0].o);
	frame[7].o = sp[0].o;
	LINE_NUMBER(446);
	SM_rhino_v8dtoa_DoubleHelper_normalizedBoundaries_long_rhino_v8dtoa_DiyFp_rhino_v8dtoa_DiyFp(ctx, (frame[3].l), (frame[6].o), (frame[7].o));
	LINE_NUMBER(447);
	if ((clinit_rhino_v8dtoa_FastDtoa(ctx), (jint)SF_rhino_v8dtoa_FastDtoa_$assertionsDisabled) != 0) goto label_6;
	}
	{
	jint temp0 = (jint)((func_rhino_v8dtoa_DiyFp_e_R_int) ((void **) nullCheck(ctx, (frame[7].o))->vtable)[VTABLE_rhino_v8dtoa_DiyFp_e_R_int])(ctx, (frame[7].o));
	jint temp1 = (jint)((func_rhino_v8dtoa_DiyFp_e_R_int) ((void **) nullCheck(ctx, (frame[5].o))->vtable)[VTABLE_rhino_v8dtoa_DiyFp_e_R_int])(ctx, (frame[5].o));
	if (temp0 == temp1) goto label_6;
	}
	{
	clinit_java_lang_AssertionError(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_AssertionError);
	init_java_lang_AssertionError(ctx, sp[0].o);
	throwException(ctx, sp[0].o);	}
label_6:;
	{
	LINE_NUMBER(448);
	clinit_rhino_v8dtoa_DiyFp(ctx);
	sp[0].o = gcAlloc(ctx, &class_rhino_v8dtoa_DiyFp);
	init_rhino_v8dtoa_DiyFp(ctx, sp[0].o);
	frame[8].o = sp[0].o;
	LINE_NUMBER(449);
	jint temp0 = (jint)((func_rhino_v8dtoa_DiyFp_e_R_int) ((void **) nullCheck(ctx, (frame[5].o))->vtable)[VTABLE_rhino_v8dtoa_DiyFp_e_R_int])(ctx, (frame[5].o));
	jint temp1 = (jint)SM_rhino_v8dtoa_CachedPowers_getCachedPower_int_int_int_rhino_v8dtoa_DiyFp_R_int(ctx, (temp0 + (64)), (-60), (-32), (frame[8].o));
	frame[9].i = temp1;
	LINE_NUMBER(451);
	if ((clinit_rhino_v8dtoa_FastDtoa(ctx), (jint)SF_rhino_v8dtoa_FastDtoa_$assertionsDisabled) != 0) goto label_9;
	}
	{
	jint temp0 = -60;
	jint temp1 = (jint)((func_rhino_v8dtoa_DiyFp_e_R_int) ((void **) nullCheck(ctx, (frame[5].o))->vtable)[VTABLE_rhino_v8dtoa_DiyFp_e_R_int])(ctx, (frame[5].o));
	jint temp2 = (jint)((func_rhino_v8dtoa_DiyFp_e_R_int) ((void **) nullCheck(ctx, (frame[8].o))->vtable)[VTABLE_rhino_v8dtoa_DiyFp_e_R_int])(ctx, (frame[8].o));
	if (temp0 > ((temp1 + temp2) + (64))) goto label_10;
	}
	{
	jint temp0 = -32;
	sp[0].o = frame[5].o;
	LINE_NUMBER(453);
	jint temp1 = (jint)((func_rhino_v8dtoa_DiyFp_e_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_v8dtoa_DiyFp_e_R_int])(ctx, sp[0].o);
	jint temp2 = (jint)((func_rhino_v8dtoa_DiyFp_e_R_int) ((void **) nullCheck(ctx, (frame[8].o))->vtable)[VTABLE_rhino_v8dtoa_DiyFp_e_R_int])(ctx, (frame[8].o));
	if (temp0 >= ((temp1 + temp2) + (64))) goto label_9;
	}
label_10:;
	{
	LINE_NUMBER(451);
	clinit_java_lang_AssertionError(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_AssertionError);
	init_java_lang_AssertionError(ctx, sp[0].o);
	throwException(ctx, sp[0].o);	}
label_9:;
	{
	LINE_NUMBER(464);
	sp[0].o = (jobject)SM_rhino_v8dtoa_DiyFp_times_rhino_v8dtoa_DiyFp_rhino_v8dtoa_DiyFp_R_rhino_v8dtoa_DiyFp(ctx, (frame[5].o), (frame[8].o));
	frame[10].o = sp[0].o;
	LINE_NUMBER(465);
	if ((clinit_rhino_v8dtoa_FastDtoa(ctx), (jint)SF_rhino_v8dtoa_FastDtoa_$assertionsDisabled) != 0) goto label_13;
	}
	{
	jint temp0 = (jint)((func_rhino_v8dtoa_DiyFp_e_R_int) ((void **) nullCheck(ctx, (frame[10].o))->vtable)[VTABLE_rhino_v8dtoa_DiyFp_e_R_int])(ctx, (frame[10].o));
	sp[0].o = frame[7].o;
	LINE_NUMBER(466);
	jint temp1 = (jint)((func_rhino_v8dtoa_DiyFp_e_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_v8dtoa_DiyFp_e_R_int])(ctx, sp[0].o);
	jint temp2 = (jint)((func_rhino_v8dtoa_DiyFp_e_R_int) ((void **) nullCheck(ctx, (frame[8].o))->vtable)[VTABLE_rhino_v8dtoa_DiyFp_e_R_int])(ctx, (frame[8].o));
	if (temp0 == ((temp1 + temp2) + (64))) goto label_13;
	}
	{
	LINE_NUMBER(465);
	clinit_java_lang_AssertionError(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_AssertionError);
	init_java_lang_AssertionError(ctx, sp[0].o);
	throwException(ctx, sp[0].o);	}
label_13:;
	{
	LINE_NUMBER(472);
	sp[0].o = (jobject)SM_rhino_v8dtoa_DiyFp_times_rhino_v8dtoa_DiyFp_rhino_v8dtoa_DiyFp_R_rhino_v8dtoa_DiyFp(ctx, (frame[6].o), (frame[8].o));
	frame[11].o = sp[0].o;
	LINE_NUMBER(473);
	sp[0].o = (jobject)SM_rhino_v8dtoa_DiyFp_times_rhino_v8dtoa_DiyFp_rhino_v8dtoa_DiyFp_R_rhino_v8dtoa_DiyFp(ctx, (frame[7].o), (frame[8].o));
	frame[12].o = sp[0].o;
	LINE_NUMBER(481);
	jint temp0 = (jint)SM_rhino_v8dtoa_FastDtoa_digitGen_rhino_v8dtoa_DiyFp_rhino_v8dtoa_DiyFp_rhino_v8dtoa_DiyFp_rhino_v8dtoa_FastDtoaBuilder_int_R_boolean(ctx, (frame[11].o), (frame[10].o), (frame[12].o), (frame[2].o), (frame[9].i));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jbool SM_rhino_v8dtoa_FastDtoa_dtoa_double_rhino_v8dtoa_FastDtoaBuilder_R_boolean(jcontext ctx, jdouble param0, jobject param1) {
	jtype frame[7];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/v8dtoa/FastDtoa:dtoa", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_rhino_v8dtoa_FastDtoa(ctx);
	frame[0].d = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(487);
	if ((clinit_rhino_v8dtoa_FastDtoa(ctx), (jint)SF_rhino_v8dtoa_FastDtoa_$assertionsDisabled) != 0) goto label_1;
	}
	{
	if ((doubleCompare((frame[0].d), (jdouble(0)), -1)) > 0) goto label_1;
	}
	{
	clinit_java_lang_AssertionError(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_AssertionError);
	init_java_lang_AssertionError(ctx, sp[0].o);
	throwException(ctx, sp[0].o);	}
label_1:;
	{
	LINE_NUMBER(488);
	if ((clinit_rhino_v8dtoa_FastDtoa(ctx), (jint)SF_rhino_v8dtoa_FastDtoa_$assertionsDisabled) != 0) goto label_2;
	}
	{
	jint temp0 = (jint)SM_java_lang_Double_isNaN_double_R_boolean(ctx, (frame[0].d));
	if (temp0 == 0) goto label_2;
	}
	{
	clinit_java_lang_AssertionError(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_AssertionError);
	init_java_lang_AssertionError(ctx, sp[0].o);
	throwException(ctx, sp[0].o);	}
label_2:;
	{
	LINE_NUMBER(489);
	if ((clinit_rhino_v8dtoa_FastDtoa(ctx), (jint)SF_rhino_v8dtoa_FastDtoa_$assertionsDisabled) != 0) goto label_3;
	}
	{
	jint temp0 = (jint)SM_java_lang_Double_isInfinite_double_R_boolean(ctx, (frame[0].d));
	if (temp0 == 0) goto label_3;
	}
	{
	clinit_java_lang_AssertionError(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_AssertionError);
	init_java_lang_AssertionError(ctx, sp[0].o);
	throwException(ctx, sp[0].o);	}
label_3:;
	{
	LINE_NUMBER(491);
	jint temp0 = (jint)SM_rhino_v8dtoa_FastDtoa_grisu3_double_rhino_v8dtoa_FastDtoaBuilder_R_boolean(ctx, (frame[0].d), (frame[2].o));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jobject SM_rhino_v8dtoa_FastDtoa_numberToString_double_R_java_lang_String(jcontext ctx, jdouble param0) {
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/v8dtoa/FastDtoa:numberToString", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_rhino_v8dtoa_FastDtoa(ctx);
	frame[0].d = param0;
	{
	LINE_NUMBER(495);
	clinit_rhino_v8dtoa_FastDtoaBuilder(ctx);
	sp[0].o = gcAlloc(ctx, &class_rhino_v8dtoa_FastDtoaBuilder);
	init_rhino_v8dtoa_FastDtoaBuilder(ctx, sp[0].o);
	frame[2].o = sp[0].o;
	LINE_NUMBER(496);
	jint temp0 = (jint)SM_rhino_v8dtoa_FastDtoa_numberToString_double_rhino_v8dtoa_FastDtoaBuilder_R_boolean(ctx, (frame[0].d), (frame[2].o));
	if (temp0 == 0) goto label_2;
	}
	{
	sp[0].o = (jobject)((func_rhino_v8dtoa_FastDtoaBuilder_format_R_java_lang_String) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_rhino_v8dtoa_FastDtoaBuilder_format_R_java_lang_String])(ctx, (frame[2].o));
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

jbool SM_rhino_v8dtoa_FastDtoa_numberToString_double_rhino_v8dtoa_FastDtoaBuilder_R_boolean(jcontext ctx, jdouble param0, jobject param1) {
	jtype frame[7];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/v8dtoa/FastDtoa:numberToString", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_rhino_v8dtoa_FastDtoa(ctx);
	frame[0].d = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(500);
	((func_rhino_v8dtoa_FastDtoaBuilder_reset) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_rhino_v8dtoa_FastDtoaBuilder_reset])(ctx, (frame[2].o));
	LINE_NUMBER(501);
	if ((doubleCompare((frame[0].d), (jdouble(0)), 1)) >= 0) goto label_2;
	}
	{
	LINE_NUMBER(502);
	((func_rhino_v8dtoa_FastDtoaBuilder_append_char) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_rhino_v8dtoa_FastDtoaBuilder_append_char])(ctx, (frame[2].o), (45));
	LINE_NUMBER(503);
	frame[0].d = (-(frame[0].d));
	}
label_2:;
	{
	LINE_NUMBER(505);
	jint temp0 = (jint)SM_rhino_v8dtoa_FastDtoa_dtoa_double_rhino_v8dtoa_FastDtoaBuilder_R_boolean(ctx, (frame[0].d), (frame[2].o));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

void clinit_rhino_v8dtoa_FastDtoa(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	SF_rhino_v8dtoa_FastDtoa_kFastDtoaMaximalLength = jint(17);
	SF_rhino_v8dtoa_FastDtoa_minimal_target_exponent = jint(-60);
	SF_rhino_v8dtoa_FastDtoa_maximal_target_exponent = jint(-32);
	SF_rhino_v8dtoa_FastDtoa_kTen4 = jint(10000);
	SF_rhino_v8dtoa_FastDtoa_kTen5 = jint(100000);
	SF_rhino_v8dtoa_FastDtoa_kTen6 = jint(1000000);
	SF_rhino_v8dtoa_FastDtoa_kTen7 = jint(10000000);
	SF_rhino_v8dtoa_FastDtoa_kTen8 = jint(100000000);
	SF_rhino_v8dtoa_FastDtoa_kTen9 = jint(1000000000);
	jtype frame[1];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/v8dtoa/FastDtoa:<clinit>", 1 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_rhino_v8dtoa_FastDtoa(ctx);
	{
	LINE_NUMBER(33);
	jint temp0 = (jint)((func_java_lang_Class_desiredAssertionStatus_R_boolean) ((void **) nullCheck(ctx, (((jobject) &class_rhino_v8dtoa_FastDtoa)))->vtable)[VTABLE_java_lang_Class_desiredAssertionStatus_R_boolean])(ctx, (((jobject) &class_rhino_v8dtoa_FastDtoa)));
	if (temp0 != 0) goto label_1;
	}
	INST_ICONST(1);
	goto label_2;
label_1:;
	INST_ICONST(0);
label_2:;
	clinit_rhino_v8dtoa_FastDtoa(ctx);
	SF_rhino_v8dtoa_FastDtoa_$assertionsDisabled = (--sp)->i;
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void *vtable_rhino_v8dtoa_FastDtoa[] {
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
	{ "kFastDtoaMaximalLength", &class_int, (intptr_t) &SF_rhino_v8dtoa_FastDtoa_kFastDtoaMaximalLength, "I", 24 },
	{ "minimal_target_exponent", &class_int, (intptr_t) &SF_rhino_v8dtoa_FastDtoa_minimal_target_exponent, "I", 24 },
	{ "maximal_target_exponent", &class_int, (intptr_t) &SF_rhino_v8dtoa_FastDtoa_maximal_target_exponent, "I", 24 },
	{ "kTen4", &class_int, (intptr_t) &SF_rhino_v8dtoa_FastDtoa_kTen4, "I", 24 },
	{ "kTen5", &class_int, (intptr_t) &SF_rhino_v8dtoa_FastDtoa_kTen5, "I", 24 },
	{ "kTen6", &class_int, (intptr_t) &SF_rhino_v8dtoa_FastDtoa_kTen6, "I", 24 },
	{ "kTen7", &class_int, (intptr_t) &SF_rhino_v8dtoa_FastDtoa_kTen7, "I", 24 },
	{ "kTen8", &class_int, (intptr_t) &SF_rhino_v8dtoa_FastDtoa_kTen8, "I", 24 },
	{ "kTen9", &class_int, (intptr_t) &SF_rhino_v8dtoa_FastDtoa_kTen9, "I", 24 },
	{ "$assertionsDisabled", &class_boolean, (intptr_t) &SF_rhino_v8dtoa_FastDtoa_$assertionsDisabled, "Z", 4120 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_rhino_v8dtoa_FastDtoa, 0, "()V", 1 },
	{ "roundWeed", (intptr_t) SM_rhino_v8dtoa_FastDtoa_roundWeed_rhino_v8dtoa_FastDtoaBuilder_long_long_long_long_long_R_boolean, 0, "(Lrhino/v8dtoa/FastDtoaBuilder;JJJJJ)Z", 8 },
	{ "biggestPowerTen", (intptr_t) SM_rhino_v8dtoa_FastDtoa_biggestPowerTen_int_int_R_long, 0, "(II)J", 8 },
	{ "uint64_lte", (intptr_t) SM_rhino_v8dtoa_FastDtoa_uint64_lte_long_long_R_boolean, 0, "(JJ)Z", 10 },
	{ "digitGen", (intptr_t) SM_rhino_v8dtoa_FastDtoa_digitGen_rhino_v8dtoa_DiyFp_rhino_v8dtoa_DiyFp_rhino_v8dtoa_DiyFp_rhino_v8dtoa_FastDtoaBuilder_int_R_boolean, 0, "(Lrhino/v8dtoa/DiyFp;Lrhino/v8dtoa/DiyFp;Lrhino/v8dtoa/DiyFp;Lrhino/v8dtoa/FastDtoaBuilder;I)Z", 8 },
	{ "grisu3", (intptr_t) SM_rhino_v8dtoa_FastDtoa_grisu3_double_rhino_v8dtoa_FastDtoaBuilder_R_boolean, 0, "(DLrhino/v8dtoa/FastDtoaBuilder;)Z", 8 },
	{ "dtoa", (intptr_t) SM_rhino_v8dtoa_FastDtoa_dtoa_double_rhino_v8dtoa_FastDtoaBuilder_R_boolean, 0, "(DLrhino/v8dtoa/FastDtoaBuilder;)Z", 9 },
	{ "numberToString", (intptr_t) SM_rhino_v8dtoa_FastDtoa_numberToString_double_R_java_lang_String, 0, "(D)Ljava/lang/String;", 9 },
	{ "numberToString", (intptr_t) SM_rhino_v8dtoa_FastDtoa_numberToString_double_rhino_v8dtoa_FastDtoaBuilder_R_boolean, 0, "(DLrhino/v8dtoa/FastDtoaBuilder;)Z", 9 },
	{ "<clinit>", (intptr_t) clinit_rhino_v8dtoa_FastDtoa, 0, "()V", 8 },
};

Class class_rhino_v8dtoa_FastDtoa{
		.nativeName = (intptr_t) "rhino/v8dtoa/FastDtoa",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(rhino_v8dtoa_FastDtoa),
		.classVtable = (intptr_t) vtable_rhino_v8dtoa_FastDtoa,
		.staticInitializer = (intptr_t) clinit_rhino_v8dtoa_FastDtoa,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_rhino_v8dtoa_FastDtoa,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 33,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 10,
		.nativeFields = (intptr_t) fields,
		.methodCount = 10,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 11,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_rhino_v8dtoa_FastDtoa = registerClass(&class_rhino_v8dtoa_FastDtoa);

}
