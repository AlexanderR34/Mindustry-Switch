#include "mindustry/world/blocks/distribution/StackConveyor_StackConveyorBuild.h"
#include "arc/math/geom/Vec2.h"
#include "mindustry/world/Block.h"
#include "arc/math/geom/Point2.h"
#include "arc/graphics/Color.h"
#include "mindustry/ui/Displayable.h"
#include "arc/graphics/g2d/Draw.h"
#include "mindustry/world/blocks/distribution/StackConveyor_StackConveyorBuild.h"
#include "mindustry/entities/Effect.h"
#include "arc/util/Tmp.h"
#include "arc/struct/Seq.h"
#include "mindustry/world/Tile.h"
#include "mindustry/world/modules/PowerModule.h"
#include "arc/math/geom/Position.h"
#include "java/lang/Throwable.h"
#include "arc/math/geom/Geometry.h"
#include "arc/graphics/Blending.h"
#include "mindustry/world/blocks/distribution/Conveyor_ConveyorBuild.h"
#include "arc/math/Mathf.h"
#include "java/lang/Math.h"
#include "arc/graphics/g2d/TextureRegion.h"
#include "mindustry/gen/Teamc.h"
#include "java/util/Iterator.h"
#include "arc/math/Interp.h"
#include "mindustry/type/Item.h"
#include "mindustry/world/modules/ItemModule.h"
#include "mindustry/gen/Building.h"
#include "arc/util/io/Reads.h"
#include "java/lang/Object.h"
#include "mindustry/world/blocks/Autotiler.h"
#include "mindustry/world/blocks/distribution/StackConveyor.h"
#include "mindustry/world/blocks/Autotiler_SliceMode.h"
#include "mindustry/game/Team.h"
#include "mindustry/Vars.h"
#include "mindustry/core/World.h"
#include "arc/util/io/Writes.h"

extern "C" {

static inline mindustry_world_blocks_distribution_StackConveyor* getStackConveyor(jobject self) {
	if (!self) return nullptr;
	auto sb = (mindustry_world_blocks_distribution_StackConveyor$StackConveyorBuild*)self;
	if (sb->F_this$0) return (mindustry_world_blocks_distribution_StackConveyor*)sb->F_this$0;
	if (((mindustry_gen_Building*)self)->F_block) {
		sb->F_this$0 = (jref)((mindustry_gen_Building*)self)->F_block;
		return (mindustry_world_blocks_distribution_StackConveyor*)sb->F_this$0;
	}
	return nullptr;
}


void mark_mindustry_world_blocks_distribution_StackConveyor$StackConveyorBuild(jobject object, jint mark, jint depth) {
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
	auto self = (mindustry_world_blocks_distribution_StackConveyor$StackConveyorBuild *) object;
	if (self->F_lastItem)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_lastItem)->clazz)->markFunction)((jobject) self->F_lastItem, mark, depth + 1);
	if (self->F_this$0)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_this$0)->clazz)->markFunction)((jobject) self->F_this$0, mark, depth + 1);
}

void clinit_mindustry_world_blocks_distribution_StackConveyor$StackConveyorBuild(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	clinit_mindustry_gen_Building(ctx);
}

void init_mindustry_world_blocks_distribution_StackConveyor$StackConveyorBuild_mindustry_world_blocks_distribution_StackConveyor(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/distribution/StackConveyor$StackConveyorBuild:<init>", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_world_blocks_distribution_StackConveyor$StackConveyorBuild(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(114);
	((mindustry_world_blocks_distribution_StackConveyor$StackConveyorBuild *) NULL_CHECK((frame[0].o)))->F_this$0 = (jref) (frame[1].o);
	init_mindustry_gen_Building(ctx, (frame[0].o));
	LINE_NUMBER(117);
	((mindustry_world_blocks_distribution_StackConveyor$StackConveyorBuild *) NULL_CHECK((frame[0].o)))->F_link = (jint(-1));
	LINE_NUMBER(121);
	((mindustry_world_blocks_distribution_StackConveyor$StackConveyorBuild *) NULL_CHECK((frame[0].o)))->F_proxUpdating = (jint(0));
	LINE_NUMBER(114);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_world_blocks_distribution_StackConveyor$StackConveyorBuild_drawCached(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/distribution/StackConveyor$StackConveyorBuild:drawCached", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(125);
	sp[0].o = (jobject)((mindustry_world_blocks_distribution_StackConveyor$StackConveyorBuild *) NULL_CHECK((frame[0].o)))->F_this$0;
	sp[0].o = (jobject)((mindustry_world_blocks_distribution_StackConveyor *) NULL_CHECK(sp[0].o))->F_regions;
	sp[0].o = (jobject)ARRAY_ACCESS(jobject, sp[0].o, ((jint)((mindustry_world_blocks_distribution_StackConveyor$StackConveyorBuild *) NULL_CHECK((frame[0].o)))->F_state));
	jfloat temp0 = (jfloat)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_x;
	jfloat temp1 = (jfloat)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_y;
	jfloat temp2 = (jfloat)((func_mindustry_world_blocks_distribution_StackConveyor$StackConveyorBuild_rotdeg_R_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_world_blocks_distribution_StackConveyor$StackConveyorBuild_rotdeg_R_float])(ctx, (frame[0].o));
	SM_arc_graphics_g2d_Draw_rect_arc_graphics_g2d_TextureRegion_float_float_float(ctx, sp[0].o, temp0, temp1, temp2);
	LINE_NUMBER(127);
	frame[1].i = (jint(0));
	}
label_2:;
	{
	if ((frame[1].i) >= (jint(4))) goto label_3;
	}
	{
	LINE_NUMBER(128);
	if ((((jint)((mindustry_world_blocks_distribution_StackConveyor$StackConveyorBuild *) NULL_CHECK((frame[0].o)))->F_blendprox) & ((jint(1)) << (frame[1].i))) != 0) goto label_5;
	}
	{
	LINE_NUMBER(129);
	sp[0].o = (jobject)((mindustry_world_blocks_distribution_StackConveyor$StackConveyorBuild *) NULL_CHECK((frame[0].o)))->F_this$0;
	sp[0].o = (jobject)((mindustry_world_blocks_distribution_StackConveyor *) NULL_CHECK(sp[0].o))->F_edgeRegion;
	SM_arc_graphics_g2d_Draw_rect_arc_graphics_g2d_TextureRegion_float_float_float(ctx, sp[0].o, ((jfloat)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_x), ((jfloat)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_y), (jfloat(((((jint)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_rotation) - (frame[1].i)) * (90)))));
	}
label_5:;
	{
	LINE_NUMBER(127);
	INST_IINC(1, 1);
	goto label_2;
	}
label_3:;
	{
	LINE_NUMBER(134);
	if (((jint)((mindustry_world_blocks_distribution_StackConveyor$StackConveyorBuild *) NULL_CHECK((frame[0].o)))->F_state) != (jint(1))) goto label_7;
	}
	{
	LINE_NUMBER(135);
	frame[1].i = (jint(0));
	}
label_9:;
	{
	if ((frame[1].i) >= (jint(4))) goto label_10;
	}
	{
	LINE_NUMBER(136);
	jint temp0 = (jint)SM_arc_math_Mathf_mod_int_int_R_int(ctx, (((jint)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_rotation) - (frame[1].i)), (jint(4)));
	frame[2].i = temp0;
	LINE_NUMBER(137);
	sp[0].o = (jobject)((func_mindustry_world_blocks_distribution_StackConveyor$StackConveyorBuild_nearby_int_R_mindustry_gen_Building) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_world_blocks_distribution_StackConveyor$StackConveyorBuild_nearby_int_R_mindustry_gen_Building])(ctx, (frame[0].o), (frame[2].i));
	frame[3].o = sp[0].o;
	LINE_NUMBER(138);
	if ((((jint)((mindustry_world_blocks_distribution_StackConveyor$StackConveyorBuild *) NULL_CHECK((frame[0].o)))->F_blendprox) & ((jint(1)) << (frame[1].i))) == 0) goto label_14;
	}
	INST_ILOAD(1);
	if ((--sp)->i == 0) goto label_14;
	INST_ALOAD(3);
	if ((--sp)->o == nullptr) goto label_14;
	{
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[3].o)))->F_block;
	if (((jint)((mindustry_world_Block *) NULL_CHECK(sp[0].o))->F_squareSprite) != 0) goto label_14;
	}
	{
	LINE_NUMBER(139);
	sp[0].o = (jobject)((mindustry_world_blocks_distribution_StackConveyor$StackConveyorBuild *) NULL_CHECK((frame[0].o)))->F_this$0;
	sp[1].o = (jobject)((mindustry_world_blocks_distribution_StackConveyor$StackConveyorBuild *) NULL_CHECK((frame[0].o)))->F_this$0;
	sp[1].o = (jobject)((mindustry_world_blocks_distribution_StackConveyor *) NULL_CHECK(sp[1].o))->F_regions;
	sp[1].o = (jobject)ARRAY_ACCESS(jobject, sp[1].o, (jint(0)));
	clinit_mindustry_world_blocks_Autotiler$SliceMode(ctx);
	sp[2].o = (jobject)SF_mindustry_world_blocks_Autotiler$SliceMode_bottom;
	sp[0].o = (jobject)((func_mindustry_world_blocks_distribution_StackConveyor_sliced_arc_graphics_g2d_TextureRegion_mindustry_world_blocks_Autotiler$SliceMode_R_arc_graphics_g2d_TextureRegion) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_blocks_distribution_StackConveyor_sliced_arc_graphics_g2d_TextureRegion_mindustry_world_blocks_Autotiler$SliceMode_R_arc_graphics_g2d_TextureRegion])(ctx, sp[0].o, sp[1].o, sp[2].o);
	jfloat temp0 = (jfloat)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_x;
	jint temp1 = (jint)SM_arc_math_geom_Geometry_d4x_int_R_int(ctx, (frame[2].i));
	jfloat temp2 = temp0 + ((jfloat((temp1 * (8)))) * (jfloat(0.75f)));
	jfloat temp3 = (jfloat)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_y;
	jint temp4 = (jint)SM_arc_math_geom_Geometry_d4y_int_R_int(ctx, (frame[2].i));
	SM_arc_graphics_g2d_Draw_rect_arc_graphics_g2d_TextureRegion_float_float_float(ctx, sp[0].o, temp2, (temp3 + ((jfloat((temp4 * (8)))) * (jfloat(0.75f)))), (jfloat(((frame[2].i) * (90)))));
	}
label_14:;
	{
	LINE_NUMBER(135);
	INST_IINC(1, 1);
	goto label_9;
	}
label_10:;
	goto label_16;
