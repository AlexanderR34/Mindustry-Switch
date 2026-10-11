#include "arc/util/noise/Ridged.h"
#include "java/lang/Math.h"
#include "java/lang/Object.h"
#include "arc/util/noise/Ridged.h"
#include "arc/util/noise/VectorTable.h"

extern "C" {

jint SF_arc_util_noise_Ridged_X_NOISE_GEN;
jint SF_arc_util_noise_Ridged_Y_NOISE_GEN;
jint SF_arc_util_noise_Ridged_Z_NOISE_GEN;
jint SF_arc_util_noise_Ridged_SEED_NOISE_GEN;
jint SF_arc_util_noise_Ridged_SHIFT_NOISE_GEN;
jint SF_arc_util_noise_Ridged_quality;

void mark_arc_util_noise_Ridged(jobject object, jint mark, jint depth) {
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
	auto self = (arc_util_noise_Ridged *) object;
}

void clinit_arc_util_noise_Ridged(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	SF_arc_util_noise_Ridged_X_NOISE_GEN = jint(1619);
	SF_arc_util_noise_Ridged_Y_NOISE_GEN = jint(31337);
	SF_arc_util_noise_Ridged_Z_NOISE_GEN = jint(6971);
	SF_arc_util_noise_Ridged_SEED_NOISE_GEN = jint(1013);
	SF_arc_util_noise_Ridged_SHIFT_NOISE_GEN = jint(8);
	SF_arc_util_noise_Ridged_quality = jint(2);
}

void init_arc_util_noise_Ridged(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/util/noise/Ridged:<init>", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_util_noise_Ridged(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(12);
	init_java_lang_Object(ctx, (frame[0].o));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jfloat SM_arc_util_noise_Ridged_noise2d_int_double_double_double_R_float(jcontext ctx, jint param0, jdouble param1, jdouble param2, jdouble param3) {
	jtype frame[15];
	auto stack = &frame[7];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/util/noise/Ridged:noise2d", 15 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_util_noise_Ridged(ctx);
	frame[0].i = param0;
	frame[1].d = param1;
	frame[3].d = param2;
	frame[5].d = param3;
	{
	LINE_NUMBER(15);
	jfloat temp0 = (jfloat)SM_arc_util_noise_Ridged_noise2d_int_double_double_int_double_R_float(ctx, (frame[0].i), (frame[1].d), (frame[3].d), (jint(1)), (frame[5].d));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jfloat SM_arc_util_noise_Ridged_noise2d_int_double_double_int_double_R_float(jcontext ctx, jint param0, jdouble param1, jdouble param2, jint param3, jdouble param4) {
	jtype frame[18];
	auto stack = &frame[8];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/util/noise/Ridged:noise2d", 18 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_util_noise_Ridged(ctx);
	frame[0].i = param0;
	frame[1].d = param1;
	frame[3].d = param2;
	frame[5].i = param3;
	frame[6].d = param4;
	{
	LINE_NUMBER(19);
	jfloat temp0 = (jfloat)SM_arc_util_noise_Ridged_noise2d_int_double_double_int_double_double_R_float(ctx, (frame[0].i), (frame[1].d), (frame[3].d), (frame[5].i), (jdouble(0.5)), (frame[6].d));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jfloat SM_arc_util_noise_Ridged_noise2d_int_double_double_int_double_double_R_float(jcontext ctx, jint param0, jdouble param1, jdouble param2, jint param3, jdouble param4, jdouble param5) {
	jtype frame[57];
	auto stack = &frame[49];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/util/noise/Ridged:noise2d", 57 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_util_noise_Ridged(ctx);
	frame[0].i = param0;
	frame[1].d = param1;
	frame[3].d = param2;
	frame[5].i = param3;
	frame[6].d = param4;
	frame[8].d = param5;
	{
	LINE_NUMBER(23);
	frame[10].d = ((frame[1].d) * (frame[8].d));
	LINE_NUMBER(24);
	frame[12].d = ((frame[3].d) * (frame[8].d));
	LINE_NUMBER(27);
	frame[16].d = (jdouble(0));
	LINE_NUMBER(28);
	frame[18].d = (jdouble(1));
	LINE_NUMBER(30);
	frame[20].d = (jdouble(1));
	LINE_NUMBER(31);
	frame[22].d = (jdouble(2.0));
	LINE_NUMBER(32);
	frame[24].d = (jdouble(1));
	LINE_NUMBER(34);
	frame[26].i = (jint(0));
	}
label_8:;
	{
	if ((frame[26].i) >= (frame[5].i)) goto label_9;
	}
	{
	LINE_NUMBER(36);
	jdouble temp0 = (jdouble)SM_arc_util_noise_Ridged_range_double_R_double(ctx, (frame[10].d));
	frame[27].d = temp0;
	LINE_NUMBER(37);
	jdouble temp1 = (jdouble)SM_arc_util_noise_Ridged_range_double_R_double(ctx, (frame[12].d));
	frame[29].d = temp1;
	LINE_NUMBER(41);
	if ((doubleCompare((frame[27].d), (jdouble(0)), -1)) <= 0) goto label_13;
	}
	{
	jint temp0 = jint((frame[27].d));
	sp[0].i = temp0;
	sp += 1;
	goto label_14;
	}
label_13:;
	{
	jint temp0 = (jint((frame[27].d))) - (jint(1));
	sp[0].i = temp0;
	sp += 1;
	}
label_14:;
	{
	sp -= 1;
	frame[31].i = sp[0].i;
	LINE_NUMBER(42);
	frame[32].i = ((frame[31].i) + (jint(1)));
	LINE_NUMBER(43);
	if ((doubleCompare((frame[29].d), (jdouble(0)), -1)) <= 0) goto label_17;
	}
	{
	jint temp0 = jint((frame[29].d));
	sp[0].i = temp0;
	sp += 1;
	goto label_18;
	}
label_17:;
	{
	jint temp0 = (jint((frame[29].d))) - (jint(1));
	sp[0].i = temp0;
	sp += 1;
	}
label_18:;
	{
	sp -= 1;
	frame[33].i = sp[0].i;
	LINE_NUMBER(44);
	frame[34].i = ((frame[33].i) + (jint(1)));
	LINE_NUMBER(48);
	frame[35].d = (jdouble(0));
	frame[37].d = (jdouble(0));
	LINE_NUMBER(49);
	switch((jint(2))) {
		case 0: goto label_23;
		case 1: goto label_24;
		case 2: goto label_25;
		default: goto label_26;
	}
	}
label_23:;
	{
	LINE_NUMBER(51);
	frame[35].d = ((frame[27].d) - (jdouble((frame[31].i))));
	LINE_NUMBER(52);
	frame[37].d = ((frame[29].d) - (jdouble((frame[33].i))));
	LINE_NUMBER(53);
	goto label_26;
	}
label_24:;
	{
	LINE_NUMBER(55);
	jdouble temp0 = (jdouble)SM_arc_util_noise_Ridged_scurve3_double_R_double(ctx, ((frame[27].d) - (jdouble((frame[31].i)))));
	frame[35].d = temp0;
	LINE_NUMBER(56);
	jdouble temp1 = (jdouble)SM_arc_util_noise_Ridged_scurve3_double_R_double(ctx, ((frame[29].d) - (jdouble((frame[33].i)))));
	frame[37].d = temp1;
	LINE_NUMBER(57);
	goto label_26;
	}
label_25:;
	{
	LINE_NUMBER(59);
	jdouble temp0 = (jdouble)SM_arc_util_noise_Ridged_scurve5_double_R_double(ctx, ((frame[27].d) - (jdouble((frame[31].i)))));
	frame[35].d = temp0;
	LINE_NUMBER(60);
	jdouble temp1 = (jdouble)SM_arc_util_noise_Ridged_scurve5_double_R_double(ctx, ((frame[29].d) - (jdouble((frame[33].i)))));
	frame[37].d = temp1;
	}
label_26:;
	{
	LINE_NUMBER(70);
	jdouble temp0 = (jdouble)SM_arc_util_noise_Ridged_gradientNoise_double_double_int_int_int_R_double(ctx, (frame[27].d), (frame[29].d), (frame[31].i), (frame[33].i), (((frame[0].i) + (frame[26].i)) & (jint(2147483647))));
	frame[39].d = temp0;
	LINE_NUMBER(71);
	jdouble temp1 = (jdouble)SM_arc_util_noise_Ridged_gradientNoise_double_double_int_int_int_R_double(ctx, (frame[27].d), (frame[29].d), (frame[32].i), (frame[33].i), (((frame[0].i) + (frame[26].i)) & (jint(2147483647))));
	frame[41].d = temp1;
	LINE_NUMBER(72);
	jdouble temp2 = (jdouble)SM_arc_util_noise_Ridged_lerp_double_double_double_R_double(ctx, (frame[39].d), (frame[41].d), (frame[35].d));
	frame[43].d = temp2;
	LINE_NUMBER(73);
	jdouble temp3 = (jdouble)SM_arc_util_noise_Ridged_gradientNoise_double_double_int_int_int_R_double(ctx, (frame[27].d), (frame[29].d), (frame[31].i), (frame[34].i), (((frame[0].i) + (frame[26].i)) & (jint(2147483647))));
	frame[39].d = temp3;
	LINE_NUMBER(74);
	jdouble temp4 = (jdouble)SM_arc_util_noise_Ridged_gradientNoise_double_double_int_int_int_R_double(ctx, (frame[27].d), (frame[29].d), (frame[32].i), (frame[34].i), (((frame[0].i) + (frame[26].i)) & (jint(2147483647))));
	frame[41].d = temp4;
	LINE_NUMBER(75);
	jdouble temp5 = (jdouble)SM_arc_util_noise_Ridged_lerp_double_double_double_R_double(ctx, (frame[39].d), (frame[41].d), (frame[35].d));
	frame[45].d = temp5;
	LINE_NUMBER(76);
	jdouble temp6 = (jdouble)SM_arc_util_noise_Ridged_lerp_double_double_double_R_double(ctx, (frame[43].d), (frame[45].d), (frame[37].d));
	frame[47].d = temp6;
	LINE_NUMBER(78);
	frame[14].d = (frame[47].d);
	LINE_NUMBER(81);
	jdouble temp7 = (jdouble)SM_java_lang_Math_abs_double_R_double(ctx, (frame[14].d));
	frame[14].d = temp7;
	LINE_NUMBER(82);
	frame[14].d = ((frame[20].d) - (frame[14].d));
	LINE_NUMBER(85);
	frame[14].d = ((frame[14].d) * (frame[14].d));
	LINE_NUMBER(89);
	frame[14].d = ((frame[14].d) * (frame[18].d));
	LINE_NUMBER(92);
	frame[18].d = ((frame[14].d) * (frame[22].d));
	LINE_NUMBER(93);
	if ((doubleCompare((frame[18].d), (jdouble(1)), -1)) <= 0) goto label_45;
	}
	{
	LINE_NUMBER(94);
	frame[18].d = (jdouble(1));
	}
label_45:;
	{
	LINE_NUMBER(96);
	if ((doubleCompare((frame[18].d), (jdouble(0)), 1)) >= 0) goto label_47;
	}
	{
	LINE_NUMBER(97);
	frame[18].d = (jdouble(0));
	}
label_47:;
	{
	LINE_NUMBER(101);
	frame[16].d = ((frame[16].d) + ((frame[14].d) * (frame[24].d)));
	LINE_NUMBER(103);
	frame[24].d = ((frame[24].d) * (frame[6].d));
	LINE_NUMBER(106);
	frame[10].d = ((frame[10].d) * (jdouble(2.0)));
	LINE_NUMBER(107);
	frame[12].d = ((frame[12].d) * (jdouble(2.0)));
	LINE_NUMBER(34);
	INST_IINC(26, 1);
	goto label_8;
	}
label_9:;
	{
	LINE_NUMBER(110);
	popStackFrame(ctx);
	return (jfloat((((frame[16].d) * (jdouble(1.25))) - (jdouble(1)))));
	}

	popStackFrame(ctx);
}

jfloat SM_arc_util_noise_Ridged_noise3d_int_double_double_double_float_R_float(jcontext ctx, jint param0, jdouble param1, jdouble param2, jdouble param3, jfloat param4) {
	jtype frame[17];
	auto stack = &frame[8];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/util/noise/Ridged:noise3d", 17 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_util_noise_Ridged(ctx);
	frame[0].i = param0;
	frame[1].d = param1;
	frame[3].d = param2;
	frame[5].d = param3;
	frame[7].f = param4;
	{
	LINE_NUMBER(114);
	jfloat temp0 = (jfloat)SM_arc_util_noise_Ridged_noise3d_int_double_double_double_int_float_R_float(ctx, (frame[0].i), (frame[1].d), (frame[3].d), (frame[5].d), (jint(1)), (frame[7].f));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jfloat SM_arc_util_noise_Ridged_noise3d_int_double_double_double_int_float_R_float(jcontext ctx, jint param0, jdouble param1, jdouble param2, jdouble param3, jint param4, jfloat param5) {
	jtype frame[71];
	auto stack = &frame[60];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/util/noise/Ridged:noise3d", 71 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_util_noise_Ridged(ctx);
	frame[0].i = param0;
	frame[1].d = param1;
	frame[3].d = param2;
	frame[5].d = param3;
	frame[7].i = param4;
	frame[8].f = param5;
	{
	LINE_NUMBER(118);
	frame[9].d = ((frame[1].d) * (jdouble((frame[8].f))));
	LINE_NUMBER(119);
	frame[11].d = ((frame[3].d) * (jdouble((frame[8].f))));
	LINE_NUMBER(120);
	frame[13].d = ((frame[5].d) * (jdouble((frame[8].f))));
	LINE_NUMBER(123);
	frame[17].d = (jdouble(0));
	LINE_NUMBER(124);
	frame[19].d = (jdouble(1));
	LINE_NUMBER(126);
	frame[21].d = (jdouble(1));
	LINE_NUMBER(127);
	frame[23].d = (jdouble(2.0));
	LINE_NUMBER(128);
	frame[25].d = (jdouble(0.5));
	LINE_NUMBER(129);
	frame[27].d = (jdouble(1));
	LINE_NUMBER(131);
	frame[29].i = (jint(0));
	}
label_10:;
	{
	if ((frame[29].i) >= (frame[7].i)) goto label_11;
	}
	{
	LINE_NUMBER(134);
	jdouble temp0 = (jdouble)SM_arc_util_noise_Ridged_range_double_R_double(ctx, (frame[9].d));
	frame[30].d = temp0;
	LINE_NUMBER(135);
	jdouble temp1 = (jdouble)SM_arc_util_noise_Ridged_range_double_R_double(ctx, (frame[11].d));
	frame[32].d = temp1;
	LINE_NUMBER(136);
	jdouble temp2 = (jdouble)SM_arc_util_noise_Ridged_range_double_R_double(ctx, (frame[13].d));
	frame[34].d = temp2;
	LINE_NUMBER(140);
	if ((doubleCompare((frame[30].d), (jdouble(0)), -1)) <= 0) goto label_16;
	}
	{
	jint temp0 = jint((frame[30].d));
	sp[0].i = temp0;
	sp += 1;
	goto label_17;
	}
label_16:;
	{
	jint temp0 = (jint((frame[30].d))) - (jint(1));
	sp[0].i = temp0;
	sp += 1;
	}
label_17:;
	{
	sp -= 1;
	frame[36].i = sp[0].i;
	LINE_NUMBER(141);
	frame[37].i = ((frame[36].i) + (jint(1)));
	LINE_NUMBER(142);
	if ((doubleCompare((frame[32].d), (jdouble(0)), -1)) <= 0) goto label_20;
	}
	{
	jint temp0 = jint((frame[32].d));
	sp[0].i = temp0;
	sp += 1;
	goto label_21;
	}
label_20:;
	{
	jint temp0 = (jint((frame[32].d))) - (jint(1));
	sp[0].i = temp0;
	sp += 1;
	}
label_21:;
	{
	sp -= 1;
	frame[38].i = sp[0].i;
	LINE_NUMBER(143);
	frame[39].i = ((frame[38].i) + (jint(1)));
	LINE_NUMBER(144);
	if ((doubleCompare((frame[34].d), (jdouble(0)), -1)) <= 0) goto label_24;
	}
	{
	jint temp0 = jint((frame[34].d));
	sp[0].i = temp0;
	sp += 1;
	goto label_25;
	}
label_24:;
	{
	jint temp0 = (jint((frame[34].d))) - (jint(1));
	sp[0].i = temp0;
	sp += 1;
	}
label_25:;
	{
	sp -= 1;
	frame[40].i = sp[0].i;
	LINE_NUMBER(145);
	frame[41].i = ((frame[40].i) + (jint(1)));
	LINE_NUMBER(149);
	frame[42].d = (jdouble(0));
	frame[44].d = (jdouble(0));
	frame[46].d = (jdouble(0));
	LINE_NUMBER(150);
	switch((jint(2))) {
		case 0: goto label_31;
		case 1: goto label_32;
		case 2: goto label_33;
		default: goto label_34;
	}
	}
label_31:;
	{
	LINE_NUMBER(152);
	frame[42].d = ((frame[30].d) - (jdouble((frame[36].i))));
	LINE_NUMBER(153);
	frame[44].d = ((frame[32].d) - (jdouble((frame[38].i))));
	LINE_NUMBER(154);
	frame[46].d = ((frame[34].d) - (jdouble((frame[40].i))));
	LINE_NUMBER(155);
	goto label_34;
	}
label_32:;
	{
	LINE_NUMBER(157);
	jdouble temp0 = (jdouble)SM_arc_util_noise_Ridged_scurve3_double_R_double(ctx, ((frame[30].d) - (jdouble((frame[36].i)))));
	frame[42].d = temp0;
	LINE_NUMBER(158);
	jdouble temp1 = (jdouble)SM_arc_util_noise_Ridged_scurve3_double_R_double(ctx, ((frame[32].d) - (jdouble((frame[38].i)))));
	frame[44].d = temp1;
	LINE_NUMBER(159);
	jdouble temp2 = (jdouble)SM_arc_util_noise_Ridged_scurve3_double_R_double(ctx, ((frame[34].d) - (jdouble((frame[40].i)))));
	frame[46].d = temp2;
	LINE_NUMBER(160);
	goto label_34;
	}
label_33:;
	{
	LINE_NUMBER(162);
	jdouble temp0 = (jdouble)SM_arc_util_noise_Ridged_scurve5_double_R_double(ctx, ((frame[30].d) - (jdouble((frame[36].i)))));
	frame[42].d = temp0;
	LINE_NUMBER(163);
	jdouble temp1 = (jdouble)SM_arc_util_noise_Ridged_scurve5_double_R_double(ctx, ((frame[32].d) - (jdouble((frame[38].i)))));
	frame[44].d = temp1;
	LINE_NUMBER(164);
	jdouble temp2 = (jdouble)SM_arc_util_noise_Ridged_scurve5_double_R_double(ctx, ((frame[34].d) - (jdouble((frame[40].i)))));
	frame[46].d = temp2;
	}
label_34:;
	{
	LINE_NUMBER(174);
	jdouble temp0 = (jdouble)SM_arc_util_noise_Ridged_gradientNoise3D_double_double_double_int_int_int_int_R_double(ctx, (frame[30].d), (frame[32].d), (frame[34].d), (frame[36].i), (frame[38].i), (frame[40].i), (((frame[0].i) + (frame[29].i)) & (jint(2147483647))));
	frame[48].d = temp0;
	LINE_NUMBER(175);
	jdouble temp1 = (jdouble)SM_arc_util_noise_Ridged_gradientNoise3D_double_double_double_int_int_int_int_R_double(ctx, (frame[30].d), (frame[32].d), (frame[34].d), (frame[37].i), (frame[38].i), (frame[40].i), (((frame[0].i) + (frame[29].i)) & (jint(2147483647))));
	frame[50].d = temp1;
	LINE_NUMBER(176);
	jdouble temp2 = (jdouble)SM_arc_util_noise_Ridged_lerp_double_double_double_R_double(ctx, (frame[48].d), (frame[50].d), (frame[42].d));
	frame[52].d = temp2;
	LINE_NUMBER(177);
	jdouble temp3 = (jdouble)SM_arc_util_noise_Ridged_gradientNoise3D_double_double_double_int_int_int_int_R_double(ctx, (frame[30].d), (frame[32].d), (frame[34].d), (frame[36].i), (frame[39].i), (frame[40].i), (((frame[0].i) + (frame[29].i)) & (jint(2147483647))));
	frame[48].d = temp3;
	LINE_NUMBER(178);
	jdouble temp4 = (jdouble)SM_arc_util_noise_Ridged_gradientNoise3D_double_double_double_int_int_int_int_R_double(ctx, (frame[30].d), (frame[32].d), (frame[34].d), (frame[37].i), (frame[39].i), (frame[40].i), (((frame[0].i) + (frame[29].i)) & (jint(2147483647))));
	frame[50].d = temp4;
	LINE_NUMBER(179);
	jdouble temp5 = (jdouble)SM_arc_util_noise_Ridged_lerp_double_double_double_R_double(ctx, (frame[48].d), (frame[50].d), (frame[42].d));
	frame[54].d = temp5;
	LINE_NUMBER(180);
	jdouble temp6 = (jdouble)SM_arc_util_noise_Ridged_lerp_double_double_double_R_double(ctx, (frame[52].d), (frame[54].d), (frame[44].d));
	frame[56].d = temp6;
	LINE_NUMBER(181);
	jdouble temp7 = (jdouble)SM_arc_util_noise_Ridged_gradientNoise3D_double_double_double_int_int_int_int_R_double(ctx, (frame[30].d), (frame[32].d), (frame[34].d), (frame[36].i), (frame[38].i), (frame[41].i), (((frame[0].i) + (frame[29].i)) & (jint(2147483647))));
	frame[48].d = temp7;
	LINE_NUMBER(182);
	jdouble temp8 = (jdouble)SM_arc_util_noise_Ridged_gradientNoise3D_double_double_double_int_int_int_int_R_double(ctx, (frame[30].d), (frame[32].d), (frame[34].d), (frame[37].i), (frame[38].i), (frame[41].i), (((frame[0].i) + (frame[29].i)) & (jint(2147483647))));
	frame[50].d = temp8;
	LINE_NUMBER(183);
	jdouble temp9 = (jdouble)SM_arc_util_noise_Ridged_lerp_double_double_double_R_double(ctx, (frame[48].d), (frame[50].d), (frame[42].d));
	frame[52].d = temp9;
	LINE_NUMBER(184);
	jdouble temp10 = (jdouble)SM_arc_util_noise_Ridged_gradientNoise3D_double_double_double_int_int_int_int_R_double(ctx, (frame[30].d), (frame[32].d), (frame[34].d), (frame[36].i), (frame[39].i), (frame[41].i), (((frame[0].i) + (frame[29].i)) & (jint(2147483647))));
	frame[48].d = temp10;
	LINE_NUMBER(185);
	jdouble temp11 = (jdouble)SM_arc_util_noise_Ridged_gradientNoise3D_double_double_double_int_int_int_int_R_double(ctx, (frame[30].d), (frame[32].d), (frame[34].d), (frame[37].i), (frame[39].i), (frame[41].i), (((frame[0].i) + (frame[29].i)) & (jint(2147483647))));
	frame[50].d = temp11;
	LINE_NUMBER(186);
	jdouble temp12 = (jdouble)SM_arc_util_noise_Ridged_lerp_double_double_double_R_double(ctx, (frame[48].d), (frame[50].d), (frame[42].d));
	frame[54].d = temp12;
	LINE_NUMBER(187);
	jdouble temp13 = (jdouble)SM_arc_util_noise_Ridged_lerp_double_double_double_R_double(ctx, (frame[52].d), (frame[54].d), (frame[44].d));
	frame[58].d = temp13;
	LINE_NUMBER(189);
	jdouble temp14 = (jdouble)SM_arc_util_noise_Ridged_lerp_double_double_double_R_double(ctx, (frame[56].d), (frame[58].d), (frame[46].d));
	frame[15].d = temp14;
	LINE_NUMBER(192);
	jdouble temp15 = (jdouble)SM_java_lang_Math_abs_double_R_double(ctx, (frame[15].d));
	frame[15].d = temp15;
	LINE_NUMBER(193);
	frame[15].d = ((frame[21].d) - (frame[15].d));
	LINE_NUMBER(196);
	frame[15].d = ((frame[15].d) * (frame[15].d));
	LINE_NUMBER(200);
	frame[15].d = ((frame[15].d) * (frame[19].d));
	LINE_NUMBER(203);
	frame[19].d = ((frame[15].d) * (frame[23].d));
	LINE_NUMBER(204);
	if ((doubleCompare((frame[19].d), (jdouble(1)), -1)) <= 0) goto label_63;
	}
	{
	LINE_NUMBER(205);
	frame[19].d = (jdouble(1));
	}
label_63:;
	{
	LINE_NUMBER(207);
	if ((doubleCompare((frame[19].d), (jdouble(0)), 1)) >= 0) goto label_65;
	}
	{
	LINE_NUMBER(208);
	frame[19].d = (jdouble(0));
	}
label_65:;
	{
	LINE_NUMBER(212);
	frame[17].d = ((frame[17].d) + ((frame[15].d) * (frame[27].d)));
	LINE_NUMBER(214);
	frame[27].d = ((frame[27].d) * (frame[25].d));
	LINE_NUMBER(217);
	frame[9].d = ((frame[9].d) * (jdouble(2.0)));
	LINE_NUMBER(218);
	frame[11].d = ((frame[11].d) * (jdouble(2.0)));
	LINE_NUMBER(219);
	frame[13].d = ((frame[13].d) * (jdouble(2.0)));
	LINE_NUMBER(131);
	INST_IINC(29, 1);
	goto label_10;
	}
label_11:;
	{
	LINE_NUMBER(222);
	popStackFrame(ctx);
	return (jfloat((((frame[17].d) * (jdouble(1.25))) - (jdouble(1)))));
	}

	popStackFrame(ctx);
}

jdouble SM_arc_util_noise_Ridged_range_double_R_double(jcontext ctx, jdouble param0) {
	jtype frame[8];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/util/noise/Ridged:range", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_util_noise_Ridged(ctx);
	frame[0].d = param0;
	{
	LINE_NUMBER(226);
	if ((doubleCompare((frame[0].d), (jdouble(1,073742e+09)), -1)) < 0) goto label_1;
	}
	{
	LINE_NUMBER(227);
	popStackFrame(ctx);
	return (((jdouble(2.0)) * (fmod((frame[0].d), (jdouble(1,073742e+09))))) - (jdouble(1,073742e+09)));
	}
label_1:;
	{
	LINE_NUMBER(228);
	if ((doubleCompare((frame[0].d), (jdouble(-1,073742e+09)), 1)) > 0) goto label_3;
	}
	{
	LINE_NUMBER(229);
	popStackFrame(ctx);
	return (((jdouble(2.0)) * (fmod((frame[0].d), (jdouble(1,073742e+09))))) + (jdouble(1,073742e+09)));
	}
label_3:;
	{
	LINE_NUMBER(231);
	popStackFrame(ctx);
	return (frame[0].d);
	}

	popStackFrame(ctx);
}

jdouble SM_arc_util_noise_Ridged_gradientNoise3D_double_double_double_int_int_int_int_R_double(jcontext ctx, jdouble param0, jdouble param1, jdouble param2, jint param3, jint param4, jint param5, jint param6) {
	jtype frame[29];
	auto stack = &frame[23];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/util/noise/Ridged:gradientNoise3D", 29 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_util_noise_Ridged(ctx);
	frame[0].d = param0;
	frame[2].d = param1;
	frame[4].d = param2;
	frame[6].i = param3;
	frame[7].i = param4;
	frame[8].i = param5;
	frame[9].i = param6;
	{
	LINE_NUMBER(235);
	frame[10].i = (((((1619) * (frame[6].i)) + ((31337) * (frame[7].i))) + ((6971) * (frame[8].i))) + ((1013) * (frame[9].i)));
	LINE_NUMBER(237);
	frame[10].i = ((frame[10].i) ^ ((frame[10].i) >> (8)));
	LINE_NUMBER(238);
	frame[10].i = ((frame[10].i) & (255));
	LINE_NUMBER(240);
	frame[10].i = ((frame[10].i) * (jint(3)));
	LINE_NUMBER(242);
	clinit_arc_util_noise_VectorTable(ctx);
	sp[0].o = (jobject)SF_arc_util_noise_VectorTable_randomVectors;
	frame[11].d = ((jdouble)ARRAY_ACCESS(jdouble, sp[0].o, (frame[10].i)));
	LINE_NUMBER(243);
	clinit_arc_util_noise_VectorTable(ctx);
	sp[0].o = (jobject)SF_arc_util_noise_VectorTable_randomVectors;
	frame[13].d = ((jdouble)ARRAY_ACCESS(jdouble, sp[0].o, ((frame[10].i) + (jint(1)))));
	LINE_NUMBER(244);
	clinit_arc_util_noise_VectorTable(ctx);
	sp[0].o = (jobject)SF_arc_util_noise_VectorTable_randomVectors;
	frame[15].d = ((jdouble)ARRAY_ACCESS(jdouble, sp[0].o, ((frame[10].i) + (jint(2)))));
	LINE_NUMBER(250);
	frame[17].d = ((frame[0].d) - (jdouble((frame[6].i))));
	LINE_NUMBER(251);
	frame[19].d = ((frame[2].d) - (jdouble((frame[7].i))));
	LINE_NUMBER(252);
	frame[21].d = ((frame[4].d) - (jdouble((frame[8].i))));
	LINE_NUMBER(257);
	popStackFrame(ctx);
	return (((((frame[11].d) * (frame[17].d)) + ((frame[13].d) * (frame[19].d))) + ((frame[15].d) * (frame[21].d))) * (jdouble(2.12)));
	}

	popStackFrame(ctx);
}

jdouble SM_arc_util_noise_Ridged_gradientNoise_double_double_int_int_int_R_double(jcontext ctx, jdouble param0, jdouble param1, jint param2, jint param3, jint param4) {
	jtype frame[22];
	auto stack = &frame[16];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/util/noise/Ridged:gradientNoise", 22 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_util_noise_Ridged(ctx);
	frame[0].d = param0;
	frame[2].d = param1;
	frame[4].i = param2;
	frame[5].i = param3;
	frame[6].i = param4;
	{
	LINE_NUMBER(261);
	frame[7].i = ((((1619) * (frame[4].i)) + ((31337) * (frame[5].i))) + ((1013) * (frame[6].i)));
	LINE_NUMBER(263);
	frame[7].i = ((frame[7].i) ^ ((frame[7].i) >> (8)));
	LINE_NUMBER(264);
	frame[7].i = ((frame[7].i) & (255));
	LINE_NUMBER(266);
	frame[7].i = ((frame[7].i) * (jint(3)));
	LINE_NUMBER(268);
	clinit_arc_util_noise_VectorTable(ctx);
	sp[0].o = (jobject)SF_arc_util_noise_VectorTable_randomVectors;
	frame[8].d = ((jdouble)ARRAY_ACCESS(jdouble, sp[0].o, (frame[7].i)));
	LINE_NUMBER(269);
	clinit_arc_util_noise_VectorTable(ctx);
	sp[0].o = (jobject)SF_arc_util_noise_VectorTable_randomVectors;
	frame[10].d = ((jdouble)ARRAY_ACCESS(jdouble, sp[0].o, ((frame[7].i) + (jint(1)))));
	LINE_NUMBER(274);
	frame[12].d = ((frame[0].d) - (jdouble((frame[4].i))));
	LINE_NUMBER(275);
	frame[14].d = ((frame[2].d) - (jdouble((frame[5].i))));
	LINE_NUMBER(280);
	popStackFrame(ctx);
	return ((((frame[8].d) * (frame[12].d)) + ((frame[10].d) * (frame[14].d))) * (jdouble(2.12)));
	}

	popStackFrame(ctx);
}

jdouble SM_arc_util_noise_Ridged_lerp_double_double_double_R_double(jcontext ctx, jdouble param0, jdouble param1, jdouble param2) {
	jtype frame[12];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/util/noise/Ridged:lerp", 12 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_util_noise_Ridged(ctx);
	frame[0].d = param0;
	frame[2].d = param1;
	frame[4].d = param2;
	{
	LINE_NUMBER(284);
	popStackFrame(ctx);
	return ((((jdouble(1)) - (frame[4].d)) * (frame[0].d)) + ((frame[4].d) * (frame[2].d)));
	}

	popStackFrame(ctx);
}

jdouble SM_arc_util_noise_Ridged_scurve3_double_R_double(jcontext ctx, jdouble param0) {
	jtype frame[10];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/util/noise/Ridged:scurve3", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_util_noise_Ridged(ctx);
	frame[0].d = param0;
	{
	LINE_NUMBER(288);
	popStackFrame(ctx);
	return (((frame[0].d) * (frame[0].d)) * ((jdouble(3.0)) - ((jdouble(2.0)) * (frame[0].d))));
	}

	popStackFrame(ctx);
}

jdouble SM_arc_util_noise_Ridged_scurve5_double_R_double(jcontext ctx, jdouble param0) {
	jtype frame[14];
	auto stack = &frame[8];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/util/noise/Ridged:scurve5", 14 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_util_noise_Ridged(ctx);
	frame[0].d = param0;
	{
	LINE_NUMBER(292);
	frame[2].d = (((frame[0].d) * (frame[0].d)) * (frame[0].d));
	LINE_NUMBER(293);
	frame[4].d = ((frame[2].d) * (frame[0].d));
	LINE_NUMBER(294);
	frame[6].d = ((frame[4].d) * (frame[0].d));
	LINE_NUMBER(295);
	popStackFrame(ctx);
	return ((((jdouble(6.0)) * (frame[6].d)) - ((jdouble(15.0)) * (frame[4].d))) + ((jdouble(10.0)) * (frame[2].d)));
	}

	popStackFrame(ctx);
}

void *vtable_arc_util_noise_Ridged[] {
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
	{ "X_NOISE_GEN", &class_int, (intptr_t) &SF_arc_util_noise_Ridged_X_NOISE_GEN, "I", 24 },
	{ "Y_NOISE_GEN", &class_int, (intptr_t) &SF_arc_util_noise_Ridged_Y_NOISE_GEN, "I", 24 },
	{ "Z_NOISE_GEN", &class_int, (intptr_t) &SF_arc_util_noise_Ridged_Z_NOISE_GEN, "I", 24 },
	{ "SEED_NOISE_GEN", &class_int, (intptr_t) &SF_arc_util_noise_Ridged_SEED_NOISE_GEN, "I", 24 },
	{ "SHIFT_NOISE_GEN", &class_int, (intptr_t) &SF_arc_util_noise_Ridged_SHIFT_NOISE_GEN, "I", 24 },
	{ "quality", &class_int, (intptr_t) &SF_arc_util_noise_Ridged_quality, "I", 24 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_arc_util_noise_Ridged, 0, "()V", 2 },
	{ "noise2d", (intptr_t) SM_arc_util_noise_Ridged_noise2d_int_double_double_double_R_float, 0, "(IDDD)F", 9 },
	{ "noise2d", (intptr_t) SM_arc_util_noise_Ridged_noise2d_int_double_double_int_double_R_float, 0, "(IDDID)F", 9 },
	{ "noise2d", (intptr_t) SM_arc_util_noise_Ridged_noise2d_int_double_double_int_double_double_R_float, 0, "(IDDIDD)F", 9 },
	{ "noise3d", (intptr_t) SM_arc_util_noise_Ridged_noise3d_int_double_double_double_float_R_float, 0, "(IDDDF)F", 9 },
	{ "noise3d", (intptr_t) SM_arc_util_noise_Ridged_noise3d_int_double_double_double_int_float_R_float, 0, "(IDDDIF)F", 9 },
	{ "range", (intptr_t) SM_arc_util_noise_Ridged_range_double_R_double, 0, "(D)D", 8 },
	{ "gradientNoise3D", (intptr_t) SM_arc_util_noise_Ridged_gradientNoise3D_double_double_double_int_int_int_int_R_double, 0, "(DDDIIII)D", 8 },
	{ "gradientNoise", (intptr_t) SM_arc_util_noise_Ridged_gradientNoise_double_double_int_int_int_R_double, 0, "(DDIII)D", 8 },
	{ "lerp", (intptr_t) SM_arc_util_noise_Ridged_lerp_double_double_double_R_double, 0, "(DDD)D", 8 },
	{ "scurve3", (intptr_t) SM_arc_util_noise_Ridged_scurve3_double_R_double, 0, "(D)D", 8 },
	{ "scurve5", (intptr_t) SM_arc_util_noise_Ridged_scurve5_double_R_double, 0, "(D)D", 8 },
};

Class class_arc_util_noise_Ridged{
		.nativeName = (intptr_t) "arc/util/noise/Ridged",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(arc_util_noise_Ridged),
		.classVtable = (intptr_t) vtable_arc_util_noise_Ridged,
		.staticInitializer = (intptr_t) clinit_arc_util_noise_Ridged,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_arc_util_noise_Ridged,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 33,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 6,
		.nativeFields = (intptr_t) fields,
		.methodCount = 12,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 11,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_arc_util_noise_Ridged = registerClass(&class_arc_util_noise_Ridged);

}
