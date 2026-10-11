#include "mindustry/world/blocks/campaign/LaunchPad_LaunchPayloadComp.h"
#include "mindustry/type/ItemSeq.h"
#include "arc/math/geom/Vec2.h"
#include "mindustry/net/Net.h"
#include "mindustry/world/Block.h"
#include "arc/graphics/g2d/TextureAtlas_AtlasRegion.h"
#include "arc/Events.h"
#include "mindustry/game/Rules.h"
#include "arc/math/Scaled.h"
#include "arc/graphics/Color.h"
#include "arc/graphics/g2d/Draw.h"
#include "arc/graphics/g2d/Fill.h"
#include "mindustry/entities/Effect.h"
#include "mindustry/world/blocks/campaign/LaunchPad.h"
#include "java/lang/String.h"
#include "mindustry/content/Fx.h"
#include "mindustry/gen/Entityc.h"
#include "arc/util/Tmp.h"
#include "arc/struct/Seq.h"
#include "mindustry/game/SectorInfo.h"
#include "arc/math/geom/Position.h"
#include "arc/math/Mathf.h"
#include "arc/graphics/g2d/TextureAtlas.h"
#include "mindustry/gen/Teamc.h"
#include "arc/graphics/g2d/TextureRegion.h"
#include "arc/Core.h"
#include "java/util/Iterator.h"
#include "mindustry/world/blocks/campaign/LaunchPad_LaunchPayloadComp.h"
#include "arc/math/Interp.h"
#include "arc/math/Interp_PowOut.h"
#include "arc/math/Interp_PowIn.h"
#include "mindustry/game/CampaignRules.h"
#include "mindustry/type/Sector.h"
#include "arc/util/Interval.h"
#include "mindustry/gen/Timedc.h"
#include "mindustry/gen/Posc.h"
#include "java/lang/Object.h"
#include "mindustry/graphics/Pal.h"
#include "mindustry/type/ItemStack.h"
#include "mindustry/game/EventType_LaunchItemEvent.h"
#include "mindustry/type/Planet.h"
#include "mindustry/graphics/Drawf.h"
#include "mindustry/gen/Drawc.h"
#include "mindustry/game/Team.h"
#include "mindustry/Vars.h"
#include "mindustry/core/GameState.h"

extern "C" {


void mark_mindustry_world_blocks_campaign_LaunchPad$LaunchPayloadComp(jobject object, jint mark, jint depth) {
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
	auto self = (mindustry_world_blocks_campaign_LaunchPad$LaunchPayloadComp *) object;
	if (self->F_stacks)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_stacks)->clazz)->markFunction)((jobject) self->F_stacks, mark, depth + 1);
	if (self->F_in)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_in)->clazz)->markFunction)((jobject) self->F_in, mark, depth + 1);
}

void clinit_mindustry_world_blocks_campaign_LaunchPad$LaunchPayloadComp(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
}

