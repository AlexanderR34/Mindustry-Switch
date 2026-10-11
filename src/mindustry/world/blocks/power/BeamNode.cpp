#include "mindustry/world/blocks/power/BeamNode.h"
#include "mindustry/world/Block.h"
#include "mindustry/world/blocks/power/BeamNode_invoke_arc_func_Floatf_1.h"
#include "mindustry/world/meta/StatUnit.h"
#include "mindustry/world/blocks/power/BeamNode_invoke_arc_func_Boolf_1.h"
#include "arc/math/geom/Point2.h"
#include "arc/math/geom/Rect.h"
#include "mindustry/ctype/UnlockableContent.h"
#include "arc/graphics/Color.h"
#include "arc/func/Cons.h"
#include "mindustry/world/meta/Stat.h"
#include "java/lang/String.h"
#include "arc/func/Boolf2.h"
#include "mindustry/world/blocks/power/BeamNode_invoke_arc_func_Boolf2_1.h"
#include "arc/util/Tmp.h"
#include "arc/struct/Seq.h"
#include "mindustry/ctype/MappableContent.h"
#include "mindustry/world/Tile.h"
#include "mindustry/world/blocks/power/BeamNode_BeamNodeBuild.h"
#include "arc/math/geom/Position.h"
#include "arc/func/Boolf.h"
#include "arc/math/geom/Geometry.h"
#include "java/lang/Math.h"
#include "arc/func/Floatf.h"
#include "arc/func/Func.h"
#include "arc/graphics/g2d/TextureRegion.h"
#include "mindustry/world/meta/Stats.h"
#include "mindustry/game/Teams_TeamData.h"
#include "arc/math/geom/QuadTree.h"
#include "mindustry/input/Placement.h"
#include "mindustry/world/blocks/power/PowerBlock.h"
#include "mindustry/gen/Building.h"
#include "mindustry/graphics/Pal.h"
#include "java/lang/Object.h"
#include "mindustry/world/blocks/power/PowerNode.h"
#include "mindustry/gen/Player.h"
#include "mindustry/ctype/Content.h"
#include "mindustry/graphics/Drawf.h"
#include "mindustry/world/blocks/power/BeamNode.h"
#include "mindustry/game/Team.h"
#include "mindustry/Vars.h"
#include "mindustry/core/World.h"

extern "C" {

jint SF_mindustry_world_blocks_power_BeamNode_maxRange;

void mark_mindustry_world_blocks_power_BeamNode(jobject object, jint mark, jint depth) {
	if (!object) {
		return;
	}
	if (depth > GC_DEPTH_ALWAYS && (object->gcMark < GC_MARK_START || object->gcMark == mark))
		return;
	if (depth > MAX_GC_MARK_DEPTH) {
		markDeepObject(object);
		return;
	}
	mark_mindustry_world_blocks_power_PowerBlock(object, mark, depth);
	if (object->gcMark >= GC_MARK_START)
		object->gcMark = mark;
	auto self = (mindustry_world_blocks_power_BeamNode *) object;
	if (self->F_laser)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_laser)->clazz)->markFunction)((jobject) self->F_laser, mark, depth + 1);
	if (self->F_laserEnd)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_laserEnd)->clazz)->markFunction)((jobject) self->F_laserEnd, mark, depth + 1);
	if (self->F_laserColor1)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_laserColor1)->clazz)->markFunction)((jobject) self->F_laserColor1, mark, depth + 1);
	if (self->F_laserColor2)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_laserColor2)->clazz)->markFunction)((jobject) self->F_laserColor2, mark, depth + 1);
}

void clinit_mindustry_world_blocks_power_BeamNode(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	clinit_mindustry_world_blocks_power_PowerBlock(ctx);
	SF_mindustry_world_blocks_power_BeamNode_maxRange = jint(30);
}

