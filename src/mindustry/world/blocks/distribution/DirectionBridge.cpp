#include "mindustry/world/blocks/distribution/DirectionBridge.h"
#include "mindustry/world/Block.h"
#include "arc/math/Angles.h"
#include "mindustry/world/blocks/distribution/DirectionBridge_DirectionBridgeBuild.h"
#include "arc/util/Eachable.h"
#include "arc/math/geom/Point2.h"
#include "mindustry/ctype/UnlockableContent.h"
#include "mindustry/world/blocks/distribution/DirectionBridge.h"
#include "arc/graphics/Color.h"
#include "arc/graphics/g2d/Draw.h"
#include "java/lang/String.h"
#include "arc/func/Boolf2.h"
#include "mindustry/core/Renderer.h"
#include "arc/struct/Seq.h"
#include "mindustry/ctype/MappableContent.h"
#include "mindustry/entities/units/BuildPlan.h"
#include "mindustry/world/Tile.h"
#include "mindustry/world/blocks/distribution/DirectionBridge_invoke_arc_func_Boolf_1.h"
#include "arc/func/Boolf.h"
#include "mindustry/world/meta/BlockGroup.h"
#include "arc/math/geom/Geometry.h"
#include "java/lang/Math.h"
#include "arc/math/Mathf.h"
#include "arc/graphics/g2d/TextureRegion.h"
#include "mindustry/input/Placement.h"
#include "mindustry/graphics/Lod.h"
#include "mindustry/world/blocks/distribution/DirectionBridge_invoke_arc_func_Boolf2_1.h"
#include "mindustry/gen/Building.h"
#include "mindustry/graphics/Pal.h"
#include "java/lang/Object.h"
#include "mindustry/gen/Player.h"
#include "mindustry/ctype/Content.h"
#include "mindustry/graphics/Drawf.h"
#include "mindustry/game/Team.h"
#include "mindustry/Vars.h"
#include "mindustry/core/World.h"

extern "C" {

jobject SF_mindustry_world_blocks_distribution_DirectionBridge_currentPlan;
jobject SF_mindustry_world_blocks_distribution_DirectionBridge_otherPlan;

void mark_mindustry_world_blocks_distribution_DirectionBridge(jobject object, jint mark, jint depth) {
	if (!object) {
		if (SF_mindustry_world_blocks_distribution_DirectionBridge_currentPlan)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_world_blocks_distribution_DirectionBridge_currentPlan)->clazz)->markFunction)((jobject) SF_mindustry_world_blocks_distribution_DirectionBridge_currentPlan, mark, depth + 1);
		if (SF_mindustry_world_blocks_distribution_DirectionBridge_otherPlan)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_world_blocks_distribution_DirectionBridge_otherPlan)->clazz)->markFunction)((jobject) SF_mindustry_world_blocks_distribution_DirectionBridge_otherPlan, mark, depth + 1);
		return;
	}
	if (depth > GC_DEPTH_ALWAYS && (object->gcMark < GC_MARK_START || object->gcMark == mark))
		return;
	if (depth > MAX_GC_MARK_DEPTH) {
		markDeepObject(object);
		return;
	}
	mark_mindustry_world_Block(object, mark, depth);
	if (object->gcMark >= GC_MARK_START)
		object->gcMark = mark;
	auto self = (mindustry_world_blocks_distribution_DirectionBridge *) object;
	if (self->F_bridgeRegion)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_bridgeRegion)->clazz)->markFunction)((jobject) self->F_bridgeRegion, mark, depth + 1);
	if (self->F_bridgeBotRegion)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_bridgeBotRegion)->clazz)->markFunction)((jobject) self->F_bridgeBotRegion, mark, depth + 1);
	if (self->F_bridgeLiquidRegion)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_bridgeLiquidRegion)->clazz)->markFunction)((jobject) self->F_bridgeLiquidRegion, mark, depth + 1);
	if (self->F_arrowRegion)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_arrowRegion)->clazz)->markFunction)((jobject) self->F_arrowRegion, mark, depth + 1);
	if (self->F_dirRegion)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_dirRegion)->clazz)->markFunction)((jobject) self->F_dirRegion, mark, depth + 1);
	if (self->F_planFinder)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_planFinder)->clazz)->markFunction)((jobject) self->F_planFinder, mark, depth + 1);
}

void clinit_mindustry_world_blocks_distribution_DirectionBridge(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	clinit_mindustry_world_Block(ctx);
}

