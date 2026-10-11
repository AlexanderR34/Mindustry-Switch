#include "mindustry/ai/types/GroundAI.h"
#include "mindustry/world/Block.h"
#include "mindustry/type/Weapon.h"
#include "mindustry/game/Rules.h"
#include "mindustry/world/blocks/storage/CoreBlock_CoreBuild.h"
#include "mindustry/ai/types/GroundAI.h"
#include "mindustry/ai/types/GroundAI_invoke_arc_func_Cons_1.h"
#include "mindustry/gen/Unitc.h"
#include "arc/func/Cons.h"
#include "mindustry/world/Tile.h"
#include "arc/math/geom/Position.h"
#include "mindustry/entities/units/WeaponMount.h"
#include "java/lang/Math.h"
#include "arc/math/Mathf.h"
#include "mindustry/gen/Teamc.h"
#include "mindustry/gen/Unit.h"
#include "arc/util/Time.h"
#include "mindustry/type/UnitType.h"
#include "mindustry/gen/Building.h"
#include "mindustry/entities/units/UnitController.h"
#include "mindustry/gen/Posc.h"
#include "java/lang/Object.h"
#include "mindustry/entities/units/AIController.h"
#include "mindustry/entities/Units.h"
#include "mindustry/entities/bullet/BulletType.h"
#include "mindustry/game/Team.h"
#include "mindustry/Vars.h"
#include "mindustry/core/GameState.h"

extern "C" {

jfloat SF_mindustry_ai_types_GroundAI_stuckRange;

void mark_mindustry_ai_types_GroundAI(jobject object, jint mark, jint depth) {
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
	auto self = (mindustry_ai_types_GroundAI *) object;
}

void clinit_mindustry_ai_types_GroundAI(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	clinit_mindustry_entities_units_AIController(ctx);
	SF_mindustry_ai_types_GroundAI_stuckRange = jfloat(12.0f);
}

void init_mindustry_ai_types_GroundAI(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ai/types/GroundAI:<init>", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_ai_types_GroundAI(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(14);
	init_mindustry_entities_units_AIController(ctx, (frame[0].o));
	LINE_NUMBER(15);
	((mindustry_ai_types_GroundAI *) NULL_CHECK((frame[0].o)))->F_stuckTime = (jfloat(0));
	LINE_NUMBER(16);
	((mindustry_ai_types_GroundAI *) NULL_CHECK((frame[0].o)))->F_stuckX = (jfloat(-999.0f));
	((mindustry_ai_types_GroundAI *) NULL_CHECK((frame[0].o)))->F_stuckY = (jfloat(-999.0f));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_ai_types_GroundAI_updateMovement(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[14];
	auto stack = &frame[8];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ai/types/GroundAI:updateMovement", 14 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(24);
	jfloat temp0 = jfloat(1);
	jfloat temp1 = jfloat(24.0f);
	sp[0].o = (jobject)((mindustry_entities_units_AIController *) NULL_CHECK((frame[0].o)))->F_unit;
	sp[0].o = (jobject)((mindustry_gen_Unit *) NULL_CHECK(sp[0].o))->F_type;
	jfloat temp2 = (jfloat)SM_java_lang_Math_max_float_float_R_float(ctx, temp0, (temp1 / ((jfloat)((mindustry_type_UnitType *) NULL_CHECK(sp[0].o))->F_speed)));
	frame[1].f = temp2;
	LINE_NUMBER(26);
	sp[0].o = (jobject)((mindustry_entities_units_AIController *) NULL_CHECK((frame[0].o)))->F_unit;
	sp[0].o = (jobject)((func_mindustry_gen_Unit_closestEnemyCore_R_mindustry_world_blocks_storage_CoreBlock$CoreBuild) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_gen_Unit_closestEnemyCore_R_mindustry_world_blocks_storage_CoreBlock$CoreBuild])(ctx, sp[0].o);
	frame[2].o = sp[0].o;
	LINE_NUMBER(27);
	frame[3].i = (jint(0));
	LINE_NUMBER(29);
	if ((frame[2].o) == nullptr) goto label_4;
	}
	{
	sp[0].o = (jobject)((mindustry_entities_units_AIController *) NULL_CHECK((frame[0].o)))->F_unit;
	sp[1].o = frame[2].o;
	sp[2].o = (jobject)((mindustry_entities_units_AIController *) NULL_CHECK((frame[0].o)))->F_unit;
	jfloat temp0 = (jfloat)((func_mindustry_gen_Unit_range_R_float) ((void **) nullCheck(ctx, sp[2].o)->vtable)[VTABLE_mindustry_gen_Unit_range_R_float])(ctx, sp[2].o);
	jfloat temp1 = temp0 / (jfloat(1.3f));
	sp[2].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[2].o)))->F_block;
	jint temp2 = (jint)((func_mindustry_gen_Unit_within_arc_math_geom_Position_float_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_gen_Unit_within_arc_math_geom_Position_float_R_boolean])(ctx, sp[0].o, sp[1].o, (temp1 + ((jfloat((((jint)((mindustry_world_Block *) NULL_CHECK(sp[2].o))->F_size) * (8)))) / (jfloat(2)))));
	if (temp2 == 0) goto label_4;
	}
	{
	LINE_NUMBER(30);
	((mindustry_entities_units_AIController *) NULL_CHECK((frame[0].o)))->F_target = (jref) (frame[2].o);
	LINE_NUMBER(31);
	sp[0].o = (jobject)((mindustry_entities_units_AIController *) NULL_CHECK((frame[0].o)))->F_unit;
	sp[0].o = (jobject)((mindustry_gen_Unit *) NULL_CHECK(sp[0].o))->F_mounts;
	frame[4].o = sp[0].o;
	frame[5].i = (((jarray) nullCheck(ctx, (frame[4].o)))->length);
	frame[6].i = (jint(0));
	}
