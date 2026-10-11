#include "mindustry/ai/types/FlyingAI.h"
#include "arc/math/Mathf.h"
#include "mindustry/gen/Teamc.h"
#include "mindustry/gen/Unit.h"
#include "arc/math/Rand.h"
#include "mindustry/game/Rules.h"
#include "mindustry/type/UnitType.h"
#include "mindustry/gen/Unitc.h"
#include "mindustry/entities/units/UnitController.h"
#include "mindustry/gen/Posc.h"
#include "java/lang/Object.h"
#include "mindustry/entities/units/AIController.h"
#include "mindustry/ai/types/FlyingAI.h"
#include "mindustry/world/Tile.h"
#include "arc/math/geom/Position.h"
#include "mindustry/game/Team.h"
#include "mindustry/Vars.h"
#include "mindustry/core/GameState.h"
#include "mindustry/world/meta/BlockFlag.h"

extern "C" {

jobject SF_mindustry_ai_types_FlyingAI_rand;
jobject SF_mindustry_ai_types_FlyingAI_randomTargets;

void mark_mindustry_ai_types_FlyingAI(jobject object, jint mark, jint depth) {
	if (!object) {
		if (SF_mindustry_ai_types_FlyingAI_rand)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_ai_types_FlyingAI_rand)->clazz)->markFunction)((jobject) SF_mindustry_ai_types_FlyingAI_rand, mark, depth + 1);
		if (SF_mindustry_ai_types_FlyingAI_randomTargets)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_ai_types_FlyingAI_randomTargets)->clazz)->markFunction)((jobject) SF_mindustry_ai_types_FlyingAI_randomTargets, mark, depth + 1);
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
	auto self = (mindustry_ai_types_FlyingAI *) object;
}

void init_mindustry_ai_types_FlyingAI(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ai/types/FlyingAI:<init>", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_ai_types_FlyingAI(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(11);
	init_mindustry_entities_units_AIController(ctx, (frame[0].o));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_ai_types_FlyingAI_updateMovement(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ai/types/FlyingAI:updateMovement", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(17);
	((func_mindustry_ai_types_FlyingAI_unloadPayloads) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_ai_types_FlyingAI_unloadPayloads])(ctx, (frame[0].o));
	LINE_NUMBER(19);
	sp[0].o = (jobject)((mindustry_entities_units_AIController *) NULL_CHECK((frame[0].o)))->F_target;
	if (sp[0].o == nullptr) goto label_2;
	}
	{
	sp[0].o = (jobject)((mindustry_entities_units_AIController *) NULL_CHECK((frame[0].o)))->F_unit;
	jint temp0 = (jint)((func_mindustry_gen_Unit_hasWeapons_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_gen_Unit_hasWeapons_R_boolean])(ctx, sp[0].o);
	if (temp0 == 0) goto label_2;
	}
	{
	LINE_NUMBER(20);
	sp[0].o = (jobject)((mindustry_entities_units_AIController *) NULL_CHECK((frame[0].o)))->F_unit;
	sp[0].o = (jobject)((mindustry_gen_Unit *) NULL_CHECK(sp[0].o))->F_type;
	if (((jint)((mindustry_type_UnitType *) NULL_CHECK(sp[0].o))->F_circleTarget) == 0) goto label_4;
	}
	{
	LINE_NUMBER(21);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((mindustry_entities_units_AIController *) NULL_CHECK((frame[0].o)))->F_unit;
	sp[1].o = (jobject)((mindustry_gen_Unit *) NULL_CHECK(sp[1].o))->F_type;
	((func_mindustry_ai_types_FlyingAI_circleAttack_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_ai_types_FlyingAI_circleAttack_float])(ctx, sp[0].o, ((jfloat)((mindustry_type_UnitType *) NULL_CHECK(sp[1].o))->F_circleTargetRadius));
	goto label_2;
	}
