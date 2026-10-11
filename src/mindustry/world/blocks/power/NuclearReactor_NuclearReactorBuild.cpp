#include "mindustry/world/blocks/power/NuclearReactor_NuclearReactorBuild.h"
#include "arc/Events.h"
#include "mindustry/logic/LAccess.h"
#include "arc/graphics/Color.h"
#include "mindustry/ui/Displayable.h"
#include "arc/graphics/g2d/Draw.h"
#include "arc/graphics/g2d/Fill.h"
#include "mindustry/world/blocks/power/NuclearReactor_NuclearReactorBuild.h"
#include "mindustry/world/blocks/heat/HeatBlock.h"
#include "mindustry/entities/Effect.h"
#include "mindustry/content/Fx.h"
#include "mindustry/world/blocks/power/PowerGenerator_GeneratorBuild.h"
#include "arc/util/Tmp.h"
#include "arc/math/geom/Position.h"
#include "java/lang/Math.h"
#include "arc/math/Mathf.h"
#include "mindustry/world/blocks/power/NuclearReactor.h"
#include "arc/graphics/g2d/TextureRegion.h"
#include "mindustry/type/Liquid.h"
#include "arc/util/Time.h"
#include "mindustry/type/Item.h"
#include "mindustry/world/blocks/power/PowerGenerator.h"
#include "java/lang/Enum.h"
#include "mindustry/world/modules/ItemModule.h"
#include "mindustry/gen/Building.h"
#include "arc/util/io/Reads.h"
#include "java/lang/Object.h"
#include "mindustry/game/EventType_Trigger.h"
#include "mindustry/graphics/Drawf.h"
#include "mindustry/world/modules/LiquidModule.h"
#include "arc/util/io/Writes.h"

extern "C" {


void mark_mindustry_world_blocks_power_NuclearReactor$NuclearReactorBuild(jobject object, jint mark, jint depth) {
	if (!object) {
		return;
	}
	if (depth > GC_DEPTH_ALWAYS && (object->gcMark < GC_MARK_START || object->gcMark == mark))
		return;
	if (depth > MAX_GC_MARK_DEPTH) {
		markDeepObject(object);
		return;
	}
	mark_mindustry_world_blocks_power_PowerGenerator$GeneratorBuild(object, mark, depth);
	if (object->gcMark >= GC_MARK_START)
		object->gcMark = mark;
	auto self = (mindustry_world_blocks_power_NuclearReactor$NuclearReactorBuild *) object;
	if (self->F_this$0)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_this$0)->clazz)->markFunction)((jobject) self->F_this$0, mark, depth + 1);
}

void clinit_mindustry_world_blocks_power_NuclearReactor$NuclearReactorBuild(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	clinit_mindustry_world_blocks_power_PowerGenerator$GeneratorBuild(ctx);
}

void init_mindustry_world_blocks_power_NuclearReactor$NuclearReactorBuild_mindustry_world_blocks_power_NuclearReactor(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/power/NuclearReactor$NuclearReactorBuild:<init>", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_world_blocks_power_NuclearReactor$NuclearReactorBuild(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(106);
	((mindustry_world_blocks_power_NuclearReactor$NuclearReactorBuild *) NULL_CHECK((frame[0].o)))->F_this$0 = (jref) (frame[1].o);
	init_mindustry_world_blocks_power_PowerGenerator$GeneratorBuild_mindustry_world_blocks_power_PowerGenerator(ctx, (frame[0].o), (frame[1].o));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_world_blocks_power_NuclearReactor$NuclearReactorBuild_updateTile(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[10];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/power/NuclearReactor$NuclearReactorBuild:updateTile", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(115);
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_items;
	sp[1].o = (jobject)((mindustry_world_blocks_power_NuclearReactor$NuclearReactorBuild *) NULL_CHECK((frame[0].o)))->F_this$0;
	sp[1].o = (jobject)((mindustry_world_blocks_power_NuclearReactor *) NULL_CHECK(sp[1].o))->F_fuelItem;
	jint temp0 = (jint)((func_mindustry_world_modules_ItemModule_get_mindustry_type_Item_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_modules_ItemModule_get_mindustry_type_Item_R_int])(ctx, sp[0].o, sp[1].o);
	frame[1].i = temp0;
	LINE_NUMBER(116);
	jfloat temp1 = jfloat((frame[1].i));
	sp[0].o = (jobject)((mindustry_world_blocks_power_NuclearReactor$NuclearReactorBuild *) NULL_CHECK((frame[0].o)))->F_this$0;
	frame[2].f = (temp1 / (jfloat(((jint)((mindustry_world_Block *) NULL_CHECK(sp[0].o))->F_itemCapacity))));
	LINE_NUMBER(117);
	((mindustry_world_blocks_power_PowerGenerator$GeneratorBuild *) NULL_CHECK((frame[0].o)))->F_productionEfficiency = (frame[2].f);
	LINE_NUMBER(119);
	if ((frame[1].i) <= 0) goto label_4;
	}
	{
	if (((jint)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_enabled) == 0) goto label_4;
	}
	{
	LINE_NUMBER(120);
	sp[0].o = frame[0].o;
	jfloat temp0 = (jfloat)((mindustry_world_blocks_power_NuclearReactor$NuclearReactorBuild *) NULL_CHECK(sp[0].o))->F_heat;
	sp[1].o = frame[0].o;
	jfloat temp1 = frame[2].f;
	sp[2].o = (jobject)((mindustry_world_blocks_power_NuclearReactor$NuclearReactorBuild *) NULL_CHECK((frame[0].o)))->F_this$0;
	jfloat temp2 = temp1 * ((jfloat)((mindustry_world_blocks_power_NuclearReactor *) NULL_CHECK(sp[2].o))->F_heating);
	jfloat temp3 = (jfloat)((func_mindustry_world_blocks_power_NuclearReactor$NuclearReactorBuild_delta_R_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_world_blocks_power_NuclearReactor$NuclearReactorBuild_delta_R_float])(ctx, (frame[0].o));
	jfloat temp4 = (jfloat)SM_java_lang_Math_min_float_float_R_float(ctx, temp3, (jfloat(4.0f)));
	jfloat temp5 = temp2 * temp4;
	((mindustry_world_blocks_power_NuclearReactor$NuclearReactorBuild *) NULL_CHECK(sp[1].o))->F_heatLastFrame = temp5;
	((mindustry_world_blocks_power_NuclearReactor$NuclearReactorBuild *) NULL_CHECK(sp[0].o))->F_heat = (temp0 + temp5);
	LINE_NUMBER(122);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((mindustry_world_blocks_power_NuclearReactor$NuclearReactorBuild *) NULL_CHECK((frame[0].o)))->F_this$0;
	jint temp8 = (jint)((mindustry_world_blocks_power_NuclearReactor *) NULL_CHECK(sp[1].o))->F_timerFuel;
	sp[1].o = (jobject)((mindustry_world_blocks_power_NuclearReactor$NuclearReactorBuild *) NULL_CHECK((frame[0].o)))->F_this$0;
	jfloat temp9 = (jfloat)((mindustry_world_blocks_power_NuclearReactor *) NULL_CHECK(sp[1].o))->F_itemDuration;
	jfloat temp10 = (jfloat)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_timeScale;
	sp[1].i = temp8;
	sp[2].f = temp9;
	sp[3].f = temp10;
	sp += 4;
	if ((floatCompare(((jfloat)((mindustry_world_blocks_power_NuclearReactor$NuclearReactorBuild *) NULL_CHECK((frame[0].o)))->F_heat), ((jfloat)((mindustry_world_blocks_power_NuclearReactor$NuclearReactorBuild *) NULL_CHECK((frame[0].o)))->F_heatLastFrame), -1)) <= 0) goto label_7;
	}
	{
	jfloat temp0 = (jfloat(1)) * ((jfloat)((mindustry_world_blocks_power_NuclearReactor$NuclearReactorBuild *) NULL_CHECK((frame[0].o)))->F_heat);
	sp[0].o = (jobject)((mindustry_world_blocks_power_NuclearReactor$NuclearReactorBuild *) NULL_CHECK((frame[0].o)))->F_this$0;
	jfloat temp1 = temp0 * ((jfloat)((mindustry_world_blocks_power_NuclearReactor *) NULL_CHECK(sp[0].o))->F_heatConsumeRate);
	sp[0].f = temp1;
	sp += 1;
	goto label_8;
	}
label_7:;
	INST_FCONST(0);
label_8:;
	{
	sp -= 5;
	jint temp0 = (jint)((func_mindustry_world_blocks_power_NuclearReactor$NuclearReactorBuild_timer_int_float_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_blocks_power_NuclearReactor$NuclearReactorBuild_timer_int_float_R_boolean])(ctx, sp[0].o, sp[1].i, (sp[2].f / (sp[3].f + sp[4].f)));
	if (temp0 == 0) goto label_9;
	}
	{
	LINE_NUMBER(123);
	((func_mindustry_world_blocks_power_NuclearReactor$NuclearReactorBuild_consume) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_world_blocks_power_NuclearReactor$NuclearReactorBuild_consume])(ctx, (frame[0].o));
	goto label_9;
	}
label_4:;
	{
	LINE_NUMBER(126);
	((mindustry_world_blocks_power_PowerGenerator$GeneratorBuild *) NULL_CHECK((frame[0].o)))->F_productionEfficiency = (jfloat(0));
	LINE_NUMBER(127);
	sp[0].o = frame[0].o;
	jfloat temp0 = jfloat(0);
	jfloat temp1 = (jfloat)((mindustry_world_blocks_power_NuclearReactor$NuclearReactorBuild *) NULL_CHECK((frame[0].o)))->F_heat;
	clinit_arc_util_Time(ctx);
	jfloat temp2 = (jfloat)SF_arc_util_Time_delta;
	sp[1].o = (jobject)((mindustry_world_blocks_power_NuclearReactor$NuclearReactorBuild *) NULL_CHECK((frame[0].o)))->F_this$0;
	jfloat temp3 = (jfloat)SM_java_lang_Math_max_float_float_R_float(ctx, temp0, (temp1 - (temp2 / ((jfloat)((mindustry_world_blocks_power_NuclearReactor *) NULL_CHECK(sp[1].o))->F_ambientCooldownTime))));
	((mindustry_world_blocks_power_NuclearReactor$NuclearReactorBuild *) NULL_CHECK(sp[0].o))->F_heat = temp3;
	}
