#include "mindustry/world/blocks/campaign/Accelerator_AcceleratorBuild.h"
#include "arc/math/Angles.h"
#include "arc/Events.h"
#include "mindustry/world/blocks/campaign/Accelerator_AcceleratorBuild_invoke_java_lang_Runnable_5.h"
#include "mindustry/world/blocks/campaign/Accelerator_AcceleratorBuild_invoke_java_lang_Runnable_6.h"
#include "arc/graphics/Color.h"
#include "mindustry/world/blocks/campaign/Accelerator_AcceleratorBuild_invoke_java_lang_Runnable_7.h"
#include "mindustry/world/blocks/campaign/Accelerator_AcceleratorBuild_invoke_java_lang_Runnable_8.h"
#include "mindustry/world/blocks/campaign/Accelerator_AcceleratorBuild_invoke_java_lang_Runnable_9.h"
#include "arc/graphics/g2d/Draw.h"
#include "java/lang/Runnable.h"
#include "mindustry/entities/Effect.h"
#include "arc/scene/ui/Image.h"
#include "mindustry/content/Fx.h"
#include "arc/scene/event/Touchable.h"
#include "mindustry/core/Renderer.h"
#include "arc/util/Tmp.h"
#include "arc/util/I18NBundle.h"
#include "arc/struct/Seq.h"
#include "mindustry/world/Tile.h"
#include "arc/scene/actions/DelayAction.h"
#include "mindustry/world/modules/PowerModule.h"
#include "arc/math/geom/Position.h"
#include "arc/graphics/Blending.h"
#include "arc/math/Mathf.h"
#include "mindustry/world/blocks/power/PowerGraph.h"
#include "arc/Core.h"
#include "mindustry/entities/Lightning.h"
#include "arc/math/Interp.h"
#include "mindustry/graphics/Shaders.h"
#include "arc/util/Time.h"
#include "arc/Graphics_Cursor.h"
#include "arc/math/Interp_PowIn.h"
#include "mindustry/type/Item.h"
#include "arc/graphics/Texture.h"
#include "mindustry/world/modules/ItemModule.h"
#include "mindustry/gen/Building.h"
#include "arc/assets/AssetManager.h"
#include "arc/scene/Scene.h"
#include "java/lang/Object.h"
#include "arc/audio/Music.h"
#include "mindustry/game/Universe.h"
#include "arc/graphics/Camera.h"
#include "mindustry/ui/dialogs/PlanetDialog.h"
#include "arc/util/io/Writes.h"
#include "mindustry/world/blocks/storage/CoreBlock.h"
#include "mindustry/type/ItemSeq.h"
#include "mindustry/net/Net.h"
#include "arc/math/geom/Vec2.h"
#include "mindustry/world/blocks/LaunchAnimator.h"
#include "mindustry/world/Block.h"
#include "mindustry/game/Rules.h"
#include "arc/graphics/g2d/Lines.h"
#include "arc/util/Timer_Task.h"
#include "arc/scene/Action.h"
#include "mindustry/ui/Displayable.h"
#include "arc/graphics/g2d/Fill.h"
#include "mindustry/ui/fragments/LoadingFragment.h"
#include "arc/func/Cons.h"
#include "java/lang/String.h"
#include "mindustry/world/blocks/campaign/Accelerator_AcceleratorBuild_invoke_arc_func_Cons_3.h"
#include "mindustry/world/blocks/campaign/Accelerator_AcceleratorBuild_invoke_arc_func_Cons_2.h"
#include "mindustry/core/Control.h"
#include "mindustry/graphics/Shaders_BlockBuildShader.h"
#include "mindustry/world/blocks/environment/Floor.h"
#include "arc/scene/ui/layout/Scl.h"
#include "java/lang/Math.h"
#include "arc/graphics/g2d/TextureRegion.h"
#include "arc/scene/ui/layout/Table.h"
#include "arc/math/Interp_PowOut.h"
#include "mindustry/world/blocks/campaign/Accelerator_AcceleratorBuild.h"
#include "mindustry/type/Sector.h"
#include "java/lang/Enum.h"
#include "mindustry/core/UI.h"
#include "arc/scene/actions/Actions.h"
#include "arc/util/io/Reads.h"
#include "arc/Graphics_Cursor_SystemCursor.h"
#include "arc/math/Angles_ParticleConsumer.h"
#include "mindustry/graphics/Pal.h"
#include "arc/scene/Element.h"
#include "mindustry/game/EventType_Trigger.h"
#include "arc/scene/actions/AlphaAction.h"
#include "arc/audio/Sound.h"
#include "mindustry/type/Planet.h"
#include "mindustry/graphics/Drawf.h"
#include "mindustry/world/blocks/campaign/Accelerator_AcceleratorBuild_invoke_arc_math_Angles_ParticleConsumer_1.h"
#include "mindustry/world/blocks/campaign/Accelerator.h"
#include "mindustry/game/Team.h"
#include "java/lang/Class.h"
#include "mindustry/Vars.h"
#include "mindustry/core/GameState.h"
#include "arc/scene/actions/RemoveActorAction.h"
#include "mindustry/core/World.h"

extern "C" {


void mark_mindustry_world_blocks_campaign_Accelerator$AcceleratorBuild(jobject object, jint mark, jint depth) {
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
	auto self = (mindustry_world_blocks_campaign_Accelerator$AcceleratorBuild *) object;
	if (self->F_this$0)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_this$0)->clazz)->markFunction)((jobject) self->F_this$0, mark, depth + 1);
}

void clinit_mindustry_world_blocks_campaign_Accelerator$AcceleratorBuild(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	clinit_mindustry_gen_Building(ctx);
}

void init_mindustry_world_blocks_campaign_Accelerator$AcceleratorBuild_mindustry_world_blocks_campaign_Accelerator(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/campaign/Accelerator$AcceleratorBuild:<init>", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_world_blocks_campaign_Accelerator$AcceleratorBuild(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(119);
	((mindustry_world_blocks_campaign_Accelerator$AcceleratorBuild *) NULL_CHECK((frame[0].o)))->F_this$0 = (jref) (frame[1].o);
	init_mindustry_gen_Building(ctx, (frame[0].o));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_world_blocks_campaign_Accelerator$AcceleratorBuild_updateTile(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/campaign/Accelerator$AcceleratorBuild:updateTile", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(130);
	M_mindustry_gen_Building_updateTile(ctx, (frame[0].o));
	LINE_NUMBER(131);
	sp[0].o = frame[0].o;
	jfloat temp0 = (jfloat)((mindustry_world_blocks_campaign_Accelerator$AcceleratorBuild *) NULL_CHECK((frame[0].o)))->F_heat;
	sp[1].f = temp0;
	sp += 2;
	if (((jint)((mindustry_world_blocks_campaign_Accelerator$AcceleratorBuild *) NULL_CHECK((frame[0].o)))->F_launching) == 0) goto label_2;
	}
	INST_FCONST(1);
	goto label_3;
label_2:;
	INST_ALOAD(0);
	sp[-1].f = ((mindustry_gen_Building *) NULL_CHECK(sp[-1].o))->F_efficiency;
label_3:;
	{
	sp -= 3;
	jfloat temp0 = (jfloat)SM_arc_math_Mathf_lerpDelta_float_float_float_R_float(ctx, sp[1].f, sp[2].f, (jfloat(0.05f)));
	((mindustry_world_blocks_campaign_Accelerator$AcceleratorBuild *) NULL_CHECK(sp[0].o))->F_heat = temp0;
	LINE_NUMBER(132);
	sp[0].o = frame[0].o;
	jfloat temp1 = (jfloat)((mindustry_world_blocks_campaign_Accelerator$AcceleratorBuild *) NULL_CHECK((frame[0].o)))->F_statusLerp;
	sp[1].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_power;
	jfloat temp2 = (jfloat)SM_arc_math_Mathf_lerpDelta_float_float_float_R_float(ctx, temp1, ((jfloat)((mindustry_world_modules_PowerModule *) NULL_CHECK(sp[1].o))->F_status), (jfloat(0.05f)));
	((mindustry_world_blocks_campaign_Accelerator$AcceleratorBuild *) NULL_CHECK(sp[0].o))->F_statusLerp = temp2;
	LINE_NUMBER(134);
	if (((jint)((mindustry_world_blocks_campaign_Accelerator$AcceleratorBuild *) NULL_CHECK((frame[0].o)))->F_launching) != 0) goto label_6;
	}
	{
	LINE_NUMBER(135);
	sp[0].o = frame[0].o;
	((mindustry_world_blocks_campaign_Accelerator$AcceleratorBuild *) NULL_CHECK(sp[0].o))->F_time = (((jfloat)((mindustry_world_blocks_campaign_Accelerator$AcceleratorBuild *) NULL_CHECK(sp[0].o))->F_time) + ((clinit_arc_util_Time(ctx), (jfloat)SF_arc_util_Time_delta) * ((jfloat)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_efficiency)));
	goto label_8;
	}
label_6:;
	{
	LINE_NUMBER(137);
	sp[0].o = frame[0].o;
	jfloat temp0 = (jfloat)SM_arc_math_Mathf_slerpDelta_float_float_float_R_float(ctx, ((jfloat)((mindustry_world_blocks_campaign_Accelerator$AcceleratorBuild *) NULL_CHECK((frame[0].o)))->F_time), (jfloat(0)), (jfloat(0.4f)));
	((mindustry_world_blocks_campaign_Accelerator$AcceleratorBuild *) NULL_CHECK(sp[0].o))->F_time = temp0;
	}
label_8:;
	{
	LINE_NUMBER(140);
	sp[0].o = frame[0].o;
	jfloat temp0 = (jfloat)((mindustry_world_blocks_campaign_Accelerator$AcceleratorBuild *) NULL_CHECK((frame[0].o)))->F_launchHeat;
	sp[1].f = temp0;
	sp += 2;
	if (((jint)((mindustry_world_blocks_campaign_Accelerator$AcceleratorBuild *) NULL_CHECK((frame[0].o)))->F_launching) == 0) goto label_9;
	}
	INST_FCONST(1);
	goto label_10;
label_9:;
	INST_FCONST(0);
label_10:;
	{
	sp -= 3;
	jfloat temp0 = (jfloat)SM_arc_math_Mathf_lerpDelta_float_float_float_R_float(ctx, sp[1].f, sp[2].f, (jfloat(0.1f)));
	((mindustry_world_blocks_campaign_Accelerator$AcceleratorBuild *) NULL_CHECK(sp[0].o))->F_launchHeat = temp0;
	LINE_NUMBER(142);
	if ((floatCompare(((jfloat)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_efficiency), (jfloat(0)), -1)) < 0) goto label_12;
	}
	{
	LINE_NUMBER(143);
	sp[0].o = frame[0].o;
	jfloat temp0 = (jfloat)((mindustry_world_blocks_campaign_Accelerator$AcceleratorBuild *) NULL_CHECK(sp[0].o))->F_progress;
	jfloat temp1 = (clinit_arc_util_Time(ctx), (jfloat)SF_arc_util_Time_delta) * ((jfloat)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_efficiency);
	sp[1].o = (jobject)((mindustry_world_blocks_campaign_Accelerator$AcceleratorBuild *) NULL_CHECK((frame[0].o)))->F_this$0;
	((mindustry_world_blocks_campaign_Accelerator$AcceleratorBuild *) NULL_CHECK(sp[0].o))->F_progress = (temp0 + (temp1 / ((jfloat)((mindustry_world_blocks_campaign_Accelerator *) NULL_CHECK(sp[1].o))->F_buildDuration)));
	LINE_NUMBER(144);
	sp[0].o = frame[0].o;
	jfloat temp2 = (jfloat)SM_java_lang_Math_min_float_float_R_float(ctx, ((jfloat)((mindustry_world_blocks_campaign_Accelerator$AcceleratorBuild *) NULL_CHECK((frame[0].o)))->F_progress), (jfloat(1)));
	((mindustry_world_blocks_campaign_Accelerator$AcceleratorBuild *) NULL_CHECK(sp[0].o))->F_progress = temp2;
	}
label_12:;
	LINE_NUMBER(146);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jfloat M_mindustry_world_blocks_campaign_Accelerator$AcceleratorBuild_progress_R_float(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/campaign/Accelerator$AcceleratorBuild:progress", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(150);
	popStackFrame(ctx);
	return ((jfloat)((mindustry_world_blocks_campaign_Accelerator$AcceleratorBuild *) NULL_CHECK((frame[0].o)))->F_progress);
	}

	popStackFrame(ctx);
}

jbool M_mindustry_world_blocks_campaign_Accelerator$AcceleratorBuild_isCoreBuilt_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/campaign/Accelerator$AcceleratorBuild:isCoreBuilt", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(154);
	if ((floatCompare(((jfloat)((mindustry_world_blocks_campaign_Accelerator$AcceleratorBuild *) NULL_CHECK((frame[0].o)))->F_progress), (jfloat(1)), -1)) < 0) goto label_1;
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

void M_mindustry_world_blocks_campaign_Accelerator$AcceleratorBuild_draw(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[13];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/campaign/Accelerator$AcceleratorBuild:draw", 13 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(159);
	M_mindustry_gen_Building_draw(ctx, (frame[0].o));
	LINE_NUMBER(161);
	frame[1].i = (jint(0));
	}
label_2:;
	{
	if ((frame[1].i) >= (jint(4))) goto label_3;
	}
	{
	LINE_NUMBER(162);
	frame[2].f = ((jfloat(7.0f)) + ((jfloat((frame[1].i))) * (jfloat(5.0f))));
	LINE_NUMBER(163);
	clinit_arc_util_Tmp(ctx);
	sp[0].o = (jobject)SF_arc_util_Tmp_c1;
	clinit_mindustry_graphics_Pal(ctx);
	sp[1].o = (jobject)SF_mindustry_graphics_Pal_darkMetal;
	sp[0].o = (jobject)((func_arc_graphics_Color_set_arc_graphics_Color_R_arc_graphics_Color) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_Color_set_arc_graphics_Color_R_arc_graphics_Color])(ctx, sp[0].o, sp[1].o);
	sp[1].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_team;
	sp[1].o = (jobject)((mindustry_game_Team *) NULL_CHECK(sp[1].o))->F_color;
	sp[0].o = (jobject)((func_arc_graphics_Color_lerp_arc_graphics_Color_float_R_arc_graphics_Color) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_Color_lerp_arc_graphics_Color_float_R_arc_graphics_Color])(ctx, sp[0].o, sp[1].o, ((jfloat)((mindustry_world_blocks_campaign_Accelerator$AcceleratorBuild *) NULL_CHECK((frame[0].o)))->F_statusLerp));
	clinit_mindustry_graphics_Pal(ctx);
	sp[1].o = (jobject)SF_mindustry_graphics_Pal_darkMetal;
	jfloat temp0 = (jfloat)SM_arc_math_Mathf_absin_float_float_float_R_float(ctx, ((clinit_arc_util_Time(ctx), (jfloat)SF_arc_util_Time_time) + ((jfloat((frame[1].i))) * (jfloat(50.0f)))), (jfloat(10.0f)), (jfloat(1)));
	SM_arc_graphics_g2d_Draw_color_arc_graphics_Color_arc_graphics_Color_float(ctx, sp[0].o, sp[1].o, temp0);
	LINE_NUMBER(165);
	frame[3].i = (jint(0));
	}
label_7:;
	{
	if ((frame[3].i) >= (jint(4))) goto label_8;
	}
	{
	LINE_NUMBER(166);
	frame[4].f = (((jfloat((frame[3].i))) * (jfloat(90.0f))) + (jfloat(45.0f)));
	LINE_NUMBER(167);
	sp[0].o = (jobject)((mindustry_world_blocks_campaign_Accelerator$AcceleratorBuild *) NULL_CHECK((frame[0].o)))->F_this$0;
	sp[0].o = (jobject)((mindustry_world_blocks_campaign_Accelerator *) NULL_CHECK(sp[0].o))->F_arrowRegion;
	jfloat temp0 = (jfloat)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_x;
	jfloat temp1 = (jfloat)SM_arc_math_Angles_trnsx_float_float_R_float(ctx, (frame[4].f), (frame[2].f));
	jfloat temp2 = temp0 + temp1;
	jfloat temp3 = (jfloat)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_y;
	jfloat temp4 = (jfloat)SM_arc_math_Angles_trnsy_float_float_R_float(ctx, (frame[4].f), (frame[2].f));
	SM_arc_graphics_g2d_Draw_rect_arc_graphics_g2d_TextureRegion_float_float_float(ctx, sp[0].o, temp2, (temp3 + temp4), ((frame[4].f) + (jfloat(180.0f))));
	LINE_NUMBER(165);
	INST_IINC(3, 1);
	goto label_7;
	}
label_8:;
	{
	LINE_NUMBER(161);
	INST_IINC(1, 1);
	goto label_2;
	}
label_3:;
	{
	LINE_NUMBER(172);
	if (((jint)((mindustry_world_blocks_campaign_Accelerator$AcceleratorBuild *) NULL_CHECK((frame[0].o)))->F_launching) == 0) goto label_12;
	}
	{
	LINE_NUMBER(173);
	SM_arc_graphics_g2d_Draw_reset(ctx);
	LINE_NUMBER(175);
	clinit_arc_graphics_Blending(ctx);
	sp[0].o = (jobject)SF_arc_graphics_Blending_additive;
	SM_arc_graphics_g2d_Draw_blend_arc_graphics_Blending(ctx, sp[0].o);
	LINE_NUMBER(176);
	jfloat temp0 = (jfloat)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_x;
	jfloat temp1 = (jfloat)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_y;
	jint temp2 = 15;
	sp[0].o = (jobject)((mindustry_world_blocks_campaign_Accelerator$AcceleratorBuild *) NULL_CHECK((frame[0].o)))->F_this$0;
	sp[0].o = (jobject)((mindustry_world_blocks_campaign_Accelerator *) NULL_CHECK(sp[0].o))->F_launchBlock;
	jfloat temp3 = (jfloat((((jint)((mindustry_world_Block *) NULL_CHECK(sp[0].o))->F_size) * (8)))) * (jfloat(1));
	clinit_arc_util_Tmp(ctx);
	sp[0].o = (jobject)SF_arc_util_Tmp_c2;
	clinit_mindustry_graphics_Pal(ctx);
	sp[1].o = (jobject)SF_mindustry_graphics_Pal_accent;
	sp[0].o = (jobject)((func_arc_graphics_Color_set_arc_graphics_Color_R_arc_graphics_Color) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_Color_set_arc_graphics_Color_R_arc_graphics_Color])(ctx, sp[0].o, sp[1].o);
	jfloat temp4 = (jfloat)((mindustry_world_blocks_campaign_Accelerator$AcceleratorBuild *) NULL_CHECK((frame[0].o)))->F_launchTime;
	sp[1].o = (jobject)((mindustry_world_blocks_campaign_Accelerator$AcceleratorBuild *) NULL_CHECK((frame[0].o)))->F_this$0;
	sp[0].o = (jobject)((func_arc_graphics_Color_a_float_R_arc_graphics_Color) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_Color_a_float_R_arc_graphics_Color])(ctx, sp[0].o, (temp4 / ((jfloat)((mindustry_world_blocks_campaign_Accelerator *) NULL_CHECK(sp[1].o))->F_chargeDuration)));
	clinit_arc_util_Tmp(ctx);
	sp[1].o = (jobject)SF_arc_util_Tmp_c1;
	clinit_mindustry_graphics_Pal(ctx);
	sp[2].o = (jobject)SF_mindustry_graphics_Pal_accent;
	sp[1].o = (jobject)((func_arc_graphics_Color_set_arc_graphics_Color_R_arc_graphics_Color) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_graphics_Color_set_arc_graphics_Color_R_arc_graphics_Color])(ctx, sp[1].o, sp[2].o);
	sp[1].o = (jobject)((func_arc_graphics_Color_a_float_R_arc_graphics_Color) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_graphics_Color_a_float_R_arc_graphics_Color])(ctx, sp[1].o, (jfloat(0)));
	SM_arc_graphics_g2d_Fill_light_float_float_int_float_arc_graphics_Color_arc_graphics_Color(ctx, temp0, temp1, temp2, temp3, sp[0].o, sp[1].o);
	LINE_NUMBER(177);
	SM_arc_graphics_g2d_Draw_blend(ctx);
	LINE_NUMBER(179);
	sp[0].o = (jobject)((mindustry_world_blocks_campaign_Accelerator$AcceleratorBuild *) NULL_CHECK((frame[0].o)))->F_this$0;
	sp[0].o = (jobject)((mindustry_world_blocks_campaign_Accelerator *) NULL_CHECK(sp[0].o))->F_launchBlock;
	sp[0].o = (jobject)((mindustry_ctype_UnlockableContent *) NULL_CHECK(sp[0].o))->F_fullIcon;
	SM_arc_graphics_g2d_Draw_rect_arc_graphics_g2d_TextureRegion_float_float(ctx, sp[0].o, ((jfloat)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_x), ((jfloat)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_y));
	LINE_NUMBER(181);
	SM_arc_graphics_g2d_Draw_z_float(ctx, (jfloat(100.0f)));
	LINE_NUMBER(182);
	clinit_mindustry_graphics_Pal(ctx);
	sp[0].o = (jobject)SF_mindustry_graphics_Pal_accent;
	jfloat temp5 = (jfloat)((mindustry_world_blocks_campaign_Accelerator$AcceleratorBuild *) NULL_CHECK((frame[0].o)))->F_launchTime;
	sp[1].o = (jobject)((mindustry_world_blocks_campaign_Accelerator$AcceleratorBuild *) NULL_CHECK((frame[0].o)))->F_this$0;
	jfloat temp6 = (jfloat)SM_arc_math_Mathf_clamp_float_R_float(ctx, (temp5 / ((jfloat)((mindustry_world_blocks_campaign_Accelerator *) NULL_CHECK(sp[1].o))->F_chargeDuration)));
	SM_arc_graphics_g2d_Draw_mixcol_arc_graphics_Color_float(ctx, sp[0].o, temp6);
	LINE_NUMBER(183);
	jfloat temp7 = jfloat(1);
	jfloat temp8 = jfloat(1);
	jfloat temp9 = jfloat(1);
	clinit_arc_math_Interp(ctx);
	sp[0].o = (jobject)SF_arc_math_Interp_pow2In;
	jfloat temp10 = (jfloat)((mindustry_world_blocks_campaign_Accelerator$AcceleratorBuild *) NULL_CHECK((frame[0].o)))->F_launchTime;
	sp[1].o = (jobject)((mindustry_world_blocks_campaign_Accelerator$AcceleratorBuild *) NULL_CHECK((frame[0].o)))->F_this$0;
	jfloat temp11 = (jfloat)SM_arc_math_Mathf_clamp_float_R_float(ctx, ((temp10 / ((jfloat)((mindustry_world_blocks_campaign_Accelerator *) NULL_CHECK(sp[1].o))->F_chargeDuration)) * (jfloat(0.7f))));
	jfloat temp12 = (jfloat)((func_arc_math_Interp$PowIn_apply_float_R_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_Interp$PowIn_apply_float_R_float])(ctx, sp[0].o, temp11);
	SM_arc_graphics_g2d_Draw_color_float_float_float_float(ctx, temp7, temp8, temp9, temp12);
	LINE_NUMBER(184);
	sp[0].o = (jobject)((mindustry_world_blocks_campaign_Accelerator$AcceleratorBuild *) NULL_CHECK((frame[0].o)))->F_this$0;
	sp[0].o = (jobject)((mindustry_world_blocks_campaign_Accelerator *) NULL_CHECK(sp[0].o))->F_launchBlock;
	sp[0].o = (jobject)((mindustry_ctype_UnlockableContent *) NULL_CHECK(sp[0].o))->F_fullIcon;
	SM_arc_graphics_g2d_Draw_rect_arc_graphics_g2d_TextureRegion_float_float(ctx, sp[0].o, ((jfloat)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_x), ((jfloat)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_y));
	LINE_NUMBER(185);
	SM_arc_graphics_g2d_Draw_reset(ctx);
	goto label_23;
	}
