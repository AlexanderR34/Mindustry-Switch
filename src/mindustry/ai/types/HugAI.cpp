#include "mindustry/ai/types/HugAI.h"
#include "arc/math/geom/Vec2.h"
#include "mindustry/world/Block.h"
#include "mindustry/type/Weapon.h"
#include "mindustry/entities/Sized.h"
#include "mindustry/game/Rules.h"
#include "mindustry/world/blocks/storage/CoreBlock_CoreBuild.h"
#include "arc/math/geom/Point2.h"
#include "mindustry/ai/types/HugAI.h"
#include "mindustry/gen/Velc.h"
#include "mindustry/gen/Unitc.h"
#include "mindustry/world/Tile.h"
#include "arc/math/geom/Position.h"
#include "mindustry/entities/units/WeaponMount.h"
#include "arc/math/geom/Geometry.h"
#include "arc/math/Mathf.h"
#include "mindustry/gen/Teamc.h"
#include "arc/math/geom/Geometry_Raycaster.h"
#include "mindustry/gen/Unit.h"
#include "mindustry/type/UnitType.h"
#include "mindustry/gen/Building.h"
#include "mindustry/entities/units/UnitController.h"
#include "mindustry/gen/Posc.h"
#include "java/lang/Object.h"
#include "mindustry/entities/units/AIController.h"
#include "mindustry/ai/types/HugAI_invoke_arc_math_geom_Geometry_Raycaster_1.h"
#include "mindustry/entities/bullet/BulletType.h"
#include "mindustry/game/Team.h"
#include "mindustry/Vars.h"
#include "mindustry/core/GameState.h"
#include "mindustry/core/World.h"

extern "C" {


void mark_mindustry_ai_types_HugAI(jobject object, jint mark, jint depth) {
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
	auto self = (mindustry_ai_types_HugAI *) object;
}

void clinit_mindustry_ai_types_HugAI(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	clinit_mindustry_entities_units_AIController(ctx);
}

void init_mindustry_ai_types_HugAI(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ai/types/HugAI:<init>", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_ai_types_HugAI(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(14);
	init_mindustry_entities_units_AIController(ctx, (frame[0].o));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_ai_types_HugAI_updateMovement(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[11];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ai/types/HugAI:updateMovement", 11 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(18);
	sp[0].o = (jobject)((mindustry_entities_units_AIController *) NULL_CHECK((frame[0].o)))->F_unit;
	sp[0].o = (jobject)((func_mindustry_gen_Unit_closestEnemyCore_R_mindustry_world_blocks_storage_CoreBlock$CoreBuild) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_gen_Unit_closestEnemyCore_R_mindustry_world_blocks_storage_CoreBlock$CoreBuild])(ctx, sp[0].o);
	frame[1].o = sp[0].o;
	LINE_NUMBER(20);
	if ((frame[1].o) == nullptr) goto label_2;
	}
	{
	sp[0].o = (jobject)((mindustry_entities_units_AIController *) NULL_CHECK((frame[0].o)))->F_unit;
	sp[1].o = frame[1].o;
	sp[2].o = (jobject)((mindustry_entities_units_AIController *) NULL_CHECK((frame[0].o)))->F_unit;
	jfloat temp0 = (jfloat)((func_mindustry_gen_Unit_range_R_float) ((void **) nullCheck(ctx, sp[2].o)->vtable)[VTABLE_mindustry_gen_Unit_range_R_float])(ctx, sp[2].o);
	jfloat temp1 = temp0 / (jfloat(1.1f));
	sp[2].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[1].o)))->F_block;
	jint temp2 = (jint)((func_mindustry_gen_Unit_within_arc_math_geom_Position_float_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_gen_Unit_within_arc_math_geom_Position_float_R_boolean])(ctx, sp[0].o, sp[1].o, (temp1 + ((jfloat((((jint)((mindustry_world_Block *) NULL_CHECK(sp[2].o))->F_size) * (8)))) / (jfloat(2)))));
	if (temp2 == 0) goto label_2;
	}
	{
	LINE_NUMBER(21);
	((mindustry_entities_units_AIController *) NULL_CHECK((frame[0].o)))->F_target = (jref) (frame[1].o);
	LINE_NUMBER(22);
	sp[0].o = (jobject)((mindustry_entities_units_AIController *) NULL_CHECK((frame[0].o)))->F_unit;
	sp[0].o = (jobject)((mindustry_gen_Unit *) NULL_CHECK(sp[0].o))->F_mounts;
	frame[2].o = sp[0].o;
	frame[3].i = (((jarray) nullCheck(ctx, (frame[2].o)))->length);
	frame[4].i = (jint(0));
	}
