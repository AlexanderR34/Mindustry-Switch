#include "mindustry/world/blocks/power/BeamNode_BeamNodeBuild.h"
#include "mindustry/world/Block.h"
#include "arc/math/geom/Point2.h"
#include "mindustry/world/meta/BlockStatus.h"
#include "arc/graphics/Color.h"
#include "arc/struct/IntSeq.h"
#include "mindustry/ui/Displayable.h"
#include "arc/graphics/g2d/Draw.h"
#include "mindustry/core/Renderer.h"
#include "java/util/Arrays.h"
#include "mindustry/world/Tile.h"
#include "mindustry/world/blocks/power/BeamNode_BeamNodeBuild.h"
#include "mindustry/world/modules/PowerModule.h"
#include "arc/math/geom/Position.h"
#include "arc/math/geom/Geometry.h"
#include "arc/math/Mathf.h"
#include "java/lang/Math.h"
#include "mindustry/world/blocks/power/PowerGraph.h"
#include "arc/graphics/g2d/TextureRegion.h"
#include "mindustry/gen/Building.h"
#include "java/lang/Object.h"
#include "mindustry/world/blocks/power/PowerNode.h"
#include "mindustry/graphics/Drawf.h"
#include "mindustry/world/blocks/power/BeamNode.h"
#include "mindustry/game/Team.h"
#include "mindustry/Vars.h"
#include "mindustry/core/World.h"

extern "C" {


void mark_mindustry_world_blocks_power_BeamNode$BeamNodeBuild(jobject object, jint mark, jint depth) {
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
	auto self = (mindustry_world_blocks_power_BeamNode$BeamNodeBuild *) object;
	if (self->F_links)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_links)->clazz)->markFunction)((jobject) self->F_links, mark, depth + 1);
	if (self->F_dests)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_dests)->clazz)->markFunction)((jobject) self->F_dests, mark, depth + 1);
	if (self->F_this$0)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_this$0)->clazz)->markFunction)((jobject) self->F_this$0, mark, depth + 1);
}

void clinit_mindustry_world_blocks_power_BeamNode$BeamNodeBuild(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	clinit_mindustry_gen_Building(ctx);
}

void init_mindustry_world_blocks_power_BeamNode$BeamNodeBuild_mindustry_world_blocks_power_BeamNode(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/power/BeamNode$BeamNodeBuild:<init>", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_world_blocks_power_BeamNode$BeamNodeBuild(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(155);
	((mindustry_world_blocks_power_BeamNode$BeamNodeBuild *) NULL_CHECK((frame[0].o)))->F_this$0 = (jref) (frame[1].o);
	init_mindustry_gen_Building(ctx, (frame[0].o));
	LINE_NUMBER(157);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)createArray(ctx, &class_mindustry_gen_Building, (jint(4)));
	((mindustry_world_blocks_power_BeamNode$BeamNodeBuild *) NULL_CHECK(sp[0].o))->F_links = (jref) sp[1].o;
	LINE_NUMBER(158);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)createArray(ctx, &class_mindustry_world_Tile, (jint(4)));
	((mindustry_world_blocks_power_BeamNode$BeamNodeBuild *) NULL_CHECK(sp[0].o))->F_dests = (jref) sp[1].o;
	LINE_NUMBER(159);
	((mindustry_world_blocks_power_BeamNode$BeamNodeBuild *) NULL_CHECK((frame[0].o)))->F_lastChange = (-2);
	LINE_NUMBER(155);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jbool M_mindustry_world_blocks_power_BeamNode$BeamNodeBuild_couldConnect_int_mindustry_world_Block_int_int_R_boolean(jcontext ctx, jobject self, jint param0, jobject param1, jint param2, jint param3) {
	NULL_CHECK(self);
	jtype frame[19];
	auto stack = &frame[14];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/power/BeamNode$BeamNodeBuild:couldConnect", 19 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].o = param1;
	frame[3].i = param2;
	frame[4].i = param3;
	{
	LINE_NUMBER(163);
	frame[5].i = ((-(((jint)((mindustry_world_Block *) NULL_CHECK((frame[2].o)))->F_size) - (jint(1)))) / (jint(2)));
	LINE_NUMBER(164);
	frame[6].i = ((frame[3].i) + (frame[5].i));
	frame[7].i = ((frame[4].i) + (frame[5].i));
	frame[8].i = ((((frame[3].i) + (frame[5].i)) + ((jint)((mindustry_world_Block *) NULL_CHECK((frame[2].o)))->F_size)) - (jint(1)));
	frame[9].i = ((((frame[4].i) + (frame[5].i)) + ((jint)((mindustry_world_Block *) NULL_CHECK((frame[2].o)))->F_size)) - (jint(1)));
	LINE_NUMBER(165);
	clinit_arc_math_geom_Geometry(ctx);
	sp[0].o = (jobject)SF_arc_math_geom_Geometry_d4;
	frame[10].o = ((jobject)ARRAY_ACCESS(jobject, sp[0].o, (frame[1].i)));
	LINE_NUMBER(167);
	sp[0].o = (jobject)((mindustry_world_blocks_power_BeamNode$BeamNodeBuild *) NULL_CHECK((frame[0].o)))->F_this$0;
	frame[11].i = (((jint)((mindustry_world_Block *) NULL_CHECK(sp[0].o))->F_size) / (jint(2)));
	LINE_NUMBER(170);
	frame[12].i = ((jint(1)) + (frame[11].i));
	}
label_8:;
	{
	jint temp0 = frame[12].i;
	sp[0].o = (jobject)((mindustry_world_blocks_power_BeamNode$BeamNodeBuild *) NULL_CHECK((frame[0].o)))->F_this$0;
	if (temp0 > (((jint)((mindustry_world_blocks_power_BeamNode *) NULL_CHECK(sp[0].o))->F_range) + (frame[11].i))) goto label_9;
	}
	{
	LINE_NUMBER(171);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_world;
	sp[1].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_tile;
	jint temp0 = ((jint)((mindustry_world_Tile *) NULL_CHECK(sp[1].o))->F_x) + ((frame[12].i) * ((jint)((arc_math_geom_Point2 *) NULL_CHECK((frame[10].o)))->F_x));
	sp[1].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_tile;
	sp[0].o = (jobject)((func_mindustry_core_World_tile_int_int_R_mindustry_world_Tile) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_World_tile_int_int_R_mindustry_world_Tile])(ctx, sp[0].o, temp0, (((jint)((mindustry_world_Tile *) NULL_CHECK(sp[1].o))->F_y) + ((frame[12].i) * ((jint)((arc_math_geom_Point2 *) NULL_CHECK((frame[10].o)))->F_y))));
	frame[13].o = sp[0].o;
	LINE_NUMBER(173);
	if ((frame[13].o) != nullptr) goto label_12;
	}
	INST_ICONST(0);
	popStackFrame(ctx);
	INST_IRETURN();