label_12:;
	{
	LINE_NUMBER(187);
	jfloat temp0 = (jfloat)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_x;
	jfloat temp1 = (jfloat)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_y;
	sp[0].o = (jobject)((mindustry_world_blocks_campaign_Accelerator$AcceleratorBuild *) NULL_CHECK((frame[0].o)))->F_this$0;
	sp[0].o = (jobject)((mindustry_world_blocks_campaign_Accelerator *) NULL_CHECK(sp[0].o))->F_launchBlock;
	SM_mindustry_graphics_Drawf_shadow_float_float_float_float(ctx, temp0, temp1, ((jfloat((((jint)((mindustry_world_Block *) NULL_CHECK(sp[0].o))->F_size) * (8)))) * (jfloat(2))), ((jfloat)((mindustry_world_blocks_campaign_Accelerator$AcceleratorBuild *) NULL_CHECK((frame[0].o)))->F_progress));
	LINE_NUMBER(188);
	jfloat temp2 = jfloat(40.0f);
	{ /* InvokeDynamic */
		clinit_mindustry_world_blocks_campaign_Accelerator$AcceleratorBuild_invoke_java_lang_Runnable_5(ctx);
		auto proxy = (mindustry_world_blocks_campaign_Accelerator$AcceleratorBuild_invoke_java_lang_Runnable_5 *) gcAlloc(ctx, &class_mindustry_world_blocks_campaign_Accelerator$AcceleratorBuild_invoke_java_lang_Runnable_5);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[0].o = (jobject) proxy;
	}
	SM_arc_graphics_g2d_Draw_draw_float_java_lang_Runnable(ctx, temp2, sp[0].o);
	}
label_23:;
	{
	LINE_NUMBER(204);
	SM_arc_graphics_g2d_Draw_reset(ctx);
	LINE_NUMBER(207);
	if ((floatCompare(((jfloat)((mindustry_world_blocks_campaign_Accelerator$AcceleratorBuild *) NULL_CHECK((frame[0].o)))->F_heat), (jfloat(1,000000e-04f)), 1)) >= 0) goto label_26;
	}
	popStackFrame(ctx);
	INST_RETURN();
label_26:;
	{
	LINE_NUMBER(209);
	sp[0].o = (jobject)((mindustry_world_blocks_campaign_Accelerator$AcceleratorBuild *) NULL_CHECK((frame[0].o)))->F_this$0;
	jfloat temp0 = ((jfloat((((jint)((mindustry_world_Block *) NULL_CHECK(sp[0].o))->F_size) * (8)))) / (jfloat(2))) * (jfloat(0.74f));
	jfloat temp1 = (jfloat)SM_arc_math_Mathf_lerp_float_float_float_R_float(ctx, (jfloat(1)), (jfloat(1.3f)), ((jfloat)((mindustry_world_blocks_campaign_Accelerator$AcceleratorBuild *) NULL_CHECK((frame[0].o)))->F_launchHeat));
	frame[1].f = (temp0 * temp1);
	LINE_NUMBER(210);
	frame[2].f = (jfloat(2));
	LINE_NUMBER(212);
	SM_arc_graphics_g2d_Draw_z_float(ctx, (jfloat(99.9999f)));
	LINE_NUMBER(213);
	jfloat temp2 = (jfloat(1.75f)) * ((jfloat)((mindustry_world_blocks_campaign_Accelerator$AcceleratorBuild *) NULL_CHECK((frame[0].o)))->F_heat);
	clinit_mindustry_graphics_Pal(ctx);
	sp[0].o = (jobject)SF_mindustry_graphics_Pal_accent;
	SM_arc_graphics_g2d_Lines_stroke_float_arc_graphics_Color(ctx, temp2, sp[0].o);
	LINE_NUMBER(214);
	jfloat temp3 = (jfloat)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_x;
	jfloat temp4 = (jfloat)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_y;
	jfloat temp5 = (frame[1].f) * (jfloat(1.22f));
	jfloat temp6 = (jfloat)SM_arc_math_Mathf_lerp_float_float_float_R_float(ctx, (jfloat(45.0f)), (jfloat(0)), ((jfloat)((mindustry_world_blocks_campaign_Accelerator$AcceleratorBuild *) NULL_CHECK((frame[0].o)))->F_launchHeat));
	SM_arc_graphics_g2d_Lines_square_float_float_float_float(ctx, temp3, temp4, temp5, temp6);
	LINE_NUMBER(218);
	jfloat temp7 = (jfloat(3.0f)) * ((jfloat)((mindustry_world_blocks_campaign_Accelerator$AcceleratorBuild *) NULL_CHECK((frame[0].o)))->F_heat);
	clinit_mindustry_graphics_Pal(ctx);
	sp[0].o = (jobject)SF_mindustry_graphics_Pal_accent;
	SM_arc_graphics_g2d_Lines_stroke_float_arc_graphics_Color(ctx, temp7, sp[0].o);
	LINE_NUMBER(219);
	jfloat temp8 = (jfloat)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_x;
	jfloat temp9 = (jfloat)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_y;
	jfloat temp10 = frame[1].f;
	jfloat temp11 = (jfloat)SM_arc_math_Mathf_lerp_float_float_float_R_float(ctx, (jfloat(1)), (jfloat(1.3f)), ((jfloat)((mindustry_world_blocks_campaign_Accelerator$AcceleratorBuild *) NULL_CHECK((frame[0].o)))->F_launchHeat));
	SM_arc_graphics_g2d_Lines_square_float_float_float_float(ctx, temp8, temp9, (temp10 * temp11), ((jfloat(45.0f)) + (((jfloat)((mindustry_world_blocks_campaign_Accelerator$AcceleratorBuild *) NULL_CHECK((frame[0].o)))->F_time) / (frame[2].f))));
	LINE_NUMBER(220);
	jfloat temp12 = (jfloat)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_x;
	jfloat temp13 = (jfloat)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_y;
	jfloat temp14 = frame[1].f;
	jfloat temp15 = (jfloat)SM_arc_math_Mathf_lerp_float_float_float_R_float(ctx, (jfloat(1)), (jfloat(1.8f)), ((jfloat)((mindustry_world_blocks_campaign_Accelerator$AcceleratorBuild *) NULL_CHECK((frame[0].o)))->F_launchHeat));
	jfloat temp16 = temp14 * temp15;
	jfloat temp17 = (jfloat)SM_arc_math_Mathf_lerp_float_float_float_R_float(ctx, (jfloat(45.0f)), (jfloat(0)), ((jfloat)((mindustry_world_blocks_campaign_Accelerator$AcceleratorBuild *) NULL_CHECK((frame[0].o)))->F_launchHeat));
	SM_arc_graphics_g2d_Lines_square_float_float_float_float(ctx, temp12, temp13, temp16, (temp17 - (((jfloat)((mindustry_world_blocks_campaign_Accelerator$AcceleratorBuild *) NULL_CHECK((frame[0].o)))->F_time) / (frame[2].f))));
	LINE_NUMBER(222);
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_team;
	sp[0].o = (jobject)((mindustry_game_Team *) NULL_CHECK(sp[0].o))->F_color;
	SM_arc_graphics_g2d_Draw_color_arc_graphics_Color(ctx, sp[0].o);
	LINE_NUMBER(223);
	jfloat temp18 = (jfloat)SM_arc_math_Mathf_clamp_float_R_float(ctx, (((jfloat)((mindustry_world_blocks_campaign_Accelerator$AcceleratorBuild *) NULL_CHECK((frame[0].o)))->F_heat) * (jfloat(3.0f))));
	SM_arc_graphics_g2d_Draw_alpha_float(ctx, temp18);
	LINE_NUMBER(225);
	frame[3].i = (jint(0));
	}
label_37:;
	{
	if ((frame[3].i) >= (jint(4))) goto label_38;
	}
	{
	LINE_NUMBER(226);
	frame[4].f = ((((jfloat((frame[3].i))) * (jfloat(90.0f))) + (jfloat(45.0f))) + (fmodf(((-((jfloat)((mindustry_world_blocks_campaign_Accelerator$AcceleratorBuild *) NULL_CHECK((frame[0].o)))->F_time)) / (jfloat(3.0f))), (jfloat(360.0f)))));
	LINE_NUMBER(227);
	jfloat temp0 = (jfloat(26.0f)) * ((jfloat)((mindustry_world_blocks_campaign_Accelerator$AcceleratorBuild *) NULL_CHECK((frame[0].o)))->F_heat);
	jfloat temp1 = (jfloat)SM_arc_math_Mathf_lerp_float_float_float_R_float(ctx, (jfloat(1)), (jfloat(1.5f)), ((jfloat)((mindustry_world_blocks_campaign_Accelerator$AcceleratorBuild *) NULL_CHECK((frame[0].o)))->F_launchHeat));
	frame[5].f = (temp0 * temp1);
	LINE_NUMBER(228);
	sp[0].o = (jobject)((mindustry_world_blocks_campaign_Accelerator$AcceleratorBuild *) NULL_CHECK((frame[0].o)))->F_this$0;
	sp[0].o = (jobject)((mindustry_world_blocks_campaign_Accelerator *) NULL_CHECK(sp[0].o))->F_arrowRegion;
	jfloat temp2 = (jfloat)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_x;
	jfloat temp3 = (jfloat)SM_arc_math_Angles_trnsx_float_float_R_float(ctx, (frame[4].f), (frame[5].f));
	jfloat temp4 = temp2 + temp3;
	jfloat temp5 = (jfloat)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_y;
	jfloat temp6 = (jfloat)SM_arc_math_Angles_trnsy_float_float_R_float(ctx, (frame[4].f), (frame[5].f));
	SM_arc_graphics_g2d_Draw_rect_arc_graphics_g2d_TextureRegion_float_float_float(ctx, sp[0].o, temp4, (temp5 + temp6), ((frame[4].f) + (jfloat(180.0f))));
	LINE_NUMBER(225);
	INST_IINC(3, 1);
	goto label_37;
	}
label_38:;
	{
	LINE_NUMBER(231);
	SM_arc_graphics_g2d_Draw_reset(ctx);
	LINE_NUMBER(232);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_world_blocks_campaign_Accelerator$AcceleratorBuild_drawLight(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/campaign/Accelerator$AcceleratorBuild:drawLight", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(236);
	jfloat temp0 = (jfloat)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_x;
	jfloat temp1 = (jfloat)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_y;
	sp[0].o = (jobject)((mindustry_world_blocks_campaign_Accelerator$AcceleratorBuild *) NULL_CHECK((frame[0].o)))->F_this$0;
	jfloat temp2 = (jfloat)((mindustry_world_Block *) NULL_CHECK(sp[0].o))->F_lightRadius;
	sp[0].o = (jobject)((mindustry_world_blocks_campaign_Accelerator$AcceleratorBuild *) NULL_CHECK((frame[0].o)))->F_this$0;
	sp[0].o = (jobject)((mindustry_world_Block *) NULL_CHECK(sp[0].o))->F_lightColor;
	SM_mindustry_graphics_Drawf_light_float_float_float_arc_graphics_Color_float(ctx, temp0, temp1, temp2, sp[0].o, ((jfloat)((mindustry_world_blocks_campaign_Accelerator$AcceleratorBuild *) NULL_CHECK((frame[0].o)))->F_launchHeat));
	LINE_NUMBER(237);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jbool M_mindustry_world_blocks_campaign_Accelerator$AcceleratorBuild_canLaunch_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/campaign/Accelerator$AcceleratorBuild:canLaunch", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(240);
	jint temp0 = (jint)((func_mindustry_world_blocks_campaign_Accelerator$AcceleratorBuild_isValid_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_world_blocks_campaign_Accelerator$AcceleratorBuild_isValid_R_boolean])(ctx, (frame[0].o));
	if (temp0 == 0) goto label_1;
	}
	{
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_net;
	jint temp0 = (jint)((func_mindustry_net_Net_client_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_net_Net_client_R_boolean])(ctx, sp[0].o);
	if (temp0 != 0) goto label_1;
	}
	{
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	jint temp0 = (jint)((func_mindustry_core_GameState_isCampaign_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_GameState_isCampaign_R_boolean])(ctx, sp[0].o);
	if (temp0 == 0) goto label_1;
	}
	{
	if ((floatCompare(((jfloat)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_efficiency), (jfloat(0)), -1)) <= 0) goto label_1;
	}
	{
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_power;
	sp[0].o = (jobject)((mindustry_world_modules_PowerModule *) NULL_CHECK(sp[0].o))->F_graph;
	jfloat temp0 = (jfloat)((func_mindustry_world_blocks_power_PowerGraph_getBatteryStored_R_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_blocks_power_PowerGraph_getBatteryStored_R_float])(ctx, sp[0].o);
	sp[0].o = (jobject)((mindustry_world_blocks_campaign_Accelerator$AcceleratorBuild *) NULL_CHECK((frame[0].o)))->F_this$0;
	if ((floatCompare(temp0, (((jfloat)((mindustry_world_blocks_campaign_Accelerator *) NULL_CHECK(sp[0].o))->F_powerBufferRequirement) - (jfloat(1,000000e-05f))), -1)) < 0) goto label_1;
	}
	{
	if ((floatCompare(((jfloat)((mindustry_world_blocks_campaign_Accelerator$AcceleratorBuild *) NULL_CHECK((frame[0].o)))->F_progress), (jfloat(1)), -1)) < 0) goto label_1;
	}
	{
	if (((jint)((mindustry_world_blocks_campaign_Accelerator$AcceleratorBuild *) NULL_CHECK((frame[0].o)))->F_launching) != 0) goto label_1;
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

jobject M_mindustry_world_blocks_campaign_Accelerator$AcceleratorBuild_getCursor_R_arc_Graphics$Cursor(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/campaign/Accelerator$AcceleratorBuild:getCursor", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(245);
	jint temp0 = (jint)((func_mindustry_world_blocks_campaign_Accelerator$AcceleratorBuild_canLaunch_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_world_blocks_campaign_Accelerator$AcceleratorBuild_canLaunch_R_boolean])(ctx, (frame[0].o));
	if (temp0 == 0) goto label_1;
	}
	clinit_arc_Graphics$Cursor$SystemCursor(ctx);
	(sp++)->o = SF_arc_Graphics$Cursor$SystemCursor_hand;
	goto label_2;
label_1:;
	INST_ALOAD(0);
	POP_N(1); // Pop method args
	sp->o = (jobject)M_mindustry_gen_Building_getCursor_R_arc_Graphics$Cursor(ctx, sp[0].o);
	sp++;
label_2:;
	popStackFrame(ctx);
	INST_ARETURN();

	popStackFrame(ctx);
}

void M_mindustry_world_blocks_campaign_Accelerator$AcceleratorBuild_drawSelect(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/campaign/Accelerator$AcceleratorBuild:drawSelect", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(250);
	M_mindustry_gen_Building_drawSelect(ctx, (frame[0].o));
	LINE_NUMBER(252);
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_power;
	sp[0].o = (jobject)((mindustry_world_modules_PowerModule *) NULL_CHECK(sp[0].o))->F_graph;
	jfloat temp0 = (jfloat)((func_mindustry_world_blocks_power_PowerGraph_getBatteryStored_R_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_blocks_power_PowerGraph_getBatteryStored_R_float])(ctx, sp[0].o);
	sp[0].o = (jobject)((mindustry_world_blocks_campaign_Accelerator$AcceleratorBuild *) NULL_CHECK((frame[0].o)))->F_this$0;
	if ((floatCompare(temp0, ((jfloat)((mindustry_world_blocks_campaign_Accelerator *) NULL_CHECK(sp[0].o))->F_powerBufferRequirement), 1)) >= 0) goto label_2;
	}
	{
	if (((jint)((mindustry_world_blocks_campaign_Accelerator$AcceleratorBuild *) NULL_CHECK((frame[0].o)))->F_launching) != 0) goto label_2;
	}
	{
	LINE_NUMBER(253);
	sp[0].o = (jobject)((mindustry_world_blocks_campaign_Accelerator$AcceleratorBuild *) NULL_CHECK((frame[0].o)))->F_this$0;
	clinit_arc_Core(ctx);
	sp[1].o = (jobject)SF_arc_Core_bundle;
	sp[1].o = (jobject)((func_arc_util_I18NBundle_get_java_lang_String_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_util_I18NBundle_get_java_lang_String_R_java_lang_String])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"bar.nobatterypower"_j))));
	sp[2].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_tile;
	jint temp0 = (jint)((mindustry_world_Tile *) NULL_CHECK(sp[2].o))->F_x;
	sp[2].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_tile;
	jfloat temp1 = (jfloat)((func_mindustry_world_blocks_campaign_Accelerator_drawPlaceText_java_lang_String_int_int_boolean_R_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_blocks_campaign_Accelerator_drawPlaceText_java_lang_String_int_int_boolean_R_float])(ctx, sp[0].o, sp[1].o, temp0, ((jint)((mindustry_world_Tile *) NULL_CHECK(sp[2].o))->F_y), (jint(0)));
	}
label_2:;
	LINE_NUMBER(255);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_world_blocks_campaign_Accelerator$AcceleratorBuild_buildConfiguration_arc_scene_ui_layout_Table(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/campaign/Accelerator$AcceleratorBuild:buildConfiguration", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(259);
	((func_mindustry_world_blocks_campaign_Accelerator$AcceleratorBuild_deselect) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_world_blocks_campaign_Accelerator$AcceleratorBuild_deselect])(ctx, (frame[0].o));
	LINE_NUMBER(261);
	jint temp0 = (jint)((func_mindustry_world_blocks_campaign_Accelerator$AcceleratorBuild_canLaunch_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_world_blocks_campaign_Accelerator$AcceleratorBuild_canLaunch_R_boolean])(ctx, (frame[0].o));
	if (temp0 != 0) goto label_2;
	}
	popStackFrame(ctx);
	INST_RETURN();
label_2:;
	{
	LINE_NUMBER(263);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_ui;
	sp[0].o = (jobject)((mindustry_core_UI *) NULL_CHECK(sp[0].o))->F_planet;
	clinit_mindustry_Vars(ctx);
	sp[1].o = (jobject)SF_mindustry_Vars_state;
	sp[1].o = (jobject)((mindustry_core_GameState *) NULL_CHECK(sp[1].o))->F_rules;
	sp[1].o = (jobject)((mindustry_game_Rules *) NULL_CHECK(sp[1].o))->F_sector;
	sp[2].o = (jobject)((mindustry_world_blocks_campaign_Accelerator$AcceleratorBuild *) NULL_CHECK((frame[0].o)))->F_this$0;
	sp[2].o = (jobject)((mindustry_world_blocks_campaign_Accelerator *) NULL_CHECK(sp[2].o))->F_launchCandidates;
	sp += 2;
	if (sp[0].o != nullptr) goto label_3;
	}
	{
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	sp[0].o = (jobject)((mindustry_core_GameState *) NULL_CHECK(sp[0].o))->F_rules;
	sp[0].o = (jobject)((mindustry_game_Rules *) NULL_CHECK(sp[0].o))->F_sector;
	sp[0].o = (jobject)((mindustry_type_Sector *) NULL_CHECK(sp[0].o))->F_planet;
	sp[0].o = (jobject)((mindustry_type_Planet *) NULL_CHECK(sp[0].o))->F_launchCandidates;
	sp += 1;
	goto label_4;
	}
label_3:;
	{
	sp[0].o = (jobject)((mindustry_world_blocks_campaign_Accelerator$AcceleratorBuild *) NULL_CHECK((frame[0].o)))->F_this$0;
	sp[0].o = (jobject)((mindustry_world_blocks_campaign_Accelerator *) NULL_CHECK(sp[0].o))->F_launchCandidates;
	sp += 1;
	}
label_4:;
	{
	sp -= 3;
	{ /* InvokeDynamic */
		clinit_mindustry_world_blocks_campaign_Accelerator$AcceleratorBuild_invoke_arc_func_Cons_2(ctx);
		auto proxy = (mindustry_world_blocks_campaign_Accelerator$AcceleratorBuild_invoke_arc_func_Cons_2 *) gcAlloc(ctx, &class_mindustry_world_blocks_campaign_Accelerator$AcceleratorBuild_invoke_arc_func_Cons_2);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[3].o = (jobject) proxy;
	}
	((func_mindustry_ui_dialogs_PlanetDialog_showPlanetLaunch_mindustry_type_Sector_arc_struct_Seq_arc_func_Cons) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_ui_dialogs_PlanetDialog_showPlanetLaunch_mindustry_type_Sector_arc_struct_Seq_arc_func_Cons])(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o);
	LINE_NUMBER(289);
	clinit_mindustry_game_EventType$Trigger(ctx);
	sp[0].o = (jobject)SF_mindustry_game_EventType$Trigger_acceleratorUse;
	SM_arc_Events_fire_java_lang_Enum(ctx, sp[0].o);
	LINE_NUMBER(290);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jint M_mindustry_world_blocks_campaign_Accelerator$AcceleratorBuild_getMaximumAccepted_mindustry_type_Item_R_int(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/campaign/Accelerator$AcceleratorBuild:getMaximumAccepted", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(294);
	sp[0].o = (jobject)((mindustry_world_blocks_campaign_Accelerator$AcceleratorBuild *) NULL_CHECK((frame[0].o)))->F_this$0;
	sp[0].o = (jobject)((mindustry_world_blocks_campaign_Accelerator *) NULL_CHECK(sp[0].o))->F_capacities;
	jint temp0 = (jint)ARRAY_ACCESS(jint, sp[0].o, ((jint)((mindustry_ctype_Content *) NULL_CHECK((frame[1].o)))->F_id));
	jint temp1 = (jint)((func_mindustry_world_blocks_campaign_Accelerator$AcceleratorBuild_isCoreBuilt_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_world_blocks_campaign_Accelerator$AcceleratorBuild_isCoreBuilt_R_boolean])(ctx, (frame[0].o));
	sp[0].i = temp0;
	sp += 1;
	if (temp1 == 0) goto label_1;
	}
	{
	sp[0].o = (jobject)((mindustry_world_blocks_campaign_Accelerator$AcceleratorBuild *) NULL_CHECK((frame[0].o)))->F_this$0;
	sp[0].o = (jobject)((mindustry_world_blocks_campaign_Accelerator *) NULL_CHECK(sp[0].o))->F_launchBlock;
	jint temp0 = (jint)((mindustry_world_Block *) NULL_CHECK(sp[0].o))->F_itemCapacity;
	sp[0].i = temp0;
	sp += 1;
	goto label_2;
	}
