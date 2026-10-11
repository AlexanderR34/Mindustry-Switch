#include "mindustry/world/blocks/defense/BuildTurret_BuildTurretBuild.h"
#include "mindustry/world/blocks/ConstructBlock_ConstructBuild.h"
#include "mindustry/logic/LAccess.h"
#include "arc/graphics/Color.h"
#include "arc/graphics/g2d/Draw.h"
#include "java/lang/reflect/Constructor.h"
#include "arc/struct/Seq.h"
#include "java/lang/reflect/Method.h"
#include "mindustry/entities/units/BuildPlan.h"
#include "mindustry/world/Tile.h"
#include "arc/math/geom/Position.h"
#include "mindustry/gen/Healthc.h"
#include "arc/func/Boolf.h"
#include "mindustry/world/blocks/defense/BuildTurret_2.h"
#include "mindustry/world/blocks/defense/BuildTurret.h"
#include "arc/math/Mathf.h"
#include "java/lang/reflect/Field.h"
#include "mindustry/gen/Unit.h"
#include "java/util/Iterator.h"
#include "mindustry/world/blocks/defense/BuildTurret_BuildTurretBuild_invoke_arc_func_Boolf_3.h"
#include "mindustry/world/blocks/defense/BuildTurret_BuildTurretBuild_invoke_arc_func_Boolf_2.h"
#include "arc/struct/Queue.h"
#include "arc/util/Nullable.h"
#include "arc/util/Interval.h"
#include "mindustry/world/modules/ItemModule.h"
#include "mindustry/gen/Building.h"
#include "java/lang/Object.h"
#include "mindustry/gen/Builderc.h"
#include "mindustry/gen/BlockUnitc.h"
#include "mindustry/entities/Units.h"
#include "mindustry/io/TypeIO.h"
#include "arc/util/io/Writes.h"
#include "mindustry/world/blocks/defense/turrets/BaseTurret_BaseTurretBuild.h"
#include "mindustry/world/Block.h"
#include "mindustry/game/Rules.h"
#include "mindustry/gen/Rotc.h"
#include "mindustry/ui/Displayable.h"
#include "mindustry/world/blocks/RotBlock.h"
#include "mindustry/gen/Unitc.h"
#include "arc/func/Cons.h"
#include "mindustry/game/Rules_TeamRule.h"
#include "mindustry/gen/Teamc.h"
#include "arc/graphics/g2d/TextureRegion.h"
#include "java/lang/annotation/Annotation.h"
#include "mindustry/game/Teams_TeamData.h"
#include "java/lang/Enum.h"
#include "mindustry/type/UnitType.h"
#include "mindustry/world/blocks/ControlBlock.h"
#include "mindustry/game/Teams_BlockPlan.h"
#include "arc/util/io/Reads.h"
#include "mindustry/world/blocks/defense/BuildTurret_BuildTurretBuild_invoke_arc_func_Cons_1.h"
#include "mindustry/gen/Player.h"
#include "mindustry/world/blocks/defense/turrets/BaseTurret.h"
#include "mindustry/gen/Statusc.h"
#include "mindustry/graphics/Drawf.h"
#include "mindustry/world/blocks/defense/BuildTurret_BuildTurretBuild.h"
#include "mindustry/game/Team.h"
#include "java/lang/Class.h"
#include "mindustry/Vars.h"
#include "mindustry/core/GameState.h"
#include "mindustry/core/World.h"
#include "mindustry/world/Build.h"

extern "C" {


void mark_mindustry_world_blocks_defense_BuildTurret$BuildTurretBuild(jobject object, jint mark, jint depth) {
	if (!object) {
		return;
	}
	if (depth > GC_DEPTH_ALWAYS && (object->gcMark < GC_MARK_START || object->gcMark == mark))
		return;
	if (depth > MAX_GC_MARK_DEPTH) {
		markDeepObject(object);
		return;
	}
	mark_mindustry_world_blocks_defense_turrets_BaseTurret$BaseTurretBuild(object, mark, depth);
	if (object->gcMark >= GC_MARK_START)
		object->gcMark = mark;
	auto self = (mindustry_world_blocks_defense_BuildTurret$BuildTurretBuild *) object;
	if (self->F_unit)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_unit)->clazz)->markFunction)((jobject) self->F_unit, mark, depth + 1);
	if (self->F_following)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_following)->clazz)->markFunction)((jobject) self->F_following, mark, depth + 1);
	if (self->F_lastPlan)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_lastPlan)->clazz)->markFunction)((jobject) self->F_lastPlan, mark, depth + 1);
	if (self->F_this$0)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_this$0)->clazz)->markFunction)((jobject) self->F_this$0, mark, depth + 1);
}

void clinit_mindustry_world_blocks_defense_BuildTurret$BuildTurretBuild(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	clinit_mindustry_world_blocks_defense_turrets_BaseTurret$BaseTurretBuild(ctx);
}

void init_mindustry_world_blocks_defense_BuildTurret$BuildTurretBuild_mindustry_world_blocks_defense_BuildTurret(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/defense/BuildTurret$BuildTurretBuild:<init>", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_world_blocks_defense_BuildTurret$BuildTurretBuild(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(92);
	((mindustry_world_blocks_defense_BuildTurret$BuildTurretBuild *) NULL_CHECK((frame[0].o)))->F_this$0 = (jref) (frame[1].o);
	init_mindustry_world_blocks_defense_turrets_BaseTurret$BaseTurretBuild_mindustry_world_blocks_defense_turrets_BaseTurret(ctx, (frame[0].o), (frame[1].o));
	LINE_NUMBER(93);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((mindustry_world_blocks_defense_BuildTurret$BuildTurretBuild *) NULL_CHECK((frame[0].o)))->F_this$0;
	sp[1].o = (jobject)((mindustry_world_blocks_defense_BuildTurret *) NULL_CHECK(sp[1].o))->F_unitType;
	sp[2].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_team;
	sp[1].o = (jobject)((func_mindustry_type_UnitType_create_mindustry_game_Team_R_mindustry_gen_Unit) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_mindustry_type_UnitType_create_mindustry_game_Team_R_mindustry_gen_Unit])(ctx, sp[1].o, sp[2].o);
	((mindustry_world_blocks_defense_BuildTurret$BuildTurretBuild *) NULL_CHECK(sp[0].o))->F_unit = (jref) (checkCast(ctx, &class_mindustry_gen_BlockUnitc, sp[1].o));
	LINE_NUMBER(99);
	sp[0].o = (jobject)((mindustry_world_blocks_defense_BuildTurret$BuildTurretBuild *) NULL_CHECK((frame[0].o)))->F_unit;
	((func_mindustry_gen_Rotc_rotation_float) resolveInterfaceMethod(ctx, &class_mindustry_gen_Rotc, INDEX_mindustry_gen_Rotc_rotation_float, sp[0].o))(ctx, sp[0].o, (jfloat(90.0f)));
	LINE_NUMBER(92);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jbool M_mindustry_world_blocks_defense_BuildTurret$BuildTurretBuild_canControl_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/defense/BuildTurret$BuildTurretBuild:canControl", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(104);
	popStackFrame(ctx);
	return (jint(1));
	}

	popStackFrame(ctx);
}