void init_mindustry_world_blocks_campaign_LaunchPad$LaunchPayloadComp(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/campaign/LaunchPad$LaunchPayloadComp:<init>", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_world_blocks_campaign_LaunchPad$LaunchPayloadComp(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(227);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(230);
	sp[0].o = frame[0].o;
	clinit_arc_struct_Seq(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_struct_Seq);
	init_arc_struct_Seq(ctx, sp[1].o);
	((mindustry_world_blocks_campaign_LaunchPad$LaunchPayloadComp *) NULL_CHECK(sp[0].o))->F_stacks = (jref) sp[1].o;
	LINE_NUMBER(231);
	sp[0].o = frame[0].o;
	clinit_arc_util_Interval(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_util_Interval);
	init_arc_util_Interval(ctx, sp[1].o);
	((mindustry_world_blocks_campaign_LaunchPad$LaunchPayloadComp *) NULL_CHECK(sp[0].o))->F_in = (jref) sp[1].o;
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_world_blocks_campaign_LaunchPad$LaunchPayloadComp_draw(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[17];
	auto stack = &frame[10];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/campaign/LaunchPad$LaunchPayloadComp:draw", 17 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(235);
	sp[0].o = frame[0].o;
	clinit_arc_math_Interp(ctx);
	sp[1].o = (jobject)SF_arc_math_Interp_pow5Out;
	jfloat temp0 = (jfloat)((func_mindustry_world_blocks_campaign_LaunchPad$LaunchPayloadComp_fout_arc_math_Interp_R_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_blocks_campaign_LaunchPad$LaunchPayloadComp_fout_arc_math_Interp_R_float])(ctx, sp[0].o, sp[1].o);
	frame[1].f = temp0;
	LINE_NUMBER(236);
	frame[2].f = ((((jfloat(1)) - (frame[1].f)) * (jfloat(1.3f))) + (jfloat(1)));
	LINE_NUMBER(237);
	jfloat temp1 = (jfloat)((func_mindustry_world_blocks_campaign_LaunchPad$LaunchPayloadComp_cx_R_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_world_blocks_campaign_LaunchPad$LaunchPayloadComp_cx_R_float])(ctx, (frame[0].o));
	frame[3].f = temp1;
	jfloat temp2 = (jfloat)((func_mindustry_world_blocks_campaign_LaunchPad$LaunchPayloadComp_cy_R_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_world_blocks_campaign_LaunchPad$LaunchPayloadComp_cy_R_float])(ctx, (frame[0].o));
	frame[4].f = temp2;
	LINE_NUMBER(238);
	jfloat temp3 = (jfloat)((func_mindustry_world_blocks_campaign_LaunchPad$LaunchPayloadComp_fin_R_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_world_blocks_campaign_LaunchPad$LaunchPayloadComp_fin_R_float])(ctx, (frame[0].o));
	jfloat temp4 = jfloat(130.0f);
	jint temp5 = (jint)((func_mindustry_world_blocks_campaign_LaunchPad$LaunchPayloadComp_id_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_world_blocks_campaign_LaunchPad$LaunchPayloadComp_id_R_int])(ctx, (frame[0].o));
	jfloat temp6 = (jfloat)SM_arc_math_Mathf_randomSeedRange_long_float_R_float(ctx, (jlong(temp5)), (jfloat(50.0f)));
	frame[5].f = (temp3 * (temp4 + temp6));
	LINE_NUMBER(240);
	SM_arc_graphics_g2d_Draw_z_float(ctx, (jfloat(110.001f)));
	LINE_NUMBER(242);
	clinit_mindustry_graphics_Pal(ctx);
	sp[0].o = (jobject)SF_mindustry_graphics_Pal_engine;
	SM_arc_graphics_g2d_Draw_color_arc_graphics_Color(ctx, sp[0].o);
	LINE_NUMBER(244);
	jfloat temp7 = jfloat(0.2f);
	jfloat temp8 = (jfloat)((func_mindustry_world_blocks_campaign_LaunchPad$LaunchPayloadComp_fslope_R_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_world_blocks_campaign_LaunchPad$LaunchPayloadComp_fslope_R_float])(ctx, (frame[0].o));
	frame[6].f = (temp7 + temp8);
	LINE_NUMBER(246);
	jfloat temp9 = frame[3].f;
	jfloat temp10 = frame[4].f;
	jint temp11 = 10;
	jfloat temp12 = (jfloat(25.0f)) * (((frame[6].f) + (frame[2].f)) - (jfloat(1)));
	clinit_arc_util_Tmp(ctx);
	sp[0].o = (jobject)SF_arc_util_Tmp_c2;
	clinit_mindustry_graphics_Pal(ctx);
	sp[1].o = (jobject)SF_mindustry_graphics_Pal_engine;
	sp[0].o = (jobject)((func_arc_graphics_Color_set_arc_graphics_Color_R_arc_graphics_Color) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_Color_set_arc_graphics_Color_R_arc_graphics_Color])(ctx, sp[0].o, sp[1].o);
	sp[0].o = (jobject)((func_arc_graphics_Color_a_float_R_arc_graphics_Color) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_Color_a_float_R_arc_graphics_Color])(ctx, sp[0].o, (frame[1].f));
	clinit_arc_util_Tmp(ctx);
	sp[1].o = (jobject)SF_arc_util_Tmp_c1;
	clinit_mindustry_graphics_Pal(ctx);
	sp[2].o = (jobject)SF_mindustry_graphics_Pal_engine;
	sp[1].o = (jobject)((func_arc_graphics_Color_set_arc_graphics_Color_R_arc_graphics_Color) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_graphics_Color_set_arc_graphics_Color_R_arc_graphics_Color])(ctx, sp[1].o, sp[2].o);
	sp[1].o = (jobject)((func_arc_graphics_Color_a_float_R_arc_graphics_Color) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_graphics_Color_a_float_R_arc_graphics_Color])(ctx, sp[1].o, (jfloat(0)));
	SM_arc_graphics_g2d_Fill_light_float_float_int_float_arc_graphics_Color_arc_graphics_Color(ctx, temp9, temp10, temp11, temp12, sp[0].o, sp[1].o);
	LINE_NUMBER(248);
	SM_arc_graphics_g2d_Draw_alpha_float(ctx, (frame[1].f));
	LINE_NUMBER(249);
	frame[7].i = (jint(0));
	}