label_7:;
	{
	LINE_NUMBER(142);
	if (((jint)((mindustry_world_blocks_distribution_StackConveyor$StackConveyorBuild *) NULL_CHECK((frame[0].o)))->F_state) != (jint(2))) goto label_16;
	}
	{
	LINE_NUMBER(144);
	if ((((jint)((mindustry_world_blocks_distribution_StackConveyor$StackConveyorBuild *) NULL_CHECK((frame[0].o)))->F_blendprox) & (jint(1))) == 0) goto label_16;
	}
	{
	sp[0].o = (jobject)((func_mindustry_world_blocks_distribution_StackConveyor$StackConveyorBuild_front_R_mindustry_gen_Building) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_world_blocks_distribution_StackConveyor$StackConveyorBuild_front_R_mindustry_gen_Building])(ctx, (frame[0].o));
	if (sp[0].o == nullptr) goto label_16;
	}
	{
	sp[0].o = (jobject)((func_mindustry_world_blocks_distribution_StackConveyor$StackConveyorBuild_front_R_mindustry_gen_Building) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_world_blocks_distribution_StackConveyor$StackConveyorBuild_front_R_mindustry_gen_Building])(ctx, (frame[0].o));
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK(sp[0].o))->F_block;
	if (((jint)((mindustry_world_Block *) NULL_CHECK(sp[0].o))->F_squareSprite) != 0) goto label_16;
	}
	{
	LINE_NUMBER(145);
	sp[0].o = (jobject)((mindustry_world_blocks_distribution_StackConveyor$StackConveyorBuild *) NULL_CHECK((frame[0].o)))->F_this$0;
	sp[1].o = (jobject)((mindustry_world_blocks_distribution_StackConveyor$StackConveyorBuild *) NULL_CHECK((frame[0].o)))->F_this$0;
	sp[1].o = (jobject)((mindustry_world_blocks_distribution_StackConveyor *) NULL_CHECK(sp[1].o))->F_regions;
	sp[1].o = (jobject)ARRAY_ACCESS(jobject, sp[1].o, (jint(0)));
	clinit_mindustry_world_blocks_Autotiler$SliceMode(ctx);
	sp[2].o = (jobject)SF_mindustry_world_blocks_Autotiler$SliceMode_top;
	sp[0].o = (jobject)((func_mindustry_world_blocks_distribution_StackConveyor_sliced_arc_graphics_g2d_TextureRegion_mindustry_world_blocks_Autotiler$SliceMode_R_arc_graphics_g2d_TextureRegion) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_blocks_distribution_StackConveyor_sliced_arc_graphics_g2d_TextureRegion_mindustry_world_blocks_Autotiler$SliceMode_R_arc_graphics_g2d_TextureRegion])(ctx, sp[0].o, sp[1].o, sp[2].o);
	jfloat temp0 = (jfloat)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_x;
	jint temp1 = (jint)SM_arc_math_geom_Geometry_d4x_int_R_int(ctx, ((jint)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_rotation));
	jfloat temp2 = temp0 + ((jfloat((temp1 * (8)))) * (jfloat(0.75f)));
	jfloat temp3 = (jfloat)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_y;
	jint temp4 = (jint)SM_arc_math_geom_Geometry_d4y_int_R_int(ctx, ((jint)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_rotation));
	SM_arc_graphics_g2d_Draw_rect_arc_graphics_g2d_TextureRegion_float_float_float(ctx, sp[0].o, temp2, (temp3 + ((jfloat((temp4 * (8)))) * (jfloat(0.75f)))), ((jfloat(((jint)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_rotation))) * (jfloat(90.0f))));
	}
label_16:;
	LINE_NUMBER(148);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_world_blocks_distribution_StackConveyor$StackConveyorBuild_draw(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[16];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/distribution/StackConveyor$StackConveyorBuild:draw", 16 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(152);
	SM_arc_graphics_g2d_Draw_z_float(ctx, (jfloat(29.9f)));
	LINE_NUMBER(154);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_world;
	sp[0].o = (jobject)((func_mindustry_core_World_tile_int_R_mindustry_world_Tile) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_World_tile_int_R_mindustry_world_Tile])(ctx, sp[0].o, ((jint)((mindustry_world_blocks_distribution_StackConveyor$StackConveyorBuild *) NULL_CHECK((frame[0].o)))->F_link));
	frame[1].o = sp[0].o;
	LINE_NUMBER(156);
	sp[0].o = (jobject)((mindustry_world_blocks_distribution_StackConveyor$StackConveyorBuild *) NULL_CHECK((frame[0].o)))->F_this$0;
	sp[0].o = (jobject)((mindustry_world_blocks_distribution_StackConveyor *) NULL_CHECK(sp[0].o))->F_glowRegion;
	jint temp0 = (jint)((func_arc_graphics_g2d_TextureRegion_found_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_g2d_TextureRegion_found_R_boolean])(ctx, sp[0].o);
	if (temp0 == 0) goto label_3;
	}
	{
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_power;
	if (sp[0].o == nullptr) goto label_3;
	}
	{
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_power;
	if ((floatCompare(((jfloat)((mindustry_world_modules_PowerModule *) NULL_CHECK(sp[0].o))->F_status), (jfloat(0)), -1)) <= 0) goto label_3;
	}
	{
	LINE_NUMBER(157);
	SM_arc_graphics_g2d_Draw_z_float(ctx, (jfloat(31.0f)));
	LINE_NUMBER(158);
	sp[0].o = (jobject)((mindustry_world_blocks_distribution_StackConveyor$StackConveyorBuild *) NULL_CHECK((frame[0].o)))->F_this$0;
	sp[0].o = (jobject)((mindustry_world_blocks_distribution_StackConveyor *) NULL_CHECK(sp[0].o))->F_glowColor;
	sp[1].o = (jobject)((mindustry_world_blocks_distribution_StackConveyor$StackConveyorBuild *) NULL_CHECK((frame[0].o)))->F_this$0;
	jfloat temp0 = (jfloat)((mindustry_world_blocks_distribution_StackConveyor *) NULL_CHECK(sp[1].o))->F_glowAlpha;
	sp[1].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_power;
	SM_arc_graphics_g2d_Draw_color_arc_graphics_Color_float(ctx, sp[0].o, (temp0 * ((jfloat)((mindustry_world_modules_PowerModule *) NULL_CHECK(sp[1].o))->F_status)));
	LINE_NUMBER(159);
	clinit_arc_graphics_Blending(ctx);
	sp[0].o = (jobject)SF_arc_graphics_Blending_additive;
	SM_arc_graphics_g2d_Draw_blend_arc_graphics_Blending(ctx, sp[0].o);
	LINE_NUMBER(160);
	if (((jint)((mindustry_world_blocks_distribution_StackConveyor$StackConveyorBuild *) NULL_CHECK((frame[0].o)))->F_state) != (jint(1))) goto label_8;
	}
	{
	sp[0].o = (jobject)((mindustry_world_blocks_distribution_StackConveyor$StackConveyorBuild *) NULL_CHECK((frame[0].o)))->F_this$0;
	sp[0].o = (jobject)((mindustry_world_blocks_distribution_StackConveyor *) NULL_CHECK(sp[0].o))->F_edgeGlowRegion;
	sp += 1;
	goto label_9;
	}
label_8:;
	{
	sp[0].o = (jobject)((mindustry_world_blocks_distribution_StackConveyor$StackConveyorBuild *) NULL_CHECK((frame[0].o)))->F_this$0;
	sp[0].o = (jobject)((mindustry_world_blocks_distribution_StackConveyor *) NULL_CHECK(sp[0].o))->F_glowRegion;
	sp += 1;
	}
label_9:;
	{
	sp -= 1;
	SM_arc_graphics_g2d_Draw_rect_arc_graphics_g2d_TextureRegion_float_float_float(ctx, sp[0].o, ((jfloat)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_x), ((jfloat)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_y), (jfloat((((jint)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_rotation) * (90)))));
	LINE_NUMBER(161);
	SM_arc_graphics_g2d_Draw_blend(ctx);
	LINE_NUMBER(162);
	SM_arc_graphics_g2d_Draw_color(ctx);
	LINE_NUMBER(163);
	SM_arc_graphics_g2d_Draw_z_float(ctx, (jfloat(29.9f)));
	}
label_3:;
	{
	LINE_NUMBER(166);
	if (((jint)((mindustry_world_blocks_distribution_StackConveyor$StackConveyorBuild *) NULL_CHECK((frame[0].o)))->F_link) == (jint(-1))) goto label_13;
	}
	INST_ALOAD(1);
	if ((--sp)->o == nullptr) goto label_13;
	{
	sp[0].o = (jobject)((mindustry_world_blocks_distribution_StackConveyor$StackConveyorBuild *) NULL_CHECK((frame[0].o)))->F_lastItem;
	if (sp[0].o != nullptr) goto label_14;
	}
label_13:;
	popStackFrame(ctx);
	INST_RETURN();
label_14:;
	{
	LINE_NUMBER(168);
	sp[0].o = (jobject)((mindustry_world_Tile *) NULL_CHECK((frame[1].o)))->F_build;
	if (sp[0].o != nullptr) goto label_15;
	}
	{
	jint temp0 = (jint)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_rotation;
	sp[0].i = temp0;
	sp += 1;
	goto label_16;
	}
label_15:;
	{
	sp[0].o = (jobject)((mindustry_world_Tile *) NULL_CHECK((frame[1].o)))->F_build;
	jint temp0 = (jint)((mindustry_gen_Building *) NULL_CHECK(sp[0].o))->F_rotation;
	sp[0].i = temp0;
	sp += 1;
	}
label_16:;
	{
	sp -= 1;
	frame[2].i = sp[0].i;
	LINE_NUMBER(171);
	clinit_arc_util_Tmp(ctx);
	sp[0].o = (jobject)SF_arc_util_Tmp_v1;
	jfloat temp0 = (jfloat)((func_mindustry_world_Tile_worldx_R_float) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_world_Tile_worldx_R_float])(ctx, (frame[1].o));
	jfloat temp1 = (jfloat)((func_mindustry_world_Tile_worldy_R_float) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_world_Tile_worldy_R_float])(ctx, (frame[1].o));
	sp[0].o = (jobject)((func_arc_math_geom_Vec2_set_float_float_R_arc_math_geom_Vec2) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Vec2_set_float_float_R_arc_math_geom_Vec2])(ctx, sp[0].o, temp0, temp1);
	LINE_NUMBER(172);
	clinit_arc_util_Tmp(ctx);
	sp[0].o = (jobject)SF_arc_util_Tmp_v2;
	sp[0].o = (jobject)((func_arc_math_geom_Vec2_set_float_float_R_arc_math_geom_Vec2) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Vec2_set_float_float_R_arc_math_geom_Vec2])(ctx, sp[0].o, ((jfloat)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_x), ((jfloat)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_y));
	LINE_NUMBER(173);
	clinit_arc_util_Tmp(ctx);
	sp[0].o = (jobject)SF_arc_util_Tmp_v1;
	clinit_arc_util_Tmp(ctx);
	sp[1].o = (jobject)SF_arc_util_Tmp_v2;
	jfloat temp2 = (jfloat(1)) - ((jfloat)((mindustry_world_blocks_distribution_StackConveyor$StackConveyorBuild *) NULL_CHECK((frame[0].o)))->F_cooldown);
	clinit_arc_math_Interp(ctx);
	sp[2].o = (jobject)SF_arc_math_Interp_linear;
	sp[0].o = (jobject)((func_arc_math_geom_Vec2_interpolate_arc_math_geom_Vec2_float_arc_math_Interp_R_arc_math_geom_Vec2) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Vec2_interpolate_arc_math_geom_Vec2_float_arc_math_Interp_R_arc_math_geom_Vec2])(ctx, sp[0].o, sp[1].o, temp2, sp[2].o);
	LINE_NUMBER(176);
	frame[3].f = (jfloat((((frame[2].i) % (jint(4))) * (90))));
	LINE_NUMBER(177);
	frame[4].f = (jfloat(((((jint)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_rotation) % (jint(4))) * (90))));
	LINE_NUMBER(178);
	if (((frame[2].i) % (jint(4))) != (jint(3))) goto label_23;
	}
	{
	if ((((jint)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_rotation) % (jint(4))) != 0) goto label_23;
	}
	(sp++)->f = jfloat(-90.0f);
	INST_FSTORE(3);
