#include "mindustry/ai/types/LogicAI.h"
#include "arc/math/geom/Vec2.h"
#include "mindustry/gen/PosTeam.h"
#include "mindustry/type/Weapon.h"
#include "mindustry/game/Rules.h"
#include "mindustry/world/blocks/storage/CoreBlock_CoreBuild.h"
#include "mindustry/gen/Unitc.h"
#include "java/lang/reflect/Constructor.h"
#include "mindustry/ai/types/LogicAI_1.h"
#include "mindustry/logic/LUnitControl.h"
#include "mindustry/ai/ControlPathfinder_PathfindResult.h"
#include "arc/util/Tmp.h"
#include "java/lang/reflect/Method.h"
#include "mindustry/entities/units/BuildPlan.h"
#include "mindustry/world/Tile.h"
#include "arc/math/geom/Position.h"
#include "mindustry/entities/units/WeaponMount.h"
#include "arc/math/Mathf.h"
#include "mindustry/gen/Teamc.h"
#include "java/lang/reflect/Field.h"
#include "mindustry/gen/Unit.h"
#include "java/lang/annotation/Annotation.h"
#include "arc/util/Time.h"
#include "mindustry/ai/ControlPathfinder.h"
#include "java/lang/Enum.h"
#include "arc/util/Nullable.h"
#include "mindustry/type/UnitType.h"
#include "mindustry/gen/Building.h"
#include "mindustry/entities/units/UnitController.h"
#include "mindustry/gen/Posc.h"
#include "mindustry/ai/types/LogicAI.h"
#include "java/lang/Object.h"
#include "mindustry/entities/units/AIController.h"
#include "mindustry/gen/Builderc.h"
#include "arc/struct/ObjectSet.h"
#include "arc/struct/ObjectMap.h"
#include "mindustry/game/Team.h"
#include "mindustry/Vars.h"
#include "mindustry/core/GameState.h"

extern "C" {

jfloat SF_mindustry_ai_types_LogicAI_transferDelay;
jfloat SF_mindustry_ai_types_LogicAI_logicControlTimeout;

void mark_mindustry_ai_types_LogicAI(jobject object, jint mark, jint depth) {
	if (!object) {
		return;
	}
	if (depth > GC_DEPTH_ALWAYS && (object->gcMark < GC_MARK_START || object->gcMark == mark))
		return;
	if (depth > MAX_GC_MARK_DEPTH) {
		markDeepObject(object);
		return;
	}
	mark_mindustry_entities_units_AIController(object, mark, depth);
	if (object->gcMark >= GC_MARK_START)
		object->gcMark = mark;
	auto self = (mindustry_ai_types_LogicAI *) object;
	if (self->F_control)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_control)->clazz)->markFunction)((jobject) self->F_control, mark, depth + 1);
	if (self->F_controller)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_controller)->clazz)->markFunction)((jobject) self->F_controller, mark, depth + 1);
	if (self->F_plan)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_plan)->clazz)->markFunction)((jobject) self->F_plan, mark, depth + 1);
	if (self->F_execCache)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_execCache)->clazz)->markFunction)((jobject) self->F_execCache, mark, depth + 1);
	if (self->F_aimControl)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_aimControl)->clazz)->markFunction)((jobject) self->F_aimControl, mark, depth + 1);
	if (self->F_mainTarget)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_mainTarget)->clazz)->markFunction)((jobject) self->F_mainTarget, mark, depth + 1);
	if (self->F_posTarget)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_posTarget)->clazz)->markFunction)((jobject) self->F_posTarget, mark, depth + 1);
	if (self->F_radars)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_radars)->clazz)->markFunction)((jobject) self->F_radars, mark, depth + 1);
}

void clinit_mindustry_ai_types_LogicAI(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	clinit_mindustry_entities_units_AIController(ctx);
	SF_mindustry_ai_types_LogicAI_transferDelay = jfloat(90.0f);
	SF_mindustry_ai_types_LogicAI_logicControlTimeout = jfloat(600.0f);
}

void init_mindustry_ai_types_LogicAI(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ai/types/LogicAI:<init>", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_ai_types_LogicAI(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(14);
	init_mindustry_entities_units_AIController(ctx, (frame[0].o));
	LINE_NUMBER(20);
	sp[0].o = frame[0].o;
	clinit_mindustry_logic_LUnitControl(ctx);
	sp[1].o = (jobject)SF_mindustry_logic_LUnitControl_idle;
	((mindustry_ai_types_LogicAI *) NULL_CHECK(sp[0].o))->F_control = (jref) sp[1].o;
	LINE_NUMBER(22);
	((mindustry_ai_types_LogicAI *) NULL_CHECK((frame[0].o)))->F_controlTimer = (jfloat(600.0f));
	LINE_NUMBER(24);
	sp[0].o = frame[0].o;
	clinit_mindustry_entities_units_BuildPlan(ctx);
	sp[1].o = gcAlloc(ctx, &class_mindustry_entities_units_BuildPlan);
	init_mindustry_entities_units_BuildPlan(ctx, sp[1].o);
	((mindustry_ai_types_LogicAI *) NULL_CHECK(sp[0].o))->F_plan = (jref) sp[1].o;
	LINE_NUMBER(27);
	sp[0].o = frame[0].o;
	clinit_arc_struct_ObjectMap(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_struct_ObjectMap);
	init_arc_struct_ObjectMap(ctx, sp[1].o);
	((mindustry_ai_types_LogicAI *) NULL_CHECK(sp[0].o))->F_execCache = (jref) sp[1].o;
	LINE_NUMBER(30);
	sp[0].o = frame[0].o;
	clinit_mindustry_logic_LUnitControl(ctx);
	sp[1].o = (jobject)SF_mindustry_logic_LUnitControl_stop;
	((mindustry_ai_types_LogicAI *) NULL_CHECK(sp[0].o))->F_aimControl = (jref) sp[1].o;
	LINE_NUMBER(39);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)SM_mindustry_gen_PosTeam_create_R_mindustry_gen_PosTeam(ctx);
	((mindustry_ai_types_LogicAI *) NULL_CHECK(sp[0].o))->F_posTarget = (jref) sp[1].o;
	LINE_NUMBER(41);
	sp[0].o = frame[0].o;
	clinit_arc_struct_ObjectSet(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_struct_ObjectSet);
	init_arc_struct_ObjectSet(ctx, sp[1].o);
	((mindustry_ai_types_LogicAI *) NULL_CHECK(sp[0].o))->F_radars = (jref) sp[1].o;
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jbool M_mindustry_ai_types_LogicAI_keepState_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ai/types/LogicAI:keepState", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(46);
	popStackFrame(ctx);
	return (jint(1));
	}

	popStackFrame(ctx);
}

