#include "mindustry/world/blocks/campaign/LaunchPad_LaunchPadBuild.h"
#include "arc/func/Prov.h"
#include "arc/math/geom/Point2.h"
#include "mindustry/logic/LAccess.h"
#include "arc/graphics/Color.h"
#include "arc/graphics/g2d/Draw.h"
#include "java/lang/Runnable.h"
#include "mindustry/entities/Effect.h"
#include "mindustry/world/blocks/campaign/LaunchPad.h"
#include "mindustry/content/Fx.h"
#include "arc/util/I18NBundle.h"
#include "arc/struct/Seq.h"
#include "arc/scene/ui/layout/Cell.h"
#include "mindustry/world/blocks/campaign/LaunchPad_LaunchPadBuild_invoke_java_lang_Runnable_1.h"
#include "arc/math/geom/Position.h"
#include "mindustry/game/SectorInfo.h"
#include "mindustry/gen/LaunchPayload.h"
#include "arc/math/Mathf.h"
#include "mindustry/world/blocks/campaign/LaunchPad_LaunchPadBuild.h"
#include "arc/Core.h"
#include "mindustry/type/Liquid.h"
#include "arc/Graphics_Cursor.h"
#include "mindustry/type/Item.h"
#include "mindustry/world/modules/ItemModule.h"
#include "mindustry/gen/Building.h"
#include "java/lang/Object.h"
#include "mindustry/world/blocks/liquid/LiquidBlock.h"
#include "mindustry/world/blocks/campaign/LaunchPad_LaunchPadBuild_invoke_arc_func_Cons_1.h"
#include "mindustry/world/blocks/campaign/LaunchPad_LaunchPadBuild_invoke_arc_func_Prov_1.h"
#include "mindustry/world/modules/LiquidModule.h"
#include "arc/util/io/Writes.h"
#include "mindustry/ui/dialogs/PlanetDialog.h"
#include "mindustry/net/Net.h"
#include "mindustry/world/Block.h"
#include "arc/scene/style/TextureRegionDrawable.h"
#include "mindustry/game/Rules.h"
#include "mindustry/ui/Displayable.h"
#include "arc/graphics/g2d/Fill.h"
#include "arc/func/Cons.h"
#include "java/lang/String.h"
#include "arc/scene/style/Drawable.h"
#include "arc/scene/ui/ImageButton_ImageButtonStyle.h"
#include "arc/math/geom/Geometry.h"
#include "java/lang/Math.h"
#include "arc/graphics/g2d/TextureRegion.h"
#include "mindustry/world/blocks/campaign/LaunchPad_LaunchPadBuild_invoke_mindustry_world_modules_ItemModule_ItemConsumer_1.h"
#include "mindustry/gen/Icon.h"
#include "arc/scene/ui/layout/Table.h"
#include "mindustry/type/Sector.h"
#include "mindustry/ui/Styles.h"
#include "mindustry/core/UI.h"
#include "mindustry/world/modules/ItemModule_ItemConsumer.h"
#include "java/lang/CharSequence.h"
#include "arc/util/io/Reads.h"
#include "arc/Graphics_Cursor_SystemCursor.h"
#include "mindustry/graphics/Pal.h"
#include "mindustry/type/ItemStack.h"
#include "arc/audio/Sound.h"
#include "mindustry/gen/Player.h"
#include "mindustry/type/Planet.h"
#include "mindustry/graphics/Drawf.h"
#include "mindustry/game/Team.h"
#include "mindustry/Vars.h"
#include "mindustry/core/GameState.h"

extern "C" {


void mark_mindustry_world_blocks_campaign_LaunchPad$LaunchPadBuild(jobject object, jint mark, jint depth) {
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
	auto self = (mindustry_world_blocks_campaign_LaunchPad$LaunchPadBuild *) object;
	if (self->F_this$0)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_this$0)->clazz)->markFunction)((jobject) self->F_this$0, mark, depth + 1);
}

void clinit_mindustry_world_blocks_campaign_LaunchPad$LaunchPadBuild(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	clinit_mindustry_gen_Building(ctx);
}