label_5:;
	{
	if ((frame[4].i) >= (frame[3].i)) goto label_2;
	}
	{
	frame[5].o = ((jobject)ARRAY_ACCESS(jobject, (frame[2].o), (frame[4].i)));
	LINE_NUMBER(23);
	sp[0].o = (jobject)((mindustry_entities_units_WeaponMount *) NULL_CHECK((frame[5].o)))->F_weapon;
	if (((jint)((mindustry_type_Weapon *) NULL_CHECK(sp[0].o))->F_controllable) == 0) goto label_7;
	}
	{
	sp[0].o = (jobject)((mindustry_entities_units_WeaponMount *) NULL_CHECK((frame[5].o)))->F_weapon;
	sp[0].o = (jobject)((mindustry_type_Weapon *) NULL_CHECK(sp[0].o))->F_bullet;
	if (((jint)((mindustry_entities_bullet_BulletType *) NULL_CHECK(sp[0].o))->F_collidesGround) == 0) goto label_7;
	}
	{
	LINE_NUMBER(24);
	((mindustry_entities_units_WeaponMount *) NULL_CHECK((frame[5].o)))->F_target = (jref) (frame[1].o);
	}
label_7:;
	{
	LINE_NUMBER(22);
	INST_IINC(4, 1);
	goto label_5;
	}
label_2:;
	{
	LINE_NUMBER(29);
	frame[2].i = (jint(1));
	LINE_NUMBER(31);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	sp[0].o = (jobject)((mindustry_core_GameState *) NULL_CHECK(sp[0].o))->F_rules;
	if (((jint)((mindustry_game_Rules *) NULL_CHECK(sp[0].o))->F_waves) == 0) goto label_10;
	}
	{
	sp[0].o = (jobject)((mindustry_entities_units_AIController *) NULL_CHECK((frame[0].o)))->F_unit;
	sp[0].o = (jobject)((mindustry_gen_Unit *) NULL_CHECK(sp[0].o))->F_team;
	clinit_mindustry_Vars(ctx);
	sp[1].o = (jobject)SF_mindustry_Vars_state;
	sp[1].o = (jobject)((mindustry_core_GameState *) NULL_CHECK(sp[1].o))->F_rules;
	sp[1].o = (jobject)((mindustry_game_Rules *) NULL_CHECK(sp[1].o))->F_defaultTeam;
	if (sp[0].o != sp[1].o) goto label_10;
	}
	{
	LINE_NUMBER(32);
	sp[0].o = (jobject)((func_mindustry_ai_types_HugAI_getClosestSpawner_R_mindustry_world_Tile) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_ai_types_HugAI_getClosestSpawner_R_mindustry_world_Tile])(ctx, (frame[0].o));
	frame[3].o = sp[0].o;
	LINE_NUMBER(33);
	if ((frame[3].o) == nullptr) goto label_10;
	}
	{
	sp[0].o = (jobject)((mindustry_entities_units_AIController *) NULL_CHECK((frame[0].o)))->F_unit;
	sp[1].o = frame[3].o;
	clinit_mindustry_Vars(ctx);
	sp[2].o = (jobject)SF_mindustry_Vars_state;
	sp[2].o = (jobject)((mindustry_core_GameState *) NULL_CHECK(sp[2].o))->F_rules;
	jint temp0 = (jint)((func_mindustry_gen_Unit_within_arc_math_geom_Position_float_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_gen_Unit_within_arc_math_geom_Position_float_R_boolean])(ctx, sp[0].o, sp[1].o, (((jfloat)((mindustry_game_Rules *) NULL_CHECK(sp[2].o))->F_dropZoneRadius) + (jfloat(120.0f))));
	if (temp0 == 0) goto label_10;
	}
	INST_ICONST(0);
	INST_ISTORE(2);