label_4:;
	{
	LINE_NUMBER(23);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((mindustry_entities_units_AIController *) NULL_CHECK((frame[0].o)))->F_target;
	sp[2].o = (jobject)((mindustry_entities_units_AIController *) NULL_CHECK((frame[0].o)))->F_unit;
	sp[2].o = (jobject)((mindustry_gen_Unit *) NULL_CHECK(sp[2].o))->F_type;
	((func_mindustry_ai_types_FlyingAI_moveTo_arc_math_geom_Position_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_ai_types_FlyingAI_moveTo_arc_math_geom_Position_float])(ctx, sp[0].o, sp[1].o, (((jfloat)((mindustry_type_UnitType *) NULL_CHECK(sp[2].o))->F_range) * (jfloat(0.8f))));
	LINE_NUMBER(24);
	sp[0].o = (jobject)((mindustry_entities_units_AIController *) NULL_CHECK((frame[0].o)))->F_unit;
	sp[1].o = (jobject)((mindustry_entities_units_AIController *) NULL_CHECK((frame[0].o)))->F_target;
	((func_mindustry_gen_Unit_lookAt_arc_math_geom_Position) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_gen_Unit_lookAt_arc_math_geom_Position])(ctx, sp[0].o, sp[1].o);
	}
label_2:;
	{
	LINE_NUMBER(28);
	sp[0].o = (jobject)((mindustry_entities_units_AIController *) NULL_CHECK((frame[0].o)))->F_target;
	if (sp[0].o != nullptr) goto label_7;
	}
	{
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	sp[0].o = (jobject)((mindustry_core_GameState *) NULL_CHECK(sp[0].o))->F_rules;
	if (((jint)((mindustry_game_Rules *) NULL_CHECK(sp[0].o))->F_waves) == 0) goto label_7;
	}
	{
	sp[0].o = (jobject)((mindustry_entities_units_AIController *) NULL_CHECK((frame[0].o)))->F_unit;
	sp[0].o = (jobject)((mindustry_gen_Unit *) NULL_CHECK(sp[0].o))->F_team;
	clinit_mindustry_Vars(ctx);
	sp[1].o = (jobject)SF_mindustry_Vars_state;
	sp[1].o = (jobject)((mindustry_core_GameState *) NULL_CHECK(sp[1].o))->F_rules;
	sp[1].o = (jobject)((mindustry_game_Rules *) NULL_CHECK(sp[1].o))->F_defaultTeam;
	if (sp[0].o != sp[1].o) goto label_7;
	}
	{
	LINE_NUMBER(29);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((func_mindustry_ai_types_FlyingAI_getClosestSpawner_R_mindustry_world_Tile) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_ai_types_FlyingAI_getClosestSpawner_R_mindustry_world_Tile])(ctx, (frame[0].o));
	clinit_mindustry_Vars(ctx);
	sp[2].o = (jobject)SF_mindustry_Vars_state;
	sp[2].o = (jobject)((mindustry_core_GameState *) NULL_CHECK(sp[2].o))->F_rules;
	((func_mindustry_ai_types_FlyingAI_moveTo_arc_math_geom_Position_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_ai_types_FlyingAI_moveTo_arc_math_geom_Position_float])(ctx, sp[0].o, sp[1].o, (((jfloat)((mindustry_game_Rules *) NULL_CHECK(sp[2].o))->F_dropZoneRadius) + (jfloat(130.0f))));
	}