label_7:;
	{
	if ((frame[6].i) >= (frame[5].i)) goto label_4;
	}
	{
	frame[7].o = ((jobject)ARRAY_ACCESS(jobject, (frame[4].o), (frame[6].i)));
	LINE_NUMBER(32);
	sp[0].o = (jobject)((mindustry_entities_units_WeaponMount *) NULL_CHECK((frame[7].o)))->F_weapon;
	if (((jint)((mindustry_type_Weapon *) NULL_CHECK(sp[0].o))->F_controllable) == 0) goto label_9;
	}
	{
	sp[0].o = (jobject)((mindustry_entities_units_WeaponMount *) NULL_CHECK((frame[7].o)))->F_weapon;
	sp[0].o = (jobject)((mindustry_type_Weapon *) NULL_CHECK(sp[0].o))->F_bullet;
	if (((jint)((mindustry_entities_bullet_BulletType *) NULL_CHECK(sp[0].o))->F_collidesGround) == 0) goto label_9;
	}
	{
	LINE_NUMBER(33);
	((mindustry_entities_units_WeaponMount *) NULL_CHECK((frame[7].o)))->F_target = (jref) (frame[2].o);
	}
label_9:;
	{
	LINE_NUMBER(31);
	INST_IINC(6, 1);
	goto label_7;
	}
label_4:;
	{
	LINE_NUMBER(38);
	if ((frame[2].o) == nullptr) goto label_11;
	}
	{
	sp[0].o = (jobject)((mindustry_entities_units_AIController *) NULL_CHECK((frame[0].o)))->F_unit;
	sp[1].o = frame[2].o;
	sp[2].o = (jobject)((mindustry_entities_units_AIController *) NULL_CHECK((frame[0].o)))->F_unit;
	sp[2].o = (jobject)((mindustry_gen_Unit *) NULL_CHECK(sp[2].o))->F_type;
	jint temp0 = (jint)((func_mindustry_gen_Unit_within_arc_math_geom_Position_float_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_gen_Unit_within_arc_math_geom_Position_float_R_boolean])(ctx, sp[0].o, sp[1].o, (((jfloat)((mindustry_type_UnitType *) NULL_CHECK(sp[2].o))->F_range) * (jfloat(0.5f))));
	if (temp0 != 0) goto label_12;
	}
