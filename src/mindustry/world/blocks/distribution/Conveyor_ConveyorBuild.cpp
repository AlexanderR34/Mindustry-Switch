#include "mindustry/world/blocks/distribution/Conveyor_ConveyorBuild.h"
#include "arc/math/geom/Vec2.h"
#include "mindustry/world/Block.h"
#include "mindustry/game/Rules.h"
#include "mindustry/ctype/UnlockableContent.h"
#include "mindustry/logic/LAccess.h"
#include "mindustry/ui/Displayable.h"
#include "arc/graphics/g2d/Draw.h"
#include "java/lang/reflect/Constructor.h"
#include "mindustry/gen/Physicsc.h"
#include "mindustry/core/ContentLoader.h"
#include "arc/util/Tmp.h"
#include "arc/struct/Seq.h"
#include "java/lang/reflect/Method.h"
#include "mindustry/world/Tile.h"
#include "arc/math/geom/Position.h"
#include "mindustry/world/blocks/distribution/Conveyor_ConveyorBuild.h"
#include "arc/math/geom/Geometry.h"
#include "java/lang/Math.h"
#include "arc/math/Mathf.h"
#include "arc/graphics/g2d/TextureRegion.h"
#include "mindustry/gen/Teamc.h"
#include "java/lang/reflect/Field.h"
#include "mindustry/gen/Unit.h"
#include "mindustry/world/Edges.h"
#include "java/lang/annotation/Annotation.h"
#include "arc/util/Time.h"
#include "mindustry/type/Item.h"
#include "arc/util/Nullable.h"
#include "mindustry/world/blocks/distribution/ChainedBuilding.h"
#include "mindustry/world/modules/ItemModule.h"
#include "mindustry/gen/Building.h"
#include "mindustry/world/blocks/distribution/Conveyor.h"
#include "arc/util/io/Reads.h"
#include "java/lang/Object.h"
#include "mindustry/world/blocks/Autotiler.h"
#include "mindustry/world/blocks/Autotiler_SliceMode.h"
#include "mindustry/game/Team.h"
#include "mindustry/Vars.h"
#include "mindustry/core/GameState.h"
#include "mindustry/core/World.h"
#include "arc/util/io/Writes.h"

extern "C" {

static inline mindustry_world_blocks_distribution_Conveyor* getConveyor(jobject self) {
	if (!self) return nullptr;
	auto cb = (mindustry_world_blocks_distribution_Conveyor$ConveyorBuild*)self;
	if (cb->F_this$0) return (mindustry_world_blocks_distribution_Conveyor*)cb->F_this$0;
	if (((mindustry_gen_Building*)self)->F_block) {
		cb->F_this$0 = (jref)((mindustry_gen_Building*)self)->F_block;
		return (mindustry_world_blocks_distribution_Conveyor*)cb->F_this$0;
	}
	return nullptr;
}

void mark_mindustry_world_blocks_distribution_Conveyor$ConveyorBuild(jobject object, jint mark, jint depth) {
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
	auto self = (mindustry_world_blocks_distribution_Conveyor$ConveyorBuild *) object;
	if (self->F_ids)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_ids)->clazz)->markFunction)((jobject) self->F_ids, mark, depth + 1);
	if (self->F_xs)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_xs)->clazz)->markFunction)((jobject) self->F_xs, mark, depth + 1);
	if (self->F_ys)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_ys)->clazz)->markFunction)((jobject) self->F_ys, mark, depth + 1);
	if (self->F_next)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_next)->clazz)->markFunction)((jobject) self->F_next, mark, depth + 1);
	if (self->F_nextc)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_nextc)->clazz)->markFunction)((jobject) self->F_nextc, mark, depth + 1);
	if (self->F_this$0)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_this$0)->clazz)->markFunction)((jobject) self->F_this$0, mark, depth + 1);
}

void clinit_mindustry_world_blocks_distribution_Conveyor$ConveyorBuild(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	clinit_mindustry_gen_Building(ctx);
}

void init_mindustry_world_blocks_distribution_Conveyor$ConveyorBuild_mindustry_world_blocks_distribution_Conveyor(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/distribution/Conveyor$ConveyorBuild:<init>", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_world_blocks_distribution_Conveyor$ConveyorBuild(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(123);
	((mindustry_world_blocks_distribution_Conveyor$ConveyorBuild *) NULL_CHECK((frame[0].o)))->F_this$0 = (jref) (frame[1].o);
	init_mindustry_gen_Building(ctx, (frame[0].o));
	LINE_NUMBER(125);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)createArray(ctx, &class_mindustry_type_Item, (jint(3)));
	((mindustry_world_blocks_distribution_Conveyor$ConveyorBuild *) NULL_CHECK(sp[0].o))->F_ids = (jref) sp[1].o;
	LINE_NUMBER(126);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject) createArray(ctx, &class_float, (jint(3)));
	((mindustry_world_blocks_distribution_Conveyor$ConveyorBuild *) NULL_CHECK(sp[0].o))->F_xs = (jref) sp[1].o;
	sp[0].o = frame[0].o;
	sp[1].o = (jobject) createArray(ctx, &class_float, (jint(3)));
	((mindustry_world_blocks_distribution_Conveyor$ConveyorBuild *) NULL_CHECK(sp[0].o))->F_ys = (jref) sp[1].o;
	LINE_NUMBER(128);
	((mindustry_world_blocks_distribution_Conveyor$ConveyorBuild *) NULL_CHECK((frame[0].o)))->F_len = (jint(0));
	LINE_NUMBER(136);
	((mindustry_world_blocks_distribution_Conveyor$ConveyorBuild *) NULL_CHECK((frame[0].o)))->F_minitem = (jfloat(1));
	LINE_NUMBER(139);
	((mindustry_world_blocks_distribution_Conveyor$ConveyorBuild *) NULL_CHECK((frame[0].o)))->F_blendsclx = (jint(1));
	((mindustry_world_blocks_distribution_Conveyor$ConveyorBuild *) NULL_CHECK((frame[0].o)))->F_blendscly = (jint(1));
	LINE_NUMBER(141);
	((mindustry_world_blocks_distribution_Conveyor$ConveyorBuild *) NULL_CHECK((frame[0].o)))->F_clogHeat = (jfloat(0));
	LINE_NUMBER(123);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_world_blocks_distribution_Conveyor$ConveyorBuild_draw(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[17];
	auto stack = &frame[10];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/distribution/Conveyor$ConveyorBuild:draw", 17 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(145);
	if (((jint)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_enabled) == 0) goto label_1;
	}
	{
	if ((floatCompare(((jfloat)((mindustry_world_blocks_distribution_Conveyor$ConveyorBuild *) NULL_CHECK((frame[0].o)))->F_clogHeat), (jfloat(0.5f)), 1)) > 0) goto label_1;
	}
	{
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	sp[0].o = (jobject)((mindustry_core_GameState *) NULL_CHECK(sp[0].o))->F_rules;
	if (((jint)((mindustry_game_Rules *) NULL_CHECK(sp[0].o))->F_editor) != 0) goto label_1;
	}
	{
	clinit_arc_util_Time(ctx);
	jfloat temp0 = (jfloat)SF_arc_util_Time_time;
	sp[0].o = (jobject)((mindustry_world_blocks_distribution_Conveyor$ConveyorBuild *) NULL_CHECK((frame[0].o)))->F_this$0;
	jint temp1 = jint((fmodf(((((temp0 * ((jfloat)((mindustry_world_blocks_distribution_Conveyor *) NULL_CHECK(sp[0].o))->F_speed)) * (jfloat(8.0f))) * ((jfloat)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_timeScale)) * ((jfloat)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_efficiency)), (jfloat(4.0f)))));
	sp[0].i = temp1;
	sp += 1;
	goto label_2;
	}
label_1:;
	INST_ICONST(0);
label_2:;
	{
	sp -= 1;
	frame[1].i = sp[0].i;
	LINE_NUMBER(148);
	SM_arc_graphics_g2d_Draw_z_float(ctx, (jfloat(29.5f)));
	LINE_NUMBER(149);
	frame[2].i = (jint(0));
	}
label_5:;
	{
	if ((frame[2].i) >= (jint(4))) goto label_6;
	}
	{
	LINE_NUMBER(150);
	if ((((jint)((mindustry_world_blocks_distribution_Conveyor$ConveyorBuild *) NULL_CHECK((frame[0].o)))->F_blending) & ((jint(1)) << (frame[2].i))) == 0) goto label_8;
	}
	{
	LINE_NUMBER(151);
	frame[3].i = (((jint)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_rotation) - (frame[2].i));
	LINE_NUMBER(152);
	if ((frame[2].i) != 0) goto label_11;
	}
	{
	jfloat temp0 = jfloat((((jint)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_rotation) * (90)));
	sp[0].f = temp0;
	sp += 1;
	goto label_12;
	}
label_11:;
	{
	jfloat temp0 = jfloat(((frame[3].i) * (90)));
	sp[0].f = temp0;
	sp += 1;
	}
label_12:;
	{
	sp -= 1;
	frame[4].f = sp[0].f;
	LINE_NUMBER(154);
	sp[0].o = (jobject)((mindustry_world_blocks_distribution_Conveyor$ConveyorBuild *) NULL_CHECK((frame[0].o)))->F_this$0;
	sp[1].o = (jobject)((mindustry_world_blocks_distribution_Conveyor$ConveyorBuild *) NULL_CHECK((frame[0].o)))->F_this$0;
	sp[1].o = (jobject)((mindustry_world_blocks_distribution_Conveyor *) NULL_CHECK(sp[1].o))->F_regions;
	sp[1].o = (jobject)ARRAY_ACCESS(jobject, ((jobject)ARRAY_ACCESS(jobject, sp[1].o, (jint(0)))), (frame[1].i));
	sp += 2;
	if ((frame[2].i) == 0) goto label_14;
	}
	clinit_mindustry_world_blocks_Autotiler$SliceMode(ctx);
	(sp++)->o = SF_mindustry_world_blocks_Autotiler$SliceMode_bottom;
	goto label_15;
label_14:;
	clinit_mindustry_world_blocks_Autotiler$SliceMode(ctx);
	(sp++)->o = SF_mindustry_world_blocks_Autotiler$SliceMode_top;
label_15:;
	{
	sp -= 3;
	sp[0].o = (jobject)((func_mindustry_world_blocks_distribution_Conveyor_sliced_arc_graphics_g2d_TextureRegion_mindustry_world_blocks_Autotiler$SliceMode_R_arc_graphics_g2d_TextureRegion) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_blocks_distribution_Conveyor_sliced_arc_graphics_g2d_TextureRegion_mindustry_world_blocks_Autotiler$SliceMode_R_arc_graphics_g2d_TextureRegion])(ctx, sp[0].o, sp[1].o, sp[2].o);
	jfloat temp0 = (jfloat)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_x;
	jint temp1 = (jint)SM_arc_math_geom_Geometry_d4x_int_R_int(ctx, (frame[3].i));
	jfloat temp2 = temp0 + ((jfloat((temp1 * (8)))) * (jfloat(0.75f)));
	jfloat temp3 = (jfloat)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_y;
	jint temp4 = (jint)SM_arc_math_geom_Geometry_d4y_int_R_int(ctx, (frame[3].i));
	SM_arc_graphics_g2d_Draw_rect_arc_graphics_g2d_TextureRegion_float_float_float(ctx, sp[0].o, temp2, (temp3 + ((jfloat((temp4 * (8)))) * (jfloat(0.75f)))), (frame[4].f));
	}
label_8:;
	{
	LINE_NUMBER(149);
	INST_IINC(2, 1);
	goto label_5;
	}
label_6:;
	{
	LINE_NUMBER(158);
	SM_arc_graphics_g2d_Draw_z_float(ctx, (jfloat(29.8f)));
	LINE_NUMBER(160);
	sp[0].o = (jobject)((mindustry_world_blocks_distribution_Conveyor$ConveyorBuild *) NULL_CHECK((frame[0].o)))->F_this$0;
	sp[0].o = (jobject)((mindustry_world_blocks_distribution_Conveyor *) NULL_CHECK(sp[0].o))->F_regions;
	SM_arc_graphics_g2d_Draw_rect_arc_graphics_g2d_TextureRegion_float_float_float_float_float(ctx, ((jobject)ARRAY_ACCESS(jobject, ((jobject)ARRAY_ACCESS(jobject, sp[0].o, ((jint)((mindustry_world_blocks_distribution_Conveyor$ConveyorBuild *) NULL_CHECK((frame[0].o)))->F_blendbits))), (frame[1].i))), ((jfloat)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_x), ((jfloat)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_y), (jfloat(((8) * ((jint)((mindustry_world_blocks_distribution_Conveyor$ConveyorBuild *) NULL_CHECK((frame[0].o)))->F_blendsclx)))), (jfloat(((8) * ((jint)((mindustry_world_blocks_distribution_Conveyor$ConveyorBuild *) NULL_CHECK((frame[0].o)))->F_blendscly)))), (jfloat((((jint)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_rotation) * (90)))));
	LINE_NUMBER(162);
	SM_arc_graphics_g2d_Draw_z_float(ctx, (jfloat(29.9f)));
	LINE_NUMBER(163);
	frame[2].f = (jfloat(29.9f));
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_world;
	jint temp0 = (jint)((func_mindustry_core_World_unitWidth_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_World_unitWidth_R_int])(ctx, sp[0].o);
	frame[3].f = (jfloat(temp0));
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_world;
	jint temp1 = (jint)((func_mindustry_core_World_unitHeight_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_World_unitHeight_R_int])(ctx, sp[0].o);
	frame[4].f = (jfloat(temp1));
	frame[5].f = (jfloat(1,000000e-02f));
	LINE_NUMBER(165);
	frame[6].i = (jint(0));
	}
