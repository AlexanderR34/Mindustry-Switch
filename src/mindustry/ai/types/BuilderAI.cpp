#include "mindustry/ai/types/BuilderAI.h"
#include "mindustry/ai/types/BuilderAI_invoke_arc_func_Boolf_1.h"
#include "mindustry/world/blocks/ConstructBlock_ConstructBuild.h"
#include "mindustry/ai/types/GroundAI.h"
#include "java/lang/reflect/Constructor.h"
#include "java/lang/reflect/Method.h"
#include "mindustry/entities/units/BuildPlan.h"
#include "mindustry/world/Tile.h"
#include "arc/math/geom/Position.h"
#include "mindustry/gen/Healthc.h"
#include "mindustry/ai/types/BuilderAI_invoke_arc_func_Cons_1.h"
#include "arc/func/Boolf.h"
#include "mindustry/ai/UnitStance.h"
#include "java/lang/reflect/Field.h"
#include "mindustry/gen/Unit.h"
#include "java/util/Iterator.h"
#include "mindustry/ai/types/BuilderAI.h"
#include "arc/util/Time.h"
#include "arc/struct/Queue.h"
#include "arc/util/Nullable.h"
#include "arc/util/Interval.h"
#include "mindustry/gen/Building.h"
#include "mindustry/entities/units/UnitController.h"
#include "mindustry/gen/Posc.h"
#include "java/lang/Object.h"
#include "mindustry/entities/units/AIController.h"
#include "mindustry/gen/Builderc.h"
#include "mindustry/entities/Units.h"
#include "mindustry/world/Block.h"
#include "mindustry/gen/Groups.h"
#include "mindustry/game/Rules.h"
#include "mindustry/world/blocks/storage/CoreBlock_CoreBuild.h"
#include "mindustry/gen/Unitc.h"
#include "arc/func/Cons.h"
#include "mindustry/world/blocks/environment/Floor.h"
#include "mindustry/game/Rules_TeamRule.h"
#include "java/lang/Math.h"
#include "mindustry/gen/Teamc.h"
#include "java/lang/annotation/Annotation.h"
#include "mindustry/game/Teams_TeamData.h"
#include "mindustry/ai/types/CommandAI.h"
#include "mindustry/type/UnitType.h"
#include "mindustry/game/Teams_BlockPlan.h"
#include "mindustry/entities/EntityGroup.h"
#include "mindustry/ai/types/FlyingAI.h"
#include "mindustry/gen/Player.h"
#include "mindustry/ai/types/PrebuildAI.h"
#include "mindustry/game/Team.h"
#include "mindustry/Vars.h"
#include "mindustry/core/GameState.h"
#include "mindustry/core/World.h"
#include "mindustry/world/Build.h"

extern "C" {

jfloat SF_mindustry_ai_types_BuilderAI_buildRadius;
jfloat SF_mindustry_ai_types_BuilderAI_retreatDst;
jfloat SF_mindustry_ai_types_BuilderAI_retreatDelay;
jfloat SF_mindustry_ai_types_BuilderAI_defaultRebuildPeriod;

void mark_mindustry_ai_types_BuilderAI(jobject object, jint mark, jint depth) {
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
	auto self = (mindustry_ai_types_BuilderAI *) object;
	if (self->F_assistFollowing)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_assistFollowing)->clazz)->markFunction)((jobject) self->F_assistFollowing, mark, depth + 1);
	if (self->F_following)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_following)->clazz)->markFunction)((jobject) self->F_following, mark, depth + 1);
	if (self->F_enemy)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_enemy)->clazz)->markFunction)((jobject) self->F_enemy, mark, depth + 1);
	if (self->F_lastPlan)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_lastPlan)->clazz)->markFunction)((jobject) self->F_lastPlan, mark, depth + 1);
}

void init_mindustry_ai_types_BuilderAI_boolean_float(jcontext ctx, jobject self, jbool param0, jfloat param1) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ai/types/BuilderAI:<init>", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_ai_types_BuilderAI(ctx);
	frame[0].o = self;
	frame[1].i = param0;
	frame[2].f = param1;
	{
	LINE_NUMBER(30);
	init_mindustry_entities_units_AIController(ctx, (frame[0].o));
	LINE_NUMBER(23);
	((mindustry_ai_types_BuilderAI *) NULL_CHECK((frame[0].o)))->F_fleeRange = (jfloat(370.0f));
	((mindustry_ai_types_BuilderAI *) NULL_CHECK((frame[0].o)))->F_rebuildPeriod = (clinit_mindustry_ai_types_BuilderAI(ctx), (jfloat)SF_mindustry_ai_types_BuilderAI_defaultRebuildPeriod);
	LINE_NUMBER(27);
	((mindustry_ai_types_BuilderAI *) NULL_CHECK((frame[0].o)))->F_found = (jint(0));
	LINE_NUMBER(31);
	((mindustry_ai_types_BuilderAI *) NULL_CHECK((frame[0].o)))->F_alwaysFlee = (frame[1].i);
	LINE_NUMBER(32);
	((mindustry_ai_types_BuilderAI *) NULL_CHECK((frame[0].o)))->F_fleeRange = (frame[2].f);
	LINE_NUMBER(33);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_mindustry_ai_types_BuilderAI(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ai/types/BuilderAI:<init>", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_ai_types_BuilderAI(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(35);
	init_mindustry_entities_units_AIController(ctx, (frame[0].o));
	LINE_NUMBER(23);
	((mindustry_ai_types_BuilderAI *) NULL_CHECK((frame[0].o)))->F_fleeRange = (jfloat(370.0f));
	((mindustry_ai_types_BuilderAI *) NULL_CHECK((frame[0].o)))->F_rebuildPeriod = (clinit_mindustry_ai_types_BuilderAI(ctx), (jfloat)SF_mindustry_ai_types_BuilderAI_defaultRebuildPeriod);
	LINE_NUMBER(27);
	((mindustry_ai_types_BuilderAI *) NULL_CHECK((frame[0].o)))->F_found = (jint(0));
	LINE_NUMBER(36);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_ai_types_BuilderAI_init(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ai/types/BuilderAI:init", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(41);
	if ((floatCompare(((jfloat)((mindustry_ai_types_BuilderAI *) NULL_CHECK((frame[0].o)))->F_rebuildPeriod), (clinit_mindustry_ai_types_BuilderAI(ctx), (jfloat)SF_mindustry_ai_types_BuilderAI_defaultRebuildPeriod), -1)) != 0) goto label_1;
	}
	{
	sp[0].o = (jobject)((mindustry_entities_units_AIController *) NULL_CHECK((frame[0].o)))->F_unit;
	sp[0].o = (jobject)((mindustry_gen_Unit *) NULL_CHECK(sp[0].o))->F_team;
	sp[0].o = (jobject)((func_mindustry_game_Team_rules_R_mindustry_game_Rules$TeamRule) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_game_Team_rules_R_mindustry_game_Rules$TeamRule])(ctx, sp[0].o);
	if (((jint)((mindustry_game_Rules$TeamRule *) NULL_CHECK(sp[0].o))->F_buildAi) == 0) goto label_1;
	}
	{
	LINE_NUMBER(42);
	((mindustry_ai_types_BuilderAI *) NULL_CHECK((frame[0].o)))->F_rebuildPeriod = (jfloat(10.0f));
	}
label_1:;
	LINE_NUMBER(44);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_ai_types_BuilderAI_updateMovement(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[16];
	auto stack = &frame[8];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ai/types/BuilderAI:updateMovement", 16 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(49);
	sp[0].o = (jobject)((mindustry_entities_units_AIController *) NULL_CHECK((frame[0].o)))->F_target;
	if (sp[0].o == nullptr) goto label_1;
	}
	{
	jint temp0 = (jint)((func_mindustry_ai_types_BuilderAI_shouldShoot_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_ai_types_BuilderAI_shouldShoot_R_boolean])(ctx, (frame[0].o));
	if (temp0 == 0) goto label_1;
	}
	{
	LINE_NUMBER(50);
	sp[0].o = (jobject)((mindustry_entities_units_AIController *) NULL_CHECK((frame[0].o)))->F_unit;
	sp[1].o = (jobject)((mindustry_entities_units_AIController *) NULL_CHECK((frame[0].o)))->F_target;
	((func_mindustry_gen_Unit_lookAt_arc_math_geom_Position) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_gen_Unit_lookAt_arc_math_geom_Position])(ctx, sp[0].o, sp[1].o);
	goto label_3;
	}
label_1:;
	{
	LINE_NUMBER(51);
	sp[0].o = (jobject)((mindustry_entities_units_AIController *) NULL_CHECK((frame[0].o)))->F_unit;
	sp[0].o = (jobject)((mindustry_gen_Unit *) NULL_CHECK(sp[0].o))->F_type;
	if (((jint)((mindustry_type_UnitType *) NULL_CHECK(sp[0].o))->F_flying) != 0) goto label_3;
	}
	{
	LINE_NUMBER(52);
	sp[0].o = (jobject)((mindustry_entities_units_AIController *) NULL_CHECK((frame[0].o)))->F_unit;
	sp[1].o = (jobject)((mindustry_entities_units_AIController *) NULL_CHECK((frame[0].o)))->F_unit;
	jfloat temp0 = (jfloat)((func_mindustry_gen_Unit_prefRotation_R_float) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_mindustry_gen_Unit_prefRotation_R_float])(ctx, sp[1].o);
	((func_mindustry_gen_Unit_lookAt_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_gen_Unit_lookAt_float])(ctx, sp[0].o, temp0);
	}
label_3:;
	{
	LINE_NUMBER(55);
	sp[0].o = (jobject)((mindustry_entities_units_AIController *) NULL_CHECK((frame[0].o)))->F_unit;
	((mindustry_gen_Unit *) NULL_CHECK(sp[0].o))->F_updateBuilding = (jint(1));
	LINE_NUMBER(57);
	sp[0].o = (jobject)((mindustry_ai_types_BuilderAI *) NULL_CHECK((frame[0].o)))->F_assistFollowing;
	if (sp[0].o == nullptr) goto label_6;
	}
	{
	sp[0].o = (jobject)((mindustry_ai_types_BuilderAI *) NULL_CHECK((frame[0].o)))->F_assistFollowing;
	jint temp0 = (jint)((func_mindustry_gen_Unit_isValid_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_gen_Unit_isValid_R_boolean])(ctx, sp[0].o);
	if (temp0 != 0) goto label_6;
	}
	{
	((mindustry_ai_types_BuilderAI *) NULL_CHECK((frame[0].o)))->F_assistFollowing = (jref) (jobject(nullptr));
	}
label_6:;
	{
	LINE_NUMBER(58);
	sp[0].o = (jobject)((mindustry_ai_types_BuilderAI *) NULL_CHECK((frame[0].o)))->F_following;
	if (sp[0].o == nullptr) goto label_7;
	}
	{
	sp[0].o = (jobject)((mindustry_ai_types_BuilderAI *) NULL_CHECK((frame[0].o)))->F_following;
	jint temp0 = (jint)((func_mindustry_gen_Unit_isValid_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_gen_Unit_isValid_R_boolean])(ctx, sp[0].o);
	if (temp0 != 0) goto label_7;
	}
	{
	((mindustry_ai_types_BuilderAI *) NULL_CHECK((frame[0].o)))->F_following = (jref) (jobject(nullptr));
	}