label_11:;
	{
	LINE_NUMBER(39);
	frame[4].i = (jint(1));
	LINE_NUMBER(41);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	sp[0].o = (jobject)((mindustry_core_GameState *) NULL_CHECK(sp[0].o))->F_rules;
	if (((jint)((mindustry_game_Rules *) NULL_CHECK(sp[0].o))->F_waves) == 0) goto label_14;
	}
	{
	sp[0].o = (jobject)((mindustry_entities_units_AIController *) NULL_CHECK((frame[0].o)))->F_unit;
	sp[0].o = (jobject)((mindustry_gen_Unit *) NULL_CHECK(sp[0].o))->F_team;
	clinit_mindustry_Vars(ctx);
	sp[1].o = (jobject)SF_mindustry_Vars_state;
	sp[1].o = (jobject)((mindustry_core_GameState *) NULL_CHECK(sp[1].o))->F_rules;
	sp[1].o = (jobject)((mindustry_game_Rules *) NULL_CHECK(sp[1].o))->F_defaultTeam;
	if (sp[0].o != sp[1].o) goto label_14;
	}
	{
	LINE_NUMBER(42);
	sp[0].o = (jobject)((func_mindustry_ai_types_GroundAI_getClosestSpawner_R_mindustry_world_Tile) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_ai_types_GroundAI_getClosestSpawner_R_mindustry_world_Tile])(ctx, (frame[0].o));
	frame[5].o = sp[0].o;
	LINE_NUMBER(43);
	if ((frame[5].o) == nullptr) goto label_17;
	}
	{
	sp[0].o = (jobject)((mindustry_entities_units_AIController *) NULL_CHECK((frame[0].o)))->F_unit;
	sp[1].o = frame[5].o;
	clinit_mindustry_Vars(ctx);
	sp[2].o = (jobject)SF_mindustry_Vars_state;
	sp[2].o = (jobject)((mindustry_core_GameState *) NULL_CHECK(sp[2].o))->F_rules;
	jint temp0 = (jint)((func_mindustry_gen_Unit_within_arc_math_geom_Position_float_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_gen_Unit_within_arc_math_geom_Position_float_R_boolean])(ctx, sp[0].o, sp[1].o, (((jfloat)((mindustry_game_Rules *) NULL_CHECK(sp[2].o))->F_dropZoneRadius) + (jfloat(120.0f))));
	if (temp0 == 0) goto label_17;
	}
	INST_ICONST(0);
	INST_ISTORE(4);
label_17:;
	{
	LINE_NUMBER(44);
	if ((frame[5].o) != nullptr) goto label_14;
	}
	INST_ALOAD(2);
	if ((--sp)->o != nullptr) goto label_14;
	INST_ICONST(0);
	INST_ISTORE(4);
label_14:;
	{
	LINE_NUMBER(48);
	if ((frame[2].o) != nullptr) goto label_18;
	}
	{
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	sp[0].o = (jobject)((mindustry_core_GameState *) NULL_CHECK(sp[0].o))->F_rules;
	if (((jint)((mindustry_game_Rules *) NULL_CHECK(sp[0].o))->F_waves) == 0) goto label_19;
	}
	{
	sp[0].o = (jobject)((func_mindustry_ai_types_GroundAI_getClosestSpawner_R_mindustry_world_Tile) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_ai_types_GroundAI_getClosestSpawner_R_mindustry_world_Tile])(ctx, (frame[0].o));
	if (sp[0].o != nullptr) goto label_18;
	}
label_19:;
	{
	LINE_NUMBER(49);
	frame[4].i = (jint(0));
	}
label_18:;
	{
	LINE_NUMBER(52);
	frame[3].i = (frame[4].i);
	LINE_NUMBER(54);
	if ((frame[4].i) == 0) goto label_12;
	}
	{
	sp[0].o = frame[0].o;
	jint temp0 = jint(0);
	jint temp1 = jint(1);
	sp[1].i = temp0;
	sp[2].i = temp1;
	sp += 3;
	if ((floatCompare(((jfloat)((mindustry_ai_types_GroundAI *) NULL_CHECK((frame[0].o)))->F_stuckTime), (frame[1].f), -1)) < 0) goto label_21;
	}
	INST_ICONST(1);
	goto label_22;
label_21:;
	INST_ICONST(0);
label_22:;
	POP_N(4); // Pop method args
	((func_mindustry_ai_types_GroundAI_pathfind_int_boolean_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_ai_types_GroundAI_pathfind_int_boolean_boolean])(ctx, sp[0].o, sp[1].i, sp[2].i, sp[3].i);