label_7:;
	LINE_NUMBER(31);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jobject M_mindustry_ai_types_FlyingAI_findTarget_float_float_float_boolean_boolean_R_mindustry_gen_Teamc(jcontext ctx, jobject self, jfloat param0, jfloat param1, jfloat param2, jbool param3, jbool param4) {
	NULL_CHECK(self);
	jtype frame[13];
	auto stack = &frame[7];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ai/types/FlyingAI:findTarget", 13 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	frame[2].f = param1;
	frame[3].f = param2;
	frame[4].i = param3;
	frame[5].i = param4;
	{
	LINE_NUMBER(35);
	sp[0].o = (jobject)((func_mindustry_ai_types_FlyingAI_findMainTarget_float_float_float_boolean_boolean_R_mindustry_gen_Teamc) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_ai_types_FlyingAI_findMainTarget_float_float_float_boolean_boolean_R_mindustry_gen_Teamc])(ctx, (frame[0].o), (frame[1].f), (frame[2].f), (frame[3].f), (frame[4].i), (frame[5].i));
	frame[6].o = sp[0].o;
	LINE_NUMBER(38);
	jint temp0 = (jint)((func_mindustry_ai_types_FlyingAI_checkTarget_mindustry_gen_Teamc_float_float_float_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_ai_types_FlyingAI_checkTarget_mindustry_gen_Teamc_float_float_float_R_boolean])(ctx, (frame[0].o), (frame[6].o), (frame[1].f), (frame[2].f), (frame[3].f));
	if (temp0 == 0) goto label_2;
	}
	{
	sp[0].o = (jobject)((func_mindustry_ai_types_FlyingAI_target_float_float_float_boolean_boolean_R_mindustry_gen_Teamc) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_ai_types_FlyingAI_target_float_float_float_boolean_boolean_R_mindustry_gen_Teamc])(ctx, (frame[0].o), (frame[1].f), (frame[2].f), (frame[3].f), (frame[4].i), (frame[5].i));
	sp += 1;
	goto label_3;
	}
label_2:;
	INST_ALOAD(6);
label_3:;
	popStackFrame(ctx);
	INST_ARETURN();

	popStackFrame(ctx);
}

jobject M_mindustry_ai_types_FlyingAI_findMainTarget_float_float_float_boolean_boolean_R_mindustry_gen_Teamc(jcontext ctx, jobject self, jfloat param0, jfloat param1, jfloat param2, jbool param3, jbool param4) {
	NULL_CHECK(self);
	jtype frame[19];
	auto stack = &frame[12];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ai/types/FlyingAI:findMainTarget", 19 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	frame[2].f = param1;
	frame[3].f = param2;
	frame[4].i = param3;
	frame[5].i = param4;
	{
	LINE_NUMBER(43);
	sp[0].o = frame[0].o;
	jfloat temp0 = frame[1].f;
	jfloat temp1 = frame[2].f;
	clinit_mindustry_world_meta_BlockFlag(ctx);
	sp[1].o = (jobject)SF_mindustry_world_meta_BlockFlag_core;
	sp[0].o = (jobject)((func_mindustry_ai_types_FlyingAI_targetFlag_float_float_mindustry_world_meta_BlockFlag_boolean_R_mindustry_gen_Teamc) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_ai_types_FlyingAI_targetFlag_float_float_mindustry_world_meta_BlockFlag_boolean_R_mindustry_gen_Teamc])(ctx, sp[0].o, temp0, temp1, sp[1].o, (jint(1)));
	frame[6].o = sp[0].o;
	LINE_NUMBER(45);
	if ((frame[6].o) == nullptr) goto label_2;
	}
	{
	jfloat temp0 = frame[1].f;
	jfloat temp1 = frame[2].f;
	jfloat temp2 = (jfloat)((func_mindustry_gen_Posc_getX_R_float) resolveInterfaceMethod(ctx, &class_mindustry_gen_Posc, INDEX_mindustry_gen_Posc_getX_R_float, (frame[6].o)))(ctx, (frame[6].o));
	jfloat temp3 = (jfloat)((func_mindustry_gen_Posc_getY_R_float) resolveInterfaceMethod(ctx, &class_mindustry_gen_Posc, INDEX_mindustry_gen_Posc_getY_R_float, (frame[6].o)))(ctx, (frame[6].o));
	jint temp4 = (jint)SM_arc_math_Mathf_within_float_float_float_float_float_R_boolean(ctx, temp0, temp1, temp2, temp3, (frame[3].f));
	if (temp4 == 0) goto label_2;
	}
	{
	LINE_NUMBER(46);
	popStackFrame(ctx);
	return (frame[6].o);
	}