void init_mindustry_world_blocks_distribution_DirectionBridge_java_lang_String(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/distribution/DirectionBridge:<init>", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_world_blocks_distribution_DirectionBridge(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(34);
	init_mindustry_world_Block_java_lang_String(ctx, (frame[0].o), (frame[1].o));
	LINE_NUMBER(23);
	((mindustry_world_blocks_distribution_DirectionBridge *) NULL_CHECK((frame[0].o)))->F_otherDst = (jint(0));
	LINE_NUMBER(31);
	((mindustry_world_blocks_distribution_DirectionBridge *) NULL_CHECK((frame[0].o)))->F_range = (jint(4));
	LINE_NUMBER(61);
	sp[0].o = frame[0].o;
	{ /* InvokeDynamic */
		clinit_mindustry_world_blocks_distribution_DirectionBridge_invoke_arc_func_Boolf_1(ctx);
		auto proxy = (mindustry_world_blocks_distribution_DirectionBridge_invoke_arc_func_Boolf_1 *) gcAlloc(ctx, &class_mindustry_world_blocks_distribution_DirectionBridge_invoke_arc_func_Boolf_1);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[1].o = (jobject) proxy;
	}
	((mindustry_world_blocks_distribution_DirectionBridge *) NULL_CHECK(sp[0].o))->F_planFinder = (jref) sp[1].o;
	LINE_NUMBER(35);
	((mindustry_world_Block *) NULL_CHECK((frame[0].o)))->F_update = (jint(1));
	LINE_NUMBER(36);
	((mindustry_world_Block *) NULL_CHECK((frame[0].o)))->F_solid = (jint(1));
	LINE_NUMBER(37);
	((mindustry_world_Block *) NULL_CHECK((frame[0].o)))->F_rotate = (jint(1));
	LINE_NUMBER(38);
	sp[0].o = frame[0].o;
	clinit_mindustry_world_meta_BlockGroup(ctx);
	sp[1].o = (jobject)SF_mindustry_world_meta_BlockGroup_transportation;
	((mindustry_world_Block *) NULL_CHECK(sp[0].o))->F_group = (jref) sp[1].o;
	LINE_NUMBER(39);
	((mindustry_world_Block *) NULL_CHECK((frame[0].o)))->F_noUpdateDisabled = (jint(1));
	LINE_NUMBER(40);
	((mindustry_world_Block *) NULL_CHECK((frame[0].o)))->F_priority = (jfloat(-1.0f));
	LINE_NUMBER(41);
	((mindustry_world_Block *) NULL_CHECK((frame[0].o)))->F_envEnabled = (7);
	LINE_NUMBER(42);
	((mindustry_world_Block *) NULL_CHECK((frame[0].o)))->F_drawArrow = (jint(0));
	LINE_NUMBER(43);
	((mindustry_world_Block *) NULL_CHECK((frame[0].o)))->F_allowDiagonal = (jint(0));
	LINE_NUMBER(44);
	((mindustry_world_Block *) NULL_CHECK((frame[0].o)))->F_regionRotated1 = (jint(1));
	LINE_NUMBER(45);
	((mindustry_world_Block *) NULL_CHECK((frame[0].o)))->F_drawCached = (jint(1));
	LINE_NUMBER(46);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_world_blocks_distribution_DirectionBridge_init(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/distribution/DirectionBridge:init", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(50);
	((func_mindustry_world_blocks_distribution_DirectionBridge_updateClipRadius_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_world_blocks_distribution_DirectionBridge_updateClipRadius_float])(ctx, (frame[0].o), (((jfloat(((jint)((mindustry_world_blocks_distribution_DirectionBridge *) NULL_CHECK((frame[0].o)))->F_range))) + (jfloat(0.5f))) * (jfloat(8.0f))));
	LINE_NUMBER(51);
	M_mindustry_world_Block_init(ctx, (frame[0].o));
	LINE_NUMBER(52);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_world_blocks_distribution_DirectionBridge_drawPlanRegion_mindustry_entities_units_BuildPlan_arc_util_Eachable(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/distribution/DirectionBridge:drawPlanRegion", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(56);
	sp[0].o = (jobject)((mindustry_world_Block *) NULL_CHECK((frame[0].o)))->F_region;
	jfloat temp0 = (jfloat)((func_mindustry_entities_units_BuildPlan_drawx_R_float) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_entities_units_BuildPlan_drawx_R_float])(ctx, (frame[1].o));
	jfloat temp1 = (jfloat)((func_mindustry_entities_units_BuildPlan_drawy_R_float) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_entities_units_BuildPlan_drawy_R_float])(ctx, (frame[1].o));
	SM_arc_graphics_g2d_Draw_rect_arc_graphics_g2d_TextureRegion_float_float(ctx, sp[0].o, temp0, temp1);
	LINE_NUMBER(57);
	sp[0].o = (jobject)((mindustry_world_blocks_distribution_DirectionBridge *) NULL_CHECK((frame[0].o)))->F_dirRegion;
	jfloat temp2 = (jfloat)((func_mindustry_entities_units_BuildPlan_drawx_R_float) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_entities_units_BuildPlan_drawx_R_float])(ctx, (frame[1].o));
	jfloat temp3 = (jfloat)((func_mindustry_entities_units_BuildPlan_drawy_R_float) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_entities_units_BuildPlan_drawy_R_float])(ctx, (frame[1].o));
	SM_arc_graphics_g2d_Draw_rect_arc_graphics_g2d_TextureRegion_float_float_float(ctx, sp[0].o, temp2, temp3, (jfloat((((jint)((mindustry_entities_units_BuildPlan *) NULL_CHECK((frame[1].o)))->F_rotation) * (90)))));
	LINE_NUMBER(58);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_world_blocks_distribution_DirectionBridge_drawPlanConfigTop_mindustry_entities_units_BuildPlan_arc_util_Eachable(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[10];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/distribution/DirectionBridge:drawPlanConfigTop", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(74);
	((mindustry_world_blocks_distribution_DirectionBridge *) NULL_CHECK((frame[0].o)))->F_otherDst = ((jint)((mindustry_world_blocks_distribution_DirectionBridge *) NULL_CHECK((frame[0].o)))->F_range);
	LINE_NUMBER(75);
	clinit_mindustry_world_blocks_distribution_DirectionBridge(ctx);
	SF_mindustry_world_blocks_distribution_DirectionBridge_otherPlan = (jobject(nullptr));
	LINE_NUMBER(76);
	clinit_mindustry_world_blocks_distribution_DirectionBridge(ctx);
	SF_mindustry_world_blocks_distribution_DirectionBridge_currentPlan = (frame[1].o);
	LINE_NUMBER(77);
	sp[0].o = frame[2].o;
	jint temp0 = (jint)((mindustry_entities_units_BuildPlan *) NULL_CHECK((frame[1].o)))->F_x;
	jint temp1 = (jint)((mindustry_entities_units_BuildPlan *) NULL_CHECK((frame[1].o)))->F_y;
	jint temp2 = (((jint)((mindustry_world_blocks_distribution_DirectionBridge *) NULL_CHECK((frame[0].o)))->F_range) * (jint(2))) + (jint(1));
	sp[1].o = (jobject)((mindustry_world_blocks_distribution_DirectionBridge *) NULL_CHECK((frame[0].o)))->F_planFinder;
	sp[0].o = (jobject)SM_mindustry_world_Block_findPlan_arc_util_Eachable_int_int_int_arc_func_Boolf_R_mindustry_entities_units_BuildPlan(ctx, sp[0].o, temp0, temp1, temp2, sp[1].o);
	LINE_NUMBER(79);
	clinit_mindustry_world_blocks_distribution_DirectionBridge(ctx);
	sp[0].o = (jobject)SF_mindustry_world_blocks_distribution_DirectionBridge_otherPlan;
	if (sp[0].o == nullptr) goto label_5;
	}
	{
	LINE_NUMBER(80);
	sp[0].o = frame[0].o;
	jint temp0 = (jint)((mindustry_entities_units_BuildPlan *) NULL_CHECK((frame[1].o)))->F_rotation;
	jfloat temp1 = (jfloat)((func_mindustry_entities_units_BuildPlan_drawx_R_float) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_entities_units_BuildPlan_drawx_R_float])(ctx, (frame[1].o));
	jfloat temp2 = (jfloat)((func_mindustry_entities_units_BuildPlan_drawy_R_float) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_entities_units_BuildPlan_drawy_R_float])(ctx, (frame[1].o));
	clinit_mindustry_world_blocks_distribution_DirectionBridge(ctx);
	sp[1].o = (jobject)SF_mindustry_world_blocks_distribution_DirectionBridge_otherPlan;
	jfloat temp3 = (jfloat)((func_mindustry_entities_units_BuildPlan_drawx_R_float) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_mindustry_entities_units_BuildPlan_drawx_R_float])(ctx, sp[1].o);
	clinit_mindustry_world_blocks_distribution_DirectionBridge(ctx);
	sp[1].o = (jobject)SF_mindustry_world_blocks_distribution_DirectionBridge_otherPlan;
	jfloat temp4 = (jfloat)((func_mindustry_entities_units_BuildPlan_drawy_R_float) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_mindustry_entities_units_BuildPlan_drawy_R_float])(ctx, sp[1].o);
	((func_mindustry_world_blocks_distribution_DirectionBridge_drawBridge_int_float_float_float_float_arc_graphics_Color) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_blocks_distribution_DirectionBridge_drawBridge_int_float_float_float_float_arc_graphics_Color])(ctx, sp[0].o, temp0, temp1, temp2, temp3, temp4, (jobject(nullptr)));
	}