label_23:;
	{
	if ((frame[6].i) >= ((jint)((mindustry_world_blocks_distribution_Conveyor$ConveyorBuild *) NULL_CHECK((frame[0].o)))->F_len)) goto label_24;
	}
	{
	LINE_NUMBER(166);
	sp[0].o = (jobject)((mindustry_world_blocks_distribution_Conveyor$ConveyorBuild *) NULL_CHECK((frame[0].o)))->F_ids;
	frame[7].o = ((jobject)ARRAY_ACCESS(jobject, sp[0].o, (frame[6].i)));
	LINE_NUMBER(167);
	clinit_arc_util_Tmp(ctx);
	sp[0].o = (jobject)SF_arc_util_Tmp_v1;
	sp[0].o = (jobject)((func_arc_math_geom_Vec2_trns_float_float_float_R_arc_math_geom_Vec2) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Vec2_trns_float_float_float_R_arc_math_geom_Vec2])(ctx, sp[0].o, (jfloat((((jint)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_rotation) * (90)))), (jfloat(8.0f)), (jfloat(0)));
	LINE_NUMBER(168);
	clinit_arc_util_Tmp(ctx);
	sp[0].o = (jobject)SF_arc_util_Tmp_v2;
	jfloat temp0 = jfloat((((jint)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_rotation) * (90)));
	jfloat temp1 = jfloat(-4.0f);
	sp[1].o = (jobject)((mindustry_world_blocks_distribution_Conveyor$ConveyorBuild *) NULL_CHECK((frame[0].o)))->F_xs;
	sp[0].o = (jobject)((func_arc_math_geom_Vec2_trns_float_float_float_R_arc_math_geom_Vec2) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Vec2_trns_float_float_float_R_arc_math_geom_Vec2])(ctx, sp[0].o, temp0, temp1, ((((jfloat)ARRAY_ACCESS(jfloat, sp[1].o, (frame[6].i))) * (jfloat(8.0f))) / (jfloat(2))));
	LINE_NUMBER(171);
	jfloat temp2 = (jfloat)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_x;
	clinit_arc_util_Tmp(ctx);
	sp[0].o = (jobject)SF_arc_util_Tmp_v1;
	jfloat temp3 = (jfloat)((arc_math_geom_Vec2 *) NULL_CHECK(sp[0].o))->F_x;
	sp[0].o = (jobject)((mindustry_world_blocks_distribution_Conveyor$ConveyorBuild *) NULL_CHECK((frame[0].o)))->F_ys;
	jfloat temp4 = temp2 + (temp3 * ((jfloat)ARRAY_ACCESS(jfloat, sp[0].o, (frame[6].i))));
	clinit_arc_util_Tmp(ctx);
	sp[0].o = (jobject)SF_arc_util_Tmp_v2;
	frame[8].f = (temp4 + ((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK(sp[0].o))->F_x));
	LINE_NUMBER(172);
	jfloat temp5 = (jfloat)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_y;
	clinit_arc_util_Tmp(ctx);
	sp[0].o = (jobject)SF_arc_util_Tmp_v1;
	jfloat temp6 = (jfloat)((arc_math_geom_Vec2 *) NULL_CHECK(sp[0].o))->F_y;
	sp[0].o = (jobject)((mindustry_world_blocks_distribution_Conveyor$ConveyorBuild *) NULL_CHECK((frame[0].o)))->F_ys;
	jfloat temp7 = temp5 + (temp6 * ((jfloat)ARRAY_ACCESS(jfloat, sp[0].o, (frame[6].i))));
	clinit_arc_util_Tmp(ctx);
	sp[0].o = (jobject)SF_arc_util_Tmp_v2;
	frame[9].f = (temp7 + ((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK(sp[0].o))->F_y));
	LINE_NUMBER(175);
	SM_arc_graphics_g2d_Draw_z_float(ctx, ((frame[2].f) + ((((frame[8].f) / (frame[3].f)) + ((frame[9].f) / (frame[4].f))) * (frame[5].f))));
	LINE_NUMBER(176);
	sp[0].o = (jobject)((mindustry_ctype_UnlockableContent *) NULL_CHECK((frame[7].o)))->F_fullIcon;
	SM_arc_graphics_g2d_Draw_rect_arc_graphics_g2d_TextureRegion_float_float_float_float(ctx, sp[0].o, (frame[8].f), (frame[9].f), (jfloat(5.0f)), (jfloat(5.0f)));
	LINE_NUMBER(165);
	INST_IINC(6, 1);
	goto label_23;
	}
label_24:;
	LINE_NUMBER(178);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_world_blocks_distribution_Conveyor$ConveyorBuild_payloadDraw(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/distribution/Conveyor$ConveyorBuild:payloadDraw", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(182);
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_block;
	sp[0].o = (jobject)((mindustry_ctype_UnlockableContent *) NULL_CHECK(sp[0].o))->F_fullIcon;
	SM_arc_graphics_g2d_Draw_rect_arc_graphics_g2d_TextureRegion_float_float(ctx, sp[0].o, ((jfloat)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_x), ((jfloat)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_y));
	LINE_NUMBER(183);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_world_blocks_distribution_Conveyor$ConveyorBuild_drawCracks(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/distribution/Conveyor$ConveyorBuild:drawCracks", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(187);
	SM_arc_graphics_g2d_Draw_z_float(ctx, (jfloat(29.85f)));
	LINE_NUMBER(188);
	M_mindustry_gen_Building_drawCracks(ctx, (frame[0].o));
	LINE_NUMBER(189);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_world_blocks_distribution_Conveyor$ConveyorBuild_overwrote_arc_struct_Seq(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/distribution/Conveyor$ConveyorBuild:overwrote", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(193);
	sp[0].o = (jobject)((func_arc_struct_Seq_first_R_java_lang_Object) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_struct_Seq_first_R_java_lang_Object])(ctx, (frame[1].o));
	frame[3].o = sp[0].o;
	if ((isInstance(ctx, (frame[3].o), &class_mindustry_world_blocks_distribution_Conveyor$ConveyorBuild)) == 0) goto label_1;
	}
	{
	frame[2].o = (checkCast(ctx, &class_mindustry_world_blocks_distribution_Conveyor$ConveyorBuild, (frame[3].o)));
	LINE_NUMBER(194);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((mindustry_world_blocks_distribution_Conveyor$ConveyorBuild *) NULL_CHECK((frame[2].o)))->F_ids;
	sp[1].o = (jobject)((func_java_lang_Object_clone_R_java_lang_Object) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_Object_clone_R_java_lang_Object])(ctx, sp[1].o);
	((mindustry_world_blocks_distribution_Conveyor$ConveyorBuild *) NULL_CHECK(sp[0].o))->F_ids = (jref) (checkCast(ctx, getArrayClass(&class_mindustry_type_Item, 1), sp[1].o));
	LINE_NUMBER(195);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((mindustry_world_blocks_distribution_Conveyor$ConveyorBuild *) NULL_CHECK((frame[2].o)))->F_xs;
	sp[1].o = (jobject)((func_java_lang_Object_clone_R_java_lang_Object) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_Object_clone_R_java_lang_Object])(ctx, sp[1].o);
	((mindustry_world_blocks_distribution_Conveyor$ConveyorBuild *) NULL_CHECK(sp[0].o))->F_xs = (jref) (checkCast(ctx, getArrayClass(&class_float, 1), sp[1].o));
	LINE_NUMBER(196);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((mindustry_world_blocks_distribution_Conveyor$ConveyorBuild *) NULL_CHECK((frame[2].o)))->F_ys;
	sp[1].o = (jobject)((func_java_lang_Object_clone_R_java_lang_Object) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_Object_clone_R_java_lang_Object])(ctx, sp[1].o);
	((mindustry_world_blocks_distribution_Conveyor$ConveyorBuild *) NULL_CHECK(sp[0].o))->F_ys = (jref) (checkCast(ctx, getArrayClass(&class_float, 1), sp[1].o));
	LINE_NUMBER(197);
	((mindustry_world_blocks_distribution_Conveyor$ConveyorBuild *) NULL_CHECK((frame[0].o)))->F_len = ((jint)((mindustry_world_blocks_distribution_Conveyor$ConveyorBuild *) NULL_CHECK((frame[2].o)))->F_len);
	LINE_NUMBER(198);
	((mindustry_world_blocks_distribution_Conveyor$ConveyorBuild *) NULL_CHECK((frame[0].o)))->F_clogHeat = ((jfloat)((mindustry_world_blocks_distribution_Conveyor$ConveyorBuild *) NULL_CHECK((frame[2].o)))->F_clogHeat);
	LINE_NUMBER(199);
	((mindustry_world_blocks_distribution_Conveyor$ConveyorBuild *) NULL_CHECK((frame[0].o)))->F_lastInserted = ((jint)((mindustry_world_blocks_distribution_Conveyor$ConveyorBuild *) NULL_CHECK((frame[2].o)))->F_lastInserted);
	LINE_NUMBER(200);
	((mindustry_world_blocks_distribution_Conveyor$ConveyorBuild *) NULL_CHECK((frame[0].o)))->F_mid = ((jint)((mindustry_world_blocks_distribution_Conveyor$ConveyorBuild *) NULL_CHECK((frame[2].o)))->F_mid);
	LINE_NUMBER(201);
	((mindustry_world_blocks_distribution_Conveyor$ConveyorBuild *) NULL_CHECK((frame[0].o)))->F_minitem = ((jfloat)((mindustry_world_blocks_distribution_Conveyor$ConveyorBuild *) NULL_CHECK((frame[2].o)))->F_minitem);
	LINE_NUMBER(202);
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_items;
	sp[1].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[2].o)))->F_items;
	((func_mindustry_world_modules_ItemModule_add_mindustry_world_modules_ItemModule) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_modules_ItemModule_add_mindustry_world_modules_ItemModule])(ctx, sp[0].o, sp[1].o);
	}
label_1:;
	LINE_NUMBER(204);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jbool M_mindustry_world_blocks_distribution_Conveyor$ConveyorBuild_shouldAmbientSound_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/distribution/Conveyor$ConveyorBuild:shouldAmbientSound", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(208);
	if ((floatCompare(((jfloat)((mindustry_world_blocks_distribution_Conveyor$ConveyorBuild *) NULL_CHECK((frame[0].o)))->F_clogHeat), (jfloat(0.5f)), 1)) > 0) goto label_1;
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

void M_mindustry_world_blocks_distribution_Conveyor$ConveyorBuild_onProximityUpdate(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/distribution/Conveyor$ConveyorBuild:onProximityUpdate", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	auto conv = getConveyor(self);
	LINE_NUMBER(213);
	M_mindustry_gen_Building_onProximityUpdate(ctx, (frame[0].o));
	LINE_NUMBER(215);
	sp[0].o = (jobject)getConveyor(frame[0].o);
	sp[1].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_tile;
	if (!sp[0].o || !sp[1].o) {
		popStackFrame(ctx);
		return;
	}
	sp[0].o = (jobject)((func_mindustry_world_blocks_distribution_Conveyor_buildBlending_mindustry_world_Tile_int_Array1_mindustry_entities_units_BuildPlan_boolean_R_Array1_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_blocks_distribution_Conveyor_buildBlending_mindustry_world_Tile_int_Array1_mindustry_entities_units_BuildPlan_boolean_R_Array1_int])(ctx, sp[0].o, sp[1].o, ((jint)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_rotation), (jobject(nullptr)), (jint(1)));
	frame[1].o = sp[0].o;
	LINE_NUMBER(216);
	((mindustry_world_blocks_distribution_Conveyor$ConveyorBuild *) NULL_CHECK((frame[0].o)))->F_blendbits = ((jint)ARRAY_ACCESS(jint, (frame[1].o), (jint(0))));
	LINE_NUMBER(217);
	((mindustry_world_blocks_distribution_Conveyor$ConveyorBuild *) NULL_CHECK((frame[0].o)))->F_blendsclx = ((jint)ARRAY_ACCESS(jint, (frame[1].o), (jint(1))));
	LINE_NUMBER(218);
	((mindustry_world_blocks_distribution_Conveyor$ConveyorBuild *) NULL_CHECK((frame[0].o)))->F_blendscly = ((jint)ARRAY_ACCESS(jint, (frame[1].o), (jint(2))));
	LINE_NUMBER(219);
	((mindustry_world_blocks_distribution_Conveyor$ConveyorBuild *) NULL_CHECK((frame[0].o)))->F_blending = ((jint)ARRAY_ACCESS(jint, (frame[1].o), (jint(4))));
	LINE_NUMBER(221);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((func_mindustry_world_blocks_distribution_Conveyor$ConveyorBuild_front_R_mindustry_gen_Building) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_world_blocks_distribution_Conveyor$ConveyorBuild_front_R_mindustry_gen_Building])(ctx, (frame[0].o));
	((mindustry_world_blocks_distribution_Conveyor$ConveyorBuild *) NULL_CHECK(sp[0].o))->F_next = (jref) sp[1].o;
	LINE_NUMBER(222);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((mindustry_world_blocks_distribution_Conveyor$ConveyorBuild *) NULL_CHECK((frame[0].o)))->F_next;
	sp += 1;
	if ((isInstance(ctx, sp[0].o, &class_mindustry_world_blocks_distribution_Conveyor$ConveyorBuild)) == 0) goto label_8;
	}
	{
	sp[0].o = (jobject)((mindustry_world_blocks_distribution_Conveyor$ConveyorBuild *) NULL_CHECK((frame[0].o)))->F_next;
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK(sp[0].o))->F_team;
	sp[1].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_team;
	if (sp[0].o != sp[1].o) goto label_8;
	}
	{
	sp[0].o = (jobject)((mindustry_world_blocks_distribution_Conveyor$ConveyorBuild *) NULL_CHECK((frame[0].o)))->F_next;
	sp[0].o = checkCast(ctx, &class_mindustry_world_blocks_distribution_Conveyor$ConveyorBuild, sp[0].o);
	sp += 1;
	goto label_9;
	}
