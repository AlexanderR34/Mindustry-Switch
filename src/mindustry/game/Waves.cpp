#include "mindustry/game/Waves.h"
#include "mindustry/game/Waves_1.h"
#include "mindustry/game/Waves_2.h"
#include "mindustry/game/Waves_3.h"
#include "arc/func/Intc.h"
#include "mindustry/game/Waves_4.h"
#include "mindustry/game/Waves_5.h"
#include "mindustry/game/Waves_6.h"
#include "mindustry/game/Waves_7.h"
#include "mindustry/game/Waves_29.h"
#include "mindustry/game/Waves_8.h"
#include "mindustry/game/Waves_9.h"
#include "mindustry/game/Waves_27.h"
#include "mindustry/game/Waves_28.h"
#include "arc/struct/Seq.h"
#include "mindustry/game/Waves_25.h"
#include "mindustry/game/Waves_26.h"
#include "mindustry/game/Waves_23.h"
#include "mindustry/game/Waves_24.h"
#include "mindustry/game/Waves_21.h"
#include "mindustry/game/Waves_22.h"
#include "arc/func/Boolf.h"
#include "mindustry/game/Waves_20.h"
#include "arc/math/Mathf.h"
#include "java/util/Iterator.h"
#include "arc/util/Structs.h"
#include "java/lang/Object.h"
#include "mindustry/game/Waves_18.h"
#include "mindustry/game/Waves_19.h"
#include "mindustry/game/Waves_16.h"
#include "mindustry/game/Waves_17.h"
#include "mindustry/game/Waves_14.h"
#include "mindustry/game/Waves_15.h"
#include "mindustry/game/Waves_12.h"
#include "mindustry/game/Waves_13.h"
#include "mindustry/game/Waves_10.h"
#include "mindustry/game/Waves_11.h"
#include "arc/math/Rand.h"
#include "mindustry/game/Waves_invoke_arc_func_Boolf_3.h"
#include "mindustry/game/Waves.h"
#include "mindustry/game/Waves_invoke_arc_func_Boolf_4.h"
#include "mindustry/game/Waves_invoke_arc_func_Boolf_5.h"
#include "mindustry/content/UnitTypes.h"
#include "java/lang/Math.h"
#include "mindustry/type/UnitType.h"
#include "mindustry/game/SpawnGroup.h"
#include "mindustry/game/Waves_invoke_arc_func_Intc_1.h"
#include "mindustry/game/Waves_34.h"
#include "mindustry/game/Waves_35.h"
#include "java/lang/Class.h"
#include "mindustry/game/Waves_32.h"
#include "mindustry/game/Waves_33.h"
#include "mindustry/game/Waves_30.h"
#include "mindustry/game/Waves_31.h"

extern "C" {

jint SF_mindustry_game_Waves_waveVersion;

void mark_mindustry_game_Waves(jobject object, jint mark, jint depth) {
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
	auto self = (mindustry_game_Waves *) object;
	if (self->F_spawns)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_spawns)->clazz)->markFunction)((jobject) self->F_spawns, mark, depth + 1);
}

void clinit_mindustry_game_Waves(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	SF_mindustry_game_Waves_waveVersion = jint(7);
}

