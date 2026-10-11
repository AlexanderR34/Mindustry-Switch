#include "mindustry/world/blocks/defense/TargetDummy_TargetDummyBuild.h"
#include "java/lang/Integer.h"
#include "arc/graphics/Color.h"
#include "arc/scene/ui/TextField_TextFieldValidator.h"
#include "arc/graphics/g2d/Draw.h"
#include "mindustry/world/blocks/defense/TargetDummy_TargetDummyBuild_invoke_arc_func_Boolc_3.h"
#include "mindustry/entities/Effect.h"
#include "mindustry/content/Fx.h"
#include "mindustry/world/blocks/defense/TargetDummy_TargetDummyBuild_invoke_arc_func_Boolc_2.h"
#include "mindustry/gen/Entityc.h"
#include "arc/util/Tmp.h"
#include "arc/util/I18NBundle.h"
#include "arc/scene/ui/layout/Cell.h"
#include "mindustry/world/Tile.h"
#include "arc/func/Boolc.h"
#include "arc/math/geom/Position.h"
#include "mindustry/world/blocks/UnitTetherBlock.h"
#include "arc/math/Mathf.h"
#include "arc/Core.h"
#include "mindustry/gen/Unit.h"
#include "arc/util/Time.h"
#include "mindustry/gen/Building.h"
#include "mindustry/gen/Posc.h"
#include "java/lang/Object.h"
#include "mindustry/gen/Bullet.h"
#include "mindustry/world/blocks/defense/TargetDummy_TargetDummyBuild.h"
#include "arc/util/io/Writes.h"
#include "mindustry/net/Net.h"
#include "arc/math/geom/Vec2.h"
#include "mindustry/world/meta/StatUnit.h"
#include "mindustry/gen/Groups.h"
#include "mindustry/game/Rules.h"
#include "arc/scene/ui/TextField_TextFieldFilter.h"
#include "java/lang/Float.h"
#include "mindustry/gen/Velc.h"
#include "mindustry/ui/Displayable.h"
#include "mindustry/gen/Unitc.h"
#include "arc/func/Cons.h"
#include "java/lang/String.h"
#include "arc/scene/style/Drawable.h"
#include "mindustry/world/blocks/defense/TargetDummy_TargetDummyBuild_invoke_arc_func_Cons_7.h"
#include "mindustry/world/blocks/defense/TargetDummy_TargetDummyBuild_invoke_arc_func_Cons_5.h"
#include "mindustry/world/blocks/defense/TargetDummy_TargetDummyBuild_invoke_arc_func_Cons_6.h"
#include "mindustry/world/blocks/defense/TargetDummy_TargetDummyBuild_invoke_arc_func_Cons_4.h"
#include "mindustry/world/blocks/defense/TargetDummy_TargetDummyBuild_invoke_arc_scene_ui_TextField_TextFieldValidator_4.h"
#include "mindustry/world/blocks/defense/TargetDummy_TargetDummyBuild_invoke_arc_scene_ui_TextField_TextFieldValidator_3.h"
#include "arc/graphics/g2d/TextureRegion.h"
#include "mindustry/world/blocks/defense/TargetDummy_TargetDummyBuild_invoke_arc_scene_ui_TextField_TextFieldValidator_5.h"
#include "arc/scene/ui/layout/Table.h"
#include "mindustry/ui/Styles.h"
#include "mindustry/type/UnitType.h"
#include "mindustry/gen/TargetDummyUnit.h"
#include "java/lang/CharSequence.h"
#include "arc/util/io/Reads.h"
#include "mindustry/world/blocks/defense/TargetDummy.h"
#include "mindustry/entities/EntityGroup.h"
#include "arc/util/Strings.h"
#include "mindustry/graphics/Drawf.h"
#include "mindustry/game/Team.h"
#include "mindustry/Vars.h"
#include "mindustry/gen/Call.h"
#include "mindustry/core/GameState.h"

extern "C" {


void mark_mindustry_world_blocks_defense_TargetDummy$TargetDummyBuild(jobject object, jint mark, jint depth) {
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
	auto self = (mindustry_world_blocks_defense_TargetDummy$TargetDummyBuild *) object;
	if (self->F_unit)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_unit)->clazz)->markFunction)((jobject) self->F_unit, mark, depth + 1);
	if (self->F_unitTeam)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_unitTeam)->clazz)->markFunction)((jobject) self->F_unitTeam, mark, depth + 1);
	if (self->F_this$0)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_this$0)->clazz)->markFunction)((jobject) self->F_this$0, mark, depth + 1);
}

void clinit_mindustry_world_blocks_defense_TargetDummy$TargetDummyBuild(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	clinit_mindustry_gen_Building(ctx);
}

void init_mindustry_world_blocks_defense_TargetDummy$TargetDummyBuild_mindustry_world_blocks_defense_TargetDummy(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/defense/TargetDummy$TargetDummyBuild:<init>", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_world_blocks_defense_TargetDummy$TargetDummyBuild(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(82);
	((mindustry_world_blocks_defense_TargetDummy$TargetDummyBuild *) NULL_CHECK((frame[0].o)))->F_this$0 = (jref) (frame[1].o);
	init_mindustry_gen_Building(ctx, (frame[0].o));
	LINE_NUMBER(84);
	((mindustry_world_blocks_defense_TargetDummy$TargetDummyBuild *) NULL_CHECK((frame[0].o)))->F_readUnitId = (jint(-1));
	LINE_NUMBER(86);
	((mindustry_world_blocks_defense_TargetDummy$TargetDummyBuild *) NULL_CHECK((frame[0].o)))->F_resetTime = (jfloat(120.0f));
	LINE_NUMBER(87);
	((mindustry_world_blocks_defense_TargetDummy$TargetDummyBuild *) NULL_CHECK((frame[0].o)))->F_reset = ((jfloat)((mindustry_world_blocks_defense_TargetDummy$TargetDummyBuild *) NULL_CHECK((frame[0].o)))->F_resetTime);
	((mindustry_world_blocks_defense_TargetDummy$TargetDummyBuild *) NULL_CHECK((frame[0].o)))->F_dummySize = (jfloat(12.0f));
	LINE_NUMBER(93);
	sp[0].o = frame[0].o;
	clinit_mindustry_game_Team(ctx);
	sp[1].o = (jobject)SF_mindustry_game_Team_derelict;
	((mindustry_world_blocks_defense_TargetDummy$TargetDummyBuild *) NULL_CHECK(sp[0].o))->F_unitTeam = (jref) sp[1].o;
	LINE_NUMBER(82);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jbool M_mindustry_world_blocks_defense_TargetDummy$TargetDummyBuild_canPickup_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/defense/TargetDummy$TargetDummyBuild:canPickup", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(97);
	popStackFrame(ctx);
	return (jint(0));
	}

	popStackFrame(ctx);
}

void M_mindustry_world_blocks_defense_TargetDummy$TargetDummyBuild_created(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/defense/TargetDummy$TargetDummyBuild:created", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(102);
	sp[0].o = (jobject)((mindustry_world_blocks_defense_TargetDummy$TargetDummyBuild *) NULL_CHECK((frame[0].o)))->F_unitTeam;
	clinit_mindustry_game_Team(ctx);
	sp[1].o = (jobject)SF_mindustry_game_Team_derelict;
	if (sp[0].o != sp[1].o) goto label_1;
	}
	{
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_team;
	((mindustry_world_blocks_defense_TargetDummy$TargetDummyBuild *) NULL_CHECK(sp[0].o))->F_unitTeam = (jref) sp[1].o;
	}
label_1:;
	LINE_NUMBER(103);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_world_blocks_defense_TargetDummy$TargetDummyBuild_updateTile(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/defense/TargetDummy$TargetDummyBuild:updateTile", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(108);
	sp[0].o = (jobject)((mindustry_world_blocks_defense_TargetDummy$TargetDummyBuild *) NULL_CHECK((frame[0].o)))->F_unit;
	if (sp[0].o == nullptr) goto label_1;
	}
	{
	sp[0].o = (jobject)((mindustry_world_blocks_defense_TargetDummy$TargetDummyBuild *) NULL_CHECK((frame[0].o)))->F_unit;
	if (((jint)((mindustry_gen_Unit *) NULL_CHECK(sp[0].o))->F_dead) != 0) goto label_2;
	}
	{
	sp[0].o = (jobject)((mindustry_world_blocks_defense_TargetDummy$TargetDummyBuild *) NULL_CHECK((frame[0].o)))->F_unit;
	jint temp0 = (jint)((func_mindustry_gen_Unit_isAdded_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_gen_Unit_isAdded_R_boolean])(ctx, sp[0].o);
	if (temp0 != 0) goto label_1;
	}
label_2:;
	{
	LINE_NUMBER(109);
	((mindustry_world_blocks_defense_TargetDummy$TargetDummyBuild *) NULL_CHECK((frame[0].o)))->F_unit = (jref) (jobject(nullptr));
	}
label_1:;
	{
	LINE_NUMBER(112);
	if (((jint)((mindustry_world_blocks_defense_TargetDummy$TargetDummyBuild *) NULL_CHECK((frame[0].o)))->F_readUnitId) == (jint(-1))) goto label_3;
	}
	{
	LINE_NUMBER(113);
	sp[0].o = frame[0].o;
	clinit_mindustry_gen_Groups(ctx);
	sp[1].o = (jobject)SF_mindustry_gen_Groups_unit;
	sp[1].o = (jobject)((func_mindustry_entities_EntityGroup_getByID_int_R_mindustry_gen_Entityc) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_mindustry_entities_EntityGroup_getByID_int_R_mindustry_gen_Entityc])(ctx, sp[1].o, ((jint)((mindustry_world_blocks_defense_TargetDummy$TargetDummyBuild *) NULL_CHECK((frame[0].o)))->F_readUnitId));
	((mindustry_world_blocks_defense_TargetDummy$TargetDummyBuild *) NULL_CHECK(sp[0].o))->F_unit = (jref) (checkCast(ctx, &class_mindustry_gen_Unit, sp[1].o));
	LINE_NUMBER(114);
	sp[0].o = (jobject)((mindustry_world_blocks_defense_TargetDummy$TargetDummyBuild *) NULL_CHECK((frame[0].o)))->F_unit;
	if (sp[0].o != nullptr) goto label_6;
	}
	{
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_net;
	jint temp0 = (jint)((func_mindustry_net_Net_client_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_net_Net_client_R_boolean])(ctx, sp[0].o);
	if (temp0 != 0) goto label_3;
	}
label_6:;
	{
	LINE_NUMBER(115);
	((mindustry_world_blocks_defense_TargetDummy$TargetDummyBuild *) NULL_CHECK((frame[0].o)))->F_readUnitId = (jint(-1));
	}
label_3:;
	{
	LINE_NUMBER(119);
	sp[0].o = (jobject)((mindustry_world_blocks_defense_TargetDummy$TargetDummyBuild *) NULL_CHECK((frame[0].o)))->F_unitTeam;
	clinit_mindustry_game_Team(ctx);
	sp[1].o = (jobject)SF_mindustry_game_Team_derelict;
	if (sp[0].o != sp[1].o) goto label_7;
	}
	{
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_team;
	((mindustry_world_blocks_defense_TargetDummy$TargetDummyBuild *) NULL_CHECK(sp[0].o))->F_unitTeam = (jref) sp[1].o;
	}