jfloat M_mindustry_world_blocks_defense_BuildTurret$BuildTurretBuild_buildRotation_R_float(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/defense/BuildTurret$BuildTurretBuild:buildRotation", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(109);
	sp[0].o = (jobject)((mindustry_world_blocks_defense_BuildTurret$BuildTurretBuild *) NULL_CHECK((frame[0].o)))->F_unit;
	jfloat temp0 = (jfloat)((func_mindustry_gen_Rotc_rotation_R_float) resolveInterfaceMethod(ctx, &class_mindustry_gen_Rotc, INDEX_mindustry_gen_Rotc_rotation_R_float, sp[0].o))(ctx, sp[0].o);
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jobject M_mindustry_world_blocks_defense_BuildTurret$BuildTurretBuild_unit_R_mindustry_gen_Unit(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/defense/BuildTurret$BuildTurretBuild:unit", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(115);
	sp[0].o = (jobject)((mindustry_world_blocks_defense_BuildTurret$BuildTurretBuild *) NULL_CHECK((frame[0].o)))->F_unit;
	((func_mindustry_gen_BlockUnitc_tile_mindustry_gen_Building) resolveInterfaceMethod(ctx, &class_mindustry_gen_BlockUnitc, INDEX_mindustry_gen_BlockUnitc_tile_mindustry_gen_Building, sp[0].o))(ctx, sp[0].o, (frame[0].o));
	LINE_NUMBER(116);
	sp[0].o = (jobject)((mindustry_world_blocks_defense_BuildTurret$BuildTurretBuild *) NULL_CHECK((frame[0].o)))->F_unit;
	sp[1].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_team;
	((func_mindustry_gen_BlockUnitc_team_mindustry_game_Team) resolveInterfaceMethod(ctx, &class_mindustry_gen_BlockUnitc, INDEX_mindustry_gen_BlockUnitc_team_mindustry_game_Team, sp[0].o))(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(117);
	sp[0].o = (jobject)((mindustry_world_blocks_defense_BuildTurret$BuildTurretBuild *) NULL_CHECK((frame[0].o)))->F_unit;
	popStackFrame(ctx);
	return (checkCast(ctx, &class_mindustry_gen_Unit, sp[0].o));
	}

	popStackFrame(ctx);
}

void M_mindustry_world_blocks_defense_BuildTurret$BuildTurretBuild_updateTile(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[13];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/defense/BuildTurret$BuildTurretBuild:updateTile", 13 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(122);
	sp[0].o = (jobject)((mindustry_world_blocks_defense_BuildTurret$BuildTurretBuild *) NULL_CHECK((frame[0].o)))->F_unit;
	((func_mindustry_gen_BlockUnitc_tile_mindustry_gen_Building) resolveInterfaceMethod(ctx, &class_mindustry_gen_BlockUnitc, INDEX_mindustry_gen_BlockUnitc_tile_mindustry_gen_Building, sp[0].o))(ctx, sp[0].o, (frame[0].o));
	LINE_NUMBER(123);
	sp[0].o = (jobject)((mindustry_world_blocks_defense_BuildTurret$BuildTurretBuild *) NULL_CHECK((frame[0].o)))->F_unit;
	sp[1].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_team;
	((func_mindustry_gen_BlockUnitc_team_mindustry_game_Team) resolveInterfaceMethod(ctx, &class_mindustry_gen_BlockUnitc, INDEX_mindustry_gen_BlockUnitc_team_mindustry_game_Team, sp[0].o))(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(126);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((mindustry_world_blocks_defense_BuildTurret$BuildTurretBuild *) NULL_CHECK((frame[0].o)))->F_unit;
	jfloat temp0 = (jfloat)((func_mindustry_gen_Rotc_rotation_R_float) resolveInterfaceMethod(ctx, &class_mindustry_gen_Rotc, INDEX_mindustry_gen_Rotc_rotation_R_float, sp[1].o))(ctx, sp[1].o);
	((mindustry_world_blocks_defense_turrets_BaseTurret$BaseTurretBuild *) NULL_CHECK(sp[0].o))->F_rotation = temp0;
	LINE_NUMBER(128);
	sp[0].o = (jobject)((mindustry_world_blocks_defense_BuildTurret$BuildTurretBuild *) NULL_CHECK((frame[0].o)))->F_unit;
	jint temp1 = (jint)((func_mindustry_gen_Builderc_activelyBuilding_R_boolean) resolveInterfaceMethod(ctx, &class_mindustry_gen_Builderc, INDEX_mindustry_gen_Builderc_activelyBuilding_R_boolean, sp[0].o))(ctx, sp[0].o);
	if (temp1 == 0) goto label_4;
	}
	{
	LINE_NUMBER(129);
	sp[0].o = (jobject)((mindustry_world_blocks_defense_BuildTurret$BuildTurretBuild *) NULL_CHECK((frame[0].o)))->F_unit;
	sp[1].o = frame[0].o;
	sp[2].o = (jobject)((mindustry_world_blocks_defense_BuildTurret$BuildTurretBuild *) NULL_CHECK((frame[0].o)))->F_unit;
	sp[2].o = (jobject)((func_mindustry_gen_Builderc_buildPlan_R_mindustry_entities_units_BuildPlan) resolveInterfaceMethod(ctx, &class_mindustry_gen_Builderc, INDEX_mindustry_gen_Builderc_buildPlan_R_mindustry_entities_units_BuildPlan, sp[2].o))(ctx, sp[2].o);
	jfloat temp0 = (jfloat)((func_mindustry_world_blocks_defense_BuildTurret$BuildTurretBuild_angleTo_arc_math_geom_Position_R_float) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_mindustry_world_blocks_defense_BuildTurret$BuildTurretBuild_angleTo_arc_math_geom_Position_R_float])(ctx, sp[1].o, sp[2].o);
	((func_mindustry_gen_Unitc_lookAt_float) resolveInterfaceMethod(ctx, &class_mindustry_gen_Unitc, INDEX_mindustry_gen_Unitc_lookAt_float, sp[0].o))(ctx, sp[0].o, temp0);
	}
label_4:;
	{
	LINE_NUMBER(132);
	jint temp0 = (jint)((func_mindustry_world_blocks_defense_BuildTurret$BuildTurretBuild_checkSuppression_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_world_blocks_defense_BuildTurret$BuildTurretBuild_checkSuppression_R_boolean])(ctx, (frame[0].o));
	if (temp0 == 0) goto label_6;
	}
	{
	LINE_NUMBER(133);
	sp[0].o = frame[0].o;
	sp[1].o = frame[0].o;
	jfloat temp0 = jfloat(0);
	((mindustry_gen_Building *) NULL_CHECK(sp[1].o))->F_potentialEfficiency = temp0;
	((mindustry_gen_Building *) NULL_CHECK(sp[0].o))->F_efficiency = temp0;
	}
label_6:;
	{
	LINE_NUMBER(136);
	sp[0].o = (jobject)((mindustry_world_blocks_defense_BuildTurret$BuildTurretBuild *) NULL_CHECK((frame[0].o)))->F_unit;
	((func_mindustry_gen_Statusc_buildSpeedMultiplier_float) resolveInterfaceMethod(ctx, &class_mindustry_gen_Statusc, INDEX_mindustry_gen_Statusc_buildSpeedMultiplier_float, sp[0].o))(ctx, sp[0].o, (((jfloat)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_potentialEfficiency) * ((jfloat)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_timeScale)));
	LINE_NUMBER(137);
	sp[0].o = (jobject)((mindustry_world_blocks_defense_BuildTurret$BuildTurretBuild *) NULL_CHECK((frame[0].o)))->F_unit;
	((func_mindustry_gen_Statusc_speedMultiplier_float) resolveInterfaceMethod(ctx, &class_mindustry_gen_Statusc, INDEX_mindustry_gen_Statusc_speedMultiplier_float, sp[0].o))(ctx, sp[0].o, (((jfloat)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_potentialEfficiency) * ((jfloat)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_timeScale)));
	LINE_NUMBER(139);
	sp[0].o = frame[0].o;
	jfloat temp0 = (jfloat)((mindustry_world_blocks_defense_BuildTurret$BuildTurretBuild *) NULL_CHECK((frame[0].o)))->F_warmup;
	sp[1].o = (jobject)((mindustry_world_blocks_defense_BuildTurret$BuildTurretBuild *) NULL_CHECK((frame[0].o)))->F_unit;
	jint temp1 = (jint)((func_mindustry_gen_Builderc_activelyBuilding_R_boolean) resolveInterfaceMethod(ctx, &class_mindustry_gen_Builderc, INDEX_mindustry_gen_Builderc_activelyBuilding_R_boolean, sp[1].o))(ctx, sp[1].o);
	sp[1].f = temp0;
	sp += 2;
	if (temp1 == 0) goto label_10;
	}
	{
	jfloat temp0 = (jfloat)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_efficiency;
	sp[0].f = temp0;
	sp += 1;
	goto label_11;
	}
label_10:;
	INST_FCONST(0);
label_11:;
	{
	sp -= 3;
	jfloat temp0 = (jfloat)SM_arc_math_Mathf_lerpDelta_float_float_float_R_float(ctx, sp[1].f, sp[2].f, (jfloat(0.1f)));
	((mindustry_world_blocks_defense_BuildTurret$BuildTurretBuild *) NULL_CHECK(sp[0].o))->F_warmup = temp0;
	LINE_NUMBER(141);
	jint temp1 = (jint)((func_mindustry_world_blocks_defense_BuildTurret$BuildTurretBuild_isControlled_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_world_blocks_defense_BuildTurret$BuildTurretBuild_isControlled_R_boolean])(ctx, (frame[0].o));
	if (temp1 != 0) goto label_13;
	}
	{
	LINE_NUMBER(142);
	sp[0].o = (jobject)((mindustry_world_blocks_defense_BuildTurret$BuildTurretBuild *) NULL_CHECK((frame[0].o)))->F_unit;
	((func_mindustry_gen_Builderc_updateBuilding_boolean) resolveInterfaceMethod(ctx, &class_mindustry_gen_Builderc, INDEX_mindustry_gen_Builderc_updateBuilding_boolean, sp[0].o))(ctx, sp[0].o, (jint(1)));
	LINE_NUMBER(144);
	sp[0].o = (jobject)((mindustry_world_blocks_defense_BuildTurret$BuildTurretBuild *) NULL_CHECK((frame[0].o)))->F_following;
	if (sp[0].o == nullptr) goto label_16;
	}
	{
	LINE_NUMBER(146);
	sp[0].o = (jobject)((mindustry_world_blocks_defense_BuildTurret$BuildTurretBuild *) NULL_CHECK((frame[0].o)))->F_following;
	jint temp0 = (jint)((func_mindustry_gen_Unit_isValid_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_gen_Unit_isValid_R_boolean])(ctx, sp[0].o);
	if (temp0 == 0) goto label_18;
	}
	{
	sp[0].o = (jobject)((mindustry_world_blocks_defense_BuildTurret$BuildTurretBuild *) NULL_CHECK((frame[0].o)))->F_following;
	jint temp0 = (jint)((func_mindustry_gen_Unit_activelyBuilding_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_gen_Unit_activelyBuilding_R_boolean])(ctx, sp[0].o);
	if (temp0 != 0) goto label_19;
	}
label_18:;
	{
	LINE_NUMBER(147);
	((mindustry_world_blocks_defense_BuildTurret$BuildTurretBuild *) NULL_CHECK((frame[0].o)))->F_following = (jref) (jobject(nullptr));
	LINE_NUMBER(148);
	sp[0].o = (jobject)((mindustry_world_blocks_defense_BuildTurret$BuildTurretBuild *) NULL_CHECK((frame[0].o)))->F_unit;
	sp[0].o = (jobject)((func_mindustry_gen_Builderc_plans_R_arc_struct_Queue) resolveInterfaceMethod(ctx, &class_mindustry_gen_Builderc, INDEX_mindustry_gen_Builderc_plans_R_arc_struct_Queue, sp[0].o))(ctx, sp[0].o);
	((func_arc_struct_Queue_clear) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Queue_clear])(ctx, sp[0].o);
	goto label_21;
	}
label_19:;
	{
	LINE_NUMBER(151);
	sp[0].o = (jobject)((mindustry_world_blocks_defense_BuildTurret$BuildTurretBuild *) NULL_CHECK((frame[0].o)))->F_unit;
	sp[0].o = (jobject)((func_mindustry_gen_Builderc_plans_R_arc_struct_Queue) resolveInterfaceMethod(ctx, &class_mindustry_gen_Builderc, INDEX_mindustry_gen_Builderc_plans_R_arc_struct_Queue, sp[0].o))(ctx, sp[0].o);
	((func_arc_struct_Queue_clear) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Queue_clear])(ctx, sp[0].o);
	LINE_NUMBER(152);
	sp[0].o = (jobject)((mindustry_world_blocks_defense_BuildTurret$BuildTurretBuild *) NULL_CHECK((frame[0].o)))->F_unit;
	sp[0].o = (jobject)((func_mindustry_gen_Builderc_plans_R_arc_struct_Queue) resolveInterfaceMethod(ctx, &class_mindustry_gen_Builderc, INDEX_mindustry_gen_Builderc_plans_R_arc_struct_Queue, sp[0].o))(ctx, sp[0].o);
	sp[1].o = (jobject)((mindustry_world_blocks_defense_BuildTurret$BuildTurretBuild *) NULL_CHECK((frame[0].o)))->F_following;
	sp[1].o = (jobject)((func_mindustry_gen_Unit_buildPlan_R_mindustry_entities_units_BuildPlan) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_mindustry_gen_Unit_buildPlan_R_mindustry_entities_units_BuildPlan])(ctx, sp[1].o);
	((func_arc_struct_Queue_addFirst_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Queue_addFirst_java_lang_Object])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(153);
	((mindustry_world_blocks_defense_BuildTurret$BuildTurretBuild *) NULL_CHECK((frame[0].o)))->F_lastPlan = (jref) (jobject(nullptr));
	goto label_21;
	}