void init_mindustry_game_Waves(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/game/Waves:<init>", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_game_Waves(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(12);
	init_java_lang_Object(ctx, (frame[0].o));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_mindustry_game_Waves_get_R_arc_struct_Seq(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/game/Waves:get", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(18);
	sp[0].o = (jobject)((mindustry_game_Waves *) NULL_CHECK((frame[0].o)))->F_spawns;
	if (sp[0].o != nullptr) goto label_1;
	}
	clinit_mindustry_content_UnitTypes(ctx);
	(sp++)->o = SF_mindustry_content_UnitTypes_dagger;
	if ((--sp)->o == nullptr) goto label_1;
	{
	LINE_NUMBER(19);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)createArray(ctx, &class_mindustry_game_SpawnGroup, (28));
	jint temp0 = jint(0);
	clinit_mindustry_game_Waves$1(ctx);
	sp[2].o = gcAlloc(ctx, &class_mindustry_game_Waves$1);
	sp[3].o = frame[0].o;
	clinit_mindustry_content_UnitTypes(ctx);
	sp[4].o = (jobject)SF_mindustry_content_UnitTypes_dagger;
	init_mindustry_game_Waves$1_mindustry_game_Waves_mindustry_type_UnitType(ctx, sp[2].o, sp[3].o, sp[4].o);
	ARRAY_ACCESS(jobject, sp[1].o, temp0) = sp[2].o;
	jint temp1 = jint(1);
	clinit_mindustry_game_Waves$2(ctx);
	sp[2].o = gcAlloc(ctx, &class_mindustry_game_Waves$2);
	sp[3].o = frame[0].o;
	clinit_mindustry_content_UnitTypes(ctx);
	sp[4].o = (jobject)SF_mindustry_content_UnitTypes_crawler;
	init_mindustry_game_Waves$2_mindustry_game_Waves_mindustry_type_UnitType(ctx, sp[2].o, sp[3].o, sp[4].o);
	ARRAY_ACCESS(jobject, sp[1].o, temp1) = sp[2].o;
	jint temp2 = jint(2);
	clinit_mindustry_game_Waves$3(ctx);
	sp[2].o = gcAlloc(ctx, &class_mindustry_game_Waves$3);
	sp[3].o = frame[0].o;
	clinit_mindustry_content_UnitTypes(ctx);
	sp[4].o = (jobject)SF_mindustry_content_UnitTypes_flare;
	init_mindustry_game_Waves$3_mindustry_game_Waves_mindustry_type_UnitType(ctx, sp[2].o, sp[3].o, sp[4].o);
	ARRAY_ACCESS(jobject, sp[1].o, temp2) = sp[2].o;
	jint temp3 = jint(3);
	clinit_mindustry_game_Waves$4(ctx);
	sp[2].o = gcAlloc(ctx, &class_mindustry_game_Waves$4);
	sp[3].o = frame[0].o;
	clinit_mindustry_content_UnitTypes(ctx);
	sp[4].o = (jobject)SF_mindustry_content_UnitTypes_dagger;
	init_mindustry_game_Waves$4_mindustry_game_Waves_mindustry_type_UnitType(ctx, sp[2].o, sp[3].o, sp[4].o);
	ARRAY_ACCESS(jobject, sp[1].o, temp3) = sp[2].o;
	jint temp4 = jint(4);
	clinit_mindustry_game_Waves$5(ctx);
	sp[2].o = gcAlloc(ctx, &class_mindustry_game_Waves$5);
	sp[3].o = frame[0].o;
	clinit_mindustry_content_UnitTypes(ctx);
	sp[4].o = (jobject)SF_mindustry_content_UnitTypes_pulsar;
	init_mindustry_game_Waves$5_mindustry_game_Waves_mindustry_type_UnitType(ctx, sp[2].o, sp[3].o, sp[4].o);
	ARRAY_ACCESS(jobject, sp[1].o, temp4) = sp[2].o;
	jint temp5 = jint(5);
	clinit_mindustry_game_Waves$6(ctx);
	sp[2].o = gcAlloc(ctx, &class_mindustry_game_Waves$6);
	sp[3].o = frame[0].o;
	clinit_mindustry_content_UnitTypes(ctx);
	sp[4].o = (jobject)SF_mindustry_content_UnitTypes_mace;
	init_mindustry_game_Waves$6_mindustry_game_Waves_mindustry_type_UnitType(ctx, sp[2].o, sp[3].o, sp[4].o);
	ARRAY_ACCESS(jobject, sp[1].o, temp5) = sp[2].o;
	jint temp6 = 6;
	clinit_mindustry_game_Waves$7(ctx);
	sp[2].o = gcAlloc(ctx, &class_mindustry_game_Waves$7);
	sp[3].o = frame[0].o;
	clinit_mindustry_content_UnitTypes(ctx);
	sp[4].o = (jobject)SF_mindustry_content_UnitTypes_dagger;
	init_mindustry_game_Waves$7_mindustry_game_Waves_mindustry_type_UnitType(ctx, sp[2].o, sp[3].o, sp[4].o);
	ARRAY_ACCESS(jobject, sp[1].o, temp6) = sp[2].o;
	jint temp7 = 7;
	clinit_mindustry_game_Waves$8(ctx);
	sp[2].o = gcAlloc(ctx, &class_mindustry_game_Waves$8);
	sp[3].o = frame[0].o;
	clinit_mindustry_content_UnitTypes(ctx);
	sp[4].o = (jobject)SF_mindustry_content_UnitTypes_mace;
	init_mindustry_game_Waves$8_mindustry_game_Waves_mindustry_type_UnitType(ctx, sp[2].o, sp[3].o, sp[4].o);
	ARRAY_ACCESS(jobject, sp[1].o, temp7) = sp[2].o;
	jint temp8 = 8;
	clinit_mindustry_game_Waves$9(ctx);
	sp[2].o = gcAlloc(ctx, &class_mindustry_game_Waves$9);
	sp[3].o = frame[0].o;
	clinit_mindustry_content_UnitTypes(ctx);
	sp[4].o = (jobject)SF_mindustry_content_UnitTypes_spiroct;
	init_mindustry_game_Waves$9_mindustry_game_Waves_mindustry_type_UnitType(ctx, sp[2].o, sp[3].o, sp[4].o);
	ARRAY_ACCESS(jobject, sp[1].o, temp8) = sp[2].o;
	jint temp9 = 9;
	clinit_mindustry_game_Waves$10(ctx);
	sp[2].o = gcAlloc(ctx, &class_mindustry_game_Waves$10);
	sp[3].o = frame[0].o;
	clinit_mindustry_content_UnitTypes(ctx);
	sp[4].o = (jobject)SF_mindustry_content_UnitTypes_pulsar;
	init_mindustry_game_Waves$10_mindustry_game_Waves_mindustry_type_UnitType(ctx, sp[2].o, sp[3].o, sp[4].o);
	ARRAY_ACCESS(jobject, sp[1].o, temp9) = sp[2].o;
	jint temp10 = 10;
	clinit_mindustry_game_Waves$11(ctx);
	sp[2].o = gcAlloc(ctx, &class_mindustry_game_Waves$11);
	sp[3].o = frame[0].o;
	clinit_mindustry_content_UnitTypes(ctx);
	sp[4].o = (jobject)SF_mindustry_content_UnitTypes_flare;
	init_mindustry_game_Waves$11_mindustry_game_Waves_mindustry_type_UnitType(ctx, sp[2].o, sp[3].o, sp[4].o);
	ARRAY_ACCESS(jobject, sp[1].o, temp10) = sp[2].o;
	jint temp11 = 11;
	clinit_mindustry_game_Waves$12(ctx);
	sp[2].o = gcAlloc(ctx, &class_mindustry_game_Waves$12);
	sp[3].o = frame[0].o;
	clinit_mindustry_content_UnitTypes(ctx);
	sp[4].o = (jobject)SF_mindustry_content_UnitTypes_quasar;
	init_mindustry_game_Waves$12_mindustry_game_Waves_mindustry_type_UnitType(ctx, sp[2].o, sp[3].o, sp[4].o);
	ARRAY_ACCESS(jobject, sp[1].o, temp11) = sp[2].o;
	jint temp12 = 12;
	clinit_mindustry_game_Waves$13(ctx);
	sp[2].o = gcAlloc(ctx, &class_mindustry_game_Waves$13);
	sp[3].o = frame[0].o;
	clinit_mindustry_content_UnitTypes(ctx);
	sp[4].o = (jobject)SF_mindustry_content_UnitTypes_pulsar;
	init_mindustry_game_Waves$13_mindustry_game_Waves_mindustry_type_UnitType(ctx, sp[2].o, sp[3].o, sp[4].o);
	ARRAY_ACCESS(jobject, sp[1].o, temp12) = sp[2].o;
	jint temp13 = 13;
	clinit_mindustry_game_Waves$14(ctx);
	sp[2].o = gcAlloc(ctx, &class_mindustry_game_Waves$14);
	sp[3].o = frame[0].o;
	clinit_mindustry_content_UnitTypes(ctx);
	sp[4].o = (jobject)SF_mindustry_content_UnitTypes_fortress;
	init_mindustry_game_Waves$14_mindustry_game_Waves_mindustry_type_UnitType(ctx, sp[2].o, sp[3].o, sp[4].o);
	ARRAY_ACCESS(jobject, sp[1].o, temp13) = sp[2].o;
	jint temp14 = 14;
	clinit_mindustry_game_Waves$15(ctx);
	sp[2].o = gcAlloc(ctx, &class_mindustry_game_Waves$15);
	sp[3].o = frame[0].o;
	clinit_mindustry_content_UnitTypes(ctx);
	sp[4].o = (jobject)SF_mindustry_content_UnitTypes_nova;
	init_mindustry_game_Waves$15_mindustry_game_Waves_mindustry_type_UnitType(ctx, sp[2].o, sp[3].o, sp[4].o);
	ARRAY_ACCESS(jobject, sp[1].o, temp14) = sp[2].o;
	jint temp15 = 15;
	clinit_mindustry_game_Waves$16(ctx);
	sp[2].o = gcAlloc(ctx, &class_mindustry_game_Waves$16);
	sp[3].o = frame[0].o;
	clinit_mindustry_content_UnitTypes(ctx);
	sp[4].o = (jobject)SF_mindustry_content_UnitTypes_dagger;
	init_mindustry_game_Waves$16_mindustry_game_Waves_mindustry_type_UnitType(ctx, sp[2].o, sp[3].o, sp[4].o);
	ARRAY_ACCESS(jobject, sp[1].o, temp15) = sp[2].o;
	jint temp16 = 16;
	clinit_mindustry_game_Waves$17(ctx);
	sp[2].o = gcAlloc(ctx, &class_mindustry_game_Waves$17);
	sp[3].o = frame[0].o;
	clinit_mindustry_content_UnitTypes(ctx);
	sp[4].o = (jobject)SF_mindustry_content_UnitTypes_horizon;
	init_mindustry_game_Waves$17_mindustry_game_Waves_mindustry_type_UnitType(ctx, sp[2].o, sp[3].o, sp[4].o);
	ARRAY_ACCESS(jobject, sp[1].o, temp16) = sp[2].o;
	jint temp17 = 17;
	clinit_mindustry_game_Waves$18(ctx);
	sp[2].o = gcAlloc(ctx, &class_mindustry_game_Waves$18);
	sp[3].o = frame[0].o;
	clinit_mindustry_content_UnitTypes(ctx);
	sp[4].o = (jobject)SF_mindustry_content_UnitTypes_flare;
	init_mindustry_game_Waves$18_mindustry_game_Waves_mindustry_type_UnitType(ctx, sp[2].o, sp[3].o, sp[4].o);
	ARRAY_ACCESS(jobject, sp[1].o, temp17) = sp[2].o;
	jint temp18 = 18;
	clinit_mindustry_game_Waves$19(ctx);
	sp[2].o = gcAlloc(ctx, &class_mindustry_game_Waves$19);
	sp[3].o = frame[0].o;
	clinit_mindustry_content_UnitTypes(ctx);
	sp[4].o = (jobject)SF_mindustry_content_UnitTypes_zenith;
	init_mindustry_game_Waves$19_mindustry_game_Waves_mindustry_type_UnitType(ctx, sp[2].o, sp[3].o, sp[4].o);
	ARRAY_ACCESS(jobject, sp[1].o, temp18) = sp[2].o;
	jint temp19 = 19;
	clinit_mindustry_game_Waves$20(ctx);
	sp[2].o = gcAlloc(ctx, &class_mindustry_game_Waves$20);
	sp[3].o = frame[0].o;
	clinit_mindustry_content_UnitTypes(ctx);
	sp[4].o = (jobject)SF_mindustry_content_UnitTypes_nova;
	init_mindustry_game_Waves$20_mindustry_game_Waves_mindustry_type_UnitType(ctx, sp[2].o, sp[3].o, sp[4].o);
	ARRAY_ACCESS(jobject, sp[1].o, temp19) = sp[2].o;
	jint temp20 = 20;
	clinit_mindustry_game_Waves$21(ctx);
	sp[2].o = gcAlloc(ctx, &class_mindustry_game_Waves$21);
	sp[3].o = frame[0].o;
	clinit_mindustry_content_UnitTypes(ctx);
	sp[4].o = (jobject)SF_mindustry_content_UnitTypes_atrax;
	init_mindustry_game_Waves$21_mindustry_game_Waves_mindustry_type_UnitType(ctx, sp[2].o, sp[3].o, sp[4].o);
	ARRAY_ACCESS(jobject, sp[1].o, temp20) = sp[2].o;
	jint temp21 = 21;
	clinit_mindustry_game_Waves$22(ctx);
	sp[2].o = gcAlloc(ctx, &class_mindustry_game_Waves$22);
	sp[3].o = frame[0].o;
	clinit_mindustry_content_UnitTypes(ctx);
	sp[4].o = (jobject)SF_mindustry_content_UnitTypes_scepter;
	init_mindustry_game_Waves$22_mindustry_game_Waves_mindustry_type_UnitType(ctx, sp[2].o, sp[3].o, sp[4].o);
	ARRAY_ACCESS(jobject, sp[1].o, temp21) = sp[2].o;
	jint temp22 = 22;
	clinit_mindustry_game_Waves$23(ctx);
	sp[2].o = gcAlloc(ctx, &class_mindustry_game_Waves$23);
	sp[3].o = frame[0].o;
	clinit_mindustry_content_UnitTypes(ctx);
	sp[4].o = (jobject)SF_mindustry_content_UnitTypes_reign;
	init_mindustry_game_Waves$23_mindustry_game_Waves_mindustry_type_UnitType(ctx, sp[2].o, sp[3].o, sp[4].o);
	ARRAY_ACCESS(jobject, sp[1].o, temp22) = sp[2].o;
	jint temp23 = 23;
	clinit_mindustry_game_Waves$24(ctx);
	sp[2].o = gcAlloc(ctx, &class_mindustry_game_Waves$24);
	sp[3].o = frame[0].o;
	clinit_mindustry_content_UnitTypes(ctx);
	sp[4].o = (jobject)SF_mindustry_content_UnitTypes_antumbra;
	init_mindustry_game_Waves$24_mindustry_game_Waves_mindustry_type_UnitType(ctx, sp[2].o, sp[3].o, sp[4].o);
	ARRAY_ACCESS(jobject, sp[1].o, temp23) = sp[2].o;
	jint temp24 = 24;
	clinit_mindustry_game_Waves$25(ctx);
	sp[2].o = gcAlloc(ctx, &class_mindustry_game_Waves$25);
	sp[3].o = frame[0].o;
	clinit_mindustry_content_UnitTypes(ctx);
	sp[4].o = (jobject)SF_mindustry_content_UnitTypes_vela;
	init_mindustry_game_Waves$25_mindustry_game_Waves_mindustry_type_UnitType(ctx, sp[2].o, sp[3].o, sp[4].o);
	ARRAY_ACCESS(jobject, sp[1].o, temp24) = sp[2].o;
	jint temp25 = 25;
	clinit_mindustry_game_Waves$26(ctx);
	sp[2].o = gcAlloc(ctx, &class_mindustry_game_Waves$26);
	sp[3].o = frame[0].o;
	clinit_mindustry_content_UnitTypes(ctx);
	sp[4].o = (jobject)SF_mindustry_content_UnitTypes_corvus;
	init_mindustry_game_Waves$26_mindustry_game_Waves_mindustry_type_UnitType(ctx, sp[2].o, sp[3].o, sp[4].o);
	ARRAY_ACCESS(jobject, sp[1].o, temp25) = sp[2].o;
	jint temp26 = 26;
	clinit_mindustry_game_Waves$27(ctx);
	sp[2].o = gcAlloc(ctx, &class_mindustry_game_Waves$27);
	sp[3].o = frame[0].o;
	clinit_mindustry_content_UnitTypes(ctx);
	sp[4].o = (jobject)SF_mindustry_content_UnitTypes_horizon;
	init_mindustry_game_Waves$27_mindustry_game_Waves_mindustry_type_UnitType(ctx, sp[2].o, sp[3].o, sp[4].o);
	ARRAY_ACCESS(jobject, sp[1].o, temp26) = sp[2].o;
	jint temp27 = 27;
	clinit_mindustry_game_Waves$28(ctx);
	sp[2].o = gcAlloc(ctx, &class_mindustry_game_Waves$28);
	sp[3].o = frame[0].o;
	clinit_mindustry_content_UnitTypes(ctx);
	sp[4].o = (jobject)SF_mindustry_content_UnitTypes_toxopid;
	init_mindustry_game_Waves$28_mindustry_game_Waves_mindustry_type_UnitType(ctx, sp[2].o, sp[3].o, sp[4].o);
	ARRAY_ACCESS(jobject, sp[1].o, temp27) = sp[2].o;
	sp[1].o = (jobject)SM_arc_struct_Seq_with_Array1_java_lang_Object_R_arc_struct_Seq(ctx, sp[1].o);
	((mindustry_game_Waves *) NULL_CHECK(sp[0].o))->F_spawns = (jref) sp[1].o;
	}