label_1:;
	INST_ICONST(0);
label_2:;
	INST_IADD();
	popStackFrame(ctx);
	INST_IRETURN();

	popStackFrame(ctx);
}

jbool M_mindustry_world_blocks_campaign_Accelerator$AcceleratorBuild_acceptItem_mindustry_gen_Building_mindustry_type_Item_R_boolean(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/campaign/Accelerator$AcceleratorBuild:acceptItem", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(299);
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_items;
	jint temp0 = (jint)((func_mindustry_world_modules_ItemModule_get_mindustry_type_Item_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_modules_ItemModule_get_mindustry_type_Item_R_int])(ctx, sp[0].o, (frame[2].o));
	jint temp1 = (jint)((func_mindustry_world_blocks_campaign_Accelerator$AcceleratorBuild_getMaximumAccepted_mindustry_type_Item_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_world_blocks_campaign_Accelerator$AcceleratorBuild_getMaximumAccepted_mindustry_type_Item_R_int])(ctx, (frame[0].o), (frame[2].o));
	if (temp0 >= temp1) goto label_1;
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

jbyte M_mindustry_world_blocks_campaign_Accelerator$AcceleratorBuild_version_R_byte(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/campaign/Accelerator$AcceleratorBuild:version", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(304);
	popStackFrame(ctx);
	return (jint(1));
	}

	popStackFrame(ctx);
}

void M_mindustry_world_blocks_campaign_Accelerator$AcceleratorBuild_write_arc_util_io_Writes(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/campaign/Accelerator$AcceleratorBuild:write", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(309);
	M_mindustry_gen_Building_write_arc_util_io_Writes(ctx, (frame[0].o), (frame[1].o));
	LINE_NUMBER(310);
	((func_arc_util_io_Writes_f_float) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_util_io_Writes_f_float])(ctx, (frame[1].o), ((jfloat)((mindustry_world_blocks_campaign_Accelerator$AcceleratorBuild *) NULL_CHECK((frame[0].o)))->F_progress));
	LINE_NUMBER(311);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_world_blocks_campaign_Accelerator$AcceleratorBuild_read_arc_util_io_Reads_byte(jcontext ctx, jobject self, jobject param0, jbyte param1) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/campaign/Accelerator$AcceleratorBuild:read", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(315);
	M_mindustry_gen_Building_read_arc_util_io_Reads_byte(ctx, (frame[0].o), (frame[1].o), (frame[2].i));
	LINE_NUMBER(317);
	if ((frame[2].i) < (jint(1))) goto label_2;
	}
	{
	LINE_NUMBER(318);
	sp[0].o = frame[0].o;
	jfloat temp0 = (jfloat)((func_arc_util_io_Reads_f_R_float) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_util_io_Reads_f_R_float])(ctx, (frame[1].o));
	((mindustry_world_blocks_campaign_Accelerator$AcceleratorBuild *) NULL_CHECK(sp[0].o))->F_progress = temp0;
	}
label_2:;
	LINE_NUMBER(320);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jfloat M_mindustry_world_blocks_campaign_Accelerator$AcceleratorBuild_launchDuration_R_float(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/campaign/Accelerator$AcceleratorBuild:launchDuration", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(325);
	sp[0].o = (jobject)((mindustry_world_blocks_campaign_Accelerator$AcceleratorBuild *) NULL_CHECK((frame[0].o)))->F_this$0;
	jfloat temp0 = (jfloat)((mindustry_world_blocks_campaign_Accelerator *) NULL_CHECK(sp[0].o))->F_launchDuration;
	sp[0].o = (jobject)((mindustry_world_blocks_campaign_Accelerator$AcceleratorBuild *) NULL_CHECK((frame[0].o)))->F_this$0;
	popStackFrame(ctx);
	return (temp0 + ((jfloat)((mindustry_world_blocks_campaign_Accelerator *) NULL_CHECK(sp[0].o))->F_chargeDuration));
	}

	popStackFrame(ctx);
}

jobject M_mindustry_world_blocks_campaign_Accelerator$AcceleratorBuild_landMusic_R_arc_audio_Music(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/campaign/Accelerator$AcceleratorBuild:landMusic", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(330);
	popStackFrame(ctx);
	return (jobject(nullptr));
	}

	popStackFrame(ctx);
}

void M_mindustry_world_blocks_campaign_Accelerator$AcceleratorBuild_beginLaunch_boolean(jcontext ctx, jobject self, jbool param0) {
	NULL_CHECK(self);
	jtype frame[10];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/campaign/Accelerator$AcceleratorBuild:beginLaunch", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(335);
	if ((frame[1].i) != 0) goto label_1;
	}
	popStackFrame(ctx);
	INST_RETURN();
label_1:;
	{
	LINE_NUMBER(337);
	((mindustry_world_blocks_campaign_Accelerator$AcceleratorBuild *) NULL_CHECK((frame[0].o)))->F_launching = (jint(1));
	LINE_NUMBER(338);
	clinit_mindustry_content_Fx(ctx);
	sp[0].o = (jobject)SF_mindustry_content_Fx_coreLaunchConstruct;
	jfloat temp0 = (jfloat)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_x;
	jfloat temp1 = (jfloat)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_y;
	sp[1].o = (jobject)((mindustry_world_blocks_campaign_Accelerator$AcceleratorBuild *) NULL_CHECK((frame[0].o)))->F_this$0;
	sp[1].o = (jobject)((mindustry_world_blocks_campaign_Accelerator *) NULL_CHECK(sp[1].o))->F_launchBlock;
	((func_mindustry_entities_Effect_at_float_float_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_entities_Effect_at_float_float_float])(ctx, sp[0].o, temp0, temp1, (jfloat(((jint)((mindustry_world_Block *) NULL_CHECK(sp[1].o))->F_size))));
	LINE_NUMBER(340);
	sp[0].o = frame[0].o;
	jfloat temp2 = (jfloat)SM_arc_math_Mathf_random_float_R_float(ctx, (jfloat(1)));
	((mindustry_world_blocks_campaign_Accelerator$AcceleratorBuild *) NULL_CHECK(sp[0].o))->F_cloudSeed = temp2;
	LINE_NUMBER(341);
	frame[2].f = (jfloat(30.0f));
	LINE_NUMBER(343);
	clinit_arc_scene_ui_Image(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_scene_ui_Image);
	init_arc_scene_ui_Image(ctx, sp[0].o);
	frame[3].o = sp[0].o;
	LINE_NUMBER(344);
	sp[0].o = (jobject)((arc_scene_Element *) NULL_CHECK((frame[3].o)))->F_color;
	((arc_graphics_Color *) NULL_CHECK(sp[0].o))->F_a = (jfloat(0));
	LINE_NUMBER(345);
	sp[0].o = frame[3].o;
	clinit_arc_scene_event_Touchable(ctx);
	sp[1].o = (jobject)SF_arc_scene_event_Touchable_disabled;
	((arc_scene_Element *) NULL_CHECK(sp[0].o))->F_touchable = (jref) sp[1].o;
	LINE_NUMBER(346);
	((func_arc_scene_ui_Image_setFillParent_boolean) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_arc_scene_ui_Image_setFillParent_boolean])(ctx, (frame[3].o), (jint(1)));
	LINE_NUMBER(347);
	sp[0].o = frame[3].o;
	sp[1].o = (jobject)createArray(ctx, &class_arc_scene_Action, (jint(4)));
	jint temp3 = jint(0);
	jfloat temp4 = (jfloat)((func_mindustry_world_blocks_campaign_Accelerator$AcceleratorBuild_launchDuration_R_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_world_blocks_campaign_Accelerator$AcceleratorBuild_launchDuration_R_float])(ctx, (frame[0].o));
	sp[2].o = (jobject)SM_arc_scene_actions_Actions_delay_float_R_arc_scene_actions_DelayAction(ctx, ((temp4 - (frame[2].f)) / (jfloat(60.0f))));
	ARRAY_ACCESS(jobject, sp[1].o, temp3) = sp[2].o;
	jint temp5 = jint(1);
	jfloat temp6 = (frame[2].f) / (jfloat(60.0f));
	clinit_arc_math_Interp(ctx);
	sp[2].o = (jobject)SF_arc_math_Interp_pow2In;
	sp[2].o = (jobject)SM_arc_scene_actions_Actions_fadeIn_float_arc_math_Interp_R_arc_scene_actions_AlphaAction(ctx, temp6, sp[2].o);
	ARRAY_ACCESS(jobject, sp[1].o, temp5) = sp[2].o;
	jint temp7 = jint(2);
	sp[2].o = (jobject)SM_arc_scene_actions_Actions_delay_float_R_arc_scene_actions_DelayAction(ctx, (jfloat(0.1f)));
	ARRAY_ACCESS(jobject, sp[1].o, temp7) = sp[2].o;
	jint temp8 = jint(3);
	sp[2].o = (jobject)SM_arc_scene_actions_Actions_remove_R_arc_scene_actions_RemoveActorAction(ctx);
	ARRAY_ACCESS(jobject, sp[1].o, temp8) = sp[2].o;
	((func_arc_scene_ui_Image_actions_Array1_arc_scene_Action) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_Image_actions_Array1_arc_scene_Action])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(348);
	sp[0].o = frame[3].o;
	{ /* InvokeDynamic */
		clinit_mindustry_world_blocks_campaign_Accelerator$AcceleratorBuild_invoke_java_lang_Runnable_6(ctx);
		auto proxy = (mindustry_world_blocks_campaign_Accelerator$AcceleratorBuild_invoke_java_lang_Runnable_6 *) gcAlloc(ctx, &class_mindustry_world_blocks_campaign_Accelerator$AcceleratorBuild_invoke_java_lang_Runnable_6);
		proxy->F_field0 = (jref) (frame[3].o);
		sp[1].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_scene_ui_Image_update_java_lang_Runnable_R_arc_scene_Element) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_Image_update_java_lang_Runnable_R_arc_scene_Element])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(355);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_scene;
	((func_arc_scene_Scene_add_arc_scene_Element) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_Scene_add_arc_scene_Element])(ctx, sp[0].o, (frame[3].o));
	LINE_NUMBER(356);
	sp[0].o = (jobject)((mindustry_world_blocks_campaign_Accelerator$AcceleratorBuild *) NULL_CHECK((frame[0].o)))->F_this$0;
	sp[0].o = (jobject)((mindustry_world_blocks_campaign_Accelerator *) NULL_CHECK(sp[0].o))->F_chargeSound;
	jint temp9 = (jint)((func_arc_audio_Sound_at_arc_math_geom_Position_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_audio_Sound_at_arc_math_geom_Position_R_int])(ctx, sp[0].o, (frame[0].o));
	LINE_NUMBER(357);
	sp[0].o = (jobject)((mindustry_world_blocks_campaign_Accelerator$AcceleratorBuild *) NULL_CHECK((frame[0].o)))->F_this$0;
	sp[0].o = (jobject)((mindustry_world_blocks_campaign_Accelerator *) NULL_CHECK(sp[0].o))->F_constructSound;
	jint temp10 = (jint)((func_arc_audio_Sound_at_arc_math_geom_Position_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_audio_Sound_at_arc_math_geom_Position_R_int])(ctx, sp[0].o, (frame[0].o));
	LINE_NUMBER(359);
	sp[0].o = (jobject)((mindustry_world_blocks_campaign_Accelerator$AcceleratorBuild *) NULL_CHECK((frame[0].o)))->F_this$0;
	jfloat temp11 = (jfloat)((mindustry_world_blocks_campaign_Accelerator *) NULL_CHECK(sp[0].o))->F_chargeDuration;
	{ /* InvokeDynamic */
		clinit_mindustry_world_blocks_campaign_Accelerator$AcceleratorBuild_invoke_java_lang_Runnable_7(ctx);
		auto proxy = (mindustry_world_blocks_campaign_Accelerator$AcceleratorBuild_invoke_java_lang_Runnable_7 *) gcAlloc(ctx, &class_mindustry_world_blocks_campaign_Accelerator$AcceleratorBuild_invoke_java_lang_Runnable_7);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[0].o = (jobject) proxy;
	}
	SM_arc_util_Time_run_float_java_lang_Runnable(ctx, temp11, sp[0].o);
	LINE_NUMBER(389);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_world_blocks_campaign_Accelerator$AcceleratorBuild_endLaunch(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/campaign/Accelerator$AcceleratorBuild:endLaunch", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(393);
	((mindustry_world_blocks_campaign_Accelerator$AcceleratorBuild *) NULL_CHECK((frame[0].o)))->F_launching = (jint(0));
	LINE_NUMBER(394);
	((mindustry_world_blocks_campaign_Accelerator$AcceleratorBuild *) NULL_CHECK((frame[0].o)))->F_launchTime = (jfloat(0));
	LINE_NUMBER(395);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jfloat M_mindustry_world_blocks_campaign_Accelerator$AcceleratorBuild_zoomLaunch_R_float(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[11];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/campaign/Accelerator$AcceleratorBuild:zoomLaunch", 11 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(399);
	jfloat temp0 = (jfloat)((func_mindustry_world_blocks_campaign_Accelerator$AcceleratorBuild_launchDuration_R_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_world_blocks_campaign_Accelerator$AcceleratorBuild_launchDuration_R_float])(ctx, (frame[0].o));
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_renderer;
	jfloat temp1 = (jfloat)((func_mindustry_core_Renderer_getLandTime_R_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_Renderer_getLandTime_R_float])(ctx, sp[0].o);
	frame[1].f = (temp0 - temp1);
	LINE_NUMBER(400);
	jfloat temp2 = frame[1].f;
	sp[0].o = (jobject)((mindustry_world_blocks_campaign_Accelerator$AcceleratorBuild *) NULL_CHECK((frame[0].o)))->F_this$0;
	if ((floatCompare(temp2, ((jfloat)((mindustry_world_blocks_campaign_Accelerator *) NULL_CHECK(sp[0].o))->F_chargeDuration), 1)) >= 0) goto label_2;
	}
	{
	clinit_arc_math_Interp(ctx);
	sp[0].o = (jobject)SF_arc_math_Interp_pow10In;
	jfloat temp0 = frame[1].f;
	sp[1].o = (jobject)((mindustry_world_blocks_campaign_Accelerator$AcceleratorBuild *) NULL_CHECK((frame[0].o)))->F_this$0;
	jfloat temp1 = (jfloat)SM_arc_math_Mathf_clamp_float_R_float(ctx, (temp0 / ((jfloat)((mindustry_world_blocks_campaign_Accelerator *) NULL_CHECK(sp[1].o))->F_chargeDuration)));
	jfloat temp2 = (jfloat)((func_arc_math_Interp$PowIn_apply_float_R_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_Interp$PowIn_apply_float_R_float])(ctx, sp[0].o, temp1);
	sp[0].f = temp2;
	sp += 1;
	goto label_3;
	}
label_2:;
	INST_FCONST(0);
label_3:;
	{
	sp -= 1;
	frame[2].f = sp[0].f;
	LINE_NUMBER(402);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_camera;
	sp[0].o = (jobject)((arc_graphics_Camera *) NULL_CHECK(sp[0].o))->F_position;
	sp[0].o = (jobject)((func_arc_math_geom_Vec2_set_float_float_R_arc_math_geom_Vec2) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Vec2_set_float_float_R_arc_math_geom_Vec2])(ctx, sp[0].o, ((jfloat)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_x), ((jfloat)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_y));
	clinit_arc_util_Tmp(ctx);
	sp[1].o = (jobject)SF_arc_util_Tmp_v1;
	sp[1].o = (jobject)((func_arc_math_geom_Vec2_setToRandomDirection_R_arc_math_geom_Vec2) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_math_geom_Vec2_setToRandomDirection_R_arc_math_geom_Vec2])(ctx, sp[1].o);
	sp[1].o = (jobject)((func_arc_math_geom_Vec2_scl_float_R_arc_math_geom_Vec2) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_math_geom_Vec2_scl_float_R_arc_math_geom_Vec2])(ctx, sp[1].o, ((frame[2].f) * (jfloat(2))));
	sp[0].o = (jobject)((func_arc_math_geom_Vec2_add_arc_math_geom_Vec2_R_arc_math_geom_Vec2) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Vec2_add_arc_math_geom_Vec2_R_arc_math_geom_Vec2])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(404);
	jfloat temp0 = frame[1].f;
	sp[0].o = (jobject)((mindustry_world_blocks_campaign_Accelerator$AcceleratorBuild *) NULL_CHECK((frame[0].o)))->F_this$0;
	if ((floatCompare(temp0, ((jfloat)((mindustry_world_blocks_campaign_Accelerator *) NULL_CHECK(sp[0].o))->F_chargeDuration), 1)) >= 0) goto label_6;
	}
	{
	LINE_NUMBER(405);
	jfloat temp0 = frame[1].f;
	sp[0].o = (jobject)((mindustry_world_blocks_campaign_Accelerator$AcceleratorBuild *) NULL_CHECK((frame[0].o)))->F_this$0;
	frame[3].f = (temp0 / ((jfloat)((mindustry_world_blocks_campaign_Accelerator *) NULL_CHECK(sp[0].o))->F_chargeDuration));
	LINE_NUMBER(407);
	sp[0].o = (jobject)((mindustry_world_blocks_campaign_Accelerator$AcceleratorBuild *) NULL_CHECK((frame[0].o)))->F_this$0;
	sp[0].o = (jobject)((mindustry_world_blocks_campaign_Accelerator *) NULL_CHECK(sp[0].o))->F_chargeZoomInterp;
	sp[1].o = (jobject)((mindustry_world_blocks_campaign_Accelerator$AcceleratorBuild *) NULL_CHECK((frame[0].o)))->F_this$0;
	jfloat temp1 = (jfloat)SM_arc_scene_ui_layout_Scl_scl_float_R_float(ctx, ((jfloat)((mindustry_world_blocks_campaign_Accelerator *) NULL_CHECK(sp[1].o))->F_landZoomTo));
	sp[1].o = (jobject)((mindustry_world_blocks_campaign_Accelerator$AcceleratorBuild *) NULL_CHECK((frame[0].o)))->F_this$0;
	jfloat temp2 = (jfloat)SM_arc_scene_ui_layout_Scl_scl_float_R_float(ctx, ((jfloat)((mindustry_world_blocks_campaign_Accelerator *) NULL_CHECK(sp[1].o))->F_chargeZoomTo));
	jfloat temp3 = (jfloat)((func_arc_math_Interp_apply_float_float_float_R_float) resolveInterfaceMethod(ctx, &class_arc_math_Interp, INDEX_arc_math_Interp_apply_float_float_float_R_float, sp[0].o))(ctx, sp[0].o, temp1, temp2, (frame[3].f));
	popStackFrame(ctx);
	return temp3;
	}
label_6:;
	{
	LINE_NUMBER(409);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_renderer;
	jfloat temp0 = (jfloat)((func_mindustry_core_Renderer_getLandTimeIn_R_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_Renderer_getLandTimeIn_R_float])(ctx, sp[0].o);
	frame[3].f = temp0;
	LINE_NUMBER(410);
	jfloat temp1 = jfloat(1);
	jfloat temp2 = (jfloat(1)) - (frame[3].f);
	sp[0].o = (jobject)((mindustry_world_blocks_campaign_Accelerator$AcceleratorBuild *) NULL_CHECK((frame[0].o)))->F_this$0;
	jfloat temp3 = (jfloat)((mindustry_world_blocks_campaign_Accelerator *) NULL_CHECK(sp[0].o))->F_chargeDuration;
	sp[0].o = (jobject)((mindustry_world_blocks_campaign_Accelerator$AcceleratorBuild *) NULL_CHECK((frame[0].o)))->F_this$0;
	jfloat temp4 = (jfloat)((mindustry_world_blocks_campaign_Accelerator *) NULL_CHECK(sp[0].o))->F_launchDuration;
	sp[0].o = (jobject)((mindustry_world_blocks_campaign_Accelerator$AcceleratorBuild *) NULL_CHECK((frame[0].o)))->F_this$0;
	jfloat temp5 = (jfloat)SM_arc_math_Mathf_clamp_float_R_float(ctx, (temp2 - (temp3 / (temp4 + ((jfloat)((mindustry_world_blocks_campaign_Accelerator *) NULL_CHECK(sp[0].o))->F_chargeDuration)))));
	jfloat temp6 = jfloat(1);
	sp[0].o = (jobject)((mindustry_world_blocks_campaign_Accelerator$AcceleratorBuild *) NULL_CHECK((frame[0].o)))->F_this$0;
	jfloat temp7 = (jfloat)((mindustry_world_blocks_campaign_Accelerator *) NULL_CHECK(sp[0].o))->F_chargeDuration;
	sp[0].o = (jobject)((mindustry_world_blocks_campaign_Accelerator$AcceleratorBuild *) NULL_CHECK((frame[0].o)))->F_this$0;
	jfloat temp8 = (jfloat)((mindustry_world_blocks_campaign_Accelerator *) NULL_CHECK(sp[0].o))->F_launchDuration;
	sp[0].o = (jobject)((mindustry_world_blocks_campaign_Accelerator$AcceleratorBuild *) NULL_CHECK((frame[0].o)))->F_this$0;
	frame[4].f = (temp1 - (temp5 / (temp6 - (temp7 / (temp8 + ((jfloat)((mindustry_world_blocks_campaign_Accelerator *) NULL_CHECK(sp[0].o))->F_chargeDuration))))));
	LINE_NUMBER(412);
	sp[0].o = (jobject)((mindustry_world_blocks_campaign_Accelerator$AcceleratorBuild *) NULL_CHECK((frame[0].o)))->F_this$0;
	sp[0].o = (jobject)((mindustry_world_blocks_campaign_Accelerator *) NULL_CHECK(sp[0].o))->F_landZoomInterp;
	sp[1].o = (jobject)((mindustry_world_blocks_campaign_Accelerator$AcceleratorBuild *) NULL_CHECK((frame[0].o)))->F_this$0;
	jfloat temp9 = (jfloat)SM_arc_scene_ui_layout_Scl_scl_float_R_float(ctx, ((jfloat)((mindustry_world_blocks_campaign_Accelerator *) NULL_CHECK(sp[1].o))->F_landZoomFrom));
	sp[1].o = (jobject)((mindustry_world_blocks_campaign_Accelerator$AcceleratorBuild *) NULL_CHECK((frame[0].o)))->F_this$0;
	jfloat temp10 = (jfloat)SM_arc_scene_ui_layout_Scl_scl_float_R_float(ctx, ((jfloat)((mindustry_world_blocks_campaign_Accelerator *) NULL_CHECK(sp[1].o))->F_landZoomTo));
	jfloat temp11 = (jfloat)((func_arc_math_Interp_apply_float_float_float_R_float) resolveInterfaceMethod(ctx, &class_arc_math_Interp, INDEX_arc_math_Interp_apply_float_float_float_R_float, sp[0].o))(ctx, sp[0].o, temp9, temp10, (frame[4].f));
	popStackFrame(ctx);
	return temp11;
	}

	popStackFrame(ctx);
}