label_2:;
	{
	LINE_NUMBER(49);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	sp[0].o = (jobject)((mindustry_core_GameState *) NULL_CHECK(sp[0].o))->F_rules;
	if (((jint)((mindustry_game_Rules *) NULL_CHECK(sp[0].o))->F_randomWaveAI) == 0) goto label_4;
	}
	{
	LINE_NUMBER(51);
	clinit_mindustry_ai_types_FlyingAI(ctx);
	sp[0].o = (jobject)SF_mindustry_ai_types_FlyingAI_rand;
	sp[1].o = (jobject)((mindustry_entities_units_AIController *) NULL_CHECK((frame[0].o)))->F_unit;
	sp[1].o = (jobject)((mindustry_gen_Unit *) NULL_CHECK(sp[1].o))->F_type;
	jint temp0 = (jint)((mindustry_ctype_Content *) NULL_CHECK(sp[1].o))->F_id;
	clinit_mindustry_Vars(ctx);
	sp[1].o = (jobject)SF_mindustry_Vars_state;
	sp[1].o = (jobject)((mindustry_core_GameState *) NULL_CHECK(sp[1].o))->F_rules;
	jobject temp1 = sp[1].o;
	sp[1].i = temp0;
	sp += 2;
	if (((jint)((mindustry_game_Rules *) NULL_CHECK(temp1))->F_waves) == 0) goto label_6;
	}
	{
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	jint temp0 = (jint)((mindustry_core_GameState *) NULL_CHECK(sp[0].o))->F_wave;
	sp[0].i = temp0;
	sp += 1;
	goto label_7;
	}
label_6:;
	{
	sp[0].o = (jobject)((mindustry_entities_units_AIController *) NULL_CHECK((frame[0].o)))->F_unit;
	jint temp0 = (jint)((mindustry_gen_Unit *) NULL_CHECK(sp[0].o))->F_id;
	sp[0].i = temp0;
	sp += 1;
	}
label_7:;
	{
	sp -= 3;
	((func_arc_math_Rand_setSeed_long) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_Rand_setSeed_long])(ctx, sp[0].o, (jlong((sp[1].i + sp[2].i))));
	LINE_NUMBER(53);
	frame[7].i = (jint(0));
	}
label_9:;
	{
	if ((frame[7].i) >= (jint(5))) goto label_10;
	}
	{
	LINE_NUMBER(54);
	sp[0].o = frame[0].o;
	jfloat temp0 = frame[1].f;
	jfloat temp1 = frame[2].f;
	clinit_mindustry_ai_types_FlyingAI(ctx);
	sp[1].o = (jobject)SF_mindustry_ai_types_FlyingAI_randomTargets;
	clinit_mindustry_ai_types_FlyingAI(ctx);
	sp[2].o = (jobject)SF_mindustry_ai_types_FlyingAI_rand;
	clinit_mindustry_ai_types_FlyingAI(ctx);
	sp[3].o = (jobject)SF_mindustry_ai_types_FlyingAI_randomTargets;
	jint temp2 = (jint)((func_arc_math_Rand_random_int_R_int) ((void **) nullCheck(ctx, sp[2].o)->vtable)[VTABLE_arc_math_Rand_random_int_R_int])(ctx, sp[2].o, ((((jarray) nullCheck(ctx, sp[3].o))->length) - (jint(1))));
	sp[0].o = (jobject)((func_mindustry_ai_types_FlyingAI_targetFlagActive_float_float_mindustry_world_meta_BlockFlag_boolean_R_mindustry_gen_Teamc) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_ai_types_FlyingAI_targetFlagActive_float_float_mindustry_world_meta_BlockFlag_boolean_R_mindustry_gen_Teamc])(ctx, sp[0].o, temp0, temp1, ((jobject)ARRAY_ACCESS(jobject, sp[1].o, temp2)), (jint(1)));
	frame[8].o = sp[0].o;
	LINE_NUMBER(55);
	if ((frame[8].o) == nullptr) goto label_13;
	}
	INST_ALOAD(8);
	popStackFrame(ctx);
	INST_ARETURN();