label_11:;
	{
	if ((frame[7].i) >= (jint(4))) goto label_12;
	}
	{
	LINE_NUMBER(250);
	SM_mindustry_graphics_Drawf_tri_float_float_float_float_float(ctx, (frame[3].f), (frame[4].f), (jfloat(6.0f)), ((jfloat(40.0f)) * (((frame[6].f) + (frame[2].f)) - (jfloat(1)))), (((jfloat((frame[7].i))) * (jfloat(90.0f))) + (frame[5].f)));
	LINE_NUMBER(249);
	INST_IINC(7, 1);
	goto label_11;
	}
label_12:;
	{
	LINE_NUMBER(253);
	SM_arc_graphics_g2d_Draw_color(ctx);
	LINE_NUMBER(255);
	SM_arc_graphics_g2d_Draw_z_float(ctx, (jfloat(129.0f)));
	LINE_NUMBER(257);
	sp[0].o = (jobject)((func_mindustry_world_blocks_campaign_LaunchPad$LaunchPayloadComp_blockOn_R_mindustry_world_Block) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_world_blocks_campaign_LaunchPad$LaunchPayloadComp_blockOn_R_mindustry_world_Block])(ctx, (frame[0].o));
	frame[9].o = sp[0].o;
	if ((isInstance(ctx, (frame[9].o), &class_mindustry_world_blocks_campaign_LaunchPad)) == 0) goto label_17;
	}
	{
	frame[8].o = (checkCast(ctx, &class_mindustry_world_blocks_campaign_LaunchPad, (frame[9].o)));
	sp[0].o = (jobject)((mindustry_world_blocks_campaign_LaunchPad *) NULL_CHECK((frame[8].o)))->F_podRegion;
	sp += 1;
	goto label_19;
	}
label_17:;
	{
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_atlas;
	sp[0].o = (jobject)((func_arc_graphics_g2d_TextureAtlas_find_java_lang_String_R_arc_graphics_g2d_TextureAtlas$AtlasRegion) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_g2d_TextureAtlas_find_java_lang_String_R_arc_graphics_g2d_TextureAtlas$AtlasRegion])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"launchpod"_j))));
	sp += 1;
	}