void init_mindustry_world_blocks_campaign_LaunchPad$LaunchPadBuild_mindustry_world_blocks_campaign_LaunchPad(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/campaign/LaunchPad$LaunchPadBuild:<init>", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_world_blocks_campaign_LaunchPad$LaunchPadBuild(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(83);
	((mindustry_world_blocks_campaign_LaunchPad$LaunchPadBuild *) NULL_CHECK((frame[0].o)))->F_this$0 = (jref) (frame[1].o);
	init_mindustry_gen_Building(ctx, (frame[0].o));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_mindustry_world_blocks_campaign_LaunchPad$LaunchPadBuild_getCursor_R_arc_Graphics$Cursor(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/campaign/LaunchPad$LaunchPadBuild:getCursor", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(88);
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
	clinit_arc_Graphics$Cursor$SystemCursor(ctx);
	(sp++)->o = SF_arc_Graphics$Cursor$SystemCursor_arrow;
	goto label_3;
label_2:;
	INST_ALOAD(0);
	POP_N(1); // Pop method args
	sp->o = (jobject)M_mindustry_gen_Building_getCursor_R_arc_Graphics$Cursor(ctx, sp[0].o);
	sp++;
label_3:;
	popStackFrame(ctx);
	INST_ARETURN();

	popStackFrame(ctx);
}

jbool M_mindustry_world_blocks_campaign_LaunchPad$LaunchPadBuild_shouldConsume_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/campaign/LaunchPad$LaunchPadBuild:shouldConsume", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(94);
	jfloat temp0 = (jfloat)((mindustry_world_blocks_campaign_LaunchPad$LaunchPadBuild *) NULL_CHECK((frame[0].o)))->F_launchCounter;
	sp[0].o = (jobject)((mindustry_world_blocks_campaign_LaunchPad$LaunchPadBuild *) NULL_CHECK((frame[0].o)))->F_this$0;
	if ((floatCompare(temp0, ((jfloat)((mindustry_world_blocks_campaign_LaunchPad *) NULL_CHECK(sp[0].o))->F_launchTime), 1)) >= 0) goto label_1;
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

jdouble M_mindustry_world_blocks_campaign_LaunchPad$LaunchPadBuild_sense_mindustry_logic_LAccess_R_double(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/campaign/LaunchPad$LaunchPadBuild:sense", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(99);
	sp[0].o = frame[1].o;
	clinit_mindustry_logic_LAccess(ctx);
	sp[1].o = (jobject)SF_mindustry_logic_LAccess_progress;
	if (sp[0].o != sp[1].o) goto label_1;
	}
	{
	jfloat temp0 = (jfloat)((mindustry_world_blocks_campaign_LaunchPad$LaunchPadBuild *) NULL_CHECK((frame[0].o)))->F_launchCounter;
	sp[0].o = (jobject)((mindustry_world_blocks_campaign_LaunchPad$LaunchPadBuild *) NULL_CHECK((frame[0].o)))->F_this$0;
	jfloat temp1 = (jfloat)SM_arc_math_Mathf_clamp_float_R_float(ctx, (temp0 / ((jfloat)((mindustry_world_blocks_campaign_LaunchPad *) NULL_CHECK(sp[0].o))->F_launchTime)));
	popStackFrame(ctx);
	return (jdouble(temp1));
	}
label_1:;
	{
	LINE_NUMBER(100);
	jdouble temp0 = (jdouble)M_mindustry_gen_Building_sense_mindustry_logic_LAccess_R_double(ctx, (frame[0].o), (frame[1].o));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

void M_mindustry_world_blocks_campaign_LaunchPad$LaunchPadBuild_draw(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[16];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/campaign/LaunchPad$LaunchPadBuild:draw", 16 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(105);
	sp[0].o = (jobject)((mindustry_world_blocks_campaign_LaunchPad$LaunchPadBuild *) NULL_CHECK((frame[0].o)))->F_this$0;
	if (((jint)((mindustry_world_Block *) NULL_CHECK(sp[0].o))->F_hasLiquids) == 0) goto label_1;
	}
	{
	sp[0].o = (jobject)((mindustry_world_blocks_campaign_LaunchPad$LaunchPadBuild *) NULL_CHECK((frame[0].o)))->F_this$0;
	sp[0].o = (jobject)((mindustry_world_blocks_campaign_LaunchPad *) NULL_CHECK(sp[0].o))->F_drawLiquid;
	if (sp[0].o == nullptr) goto label_1;
	}
	{
	LINE_NUMBER(106);
	sp[0].o = (jobject)((mindustry_world_blocks_campaign_LaunchPad$LaunchPadBuild *) NULL_CHECK((frame[0].o)))->F_this$0;
	sp[0].o = (jobject)((mindustry_world_blocks_campaign_LaunchPad *) NULL_CHECK(sp[0].o))->F_bottomColor;
	SM_arc_graphics_g2d_Draw_color_arc_graphics_Color(ctx, sp[0].o);
	LINE_NUMBER(107);
	jfloat temp0 = (jfloat)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_x;
	jfloat temp1 = (jfloat)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_y;
	sp[0].o = (jobject)((mindustry_world_blocks_campaign_LaunchPad$LaunchPadBuild *) NULL_CHECK((frame[0].o)))->F_this$0;
	jfloat temp2 = (jfloat((((jint)((mindustry_world_Block *) NULL_CHECK(sp[0].o))->F_size) * (8)))) / (jfloat(2));
	sp[0].o = (jobject)((mindustry_world_blocks_campaign_LaunchPad$LaunchPadBuild *) NULL_CHECK((frame[0].o)))->F_this$0;
	SM_arc_graphics_g2d_Fill_square_float_float_float(ctx, temp0, temp1, (temp2 - ((jfloat)((mindustry_world_blocks_campaign_LaunchPad *) NULL_CHECK(sp[0].o))->F_liquidPad)));
	LINE_NUMBER(108);
	SM_arc_graphics_g2d_Draw_color(ctx);
	LINE_NUMBER(109);
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_block;
	jint temp3 = (jint)((mindustry_world_Block *) NULL_CHECK(sp[0].o))->F_size;
	jfloat temp4 = (jfloat)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_x;
	jfloat temp5 = (jfloat)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_y;
	sp[0].o = (jobject)((mindustry_world_blocks_campaign_LaunchPad$LaunchPadBuild *) NULL_CHECK((frame[0].o)))->F_this$0;
	jfloat temp6 = (jfloat)((mindustry_world_blocks_campaign_LaunchPad *) NULL_CHECK(sp[0].o))->F_liquidPad;
	sp[0].o = (jobject)((mindustry_world_blocks_campaign_LaunchPad$LaunchPadBuild *) NULL_CHECK((frame[0].o)))->F_this$0;
	jfloat temp7 = (jfloat)((mindustry_world_blocks_campaign_LaunchPad *) NULL_CHECK(sp[0].o))->F_liquidPad;
	sp[0].o = (jobject)((mindustry_world_blocks_campaign_LaunchPad$LaunchPadBuild *) NULL_CHECK((frame[0].o)))->F_this$0;
	jfloat temp8 = (jfloat)((mindustry_world_blocks_campaign_LaunchPad *) NULL_CHECK(sp[0].o))->F_liquidPad;
	sp[0].o = (jobject)((mindustry_world_blocks_campaign_LaunchPad$LaunchPadBuild *) NULL_CHECK((frame[0].o)))->F_this$0;
	jfloat temp9 = (jfloat)((mindustry_world_blocks_campaign_LaunchPad *) NULL_CHECK(sp[0].o))->F_liquidPad;
	sp[0].o = (jobject)((mindustry_world_blocks_campaign_LaunchPad$LaunchPadBuild *) NULL_CHECK((frame[0].o)))->F_this$0;
	sp[0].o = (jobject)((mindustry_world_blocks_campaign_LaunchPad *) NULL_CHECK(sp[0].o))->F_drawLiquid;
	sp[1].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_liquids;
	sp[2].o = (jobject)((mindustry_world_blocks_campaign_LaunchPad$LaunchPadBuild *) NULL_CHECK((frame[0].o)))->F_this$0;
	sp[2].o = (jobject)((mindustry_world_blocks_campaign_LaunchPad *) NULL_CHECK(sp[2].o))->F_drawLiquid;
	jfloat temp10 = (jfloat)((func_mindustry_world_modules_LiquidModule_get_mindustry_type_Liquid_R_float) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_mindustry_world_modules_LiquidModule_get_mindustry_type_Liquid_R_float])(ctx, sp[1].o, sp[2].o);
	sp[1].o = (jobject)((mindustry_world_blocks_campaign_LaunchPad$LaunchPadBuild *) NULL_CHECK((frame[0].o)))->F_this$0;
	SM_mindustry_world_blocks_liquid_LiquidBlock_drawTiledFrames_int_float_float_float_float_float_float_mindustry_type_Liquid_float(ctx, temp3, temp4, temp5, temp6, temp7, temp8, temp9, sp[0].o, (temp10 / ((jfloat)((mindustry_world_Block *) NULL_CHECK(sp[1].o))->F_liquidCapacity)));
	}
label_1:;
	{
	LINE_NUMBER(112);
	M_mindustry_gen_Building_draw(ctx, (frame[0].o));
	LINE_NUMBER(114);
	sp[0].o = (jobject)((mindustry_world_blocks_campaign_LaunchPad$LaunchPadBuild *) NULL_CHECK((frame[0].o)))->F_this$0;
	sp[0].o = (jobject)((mindustry_world_blocks_campaign_LaunchPad *) NULL_CHECK(sp[0].o))->F_lightRegion;
	jint temp0 = (jint)((func_arc_graphics_g2d_TextureRegion_found_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_g2d_TextureRegion_found_R_boolean])(ctx, sp[0].o);
	if (temp0 == 0) goto label_7;
	}
	{
	LINE_NUMBER(115);
	sp[0].o = (jobject)((mindustry_world_blocks_campaign_LaunchPad$LaunchPadBuild *) NULL_CHECK((frame[0].o)))->F_this$0;
	sp[0].o = (jobject)((mindustry_world_blocks_campaign_LaunchPad *) NULL_CHECK(sp[0].o))->F_lightColor;
	SM_arc_graphics_g2d_Draw_color_arc_graphics_Color(ctx, sp[0].o);
	LINE_NUMBER(116);
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_items;
	jint temp0 = (jint)((func_mindustry_world_modules_ItemModule_total_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_modules_ItemModule_total_R_int])(ctx, sp[0].o);
	jfloat temp1 = jfloat(temp0);
	sp[0].o = (jobject)((mindustry_world_blocks_campaign_LaunchPad$LaunchPadBuild *) NULL_CHECK((frame[0].o)))->F_this$0;
	jfloat temp2 = temp1 / (jfloat(((jint)((mindustry_world_Block *) NULL_CHECK(sp[0].o))->F_itemCapacity)));
	jfloat temp3 = (jfloat)((mindustry_world_blocks_campaign_LaunchPad$LaunchPadBuild *) NULL_CHECK((frame[0].o)))->F_launchCounter;
	sp[0].o = (jobject)((mindustry_world_blocks_campaign_LaunchPad$LaunchPadBuild *) NULL_CHECK((frame[0].o)))->F_this$0;
	jfloat temp4 = (jfloat)SM_java_lang_Math_min_float_float_R_float(ctx, temp2, (temp3 / ((jfloat)((mindustry_world_blocks_campaign_LaunchPad *) NULL_CHECK(sp[0].o))->F_launchTime)));
	frame[1].f = temp4;
	LINE_NUMBER(118);
	frame[2].i = (jint(0));
	}
label_11:;
	{
	if ((frame[2].i) >= (jint(4))) goto label_12;
	}
	{
	LINE_NUMBER(119);
	frame[3].i = (jint(0));
	}
label_14:;
	{
	jint temp0 = frame[3].i;
	sp[0].o = (jobject)((mindustry_world_blocks_campaign_LaunchPad$LaunchPadBuild *) NULL_CHECK((frame[0].o)))->F_this$0;
	if (temp0 >= ((jint)((mindustry_world_blocks_campaign_LaunchPad *) NULL_CHECK(sp[0].o))->F_lightSteps)) goto label_15;
	}
	{
	LINE_NUMBER(120);
	jfloat temp0 = frame[1].f;
	jfloat temp1 = jfloat((frame[3].i));
	sp[0].o = (jobject)((mindustry_world_blocks_campaign_LaunchPad$LaunchPadBuild *) NULL_CHECK((frame[0].o)))->F_this$0;
	jfloat temp2 = temp1 / (jfloat(((jint)((mindustry_world_blocks_campaign_LaunchPad *) NULL_CHECK(sp[0].o))->F_lightSteps)));
	jfloat temp3 = (jfloat((frame[3].i))) + (jfloat(1));
	sp[0].o = (jobject)((mindustry_world_blocks_campaign_LaunchPad$LaunchPadBuild *) NULL_CHECK((frame[0].o)))->F_this$0;
	jfloat temp4 = (jfloat)SM_arc_math_Mathf_curve_float_float_float_R_float(ctx, temp0, temp2, (temp3 / (jfloat(((jint)((mindustry_world_blocks_campaign_LaunchPad *) NULL_CHECK(sp[0].o))->F_lightSteps)))));
	frame[4].f = temp4;
	LINE_NUMBER(121);
	jfloat temp5 = -((jfloat((frame[3].i))) - (jfloat(1)));
	sp[0].o = (jobject)((mindustry_world_blocks_campaign_LaunchPad$LaunchPadBuild *) NULL_CHECK((frame[0].o)))->F_this$0;
	frame[5].f = (temp5 * ((jfloat)((mindustry_world_blocks_campaign_LaunchPad *) NULL_CHECK(sp[0].o))->F_lightStep));
	LINE_NUMBER(123);
	clinit_mindustry_graphics_Pal(ctx);
	sp[0].o = (jobject)SF_mindustry_graphics_Pal_metalGrayDark;
	sp[1].o = (jobject)((mindustry_world_blocks_campaign_LaunchPad$LaunchPadBuild *) NULL_CHECK((frame[0].o)))->F_this$0;
	sp[1].o = (jobject)((mindustry_world_blocks_campaign_LaunchPad *) NULL_CHECK(sp[1].o))->F_lightColor;
	SM_arc_graphics_g2d_Draw_color_arc_graphics_Color_arc_graphics_Color_float(ctx, sp[0].o, sp[1].o, (frame[4].f));
	LINE_NUMBER(124);
	sp[0].o = (jobject)((mindustry_world_blocks_campaign_LaunchPad$LaunchPadBuild *) NULL_CHECK((frame[0].o)))->F_this$0;
	sp[0].o = (jobject)((mindustry_world_blocks_campaign_LaunchPad *) NULL_CHECK(sp[0].o))->F_lightRegion;
	jfloat temp6 = (jfloat)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_x;
	sp[1].o = (jobject)SM_arc_math_geom_Geometry_d8edge_int_R_arc_math_geom_Point2(ctx, (frame[2].i));
	jfloat temp7 = temp6 + ((jfloat(((jint)((arc_math_geom_Point2 *) NULL_CHECK(sp[1].o))->F_x))) * (frame[5].f));
	jfloat temp8 = (jfloat)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_y;
	sp[1].o = (jobject)SM_arc_math_geom_Geometry_d8edge_int_R_arc_math_geom_Point2(ctx, (frame[2].i));
	SM_arc_graphics_g2d_Draw_rect_arc_graphics_g2d_TextureRegion_float_float_float(ctx, sp[0].o, temp7, (temp8 + ((jfloat(((jint)((arc_math_geom_Point2 *) NULL_CHECK(sp[1].o))->F_y))) * (frame[5].f))), (jfloat(((frame[2].i) * (90)))));
	LINE_NUMBER(119);
	INST_IINC(3, 1);
	goto label_14;
	}
label_15:;
	{
	LINE_NUMBER(118);
	INST_IINC(2, 1);
	goto label_11;
	}
label_12:;
	LINE_NUMBER(128);
	SM_arc_graphics_g2d_Draw_reset(ctx);
label_7:;
	{
	LINE_NUMBER(131);
	jfloat temp0 = (jfloat)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_x;
	jfloat temp1 = (jfloat)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_y;
	sp[0].o = (jobject)((mindustry_world_blocks_campaign_LaunchPad$LaunchPadBuild *) NULL_CHECK((frame[0].o)))->F_this$0;
	SM_mindustry_graphics_Drawf_shadow_float_float_float(ctx, temp0, temp1, (jfloat((((jint)((mindustry_world_Block *) NULL_CHECK(sp[0].o))->F_size) * (8)))));
	LINE_NUMBER(132);
	sp[0].o = (jobject)((mindustry_world_blocks_campaign_LaunchPad$LaunchPadBuild *) NULL_CHECK((frame[0].o)))->F_this$0;
	sp[0].o = (jobject)((mindustry_world_blocks_campaign_LaunchPad *) NULL_CHECK(sp[0].o))->F_podRegion;
	SM_arc_graphics_g2d_Draw_rect_arc_graphics_g2d_TextureRegion_float_float(ctx, sp[0].o, ((jfloat)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_x), ((jfloat)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_y));
	LINE_NUMBER(134);
	SM_arc_graphics_g2d_Draw_reset(ctx);
	LINE_NUMBER(135);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jbool M_mindustry_world_blocks_campaign_LaunchPad$LaunchPadBuild_acceptItem_mindustry_gen_Building_mindustry_type_Item_R_boolean(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/campaign/LaunchPad$LaunchPadBuild:acceptItem", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(139);
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_items;
	jint temp0 = (jint)((func_mindustry_world_modules_ItemModule_total_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_modules_ItemModule_total_R_int])(ctx, sp[0].o);
	sp[0].o = (jobject)((mindustry_world_blocks_campaign_LaunchPad$LaunchPadBuild *) NULL_CHECK((frame[0].o)))->F_this$0;
	if (temp0 >= ((jint)((mindustry_world_Block *) NULL_CHECK(sp[0].o))->F_itemCapacity)) goto label_1;
	}
	{
	sp[0].o = (jobject)((mindustry_world_blocks_campaign_LaunchPad$LaunchPadBuild *) NULL_CHECK((frame[0].o)))->F_this$0;
	if (((jint)((mindustry_world_blocks_campaign_LaunchPad *) NULL_CHECK(sp[0].o))->F_acceptMultipleItems) != 0) goto label_2;
	}
	{
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_items;
	jint temp0 = (jint)((func_mindustry_world_modules_ItemModule_total_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_modules_ItemModule_total_R_int])(ctx, sp[0].o);
	if (temp0 == 0) goto label_2;
	}
	{
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_items;
	sp[0].o = (jobject)((func_mindustry_world_modules_ItemModule_first_R_mindustry_type_Item) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_modules_ItemModule_first_R_mindustry_type_Item])(ctx, sp[0].o);
	if (sp[0].o != (frame[2].o)) goto label_1;
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

void M_mindustry_world_blocks_campaign_LaunchPad$LaunchPadBuild_updateTile(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/campaign/LaunchPad$LaunchPadBuild:updateTile", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(146);
	sp[0].o = frame[0].o;
	jfloat temp0 = (jfloat)((mindustry_world_blocks_campaign_LaunchPad$LaunchPadBuild *) NULL_CHECK(sp[0].o))->F_launchCounter;
	jfloat temp1 = (jfloat)((func_mindustry_world_blocks_campaign_LaunchPad$LaunchPadBuild_edelta_R_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_world_blocks_campaign_LaunchPad$LaunchPadBuild_edelta_R_float])(ctx, (frame[0].o));
	jfloat temp2 = temp0 + temp1;
	((mindustry_world_blocks_campaign_LaunchPad$LaunchPadBuild *) NULL_CHECK(sp[0].o))->F_launchCounter = temp2;
	sp[0].o = (jobject)((mindustry_world_blocks_campaign_LaunchPad$LaunchPadBuild *) NULL_CHECK((frame[0].o)))->F_this$0;
	if ((floatCompare(temp2, ((jfloat)((mindustry_world_blocks_campaign_LaunchPad *) NULL_CHECK(sp[0].o))->F_launchTime), -1)) < 0) goto label_1;
	}
	{
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_items;
	jint temp0 = (jint)((func_mindustry_world_modules_ItemModule_total_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_modules_ItemModule_total_R_int])(ctx, sp[0].o);
	sp[0].o = (jobject)((mindustry_world_blocks_campaign_LaunchPad$LaunchPadBuild *) NULL_CHECK((frame[0].o)))->F_this$0;
	if (temp0 < ((jint)((mindustry_world_Block *) NULL_CHECK(sp[0].o))->F_itemCapacity)) goto label_1;
	}
	{
	LINE_NUMBER(148);
	((func_mindustry_world_blocks_campaign_LaunchPad$LaunchPadBuild_consume) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_world_blocks_campaign_LaunchPad$LaunchPadBuild_consume])(ctx, (frame[0].o));
	LINE_NUMBER(149);
	sp[0].o = (jobject)((mindustry_world_blocks_campaign_LaunchPad$LaunchPadBuild *) NULL_CHECK((frame[0].o)))->F_this$0;
	sp[0].o = (jobject)((mindustry_world_blocks_campaign_LaunchPad *) NULL_CHECK(sp[0].o))->F_launchSound;
	jfloat temp0 = (jfloat)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_x;
	jfloat temp1 = (jfloat)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_y;
	jfloat temp2 = jfloat(1);
	sp[1].o = (jobject)((mindustry_world_blocks_campaign_LaunchPad$LaunchPadBuild *) NULL_CHECK((frame[0].o)))->F_this$0;
	jfloat temp3 = (jfloat)SM_arc_math_Mathf_range_float_R_float(ctx, ((jfloat)((mindustry_world_blocks_campaign_LaunchPad *) NULL_CHECK(sp[1].o))->F_launchSoundPitchRand));
	jint temp4 = (jint)((func_arc_audio_Sound_at_float_float_float_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_audio_Sound_at_float_float_float_R_int])(ctx, sp[0].o, temp0, temp1, (temp2 + temp3));
	LINE_NUMBER(150);
	sp[0].o = (jobject)SM_mindustry_gen_LaunchPayload_create_R_mindustry_gen_LaunchPayload(ctx);
	frame[1].o = sp[0].o;
	LINE_NUMBER(151);
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_items;
	{ /* InvokeDynamic */
		clinit_mindustry_world_blocks_campaign_LaunchPad$LaunchPadBuild_invoke_mindustry_world_modules_ItemModule$ItemConsumer_1(ctx);
		auto proxy = (mindustry_world_blocks_campaign_LaunchPad$LaunchPadBuild_invoke_mindustry_world_modules_ItemModule$ItemConsumer_1 *) gcAlloc(ctx, &class_mindustry_world_blocks_campaign_LaunchPad$LaunchPadBuild_invoke_mindustry_world_modules_ItemModule$ItemConsumer_1);
		proxy->F_field0 = (jref) (frame[1].o);
		sp[1].o = (jobject) proxy;
	}
	((func_mindustry_world_modules_ItemModule_each_mindustry_world_modules_ItemModule$ItemConsumer) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_modules_ItemModule_each_mindustry_world_modules_ItemModule$ItemConsumer])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(152);
	((func_mindustry_gen_LaunchPayload_set_arc_math_geom_Position) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_gen_LaunchPayload_set_arc_math_geom_Position])(ctx, (frame[1].o), (frame[0].o));
	LINE_NUMBER(153);
	((func_mindustry_gen_LaunchPayload_lifetime_float) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_gen_LaunchPayload_lifetime_float])(ctx, (frame[1].o), (jfloat(120.0f)));
	LINE_NUMBER(154);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_team;
	((func_mindustry_gen_LaunchPayload_team_mindustry_game_Team) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_gen_LaunchPayload_team_mindustry_game_Team])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(155);
	((func_mindustry_gen_LaunchPayload_add) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_gen_LaunchPayload_add])(ctx, (frame[1].o));
	LINE_NUMBER(156);
	clinit_mindustry_content_Fx(ctx);
	sp[0].o = (jobject)SF_mindustry_content_Fx_launchPod;
	((func_mindustry_entities_Effect_at_arc_math_geom_Position) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_entities_Effect_at_arc_math_geom_Position])(ctx, sp[0].o, (frame[0].o));
	LINE_NUMBER(157);
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_items;
	((func_mindustry_world_modules_ItemModule_clear) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_modules_ItemModule_clear])(ctx, sp[0].o);
	LINE_NUMBER(158);
	SM_mindustry_entities_Effect_shake_float_float_arc_math_geom_Position(ctx, (jfloat(3.0f)), (jfloat(3.0f)), (frame[0].o));
	LINE_NUMBER(159);
	((mindustry_world_blocks_campaign_LaunchPad$LaunchPadBuild *) NULL_CHECK((frame[0].o)))->F_launchCounter = (jfloat(0));
	}