void M_mindustry_ai_types_LogicAI_updateMovement(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[11];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ai/types/LogicAI:updateMovement", 11 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(51);
	if ((floatCompare(((jfloat)((mindustry_ai_types_LogicAI *) NULL_CHECK((frame[0].o)))->F_targetTimer), (jfloat(0)), -1)) <= 0) goto label_1;
	}
	{
	LINE_NUMBER(52);
	sp[0].o = frame[0].o;
	((mindustry_ai_types_LogicAI *) NULL_CHECK(sp[0].o))->F_targetTimer = (((jfloat)((mindustry_ai_types_LogicAI *) NULL_CHECK(sp[0].o))->F_targetTimer) - (clinit_arc_util_Time(ctx), (jfloat)SF_arc_util_Time_delta));
	goto label_3;
	}
label_1:;
	{
	LINE_NUMBER(54);
	sp[0].o = (jobject)((mindustry_ai_types_LogicAI *) NULL_CHECK((frame[0].o)))->F_radars;
	((func_arc_struct_ObjectSet_clear) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectSet_clear])(ctx, sp[0].o);
	LINE_NUMBER(55);
	((mindustry_ai_types_LogicAI *) NULL_CHECK((frame[0].o)))->F_targetTimer = (jfloat(40.0f));
	}
label_3:;
	{
	LINE_NUMBER(59);
	if ((floatCompare(((jfloat)((mindustry_ai_types_LogicAI *) NULL_CHECK((frame[0].o)))->F_controlTimer), (jfloat(0)), -1)) <= 0) goto label_5;
	}
	{
	sp[0].o = (jobject)((mindustry_ai_types_LogicAI *) NULL_CHECK((frame[0].o)))->F_controller;
	if (sp[0].o == nullptr) goto label_5;
	}
	{
	sp[0].o = (jobject)((mindustry_ai_types_LogicAI *) NULL_CHECK((frame[0].o)))->F_controller;
	jint temp0 = (jint)((func_mindustry_gen_Building_isValid_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_gen_Building_isValid_R_boolean])(ctx, sp[0].o);
	if (temp0 == 0) goto label_5;
	}
	{
	LINE_NUMBER(60);
	sp[0].o = frame[0].o;
	((mindustry_ai_types_LogicAI *) NULL_CHECK(sp[0].o))->F_controlTimer = (((jfloat)((mindustry_ai_types_LogicAI *) NULL_CHECK(sp[0].o))->F_controlTimer) - (clinit_arc_util_Time(ctx), (jfloat)SF_arc_util_Time_delta));
	goto label_7;
	}
label_5:;
	{
	LINE_NUMBER(62);
	sp[0].o = (jobject)((mindustry_entities_units_AIController *) NULL_CHECK((frame[0].o)))->F_unit;
	((func_mindustry_gen_Unit_resetController) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_gen_Unit_resetController])(ctx, sp[0].o);
	LINE_NUMBER(63);
	popStackFrame(ctx);
	return;
	}
label_7:;
	{
	LINE_NUMBER(66);
	clinit_mindustry_ai_types_LogicAI$1(ctx);
	sp[0].o = (jobject)SF_mindustry_ai_types_LogicAI$1_$SwitchMap$mindustry$logic$LUnitControl;
	sp[1].o = (jobject)((mindustry_ai_types_LogicAI *) NULL_CHECK((frame[0].o)))->F_control;
	jint temp0 = (jint)((func_mindustry_logic_LUnitControl_ordinal_R_int) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_mindustry_logic_LUnitControl_ordinal_R_int])(ctx, sp[1].o);
	switch(((jint)ARRAY_ACCESS(jint, sp[0].o, temp0))) {
		case 1: goto label_9;
		case 2: goto label_10;
		case 3: goto label_11;
		case 4: goto label_12;
		case 5: goto label_13;
		default: goto label_14;
	}
	}
label_9:;
	{
	LINE_NUMBER(68);
	sp[0].o = frame[0].o;
	clinit_arc_util_Tmp(ctx);
	sp[1].o = (jobject)SF_arc_util_Tmp_v1;
	sp[1].o = (jobject)((func_arc_math_geom_Vec2_set_float_float_R_arc_math_geom_Vec2) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_math_geom_Vec2_set_float_float_R_arc_math_geom_Vec2])(ctx, sp[1].o, ((jfloat)((mindustry_ai_types_LogicAI *) NULL_CHECK((frame[0].o)))->F_moveX), ((jfloat)((mindustry_ai_types_LogicAI *) NULL_CHECK((frame[0].o)))->F_moveY));
	((func_mindustry_ai_types_LogicAI_moveTo_arc_math_geom_Position_float_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_ai_types_LogicAI_moveTo_arc_math_geom_Position_float_float])(ctx, sp[0].o, sp[1].o, (jfloat(1)), (jfloat(30.0f)));
	LINE_NUMBER(69);
	goto label_14;
	}
label_10:;
	{
	LINE_NUMBER(71);
	sp[0].o = frame[0].o;
	clinit_arc_util_Tmp(ctx);
	sp[1].o = (jobject)SF_arc_util_Tmp_v1;
	sp[1].o = (jobject)((func_arc_math_geom_Vec2_set_float_float_R_arc_math_geom_Vec2) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_math_geom_Vec2_set_float_float_R_arc_math_geom_Vec2])(ctx, sp[1].o, ((jfloat)((mindustry_ai_types_LogicAI *) NULL_CHECK((frame[0].o)))->F_moveX), ((jfloat)((mindustry_ai_types_LogicAI *) NULL_CHECK((frame[0].o)))->F_moveY));
	((func_mindustry_ai_types_LogicAI_moveTo_arc_math_geom_Position_float_float_boolean_arc_math_geom_Vec2) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_ai_types_LogicAI_moveTo_arc_math_geom_Position_float_float_boolean_arc_math_geom_Vec2])(ctx, sp[0].o, sp[1].o, (((jfloat)((mindustry_ai_types_LogicAI *) NULL_CHECK((frame[0].o)))->F_moveRad) - (jfloat(7.0f))), (jfloat(7.0f)), (jint(1)), (jobject(nullptr)));
	LINE_NUMBER(72);
	goto label_14;
	}