void init_mindustry_world_blocks_power_BeamNode_java_lang_String(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/power/BeamNode:<init>", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_world_blocks_power_BeamNode(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(40);
	init_mindustry_world_blocks_power_PowerBlock_java_lang_String(ctx, (frame[0].o), (frame[1].o));
	LINE_NUMBER(29);
	((mindustry_world_blocks_power_BeamNode *) NULL_CHECK((frame[0].o)))->F_range = (jint(5));
	LINE_NUMBER(34);
	sp[0].o = frame[0].o;
	clinit_arc_graphics_Color(ctx);
	sp[1].o = (jobject)SF_arc_graphics_Color_white;
	((mindustry_world_blocks_power_BeamNode *) NULL_CHECK(sp[0].o))->F_laserColor1 = (jref) sp[1].o;
	LINE_NUMBER(35);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)SM_arc_graphics_Color_valueOf_java_lang_String_R_arc_graphics_Color(ctx, (((jobject) createStringLiteral(ctx, u8"ffd9c2"_j))));
	((mindustry_world_blocks_power_BeamNode *) NULL_CHECK(sp[0].o))->F_laserColor2 = (jref) sp[1].o;
	LINE_NUMBER(36);
	((mindustry_world_blocks_power_BeamNode *) NULL_CHECK((frame[0].o)))->F_pulseScl = (jfloat(7.0f));
	((mindustry_world_blocks_power_BeamNode *) NULL_CHECK((frame[0].o)))->F_pulseMag = (jfloat(0.05f));
	LINE_NUMBER(37);
	((mindustry_world_blocks_power_BeamNode *) NULL_CHECK((frame[0].o)))->F_laserWidth = (jfloat(0.4f));
	LINE_NUMBER(41);
	sp[0].o = frame[0].o;
	sp[1].o = frame[0].o;
	jint temp0 = jint(0);
	((mindustry_world_Block *) NULL_CHECK(sp[1].o))->F_outputsPower = temp0;
	((mindustry_world_Block *) NULL_CHECK(sp[0].o))->F_consumesPower = temp0;
	LINE_NUMBER(42);
	((mindustry_world_Block *) NULL_CHECK((frame[0].o)))->F_drawDisabled = (jint(0));
	LINE_NUMBER(43);
	sp[0].o = frame[0].o;
	((mindustry_world_Block *) NULL_CHECK(sp[0].o))->F_envEnabled = (((jint)((mindustry_world_Block *) NULL_CHECK(sp[0].o))->F_envEnabled) | (jint(2)));
	LINE_NUMBER(44);
	((mindustry_world_Block *) NULL_CHECK((frame[0].o)))->F_allowDiagonal = (jint(0));
	LINE_NUMBER(45);
	((mindustry_world_Block *) NULL_CHECK((frame[0].o)))->F_underBullets = (jint(1));
	LINE_NUMBER(46);
	((mindustry_world_Block *) NULL_CHECK((frame[0].o)))->F_priority = (jfloat(-1.0f));
	LINE_NUMBER(47);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_world_blocks_power_BeamNode_setBars(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/power/BeamNode:setBars", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(51);
	M_mindustry_world_Block_setBars(ctx, (frame[0].o));
	LINE_NUMBER(53);
	sp[0].o = frame[0].o;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"power"_j));
	sp[2].o = (jobject)SM_mindustry_world_blocks_power_PowerNode_makePowerBalance_R_arc_func_Func(ctx);
	((func_mindustry_world_blocks_power_BeamNode_addBar_java_lang_String_arc_func_Func) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_blocks_power_BeamNode_addBar_java_lang_String_arc_func_Func])(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(54);
	sp[0].o = frame[0].o;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"batteries"_j));
	sp[2].o = (jobject)SM_mindustry_world_blocks_power_PowerNode_makeBatteryBalance_R_arc_func_Func(ctx);
	((func_mindustry_world_blocks_power_BeamNode_addBar_java_lang_String_arc_func_Func) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_blocks_power_BeamNode_addBar_java_lang_String_arc_func_Func])(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(55);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_world_blocks_power_BeamNode_setStats(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/power/BeamNode:setStats", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(59);
	M_mindustry_world_Block_setStats(ctx, (frame[0].o));
	LINE_NUMBER(61);
	sp[0].o = (jobject)((mindustry_ctype_UnlockableContent *) NULL_CHECK((frame[0].o)))->F_stats;
	clinit_mindustry_world_meta_Stat(ctx);
	sp[1].o = (jobject)SF_mindustry_world_meta_Stat_powerRange;
	jfloat temp0 = jfloat(((jint)((mindustry_world_blocks_power_BeamNode *) NULL_CHECK((frame[0].o)))->F_range));
	clinit_mindustry_world_meta_StatUnit(ctx);
	sp[2].o = (jobject)SF_mindustry_world_meta_StatUnit_blocks;
	((func_mindustry_world_meta_Stats_add_mindustry_world_meta_Stat_float_mindustry_world_meta_StatUnit) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_meta_Stats_add_mindustry_world_meta_Stat_float_mindustry_world_meta_StatUnit])(ctx, sp[0].o, sp[1].o, temp0, sp[2].o);
	LINE_NUMBER(62);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_world_blocks_power_BeamNode_init(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/power/BeamNode:init", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(66);
	M_mindustry_world_Block_init(ctx, (frame[0].o));
	LINE_NUMBER(68);
	((func_mindustry_world_blocks_power_BeamNode_updateClipRadius_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_world_blocks_power_BeamNode_updateClipRadius_float])(ctx, (frame[0].o), (jfloat(((((jint)((mindustry_world_blocks_power_BeamNode *) NULL_CHECK((frame[0].o)))->F_range) + (jint(1))) * (8)))));
	LINE_NUMBER(69);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_world_blocks_power_BeamNode_drawPlace_int_int_int_boolean(jcontext ctx, jobject self, jint param0, jint param1, jint param2, jbool param3) {
	NULL_CHECK(self);
	jtype frame[21];
	auto stack = &frame[14];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/power/BeamNode:drawPlace", 21 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].i = param1;
	frame[3].i = param2;
	frame[4].i = param3;
	{
	LINE_NUMBER(73);
	frame[5].i = (jint(0));
	}
label_1:;
	{
	if ((frame[5].i) >= (jint(4))) goto label_2;
	}
	{
	LINE_NUMBER(74);
	frame[6].i = (((jint)((mindustry_world_blocks_power_BeamNode *) NULL_CHECK((frame[0].o)))->F_range) + (((jint)((mindustry_world_Block *) NULL_CHECK((frame[0].o)))->F_size) / (jint(2))));
	LINE_NUMBER(75);
	frame[7].o = (jobject(nullptr));
	LINE_NUMBER(76);
	clinit_arc_math_geom_Geometry(ctx);
	sp[0].o = (jobject)SF_arc_math_geom_Geometry_d4;
	frame[8].o = ((jobject)ARRAY_ACCESS(jobject, sp[0].o, (frame[5].i)));
	LINE_NUMBER(77);
	frame[9].i = ((jint)((arc_math_geom_Point2 *) NULL_CHECK((frame[8].o)))->F_x);
	frame[10].i = ((jint)((arc_math_geom_Point2 *) NULL_CHECK((frame[8].o)))->F_y);
	LINE_NUMBER(78);
	frame[11].i = (((jint)((mindustry_world_Block *) NULL_CHECK((frame[0].o)))->F_size) / (jint(2)));
	LINE_NUMBER(79);
	frame[12].i = ((jint(1)) + (frame[11].i));
	}
label_10:;
	{
	if ((frame[12].i) > (((jint)((mindustry_world_blocks_power_BeamNode *) NULL_CHECK((frame[0].o)))->F_range) + (frame[11].i))) goto label_11;
	}
	{
	LINE_NUMBER(80);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_world;
	sp[0].o = (jobject)((func_mindustry_core_World_build_int_int_R_mindustry_gen_Building) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_World_build_int_int_R_mindustry_gen_Building])(ctx, sp[0].o, ((frame[1].i) + ((frame[12].i) * ((jint)((arc_math_geom_Point2 *) NULL_CHECK((frame[8].o)))->F_x))), ((frame[2].i) + ((frame[12].i) * ((jint)((arc_math_geom_Point2 *) NULL_CHECK((frame[8].o)))->F_y))));
	frame[13].o = sp[0].o;
	LINE_NUMBER(83);
	if ((frame[13].o) == nullptr) goto label_14;
	}
	{
	jint temp0 = (jint)((func_mindustry_gen_Building_isInsulated_R_boolean) ((void **) nullCheck(ctx, (frame[13].o))->vtable)[VTABLE_mindustry_gen_Building_isInsulated_R_boolean])(ctx, (frame[13].o));
	if (temp0 == 0) goto label_14;
	}
	LINE_NUMBER(84);
	goto label_11;
label_14:;
	{
	LINE_NUMBER(87);
	if ((frame[13].o) == nullptr) goto label_16;
	}
	{
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[13].o)))->F_block;
	if (((jint)((mindustry_world_Block *) NULL_CHECK(sp[0].o))->F_hasPower) == 0) goto label_16;
	}
	{
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[13].o)))->F_team;
	clinit_mindustry_Vars(ctx);
	sp[1].o = (jobject)SF_mindustry_Vars_player;
	sp[1].o = (jobject)((func_mindustry_gen_Player_team_R_mindustry_game_Team) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_mindustry_gen_Player_team_R_mindustry_game_Team])(ctx, sp[1].o);
	if (sp[0].o != sp[1].o) goto label_16;
	}
	{
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[13].o)))->F_block;
	if ((isInstance(ctx, sp[0].o, &class_mindustry_world_blocks_power_PowerNode)) != 0) goto label_16;
	}
	{
	LINE_NUMBER(88);
	frame[6].i = (frame[12].i);
	LINE_NUMBER(89);
	frame[7].o = (frame[13].o);
	LINE_NUMBER(90);
	goto label_11;
	}