label_13:;
	{
	LINE_NUMBER(53);
	INST_IINC(7, 1);
	goto label_9;
	}
label_10:;
	{
	LINE_NUMBER(58);
	sp[0].o = (jobject)((func_mindustry_ai_types_FlyingAI_target_float_float_float_boolean_boolean_R_mindustry_gen_Teamc) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_ai_types_FlyingAI_target_float_float_float_boolean_boolean_R_mindustry_gen_Teamc])(ctx, (frame[0].o), (frame[1].f), (frame[2].f), (frame[3].f), (frame[4].i), (frame[5].i));
	frame[7].o = sp[0].o;
	LINE_NUMBER(59);
	if ((frame[7].o) == nullptr) goto label_15;
	}
	INST_ALOAD(7);
	popStackFrame(ctx);
	INST_ARETURN();
label_15:;
	LINE_NUMBER(60);
	goto label_16;
label_4:;
	{
	LINE_NUMBER(61);
	sp[0].o = (jobject)((mindustry_entities_units_AIController *) NULL_CHECK((frame[0].o)))->F_unit;
	sp[0].o = (jobject)((mindustry_gen_Unit *) NULL_CHECK(sp[0].o))->F_type;
	sp[0].o = (jobject)((mindustry_type_UnitType *) NULL_CHECK(sp[0].o))->F_targetFlags;
	frame[7].o = sp[0].o;
	frame[8].i = (((jarray) nullCheck(ctx, (frame[7].o)))->length);
	frame[9].i = (jint(0));
	}
label_17:;
	{
	if ((frame[9].i) >= (frame[8].i)) goto label_16;
	}
	{
	frame[10].o = ((jobject)ARRAY_ACCESS(jobject, (frame[7].o), (frame[9].i)));
	LINE_NUMBER(62);
	if ((frame[10].o) != nullptr) goto label_19;
	}
	{
	LINE_NUMBER(63);
	sp[0].o = (jobject)((func_mindustry_ai_types_FlyingAI_target_float_float_float_boolean_boolean_R_mindustry_gen_Teamc) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_ai_types_FlyingAI_target_float_float_float_boolean_boolean_R_mindustry_gen_Teamc])(ctx, (frame[0].o), (frame[1].f), (frame[2].f), (frame[3].f), (frame[4].i), (frame[5].i));
	frame[11].o = sp[0].o;
	LINE_NUMBER(64);
	if ((frame[11].o) == nullptr) goto label_22;
	}
	INST_ALOAD(11);
	popStackFrame(ctx);
	INST_ARETURN();
label_22:;
	LINE_NUMBER(65);
	goto label_23;
label_19:;
	INST_ILOAD(5);
	if ((--sp)->i == 0) goto label_23;
	{
	LINE_NUMBER(66);
	sp[0].o = (jobject)((func_mindustry_ai_types_FlyingAI_targetFlagActive_float_float_mindustry_world_meta_BlockFlag_boolean_R_mindustry_gen_Teamc) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_ai_types_FlyingAI_targetFlagActive_float_float_mindustry_world_meta_BlockFlag_boolean_R_mindustry_gen_Teamc])(ctx, (frame[0].o), (frame[1].f), (frame[2].f), (frame[10].o), (jint(1)));
	frame[11].o = sp[0].o;
	LINE_NUMBER(67);
	if ((frame[11].o) == nullptr) goto label_23;
	}
	INST_ALOAD(11);
	popStackFrame(ctx);
	INST_ARETURN();