label_7:;
	{
	LINE_NUMBER(121);
	sp[0].o = (jobject)((mindustry_world_blocks_defense_TargetDummy$TargetDummyBuild *) NULL_CHECK((frame[0].o)))->F_unit;
	if (sp[0].o != nullptr) goto label_8;
	}
	{
	LINE_NUMBER(122);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_net;
	jint temp0 = (jint)((func_mindustry_net_Net_client_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_net_Net_client_R_boolean])(ctx, sp[0].o);
	if (temp0 != 0) goto label_8;
	}
	{
	LINE_NUMBER(123);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((mindustry_world_blocks_defense_TargetDummy$TargetDummyBuild *) NULL_CHECK((frame[0].o)))->F_this$0;
	sp[1].o = (jobject)((mindustry_world_blocks_defense_TargetDummy *) NULL_CHECK(sp[1].o))->F_unitType;
	sp[2].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_team;
	sp[1].o = (jobject)((func_mindustry_type_UnitType_create_mindustry_game_Team_R_mindustry_gen_Unit) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_mindustry_type_UnitType_create_mindustry_game_Team_R_mindustry_gen_Unit])(ctx, sp[1].o, sp[2].o);
	((mindustry_world_blocks_defense_TargetDummy$TargetDummyBuild *) NULL_CHECK(sp[0].o))->F_unit = (jref) sp[1].o;
	LINE_NUMBER(124);
	sp[0].o = (jobject)((mindustry_world_blocks_defense_TargetDummy$TargetDummyBuild *) NULL_CHECK((frame[0].o)))->F_unit;
	frame[2].o = sp[0].o;
	if ((isInstance(ctx, (frame[2].o), &class_mindustry_gen_TargetDummyUnit)) == 0) goto label_12;
	}
	{
	frame[1].o = (checkCast(ctx, &class_mindustry_gen_TargetDummyUnit, (frame[2].o)));
	LINE_NUMBER(125);
	((func_mindustry_gen_TargetDummyUnit_building_mindustry_gen_Building) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_gen_TargetDummyUnit_building_mindustry_gen_Building])(ctx, (frame[1].o), (frame[0].o));
	}
label_12:;
	{
	LINE_NUMBER(127);
	sp[0].o = (jobject)((mindustry_world_blocks_defense_TargetDummy$TargetDummyBuild *) NULL_CHECK((frame[0].o)))->F_unit;
	((func_mindustry_gen_Unit_set_float_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_gen_Unit_set_float_float])(ctx, sp[0].o, ((jfloat)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_x), ((jfloat)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_y));
	LINE_NUMBER(128);
	sp[0].o = (jobject)((mindustry_world_blocks_defense_TargetDummy$TargetDummyBuild *) NULL_CHECK((frame[0].o)))->F_unit;
	((mindustry_gen_Unit *) NULL_CHECK(sp[0].o))->F_rotation = (jfloat(90.0f));
	LINE_NUMBER(129);
	sp[0].o = (jobject)((mindustry_world_blocks_defense_TargetDummy$TargetDummyBuild *) NULL_CHECK((frame[0].o)))->F_unit;
	((func_mindustry_gen_Unit_add) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_gen_Unit_add])(ctx, sp[0].o);
	LINE_NUMBER(130);
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_tile;
	sp[1].o = (jobject)((mindustry_world_blocks_defense_TargetDummy$TargetDummyBuild *) NULL_CHECK((frame[0].o)))->F_unit;
	SM_mindustry_gen_Call_unitTetherBlockSpawned_mindustry_world_Tile_int(ctx, sp[0].o, ((jint)((mindustry_gen_Unit *) NULL_CHECK(sp[1].o))->F_id));
	}
label_8:;
	{
	LINE_NUMBER(134);
	sp[0].o = (jobject)((mindustry_world_blocks_defense_TargetDummy$TargetDummyBuild *) NULL_CHECK((frame[0].o)))->F_unit;
	if (sp[0].o == nullptr) goto label_17;
	}
	{
	LINE_NUMBER(135);
	sp[0].o = (jobject)((mindustry_world_blocks_defense_TargetDummy$TargetDummyBuild *) NULL_CHECK((frame[0].o)))->F_unit;
	((func_mindustry_gen_Unit_updateBoosting_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_gen_Unit_updateBoosting_boolean])(ctx, sp[0].o, ((jint)((mindustry_world_blocks_defense_TargetDummy$TargetDummyBuild *) NULL_CHECK((frame[0].o)))->F_boosting));
	LINE_NUMBER(136);
	sp[0].o = (jobject)((mindustry_world_blocks_defense_TargetDummy$TargetDummyBuild *) NULL_CHECK((frame[0].o)))->F_unit;
	((func_mindustry_gen_Unit_armor_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_gen_Unit_armor_float])(ctx, sp[0].o, ((jfloat)((mindustry_world_blocks_defense_TargetDummy$TargetDummyBuild *) NULL_CHECK((frame[0].o)))->F_unitArmor));
	LINE_NUMBER(137);
	sp[0].o = (jobject)((mindustry_world_blocks_defense_TargetDummy$TargetDummyBuild *) NULL_CHECK((frame[0].o)))->F_unit;
	sp[1].o = (jobject)((mindustry_world_blocks_defense_TargetDummy$TargetDummyBuild *) NULL_CHECK((frame[0].o)))->F_unitTeam;
	((func_mindustry_gen_Unit_team_mindustry_game_Team) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_gen_Unit_team_mindustry_game_Team])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(138);
	sp[0].o = (jobject)((mindustry_world_blocks_defense_TargetDummy$TargetDummyBuild *) NULL_CHECK((frame[0].o)))->F_unit;
	((mindustry_gen_Unit *) NULL_CHECK(sp[0].o))->F_hitSize = ((jfloat)((mindustry_world_blocks_defense_TargetDummy$TargetDummyBuild *) NULL_CHECK((frame[0].o)))->F_dummySize);
	LINE_NUMBER(141);
	clinit_arc_util_Tmp(ctx);
	sp[0].o = (jobject)SF_arc_util_Tmp_v1;
	sp[0].o = (jobject)((func_arc_math_geom_Vec2_set_arc_math_geom_Position_R_arc_math_geom_Vec2) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Vec2_set_arc_math_geom_Position_R_arc_math_geom_Vec2])(ctx, sp[0].o, (frame[0].o));
	sp[1].o = (jobject)((mindustry_world_blocks_defense_TargetDummy$TargetDummyBuild *) NULL_CHECK((frame[0].o)))->F_unit;
	sp[0].o = (jobject)((func_arc_math_geom_Vec2_sub_arc_math_geom_Position_R_arc_math_geom_Vec2) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Vec2_sub_arc_math_geom_Position_R_arc_math_geom_Vec2])(ctx, sp[0].o, sp[1].o);
	sp[1].o = frame[0].o;
	sp[2].o = (jobject)((mindustry_world_blocks_defense_TargetDummy$TargetDummyBuild *) NULL_CHECK((frame[0].o)))->F_unit;
	jfloat temp0 = (jfloat)((func_mindustry_world_blocks_defense_TargetDummy$TargetDummyBuild_dst_arc_math_geom_Position_R_float) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_mindustry_world_blocks_defense_TargetDummy$TargetDummyBuild_dst_arc_math_geom_Position_R_float])(ctx, sp[1].o, sp[2].o);
	sp[1].o = (jobject)((mindustry_world_blocks_defense_TargetDummy$TargetDummyBuild *) NULL_CHECK((frame[0].o)))->F_this$0;
	sp[0].o = (jobject)((func_arc_math_geom_Vec2_limit_float_R_arc_math_geom_Vec2) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Vec2_limit_float_R_arc_math_geom_Vec2])(ctx, sp[0].o, (temp0 * ((jfloat)((mindustry_world_blocks_defense_TargetDummy *) NULL_CHECK(sp[1].o))->F_pullScale)));
	LINE_NUMBER(142);
	sp[0].o = (jobject)((mindustry_world_blocks_defense_TargetDummy$TargetDummyBuild *) NULL_CHECK((frame[0].o)))->F_unit;
	sp[0].o = (jobject)((mindustry_gen_Unit *) NULL_CHECK(sp[0].o))->F_vel;
	clinit_arc_util_Tmp(ctx);
	sp[1].o = (jobject)SF_arc_util_Tmp_v1;
	sp[0].o = (jobject)((func_arc_math_geom_Vec2_add_arc_math_geom_Vec2_R_arc_math_geom_Vec2) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Vec2_add_arc_math_geom_Vec2_R_arc_math_geom_Vec2])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(145);
	sp[0].o = (jobject)((mindustry_world_blocks_defense_TargetDummy$TargetDummyBuild *) NULL_CHECK((frame[0].o)))->F_unit;
	jint temp1 = (jint)((func_mindustry_gen_Unit_isRemote_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_gen_Unit_isRemote_R_boolean])(ctx, sp[0].o);
	if (temp1 == 0) goto label_25;
	}
	{
	sp[0].o = (jobject)((mindustry_world_blocks_defense_TargetDummy$TargetDummyBuild *) NULL_CHECK((frame[0].o)))->F_unit;
	clinit_arc_util_Tmp(ctx);
	sp[1].o = (jobject)SF_arc_util_Tmp_v1;
	((func_mindustry_gen_Unit_move_arc_math_geom_Vec2) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_gen_Unit_move_arc_math_geom_Vec2])(ctx, sp[0].o, sp[1].o);
	}
label_25:;
	{
	LINE_NUMBER(147);
	sp[0].o = (jobject)((mindustry_world_blocks_defense_TargetDummy$TargetDummyBuild *) NULL_CHECK((frame[0].o)))->F_unit;
	jint temp0 = (jint)((func_mindustry_gen_Unit_moving_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_gen_Unit_moving_R_boolean])(ctx, sp[0].o);
	if (temp0 == 0) goto label_17;
	}
	{
	sp[0].o = (jobject)((mindustry_world_blocks_defense_TargetDummy$TargetDummyBuild *) NULL_CHECK((frame[0].o)))->F_unit;
	sp[1].o = (jobject)((mindustry_world_blocks_defense_TargetDummy$TargetDummyBuild *) NULL_CHECK((frame[0].o)))->F_unit;
	sp[1].o = (jobject)((func_mindustry_gen_Unit_vel_R_arc_math_geom_Vec2) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_mindustry_gen_Unit_vel_R_arc_math_geom_Vec2])(ctx, sp[1].o);
	jfloat temp0 = (jfloat)((func_arc_math_geom_Vec2_angle_R_float) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_math_geom_Vec2_angle_R_float])(ctx, sp[1].o);
	((func_mindustry_gen_Unit_lookAt_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_gen_Unit_lookAt_float])(ctx, sp[0].o, temp0);
	}
label_17:;
	{
	LINE_NUMBER(150);
	sp[0].o = frame[0].o;
	((mindustry_world_blocks_defense_TargetDummy$TargetDummyBuild *) NULL_CHECK(sp[0].o))->F_time = (((jfloat)((mindustry_world_blocks_defense_TargetDummy$TargetDummyBuild *) NULL_CHECK(sp[0].o))->F_time) + (clinit_arc_util_Time(ctx), (jfloat)SF_arc_util_Time_delta));
	LINE_NUMBER(151);
	sp[0].o = frame[0].o;
	((mindustry_world_blocks_defense_TargetDummy$TargetDummyBuild *) NULL_CHECK(sp[0].o))->F_reset = (((jfloat)((mindustry_world_blocks_defense_TargetDummy$TargetDummyBuild *) NULL_CHECK(sp[0].o))->F_reset) + (clinit_arc_util_Time(ctx), (jfloat)SF_arc_util_Time_delta));
	LINE_NUMBER(153);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((mindustry_world_blocks_defense_TargetDummy$TargetDummyBuild *) NULL_CHECK((frame[0].o)))->F_this$0;
	jint temp0 = (jint)((func_mindustry_world_blocks_defense_TargetDummy$TargetDummyBuild_timer_int_float_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_blocks_defense_TargetDummy$TargetDummyBuild_timer_int_float_R_boolean])(ctx, sp[0].o, ((jint)((mindustry_world_blocks_defense_TargetDummy *) NULL_CHECK(sp[1].o))->F_dpsUpdateTime), (jfloat(20.0f)));
	if (temp0 == 0) goto label_28;
	}
	{
	LINE_NUMBER(154);
	((mindustry_world_blocks_defense_TargetDummy$TargetDummyBuild *) NULL_CHECK((frame[0].o)))->F_dps = ((((jfloat)((mindustry_world_blocks_defense_TargetDummy$TargetDummyBuild *) NULL_CHECK((frame[0].o)))->F_total) / ((jfloat)((mindustry_world_blocks_defense_TargetDummy$TargetDummyBuild *) NULL_CHECK((frame[0].o)))->F_time)) * (jfloat(60.0f)));
	LINE_NUMBER(155);
	((mindustry_world_blocks_defense_TargetDummy$TargetDummyBuild *) NULL_CHECK((frame[0].o)))->F_totalDisplay = ((jfloat)((mindustry_world_blocks_defense_TargetDummy$TargetDummyBuild *) NULL_CHECK((frame[0].o)))->F_total);
	LINE_NUMBER(156);
	((mindustry_world_blocks_defense_TargetDummy$TargetDummyBuild *) NULL_CHECK((frame[0].o)))->F_timeDisplay = (((jfloat)((mindustry_world_blocks_defense_TargetDummy$TargetDummyBuild *) NULL_CHECK((frame[0].o)))->F_time) / (jfloat(60.0f)));
	LINE_NUMBER(157);
	((mindustry_world_blocks_defense_TargetDummy$TargetDummyBuild *) NULL_CHECK((frame[0].o)))->F_hitsDisplay = ((jint)((mindustry_world_blocks_defense_TargetDummy$TargetDummyBuild *) NULL_CHECK((frame[0].o)))->F_hits);
	}