label_11:;
	{
	LINE_NUMBER(74);
	sp[0].o = (jobject)((mindustry_entities_units_AIController *) NULL_CHECK((frame[0].o)))->F_unit;
	jint temp0 = (jint)((func_mindustry_gen_Unit_isFlying_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_gen_Unit_isFlying_R_boolean])(ctx, sp[0].o);
	if (temp0 == 0) goto label_17;
	}
	{
	LINE_NUMBER(75);
	sp[0].o = frame[0].o;
	clinit_arc_util_Tmp(ctx);
	sp[1].o = (jobject)SF_arc_util_Tmp_v1;
	sp[1].o = (jobject)((func_arc_math_geom_Vec2_set_float_float_R_arc_math_geom_Vec2) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_math_geom_Vec2_set_float_float_R_arc_math_geom_Vec2])(ctx, sp[1].o, ((jfloat)((mindustry_ai_types_LogicAI *) NULL_CHECK((frame[0].o)))->F_moveX), ((jfloat)((mindustry_ai_types_LogicAI *) NULL_CHECK((frame[0].o)))->F_moveY));
	((func_mindustry_ai_types_LogicAI_moveTo_arc_math_geom_Position_float_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_ai_types_LogicAI_moveTo_arc_math_geom_Position_float_float])(ctx, sp[0].o, sp[1].o, (jfloat(1)), (jfloat(30.0f)));
	goto label_14;
	}
label_17:;
	{
	LINE_NUMBER(77);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_controlPath;
	sp[1].o = (jobject)((mindustry_entities_units_AIController *) NULL_CHECK((frame[0].o)))->F_unit;
	clinit_arc_util_Tmp(ctx);
	sp[2].o = (jobject)SF_arc_util_Tmp_v2;
	sp[2].o = (jobject)((func_arc_math_geom_Vec2_set_float_float_R_arc_math_geom_Vec2) ((void **) nullCheck(ctx, sp[2].o)->vtable)[VTABLE_arc_math_geom_Vec2_set_float_float_R_arc_math_geom_Vec2])(ctx, sp[2].o, ((jfloat)((mindustry_ai_types_LogicAI *) NULL_CHECK((frame[0].o)))->F_moveX), ((jfloat)((mindustry_ai_types_LogicAI *) NULL_CHECK((frame[0].o)))->F_moveY));
	sp[0].o = (jobject)((func_mindustry_ai_ControlPathfinder_getPathPosition_mindustry_gen_Unit_arc_math_geom_Vec2_R_mindustry_ai_ControlPathfinder$PathfindResult) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_ai_ControlPathfinder_getPathPosition_mindustry_gen_Unit_arc_math_geom_Vec2_R_mindustry_ai_ControlPathfinder$PathfindResult])(ctx, sp[0].o, sp[1].o, sp[2].o);
	frame[1].o = sp[0].o;
	LINE_NUMBER(78);
	if (((jint)((mindustry_ai_ControlPathfinder$PathfindResult *) NULL_CHECK((frame[1].o)))->F_move) == 0) goto label_20;
	}
	{
	LINE_NUMBER(79);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((mindustry_ai_ControlPathfinder$PathfindResult *) NULL_CHECK((frame[1].o)))->F_dest;
	jfloat temp0 = jfloat(1);
	clinit_arc_util_Tmp(ctx);
	sp[2].o = (jobject)SF_arc_util_Tmp_v2;
	sp[3].o = (jobject)((mindustry_ai_ControlPathfinder$PathfindResult *) NULL_CHECK((frame[1].o)))->F_dest;
	jint temp1 = (jint)((func_arc_math_geom_Vec2_epsilonEquals_arc_math_geom_Vec2_float_R_boolean) ((void **) nullCheck(ctx, sp[2].o)->vtable)[VTABLE_arc_math_geom_Vec2_epsilonEquals_arc_math_geom_Vec2_float_R_boolean])(ctx, sp[2].o, sp[3].o, (jfloat(4.1f)));
	sp[2].f = temp0;
	sp += 3;
	if (temp1 == 0) goto label_22;
	}
	(sp++)->f = jfloat(30.0f);
	goto label_23;
label_22:;
	INST_FCONST(0);
label_23:;
	POP_N(4); // Pop method args
	((func_mindustry_ai_types_LogicAI_moveTo_arc_math_geom_Position_float_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_ai_types_LogicAI_moveTo_arc_math_geom_Position_float_float])(ctx, sp[0].o, sp[1].o, sp[2].f, sp[3].f);
label_20:;
	LINE_NUMBER(82);
	goto label_14;
label_12:;
	{
	LINE_NUMBER(84);
	sp[0].o = (jobject)((mindustry_entities_units_AIController *) NULL_CHECK((frame[0].o)))->F_unit;
	sp[0].o = (jobject)((func_mindustry_gen_Unit_closestEnemyCore_R_mindustry_world_blocks_storage_CoreBlock$CoreBuild) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_gen_Unit_closestEnemyCore_R_mindustry_world_blocks_storage_CoreBlock$CoreBuild])(ctx, sp[0].o);
	frame[1].o = sp[0].o;
	LINE_NUMBER(86);
	if ((frame[1].o) == nullptr) goto label_25;
	}
	{
	sp[0].o = (jobject)((mindustry_entities_units_AIController *) NULL_CHECK((frame[0].o)))->F_unit;
	sp[1].o = frame[1].o;
	sp[2].o = (jobject)((mindustry_entities_units_AIController *) NULL_CHECK((frame[0].o)))->F_unit;
	jfloat temp0 = (jfloat)((func_mindustry_gen_Unit_range_R_float) ((void **) nullCheck(ctx, sp[2].o)->vtable)[VTABLE_mindustry_gen_Unit_range_R_float])(ctx, sp[2].o);
	jint temp1 = (jint)((func_mindustry_gen_Unit_within_arc_math_geom_Position_float_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_gen_Unit_within_arc_math_geom_Position_float_R_boolean])(ctx, sp[0].o, sp[1].o, (temp0 * (jfloat(0.5f))));
	if (temp1 != 0) goto label_26;
	}