void M_mindustry_world_blocks_campaign_Accelerator$AcceleratorBuild_updateLaunch(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[15];
	auto stack = &frame[7];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/campaign/Accelerator$AcceleratorBuild:updateLaunch", 15 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(418);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_renderer;
	jfloat temp0 = (jfloat)((func_mindustry_core_Renderer_getLandTimeIn_R_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_Renderer_getLandTimeIn_R_float])(ctx, sp[0].o);
	jfloat temp1 = (jfloat)((func_mindustry_world_blocks_campaign_Accelerator$AcceleratorBuild_launchDuration_R_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_world_blocks_campaign_Accelerator$AcceleratorBuild_launchDuration_R_float])(ctx, (frame[0].o));
	frame[1].f = (temp0 * temp1);
	LINE_NUMBER(419);
	sp[0].o = frame[0].o;
	jfloat temp2 = (jfloat)((func_mindustry_world_blocks_campaign_Accelerator$AcceleratorBuild_launchDuration_R_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_world_blocks_campaign_Accelerator$AcceleratorBuild_launchDuration_R_float])(ctx, (frame[0].o));
	((mindustry_world_blocks_campaign_Accelerator$AcceleratorBuild *) NULL_CHECK(sp[0].o))->F_launchTime = (temp2 - (frame[1].f));
	LINE_NUMBER(420);
	clinit_mindustry_world_blocks_storage_CoreBlock(ctx);
	sp[0].o = (jobject)SF_mindustry_world_blocks_storage_CoreBlock_thrusterSizes;
	jfloat temp3 = (frame[1].f) + (jfloat(35.0f));
	jfloat temp4 = (jfloat)((func_mindustry_world_blocks_campaign_Accelerator$AcceleratorBuild_launchDuration_R_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_world_blocks_campaign_Accelerator$AcceleratorBuild_launchDuration_R_float])(ctx, (frame[0].o));
	jfloat temp5 = (jfloat)SM_arc_math_Mathf_sample_Array1_float_float_R_float(ctx, sp[0].o, (temp3 / temp4));
	frame[2].f = temp5;
	LINE_NUMBER(422);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_renderer;
	jfloat temp6 = (jfloat)((func_mindustry_core_Renderer_getLandTimeIn_R_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_Renderer_getLandTimeIn_R_float])(ctx, sp[0].o);
	frame[3].f = temp6;
	LINE_NUMBER(423);
	jfloat temp7 = jfloat(1);
	jfloat temp8 = (jfloat(1)) - (frame[3].f);
	sp[0].o = (jobject)((mindustry_world_blocks_campaign_Accelerator$AcceleratorBuild *) NULL_CHECK((frame[0].o)))->F_this$0;
	jfloat temp9 = (jfloat)((mindustry_world_blocks_campaign_Accelerator *) NULL_CHECK(sp[0].o))->F_chargeDuration;
	sp[0].o = (jobject)((mindustry_world_blocks_campaign_Accelerator$AcceleratorBuild *) NULL_CHECK((frame[0].o)))->F_this$0;
	jfloat temp10 = (jfloat)((mindustry_world_blocks_campaign_Accelerator *) NULL_CHECK(sp[0].o))->F_launchDuration;
	sp[0].o = (jobject)((mindustry_world_blocks_campaign_Accelerator$AcceleratorBuild *) NULL_CHECK((frame[0].o)))->F_this$0;
	jfloat temp11 = (jfloat)SM_arc_math_Mathf_clamp_float_R_float(ctx, (temp8 / (temp9 / (temp10 + ((jfloat)((mindustry_world_blocks_campaign_Accelerator *) NULL_CHECK(sp[0].o))->F_chargeDuration)))));
	frame[4].f = (temp7 - temp11);
	LINE_NUMBER(424);
	frame[5].f = ((jfloat(1)) - (frame[4].f));
	LINE_NUMBER(426);
	jfloat temp12 = frame[1].f;
	sp[0].o = (jobject)((mindustry_world_blocks_campaign_Accelerator$AcceleratorBuild *) NULL_CHECK((frame[0].o)))->F_this$0;
	if ((floatCompare(temp12, ((jfloat)((mindustry_world_blocks_campaign_Accelerator *) NULL_CHECK(sp[0].o))->F_launchDuration), -1)) <= 0) goto label_7;
	}
	{
	LINE_NUMBER(427);
	sp[0].o = (jobject)((mindustry_world_blocks_campaign_Accelerator$AcceleratorBuild *) NULL_CHECK((frame[0].o)))->F_this$0;
	jdouble temp0 = (jdouble)((mindustry_world_blocks_campaign_Accelerator *) NULL_CHECK(sp[0].o))->F_lightningLaunchChance;
	clinit_arc_math_Interp(ctx);
	sp[0].o = (jobject)SF_arc_math_Interp_pow3In;
	jfloat temp1 = (jfloat)((func_arc_math_Interp$PowIn_apply_float_R_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_Interp$PowIn_apply_float_R_float])(ctx, sp[0].o, (frame[5].f));
	jint temp2 = (jint)SM_arc_math_Mathf_chanceDelta_double_R_boolean(ctx, (temp0 * (jdouble(temp1))));
	if (temp2 == 0) goto label_7;
	}
	{
	LINE_NUMBER(428);
	jfloat temp0 = (jfloat)SM_arc_math_Mathf_random_float_R_float(ctx, (jfloat(360.0f)));
	frame[6].f = temp0;
	LINE_NUMBER(429);
	sp[0].o = (jobject)((mindustry_world_blocks_campaign_Accelerator$AcceleratorBuild *) NULL_CHECK((frame[0].o)))->F_this$0;
	sp[0].o = (jobject)((mindustry_world_blocks_campaign_Accelerator *) NULL_CHECK(sp[0].o))->F_lightningSound;
	sp[1].o = frame[0].o;
	jfloat temp1 = jfloat(1);
	jfloat temp2 = (jfloat)SM_arc_math_Mathf_range_float_R_float(ctx, (jfloat(0.1f)));
	jfloat temp3 = temp1 + temp2;
	sp[2].o = (jobject)((mindustry_world_blocks_campaign_Accelerator$AcceleratorBuild *) NULL_CHECK((frame[0].o)))->F_this$0;
	jint temp4 = (jint)((func_arc_audio_Sound_at_arc_math_geom_Position_float_float_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_audio_Sound_at_arc_math_geom_Position_float_float_R_int])(ctx, sp[0].o, sp[1].o, temp3, ((jfloat)((mindustry_world_blocks_campaign_Accelerator *) NULL_CHECK(sp[2].o))->F_lightningSoundVolume));
	LINE_NUMBER(430);
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_team;
	sp[1].o = (jobject)((mindustry_world_blocks_campaign_Accelerator$AcceleratorBuild *) NULL_CHECK((frame[0].o)))->F_this$0;
	sp[1].o = (jobject)((mindustry_world_blocks_campaign_Accelerator *) NULL_CHECK(sp[1].o))->F_lightningColor;
	sp[2].o = (jobject)((mindustry_world_blocks_campaign_Accelerator$AcceleratorBuild *) NULL_CHECK((frame[0].o)))->F_this$0;
	jfloat temp5 = (jfloat)((mindustry_world_blocks_campaign_Accelerator *) NULL_CHECK(sp[2].o))->F_lightningDamage;
	jfloat temp6 = (jfloat)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_x;
	jfloat temp7 = frame[6].f;
	sp[2].o = (jobject)((mindustry_world_blocks_campaign_Accelerator$AcceleratorBuild *) NULL_CHECK((frame[0].o)))->F_this$0;
	jfloat temp8 = (jfloat)SM_arc_math_Angles_trnsx_float_float_R_float(ctx, temp7, ((jfloat)((mindustry_world_blocks_campaign_Accelerator *) NULL_CHECK(sp[2].o))->F_lightningOffset));
	jfloat temp9 = temp6 + temp8;
	jfloat temp10 = (jfloat)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_y;
	jfloat temp11 = frame[6].f;
	sp[2].o = (jobject)((mindustry_world_blocks_campaign_Accelerator$AcceleratorBuild *) NULL_CHECK((frame[0].o)))->F_this$0;
	jfloat temp12 = (jfloat)SM_arc_math_Angles_trnsy_float_float_R_float(ctx, temp11, ((jfloat)((mindustry_world_blocks_campaign_Accelerator *) NULL_CHECK(sp[2].o))->F_lightningOffset));
	jfloat temp13 = temp10 + temp12;
	jfloat temp14 = frame[6].f;
	sp[2].o = (jobject)((mindustry_world_blocks_campaign_Accelerator$AcceleratorBuild *) NULL_CHECK((frame[0].o)))->F_this$0;
	jint temp15 = (jint)((mindustry_world_blocks_campaign_Accelerator *) NULL_CHECK(sp[2].o))->F_lightningLengthMin;
	sp[2].o = (jobject)((mindustry_world_blocks_campaign_Accelerator$AcceleratorBuild *) NULL_CHECK((frame[0].o)))->F_this$0;
	jint temp16 = (jint)SM_arc_math_Mathf_random_int_int_R_int(ctx, temp15, ((jint)((mindustry_world_blocks_campaign_Accelerator *) NULL_CHECK(sp[2].o))->F_lightningLengthMax));
	SM_mindustry_entities_Lightning_create_mindustry_game_Team_arc_graphics_Color_float_float_float_float_int(ctx, sp[0].o, sp[1].o, temp5, temp9, temp13, temp14, temp16);
	}
label_7:;
	LINE_NUMBER(433);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_world_blocks_campaign_Accelerator$AcceleratorBuild_drawLaunch(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[22];
	auto stack = &frame[14];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/campaign/Accelerator$AcceleratorBuild:drawLaunch", 22 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(437);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_assets;
	sp[0].o = (jobject)((func_arc_assets_AssetManager_get_java_lang_String_java_lang_Class_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_assets_AssetManager_get_java_lang_String_java_lang_Class_R_java_lang_Object])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"sprites/clouds.png"_j))), (((jobject) &class_arc_graphics_Texture)));
	frame[1].o = (checkCast(ctx, &class_arc_graphics_Texture, sp[0].o));
	LINE_NUMBER(439);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_renderer;
	jfloat temp0 = (jfloat)((func_mindustry_core_Renderer_getLandTimeIn_R_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_Renderer_getLandTimeIn_R_float])(ctx, sp[0].o);
	frame[2].f = temp0;
	LINE_NUMBER(440);
	jfloat temp1 = (jfloat)((func_mindustry_world_blocks_campaign_Accelerator$AcceleratorBuild_launchDuration_R_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_world_blocks_campaign_Accelerator$AcceleratorBuild_launchDuration_R_float])(ctx, (frame[0].o));
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_renderer;
	jfloat temp2 = (jfloat)((func_mindustry_core_Renderer_getLandTime_R_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_Renderer_getLandTime_R_float])(ctx, sp[0].o);
	frame[3].f = (temp1 - temp2);
	LINE_NUMBER(441);
	jfloat temp3 = jfloat(1);
	jfloat temp4 = (jfloat(1)) - (frame[2].f);
	sp[0].o = (jobject)((mindustry_world_blocks_campaign_Accelerator$AcceleratorBuild *) NULL_CHECK((frame[0].o)))->F_this$0;
	jfloat temp5 = (jfloat)((mindustry_world_blocks_campaign_Accelerator *) NULL_CHECK(sp[0].o))->F_chargeDuration;
	sp[0].o = (jobject)((mindustry_world_blocks_campaign_Accelerator$AcceleratorBuild *) NULL_CHECK((frame[0].o)))->F_this$0;
	jfloat temp6 = (jfloat)((mindustry_world_blocks_campaign_Accelerator *) NULL_CHECK(sp[0].o))->F_launchDuration;
	sp[0].o = (jobject)((mindustry_world_blocks_campaign_Accelerator$AcceleratorBuild *) NULL_CHECK((frame[0].o)))->F_this$0;
	jfloat temp7 = (jfloat)SM_arc_math_Mathf_clamp_float_R_float(ctx, (temp4 - (temp5 / (temp6 + ((jfloat)((mindustry_world_blocks_campaign_Accelerator *) NULL_CHECK(sp[0].o))->F_chargeDuration)))));
	jfloat temp8 = jfloat(1);
	sp[0].o = (jobject)((mindustry_world_blocks_campaign_Accelerator$AcceleratorBuild *) NULL_CHECK((frame[0].o)))->F_this$0;
	jfloat temp9 = (jfloat)((mindustry_world_blocks_campaign_Accelerator *) NULL_CHECK(sp[0].o))->F_chargeDuration;
	sp[0].o = (jobject)((mindustry_world_blocks_campaign_Accelerator$AcceleratorBuild *) NULL_CHECK((frame[0].o)))->F_this$0;
	jfloat temp10 = (jfloat)((mindustry_world_blocks_campaign_Accelerator *) NULL_CHECK(sp[0].o))->F_launchDuration;
	sp[0].o = (jobject)((mindustry_world_blocks_campaign_Accelerator$AcceleratorBuild *) NULL_CHECK((frame[0].o)))->F_this$0;
	frame[4].f = (temp3 - (temp7 / (temp8 - (temp9 / (temp10 + ((jfloat)((mindustry_world_blocks_campaign_Accelerator *) NULL_CHECK(sp[0].o))->F_chargeDuration))))));
	LINE_NUMBER(443);
	jfloat temp11 = jfloat(1);
	jfloat temp12 = (jfloat(1)) - (frame[2].f);
	sp[0].o = (jobject)((mindustry_world_blocks_campaign_Accelerator$AcceleratorBuild *) NULL_CHECK((frame[0].o)))->F_this$0;
	jfloat temp13 = (jfloat)((mindustry_world_blocks_campaign_Accelerator *) NULL_CHECK(sp[0].o))->F_chargeDuration;
	sp[0].o = (jobject)((mindustry_world_blocks_campaign_Accelerator$AcceleratorBuild *) NULL_CHECK((frame[0].o)))->F_this$0;
	jfloat temp14 = (jfloat)((mindustry_world_blocks_campaign_Accelerator *) NULL_CHECK(sp[0].o))->F_launchDuration;
	sp[0].o = (jobject)((mindustry_world_blocks_campaign_Accelerator$AcceleratorBuild *) NULL_CHECK((frame[0].o)))->F_this$0;
	jfloat temp15 = (jfloat)SM_arc_math_Mathf_clamp_float_R_float(ctx, (temp12 / (temp13 / (temp14 + ((jfloat)((mindustry_world_blocks_campaign_Accelerator *) NULL_CHECK(sp[0].o))->F_chargeDuration)))));
	frame[5].f = (temp11 - temp15);
	LINE_NUMBER(444);
	frame[6].f = ((jfloat(1)) - (frame[5].f));
	LINE_NUMBER(446);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_renderer;
	jfloat temp16 = (jfloat)((func_mindustry_core_Renderer_getDisplayScale_R_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_Renderer_getDisplayScale_R_float])(ctx, sp[0].o);
	frame[7].f = temp16;
	LINE_NUMBER(448);
	frame[8].f = ((jfloat(1)) - (frame[4].f));
	LINE_NUMBER(449);
	jfloat temp17 = (jfloat)SM_arc_scene_ui_layout_Scl_scl_float_R_float(ctx, (jfloat(4.0f)));
	frame[9].f = (temp17 / (frame[7].f));
	LINE_NUMBER(450);
	clinit_arc_math_Interp(ctx);
	sp[0].o = (jobject)SF_arc_math_Interp_pow3Out;
	jfloat temp18 = (jfloat)((func_arc_math_Interp$PowOut_apply_float_R_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_Interp$PowOut_apply_float_R_float])(ctx, sp[0].o, (frame[4].f));
	frame[10].f = temp18;
	clinit_arc_math_Interp(ctx);
	sp[0].o = (jobject)SF_arc_math_Interp_pow2In;
	jfloat temp19 = (jfloat)((func_arc_math_Interp$PowIn_apply_float_R_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_Interp$PowIn_apply_float_R_float])(ctx, sp[0].o, (frame[8].f));
	frame[11].f = temp19;
	LINE_NUMBER(453);
	clinit_mindustry_graphics_Pal(ctx);
	sp[0].o = (jobject)SF_mindustry_graphics_Pal_lightTrail;
	SM_arc_graphics_g2d_Draw_color_arc_graphics_Color(ctx, sp[0].o);
	LINE_NUMBER(454);
	jlong temp20 = jlong(1);
	jfloat temp21 = frame[10].f;
	jint temp22 = 100;
	jfloat temp23 = ((jfloat(800.0f)) * (frame[9].f)) * (frame[10].f);
	{ /* InvokeDynamic */
		clinit_mindustry_world_blocks_campaign_Accelerator$AcceleratorBuild_invoke_arc_math_Angles$ParticleConsumer_1(ctx);
		auto proxy = (mindustry_world_blocks_campaign_Accelerator$AcceleratorBuild_invoke_arc_math_Angles$ParticleConsumer_1 *) gcAlloc(ctx, &class_mindustry_world_blocks_campaign_Accelerator$AcceleratorBuild_invoke_arc_math_Angles$ParticleConsumer_1);
		proxy->F_field2 = (frame[11].f);
		proxy->F_field1 = (frame[9].f);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[0].o = (jobject) proxy;
	}
	SM_arc_math_Angles_randLenVectors_long_float_int_float_arc_math_Angles$ParticleConsumer(ctx, temp20, temp21, temp22, temp23, sp[0].o);
	LINE_NUMBER(458);
	SM_arc_graphics_g2d_Draw_color(ctx);
	LINE_NUMBER(460);
	jfloat temp24 = frame[3].f;
	sp[0].o = (jobject)((mindustry_world_blocks_campaign_Accelerator$AcceleratorBuild *) NULL_CHECK((frame[0].o)))->F_this$0;
	if ((floatCompare(temp24, ((jfloat)((mindustry_world_blocks_campaign_Accelerator *) NULL_CHECK(sp[0].o))->F_chargeDuration), -1)) < 0) goto label_15;
	}
	{
	LINE_NUMBER(461);
	((func_mindustry_world_blocks_campaign_Accelerator$AcceleratorBuild_drawLanding_float_float_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_world_blocks_campaign_Accelerator$AcceleratorBuild_drawLanding_float_float_float])(ctx, (frame[0].o), (frame[4].f), ((jfloat)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_x), ((jfloat)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_y));
	}
label_15:;
	{
	LINE_NUMBER(464);
	SM_arc_graphics_g2d_Draw_color(ctx);
	LINE_NUMBER(465);
	clinit_arc_graphics_Color(ctx);
	sp[0].o = (jobject)SF_arc_graphics_Color_white;
	clinit_arc_math_Interp(ctx);
	sp[1].o = (jobject)SF_arc_math_Interp_pow5In;
	jfloat temp0 = (jfloat)((func_arc_math_Interp$PowIn_apply_float_R_float) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_math_Interp$PowIn_apply_float_R_float])(ctx, sp[1].o, (frame[8].f));
	SM_arc_graphics_g2d_Draw_mixcol_arc_graphics_Color_float(ctx, sp[0].o, temp0);
	LINE_NUMBER(468);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_renderer;
	jint temp1 = (jint)((func_mindustry_core_Renderer_isLaunching_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_Renderer_isLaunching_R_boolean])(ctx, sp[0].o);
	if (temp1 == 0) goto label_19;
	}
	{
	LINE_NUMBER(469);
	jfloat temp0 = (jfloat)SM_arc_math_Mathf_clamp_float_R_float(ctx, ((jfloat(1)) - ((frame[8].f) * (jfloat(12.0f)))));
	frame[12].f = temp0;
	LINE_NUMBER(470);
	if ((floatCompare((frame[12].f), (jfloat(1,000000e-03f)), -1)) <= 0) goto label_19;
	}
	{
	LINE_NUMBER(471);
	clinit_mindustry_graphics_Pal(ctx);
	sp[0].o = (jobject)SF_mindustry_graphics_Pal_accent;
	SM_arc_graphics_g2d_Draw_mixcol_arc_graphics_Color_float(ctx, sp[0].o, (frame[12].f));
	}