label_7:;
	{
	LINE_NUMBER(60);
	sp[0].o = (jobject)((mindustry_ai_types_BuilderAI *) NULL_CHECK((frame[0].o)))->F_assistFollowing;
	if (sp[0].o == nullptr) goto label_8;
	}
	{
	sp[0].o = (jobject)((mindustry_ai_types_BuilderAI *) NULL_CHECK((frame[0].o)))->F_assistFollowing;
	jint temp0 = (jint)((func_mindustry_gen_Unit_activelyBuilding_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_gen_Unit_activelyBuilding_R_boolean])(ctx, sp[0].o);
	if (temp0 == 0) goto label_8;
	}
	{
	LINE_NUMBER(61);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((mindustry_ai_types_BuilderAI *) NULL_CHECK((frame[0].o)))->F_assistFollowing;
	((mindustry_ai_types_BuilderAI *) NULL_CHECK(sp[0].o))->F_following = (jref) sp[1].o;
	}
label_8:;
	{
	LINE_NUMBER(64);
	frame[1].i = (jint(0));
	LINE_NUMBER(65);
	sp[0].o = frame[0].o;
	clinit_mindustry_ai_UnitStance(ctx);
	sp[1].o = (jobject)SF_mindustry_ai_UnitStance_holdPosition;
	jint temp0 = (jint)((func_mindustry_ai_types_BuilderAI_hasStance_mindustry_ai_UnitStance_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_ai_types_BuilderAI_hasStance_mindustry_ai_UnitStance_R_boolean])(ctx, sp[0].o, sp[1].o);
	frame[2].i = temp0;
	LINE_NUMBER(67);
	sp[0].o = (jobject)((mindustry_ai_types_BuilderAI *) NULL_CHECK((frame[0].o)))->F_following;
	if (sp[0].o == nullptr) goto label_12;
	}
	{
	LINE_NUMBER(68);
	((mindustry_ai_types_BuilderAI *) NULL_CHECK((frame[0].o)))->F_retreatTimer = (jfloat(0));
	LINE_NUMBER(72);
	sp[0].o = (jobject)((mindustry_ai_types_BuilderAI *) NULL_CHECK((frame[0].o)))->F_following;
	jint temp0 = (jint)((func_mindustry_gen_Unit_isValid_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_gen_Unit_isValid_R_boolean])(ctx, sp[0].o);
	if (temp0 == 0) goto label_15;
	}
	{
	sp[0].o = (jobject)((mindustry_ai_types_BuilderAI *) NULL_CHECK((frame[0].o)))->F_following;
	jint temp0 = (jint)((func_mindustry_gen_Unit_activelyBuilding_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_gen_Unit_activelyBuilding_R_boolean])(ctx, sp[0].o);
	if (temp0 != 0) goto label_16;
	}
label_15:;
	{
	LINE_NUMBER(73);
	((mindustry_ai_types_BuilderAI *) NULL_CHECK((frame[0].o)))->F_following = (jref) (jobject(nullptr));
	LINE_NUMBER(74);
	sp[0].o = (jobject)((mindustry_entities_units_AIController *) NULL_CHECK((frame[0].o)))->F_unit;
	sp[0].o = (jobject)((mindustry_gen_Unit *) NULL_CHECK(sp[0].o))->F_plans;
	((func_arc_struct_Queue_clear) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Queue_clear])(ctx, sp[0].o);
	LINE_NUMBER(75);
	popStackFrame(ctx);
	return;
	}
label_16:;
	{
	LINE_NUMBER(79);
	sp[0].o = (jobject)((mindustry_entities_units_AIController *) NULL_CHECK((frame[0].o)))->F_unit;
	sp[0].o = (jobject)((mindustry_gen_Unit *) NULL_CHECK(sp[0].o))->F_plans;
	((func_arc_struct_Queue_clear) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Queue_clear])(ctx, sp[0].o);
	LINE_NUMBER(80);
	sp[0].o = (jobject)((mindustry_entities_units_AIController *) NULL_CHECK((frame[0].o)))->F_unit;
	sp[0].o = (jobject)((mindustry_gen_Unit *) NULL_CHECK(sp[0].o))->F_plans;
	sp[1].o = (jobject)((mindustry_ai_types_BuilderAI *) NULL_CHECK((frame[0].o)))->F_following;
	sp[1].o = (jobject)((func_mindustry_gen_Unit_buildPlan_R_mindustry_entities_units_BuildPlan) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_mindustry_gen_Unit_buildPlan_R_mindustry_entities_units_BuildPlan])(ctx, sp[1].o);
	((func_arc_struct_Queue_addFirst_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Queue_addFirst_java_lang_Object])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(81);
	((mindustry_ai_types_BuilderAI *) NULL_CHECK((frame[0].o)))->F_lastPlan = (jref) (jobject(nullptr));
	goto label_21;
	}
label_12:;
	{
	LINE_NUMBER(82);
	sp[0].o = (jobject)((mindustry_entities_units_AIController *) NULL_CHECK((frame[0].o)))->F_unit;
	sp[0].o = (jobject)((func_mindustry_gen_Unit_buildPlan_R_mindustry_entities_units_BuildPlan) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_gen_Unit_buildPlan_R_mindustry_entities_units_BuildPlan])(ctx, sp[0].o);
	if (sp[0].o == nullptr) goto label_22;
	}
	{
	if (((jint)((mindustry_ai_types_BuilderAI *) NULL_CHECK((frame[0].o)))->F_alwaysFlee) == 0) goto label_21;
	}
label_22:;
	INST_ILOAD(2);
	if ((--sp)->i != 0) goto label_21;
	{
	LINE_NUMBER(84);
	sp[0].o = (jobject)((mindustry_entities_units_AIController *) NULL_CHECK((frame[0].o)))->F_timer;
	jint temp0 = (jint)((func_arc_util_Interval_get_int_float_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_util_Interval_get_int_float_R_boolean])(ctx, sp[0].o, (jint(3)), (jfloat(40.0f)));
	if (temp0 == 0) goto label_24;
	}
	{
	LINE_NUMBER(85);
	sp[0].o = frame[0].o;
	sp[1].o = frame[0].o;
	sp[2].o = (jobject)((mindustry_entities_units_AIController *) NULL_CHECK((frame[0].o)))->F_unit;
	jfloat temp0 = (jfloat)((mindustry_gen_Unit *) NULL_CHECK(sp[2].o))->F_x;
	sp[2].o = (jobject)((mindustry_entities_units_AIController *) NULL_CHECK((frame[0].o)))->F_unit;
	sp[1].o = (jobject)((func_mindustry_ai_types_BuilderAI_target_float_float_float_boolean_boolean_R_mindustry_gen_Teamc) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_mindustry_ai_types_BuilderAI_target_float_float_float_boolean_boolean_R_mindustry_gen_Teamc])(ctx, sp[1].o, temp0, ((jfloat)((mindustry_gen_Unit *) NULL_CHECK(sp[2].o))->F_y), ((jfloat)((mindustry_ai_types_BuilderAI *) NULL_CHECK((frame[0].o)))->F_fleeRange), (jint(1)), (jint(1)));
	((mindustry_ai_types_BuilderAI *) NULL_CHECK(sp[0].o))->F_enemy = (jref) sp[1].o;
	}
label_24:;
	{
	LINE_NUMBER(89);
	sp[0].o = frame[0].o;
	jfloat temp0 = ((jfloat)((mindustry_ai_types_BuilderAI *) NULL_CHECK(sp[0].o))->F_retreatTimer) + (clinit_arc_util_Time(ctx), (jfloat)SF_arc_util_Time_delta);
	((mindustry_ai_types_BuilderAI *) NULL_CHECK(sp[0].o))->F_retreatTimer = temp0;
	if ((floatCompare(temp0, (clinit_mindustry_ai_types_BuilderAI(ctx), (jfloat)SF_mindustry_ai_types_BuilderAI_retreatDelay), -1)) >= 0) goto label_26;
	}
	{
	if (((jint)((mindustry_ai_types_BuilderAI *) NULL_CHECK((frame[0].o)))->F_alwaysFlee) == 0) goto label_21;
	}
label_26:;
	{
	LINE_NUMBER(90);
	sp[0].o = (jobject)((mindustry_ai_types_BuilderAI *) NULL_CHECK((frame[0].o)))->F_enemy;
	if (sp[0].o == nullptr) goto label_21;
	}
	{
	LINE_NUMBER(91);
	sp[0].o = (jobject)((mindustry_entities_units_AIController *) NULL_CHECK((frame[0].o)))->F_unit;
	((func_mindustry_gen_Unit_clearBuilding) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_gen_Unit_clearBuilding])(ctx, sp[0].o);
	LINE_NUMBER(92);
	sp[0].o = (jobject)((mindustry_entities_units_AIController *) NULL_CHECK((frame[0].o)))->F_unit;
	sp[0].o = (jobject)((func_mindustry_gen_Unit_closestCore_R_mindustry_world_blocks_storage_CoreBlock$CoreBuild) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_gen_Unit_closestCore_R_mindustry_world_blocks_storage_CoreBlock$CoreBuild])(ctx, sp[0].o);
	frame[3].o = sp[0].o;
	LINE_NUMBER(93);
	if ((frame[3].o) == nullptr) goto label_21;
	}
	{
	sp[0].o = (jobject)((mindustry_entities_units_AIController *) NULL_CHECK((frame[0].o)))->F_unit;
	jint temp0 = (jint)((func_mindustry_gen_Unit_within_arc_math_geom_Position_float_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_gen_Unit_within_arc_math_geom_Position_float_R_boolean])(ctx, sp[0].o, (frame[3].o), (clinit_mindustry_ai_types_BuilderAI(ctx), (jfloat)SF_mindustry_ai_types_BuilderAI_retreatDst));
	if (temp0 != 0) goto label_21;
	}
	{
	LINE_NUMBER(94);
	((func_mindustry_ai_types_BuilderAI_moveTo_arc_math_geom_Position_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_ai_types_BuilderAI_moveTo_arc_math_geom_Position_float])(ctx, (frame[0].o), (frame[3].o), (clinit_mindustry_ai_types_BuilderAI(ctx), (jfloat)SF_mindustry_ai_types_BuilderAI_retreatDst));
	LINE_NUMBER(95);
	frame[1].i = (jint(1));
	}
label_21:;
	{
	LINE_NUMBER(101);
	sp[0].o = (jobject)((mindustry_entities_units_AIController *) NULL_CHECK((frame[0].o)))->F_unit;
	sp[0].o = (jobject)((func_mindustry_gen_Unit_buildPlan_R_mindustry_entities_units_BuildPlan) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_gen_Unit_buildPlan_R_mindustry_entities_units_BuildPlan])(ctx, sp[0].o);
	if (sp[0].o == nullptr) goto label_32;
	}
	{
	LINE_NUMBER(102);
	if (((jint)((mindustry_ai_types_BuilderAI *) NULL_CHECK((frame[0].o)))->F_alwaysFlee) != 0) goto label_34;
	}
	{
	((mindustry_ai_types_BuilderAI *) NULL_CHECK((frame[0].o)))->F_retreatTimer = (jfloat(0));
	}