label_25:;
	{
	LINE_NUMBER(87);
	frame[2].i = (jint(1));
	LINE_NUMBER(88);
	frame[3].o = (jobject(nullptr));
	LINE_NUMBER(90);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	sp[0].o = (jobject)((mindustry_core_GameState *) NULL_CHECK(sp[0].o))->F_rules;
	if (((jint)((mindustry_game_Rules *) NULL_CHECK(sp[0].o))->F_waves) == 0) goto label_29;
	}
	{
	sp[0].o = (jobject)((mindustry_entities_units_AIController *) NULL_CHECK((frame[0].o)))->F_unit;
	sp[0].o = (jobject)((mindustry_gen_Unit *) NULL_CHECK(sp[0].o))->F_team;
	clinit_mindustry_Vars(ctx);
	sp[1].o = (jobject)SF_mindustry_Vars_state;
	sp[1].o = (jobject)((mindustry_core_GameState *) NULL_CHECK(sp[1].o))->F_rules;
	sp[1].o = (jobject)((mindustry_game_Rules *) NULL_CHECK(sp[1].o))->F_defaultTeam;
	if (sp[0].o != sp[1].o) goto label_29;
	}
	{
	LINE_NUMBER(91);
	sp[0].o = (jobject)((func_mindustry_ai_types_LogicAI_getClosestSpawner_R_mindustry_world_Tile) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_ai_types_LogicAI_getClosestSpawner_R_mindustry_world_Tile])(ctx, (frame[0].o));
	frame[3].o = sp[0].o;
	LINE_NUMBER(92);
	if ((frame[3].o) == nullptr) goto label_29;
	}
	{
	sp[0].o = (jobject)((mindustry_entities_units_AIController *) NULL_CHECK((frame[0].o)))->F_unit;
	sp[1].o = frame[3].o;
	clinit_mindustry_Vars(ctx);
	sp[2].o = (jobject)SF_mindustry_Vars_state;
	sp[2].o = (jobject)((mindustry_core_GameState *) NULL_CHECK(sp[2].o))->F_rules;
	jint temp0 = (jint)((func_mindustry_gen_Unit_within_arc_math_geom_Position_float_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_gen_Unit_within_arc_math_geom_Position_float_R_boolean])(ctx, sp[0].o, sp[1].o, (((jfloat)((mindustry_game_Rules *) NULL_CHECK(sp[2].o))->F_dropZoneRadius) + (jfloat(120.0f))));
	if (temp0 == 0) goto label_29;
	}
	INST_ICONST(0);
	INST_ISTORE(2);
label_29:;
	{
	LINE_NUMBER(95);
	if ((frame[2].i) == 0) goto label_26;
	}
	{
	LINE_NUMBER(96);
	sp[0].o = (jobject)((mindustry_entities_units_AIController *) NULL_CHECK((frame[0].o)))->F_unit;
	jint temp0 = (jint)((func_mindustry_gen_Unit_isFlying_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_gen_Unit_isFlying_R_boolean])(ctx, sp[0].o);
	if (temp0 == 0) goto label_33;
	}
	{
	LINE_NUMBER(97);
	if ((frame[1].o) != nullptr) goto label_35;
	}
	INST_ALOAD(3);
	goto label_36;
label_35:;
	INST_ALOAD(1);
label_36:;
	{
	sp -= 1;
	frame[4].o = sp[0].o;
	LINE_NUMBER(98);
	if ((frame[4].o) == nullptr) goto label_38;
	}
	{
	LINE_NUMBER(99);
	sp[0].o = frame[0].o;
	sp[1].o = frame[4].o;
	sp[2].o = (jobject)((mindustry_entities_units_AIController *) NULL_CHECK((frame[0].o)))->F_unit;
	jfloat temp0 = (jfloat)((func_mindustry_gen_Unit_range_R_float) ((void **) nullCheck(ctx, sp[2].o)->vtable)[VTABLE_mindustry_gen_Unit_range_R_float])(ctx, sp[2].o);
	((func_mindustry_ai_types_LogicAI_moveTo_arc_math_geom_Position_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_ai_types_LogicAI_moveTo_arc_math_geom_Position_float])(ctx, sp[0].o, sp[1].o, (temp0 * (jfloat(0.5f))));
	}
label_38:;
	LINE_NUMBER(101);
	goto label_26;
label_33:;
	{
	LINE_NUMBER(102);
	((func_mindustry_ai_types_LogicAI_pathfind_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_ai_types_LogicAI_pathfind_int])(ctx, (frame[0].o), (jint(0)));
	}
label_26:;
	LINE_NUMBER(106);
	goto label_14;
label_13:;
	{
	LINE_NUMBER(108);
	sp[0].o = (jobject)((mindustry_entities_units_AIController *) NULL_CHECK((frame[0].o)))->F_unit;
	((func_mindustry_gen_Unit_clearBuilding) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_gen_Unit_clearBuilding])(ctx, sp[0].o);
	}
label_14:;
	{
	LINE_NUMBER(112);
	sp[0].o = (jobject)((mindustry_entities_units_AIController *) NULL_CHECK((frame[0].o)))->F_unit;
	sp[0].o = (jobject)((mindustry_gen_Unit *) NULL_CHECK(sp[0].o))->F_type;
	if (((jint)((mindustry_type_UnitType *) NULL_CHECK(sp[0].o))->F_canBoost) == 0) goto label_40;
	}
	{
	sp[0].o = (jobject)((mindustry_entities_units_AIController *) NULL_CHECK((frame[0].o)))->F_unit;
	sp[0].o = (jobject)((mindustry_gen_Unit *) NULL_CHECK(sp[0].o))->F_type;
	if (((jint)((mindustry_type_UnitType *) NULL_CHECK(sp[0].o))->F_flying) != 0) goto label_40;
	}
	{
	LINE_NUMBER(113);
	if (((jint)((mindustry_ai_types_LogicAI *) NULL_CHECK((frame[0].o)))->F_boost) != 0) goto label_42;
	}
	{
	sp[0].o = (jobject)((mindustry_entities_units_AIController *) NULL_CHECK((frame[0].o)))->F_unit;
	jint temp0 = (jint)((func_mindustry_gen_Unit_onSolid_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_gen_Unit_onSolid_R_boolean])(ctx, sp[0].o);
	if (temp0 != 0) goto label_42;
	}
	{
	sp[0].o = (jobject)((mindustry_entities_units_AIController *) NULL_CHECK((frame[0].o)))->F_unit;
	jint temp0 = (jint)((func_mindustry_gen_Unit_isFlying_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_gen_Unit_isFlying_R_boolean])(ctx, sp[0].o);
	if (temp0 == 0) goto label_43;
	}
	{
	sp[0].o = (jobject)((mindustry_entities_units_AIController *) NULL_CHECK((frame[0].o)))->F_unit;
	jint temp0 = (jint)((func_mindustry_gen_Unit_canLand_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_gen_Unit_canLand_R_boolean])(ctx, sp[0].o);
	if (temp0 != 0) goto label_43;
	}
