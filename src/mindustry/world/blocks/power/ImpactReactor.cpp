#include "mindustry/world/blocks/power/ImpactReactor.h"
#include "arc/struct/EnumSet.h"
#include "arc/func/Prov.h"
#include "mindustry/world/Block.h"
#include "mindustry/world/meta/StatUnit.h"
#include "mindustry/world/meta/StatValue.h"
#include "mindustry/ui/Bar.h"
#include "mindustry/ctype/UnlockableContent.h"
#include "arc/graphics/Color.h"
#include "mindustry/world/blocks/power/ImpactReactor_invoke_arc_func_Floatp_1.h"
#include "mindustry/world/draw/DrawRegion.h"
#include "mindustry/world/blocks/power/ImpactReactor_invoke_mindustry_world_meta_StatValue_1.h"
#include "mindustry/world/consumers/ConsumePower.h"
#include "mindustry/entities/Effect.h"
#include "mindustry/world/meta/Stat.h"
#include "java/lang/String.h"
#include "mindustry/content/Fx.h"
#include "mindustry/world/draw/DrawPlasma.h"
#include "mindustry/world/draw/DrawBlock.h"
#include "mindustry/world/blocks/power/PowerGenerator_GeneratorBuild.h"
#include "arc/util/I18NBundle.h"
#include "arc/scene/ui/layout/Cell.h"
#include "mindustry/ctype/MappableContent.h"
#include "mindustry/world/blocks/power/ImpactReactor.h"
#include "mindustry/world/blocks/power/ImpactReactor_invoke_arc_func_Prov_3.h"
#include "mindustry/world/blocks/power/ImpactReactor_invoke_arc_func_Prov_2.h"
#include "arc/func/Floatp.h"
#include "mindustry/world/meta/BlockFlag.h"
#include "mindustry/world/blocks/power/ImpactReactor_ImpactReactorBuild.h"
#include "arc/math/Mathf.h"
#include "java/lang/Math.h"
#include "mindustry/world/draw/DrawMulti.h"
#include "arc/func/Func.h"
#include "arc/Core.h"
#include "mindustry/gen/Sounds.h"
#include "mindustry/world/meta/Stats.h"
#include "arc/scene/ui/layout/Table.h"
#include "mindustry/world/blocks/power/PowerGenerator.h"
#include "mindustry/world/blocks/power/ImpactReactor_invoke_arc_func_Func_1.h"
#include "java/lang/CharSequence.h"
#include "mindustry/gen/Building.h"
#include "arc/util/Strings.h"
#include "java/lang/Object.h"
#include "mindustry/graphics/Pal.h"
#include "mindustry/world/draw/DrawDefault.h"
#include "arc/audio/Sound.h"
#include "mindustry/ctype/Content.h"

extern "C" {


void mark_mindustry_world_blocks_power_ImpactReactor(jobject object, jint mark, jint depth) {
	if (!object) {
		return;
	}
	if (depth > GC_DEPTH_ALWAYS && (object->gcMark < GC_MARK_START || object->gcMark == mark))
		return;
	if (depth > MAX_GC_MARK_DEPTH) {
		markDeepObject(object);
		return;
	}
	mark_mindustry_world_blocks_power_PowerGenerator(object, mark, depth);
	if (object->gcMark >= GC_MARK_START)
		object->gcMark = mark;
	auto self = (mindustry_world_blocks_power_ImpactReactor *) object;
}

void clinit_mindustry_world_blocks_power_ImpactReactor(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	clinit_mindustry_world_blocks_power_PowerGenerator(ctx);
}

void init_mindustry_world_blocks_power_ImpactReactor_java_lang_String(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[11];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/power/ImpactReactor:<init>", 11 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_world_blocks_power_ImpactReactor(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(23);
	init_mindustry_world_blocks_power_PowerGenerator_java_lang_String(ctx, (frame[0].o), (frame[1].o));
	LINE_NUMBER(18);
	sp[0].o = frame[0].o;
	sp[1].o = frame[0].o;
	jint temp0 = (jint)((mindustry_world_Block *) NULL_CHECK(sp[1].o))->F_timers;
	((mindustry_world_Block *) NULL_CHECK(sp[1].o))->F_timers = (temp0 + (jint(1)));
	((mindustry_world_blocks_power_ImpactReactor *) NULL_CHECK(sp[0].o))->F_timerUse = temp0;
	LINE_NUMBER(19);
	((mindustry_world_blocks_power_ImpactReactor *) NULL_CHECK((frame[0].o)))->F_warmupSpeed = (jfloat(1,000000e-03f));
	LINE_NUMBER(20);
	((mindustry_world_blocks_power_ImpactReactor *) NULL_CHECK((frame[0].o)))->F_itemDuration = (jfloat(60.0f));
	LINE_NUMBER(24);
	((mindustry_world_Block *) NULL_CHECK((frame[0].o)))->F_hasPower = (jint(1));
	LINE_NUMBER(25);
	((mindustry_world_Block *) NULL_CHECK((frame[0].o)))->F_hasLiquids = (jint(1));
	LINE_NUMBER(26);
	((mindustry_world_Block *) NULL_CHECK((frame[0].o)))->F_liquidCapacity = (jfloat(30.0f));
	LINE_NUMBER(27);
	((mindustry_world_Block *) NULL_CHECK((frame[0].o)))->F_hasItems = (jint(1));
	LINE_NUMBER(28);
	sp[0].o = frame[0].o;
	sp[1].o = frame[0].o;
	jint temp3 = jint(1);
	((mindustry_world_Block *) NULL_CHECK(sp[1].o))->F_consumesPower = temp3;
	((mindustry_world_Block *) NULL_CHECK(sp[0].o))->F_outputsPower = temp3;
	LINE_NUMBER(29);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)createArray(ctx, &class_mindustry_world_meta_BlockFlag, (jint(2)));
	jint temp6 = jint(0);
	clinit_mindustry_world_meta_BlockFlag(ctx);
	sp[2].o = (jobject)SF_mindustry_world_meta_BlockFlag_reactor;
	ARRAY_ACCESS(jobject, sp[1].o, temp6) = sp[2].o;
	jint temp7 = jint(1);
	clinit_mindustry_world_meta_BlockFlag(ctx);
	sp[2].o = (jobject)SF_mindustry_world_meta_BlockFlag_generator;
	ARRAY_ACCESS(jobject, sp[1].o, temp7) = sp[2].o;
	sp[1].o = (jobject)SM_arc_struct_EnumSet_of_Array1_java_lang_Enum_R_arc_struct_EnumSet(ctx, sp[1].o);
	((mindustry_world_Block *) NULL_CHECK(sp[0].o))->F_flags = (jref) sp[1].o;
	LINE_NUMBER(30);
	((mindustry_world_Block *) NULL_CHECK((frame[0].o)))->F_lightRadius = (jfloat(115.0f));
	LINE_NUMBER(31);
	((mindustry_world_Block *) NULL_CHECK((frame[0].o)))->F_emitLight = (jint(1));
	LINE_NUMBER(32);
	((mindustry_world_Block *) NULL_CHECK((frame[0].o)))->F_envEnabled = (jint(-1));
	LINE_NUMBER(34);
	sp[0].o = frame[0].o;
	clinit_mindustry_world_draw_DrawMulti(ctx);
	sp[1].o = gcAlloc(ctx, &class_mindustry_world_draw_DrawMulti);
	sp[2].o = (jobject)createArray(ctx, &class_mindustry_world_draw_DrawBlock, (jint(3)));
	jint temp8 = jint(0);
	clinit_mindustry_world_draw_DrawRegion(ctx);
	sp[3].o = gcAlloc(ctx, &class_mindustry_world_draw_DrawRegion);
	init_mindustry_world_draw_DrawRegion_java_lang_String(ctx, sp[3].o, (((jobject) createStringLiteral(ctx, u8"-bottom"_j))));
	ARRAY_ACCESS(jobject, sp[2].o, temp8) = sp[3].o;
	jint temp9 = jint(1);
	clinit_mindustry_world_draw_DrawPlasma(ctx);
	sp[3].o = gcAlloc(ctx, &class_mindustry_world_draw_DrawPlasma);
	init_mindustry_world_draw_DrawPlasma(ctx, sp[3].o);
	ARRAY_ACCESS(jobject, sp[2].o, temp9) = sp[3].o;
	jint temp10 = jint(2);
	clinit_mindustry_world_draw_DrawDefault(ctx);
	sp[3].o = gcAlloc(ctx, &class_mindustry_world_draw_DrawDefault);
	init_mindustry_world_draw_DrawDefault(ctx, sp[3].o);
	ARRAY_ACCESS(jobject, sp[2].o, temp10) = sp[3].o;
	init_mindustry_world_draw_DrawMulti_Array1_mindustry_world_draw_DrawBlock(ctx, sp[1].o, sp[2].o);
	((mindustry_world_blocks_power_PowerGenerator *) NULL_CHECK(sp[0].o))->F_drawer = (jref) sp[1].o;
	LINE_NUMBER(36);
	((mindustry_world_blocks_power_PowerGenerator *) NULL_CHECK((frame[0].o)))->F_explosionShake = (jfloat(6.0f));
	LINE_NUMBER(37);
	((mindustry_world_blocks_power_PowerGenerator *) NULL_CHECK((frame[0].o)))->F_explosionShakeDuration = (jfloat(16.0f));
	LINE_NUMBER(38);
	((mindustry_world_blocks_power_PowerGenerator *) NULL_CHECK((frame[0].o)))->F_explosionDamage = (7600);
	LINE_NUMBER(39);
	((mindustry_world_blocks_power_PowerGenerator *) NULL_CHECK((frame[0].o)))->F_explosionMinWarmup = (jfloat(0.3f));
	LINE_NUMBER(40);
	sp[0].o = frame[0].o;
	clinit_mindustry_content_Fx(ctx);
	sp[1].o = (jobject)SF_mindustry_content_Fx_impactReactorExplosion;
	((mindustry_world_blocks_power_PowerGenerator *) NULL_CHECK(sp[0].o))->F_explodeEffect = (jref) sp[1].o;
	LINE_NUMBER(41);
	sp[0].o = frame[0].o;
	clinit_mindustry_gen_Sounds(ctx);
	sp[1].o = (jobject)SF_mindustry_gen_Sounds_explosionReactor2;
	((mindustry_world_blocks_power_PowerGenerator *) NULL_CHECK(sp[0].o))->F_explodeSound = (jref) sp[1].o;
	LINE_NUMBER(42);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_world_blocks_power_ImpactReactor_setBars(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/power/ImpactReactor:setBars", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(46);
	sp[0].o = (jobject)((mindustry_ctype_UnlockableContent *) NULL_CHECK((frame[0].o)))->F_stats;
	((mindustry_world_meta_Stats *) NULL_CHECK(sp[0].o))->F_timePeriod = ((jfloat)((mindustry_world_blocks_power_ImpactReactor *) NULL_CHECK((frame[0].o)))->F_itemDuration);
	LINE_NUMBER(47);
	M_mindustry_world_blocks_power_PowerGenerator_setBars(ctx, (frame[0].o));
	LINE_NUMBER(49);
	sp[0].o = frame[0].o;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"power"_j));
	{ /* InvokeDynamic */
		clinit_mindustry_world_blocks_power_ImpactReactor_invoke_arc_func_Func_1(ctx);
		auto proxy = (mindustry_world_blocks_power_ImpactReactor_invoke_arc_func_Func_1 *) gcAlloc(ctx, &class_mindustry_world_blocks_power_ImpactReactor_invoke_arc_func_Func_1);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[2].o = (jobject) proxy;
	}
	((func_mindustry_world_blocks_power_ImpactReactor_addBar_java_lang_String_arc_func_Func) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_blocks_power_ImpactReactor_addBar_java_lang_String_arc_func_Func])(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(54);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_world_blocks_power_ImpactReactor_setStats(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[12];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/power/ImpactReactor:setStats", 12 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(58);
	sp[0].o = (jobject)((mindustry_ctype_UnlockableContent *) NULL_CHECK((frame[0].o)))->F_stats;
	((mindustry_world_meta_Stats *) NULL_CHECK(sp[0].o))->F_timePeriod = ((jfloat)((mindustry_world_blocks_power_ImpactReactor *) NULL_CHECK((frame[0].o)))->F_itemDuration);
	LINE_NUMBER(59);
	M_mindustry_world_blocks_power_PowerGenerator_setStats(ctx, (frame[0].o));
	LINE_NUMBER(61);
	if (((jint)((mindustry_world_Block *) NULL_CHECK((frame[0].o)))->F_hasItems) == 0) goto label_3;
	}
	{
	LINE_NUMBER(62);
	sp[0].o = (jobject)((mindustry_ctype_UnlockableContent *) NULL_CHECK((frame[0].o)))->F_stats;
	clinit_mindustry_world_meta_Stat(ctx);
	sp[1].o = (jobject)SF_mindustry_world_meta_Stat_productionTime;
	jfloat temp0 = ((jfloat)((mindustry_world_blocks_power_ImpactReactor *) NULL_CHECK((frame[0].o)))->F_itemDuration) / (jfloat(60.0f));
	clinit_mindustry_world_meta_StatUnit(ctx);
	sp[2].o = (jobject)SF_mindustry_world_meta_StatUnit_seconds;
	((func_mindustry_world_meta_Stats_add_mindustry_world_meta_Stat_float_mindustry_world_meta_StatUnit) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_meta_Stats_add_mindustry_world_meta_Stat_float_mindustry_world_meta_StatUnit])(ctx, sp[0].o, sp[1].o, temp0, sp[2].o);
	}