label_16:;
	{
	LINE_NUMBER(156);
	sp[0].o = (jobject)((mindustry_world_blocks_defense_BuildTurret$BuildTurretBuild *) NULL_CHECK((frame[0].o)))->F_unit;
	sp[0].o = (jobject)((func_mindustry_gen_Builderc_buildPlan_R_mindustry_entities_units_BuildPlan) resolveInterfaceMethod(ctx, &class_mindustry_gen_Builderc, INDEX_mindustry_gen_Builderc_buildPlan_R_mindustry_entities_units_BuildPlan, sp[0].o))(ctx, sp[0].o);
	if (sp[0].o != nullptr) goto label_24;
	}
	{
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((mindustry_world_blocks_defense_BuildTurret$BuildTurretBuild *) NULL_CHECK((frame[0].o)))->F_this$0;
	jint temp0 = (jint)((mindustry_world_blocks_defense_BuildTurret *) NULL_CHECK(sp[1].o))->F_timerTarget;
	sp[1].o = (jobject)((mindustry_world_blocks_defense_BuildTurret$BuildTurretBuild *) NULL_CHECK((frame[0].o)))->F_this$0;
	jint temp1 = (jint)((func_mindustry_world_blocks_defense_BuildTurret$BuildTurretBuild_timer_int_float_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_blocks_defense_BuildTurret$BuildTurretBuild_timer_int_float_R_boolean])(ctx, sp[0].o, temp0, (jfloat(((jint)((mindustry_world_blocks_defense_BuildTurret *) NULL_CHECK(sp[1].o))->F_targetInterval))));
	if (temp1 == 0) goto label_24;
	}
	{
	LINE_NUMBER(157);
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_team;
	sp[0].o = (jobject)((func_mindustry_game_Team_data_R_mindustry_game_Teams$TeamData) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_game_Team_data_R_mindustry_game_Teams$TeamData])(ctx, sp[0].o);
	sp[0].o = (jobject)((mindustry_game_Teams$TeamData *) NULL_CHECK(sp[0].o))->F_plans;
	frame[1].o = sp[0].o;
	LINE_NUMBER(158);
	frame[2].i = (jint(0));
	}
label_27:;
	{
	if ((frame[2].i) >= ((jint)((arc_struct_Queue *) NULL_CHECK((frame[1].o)))->F_size)) goto label_28;
	}
	{
	LINE_NUMBER(159);
	sp[0].o = (jobject)((func_arc_struct_Queue_get_int_R_java_lang_Object) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_struct_Queue_get_int_R_java_lang_Object])(ctx, (frame[1].o), (frame[2].i));
	frame[3].o = (checkCast(ctx, &class_mindustry_game_Teams$BlockPlan, sp[0].o));
	LINE_NUMBER(160);
	sp[0].o = frame[0].o;
	jfloat temp0 = jfloat((((jint)((mindustry_game_Teams$BlockPlan *) NULL_CHECK((frame[3].o)))->F_x) * (8)));
	jfloat temp1 = jfloat((((jint)((mindustry_game_Teams$BlockPlan *) NULL_CHECK((frame[3].o)))->F_y) * (8)));
	sp[1].o = (jobject)((mindustry_world_blocks_defense_BuildTurret$BuildTurretBuild *) NULL_CHECK((frame[0].o)))->F_this$0;
	jint temp2 = (jint)((func_mindustry_world_blocks_defense_BuildTurret$BuildTurretBuild_within_float_float_float_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_blocks_defense_BuildTurret$BuildTurretBuild_within_float_float_float_R_boolean])(ctx, sp[0].o, temp0, temp1, ((jfloat)((mindustry_world_blocks_defense_turrets_BaseTurret *) NULL_CHECK(sp[1].o))->F_range));
	if (temp2 == 0) goto label_31;
	}
	{
	LINE_NUMBER(161);
	sp[0].o = (jobject)((mindustry_game_Teams$BlockPlan *) NULL_CHECK((frame[3].o)))->F_block;
	frame[4].o = sp[0].o;
	LINE_NUMBER(163);
	sp[0].o = frame[4].o;
	sp[1].o = (jobject)((mindustry_world_blocks_defense_BuildTurret$BuildTurretBuild *) NULL_CHECK((frame[0].o)))->F_unit;
	sp[1].o = (jobject)((func_mindustry_gen_Teamc_team_R_mindustry_game_Team) resolveInterfaceMethod(ctx, &class_mindustry_gen_Teamc, INDEX_mindustry_gen_Teamc_team_R_mindustry_game_Team, sp[1].o))(ctx, sp[1].o);
	jint temp0 = (jint)SM_mindustry_world_Build_validPlace_mindustry_world_Block_mindustry_game_Team_int_int_int_R_boolean(ctx, sp[0].o, sp[1].o, ((jint)((mindustry_game_Teams$BlockPlan *) NULL_CHECK((frame[3].o)))->F_x), ((jint)((mindustry_game_Teams$BlockPlan *) NULL_CHECK((frame[3].o)))->F_y), ((jint)((mindustry_game_Teams$BlockPlan *) NULL_CHECK((frame[3].o)))->F_rotation));
	if (temp0 == 0) goto label_31;
	}
	{
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	sp[0].o = (jobject)((mindustry_core_GameState *) NULL_CHECK(sp[0].o))->F_rules;
	if (((jint)((mindustry_game_Rules *) NULL_CHECK(sp[0].o))->F_infiniteResources) != 0) goto label_34;
	}
	{
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_team;
	sp[0].o = (jobject)((func_mindustry_game_Team_rules_R_mindustry_game_Rules$TeamRule) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_game_Team_rules_R_mindustry_game_Rules$TeamRule])(ctx, sp[0].o);
	if (((jint)((mindustry_game_Rules$TeamRule *) NULL_CHECK(sp[0].o))->F_infiniteResources) != 0) goto label_34;
	}
	{
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_team;
	sp[0].o = (jobject)((func_mindustry_game_Team_items_R_mindustry_world_modules_ItemModule) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_game_Team_items_R_mindustry_world_modules_ItemModule])(ctx, sp[0].o);
	sp[1].o = (jobject)((mindustry_world_Block *) NULL_CHECK((frame[4].o)))->F_requirements;
	clinit_mindustry_Vars(ctx);
	sp[2].o = (jobject)SF_mindustry_Vars_state;
	sp[2].o = (jobject)((mindustry_core_GameState *) NULL_CHECK(sp[2].o))->F_rules;
	jint temp0 = (jint)((func_mindustry_world_modules_ItemModule_has_Array1_mindustry_type_ItemStack_float_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_modules_ItemModule_has_Array1_mindustry_type_ItemStack_float_R_boolean])(ctx, sp[0].o, sp[1].o, ((jfloat)((mindustry_game_Rules *) NULL_CHECK(sp[2].o))->F_buildCostMultiplier));
	if (temp0 == 0) goto label_31;
	}
label_34:;
	{
	LINE_NUMBER(164);
	sp[0].o = (jobject)((mindustry_world_blocks_defense_BuildTurret$BuildTurretBuild *) NULL_CHECK((frame[0].o)))->F_unit;
	clinit_mindustry_entities_units_BuildPlan(ctx);
	sp[1].o = gcAlloc(ctx, &class_mindustry_entities_units_BuildPlan);
	jint temp0 = (jint)((mindustry_game_Teams$BlockPlan *) NULL_CHECK((frame[3].o)))->F_x;
	jint temp1 = (jint)((mindustry_game_Teams$BlockPlan *) NULL_CHECK((frame[3].o)))->F_y;
	jint temp2 = (jint)((mindustry_game_Teams$BlockPlan *) NULL_CHECK((frame[3].o)))->F_rotation;
	sp[2].o = (jobject)((mindustry_game_Teams$BlockPlan *) NULL_CHECK((frame[3].o)))->F_block;
	sp[3].o = (jobject)((mindustry_game_Teams$BlockPlan *) NULL_CHECK((frame[3].o)))->F_config;
	init_mindustry_entities_units_BuildPlan_int_int_int_mindustry_world_Block_java_lang_Object(ctx, sp[1].o, temp0, temp1, temp2, sp[2].o, sp[3].o);
	((func_mindustry_gen_Builderc_addBuild_mindustry_entities_units_BuildPlan) resolveInterfaceMethod(ctx, &class_mindustry_gen_Builderc, INDEX_mindustry_gen_Builderc_addBuild_mindustry_entities_units_BuildPlan, sp[0].o))(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(166);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((func_arc_struct_Queue_removeIndex_int_R_java_lang_Object) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_struct_Queue_removeIndex_int_R_java_lang_Object])(ctx, (frame[1].o), (frame[2].i));
	((func_arc_struct_Queue_addLast_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Queue_addLast_java_lang_Object])(ctx, sp[0].o, (checkCast(ctx, &class_mindustry_game_Teams$BlockPlan, sp[1].o)));
	LINE_NUMBER(167);
	((mindustry_world_blocks_defense_BuildTurret$BuildTurretBuild *) NULL_CHECK((frame[0].o)))->F_lastPlan = (jref) (frame[3].o);
	LINE_NUMBER(168);
	goto label_28;
	}
label_31:;
	{
	LINE_NUMBER(158);
	INST_IINC(2, 1);
	goto label_27;
	}