label_8:;
	INST_ACONST_NULL();
label_9:;
	{
	sp -= 2;
	((mindustry_world_blocks_distribution_Conveyor$ConveyorBuild *) NULL_CHECK(sp[0].o))->F_nextc = (jref) sp[1].o;
	LINE_NUMBER(223);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((mindustry_world_blocks_distribution_Conveyor$ConveyorBuild *) NULL_CHECK((frame[0].o)))->F_nextc;
	sp += 1;
	if (sp[0].o == nullptr) goto label_11;
	}
	{
	jint temp0 = (jint)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_rotation;
	sp[0].o = (jobject)((mindustry_world_blocks_distribution_Conveyor$ConveyorBuild *) NULL_CHECK((frame[0].o)))->F_next;
	if (temp0 != ((jint)((mindustry_gen_Building *) NULL_CHECK(sp[0].o))->F_rotation)) goto label_11;
	}
	INST_ICONST(1);
	goto label_12;
label_11:;
	INST_ICONST(0);
label_12:;
	{
	sp -= 2;
	((mindustry_world_blocks_distribution_Conveyor$ConveyorBuild *) NULL_CHECK(sp[0].o))->F_aligned = sp[1].i;
	LINE_NUMBER(224);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_world_blocks_distribution_Conveyor$ConveyorBuild_unitOn_mindustry_gen_Unit(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[13];
	auto stack = &frame[9];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/distribution/Conveyor$ConveyorBuild:unitOn", 13 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(229);
	sp[0].o = (jobject)((mindustry_world_blocks_distribution_Conveyor$ConveyorBuild *) NULL_CHECK((frame[0].o)))->F_this$0;
	if (((jint)((mindustry_world_blocks_distribution_Conveyor *) NULL_CHECK(sp[0].o))->F_pushUnits) == 0) goto label_1;
	}
	{
	if ((floatCompare(((jfloat)((mindustry_world_blocks_distribution_Conveyor$ConveyorBuild *) NULL_CHECK((frame[0].o)))->F_clogHeat), (jfloat(0.5f)), -1)) > 0) goto label_1;
	}
	{
	if (((jint)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_enabled) != 0) goto label_2;
	}
label_1:;
	popStackFrame(ctx);
	INST_RETURN();
label_2:;
	{
	LINE_NUMBER(231);
	((func_mindustry_world_blocks_distribution_Conveyor$ConveyorBuild_noSleep) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_world_blocks_distribution_Conveyor$ConveyorBuild_noSleep])(ctx, (frame[0].o));
	LINE_NUMBER(233);
	sp[0].o = (jobject)((mindustry_world_blocks_distribution_Conveyor$ConveyorBuild *) NULL_CHECK((frame[0].o)))->F_this$0;
	frame[2].f = ((((jfloat)((mindustry_world_blocks_distribution_Conveyor *) NULL_CHECK(sp[0].o))->F_speed) * (jfloat(8.0f))) * (jfloat(55.0f)));
	LINE_NUMBER(234);
	frame[3].f = (jfloat(0.1f));
	LINE_NUMBER(235);
	frame[4].f = (jfloat(3.0f));
	LINE_NUMBER(236);
	jint temp0 = (jint)SM_arc_math_geom_Geometry_d4x_int_R_int(ctx, ((jint)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_rotation));
	frame[5].f = (jfloat(temp0));
	jint temp1 = (jint)SM_arc_math_geom_Geometry_d4y_int_R_int(ctx, ((jint)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_rotation));
	frame[6].f = (jfloat(temp1));
	LINE_NUMBER(238);
	frame[7].f = (jfloat(0));
	frame[8].f = (jfloat(0));
	LINE_NUMBER(240);
	jfloat temp2 = (jfloat)SM_java_lang_Math_abs_float_R_float(ctx, (frame[5].f));
	jfloat temp3 = (jfloat)SM_java_lang_Math_abs_float_R_float(ctx, (frame[6].f));
	if ((floatCompare(temp2, temp3, -1)) <= 0) goto label_11;
	}
	{
	LINE_NUMBER(241);
	jfloat temp0 = (jfloat)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_y;
	jfloat temp1 = (jfloat)((func_mindustry_gen_Unit_y_R_float) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_gen_Unit_y_R_float])(ctx, (frame[1].o));
	jfloat temp2 = (jfloat)SM_arc_math_Mathf_clamp_float_float_float_R_float(ctx, ((temp0 - temp1) / (frame[4].f)), (-(frame[3].f)), (frame[3].f));
	frame[8].f = temp2;
	LINE_NUMBER(242);
	jfloat temp3 = (jfloat)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_y;
	jfloat temp4 = (jfloat)((func_mindustry_gen_Unit_y_R_float) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_gen_Unit_y_R_float])(ctx, (frame[1].o));
	jfloat temp5 = (jfloat)SM_java_lang_Math_abs_float_R_float(ctx, (temp3 - temp4));
	if ((floatCompare(temp5, (jfloat(1)), 1)) >= 0) goto label_14;
	}
	{
	frame[8].f = (jfloat(0));
	goto label_14;
	}
label_11:;
	{
	LINE_NUMBER(244);
	jfloat temp0 = (jfloat)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_x;
	jfloat temp1 = (jfloat)((func_mindustry_gen_Unit_x_R_float) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_gen_Unit_x_R_float])(ctx, (frame[1].o));
	jfloat temp2 = (jfloat)SM_arc_math_Mathf_clamp_float_float_float_R_float(ctx, ((temp0 - temp1) / (frame[4].f)), (-(frame[3].f)), (frame[3].f));
	frame[7].f = temp2;
	LINE_NUMBER(245);
	jfloat temp3 = (jfloat)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_x;
	jfloat temp4 = (jfloat)((func_mindustry_gen_Unit_x_R_float) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_gen_Unit_x_R_float])(ctx, (frame[1].o));
	jfloat temp5 = (jfloat)SM_java_lang_Math_abs_float_R_float(ctx, (temp3 - temp4));
	if ((floatCompare(temp5, (jfloat(1)), 1)) >= 0) goto label_14;
	}
	INST_FCONST(0);
	INST_FSTORE(7);
label_14:;
	{
	LINE_NUMBER(248);
	if ((floatCompare(((jfloat(((jint)((mindustry_world_blocks_distribution_Conveyor$ConveyorBuild *) NULL_CHECK((frame[0].o)))->F_len))) * (jfloat(0.4f))), (jfloat(0.9f)), 1)) >= 0) goto label_16;
	}
	{
	LINE_NUMBER(249);
	sp[0].o = frame[1].o;
	jfloat temp0 = ((frame[5].f) * (frame[2].f)) + (frame[7].f);
	jfloat temp1 = (jfloat)((func_mindustry_world_blocks_distribution_Conveyor$ConveyorBuild_delta_R_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_world_blocks_distribution_Conveyor$ConveyorBuild_delta_R_float])(ctx, (frame[0].o));
	jfloat temp2 = temp0 * temp1;
	jfloat temp3 = ((frame[6].f) * (frame[2].f)) + (frame[8].f);
	jfloat temp4 = (jfloat)((func_mindustry_world_blocks_distribution_Conveyor$ConveyorBuild_delta_R_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_world_blocks_distribution_Conveyor$ConveyorBuild_delta_R_float])(ctx, (frame[0].o));
	((func_mindustry_gen_Unit_impulse_float_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_gen_Unit_impulse_float_float])(ctx, sp[0].o, temp2, (temp3 * temp4));
	}
label_16:;
	LINE_NUMBER(251);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_world_blocks_distribution_Conveyor$ConveyorBuild_updateTile(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[12];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/distribution/Conveyor$ConveyorBuild:updateTile", 12 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(255);
	((mindustry_world_blocks_distribution_Conveyor$ConveyorBuild *) NULL_CHECK((frame[0].o)))->F_minitem = (jfloat(1));
	LINE_NUMBER(256);
	((mindustry_world_blocks_distribution_Conveyor$ConveyorBuild *) NULL_CHECK((frame[0].o)))->F_mid = (jint(0));
	LINE_NUMBER(259);
	if (((jint)((mindustry_world_blocks_distribution_Conveyor$ConveyorBuild *) NULL_CHECK((frame[0].o)))->F_len) != 0) goto label_3;
	}
	{
	jint temp0 = (jint)SM_arc_math_Mathf_equal_float_float_R_boolean(ctx, ((jfloat)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_timeScale), (jfloat(1)));
	if (temp0 == 0) goto label_3;
	}
	{
	LINE_NUMBER(260);
	((mindustry_world_blocks_distribution_Conveyor$ConveyorBuild *) NULL_CHECK((frame[0].o)))->F_clogHeat = (jfloat(0));
	LINE_NUMBER(261);
	((func_mindustry_world_blocks_distribution_Conveyor$ConveyorBuild_sleep) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_world_blocks_distribution_Conveyor$ConveyorBuild_sleep])(ctx, (frame[0].o));
	LINE_NUMBER(262);
	popStackFrame(ctx);
	return;
	}
label_3:;
	{
	LINE_NUMBER(265);
	if (((jint)((mindustry_world_blocks_distribution_Conveyor$ConveyorBuild *) NULL_CHECK((frame[0].o)))->F_aligned) == 0) goto label_7;
	}
	{
	jfloat temp0 = jfloat(1);
	jfloat temp1 = jfloat(0.4f);
	sp[0].o = (jobject)((mindustry_world_blocks_distribution_Conveyor$ConveyorBuild *) NULL_CHECK((frame[0].o)))->F_nextc;
	jfloat temp2 = (jfloat)SM_java_lang_Math_max_float_float_R_float(ctx, (temp1 - ((jfloat)((mindustry_world_blocks_distribution_Conveyor$ConveyorBuild *) NULL_CHECK(sp[0].o))->F_minitem)), (jfloat(0)));
	jfloat temp3 = temp0 - temp2;
	sp[0].f = temp3;
	sp += 1;
	goto label_8;
	}
label_7:;
	INST_FCONST(1);
label_8:;
	{
	sp -= 1;
	frame[1].f = sp[0].f;
	LINE_NUMBER(266);
	sp[0].o = (jobject)((mindustry_world_blocks_distribution_Conveyor$ConveyorBuild *) NULL_CHECK((frame[0].o)))->F_this$0;
	jfloat temp0 = (jfloat)((mindustry_world_blocks_distribution_Conveyor *) NULL_CHECK(sp[0].o))->F_speed;
	jfloat temp1 = (jfloat)((func_mindustry_world_blocks_distribution_Conveyor$ConveyorBuild_edelta_R_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_world_blocks_distribution_Conveyor$ConveyorBuild_edelta_R_float])(ctx, (frame[0].o));
	frame[2].f = (temp0 * temp1);
	LINE_NUMBER(268);
	frame[3].i = (((jint)((mindustry_world_blocks_distribution_Conveyor$ConveyorBuild *) NULL_CHECK((frame[0].o)))->F_len) - (jint(1)));
	}
label_11:;
	INST_ILOAD(3);
	if ((--sp)->i < 0) goto label_12;
	{
	LINE_NUMBER(269);
	if ((frame[3].i) != (((jint)((mindustry_world_blocks_distribution_Conveyor$ConveyorBuild *) NULL_CHECK((frame[0].o)))->F_len) - (jint(1)))) goto label_14;
	}
	(sp++)->f = jfloat(100.0f);
	goto label_15;
label_14:;
	{
	sp[0].o = (jobject)((mindustry_world_blocks_distribution_Conveyor$ConveyorBuild *) NULL_CHECK((frame[0].o)))->F_ys;
	jfloat temp0 = (jfloat)ARRAY_ACCESS(jfloat, sp[0].o, ((frame[3].i) + (jint(1))));
	sp[0].f = temp0;
	sp += 1;
	}
label_15:;
	{
	sp -= 1;
	frame[4].f = (sp[0].f - (jfloat(0.4f)));
	LINE_NUMBER(270);
	jfloat temp0 = frame[4].f;
	sp[0].o = (jobject)((mindustry_world_blocks_distribution_Conveyor$ConveyorBuild *) NULL_CHECK((frame[0].o)))->F_ys;
	jfloat temp1 = (jfloat)SM_arc_math_Mathf_clamp_float_float_float_R_float(ctx, (temp0 - ((jfloat)ARRAY_ACCESS(jfloat, sp[0].o, (frame[3].i)))), (jfloat(0)), (frame[2].f));
	frame[5].f = temp1;
	LINE_NUMBER(272);
	sp[0].o = (jobject)((mindustry_world_blocks_distribution_Conveyor$ConveyorBuild *) NULL_CHECK((frame[0].o)))->F_ys;
	jint temp2 = frame[3].i;
	ARRAY_ACCESS(jfloat, sp[0].o, temp2) = (((jfloat)ARRAY_ACCESS(jfloat, sp[0].o, temp2)) + (frame[5].f));
	LINE_NUMBER(274);
	sp[0].o = (jobject)((mindustry_world_blocks_distribution_Conveyor$ConveyorBuild *) NULL_CHECK((frame[0].o)))->F_ys;
	if ((floatCompare(((jfloat)ARRAY_ACCESS(jfloat, sp[0].o, (frame[3].i))), (frame[1].f), -1)) <= 0) goto label_19;
	}
	{
	sp[0].o = (jobject)((mindustry_world_blocks_distribution_Conveyor$ConveyorBuild *) NULL_CHECK((frame[0].o)))->F_ys;
	ARRAY_ACCESS(jfloat, sp[0].o, (frame[3].i)) = (frame[1].f);
	}