label_5:;
	LINE_NUMBER(82);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jobject M_mindustry_world_blocks_distribution_DirectionBridge_icons_R_Array1_arc_graphics_g2d_TextureRegion(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/distribution/DirectionBridge:icons", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(86);
	sp[0].o = (jobject)createArray(ctx, &class_arc_graphics_g2d_TextureRegion, (jint(2)));
	jint temp0 = jint(0);
	sp[1].o = (jobject)((mindustry_world_Block *) NULL_CHECK((frame[0].o)))->F_region;
	ARRAY_ACCESS(jobject, sp[0].o, temp0) = sp[1].o;
	jint temp1 = jint(1);
	sp[1].o = (jobject)((mindustry_world_blocks_distribution_DirectionBridge *) NULL_CHECK((frame[0].o)))->F_dirRegion;
	ARRAY_ACCESS(jobject, sp[0].o, temp1) = sp[1].o;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void M_mindustry_world_blocks_distribution_DirectionBridge_changePlacementPath_arc_struct_Seq_int(jcontext ctx, jobject self, jobject param0, jint param1) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/distribution/DirectionBridge:changePlacementPath", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(91);
	sp[0].o = frame[1].o;
	sp[1].o = frame[0].o;
	jint temp0 = frame[2].i;
	{ /* InvokeDynamic */
		clinit_mindustry_world_blocks_distribution_DirectionBridge_invoke_arc_func_Boolf2_1(ctx);
		auto proxy = (mindustry_world_blocks_distribution_DirectionBridge_invoke_arc_func_Boolf2_1 *) gcAlloc(ctx, &class_mindustry_world_blocks_distribution_DirectionBridge_invoke_arc_func_Boolf2_1);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[2].o = (jobject) proxy;
	}
	SM_mindustry_input_Placement_calculateNodes_arc_struct_Seq_mindustry_world_Block_int_arc_func_Boolf2(ctx, sp[0].o, sp[1].o, temp0, sp[2].o);
	LINE_NUMBER(92);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_world_blocks_distribution_DirectionBridge_drawPlace_int_int_int_boolean_boolean(jcontext ctx, jobject self, jint param0, jint param1, jint param2, jbool param3, jbool param4) {
	NULL_CHECK(self);
	jtype frame[21];
	auto stack = &frame[14];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/distribution/DirectionBridge:drawPlace", 21 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].i = param1;
	frame[3].i = param2;
	frame[4].i = param3;
	frame[5].i = param4;
	{
	LINE_NUMBER(95);
	frame[6].i = ((jint)((mindustry_world_blocks_distribution_DirectionBridge *) NULL_CHECK((frame[0].o)))->F_range);
	LINE_NUMBER(97);
	if ((frame[5].i) == 0) goto label_2;
	}
	{
	LINE_NUMBER(99);
	frame[7].i = (jint(0));
	}
label_4:;
	{
	if ((frame[7].i) >= (jint(4))) goto label_2;
	}
	{
	LINE_NUMBER(100);
	if ((frame[7].i) != (((frame[3].i) + (jint(2))) % (jint(4)))) goto label_6;
	}
	goto label_7;
label_6:;
	{
	LINE_NUMBER(102);
	jint temp0 = (jint)SM_arc_math_geom_Geometry_d4x_int_R_int(ctx, (frame[7].i));
	frame[8].i = temp0;
	jint temp1 = (jint)SM_arc_math_geom_Geometry_d4y_int_R_int(ctx, (frame[7].i));
	frame[9].i = temp1;
	LINE_NUMBER(104);
	frame[10].i = (jint(1));
	}
label_10:;
	{
	if ((frame[10].i) > ((jint)((mindustry_world_blocks_distribution_DirectionBridge *) NULL_CHECK((frame[0].o)))->F_range)) goto label_7;
	}
	{
	LINE_NUMBER(105);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_world;
	sp[0].o = (jobject)((func_mindustry_core_World_tile_int_int_R_mindustry_world_Tile) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_World_tile_int_int_R_mindustry_world_Tile])(ctx, sp[0].o, ((frame[1].i) - ((frame[8].i) * (frame[10].i))), ((frame[2].i) - ((frame[9].i) * (frame[10].i))));
	frame[11].o = sp[0].o;
	LINE_NUMBER(107);
	if ((frame[11].o) == nullptr) goto label_13;
	}
	{
	sp[0].o = (jobject)((mindustry_world_Tile *) NULL_CHECK((frame[11].o)))->F_build;
	frame[13].o = sp[0].o;
	if ((isInstance(ctx, (frame[13].o), &class_mindustry_world_blocks_distribution_DirectionBridge$DirectionBridgeBuild)) == 0) goto label_13;
	}
	{
	frame[12].o = (checkCast(ctx, &class_mindustry_world_blocks_distribution_DirectionBridge$DirectionBridgeBuild, (frame[13].o)));
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[12].o)))->F_block;
	if (sp[0].o != (frame[0].o)) goto label_13;
	}
	{
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[12].o)))->F_team;
	clinit_mindustry_Vars(ctx);
	sp[1].o = (jobject)SF_mindustry_Vars_player;
	sp[1].o = (jobject)((func_mindustry_gen_Player_team_R_mindustry_game_Team) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_mindustry_gen_Player_team_R_mindustry_game_Team])(ctx, sp[1].o);
	if (sp[0].o != sp[1].o) goto label_13;
	}
	{
	LINE_NUMBER(108);
	if (((jint)((mindustry_gen_Building *) NULL_CHECK((frame[12].o)))->F_rotation) != (frame[7].i)) goto label_7;
	}
	{
	LINE_NUMBER(109);
	sp[0].o = (jobject)((mindustry_world_Tile *) NULL_CHECK((frame[11].o)))->F_build;
	frame[13].o = sp[0].o;
	LINE_NUMBER(111);
	clinit_mindustry_graphics_Pal(ctx);
	sp[0].o = (jobject)SF_mindustry_graphics_Pal_place;
	SM_mindustry_graphics_Drawf_dashLine_arc_graphics_Color_float_float_float_float(ctx, sp[0].o, (((jfloat)((mindustry_gen_Building *) NULL_CHECK((frame[13].o)))->F_x) + ((jfloat((frame[8].i))) * (jfloat(6.0f)))), (((jfloat)((mindustry_gen_Building *) NULL_CHECK((frame[13].o)))->F_y) + ((jfloat((frame[9].i))) * (jfloat(6.0f)))), (((jfloat)((mindustry_gen_Building *) NULL_CHECK((frame[13].o)))->F_x) + (jfloat((((frame[8].i) * (frame[10].i)) * (8))))), (((jfloat)((mindustry_gen_Building *) NULL_CHECK((frame[13].o)))->F_y) + (jfloat((((frame[9].i) * (frame[10].i)) * (8))))));
	LINE_NUMBER(118);
	jfloat temp0 = (jfloat)((mindustry_gen_Building *) NULL_CHECK((frame[13].o)))->F_x;
	jfloat temp1 = (jfloat)((mindustry_gen_Building *) NULL_CHECK((frame[13].o)))->F_y;
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[13].o)))->F_block;
	jfloat temp2 = ((jfloat((((jint)((mindustry_world_Block *) NULL_CHECK(sp[0].o))->F_size) * (8)))) / (jfloat(2))) + (jfloat(2.5f));
	jfloat temp3 = jfloat(0);
	clinit_mindustry_graphics_Pal(ctx);
	sp[0].o = (jobject)SF_mindustry_graphics_Pal_place;
	SM_mindustry_graphics_Drawf_square_float_float_float_float_arc_graphics_Color(ctx, temp0, temp1, temp2, temp3, sp[0].o);
	LINE_NUMBER(119);
	goto label_7;
	}