label_9:;
	{
	LINE_NUMBER(130);
	if ((floatCompare(((jfloat)((mindustry_world_blocks_power_NuclearReactor$NuclearReactorBuild *) NULL_CHECK((frame[0].o)))->F_heat), (jfloat(0)), -1)) <= 0) goto label_12;
	}
	{
	LINE_NUMBER(131);
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_liquids;
	jfloat temp0 = (jfloat)((func_mindustry_world_modules_LiquidModule_currentAmount_R_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_modules_LiquidModule_currentAmount_R_float])(ctx, sp[0].o);
	jfloat temp1 = (jfloat)((mindustry_world_blocks_power_NuclearReactor$NuclearReactorBuild *) NULL_CHECK((frame[0].o)))->F_heat;
	sp[0].o = (jobject)((mindustry_world_blocks_power_NuclearReactor$NuclearReactorBuild *) NULL_CHECK((frame[0].o)))->F_this$0;
	jfloat temp2 = (jfloat)SM_java_lang_Math_min_float_float_R_float(ctx, temp0, (temp1 / ((jfloat)((mindustry_world_blocks_power_NuclearReactor *) NULL_CHECK(sp[0].o))->F_coolantPower)));
	frame[3].f = temp2;
	LINE_NUMBER(132);
	sp[0].o = frame[0].o;
	jfloat temp3 = (jfloat)((mindustry_world_blocks_power_NuclearReactor$NuclearReactorBuild *) NULL_CHECK(sp[0].o))->F_heat;
	jfloat temp4 = frame[3].f;
	sp[1].o = (jobject)((mindustry_world_blocks_power_NuclearReactor$NuclearReactorBuild *) NULL_CHECK((frame[0].o)))->F_this$0;
	((mindustry_world_blocks_power_NuclearReactor$NuclearReactorBuild *) NULL_CHECK(sp[0].o))->F_heat = (temp3 - (temp4 * ((jfloat)((mindustry_world_blocks_power_NuclearReactor *) NULL_CHECK(sp[1].o))->F_coolantPower)));
	LINE_NUMBER(133);
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_liquids;
	sp[1].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_liquids;
	sp[1].o = (jobject)((func_mindustry_world_modules_LiquidModule_current_R_mindustry_type_Liquid) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_mindustry_world_modules_LiquidModule_current_R_mindustry_type_Liquid])(ctx, sp[1].o);
	((func_mindustry_world_modules_LiquidModule_remove_mindustry_type_Liquid_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_modules_LiquidModule_remove_mindustry_type_Liquid_float])(ctx, sp[0].o, sp[1].o, (frame[3].f));
	}
label_12:;
	{
	LINE_NUMBER(136);
	jfloat temp0 = (jfloat)((mindustry_world_blocks_power_NuclearReactor$NuclearReactorBuild *) NULL_CHECK((frame[0].o)))->F_heat;
	sp[0].o = (jobject)((mindustry_world_blocks_power_NuclearReactor$NuclearReactorBuild *) NULL_CHECK((frame[0].o)))->F_this$0;
	if ((floatCompare(temp0, ((jfloat)((mindustry_world_blocks_power_NuclearReactor *) NULL_CHECK(sp[0].o))->F_smokeThreshold), -1)) <= 0) goto label_16;
	}
	{
	LINE_NUMBER(137);
	jfloat temp0 = jfloat(1);
	jfloat temp1 = (jfloat)((mindustry_world_blocks_power_NuclearReactor$NuclearReactorBuild *) NULL_CHECK((frame[0].o)))->F_heat;
	sp[0].o = (jobject)((mindustry_world_blocks_power_NuclearReactor$NuclearReactorBuild *) NULL_CHECK((frame[0].o)))->F_this$0;
	jfloat temp2 = temp1 - ((jfloat)((mindustry_world_blocks_power_NuclearReactor *) NULL_CHECK(sp[0].o))->F_smokeThreshold);
	jfloat temp3 = jfloat(1);
	sp[0].o = (jobject)((mindustry_world_blocks_power_NuclearReactor$NuclearReactorBuild *) NULL_CHECK((frame[0].o)))->F_this$0;
	frame[3].f = (temp0 + (temp2 / (temp3 - ((jfloat)((mindustry_world_blocks_power_NuclearReactor *) NULL_CHECK(sp[0].o))->F_smokeThreshold))));
	LINE_NUMBER(138);
	jdouble temp4 = (jdouble((frame[3].f))) / (jdouble(20.0));
	jfloat temp5 = (jfloat)((func_mindustry_world_blocks_power_NuclearReactor$NuclearReactorBuild_delta_R_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_world_blocks_power_NuclearReactor$NuclearReactorBuild_delta_R_float])(ctx, (frame[0].o));
	jint temp6 = (jint)SM_arc_math_Mathf_chance_double_R_boolean(ctx, (temp4 * (jdouble(temp5))));
	if (temp6 == 0) goto label_16;
	}
	{
	LINE_NUMBER(139);
	clinit_mindustry_content_Fx(ctx);
	sp[0].o = (jobject)SF_mindustry_content_Fx_reactorsmoke;
	jfloat temp0 = (jfloat)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_x;
	sp[1].o = (jobject)((mindustry_world_blocks_power_NuclearReactor$NuclearReactorBuild *) NULL_CHECK((frame[0].o)))->F_this$0;
	jfloat temp1 = (jfloat)SM_arc_math_Mathf_range_float_R_float(ctx, ((jfloat((((jint)((mindustry_world_Block *) NULL_CHECK(sp[1].o))->F_size) * (8)))) / (jfloat(2))));
	jfloat temp2 = temp0 + temp1;
	jfloat temp3 = (jfloat)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_y;
	sp[1].o = (jobject)((mindustry_world_blocks_power_NuclearReactor$NuclearReactorBuild *) NULL_CHECK((frame[0].o)))->F_this$0;
	jfloat temp4 = (jfloat((((jint)((mindustry_world_Block *) NULL_CHECK(sp[1].o))->F_size) * (8)))) / (jfloat(2));
	LINE_NUMBER(140);
	jfloat temp5 = (jfloat)SM_arc_math_Mathf_range_float_R_float(ctx, temp4);
	jfloat temp6 = temp3 + temp5;
	LINE_NUMBER(139);
	((func_mindustry_entities_Effect_at_float_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_entities_Effect_at_float_float])(ctx, sp[0].o, temp2, temp6);
	}
label_16:;
	{
	LINE_NUMBER(144);
	sp[0].o = frame[0].o;
	jfloat temp0 = (jfloat)SM_arc_math_Mathf_clamp_float_R_float(ctx, ((jfloat)((mindustry_world_blocks_power_NuclearReactor$NuclearReactorBuild *) NULL_CHECK((frame[0].o)))->F_heat));
	((mindustry_world_blocks_power_NuclearReactor$NuclearReactorBuild *) NULL_CHECK(sp[0].o))->F_heat = temp0;
	LINE_NUMBER(145);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((mindustry_world_blocks_power_NuclearReactor$NuclearReactorBuild *) NULL_CHECK((frame[0].o)))->F_this$0;
	sp += 1;
	if ((floatCompare(((jfloat)((mindustry_world_blocks_power_NuclearReactor *) NULL_CHECK(sp[0].o))->F_heatOutput), (jfloat(0)), -1)) <= 0) goto label_23;
	}
	{
	jfloat temp0 = (jfloat)((mindustry_world_blocks_power_NuclearReactor$NuclearReactorBuild *) NULL_CHECK((frame[0].o)))->F_heatProgress;
	jfloat temp1 = (jfloat)((mindustry_world_blocks_power_NuclearReactor$NuclearReactorBuild *) NULL_CHECK((frame[0].o)))->F_heat;
	sp[0].o = (jobject)((mindustry_world_blocks_power_NuclearReactor$NuclearReactorBuild *) NULL_CHECK((frame[0].o)))->F_this$0;
	jfloat temp2 = temp1 * ((jfloat)((mindustry_world_blocks_power_NuclearReactor *) NULL_CHECK(sp[0].o))->F_heatOutput);
	sp[0].f = temp0;
	sp[1].f = temp2;
	sp += 2;
	if (((jint)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_enabled) == 0) goto label_24;
	}
	{
	if ((floatCompare(((jfloat)((mindustry_world_blocks_power_PowerGenerator$GeneratorBuild *) NULL_CHECK((frame[0].o)))->F_productionEfficiency), (jfloat(0)), -1)) <= 0) goto label_24;
	}
	INST_FCONST(1);
	goto label_25;
label_24:;
	INST_FCONST(0);
label_25:;
	{
	sp -= 3;
	jfloat temp0 = sp[1].f * sp[2].f;
	sp[1].o = (jobject)((mindustry_world_blocks_power_NuclearReactor$NuclearReactorBuild *) NULL_CHECK((frame[0].o)))->F_this$0;
	jfloat temp1 = (jfloat)((mindustry_world_blocks_power_NuclearReactor *) NULL_CHECK(sp[1].o))->F_heatWarmupRate;
	jfloat temp2 = (jfloat)((func_mindustry_world_blocks_power_NuclearReactor$NuclearReactorBuild_delta_R_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_world_blocks_power_NuclearReactor$NuclearReactorBuild_delta_R_float])(ctx, (frame[0].o));
	jfloat temp3 = (jfloat)SM_arc_math_Mathf_approachDelta_float_float_float_R_float(ctx, sp[0].f, temp0, (temp1 * temp2));
	sp[0].f = temp3;
	sp += 1;
	goto label_26;
	}
label_23:;
	INST_FCONST(0);
label_26:;
	{
	sp -= 2;
	((mindustry_world_blocks_power_NuclearReactor$NuclearReactorBuild *) NULL_CHECK(sp[0].o))->F_heatProgress = sp[1].f;
	LINE_NUMBER(147);
	if ((floatCompare(((jfloat)((mindustry_world_blocks_power_NuclearReactor$NuclearReactorBuild *) NULL_CHECK((frame[0].o)))->F_heat), (jfloat(0.999f)), -1)) < 0) goto label_28;
	}
	{
	LINE_NUMBER(148);
	clinit_mindustry_game_EventType$Trigger(ctx);
	sp[0].o = (jobject)SF_mindustry_game_EventType$Trigger_thoriumReactorOverheat;
	SM_arc_Events_fire_java_lang_Enum(ctx, sp[0].o);
	LINE_NUMBER(149);
	((func_mindustry_world_blocks_power_NuclearReactor$NuclearReactorBuild_kill) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_world_blocks_power_NuclearReactor$NuclearReactorBuild_kill])(ctx, (frame[0].o));
	}
label_28:;
	LINE_NUMBER(151);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jfloat M_mindustry_world_blocks_power_NuclearReactor$NuclearReactorBuild_heatFrac_R_float(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/power/NuclearReactor$NuclearReactorBuild:heatFrac", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(155);
	jfloat temp0 = (jfloat)((mindustry_world_blocks_power_NuclearReactor$NuclearReactorBuild *) NULL_CHECK((frame[0].o)))->F_heatProgress;
	sp[0].o = (jobject)((mindustry_world_blocks_power_NuclearReactor$NuclearReactorBuild *) NULL_CHECK((frame[0].o)))->F_this$0;
	popStackFrame(ctx);
	return (temp0 / ((jfloat)((mindustry_world_blocks_power_NuclearReactor *) NULL_CHECK(sp[0].o))->F_heatOutput));
	}

	popStackFrame(ctx);
}

jfloat M_mindustry_world_blocks_power_NuclearReactor$NuclearReactorBuild_heat_R_float(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/power/NuclearReactor$NuclearReactorBuild:heat", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(160);
	popStackFrame(ctx);
	return ((jfloat)((mindustry_world_blocks_power_NuclearReactor$NuclearReactorBuild *) NULL_CHECK((frame[0].o)))->F_heatProgress);
	}

	popStackFrame(ctx);
}