label_23:;
	{
	LINE_NUMBER(179);
	if (((frame[2].i) % (jint(4))) != 0) goto label_24;
	}
	{
	if ((((jint)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_rotation) % (jint(4))) != (jint(3))) goto label_24;
	}
	(sp++)->f = jfloat(360.0f);
	INST_FSTORE(3);
label_24:;
	{
	LINE_NUMBER(181);
	sp[0].o = (jobject)((mindustry_world_blocks_distribution_StackConveyor$StackConveyorBuild *) NULL_CHECK((frame[0].o)))->F_this$0;
	sp[0].o = (jobject)((mindustry_world_blocks_distribution_StackConveyor *) NULL_CHECK(sp[0].o))->F_glowRegion;
	jint temp0 = (jint)((func_arc_graphics_g2d_TextureRegion_found_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_g2d_TextureRegion_found_R_boolean])(ctx, sp[0].o);
	if (temp0 == 0) goto label_25;
	}
	{
	LINE_NUMBER(182);
	SM_arc_graphics_g2d_Draw_z_float(ctx, (jfloat(31.01f)));
	}
label_25:;
	{
	LINE_NUMBER(186);
	sp[0].o = (jobject)((mindustry_world_blocks_distribution_StackConveyor$StackConveyorBuild *) NULL_CHECK((frame[0].o)))->F_this$0;
	sp[0].o = (jobject)((mindustry_world_blocks_distribution_StackConveyor *) NULL_CHECK(sp[0].o))->F_stackRegion;
	clinit_arc_util_Tmp(ctx);
	sp[1].o = (jobject)SF_arc_util_Tmp_v1;
	jfloat temp0 = (jfloat)((arc_math_geom_Vec2 *) NULL_CHECK(sp[1].o))->F_x;
	clinit_arc_util_Tmp(ctx);
	sp[1].o = (jobject)SF_arc_util_Tmp_v1;
	jfloat temp1 = (jfloat)((arc_math_geom_Vec2 *) NULL_CHECK(sp[1].o))->F_y;
	jfloat temp2 = frame[3].f;
	jfloat temp3 = frame[4].f;
	clinit_arc_math_Interp(ctx);
	sp[1].o = (jobject)SF_arc_math_Interp_smooth;
	jfloat temp4 = jfloat(1);
	jfloat temp5 = (jfloat)SM_arc_math_Mathf_clamp_float_float_float_R_float(ctx, (((jfloat)((mindustry_world_blocks_distribution_StackConveyor$StackConveyorBuild *) NULL_CHECK((frame[0].o)))->F_cooldown) * (jfloat(2))), (jfloat(0)), (jfloat(1)));
	jfloat temp6 = (jfloat)((func_arc_math_Interp_apply_float_R_float) resolveInterfaceMethod(ctx, &class_arc_math_Interp, INDEX_arc_math_Interp_apply_float_R_float, sp[1].o))(ctx, sp[1].o, (temp4 - temp5));
	jfloat temp7 = (jfloat)SM_arc_math_Mathf_lerp_float_float_float_R_float(ctx, temp2, temp3, temp6);
	SM_arc_graphics_g2d_Draw_rect_arc_graphics_g2d_TextureRegion_float_float_float(ctx, sp[0].o, temp0, temp1, temp7);
	LINE_NUMBER(189);
	jfloat temp8 = jfloat(5.0f);
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_items;
	jint temp9 = (jint)((func_mindustry_world_modules_ItemModule_total_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_modules_ItemModule_total_R_int])(ctx, sp[0].o);
	jfloat temp10 = jfloat(temp9);
	sp[0].o = (jobject)((mindustry_world_blocks_distribution_StackConveyor$StackConveyorBuild *) NULL_CHECK((frame[0].o)))->F_this$0;
	jfloat temp11 = (jfloat)SM_java_lang_Math_min_float_float_R_float(ctx, (temp10 / (jfloat(((jint)((mindustry_world_Block *) NULL_CHECK(sp[0].o))->F_itemCapacity)))), (jfloat(1)));
	jfloat temp12 = (jfloat)SM_arc_math_Mathf_lerp_float_float_float_R_float(ctx, temp11, (jfloat(1)), (jfloat(0.4f)));
	frame[5].f = (temp8 * temp12);
	LINE_NUMBER(190);
	sp[0].o = (jobject)((mindustry_world_blocks_distribution_StackConveyor$StackConveyorBuild *) NULL_CHECK((frame[0].o)))->F_lastItem;
	sp[0].o = (jobject)((mindustry_ctype_UnlockableContent *) NULL_CHECK(sp[0].o))->F_fullIcon;
	clinit_arc_util_Tmp(ctx);
	sp[1].o = (jobject)SF_arc_util_Tmp_v1;
	jfloat temp13 = (jfloat)((arc_math_geom_Vec2 *) NULL_CHECK(sp[1].o))->F_x;
	clinit_arc_util_Tmp(ctx);
	sp[1].o = (jobject)SF_arc_util_Tmp_v1;
	SM_arc_graphics_g2d_Draw_rect_arc_graphics_g2d_TextureRegion_float_float_float_float_float(ctx, sp[0].o, temp13, ((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK(sp[1].o))->F_y), (frame[5].f), (frame[5].f), (jfloat(0)));
	LINE_NUMBER(191);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_world_blocks_distribution_StackConveyor$StackConveyorBuild_dropped(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/distribution/StackConveyor$StackConveyorBuild:dropped", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(195);
	M_mindustry_gen_Building_dropped(ctx, (frame[0].o));
	LINE_NUMBER(196);
	clinit_arc_math_geom_Geometry(ctx);
	sp[0].o = (jobject)SF_arc_math_geom_Geometry_d4;
	frame[1].o = ((jobject)ARRAY_ACCESS(jobject, sp[0].o, ((((jint)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_rotation) + (jint(2))) % (jint(4)))));
	LINE_NUMBER(197);
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_items;
	jint temp0 = (jint)((func_mindustry_world_modules_ItemModule_any_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_modules_ItemModule_any_R_boolean])(ctx, sp[0].o);
	if (temp0 == 0) goto label_3;
	}
	{
	LINE_NUMBER(198);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_tile;
	jint temp0 = ((jint)((mindustry_world_Tile *) NULL_CHECK(sp[1].o))->F_x) + ((jint)((arc_math_geom_Point2 *) NULL_CHECK((frame[1].o)))->F_x);
	sp[1].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_tile;
	jint temp1 = (jint)SM_arc_math_geom_Point2_pack_int_int_R_int(ctx, temp0, (((jint)((mindustry_world_Tile *) NULL_CHECK(sp[1].o))->F_y) + ((jint)((arc_math_geom_Point2 *) NULL_CHECK((frame[1].o)))->F_y)));
	((mindustry_world_blocks_distribution_StackConveyor$StackConveyorBuild *) NULL_CHECK(sp[0].o))->F_link = temp1;
	LINE_NUMBER(199);
	((mindustry_world_blocks_distribution_StackConveyor$StackConveyorBuild *) NULL_CHECK((frame[0].o)))->F_cooldown = (jfloat(0));
	goto label_6;
	}
label_3:;
	{
	LINE_NUMBER(201);
	((mindustry_world_blocks_distribution_StackConveyor$StackConveyorBuild *) NULL_CHECK((frame[0].o)))->F_link = (jint(-1));
	}
label_6:;
	LINE_NUMBER(203);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_world_blocks_distribution_StackConveyor$StackConveyorBuild_drawCracks(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/distribution/StackConveyor$StackConveyorBuild:drawCracks", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(207);
	SM_arc_graphics_g2d_Draw_z_float(ctx, (jfloat(29.85f)));
	LINE_NUMBER(208);
	M_mindustry_gen_Building_drawCracks(ctx, (frame[0].o));
	LINE_NUMBER(209);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_world_blocks_distribution_StackConveyor$StackConveyorBuild_payloadDraw(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/distribution/StackConveyor$StackConveyorBuild:payloadDraw", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(213);
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_block;
	sp[0].o = (jobject)((mindustry_ctype_UnlockableContent *) NULL_CHECK(sp[0].o))->F_fullIcon;
	SM_arc_graphics_g2d_Draw_rect_arc_graphics_g2d_TextureRegion_float_float(ctx, sp[0].o, ((jfloat)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_x), ((jfloat)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_y));
	LINE_NUMBER(214);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_world_blocks_distribution_StackConveyor$StackConveyorBuild_onProximityUpdate(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[11];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/distribution/StackConveyor$StackConveyorBuild:onProximityUpdate", 11 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	auto stackConveyor = getStackConveyor(self);
	LINE_NUMBER(218);
	M_mindustry_gen_Building_onProximityUpdate(ctx, (frame[0].o));
	LINE_NUMBER(219);
	((func_mindustry_world_blocks_distribution_StackConveyor$StackConveyorBuild_recache) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_world_blocks_distribution_StackConveyor$StackConveyorBuild_recache])(ctx, (frame[0].o));
	LINE_NUMBER(221);
	frame[1].i = ((jint)((mindustry_world_blocks_distribution_StackConveyor$StackConveyorBuild *) NULL_CHECK((frame[0].o)))->F_state);
	LINE_NUMBER(223);
	((mindustry_world_blocks_distribution_StackConveyor$StackConveyorBuild *) NULL_CHECK((frame[0].o)))->F_state = (jint(0));
	LINE_NUMBER(225);
	sp[0].o = (jobject)getStackConveyor(frame[0].o);
	sp[1].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_tile;
	if (!sp[0].o || !sp[1].o) {
		popStackFrame(ctx);
		return;
	}
	sp[0].o = (jobject)((func_mindustry_world_blocks_distribution_StackConveyor_buildBlending_mindustry_world_Tile_int_Array1_mindustry_entities_units_BuildPlan_boolean_R_Array1_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_blocks_distribution_StackConveyor_buildBlending_mindustry_world_Tile_int_Array1_mindustry_entities_units_BuildPlan_boolean_R_Array1_int])(ctx, sp[0].o, sp[1].o, ((jint)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_rotation), (jobject(nullptr)), (jint(1)));
	frame[2].o = sp[0].o;
	LINE_NUMBER(226);
	if (((jint)ARRAY_ACCESS(jint, (frame[2].o), (jint(0)))) != 0) goto label_6;
	}
	{
	sp[0].o = (jobject)getStackConveyor(frame[0].o);
	sp[1].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_tile;
	jint temp0 = (jint)((func_mindustry_world_blocks_distribution_StackConveyor_blends_mindustry_world_Tile_int_int_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_blocks_distribution_StackConveyor_blends_mindustry_world_Tile_int_int_R_boolean])(ctx, sp[0].o, sp[1].o, ((jint)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_rotation), (jint(0)));
	if (temp0 == 0) goto label_6;
	}
	{
	sp[0].o = (jobject)getStackConveyor(frame[0].o);
	sp[1].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_tile;
	jint temp0 = (jint)((func_mindustry_world_blocks_distribution_StackConveyor_blends_mindustry_world_Tile_int_int_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_blocks_distribution_StackConveyor_blends_mindustry_world_Tile_int_int_R_boolean])(ctx, sp[0].o, sp[1].o, ((jint)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_rotation), (jint(2)));
	if (temp0 == 0) goto label_7;
	}
	{
	sp[0].o = (jobject)((func_mindustry_world_blocks_distribution_StackConveyor$StackConveyorBuild_back_R_mindustry_gen_Building) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_world_blocks_distribution_StackConveyor$StackConveyorBuild_back_R_mindustry_gen_Building])(ctx, (frame[0].o));
	frame[4].o = sp[0].o;
	if ((isInstance(ctx, (frame[4].o), &class_mindustry_world_blocks_distribution_StackConveyor$StackConveyorBuild)) == 0) goto label_6;
	}
	{
	frame[3].o = (checkCast(ctx, &class_mindustry_world_blocks_distribution_StackConveyor$StackConveyorBuild, (frame[4].o)));
	if (((jint)((mindustry_world_blocks_distribution_StackConveyor$StackConveyorBuild *) NULL_CHECK((frame[3].o)))->F_state) != (jint(2))) goto label_6;
	}
label_7:;
	{
	((mindustry_world_blocks_distribution_StackConveyor$StackConveyorBuild *) NULL_CHECK((frame[0].o)))->F_state = (jint(1));
	}
label_6:;
	{
	LINE_NUMBER(227);
	sp[0].o = (jobject)getStackConveyor(frame[0].o);
	if (!sp[0].o || ((jint)((mindustry_world_blocks_distribution_StackConveyor *) NULL_CHECK(sp[0].o))->F_outputRouter) == 0) goto label_9;
	}
	{
	if (((jint)ARRAY_ACCESS(jint, (frame[2].o), (jint(0)))) != 0) goto label_9;
	}
	{
	sp[0].o = (jobject)getStackConveyor(frame[0].o);
	sp[1].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_tile;
	jint temp0 = (jint)((func_mindustry_world_blocks_distribution_StackConveyor_blends_mindustry_world_Tile_int_int_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_blocks_distribution_StackConveyor_blends_mindustry_world_Tile_int_int_R_boolean])(ctx, sp[0].o, sp[1].o, ((jint)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_rotation), (jint(0)));
	if (temp0 != 0) goto label_9;
	}
	{
	sp[0].o = (jobject)getStackConveyor(frame[0].o);
	sp[1].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_tile;
	jint temp0 = (jint)((func_mindustry_world_blocks_distribution_StackConveyor_blends_mindustry_world_Tile_int_int_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_blocks_distribution_StackConveyor_blends_mindustry_world_Tile_int_int_R_boolean])(ctx, sp[0].o, sp[1].o, ((jint)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_rotation), (jint(2)));
	if (temp0 == 0) goto label_9;
	}
	{
	((mindustry_world_blocks_distribution_StackConveyor$StackConveyorBuild *) NULL_CHECK((frame[0].o)))->F_state = (jint(2));
	}
label_9:;
	{
	LINE_NUMBER(228);
	sp[0].o = (jobject)getStackConveyor(frame[0].o);
	if (!sp[0].o || ((jint)((mindustry_world_blocks_distribution_StackConveyor *) NULL_CHECK(sp[0].o))->F_outputRouter) != 0) goto label_10;
	}
	{
	sp[0].o = (jobject)((func_mindustry_world_blocks_distribution_StackConveyor$StackConveyorBuild_front_R_mindustry_gen_Building) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_world_blocks_distribution_StackConveyor$StackConveyorBuild_front_R_mindustry_gen_Building])(ctx, (frame[0].o));
	if ((isInstance(ctx, sp[0].o, &class_mindustry_world_blocks_distribution_StackConveyor$StackConveyorBuild)) != 0) goto label_10;
	}
	{
	((mindustry_world_blocks_distribution_StackConveyor$StackConveyorBuild *) NULL_CHECK((frame[0].o)))->F_state = (jint(2));
	}