label_13:;
	{
	LINE_NUMBER(104);
	INST_IINC(10, 1);
	goto label_10;
	}
label_7:;
	{
	LINE_NUMBER(99);
	INST_IINC(7, 1);
	goto label_4;
	}
label_2:;
	{
	LINE_NUMBER(127);
	frame[7].o = (jobject(nullptr));
	LINE_NUMBER(128);
	jint temp0 = (jint)SM_arc_math_geom_Geometry_d4x_int_R_int(ctx, (frame[3].i));
	frame[8].i = temp0;
	jint temp1 = (jint)SM_arc_math_geom_Geometry_d4y_int_R_int(ctx, (frame[3].i));
	frame[9].i = temp1;
	LINE_NUMBER(131);
	frame[10].i = (jint(1));
	}
label_23:;
	{
	if ((frame[10].i) > ((jint)((mindustry_world_blocks_distribution_DirectionBridge *) NULL_CHECK((frame[0].o)))->F_range)) goto label_24;
	}
	{
	LINE_NUMBER(132);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_world;
	sp[0].o = (jobject)((func_mindustry_core_World_tile_int_int_R_mindustry_world_Tile) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_World_tile_int_int_R_mindustry_world_Tile])(ctx, sp[0].o, ((frame[1].i) + ((frame[8].i) * (frame[10].i))), ((frame[2].i) + ((frame[9].i) * (frame[10].i))));
	frame[11].o = sp[0].o;
	LINE_NUMBER(134);
	if ((frame[11].o) == nullptr) goto label_27;
	}
	{
	sp[0].o = (jobject)((mindustry_world_Tile *) NULL_CHECK((frame[11].o)))->F_build;
	frame[13].o = sp[0].o;
	if ((isInstance(ctx, (frame[13].o), &class_mindustry_world_blocks_distribution_DirectionBridge$DirectionBridgeBuild)) == 0) goto label_27;
	}
	{
	frame[12].o = (checkCast(ctx, &class_mindustry_world_blocks_distribution_DirectionBridge$DirectionBridgeBuild, (frame[13].o)));
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[12].o)))->F_block;
	if (sp[0].o != (frame[0].o)) goto label_27;
	}
	{
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[12].o)))->F_team;
	clinit_mindustry_Vars(ctx);
	sp[1].o = (jobject)SF_mindustry_Vars_player;
	sp[1].o = (jobject)((func_mindustry_gen_Player_team_R_mindustry_game_Team) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_mindustry_gen_Player_team_R_mindustry_game_Team])(ctx, sp[1].o);
	if (sp[0].o != sp[1].o) goto label_27;
	}
	{
	LINE_NUMBER(135);
	frame[6].i = (frame[10].i);
	LINE_NUMBER(136);
	sp[0].o = (jobject)((mindustry_world_Tile *) NULL_CHECK((frame[11].o)))->F_build;
	frame[7].o = sp[0].o;
	LINE_NUMBER(137);
	goto label_24;
	}
label_27:;
	{
	LINE_NUMBER(131);
	INST_IINC(10, 1);
	goto label_23;
	}
label_24:;
	{
	LINE_NUMBER(141);
	if ((frame[5].i) != 0) goto label_32;
	}
	INST_ALOAD(7);
	if ((--sp)->o == nullptr) goto label_33;
label_32:;
	{
	LINE_NUMBER(142);
	clinit_mindustry_graphics_Pal(ctx);
	sp[0].o = (jobject)SF_mindustry_graphics_Pal_placing;
	SM_mindustry_graphics_Drawf_dashLine_arc_graphics_Color_float_float_float_float(ctx, sp[0].o, ((jfloat(((frame[1].i) * (8)))) + ((jfloat((frame[8].i))) * (jfloat(6.0f)))), ((jfloat(((frame[2].i) * (8)))) + ((jfloat((frame[9].i))) * (jfloat(6.0f)))), (jfloat((((frame[1].i) * (8)) + (((frame[8].i) * (frame[6].i)) * (8))))), (jfloat((((frame[2].i) * (8)) + (((frame[9].i) * (frame[6].i)) * (8))))));
	}
label_33:;
	{
	LINE_NUMBER(150);
	if ((frame[7].o) == nullptr) goto label_34;
	}
	{
	LINE_NUMBER(151);
	if ((frame[5].i) == 0) goto label_36;
	}
	{
	LINE_NUMBER(152);
	jfloat temp0 = (jfloat)((mindustry_gen_Building *) NULL_CHECK((frame[7].o)))->F_x;
	jfloat temp1 = (jfloat)((mindustry_gen_Building *) NULL_CHECK((frame[7].o)))->F_y;
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[7].o)))->F_block;
	SM_mindustry_graphics_Drawf_square_float_float_float_float(ctx, temp0, temp1, (((jfloat((((jint)((mindustry_world_Block *) NULL_CHECK(sp[0].o))->F_size) * (8)))) / (jfloat(2))) + (jfloat(2.5f))), (jfloat(0)));
	goto label_34;
	}
label_36:;
	{
	LINE_NUMBER(154);
	SM_mindustry_graphics_Drawf_square_float_float_float(ctx, ((jfloat)((mindustry_gen_Building *) NULL_CHECK((frame[7].o)))->F_x), ((jfloat)((mindustry_gen_Building *) NULL_CHECK((frame[7].o)))->F_y), (jfloat(2)));
	}