jdouble M_mindustry_world_blocks_power_NuclearReactor$NuclearReactorBuild_sense_mindustry_logic_LAccess_R_double(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/power/NuclearReactor$NuclearReactorBuild:sense", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(165);
	sp[0].o = frame[1].o;
	clinit_mindustry_logic_LAccess(ctx);
	sp[1].o = (jobject)SF_mindustry_logic_LAccess_heat;
	if (sp[0].o != sp[1].o) goto label_1;
	}
	{
	popStackFrame(ctx);
	return (jdouble(((jfloat)((mindustry_world_blocks_power_NuclearReactor$NuclearReactorBuild *) NULL_CHECK((frame[0].o)))->F_heat)));
	}
label_1:;
	{
	LINE_NUMBER(166);
	jdouble temp0 = (jdouble)M_mindustry_gen_Building_sense_mindustry_logic_LAccess_R_double(ctx, (frame[0].o), (frame[1].o));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jbool M_mindustry_world_blocks_power_NuclearReactor$NuclearReactorBuild_shouldExplode_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/power/NuclearReactor$NuclearReactorBuild:shouldExplode", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(171);
	jint temp0 = (jint)M_mindustry_world_blocks_power_PowerGenerator$GeneratorBuild_shouldExplode_R_boolean(ctx, (frame[0].o));
	if (temp0 == 0) goto label_1;
	}
	{
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_items;
	sp[1].o = (jobject)((mindustry_world_blocks_power_NuclearReactor$NuclearReactorBuild *) NULL_CHECK((frame[0].o)))->F_this$0;
	sp[1].o = (jobject)((mindustry_world_blocks_power_NuclearReactor *) NULL_CHECK(sp[1].o))->F_fuelItem;
	jint temp0 = (jint)((func_mindustry_world_modules_ItemModule_get_mindustry_type_Item_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_modules_ItemModule_get_mindustry_type_Item_R_int])(ctx, sp[0].o, sp[1].o);
	if (temp0 >= (jint(5))) goto label_2;
	}
	{
	if ((floatCompare(((jfloat)((mindustry_world_blocks_power_NuclearReactor$NuclearReactorBuild *) NULL_CHECK((frame[0].o)))->F_heat), (jfloat(0.5f)), -1)) < 0) goto label_1;
	}
label_2:;
	INST_ICONST(1);
	goto label_3;
label_1:;
	INST_ICONST(0);
label_3:;
	popStackFrame(ctx);
	INST_IRETURN();

	popStackFrame(ctx);
}

void M_mindustry_world_blocks_power_NuclearReactor$NuclearReactorBuild_drawLight(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/power/NuclearReactor$NuclearReactorBuild:drawLight", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(176);
	frame[1].f = ((jfloat)((mindustry_world_blocks_power_PowerGenerator$GeneratorBuild *) NULL_CHECK((frame[0].o)))->F_productionEfficiency);
	LINE_NUMBER(177);
	sp[0].o = frame[0].o;
	jfloat temp0 = (jfloat)SM_arc_math_Mathf_lerpDelta_float_float_float_R_float(ctx, ((jfloat)((mindustry_world_blocks_power_NuclearReactor$NuclearReactorBuild *) NULL_CHECK((frame[0].o)))->F_smoothLight), (frame[1].f), (jfloat(0.08f)));
	((mindustry_world_blocks_power_NuclearReactor$NuclearReactorBuild *) NULL_CHECK(sp[0].o))->F_smoothLight = temp0;
	LINE_NUMBER(178);
	jfloat temp1 = (jfloat)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_x;
	jfloat temp2 = (jfloat)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_y;
	jfloat temp3 = jfloat(90.0f);
	jfloat temp4 = (jfloat)SM_arc_math_Mathf_absin_float_float_R_float(ctx, (jfloat(5.0f)), (jfloat(5.0f)));
	jfloat temp5 = (temp3 + temp4) * ((jfloat)((mindustry_world_blocks_power_NuclearReactor$NuclearReactorBuild *) NULL_CHECK((frame[0].o)))->F_smoothLight);
	clinit_arc_util_Tmp(ctx);
	sp[0].o = (jobject)SF_arc_util_Tmp_c1;
	sp[1].o = (jobject)((mindustry_world_blocks_power_NuclearReactor$NuclearReactorBuild *) NULL_CHECK((frame[0].o)))->F_this$0;
	sp[1].o = (jobject)((mindustry_world_blocks_power_NuclearReactor *) NULL_CHECK(sp[1].o))->F_lightColor;
	sp[0].o = (jobject)((func_arc_graphics_Color_set_arc_graphics_Color_R_arc_graphics_Color) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_Color_set_arc_graphics_Color_R_arc_graphics_Color])(ctx, sp[0].o, sp[1].o);
	clinit_arc_graphics_Color(ctx);
	sp[1].o = (jobject)SF_arc_graphics_Color_scarlet;
	sp[0].o = (jobject)((func_arc_graphics_Color_lerp_arc_graphics_Color_float_R_arc_graphics_Color) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_Color_lerp_arc_graphics_Color_float_R_arc_graphics_Color])(ctx, sp[0].o, sp[1].o, ((jfloat)((mindustry_world_blocks_power_NuclearReactor$NuclearReactorBuild *) NULL_CHECK((frame[0].o)))->F_heat));
	SM_mindustry_graphics_Drawf_light_float_float_float_arc_graphics_Color_float(ctx, temp1, temp2, temp5, sp[0].o, ((jfloat(0.6f)) * ((jfloat)((mindustry_world_blocks_power_NuclearReactor$NuclearReactorBuild *) NULL_CHECK((frame[0].o)))->F_smoothLight)));
	LINE_NUMBER(179);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_world_blocks_power_NuclearReactor$NuclearReactorBuild_draw(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/power/NuclearReactor$NuclearReactorBuild:draw", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(183);
	M_mindustry_world_blocks_power_PowerGenerator$GeneratorBuild_draw(ctx, (frame[0].o));
	LINE_NUMBER(185);
	sp[0].o = (jobject)((mindustry_world_blocks_power_NuclearReactor$NuclearReactorBuild *) NULL_CHECK((frame[0].o)))->F_this$0;
	sp[0].o = (jobject)((mindustry_world_blocks_power_NuclearReactor *) NULL_CHECK(sp[0].o))->F_coolColor;
	sp[1].o = (jobject)((mindustry_world_blocks_power_NuclearReactor$NuclearReactorBuild *) NULL_CHECK((frame[0].o)))->F_this$0;
	sp[1].o = (jobject)((mindustry_world_blocks_power_NuclearReactor *) NULL_CHECK(sp[1].o))->F_hotColor;
	SM_arc_graphics_g2d_Draw_color_arc_graphics_Color_arc_graphics_Color_float(ctx, sp[0].o, sp[1].o, ((jfloat)((mindustry_world_blocks_power_NuclearReactor$NuclearReactorBuild *) NULL_CHECK((frame[0].o)))->F_heat));
	LINE_NUMBER(186);
	jfloat temp0 = (jfloat)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_x;
	jfloat temp1 = (jfloat)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_y;
	sp[0].o = (jobject)((mindustry_world_blocks_power_NuclearReactor$NuclearReactorBuild *) NULL_CHECK((frame[0].o)))->F_this$0;
	jfloat temp2 = jfloat((((jint)((mindustry_world_Block *) NULL_CHECK(sp[0].o))->F_size) * (8)));
	sp[0].o = (jobject)((mindustry_world_blocks_power_NuclearReactor$NuclearReactorBuild *) NULL_CHECK((frame[0].o)))->F_this$0;
	SM_arc_graphics_g2d_Fill_rect_float_float_float_float(ctx, temp0, temp1, temp2, (jfloat((((jint)((mindustry_world_Block *) NULL_CHECK(sp[0].o))->F_size) * (8)))));
	LINE_NUMBER(188);
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_liquids;
	sp[0].o = (jobject)((func_mindustry_world_modules_LiquidModule_current_R_mindustry_type_Liquid) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_modules_LiquidModule_current_R_mindustry_type_Liquid])(ctx, sp[0].o);
	sp[0].o = (jobject)((mindustry_type_Liquid *) NULL_CHECK(sp[0].o))->F_color;
	SM_arc_graphics_g2d_Draw_color_arc_graphics_Color(ctx, sp[0].o);
	LINE_NUMBER(189);
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_liquids;
	jfloat temp3 = (jfloat)((func_mindustry_world_modules_LiquidModule_currentAmount_R_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_modules_LiquidModule_currentAmount_R_float])(ctx, sp[0].o);
	sp[0].o = (jobject)((mindustry_world_blocks_power_NuclearReactor$NuclearReactorBuild *) NULL_CHECK((frame[0].o)))->F_this$0;
	SM_arc_graphics_g2d_Draw_alpha_float(ctx, (temp3 / ((jfloat)((mindustry_world_Block *) NULL_CHECK(sp[0].o))->F_liquidCapacity)));
	LINE_NUMBER(190);
	sp[0].o = (jobject)((mindustry_world_blocks_power_NuclearReactor$NuclearReactorBuild *) NULL_CHECK((frame[0].o)))->F_this$0;
	sp[0].o = (jobject)((mindustry_world_blocks_power_NuclearReactor *) NULL_CHECK(sp[0].o))->F_topRegion;
	SM_arc_graphics_g2d_Draw_rect_arc_graphics_g2d_TextureRegion_float_float(ctx, sp[0].o, ((jfloat)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_x), ((jfloat)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_y));
	LINE_NUMBER(192);
	jfloat temp4 = (jfloat)((mindustry_world_blocks_power_NuclearReactor$NuclearReactorBuild *) NULL_CHECK((frame[0].o)))->F_heat;
	sp[0].o = (jobject)((mindustry_world_blocks_power_NuclearReactor$NuclearReactorBuild *) NULL_CHECK((frame[0].o)))->F_this$0;
	if ((floatCompare(temp4, ((jfloat)((mindustry_world_blocks_power_NuclearReactor *) NULL_CHECK(sp[0].o))->F_flashThreshold), -1)) <= 0) goto label_7;
	}
	{
	LINE_NUMBER(193);
	sp[0].o = frame[0].o;
	jfloat temp0 = (jfloat)((mindustry_world_blocks_power_NuclearReactor$NuclearReactorBuild *) NULL_CHECK(sp[0].o))->F_flash;
	jfloat temp1 = jfloat(1);
	jfloat temp2 = (jfloat)((mindustry_world_blocks_power_NuclearReactor$NuclearReactorBuild *) NULL_CHECK((frame[0].o)))->F_heat;
	sp[1].o = (jobject)((mindustry_world_blocks_power_NuclearReactor$NuclearReactorBuild *) NULL_CHECK((frame[0].o)))->F_this$0;
	jfloat temp3 = temp2 - ((jfloat)((mindustry_world_blocks_power_NuclearReactor *) NULL_CHECK(sp[1].o))->F_flashThreshold);
	jfloat temp4 = jfloat(1);
	sp[1].o = (jobject)((mindustry_world_blocks_power_NuclearReactor$NuclearReactorBuild *) NULL_CHECK((frame[0].o)))->F_this$0;
	((mindustry_world_blocks_power_NuclearReactor$NuclearReactorBuild *) NULL_CHECK(sp[0].o))->F_flash = (temp0 + ((temp1 + ((temp3 / (temp4 - ((jfloat)((mindustry_world_blocks_power_NuclearReactor *) NULL_CHECK(sp[1].o))->F_flashThreshold))) * (jfloat(5.4f)))) * (clinit_arc_util_Time(ctx), (jfloat)SF_arc_util_Time_delta)));
	LINE_NUMBER(194);
	clinit_arc_graphics_Color(ctx);
	sp[0].o = (jobject)SF_arc_graphics_Color_red;
	clinit_arc_graphics_Color(ctx);
	sp[1].o = (jobject)SF_arc_graphics_Color_yellow;
	jfloat temp5 = (jfloat)SM_arc_math_Mathf_absin_float_float_float_R_float(ctx, ((jfloat)((mindustry_world_blocks_power_NuclearReactor$NuclearReactorBuild *) NULL_CHECK((frame[0].o)))->F_flash), (jfloat(9.0f)), (jfloat(1)));
	SM_arc_graphics_g2d_Draw_color_arc_graphics_Color_arc_graphics_Color_float(ctx, sp[0].o, sp[1].o, temp5);
	LINE_NUMBER(195);
	SM_arc_graphics_g2d_Draw_alpha_float(ctx, (jfloat(0.3f)));
	LINE_NUMBER(196);
	sp[0].o = (jobject)((mindustry_world_blocks_power_NuclearReactor$NuclearReactorBuild *) NULL_CHECK((frame[0].o)))->F_this$0;
	sp[0].o = (jobject)((mindustry_world_blocks_power_NuclearReactor *) NULL_CHECK(sp[0].o))->F_lightsRegion;
	SM_arc_graphics_g2d_Draw_rect_arc_graphics_g2d_TextureRegion_float_float(ctx, sp[0].o, ((jfloat)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_x), ((jfloat)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_y));
	}