label_10:;
	{
	LINE_NUMBER(230);
	if ((clinit_mindustry_Vars(ctx), (jint)SF_mindustry_Vars_headless) != 0) goto label_11;
	}
	{
	LINE_NUMBER(231);
	((mindustry_world_blocks_distribution_StackConveyor$StackConveyorBuild *) NULL_CHECK((frame[0].o)))->F_blendprox = (jint(0));
	LINE_NUMBER(233);
	frame[3].i = (jint(0));
	}
label_14:;
	{
	if ((frame[3].i) >= (jint(4))) goto label_11;
	}
	{
	LINE_NUMBER(234);
	sp[0].o = (jobject)((mindustry_world_blocks_distribution_StackConveyor$StackConveyorBuild *) NULL_CHECK((frame[0].o)))->F_this$0;
	sp[1].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_tile;
	jint temp0 = (jint)((func_mindustry_world_blocks_distribution_StackConveyor_blends_mindustry_world_Tile_int_int_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_blocks_distribution_StackConveyor_blends_mindustry_world_Tile_int_int_R_boolean])(ctx, sp[0].o, sp[1].o, ((jint)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_rotation), (frame[3].i));
	if (temp0 == 0) goto label_16;
	}
	{
	if (((jint)((mindustry_world_blocks_distribution_StackConveyor$StackConveyorBuild *) NULL_CHECK((frame[0].o)))->F_state) != (jint(2))) goto label_17;
	}
	{
	sp[0].o = (jobject)((mindustry_world_blocks_distribution_StackConveyor$StackConveyorBuild *) NULL_CHECK((frame[0].o)))->F_this$0;
	if (((jint)((mindustry_world_blocks_distribution_StackConveyor *) NULL_CHECK(sp[0].o))->F_outputRouter) != 0) goto label_17;
	}
	INST_ILOAD(3);
	if ((--sp)->i == 0) goto label_17;
	{
	sp[0].o = frame[0].o;
	jint temp0 = (jint)SM_arc_math_Mathf_mod_int_int_R_int(ctx, (((jint)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_rotation) - (frame[3].i)), (jint(4)));
	sp[0].o = (jobject)((func_mindustry_world_blocks_distribution_StackConveyor$StackConveyorBuild_nearby_int_R_mindustry_gen_Building) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_blocks_distribution_StackConveyor$StackConveyorBuild_nearby_int_R_mindustry_gen_Building])(ctx, sp[0].o, temp0);
	if ((isInstance(ctx, sp[0].o, &class_mindustry_world_blocks_distribution_StackConveyor$StackConveyorBuild)) == 0) goto label_16;
	}
label_17:;
	{
	LINE_NUMBER(235);
	sp[0].o = frame[0].o;
	((mindustry_world_blocks_distribution_StackConveyor$StackConveyorBuild *) NULL_CHECK(sp[0].o))->F_blendprox = (((jint)((mindustry_world_blocks_distribution_StackConveyor$StackConveyorBuild *) NULL_CHECK(sp[0].o))->F_blendprox) | ((jint(1)) << (frame[3].i)));
	}
label_16:;
	{
	LINE_NUMBER(233);
	INST_IINC(3, 1);
	goto label_14;
	}
label_11:;
	{
	LINE_NUMBER(241);
	if (((jint)((mindustry_world_blocks_distribution_StackConveyor$StackConveyorBuild *) NULL_CHECK((frame[0].o)))->F_state) != (jint(1))) goto label_18;
	}
	{
	LINE_NUMBER(242);
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_proximity;
	sp[0].o = (jobject)((func_arc_struct_Seq_iterator_R_java_util_Iterator) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_iterator_R_java_util_Iterator])(ctx, sp[0].o);
	frame[3].o = sp[0].o;
	}
label_20:;
	{
	jint temp0 = (jint)((func_java_util_Iterator_hasNext_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_hasNext_R_boolean, (frame[3].o)))(ctx, (frame[3].o));
	if (temp0 == 0) goto label_18;
	}
	{
	sp[0].o = (jobject)((func_java_util_Iterator_next_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_next_R_java_lang_Object, (frame[3].o)))(ctx, (frame[3].o));
	frame[4].o = (checkCast(ctx, &class_mindustry_gen_Building, sp[0].o));
	LINE_NUMBER(243);
	if ((isInstance(ctx, (frame[4].o), &class_mindustry_world_blocks_distribution_StackConveyor$StackConveyorBuild)) == 0) goto label_22;
	}
	{
	sp[0].o = (jobject)((func_mindustry_gen_Building_front_R_mindustry_gen_Building) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_mindustry_gen_Building_front_R_mindustry_gen_Building])(ctx, (frame[4].o));
	if (sp[0].o != (frame[0].o)) goto label_22;
	}
	{
	LINE_NUMBER(244);
	((mindustry_world_blocks_distribution_StackConveyor$StackConveyorBuild *) NULL_CHECK((frame[0].o)))->F_state = (jint(0));
	LINE_NUMBER(245);
	goto label_18;
	}
label_22:;
	LINE_NUMBER(247);
	goto label_20;
label_18:;
	{
	LINE_NUMBER(251);
	if (((jint)((mindustry_world_blocks_distribution_StackConveyor$StackConveyorBuild *) NULL_CHECK((frame[0].o)))->F_state) == (frame[1].i)) goto label_25;
	}
	{
	LINE_NUMBER(252);
	((mindustry_world_blocks_distribution_StackConveyor$StackConveyorBuild *) NULL_CHECK((frame[0].o)))->F_proxUpdating = (jint(1));
	LINE_NUMBER(253);
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_proximity;
	sp[0].o = (jobject)((func_arc_struct_Seq_iterator_R_java_util_Iterator) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_iterator_R_java_util_Iterator])(ctx, sp[0].o);
	frame[3].o = sp[0].o;
	}
label_28:;
	{
	jint temp0 = (jint)((func_java_util_Iterator_hasNext_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_hasNext_R_boolean, (frame[3].o)))(ctx, (frame[3].o));
	if (temp0 == 0) goto label_29;
	}
	{
	sp[0].o = (jobject)((func_java_util_Iterator_next_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_next_R_java_lang_Object, (frame[3].o)))(ctx, (frame[3].o));
	frame[4].o = (checkCast(ctx, &class_mindustry_gen_Building, sp[0].o));
	LINE_NUMBER(254);
	if ((isInstance(ctx, (frame[4].o), &class_mindustry_world_blocks_distribution_StackConveyor$StackConveyorBuild)) == 0) goto label_31;
	}
	{
	frame[5].o = (checkCast(ctx, &class_mindustry_world_blocks_distribution_StackConveyor$StackConveyorBuild, (frame[4].o)));
	if (((jint)((mindustry_world_blocks_distribution_StackConveyor$StackConveyorBuild *) NULL_CHECK((frame[5].o)))->F_proxUpdating) == 0) goto label_31;
	}
	{
	if (((jint)((mindustry_world_blocks_distribution_StackConveyor$StackConveyorBuild *) NULL_CHECK((frame[5].o)))->F_state) != (jint(2))) goto label_33;
	}
label_31:;
	{
	LINE_NUMBER(255);
	((func_mindustry_gen_Building_onProximityUpdate) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_mindustry_gen_Building_onProximityUpdate])(ctx, (frame[4].o));
	}
label_33:;
	LINE_NUMBER(257);
	goto label_28;
label_29:;
	{
	LINE_NUMBER(258);
	((mindustry_world_blocks_distribution_StackConveyor$StackConveyorBuild *) NULL_CHECK((frame[0].o)))->F_proxUpdating = (jint(0));
	}
label_25:;
	LINE_NUMBER(260);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jbool M_mindustry_world_blocks_distribution_StackConveyor$StackConveyorBuild_canUnload_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/distribution/StackConveyor$StackConveyorBuild:canUnload", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(264);
	if (((jint)((mindustry_world_blocks_distribution_StackConveyor$StackConveyorBuild *) NULL_CHECK((frame[0].o)))->F_state) == (jint(1))) goto label_1;
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

void M_mindustry_world_blocks_distribution_StackConveyor$StackConveyorBuild_updateTile(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/distribution/StackConveyor$StackConveyorBuild:updateTile", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(270);
	if (((jint)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_enabled) == 0) goto label_1;
	}
	{
	jfloat temp0 = (jfloat)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_efficiency;
	sp[0].o = (jobject)((mindustry_world_blocks_distribution_StackConveyor$StackConveyorBuild *) NULL_CHECK((frame[0].o)))->F_this$0;
	jfloat temp1 = temp0 + ((jfloat)((mindustry_world_blocks_distribution_StackConveyor *) NULL_CHECK(sp[0].o))->F_baseEfficiency);
	sp[0].f = temp1;
	sp += 1;
	goto label_2;
	}