label_34:;
	LINE_NUMBER(157);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_world_blocks_distribution_DirectionBridge_drawPlace_int_int_int_boolean(jcontext ctx, jobject self, jint param0, jint param1, jint param2, jbool param3) {
	NULL_CHECK(self);
	jtype frame[11];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/distribution/DirectionBridge:drawPlace", 11 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].i = param1;
	frame[3].i = param2;
	frame[4].i = param3;
	{
	LINE_NUMBER(161);
	M_mindustry_world_Block_drawPlace_int_int_int_boolean(ctx, (frame[0].o), (frame[1].i), (frame[2].i), (frame[3].i), (frame[4].i));
	LINE_NUMBER(163);
	((func_mindustry_world_blocks_distribution_DirectionBridge_drawPlace_int_int_int_boolean_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_world_blocks_distribution_DirectionBridge_drawPlace_int_int_int_boolean_boolean])(ctx, (frame[0].o), (frame[1].i), (frame[2].i), (frame[3].i), (frame[4].i), (jint(1)));
	LINE_NUMBER(164);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_world_blocks_distribution_DirectionBridge_drawBridge_int_float_float_float_float_arc_graphics_Color(jcontext ctx, jobject self, jint param0, jfloat param1, jfloat param2, jfloat param3, jfloat param4, jobject param5) {
	NULL_CHECK(self);
	jtype frame[18];
	auto stack = &frame[12];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/distribution/DirectionBridge:drawBridge", 18 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].f = param1;
	frame[3].f = param2;
	frame[4].f = param3;
	frame[5].f = param4;
	frame[6].o = param5;
	{
	LINE_NUMBER(167);
	SM_arc_graphics_g2d_Draw_alpha_float(ctx, (clinit_mindustry_core_Renderer(ctx), (jfloat)SF_mindustry_core_Renderer_bridgeOpacity));
	LINE_NUMBER(169);
	jfloat temp0 = (jfloat)SM_arc_math_Angles_angle_float_float_float_float_R_float(ctx, (frame[2].f), (frame[3].f), (frame[4].f), (frame[5].f));
	frame[7].f = temp0;
	LINE_NUMBER(170);
	frame[8].f = (((frame[2].f) + (frame[4].f)) / (jfloat(2)));
	LINE_NUMBER(171);
	frame[9].f = (((frame[3].f) + (frame[5].f)) / (jfloat(2)));
	LINE_NUMBER(172);
	jfloat temp1 = (jfloat)SM_java_lang_Math_abs_float_R_float(ctx, ((frame[2].f) - (frame[4].f)));
	jfloat temp2 = (jfloat)SM_java_lang_Math_abs_float_R_float(ctx, ((frame[3].f) - (frame[5].f)));
	jfloat temp3 = (jfloat)SM_java_lang_Math_max_float_float_R_float(ctx, temp1, temp2);
	frame[10].f = (temp3 - (jfloat((((jint)((mindustry_world_Block *) NULL_CHECK((frame[0].o)))->F_size) * (8)))));
	LINE_NUMBER(174);
	sp[0].o = (jobject)((mindustry_world_blocks_distribution_DirectionBridge *) NULL_CHECK((frame[0].o)))->F_bridgeRegion;
	jfloat temp4 = frame[8].f;
	jfloat temp5 = frame[9].f;
	jfloat temp6 = frame[10].f;
	sp[1].o = (jobject)((mindustry_world_blocks_distribution_DirectionBridge *) NULL_CHECK((frame[0].o)))->F_bridgeRegion;
	jfloat temp7 = jfloat(((jint)((arc_graphics_g2d_TextureRegion *) NULL_CHECK(sp[1].o))->F_height));
	sp[1].o = (jobject)((mindustry_world_blocks_distribution_DirectionBridge *) NULL_CHECK((frame[0].o)))->F_bridgeRegion;
	jfloat temp8 = (jfloat)((func_arc_graphics_g2d_TextureRegion_scl_R_float) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_graphics_g2d_TextureRegion_scl_R_float])(ctx, sp[1].o);
	SM_arc_graphics_g2d_Draw_rect_arc_graphics_g2d_TextureRegion_float_float_float_float_float(ctx, sp[0].o, temp4, temp5, temp6, (temp7 * temp8), (frame[7].f));
	LINE_NUMBER(175);
	if ((frame[6].o) == nullptr) goto label_7;
	}
	{
	LINE_NUMBER(176);
	SM_arc_graphics_g2d_Draw_color_arc_graphics_Color_float(ctx, (frame[6].o), (((jfloat)((arc_graphics_Color *) NULL_CHECK((frame[6].o)))->F_a) * (clinit_mindustry_core_Renderer(ctx), (jfloat)SF_mindustry_core_Renderer_bridgeOpacity)));
	LINE_NUMBER(177);
	sp[0].o = (jobject)((mindustry_world_blocks_distribution_DirectionBridge *) NULL_CHECK((frame[0].o)))->F_bridgeLiquidRegion;
	jfloat temp0 = frame[8].f;
	jfloat temp1 = frame[9].f;
	jfloat temp2 = frame[10].f;
	sp[1].o = (jobject)((mindustry_world_blocks_distribution_DirectionBridge *) NULL_CHECK((frame[0].o)))->F_bridgeLiquidRegion;
	jfloat temp3 = jfloat(((jint)((arc_graphics_g2d_TextureRegion *) NULL_CHECK(sp[1].o))->F_height));
	sp[1].o = (jobject)((mindustry_world_blocks_distribution_DirectionBridge *) NULL_CHECK((frame[0].o)))->F_bridgeLiquidRegion;
	jfloat temp4 = (jfloat)((func_arc_graphics_g2d_TextureRegion_scl_R_float) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_graphics_g2d_TextureRegion_scl_R_float])(ctx, sp[1].o);
	SM_arc_graphics_g2d_Draw_rect_arc_graphics_g2d_TextureRegion_float_float_float_float_float(ctx, sp[0].o, temp0, temp1, temp2, (temp3 * temp4), (frame[7].f));
	LINE_NUMBER(178);
	SM_arc_graphics_g2d_Draw_color(ctx);
	LINE_NUMBER(179);
	SM_arc_graphics_g2d_Draw_alpha_float(ctx, (clinit_mindustry_core_Renderer(ctx), (jfloat)SF_mindustry_core_Renderer_bridgeOpacity));
	}
label_7:;
	{
	LINE_NUMBER(181);
	sp[0].o = (jobject)((mindustry_world_blocks_distribution_DirectionBridge *) NULL_CHECK((frame[0].o)))->F_bridgeBotRegion;
	jint temp0 = (jint)((func_arc_graphics_g2d_TextureRegion_found_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_g2d_TextureRegion_found_R_boolean])(ctx, sp[0].o);
	if (temp0 == 0) goto label_12;
	}
	{
	LINE_NUMBER(182);
	SM_arc_graphics_g2d_Draw_color_float_float_float_float(ctx, (jfloat(0.4f)), (jfloat(0.4f)), (jfloat(0.4f)), ((jfloat(0.4f)) * (clinit_mindustry_core_Renderer(ctx), (jfloat)SF_mindustry_core_Renderer_bridgeOpacity)));
	LINE_NUMBER(183);
	sp[0].o = (jobject)((mindustry_world_blocks_distribution_DirectionBridge *) NULL_CHECK((frame[0].o)))->F_bridgeBotRegion;
	jfloat temp0 = frame[8].f;
	jfloat temp1 = frame[9].f;
	jfloat temp2 = frame[10].f;
	sp[1].o = (jobject)((mindustry_world_blocks_distribution_DirectionBridge *) NULL_CHECK((frame[0].o)))->F_bridgeBotRegion;
	jfloat temp3 = jfloat(((jint)((arc_graphics_g2d_TextureRegion *) NULL_CHECK(sp[1].o))->F_height));
	sp[1].o = (jobject)((mindustry_world_blocks_distribution_DirectionBridge *) NULL_CHECK((frame[0].o)))->F_bridgeBotRegion;
	jfloat temp4 = (jfloat)((func_arc_graphics_g2d_TextureRegion_scl_R_float) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_graphics_g2d_TextureRegion_scl_R_float])(ctx, sp[1].o);
	SM_arc_graphics_g2d_Draw_rect_arc_graphics_g2d_TextureRegion_float_float_float_float_float(ctx, sp[0].o, temp0, temp1, temp2, (temp3 * temp4), (frame[7].f));
	LINE_NUMBER(184);
	SM_arc_graphics_g2d_Draw_reset(ctx);
	}
label_12:;
	{
	LINE_NUMBER(186);
	SM_arc_graphics_g2d_Draw_alpha_float(ctx, (clinit_mindustry_core_Renderer(ctx), (jfloat)SF_mindustry_core_Renderer_bridgeOpacity));
	LINE_NUMBER(188);
	if ((clinit_mindustry_graphics_Lod(ctx), (jint)SF_mindustry_graphics_Lod_l1) == 0) goto label_17;
	}
	{
	LINE_NUMBER(189);
	SM_arc_graphics_g2d_Draw_alpha_float(ctx, (clinit_mindustry_graphics_Lod(ctx), (jfloat)SF_mindustry_graphics_Lod_alpha1));
	LINE_NUMBER(190);
	frame[11].f = (jfloat(6.0f));
	}