label_10:;
	{
	LINE_NUMBER(37);
	sp[0].o = (jobject)((mindustry_entities_units_AIController *) NULL_CHECK((frame[0].o)))->F_target;
	if (sp[0].o == nullptr) goto label_13;
	}
	{
	sp[0].o = (jobject)((mindustry_entities_units_AIController *) NULL_CHECK((frame[0].o)))->F_unit;
	sp[1].o = (jobject)((mindustry_entities_units_AIController *) NULL_CHECK((frame[0].o)))->F_target;
	sp[2].o = (jobject)((mindustry_entities_units_AIController *) NULL_CHECK((frame[0].o)))->F_unit;
	sp[2].o = (jobject)((mindustry_gen_Unit *) NULL_CHECK(sp[2].o))->F_type;
	jint temp0 = (jint)((func_mindustry_gen_Unit_within_arc_math_geom_Position_float_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_gen_Unit_within_arc_math_geom_Position_float_R_boolean])(ctx, sp[0].o, sp[1].o, ((jfloat)((mindustry_type_UnitType *) NULL_CHECK(sp[2].o))->F_range));
	if (temp0 == 0) goto label_13;
	}
	{
	sp[0].o = (jobject)((mindustry_entities_units_AIController *) NULL_CHECK((frame[0].o)))->F_unit;
	jint temp0 = (jint)((func_mindustry_gen_Unit_tileX_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_gen_Unit_tileX_R_int])(ctx, sp[0].o);
	sp[0].o = (jobject)((mindustry_entities_units_AIController *) NULL_CHECK((frame[0].o)))->F_unit;
	jint temp1 = (jint)((func_mindustry_gen_Unit_tileY_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_gen_Unit_tileY_R_int])(ctx, sp[0].o);
	sp[0].o = (jobject)((mindustry_entities_units_AIController *) NULL_CHECK((frame[0].o)))->F_target;
	jint temp2 = (jint)((func_mindustry_gen_Posc_tileX_R_int) resolveInterfaceMethod(ctx, &class_mindustry_gen_Posc, INDEX_mindustry_gen_Posc_tileX_R_int, sp[0].o))(ctx, sp[0].o);
	sp[0].o = (jobject)((mindustry_entities_units_AIController *) NULL_CHECK((frame[0].o)))->F_target;
	jint temp3 = (jint)((func_mindustry_gen_Posc_tileY_R_int) resolveInterfaceMethod(ctx, &class_mindustry_gen_Posc, INDEX_mindustry_gen_Posc_tileY_R_int, sp[0].o))(ctx, sp[0].o);
	{ /* InvokeDynamic */
		clinit_mindustry_ai_types_HugAI_invoke_arc_math_geom_Geometry$Raycaster_1(ctx);
		auto proxy = (mindustry_ai_types_HugAI_invoke_arc_math_geom_Geometry$Raycaster_1 *) gcAlloc(ctx, &class_mindustry_ai_types_HugAI_invoke_arc_math_geom_Geometry$Raycaster_1);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[0].o = (jobject) proxy;
	}
	jint temp4 = (jint)SM_mindustry_core_World_raycast_int_int_int_int_arc_math_geom_Geometry$Raycaster_R_boolean(ctx, temp0, temp1, temp2, temp3, sp[0].o);
	if (temp4 != 0) goto label_13;
	}
	{
	LINE_NUMBER(45);
	sp[0].o = (jobject)((mindustry_entities_units_AIController *) NULL_CHECK((frame[0].o)))->F_unit;
	sp[1].o = (jobject)((mindustry_entities_units_AIController *) NULL_CHECK((frame[0].o)))->F_target;
	sp[2].o = (jobject)((mindustry_entities_units_AIController *) NULL_CHECK((frame[0].o)))->F_unit;
	jfloat temp0 = (jfloat)((mindustry_gen_Unit *) NULL_CHECK(sp[2].o))->F_hitSize;
	sp[2].o = (jobject)((mindustry_entities_units_AIController *) NULL_CHECK((frame[0].o)))->F_target;
	frame[4].o = sp[2].o;
	sp[2].f = temp0;
	sp += 3;
	if ((isInstance(ctx, (frame[4].o), &class_mindustry_entities_Sized)) == 0) goto label_15;
	}
	{
	frame[3].o = (checkCast(ctx, &class_mindustry_entities_Sized, (frame[4].o)));
	jfloat temp0 = (jfloat)((func_mindustry_entities_Sized_hitSize_R_float) resolveInterfaceMethod(ctx, &class_mindustry_entities_Sized, INDEX_mindustry_entities_Sized_hitSize_R_float, (frame[3].o)))(ctx, (frame[3].o));
	sp[0].f = temp0;
	sp += 1;
	goto label_17;
	}