label_1:;
	LINE_NUMBER(161);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_world_blocks_campaign_LaunchPad$LaunchPadBuild_display_arc_scene_ui_layout_Table(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/campaign/LaunchPad$LaunchPadBuild:display", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(165);
	M_mindustry_gen_Building_display_arc_scene_ui_layout_Table(ctx, (frame[0].o), (frame[1].o));
	LINE_NUMBER(167);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	jint temp0 = (jint)((func_mindustry_core_GameState_isCampaign_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_GameState_isCampaign_R_boolean])(ctx, sp[0].o);
	if (temp0 == 0) goto label_2;
	}
	{
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_net;
	jint temp0 = (jint)((func_mindustry_net_Net_client_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_net_Net_client_R_boolean])(ctx, sp[0].o);
	if (temp0 != 0) goto label_2;
	}
	{
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_team;
	clinit_mindustry_Vars(ctx);
	sp[1].o = (jobject)SF_mindustry_Vars_player;
	sp[1].o = (jobject)((func_mindustry_gen_Player_team_R_mindustry_game_Team) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_mindustry_gen_Player_team_R_mindustry_game_Team])(ctx, sp[1].o);
	if (sp[0].o == sp[1].o) goto label_3;
	}
label_2:;
	popStackFrame(ctx);
	INST_RETURN();