label_34:;
	{
	LINE_NUMBER(104);
	sp[0].o = (jobject)((mindustry_entities_units_AIController *) NULL_CHECK((frame[0].o)))->F_unit;
	sp[0].o = (jobject)((func_mindustry_gen_Unit_buildPlan_R_mindustry_entities_units_BuildPlan) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_gen_Unit_buildPlan_R_mindustry_entities_units_BuildPlan])(ctx, sp[0].o);
	frame[3].o = sp[0].o;
	LINE_NUMBER(107);
	if (((jint)((mindustry_entities_units_BuildPlan *) NULL_CHECK((frame[3].o)))->F_breaking) != 0) goto label_36;
	}
	{
	sp[0].o = (jobject)((mindustry_entities_units_AIController *) NULL_CHECK((frame[0].o)))->F_timer;
	jint temp0 = (jint)((func_arc_util_Interval_get_int_float_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_util_Interval_get_int_float_R_boolean])(ctx, sp[0].o, (jint(1)), (jfloat(40.0f)));
	if (temp0 == 0) goto label_36;
	}
	{
	LINE_NUMBER(108);
	clinit_mindustry_gen_Groups(ctx);
	sp[0].o = (jobject)SF_mindustry_gen_Groups_player;
	sp[0].o = (jobject)((func_mindustry_entities_EntityGroup_iterator_R_java_util_Iterator) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_entities_EntityGroup_iterator_R_java_util_Iterator])(ctx, sp[0].o);
	frame[4].o = sp[0].o;
	}
label_38:;
	{
	jint temp0 = (jint)((func_java_util_Iterator_hasNext_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_hasNext_R_boolean, (frame[4].o)))(ctx, (frame[4].o));
	if (temp0 == 0) goto label_36;
	}
	{
	sp[0].o = (jobject)((func_java_util_Iterator_next_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_next_R_java_lang_Object, (frame[4].o)))(ctx, (frame[4].o));
	frame[5].o = (checkCast(ctx, &class_mindustry_gen_Player, sp[0].o));
	LINE_NUMBER(109);
	jint temp0 = (jint)((func_mindustry_gen_Player_isBuilder_R_boolean) ((void **) nullCheck(ctx, (frame[5].o))->vtable)[VTABLE_mindustry_gen_Player_isBuilder_R_boolean])(ctx, (frame[5].o));
	if (temp0 == 0) goto label_40;
	}
	{
	sp[0].o = (jobject)((func_mindustry_gen_Player_unit_R_mindustry_gen_Unit) ((void **) nullCheck(ctx, (frame[5].o))->vtable)[VTABLE_mindustry_gen_Player_unit_R_mindustry_gen_Unit])(ctx, (frame[5].o));
	jint temp0 = (jint)((func_mindustry_gen_Unit_activelyBuilding_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_gen_Unit_activelyBuilding_R_boolean])(ctx, sp[0].o);
	if (temp0 == 0) goto label_40;
	}
	{
	sp[0].o = (jobject)((func_mindustry_gen_Player_unit_R_mindustry_gen_Unit) ((void **) nullCheck(ctx, (frame[5].o))->vtable)[VTABLE_mindustry_gen_Player_unit_R_mindustry_gen_Unit])(ctx, (frame[5].o));
	sp[0].o = (jobject)((func_mindustry_gen_Unit_buildPlan_R_mindustry_entities_units_BuildPlan) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_gen_Unit_buildPlan_R_mindustry_entities_units_BuildPlan])(ctx, sp[0].o);
	jint temp0 = (jint)((func_mindustry_entities_units_BuildPlan_samePos_mindustry_entities_units_BuildPlan_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_entities_units_BuildPlan_samePos_mindustry_entities_units_BuildPlan_R_boolean])(ctx, sp[0].o, (frame[3].o));
	if (temp0 == 0) goto label_40;
	}
	{
	sp[0].o = (jobject)((func_mindustry_gen_Player_unit_R_mindustry_gen_Unit) ((void **) nullCheck(ctx, (frame[5].o))->vtable)[VTABLE_mindustry_gen_Player_unit_R_mindustry_gen_Unit])(ctx, (frame[5].o));
	sp[0].o = (jobject)((func_mindustry_gen_Unit_buildPlan_R_mindustry_entities_units_BuildPlan) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_gen_Unit_buildPlan_R_mindustry_entities_units_BuildPlan])(ctx, sp[0].o);
	if (((jint)((mindustry_entities_units_BuildPlan *) NULL_CHECK(sp[0].o))->F_breaking) == 0) goto label_40;
	}
	{
	LINE_NUMBER(110);
	sp[0].o = (jobject)((mindustry_entities_units_AIController *) NULL_CHECK((frame[0].o)))->F_unit;
	sp[0].o = (jobject)((mindustry_gen_Unit *) NULL_CHECK(sp[0].o))->F_plans;
	sp[0].o = (jobject)((func_arc_struct_Queue_removeFirst_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Queue_removeFirst_R_java_lang_Object])(ctx, sp[0].o);
	LINE_NUMBER(112);
	sp[0].o = (jobject)((mindustry_entities_units_AIController *) NULL_CHECK((frame[0].o)))->F_unit;
	sp[0].o = (jobject)((mindustry_gen_Unit *) NULL_CHECK(sp[0].o))->F_team;
	sp[0].o = (jobject)((func_mindustry_game_Team_data_R_mindustry_game_Teams$TeamData) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_game_Team_data_R_mindustry_game_Teams$TeamData])(ctx, sp[0].o);
	sp[0].o = (jobject)((mindustry_game_Teams$TeamData *) NULL_CHECK(sp[0].o))->F_plans;
	{ /* InvokeDynamic */
		clinit_mindustry_ai_types_BuilderAI_invoke_arc_func_Boolf_1(ctx);
		auto proxy = (mindustry_ai_types_BuilderAI_invoke_arc_func_Boolf_1 *) gcAlloc(ctx, &class_mindustry_ai_types_BuilderAI_invoke_arc_func_Boolf_1);
		proxy->F_field0 = (jref) (frame[3].o);
		sp[1].o = (jobject) proxy;
	}
	jint temp0 = (jint)((func_arc_struct_Queue_remove_arc_func_Boolf_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Queue_remove_arc_func_Boolf_R_boolean])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(113);
	popStackFrame(ctx);
	return;
	}
label_40:;
	LINE_NUMBER(115);
	goto label_38;
label_36:;
	{
	LINE_NUMBER(119);
	sp[0].o = (jobject)((mindustry_ai_types_BuilderAI *) NULL_CHECK((frame[0].o)))->F_lastPlan;
	if (sp[0].o == nullptr) goto label_44;
	}
	{
	sp[0].o = (jobject)((mindustry_ai_types_BuilderAI *) NULL_CHECK((frame[0].o)))->F_lastPlan;
	if (((jint)((mindustry_game_Teams$BlockPlan *) NULL_CHECK(sp[0].o))->F_removed) != 0) goto label_45;
	}
label_44:;
	{
	sp[0].o = frame[3].o;
	LINE_NUMBER(120);
	sp[0].o = (jobject)((func_mindustry_entities_units_BuildPlan_tile_R_mindustry_world_Tile) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_entities_units_BuildPlan_tile_R_mindustry_world_Tile])(ctx, sp[0].o);
	if (sp[0].o == nullptr) goto label_47;
	}
	{
	sp[0].o = (jobject)((func_mindustry_entities_units_BuildPlan_tile_R_mindustry_world_Tile) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_mindustry_entities_units_BuildPlan_tile_R_mindustry_world_Tile])(ctx, (frame[3].o));
	sp[0].o = (jobject)((mindustry_world_Tile *) NULL_CHECK(sp[0].o))->F_build;
	frame[6].o = sp[0].o;
	if ((isInstance(ctx, (frame[6].o), &class_mindustry_world_blocks_ConstructBlock$ConstructBuild)) == 0) goto label_47;
	}
	{
	frame[5].o = (checkCast(ctx, &class_mindustry_world_blocks_ConstructBlock$ConstructBuild, (frame[6].o)));
	sp[0].o = (jobject)((mindustry_world_blocks_ConstructBlock$ConstructBuild *) NULL_CHECK((frame[5].o)))->F_current;
	sp[1].o = (jobject)((mindustry_entities_units_BuildPlan *) NULL_CHECK((frame[3].o)))->F_block;
	if (sp[0].o == sp[1].o) goto label_49;
	}
label_47:;
	{
	if (((jint)((mindustry_entities_units_BuildPlan *) NULL_CHECK((frame[3].o)))->F_breaking) == 0) goto label_50;
	}
	{
	sp[0].o = (jobject)((mindustry_entities_units_AIController *) NULL_CHECK((frame[0].o)))->F_unit;
	LINE_NUMBER(122);
	sp[0].o = (jobject)((func_mindustry_gen_Unit_team_R_mindustry_game_Team) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_gen_Unit_team_R_mindustry_game_Team])(ctx, sp[0].o);
	jint temp0 = (jint)SM_mindustry_world_Build_validBreak_mindustry_game_Team_int_int_R_boolean(ctx, sp[0].o, ((jint)((mindustry_entities_units_BuildPlan *) NULL_CHECK((frame[3].o)))->F_x), ((jint)((mindustry_entities_units_BuildPlan *) NULL_CHECK((frame[3].o)))->F_y));
	if (temp0 == 0) goto label_45;
	}
	goto label_49;
label_50:;
	{
	sp[0].o = (jobject)((mindustry_entities_units_BuildPlan *) NULL_CHECK((frame[3].o)))->F_block;
	sp[1].o = (jobject)((mindustry_entities_units_AIController *) NULL_CHECK((frame[0].o)))->F_unit;
	LINE_NUMBER(123);
	sp[1].o = (jobject)((func_mindustry_gen_Unit_team_R_mindustry_game_Team) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_mindustry_gen_Unit_team_R_mindustry_game_Team])(ctx, sp[1].o);
	jint temp0 = (jint)SM_mindustry_world_Build_validPlace_mindustry_world_Block_mindustry_game_Team_int_int_int_R_boolean(ctx, sp[0].o, sp[1].o, ((jint)((mindustry_entities_units_BuildPlan *) NULL_CHECK((frame[3].o)))->F_x), ((jint)((mindustry_entities_units_BuildPlan *) NULL_CHECK((frame[3].o)))->F_y), ((jint)((mindustry_entities_units_BuildPlan *) NULL_CHECK((frame[3].o)))->F_rotation));
	if (temp0 == 0) goto label_45;
	}
label_49:;
	INST_ICONST(1);
	goto label_53;
label_45:;
	INST_ICONST(0);
