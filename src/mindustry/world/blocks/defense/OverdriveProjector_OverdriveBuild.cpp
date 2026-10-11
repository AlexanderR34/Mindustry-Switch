#include "mindustry/world/blocks/defense/OverdriveProjector_OverdriveBuild.h"
#include "mindustry/world/Block.h"
#include "mindustry/logic/Ranged.h"
#include "arc/graphics/g2d/Lines.h"
#include "arc/math/geom/Point2.h"
#include "mindustry/world/blocks/defense/OverdriveProjector.h"
#include "arc/graphics/Color.h"
#include "mindustry/ui/Displayable.h"
#include "arc/graphics/g2d/Draw.h"
#include "arc/func/Cons.h"
#include "mindustry/ai/BlockIndexer.h"
#include "mindustry/world/blocks/defense/OverdriveProjector_OverdriveBuild_invoke_arc_func_Cons_2.h"
#include "mindustry/world/blocks/defense/OverdriveProjector_OverdriveBuild_invoke_arc_func_Cons_3.h"
#include "arc/util/Tmp.h"
#include "arc/math/geom/Position.h"
#include "arc/func/Boolf.h"
#include "mindustry/world/blocks/defense/OverdriveProjector_OverdriveBuild.h"
#include "arc/math/geom/Geometry.h"
#include "arc/math/Mathf.h"
#include "java/lang/Math.h"
#include "mindustry/gen/Teamc.h"
#include "mindustry/world/blocks/defense/OverdriveProjector_OverdriveBuild_invoke_arc_func_Boolf_3.h"
#include "arc/graphics/g2d/TextureRegion.h"
#include "mindustry/world/blocks/defense/OverdriveProjector_OverdriveBuild_invoke_arc_func_Boolf_2.h"
#include "mindustry/graphics/Lod.h"
#include "arc/util/Time.h"
#include "mindustry/gen/Building.h"
#include "arc/util/io/Reads.h"
#include "java/lang/Object.h"
#include "mindustry/graphics/Drawf.h"
#include "mindustry/Vars.h"
#include "arc/util/io/Writes.h"

extern "C" {


void mark_mindustry_world_blocks_defense_OverdriveProjector$OverdriveBuild(jobject object, jint mark, jint depth) {
	if (!object) {
		return;
	}
	if (depth > GC_DEPTH_ALWAYS && (object->gcMark < GC_MARK_START || object->gcMark == mark))
		return;
	if (depth > MAX_GC_MARK_DEPTH) {
		markDeepObject(object);
		return;
	}
	mark_mindustry_gen_Building(object, mark, depth);
	if (object->gcMark >= GC_MARK_START)
		object->gcMark = mark;
	auto self = (mindustry_world_blocks_defense_OverdriveProjector$OverdriveBuild *) object;
	if (self->F_this$0)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_this$0)->clazz)->markFunction)((jobject) self->F_this$0, mark, depth + 1);
}

void clinit_mindustry_world_blocks_defense_OverdriveProjector$OverdriveBuild(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	clinit_mindustry_gen_Building(ctx);
}

void init_mindustry_world_blocks_defense_OverdriveProjector$OverdriveBuild_mindustry_world_blocks_defense_OverdriveProjector(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/defense/OverdriveProjector$OverdriveBuild:<init>", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_world_blocks_defense_OverdriveProjector$OverdriveBuild(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(83);
	((mindustry_world_blocks_defense_OverdriveProjector$OverdriveBuild *) NULL_CHECK((frame[0].o)))->F_this$0 = (jref) (frame[1].o);
	init_mindustry_gen_Building(ctx, (frame[0].o));
	LINE_NUMBER(84);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((mindustry_world_blocks_defense_OverdriveProjector$OverdriveBuild *) NULL_CHECK((frame[0].o)))->F_this$0;
	jfloat temp0 = (jfloat)SM_arc_math_Mathf_random_float_R_float(ctx, ((jfloat)((mindustry_world_blocks_defense_OverdriveProjector *) NULL_CHECK(sp[1].o))->F_reload));
	((mindustry_world_blocks_defense_OverdriveProjector$OverdriveBuild *) NULL_CHECK(sp[0].o))->F_charge = temp0;
	LINE_NUMBER(83);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jfloat M_mindustry_world_blocks_defense_OverdriveProjector$OverdriveBuild_range_R_float(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/defense/OverdriveProjector$OverdriveBuild:range", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(88);
	sp[0].o = (jobject)((mindustry_world_blocks_defense_OverdriveProjector$OverdriveBuild *) NULL_CHECK((frame[0].o)))->F_this$0;
	popStackFrame(ctx);
	return ((jfloat)((mindustry_world_blocks_defense_OverdriveProjector *) NULL_CHECK(sp[0].o))->F_range);
	}

	popStackFrame(ctx);
}