label_28:;
	{
	LINE_NUMBER(160);
	if ((floatCompare(((jfloat)((mindustry_world_blocks_defense_TargetDummy$TargetDummyBuild *) NULL_CHECK((frame[0].o)))->F_reset), ((jfloat)((mindustry_world_blocks_defense_TargetDummy$TargetDummyBuild *) NULL_CHECK((frame[0].o)))->F_resetTime), -1)) < 0) goto label_33;
	}
	{
	LINE_NUMBER(161);
	sp[0].o = frame[0].o;
	sp[1].o = frame[0].o;
	sp[2].o = frame[0].o;
	sp[3].o = frame[0].o;
	jint temp0 = jint(0);
	((mindustry_world_blocks_defense_TargetDummy$TargetDummyBuild *) NULL_CHECK(sp[3].o))->F_hits = temp0;
	jfloat temp3 = jfloat(temp0);
	((mindustry_world_blocks_defense_TargetDummy$TargetDummyBuild *) NULL_CHECK(sp[2].o))->F_dps = temp3;
	((mindustry_world_blocks_defense_TargetDummy$TargetDummyBuild *) NULL_CHECK(sp[1].o))->F_time = temp3;
	((mindustry_world_blocks_defense_TargetDummy$TargetDummyBuild *) NULL_CHECK(sp[0].o))->F_total = temp3;
	}
label_33:;
	LINE_NUMBER(163);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_world_blocks_defense_TargetDummy$TargetDummyBuild_spawned_int(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/defense/TargetDummy$TargetDummyBuild:spawned", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(166);
	clinit_mindustry_content_Fx(ctx);
	sp[0].o = (jobject)SF_mindustry_content_Fx_spawn;
	((func_mindustry_entities_Effect_at_float_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_entities_Effect_at_float_float])(ctx, sp[0].o, ((jfloat)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_x), ((jfloat)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_y));
	LINE_NUMBER(167);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_net;
	jint temp0 = (jint)((func_mindustry_net_Net_client_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_net_Net_client_R_boolean])(ctx, sp[0].o);
	if (temp0 == 0) goto label_2;
	}
	{
	LINE_NUMBER(168);
	((mindustry_world_blocks_defense_TargetDummy$TargetDummyBuild *) NULL_CHECK((frame[0].o)))->F_readUnitId = (frame[1].i);
	}
label_2:;
	LINE_NUMBER(170);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_world_blocks_defense_TargetDummy$TargetDummyBuild_draw(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/defense/TargetDummy$TargetDummyBuild:draw", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(174);
	M_mindustry_gen_Building_draw(ctx, (frame[0].o));
	LINE_NUMBER(176);
	sp[0].o = (jobject)((mindustry_world_blocks_defense_TargetDummy$TargetDummyBuild *) NULL_CHECK((frame[0].o)))->F_this$0;
	sp[0].o = (jobject)((mindustry_world_blocks_defense_TargetDummy *) NULL_CHECK(sp[0].o))->F_tether;
	jint temp0 = (jint)((func_arc_graphics_g2d_TextureRegion_found_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_g2d_TextureRegion_found_R_boolean])(ctx, sp[0].o);
	if (temp0 == 0) goto label_2;
	}
	{
	sp[0].o = (jobject)((mindustry_world_blocks_defense_TargetDummy$TargetDummyBuild *) NULL_CHECK((frame[0].o)))->F_unit;
	if (sp[0].o == nullptr) goto label_2;
	}
	{
	LINE_NUMBER(177);
	sp[0].o = (jobject)((mindustry_world_blocks_defense_TargetDummy$TargetDummyBuild *) NULL_CHECK((frame[0].o)))->F_unit;
	if ((floatCompare(((jfloat)((mindustry_gen_Unit *) NULL_CHECK(sp[0].o))->F_elevation), (jfloat(0.5f)), -1)) <= 0) goto label_4;
	}
	{
	sp[0].o = (jobject)((mindustry_world_blocks_defense_TargetDummy$TargetDummyBuild *) NULL_CHECK((frame[0].o)))->F_unit;
	sp[0].o = (jobject)((mindustry_gen_Unit *) NULL_CHECK(sp[0].o))->F_type;
	jfloat temp0 = ((jfloat)((mindustry_type_UnitType *) NULL_CHECK(sp[0].o))->F_flyingLayer) - (jfloat(1,000000e-02f));
	sp[0].f = temp0;
	sp += 1;
	goto label_5;
	}
label_4:;
	{
	sp[0].o = (jobject)((mindustry_world_blocks_defense_TargetDummy$TargetDummyBuild *) NULL_CHECK((frame[0].o)))->F_this$0;
	sp[0].o = (jobject)((mindustry_world_blocks_defense_TargetDummy *) NULL_CHECK(sp[0].o))->F_unitType;
	jfloat temp0 = (jfloat)((mindustry_type_UnitType *) NULL_CHECK(sp[0].o))->F_groundLayer;
	sp[0].o = (jobject)((mindustry_world_blocks_defense_TargetDummy$TargetDummyBuild *) NULL_CHECK((frame[0].o)))->F_this$0;
	sp[0].o = (jobject)((mindustry_world_blocks_defense_TargetDummy *) NULL_CHECK(sp[0].o))->F_unitType;
	jfloat temp1 = (jfloat)SM_arc_math_Mathf_clamp_float_float_float_R_float(ctx, (((jfloat)((mindustry_type_UnitType *) NULL_CHECK(sp[0].o))->F_hitSize) / (jfloat(4000.0f))), (jfloat(0)), (jfloat(1,000000e-02f)));
	jfloat temp2 = temp0 + temp1;
	sp[0].f = temp2;
	sp += 1;
	}
label_5:;
	{
	sp -= 1;
	frame[1].f = sp[0].f;
	LINE_NUMBER(178);
	SM_arc_graphics_g2d_Draw_z_float(ctx, ((frame[1].f) - (jfloat(1,000000e-02f))));
	LINE_NUMBER(179);
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_team;
	sp[0].o = (jobject)((mindustry_game_Team *) NULL_CHECK(sp[0].o))->F_color;
	SM_arc_graphics_g2d_Draw_color_arc_graphics_Color(ctx, sp[0].o);
	LINE_NUMBER(180);
	sp[0].o = (jobject)((mindustry_world_blocks_defense_TargetDummy$TargetDummyBuild *) NULL_CHECK((frame[0].o)))->F_this$0;
	sp[0].o = (jobject)((mindustry_world_blocks_defense_TargetDummy *) NULL_CHECK(sp[0].o))->F_tether;
	sp[1].o = (jobject)((mindustry_world_blocks_defense_TargetDummy$TargetDummyBuild *) NULL_CHECK((frame[0].o)))->F_this$0;
	sp[1].o = (jobject)((mindustry_world_blocks_defense_TargetDummy *) NULL_CHECK(sp[1].o))->F_tetherEnd;
	jfloat temp0 = (jfloat)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_x;
	jfloat temp1 = (jfloat)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_y;
	sp[2].o = (jobject)((mindustry_world_blocks_defense_TargetDummy$TargetDummyBuild *) NULL_CHECK((frame[0].o)))->F_unit;
	jfloat temp2 = (jfloat)((mindustry_gen_Unit *) NULL_CHECK(sp[2].o))->F_x;
	sp[2].o = (jobject)((mindustry_world_blocks_defense_TargetDummy$TargetDummyBuild *) NULL_CHECK((frame[0].o)))->F_unit;
	SM_mindustry_graphics_Drawf_laser_arc_graphics_g2d_TextureRegion_arc_graphics_g2d_TextureRegion_float_float_float_float(ctx, sp[0].o, sp[1].o, temp0, temp1, temp2, ((jfloat)((mindustry_gen_Unit *) NULL_CHECK(sp[2].o))->F_y));
	LINE_NUMBER(181);
	SM_arc_graphics_g2d_Draw_color(ctx);
	}
label_2:;
	{
	LINE_NUMBER(184);
	SM_arc_graphics_g2d_Draw_z_float(ctx, (jfloat(120.0f)));
	LINE_NUMBER(185);
	sp[0].o = (jobject)((func_mindustry_world_blocks_defense_TargetDummy$TargetDummyBuild_displayDPS_boolean_R_java_lang_String) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_world_blocks_defense_TargetDummy$TargetDummyBuild_displayDPS_boolean_R_java_lang_String])(ctx, (frame[0].o), (jint(1)));
	sp[1].o = (jobject)((func_mindustry_world_blocks_defense_TargetDummy$TargetDummyBuild_displayTotal_R_java_lang_String) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_world_blocks_defense_TargetDummy$TargetDummyBuild_displayTotal_R_java_lang_String])(ctx, (frame[0].o));
	sp[2].o = (jobject)((func_mindustry_world_blocks_defense_TargetDummy$TargetDummyBuild_displayHits_R_java_lang_String) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_world_blocks_defense_TargetDummy$TargetDummyBuild_displayHits_R_java_lang_String])(ctx, (frame[0].o));
	sp[0].o = (jobject)concatStringsRecipe(ctx, u8"\u0001\n(\u0001)\n\u0001"_j.string, 3, sp[0].o, sp[1].o, sp[2].o);
	frame[1].o = sp[0].o;
	LINE_NUMBER(186);
	sp[0].o = frame[1].o;
	jfloat temp0 = (jfloat)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_x;
	jfloat temp1 = (jfloat)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_y;
	sp[1].o = (jobject)((mindustry_world_blocks_defense_TargetDummy$TargetDummyBuild *) NULL_CHECK((frame[0].o)))->F_this$0;
	jfloat temp2 = temp1 + ((jfloat(((jint)((mindustry_world_Block *) NULL_CHECK(sp[1].o))->F_size))) / (jfloat(5.0f)));
	sp[1].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_team;
	sp[1].o = (jobject)((mindustry_game_Team *) NULL_CHECK(sp[1].o))->F_color;
	sp[2].o = (jobject)((mindustry_world_blocks_defense_TargetDummy$TargetDummyBuild *) NULL_CHECK((frame[0].o)))->F_this$0;
	SM_mindustry_graphics_Drawf_text_java_lang_String_float_float_arc_graphics_Color_float(ctx, sp[0].o, temp0, temp2, sp[1].o, ((jfloat(((jint)((mindustry_world_Block *) NULL_CHECK(sp[2].o))->F_size))) / (jfloat(2.5f))));
	LINE_NUMBER(187);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_world_blocks_defense_TargetDummy$TargetDummyBuild_drawSelect(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/defense/TargetDummy$TargetDummyBuild:drawSelect", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(191);
	jfloat temp0 = (jfloat)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_x;
	jfloat temp1 = (jfloat)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_y;
	jfloat temp2 = (((jfloat)((mindustry_world_blocks_defense_TargetDummy$TargetDummyBuild *) NULL_CHECK((frame[0].o)))->F_dummySize) / (clinit_arc_math_Mathf(ctx), (jfloat)SF_arc_math_Mathf_sqrt2)) - (jfloat(1));
	jfloat temp3 = jfloat(0);
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_team;
	sp[0].o = (jobject)((mindustry_game_Team *) NULL_CHECK(sp[0].o))->F_color;
	SM_mindustry_graphics_Drawf_square_float_float_float_float_arc_graphics_Color(ctx, temp0, temp1, temp2, temp3, sp[0].o);
	LINE_NUMBER(192);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_mindustry_world_blocks_defense_TargetDummy$TargetDummyBuild_displayDPS_boolean_R_java_lang_String(jcontext ctx, jobject self, jbool param0) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/defense/TargetDummy$TargetDummyBuild:displayDPS", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(195);
	if ((floatCompare(((jfloat)((mindustry_world_blocks_defense_TargetDummy$TargetDummyBuild *) NULL_CHECK((frame[0].o)))->F_time), (jfloat(0)), -1)) <= 0) goto label_1;
	}
	{
	LINE_NUMBER(196);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_bundle;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"bar.dps"_j));
	sp[2].o = (jobject)createArray(ctx, &class_java_lang_Object, (jint(1)));
	jint temp0 = jint(0);
	sp[3].o = sp[2].o;
	sp[4].i = temp0;
	sp += 5;
	if ((frame[1].i) == 0) goto label_3;
	}
	{
	if ((floatCompare(((jfloat)((mindustry_world_blocks_defense_TargetDummy$TargetDummyBuild *) NULL_CHECK((frame[0].o)))->F_dps), (jfloat(0)), -1)) <= 0) goto label_4;
	}
	{
	jint temp0 = (jint)SM_arc_math_Mathf_round_float_R_int(ctx, ((jfloat)((mindustry_world_blocks_defense_TargetDummy$TargetDummyBuild *) NULL_CHECK((frame[0].o)))->F_dps));
	sp[0].o = (jobject)SM_java_lang_Integer_valueOf_int_R_java_lang_Integer(ctx, temp0);
	sp += 1;
	goto label_5;
	}
