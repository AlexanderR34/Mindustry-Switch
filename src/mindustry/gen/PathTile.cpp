#include "mindustry/gen/PathTile.h"
#include "java/lang/Object.h"

extern "C" {

jint SF_mindustry_gen_PathTile_bitMaskHealth;
jint SF_mindustry_gen_PathTile_bitMaskTeam;
jint SF_mindustry_gen_PathTile_bitMaskSolid;
jint SF_mindustry_gen_PathTile_bitMaskLiquid;
jint SF_mindustry_gen_PathTile_bitMaskLegSolid;
jint SF_mindustry_gen_PathTile_bitMaskNearLiquid;
jint SF_mindustry_gen_PathTile_bitMaskNearGround;
jint SF_mindustry_gen_PathTile_bitMaskNearSolid;
jint SF_mindustry_gen_PathTile_bitMaskNearLegSolid;
jint SF_mindustry_gen_PathTile_bitMaskDeep;
jint SF_mindustry_gen_PathTile_bitMaskDamages;
jint SF_mindustry_gen_PathTile_bitMaskAllDeep;
jint SF_mindustry_gen_PathTile_bitMaskNearDeep;
jint SF_mindustry_gen_PathTile_bitMaskTeamPassable;

void mark_mindustry_gen_PathTile(jobject object, jint mark, jint depth) {
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
	auto self = (mindustry_gen_PathTile *) object;
}

void clinit_mindustry_gen_PathTile(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	SF_mindustry_gen_PathTile_bitMaskHealth = jint(255);
	SF_mindustry_gen_PathTile_bitMaskTeam = jint(65280);
	SF_mindustry_gen_PathTile_bitMaskSolid = jint(65536);
	SF_mindustry_gen_PathTile_bitMaskLiquid = jint(131072);
	SF_mindustry_gen_PathTile_bitMaskLegSolid = jint(262144);
	SF_mindustry_gen_PathTile_bitMaskNearLiquid = jint(524288);
	SF_mindustry_gen_PathTile_bitMaskNearGround = jint(1048576);
	SF_mindustry_gen_PathTile_bitMaskNearSolid = jint(2097152);
	SF_mindustry_gen_PathTile_bitMaskNearLegSolid = jint(4194304);
	SF_mindustry_gen_PathTile_bitMaskDeep = jint(8388608);
	SF_mindustry_gen_PathTile_bitMaskDamages = jint(16777216);
	SF_mindustry_gen_PathTile_bitMaskAllDeep = jint(33554432);
	SF_mindustry_gen_PathTile_bitMaskNearDeep = jint(67108864);
	SF_mindustry_gen_PathTile_bitMaskTeamPassable = jint(134217728);
}

void init_mindustry_gen_PathTile(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/PathTile:<init>", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_gen_PathTile(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(20);
	init_java_lang_Object(ctx, (frame[0].o));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jint SM_mindustry_gen_PathTile_health_int_R_int(jcontext ctx, jint param0) {
	jtype frame[5];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/PathTile:health", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_gen_PathTile(ctx);
	frame[0].i = param0;
	{
	LINE_NUMBER(50);
	popStackFrame(ctx);
	return (jint(((jlong((bit_cast<jint>(bit_cast<uint32_t>((frame[0].i)) >> (jint(0)))))) & (jlong(255ll)))));
	}

	popStackFrame(ctx);
}

jint SM_mindustry_gen_PathTile_health_int_int_R_int(jcontext ctx, jint param0, jint param1) {
	jtype frame[6];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/PathTile:health", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_gen_PathTile(ctx);
	frame[0].i = param0;
	frame[1].i = param1;
	{
	LINE_NUMBER(54);
	popStackFrame(ctx);
	return (jint((((jlong((frame[0].i))) & (jlong(-256ll))) | (jlong(((frame[1].i) << (jint(0))))))));
	}

	popStackFrame(ctx);
}

jint SM_mindustry_gen_PathTile_team_int_R_int(jcontext ctx, jint param0) {
	jtype frame[5];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/PathTile:team", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_gen_PathTile(ctx);
	frame[0].i = param0;
	{
	LINE_NUMBER(58);
	popStackFrame(ctx);
	return (jint(((jlong((bit_cast<jint>(bit_cast<uint32_t>((frame[0].i)) >> (8))))) & (jlong(255ll)))));
	}

	popStackFrame(ctx);
}

jint SM_mindustry_gen_PathTile_team_int_int_R_int(jcontext ctx, jint param0, jint param1) {
	jtype frame[6];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/PathTile:team", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_gen_PathTile(ctx);
	frame[0].i = param0;
	frame[1].i = param1;
	{
	LINE_NUMBER(62);
	popStackFrame(ctx);
	return (jint((((jlong((frame[0].i))) & (jlong(-65281ll))) | (jlong(((frame[1].i) << (8)))))));
	}

	popStackFrame(ctx);
}

jbool SM_mindustry_gen_PathTile_solid_int_R_boolean(jcontext ctx, jint param0) {
	jtype frame[5];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/PathTile:solid", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_gen_PathTile(ctx);
	frame[0].i = param0;
	{
	LINE_NUMBER(66);
	if ((longCompare(((jlong((frame[0].i))) & (jlong(65536ll))), (jlong(0)))) == 0) goto label_1;
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

jint SM_mindustry_gen_PathTile_solid_int_boolean_R_int(jcontext ctx, jint param0, jbool param1) {
	jtype frame[6];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/PathTile:solid", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_gen_PathTile(ctx);
	frame[0].i = param0;
	frame[1].i = param1;
	{
	LINE_NUMBER(70);
	if ((frame[1].i) == 0) goto label_1;
	}
	{
	LINE_NUMBER(71);
	popStackFrame(ctx);
	return (jint(((jlong((frame[0].i))) | (jlong(65536ll)))));
	}
label_1:;
	{
	LINE_NUMBER(73);
	popStackFrame(ctx);
	return (jint(((jlong((frame[0].i))) & (jlong(-65537ll)))));
	}

	popStackFrame(ctx);
}

jbool SM_mindustry_gen_PathTile_liquid_int_R_boolean(jcontext ctx, jint param0) {
	jtype frame[5];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/PathTile:liquid", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_gen_PathTile(ctx);
	frame[0].i = param0;
	{
	LINE_NUMBER(78);
	if ((longCompare(((jlong((frame[0].i))) & (jlong(131072ll))), (jlong(0)))) == 0) goto label_1;
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

jint SM_mindustry_gen_PathTile_liquid_int_boolean_R_int(jcontext ctx, jint param0, jbool param1) {
	jtype frame[6];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/PathTile:liquid", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_gen_PathTile(ctx);
	frame[0].i = param0;
	frame[1].i = param1;
	{
	LINE_NUMBER(82);
	if ((frame[1].i) == 0) goto label_1;
	}
	{
	LINE_NUMBER(83);
	popStackFrame(ctx);
	return (jint(((jlong((frame[0].i))) | (jlong(131072ll)))));
	}
label_1:;
	{
	LINE_NUMBER(85);
	popStackFrame(ctx);
	return (jint(((jlong((frame[0].i))) & (jlong(-131073ll)))));
	}

	popStackFrame(ctx);
}

jbool SM_mindustry_gen_PathTile_legSolid_int_R_boolean(jcontext ctx, jint param0) {
	jtype frame[5];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/PathTile:legSolid", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_gen_PathTile(ctx);
	frame[0].i = param0;
	{
	LINE_NUMBER(90);
	if ((longCompare(((jlong((frame[0].i))) & (jlong(262144ll))), (jlong(0)))) == 0) goto label_1;
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

jint SM_mindustry_gen_PathTile_legSolid_int_boolean_R_int(jcontext ctx, jint param0, jbool param1) {
	jtype frame[6];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/PathTile:legSolid", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_gen_PathTile(ctx);
	frame[0].i = param0;
	frame[1].i = param1;
	{
	LINE_NUMBER(94);
	if ((frame[1].i) == 0) goto label_1;
	}
	{
	LINE_NUMBER(95);
	popStackFrame(ctx);
	return (jint(((jlong((frame[0].i))) | (jlong(262144ll)))));
	}
label_1:;
	{
	LINE_NUMBER(97);
	popStackFrame(ctx);
	return (jint(((jlong((frame[0].i))) & (jlong(-262145ll)))));
	}

	popStackFrame(ctx);
}

jbool SM_mindustry_gen_PathTile_nearLiquid_int_R_boolean(jcontext ctx, jint param0) {
	jtype frame[5];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/PathTile:nearLiquid", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_gen_PathTile(ctx);
	frame[0].i = param0;
	{
	LINE_NUMBER(102);
	if ((longCompare(((jlong((frame[0].i))) & (jlong(524288ll))), (jlong(0)))) == 0) goto label_1;
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

jint SM_mindustry_gen_PathTile_nearLiquid_int_boolean_R_int(jcontext ctx, jint param0, jbool param1) {
	jtype frame[6];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/PathTile:nearLiquid", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_gen_PathTile(ctx);
	frame[0].i = param0;
	frame[1].i = param1;
	{
	LINE_NUMBER(106);
	if ((frame[1].i) == 0) goto label_1;
	}
	{
	LINE_NUMBER(107);
	popStackFrame(ctx);
	return (jint(((jlong((frame[0].i))) | (jlong(524288ll)))));
	}
label_1:;
	{
	LINE_NUMBER(109);
	popStackFrame(ctx);
	return (jint(((jlong((frame[0].i))) & (jlong(-524289ll)))));
	}

	popStackFrame(ctx);
}

jbool SM_mindustry_gen_PathTile_nearGround_int_R_boolean(jcontext ctx, jint param0) {
	jtype frame[5];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/PathTile:nearGround", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_gen_PathTile(ctx);
	frame[0].i = param0;
	{
	LINE_NUMBER(114);
	if ((longCompare(((jlong((frame[0].i))) & (jlong(1048576ll))), (jlong(0)))) == 0) goto label_1;
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

jint SM_mindustry_gen_PathTile_nearGround_int_boolean_R_int(jcontext ctx, jint param0, jbool param1) {
	jtype frame[6];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/PathTile:nearGround", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_gen_PathTile(ctx);
	frame[0].i = param0;
	frame[1].i = param1;
	{
	LINE_NUMBER(118);
	if ((frame[1].i) == 0) goto label_1;
	}
	{
	LINE_NUMBER(119);
	popStackFrame(ctx);
	return (jint(((jlong((frame[0].i))) | (jlong(1048576ll)))));
	}
label_1:;
	{
	LINE_NUMBER(121);
	popStackFrame(ctx);
	return (jint(((jlong((frame[0].i))) & (jlong(-1048577ll)))));
	}

	popStackFrame(ctx);
}

jbool SM_mindustry_gen_PathTile_nearSolid_int_R_boolean(jcontext ctx, jint param0) {
	jtype frame[5];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/PathTile:nearSolid", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_gen_PathTile(ctx);
	frame[0].i = param0;
	{
	LINE_NUMBER(126);
	if ((longCompare(((jlong((frame[0].i))) & (jlong(2097152ll))), (jlong(0)))) == 0) goto label_1;
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

jint SM_mindustry_gen_PathTile_nearSolid_int_boolean_R_int(jcontext ctx, jint param0, jbool param1) {
	jtype frame[6];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/PathTile:nearSolid", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_gen_PathTile(ctx);
	frame[0].i = param0;
	frame[1].i = param1;
	{
	LINE_NUMBER(130);
	if ((frame[1].i) == 0) goto label_1;
	}
	{
	LINE_NUMBER(131);
	popStackFrame(ctx);
	return (jint(((jlong((frame[0].i))) | (jlong(2097152ll)))));
	}
label_1:;
	{
	LINE_NUMBER(133);
	popStackFrame(ctx);
	return (jint(((jlong((frame[0].i))) & (jlong(-2097153ll)))));
	}

	popStackFrame(ctx);
}

jbool SM_mindustry_gen_PathTile_nearLegSolid_int_R_boolean(jcontext ctx, jint param0) {
	jtype frame[5];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/PathTile:nearLegSolid", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_gen_PathTile(ctx);
	frame[0].i = param0;
	{
	LINE_NUMBER(138);
	if ((longCompare(((jlong((frame[0].i))) & (jlong(4194304ll))), (jlong(0)))) == 0) goto label_1;
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

jint SM_mindustry_gen_PathTile_nearLegSolid_int_boolean_R_int(jcontext ctx, jint param0, jbool param1) {
	jtype frame[6];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/PathTile:nearLegSolid", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_gen_PathTile(ctx);
	frame[0].i = param0;
	frame[1].i = param1;
	{
	LINE_NUMBER(142);
	if ((frame[1].i) == 0) goto label_1;
	}
	{
	LINE_NUMBER(143);
	popStackFrame(ctx);
	return (jint(((jlong((frame[0].i))) | (jlong(4194304ll)))));
	}
label_1:;
	{
	LINE_NUMBER(145);
	popStackFrame(ctx);
	return (jint(((jlong((frame[0].i))) & (jlong(-4194305ll)))));
	}

	popStackFrame(ctx);
}

jbool SM_mindustry_gen_PathTile_deep_int_R_boolean(jcontext ctx, jint param0) {
	jtype frame[5];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/PathTile:deep", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_gen_PathTile(ctx);
	frame[0].i = param0;
	{
	LINE_NUMBER(150);
	if ((longCompare(((jlong((frame[0].i))) & (jlong(8388608ll))), (jlong(0)))) == 0) goto label_1;
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

jint SM_mindustry_gen_PathTile_deep_int_boolean_R_int(jcontext ctx, jint param0, jbool param1) {
	jtype frame[6];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/PathTile:deep", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_gen_PathTile(ctx);
	frame[0].i = param0;
	frame[1].i = param1;
	{
	LINE_NUMBER(154);
	if ((frame[1].i) == 0) goto label_1;
	}
	{
	LINE_NUMBER(155);
	popStackFrame(ctx);
	return (jint(((jlong((frame[0].i))) | (jlong(8388608ll)))));
	}
label_1:;
	{
	LINE_NUMBER(157);
	popStackFrame(ctx);
	return (jint(((jlong((frame[0].i))) & (jlong(-8388609ll)))));
	}

	popStackFrame(ctx);
}

jbool SM_mindustry_gen_PathTile_damages_int_R_boolean(jcontext ctx, jint param0) {
	jtype frame[5];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/PathTile:damages", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_gen_PathTile(ctx);
	frame[0].i = param0;
	{
	LINE_NUMBER(162);
	if ((longCompare(((jlong((frame[0].i))) & (jlong(16777216ll))), (jlong(0)))) == 0) goto label_1;
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

jint SM_mindustry_gen_PathTile_damages_int_boolean_R_int(jcontext ctx, jint param0, jbool param1) {
	jtype frame[6];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/PathTile:damages", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_gen_PathTile(ctx);
	frame[0].i = param0;
	frame[1].i = param1;
	{
	LINE_NUMBER(166);
	if ((frame[1].i) == 0) goto label_1;
	}
	{
	LINE_NUMBER(167);
	popStackFrame(ctx);
	return (jint(((jlong((frame[0].i))) | (jlong(16777216ll)))));
	}
label_1:;
	{
	LINE_NUMBER(169);
	popStackFrame(ctx);
	return (jint(((jlong((frame[0].i))) & (jlong(-16777217ll)))));
	}

	popStackFrame(ctx);
}

jbool SM_mindustry_gen_PathTile_allDeep_int_R_boolean(jcontext ctx, jint param0) {
	jtype frame[5];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/PathTile:allDeep", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_gen_PathTile(ctx);
	frame[0].i = param0;
	{
	LINE_NUMBER(174);
	if ((longCompare(((jlong((frame[0].i))) & (jlong(33554432ll))), (jlong(0)))) == 0) goto label_1;
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

jint SM_mindustry_gen_PathTile_allDeep_int_boolean_R_int(jcontext ctx, jint param0, jbool param1) {
	jtype frame[6];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/PathTile:allDeep", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_gen_PathTile(ctx);
	frame[0].i = param0;
	frame[1].i = param1;
	{
	LINE_NUMBER(178);
	if ((frame[1].i) == 0) goto label_1;
	}
	{
	LINE_NUMBER(179);
	popStackFrame(ctx);
	return (jint(((jlong((frame[0].i))) | (jlong(33554432ll)))));
	}
label_1:;
	{
	LINE_NUMBER(181);
	popStackFrame(ctx);
	return (jint(((jlong((frame[0].i))) & (jlong(-33554433ll)))));
	}

	popStackFrame(ctx);
}

jbool SM_mindustry_gen_PathTile_nearDeep_int_R_boolean(jcontext ctx, jint param0) {
	jtype frame[5];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/PathTile:nearDeep", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_gen_PathTile(ctx);
	frame[0].i = param0;
	{
	LINE_NUMBER(186);
	if ((longCompare(((jlong((frame[0].i))) & (jlong(67108864ll))), (jlong(0)))) == 0) goto label_1;
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

jint SM_mindustry_gen_PathTile_nearDeep_int_boolean_R_int(jcontext ctx, jint param0, jbool param1) {
	jtype frame[6];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/PathTile:nearDeep", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_gen_PathTile(ctx);
	frame[0].i = param0;
	frame[1].i = param1;
	{
	LINE_NUMBER(190);
	if ((frame[1].i) == 0) goto label_1;
	}
	{
	LINE_NUMBER(191);
	popStackFrame(ctx);
	return (jint(((jlong((frame[0].i))) | (jlong(67108864ll)))));
	}
label_1:;
	{
	LINE_NUMBER(193);
	popStackFrame(ctx);
	return (jint(((jlong((frame[0].i))) & (jlong(-67108865ll)))));
	}

	popStackFrame(ctx);
}

jbool SM_mindustry_gen_PathTile_teamPassable_int_R_boolean(jcontext ctx, jint param0) {
	jtype frame[5];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/PathTile:teamPassable", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_gen_PathTile(ctx);
	frame[0].i = param0;
	{
	LINE_NUMBER(198);
	if ((longCompare(((jlong((frame[0].i))) & (jlong(134217728ll))), (jlong(0)))) == 0) goto label_1;
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

jint SM_mindustry_gen_PathTile_teamPassable_int_boolean_R_int(jcontext ctx, jint param0, jbool param1) {
	jtype frame[6];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/PathTile:teamPassable", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_gen_PathTile(ctx);
	frame[0].i = param0;
	frame[1].i = param1;
	{
	LINE_NUMBER(202);
	if ((frame[1].i) == 0) goto label_1;
	}
	{
	LINE_NUMBER(203);
	popStackFrame(ctx);
	return (jint(((jlong((frame[0].i))) | (jlong(134217728ll)))));
	}
label_1:;
	{
	LINE_NUMBER(205);
	popStackFrame(ctx);
	return (jint(((jlong((frame[0].i))) & (jlong(-134217729ll)))));
	}

	popStackFrame(ctx);
}

jint SM_mindustry_gen_PathTile_get_int_int_boolean_boolean_boolean_boolean_boolean_boolean_boolean_boolean_boolean_boolean_boolean_boolean_R_int(jcontext ctx, jint param0, jint param1, jbool param2, jbool param3, jbool param4, jbool param5, jbool param6, jbool param7, jbool param8, jbool param9, jbool param10, jbool param11, jbool param12, jbool param13) {
	jtype frame[20];
	auto stack = &frame[14];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/PathTile:get", 20 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_gen_PathTile(ctx);
	frame[0].i = param0;
	frame[1].i = param1;
	frame[2].i = param2;
	frame[3].i = param3;
	frame[4].i = param4;
	frame[5].i = param5;
	frame[6].i = param6;
	frame[7].i = param7;
	frame[8].i = param8;
	frame[9].i = param9;
	frame[10].i = param10;
	frame[11].i = param11;
	frame[12].i = param12;
	frame[13].i = param13;
	{
	LINE_NUMBER(212);
	jlong temp0 = ((jlong(((frame[0].i) << (jint(0))))) & (jlong(255ll))) | ((jlong(((frame[1].i) << (8)))) & (jlong(65280ll)));
	sp[0].l = temp0;
	sp += 1;
	if ((frame[2].i) == 0) goto label_1;
	}
	(sp++)->l = jlong(65536ll);
	goto label_2;
label_1:;
	INST_LCONST(0);
label_2:;
	{
	sp -= 2;
	jlong temp0 = sp[0].l | sp[1].l;
	sp[0].l = temp0;
	sp += 1;
	if ((frame[3].i) == 0) goto label_3;
	}
	(sp++)->l = jlong(131072ll);
	goto label_4;
label_3:;
	INST_LCONST(0);
label_4:;
	{
	sp -= 2;
	jlong temp0 = sp[0].l | sp[1].l;
	sp[0].l = temp0;
	sp += 1;
	if ((frame[4].i) == 0) goto label_5;
	}
	(sp++)->l = jlong(262144ll);
	goto label_6;
label_5:;
	INST_LCONST(0);
label_6:;
	{
	sp -= 2;
	jlong temp0 = sp[0].l | sp[1].l;
	sp[0].l = temp0;
	sp += 1;
	if ((frame[5].i) == 0) goto label_7;
	}
	(sp++)->l = jlong(524288ll);
	goto label_8;
label_7:;
	INST_LCONST(0);
label_8:;
	{
	sp -= 2;
	jlong temp0 = sp[0].l | sp[1].l;
	sp[0].l = temp0;
	sp += 1;
	if ((frame[6].i) == 0) goto label_9;
	}
	(sp++)->l = jlong(1048576ll);
	goto label_10;
label_9:;
	INST_LCONST(0);
label_10:;
	{
	sp -= 2;
	jlong temp0 = sp[0].l | sp[1].l;
	sp[0].l = temp0;
	sp += 1;
	if ((frame[7].i) == 0) goto label_11;
	}
	(sp++)->l = jlong(2097152ll);
	goto label_12;
label_11:;
	INST_LCONST(0);
label_12:;
	{
	sp -= 2;
	jlong temp0 = sp[0].l | sp[1].l;
	sp[0].l = temp0;
	sp += 1;
	if ((frame[8].i) == 0) goto label_13;
	}
	(sp++)->l = jlong(4194304ll);
	goto label_14;
label_13:;
	INST_LCONST(0);
label_14:;
	{
	sp -= 2;
	jlong temp0 = sp[0].l | sp[1].l;
	sp[0].l = temp0;
	sp += 1;
	if ((frame[9].i) == 0) goto label_15;
	}
	(sp++)->l = jlong(8388608ll);
	goto label_16;
label_15:;
	INST_LCONST(0);
label_16:;
	{
	sp -= 2;
	jlong temp0 = sp[0].l | sp[1].l;
	sp[0].l = temp0;
	sp += 1;
	if ((frame[10].i) == 0) goto label_17;
	}
	(sp++)->l = jlong(16777216ll);
	goto label_18;
label_17:;
	INST_LCONST(0);
label_18:;
	{
	sp -= 2;
	jlong temp0 = sp[0].l | sp[1].l;
	sp[0].l = temp0;
	sp += 1;
	if ((frame[11].i) == 0) goto label_19;
	}
	(sp++)->l = jlong(33554432ll);
	goto label_20;
label_19:;
	INST_LCONST(0);
label_20:;
	{
	sp -= 2;
	jlong temp0 = sp[0].l | sp[1].l;
	sp[0].l = temp0;
	sp += 1;
	if ((frame[12].i) == 0) goto label_21;
	}
	(sp++)->l = jlong(67108864ll);
	goto label_22;
label_21:;
	INST_LCONST(0);
label_22:;
	{
	sp -= 2;
	jlong temp0 = sp[0].l | sp[1].l;
	sp[0].l = temp0;
	sp += 1;
	if ((frame[13].i) == 0) goto label_23;
	}
	(sp++)->l = jlong(134217728ll);
	goto label_24;
label_23:;
	INST_LCONST(0);
label_24:;
	{
	sp -= 2;
	popStackFrame(ctx);
	return (jint((sp[0].l | sp[1].l)));
	}

	popStackFrame(ctx);
}

void *vtable_mindustry_gen_PathTile[] {
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
	{ "bitMaskHealth", &class_int, (intptr_t) &SF_mindustry_gen_PathTile_bitMaskHealth, "I", 25 },
	{ "bitMaskTeam", &class_int, (intptr_t) &SF_mindustry_gen_PathTile_bitMaskTeam, "I", 25 },
	{ "bitMaskSolid", &class_int, (intptr_t) &SF_mindustry_gen_PathTile_bitMaskSolid, "I", 25 },
	{ "bitMaskLiquid", &class_int, (intptr_t) &SF_mindustry_gen_PathTile_bitMaskLiquid, "I", 25 },
	{ "bitMaskLegSolid", &class_int, (intptr_t) &SF_mindustry_gen_PathTile_bitMaskLegSolid, "I", 25 },
	{ "bitMaskNearLiquid", &class_int, (intptr_t) &SF_mindustry_gen_PathTile_bitMaskNearLiquid, "I", 25 },
	{ "bitMaskNearGround", &class_int, (intptr_t) &SF_mindustry_gen_PathTile_bitMaskNearGround, "I", 25 },
	{ "bitMaskNearSolid", &class_int, (intptr_t) &SF_mindustry_gen_PathTile_bitMaskNearSolid, "I", 25 },
	{ "bitMaskNearLegSolid", &class_int, (intptr_t) &SF_mindustry_gen_PathTile_bitMaskNearLegSolid, "I", 25 },
	{ "bitMaskDeep", &class_int, (intptr_t) &SF_mindustry_gen_PathTile_bitMaskDeep, "I", 25 },
	{ "bitMaskDamages", &class_int, (intptr_t) &SF_mindustry_gen_PathTile_bitMaskDamages, "I", 25 },
	{ "bitMaskAllDeep", &class_int, (intptr_t) &SF_mindustry_gen_PathTile_bitMaskAllDeep, "I", 25 },
	{ "bitMaskNearDeep", &class_int, (intptr_t) &SF_mindustry_gen_PathTile_bitMaskNearDeep, "I", 25 },
	{ "bitMaskTeamPassable", &class_int, (intptr_t) &SF_mindustry_gen_PathTile_bitMaskTeamPassable, "I", 25 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_mindustry_gen_PathTile, 0, "()V", 1 },
	{ "health", (intptr_t) SM_mindustry_gen_PathTile_health_int_R_int, 0, "(I)I", 9 },
	{ "health", (intptr_t) SM_mindustry_gen_PathTile_health_int_int_R_int, 0, "(II)I", 9 },
	{ "team", (intptr_t) SM_mindustry_gen_PathTile_team_int_R_int, 0, "(I)I", 9 },
	{ "team", (intptr_t) SM_mindustry_gen_PathTile_team_int_int_R_int, 0, "(II)I", 9 },
	{ "solid", (intptr_t) SM_mindustry_gen_PathTile_solid_int_R_boolean, 0, "(I)Z", 9 },
	{ "solid", (intptr_t) SM_mindustry_gen_PathTile_solid_int_boolean_R_int, 0, "(IZ)I", 9 },
	{ "liquid", (intptr_t) SM_mindustry_gen_PathTile_liquid_int_R_boolean, 0, "(I)Z", 9 },
	{ "liquid", (intptr_t) SM_mindustry_gen_PathTile_liquid_int_boolean_R_int, 0, "(IZ)I", 9 },
	{ "legSolid", (intptr_t) SM_mindustry_gen_PathTile_legSolid_int_R_boolean, 0, "(I)Z", 9 },
	{ "legSolid", (intptr_t) SM_mindustry_gen_PathTile_legSolid_int_boolean_R_int, 0, "(IZ)I", 9 },
	{ "nearLiquid", (intptr_t) SM_mindustry_gen_PathTile_nearLiquid_int_R_boolean, 0, "(I)Z", 9 },
	{ "nearLiquid", (intptr_t) SM_mindustry_gen_PathTile_nearLiquid_int_boolean_R_int, 0, "(IZ)I", 9 },
	{ "nearGround", (intptr_t) SM_mindustry_gen_PathTile_nearGround_int_R_boolean, 0, "(I)Z", 9 },
	{ "nearGround", (intptr_t) SM_mindustry_gen_PathTile_nearGround_int_boolean_R_int, 0, "(IZ)I", 9 },
	{ "nearSolid", (intptr_t) SM_mindustry_gen_PathTile_nearSolid_int_R_boolean, 0, "(I)Z", 9 },
	{ "nearSolid", (intptr_t) SM_mindustry_gen_PathTile_nearSolid_int_boolean_R_int, 0, "(IZ)I", 9 },
	{ "nearLegSolid", (intptr_t) SM_mindustry_gen_PathTile_nearLegSolid_int_R_boolean, 0, "(I)Z", 9 },
	{ "nearLegSolid", (intptr_t) SM_mindustry_gen_PathTile_nearLegSolid_int_boolean_R_int, 0, "(IZ)I", 9 },
	{ "deep", (intptr_t) SM_mindustry_gen_PathTile_deep_int_R_boolean, 0, "(I)Z", 9 },
	{ "deep", (intptr_t) SM_mindustry_gen_PathTile_deep_int_boolean_R_int, 0, "(IZ)I", 9 },
	{ "damages", (intptr_t) SM_mindustry_gen_PathTile_damages_int_R_boolean, 0, "(I)Z", 9 },
	{ "damages", (intptr_t) SM_mindustry_gen_PathTile_damages_int_boolean_R_int, 0, "(IZ)I", 9 },
	{ "allDeep", (intptr_t) SM_mindustry_gen_PathTile_allDeep_int_R_boolean, 0, "(I)Z", 9 },
	{ "allDeep", (intptr_t) SM_mindustry_gen_PathTile_allDeep_int_boolean_R_int, 0, "(IZ)I", 9 },
	{ "nearDeep", (intptr_t) SM_mindustry_gen_PathTile_nearDeep_int_R_boolean, 0, "(I)Z", 9 },
	{ "nearDeep", (intptr_t) SM_mindustry_gen_PathTile_nearDeep_int_boolean_R_int, 0, "(IZ)I", 9 },
	{ "teamPassable", (intptr_t) SM_mindustry_gen_PathTile_teamPassable_int_R_boolean, 0, "(I)Z", 9 },
	{ "teamPassable", (intptr_t) SM_mindustry_gen_PathTile_teamPassable_int_boolean_R_int, 0, "(IZ)I", 9 },
	{ "get", (intptr_t) SM_mindustry_gen_PathTile_get_int_int_boolean_boolean_boolean_boolean_boolean_boolean_boolean_boolean_boolean_boolean_boolean_boolean_R_int, 0, "(IIZZZZZZZZZZZZ)I", 9 },
};

Class class_mindustry_gen_PathTile{
		.nativeName = (intptr_t) "mindustry/gen/PathTile",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(mindustry_gen_PathTile),
		.classVtable = (intptr_t) vtable_mindustry_gen_PathTile,
		.staticInitializer = (intptr_t) clinit_mindustry_gen_PathTile,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_mindustry_gen_PathTile,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 49,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 14,
		.nativeFields = (intptr_t) fields,
		.methodCount = 30,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 11,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_mindustry_gen_PathTile = registerClass(&class_mindustry_gen_PathTile);

}