label_19:;
	{
	LINE_NUMBER(275);
	sp[0].o = (jobject)((mindustry_world_blocks_distribution_Conveyor$ConveyorBuild *) NULL_CHECK((frame[0].o)))->F_ys;
	if ((doubleCompare((jdouble(((jfloat)ARRAY_ACCESS(jfloat, sp[0].o, (frame[3].i))))), (jdouble(0.5)), -1)) <= 0) goto label_20;
	}
	INST_ILOAD(3);
	if ((--sp)->i <= 0) goto label_20;
	{
	((mindustry_world_blocks_distribution_Conveyor$ConveyorBuild *) NULL_CHECK((frame[0].o)))->F_mid = ((frame[3].i) - (jint(1)));
	}
label_20:;
	{
	LINE_NUMBER(276);
	sp[0].o = (jobject)((mindustry_world_blocks_distribution_Conveyor$ConveyorBuild *) NULL_CHECK((frame[0].o)))->F_xs;
	jint temp0 = frame[3].i;
	sp[1].o = (jobject)((mindustry_world_blocks_distribution_Conveyor$ConveyorBuild *) NULL_CHECK((frame[0].o)))->F_xs;
	jfloat temp1 = (jfloat)SM_arc_math_Mathf_approach_float_float_float_R_float(ctx, ((jfloat)ARRAY_ACCESS(jfloat, sp[1].o, (frame[3].i))), (jfloat(0)), ((frame[2].f) * (jfloat(2))));
	ARRAY_ACCESS(jfloat, sp[0].o, temp0) = temp1;
	LINE_NUMBER(278);
	sp[0].o = (jobject)((mindustry_world_blocks_distribution_Conveyor$ConveyorBuild *) NULL_CHECK((frame[0].o)))->F_ys;
	if ((floatCompare(((jfloat)ARRAY_ACCESS(jfloat, sp[0].o, (frame[3].i))), (jfloat(1)), -1)) < 0) goto label_22;
	}
	{
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((mindustry_world_blocks_distribution_Conveyor$ConveyorBuild *) NULL_CHECK((frame[0].o)))->F_ids;
	jint temp0 = (jint)((func_mindustry_world_blocks_distribution_Conveyor$ConveyorBuild_pass_mindustry_type_Item_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_blocks_distribution_Conveyor$ConveyorBuild_pass_mindustry_type_Item_R_boolean])(ctx, sp[0].o, ((jobject)ARRAY_ACCESS(jobject, sp[1].o, (frame[3].i))));
	if (temp0 == 0) goto label_22;
	}
	{
	LINE_NUMBER(280);
	if (((jint)((mindustry_world_blocks_distribution_Conveyor$ConveyorBuild *) NULL_CHECK((frame[0].o)))->F_aligned) == 0) goto label_24;
	}
	{
	LINE_NUMBER(281);
	sp[0].o = (jobject)((mindustry_world_blocks_distribution_Conveyor$ConveyorBuild *) NULL_CHECK((frame[0].o)))->F_nextc;
	sp[0].o = (jobject)((mindustry_world_blocks_distribution_Conveyor$ConveyorBuild *) NULL_CHECK(sp[0].o))->F_xs;
	sp[1].o = (jobject)((mindustry_world_blocks_distribution_Conveyor$ConveyorBuild *) NULL_CHECK((frame[0].o)))->F_nextc;
	jint temp0 = (jint)((mindustry_world_blocks_distribution_Conveyor$ConveyorBuild *) NULL_CHECK(sp[1].o))->F_lastInserted;
	sp[1].o = (jobject)((mindustry_world_blocks_distribution_Conveyor$ConveyorBuild *) NULL_CHECK((frame[0].o)))->F_xs;
	ARRAY_ACCESS(jfloat, sp[0].o, temp0) = ((jfloat)ARRAY_ACCESS(jfloat, sp[1].o, (frame[3].i)));
	}
label_24:;
	{
	LINE_NUMBER(284);
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_items;
	sp[1].o = (jobject)((mindustry_world_blocks_distribution_Conveyor$ConveyorBuild *) NULL_CHECK((frame[0].o)))->F_ids;
	((func_mindustry_world_modules_ItemModule_remove_mindustry_type_Item_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_modules_ItemModule_remove_mindustry_type_Item_int])(ctx, sp[0].o, ((jobject)ARRAY_ACCESS(jobject, sp[1].o, (frame[3].i))), (((jint)((mindustry_world_blocks_distribution_Conveyor$ConveyorBuild *) NULL_CHECK((frame[0].o)))->F_len) - (frame[3].i)));
	LINE_NUMBER(285);
	sp[0].o = frame[0].o;
	jint temp0 = (jint)SM_java_lang_Math_min_int_int_R_int(ctx, (frame[3].i), ((jint)((mindustry_world_blocks_distribution_Conveyor$ConveyorBuild *) NULL_CHECK((frame[0].o)))->F_len));
	((mindustry_world_blocks_distribution_Conveyor$ConveyorBuild *) NULL_CHECK(sp[0].o))->F_len = temp0;
	goto label_27;
	}
label_22:;
	{
	LINE_NUMBER(286);
	sp[0].o = (jobject)((mindustry_world_blocks_distribution_Conveyor$ConveyorBuild *) NULL_CHECK((frame[0].o)))->F_ys;
	if ((floatCompare(((jfloat)ARRAY_ACCESS(jfloat, sp[0].o, (frame[3].i))), ((jfloat)((mindustry_world_blocks_distribution_Conveyor$ConveyorBuild *) NULL_CHECK((frame[0].o)))->F_minitem), 1)) >= 0) goto label_27;
	}
	{
	LINE_NUMBER(287);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((mindustry_world_blocks_distribution_Conveyor$ConveyorBuild *) NULL_CHECK((frame[0].o)))->F_ys;
	((mindustry_world_blocks_distribution_Conveyor$ConveyorBuild *) NULL_CHECK(sp[0].o))->F_minitem = ((jfloat)ARRAY_ACCESS(jfloat, sp[1].o, (frame[3].i)));
	}
label_27:;
	{
	LINE_NUMBER(268);
	INST_IINC(3, -1);
	goto label_11;
	}
label_12:;
	{
	LINE_NUMBER(291);
	jfloat temp0 = (jfloat)((mindustry_world_blocks_distribution_Conveyor$ConveyorBuild *) NULL_CHECK((frame[0].o)))->F_minitem;
	jfloat temp1 = jfloat(0.4f);
	sp[0].f = temp0;
	sp[1].f = temp1;
	sp += 2;
	if (((jint)((mindustry_world_blocks_distribution_Conveyor$ConveyorBuild *) NULL_CHECK((frame[0].o)))->F_blendbits) != (jint(1))) goto label_29;
	}
	(sp++)->f = jfloat(0.3f);
	goto label_30;
label_29:;
	INST_FCONST(0);
label_30:;
	{
	sp -= 3;
	if ((floatCompare(sp[0].f, (sp[1].f + sp[2].f), 1)) >= 0) goto label_31;
	}
	{
	LINE_NUMBER(292);
	sp[0].o = frame[0].o;
	jfloat temp0 = (jfloat)SM_arc_math_Mathf_approachDelta_float_float_float_R_float(ctx, ((jfloat)((mindustry_world_blocks_distribution_Conveyor$ConveyorBuild *) NULL_CHECK((frame[0].o)))->F_clogHeat), (jfloat(1)), (jfloat(0.016666668f)));
	((mindustry_world_blocks_distribution_Conveyor$ConveyorBuild *) NULL_CHECK(sp[0].o))->F_clogHeat = temp0;
	goto label_33;
	}
label_31:;
	{
	LINE_NUMBER(294);
	((mindustry_world_blocks_distribution_Conveyor$ConveyorBuild *) NULL_CHECK((frame[0].o)))->F_clogHeat = (jfloat(0));
	}
label_33:;
	{
	LINE_NUMBER(297);
	((func_mindustry_world_blocks_distribution_Conveyor$ConveyorBuild_noSleep) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_world_blocks_distribution_Conveyor$ConveyorBuild_noSleep])(ctx, (frame[0].o));
	LINE_NUMBER(298);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jbool M_mindustry_world_blocks_distribution_Conveyor$ConveyorBuild_pass_mindustry_type_Item_R_boolean(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/distribution/Conveyor$ConveyorBuild:pass", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(301);
	if ((frame[1].o) == nullptr) goto label_1;
	}
	{
	sp[0].o = (jobject)((mindustry_world_blocks_distribution_Conveyor$ConveyorBuild *) NULL_CHECK((frame[0].o)))->F_next;
	if (sp[0].o == nullptr) goto label_1;
	}
	{
	sp[0].o = (jobject)((mindustry_world_blocks_distribution_Conveyor$ConveyorBuild *) NULL_CHECK((frame[0].o)))->F_next;
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK(sp[0].o))->F_team;
	sp[1].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_team;
	if (sp[0].o != sp[1].o) goto label_1;
	}
	{
	sp[0].o = (jobject)((mindustry_world_blocks_distribution_Conveyor$ConveyorBuild *) NULL_CHECK((frame[0].o)))->F_next;
	jint temp0 = (jint)((func_mindustry_gen_Building_acceptItem_mindustry_gen_Building_mindustry_type_Item_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_gen_Building_acceptItem_mindustry_gen_Building_mindustry_type_Item_R_boolean])(ctx, sp[0].o, (frame[0].o), (frame[1].o));
	if (temp0 == 0) goto label_1;
	}
	{
	LINE_NUMBER(302);
	sp[0].o = (jobject)((mindustry_world_blocks_distribution_Conveyor$ConveyorBuild *) NULL_CHECK((frame[0].o)))->F_next;
	((func_mindustry_gen_Building_handleItem_mindustry_gen_Building_mindustry_type_Item) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_gen_Building_handleItem_mindustry_gen_Building_mindustry_type_Item])(ctx, sp[0].o, (frame[0].o), (frame[1].o));
	LINE_NUMBER(303);
	popStackFrame(ctx);
	return (jint(1));
	}
label_1:;
	{
	LINE_NUMBER(305);
	popStackFrame(ctx);
	return (jint(0));
	}

	popStackFrame(ctx);
}

jint M_mindustry_world_blocks_distribution_Conveyor$ConveyorBuild_removeStack_mindustry_type_Item_int_R_int(jcontext ctx, jobject self, jobject param0, jint param1) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/distribution/Conveyor$ConveyorBuild:removeStack", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(310);
	((func_mindustry_world_blocks_distribution_Conveyor$ConveyorBuild_noSleep) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_world_blocks_distribution_Conveyor$ConveyorBuild_noSleep])(ctx, (frame[0].o));
	LINE_NUMBER(311);
	frame[3].i = (jint(0));
	LINE_NUMBER(313);
	frame[4].i = (jint(0));
	}
label_3:;
	{
	if ((frame[4].i) >= (frame[2].i)) goto label_4;
	}
	{
	LINE_NUMBER(314);
	frame[5].i = (jint(0));
	}
label_6:;
	{
	if ((frame[5].i) >= ((jint)((mindustry_world_blocks_distribution_Conveyor$ConveyorBuild *) NULL_CHECK((frame[0].o)))->F_len)) goto label_7;
	}
	{
	LINE_NUMBER(315);
	sp[0].o = (jobject)((mindustry_world_blocks_distribution_Conveyor$ConveyorBuild *) NULL_CHECK((frame[0].o)))->F_ids;
	if (((jobject)ARRAY_ACCESS(jobject, sp[0].o, (frame[5].i))) != (frame[1].o)) goto label_9;
	}
	{
	LINE_NUMBER(316);
	((func_mindustry_world_blocks_distribution_Conveyor$ConveyorBuild_remove_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_world_blocks_distribution_Conveyor$ConveyorBuild_remove_int])(ctx, (frame[0].o), (frame[5].i));
	LINE_NUMBER(317);
	INST_IINC(3, 1);
	LINE_NUMBER(318);
	goto label_7;
	}
label_9:;
	{
	LINE_NUMBER(314);
	INST_IINC(5, 1);
	goto label_6;
	}
label_7:;
	{
	LINE_NUMBER(313);
	INST_IINC(4, 1);
	goto label_3;
	}
label_4:;
	{
	LINE_NUMBER(323);
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_items;
	((func_mindustry_world_modules_ItemModule_remove_mindustry_type_Item_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_modules_ItemModule_remove_mindustry_type_Item_int])(ctx, sp[0].o, (frame[1].o), (frame[3].i));
	LINE_NUMBER(324);
	popStackFrame(ctx);
	return (frame[3].i);
	}

	popStackFrame(ctx);
}