label_53:;
	{
	sp -= 1;
	frame[4].i = sp[0].i;
	LINE_NUMBER(125);
	if ((frame[4].i) == 0) goto label_55;
	}
	{
	LINE_NUMBER(126);
	if ((frame[2].i) != 0) goto label_57;
	}
	{
	LINE_NUMBER(127);
	sp[0].o = (jobject)((mindustry_entities_units_AIController *) NULL_CHECK((frame[0].o)))->F_unit;
	sp[0].o = (jobject)((mindustry_gen_Unit *) NULL_CHECK(sp[0].o))->F_type;
	jfloat temp0 = (jfloat)((mindustry_type_UnitType *) NULL_CHECK(sp[0].o))->F_buildRange;
	sp[0].o = (jobject)((mindustry_entities_units_AIController *) NULL_CHECK((frame[0].o)))->F_unit;
	sp[0].o = (jobject)((mindustry_gen_Unit *) NULL_CHECK(sp[0].o))->F_type;
	jfloat temp1 = (jfloat)SM_java_lang_Math_min_float_float_R_float(ctx, (temp0 - (((jfloat)((mindustry_type_UnitType *) NULL_CHECK(sp[0].o))->F_hitSize) * (jfloat(2)))), (clinit_mindustry_ai_types_BuilderAI(ctx), (jfloat)SF_mindustry_ai_types_BuilderAI_buildRadius));
	frame[5].f = temp1;
	LINE_NUMBER(129);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((func_mindustry_entities_units_BuildPlan_tile_R_mindustry_world_Tile) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_mindustry_entities_units_BuildPlan_tile_R_mindustry_world_Tile])(ctx, (frame[3].o));
	((func_mindustry_ai_types_BuilderAI_moveTo_arc_math_geom_Position_float_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_ai_types_BuilderAI_moveTo_arc_math_geom_Position_float_float])(ctx, sp[0].o, sp[1].o, (frame[5].f), (jfloat(20.0f)));
	LINE_NUMBER(130);
	sp[0].o = (jobject)((mindustry_entities_units_AIController *) NULL_CHECK((frame[0].o)))->F_unit;
	sp[1].o = (jobject)((func_mindustry_entities_units_BuildPlan_tile_R_mindustry_world_Tile) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_mindustry_entities_units_BuildPlan_tile_R_mindustry_world_Tile])(ctx, (frame[3].o));
	jint temp2 = (jint)((func_mindustry_gen_Unit_within_arc_math_geom_Position_float_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_gen_Unit_within_arc_math_geom_Position_float_R_boolean])(ctx, sp[0].o, sp[1].o, (frame[5].f));
	if (temp2 != 0) goto label_61;
	}
	INST_ICONST(1);
	goto label_62;
label_61:;
	INST_ICONST(0);
label_62:;
	{
	sp -= 1;
	frame[1].i = sp[0].i;
	LINE_NUMBER(131);
	goto label_64;
	}
label_57:;
	{
	sp[0].o = (jobject)((mindustry_entities_units_AIController *) NULL_CHECK((frame[0].o)))->F_unit;
	sp[1].o = frame[3].o;
	sp[2].o = (jobject)((mindustry_entities_units_AIController *) NULL_CHECK((frame[0].o)))->F_unit;
	sp[2].o = (jobject)((mindustry_gen_Unit *) NULL_CHECK(sp[2].o))->F_type;
	jint temp0 = (jint)((func_mindustry_gen_Unit_within_arc_math_geom_Position_float_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_gen_Unit_within_arc_math_geom_Position_float_R_boolean])(ctx, sp[0].o, sp[1].o, (((jfloat)((mindustry_type_UnitType *) NULL_CHECK(sp[2].o))->F_buildRange) - (jfloat(8.0f))));
	if (temp0 != 0) goto label_64;
	}
	{
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	sp[0].o = (jobject)((mindustry_core_GameState *) NULL_CHECK(sp[0].o))->F_rules;
	if (((jint)((mindustry_game_Rules *) NULL_CHECK(sp[0].o))->F_infiniteResources) != 0) goto label_64;
	}
	{
	LINE_NUMBER(133);
	sp[0].o = (jobject)((mindustry_entities_units_AIController *) NULL_CHECK((frame[0].o)))->F_unit;
	sp[0].o = (jobject)((mindustry_gen_Unit *) NULL_CHECK(sp[0].o))->F_plans;
	sp[0].o = (jobject)((func_arc_struct_Queue_removeFirst_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Queue_removeFirst_R_java_lang_Object])(ctx, sp[0].o);
	LINE_NUMBER(134);
	((mindustry_ai_types_BuilderAI *) NULL_CHECK((frame[0].o)))->F_lastPlan = (jref) (jobject(nullptr));
	goto label_64;
	}
label_55:;
	{
	LINE_NUMBER(138);
	sp[0].o = (jobject)((mindustry_entities_units_AIController *) NULL_CHECK((frame[0].o)))->F_unit;
	sp[0].o = (jobject)((mindustry_gen_Unit *) NULL_CHECK(sp[0].o))->F_plans;
	sp[0].o = (jobject)((func_arc_struct_Queue_removeFirst_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Queue_removeFirst_R_java_lang_Object])(ctx, sp[0].o);
	LINE_NUMBER(139);
	((mindustry_ai_types_BuilderAI *) NULL_CHECK((frame[0].o)))->F_lastPlan = (jref) (jobject(nullptr));
	}
label_64:;
	LINE_NUMBER(141);
	goto label_68;
label_32:;
	{
	LINE_NUMBER(143);
	sp[0].o = (jobject)((mindustry_ai_types_BuilderAI *) NULL_CHECK((frame[0].o)))->F_assistFollowing;
	if (sp[0].o == nullptr) goto label_69;
	}
	INST_ILOAD(2);
	if ((--sp)->i != 0) goto label_69;
	{
	LINE_NUMBER(144);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((mindustry_ai_types_BuilderAI *) NULL_CHECK((frame[0].o)))->F_assistFollowing;
	sp[2].o = (jobject)((mindustry_ai_types_BuilderAI *) NULL_CHECK((frame[0].o)))->F_assistFollowing;
	sp[2].o = (jobject)((mindustry_gen_Unit *) NULL_CHECK(sp[2].o))->F_type;
	jfloat temp0 = (jfloat)((mindustry_type_UnitType *) NULL_CHECK(sp[2].o))->F_hitSize;
	sp[2].o = (jobject)((mindustry_entities_units_AIController *) NULL_CHECK((frame[0].o)))->F_unit;
	sp[2].o = (jobject)((mindustry_gen_Unit *) NULL_CHECK(sp[2].o))->F_type;
	((func_mindustry_ai_types_BuilderAI_moveTo_arc_math_geom_Position_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_ai_types_BuilderAI_moveTo_arc_math_geom_Position_float])(ctx, sp[0].o, sp[1].o, ((temp0 + (((jfloat)((mindustry_type_UnitType *) NULL_CHECK(sp[2].o))->F_hitSize) / (jfloat(2)))) + (jfloat(60.0f))));
	LINE_NUMBER(145);
	sp[0].o = (jobject)((mindustry_entities_units_AIController *) NULL_CHECK((frame[0].o)))->F_unit;
	sp[1].o = (jobject)((mindustry_ai_types_BuilderAI *) NULL_CHECK((frame[0].o)))->F_assistFollowing;
	sp[2].o = (jobject)((mindustry_ai_types_BuilderAI *) NULL_CHECK((frame[0].o)))->F_assistFollowing;
	sp[2].o = (jobject)((mindustry_gen_Unit *) NULL_CHECK(sp[2].o))->F_type;
	jfloat temp1 = (jfloat)((mindustry_type_UnitType *) NULL_CHECK(sp[2].o))->F_hitSize;
	sp[2].o = (jobject)((mindustry_entities_units_AIController *) NULL_CHECK((frame[0].o)))->F_unit;
	sp[2].o = (jobject)((mindustry_gen_Unit *) NULL_CHECK(sp[2].o))->F_type;
	jint temp2 = (jint)((func_mindustry_gen_Unit_within_arc_math_geom_Position_float_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_gen_Unit_within_arc_math_geom_Position_float_R_boolean])(ctx, sp[0].o, sp[1].o, ((temp1 + (((jfloat)((mindustry_type_UnitType *) NULL_CHECK(sp[2].o))->F_hitSize) / (jfloat(2)))) + (jfloat(65.0f))));
	if (temp2 != 0) goto label_72;
	}
	INST_ICONST(1);
	goto label_73;
label_72:;
	INST_ICONST(0);
label_73:;
	INST_ISTORE(1);
label_69:;
	{
	LINE_NUMBER(149);
	sp[0].o = (jobject)((mindustry_entities_units_AIController *) NULL_CHECK((frame[0].o)))->F_timer;
	jint temp0 = (jint)((func_arc_util_Interval_get_int_float_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_util_Interval_get_int_float_R_boolean])(ctx, sp[0].o, (jint(1)), (jfloat(20.0f)));
	if (temp0 == 0) goto label_74;
	}
	{
	LINE_NUMBER(150);
	((mindustry_ai_types_BuilderAI *) NULL_CHECK((frame[0].o)))->F_found = (jint(0));
	LINE_NUMBER(152);
	sp[0].o = (jobject)((mindustry_entities_units_AIController *) NULL_CHECK((frame[0].o)))->F_unit;
	sp[0].o = (jobject)((mindustry_gen_Unit *) NULL_CHECK(sp[0].o))->F_team;
	sp[1].o = (jobject)((mindustry_entities_units_AIController *) NULL_CHECK((frame[0].o)))->F_unit;
	jfloat temp0 = (jfloat)((mindustry_gen_Unit *) NULL_CHECK(sp[1].o))->F_x;
	sp[1].o = (jobject)((mindustry_entities_units_AIController *) NULL_CHECK((frame[0].o)))->F_unit;
	jfloat temp1 = (jfloat)((mindustry_gen_Unit *) NULL_CHECK(sp[1].o))->F_y;
	clinit_mindustry_ai_types_BuilderAI(ctx);
	jfloat temp2 = (jfloat)SF_mindustry_ai_types_BuilderAI_buildRadius;
	{ /* InvokeDynamic */
		clinit_mindustry_ai_types_BuilderAI_invoke_arc_func_Cons_1(ctx);
		auto proxy = (mindustry_ai_types_BuilderAI_invoke_arc_func_Cons_1 *) gcAlloc(ctx, &class_mindustry_ai_types_BuilderAI_invoke_arc_func_Cons_1);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[1].o = (jobject) proxy;
	}
	SM_mindustry_entities_Units_nearby_mindustry_game_Team_float_float_float_arc_func_Cons(ctx, sp[0].o, temp0, temp1, temp2, sp[1].o);
	LINE_NUMBER(171);
	if (((jint)((mindustry_ai_types_BuilderAI *) NULL_CHECK((frame[0].o)))->F_onlyAssist) == 0) goto label_74;
	}
	{
	LINE_NUMBER(172);
	frame[3].f = (jfloat(3,402823e+38f));
	LINE_NUMBER(173);
	frame[4].o = (jobject(nullptr));
	LINE_NUMBER(174);
	clinit_mindustry_gen_Groups(ctx);
	sp[0].o = (jobject)SF_mindustry_gen_Groups_player;
	sp[0].o = (jobject)((func_mindustry_entities_EntityGroup_iterator_R_java_util_Iterator) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_entities_EntityGroup_iterator_R_java_util_Iterator])(ctx, sp[0].o);
	frame[5].o = sp[0].o;
	}