label_12:;
	{
	LINE_NUMBER(57);
	sp[0].o = (jobject)((mindustry_entities_units_AIController *) NULL_CHECK((frame[0].o)))->F_unit;
	sp[0].o = (jobject)((mindustry_gen_Unit *) NULL_CHECK(sp[0].o))->F_type;
	if (((jint)((mindustry_type_UnitType *) NULL_CHECK(sp[0].o))->F_canBoost) == 0) goto label_23;
	}
	{
	sp[0].o = (jobject)((mindustry_entities_units_AIController *) NULL_CHECK((frame[0].o)))->F_unit;
	if ((floatCompare(((jfloat)((mindustry_gen_Unit *) NULL_CHECK(sp[0].o))->F_elevation), (jfloat(1,000000e-03f)), -1)) <= 0) goto label_23;
	}
	{
	sp[0].o = (jobject)((mindustry_entities_units_AIController *) NULL_CHECK((frame[0].o)))->F_unit;
	jint temp0 = (jint)((func_mindustry_gen_Unit_onSolid_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_gen_Unit_onSolid_R_boolean])(ctx, sp[0].o);
	if (temp0 != 0) goto label_23;
	}
	{
	LINE_NUMBER(58);
	sp[0].o = (jobject)((mindustry_entities_units_AIController *) NULL_CHECK((frame[0].o)))->F_unit;
	sp[1].o = (jobject)((mindustry_entities_units_AIController *) NULL_CHECK((frame[0].o)))->F_unit;
	jfloat temp0 = (jfloat)((mindustry_gen_Unit *) NULL_CHECK(sp[1].o))->F_elevation;
	jfloat temp1 = jfloat(0);
	sp[1].o = (jobject)((mindustry_entities_units_AIController *) NULL_CHECK((frame[0].o)))->F_unit;
	sp[1].o = (jobject)((mindustry_gen_Unit *) NULL_CHECK(sp[1].o))->F_type;
	jfloat temp2 = (jfloat)SM_arc_math_Mathf_approachDelta_float_float_float_R_float(ctx, temp0, temp1, ((jfloat)((mindustry_type_UnitType *) NULL_CHECK(sp[1].o))->F_descentSpeed));
	((mindustry_gen_Unit *) NULL_CHECK(sp[0].o))->F_elevation = temp2;
	}
label_23:;
	{
	LINE_NUMBER(61);
	((func_mindustry_ai_types_GroundAI_faceTarget) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_ai_types_GroundAI_faceTarget])(ctx, (frame[0].o));
	LINE_NUMBER(63);
	if ((frame[3].i) == 0) goto label_26;
	}
	{
	LINE_NUMBER(65);
	sp[0].o = (jobject)((mindustry_entities_units_AIController *) NULL_CHECK((frame[0].o)))->F_unit;
	jint temp0 = (jint)((func_mindustry_gen_Unit_within_float_float_float_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_gen_Unit_within_float_float_float_R_boolean])(ctx, sp[0].o, ((jfloat)((mindustry_ai_types_GroundAI *) NULL_CHECK((frame[0].o)))->F_stuckX), ((jfloat)((mindustry_ai_types_GroundAI *) NULL_CHECK((frame[0].o)))->F_stuckY), (jfloat(12.0f)));
	if (temp0 == 0) goto label_28;
	}
	{
	LINE_NUMBER(66);
	sp[0].o = frame[0].o;
	((mindustry_ai_types_GroundAI *) NULL_CHECK(sp[0].o))->F_stuckTime = (((jfloat)((mindustry_ai_types_GroundAI *) NULL_CHECK(sp[0].o))->F_stuckTime) + (clinit_arc_util_Time(ctx), (jfloat)SF_arc_util_Time_delta));
	LINE_NUMBER(67);
	if ((floatCompare((((jfloat)((mindustry_ai_types_GroundAI *) NULL_CHECK((frame[0].o)))->F_stuckTime) - (clinit_arc_util_Time(ctx), (jfloat)SF_arc_util_Time_delta)), (frame[1].f), 1)) >= 0) goto label_31;
	}
	{
	if ((floatCompare(((jfloat)((mindustry_ai_types_GroundAI *) NULL_CHECK((frame[0].o)))->F_stuckTime), (frame[1].f), -1)) < 0) goto label_31;
	}
	{
	LINE_NUMBER(68);
	sp[0].o = (jobject)((mindustry_entities_units_AIController *) NULL_CHECK((frame[0].o)))->F_unit;
	frame[4].f = ((((jfloat)((mindustry_gen_Unit *) NULL_CHECK(sp[0].o))->F_hitSize) * (jfloat(0.6f))) * (jfloat(2)));
	LINE_NUMBER(69);
	sp[0].o = (jobject)((mindustry_entities_units_AIController *) NULL_CHECK((frame[0].o)))->F_unit;
	sp[0].o = (jobject)((mindustry_gen_Unit *) NULL_CHECK(sp[0].o))->F_team;
	sp[1].o = (jobject)((mindustry_entities_units_AIController *) NULL_CHECK((frame[0].o)))->F_unit;
	jfloat temp0 = (jfloat)((mindustry_gen_Unit *) NULL_CHECK(sp[1].o))->F_x;
	sp[1].o = (jobject)((mindustry_entities_units_AIController *) NULL_CHECK((frame[0].o)))->F_unit;
	jfloat temp1 = (jfloat)((mindustry_gen_Unit *) NULL_CHECK(sp[1].o))->F_y;
	jfloat temp2 = frame[4].f;
	{ /* InvokeDynamic */
		clinit_mindustry_ai_types_GroundAI_invoke_arc_func_Cons_1(ctx);
		auto proxy = (mindustry_ai_types_GroundAI_invoke_arc_func_Cons_1 *) gcAlloc(ctx, &class_mindustry_ai_types_GroundAI_invoke_arc_func_Cons_1);
		proxy->F_field1 = (frame[4].f);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[1].o = (jobject) proxy;
	}
	SM_mindustry_entities_Units_nearby_mindustry_game_Team_float_float_float_arc_func_Cons(ctx, sp[0].o, temp0, temp1, temp2, sp[1].o);
	LINE_NUMBER(76);
	goto label_31;
	}