label_42:;
	INST_ICONST(1);
	goto label_44;
label_43:;
	INST_ICONST(0);
label_44:;
	{
	sp -= 1;
	frame[1].i = sp[0].i;
	LINE_NUMBER(114);
	sp[0].o = (jobject)((mindustry_entities_units_AIController *) NULL_CHECK((frame[0].o)))->F_unit;
	sp[1].o = (jobject)((mindustry_entities_units_AIController *) NULL_CHECK((frame[0].o)))->F_unit;
	jfloat temp0 = (jfloat)((mindustry_gen_Unit *) NULL_CHECK(sp[1].o))->F_elevation;
	jint temp1 = (jint)SM_arc_math_Mathf_num_boolean_R_int(ctx, (frame[1].i));
	jfloat temp2 = jfloat(temp1);
	sp[1].f = temp0;
	sp[2].f = temp2;
	sp += 3;
	if ((frame[1].i) == 0) goto label_46;
	}
	{
	sp[0].o = (jobject)((mindustry_entities_units_AIController *) NULL_CHECK((frame[0].o)))->F_unit;
	sp[0].o = (jobject)((mindustry_gen_Unit *) NULL_CHECK(sp[0].o))->F_type;
	jfloat temp0 = (jfloat)((mindustry_type_UnitType *) NULL_CHECK(sp[0].o))->F_riseSpeed;
	sp[0].f = temp0;
	sp += 1;
	goto label_47;
	}
label_46:;
	{
	sp[0].o = (jobject)((mindustry_entities_units_AIController *) NULL_CHECK((frame[0].o)))->F_unit;
	sp[0].o = (jobject)((mindustry_gen_Unit *) NULL_CHECK(sp[0].o))->F_type;
	jfloat temp0 = (jfloat)((mindustry_type_UnitType *) NULL_CHECK(sp[0].o))->F_descentSpeed;
	sp[0].f = temp0;
	sp += 1;
	}
label_47:;
	POP_N(3); // Pop method args
	sp->f = (jfloat)SM_arc_math_Mathf_approachDelta_float_float_float_R_float(ctx, sp[0].f, sp[1].f, sp[2].f);
	sp++;
	sp -= 2;
	((mindustry_gen_Unit *) NULL_CHECK(sp[0].o))->F_elevation = sp[1].f;
label_40:;
	{
	LINE_NUMBER(118);
	if (((jint)((mindustry_ai_types_LogicAI *) NULL_CHECK((frame[0].o)))->F_shoot) == 0) goto label_48;
	}
	{
	sp[0].o = (jobject)((mindustry_entities_units_AIController *) NULL_CHECK((frame[0].o)))->F_unit;
	sp[0].o = (jobject)((mindustry_gen_Unit *) NULL_CHECK(sp[0].o))->F_type;
	if (((jint)((mindustry_type_UnitType *) NULL_CHECK(sp[0].o))->F_omniMovement) != 0) goto label_49;
	}
label_48:;
	{
	LINE_NUMBER(119);
	sp[0].o = (jobject)((mindustry_entities_units_AIController *) NULL_CHECK((frame[0].o)))->F_unit;
	sp[1].o = (jobject)((mindustry_entities_units_AIController *) NULL_CHECK((frame[0].o)))->F_unit;
	jfloat temp0 = (jfloat)((func_mindustry_gen_Unit_prefRotation_R_float) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_mindustry_gen_Unit_prefRotation_R_float])(ctx, sp[1].o);
	((func_mindustry_gen_Unit_lookAt_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_gen_Unit_lookAt_float])(ctx, sp[0].o, temp0);
	goto label_50;
	}
label_49:;
	{
	LINE_NUMBER(120);
	sp[0].o = (jobject)((mindustry_entities_units_AIController *) NULL_CHECK((frame[0].o)))->F_unit;
	jint temp0 = (jint)((func_mindustry_gen_Unit_hasWeapons_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_gen_Unit_hasWeapons_R_boolean])(ctx, sp[0].o);
	if (temp0 == 0) goto label_50;
	}
	{
	sp[0].o = (jobject)((mindustry_entities_units_AIController *) NULL_CHECK((frame[0].o)))->F_unit;
	sp[0].o = (jobject)((mindustry_gen_Unit *) NULL_CHECK(sp[0].o))->F_mounts;
	if ((((jarray) nullCheck(ctx, sp[0].o))->length) <= 0) goto label_50;
	}
	{
	sp[0].o = (jobject)((mindustry_entities_units_AIController *) NULL_CHECK((frame[0].o)))->F_unit;
	sp[0].o = (jobject)((mindustry_gen_Unit *) NULL_CHECK(sp[0].o))->F_mounts;
	sp[0].o = (jobject)((mindustry_entities_units_WeaponMount *) NULL_CHECK(((jobject)ARRAY_ACCESS(jobject, sp[0].o, (jint(0))))))->F_weapon;
	if (((jint)((mindustry_type_Weapon *) NULL_CHECK(sp[0].o))->F_ignoreRotation) != 0) goto label_50;
	}
	{
	LINE_NUMBER(121);
	sp[0].o = (jobject)((mindustry_entities_units_AIController *) NULL_CHECK((frame[0].o)))->F_unit;
	sp[1].o = (jobject)((mindustry_entities_units_AIController *) NULL_CHECK((frame[0].o)))->F_unit;
	sp[1].o = (jobject)((mindustry_gen_Unit *) NULL_CHECK(sp[1].o))->F_mounts;
	jfloat temp0 = (jfloat)((mindustry_entities_units_WeaponMount *) NULL_CHECK(((jobject)ARRAY_ACCESS(jobject, sp[1].o, (jint(0))))))->F_aimX;
	sp[1].o = (jobject)((mindustry_entities_units_AIController *) NULL_CHECK((frame[0].o)))->F_unit;
	sp[1].o = (jobject)((mindustry_gen_Unit *) NULL_CHECK(sp[1].o))->F_mounts;
	((func_mindustry_gen_Unit_lookAt_float_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_gen_Unit_lookAt_float_float])(ctx, sp[0].o, temp0, ((jfloat)((mindustry_entities_units_WeaponMount *) NULL_CHECK(((jobject)ARRAY_ACCESS(jobject, sp[1].o, (jint(0))))))->F_aimY));
	}