void M_mindustry_world_blocks_defense_OverdriveProjector$OverdriveBuild_drawLight(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/defense/OverdriveProjector$OverdriveBuild:drawLight", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(93);
	jfloat temp0 = (jfloat)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_x;
	jfloat temp1 = (jfloat)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_y;
	sp[0].o = (jobject)((mindustry_world_blocks_defense_OverdriveProjector$OverdriveBuild *) NULL_CHECK((frame[0].o)))->F_this$0;
	jfloat temp2 = ((jfloat)((mindustry_world_Block *) NULL_CHECK(sp[0].o))->F_lightRadius) * ((jfloat)((mindustry_world_blocks_defense_OverdriveProjector$OverdriveBuild *) NULL_CHECK((frame[0].o)))->F_smoothEfficiency);
	sp[0].o = (jobject)((mindustry_world_blocks_defense_OverdriveProjector$OverdriveBuild *) NULL_CHECK((frame[0].o)))->F_this$0;
	sp[0].o = (jobject)((mindustry_world_blocks_defense_OverdriveProjector *) NULL_CHECK(sp[0].o))->F_baseColor;
	SM_mindustry_graphics_Drawf_light_float_float_float_arc_graphics_Color_float(ctx, temp0, temp1, temp2, sp[0].o, ((jfloat(0.7f)) * ((jfloat)((mindustry_world_blocks_defense_OverdriveProjector$OverdriveBuild *) NULL_CHECK((frame[0].o)))->F_smoothEfficiency)));
	LINE_NUMBER(94);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_world_blocks_defense_OverdriveProjector$OverdriveBuild_updateTile(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/defense/OverdriveProjector$OverdriveBuild:updateTile", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(98);
	sp[0].o = frame[0].o;
	jfloat temp0 = (jfloat)SM_arc_math_Mathf_lerpDelta_float_float_float_R_float(ctx, ((jfloat)((mindustry_world_blocks_defense_OverdriveProjector$OverdriveBuild *) NULL_CHECK((frame[0].o)))->F_smoothEfficiency), ((jfloat)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_efficiency), (jfloat(0.08f)));
	((mindustry_world_blocks_defense_OverdriveProjector$OverdriveBuild *) NULL_CHECK(sp[0].o))->F_smoothEfficiency = temp0;
	LINE_NUMBER(99);
	sp[0].o = frame[0].o;
	jfloat temp1 = (jfloat)((mindustry_world_blocks_defense_OverdriveProjector$OverdriveBuild *) NULL_CHECK((frame[0].o)))->F_heat;
	sp[1].f = temp1;
	sp += 2;
	if ((floatCompare(((jfloat)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_efficiency), (jfloat(0)), -1)) <= 0) goto label_2;
	}
	INST_FCONST(1);
	goto label_3;
label_2:;
	INST_FCONST(0);
label_3:;
	{
	sp -= 3;
	jfloat temp0 = (jfloat)SM_arc_math_Mathf_lerpDelta_float_float_float_R_float(ctx, sp[1].f, sp[2].f, (jfloat(0.08f)));
	((mindustry_world_blocks_defense_OverdriveProjector$OverdriveBuild *) NULL_CHECK(sp[0].o))->F_heat = temp0;
	LINE_NUMBER(100);
	sp[0].o = frame[0].o;
	((mindustry_world_blocks_defense_OverdriveProjector$OverdriveBuild *) NULL_CHECK(sp[0].o))->F_charge = (((jfloat)((mindustry_world_blocks_defense_OverdriveProjector$OverdriveBuild *) NULL_CHECK(sp[0].o))->F_charge) + (((jfloat)((mindustry_world_blocks_defense_OverdriveProjector$OverdriveBuild *) NULL_CHECK((frame[0].o)))->F_heat) * (clinit_arc_util_Time(ctx), (jfloat)SF_arc_util_Time_delta)));
	LINE_NUMBER(102);
	sp[0].o = (jobject)((mindustry_world_blocks_defense_OverdriveProjector$OverdriveBuild *) NULL_CHECK((frame[0].o)))->F_this$0;
	if (((jint)((mindustry_world_blocks_defense_OverdriveProjector *) NULL_CHECK(sp[0].o))->F_hasBoost) == 0) goto label_6;
	}
	{
	LINE_NUMBER(103);
	sp[0].o = frame[0].o;
	jfloat temp0 = (jfloat)SM_arc_math_Mathf_lerpDelta_float_float_float_R_float(ctx, ((jfloat)((mindustry_world_blocks_defense_OverdriveProjector$OverdriveBuild *) NULL_CHECK((frame[0].o)))->F_phaseHeat), ((jfloat)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_optionalEfficiency), (jfloat(0.1f)));
	((mindustry_world_blocks_defense_OverdriveProjector$OverdriveBuild *) NULL_CHECK(sp[0].o))->F_phaseHeat = temp0;
	}
label_6:;
	{
	LINE_NUMBER(106);
	jfloat temp0 = (jfloat)((mindustry_world_blocks_defense_OverdriveProjector$OverdriveBuild *) NULL_CHECK((frame[0].o)))->F_charge;
	sp[0].o = (jobject)((mindustry_world_blocks_defense_OverdriveProjector$OverdriveBuild *) NULL_CHECK((frame[0].o)))->F_this$0;
	if ((floatCompare(temp0, ((jfloat)((mindustry_world_blocks_defense_OverdriveProjector *) NULL_CHECK(sp[0].o))->F_reload), -1)) < 0) goto label_8;
	}
	{
	LINE_NUMBER(107);
	sp[0].o = (jobject)((mindustry_world_blocks_defense_OverdriveProjector$OverdriveBuild *) NULL_CHECK((frame[0].o)))->F_this$0;
	jfloat temp0 = (jfloat)((mindustry_world_blocks_defense_OverdriveProjector *) NULL_CHECK(sp[0].o))->F_range;
	jfloat temp1 = (jfloat)((mindustry_world_blocks_defense_OverdriveProjector$OverdriveBuild *) NULL_CHECK((frame[0].o)))->F_phaseHeat;
	sp[0].o = (jobject)((mindustry_world_blocks_defense_OverdriveProjector$OverdriveBuild *) NULL_CHECK((frame[0].o)))->F_this$0;
	frame[1].f = (temp0 + (temp1 * ((jfloat)((mindustry_world_blocks_defense_OverdriveProjector *) NULL_CHECK(sp[0].o))->F_phaseRangeBoost)));
	LINE_NUMBER(109);
	((mindustry_world_blocks_defense_OverdriveProjector$OverdriveBuild *) NULL_CHECK((frame[0].o)))->F_charge = (jfloat(0));
	LINE_NUMBER(110);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_indexer;
	sp[1].o = frame[0].o;
	jfloat temp2 = frame[1].f;
	{ /* InvokeDynamic */
		clinit_mindustry_world_blocks_defense_OverdriveProjector$OverdriveBuild_invoke_arc_func_Boolf_2(ctx);
		auto proxy = (mindustry_world_blocks_defense_OverdriveProjector$OverdriveBuild_invoke_arc_func_Boolf_2 *) gcAlloc(ctx, &class_mindustry_world_blocks_defense_OverdriveProjector$OverdriveBuild_invoke_arc_func_Boolf_2);
		sp[2].o = (jobject) proxy;
	}
	{ /* InvokeDynamic */
		clinit_mindustry_world_blocks_defense_OverdriveProjector$OverdriveBuild_invoke_arc_func_Cons_2(ctx);
		auto proxy = (mindustry_world_blocks_defense_OverdriveProjector$OverdriveBuild_invoke_arc_func_Cons_2 *) gcAlloc(ctx, &class_mindustry_world_blocks_defense_OverdriveProjector$OverdriveBuild_invoke_arc_func_Cons_2);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[3].o = (jobject) proxy;
	}
	jint temp3 = (jint)((func_mindustry_ai_BlockIndexer_eachBlock_mindustry_gen_Teamc_float_arc_func_Boolf_arc_func_Cons_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_ai_BlockIndexer_eachBlock_mindustry_gen_Teamc_float_arc_func_Boolf_arc_func_Cons_R_boolean])(ctx, sp[0].o, sp[1].o, temp2, sp[2].o, sp[3].o);
	}
label_8:;
	{
	LINE_NUMBER(113);
	if ((floatCompare(((jfloat)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_efficiency), (jfloat(0)), -1)) <= 0) goto label_12;
	}
	{
	LINE_NUMBER(114);
	sp[0].o = frame[0].o;
	jfloat temp0 = (jfloat)((mindustry_world_blocks_defense_OverdriveProjector$OverdriveBuild *) NULL_CHECK(sp[0].o))->F_useProgress;
	jfloat temp1 = (jfloat)((func_mindustry_world_blocks_defense_OverdriveProjector$OverdriveBuild_delta_R_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_world_blocks_defense_OverdriveProjector$OverdriveBuild_delta_R_float])(ctx, (frame[0].o));
	((mindustry_world_blocks_defense_OverdriveProjector$OverdriveBuild *) NULL_CHECK(sp[0].o))->F_useProgress = (temp0 + temp1);
	}
label_12:;
	{
	LINE_NUMBER(117);
	jfloat temp0 = (jfloat)((mindustry_world_blocks_defense_OverdriveProjector$OverdriveBuild *) NULL_CHECK((frame[0].o)))->F_useProgress;
	sp[0].o = (jobject)((mindustry_world_blocks_defense_OverdriveProjector$OverdriveBuild *) NULL_CHECK((frame[0].o)))->F_this$0;
	if ((floatCompare(temp0, ((jfloat)((mindustry_world_blocks_defense_OverdriveProjector *) NULL_CHECK(sp[0].o))->F_useTime), -1)) < 0) goto label_14;
	}
	{
	LINE_NUMBER(118);
	((func_mindustry_world_blocks_defense_OverdriveProjector$OverdriveBuild_consume) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_world_blocks_defense_OverdriveProjector$OverdriveBuild_consume])(ctx, (frame[0].o));
	LINE_NUMBER(119);
	sp[0].o = frame[0].o;
	jfloat temp0 = (jfloat)((mindustry_world_blocks_defense_OverdriveProjector$OverdriveBuild *) NULL_CHECK(sp[0].o))->F_useProgress;
	sp[1].o = (jobject)((mindustry_world_blocks_defense_OverdriveProjector$OverdriveBuild *) NULL_CHECK((frame[0].o)))->F_this$0;
	((mindustry_world_blocks_defense_OverdriveProjector$OverdriveBuild *) NULL_CHECK(sp[0].o))->F_useProgress = (fmodf(temp0, ((jfloat)((mindustry_world_blocks_defense_OverdriveProjector *) NULL_CHECK(sp[1].o))->F_useTime)));
	}