label_3:;
	{
	LINE_NUMBER(169);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_row_R_arc_scene_ui_layout_Table) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_scene_ui_layout_Table_row_R_arc_scene_ui_layout_Table])(ctx, (frame[1].o));
	LINE_NUMBER(170);
	sp[0].o = frame[1].o;
	{ /* InvokeDynamic */
		clinit_mindustry_world_blocks_campaign_LaunchPad$LaunchPadBuild_invoke_arc_func_Prov_1(ctx);
		auto proxy = (mindustry_world_blocks_campaign_LaunchPad$LaunchPadBuild_invoke_arc_func_Prov_1 *) gcAlloc(ctx, &class_mindustry_world_blocks_campaign_LaunchPad$LaunchPadBuild_invoke_arc_func_Prov_1);
		sp[1].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_label_arc_func_Prov_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_label_arc_func_Prov_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o);
	jfloat temp0 = jfloat(4.0f);
	LINE_NUMBER(176);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_pad_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_pad_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, temp0);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_wrap_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_wrap_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_width_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_width_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (jfloat(200.0f)));
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_left_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_left_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o);
	LINE_NUMBER(177);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jbool M_mindustry_world_blocks_campaign_LaunchPad$LaunchPadBuild_shouldShowConfigure_mindustry_gen_Player_R_boolean(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/campaign/LaunchPad$LaunchPadBuild:shouldShowConfigure", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(181);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	jint temp0 = (jint)((func_mindustry_core_GameState_isCampaign_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_GameState_isCampaign_R_boolean])(ctx, sp[0].o);
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

void M_mindustry_world_blocks_campaign_LaunchPad$LaunchPadBuild_buildConfiguration_arc_scene_ui_layout_Table(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/campaign/LaunchPad$LaunchPadBuild:buildConfiguration", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(186);
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
	{
	LINE_NUMBER(187);
	((func_mindustry_world_blocks_campaign_LaunchPad$LaunchPadBuild_deselect) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_world_blocks_campaign_LaunchPad$LaunchPadBuild_deselect])(ctx, (frame[0].o));
	LINE_NUMBER(188);
	popStackFrame(ctx);
	return;
	}
label_2:;
	{
	LINE_NUMBER(191);
	sp[0].o = frame[1].o;
	clinit_mindustry_gen_Icon(ctx);
	sp[1].o = (jobject)SF_mindustry_gen_Icon_upOpen;
	clinit_mindustry_ui_Styles(ctx);
	sp[2].o = (jobject)SF_mindustry_ui_Styles_cleari;
	{ /* InvokeDynamic */
		clinit_mindustry_world_blocks_campaign_LaunchPad$LaunchPadBuild_invoke_java_lang_Runnable_1(ctx);
		auto proxy = (mindustry_world_blocks_campaign_LaunchPad$LaunchPadBuild_invoke_java_lang_Runnable_1 *) gcAlloc(ctx, &class_mindustry_world_blocks_campaign_LaunchPad$LaunchPadBuild_invoke_java_lang_Runnable_1);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[3].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_button_arc_scene_style_Drawable_arc_scene_ui_ImageButton$ImageButtonStyle_java_lang_Runnable_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_button_arc_scene_style_Drawable_arc_scene_ui_ImageButton$ImageButtonStyle_java_lang_Runnable_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o);
	jfloat temp0 = jfloat(40.0f);
	LINE_NUMBER(202);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_size_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_size_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, temp0);
	LINE_NUMBER(203);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jbyte M_mindustry_world_blocks_campaign_LaunchPad$LaunchPadBuild_version_R_byte(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/campaign/LaunchPad$LaunchPadBuild:version", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(207);
	popStackFrame(ctx);
	return (jint(1));
	}

	popStackFrame(ctx);
}