label_23:;
	{
	LINE_NUMBER(61);
	INST_IINC(9, 1);
	goto label_17;
	}
label_16:;
	{
	LINE_NUMBER(72);
	popStackFrame(ctx);
	return (frame[6].o);
	}

	popStackFrame(ctx);
}

void clinit_mindustry_ai_types_FlyingAI(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	clinit_mindustry_entities_units_AIController(ctx);
	jtype frame[4];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ai/types/FlyingAI:<clinit>", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_ai_types_FlyingAI(ctx);
	{
	LINE_NUMBER(12);
	clinit_arc_math_Rand(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_math_Rand);
	init_arc_math_Rand(ctx, sp[0].o);
	clinit_mindustry_ai_types_FlyingAI(ctx);
	SF_mindustry_ai_types_FlyingAI_rand = sp[0].o;
	LINE_NUMBER(13);
	sp[0].o = (jobject)createArray(ctx, &class_mindustry_world_meta_BlockFlag, (9));
	jint temp0 = jint(0);
	clinit_mindustry_world_meta_BlockFlag(ctx);
	sp[1].o = (jobject)SF_mindustry_world_meta_BlockFlag_core;
	ARRAY_ACCESS(jobject, sp[0].o, temp0) = sp[1].o;
	jint temp1 = jint(1);
	clinit_mindustry_world_meta_BlockFlag(ctx);
	sp[1].o = (jobject)SF_mindustry_world_meta_BlockFlag_storage;
	ARRAY_ACCESS(jobject, sp[0].o, temp1) = sp[1].o;
	jint temp2 = jint(2);
	clinit_mindustry_world_meta_BlockFlag(ctx);
	sp[1].o = (jobject)SF_mindustry_world_meta_BlockFlag_generator;
	ARRAY_ACCESS(jobject, sp[0].o, temp2) = sp[1].o;
	jint temp3 = jint(3);
	clinit_mindustry_world_meta_BlockFlag(ctx);
	sp[1].o = (jobject)SF_mindustry_world_meta_BlockFlag_launchPad;
	ARRAY_ACCESS(jobject, sp[0].o, temp3) = sp[1].o;
	jint temp4 = jint(4);
	clinit_mindustry_world_meta_BlockFlag(ctx);
	sp[1].o = (jobject)SF_mindustry_world_meta_BlockFlag_factory;
	ARRAY_ACCESS(jobject, sp[0].o, temp4) = sp[1].o;
	jint temp5 = jint(5);
	clinit_mindustry_world_meta_BlockFlag(ctx);
	sp[1].o = (jobject)SF_mindustry_world_meta_BlockFlag_repair;
	ARRAY_ACCESS(jobject, sp[0].o, temp5) = sp[1].o;
	jint temp6 = 6;
	clinit_mindustry_world_meta_BlockFlag(ctx);
	sp[1].o = (jobject)SF_mindustry_world_meta_BlockFlag_battery;
	ARRAY_ACCESS(jobject, sp[0].o, temp6) = sp[1].o;
	jint temp7 = 7;
	clinit_mindustry_world_meta_BlockFlag(ctx);
	sp[1].o = (jobject)SF_mindustry_world_meta_BlockFlag_reactor;
	ARRAY_ACCESS(jobject, sp[0].o, temp7) = sp[1].o;
	jint temp8 = 8;
	clinit_mindustry_world_meta_BlockFlag(ctx);
	sp[1].o = (jobject)SF_mindustry_world_meta_BlockFlag_drill;
	ARRAY_ACCESS(jobject, sp[0].o, temp8) = sp[1].o;
	clinit_mindustry_ai_types_FlyingAI(ctx);
	SF_mindustry_ai_types_FlyingAI_randomTargets = sp[0].o;
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void *vtable_mindustry_ai_types_FlyingAI[] {
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
	(void *) M_mindustry_entities_units_AIController_fallback_R_mindustry_entities_units_AIController,
	(void *) M_mindustry_entities_units_AIController_useFallback_R_boolean,
	(void *) M_mindustry_entities_units_AIController_updateVisuals,
	(void *) M_mindustry_ai_types_FlyingAI_updateMovement,
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
	(void *) M_mindustry_entities_units_AIController_shouldFire_R_boolean,
	(void *) M_mindustry_entities_units_AIController_shouldShoot_R_boolean,
	(void *) M_mindustry_entities_units_AIController_targetFlag_float_float_mindustry_world_meta_BlockFlag_boolean_R_mindustry_gen_Teamc,
	(void *) M_mindustry_entities_units_AIController_targetFlagActive_float_float_mindustry_world_meta_BlockFlag_boolean_R_mindustry_gen_Teamc,
	(void *) M_mindustry_entities_units_AIController_target_float_float_float_boolean_boolean_R_mindustry_gen_Teamc,
	(void *) M_mindustry_entities_units_AIController_retarget_R_boolean,
	(void *) M_mindustry_ai_types_FlyingAI_findMainTarget_float_float_float_boolean_boolean_R_mindustry_gen_Teamc,
	(void *) M_mindustry_ai_types_FlyingAI_findTarget_float_float_float_boolean_boolean_R_mindustry_gen_Teamc,
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
};

static FieldMetadata fields[] {
	{ "rand", &class_arc_math_Rand, (intptr_t) &SF_mindustry_ai_types_FlyingAI_rand, "Larc/math/Rand;", 24 },
	{ "randomTargets", getArrayClass(&class_mindustry_world_meta_BlockFlag, 1), (intptr_t) &SF_mindustry_ai_types_FlyingAI_randomTargets, "[Lmindustry/world/meta/BlockFlag;", 24 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_mindustry_ai_types_FlyingAI, 0, "()V", 1 },
	{ "updateMovement", (intptr_t) M_mindustry_ai_types_FlyingAI_updateMovement, VTABLE_mindustry_ai_types_FlyingAI_updateMovement, "()V", 1 },
	{ "findTarget", (intptr_t) M_mindustry_ai_types_FlyingAI_findTarget_float_float_float_boolean_boolean_R_mindustry_gen_Teamc, VTABLE_mindustry_ai_types_FlyingAI_findTarget_float_float_float_boolean_boolean_R_mindustry_gen_Teamc, "(FFFZZ)Lmindustry/gen/Teamc;", 1 },
	{ "findMainTarget", (intptr_t) M_mindustry_ai_types_FlyingAI_findMainTarget_float_float_float_boolean_boolean_R_mindustry_gen_Teamc, VTABLE_mindustry_ai_types_FlyingAI_findMainTarget_float_float_float_boolean_boolean_R_mindustry_gen_Teamc, "(FFFZZ)Lmindustry/gen/Teamc;", 1 },
	{ "<clinit>", (intptr_t) clinit_mindustry_ai_types_FlyingAI, 0, "()V", 8 },
};

Class class_mindustry_ai_types_FlyingAI{
		.nativeName = (intptr_t) "mindustry/ai/types/FlyingAI",
		.parentClass = (intptr_t) &class_mindustry_entities_units_AIController,
		.size = sizeof(mindustry_ai_types_FlyingAI),
		.classVtable = (intptr_t) vtable_mindustry_ai_types_FlyingAI,
		.staticInitializer = (intptr_t) clinit_mindustry_ai_types_FlyingAI,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_mindustry_ai_types_FlyingAI,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 33,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 2,
		.nativeFields = (intptr_t) fields,
		.methodCount = 5,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 61,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_mindustry_ai_types_FlyingAI = registerClass(&class_mindustry_ai_types_FlyingAI);

}