label_1:;
	INST_FCONST(1);
label_2:;
	{
	sp -= 1;
	frame[1].f = sp[0].f;
	LINE_NUMBER(273);
	if ((floatCompare(((jfloat)((mindustry_world_blocks_distribution_StackConveyor$StackConveyorBuild *) NULL_CHECK((frame[0].o)))->F_cooldown), (jfloat(0)), -1)) <= 0) goto label_4;
	}
	{
	sp[0].o = frame[0].o;
	jfloat temp0 = (jfloat)((mindustry_world_blocks_distribution_StackConveyor$StackConveyorBuild *) NULL_CHECK((frame[0].o)))->F_cooldown;
	sp[1].o = (jobject)((mindustry_world_blocks_distribution_StackConveyor$StackConveyorBuild *) NULL_CHECK((frame[0].o)))->F_this$0;
	jfloat temp1 = ((jfloat)((mindustry_world_blocks_distribution_StackConveyor *) NULL_CHECK(sp[1].o))->F_speed) * (frame[1].f);
	jfloat temp2 = (jfloat)((func_mindustry_world_blocks_distribution_StackConveyor$StackConveyorBuild_delta_R_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_world_blocks_distribution_StackConveyor$StackConveyorBuild_delta_R_float])(ctx, (frame[0].o));
	jfloat temp3 = temp0 - (temp1 * temp2);
	jfloat temp4 = jfloat(0);
	sp[1].o = (jobject)((mindustry_world_blocks_distribution_StackConveyor$StackConveyorBuild *) NULL_CHECK((frame[0].o)))->F_this$0;
	jfloat temp5 = (jfloat)SM_arc_math_Mathf_clamp_float_float_float_R_float(ctx, temp3, temp4, ((jfloat)((mindustry_world_blocks_distribution_StackConveyor *) NULL_CHECK(sp[1].o))->F_recharge));
	((mindustry_world_blocks_distribution_StackConveyor$StackConveyorBuild *) NULL_CHECK(sp[0].o))->F_cooldown = temp5;
	}
label_4:;
	{
	LINE_NUMBER(276);
	if (((jint)((mindustry_world_blocks_distribution_StackConveyor$StackConveyorBuild *) NULL_CHECK((frame[0].o)))->F_link) != (jint(-1))) goto label_5;
	}
	popStackFrame(ctx);
	INST_RETURN();
label_5:;
	{
	LINE_NUMBER(279);
	if ((floatCompare(((jfloat)((mindustry_world_blocks_distribution_StackConveyor$StackConveyorBuild *) NULL_CHECK((frame[0].o)))->F_cooldown), (jfloat(0)), -1)) <= 0) goto label_6;
	}
	popStackFrame(ctx);
	INST_RETURN();
label_6:;
	{
	LINE_NUMBER(282);
	sp[0].o = (jobject)((mindustry_world_blocks_distribution_StackConveyor$StackConveyorBuild *) NULL_CHECK((frame[0].o)))->F_lastItem;
	if (sp[0].o == nullptr) goto label_7;
	}
	{
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_items;
	sp[1].o = (jobject)((mindustry_world_blocks_distribution_StackConveyor$StackConveyorBuild *) NULL_CHECK((frame[0].o)))->F_lastItem;
	jint temp0 = (jint)((func_mindustry_world_modules_ItemModule_has_mindustry_type_Item_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_modules_ItemModule_has_mindustry_type_Item_R_boolean])(ctx, sp[0].o, sp[1].o);
	if (temp0 != 0) goto label_8;
	}
label_7:;
	{
	LINE_NUMBER(283);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_items;
	sp[1].o = (jobject)((func_mindustry_world_modules_ItemModule_first_R_mindustry_type_Item) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_mindustry_world_modules_ItemModule_first_R_mindustry_type_Item])(ctx, sp[1].o);
	((mindustry_world_blocks_distribution_StackConveyor$StackConveyorBuild *) NULL_CHECK(sp[0].o))->F_lastItem = (jref) sp[1].o;
	}
label_8:;
	{
	LINE_NUMBER(287);
	if (((jint)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_enabled) != 0) goto label_9;
	}
	popStackFrame(ctx);
	INST_RETURN();
label_9:;
	{
	LINE_NUMBER(289);
	if (((jint)((mindustry_world_blocks_distribution_StackConveyor$StackConveyorBuild *) NULL_CHECK((frame[0].o)))->F_state) != (jint(2))) goto label_10;
	}
label_11:;
	{
	LINE_NUMBER(290);
	sp[0].o = (jobject)((mindustry_world_blocks_distribution_StackConveyor$StackConveyorBuild *) NULL_CHECK((frame[0].o)))->F_lastItem;
	if (sp[0].o == nullptr) goto label_12;
	}
	{
	sp[0].o = (jobject)((mindustry_world_blocks_distribution_StackConveyor$StackConveyorBuild *) NULL_CHECK((frame[0].o)))->F_this$0;
	if (((jint)((mindustry_world_blocks_distribution_StackConveyor *) NULL_CHECK(sp[0].o))->F_outputRouter) != 0) goto label_12;
	}
	{
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((mindustry_world_blocks_distribution_StackConveyor$StackConveyorBuild *) NULL_CHECK((frame[0].o)))->F_lastItem;
	jint temp0 = (jint)((func_mindustry_world_blocks_distribution_StackConveyor$StackConveyorBuild_moveForward_mindustry_type_Item_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_blocks_distribution_StackConveyor$StackConveyorBuild_moveForward_mindustry_type_Item_R_boolean])(ctx, sp[0].o, sp[1].o);
	if (temp0 == 0) goto label_13;
	}
	goto label_14;
label_12:;
	{
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((mindustry_world_blocks_distribution_StackConveyor$StackConveyorBuild *) NULL_CHECK((frame[0].o)))->F_lastItem;
	jint temp0 = (jint)((func_mindustry_world_blocks_distribution_StackConveyor$StackConveyorBuild_dump_mindustry_type_Item_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_blocks_distribution_StackConveyor$StackConveyorBuild_dump_mindustry_type_Item_R_boolean])(ctx, sp[0].o, sp[1].o);
	if (temp0 == 0) goto label_13;
	}
label_14:;
	{
	LINE_NUMBER(291);
	sp[0].o = (jobject)((mindustry_world_blocks_distribution_StackConveyor$StackConveyorBuild *) NULL_CHECK((frame[0].o)))->F_this$0;
	if (((jint)((mindustry_world_blocks_distribution_StackConveyor *) NULL_CHECK(sp[0].o))->F_outputRouter) != 0) goto label_15;
	}
	{
	LINE_NUMBER(292);
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_items;
	sp[1].o = (jobject)((mindustry_world_blocks_distribution_StackConveyor$StackConveyorBuild *) NULL_CHECK((frame[0].o)))->F_lastItem;
	((func_mindustry_world_modules_ItemModule_remove_mindustry_type_Item_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_modules_ItemModule_remove_mindustry_type_Item_int])(ctx, sp[0].o, sp[1].o, (jint(1)));
	}
label_15:;
	{
	LINE_NUMBER(295);
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_items;
	sp[1].o = (jobject)((mindustry_world_blocks_distribution_StackConveyor$StackConveyorBuild *) NULL_CHECK((frame[0].o)))->F_lastItem;
	jint temp0 = (jint)((func_mindustry_world_modules_ItemModule_has_mindustry_type_Item_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_modules_ItemModule_has_mindustry_type_Item_R_boolean])(ctx, sp[0].o, sp[1].o);
	if (temp0 != 0) goto label_11;
	}
	{
	LINE_NUMBER(296);
	((func_mindustry_world_blocks_distribution_StackConveyor$StackConveyorBuild_poofOut) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_world_blocks_distribution_StackConveyor$StackConveyorBuild_poofOut])(ctx, (frame[0].o));
	LINE_NUMBER(297);
	((mindustry_world_blocks_distribution_StackConveyor$StackConveyorBuild *) NULL_CHECK((frame[0].o)))->F_lastItem = (jref) (jobject(nullptr));
	LINE_NUMBER(298);
	goto label_13;
	}
label_10:;
	{
	LINE_NUMBER(302);
	if (((jint)((mindustry_world_blocks_distribution_StackConveyor$StackConveyorBuild *) NULL_CHECK((frame[0].o)))->F_state) != (jint(1))) goto label_20;
	}
	{
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_items;
	jint temp0 = (jint)((func_mindustry_world_modules_ItemModule_total_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_modules_ItemModule_total_R_int])(ctx, sp[0].o);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((mindustry_world_blocks_distribution_StackConveyor$StackConveyorBuild *) NULL_CHECK((frame[0].o)))->F_lastItem;
	jint temp1 = (jint)((func_mindustry_world_blocks_distribution_StackConveyor$StackConveyorBuild_getMaximumAccepted_mindustry_type_Item_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_blocks_distribution_StackConveyor$StackConveyorBuild_getMaximumAccepted_mindustry_type_Item_R_int])(ctx, sp[0].o, sp[1].o);
	if (temp0 < temp1) goto label_13;
	}
label_20:;
	{
	LINE_NUMBER(303);
	sp[0].o = (jobject)((func_mindustry_world_blocks_distribution_StackConveyor$StackConveyorBuild_front_R_mindustry_gen_Building) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_world_blocks_distribution_StackConveyor$StackConveyorBuild_front_R_mindustry_gen_Building])(ctx, (frame[0].o));
	frame[3].o = sp[0].o;
	if ((isInstance(ctx, (frame[3].o), &class_mindustry_world_blocks_distribution_StackConveyor$StackConveyorBuild)) == 0) goto label_13;
	}
	{
	frame[2].o = (checkCast(ctx, &class_mindustry_world_blocks_distribution_StackConveyor$StackConveyorBuild, (frame[3].o)));
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[2].o)))->F_team;
	sp[1].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_team;
	if (sp[0].o != sp[1].o) goto label_13;
	}
	{
	if (((jint)((mindustry_world_blocks_distribution_StackConveyor$StackConveyorBuild *) NULL_CHECK((frame[2].o)))->F_link) != (jint(-1))) goto label_13;
	}
	{
	LINE_NUMBER(304);
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[2].o)))->F_items;
	sp[1].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_items;
	((func_mindustry_world_modules_ItemModule_add_mindustry_world_modules_ItemModule) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_modules_ItemModule_add_mindustry_world_modules_ItemModule])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(305);
	sp[0].o = frame[2].o;
	sp[1].o = (jobject)((mindustry_world_blocks_distribution_StackConveyor$StackConveyorBuild *) NULL_CHECK((frame[0].o)))->F_lastItem;
	((mindustry_world_blocks_distribution_StackConveyor$StackConveyorBuild *) NULL_CHECK(sp[0].o))->F_lastItem = (jref) sp[1].o;
	LINE_NUMBER(306);
	sp[0].o = frame[2].o;
	sp[1].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_tile;
	jint temp0 = (jint)((func_mindustry_world_Tile_pos_R_int) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_mindustry_world_Tile_pos_R_int])(ctx, sp[1].o);
	((mindustry_world_blocks_distribution_StackConveyor$StackConveyorBuild *) NULL_CHECK(sp[0].o))->F_link = temp0;
	LINE_NUMBER(308);
	((mindustry_world_blocks_distribution_StackConveyor$StackConveyorBuild *) NULL_CHECK((frame[0].o)))->F_link = (jint(-1));
	LINE_NUMBER(309);
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_items;
	((func_mindustry_world_modules_ItemModule_clear) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_modules_ItemModule_clear])(ctx, sp[0].o);
	LINE_NUMBER(311);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((mindustry_world_blocks_distribution_StackConveyor$StackConveyorBuild *) NULL_CHECK((frame[0].o)))->F_this$0;
	((mindustry_world_blocks_distribution_StackConveyor$StackConveyorBuild *) NULL_CHECK(sp[0].o))->F_cooldown = ((jfloat)((mindustry_world_blocks_distribution_StackConveyor *) NULL_CHECK(sp[1].o))->F_recharge);
	LINE_NUMBER(312);
	((mindustry_world_blocks_distribution_StackConveyor$StackConveyorBuild *) NULL_CHECK((frame[2].o)))->F_cooldown = (jfloat(1));
	}