label_81:;
	{
	jint temp0 = (jint)((func_java_util_Iterator_hasNext_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_hasNext_R_boolean, (frame[5].o)))(ctx, (frame[5].o));
	if (temp0 == 0) goto label_82;
	}
	{
	sp[0].o = (jobject)((func_java_util_Iterator_next_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_next_R_java_lang_Object, (frame[5].o)))(ctx, (frame[5].o));
	frame[6].o = (checkCast(ctx, &class_mindustry_gen_Player, sp[0].o));
	LINE_NUMBER(175);
	jint temp0 = (jint)((func_mindustry_gen_Player_dead_R_boolean) ((void **) nullCheck(ctx, (frame[6].o))->vtable)[VTABLE_mindustry_gen_Player_dead_R_boolean])(ctx, (frame[6].o));
	if (temp0 != 0) goto label_84;
	}
	{
	jint temp0 = (jint)((func_mindustry_gen_Player_isBuilder_R_boolean) ((void **) nullCheck(ctx, (frame[6].o))->vtable)[VTABLE_mindustry_gen_Player_isBuilder_R_boolean])(ctx, (frame[6].o));
	if (temp0 == 0) goto label_84;
	}
	{
	sp[0].o = (jobject)((func_mindustry_gen_Player_team_R_mindustry_game_Team) ((void **) nullCheck(ctx, (frame[6].o))->vtable)[VTABLE_mindustry_gen_Player_team_R_mindustry_game_Team])(ctx, (frame[6].o));
	sp[1].o = (jobject)((mindustry_entities_units_AIController *) NULL_CHECK((frame[0].o)))->F_unit;
	sp[1].o = (jobject)((mindustry_gen_Unit *) NULL_CHECK(sp[1].o))->F_team;
	if (sp[0].o != sp[1].o) goto label_84;
	}
	{
	LINE_NUMBER(176);
	sp[0].o = frame[6].o;
	sp[1].o = (jobject)((mindustry_entities_units_AIController *) NULL_CHECK((frame[0].o)))->F_unit;
	jfloat temp0 = (jfloat)((func_mindustry_gen_Player_dst2_arc_math_geom_Position_R_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_gen_Player_dst2_arc_math_geom_Position_R_float])(ctx, sp[0].o, sp[1].o);
	frame[7].f = temp0;
	LINE_NUMBER(177);
	if ((floatCompare((frame[7].f), (frame[3].f), 1)) >= 0) goto label_84;
	}
	{
	LINE_NUMBER(178);
	frame[4].o = (frame[6].o);
	LINE_NUMBER(179);
	frame[3].f = (frame[7].f);
	}
label_84:;
	LINE_NUMBER(182);
	goto label_81;
label_82:;
	{
	LINE_NUMBER(184);
	sp[0].o = frame[0].o;
	sp += 1;
	if ((frame[4].o) != nullptr) goto label_89;
	}
	INST_ACONST_NULL();
	goto label_90;
label_89:;
	INST_ALOAD(4);
	POP_N(1); // Pop method args
	sp->o = (jobject)((func_mindustry_gen_Player_unit_R_mindustry_gen_Unit) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_gen_Player_unit_R_mindustry_gen_Unit])(ctx, sp[0].o);
	sp++;
label_90:;
	sp -= 2;
	((mindustry_ai_types_BuilderAI *) NULL_CHECK(sp[0].o))->F_assistFollowing = (jref) sp[1].o;
label_74:;
	{
	LINE_NUMBER(189);
	if (((jint)((mindustry_ai_types_BuilderAI *) NULL_CHECK((frame[0].o)))->F_onlyAssist) != 0) goto label_68;
	}
	{
	sp[0].o = (jobject)((mindustry_entities_units_AIController *) NULL_CHECK((frame[0].o)))->F_unit;
	sp[0].o = (jobject)((mindustry_gen_Unit *) NULL_CHECK(sp[0].o))->F_team;
	sp[0].o = (jobject)((func_mindustry_game_Team_data_R_mindustry_game_Teams$TeamData) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_game_Team_data_R_mindustry_game_Teams$TeamData])(ctx, sp[0].o);
	sp[0].o = (jobject)((mindustry_game_Teams$TeamData *) NULL_CHECK(sp[0].o))->F_plans;
	jint temp0 = (jint)((func_arc_struct_Queue_isEmpty_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Queue_isEmpty_R_boolean])(ctx, sp[0].o);
	if (temp0 != 0) goto label_68;
	}
	{
	sp[0].o = (jobject)((mindustry_ai_types_BuilderAI *) NULL_CHECK((frame[0].o)))->F_following;
	if (sp[0].o != nullptr) goto label_68;
	}
	{
	sp[0].o = (jobject)((mindustry_entities_units_AIController *) NULL_CHECK((frame[0].o)))->F_timer;
	jint temp0 = (jint)((func_arc_util_Interval_get_int_float_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_util_Interval_get_int_float_R_boolean])(ctx, sp[0].o, (jint(2)), ((jfloat)((mindustry_ai_types_BuilderAI *) NULL_CHECK((frame[0].o)))->F_rebuildPeriod));
	if (temp0 == 0) goto label_68;
	}
	{
	LINE_NUMBER(190);
	sp[0].o = (jobject)((mindustry_entities_units_AIController *) NULL_CHECK((frame[0].o)))->F_unit;
	sp[0].o = (jobject)((mindustry_gen_Unit *) NULL_CHECK(sp[0].o))->F_team;
	sp[0].o = (jobject)((func_mindustry_game_Team_data_R_mindustry_game_Teams$TeamData) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_game_Team_data_R_mindustry_game_Teams$TeamData])(ctx, sp[0].o);
	sp[0].o = (jobject)((mindustry_game_Teams$TeamData *) NULL_CHECK(sp[0].o))->F_plans;
	frame[3].o = sp[0].o;
	LINE_NUMBER(193);
	if ((frame[2].i) == 0) goto label_93;
	}
	{
	LINE_NUMBER(195);
	frame[4].i = (jint(0));
	}
label_95:;
	{
	if ((frame[4].i) >= ((jint)((arc_struct_Queue *) NULL_CHECK((frame[3].o)))->F_size)) goto label_96;
	}
	{
	LINE_NUMBER(196);
	sp[0].o = (jobject)((func_arc_struct_Queue_get_int_R_java_lang_Object) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_arc_struct_Queue_get_int_R_java_lang_Object])(ctx, (frame[3].o), (frame[4].i));
	frame[5].o = (checkCast(ctx, &class_mindustry_game_Teams$BlockPlan, sp[0].o));
	LINE_NUMBER(197);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	sp[0].o = (jobject)((mindustry_core_GameState *) NULL_CHECK(sp[0].o))->F_rules;
	if (((jint)((mindustry_game_Rules *) NULL_CHECK(sp[0].o))->F_infiniteResources) != 0) goto label_99;
	}
	{
	sp[0].o = (jobject)((mindustry_entities_units_AIController *) NULL_CHECK((frame[0].o)))->F_unit;
	jfloat temp0 = jfloat((((jint)((mindustry_game_Teams$BlockPlan *) NULL_CHECK((frame[5].o)))->F_x) * (8)));
	jfloat temp1 = jfloat((((jint)((mindustry_game_Teams$BlockPlan *) NULL_CHECK((frame[5].o)))->F_y) * (8)));
	sp[1].o = (jobject)((mindustry_entities_units_AIController *) NULL_CHECK((frame[0].o)))->F_unit;
	sp[1].o = (jobject)((mindustry_gen_Unit *) NULL_CHECK(sp[1].o))->F_type;
	jint temp2 = (jint)((func_mindustry_gen_Unit_within_float_float_float_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_gen_Unit_within_float_float_float_R_boolean])(ctx, sp[0].o, temp0, temp1, ((jfloat)((mindustry_type_UnitType *) NULL_CHECK(sp[1].o))->F_buildRange));
	if (temp2 == 0) goto label_100;
	}
label_99:;
	{
	LINE_NUMBER(198);
	sp[0].o = (jobject)((mindustry_game_Teams$BlockPlan *) NULL_CHECK((frame[5].o)))->F_block;
	frame[6].o = sp[0].o;
	LINE_NUMBER(200);
	sp[0].o = frame[6].o;
	sp[1].o = (jobject)((mindustry_entities_units_AIController *) NULL_CHECK((frame[0].o)))->F_unit;
	sp[1].o = (jobject)((func_mindustry_gen_Unit_team_R_mindustry_game_Team) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_mindustry_gen_Unit_team_R_mindustry_game_Team])(ctx, sp[1].o);
	jint temp0 = (jint)SM_mindustry_world_Build_validPlace_mindustry_world_Block_mindustry_game_Team_int_int_int_R_boolean(ctx, sp[0].o, sp[1].o, ((jint)((mindustry_game_Teams$BlockPlan *) NULL_CHECK((frame[5].o)))->F_x), ((jint)((mindustry_game_Teams$BlockPlan *) NULL_CHECK((frame[5].o)))->F_y), ((jint)((mindustry_game_Teams$BlockPlan *) NULL_CHECK((frame[5].o)))->F_rotation));
	if (temp0 == 0) goto label_100;
	}
	{
	LINE_NUMBER(201);
	sp[0].o = (jobject)((mindustry_entities_units_AIController *) NULL_CHECK((frame[0].o)))->F_unit;
	clinit_mindustry_entities_units_BuildPlan(ctx);
	sp[1].o = gcAlloc(ctx, &class_mindustry_entities_units_BuildPlan);
	jint temp0 = (jint)((mindustry_game_Teams$BlockPlan *) NULL_CHECK((frame[5].o)))->F_x;
	jint temp1 = (jint)((mindustry_game_Teams$BlockPlan *) NULL_CHECK((frame[5].o)))->F_y;
	jint temp2 = (jint)((mindustry_game_Teams$BlockPlan *) NULL_CHECK((frame[5].o)))->F_rotation;
	sp[2].o = (jobject)((mindustry_game_Teams$BlockPlan *) NULL_CHECK((frame[5].o)))->F_block;
	sp[3].o = (jobject)((mindustry_game_Teams$BlockPlan *) NULL_CHECK((frame[5].o)))->F_config;
	init_mindustry_entities_units_BuildPlan_int_int_int_mindustry_world_Block_java_lang_Object(ctx, sp[1].o, temp0, temp1, temp2, sp[2].o, sp[3].o);
	((func_mindustry_gen_Unit_addBuild_mindustry_entities_units_BuildPlan) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_gen_Unit_addBuild_mindustry_entities_units_BuildPlan])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(203);
	sp[0].o = frame[3].o;
	sp[1].o = (jobject)((func_arc_struct_Queue_removeIndex_int_R_java_lang_Object) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_arc_struct_Queue_removeIndex_int_R_java_lang_Object])(ctx, (frame[3].o), (frame[4].i));
	((func_arc_struct_Queue_addLast_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Queue_addLast_java_lang_Object])(ctx, sp[0].o, (checkCast(ctx, &class_mindustry_game_Teams$BlockPlan, sp[1].o)));
	LINE_NUMBER(204);
	((mindustry_ai_types_BuilderAI *) NULL_CHECK((frame[0].o)))->F_lastPlan = (jref) (frame[5].o);
	LINE_NUMBER(205);
	goto label_96;
	}
label_100:;
	{
	LINE_NUMBER(195);
	INST_IINC(4, 1);
	goto label_95;
	}
label_96:;
	goto label_68;
label_93:;
	{
	LINE_NUMBER(210);
	sp[0].o = (jobject)((func_arc_struct_Queue_first_R_java_lang_Object) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_arc_struct_Queue_first_R_java_lang_Object])(ctx, (frame[3].o));
	frame[4].o = (checkCast(ctx, &class_mindustry_game_Teams$BlockPlan, sp[0].o));
	LINE_NUMBER(213);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_world;
	sp[0].o = (jobject)((func_mindustry_core_World_tile_int_int_R_mindustry_world_Tile) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_World_tile_int_int_R_mindustry_world_Tile])(ctx, sp[0].o, ((jint)((mindustry_game_Teams$BlockPlan *) NULL_CHECK((frame[4].o)))->F_x), ((jint)((mindustry_game_Teams$BlockPlan *) NULL_CHECK((frame[4].o)))->F_y));
	if (sp[0].o == nullptr) goto label_107;
	}
	{
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_world;
	sp[0].o = (jobject)((func_mindustry_core_World_tile_int_int_R_mindustry_world_Tile) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_World_tile_int_int_R_mindustry_world_Tile])(ctx, sp[0].o, ((jint)((mindustry_game_Teams$BlockPlan *) NULL_CHECK((frame[4].o)))->F_x), ((jint)((mindustry_game_Teams$BlockPlan *) NULL_CHECK((frame[4].o)))->F_y));
	sp[0].o = (jobject)((func_mindustry_world_Tile_block_R_mindustry_world_Block) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_Tile_block_R_mindustry_world_Block])(ctx, sp[0].o);
	sp[1].o = (jobject)((mindustry_game_Teams$BlockPlan *) NULL_CHECK((frame[4].o)))->F_block;
	if (sp[0].o != sp[1].o) goto label_107;
	}
	{
	LINE_NUMBER(214);
	sp[0].o = (jobject)((func_arc_struct_Queue_removeFirst_R_java_lang_Object) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_arc_struct_Queue_removeFirst_R_java_lang_Object])(ctx, (frame[3].o));
	goto label_68;
	}