label_4:;
	{
	sp[0].o = (jobject)((mindustry_world_blocks_defense_TargetDummy$TargetDummyBuild *) NULL_CHECK((frame[0].o)))->F_this$0;
	sp[0].o = (jobject)((mindustry_world_blocks_defense_TargetDummy *) NULL_CHECK(sp[0].o))->F_emptyStr;
	sp += 1;
	goto label_5;
	}
label_3:;
	{
	sp[0].o = (jobject)SM_arc_util_Strings_autoFixed_float_int_R_java_lang_String(ctx, ((((jfloat)((mindustry_world_blocks_defense_TargetDummy$TargetDummyBuild *) NULL_CHECK((frame[0].o)))->F_total) / ((jfloat)((mindustry_world_blocks_defense_TargetDummy$TargetDummyBuild *) NULL_CHECK((frame[0].o)))->F_time)) * (jfloat(60.0f))), (jint(2)));
	sp += 1;
	}
label_5:;
	{
	sp -= 6;
	ARRAY_ACCESS(jobject, sp[2].o, sp[4].i) = sp[5].o;
	sp[0].o = (jobject)((func_arc_util_I18NBundle_format_java_lang_String_Array1_java_lang_Object_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_util_I18NBundle_format_java_lang_String_Array1_java_lang_Object_R_java_lang_String])(ctx, sp[0].o, sp[1].o, sp[2].o);
	popStackFrame(ctx);
	return sp[0].o;
	}
label_1:;
	{
	LINE_NUMBER(198);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_bundle;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"bar.dps"_j));
	sp[2].o = (jobject)createArray(ctx, &class_java_lang_Object, (jint(1)));
	jint temp0 = jint(0);
	sp[3].o = (jobject)((mindustry_world_blocks_defense_TargetDummy$TargetDummyBuild *) NULL_CHECK((frame[0].o)))->F_this$0;
	sp[3].o = (jobject)((mindustry_world_blocks_defense_TargetDummy *) NULL_CHECK(sp[3].o))->F_emptyStr;
	ARRAY_ACCESS(jobject, sp[2].o, temp0) = sp[3].o;
	sp[0].o = (jobject)((func_arc_util_I18NBundle_format_java_lang_String_Array1_java_lang_Object_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_util_I18NBundle_format_java_lang_String_Array1_java_lang_Object_R_java_lang_String])(ctx, sp[0].o, sp[1].o, sp[2].o);
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_mindustry_world_blocks_defense_TargetDummy$TargetDummyBuild_displayTotal_R_java_lang_String(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/defense/TargetDummy$TargetDummyBuild:displayTotal", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(203);
	if ((floatCompare(((jfloat)((mindustry_world_blocks_defense_TargetDummy$TargetDummyBuild *) NULL_CHECK((frame[0].o)))->F_time), (jfloat(0)), -1)) <= 0) goto label_1;
	}
	{
	LINE_NUMBER(204);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_bundle;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"bar.damagetimetotal"_j));
	sp[2].o = (jobject)createArray(ctx, &class_java_lang_Object, (jint(2)));
	jint temp0 = jint(0);
	jint temp1 = (jint)SM_arc_math_Mathf_round_float_R_int(ctx, ((jfloat)((mindustry_world_blocks_defense_TargetDummy$TargetDummyBuild *) NULL_CHECK((frame[0].o)))->F_totalDisplay));
	sp[3].o = (jobject)SM_java_lang_Integer_valueOf_int_R_java_lang_Integer(ctx, temp1);
	ARRAY_ACCESS(jobject, sp[2].o, temp0) = sp[3].o;
	jint temp2 = jint(1);
	sp[3].o = (jobject)SM_arc_util_Strings_autoFixed_float_int_R_java_lang_String(ctx, ((jfloat)((mindustry_world_blocks_defense_TargetDummy$TargetDummyBuild *) NULL_CHECK((frame[0].o)))->F_timeDisplay), (jint(2)));
	ARRAY_ACCESS(jobject, sp[2].o, temp2) = sp[3].o;
	sp[0].o = (jobject)((func_arc_util_I18NBundle_format_java_lang_String_Array1_java_lang_Object_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_util_I18NBundle_format_java_lang_String_Array1_java_lang_Object_R_java_lang_String])(ctx, sp[0].o, sp[1].o, sp[2].o);
	popStackFrame(ctx);
	return sp[0].o;
	}
label_1:;
	{
	LINE_NUMBER(206);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_bundle;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"bar.damagetimetotal"_j));
	sp[2].o = (jobject)createArray(ctx, &class_java_lang_Object, (jint(2)));
	jint temp0 = jint(0);
	sp[3].o = (jobject)((mindustry_world_blocks_defense_TargetDummy$TargetDummyBuild *) NULL_CHECK((frame[0].o)))->F_this$0;
	sp[3].o = (jobject)((mindustry_world_blocks_defense_TargetDummy *) NULL_CHECK(sp[3].o))->F_emptyStr;
	ARRAY_ACCESS(jobject, sp[2].o, temp0) = sp[3].o;
	jint temp1 = jint(1);
	sp[3].o = (jobject)((mindustry_world_blocks_defense_TargetDummy$TargetDummyBuild *) NULL_CHECK((frame[0].o)))->F_this$0;
	sp[3].o = (jobject)((mindustry_world_blocks_defense_TargetDummy *) NULL_CHECK(sp[3].o))->F_emptyStr;
	ARRAY_ACCESS(jobject, sp[2].o, temp1) = sp[3].o;
	sp[0].o = (jobject)((func_arc_util_I18NBundle_format_java_lang_String_Array1_java_lang_Object_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_util_I18NBundle_format_java_lang_String_Array1_java_lang_Object_R_java_lang_String])(ctx, sp[0].o, sp[1].o, sp[2].o);
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_mindustry_world_blocks_defense_TargetDummy$TargetDummyBuild_displayHits_R_java_lang_String(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/defense/TargetDummy$TargetDummyBuild:displayHits", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(211);
	if ((floatCompare(((jfloat)((mindustry_world_blocks_defense_TargetDummy$TargetDummyBuild *) NULL_CHECK((frame[0].o)))->F_time), (jfloat(0)), -1)) <= 0) goto label_1;
	}
	{
	LINE_NUMBER(212);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_bundle;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"bar.hits"_j));
	sp[2].o = (jobject)createArray(ctx, &class_java_lang_Object, (jint(1)));
	jint temp0 = jint(0);
	sp[3].o = (jobject)SM_java_lang_Integer_valueOf_int_R_java_lang_Integer(ctx, ((jint)((mindustry_world_blocks_defense_TargetDummy$TargetDummyBuild *) NULL_CHECK((frame[0].o)))->F_hitsDisplay));
	ARRAY_ACCESS(jobject, sp[2].o, temp0) = sp[3].o;
	sp[0].o = (jobject)((func_arc_util_I18NBundle_format_java_lang_String_Array1_java_lang_Object_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_util_I18NBundle_format_java_lang_String_Array1_java_lang_Object_R_java_lang_String])(ctx, sp[0].o, sp[1].o, sp[2].o);
	popStackFrame(ctx);
	return sp[0].o;
	}
label_1:;
	{
	LINE_NUMBER(214);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_bundle;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"bar.hits"_j));
	sp[2].o = (jobject)createArray(ctx, &class_java_lang_Object, (jint(1)));
	jint temp0 = jint(0);
	sp[3].o = (jobject)((mindustry_world_blocks_defense_TargetDummy$TargetDummyBuild *) NULL_CHECK((frame[0].o)))->F_this$0;
	sp[3].o = (jobject)((mindustry_world_blocks_defense_TargetDummy *) NULL_CHECK(sp[3].o))->F_emptyStr;
	ARRAY_ACCESS(jobject, sp[2].o, temp0) = sp[3].o;
	sp[0].o = (jobject)((func_arc_util_I18NBundle_format_java_lang_String_Array1_java_lang_Object_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_util_I18NBundle_format_java_lang_String_Array1_java_lang_Object_R_java_lang_String])(ctx, sp[0].o, sp[1].o, sp[2].o);
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jbool M_mindustry_world_blocks_defense_TargetDummy$TargetDummyBuild_collide_mindustry_gen_Bullet_R_boolean(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/defense/TargetDummy$TargetDummyBuild:collide", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(220);
	popStackFrame(ctx);
	return (jint(0));
	}

	popStackFrame(ctx);
}

jbool M_mindustry_world_blocks_defense_TargetDummy$TargetDummyBuild_collision_mindustry_gen_Bullet_R_boolean(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/defense/TargetDummy$TargetDummyBuild:collision", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(225);
	popStackFrame(ctx);
	return (jint(0));
	}

	popStackFrame(ctx);
}

void M_mindustry_world_blocks_defense_TargetDummy$TargetDummyBuild_dummyHit_float(jcontext ctx, jobject self, jfloat param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/defense/TargetDummy$TargetDummyBuild:dummyHit", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	{
	LINE_NUMBER(229);
	((mindustry_world_blocks_defense_TargetDummy$TargetDummyBuild *) NULL_CHECK((frame[0].o)))->F_reset = (jfloat(0));
	LINE_NUMBER(230);
	sp[0].o = frame[0].o;
	((mindustry_world_blocks_defense_TargetDummy$TargetDummyBuild *) NULL_CHECK(sp[0].o))->F_total = (((jfloat)((mindustry_world_blocks_defense_TargetDummy$TargetDummyBuild *) NULL_CHECK(sp[0].o))->F_total) + (frame[1].f));
	LINE_NUMBER(231);
	sp[0].o = frame[0].o;
	((mindustry_world_blocks_defense_TargetDummy$TargetDummyBuild *) NULL_CHECK(sp[0].o))->F_hits = (((jint)((mindustry_world_blocks_defense_TargetDummy$TargetDummyBuild *) NULL_CHECK(sp[0].o))->F_hits) + (jint(1)));
	LINE_NUMBER(232);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_world_blocks_defense_TargetDummy$TargetDummyBuild_damage_float(jcontext ctx, jobject self, jfloat param0) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/defense/TargetDummy$TargetDummyBuild:damage", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	LINE_NUMBER(237);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_world_blocks_defense_TargetDummy$TargetDummyBuild_buildConfiguration_arc_scene_ui_layout_Table(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/defense/TargetDummy$TargetDummyBuild:buildConfiguration", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(241);
	sp[0].o = frame[1].o;
	{ /* InvokeDynamic */
		clinit_mindustry_world_blocks_defense_TargetDummy$TargetDummyBuild_invoke_arc_func_Cons_4(ctx);
		auto proxy = (mindustry_world_blocks_defense_TargetDummy$TargetDummyBuild_invoke_arc_func_Cons_4 *) gcAlloc(ctx, &class_mindustry_world_blocks_defense_TargetDummy$TargetDummyBuild_invoke_arc_func_Cons_4);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[1].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_table_arc_func_Cons_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_table_arc_func_Cons_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(259);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_top_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_top_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_grow_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_grow_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_margin_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_margin_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (jfloat(8.0f)));
	LINE_NUMBER(260);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_world_blocks_defense_TargetDummy$TargetDummyBuild_configureInt_int_int(jcontext ctx, jobject self, jint param0, jint param1) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/defense/TargetDummy$TargetDummyBuild:configureInt", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(264);
	sp[0].o = (jobject)((func_mindustry_world_blocks_defense_TargetDummy$TargetDummyBuild_config_R_Array1_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_world_blocks_defense_TargetDummy$TargetDummyBuild_config_R_Array1_int])(ctx, (frame[0].o));
	frame[3].o = sp[0].o;
	LINE_NUMBER(265);
	ARRAY_ACCESS(jint, (frame[3].o), (frame[1].i)) = (frame[2].i);
	LINE_NUMBER(266);
	((func_mindustry_world_blocks_defense_TargetDummy$TargetDummyBuild_configure_java_lang_Object) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_world_blocks_defense_TargetDummy$TargetDummyBuild_configure_java_lang_Object])(ctx, (frame[0].o), (frame[3].o));
	LINE_NUMBER(267);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jint M_mindustry_world_blocks_defense_TargetDummy$TargetDummyBuild_dummyTeam_R_int(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/defense/TargetDummy$TargetDummyBuild:dummyTeam", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(270);
	sp[0].o = (jobject)((mindustry_world_blocks_defense_TargetDummy$TargetDummyBuild *) NULL_CHECK((frame[0].o)))->F_unitTeam;
	sp[1].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_team;
	if (sp[0].o == sp[1].o) goto label_1;
	}
	{
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_team;
	popStackFrame(ctx);
	return ((jint)((mindustry_game_Team *) NULL_CHECK(sp[0].o))->F_id);
	}