label_14:;
	LINE_NUMBER(121);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jfloat M_mindustry_world_blocks_defense_OverdriveProjector$OverdriveBuild_realBoost_R_float(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/defense/OverdriveProjector$OverdriveBuild:realBoost", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(124);
	sp[0].o = (jobject)((mindustry_world_blocks_defense_OverdriveProjector$OverdriveBuild *) NULL_CHECK((frame[0].o)))->F_this$0;
	jfloat temp0 = (jfloat)((mindustry_world_blocks_defense_OverdriveProjector *) NULL_CHECK(sp[0].o))->F_speedBoost;
	jfloat temp1 = (jfloat)((mindustry_world_blocks_defense_OverdriveProjector$OverdriveBuild *) NULL_CHECK((frame[0].o)))->F_phaseHeat;
	sp[0].o = (jobject)((mindustry_world_blocks_defense_OverdriveProjector$OverdriveBuild *) NULL_CHECK((frame[0].o)))->F_this$0;
	popStackFrame(ctx);
	return ((temp0 + (temp1 * ((jfloat)((mindustry_world_blocks_defense_OverdriveProjector *) NULL_CHECK(sp[0].o))->F_speedBoostPhase))) * ((jfloat)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_efficiency));
	}

	popStackFrame(ctx);
}