label_28:;
	{
	LINE_NUMBER(174);
	sp[0].o = (jobject)((mindustry_world_blocks_defense_BuildTurret$BuildTurretBuild *) NULL_CHECK((frame[0].o)))->F_unit;
	sp[0].o = (jobject)((func_mindustry_gen_Builderc_buildPlan_R_mindustry_entities_units_BuildPlan) resolveInterfaceMethod(ctx, &class_mindustry_gen_Builderc, INDEX_mindustry_gen_Builderc_buildPlan_R_mindustry_entities_units_BuildPlan, sp[0].o))(ctx, sp[0].o);
	if (sp[0].o != nullptr) goto label_38;
	}
	{
	LINE_NUMBER(175);
	((mindustry_world_blocks_defense_BuildTurret$BuildTurretBuild *) NULL_CHECK((frame[0].o)))->F_following = (jref) (jobject(nullptr));
	LINE_NUMBER(176);
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_team;
	jfloat temp0 = (jfloat)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_x;
	jfloat temp1 = (jfloat)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_y;
	sp[1].o = (jobject)((mindustry_world_blocks_defense_BuildTurret$BuildTurretBuild *) NULL_CHECK((frame[0].o)))->F_this$0;
	jfloat temp2 = (jfloat)((mindustry_world_blocks_defense_turrets_BaseTurret *) NULL_CHECK(sp[1].o))->F_range;
	{ /* InvokeDynamic */
		clinit_mindustry_world_blocks_defense_BuildTurret$BuildTurretBuild_invoke_arc_func_Cons_1(ctx);
		auto proxy = (mindustry_world_blocks_defense_BuildTurret$BuildTurretBuild_invoke_arc_func_Cons_1 *) gcAlloc(ctx, &class_mindustry_world_blocks_defense_BuildTurret$BuildTurretBuild_invoke_arc_func_Cons_1);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[1].o = (jobject) proxy;
	}
	SM_mindustry_entities_Units_nearby_mindustry_game_Team_float_float_float_arc_func_Cons(ctx, sp[0].o, temp0, temp1, temp2, sp[1].o);
	}
label_38:;
	LINE_NUMBER(189);
	goto label_21;
label_24:;
	{
	sp[0].o = (jobject)((mindustry_world_blocks_defense_BuildTurret$BuildTurretBuild *) NULL_CHECK((frame[0].o)))->F_unit;
	sp[0].o = (jobject)((func_mindustry_gen_Builderc_buildPlan_R_mindustry_entities_units_BuildPlan) resolveInterfaceMethod(ctx, &class_mindustry_gen_Builderc, INDEX_mindustry_gen_Builderc_buildPlan_R_mindustry_entities_units_BuildPlan, sp[0].o))(ctx, sp[0].o);
	if (sp[0].o == nullptr) goto label_21;
	}
	{
	LINE_NUMBER(190);
	sp[0].o = (jobject)((mindustry_world_blocks_defense_BuildTurret$BuildTurretBuild *) NULL_CHECK((frame[0].o)))->F_unit;
	sp[0].o = (jobject)((func_mindustry_gen_Builderc_buildPlan_R_mindustry_entities_units_BuildPlan) resolveInterfaceMethod(ctx, &class_mindustry_gen_Builderc, INDEX_mindustry_gen_Builderc_buildPlan_R_mindustry_entities_units_BuildPlan, sp[0].o))(ctx, sp[0].o);
	frame[1].o = sp[0].o;
	LINE_NUMBER(193);
	if (((jint)((mindustry_entities_units_BuildPlan *) NULL_CHECK((frame[1].o)))->F_breaking) != 0) goto label_43;
	}
	{
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_timer;
	sp[1].o = (jobject)((mindustry_world_blocks_defense_BuildTurret$BuildTurretBuild *) NULL_CHECK((frame[0].o)))->F_this$0;
	jint temp0 = (jint)((func_arc_util_Interval_get_int_float_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_util_Interval_get_int_float_R_boolean])(ctx, sp[0].o, ((jint)((mindustry_world_blocks_defense_BuildTurret *) NULL_CHECK(sp[1].o))->F_timerTarget2), (jfloat(30.0f)));
	if (temp0 == 0) goto label_43;
	}
	{
	LINE_NUMBER(194);
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_team;
	sp[0].o = (jobject)((func_mindustry_game_Team_data_R_mindustry_game_Teams$TeamData) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_game_Team_data_R_mindustry_game_Teams$TeamData])(ctx, sp[0].o);
	sp[0].o = (jobject)((mindustry_game_Teams$TeamData *) NULL_CHECK(sp[0].o))->F_players;
	sp[0].o = (jobject)((func_arc_struct_Seq_iterator_R_java_util_Iterator) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_iterator_R_java_util_Iterator])(ctx, sp[0].o);
	frame[2].o = sp[0].o;
	}
label_45:;
	{
	jint temp0 = (jint)((func_java_util_Iterator_hasNext_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_hasNext_R_boolean, (frame[2].o)))(ctx, (frame[2].o));
	if (temp0 == 0) goto label_43;
	}
	{
	sp[0].o = (jobject)((func_java_util_Iterator_next_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_next_R_java_lang_Object, (frame[2].o)))(ctx, (frame[2].o));
	frame[3].o = (checkCast(ctx, &class_mindustry_gen_Player, sp[0].o));
	LINE_NUMBER(195);
	jint temp0 = (jint)((func_mindustry_gen_Player_isBuilder_R_boolean) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_mindustry_gen_Player_isBuilder_R_boolean])(ctx, (frame[3].o));
	if (temp0 == 0) goto label_47;
	}
	{
	sp[0].o = (jobject)((func_mindustry_gen_Player_unit_R_mindustry_gen_Unit) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_mindustry_gen_Player_unit_R_mindustry_gen_Unit])(ctx, (frame[3].o));
	jint temp0 = (jint)((func_mindustry_gen_Unit_activelyBuilding_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_gen_Unit_activelyBuilding_R_boolean])(ctx, sp[0].o);
	if (temp0 == 0) goto label_47;
	}
	{
	sp[0].o = (jobject)((func_mindustry_gen_Player_unit_R_mindustry_gen_Unit) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_mindustry_gen_Player_unit_R_mindustry_gen_Unit])(ctx, (frame[3].o));
	sp[0].o = (jobject)((func_mindustry_gen_Unit_buildPlan_R_mindustry_entities_units_BuildPlan) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_gen_Unit_buildPlan_R_mindustry_entities_units_BuildPlan])(ctx, sp[0].o);
	jint temp0 = (jint)((func_mindustry_entities_units_BuildPlan_samePos_mindustry_entities_units_BuildPlan_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_entities_units_BuildPlan_samePos_mindustry_entities_units_BuildPlan_R_boolean])(ctx, sp[0].o, (frame[1].o));
	if (temp0 == 0) goto label_47;
	}
	{
	sp[0].o = (jobject)((func_mindustry_gen_Player_unit_R_mindustry_gen_Unit) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_mindustry_gen_Player_unit_R_mindustry_gen_Unit])(ctx, (frame[3].o));
	sp[0].o = (jobject)((func_mindustry_gen_Unit_buildPlan_R_mindustry_entities_units_BuildPlan) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_gen_Unit_buildPlan_R_mindustry_entities_units_BuildPlan])(ctx, sp[0].o);
	if (((jint)((mindustry_entities_units_BuildPlan *) NULL_CHECK(sp[0].o))->F_breaking) == 0) goto label_47;
	}
	{
	LINE_NUMBER(196);
	sp[0].o = (jobject)((mindustry_world_blocks_defense_BuildTurret$BuildTurretBuild *) NULL_CHECK((frame[0].o)))->F_unit;
	sp[0].o = (jobject)((func_mindustry_gen_Builderc_plans_R_arc_struct_Queue) resolveInterfaceMethod(ctx, &class_mindustry_gen_Builderc, INDEX_mindustry_gen_Builderc_plans_R_arc_struct_Queue, sp[0].o))(ctx, sp[0].o);
	sp[0].o = (jobject)((func_arc_struct_Queue_removeFirst_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Queue_removeFirst_R_java_lang_Object])(ctx, sp[0].o);
	LINE_NUMBER(198);
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_team;
	sp[0].o = (jobject)((func_mindustry_game_Team_data_R_mindustry_game_Teams$TeamData) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_game_Team_data_R_mindustry_game_Teams$TeamData])(ctx, sp[0].o);
	sp[0].o = (jobject)((mindustry_game_Teams$TeamData *) NULL_CHECK(sp[0].o))->F_plans;
	{ /* InvokeDynamic */
		clinit_mindustry_world_blocks_defense_BuildTurret$BuildTurretBuild_invoke_arc_func_Boolf_2(ctx);
		auto proxy = (mindustry_world_blocks_defense_BuildTurret$BuildTurretBuild_invoke_arc_func_Boolf_2 *) gcAlloc(ctx, &class_mindustry_world_blocks_defense_BuildTurret$BuildTurretBuild_invoke_arc_func_Boolf_2);
		proxy->F_field0 = (jref) (frame[1].o);
		sp[1].o = (jobject) proxy;
	}
	jint temp0 = (jint)((func_arc_struct_Queue_remove_arc_func_Boolf_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Queue_remove_arc_func_Boolf_R_boolean])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(199);
	popStackFrame(ctx);
	return;
	}
label_47:;
	LINE_NUMBER(201);
	goto label_45;
label_43:;
	{
	LINE_NUMBER(205);
	sp[0].o = (jobject)((mindustry_world_blocks_defense_BuildTurret$BuildTurretBuild *) NULL_CHECK((frame[0].o)))->F_lastPlan;
	if (sp[0].o == nullptr) goto label_51;
	}
	{
	sp[0].o = (jobject)((mindustry_world_blocks_defense_BuildTurret$BuildTurretBuild *) NULL_CHECK((frame[0].o)))->F_lastPlan;
	if (((jint)((mindustry_game_Teams$BlockPlan *) NULL_CHECK(sp[0].o))->F_removed) != 0) goto label_52;
	}
label_51:;
	{
	sp[0].o = frame[1].o;
	LINE_NUMBER(206);
	sp[0].o = (jobject)((func_mindustry_entities_units_BuildPlan_tile_R_mindustry_world_Tile) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_entities_units_BuildPlan_tile_R_mindustry_world_Tile])(ctx, sp[0].o);
	if (sp[0].o == nullptr) goto label_54;
	}
	{
	sp[0].o = (jobject)((func_mindustry_entities_units_BuildPlan_tile_R_mindustry_world_Tile) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_entities_units_BuildPlan_tile_R_mindustry_world_Tile])(ctx, (frame[1].o));
	sp[0].o = (jobject)((mindustry_world_Tile *) NULL_CHECK(sp[0].o))->F_build;
	frame[4].o = sp[0].o;
	if ((isInstance(ctx, (frame[4].o), &class_mindustry_world_blocks_ConstructBlock$ConstructBuild)) == 0) goto label_54;
	}
	{
	frame[3].o = (checkCast(ctx, &class_mindustry_world_blocks_ConstructBlock$ConstructBuild, (frame[4].o)));
	sp[0].o = (jobject)((mindustry_world_blocks_ConstructBlock$ConstructBuild *) NULL_CHECK((frame[3].o)))->F_current;
	sp[1].o = (jobject)((mindustry_entities_units_BuildPlan *) NULL_CHECK((frame[1].o)))->F_block;
	if (sp[0].o == sp[1].o) goto label_56;
	}