label_107:;
	{
	LINE_NUMBER(215);
	sp[0].o = (jobject)((mindustry_game_Teams$BlockPlan *) NULL_CHECK((frame[4].o)))->F_block;
	sp[1].o = (jobject)((mindustry_entities_units_AIController *) NULL_CHECK((frame[0].o)))->F_unit;
	sp[1].o = (jobject)((func_mindustry_gen_Unit_team_R_mindustry_game_Team) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_mindustry_gen_Unit_team_R_mindustry_game_Team])(ctx, sp[1].o);
	jint temp0 = (jint)SM_mindustry_world_Build_validPlace_mindustry_world_Block_mindustry_game_Team_int_int_int_R_boolean(ctx, sp[0].o, sp[1].o, ((jint)((mindustry_game_Teams$BlockPlan *) NULL_CHECK((frame[4].o)))->F_x), ((jint)((mindustry_game_Teams$BlockPlan *) NULL_CHECK((frame[4].o)))->F_y), ((jint)((mindustry_game_Teams$BlockPlan *) NULL_CHECK((frame[4].o)))->F_rotation));
	if (temp0 == 0) goto label_109;
	}
	{
	if (((jint)((mindustry_ai_types_BuilderAI *) NULL_CHECK((frame[0].o)))->F_alwaysFlee) == 0) goto label_110;
	}
	{
	sp[0].o = frame[0].o;
	jint temp0 = (jint)((mindustry_game_Teams$BlockPlan *) NULL_CHECK((frame[4].o)))->F_x;
	jint temp1 = (jint)((mindustry_game_Teams$BlockPlan *) NULL_CHECK((frame[4].o)))->F_y;
	LINE_NUMBER(216);
	jint temp2 = (jint)((func_mindustry_ai_types_BuilderAI_nearEnemy_int_int_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_ai_types_BuilderAI_nearEnemy_int_int_R_boolean])(ctx, sp[0].o, temp0, temp1);
	if (temp2 != 0) goto label_109;
	}
label_110:;
	{
	LINE_NUMBER(218);
	((mindustry_ai_types_BuilderAI *) NULL_CHECK((frame[0].o)))->F_lastPlan = (jref) (frame[4].o);
	LINE_NUMBER(220);
	sp[0].o = (jobject)((mindustry_entities_units_AIController *) NULL_CHECK((frame[0].o)))->F_unit;
	clinit_mindustry_entities_units_BuildPlan(ctx);
	sp[1].o = gcAlloc(ctx, &class_mindustry_entities_units_BuildPlan);
	jint temp0 = (jint)((mindustry_game_Teams$BlockPlan *) NULL_CHECK((frame[4].o)))->F_x;
	jint temp1 = (jint)((mindustry_game_Teams$BlockPlan *) NULL_CHECK((frame[4].o)))->F_y;
	jint temp2 = (jint)((mindustry_game_Teams$BlockPlan *) NULL_CHECK((frame[4].o)))->F_rotation;
	sp[2].o = (jobject)((mindustry_game_Teams$BlockPlan *) NULL_CHECK((frame[4].o)))->F_block;
	sp[3].o = (jobject)((mindustry_game_Teams$BlockPlan *) NULL_CHECK((frame[4].o)))->F_config;
	init_mindustry_entities_units_BuildPlan_int_int_int_mindustry_world_Block_java_lang_Object(ctx, sp[1].o, temp0, temp1, temp2, sp[2].o, sp[3].o);
	((func_mindustry_gen_Unit_addBuild_mindustry_entities_units_BuildPlan) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_gen_Unit_addBuild_mindustry_entities_units_BuildPlan])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(222);
	sp[0].o = frame[3].o;
	sp[1].o = (jobject)((func_arc_struct_Queue_removeFirst_R_java_lang_Object) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_arc_struct_Queue_removeFirst_R_java_lang_Object])(ctx, (frame[3].o));
	((func_arc_struct_Queue_addLast_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Queue_addLast_java_lang_Object])(ctx, sp[0].o, (checkCast(ctx, &class_mindustry_game_Teams$BlockPlan, sp[1].o)));
	goto label_68;
	}
label_109:;
	{
	LINE_NUMBER(225);
	sp[0].o = frame[3].o;
	sp[1].o = (jobject)((func_arc_struct_Queue_removeFirst_R_java_lang_Object) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_arc_struct_Queue_removeFirst_R_java_lang_Object])(ctx, (frame[3].o));
	((func_arc_struct_Queue_addLast_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Queue_addLast_java_lang_Object])(ctx, sp[0].o, (checkCast(ctx, &class_mindustry_game_Teams$BlockPlan, sp[1].o)));
	}
label_68:;
	{
	LINE_NUMBER(231);
	sp[0].o = (jobject)((mindustry_entities_units_AIController *) NULL_CHECK((frame[0].o)))->F_unit;
	sp[0].o = (jobject)((mindustry_gen_Unit *) NULL_CHECK(sp[0].o))->F_type;
	if (((jint)((mindustry_type_UnitType *) NULL_CHECK(sp[0].o))->F_flying) != 0) goto label_114;
	}
	{
	LINE_NUMBER(232);
	sp[0].o = (jobject)((mindustry_entities_units_AIController *) NULL_CHECK((frame[0].o)))->F_unit;
	sp[1].o = (jobject)((mindustry_entities_units_AIController *) NULL_CHECK((frame[0].o)))->F_unit;
	sp[1].o = (jobject)((mindustry_gen_Unit *) NULL_CHECK(sp[1].o))->F_type;
	sp += 1;
	if (((jint)((mindustry_type_UnitType *) NULL_CHECK(sp[0].o))->F_boostWhenBuilding) != 0) goto label_116;
	}
	INST_ILOAD(1);
	if ((--sp)->i != 0) goto label_116;
	{
	sp[0].o = (jobject)((mindustry_entities_units_AIController *) NULL_CHECK((frame[0].o)))->F_unit;
	sp[0].o = (jobject)((func_mindustry_gen_Unit_floorOn_R_mindustry_world_blocks_environment_Floor) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_gen_Unit_floorOn_R_mindustry_world_blocks_environment_Floor])(ctx, sp[0].o);
	if (((jint)((mindustry_world_Block *) NULL_CHECK(sp[0].o))->F_isDuct) != 0) goto label_116;
	}
	{
	sp[0].o = (jobject)((mindustry_entities_units_AIController *) NULL_CHECK((frame[0].o)))->F_unit;
	sp[0].o = (jobject)((func_mindustry_gen_Unit_floorOn_R_mindustry_world_blocks_environment_Floor) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_gen_Unit_floorOn_R_mindustry_world_blocks_environment_Floor])(ctx, sp[0].o);
	if ((floatCompare(((jfloat)((mindustry_world_blocks_environment_Floor *) NULL_CHECK(sp[0].o))->F_damageTaken), (jfloat(0)), -1)) > 0) goto label_116;
	}
	{
	sp[0].o = (jobject)((mindustry_entities_units_AIController *) NULL_CHECK((frame[0].o)))->F_unit;
	sp[0].o = (jobject)((func_mindustry_gen_Unit_floorOn_R_mindustry_world_blocks_environment_Floor) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_gen_Unit_floorOn_R_mindustry_world_blocks_environment_Floor])(ctx, sp[0].o);
	jint temp0 = (jint)((func_mindustry_world_blocks_environment_Floor_isDeep_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_blocks_environment_Floor_isDeep_R_boolean])(ctx, sp[0].o);
	if (temp0 == 0) goto label_117;
	}
label_116:;
	INST_ICONST(1);
	goto label_118;
label_117:;
	INST_ICONST(0);
label_118:;
	POP_N(2); // Pop method args
	((func_mindustry_gen_Unit_updateBoosting_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_gen_Unit_updateBoosting_boolean])(ctx, sp[0].o, sp[1].i);
label_114:;
	LINE_NUMBER(234);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jbool M_mindustry_ai_types_BuilderAI_nearEnemy_int_int_R_boolean(jcontext ctx, jobject self, jint param0, jint param1) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ai/types/BuilderAI:nearEnemy", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(237);
	sp[0].o = (jobject)((mindustry_entities_units_AIController *) NULL_CHECK((frame[0].o)))->F_unit;
	sp[0].o = (jobject)((mindustry_gen_Unit *) NULL_CHECK(sp[0].o))->F_team;
	jint temp0 = (jint)SM_mindustry_entities_Units_nearEnemy_mindustry_game_Team_float_float_float_float_R_boolean(ctx, sp[0].o, ((jfloat(((frame[1].i) * (8)))) - (((jfloat)((mindustry_ai_types_BuilderAI *) NULL_CHECK((frame[0].o)))->F_fleeRange) / (jfloat(2)))), ((jfloat(((frame[2].i) * (8)))) - (((jfloat)((mindustry_ai_types_BuilderAI *) NULL_CHECK((frame[0].o)))->F_fleeRange) / (jfloat(2)))), ((jfloat)((mindustry_ai_types_BuilderAI *) NULL_CHECK((frame[0].o)))->F_fleeRange), ((jfloat)((mindustry_ai_types_BuilderAI *) NULL_CHECK((frame[0].o)))->F_fleeRange));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jobject M_mindustry_ai_types_BuilderAI_fallback_R_mindustry_entities_units_AIController(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ai/types/BuilderAI:fallback", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(242);
	sp[0].o = (jobject)((mindustry_entities_units_AIController *) NULL_CHECK((frame[0].o)))->F_unit;
	sp[0].o = (jobject)((mindustry_gen_Unit *) NULL_CHECK(sp[0].o))->F_team;
	jint temp0 = (jint)((func_mindustry_game_Team_isAI_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_game_Team_isAI_R_boolean])(ctx, sp[0].o);
	if (temp0 == 0) goto label_1;
	}
	{
	sp[0].o = (jobject)((mindustry_entities_units_AIController *) NULL_CHECK((frame[0].o)))->F_unit;
	sp[0].o = (jobject)((mindustry_gen_Unit *) NULL_CHECK(sp[0].o))->F_team;
	sp[0].o = (jobject)((func_mindustry_game_Team_rules_R_mindustry_game_Rules$TeamRule) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_game_Team_rules_R_mindustry_game_Rules$TeamRule])(ctx, sp[0].o);
	if (((jint)((mindustry_game_Rules$TeamRule *) NULL_CHECK(sp[0].o))->F_prebuildAi) == 0) goto label_1;
	}
	{
	LINE_NUMBER(243);
	clinit_mindustry_ai_types_PrebuildAI(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_ai_types_PrebuildAI);
	init_mindustry_ai_types_PrebuildAI(ctx, sp[0].o);
	popStackFrame(ctx);
	return sp[0].o;
	}
