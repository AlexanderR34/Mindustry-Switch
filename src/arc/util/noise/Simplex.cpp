#include "arc/util/noise/Simplex.h"
#include "java/lang/Math.h"
#include "java/lang/Object.h"
#include "arc/util/noise/Simplex.h"

extern "C" {

jobject SF_arc_util_noise_Simplex_grad3;
jobject SF_arc_util_noise_Simplex_grad4;
jobject SF_arc_util_noise_Simplex_simplex;

void mark_arc_util_noise_Simplex(jobject object, jint mark, jint depth) {
	if (!object) {
		if (SF_arc_util_noise_Simplex_grad3)
			((gc_mark_ptr) ((jclass) ((jobject) SF_arc_util_noise_Simplex_grad3)->clazz)->markFunction)((jobject) SF_arc_util_noise_Simplex_grad3, mark, depth + 1);
		if (SF_arc_util_noise_Simplex_grad4)
			((gc_mark_ptr) ((jclass) ((jobject) SF_arc_util_noise_Simplex_grad4)->clazz)->markFunction)((jobject) SF_arc_util_noise_Simplex_grad4, mark, depth + 1);
		if (SF_arc_util_noise_Simplex_simplex)
			((gc_mark_ptr) ((jclass) ((jobject) SF_arc_util_noise_Simplex_simplex)->clazz)->markFunction)((jobject) SF_arc_util_noise_Simplex_simplex, mark, depth + 1);
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
	auto self = (arc_util_noise_Simplex *) object;
}

void init_arc_util_noise_Simplex(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/util/noise/Simplex:<init>", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_util_noise_Simplex(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(40);
	init_java_lang_Object(ctx, (frame[0].o));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jfloat SM_arc_util_noise_Simplex_noise2d_int_double_double_double_double_double_R_float(jcontext ctx, jint param0, jdouble param1, jdouble param2, jdouble param3, jdouble param4, jdouble param5) {
	jtype frame[29];
	auto stack = &frame[20];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/util/noise/Simplex:noise2d", 29 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_util_noise_Simplex(ctx);
	frame[0].i = param0;
	frame[1].d = param1;
	frame[3].d = param2;
	frame[5].d = param3;
	frame[7].d = param4;
	frame[9].d = param5;
	{
	LINE_NUMBER(47);
	frame[11].d = (jdouble(0));
	LINE_NUMBER(48);
	frame[13].d = (frame[5].d);
	LINE_NUMBER(49);
	frame[15].d = (jdouble(1));
	LINE_NUMBER(53);
	frame[17].d = (jdouble(0));
	LINE_NUMBER(55);
	frame[19].i = (jint(0));
	}
label_5:;
	{
	if ((doubleCompare((jdouble((frame[19].i))), (frame[1].d), 1)) >= 0) goto label_6;
	}
	{
	LINE_NUMBER(56);
	jdouble temp0 = frame[11].d;
	jdouble temp1 = (jdouble)SM_arc_util_noise_Simplex_raw2d_int_double_double_R_double(ctx, (frame[0].i), ((frame[7].d) * (frame[13].d)), ((frame[9].d) * (frame[13].d)));
	frame[11].d = (temp0 + (((temp1 + (jdouble(1))) / (jdouble(2.0))) * (frame[15].d)));
	LINE_NUMBER(58);
	frame[13].d = ((frame[13].d) * (jdouble(2.0)));
	LINE_NUMBER(59);
	frame[17].d = ((frame[17].d) + (frame[15].d));
	LINE_NUMBER(60);
	frame[15].d = ((frame[15].d) * (frame[3].d));
	LINE_NUMBER(55);
	INST_IINC(19, 1);
	goto label_5;
	}
label_6:;
	{
	LINE_NUMBER(63);
	popStackFrame(ctx);
	return (jfloat(((frame[11].d) / (frame[17].d))));
	}

	popStackFrame(ctx);
}

jfloat SM_arc_util_noise_Simplex_noise3d_int_double_double_double_double_double_double_R_float(jcontext ctx, jint param0, jdouble param1, jdouble param2, jdouble param3, jdouble param4, jdouble param5, jdouble param6) {
	jtype frame[33];
	auto stack = &frame[22];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/util/noise/Simplex:noise3d", 33 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_util_noise_Simplex(ctx);
	frame[0].i = param0;
	frame[1].d = param1;
	frame[3].d = param2;
	frame[5].d = param3;
	frame[7].d = param4;
	frame[9].d = param5;
	frame[11].d = param6;
	{
	LINE_NUMBER(72);
	frame[13].d = (jdouble(0));
	LINE_NUMBER(73);
	frame[15].d = (frame[5].d);
	LINE_NUMBER(74);
	frame[17].d = (jdouble(1));
	LINE_NUMBER(78);
	frame[19].d = (jdouble(0));
	LINE_NUMBER(80);
	frame[21].i = (jint(0));
	}
label_5:;
	{
	if ((doubleCompare((jdouble((frame[21].i))), (frame[1].d), 1)) >= 0) goto label_6;
	}
	{
	LINE_NUMBER(81);
	jdouble temp0 = frame[13].d;
	jdouble temp1 = (jdouble)SM_arc_util_noise_Simplex_raw3d_int_double_double_double_R_double(ctx, (frame[0].i), ((frame[7].d) * (frame[15].d)), ((frame[9].d) * (frame[15].d)), ((frame[11].d) * (frame[15].d)));
	frame[13].d = (temp0 + (((temp1 + (jdouble(1))) / (jdouble(2.0))) * (frame[17].d)));
	LINE_NUMBER(83);
	frame[15].d = ((frame[15].d) * (jdouble(2.0)));
	LINE_NUMBER(84);
	frame[19].d = ((frame[19].d) + (frame[17].d));
	LINE_NUMBER(85);
	frame[17].d = ((frame[17].d) * (frame[3].d));
	LINE_NUMBER(80);
	INST_IINC(21, 1);
	goto label_5;
	}
label_6:;
	{
	LINE_NUMBER(88);
	popStackFrame(ctx);
	return (jfloat(((frame[13].d) / (frame[19].d))));
	}

	popStackFrame(ctx);
}

jfloat SM_arc_util_noise_Simplex_noise4d_double_double_double_double_double_double_double_R_float(jcontext ctx, jdouble param0, jdouble param1, jdouble param2, jdouble param3, jdouble param4, jdouble param5, jdouble param6) {
	jtype frame[35];
	auto stack = &frame[23];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/util/noise/Simplex:noise4d", 35 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_util_noise_Simplex(ctx);
	frame[0].d = param0;
	frame[2].d = param1;
	frame[4].d = param2;
	frame[6].d = param3;
	frame[8].d = param4;
	frame[10].d = param5;
	frame[12].d = param6;
	{
	LINE_NUMBER(97);
	frame[14].d = (jdouble(0));
	LINE_NUMBER(98);
	frame[16].d = (frame[4].d);
	LINE_NUMBER(99);
	frame[18].d = (jdouble(1));
	LINE_NUMBER(103);
	frame[20].d = (jdouble(0));
	LINE_NUMBER(105);
	frame[22].i = (jint(0));
	}
label_5:;
	{
	if ((doubleCompare((jdouble((frame[22].i))), (frame[0].d), 1)) >= 0) goto label_6;
	}
	{
	LINE_NUMBER(106);
	jdouble temp0 = frame[14].d;
	jdouble temp1 = (jdouble)SM_arc_util_noise_Simplex_raw4d_double_double_double_double_R_double(ctx, ((frame[6].d) * (frame[16].d)), ((frame[8].d) * (frame[16].d)), ((frame[10].d) * (frame[16].d)), ((frame[12].d) * (frame[16].d)));
	frame[14].d = (temp0 + (temp1 * (frame[18].d)));
	LINE_NUMBER(108);
	frame[16].d = ((frame[16].d) * (jdouble(2.0)));
	LINE_NUMBER(109);
	frame[20].d = ((frame[20].d) + (frame[18].d));
	LINE_NUMBER(110);
	frame[18].d = ((frame[18].d) * (frame[2].d));
	LINE_NUMBER(105);
	INST_IINC(22, 1);
	goto label_5;
	}
label_6:;
	{
	LINE_NUMBER(113);
	popStackFrame(ctx);
	return (jfloat(((frame[14].d) / (frame[20].d))));
	}

	popStackFrame(ctx);
}

jdouble SM_arc_util_noise_Simplex_raw2d_int_double_double_R_double(jcontext ctx, jint param0, jdouble param1, jdouble param2) {
	jtype frame[57];
	auto stack = &frame[50];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/util/noise/Simplex:raw2d", 57 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_util_noise_Simplex(ctx);
	frame[0].i = param0;
	frame[1].d = param1;
	frame[3].d = param2;
	{
	LINE_NUMBER(122);
	jdouble temp0 = jdouble(0.5);
	jdouble temp1 = (jdouble)SM_java_lang_Math_sqrt_double_R_double(ctx, (jdouble(3.0)));
	frame[11].d = (temp0 * (temp1 - (jdouble(1))));
	LINE_NUMBER(124);
	frame[13].d = (((frame[1].d) + (frame[3].d)) * (frame[11].d));
	LINE_NUMBER(125);
	jint temp2 = (jint)SM_arc_util_noise_Simplex_fastfloor_double_R_int(ctx, ((frame[1].d) + (frame[13].d)));
	frame[15].i = temp2;
	LINE_NUMBER(126);
	jint temp3 = (jint)SM_arc_util_noise_Simplex_fastfloor_double_R_int(ctx, ((frame[3].d) + (frame[13].d)));
	frame[16].i = temp3;
	LINE_NUMBER(128);
	jdouble temp4 = jdouble(3.0);
	jdouble temp5 = (jdouble)SM_java_lang_Math_sqrt_double_R_double(ctx, (jdouble(3.0)));
	frame[17].d = ((temp4 - temp5) / (jdouble(6.0)));
	LINE_NUMBER(129);
	frame[19].d = ((jdouble(((frame[15].i) + (frame[16].i)))) * (frame[17].d));
	LINE_NUMBER(131);
	frame[21].d = ((jdouble((frame[15].i))) - (frame[19].d));
	LINE_NUMBER(132);
	frame[23].d = ((jdouble((frame[16].i))) - (frame[19].d));
	LINE_NUMBER(134);
	frame[25].d = ((frame[1].d) - (frame[21].d));
	LINE_NUMBER(135);
	frame[27].d = ((frame[3].d) - (frame[23].d));
	LINE_NUMBER(140);
	if ((doubleCompare((frame[25].d), (frame[27].d), -1)) <= 0) goto label_11;
	}
	{
	LINE_NUMBER(141);
	frame[29].i = (jint(1));
	LINE_NUMBER(142);
	frame[30].i = (jint(0));
	goto label_15;
	}
label_11:;
	{
	LINE_NUMBER(145);
	frame[29].i = (jint(0));
	LINE_NUMBER(146);
	frame[30].i = (jint(1));
	}
label_15:;
	{
	LINE_NUMBER(152);
	frame[31].d = (((frame[25].d) - (jdouble((frame[29].i)))) + (frame[17].d));
	LINE_NUMBER(153);
	frame[33].d = (((frame[27].d) - (jdouble((frame[30].i)))) + (frame[17].d));
	LINE_NUMBER(154);
	frame[35].d = (((frame[25].d) - (jdouble(1))) + ((jdouble(2.0)) * (frame[17].d)));
	LINE_NUMBER(155);
	frame[37].d = (((frame[27].d) - (jdouble(1))) + ((jdouble(2.0)) * (frame[17].d)));
	LINE_NUMBER(158);
	frame[39].i = ((frame[15].i) & (255));
	LINE_NUMBER(159);
	frame[40].i = ((frame[16].i) & (255));
	LINE_NUMBER(160);
	jint temp0 = frame[0].i;
	jint temp1 = frame[39].i;
	jint temp2 = (jint)SM_arc_util_noise_Simplex_perm_int_int_R_int(ctx, (frame[0].i), (frame[40].i));
	jint temp3 = (jint)SM_arc_util_noise_Simplex_perm_int_int_R_int(ctx, temp0, (temp1 + temp2));
	frame[41].i = (temp3 % (12));
	LINE_NUMBER(161);
	jint temp4 = frame[0].i;
	jint temp5 = (frame[39].i) + (frame[29].i);
	jint temp6 = (jint)SM_arc_util_noise_Simplex_perm_int_int_R_int(ctx, (frame[0].i), ((frame[40].i) + (frame[30].i)));
	jint temp7 = (jint)SM_arc_util_noise_Simplex_perm_int_int_R_int(ctx, temp4, (temp5 + temp6));
	frame[42].i = (temp7 % (12));
	LINE_NUMBER(162);
	jint temp8 = frame[0].i;
	jint temp9 = (frame[39].i) + (jint(1));
	jint temp10 = (jint)SM_arc_util_noise_Simplex_perm_int_int_R_int(ctx, (frame[0].i), ((frame[40].i) + (jint(1))));
	jint temp11 = (jint)SM_arc_util_noise_Simplex_perm_int_int_R_int(ctx, temp8, (temp9 + temp10));
	frame[43].i = (temp11 % (12));
	LINE_NUMBER(165);
	frame[44].d = (((jdouble(0.5)) - ((frame[25].d) * (frame[25].d))) - ((frame[27].d) * (frame[27].d)));
	LINE_NUMBER(166);
	if ((doubleCompare((frame[44].d), (jdouble(0)), 1)) >= 0) goto label_27;
	}
	{
	frame[5].d = (jdouble(0));
	goto label_29;
	}
label_27:;
	{
	LINE_NUMBER(168);
	frame[44].d = ((frame[44].d) * (frame[44].d));
	LINE_NUMBER(169);
	jdouble temp0 = (frame[44].d) * (frame[44].d);
	clinit_arc_util_noise_Simplex(ctx);
	sp[0].o = (jobject)SF_arc_util_noise_Simplex_grad3;
	jdouble temp1 = (jdouble)SM_arc_util_noise_Simplex_dot_Array1_int_double_double_R_double(ctx, ((jobject)ARRAY_ACCESS(jobject, sp[0].o, (frame[41].i))), (frame[25].d), (frame[27].d));
	frame[5].d = (temp0 * temp1);
	}
label_29:;
	{
	LINE_NUMBER(172);
	frame[46].d = (((jdouble(0.5)) - ((frame[31].d) * (frame[31].d))) - ((frame[33].d) * (frame[33].d)));
	LINE_NUMBER(173);
	if ((doubleCompare((frame[46].d), (jdouble(0)), 1)) >= 0) goto label_32;
	}
	{
	frame[7].d = (jdouble(0));
	goto label_34;
	}
label_32:;
	{
	LINE_NUMBER(175);
	frame[46].d = ((frame[46].d) * (frame[46].d));
	LINE_NUMBER(176);
	jdouble temp0 = (frame[46].d) * (frame[46].d);
	clinit_arc_util_noise_Simplex(ctx);
	sp[0].o = (jobject)SF_arc_util_noise_Simplex_grad3;
	jdouble temp1 = (jdouble)SM_arc_util_noise_Simplex_dot_Array1_int_double_double_R_double(ctx, ((jobject)ARRAY_ACCESS(jobject, sp[0].o, (frame[42].i))), (frame[31].d), (frame[33].d));
	frame[7].d = (temp0 * temp1);
	}
label_34:;
	{
	LINE_NUMBER(179);
	frame[48].d = (((jdouble(0.5)) - ((frame[35].d) * (frame[35].d))) - ((frame[37].d) * (frame[37].d)));
	LINE_NUMBER(180);
	if ((doubleCompare((frame[48].d), (jdouble(0)), 1)) >= 0) goto label_37;
	}
	{
	frame[9].d = (jdouble(0));
	goto label_39;
	}
label_37:;
	{
	LINE_NUMBER(182);
	frame[48].d = ((frame[48].d) * (frame[48].d));
	LINE_NUMBER(183);
	jdouble temp0 = (frame[48].d) * (frame[48].d);
	clinit_arc_util_noise_Simplex(ctx);
	sp[0].o = (jobject)SF_arc_util_noise_Simplex_grad3;
	jdouble temp1 = (jdouble)SM_arc_util_noise_Simplex_dot_Array1_int_double_double_R_double(ctx, ((jobject)ARRAY_ACCESS(jobject, sp[0].o, (frame[43].i))), (frame[35].d), (frame[37].d));
	frame[9].d = (temp0 * temp1);
	}
label_39:;
	{
	LINE_NUMBER(188);
	popStackFrame(ctx);
	return ((jdouble(70.0)) * (((frame[5].d) + (frame[7].d)) + (frame[9].d)));
	}

	popStackFrame(ctx);
}

jdouble SM_arc_util_noise_Simplex_raw3d_int_double_double_double_R_double(jcontext ctx, jint param0, jdouble param1, jdouble param2, jdouble param3) {
	jtype frame[86];
	auto stack = &frame[77];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/util/noise/Simplex:raw3d", 86 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_util_noise_Simplex(ctx);
	frame[0].i = param0;
	frame[1].d = param1;
	frame[3].d = param2;
	frame[5].d = param3;
	{
	LINE_NUMBER(196);
	frame[15].d = (jdouble(0.3333333333333333));
	LINE_NUMBER(197);
	frame[17].d = ((((frame[1].d) + (frame[3].d)) + (frame[5].d)) * (frame[15].d));
	LINE_NUMBER(198);
	jint temp0 = (jint)SM_arc_util_noise_Simplex_fastfloor_double_R_int(ctx, ((frame[1].d) + (frame[17].d)));
	frame[19].i = temp0;
	LINE_NUMBER(199);
	jint temp1 = (jint)SM_arc_util_noise_Simplex_fastfloor_double_R_int(ctx, ((frame[3].d) + (frame[17].d)));
	frame[20].i = temp1;
	LINE_NUMBER(200);
	jint temp2 = (jint)SM_arc_util_noise_Simplex_fastfloor_double_R_int(ctx, ((frame[5].d) + (frame[17].d)));
	frame[21].i = temp2;
	LINE_NUMBER(202);
	frame[22].d = (jdouble(0.16666666666666666));
	LINE_NUMBER(203);
	frame[24].d = ((jdouble((((frame[19].i) + (frame[20].i)) + (frame[21].i)))) * (frame[22].d));
	LINE_NUMBER(204);
	frame[26].d = ((jdouble((frame[19].i))) - (frame[24].d));
	LINE_NUMBER(205);
	frame[28].d = ((jdouble((frame[20].i))) - (frame[24].d));
	LINE_NUMBER(206);
	frame[30].d = ((jdouble((frame[21].i))) - (frame[24].d));
	LINE_NUMBER(207);
	frame[32].d = ((frame[1].d) - (frame[26].d));
	LINE_NUMBER(208);
	frame[34].d = ((frame[3].d) - (frame[28].d));
	LINE_NUMBER(209);
	frame[36].d = ((frame[5].d) - (frame[30].d));
	LINE_NUMBER(216);
	if ((doubleCompare((frame[32].d), (frame[34].d), -1)) < 0) goto label_14;
	}
	{
	LINE_NUMBER(217);
	if ((doubleCompare((frame[34].d), (frame[36].d), -1)) < 0) goto label_16;
	}
	{
	LINE_NUMBER(218);
	frame[38].i = (jint(1));
	LINE_NUMBER(219);
	frame[39].i = (jint(0));
	LINE_NUMBER(220);
	frame[40].i = (jint(0));
	LINE_NUMBER(221);
	frame[41].i = (jint(1));
	LINE_NUMBER(222);
	frame[42].i = (jint(1));
	LINE_NUMBER(223);
	frame[43].i = (jint(0));
	goto label_24;
	}
label_16:;
	{
	LINE_NUMBER(225);
	if ((doubleCompare((frame[32].d), (frame[36].d), -1)) < 0) goto label_25;
	}
	{
	LINE_NUMBER(226);
	frame[38].i = (jint(1));
	LINE_NUMBER(227);
	frame[39].i = (jint(0));
	LINE_NUMBER(228);
	frame[40].i = (jint(0));
	LINE_NUMBER(229);
	frame[41].i = (jint(1));
	LINE_NUMBER(230);
	frame[42].i = (jint(0));
	LINE_NUMBER(231);
	frame[43].i = (jint(1));
	goto label_24;
	}
label_25:;
	{
	LINE_NUMBER(234);
	frame[38].i = (jint(0));
	LINE_NUMBER(235);
	frame[39].i = (jint(0));
	LINE_NUMBER(236);
	frame[40].i = (jint(1));
	LINE_NUMBER(237);
	frame[41].i = (jint(1));
	LINE_NUMBER(238);
	frame[42].i = (jint(0));
	LINE_NUMBER(239);
	frame[43].i = (jint(1));
	goto label_24;
	}
label_14:;
	{
	LINE_NUMBER(242);
	if ((doubleCompare((frame[34].d), (frame[36].d), 1)) >= 0) goto label_39;
	}
	{
	LINE_NUMBER(243);
	frame[38].i = (jint(0));
	LINE_NUMBER(244);
	frame[39].i = (jint(0));
	LINE_NUMBER(245);
	frame[40].i = (jint(1));
	LINE_NUMBER(246);
	frame[41].i = (jint(0));
	LINE_NUMBER(247);
	frame[42].i = (jint(1));
	LINE_NUMBER(248);
	frame[43].i = (jint(1));
	goto label_24;
	}
label_39:;
	{
	LINE_NUMBER(250);
	if ((doubleCompare((frame[32].d), (frame[36].d), 1)) >= 0) goto label_47;
	}
	{
	LINE_NUMBER(251);
	frame[38].i = (jint(0));
	LINE_NUMBER(252);
	frame[39].i = (jint(1));
	LINE_NUMBER(253);
	frame[40].i = (jint(0));
	LINE_NUMBER(254);
	frame[41].i = (jint(0));
	LINE_NUMBER(255);
	frame[42].i = (jint(1));
	LINE_NUMBER(256);
	frame[43].i = (jint(1));
	goto label_24;
	}
label_47:;
	{
	LINE_NUMBER(259);
	frame[38].i = (jint(0));
	LINE_NUMBER(260);
	frame[39].i = (jint(1));
	LINE_NUMBER(261);
	frame[40].i = (jint(0));
	LINE_NUMBER(262);
	frame[41].i = (jint(1));
	LINE_NUMBER(263);
	frame[42].i = (jint(1));
	LINE_NUMBER(264);
	frame[43].i = (jint(0));
	}
label_24:;
	{
	LINE_NUMBER(272);
	frame[44].d = (((frame[32].d) - (jdouble((frame[38].i)))) + (frame[22].d));
	LINE_NUMBER(273);
	frame[46].d = (((frame[34].d) - (jdouble((frame[39].i)))) + (frame[22].d));
	LINE_NUMBER(274);
	frame[48].d = (((frame[36].d) - (jdouble((frame[40].i)))) + (frame[22].d));
	LINE_NUMBER(275);
	frame[50].d = (((frame[32].d) - (jdouble((frame[41].i)))) + ((jdouble(2.0)) * (frame[22].d)));
	LINE_NUMBER(276);
	frame[52].d = (((frame[34].d) - (jdouble((frame[42].i)))) + ((jdouble(2.0)) * (frame[22].d)));
	LINE_NUMBER(277);
	frame[54].d = (((frame[36].d) - (jdouble((frame[43].i)))) + ((jdouble(2.0)) * (frame[22].d)));
	LINE_NUMBER(278);
	frame[56].d = (((frame[32].d) - (jdouble(1))) + ((jdouble(3.0)) * (frame[22].d)));
	LINE_NUMBER(279);
	frame[58].d = (((frame[34].d) - (jdouble(1))) + ((jdouble(3.0)) * (frame[22].d)));
	LINE_NUMBER(280);
	frame[60].d = (((frame[36].d) - (jdouble(1))) + ((jdouble(3.0)) * (frame[22].d)));
	LINE_NUMBER(283);
	frame[62].i = ((frame[19].i) & (255));
	LINE_NUMBER(284);
	frame[63].i = ((frame[20].i) & (255));
	LINE_NUMBER(285);
	frame[64].i = ((frame[21].i) & (255));
	LINE_NUMBER(286);
	jint temp0 = frame[0].i;
	jint temp1 = frame[62].i;
	jint temp2 = frame[0].i;
	jint temp3 = frame[63].i;
	jint temp4 = (jint)SM_arc_util_noise_Simplex_perm_int_int_R_int(ctx, (frame[0].i), (frame[64].i));
	jint temp5 = (jint)SM_arc_util_noise_Simplex_perm_int_int_R_int(ctx, temp2, (temp3 + temp4));
	jint temp6 = (jint)SM_arc_util_noise_Simplex_perm_int_int_R_int(ctx, temp0, (temp1 + temp5));
	frame[65].i = (temp6 % (12));
	LINE_NUMBER(287);
	jint temp7 = frame[0].i;
	jint temp8 = (frame[62].i) + (frame[38].i);
	jint temp9 = frame[0].i;
	jint temp10 = (frame[63].i) + (frame[39].i);
	jint temp11 = (jint)SM_arc_util_noise_Simplex_perm_int_int_R_int(ctx, (frame[0].i), ((frame[64].i) + (frame[40].i)));
	jint temp12 = (jint)SM_arc_util_noise_Simplex_perm_int_int_R_int(ctx, temp9, (temp10 + temp11));
	jint temp13 = (jint)SM_arc_util_noise_Simplex_perm_int_int_R_int(ctx, temp7, (temp8 + temp12));
	frame[66].i = (temp13 % (12));
	LINE_NUMBER(288);
	jint temp14 = frame[0].i;
	jint temp15 = (frame[62].i) + (frame[41].i);
	jint temp16 = frame[0].i;
	jint temp17 = (frame[63].i) + (frame[42].i);
	jint temp18 = (jint)SM_arc_util_noise_Simplex_perm_int_int_R_int(ctx, (frame[0].i), ((frame[64].i) + (frame[43].i)));
	jint temp19 = (jint)SM_arc_util_noise_Simplex_perm_int_int_R_int(ctx, temp16, (temp17 + temp18));
	jint temp20 = (jint)SM_arc_util_noise_Simplex_perm_int_int_R_int(ctx, temp14, (temp15 + temp19));
	frame[67].i = (temp20 % (12));
	LINE_NUMBER(289);
	jint temp21 = frame[0].i;
	jint temp22 = (frame[62].i) + (jint(1));
	jint temp23 = frame[0].i;
	jint temp24 = (frame[63].i) + (jint(1));
	jint temp25 = (jint)SM_arc_util_noise_Simplex_perm_int_int_R_int(ctx, (frame[0].i), ((frame[64].i) + (jint(1))));
	jint temp26 = (jint)SM_arc_util_noise_Simplex_perm_int_int_R_int(ctx, temp23, (temp24 + temp25));
	jint temp27 = (jint)SM_arc_util_noise_Simplex_perm_int_int_R_int(ctx, temp21, (temp22 + temp26));
	frame[68].i = (temp27 % (12));
	LINE_NUMBER(292);
	frame[69].d = ((((jdouble(0.6)) - ((frame[32].d) * (frame[32].d))) - ((frame[34].d) * (frame[34].d))) - ((frame[36].d) * (frame[36].d)));
	LINE_NUMBER(293);
	if ((doubleCompare((frame[69].d), (jdouble(0)), 1)) >= 0) goto label_77;
	}
	{
	frame[7].d = (jdouble(0));
	goto label_79;
	}
label_77:;
	{
	LINE_NUMBER(295);
	frame[69].d = ((frame[69].d) * (frame[69].d));
	LINE_NUMBER(296);
	jdouble temp0 = (frame[69].d) * (frame[69].d);
	clinit_arc_util_noise_Simplex(ctx);
	sp[0].o = (jobject)SF_arc_util_noise_Simplex_grad3;
	jdouble temp1 = (jdouble)SM_arc_util_noise_Simplex_dot_Array1_int_double_double_double_R_double(ctx, ((jobject)ARRAY_ACCESS(jobject, sp[0].o, (frame[65].i))), (frame[32].d), (frame[34].d), (frame[36].d));
	frame[7].d = (temp0 * temp1);
	}
label_79:;
	{
	LINE_NUMBER(299);
	frame[71].d = ((((jdouble(0.6)) - ((frame[44].d) * (frame[44].d))) - ((frame[46].d) * (frame[46].d))) - ((frame[48].d) * (frame[48].d)));
	LINE_NUMBER(300);
	if ((doubleCompare((frame[71].d), (jdouble(0)), 1)) >= 0) goto label_82;
	}
	{
	frame[9].d = (jdouble(0));
	goto label_84;
	}
label_82:;
	{
	LINE_NUMBER(302);
	frame[71].d = ((frame[71].d) * (frame[71].d));
	LINE_NUMBER(303);
	jdouble temp0 = (frame[71].d) * (frame[71].d);
	clinit_arc_util_noise_Simplex(ctx);
	sp[0].o = (jobject)SF_arc_util_noise_Simplex_grad3;
	jdouble temp1 = (jdouble)SM_arc_util_noise_Simplex_dot_Array1_int_double_double_double_R_double(ctx, ((jobject)ARRAY_ACCESS(jobject, sp[0].o, (frame[66].i))), (frame[44].d), (frame[46].d), (frame[48].d));
	frame[9].d = (temp0 * temp1);
	}
label_84:;
	{
	LINE_NUMBER(306);
	frame[73].d = ((((jdouble(0.6)) - ((frame[50].d) * (frame[50].d))) - ((frame[52].d) * (frame[52].d))) - ((frame[54].d) * (frame[54].d)));
	LINE_NUMBER(307);
	if ((doubleCompare((frame[73].d), (jdouble(0)), 1)) >= 0) goto label_87;
	}
	{
	frame[11].d = (jdouble(0));
	goto label_89;
	}
label_87:;
	{
	LINE_NUMBER(309);
	frame[73].d = ((frame[73].d) * (frame[73].d));
	LINE_NUMBER(310);
	jdouble temp0 = (frame[73].d) * (frame[73].d);
	clinit_arc_util_noise_Simplex(ctx);
	sp[0].o = (jobject)SF_arc_util_noise_Simplex_grad3;
	jdouble temp1 = (jdouble)SM_arc_util_noise_Simplex_dot_Array1_int_double_double_double_R_double(ctx, ((jobject)ARRAY_ACCESS(jobject, sp[0].o, (frame[67].i))), (frame[50].d), (frame[52].d), (frame[54].d));
	frame[11].d = (temp0 * temp1);
	}
label_89:;
	{
	LINE_NUMBER(313);
	frame[75].d = ((((jdouble(0.6)) - ((frame[56].d) * (frame[56].d))) - ((frame[58].d) * (frame[58].d))) - ((frame[60].d) * (frame[60].d)));
	LINE_NUMBER(314);
	if ((doubleCompare((frame[75].d), (jdouble(0)), 1)) >= 0) goto label_92;
	}
	{
	frame[13].d = (jdouble(0));
	goto label_94;
	}
label_92:;
	{
	LINE_NUMBER(316);
	frame[75].d = ((frame[75].d) * (frame[75].d));
	LINE_NUMBER(317);
	jdouble temp0 = (frame[75].d) * (frame[75].d);
	clinit_arc_util_noise_Simplex(ctx);
	sp[0].o = (jobject)SF_arc_util_noise_Simplex_grad3;
	jdouble temp1 = (jdouble)SM_arc_util_noise_Simplex_dot_Array1_int_double_double_double_R_double(ctx, ((jobject)ARRAY_ACCESS(jobject, sp[0].o, (frame[68].i))), (frame[56].d), (frame[58].d), (frame[60].d));
	frame[13].d = (temp0 * temp1);
	}
label_94:;
	{
	LINE_NUMBER(322);
	popStackFrame(ctx);
	return ((jdouble(32.0)) * ((((frame[7].d) + (frame[9].d)) + (frame[11].d)) + (frame[13].d)));
	}

	popStackFrame(ctx);
}

jdouble SM_arc_util_noise_Simplex_raw4d_double_double_double_double_R_double(jcontext ctx, jdouble param0, jdouble param1, jdouble param2, jdouble param3) {
	jtype frame[127];
	auto stack = &frame[116];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/util/noise/Simplex:raw4d", 127 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_util_noise_Simplex(ctx);
	frame[0].d = param0;
	frame[2].d = param1;
	frame[4].d = param2;
	frame[6].d = param3;
	{
	LINE_NUMBER(329);
	jdouble temp0 = (jdouble)SM_java_lang_Math_sqrt_double_R_double(ctx, (jdouble(5.0)));
	frame[8].d = ((temp0 - (jdouble(1))) / (jdouble(4.0)));
	LINE_NUMBER(330);
	jdouble temp1 = jdouble(5.0);
	jdouble temp2 = (jdouble)SM_java_lang_Math_sqrt_double_R_double(ctx, (jdouble(5.0)));
	frame[10].d = ((temp1 - temp2) / (jdouble(20.0)));
	LINE_NUMBER(334);
	frame[22].d = (((((frame[0].d) + (frame[2].d)) + (frame[4].d)) + (frame[6].d)) * (frame[8].d));
	LINE_NUMBER(335);
	jint temp3 = (jint)SM_arc_util_noise_Simplex_fastfloor_double_R_int(ctx, ((frame[0].d) + (frame[22].d)));
	frame[24].i = temp3;
	LINE_NUMBER(336);
	jint temp4 = (jint)SM_arc_util_noise_Simplex_fastfloor_double_R_int(ctx, ((frame[2].d) + (frame[22].d)));
	frame[25].i = temp4;
	LINE_NUMBER(337);
	jint temp5 = (jint)SM_arc_util_noise_Simplex_fastfloor_double_R_int(ctx, ((frame[4].d) + (frame[22].d)));
	frame[26].i = temp5;
	LINE_NUMBER(338);
	jint temp6 = (jint)SM_arc_util_noise_Simplex_fastfloor_double_R_int(ctx, ((frame[6].d) + (frame[22].d)));
	frame[27].i = temp6;
	LINE_NUMBER(339);
	frame[28].d = ((jdouble(((((frame[24].i) + (frame[25].i)) + (frame[26].i)) + (frame[27].i)))) * (frame[10].d));
	LINE_NUMBER(340);
	frame[30].d = ((jdouble((frame[24].i))) - (frame[28].d));
	LINE_NUMBER(341);
	frame[32].d = ((jdouble((frame[25].i))) - (frame[28].d));
	LINE_NUMBER(342);
	frame[34].d = ((jdouble((frame[26].i))) - (frame[28].d));
	LINE_NUMBER(343);
	frame[36].d = ((jdouble((frame[27].i))) - (frame[28].d));
	LINE_NUMBER(345);
	frame[38].d = ((frame[0].d) - (frame[30].d));
	LINE_NUMBER(346);
	frame[40].d = ((frame[2].d) - (frame[32].d));
	LINE_NUMBER(347);
	frame[42].d = ((frame[4].d) - (frame[34].d));
	LINE_NUMBER(348);
	frame[44].d = ((frame[6].d) - (frame[36].d));
	LINE_NUMBER(358);
	if ((doubleCompare((frame[38].d), (frame[40].d), -1)) <= 0) goto label_17;
	}
	INST_BIPUSH(32);
	goto label_18;
label_17:;
	INST_ICONST(0);
label_18:;
	{
	sp -= 1;
	frame[46].i = sp[0].i;
	LINE_NUMBER(359);
	if ((doubleCompare((frame[38].d), (frame[42].d), -1)) <= 0) goto label_20;
	}
	INST_BIPUSH(16);
	goto label_21;
label_20:;
	INST_ICONST(0);
label_21:;
	{
	sp -= 1;
	frame[47].i = sp[0].i;
	LINE_NUMBER(360);
	if ((doubleCompare((frame[40].d), (frame[42].d), -1)) <= 0) goto label_23;
	}
	INST_BIPUSH(8);
	goto label_24;
label_23:;
	INST_ICONST(0);
label_24:;
	{
	sp -= 1;
	frame[48].i = sp[0].i;
	LINE_NUMBER(361);
	if ((doubleCompare((frame[38].d), (frame[44].d), -1)) <= 0) goto label_26;
	}
	INST_ICONST(4);
	goto label_27;
label_26:;
	INST_ICONST(0);
label_27:;
	{
	sp -= 1;
	frame[49].i = sp[0].i;
	LINE_NUMBER(362);
	if ((doubleCompare((frame[40].d), (frame[44].d), -1)) <= 0) goto label_29;
	}
	INST_ICONST(2);
	goto label_30;
label_29:;
	INST_ICONST(0);
label_30:;
	{
	sp -= 1;
	frame[50].i = sp[0].i;
	LINE_NUMBER(363);
	if ((doubleCompare((frame[42].d), (frame[44].d), -1)) <= 0) goto label_32;
	}
	INST_ICONST(1);
	goto label_33;
label_32:;
	INST_ICONST(0);
label_33:;
	{
	sp -= 1;
	frame[51].i = sp[0].i;
	LINE_NUMBER(364);
	frame[52].i = ((((((frame[46].i) + (frame[47].i)) + (frame[48].i)) + (frame[49].i)) + (frame[50].i)) + (frame[51].i));
	LINE_NUMBER(375);
	clinit_arc_util_noise_Simplex(ctx);
	sp[0].o = (jobject)SF_arc_util_noise_Simplex_simplex;
	if (((jint)ARRAY_ACCESS(jint, ((jobject)ARRAY_ACCESS(jobject, sp[0].o, (frame[52].i))), (jint(0)))) < (jint(3))) goto label_36;
	}
	INST_ICONST(1);
	goto label_37;
label_36:;
	INST_ICONST(0);
label_37:;
	{
	sp -= 1;
	frame[53].i = sp[0].i;
	LINE_NUMBER(376);
	clinit_arc_util_noise_Simplex(ctx);
	sp[0].o = (jobject)SF_arc_util_noise_Simplex_simplex;
	if (((jint)ARRAY_ACCESS(jint, ((jobject)ARRAY_ACCESS(jobject, sp[0].o, (frame[52].i))), (jint(1)))) < (jint(3))) goto label_39;
	}
	INST_ICONST(1);
	goto label_40;
label_39:;
	INST_ICONST(0);
label_40:;
	{
	sp -= 1;
	frame[54].i = sp[0].i;
	LINE_NUMBER(377);
	clinit_arc_util_noise_Simplex(ctx);
	sp[0].o = (jobject)SF_arc_util_noise_Simplex_simplex;
	if (((jint)ARRAY_ACCESS(jint, ((jobject)ARRAY_ACCESS(jobject, sp[0].o, (frame[52].i))), (jint(2)))) < (jint(3))) goto label_42;
	}
	INST_ICONST(1);
	goto label_43;
label_42:;
	INST_ICONST(0);
label_43:;
	{
	sp -= 1;
	frame[55].i = sp[0].i;
	LINE_NUMBER(378);
	clinit_arc_util_noise_Simplex(ctx);
	sp[0].o = (jobject)SF_arc_util_noise_Simplex_simplex;
	if (((jint)ARRAY_ACCESS(jint, ((jobject)ARRAY_ACCESS(jobject, sp[0].o, (frame[52].i))), (jint(3)))) < (jint(3))) goto label_45;
	}
	INST_ICONST(1);
	goto label_46;
label_45:;
	INST_ICONST(0);
label_46:;
	{
	sp -= 1;
	frame[56].i = sp[0].i;
	LINE_NUMBER(380);
	clinit_arc_util_noise_Simplex(ctx);
	sp[0].o = (jobject)SF_arc_util_noise_Simplex_simplex;
	if (((jint)ARRAY_ACCESS(jint, ((jobject)ARRAY_ACCESS(jobject, sp[0].o, (frame[52].i))), (jint(0)))) < (jint(2))) goto label_48;
	}
	INST_ICONST(1);
	goto label_49;
label_48:;
	INST_ICONST(0);
label_49:;
	{
	sp -= 1;
	frame[57].i = sp[0].i;
	LINE_NUMBER(381);
	clinit_arc_util_noise_Simplex(ctx);
	sp[0].o = (jobject)SF_arc_util_noise_Simplex_simplex;
	if (((jint)ARRAY_ACCESS(jint, ((jobject)ARRAY_ACCESS(jobject, sp[0].o, (frame[52].i))), (jint(1)))) < (jint(2))) goto label_51;
	}
	INST_ICONST(1);
	goto label_52;
label_51:;
	INST_ICONST(0);
label_52:;
	{
	sp -= 1;
	frame[58].i = sp[0].i;
	LINE_NUMBER(382);
	clinit_arc_util_noise_Simplex(ctx);
	sp[0].o = (jobject)SF_arc_util_noise_Simplex_simplex;
	if (((jint)ARRAY_ACCESS(jint, ((jobject)ARRAY_ACCESS(jobject, sp[0].o, (frame[52].i))), (jint(2)))) < (jint(2))) goto label_54;
	}
	INST_ICONST(1);
	goto label_55;
label_54:;
	INST_ICONST(0);
label_55:;
	{
	sp -= 1;
	frame[59].i = sp[0].i;
	LINE_NUMBER(383);
	clinit_arc_util_noise_Simplex(ctx);
	sp[0].o = (jobject)SF_arc_util_noise_Simplex_simplex;
	if (((jint)ARRAY_ACCESS(jint, ((jobject)ARRAY_ACCESS(jobject, sp[0].o, (frame[52].i))), (jint(3)))) < (jint(2))) goto label_57;
	}
	INST_ICONST(1);
	goto label_58;
label_57:;
	INST_ICONST(0);
label_58:;
	{
	sp -= 1;
	frame[60].i = sp[0].i;
	LINE_NUMBER(385);
	clinit_arc_util_noise_Simplex(ctx);
	sp[0].o = (jobject)SF_arc_util_noise_Simplex_simplex;
	if (((jint)ARRAY_ACCESS(jint, ((jobject)ARRAY_ACCESS(jobject, sp[0].o, (frame[52].i))), (jint(0)))) < (jint(1))) goto label_60;
	}
	INST_ICONST(1);
	goto label_61;
label_60:;
	INST_ICONST(0);
label_61:;
	{
	sp -= 1;
	frame[61].i = sp[0].i;
	LINE_NUMBER(386);
	clinit_arc_util_noise_Simplex(ctx);
	sp[0].o = (jobject)SF_arc_util_noise_Simplex_simplex;
	if (((jint)ARRAY_ACCESS(jint, ((jobject)ARRAY_ACCESS(jobject, sp[0].o, (frame[52].i))), (jint(1)))) < (jint(1))) goto label_63;
	}
	INST_ICONST(1);
	goto label_64;
label_63:;
	INST_ICONST(0);
label_64:;
	{
	sp -= 1;
	frame[62].i = sp[0].i;
	LINE_NUMBER(387);
	clinit_arc_util_noise_Simplex(ctx);
	sp[0].o = (jobject)SF_arc_util_noise_Simplex_simplex;
	if (((jint)ARRAY_ACCESS(jint, ((jobject)ARRAY_ACCESS(jobject, sp[0].o, (frame[52].i))), (jint(2)))) < (jint(1))) goto label_66;
	}
	INST_ICONST(1);
	goto label_67;
label_66:;
	INST_ICONST(0);
label_67:;
	{
	sp -= 1;
	frame[63].i = sp[0].i;
	LINE_NUMBER(388);
	clinit_arc_util_noise_Simplex(ctx);
	sp[0].o = (jobject)SF_arc_util_noise_Simplex_simplex;
	if (((jint)ARRAY_ACCESS(jint, ((jobject)ARRAY_ACCESS(jobject, sp[0].o, (frame[52].i))), (jint(3)))) < (jint(1))) goto label_69;
	}
	INST_ICONST(1);
	goto label_70;
label_69:;
	INST_ICONST(0);
label_70:;
	{
	sp -= 1;
	frame[64].i = sp[0].i;
	LINE_NUMBER(391);
	frame[65].d = (((frame[38].d) - (jdouble((frame[53].i)))) + (frame[10].d));
	LINE_NUMBER(392);
	frame[67].d = (((frame[40].d) - (jdouble((frame[54].i)))) + (frame[10].d));
	LINE_NUMBER(393);
	frame[69].d = (((frame[42].d) - (jdouble((frame[55].i)))) + (frame[10].d));
	LINE_NUMBER(394);
	frame[71].d = (((frame[44].d) - (jdouble((frame[56].i)))) + (frame[10].d));
	LINE_NUMBER(395);
	frame[73].d = (((frame[38].d) - (jdouble((frame[57].i)))) + ((jdouble(2.0)) * (frame[10].d)));
	LINE_NUMBER(396);
	frame[75].d = (((frame[40].d) - (jdouble((frame[58].i)))) + ((jdouble(2.0)) * (frame[10].d)));
	LINE_NUMBER(397);
	frame[77].d = (((frame[42].d) - (jdouble((frame[59].i)))) + ((jdouble(2.0)) * (frame[10].d)));
	LINE_NUMBER(398);
	frame[79].d = (((frame[44].d) - (jdouble((frame[60].i)))) + ((jdouble(2.0)) * (frame[10].d)));
	LINE_NUMBER(399);
	frame[81].d = (((frame[38].d) - (jdouble((frame[61].i)))) + ((jdouble(3.0)) * (frame[10].d)));
	LINE_NUMBER(400);
	frame[83].d = (((frame[40].d) - (jdouble((frame[62].i)))) + ((jdouble(3.0)) * (frame[10].d)));
	LINE_NUMBER(401);
	frame[85].d = (((frame[42].d) - (jdouble((frame[63].i)))) + ((jdouble(3.0)) * (frame[10].d)));
	LINE_NUMBER(402);
	frame[87].d = (((frame[44].d) - (jdouble((frame[64].i)))) + ((jdouble(3.0)) * (frame[10].d)));
	LINE_NUMBER(403);
	frame[89].d = (((frame[38].d) - (jdouble(1))) + ((jdouble(4.0)) * (frame[10].d)));
	LINE_NUMBER(404);
	frame[91].d = (((frame[40].d) - (jdouble(1))) + ((jdouble(4.0)) * (frame[10].d)));
	LINE_NUMBER(405);
	frame[93].d = (((frame[42].d) - (jdouble(1))) + ((jdouble(4.0)) * (frame[10].d)));
	LINE_NUMBER(406);
	frame[95].d = (((frame[44].d) - (jdouble(1))) + ((jdouble(4.0)) * (frame[10].d)));
	LINE_NUMBER(409);
	frame[97].i = ((frame[24].i) & (255));
	LINE_NUMBER(410);
	frame[98].i = ((frame[25].i) & (255));
	LINE_NUMBER(411);
	frame[99].i = ((frame[26].i) & (255));
	LINE_NUMBER(412);
	frame[100].i = ((frame[27].i) & (255));
	LINE_NUMBER(413);
	frame[101].i = (((frame[97].i) + ((frame[98].i) + ((frame[99].i) + (frame[100].i)))) % (32));
	LINE_NUMBER(414);
	frame[102].i = ((((frame[97].i) + (frame[53].i)) + (((frame[98].i) + (frame[54].i)) + (((frame[99].i) + (frame[55].i)) + ((frame[100].i) + (frame[56].i))))) % (32));
	LINE_NUMBER(415);
	frame[103].i = ((((frame[97].i) + (frame[57].i)) + (((frame[98].i) + (frame[58].i)) + (((frame[99].i) + (frame[59].i)) + ((frame[100].i) + (frame[60].i))))) % (32));
	LINE_NUMBER(416);
	frame[104].i = ((((frame[97].i) + (frame[61].i)) + (((frame[98].i) + (frame[62].i)) + (((frame[99].i) + (frame[63].i)) + ((frame[100].i) + (frame[64].i))))) % (32));
	LINE_NUMBER(417);
	frame[105].i = ((((frame[97].i) + (jint(1))) + (((frame[98].i) + (jint(1))) + (((frame[99].i) + (jint(1))) + ((frame[100].i) + (jint(1)))))) % (32));
	LINE_NUMBER(420);
	frame[106].d = (((((jdouble(0.6)) - ((frame[38].d) * (frame[38].d))) - ((frame[40].d) * (frame[40].d))) - ((frame[42].d) * (frame[42].d))) - ((frame[44].d) * (frame[44].d)));
	LINE_NUMBER(421);
	if ((doubleCompare((frame[106].d), (jdouble(0)), 1)) >= 0) goto label_98;
	}
	{
	frame[12].d = (jdouble(0));
	goto label_100;
	}
label_98:;
	{
	LINE_NUMBER(423);
	frame[106].d = ((frame[106].d) * (frame[106].d));
	LINE_NUMBER(424);
	jdouble temp0 = (frame[106].d) * (frame[106].d);
	clinit_arc_util_noise_Simplex(ctx);
	sp[0].o = (jobject)SF_arc_util_noise_Simplex_grad4;
	jdouble temp1 = (jdouble)SM_arc_util_noise_Simplex_dot_Array1_int_double_double_double_double_R_double(ctx, ((jobject)ARRAY_ACCESS(jobject, sp[0].o, (frame[101].i))), (frame[38].d), (frame[40].d), (frame[42].d), (frame[44].d));
	frame[12].d = (temp0 * temp1);
	}
label_100:;
	{
	LINE_NUMBER(427);
	frame[108].d = (((((jdouble(0.6)) - ((frame[65].d) * (frame[65].d))) - ((frame[67].d) * (frame[67].d))) - ((frame[69].d) * (frame[69].d))) - ((frame[71].d) * (frame[71].d)));
	LINE_NUMBER(428);
	if ((doubleCompare((frame[108].d), (jdouble(0)), 1)) >= 0) goto label_103;
	}
	{
	frame[14].d = (jdouble(0));
	goto label_105;
	}
label_103:;
	{
	LINE_NUMBER(430);
	frame[108].d = ((frame[108].d) * (frame[108].d));
	LINE_NUMBER(431);
	jdouble temp0 = (frame[108].d) * (frame[108].d);
	clinit_arc_util_noise_Simplex(ctx);
	sp[0].o = (jobject)SF_arc_util_noise_Simplex_grad4;
	jdouble temp1 = (jdouble)SM_arc_util_noise_Simplex_dot_Array1_int_double_double_double_double_R_double(ctx, ((jobject)ARRAY_ACCESS(jobject, sp[0].o, (frame[102].i))), (frame[65].d), (frame[67].d), (frame[69].d), (frame[71].d));
	frame[14].d = (temp0 * temp1);
	}
label_105:;
	{
	LINE_NUMBER(434);
	frame[110].d = (((((jdouble(0.6)) - ((frame[73].d) * (frame[73].d))) - ((frame[75].d) * (frame[75].d))) - ((frame[77].d) * (frame[77].d))) - ((frame[79].d) * (frame[79].d)));
	LINE_NUMBER(435);
	if ((doubleCompare((frame[110].d), (jdouble(0)), 1)) >= 0) goto label_108;
	}
	{
	frame[16].d = (jdouble(0));
	goto label_110;
	}
label_108:;
	{
	LINE_NUMBER(437);
	frame[110].d = ((frame[110].d) * (frame[110].d));
	LINE_NUMBER(438);
	jdouble temp0 = (frame[110].d) * (frame[110].d);
	clinit_arc_util_noise_Simplex(ctx);
	sp[0].o = (jobject)SF_arc_util_noise_Simplex_grad4;
	jdouble temp1 = (jdouble)SM_arc_util_noise_Simplex_dot_Array1_int_double_double_double_double_R_double(ctx, ((jobject)ARRAY_ACCESS(jobject, sp[0].o, (frame[103].i))), (frame[73].d), (frame[75].d), (frame[77].d), (frame[79].d));
	frame[16].d = (temp0 * temp1);
	}
label_110:;
	{
	LINE_NUMBER(441);
	frame[112].d = (((((jdouble(0.6)) - ((frame[81].d) * (frame[81].d))) - ((frame[83].d) * (frame[83].d))) - ((frame[85].d) * (frame[85].d))) - ((frame[87].d) * (frame[87].d)));
	LINE_NUMBER(442);
	if ((doubleCompare((frame[112].d), (jdouble(0)), 1)) >= 0) goto label_113;
	}
	{
	frame[18].d = (jdouble(0));
	goto label_115;
	}
label_113:;
	{
	LINE_NUMBER(444);
	frame[112].d = ((frame[112].d) * (frame[112].d));
	LINE_NUMBER(445);
	jdouble temp0 = (frame[112].d) * (frame[112].d);
	clinit_arc_util_noise_Simplex(ctx);
	sp[0].o = (jobject)SF_arc_util_noise_Simplex_grad4;
	jdouble temp1 = (jdouble)SM_arc_util_noise_Simplex_dot_Array1_int_double_double_double_double_R_double(ctx, ((jobject)ARRAY_ACCESS(jobject, sp[0].o, (frame[104].i))), (frame[81].d), (frame[83].d), (frame[85].d), (frame[87].d));
	frame[18].d = (temp0 * temp1);
	}
label_115:;
	{
	LINE_NUMBER(448);
	frame[114].d = (((((jdouble(0.6)) - ((frame[89].d) * (frame[89].d))) - ((frame[91].d) * (frame[91].d))) - ((frame[93].d) * (frame[93].d))) - ((frame[95].d) * (frame[95].d)));
	LINE_NUMBER(449);
	if ((doubleCompare((frame[114].d), (jdouble(0)), 1)) >= 0) goto label_118;
	}
	{
	frame[20].d = (jdouble(0));
	goto label_120;
	}
label_118:;
	{
	LINE_NUMBER(451);
	frame[114].d = ((frame[114].d) * (frame[114].d));
	LINE_NUMBER(452);
	jdouble temp0 = (frame[114].d) * (frame[114].d);
	clinit_arc_util_noise_Simplex(ctx);
	sp[0].o = (jobject)SF_arc_util_noise_Simplex_grad4;
	jdouble temp1 = (jdouble)SM_arc_util_noise_Simplex_dot_Array1_int_double_double_double_double_R_double(ctx, ((jobject)ARRAY_ACCESS(jobject, sp[0].o, (frame[105].i))), (frame[89].d), (frame[91].d), (frame[93].d), (frame[95].d));
	frame[20].d = (temp0 * temp1);
	}
label_120:;
	{
	LINE_NUMBER(456);
	popStackFrame(ctx);
	return ((jdouble(27.0)) * (((((frame[12].d) + (frame[14].d)) + (frame[16].d)) + (frame[18].d)) + (frame[20].d)));
	}

	popStackFrame(ctx);
}

jdouble SM_arc_util_noise_Simplex_rawTiled_double_double_double_double_double_double_double_R_double(jcontext ctx, jdouble param0, jdouble param1, jdouble param2, jdouble param3, jdouble param4, jdouble param5, jdouble param6) {
	jtype frame[42];
	auto stack = &frame[34];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/util/noise/Simplex:rawTiled", 42 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_util_noise_Simplex(ctx);
	frame[0].d = param0;
	frame[2].d = param1;
	frame[4].d = param2;
	frame[6].d = param3;
	frame[8].d = param4;
	frame[10].d = param5;
	frame[12].d = param6;
	{
	LINE_NUMBER(460);
	frame[0].d = ((frame[0].d) / (frame[12].d));
	LINE_NUMBER(461);
	frame[2].d = ((frame[2].d) / (frame[12].d));
	LINE_NUMBER(462);
	frame[8].d = ((frame[8].d) / (frame[12].d));
	LINE_NUMBER(463);
	frame[10].d = ((frame[10].d) / (frame[12].d));
	LINE_NUMBER(465);
	frame[14].d = ((frame[4].d) + (frame[8].d));
	frame[16].d = ((frame[6].d) + (frame[10].d));
	LINE_NUMBER(467);
	frame[18].d = ((frame[0].d) / (frame[8].d));
	frame[20].d = ((frame[2].d) / (frame[10].d));
	LINE_NUMBER(468);
	frame[22].d = ((frame[14].d) - (frame[4].d));
	frame[24].d = ((frame[16].d) - (frame[6].d));
	LINE_NUMBER(470);
	jdouble temp0 = frame[4].d;
	jdouble temp1 = (jdouble)SM_java_lang_Math_cos_double_R_double(ctx, (((frame[18].d) * (jdouble(2.0))) * (jdouble(3.1415927410125732))));
	frame[26].d = (temp0 + ((temp1 * (frame[22].d)) / (jdouble(6.2831854820251465))));
	LINE_NUMBER(471);
	jdouble temp2 = frame[6].d;
	jdouble temp3 = (jdouble)SM_java_lang_Math_cos_double_R_double(ctx, (((frame[20].d) * (jdouble(2.0))) * (jdouble(3.1415927410125732))));
	frame[28].d = (temp2 + ((temp3 * (frame[24].d)) / (jdouble(6.2831854820251465))));
	LINE_NUMBER(472);
	jdouble temp4 = frame[4].d;
	jdouble temp5 = (jdouble)SM_java_lang_Math_sin_double_R_double(ctx, (((frame[18].d) * (jdouble(2.0))) * (jdouble(3.1415927410125732))));
	frame[30].d = (temp4 + ((temp5 * (frame[22].d)) / (jdouble(6.2831854820251465))));
	LINE_NUMBER(473);
	jdouble temp6 = frame[6].d;
	jdouble temp7 = (jdouble)SM_java_lang_Math_sin_double_R_double(ctx, (((frame[20].d) * (jdouble(2.0))) * (jdouble(3.1415927410125732))));
	frame[32].d = (temp6 + ((temp7 * (frame[24].d)) / (jdouble(6.2831854820251465))));
	LINE_NUMBER(475);
	jdouble temp8 = (jdouble)SM_arc_util_noise_Simplex_raw4d_double_double_double_double_R_double(ctx, (frame[26].d), (frame[28].d), (frame[30].d), (frame[32].d));
	popStackFrame(ctx);
	return temp8;
	}

	popStackFrame(ctx);
}

jint SM_arc_util_noise_Simplex_perm_int_int_R_int(jcontext ctx, jint param0, jint param1) {
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/util/noise/Simplex:perm", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_util_noise_Simplex(ctx);
	frame[0].i = param0;
	frame[1].i = param1;
	{
	LINE_NUMBER(481);
	frame[1].i = (((frame[1].i) & (255)) * (jint(73244475)));
	LINE_NUMBER(482);
	frame[1].i = (((bit_cast<jint>(bit_cast<uint32_t>((frame[1].i)) >> (16))) ^ (frame[1].i)) * ((jint(73244475)) + (frame[0].i)));
	LINE_NUMBER(483);
	frame[1].i = ((bit_cast<jint>(bit_cast<uint32_t>((frame[1].i)) >> (16))) ^ (frame[1].i));
	LINE_NUMBER(484);
	popStackFrame(ctx);
	return ((frame[1].i) & (255));
	}

	popStackFrame(ctx);
}

jint SM_arc_util_noise_Simplex_fastfloor_double_R_int(jcontext ctx, jdouble param0) {
	jtype frame[6];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/util/noise/Simplex:fastfloor", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_util_noise_Simplex(ctx);
	frame[0].d = param0;
	{
	LINE_NUMBER(488);
	if ((doubleCompare((frame[0].d), (jdouble(0)), -1)) <= 0) goto label_1;
	}
	{
	jint temp0 = jint((frame[0].d));
	sp[0].i = temp0;
	sp += 1;
	goto label_2;
	}
label_1:;
	{
	jint temp0 = (jint((frame[0].d))) - (jint(1));
	sp[0].i = temp0;
	sp += 1;
	}
label_2:;
	popStackFrame(ctx);
	INST_IRETURN();

	popStackFrame(ctx);
}

jdouble SM_arc_util_noise_Simplex_dot_Array1_int_double_double_R_double(jcontext ctx, jobject param0, jdouble param1, jdouble param2) {
	jtype frame[11];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/util/noise/Simplex:dot", 11 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_util_noise_Simplex(ctx);
	frame[0].o = param0;
	frame[1].d = param1;
	frame[3].d = param2;
	{
	LINE_NUMBER(492);
	popStackFrame(ctx);
	return (((jdouble(((jint)ARRAY_ACCESS(jint, (frame[0].o), (jint(0)))))) * (frame[1].d)) + ((jdouble(((jint)ARRAY_ACCESS(jint, (frame[0].o), (jint(1)))))) * (frame[3].d)));
	}

	popStackFrame(ctx);
}

jdouble SM_arc_util_noise_Simplex_dot_Array1_int_double_double_double_R_double(jcontext ctx, jobject param0, jdouble param1, jdouble param2, jdouble param3) {
	jtype frame[13];
	auto stack = &frame[7];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/util/noise/Simplex:dot", 13 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_util_noise_Simplex(ctx);
	frame[0].o = param0;
	frame[1].d = param1;
	frame[3].d = param2;
	frame[5].d = param3;
	{
	LINE_NUMBER(496);
	popStackFrame(ctx);
	return ((((jdouble(((jint)ARRAY_ACCESS(jint, (frame[0].o), (jint(0)))))) * (frame[1].d)) + ((jdouble(((jint)ARRAY_ACCESS(jint, (frame[0].o), (jint(1)))))) * (frame[3].d))) + ((jdouble(((jint)ARRAY_ACCESS(jint, (frame[0].o), (jint(2)))))) * (frame[5].d)));
	}

	popStackFrame(ctx);
}

jdouble SM_arc_util_noise_Simplex_dot_Array1_int_double_double_double_double_R_double(jcontext ctx, jobject param0, jdouble param1, jdouble param2, jdouble param3, jdouble param4) {
	jtype frame[15];
	auto stack = &frame[9];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/util/noise/Simplex:dot", 15 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_util_noise_Simplex(ctx);
	frame[0].o = param0;
	frame[1].d = param1;
	frame[3].d = param2;
	frame[5].d = param3;
	frame[7].d = param4;
	{
	LINE_NUMBER(500);
	popStackFrame(ctx);
	return (((((jdouble(((jint)ARRAY_ACCESS(jint, (frame[0].o), (jint(0)))))) * (frame[1].d)) + ((jdouble(((jint)ARRAY_ACCESS(jint, (frame[0].o), (jint(1)))))) * (frame[3].d))) + ((jdouble(((jint)ARRAY_ACCESS(jint, (frame[0].o), (jint(2)))))) * (frame[5].d))) + ((jdouble(((jint)ARRAY_ACCESS(jint, (frame[0].o), (jint(3)))))) * (frame[7].d)));
	}

	popStackFrame(ctx);
}

void clinit_arc_util_noise_Simplex(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	jtype frame[7];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/util/noise/Simplex:<clinit>", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_util_noise_Simplex(ctx);
	{
	LINE_NUMBER(12);
	sp[0].o = (jobject)createArray(ctx, getArrayClass(&class_int, 1), (12));
	jint temp0 = jint(0);
	sp[1].o = (jobject) createArray(ctx, &class_int, (jint(3)));
	ARRAY_ACCESS(jint, sp[1].o, (jint(0))) = (jint(1));
	ARRAY_ACCESS(jint, sp[1].o, (jint(1))) = (jint(1));
	ARRAY_ACCESS(jint, sp[1].o, (jint(2))) = (jint(0));
	ARRAY_ACCESS(jobject, sp[0].o, temp0) = sp[1].o;
	jint temp1 = jint(1);
	sp[1].o = (jobject) createArray(ctx, &class_int, (jint(3)));
	ARRAY_ACCESS(jint, sp[1].o, (jint(0))) = (jint(-1));
	ARRAY_ACCESS(jint, sp[1].o, (jint(1))) = (jint(1));
	ARRAY_ACCESS(jint, sp[1].o, (jint(2))) = (jint(0));
	ARRAY_ACCESS(jobject, sp[0].o, temp1) = sp[1].o;
	jint temp2 = jint(2);
	sp[1].o = (jobject) createArray(ctx, &class_int, (jint(3)));
	ARRAY_ACCESS(jint, sp[1].o, (jint(0))) = (jint(1));
	ARRAY_ACCESS(jint, sp[1].o, (jint(1))) = (jint(-1));
	ARRAY_ACCESS(jint, sp[1].o, (jint(2))) = (jint(0));
	ARRAY_ACCESS(jobject, sp[0].o, temp2) = sp[1].o;
	jint temp3 = jint(3);
	sp[1].o = (jobject) createArray(ctx, &class_int, (jint(3)));
	ARRAY_ACCESS(jint, sp[1].o, (jint(0))) = (jint(-1));
	ARRAY_ACCESS(jint, sp[1].o, (jint(1))) = (jint(-1));
	ARRAY_ACCESS(jint, sp[1].o, (jint(2))) = (jint(0));
	ARRAY_ACCESS(jobject, sp[0].o, temp3) = sp[1].o;
	jint temp4 = jint(4);
	sp[1].o = (jobject) createArray(ctx, &class_int, (jint(3)));
	ARRAY_ACCESS(jint, sp[1].o, (jint(0))) = (jint(1));
	ARRAY_ACCESS(jint, sp[1].o, (jint(1))) = (jint(0));
	ARRAY_ACCESS(jint, sp[1].o, (jint(2))) = (jint(1));
	ARRAY_ACCESS(jobject, sp[0].o, temp4) = sp[1].o;
	jint temp5 = jint(5);
	sp[1].o = (jobject) createArray(ctx, &class_int, (jint(3)));
	ARRAY_ACCESS(jint, sp[1].o, (jint(0))) = (jint(-1));
	ARRAY_ACCESS(jint, sp[1].o, (jint(1))) = (jint(0));
	ARRAY_ACCESS(jint, sp[1].o, (jint(2))) = (jint(1));
	ARRAY_ACCESS(jobject, sp[0].o, temp5) = sp[1].o;
	jint temp6 = 6;
	sp[1].o = (jobject) createArray(ctx, &class_int, (jint(3)));
	ARRAY_ACCESS(jint, sp[1].o, (jint(0))) = (jint(1));
	ARRAY_ACCESS(jint, sp[1].o, (jint(1))) = (jint(0));
	ARRAY_ACCESS(jint, sp[1].o, (jint(2))) = (jint(-1));
	ARRAY_ACCESS(jobject, sp[0].o, temp6) = sp[1].o;
	jint temp7 = 7;
	sp[1].o = (jobject) createArray(ctx, &class_int, (jint(3)));
	ARRAY_ACCESS(jint, sp[1].o, (jint(0))) = (jint(-1));
	ARRAY_ACCESS(jint, sp[1].o, (jint(1))) = (jint(0));
	ARRAY_ACCESS(jint, sp[1].o, (jint(2))) = (jint(-1));
	ARRAY_ACCESS(jobject, sp[0].o, temp7) = sp[1].o;
	jint temp8 = 8;
	sp[1].o = (jobject) createArray(ctx, &class_int, (jint(3)));
	ARRAY_ACCESS(jint, sp[1].o, (jint(0))) = (jint(0));
	ARRAY_ACCESS(jint, sp[1].o, (jint(1))) = (jint(1));
	ARRAY_ACCESS(jint, sp[1].o, (jint(2))) = (jint(1));
	ARRAY_ACCESS(jobject, sp[0].o, temp8) = sp[1].o;
	jint temp9 = 9;
	sp[1].o = (jobject) createArray(ctx, &class_int, (jint(3)));
	ARRAY_ACCESS(jint, sp[1].o, (jint(0))) = (jint(0));
	ARRAY_ACCESS(jint, sp[1].o, (jint(1))) = (jint(-1));
	ARRAY_ACCESS(jint, sp[1].o, (jint(2))) = (jint(1));
	ARRAY_ACCESS(jobject, sp[0].o, temp9) = sp[1].o;
	jint temp10 = 10;
	sp[1].o = (jobject) createArray(ctx, &class_int, (jint(3)));
	ARRAY_ACCESS(jint, sp[1].o, (jint(0))) = (jint(0));
	ARRAY_ACCESS(jint, sp[1].o, (jint(1))) = (jint(1));
	ARRAY_ACCESS(jint, sp[1].o, (jint(2))) = (jint(-1));
	ARRAY_ACCESS(jobject, sp[0].o, temp10) = sp[1].o;
	jint temp11 = 11;
	sp[1].o = (jobject) createArray(ctx, &class_int, (jint(3)));
	ARRAY_ACCESS(jint, sp[1].o, (jint(0))) = (jint(0));
	ARRAY_ACCESS(jint, sp[1].o, (jint(1))) = (jint(-1));
	ARRAY_ACCESS(jint, sp[1].o, (jint(2))) = (jint(-1));
	ARRAY_ACCESS(jobject, sp[0].o, temp11) = sp[1].o;
	clinit_arc_util_noise_Simplex(ctx);
	SF_arc_util_noise_Simplex_grad3 = sp[0].o;
	LINE_NUMBER(18);
	sp[0].o = (jobject)createArray(ctx, getArrayClass(&class_int, 1), (32));
	jint temp12 = jint(0);
	sp[1].o = (jobject) createArray(ctx, &class_int, (jint(4)));
	ARRAY_ACCESS(jint, sp[1].o, (jint(0))) = (jint(0));
	ARRAY_ACCESS(jint, sp[1].o, (jint(1))) = (jint(1));
	ARRAY_ACCESS(jint, sp[1].o, (jint(2))) = (jint(1));
	ARRAY_ACCESS(jint, sp[1].o, (jint(3))) = (jint(1));
	ARRAY_ACCESS(jobject, sp[0].o, temp12) = sp[1].o;
	jint temp13 = jint(1);
	sp[1].o = (jobject) createArray(ctx, &class_int, (jint(4)));
	ARRAY_ACCESS(jint, sp[1].o, (jint(0))) = (jint(0));
	ARRAY_ACCESS(jint, sp[1].o, (jint(1))) = (jint(1));
	ARRAY_ACCESS(jint, sp[1].o, (jint(2))) = (jint(1));
	ARRAY_ACCESS(jint, sp[1].o, (jint(3))) = (jint(-1));
	ARRAY_ACCESS(jobject, sp[0].o, temp13) = sp[1].o;
	jint temp14 = jint(2);
	sp[1].o = (jobject) createArray(ctx, &class_int, (jint(4)));
	ARRAY_ACCESS(jint, sp[1].o, (jint(0))) = (jint(0));
	ARRAY_ACCESS(jint, sp[1].o, (jint(1))) = (jint(1));
	ARRAY_ACCESS(jint, sp[1].o, (jint(2))) = (jint(-1));
	ARRAY_ACCESS(jint, sp[1].o, (jint(3))) = (jint(1));
	ARRAY_ACCESS(jobject, sp[0].o, temp14) = sp[1].o;
	jint temp15 = jint(3);
	sp[1].o = (jobject) createArray(ctx, &class_int, (jint(4)));
	ARRAY_ACCESS(jint, sp[1].o, (jint(0))) = (jint(0));
	ARRAY_ACCESS(jint, sp[1].o, (jint(1))) = (jint(1));
	ARRAY_ACCESS(jint, sp[1].o, (jint(2))) = (jint(-1));
	ARRAY_ACCESS(jint, sp[1].o, (jint(3))) = (jint(-1));
	ARRAY_ACCESS(jobject, sp[0].o, temp15) = sp[1].o;
	jint temp16 = jint(4);
	sp[1].o = (jobject) createArray(ctx, &class_int, (jint(4)));
	ARRAY_ACCESS(jint, sp[1].o, (jint(0))) = (jint(0));
	ARRAY_ACCESS(jint, sp[1].o, (jint(1))) = (jint(-1));
	ARRAY_ACCESS(jint, sp[1].o, (jint(2))) = (jint(1));
	ARRAY_ACCESS(jint, sp[1].o, (jint(3))) = (jint(1));
	ARRAY_ACCESS(jobject, sp[0].o, temp16) = sp[1].o;
	jint temp17 = jint(5);
	sp[1].o = (jobject) createArray(ctx, &class_int, (jint(4)));
	ARRAY_ACCESS(jint, sp[1].o, (jint(0))) = (jint(0));
	ARRAY_ACCESS(jint, sp[1].o, (jint(1))) = (jint(-1));
	ARRAY_ACCESS(jint, sp[1].o, (jint(2))) = (jint(1));
	ARRAY_ACCESS(jint, sp[1].o, (jint(3))) = (jint(-1));
	ARRAY_ACCESS(jobject, sp[0].o, temp17) = sp[1].o;
	jint temp18 = 6;
	sp[1].o = (jobject) createArray(ctx, &class_int, (jint(4)));
	ARRAY_ACCESS(jint, sp[1].o, (jint(0))) = (jint(0));
	ARRAY_ACCESS(jint, sp[1].o, (jint(1))) = (jint(-1));
	ARRAY_ACCESS(jint, sp[1].o, (jint(2))) = (jint(-1));
	ARRAY_ACCESS(jint, sp[1].o, (jint(3))) = (jint(1));
	ARRAY_ACCESS(jobject, sp[0].o, temp18) = sp[1].o;
	jint temp19 = 7;
	sp[1].o = (jobject) createArray(ctx, &class_int, (jint(4)));
	ARRAY_ACCESS(jint, sp[1].o, (jint(0))) = (jint(0));
	ARRAY_ACCESS(jint, sp[1].o, (jint(1))) = (jint(-1));
	ARRAY_ACCESS(jint, sp[1].o, (jint(2))) = (jint(-1));
	ARRAY_ACCESS(jint, sp[1].o, (jint(3))) = (jint(-1));
	ARRAY_ACCESS(jobject, sp[0].o, temp19) = sp[1].o;
	jint temp20 = 8;
	sp[1].o = (jobject) createArray(ctx, &class_int, (jint(4)));
	ARRAY_ACCESS(jint, sp[1].o, (jint(0))) = (jint(1));
	ARRAY_ACCESS(jint, sp[1].o, (jint(1))) = (jint(0));
	ARRAY_ACCESS(jint, sp[1].o, (jint(2))) = (jint(1));
	ARRAY_ACCESS(jint, sp[1].o, (jint(3))) = (jint(1));
	ARRAY_ACCESS(jobject, sp[0].o, temp20) = sp[1].o;
	jint temp21 = 9;
	sp[1].o = (jobject) createArray(ctx, &class_int, (jint(4)));
	ARRAY_ACCESS(jint, sp[1].o, (jint(0))) = (jint(1));
	ARRAY_ACCESS(jint, sp[1].o, (jint(1))) = (jint(0));
	ARRAY_ACCESS(jint, sp[1].o, (jint(2))) = (jint(1));
	ARRAY_ACCESS(jint, sp[1].o, (jint(3))) = (jint(-1));
	ARRAY_ACCESS(jobject, sp[0].o, temp21) = sp[1].o;
	jint temp22 = 10;
	sp[1].o = (jobject) createArray(ctx, &class_int, (jint(4)));
	ARRAY_ACCESS(jint, sp[1].o, (jint(0))) = (jint(1));
	ARRAY_ACCESS(jint, sp[1].o, (jint(1))) = (jint(0));
	ARRAY_ACCESS(jint, sp[1].o, (jint(2))) = (jint(-1));
	ARRAY_ACCESS(jint, sp[1].o, (jint(3))) = (jint(1));
	ARRAY_ACCESS(jobject, sp[0].o, temp22) = sp[1].o;
	jint temp23 = 11;
	sp[1].o = (jobject) createArray(ctx, &class_int, (jint(4)));
	ARRAY_ACCESS(jint, sp[1].o, (jint(0))) = (jint(1));
	ARRAY_ACCESS(jint, sp[1].o, (jint(1))) = (jint(0));
	ARRAY_ACCESS(jint, sp[1].o, (jint(2))) = (jint(-1));
	ARRAY_ACCESS(jint, sp[1].o, (jint(3))) = (jint(-1));
	ARRAY_ACCESS(jobject, sp[0].o, temp23) = sp[1].o;
	jint temp24 = 12;
	sp[1].o = (jobject) createArray(ctx, &class_int, (jint(4)));
	ARRAY_ACCESS(jint, sp[1].o, (jint(0))) = (jint(-1));
	ARRAY_ACCESS(jint, sp[1].o, (jint(1))) = (jint(0));
	ARRAY_ACCESS(jint, sp[1].o, (jint(2))) = (jint(1));
	ARRAY_ACCESS(jint, sp[1].o, (jint(3))) = (jint(1));
	ARRAY_ACCESS(jobject, sp[0].o, temp24) = sp[1].o;
	jint temp25 = 13;
	sp[1].o = (jobject) createArray(ctx, &class_int, (jint(4)));
	ARRAY_ACCESS(jint, sp[1].o, (jint(0))) = (jint(-1));
	ARRAY_ACCESS(jint, sp[1].o, (jint(1))) = (jint(0));
	ARRAY_ACCESS(jint, sp[1].o, (jint(2))) = (jint(1));
	ARRAY_ACCESS(jint, sp[1].o, (jint(3))) = (jint(-1));
	ARRAY_ACCESS(jobject, sp[0].o, temp25) = sp[1].o;
	jint temp26 = 14;
	sp[1].o = (jobject) createArray(ctx, &class_int, (jint(4)));
	ARRAY_ACCESS(jint, sp[1].o, (jint(0))) = (jint(-1));
	ARRAY_ACCESS(jint, sp[1].o, (jint(1))) = (jint(0));
	ARRAY_ACCESS(jint, sp[1].o, (jint(2))) = (jint(-1));
	ARRAY_ACCESS(jint, sp[1].o, (jint(3))) = (jint(1));
	ARRAY_ACCESS(jobject, sp[0].o, temp26) = sp[1].o;
	jint temp27 = 15;
	sp[1].o = (jobject) createArray(ctx, &class_int, (jint(4)));
	ARRAY_ACCESS(jint, sp[1].o, (jint(0))) = (jint(-1));
	ARRAY_ACCESS(jint, sp[1].o, (jint(1))) = (jint(0));
	ARRAY_ACCESS(jint, sp[1].o, (jint(2))) = (jint(-1));
	ARRAY_ACCESS(jint, sp[1].o, (jint(3))) = (jint(-1));
	ARRAY_ACCESS(jobject, sp[0].o, temp27) = sp[1].o;
	jint temp28 = 16;
	sp[1].o = (jobject) createArray(ctx, &class_int, (jint(4)));
	ARRAY_ACCESS(jint, sp[1].o, (jint(0))) = (jint(1));
	ARRAY_ACCESS(jint, sp[1].o, (jint(1))) = (jint(1));
	ARRAY_ACCESS(jint, sp[1].o, (jint(2))) = (jint(0));
	ARRAY_ACCESS(jint, sp[1].o, (jint(3))) = (jint(1));
	ARRAY_ACCESS(jobject, sp[0].o, temp28) = sp[1].o;
	jint temp29 = 17;
	sp[1].o = (jobject) createArray(ctx, &class_int, (jint(4)));
	ARRAY_ACCESS(jint, sp[1].o, (jint(0))) = (jint(1));
	ARRAY_ACCESS(jint, sp[1].o, (jint(1))) = (jint(1));
	ARRAY_ACCESS(jint, sp[1].o, (jint(2))) = (jint(0));
	ARRAY_ACCESS(jint, sp[1].o, (jint(3))) = (jint(-1));
	ARRAY_ACCESS(jobject, sp[0].o, temp29) = sp[1].o;
	jint temp30 = 18;
	sp[1].o = (jobject) createArray(ctx, &class_int, (jint(4)));
	ARRAY_ACCESS(jint, sp[1].o, (jint(0))) = (jint(1));
	ARRAY_ACCESS(jint, sp[1].o, (jint(1))) = (jint(-1));
	ARRAY_ACCESS(jint, sp[1].o, (jint(2))) = (jint(0));
	ARRAY_ACCESS(jint, sp[1].o, (jint(3))) = (jint(1));
	ARRAY_ACCESS(jobject, sp[0].o, temp30) = sp[1].o;
	jint temp31 = 19;
	sp[1].o = (jobject) createArray(ctx, &class_int, (jint(4)));
	ARRAY_ACCESS(jint, sp[1].o, (jint(0))) = (jint(1));
	ARRAY_ACCESS(jint, sp[1].o, (jint(1))) = (jint(-1));
	ARRAY_ACCESS(jint, sp[1].o, (jint(2))) = (jint(0));
	ARRAY_ACCESS(jint, sp[1].o, (jint(3))) = (jint(-1));
	ARRAY_ACCESS(jobject, sp[0].o, temp31) = sp[1].o;
	jint temp32 = 20;
	sp[1].o = (jobject) createArray(ctx, &class_int, (jint(4)));
	ARRAY_ACCESS(jint, sp[1].o, (jint(0))) = (jint(-1));
	ARRAY_ACCESS(jint, sp[1].o, (jint(1))) = (jint(1));
	ARRAY_ACCESS(jint, sp[1].o, (jint(2))) = (jint(0));
	ARRAY_ACCESS(jint, sp[1].o, (jint(3))) = (jint(1));
	ARRAY_ACCESS(jobject, sp[0].o, temp32) = sp[1].o;
	jint temp33 = 21;
	sp[1].o = (jobject) createArray(ctx, &class_int, (jint(4)));
	ARRAY_ACCESS(jint, sp[1].o, (jint(0))) = (jint(-1));
	ARRAY_ACCESS(jint, sp[1].o, (jint(1))) = (jint(1));
	ARRAY_ACCESS(jint, sp[1].o, (jint(2))) = (jint(0));
	ARRAY_ACCESS(jint, sp[1].o, (jint(3))) = (jint(-1));
	ARRAY_ACCESS(jobject, sp[0].o, temp33) = sp[1].o;
	jint temp34 = 22;
	sp[1].o = (jobject) createArray(ctx, &class_int, (jint(4)));
	ARRAY_ACCESS(jint, sp[1].o, (jint(0))) = (jint(-1));
	ARRAY_ACCESS(jint, sp[1].o, (jint(1))) = (jint(-1));
	ARRAY_ACCESS(jint, sp[1].o, (jint(2))) = (jint(0));
	ARRAY_ACCESS(jint, sp[1].o, (jint(3))) = (jint(1));
	ARRAY_ACCESS(jobject, sp[0].o, temp34) = sp[1].o;
	jint temp35 = 23;
	sp[1].o = (jobject) createArray(ctx, &class_int, (jint(4)));
	ARRAY_ACCESS(jint, sp[1].o, (jint(0))) = (jint(-1));
	ARRAY_ACCESS(jint, sp[1].o, (jint(1))) = (jint(-1));
	ARRAY_ACCESS(jint, sp[1].o, (jint(2))) = (jint(0));
	ARRAY_ACCESS(jint, sp[1].o, (jint(3))) = (jint(-1));
	ARRAY_ACCESS(jobject, sp[0].o, temp35) = sp[1].o;
	jint temp36 = 24;
	sp[1].o = (jobject) createArray(ctx, &class_int, (jint(4)));
	ARRAY_ACCESS(jint, sp[1].o, (jint(0))) = (jint(1));
	ARRAY_ACCESS(jint, sp[1].o, (jint(1))) = (jint(1));
	ARRAY_ACCESS(jint, sp[1].o, (jint(2))) = (jint(1));
	ARRAY_ACCESS(jint, sp[1].o, (jint(3))) = (jint(0));
	ARRAY_ACCESS(jobject, sp[0].o, temp36) = sp[1].o;
	jint temp37 = 25;
	sp[1].o = (jobject) createArray(ctx, &class_int, (jint(4)));
	ARRAY_ACCESS(jint, sp[1].o, (jint(0))) = (jint(1));
	ARRAY_ACCESS(jint, sp[1].o, (jint(1))) = (jint(1));
	ARRAY_ACCESS(jint, sp[1].o, (jint(2))) = (jint(-1));
	ARRAY_ACCESS(jint, sp[1].o, (jint(3))) = (jint(0));
	ARRAY_ACCESS(jobject, sp[0].o, temp37) = sp[1].o;
	jint temp38 = 26;
	sp[1].o = (jobject) createArray(ctx, &class_int, (jint(4)));
	ARRAY_ACCESS(jint, sp[1].o, (jint(0))) = (jint(1));
	ARRAY_ACCESS(jint, sp[1].o, (jint(1))) = (jint(-1));
	ARRAY_ACCESS(jint, sp[1].o, (jint(2))) = (jint(1));
	ARRAY_ACCESS(jint, sp[1].o, (jint(3))) = (jint(0));
	ARRAY_ACCESS(jobject, sp[0].o, temp38) = sp[1].o;
	jint temp39 = 27;
	sp[1].o = (jobject) createArray(ctx, &class_int, (jint(4)));
	ARRAY_ACCESS(jint, sp[1].o, (jint(0))) = (jint(1));
	ARRAY_ACCESS(jint, sp[1].o, (jint(1))) = (jint(-1));
	ARRAY_ACCESS(jint, sp[1].o, (jint(2))) = (jint(-1));
	ARRAY_ACCESS(jint, sp[1].o, (jint(3))) = (jint(0));
	ARRAY_ACCESS(jobject, sp[0].o, temp39) = sp[1].o;
	jint temp40 = 28;
	sp[1].o = (jobject) createArray(ctx, &class_int, (jint(4)));
	ARRAY_ACCESS(jint, sp[1].o, (jint(0))) = (jint(-1));
	ARRAY_ACCESS(jint, sp[1].o, (jint(1))) = (jint(1));
	ARRAY_ACCESS(jint, sp[1].o, (jint(2))) = (jint(1));
	ARRAY_ACCESS(jint, sp[1].o, (jint(3))) = (jint(0));
	ARRAY_ACCESS(jobject, sp[0].o, temp40) = sp[1].o;
	jint temp41 = 29;
	sp[1].o = (jobject) createArray(ctx, &class_int, (jint(4)));
	ARRAY_ACCESS(jint, sp[1].o, (jint(0))) = (jint(-1));
	ARRAY_ACCESS(jint, sp[1].o, (jint(1))) = (jint(1));
	ARRAY_ACCESS(jint, sp[1].o, (jint(2))) = (jint(-1));
	ARRAY_ACCESS(jint, sp[1].o, (jint(3))) = (jint(0));
	ARRAY_ACCESS(jobject, sp[0].o, temp41) = sp[1].o;
	jint temp42 = 30;
	sp[1].o = (jobject) createArray(ctx, &class_int, (jint(4)));
	ARRAY_ACCESS(jint, sp[1].o, (jint(0))) = (jint(-1));
	ARRAY_ACCESS(jint, sp[1].o, (jint(1))) = (jint(-1));
	ARRAY_ACCESS(jint, sp[1].o, (jint(2))) = (jint(1));
	ARRAY_ACCESS(jint, sp[1].o, (jint(3))) = (jint(0));
	ARRAY_ACCESS(jobject, sp[0].o, temp42) = sp[1].o;
	jint temp43 = 31;
	sp[1].o = (jobject) createArray(ctx, &class_int, (jint(4)));
	ARRAY_ACCESS(jint, sp[1].o, (jint(0))) = (jint(-1));
	ARRAY_ACCESS(jint, sp[1].o, (jint(1))) = (jint(-1));
	ARRAY_ACCESS(jint, sp[1].o, (jint(2))) = (jint(-1));
	ARRAY_ACCESS(jint, sp[1].o, (jint(3))) = (jint(0));
	ARRAY_ACCESS(jobject, sp[0].o, temp43) = sp[1].o;
	clinit_arc_util_noise_Simplex(ctx);
	SF_arc_util_noise_Simplex_grad4 = sp[0].o;
	LINE_NUMBER(28);
	sp[0].o = (jobject)createArray(ctx, getArrayClass(&class_int, 1), (64));
	jint temp44 = jint(0);
	sp[1].o = (jobject) createArray(ctx, &class_int, (jint(4)));
	ARRAY_ACCESS(jint, sp[1].o, (jint(0))) = (jint(0));
	ARRAY_ACCESS(jint, sp[1].o, (jint(1))) = (jint(1));
	ARRAY_ACCESS(jint, sp[1].o, (jint(2))) = (jint(2));
	ARRAY_ACCESS(jint, sp[1].o, (jint(3))) = (jint(3));
	ARRAY_ACCESS(jobject, sp[0].o, temp44) = sp[1].o;
	jint temp45 = jint(1);
	sp[1].o = (jobject) createArray(ctx, &class_int, (jint(4)));
	ARRAY_ACCESS(jint, sp[1].o, (jint(0))) = (jint(0));
	ARRAY_ACCESS(jint, sp[1].o, (jint(1))) = (jint(1));
	ARRAY_ACCESS(jint, sp[1].o, (jint(2))) = (jint(3));
	ARRAY_ACCESS(jint, sp[1].o, (jint(3))) = (jint(2));
	ARRAY_ACCESS(jobject, sp[0].o, temp45) = sp[1].o;
	jint temp46 = jint(2);
	sp[1].o = (jobject) createArray(ctx, &class_int, (jint(4)));
	ARRAY_ACCESS(jint, sp[1].o, (jint(0))) = (jint(0));
	ARRAY_ACCESS(jint, sp[1].o, (jint(1))) = (jint(0));
	ARRAY_ACCESS(jint, sp[1].o, (jint(2))) = (jint(0));
	ARRAY_ACCESS(jint, sp[1].o, (jint(3))) = (jint(0));
	ARRAY_ACCESS(jobject, sp[0].o, temp46) = sp[1].o;
	jint temp47 = jint(3);
	sp[1].o = (jobject) createArray(ctx, &class_int, (jint(4)));
	ARRAY_ACCESS(jint, sp[1].o, (jint(0))) = (jint(0));
	ARRAY_ACCESS(jint, sp[1].o, (jint(1))) = (jint(2));
	ARRAY_ACCESS(jint, sp[1].o, (jint(2))) = (jint(3));
	ARRAY_ACCESS(jint, sp[1].o, (jint(3))) = (jint(1));
	ARRAY_ACCESS(jobject, sp[0].o, temp47) = sp[1].o;
	jint temp48 = jint(4);
	sp[1].o = (jobject) createArray(ctx, &class_int, (jint(4)));
	ARRAY_ACCESS(jint, sp[1].o, (jint(0))) = (jint(0));
	ARRAY_ACCESS(jint, sp[1].o, (jint(1))) = (jint(0));
	ARRAY_ACCESS(jint, sp[1].o, (jint(2))) = (jint(0));
	ARRAY_ACCESS(jint, sp[1].o, (jint(3))) = (jint(0));
	ARRAY_ACCESS(jobject, sp[0].o, temp48) = sp[1].o;
	jint temp49 = jint(5);
	sp[1].o = (jobject) createArray(ctx, &class_int, (jint(4)));
	ARRAY_ACCESS(jint, sp[1].o, (jint(0))) = (jint(0));
	ARRAY_ACCESS(jint, sp[1].o, (jint(1))) = (jint(0));
	ARRAY_ACCESS(jint, sp[1].o, (jint(2))) = (jint(0));
	ARRAY_ACCESS(jint, sp[1].o, (jint(3))) = (jint(0));
	ARRAY_ACCESS(jobject, sp[0].o, temp49) = sp[1].o;
	jint temp50 = 6;
	sp[1].o = (jobject) createArray(ctx, &class_int, (jint(4)));
	ARRAY_ACCESS(jint, sp[1].o, (jint(0))) = (jint(0));
	ARRAY_ACCESS(jint, sp[1].o, (jint(1))) = (jint(0));
	ARRAY_ACCESS(jint, sp[1].o, (jint(2))) = (jint(0));
	ARRAY_ACCESS(jint, sp[1].o, (jint(3))) = (jint(0));
	ARRAY_ACCESS(jobject, sp[0].o, temp50) = sp[1].o;
	jint temp51 = 7;
	sp[1].o = (jobject) createArray(ctx, &class_int, (jint(4)));
	ARRAY_ACCESS(jint, sp[1].o, (jint(0))) = (jint(1));
	ARRAY_ACCESS(jint, sp[1].o, (jint(1))) = (jint(2));
	ARRAY_ACCESS(jint, sp[1].o, (jint(2))) = (jint(3));
	ARRAY_ACCESS(jint, sp[1].o, (jint(3))) = (jint(0));
	ARRAY_ACCESS(jobject, sp[0].o, temp51) = sp[1].o;
	jint temp52 = 8;
	sp[1].o = (jobject) createArray(ctx, &class_int, (jint(4)));
	ARRAY_ACCESS(jint, sp[1].o, (jint(0))) = (jint(0));
	ARRAY_ACCESS(jint, sp[1].o, (jint(1))) = (jint(2));
	ARRAY_ACCESS(jint, sp[1].o, (jint(2))) = (jint(1));
	ARRAY_ACCESS(jint, sp[1].o, (jint(3))) = (jint(3));
	ARRAY_ACCESS(jobject, sp[0].o, temp52) = sp[1].o;
	jint temp53 = 9;
	sp[1].o = (jobject) createArray(ctx, &class_int, (jint(4)));
	ARRAY_ACCESS(jint, sp[1].o, (jint(0))) = (jint(0));
	ARRAY_ACCESS(jint, sp[1].o, (jint(1))) = (jint(0));
	ARRAY_ACCESS(jint, sp[1].o, (jint(2))) = (jint(0));
	ARRAY_ACCESS(jint, sp[1].o, (jint(3))) = (jint(0));
	ARRAY_ACCESS(jobject, sp[0].o, temp53) = sp[1].o;
	jint temp54 = 10;
	sp[1].o = (jobject) createArray(ctx, &class_int, (jint(4)));
	ARRAY_ACCESS(jint, sp[1].o, (jint(0))) = (jint(0));
	ARRAY_ACCESS(jint, sp[1].o, (jint(1))) = (jint(3));
	ARRAY_ACCESS(jint, sp[1].o, (jint(2))) = (jint(1));
	ARRAY_ACCESS(jint, sp[1].o, (jint(3))) = (jint(2));
	ARRAY_ACCESS(jobject, sp[0].o, temp54) = sp[1].o;
	jint temp55 = 11;
	sp[1].o = (jobject) createArray(ctx, &class_int, (jint(4)));
	ARRAY_ACCESS(jint, sp[1].o, (jint(0))) = (jint(0));
	ARRAY_ACCESS(jint, sp[1].o, (jint(1))) = (jint(3));
	ARRAY_ACCESS(jint, sp[1].o, (jint(2))) = (jint(2));
	ARRAY_ACCESS(jint, sp[1].o, (jint(3))) = (jint(1));
	ARRAY_ACCESS(jobject, sp[0].o, temp55) = sp[1].o;
	jint temp56 = 12;
	sp[1].o = (jobject) createArray(ctx, &class_int, (jint(4)));
	ARRAY_ACCESS(jint, sp[1].o, (jint(0))) = (jint(0));
	ARRAY_ACCESS(jint, sp[1].o, (jint(1))) = (jint(0));
	ARRAY_ACCESS(jint, sp[1].o, (jint(2))) = (jint(0));
	ARRAY_ACCESS(jint, sp[1].o, (jint(3))) = (jint(0));
	ARRAY_ACCESS(jobject, sp[0].o, temp56) = sp[1].o;
	jint temp57 = 13;
	sp[1].o = (jobject) createArray(ctx, &class_int, (jint(4)));
	ARRAY_ACCESS(jint, sp[1].o, (jint(0))) = (jint(0));
	ARRAY_ACCESS(jint, sp[1].o, (jint(1))) = (jint(0));
	ARRAY_ACCESS(jint, sp[1].o, (jint(2))) = (jint(0));
	ARRAY_ACCESS(jint, sp[1].o, (jint(3))) = (jint(0));
	ARRAY_ACCESS(jobject, sp[0].o, temp57) = sp[1].o;
	jint temp58 = 14;
	sp[1].o = (jobject) createArray(ctx, &class_int, (jint(4)));
	ARRAY_ACCESS(jint, sp[1].o, (jint(0))) = (jint(0));
	ARRAY_ACCESS(jint, sp[1].o, (jint(1))) = (jint(0));
	ARRAY_ACCESS(jint, sp[1].o, (jint(2))) = (jint(0));
	ARRAY_ACCESS(jint, sp[1].o, (jint(3))) = (jint(0));
	ARRAY_ACCESS(jobject, sp[0].o, temp58) = sp[1].o;
	jint temp59 = 15;
	sp[1].o = (jobject) createArray(ctx, &class_int, (jint(4)));
	ARRAY_ACCESS(jint, sp[1].o, (jint(0))) = (jint(1));
	ARRAY_ACCESS(jint, sp[1].o, (jint(1))) = (jint(3));
	ARRAY_ACCESS(jint, sp[1].o, (jint(2))) = (jint(2));
	ARRAY_ACCESS(jint, sp[1].o, (jint(3))) = (jint(0));
	ARRAY_ACCESS(jobject, sp[0].o, temp59) = sp[1].o;
	jint temp60 = 16;
	sp[1].o = (jobject) createArray(ctx, &class_int, (jint(4)));
	ARRAY_ACCESS(jint, sp[1].o, (jint(0))) = (jint(0));
	ARRAY_ACCESS(jint, sp[1].o, (jint(1))) = (jint(0));
	ARRAY_ACCESS(jint, sp[1].o, (jint(2))) = (jint(0));
	ARRAY_ACCESS(jint, sp[1].o, (jint(3))) = (jint(0));
	ARRAY_ACCESS(jobject, sp[0].o, temp60) = sp[1].o;
	jint temp61 = 17;
	sp[1].o = (jobject) createArray(ctx, &class_int, (jint(4)));
	ARRAY_ACCESS(jint, sp[1].o, (jint(0))) = (jint(0));
	ARRAY_ACCESS(jint, sp[1].o, (jint(1))) = (jint(0));
	ARRAY_ACCESS(jint, sp[1].o, (jint(2))) = (jint(0));
	ARRAY_ACCESS(jint, sp[1].o, (jint(3))) = (jint(0));
	ARRAY_ACCESS(jobject, sp[0].o, temp61) = sp[1].o;
	jint temp62 = 18;
	sp[1].o = (jobject) createArray(ctx, &class_int, (jint(4)));
	ARRAY_ACCESS(jint, sp[1].o, (jint(0))) = (jint(0));
	ARRAY_ACCESS(jint, sp[1].o, (jint(1))) = (jint(0));
	ARRAY_ACCESS(jint, sp[1].o, (jint(2))) = (jint(0));
	ARRAY_ACCESS(jint, sp[1].o, (jint(3))) = (jint(0));
	ARRAY_ACCESS(jobject, sp[0].o, temp62) = sp[1].o;
	jint temp63 = 19;
	sp[1].o = (jobject) createArray(ctx, &class_int, (jint(4)));
	ARRAY_ACCESS(jint, sp[1].o, (jint(0))) = (jint(0));
	ARRAY_ACCESS(jint, sp[1].o, (jint(1))) = (jint(0));
	ARRAY_ACCESS(jint, sp[1].o, (jint(2))) = (jint(0));
	ARRAY_ACCESS(jint, sp[1].o, (jint(3))) = (jint(0));
	ARRAY_ACCESS(jobject, sp[0].o, temp63) = sp[1].o;
	jint temp64 = 20;
	sp[1].o = (jobject) createArray(ctx, &class_int, (jint(4)));
	ARRAY_ACCESS(jint, sp[1].o, (jint(0))) = (jint(0));
	ARRAY_ACCESS(jint, sp[1].o, (jint(1))) = (jint(0));
	ARRAY_ACCESS(jint, sp[1].o, (jint(2))) = (jint(0));
	ARRAY_ACCESS(jint, sp[1].o, (jint(3))) = (jint(0));
	ARRAY_ACCESS(jobject, sp[0].o, temp64) = sp[1].o;
	jint temp65 = 21;
	sp[1].o = (jobject) createArray(ctx, &class_int, (jint(4)));
	ARRAY_ACCESS(jint, sp[1].o, (jint(0))) = (jint(0));
	ARRAY_ACCESS(jint, sp[1].o, (jint(1))) = (jint(0));
	ARRAY_ACCESS(jint, sp[1].o, (jint(2))) = (jint(0));
	ARRAY_ACCESS(jint, sp[1].o, (jint(3))) = (jint(0));
	ARRAY_ACCESS(jobject, sp[0].o, temp65) = sp[1].o;
	jint temp66 = 22;
	sp[1].o = (jobject) createArray(ctx, &class_int, (jint(4)));
	ARRAY_ACCESS(jint, sp[1].o, (jint(0))) = (jint(0));
	ARRAY_ACCESS(jint, sp[1].o, (jint(1))) = (jint(0));
	ARRAY_ACCESS(jint, sp[1].o, (jint(2))) = (jint(0));
	ARRAY_ACCESS(jint, sp[1].o, (jint(3))) = (jint(0));
	ARRAY_ACCESS(jobject, sp[0].o, temp66) = sp[1].o;
	jint temp67 = 23;
	sp[1].o = (jobject) createArray(ctx, &class_int, (jint(4)));
	ARRAY_ACCESS(jint, sp[1].o, (jint(0))) = (jint(0));
	ARRAY_ACCESS(jint, sp[1].o, (jint(1))) = (jint(0));
	ARRAY_ACCESS(jint, sp[1].o, (jint(2))) = (jint(0));
	ARRAY_ACCESS(jint, sp[1].o, (jint(3))) = (jint(0));
	ARRAY_ACCESS(jobject, sp[0].o, temp67) = sp[1].o;
	jint temp68 = 24;
	sp[1].o = (jobject) createArray(ctx, &class_int, (jint(4)));
	ARRAY_ACCESS(jint, sp[1].o, (jint(0))) = (jint(1));
	ARRAY_ACCESS(jint, sp[1].o, (jint(1))) = (jint(2));
	ARRAY_ACCESS(jint, sp[1].o, (jint(2))) = (jint(0));
	ARRAY_ACCESS(jint, sp[1].o, (jint(3))) = (jint(3));
	ARRAY_ACCESS(jobject, sp[0].o, temp68) = sp[1].o;
	jint temp69 = 25;
	sp[1].o = (jobject) createArray(ctx, &class_int, (jint(4)));
	ARRAY_ACCESS(jint, sp[1].o, (jint(0))) = (jint(0));
	ARRAY_ACCESS(jint, sp[1].o, (jint(1))) = (jint(0));
	ARRAY_ACCESS(jint, sp[1].o, (jint(2))) = (jint(0));
	ARRAY_ACCESS(jint, sp[1].o, (jint(3))) = (jint(0));
	ARRAY_ACCESS(jobject, sp[0].o, temp69) = sp[1].o;
	jint temp70 = 26;
	sp[1].o = (jobject) createArray(ctx, &class_int, (jint(4)));
	ARRAY_ACCESS(jint, sp[1].o, (jint(0))) = (jint(1));
	ARRAY_ACCESS(jint, sp[1].o, (jint(1))) = (jint(3));
	ARRAY_ACCESS(jint, sp[1].o, (jint(2))) = (jint(0));
	ARRAY_ACCESS(jint, sp[1].o, (jint(3))) = (jint(2));
	ARRAY_ACCESS(jobject, sp[0].o, temp70) = sp[1].o;
	jint temp71 = 27;
	sp[1].o = (jobject) createArray(ctx, &class_int, (jint(4)));
	ARRAY_ACCESS(jint, sp[1].o, (jint(0))) = (jint(0));
	ARRAY_ACCESS(jint, sp[1].o, (jint(1))) = (jint(0));
	ARRAY_ACCESS(jint, sp[1].o, (jint(2))) = (jint(0));
	ARRAY_ACCESS(jint, sp[1].o, (jint(3))) = (jint(0));
	ARRAY_ACCESS(jobject, sp[0].o, temp71) = sp[1].o;
	jint temp72 = 28;
	sp[1].o = (jobject) createArray(ctx, &class_int, (jint(4)));
	ARRAY_ACCESS(jint, sp[1].o, (jint(0))) = (jint(0));
	ARRAY_ACCESS(jint, sp[1].o, (jint(1))) = (jint(0));
	ARRAY_ACCESS(jint, sp[1].o, (jint(2))) = (jint(0));
	ARRAY_ACCESS(jint, sp[1].o, (jint(3))) = (jint(0));
	ARRAY_ACCESS(jobject, sp[0].o, temp72) = sp[1].o;
	jint temp73 = 29;
	sp[1].o = (jobject) createArray(ctx, &class_int, (jint(4)));
	ARRAY_ACCESS(jint, sp[1].o, (jint(0))) = (jint(0));
	ARRAY_ACCESS(jint, sp[1].o, (jint(1))) = (jint(0));
	ARRAY_ACCESS(jint, sp[1].o, (jint(2))) = (jint(0));
	ARRAY_ACCESS(jint, sp[1].o, (jint(3))) = (jint(0));
	ARRAY_ACCESS(jobject, sp[0].o, temp73) = sp[1].o;
	jint temp74 = 30;
	sp[1].o = (jobject) createArray(ctx, &class_int, (jint(4)));
	ARRAY_ACCESS(jint, sp[1].o, (jint(0))) = (jint(2));
	ARRAY_ACCESS(jint, sp[1].o, (jint(1))) = (jint(3));
	ARRAY_ACCESS(jint, sp[1].o, (jint(2))) = (jint(0));
	ARRAY_ACCESS(jint, sp[1].o, (jint(3))) = (jint(1));
	ARRAY_ACCESS(jobject, sp[0].o, temp74) = sp[1].o;
	jint temp75 = 31;
	sp[1].o = (jobject) createArray(ctx, &class_int, (jint(4)));
	ARRAY_ACCESS(jint, sp[1].o, (jint(0))) = (jint(2));
	ARRAY_ACCESS(jint, sp[1].o, (jint(1))) = (jint(3));
	ARRAY_ACCESS(jint, sp[1].o, (jint(2))) = (jint(1));
	ARRAY_ACCESS(jint, sp[1].o, (jint(3))) = (jint(0));
	ARRAY_ACCESS(jobject, sp[0].o, temp75) = sp[1].o;
	jint temp76 = 32;
	sp[1].o = (jobject) createArray(ctx, &class_int, (jint(4)));
	ARRAY_ACCESS(jint, sp[1].o, (jint(0))) = (jint(1));
	ARRAY_ACCESS(jint, sp[1].o, (jint(1))) = (jint(0));
	ARRAY_ACCESS(jint, sp[1].o, (jint(2))) = (jint(2));
	ARRAY_ACCESS(jint, sp[1].o, (jint(3))) = (jint(3));
	ARRAY_ACCESS(jobject, sp[0].o, temp76) = sp[1].o;
	jint temp77 = 33;
	sp[1].o = (jobject) createArray(ctx, &class_int, (jint(4)));
	ARRAY_ACCESS(jint, sp[1].o, (jint(0))) = (jint(1));
	ARRAY_ACCESS(jint, sp[1].o, (jint(1))) = (jint(0));
	ARRAY_ACCESS(jint, sp[1].o, (jint(2))) = (jint(3));
	ARRAY_ACCESS(jint, sp[1].o, (jint(3))) = (jint(2));
	ARRAY_ACCESS(jobject, sp[0].o, temp77) = sp[1].o;
	jint temp78 = 34;
	sp[1].o = (jobject) createArray(ctx, &class_int, (jint(4)));
	ARRAY_ACCESS(jint, sp[1].o, (jint(0))) = (jint(0));
	ARRAY_ACCESS(jint, sp[1].o, (jint(1))) = (jint(0));
	ARRAY_ACCESS(jint, sp[1].o, (jint(2))) = (jint(0));
	ARRAY_ACCESS(jint, sp[1].o, (jint(3))) = (jint(0));
	ARRAY_ACCESS(jobject, sp[0].o, temp78) = sp[1].o;
	jint temp79 = 35;
	sp[1].o = (jobject) createArray(ctx, &class_int, (jint(4)));
	ARRAY_ACCESS(jint, sp[1].o, (jint(0))) = (jint(0));
	ARRAY_ACCESS(jint, sp[1].o, (jint(1))) = (jint(0));
	ARRAY_ACCESS(jint, sp[1].o, (jint(2))) = (jint(0));
	ARRAY_ACCESS(jint, sp[1].o, (jint(3))) = (jint(0));
	ARRAY_ACCESS(jobject, sp[0].o, temp79) = sp[1].o;
	jint temp80 = 36;
	sp[1].o = (jobject) createArray(ctx, &class_int, (jint(4)));
	ARRAY_ACCESS(jint, sp[1].o, (jint(0))) = (jint(0));
	ARRAY_ACCESS(jint, sp[1].o, (jint(1))) = (jint(0));
	ARRAY_ACCESS(jint, sp[1].o, (jint(2))) = (jint(0));
	ARRAY_ACCESS(jint, sp[1].o, (jint(3))) = (jint(0));
	ARRAY_ACCESS(jobject, sp[0].o, temp80) = sp[1].o;
	jint temp81 = 37;
	sp[1].o = (jobject) createArray(ctx, &class_int, (jint(4)));
	ARRAY_ACCESS(jint, sp[1].o, (jint(0))) = (jint(2));
	ARRAY_ACCESS(jint, sp[1].o, (jint(1))) = (jint(0));
	ARRAY_ACCESS(jint, sp[1].o, (jint(2))) = (jint(3));
	ARRAY_ACCESS(jint, sp[1].o, (jint(3))) = (jint(1));
	ARRAY_ACCESS(jobject, sp[0].o, temp81) = sp[1].o;
	jint temp82 = 38;
	sp[1].o = (jobject) createArray(ctx, &class_int, (jint(4)));
	ARRAY_ACCESS(jint, sp[1].o, (jint(0))) = (jint(0));
	ARRAY_ACCESS(jint, sp[1].o, (jint(1))) = (jint(0));
	ARRAY_ACCESS(jint, sp[1].o, (jint(2))) = (jint(0));
	ARRAY_ACCESS(jint, sp[1].o, (jint(3))) = (jint(0));
	ARRAY_ACCESS(jobject, sp[0].o, temp82) = sp[1].o;
	jint temp83 = 39;
	sp[1].o = (jobject) createArray(ctx, &class_int, (jint(4)));
	ARRAY_ACCESS(jint, sp[1].o, (jint(0))) = (jint(2));
	ARRAY_ACCESS(jint, sp[1].o, (jint(1))) = (jint(1));
	ARRAY_ACCESS(jint, sp[1].o, (jint(2))) = (jint(3));
	ARRAY_ACCESS(jint, sp[1].o, (jint(3))) = (jint(0));
	ARRAY_ACCESS(jobject, sp[0].o, temp83) = sp[1].o;
	jint temp84 = 40;
	sp[1].o = (jobject) createArray(ctx, &class_int, (jint(4)));
	ARRAY_ACCESS(jint, sp[1].o, (jint(0))) = (jint(0));
	ARRAY_ACCESS(jint, sp[1].o, (jint(1))) = (jint(0));
	ARRAY_ACCESS(jint, sp[1].o, (jint(2))) = (jint(0));
	ARRAY_ACCESS(jint, sp[1].o, (jint(3))) = (jint(0));
	ARRAY_ACCESS(jobject, sp[0].o, temp84) = sp[1].o;
	jint temp85 = 41;
	sp[1].o = (jobject) createArray(ctx, &class_int, (jint(4)));
	ARRAY_ACCESS(jint, sp[1].o, (jint(0))) = (jint(0));
	ARRAY_ACCESS(jint, sp[1].o, (jint(1))) = (jint(0));
	ARRAY_ACCESS(jint, sp[1].o, (jint(2))) = (jint(0));
	ARRAY_ACCESS(jint, sp[1].o, (jint(3))) = (jint(0));
	ARRAY_ACCESS(jobject, sp[0].o, temp85) = sp[1].o;
	jint temp86 = 42;
	sp[1].o = (jobject) createArray(ctx, &class_int, (jint(4)));
	ARRAY_ACCESS(jint, sp[1].o, (jint(0))) = (jint(0));
	ARRAY_ACCESS(jint, sp[1].o, (jint(1))) = (jint(0));
	ARRAY_ACCESS(jint, sp[1].o, (jint(2))) = (jint(0));
	ARRAY_ACCESS(jint, sp[1].o, (jint(3))) = (jint(0));
	ARRAY_ACCESS(jobject, sp[0].o, temp86) = sp[1].o;
	jint temp87 = 43;
	sp[1].o = (jobject) createArray(ctx, &class_int, (jint(4)));
	ARRAY_ACCESS(jint, sp[1].o, (jint(0))) = (jint(0));
	ARRAY_ACCESS(jint, sp[1].o, (jint(1))) = (jint(0));
	ARRAY_ACCESS(jint, sp[1].o, (jint(2))) = (jint(0));
	ARRAY_ACCESS(jint, sp[1].o, (jint(3))) = (jint(0));
	ARRAY_ACCESS(jobject, sp[0].o, temp87) = sp[1].o;
	jint temp88 = 44;
	sp[1].o = (jobject) createArray(ctx, &class_int, (jint(4)));
	ARRAY_ACCESS(jint, sp[1].o, (jint(0))) = (jint(0));
	ARRAY_ACCESS(jint, sp[1].o, (jint(1))) = (jint(0));
	ARRAY_ACCESS(jint, sp[1].o, (jint(2))) = (jint(0));
	ARRAY_ACCESS(jint, sp[1].o, (jint(3))) = (jint(0));
	ARRAY_ACCESS(jobject, sp[0].o, temp88) = sp[1].o;
	jint temp89 = 45;
	sp[1].o = (jobject) createArray(ctx, &class_int, (jint(4)));
	ARRAY_ACCESS(jint, sp[1].o, (jint(0))) = (jint(0));
	ARRAY_ACCESS(jint, sp[1].o, (jint(1))) = (jint(0));
	ARRAY_ACCESS(jint, sp[1].o, (jint(2))) = (jint(0));
	ARRAY_ACCESS(jint, sp[1].o, (jint(3))) = (jint(0));
	ARRAY_ACCESS(jobject, sp[0].o, temp89) = sp[1].o;
	jint temp90 = 46;
	sp[1].o = (jobject) createArray(ctx, &class_int, (jint(4)));
	ARRAY_ACCESS(jint, sp[1].o, (jint(0))) = (jint(0));
	ARRAY_ACCESS(jint, sp[1].o, (jint(1))) = (jint(0));
	ARRAY_ACCESS(jint, sp[1].o, (jint(2))) = (jint(0));
	ARRAY_ACCESS(jint, sp[1].o, (jint(3))) = (jint(0));
	ARRAY_ACCESS(jobject, sp[0].o, temp90) = sp[1].o;
	jint temp91 = 47;
	sp[1].o = (jobject) createArray(ctx, &class_int, (jint(4)));
	ARRAY_ACCESS(jint, sp[1].o, (jint(0))) = (jint(0));
	ARRAY_ACCESS(jint, sp[1].o, (jint(1))) = (jint(0));
	ARRAY_ACCESS(jint, sp[1].o, (jint(2))) = (jint(0));
	ARRAY_ACCESS(jint, sp[1].o, (jint(3))) = (jint(0));
	ARRAY_ACCESS(jobject, sp[0].o, temp91) = sp[1].o;
	jint temp92 = 48;
	sp[1].o = (jobject) createArray(ctx, &class_int, (jint(4)));
	ARRAY_ACCESS(jint, sp[1].o, (jint(0))) = (jint(2));
	ARRAY_ACCESS(jint, sp[1].o, (jint(1))) = (jint(0));
	ARRAY_ACCESS(jint, sp[1].o, (jint(2))) = (jint(1));
	ARRAY_ACCESS(jint, sp[1].o, (jint(3))) = (jint(3));
	ARRAY_ACCESS(jobject, sp[0].o, temp92) = sp[1].o;
	jint temp93 = 49;
	sp[1].o = (jobject) createArray(ctx, &class_int, (jint(4)));
	ARRAY_ACCESS(jint, sp[1].o, (jint(0))) = (jint(0));
	ARRAY_ACCESS(jint, sp[1].o, (jint(1))) = (jint(0));
	ARRAY_ACCESS(jint, sp[1].o, (jint(2))) = (jint(0));
	ARRAY_ACCESS(jint, sp[1].o, (jint(3))) = (jint(0));
	ARRAY_ACCESS(jobject, sp[0].o, temp93) = sp[1].o;
	jint temp94 = 50;
	sp[1].o = (jobject) createArray(ctx, &class_int, (jint(4)));
	ARRAY_ACCESS(jint, sp[1].o, (jint(0))) = (jint(0));
	ARRAY_ACCESS(jint, sp[1].o, (jint(1))) = (jint(0));
	ARRAY_ACCESS(jint, sp[1].o, (jint(2))) = (jint(0));
	ARRAY_ACCESS(jint, sp[1].o, (jint(3))) = (jint(0));
	ARRAY_ACCESS(jobject, sp[0].o, temp94) = sp[1].o;
	jint temp95 = 51;
	sp[1].o = (jobject) createArray(ctx, &class_int, (jint(4)));
	ARRAY_ACCESS(jint, sp[1].o, (jint(0))) = (jint(0));
	ARRAY_ACCESS(jint, sp[1].o, (jint(1))) = (jint(0));
	ARRAY_ACCESS(jint, sp[1].o, (jint(2))) = (jint(0));
	ARRAY_ACCESS(jint, sp[1].o, (jint(3))) = (jint(0));
	ARRAY_ACCESS(jobject, sp[0].o, temp95) = sp[1].o;
	jint temp96 = 52;
	sp[1].o = (jobject) createArray(ctx, &class_int, (jint(4)));
	ARRAY_ACCESS(jint, sp[1].o, (jint(0))) = (jint(3));
	ARRAY_ACCESS(jint, sp[1].o, (jint(1))) = (jint(0));
	ARRAY_ACCESS(jint, sp[1].o, (jint(2))) = (jint(1));
	ARRAY_ACCESS(jint, sp[1].o, (jint(3))) = (jint(2));
	ARRAY_ACCESS(jobject, sp[0].o, temp96) = sp[1].o;
	jint temp97 = 53;
	sp[1].o = (jobject) createArray(ctx, &class_int, (jint(4)));
	ARRAY_ACCESS(jint, sp[1].o, (jint(0))) = (jint(3));
	ARRAY_ACCESS(jint, sp[1].o, (jint(1))) = (jint(0));
	ARRAY_ACCESS(jint, sp[1].o, (jint(2))) = (jint(2));
	ARRAY_ACCESS(jint, sp[1].o, (jint(3))) = (jint(1));
	ARRAY_ACCESS(jobject, sp[0].o, temp97) = sp[1].o;
	jint temp98 = 54;
	sp[1].o = (jobject) createArray(ctx, &class_int, (jint(4)));
	ARRAY_ACCESS(jint, sp[1].o, (jint(0))) = (jint(0));
	ARRAY_ACCESS(jint, sp[1].o, (jint(1))) = (jint(0));
	ARRAY_ACCESS(jint, sp[1].o, (jint(2))) = (jint(0));
	ARRAY_ACCESS(jint, sp[1].o, (jint(3))) = (jint(0));
	ARRAY_ACCESS(jobject, sp[0].o, temp98) = sp[1].o;
	jint temp99 = 55;
	sp[1].o = (jobject) createArray(ctx, &class_int, (jint(4)));
	ARRAY_ACCESS(jint, sp[1].o, (jint(0))) = (jint(3));
	ARRAY_ACCESS(jint, sp[1].o, (jint(1))) = (jint(1));
	ARRAY_ACCESS(jint, sp[1].o, (jint(2))) = (jint(2));
	ARRAY_ACCESS(jint, sp[1].o, (jint(3))) = (jint(0));
	ARRAY_ACCESS(jobject, sp[0].o, temp99) = sp[1].o;
	jint temp100 = 56;
	sp[1].o = (jobject) createArray(ctx, &class_int, (jint(4)));
	ARRAY_ACCESS(jint, sp[1].o, (jint(0))) = (jint(2));
	ARRAY_ACCESS(jint, sp[1].o, (jint(1))) = (jint(1));
	ARRAY_ACCESS(jint, sp[1].o, (jint(2))) = (jint(0));
	ARRAY_ACCESS(jint, sp[1].o, (jint(3))) = (jint(3));
	ARRAY_ACCESS(jobject, sp[0].o, temp100) = sp[1].o;
	jint temp101 = 57;
	sp[1].o = (jobject) createArray(ctx, &class_int, (jint(4)));
	ARRAY_ACCESS(jint, sp[1].o, (jint(0))) = (jint(0));
	ARRAY_ACCESS(jint, sp[1].o, (jint(1))) = (jint(0));
	ARRAY_ACCESS(jint, sp[1].o, (jint(2))) = (jint(0));
	ARRAY_ACCESS(jint, sp[1].o, (jint(3))) = (jint(0));
	ARRAY_ACCESS(jobject, sp[0].o, temp101) = sp[1].o;
	jint temp102 = 58;
	sp[1].o = (jobject) createArray(ctx, &class_int, (jint(4)));
	ARRAY_ACCESS(jint, sp[1].o, (jint(0))) = (jint(0));
	ARRAY_ACCESS(jint, sp[1].o, (jint(1))) = (jint(0));
	ARRAY_ACCESS(jint, sp[1].o, (jint(2))) = (jint(0));
	ARRAY_ACCESS(jint, sp[1].o, (jint(3))) = (jint(0));
	ARRAY_ACCESS(jobject, sp[0].o, temp102) = sp[1].o;
	jint temp103 = 59;
	sp[1].o = (jobject) createArray(ctx, &class_int, (jint(4)));
	ARRAY_ACCESS(jint, sp[1].o, (jint(0))) = (jint(0));
	ARRAY_ACCESS(jint, sp[1].o, (jint(1))) = (jint(0));
	ARRAY_ACCESS(jint, sp[1].o, (jint(2))) = (jint(0));
	ARRAY_ACCESS(jint, sp[1].o, (jint(3))) = (jint(0));
	ARRAY_ACCESS(jobject, sp[0].o, temp103) = sp[1].o;
	jint temp104 = 60;
	sp[1].o = (jobject) createArray(ctx, &class_int, (jint(4)));
	ARRAY_ACCESS(jint, sp[1].o, (jint(0))) = (jint(3));
	ARRAY_ACCESS(jint, sp[1].o, (jint(1))) = (jint(1));
	ARRAY_ACCESS(jint, sp[1].o, (jint(2))) = (jint(0));
	ARRAY_ACCESS(jint, sp[1].o, (jint(3))) = (jint(2));
	ARRAY_ACCESS(jobject, sp[0].o, temp104) = sp[1].o;
	jint temp105 = 61;
	sp[1].o = (jobject) createArray(ctx, &class_int, (jint(4)));
	ARRAY_ACCESS(jint, sp[1].o, (jint(0))) = (jint(0));
	ARRAY_ACCESS(jint, sp[1].o, (jint(1))) = (jint(0));
	ARRAY_ACCESS(jint, sp[1].o, (jint(2))) = (jint(0));
	ARRAY_ACCESS(jint, sp[1].o, (jint(3))) = (jint(0));
	ARRAY_ACCESS(jobject, sp[0].o, temp105) = sp[1].o;
	jint temp106 = 62;
	sp[1].o = (jobject) createArray(ctx, &class_int, (jint(4)));
	ARRAY_ACCESS(jint, sp[1].o, (jint(0))) = (jint(3));
	ARRAY_ACCESS(jint, sp[1].o, (jint(1))) = (jint(2));
	ARRAY_ACCESS(jint, sp[1].o, (jint(2))) = (jint(0));
	ARRAY_ACCESS(jint, sp[1].o, (jint(3))) = (jint(1));
	ARRAY_ACCESS(jobject, sp[0].o, temp106) = sp[1].o;
	jint temp107 = 63;
	sp[1].o = (jobject) createArray(ctx, &class_int, (jint(4)));
	ARRAY_ACCESS(jint, sp[1].o, (jint(0))) = (jint(3));
	ARRAY_ACCESS(jint, sp[1].o, (jint(1))) = (jint(2));
	ARRAY_ACCESS(jint, sp[1].o, (jint(2))) = (jint(1));
	ARRAY_ACCESS(jint, sp[1].o, (jint(3))) = (jint(0));
	ARRAY_ACCESS(jobject, sp[0].o, temp107) = sp[1].o;
	clinit_arc_util_noise_Simplex(ctx);
	SF_arc_util_noise_Simplex_simplex = sp[0].o;
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void *vtable_arc_util_noise_Simplex[] {
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
	{ "grad3", getArrayClass(&class_int, 2), (intptr_t) &SF_arc_util_noise_Simplex_grad3, "[[I", 24 },
	{ "grad4", getArrayClass(&class_int, 2), (intptr_t) &SF_arc_util_noise_Simplex_grad4, "[[I", 24 },
	{ "simplex", getArrayClass(&class_int, 2), (intptr_t) &SF_arc_util_noise_Simplex_simplex, "[[I", 24 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_arc_util_noise_Simplex, 0, "()V", 2 },
	{ "noise2d", (intptr_t) SM_arc_util_noise_Simplex_noise2d_int_double_double_double_double_double_R_float, 0, "(IDDDDD)F", 9 },
	{ "noise3d", (intptr_t) SM_arc_util_noise_Simplex_noise3d_int_double_double_double_double_double_double_R_float, 0, "(IDDDDDD)F", 9 },
	{ "noise4d", (intptr_t) SM_arc_util_noise_Simplex_noise4d_double_double_double_double_double_double_double_R_float, 0, "(DDDDDDD)F", 9 },
	{ "raw2d", (intptr_t) SM_arc_util_noise_Simplex_raw2d_int_double_double_R_double, 0, "(IDD)D", 9 },
	{ "raw3d", (intptr_t) SM_arc_util_noise_Simplex_raw3d_int_double_double_double_R_double, 0, "(IDDD)D", 9 },
	{ "raw4d", (intptr_t) SM_arc_util_noise_Simplex_raw4d_double_double_double_double_R_double, 0, "(DDDD)D", 9 },
	{ "rawTiled", (intptr_t) SM_arc_util_noise_Simplex_rawTiled_double_double_double_double_double_double_double_R_double, 0, "(DDDDDDD)D", 9 },
	{ "perm", (intptr_t) SM_arc_util_noise_Simplex_perm_int_int_R_int, 0, "(II)I", 8 },
	{ "fastfloor", (intptr_t) SM_arc_util_noise_Simplex_fastfloor_double_R_int, 0, "(D)I", 8 },
	{ "dot", (intptr_t) SM_arc_util_noise_Simplex_dot_Array1_int_double_double_R_double, 0, "([IDD)D", 8 },
	{ "dot", (intptr_t) SM_arc_util_noise_Simplex_dot_Array1_int_double_double_double_R_double, 0, "([IDDD)D", 8 },
	{ "dot", (intptr_t) SM_arc_util_noise_Simplex_dot_Array1_int_double_double_double_double_R_double, 0, "([IDDDD)D", 8 },
	{ "<clinit>", (intptr_t) clinit_arc_util_noise_Simplex, 0, "()V", 8 },
};

Class class_arc_util_noise_Simplex{
		.nativeName = (intptr_t) "arc/util/noise/Simplex",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(arc_util_noise_Simplex),
		.classVtable = (intptr_t) vtable_arc_util_noise_Simplex,
		.staticInitializer = (intptr_t) clinit_arc_util_noise_Simplex,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_arc_util_noise_Simplex,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 33,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 3,
		.nativeFields = (intptr_t) fields,
		.methodCount = 14,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 11,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_arc_util_noise_Simplex = registerClass(&class_arc_util_noise_Simplex);

}