label_12:;
	{
	LINE_NUMBER(176);
	sp[0].o = (jobject)((mindustry_world_Tile *) NULL_CHECK((frame[13].o)))->F_build;
	if (sp[0].o == nullptr) goto label_13;
	}
	{
	sp[0].o = (jobject)((mindustry_world_Tile *) NULL_CHECK((frame[13].o)))->F_build;
	jint temp0 = (jint)((func_mindustry_gen_Building_isInsulated_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_gen_Building_isInsulated_R_boolean])(ctx, sp[0].o);
	if (temp0 != 0) goto label_14;
	}
label_13:;
	{
	sp[0].o = (jobject)((func_mindustry_world_Tile_block_R_mindustry_world_Block) ((void **) nullCheck(ctx, (frame[13].o))->vtable)[VTABLE_mindustry_world_Tile_block_R_mindustry_world_Block])(ctx, (frame[13].o));
	if (((jint)((mindustry_world_Block *) NULL_CHECK(sp[0].o))->F_hasPower) == 0) goto label_15;
	}
	{
	sp[0].o = (jobject)((func_mindustry_world_Tile_block_R_mindustry_world_Block) ((void **) nullCheck(ctx, (frame[13].o))->vtable)[VTABLE_mindustry_world_Tile_block_R_mindustry_world_Block])(ctx, (frame[13].o));
	if (((jint)((mindustry_world_Block *) NULL_CHECK(sp[0].o))->F_connectedPower) == 0) goto label_15;
	}
	{
	sp[0].o = (jobject)((func_mindustry_world_Tile_team_R_mindustry_game_Team) ((void **) nullCheck(ctx, (frame[13].o))->vtable)[VTABLE_mindustry_world_Tile_team_R_mindustry_game_Team])(ctx, (frame[13].o));
	sp[1].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_team;
	if (sp[0].o != sp[1].o) goto label_15;
	}
label_14:;
	{
	LINE_NUMBER(177);
	popStackFrame(ctx);
	return (jint(0));
	}
label_15:;
	{
	LINE_NUMBER(181);
	if (((jint)((mindustry_world_Tile *) NULL_CHECK((frame[13].o)))->F_x) < (frame[6].i)) goto label_16;
	}
	{
	if (((jint)((mindustry_world_Tile *) NULL_CHECK((frame[13].o)))->F_y) < (frame[7].i)) goto label_16;
	}
	{
	if (((jint)((mindustry_world_Tile *) NULL_CHECK((frame[13].o)))->F_x) > (frame[8].i)) goto label_16;
	}
	{
	if (((jint)((mindustry_world_Tile *) NULL_CHECK((frame[13].o)))->F_y) > (frame[9].i)) goto label_16;
	}
	{
	LINE_NUMBER(182);
	popStackFrame(ctx);
	return (jint(1));
	}
label_16:;
	{
	LINE_NUMBER(170);
	INST_IINC(12, 1);
	goto label_8;
	}
label_9:;
	{
	LINE_NUMBER(186);
	popStackFrame(ctx);
	return (jint(0));
	}

	popStackFrame(ctx);
}

void M_mindustry_world_blocks_power_BeamNode$BeamNodeBuild_updateTile(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/power/BeamNode$BeamNodeBuild:updateTile", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(192);
	jint temp0 = (jint)((mindustry_world_blocks_power_BeamNode$BeamNodeBuild *) NULL_CHECK((frame[0].o)))->F_lastChange;
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_world;
	if (temp0 == ((jint)((mindustry_core_World *) NULL_CHECK(sp[0].o))->F_tileChanges)) goto label_1;
	}
	{
	LINE_NUMBER(193);
	sp[0].o = frame[0].o;
	clinit_mindustry_Vars(ctx);
	sp[1].o = (jobject)SF_mindustry_Vars_world;
	((mindustry_world_blocks_power_BeamNode$BeamNodeBuild *) NULL_CHECK(sp[0].o))->F_lastChange = ((jint)((mindustry_core_World *) NULL_CHECK(sp[1].o))->F_tileChanges);
	LINE_NUMBER(194);
	((func_mindustry_world_blocks_power_BeamNode$BeamNodeBuild_updateDirections) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_world_blocks_power_BeamNode$BeamNodeBuild_updateDirections])(ctx, (frame[0].o));
	}