label_1:;
	{
	LINE_NUMBER(245);
	sp[0].o = (jobject)((mindustry_entities_units_AIController *) NULL_CHECK((frame[0].o)))->F_unit;
	sp[0].o = (jobject)((mindustry_gen_Unit *) NULL_CHECK(sp[0].o))->F_type;
	if (((jint)((mindustry_type_UnitType *) NULL_CHECK(sp[0].o))->F_flying) == 0) goto label_3;
	}
	{
	clinit_mindustry_ai_types_FlyingAI(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_ai_types_FlyingAI);
	init_mindustry_ai_types_FlyingAI(ctx, sp[0].o);
	sp += 1;
	goto label_4;
	}
label_3:;
	{
	clinit_mindustry_ai_types_GroundAI(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_ai_types_GroundAI);
	init_mindustry_ai_types_GroundAI(ctx, sp[0].o);
	sp += 1;
	}
label_4:;
	popStackFrame(ctx);
	INST_ARETURN();

	popStackFrame(ctx);
}

jbool M_mindustry_ai_types_BuilderAI_useFallback_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ai/types/BuilderAI:useFallback", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(250);
	sp[0].o = (jobject)((mindustry_entities_units_AIController *) NULL_CHECK((frame[0].o)))->F_unit;
	sp[0].o = (jobject)((mindustry_gen_Unit *) NULL_CHECK(sp[0].o))->F_team;
	jint temp0 = (jint)((func_mindustry_game_Team_isAI_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_game_Team_isAI_R_boolean])(ctx, sp[0].o);
	if (temp0 == 0) goto label_1;
	}
	{
	sp[0].o = (jobject)((mindustry_entities_units_AIController *) NULL_CHECK((frame[0].o)))->F_unit;
	sp[0].o = (jobject)((mindustry_gen_Unit *) NULL_CHECK(sp[0].o))->F_team;
	sp[0].o = (jobject)((func_mindustry_game_Team_rules_R_mindustry_game_Rules$TeamRule) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_game_Team_rules_R_mindustry_game_Rules$TeamRule])(ctx, sp[0].o);
	if (((jint)((mindustry_game_Rules$TeamRule *) NULL_CHECK(sp[0].o))->F_prebuildAi) == 0) goto label_1;
	}
	{
	LINE_NUMBER(251);
	popStackFrame(ctx);
	return (jint(1));
	}
label_1:;
	{
	LINE_NUMBER(253);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	sp[0].o = (jobject)((mindustry_core_GameState *) NULL_CHECK(sp[0].o))->F_rules;
	if (((jint)((mindustry_game_Rules *) NULL_CHECK(sp[0].o))->F_waves) == 0) goto label_3;
	}
	{
	sp[0].o = (jobject)((mindustry_entities_units_AIController *) NULL_CHECK((frame[0].o)))->F_unit;
	sp[0].o = (jobject)((mindustry_gen_Unit *) NULL_CHECK(sp[0].o))->F_team;
	clinit_mindustry_Vars(ctx);
	sp[1].o = (jobject)SF_mindustry_Vars_state;
	sp[1].o = (jobject)((mindustry_core_GameState *) NULL_CHECK(sp[1].o))->F_rules;
	sp[1].o = (jobject)((mindustry_game_Rules *) NULL_CHECK(sp[1].o))->F_waveTeam;
	if (sp[0].o != sp[1].o) goto label_3;
	}
	{
	sp[0].o = (jobject)((mindustry_entities_units_AIController *) NULL_CHECK((frame[0].o)))->F_unit;
	sp[0].o = (jobject)((mindustry_gen_Unit *) NULL_CHECK(sp[0].o))->F_team;
	sp[0].o = (jobject)((func_mindustry_game_Team_rules_R_mindustry_game_Rules$TeamRule) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_game_Team_rules_R_mindustry_game_Rules$TeamRule])(ctx, sp[0].o);
	if (((jint)((mindustry_game_Rules$TeamRule *) NULL_CHECK(sp[0].o))->F_rtsAi) != 0) goto label_3;
	}
	INST_ICONST(1);
	goto label_4;
label_3:;
	INST_ICONST(0);
label_4:;
	popStackFrame(ctx);
	INST_IRETURN();

	popStackFrame(ctx);
}

jbool M_mindustry_ai_types_BuilderAI_shouldFire_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ai/types/BuilderAI:shouldFire", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(258);
	sp[0].o = (jobject)((mindustry_entities_units_AIController *) NULL_CHECK((frame[0].o)))->F_unit;
	sp[0].o = (jobject)((func_mindustry_gen_Unit_controller_R_mindustry_entities_units_UnitController) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_gen_Unit_controller_R_mindustry_entities_units_UnitController])(ctx, sp[0].o);
	frame[2].o = sp[0].o;
	if ((isInstance(ctx, (frame[2].o), &class_mindustry_ai_types_CommandAI)) == 0) goto label_1;
	}
	{
	frame[1].o = (checkCast(ctx, &class_mindustry_ai_types_CommandAI, (frame[2].o)));
	jint temp0 = (jint)((func_mindustry_ai_types_CommandAI_shouldFire_R_boolean) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_ai_types_CommandAI_shouldFire_R_boolean])(ctx, (frame[1].o));
	if (temp0 == 0) goto label_3;
	}
label_1:;
	INST_ICONST(1);
	goto label_4;
label_3:;
	INST_ICONST(0);
label_4:;
	popStackFrame(ctx);
	INST_IRETURN();

	popStackFrame(ctx);
}

jbool M_mindustry_ai_types_BuilderAI_shouldShoot_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ai/types/BuilderAI:shouldShoot", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(263);
	sp[0].o = (jobject)((mindustry_entities_units_AIController *) NULL_CHECK((frame[0].o)))->F_unit;
	jint temp0 = (jint)((func_mindustry_gen_Unit_isBuilding_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_gen_Unit_isBuilding_R_boolean])(ctx, sp[0].o);
	if (temp0 != 0) goto label_1;
	}
	{
	sp[0].o = (jobject)((mindustry_entities_units_AIController *) NULL_CHECK((frame[0].o)))->F_unit;
	sp[0].o = (jobject)((mindustry_gen_Unit *) NULL_CHECK(sp[0].o))->F_type;
	if (((jint)((mindustry_type_UnitType *) NULL_CHECK(sp[0].o))->F_canAttack) == 0) goto label_1;
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

void M_mindustry_ai_types_BuilderAI_lambda$updateMovement$1_mindustry_gen_Unit(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ai/types/BuilderAI:lambda$updateMovement$1", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(153);
	if (((jint)((mindustry_ai_types_BuilderAI *) NULL_CHECK((frame[0].o)))->F_found) == 0) goto label_1;
	}
	popStackFrame(ctx);
	INST_RETURN();
label_1:;
	{
	LINE_NUMBER(155);
	jint temp0 = (jint)((func_mindustry_gen_Unit_canBuild_R_boolean) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_gen_Unit_canBuild_R_boolean])(ctx, (frame[1].o));
	if (temp0 == 0) goto label_2;
	}
	{
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((mindustry_entities_units_AIController *) NULL_CHECK((frame[0].o)))->F_unit;
	if (sp[0].o == sp[1].o) goto label_2;
	}
	{
	jint temp0 = (jint)((func_mindustry_gen_Unit_activelyBuilding_R_boolean) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_gen_Unit_activelyBuilding_R_boolean])(ctx, (frame[1].o));
	if (temp0 == 0) goto label_2;
	}
	{
	LINE_NUMBER(156);
	sp[0].o = (jobject)((func_mindustry_gen_Unit_buildPlan_R_mindustry_entities_units_BuildPlan) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_gen_Unit_buildPlan_R_mindustry_entities_units_BuildPlan])(ctx, (frame[1].o));
	frame[2].o = sp[0].o;
	LINE_NUMBER(158);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_world;
	sp[0].o = (jobject)((func_mindustry_core_World_build_int_int_R_mindustry_gen_Building) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_World_build_int_int_R_mindustry_gen_Building])(ctx, sp[0].o, ((jint)((mindustry_entities_units_BuildPlan *) NULL_CHECK((frame[2].o)))->F_x), ((jint)((mindustry_entities_units_BuildPlan *) NULL_CHECK((frame[2].o)))->F_y));
	frame[3].o = sp[0].o;
	LINE_NUMBER(159);
	if ((isInstance(ctx, (frame[3].o), &class_mindustry_world_blocks_ConstructBlock$ConstructBuild)) == 0) goto label_2;
	}
	{
	frame[4].o = (checkCast(ctx, &class_mindustry_world_blocks_ConstructBlock$ConstructBuild, (frame[3].o)));
	LINE_NUMBER(160);
	sp[0].o = frame[4].o;
	sp[1].o = (jobject)((mindustry_entities_units_AIController *) NULL_CHECK((frame[0].o)))->F_unit;
	jfloat temp0 = (jfloat)((func_mindustry_world_blocks_ConstructBlock$ConstructBuild_dst_arc_math_geom_Position_R_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_blocks_ConstructBlock$ConstructBuild_dst_arc_math_geom_Position_R_float])(ctx, sp[0].o, sp[1].o);
	sp[0].o = (jobject)((mindustry_entities_units_AIController *) NULL_CHECK((frame[0].o)))->F_unit;
	sp[0].o = (jobject)((mindustry_gen_Unit *) NULL_CHECK(sp[0].o))->F_type;
	jfloat temp1 = (jfloat)SM_java_lang_Math_min_float_float_R_float(ctx, (temp0 - ((jfloat)((mindustry_type_UnitType *) NULL_CHECK(sp[0].o))->F_buildRange)), (jfloat(0)));
	frame[5].f = temp1;
	LINE_NUMBER(163);
	jfloat temp2 = frame[5].f;
	sp[0].o = (jobject)((mindustry_entities_units_AIController *) NULL_CHECK((frame[0].o)))->F_unit;
	jfloat temp3 = (jfloat)((func_mindustry_gen_Unit_speed_R_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_gen_Unit_speed_R_float])(ctx, sp[0].o);
	if ((floatCompare((temp2 / temp3), (((jfloat)((mindustry_world_blocks_ConstructBlock$ConstructBuild *) NULL_CHECK((frame[4].o)))->F_buildCost) * (jfloat(0.9f))), 1)) >= 0) goto label_2;
	}
	{
	LINE_NUMBER(164);
	((mindustry_ai_types_BuilderAI *) NULL_CHECK((frame[0].o)))->F_following = (jref) (frame[1].o);
	LINE_NUMBER(165);
	((mindustry_ai_types_BuilderAI *) NULL_CHECK((frame[0].o)))->F_found = (jint(1));
	}
