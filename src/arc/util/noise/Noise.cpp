#include "arc/util/noise/Noise.h"
#include "java/lang/Math.h"
#include "java/lang/Object.h"
#include "java/util/Random.h"
#include "arc/util/noise/Noise.h"

extern "C" {

jint SF_arc_util_noise_Noise_seed;
jint SF_arc_util_noise_Noise_P;
jint SF_arc_util_noise_Noise_B;
jint SF_arc_util_noise_Noise_M;
jint SF_arc_util_noise_Noise_NP;
jint SF_arc_util_noise_Noise_N;
jobject SF_arc_util_noise_Noise_p;
jobject SF_arc_util_noise_Noise_g2;
jobject SF_arc_util_noise_Noise_g1;
jobject SF_arc_util_noise_Noise_points;

void mark_arc_util_noise_Noise(jobject object, jint mark, jint depth) {
	if (!object) {
		if (SF_arc_util_noise_Noise_p)
			((gc_mark_ptr) ((jclass) ((jobject) SF_arc_util_noise_Noise_p)->clazz)->markFunction)((jobject) SF_arc_util_noise_Noise_p, mark, depth + 1);
		if (SF_arc_util_noise_Noise_g2)
			((gc_mark_ptr) ((jclass) ((jobject) SF_arc_util_noise_Noise_g2)->clazz)->markFunction)((jobject) SF_arc_util_noise_Noise_g2, mark, depth + 1);
		if (SF_arc_util_noise_Noise_g1)
			((gc_mark_ptr) ((jclass) ((jobject) SF_arc_util_noise_Noise_g1)->clazz)->markFunction)((jobject) SF_arc_util_noise_Noise_g1, mark, depth + 1);
		if (SF_arc_util_noise_Noise_points)
			((gc_mark_ptr) ((jclass) ((jobject) SF_arc_util_noise_Noise_points)->clazz)->markFunction)((jobject) SF_arc_util_noise_Noise_points, mark, depth + 1);
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
	auto self = (arc_util_noise_Noise *) object;
}

void init_arc_util_noise_Noise(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/util/noise/Noise:<init>", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_util_noise_Noise(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(5);
	init_java_lang_Object(ctx, (frame[0].o));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jdouble SM_arc_util_noise_Noise_lerp_double_double_double_R_double(jcontext ctx, jdouble param0, jdouble param1, jdouble param2) {
	jtype frame[14];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/util/noise/Noise:lerp", 14 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_util_noise_Noise(ctx);
	frame[0].d = param0;
	frame[2].d = param1;
	frame[4].d = param2;
	{
	LINE_NUMBER(23);
	popStackFrame(ctx);
	return ((frame[2].d) + ((frame[0].d) * ((frame[4].d) - (frame[2].d))));
	}

	popStackFrame(ctx);
}

jdouble SM_arc_util_noise_Noise_s_curve_double_R_double(jcontext ctx, jdouble param0) {
	jtype frame[8];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/util/noise/Noise:s_curve", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_util_noise_Noise(ctx);
	frame[0].d = param0;
	{
	LINE_NUMBER(27);
	popStackFrame(ctx);
	return (((frame[0].d) * (frame[0].d)) * (((jdouble(3.0)) - (frame[0].d)) - (frame[0].d)));
	}

	popStackFrame(ctx);
}

jdouble SM_arc_util_noise_Noise_rawNoise_double_R_double(jcontext ctx, jdouble param0) {
	jtype frame[22];
	auto stack = &frame[16];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/util/noise/Noise:rawNoise", 22 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_util_noise_Noise(ctx);
	frame[0].d = param0;
	{
	LINE_NUMBER(33);
	frame[10].d = ((frame[0].d) + (jdouble(256.0)));
	LINE_NUMBER(34);
	frame[2].i = ((jint((frame[10].d))) & (255));
	LINE_NUMBER(35);
	frame[3].i = (((frame[2].i) + (jint(1))) & (255));
	LINE_NUMBER(36);
	frame[4].d = ((frame[10].d) - (jdouble((jint((frame[10].d))))));
	LINE_NUMBER(37);
	frame[6].d = ((frame[4].d) - (jdouble(1)));
	LINE_NUMBER(39);
	jdouble temp0 = (jdouble)SM_arc_util_noise_Noise_s_curve_double_R_double(ctx, (frame[4].d));
	frame[8].d = temp0;
	LINE_NUMBER(40);
	jdouble temp1 = frame[4].d;
	clinit_arc_util_noise_Noise(ctx);
	sp[0].o = (jobject)SF_arc_util_noise_Noise_g1;
	clinit_arc_util_noise_Noise(ctx);
	sp[1].o = (jobject)SF_arc_util_noise_Noise_p;
	frame[12].d = (temp1 * ((jdouble)ARRAY_ACCESS(jdouble, sp[0].o, ((jint)ARRAY_ACCESS(jint, sp[1].o, (frame[2].i))))));
	LINE_NUMBER(41);
	jdouble temp2 = frame[6].d;
	clinit_arc_util_noise_Noise(ctx);
	sp[0].o = (jobject)SF_arc_util_noise_Noise_g1;
	clinit_arc_util_noise_Noise(ctx);
	sp[1].o = (jobject)SF_arc_util_noise_Noise_p;
	frame[14].d = (temp2 * ((jdouble)ARRAY_ACCESS(jdouble, sp[0].o, ((jint)ARRAY_ACCESS(jint, sp[1].o, (frame[3].i))))));
	LINE_NUMBER(43);
	jdouble temp3 = (jdouble)SM_arc_util_noise_Noise_lerp_double_double_double_R_double(ctx, (frame[8].d), (frame[12].d), (frame[14].d));
	popStackFrame(ctx);
	return temp3;
	}

	popStackFrame(ctx);
}

jdouble SM_arc_util_noise_Noise_snoise_float_float_float_float_float_R_double(jcontext ctx, jfloat param0, jfloat param1, jfloat param2, jfloat param3, jfloat param4) {
	jtype frame[9];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/util/noise/Noise:snoise", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_util_noise_Noise(ctx);
	frame[0].f = param0;
	frame[1].f = param1;
	frame[2].f = param2;
	frame[3].f = param3;
	frame[4].f = param4;
	{
	LINE_NUMBER(48);
	jdouble temp0 = (jdouble)SM_arc_util_noise_Noise_rawNoise_double_double_R_double(ctx, (jdouble(((frame[0].f) / (frame[2].f)))), (jdouble(((frame[1].f) / (frame[2].f)))));
	jdouble temp1 = (jdouble)SM_java_lang_Math_pow_double_double_R_double(ctx, (temp0 * (jdouble((frame[3].f)))), (jdouble((frame[4].f))));
	popStackFrame(ctx);
	return temp1;
	}

	popStackFrame(ctx);
}

jfloat SM_arc_util_noise_Noise_snoise_float_float_float_float_R_float(jcontext ctx, jfloat param0, jfloat param1, jfloat param2, jfloat param3) {
	jtype frame[8];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/util/noise/Noise:snoise", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_util_noise_Noise(ctx);
	frame[0].f = param0;
	frame[1].f = param1;
	frame[2].f = param2;
	frame[3].f = param3;
	{
	LINE_NUMBER(52);
	jdouble temp0 = (jdouble)SM_arc_util_noise_Noise_rawNoise_double_double_R_double(ctx, (jdouble(((frame[0].f) / (frame[2].f)))), (jdouble(((frame[1].f) / (frame[2].f)))));
	popStackFrame(ctx);
	return (jfloat((temp0 * (jdouble((frame[3].f))))));
	}

	popStackFrame(ctx);
}

jfloat SM_arc_util_noise_Noise_snoise3_float_float_float_float_float_R_float(jcontext ctx, jfloat param0, jfloat param1, jfloat param2, jfloat param3, jfloat param4) {
	jtype frame[11];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/util/noise/Noise:snoise3", 11 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_util_noise_Noise(ctx);
	frame[0].f = param0;
	frame[1].f = param1;
	frame[2].f = param2;
	frame[3].f = param3;
	frame[4].f = param4;
	{
	LINE_NUMBER(56);
	jdouble temp0 = (jdouble)SM_arc_util_noise_Noise_rawNoise_double_double_double_R_double(ctx, (jdouble(((frame[0].f) / (frame[3].f)))), (jdouble(((frame[1].f) / (frame[3].f)))), (jdouble(((frame[2].f) / (frame[3].f)))));
	popStackFrame(ctx);
	return (jfloat((temp0 * (jdouble((frame[4].f))))));
	}

	popStackFrame(ctx);
}

jfloat SM_arc_util_noise_Noise_nnoise_float_float_float_float_R_float(jcontext ctx, jfloat param0, jfloat param1, jfloat param2, jfloat param3) {
	jtype frame[8];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/util/noise/Noise:nnoise", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_util_noise_Noise(ctx);
	frame[0].f = param0;
	frame[1].f = param1;
	frame[2].f = param2;
	frame[3].f = param3;
	{
	LINE_NUMBER(60);
	jfloat temp0 = (jfloat)SM_arc_util_noise_Noise_snoise_float_float_float_float_R_float(ctx, (frame[0].f), (frame[1].f), (frame[2].f), (frame[3].f));
	popStackFrame(ctx);
	return (jfloat(((jdouble((temp0 + (frame[3].f)))) / (jdouble(2.0)))));
	}

	popStackFrame(ctx);
}

jfloat SM_arc_util_noise_Noise_noise_float_float_float_float_R_float(jcontext ctx, jfloat param0, jfloat param1, jfloat param2, jfloat param3) {
	jtype frame[8];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/util/noise/Noise:noise", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_util_noise_Noise(ctx);
	frame[0].f = param0;
	frame[1].f = param1;
	frame[2].f = param2;
	frame[3].f = param3;
	{
	LINE_NUMBER(64);
	jfloat temp0 = (jfloat)SM_arc_util_noise_Noise_snoise_float_float_float_float_R_float(ctx, (frame[0].f), (frame[1].f), (frame[2].f), (frame[3].f));
	popStackFrame(ctx);
	return (jfloat(((jdouble(temp0)) / (jdouble(2.0)))));
	}

	popStackFrame(ctx);
}

jfloat SM_arc_util_noise_Noise_noise_float_float_float_float_float_R_float(jcontext ctx, jfloat param0, jfloat param1, jfloat param2, jfloat param3, jfloat param4) {
	jtype frame[10];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/util/noise/Noise:noise", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_util_noise_Noise(ctx);
	frame[0].f = param0;
	frame[1].f = param1;
	frame[2].f = param2;
	frame[3].f = param3;
	frame[4].f = param4;
	{
	LINE_NUMBER(68);
	jdouble temp0 = (jdouble)SM_arc_util_noise_Noise_snoise_float_float_float_float_float_R_double(ctx, (frame[0].f), (frame[1].f), (frame[2].f), (frame[3].f), (frame[4].f));
	popStackFrame(ctx);
	return (jfloat((temp0 / (jdouble(2.0)))));
	}

	popStackFrame(ctx);
}

jfloat SM_arc_util_noise_Noise_fnoise_float_float_float_float_R_float(jcontext ctx, jfloat param0, jfloat param1, jfloat param2, jfloat param3) {
	jtype frame[8];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/util/noise/Noise:fnoise", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_util_noise_Noise(ctx);
	frame[0].f = param0;
	frame[1].f = param1;
	frame[2].f = param2;
	frame[3].f = param3;
	{
	LINE_NUMBER(72);
	jdouble temp0 = (jdouble)SM_arc_util_noise_Noise_rawNoise_double_double_R_double(ctx, (jdouble(((frame[0].f) / (frame[2].f)))), (jdouble(((frame[1].f) / (frame[2].f)))));
	popStackFrame(ctx);
	return (jfloat((temp0 * (jdouble((frame[3].f))))));
	}

	popStackFrame(ctx);
}

jdouble SM_arc_util_noise_Noise_rawNoise_double_double_R_double(jcontext ctx, jdouble param0, jdouble param1) {
	jtype frame[43];
	auto stack = &frame[37];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/util/noise/Noise:rawNoise", 43 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_util_noise_Noise(ctx);
	frame[0].d = param0;
	frame[2].d = param1;
	{
	LINE_NUMBER(91);
	frame[28].d = ((frame[0].d) + (jdouble(256.0)));
	LINE_NUMBER(92);
	frame[4].i = ((jint((frame[28].d))) & (255));
	LINE_NUMBER(93);
	frame[5].i = (((frame[4].i) + (jint(1))) & (255));
	LINE_NUMBER(94);
	frame[12].d = ((frame[28].d) - (jdouble((jint((frame[28].d))))));
	LINE_NUMBER(95);
	frame[14].d = ((frame[12].d) - (jdouble(1)));
	LINE_NUMBER(97);
	frame[28].d = ((frame[2].d) + (jdouble(256.0)));
	LINE_NUMBER(98);
	frame[6].i = ((jint((frame[28].d))) & (255));
	LINE_NUMBER(99);
	frame[7].i = (((frame[6].i) + (jint(1))) & (255));
	LINE_NUMBER(100);
	frame[16].d = ((frame[28].d) - (jdouble((jint((frame[28].d))))));
	LINE_NUMBER(101);
	frame[18].d = ((frame[16].d) - (jdouble(1)));
	LINE_NUMBER(103);
	clinit_arc_util_noise_Noise(ctx);
	sp[0].o = (jobject)SF_arc_util_noise_Noise_p;
	frame[35].i = ((jint)ARRAY_ACCESS(jint, sp[0].o, (frame[4].i)));
	LINE_NUMBER(104);
	clinit_arc_util_noise_Noise(ctx);
	sp[0].o = (jobject)SF_arc_util_noise_Noise_p;
	frame[36].i = ((jint)ARRAY_ACCESS(jint, sp[0].o, (frame[5].i)));
	LINE_NUMBER(106);
	clinit_arc_util_noise_Noise(ctx);
	sp[0].o = (jobject)SF_arc_util_noise_Noise_p;
	frame[8].i = ((jint)ARRAY_ACCESS(jint, sp[0].o, ((frame[35].i) + (frame[6].i))));
	LINE_NUMBER(107);
	clinit_arc_util_noise_Noise(ctx);
	sp[0].o = (jobject)SF_arc_util_noise_Noise_p;
	frame[9].i = ((jint)ARRAY_ACCESS(jint, sp[0].o, ((frame[36].i) + (frame[6].i))));
	LINE_NUMBER(108);
	clinit_arc_util_noise_Noise(ctx);
	sp[0].o = (jobject)SF_arc_util_noise_Noise_p;
	frame[10].i = ((jint)ARRAY_ACCESS(jint, sp[0].o, ((frame[35].i) + (frame[7].i))));
	LINE_NUMBER(109);
	clinit_arc_util_noise_Noise(ctx);
	sp[0].o = (jobject)SF_arc_util_noise_Noise_p;
	frame[11].i = ((jint)ARRAY_ACCESS(jint, sp[0].o, ((frame[36].i) + (frame[7].i))));
	LINE_NUMBER(111);
	jdouble temp0 = (jdouble)SM_arc_util_noise_Noise_s_curve_double_R_double(ctx, (frame[12].d));
	frame[20].d = temp0;
	LINE_NUMBER(112);
	jdouble temp1 = (jdouble)SM_arc_util_noise_Noise_s_curve_double_R_double(ctx, (frame[16].d));
	frame[22].d = temp1;
	LINE_NUMBER(114);
	clinit_arc_util_noise_Noise(ctx);
	sp[0].o = (jobject)SF_arc_util_noise_Noise_g2;
	frame[34].o = ((jobject)ARRAY_ACCESS(jobject, sp[0].o, (frame[8].i)));
	LINE_NUMBER(115);
	frame[30].d = (((frame[12].d) * ((jdouble)ARRAY_ACCESS(jdouble, (frame[34].o), (jint(0))))) + ((frame[16].d) * ((jdouble)ARRAY_ACCESS(jdouble, (frame[34].o), (jint(1))))));
	LINE_NUMBER(116);
	clinit_arc_util_noise_Noise(ctx);
	sp[0].o = (jobject)SF_arc_util_noise_Noise_g2;
	frame[34].o = ((jobject)ARRAY_ACCESS(jobject, sp[0].o, (frame[9].i)));
	LINE_NUMBER(117);
	frame[32].d = (((frame[14].d) * ((jdouble)ARRAY_ACCESS(jdouble, (frame[34].o), (jint(0))))) + ((frame[16].d) * ((jdouble)ARRAY_ACCESS(jdouble, (frame[34].o), (jint(1))))));
	LINE_NUMBER(118);
	jdouble temp2 = (jdouble)SM_arc_util_noise_Noise_lerp_double_double_double_R_double(ctx, (frame[20].d), (frame[30].d), (frame[32].d));
	frame[24].d = temp2;
	LINE_NUMBER(120);
	clinit_arc_util_noise_Noise(ctx);
	sp[0].o = (jobject)SF_arc_util_noise_Noise_g2;
	frame[34].o = ((jobject)ARRAY_ACCESS(jobject, sp[0].o, (frame[10].i)));
	LINE_NUMBER(121);
	frame[30].d = (((frame[12].d) * ((jdouble)ARRAY_ACCESS(jdouble, (frame[34].o), (jint(0))))) + ((frame[18].d) * ((jdouble)ARRAY_ACCESS(jdouble, (frame[34].o), (jint(1))))));
	LINE_NUMBER(122);
	clinit_arc_util_noise_Noise(ctx);
	sp[0].o = (jobject)SF_arc_util_noise_Noise_g2;
	frame[34].o = ((jobject)ARRAY_ACCESS(jobject, sp[0].o, (frame[11].i)));
	LINE_NUMBER(123);
	frame[32].d = (((frame[14].d) * ((jdouble)ARRAY_ACCESS(jdouble, (frame[34].o), (jint(0))))) + ((frame[18].d) * ((jdouble)ARRAY_ACCESS(jdouble, (frame[34].o), (jint(1))))));
	LINE_NUMBER(124);
	jdouble temp3 = (jdouble)SM_arc_util_noise_Noise_lerp_double_double_double_R_double(ctx, (frame[20].d), (frame[30].d), (frame[32].d));
	frame[26].d = temp3;
	LINE_NUMBER(126);
	jdouble temp4 = (jdouble)SM_arc_util_noise_Noise_lerp_double_double_double_R_double(ctx, (frame[22].d), (frame[24].d), (frame[26].d));
	popStackFrame(ctx);
	return temp4;
	}

	popStackFrame(ctx);
}

jdouble SM_arc_util_noise_Noise_rawNoise_double_double_double_R_double(jcontext ctx, jdouble param0, jdouble param1, jdouble param2) {
	jtype frame[50];
	auto stack = &frame[44];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/util/noise/Noise:rawNoise", 50 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_util_noise_Noise(ctx);
	frame[0].d = param0;
	frame[2].d = param1;
	frame[4].d = param2;
	{
	LINE_NUMBER(147);
	jdouble temp0 = (jdouble)SM_java_lang_Math_floor_double_R_double(ctx, (frame[0].d));
	frame[6].i = (jint((fmod(temp0, (jdouble(256.0))))));
	LINE_NUMBER(148);
	if ((frame[6].i) >= 0) goto label_2;
	}
	LINE_NUMBER(149);
	INST_IINC(6, 256);
label_2:;
	{
	LINE_NUMBER(151);
	jdouble temp0 = frame[0].d;
	jdouble temp1 = (jdouble)SM_java_lang_Math_floor_double_R_double(ctx, (frame[0].d));
	frame[15].d = (temp0 - temp1);
	LINE_NUMBER(152);
	frame[17].d = ((frame[15].d) - (jdouble(1)));
	LINE_NUMBER(154);
	jdouble temp2 = (jdouble)SM_java_lang_Math_floor_double_R_double(ctx, (frame[2].d));
	frame[7].i = (jint((fmod(temp2, (jdouble(256.0))))));
	LINE_NUMBER(155);
	if ((frame[7].i) >= 0) goto label_7;
	}
	LINE_NUMBER(156);
	INST_IINC(7, 256);
label_7:;
	{
	LINE_NUMBER(158);
	jdouble temp0 = frame[2].d;
	jdouble temp1 = (jdouble)SM_java_lang_Math_floor_double_R_double(ctx, (frame[2].d));
	frame[19].d = (temp0 - temp1);
	LINE_NUMBER(159);
	frame[21].d = ((frame[19].d) - (jdouble(1)));
	LINE_NUMBER(161);
	jdouble temp2 = (jdouble)SM_java_lang_Math_floor_double_R_double(ctx, (frame[4].d));
	frame[8].i = (jint((fmod(temp2, (jdouble(256.0))))));
	LINE_NUMBER(162);
	if ((frame[8].i) >= 0) goto label_12;
	}
	LINE_NUMBER(163);
	INST_IINC(8, 256);
label_12:;
	{
	LINE_NUMBER(165);
	jdouble temp0 = frame[4].d;
	jdouble temp1 = (jdouble)SM_java_lang_Math_floor_double_R_double(ctx, (frame[4].d));
	frame[23].d = (temp0 - temp1);
	LINE_NUMBER(167);
	clinit_arc_util_noise_Noise(ctx);
	sp[0].o = (jobject)SF_arc_util_noise_Noise_p;
	frame[9].i = ((jint)ARRAY_ACCESS(jint, sp[0].o, (frame[6].i)));
	LINE_NUMBER(169);
	INST_IINC(6, 1);
	LINE_NUMBER(171);
	clinit_arc_util_noise_Noise(ctx);
	sp[0].o = (jobject)SF_arc_util_noise_Noise_p;
	frame[10].i = ((jint)ARRAY_ACCESS(jint, sp[0].o, (frame[6].i)));
	LINE_NUMBER(173);
	clinit_arc_util_noise_Noise(ctx);
	sp[0].o = (jobject)SF_arc_util_noise_Noise_p;
	frame[11].i = ((jint)ARRAY_ACCESS(jint, sp[0].o, ((frame[9].i) + (frame[7].i))));
	LINE_NUMBER(174);
	clinit_arc_util_noise_Noise(ctx);
	sp[0].o = (jobject)SF_arc_util_noise_Noise_p;
	frame[12].i = ((jint)ARRAY_ACCESS(jint, sp[0].o, ((frame[10].i) + (frame[7].i))));
	LINE_NUMBER(176);
	INST_IINC(7, 1);
	LINE_NUMBER(178);
	clinit_arc_util_noise_Noise(ctx);
	sp[0].o = (jobject)SF_arc_util_noise_Noise_p;
	frame[13].i = ((jint)ARRAY_ACCESS(jint, sp[0].o, ((frame[9].i) + (frame[7].i))));
	LINE_NUMBER(179);
	clinit_arc_util_noise_Noise(ctx);
	sp[0].o = (jobject)SF_arc_util_noise_Noise_p;
	frame[14].i = ((jint)ARRAY_ACCESS(jint, sp[0].o, ((frame[10].i) + (frame[7].i))));
	LINE_NUMBER(181);
	jdouble temp2 = (jdouble)SM_arc_util_noise_Noise_s_curve_double_R_double(ctx, (frame[15].d));
	frame[25].d = temp2;
	LINE_NUMBER(182);
	jdouble temp3 = (jdouble)SM_arc_util_noise_Noise_s_curve_double_R_double(ctx, (frame[19].d));
	frame[27].d = temp3;
	LINE_NUMBER(183);
	jdouble temp4 = (jdouble)SM_arc_util_noise_Noise_s_curve_double_R_double(ctx, (frame[23].d));
	frame[29].d = temp4;
	LINE_NUMBER(185);
	sp[0].o = (jobject)SM_arc_util_noise_Noise_G_int_R_Array1_double(ctx, ((frame[11].i) + (frame[8].i)));
	frame[43].o = sp[0].o;
	LINE_NUMBER(186);
	frame[39].d = ((((frame[15].d) * ((jdouble)ARRAY_ACCESS(jdouble, (frame[43].o), (jint(0))))) + ((frame[19].d) * ((jdouble)ARRAY_ACCESS(jdouble, (frame[43].o), (jint(1)))))) + ((frame[23].d) * ((jdouble)ARRAY_ACCESS(jdouble, (frame[43].o), (jint(2))))));
	LINE_NUMBER(187);
	sp[0].o = (jobject)SM_arc_util_noise_Noise_G_int_R_Array1_double(ctx, ((frame[12].i) + (frame[8].i)));
	frame[43].o = sp[0].o;
	LINE_NUMBER(188);
	frame[41].d = ((((frame[17].d) * ((jdouble)ARRAY_ACCESS(jdouble, (frame[43].o), (jint(0))))) + ((frame[19].d) * ((jdouble)ARRAY_ACCESS(jdouble, (frame[43].o), (jint(1)))))) + ((frame[23].d) * ((jdouble)ARRAY_ACCESS(jdouble, (frame[43].o), (jint(2))))));
	LINE_NUMBER(189);
	jdouble temp5 = (jdouble)SM_arc_util_noise_Noise_lerp_double_double_double_R_double(ctx, (frame[25].d), (frame[39].d), (frame[41].d));
	frame[31].d = temp5;
	LINE_NUMBER(190);
	sp[0].o = (jobject)SM_arc_util_noise_Noise_G_int_R_Array1_double(ctx, ((frame[13].i) + (frame[8].i)));
	frame[43].o = sp[0].o;
	LINE_NUMBER(191);
	frame[39].d = ((((frame[15].d) * ((jdouble)ARRAY_ACCESS(jdouble, (frame[43].o), (jint(0))))) + ((frame[21].d) * ((jdouble)ARRAY_ACCESS(jdouble, (frame[43].o), (jint(1)))))) + ((frame[23].d) * ((jdouble)ARRAY_ACCESS(jdouble, (frame[43].o), (jint(2))))));
	LINE_NUMBER(192);
	sp[0].o = (jobject)SM_arc_util_noise_Noise_G_int_R_Array1_double(ctx, ((frame[14].i) + (frame[8].i)));
	frame[43].o = sp[0].o;
	LINE_NUMBER(193);
	frame[41].d = ((((frame[17].d) * ((jdouble)ARRAY_ACCESS(jdouble, (frame[43].o), (jint(0))))) + ((frame[21].d) * ((jdouble)ARRAY_ACCESS(jdouble, (frame[43].o), (jint(1)))))) + ((frame[23].d) * ((jdouble)ARRAY_ACCESS(jdouble, (frame[43].o), (jint(2))))));
	LINE_NUMBER(194);
	jdouble temp6 = (jdouble)SM_arc_util_noise_Noise_lerp_double_double_double_R_double(ctx, (frame[25].d), (frame[39].d), (frame[41].d));
	frame[33].d = temp6;
	LINE_NUMBER(195);
	jdouble temp7 = (jdouble)SM_arc_util_noise_Noise_lerp_double_double_double_R_double(ctx, (frame[27].d), (frame[31].d), (frame[33].d));
	frame[35].d = temp7;
	LINE_NUMBER(196);
	INST_IINC(8, 1);
	LINE_NUMBER(197);
	frame[23].d = ((frame[23].d) - (jdouble(1)));
	LINE_NUMBER(198);
	sp[0].o = (jobject)SM_arc_util_noise_Noise_G_int_R_Array1_double(ctx, ((frame[11].i) + (frame[8].i)));
	frame[43].o = sp[0].o;
	LINE_NUMBER(199);
	frame[39].d = ((((frame[15].d) * ((jdouble)ARRAY_ACCESS(jdouble, (frame[43].o), (jint(0))))) + ((frame[19].d) * ((jdouble)ARRAY_ACCESS(jdouble, (frame[43].o), (jint(1)))))) + ((frame[23].d) * ((jdouble)ARRAY_ACCESS(jdouble, (frame[43].o), (jint(2))))));
	LINE_NUMBER(200);
	sp[0].o = (jobject)SM_arc_util_noise_Noise_G_int_R_Array1_double(ctx, ((frame[12].i) + (frame[8].i)));
	frame[43].o = sp[0].o;
	LINE_NUMBER(201);
	frame[41].d = ((((frame[17].d) * ((jdouble)ARRAY_ACCESS(jdouble, (frame[43].o), (jint(0))))) + ((frame[19].d) * ((jdouble)ARRAY_ACCESS(jdouble, (frame[43].o), (jint(1)))))) + ((frame[23].d) * ((jdouble)ARRAY_ACCESS(jdouble, (frame[43].o), (jint(2))))));
	LINE_NUMBER(202);
	jdouble temp8 = (jdouble)SM_arc_util_noise_Noise_lerp_double_double_double_R_double(ctx, (frame[25].d), (frame[39].d), (frame[41].d));
	frame[31].d = temp8;
	LINE_NUMBER(203);
	sp[0].o = (jobject)SM_arc_util_noise_Noise_G_int_R_Array1_double(ctx, ((frame[13].i) + (frame[8].i)));
	frame[43].o = sp[0].o;
	LINE_NUMBER(204);
	frame[39].d = ((((frame[15].d) * ((jdouble)ARRAY_ACCESS(jdouble, (frame[43].o), (jint(0))))) + ((frame[21].d) * ((jdouble)ARRAY_ACCESS(jdouble, (frame[43].o), (jint(1)))))) + ((frame[23].d) * ((jdouble)ARRAY_ACCESS(jdouble, (frame[43].o), (jint(2))))));
	LINE_NUMBER(205);
	sp[0].o = (jobject)SM_arc_util_noise_Noise_G_int_R_Array1_double(ctx, ((frame[14].i) + (frame[8].i)));
	frame[43].o = sp[0].o;
	LINE_NUMBER(206);
	frame[41].d = ((((frame[17].d) * ((jdouble)ARRAY_ACCESS(jdouble, (frame[43].o), (jint(0))))) + ((frame[21].d) * ((jdouble)ARRAY_ACCESS(jdouble, (frame[43].o), (jint(1)))))) + ((frame[23].d) * ((jdouble)ARRAY_ACCESS(jdouble, (frame[43].o), (jint(2))))));
	LINE_NUMBER(207);
	jdouble temp9 = (jdouble)SM_arc_util_noise_Noise_lerp_double_double_double_R_double(ctx, (frame[25].d), (frame[39].d), (frame[41].d));
	frame[33].d = temp9;
	LINE_NUMBER(208);
	jdouble temp10 = (jdouble)SM_arc_util_noise_Noise_lerp_double_double_double_R_double(ctx, (frame[27].d), (frame[31].d), (frame[33].d));
	frame[37].d = temp10;
	LINE_NUMBER(210);
	jdouble temp11 = (jdouble)SM_arc_util_noise_Noise_lerp_double_double_double_R_double(ctx, (frame[29].d), (frame[35].d), (frame[37].d));
	popStackFrame(ctx);
	return temp11;
	}

	popStackFrame(ctx);
}

jobject SM_arc_util_noise_Noise_G_int_R_Array1_double(jcontext ctx, jint param0) {
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/util/noise/Noise:G", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_util_noise_Noise(ctx);
	frame[0].i = param0;
	{
	LINE_NUMBER(214);
	clinit_arc_util_noise_Noise(ctx);
	sp[0].o = (jobject)SF_arc_util_noise_Noise_points;
	popStackFrame(ctx);
	return ((jobject)ARRAY_ACCESS(jobject, sp[0].o, ((frame[0].i) % (32))));
	}

	popStackFrame(ctx);
}

void SM_arc_util_noise_Noise_setSeed_int(jcontext ctx, jint param0) {
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/util/noise/Noise:setSeed", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_util_noise_Noise(ctx);
	frame[0].i = param0;
	{
	LINE_NUMBER(218);
	clinit_arc_util_noise_Noise(ctx);
	SF_arc_util_noise_Noise_seed = (frame[0].i);
	LINE_NUMBER(219);
	SM_arc_util_noise_Noise_init(ctx);
	LINE_NUMBER(220);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_arc_util_noise_Noise_init(jcontext ctx) {
	jtype frame[36];
	auto stack = &frame[26];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/util/noise/Noise:init", 36 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_util_noise_Noise(ctx);
	{
	LINE_NUMBER(225);
	clinit_java_util_Random(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_util_Random);
	init_java_util_Random_long(ctx, sp[0].o, (jlong((clinit_arc_util_noise_Noise(ctx), (jint)SF_arc_util_noise_Noise_seed))));
	frame[19].o = sp[0].o;
	LINE_NUMBER(226);
	frame[0].i = (jint(0));
	}
label_2:;
	{
	if ((frame[0].i) >= (256)) goto label_3;
	}
	{
	LINE_NUMBER(227);
	clinit_arc_util_noise_Noise(ctx);
	sp[0].o = (jobject)SF_arc_util_noise_Noise_p;
	ARRAY_ACCESS(jint, sp[0].o, (frame[0].i)) = (frame[0].i);
	LINE_NUMBER(228);
	clinit_arc_util_noise_Noise(ctx);
	sp[0].o = (jobject)SF_arc_util_noise_Noise_g1;
	jint temp0 = frame[0].i;
	jdouble temp1 = jdouble(2.0);
	jdouble temp2 = (jdouble)((func_java_util_Random_nextDouble_R_double) ((void **) nullCheck(ctx, (frame[19].o))->vtable)[VTABLE_java_util_Random_nextDouble_R_double])(ctx, (frame[19].o));
	ARRAY_ACCESS(jdouble, sp[0].o, temp0) = ((temp1 * temp2) - (jdouble(1)));
	}
label_6:;
	{
	LINE_NUMBER(231);
	jdouble temp0 = jdouble(2.0);
	jdouble temp1 = (jdouble)((func_java_util_Random_nextDouble_R_double) ((void **) nullCheck(ctx, (frame[19].o))->vtable)[VTABLE_java_util_Random_nextDouble_R_double])(ctx, (frame[19].o));
	frame[3].d = ((temp0 * temp1) - (jdouble(1)));
	LINE_NUMBER(232);
	jdouble temp2 = jdouble(2.0);
	jdouble temp3 = (jdouble)((func_java_util_Random_nextDouble_R_double) ((void **) nullCheck(ctx, (frame[19].o))->vtable)[VTABLE_java_util_Random_nextDouble_R_double])(ctx, (frame[19].o));
	frame[5].d = ((temp2 * temp3) - (jdouble(1)));
	LINE_NUMBER(233);
	if ((doubleCompare((((frame[3].d) * (frame[3].d)) + ((frame[5].d) * (frame[5].d))), (jdouble(1)), -1)) > 0) goto label_6;
	}
	{
	jdouble temp0 = frame[3].d;
	LINE_NUMBER(234);
	jdouble temp1 = (jdouble)SM_java_lang_Math_abs_double_R_double(ctx, temp0);
	jdouble temp2 = jdouble(2.5);
	jdouble temp3 = (jdouble)SM_java_lang_Math_abs_double_R_double(ctx, (frame[5].d));
	if ((doubleCompare(temp1, (temp2 * temp3), -1)) > 0) goto label_6;
	}
	{
	jdouble temp0 = frame[5].d;
	LINE_NUMBER(235);
	jdouble temp1 = (jdouble)SM_java_lang_Math_abs_double_R_double(ctx, temp0);
	jdouble temp2 = jdouble(2.5);
	jdouble temp3 = (jdouble)SM_java_lang_Math_abs_double_R_double(ctx, (frame[3].d));
	if ((doubleCompare(temp1, (temp2 * temp3), -1)) > 0) goto label_6;
	}
	{
	jdouble temp0 = frame[3].d;
	LINE_NUMBER(236);
	jdouble temp1 = (jdouble)SM_java_lang_Math_abs_double_R_double(ctx, temp0);
	jdouble temp2 = (jdouble)SM_java_lang_Math_abs_double_R_double(ctx, (frame[5].d));
	jdouble temp3 = (jdouble)SM_java_lang_Math_abs_double_R_double(ctx, (temp1 - temp2));
	if ((doubleCompare(temp3, (jdouble(0.4)), 1)) < 0) goto label_6;
	}
	{
	LINE_NUMBER(237);
	clinit_arc_util_noise_Noise(ctx);
	sp[0].o = (jobject)SF_arc_util_noise_Noise_g2;
	ARRAY_ACCESS(jdouble, ((jobject)ARRAY_ACCESS(jobject, sp[0].o, (frame[0].i))), (jint(0))) = (frame[3].d);
	LINE_NUMBER(238);
	clinit_arc_util_noise_Noise(ctx);
	sp[0].o = (jobject)SF_arc_util_noise_Noise_g2;
	ARRAY_ACCESS(jdouble, ((jobject)ARRAY_ACCESS(jobject, sp[0].o, (frame[0].i))), (jint(1))) = (frame[5].d);
	LINE_NUMBER(239);
	clinit_arc_util_noise_Noise(ctx);
	sp[0].o = (jobject)SF_arc_util_noise_Noise_g2;
	SM_arc_util_noise_Noise_normalize2_Array1_double(ctx, ((jobject)ARRAY_ACCESS(jobject, sp[0].o, (frame[0].i))));
	}
label_15:;
	{
	LINE_NUMBER(242);
	jdouble temp0 = jdouble(2.0);
	jdouble temp1 = (jdouble)((func_java_util_Random_nextDouble_R_double) ((void **) nullCheck(ctx, (frame[19].o))->vtable)[VTABLE_java_util_Random_nextDouble_R_double])(ctx, (frame[19].o));
	frame[3].d = ((temp0 * temp1) - (jdouble(1)));
	LINE_NUMBER(243);
	jdouble temp2 = jdouble(2.0);
	jdouble temp3 = (jdouble)((func_java_util_Random_nextDouble_R_double) ((void **) nullCheck(ctx, (frame[19].o))->vtable)[VTABLE_java_util_Random_nextDouble_R_double])(ctx, (frame[19].o));
	frame[5].d = ((temp2 * temp3) - (jdouble(1)));
	LINE_NUMBER(244);
	jdouble temp4 = jdouble(2.0);
	jdouble temp5 = (jdouble)((func_java_util_Random_nextDouble_R_double) ((void **) nullCheck(ctx, (frame[19].o))->vtable)[VTABLE_java_util_Random_nextDouble_R_double])(ctx, (frame[19].o));
	frame[7].d = ((temp4 * temp5) - (jdouble(1)));
	LINE_NUMBER(245);
	jdouble temp6 = (jdouble)SM_java_lang_Math_abs_double_R_double(ctx, (frame[3].d));
	frame[9].d = temp6;
	LINE_NUMBER(246);
	jdouble temp7 = (jdouble)SM_java_lang_Math_abs_double_R_double(ctx, (frame[5].d));
	frame[11].d = temp7;
	LINE_NUMBER(247);
	jdouble temp8 = (jdouble)SM_java_lang_Math_abs_double_R_double(ctx, (frame[7].d));
	frame[13].d = temp8;
	LINE_NUMBER(248);
	jdouble temp9 = frame[9].d;
	jdouble temp10 = (jdouble)SM_java_lang_Math_min_double_double_R_double(ctx, (frame[11].d), (frame[13].d));
	jdouble temp11 = (jdouble)SM_java_lang_Math_min_double_double_R_double(ctx, temp9, temp10);
	frame[17].d = temp11;
	LINE_NUMBER(249);
	jdouble temp12 = frame[9].d;
	jdouble temp13 = (jdouble)SM_java_lang_Math_max_double_double_R_double(ctx, (frame[11].d), (frame[13].d));
	jdouble temp14 = (jdouble)SM_java_lang_Math_max_double_double_R_double(ctx, temp12, temp13);
	frame[15].d = temp14;
	LINE_NUMBER(250);
	if ((doubleCompare(((((frame[3].d) * (frame[3].d)) + ((frame[5].d) * (frame[5].d))) + ((frame[7].d) * (frame[7].d))), (jdouble(1)), -1)) > 0) goto label_15;
	}
	{
	if ((doubleCompare((frame[15].d), ((jdouble(4.0)) * (frame[17].d)), -1)) > 0) goto label_15;
	}
	{
	jdouble temp0 = (frame[9].d) - (frame[11].d);
	LINE_NUMBER(251);
	jdouble temp1 = (jdouble)SM_java_lang_Math_abs_double_R_double(ctx, temp0);
	jdouble temp2 = (jdouble)SM_java_lang_Math_abs_double_R_double(ctx, ((frame[9].d) - (frame[13].d)));
	jdouble temp3 = (jdouble)SM_java_lang_Math_abs_double_R_double(ctx, ((frame[11].d) - (frame[13].d)));
	jdouble temp4 = (jdouble)SM_java_lang_Math_min_double_double_R_double(ctx, temp2, temp3);
	jdouble temp5 = (jdouble)SM_java_lang_Math_min_double_double_R_double(ctx, temp1, temp4);
	if ((doubleCompare(temp5, (jdouble(0.2)), 1)) < 0) goto label_15;
	}
	{
	LINE_NUMBER(226);
	INST_IINC(0, 1);
	goto label_2;
	}
label_3:;
	{
	LINE_NUMBER(254);
	INST_IINC(0, -1);
	if ((frame[0].i) <= 0) goto label_26;
	}
	{
	LINE_NUMBER(255);
	clinit_arc_util_noise_Noise(ctx);
	sp[0].o = (jobject)SF_arc_util_noise_Noise_p;
	frame[2].i = ((jint)ARRAY_ACCESS(jint, sp[0].o, (frame[0].i)));
	LINE_NUMBER(256);
	jlong temp0 = (jlong)((func_java_util_Random_nextLong_R_long) ((void **) nullCheck(ctx, (frame[19].o))->vtable)[VTABLE_java_util_Random_nextLong_R_long])(ctx, (frame[19].o));
	frame[1].i = (jint((temp0 & (jlong(255ll)))));
	LINE_NUMBER(257);
	clinit_arc_util_noise_Noise(ctx);
	sp[0].o = (jobject)SF_arc_util_noise_Noise_p;
	jint temp1 = frame[0].i;
	clinit_arc_util_noise_Noise(ctx);
	sp[1].o = (jobject)SF_arc_util_noise_Noise_p;
	ARRAY_ACCESS(jint, sp[0].o, temp1) = ((jint)ARRAY_ACCESS(jint, sp[1].o, (frame[1].i)));
	LINE_NUMBER(258);
	clinit_arc_util_noise_Noise(ctx);
	sp[0].o = (jobject)SF_arc_util_noise_Noise_p;
	ARRAY_ACCESS(jint, sp[0].o, (frame[1].i)) = (frame[2].i);
	goto label_3;
	}
label_26:;
	{
	LINE_NUMBER(260);
	frame[0].i = (jint(0));
	}
label_31:;
	{
	if ((frame[0].i) >= (258)) goto label_32;
	}
	{
	LINE_NUMBER(261);
	clinit_arc_util_noise_Noise(ctx);
	sp[0].o = (jobject)SF_arc_util_noise_Noise_p;
	jint temp0 = (256) + (frame[0].i);
	clinit_arc_util_noise_Noise(ctx);
	sp[1].o = (jobject)SF_arc_util_noise_Noise_p;
	ARRAY_ACCESS(jint, sp[0].o, temp0) = ((jint)ARRAY_ACCESS(jint, sp[1].o, (frame[0].i)));
	LINE_NUMBER(262);
	clinit_arc_util_noise_Noise(ctx);
	sp[0].o = (jobject)SF_arc_util_noise_Noise_g1;
	jint temp1 = (256) + (frame[0].i);
	clinit_arc_util_noise_Noise(ctx);
	sp[1].o = (jobject)SF_arc_util_noise_Noise_g1;
	ARRAY_ACCESS(jdouble, sp[0].o, temp1) = ((jdouble)ARRAY_ACCESS(jdouble, sp[1].o, (frame[0].i)));
	LINE_NUMBER(263);
	frame[1].i = (jint(0));
	}
label_36:;
	{
	if ((frame[1].i) >= (jint(2))) goto label_37;
	}
	{
	LINE_NUMBER(264);
	clinit_arc_util_noise_Noise(ctx);
	sp[0].o = (jobject)SF_arc_util_noise_Noise_g2;
	sp[0].o = (jobject)ARRAY_ACCESS(jobject, sp[0].o, ((256) + (frame[0].i)));
	jint temp0 = frame[1].i;
	clinit_arc_util_noise_Noise(ctx);
	sp[1].o = (jobject)SF_arc_util_noise_Noise_g2;
	ARRAY_ACCESS(jdouble, sp[0].o, temp0) = ((jdouble)ARRAY_ACCESS(jdouble, ((jobject)ARRAY_ACCESS(jobject, sp[1].o, (frame[0].i))), (frame[1].i)));
	LINE_NUMBER(263);
	INST_IINC(1, 1);
	goto label_36;
	}
label_37:;
	{
	LINE_NUMBER(260);
	INST_IINC(0, 1);
	goto label_31;
	}
label_32:;
	{
	LINE_NUMBER(268);
	clinit_arc_util_noise_Noise(ctx);
	sp[0].o = (jobject)SF_arc_util_noise_Noise_points;
	sp[0].o = (jobject)ARRAY_ACCESS(jobject, sp[0].o, (jint(3)));
	jint temp0 = jint(0);
	clinit_arc_util_noise_Noise(ctx);
	sp[1].o = (jobject)SF_arc_util_noise_Noise_points;
	sp[1].o = (jobject)ARRAY_ACCESS(jobject, sp[1].o, (jint(3)));
	jint temp1 = jint(1);
	clinit_arc_util_noise_Noise(ctx);
	sp[2].o = (jobject)SF_arc_util_noise_Noise_points;
	sp[2].o = (jobject)ARRAY_ACCESS(jobject, sp[2].o, (jint(3)));
	jint temp2 = jint(2);
	jdouble temp3 = (jdouble)SM_java_lang_Math_sqrt_double_R_double(ctx, (jdouble(0.3333333333333333)));
	ARRAY_ACCESS(jdouble, sp[2].o, temp2) = temp3;
	ARRAY_ACCESS(jdouble, sp[1].o, temp1) = temp3;
	ARRAY_ACCESS(jdouble, sp[0].o, temp0) = temp3;
	LINE_NUMBER(269);
	jdouble temp10 = (jdouble)SM_java_lang_Math_sqrt_double_R_double(ctx, (jdouble(0.5)));
	frame[20].d = temp10;
	LINE_NUMBER(270);
	jdouble temp11 = (jdouble)SM_java_lang_Math_sqrt_double_R_double(ctx, (((jdouble(2.0)) + (frame[20].d)) + (frame[20].d)));
	frame[22].d = temp11;
	LINE_NUMBER(272);
	frame[0].i = (jint(0));
	}
label_43:;
	{
	if ((frame[0].i) >= (jint(3))) goto label_44;
	}
	{
	LINE_NUMBER(273);
	frame[1].i = (jint(0));
	}
label_46:;
	{
	if ((frame[1].i) >= (jint(3))) goto label_47;
	}
	{
	LINE_NUMBER(274);
	clinit_arc_util_noise_Noise(ctx);
	sp[0].o = (jobject)SF_arc_util_noise_Noise_points;
	sp[0].o = (jobject)ARRAY_ACCESS(jobject, sp[0].o, (frame[0].i));
	jint temp0 = frame[1].i;
	sp[1].i = temp0;
	sp += 2;
	if ((frame[0].i) != (frame[1].i)) goto label_49;
	}
	{
	jdouble temp0 = ((jdouble(1)) + (frame[20].d)) + (frame[20].d);
	sp[0].d = temp0;
	sp += 1;
	goto label_50;
	}
label_49:;
	INST_DLOAD(20);
label_50:;
	{
	sp -= 3;
	ARRAY_ACCESS(jdouble, sp[0].o, sp[1].i) = (sp[2].d / (frame[22].d));
	LINE_NUMBER(273);
	INST_IINC(1, 1);
	goto label_46;
	}
label_47:;
	{
	LINE_NUMBER(272);
	INST_IINC(0, 1);
	goto label_43;
	}
label_44:;
	{
	LINE_NUMBER(277);
	frame[0].i = (jint(0));
	}
label_52:;
	{
	if ((frame[0].i) > (jint(1))) goto label_53;
	}
	{
	LINE_NUMBER(278);
	frame[1].i = (jint(0));
	}
label_55:;
	{
	if ((frame[1].i) > (jint(1))) goto label_56;
	}
	{
	LINE_NUMBER(279);
	frame[2].i = (jint(0));
	}
label_58:;
	{
	if ((frame[2].i) > (jint(1))) goto label_59;
	}
	{
	LINE_NUMBER(280);
	frame[24].i = (((frame[0].i) + ((frame[1].i) * (jint(2)))) + ((frame[2].i) * (jint(4))));
	LINE_NUMBER(281);
	if ((frame[24].i) <= 0) goto label_62;
	}
	{
	LINE_NUMBER(282);
	frame[25].i = (jint(0));
	}
label_64:;
	{
	if ((frame[25].i) >= (jint(4))) goto label_62;
	}
	{
	LINE_NUMBER(283);
	clinit_arc_util_noise_Noise(ctx);
	sp[0].o = (jobject)SF_arc_util_noise_Noise_points;
	sp[0].o = (jobject)ARRAY_ACCESS(jobject, sp[0].o, (((jint(4)) * (frame[24].i)) + (frame[25].i)));
	jint temp0 = jint(0);
	sp[1].i = temp0;
	sp += 2;
	if ((frame[0].i) != 0) goto label_66;
	}
	INST_ICONST(1);
	goto label_67;
label_66:;
	INST_ICONST(-1);
label_67:;
	{
	sp -= 3;
	jdouble temp0 = jdouble(sp[2].i);
	clinit_arc_util_noise_Noise(ctx);
	sp[2].o = (jobject)SF_arc_util_noise_Noise_points;
	ARRAY_ACCESS(jdouble, sp[0].o, sp[1].i) = (temp0 * ((jdouble)ARRAY_ACCESS(jdouble, ((jobject)ARRAY_ACCESS(jobject, sp[2].o, (frame[25].i))), (jint(0)))));
	LINE_NUMBER(284);
	clinit_arc_util_noise_Noise(ctx);
	sp[0].o = (jobject)SF_arc_util_noise_Noise_points;
	sp[0].o = (jobject)ARRAY_ACCESS(jobject, sp[0].o, (((jint(4)) * (frame[24].i)) + (frame[25].i)));
	jint temp1 = jint(1);
	sp[1].i = temp1;
	sp += 2;
	if ((frame[1].i) != 0) goto label_69;
	}
	INST_ICONST(1);
	goto label_70;
label_69:;
	INST_ICONST(-1);
label_70:;
	{
	sp -= 3;
	jdouble temp0 = jdouble(sp[2].i);
	clinit_arc_util_noise_Noise(ctx);
	sp[2].o = (jobject)SF_arc_util_noise_Noise_points;
	ARRAY_ACCESS(jdouble, sp[0].o, sp[1].i) = (temp0 * ((jdouble)ARRAY_ACCESS(jdouble, ((jobject)ARRAY_ACCESS(jobject, sp[2].o, (frame[25].i))), (jint(1)))));
	LINE_NUMBER(285);
	clinit_arc_util_noise_Noise(ctx);
	sp[0].o = (jobject)SF_arc_util_noise_Noise_points;
	sp[0].o = (jobject)ARRAY_ACCESS(jobject, sp[0].o, (((jint(4)) * (frame[24].i)) + (frame[25].i)));
	jint temp1 = jint(2);
	sp[1].i = temp1;
	sp += 2;
	if ((frame[2].i) != 0) goto label_72;
	}
	INST_ICONST(1);
	goto label_73;
label_72:;
	INST_ICONST(-1);
label_73:;
	{
	sp -= 3;
	jdouble temp0 = jdouble(sp[2].i);
	clinit_arc_util_noise_Noise(ctx);
	sp[2].o = (jobject)SF_arc_util_noise_Noise_points;
	ARRAY_ACCESS(jdouble, sp[0].o, sp[1].i) = (temp0 * ((jdouble)ARRAY_ACCESS(jdouble, ((jobject)ARRAY_ACCESS(jobject, sp[2].o, (frame[25].i))), (jint(2)))));
	LINE_NUMBER(282);
	INST_IINC(25, 1);
	goto label_64;
	}
label_62:;
	{
	LINE_NUMBER(279);
	INST_IINC(2, 1);
	goto label_58;
	}
label_59:;
	{
	LINE_NUMBER(278);
	INST_IINC(1, 1);
	goto label_55;
	}
label_56:;
	{
	LINE_NUMBER(277);
	INST_IINC(0, 1);
	goto label_52;
	}
label_53:;
	LINE_NUMBER(291);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void SM_arc_util_noise_Noise_normalize2_Array1_double(jcontext ctx, jobject param0) {
	jtype frame[9];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/util/noise/Noise:normalize2", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_util_noise_Noise(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(295);
	jdouble temp0 = (jdouble)SM_java_lang_Math_sqrt_double_R_double(ctx, ((((jdouble)ARRAY_ACCESS(jdouble, (frame[0].o), (jint(0)))) * ((jdouble)ARRAY_ACCESS(jdouble, (frame[0].o), (jint(0))))) + (((jdouble)ARRAY_ACCESS(jdouble, (frame[0].o), (jint(1)))) * ((jdouble)ARRAY_ACCESS(jdouble, (frame[0].o), (jint(1)))))));
	frame[1].d = temp0;
	LINE_NUMBER(296);
	ARRAY_ACCESS(jdouble, (frame[0].o), (jint(0))) = (((jdouble)ARRAY_ACCESS(jdouble, (frame[0].o), (jint(0)))) / (frame[1].d));
	LINE_NUMBER(297);
	ARRAY_ACCESS(jdouble, (frame[0].o), (jint(1))) = (((jdouble)ARRAY_ACCESS(jdouble, (frame[0].o), (jint(1)))) / (frame[1].d));
	LINE_NUMBER(298);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void clinit_arc_util_noise_Noise(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	SF_arc_util_noise_Noise_P = jint(8);
	SF_arc_util_noise_Noise_B = jint(256);
	SF_arc_util_noise_Noise_M = jint(255);
	SF_arc_util_noise_Noise_NP = jint(8);
	SF_arc_util_noise_Noise_N = jint(256);
	jtype frame[2];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/util/noise/Noise:<clinit>", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_util_noise_Noise(ctx);
	{
	LINE_NUMBER(6);
	clinit_arc_util_noise_Noise(ctx);
	SF_arc_util_noise_Noise_seed = (100);
	LINE_NUMBER(13);
	sp[0].o = (jobject) createArray(ctx, &class_int, (514));
	clinit_arc_util_noise_Noise(ctx);
	SF_arc_util_noise_Noise_p = sp[0].o;
	LINE_NUMBER(14);
	sp[0].o = (jobject)createMultiArray(ctx, &class_double, {(514), (jint(2))});
	clinit_arc_util_noise_Noise(ctx);
	SF_arc_util_noise_Noise_g2 = sp[0].o;
	LINE_NUMBER(15);
	sp[0].o = (jobject) createArray(ctx, &class_double, (514));
	clinit_arc_util_noise_Noise(ctx);
	SF_arc_util_noise_Noise_g1 = sp[0].o;
	LINE_NUMBER(16);
	sp[0].o = (jobject)createMultiArray(ctx, &class_double, {(32), (jint(3))});
	clinit_arc_util_noise_Noise(ctx);
	SF_arc_util_noise_Noise_points = sp[0].o;
	LINE_NUMBER(19);
	SM_arc_util_noise_Noise_init(ctx);
	LINE_NUMBER(20);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void *vtable_arc_util_noise_Noise[] {
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
	{ "seed", &class_int, (intptr_t) &SF_arc_util_noise_Noise_seed, "I", 10 },
	{ "P", &class_int, (intptr_t) &SF_arc_util_noise_Noise_P, "I", 26 },
	{ "B", &class_int, (intptr_t) &SF_arc_util_noise_Noise_B, "I", 26 },
	{ "M", &class_int, (intptr_t) &SF_arc_util_noise_Noise_M, "I", 26 },
	{ "NP", &class_int, (intptr_t) &SF_arc_util_noise_Noise_NP, "I", 26 },
	{ "N", &class_int, (intptr_t) &SF_arc_util_noise_Noise_N, "I", 26 },
	{ "p", getArrayClass(&class_int, 1), (intptr_t) &SF_arc_util_noise_Noise_p, "[I", 10 },
	{ "g2", getArrayClass(&class_double, 2), (intptr_t) &SF_arc_util_noise_Noise_g2, "[[D", 10 },
	{ "g1", getArrayClass(&class_double, 1), (intptr_t) &SF_arc_util_noise_Noise_g1, "[D", 10 },
	{ "points", getArrayClass(&class_double, 2), (intptr_t) &SF_arc_util_noise_Noise_points, "[[D", 10 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_arc_util_noise_Noise, 0, "()V", 1 },
	{ "lerp", (intptr_t) SM_arc_util_noise_Noise_lerp_double_double_double_R_double, 0, "(DDD)D", 10 },
	{ "s_curve", (intptr_t) SM_arc_util_noise_Noise_s_curve_double_R_double, 0, "(D)D", 10 },
	{ "rawNoise", (intptr_t) SM_arc_util_noise_Noise_rawNoise_double_R_double, 0, "(D)D", 9 },
	{ "snoise", (intptr_t) SM_arc_util_noise_Noise_snoise_float_float_float_float_float_R_double, 0, "(FFFFF)D", 9 },
	{ "snoise", (intptr_t) SM_arc_util_noise_Noise_snoise_float_float_float_float_R_float, 0, "(FFFF)F", 9 },
	{ "snoise3", (intptr_t) SM_arc_util_noise_Noise_snoise3_float_float_float_float_float_R_float, 0, "(FFFFF)F", 9 },
	{ "nnoise", (intptr_t) SM_arc_util_noise_Noise_nnoise_float_float_float_float_R_float, 0, "(FFFF)F", 9 },
	{ "noise", (intptr_t) SM_arc_util_noise_Noise_noise_float_float_float_float_R_float, 0, "(FFFF)F", 9 },
	{ "noise", (intptr_t) SM_arc_util_noise_Noise_noise_float_float_float_float_float_R_float, 0, "(FFFFF)F", 9 },
	{ "fnoise", (intptr_t) SM_arc_util_noise_Noise_fnoise_float_float_float_float_R_float, 0, "(FFFF)F", 9 },
	{ "rawNoise", (intptr_t) SM_arc_util_noise_Noise_rawNoise_double_double_R_double, 0, "(DD)D", 9 },
	{ "rawNoise", (intptr_t) SM_arc_util_noise_Noise_rawNoise_double_double_double_R_double, 0, "(DDD)D", 8 },
	{ "G", (intptr_t) SM_arc_util_noise_Noise_G_int_R_Array1_double, 0, "(I)[D", 10 },
	{ "setSeed", (intptr_t) SM_arc_util_noise_Noise_setSeed_int, 0, "(I)V", 9 },
	{ "init", (intptr_t) SM_arc_util_noise_Noise_init, 0, "()V", 10 },
	{ "normalize2", (intptr_t) SM_arc_util_noise_Noise_normalize2_Array1_double, 0, "([D)V", 10 },
	{ "<clinit>", (intptr_t) clinit_arc_util_noise_Noise, 0, "()V", 8 },
};

Class class_arc_util_noise_Noise{
		.nativeName = (intptr_t) "arc/util/noise/Noise",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(arc_util_noise_Noise),
		.classVtable = (intptr_t) vtable_arc_util_noise_Noise,
		.staticInitializer = (intptr_t) clinit_arc_util_noise_Noise,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_arc_util_noise_Noise,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 49,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 10,
		.nativeFields = (intptr_t) fields,
		.methodCount = 18,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 11,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_arc_util_noise_Noise = registerClass(&class_arc_util_noise_Noise);

}