label_1:;
	LINE_NUMBER(196);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jobject M_mindustry_world_blocks_power_BeamNode$BeamNodeBuild_status_R_mindustry_world_meta_BlockStatus(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/power/BeamNode$BeamNodeBuild:status", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(200);
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_power;
	sp[0].o = (jobject)((mindustry_world_modules_PowerModule *) NULL_CHECK(sp[0].o))->F_graph;
	jfloat temp0 = (jfloat)((func_mindustry_world_blocks_power_PowerGraph_getPowerBalance_R_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_blocks_power_PowerGraph_getPowerBalance_R_float])(ctx, sp[0].o);
	frame[1].f = temp0;
	LINE_NUMBER(201);
	if ((floatCompare((frame[1].f), (jfloat(0)), -1)) <= 0) goto label_2;
	}
	clinit_mindustry_world_meta_BlockStatus(ctx);
	(sp++)->o = SF_mindustry_world_meta_BlockStatus_active;
	popStackFrame(ctx);
	INST_ARETURN();
label_2:;
	{
	LINE_NUMBER(202);
	if ((floatCompare((frame[1].f), (jfloat(0)), 1)) >= 0) goto label_3;
	}
	{
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_power;
	sp[0].o = (jobject)((mindustry_world_modules_PowerModule *) NULL_CHECK(sp[0].o))->F_graph;
	jfloat temp0 = (jfloat)((func_mindustry_world_blocks_power_PowerGraph_getLastPowerStored_R_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_blocks_power_PowerGraph_getLastPowerStored_R_float])(ctx, sp[0].o);
	if ((floatCompare(temp0, (jfloat(0)), -1)) <= 0) goto label_3;
	}
	clinit_mindustry_world_meta_BlockStatus(ctx);
	(sp++)->o = SF_mindustry_world_meta_BlockStatus_noOutput;
	popStackFrame(ctx);
	INST_ARETURN();
label_3:;
	{
	LINE_NUMBER(203);
	clinit_mindustry_world_meta_BlockStatus(ctx);
	sp[0].o = (jobject)SF_mindustry_world_meta_BlockStatus_noInput;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void M_mindustry_world_blocks_power_BeamNode$BeamNodeBuild_draw(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[15];
	auto stack = &frame[7];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/power/BeamNode$BeamNodeBuild:draw", 15 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(208);
	M_mindustry_gen_Building_draw(ctx, (frame[0].o));
	LINE_NUMBER(210);
	jint temp0 = (jint)SM_arc_math_Mathf_zero_float_R_boolean(ctx, (clinit_mindustry_core_Renderer(ctx), (jfloat)SF_mindustry_core_Renderer_laserOpacity));
	if (temp0 != 0) goto label_2;
	}
	{
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_team;
	clinit_mindustry_game_Team(ctx);
	sp[1].o = (jobject)SF_mindustry_game_Team_derelict;
	if (sp[0].o != sp[1].o) goto label_3;
	}
label_2:;
	popStackFrame(ctx);
	INST_RETURN();
label_3:;
	{
	LINE_NUMBER(212);
	SM_arc_graphics_g2d_Draw_z_float(ctx, (jfloat(70.0f)));
	LINE_NUMBER(213);
	sp[0].o = (jobject)((mindustry_world_blocks_power_BeamNode$BeamNodeBuild *) NULL_CHECK((frame[0].o)))->F_this$0;
	sp[0].o = (jobject)((mindustry_world_blocks_power_BeamNode *) NULL_CHECK(sp[0].o))->F_laserColor1;
	sp[1].o = (jobject)((mindustry_world_blocks_power_BeamNode$BeamNodeBuild *) NULL_CHECK((frame[0].o)))->F_this$0;
	sp[1].o = (jobject)((mindustry_world_blocks_power_BeamNode *) NULL_CHECK(sp[1].o))->F_laserColor2;
	jfloat temp0 = jfloat(1);
	sp[2].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_power;
	sp[2].o = (jobject)((mindustry_world_modules_PowerModule *) NULL_CHECK(sp[2].o))->F_graph;
	jfloat temp1 = (jfloat)((func_mindustry_world_blocks_power_PowerGraph_getSatisfaction_R_float) ((void **) nullCheck(ctx, sp[2].o)->vtable)[VTABLE_mindustry_world_blocks_power_PowerGraph_getSatisfaction_R_float])(ctx, sp[2].o);
	jfloat temp2 = (temp0 - temp1) * (jfloat(0.86f));
	jfloat temp3 = (jfloat)SM_arc_math_Mathf_absin_float_float_R_float(ctx, (jfloat(3.0f)), (jfloat(0.1f)));
	SM_arc_graphics_g2d_Draw_color_arc_graphics_Color_arc_graphics_Color_float(ctx, sp[0].o, sp[1].o, (temp2 + temp3));
	LINE_NUMBER(214);
	SM_arc_graphics_g2d_Draw_alpha_float(ctx, (clinit_mindustry_core_Renderer(ctx), (jfloat)SF_mindustry_core_Renderer_laserOpacity));
	LINE_NUMBER(215);
	sp[0].o = (jobject)((mindustry_world_blocks_power_BeamNode$BeamNodeBuild *) NULL_CHECK((frame[0].o)))->F_this$0;
	jfloat temp4 = (jfloat)((mindustry_world_blocks_power_BeamNode *) NULL_CHECK(sp[0].o))->F_laserWidth;
	sp[0].o = (jobject)((mindustry_world_blocks_power_BeamNode$BeamNodeBuild *) NULL_CHECK((frame[0].o)))->F_this$0;
	jfloat temp5 = (jfloat)((mindustry_world_blocks_power_BeamNode *) NULL_CHECK(sp[0].o))->F_pulseScl;
	sp[0].o = (jobject)((mindustry_world_blocks_power_BeamNode$BeamNodeBuild *) NULL_CHECK((frame[0].o)))->F_this$0;
	jfloat temp6 = (jfloat)SM_arc_math_Mathf_absin_float_float_R_float(ctx, temp5, ((jfloat)((mindustry_world_blocks_power_BeamNode *) NULL_CHECK(sp[0].o))->F_pulseMag));
	frame[1].f = (temp4 + temp6);
	LINE_NUMBER(217);
	frame[2].i = (jint(0));
	}
label_8:;
	{
	if ((frame[2].i) >= (jint(4))) goto label_9;
	}
	{
	LINE_NUMBER(218);
	sp[0].o = (jobject)((mindustry_world_blocks_power_BeamNode$BeamNodeBuild *) NULL_CHECK((frame[0].o)))->F_dests;
	if (((jobject)ARRAY_ACCESS(jobject, sp[0].o, (frame[2].i))) == nullptr) goto label_11;
	}
	{
	sp[0].o = (jobject)((mindustry_world_blocks_power_BeamNode$BeamNodeBuild *) NULL_CHECK((frame[0].o)))->F_links;
	if (((jint)((mindustry_gen_Building *) NULL_CHECK(((jobject)ARRAY_ACCESS(jobject, sp[0].o, (frame[2].i)))))->F_wasVisible) == 0) goto label_11;
	}
	{
	sp[0].o = (jobject)((mindustry_world_blocks_power_BeamNode$BeamNodeBuild *) NULL_CHECK((frame[0].o)))->F_links;
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK(((jobject)ARRAY_ACCESS(jobject, sp[0].o, (frame[2].i)))))->F_block;
	frame[4].o = sp[0].o;
	if ((isInstance(ctx, (frame[4].o), &class_mindustry_world_blocks_power_BeamNode)) == 0) goto label_12;
	}
	{
	frame[3].o = (checkCast(ctx, &class_mindustry_world_blocks_power_BeamNode, (frame[4].o)));
	sp[0].o = (jobject)((mindustry_world_blocks_power_BeamNode$BeamNodeBuild *) NULL_CHECK((frame[0].o)))->F_links;
	sp[0].o = (jobject)ARRAY_ACCESS(jobject, sp[0].o, (frame[2].i));
	LINE_NUMBER(219);
	jint temp0 = (jint)((func_mindustry_gen_Building_tileX_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_gen_Building_tileX_R_int])(ctx, sp[0].o);
	jint temp1 = (jint)((func_mindustry_world_blocks_power_BeamNode$BeamNodeBuild_tileX_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_world_blocks_power_BeamNode$BeamNodeBuild_tileX_R_int])(ctx, (frame[0].o));
	if (temp0 == temp1) goto label_15;
	}
	{
	sp[0].o = (jobject)((mindustry_world_blocks_power_BeamNode$BeamNodeBuild *) NULL_CHECK((frame[0].o)))->F_links;
	jint temp0 = (jint)((func_mindustry_gen_Building_tileY_R_int) ((void **) nullCheck(ctx, ((jobject)ARRAY_ACCESS(jobject, sp[0].o, (frame[2].i))))->vtable)[VTABLE_mindustry_gen_Building_tileY_R_int])(ctx, ((jobject)ARRAY_ACCESS(jobject, sp[0].o, (frame[2].i))));
	jint temp1 = (jint)((func_mindustry_world_blocks_power_BeamNode$BeamNodeBuild_tileY_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_world_blocks_power_BeamNode$BeamNodeBuild_tileY_R_int])(ctx, (frame[0].o));
	if (temp0 != temp1) goto label_12;
	}