void M_mindustry_world_blocks_defense_OverdriveProjector$OverdriveBuild_drawSelect(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/defense/OverdriveProjector$OverdriveBuild:drawSelect", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(129);
	sp[0].o = (jobject)((mindustry_world_blocks_defense_OverdriveProjector$OverdriveBuild *) NULL_CHECK((frame[0].o)))->F_this$0;
	jfloat temp0 = (jfloat)((mindustry_world_blocks_defense_OverdriveProjector *) NULL_CHECK(sp[0].o))->F_range;
	jfloat temp1 = (jfloat)((mindustry_world_blocks_defense_OverdriveProjector$OverdriveBuild *) NULL_CHECK((frame[0].o)))->F_phaseHeat;
	sp[0].o = (jobject)((mindustry_world_blocks_defense_OverdriveProjector$OverdriveBuild *) NULL_CHECK((frame[0].o)))->F_this$0;
	frame[1].f = (temp0 + (temp1 * ((jfloat)((mindustry_world_blocks_defense_OverdriveProjector *) NULL_CHECK(sp[0].o))->F_phaseRangeBoost)));
	LINE_NUMBER(131);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_indexer;
	sp[1].o = frame[0].o;
	jfloat temp2 = frame[1].f;
	{ /* InvokeDynamic */
		clinit_mindustry_world_blocks_defense_OverdriveProjector$OverdriveBuild_invoke_arc_func_Boolf_3(ctx);
		auto proxy = (mindustry_world_blocks_defense_OverdriveProjector$OverdriveBuild_invoke_arc_func_Boolf_3 *) gcAlloc(ctx, &class_mindustry_world_blocks_defense_OverdriveProjector$OverdriveBuild_invoke_arc_func_Boolf_3);
		sp[2].o = (jobject) proxy;
	}
	{ /* InvokeDynamic */
		clinit_mindustry_world_blocks_defense_OverdriveProjector$OverdriveBuild_invoke_arc_func_Cons_3(ctx);
		auto proxy = (mindustry_world_blocks_defense_OverdriveProjector$OverdriveBuild_invoke_arc_func_Cons_3 *) gcAlloc(ctx, &class_mindustry_world_blocks_defense_OverdriveProjector$OverdriveBuild_invoke_arc_func_Cons_3);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[3].o = (jobject) proxy;
	}
	jint temp3 = (jint)((func_mindustry_ai_BlockIndexer_eachBlock_mindustry_gen_Teamc_float_arc_func_Boolf_arc_func_Cons_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_ai_BlockIndexer_eachBlock_mindustry_gen_Teamc_float_arc_func_Boolf_arc_func_Cons_R_boolean])(ctx, sp[0].o, sp[1].o, temp2, sp[2].o, sp[3].o);
	LINE_NUMBER(133);
	jfloat temp4 = (jfloat)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_x;
	jfloat temp5 = (jfloat)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_y;
	jfloat temp6 = frame[1].f;
	sp[0].o = (jobject)((mindustry_world_blocks_defense_OverdriveProjector$OverdriveBuild *) NULL_CHECK((frame[0].o)))->F_this$0;
	sp[0].o = (jobject)((mindustry_world_blocks_defense_OverdriveProjector *) NULL_CHECK(sp[0].o))->F_baseColor;
	SM_mindustry_graphics_Drawf_dashCircle_float_float_float_arc_graphics_Color(ctx, temp4, temp5, temp6, sp[0].o);
	LINE_NUMBER(134);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_world_blocks_defense_OverdriveProjector$OverdriveBuild_draw(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/defense/OverdriveProjector$OverdriveBuild:draw", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(138);
	M_mindustry_gen_Building_draw(ctx, (frame[0].o));
	LINE_NUMBER(140);
	if ((clinit_mindustry_graphics_Lod(ctx), (jint)SF_mindustry_graphics_Lod_l2) != 0) goto label_2;
	}
	popStackFrame(ctx);
	INST_RETURN();
label_2:;
	{
	LINE_NUMBER(142);
	frame[1].f = ((jfloat(1)) - (fmodf(((clinit_arc_util_Time(ctx), (jfloat)SF_arc_util_Time_time) / (jfloat(100.0f))), (jfloat(1)))));
	LINE_NUMBER(144);
	sp[0].o = (jobject)((mindustry_world_blocks_defense_OverdriveProjector$OverdriveBuild *) NULL_CHECK((frame[0].o)))->F_this$0;
	sp[0].o = (jobject)((mindustry_world_blocks_defense_OverdriveProjector *) NULL_CHECK(sp[0].o))->F_baseColor;
	sp[1].o = (jobject)((mindustry_world_blocks_defense_OverdriveProjector$OverdriveBuild *) NULL_CHECK((frame[0].o)))->F_this$0;
	sp[1].o = (jobject)((mindustry_world_blocks_defense_OverdriveProjector *) NULL_CHECK(sp[1].o))->F_phaseColor;
	SM_arc_graphics_g2d_Draw_color_arc_graphics_Color_arc_graphics_Color_float(ctx, sp[0].o, sp[1].o, ((jfloat)((mindustry_world_blocks_defense_OverdriveProjector$OverdriveBuild *) NULL_CHECK((frame[0].o)))->F_phaseHeat));
	LINE_NUMBER(145);
	jfloat temp0 = (jfloat)((mindustry_world_blocks_defense_OverdriveProjector$OverdriveBuild *) NULL_CHECK((frame[0].o)))->F_heat;
	jfloat temp1 = (jfloat)SM_arc_math_Mathf_absin_float_float_float_R_float(ctx, (clinit_arc_util_Time(ctx), (jfloat)SF_arc_util_Time_time), (jfloat(7.957747f)), (jfloat(1)));
	SM_arc_graphics_g2d_Draw_alpha_float(ctx, (((temp0 * temp1) * (jfloat(0.5f))) * (clinit_mindustry_graphics_Lod(ctx), (jfloat)SF_mindustry_graphics_Lod_alpha2)));
	LINE_NUMBER(146);
	sp[0].o = (jobject)((mindustry_world_blocks_defense_OverdriveProjector$OverdriveBuild *) NULL_CHECK((frame[0].o)))->F_this$0;
	sp[0].o = (jobject)((mindustry_world_blocks_defense_OverdriveProjector *) NULL_CHECK(sp[0].o))->F_topRegion;
	SM_arc_graphics_g2d_Draw_rect_arc_graphics_g2d_TextureRegion_float_float(ctx, sp[0].o, ((jfloat)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_x), ((jfloat)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_y));
	LINE_NUMBER(147);
	SM_arc_graphics_g2d_Draw_alpha_float(ctx, (clinit_mindustry_graphics_Lod(ctx), (jfloat)SF_mindustry_graphics_Lod_alpha2));
	LINE_NUMBER(148);
	SM_arc_graphics_g2d_Lines_stroke_float(ctx, ((((jfloat(2)) * (frame[1].f)) + (jfloat(0.1f))) * ((jfloat)((mindustry_world_blocks_defense_OverdriveProjector$OverdriveBuild *) NULL_CHECK((frame[0].o)))->F_heat)));
	LINE_NUMBER(150);
	jfloat temp2 = jfloat(0);
	jfloat temp3 = (jfloat)SM_arc_math_Mathf_clamp_float_R_float(ctx, ((jfloat(2)) - ((frame[1].f) * (jfloat(2)))));
	sp[0].o = (jobject)((mindustry_world_blocks_defense_OverdriveProjector$OverdriveBuild *) NULL_CHECK((frame[0].o)))->F_this$0;
	jfloat temp4 = (jfloat)SM_java_lang_Math_max_float_float_R_float(ctx, temp2, (((((temp3 * (jfloat(((jint)((mindustry_world_Block *) NULL_CHECK(sp[0].o))->F_size)))) * (jfloat(8.0f))) / (jfloat(2))) - (frame[1].f)) - (jfloat(0.2f))));
	frame[2].f = temp4;
	jfloat temp5 = (jfloat)SM_arc_math_Mathf_clamp_float_R_float(ctx, ((jfloat(0.5f)) - (frame[1].f)));
	sp[0].o = (jobject)((mindustry_world_blocks_defense_OverdriveProjector$OverdriveBuild *) NULL_CHECK((frame[0].o)))->F_this$0;
	frame[3].f = ((temp5 * (jfloat(((jint)((mindustry_world_Block *) NULL_CHECK(sp[0].o))->F_size)))) * (jfloat(8.0f)));
	LINE_NUMBER(151);
	SM_arc_graphics_g2d_Lines_beginLine(ctx);
	LINE_NUMBER(152);
	frame[4].i = (jint(0));
	}
label_12:;
	{
	if ((frame[4].i) >= (jint(4))) goto label_13;
	}
	{
	LINE_NUMBER(153);
	jfloat temp0 = (jfloat)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_x;
	sp[0].o = (jobject)SM_arc_math_geom_Geometry_d4_int_R_arc_math_geom_Point2(ctx, (frame[4].i));
	jfloat temp1 = temp0 + ((jfloat(((jint)((arc_math_geom_Point2 *) NULL_CHECK(sp[0].o))->F_x))) * (frame[2].f));
	sp[0].o = (jobject)SM_arc_math_geom_Geometry_d4_int_R_arc_math_geom_Point2(ctx, (frame[4].i));
	jfloat temp2 = temp1 + ((jfloat(((jint)((arc_math_geom_Point2 *) NULL_CHECK(sp[0].o))->F_y))) * (frame[3].f));
	jfloat temp3 = (jfloat)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_y;
	sp[0].o = (jobject)SM_arc_math_geom_Geometry_d4_int_R_arc_math_geom_Point2(ctx, (frame[4].i));
	jfloat temp4 = temp3 + ((jfloat(((jint)((arc_math_geom_Point2 *) NULL_CHECK(sp[0].o))->F_y))) * (frame[2].f));
	sp[0].o = (jobject)SM_arc_math_geom_Geometry_d4_int_R_arc_math_geom_Point2(ctx, (frame[4].i));
	SM_arc_graphics_g2d_Lines_linePoint_float_float(ctx, temp2, (temp4 - ((jfloat(((jint)((arc_math_geom_Point2 *) NULL_CHECK(sp[0].o))->F_x))) * (frame[3].f))));
	LINE_NUMBER(154);
	if ((floatCompare((frame[1].f), (jfloat(0.5f)), 1)) >= 0) goto label_16;
	}
	{
	jfloat temp0 = (jfloat)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_x;
	sp[0].o = (jobject)SM_arc_math_geom_Geometry_d4_int_R_arc_math_geom_Point2(ctx, (frame[4].i));
	jfloat temp1 = temp0 + ((jfloat(((jint)((arc_math_geom_Point2 *) NULL_CHECK(sp[0].o))->F_x))) * (frame[2].f));
	sp[0].o = (jobject)SM_arc_math_geom_Geometry_d4_int_R_arc_math_geom_Point2(ctx, (frame[4].i));
	jfloat temp2 = temp1 - ((jfloat(((jint)((arc_math_geom_Point2 *) NULL_CHECK(sp[0].o))->F_y))) * (frame[3].f));
	jfloat temp3 = (jfloat)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_y;
	sp[0].o = (jobject)SM_arc_math_geom_Geometry_d4_int_R_arc_math_geom_Point2(ctx, (frame[4].i));
	jfloat temp4 = temp3 + ((jfloat(((jint)((arc_math_geom_Point2 *) NULL_CHECK(sp[0].o))->F_y))) * (frame[2].f));
	sp[0].o = (jobject)SM_arc_math_geom_Geometry_d4_int_R_arc_math_geom_Point2(ctx, (frame[4].i));
	SM_arc_graphics_g2d_Lines_linePoint_float_float(ctx, temp2, (temp4 + ((jfloat(((jint)((arc_math_geom_Point2 *) NULL_CHECK(sp[0].o))->F_x))) * (frame[3].f))));
	}
label_16:;
	{
	LINE_NUMBER(152);
	INST_IINC(4, 1);
	goto label_12;
	}
label_13:;
	{
	LINE_NUMBER(156);
	SM_arc_graphics_g2d_Lines_endLine_boolean(ctx, (jint(1)));
	LINE_NUMBER(158);
	SM_arc_graphics_g2d_Draw_reset(ctx);
	LINE_NUMBER(159);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_world_blocks_defense_OverdriveProjector$OverdriveBuild_write_arc_util_io_Writes(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/defense/OverdriveProjector$OverdriveBuild:write", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(163);
	M_mindustry_gen_Building_write_arc_util_io_Writes(ctx, (frame[0].o), (frame[1].o));
	LINE_NUMBER(164);
	((func_arc_util_io_Writes_f_float) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_util_io_Writes_f_float])(ctx, (frame[1].o), ((jfloat)((mindustry_world_blocks_defense_OverdriveProjector$OverdriveBuild *) NULL_CHECK((frame[0].o)))->F_heat));
	LINE_NUMBER(165);
	((func_arc_util_io_Writes_f_float) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_util_io_Writes_f_float])(ctx, (frame[1].o), ((jfloat)((mindustry_world_blocks_defense_OverdriveProjector$OverdriveBuild *) NULL_CHECK((frame[0].o)))->F_phaseHeat));
	LINE_NUMBER(166);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_world_blocks_defense_OverdriveProjector$OverdriveBuild_read_arc_util_io_Reads_byte(jcontext ctx, jobject self, jobject param0, jbyte param1) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/defense/OverdriveProjector$OverdriveBuild:read", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(170);
	M_mindustry_gen_Building_read_arc_util_io_Reads_byte(ctx, (frame[0].o), (frame[1].o), (frame[2].i));
	LINE_NUMBER(171);
	sp[0].o = frame[0].o;
	jfloat temp0 = (jfloat)((func_arc_util_io_Reads_f_R_float) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_util_io_Reads_f_R_float])(ctx, (frame[1].o));
	((mindustry_world_blocks_defense_OverdriveProjector$OverdriveBuild *) NULL_CHECK(sp[0].o))->F_heat = temp0;
	LINE_NUMBER(172);
	sp[0].o = frame[0].o;
	jfloat temp1 = (jfloat)((func_arc_util_io_Reads_f_R_float) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_util_io_Reads_f_R_float])(ctx, (frame[1].o));
	((mindustry_world_blocks_defense_OverdriveProjector$OverdriveBuild *) NULL_CHECK(sp[0].o))->F_phaseHeat = temp1;
	LINE_NUMBER(173);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_world_blocks_defense_OverdriveProjector$OverdriveBuild_lambda$drawSelect$1_mindustry_gen_Building(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/defense/OverdriveProjector$OverdriveBuild:lambda$drawSelect$1", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(131);
	sp[0].o = frame[1].o;
	clinit_arc_util_Tmp(ctx);
	sp[1].o = (jobject)SF_arc_util_Tmp_c1;
	sp[2].o = (jobject)((mindustry_world_blocks_defense_OverdriveProjector$OverdriveBuild *) NULL_CHECK((frame[0].o)))->F_this$0;
	sp[2].o = (jobject)((mindustry_world_blocks_defense_OverdriveProjector *) NULL_CHECK(sp[2].o))->F_baseColor;
	sp[1].o = (jobject)((func_arc_graphics_Color_set_arc_graphics_Color_R_arc_graphics_Color) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_graphics_Color_set_arc_graphics_Color_R_arc_graphics_Color])(ctx, sp[1].o, sp[2].o);
	jfloat temp0 = (jfloat)SM_arc_math_Mathf_absin_float_float_R_float(ctx, (jfloat(4.0f)), (jfloat(1)));
	sp[1].o = (jobject)((func_arc_graphics_Color_a_float_R_arc_graphics_Color) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_graphics_Color_a_float_R_arc_graphics_Color])(ctx, sp[1].o, temp0);
	SM_mindustry_graphics_Drawf_selected_mindustry_gen_Building_arc_graphics_Color(ctx, sp[0].o, sp[1].o);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jbool SM_mindustry_world_blocks_defense_OverdriveProjector$OverdriveBuild_lambda$drawSelect$0_mindustry_gen_Building_R_boolean(jcontext ctx, jobject param0) {
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/defense/OverdriveProjector$OverdriveBuild:lambda$drawSelect$0", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_world_blocks_defense_OverdriveProjector$OverdriveBuild(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(131);
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_block;
	popStackFrame(ctx);
	return ((jint)((mindustry_world_Block *) NULL_CHECK(sp[0].o))->F_canOverdrive);
	}

	popStackFrame(ctx);
}