void M_mindustry_world_blocks_distribution_Conveyor$ConveyorBuild_getStackOffset_mindustry_type_Item_arc_math_geom_Vec2(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/distribution/Conveyor$ConveyorBuild:getStackOffset", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(329);
	sp[0].o = frame[2].o;
	jfloat temp0 = (jfloat)((func_mindustry_world_blocks_distribution_Conveyor$ConveyorBuild_rotdeg_R_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_world_blocks_distribution_Conveyor$ConveyorBuild_rotdeg_R_float])(ctx, (frame[0].o));
	sp[0].o = (jobject)((func_arc_math_geom_Vec2_trns_float_float_R_arc_math_geom_Vec2) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Vec2_trns_float_float_R_arc_math_geom_Vec2])(ctx, sp[0].o, (temp0 + (jfloat(180.0f))), (jfloat(4.0f)));
	LINE_NUMBER(330);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jint M_mindustry_world_blocks_distribution_Conveyor$ConveyorBuild_acceptStack_mindustry_type_Item_int_mindustry_gen_Teamc_R_int(jcontext ctx, jobject self, jobject param0, jint param1, jobject param2) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/distribution/Conveyor$ConveyorBuild:acceptStack", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	frame[3].o = param2;
	{
	LINE_NUMBER(334);
	jint temp0 = (jint)SM_java_lang_Math_min_int_int_R_int(ctx, (jint((((jfloat)((mindustry_world_blocks_distribution_Conveyor$ConveyorBuild *) NULL_CHECK((frame[0].o)))->F_minitem) / (jfloat(0.4f))))), (frame[2].i));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

void M_mindustry_world_blocks_distribution_Conveyor$ConveyorBuild_handleStack_mindustry_type_Item_int_mindustry_gen_Teamc(jcontext ctx, jobject self, jobject param0, jint param1, jobject param2) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/distribution/Conveyor$ConveyorBuild:handleStack", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	frame[3].o = param2;
	{
	LINE_NUMBER(339);
	jint temp0 = (jint)SM_java_lang_Math_min_int_int_R_int(ctx, (frame[2].i), ((jint(3)) - ((jint)((mindustry_world_blocks_distribution_Conveyor$ConveyorBuild *) NULL_CHECK((frame[0].o)))->F_len)));
	frame[2].i = temp0;
	LINE_NUMBER(341);
	frame[4].i = ((frame[2].i) - (jint(1)));
	}
label_2:;
	INST_ILOAD(4);
	if ((--sp)->i < 0) goto label_3;
	{
	LINE_NUMBER(342);
	((func_mindustry_world_blocks_distribution_Conveyor$ConveyorBuild_add_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_world_blocks_distribution_Conveyor$ConveyorBuild_add_int])(ctx, (frame[0].o), (jint(0)));
	LINE_NUMBER(343);
	sp[0].o = (jobject)((mindustry_world_blocks_distribution_Conveyor$ConveyorBuild *) NULL_CHECK((frame[0].o)))->F_xs;
	ARRAY_ACCESS(jfloat, sp[0].o, (jint(0))) = (jfloat(0));
	LINE_NUMBER(344);
	sp[0].o = (jobject)((mindustry_world_blocks_distribution_Conveyor$ConveyorBuild *) NULL_CHECK((frame[0].o)))->F_ys;
	ARRAY_ACCESS(jfloat, sp[0].o, (jint(0))) = ((jfloat((frame[4].i))) * (jfloat(0.4f)));
	LINE_NUMBER(345);
	sp[0].o = (jobject)((mindustry_world_blocks_distribution_Conveyor$ConveyorBuild *) NULL_CHECK((frame[0].o)))->F_ids;
	ARRAY_ACCESS(jobject, sp[0].o, (jint(0))) = (frame[1].o);
	LINE_NUMBER(346);
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_items;
	((func_mindustry_world_modules_ItemModule_add_mindustry_type_Item_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_modules_ItemModule_add_mindustry_type_Item_int])(ctx, sp[0].o, (frame[1].o), (jint(1)));
	LINE_NUMBER(341);
	INST_IINC(4, -1);
	goto label_2;
	}
label_3:;
	{
	LINE_NUMBER(349);
	((func_mindustry_world_blocks_distribution_Conveyor$ConveyorBuild_noSleep) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_world_blocks_distribution_Conveyor$ConveyorBuild_noSleep])(ctx, (frame[0].o));
	LINE_NUMBER(350);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jbool M_mindustry_world_blocks_distribution_Conveyor$ConveyorBuild_acceptItem_mindustry_gen_Building_mindustry_type_Item_R_boolean(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/distribution/Conveyor$ConveyorBuild:acceptItem", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(354);
	if (((jint)((mindustry_world_blocks_distribution_Conveyor$ConveyorBuild *) NULL_CHECK((frame[0].o)))->F_len) < (jint(3))) goto label_1;
	}
	INST_ICONST(0);
	popStackFrame(ctx);
	INST_IRETURN();
label_1:;
	{
	LINE_NUMBER(355);
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[1].o)))->F_tile;
	sp[1].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_tile;
	sp[0].o = (jobject)SM_mindustry_world_Edges_getFacingEdge_mindustry_world_Tile_mindustry_world_Tile_R_mindustry_world_Tile(ctx, sp[0].o, sp[1].o);
	frame[3].o = sp[0].o;
	LINE_NUMBER(356);
	if ((frame[3].o) != nullptr) goto label_3;
	}
	INST_ICONST(0);
	popStackFrame(ctx);
	INST_IRETURN();
label_3:;
	{
	LINE_NUMBER(357);
	sp[0].o = frame[3].o;
	sp[1].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_tile;
	jint temp0 = (jint)((mindustry_world_Tile *) NULL_CHECK(sp[1].o))->F_x;
	sp[1].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_tile;
	jint temp1 = (jint)((func_mindustry_world_Tile_relativeTo_int_int_R_byte) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_Tile_relativeTo_int_int_R_byte])(ctx, sp[0].o, temp0, ((jint)((mindustry_world_Tile *) NULL_CHECK(sp[1].o))->F_y));
	jint temp2 = (jint)SM_java_lang_Math_abs_int_R_int(ctx, (temp1 - ((jint)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_rotation)));
	frame[4].i = temp2;
	LINE_NUMBER(358);
	if ((frame[4].i) != 0) goto label_5;
	}
	{
	if ((floatCompare(((jfloat)((mindustry_world_blocks_distribution_Conveyor$ConveyorBuild *) NULL_CHECK((frame[0].o)))->F_minitem), (jfloat(0.4f)), -1)) >= 0) goto label_6;
	}
label_5:;
	{
	if (((frame[4].i) % (jint(2))) != (jint(1))) goto label_7;
	}
	{
	if ((floatCompare(((jfloat)((mindustry_world_blocks_distribution_Conveyor$ConveyorBuild *) NULL_CHECK((frame[0].o)))->F_minitem), (jfloat(0.7f)), -1)) <= 0) goto label_7;
	}
label_6:;
	{
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[1].o)))->F_block;
	if (((jint)((mindustry_world_Block *) NULL_CHECK(sp[0].o))->F_rotate) == 0) goto label_8;
	}
	{
	sp[0].o = (jobject)((mindustry_world_blocks_distribution_Conveyor$ConveyorBuild *) NULL_CHECK((frame[0].o)))->F_next;
	if (sp[0].o == (frame[1].o)) goto label_7;
	}
label_8:;
	INST_ICONST(1);
	goto label_9;
label_7:;
	INST_ICONST(0);
label_9:;
	popStackFrame(ctx);
	INST_IRETURN();

	popStackFrame(ctx);
}

void M_mindustry_world_blocks_distribution_Conveyor$ConveyorBuild_handleItem_mindustry_gen_Building_mindustry_type_Item(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[10];
	auto stack = &frame[7];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/distribution/Conveyor$ConveyorBuild:handleItem", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(363);
	if (((jint)((mindustry_world_blocks_distribution_Conveyor$ConveyorBuild *) NULL_CHECK((frame[0].o)))->F_len) < (jint(3))) goto label_1;
	}
	popStackFrame(ctx);
	INST_RETURN();
label_1:;
	{
	LINE_NUMBER(365);
	frame[3].i = ((jint)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_rotation);
	LINE_NUMBER(366);
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[1].o)))->F_tile;
	sp[1].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_tile;
	sp[0].o = (jobject)SM_mindustry_world_Edges_getFacingEdge_mindustry_world_Tile_mindustry_world_Tile_R_mindustry_world_Tile(ctx, sp[0].o, sp[1].o);
	frame[4].o = sp[0].o;
	LINE_NUMBER(367);
	sp[0].o = frame[4].o;
	sp[1].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_tile;
	jint temp0 = (jint)((mindustry_world_Tile *) NULL_CHECK(sp[1].o))->F_x;
	sp[1].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_tile;
	jint temp1 = (jint)((func_mindustry_world_Tile_relativeTo_int_int_R_byte) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_Tile_relativeTo_int_int_R_byte])(ctx, sp[0].o, temp0, ((jint)((mindustry_world_Tile *) NULL_CHECK(sp[1].o))->F_y));
	frame[5].i = (temp1 - (frame[3].i));
	LINE_NUMBER(368);
	if ((frame[5].i) == (jint(-1))) goto label_5;
	}
	{
	if ((frame[5].i) != (jint(3))) goto label_6;
	}
label_5:;
	INST_FCONST(1);
	goto label_7;
label_6:;
	{
	if ((frame[5].i) == (jint(1))) goto label_8;
	}
	{
	if ((frame[5].i) != (-3)) goto label_9;
	}
label_8:;
	(sp++)->f = jfloat(-1.0f);
	goto label_7;
label_9:;
	INST_FCONST(0);
label_7:;
	{
	sp -= 1;
	frame[6].f = sp[0].f;
	LINE_NUMBER(370);
	((func_mindustry_world_blocks_distribution_Conveyor$ConveyorBuild_noSleep) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_world_blocks_distribution_Conveyor$ConveyorBuild_noSleep])(ctx, (frame[0].o));
	LINE_NUMBER(371);
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_items;
	((func_mindustry_world_modules_ItemModule_add_mindustry_type_Item_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_modules_ItemModule_add_mindustry_type_Item_int])(ctx, sp[0].o, (frame[2].o), (jint(1)));
	LINE_NUMBER(373);
	sp[0].o = frame[4].o;
	sp[1].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_tile;
	jint temp0 = (jint)((mindustry_world_Tile *) NULL_CHECK(sp[1].o))->F_x;
	sp[1].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_tile;
	jint temp1 = (jint)((func_mindustry_world_Tile_relativeTo_int_int_R_byte) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_Tile_relativeTo_int_int_R_byte])(ctx, sp[0].o, temp0, ((jint)((mindustry_world_Tile *) NULL_CHECK(sp[1].o))->F_y));
	jint temp2 = (jint)SM_java_lang_Math_abs_int_R_int(ctx, (temp1 - (frame[3].i)));
	if (temp2 != 0) goto label_13;
	}
	{
	LINE_NUMBER(374);
	((func_mindustry_world_blocks_distribution_Conveyor$ConveyorBuild_add_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_world_blocks_distribution_Conveyor$ConveyorBuild_add_int])(ctx, (frame[0].o), (jint(0)));
	LINE_NUMBER(375);
	sp[0].o = (jobject)((mindustry_world_blocks_distribution_Conveyor$ConveyorBuild *) NULL_CHECK((frame[0].o)))->F_xs;
	ARRAY_ACCESS(jfloat, sp[0].o, (jint(0))) = (frame[6].f);
	LINE_NUMBER(376);
	sp[0].o = (jobject)((mindustry_world_blocks_distribution_Conveyor$ConveyorBuild *) NULL_CHECK((frame[0].o)))->F_ys;
	ARRAY_ACCESS(jfloat, sp[0].o, (jint(0))) = (jfloat(0));
	LINE_NUMBER(377);
	sp[0].o = (jobject)((mindustry_world_blocks_distribution_Conveyor$ConveyorBuild *) NULL_CHECK((frame[0].o)))->F_ids;
	ARRAY_ACCESS(jobject, sp[0].o, (jint(0))) = (frame[2].o);
	goto label_18;
	}
label_13:;
	{
	LINE_NUMBER(379);
	((func_mindustry_world_blocks_distribution_Conveyor$ConveyorBuild_add_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_world_blocks_distribution_Conveyor$ConveyorBuild_add_int])(ctx, (frame[0].o), ((jint)((mindustry_world_blocks_distribution_Conveyor$ConveyorBuild *) NULL_CHECK((frame[0].o)))->F_mid));
	LINE_NUMBER(380);
	sp[0].o = (jobject)((mindustry_world_blocks_distribution_Conveyor$ConveyorBuild *) NULL_CHECK((frame[0].o)))->F_xs;
	ARRAY_ACCESS(jfloat, sp[0].o, ((jint)((mindustry_world_blocks_distribution_Conveyor$ConveyorBuild *) NULL_CHECK((frame[0].o)))->F_mid)) = (frame[6].f);
	LINE_NUMBER(381);
	sp[0].o = (jobject)((mindustry_world_blocks_distribution_Conveyor$ConveyorBuild *) NULL_CHECK((frame[0].o)))->F_ys;
	ARRAY_ACCESS(jfloat, sp[0].o, ((jint)((mindustry_world_blocks_distribution_Conveyor$ConveyorBuild *) NULL_CHECK((frame[0].o)))->F_mid)) = (jfloat(0.5f));
	LINE_NUMBER(382);
	sp[0].o = (jobject)((mindustry_world_blocks_distribution_Conveyor$ConveyorBuild *) NULL_CHECK((frame[0].o)))->F_ids;
	ARRAY_ACCESS(jobject, sp[0].o, ((jint)((mindustry_world_blocks_distribution_Conveyor$ConveyorBuild *) NULL_CHECK((frame[0].o)))->F_mid)) = (frame[2].o);
	}
label_18:;
	LINE_NUMBER(384);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jbyte M_mindustry_world_blocks_distribution_Conveyor$ConveyorBuild_version_R_byte(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/distribution/Conveyor$ConveyorBuild:version", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(388);
	popStackFrame(ctx);
	return (jint(1));
	}

	popStackFrame(ctx);
}