label_15:;
	{
	sp[0].o = (jobject)((mindustry_world_blocks_power_BeamNode$BeamNodeBuild *) NULL_CHECK((frame[0].o)))->F_links;
	if (((jint)((mindustry_gen_Building *) NULL_CHECK(((jobject)ARRAY_ACCESS(jobject, sp[0].o, (frame[2].i)))))->F_id) <= ((jint)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_id)) goto label_16;
	}
	{
	sp[0].o = (jobject)((mindustry_world_blocks_power_BeamNode$BeamNodeBuild *) NULL_CHECK((frame[0].o)))->F_this$0;
	if (((jint)((mindustry_world_blocks_power_BeamNode *) NULL_CHECK(sp[0].o))->F_range) >= ((jint)((mindustry_world_blocks_power_BeamNode *) NULL_CHECK((frame[3].o)))->F_range)) goto label_12;
	}
label_16:;
	{
	sp[0].o = (jobject)((mindustry_world_blocks_power_BeamNode$BeamNodeBuild *) NULL_CHECK((frame[0].o)))->F_this$0;
	if (((jint)((mindustry_world_blocks_power_BeamNode *) NULL_CHECK(sp[0].o))->F_range) <= ((jint)((mindustry_world_blocks_power_BeamNode *) NULL_CHECK((frame[3].o)))->F_range)) goto label_11;
	}