label_28:;
	{
	LINE_NUMBER(78);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((mindustry_entities_units_AIController *) NULL_CHECK((frame[0].o)))->F_unit;
	((mindustry_ai_types_GroundAI *) NULL_CHECK(sp[0].o))->F_stuckX = ((jfloat)((mindustry_gen_Unit *) NULL_CHECK(sp[1].o))->F_x);
	LINE_NUMBER(79);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((mindustry_entities_units_AIController *) NULL_CHECK((frame[0].o)))->F_unit;
	((mindustry_ai_types_GroundAI *) NULL_CHECK(sp[0].o))->F_stuckY = ((jfloat)((mindustry_gen_Unit *) NULL_CHECK(sp[1].o))->F_y);
	LINE_NUMBER(80);
	((mindustry_ai_types_GroundAI *) NULL_CHECK((frame[0].o)))->F_stuckTime = (jfloat(0));
	goto label_31;
	}
label_26:;
	{
	LINE_NUMBER(83);
	((mindustry_ai_types_GroundAI *) NULL_CHECK((frame[0].o)))->F_stuckTime = (jfloat(0));
	}
label_31:;
	LINE_NUMBER(85);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_ai_types_GroundAI_lambda$updateMovement$0_float_mindustry_gen_Unit(jcontext ctx, jobject self, jfloat param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[11];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ai/types/GroundAI:lambda$updateMovement$0", 11 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(70);
	sp[0].o = frame[2].o;
	sp[1].o = (jobject)((mindustry_entities_units_AIController *) NULL_CHECK((frame[0].o)))->F_unit;
	if (sp[0].o == sp[1].o) goto label_1;
	}
	{
	sp[0].o = (jobject)((func_mindustry_gen_Unit_controller_R_mindustry_entities_units_UnitController) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_mindustry_gen_Unit_controller_R_mindustry_entities_units_UnitController])(ctx, (frame[2].o));
	frame[4].o = sp[0].o;
	if ((isInstance(ctx, (frame[4].o), &class_mindustry_ai_types_GroundAI)) == 0) goto label_1;
	}
	{
	frame[3].o = (checkCast(ctx, &class_mindustry_ai_types_GroundAI, (frame[4].o)));
	sp[0].o = frame[2].o;
	sp[1].o = (jobject)((mindustry_entities_units_AIController *) NULL_CHECK((frame[0].o)))->F_unit;
	jfloat temp0 = (jfloat)((mindustry_gen_Unit *) NULL_CHECK(sp[1].o))->F_x;
	sp[1].o = (jobject)((mindustry_entities_units_AIController *) NULL_CHECK((frame[0].o)))->F_unit;
	jint temp1 = (jint)((func_mindustry_gen_Unit_within_float_float_float_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_gen_Unit_within_float_float_float_R_boolean])(ctx, sp[0].o, temp0, ((jfloat)((mindustry_gen_Unit *) NULL_CHECK(sp[1].o))->F_y), ((frame[1].f) + (((jfloat)((mindustry_gen_Unit *) NULL_CHECK((frame[2].o)))->F_hitSize) * (jfloat(0.6f)))));
	if (temp1 == 0) goto label_1;
	}
	{
	LINE_NUMBER(71);
	((mindustry_ai_types_GroundAI *) NULL_CHECK((frame[3].o)))->F_stuckX = ((jfloat)((mindustry_gen_Unit *) NULL_CHECK((frame[2].o)))->F_x);
	LINE_NUMBER(72);
	((mindustry_ai_types_GroundAI *) NULL_CHECK((frame[3].o)))->F_stuckY = ((jfloat)((mindustry_gen_Unit *) NULL_CHECK((frame[2].o)))->F_y);
	LINE_NUMBER(73);
	sp[0].o = frame[3].o;
	jfloat temp0 = jfloat(1);
	jfloat temp1 = jfloat(24.0f);
	sp[1].o = (jobject)((mindustry_gen_Unit *) NULL_CHECK((frame[2].o)))->F_type;
	jfloat temp2 = (jfloat)SM_java_lang_Math_max_float_float_R_float(ctx, temp0, (temp1 / ((jfloat)((mindustry_type_UnitType *) NULL_CHECK(sp[1].o))->F_speed)));
	((mindustry_ai_types_GroundAI *) NULL_CHECK(sp[0].o))->F_stuckTime = (temp2 + (jfloat(1)));
	}