label_54:;
	{
	if (((jint)((mindustry_entities_units_BuildPlan *) NULL_CHECK((frame[1].o)))->F_breaking) == 0) goto label_57;
	}
	{
	sp[0].o = (jobject)((mindustry_world_blocks_defense_BuildTurret$BuildTurretBuild *) NULL_CHECK((frame[0].o)))->F_unit;
	LINE_NUMBER(208);
	sp[0].o = (jobject)((func_mindustry_gen_Teamc_team_R_mindustry_game_Team) resolveInterfaceMethod(ctx, &class_mindustry_gen_Teamc, INDEX_mindustry_gen_Teamc_team_R_mindustry_game_Team, sp[0].o))(ctx, sp[0].o);
	jint temp0 = (jint)SM_mindustry_world_Build_validBreak_mindustry_game_Team_int_int_R_boolean(ctx, sp[0].o, ((jint)((mindustry_entities_units_BuildPlan *) NULL_CHECK((frame[1].o)))->F_x), ((jint)((mindustry_entities_units_BuildPlan *) NULL_CHECK((frame[1].o)))->F_y));
	if (temp0 == 0) goto label_52;
	}
	goto label_56;
label_57:;
	{
	sp[0].o = (jobject)((mindustry_entities_units_BuildPlan *) NULL_CHECK((frame[1].o)))->F_block;
	sp[1].o = (jobject)((mindustry_world_blocks_defense_BuildTurret$BuildTurretBuild *) NULL_CHECK((frame[0].o)))->F_unit;
	LINE_NUMBER(209);
	sp[1].o = (jobject)((func_mindustry_gen_Teamc_team_R_mindustry_game_Team) resolveInterfaceMethod(ctx, &class_mindustry_gen_Teamc, INDEX_mindustry_gen_Teamc_team_R_mindustry_game_Team, sp[1].o))(ctx, sp[1].o);
	jint temp0 = (jint)SM_mindustry_world_Build_validPlace_mindustry_world_Block_mindustry_game_Team_int_int_int_R_boolean(ctx, sp[0].o, sp[1].o, ((jint)((mindustry_entities_units_BuildPlan *) NULL_CHECK((frame[1].o)))->F_x), ((jint)((mindustry_entities_units_BuildPlan *) NULL_CHECK((frame[1].o)))->F_y), ((jint)((mindustry_entities_units_BuildPlan *) NULL_CHECK((frame[1].o)))->F_rotation));
	if (temp0 == 0) goto label_52;
	}
label_56:;
	INST_ICONST(1);
	goto label_60;
label_52:;
	INST_ICONST(0);
label_60:;
	{
	sp -= 1;
	frame[2].i = sp[0].i;
	LINE_NUMBER(211);
	if ((frame[2].i) != 0) goto label_62;
	}
	{
	LINE_NUMBER(213);
	sp[0].o = (jobject)((mindustry_world_blocks_defense_BuildTurret$BuildTurretBuild *) NULL_CHECK((frame[0].o)))->F_unit;
	sp[0].o = (jobject)((func_mindustry_gen_Builderc_plans_R_arc_struct_Queue) resolveInterfaceMethod(ctx, &class_mindustry_gen_Builderc, INDEX_mindustry_gen_Builderc_plans_R_arc_struct_Queue, sp[0].o))(ctx, sp[0].o);
	sp[0].o = (jobject)((func_arc_struct_Queue_removeFirst_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Queue_removeFirst_R_java_lang_Object])(ctx, sp[0].o);
	LINE_NUMBER(214);
	((mindustry_world_blocks_defense_BuildTurret$BuildTurretBuild *) NULL_CHECK((frame[0].o)))->F_lastPlan = (jref) (jobject(nullptr));
	}
label_62:;
	LINE_NUMBER(216);
	goto label_21;
label_13:;
	{
	LINE_NUMBER(218);
	((mindustry_world_blocks_defense_BuildTurret$BuildTurretBuild *) NULL_CHECK((frame[0].o)))->F_following = (jref) (jobject(nullptr));
	LINE_NUMBER(219);
	((mindustry_world_blocks_defense_BuildTurret$BuildTurretBuild *) NULL_CHECK((frame[0].o)))->F_lastPlan = (jref) (jobject(nullptr));
	}
label_21:;
	{
	LINE_NUMBER(223);
	sp[0].o = (jobject)((mindustry_world_blocks_defense_BuildTurret$BuildTurretBuild *) NULL_CHECK((frame[0].o)))->F_unit;
	sp[0].o = (jobject)((func_mindustry_gen_Builderc_plans_R_arc_struct_Queue) resolveInterfaceMethod(ctx, &class_mindustry_gen_Builderc, INDEX_mindustry_gen_Builderc_plans_R_arc_struct_Queue, sp[0].o))(ctx, sp[0].o);
	{ /* InvokeDynamic */
		clinit_mindustry_world_blocks_defense_BuildTurret$BuildTurretBuild_invoke_arc_func_Boolf_3(ctx);
		auto proxy = (mindustry_world_blocks_defense_BuildTurret$BuildTurretBuild_invoke_arc_func_Boolf_3 *) gcAlloc(ctx, &class_mindustry_world_blocks_defense_BuildTurret$BuildTurretBuild_invoke_arc_func_Boolf_3);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[1].o = (jobject) proxy;
	}
	jint temp0 = (jint)((func_arc_struct_Queue_remove_arc_func_Boolf_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Queue_remove_arc_func_Boolf_R_boolean])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(225);
	sp[0].o = (jobject)((mindustry_world_blocks_defense_BuildTurret$BuildTurretBuild *) NULL_CHECK((frame[0].o)))->F_unit;
	((func_mindustry_gen_Builderc_updateBuildLogic) resolveInterfaceMethod(ctx, &class_mindustry_gen_Builderc, INDEX_mindustry_gen_Builderc_updateBuildLogic, sp[0].o))(ctx, sp[0].o);
	LINE_NUMBER(226);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jbool M_mindustry_world_blocks_defense_BuildTurret$BuildTurretBuild_shouldConsume_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/defense/BuildTurret$BuildTurretBuild:shouldConsume", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(230);
	sp[0].o = (jobject)((mindustry_world_blocks_defense_BuildTurret$BuildTurretBuild *) NULL_CHECK((frame[0].o)))->F_unit;
	sp[0].o = (jobject)((func_mindustry_gen_Builderc_plans_R_arc_struct_Queue) resolveInterfaceMethod(ctx, &class_mindustry_gen_Builderc, INDEX_mindustry_gen_Builderc_plans_R_arc_struct_Queue, sp[0].o))(ctx, sp[0].o);
	if (((jint)((arc_struct_Queue *) NULL_CHECK(sp[0].o))->F_size) <= 0) goto label_1;
	}
	{
	jint temp0 = (jint)((func_mindustry_world_blocks_defense_BuildTurret$BuildTurretBuild_isHealSuppressed_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_world_blocks_defense_BuildTurret$BuildTurretBuild_isHealSuppressed_R_boolean])(ctx, (frame[0].o));
	if (temp0 != 0) goto label_1;
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

void M_mindustry_world_blocks_defense_BuildTurret$BuildTurretBuild_draw(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/defense/BuildTurret$BuildTurretBuild:draw", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(236);
	sp[0].o = (jobject)((mindustry_world_blocks_defense_BuildTurret$BuildTurretBuild *) NULL_CHECK((frame[0].o)))->F_this$0;
	sp[0].o = (jobject)((mindustry_world_blocks_defense_BuildTurret *) NULL_CHECK(sp[0].o))->F_baseRegion;
	SM_arc_graphics_g2d_Draw_rect_arc_graphics_g2d_TextureRegion_float_float(ctx, sp[0].o, ((jfloat)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_x), ((jfloat)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_y));
	LINE_NUMBER(237);
	SM_arc_graphics_g2d_Draw_color(ctx);
	LINE_NUMBER(239);
	SM_arc_graphics_g2d_Draw_z_float(ctx, (jfloat(50.0f)));
	LINE_NUMBER(241);
	sp[0].o = (jobject)((mindustry_world_blocks_defense_BuildTurret$BuildTurretBuild *) NULL_CHECK((frame[0].o)))->F_this$0;
	sp[0].o = (jobject)((mindustry_world_Block *) NULL_CHECK(sp[0].o))->F_region;
	jfloat temp0 = (jfloat)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_x;
	sp[1].o = (jobject)((mindustry_world_blocks_defense_BuildTurret$BuildTurretBuild *) NULL_CHECK((frame[0].o)))->F_this$0;
	jfloat temp1 = temp0 - ((jfloat)((mindustry_world_blocks_defense_BuildTurret *) NULL_CHECK(sp[1].o))->F_elevation);
	jfloat temp2 = (jfloat)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_y;
	sp[1].o = (jobject)((mindustry_world_blocks_defense_BuildTurret$BuildTurretBuild *) NULL_CHECK((frame[0].o)))->F_this$0;
	SM_mindustry_graphics_Drawf_shadow_arc_graphics_g2d_TextureRegion_float_float_float(ctx, sp[0].o, temp1, (temp2 - ((jfloat)((mindustry_world_blocks_defense_BuildTurret *) NULL_CHECK(sp[1].o))->F_elevation)), (((jfloat)((mindustry_world_blocks_defense_turrets_BaseTurret$BaseTurretBuild *) NULL_CHECK((frame[0].o)))->F_rotation) - (jfloat(90.0f))));
	LINE_NUMBER(242);
	sp[0].o = (jobject)((mindustry_world_blocks_defense_BuildTurret$BuildTurretBuild *) NULL_CHECK((frame[0].o)))->F_this$0;
	sp[0].o = (jobject)((mindustry_world_Block *) NULL_CHECK(sp[0].o))->F_region;
	SM_arc_graphics_g2d_Draw_rect_arc_graphics_g2d_TextureRegion_float_float_float(ctx, sp[0].o, ((jfloat)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_x), ((jfloat)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_y), (((jfloat)((mindustry_world_blocks_defense_turrets_BaseTurret$BaseTurretBuild *) NULL_CHECK((frame[0].o)))->F_rotation) - (jfloat(90.0f))));
	LINE_NUMBER(244);
	sp[0].o = (jobject)((mindustry_world_blocks_defense_BuildTurret$BuildTurretBuild *) NULL_CHECK((frame[0].o)))->F_this$0;
	sp[0].o = (jobject)((mindustry_world_blocks_defense_BuildTurret *) NULL_CHECK(sp[0].o))->F_glowRegion;
	jint temp3 = (jint)((func_arc_graphics_g2d_TextureRegion_found_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_g2d_TextureRegion_found_R_boolean])(ctx, sp[0].o);
	if (temp3 == 0) goto label_6;
	}
	{
	LINE_NUMBER(245);
	sp[0].o = (jobject)((mindustry_world_blocks_defense_BuildTurret$BuildTurretBuild *) NULL_CHECK((frame[0].o)))->F_this$0;
	sp[0].o = (jobject)((mindustry_world_blocks_defense_BuildTurret *) NULL_CHECK(sp[0].o))->F_glowRegion;
	sp[1].o = (jobject)((mindustry_world_blocks_defense_BuildTurret$BuildTurretBuild *) NULL_CHECK((frame[0].o)))->F_this$0;
	sp[1].o = (jobject)((mindustry_world_blocks_defense_BuildTurret *) NULL_CHECK(sp[1].o))->F_heatColor;
	SM_mindustry_graphics_Drawf_additive_arc_graphics_g2d_TextureRegion_arc_graphics_Color_float_float_float_float_float(ctx, sp[0].o, sp[1].o, ((jfloat)((mindustry_world_blocks_defense_BuildTurret$BuildTurretBuild *) NULL_CHECK((frame[0].o)))->F_warmup), ((jfloat)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_x), ((jfloat)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_y), (((jfloat)((mindustry_world_blocks_defense_turrets_BaseTurret$BaseTurretBuild *) NULL_CHECK((frame[0].o)))->F_rotation) - (jfloat(90.0f))), (jfloat(50.1f)));
	}
label_6:;
	{
	LINE_NUMBER(248);
	if ((floatCompare(((jfloat)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_efficiency), (jfloat(0)), -1)) <= 0) goto label_8;
	}
	{
	LINE_NUMBER(249);
	sp[0].o = (jobject)((mindustry_world_blocks_defense_BuildTurret$BuildTurretBuild *) NULL_CHECK((frame[0].o)))->F_unit;
	((func_mindustry_gen_Builderc_drawBuilding) resolveInterfaceMethod(ctx, &class_mindustry_gen_Builderc, INDEX_mindustry_gen_Builderc_drawBuilding, sp[0].o))(ctx, sp[0].o);
	}
label_8:;
	LINE_NUMBER(251);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jfloat M_mindustry_world_blocks_defense_BuildTurret$BuildTurretBuild_warmup_R_float(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/defense/BuildTurret$BuildTurretBuild:warmup", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(255);
	popStackFrame(ctx);
	return ((jfloat)((mindustry_world_blocks_defense_BuildTurret$BuildTurretBuild *) NULL_CHECK((frame[0].o)))->F_warmup);
	}

	popStackFrame(ctx);
}