label_12:;
	{
	LINE_NUMBER(222);
	sp[0].o = (jobject)((mindustry_world_blocks_power_BeamNode$BeamNodeBuild *) NULL_CHECK((frame[0].o)))->F_dests;
	jint temp0 = (jint)((mindustry_world_Tile *) NULL_CHECK(((jobject)ARRAY_ACCESS(jobject, sp[0].o, (frame[2].i)))))->F_x;
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_tile;
	jint temp1 = (jint)SM_java_lang_Math_abs_int_R_int(ctx, (temp0 - ((jint)((mindustry_world_Tile *) NULL_CHECK(sp[0].o))->F_x)));
	sp[0].o = (jobject)((mindustry_world_blocks_power_BeamNode$BeamNodeBuild *) NULL_CHECK((frame[0].o)))->F_dests;
	jint temp2 = (jint)((mindustry_world_Tile *) NULL_CHECK(((jobject)ARRAY_ACCESS(jobject, sp[0].o, (frame[2].i)))))->F_y;
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_tile;
	jint temp3 = (jint)SM_java_lang_Math_abs_int_R_int(ctx, (temp2 - ((jint)((mindustry_world_Tile *) NULL_CHECK(sp[0].o))->F_y)));
	jint temp4 = (jint)SM_java_lang_Math_max_int_int_R_int(ctx, temp1, temp3);
	frame[4].i = temp4;
	LINE_NUMBER(224);
	jint temp5 = frame[4].i;
	jint temp6 = jint(1);
	sp[0].o = (jobject)((mindustry_world_blocks_power_BeamNode$BeamNodeBuild *) NULL_CHECK((frame[0].o)))->F_this$0;
	if (temp5 <= (temp6 + (((jint)((mindustry_world_Block *) NULL_CHECK(sp[0].o))->F_size) / (jint(2))))) goto label_11;
	}
	{
	LINE_NUMBER(225);
	clinit_arc_math_geom_Geometry(ctx);
	sp[0].o = (jobject)SF_arc_math_geom_Geometry_d4;
	frame[5].o = ((jobject)ARRAY_ACCESS(jobject, sp[0].o, (frame[2].i)));
	LINE_NUMBER(226);
	frame[6].f = (jfloat(4.0f));
	LINE_NUMBER(227);
	sp[0].o = (jobject)((mindustry_world_blocks_power_BeamNode$BeamNodeBuild *) NULL_CHECK((frame[0].o)))->F_this$0;
	sp[0].o = (jobject)((mindustry_world_blocks_power_BeamNode *) NULL_CHECK(sp[0].o))->F_laser;
	sp[1].o = (jobject)((mindustry_world_blocks_power_BeamNode$BeamNodeBuild *) NULL_CHECK((frame[0].o)))->F_this$0;
	sp[1].o = (jobject)((mindustry_world_blocks_power_BeamNode *) NULL_CHECK(sp[1].o))->F_laserEnd;
	jfloat temp0 = (jfloat)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_x;
	jfloat temp1 = frame[6].f;
	sp[2].o = (jobject)((mindustry_world_blocks_power_BeamNode$BeamNodeBuild *) NULL_CHECK((frame[0].o)))->F_this$0;
	jfloat temp2 = temp0 + ((temp1 * (jfloat(((jint)((mindustry_world_Block *) NULL_CHECK(sp[2].o))->F_size)))) * (jfloat(((jint)((arc_math_geom_Point2 *) NULL_CHECK((frame[5].o)))->F_x))));
	jfloat temp3 = (jfloat)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_y;
	jfloat temp4 = frame[6].f;
	sp[2].o = (jobject)((mindustry_world_blocks_power_BeamNode$BeamNodeBuild *) NULL_CHECK((frame[0].o)))->F_this$0;
	jfloat temp5 = temp3 + ((temp4 * (jfloat(((jint)((mindustry_world_Block *) NULL_CHECK(sp[2].o))->F_size)))) * (jfloat(((jint)((arc_math_geom_Point2 *) NULL_CHECK((frame[5].o)))->F_y))));
	sp[2].o = (jobject)((mindustry_world_blocks_power_BeamNode$BeamNodeBuild *) NULL_CHECK((frame[0].o)))->F_dests;
	jfloat temp6 = (jfloat)((func_mindustry_world_Tile_worldx_R_float) ((void **) nullCheck(ctx, ((jobject)ARRAY_ACCESS(jobject, sp[2].o, (frame[2].i))))->vtable)[VTABLE_mindustry_world_Tile_worldx_R_float])(ctx, ((jobject)ARRAY_ACCESS(jobject, sp[2].o, (frame[2].i))));
	jfloat temp7 = temp6 - ((frame[6].f) * (jfloat(((jint)((arc_math_geom_Point2 *) NULL_CHECK((frame[5].o)))->F_x))));
	sp[2].o = (jobject)((mindustry_world_blocks_power_BeamNode$BeamNodeBuild *) NULL_CHECK((frame[0].o)))->F_dests;
	jfloat temp8 = (jfloat)((func_mindustry_world_Tile_worldy_R_float) ((void **) nullCheck(ctx, ((jobject)ARRAY_ACCESS(jobject, sp[2].o, (frame[2].i))))->vtable)[VTABLE_mindustry_world_Tile_worldy_R_float])(ctx, ((jobject)ARRAY_ACCESS(jobject, sp[2].o, (frame[2].i))));
	SM_mindustry_graphics_Drawf_laser_arc_graphics_g2d_TextureRegion_arc_graphics_g2d_TextureRegion_float_float_float_float_float(ctx, sp[0].o, sp[1].o, temp2, temp5, temp7, (temp8 - ((frame[6].f) * (jfloat(((jint)((arc_math_geom_Point2 *) NULL_CHECK((frame[5].o)))->F_y))))), (frame[1].f));
	}
label_11:;
	{
	LINE_NUMBER(217);
	INST_IINC(2, 1);
	goto label_8;
	}