label_16:;
	{
	LINE_NUMBER(79);
	INST_IINC(12, 1);
	goto label_10;
	}
label_11:;
	{
	LINE_NUMBER(94);
	clinit_mindustry_graphics_Pal(ctx);
	sp[0].o = (jobject)SF_mindustry_graphics_Pal_placing;
	SM_mindustry_graphics_Drawf_dashLine_arc_graphics_Color_float_float_float_float(ctx, sp[0].o, ((jfloat(((frame[1].i) * (8)))) + ((jfloat((frame[9].i))) * (((jfloat(((8) * ((jint)((mindustry_world_Block *) NULL_CHECK((frame[0].o)))->F_size)))) / (jfloat(2))) + (jfloat(2))))), ((jfloat(((frame[2].i) * (8)))) + ((jfloat((frame[10].i))) * (((jfloat(((8) * ((jint)((mindustry_world_Block *) NULL_CHECK((frame[0].o)))->F_size)))) / (jfloat(2))) + (jfloat(2))))), (jfloat((((frame[1].i) * (8)) + (((frame[9].i) * (frame[6].i)) * (8))))), (jfloat((((frame[2].i) * (8)) + (((frame[10].i) * (frame[6].i)) * (8))))));
	LINE_NUMBER(101);
	if ((frame[7].o) == nullptr) goto label_21;
	}
	{
	LINE_NUMBER(102);
	jfloat temp0 = (jfloat)((mindustry_gen_Building *) NULL_CHECK((frame[7].o)))->F_x;
	jfloat temp1 = (jfloat)((mindustry_gen_Building *) NULL_CHECK((frame[7].o)))->F_y;
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[7].o)))->F_block;
	SM_mindustry_graphics_Drawf_square_float_float_float_float(ctx, temp0, temp1, (((jfloat((((jint)((mindustry_world_Block *) NULL_CHECK(sp[0].o))->F_size) * (8)))) / (jfloat(2))) + (jfloat(2.5f))), (jfloat(0)));
	}