label_19:;
	{
	LINE_NUMBER(476);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	sp[0].o = (jobject)((mindustry_core_GameState *) NULL_CHECK(sp[0].o))->F_rules;
	sp[0].o = (jobject)((mindustry_game_Rules *) NULL_CHECK(sp[0].o))->F_cloudColor;
	if ((floatCompare(((jfloat)((arc_graphics_Color *) NULL_CHECK(sp[0].o))->F_a), (jfloat(1,000000e-04f)), -1)) <= 0) goto label_23;
	}
	{
	LINE_NUMBER(477);
	frame[12].f = (jfloat(1700.0f));
	LINE_NUMBER(478);
	jfloat temp0 = jfloat(1);
	jfloat temp1 = (jfloat)SM_arc_math_Mathf_clamp_float_R_float(ctx, ((frame[4].f) + (jfloat(0.3f))));
	jfloat temp2 = (jfloat)SM_java_lang_Math_max_float_float_R_float(ctx, (temp0 + (temp1 * (jfloat(-2.0f)))), (jfloat(0)));
	frame[13].f = (temp2 * (frame[7].f));
	LINE_NUMBER(480);
	clinit_arc_util_Tmp(ctx);
	sp[0].o = (jobject)SF_arc_util_Tmp_tr1;
	((func_arc_graphics_g2d_TextureRegion_set_arc_graphics_Texture) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_g2d_TextureRegion_set_arc_graphics_Texture])(ctx, sp[0].o, (frame[1].o));
	LINE_NUMBER(481);
	clinit_arc_util_Tmp(ctx);
	sp[0].o = (jobject)SF_arc_util_Tmp_tr1;
	clinit_arc_Core(ctx);
	sp[1].o = (jobject)SF_arc_Core_camera;
	sp[1].o = (jobject)((arc_graphics_Camera *) NULL_CHECK(sp[1].o))->F_position;
	jfloat temp3 = (jfloat)((arc_math_geom_Vec2 *) NULL_CHECK(sp[1].o))->F_x;
	clinit_arc_Core(ctx);
	sp[1].o = (jobject)SF_arc_Core_camera;
	jfloat temp4 = (temp3 - ((((jfloat)((arc_graphics_Camera *) NULL_CHECK(sp[1].o))->F_width) / (jfloat(2))) * (frame[13].f))) / (frame[12].f);
	clinit_arc_Core(ctx);
	sp[1].o = (jobject)SF_arc_Core_camera;
	sp[1].o = (jobject)((arc_graphics_Camera *) NULL_CHECK(sp[1].o))->F_position;
	jfloat temp5 = (jfloat)((arc_math_geom_Vec2 *) NULL_CHECK(sp[1].o))->F_y;
	clinit_arc_Core(ctx);
	sp[1].o = (jobject)SF_arc_Core_camera;
	jfloat temp6 = (temp5 - ((((jfloat)((arc_graphics_Camera *) NULL_CHECK(sp[1].o))->F_height) / (jfloat(2))) * (frame[13].f))) / (frame[12].f);
	clinit_arc_Core(ctx);
	sp[1].o = (jobject)SF_arc_Core_camera;
	sp[1].o = (jobject)((arc_graphics_Camera *) NULL_CHECK(sp[1].o))->F_position;
	jfloat temp7 = (jfloat)((arc_math_geom_Vec2 *) NULL_CHECK(sp[1].o))->F_x;
	clinit_arc_Core(ctx);
	sp[1].o = (jobject)SF_arc_Core_camera;
	jfloat temp8 = (temp7 + ((((jfloat)((arc_graphics_Camera *) NULL_CHECK(sp[1].o))->F_width) / (jfloat(2))) * (frame[13].f))) / (frame[12].f);
	clinit_arc_Core(ctx);
	sp[1].o = (jobject)SF_arc_Core_camera;
	sp[1].o = (jobject)((arc_graphics_Camera *) NULL_CHECK(sp[1].o))->F_position;
	jfloat temp9 = (jfloat)((arc_math_geom_Vec2 *) NULL_CHECK(sp[1].o))->F_y;
	clinit_arc_Core(ctx);
	sp[1].o = (jobject)SF_arc_Core_camera;
	((func_arc_graphics_g2d_TextureRegion_set_float_float_float_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_g2d_TextureRegion_set_float_float_float_float])(ctx, sp[0].o, temp4, temp6, temp8, ((temp9 + ((((jfloat)((arc_graphics_Camera *) NULL_CHECK(sp[1].o))->F_height) / (jfloat(2))) * (frame[13].f))) / (frame[12].f)));
	LINE_NUMBER(487);
	clinit_arc_util_Tmp(ctx);
	sp[0].o = (jobject)SF_arc_util_Tmp_tr1;
	((func_arc_graphics_g2d_TextureRegion_scroll_float_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_g2d_TextureRegion_scroll_float_float])(ctx, sp[0].o, ((jfloat(10.0f)) * ((jfloat)((mindustry_world_blocks_campaign_Accelerator$AcceleratorBuild *) NULL_CHECK((frame[0].o)))->F_cloudSeed)), ((jfloat(10.0f)) * ((jfloat)((mindustry_world_blocks_campaign_Accelerator$AcceleratorBuild *) NULL_CHECK((frame[0].o)))->F_cloudSeed)));
	LINE_NUMBER(489);
	clinit_mindustry_world_blocks_storage_CoreBlock(ctx);
	sp[0].o = (jobject)SF_mindustry_world_blocks_storage_CoreBlock_cloudAlphas;
	jfloat temp10 = (jfloat)SM_arc_math_Mathf_sample_Array1_float_float_R_float(ctx, sp[0].o, ((frame[4].f) + (jfloat(0.25f))));
	SM_arc_graphics_g2d_Draw_alpha_float(ctx, (temp10 * (jfloat(0.81f))));
	LINE_NUMBER(490);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	sp[0].o = (jobject)((mindustry_core_GameState *) NULL_CHECK(sp[0].o))->F_rules;
	sp[0].o = (jobject)((mindustry_game_Rules *) NULL_CHECK(sp[0].o))->F_cloudColor;
	clinit_mindustry_Vars(ctx);
	sp[1].o = (jobject)SF_mindustry_Vars_state;
	sp[1].o = (jobject)((mindustry_core_GameState *) NULL_CHECK(sp[1].o))->F_rules;
	sp[1].o = (jobject)((mindustry_game_Rules *) NULL_CHECK(sp[1].o))->F_cloudColor;
	SM_arc_graphics_g2d_Draw_mixcol_arc_graphics_Color_float(ctx, sp[0].o, ((jfloat)((arc_graphics_Color *) NULL_CHECK(sp[1].o))->F_a));
	LINE_NUMBER(491);
	clinit_arc_util_Tmp(ctx);
	sp[0].o = (jobject)SF_arc_util_Tmp_tr1;
	clinit_arc_Core(ctx);
	sp[1].o = (jobject)SF_arc_Core_camera;
	sp[1].o = (jobject)((arc_graphics_Camera *) NULL_CHECK(sp[1].o))->F_position;
	jfloat temp11 = (jfloat)((arc_math_geom_Vec2 *) NULL_CHECK(sp[1].o))->F_x;
	clinit_arc_Core(ctx);
	sp[1].o = (jobject)SF_arc_Core_camera;
	sp[1].o = (jobject)((arc_graphics_Camera *) NULL_CHECK(sp[1].o))->F_position;
	jfloat temp12 = (jfloat)((arc_math_geom_Vec2 *) NULL_CHECK(sp[1].o))->F_y;
	clinit_arc_Core(ctx);
	sp[1].o = (jobject)SF_arc_Core_camera;
	jfloat temp13 = (jfloat)((arc_graphics_Camera *) NULL_CHECK(sp[1].o))->F_width;
	clinit_arc_Core(ctx);
	sp[1].o = (jobject)SF_arc_Core_camera;
	SM_arc_graphics_g2d_Draw_rect_arc_graphics_g2d_TextureRegion_float_float_float_float(ctx, sp[0].o, temp11, temp12, temp13, ((jfloat)((arc_graphics_Camera *) NULL_CHECK(sp[1].o))->F_height));
	LINE_NUMBER(492);
	SM_arc_graphics_g2d_Draw_reset(ctx);
	}
label_23:;
	LINE_NUMBER(494);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_world_blocks_campaign_Accelerator$AcceleratorBuild_drawLaunchGlobalZ(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[15];
	auto stack = &frame[9];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/campaign/Accelerator$AcceleratorBuild:drawLaunchGlobalZ", 15 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(498);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_renderer;
	jfloat temp0 = (jfloat)((func_mindustry_core_Renderer_getLandTimeIn_R_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_Renderer_getLandTimeIn_R_float])(ctx, sp[0].o);
	frame[1].f = temp0;
	LINE_NUMBER(500);
	jfloat temp1 = jfloat(1);
	jfloat temp2 = (jfloat(1)) - (frame[1].f);
	sp[0].o = (jobject)((mindustry_world_blocks_campaign_Accelerator$AcceleratorBuild *) NULL_CHECK((frame[0].o)))->F_this$0;
	jfloat temp3 = (jfloat)((mindustry_world_blocks_campaign_Accelerator *) NULL_CHECK(sp[0].o))->F_chargeDuration;
	sp[0].o = (jobject)((mindustry_world_blocks_campaign_Accelerator$AcceleratorBuild *) NULL_CHECK((frame[0].o)))->F_this$0;
	jfloat temp4 = (jfloat)((mindustry_world_blocks_campaign_Accelerator *) NULL_CHECK(sp[0].o))->F_launchDuration;
	sp[0].o = (jobject)((mindustry_world_blocks_campaign_Accelerator$AcceleratorBuild *) NULL_CHECK((frame[0].o)))->F_this$0;
	jfloat temp5 = (jfloat)SM_arc_math_Mathf_clamp_float_R_float(ctx, (temp2 / (temp3 / (temp4 + ((jfloat)((mindustry_world_blocks_campaign_Accelerator *) NULL_CHECK(sp[0].o))->F_chargeDuration)))));
	frame[2].f = (temp1 - temp5);
	LINE_NUMBER(501);
	jfloat temp6 = jfloat(1);
	jfloat temp7 = (jfloat(1)) - (frame[1].f);
	sp[0].o = (jobject)((mindustry_world_blocks_campaign_Accelerator$AcceleratorBuild *) NULL_CHECK((frame[0].o)))->F_this$0;
	jfloat temp8 = (jfloat)((mindustry_world_blocks_campaign_Accelerator *) NULL_CHECK(sp[0].o))->F_chargeDuration;
	sp[0].o = (jobject)((mindustry_world_blocks_campaign_Accelerator$AcceleratorBuild *) NULL_CHECK((frame[0].o)))->F_this$0;
	jfloat temp9 = (jfloat)((mindustry_world_blocks_campaign_Accelerator *) NULL_CHECK(sp[0].o))->F_launchDuration;
	sp[0].o = (jobject)((mindustry_world_blocks_campaign_Accelerator$AcceleratorBuild *) NULL_CHECK((frame[0].o)))->F_this$0;
	jfloat temp10 = (jfloat)SM_arc_math_Mathf_clamp_float_R_float(ctx, (temp7 - (temp8 / (temp9 + ((jfloat)((mindustry_world_blocks_campaign_Accelerator *) NULL_CHECK(sp[0].o))->F_chargeDuration)))));
	jfloat temp11 = jfloat(1);
	sp[0].o = (jobject)((mindustry_world_blocks_campaign_Accelerator$AcceleratorBuild *) NULL_CHECK((frame[0].o)))->F_this$0;
	jfloat temp12 = (jfloat)((mindustry_world_blocks_campaign_Accelerator *) NULL_CHECK(sp[0].o))->F_chargeDuration;
	sp[0].o = (jobject)((mindustry_world_blocks_campaign_Accelerator$AcceleratorBuild *) NULL_CHECK((frame[0].o)))->F_this$0;
	jfloat temp13 = (jfloat)((mindustry_world_blocks_campaign_Accelerator *) NULL_CHECK(sp[0].o))->F_launchDuration;
	sp[0].o = (jobject)((mindustry_world_blocks_campaign_Accelerator$AcceleratorBuild *) NULL_CHECK((frame[0].o)))->F_this$0;
	frame[3].f = (temp6 - (temp10 / (temp11 - (temp12 / (temp13 + ((jfloat)((mindustry_world_blocks_campaign_Accelerator *) NULL_CHECK(sp[0].o))->F_chargeDuration))))));
	LINE_NUMBER(502);
	frame[4].f = ((jfloat(1)) - (frame[3].f));
	LINE_NUMBER(503);
	frame[5].f = ((jfloat(1)) - (frame[2].f));
	LINE_NUMBER(506);
	jfloat temp14 = (jfloat)SM_arc_math_Mathf_clamp_float_R_float(ctx, ((frame[5].f) - ((frame[4].f) * (jfloat(2)))));
	frame[5].f = temp14;
	LINE_NUMBER(509);
	jfloat temp15 = jfloat(1);
	sp[0].o = (jobject)((mindustry_world_blocks_campaign_Accelerator$AcceleratorBuild *) NULL_CHECK((frame[0].o)))->F_this$0;
	jfloat temp16 = jfloat(((jint)((mindustry_world_blocks_campaign_Accelerator *) NULL_CHECK(sp[0].o))->F_chargeRings));
	sp[0].o = (jobject)((mindustry_world_blocks_campaign_Accelerator$AcceleratorBuild *) NULL_CHECK((frame[0].o)))->F_this$0;
	frame[6].f = (temp15 / (temp16 + ((jfloat)((mindustry_world_blocks_campaign_Accelerator *) NULL_CHECK(sp[0].o))->F_chargeRingMerge)));
	LINE_NUMBER(511);
	frame[7].i = (jint(0));
	}
label_8:;
	{
	jint temp0 = frame[7].i;
	sp[0].o = (jobject)((mindustry_world_blocks_campaign_Accelerator$AcceleratorBuild *) NULL_CHECK((frame[0].o)))->F_this$0;
	if (temp0 >= ((jint)((mindustry_world_blocks_campaign_Accelerator *) NULL_CHECK(sp[0].o))->F_chargeRings)) goto label_9;
	}
	{
	LINE_NUMBER(512);
	jfloat temp0 = frame[5].f;
	sp[0].o = (jobject)((mindustry_world_blocks_campaign_Accelerator$AcceleratorBuild *) NULL_CHECK((frame[0].o)))->F_this$0;
	jfloat temp1 = (temp0 * ((jfloat)((mindustry_world_blocks_campaign_Accelerator *) NULL_CHECK(sp[0].o))->F_ringSpeedup)) - ((frame[6].f) * (jfloat((frame[7].i))));
	jfloat temp2 = frame[6].f;
	jfloat temp3 = jfloat(1);
	sp[0].o = (jobject)((mindustry_world_blocks_campaign_Accelerator$AcceleratorBuild *) NULL_CHECK((frame[0].o)))->F_this$0;
	jfloat temp4 = (jfloat)SM_arc_math_Mathf_clamp_float_R_float(ctx, (temp1 / (temp2 * (temp3 + ((jfloat)((mindustry_world_blocks_campaign_Accelerator *) NULL_CHECK(sp[0].o))->F_chargeRingMerge)))));
	frame[8].f = temp4;
	LINE_NUMBER(513);
	if ((floatCompare((frame[8].f), (jfloat(0)), -1)) <= 0) goto label_12;
	}
	{
	LINE_NUMBER(514);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((mindustry_world_blocks_campaign_Accelerator$AcceleratorBuild *) NULL_CHECK((frame[0].o)))->F_this$0;
	jfloat temp0 = (jfloat)((mindustry_world_blocks_campaign_Accelerator *) NULL_CHECK(sp[1].o))->F_ringRadBase;
	sp[1].o = (jobject)((mindustry_world_blocks_campaign_Accelerator$AcceleratorBuild *) NULL_CHECK((frame[0].o)))->F_this$0;
	jfloat temp1 = (jfloat)((mindustry_world_blocks_campaign_Accelerator *) NULL_CHECK(sp[1].o))->F_ringRadSpacing;
	jfloat temp2 = jfloat((frame[7].i));
	sp[1].o = (jobject)((mindustry_world_blocks_campaign_Accelerator$AcceleratorBuild *) NULL_CHECK((frame[0].o)))->F_this$0;
	jfloat temp3 = (jfloat)SM_arc_math_Mathf_pow_float_float_R_float(ctx, temp2, ((jfloat)((mindustry_world_blocks_campaign_Accelerator *) NULL_CHECK(sp[1].o))->F_ringRadPow));
	((func_mindustry_world_blocks_campaign_Accelerator$AcceleratorBuild_drawRing_float_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_blocks_campaign_Accelerator$AcceleratorBuild_drawRing_float_float])(ctx, sp[0].o, (temp0 + (temp1 * temp3)), (frame[8].f));
	}
label_12:;
	{
	LINE_NUMBER(511);
	INST_IINC(7, 1);
	goto label_8;
	}
label_9:;
	LINE_NUMBER(517);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_world_blocks_campaign_Accelerator$AcceleratorBuild_drawRing_float_float(jcontext ctx, jobject self, jfloat param0, jfloat param1) {
	NULL_CHECK(self);
	jtype frame[13];
	auto stack = &frame[8];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/campaign/Accelerator$AcceleratorBuild:drawRing", 13 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	frame[2].f = param1;
	{
	LINE_NUMBER(520);
	SM_arc_graphics_g2d_Draw_z_float(ctx, (jfloat(110.0f)));
	LINE_NUMBER(522);
	frame[3].f = ((jfloat(1)) - (frame[2].f));
	LINE_NUMBER(523);
	clinit_arc_math_Interp(ctx);
	sp[0].o = (jobject)SF_arc_math_Interp_pow4In;
	jfloat temp0 = (jfloat)((func_arc_math_Interp$PowIn_apply_float_R_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_Interp$PowIn_apply_float_R_float])(ctx, sp[0].o, (frame[3].f));
	frame[4].f = (temp0 * (jfloat(90.0f)));
	LINE_NUMBER(524);
	jfloat temp1 = frame[1].f;
	jfloat temp2 = jfloat(20.0f);
	clinit_arc_math_Interp(ctx);
	sp[0].o = (jobject)SF_arc_math_Interp_pow4In;
	jfloat temp3 = (jfloat)((func_arc_math_Interp$PowIn_apply_float_R_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_Interp$PowIn_apply_float_R_float])(ctx, sp[0].o, (frame[3].f));
	frame[5].f = (temp1 + (temp2 * temp3));
	LINE_NUMBER(526);
	sp[0].o = (jobject)((mindustry_world_blocks_campaign_Accelerator$AcceleratorBuild *) NULL_CHECK((frame[0].o)))->F_this$0;
	jfloat temp4 = ((jfloat)((mindustry_world_blocks_campaign_Accelerator *) NULL_CHECK(sp[0].o))->F_ringStroke) * (frame[2].f);
	sp[0].o = (jobject)((mindustry_world_blocks_campaign_Accelerator$AcceleratorBuild *) NULL_CHECK((frame[0].o)))->F_this$0;
	sp[0].o = (jobject)((mindustry_world_blocks_campaign_Accelerator *) NULL_CHECK(sp[0].o))->F_ringColor;
	SM_arc_graphics_g2d_Lines_stroke_float_arc_graphics_Color(ctx, temp4, sp[0].o);
	LINE_NUMBER(528);
	clinit_mindustry_graphics_Pal(ctx);
	sp[0].o = (jobject)SF_mindustry_graphics_Pal_command;
	sp[1].o = (jobject)((mindustry_world_blocks_campaign_Accelerator$AcceleratorBuild *) NULL_CHECK((frame[0].o)))->F_this$0;
	sp[1].o = (jobject)((mindustry_world_blocks_campaign_Accelerator *) NULL_CHECK(sp[1].o))->F_ringColor;
	SM_arc_graphics_g2d_Draw_color_arc_graphics_Color_arc_graphics_Color_float(ctx, sp[0].o, sp[1].o, (frame[2].f));
	LINE_NUMBER(531);
	frame[6].i = (jint(0));
	}
label_7:;
	{
	if ((frame[6].i) >= (jint(4))) goto label_8;
	}
	{
	LINE_NUMBER(532);
	frame[7].f = ((((jfloat((frame[6].i))) * (jfloat(90.0f))) + (jfloat(45.0f))) + (frame[4].f));
	LINE_NUMBER(533);
	SM_arc_graphics_g2d_Lines_beginLine(ctx);
	LINE_NUMBER(534);
	clinit_arc_util_Tmp(ctx);
	sp[0].o = (jobject)SF_arc_util_Tmp_v1;
	jfloat temp0 = frame[7].f;
	sp[1].o = (jobject)((mindustry_world_blocks_campaign_Accelerator$AcceleratorBuild *) NULL_CHECK((frame[0].o)))->F_this$0;
	jfloat temp1 = temp0 - ((jfloat)((mindustry_world_blocks_campaign_Accelerator *) NULL_CHECK(sp[1].o))->F_ringHandleLen);
	jfloat temp2 = frame[5].f;
	sp[1].o = (jobject)((mindustry_world_blocks_campaign_Accelerator$AcceleratorBuild *) NULL_CHECK((frame[0].o)))->F_this$0;
	sp[0].o = (jobject)((func_arc_math_geom_Vec2_trns_float_float_R_arc_math_geom_Vec2) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Vec2_trns_float_float_R_arc_math_geom_Vec2])(ctx, sp[0].o, temp1, (temp2 * ((jfloat)((mindustry_world_blocks_campaign_Accelerator *) NULL_CHECK(sp[1].o))->F_ringHandleTilt)));
	sp[0].o = (jobject)((func_arc_math_geom_Vec2_add_float_float_R_arc_math_geom_Vec2) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Vec2_add_float_float_R_arc_math_geom_Vec2])(ctx, sp[0].o, ((jfloat)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_x), ((jfloat)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_y));
	SM_arc_graphics_g2d_Lines_linePoint_arc_math_geom_Position(ctx, sp[0].o);
	LINE_NUMBER(535);
	clinit_arc_util_Tmp(ctx);
	sp[0].o = (jobject)SF_arc_util_Tmp_v2;
	sp[0].o = (jobject)((func_arc_math_geom_Vec2_trns_float_float_R_arc_math_geom_Vec2) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Vec2_trns_float_float_R_arc_math_geom_Vec2])(ctx, sp[0].o, (frame[7].f), (frame[5].f));
	sp[0].o = (jobject)((func_arc_math_geom_Vec2_add_float_float_R_arc_math_geom_Vec2) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Vec2_add_float_float_R_arc_math_geom_Vec2])(ctx, sp[0].o, ((jfloat)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_x), ((jfloat)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_y));
	SM_arc_graphics_g2d_Lines_linePoint_arc_math_geom_Position(ctx, sp[0].o);
	LINE_NUMBER(536);
	clinit_arc_util_Tmp(ctx);
	sp[0].o = (jobject)SF_arc_util_Tmp_v3;
	jfloat temp3 = frame[7].f;
	sp[1].o = (jobject)((mindustry_world_blocks_campaign_Accelerator$AcceleratorBuild *) NULL_CHECK((frame[0].o)))->F_this$0;
	jfloat temp4 = temp3 + ((jfloat)((mindustry_world_blocks_campaign_Accelerator *) NULL_CHECK(sp[1].o))->F_ringHandleLen);
	jfloat temp5 = frame[5].f;
	sp[1].o = (jobject)((mindustry_world_blocks_campaign_Accelerator$AcceleratorBuild *) NULL_CHECK((frame[0].o)))->F_this$0;
	sp[0].o = (jobject)((func_arc_math_geom_Vec2_trns_float_float_R_arc_math_geom_Vec2) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Vec2_trns_float_float_R_arc_math_geom_Vec2])(ctx, sp[0].o, temp4, (temp5 * ((jfloat)((mindustry_world_blocks_campaign_Accelerator *) NULL_CHECK(sp[1].o))->F_ringHandleTilt)));
	sp[0].o = (jobject)((func_arc_math_geom_Vec2_add_float_float_R_arc_math_geom_Vec2) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Vec2_add_float_float_R_arc_math_geom_Vec2])(ctx, sp[0].o, ((jfloat)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_x), ((jfloat)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_y));
	SM_arc_graphics_g2d_Lines_linePoint_arc_math_geom_Position(ctx, sp[0].o);
	LINE_NUMBER(537);
	SM_arc_graphics_g2d_Lines_endLine_boolean(ctx, (jint(0)));
	LINE_NUMBER(531);
	INST_IINC(6, 1);
	goto label_7;
	}
label_8:;
	{
	LINE_NUMBER(541);
	SM_arc_graphics_g2d_Draw_scl_float(ctx, (frame[2].f));
	LINE_NUMBER(544);
	frame[6].i = (jint(0));
	}
label_17:;
	{
	if ((frame[6].i) >= (jint(4))) goto label_18;
	}
	{
	LINE_NUMBER(545);
	frame[7].f = (((jfloat((frame[6].i))) * (jfloat(90.0f))) + (frame[4].f));
	LINE_NUMBER(548);
	sp[0].o = (jobject)((mindustry_world_blocks_campaign_Accelerator$AcceleratorBuild *) NULL_CHECK((frame[0].o)))->F_this$0;
	sp[0].o = (jobject)((mindustry_world_blocks_campaign_Accelerator *) NULL_CHECK(sp[0].o))->F_selectArrowRegion;
	jfloat temp0 = (jfloat)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_x;
	jfloat temp1 = (jfloat)SM_arc_math_Angles_trnsx_float_float_R_float(ctx, (frame[7].f), (frame[5].f));
	jfloat temp2 = temp0 + temp1;
	jfloat temp3 = (jfloat)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_y;
	jfloat temp4 = (jfloat)SM_arc_math_Angles_trnsy_float_float_R_float(ctx, (frame[7].f), (frame[5].f));
	SM_arc_graphics_g2d_Draw_rect_arc_graphics_g2d_TextureRegion_float_float_float(ctx, sp[0].o, temp2, (temp3 + temp4), (((frame[7].f) + (jfloat(180.0f))) + (jfloat(45.0f))));
	LINE_NUMBER(544);
	INST_IINC(6, 1);
	goto label_17;
	}