label_9:;
	{
	LINE_NUMBER(232);
	SM_arc_graphics_g2d_Draw_reset(ctx);
	LINE_NUMBER(233);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_world_blocks_power_BeamNode$BeamNodeBuild_pickedUp(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/power/BeamNode$BeamNodeBuild:pickedUp", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(237);
	sp[0].o = (jobject)((mindustry_world_blocks_power_BeamNode$BeamNodeBuild *) NULL_CHECK((frame[0].o)))->F_links;
	SM_java_util_Arrays_fill_Array1_java_lang_Object_java_lang_Object(ctx, sp[0].o, (jobject(nullptr)));
	LINE_NUMBER(238);
	sp[0].o = (jobject)((mindustry_world_blocks_power_BeamNode$BeamNodeBuild *) NULL_CHECK((frame[0].o)))->F_dests;
	SM_java_util_Arrays_fill_Array1_java_lang_Object_java_lang_Object(ctx, sp[0].o, (jobject(nullptr)));
	LINE_NUMBER(239);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_world_blocks_power_BeamNode$BeamNodeBuild_updateDirections(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[15];
	auto stack = &frame[8];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/power/BeamNode$BeamNodeBuild:updateDirections", 15 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(242);
	frame[1].i = (jint(0));
	}
label_1:;
	{
	if ((frame[1].i) >= (jint(4))) goto label_2;
	}
	{
	LINE_NUMBER(243);
	sp[0].o = (jobject)((mindustry_world_blocks_power_BeamNode$BeamNodeBuild *) NULL_CHECK((frame[0].o)))->F_links;
	frame[2].o = ((jobject)ARRAY_ACCESS(jobject, sp[0].o, (frame[1].i)));
	LINE_NUMBER(244);
	clinit_arc_math_geom_Geometry(ctx);
	sp[0].o = (jobject)SF_arc_math_geom_Geometry_d4;
	frame[3].o = ((jobject)ARRAY_ACCESS(jobject, sp[0].o, (frame[1].i)));
	LINE_NUMBER(245);
	sp[0].o = (jobject)((mindustry_world_blocks_power_BeamNode$BeamNodeBuild *) NULL_CHECK((frame[0].o)))->F_links;
	ARRAY_ACCESS(jobject, sp[0].o, (frame[1].i)) = (jobject(nullptr));
	LINE_NUMBER(246);
	sp[0].o = (jobject)((mindustry_world_blocks_power_BeamNode$BeamNodeBuild *) NULL_CHECK((frame[0].o)))->F_dests;
	ARRAY_ACCESS(jobject, sp[0].o, (frame[1].i)) = (jobject(nullptr));
	LINE_NUMBER(247);
	sp[0].o = (jobject)((mindustry_world_blocks_power_BeamNode$BeamNodeBuild *) NULL_CHECK((frame[0].o)))->F_this$0;
	frame[4].i = (((jint)((mindustry_world_Block *) NULL_CHECK(sp[0].o))->F_size) / (jint(2)));
	LINE_NUMBER(249);
	frame[5].i = ((jint(1)) + (frame[4].i));
	}
label_9:;
	{
	jint temp0 = frame[5].i;
	sp[0].o = (jobject)((mindustry_world_blocks_power_BeamNode$BeamNodeBuild *) NULL_CHECK((frame[0].o)))->F_this$0;
	if (temp0 > (((jint)((mindustry_world_blocks_power_BeamNode *) NULL_CHECK(sp[0].o))->F_range) + (frame[4].i))) goto label_10;
	}
	{
	LINE_NUMBER(250);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_world;
	sp[1].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_tile;
	jint temp0 = ((jint)((mindustry_world_Tile *) NULL_CHECK(sp[1].o))->F_x) + ((frame[5].i) * ((jint)((arc_math_geom_Point2 *) NULL_CHECK((frame[3].o)))->F_x));
	sp[1].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_tile;
	sp[0].o = (jobject)((func_mindustry_core_World_build_int_int_R_mindustry_gen_Building) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_World_build_int_int_R_mindustry_gen_Building])(ctx, sp[0].o, temp0, (((jint)((mindustry_world_Tile *) NULL_CHECK(sp[1].o))->F_y) + ((frame[5].i) * ((jint)((arc_math_geom_Point2 *) NULL_CHECK((frame[3].o)))->F_y))));
	frame[6].o = sp[0].o;
	LINE_NUMBER(253);
	if ((frame[6].o) == nullptr) goto label_13;
	}
	{
	jint temp0 = (jint)((func_mindustry_gen_Building_isInsulated_R_boolean) ((void **) nullCheck(ctx, (frame[6].o))->vtable)[VTABLE_mindustry_gen_Building_isInsulated_R_boolean])(ctx, (frame[6].o));
	if (temp0 == 0) goto label_13;
	}
	LINE_NUMBER(254);
	goto label_10;
label_13:;
	{
	LINE_NUMBER(258);
	if ((frame[6].o) == nullptr) goto label_15;
	}
	{
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[6].o)))->F_block;
	if (((jint)((mindustry_world_Block *) NULL_CHECK(sp[0].o))->F_hasPower) == 0) goto label_15;
	}
	{
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[6].o)))->F_block;
	if (((jint)((mindustry_world_Block *) NULL_CHECK(sp[0].o))->F_connectedPower) == 0) goto label_15;
	}
	{
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[6].o)))->F_team;
	sp[1].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_team;
	if (sp[0].o != sp[1].o) goto label_15;
	}
	{
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[6].o)))->F_block;
	if ((isInstance(ctx, sp[0].o, &class_mindustry_world_blocks_power_PowerNode)) != 0) goto label_15;
	}
	{
	LINE_NUMBER(259);
	sp[0].o = (jobject)((mindustry_world_blocks_power_BeamNode$BeamNodeBuild *) NULL_CHECK((frame[0].o)))->F_links;
	ARRAY_ACCESS(jobject, sp[0].o, (frame[1].i)) = (frame[6].o);
	LINE_NUMBER(260);
	sp[0].o = (jobject)((mindustry_world_blocks_power_BeamNode$BeamNodeBuild *) NULL_CHECK((frame[0].o)))->F_dests;
	jint temp0 = frame[1].i;
	clinit_mindustry_Vars(ctx);
	sp[1].o = (jobject)SF_mindustry_Vars_world;
	sp[2].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_tile;
	jint temp1 = ((jint)((mindustry_world_Tile *) NULL_CHECK(sp[2].o))->F_x) + ((frame[5].i) * ((jint)((arc_math_geom_Point2 *) NULL_CHECK((frame[3].o)))->F_x));
	sp[2].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_tile;
	sp[1].o = (jobject)((func_mindustry_core_World_tile_int_int_R_mindustry_world_Tile) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_mindustry_core_World_tile_int_int_R_mindustry_world_Tile])(ctx, sp[1].o, temp1, (((jint)((mindustry_world_Tile *) NULL_CHECK(sp[2].o))->F_y) + ((frame[5].i) * ((jint)((arc_math_geom_Point2 *) NULL_CHECK((frame[3].o)))->F_y))));
	ARRAY_ACCESS(jobject, sp[0].o, temp0) = sp[1].o;
	LINE_NUMBER(261);
	goto label_10;
	}