label_7:;
	{
	LINE_NUMBER(199);
	SM_arc_graphics_g2d_Draw_reset(ctx);
	LINE_NUMBER(200);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_world_blocks_power_NuclearReactor$NuclearReactorBuild_write_arc_util_io_Writes(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/power/NuclearReactor$NuclearReactorBuild:write", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(204);
	M_mindustry_world_blocks_power_PowerGenerator$GeneratorBuild_write_arc_util_io_Writes(ctx, (frame[0].o), (frame[1].o));
	LINE_NUMBER(205);
	((func_arc_util_io_Writes_f_float) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_util_io_Writes_f_float])(ctx, (frame[1].o), ((jfloat)((mindustry_world_blocks_power_NuclearReactor$NuclearReactorBuild *) NULL_CHECK((frame[0].o)))->F_heat));
	LINE_NUMBER(206);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_world_blocks_power_NuclearReactor$NuclearReactorBuild_read_arc_util_io_Reads_byte(jcontext ctx, jobject self, jobject param0, jbyte param1) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/power/NuclearReactor$NuclearReactorBuild:read", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(210);
	M_mindustry_world_blocks_power_PowerGenerator$GeneratorBuild_read_arc_util_io_Reads_byte(ctx, (frame[0].o), (frame[1].o), (frame[2].i));
	LINE_NUMBER(211);
	sp[0].o = frame[0].o;
	jfloat temp0 = (jfloat)((func_arc_util_io_Reads_f_R_float) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_util_io_Reads_f_R_float])(ctx, (frame[1].o));
	((mindustry_world_blocks_power_NuclearReactor$NuclearReactorBuild *) NULL_CHECK(sp[0].o))->F_heat = temp0;
	LINE_NUMBER(212);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void *vtable_mindustry_world_blocks_power_NuclearReactor$NuclearReactorBuild[] {
	(void *) M_java_lang_Object_hashCode_R_int,
	(void *) M_java_lang_Object_equals_java_lang_Object_R_boolean,
	(void *) M_java_lang_Object_clone_R_java_lang_Object,
	(void *) M_java_lang_Object_getClass_R_java_lang_Class,
	(void *) M_mindustry_gen_Building_toString_R_java_lang_String,
	(void *) M_java_lang_Object_finalize,
	(void *) M_java_lang_Object_notify,
	(void *) M_java_lang_Object_notifyAll,
	(void *) M_java_lang_Object_wait,
	(void *) M_java_lang_Object_wait_long,
	(void *) M_java_lang_Object_wait_long_int,
	(void *) M_mindustry_gen_Building_hitbox_arc_math_geom_Rect,
	(void *) M_mindustry_gen_Building_getX_R_float,
	(void *) M_mindustry_gen_Building_getY_R_float,
	(void *) M_arc_math_geom_Position_angleTo_arc_math_geom_Position_R_float,
	(void *) M_arc_math_geom_Position_angleTo_float_float_R_float,
	(void *) M_arc_math_geom_Position_dst2_arc_math_geom_Position_R_float,
	(void *) M_arc_math_geom_Position_dst_arc_math_geom_Position_R_float,
	(void *) M_arc_math_geom_Position_dst_float_float_R_float,
	(void *) M_arc_math_geom_Position_dst2_float_float_R_float,
	(void *) M_arc_math_geom_Position_within_arc_math_geom_Position_float_R_boolean,
	(void *) M_arc_math_geom_Position_within_float_float_float_R_boolean,
	(void *) M_mindustry_gen_Building_isValid_R_boolean,
	(void *) M_mindustry_gen_Building_shouldAmbientSound_R_boolean,
	(void *) M_mindustry_gen_Building_getAmbientVolume_R_float,
	(void *) M_mindustry_gen_Building_getAmbientSound_R_arc_audio_Sound,
	(void *) M_mindustry_gen_Building_hitSize_R_float,
	(void *) M_mindustry_gen_Building_self_R_mindustry_gen_Entityc,
	(void *) M_mindustry_gen_Building_as_R_java_lang_Object,
	(void *) M_mindustry_gen_Building_isAdded_R_boolean,
	(void *) M_mindustry_gen_Building_isLocal_R_boolean,
	(void *) M_mindustry_gen_Building_isRemote_R_boolean,
	(void *) M_mindustry_gen_Building_serialize_R_boolean,
	(void *) M_mindustry_gen_Building_classId_R_int,
	(void *) M_mindustry_gen_Building_id_R_int,
	(void *) M_mindustry_gen_Building_add,
	(void *) M_mindustry_gen_Building_afterRead,
	(void *) M_mindustry_gen_Building_afterReadAll,
	(void *) M_mindustry_gen_Building_beforeWrite,
	(void *) M_mindustry_gen_Building_id_int,
	(void *) M_mindustry_gen_Building_read_arc_util_io_Reads,
	(void *) M_mindustry_gen_Building_remove,
	(void *) M_mindustry_gen_Building_update,
	(void *) M_mindustry_world_blocks_power_NuclearReactor$NuclearReactorBuild_write_arc_util_io_Writes,
	(void *) M_mindustry_gen_Building_floorOn_R_mindustry_world_blocks_environment_Floor,
	(void *) M_mindustry_gen_Building_buildOn_R_mindustry_gen_Building,
	(void *) M_mindustry_gen_Building_onSolid_R_boolean,
	(void *) M_mindustry_gen_Building_x_R_float,
	(void *) M_mindustry_gen_Building_y_R_float,
	(void *) M_mindustry_gen_Building_tileX_R_int,
	(void *) M_mindustry_gen_Building_tileY_R_int,
	(void *) M_mindustry_gen_Building_blockOn_R_mindustry_world_Block,
	(void *) M_mindustry_gen_Building_tileOn_R_mindustry_world_Tile,
	(void *) M_mindustry_gen_Building_set_arc_math_geom_Position,
	(void *) M_mindustry_gen_Building_set_float_float,
	(void *) M_mindustry_gen_Building_trns_arc_math_geom_Position,
	(void *) M_mindustry_gen_Building_trns_float_float,
	(void *) M_mindustry_gen_Building_x_float,
	(void *) M_mindustry_gen_Building_y_float,
	(void *) M_mindustry_gen_Building_damageArmorMult_float_float,
	(void *) M_mindustry_gen_Building_damageArmorMult_float_float_boolean,
	(void *) M_mindustry_gen_Building_damagePierce_float,
	(void *) M_mindustry_gen_Building_damagePierce_float_boolean,
	(void *) M_mindustry_gen_Building_healFract_float,
	(void *) M_mindustry_gen_Building_heal_float,
	(void *) M_mindustry_gen_Building_damaged_R_boolean,
	(void *) M_mindustry_gen_Building_dead_R_boolean,
	(void *) M_mindustry_gen_Building_health_R_float,
	(void *) M_mindustry_gen_Building_healthf_R_float,
	(void *) M_mindustry_gen_Building_hitTime_R_float,
	(void *) M_mindustry_gen_Building_maxHealth_R_float,
	(void *) M_mindustry_gen_Building_clampHealth,
	(void *) M_mindustry_gen_Building_damage_float,
	(void *) M_mindustry_gen_Building_damage_float_boolean,
	(void *) M_mindustry_gen_Building_damageContinuous_float,
	(void *) M_mindustry_gen_Building_damageContinuousArmorMult_float_float,
	(void *) M_mindustry_gen_Building_damageContinuousPierce_float,
	(void *) M_mindustry_gen_Building_dead_boolean,
	(void *) M_mindustry_gen_Building_heal,
	(void *) M_mindustry_gen_Building_health_float,
	(void *) M_mindustry_gen_Building_hitTime_float,
	(void *) M_mindustry_gen_Building_kill,
	(void *) M_mindustry_gen_Building_killed,
	(void *) M_mindustry_gen_Building_maxHealth_float,
	(void *) M_mindustry_gen_Building_inFogTo_mindustry_game_Team_R_boolean,
	(void *) M_mindustry_gen_Building_cheating_R_boolean,
	(void *) M_mindustry_gen_Building_team_R_mindustry_game_Team,
	(void *) M_mindustry_gen_Building_closestCore_R_mindustry_world_blocks_storage_CoreBlock$CoreBuild,
	(void *) M_mindustry_gen_Building_closestEnemyCore_R_mindustry_world_blocks_storage_CoreBlock$CoreBuild,
	(void *) M_mindustry_gen_Building_core_R_mindustry_world_blocks_storage_CoreBlock$CoreBuild,
	(void *) M_mindustry_gen_Building_team_mindustry_game_Team,
	(void *) M_mindustry_gen_Building_timer_R_arc_util_Interval,
	(void *) M_mindustry_gen_Building_timer_int_float_R_boolean,
	(void *) M_mindustry_gen_Building_timer_arc_util_Interval,
	(void *) M_mindustry_gen_Building_control_mindustry_logic_LAccess_double_double_double_double,
	(void *) M_mindustry_gen_Building_control_mindustry_logic_LAccess_java_lang_Object_double_double_double,
	(void *) M_mindustry_world_blocks_power_NuclearReactor$NuclearReactorBuild_sense_mindustry_logic_LAccess_R_double,
	(void *) M_mindustry_gen_Building_sense_mindustry_ctype_Content_R_double,
	(void *) M_mindustry_gen_Building_senseObject_mindustry_logic_LAccess_R_java_lang_Object,
	(void *) M_mindustry_gen_Building_setProp_mindustry_logic_LAccess_double,
	(void *) M_mindustry_gen_Building_setProp_mindustry_logic_LAccess_java_lang_Object,
	(void *) M_mindustry_gen_Building_setProp_mindustry_ctype_UnlockableContent_double,
	(void *) M_mindustry_ui_Displayable_displayable_R_boolean,
	(void *) M_mindustry_gen_Building_display_arc_scene_ui_layout_Table,
	(void *) M_mindustry_gen_Building_setIndex__build_int,
	(void *) M_mindustry_gen_Building_back_R_mindustry_gen_Building,
	(void *) M_mindustry_gen_Building_front_R_mindustry_gen_Building,
	(void *) M_mindustry_gen_Building_left_R_mindustry_gen_Building,
	(void *) M_mindustry_gen_Building_right_R_mindustry_gen_Building,
	(void *) M_mindustry_gen_Building_getCommandPosition_R_arc_math_geom_Vec2,
	(void *) M_mindustry_gen_Building_config_R_java_lang_Object,
	(void *) M_mindustry_gen_Building_getPayloads_R_mindustry_type_PayloadSeq,
	(void *) M_mindustry_gen_Building_findClosestEdge_arc_math_geom_Position_arc_func_Boolf_R_mindustry_world_Tile,
	(void *) M_mindustry_gen_Building_getPayload_R_mindustry_world_blocks_payloads_Payload,
	(void *) M_mindustry_gen_Building_takePayload_R_mindustry_world_blocks_payloads_Payload,
	(void *) M_mindustry_gen_Building_onRepaired,
	(void *) M_mindustry_gen_Building_placed,
	(void *) M_mindustry_gen_Building_playerPlaced_java_lang_Object,
	(void *) M_mindustry_world_blocks_power_NuclearReactor$NuclearReactorBuild_read_arc_util_io_Reads_byte,
	(void *) M_mindustry_gen_Building_create_mindustry_world_Block_mindustry_game_Team_R_mindustry_gen_Building,
	(void *) M_mindustry_gen_Building_getLiquidDestination_mindustry_gen_Building_mindustry_type_Liquid_R_mindustry_gen_Building,
	(void *) M_mindustry_gen_Building_init_mindustry_world_Tile_mindustry_game_Team_boolean_int_R_mindustry_gen_Building,
	(void *) M_mindustry_gen_Building_nearby_int_int_R_mindustry_gen_Building,
	(void *) M_mindustry_gen_Building_nearby_int_R_mindustry_gen_Building,
	(void *) M_mindustry_gen_Building_getCursor_R_arc_Graphics$Cursor,
	(void *) M_mindustry_gen_Building_getDisplayIcon_R_arc_graphics_g2d_TextureRegion,
	(void *) M_mindustry_gen_Building_getPowerConnections_arc_struct_Seq_R_arc_struct_Seq,
	(void *) M_mindustry_gen_Building_absorbLasers_R_boolean,
	(void *) M_mindustry_gen_Building_acceptItem_mindustry_gen_Building_mindustry_type_Item_R_boolean,
	(void *) M_mindustry_gen_Building_acceptLiquid_mindustry_gen_Building_mindustry_type_Liquid_R_boolean,
	(void *) M_mindustry_gen_Building_acceptPayload_mindustry_gen_Building_mindustry_world_blocks_payloads_Payload_R_boolean,
	(void *) M_mindustry_gen_Building_allowDeposit_R_boolean,
	(void *) M_mindustry_gen_Building_allowUpdate_R_boolean,
	(void *) M_mindustry_gen_Building_canBeReplaced_mindustry_world_Block_R_boolean,
	(void *) M_mindustry_gen_Building_canConsume_R_boolean,
	(void *) M_mindustry_gen_Building_canControlSelect_mindustry_gen_Unit_R_boolean,
	(void *) M_mindustry_gen_Building_canDump_mindustry_gen_Building_mindustry_type_Item_R_boolean,
	(void *) M_mindustry_gen_Building_canDumpLiquid_mindustry_gen_Building_mindustry_type_Liquid_R_boolean,
	(void *) M_mindustry_gen_Building_canPickup_R_boolean,
	(void *) M_mindustry_gen_Building_canResupply_R_boolean,
	(void *) M_mindustry_gen_Building_canUnload_R_boolean,
	(void *) M_mindustry_gen_Building_canWithdraw_R_boolean,
	(void *) M_mindustry_gen_Building_checkSolid_R_boolean,
	(void *) M_mindustry_gen_Building_checkSuppression_R_boolean,
	(void *) M_mindustry_gen_Building_collide_mindustry_gen_Bullet_R_boolean,
	(void *) M_mindustry_gen_Building_collision_mindustry_gen_Bullet_R_boolean,
	(void *) M_mindustry_gen_Building_conductsTo_mindustry_gen_Building_R_boolean,
	(void *) M_mindustry_gen_Building_configTapped_R_boolean,
	(void *) M_mindustry_gen_Building_consumeTriggerValid_R_boolean,
	(void *) M_mindustry_gen_Building_dump_R_boolean,
	(void *) M_mindustry_gen_Building_dump_mindustry_type_Item_R_boolean,
	(void *) M_mindustry_gen_Building_dumpAccumulate_R_boolean,
	(void *) M_mindustry_gen_Building_dumpAccumulate_mindustry_type_Item_R_boolean,
	(void *) M_mindustry_gen_Building_dumpPayload_mindustry_world_blocks_payloads_Payload_R_boolean,
	(void *) M_mindustry_gen_Building_inMapArea_R_boolean,
	(void *) M_mindustry_gen_Building_interactable_mindustry_game_Team_R_boolean,
	(void *) M_mindustry_gen_Building_isCommandable_R_boolean,
	(void *) M_mindustry_gen_Building_isDiscovered_mindustry_game_Team_R_boolean,
	(void *) M_mindustry_gen_Building_isHealSuppressed_R_boolean,
	(void *) M_mindustry_gen_Building_isInsulated_R_boolean,
	(void *) M_mindustry_gen_Building_isPayload_R_boolean,
	(void *) M_mindustry_gen_Building_moveForward_mindustry_type_Item_R_boolean,
	(void *) M_mindustry_gen_Building_movePayload_mindustry_world_blocks_payloads_Payload_R_boolean,
	(void *) M_mindustry_gen_Building_onConfigureBuildTapped_mindustry_gen_Building_R_boolean,
	(void *) M_mindustry_gen_Building_onConfigureTapped_float_float_R_boolean,
	(void *) M_mindustry_gen_Building_payloadCheck_int_R_boolean,
	(void *) M_mindustry_gen_Building_productionValid_R_boolean,
	(void *) M_mindustry_gen_Building_put_mindustry_type_Item_R_boolean,
	(void *) M_mindustry_gen_Building_shouldConsume_R_boolean,
	(void *) M_mindustry_gen_Building_shouldHideConfigure_mindustry_gen_Player_R_boolean,
	(void *) M_mindustry_gen_Building_shouldShowConfigure_mindustry_gen_Player_R_boolean,
	(void *) M_mindustry_gen_Building_wasRecentlyDamaged_R_boolean,
	(void *) M_mindustry_gen_Building_wasRecentlyHealed_float_R_boolean,
	(void *) M_mindustry_gen_Building_relativeTo_mindustry_gen_Building_R_byte,
	(void *) M_mindustry_gen_Building_relativeTo_int_int_R_byte,
	(void *) M_mindustry_gen_Building_relativeTo_mindustry_world_Tile_R_byte,
	(void *) M_mindustry_gen_Building_relativeToEdge_mindustry_world_Tile_R_byte,
	(void *) M_mindustry_world_blocks_power_PowerGenerator$GeneratorBuild_version_R_byte,
	(void *) M_mindustry_world_blocks_power_PowerGenerator$GeneratorBuild_ambientVolume_R_float,
	(void *) M_mindustry_gen_Building_calculateHeat_Array1_float_R_float,
	(void *) M_mindustry_gen_Building_calculateHeat_Array1_float_arc_struct_IntSet_R_float,
	(void *) M_mindustry_gen_Building_delta_R_float,
	(void *) M_mindustry_gen_Building_drawrot_R_float,
	(void *) M_mindustry_gen_Building_edelta_R_float,
	(void *) M_mindustry_gen_Building_efficiencyScale_R_float,
	(void *) M_mindustry_gen_Building_fogRadius_R_float,
	(void *) M_mindustry_gen_Building_getDisplayEfficiency_R_float,
	(void *) M_mindustry_world_blocks_power_PowerGenerator$GeneratorBuild_getPowerProduction_R_float,
	(void *) M_mindustry_gen_Building_getProgressIncrease_float_R_float,
	(void *) M_mindustry_gen_Building_handleDamage_float_R_float,
	(void *) M_mindustry_gen_Building_moveLiquid_mindustry_gen_Building_mindustry_type_Liquid_R_float,
	(void *) M_mindustry_gen_Building_moveLiquidForward_boolean_mindustry_type_Liquid_R_float,
	(void *) M_mindustry_gen_Building_progress_R_float,
	(void *) M_mindustry_gen_Building_rotdeg_R_float,
	(void *) M_mindustry_gen_Building_timeScale_R_float,
	(void *) M_mindustry_gen_Building_totalProgress_R_float,
	(void *) M_mindustry_world_blocks_power_PowerGenerator$GeneratorBuild_warmup_R_float,
	(void *) M_mindustry_gen_Building_acceptStack_mindustry_type_Item_int_mindustry_gen_Teamc_R_int,
	(void *) M_mindustry_gen_Building_explosionItemCap_R_int,
	(void *) M_mindustry_gen_Building_getMaximumAccepted_mindustry_type_Item_R_int,
	(void *) M_mindustry_gen_Building_moduleBitmask_R_int,
	(void *) M_mindustry_gen_Building_pos_R_int,
	(void *) M_mindustry_gen_Building_removeStack_mindustry_type_Item_int_R_int,
	(void *) M_mindustry_gen_Building_getDisplayName_R_java_lang_String,
	(void *) M_mindustry_gen_Building_floor_R_mindustry_world_blocks_environment_Floor,
	(void *) M_mindustry_gen_Building_status_R_mindustry_world_meta_BlockStatus,
	(void *) M_mindustry_gen_Building_flowItems_R_mindustry_world_modules_ItemModule,
	(void *) M_mindustry_gen_Building_addPlan_boolean,
	(void *) M_mindustry_gen_Building_addPlan_boolean_boolean,
	(void *) M_mindustry_gen_Building_afterDestroyed,
	(void *) M_mindustry_gen_Building_afterPickedUp,
	(void *) M_mindustry_gen_Building_applyBoost_float_float,
	(void *) M_mindustry_gen_Building_applyHealSuppression_float,
	(void *) M_mindustry_gen_Building_applyHealSuppression_float_arc_graphics_Color,
	(void *) M_mindustry_gen_Building_applySlowdown_float_float,
	(void *) M_mindustry_gen_Building_buildConfiguration_arc_scene_ui_layout_Table,
	(void *) M_mindustry_gen_Building_changeTeam_mindustry_game_Team,
	(void *) M_mindustry_gen_Building_changeTeam_mindustry_game_Team_boolean,
	(void *) M_mindustry_gen_Building_checkAllowUpdate,
	(void *) M_mindustry_gen_Building_configure_java_lang_Object,
	(void *) M_mindustry_gen_Building_configureAny_java_lang_Object,
	(void *) M_mindustry_gen_Building_configured_mindustry_gen_Unit_java_lang_Object,
	(void *) M_mindustry_gen_Building_consume,
	(void *) M_mindustry_gen_Building_created,
	(void *) M_mindustry_gen_Building_damage_mindustry_gen_Bullet_mindustry_game_Team_float,
	(void *) M_mindustry_gen_Building_damage_mindustry_game_Team_float,
	(void *) M_mindustry_gen_Building_deselect,
	(void *) M_mindustry_gen_Building_displayBars_arc_scene_ui_layout_Table,
	(void *) M_mindustry_gen_Building_displayConsumption_arc_scene_ui_layout_Table,
	(void *) M_mindustry_world_blocks_power_NuclearReactor$NuclearReactorBuild_draw,
	(void *) M_mindustry_gen_Building_drawCached,
	(void *) M_mindustry_gen_Building_drawConfigure,
	(void *) M_mindustry_gen_Building_drawCracks,
	(void *) M_mindustry_gen_Building_drawDisabled,
	(void *) M_mindustry_gen_Building_drawItemSelection_mindustry_ctype_UnlockableContent,
	(void *) M_mindustry_world_blocks_power_NuclearReactor$NuclearReactorBuild_drawLight,
	(void *) M_mindustry_gen_Building_drawLiquidLight_mindustry_type_Liquid_float,
	(void *) M_mindustry_gen_Building_drawSelect,
	(void *) M_mindustry_gen_Building_drawStatus,
	(void *) M_mindustry_gen_Building_drawTeam,
	(void *) M_mindustry_gen_Building_drawTeamTop,
	(void *) M_mindustry_gen_Building_dropped,
	(void *) M_mindustry_gen_Building_dumpLiquid_mindustry_type_Liquid,
	(void *) M_mindustry_gen_Building_dumpLiquid_mindustry_type_Liquid_float,
	(void *) M_mindustry_gen_Building_dumpLiquid_mindustry_type_Liquid_float_int,
	(void *) M_mindustry_gen_Building_eachEdge_arc_func_Cons,
	(void *) M_mindustry_gen_Building_getStackOffset_mindustry_type_Item_arc_math_geom_Vec2,
	(void *) M_mindustry_gen_Building_handleItem_mindustry_gen_Building_mindustry_type_Item,
	(void *) M_mindustry_gen_Building_handleLiquid_mindustry_gen_Building_mindustry_type_Liquid_float,
	(void *) M_mindustry_gen_Building_handlePayload_mindustry_gen_Building_mindustry_world_blocks_payloads_Payload,
	(void *) M_mindustry_gen_Building_handleStack_mindustry_type_Item_int_mindustry_gen_Teamc,
	(void *) M_mindustry_gen_Building_handleString_java_lang_Object,
	(void *) M_mindustry_gen_Building_handleUnitPayload_mindustry_gen_Unit_arc_func_Cons,
	(void *) M_mindustry_gen_Building_healthChanged,
	(void *) M_mindustry_gen_Building_incrementDump_int,
	(void *) M_mindustry_gen_Building_itemTaken_mindustry_type_Item,
	(void *) M_mindustry_gen_Building_noSleep,
	(void *) M_mindustry_gen_Building_offload_mindustry_type_Item,
	(void *) M_mindustry_gen_Building_onCommand_arc_math_geom_Vec2,
	(void *) M_mindustry_gen_Building_onConfigureClosed,
	(void *) M_mindustry_gen_Building_onControlSelect_mindustry_gen_Unit,
	(void *) M_mindustry_gen_Building_onDeconstructed_mindustry_gen_Unit,
	(void *) M_mindustry_world_blocks_power_PowerGenerator$GeneratorBuild_onDestroyed,
	(void *) M_mindustry_gen_Building_onNearbyBuildAdded_mindustry_gen_Building,
	(void *) M_mindustry_gen_Building_onProximityAdded,
	(void *) M_mindustry_gen_Building_onProximityRemoved,
	(void *) M_mindustry_gen_Building_onProximityUpdate,
	(void *) M_mindustry_gen_Building_onRemoved,
	(void *) M_mindustry_gen_Building_overwrote_arc_struct_Seq,
	(void *) M_mindustry_gen_Building_payloadDraw,
	(void *) M_mindustry_gen_Building_pickedUp,
	(void *) M_mindustry_gen_Building_playDestroySound,
	(void *) M_mindustry_gen_Building_powerGraphRemoved,
	(void *) M_mindustry_gen_Building_produced_mindustry_type_Item,
	(void *) M_mindustry_gen_Building_produced_mindustry_type_Item_int,
	(void *) M_mindustry_gen_Building_puddleOn_mindustry_gen_Puddle,
	(void *) M_mindustry_gen_Building_readAll_arc_util_io_Reads_byte,
	(void *) M_mindustry_gen_Building_readBase_arc_util_io_Reads,
	(void *) M_mindustry_gen_Building_readSync_arc_util_io_Reads_byte,
	(void *) M_mindustry_gen_Building_recache,
	(void *) M_mindustry_gen_Building_recentlyHealed,
	(void *) M_mindustry_gen_Building_removeFromProximity,
	(void *) M_mindustry_gen_Building_sleep,
	(void *) M_mindustry_gen_Building_splashLiquid_mindustry_type_Liquid_float,
	(void *) M_mindustry_gen_Building_tapped,
	(void *) M_mindustry_gen_Building_transferLiquid_mindustry_gen_Building_float_mindustry_type_Liquid,
	(void *) M_mindustry_gen_Building_unitOn_mindustry_gen_Unit,
	(void *) M_mindustry_gen_Building_unitOnAny_mindustry_gen_Unit,
	(void *) M_mindustry_gen_Building_unitRemoved_mindustry_gen_Unit,
	(void *) M_mindustry_gen_Building_updateConsumption,
	(void *) M_mindustry_gen_Building_updateEfficiencyMultiplier,
	(void *) M_mindustry_gen_Building_updateFogVisibility,
	(void *) M_mindustry_gen_Building_updateLastAccess_mindustry_gen_Player,
	(void *) M_mindustry_gen_Building_updatePayload_mindustry_gen_Unit_mindustry_gen_Building,
	(void *) M_mindustry_gen_Building_updatePowerGraph,
	(void *) M_mindustry_gen_Building_updateProximity,
	(void *) M_mindustry_gen_Building_updateTableAlign_arc_scene_ui_layout_Table,
	(void *) M_mindustry_world_blocks_power_NuclearReactor$NuclearReactorBuild_updateTile,
	(void *) M_mindustry_gen_Building_writeAll_arc_util_io_Writes,
	(void *) M_mindustry_gen_Building_writeBase_arc_util_io_Writes,
	(void *) M_mindustry_gen_Building_writeSync_arc_util_io_Writes,
	(void *) M_mindustry_gen_Building_lambda$splashLiquid$0_mindustry_type_Liquid_float,
	(void *) M_mindustry_gen_Building_lambda$onDeconstructed$0_float_mindustry_world_Tile,
	(void *) M_mindustry_gen_Building_lambda$display$6_java_lang_String_arc_scene_ui_layout_Table,
	(void *) M_mindustry_gen_Building_lambda$display$9_arc_struct_Bits_java_lang_Runnable,
	(void *) M_mindustry_gen_Building_lambda$display$7_arc_scene_ui_layout_Table_java_lang_String,
	(void *) M_mindustry_gen_Building_lambda$display$8_mindustry_type_Liquid_java_lang_String_R_java_lang_CharSequence,
	(void *) M_mindustry_gen_Building_lambda$display$1_arc_scene_ui_layout_Table,
	(void *) M_mindustry_gen_Building_lambda$display$0_arc_scene_ui_layout_Table,
	(void *) M_mindustry_gen_Building_lambda$placed$0_mindustry_gen_Building,
	(void *) M_mindustry_world_blocks_power_NuclearReactor$NuclearReactorBuild_shouldExplode_R_boolean,
	(void *) M_mindustry_world_blocks_power_PowerGenerator$GeneratorBuild_createExplosion,
	(void *) M_mindustry_world_blocks_power_PowerGenerator$GeneratorBuild_onExplosion,
	(void *) M_mindustry_world_blocks_power_PowerGenerator$GeneratorBuild_lambda$onExplosion$0_int_int,
	(void *) M_mindustry_world_blocks_power_NuclearReactor$NuclearReactorBuild_heat_R_float,
	(void *) M_mindustry_world_blocks_power_NuclearReactor$NuclearReactorBuild_heatFrac_R_float,
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
	{ "hitbox", "(Larc/math/geom/Rect;)V" },
	{ "getX", "()F" },
	{ "getY", "()F" },
	{ "angleTo", "(Larc/math/geom/Position;)F" },
	{ "angleTo", "(FF)F" },
	{ "dst2", "(Larc/math/geom/Position;)F" },
	{ "dst", "(Larc/math/geom/Position;)F" },
	{ "dst", "(FF)F" },
	{ "dst2", "(FF)F" },
	{ "within", "(Larc/math/geom/Position;F)Z" },
	{ "within", "(FFF)Z" },
	{ "isValid", "()Z" },
	{ "shouldAmbientSound", "()Z" },
	{ "getAmbientVolume", "()F" },
	{ "getAmbientSound", "()Larc/audio/Sound;" },
	{ "hitSize", "()F" },
	{ "self", "()Lmindustry/gen/Entityc;" },
	{ "as", "()Ljava/lang/Object;" },
	{ "isAdded", "()Z" },
	{ "isLocal", "()Z" },
	{ "isRemote", "()Z" },
	{ "serialize", "()Z" },
	{ "classId", "()I" },
	{ "id", "()I" },
	{ "add", "()V" },
	{ "afterRead", "()V" },
	{ "afterReadAll", "()V" },
	{ "beforeWrite", "()V" },
	{ "id", "(I)V" },
	{ "read", "(Larc/util/io/Reads;)V" },
	{ "remove", "()V" },
	{ "update", "()V" },
	{ "write", "(Larc/util/io/Writes;)V" },
	{ "floorOn", "()Lmindustry/world/blocks/environment/Floor;" },
	{ "buildOn", "()Lmindustry/gen/Building;" },
	{ "onSolid", "()Z" },
	{ "x", "()F" },
	{ "y", "()F" },
	{ "tileX", "()I" },
	{ "tileY", "()I" },
	{ "blockOn", "()Lmindustry/world/Block;" },
	{ "tileOn", "()Lmindustry/world/Tile;" },
	{ "set", "(Larc/math/geom/Position;)V" },
	{ "set", "(FF)V" },
	{ "trns", "(Larc/math/geom/Position;)V" },
	{ "trns", "(FF)V" },
	{ "x", "(F)V" },
	{ "y", "(F)V" },
	{ "damageArmorMult", "(FF)V" },
	{ "damageArmorMult", "(FFZ)V" },
	{ "damagePierce", "(F)V" },
	{ "damagePierce", "(FZ)V" },
	{ "healFract", "(F)V" },
	{ "heal", "(F)V" },
	{ "damaged", "()Z" },
	{ "dead", "()Z" },
	{ "health", "()F" },
	{ "healthf", "()F" },
	{ "hitTime", "()F" },
	{ "maxHealth", "()F" },
	{ "clampHealth", "()V" },
	{ "damage", "(F)V" },
	{ "damage", "(FZ)V" },
	{ "damageContinuous", "(F)V" },
	{ "damageContinuousArmorMult", "(FF)V" },
	{ "damageContinuousPierce", "(F)V" },
	{ "dead", "(Z)V" },
	{ "heal", "()V" },
	{ "health", "(F)V" },
	{ "hitTime", "(F)V" },
	{ "kill", "()V" },
	{ "killed", "()V" },
	{ "maxHealth", "(F)V" },
	{ "inFogTo", "(Lmindustry/game/Team;)Z" },
	{ "cheating", "()Z" },
	{ "team", "()Lmindustry/game/Team;" },
	{ "closestCore", "()Lmindustry/world/blocks/storage/CoreBlock$CoreBuild;" },
	{ "closestEnemyCore", "()Lmindustry/world/blocks/storage/CoreBlock$CoreBuild;" },
	{ "core", "()Lmindustry/world/blocks/storage/CoreBlock$CoreBuild;" },
	{ "team", "(Lmindustry/game/Team;)V" },
	{ "timer", "()Larc/util/Interval;" },
	{ "timer", "(IF)Z" },
	{ "timer", "(Larc/util/Interval;)V" },
	{ "control", "(Lmindustry/logic/LAccess;DDDD)V" },
	{ "control", "(Lmindustry/logic/LAccess;Ljava/lang/Object;DDD)V" },
	{ "sense", "(Lmindustry/logic/LAccess;)D" },
	{ "sense", "(Lmindustry/ctype/Content;)D" },
	{ "senseObject", "(Lmindustry/logic/LAccess;)Ljava/lang/Object;" },
	{ "setProp", "(Lmindustry/logic/LAccess;D)V" },
	{ "setProp", "(Lmindustry/logic/LAccess;Ljava/lang/Object;)V" },
	{ "setProp", "(Lmindustry/ctype/UnlockableContent;D)V" },
	{ "displayable", "()Z" },
	{ "display", "(Larc/scene/ui/layout/Table;)V" },
	{ "setIndex__build", "(I)V" },
	{ "back", "()Lmindustry/gen/Building;" },
	{ "front", "()Lmindustry/gen/Building;" },
	{ "left", "()Lmindustry/gen/Building;" },
	{ "right", "()Lmindustry/gen/Building;" },
	{ "getCommandPosition", "()Larc/math/geom/Vec2;" },
	{ "config", "()Ljava/lang/Object;" },
	{ "getPayloads", "()Lmindustry/type/PayloadSeq;" },
	{ "findClosestEdge", "(Larc/math/geom/Position;Larc/func/Boolf;)Lmindustry/world/Tile;" },
	{ "getPayload", "()Lmindustry/world/blocks/payloads/Payload;" },
	{ "takePayload", "()Lmindustry/world/blocks/payloads/Payload;" },
	{ "onRepaired", "()V" },
	{ "placed", "()V" },
	{ "playerPlaced", "(Ljava/lang/Object;)V" },
	{ "read", "(Larc/util/io/Reads;B)V" },
	{ "create", "(Lmindustry/world/Block;Lmindustry/game/Team;)Lmindustry/gen/Building;" },
	{ "getLiquidDestination", "(Lmindustry/gen/Building;Lmindustry/type/Liquid;)Lmindustry/gen/Building;" },
	{ "init", "(Lmindustry/world/Tile;Lmindustry/game/Team;ZI)Lmindustry/gen/Building;" },
	{ "nearby", "(II)Lmindustry/gen/Building;" },
	{ "nearby", "(I)Lmindustry/gen/Building;" },
	{ "getCursor", "()Larc/Graphics$Cursor;" },
	{ "getDisplayIcon", "()Larc/graphics/g2d/TextureRegion;" },
	{ "getPowerConnections", "(Larc/struct/Seq;)Larc/struct/Seq;" },
	{ "absorbLasers", "()Z" },
	{ "acceptItem", "(Lmindustry/gen/Building;Lmindustry/type/Item;)Z" },
	{ "acceptLiquid", "(Lmindustry/gen/Building;Lmindustry/type/Liquid;)Z" },
	{ "acceptPayload", "(Lmindustry/gen/Building;Lmindustry/world/blocks/payloads/Payload;)Z" },
	{ "allowDeposit", "()Z" },
	{ "allowUpdate", "()Z" },
	{ "canBeReplaced", "(Lmindustry/world/Block;)Z" },
	{ "canConsume", "()Z" },
	{ "canControlSelect", "(Lmindustry/gen/Unit;)Z" },
	{ "canDump", "(Lmindustry/gen/Building;Lmindustry/type/Item;)Z" },
	{ "canDumpLiquid", "(Lmindustry/gen/Building;Lmindustry/type/Liquid;)Z" },
	{ "canPickup", "()Z" },
	{ "canResupply", "()Z" },
	{ "canUnload", "()Z" },
	{ "canWithdraw", "()Z" },
	{ "checkSolid", "()Z" },
	{ "checkSuppression", "()Z" },
	{ "collide", "(Lmindustry/gen/Bullet;)Z" },
	{ "collision", "(Lmindustry/gen/Bullet;)Z" },
	{ "conductsTo", "(Lmindustry/gen/Building;)Z" },
	{ "configTapped", "()Z" },
	{ "consumeTriggerValid", "()Z" },
	{ "dump", "()Z" },
	{ "dump", "(Lmindustry/type/Item;)Z" },
	{ "dumpAccumulate", "()Z" },
	{ "dumpAccumulate", "(Lmindustry/type/Item;)Z" },
	{ "dumpPayload", "(Lmindustry/world/blocks/payloads/Payload;)Z" },
	{ "inMapArea", "()Z" },
	{ "interactable", "(Lmindustry/game/Team;)Z" },
	{ "isCommandable", "()Z" },
	{ "isDiscovered", "(Lmindustry/game/Team;)Z" },
	{ "isHealSuppressed", "()Z" },
	{ "isInsulated", "()Z" },
	{ "isPayload", "()Z" },
	{ "moveForward", "(Lmindustry/type/Item;)Z" },
	{ "movePayload", "(Lmindustry/world/blocks/payloads/Payload;)Z" },
	{ "onConfigureBuildTapped", "(Lmindustry/gen/Building;)Z" },
	{ "onConfigureTapped", "(FF)Z" },
	{ "payloadCheck", "(I)Z" },
	{ "productionValid", "()Z" },
	{ "put", "(Lmindustry/type/Item;)Z" },
	{ "shouldConsume", "()Z" },
	{ "shouldHideConfigure", "(Lmindustry/gen/Player;)Z" },
	{ "shouldShowConfigure", "(Lmindustry/gen/Player;)Z" },
	{ "wasRecentlyDamaged", "()Z" },
	{ "wasRecentlyHealed", "(F)Z" },
	{ "relativeTo", "(Lmindustry/gen/Building;)B" },
	{ "relativeTo", "(II)B" },
	{ "relativeTo", "(Lmindustry/world/Tile;)B" },
	{ "relativeToEdge", "(Lmindustry/world/Tile;)B" },
	{ "version", "()B" },
	{ "ambientVolume", "()F" },
	{ "calculateHeat", "([F)F" },
	{ "calculateHeat", "([FLarc/struct/IntSet;)F" },
	{ "delta", "()F" },
	{ "drawrot", "()F" },
	{ "edelta", "()F" },
	{ "efficiencyScale", "()F" },
	{ "fogRadius", "()F" },
	{ "getDisplayEfficiency", "()F" },
	{ "getPowerProduction", "()F" },
	{ "getProgressIncrease", "(F)F" },
	{ "handleDamage", "(F)F" },
	{ "moveLiquid", "(Lmindustry/gen/Building;Lmindustry/type/Liquid;)F" },
	{ "moveLiquidForward", "(ZLmindustry/type/Liquid;)F" },
	{ "progress", "()F" },
	{ "rotdeg", "()F" },
	{ "timeScale", "()F" },
	{ "totalProgress", "()F" },
	{ "warmup", "()F" },
	{ "acceptStack", "(Lmindustry/type/Item;ILmindustry/gen/Teamc;)I" },
	{ "explosionItemCap", "()I" },
	{ "getMaximumAccepted", "(Lmindustry/type/Item;)I" },
	{ "moduleBitmask", "()I" },
	{ "pos", "()I" },
	{ "removeStack", "(Lmindustry/type/Item;I)I" },
	{ "getDisplayName", "()Ljava/lang/String;" },
	{ "floor", "()Lmindustry/world/blocks/environment/Floor;" },
	{ "status", "()Lmindustry/world/meta/BlockStatus;" },
	{ "flowItems", "()Lmindustry/world/modules/ItemModule;" },
	{ "addPlan", "(Z)V" },
	{ "addPlan", "(ZZ)V" },
	{ "afterDestroyed", "()V" },
	{ "afterPickedUp", "()V" },
	{ "applyBoost", "(FF)V" },
	{ "applyHealSuppression", "(F)V" },
	{ "applyHealSuppression", "(FLarc/graphics/Color;)V" },
	{ "applySlowdown", "(FF)V" },
	{ "buildConfiguration", "(Larc/scene/ui/layout/Table;)V" },
	{ "changeTeam", "(Lmindustry/game/Team;)V" },
	{ "changeTeam", "(Lmindustry/game/Team;Z)V" },
	{ "checkAllowUpdate", "()V" },
	{ "configure", "(Ljava/lang/Object;)V" },
	{ "configureAny", "(Ljava/lang/Object;)V" },
	{ "configured", "(Lmindustry/gen/Unit;Ljava/lang/Object;)V" },
	{ "consume", "()V" },
	{ "created", "()V" },
	{ "damage", "(Lmindustry/gen/Bullet;Lmindustry/game/Team;F)V" },
	{ "damage", "(Lmindustry/game/Team;F)V" },
	{ "deselect", "()V" },
	{ "displayBars", "(Larc/scene/ui/layout/Table;)V" },
	{ "displayConsumption", "(Larc/scene/ui/layout/Table;)V" },
	{ "draw", "()V" },
	{ "drawCached", "()V" },
	{ "drawConfigure", "()V" },
	{ "drawCracks", "()V" },
	{ "drawDisabled", "()V" },
	{ "drawItemSelection", "(Lmindustry/ctype/UnlockableContent;)V" },
	{ "drawLight", "()V" },
	{ "drawLiquidLight", "(Lmindustry/type/Liquid;F)V" },
	{ "drawSelect", "()V" },
	{ "drawStatus", "()V" },
	{ "drawTeam", "()V" },
	{ "drawTeamTop", "()V" },
	{ "dropped", "()V" },
	{ "dumpLiquid", "(Lmindustry/type/Liquid;)V" },
	{ "dumpLiquid", "(Lmindustry/type/Liquid;F)V" },
	{ "dumpLiquid", "(Lmindustry/type/Liquid;FI)V" },
	{ "eachEdge", "(Larc/func/Cons;)V" },
	{ "getStackOffset", "(Lmindustry/type/Item;Larc/math/geom/Vec2;)V" },
	{ "handleItem", "(Lmindustry/gen/Building;Lmindustry/type/Item;)V" },
	{ "handleLiquid", "(Lmindustry/gen/Building;Lmindustry/type/Liquid;F)V" },
	{ "handlePayload", "(Lmindustry/gen/Building;Lmindustry/world/blocks/payloads/Payload;)V" },
	{ "handleStack", "(Lmindustry/type/Item;ILmindustry/gen/Teamc;)V" },
	{ "handleString", "(Ljava/lang/Object;)V" },
	{ "handleUnitPayload", "(Lmindustry/gen/Unit;Larc/func/Cons;)V" },
	{ "healthChanged", "()V" },
	{ "incrementDump", "(I)V" },
	{ "itemTaken", "(Lmindustry/type/Item;)V" },
	{ "noSleep", "()V" },
	{ "offload", "(Lmindustry/type/Item;)V" },
	{ "onCommand", "(Larc/math/geom/Vec2;)V" },
	{ "onConfigureClosed", "()V" },
	{ "onControlSelect", "(Lmindustry/gen/Unit;)V" },
	{ "onDeconstructed", "(Lmindustry/gen/Unit;)V" },
	{ "onDestroyed", "()V" },
	{ "onNearbyBuildAdded", "(Lmindustry/gen/Building;)V" },
	{ "onProximityAdded", "()V" },
	{ "onProximityRemoved", "()V" },
	{ "onProximityUpdate", "()V" },
	{ "onRemoved", "()V" },
	{ "overwrote", "(Larc/struct/Seq;)V" },
	{ "payloadDraw", "()V" },
	{ "pickedUp", "()V" },
	{ "playDestroySound", "()V" },
	{ "powerGraphRemoved", "()V" },
	{ "produced", "(Lmindustry/type/Item;)V" },
	{ "produced", "(Lmindustry/type/Item;I)V" },
	{ "puddleOn", "(Lmindustry/gen/Puddle;)V" },
	{ "readAll", "(Larc/util/io/Reads;B)V" },
	{ "readBase", "(Larc/util/io/Reads;)V" },
	{ "readSync", "(Larc/util/io/Reads;B)V" },
	{ "recache", "()V" },
	{ "recentlyHealed", "()V" },
	{ "removeFromProximity", "()V" },
	{ "sleep", "()V" },
	{ "splashLiquid", "(Lmindustry/type/Liquid;F)V" },
	{ "tapped", "()V" },
	{ "transferLiquid", "(Lmindustry/gen/Building;FLmindustry/type/Liquid;)V" },
	{ "unitOn", "(Lmindustry/gen/Unit;)V" },
	{ "unitOnAny", "(Lmindustry/gen/Unit;)V" },
	{ "unitRemoved", "(Lmindustry/gen/Unit;)V" },
	{ "updateConsumption", "()V" },
	{ "updateEfficiencyMultiplier", "()V" },
	{ "updateFogVisibility", "()V" },
	{ "updateLastAccess", "(Lmindustry/gen/Player;)V" },
	{ "updatePayload", "(Lmindustry/gen/Unit;Lmindustry/gen/Building;)V" },
	{ "updatePowerGraph", "()V" },
	{ "updateProximity", "()V" },
	{ "updateTableAlign", "(Larc/scene/ui/layout/Table;)V" },
	{ "updateTile", "()V" },
	{ "writeAll", "(Larc/util/io/Writes;)V" },
	{ "writeBase", "(Larc/util/io/Writes;)V" },
	{ "writeSync", "(Larc/util/io/Writes;)V" },
	{ "lambda$splashLiquid$0", "(Lmindustry/type/Liquid;F)V" },
	{ "lambda$onDeconstructed$0", "(FLmindustry/world/Tile;)V" },
	{ "lambda$display$6", "(Ljava/lang/String;Larc/scene/ui/layout/Table;)V" },
	{ "lambda$display$9", "(Larc/struct/Bits;Ljava/lang/Runnable;)V" },
	{ "lambda$display$7", "(Larc/scene/ui/layout/Table;Ljava/lang/String;)V" },
	{ "lambda$display$8", "(Lmindustry/type/Liquid;Ljava/lang/String;)Ljava/lang/CharSequence;" },
	{ "lambda$display$1", "(Larc/scene/ui/layout/Table;)V" },
	{ "lambda$display$0", "(Larc/scene/ui/layout/Table;)V" },
	{ "lambda$placed$0", "(Lmindustry/gen/Building;)V" },
	{ "shouldExplode", "()Z" },
	{ "createExplosion", "()V" },
	{ "onExplosion", "()V" },
	{ "lambda$onExplosion$0", "(II)V" },
	{ "heat", "()F" },
	{ "heatFrac", "()F" },
};