label_21:;
	{
	LINE_NUMBER(73);
	INST_IINC(5, 1);
	goto label_1;
	}
label_2:;
	LINE_NUMBER(105);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_world_blocks_power_BeamNode_changePlacementPath_arc_struct_Seq_int_boolean(jcontext ctx, jobject self, jobject param0, jint param1, jbool param2) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/power/BeamNode:changePlacementPath", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	frame[3].i = param2;
	{
	LINE_NUMBER(109);
	if ((frame[3].i) != 0) goto label_1;
	}
	{
	LINE_NUMBER(110);
	sp[0].o = frame[1].o;
	sp[1].o = frame[0].o;
	jint temp0 = frame[2].i;
	{ /* InvokeDynamic */
		clinit_mindustry_world_blocks_power_BeamNode_invoke_arc_func_Boolf2_1(ctx);
		auto proxy = (mindustry_world_blocks_power_BeamNode_invoke_arc_func_Boolf2_1 *) gcAlloc(ctx, &class_mindustry_world_blocks_power_BeamNode_invoke_arc_func_Boolf2_1);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[2].o = (jobject) proxy;
	}
	SM_mindustry_input_Placement_calculateNodes_arc_struct_Seq_mindustry_world_Block_int_arc_func_Boolf2(ctx, sp[0].o, sp[1].o, temp0, sp[2].o);
	}
label_1:;
	LINE_NUMBER(112);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void SM_mindustry_world_blocks_power_BeamNode_getNodeLinks_mindustry_world_Tile_mindustry_world_Block_mindustry_game_Team_arc_func_Cons(jcontext ctx, jobject param0, jobject param1, jobject param2, jobject param3) {
	jtype frame[18];
	auto stack = &frame[12];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/power/BeamNode:getNodeLinks", 18 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_world_blocks_power_BeamNode(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	frame[2].o = param2;
	frame[3].o = param3;
	{
	LINE_NUMBER(116);
	sp[0].o = (jobject)((func_mindustry_game_Team_data_R_mindustry_game_Teams$TeamData) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_mindustry_game_Team_data_R_mindustry_game_Teams$TeamData])(ctx, (frame[2].o));
	sp[0].o = (jobject)((mindustry_game_Teams$TeamData *) NULL_CHECK(sp[0].o))->F_buildingTree;
	frame[4].o = sp[0].o;
	LINE_NUMBER(118);
	if ((frame[4].o) != nullptr) goto label_2;
	}
	popStackFrame(ctx);
	INST_RETURN();
label_2:;
	{
	LINE_NUMBER(120);
	jfloat temp0 = (jfloat)((func_mindustry_world_Tile_worldx_R_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_world_Tile_worldx_R_float])(ctx, (frame[0].o));
	frame[5].f = (temp0 + ((jfloat)((mindustry_world_Block *) NULL_CHECK((frame[1].o)))->F_offset));
	jfloat temp1 = (jfloat)((func_mindustry_world_Tile_worldy_R_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_world_Tile_worldy_R_float])(ctx, (frame[0].o));
	frame[6].f = (temp1 + ((jfloat)((mindustry_world_Block *) NULL_CHECK((frame[1].o)))->F_offset));
	frame[7].f = ((jfloat((((jint)((mindustry_world_Block *) NULL_CHECK((frame[1].o)))->F_size) * (8)))) / (jfloat(2)));
	frame[8].f = (jfloat(240.0f));
	LINE_NUMBER(122);
	frame[9].i = (jint(0));
	}
label_7:;
	{
	if ((frame[9].i) >= (jint(4))) goto label_8;
	}
	{
	LINE_NUMBER(123);
	switch((frame[9].i)) {
		case 0: goto label_10;
		case 1: goto label_11;
		case 2: goto label_12;
		case 3: goto label_13;
		default: goto label_14;
	}
	}
label_10:;
	{
	LINE_NUMBER(124);
	clinit_arc_util_Tmp(ctx);
	sp[0].o = (jobject)SF_arc_util_Tmp_r1;
	sp[0].o = (jobject)((func_arc_math_geom_Rect_set_float_float_float_float_R_arc_math_geom_Rect) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Rect_set_float_float_float_float_R_arc_math_geom_Rect])(ctx, sp[0].o, ((frame[5].f) - (frame[7].f)), ((frame[6].f) - (frame[7].f)), (frame[8].f), ((frame[7].f) * (jfloat(2))));
	goto label_14;
	}
label_11:;
	{
	LINE_NUMBER(125);
	clinit_arc_util_Tmp(ctx);
	sp[0].o = (jobject)SF_arc_util_Tmp_r1;
	sp[0].o = (jobject)((func_arc_math_geom_Rect_set_float_float_float_float_R_arc_math_geom_Rect) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Rect_set_float_float_float_float_R_arc_math_geom_Rect])(ctx, sp[0].o, ((frame[5].f) - (frame[7].f)), ((frame[6].f) - (frame[7].f)), ((frame[7].f) * (jfloat(2))), (frame[8].f));
	goto label_14;
	}