void M_mindustry_world_blocks_campaign_LaunchPad$LaunchPadBuild_write_arc_util_io_Writes(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/campaign/LaunchPad$LaunchPadBuild:write", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(212);
	M_mindustry_gen_Building_write_arc_util_io_Writes(ctx, (frame[0].o), (frame[1].o));
	LINE_NUMBER(213);
	((func_arc_util_io_Writes_f_float) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_util_io_Writes_f_float])(ctx, (frame[1].o), ((jfloat)((mindustry_world_blocks_campaign_LaunchPad$LaunchPadBuild *) NULL_CHECK((frame[0].o)))->F_launchCounter));
	LINE_NUMBER(214);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_world_blocks_campaign_LaunchPad$LaunchPadBuild_read_arc_util_io_Reads_byte(jcontext ctx, jobject self, jobject param0, jbyte param1) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/campaign/LaunchPad$LaunchPadBuild:read", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(218);
	M_mindustry_gen_Building_read_arc_util_io_Reads_byte(ctx, (frame[0].o), (frame[1].o), (frame[2].i));
	LINE_NUMBER(219);
	if ((frame[2].i) < (jint(1))) goto label_2;
	}
	{
	LINE_NUMBER(220);
	sp[0].o = frame[0].o;
	jfloat temp0 = (jfloat)((func_arc_util_io_Reads_f_R_float) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_util_io_Reads_f_R_float])(ctx, (frame[1].o));
	((mindustry_world_blocks_campaign_LaunchPad$LaunchPadBuild *) NULL_CHECK(sp[0].o))->F_launchCounter = temp0;
	}