label_19:;
	{
	sp -= 1;
	frame[7].o = sp[0].o;
	LINE_NUMBER(258);
	jfloat temp0 = frame[2].f;
	jfloat temp1 = (jfloat)((func_arc_graphics_g2d_TextureRegion_scl_R_float) ((void **) nullCheck(ctx, (frame[7].o))->vtable)[VTABLE_arc_graphics_g2d_TextureRegion_scl_R_float])(ctx, (frame[7].o));
	frame[2].f = (temp0 * temp1);
	LINE_NUMBER(259);
	frame[8].f = ((jfloat(((jint)((arc_graphics_g2d_TextureRegion *) NULL_CHECK((frame[7].o)))->F_width))) * (frame[2].f));
	frame[9].f = ((jfloat(((jint)((arc_graphics_g2d_TextureRegion *) NULL_CHECK((frame[7].o)))->F_height))) * (frame[2].f));
	LINE_NUMBER(261);
	SM_arc_graphics_g2d_Draw_alpha_float(ctx, (frame[1].f));
	LINE_NUMBER(262);
	SM_arc_graphics_g2d_Draw_rect_arc_graphics_g2d_TextureRegion_float_float_float_float_float(ctx, (frame[7].o), (frame[3].f), (frame[4].f), (frame[8].f), (frame[9].f), (frame[5].f));
	LINE_NUMBER(264);
	clinit_arc_util_Tmp(ctx);
	sp[0].o = (jobject)SF_arc_util_Tmp_v1;
	jfloat temp2 = jfloat(225.0f);
	sp[1].o = frame[0].o;
	clinit_arc_math_Interp(ctx);
	sp[2].o = (jobject)SF_arc_math_Interp_pow3In;
	jfloat temp3 = (jfloat)((func_mindustry_world_blocks_campaign_LaunchPad$LaunchPayloadComp_fin_arc_math_Interp_R_float) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_mindustry_world_blocks_campaign_LaunchPad$LaunchPayloadComp_fin_arc_math_Interp_R_float])(ctx, sp[1].o, sp[2].o);
	sp[0].o = (jobject)((func_arc_math_geom_Vec2_trns_float_float_R_arc_math_geom_Vec2) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Vec2_trns_float_float_R_arc_math_geom_Vec2])(ctx, sp[0].o, temp2, (temp3 * (jfloat(250.0f))));
	LINE_NUMBER(266);
	SM_arc_graphics_g2d_Draw_z_float(ctx, (jfloat(116.0f)));
	LINE_NUMBER(267);
	SM_arc_graphics_g2d_Draw_color_float_float_float_float(ctx, (jfloat(0)), (jfloat(0)), (jfloat(0)), ((jfloat(0.22f)) * (frame[1].f)));
	LINE_NUMBER(268);
	sp[0].o = frame[7].o;
	jfloat temp4 = frame[3].f;
	clinit_arc_util_Tmp(ctx);
	sp[1].o = (jobject)SF_arc_util_Tmp_v1;
	jfloat temp5 = temp4 + ((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK(sp[1].o))->F_x);
	jfloat temp6 = frame[4].f;
	clinit_arc_util_Tmp(ctx);
	sp[1].o = (jobject)SF_arc_util_Tmp_v1;
	SM_arc_graphics_g2d_Draw_rect_arc_graphics_g2d_TextureRegion_float_float_float_float_float(ctx, sp[0].o, temp5, (temp6 + ((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK(sp[1].o))->F_y)), (frame[8].f), (frame[9].f), (frame[5].f));
	LINE_NUMBER(270);
	SM_arc_graphics_g2d_Draw_reset(ctx);
	LINE_NUMBER(271);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jfloat M_mindustry_world_blocks_campaign_LaunchPad$LaunchPayloadComp_cx_R_float(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/campaign/LaunchPad$LaunchPayloadComp:cx", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(274);
	jfloat temp0 = (jfloat)((mindustry_world_blocks_campaign_LaunchPad$LaunchPayloadComp *) NULL_CHECK((frame[0].o)))->F_x;
	sp[0].o = frame[0].o;
	clinit_arc_math_Interp(ctx);
	sp[1].o = (jobject)SF_arc_math_Interp_pow2In;
	jfloat temp1 = (jfloat)((func_mindustry_world_blocks_campaign_LaunchPad$LaunchPayloadComp_fin_arc_math_Interp_R_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_blocks_campaign_LaunchPad$LaunchPayloadComp_fin_arc_math_Interp_R_float])(ctx, sp[0].o, sp[1].o);
	jfloat temp2 = jfloat(12.0f);
	jint temp3 = (jint)((func_mindustry_world_blocks_campaign_LaunchPad$LaunchPayloadComp_id_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_world_blocks_campaign_LaunchPad$LaunchPayloadComp_id_R_int])(ctx, (frame[0].o));
	jfloat temp4 = (jfloat)SM_arc_math_Mathf_randomSeedRange_long_float_R_float(ctx, (jlong((temp3 + (jint(3))))), (jfloat(4.0f)));
	popStackFrame(ctx);
	return (temp0 + (temp1 * (temp2 + temp4)));
	}

	popStackFrame(ctx);
}