label_1:;
	{
	LINE_NUMBER(271);
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_team;
	clinit_mindustry_Vars(ctx);
	sp[1].o = (jobject)SF_mindustry_Vars_state;
	sp[1].o = (jobject)((mindustry_core_GameState *) NULL_CHECK(sp[1].o))->F_rules;
	sp[1].o = (jobject)((mindustry_game_Rules *) NULL_CHECK(sp[1].o))->F_waveTeam;
	if (sp[0].o == sp[1].o) goto label_2;
	}
	{
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	sp[0].o = (jobject)((mindustry_core_GameState *) NULL_CHECK(sp[0].o))->F_rules;
	sp[0].o = (jobject)((mindustry_game_Rules *) NULL_CHECK(sp[0].o))->F_waveTeam;
	jint temp0 = (jint)((mindustry_game_Team *) NULL_CHECK(sp[0].o))->F_id;
	sp[0].i = temp0;
	sp += 1;
	goto label_3;
	}
label_2:;
	{
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_team;
	jint temp0 = (jint)((mindustry_game_Team *) NULL_CHECK(sp[0].o))->F_id;
	clinit_mindustry_game_Team(ctx);
	sp[0].o = (jobject)SF_mindustry_game_Team_all;
	jint temp1 = (temp0 % ((((jarray) nullCheck(ctx, sp[0].o))->length) - (jint(1)))) + (jint(1));
	sp[0].i = temp1;
	sp += 1;
	}
label_3:;
	popStackFrame(ctx);
	INST_IRETURN();

	popStackFrame(ctx);
}

jobject M_mindustry_world_blocks_defense_TargetDummy$TargetDummyBuild_config_R_Array1_int(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/defense/TargetDummy$TargetDummyBuild:config", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(277);
	sp[0].o = (jobject) createArray(ctx, &class_int, (jint(5)));
	jint temp0 = jint(0);
	sp[1].o = (jobject)((mindustry_world_blocks_defense_TargetDummy$TargetDummyBuild *) NULL_CHECK((frame[0].o)))->F_unitTeam;
	sp[2].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_team;
	jobject temp1 = sp[1].o;
	sp[1].o = sp[0].o;
	jobject temp2 = sp[2].o;
	sp[2].i = temp0;
	sp += 3;
	if (temp1 == temp2) goto label_1;
	}
	INST_ICONST(1);
	goto label_2;
label_1:;
	INST_ICONST(0);
label_2:;
	{
	sp -= 4;
	jint temp0 = (jint)SM_arc_math_Mathf_num_boolean_R_int(ctx, sp[3].i);
	ARRAY_ACCESS(jint, sp[0].o, sp[2].i) = temp0;
	jint temp1 = jint(1);
	jint temp2 = (jint)SM_arc_math_Mathf_num_boolean_R_int(ctx, ((jint)((mindustry_world_blocks_defense_TargetDummy$TargetDummyBuild *) NULL_CHECK((frame[0].o)))->F_boosting));
	ARRAY_ACCESS(jint, sp[0].o, temp1) = temp2;
	ARRAY_ACCESS(jint, sp[0].o, (jint(2))) = (jint(((jfloat)((mindustry_world_blocks_defense_TargetDummy$TargetDummyBuild *) NULL_CHECK((frame[0].o)))->F_unitArmor)));
	ARRAY_ACCESS(jint, sp[0].o, (jint(3))) = (jint(((jfloat)((mindustry_world_blocks_defense_TargetDummy$TargetDummyBuild *) NULL_CHECK((frame[0].o)))->F_resetTime)));
	jint temp3 = jint(4);
	jint temp4 = (jint)SM_java_lang_Float_floatToIntBits_float_R_int(ctx, ((jfloat)((mindustry_world_blocks_defense_TargetDummy$TargetDummyBuild *) NULL_CHECK((frame[0].o)))->F_dummySize));
	ARRAY_ACCESS(jint, sp[0].o, temp3) = temp4;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void M_mindustry_world_blocks_defense_TargetDummy$TargetDummyBuild_write_arc_util_io_Writes(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/defense/TargetDummy$TargetDummyBuild:write", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(282);
	M_mindustry_gen_Building_write_arc_util_io_Writes(ctx, (frame[0].o), (frame[1].o));
	LINE_NUMBER(283);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((mindustry_world_blocks_defense_TargetDummy$TargetDummyBuild *) NULL_CHECK((frame[0].o)))->F_unit;
	sp += 1;
	if (sp[0].o != nullptr) goto label_2;
	}
	INST_ICONST(-1);
	goto label_3;
label_2:;
	{
	sp[0].o = (jobject)((mindustry_world_blocks_defense_TargetDummy$TargetDummyBuild *) NULL_CHECK((frame[0].o)))->F_unit;
	jint temp0 = (jint)((mindustry_gen_Unit *) NULL_CHECK(sp[0].o))->F_id;
	sp[0].i = temp0;
	sp += 1;
	}
label_3:;
	{
	sp -= 2;
	((func_arc_util_io_Writes_i_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_util_io_Writes_i_int])(ctx, sp[0].o, sp[1].i);
	LINE_NUMBER(284);
	((func_arc_util_io_Writes_bool_boolean) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_util_io_Writes_bool_boolean])(ctx, (frame[1].o), ((jint)((mindustry_world_blocks_defense_TargetDummy$TargetDummyBuild *) NULL_CHECK((frame[0].o)))->F_boosting));
	LINE_NUMBER(285);
	((func_arc_util_io_Writes_f_float) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_util_io_Writes_f_float])(ctx, (frame[1].o), ((jfloat)((mindustry_world_blocks_defense_TargetDummy$TargetDummyBuild *) NULL_CHECK((frame[0].o)))->F_unitArmor));
	LINE_NUMBER(286);
	((func_arc_util_io_Writes_f_float) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_util_io_Writes_f_float])(ctx, (frame[1].o), ((jfloat)((mindustry_world_blocks_defense_TargetDummy$TargetDummyBuild *) NULL_CHECK((frame[0].o)))->F_resetTime));
	LINE_NUMBER(287);
	((func_arc_util_io_Writes_f_float) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_util_io_Writes_f_float])(ctx, (frame[1].o), ((jfloat)((mindustry_world_blocks_defense_TargetDummy$TargetDummyBuild *) NULL_CHECK((frame[0].o)))->F_dummySize));
	LINE_NUMBER(288);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((mindustry_world_blocks_defense_TargetDummy$TargetDummyBuild *) NULL_CHECK((frame[0].o)))->F_unitTeam;
	((func_arc_util_io_Writes_i_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_util_io_Writes_i_int])(ctx, sp[0].o, ((jint)((mindustry_game_Team *) NULL_CHECK(sp[1].o))->F_id));
	LINE_NUMBER(289);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_world_blocks_defense_TargetDummy$TargetDummyBuild_read_arc_util_io_Reads_byte(jcontext ctx, jobject self, jobject param0, jbyte param1) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/defense/TargetDummy$TargetDummyBuild:read", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(293);
	M_mindustry_gen_Building_read_arc_util_io_Reads_byte(ctx, (frame[0].o), (frame[1].o), (frame[2].i));
	LINE_NUMBER(294);
	sp[0].o = frame[0].o;
	jint temp0 = (jint)((func_arc_util_io_Reads_i_R_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_util_io_Reads_i_R_int])(ctx, (frame[1].o));
	((mindustry_world_blocks_defense_TargetDummy$TargetDummyBuild *) NULL_CHECK(sp[0].o))->F_readUnitId = temp0;
	LINE_NUMBER(295);
	sp[0].o = frame[0].o;
	jint temp1 = (jint)((func_arc_util_io_Reads_bool_R_boolean) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_util_io_Reads_bool_R_boolean])(ctx, (frame[1].o));
	((mindustry_world_blocks_defense_TargetDummy$TargetDummyBuild *) NULL_CHECK(sp[0].o))->F_boosting = temp1;
	LINE_NUMBER(296);
	sp[0].o = frame[0].o;
	jfloat temp2 = (jfloat)((func_arc_util_io_Reads_f_R_float) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_util_io_Reads_f_R_float])(ctx, (frame[1].o));
	((mindustry_world_blocks_defense_TargetDummy$TargetDummyBuild *) NULL_CHECK(sp[0].o))->F_unitArmor = temp2;
	LINE_NUMBER(297);
	sp[0].o = frame[0].o;
	jfloat temp3 = (jfloat)((func_arc_util_io_Reads_f_R_float) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_util_io_Reads_f_R_float])(ctx, (frame[1].o));
	((mindustry_world_blocks_defense_TargetDummy$TargetDummyBuild *) NULL_CHECK(sp[0].o))->F_resetTime = temp3;
	LINE_NUMBER(298);
	sp[0].o = frame[0].o;
	jfloat temp4 = (jfloat)((func_arc_util_io_Reads_f_R_float) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_util_io_Reads_f_R_float])(ctx, (frame[1].o));
	((mindustry_world_blocks_defense_TargetDummy$TargetDummyBuild *) NULL_CHECK(sp[0].o))->F_dummySize = temp4;
	LINE_NUMBER(299);
	sp[0].o = frame[0].o;
	jint temp5 = (jint)((func_arc_util_io_Reads_i_R_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_util_io_Reads_i_R_int])(ctx, (frame[1].o));
	sp[1].o = (jobject)SM_mindustry_game_Team_get_int_R_mindustry_game_Team(ctx, temp5);
	((mindustry_world_blocks_defense_TargetDummy$TargetDummyBuild *) NULL_CHECK(sp[0].o))->F_unitTeam = (jref) sp[1].o;
	LINE_NUMBER(300);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_mindustry_world_blocks_defense_TargetDummy$TargetDummyBuild_config_R_java_lang_Object(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/defense/TargetDummy$TargetDummyBuild:config", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(82);
	sp[0].o = (jobject)((func_mindustry_world_blocks_defense_TargetDummy$TargetDummyBuild_config_R_Array1_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_world_blocks_defense_TargetDummy$TargetDummyBuild_config_R_Array1_int])(ctx, (frame[0].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void M_mindustry_world_blocks_defense_TargetDummy$TargetDummyBuild_lambda$buildConfiguration$0_arc_scene_ui_layout_Table(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/defense/TargetDummy$TargetDummyBuild:lambda$buildConfiguration$0", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(242);
	sp[0].o = frame[1].o;
	clinit_mindustry_ui_Styles(ctx);
	sp[1].o = (jobject)SF_mindustry_ui_Styles_black6;
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_background_arc_scene_style_Drawable_R_arc_scene_ui_layout_Table) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_background_arc_scene_style_Drawable_R_arc_scene_ui_layout_Table])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(243);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_defaults_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_scene_ui_layout_Table_defaults_R_arc_scene_ui_layout_Cell])(ctx, (frame[1].o));
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_left_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_left_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o);
	LINE_NUMBER(245);
	sp[0].o = frame[1].o;
	clinit_arc_Core(ctx);
	sp[1].o = (jobject)SF_arc_Core_bundle;
	sp[1].o = (jobject)((func_arc_util_I18NBundle_get_java_lang_String_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_util_I18NBundle_get_java_lang_String_R_java_lang_String])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"rules.enemyteam"_j))));
	sp[2].o = (jobject)((mindustry_world_blocks_defense_TargetDummy$TargetDummyBuild *) NULL_CHECK((frame[0].o)))->F_unitTeam;
	sp[3].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_team;
	sp += 2;
	if (sp[0].o == sp[1].o) goto label_3;
	}
	INST_ICONST(1);
	goto label_4;