label_2:;
	LINE_NUMBER(222);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_world_blocks_campaign_LaunchPad$LaunchPadBuild_lambda$buildConfiguration$0(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/campaign/LaunchPad$LaunchPadBuild:lambda$buildConfiguration$0", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(192);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_ui;
	sp[0].o = (jobject)((mindustry_core_UI *) NULL_CHECK(sp[0].o))->F_planet;
	clinit_mindustry_Vars(ctx);
	sp[1].o = (jobject)SF_mindustry_Vars_state;
	sp[1].o = (jobject)((mindustry_core_GameState *) NULL_CHECK(sp[1].o))->F_rules;
	sp[1].o = (jobject)((mindustry_game_Rules *) NULL_CHECK(sp[1].o))->F_sector;
	{ /* InvokeDynamic */
		clinit_mindustry_world_blocks_campaign_LaunchPad$LaunchPadBuild_invoke_arc_func_Cons_1(ctx);
		auto proxy = (mindustry_world_blocks_campaign_LaunchPad$LaunchPadBuild_invoke_arc_func_Cons_1 *) gcAlloc(ctx, &class_mindustry_world_blocks_campaign_LaunchPad$LaunchPadBuild_invoke_arc_func_Cons_1);
		sp[2].o = (jobject) proxy;
	}
	((func_mindustry_ui_dialogs_PlanetDialog_showSelect_mindustry_type_Sector_arc_func_Cons) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_ui_dialogs_PlanetDialog_showSelect_mindustry_type_Sector_arc_func_Cons])(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(201);
	((func_mindustry_world_blocks_campaign_LaunchPad$LaunchPadBuild_deselect) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_world_blocks_campaign_LaunchPad$LaunchPadBuild_deselect])(ctx, (frame[0].o));
	LINE_NUMBER(202);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_mindustry_world_blocks_campaign_LaunchPad$LaunchPadBuild_lambda$buildConfiguration$1_mindustry_type_Sector(jcontext ctx, jobject param0) {
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/campaign/LaunchPad$LaunchPadBuild:lambda$buildConfiguration$1", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_world_blocks_campaign_LaunchPad$LaunchPadBuild(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(193);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	jint temp0 = (jint)((func_mindustry_core_GameState_isCampaign_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_GameState_isCampaign_R_boolean])(ctx, sp[0].o);
	if (temp0 == 0) goto label_1;
	}
	{
	sp[0].o = (jobject)((mindustry_type_Sector *) NULL_CHECK((frame[0].o)))->F_planet;
	clinit_mindustry_Vars(ctx);
	sp[1].o = (jobject)SF_mindustry_Vars_state;
	sp[1].o = (jobject)((mindustry_core_GameState *) NULL_CHECK(sp[1].o))->F_rules;
	sp[1].o = (jobject)((mindustry_game_Rules *) NULL_CHECK(sp[1].o))->F_sector;
	sp[1].o = (jobject)((mindustry_type_Sector *) NULL_CHECK(sp[1].o))->F_planet;
	if (sp[0].o != sp[1].o) goto label_1;
	}
	{
	LINE_NUMBER(194);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	sp[0].o = (jobject)((mindustry_core_GameState *) NULL_CHECK(sp[0].o))->F_rules;
	sp[0].o = (jobject)((mindustry_game_Rules *) NULL_CHECK(sp[0].o))->F_sector;
	sp[0].o = (jobject)((mindustry_type_Sector *) NULL_CHECK(sp[0].o))->F_info;
	sp[0].o = (jobject)((mindustry_game_SectorInfo *) NULL_CHECK(sp[0].o))->F_destination;
	frame[1].o = sp[0].o;
	LINE_NUMBER(195);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	sp[0].o = (jobject)((mindustry_core_GameState *) NULL_CHECK(sp[0].o))->F_rules;
	sp[0].o = (jobject)((mindustry_game_Rules *) NULL_CHECK(sp[0].o))->F_sector;
	sp[0].o = (jobject)((mindustry_type_Sector *) NULL_CHECK(sp[0].o))->F_info;
	((mindustry_game_SectorInfo *) NULL_CHECK(sp[0].o))->F_destination = (jref) (frame[0].o);
	LINE_NUMBER(196);
	if ((frame[1].o) == nullptr) goto label_1;
	}
	{
	LINE_NUMBER(197);
	sp[0].o = (jobject)((mindustry_type_Sector *) NULL_CHECK((frame[1].o)))->F_info;
	clinit_mindustry_Vars(ctx);
	sp[1].o = (jobject)SF_mindustry_Vars_state;
	sp[1].o = (jobject)((func_mindustry_core_GameState_getPlanet_R_mindustry_type_Planet) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_mindustry_core_GameState_getPlanet_R_mindustry_type_Planet])(ctx, sp[1].o);
	((func_mindustry_game_SectorInfo_refreshImportRates_mindustry_type_Planet) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_game_SectorInfo_refreshImportRates_mindustry_type_Planet])(ctx, sp[0].o, sp[1].o);
	}
label_1:;
	LINE_NUMBER(200);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jobject SM_mindustry_world_blocks_campaign_LaunchPad$LaunchPadBuild_lambda$display$0_R_java_lang_CharSequence(jcontext ctx) {
	jtype frame[8];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/campaign/LaunchPad$LaunchPadBuild:lambda$display$0", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_world_blocks_campaign_LaunchPad$LaunchPadBuild(ctx);
	{
	LINE_NUMBER(171);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	sp[0].o = (jobject)((mindustry_core_GameState *) NULL_CHECK(sp[0].o))->F_rules;
	sp[0].o = (jobject)((mindustry_game_Rules *) NULL_CHECK(sp[0].o))->F_sector;
	if (sp[0].o != nullptr) goto label_1;
	}
	INST_ACONST_NULL();
	goto label_2;
label_1:;
	{
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	sp[0].o = (jobject)((mindustry_core_GameState *) NULL_CHECK(sp[0].o))->F_rules;
	sp[0].o = (jobject)((mindustry_game_Rules *) NULL_CHECK(sp[0].o))->F_sector;
	sp[0].o = (jobject)((mindustry_type_Sector *) NULL_CHECK(sp[0].o))->F_info;
	sp[0].o = (jobject)((mindustry_game_SectorInfo *) NULL_CHECK(sp[0].o))->F_destination;
	sp += 1;
	}
label_2:;
	{
	sp -= 1;
	frame[0].o = sp[0].o;
	LINE_NUMBER(173);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_bundle;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"launch.destination"_j));
	sp[2].o = (jobject)createArray(ctx, &class_java_lang_Object, (jint(1)));
	jint temp0 = jint(0);
	LINE_NUMBER(174);
	sp[3].o = sp[2].o;
	sp[4].i = temp0;
	sp += 5;
	if ((frame[0].o) == nullptr) goto label_5;
	}
	{
	jint temp0 = (jint)((func_mindustry_type_Sector_hasBase_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_type_Sector_hasBase_R_boolean])(ctx, (frame[0].o));
	if (temp0 != 0) goto label_6;
	}