label_20:;
	{
	if ((floatCompare((frame[11].f), (((frame[10].f) + (jfloat((((jint)((mindustry_world_Block *) NULL_CHECK((frame[0].o)))->F_size) * (8))))) - (jfloat(5.0f))), 1)) > 0) goto label_17;
	}
	{
	LINE_NUMBER(191);
	sp[0].o = (jobject)((mindustry_world_blocks_distribution_DirectionBridge *) NULL_CHECK((frame[0].o)))->F_arrowRegion;
	jfloat temp0 = frame[2].f;
	jint temp1 = (jint)SM_arc_math_geom_Geometry_d4x_int_R_int(ctx, (frame[1].i));
	jfloat temp2 = temp0 + ((jfloat(temp1)) * (frame[11].f));
	jfloat temp3 = frame[3].f;
	jint temp4 = (jint)SM_arc_math_geom_Geometry_d4y_int_R_int(ctx, (frame[1].i));
	SM_arc_graphics_g2d_Draw_rect_arc_graphics_g2d_TextureRegion_float_float_float(ctx, sp[0].o, temp2, (temp3 + ((jfloat(temp4)) * (frame[11].f))), (frame[7].f));
	LINE_NUMBER(190);
	frame[11].f = ((frame[11].f) + (jfloat(5.0f)));
	goto label_20;
	}
label_17:;
	{
	LINE_NUMBER(195);
	SM_arc_graphics_g2d_Draw_reset(ctx);
	LINE_NUMBER(196);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jbool M_mindustry_world_blocks_distribution_DirectionBridge_positionsValid_int_int_int_int_R_boolean(jcontext ctx, jobject self, jint param0, jint param1, jint param2, jint param3) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/distribution/DirectionBridge:positionsValid", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].i = param1;
	frame[3].i = param2;
	frame[4].i = param3;
	{
	LINE_NUMBER(199);
	if ((frame[1].i) != (frame[3].i)) goto label_1;
	}
	{
	LINE_NUMBER(200);
	jint temp0 = (jint)SM_java_lang_Math_abs_int_R_int(ctx, ((frame[2].i) - (frame[4].i)));
	if (temp0 > ((jint)((mindustry_world_blocks_distribution_DirectionBridge *) NULL_CHECK((frame[0].o)))->F_range)) goto label_3;
	}
	INST_ICONST(1);
	goto label_4;
label_3:;
	INST_ICONST(0);
label_4:;
	popStackFrame(ctx);
	INST_IRETURN();
label_1:;
	{
	LINE_NUMBER(201);
	if ((frame[2].i) != (frame[4].i)) goto label_5;
	}
	{
	LINE_NUMBER(202);
	jint temp0 = (jint)SM_java_lang_Math_abs_int_R_int(ctx, ((frame[1].i) - (frame[3].i)));
	if (temp0 > ((jint)((mindustry_world_blocks_distribution_DirectionBridge *) NULL_CHECK((frame[0].o)))->F_range)) goto label_7;
	}
	INST_ICONST(1);
	goto label_8;
label_7:;
	INST_ICONST(0);
label_8:;
	popStackFrame(ctx);
	INST_IRETURN();
label_5:;
	{
	LINE_NUMBER(204);
	popStackFrame(ctx);
	return (jint(0));
	}

	popStackFrame(ctx);
}

jbool M_mindustry_world_blocks_distribution_DirectionBridge_lambda$changePlacementPath$0_arc_math_geom_Point2_arc_math_geom_Point2_R_boolean(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/distribution/DirectionBridge:lambda$changePlacementPath$0", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(91);
	jint temp0 = (jint)SM_java_lang_Math_abs_int_R_int(ctx, (((jint)((arc_math_geom_Point2 *) NULL_CHECK((frame[1].o)))->F_x) - ((jint)((arc_math_geom_Point2 *) NULL_CHECK((frame[2].o)))->F_x)));
	jint temp1 = (jint)SM_java_lang_Math_abs_int_R_int(ctx, (((jint)((arc_math_geom_Point2 *) NULL_CHECK((frame[1].o)))->F_y) - ((jint)((arc_math_geom_Point2 *) NULL_CHECK((frame[2].o)))->F_y)));
	jint temp2 = (jint)SM_java_lang_Math_max_int_int_R_int(ctx, temp0, temp1);
	if (temp2 > ((jint)((mindustry_world_blocks_distribution_DirectionBridge *) NULL_CHECK((frame[0].o)))->F_range)) goto label_1;
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

jbool M_mindustry_world_blocks_distribution_DirectionBridge_lambda$new$0_mindustry_entities_units_BuildPlan_R_boolean(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/distribution/DirectionBridge:lambda$new$0", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(62);
	sp[0].o = (jobject)((mindustry_entities_units_BuildPlan *) NULL_CHECK((frame[1].o)))->F_block;
	if (sp[0].o != (frame[0].o)) goto label_1;
	}
	{
	clinit_mindustry_world_blocks_distribution_DirectionBridge(ctx);
	sp[0].o = (jobject)SF_mindustry_world_blocks_distribution_DirectionBridge_currentPlan;
	if (sp[0].o == (frame[1].o)) goto label_1;
	}
	{
	jint temp0 = (jint)((mindustry_entities_units_BuildPlan *) NULL_CHECK((frame[1].o)))->F_x;
	clinit_mindustry_world_blocks_distribution_DirectionBridge(ctx);
	sp[0].o = (jobject)SF_mindustry_world_blocks_distribution_DirectionBridge_currentPlan;
	jint temp1 = (jint)SM_arc_math_Mathf_clamp_int_int_int_R_int(ctx, (temp0 - ((jint)((mindustry_entities_units_BuildPlan *) NULL_CHECK(sp[0].o))->F_x)), (jint(-1)), (jint(1)));
	clinit_mindustry_world_blocks_distribution_DirectionBridge(ctx);
	sp[0].o = (jobject)SF_mindustry_world_blocks_distribution_DirectionBridge_currentPlan;
	jint temp2 = (jint)SM_arc_math_geom_Geometry_d4x_int_R_int(ctx, ((jint)((mindustry_entities_units_BuildPlan *) NULL_CHECK(sp[0].o))->F_rotation));
	if (temp1 != temp2) goto label_1;
	}
	{
	jint temp0 = (jint)((mindustry_entities_units_BuildPlan *) NULL_CHECK((frame[1].o)))->F_y;
	clinit_mindustry_world_blocks_distribution_DirectionBridge(ctx);
	sp[0].o = (jobject)SF_mindustry_world_blocks_distribution_DirectionBridge_currentPlan;
	jint temp1 = (jint)SM_arc_math_Mathf_clamp_int_int_int_R_int(ctx, (temp0 - ((jint)((mindustry_entities_units_BuildPlan *) NULL_CHECK(sp[0].o))->F_y)), (jint(-1)), (jint(1)));
	clinit_mindustry_world_blocks_distribution_DirectionBridge(ctx);
	sp[0].o = (jobject)SF_mindustry_world_blocks_distribution_DirectionBridge_currentPlan;
	jint temp2 = (jint)SM_arc_math_geom_Geometry_d4y_int_R_int(ctx, ((jint)((mindustry_entities_units_BuildPlan *) NULL_CHECK(sp[0].o))->F_rotation));
	if (temp1 != temp2) goto label_1;
	}
	{
	LINE_NUMBER(63);
	jint temp0 = (jint)((mindustry_entities_units_BuildPlan *) NULL_CHECK((frame[1].o)))->F_x;
	clinit_mindustry_world_blocks_distribution_DirectionBridge(ctx);
	sp[0].o = (jobject)SF_mindustry_world_blocks_distribution_DirectionBridge_currentPlan;
	jint temp1 = (jint)SM_java_lang_Math_abs_int_R_int(ctx, (temp0 - ((jint)((mindustry_entities_units_BuildPlan *) NULL_CHECK(sp[0].o))->F_x)));
	jint temp2 = (jint)((mindustry_entities_units_BuildPlan *) NULL_CHECK((frame[1].o)))->F_y;
	clinit_mindustry_world_blocks_distribution_DirectionBridge(ctx);
	sp[0].o = (jobject)SF_mindustry_world_blocks_distribution_DirectionBridge_currentPlan;
	jint temp3 = (jint)SM_java_lang_Math_abs_int_R_int(ctx, (temp2 - ((jint)((mindustry_entities_units_BuildPlan *) NULL_CHECK(sp[0].o))->F_y)));
	jint temp4 = (jint)SM_java_lang_Math_max_int_int_R_int(ctx, temp1, temp3);
	frame[2].i = temp4;
	LINE_NUMBER(64);
	if ((frame[2].i) > ((jint)((mindustry_world_blocks_distribution_DirectionBridge *) NULL_CHECK((frame[0].o)))->F_otherDst)) goto label_1;
	}
	{
	LINE_NUMBER(65);
	clinit_mindustry_world_blocks_distribution_DirectionBridge(ctx);
	SF_mindustry_world_blocks_distribution_DirectionBridge_otherPlan = (frame[1].o);
	LINE_NUMBER(66);
	((mindustry_world_blocks_distribution_DirectionBridge *) NULL_CHECK((frame[0].o)))->F_otherDst = (frame[2].i);
	}
label_1:;
	{
	LINE_NUMBER(69);
	popStackFrame(ctx);
	return (jint(0));
	}

	popStackFrame(ctx);
}