label_15:;
	{
	LINE_NUMBER(249);
	INST_IINC(5, 1);
	goto label_9;
	}
label_10:;
	{
	LINE_NUMBER(265);
	sp[0].o = (jobject)((mindustry_world_blocks_power_BeamNode$BeamNodeBuild *) NULL_CHECK((frame[0].o)))->F_links;
	frame[5].o = ((jobject)ARRAY_ACCESS(jobject, sp[0].o, (frame[1].i)));
	LINE_NUMBER(267);
	if ((frame[5].o) == (frame[2].o)) goto label_20;
	}
	{
	LINE_NUMBER(269);
	if ((frame[2].o) == nullptr) goto label_22;
	}
	{
	jint temp0 = (jint)((func_mindustry_gen_Building_isAdded_R_boolean) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_mindustry_gen_Building_isAdded_R_boolean])(ctx, (frame[2].o));
	if (temp0 == 0) goto label_22;
	}
	{
	LINE_NUMBER(270);
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[2].o)))->F_power;
	sp[0].o = (jobject)((mindustry_world_modules_PowerModule *) NULL_CHECK(sp[0].o))->F_links;
	jint temp0 = (jint)((func_mindustry_world_blocks_power_BeamNode$BeamNodeBuild_pos_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_world_blocks_power_BeamNode$BeamNodeBuild_pos_R_int])(ctx, (frame[0].o));
	jint temp1 = (jint)((func_arc_struct_IntSeq_removeValue_int_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_IntSeq_removeValue_int_R_boolean])(ctx, sp[0].o, temp0);
	LINE_NUMBER(271);
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_power;
	sp[0].o = (jobject)((mindustry_world_modules_PowerModule *) NULL_CHECK(sp[0].o))->F_links;
	jint temp2 = (jint)((func_mindustry_gen_Building_pos_R_int) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_mindustry_gen_Building_pos_R_int])(ctx, (frame[2].o));
	jint temp3 = (jint)((func_arc_struct_IntSeq_removeValue_int_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_IntSeq_removeValue_int_R_boolean])(ctx, sp[0].o, temp2);
	LINE_NUMBER(273);
	clinit_mindustry_world_blocks_power_PowerGraph(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_world_blocks_power_PowerGraph);
	init_mindustry_world_blocks_power_PowerGraph(ctx, sp[0].o);
	frame[6].o = sp[0].o;
	LINE_NUMBER(275);
	((func_mindustry_world_blocks_power_PowerGraph_reflow_mindustry_gen_Building) ((void **) nullCheck(ctx, (frame[6].o))->vtable)[VTABLE_mindustry_world_blocks_power_PowerGraph_reflow_mindustry_gen_Building])(ctx, (frame[6].o), (frame[0].o));
	LINE_NUMBER(277);
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[2].o)))->F_power;
	sp[0].o = (jobject)((mindustry_world_modules_PowerModule *) NULL_CHECK(sp[0].o))->F_graph;
	if (sp[0].o == (frame[6].o)) goto label_22;
	}
	{
	LINE_NUMBER(279);
	clinit_mindustry_world_blocks_power_PowerGraph(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_world_blocks_power_PowerGraph);
	init_mindustry_world_blocks_power_PowerGraph(ctx, sp[0].o);
	frame[7].o = sp[0].o;
	LINE_NUMBER(280);
	((func_mindustry_world_blocks_power_PowerGraph_reflow_mindustry_gen_Building) ((void **) nullCheck(ctx, (frame[7].o))->vtable)[VTABLE_mindustry_world_blocks_power_PowerGraph_reflow_mindustry_gen_Building])(ctx, (frame[7].o), (frame[2].o));
	}
label_22:;
	{
	LINE_NUMBER(285);
	if ((frame[5].o) == nullptr) goto label_20;
	}
	{
	LINE_NUMBER(286);
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_power;
	sp[0].o = (jobject)((mindustry_world_modules_PowerModule *) NULL_CHECK(sp[0].o))->F_links;
	jint temp0 = (jint)((func_mindustry_gen_Building_pos_R_int) ((void **) nullCheck(ctx, (frame[5].o))->vtable)[VTABLE_mindustry_gen_Building_pos_R_int])(ctx, (frame[5].o));
	jint temp1 = (jint)((func_arc_struct_IntSeq_addUnique_int_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_IntSeq_addUnique_int_R_boolean])(ctx, sp[0].o, temp0);
	LINE_NUMBER(287);
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[5].o)))->F_power;
	sp[0].o = (jobject)((mindustry_world_modules_PowerModule *) NULL_CHECK(sp[0].o))->F_links;
	jint temp2 = (jint)((func_mindustry_world_blocks_power_BeamNode$BeamNodeBuild_pos_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_world_blocks_power_BeamNode$BeamNodeBuild_pos_R_int])(ctx, (frame[0].o));
	jint temp3 = (jint)((func_arc_struct_IntSeq_addUnique_int_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_IntSeq_addUnique_int_R_boolean])(ctx, sp[0].o, temp2);
	LINE_NUMBER(289);
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_power;
	sp[0].o = (jobject)((mindustry_world_modules_PowerModule *) NULL_CHECK(sp[0].o))->F_graph;
	sp[1].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[5].o)))->F_power;
	sp[1].o = (jobject)((mindustry_world_modules_PowerModule *) NULL_CHECK(sp[1].o))->F_graph;
	((func_mindustry_world_blocks_power_PowerGraph_addGraph_mindustry_world_blocks_power_PowerGraph) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_blocks_power_PowerGraph_addGraph_mindustry_world_blocks_power_PowerGraph])(ctx, sp[0].o, sp[1].o);
	}