label_13:;
	LINE_NUMBER(316);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_world_blocks_distribution_StackConveyor$StackConveyorBuild_overwrote_arc_struct_Seq(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/distribution/StackConveyor$StackConveyorBuild:overwrote", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(320);
	sp[0].o = (jobject)((func_arc_struct_Seq_first_R_java_lang_Object) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_struct_Seq_first_R_java_lang_Object])(ctx, (frame[1].o));
	frame[3].o = sp[0].o;
	if ((isInstance(ctx, (frame[3].o), &class_mindustry_world_blocks_distribution_Conveyor$ConveyorBuild)) == 0) goto label_1;
	}
	{
	frame[2].o = (checkCast(ctx, &class_mindustry_world_blocks_distribution_Conveyor$ConveyorBuild, (frame[3].o)));
	LINE_NUMBER(321);
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[2].o)))->F_items;
	sp[0].o = (jobject)((func_mindustry_world_modules_ItemModule_first_R_mindustry_type_Item) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_modules_ItemModule_first_R_mindustry_type_Item])(ctx, sp[0].o);
	frame[3].o = sp[0].o;
	LINE_NUMBER(322);
	if ((frame[3].o) == nullptr) goto label_1;
	}
	{
	LINE_NUMBER(323);
	sp[0].o = frame[0].o;
	sp[1].o = frame[3].o;
	sp[2].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[2].o)))->F_items;
	jint temp0 = (jint)((func_mindustry_world_modules_ItemModule_get_mindustry_type_Item_R_int) ((void **) nullCheck(ctx, sp[2].o)->vtable)[VTABLE_mindustry_world_modules_ItemModule_get_mindustry_type_Item_R_int])(ctx, sp[2].o, (frame[3].o));
	((func_mindustry_world_blocks_distribution_StackConveyor$StackConveyorBuild_handleStack_mindustry_type_Item_int_mindustry_gen_Teamc) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_blocks_distribution_StackConveyor$StackConveyorBuild_handleStack_mindustry_type_Item_int_mindustry_gen_Teamc])(ctx, sp[0].o, sp[1].o, temp0, (jobject(nullptr)));
	}
label_1:;
	LINE_NUMBER(326);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jbool M_mindustry_world_blocks_distribution_StackConveyor$StackConveyorBuild_shouldAmbientSound_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/distribution/StackConveyor$StackConveyorBuild:shouldAmbientSound", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(330);
	popStackFrame(ctx);
	return (jint(0));
	}

	popStackFrame(ctx);
}

void M_mindustry_world_blocks_distribution_StackConveyor$StackConveyorBuild_poofIn(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/distribution/StackConveyor$StackConveyorBuild:poofIn", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(334);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_tile;
	jint temp0 = (jint)((func_mindustry_world_Tile_pos_R_int) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_mindustry_world_Tile_pos_R_int])(ctx, sp[1].o);
	((mindustry_world_blocks_distribution_StackConveyor$StackConveyorBuild *) NULL_CHECK(sp[0].o))->F_link = temp0;
	LINE_NUMBER(335);
	sp[0].o = (jobject)((mindustry_world_blocks_distribution_StackConveyor$StackConveyorBuild *) NULL_CHECK((frame[0].o)))->F_this$0;
	sp[0].o = (jobject)((mindustry_world_blocks_distribution_StackConveyor *) NULL_CHECK(sp[0].o))->F_loadEffect;
	((func_mindustry_entities_Effect_at_arc_math_geom_Position) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_entities_Effect_at_arc_math_geom_Position])(ctx, sp[0].o, (frame[0].o));
	LINE_NUMBER(336);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_world_blocks_distribution_StackConveyor$StackConveyorBuild_poofOut(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/distribution/StackConveyor$StackConveyorBuild:poofOut", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(339);
	sp[0].o = (jobject)((mindustry_world_blocks_distribution_StackConveyor$StackConveyorBuild *) NULL_CHECK((frame[0].o)))->F_this$0;
	sp[0].o = (jobject)((mindustry_world_blocks_distribution_StackConveyor *) NULL_CHECK(sp[0].o))->F_unloadEffect;
	((func_mindustry_entities_Effect_at_arc_math_geom_Position) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_entities_Effect_at_arc_math_geom_Position])(ctx, sp[0].o, (frame[0].o));
	LINE_NUMBER(340);
	((mindustry_world_blocks_distribution_StackConveyor$StackConveyorBuild *) NULL_CHECK((frame[0].o)))->F_link = (jint(-1));
	LINE_NUMBER(341);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jint M_mindustry_world_blocks_distribution_StackConveyor$StackConveyorBuild_acceptStack_mindustry_type_Item_int_mindustry_gen_Teamc_R_int(jcontext ctx, jobject self, jobject param0, jint param1, jobject param2) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/distribution/StackConveyor$StackConveyorBuild:acceptStack", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	frame[3].o = param2;
	{
	LINE_NUMBER(345);
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_items;
	jint temp0 = (jint)((func_mindustry_world_modules_ItemModule_any_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_modules_ItemModule_any_R_boolean])(ctx, sp[0].o);
	if (temp0 == 0) goto label_1;
	}
	{
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_items;
	jint temp0 = (jint)((func_mindustry_world_modules_ItemModule_has_mindustry_type_Item_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_modules_ItemModule_has_mindustry_type_Item_R_boolean])(ctx, sp[0].o, (frame[1].o));
	if (temp0 != 0) goto label_1;
	}
	INST_ICONST(0);
	popStackFrame(ctx);
	INST_IRETURN();
label_1:;
	{
	LINE_NUMBER(346);
	jint temp0 = (jint)M_mindustry_gen_Building_acceptStack_mindustry_type_Item_int_mindustry_gen_Teamc_R_int(ctx, (frame[0].o), (frame[1].o), (frame[2].i), (frame[3].o));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

void M_mindustry_world_blocks_distribution_StackConveyor$StackConveyorBuild_handleItem_mindustry_gen_Building_mindustry_type_Item(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/distribution/StackConveyor$StackConveyorBuild:handleItem", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(351);
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_items;
	jint temp0 = (jint)((func_mindustry_world_modules_ItemModule_empty_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_modules_ItemModule_empty_R_boolean])(ctx, sp[0].o);
	if (temp0 == 0) goto label_1;
	}
	{
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_tile;
	if (sp[0].o == nullptr) goto label_1;
	}
	INST_ALOAD(0);
	POP_N(1); // Pop method args
	((func_mindustry_world_blocks_distribution_StackConveyor$StackConveyorBuild_poofIn) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_blocks_distribution_StackConveyor$StackConveyorBuild_poofIn])(ctx, sp[0].o);
label_1:;
	{
	LINE_NUMBER(352);
	M_mindustry_gen_Building_handleItem_mindustry_gen_Building_mindustry_type_Item(ctx, (frame[0].o), (frame[1].o), (frame[2].o));
	LINE_NUMBER(353);
	((mindustry_world_blocks_distribution_StackConveyor$StackConveyorBuild *) NULL_CHECK((frame[0].o)))->F_lastItem = (jref) (frame[2].o);
	LINE_NUMBER(354);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_world_blocks_distribution_StackConveyor$StackConveyorBuild_handleStack_mindustry_type_Item_int_mindustry_gen_Teamc(jcontext ctx, jobject self, jobject param0, jint param1, jobject param2) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/distribution/StackConveyor$StackConveyorBuild:handleStack", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	frame[3].o = param2;
	{
	LINE_NUMBER(358);
	if ((frame[2].i) > 0) goto label_1;
	}
	popStackFrame(ctx);
	INST_RETURN();
label_1:;
	{
	LINE_NUMBER(359);
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_items;
	jint temp0 = (jint)((func_mindustry_world_modules_ItemModule_empty_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_modules_ItemModule_empty_R_boolean])(ctx, sp[0].o);
	if (temp0 == 0) goto label_2;
	}
	{
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_tile;
	if (sp[0].o == nullptr) goto label_2;
	}
	INST_ALOAD(0);
	POP_N(1); // Pop method args
	((func_mindustry_world_blocks_distribution_StackConveyor$StackConveyorBuild_poofIn) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_blocks_distribution_StackConveyor$StackConveyorBuild_poofIn])(ctx, sp[0].o);
label_2:;
	{
	LINE_NUMBER(360);
	M_mindustry_gen_Building_handleStack_mindustry_type_Item_int_mindustry_gen_Teamc(ctx, (frame[0].o), (frame[1].o), (frame[2].i), (frame[3].o));
	LINE_NUMBER(361);
	((mindustry_world_blocks_distribution_StackConveyor$StackConveyorBuild *) NULL_CHECK((frame[0].o)))->F_lastItem = (jref) (frame[1].o);
	LINE_NUMBER(362);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jint M_mindustry_world_blocks_distribution_StackConveyor$StackConveyorBuild_removeStack_mindustry_type_Item_int_R_int(jcontext ctx, jobject self, jobject param0, jint param1) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/distribution/StackConveyor$StackConveyorBuild:removeStack", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(367);
	jint temp0 = (jint)M_mindustry_gen_Building_removeStack_mindustry_type_Item_int_R_int(ctx, (frame[0].o), (frame[1].o), (frame[2].i));
	frame[3].i = temp0;
	}
	popExceptionFrame(frameRef);
	{
	LINE_NUMBER(369);
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_items;
	jint temp0 = (jint)((func_mindustry_world_modules_ItemModule_empty_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_modules_ItemModule_empty_R_boolean])(ctx, sp[0].o);
	if (temp0 == 0) goto label_6;
	}
	INST_ALOAD(0);
	POP_N(1); // Pop method args
	((func_mindustry_world_blocks_distribution_StackConveyor$StackConveyorBuild_poofOut) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_blocks_distribution_StackConveyor$StackConveyorBuild_poofOut])(ctx, sp[0].o);
label_6:;
	{
	LINE_NUMBER(367);
	popStackFrame(ctx);
	return (frame[3].i);
	}
label_2:;
label_5: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	LINE_NUMBER(369);
	INST_ASTORE(4);
	popExceptionFrame(frameRef);
	{
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_items;
	jint temp0 = (jint)((func_mindustry_world_modules_ItemModule_empty_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_modules_ItemModule_empty_R_boolean])(ctx, sp[0].o);
	if (temp0 == 0) goto label_7;
	}
	INST_ALOAD(0);
	POP_N(1); // Pop method args
	((func_mindustry_world_blocks_distribution_StackConveyor$StackConveyorBuild_poofOut) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_blocks_distribution_StackConveyor$StackConveyorBuild_poofOut])(ctx, sp[0].o);
label_7:;
	{
	LINE_NUMBER(370);
	throwException(ctx, (frame[4].o));	}

	popStackFrame(ctx);
}