label_50:;
	LINE_NUMBER(123);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jbool M_mindustry_ai_types_LogicAI_checkTargetTimer_java_lang_Object_R_boolean(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ai/types/LogicAI:checkTargetTimer", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(126);
	sp[0].o = (jobject)((mindustry_ai_types_LogicAI *) NULL_CHECK((frame[0].o)))->F_radars;
	jint temp0 = (jint)((func_arc_struct_ObjectSet_add_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectSet_add_java_lang_Object_R_boolean])(ctx, sp[0].o, (frame[1].o));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jbool M_mindustry_ai_types_LogicAI_checkTarget_mindustry_gen_Teamc_float_float_float_R_boolean(jcontext ctx, jobject self, jobject param0, jfloat param1, jfloat param2, jfloat param3) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ai/types/LogicAI:checkTarget", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].f = param1;
	frame[3].f = param2;
	frame[4].f = param3;
	{
	LINE_NUMBER(131);
	popStackFrame(ctx);
	return (jint(0));
	}

	popStackFrame(ctx);
}

jbool M_mindustry_ai_types_LogicAI_retarget_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ai/types/LogicAI:retarget", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(137);
	popStackFrame(ctx);
	return (jint(1));
	}

	popStackFrame(ctx);
}

jbool M_mindustry_ai_types_LogicAI_invalid_mindustry_gen_Teamc_R_boolean(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ai/types/LogicAI:invalid", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(142);
	popStackFrame(ctx);
	return (jint(0));
	}

	popStackFrame(ctx);
}

jbool M_mindustry_ai_types_LogicAI_shouldShoot_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ai/types/LogicAI:shouldShoot", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(147);
	if (((jint)((mindustry_ai_types_LogicAI *) NULL_CHECK((frame[0].o)))->F_shoot) == 0) goto label_1;
	}
	{
	sp[0].o = (jobject)((mindustry_entities_units_AIController *) NULL_CHECK((frame[0].o)))->F_unit;
	sp[0].o = (jobject)((mindustry_gen_Unit *) NULL_CHECK(sp[0].o))->F_type;
	if (((jint)((mindustry_type_UnitType *) NULL_CHECK(sp[0].o))->F_canBoost) == 0) goto label_2;
	}
	{
	if (((jint)((mindustry_ai_types_LogicAI *) NULL_CHECK((frame[0].o)))->F_boost) != 0) goto label_1;
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

jobject M_mindustry_ai_types_LogicAI_target_float_float_float_boolean_boolean_R_mindustry_gen_Teamc(jcontext ctx, jobject self, jfloat param0, jfloat param1, jfloat param2, jbool param3, jbool param4) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ai/types/LogicAI:target", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	frame[2].f = param1;
	frame[3].f = param2;
	frame[4].i = param3;
	frame[5].i = param4;
	{
	LINE_NUMBER(153);
	clinit_mindustry_ai_types_LogicAI$1(ctx);
	sp[0].o = (jobject)SF_mindustry_ai_types_LogicAI$1_$SwitchMap$mindustry$logic$LUnitControl;
	sp[1].o = (jobject)((mindustry_ai_types_LogicAI *) NULL_CHECK((frame[0].o)))->F_aimControl;
	jint temp0 = (jint)((func_mindustry_logic_LUnitControl_ordinal_R_int) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_mindustry_logic_LUnitControl_ordinal_R_int])(ctx, sp[1].o);
	switch(((jint)ARRAY_ACCESS(jint, sp[0].o, temp0))) {
		case 6: goto label_1;
		case 7: goto label_2;
		default: goto label_3;
	}
	}
label_1:;
	{
	LINE_NUMBER(154);
	sp[0].o = (jobject)((mindustry_ai_types_LogicAI *) NULL_CHECK((frame[0].o)))->F_posTarget;
	sp += 1;
	goto label_4;
	}
label_2:;
	{
	LINE_NUMBER(155);
	sp[0].o = (jobject)((mindustry_ai_types_LogicAI *) NULL_CHECK((frame[0].o)))->F_mainTarget;
	sp += 1;
	goto label_4;
	}
label_3:;
	LINE_NUMBER(156);
	INST_ACONST_NULL();
label_4:;
	LINE_NUMBER(153);
	popStackFrame(ctx);
	INST_ARETURN();

	popStackFrame(ctx);
}

static void initAnnotations(jcontext ctx) {
	auto &clazz = class_mindustry_ai_types_LogicAI;
	auto fields = (java_lang_reflect_Field **) ((jarray) clazz.fields)->data;
	auto methods = (java_lang_reflect_Method **) ((jarray) clazz.methods)->data;
	auto constructors = (java_lang_reflect_Constructor **) ((jarray) clazz.constructors)->data;

	fields[0]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[1]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[2]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[3]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[4]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[5]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[6]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[7]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	{ // Field controller
		auto annotationArray = (jarray) createArray(ctx, &class_java_lang_annotation_Annotation, 1);
		fields[8]->F_annotations = (intptr_t) annotationArray;
		auto annotations = (jobject *) annotationArray->data;
		annotations[0] = gcAlloc(ctx, &class_arc_util_Nullable);
	}

	fields[9]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[10]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[11]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[12]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[13]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[14]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[15]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[16]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	((java_lang_reflect_Method *) ((java_lang_reflect_Constructor *) constructors[0])->F_method)->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[0]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[1]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[2]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[3]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[4]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[5]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[6]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[7]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);
}