label_18:;
	{
	LINE_NUMBER(554);
	SM_arc_graphics_g2d_Draw_scl(ctx);
	LINE_NUMBER(556);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_world_blocks_campaign_Accelerator$AcceleratorBuild_drawLanding_float_float_float(jcontext ctx, jobject self, jfloat param0, jfloat param1, jfloat param2) {
	NULL_CHECK(self);
	jtype frame[21];
	auto stack = &frame[16];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/campaign/Accelerator$AcceleratorBuild:drawLanding", 21 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	frame[2].f = param1;
	frame[3].f = param2;
	{
	LINE_NUMBER(559);
	jfloat temp0 = (jfloat)((func_mindustry_world_blocks_campaign_Accelerator$AcceleratorBuild_launchDuration_R_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_world_blocks_campaign_Accelerator$AcceleratorBuild_launchDuration_R_float])(ctx, (frame[0].o));
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_renderer;
	jfloat temp1 = (jfloat)((func_mindustry_core_Renderer_getLandTime_R_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_Renderer_getLandTime_R_float])(ctx, sp[0].o);
	frame[4].f = (temp0 - temp1);
	LINE_NUMBER(560);
	frame[5].f = ((jfloat(1)) - (frame[1].f));
	LINE_NUMBER(562);
	jfloat temp2 = frame[4].f;
	sp[0].o = (jobject)((mindustry_world_blocks_campaign_Accelerator$AcceleratorBuild *) NULL_CHECK((frame[0].o)))->F_this$0;
	if ((floatCompare(temp2, ((jfloat)((mindustry_world_blocks_campaign_Accelerator *) NULL_CHECK(sp[0].o))->F_chargeDuration), 1)) >= 0) goto label_3;
	}
	INST_FCONST(1);
	goto label_4;
label_3:;
	{
	jfloat temp0 = (jfloat)SM_arc_scene_ui_layout_Scl_scl_float_R_float(ctx, (jfloat(4.0f)));
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_renderer;
	jfloat temp1 = (jfloat)((func_mindustry_core_Renderer_getDisplayScale_R_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_Renderer_getDisplayScale_R_float])(ctx, sp[0].o);
	jfloat temp2 = temp0 / temp1;
	sp[0].f = temp2;
	sp += 1;
	}
label_4:;
	{
	sp -= 1;
	frame[6].f = sp[0].f;
	LINE_NUMBER(563);
	frame[7].f = (jfloat(0));
	LINE_NUMBER(564);
	sp[0].o = (jobject)((mindustry_world_blocks_campaign_Accelerator$AcceleratorBuild *) NULL_CHECK((frame[0].o)))->F_this$0;
	sp[0].o = (jobject)((mindustry_world_blocks_campaign_Accelerator *) NULL_CHECK(sp[0].o))->F_launchBlock;
	sp[0].o = (jobject)((mindustry_world_Block *) NULL_CHECK(sp[0].o))->F_region;
	jfloat temp0 = jfloat(((jint)((arc_graphics_g2d_TextureRegion *) NULL_CHECK(sp[0].o))->F_width));
	sp[0].o = (jobject)((mindustry_world_blocks_campaign_Accelerator$AcceleratorBuild *) NULL_CHECK((frame[0].o)))->F_this$0;
	sp[0].o = (jobject)((mindustry_world_blocks_campaign_Accelerator *) NULL_CHECK(sp[0].o))->F_launchBlock;
	sp[0].o = (jobject)((mindustry_world_Block *) NULL_CHECK(sp[0].o))->F_region;
	jfloat temp1 = (jfloat)((func_arc_graphics_g2d_TextureRegion_scl_R_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_g2d_TextureRegion_scl_R_float])(ctx, sp[0].o);
	jfloat temp2 = ((temp0 * temp1) * (frame[6].f)) * (jfloat(3.6f));
	clinit_arc_math_Interp(ctx);
	sp[0].o = (jobject)SF_arc_math_Interp_pow2Out;
	jfloat temp3 = (jfloat)((func_arc_math_Interp$PowOut_apply_float_R_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_Interp$PowOut_apply_float_R_float])(ctx, sp[0].o, (frame[5].f));
	frame[8].f = (temp2 * temp3);
	LINE_NUMBER(565);
	clinit_arc_math_Interp(ctx);
	sp[0].o = (jobject)SF_arc_math_Interp_pow2In;
	jfloat temp4 = (jfloat)((func_arc_math_Interp$PowIn_apply_float_R_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_Interp$PowIn_apply_float_R_float])(ctx, sp[0].o, (frame[5].f));
	frame[9].f = (temp4 * (jfloat(135.0f)));
	LINE_NUMBER(566);
	jfloat temp5 = frame[2].f;
	jfloat temp6 = (jfloat)SM_arc_math_Mathf_range_float_R_float(ctx, (frame[7].f));
	frame[2].f = (temp5 + temp6);
	LINE_NUMBER(567);
	jfloat temp7 = frame[3].f;
	jfloat temp8 = (jfloat)SM_arc_math_Mathf_range_float_R_float(ctx, (frame[7].f));
	frame[3].f = (temp7 + temp8);
	LINE_NUMBER(568);
	frame[10].f = (jfloat(0.25f));
	LINE_NUMBER(569);
	if ((floatCompare((frame[1].f), (frame[10].f), -1)) < 0) goto label_12;
	}
	INST_FCONST(1);
	goto label_13;
label_12:;
	{
	jfloat temp0 = (frame[1].f) / (frame[10].f);
	sp[0].f = temp0;
	sp += 1;
	}
label_13:;
	{
	sp -= 1;
	frame[11].f = sp[0].f;
	LINE_NUMBER(570);
	clinit_mindustry_world_blocks_storage_CoreBlock(ctx);
	sp[0].o = (jobject)SF_mindustry_world_blocks_storage_CoreBlock_thrusterSizes;
	jfloat temp0 = (jfloat)SM_arc_math_Mathf_sample_Array1_float_float_R_float(ctx, sp[0].o, (frame[1].f));
	frame[12].f = temp0;
	LINE_NUMBER(573);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_renderer;
	jint temp1 = (jint)((func_mindustry_core_Renderer_isLaunching_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_Renderer_isLaunching_R_boolean])(ctx, sp[0].o);
	if (temp1 == 0) goto label_16;
	}
	{
	LINE_NUMBER(574);
	clinit_arc_math_Interp(ctx);
	sp[0].o = (jobject)SF_arc_math_Interp_pow2Out;
	frame[13].o = sp[0].o;
	LINE_NUMBER(575);
	sp[0].o = frame[13].o;
	jfloat temp0 = (jfloat)SM_arc_math_Mathf_clamp_float_R_float(ctx, ((frame[5].f) * (jfloat(13.0f))));
	jfloat temp1 = (jfloat)((func_arc_math_Interp_apply_float_R_float) resolveInterfaceMethod(ctx, &class_arc_math_Interp, INDEX_arc_math_Interp_apply_float_R_float, sp[0].o))(ctx, sp[0].o, temp0);
	frame[11].f = temp1;
	LINE_NUMBER(576);
	sp[0].o = frame[13].o;
	jfloat temp2 = (jfloat)SM_arc_math_Mathf_clamp_float_R_float(ctx, ((frame[5].f) * (jfloat(9.0f))));
	jfloat temp3 = (jfloat)((func_arc_math_Interp_apply_float_R_float) resolveInterfaceMethod(ctx, &class_arc_math_Interp, INDEX_arc_math_Interp_apply_float_R_float, sp[0].o))(ctx, sp[0].o, temp2);
	frame[12].f = temp3;
	}
label_16:;
	{
	LINE_NUMBER(579);
	clinit_mindustry_graphics_Pal(ctx);
	sp[0].o = (jobject)SF_mindustry_graphics_Pal_lightTrail;
	SM_arc_graphics_g2d_Draw_color_arc_graphics_Color(ctx, sp[0].o);
	LINE_NUMBER(581);
	SM_arc_graphics_g2d_Draw_rect_java_lang_String_float_float_float_float(ctx, (((jobject) createStringLiteral(ctx, u8"circle-shadow"_j))), (frame[2].f), (frame[3].f), (frame[8].f), (frame[8].f));
	LINE_NUMBER(583);
	SM_arc_graphics_g2d_Draw_scl_float(ctx, (frame[6].f));
	LINE_NUMBER(586);
	jfloat temp0 = jfloat(1);
	sp[0].o = (jobject)((mindustry_world_blocks_campaign_Accelerator$AcceleratorBuild *) NULL_CHECK((frame[0].o)))->F_this$0;
	sp[0].o = (jobject)((mindustry_world_blocks_campaign_Accelerator *) NULL_CHECK(sp[0].o))->F_launchBlock;
	jfloat temp1 = ((temp0 + ((jfloat((((jint)((mindustry_world_Block *) NULL_CHECK(sp[0].o))->F_size) - (jint(3))))) / (jfloat(2.5f)))) * (frame[6].f)) * (frame[12].f);
	jfloat temp2 = jfloat(0.95f);
	jfloat temp3 = (jfloat)SM_arc_math_Mathf_absin_float_float_R_float(ctx, (jfloat(2)), (jfloat(0.1f)));
	frame[13].f = (temp1 * (temp2 + temp3));
	LINE_NUMBER(587);
	sp[0].o = (jobject)((mindustry_world_blocks_campaign_Accelerator$AcceleratorBuild *) NULL_CHECK((frame[0].o)))->F_this$0;
	sp[0].o = (jobject)((mindustry_world_blocks_campaign_Accelerator *) NULL_CHECK(sp[0].o))->F_launchBlock;
	frame[14].f = (((jfloat((((jint)((mindustry_world_Block *) NULL_CHECK(sp[0].o))->F_size) - (jint(3))))) * (jfloat(3.0f))) * (frame[6].f));
	LINE_NUMBER(589);
	frame[15].i = (jint(0));
	}
label_25:;
	{
	if ((frame[15].i) >= (jint(4))) goto label_26;
	}
	{
	LINE_NUMBER(590);
	clinit_arc_util_Tmp(ctx);
	sp[0].o = (jobject)SF_arc_util_Tmp_v1;
	sp[0].o = (jobject)((func_arc_math_geom_Vec2_trns_float_float_R_arc_math_geom_Vec2) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Vec2_trns_float_float_R_arc_math_geom_Vec2])(ctx, sp[0].o, ((jfloat(((frame[15].i) * (90)))) + (frame[9].f)), (jfloat(1)));
	LINE_NUMBER(592);
	clinit_arc_util_Tmp(ctx);
	sp[0].o = (jobject)SF_arc_util_Tmp_v1;
	sp[1].o = (jobject)((mindustry_world_blocks_campaign_Accelerator$AcceleratorBuild *) NULL_CHECK((frame[0].o)))->F_this$0;
	sp[1].o = (jobject)((mindustry_world_blocks_campaign_Accelerator *) NULL_CHECK(sp[1].o))->F_launchBlock;
	sp[0].o = (jobject)((func_arc_math_geom_Vec2_setLength_float_R_arc_math_geom_Vec2) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Vec2_setLength_float_R_arc_math_geom_Vec2])(ctx, sp[0].o, ((((((jfloat((((jint)((mindustry_world_Block *) NULL_CHECK(sp[1].o))->F_size) * (8)))) / (jfloat(2))) + (jfloat(1))) * (frame[6].f)) + ((frame[13].f) * (jfloat(2)))) + (frame[14].f)));
	LINE_NUMBER(593);
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_team;
	sp[0].o = (jobject)((mindustry_game_Team *) NULL_CHECK(sp[0].o))->F_color;
	SM_arc_graphics_g2d_Draw_color_arc_graphics_Color(ctx, sp[0].o);
	LINE_NUMBER(594);
	clinit_arc_util_Tmp(ctx);
	sp[0].o = (jobject)SF_arc_util_Tmp_v1;
	jfloat temp0 = ((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK(sp[0].o))->F_x) + (frame[2].f);
	clinit_arc_util_Tmp(ctx);
	sp[0].o = (jobject)SF_arc_util_Tmp_v1;
	SM_arc_graphics_g2d_Fill_circle_float_float_float(ctx, temp0, (((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK(sp[0].o))->F_y) + (frame[3].f)), ((jfloat(6.0f)) * (frame[13].f)));
	LINE_NUMBER(596);
	clinit_arc_util_Tmp(ctx);
	sp[0].o = (jobject)SF_arc_util_Tmp_v1;
	sp[1].o = (jobject)((mindustry_world_blocks_campaign_Accelerator$AcceleratorBuild *) NULL_CHECK((frame[0].o)))->F_this$0;
	sp[1].o = (jobject)((mindustry_world_blocks_campaign_Accelerator *) NULL_CHECK(sp[1].o))->F_launchBlock;
	sp[0].o = (jobject)((func_arc_math_geom_Vec2_setLength_float_R_arc_math_geom_Vec2) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Vec2_setLength_float_R_arc_math_geom_Vec2])(ctx, sp[0].o, ((((((jfloat((((jint)((mindustry_world_Block *) NULL_CHECK(sp[1].o))->F_size) * (8)))) / (jfloat(2))) + (jfloat(1))) * (frame[6].f)) + ((frame[13].f) * (jfloat(0.5f)))) + (frame[14].f)));
	LINE_NUMBER(597);
	clinit_arc_graphics_Color(ctx);
	sp[0].o = (jobject)SF_arc_graphics_Color_white;
	SM_arc_graphics_g2d_Draw_color_arc_graphics_Color(ctx, sp[0].o);
	LINE_NUMBER(598);
	clinit_arc_util_Tmp(ctx);
	sp[0].o = (jobject)SF_arc_util_Tmp_v1;
	jfloat temp1 = ((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK(sp[0].o))->F_x) + (frame[2].f);
	clinit_arc_util_Tmp(ctx);
	sp[0].o = (jobject)SF_arc_util_Tmp_v1;
	SM_arc_graphics_g2d_Fill_circle_float_float_float(ctx, temp1, (((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK(sp[0].o))->F_y) + (frame[3].f)), ((jfloat(3.5f)) * (frame[13].f)));
	LINE_NUMBER(589);
	INST_IINC(15, 1);
	goto label_25;
	}
label_26:;
	{
	LINE_NUMBER(601);
	((func_mindustry_world_blocks_campaign_Accelerator$AcceleratorBuild_drawLandingThrusters_float_float_float_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_world_blocks_campaign_Accelerator$AcceleratorBuild_drawLandingThrusters_float_float_float_float])(ctx, (frame[0].o), (frame[2].f), (frame[3].f), (frame[9].f), (frame[11].f));
	LINE_NUMBER(603);
	sp[0].o = (jobject)((mindustry_world_blocks_campaign_Accelerator$AcceleratorBuild *) NULL_CHECK((frame[0].o)))->F_this$0;
	sp[0].o = (jobject)((mindustry_world_blocks_campaign_Accelerator *) NULL_CHECK(sp[0].o))->F_launchBlock;
	sp[0].o = (jobject)((mindustry_world_Block *) NULL_CHECK(sp[0].o))->F_region;
	SM_mindustry_graphics_Drawf_spinSprite_arc_graphics_g2d_TextureRegion_float_float_float(ctx, sp[0].o, (frame[2].f), (frame[3].f), (frame[9].f));
	LINE_NUMBER(605);
	clinit_arc_math_Interp(ctx);
	sp[0].o = (jobject)SF_arc_math_Interp_pow4In;
	jfloat temp0 = (jfloat)((func_arc_math_Interp$PowIn_apply_float_R_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_Interp$PowIn_apply_float_R_float])(ctx, sp[0].o, (frame[11].f));
	SM_arc_graphics_g2d_Draw_alpha_float(ctx, temp0);
	LINE_NUMBER(606);
	((func_mindustry_world_blocks_campaign_Accelerator$AcceleratorBuild_drawLandingThrusters_float_float_float_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_world_blocks_campaign_Accelerator$AcceleratorBuild_drawLandingThrusters_float_float_float_float])(ctx, (frame[0].o), (frame[2].f), (frame[3].f), (frame[9].f), (frame[11].f));
	LINE_NUMBER(607);
	SM_arc_graphics_g2d_Draw_alpha_float(ctx, (jfloat(1)));
	LINE_NUMBER(609);
	sp[0].o = (jobject)((mindustry_world_blocks_campaign_Accelerator$AcceleratorBuild *) NULL_CHECK((frame[0].o)))->F_this$0;
	sp[0].o = (jobject)((mindustry_world_blocks_campaign_Accelerator *) NULL_CHECK(sp[0].o))->F_launchBlock;
	sp[0].o = (jobject)((mindustry_world_Block *) NULL_CHECK(sp[0].o))->F_teamRegions;
	sp[1].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_team;
	sp[0].o = (jobject)ARRAY_ACCESS(jobject, sp[0].o, ((jint)((mindustry_game_Team *) NULL_CHECK(sp[1].o))->F_id));
	sp[1].o = (jobject)((mindustry_world_blocks_campaign_Accelerator$AcceleratorBuild *) NULL_CHECK((frame[0].o)))->F_this$0;
	sp[1].o = (jobject)((mindustry_world_blocks_campaign_Accelerator *) NULL_CHECK(sp[1].o))->F_launchBlock;
	sp[1].o = (jobject)((mindustry_world_Block *) NULL_CHECK(sp[1].o))->F_teamRegion;
	if (sp[0].o != sp[1].o) goto label_40;
	}
	{
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_team;
	sp[0].o = (jobject)((mindustry_game_Team *) NULL_CHECK(sp[0].o))->F_color;
	SM_arc_graphics_g2d_Draw_color_arc_graphics_Color(ctx, sp[0].o);
	}
label_40:;
	{
	LINE_NUMBER(611);
	sp[0].o = (jobject)((mindustry_world_blocks_campaign_Accelerator$AcceleratorBuild *) NULL_CHECK((frame[0].o)))->F_this$0;
	sp[0].o = (jobject)((mindustry_world_blocks_campaign_Accelerator *) NULL_CHECK(sp[0].o))->F_launchBlock;
	sp[0].o = (jobject)((mindustry_world_Block *) NULL_CHECK(sp[0].o))->F_teamRegions;
	sp[1].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_team;
	SM_mindustry_graphics_Drawf_spinSprite_arc_graphics_g2d_TextureRegion_float_float_float(ctx, ((jobject)ARRAY_ACCESS(jobject, sp[0].o, ((jint)((mindustry_game_Team *) NULL_CHECK(sp[1].o))->F_id))), (frame[2].f), (frame[3].f), (frame[9].f));
	LINE_NUMBER(613);
	SM_arc_graphics_g2d_Draw_color(ctx);
	LINE_NUMBER(614);
	SM_arc_graphics_g2d_Draw_scl(ctx);
	LINE_NUMBER(615);
	SM_arc_graphics_g2d_Draw_reset(ctx);
	LINE_NUMBER(616);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_world_blocks_campaign_Accelerator$AcceleratorBuild_drawLandingThrusters_float_float_float_float(jcontext ctx, jobject self, jfloat param0, jfloat param1, jfloat param2, jfloat param3) {
	NULL_CHECK(self);
	jtype frame[16];
	auto stack = &frame[12];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/campaign/Accelerator$AcceleratorBuild:drawLandingThrusters", 16 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	frame[2].f = param1;
	frame[3].f = param2;
	frame[4].f = param3;
	{
	LINE_NUMBER(619);
	sp[0].o = (jobject)((mindustry_world_blocks_campaign_Accelerator$AcceleratorBuild *) NULL_CHECK((frame[0].o)))->F_this$0;
	sp[0].o = (jobject)((mindustry_world_blocks_campaign_Accelerator *) NULL_CHECK(sp[0].o))->F_launchBlock;
	frame[5].o = (checkCast(ctx, &class_mindustry_world_blocks_storage_CoreBlock, sp[0].o));
	LINE_NUMBER(620);
	frame[6].f = ((((jfloat)((mindustry_world_blocks_storage_CoreBlock *) NULL_CHECK((frame[5].o)))->F_thrusterLength) * ((frame[4].f) - (jfloat(1)))) - (jfloat(0.25f)));
	LINE_NUMBER(621);
	jfloat temp0 = (jfloat)SM_arc_graphics_g2d_Draw_getColorAlpha_R_float(ctx);
	frame[7].f = temp0;
	LINE_NUMBER(624);
	frame[8].i = (jint(0));
	}
label_4:;
	{
	if ((frame[8].i) >= (jint(2))) goto label_5;
	}
	{
	LINE_NUMBER(625);
	frame[9].i = (jint(0));
	}
label_7:;
	{
	if ((frame[9].i) >= (jint(4))) goto label_8;
	}
	{
	LINE_NUMBER(626);
	if ((frame[9].i) < (jint(2))) goto label_10;
	}
	{
	sp[0].o = (jobject)((mindustry_world_blocks_storage_CoreBlock *) NULL_CHECK((frame[5].o)))->F_thruster2;
	sp += 1;
	goto label_11;
	}
label_10:;
	INST_ALOAD(5);
	sp[-1].o = (jobject) ((mindustry_world_blocks_storage_CoreBlock *) NULL_CHECK(sp[-1].o))->F_thruster1;
label_11:;
	{
	sp -= 1;
	frame[10].o = sp[0].o;
	LINE_NUMBER(627);
	frame[11].f = ((jfloat(((frame[9].i) * (90)))) + (fmodf((frame[3].f), (jfloat(90.0f)))));
	LINE_NUMBER(628);
	clinit_arc_util_Tmp(ctx);
	sp[0].o = (jobject)SF_arc_util_Tmp_v1;
	sp[0].o = (jobject)((func_arc_math_geom_Vec2_trns_float_float_R_arc_math_geom_Vec2) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Vec2_trns_float_float_R_arc_math_geom_Vec2])(ctx, sp[0].o, (frame[11].f), ((frame[6].f) * (clinit_arc_graphics_g2d_Draw(ctx), (jfloat)SF_arc_graphics_g2d_Draw_xscl)));
	LINE_NUMBER(631);
	if ((frame[8].i) != (jint(1))) goto label_15;
	}
	{
	LINE_NUMBER(632);
	clinit_arc_util_Tmp(ctx);
	sp[0].o = (jobject)SF_arc_util_Tmp_v1;
	sp[0].o = (jobject)((func_arc_math_geom_Vec2_rotate_float_R_arc_math_geom_Vec2) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Vec2_rotate_float_R_arc_math_geom_Vec2])(ctx, sp[0].o, (jfloat(-90.0f)));
	LINE_NUMBER(633);
	SM_arc_graphics_g2d_Draw_alpha_float(ctx, (((fmodf((frame[3].f), (jfloat(90.0f)))) / (jfloat(90.0f))) * (frame[7].f)));
	LINE_NUMBER(634);
	frame[11].f = ((frame[11].f) - (jfloat(90.0f)));
	LINE_NUMBER(635);
	sp[0].o = frame[10].o;
	jfloat temp0 = frame[1].f;
	clinit_arc_util_Tmp(ctx);
	sp[1].o = (jobject)SF_arc_util_Tmp_v1;
	jfloat temp1 = temp0 + ((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK(sp[1].o))->F_x);
	jfloat temp2 = frame[2].f;
	clinit_arc_util_Tmp(ctx);
	sp[1].o = (jobject)SF_arc_util_Tmp_v1;
	SM_arc_graphics_g2d_Draw_rect_arc_graphics_g2d_TextureRegion_float_float_float(ctx, sp[0].o, temp1, (temp2 + ((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK(sp[1].o))->F_y)), (frame[11].f));
	goto label_20;
	}