void M_mindustry_world_blocks_defense_BuildTurret$BuildTurretBuild_write_arc_util_io_Writes(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/defense/BuildTurret$BuildTurretBuild:write", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(260);
	M_mindustry_gen_Building_write_arc_util_io_Writes(ctx, (frame[0].o), (frame[1].o));
	LINE_NUMBER(261);
	((func_arc_util_io_Writes_f_float) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_util_io_Writes_f_float])(ctx, (frame[1].o), ((jfloat)((mindustry_world_blocks_defense_turrets_BaseTurret$BaseTurretBuild *) NULL_CHECK((frame[0].o)))->F_rotation));
	LINE_NUMBER(263);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((mindustry_world_blocks_defense_BuildTurret$BuildTurretBuild *) NULL_CHECK((frame[0].o)))->F_unit;
	sp[1].o = (jobject)((func_mindustry_gen_Builderc_plans_R_arc_struct_Queue) resolveInterfaceMethod(ctx, &class_mindustry_gen_Builderc, INDEX_mindustry_gen_Builderc_plans_R_arc_struct_Queue, sp[1].o))(ctx, sp[1].o);
	sp[1].o = (jobject)((func_arc_struct_Queue_toArray_java_lang_Class_R_Array1_java_lang_Object) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_struct_Queue_toArray_java_lang_Class_R_Array1_java_lang_Object])(ctx, sp[1].o, (((jobject) &class_mindustry_entities_units_BuildPlan)));
	SM_mindustry_io_TypeIO_writePlans_arc_util_io_Writes_Array1_mindustry_entities_units_BuildPlan(ctx, sp[0].o, (checkCast(ctx, getArrayClass(&class_mindustry_entities_units_BuildPlan, 1), sp[1].o)));
	LINE_NUMBER(264);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_world_blocks_defense_BuildTurret$BuildTurretBuild_read_arc_util_io_Reads_byte(jcontext ctx, jobject self, jobject param0, jbyte param1) {
	NULL_CHECK(self);
	jtype frame[11];
	auto stack = &frame[8];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/defense/BuildTurret$BuildTurretBuild:read", 11 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(268);
	M_mindustry_gen_Building_read_arc_util_io_Reads_byte(ctx, (frame[0].o), (frame[1].o), (frame[2].i));
	LINE_NUMBER(269);
	sp[0].o = frame[0].o;
	jfloat temp0 = (jfloat)((func_arc_util_io_Reads_f_R_float) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_util_io_Reads_f_R_float])(ctx, (frame[1].o));
	((mindustry_world_blocks_defense_turrets_BaseTurret$BaseTurretBuild *) NULL_CHECK(sp[0].o))->F_rotation = temp0;
	LINE_NUMBER(270);
	sp[0].o = (jobject)((mindustry_world_blocks_defense_BuildTurret$BuildTurretBuild *) NULL_CHECK((frame[0].o)))->F_unit;
	((func_mindustry_gen_Rotc_rotation_float) resolveInterfaceMethod(ctx, &class_mindustry_gen_Rotc, INDEX_mindustry_gen_Rotc_rotation_float, sp[0].o))(ctx, sp[0].o, ((jfloat)((mindustry_world_blocks_defense_turrets_BaseTurret$BaseTurretBuild *) NULL_CHECK((frame[0].o)))->F_rotation));
	LINE_NUMBER(271);
	sp[0].o = (jobject)((mindustry_world_blocks_defense_BuildTurret$BuildTurretBuild *) NULL_CHECK((frame[0].o)))->F_unit;
	sp[0].o = (jobject)((func_mindustry_gen_Builderc_plans_R_arc_struct_Queue) resolveInterfaceMethod(ctx, &class_mindustry_gen_Builderc, INDEX_mindustry_gen_Builderc_plans_R_arc_struct_Queue, sp[0].o))(ctx, sp[0].o);
	((func_arc_struct_Queue_clear) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Queue_clear])(ctx, sp[0].o);
	LINE_NUMBER(272);
	sp[0].o = (jobject)SM_mindustry_io_TypeIO_readPlans_arc_util_io_Reads_R_Array1_mindustry_entities_units_BuildPlan(ctx, (frame[1].o));
	frame[3].o = sp[0].o;
	LINE_NUMBER(273);
	if ((frame[3].o) == nullptr) goto label_6;
	}
	{
	LINE_NUMBER(274);
	frame[4].o = (frame[3].o);
	frame[5].i = (((jarray) nullCheck(ctx, (frame[4].o)))->length);
	frame[6].i = (jint(0));
	}
label_8:;
	{
	if ((frame[6].i) >= (frame[5].i)) goto label_6;
	}
	{
	frame[7].o = ((jobject)ARRAY_ACCESS(jobject, (frame[4].o), (frame[6].i)));
	LINE_NUMBER(275);
	sp[0].o = (jobject)((mindustry_world_blocks_defense_BuildTurret$BuildTurretBuild *) NULL_CHECK((frame[0].o)))->F_unit;
	sp[0].o = (jobject)((func_mindustry_gen_Builderc_plans_R_arc_struct_Queue) resolveInterfaceMethod(ctx, &class_mindustry_gen_Builderc, INDEX_mindustry_gen_Builderc_plans_R_arc_struct_Queue, sp[0].o))(ctx, sp[0].o);
	((func_arc_struct_Queue_add_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Queue_add_java_lang_Object])(ctx, sp[0].o, (frame[7].o));
	LINE_NUMBER(274);
	INST_IINC(6, 1);
	goto label_8;
	}
label_6:;
	LINE_NUMBER(278);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jdouble M_mindustry_world_blocks_defense_BuildTurret$BuildTurretBuild_sense_mindustry_logic_LAccess_R_double(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/defense/BuildTurret$BuildTurretBuild:sense", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(282);
	clinit_mindustry_world_blocks_defense_BuildTurret$2(ctx);
	sp[0].o = (jobject)SF_mindustry_world_blocks_defense_BuildTurret$2_$SwitchMap$mindustry$logic$LAccess;
	jint temp0 = (jint)((func_mindustry_logic_LAccess_ordinal_R_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_logic_LAccess_ordinal_R_int])(ctx, (frame[1].o));
	switch(((jint)ARRAY_ACCESS(jint, sp[0].o, temp0))) {
		case 1: goto label_1;
		case 2: goto label_1;
		default: goto label_2;
	}
	}
label_1:;
	{
	LINE_NUMBER(283);
	sp[0].o = (jobject)((mindustry_world_blocks_defense_BuildTurret$BuildTurretBuild *) NULL_CHECK((frame[0].o)))->F_unit;
	jdouble temp0 = (jdouble)((func_mindustry_gen_Unitc_sense_mindustry_logic_LAccess_R_double) resolveInterfaceMethod(ctx, &class_mindustry_gen_Unitc, INDEX_mindustry_gen_Unitc_sense_mindustry_logic_LAccess_R_double, sp[0].o))(ctx, sp[0].o, (frame[1].o));
	sp[0].d = temp0;
	sp += 1;
	goto label_3;
	}