void M_mindustry_world_blocks_distribution_Conveyor$ConveyorBuild_write_arc_util_io_Writes(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/distribution/Conveyor$ConveyorBuild:write", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(393);
	M_mindustry_gen_Building_write_arc_util_io_Writes(ctx, (frame[0].o), (frame[1].o));
	LINE_NUMBER(394);
	((func_arc_util_io_Writes_i_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_util_io_Writes_i_int])(ctx, (frame[1].o), ((jint)((mindustry_world_blocks_distribution_Conveyor$ConveyorBuild *) NULL_CHECK((frame[0].o)))->F_len));
	LINE_NUMBER(396);
	frame[2].i = (jint(0));
	}
label_3:;
	{
	if ((frame[2].i) >= ((jint)((mindustry_world_blocks_distribution_Conveyor$ConveyorBuild *) NULL_CHECK((frame[0].o)))->F_len)) goto label_4;
	}
	{
	LINE_NUMBER(397);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((mindustry_world_blocks_distribution_Conveyor$ConveyorBuild *) NULL_CHECK((frame[0].o)))->F_ids;
	((func_arc_util_io_Writes_s_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_util_io_Writes_s_int])(ctx, sp[0].o, ((jint)((mindustry_ctype_Content *) NULL_CHECK(((jobject)ARRAY_ACCESS(jobject, sp[1].o, (frame[2].i)))))->F_id));
	LINE_NUMBER(398);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((mindustry_world_blocks_distribution_Conveyor$ConveyorBuild *) NULL_CHECK((frame[0].o)))->F_xs;
	((func_arc_util_io_Writes_b_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_util_io_Writes_b_int])(ctx, sp[0].o, (jbyte((jint((((jfloat)ARRAY_ACCESS(jfloat, sp[1].o, (frame[2].i))) * (jfloat(127.0f))))))));
	LINE_NUMBER(399);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((mindustry_world_blocks_distribution_Conveyor$ConveyorBuild *) NULL_CHECK((frame[0].o)))->F_ys;
	((func_arc_util_io_Writes_b_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_util_io_Writes_b_int])(ctx, sp[0].o, (jbyte((jint(((((jfloat)ARRAY_ACCESS(jfloat, sp[1].o, (frame[2].i))) * (jfloat(255.0f))) - (jfloat(128.0f))))))));
	LINE_NUMBER(396);
	INST_IINC(2, 1);
	goto label_3;
	}
label_4:;
	LINE_NUMBER(401);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_world_blocks_distribution_Conveyor$ConveyorBuild_read_arc_util_io_Reads_byte(jcontext ctx, jobject self, jobject param0, jbyte param1) {
	NULL_CHECK(self);
	jtype frame[13];
	auto stack = &frame[9];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/distribution/Conveyor$ConveyorBuild:read", 13 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(405);
	M_mindustry_gen_Building_read_arc_util_io_Reads_byte(ctx, (frame[0].o), (frame[1].o), (frame[2].i));
	{
		auto cb = (mindustry_world_blocks_distribution_Conveyor$ConveyorBuild *) frame[0].o;
		if (!cb->F_ids) cb->F_ids = (jref) createArray(ctx, &class_mindustry_type_Item, 3);
		if (!cb->F_xs) cb->F_xs = (jref) createArray(ctx, &class_float, 3);
		if (!cb->F_ys) cb->F_ys = (jref) createArray(ctx, &class_float, 3);
	}
	LINE_NUMBER(406);
	jint temp0 = (jint)((func_arc_util_io_Reads_i_R_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_util_io_Reads_i_R_int])(ctx, (frame[1].o));
	frame[3].i = temp0;
	LINE_NUMBER(407);
	sp[0].o = frame[0].o;
	jint temp1 = (jint)SM_java_lang_Math_min_int_int_R_int(ctx, (frame[3].i), (jint(3)));
	((mindustry_world_blocks_distribution_Conveyor$ConveyorBuild *) NULL_CHECK(sp[0].o))->F_len = temp1;
	LINE_NUMBER(409);
	frame[4].i = (jint(0));
	}
label_4:;
	{
	if ((frame[4].i) >= (frame[3].i)) goto label_5;
	}
	{
	LINE_NUMBER(413);
	if ((frame[2].i) != 0) goto label_7;
	}
	{
	LINE_NUMBER(414);
	jint temp0 = (jint)((func_arc_util_io_Reads_i_R_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_util_io_Reads_i_R_int])(ctx, (frame[1].o));
	frame[8].i = temp0;
	LINE_NUMBER(415);
	frame[5].i = (jshort(((jbyte(((frame[8].i) >> (24)))) & (255))));
	LINE_NUMBER(416);
	frame[6].f = ((jfloat((jbyte(((frame[8].i) >> (16)))))) / (jfloat(127.0f)));
	LINE_NUMBER(417);
	frame[7].f = (((jfloat((jbyte(((frame[8].i) >> (8)))))) + (jfloat(128.0f))) / (jfloat(255.0f)));
	LINE_NUMBER(418);
	goto label_13;
	}
label_7:;
	{
	LINE_NUMBER(419);
	jint temp0 = (jint)((func_arc_util_io_Reads_s_R_short) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_util_io_Reads_s_R_short])(ctx, (frame[1].o));
	frame[5].i = temp0;
	LINE_NUMBER(420);
	jint temp1 = (jint)((func_arc_util_io_Reads_b_R_byte) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_util_io_Reads_b_R_byte])(ctx, (frame[1].o));
	frame[6].f = ((jfloat(temp1)) / (jfloat(127.0f)));
	LINE_NUMBER(421);
	jint temp2 = (jint)((func_arc_util_io_Reads_b_R_byte) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_util_io_Reads_b_R_byte])(ctx, (frame[1].o));
	frame[7].f = (((jfloat(temp2)) + (jfloat(128.0f))) / (jfloat(255.0f)));
	}
label_13:;
	{
	LINE_NUMBER(424);
	if ((frame[4].i) >= (jint(3))) goto label_16;
	}
	{
	LINE_NUMBER(425);
	sp[0].o = (jobject)((mindustry_world_blocks_distribution_Conveyor$ConveyorBuild *) NULL_CHECK((frame[0].o)))->F_ids;
	jint temp0 = frame[4].i;
	clinit_mindustry_Vars(ctx);
	sp[1].o = (jobject)SF_mindustry_Vars_content;
	sp[1].o = (jobject)((func_mindustry_core_ContentLoader_item_int_R_mindustry_type_Item) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_mindustry_core_ContentLoader_item_int_R_mindustry_type_Item])(ctx, sp[1].o, (frame[5].i));
	ARRAY_ACCESS(jobject, sp[0].o, temp0) = sp[1].o;
	LINE_NUMBER(426);
	sp[0].o = (jobject)((mindustry_world_blocks_distribution_Conveyor$ConveyorBuild *) NULL_CHECK((frame[0].o)))->F_xs;
	ARRAY_ACCESS(jfloat, sp[0].o, (frame[4].i)) = (frame[6].f);
	LINE_NUMBER(427);
	sp[0].o = (jobject)((mindustry_world_blocks_distribution_Conveyor$ConveyorBuild *) NULL_CHECK((frame[0].o)))->F_ys;
	ARRAY_ACCESS(jfloat, sp[0].o, (frame[4].i)) = (frame[7].f);
	}
label_16:;
	{
	LINE_NUMBER(409);
	INST_IINC(4, 1);
	goto label_4;
	}
label_5:;
	{
	LINE_NUMBER(432);
	((func_mindustry_world_blocks_distribution_Conveyor$ConveyorBuild_updateTile) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_world_blocks_distribution_Conveyor$ConveyorBuild_updateTile])(ctx, (frame[0].o));
	LINE_NUMBER(433);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jdouble M_mindustry_world_blocks_distribution_Conveyor$ConveyorBuild_sense_mindustry_logic_LAccess_R_double(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/distribution/Conveyor$ConveyorBuild:sense", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(437);
	sp[0].o = frame[1].o;
	clinit_mindustry_logic_LAccess(ctx);
	sp[1].o = (jobject)SF_mindustry_logic_LAccess_progress;
	if (sp[0].o != sp[1].o) goto label_1;
	}
	{
	LINE_NUMBER(438);
	if (((jint)((mindustry_world_blocks_distribution_Conveyor$ConveyorBuild *) NULL_CHECK((frame[0].o)))->F_len) != 0) goto label_3;
	}
	INST_DCONST(0);
	popStackFrame(ctx);
	INST_DRETURN();
label_3:;
	{
	LINE_NUMBER(439);
	sp[0].o = (jobject)((mindustry_world_blocks_distribution_Conveyor$ConveyorBuild *) NULL_CHECK((frame[0].o)))->F_ys;
	popStackFrame(ctx);
	return (jdouble(((jfloat)ARRAY_ACCESS(jfloat, sp[0].o, (((jint)((mindustry_world_blocks_distribution_Conveyor$ConveyorBuild *) NULL_CHECK((frame[0].o)))->F_len) - (jint(1)))))));
	}