jfloat M_mindustry_world_blocks_campaign_LaunchPad$LaunchPayloadComp_cy_R_float(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/campaign/LaunchPad$LaunchPayloadComp:cy", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(278);
	jfloat temp0 = (jfloat)((mindustry_world_blocks_campaign_LaunchPad$LaunchPayloadComp *) NULL_CHECK((frame[0].o)))->F_y;
	sp[0].o = frame[0].o;
	clinit_arc_math_Interp(ctx);
	sp[1].o = (jobject)SF_arc_math_Interp_pow5In;
	jfloat temp1 = (jfloat)((func_mindustry_world_blocks_campaign_LaunchPad$LaunchPayloadComp_fin_arc_math_Interp_R_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_blocks_campaign_LaunchPad$LaunchPayloadComp_fin_arc_math_Interp_R_float])(ctx, sp[0].o, sp[1].o);
	jfloat temp2 = jfloat(100.0f);
	jint temp3 = (jint)((func_mindustry_world_blocks_campaign_LaunchPad$LaunchPayloadComp_id_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_world_blocks_campaign_LaunchPad$LaunchPayloadComp_id_R_int])(ctx, (frame[0].o));
	jfloat temp4 = (jfloat)SM_arc_math_Mathf_randomSeedRange_long_float_R_float(ctx, (jlong((temp3 + (jint(2))))), (jfloat(30.0f)));
	popStackFrame(ctx);
	return (temp0 + (temp1 * (temp2 + temp4)));
	}

	popStackFrame(ctx);
}

void M_mindustry_world_blocks_campaign_LaunchPad$LaunchPayloadComp_update(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/campaign/LaunchPad$LaunchPayloadComp:update", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(283);
	frame[1].f = (jfloat(3.0f));
	LINE_NUMBER(284);
	sp[0].o = (jobject)((mindustry_world_blocks_campaign_LaunchPad$LaunchPayloadComp *) NULL_CHECK((frame[0].o)))->F_in;
	jfloat temp0 = jfloat(4.0f);
	jfloat temp1 = (jfloat)((func_mindustry_world_blocks_campaign_LaunchPad$LaunchPayloadComp_fin_R_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_world_blocks_campaign_LaunchPad$LaunchPayloadComp_fin_R_float])(ctx, (frame[0].o));
	jint temp2 = (jint)((func_arc_util_Interval_get_float_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_util_Interval_get_float_R_boolean])(ctx, sp[0].o, (temp0 - (temp1 * (jfloat(2)))));
	if (temp2 == 0) goto label_2;
	}
	{
	LINE_NUMBER(285);
	clinit_mindustry_content_Fx(ctx);
	sp[0].o = (jobject)SF_mindustry_content_Fx_rocketSmoke;
	jfloat temp0 = (jfloat)((func_mindustry_world_blocks_campaign_LaunchPad$LaunchPayloadComp_cx_R_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_world_blocks_campaign_LaunchPad$LaunchPayloadComp_cx_R_float])(ctx, (frame[0].o));
	jfloat temp1 = (jfloat)SM_arc_math_Mathf_range_float_R_float(ctx, (frame[1].f));
	jfloat temp2 = temp0 + temp1;
	jfloat temp3 = (jfloat)((func_mindustry_world_blocks_campaign_LaunchPad$LaunchPayloadComp_cy_R_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_world_blocks_campaign_LaunchPad$LaunchPayloadComp_cy_R_float])(ctx, (frame[0].o));
	jfloat temp4 = (jfloat)SM_arc_math_Mathf_range_float_R_float(ctx, (frame[1].f));
	jfloat temp5 = temp3 + temp4;
	jfloat temp6 = (jfloat)((func_mindustry_world_blocks_campaign_LaunchPad$LaunchPayloadComp_fin_R_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_world_blocks_campaign_LaunchPad$LaunchPayloadComp_fin_R_float])(ctx, (frame[0].o));
	((func_mindustry_entities_Effect_at_float_float_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_entities_Effect_at_float_float_float])(ctx, sp[0].o, temp2, temp5, temp6);
	}