label_2:;
	{
	LINE_NUMBER(284);
	jdouble temp0 = (jdouble)M_mindustry_gen_Building_sense_mindustry_logic_LAccess_R_double(ctx, (frame[0].o), (frame[1].o));
	sp[0].d = temp0;
	sp += 1;
	}
label_3:;
	LINE_NUMBER(282);
	popStackFrame(ctx);
	INST_DRETURN();

	popStackFrame(ctx);
}

jobject M_mindustry_world_blocks_defense_BuildTurret$BuildTurretBuild_senseObject_mindustry_logic_LAccess_R_java_lang_Object(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/defense/BuildTurret$BuildTurretBuild:senseObject", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(290);
	clinit_mindustry_world_blocks_defense_BuildTurret$2(ctx);
	sp[0].o = (jobject)SF_mindustry_world_blocks_defense_BuildTurret$2_$SwitchMap$mindustry$logic$LAccess;
	jint temp0 = (jint)((func_mindustry_logic_LAccess_ordinal_R_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_logic_LAccess_ordinal_R_int])(ctx, (frame[1].o));
	switch(((jint)ARRAY_ACCESS(jint, sp[0].o, temp0))) {
		case 3: goto label_1;
		case 4: goto label_1;
		default: goto label_2;
	}
	}
label_1:;
	{
	LINE_NUMBER(291);
	sp[0].o = (jobject)((mindustry_world_blocks_defense_BuildTurret$BuildTurretBuild *) NULL_CHECK((frame[0].o)))->F_unit;
	sp[0].o = (jobject)((func_mindustry_gen_Unitc_senseObject_mindustry_logic_LAccess_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_mindustry_gen_Unitc, INDEX_mindustry_gen_Unitc_senseObject_mindustry_logic_LAccess_R_java_lang_Object, sp[0].o))(ctx, sp[0].o, (frame[1].o));
	sp += 1;
	goto label_3;
	}
label_2:;
	{
	LINE_NUMBER(292);
	sp[0].o = (jobject)M_mindustry_gen_Building_senseObject_mindustry_logic_LAccess_R_java_lang_Object(ctx, (frame[0].o), (frame[1].o));
	sp += 1;
	}
label_3:;
	LINE_NUMBER(290);
	popStackFrame(ctx);
	INST_ARETURN();

	popStackFrame(ctx);
}

jbool M_mindustry_world_blocks_defense_BuildTurret$BuildTurretBuild_lambda$updateTile$2_mindustry_entities_units_BuildPlan_R_boolean(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/defense/BuildTurret$BuildTurretBuild:lambda$updateTile$2", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(223);
	sp[0].o = (jobject)((func_mindustry_entities_units_BuildPlan_build_R_mindustry_gen_Building) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_entities_units_BuildPlan_build_R_mindustry_gen_Building])(ctx, (frame[1].o));
	if (sp[0].o != (frame[0].o)) goto label_1;
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

jbool SM_mindustry_world_blocks_defense_BuildTurret$BuildTurretBuild_lambda$updateTile$1_mindustry_entities_units_BuildPlan_mindustry_game_Teams$BlockPlan_R_boolean(jcontext ctx, jobject param0, jobject param1) {
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/defense/BuildTurret$BuildTurretBuild:lambda$updateTile$1", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_world_blocks_defense_BuildTurret$BuildTurretBuild(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	{
	LINE_NUMBER(198);
	if (((jint)((mindustry_game_Teams$BlockPlan *) NULL_CHECK((frame[1].o)))->F_x) != ((jint)((mindustry_entities_units_BuildPlan *) NULL_CHECK((frame[0].o)))->F_x)) goto label_1;
	}
	{
	if (((jint)((mindustry_game_Teams$BlockPlan *) NULL_CHECK((frame[1].o)))->F_y) != ((jint)((mindustry_entities_units_BuildPlan *) NULL_CHECK((frame[0].o)))->F_y)) goto label_1;
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

void M_mindustry_world_blocks_defense_BuildTurret$BuildTurretBuild_lambda$updateTile$0_mindustry_gen_Unit(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/defense/BuildTurret$BuildTurretBuild:lambda$updateTile$0", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(177);
	sp[0].o = (jobject)((mindustry_world_blocks_defense_BuildTurret$BuildTurretBuild *) NULL_CHECK((frame[0].o)))->F_following;
	if (sp[0].o == nullptr) goto label_1;
	}
	popStackFrame(ctx);
	INST_RETURN();
label_1:;
	{
	LINE_NUMBER(179);
	jint temp0 = (jint)((func_mindustry_gen_Unit_canBuild_R_boolean) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_gen_Unit_canBuild_R_boolean])(ctx, (frame[1].o));
	if (temp0 == 0) goto label_2;
	}
	{
	jint temp0 = (jint)((func_mindustry_gen_Unit_activelyBuilding_R_boolean) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_gen_Unit_activelyBuilding_R_boolean])(ctx, (frame[1].o));
	if (temp0 == 0) goto label_2;
	}
	{
	LINE_NUMBER(180);
	sp[0].o = (jobject)((func_mindustry_gen_Unit_buildPlan_R_mindustry_entities_units_BuildPlan) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_gen_Unit_buildPlan_R_mindustry_entities_units_BuildPlan])(ctx, (frame[1].o));
	frame[2].o = sp[0].o;
	LINE_NUMBER(182);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_world;
	sp[0].o = (jobject)((func_mindustry_core_World_build_int_int_R_mindustry_gen_Building) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_World_build_int_int_R_mindustry_gen_Building])(ctx, sp[0].o, ((jint)((mindustry_entities_units_BuildPlan *) NULL_CHECK((frame[2].o)))->F_x), ((jint)((mindustry_entities_units_BuildPlan *) NULL_CHECK((frame[2].o)))->F_y));
	frame[3].o = sp[0].o;
	LINE_NUMBER(183);
	if ((isInstance(ctx, (frame[3].o), &class_mindustry_world_blocks_ConstructBlock$ConstructBuild)) == 0) goto label_2;
	}
	{
	sp[0].o = frame[0].o;
	sp[1].o = frame[3].o;
	sp[2].o = (jobject)((mindustry_world_blocks_defense_BuildTurret$BuildTurretBuild *) NULL_CHECK((frame[0].o)))->F_this$0;
	jint temp0 = (jint)((func_mindustry_world_blocks_defense_BuildTurret$BuildTurretBuild_within_arc_math_geom_Position_float_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_blocks_defense_BuildTurret$BuildTurretBuild_within_arc_math_geom_Position_float_R_boolean])(ctx, sp[0].o, sp[1].o, ((jfloat)((mindustry_world_blocks_defense_turrets_BaseTurret *) NULL_CHECK(sp[2].o))->F_range));
	if (temp0 == 0) goto label_2;
	}
	{
	LINE_NUMBER(184);
	((mindustry_world_blocks_defense_BuildTurret$BuildTurretBuild *) NULL_CHECK((frame[0].o)))->F_following = (jref) (frame[1].o);
	}
label_2:;
	LINE_NUMBER(187);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

static void initAnnotations(jcontext ctx) {
	auto &clazz = class_mindustry_world_blocks_defense_BuildTurret$BuildTurretBuild;
	auto fields = (java_lang_reflect_Field **) ((jarray) clazz.fields)->data;
	auto methods = (java_lang_reflect_Method **) ((jarray) clazz.methods)->data;
	auto constructors = (java_lang_reflect_Constructor **) ((jarray) clazz.constructors)->data;

	fields[0]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	{ // Field following
		auto annotationArray = (jarray) createArray(ctx, &class_java_lang_annotation_Annotation, 1);
		fields[1]->F_annotations = (intptr_t) annotationArray;
		auto annotations = (jobject *) annotationArray->data;
		annotations[0] = gcAlloc(ctx, &class_arc_util_Nullable);
	}

	{ // Field lastPlan
		auto annotationArray = (jarray) createArray(ctx, &class_java_lang_annotation_Annotation, 1);
		fields[2]->F_annotations = (intptr_t) annotationArray;
		auto annotations = (jobject *) annotationArray->data;
		annotations[0] = gcAlloc(ctx, &class_arc_util_Nullable);
	}

	fields[3]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[4]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

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
}