label_12:;
	{
	LINE_NUMBER(126);
	clinit_arc_util_Tmp(ctx);
	sp[0].o = (jobject)SF_arc_util_Tmp_r1;
	sp[0].o = (jobject)((func_arc_math_geom_Rect_set_float_float_float_float_R_arc_math_geom_Rect) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Rect_set_float_float_float_float_R_arc_math_geom_Rect])(ctx, sp[0].o, ((frame[5].f) + (frame[7].f)), ((frame[6].f) - (frame[7].f)), (-(frame[8].f)), ((frame[7].f) * (jfloat(2))));
	sp[0].o = (jobject)((func_arc_math_geom_Rect_normalize_R_arc_math_geom_Rect) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Rect_normalize_R_arc_math_geom_Rect])(ctx, sp[0].o);
	goto label_14;
	}
label_13:;
	{
	LINE_NUMBER(127);
	clinit_arc_util_Tmp(ctx);
	sp[0].o = (jobject)SF_arc_util_Tmp_r1;
	sp[0].o = (jobject)((func_arc_math_geom_Rect_set_float_float_float_float_R_arc_math_geom_Rect) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Rect_set_float_float_float_float_R_arc_math_geom_Rect])(ctx, sp[0].o, ((frame[5].f) - (frame[7].f)), ((frame[6].f) + (frame[7].f)), ((frame[7].f) * (jfloat(2))), (-(frame[8].f)));
	sp[0].o = (jobject)((func_arc_math_geom_Rect_normalize_R_arc_math_geom_Rect) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Rect_normalize_R_arc_math_geom_Rect])(ctx, sp[0].o);
	}
label_14:;
	{
	LINE_NUMBER(130);
	clinit_mindustry_world_blocks_power_BeamNode(ctx);
	sp[0].o = (jobject)SF_mindustry_world_Block_tempBuilds;
	sp[0].o = (jobject)((func_arc_struct_Seq_clear_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_clear_R_arc_struct_Seq])(ctx, sp[0].o);
	LINE_NUMBER(131);
	sp[0].o = frame[4].o;
	clinit_arc_util_Tmp(ctx);
	sp[1].o = (jobject)SF_arc_util_Tmp_r1;
	clinit_mindustry_world_blocks_power_BeamNode(ctx);
	sp[2].o = (jobject)SF_mindustry_world_Block_tempBuilds;
	((func_arc_math_geom_QuadTree_intersect_arc_math_geom_Rect_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_QuadTree_intersect_arc_math_geom_Rect_arc_struct_Seq])(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(132);
	frame[10].i = (frame[9].i);
	LINE_NUMBER(133);
	clinit_mindustry_world_blocks_power_BeamNode(ctx);
	sp[0].o = (jobject)SF_mindustry_world_Block_tempBuilds;
	{ /* InvokeDynamic */
		clinit_mindustry_world_blocks_power_BeamNode_invoke_arc_func_Boolf_1(ctx);
		auto proxy = (mindustry_world_blocks_power_BeamNode_invoke_arc_func_Boolf_1 *) gcAlloc(ctx, &class_mindustry_world_blocks_power_BeamNode_invoke_arc_func_Boolf_1);
		proxy->F_field2 = (jref) (frame[0].o);
		proxy->F_field1 = (jref) (frame[1].o);
		proxy->F_field0 = (frame[10].i);
		sp[1].o = (jobject) proxy;
	}
	{ /* InvokeDynamic */
		clinit_mindustry_world_blocks_power_BeamNode_invoke_arc_func_Floatf_1(ctx);
		auto proxy = (mindustry_world_blocks_power_BeamNode_invoke_arc_func_Floatf_1 *) gcAlloc(ctx, &class_mindustry_world_blocks_power_BeamNode_invoke_arc_func_Floatf_1);
		proxy->F_field1 = (frame[6].f);
		proxy->F_field0 = (frame[5].f);
		sp[2].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_struct_Seq_min_arc_func_Boolf_arc_func_Floatf_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_min_arc_func_Boolf_arc_func_Floatf_R_java_lang_Object])(ctx, sp[0].o, sp[1].o, sp[2].o);
	frame[11].o = (checkCast(ctx, &class_mindustry_gen_Building, sp[0].o));
	LINE_NUMBER(134);
	clinit_mindustry_world_blocks_power_BeamNode(ctx);
	sp[0].o = (jobject)SF_mindustry_world_Block_tempBuilds;
	sp[0].o = (jobject)((func_arc_struct_Seq_clear_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_clear_R_arc_struct_Seq])(ctx, sp[0].o);
	LINE_NUMBER(135);
	if ((frame[11].o) == nullptr) goto label_20;
	}
	{
	LINE_NUMBER(136);
	((func_arc_func_Cons_get_java_lang_Object) resolveInterfaceMethod(ctx, &class_arc_func_Cons, INDEX_arc_func_Cons_get_java_lang_Object, (frame[3].o)))(ctx, (frame[3].o), (frame[11].o));
	}
label_20:;
	{
	LINE_NUMBER(122);
	INST_IINC(9, 1);
	goto label_7;
	}