label_2:;
	LINE_NUMBER(287);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_world_blocks_campaign_LaunchPad$LaunchPayloadComp_remove(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/campaign/LaunchPad$LaunchPayloadComp:remove", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(291);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	jint temp0 = (jint)((func_mindustry_core_GameState_isCampaign_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_GameState_isCampaign_R_boolean])(ctx, sp[0].o);
	if (temp0 == 0) goto label_1;
	}
	{
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_net;
	jint temp0 = (jint)((func_mindustry_net_Net_client_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_net_Net_client_R_boolean])(ctx, sp[0].o);
	if (temp0 == 0) goto label_2;
	}
label_1:;
	popStackFrame(ctx);
	INST_RETURN();
label_2:;
	{
	LINE_NUMBER(293);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	sp[0].o = (jobject)((mindustry_core_GameState *) NULL_CHECK(sp[0].o))->F_rules;
	sp[0].o = (jobject)((mindustry_game_Rules *) NULL_CHECK(sp[0].o))->F_sector;
	sp[0].o = (jobject)((mindustry_type_Sector *) NULL_CHECK(sp[0].o))->F_info;
	sp[0].o = (jobject)((mindustry_game_SectorInfo *) NULL_CHECK(sp[0].o))->F_destination;
	frame[1].o = sp[0].o;
	LINE_NUMBER(296);
	sp[0].o = (jobject)((func_mindustry_world_blocks_campaign_LaunchPad$LaunchPayloadComp_team_R_mindustry_game_Team) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_world_blocks_campaign_LaunchPad$LaunchPayloadComp_team_R_mindustry_game_Team])(ctx, (frame[0].o));
	clinit_mindustry_Vars(ctx);
	sp[1].o = (jobject)SF_mindustry_Vars_state;
	sp[1].o = (jobject)((mindustry_core_GameState *) NULL_CHECK(sp[1].o))->F_rules;
	sp[1].o = (jobject)((mindustry_game_Rules *) NULL_CHECK(sp[1].o))->F_defaultTeam;
	if (sp[0].o != sp[1].o) goto label_4;
	}
	INST_ALOAD(1);
	if ((--sp)->o == nullptr) goto label_4;
	{
	sp[0].o = frame[1].o;
	clinit_mindustry_Vars(ctx);
	sp[1].o = (jobject)SF_mindustry_Vars_state;
	sp[1].o = (jobject)((mindustry_core_GameState *) NULL_CHECK(sp[1].o))->F_rules;
	sp[1].o = (jobject)((mindustry_game_Rules *) NULL_CHECK(sp[1].o))->F_sector;
	if (sp[0].o == sp[1].o) goto label_4;
	}
	{
	LINE_NUMBER(297);
	clinit_mindustry_type_ItemSeq(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_type_ItemSeq);
	init_mindustry_type_ItemSeq(ctx, sp[0].o);
	frame[2].o = sp[0].o;
	LINE_NUMBER(299);
	sp[0].o = (jobject)((mindustry_world_blocks_campaign_LaunchPad$LaunchPayloadComp *) NULL_CHECK((frame[0].o)))->F_stacks;
	sp[0].o = (jobject)((func_arc_struct_Seq_iterator_R_java_util_Iterator) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_iterator_R_java_util_Iterator])(ctx, sp[0].o);
	frame[3].o = sp[0].o;
	}
label_7:;
	{
	jint temp0 = (jint)((func_java_util_Iterator_hasNext_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_hasNext_R_boolean, (frame[3].o)))(ctx, (frame[3].o));
	if (temp0 == 0) goto label_8;
	}
	{
	sp[0].o = (jobject)((func_java_util_Iterator_next_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_next_R_java_lang_Object, (frame[3].o)))(ctx, (frame[3].o));
	frame[4].o = (checkCast(ctx, &class_mindustry_type_ItemStack, sp[0].o));
	LINE_NUMBER(300);
	((func_mindustry_type_ItemSeq_add_mindustry_type_ItemStack) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_mindustry_type_ItemSeq_add_mindustry_type_ItemStack])(ctx, (frame[2].o), (frame[4].o));
	LINE_NUMBER(303);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	sp[0].o = (jobject)((mindustry_core_GameState *) NULL_CHECK(sp[0].o))->F_rules;
	sp[0].o = (jobject)((mindustry_game_Rules *) NULL_CHECK(sp[0].o))->F_sector;
	sp[0].o = (jobject)((mindustry_type_Sector *) NULL_CHECK(sp[0].o))->F_info;
	((func_mindustry_game_SectorInfo_handleItemExport_mindustry_type_ItemStack) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_game_SectorInfo_handleItemExport_mindustry_type_ItemStack])(ctx, sp[0].o, (frame[4].o));
	LINE_NUMBER(304);
	clinit_mindustry_game_EventType$LaunchItemEvent(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_game_EventType$LaunchItemEvent);
	init_mindustry_game_EventType$LaunchItemEvent_mindustry_type_ItemStack(ctx, sp[0].o, (frame[4].o));
	SM_arc_Events_fire_java_lang_Object(ctx, sp[0].o);
	LINE_NUMBER(305);
	goto label_7;
	}