void *vtable_mindustry_world_blocks_defense_BuildTurret$BuildTurretBuild[] {
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
	(void *) M_mindustry_world_blocks_defense_BuildTurret$BuildTurretBuild_write_arc_util_io_Writes,
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
	(void *) M_mindustry_world_blocks_defense_BuildTurret$BuildTurretBuild_sense_mindustry_logic_LAccess_R_double,
	(void *) M_mindustry_gen_Building_sense_mindustry_ctype_Content_R_double,
	(void *) M_mindustry_world_blocks_defense_BuildTurret$BuildTurretBuild_senseObject_mindustry_logic_LAccess_R_java_lang_Object,
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
	(void *) M_mindustry_world_blocks_defense_turrets_BaseTurret$BaseTurretBuild_placed,
	(void *) M_mindustry_gen_Building_playerPlaced_java_lang_Object,
	(void *) M_mindustry_world_blocks_defense_BuildTurret$BuildTurretBuild_read_arc_util_io_Reads_byte,
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
	(void *) M_mindustry_world_blocks_defense_BuildTurret$BuildTurretBuild_shouldConsume_R_boolean,
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
	(void *) M_mindustry_world_blocks_defense_BuildTurret$BuildTurretBuild_warmup_R_float,
	(void *) M_mindustry_gen_Building_acceptStack_mindustry_type_Item_int_mindustry_gen_Teamc_R_int,
	(void *) M_mindustry_gen_Building_explosionItemCap_R_int,
	(void *) M_mindustry_gen_Building_getMaximumAccepted_mindustry_type_Item_R_int,
	(void *) M_mindustry_gen_Building_moduleBitmask_R_int,
	(void *) M_mindustry_gen_Building_pos_R_int,
	(void *) M_mindustry_gen_Building_removeStack_mindustry_type_Item_int_R_int,
	(void *) M_mindustry_gen_Building_getDisplayName_R_java_lang_String,
	(void *) M_mindustry_gen_Building_floor_R_mindustry_world_blocks_environment_Floor,
	(void *) M_mindustry_world_blocks_defense_turrets_BaseTurret$BaseTurretBuild_status_R_mindustry_world_meta_BlockStatus,
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
	(void *) M_mindustry_world_blocks_defense_BuildTurret$BuildTurretBuild_draw,
	(void *) M_mindustry_gen_Building_drawCached,
	(void *) M_mindustry_gen_Building_drawConfigure,
	(void *) M_mindustry_gen_Building_drawCracks,
	(void *) M_mindustry_gen_Building_drawDisabled,
	(void *) M_mindustry_gen_Building_drawItemSelection_mindustry_ctype_UnlockableContent,
	(void *) M_mindustry_gen_Building_drawLight,
	(void *) M_mindustry_gen_Building_drawLiquidLight_mindustry_type_Liquid_float,
	(void *) M_mindustry_world_blocks_defense_turrets_BaseTurret$BaseTurretBuild_drawSelect,
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
	(void *) M_mindustry_world_blocks_defense_BuildTurret$BuildTurretBuild_updateTile,
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
	(void *) M_mindustry_world_blocks_defense_turrets_BaseTurret$BaseTurretBuild_range_R_float,
	(void *) M_mindustry_world_blocks_defense_BuildTurret$BuildTurretBuild_buildRotation_R_float,
	(void *) M_mindustry_world_blocks_defense_turrets_BaseTurret$BaseTurretBuild_estimateDps_R_float,
	(void *) M_mindustry_world_blocks_defense_BuildTurret$BuildTurretBuild_unit_R_mindustry_gen_Unit,
	(void *) M_mindustry_world_blocks_ControlBlock_isControlled_R_boolean,
	(void *) M_mindustry_world_blocks_defense_BuildTurret$BuildTurretBuild_canControl_R_boolean,
	(void *) M_mindustry_world_blocks_ControlBlock_shouldAutoTarget_R_boolean,
	(void *) M_mindustry_world_blocks_defense_BuildTurret$BuildTurretBuild_lambda$updateTile$2_mindustry_entities_units_BuildPlan_R_boolean,
	(void *) M_mindustry_world_blocks_defense_BuildTurret$BuildTurretBuild_lambda$updateTile$0_mindustry_gen_Unit,
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
	{ "buildRotation", "()F" },
	{ "estimateDps", "()F" },
	{ "unit", "()Lmindustry/gen/Unit;" },
	{ "isControlled", "()Z" },
	{ "canControl", "()Z" },
	{ "shouldAutoTarget", "()Z" },
	{ "lambda$updateTile$2", "(Lmindustry/entities/units/BuildPlan;)Z" },
	{ "lambda$updateTile$0", "(Lmindustry/gen/Unit;)V" },
};

static jclass interfaces[] { &class_mindustry_world_blocks_ControlBlock, &class_mindustry_world_blocks_RotBlock, };

static FieldMetadata fields[] {
	{ "unit", &class_mindustry_gen_BlockUnitc, offsetof(mindustry_world_blocks_defense_BuildTurret$BuildTurretBuild, F_unit), "Lmindustry/gen/BlockUnitc;", 1 },
	{ "following", &class_mindustry_gen_Unit, offsetof(mindustry_world_blocks_defense_BuildTurret$BuildTurretBuild, F_following), "Lmindustry/gen/Unit;", 1 },
	{ "lastPlan", &class_mindustry_game_Teams$BlockPlan, offsetof(mindustry_world_blocks_defense_BuildTurret$BuildTurretBuild, F_lastPlan), "Lmindustry/game/Teams$BlockPlan;", 1 },
	{ "warmup", &class_float, offsetof(mindustry_world_blocks_defense_BuildTurret$BuildTurretBuild, F_warmup), "F", 1 },
	{ "this$0", &class_mindustry_world_blocks_defense_BuildTurret, offsetof(mindustry_world_blocks_defense_BuildTurret$BuildTurretBuild, F_this$0), "Lmindustry/world/blocks/defense/BuildTurret;", 4112 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_mindustry_world_blocks_defense_BuildTurret$BuildTurretBuild_mindustry_world_blocks_defense_BuildTurret, 0, "(Lmindustry/world/blocks/defense/BuildTurret;)V", 1 },
	{ "canControl", (intptr_t) M_mindustry_world_blocks_defense_BuildTurret$BuildTurretBuild_canControl_R_boolean, VTABLE_mindustry_world_blocks_defense_BuildTurret$BuildTurretBuild_canControl_R_boolean, "()Z", 1 },
	{ "buildRotation", (intptr_t) M_mindustry_world_blocks_defense_BuildTurret$BuildTurretBuild_buildRotation_R_float, VTABLE_mindustry_world_blocks_defense_BuildTurret$BuildTurretBuild_buildRotation_R_float, "()F", 1 },
	{ "unit", (intptr_t) M_mindustry_world_blocks_defense_BuildTurret$BuildTurretBuild_unit_R_mindustry_gen_Unit, VTABLE_mindustry_world_blocks_defense_BuildTurret$BuildTurretBuild_unit_R_mindustry_gen_Unit, "()Lmindustry/gen/Unit;", 1 },
	{ "updateTile", (intptr_t) M_mindustry_world_blocks_defense_BuildTurret$BuildTurretBuild_updateTile, VTABLE_mindustry_world_blocks_defense_BuildTurret$BuildTurretBuild_updateTile, "()V", 1 },
	{ "shouldConsume", (intptr_t) M_mindustry_world_blocks_defense_BuildTurret$BuildTurretBuild_shouldConsume_R_boolean, VTABLE_mindustry_world_blocks_defense_BuildTurret$BuildTurretBuild_shouldConsume_R_boolean, "()Z", 1 },
	{ "draw", (intptr_t) M_mindustry_world_blocks_defense_BuildTurret$BuildTurretBuild_draw, VTABLE_mindustry_world_blocks_defense_BuildTurret$BuildTurretBuild_draw, "()V", 1 },
	{ "warmup", (intptr_t) M_mindustry_world_blocks_defense_BuildTurret$BuildTurretBuild_warmup_R_float, VTABLE_mindustry_world_blocks_defense_BuildTurret$BuildTurretBuild_warmup_R_float, "()F", 1 },
	{ "write", (intptr_t) M_mindustry_world_blocks_defense_BuildTurret$BuildTurretBuild_write_arc_util_io_Writes, VTABLE_mindustry_world_blocks_defense_BuildTurret$BuildTurretBuild_write_arc_util_io_Writes, "(Larc/util/io/Writes;)V", 1 },
	{ "read", (intptr_t) M_mindustry_world_blocks_defense_BuildTurret$BuildTurretBuild_read_arc_util_io_Reads_byte, VTABLE_mindustry_world_blocks_defense_BuildTurret$BuildTurretBuild_read_arc_util_io_Reads_byte, "(Larc/util/io/Reads;B)V", 1 },
	{ "sense", (intptr_t) M_mindustry_world_blocks_defense_BuildTurret$BuildTurretBuild_sense_mindustry_logic_LAccess_R_double, VTABLE_mindustry_world_blocks_defense_BuildTurret$BuildTurretBuild_sense_mindustry_logic_LAccess_R_double, "(Lmindustry/logic/LAccess;)D", 1 },
	{ "senseObject", (intptr_t) M_mindustry_world_blocks_defense_BuildTurret$BuildTurretBuild_senseObject_mindustry_logic_LAccess_R_java_lang_Object, VTABLE_mindustry_world_blocks_defense_BuildTurret$BuildTurretBuild_senseObject_mindustry_logic_LAccess_R_java_lang_Object, "(Lmindustry/logic/LAccess;)Ljava/lang/Object;", 1 },
	{ "lambda$updateTile$2", (intptr_t) M_mindustry_world_blocks_defense_BuildTurret$BuildTurretBuild_lambda$updateTile$2_mindustry_entities_units_BuildPlan_R_boolean, VTABLE_mindustry_world_blocks_defense_BuildTurret$BuildTurretBuild_lambda$updateTile$2_mindustry_entities_units_BuildPlan_R_boolean, "(Lmindustry/entities/units/BuildPlan;)Z", 4098 },
	{ "lambda$updateTile$1", (intptr_t) SM_mindustry_world_blocks_defense_BuildTurret$BuildTurretBuild_lambda$updateTile$1_mindustry_entities_units_BuildPlan_mindustry_game_Teams$BlockPlan_R_boolean, 0, "(Lmindustry/entities/units/BuildPlan;Lmindustry/game/Teams$BlockPlan;)Z", 4106 },
	{ "lambda$updateTile$0", (intptr_t) M_mindustry_world_blocks_defense_BuildTurret$BuildTurretBuild_lambda$updateTile$0_mindustry_gen_Unit, VTABLE_mindustry_world_blocks_defense_BuildTurret$BuildTurretBuild_lambda$updateTile$0_mindustry_gen_Unit, "(Lmindustry/gen/Unit;)V", 4098 },
};

Class class_mindustry_world_blocks_defense_BuildTurret$BuildTurretBuild{
		.nativeName = (intptr_t) "mindustry/world/blocks/defense/BuildTurret$BuildTurretBuild",
		.parentClass = (intptr_t) &class_mindustry_world_blocks_defense_turrets_BaseTurret$BaseTurretBuild,
		.size = sizeof(mindustry_world_blocks_defense_BuildTurret$BuildTurretBuild),
		.classVtable = (intptr_t) vtable_mindustry_world_blocks_defense_BuildTurret$BuildTurretBuild,
		.staticInitializer = (intptr_t) clinit_mindustry_world_blocks_defense_BuildTurret$BuildTurretBuild,
		.annotationInitializer = (intptr_t) initAnnotations,
		.markFunction = (intptr_t) mark_mindustry_world_blocks_defense_BuildTurret$BuildTurretBuild,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) &class_mindustry_world_blocks_defense_BuildTurret,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 33,
		.interfaceCount = 2,
		.nativeInterfaces = (intptr_t) interfaces,
		.fieldCount = 5,
		.nativeFields = (intptr_t) fields,
		.methodCount = 15,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 319,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_mindustry_world_blocks_defense_BuildTurret$BuildTurretBuild = registerClass(&class_mindustry_world_blocks_defense_BuildTurret$BuildTurretBuild);

}