void *vtable_mindustry_world_blocks_distribution_DirectionBridge[] {
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
	(void *) M_mindustry_world_blocks_distribution_DirectionBridge_init,
	(void *) M_mindustry_world_Block_postInit,
	(void *) M_mindustry_world_Block_afterPatch,
	(void *) M_mindustry_world_Block_load,
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
	(void *) M_mindustry_world_Block_setStats,
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
	(void *) M_mindustry_world_blocks_distribution_DirectionBridge_drawPlace_int_int_int_boolean,
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
	(void *) M_mindustry_world_Block_outputsItems_R_boolean,
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
	(void *) M_mindustry_world_Block_setBars,
	(void *) M_mindustry_world_Block_consumesItem_mindustry_type_Item_R_boolean,
	(void *) M_mindustry_world_Block_consumesLiquid_mindustry_type_Liquid_R_boolean,
	(void *) M_mindustry_world_Block_canReplace_mindustry_world_Block_R_boolean,
	(void *) M_mindustry_world_Block_getReplacement_mindustry_entities_units_BuildPlan_arc_struct_Seq_R_mindustry_world_Block,
	(void *) M_mindustry_world_Block_changePlacementPath_arc_struct_Seq_int_boolean,
	(void *) M_mindustry_world_blocks_distribution_DirectionBridge_changePlacementPath_arc_struct_Seq_int,
	(void *) M_mindustry_world_Block_handlePlacementLine_arc_struct_Seq,
	(void *) M_mindustry_world_Block_configSenseable_R_boolean,
	(void *) M_mindustry_world_Block_nextConfig_R_java_lang_Object,
	(void *) M_mindustry_world_Block_onNewPlan_mindustry_entities_units_BuildPlan,
	(void *) M_mindustry_world_Block_drawPlan_mindustry_entities_units_BuildPlan_arc_util_Eachable_boolean,
	(void *) M_mindustry_world_Block_drawPlan_mindustry_entities_units_BuildPlan_arc_util_Eachable_boolean_float,
	(void *) M_mindustry_world_Block_drawOtherPlayerPlan_mindustry_entities_units_BuildPlan_arc_util_Eachable_float,
	(void *) M_mindustry_world_blocks_distribution_DirectionBridge_drawPlanRegion_mindustry_entities_units_BuildPlan_arc_util_Eachable,
	(void *) M_mindustry_world_Block_drawDefaultPlanRegion_mindustry_entities_units_BuildPlan_arc_util_Eachable,
	(void *) M_mindustry_world_Block_getPlanRegion_mindustry_entities_units_BuildPlan_arc_util_Eachable_R_arc_graphics_g2d_TextureRegion,
	(void *) M_mindustry_world_Block_drawPlanConfig_mindustry_entities_units_BuildPlan_arc_util_Eachable,
	(void *) M_mindustry_world_Block_drawPlanConfigCenter_mindustry_entities_units_BuildPlan_java_lang_Object_java_lang_String_boolean,
	(void *) M_mindustry_world_Block_drawPlanConfigCenter_mindustry_entities_units_BuildPlan_java_lang_Object_java_lang_String,
	(void *) M_mindustry_world_blocks_distribution_DirectionBridge_drawPlanConfigTop_mindustry_entities_units_BuildPlan_arc_util_Eachable,
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
	(void *) M_mindustry_world_blocks_distribution_DirectionBridge_icons_R_Array1_arc_graphics_g2d_TextureRegion,
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
	(void *) M_mindustry_world_blocks_distribution_DirectionBridge_drawPlace_int_int_int_boolean_boolean,
	(void *) M_mindustry_world_blocks_distribution_DirectionBridge_drawBridge_int_float_float_float_float_arc_graphics_Color,
	(void *) M_mindustry_world_blocks_distribution_DirectionBridge_positionsValid_int_int_int_int_R_boolean,
	(void *) M_mindustry_world_blocks_distribution_DirectionBridge_lambda$changePlacementPath$0_arc_math_geom_Point2_arc_math_geom_Point2_R_boolean,
	(void *) M_mindustry_world_blocks_distribution_DirectionBridge_lambda$new$0_mindustry_entities_units_BuildPlan_R_boolean,
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
	{ "drawPlace", "(IIIZZ)V" },
	{ "drawBridge", "(IFFFFLarc/graphics/Color;)V" },
	{ "positionsValid", "(IIII)Z" },
	{ "lambda$changePlacementPath$0", "(Larc/math/geom/Point2;Larc/math/geom/Point2;)Z" },
	{ "lambda$new$0", "(Lmindustry/entities/units/BuildPlan;)Z" },
};

static jclass innerClasses[] {
	&class_mindustry_world_blocks_distribution_DirectionBridge$DirectionBridgeBuild,
};