label_5:;
	{
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_bundle;
	sp[0].o = (jobject)((func_arc_util_I18NBundle_get_java_lang_String_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_util_I18NBundle_get_java_lang_String_R_java_lang_String])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"sectors.nonelaunch"_j))));
	sp += 1;
	goto label_7;
	}
label_6:;
	{
	LINE_NUMBER(175);
	sp[0].o = (jobject)((func_mindustry_type_Sector_name_R_java_lang_String) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_type_Sector_name_R_java_lang_String])(ctx, (frame[0].o));
	sp[0].o = (jobject)concatStringsRecipe(ctx, u8"[accent]\u0001"_j.string, 1, sp[0].o);
	sp += 1;
	}
label_7:;
	{
	sp -= 6;
	ARRAY_ACCESS(jobject, sp[2].o, sp[4].i) = sp[5].o;
	LINE_NUMBER(173);
	sp[0].o = (jobject)((func_arc_util_I18NBundle_format_java_lang_String_Array1_java_lang_Object_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_util_I18NBundle_format_java_lang_String_Array1_java_lang_Object_R_java_lang_String])(ctx, sp[0].o, sp[1].o, sp[2].o);
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void SM_mindustry_world_blocks_campaign_LaunchPad$LaunchPadBuild_lambda$updateTile$0_mindustry_gen_LaunchPayload_mindustry_type_Item_int(jcontext ctx, jobject param0, jobject param1, jint param2) {
	jtype frame[8];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/campaign/LaunchPad$LaunchPadBuild:lambda$updateTile$0", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_world_blocks_campaign_LaunchPad$LaunchPadBuild(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	frame[2].i = param2;
	{
	LINE_NUMBER(151);
	sp[0].o = (jobject)((mindustry_gen_LaunchPayload *) NULL_CHECK((frame[0].o)))->F_stacks;
	clinit_mindustry_type_ItemStack(ctx);
	sp[1].o = gcAlloc(ctx, &class_mindustry_type_ItemStack);
	init_mindustry_type_ItemStack_mindustry_type_Item_int(ctx, sp[1].o, (frame[1].o), (frame[2].i));
	sp[0].o = (jobject)((func_arc_struct_Seq_add_java_lang_Object_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_add_java_lang_Object_R_arc_struct_Seq])(ctx, sp[0].o, sp[1].o);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void *vtable_mindustry_world_blocks_campaign_LaunchPad$LaunchPadBuild[] {
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
	(void *) M_mindustry_world_blocks_campaign_LaunchPad$LaunchPadBuild_write_arc_util_io_Writes,
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
	(void *) M_mindustry_world_blocks_campaign_LaunchPad$LaunchPadBuild_sense_mindustry_logic_LAccess_R_double,
	(void *) M_mindustry_gen_Building_sense_mindustry_ctype_Content_R_double,
	(void *) M_mindustry_gen_Building_senseObject_mindustry_logic_LAccess_R_java_lang_Object,
	(void *) M_mindustry_gen_Building_setProp_mindustry_logic_LAccess_double,
	(void *) M_mindustry_gen_Building_setProp_mindustry_logic_LAccess_java_lang_Object,
	(void *) M_mindustry_gen_Building_setProp_mindustry_ctype_UnlockableContent_double,
	(void *) M_mindustry_ui_Displayable_displayable_R_boolean,
	(void *) M_mindustry_world_blocks_campaign_LaunchPad$LaunchPadBuild_display_arc_scene_ui_layout_Table,
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
	(void *) M_mindustry_world_blocks_campaign_LaunchPad$LaunchPadBuild_read_arc_util_io_Reads_byte,
	(void *) M_mindustry_gen_Building_create_mindustry_world_Block_mindustry_game_Team_R_mindustry_gen_Building,
	(void *) M_mindustry_gen_Building_getLiquidDestination_mindustry_gen_Building_mindustry_type_Liquid_R_mindustry_gen_Building,
	(void *) M_mindustry_gen_Building_init_mindustry_world_Tile_mindustry_game_Team_boolean_int_R_mindustry_gen_Building,
	(void *) M_mindustry_gen_Building_nearby_int_int_R_mindustry_gen_Building,
	(void *) M_mindustry_gen_Building_nearby_int_R_mindustry_gen_Building,
	(void *) M_mindustry_world_blocks_campaign_LaunchPad$LaunchPadBuild_getCursor_R_arc_Graphics$Cursor,
	(void *) M_mindustry_gen_Building_getDisplayIcon_R_arc_graphics_g2d_TextureRegion,
	(void *) M_mindustry_gen_Building_getPowerConnections_arc_struct_Seq_R_arc_struct_Seq,
	(void *) M_mindustry_gen_Building_absorbLasers_R_boolean,
	(void *) M_mindustry_world_blocks_campaign_LaunchPad$LaunchPadBuild_acceptItem_mindustry_gen_Building_mindustry_type_Item_R_boolean,
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
	(void *) M_mindustry_world_blocks_campaign_LaunchPad$LaunchPadBuild_shouldConsume_R_boolean,
	(void *) M_mindustry_gen_Building_shouldHideConfigure_mindustry_gen_Player_R_boolean,
	(void *) M_mindustry_world_blocks_campaign_LaunchPad$LaunchPadBuild_shouldShowConfigure_mindustry_gen_Player_R_boolean,
	(void *) M_mindustry_gen_Building_wasRecentlyDamaged_R_boolean,
	(void *) M_mindustry_gen_Building_wasRecentlyHealed_float_R_boolean,
	(void *) M_mindustry_gen_Building_relativeTo_mindustry_gen_Building_R_byte,
	(void *) M_mindustry_gen_Building_relativeTo_int_int_R_byte,
	(void *) M_mindustry_gen_Building_relativeTo_mindustry_world_Tile_R_byte,
	(void *) M_mindustry_gen_Building_relativeToEdge_mindustry_world_Tile_R_byte,
	(void *) M_mindustry_world_blocks_campaign_LaunchPad$LaunchPadBuild_version_R_byte,
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
	(void *) M_mindustry_world_blocks_campaign_LaunchPad$LaunchPadBuild_buildConfiguration_arc_scene_ui_layout_Table,
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
	(void *) M_mindustry_world_blocks_campaign_LaunchPad$LaunchPadBuild_draw,
	(void *) M_mindustry_gen_Building_drawCached,
	(void *) M_mindustry_gen_Building_drawConfigure,
	(void *) M_mindustry_gen_Building_drawCracks,
	(void *) M_mindustry_gen_Building_drawDisabled,
	(void *) M_mindustry_gen_Building_drawItemSelection_mindustry_ctype_UnlockableContent,
	(void *) M_mindustry_gen_Building_drawLight,
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
	(void *) M_mindustry_world_blocks_campaign_LaunchPad$LaunchPadBuild_updateTile,
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
	(void *) M_mindustry_world_blocks_campaign_LaunchPad$LaunchPadBuild_lambda$buildConfiguration$0,
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
	{ "lambda$buildConfiguration$0", "()V" },
};

static FieldMetadata fields[] {
	{ "launchCounter", &class_float, offsetof(mindustry_world_blocks_campaign_LaunchPad$LaunchPadBuild, F_launchCounter), "F", 1 },
	{ "this$0", &class_mindustry_world_blocks_campaign_LaunchPad, offsetof(mindustry_world_blocks_campaign_LaunchPad$LaunchPadBuild, F_this$0), "Lmindustry/world/blocks/campaign/LaunchPad;", 4112 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_mindustry_world_blocks_campaign_LaunchPad$LaunchPadBuild_mindustry_world_blocks_campaign_LaunchPad, 0, "(Lmindustry/world/blocks/campaign/LaunchPad;)V", 1 },
	{ "getCursor", (intptr_t) M_mindustry_world_blocks_campaign_LaunchPad$LaunchPadBuild_getCursor_R_arc_Graphics$Cursor, VTABLE_mindustry_world_blocks_campaign_LaunchPad$LaunchPadBuild_getCursor_R_arc_Graphics$Cursor, "()Larc/Graphics$Cursor;", 1 },
	{ "shouldConsume", (intptr_t) M_mindustry_world_blocks_campaign_LaunchPad$LaunchPadBuild_shouldConsume_R_boolean, VTABLE_mindustry_world_blocks_campaign_LaunchPad$LaunchPadBuild_shouldConsume_R_boolean, "()Z", 1 },
	{ "sense", (intptr_t) M_mindustry_world_blocks_campaign_LaunchPad$LaunchPadBuild_sense_mindustry_logic_LAccess_R_double, VTABLE_mindustry_world_blocks_campaign_LaunchPad$LaunchPadBuild_sense_mindustry_logic_LAccess_R_double, "(Lmindustry/logic/LAccess;)D", 1 },
	{ "draw", (intptr_t) M_mindustry_world_blocks_campaign_LaunchPad$LaunchPadBuild_draw, VTABLE_mindustry_world_blocks_campaign_LaunchPad$LaunchPadBuild_draw, "()V", 1 },
	{ "acceptItem", (intptr_t) M_mindustry_world_blocks_campaign_LaunchPad$LaunchPadBuild_acceptItem_mindustry_gen_Building_mindustry_type_Item_R_boolean, VTABLE_mindustry_world_blocks_campaign_LaunchPad$LaunchPadBuild_acceptItem_mindustry_gen_Building_mindustry_type_Item_R_boolean, "(Lmindustry/gen/Building;Lmindustry/type/Item;)Z", 1 },
	{ "updateTile", (intptr_t) M_mindustry_world_blocks_campaign_LaunchPad$LaunchPadBuild_updateTile, VTABLE_mindustry_world_blocks_campaign_LaunchPad$LaunchPadBuild_updateTile, "()V", 1 },
	{ "display", (intptr_t) M_mindustry_world_blocks_campaign_LaunchPad$LaunchPadBuild_display_arc_scene_ui_layout_Table, VTABLE_mindustry_world_blocks_campaign_LaunchPad$LaunchPadBuild_display_arc_scene_ui_layout_Table, "(Larc/scene/ui/layout/Table;)V", 1 },
	{ "shouldShowConfigure", (intptr_t) M_mindustry_world_blocks_campaign_LaunchPad$LaunchPadBuild_shouldShowConfigure_mindustry_gen_Player_R_boolean, VTABLE_mindustry_world_blocks_campaign_LaunchPad$LaunchPadBuild_shouldShowConfigure_mindustry_gen_Player_R_boolean, "(Lmindustry/gen/Player;)Z", 1 },
	{ "buildConfiguration", (intptr_t) M_mindustry_world_blocks_campaign_LaunchPad$LaunchPadBuild_buildConfiguration_arc_scene_ui_layout_Table, VTABLE_mindustry_world_blocks_campaign_LaunchPad$LaunchPadBuild_buildConfiguration_arc_scene_ui_layout_Table, "(Larc/scene/ui/layout/Table;)V", 1 },
	{ "version", (intptr_t) M_mindustry_world_blocks_campaign_LaunchPad$LaunchPadBuild_version_R_byte, VTABLE_mindustry_world_blocks_campaign_LaunchPad$LaunchPadBuild_version_R_byte, "()B", 1 },
	{ "write", (intptr_t) M_mindustry_world_blocks_campaign_LaunchPad$LaunchPadBuild_write_arc_util_io_Writes, VTABLE_mindustry_world_blocks_campaign_LaunchPad$LaunchPadBuild_write_arc_util_io_Writes, "(Larc/util/io/Writes;)V", 1 },
	{ "read", (intptr_t) M_mindustry_world_blocks_campaign_LaunchPad$LaunchPadBuild_read_arc_util_io_Reads_byte, VTABLE_mindustry_world_blocks_campaign_LaunchPad$LaunchPadBuild_read_arc_util_io_Reads_byte, "(Larc/util/io/Reads;B)V", 1 },
	{ "lambda$buildConfiguration$0", (intptr_t) M_mindustry_world_blocks_campaign_LaunchPad$LaunchPadBuild_lambda$buildConfiguration$0, VTABLE_mindustry_world_blocks_campaign_LaunchPad$LaunchPadBuild_lambda$buildConfiguration$0, "()V", 4098 },
	{ "lambda$buildConfiguration$1", (intptr_t) SM_mindustry_world_blocks_campaign_LaunchPad$LaunchPadBuild_lambda$buildConfiguration$1_mindustry_type_Sector, 0, "(Lmindustry/type/Sector;)V", 4106 },
	{ "lambda$display$0", (intptr_t) SM_mindustry_world_blocks_campaign_LaunchPad$LaunchPadBuild_lambda$display$0_R_java_lang_CharSequence, 0, "()Ljava/lang/CharSequence;", 4106 },
	{ "lambda$updateTile$0", (intptr_t) SM_mindustry_world_blocks_campaign_LaunchPad$LaunchPadBuild_lambda$updateTile$0_mindustry_gen_LaunchPayload_mindustry_type_Item_int, 0, "(Lmindustry/gen/LaunchPayload;Lmindustry/type/Item;I)V", 4106 },
};

Class class_mindustry_world_blocks_campaign_LaunchPad$LaunchPadBuild{
		.nativeName = (intptr_t) "mindustry/world/blocks/campaign/LaunchPad$LaunchPadBuild",
		.parentClass = (intptr_t) &class_mindustry_gen_Building,
		.size = sizeof(mindustry_world_blocks_campaign_LaunchPad$LaunchPadBuild),
		.classVtable = (intptr_t) vtable_mindustry_world_blocks_campaign_LaunchPad$LaunchPadBuild,
		.staticInitializer = (intptr_t) clinit_mindustry_world_blocks_campaign_LaunchPad$LaunchPadBuild,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_mindustry_world_blocks_campaign_LaunchPad$LaunchPadBuild,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) &class_mindustry_world_blocks_campaign_LaunchPad,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 33,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 2,
		.nativeFields = (intptr_t) fields,
		.methodCount = 17,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 311,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_mindustry_world_blocks_campaign_LaunchPad$LaunchPadBuild = registerClass(&class_mindustry_world_blocks_campaign_LaunchPad$LaunchPadBuild);

}