void M_mindustry_world_blocks_defense_OverdriveProjector$OverdriveBuild_lambda$updateTile$1_mindustry_gen_Building(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/defense/OverdriveProjector$OverdriveBuild:lambda$updateTile$1", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(110);
	sp[0].o = frame[1].o;
	jfloat temp0 = (jfloat)((func_mindustry_world_blocks_defense_OverdriveProjector$OverdriveBuild_realBoost_R_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_world_blocks_defense_OverdriveProjector$OverdriveBuild_realBoost_R_float])(ctx, (frame[0].o));
	sp[1].o = (jobject)((mindustry_world_blocks_defense_OverdriveProjector$OverdriveBuild *) NULL_CHECK((frame[0].o)))->F_this$0;
	((func_mindustry_gen_Building_applyBoost_float_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_gen_Building_applyBoost_float_float])(ctx, sp[0].o, temp0, (((jfloat)((mindustry_world_blocks_defense_OverdriveProjector *) NULL_CHECK(sp[1].o))->F_reload) + (jfloat(1))));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jbool SM_mindustry_world_blocks_defense_OverdriveProjector$OverdriveBuild_lambda$updateTile$0_mindustry_gen_Building_R_boolean(jcontext ctx, jobject param0) {
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/defense/OverdriveProjector$OverdriveBuild:lambda$updateTile$0", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_world_blocks_defense_OverdriveProjector$OverdriveBuild(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(110);
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_block;
	popStackFrame(ctx);
	return ((jint)((mindustry_world_Block *) NULL_CHECK(sp[0].o))->F_canOverdrive);
	}

	popStackFrame(ctx);
}