label_15:;
	{
	LINE_NUMBER(637);
	SM_arc_graphics_g2d_Draw_alpha_float(ctx, (frame[7].f));
	LINE_NUMBER(638);
	sp[0].o = frame[10].o;
	jfloat temp0 = frame[1].f;
	clinit_arc_util_Tmp(ctx);
	sp[1].o = (jobject)SF_arc_util_Tmp_v1;
	jfloat temp1 = temp0 + ((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK(sp[1].o))->F_x);
	jfloat temp2 = frame[2].f;
	clinit_arc_util_Tmp(ctx);
	sp[1].o = (jobject)SF_arc_util_Tmp_v1;
	SM_arc_graphics_g2d_Draw_rect_arc_graphics_g2d_TextureRegion_float_float_float(ctx, sp[0].o, temp1, (temp2 + ((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK(sp[1].o))->F_y)), (frame[11].f));
	}
label_20:;
	{
	LINE_NUMBER(625);
	INST_IINC(9, 1);
	goto label_7;
	}
label_8:;
	{
	LINE_NUMBER(624);
	INST_IINC(8, 1);
	goto label_4;
	}
label_5:;
	{
	LINE_NUMBER(642);
	SM_arc_graphics_g2d_Draw_alpha_float(ctx, (jfloat(1)));
	LINE_NUMBER(643);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_world_blocks_campaign_Accelerator$AcceleratorBuild_lambda$drawLaunch$0_float_float_float_float_float_float(jcontext ctx, jobject self, jfloat param0, jfloat param1, jfloat param2, jfloat param3, jfloat param4, jfloat param5) {
	NULL_CHECK(self);
	jtype frame[12];
	auto stack = &frame[7];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/campaign/Accelerator$AcceleratorBuild:lambda$drawLaunch$0", 12 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	frame[2].f = param1;
	frame[3].f = param2;
	frame[4].f = param3;
	frame[5].f = param4;
	frame[6].f = param5;
	{
	LINE_NUMBER(455);
	SM_arc_graphics_g2d_Lines_stroke_float(ctx, ((((frame[1].f) * (frame[5].f)) * (frame[2].f)) * (jfloat(3.0f))));
	LINE_NUMBER(456);
	jfloat temp0 = ((jfloat)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_x) + (frame[3].f);
	jfloat temp1 = ((jfloat)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_y) + (frame[4].f);
	jfloat temp2 = (jfloat)SM_arc_math_Mathf_angle_float_float_R_float(ctx, (frame[3].f), (frame[4].f));
	SM_arc_graphics_g2d_Lines_lineAngle_float_float_float_float(ctx, temp0, temp1, temp2, ((((frame[5].f) * (jfloat(20.0f))) + (jfloat(1))) * (frame[1].f)));
	LINE_NUMBER(457);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_world_blocks_campaign_Accelerator$AcceleratorBuild_lambda$beginLaunch$1(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[12];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/campaign/Accelerator$AcceleratorBuild:lambda$beginLaunch$1", 12 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(360);
	clinit_mindustry_content_Fx(ctx);
	sp[0].o = (jobject)SF_mindustry_content_Fx_coreLaunchConstruct;
	jfloat temp0 = (jfloat)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_x;
	jfloat temp1 = (jfloat)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_y;
	sp[1].o = (jobject)((mindustry_world_blocks_campaign_Accelerator$AcceleratorBuild *) NULL_CHECK((frame[0].o)))->F_this$0;
	sp[1].o = (jobject)((mindustry_world_blocks_campaign_Accelerator *) NULL_CHECK(sp[1].o))->F_launchBlock;
	((func_mindustry_entities_Effect_at_float_float_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_entities_Effect_at_float_float_float])(ctx, sp[0].o, temp0, temp1, (jfloat(((jint)((mindustry_world_Block *) NULL_CHECK(sp[1].o))->F_size))));
	LINE_NUMBER(361);
	clinit_mindustry_content_Fx(ctx);
	sp[0].o = (jobject)SF_mindustry_content_Fx_launchAccelerator;
	((func_mindustry_entities_Effect_at_float_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_entities_Effect_at_float_float])(ctx, sp[0].o, ((jfloat)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_x), ((jfloat)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_y));
	LINE_NUMBER(362);
	SM_mindustry_entities_Effect_shake_float_float_arc_math_geom_Position(ctx, (jfloat(10.0f)), (jfloat(14.0f)), (frame[0].o));
	LINE_NUMBER(363);
	sp[0].o = (jobject)((mindustry_world_blocks_campaign_Accelerator$AcceleratorBuild *) NULL_CHECK((frame[0].o)))->F_this$0;
	sp[0].o = (jobject)((mindustry_world_blocks_campaign_Accelerator *) NULL_CHECK(sp[0].o))->F_launchSound;
	jint temp2 = (jint)((func_arc_audio_Sound_at_arc_math_geom_Position_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_audio_Sound_at_arc_math_geom_Position_R_int])(ctx, sp[0].o, (frame[0].o));
	LINE_NUMBER(365);
	frame[1].i = (jint(0));
	}
label_5:;
	{
	jint temp0 = frame[1].i;
	sp[0].o = (jobject)((mindustry_world_blocks_campaign_Accelerator$AcceleratorBuild *) NULL_CHECK((frame[0].o)))->F_this$0;
	if (temp0 >= ((jint)((mindustry_world_blocks_campaign_Accelerator *) NULL_CHECK(sp[0].o))->F_launchLightning)) goto label_6;
	}
	{
	LINE_NUMBER(366);
	jfloat temp0 = (jfloat)SM_arc_math_Mathf_random_float_R_float(ctx, (jfloat(360.0f)));
	frame[2].f = temp0;
	LINE_NUMBER(367);
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_team;
	sp[1].o = (jobject)((mindustry_world_blocks_campaign_Accelerator$AcceleratorBuild *) NULL_CHECK((frame[0].o)))->F_this$0;
	sp[1].o = (jobject)((mindustry_world_blocks_campaign_Accelerator *) NULL_CHECK(sp[1].o))->F_lightningColor;
	sp[2].o = (jobject)((mindustry_world_blocks_campaign_Accelerator$AcceleratorBuild *) NULL_CHECK((frame[0].o)))->F_this$0;
	jfloat temp1 = (jfloat)((mindustry_world_blocks_campaign_Accelerator *) NULL_CHECK(sp[2].o))->F_lightningDamage;
	jfloat temp2 = (jfloat)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_x;
	jfloat temp3 = frame[2].f;
	sp[2].o = (jobject)((mindustry_world_blocks_campaign_Accelerator$AcceleratorBuild *) NULL_CHECK((frame[0].o)))->F_this$0;
	jfloat temp4 = (jfloat)SM_arc_math_Angles_trnsx_float_float_R_float(ctx, temp3, ((jfloat)((mindustry_world_blocks_campaign_Accelerator *) NULL_CHECK(sp[2].o))->F_lightningOffset));
	jfloat temp5 = temp2 + temp4;
	jfloat temp6 = (jfloat)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_y;
	jfloat temp7 = frame[2].f;
	sp[2].o = (jobject)((mindustry_world_blocks_campaign_Accelerator$AcceleratorBuild *) NULL_CHECK((frame[0].o)))->F_this$0;
	jfloat temp8 = (jfloat)SM_arc_math_Angles_trnsy_float_float_R_float(ctx, temp7, ((jfloat)((mindustry_world_blocks_campaign_Accelerator *) NULL_CHECK(sp[2].o))->F_lightningOffset));
	jfloat temp9 = temp6 + temp8;
	jfloat temp10 = frame[2].f;
	sp[2].o = (jobject)((mindustry_world_blocks_campaign_Accelerator$AcceleratorBuild *) NULL_CHECK((frame[0].o)))->F_this$0;
	jint temp11 = (jint)((mindustry_world_blocks_campaign_Accelerator *) NULL_CHECK(sp[2].o))->F_lightningLengthMin;
	sp[2].o = (jobject)((mindustry_world_blocks_campaign_Accelerator$AcceleratorBuild *) NULL_CHECK((frame[0].o)))->F_this$0;
	jint temp12 = (jint)SM_arc_math_Mathf_random_int_int_R_int(ctx, temp11, ((jint)((mindustry_world_blocks_campaign_Accelerator *) NULL_CHECK(sp[2].o))->F_lightningLengthMax));
	SM_mindustry_entities_Lightning_create_mindustry_game_Team_arc_graphics_Color_float_float_float_float_int(ctx, sp[0].o, sp[1].o, temp1, temp5, temp9, temp10, temp12);
	LINE_NUMBER(365);
	INST_IINC(1, 1);
	goto label_5;
	}
label_6:;
	{
	LINE_NUMBER(370);
	frame[1].f = (jfloat(12.0f));
	LINE_NUMBER(371);
	frame[2].i = (jint(0));
	}
label_11:;
	{
	if ((frame[2].i) >= (13)) goto label_12;
	}
	{
	LINE_NUMBER(372);
	frame[3].i = (frame[2].i);
	LINE_NUMBER(373);
	jfloat temp0 = (jfloat((frame[2].i))) * (jfloat(2));
	{ /* InvokeDynamic */
		clinit_mindustry_world_blocks_campaign_Accelerator$AcceleratorBuild_invoke_java_lang_Runnable_8(ctx);
		auto proxy = (mindustry_world_blocks_campaign_Accelerator$AcceleratorBuild_invoke_java_lang_Runnable_8 *) gcAlloc(ctx, &class_mindustry_world_blocks_campaign_Accelerator$AcceleratorBuild_invoke_java_lang_Runnable_8);
		proxy->F_field2 = (frame[3].i);
		proxy->F_field1 = (frame[1].f);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[0].o = (jobject) proxy;
	}
	SM_arc_util_Time_run_float_java_lang_Runnable(ctx, temp0, sp[0].o);
	LINE_NUMBER(371);
	INST_IINC(2, 1);
	goto label_11;
	}
label_12:;
	LINE_NUMBER(388);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_world_blocks_campaign_Accelerator$AcceleratorBuild_lambda$beginLaunch$2_float_int(jcontext ctx, jobject self, jfloat param0, jint param1) {
	NULL_CHECK(self);
	jtype frame[17];
	auto stack = &frame[10];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/campaign/Accelerator$AcceleratorBuild:lambda$beginLaunch$2", 17 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(374);
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_block;
	frame[3].f = ((((jfloat(((jint)((mindustry_world_Block *) NULL_CHECK(sp[0].o))->F_size))) / (jfloat(2))) + (jfloat(1))) + ((frame[1].f) * (jfloat((frame[2].i)))));
	LINE_NUMBER(375);
	jint temp0 = (jint)SM_arc_math_Mathf_ceil_float_R_int(ctx, ((((frame[3].f) * (jfloat(3.1415927f))) * (jfloat(2))) / (jfloat(6.0f))));
	frame[4].i = temp0;
	LINE_NUMBER(376);
	frame[5].i = (jint(0));
	}
label_3:;
	{
	if ((frame[5].i) >= (frame[4].i)) goto label_4;
	}
	{
	LINE_NUMBER(377);
	jint temp0 = (jint)SM_arc_math_Mathf_chance_double_R_boolean(ctx, (jdouble(((jfloat(0.7f)) - ((jfloat((frame[2].i))) * (jfloat(0.02f)))))));
	if (temp0 == 0) goto label_6;
	}
	{
	LINE_NUMBER(378);
	frame[6].f = (((jfloat((frame[5].i))) * (jfloat(360.0f))) / (jfloat((frame[4].i))));
	LINE_NUMBER(379);
	jfloat temp0 = (jfloat)SM_arc_math_Angles_trnsx_float_float_R_float(ctx, (frame[6].f), (frame[3].f));
	frame[7].f = temp0;
	jfloat temp1 = (jfloat)SM_arc_math_Angles_trnsy_float_float_R_float(ctx, (frame[6].f), (frame[3].f));
	frame[8].f = temp1;
	LINE_NUMBER(380);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_world;
	sp[0].o = (jobject)((func_mindustry_core_World_tileWorld_float_float_R_mindustry_world_Tile) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_World_tileWorld_float_float_R_mindustry_world_Tile])(ctx, sp[0].o, (((jfloat)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_x) + (frame[7].f)), (((jfloat)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_y) + (frame[8].f)));
	frame[9].o = sp[0].o;
	LINE_NUMBER(381);
	if ((frame[9].o) == nullptr) goto label_6;
	}
	{
	LINE_NUMBER(382);
	clinit_mindustry_content_Fx(ctx);
	sp[0].o = (jobject)SF_mindustry_content_Fx_coreLandDust;
	jfloat temp0 = (jfloat)((func_mindustry_world_Tile_worldx_R_float) ((void **) nullCheck(ctx, (frame[9].o))->vtable)[VTABLE_mindustry_world_Tile_worldx_R_float])(ctx, (frame[9].o));
	jfloat temp1 = (jfloat)((func_mindustry_world_Tile_worldy_R_float) ((void **) nullCheck(ctx, (frame[9].o))->vtable)[VTABLE_mindustry_world_Tile_worldy_R_float])(ctx, (frame[9].o));
	jfloat temp2 = frame[6].f;
	jfloat temp3 = (jfloat)SM_arc_math_Mathf_range_float_R_float(ctx, (jfloat(30.0f)));
	jfloat temp4 = temp2 + temp3;
	clinit_arc_util_Tmp(ctx);
	sp[1].o = (jobject)SF_arc_util_Tmp_c1;
	sp[2].o = (jobject)((func_mindustry_world_Tile_floor_R_mindustry_world_blocks_environment_Floor) ((void **) nullCheck(ctx, (frame[9].o))->vtable)[VTABLE_mindustry_world_Tile_floor_R_mindustry_world_blocks_environment_Floor])(ctx, (frame[9].o));
	sp[2].o = (jobject)((mindustry_world_Block *) NULL_CHECK(sp[2].o))->F_mapColor;
	sp[1].o = (jobject)((func_arc_graphics_Color_set_arc_graphics_Color_R_arc_graphics_Color) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_graphics_Color_set_arc_graphics_Color_R_arc_graphics_Color])(ctx, sp[1].o, sp[2].o);
	jfloat temp5 = jfloat(1.7f);
	jfloat temp6 = (jfloat)SM_arc_math_Mathf_range_float_R_float(ctx, (jfloat(0.15f)));
	sp[1].o = (jobject)((func_arc_graphics_Color_mul_float_R_arc_graphics_Color) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_graphics_Color_mul_float_R_arc_graphics_Color])(ctx, sp[1].o, (temp5 + temp6));
	((func_mindustry_entities_Effect_at_float_float_float_arc_graphics_Color) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_entities_Effect_at_float_float_float_arc_graphics_Color])(ctx, sp[0].o, temp0, temp1, temp4, sp[1].o);
	}
label_6:;
	{
	LINE_NUMBER(376);
	INST_IINC(5, 1);
	goto label_3;
	}
label_4:;
	LINE_NUMBER(386);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void SM_mindustry_world_blocks_campaign_Accelerator$AcceleratorBuild_lambda$beginLaunch$0_arc_scene_ui_Image(jcontext ctx, jobject param0) {
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/campaign/Accelerator$AcceleratorBuild:lambda$beginLaunch$0", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_world_blocks_campaign_Accelerator$AcceleratorBuild(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(349);
	((func_arc_scene_ui_Image_toFront) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_scene_ui_Image_toFront])(ctx, (frame[0].o));
	LINE_NUMBER(350);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_ui;
	sp[0].o = (jobject)((mindustry_core_UI *) NULL_CHECK(sp[0].o))->F_loadfrag;
	((func_mindustry_ui_fragments_LoadingFragment_toFront) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_ui_fragments_LoadingFragment_toFront])(ctx, sp[0].o);
	LINE_NUMBER(351);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	jint temp0 = (jint)((func_mindustry_core_GameState_isMenu_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_GameState_isMenu_R_boolean])(ctx, sp[0].o);
	if (temp0 == 0) goto label_3;
	}
	{
	LINE_NUMBER(352);
	jint temp0 = (jint)((func_arc_scene_ui_Image_remove_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_scene_ui_Image_remove_R_boolean])(ctx, (frame[0].o));
	}
label_3:;
	LINE_NUMBER(354);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_world_blocks_campaign_Accelerator$AcceleratorBuild_lambda$buildConfiguration$0_mindustry_type_Sector(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/campaign/Accelerator$AcceleratorBuild:lambda$buildConfiguration$0", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(264);
	jint temp0 = (jint)((func_mindustry_world_blocks_campaign_Accelerator$AcceleratorBuild_canLaunch_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_world_blocks_campaign_Accelerator$AcceleratorBuild_canLaunch_R_boolean])(ctx, (frame[0].o));
	if (temp0 == 0) goto label_1;
	}
	{
	LINE_NUMBER(265);
	((func_mindustry_world_blocks_campaign_Accelerator$AcceleratorBuild_consume) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_world_blocks_campaign_Accelerator$AcceleratorBuild_consume])(ctx, (frame[0].o));
	LINE_NUMBER(266);
	clinit_mindustry_type_ItemSeq(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_type_ItemSeq);
	init_mindustry_type_ItemSeq(ctx, sp[0].o);
	frame[2].o = sp[0].o;
	LINE_NUMBER(267);
	sp[0].o = frame[2].o;
	sp[1].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_items;
	((func_mindustry_type_ItemSeq_add_mindustry_world_modules_ItemModule) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_type_ItemSeq_add_mindustry_world_modules_ItemModule])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(268);
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_items;
	((func_mindustry_world_modules_ItemModule_clear) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_modules_ItemModule_clear])(ctx, sp[0].o);
	LINE_NUMBER(270);
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_power;
	sp[0].o = (jobject)((mindustry_world_modules_PowerModule *) NULL_CHECK(sp[0].o))->F_graph;
	sp[1].o = (jobject)((mindustry_world_blocks_campaign_Accelerator$AcceleratorBuild *) NULL_CHECK((frame[0].o)))->F_this$0;
	jfloat temp0 = (jfloat)((func_mindustry_world_blocks_power_PowerGraph_useBatteries_float_R_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_blocks_power_PowerGraph_useBatteries_float_R_float])(ctx, sp[0].o, ((jfloat)((mindustry_world_blocks_campaign_Accelerator *) NULL_CHECK(sp[1].o))->F_powerBufferRequirement));
	LINE_NUMBER(271);
	((mindustry_world_blocks_campaign_Accelerator$AcceleratorBuild *) NULL_CHECK((frame[0].o)))->F_progress = (jfloat(0));
	LINE_NUMBER(273);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_renderer;
	((func_mindustry_core_Renderer_showLaunch_mindustry_world_blocks_LaunchAnimator) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_Renderer_showLaunch_mindustry_world_blocks_LaunchAnimator])(ctx, sp[0].o, (frame[0].o));
	LINE_NUMBER(275);
	jfloat temp1 = (jfloat)((func_mindustry_world_blocks_campaign_Accelerator$AcceleratorBuild_launchDuration_R_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_world_blocks_campaign_Accelerator$AcceleratorBuild_launchDuration_R_float])(ctx, (frame[0].o));
	jfloat temp2 = temp1 - (jfloat(6.0f));
	{ /* InvokeDynamic */
		clinit_mindustry_world_blocks_campaign_Accelerator$AcceleratorBuild_invoke_java_lang_Runnable_9(ctx);
		auto proxy = (mindustry_world_blocks_campaign_Accelerator$AcceleratorBuild_invoke_java_lang_Runnable_9 *) gcAlloc(ctx, &class_mindustry_world_blocks_campaign_Accelerator$AcceleratorBuild_invoke_java_lang_Runnable_9);
		proxy->F_field2 = (jref) (frame[2].o);
		proxy->F_field1 = (jref) (frame[1].o);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[0].o = (jobject) proxy;
	}
	sp[0].o = (jobject)SM_arc_util_Time_runTask_float_java_lang_Runnable_R_arc_util_Timer$Task(ctx, temp2, sp[0].o);
	}
label_1:;
	LINE_NUMBER(287);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_world_blocks_campaign_Accelerator$AcceleratorBuild_lambda$buildConfiguration$1_mindustry_type_Sector_mindustry_type_ItemSeq(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/campaign/Accelerator$AcceleratorBuild:lambda$buildConfiguration$1", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(277);
	((mindustry_world_blocks_campaign_Accelerator$AcceleratorBuild *) NULL_CHECK((frame[0].o)))->F_launching = (jint(0));
	LINE_NUMBER(278);
	sp[0].o = (jobject)((mindustry_type_Sector *) NULL_CHECK((frame[1].o)))->F_planet;
	sp[0].o = (jobject)((mindustry_type_Planet *) NULL_CHECK(sp[0].o))->F_unlockedOnLand;
	{ /* InvokeDynamic */
		clinit_mindustry_world_blocks_campaign_Accelerator$AcceleratorBuild_invoke_arc_func_Cons_3(ctx);
		auto proxy = (mindustry_world_blocks_campaign_Accelerator$AcceleratorBuild_invoke_arc_func_Cons_3 *) gcAlloc(ctx, &class_mindustry_world_blocks_campaign_Accelerator$AcceleratorBuild_invoke_arc_func_Cons_3);
		sp[1].o = (jobject) proxy;
	}
	((func_arc_struct_Seq_each_arc_func_Cons) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_each_arc_func_Cons])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(280);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_universe;
	((func_mindustry_game_Universe_clearLoadoutInfo) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_game_Universe_clearLoadoutInfo])(ctx, sp[0].o);
	LINE_NUMBER(281);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_universe;
	((func_mindustry_game_Universe_updateLaunchResources_mindustry_type_ItemSeq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_game_Universe_updateLaunchResources_mindustry_type_ItemSeq])(ctx, sp[0].o, (frame[2].o));
	LINE_NUMBER(282);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_universe;
	sp[1].o = (jobject)((mindustry_world_blocks_campaign_Accelerator$AcceleratorBuild *) NULL_CHECK((frame[0].o)))->F_this$0;
	sp[1].o = (jobject)((mindustry_world_blocks_campaign_Accelerator *) NULL_CHECK(sp[1].o))->F_launchBlock;
	((func_mindustry_game_Universe_updateLoadout_mindustry_world_blocks_storage_CoreBlock) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_game_Universe_updateLoadout_mindustry_world_blocks_storage_CoreBlock])(ctx, sp[0].o, (checkCast(ctx, &class_mindustry_world_blocks_storage_CoreBlock, sp[1].o)));
	LINE_NUMBER(284);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_control;
	((func_mindustry_core_Control_playSector_mindustry_type_Sector) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_Control_playSector_mindustry_type_Sector])(ctx, sp[0].o, (frame[1].o));
	LINE_NUMBER(285);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_world_blocks_campaign_Accelerator$AcceleratorBuild_lambda$draw$0(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/campaign/Accelerator$AcceleratorBuild:lambda$draw$0", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(189);
	clinit_mindustry_graphics_Pal(ctx);
	sp[0].o = (jobject)SF_mindustry_graphics_Pal_accent;
	SM_arc_graphics_g2d_Draw_color_arc_graphics_Color_float(ctx, sp[0].o, ((jfloat)((mindustry_world_blocks_campaign_Accelerator$AcceleratorBuild *) NULL_CHECK((frame[0].o)))->F_heat));
	LINE_NUMBER(191);
	sp[0].o = (jobject)((mindustry_world_blocks_campaign_Accelerator$AcceleratorBuild *) NULL_CHECK((frame[0].o)))->F_this$0;
	sp[0].o = (jobject)((mindustry_world_blocks_campaign_Accelerator *) NULL_CHECK(sp[0].o))->F_launchBlock;
	sp[0].o = (jobject)((func_mindustry_world_Block_getGeneratedIcons_R_Array1_arc_graphics_g2d_TextureRegion) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_Block_getGeneratedIcons_R_Array1_arc_graphics_g2d_TextureRegion])(ctx, sp[0].o);
	frame[1].o = sp[0].o;
	frame[2].i = (((jarray) nullCheck(ctx, (frame[1].o)))->length);
	frame[3].i = (jint(0));
	}