label_3:;
	{
	LINE_NUMBER(65);
	sp[0].o = (jobject)((mindustry_world_Block *) NULL_CHECK((frame[0].o)))->F_consPower;
	if (sp[0].o == nullptr) goto label_5;
	}
	{
	LINE_NUMBER(67);
	jfloat temp0 = (jfloat)((func_mindustry_world_blocks_power_ImpactReactor_statWarmup_float_R_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_world_blocks_power_ImpactReactor_statWarmup_float_R_float])(ctx, (frame[0].o), (jfloat(1,000000e-03f)));
	frame[1].f = temp0;
	LINE_NUMBER(68);
	jfloat temp1 = (jfloat)((func_mindustry_world_blocks_power_ImpactReactor_statWarmup_float_R_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_world_blocks_power_ImpactReactor_statWarmup_float_R_float])(ctx, (frame[0].o), (jfloat(0.1f)));
	frame[2].f = temp1;
	jfloat temp2 = (jfloat)((func_mindustry_world_blocks_power_ImpactReactor_statWarmup_float_R_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_world_blocks_power_ImpactReactor_statWarmup_float_R_float])(ctx, (frame[0].o), (jfloat(1,000000e-02f)));
	frame[3].f = temp2;
	LINE_NUMBER(69);
	sp[0].o = frame[0].o;
	jfloat temp3 = jfloat(1);
	sp[1].o = (jobject)((mindustry_world_Block *) NULL_CHECK((frame[0].o)))->F_consPower;
	jfloat temp4 = (jfloat)SM_arc_math_Mathf_pow_float_float_R_float(ctx, (((jfloat)((mindustry_world_consumers_ConsumePower *) NULL_CHECK(sp[1].o))->F_usage) / ((jfloat)((mindustry_world_blocks_power_PowerGenerator *) NULL_CHECK((frame[0].o)))->F_powerProduction)), (jfloat(0.2f)));
	jfloat temp5 = (jfloat)((func_mindustry_world_blocks_power_ImpactReactor_statWarmup_float_R_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_blocks_power_ImpactReactor_statWarmup_float_R_float])(ctx, sp[0].o, (temp3 - temp4));
	frame[4].f = temp5;
	LINE_NUMBER(71);
	sp[0].o = (jobject)((mindustry_ctype_UnlockableContent *) NULL_CHECK((frame[0].o)))->F_stats;
	clinit_mindustry_world_meta_Stat(ctx);
	sp[1].o = (jobject)SF_mindustry_world_meta_Stat_warmupTime;
	{ /* InvokeDynamic */
		clinit_mindustry_world_blocks_power_ImpactReactor_invoke_mindustry_world_meta_StatValue_1(ctx);
		auto proxy = (mindustry_world_blocks_power_ImpactReactor_invoke_mindustry_world_meta_StatValue_1 *) gcAlloc(ctx, &class_mindustry_world_blocks_power_ImpactReactor_invoke_mindustry_world_meta_StatValue_1);
		proxy->F_field4 = (frame[3].f);
		proxy->F_field3 = (frame[2].f);
		proxy->F_field2 = (frame[4].f);
		proxy->F_field1 = (frame[1].f);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[2].o = (jobject) proxy;
	}
	((func_mindustry_world_meta_Stats_add_mindustry_world_meta_Stat_mindustry_world_meta_StatValue) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_meta_Stats_add_mindustry_world_meta_Stat_mindustry_world_meta_StatValue])(ctx, sp[0].o, sp[1].o, sp[2].o);
	}