void *vtable_mindustry_world_blocks_defense_OverdriveProjector$OverdriveBuild[] {
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
	(void *) M_mindustry_world_blocks_defense_OverdriveProjector$OverdriveBuild_write_arc_util_io_Writes,
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
	(void *) M_mindustry_gen_Building_sense_mindustry_logic_LAccess_R_double,
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
	(void *) M_mindustry_world_blocks_defense_OverdriveProjector$OverdriveBuild_read_arc_util_io_Reads_byte,
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
	(void *) M_mindustry_gen_Building_version_R_byte,
	(void *) M_mindustry_gen_Building_ambientVolume_R_float,
	(void *) M_mindustry_gen_Building_calculateHeat_Array1_float_R_float,
	(void *) M_mindustry_gen_Building_calculateHeat_Array1_float_arc_struct_IntSet_R_float,
	(void *) M_mindustry_gen_Building_delta_R_float,
	(void *) M_mindustry_gen_Building_drawrot_R_float,
	(void *) M_mindustry_gen_Building_edelta_R_float,
	(void *) M_mindustry_gen_Building_efficiencyScale_R_float,
	(void *) M_mindustry_gen_Building_fogRadius_R_float,
	(void *) M_mindustry_gen_Building_getDisplayEfficiency_R_float,
	(void *) M_mindustry_gen_Building_getPowerProduction_R_float,
	(void *) M_mindustry_gen_Building_getProgressIncrease_float_R_float,
	(void *) M_mindustry_gen_Building_handleDamage_float_R_float,
	(void *) M_mindustry_gen_Building_moveLiquid_mindustry_gen_Building_mindustry_type_Liquid_R_float,
	(void *) M_mindustry_gen_Building_moveLiquidForward_boolean_mindustry_type_Liquid_R_float,
	(void *) M_mindustry_gen_Building_progress_R_float,
	(void *) M_mindustry_gen_Building_rotdeg_R_float,
	(void *) M_mindustry_gen_Building_timeScale_R_float,
	(void *) M_mindustry_gen_Building_totalProgress_R_float,
	(void *) M_mindustry_gen_Building_warmup_R_float,
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
	(void *) M_mindustry_world_blocks_defense_OverdriveProjector$OverdriveBuild_draw,
	(void *) M_mindustry_gen_Building_drawCached,
	(void *) M_mindustry_gen_Building_drawConfigure,
	(void *) M_mindustry_gen_Building_drawCracks,
	(void *) M_mindustry_gen_Building_drawDisabled,
	(void *) M_mindustry_gen_Building_drawItemSelection_mindustry_ctype_UnlockableContent,
	(void *) M_mindustry_world_blocks_defense_OverdriveProjector$OverdriveBuild_drawLight,
	(void *) M_mindustry_gen_Building_drawLiquidLight_mindustry_type_Liquid_float,
	(void *) M_mindustry_world_blocks_defense_OverdriveProjector$OverdriveBuild_drawSelect,
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
	(void *) M_mindustry_gen_Building_onDestroyed,
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
	(void *) M_mindustry_world_blocks_defense_OverdriveProjector$OverdriveBuild_updateTile,
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
	(void *) M_mindustry_world_blocks_defense_OverdriveProjector$OverdriveBuild_range_R_float,
	(void *) M_mindustry_world_blocks_defense_OverdriveProjector$OverdriveBuild_realBoost_R_float,
	(void *) M_mindustry_world_blocks_defense_OverdriveProjector$OverdriveBuild_lambda$drawSelect$1_mindustry_gen_Building,
	(void *) M_mindustry_world_blocks_defense_OverdriveProjector$OverdriveBuild_lambda$updateTile$1_mindustry_gen_Building,
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
	{ "range", "()F" },
	{ "realBoost", "()F" },
	{ "lambda$drawSelect$1", "(Lmindustry/gen/Building;)V" },
	{ "lambda$updateTile$1", "(Lmindustry/gen/Building;)V" },
};