label_1:;
	{
	LINE_NUMBER(441);
	jdouble temp0 = (jdouble)M_mindustry_gen_Building_sense_mindustry_logic_LAccess_R_double(ctx, (frame[0].o), (frame[1].o));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jobject M_mindustry_world_blocks_distribution_Conveyor$ConveyorBuild_senseObject_mindustry_logic_LAccess_R_java_lang_Object(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/distribution/Conveyor$ConveyorBuild:senseObject", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(446);
	sp[0].o = frame[1].o;
	clinit_mindustry_logic_LAccess(ctx);
	sp[1].o = (jobject)SF_mindustry_logic_LAccess_firstItem;
	if (sp[0].o != sp[1].o) goto label_1;
	}
	{
	if (((jint)((mindustry_world_blocks_distribution_Conveyor$ConveyorBuild *) NULL_CHECK((frame[0].o)))->F_len) <= 0) goto label_1;
	}
	{
	sp[0].o = (jobject)((mindustry_world_blocks_distribution_Conveyor$ConveyorBuild *) NULL_CHECK((frame[0].o)))->F_ids;
	popStackFrame(ctx);
	return ((jobject)ARRAY_ACCESS(jobject, sp[0].o, (((jint)((mindustry_world_blocks_distribution_Conveyor$ConveyorBuild *) NULL_CHECK((frame[0].o)))->F_len) - (jint(1)))));
	}
label_1:;
	{
	LINE_NUMBER(447);
	sp[0].o = (jobject)M_mindustry_gen_Building_senseObject_mindustry_logic_LAccess_R_java_lang_Object(ctx, (frame[0].o), (frame[1].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void M_mindustry_world_blocks_distribution_Conveyor$ConveyorBuild_setProp_mindustry_ctype_UnlockableContent_double(jcontext ctx, jobject self, jobject param0, jdouble param1) {
	NULL_CHECK(self);
	jtype frame[11];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/distribution/Conveyor$ConveyorBuild:setProp", 11 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].d = param1;
	{
	LINE_NUMBER(452);
	if ((isInstance(ctx, (frame[1].o), &class_mindustry_type_Item)) == 0) goto label_1;
	}
	{
	frame[4].o = (checkCast(ctx, &class_mindustry_type_Item, (frame[1].o)));
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_items;
	if (sp[0].o == nullptr) goto label_1;
	}
	{
	LINE_NUMBER(453);
	jint temp0 = (jint)SM_java_lang_Math_min_int_int_R_int(ctx, (jint((frame[2].d))), (jint(3)));
	frame[5].i = temp0;
	LINE_NUMBER(454);
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_items;
	jint temp1 = (jint)((func_mindustry_world_modules_ItemModule_get_mindustry_type_Item_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_modules_ItemModule_get_mindustry_type_Item_R_int])(ctx, sp[0].o, (frame[4].o));
	if (temp1 == (frame[5].i)) goto label_5;
	}
	{
	LINE_NUMBER(455);
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_items;
	jint temp0 = (jint)((func_mindustry_world_modules_ItemModule_get_mindustry_type_Item_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_modules_ItemModule_get_mindustry_type_Item_R_int])(ctx, sp[0].o, (frame[4].o));
	if (temp0 >= (frame[5].i)) goto label_7;
	}
	{
	LINE_NUMBER(456);
	sp[0].o = frame[0].o;
	sp[1].o = frame[4].o;
	jint temp0 = frame[5].i;
	sp[2].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_items;
	jint temp1 = (jint)((func_mindustry_world_modules_ItemModule_get_mindustry_type_Item_R_int) ((void **) nullCheck(ctx, sp[2].o)->vtable)[VTABLE_mindustry_world_modules_ItemModule_get_mindustry_type_Item_R_int])(ctx, sp[2].o, (frame[4].o));
	((func_mindustry_world_blocks_distribution_Conveyor$ConveyorBuild_handleStack_mindustry_type_Item_int_mindustry_gen_Teamc) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_blocks_distribution_Conveyor$ConveyorBuild_handleStack_mindustry_type_Item_int_mindustry_gen_Teamc])(ctx, sp[0].o, sp[1].o, (temp0 - temp1), (jobject(nullptr)));
	goto label_5;
	}
label_7:;
	{
	LINE_NUMBER(457);
	if ((frame[5].i) < 0) goto label_5;
	}
	{
	LINE_NUMBER(458);
	sp[0].o = frame[0].o;
	sp[1].o = frame[4].o;
	sp[2].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_items;
	jint temp0 = (jint)((func_mindustry_world_modules_ItemModule_get_mindustry_type_Item_R_int) ((void **) nullCheck(ctx, sp[2].o)->vtable)[VTABLE_mindustry_world_modules_ItemModule_get_mindustry_type_Item_R_int])(ctx, sp[2].o, (frame[4].o));
	jint temp1 = (jint)((func_mindustry_world_blocks_distribution_Conveyor$ConveyorBuild_removeStack_mindustry_type_Item_int_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_blocks_distribution_Conveyor$ConveyorBuild_removeStack_mindustry_type_Item_int_R_int])(ctx, sp[0].o, sp[1].o, (temp0 - (frame[5].i)));
	}
label_5:;
	LINE_NUMBER(461);
	goto label_10;
label_1:;
	{
	M_mindustry_gen_Building_setProp_mindustry_ctype_UnlockableContent_double(ctx, (frame[0].o), (frame[1].o), (frame[2].d));
	}
label_10:;
	LINE_NUMBER(462);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_world_blocks_distribution_Conveyor$ConveyorBuild_add_int(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/distribution/Conveyor$ConveyorBuild:add", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(465);
	jint temp0 = (jint)SM_java_lang_Math_max_int_int_R_int(ctx, ((frame[1].i) + (jint(1))), ((jint)((mindustry_world_blocks_distribution_Conveyor$ConveyorBuild *) NULL_CHECK((frame[0].o)))->F_len));
	frame[2].i = temp0;
	}
label_1:;
	{
	if ((frame[2].i) <= (frame[1].i)) goto label_2;
	}
	{
	LINE_NUMBER(466);
	sp[0].o = (jobject)((mindustry_world_blocks_distribution_Conveyor$ConveyorBuild *) NULL_CHECK((frame[0].o)))->F_ids;
	jint temp0 = frame[2].i;
	sp[1].o = (jobject)((mindustry_world_blocks_distribution_Conveyor$ConveyorBuild *) NULL_CHECK((frame[0].o)))->F_ids;
	ARRAY_ACCESS(jobject, sp[0].o, temp0) = ((jobject)ARRAY_ACCESS(jobject, sp[1].o, ((frame[2].i) - (jint(1)))));
	LINE_NUMBER(467);
	sp[0].o = (jobject)((mindustry_world_blocks_distribution_Conveyor$ConveyorBuild *) NULL_CHECK((frame[0].o)))->F_xs;
	jint temp1 = frame[2].i;
	sp[1].o = (jobject)((mindustry_world_blocks_distribution_Conveyor$ConveyorBuild *) NULL_CHECK((frame[0].o)))->F_xs;
	ARRAY_ACCESS(jfloat, sp[0].o, temp1) = ((jfloat)ARRAY_ACCESS(jfloat, sp[1].o, ((frame[2].i) - (jint(1)))));
	LINE_NUMBER(468);
	sp[0].o = (jobject)((mindustry_world_blocks_distribution_Conveyor$ConveyorBuild *) NULL_CHECK((frame[0].o)))->F_ys;
	jint temp2 = frame[2].i;
	sp[1].o = (jobject)((mindustry_world_blocks_distribution_Conveyor$ConveyorBuild *) NULL_CHECK((frame[0].o)))->F_ys;
	ARRAY_ACCESS(jfloat, sp[0].o, temp2) = ((jfloat)ARRAY_ACCESS(jfloat, sp[1].o, ((frame[2].i) - (jint(1)))));
	LINE_NUMBER(465);
	INST_IINC(2, -1);
	goto label_1;
	}
label_2:;
	{
	LINE_NUMBER(471);
	sp[0].o = frame[0].o;
	((mindustry_world_blocks_distribution_Conveyor$ConveyorBuild *) NULL_CHECK(sp[0].o))->F_len = (((jint)((mindustry_world_blocks_distribution_Conveyor$ConveyorBuild *) NULL_CHECK(sp[0].o))->F_len) + (jint(1)));
	LINE_NUMBER(472);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_world_blocks_distribution_Conveyor$ConveyorBuild_remove_int(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/distribution/Conveyor$ConveyorBuild:remove", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(475);
	frame[2].i = (frame[1].i);
	}
label_1:;
	{
	if ((frame[2].i) >= (((jint)((mindustry_world_blocks_distribution_Conveyor$ConveyorBuild *) NULL_CHECK((frame[0].o)))->F_len) - (jint(1)))) goto label_2;
	}
	{
	LINE_NUMBER(476);
	sp[0].o = (jobject)((mindustry_world_blocks_distribution_Conveyor$ConveyorBuild *) NULL_CHECK((frame[0].o)))->F_ids;
	jint temp0 = frame[2].i;
	sp[1].o = (jobject)((mindustry_world_blocks_distribution_Conveyor$ConveyorBuild *) NULL_CHECK((frame[0].o)))->F_ids;
	ARRAY_ACCESS(jobject, sp[0].o, temp0) = ((jobject)ARRAY_ACCESS(jobject, sp[1].o, ((frame[2].i) + (jint(1)))));
	LINE_NUMBER(477);
	sp[0].o = (jobject)((mindustry_world_blocks_distribution_Conveyor$ConveyorBuild *) NULL_CHECK((frame[0].o)))->F_xs;
	jint temp1 = frame[2].i;
	sp[1].o = (jobject)((mindustry_world_blocks_distribution_Conveyor$ConveyorBuild *) NULL_CHECK((frame[0].o)))->F_xs;
	ARRAY_ACCESS(jfloat, sp[0].o, temp1) = ((jfloat)ARRAY_ACCESS(jfloat, sp[1].o, ((frame[2].i) + (jint(1)))));
	LINE_NUMBER(478);
	sp[0].o = (jobject)((mindustry_world_blocks_distribution_Conveyor$ConveyorBuild *) NULL_CHECK((frame[0].o)))->F_ys;
	jint temp2 = frame[2].i;
	sp[1].o = (jobject)((mindustry_world_blocks_distribution_Conveyor$ConveyorBuild *) NULL_CHECK((frame[0].o)))->F_ys;
	ARRAY_ACCESS(jfloat, sp[0].o, temp2) = ((jfloat)ARRAY_ACCESS(jfloat, sp[1].o, ((frame[2].i) + (jint(1)))));
	LINE_NUMBER(475);
	INST_IINC(2, 1);
	goto label_1;
	}
label_2:;
	{
	LINE_NUMBER(481);
	sp[0].o = frame[0].o;
	((mindustry_world_blocks_distribution_Conveyor$ConveyorBuild *) NULL_CHECK(sp[0].o))->F_len = (((jint)((mindustry_world_blocks_distribution_Conveyor$ConveyorBuild *) NULL_CHECK(sp[0].o))->F_len) - (jint(1)));
	LINE_NUMBER(482);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_mindustry_world_blocks_distribution_Conveyor$ConveyorBuild_next_R_mindustry_gen_Building(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/distribution/Conveyor$ConveyorBuild:next", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(487);
	sp[0].o = (jobject)((mindustry_world_blocks_distribution_Conveyor$ConveyorBuild *) NULL_CHECK((frame[0].o)))->F_nextc;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

static void initAnnotations(jcontext ctx) {
	auto &clazz = class_mindustry_world_blocks_distribution_Conveyor$ConveyorBuild;
	auto fields = (java_lang_reflect_Field **) ((jarray) clazz.fields)->data;
	auto methods = (java_lang_reflect_Method **) ((jarray) clazz.methods)->data;
	auto constructors = (java_lang_reflect_Constructor **) ((jarray) clazz.constructors)->data;

	fields[0]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[1]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[2]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[3]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	{ // Field next
		auto annotationArray = (jarray) createArray(ctx, &class_java_lang_annotation_Annotation, 1);
		fields[4]->F_annotations = (intptr_t) annotationArray;
		auto annotations = (jobject *) annotationArray->data;
		annotations[0] = gcAlloc(ctx, &class_arc_util_Nullable);
	}

	{ // Field nextc
		auto annotationArray = (jarray) createArray(ctx, &class_java_lang_annotation_Annotation, 1);
		fields[5]->F_annotations = (intptr_t) annotationArray;
		auto annotations = (jobject *) annotationArray->data;
		annotations[0] = gcAlloc(ctx, &class_arc_util_Nullable);
	}

	fields[6]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[7]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[8]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[9]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[10]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[11]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[12]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[13]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[14]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[15]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	((java_lang_reflect_Method *) ((java_lang_reflect_Constructor *) constructors[0])->F_method)->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[0]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[1]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[2]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[3]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[4]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[5]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[6]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[7]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[8]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[9]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[10]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[11]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[12]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[13]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[14]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[15]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[16]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[17]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[18]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[19]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[20]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[21]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[22]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	{ // Method next
		auto annotationArray = (jarray) createArray(ctx, &class_java_lang_annotation_Annotation, 1);
		methods[23]->F_annotations = (intptr_t) annotationArray;
		auto annotations = (jobject *) annotationArray->data;
		annotations[0] = gcAlloc(ctx, &class_arc_util_Nullable);
	}
}

void *vtable_mindustry_world_blocks_distribution_Conveyor$ConveyorBuild[] {
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
	(void *) M_mindustry_world_blocks_distribution_Conveyor$ConveyorBuild_shouldAmbientSound_R_boolean,
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
	(void *) M_mindustry_world_blocks_distribution_Conveyor$ConveyorBuild_write_arc_util_io_Writes,
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
	(void *) M_mindustry_world_blocks_distribution_Conveyor$ConveyorBuild_sense_mindustry_logic_LAccess_R_double,
	(void *) M_mindustry_gen_Building_sense_mindustry_ctype_Content_R_double,
	(void *) M_mindustry_world_blocks_distribution_Conveyor$ConveyorBuild_senseObject_mindustry_logic_LAccess_R_java_lang_Object,
	(void *) M_mindustry_gen_Building_setProp_mindustry_logic_LAccess_double,
	(void *) M_mindustry_gen_Building_setProp_mindustry_logic_LAccess_java_lang_Object,
	(void *) M_mindustry_world_blocks_distribution_Conveyor$ConveyorBuild_setProp_mindustry_ctype_UnlockableContent_double,
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
	(void *) M_mindustry_world_blocks_distribution_Conveyor$ConveyorBuild_read_arc_util_io_Reads_byte,
	(void *) M_mindustry_gen_Building_create_mindustry_world_Block_mindustry_game_Team_R_mindustry_gen_Building,
	(void *) M_mindustry_gen_Building_getLiquidDestination_mindustry_gen_Building_mindustry_type_Liquid_R_mindustry_gen_Building,
	(void *) M_mindustry_gen_Building_init_mindustry_world_Tile_mindustry_game_Team_boolean_int_R_mindustry_gen_Building,
	(void *) M_mindustry_gen_Building_nearby_int_int_R_mindustry_gen_Building,
	(void *) M_mindustry_gen_Building_nearby_int_R_mindustry_gen_Building,
	(void *) M_mindustry_gen_Building_getCursor_R_arc_Graphics$Cursor,
	(void *) M_mindustry_gen_Building_getDisplayIcon_R_arc_graphics_g2d_TextureRegion,
	(void *) M_mindustry_gen_Building_getPowerConnections_arc_struct_Seq_R_arc_struct_Seq,
	(void *) M_mindustry_gen_Building_absorbLasers_R_boolean,
	(void *) M_mindustry_world_blocks_distribution_Conveyor$ConveyorBuild_acceptItem_mindustry_gen_Building_mindustry_type_Item_R_boolean,
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
	(void *) M_mindustry_world_blocks_distribution_Conveyor$ConveyorBuild_version_R_byte,
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
	(void *) M_mindustry_world_blocks_distribution_Conveyor$ConveyorBuild_acceptStack_mindustry_type_Item_int_mindustry_gen_Teamc_R_int,
	(void *) M_mindustry_gen_Building_explosionItemCap_R_int,
	(void *) M_mindustry_gen_Building_getMaximumAccepted_mindustry_type_Item_R_int,
	(void *) M_mindustry_gen_Building_moduleBitmask_R_int,
	(void *) M_mindustry_gen_Building_pos_R_int,
	(void *) M_mindustry_world_blocks_distribution_Conveyor$ConveyorBuild_removeStack_mindustry_type_Item_int_R_int,
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
	(void *) M_mindustry_world_blocks_distribution_Conveyor$ConveyorBuild_draw,
	(void *) M_mindustry_gen_Building_drawCached,
	(void *) M_mindustry_gen_Building_drawConfigure,
	(void *) M_mindustry_world_blocks_distribution_Conveyor$ConveyorBuild_drawCracks,
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
	(void *) M_mindustry_world_blocks_distribution_Conveyor$ConveyorBuild_getStackOffset_mindustry_type_Item_arc_math_geom_Vec2,
	(void *) M_mindustry_world_blocks_distribution_Conveyor$ConveyorBuild_handleItem_mindustry_gen_Building_mindustry_type_Item,
	(void *) M_mindustry_gen_Building_handleLiquid_mindustry_gen_Building_mindustry_type_Liquid_float,
	(void *) M_mindustry_gen_Building_handlePayload_mindustry_gen_Building_mindustry_world_blocks_payloads_Payload,
	(void *) M_mindustry_world_blocks_distribution_Conveyor$ConveyorBuild_handleStack_mindustry_type_Item_int_mindustry_gen_Teamc,
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
	(void *) M_mindustry_world_blocks_distribution_Conveyor$ConveyorBuild_onProximityUpdate,
	(void *) M_mindustry_gen_Building_onRemoved,
	(void *) M_mindustry_world_blocks_distribution_Conveyor$ConveyorBuild_overwrote_arc_struct_Seq,
	(void *) M_mindustry_world_blocks_distribution_Conveyor$ConveyorBuild_payloadDraw,
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
	(void *) M_mindustry_world_blocks_distribution_Conveyor$ConveyorBuild_unitOn_mindustry_gen_Unit,
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
	(void *) M_mindustry_world_blocks_distribution_Conveyor$ConveyorBuild_updateTile,
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
	(void *) M_mindustry_world_blocks_distribution_Conveyor$ConveyorBuild_next_R_mindustry_gen_Building,
	(void *) M_mindustry_world_blocks_distribution_Conveyor$ConveyorBuild_pass_mindustry_type_Item_R_boolean,
	(void *) M_mindustry_world_blocks_distribution_Conveyor$ConveyorBuild_add_int,
	(void *) M_mindustry_world_blocks_distribution_Conveyor$ConveyorBuild_remove_int,
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
	{ "next", "()Lmindustry/gen/Building;" },
	{ "pass", "(Lmindustry/type/Item;)Z" },
	{ "add", "(I)V" },
	{ "remove", "(I)V" },
};

static jclass interfaces[] { &class_mindustry_world_blocks_distribution_ChainedBuilding, };

static FieldMetadata fields[] {
	{ "ids", getArrayClass(&class_mindustry_type_Item, 1), offsetof(mindustry_world_blocks_distribution_Conveyor$ConveyorBuild, F_ids), "[Lmindustry/type/Item;", 1 },
	{ "xs", getArrayClass(&class_float, 1), offsetof(mindustry_world_blocks_distribution_Conveyor$ConveyorBuild, F_xs), "[F", 1 },
	{ "ys", getArrayClass(&class_float, 1), offsetof(mindustry_world_blocks_distribution_Conveyor$ConveyorBuild, F_ys), "[F", 1 },
	{ "len", &class_int, offsetof(mindustry_world_blocks_distribution_Conveyor$ConveyorBuild, F_len), "I", 1 },
	{ "next", &class_mindustry_gen_Building, offsetof(mindustry_world_blocks_distribution_Conveyor$ConveyorBuild, F_next), "Lmindustry/gen/Building;", 1 },
	{ "nextc", &class_mindustry_world_blocks_distribution_Conveyor$ConveyorBuild, offsetof(mindustry_world_blocks_distribution_Conveyor$ConveyorBuild, F_nextc), "Lmindustry/world/blocks/distribution/Conveyor$ConveyorBuild;", 1 },
	{ "aligned", &class_boolean, offsetof(mindustry_world_blocks_distribution_Conveyor$ConveyorBuild, F_aligned), "Z", 1 },
	{ "lastInserted", &class_int, offsetof(mindustry_world_blocks_distribution_Conveyor$ConveyorBuild, F_lastInserted), "I", 1 },
	{ "mid", &class_int, offsetof(mindustry_world_blocks_distribution_Conveyor$ConveyorBuild, F_mid), "I", 1 },
	{ "minitem", &class_float, offsetof(mindustry_world_blocks_distribution_Conveyor$ConveyorBuild, F_minitem), "F", 1 },
	{ "blendbits", &class_int, offsetof(mindustry_world_blocks_distribution_Conveyor$ConveyorBuild, F_blendbits), "I", 1 },
	{ "blending", &class_int, offsetof(mindustry_world_blocks_distribution_Conveyor$ConveyorBuild, F_blending), "I", 1 },
	{ "blendsclx", &class_int, offsetof(mindustry_world_blocks_distribution_Conveyor$ConveyorBuild, F_blendsclx), "I", 1 },
	{ "blendscly", &class_int, offsetof(mindustry_world_blocks_distribution_Conveyor$ConveyorBuild, F_blendscly), "I", 1 },
	{ "clogHeat", &class_float, offsetof(mindustry_world_blocks_distribution_Conveyor$ConveyorBuild, F_clogHeat), "F", 1 },
	{ "this$0", &class_mindustry_world_blocks_distribution_Conveyor, offsetof(mindustry_world_blocks_distribution_Conveyor$ConveyorBuild, F_this$0), "Lmindustry/world/blocks/distribution/Conveyor;", 4112 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_mindustry_world_blocks_distribution_Conveyor$ConveyorBuild_mindustry_world_blocks_distribution_Conveyor, 0, "(Lmindustry/world/blocks/distribution/Conveyor;)V", 1 },
	{ "draw", (intptr_t) M_mindustry_world_blocks_distribution_Conveyor$ConveyorBuild_draw, VTABLE_mindustry_world_blocks_distribution_Conveyor$ConveyorBuild_draw, "()V", 1 },
	{ "payloadDraw", (intptr_t) M_mindustry_world_blocks_distribution_Conveyor$ConveyorBuild_payloadDraw, VTABLE_mindustry_world_blocks_distribution_Conveyor$ConveyorBuild_payloadDraw, "()V", 1 },
	{ "drawCracks", (intptr_t) M_mindustry_world_blocks_distribution_Conveyor$ConveyorBuild_drawCracks, VTABLE_mindustry_world_blocks_distribution_Conveyor$ConveyorBuild_drawCracks, "()V", 1 },
	{ "overwrote", (intptr_t) M_mindustry_world_blocks_distribution_Conveyor$ConveyorBuild_overwrote_arc_struct_Seq, VTABLE_mindustry_world_blocks_distribution_Conveyor$ConveyorBuild_overwrote_arc_struct_Seq, "(Larc/struct/Seq;)V", 1 },
	{ "shouldAmbientSound", (intptr_t) M_mindustry_world_blocks_distribution_Conveyor$ConveyorBuild_shouldAmbientSound_R_boolean, VTABLE_mindustry_world_blocks_distribution_Conveyor$ConveyorBuild_shouldAmbientSound_R_boolean, "()Z", 1 },
	{ "onProximityUpdate", (intptr_t) M_mindustry_world_blocks_distribution_Conveyor$ConveyorBuild_onProximityUpdate, VTABLE_mindustry_world_blocks_distribution_Conveyor$ConveyorBuild_onProximityUpdate, "()V", 1 },
	{ "unitOn", (intptr_t) M_mindustry_world_blocks_distribution_Conveyor$ConveyorBuild_unitOn_mindustry_gen_Unit, VTABLE_mindustry_world_blocks_distribution_Conveyor$ConveyorBuild_unitOn_mindustry_gen_Unit, "(Lmindustry/gen/Unit;)V", 1 },
	{ "updateTile", (intptr_t) M_mindustry_world_blocks_distribution_Conveyor$ConveyorBuild_updateTile, VTABLE_mindustry_world_blocks_distribution_Conveyor$ConveyorBuild_updateTile, "()V", 1 },
	{ "pass", (intptr_t) M_mindustry_world_blocks_distribution_Conveyor$ConveyorBuild_pass_mindustry_type_Item_R_boolean, VTABLE_mindustry_world_blocks_distribution_Conveyor$ConveyorBuild_pass_mindustry_type_Item_R_boolean, "(Lmindustry/type/Item;)Z", 1 },
	{ "removeStack", (intptr_t) M_mindustry_world_blocks_distribution_Conveyor$ConveyorBuild_removeStack_mindustry_type_Item_int_R_int, VTABLE_mindustry_world_blocks_distribution_Conveyor$ConveyorBuild_removeStack_mindustry_type_Item_int_R_int, "(Lmindustry/type/Item;I)I", 1 },
	{ "getStackOffset", (intptr_t) M_mindustry_world_blocks_distribution_Conveyor$ConveyorBuild_getStackOffset_mindustry_type_Item_arc_math_geom_Vec2, VTABLE_mindustry_world_blocks_distribution_Conveyor$ConveyorBuild_getStackOffset_mindustry_type_Item_arc_math_geom_Vec2, "(Lmindustry/type/Item;Larc/math/geom/Vec2;)V", 1 },
	{ "acceptStack", (intptr_t) M_mindustry_world_blocks_distribution_Conveyor$ConveyorBuild_acceptStack_mindustry_type_Item_int_mindustry_gen_Teamc_R_int, VTABLE_mindustry_world_blocks_distribution_Conveyor$ConveyorBuild_acceptStack_mindustry_type_Item_int_mindustry_gen_Teamc_R_int, "(Lmindustry/type/Item;ILmindustry/gen/Teamc;)I", 1 },
	{ "handleStack", (intptr_t) M_mindustry_world_blocks_distribution_Conveyor$ConveyorBuild_handleStack_mindustry_type_Item_int_mindustry_gen_Teamc, VTABLE_mindustry_world_blocks_distribution_Conveyor$ConveyorBuild_handleStack_mindustry_type_Item_int_mindustry_gen_Teamc, "(Lmindustry/type/Item;ILmindustry/gen/Teamc;)V", 1 },
	{ "acceptItem", (intptr_t) M_mindustry_world_blocks_distribution_Conveyor$ConveyorBuild_acceptItem_mindustry_gen_Building_mindustry_type_Item_R_boolean, VTABLE_mindustry_world_blocks_distribution_Conveyor$ConveyorBuild_acceptItem_mindustry_gen_Building_mindustry_type_Item_R_boolean, "(Lmindustry/gen/Building;Lmindustry/type/Item;)Z", 1 },
	{ "handleItem", (intptr_t) M_mindustry_world_blocks_distribution_Conveyor$ConveyorBuild_handleItem_mindustry_gen_Building_mindustry_type_Item, VTABLE_mindustry_world_blocks_distribution_Conveyor$ConveyorBuild_handleItem_mindustry_gen_Building_mindustry_type_Item, "(Lmindustry/gen/Building;Lmindustry/type/Item;)V", 1 },
	{ "version", (intptr_t) M_mindustry_world_blocks_distribution_Conveyor$ConveyorBuild_version_R_byte, VTABLE_mindustry_world_blocks_distribution_Conveyor$ConveyorBuild_version_R_byte, "()B", 1 },
	{ "write", (intptr_t) M_mindustry_world_blocks_distribution_Conveyor$ConveyorBuild_write_arc_util_io_Writes, VTABLE_mindustry_world_blocks_distribution_Conveyor$ConveyorBuild_write_arc_util_io_Writes, "(Larc/util/io/Writes;)V", 1 },
	{ "read", (intptr_t) M_mindustry_world_blocks_distribution_Conveyor$ConveyorBuild_read_arc_util_io_Reads_byte, VTABLE_mindustry_world_blocks_distribution_Conveyor$ConveyorBuild_read_arc_util_io_Reads_byte, "(Larc/util/io/Reads;B)V", 1 },
	{ "sense", (intptr_t) M_mindustry_world_blocks_distribution_Conveyor$ConveyorBuild_sense_mindustry_logic_LAccess_R_double, VTABLE_mindustry_world_blocks_distribution_Conveyor$ConveyorBuild_sense_mindustry_logic_LAccess_R_double, "(Lmindustry/logic/LAccess;)D", 1 },
	{ "senseObject", (intptr_t) M_mindustry_world_blocks_distribution_Conveyor$ConveyorBuild_senseObject_mindustry_logic_LAccess_R_java_lang_Object, VTABLE_mindustry_world_blocks_distribution_Conveyor$ConveyorBuild_senseObject_mindustry_logic_LAccess_R_java_lang_Object, "(Lmindustry/logic/LAccess;)Ljava/lang/Object;", 1 },
	{ "setProp", (intptr_t) M_mindustry_world_blocks_distribution_Conveyor$ConveyorBuild_setProp_mindustry_ctype_UnlockableContent_double, VTABLE_mindustry_world_blocks_distribution_Conveyor$ConveyorBuild_setProp_mindustry_ctype_UnlockableContent_double, "(Lmindustry/ctype/UnlockableContent;D)V", 1 },
	{ "add", (intptr_t) M_mindustry_world_blocks_distribution_Conveyor$ConveyorBuild_add_int, VTABLE_mindustry_world_blocks_distribution_Conveyor$ConveyorBuild_add_int, "(I)V", 17 },
	{ "remove", (intptr_t) M_mindustry_world_blocks_distribution_Conveyor$ConveyorBuild_remove_int, VTABLE_mindustry_world_blocks_distribution_Conveyor$ConveyorBuild_remove_int, "(I)V", 17 },
	{ "next", (intptr_t) M_mindustry_world_blocks_distribution_Conveyor$ConveyorBuild_next_R_mindustry_gen_Building, VTABLE_mindustry_world_blocks_distribution_Conveyor$ConveyorBuild_next_R_mindustry_gen_Building, "()Lmindustry/gen/Building;", 1 },
};

Class class_mindustry_world_blocks_distribution_Conveyor$ConveyorBuild{
		.nativeName = (intptr_t) "mindustry/world/blocks/distribution/Conveyor$ConveyorBuild",
		.parentClass = (intptr_t) &class_mindustry_gen_Building,
		.size = sizeof(mindustry_world_blocks_distribution_Conveyor$ConveyorBuild),
		.classVtable = (intptr_t) vtable_mindustry_world_blocks_distribution_Conveyor$ConveyorBuild,
		.staticInitializer = (intptr_t) clinit_mindustry_world_blocks_distribution_Conveyor$ConveyorBuild,
		.annotationInitializer = (intptr_t) initAnnotations,
		.markFunction = (intptr_t) mark_mindustry_world_blocks_distribution_Conveyor$ConveyorBuild,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) &class_mindustry_world_blocks_distribution_Conveyor,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 33,
		.interfaceCount = 1,
		.nativeInterfaces = (intptr_t) interfaces,
		.fieldCount = 16,
		.nativeFields = (intptr_t) fields,
		.methodCount = 25,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 314,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_mindustry_world_blocks_distribution_Conveyor$ConveyorBuild = registerClass(&class_mindustry_world_blocks_distribution_Conveyor$ConveyorBuild);

}