label_5:;
	LINE_NUMBER(76);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jfloat M_mindustry_world_blocks_power_ImpactReactor_statWarmup_float_R_float(jcontext ctx, jobject self, jfloat param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/power/ImpactReactor:statWarmup", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	{
	LINE_NUMBER(80);
	jdouble temp0 = (jdouble)SM_java_lang_Math_log_double_R_double(ctx, (jdouble((frame[1].f))));
	popStackFrame(ctx);
	return (((-(jfloat(temp0))) / ((jfloat)((mindustry_world_blocks_power_ImpactReactor *) NULL_CHECK((frame[0].o)))->F_warmupSpeed)) / (jfloat(60.0f)));
	}

	popStackFrame(ctx);
}

void M_mindustry_world_blocks_power_ImpactReactor_lambda$setStats$0_float_float_float_float_arc_scene_ui_layout_Table(jcontext ctx, jobject self, jfloat param0, jfloat param1, jfloat param2, jfloat param3, jobject param4) {
	NULL_CHECK(self);
	jtype frame[14];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/power/ImpactReactor:lambda$setStats$0", 14 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	frame[2].f = param1;
	frame[3].f = param2;
	frame[4].f = param3;
	frame[5].o = param4;
	{
	LINE_NUMBER(71);
	sp[0].o = frame[5].o;
	jfloat temp0 = frame[1].f;
	jint temp1 = jint(2);
	LINE_NUMBER(72);
	sp[1].o = (jobject)SM_arc_util_Strings_autoFixed_float_int_R_java_lang_String(ctx, temp0, temp1);
	clinit_mindustry_world_meta_StatUnit(ctx);
	sp[2].o = (jobject)SF_mindustry_world_meta_StatUnit_seconds;
	sp[2].o = (jobject)((func_mindustry_world_meta_StatUnit_localized_R_java_lang_String) ((void **) nullCheck(ctx, sp[2].o)->vtable)[VTABLE_mindustry_world_meta_StatUnit_localized_R_java_lang_String])(ctx, sp[2].o);
	LINE_NUMBER(73);
	sp[3].o = (jobject)((mindustry_world_Block *) NULL_CHECK((frame[0].o)))->F_consPower;
	sp += 3;
	if (sp[0].o == nullptr) goto label_3;
	}
	{
	sp[0].o = (jobject)SM_arc_util_Strings_autoFixed_float_int_R_java_lang_String(ctx, (frame[2].f), (jint(2)));
	clinit_mindustry_world_meta_StatUnit(ctx);
	sp[1].o = (jobject)SF_mindustry_world_meta_StatUnit_seconds;
	sp[1].o = (jobject)((func_mindustry_world_meta_StatUnit_localized_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_mindustry_world_meta_StatUnit_localized_R_java_lang_String])(ctx, sp[1].o);
	clinit_mindustry_world_meta_StatUnit(ctx);
	sp[2].o = (jobject)SF_mindustry_world_meta_StatUnit_powerEquilibrium;
	sp[2].o = (jobject)((func_mindustry_world_meta_StatUnit_localized_R_java_lang_String) ((void **) nullCheck(ctx, sp[2].o)->vtable)[VTABLE_mindustry_world_meta_StatUnit_localized_R_java_lang_String])(ctx, sp[2].o);
	sp[0].o = (jobject)concatStringsRecipe(ctx, u8" ~ \u0001 \u0001 \u0001"_j.string, 3, sp[0].o, sp[1].o, sp[2].o);
	sp += 1;
	goto label_4;
	}
label_3:;
	(sp++)->o = ((jobject) createStringLiteral(ctx, u8""_j));
label_4:;
	{
	sp -= 4;
	sp[1].o = (jobject)concatStringsRecipe(ctx, u8"\u0001 \u0001\u0001"_j.string, 3, sp[1].o, sp[2].o, sp[3].o);
	LINE_NUMBER(71);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_add_java_lang_CharSequence_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_add_java_lang_CharSequence_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o);
	clinit_arc_Core(ctx);
	sp[1].o = (jobject)SF_arc_Core_bundle;
	sp[2].o = ((jobject) createStringLiteral(ctx, u8"bar.lerpwarmuptime"_j));
	sp[3].o = (jobject)createArray(ctx, &class_java_lang_Object, (jint(2)));
	jint temp0 = jint(0);
	jfloat temp1 = frame[3].f;
	jint temp2 = jint(2);
	LINE_NUMBER(74);
	sp[4].o = (jobject)SM_arc_util_Strings_autoFixed_float_int_R_java_lang_String(ctx, temp1, temp2);
	ARRAY_ACCESS(jobject, sp[3].o, temp0) = sp[4].o;
	jint temp3 = jint(1);
	sp[4].o = (jobject)SM_arc_util_Strings_autoFixed_float_int_R_java_lang_String(ctx, (frame[4].f), (jint(2)));
	ARRAY_ACCESS(jobject, sp[3].o, temp3) = sp[4].o;
	sp[1].o = (jobject)((func_arc_util_I18NBundle_format_java_lang_String_Array1_java_lang_Object_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_util_I18NBundle_format_java_lang_String_Array1_java_lang_Object_R_java_lang_String])(ctx, sp[1].o, sp[2].o, sp[3].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_tooltip_java_lang_String_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_tooltip_java_lang_String_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(71);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_mindustry_world_blocks_power_ImpactReactor_lambda$setBars$0_mindustry_world_blocks_power_PowerGenerator$GeneratorBuild_R_mindustry_ui_Bar(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/power/ImpactReactor:lambda$setBars$0", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(49);
	clinit_mindustry_ui_Bar(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_ui_Bar);
	{ /* InvokeDynamic */
		clinit_mindustry_world_blocks_power_ImpactReactor_invoke_arc_func_Prov_2(ctx);
		auto proxy = (mindustry_world_blocks_power_ImpactReactor_invoke_arc_func_Prov_2 *) gcAlloc(ctx, &class_mindustry_world_blocks_power_ImpactReactor_invoke_arc_func_Prov_2);
		proxy->F_field1 = (jref) (frame[1].o);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[1].o = (jobject) proxy;
	}
	{ /* InvokeDynamic */
		clinit_mindustry_world_blocks_power_ImpactReactor_invoke_arc_func_Prov_3(ctx);
		auto proxy = (mindustry_world_blocks_power_ImpactReactor_invoke_arc_func_Prov_3 *) gcAlloc(ctx, &class_mindustry_world_blocks_power_ImpactReactor_invoke_arc_func_Prov_3);
		sp[2].o = (jobject) proxy;
	}
	{ /* InvokeDynamic */
		clinit_mindustry_world_blocks_power_ImpactReactor_invoke_arc_func_Floatp_1(ctx);
		auto proxy = (mindustry_world_blocks_power_ImpactReactor_invoke_arc_func_Floatp_1 *) gcAlloc(ctx, &class_mindustry_world_blocks_power_ImpactReactor_invoke_arc_func_Floatp_1);
		proxy->F_field0 = (jref) (frame[1].o);
		sp[3].o = (jobject) proxy;
	}
	init_mindustry_ui_Bar_arc_func_Prov_arc_func_Prov_arc_func_Floatp(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o);
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jfloat SM_mindustry_world_blocks_power_ImpactReactor_lambda$setBars$3_mindustry_world_blocks_power_PowerGenerator$GeneratorBuild_R_float(jcontext ctx, jobject param0) {
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/power/ImpactReactor:lambda$setBars$3", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_world_blocks_power_ImpactReactor(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(53);
	popStackFrame(ctx);
	return ((jfloat)((mindustry_world_blocks_power_PowerGenerator$GeneratorBuild *) NULL_CHECK((frame[0].o)))->F_productionEfficiency);
	}

	popStackFrame(ctx);
}

jobject SM_mindustry_world_blocks_power_ImpactReactor_lambda$setBars$2_R_arc_graphics_Color(jcontext ctx) {
	jtype frame[1];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/power/ImpactReactor:lambda$setBars$2", 1 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_world_blocks_power_ImpactReactor(ctx);
	{
	LINE_NUMBER(52);
	clinit_mindustry_graphics_Pal(ctx);
	sp[0].o = (jobject)SF_mindustry_graphics_Pal_powerBar;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_mindustry_world_blocks_power_ImpactReactor_lambda$setBars$1_mindustry_world_blocks_power_PowerGenerator$GeneratorBuild_R_java_lang_CharSequence(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/power/ImpactReactor:lambda$setBars$1", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(50);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_bundle;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"bar.poweroutput"_j));
	sp[2].o = (jobject)createArray(ctx, &class_java_lang_Object, (jint(1)));
	jint temp0 = jint(0);
	sp[3].o = frame[1].o;
	LINE_NUMBER(51);
	jfloat temp1 = (jfloat)((func_mindustry_world_blocks_power_PowerGenerator$GeneratorBuild_getPowerProduction_R_float) ((void **) nullCheck(ctx, sp[3].o)->vtable)[VTABLE_mindustry_world_blocks_power_PowerGenerator$GeneratorBuild_getPowerProduction_R_float])(ctx, sp[3].o);
	sp[3].o = (jobject)((mindustry_world_Block *) NULL_CHECK((frame[0].o)))->F_consPower;
	jobject temp2 = sp[3].o;
	sp[3].o = sp[2].o;
	sp[4].i = temp0;
	sp[5].f = temp1;
	sp += 6;
	if (temp2 != nullptr) goto label_2;
	}
	INST_FCONST(0);
	goto label_3;
label_2:;
	{
	sp[0].o = (jobject)((mindustry_world_Block *) NULL_CHECK((frame[0].o)))->F_consPower;
	jfloat temp0 = (jfloat)((mindustry_world_consumers_ConsumePower *) NULL_CHECK(sp[0].o))->F_usage;
	sp[0].f = temp0;
	sp += 1;
	}
label_3:;
	{
	sp -= 7;
	jfloat temp0 = (jfloat)SM_java_lang_Math_max_float_float_R_float(ctx, (sp[5].f - sp[6].f), (jfloat(0)));
	jfloat temp1 = temp0 * (jfloat(60.0f));
	jfloat temp2 = (jfloat)((func_mindustry_world_blocks_power_PowerGenerator$GeneratorBuild_timeScale_R_float) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_world_blocks_power_PowerGenerator$GeneratorBuild_timeScale_R_float])(ctx, (frame[1].o));
	sp[3].o = (jobject)SM_arc_util_Strings_fixed_float_int_R_java_lang_String(ctx, (temp1 * temp2), (jint(1)));
	ARRAY_ACCESS(jobject, sp[2].o, sp[4].i) = sp[3].o;
	LINE_NUMBER(50);
	sp[0].o = (jobject)((func_arc_util_I18NBundle_format_java_lang_String_Array1_java_lang_Object_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_util_I18NBundle_format_java_lang_String_Array1_java_lang_Object_R_java_lang_String])(ctx, sp[0].o, sp[1].o, sp[2].o);
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void *vtable_mindustry_world_blocks_power_ImpactReactor[] {
	(void *) M_java_lang_Object_hashCode_R_int,
	(void *) M_java_lang_Object_equals_java_lang_Object_R_boolean,
	(void *) M_java_lang_Object_clone_R_java_lang_Object,
	(void *) M_java_lang_Object_getClass_R_java_lang_Class,
	(void *) M_mindustry_ctype_MappableContent_toString_R_java_lang_String,
	(void *) M_java_lang_Object_finalize,
	(void *) M_java_lang_Object_notify,
	(void *) M_java_lang_Object_notifyAll,
	(void *) M_java_lang_Object_wait,
	(void *) M_java_lang_Object_wait_long,
	(void *) M_java_lang_Object_wait_long_int,
	(void *) M_mindustry_ctype_Content_compareTo_java_lang_Object_R_int,
	(void *) M_mindustry_world_Block_getContentType_R_mindustry_ctype_ContentType,
	(void *) M_mindustry_ctype_Content_removeContent,
	(void *) M_mindustry_world_Block_init,
	(void *) M_mindustry_world_Block_postInit,
	(void *) M_mindustry_world_Block_afterPatch,
	(void *) M_mindustry_world_blocks_power_PowerGenerator_load,
	(void *) M_mindustry_ctype_UnlockableContent_loadIcon,
	(void *) M_mindustry_ctype_Content_hasErrored_R_boolean,
	(void *) M_mindustry_ctype_Content_isVanilla_R_boolean,
	(void *) M_mindustry_ctype_Content_isModded_R_boolean,
	(void *) M_mindustry_ctype_Content_isPatchContent_R_boolean,
	(void *) M_mindustry_ctype_Content_compareTo_mindustry_ctype_Content_R_int,
	(void *) M_mindustry_world_Block_isBanned_R_boolean,
	(void *) M_mindustry_ctype_UnlockableContent_isOnPlanet_mindustry_type_Planet_R_boolean,
	(void *) M_mindustry_ctype_UnlockableContent_getLogicId_R_int,
	(void *) M_mindustry_ctype_UnlockableContent_displayDescription_R_java_lang_String,
	(void *) M_mindustry_ctype_UnlockableContent_checkStats,
	(void *) M_mindustry_world_blocks_power_ImpactReactor_setStats,
	(void *) M_mindustry_ctype_UnlockableContent_computeStats_R_mindustry_world_meta_Stats,
	(void *) M_mindustry_ctype_UnlockableContent_displayExtra_arc_scene_ui_layout_Table,
	(void *) M_mindustry_world_Block_createIcons_mindustry_graphics_MultiPacker,
	(void *) M_mindustry_ctype_UnlockableContent_makeOutline_mindustry_graphics_MultiPacker$PageType_mindustry_graphics_MultiPacker_arc_graphics_g2d_TextureRegion_boolean_arc_graphics_Color_int,
	(void *) M_mindustry_ctype_UnlockableContent_makeOutline_mindustry_graphics_MultiPacker$PageType_mindustry_graphics_MultiPacker_arc_graphics_g2d_TextureRegion_boolean_arc_graphics_Color_int_int,
	(void *) M_mindustry_ctype_UnlockableContent_makeOutline_mindustry_graphics_MultiPacker_arc_graphics_g2d_TextureRegion_java_lang_String_arc_graphics_Color_int,
	(void *) M_mindustry_ctype_UnlockableContent_makeOutline_mindustry_graphics_MultiPacker_arc_graphics_g2d_TextureRegion_java_lang_String_arc_graphics_Color,
	(void *) M_mindustry_world_Block_researchRequirements_R_Array1_mindustry_type_ItemStack,
	(void *) M_mindustry_ctype_UnlockableContent_emoji_R_java_lang_String,
	(void *) M_mindustry_ctype_UnlockableContent_emojiChar_R_int,
	(void *) M_mindustry_ctype_UnlockableContent_hasEmoji_R_boolean,
	(void *) M_mindustry_world_Block_getDependencies_arc_func_Cons,
	(void *) M_mindustry_ctype_UnlockableContent_onUnlock,
	(void *) M_mindustry_world_Block_isHidden_R_boolean,
	(void *) M_mindustry_ctype_UnlockableContent_showUnlock_R_boolean,
	(void *) M_mindustry_world_Block_logicVisible_R_boolean,
	(void *) M_mindustry_ctype_UnlockableContent_unlock,
	(void *) M_mindustry_ctype_UnlockableContent_quietUnlock,
	(void *) M_mindustry_ctype_UnlockableContent_unlockedNowHost_R_boolean,
	(void *) M_mindustry_ctype_UnlockableContent_unlockedHost_R_boolean,
	(void *) M_mindustry_ctype_UnlockableContent_unlockedNow_R_boolean,
	(void *) M_mindustry_ctype_UnlockableContent_unlocked_R_boolean,
	(void *) M_mindustry_ctype_UnlockableContent_clearUnlock,
	(void *) M_mindustry_ctype_UnlockableContent_locked_R_boolean,
	(void *) M_mindustry_world_Block_sense_mindustry_logic_LAccess_R_double,
	(void *) M_mindustry_world_Block_sense_mindustry_ctype_Content_R_double,
	(void *) M_mindustry_world_Block_senseObject_mindustry_logic_LAccess_R_java_lang_Object,
	(void *) M_mindustry_world_Block_drawBase_mindustry_world_Tile,
	(void *) M_mindustry_world_Block_drawBaseCached_mindustry_world_Tile,
	(void *) M_mindustry_world_Block_drawShadow_mindustry_world_Tile,
	(void *) M_mindustry_world_Block_percentSolid_int_int_R_float,
	(void *) M_mindustry_world_Block_drawEnvironmentLight_mindustry_world_Tile,
	(void *) M_mindustry_world_Block_drawPlace_int_int_int_boolean,
	(void *) M_mindustry_world_Block_drawSideRegion_arc_graphics_g2d_TextureRegion_float_float_int,
	(void *) M_mindustry_world_Block_drawPotentialLinks_int_int,
	(void *) M_mindustry_world_Block_drawPlaceText_java_lang_String_int_int_boolean_R_float,
	(void *) M_mindustry_world_Block_drawPlaceText_java_lang_String_int_int_arc_graphics_Color_boolean_R_float,
	(void *) M_mindustry_world_Block_drawOverlay_float_float_int,
	(void *) M_mindustry_world_Block_displayShadow_mindustry_world_Tile_R_boolean,
	(void *) M_mindustry_world_Block_sumAttribute_mindustry_world_meta_Attribute_int_int_R_float,
	(void *) M_mindustry_world_Block_getDisplayIcon_mindustry_world_Tile_R_arc_graphics_g2d_TextureRegion,
	(void *) M_mindustry_world_Block_getDisplayName_mindustry_world_Tile_R_java_lang_String,
	(void *) M_mindustry_world_Block_minimapColor_mindustry_world_Tile_R_int,
	(void *) M_mindustry_world_Block_getColor_mindustry_world_Tile_R_arc_graphics_Color,
	(void *) M_mindustry_world_blocks_power_PowerGenerator_outputsItems_R_boolean,
	(void *) M_mindustry_world_Block_canPlaceOn_mindustry_world_Tile_mindustry_game_Team_int_R_boolean,
	(void *) M_mindustry_world_Block_canBreak_mindustry_world_Tile_R_boolean,
	(void *) M_mindustry_world_Block_rotatedOutput_int_int_R_boolean,
	(void *) M_mindustry_world_Block_rotatedOutput_int_int_mindustry_world_Tile_R_boolean,
	(void *) M_mindustry_world_Block_synthetic_R_boolean,
	(void *) M_mindustry_world_Block_checkForceDark_mindustry_world_Tile_R_boolean,
	(void *) M_mindustry_world_Block_isDarkened_mindustry_world_Tile_R_boolean,
	(void *) M_mindustry_world_Block_addBar_java_lang_String_arc_func_Func,
	(void *) M_mindustry_world_Block_removeBar_java_lang_String,
	(void *) M_mindustry_world_Block_listBars_R_java_lang_Iterable,
	(void *) M_mindustry_world_Block_addLiquidBar_mindustry_type_Liquid,
	(void *) M_mindustry_world_Block_addLiquidBar_arc_func_Func,
	(void *) M_mindustry_world_blocks_power_ImpactReactor_setBars,
	(void *) M_mindustry_world_Block_consumesItem_mindustry_type_Item_R_boolean,
	(void *) M_mindustry_world_Block_consumesLiquid_mindustry_type_Liquid_R_boolean,
	(void *) M_mindustry_world_Block_canReplace_mindustry_world_Block_R_boolean,
	(void *) M_mindustry_world_Block_getReplacement_mindustry_entities_units_BuildPlan_arc_struct_Seq_R_mindustry_world_Block,
	(void *) M_mindustry_world_Block_changePlacementPath_arc_struct_Seq_int_boolean,
	(void *) M_mindustry_world_Block_changePlacementPath_arc_struct_Seq_int,
	(void *) M_mindustry_world_Block_handlePlacementLine_arc_struct_Seq,
	(void *) M_mindustry_world_Block_configSenseable_R_boolean,
	(void *) M_mindustry_world_Block_nextConfig_R_java_lang_Object,
	(void *) M_mindustry_world_Block_onNewPlan_mindustry_entities_units_BuildPlan,
	(void *) M_mindustry_world_Block_drawPlan_mindustry_entities_units_BuildPlan_arc_util_Eachable_boolean,
	(void *) M_mindustry_world_Block_drawPlan_mindustry_entities_units_BuildPlan_arc_util_Eachable_boolean_float,
	(void *) M_mindustry_world_Block_drawOtherPlayerPlan_mindustry_entities_units_BuildPlan_arc_util_Eachable_float,
	(void *) M_mindustry_world_blocks_power_PowerGenerator_drawPlanRegion_mindustry_entities_units_BuildPlan_arc_util_Eachable,
	(void *) M_mindustry_world_Block_drawDefaultPlanRegion_mindustry_entities_units_BuildPlan_arc_util_Eachable,
	(void *) M_mindustry_world_Block_getPlanRegion_mindustry_entities_units_BuildPlan_arc_util_Eachable_R_arc_graphics_g2d_TextureRegion,
	(void *) M_mindustry_world_Block_drawPlanConfig_mindustry_entities_units_BuildPlan_arc_util_Eachable,
	(void *) M_mindustry_world_Block_drawPlanConfigCenter_mindustry_entities_units_BuildPlan_java_lang_Object_java_lang_String_boolean,
	(void *) M_mindustry_world_Block_drawPlanConfigCenter_mindustry_entities_units_BuildPlan_java_lang_Object_java_lang_String,
	(void *) M_mindustry_world_Block_drawPlanConfigTop_mindustry_entities_units_BuildPlan_arc_util_Eachable,
	(void *) M_mindustry_world_Block_planConfigClipSize_R_float,
	(void *) M_mindustry_world_Block_pointConfig_java_lang_Object_arc_func_Cons_R_java_lang_Object,
	(void *) M_mindustry_world_Block_configClear_arc_func_Cons,
	(void *) M_mindustry_world_Block_config_java_lang_Class_arc_func_Cons2,
	(void *) M_mindustry_world_Block_isAccessible_R_boolean,
	(void *) M_mindustry_world_Block_nearbySide_int_int_int_int_arc_math_geom_Point2,
	(void *) M_mindustry_world_Block_getEdges_R_Array1_arc_math_geom_Point2,
	(void *) M_mindustry_world_Block_getInsideEdges_R_Array1_arc_math_geom_Point2,
	(void *) M_mindustry_world_Block_iterateTaken_int_int_arc_func_Intc2,
	(void *) M_mindustry_world_Block_makeIconRegions_R_Array1_arc_graphics_g2d_TextureRegion,
	(void *) M_mindustry_world_blocks_power_PowerGenerator_icons_R_Array1_arc_graphics_g2d_TextureRegion,
	(void *) M_mindustry_world_Block_getRegionsToOutline_arc_struct_Seq,
	(void *) M_mindustry_world_Block_getGeneratedIcons_R_Array1_arc_graphics_g2d_TextureRegion,
	(void *) M_mindustry_world_Block_resetGeneratedIcons,
	(void *) M_mindustry_world_Block_variantRegions_R_Array1_arc_graphics_g2d_TextureRegion,
	(void *) M_mindustry_world_Block_hasBuilding_R_boolean,
	(void *) M_mindustry_world_Block_newBuilding_R_mindustry_gen_Building,
	(void *) M_mindustry_world_Block_updateClipRadius_float,
	(void *) M_mindustry_world_Block_bounds_int_int_arc_math_geom_Rect_R_arc_math_geom_Rect,
	(void *) M_mindustry_world_Block_isMultiblock_R_boolean,
	(void *) M_mindustry_world_Block_isVisible_R_boolean,
	(void *) M_mindustry_world_Block_isPlaceable_R_boolean,
	(void *) M_mindustry_world_Block_isOverPlacementLimit_mindustry_game_Team_R_boolean,
	(void *) M_mindustry_world_Block_supportsEnv_int_R_boolean,
	(void *) M_mindustry_world_Block_buildEditorConfig_arc_scene_ui_layout_Table,
	(void *) M_mindustry_world_Block_onPicked_mindustry_world_Tile,
	(void *) M_mindustry_world_Block_getConfig_mindustry_world_Tile_R_java_lang_Object,
	(void *) M_mindustry_world_Block_blockChanged_mindustry_world_Tile,
	(void *) M_mindustry_world_Block_placeBegan_mindustry_world_Tile_mindustry_world_Block,
	(void *) M_mindustry_world_Block_placeBegan_mindustry_world_Tile_mindustry_world_Block_mindustry_gen_Unit,
	(void *) M_mindustry_world_Block_placeEnded_mindustry_world_Tile_mindustry_gen_Unit_int_java_lang_Object,
	(void *) M_mindustry_world_Block_beforePlaceBegan_mindustry_world_Tile_mindustry_world_Block,
	(void *) M_mindustry_world_Block_editorPicked_mindustry_world_Tile,
	(void *) M_mindustry_world_Block_isFloor_R_boolean,
	(void *) M_mindustry_world_Block_isOverlay_R_boolean,
	(void *) M_mindustry_world_Block_asFloor_R_mindustry_world_blocks_environment_Floor,
	(void *) M_mindustry_world_Block_isAir_R_boolean,
	(void *) M_mindustry_world_Block_canBeBuilt_R_boolean,
	(void *) M_mindustry_world_Block_environmentBuildable_R_boolean,
	(void *) M_mindustry_world_Block_isStatic_R_boolean,
	(void *) M_mindustry_world_Block_findConsumer_arc_func_Boolf_R_mindustry_world_consumers_Consume,
	(void *) M_mindustry_world_Block_hasConsumer_mindustry_world_consumers_Consume_R_boolean,
	(void *) M_mindustry_world_Block_removeConsumer_mindustry_world_consumers_Consume,
	(void *) M_mindustry_world_Block_removeConsumers_arc_func_Boolf,
	(void *) M_mindustry_world_Block_consumeLiquid_mindustry_type_Liquid_float_R_mindustry_world_consumers_ConsumeLiquid,
	(void *) M_mindustry_world_Block_consumeLiquids_Array1_mindustry_type_LiquidStack_R_mindustry_world_consumers_ConsumeLiquids,
	(void *) M_mindustry_world_Block_consumePower_float_R_mindustry_world_consumers_ConsumePower,
	(void *) M_mindustry_world_Block_consumePowerCond_float_arc_func_Boolf_R_mindustry_world_consumers_ConsumePower,
	(void *) M_mindustry_world_Block_consumePowerDynamic_arc_func_Floatf_R_mindustry_world_consumers_ConsumePower,
	(void *) M_mindustry_world_Block_consumePowerDynamic_float_arc_func_Floatf_R_mindustry_world_consumers_ConsumePower,
	(void *) M_mindustry_world_Block_consumePowerBuffered_float_R_mindustry_world_consumers_ConsumePower,
	(void *) M_mindustry_world_Block_consumeItem_mindustry_type_Item_R_mindustry_world_consumers_ConsumeItems,
	(void *) M_mindustry_world_Block_consumeItem_mindustry_type_Item_int_R_mindustry_world_consumers_ConsumeItems,
	(void *) M_mindustry_world_Block_consumeItems_Array1_mindustry_type_ItemStack_R_mindustry_world_consumers_ConsumeItems,
	(void *) M_mindustry_world_Block_consumeCoolant_float_R_mindustry_world_consumers_ConsumeCoolant,
	(void *) M_mindustry_world_Block_consumeCoolant_float_boolean_boolean_R_mindustry_world_consumers_ConsumeCoolant,
	(void *) M_mindustry_world_Block_consume_mindustry_world_consumers_Consume_R_mindustry_world_consumers_Consume,
	(void *) M_mindustry_world_Block_setupRequirements_mindustry_type_Category_Array1_mindustry_type_ItemStack,
	(void *) M_mindustry_world_Block_setupRequirements_mindustry_type_Category_mindustry_world_meta_BuildVisibility_Array1_mindustry_type_ItemStack,
	(void *) M_mindustry_world_Block_requirements_mindustry_type_Category_Array1_mindustry_type_ItemStack_boolean,
	(void *) M_mindustry_world_Block_requirements_mindustry_type_Category_Array1_mindustry_type_ItemStack,
	(void *) M_mindustry_world_Block_requirements_mindustry_type_Category_mindustry_world_meta_BuildVisibility_Array1_mindustry_type_ItemStack,
	(void *) M_mindustry_world_Block_initBuilding,
	(void *) M_mindustry_world_Block_reinitializeConsumers,
	(void *) M_mindustry_world_Block_checkContentArrayCapacity_int_int,
	(void *) M_mindustry_world_Block_planRotation_int_R_int,
	(void *) M_mindustry_world_Block_flipRotation_mindustry_entities_units_BuildPlan_boolean,
	(void *) M_mindustry_world_Block_getPlanConfigs_arc_struct_Seq,
	(void *) M_mindustry_world_Block_lambda$init$3_java_lang_Class_arc_func_Cons2,
	(void *) M_mindustry_world_Block_lambda$initBuilding$1_java_lang_reflect_Constructor_R_mindustry_gen_Building,
	(void *) M_mindustry_world_Block_lambda$setBars$5_mindustry_gen_Building_R_mindustry_ui_Bar,
	(void *) M_mindustry_world_Block_lambda$setBars$8_mindustry_gen_Building_R_float,
	(void *) M_mindustry_world_Block_lambda$setBars$1_boolean_float_mindustry_gen_Building_R_mindustry_ui_Bar,
	(void *) M_mindustry_world_Block_lambda$setBars$4_mindustry_gen_Building_R_float,
	(void *) M_mindustry_world_Block_lambda$addLiquidBar$3_arc_func_Func_mindustry_gen_Building_R_mindustry_ui_Bar,
	(void *) M_mindustry_world_Block_lambda$addLiquidBar$6_arc_func_Func_mindustry_gen_Building_R_float,
	(void *) M_mindustry_world_Block_lambda$addLiquidBar$0_mindustry_type_Liquid_mindustry_gen_Building_R_mindustry_ui_Bar,
	(void *) M_mindustry_world_Block_lambda$addLiquidBar$2_mindustry_gen_Building_mindustry_type_Liquid_R_float,
	(void *) M_mindustry_world_Block_lambda$sumAttribute$0_mindustry_world_meta_Attribute_mindustry_world_Tile_R_float,
	(void *) M_mindustry_world_Block_lambda$drawPotentialLinks$1_int_int_mindustry_gen_Building,
	(void *) M_mindustry_world_Block_lambda$drawPotentialLinks$0_int_int_mindustry_gen_Building,
	(void *) M_mindustry_world_blocks_power_PowerGenerator_getDisplayedPowerProduction_R_float,
	(void *) M_mindustry_world_blocks_power_ImpactReactor_statWarmup_float_R_float,
	(void *) M_mindustry_world_blocks_power_ImpactReactor_lambda$setStats$0_float_float_float_float_arc_scene_ui_layout_Table,
	(void *) M_mindustry_world_blocks_power_ImpactReactor_lambda$setBars$0_mindustry_world_blocks_power_PowerGenerator$GeneratorBuild_R_mindustry_ui_Bar,
	(void *) M_mindustry_world_blocks_power_ImpactReactor_lambda$setBars$1_mindustry_world_blocks_power_PowerGenerator$GeneratorBuild_R_java_lang_CharSequence,
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
	{ "compareTo", "(Ljava/lang/Object;)I" },
	{ "getContentType", "()Lmindustry/ctype/ContentType;" },
	{ "removeContent", "()V" },
	{ "init", "()V" },
	{ "postInit", "()V" },
	{ "afterPatch", "()V" },
	{ "load", "()V" },
	{ "loadIcon", "()V" },
	{ "hasErrored", "()Z" },
	{ "isVanilla", "()Z" },
	{ "isModded", "()Z" },
	{ "isPatchContent", "()Z" },
	{ "compareTo", "(Lmindustry/ctype/Content;)I" },
	{ "isBanned", "()Z" },
	{ "isOnPlanet", "(Lmindustry/type/Planet;)Z" },
	{ "getLogicId", "()I" },
	{ "displayDescription", "()Ljava/lang/String;" },
	{ "checkStats", "()V" },
	{ "setStats", "()V" },
	{ "computeStats", "()Lmindustry/world/meta/Stats;" },
	{ "displayExtra", "(Larc/scene/ui/layout/Table;)V" },
	{ "createIcons", "(Lmindustry/graphics/MultiPacker;)V" },
	{ "makeOutline", "(Lmindustry/graphics/MultiPacker$PageType;Lmindustry/graphics/MultiPacker;Larc/graphics/g2d/TextureRegion;ZLarc/graphics/Color;I)V" },
	{ "makeOutline", "(Lmindustry/graphics/MultiPacker$PageType;Lmindustry/graphics/MultiPacker;Larc/graphics/g2d/TextureRegion;ZLarc/graphics/Color;II)V" },
	{ "makeOutline", "(Lmindustry/graphics/MultiPacker;Larc/graphics/g2d/TextureRegion;Ljava/lang/String;Larc/graphics/Color;I)V" },
	{ "makeOutline", "(Lmindustry/graphics/MultiPacker;Larc/graphics/g2d/TextureRegion;Ljava/lang/String;Larc/graphics/Color;)V" },
	{ "researchRequirements", "()[Lmindustry/type/ItemStack;" },
	{ "emoji", "()Ljava/lang/String;" },
	{ "emojiChar", "()I" },
	{ "hasEmoji", "()Z" },
	{ "getDependencies", "(Larc/func/Cons;)V" },
	{ "onUnlock", "()V" },
	{ "isHidden", "()Z" },
	{ "showUnlock", "()Z" },
	{ "logicVisible", "()Z" },
	{ "unlock", "()V" },
	{ "quietUnlock", "()V" },
	{ "unlockedNowHost", "()Z" },
	{ "unlockedHost", "()Z" },
	{ "unlockedNow", "()Z" },
	{ "unlocked", "()Z" },
	{ "clearUnlock", "()V" },
	{ "locked", "()Z" },
	{ "sense", "(Lmindustry/logic/LAccess;)D" },
	{ "sense", "(Lmindustry/ctype/Content;)D" },
	{ "senseObject", "(Lmindustry/logic/LAccess;)Ljava/lang/Object;" },
	{ "drawBase", "(Lmindustry/world/Tile;)V" },
	{ "drawBaseCached", "(Lmindustry/world/Tile;)V" },
	{ "drawShadow", "(Lmindustry/world/Tile;)V" },
	{ "percentSolid", "(II)F" },
	{ "drawEnvironmentLight", "(Lmindustry/world/Tile;)V" },
	{ "drawPlace", "(IIIZ)V" },
	{ "drawSideRegion", "(Larc/graphics/g2d/TextureRegion;FFI)V" },
	{ "drawPotentialLinks", "(II)V" },
	{ "drawPlaceText", "(Ljava/lang/String;IIZ)F" },
	{ "drawPlaceText", "(Ljava/lang/String;IILarc/graphics/Color;Z)F" },
	{ "drawOverlay", "(FFI)V" },
	{ "displayShadow", "(Lmindustry/world/Tile;)Z" },
	{ "sumAttribute", "(Lmindustry/world/meta/Attribute;II)F" },
	{ "getDisplayIcon", "(Lmindustry/world/Tile;)Larc/graphics/g2d/TextureRegion;" },
	{ "getDisplayName", "(Lmindustry/world/Tile;)Ljava/lang/String;" },
	{ "minimapColor", "(Lmindustry/world/Tile;)I" },
	{ "getColor", "(Lmindustry/world/Tile;)Larc/graphics/Color;" },
	{ "outputsItems", "()Z" },
	{ "canPlaceOn", "(Lmindustry/world/Tile;Lmindustry/game/Team;I)Z" },
	{ "canBreak", "(Lmindustry/world/Tile;)Z" },
	{ "rotatedOutput", "(II)Z" },
	{ "rotatedOutput", "(IILmindustry/world/Tile;)Z" },
	{ "synthetic", "()Z" },
	{ "checkForceDark", "(Lmindustry/world/Tile;)Z" },
	{ "isDarkened", "(Lmindustry/world/Tile;)Z" },
	{ "addBar", "(Ljava/lang/String;Larc/func/Func;)V" },
	{ "removeBar", "(Ljava/lang/String;)V" },
	{ "listBars", "()Ljava/lang/Iterable;" },
	{ "addLiquidBar", "(Lmindustry/type/Liquid;)V" },
	{ "addLiquidBar", "(Larc/func/Func;)V" },
	{ "setBars", "()V" },
	{ "consumesItem", "(Lmindustry/type/Item;)Z" },
	{ "consumesLiquid", "(Lmindustry/type/Liquid;)Z" },
	{ "canReplace", "(Lmindustry/world/Block;)Z" },
	{ "getReplacement", "(Lmindustry/entities/units/BuildPlan;Larc/struct/Seq;)Lmindustry/world/Block;" },
	{ "changePlacementPath", "(Larc/struct/Seq;IZ)V" },
	{ "changePlacementPath", "(Larc/struct/Seq;I)V" },
	{ "handlePlacementLine", "(Larc/struct/Seq;)V" },
	{ "configSenseable", "()Z" },
	{ "nextConfig", "()Ljava/lang/Object;" },
	{ "onNewPlan", "(Lmindustry/entities/units/BuildPlan;)V" },
	{ "drawPlan", "(Lmindustry/entities/units/BuildPlan;Larc/util/Eachable;Z)V" },
	{ "drawPlan", "(Lmindustry/entities/units/BuildPlan;Larc/util/Eachable;ZF)V" },
	{ "drawOtherPlayerPlan", "(Lmindustry/entities/units/BuildPlan;Larc/util/Eachable;F)V" },
	{ "drawPlanRegion", "(Lmindustry/entities/units/BuildPlan;Larc/util/Eachable;)V" },
	{ "drawDefaultPlanRegion", "(Lmindustry/entities/units/BuildPlan;Larc/util/Eachable;)V" },
	{ "getPlanRegion", "(Lmindustry/entities/units/BuildPlan;Larc/util/Eachable;)Larc/graphics/g2d/TextureRegion;" },
	{ "drawPlanConfig", "(Lmindustry/entities/units/BuildPlan;Larc/util/Eachable;)V" },
	{ "drawPlanConfigCenter", "(Lmindustry/entities/units/BuildPlan;Ljava/lang/Object;Ljava/lang/String;Z)V" },
	{ "drawPlanConfigCenter", "(Lmindustry/entities/units/BuildPlan;Ljava/lang/Object;Ljava/lang/String;)V" },
	{ "drawPlanConfigTop", "(Lmindustry/entities/units/BuildPlan;Larc/util/Eachable;)V" },
	{ "planConfigClipSize", "()F" },
	{ "pointConfig", "(Ljava/lang/Object;Larc/func/Cons;)Ljava/lang/Object;" },
	{ "configClear", "(Larc/func/Cons;)V" },
	{ "config", "(Ljava/lang/Class;Larc/func/Cons2;)V" },
	{ "isAccessible", "()Z" },
	{ "nearbySide", "(IIIILarc/math/geom/Point2;)V" },
	{ "getEdges", "()[Larc/math/geom/Point2;" },
	{ "getInsideEdges", "()[Larc/math/geom/Point2;" },
	{ "iterateTaken", "(IILarc/func/Intc2;)V" },
	{ "makeIconRegions", "()[Larc/graphics/g2d/TextureRegion;" },
	{ "icons", "()[Larc/graphics/g2d/TextureRegion;" },
	{ "getRegionsToOutline", "(Larc/struct/Seq;)V" },
	{ "getGeneratedIcons", "()[Larc/graphics/g2d/TextureRegion;" },
	{ "resetGeneratedIcons", "()V" },
	{ "variantRegions", "()[Larc/graphics/g2d/TextureRegion;" },
	{ "hasBuilding", "()Z" },
	{ "newBuilding", "()Lmindustry/gen/Building;" },
	{ "updateClipRadius", "(F)V" },
	{ "bounds", "(IILarc/math/geom/Rect;)Larc/math/geom/Rect;" },
	{ "isMultiblock", "()Z" },
	{ "isVisible", "()Z" },
	{ "isPlaceable", "()Z" },
	{ "isOverPlacementLimit", "(Lmindustry/game/Team;)Z" },
	{ "supportsEnv", "(I)Z" },
	{ "buildEditorConfig", "(Larc/scene/ui/layout/Table;)V" },
	{ "onPicked", "(Lmindustry/world/Tile;)V" },
	{ "getConfig", "(Lmindustry/world/Tile;)Ljava/lang/Object;" },
	{ "blockChanged", "(Lmindustry/world/Tile;)V" },
	{ "placeBegan", "(Lmindustry/world/Tile;Lmindustry/world/Block;)V" },
	{ "placeBegan", "(Lmindustry/world/Tile;Lmindustry/world/Block;Lmindustry/gen/Unit;)V" },
	{ "placeEnded", "(Lmindustry/world/Tile;Lmindustry/gen/Unit;ILjava/lang/Object;)V" },
	{ "beforePlaceBegan", "(Lmindustry/world/Tile;Lmindustry/world/Block;)V" },
	{ "editorPicked", "(Lmindustry/world/Tile;)V" },
	{ "isFloor", "()Z" },
	{ "isOverlay", "()Z" },
	{ "asFloor", "()Lmindustry/world/blocks/environment/Floor;" },
	{ "isAir", "()Z" },
	{ "canBeBuilt", "()Z" },
	{ "environmentBuildable", "()Z" },
	{ "isStatic", "()Z" },
	{ "findConsumer", "(Larc/func/Boolf;)Lmindustry/world/consumers/Consume;" },
	{ "hasConsumer", "(Lmindustry/world/consumers/Consume;)Z" },
	{ "removeConsumer", "(Lmindustry/world/consumers/Consume;)V" },
	{ "removeConsumers", "(Larc/func/Boolf;)V" },
	{ "consumeLiquid", "(Lmindustry/type/Liquid;F)Lmindustry/world/consumers/ConsumeLiquid;" },
	{ "consumeLiquids", "([Lmindustry/type/LiquidStack;)Lmindustry/world/consumers/ConsumeLiquids;" },
	{ "consumePower", "(F)Lmindustry/world/consumers/ConsumePower;" },
	{ "consumePowerCond", "(FLarc/func/Boolf;)Lmindustry/world/consumers/ConsumePower;" },
	{ "consumePowerDynamic", "(Larc/func/Floatf;)Lmindustry/world/consumers/ConsumePower;" },
	{ "consumePowerDynamic", "(FLarc/func/Floatf;)Lmindustry/world/consumers/ConsumePower;" },
	{ "consumePowerBuffered", "(F)Lmindustry/world/consumers/ConsumePower;" },
	{ "consumeItem", "(Lmindustry/type/Item;)Lmindustry/world/consumers/ConsumeItems;" },
	{ "consumeItem", "(Lmindustry/type/Item;I)Lmindustry/world/consumers/ConsumeItems;" },
	{ "consumeItems", "([Lmindustry/type/ItemStack;)Lmindustry/world/consumers/ConsumeItems;" },
	{ "consumeCoolant", "(F)Lmindustry/world/consumers/ConsumeCoolant;" },
	{ "consumeCoolant", "(FZZ)Lmindustry/world/consumers/ConsumeCoolant;" },
	{ "consume", "(Lmindustry/world/consumers/Consume;)Lmindustry/world/consumers/Consume;" },
	{ "setupRequirements", "(Lmindustry/type/Category;[Lmindustry/type/ItemStack;)V" },
	{ "setupRequirements", "(Lmindustry/type/Category;Lmindustry/world/meta/BuildVisibility;[Lmindustry/type/ItemStack;)V" },
	{ "requirements", "(Lmindustry/type/Category;[Lmindustry/type/ItemStack;Z)V" },
	{ "requirements", "(Lmindustry/type/Category;[Lmindustry/type/ItemStack;)V" },
	{ "requirements", "(Lmindustry/type/Category;Lmindustry/world/meta/BuildVisibility;[Lmindustry/type/ItemStack;)V" },
	{ "initBuilding", "()V" },
	{ "reinitializeConsumers", "()V" },
	{ "checkContentArrayCapacity", "(II)V" },
	{ "planRotation", "(I)I" },
	{ "flipRotation", "(Lmindustry/entities/units/BuildPlan;Z)V" },
	{ "getPlanConfigs", "(Larc/struct/Seq;)V" },
	{ "lambda$init$3", "(Ljava/lang/Class;Larc/func/Cons2;)V" },
	{ "lambda$initBuilding$1", "(Ljava/lang/reflect/Constructor;)Lmindustry/gen/Building;" },
	{ "lambda$setBars$5", "(Lmindustry/gen/Building;)Lmindustry/ui/Bar;" },
	{ "lambda$setBars$8", "(Lmindustry/gen/Building;)F" },
	{ "lambda$setBars$1", "(ZFLmindustry/gen/Building;)Lmindustry/ui/Bar;" },
	{ "lambda$setBars$4", "(Lmindustry/gen/Building;)F" },
	{ "lambda$addLiquidBar$3", "(Larc/func/Func;Lmindustry/gen/Building;)Lmindustry/ui/Bar;" },
	{ "lambda$addLiquidBar$6", "(Larc/func/Func;Lmindustry/gen/Building;)F" },
	{ "lambda$addLiquidBar$0", "(Lmindustry/type/Liquid;Lmindustry/gen/Building;)Lmindustry/ui/Bar;" },
	{ "lambda$addLiquidBar$2", "(Lmindustry/gen/Building;Lmindustry/type/Liquid;)F" },
	{ "lambda$sumAttribute$0", "(Lmindustry/world/meta/Attribute;Lmindustry/world/Tile;)F" },
	{ "lambda$drawPotentialLinks$1", "(IILmindustry/gen/Building;)V" },
	{ "lambda$drawPotentialLinks$0", "(IILmindustry/gen/Building;)V" },
	{ "getDisplayedPowerProduction", "()F" },
	{ "statWarmup", "(F)F" },
	{ "lambda$setStats$0", "(FFFFLarc/scene/ui/layout/Table;)V" },
	{ "lambda$setBars$0", "(Lmindustry/world/blocks/power/PowerGenerator$GeneratorBuild;)Lmindustry/ui/Bar;" },
	{ "lambda$setBars$1", "(Lmindustry/world/blocks/power/PowerGenerator$GeneratorBuild;)Ljava/lang/CharSequence;" },
};

static jclass innerClasses[] {
	&class_mindustry_world_blocks_power_ImpactReactor$ImpactReactorBuild,
};

static FieldMetadata fields[] {
	{ "timerUse", &class_int, offsetof(mindustry_world_blocks_power_ImpactReactor, F_timerUse), "I", 17 },
	{ "warmupSpeed", &class_float, offsetof(mindustry_world_blocks_power_ImpactReactor, F_warmupSpeed), "F", 1 },
	{ "itemDuration", &class_float, offsetof(mindustry_world_blocks_power_ImpactReactor, F_itemDuration), "F", 1 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_mindustry_world_blocks_power_ImpactReactor_java_lang_String, 0, "(Ljava/lang/String;)V", 1 },
	{ "setBars", (intptr_t) M_mindustry_world_blocks_power_ImpactReactor_setBars, VTABLE_mindustry_world_blocks_power_ImpactReactor_setBars, "()V", 1 },
	{ "setStats", (intptr_t) M_mindustry_world_blocks_power_ImpactReactor_setStats, VTABLE_mindustry_world_blocks_power_ImpactReactor_setStats, "()V", 1 },
	{ "statWarmup", (intptr_t) M_mindustry_world_blocks_power_ImpactReactor_statWarmup_float_R_float, VTABLE_mindustry_world_blocks_power_ImpactReactor_statWarmup_float_R_float, "(F)F", 1 },
	{ "lambda$setStats$0", (intptr_t) M_mindustry_world_blocks_power_ImpactReactor_lambda$setStats$0_float_float_float_float_arc_scene_ui_layout_Table, VTABLE_mindustry_world_blocks_power_ImpactReactor_lambda$setStats$0_float_float_float_float_arc_scene_ui_layout_Table, "(FFFFLarc/scene/ui/layout/Table;)V", 4098 },
	{ "lambda$setBars$0", (intptr_t) M_mindustry_world_blocks_power_ImpactReactor_lambda$setBars$0_mindustry_world_blocks_power_PowerGenerator$GeneratorBuild_R_mindustry_ui_Bar, VTABLE_mindustry_world_blocks_power_ImpactReactor_lambda$setBars$0_mindustry_world_blocks_power_PowerGenerator$GeneratorBuild_R_mindustry_ui_Bar, "(Lmindustry/world/blocks/power/PowerGenerator$GeneratorBuild;)Lmindustry/ui/Bar;", 4098 },
	{ "lambda$setBars$3", (intptr_t) SM_mindustry_world_blocks_power_ImpactReactor_lambda$setBars$3_mindustry_world_blocks_power_PowerGenerator$GeneratorBuild_R_float, 0, "(Lmindustry/world/blocks/power/PowerGenerator$GeneratorBuild;)F", 4106 },
	{ "lambda$setBars$2", (intptr_t) SM_mindustry_world_blocks_power_ImpactReactor_lambda$setBars$2_R_arc_graphics_Color, 0, "()Larc/graphics/Color;", 4106 },
	{ "lambda$setBars$1", (intptr_t) M_mindustry_world_blocks_power_ImpactReactor_lambda$setBars$1_mindustry_world_blocks_power_PowerGenerator$GeneratorBuild_R_java_lang_CharSequence, VTABLE_mindustry_world_blocks_power_ImpactReactor_lambda$setBars$1_mindustry_world_blocks_power_PowerGenerator$GeneratorBuild_R_java_lang_CharSequence, "(Lmindustry/world/blocks/power/PowerGenerator$GeneratorBuild;)Ljava/lang/CharSequence;", 4098 },
};

Class class_mindustry_world_blocks_power_ImpactReactor{
		.nativeName = (intptr_t) "mindustry/world/blocks/power/ImpactReactor",
		.parentClass = (intptr_t) &class_mindustry_world_blocks_power_PowerGenerator,
		.size = sizeof(mindustry_world_blocks_power_ImpactReactor),
		.classVtable = (intptr_t) vtable_mindustry_world_blocks_power_ImpactReactor,
		.staticInitializer = (intptr_t) clinit_mindustry_world_blocks_power_ImpactReactor,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_mindustry_world_blocks_power_ImpactReactor,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 1,
		.nativeInnerClasses = (intptr_t) innerClasses,
		.access = 33,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 3,
		.nativeFields = (intptr_t) fields,
		.methodCount = 9,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 194,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_mindustry_world_blocks_power_ImpactReactor = registerClass(&class_mindustry_world_blocks_power_ImpactReactor);

}