label_2:;
	LINE_NUMBER(169);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jbool SM_mindustry_ai_types_BuilderAI_lambda$updateMovement$0_mindustry_entities_units_BuildPlan_mindustry_game_Teams$BlockPlan_R_boolean(jcontext ctx, jobject param0, jobject param1) {
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ai/types/BuilderAI:lambda$updateMovement$0", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_ai_types_BuilderAI(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	{
	LINE_NUMBER(112);
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

void clinit_mindustry_ai_types_BuilderAI(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	clinit_mindustry_entities_units_AIController(ctx);
	jtype frame[1];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ai/types/BuilderAI:<clinit>", 1 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_ai_types_BuilderAI(ctx);
	{
	LINE_NUMBER(16);
	clinit_mindustry_ai_types_BuilderAI(ctx);
	SF_mindustry_ai_types_BuilderAI_buildRadius = (jfloat(1500.0f));
	clinit_mindustry_ai_types_BuilderAI(ctx);
	SF_mindustry_ai_types_BuilderAI_retreatDst = (jfloat(110.0f));
	clinit_mindustry_ai_types_BuilderAI(ctx);
	SF_mindustry_ai_types_BuilderAI_retreatDelay = (jfloat(120.0f));
	clinit_mindustry_ai_types_BuilderAI(ctx);
	SF_mindustry_ai_types_BuilderAI_defaultRebuildPeriod = (jfloat(120.0f));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

static void initAnnotations(jcontext ctx) {
	auto &clazz = class_mindustry_ai_types_BuilderAI;
	auto fields = (java_lang_reflect_Field **) ((jarray) clazz.fields)->data;
	auto methods = (java_lang_reflect_Method **) ((jarray) clazz.methods)->data;
	auto constructors = (java_lang_reflect_Constructor **) ((jarray) clazz.constructors)->data;

	fields[0]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[1]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[2]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[3]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	{ // Field assistFollowing
		auto annotationArray = (jarray) createArray(ctx, &class_java_lang_annotation_Annotation, 1);
		fields[4]->F_annotations = (intptr_t) annotationArray;
		auto annotations = (jobject *) annotationArray->data;
		annotations[0] = gcAlloc(ctx, &class_arc_util_Nullable);
	}

	{ // Field following
		auto annotationArray = (jarray) createArray(ctx, &class_java_lang_annotation_Annotation, 1);
		fields[5]->F_annotations = (intptr_t) annotationArray;
		auto annotations = (jobject *) annotationArray->data;
		annotations[0] = gcAlloc(ctx, &class_arc_util_Nullable);
	}

	{ // Field enemy
		auto annotationArray = (jarray) createArray(ctx, &class_java_lang_annotation_Annotation, 1);
		fields[6]->F_annotations = (intptr_t) annotationArray;
		auto annotations = (jobject *) annotationArray->data;
		annotations[0] = gcAlloc(ctx, &class_arc_util_Nullable);
	}

	{ // Field lastPlan
		auto annotationArray = (jarray) createArray(ctx, &class_java_lang_annotation_Annotation, 1);
		fields[7]->F_annotations = (intptr_t) annotationArray;
		auto annotations = (jobject *) annotationArray->data;
		annotations[0] = gcAlloc(ctx, &class_arc_util_Nullable);
	}

	fields[8]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[9]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[10]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[11]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[12]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[13]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	((java_lang_reflect_Method *) ((java_lang_reflect_Constructor *) constructors[0])->F_method)->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	((java_lang_reflect_Method *) ((java_lang_reflect_Constructor *) constructors[1])->F_method)->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

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
}

void *vtable_mindustry_ai_types_BuilderAI[] {
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
	(void *) M_mindustry_entities_units_AIController_keepState_R_boolean,
	(void *) M_mindustry_entities_units_AIController_stopShooting,
	(void *) M_mindustry_ai_types_BuilderAI_fallback_R_mindustry_entities_units_AIController,
	(void *) M_mindustry_ai_types_BuilderAI_useFallback_R_boolean,
	(void *) M_mindustry_entities_units_AIController_updateVisuals,
	(void *) M_mindustry_ai_types_BuilderAI_updateMovement,
	(void *) M_mindustry_entities_units_AIController_updateTargeting,
	(void *) M_mindustry_entities_units_AIController_faceTarget,
	(void *) M_mindustry_entities_units_AIController_faceMovement,
	(void *) M_mindustry_entities_units_AIController_invalid_mindustry_gen_Teamc_R_boolean,
	(void *) M_mindustry_entities_units_AIController_pathfind_int,
	(void *) M_mindustry_entities_units_AIController_pathfind_int_boolean,
	(void *) M_mindustry_entities_units_AIController_pathfind_int_boolean_boolean,
	(void *) M_mindustry_entities_units_AIController_alterPathfind_arc_math_geom_Vec2_R_arc_math_geom_Vec2,
	(void *) M_mindustry_entities_units_AIController_targetInvalidated,
	(void *) M_mindustry_entities_units_AIController_updateWeapons,
	(void *) M_mindustry_entities_units_AIController_checkTarget_mindustry_gen_Teamc_float_float_float_R_boolean,
	(void *) M_mindustry_ai_types_BuilderAI_shouldFire_R_boolean,
	(void *) M_mindustry_ai_types_BuilderAI_shouldShoot_R_boolean,
	(void *) M_mindustry_entities_units_AIController_targetFlag_float_float_mindustry_world_meta_BlockFlag_boolean_R_mindustry_gen_Teamc,
	(void *) M_mindustry_entities_units_AIController_targetFlagActive_float_float_mindustry_world_meta_BlockFlag_boolean_R_mindustry_gen_Teamc,
	(void *) M_mindustry_entities_units_AIController_target_float_float_float_boolean_boolean_R_mindustry_gen_Teamc,
	(void *) M_mindustry_entities_units_AIController_retarget_R_boolean,
	(void *) M_mindustry_entities_units_AIController_findMainTarget_float_float_float_boolean_boolean_R_mindustry_gen_Teamc,
	(void *) M_mindustry_entities_units_AIController_findTarget_float_float_float_boolean_boolean_R_mindustry_gen_Teamc,
	(void *) M_mindustry_entities_units_AIController_commandTarget_mindustry_gen_Teamc,
	(void *) M_mindustry_entities_units_AIController_commandPosition_arc_math_geom_Vec2,
	(void *) M_mindustry_ai_types_BuilderAI_init,
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
	(void *) M_mindustry_ai_types_BuilderAI_nearEnemy_int_int_R_boolean,
	(void *) M_mindustry_ai_types_BuilderAI_lambda$updateMovement$1_mindustry_gen_Unit,
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
	{ "nearEnemy", "(II)Z" },
	{ "lambda$updateMovement$1", "(Lmindustry/gen/Unit;)V" },
};

static FieldMetadata fields[] {
	{ "buildRadius", &class_float, (intptr_t) &SF_mindustry_ai_types_BuilderAI_buildRadius, "F", 9 },
	{ "retreatDst", &class_float, (intptr_t) &SF_mindustry_ai_types_BuilderAI_retreatDst, "F", 9 },
	{ "retreatDelay", &class_float, (intptr_t) &SF_mindustry_ai_types_BuilderAI_retreatDelay, "F", 9 },
	{ "defaultRebuildPeriod", &class_float, (intptr_t) &SF_mindustry_ai_types_BuilderAI_defaultRebuildPeriod, "F", 9 },
	{ "assistFollowing", &class_mindustry_gen_Unit, offsetof(mindustry_ai_types_BuilderAI, F_assistFollowing), "Lmindustry/gen/Unit;", 1 },
	{ "following", &class_mindustry_gen_Unit, offsetof(mindustry_ai_types_BuilderAI, F_following), "Lmindustry/gen/Unit;", 1 },
	{ "enemy", &class_mindustry_gen_Teamc, offsetof(mindustry_ai_types_BuilderAI, F_enemy), "Lmindustry/gen/Teamc;", 1 },
	{ "lastPlan", &class_mindustry_game_Teams$BlockPlan, offsetof(mindustry_ai_types_BuilderAI, F_lastPlan), "Lmindustry/game/Teams$BlockPlan;", 1 },
	{ "fleeRange", &class_float, offsetof(mindustry_ai_types_BuilderAI, F_fleeRange), "F", 1 },
	{ "rebuildPeriod", &class_float, offsetof(mindustry_ai_types_BuilderAI, F_rebuildPeriod), "F", 1 },
	{ "alwaysFlee", &class_boolean, offsetof(mindustry_ai_types_BuilderAI, F_alwaysFlee), "Z", 1 },
	{ "onlyAssist", &class_boolean, offsetof(mindustry_ai_types_BuilderAI, F_onlyAssist), "Z", 1 },
	{ "found", &class_boolean, offsetof(mindustry_ai_types_BuilderAI, F_found), "Z", 0 },
	{ "retreatTimer", &class_float, offsetof(mindustry_ai_types_BuilderAI, F_retreatTimer), "F", 0 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_mindustry_ai_types_BuilderAI_boolean_float, 0, "(ZF)V", 1 },
	{ "<init>", (intptr_t) init_mindustry_ai_types_BuilderAI, 0, "()V", 1 },
	{ "init", (intptr_t) M_mindustry_ai_types_BuilderAI_init, VTABLE_mindustry_ai_types_BuilderAI_init, "()V", 1 },
	{ "updateMovement", (intptr_t) M_mindustry_ai_types_BuilderAI_updateMovement, VTABLE_mindustry_ai_types_BuilderAI_updateMovement, "()V", 1 },
	{ "nearEnemy", (intptr_t) M_mindustry_ai_types_BuilderAI_nearEnemy_int_int_R_boolean, VTABLE_mindustry_ai_types_BuilderAI_nearEnemy_int_int_R_boolean, "(II)Z", 4 },
	{ "fallback", (intptr_t) M_mindustry_ai_types_BuilderAI_fallback_R_mindustry_entities_units_AIController, VTABLE_mindustry_ai_types_BuilderAI_fallback_R_mindustry_entities_units_AIController, "()Lmindustry/entities/units/AIController;", 1 },
	{ "useFallback", (intptr_t) M_mindustry_ai_types_BuilderAI_useFallback_R_boolean, VTABLE_mindustry_ai_types_BuilderAI_useFallback_R_boolean, "()Z", 1 },
	{ "shouldFire", (intptr_t) M_mindustry_ai_types_BuilderAI_shouldFire_R_boolean, VTABLE_mindustry_ai_types_BuilderAI_shouldFire_R_boolean, "()Z", 1 },
	{ "shouldShoot", (intptr_t) M_mindustry_ai_types_BuilderAI_shouldShoot_R_boolean, VTABLE_mindustry_ai_types_BuilderAI_shouldShoot_R_boolean, "()Z", 1 },
	{ "lambda$updateMovement$1", (intptr_t) M_mindustry_ai_types_BuilderAI_lambda$updateMovement$1_mindustry_gen_Unit, VTABLE_mindustry_ai_types_BuilderAI_lambda$updateMovement$1_mindustry_gen_Unit, "(Lmindustry/gen/Unit;)V", 4098 },
	{ "lambda$updateMovement$0", (intptr_t) SM_mindustry_ai_types_BuilderAI_lambda$updateMovement$0_mindustry_entities_units_BuildPlan_mindustry_game_Teams$BlockPlan_R_boolean, 0, "(Lmindustry/entities/units/BuildPlan;Lmindustry/game/Teams$BlockPlan;)Z", 4106 },
	{ "<clinit>", (intptr_t) clinit_mindustry_ai_types_BuilderAI, 0, "()V", 8 },
};

Class class_mindustry_ai_types_BuilderAI{
		.nativeName = (intptr_t) "mindustry/ai/types/BuilderAI",
		.parentClass = (intptr_t) &class_mindustry_entities_units_AIController,
		.size = sizeof(mindustry_ai_types_BuilderAI),
		.classVtable = (intptr_t) vtable_mindustry_ai_types_BuilderAI,
		.staticInitializer = (intptr_t) clinit_mindustry_ai_types_BuilderAI,
		.annotationInitializer = (intptr_t) initAnnotations,
		.markFunction = (intptr_t) mark_mindustry_ai_types_BuilderAI,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 33,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 14,
		.nativeFields = (intptr_t) fields,
		.methodCount = 12,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 63,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_mindustry_ai_types_BuilderAI = registerClass(&class_mindustry_ai_types_BuilderAI);

}