label_15:;
	INST_FCONST(1);
label_17:;
	{
	sp -= 4;
	jint temp0 = (jint)((func_mindustry_gen_Unit_within_arc_math_geom_Position_float_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_gen_Unit_within_arc_math_geom_Position_float_R_boolean])(ctx, sp[0].o, sp[1].o, ((sp[2].f + sp[3].f) * (jfloat(0.5f))));
	if (temp0 == 0) goto label_18;
	}
	{
	LINE_NUMBER(47);
	sp[0].o = (jobject)((mindustry_entities_units_AIController *) NULL_CHECK((frame[0].o)))->F_unit;
	clinit_mindustry_ai_types_HugAI(ctx);
	sp[1].o = (jobject)SF_mindustry_entities_units_AIController_vec;
	sp[2].o = (jobject)((mindustry_entities_units_AIController *) NULL_CHECK((frame[0].o)))->F_target;
	sp[1].o = (jobject)((func_arc_math_geom_Vec2_set_arc_math_geom_Position_R_arc_math_geom_Vec2) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_math_geom_Vec2_set_arc_math_geom_Position_R_arc_math_geom_Vec2])(ctx, sp[1].o, sp[2].o);
	sp[2].o = (jobject)((mindustry_entities_units_AIController *) NULL_CHECK((frame[0].o)))->F_unit;
	sp[1].o = (jobject)((func_arc_math_geom_Vec2_sub_arc_math_geom_Position_R_arc_math_geom_Vec2) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_math_geom_Vec2_sub_arc_math_geom_Position_R_arc_math_geom_Vec2])(ctx, sp[1].o, sp[2].o);
	sp[1].o = (jobject)((func_arc_math_geom_Vec2_rotate_float_R_arc_math_geom_Vec2) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_math_geom_Vec2_rotate_float_R_arc_math_geom_Vec2])(ctx, sp[1].o, (jfloat(90.0f)));
	sp[2].o = (jobject)((mindustry_entities_units_AIController *) NULL_CHECK((frame[0].o)))->F_unit;
	jfloat temp0 = (jfloat)((func_mindustry_gen_Unit_speed_R_float) ((void **) nullCheck(ctx, sp[2].o)->vtable)[VTABLE_mindustry_gen_Unit_speed_R_float])(ctx, sp[2].o);
	sp[1].o = (jobject)((func_arc_math_geom_Vec2_setLength_float_R_arc_math_geom_Vec2) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_math_geom_Vec2_setLength_float_R_arc_math_geom_Vec2])(ctx, sp[1].o, temp0);
	((func_mindustry_gen_Unit_movePref_arc_math_geom_Vec2) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_gen_Unit_movePref_arc_math_geom_Vec2])(ctx, sp[0].o, sp[1].o);
	goto label_20;
	}