void M_mindustry_world_blocks_distribution_StackConveyor$StackConveyorBuild_itemTaken_mindustry_type_Item(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/distribution/StackConveyor$StackConveyorBuild:itemTaken", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(375);
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_items;
	jint temp0 = (jint)((func_mindustry_world_modules_ItemModule_empty_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_modules_ItemModule_empty_R_boolean])(ctx, sp[0].o);
	if (temp0 == 0) goto label_1;
	}
	INST_ALOAD(0);
	POP_N(1); // Pop method args
	((func_mindustry_world_blocks_distribution_StackConveyor$StackConveyorBuild_poofOut) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_blocks_distribution_StackConveyor$StackConveyorBuild_poofOut])(ctx, sp[0].o);
label_1:;
	LINE_NUMBER(376);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jbool M_mindustry_world_blocks_distribution_StackConveyor$StackConveyorBuild_acceptItem_mindustry_gen_Building_mindustry_type_Item_R_boolean(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/distribution/StackConveyor$StackConveyorBuild:acceptItem", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(380);
	if ((frame[0].o) != (frame[1].o)) goto label_1;
	}
	{
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_items;
	jint temp0 = (jint)((func_mindustry_world_modules_ItemModule_total_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_modules_ItemModule_total_R_int])(ctx, sp[0].o);
	sp[0].o = (jobject)((mindustry_world_blocks_distribution_StackConveyor$StackConveyorBuild *) NULL_CHECK((frame[0].o)))->F_this$0;
	if (temp0 >= ((jint)((mindustry_world_Block *) NULL_CHECK(sp[0].o))->F_itemCapacity)) goto label_2;
	}
	{
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_items;
	jint temp0 = (jint)((func_mindustry_world_modules_ItemModule_any_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_modules_ItemModule_any_R_boolean])(ctx, sp[0].o);
	if (temp0 == 0) goto label_3;
	}
	{
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_items;
	jint temp0 = (jint)((func_mindustry_world_modules_ItemModule_has_mindustry_type_Item_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_modules_ItemModule_has_mindustry_type_Item_R_boolean])(ctx, sp[0].o, (frame[2].o));
	if (temp0 == 0) goto label_2;
	}
label_3:;
	INST_ICONST(1);
	goto label_4;
label_2:;
	INST_ICONST(0);
label_4:;
	popStackFrame(ctx);
	INST_IRETURN();
label_1:;
	{
	LINE_NUMBER(381);
	jfloat temp0 = (jfloat)((mindustry_world_blocks_distribution_StackConveyor$StackConveyorBuild *) NULL_CHECK((frame[0].o)))->F_cooldown;
	sp[0].o = (jobject)((mindustry_world_blocks_distribution_StackConveyor$StackConveyorBuild *) NULL_CHECK((frame[0].o)))->F_this$0;
	if ((floatCompare(temp0, (((jfloat)((mindustry_world_blocks_distribution_StackConveyor *) NULL_CHECK(sp[0].o))->F_recharge) - (jfloat(1))), -1)) <= 0) goto label_5;
	}
	INST_ICONST(0);
	popStackFrame(ctx);
	INST_IRETURN();
label_5:;
	{
	LINE_NUMBER(382);
	if (((jint)((mindustry_world_blocks_distribution_StackConveyor$StackConveyorBuild *) NULL_CHECK((frame[0].o)))->F_state) != (jint(1))) goto label_6;
	}
	{
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_items;
	LINE_NUMBER(383);
	jint temp0 = (jint)((func_mindustry_world_modules_ItemModule_any_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_modules_ItemModule_any_R_boolean])(ctx, sp[0].o);
	if (temp0 == 0) goto label_8;
	}
	{
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_items;
	jint temp0 = (jint)((func_mindustry_world_modules_ItemModule_has_mindustry_type_Item_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_modules_ItemModule_has_mindustry_type_Item_R_boolean])(ctx, sp[0].o, (frame[2].o));
	if (temp0 == 0) goto label_6;
	}
label_8:;
	{
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_items;
	LINE_NUMBER(384);
	jint temp0 = (jint)((func_mindustry_world_modules_ItemModule_total_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_modules_ItemModule_total_R_int])(ctx, sp[0].o);
	jint temp1 = (jint)((func_mindustry_world_blocks_distribution_StackConveyor$StackConveyorBuild_getMaximumAccepted_mindustry_type_Item_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_world_blocks_distribution_StackConveyor$StackConveyorBuild_getMaximumAccepted_mindustry_type_Item_R_int])(ctx, (frame[0].o), (frame[2].o));
	if (temp0 >= temp1) goto label_6;
	}
	{
	sp[0].o = frame[0].o;
	LINE_NUMBER(385);
	sp[0].o = (jobject)((func_mindustry_world_blocks_distribution_StackConveyor$StackConveyorBuild_front_R_mindustry_gen_Building) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_blocks_distribution_StackConveyor$StackConveyorBuild_front_R_mindustry_gen_Building])(ctx, sp[0].o);
	if (sp[0].o == (frame[1].o)) goto label_6;
	}
	INST_ICONST(1);
	goto label_11;
label_6:;
	INST_ICONST(0);
label_11:;
	LINE_NUMBER(382);
	popStackFrame(ctx);
	INST_IRETURN();

	popStackFrame(ctx);
}

void M_mindustry_world_blocks_distribution_StackConveyor$StackConveyorBuild_write_arc_util_io_Writes(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/distribution/StackConveyor$StackConveyorBuild:write", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(390);
	M_mindustry_gen_Building_write_arc_util_io_Writes(ctx, (frame[0].o), (frame[1].o));
	LINE_NUMBER(392);
	((func_arc_util_io_Writes_i_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_util_io_Writes_i_int])(ctx, (frame[1].o), ((jint)((mindustry_world_blocks_distribution_StackConveyor$StackConveyorBuild *) NULL_CHECK((frame[0].o)))->F_link));
	LINE_NUMBER(393);
	((func_arc_util_io_Writes_f_float) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_util_io_Writes_f_float])(ctx, (frame[1].o), ((jfloat)((mindustry_world_blocks_distribution_StackConveyor$StackConveyorBuild *) NULL_CHECK((frame[0].o)))->F_cooldown));
	LINE_NUMBER(394);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_world_blocks_distribution_StackConveyor$StackConveyorBuild_read_arc_util_io_Reads_byte(jcontext ctx, jobject self, jobject param0, jbyte param1) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/distribution/StackConveyor$StackConveyorBuild:read", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(398);
	M_mindustry_gen_Building_read_arc_util_io_Reads_byte(ctx, (frame[0].o), (frame[1].o), (frame[2].i));
	LINE_NUMBER(400);
	sp[0].o = frame[0].o;
	jint temp0 = (jint)((func_arc_util_io_Reads_i_R_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_util_io_Reads_i_R_int])(ctx, (frame[1].o));
	((mindustry_world_blocks_distribution_StackConveyor$StackConveyorBuild *) NULL_CHECK(sp[0].o))->F_link = temp0;
	LINE_NUMBER(401);
	sp[0].o = frame[0].o;
	jfloat temp1 = (jfloat)((func_arc_util_io_Reads_f_R_float) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_util_io_Reads_f_R_float])(ctx, (frame[1].o));
	((mindustry_world_blocks_distribution_StackConveyor$StackConveyorBuild *) NULL_CHECK(sp[0].o))->F_cooldown = temp1;
	LINE_NUMBER(402);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_items;
	sp[1].o = (jobject)((func_mindustry_world_modules_ItemModule_first_R_mindustry_type_Item) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_mindustry_world_modules_ItemModule_first_R_mindustry_type_Item])(ctx, sp[1].o);
	((mindustry_world_blocks_distribution_StackConveyor$StackConveyorBuild *) NULL_CHECK(sp[0].o))->F_lastItem = (jref) sp[1].o;
	LINE_NUMBER(403);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void *vtable_mindustry_world_blocks_distribution_StackConveyor$StackConveyorBuild[] {
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
	(void *) M_mindustry_world_blocks_distribution_StackConveyor$StackConveyorBuild_shouldAmbientSound_R_boolean,
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
	(void *) M_mindustry_world_blocks_distribution_StackConveyor$StackConveyorBuild_write_arc_util_io_Writes,
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
	(void *) M_mindustry_world_blocks_distribution_StackConveyor$StackConveyorBuild_read_arc_util_io_Reads_byte,
	(void *) M_mindustry_gen_Building_create_mindustry_world_Block_mindustry_game_Team_R_mindustry_gen_Building,
	(void *) M_mindustry_gen_Building_getLiquidDestination_mindustry_gen_Building_mindustry_type_Liquid_R_mindustry_gen_Building,
	(void *) M_mindustry_gen_Building_init_mindustry_world_Tile_mindustry_game_Team_boolean_int_R_mindustry_gen_Building,
	(void *) M_mindustry_gen_Building_nearby_int_int_R_mindustry_gen_Building,
	(void *) M_mindustry_gen_Building_nearby_int_R_mindustry_gen_Building,
	(void *) M_mindustry_gen_Building_getCursor_R_arc_Graphics$Cursor,
	(void *) M_mindustry_gen_Building_getDisplayIcon_R_arc_graphics_g2d_TextureRegion,
	(void *) M_mindustry_gen_Building_getPowerConnections_arc_struct_Seq_R_arc_struct_Seq,
	(void *) M_mindustry_gen_Building_absorbLasers_R_boolean,
	(void *) M_mindustry_world_blocks_distribution_StackConveyor$StackConveyorBuild_acceptItem_mindustry_gen_Building_mindustry_type_Item_R_boolean,
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
	(void *) M_mindustry_world_blocks_distribution_StackConveyor$StackConveyorBuild_canUnload_R_boolean,
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
	(void *) M_mindustry_world_blocks_distribution_StackConveyor$StackConveyorBuild_acceptStack_mindustry_type_Item_int_mindustry_gen_Teamc_R_int,
	(void *) M_mindustry_gen_Building_explosionItemCap_R_int,
	(void *) M_mindustry_gen_Building_getMaximumAccepted_mindustry_type_Item_R_int,
	(void *) M_mindustry_gen_Building_moduleBitmask_R_int,
	(void *) M_mindustry_gen_Building_pos_R_int,
	(void *) M_mindustry_world_blocks_distribution_StackConveyor$StackConveyorBuild_removeStack_mindustry_type_Item_int_R_int,
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
	(void *) M_mindustry_world_blocks_distribution_StackConveyor$StackConveyorBuild_draw,
	(void *) M_mindustry_world_blocks_distribution_StackConveyor$StackConveyorBuild_drawCached,
	(void *) M_mindustry_gen_Building_drawConfigure,
	(void *) M_mindustry_world_blocks_distribution_StackConveyor$StackConveyorBuild_drawCracks,
	(void *) M_mindustry_gen_Building_drawDisabled,
	(void *) M_mindustry_gen_Building_drawItemSelection_mindustry_ctype_UnlockableContent,
	(void *) M_mindustry_gen_Building_drawLight,
	(void *) M_mindustry_gen_Building_drawLiquidLight_mindustry_type_Liquid_float,
	(void *) M_mindustry_gen_Building_drawSelect,
	(void *) M_mindustry_gen_Building_drawStatus,
	(void *) M_mindustry_gen_Building_drawTeam,
	(void *) M_mindustry_gen_Building_drawTeamTop,
	(void *) M_mindustry_world_blocks_distribution_StackConveyor$StackConveyorBuild_dropped,
	(void *) M_mindustry_gen_Building_dumpLiquid_mindustry_type_Liquid,
	(void *) M_mindustry_gen_Building_dumpLiquid_mindustry_type_Liquid_float,
	(void *) M_mindustry_gen_Building_dumpLiquid_mindustry_type_Liquid_float_int,
	(void *) M_mindustry_gen_Building_eachEdge_arc_func_Cons,
	(void *) M_mindustry_gen_Building_getStackOffset_mindustry_type_Item_arc_math_geom_Vec2,
	(void *) M_mindustry_world_blocks_distribution_StackConveyor$StackConveyorBuild_handleItem_mindustry_gen_Building_mindustry_type_Item,
	(void *) M_mindustry_gen_Building_handleLiquid_mindustry_gen_Building_mindustry_type_Liquid_float,
	(void *) M_mindustry_gen_Building_handlePayload_mindustry_gen_Building_mindustry_world_blocks_payloads_Payload,
	(void *) M_mindustry_world_blocks_distribution_StackConveyor$StackConveyorBuild_handleStack_mindustry_type_Item_int_mindustry_gen_Teamc,
	(void *) M_mindustry_gen_Building_handleString_java_lang_Object,
	(void *) M_mindustry_gen_Building_handleUnitPayload_mindustry_gen_Unit_arc_func_Cons,
	(void *) M_mindustry_gen_Building_healthChanged,
	(void *) M_mindustry_gen_Building_incrementDump_int,
	(void *) M_mindustry_world_blocks_distribution_StackConveyor$StackConveyorBuild_itemTaken_mindustry_type_Item,
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
	(void *) M_mindustry_world_blocks_distribution_StackConveyor$StackConveyorBuild_onProximityUpdate,
	(void *) M_mindustry_gen_Building_onRemoved,
	(void *) M_mindustry_world_blocks_distribution_StackConveyor$StackConveyorBuild_overwrote_arc_struct_Seq,
	(void *) M_mindustry_world_blocks_distribution_StackConveyor$StackConveyorBuild_payloadDraw,
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
	(void *) M_mindustry_world_blocks_distribution_StackConveyor$StackConveyorBuild_updateTile,
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
	(void *) M_mindustry_world_blocks_distribution_StackConveyor$StackConveyorBuild_poofIn,
	(void *) M_mindustry_world_blocks_distribution_StackConveyor$StackConveyorBuild_poofOut,
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
	{ "poofIn", "()V" },
	{ "poofOut", "()V" },
};