label_8:;
	LINE_NUMBER(139);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_world_blocks_power_BeamNode_drawLaser_float_float_float_float_int_int(jcontext ctx, jobject self, jfloat param0, jfloat param1, jfloat param2, jfloat param3, jint param4, jint param5) {
	NULL_CHECK(self);
	jtype frame[20];
	auto stack = &frame[12];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/power/BeamNode:drawLaser", 20 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	frame[2].f = param1;
	frame[3].f = param2;
	frame[4].f = param3;
	frame[5].i = param4;
	frame[6].i = param5;
	{
	LINE_NUMBER(143);
	frame[7].f = ((jfloat)((mindustry_world_blocks_power_BeamNode *) NULL_CHECK((frame[0].o)))->F_laserWidth);
	LINE_NUMBER(144);
	jfloat temp0 = (jfloat)SM_java_lang_Math_abs_float_R_float(ctx, ((frame[1].f) - (frame[3].f)));
	jfloat temp1 = (jfloat)SM_java_lang_Math_abs_float_R_float(ctx, ((frame[4].f) - (frame[2].f)));
	jfloat temp2 = (jfloat)SM_java_lang_Math_max_float_float_R_float(ctx, temp0, temp1);
	frame[8].f = (temp2 / (jfloat(8.0f)));
	LINE_NUMBER(145);
	frame[9].f = (((frame[8].f) * (jfloat(8.0f))) - ((jfloat((((frame[5].i) + (frame[6].i)) * (8)))) / (jfloat(2))));
	LINE_NUMBER(148);
	if ((floatCompare((frame[8].f), (jfloat(((jint(1)) + (((jint)((mindustry_world_Block *) NULL_CHECK((frame[0].o)))->F_size) / (jint(2)))))), -1)) <= 0) goto label_4;
	}
	{
	LINE_NUMBER(149);
	jint temp0 = (jint)SM_mindustry_world_Tile_relativeTo_float_float_float_float_R_int(ctx, (frame[1].f), (frame[2].f), (frame[3].f), (frame[4].f));
	sp[0].o = (jobject)SM_arc_math_geom_Geometry_d4_int_R_arc_math_geom_Point2(ctx, temp0);
	frame[10].o = sp[0].o;
	LINE_NUMBER(150);
	frame[11].f = (jfloat(4.0f));
	LINE_NUMBER(151);
	sp[0].o = (jobject)((mindustry_world_blocks_power_BeamNode *) NULL_CHECK((frame[0].o)))->F_laser;
	sp[1].o = (jobject)((mindustry_world_blocks_power_BeamNode *) NULL_CHECK((frame[0].o)))->F_laserEnd;
	SM_mindustry_graphics_Drawf_laser_arc_graphics_g2d_TextureRegion_arc_graphics_g2d_TextureRegion_float_float_float_float_float(ctx, sp[0].o, sp[1].o, ((frame[1].f) + (((frame[11].f) * (jfloat(((jint)((mindustry_world_Block *) NULL_CHECK((frame[0].o)))->F_size)))) * (jfloat(((jint)((arc_math_geom_Point2 *) NULL_CHECK((frame[10].o)))->F_x))))), ((frame[2].f) + (((frame[11].f) * (jfloat(((jint)((mindustry_world_Block *) NULL_CHECK((frame[0].o)))->F_size)))) * (jfloat(((jint)((arc_math_geom_Point2 *) NULL_CHECK((frame[10].o)))->F_y))))), ((frame[1].f) + ((((frame[11].f) * (jfloat(((jint)((mindustry_world_Block *) NULL_CHECK((frame[0].o)))->F_size)))) + (frame[9].f)) * (jfloat(((jint)((arc_math_geom_Point2 *) NULL_CHECK((frame[10].o)))->F_x))))), ((frame[2].f) + ((((frame[11].f) * (jfloat(((jint)((mindustry_world_Block *) NULL_CHECK((frame[0].o)))->F_size)))) + (frame[9].f)) * (jfloat(((jint)((arc_math_geom_Point2 *) NULL_CHECK((frame[10].o)))->F_y))))), (frame[7].f));
	}
label_4:;
	LINE_NUMBER(153);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jfloat SM_mindustry_world_blocks_power_BeamNode_lambda$getNodeLinks$1_float_float_mindustry_gen_Building_R_float(jcontext ctx, jfloat param0, jfloat param1, jobject param2) {
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/power/BeamNode:lambda$getNodeLinks$1", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_world_blocks_power_BeamNode(ctx);
	frame[0].f = param0;
	frame[1].f = param1;
	frame[2].o = param2;
	{
	LINE_NUMBER(133);
	jfloat temp0 = (jfloat)((func_mindustry_gen_Building_dst2_float_float_R_float) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_mindustry_gen_Building_dst2_float_float_R_float])(ctx, (frame[2].o), (frame[0].f), (frame[1].f));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jbool SM_mindustry_world_blocks_power_BeamNode_lambda$getNodeLinks$0_int_mindustry_world_Block_mindustry_world_Tile_mindustry_gen_Building_R_boolean(jcontext ctx, jint param0, jobject param1, jobject param2, jobject param3) {
	jtype frame[10];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/power/BeamNode:lambda$getNodeLinks$0", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_world_blocks_power_BeamNode(ctx);
	frame[0].i = param0;
	frame[1].o = param1;
	frame[2].o = param2;
	frame[3].o = param3;
	{
	LINE_NUMBER(133);
	if ((isInstance(ctx, (frame[3].o), &class_mindustry_world_blocks_power_BeamNode$BeamNodeBuild)) == 0) goto label_1;
	}
	{
	frame[4].o = (checkCast(ctx, &class_mindustry_world_blocks_power_BeamNode$BeamNodeBuild, (frame[3].o)));
	jint temp0 = (jint)((func_mindustry_world_blocks_power_BeamNode$BeamNodeBuild_couldConnect_int_mindustry_world_Block_int_int_R_boolean) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_mindustry_world_blocks_power_BeamNode$BeamNodeBuild_couldConnect_int_mindustry_world_Block_int_int_R_boolean])(ctx, (frame[4].o), (((frame[0].i) + (jint(2))) % (jint(4))), (frame[1].o), ((jint)((mindustry_world_Tile *) NULL_CHECK((frame[2].o)))->F_x), ((jint)((mindustry_world_Tile *) NULL_CHECK((frame[2].o)))->F_y));
	if (temp0 == 0) goto label_1;
	}
	INST_ICONST(1);
	goto label_3;
label_1:;
	INST_ICONST(0);
label_3:;
	popStackFrame(ctx);
	INST_IRETURN();

	popStackFrame(ctx);
}

jbool M_mindustry_world_blocks_power_BeamNode_lambda$changePlacementPath$0_arc_math_geom_Point2_arc_math_geom_Point2_R_boolean(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/power/BeamNode:lambda$changePlacementPath$0", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(110);
	jint temp0 = (jint)SM_java_lang_Math_abs_int_R_int(ctx, (((jint)((arc_math_geom_Point2 *) NULL_CHECK((frame[1].o)))->F_x) - ((jint)((arc_math_geom_Point2 *) NULL_CHECK((frame[2].o)))->F_x)));
	jint temp1 = (jint)SM_java_lang_Math_abs_int_R_int(ctx, (((jint)((arc_math_geom_Point2 *) NULL_CHECK((frame[1].o)))->F_y) - ((jint)((arc_math_geom_Point2 *) NULL_CHECK((frame[2].o)))->F_y)));
	jint temp2 = (jint)SM_java_lang_Math_max_int_int_R_int(ctx, temp0, temp1);
	if (temp2 > ((((jint)((mindustry_world_blocks_power_BeamNode *) NULL_CHECK((frame[0].o)))->F_range) + ((jint)((mindustry_world_Block *) NULL_CHECK((frame[0].o)))->F_size)) - (jint(1)))) goto label_1;
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

void *vtable_mindustry_world_blocks_power_BeamNode[] {
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
	(void *) M_mindustry_world_blocks_power_BeamNode_init,
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
	(void *) M_mindustry_world_blocks_power_BeamNode_setStats,
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
	(void *) M_mindustry_world_blocks_power_BeamNode_drawPlace_int_int_int_boolean,
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
	(void *) M_mindustry_world_blocks_power_BeamNode_setBars,
	(void *) M_mindustry_world_Block_consumesItem_mindustry_type_Item_R_boolean,
	(void *) M_mindustry_world_Block_consumesLiquid_mindustry_type_Liquid_R_boolean,
	(void *) M_mindustry_world_Block_canReplace_mindustry_world_Block_R_boolean,
	(void *) M_mindustry_world_Block_getReplacement_mindustry_entities_units_BuildPlan_arc_struct_Seq_R_mindustry_world_Block,
	(void *) M_mindustry_world_blocks_power_BeamNode_changePlacementPath_arc_struct_Seq_int_boolean,
	(void *) M_mindustry_world_Block_changePlacementPath_arc_struct_Seq_int,
	(void *) M_mindustry_world_Block_handlePlacementLine_arc_struct_Seq,
	(void *) M_mindustry_world_Block_configSenseable_R_boolean,
	(void *) M_mindustry_world_Block_nextConfig_R_java_lang_Object,
	(void *) M_mindustry_world_Block_onNewPlan_mindustry_entities_units_BuildPlan,
	(void *) M_mindustry_world_Block_drawPlan_mindustry_entities_units_BuildPlan_arc_util_Eachable_boolean,
	(void *) M_mindustry_world_Block_drawPlan_mindustry_entities_units_BuildPlan_arc_util_Eachable_boolean_float,
	(void *) M_mindustry_world_Block_drawOtherPlayerPlan_mindustry_entities_units_BuildPlan_arc_util_Eachable_float,
	(void *) M_mindustry_world_Block_drawPlanRegion_mindustry_entities_units_BuildPlan_arc_util_Eachable,
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
	(void *) M_mindustry_world_Block_icons_R_Array1_arc_graphics_g2d_TextureRegion,
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
	(void *) M_mindustry_world_blocks_power_BeamNode_drawLaser_float_float_float_float_int_int,
	(void *) M_mindustry_world_blocks_power_BeamNode_lambda$changePlacementPath$0_arc_math_geom_Point2_arc_math_geom_Point2_R_boolean,
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
	{ "drawLaser", "(FFFFII)V" },
	{ "lambda$changePlacementPath$0", "(Larc/math/geom/Point2;Larc/math/geom/Point2;)Z" },
};

static jclass innerClasses[] {
	&class_mindustry_world_blocks_power_BeamNode$BeamNodeBuild,
};

static FieldMetadata fields[] {
	{ "maxRange", &class_int, (intptr_t) &SF_mindustry_world_blocks_power_BeamNode_maxRange, "I", 26 },
	{ "range", &class_int, offsetof(mindustry_world_blocks_power_BeamNode, F_range), "I", 1 },
	{ "laser", &class_arc_graphics_g2d_TextureRegion, offsetof(mindustry_world_blocks_power_BeamNode, F_laser), "Larc/graphics/g2d/TextureRegion;", 1 },
	{ "laserEnd", &class_arc_graphics_g2d_TextureRegion, offsetof(mindustry_world_blocks_power_BeamNode, F_laserEnd), "Larc/graphics/g2d/TextureRegion;", 1 },
	{ "laserColor1", &class_arc_graphics_Color, offsetof(mindustry_world_blocks_power_BeamNode, F_laserColor1), "Larc/graphics/Color;", 1 },
	{ "laserColor2", &class_arc_graphics_Color, offsetof(mindustry_world_blocks_power_BeamNode, F_laserColor2), "Larc/graphics/Color;", 1 },
	{ "pulseScl", &class_float, offsetof(mindustry_world_blocks_power_BeamNode, F_pulseScl), "F", 1 },
	{ "pulseMag", &class_float, offsetof(mindustry_world_blocks_power_BeamNode, F_pulseMag), "F", 1 },
	{ "laserWidth", &class_float, offsetof(mindustry_world_blocks_power_BeamNode, F_laserWidth), "F", 1 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_mindustry_world_blocks_power_BeamNode_java_lang_String, 0, "(Ljava/lang/String;)V", 1 },
	{ "setBars", (intptr_t) M_mindustry_world_blocks_power_BeamNode_setBars, VTABLE_mindustry_world_blocks_power_BeamNode_setBars, "()V", 1 },
	{ "setStats", (intptr_t) M_mindustry_world_blocks_power_BeamNode_setStats, VTABLE_mindustry_world_blocks_power_BeamNode_setStats, "()V", 1 },
	{ "init", (intptr_t) M_mindustry_world_blocks_power_BeamNode_init, VTABLE_mindustry_world_blocks_power_BeamNode_init, "()V", 1 },
	{ "drawPlace", (intptr_t) M_mindustry_world_blocks_power_BeamNode_drawPlace_int_int_int_boolean, VTABLE_mindustry_world_blocks_power_BeamNode_drawPlace_int_int_int_boolean, "(IIIZ)V", 1 },
	{ "changePlacementPath", (intptr_t) M_mindustry_world_blocks_power_BeamNode_changePlacementPath_arc_struct_Seq_int_boolean, VTABLE_mindustry_world_blocks_power_BeamNode_changePlacementPath_arc_struct_Seq_int_boolean, "(Larc/struct/Seq;IZ)V", 1 },
	{ "getNodeLinks", (intptr_t) SM_mindustry_world_blocks_power_BeamNode_getNodeLinks_mindustry_world_Tile_mindustry_world_Block_mindustry_game_Team_arc_func_Cons, 0, "(Lmindustry/world/Tile;Lmindustry/world/Block;Lmindustry/game/Team;Larc/func/Cons;)V", 9 },
	{ "drawLaser", (intptr_t) M_mindustry_world_blocks_power_BeamNode_drawLaser_float_float_float_float_int_int, VTABLE_mindustry_world_blocks_power_BeamNode_drawLaser_float_float_float_float_int_int, "(FFFFII)V", 1 },
	{ "lambda$getNodeLinks$1", (intptr_t) SM_mindustry_world_blocks_power_BeamNode_lambda$getNodeLinks$1_float_float_mindustry_gen_Building_R_float, 0, "(FFLmindustry/gen/Building;)F", 4106 },
	{ "lambda$getNodeLinks$0", (intptr_t) SM_mindustry_world_blocks_power_BeamNode_lambda$getNodeLinks$0_int_mindustry_world_Block_mindustry_world_Tile_mindustry_gen_Building_R_boolean, 0, "(ILmindustry/world/Block;Lmindustry/world/Tile;Lmindustry/gen/Building;)Z", 4106 },
	{ "lambda$changePlacementPath$0", (intptr_t) M_mindustry_world_blocks_power_BeamNode_lambda$changePlacementPath$0_arc_math_geom_Point2_arc_math_geom_Point2_R_boolean, VTABLE_mindustry_world_blocks_power_BeamNode_lambda$changePlacementPath$0_arc_math_geom_Point2_arc_math_geom_Point2_R_boolean, "(Larc/math/geom/Point2;Larc/math/geom/Point2;)Z", 4098 },
};

Class class_mindustry_world_blocks_power_BeamNode{
		.nativeName = (intptr_t) "mindustry/world/blocks/power/BeamNode",
		.parentClass = (intptr_t) &class_mindustry_world_blocks_power_PowerBlock,
		.size = sizeof(mindustry_world_blocks_power_BeamNode),
		.classVtable = (intptr_t) vtable_mindustry_world_blocks_power_BeamNode,
		.staticInitializer = (intptr_t) clinit_mindustry_world_blocks_power_BeamNode,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_mindustry_world_blocks_power_BeamNode,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 1,
		.nativeInnerClasses = (intptr_t) innerClasses,
		.access = 33,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 9,
		.nativeFields = (intptr_t) fields,
		.methodCount = 11,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 191,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_mindustry_world_blocks_power_BeamNode = registerClass(&class_mindustry_world_blocks_power_BeamNode);

}