label_18:;
	{
	LINE_NUMBER(50);
	sp[0].o = (jobject)((mindustry_entities_units_AIController *) NULL_CHECK((frame[0].o)))->F_unit;
	clinit_mindustry_ai_types_HugAI(ctx);
	sp[1].o = (jobject)SF_mindustry_entities_units_AIController_vec;
	sp[2].o = (jobject)((mindustry_entities_units_AIController *) NULL_CHECK((frame[0].o)))->F_target;
	sp[1].o = (jobject)((func_arc_math_geom_Vec2_set_arc_math_geom_Position_R_arc_math_geom_Vec2) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_math_geom_Vec2_set_arc_math_geom_Position_R_arc_math_geom_Vec2])(ctx, sp[1].o, sp[2].o);
	sp[2].o = (jobject)((mindustry_entities_units_AIController *) NULL_CHECK((frame[0].o)))->F_unit;
	sp[1].o = (jobject)((func_arc_math_geom_Vec2_sub_arc_math_geom_Position_R_arc_math_geom_Vec2) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_math_geom_Vec2_sub_arc_math_geom_Position_R_arc_math_geom_Vec2])(ctx, sp[1].o, sp[2].o);
	sp[2].o = (jobject)((mindustry_entities_units_AIController *) NULL_CHECK((frame[0].o)))->F_unit;
	jfloat temp0 = (jfloat)((func_mindustry_gen_Unit_speed_R_float) ((void **) nullCheck(ctx, sp[2].o)->vtable)[VTABLE_mindustry_gen_Unit_speed_R_float])(ctx, sp[2].o);
	sp[1].o = (jobject)((func_arc_math_geom_Vec2_limit_float_R_arc_math_geom_Vec2) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_math_geom_Vec2_limit_float_R_arc_math_geom_Vec2])(ctx, sp[1].o, temp0);
	((func_mindustry_gen_Unit_movePref_arc_math_geom_Vec2) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_gen_Unit_movePref_arc_math_geom_Vec2])(ctx, sp[0].o, sp[1].o);
	goto label_20;
	}
label_13:;
	{
	LINE_NUMBER(52);
	if ((frame[2].i) == 0) goto label_20;
	}
	{
	LINE_NUMBER(53);
	((func_mindustry_ai_types_HugAI_pathfind_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_ai_types_HugAI_pathfind_int])(ctx, (frame[0].o), (jint(0)));
	}
label_20:;
	{
	LINE_NUMBER(56);
	sp[0].o = (jobject)((mindustry_entities_units_AIController *) NULL_CHECK((frame[0].o)))->F_unit;
	sp[0].o = (jobject)((mindustry_gen_Unit *) NULL_CHECK(sp[0].o))->F_type;
	if (((jint)((mindustry_type_UnitType *) NULL_CHECK(sp[0].o))->F_canBoost) == 0) goto label_22;
	}
	{
	sp[0].o = (jobject)((mindustry_entities_units_AIController *) NULL_CHECK((frame[0].o)))->F_unit;
	if ((floatCompare(((jfloat)((mindustry_gen_Unit *) NULL_CHECK(sp[0].o))->F_elevation), (jfloat(1,000000e-03f)), -1)) <= 0) goto label_22;
	}
	{
	sp[0].o = (jobject)((mindustry_entities_units_AIController *) NULL_CHECK((frame[0].o)))->F_unit;
	jint temp0 = (jint)((func_mindustry_gen_Unit_onSolid_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_gen_Unit_onSolid_R_boolean])(ctx, sp[0].o);
	if (temp0 != 0) goto label_22;
	}
	{
	LINE_NUMBER(57);
	sp[0].o = (jobject)((mindustry_entities_units_AIController *) NULL_CHECK((frame[0].o)))->F_unit;
	sp[1].o = (jobject)((mindustry_entities_units_AIController *) NULL_CHECK((frame[0].o)))->F_unit;
	jfloat temp0 = (jfloat)((mindustry_gen_Unit *) NULL_CHECK(sp[1].o))->F_elevation;
	jfloat temp1 = jfloat(0);
	sp[1].o = (jobject)((mindustry_entities_units_AIController *) NULL_CHECK((frame[0].o)))->F_unit;
	sp[1].o = (jobject)((mindustry_gen_Unit *) NULL_CHECK(sp[1].o))->F_type;
	jfloat temp2 = (jfloat)SM_arc_math_Mathf_approachDelta_float_float_float_R_float(ctx, temp0, temp1, ((jfloat)((mindustry_type_UnitType *) NULL_CHECK(sp[1].o))->F_descentSpeed));
	((mindustry_gen_Unit *) NULL_CHECK(sp[0].o))->F_elevation = temp2;
	}