static jclass interfaces[] { &class_mindustry_logic_Ranged, };

static FieldMetadata fields[] {
	{ "heat", &class_float, offsetof(mindustry_world_blocks_defense_OverdriveProjector$OverdriveBuild, F_heat), "F", 1 },
	{ "charge", &class_float, offsetof(mindustry_world_blocks_defense_OverdriveProjector$OverdriveBuild, F_charge), "F", 1 },
	{ "phaseHeat", &class_float, offsetof(mindustry_world_blocks_defense_OverdriveProjector$OverdriveBuild, F_phaseHeat), "F", 1 },
	{ "smoothEfficiency", &class_float, offsetof(mindustry_world_blocks_defense_OverdriveProjector$OverdriveBuild, F_smoothEfficiency), "F", 1 },
	{ "useProgress", &class_float, offsetof(mindustry_world_blocks_defense_OverdriveProjector$OverdriveBuild, F_useProgress), "F", 1 },
	{ "this$0", &class_mindustry_world_blocks_defense_OverdriveProjector, offsetof(mindustry_world_blocks_defense_OverdriveProjector$OverdriveBuild, F_this$0), "Lmindustry/world/blocks/defense/OverdriveProjector;", 4112 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_mindustry_world_blocks_defense_OverdriveProjector$OverdriveBuild_mindustry_world_blocks_defense_OverdriveProjector, 0, "(Lmindustry/world/blocks/defense/OverdriveProjector;)V", 1 },
	{ "range", (intptr_t) M_mindustry_world_blocks_defense_OverdriveProjector$OverdriveBuild_range_R_float, VTABLE_mindustry_world_blocks_defense_OverdriveProjector$OverdriveBuild_range_R_float, "()F", 1 },
	{ "drawLight", (intptr_t) M_mindustry_world_blocks_defense_OverdriveProjector$OverdriveBuild_drawLight, VTABLE_mindustry_world_blocks_defense_OverdriveProjector$OverdriveBuild_drawLight, "()V", 1 },
	{ "updateTile", (intptr_t) M_mindustry_world_blocks_defense_OverdriveProjector$OverdriveBuild_updateTile, VTABLE_mindustry_world_blocks_defense_OverdriveProjector$OverdriveBuild_updateTile, "()V", 1 },
	{ "realBoost", (intptr_t) M_mindustry_world_blocks_defense_OverdriveProjector$OverdriveBuild_realBoost_R_float, VTABLE_mindustry_world_blocks_defense_OverdriveProjector$OverdriveBuild_realBoost_R_float, "()F", 1 },
	{ "drawSelect", (intptr_t) M_mindustry_world_blocks_defense_OverdriveProjector$OverdriveBuild_drawSelect, VTABLE_mindustry_world_blocks_defense_OverdriveProjector$OverdriveBuild_drawSelect, "()V", 1 },
	{ "draw", (intptr_t) M_mindustry_world_blocks_defense_OverdriveProjector$OverdriveBuild_draw, VTABLE_mindustry_world_blocks_defense_OverdriveProjector$OverdriveBuild_draw, "()V", 1 },
	{ "write", (intptr_t) M_mindustry_world_blocks_defense_OverdriveProjector$OverdriveBuild_write_arc_util_io_Writes, VTABLE_mindustry_world_blocks_defense_OverdriveProjector$OverdriveBuild_write_arc_util_io_Writes, "(Larc/util/io/Writes;)V", 1 },
	{ "read", (intptr_t) M_mindustry_world_blocks_defense_OverdriveProjector$OverdriveBuild_read_arc_util_io_Reads_byte, VTABLE_mindustry_world_blocks_defense_OverdriveProjector$OverdriveBuild_read_arc_util_io_Reads_byte, "(Larc/util/io/Reads;B)V", 1 },
	{ "lambda$drawSelect$1", (intptr_t) M_mindustry_world_blocks_defense_OverdriveProjector$OverdriveBuild_lambda$drawSelect$1_mindustry_gen_Building, VTABLE_mindustry_world_blocks_defense_OverdriveProjector$OverdriveBuild_lambda$drawSelect$1_mindustry_gen_Building, "(Lmindustry/gen/Building;)V", 4098 },
	{ "lambda$drawSelect$0", (intptr_t) SM_mindustry_world_blocks_defense_OverdriveProjector$OverdriveBuild_lambda$drawSelect$0_mindustry_gen_Building_R_boolean, 0, "(Lmindustry/gen/Building;)Z", 4106 },
	{ "lambda$updateTile$1", (intptr_t) M_mindustry_world_blocks_defense_OverdriveProjector$OverdriveBuild_lambda$updateTile$1_mindustry_gen_Building, VTABLE_mindustry_world_blocks_defense_OverdriveProjector$OverdriveBuild_lambda$updateTile$1_mindustry_gen_Building, "(Lmindustry/gen/Building;)V", 4098 },
	{ "lambda$updateTile$0", (intptr_t) SM_mindustry_world_blocks_defense_OverdriveProjector$OverdriveBuild_lambda$updateTile$0_mindustry_gen_Building_R_boolean, 0, "(Lmindustry/gen/Building;)Z", 4106 },
};

Class class_mindustry_world_blocks_defense_OverdriveProjector$OverdriveBuild{
		.nativeName = (intptr_t) "mindustry/world/blocks/defense/OverdriveProjector$OverdriveBuild",
		.parentClass = (intptr_t) &class_mindustry_gen_Building,
		.size = sizeof(mindustry_world_blocks_defense_OverdriveProjector$OverdriveBuild),
		.classVtable = (intptr_t) vtable_mindustry_world_blocks_defense_OverdriveProjector$OverdriveBuild,
		.staticInitializer = (intptr_t) clinit_mindustry_world_blocks_defense_OverdriveProjector$OverdriveBuild,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_mindustry_world_blocks_defense_OverdriveProjector$OverdriveBuild,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) &class_mindustry_world_blocks_defense_OverdriveProjector,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 33,
		.interfaceCount = 1,
		.nativeInterfaces = (intptr_t) interfaces,
		.fieldCount = 6,
		.nativeFields = (intptr_t) fields,
		.methodCount = 13,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 314,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_mindustry_world_blocks_defense_OverdriveProjector$OverdriveBuild = registerClass(&class_mindustry_world_blocks_defense_OverdriveProjector$OverdriveBuild);

}