static jclass interfaces[] { &class_mindustry_world_blocks_heat_HeatBlock, };

static FieldMetadata fields[] {
	{ "heat", &class_float, offsetof(mindustry_world_blocks_power_NuclearReactor$NuclearReactorBuild, F_heat), "F", 1 },
	{ "heatLastFrame", &class_float, offsetof(mindustry_world_blocks_power_NuclearReactor$NuclearReactorBuild, F_heatLastFrame), "F", 1 },
	{ "heatProgress", &class_float, offsetof(mindustry_world_blocks_power_NuclearReactor$NuclearReactorBuild, F_heatProgress), "F", 1 },
	{ "flash", &class_float, offsetof(mindustry_world_blocks_power_NuclearReactor$NuclearReactorBuild, F_flash), "F", 1 },
	{ "smoothLight", &class_float, offsetof(mindustry_world_blocks_power_NuclearReactor$NuclearReactorBuild, F_smoothLight), "F", 1 },
	{ "this$0", &class_mindustry_world_blocks_power_NuclearReactor, offsetof(mindustry_world_blocks_power_NuclearReactor$NuclearReactorBuild, F_this$0), "Lmindustry/world/blocks/power/NuclearReactor;", 4112 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_mindustry_world_blocks_power_NuclearReactor$NuclearReactorBuild_mindustry_world_blocks_power_NuclearReactor, 0, "(Lmindustry/world/blocks/power/NuclearReactor;)V", 1 },
	{ "updateTile", (intptr_t) M_mindustry_world_blocks_power_NuclearReactor$NuclearReactorBuild_updateTile, VTABLE_mindustry_world_blocks_power_NuclearReactor$NuclearReactorBuild_updateTile, "()V", 1 },
	{ "heatFrac", (intptr_t) M_mindustry_world_blocks_power_NuclearReactor$NuclearReactorBuild_heatFrac_R_float, VTABLE_mindustry_world_blocks_power_NuclearReactor$NuclearReactorBuild_heatFrac_R_float, "()F", 1 },
	{ "heat", (intptr_t) M_mindustry_world_blocks_power_NuclearReactor$NuclearReactorBuild_heat_R_float, VTABLE_mindustry_world_blocks_power_NuclearReactor$NuclearReactorBuild_heat_R_float, "()F", 1 },
	{ "sense", (intptr_t) M_mindustry_world_blocks_power_NuclearReactor$NuclearReactorBuild_sense_mindustry_logic_LAccess_R_double, VTABLE_mindustry_world_blocks_power_NuclearReactor$NuclearReactorBuild_sense_mindustry_logic_LAccess_R_double, "(Lmindustry/logic/LAccess;)D", 1 },
	{ "shouldExplode", (intptr_t) M_mindustry_world_blocks_power_NuclearReactor$NuclearReactorBuild_shouldExplode_R_boolean, VTABLE_mindustry_world_blocks_power_NuclearReactor$NuclearReactorBuild_shouldExplode_R_boolean, "()Z", 1 },
	{ "drawLight", (intptr_t) M_mindustry_world_blocks_power_NuclearReactor$NuclearReactorBuild_drawLight, VTABLE_mindustry_world_blocks_power_NuclearReactor$NuclearReactorBuild_drawLight, "()V", 1 },
	{ "draw", (intptr_t) M_mindustry_world_blocks_power_NuclearReactor$NuclearReactorBuild_draw, VTABLE_mindustry_world_blocks_power_NuclearReactor$NuclearReactorBuild_draw, "()V", 1 },
	{ "write", (intptr_t) M_mindustry_world_blocks_power_NuclearReactor$NuclearReactorBuild_write_arc_util_io_Writes, VTABLE_mindustry_world_blocks_power_NuclearReactor$NuclearReactorBuild_write_arc_util_io_Writes, "(Larc/util/io/Writes;)V", 1 },
	{ "read", (intptr_t) M_mindustry_world_blocks_power_NuclearReactor$NuclearReactorBuild_read_arc_util_io_Reads_byte, VTABLE_mindustry_world_blocks_power_NuclearReactor$NuclearReactorBuild_read_arc_util_io_Reads_byte, "(Larc/util/io/Reads;B)V", 1 },
};

Class class_mindustry_world_blocks_power_NuclearReactor$NuclearReactorBuild{
		.nativeName = (intptr_t) "mindustry/world/blocks/power/NuclearReactor$NuclearReactorBuild",
		.parentClass = (intptr_t) &class_mindustry_world_blocks_power_PowerGenerator$GeneratorBuild,
		.size = sizeof(mindustry_world_blocks_power_NuclearReactor$NuclearReactorBuild),
		.classVtable = (intptr_t) vtable_mindustry_world_blocks_power_NuclearReactor$NuclearReactorBuild,
		.staticInitializer = (intptr_t) clinit_mindustry_world_blocks_power_NuclearReactor$NuclearReactorBuild,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_mindustry_world_blocks_power_NuclearReactor$NuclearReactorBuild,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) &class_mindustry_world_blocks_power_NuclearReactor,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 33,
		.interfaceCount = 1,
		.nativeInterfaces = (intptr_t) interfaces,
		.fieldCount = 6,
		.nativeFields = (intptr_t) fields,
		.methodCount = 10,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 316,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_mindustry_world_blocks_power_NuclearReactor$NuclearReactorBuild = registerClass(&class_mindustry_world_blocks_power_NuclearReactor$NuclearReactorBuild);

}