label_20:;
	{
	LINE_NUMBER(242);
	INST_IINC(1, 1);
	goto label_1;
	}
label_2:;
	LINE_NUMBER(293);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void *vtable_mindustry_world_blocks_power_BeamNode$BeamNodeBuild[] {
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
	(void *) M_mindustry_gen_Building_write_arc_util_io_Writes,
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
	(void *) M_mindustry_gen_Building_read_arc_util_io_Reads_byte,
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
	(void *) M_mindustry_world_blocks_power_BeamNode$BeamNodeBuild_status_R_mindustry_world_meta_BlockStatus,
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
	(void *) M_mindustry_world_blocks_power_BeamNode$BeamNodeBuild_draw,
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
	(void *) M_mindustry_world_blocks_power_BeamNode$BeamNodeBuild_pickedUp,
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
	(void *) M_mindustry_world_blocks_power_BeamNode$BeamNodeBuild_updateTile,
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
	(void *) M_mindustry_world_blocks_power_BeamNode$BeamNodeBuild_couldConnect_int_mindustry_world_Block_int_int_R_boolean,
	(void *) M_mindustry_world_blocks_power_BeamNode$BeamNodeBuild_updateDirections,
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
	{ "couldConnect", "(ILmindustry/world/Block;II)Z" },
	{ "updateDirections", "()V" },
};

static FieldMetadata fields[] {
	{ "links", getArrayClass(&class_mindustry_gen_Building, 1), offsetof(mindustry_world_blocks_power_BeamNode$BeamNodeBuild, F_links), "[Lmindustry/gen/Building;", 1 },
	{ "dests", getArrayClass(&class_mindustry_world_Tile, 1), offsetof(mindustry_world_blocks_power_BeamNode$BeamNodeBuild, F_dests), "[Lmindustry/world/Tile;", 1 },
	{ "lastChange", &class_int, offsetof(mindustry_world_blocks_power_BeamNode$BeamNodeBuild, F_lastChange), "I", 1 },
	{ "this$0", &class_mindustry_world_blocks_power_BeamNode, offsetof(mindustry_world_blocks_power_BeamNode$BeamNodeBuild, F_this$0), "Lmindustry/world/blocks/power/BeamNode;", 4112 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_mindustry_world_blocks_power_BeamNode$BeamNodeBuild_mindustry_world_blocks_power_BeamNode, 0, "(Lmindustry/world/blocks/power/BeamNode;)V", 1 },
	{ "couldConnect", (intptr_t) M_mindustry_world_blocks_power_BeamNode$BeamNodeBuild_couldConnect_int_mindustry_world_Block_int_int_R_boolean, VTABLE_mindustry_world_blocks_power_BeamNode$BeamNodeBuild_couldConnect_int_mindustry_world_Block_int_int_R_boolean, "(ILmindustry/world/Block;II)Z", 1 },
	{ "updateTile", (intptr_t) M_mindustry_world_blocks_power_BeamNode$BeamNodeBuild_updateTile, VTABLE_mindustry_world_blocks_power_BeamNode$BeamNodeBuild_updateTile, "()V", 1 },
	{ "status", (intptr_t) M_mindustry_world_blocks_power_BeamNode$BeamNodeBuild_status_R_mindustry_world_meta_BlockStatus, VTABLE_mindustry_world_blocks_power_BeamNode$BeamNodeBuild_status_R_mindustry_world_meta_BlockStatus, "()Lmindustry/world/meta/BlockStatus;", 1 },
	{ "draw", (intptr_t) M_mindustry_world_blocks_power_BeamNode$BeamNodeBuild_draw, VTABLE_mindustry_world_blocks_power_BeamNode$BeamNodeBuild_draw, "()V", 1 },
	{ "pickedUp", (intptr_t) M_mindustry_world_blocks_power_BeamNode$BeamNodeBuild_pickedUp, VTABLE_mindustry_world_blocks_power_BeamNode$BeamNodeBuild_pickedUp, "()V", 1 },
	{ "updateDirections", (intptr_t) M_mindustry_world_blocks_power_BeamNode$BeamNodeBuild_updateDirections, VTABLE_mindustry_world_blocks_power_BeamNode$BeamNodeBuild_updateDirections, "()V", 1 },
};

Class class_mindustry_world_blocks_power_BeamNode$BeamNodeBuild{
		.nativeName = (intptr_t) "mindustry/world/blocks/power/BeamNode$BeamNodeBuild",
		.parentClass = (intptr_t) &class_mindustry_gen_Building,
		.size = sizeof(mindustry_world_blocks_power_BeamNode$BeamNodeBuild),
		.classVtable = (intptr_t) vtable_mindustry_world_blocks_power_BeamNode$BeamNodeBuild,
		.staticInitializer = (intptr_t) clinit_mindustry_world_blocks_power_BeamNode$BeamNodeBuild,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_mindustry_world_blocks_power_BeamNode$BeamNodeBuild,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) &class_mindustry_world_blocks_power_BeamNode,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 33,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 4,
		.nativeFields = (intptr_t) fields,
		.methodCount = 7,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 312,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_mindustry_world_blocks_power_BeamNode$BeamNodeBuild = registerClass(&class_mindustry_world_blocks_power_BeamNode$BeamNodeBuild);

}