label_3:;
	INST_ICONST(0);
label_4:;
	{
	sp -= 3;
	{ /* InvokeDynamic */
		clinit_mindustry_world_blocks_defense_TargetDummy$TargetDummyBuild_invoke_arc_func_Boolc_2(ctx);
		auto proxy = (mindustry_world_blocks_defense_TargetDummy$TargetDummyBuild_invoke_arc_func_Boolc_2 *) gcAlloc(ctx, &class_mindustry_world_blocks_defense_TargetDummy$TargetDummyBuild_invoke_arc_func_Boolc_2);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[3].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_check_java_lang_String_boolean_arc_func_Boolc_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_check_java_lang_String_boolean_arc_func_Boolc_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o, sp[2].i, sp[3].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_colspan_int_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_colspan_int_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (jint(3)));
	((func_arc_scene_ui_layout_Cell_row) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_row])(ctx, sp[0].o);
	LINE_NUMBER(246);
	sp[0].o = frame[1].o;
	clinit_arc_Core(ctx);
	sp[1].o = (jobject)SF_arc_Core_bundle;
	sp[1].o = (jobject)((func_arc_util_I18NBundle_get_java_lang_String_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_util_I18NBundle_get_java_lang_String_R_java_lang_String])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"stat.flying"_j))));
	jint temp0 = (jint)((mindustry_world_blocks_defense_TargetDummy$TargetDummyBuild *) NULL_CHECK((frame[0].o)))->F_boosting;
	{ /* InvokeDynamic */
		clinit_mindustry_world_blocks_defense_TargetDummy$TargetDummyBuild_invoke_arc_func_Boolc_3(ctx);
		auto proxy = (mindustry_world_blocks_defense_TargetDummy$TargetDummyBuild_invoke_arc_func_Boolc_3 *) gcAlloc(ctx, &class_mindustry_world_blocks_defense_TargetDummy$TargetDummyBuild_invoke_arc_func_Boolc_3);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[2].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_check_java_lang_String_boolean_arc_func_Boolc_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_check_java_lang_String_boolean_arc_func_Boolc_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o, temp0, sp[2].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_colspan_int_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_colspan_int_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (jint(3)));
	((func_arc_scene_ui_layout_Cell_row) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_row])(ctx, sp[0].o);
	LINE_NUMBER(247);
	sp[0].o = frame[1].o;
	clinit_arc_Core(ctx);
	sp[1].o = (jobject)SF_arc_Core_bundle;
	sp[1].o = (jobject)((func_arc_util_I18NBundle_get_java_lang_String_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_util_I18NBundle_get_java_lang_String_R_java_lang_String])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"stat.armor"_j))));
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_add_java_lang_CharSequence_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_add_java_lang_CharSequence_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(248);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)concatStringsRecipe(ctx, u8"\u0001"_j.string, 1, boxInteger(ctx, (jint(((jfloat)((mindustry_world_blocks_defense_TargetDummy$TargetDummyBuild *) NULL_CHECK((frame[0].o)))->F_unitArmor)))));
	clinit_arc_scene_ui_TextField$TextFieldFilter(ctx);
	sp[2].o = (jobject)SF_arc_scene_ui_TextField$TextFieldFilter_digitsOnly;
	{ /* InvokeDynamic */
		clinit_mindustry_world_blocks_defense_TargetDummy$TargetDummyBuild_invoke_arc_func_Cons_5(ctx);
		auto proxy = (mindustry_world_blocks_defense_TargetDummy$TargetDummyBuild_invoke_arc_func_Cons_5 *) gcAlloc(ctx, &class_mindustry_world_blocks_defense_TargetDummy$TargetDummyBuild_invoke_arc_func_Cons_5);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[3].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_field_java_lang_String_arc_scene_ui_TextField$TextFieldFilter_arc_func_Cons_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_field_java_lang_String_arc_scene_ui_TextField$TextFieldFilter_arc_func_Cons_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o);
	{ /* InvokeDynamic */
		clinit_mindustry_world_blocks_defense_TargetDummy$TargetDummyBuild_invoke_arc_scene_ui_TextField$TextFieldValidator_3(ctx);
		auto proxy = (mindustry_world_blocks_defense_TargetDummy$TargetDummyBuild_invoke_arc_scene_ui_TextField$TextFieldValidator_3 *) gcAlloc(ctx, &class_mindustry_world_blocks_defense_TargetDummy$TargetDummyBuild_invoke_arc_scene_ui_TextField$TextFieldValidator_3);
		sp[1].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_valid_arc_scene_ui_TextField$TextFieldValidator_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_valid_arc_scene_ui_TextField$TextFieldValidator_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_width_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_width_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (jfloat(200.0f)));
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_padLeft_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_padLeft_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (jfloat(8.0f)));
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_colspan_int_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_colspan_int_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (jint(2)));
	((func_arc_scene_ui_layout_Cell_row) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_row])(ctx, sp[0].o);
	LINE_NUMBER(249);
	sp[0].o = frame[1].o;
	clinit_arc_Core(ctx);
	sp[1].o = (jobject)SF_arc_Core_bundle;
	sp[1].o = (jobject)((func_arc_util_I18NBundle_get_java_lang_String_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_util_I18NBundle_get_java_lang_String_R_java_lang_String])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"stat.resettime"_j))));
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_add_java_lang_CharSequence_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_add_java_lang_CharSequence_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(250);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)SM_arc_util_Strings_autoFixed_float_int_R_java_lang_String(ctx, (((jfloat)((mindustry_world_blocks_defense_TargetDummy$TargetDummyBuild *) NULL_CHECK((frame[0].o)))->F_resetTime) / (jfloat(60.0f))), (jint(2)));
	clinit_arc_scene_ui_TextField$TextFieldFilter(ctx);
	sp[2].o = (jobject)SF_arc_scene_ui_TextField$TextFieldFilter_floatsOnly;
	{ /* InvokeDynamic */
		clinit_mindustry_world_blocks_defense_TargetDummy$TargetDummyBuild_invoke_arc_func_Cons_6(ctx);
		auto proxy = (mindustry_world_blocks_defense_TargetDummy$TargetDummyBuild_invoke_arc_func_Cons_6 *) gcAlloc(ctx, &class_mindustry_world_blocks_defense_TargetDummy$TargetDummyBuild_invoke_arc_func_Cons_6);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[3].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_field_java_lang_String_arc_scene_ui_TextField$TextFieldFilter_arc_func_Cons_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_field_java_lang_String_arc_scene_ui_TextField$TextFieldFilter_arc_func_Cons_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o);
	{ /* InvokeDynamic */
		clinit_mindustry_world_blocks_defense_TargetDummy$TargetDummyBuild_invoke_arc_scene_ui_TextField$TextFieldValidator_4(ctx);
		auto proxy = (mindustry_world_blocks_defense_TargetDummy$TargetDummyBuild_invoke_arc_scene_ui_TextField$TextFieldValidator_4 *) gcAlloc(ctx, &class_mindustry_world_blocks_defense_TargetDummy$TargetDummyBuild_invoke_arc_scene_ui_TextField$TextFieldValidator_4);
		sp[1].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_valid_arc_scene_ui_TextField$TextFieldValidator_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_valid_arc_scene_ui_TextField$TextFieldValidator_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_padLeft_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_padLeft_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (jfloat(8.0f)));
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_growX_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_growX_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o);
	LINE_NUMBER(251);
	sp[0].o = frame[1].o;
	clinit_mindustry_world_meta_StatUnit(ctx);
	sp[1].o = (jobject)SF_mindustry_world_meta_StatUnit_seconds;
	sp[1].o = (jobject)((func_mindustry_world_meta_StatUnit_localized_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_mindustry_world_meta_StatUnit_localized_R_java_lang_String])(ctx, sp[1].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_add_java_lang_CharSequence_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_add_java_lang_CharSequence_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_padLeft_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_padLeft_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (jfloat(8.0f)));
	((func_arc_scene_ui_layout_Cell_row) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_row])(ctx, sp[0].o);
	LINE_NUMBER(252);
	sp[0].o = frame[1].o;
	clinit_arc_Core(ctx);
	sp[1].o = (jobject)SF_arc_Core_bundle;
	sp[1].o = (jobject)((func_arc_util_I18NBundle_get_java_lang_String_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_util_I18NBundle_get_java_lang_String_R_java_lang_String])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"stat.hitsize"_j))));
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_add_java_lang_CharSequence_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_add_java_lang_CharSequence_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(253);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)concatStringsRecipe(ctx, u8"\u0001"_j.string, 1, boxFloat(ctx, (((jfloat)((mindustry_world_blocks_defense_TargetDummy$TargetDummyBuild *) NULL_CHECK((frame[0].o)))->F_dummySize) / (jfloat(8.0f)))));
	clinit_arc_scene_ui_TextField$TextFieldFilter(ctx);
	sp[2].o = (jobject)SF_arc_scene_ui_TextField$TextFieldFilter_floatsOnly;
	{ /* InvokeDynamic */
		clinit_mindustry_world_blocks_defense_TargetDummy$TargetDummyBuild_invoke_arc_func_Cons_7(ctx);
		auto proxy = (mindustry_world_blocks_defense_TargetDummy$TargetDummyBuild_invoke_arc_func_Cons_7 *) gcAlloc(ctx, &class_mindustry_world_blocks_defense_TargetDummy$TargetDummyBuild_invoke_arc_func_Cons_7);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[3].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_field_java_lang_String_arc_scene_ui_TextField$TextFieldFilter_arc_func_Cons_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_field_java_lang_String_arc_scene_ui_TextField$TextFieldFilter_arc_func_Cons_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o);
	{ /* InvokeDynamic */
		clinit_mindustry_world_blocks_defense_TargetDummy$TargetDummyBuild_invoke_arc_scene_ui_TextField$TextFieldValidator_5(ctx);
		auto proxy = (mindustry_world_blocks_defense_TargetDummy$TargetDummyBuild_invoke_arc_scene_ui_TextField$TextFieldValidator_5 *) gcAlloc(ctx, &class_mindustry_world_blocks_defense_TargetDummy$TargetDummyBuild_invoke_arc_scene_ui_TextField$TextFieldValidator_5);
		sp[1].o = (jobject) proxy;
	}
	LINE_NUMBER(254);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_valid_arc_scene_ui_TextField$TextFieldValidator_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_valid_arc_scene_ui_TextField$TextFieldValidator_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o);
	jfloat temp1 = jfloat(8.0f);
	LINE_NUMBER(257);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_padLeft_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_padLeft_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, temp1);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_growX_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_growX_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o);
	LINE_NUMBER(258);
	sp[0].o = frame[1].o;
	clinit_mindustry_world_meta_StatUnit(ctx);
	sp[1].o = (jobject)SF_mindustry_world_meta_StatUnit_blocks;
	sp[1].o = (jobject)((func_mindustry_world_meta_StatUnit_localized_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_mindustry_world_meta_StatUnit_localized_R_java_lang_String])(ctx, sp[1].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_add_java_lang_CharSequence_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_add_java_lang_CharSequence_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_padLeft_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_padLeft_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (jfloat(8.0f)));
	LINE_NUMBER(259);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jbool SM_mindustry_world_blocks_defense_TargetDummy$TargetDummyBuild_lambda$buildConfiguration$7_java_lang_String_R_boolean(jcontext ctx, jobject param0) {
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/defense/TargetDummy$TargetDummyBuild:lambda$buildConfiguration$7", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_world_blocks_defense_TargetDummy$TargetDummyBuild(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(255);
	jfloat temp0 = (jfloat)SM_arc_util_Strings_parseFloat_java_lang_String_float_R_float(ctx, (frame[0].o), (jfloat(3,402823e+38f)));
	frame[1].f = temp0;
	LINE_NUMBER(256);
	if ((floatCompare((frame[1].f), (jfloat(0.1f)), -1)) < 0) goto label_2;
	}
	{
	if ((floatCompare((frame[1].f), (jfloat(30.0f)), 1)) > 0) goto label_2;
	}
	INST_ICONST(1);
	goto label_3;