static FieldMetadata fields[] {
	{ "state", &class_int, offsetof(mindustry_world_blocks_distribution_StackConveyor$StackConveyorBuild, F_state), "I", 1 },
	{ "blendprox", &class_int, offsetof(mindustry_world_blocks_distribution_StackConveyor$StackConveyorBuild, F_blendprox), "I", 1 },
	{ "link", &class_int, offsetof(mindustry_world_blocks_distribution_StackConveyor$StackConveyorBuild, F_link), "I", 1 },
	{ "cooldown", &class_float, offsetof(mindustry_world_blocks_distribution_StackConveyor$StackConveyorBuild, F_cooldown), "F", 1 },
	{ "lastItem", &class_mindustry_type_Item, offsetof(mindustry_world_blocks_distribution_StackConveyor$StackConveyorBuild, F_lastItem), "Lmindustry/type/Item;", 1 },
	{ "proxUpdating", &class_boolean, offsetof(mindustry_world_blocks_distribution_StackConveyor$StackConveyorBuild, F_proxUpdating), "Z", 0 },
	{ "this$0", &class_mindustry_world_blocks_distribution_StackConveyor, offsetof(mindustry_world_blocks_distribution_StackConveyor$StackConveyorBuild, F_this$0), "Lmindustry/world/blocks/distribution/StackConveyor;", 4112 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_mindustry_world_blocks_distribution_StackConveyor$StackConveyorBuild_mindustry_world_blocks_distribution_StackConveyor, 0, "(Lmindustry/world/blocks/distribution/StackConveyor;)V", 1 },
	{ "drawCached", (intptr_t) M_mindustry_world_blocks_distribution_StackConveyor$StackConveyorBuild_drawCached, VTABLE_mindustry_world_blocks_distribution_StackConveyor$StackConveyorBuild_drawCached, "()V", 1 },
	{ "draw", (intptr_t) M_mindustry_world_blocks_distribution_StackConveyor$StackConveyorBuild_draw, VTABLE_mindustry_world_blocks_distribution_StackConveyor$StackConveyorBuild_draw, "()V", 1 },
	{ "dropped", (intptr_t) M_mindustry_world_blocks_distribution_StackConveyor$StackConveyorBuild_dropped, VTABLE_mindustry_world_blocks_distribution_StackConveyor$StackConveyorBuild_dropped, "()V", 1 },
	{ "drawCracks", (intptr_t) M_mindustry_world_blocks_distribution_StackConveyor$StackConveyorBuild_drawCracks, VTABLE_mindustry_world_blocks_distribution_StackConveyor$StackConveyorBuild_drawCracks, "()V", 1 },
	{ "payloadDraw", (intptr_t) M_mindustry_world_blocks_distribution_StackConveyor$StackConveyorBuild_payloadDraw, VTABLE_mindustry_world_blocks_distribution_StackConveyor$StackConveyorBuild_payloadDraw, "()V", 1 },
	{ "onProximityUpdate", (intptr_t) M_mindustry_world_blocks_distribution_StackConveyor$StackConveyorBuild_onProximityUpdate, VTABLE_mindustry_world_blocks_distribution_StackConveyor$StackConveyorBuild_onProximityUpdate, "()V", 1 },
	{ "canUnload", (intptr_t) M_mindustry_world_blocks_distribution_StackConveyor$StackConveyorBuild_canUnload_R_boolean, VTABLE_mindustry_world_blocks_distribution_StackConveyor$StackConveyorBuild_canUnload_R_boolean, "()Z", 1 },
	{ "updateTile", (intptr_t) M_mindustry_world_blocks_distribution_StackConveyor$StackConveyorBuild_updateTile, VTABLE_mindustry_world_blocks_distribution_StackConveyor$StackConveyorBuild_updateTile, "()V", 1 },
	{ "overwrote", (intptr_t) M_mindustry_world_blocks_distribution_StackConveyor$StackConveyorBuild_overwrote_arc_struct_Seq, VTABLE_mindustry_world_blocks_distribution_StackConveyor$StackConveyorBuild_overwrote_arc_struct_Seq, "(Larc/struct/Seq;)V", 1 },
	{ "shouldAmbientSound", (intptr_t) M_mindustry_world_blocks_distribution_StackConveyor$StackConveyorBuild_shouldAmbientSound_R_boolean, VTABLE_mindustry_world_blocks_distribution_StackConveyor$StackConveyorBuild_shouldAmbientSound_R_boolean, "()Z", 1 },
	{ "poofIn", (intptr_t) M_mindustry_world_blocks_distribution_StackConveyor$StackConveyorBuild_poofIn, VTABLE_mindustry_world_blocks_distribution_StackConveyor$StackConveyorBuild_poofIn, "()V", 4 },
	{ "poofOut", (intptr_t) M_mindustry_world_blocks_distribution_StackConveyor$StackConveyorBuild_poofOut, VTABLE_mindustry_world_blocks_distribution_StackConveyor$StackConveyorBuild_poofOut, "()V", 4 },
	{ "acceptStack", (intptr_t) M_mindustry_world_blocks_distribution_StackConveyor$StackConveyorBuild_acceptStack_mindustry_type_Item_int_mindustry_gen_Teamc_R_int, VTABLE_mindustry_world_blocks_distribution_StackConveyor$StackConveyorBuild_acceptStack_mindustry_type_Item_int_mindustry_gen_Teamc_R_int, "(Lmindustry/type/Item;ILmindustry/gen/Teamc;)I", 1 },
	{ "handleItem", (intptr_t) M_mindustry_world_blocks_distribution_StackConveyor$StackConveyorBuild_handleItem_mindustry_gen_Building_mindustry_type_Item, VTABLE_mindustry_world_blocks_distribution_StackConveyor$StackConveyorBuild_handleItem_mindustry_gen_Building_mindustry_type_Item, "(Lmindustry/gen/Building;Lmindustry/type/Item;)V", 1 },
	{ "handleStack", (intptr_t) M_mindustry_world_blocks_distribution_StackConveyor$StackConveyorBuild_handleStack_mindustry_type_Item_int_mindustry_gen_Teamc, VTABLE_mindustry_world_blocks_distribution_StackConveyor$StackConveyorBuild_handleStack_mindustry_type_Item_int_mindustry_gen_Teamc, "(Lmindustry/type/Item;ILmindustry/gen/Teamc;)V", 1 },
	{ "removeStack", (intptr_t) M_mindustry_world_blocks_distribution_StackConveyor$StackConveyorBuild_removeStack_mindustry_type_Item_int_R_int, VTABLE_mindustry_world_blocks_distribution_StackConveyor$StackConveyorBuild_removeStack_mindustry_type_Item_int_R_int, "(Lmindustry/type/Item;I)I", 1 },
	{ "itemTaken", (intptr_t) M_mindustry_world_blocks_distribution_StackConveyor$StackConveyorBuild_itemTaken_mindustry_type_Item, VTABLE_mindustry_world_blocks_distribution_StackConveyor$StackConveyorBuild_itemTaken_mindustry_type_Item, "(Lmindustry/type/Item;)V", 1 },
	{ "acceptItem", (intptr_t) M_mindustry_world_blocks_distribution_StackConveyor$StackConveyorBuild_acceptItem_mindustry_gen_Building_mindustry_type_Item_R_boolean, VTABLE_mindustry_world_blocks_distribution_StackConveyor$StackConveyorBuild_acceptItem_mindustry_gen_Building_mindustry_type_Item_R_boolean, "(Lmindustry/gen/Building;Lmindustry/type/Item;)Z", 1 },
	{ "write", (intptr_t) M_mindustry_world_blocks_distribution_StackConveyor$StackConveyorBuild_write_arc_util_io_Writes, VTABLE_mindustry_world_blocks_distribution_StackConveyor$StackConveyorBuild_write_arc_util_io_Writes, "(Larc/util/io/Writes;)V", 1 },
	{ "read", (intptr_t) M_mindustry_world_blocks_distribution_StackConveyor$StackConveyorBuild_read_arc_util_io_Reads_byte, VTABLE_mindustry_world_blocks_distribution_StackConveyor$StackConveyorBuild_read_arc_util_io_Reads_byte, "(Larc/util/io/Reads;B)V", 1 },
};

Class class_mindustry_world_blocks_distribution_StackConveyor$StackConveyorBuild{
		.nativeName = (intptr_t) "mindustry/world/blocks/distribution/StackConveyor$StackConveyorBuild",
		.parentClass = (intptr_t) &class_mindustry_gen_Building,
		.size = sizeof(mindustry_world_blocks_distribution_StackConveyor$StackConveyorBuild),
		.classVtable = (intptr_t) vtable_mindustry_world_blocks_distribution_StackConveyor$StackConveyorBuild,
		.staticInitializer = (intptr_t) clinit_mindustry_world_blocks_distribution_StackConveyor$StackConveyorBuild,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_mindustry_world_blocks_distribution_StackConveyor$StackConveyorBuild,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) &class_mindustry_world_blocks_distribution_StackConveyor,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 33,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 7,
		.nativeFields = (intptr_t) fields,
		.methodCount = 21,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 312,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_mindustry_world_blocks_distribution_StackConveyor$StackConveyorBuild = registerClass(&class_mindustry_world_blocks_distribution_StackConveyor$StackConveyorBuild);

}