label_8:;
	{
	LINE_NUMBER(307);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	sp[0].o = (jobject)((func_mindustry_core_GameState_getPlanet_R_mindustry_type_Planet) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_GameState_getPlanet_R_mindustry_type_Planet])(ctx, sp[0].o);
	sp[0].o = (jobject)((mindustry_type_Planet *) NULL_CHECK(sp[0].o))->F_campaignRules;
	if (((jint)((mindustry_game_CampaignRules *) NULL_CHECK(sp[0].o))->F_legacyLaunchPads) == 0) goto label_4;
	}
	{
	LINE_NUMBER(308);
	((func_mindustry_type_Sector_addItems_mindustry_type_ItemSeq) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_type_Sector_addItems_mindustry_type_ItemSeq])(ctx, (frame[1].o), (frame[2].o));
	}
label_4:;
	LINE_NUMBER(311);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void *vtable_mindustry_world_blocks_campaign_LaunchPad$LaunchPayloadComp[] {
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
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) M_mindustry_world_blocks_campaign_LaunchPad$LaunchPayloadComp_remove,
	(void *) M_mindustry_world_blocks_campaign_LaunchPad$LaunchPayloadComp_update,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) M_arc_math_geom_Position_angleTo_arc_math_geom_Position_R_float,
	(void *) M_arc_math_geom_Position_angleTo_float_float_R_float,
	(void *) M_arc_math_geom_Position_dst2_arc_math_geom_Position_R_float,
	(void *) M_arc_math_geom_Position_dst_arc_math_geom_Position_R_float,
	(void *) M_arc_math_geom_Position_dst_float_float_R_float,
	(void *) M_arc_math_geom_Position_dst2_float_float_R_float,
	(void *) M_arc_math_geom_Position_within_arc_math_geom_Position_float_R_boolean,
	(void *) M_arc_math_geom_Position_within_float_float_float_R_boolean,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) M_mindustry_world_blocks_campaign_LaunchPad$LaunchPayloadComp_draw,
	(void *) nullptr,
	(void *) M_arc_math_Scaled_fout_R_float,
	(void *) M_arc_math_Scaled_fout_arc_math_Interp_R_float,
	(void *) M_arc_math_Scaled_fout_float_R_float,
	(void *) M_arc_math_Scaled_fin_arc_math_Interp_R_float,
	(void *) M_arc_math_Scaled_finpow_R_float,
	(void *) M_arc_math_Scaled_foutpow_R_float,
	(void *) M_arc_math_Scaled_finpowdown_R_float,
	(void *) M_arc_math_Scaled_foutpowdown_R_float,
	(void *) M_arc_math_Scaled_fslope_R_float,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) M_mindustry_world_blocks_campaign_LaunchPad$LaunchPayloadComp_cx_R_float,
	(void *) M_mindustry_world_blocks_campaign_LaunchPad$LaunchPayloadComp_cy_R_float,
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
	{ "clipSize", "()F" },
	{ "draw", "()V" },
	{ "fin", "()F" },
	{ "fout", "()F" },
	{ "fout", "(Larc/math/Interp;)F" },
	{ "fout", "(F)F" },
	{ "fin", "(Larc/math/Interp;)F" },
	{ "finpow", "()F" },
	{ "foutpow", "()F" },
	{ "finpowdown", "()F" },
	{ "foutpowdown", "()F" },
	{ "fslope", "()F" },
	{ "lifetime", "()F" },
	{ "time", "()F" },
	{ "lifetime", "(F)V" },
	{ "time", "(F)V" },
	{ "inFogTo", "(Lmindustry/game/Team;)Z" },
	{ "cheating", "()Z" },
	{ "team", "()Lmindustry/game/Team;" },
	{ "closestCore", "()Lmindustry/world/blocks/storage/CoreBlock$CoreBuild;" },
	{ "closestEnemyCore", "()Lmindustry/world/blocks/storage/CoreBlock$CoreBuild;" },
	{ "core", "()Lmindustry/world/blocks/storage/CoreBlock$CoreBuild;" },
	{ "team", "(Lmindustry/game/Team;)V" },
	{ "cx", "()F" },
	{ "cy", "()F" },
};