label_2:;
	INST_ICONST(0);
label_3:;
	popStackFrame(ctx);
	INST_IRETURN();

	popStackFrame(ctx);
}

void M_mindustry_world_blocks_defense_TargetDummy$TargetDummyBuild_lambda$buildConfiguration$6_java_lang_String(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/defense/TargetDummy$TargetDummyBuild:lambda$buildConfiguration$6", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(253);
	sp[0].o = frame[0].o;
	jint temp0 = jint(4);
	jfloat temp1 = (jfloat)SM_arc_util_Strings_parseFloat_java_lang_String_R_float(ctx, (frame[1].o));
	jint temp2 = (jint)SM_java_lang_Float_floatToIntBits_float_R_int(ctx, (temp1 * (jfloat(8.0f))));
	((func_mindustry_world_blocks_defense_TargetDummy$TargetDummyBuild_configureInt_int_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_blocks_defense_TargetDummy$TargetDummyBuild_configureInt_int_int])(ctx, sp[0].o, temp0, temp2);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_world_blocks_defense_TargetDummy$TargetDummyBuild_lambda$buildConfiguration$5_java_lang_String(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/defense/TargetDummy$TargetDummyBuild:lambda$buildConfiguration$5", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(250);
	sp[0].o = frame[0].o;
	jint temp0 = jint(3);
	jfloat temp1 = (jfloat)SM_arc_util_Strings_parseFloat_java_lang_String_R_float(ctx, (frame[1].o));
	((func_mindustry_world_blocks_defense_TargetDummy$TargetDummyBuild_configureInt_int_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_blocks_defense_TargetDummy$TargetDummyBuild_configureInt_int_int])(ctx, sp[0].o, temp0, (jint((temp1 * (jfloat(60.0f))))));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jbool SM_mindustry_world_blocks_defense_TargetDummy$TargetDummyBuild_lambda$buildConfiguration$4_java_lang_String_R_boolean(jcontext ctx, jobject param0) {
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/defense/TargetDummy$TargetDummyBuild:lambda$buildConfiguration$4", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_world_blocks_defense_TargetDummy$TargetDummyBuild(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(248);
	jint temp0 = (jint)SM_arc_util_Strings_parseInt_java_lang_String_int_R_int(ctx, (frame[0].o), (jint(2147483647)));
	if (temp0 >= (jint(100000))) goto label_1;
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

void M_mindustry_world_blocks_defense_TargetDummy$TargetDummyBuild_lambda$buildConfiguration$3_java_lang_String(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/defense/TargetDummy$TargetDummyBuild:lambda$buildConfiguration$3", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(248);
	sp[0].o = frame[0].o;
	jint temp0 = jint(2);
	jint temp1 = (jint)SM_arc_util_Strings_parseInt_java_lang_String_R_int(ctx, (frame[1].o));
	((func_mindustry_world_blocks_defense_TargetDummy$TargetDummyBuild_configureInt_int_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_blocks_defense_TargetDummy$TargetDummyBuild_configureInt_int_int])(ctx, sp[0].o, temp0, temp1);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_world_blocks_defense_TargetDummy$TargetDummyBuild_lambda$buildConfiguration$2_boolean(jcontext ctx, jobject self, jbool param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/defense/TargetDummy$TargetDummyBuild:lambda$buildConfiguration$2", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(246);
	sp[0].o = frame[0].o;
	jint temp0 = jint(1);
	jint temp1 = (jint)SM_arc_math_Mathf_num_boolean_R_int(ctx, (frame[1].i));
	((func_mindustry_world_blocks_defense_TargetDummy$TargetDummyBuild_configureInt_int_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_blocks_defense_TargetDummy$TargetDummyBuild_configureInt_int_int])(ctx, sp[0].o, temp0, temp1);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_world_blocks_defense_TargetDummy$TargetDummyBuild_lambda$buildConfiguration$1_boolean(jcontext ctx, jobject self, jbool param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/defense/TargetDummy$TargetDummyBuild:lambda$buildConfiguration$1", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(245);
	sp[0].o = frame[0].o;
	jint temp0 = jint(0);
	jint temp1 = (jint)SM_arc_math_Mathf_num_boolean_R_int(ctx, (frame[1].i));
	((func_mindustry_world_blocks_defense_TargetDummy$TargetDummyBuild_configureInt_int_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_blocks_defense_TargetDummy$TargetDummyBuild_configureInt_int_int])(ctx, sp[0].o, temp0, temp1);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void *vtable_mindustry_world_blocks_defense_TargetDummy$TargetDummyBuild[] {
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
	(void *) M_mindustry_world_blocks_defense_TargetDummy$TargetDummyBuild_write_arc_util_io_Writes,
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
	(void *) M_mindustry_world_blocks_defense_TargetDummy$TargetDummyBuild_damage_float,
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
	(void *) M_mindustry_world_blocks_defense_TargetDummy$TargetDummyBuild_config_R_java_lang_Object,
	(void *) M_mindustry_gen_Building_getPayloads_R_mindustry_type_PayloadSeq,
	(void *) M_mindustry_gen_Building_findClosestEdge_arc_math_geom_Position_arc_func_Boolf_R_mindustry_world_Tile,
	(void *) M_mindustry_gen_Building_getPayload_R_mindustry_world_blocks_payloads_Payload,
	(void *) M_mindustry_gen_Building_takePayload_R_mindustry_world_blocks_payloads_Payload,
	(void *) M_mindustry_gen_Building_onRepaired,
	(void *) M_mindustry_gen_Building_placed,
	(void *) M_mindustry_gen_Building_playerPlaced_java_lang_Object,
	(void *) M_mindustry_world_blocks_defense_TargetDummy$TargetDummyBuild_read_arc_util_io_Reads_byte,
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
	(void *) M_mindustry_world_blocks_defense_TargetDummy$TargetDummyBuild_canPickup_R_boolean,
	(void *) M_mindustry_gen_Building_canResupply_R_boolean,
	(void *) M_mindustry_gen_Building_canUnload_R_boolean,
	(void *) M_mindustry_gen_Building_canWithdraw_R_boolean,
	(void *) M_mindustry_gen_Building_checkSolid_R_boolean,
	(void *) M_mindustry_gen_Building_checkSuppression_R_boolean,
	(void *) M_mindustry_world_blocks_defense_TargetDummy$TargetDummyBuild_collide_mindustry_gen_Bullet_R_boolean,
	(void *) M_mindustry_world_blocks_defense_TargetDummy$TargetDummyBuild_collision_mindustry_gen_Bullet_R_boolean,
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
	(void *) M_mindustry_world_blocks_defense_TargetDummy$TargetDummyBuild_buildConfiguration_arc_scene_ui_layout_Table,
	(void *) M_mindustry_gen_Building_changeTeam_mindustry_game_Team,
	(void *) M_mindustry_gen_Building_changeTeam_mindustry_game_Team_boolean,
	(void *) M_mindustry_gen_Building_checkAllowUpdate,
	(void *) M_mindustry_gen_Building_configure_java_lang_Object,
	(void *) M_mindustry_gen_Building_configureAny_java_lang_Object,
	(void *) M_mindustry_gen_Building_configured_mindustry_gen_Unit_java_lang_Object,
	(void *) M_mindustry_gen_Building_consume,
	(void *) M_mindustry_world_blocks_defense_TargetDummy$TargetDummyBuild_created,
	(void *) M_mindustry_gen_Building_damage_mindustry_gen_Bullet_mindustry_game_Team_float,
	(void *) M_mindustry_gen_Building_damage_mindustry_game_Team_float,
	(void *) M_mindustry_gen_Building_deselect,
	(void *) M_mindustry_gen_Building_displayBars_arc_scene_ui_layout_Table,
	(void *) M_mindustry_gen_Building_displayConsumption_arc_scene_ui_layout_Table,
	(void *) M_mindustry_world_blocks_defense_TargetDummy$TargetDummyBuild_draw,
	(void *) M_mindustry_gen_Building_drawCached,
	(void *) M_mindustry_gen_Building_drawConfigure,
	(void *) M_mindustry_gen_Building_drawCracks,
	(void *) M_mindustry_gen_Building_drawDisabled,
	(void *) M_mindustry_gen_Building_drawItemSelection_mindustry_ctype_UnlockableContent,
	(void *) M_mindustry_gen_Building_drawLight,
	(void *) M_mindustry_gen_Building_drawLiquidLight_mindustry_type_Liquid_float,
	(void *) M_mindustry_world_blocks_defense_TargetDummy$TargetDummyBuild_drawSelect,
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
	(void *) M_mindustry_world_blocks_defense_TargetDummy$TargetDummyBuild_updateTile,
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
	(void *) M_mindustry_world_blocks_defense_TargetDummy$TargetDummyBuild_spawned_int,
	(void *) M_mindustry_world_blocks_defense_TargetDummy$TargetDummyBuild_displayDPS_boolean_R_java_lang_String,
	(void *) M_mindustry_world_blocks_defense_TargetDummy$TargetDummyBuild_displayTotal_R_java_lang_String,
	(void *) M_mindustry_world_blocks_defense_TargetDummy$TargetDummyBuild_displayHits_R_java_lang_String,
	(void *) M_mindustry_world_blocks_defense_TargetDummy$TargetDummyBuild_dummyHit_float,
	(void *) M_mindustry_world_blocks_defense_TargetDummy$TargetDummyBuild_configureInt_int_int,
	(void *) M_mindustry_world_blocks_defense_TargetDummy$TargetDummyBuild_dummyTeam_R_int,
	(void *) M_mindustry_world_blocks_defense_TargetDummy$TargetDummyBuild_config_R_Array1_int,
	(void *) M_mindustry_world_blocks_defense_TargetDummy$TargetDummyBuild_lambda$buildConfiguration$0_arc_scene_ui_layout_Table,
	(void *) M_mindustry_world_blocks_defense_TargetDummy$TargetDummyBuild_lambda$buildConfiguration$6_java_lang_String,
	(void *) M_mindustry_world_blocks_defense_TargetDummy$TargetDummyBuild_lambda$buildConfiguration$5_java_lang_String,
	(void *) M_mindustry_world_blocks_defense_TargetDummy$TargetDummyBuild_lambda$buildConfiguration$3_java_lang_String,
	(void *) M_mindustry_world_blocks_defense_TargetDummy$TargetDummyBuild_lambda$buildConfiguration$2_boolean,
	(void *) M_mindustry_world_blocks_defense_TargetDummy$TargetDummyBuild_lambda$buildConfiguration$1_boolean,
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
	{ "spawned", "(I)V" },
	{ "displayDPS", "(Z)Ljava/lang/String;" },
	{ "displayTotal", "()Ljava/lang/String;" },
	{ "displayHits", "()Ljava/lang/String;" },
	{ "dummyHit", "(F)V" },
	{ "configureInt", "(II)V" },
	{ "dummyTeam", "()I" },
	{ "config", "()[I" },
	{ "lambda$buildConfiguration$0", "(Larc/scene/ui/layout/Table;)V" },
	{ "lambda$buildConfiguration$6", "(Ljava/lang/String;)V" },
	{ "lambda$buildConfiguration$5", "(Ljava/lang/String;)V" },
	{ "lambda$buildConfiguration$3", "(Ljava/lang/String;)V" },
	{ "lambda$buildConfiguration$2", "(Z)V" },
	{ "lambda$buildConfiguration$1", "(Z)V" },
};

static jclass interfaces[] { &class_mindustry_world_blocks_UnitTetherBlock, };

static FieldMetadata fields[] {
	{ "readUnitId", &class_int, offsetof(mindustry_world_blocks_defense_TargetDummy$TargetDummyBuild, F_readUnitId), "I", 1 },
	{ "unit", &class_mindustry_gen_Unit, offsetof(mindustry_world_blocks_defense_TargetDummy$TargetDummyBuild, F_unit), "Lmindustry/gen/Unit;", 1 },
	{ "resetTime", &class_float, offsetof(mindustry_world_blocks_defense_TargetDummy$TargetDummyBuild, F_resetTime), "F", 1 },
	{ "total", &class_float, offsetof(mindustry_world_blocks_defense_TargetDummy$TargetDummyBuild, F_total), "F", 1 },
	{ "reset", &class_float, offsetof(mindustry_world_blocks_defense_TargetDummy$TargetDummyBuild, F_reset), "F", 1 },
	{ "time", &class_float, offsetof(mindustry_world_blocks_defense_TargetDummy$TargetDummyBuild, F_time), "F", 1 },
	{ "dummySize", &class_float, offsetof(mindustry_world_blocks_defense_TargetDummy$TargetDummyBuild, F_dummySize), "F", 1 },
	{ "dps", &class_float, offsetof(mindustry_world_blocks_defense_TargetDummy$TargetDummyBuild, F_dps), "F", 1 },
	{ "totalDisplay", &class_float, offsetof(mindustry_world_blocks_defense_TargetDummy$TargetDummyBuild, F_totalDisplay), "F", 1 },
	{ "timeDisplay", &class_float, offsetof(mindustry_world_blocks_defense_TargetDummy$TargetDummyBuild, F_timeDisplay), "F", 1 },
	{ "hits", &class_int, offsetof(mindustry_world_blocks_defense_TargetDummy$TargetDummyBuild, F_hits), "I", 1 },
	{ "hitsDisplay", &class_int, offsetof(mindustry_world_blocks_defense_TargetDummy$TargetDummyBuild, F_hitsDisplay), "I", 1 },
	{ "boosting", &class_boolean, offsetof(mindustry_world_blocks_defense_TargetDummy$TargetDummyBuild, F_boosting), "Z", 1 },
	{ "unitArmor", &class_float, offsetof(mindustry_world_blocks_defense_TargetDummy$TargetDummyBuild, F_unitArmor), "F", 1 },
	{ "unitTeam", &class_mindustry_game_Team, offsetof(mindustry_world_blocks_defense_TargetDummy$TargetDummyBuild, F_unitTeam), "Lmindustry/game/Team;", 1 },
	{ "this$0", &class_mindustry_world_blocks_defense_TargetDummy, offsetof(mindustry_world_blocks_defense_TargetDummy$TargetDummyBuild, F_this$0), "Lmindustry/world/blocks/defense/TargetDummy;", 4112 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_mindustry_world_blocks_defense_TargetDummy$TargetDummyBuild_mindustry_world_blocks_defense_TargetDummy, 0, "(Lmindustry/world/blocks/defense/TargetDummy;)V", 1 },
	{ "canPickup", (intptr_t) M_mindustry_world_blocks_defense_TargetDummy$TargetDummyBuild_canPickup_R_boolean, VTABLE_mindustry_world_blocks_defense_TargetDummy$TargetDummyBuild_canPickup_R_boolean, "()Z", 1 },
	{ "created", (intptr_t) M_mindustry_world_blocks_defense_TargetDummy$TargetDummyBuild_created, VTABLE_mindustry_world_blocks_defense_TargetDummy$TargetDummyBuild_created, "()V", 1 },
	{ "updateTile", (intptr_t) M_mindustry_world_blocks_defense_TargetDummy$TargetDummyBuild_updateTile, VTABLE_mindustry_world_blocks_defense_TargetDummy$TargetDummyBuild_updateTile, "()V", 1 },
	{ "spawned", (intptr_t) M_mindustry_world_blocks_defense_TargetDummy$TargetDummyBuild_spawned_int, VTABLE_mindustry_world_blocks_defense_TargetDummy$TargetDummyBuild_spawned_int, "(I)V", 1 },
	{ "draw", (intptr_t) M_mindustry_world_blocks_defense_TargetDummy$TargetDummyBuild_draw, VTABLE_mindustry_world_blocks_defense_TargetDummy$TargetDummyBuild_draw, "()V", 1 },
	{ "drawSelect", (intptr_t) M_mindustry_world_blocks_defense_TargetDummy$TargetDummyBuild_drawSelect, VTABLE_mindustry_world_blocks_defense_TargetDummy$TargetDummyBuild_drawSelect, "()V", 1 },
	{ "displayDPS", (intptr_t) M_mindustry_world_blocks_defense_TargetDummy$TargetDummyBuild_displayDPS_boolean_R_java_lang_String, VTABLE_mindustry_world_blocks_defense_TargetDummy$TargetDummyBuild_displayDPS_boolean_R_java_lang_String, "(Z)Ljava/lang/String;", 1 },
	{ "displayTotal", (intptr_t) M_mindustry_world_blocks_defense_TargetDummy$TargetDummyBuild_displayTotal_R_java_lang_String, VTABLE_mindustry_world_blocks_defense_TargetDummy$TargetDummyBuild_displayTotal_R_java_lang_String, "()Ljava/lang/String;", 1 },
	{ "displayHits", (intptr_t) M_mindustry_world_blocks_defense_TargetDummy$TargetDummyBuild_displayHits_R_java_lang_String, VTABLE_mindustry_world_blocks_defense_TargetDummy$TargetDummyBuild_displayHits_R_java_lang_String, "()Ljava/lang/String;", 1 },
	{ "collide", (intptr_t) M_mindustry_world_blocks_defense_TargetDummy$TargetDummyBuild_collide_mindustry_gen_Bullet_R_boolean, VTABLE_mindustry_world_blocks_defense_TargetDummy$TargetDummyBuild_collide_mindustry_gen_Bullet_R_boolean, "(Lmindustry/gen/Bullet;)Z", 1 },
	{ "collision", (intptr_t) M_mindustry_world_blocks_defense_TargetDummy$TargetDummyBuild_collision_mindustry_gen_Bullet_R_boolean, VTABLE_mindustry_world_blocks_defense_TargetDummy$TargetDummyBuild_collision_mindustry_gen_Bullet_R_boolean, "(Lmindustry/gen/Bullet;)Z", 1 },
	{ "dummyHit", (intptr_t) M_mindustry_world_blocks_defense_TargetDummy$TargetDummyBuild_dummyHit_float, VTABLE_mindustry_world_blocks_defense_TargetDummy$TargetDummyBuild_dummyHit_float, "(F)V", 1 },
	{ "damage", (intptr_t) M_mindustry_world_blocks_defense_TargetDummy$TargetDummyBuild_damage_float, VTABLE_mindustry_world_blocks_defense_TargetDummy$TargetDummyBuild_damage_float, "(F)V", 1 },
	{ "buildConfiguration", (intptr_t) M_mindustry_world_blocks_defense_TargetDummy$TargetDummyBuild_buildConfiguration_arc_scene_ui_layout_Table, VTABLE_mindustry_world_blocks_defense_TargetDummy$TargetDummyBuild_buildConfiguration_arc_scene_ui_layout_Table, "(Larc/scene/ui/layout/Table;)V", 1 },
	{ "configureInt", (intptr_t) M_mindustry_world_blocks_defense_TargetDummy$TargetDummyBuild_configureInt_int_int, VTABLE_mindustry_world_blocks_defense_TargetDummy$TargetDummyBuild_configureInt_int_int, "(II)V", 1 },
	{ "dummyTeam", (intptr_t) M_mindustry_world_blocks_defense_TargetDummy$TargetDummyBuild_dummyTeam_R_int, VTABLE_mindustry_world_blocks_defense_TargetDummy$TargetDummyBuild_dummyTeam_R_int, "()I", 1 },
	{ "config", (intptr_t) M_mindustry_world_blocks_defense_TargetDummy$TargetDummyBuild_config_R_Array1_int, VTABLE_mindustry_world_blocks_defense_TargetDummy$TargetDummyBuild_config_R_Array1_int, "()[I", 1 },
	{ "write", (intptr_t) M_mindustry_world_blocks_defense_TargetDummy$TargetDummyBuild_write_arc_util_io_Writes, VTABLE_mindustry_world_blocks_defense_TargetDummy$TargetDummyBuild_write_arc_util_io_Writes, "(Larc/util/io/Writes;)V", 1 },
	{ "read", (intptr_t) M_mindustry_world_blocks_defense_TargetDummy$TargetDummyBuild_read_arc_util_io_Reads_byte, VTABLE_mindustry_world_blocks_defense_TargetDummy$TargetDummyBuild_read_arc_util_io_Reads_byte, "(Larc/util/io/Reads;B)V", 1 },
	{ "config", (intptr_t) M_mindustry_world_blocks_defense_TargetDummy$TargetDummyBuild_config_R_java_lang_Object, VTABLE_mindustry_world_blocks_defense_TargetDummy$TargetDummyBuild_config_R_java_lang_Object, "()Ljava/lang/Object;", 4161 },
	{ "lambda$buildConfiguration$0", (intptr_t) M_mindustry_world_blocks_defense_TargetDummy$TargetDummyBuild_lambda$buildConfiguration$0_arc_scene_ui_layout_Table, VTABLE_mindustry_world_blocks_defense_TargetDummy$TargetDummyBuild_lambda$buildConfiguration$0_arc_scene_ui_layout_Table, "(Larc/scene/ui/layout/Table;)V", 4098 },
	{ "lambda$buildConfiguration$7", (intptr_t) SM_mindustry_world_blocks_defense_TargetDummy$TargetDummyBuild_lambda$buildConfiguration$7_java_lang_String_R_boolean, 0, "(Ljava/lang/String;)Z", 4106 },
	{ "lambda$buildConfiguration$6", (intptr_t) M_mindustry_world_blocks_defense_TargetDummy$TargetDummyBuild_lambda$buildConfiguration$6_java_lang_String, VTABLE_mindustry_world_blocks_defense_TargetDummy$TargetDummyBuild_lambda$buildConfiguration$6_java_lang_String, "(Ljava/lang/String;)V", 4098 },
	{ "lambda$buildConfiguration$5", (intptr_t) M_mindustry_world_blocks_defense_TargetDummy$TargetDummyBuild_lambda$buildConfiguration$5_java_lang_String, VTABLE_mindustry_world_blocks_defense_TargetDummy$TargetDummyBuild_lambda$buildConfiguration$5_java_lang_String, "(Ljava/lang/String;)V", 4098 },
	{ "lambda$buildConfiguration$4", (intptr_t) SM_mindustry_world_blocks_defense_TargetDummy$TargetDummyBuild_lambda$buildConfiguration$4_java_lang_String_R_boolean, 0, "(Ljava/lang/String;)Z", 4106 },
	{ "lambda$buildConfiguration$3", (intptr_t) M_mindustry_world_blocks_defense_TargetDummy$TargetDummyBuild_lambda$buildConfiguration$3_java_lang_String, VTABLE_mindustry_world_blocks_defense_TargetDummy$TargetDummyBuild_lambda$buildConfiguration$3_java_lang_String, "(Ljava/lang/String;)V", 4098 },
	{ "lambda$buildConfiguration$2", (intptr_t) M_mindustry_world_blocks_defense_TargetDummy$TargetDummyBuild_lambda$buildConfiguration$2_boolean, VTABLE_mindustry_world_blocks_defense_TargetDummy$TargetDummyBuild_lambda$buildConfiguration$2_boolean, "(Z)V", 4098 },
	{ "lambda$buildConfiguration$1", (intptr_t) M_mindustry_world_blocks_defense_TargetDummy$TargetDummyBuild_lambda$buildConfiguration$1_boolean, VTABLE_mindustry_world_blocks_defense_TargetDummy$TargetDummyBuild_lambda$buildConfiguration$1_boolean, "(Z)V", 4098 },
};

Class class_mindustry_world_blocks_defense_TargetDummy$TargetDummyBuild{
		.nativeName = (intptr_t) "mindustry/world/blocks/defense/TargetDummy$TargetDummyBuild",
		.parentClass = (intptr_t) &class_mindustry_gen_Building,
		.size = sizeof(mindustry_world_blocks_defense_TargetDummy$TargetDummyBuild),
		.classVtable = (intptr_t) vtable_mindustry_world_blocks_defense_TargetDummy$TargetDummyBuild,
		.staticInitializer = (intptr_t) clinit_mindustry_world_blocks_defense_TargetDummy$TargetDummyBuild,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_mindustry_world_blocks_defense_TargetDummy$TargetDummyBuild,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) &class_mindustry_world_blocks_defense_TargetDummy,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 33,
		.interfaceCount = 1,
		.nativeInterfaces = (intptr_t) interfaces,
		.fieldCount = 16,
		.nativeFields = (intptr_t) fields,
		.methodCount = 29,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 324,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_mindustry_world_blocks_defense_TargetDummy$TargetDummyBuild = registerClass(&class_mindustry_world_blocks_defense_TargetDummy$TargetDummyBuild);

}