label_22:;
	{
	LINE_NUMBER(60);
	((func_mindustry_ai_types_HugAI_faceTarget) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_ai_types_HugAI_faceTarget])(ctx, (frame[0].o));
	LINE_NUMBER(61);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jbool M_mindustry_ai_types_HugAI_lambda$updateMovement$0_int_int_R_boolean(jcontext ctx, jobject self, jint param0, jint param1) {
	NULL_CHECK(self);
	jtype frame[11];
	auto stack = &frame[7];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ai/types/HugAI:lambda$updateMovement$0", 11 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(38);
	clinit_arc_math_geom_Geometry(ctx);
	sp[0].o = (jobject)SF_arc_math_geom_Geometry_d4c;
	frame[3].o = sp[0].o;
	frame[4].i = (((jarray) nullCheck(ctx, (frame[3].o)))->length);
	frame[5].i = (jint(0));
	}
label_3:;
	{
	if ((frame[5].i) >= (frame[4].i)) goto label_4;
	}
	{
	frame[6].o = ((jobject)ARRAY_ACCESS(jobject, (frame[3].o), (frame[5].i)));
	LINE_NUMBER(39);
	sp[0].o = (jobject)((mindustry_entities_units_AIController *) NULL_CHECK((frame[0].o)))->F_unit;
	jint temp0 = (jint)((func_mindustry_gen_Unit_canPass_int_int_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_gen_Unit_canPass_int_int_R_boolean])(ctx, sp[0].o, ((frame[1].i) + ((jint)((arc_math_geom_Point2 *) NULL_CHECK((frame[6].o)))->F_x)), ((frame[2].i) + ((jint)((arc_math_geom_Point2 *) NULL_CHECK((frame[6].o)))->F_y)));
	if (temp0 != 0) goto label_6;
	}
	{
	LINE_NUMBER(40);
	popStackFrame(ctx);
	return (jint(1));
	}
label_6:;
	{
	LINE_NUMBER(38);
	INST_IINC(5, 1);
	goto label_3;
	}
label_4:;
	{
	LINE_NUMBER(43);
	popStackFrame(ctx);
	return (jint(0));
	}

	popStackFrame(ctx);
}

void *vtable_mindustry_ai_types_HugAI[] {
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
	(void *) M_mindustry_ai_types_HugAI_updateMovement,
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
	(void *) M_mindustry_ai_types_HugAI_lambda$updateMovement$0_int_int_R_boolean,
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
	{ "lambda$updateMovement$0", "(II)Z" },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_mindustry_ai_types_HugAI, 0, "()V", 1 },
	{ "updateMovement", (intptr_t) M_mindustry_ai_types_HugAI_updateMovement, VTABLE_mindustry_ai_types_HugAI_updateMovement, "()V", 1 },
	{ "lambda$updateMovement$0", (intptr_t) M_mindustry_ai_types_HugAI_lambda$updateMovement$0_int_int_R_boolean, VTABLE_mindustry_ai_types_HugAI_lambda$updateMovement$0_int_int_R_boolean, "(II)Z", 4098 },
};

Class class_mindustry_ai_types_HugAI{
		.nativeName = (intptr_t) "mindustry/ai/types/HugAI",
		.parentClass = (intptr_t) &class_mindustry_entities_units_AIController,
		.size = sizeof(mindustry_ai_types_HugAI),
		.classVtable = (intptr_t) vtable_mindustry_ai_types_HugAI,
		.staticInitializer = (intptr_t) clinit_mindustry_ai_types_HugAI,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_mindustry_ai_types_HugAI,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 33,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 0,
		.nativeFields = (intptr_t) nullptr,
		.methodCount = 3,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 62,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_mindustry_ai_types_HugAI = registerClass(&class_mindustry_ai_types_HugAI);

}