label_1:;
	LINE_NUMBER(75);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void *vtable_mindustry_ai_types_GroundAI[] {
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
	(void *) M_mindustry_ai_types_GroundAI_updateMovement,
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
	(void *) M_mindustry_ai_types_GroundAI_lambda$updateMovement$0_float_mindustry_gen_Unit,
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
	{ "lambda$updateMovement$0", "(FLmindustry/gen/Unit;)V" },
};

static FieldMetadata fields[] {
	{ "stuckTime", &class_float, offsetof(mindustry_ai_types_GroundAI, F_stuckTime), "F", 0 },
	{ "stuckX", &class_float, offsetof(mindustry_ai_types_GroundAI, F_stuckX), "F", 0 },
	{ "stuckY", &class_float, offsetof(mindustry_ai_types_GroundAI, F_stuckY), "F", 0 },
	{ "stuckRange", &class_float, (intptr_t) &SF_mindustry_ai_types_GroundAI_stuckRange, "F", 24 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_mindustry_ai_types_GroundAI, 0, "()V", 1 },
	{ "updateMovement", (intptr_t) M_mindustry_ai_types_GroundAI_updateMovement, VTABLE_mindustry_ai_types_GroundAI_updateMovement, "()V", 1 },
	{ "lambda$updateMovement$0", (intptr_t) M_mindustry_ai_types_GroundAI_lambda$updateMovement$0_float_mindustry_gen_Unit, VTABLE_mindustry_ai_types_GroundAI_lambda$updateMovement$0_float_mindustry_gen_Unit, "(FLmindustry/gen/Unit;)V", 4098 },
};

Class class_mindustry_ai_types_GroundAI{
		.nativeName = (intptr_t) "mindustry/ai/types/GroundAI",
		.parentClass = (intptr_t) &class_mindustry_entities_units_AIController,
		.size = sizeof(mindustry_ai_types_GroundAI),
		.classVtable = (intptr_t) vtable_mindustry_ai_types_GroundAI,
		.staticInitializer = (intptr_t) clinit_mindustry_ai_types_GroundAI,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_mindustry_ai_types_GroundAI,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 33,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 4,
		.nativeFields = (intptr_t) fields,
		.methodCount = 3,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 62,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_mindustry_ai_types_GroundAI = registerClass(&class_mindustry_ai_types_GroundAI);

}