label_1:;
	{
	LINE_NUMBER(255);
	sp[0].o = (jobject)((mindustry_game_Waves *) NULL_CHECK((frame[0].o)))->F_spawns;
	if (sp[0].o != nullptr) goto label_3;
	}
	{
	clinit_arc_struct_Seq(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_struct_Seq);
	init_arc_struct_Seq(ctx, sp[0].o);
	sp += 1;
	goto label_4;
	}
label_3:;
	INST_ALOAD(0);
	sp[-1].o = (jobject) ((mindustry_game_Waves *) NULL_CHECK(sp[-1].o))->F_spawns;
label_4:;
	popStackFrame(ctx);
	INST_ARETURN();

	popStackFrame(ctx);
}

jobject SM_mindustry_game_Waves_generate_float_R_arc_struct_Seq(jcontext ctx, jfloat param0) {
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/game/Waves:generate", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_game_Waves(ctx);
	frame[0].f = param0;
	{
	LINE_NUMBER(260);
	jfloat temp0 = (jfloat)SM_arc_math_Mathf_pow_float_float_R_float(ctx, (frame[0].f), (jfloat(1.12f)));
	clinit_arc_math_Rand(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_math_Rand);
	init_arc_math_Rand(ctx, sp[0].o);
	sp[0].o = (jobject)SM_mindustry_game_Waves_generate_float_arc_math_Rand_boolean_R_arc_struct_Seq(ctx, temp0, sp[0].o, (jint(0)));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject SM_mindustry_game_Waves_generate_float_arc_math_Rand_boolean_R_arc_struct_Seq(jcontext ctx, jfloat param0, jobject param1, jbool param2) {
	jtype frame[7];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/game/Waves:generate", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_game_Waves(ctx);
	frame[0].f = param0;
	frame[1].o = param1;
	frame[2].i = param2;
	{
	LINE_NUMBER(264);
	sp[0].o = (jobject)SM_mindustry_game_Waves_generate_float_arc_math_Rand_boolean_boolean_R_arc_struct_Seq(ctx, (frame[0].f), (frame[1].o), (frame[2].i), (jint(0)));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject SM_mindustry_game_Waves_generate_float_arc_math_Rand_boolean_boolean_R_arc_struct_Seq(jcontext ctx, jfloat param0, jobject param1, jbool param2, jbool param3) {
	jtype frame[9];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/game/Waves:generate", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_game_Waves(ctx);
	frame[0].f = param0;
	frame[1].o = param1;
	frame[2].i = param2;
	frame[3].i = param3;
	{
	LINE_NUMBER(268);
	sp[0].o = (jobject)SM_mindustry_game_Waves_generate_float_arc_math_Rand_boolean_boolean_boolean_R_arc_struct_Seq(ctx, (frame[0].f), (frame[1].o), (frame[2].i), (frame[3].i), (jint(0)));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject SM_mindustry_game_Waves_generate_float_arc_math_Rand_boolean_boolean_boolean_R_arc_struct_Seq(jcontext ctx, jfloat param0, jobject param1, jbool param2, jbool param3, jbool param4) {
	jtype frame[30];
	auto stack = &frame[21];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/game/Waves:generate", 30 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_game_Waves(ctx);
	frame[0].f = param0;
	frame[1].o = param1;
	frame[2].i = param2;
	frame[3].i = param3;
	frame[4].i = param4;
	{
	LINE_NUMBER(272);
	sp[0].o = (jobject)createArray(ctx, getArrayClass(&class_mindustry_type_UnitType, 1), (6));
	jint temp0 = jint(0);
	sp[1].o = (jobject)createArray(ctx, &class_mindustry_type_UnitType, (jint(5)));
	jint temp1 = jint(0);
	clinit_mindustry_content_UnitTypes(ctx);
	sp[2].o = (jobject)SF_mindustry_content_UnitTypes_dagger;
	ARRAY_ACCESS(jobject, sp[1].o, temp1) = sp[2].o;
	jint temp2 = jint(1);
	clinit_mindustry_content_UnitTypes(ctx);
	sp[2].o = (jobject)SF_mindustry_content_UnitTypes_mace;
	ARRAY_ACCESS(jobject, sp[1].o, temp2) = sp[2].o;
	jint temp3 = jint(2);
	clinit_mindustry_content_UnitTypes(ctx);
	sp[2].o = (jobject)SF_mindustry_content_UnitTypes_fortress;
	ARRAY_ACCESS(jobject, sp[1].o, temp3) = sp[2].o;
	jint temp4 = jint(3);
	clinit_mindustry_content_UnitTypes(ctx);
	sp[2].o = (jobject)SF_mindustry_content_UnitTypes_scepter;
	ARRAY_ACCESS(jobject, sp[1].o, temp4) = sp[2].o;
	jint temp5 = jint(4);
	clinit_mindustry_content_UnitTypes(ctx);
	sp[2].o = (jobject)SF_mindustry_content_UnitTypes_reign;
	ARRAY_ACCESS(jobject, sp[1].o, temp5) = sp[2].o;
	ARRAY_ACCESS(jobject, sp[0].o, temp0) = sp[1].o;
	jint temp6 = jint(1);
	sp[1].o = (jobject)createArray(ctx, &class_mindustry_type_UnitType, (jint(5)));
	jint temp7 = jint(0);
	clinit_mindustry_content_UnitTypes(ctx);
	sp[2].o = (jobject)SF_mindustry_content_UnitTypes_nova;
	ARRAY_ACCESS(jobject, sp[1].o, temp7) = sp[2].o;
	jint temp8 = jint(1);
	clinit_mindustry_content_UnitTypes(ctx);
	sp[2].o = (jobject)SF_mindustry_content_UnitTypes_pulsar;
	ARRAY_ACCESS(jobject, sp[1].o, temp8) = sp[2].o;
	jint temp9 = jint(2);
	clinit_mindustry_content_UnitTypes(ctx);
	sp[2].o = (jobject)SF_mindustry_content_UnitTypes_quasar;
	ARRAY_ACCESS(jobject, sp[1].o, temp9) = sp[2].o;
	jint temp10 = jint(3);
	clinit_mindustry_content_UnitTypes(ctx);
	sp[2].o = (jobject)SF_mindustry_content_UnitTypes_vela;
	ARRAY_ACCESS(jobject, sp[1].o, temp10) = sp[2].o;
	jint temp11 = jint(4);
	clinit_mindustry_content_UnitTypes(ctx);
	sp[2].o = (jobject)SF_mindustry_content_UnitTypes_corvus;
	ARRAY_ACCESS(jobject, sp[1].o, temp11) = sp[2].o;
	ARRAY_ACCESS(jobject, sp[0].o, temp6) = sp[1].o;
	jint temp12 = jint(2);
	sp[1].o = (jobject)createArray(ctx, &class_mindustry_type_UnitType, (jint(5)));
	jint temp13 = jint(0);
	clinit_mindustry_content_UnitTypes(ctx);
	sp[2].o = (jobject)SF_mindustry_content_UnitTypes_crawler;
	ARRAY_ACCESS(jobject, sp[1].o, temp13) = sp[2].o;
	jint temp14 = jint(1);
	clinit_mindustry_content_UnitTypes(ctx);
	sp[2].o = (jobject)SF_mindustry_content_UnitTypes_atrax;
	ARRAY_ACCESS(jobject, sp[1].o, temp14) = sp[2].o;
	jint temp15 = jint(2);
	clinit_mindustry_content_UnitTypes(ctx);
	sp[2].o = (jobject)SF_mindustry_content_UnitTypes_spiroct;
	ARRAY_ACCESS(jobject, sp[1].o, temp15) = sp[2].o;
	jint temp16 = jint(3);
	clinit_mindustry_content_UnitTypes(ctx);
	sp[2].o = (jobject)SF_mindustry_content_UnitTypes_arkyid;
	ARRAY_ACCESS(jobject, sp[1].o, temp16) = sp[2].o;
	jint temp17 = jint(4);
	clinit_mindustry_content_UnitTypes(ctx);
	sp[2].o = (jobject)SF_mindustry_content_UnitTypes_toxopid;
	ARRAY_ACCESS(jobject, sp[1].o, temp17) = sp[2].o;
	ARRAY_ACCESS(jobject, sp[0].o, temp12) = sp[1].o;
	jint temp18 = jint(3);
	sp[1].o = (jobject)createArray(ctx, &class_mindustry_type_UnitType, (jint(5)));
	jint temp19 = jint(0);
	clinit_mindustry_content_UnitTypes(ctx);
	sp[2].o = (jobject)SF_mindustry_content_UnitTypes_risso;
	ARRAY_ACCESS(jobject, sp[1].o, temp19) = sp[2].o;
	jint temp20 = jint(1);
	clinit_mindustry_content_UnitTypes(ctx);
	sp[2].o = (jobject)SF_mindustry_content_UnitTypes_minke;
	ARRAY_ACCESS(jobject, sp[1].o, temp20) = sp[2].o;
	jint temp21 = jint(2);
	clinit_mindustry_content_UnitTypes(ctx);
	sp[2].o = (jobject)SF_mindustry_content_UnitTypes_bryde;
	ARRAY_ACCESS(jobject, sp[1].o, temp21) = sp[2].o;
	jint temp22 = jint(3);
	clinit_mindustry_content_UnitTypes(ctx);
	sp[2].o = (jobject)SF_mindustry_content_UnitTypes_sei;
	ARRAY_ACCESS(jobject, sp[1].o, temp22) = sp[2].o;
	jint temp23 = jint(4);
	clinit_mindustry_content_UnitTypes(ctx);
	sp[2].o = (jobject)SF_mindustry_content_UnitTypes_omura;
	ARRAY_ACCESS(jobject, sp[1].o, temp23) = sp[2].o;
	ARRAY_ACCESS(jobject, sp[0].o, temp18) = sp[1].o;
	jint temp24 = jint(4);
	sp[1].o = (jobject)createArray(ctx, &class_mindustry_type_UnitType, (jint(5)));
	jint temp25 = jint(0);
	clinit_mindustry_content_UnitTypes(ctx);
	sp[2].o = (jobject)SF_mindustry_content_UnitTypes_retusa;
	ARRAY_ACCESS(jobject, sp[1].o, temp25) = sp[2].o;
	jint temp26 = jint(1);
	clinit_mindustry_content_UnitTypes(ctx);
	sp[2].o = (jobject)SF_mindustry_content_UnitTypes_oxynoe;
	ARRAY_ACCESS(jobject, sp[1].o, temp26) = sp[2].o;
	jint temp27 = jint(2);
	clinit_mindustry_content_UnitTypes(ctx);
	sp[2].o = (jobject)SF_mindustry_content_UnitTypes_cyerce;
	ARRAY_ACCESS(jobject, sp[1].o, temp27) = sp[2].o;
	jint temp28 = jint(3);
	clinit_mindustry_content_UnitTypes(ctx);
	sp[2].o = (jobject)SF_mindustry_content_UnitTypes_aegires;
	ARRAY_ACCESS(jobject, sp[1].o, temp28) = sp[2].o;
	jint temp29 = jint(4);
	clinit_mindustry_content_UnitTypes(ctx);
	sp[2].o = (jobject)SF_mindustry_content_UnitTypes_navanax;
	ARRAY_ACCESS(jobject, sp[1].o, temp29) = sp[2].o;
	ARRAY_ACCESS(jobject, sp[0].o, temp24) = sp[1].o;
	jint temp30 = jint(5);
	sp[1].o = (jobject)createArray(ctx, &class_mindustry_type_UnitType, (jint(5)));
	jint temp31 = jint(0);
	clinit_mindustry_content_UnitTypes(ctx);
	sp[2].o = (jobject)SF_mindustry_content_UnitTypes_flare;
	ARRAY_ACCESS(jobject, sp[1].o, temp31) = sp[2].o;
	jint temp32 = jint(1);
	clinit_mindustry_content_UnitTypes(ctx);
	sp[2].o = (jobject)SF_mindustry_content_UnitTypes_horizon;
	ARRAY_ACCESS(jobject, sp[1].o, temp32) = sp[2].o;
	jint temp33 = jint(2);
	clinit_mindustry_content_UnitTypes(ctx);
	sp[2].o = (jobject)SF_mindustry_content_UnitTypes_zenith;
	ARRAY_ACCESS(jobject, sp[1].o, temp33) = sp[2].o;
	jint temp34 = jint(3);
	LINE_NUMBER(278);
	jint temp35 = (jint)((func_arc_math_Rand_chance_double_R_boolean) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_math_Rand_chance_double_R_boolean])(ctx, (frame[1].o), (jdouble(0.5)));
	jobject temp36 = sp[1].o;
	sp[1].o = sp[0].o;
	sp[2].i = temp30;
	sp[3].o = temp36;
	sp[4].o = temp36;
	sp[5].i = temp34;
	sp += 6;
	if (temp35 == 0) goto label_2;
	}
	clinit_mindustry_content_UnitTypes(ctx);
	(sp++)->o = SF_mindustry_content_UnitTypes_quad;
	goto label_3;
label_2:;
	clinit_mindustry_content_UnitTypes(ctx);
	(sp++)->o = SF_mindustry_content_UnitTypes_antumbra;
label_3:;
	{
	sp -= 4;
	ARRAY_ACCESS(jobject, sp[0].o, sp[2].i) = sp[3].o;
	jint temp0 = jint(4);
	jint temp1 = (jint)((func_arc_math_Rand_chance_double_R_boolean) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_math_Rand_chance_double_R_boolean])(ctx, (frame[1].o), (jdouble(0.1)));
	sp[1].o = sp[0].o;
	sp[2].i = temp0;
	sp += 3;
	if (temp1 == 0) goto label_4;
	}
	clinit_mindustry_content_UnitTypes(ctx);
	(sp++)->o = SF_mindustry_content_UnitTypes_quad;
	goto label_5;
label_4:;
	clinit_mindustry_content_UnitTypes(ctx);
	(sp++)->o = SF_mindustry_content_UnitTypes_eclipse;
label_5:;
	{
	sp -= 7;
	ARRAY_ACCESS(jobject, sp[3].o, sp[5].i) = sp[6].o;
	ARRAY_ACCESS(jobject, sp[0].o, sp[2].i) = sp[3].o;
	frame[5].o = sp[0].o;
	LINE_NUMBER(281);
	if ((frame[3].i) == 0) goto label_7;
	}
	{
	LINE_NUMBER(282);
	sp[0].o = ((jobject) getArrayClass(&class_mindustry_type_UnitType, 1));
	sp[1].o = frame[5].o;
	{ /* InvokeDynamic */
		clinit_mindustry_game_Waves_invoke_arc_func_Boolf_3(ctx);
		auto proxy = (mindustry_game_Waves_invoke_arc_func_Boolf_3 *) gcAlloc(ctx, &class_mindustry_game_Waves_invoke_arc_func_Boolf_3);
		sp[2].o = (jobject) proxy;
	}
	sp[0].o = (jobject)SM_arc_util_Structs_filter_java_lang_Class_Array1_java_lang_Object_arc_func_Boolf_R_Array1_java_lang_Object(ctx, sp[0].o, sp[1].o, sp[2].o);
	frame[5].o = (checkCast(ctx, getArrayClass(&class_mindustry_type_UnitType, 2), sp[0].o));
	}
label_7:;
	{
	LINE_NUMBER(285);
	if ((frame[4].i) == 0) goto label_9;
	}
	{
	LINE_NUMBER(286);
	sp[0].o = ((jobject) getArrayClass(&class_mindustry_type_UnitType, 1));
	sp[1].o = frame[5].o;
	{ /* InvokeDynamic */
		clinit_mindustry_game_Waves_invoke_arc_func_Boolf_4(ctx);
		auto proxy = (mindustry_game_Waves_invoke_arc_func_Boolf_4 *) gcAlloc(ctx, &class_mindustry_game_Waves_invoke_arc_func_Boolf_4);
		sp[2].o = (jobject) proxy;
	}
	sp[0].o = (jobject)SM_arc_util_Structs_filter_java_lang_Class_Array1_java_lang_Object_arc_func_Boolf_R_Array1_java_lang_Object(ctx, sp[0].o, sp[1].o, sp[2].o);
	frame[5].o = (checkCast(ctx, getArrayClass(&class_mindustry_type_UnitType, 2), sp[0].o));
	goto label_11;
	}
label_9:;
	{
	LINE_NUMBER(288);
	sp[0].o = ((jobject) getArrayClass(&class_mindustry_type_UnitType, 1));
	sp[1].o = frame[5].o;
	{ /* InvokeDynamic */
		clinit_mindustry_game_Waves_invoke_arc_func_Boolf_5(ctx);
		auto proxy = (mindustry_game_Waves_invoke_arc_func_Boolf_5 *) gcAlloc(ctx, &class_mindustry_game_Waves_invoke_arc_func_Boolf_5);
		sp[2].o = (jobject) proxy;
	}
	sp[0].o = (jobject)SM_arc_util_Structs_filter_java_lang_Class_Array1_java_lang_Object_arc_func_Boolf_R_Array1_java_lang_Object(ctx, sp[0].o, sp[1].o, sp[2].o);
	frame[5].o = (checkCast(ctx, getArrayClass(&class_mindustry_type_UnitType, 2), sp[0].o));
	}
label_11:;
	{
	LINE_NUMBER(291);
	frame[6].o = (frame[5].o);
	LINE_NUMBER(296);
	clinit_arc_struct_Seq(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_struct_Seq);
	init_arc_struct_Seq(ctx, sp[0].o);
	frame[7].o = sp[0].o;
	LINE_NUMBER(299);
	frame[8].i = (150);
	LINE_NUMBER(301);
	frame[9].f = (jfloat(30.0f));
	frame[10].f = ((jfloat(20.0f)) + ((frame[0].f) * (jfloat(30.0f))));
	LINE_NUMBER(302);
	sp[0].o = (jobject) createArray(ctx, &class_float, (jint(5)));
	ARRAY_ACCESS(jfloat, sp[0].o, (jint(0))) = (jfloat(1));
	ARRAY_ACCESS(jfloat, sp[0].o, (jint(1))) = (jfloat(2));
	ARRAY_ACCESS(jfloat, sp[0].o, (jint(2))) = (jfloat(3.0f));
	ARRAY_ACCESS(jfloat, sp[0].o, (jint(3))) = (jfloat(4.0f));
	ARRAY_ACCESS(jfloat, sp[0].o, (jint(4))) = (jfloat(5.0f));
	frame[11].o = sp[0].o;
	LINE_NUMBER(304);
	{ /* InvokeDynamic */
		clinit_mindustry_game_Waves_invoke_arc_func_Intc_1(ctx);
		auto proxy = (mindustry_game_Waves_invoke_arc_func_Intc_1 *) gcAlloc(ctx, &class_mindustry_game_Waves_invoke_arc_func_Intc_1);
		proxy->F_field7 = (jref) (frame[11].o);
		proxy->F_field6 = (jref) (frame[7].o);
		proxy->F_field5 = (frame[10].f);
		proxy->F_field4 = (frame[9].f);
		proxy->F_field3 = (frame[0].f);
		proxy->F_field2 = (frame[8].i);
		proxy->F_field1 = (jref) (frame[6].o);
		proxy->F_field0 = (jref) (frame[1].o);
		sp[0].o = (jobject) proxy;
	}
	frame[12].o = sp[0].o;
	LINE_NUMBER(356);
	((func_arc_func_Intc_get_int) resolveInterfaceMethod(ctx, &class_arc_func_Intc, INDEX_arc_func_Intc_get_int, (frame[12].o)))(ctx, (frame[12].o), (jint(0)));
	LINE_NUMBER(358);
	jint temp0 = jint(5);
	jint temp1 = (jint)((func_arc_math_Rand_random_int_R_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_math_Rand_random_int_R_int])(ctx, (frame[1].o), (jint(5)));
	frame[13].i = (temp0 + temp1);
	}
label_20:;
	{
	LINE_NUMBER(360);
	if ((frame[13].i) > (frame[8].i)) goto label_21;
	}
	{
	LINE_NUMBER(361);
	((func_arc_func_Intc_get_int) resolveInterfaceMethod(ctx, &class_arc_func_Intc, INDEX_arc_func_Intc_get_int, (frame[12].o)))(ctx, (frame[12].o), (frame[13].i));
	LINE_NUMBER(362);
	jint temp0 = frame[13].i;
	jint temp1 = (jint)((func_arc_math_Rand_random_int_int_R_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_math_Rand_random_int_int_R_int])(ctx, (frame[1].o), (15), (30));
	jfloat temp2 = jfloat(temp1);
	jfloat temp3 = (jfloat)SM_arc_math_Mathf_lerp_float_float_float_R_float(ctx, (jfloat(1)), (jfloat(0.5f)), (frame[0].f));
	frame[13].i = (temp0 + (jint((temp2 * temp3))));
	goto label_20;
	}
label_21:;
	{
	LINE_NUMBER(365);
	jint temp0 = (jint)((func_arc_math_Rand_random_int_int_R_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_math_Rand_random_int_int_R_int])(ctx, (frame[1].o), (50), (70));
	jfloat temp1 = jfloat(temp0);
	jfloat temp2 = (jfloat)SM_arc_math_Mathf_lerp_float_float_float_R_float(ctx, (jfloat(1)), (jfloat(0.5f)), (frame[0].f));
	frame[14].i = (jint((temp1 * temp2)));
	LINE_NUMBER(366);
	jint temp3 = (jint)((func_arc_math_Rand_random_int_int_R_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_math_Rand_random_int_int_R_int])(ctx, (frame[1].o), (25), (40));
	jfloat temp4 = jfloat(temp3);
	jfloat temp5 = (jfloat)SM_arc_math_Mathf_lerp_float_float_float_R_float(ctx, (jfloat(1)), (jfloat(0.5f)), (frame[0].f));
	frame[15].i = (jint((temp4 * temp5)));
	LINE_NUMBER(368);
	if ((doubleCompare((jdouble((frame[0].f))), (jdouble(0.6)), 1)) >= 0) goto label_26;
	}
	INST_ICONST(3);
	goto label_27;
label_26:;
	INST_ICONST(4);
label_27:;
	{
	sp -= 1;
	frame[16].i = sp[0].i;
	LINE_NUMBER(371);
	sp[0].o = frame[7].o;
	clinit_mindustry_game_Waves$31(ctx);
	sp[1].o = gcAlloc(ctx, &class_mindustry_game_Waves$31);
	sp[2].o = (jobject)SM_arc_util_Structs_random_arc_math_Rand_Array1_java_lang_Object_R_java_lang_Object(ctx, (frame[1].o), (frame[5].o));
	init_mindustry_game_Waves$31_mindustry_type_UnitType_int_int_float(ctx, sp[1].o, ((jobject)ARRAY_ACCESS(jobject, (checkCast(ctx, getArrayClass(&class_mindustry_type_UnitType, 1), sp[2].o)), (frame[16].i))), (frame[14].i), (frame[15].i), (frame[10].f));
	sp[0].o = (jobject)((func_arc_struct_Seq_add_java_lang_Object_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_add_java_lang_Object_R_arc_struct_Seq])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(383);
	sp[0].o = frame[7].o;
	clinit_mindustry_game_Waves$32(ctx);
	sp[1].o = gcAlloc(ctx, &class_mindustry_game_Waves$32);
	sp[2].o = (jobject)SM_arc_util_Structs_random_arc_math_Rand_Array1_java_lang_Object_R_java_lang_Object(ctx, (frame[1].o), (frame[5].o));
	init_mindustry_game_Waves$32_mindustry_type_UnitType_int_arc_math_Rand_int_float(ctx, sp[1].o, ((jobject)ARRAY_ACCESS(jobject, (checkCast(ctx, getArrayClass(&class_mindustry_type_UnitType, 1), sp[2].o)), (frame[16].i))), (frame[14].i), (frame[1].o), (frame[15].i), (frame[10].f));
	sp[0].o = (jobject)((func_arc_struct_Seq_add_java_lang_Object_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_add_java_lang_Object_R_arc_struct_Seq])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(394);
	jint temp0 = 120;
	jint temp1 = (jint)((func_arc_math_Rand_random_int_R_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_math_Rand_random_int_R_int])(ctx, (frame[1].o), (30));
	frame[17].i = (temp0 + temp1);
	LINE_NUMBER(397);
	sp[0].o = frame[7].o;
	clinit_mindustry_game_Waves$33(ctx);
	sp[1].o = gcAlloc(ctx, &class_mindustry_game_Waves$33);
	sp[2].o = (jobject)SM_arc_util_Structs_random_arc_math_Rand_Array1_java_lang_Object_R_java_lang_Object(ctx, (frame[1].o), (frame[5].o));
	init_mindustry_game_Waves$33_mindustry_type_UnitType_int_int_float(ctx, sp[1].o, ((jobject)ARRAY_ACCESS(jobject, (checkCast(ctx, getArrayClass(&class_mindustry_type_UnitType, 1), sp[2].o)), (frame[16].i))), (frame[17].i), (frame[15].i), (frame[10].f));
	sp[0].o = (jobject)((func_arc_struct_Seq_add_java_lang_Object_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_add_java_lang_Object_R_arc_struct_Seq])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(409);
	sp[0].o = frame[7].o;
	clinit_mindustry_game_Waves$34(ctx);
	sp[1].o = gcAlloc(ctx, &class_mindustry_game_Waves$34);
	sp[2].o = (jobject)SM_arc_util_Structs_random_arc_math_Rand_Array1_java_lang_Object_R_java_lang_Object(ctx, (frame[1].o), (frame[5].o));
	init_mindustry_game_Waves$34_mindustry_type_UnitType_int_int_float(ctx, sp[1].o, ((jobject)ARRAY_ACCESS(jobject, (checkCast(ctx, getArrayClass(&class_mindustry_type_UnitType, 1), sp[2].o)), (frame[16].i))), (frame[17].i), (frame[15].i), (frame[10].f));
	sp[0].o = (jobject)((func_arc_struct_Seq_add_java_lang_Object_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_add_java_lang_Object_R_arc_struct_Seq])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(421);
	if ((frame[2].i) == 0) goto label_34;
	}
	{
	if ((doubleCompare((jdouble((frame[0].f))), (jdouble(0.5)), -1)) < 0) goto label_34;
	}
	{
	LINE_NUMBER(422);
	jint temp0 = (jint)((func_arc_math_Rand_random_int_int_R_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_math_Rand_random_int_int_R_int])(ctx, (frame[1].o), (jint(1)), ((jint(3)) + (jint(((frame[0].f) * (jfloat(2)))))));
	frame[18].i = temp0;
	LINE_NUMBER(424);
	frame[19].i = (jint(0));
	}
label_37:;
	{
	if ((frame[19].i) >= (frame[18].i)) goto label_34;
	}
	{
	LINE_NUMBER(425);
	jint temp0 = (jint)((func_arc_math_Rand_random_int_int_R_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_math_Rand_random_int_int_R_int])(ctx, (frame[1].o), (jint(3)), (20));
	frame[20].i = temp0;
	LINE_NUMBER(426);
	sp[0].o = frame[7].o;
	clinit_mindustry_game_Waves$35(ctx);
	sp[1].o = gcAlloc(ctx, &class_mindustry_game_Waves$35);
	clinit_mindustry_content_UnitTypes(ctx);
	sp[2].o = (jobject)SF_mindustry_content_UnitTypes_mega;
	init_mindustry_game_Waves$35_mindustry_type_UnitType_int(ctx, sp[1].o, sp[2].o, (frame[20].i));
	sp[0].o = (jobject)((func_arc_struct_Seq_add_java_lang_Object_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_add_java_lang_Object_R_arc_struct_Seq])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(424);
	INST_IINC(19, 1);
	goto label_37;
	}
label_34:;
	{
	LINE_NUMBER(436);
	jint temp0 = (jint)SM_java_lang_Math_max_int_int_R_int(ctx, (jint((((frame[0].f) * (jfloat(14.0f))) - (jfloat(5.0f))))), (jint(0)));
	frame[18].i = temp0;
	LINE_NUMBER(438);
	sp[0].o = (jobject)((func_arc_struct_Seq_iterator_R_java_util_Iterator) ((void **) nullCheck(ctx, (frame[7].o))->vtable)[VTABLE_arc_struct_Seq_iterator_R_java_util_Iterator])(ctx, (frame[7].o));
	frame[19].o = sp[0].o;
	}
label_42:;
	{
	jint temp0 = (jint)((func_java_util_Iterator_hasNext_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_hasNext_R_boolean, (frame[19].o)))(ctx, (frame[19].o));
	if (temp0 == 0) goto label_43;
	}
	{
	sp[0].o = (jobject)((func_java_util_Iterator_next_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_next_R_java_lang_Object, (frame[19].o)))(ctx, (frame[19].o));
	frame[20].o = (checkCast(ctx, &class_mindustry_game_SpawnGroup, sp[0].o));
	LINE_NUMBER(439);
	sp[0].o = frame[20].o;
	((mindustry_game_SpawnGroup *) NULL_CHECK(sp[0].o))->F_begin = (((jint)((mindustry_game_SpawnGroup *) NULL_CHECK(sp[0].o))->F_begin) - (frame[18].i));
	LINE_NUMBER(440);
	sp[0].o = frame[20].o;
	((mindustry_game_SpawnGroup *) NULL_CHECK(sp[0].o))->F_end = (((jint)((mindustry_game_SpawnGroup *) NULL_CHECK(sp[0].o))->F_end) - (frame[18].i));
	LINE_NUMBER(441);
	goto label_42;
	}
label_43:;
	{
	LINE_NUMBER(443);
	popStackFrame(ctx);
	return (frame[7].o);
	}

	popStackFrame(ctx);
}

void SM_mindustry_game_Waves_lambda$generate$3_arc_math_Rand_Array2_mindustry_type_UnitType_int_float_float_float_arc_struct_Seq_Array1_float_int(jcontext ctx, jobject param0, jobject param1, jint param2, jfloat param3, jfloat param4, jfloat param5, jobject param6, jobject param7, jint param8) {
	jtype frame[32];
	auto stack = &frame[17];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/game/Waves:lambda$generate$3", 32 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_game_Waves(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	frame[2].i = param2;
	frame[3].f = param3;
	frame[4].f = param4;
	frame[5].f = param5;
	frame[6].o = param6;
	frame[7].o = param7;
	frame[8].i = param8;
	{
	LINE_NUMBER(306);
	sp[0].o = (jobject)SM_arc_util_Structs_random_arc_math_Rand_Array1_java_lang_Object_R_java_lang_Object(ctx, (frame[0].o), (frame[1].o));
	frame[9].o = (checkCast(ctx, getArrayClass(&class_mindustry_type_UnitType, 1), sp[0].o));
	LINE_NUMBER(307);
	frame[10].i = (jint(0));
	LINE_NUMBER(309);
	frame[11].i = (frame[8].i);
	}
label_3:;
	{
	if ((frame[11].i) >= (frame[2].i)) goto label_4;
	}
	{
	LINE_NUMBER(310);
	frame[12].i = (frame[11].i);
	LINE_NUMBER(311);
	jint temp0 = (jint)((func_arc_math_Rand_random_int_int_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_math_Rand_random_int_int_R_int])(ctx, (frame[0].o), (8), (16));
	jfloat temp1 = (jfloat)SM_arc_math_Mathf_lerp_float_float_float_R_float(ctx, (jfloat(5.0f)), (jfloat(0)), (frame[3].f));
	frame[13].i = ((temp0 + (jint(temp1))) + ((frame[10].i) * (jint(4))));
	LINE_NUMBER(313);
	jfloat temp2 = (jfloat)SM_java_lang_Math_max_float_float_R_float(ctx, (((jfloat((frame[11].i))) - (frame[4].f)) * (frame[5].f)), (jfloat(0)));
	frame[14].f = temp2;
	LINE_NUMBER(314);
	if ((frame[8].i) != 0) goto label_9;
	}
	INST_ICONST(1);
	goto label_10;
label_9:;
	{
	jint temp0 = (jint)((func_arc_math_Rand_random_int_int_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_math_Rand_random_int_int_R_int])(ctx, (frame[0].o), (jint(1)), (jint(2)));
	sp[0].i = temp0;
	sp += 1;
	}
label_10:;
	{
	sp -= 1;
	frame[15].i = sp[0].i;
	LINE_NUMBER(315);
	frame[16].i = (frame[10].i);
	LINE_NUMBER(318);
	sp[0].o = frame[6].o;
	clinit_mindustry_game_Waves$29(ctx);
	sp[1].o = gcAlloc(ctx, &class_mindustry_game_Waves$29);
	sp[2].o = frame[9].o;
	jint temp0 = (jint)SM_java_lang_Math_min_int_int_R_int(ctx, (frame[10].i), ((((jarray) nullCheck(ctx, (frame[9].o)))->length) - (jint(1))));
	init_mindustry_game_Waves$29_mindustry_type_UnitType_int_int_Array1_float_int_int_int_float_arc_math_Rand_float_float_int(ctx, sp[1].o, ((jobject)ARRAY_ACCESS(jobject, sp[2].o, temp0)), (frame[12].i), (frame[8].i), (frame[7].o), (frame[16].i), (frame[13].i), (frame[2].i), (frame[3].f), (frame[0].o), (frame[14].f), (frame[5].f), (frame[15].i));
	sp[0].o = (jobject)((func_arc_struct_Seq_add_java_lang_Object_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_add_java_lang_Object_R_arc_struct_Seq])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(330);
	sp[0].o = frame[6].o;
	clinit_mindustry_game_Waves$30(ctx);
	sp[1].o = gcAlloc(ctx, &class_mindustry_game_Waves$30);
	sp[2].o = frame[9].o;
	jint temp1 = (jint)SM_java_lang_Math_min_int_int_R_int(ctx, (frame[10].i), ((((jarray) nullCheck(ctx, (frame[9].o)))->length) - (jint(1))));
	init_mindustry_game_Waves$30_mindustry_type_UnitType_Array1_float_int_int_int_arc_math_Rand_float_float(ctx, sp[1].o, ((jobject)ARRAY_ACCESS(jobject, sp[2].o, temp1)), (frame[7].o), (frame[16].i), (frame[12].i), (frame[13].i), (frame[0].o), (frame[14].f), (frame[5].f));
	sp[0].o = (jobject)((func_arc_struct_Seq_add_java_lang_Object_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_add_java_lang_Object_R_arc_struct_Seq])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(341);
	frame[11].i = ((frame[11].i) + ((frame[13].i) + (jint(1))));
	LINE_NUMBER(342);
	if ((frame[10].i) < (jint(3))) goto label_16;
	}
	{
	jint temp0 = (jint)((func_arc_math_Rand_chance_double_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_math_Rand_chance_double_R_boolean])(ctx, (frame[0].o), (jdouble(0.05)));
	if (temp0 == 0) goto label_17;
	}
	{
	if ((doubleCompare((jdouble((frame[3].f))), (jdouble(0.8)), -1)) <= 0) goto label_17;
	}
label_16:;
	LINE_NUMBER(343);
	INST_IINC(10, 1);
label_17:;
	{
	LINE_NUMBER(347);
	jint temp0 = (jint)SM_java_lang_Math_min_int_int_R_int(ctx, (frame[10].i), (jint(3)));
	frame[10].i = temp0;
	LINE_NUMBER(350);
	jint temp1 = (jint)((func_arc_math_Rand_chance_double_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_math_Rand_chance_double_R_boolean])(ctx, (frame[0].o), (jdouble(0.3)));
	if (temp1 == 0) goto label_19;
	}
	{
	LINE_NUMBER(351);
	sp[0].o = (jobject)SM_arc_util_Structs_random_arc_math_Rand_Array1_java_lang_Object_R_java_lang_Object(ctx, (frame[0].o), (frame[1].o));
	frame[9].o = (checkCast(ctx, getArrayClass(&class_mindustry_type_UnitType, 1), sp[0].o));
	}
label_19:;
	LINE_NUMBER(353);
	goto label_3;
label_4:;
	LINE_NUMBER(354);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jbool SM_mindustry_game_Waves_lambda$generate$2_Array1_mindustry_type_UnitType_R_boolean(jcontext ctx, jobject param0) {
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/game/Waves:lambda$generate$2", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_game_Waves(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(288);
	if (((jint)((mindustry_type_UnitType *) NULL_CHECK(((jobject)ARRAY_ACCESS(jobject, (frame[0].o), (jint(0))))))->F_naval) != 0) goto label_1;
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

jbool SM_mindustry_game_Waves_lambda$generate$1_Array1_mindustry_type_UnitType_R_boolean(jcontext ctx, jobject param0) {
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/game/Waves:lambda$generate$1", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_game_Waves(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(286);
	if (((jint)((mindustry_type_UnitType *) NULL_CHECK(((jobject)ARRAY_ACCESS(jobject, (frame[0].o), (jint(0))))))->F_flying) != 0) goto label_1;
	}
	{
	if (((jint)((mindustry_type_UnitType *) NULL_CHECK(((jobject)ARRAY_ACCESS(jobject, (frame[0].o), (jint(0))))))->F_naval) == 0) goto label_2;
	}
label_1:;
	INST_ICONST(1);
	goto label_3;
label_2:;
	INST_ICONST(0);
label_3:;
	popStackFrame(ctx);
	INST_IRETURN();

	popStackFrame(ctx);
}

jbool SM_mindustry_game_Waves_lambda$generate$0_Array1_mindustry_type_UnitType_R_boolean(jcontext ctx, jobject param0) {
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/game/Waves:lambda$generate$0", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_game_Waves(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(282);
	popStackFrame(ctx);
	return ((jint)((mindustry_type_UnitType *) NULL_CHECK(((jobject)ARRAY_ACCESS(jobject, (frame[0].o), (jint(0))))))->F_flying);
	}

	popStackFrame(ctx);
}

void *vtable_mindustry_game_Waves[] {
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
	(void *) M_mindustry_game_Waves_get_R_arc_struct_Seq,
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
	{ "get", "()Larc/struct/Seq;" },
};

static FieldMetadata fields[] {
	{ "waveVersion", &class_int, (intptr_t) &SF_mindustry_game_Waves_waveVersion, "I", 25 },
	{ "spawns", &class_arc_struct_Seq, offsetof(mindustry_game_Waves, F_spawns), "Larc/struct/Seq;", 2 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_mindustry_game_Waves, 0, "()V", 1 },
	{ "get", (intptr_t) M_mindustry_game_Waves_get_R_arc_struct_Seq, VTABLE_mindustry_game_Waves_get_R_arc_struct_Seq, "()Larc/struct/Seq;", 1 },
	{ "generate", (intptr_t) SM_mindustry_game_Waves_generate_float_R_arc_struct_Seq, 0, "(F)Larc/struct/Seq;", 9 },
	{ "generate", (intptr_t) SM_mindustry_game_Waves_generate_float_arc_math_Rand_boolean_R_arc_struct_Seq, 0, "(FLarc/math/Rand;Z)Larc/struct/Seq;", 9 },
	{ "generate", (intptr_t) SM_mindustry_game_Waves_generate_float_arc_math_Rand_boolean_boolean_R_arc_struct_Seq, 0, "(FLarc/math/Rand;ZZ)Larc/struct/Seq;", 9 },
	{ "generate", (intptr_t) SM_mindustry_game_Waves_generate_float_arc_math_Rand_boolean_boolean_boolean_R_arc_struct_Seq, 0, "(FLarc/math/Rand;ZZZ)Larc/struct/Seq;", 9 },
	{ "lambda$generate$3", (intptr_t) SM_mindustry_game_Waves_lambda$generate$3_arc_math_Rand_Array2_mindustry_type_UnitType_int_float_float_float_arc_struct_Seq_Array1_float_int, 0, "(Larc/math/Rand;[[Lmindustry/type/UnitType;IFFFLarc/struct/Seq;[FI)V", 4106 },
	{ "lambda$generate$2", (intptr_t) SM_mindustry_game_Waves_lambda$generate$2_Array1_mindustry_type_UnitType_R_boolean, 0, "([Lmindustry/type/UnitType;)Z", 4106 },
	{ "lambda$generate$1", (intptr_t) SM_mindustry_game_Waves_lambda$generate$1_Array1_mindustry_type_UnitType_R_boolean, 0, "([Lmindustry/type/UnitType;)Z", 4106 },
	{ "lambda$generate$0", (intptr_t) SM_mindustry_game_Waves_lambda$generate$0_Array1_mindustry_type_UnitType_R_boolean, 0, "([Lmindustry/type/UnitType;)Z", 4106 },
};

Class class_mindustry_game_Waves{
		.nativeName = (intptr_t) "mindustry/game/Waves",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(mindustry_game_Waves),
		.classVtable = (intptr_t) vtable_mindustry_game_Waves,
		.staticInitializer = (intptr_t) clinit_mindustry_game_Waves,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_mindustry_game_Waves,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 33,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 2,
		.nativeFields = (intptr_t) fields,
		.methodCount = 10,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 12,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_mindustry_game_Waves = registerClass(&class_mindustry_game_Waves);

}