static jclass interfaces[] { &class_mindustry_gen_Drawc, &class_mindustry_gen_Timedc, &class_mindustry_gen_Teamc, };

static FieldMetadata fields[] {
	{ "x", &class_float, offsetof(mindustry_world_blocks_campaign_LaunchPad$LaunchPayloadComp, F_x), "F", 0 },
	{ "y", &class_float, offsetof(mindustry_world_blocks_campaign_LaunchPad$LaunchPayloadComp, F_y), "F", 0 },
	{ "stacks", &class_arc_struct_Seq, offsetof(mindustry_world_blocks_campaign_LaunchPad$LaunchPayloadComp, F_stacks), "Larc/struct/Seq;", 0 },
	{ "in", &class_arc_util_Interval, offsetof(mindustry_world_blocks_campaign_LaunchPad$LaunchPayloadComp, F_in), "Larc/util/Interval;", 128 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_mindustry_world_blocks_campaign_LaunchPad$LaunchPayloadComp, 0, "()V", 0 },
	{ "draw", (intptr_t) M_mindustry_world_blocks_campaign_LaunchPad$LaunchPayloadComp_draw, VTABLE_mindustry_world_blocks_campaign_LaunchPad$LaunchPayloadComp_draw, "()V", 1 },
	{ "cx", (intptr_t) M_mindustry_world_blocks_campaign_LaunchPad$LaunchPayloadComp_cx_R_float, VTABLE_mindustry_world_blocks_campaign_LaunchPad$LaunchPayloadComp_cx_R_float, "()F", 0 },
	{ "cy", (intptr_t) M_mindustry_world_blocks_campaign_LaunchPad$LaunchPayloadComp_cy_R_float, VTABLE_mindustry_world_blocks_campaign_LaunchPad$LaunchPayloadComp_cy_R_float, "()F", 0 },
	{ "update", (intptr_t) M_mindustry_world_blocks_campaign_LaunchPad$LaunchPayloadComp_update, VTABLE_mindustry_world_blocks_campaign_LaunchPad$LaunchPayloadComp_update, "()V", 1 },
	{ "remove", (intptr_t) M_mindustry_world_blocks_campaign_LaunchPad$LaunchPayloadComp_remove, VTABLE_mindustry_world_blocks_campaign_LaunchPad$LaunchPayloadComp_remove, "()V", 1 },
};

Class class_mindustry_world_blocks_campaign_LaunchPad$LaunchPayloadComp{
		.nativeName = (intptr_t) "mindustry/world/blocks/campaign/LaunchPad$LaunchPayloadComp",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(mindustry_world_blocks_campaign_LaunchPad$LaunchPayloadComp),
		.classVtable = (intptr_t) vtable_mindustry_world_blocks_campaign_LaunchPad$LaunchPayloadComp,
		.staticInitializer = (intptr_t) clinit_mindustry_world_blocks_campaign_LaunchPad$LaunchPayloadComp,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_mindustry_world_blocks_campaign_LaunchPad$LaunchPayloadComp,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) &class_mindustry_world_blocks_campaign_LaunchPad,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 1056,
		.interfaceCount = 3,
		.nativeInterfaces = (intptr_t) interfaces,
		.fieldCount = 4,
		.nativeFields = (intptr_t) fields,
		.methodCount = 6,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 78,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_mindustry_world_blocks_campaign_LaunchPad$LaunchPayloadComp = registerClass(&class_mindustry_world_blocks_campaign_LaunchPad$LaunchPayloadComp);

}