void *vtable_mindustry_ai_types_LogicAI[] {
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
	(void *) M_mindustry_entities_units_AIController_unit_mindustry_gen_Unit,
	(void *) M_mindustry_entities_units_AIController_unit_R_mindustry_gen_Unit,
	(void *) M_mindustry_entities_units_UnitController_hit_mindustry_gen_Bullet,
	(void *) M_mindustry_entities_units_UnitController_isValidController_R_boolean,
	(void *) M_mindustry_entities_units_AIController_isLogicControllable_R_boolean,
	(void *) M_mindustry_entities_units_AIController_updateUnit,
	(void *) M_mindustry_entities_units_UnitController_removed_mindustry_gen_Unit,
	(void *) M_mindustry_entities_units_AIController_afterRead_mindustry_gen_Unit,
	(void *) M_mindustry_entities_units_AIController_resetTimers,
	(void *) M_mindustry_entities_units_AIController_hasStance_mindustry_ai_UnitStance_R_boolean,
	(void *) M_mindustry_entities_units_AIController_stanceChanged,
	(void *) M_mindustry_ai_types_LogicAI_keepState_R_boolean,
	(void *) M_mindustry_entities_units_AIController_stopShooting,
	(void *) M_mindustry_entities_units_AIController_fallback_R_mindustry_entities_units_AIController,
	(void *) M_mindustry_entities_units_AIController_useFallback_R_boolean,
	(void *) M_mindustry_entities_units_AIController_updateVisuals,
	(void *) M_mindustry_ai_types_LogicAI_updateMovement,
	(void *) M_mindustry_entities_units_AIController_updateTargeting,
	(void *) M_mindustry_entities_units_AIController_faceTarget,
	(void *) M_mindustry_entities_units_AIController_faceMovement,
	(void *) M_mindustry_ai_types_LogicAI_invalid_mindustry_gen_Teamc_R_boolean,
	(void *) M_mindustry_entities_units_AIController_pathfind_int,
	(void *) M_mindustry_entities_units_AIController_pathfind_int_boolean,
	(void *) M_mindustry_entities_units_AIController_pathfind_int_boolean_boolean,
	(void *) M_mindustry_entities_units_AIController_alterPathfind_arc_math_geom_Vec2_R_arc_math_geom_Vec2,
	(void *) M_mindustry_entities_units_AIController_targetInvalidated,
	(void *) M_mindustry_entities_units_AIController_updateWeapons,
	(void *) M_mindustry_ai_types_LogicAI_checkTarget_mindustry_gen_Teamc_float_float_float_R_boolean,
	(void *) M_mindustry_entities_units_AIController_shouldFire_R_boolean,
	(void *) M_mindustry_ai_types_LogicAI_shouldShoot_R_boolean,
	(void *) M_mindustry_entities_units_AIController_targetFlag_float_float_mindustry_world_meta_BlockFlag_boolean_R_mindustry_gen_Teamc,
	(void *) M_mindustry_entities_units_AIController_targetFlagActive_float_float_mindustry_world_meta_BlockFlag_boolean_R_mindustry_gen_Teamc,
	(void *) M_mindustry_ai_types_LogicAI_target_float_float_float_boolean_boolean_R_mindustry_gen_Teamc,
	(void *) M_mindustry_ai_types_LogicAI_retarget_R_boolean,
	(void *) M_mindustry_entities_units_AIController_findMainTarget_float_float_float_boolean_boolean_R_mindustry_gen_Teamc,
	(void *) M_mindustry_entities_units_AIController_findTarget_float_float_float_boolean_boolean_R_mindustry_gen_Teamc,
	(void *) M_mindustry_entities_units_AIController_commandTarget_mindustry_gen_Teamc,
	(void *) M_mindustry_entities_units_AIController_commandPosition_arc_math_geom_Vec2,
	(void *) M_mindustry_entities_units_AIController_init,
	(void *) M_mindustry_entities_units_AIController_getClosestSpawner_R_mindustry_world_Tile,
	(void *) M_mindustry_entities_units_AIController_unloadPayloads,
	(void *) M_mindustry_entities_units_AIController_circleAttack_float,
	(void *) M_mindustry_entities_units_AIController_circle_arc_math_geom_Position_float,
	(void *) M_mindustry_entities_units_AIController_circle_arc_math_geom_Position_float_float,
	(void *) M_mindustry_entities_units_AIController_moveTo_arc_math_geom_Position_float,
	(void *) M_mindustry_entities_units_AIController_moveTo_arc_math_geom_Position_float_float,
	(void *) M_mindustry_entities_units_AIController_moveTo_arc_math_geom_Position_float_float_boolean_arc_math_geom_Vec2,
	(void *) M_mindustry_entities_units_AIController_moveTo_arc_math_geom_Position_float_float_boolean_arc_math_geom_Vec2_boolean,
	(void *) M_mindustry_entities_units_AIController_prefSpeed_R_float,
	(void *) M_mindustry_entities_units_AIController_lambda$target$1_boolean_mindustry_gen_Building_R_boolean,
	(void *) M_mindustry_ai_types_LogicAI_checkTargetTimer_java_lang_Object_R_boolean,
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
	{ "unit", "(Lmindustry/gen/Unit;)V" },
	{ "unit", "()Lmindustry/gen/Unit;" },
	{ "hit", "(Lmindustry/gen/Bullet;)V" },
	{ "isValidController", "()Z" },
	{ "isLogicControllable", "()Z" },
	{ "updateUnit", "()V" },
	{ "removed", "(Lmindustry/gen/Unit;)V" },
	{ "afterRead", "(Lmindustry/gen/Unit;)V" },
	{ "resetTimers", "()V" },
	{ "hasStance", "(Lmindustry/ai/UnitStance;)Z" },
	{ "stanceChanged", "()V" },
	{ "keepState", "()Z" },
	{ "stopShooting", "()V" },
	{ "fallback", "()Lmindustry/entities/units/AIController;" },
	{ "useFallback", "()Z" },
	{ "updateVisuals", "()V" },
	{ "updateMovement", "()V" },
	{ "updateTargeting", "()V" },
	{ "faceTarget", "()V" },
	{ "faceMovement", "()V" },
	{ "invalid", "(Lmindustry/gen/Teamc;)Z" },
	{ "pathfind", "(I)V" },
	{ "pathfind", "(IZ)V" },
	{ "pathfind", "(IZZ)V" },
	{ "alterPathfind", "(Larc/math/geom/Vec2;)Larc/math/geom/Vec2;" },
	{ "targetInvalidated", "()V" },
	{ "updateWeapons", "()V" },
	{ "checkTarget", "(Lmindustry/gen/Teamc;FFF)Z" },
	{ "shouldFire", "()Z" },
	{ "shouldShoot", "()Z" },
	{ "targetFlag", "(FFLmindustry/world/meta/BlockFlag;Z)Lmindustry/gen/Teamc;" },
	{ "targetFlagActive", "(FFLmindustry/world/meta/BlockFlag;Z)Lmindustry/gen/Teamc;" },
	{ "target", "(FFFZZ)Lmindustry/gen/Teamc;" },
	{ "retarget", "()Z" },
	{ "findMainTarget", "(FFFZZ)Lmindustry/gen/Teamc;" },
	{ "findTarget", "(FFFZZ)Lmindustry/gen/Teamc;" },
	{ "commandTarget", "(Lmindustry/gen/Teamc;)V" },
	{ "commandPosition", "(Larc/math/geom/Vec2;)V" },
	{ "init", "()V" },
	{ "getClosestSpawner", "()Lmindustry/world/Tile;" },
	{ "unloadPayloads", "()V" },
	{ "circleAttack", "(F)V" },
	{ "circle", "(Larc/math/geom/Position;F)V" },
	{ "circle", "(Larc/math/geom/Position;FF)V" },
	{ "moveTo", "(Larc/math/geom/Position;F)V" },
	{ "moveTo", "(Larc/math/geom/Position;FF)V" },
	{ "moveTo", "(Larc/math/geom/Position;FFZLarc/math/geom/Vec2;)V" },
	{ "moveTo", "(Larc/math/geom/Position;FFZLarc/math/geom/Vec2;Z)V" },
	{ "prefSpeed", "()F" },
	{ "lambda$target$1", "(ZLmindustry/gen/Building;)Z" },
	{ "checkTargetTimer", "(Ljava/lang/Object;)Z" },
};