label_4:;
	{
	if ((frame[3].i) >= (frame[2].i)) goto label_5;
	}
	{
	frame[4].o = ((jobject)ARRAY_ACCESS(jobject, (frame[1].o), (frame[3].i)));
	LINE_NUMBER(192);
	clinit_mindustry_graphics_Shaders(ctx);
	sp[0].o = (jobject)SF_mindustry_graphics_Shaders_blockbuild;
	((mindustry_graphics_Shaders$BlockBuildShader *) NULL_CHECK(sp[0].o))->F_region = (jref) (frame[4].o);
	LINE_NUMBER(193);
	clinit_mindustry_graphics_Shaders(ctx);
	sp[0].o = (jobject)SF_mindustry_graphics_Shaders_blockbuild;
	((mindustry_graphics_Shaders$BlockBuildShader *) NULL_CHECK(sp[0].o))->F_time = ((jfloat)((mindustry_world_blocks_campaign_Accelerator$AcceleratorBuild *) NULL_CHECK((frame[0].o)))->F_time);
	LINE_NUMBER(194);
	clinit_mindustry_graphics_Shaders(ctx);
	sp[0].o = (jobject)SF_mindustry_graphics_Shaders_blockbuild;
	((mindustry_graphics_Shaders$BlockBuildShader *) NULL_CHECK(sp[0].o))->F_progress = ((jfloat)((mindustry_world_blocks_campaign_Accelerator$AcceleratorBuild *) NULL_CHECK((frame[0].o)))->F_progress);
	LINE_NUMBER(196);
	SM_arc_graphics_g2d_Draw_rect_arc_graphics_g2d_TextureRegion_float_float(ctx, (frame[4].o), ((jfloat)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_x), ((jfloat)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_y));
	LINE_NUMBER(197);
	SM_arc_graphics_g2d_Draw_flush(ctx);
	LINE_NUMBER(191);
	INST_IINC(3, 1);
	goto label_4;
	}
label_5:;
	{
	LINE_NUMBER(200);
	SM_arc_graphics_g2d_Draw_color(ctx);
	LINE_NUMBER(201);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void *vtable_mindustry_world_blocks_campaign_Accelerator$AcceleratorBuild[] {
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
	(void *) M_mindustry_world_blocks_campaign_Accelerator$AcceleratorBuild_write_arc_util_io_Writes,
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
	(void *) M_mindustry_world_blocks_campaign_Accelerator$AcceleratorBuild_read_arc_util_io_Reads_byte,
	(void *) M_mindustry_gen_Building_create_mindustry_world_Block_mindustry_game_Team_R_mindustry_gen_Building,
	(void *) M_mindustry_gen_Building_getLiquidDestination_mindustry_gen_Building_mindustry_type_Liquid_R_mindustry_gen_Building,
	(void *) M_mindustry_gen_Building_init_mindustry_world_Tile_mindustry_game_Team_boolean_int_R_mindustry_gen_Building,
	(void *) M_mindustry_gen_Building_nearby_int_int_R_mindustry_gen_Building,
	(void *) M_mindustry_gen_Building_nearby_int_R_mindustry_gen_Building,
	(void *) M_mindustry_world_blocks_campaign_Accelerator$AcceleratorBuild_getCursor_R_arc_Graphics$Cursor,
	(void *) M_mindustry_gen_Building_getDisplayIcon_R_arc_graphics_g2d_TextureRegion,
	(void *) M_mindustry_gen_Building_getPowerConnections_arc_struct_Seq_R_arc_struct_Seq,
	(void *) M_mindustry_gen_Building_absorbLasers_R_boolean,
	(void *) M_mindustry_world_blocks_campaign_Accelerator$AcceleratorBuild_acceptItem_mindustry_gen_Building_mindustry_type_Item_R_boolean,
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
	(void *) M_mindustry_world_blocks_campaign_Accelerator$AcceleratorBuild_version_R_byte,
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
	(void *) M_mindustry_world_blocks_campaign_Accelerator$AcceleratorBuild_progress_R_float,
	(void *) M_mindustry_gen_Building_rotdeg_R_float,
	(void *) M_mindustry_gen_Building_timeScale_R_float,
	(void *) M_mindustry_gen_Building_totalProgress_R_float,
	(void *) M_mindustry_gen_Building_warmup_R_float,
	(void *) M_mindustry_gen_Building_acceptStack_mindustry_type_Item_int_mindustry_gen_Teamc_R_int,
	(void *) M_mindustry_gen_Building_explosionItemCap_R_int,
	(void *) M_mindustry_world_blocks_campaign_Accelerator$AcceleratorBuild_getMaximumAccepted_mindustry_type_Item_R_int,
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
	(void *) M_mindustry_world_blocks_campaign_Accelerator$AcceleratorBuild_buildConfiguration_arc_scene_ui_layout_Table,
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
	(void *) M_mindustry_world_blocks_campaign_Accelerator$AcceleratorBuild_draw,
	(void *) M_mindustry_gen_Building_drawCached,
	(void *) M_mindustry_gen_Building_drawConfigure,
	(void *) M_mindustry_gen_Building_drawCracks,
	(void *) M_mindustry_gen_Building_drawDisabled,
	(void *) M_mindustry_gen_Building_drawItemSelection_mindustry_ctype_UnlockableContent,
	(void *) M_mindustry_world_blocks_campaign_Accelerator$AcceleratorBuild_drawLight,
	(void *) M_mindustry_gen_Building_drawLiquidLight_mindustry_type_Liquid_float,
	(void *) M_mindustry_world_blocks_campaign_Accelerator$AcceleratorBuild_drawSelect,
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
	(void *) M_mindustry_world_blocks_campaign_Accelerator$AcceleratorBuild_updateTile,
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
	(void *) M_mindustry_world_blocks_campaign_Accelerator$AcceleratorBuild_drawLaunch,
	(void *) M_mindustry_world_blocks_campaign_Accelerator$AcceleratorBuild_drawLaunchGlobalZ,
	(void *) M_mindustry_world_blocks_campaign_Accelerator$AcceleratorBuild_beginLaunch_boolean,
	(void *) M_mindustry_world_blocks_campaign_Accelerator$AcceleratorBuild_endLaunch,
	(void *) M_mindustry_world_blocks_campaign_Accelerator$AcceleratorBuild_updateLaunch,
	(void *) M_mindustry_world_blocks_campaign_Accelerator$AcceleratorBuild_launchDuration_R_float,
	(void *) M_mindustry_world_blocks_campaign_Accelerator$AcceleratorBuild_landMusic_R_arc_audio_Music,
	(void *) M_mindustry_world_blocks_campaign_Accelerator$AcceleratorBuild_zoomLaunch_R_float,
	(void *) M_mindustry_world_blocks_campaign_Accelerator$AcceleratorBuild_isCoreBuilt_R_boolean,
	(void *) M_mindustry_world_blocks_campaign_Accelerator$AcceleratorBuild_canLaunch_R_boolean,
	(void *) M_mindustry_world_blocks_campaign_Accelerator$AcceleratorBuild_drawRing_float_float,
	(void *) M_mindustry_world_blocks_campaign_Accelerator$AcceleratorBuild_drawLanding_float_float_float,
	(void *) M_mindustry_world_blocks_campaign_Accelerator$AcceleratorBuild_drawLandingThrusters_float_float_float_float,
	(void *) M_mindustry_world_blocks_campaign_Accelerator$AcceleratorBuild_lambda$drawLaunch$0_float_float_float_float_float_float,
	(void *) M_mindustry_world_blocks_campaign_Accelerator$AcceleratorBuild_lambda$beginLaunch$1,
	(void *) M_mindustry_world_blocks_campaign_Accelerator$AcceleratorBuild_lambda$beginLaunch$2_float_int,
	(void *) M_mindustry_world_blocks_campaign_Accelerator$AcceleratorBuild_lambda$buildConfiguration$0_mindustry_type_Sector,
	(void *) M_mindustry_world_blocks_campaign_Accelerator$AcceleratorBuild_lambda$buildConfiguration$1_mindustry_type_Sector_mindustry_type_ItemSeq,
	(void *) M_mindustry_world_blocks_campaign_Accelerator$AcceleratorBuild_lambda$draw$0,
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
	{ "drawLaunch", "()V" },
	{ "drawLaunchGlobalZ", "()V" },
	{ "beginLaunch", "(Z)V" },
	{ "endLaunch", "()V" },
	{ "updateLaunch", "()V" },
	{ "launchDuration", "()F" },
	{ "landMusic", "()Larc/audio/Music;" },
	{ "zoomLaunch", "()F" },
	{ "isCoreBuilt", "()Z" },
	{ "canLaunch", "()Z" },
	{ "drawRing", "(FF)V" },
	{ "drawLanding", "(FFF)V" },
	{ "drawLandingThrusters", "(FFFF)V" },
	{ "lambda$drawLaunch$0", "(FFFFFF)V" },
	{ "lambda$beginLaunch$1", "()V" },
	{ "lambda$beginLaunch$2", "(FI)V" },
	{ "lambda$buildConfiguration$0", "(Lmindustry/type/Sector;)V" },
	{ "lambda$buildConfiguration$1", "(Lmindustry/type/Sector;Lmindustry/type/ItemSeq;)V" },
	{ "lambda$draw$0", "()V" },
};

static jclass interfaces[] { &class_mindustry_world_blocks_LaunchAnimator, };

static FieldMetadata fields[] {
	{ "heat", &class_float, offsetof(mindustry_world_blocks_campaign_Accelerator$AcceleratorBuild, F_heat), "F", 1 },
	{ "statusLerp", &class_float, offsetof(mindustry_world_blocks_campaign_Accelerator$AcceleratorBuild, F_statusLerp), "F", 1 },
	{ "progress", &class_float, offsetof(mindustry_world_blocks_campaign_Accelerator$AcceleratorBuild, F_progress), "F", 1 },
	{ "time", &class_float, offsetof(mindustry_world_blocks_campaign_Accelerator$AcceleratorBuild, F_time), "F", 1 },
	{ "launchHeat", &class_float, offsetof(mindustry_world_blocks_campaign_Accelerator$AcceleratorBuild, F_launchHeat), "F", 1 },
	{ "launching", &class_boolean, offsetof(mindustry_world_blocks_campaign_Accelerator$AcceleratorBuild, F_launching), "Z", 1 },
	{ "launchTime", &class_float, offsetof(mindustry_world_blocks_campaign_Accelerator$AcceleratorBuild, F_launchTime), "F", 1 },
	{ "cloudSeed", &class_float, offsetof(mindustry_world_blocks_campaign_Accelerator$AcceleratorBuild, F_cloudSeed), "F", 4 },
	{ "this$0", &class_mindustry_world_blocks_campaign_Accelerator, offsetof(mindustry_world_blocks_campaign_Accelerator$AcceleratorBuild, F_this$0), "Lmindustry/world/blocks/campaign/Accelerator;", 4112 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_mindustry_world_blocks_campaign_Accelerator$AcceleratorBuild_mindustry_world_blocks_campaign_Accelerator, 0, "(Lmindustry/world/blocks/campaign/Accelerator;)V", 1 },
	{ "updateTile", (intptr_t) M_mindustry_world_blocks_campaign_Accelerator$AcceleratorBuild_updateTile, VTABLE_mindustry_world_blocks_campaign_Accelerator$AcceleratorBuild_updateTile, "()V", 1 },
	{ "progress", (intptr_t) M_mindustry_world_blocks_campaign_Accelerator$AcceleratorBuild_progress_R_float, VTABLE_mindustry_world_blocks_campaign_Accelerator$AcceleratorBuild_progress_R_float, "()F", 1 },
	{ "isCoreBuilt", (intptr_t) M_mindustry_world_blocks_campaign_Accelerator$AcceleratorBuild_isCoreBuilt_R_boolean, VTABLE_mindustry_world_blocks_campaign_Accelerator$AcceleratorBuild_isCoreBuilt_R_boolean, "()Z", 1 },
	{ "draw", (intptr_t) M_mindustry_world_blocks_campaign_Accelerator$AcceleratorBuild_draw, VTABLE_mindustry_world_blocks_campaign_Accelerator$AcceleratorBuild_draw, "()V", 1 },
	{ "drawLight", (intptr_t) M_mindustry_world_blocks_campaign_Accelerator$AcceleratorBuild_drawLight, VTABLE_mindustry_world_blocks_campaign_Accelerator$AcceleratorBuild_drawLight, "()V", 1 },
	{ "canLaunch", (intptr_t) M_mindustry_world_blocks_campaign_Accelerator$AcceleratorBuild_canLaunch_R_boolean, VTABLE_mindustry_world_blocks_campaign_Accelerator$AcceleratorBuild_canLaunch_R_boolean, "()Z", 1 },
	{ "getCursor", (intptr_t) M_mindustry_world_blocks_campaign_Accelerator$AcceleratorBuild_getCursor_R_arc_Graphics$Cursor, VTABLE_mindustry_world_blocks_campaign_Accelerator$AcceleratorBuild_getCursor_R_arc_Graphics$Cursor, "()Larc/Graphics$Cursor;", 1 },
	{ "drawSelect", (intptr_t) M_mindustry_world_blocks_campaign_Accelerator$AcceleratorBuild_drawSelect, VTABLE_mindustry_world_blocks_campaign_Accelerator$AcceleratorBuild_drawSelect, "()V", 1 },
	{ "buildConfiguration", (intptr_t) M_mindustry_world_blocks_campaign_Accelerator$AcceleratorBuild_buildConfiguration_arc_scene_ui_layout_Table, VTABLE_mindustry_world_blocks_campaign_Accelerator$AcceleratorBuild_buildConfiguration_arc_scene_ui_layout_Table, "(Larc/scene/ui/layout/Table;)V", 1 },
	{ "getMaximumAccepted", (intptr_t) M_mindustry_world_blocks_campaign_Accelerator$AcceleratorBuild_getMaximumAccepted_mindustry_type_Item_R_int, VTABLE_mindustry_world_blocks_campaign_Accelerator$AcceleratorBuild_getMaximumAccepted_mindustry_type_Item_R_int, "(Lmindustry/type/Item;)I", 1 },
	{ "acceptItem", (intptr_t) M_mindustry_world_blocks_campaign_Accelerator$AcceleratorBuild_acceptItem_mindustry_gen_Building_mindustry_type_Item_R_boolean, VTABLE_mindustry_world_blocks_campaign_Accelerator$AcceleratorBuild_acceptItem_mindustry_gen_Building_mindustry_type_Item_R_boolean, "(Lmindustry/gen/Building;Lmindustry/type/Item;)Z", 1 },
	{ "version", (intptr_t) M_mindustry_world_blocks_campaign_Accelerator$AcceleratorBuild_version_R_byte, VTABLE_mindustry_world_blocks_campaign_Accelerator$AcceleratorBuild_version_R_byte, "()B", 1 },
	{ "write", (intptr_t) M_mindustry_world_blocks_campaign_Accelerator$AcceleratorBuild_write_arc_util_io_Writes, VTABLE_mindustry_world_blocks_campaign_Accelerator$AcceleratorBuild_write_arc_util_io_Writes, "(Larc/util/io/Writes;)V", 1 },
	{ "read", (intptr_t) M_mindustry_world_blocks_campaign_Accelerator$AcceleratorBuild_read_arc_util_io_Reads_byte, VTABLE_mindustry_world_blocks_campaign_Accelerator$AcceleratorBuild_read_arc_util_io_Reads_byte, "(Larc/util/io/Reads;B)V", 1 },
	{ "launchDuration", (intptr_t) M_mindustry_world_blocks_campaign_Accelerator$AcceleratorBuild_launchDuration_R_float, VTABLE_mindustry_world_blocks_campaign_Accelerator$AcceleratorBuild_launchDuration_R_float, "()F", 1 },
	{ "landMusic", (intptr_t) M_mindustry_world_blocks_campaign_Accelerator$AcceleratorBuild_landMusic_R_arc_audio_Music, VTABLE_mindustry_world_blocks_campaign_Accelerator$AcceleratorBuild_landMusic_R_arc_audio_Music, "()Larc/audio/Music;", 1 },
	{ "beginLaunch", (intptr_t) M_mindustry_world_blocks_campaign_Accelerator$AcceleratorBuild_beginLaunch_boolean, VTABLE_mindustry_world_blocks_campaign_Accelerator$AcceleratorBuild_beginLaunch_boolean, "(Z)V", 1 },
	{ "endLaunch", (intptr_t) M_mindustry_world_blocks_campaign_Accelerator$AcceleratorBuild_endLaunch, VTABLE_mindustry_world_blocks_campaign_Accelerator$AcceleratorBuild_endLaunch, "()V", 1 },
	{ "zoomLaunch", (intptr_t) M_mindustry_world_blocks_campaign_Accelerator$AcceleratorBuild_zoomLaunch_R_float, VTABLE_mindustry_world_blocks_campaign_Accelerator$AcceleratorBuild_zoomLaunch_R_float, "()F", 1 },
	{ "updateLaunch", (intptr_t) M_mindustry_world_blocks_campaign_Accelerator$AcceleratorBuild_updateLaunch, VTABLE_mindustry_world_blocks_campaign_Accelerator$AcceleratorBuild_updateLaunch, "()V", 1 },
	{ "drawLaunch", (intptr_t) M_mindustry_world_blocks_campaign_Accelerator$AcceleratorBuild_drawLaunch, VTABLE_mindustry_world_blocks_campaign_Accelerator$AcceleratorBuild_drawLaunch, "()V", 1 },
	{ "drawLaunchGlobalZ", (intptr_t) M_mindustry_world_blocks_campaign_Accelerator$AcceleratorBuild_drawLaunchGlobalZ, VTABLE_mindustry_world_blocks_campaign_Accelerator$AcceleratorBuild_drawLaunchGlobalZ, "()V", 1 },
	{ "drawRing", (intptr_t) M_mindustry_world_blocks_campaign_Accelerator$AcceleratorBuild_drawRing_float_float, VTABLE_mindustry_world_blocks_campaign_Accelerator$AcceleratorBuild_drawRing_float_float, "(FF)V", 4 },
	{ "drawLanding", (intptr_t) M_mindustry_world_blocks_campaign_Accelerator$AcceleratorBuild_drawLanding_float_float_float, VTABLE_mindustry_world_blocks_campaign_Accelerator$AcceleratorBuild_drawLanding_float_float_float, "(FFF)V", 4 },
	{ "drawLandingThrusters", (intptr_t) M_mindustry_world_blocks_campaign_Accelerator$AcceleratorBuild_drawLandingThrusters_float_float_float_float, VTABLE_mindustry_world_blocks_campaign_Accelerator$AcceleratorBuild_drawLandingThrusters_float_float_float_float, "(FFFF)V", 4 },
	{ "lambda$drawLaunch$0", (intptr_t) M_mindustry_world_blocks_campaign_Accelerator$AcceleratorBuild_lambda$drawLaunch$0_float_float_float_float_float_float, VTABLE_mindustry_world_blocks_campaign_Accelerator$AcceleratorBuild_lambda$drawLaunch$0_float_float_float_float_float_float, "(FFFFFF)V", 4098 },
	{ "lambda$beginLaunch$1", (intptr_t) M_mindustry_world_blocks_campaign_Accelerator$AcceleratorBuild_lambda$beginLaunch$1, VTABLE_mindustry_world_blocks_campaign_Accelerator$AcceleratorBuild_lambda$beginLaunch$1, "()V", 4098 },
	{ "lambda$beginLaunch$2", (intptr_t) M_mindustry_world_blocks_campaign_Accelerator$AcceleratorBuild_lambda$beginLaunch$2_float_int, VTABLE_mindustry_world_blocks_campaign_Accelerator$AcceleratorBuild_lambda$beginLaunch$2_float_int, "(FI)V", 4098 },
	{ "lambda$beginLaunch$0", (intptr_t) SM_mindustry_world_blocks_campaign_Accelerator$AcceleratorBuild_lambda$beginLaunch$0_arc_scene_ui_Image, 0, "(Larc/scene/ui/Image;)V", 4106 },
	{ "lambda$buildConfiguration$0", (intptr_t) M_mindustry_world_blocks_campaign_Accelerator$AcceleratorBuild_lambda$buildConfiguration$0_mindustry_type_Sector, VTABLE_mindustry_world_blocks_campaign_Accelerator$AcceleratorBuild_lambda$buildConfiguration$0_mindustry_type_Sector, "(Lmindustry/type/Sector;)V", 4098 },
	{ "lambda$buildConfiguration$1", (intptr_t) M_mindustry_world_blocks_campaign_Accelerator$AcceleratorBuild_lambda$buildConfiguration$1_mindustry_type_Sector_mindustry_type_ItemSeq, VTABLE_mindustry_world_blocks_campaign_Accelerator$AcceleratorBuild_lambda$buildConfiguration$1_mindustry_type_Sector_mindustry_type_ItemSeq, "(Lmindustry/type/Sector;Lmindustry/type/ItemSeq;)V", 4098 },
	{ "lambda$draw$0", (intptr_t) M_mindustry_world_blocks_campaign_Accelerator$AcceleratorBuild_lambda$draw$0, VTABLE_mindustry_world_blocks_campaign_Accelerator$AcceleratorBuild_lambda$draw$0, "()V", 4098 },
};

Class class_mindustry_world_blocks_campaign_Accelerator$AcceleratorBuild{
		.nativeName = (intptr_t) "mindustry/world/blocks/campaign/Accelerator$AcceleratorBuild",
		.parentClass = (intptr_t) &class_mindustry_gen_Building,
		.size = sizeof(mindustry_world_blocks_campaign_Accelerator$AcceleratorBuild),
		.classVtable = (intptr_t) vtable_mindustry_world_blocks_campaign_Accelerator$AcceleratorBuild,
		.staticInitializer = (intptr_t) clinit_mindustry_world_blocks_campaign_Accelerator$AcceleratorBuild,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_mindustry_world_blocks_campaign_Accelerator$AcceleratorBuild,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) &class_mindustry_world_blocks_campaign_Accelerator,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 33,
		.interfaceCount = 1,
		.nativeInterfaces = (intptr_t) interfaces,
		.fieldCount = 9,
		.nativeFields = (intptr_t) fields,
		.methodCount = 33,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 329,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_mindustry_world_blocks_campaign_Accelerator$AcceleratorBuild = registerClass(&class_mindustry_world_blocks_campaign_Accelerator$AcceleratorBuild);

}