static FieldMetadata fields[] {
	{ "otherDst", &class_int, offsetof(mindustry_world_blocks_distribution_DirectionBridge, F_otherDst), "I", 2 },
	{ "bridgeRegion", &class_arc_graphics_g2d_TextureRegion, offsetof(mindustry_world_blocks_distribution_DirectionBridge, F_bridgeRegion), "Larc/graphics/g2d/TextureRegion;", 1 },
	{ "bridgeBotRegion", &class_arc_graphics_g2d_TextureRegion, offsetof(mindustry_world_blocks_distribution_DirectionBridge, F_bridgeBotRegion), "Larc/graphics/g2d/TextureRegion;", 1 },
	{ "bridgeLiquidRegion", &class_arc_graphics_g2d_TextureRegion, offsetof(mindustry_world_blocks_distribution_DirectionBridge, F_bridgeLiquidRegion), "Larc/graphics/g2d/TextureRegion;", 1 },
	{ "arrowRegion", &class_arc_graphics_g2d_TextureRegion, offsetof(mindustry_world_blocks_distribution_DirectionBridge, F_arrowRegion), "Larc/graphics/g2d/TextureRegion;", 1 },
	{ "dirRegion", &class_arc_graphics_g2d_TextureRegion, offsetof(mindustry_world_blocks_distribution_DirectionBridge, F_dirRegion), "Larc/graphics/g2d/TextureRegion;", 1 },
	{ "range", &class_int, offsetof(mindustry_world_blocks_distribution_DirectionBridge, F_range), "I", 1 },
	{ "currentPlan", &class_mindustry_entities_units_BuildPlan, (intptr_t) &SF_mindustry_world_blocks_distribution_DirectionBridge_currentPlan, "Lmindustry/entities/units/BuildPlan;", 10 },
	{ "otherPlan", &class_mindustry_entities_units_BuildPlan, (intptr_t) &SF_mindustry_world_blocks_distribution_DirectionBridge_otherPlan, "Lmindustry/entities/units/BuildPlan;", 10 },
	{ "planFinder", &class_arc_func_Boolf, offsetof(mindustry_world_blocks_distribution_DirectionBridge, F_planFinder), "Larc/func/Boolf;", 2 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_mindustry_world_blocks_distribution_DirectionBridge_java_lang_String, 0, "(Ljava/lang/String;)V", 1 },
	{ "init", (intptr_t) M_mindustry_world_blocks_distribution_DirectionBridge_init, VTABLE_mindustry_world_blocks_distribution_DirectionBridge_init, "()V", 1 },
	{ "drawPlanRegion", (intptr_t) M_mindustry_world_blocks_distribution_DirectionBridge_drawPlanRegion_mindustry_entities_units_BuildPlan_arc_util_Eachable, VTABLE_mindustry_world_blocks_distribution_DirectionBridge_drawPlanRegion_mindustry_entities_units_BuildPlan_arc_util_Eachable, "(Lmindustry/entities/units/BuildPlan;Larc/util/Eachable;)V", 1 },
	{ "drawPlanConfigTop", (intptr_t) M_mindustry_world_blocks_distribution_DirectionBridge_drawPlanConfigTop_mindustry_entities_units_BuildPlan_arc_util_Eachable, VTABLE_mindustry_world_blocks_distribution_DirectionBridge_drawPlanConfigTop_mindustry_entities_units_BuildPlan_arc_util_Eachable, "(Lmindustry/entities/units/BuildPlan;Larc/util/Eachable;)V", 1 },
	{ "icons", (intptr_t) M_mindustry_world_blocks_distribution_DirectionBridge_icons_R_Array1_arc_graphics_g2d_TextureRegion, VTABLE_mindustry_world_blocks_distribution_DirectionBridge_icons_R_Array1_arc_graphics_g2d_TextureRegion, "()[Larc/graphics/g2d/TextureRegion;", 1 },
	{ "changePlacementPath", (intptr_t) M_mindustry_world_blocks_distribution_DirectionBridge_changePlacementPath_arc_struct_Seq_int, VTABLE_mindustry_world_blocks_distribution_DirectionBridge_changePlacementPath_arc_struct_Seq_int, "(Larc/struct/Seq;I)V", 1 },
	{ "drawPlace", (intptr_t) M_mindustry_world_blocks_distribution_DirectionBridge_drawPlace_int_int_int_boolean_boolean, VTABLE_mindustry_world_blocks_distribution_DirectionBridge_drawPlace_int_int_int_boolean_boolean, "(IIIZZ)V", 1 },
	{ "drawPlace", (intptr_t) M_mindustry_world_blocks_distribution_DirectionBridge_drawPlace_int_int_int_boolean, VTABLE_mindustry_world_blocks_distribution_DirectionBridge_drawPlace_int_int_int_boolean, "(IIIZ)V", 1 },
	{ "drawBridge", (intptr_t) M_mindustry_world_blocks_distribution_DirectionBridge_drawBridge_int_float_float_float_float_arc_graphics_Color, VTABLE_mindustry_world_blocks_distribution_DirectionBridge_drawBridge_int_float_float_float_float_arc_graphics_Color, "(IFFFFLarc/graphics/Color;)V", 1 },
	{ "positionsValid", (intptr_t) M_mindustry_world_blocks_distribution_DirectionBridge_positionsValid_int_int_int_int_R_boolean, VTABLE_mindustry_world_blocks_distribution_DirectionBridge_positionsValid_int_int_int_int_R_boolean, "(IIII)Z", 1 },
	{ "lambda$changePlacementPath$0", (intptr_t) M_mindustry_world_blocks_distribution_DirectionBridge_lambda$changePlacementPath$0_arc_math_geom_Point2_arc_math_geom_Point2_R_boolean, VTABLE_mindustry_world_blocks_distribution_DirectionBridge_lambda$changePlacementPath$0_arc_math_geom_Point2_arc_math_geom_Point2_R_boolean, "(Larc/math/geom/Point2;Larc/math/geom/Point2;)Z", 4098 },
	{ "lambda$new$0", (intptr_t) M_mindustry_world_blocks_distribution_DirectionBridge_lambda$new$0_mindustry_entities_units_BuildPlan_R_boolean, VTABLE_mindustry_world_blocks_distribution_DirectionBridge_lambda$new$0_mindustry_entities_units_BuildPlan_R_boolean, "(Lmindustry/entities/units/BuildPlan;)Z", 4098 },
};

Class class_mindustry_world_blocks_distribution_DirectionBridge{
		.nativeName = (intptr_t) "mindustry/world/blocks/distribution/DirectionBridge",
		.parentClass = (intptr_t) &class_mindustry_world_Block,
		.size = sizeof(mindustry_world_blocks_distribution_DirectionBridge),
		.classVtable = (intptr_t) vtable_mindustry_world_blocks_distribution_DirectionBridge,
		.staticInitializer = (intptr_t) clinit_mindustry_world_blocks_distribution_DirectionBridge,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_mindustry_world_blocks_distribution_DirectionBridge,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 1,
		.nativeInnerClasses = (intptr_t) innerClasses,
		.access = 33,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 10,
		.nativeFields = (intptr_t) fields,
		.methodCount = 12,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 194,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_mindustry_world_blocks_distribution_DirectionBridge = registerClass(&class_mindustry_world_blocks_distribution_DirectionBridge);

}