static FieldMetadata fields[] {
	{ "transferDelay", &class_float, (intptr_t) &SF_mindustry_ai_types_LogicAI_transferDelay, "F", 25 },
	{ "logicControlTimeout", &class_float, (intptr_t) &SF_mindustry_ai_types_LogicAI_logicControlTimeout, "F", 25 },
	{ "control", &class_mindustry_logic_LUnitControl, offsetof(mindustry_ai_types_LogicAI, F_control), "Lmindustry/logic/LUnitControl;", 1 },
	{ "moveX", &class_float, offsetof(mindustry_ai_types_LogicAI, F_moveX), "F", 1 },
	{ "moveY", &class_float, offsetof(mindustry_ai_types_LogicAI, F_moveY), "F", 1 },
	{ "moveRad", &class_float, offsetof(mindustry_ai_types_LogicAI, F_moveRad), "F", 1 },
	{ "controlTimer", &class_float, offsetof(mindustry_ai_types_LogicAI, F_controlTimer), "F", 1 },
	{ "targetTimer", &class_float, offsetof(mindustry_ai_types_LogicAI, F_targetTimer), "F", 1 },
	{ "controller", &class_mindustry_gen_Building, offsetof(mindustry_ai_types_LogicAI, F_controller), "Lmindustry/gen/Building;", 1 },
	{ "plan", &class_mindustry_entities_units_BuildPlan, offsetof(mindustry_ai_types_LogicAI, F_plan), "Lmindustry/entities/units/BuildPlan;", 1 },
	{ "execCache", &class_arc_struct_ObjectMap, offsetof(mindustry_ai_types_LogicAI, F_execCache), "Larc/struct/ObjectMap;", 1 },
	{ "aimControl", &class_mindustry_logic_LUnitControl, offsetof(mindustry_ai_types_LogicAI, F_aimControl), "Lmindustry/logic/LUnitControl;", 1 },
	{ "boost", &class_boolean, offsetof(mindustry_ai_types_LogicAI, F_boost), "Z", 1 },
	{ "mainTarget", &class_mindustry_gen_Teamc, offsetof(mindustry_ai_types_LogicAI, F_mainTarget), "Lmindustry/gen/Teamc;", 1 },
	{ "shoot", &class_boolean, offsetof(mindustry_ai_types_LogicAI, F_shoot), "Z", 1 },
	{ "posTarget", &class_mindustry_gen_PosTeam, offsetof(mindustry_ai_types_LogicAI, F_posTarget), "Lmindustry/gen/PosTeam;", 1 },
	{ "radars", &class_arc_struct_ObjectSet, offsetof(mindustry_ai_types_LogicAI, F_radars), "Larc/struct/ObjectSet;", 2 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_mindustry_ai_types_LogicAI, 0, "()V", 1 },
	{ "keepState", (intptr_t) M_mindustry_ai_types_LogicAI_keepState_R_boolean, VTABLE_mindustry_ai_types_LogicAI_keepState_R_boolean, "()Z", 1 },
	{ "updateMovement", (intptr_t) M_mindustry_ai_types_LogicAI_updateMovement, VTABLE_mindustry_ai_types_LogicAI_updateMovement, "()V", 1 },
	{ "checkTargetTimer", (intptr_t) M_mindustry_ai_types_LogicAI_checkTargetTimer_java_lang_Object_R_boolean, VTABLE_mindustry_ai_types_LogicAI_checkTargetTimer_java_lang_Object_R_boolean, "(Ljava/lang/Object;)Z", 1 },
	{ "checkTarget", (intptr_t) M_mindustry_ai_types_LogicAI_checkTarget_mindustry_gen_Teamc_float_float_float_R_boolean, VTABLE_mindustry_ai_types_LogicAI_checkTarget_mindustry_gen_Teamc_float_float_float_R_boolean, "(Lmindustry/gen/Teamc;FFF)Z", 1 },
	{ "retarget", (intptr_t) M_mindustry_ai_types_LogicAI_retarget_R_boolean, VTABLE_mindustry_ai_types_LogicAI_retarget_R_boolean, "()Z", 1 },
	{ "invalid", (intptr_t) M_mindustry_ai_types_LogicAI_invalid_mindustry_gen_Teamc_R_boolean, VTABLE_mindustry_ai_types_LogicAI_invalid_mindustry_gen_Teamc_R_boolean, "(Lmindustry/gen/Teamc;)Z", 1 },
	{ "shouldShoot", (intptr_t) M_mindustry_ai_types_LogicAI_shouldShoot_R_boolean, VTABLE_mindustry_ai_types_LogicAI_shouldShoot_R_boolean, "()Z", 1 },
	{ "target", (intptr_t) M_mindustry_ai_types_LogicAI_target_float_float_float_boolean_boolean_R_mindustry_gen_Teamc, VTABLE_mindustry_ai_types_LogicAI_target_float_float_float_boolean_boolean_R_mindustry_gen_Teamc, "(FFFZZ)Lmindustry/gen/Teamc;", 1 },
};

Class class_mindustry_ai_types_LogicAI{
		.nativeName = (intptr_t) "mindustry/ai/types/LogicAI",
		.parentClass = (intptr_t) &class_mindustry_entities_units_AIController,
		.size = sizeof(mindustry_ai_types_LogicAI),
		.classVtable = (intptr_t) vtable_mindustry_ai_types_LogicAI,
		.staticInitializer = (intptr_t) clinit_mindustry_ai_types_LogicAI,
		.annotationInitializer = (intptr_t) initAnnotations,
		.markFunction = (intptr_t) mark_mindustry_ai_types_LogicAI,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 33,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 17,
		.nativeFields = (intptr_t) fields,
		.methodCount = 9,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 62,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_mindustry_ai_types_LogicAI = registerClass(&class_mindustry_ai_types_LogicAI);

}
