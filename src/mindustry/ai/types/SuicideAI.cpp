#include "mindustry/ai/types/SuicideAI.h"
#include "arc/math/geom/Vec2.h"
#include "mindustry/type/Weapon.h"
#include "mindustry/world/Block.h"
#include "mindustry/game/Rules.h"
#include "mindustry/world/blocks/storage/CoreBlock_CoreBuild.h"
#include "arc/math/geom/Point2.h"
#include "mindustry/ai/types/GroundAI.h"
#include "mindustry/world/blocks/liquid/Conduit.h"
#include "mindustry/gen/Unitc.h"
#include "mindustry/ai/types/SuicideAI_invoke_arc_func_Boolf_2.h"
#include "mindustry/ai/types/SuicideAI_invoke_arc_func_Boolf_3.h"
#include "arc/struct/Seq.h"
#include "mindustry/world/Tile.h"
#include "arc/math/geom/Position.h"
#include "arc/func/Boolf.h"
#include "mindustry/world/meta/BlockGroup.h"
#include "arc/math/geom/Geometry.h"
#include "mindustry/gen/Teamc.h"
#include "mindustry/ai/types/SuicideAI_invoke_arc_math_geom_Geometry_Raycaster_1.h"
#include "arc/math/geom/Geometry_Raycaster.h"
#include "mindustry/gen/Unit.h"
#include "mindustry/gen/Weaponsc.h"
#include "mindustry/type/UnitType.h"
#include "mindustry/gen/Building.h"
#include "mindustry/world/blocks/distribution/Conveyor.h"
#include "mindustry/entities/units/UnitController.h"
#include "mindustry/gen/Posc.h"
#include "java/lang/Object.h"
#include "mindustry/entities/units/AIController.h"
#include "mindustry/entities/Units.h"
#include "mindustry/ai/types/SuicideAI.h"
#include "mindustry/gen/Hitboxc.h"
#include "mindustry/game/Team.h"
#include "mindustry/entities/bullet/BulletType.h"
#include "mindustry/core/World.h"
#include "mindustry/Vars.h"
#include "mindustry/core/GameState.h"
#include "mindustry/world/blocks/storage/CoreBlock.h"

extern "C" {

jbool SF_mindustry_ai_types_SuicideAI_blockedByBlock;

void mark_mindustry_ai_types_SuicideAI(jobject object, jint mark, jint depth) {
	if (!object) {
		return;
	}
	if (depth > GC_DEPTH_ALWAYS && (object->gcMark < GC_MARK_START || object->gcMark == mark))
		return;
	if (depth > MAX_GC_MARK_DEPTH) {
		markDeepObject(object);
		return;
	}
	mark_mindustry_ai_types_GroundAI(object, mark, depth);
	if (object->gcMark >= GC_MARK_START)
		object->gcMark = mark;
	auto self = (mindustry_ai_types_SuicideAI *) object;
}

void clinit_mindustry_ai_types_SuicideAI(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	clinit_mindustry_ai_types_GroundAI(ctx);
}

void init_mindustry_ai_types_SuicideAI(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ai/types/SuicideAI:<init>", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_ai_types_SuicideAI(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(17);
	init_mindustry_ai_types_GroundAI(ctx, (frame[0].o));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_ai_types_SuicideAI_updateUnit(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[14];
	auto stack = &frame[7];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ai/types/SuicideAI:updateUnit", 14 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(22);
	sp[0].o = (jobject)((mindustry_entities_units_AIController *) NULL_CHECK((frame[0].o)))->F_target;
	sp[1].o = (jobject)((mindustry_entities_units_AIController *) NULL_CHECK((frame[0].o)))->F_unit;
	sp[1].o = (jobject)((mindustry_gen_Unit *) NULL_CHECK(sp[1].o))->F_team;
	sp[2].o = (jobject)((mindustry_entities_units_AIController *) NULL_CHECK((frame[0].o)))->F_unit;
	jfloat temp0 = (jfloat)((mindustry_gen_Unit *) NULL_CHECK(sp[2].o))->F_x;
	sp[2].o = (jobject)((mindustry_entities_units_AIController *) NULL_CHECK((frame[0].o)))->F_unit;
	jint temp1 = (jint)SM_mindustry_entities_Units_invalidateTarget_mindustry_gen_Posc_mindustry_game_Team_float_float_float_R_boolean(ctx, sp[0].o, sp[1].o, temp0, ((jfloat)((mindustry_gen_Unit *) NULL_CHECK(sp[2].o))->F_y), (jfloat(3,402823e+38f)));
	if (temp1 == 0) goto label_1;
	}
	{
	LINE_NUMBER(23);
	((mindustry_entities_units_AIController *) NULL_CHECK((frame[0].o)))->F_target = (jref) (jobject(nullptr));
	}
label_1:;
	{
	LINE_NUMBER(26);
	jint temp0 = (jint)((func_mindustry_ai_types_SuicideAI_retarget_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_ai_types_SuicideAI_retarget_R_boolean])(ctx, (frame[0].o));
	if (temp0 == 0) goto label_3;
	}
	{
	LINE_NUMBER(27);
	sp[0].o = frame[0].o;
	sp[1].o = frame[0].o;
	sp[2].o = (jobject)((mindustry_entities_units_AIController *) NULL_CHECK((frame[0].o)))->F_unit;
	jfloat temp0 = (jfloat)((mindustry_gen_Unit *) NULL_CHECK(sp[2].o))->F_x;
	sp[2].o = (jobject)((mindustry_entities_units_AIController *) NULL_CHECK((frame[0].o)))->F_unit;
	jfloat temp1 = (jfloat)((mindustry_gen_Unit *) NULL_CHECK(sp[2].o))->F_y;
	sp[2].o = (jobject)((mindustry_entities_units_AIController *) NULL_CHECK((frame[0].o)))->F_unit;
	jfloat temp2 = (jfloat)((func_mindustry_gen_Unit_range_R_float) ((void **) nullCheck(ctx, sp[2].o)->vtable)[VTABLE_mindustry_gen_Unit_range_R_float])(ctx, sp[2].o);
	sp[2].o = (jobject)((mindustry_entities_units_AIController *) NULL_CHECK((frame[0].o)))->F_unit;
	sp[2].o = (jobject)((mindustry_gen_Unit *) NULL_CHECK(sp[2].o))->F_type;
	jint temp3 = (jint)((mindustry_type_UnitType *) NULL_CHECK(sp[2].o))->F_targetAir;
	sp[2].o = (jobject)((mindustry_entities_units_AIController *) NULL_CHECK((frame[0].o)))->F_unit;
	sp[2].o = (jobject)((mindustry_gen_Unit *) NULL_CHECK(sp[2].o))->F_type;
	sp[1].o = (jobject)((func_mindustry_ai_types_SuicideAI_target_float_float_float_boolean_boolean_R_mindustry_gen_Teamc) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_mindustry_ai_types_SuicideAI_target_float_float_float_boolean_boolean_R_mindustry_gen_Teamc])(ctx, sp[1].o, temp0, temp1, temp2, temp3, ((jint)((mindustry_type_UnitType *) NULL_CHECK(sp[2].o))->F_targetGround));
	((mindustry_entities_units_AIController *) NULL_CHECK(sp[0].o))->F_target = (jref) sp[1].o;
	}
label_3:;
	{
	LINE_NUMBER(30);
	sp[0].o = (jobject)((mindustry_entities_units_AIController *) NULL_CHECK((frame[0].o)))->F_unit;
	sp[0].o = (jobject)((func_mindustry_gen_Unit_closestEnemyCore_R_mindustry_world_blocks_storage_CoreBlock$CoreBuild) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_gen_Unit_closestEnemyCore_R_mindustry_world_blocks_storage_CoreBlock$CoreBuild])(ctx, sp[0].o);
	frame[1].o = sp[0].o;
	LINE_NUMBER(32);
	frame[2].i = (jint(0));
	frame[3].i = (jint(0));
	frame[4].i = (jint(0));
	LINE_NUMBER(34);
	sp[0].o = (jobject)((mindustry_entities_units_AIController *) NULL_CHECK((frame[0].o)))->F_target;
	if (sp[0].o != nullptr) goto label_9;
	}
	{
	LINE_NUMBER(35);
	((mindustry_entities_units_AIController *) NULL_CHECK((frame[0].o)))->F_target = (jref) (frame[1].o);
	}
label_9:;
	{
	LINE_NUMBER(38);
	sp[0].o = (jobject)((mindustry_entities_units_AIController *) NULL_CHECK((frame[0].o)))->F_target;
	sp[1].o = (jobject)((mindustry_entities_units_AIController *) NULL_CHECK((frame[0].o)))->F_unit;
	sp[2].o = (jobject)((mindustry_entities_units_AIController *) NULL_CHECK((frame[0].o)))->F_unit;
	jfloat temp0 = (jfloat)((func_mindustry_gen_Unit_range_R_float) ((void **) nullCheck(ctx, sp[2].o)->vtable)[VTABLE_mindustry_gen_Unit_range_R_float])(ctx, sp[2].o);
	jint temp1 = (jint)SM_mindustry_entities_Units_invalidateTarget_mindustry_gen_Teamc_mindustry_gen_Unit_float_R_boolean(ctx, sp[0].o, sp[1].o, temp0);
	if (temp1 != 0) goto label_11;
	}
	{
	sp[0].o = (jobject)((mindustry_entities_units_AIController *) NULL_CHECK((frame[0].o)))->F_unit;
	jint temp0 = (jint)((func_mindustry_gen_Unit_hasWeapons_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_gen_Unit_hasWeapons_R_boolean])(ctx, sp[0].o);
	if (temp0 == 0) goto label_11;
	}
	{
	LINE_NUMBER(39);
	frame[2].i = (jint(1));
	LINE_NUMBER(40);
	sp[0].o = (jobject)((mindustry_entities_units_AIController *) NULL_CHECK((frame[0].o)))->F_unit;
	sp[1].o = (jobject)((mindustry_entities_units_AIController *) NULL_CHECK((frame[0].o)))->F_target;
	sp[2].o = (jobject)((mindustry_entities_units_AIController *) NULL_CHECK((frame[0].o)))->F_unit;
	sp[2].o = (jobject)((mindustry_gen_Unit *) NULL_CHECK(sp[2].o))->F_type;
	sp[2].o = (jobject)((mindustry_type_UnitType *) NULL_CHECK(sp[2].o))->F_weapons;
	sp[2].o = (jobject)((func_arc_struct_Seq_first_R_java_lang_Object) ((void **) nullCheck(ctx, sp[2].o)->vtable)[VTABLE_arc_struct_Seq_first_R_java_lang_Object])(ctx, sp[2].o);
	sp[2].o = (jobject)((mindustry_type_Weapon *) NULL_CHECK((checkCast(ctx, &class_mindustry_type_Weapon, sp[2].o))))->F_bullet;
	jfloat temp0 = (jfloat)((mindustry_entities_bullet_BulletType *) NULL_CHECK(sp[2].o))->F_range;
	LINE_NUMBER(41);
	sp[2].o = (jobject)((mindustry_entities_units_AIController *) NULL_CHECK((frame[0].o)))->F_target;
	frame[6].o = sp[2].o;
	sp[2].f = temp0;
	sp += 3;
	if ((isInstance(ctx, (frame[6].o), &class_mindustry_gen_Building)) == 0) goto label_15;
	}
	{
	frame[5].o = (checkCast(ctx, &class_mindustry_gen_Building, (frame[6].o)));
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[5].o)))->F_block;
	jfloat temp0 = (jfloat((((jint)((mindustry_world_Block *) NULL_CHECK(sp[0].o))->F_size) * (8)))) / (jfloat(2));
	sp[0].f = temp0;
	sp += 1;
	goto label_17;
	}
label_15:;
	{
	sp[0].o = (jobject)((mindustry_entities_units_AIController *) NULL_CHECK((frame[0].o)))->F_target;
	jfloat temp0 = (jfloat)((func_mindustry_gen_Hitboxc_hitSize_R_float) resolveInterfaceMethod(ctx, &class_mindustry_gen_Hitboxc, INDEX_mindustry_gen_Hitboxc_hitSize_R_float, (checkCast(ctx, &class_mindustry_gen_Hitboxc, sp[0].o))))(ctx, (checkCast(ctx, &class_mindustry_gen_Hitboxc, sp[0].o)));
	jfloat temp1 = temp0 / (jfloat(2));
	sp[0].f = temp1;
	sp += 1;
	}
label_17:;
	{
	sp -= 4;
	jfloat temp0 = sp[2].f + sp[3].f;
	LINE_NUMBER(40);
	jint temp1 = (jint)((func_mindustry_gen_Unit_within_arc_math_geom_Position_float_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_gen_Unit_within_arc_math_geom_Position_float_R_boolean])(ctx, sp[0].o, sp[1].o, temp0);
	frame[3].i = temp1;
	LINE_NUMBER(44);
	sp[0].o = (jobject)((mindustry_entities_units_AIController *) NULL_CHECK((frame[0].o)))->F_target;
	frame[6].o = sp[0].o;
	if ((isInstance(ctx, (frame[6].o), &class_mindustry_gen_Building)) == 0) goto label_20;
	}
	{
	frame[5].o = (checkCast(ctx, &class_mindustry_gen_Building, (frame[6].o)));
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[5].o)))->F_block;
	if ((isInstance(ctx, sp[0].o, &class_mindustry_world_blocks_storage_CoreBlock)) != 0) goto label_20;
	}
	{
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[5].o)))->F_block;
	sp[0].o = (jobject)((mindustry_world_Block *) NULL_CHECK(sp[0].o))->F_group;
	clinit_mindustry_world_meta_BlockGroup(ctx);
	sp[1].o = (jobject)SF_mindustry_world_meta_BlockGroup_walls;
	if (sp[0].o == sp[1].o) goto label_11;
	}
	{
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[5].o)))->F_block;
	sp[0].o = (jobject)((mindustry_world_Block *) NULL_CHECK(sp[0].o))->F_group;
	clinit_mindustry_world_meta_BlockGroup(ctx);
	sp[1].o = (jobject)SF_mindustry_world_meta_BlockGroup_liquids;
	if (sp[0].o == sp[1].o) goto label_11;
	}
	{
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[5].o)))->F_block;
	sp[0].o = (jobject)((mindustry_world_Block *) NULL_CHECK(sp[0].o))->F_group;
	clinit_mindustry_world_meta_BlockGroup(ctx);
	sp[1].o = (jobject)SF_mindustry_world_meta_BlockGroup_transportation;
	if (sp[0].o == sp[1].o) goto label_11;
	}
label_20:;
	{
	LINE_NUMBER(49);
	clinit_mindustry_ai_types_SuicideAI(ctx);
	SF_mindustry_ai_types_SuicideAI_blockedByBlock = (jint(0));
	LINE_NUMBER(52);
	sp[0].o = (jobject)((mindustry_entities_units_AIController *) NULL_CHECK((frame[0].o)))->F_unit;
	jint temp0 = (jint)((func_mindustry_gen_Unit_tileX_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_gen_Unit_tileX_R_int])(ctx, sp[0].o);
	sp[0].o = (jobject)((mindustry_entities_units_AIController *) NULL_CHECK((frame[0].o)))->F_unit;
	jint temp1 = (jint)((func_mindustry_gen_Unit_tileY_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_gen_Unit_tileY_R_int])(ctx, sp[0].o);
	sp[0].o = (jobject)((mindustry_entities_units_AIController *) NULL_CHECK((frame[0].o)))->F_target;
	jint temp2 = (jint)((func_mindustry_gen_Posc_tileX_R_int) resolveInterfaceMethod(ctx, &class_mindustry_gen_Posc, INDEX_mindustry_gen_Posc_tileX_R_int, sp[0].o))(ctx, sp[0].o);
	sp[0].o = (jobject)((mindustry_entities_units_AIController *) NULL_CHECK((frame[0].o)))->F_target;
	jint temp3 = (jint)((func_mindustry_gen_Posc_tileY_R_int) resolveInterfaceMethod(ctx, &class_mindustry_gen_Posc, INDEX_mindustry_gen_Posc_tileY_R_int, sp[0].o))(ctx, sp[0].o);
	{ /* InvokeDynamic */
		clinit_mindustry_ai_types_SuicideAI_invoke_arc_math_geom_Geometry$Raycaster_1(ctx);
		auto proxy = (mindustry_ai_types_SuicideAI_invoke_arc_math_geom_Geometry$Raycaster_1 *) gcAlloc(ctx, &class_mindustry_ai_types_SuicideAI_invoke_arc_math_geom_Geometry$Raycaster_1);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[0].o = (jobject) proxy;
	}
	jint temp4 = (jint)SM_mindustry_core_World_raycast_int_int_int_int_arc_math_geom_Geometry$Raycaster_R_boolean(ctx, temp0, temp1, temp2, temp3, sp[0].o);
	frame[6].i = temp4;
	LINE_NUMBER(67);
	if ((clinit_mindustry_ai_types_SuicideAI(ctx), (jint)SF_mindustry_ai_types_SuicideAI_blockedByBlock) == 0) goto label_24;
	}
	{
	LINE_NUMBER(68);
	frame[3].i = (jint(1));
	}
label_24:;
	{
	LINE_NUMBER(71);
	if ((frame[6].i) != 0) goto label_11;
	}
	{
	LINE_NUMBER(72);
	frame[4].i = (jint(1));
	LINE_NUMBER(74);
	sp[0].o = (jobject)((mindustry_entities_units_AIController *) NULL_CHECK((frame[0].o)))->F_unit;
	clinit_mindustry_ai_types_SuicideAI(ctx);
	sp[1].o = (jobject)SF_mindustry_entities_units_AIController_vec;
	sp[2].o = (jobject)((mindustry_entities_units_AIController *) NULL_CHECK((frame[0].o)))->F_target;
	sp[1].o = (jobject)((func_arc_math_geom_Vec2_set_arc_math_geom_Position_R_arc_math_geom_Vec2) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_math_geom_Vec2_set_arc_math_geom_Position_R_arc_math_geom_Vec2])(ctx, sp[1].o, sp[2].o);
	sp[2].o = (jobject)((mindustry_entities_units_AIController *) NULL_CHECK((frame[0].o)))->F_unit;
	sp[1].o = (jobject)((func_arc_math_geom_Vec2_sub_arc_math_geom_Position_R_arc_math_geom_Vec2) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_math_geom_Vec2_sub_arc_math_geom_Position_R_arc_math_geom_Vec2])(ctx, sp[1].o, sp[2].o);
	sp[2].o = (jobject)((mindustry_entities_units_AIController *) NULL_CHECK((frame[0].o)))->F_unit;
	jfloat temp0 = (jfloat)((func_mindustry_gen_Unit_speed_R_float) ((void **) nullCheck(ctx, sp[2].o)->vtable)[VTABLE_mindustry_gen_Unit_speed_R_float])(ctx, sp[2].o);
	sp[1].o = (jobject)((func_arc_math_geom_Vec2_limit_float_R_arc_math_geom_Vec2) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_math_geom_Vec2_limit_float_R_arc_math_geom_Vec2])(ctx, sp[1].o, temp0);
	((func_mindustry_gen_Unit_movePref_arc_math_geom_Vec2) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_gen_Unit_movePref_arc_math_geom_Vec2])(ctx, sp[0].o, sp[1].o);
	}
label_11:;
	{
	LINE_NUMBER(79);
	if ((frame[4].i) != 0) goto label_28;
	}
	{
	LINE_NUMBER(80);
	frame[5].i = (jint(1));
	LINE_NUMBER(83);
	if ((frame[1].o) != nullptr) goto label_31;
	}
	{
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	sp[0].o = (jobject)((mindustry_core_GameState *) NULL_CHECK(sp[0].o))->F_rules;
	if (((jint)((mindustry_game_Rules *) NULL_CHECK(sp[0].o))->F_waves) == 0) goto label_31;
	}
	{
	sp[0].o = (jobject)((mindustry_entities_units_AIController *) NULL_CHECK((frame[0].o)))->F_unit;
	sp[0].o = (jobject)((mindustry_gen_Unit *) NULL_CHECK(sp[0].o))->F_team;
	clinit_mindustry_Vars(ctx);
	sp[1].o = (jobject)SF_mindustry_Vars_state;
	sp[1].o = (jobject)((mindustry_core_GameState *) NULL_CHECK(sp[1].o))->F_rules;
	sp[1].o = (jobject)((mindustry_game_Rules *) NULL_CHECK(sp[1].o))->F_defaultTeam;
	if (sp[0].o != sp[1].o) goto label_31;
	}
	{
	LINE_NUMBER(84);
	sp[0].o = (jobject)((func_mindustry_ai_types_SuicideAI_getClosestSpawner_R_mindustry_world_Tile) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_ai_types_SuicideAI_getClosestSpawner_R_mindustry_world_Tile])(ctx, (frame[0].o));
	frame[6].o = sp[0].o;
	LINE_NUMBER(85);
	if ((frame[6].o) == nullptr) goto label_31;
	}
	{
	sp[0].o = (jobject)((mindustry_entities_units_AIController *) NULL_CHECK((frame[0].o)))->F_unit;
	sp[1].o = frame[6].o;
	clinit_mindustry_Vars(ctx);
	sp[2].o = (jobject)SF_mindustry_Vars_state;
	sp[2].o = (jobject)((mindustry_core_GameState *) NULL_CHECK(sp[2].o))->F_rules;
	jint temp0 = (jint)((func_mindustry_gen_Unit_within_arc_math_geom_Position_float_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_gen_Unit_within_arc_math_geom_Position_float_R_boolean])(ctx, sp[0].o, sp[1].o, (((jfloat)((mindustry_game_Rules *) NULL_CHECK(sp[2].o))->F_dropZoneRadius) + (jfloat(120.0f))));
	if (temp0 == 0) goto label_31;
	}
	{
	LINE_NUMBER(86);
	frame[5].i = (jint(0));
	}
label_31:;
	{
	LINE_NUMBER(90);
	if ((frame[5].i) == 0) goto label_28;
	}
	{
	LINE_NUMBER(91);
	((func_mindustry_ai_types_SuicideAI_pathfind_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_ai_types_SuicideAI_pathfind_int])(ctx, (frame[0].o), (jint(0)));
	}
label_28:;
	{
	LINE_NUMBER(95);
	sp[0].o = (jobject)((mindustry_entities_units_AIController *) NULL_CHECK((frame[0].o)))->F_unit;
	((func_mindustry_gen_Unit_controlWeapons_boolean_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_gen_Unit_controlWeapons_boolean_boolean])(ctx, sp[0].o, (frame[2].i), (frame[3].i));
	LINE_NUMBER(97);
	((func_mindustry_ai_types_SuicideAI_faceTarget) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_ai_types_SuicideAI_faceTarget])(ctx, (frame[0].o));
	LINE_NUMBER(98);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_mindustry_ai_types_SuicideAI_target_float_float_float_boolean_boolean_R_mindustry_gen_Teamc(jcontext ctx, jobject self, jfloat param0, jfloat param1, jfloat param2, jbool param3, jbool param4) {
	NULL_CHECK(self);
	jtype frame[12];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ai/types/SuicideAI:target", 12 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	frame[2].f = param1;
	frame[3].f = param2;
	frame[4].i = param3;
	frame[5].i = param4;
	{
	LINE_NUMBER(102);
	sp[0].o = (jobject)((mindustry_entities_units_AIController *) NULL_CHECK((frame[0].o)))->F_unit;
	sp[0].o = (jobject)((mindustry_gen_Unit *) NULL_CHECK(sp[0].o))->F_team;
	jfloat temp0 = frame[1].f;
	jfloat temp1 = frame[2].f;
	jfloat temp2 = frame[3].f;
	{ /* InvokeDynamic */
		clinit_mindustry_ai_types_SuicideAI_invoke_arc_func_Boolf_2(ctx);
		auto proxy = (mindustry_ai_types_SuicideAI_invoke_arc_func_Boolf_2 *) gcAlloc(ctx, &class_mindustry_ai_types_SuicideAI_invoke_arc_func_Boolf_2);
		proxy->F_field1 = (frame[5].i);
		proxy->F_field0 = (frame[4].i);
		sp[1].o = (jobject) proxy;
	}
	{ /* InvokeDynamic */
		clinit_mindustry_ai_types_SuicideAI_invoke_arc_func_Boolf_3(ctx);
		auto proxy = (mindustry_ai_types_SuicideAI_invoke_arc_func_Boolf_3 *) gcAlloc(ctx, &class_mindustry_ai_types_SuicideAI_invoke_arc_func_Boolf_3);
		proxy->F_field0 = (frame[5].i);
		sp[2].o = (jobject) proxy;
	}
	sp[0].o = (jobject)SM_mindustry_entities_Units_closestTarget_mindustry_game_Team_float_float_float_arc_func_Boolf_arc_func_Boolf_R_mindustry_gen_Teamc(ctx, sp[0].o, temp0, temp1, temp2, sp[1].o, sp[2].o);
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jbool SM_mindustry_ai_types_SuicideAI_lambda$target$1_boolean_mindustry_gen_Building_R_boolean(jcontext ctx, jbool param0, jobject param1) {
	jtype frame[3];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ai/types/SuicideAI:lambda$target$1", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_ai_types_SuicideAI(ctx);
	frame[0].i = param0;
	frame[1].o = param1;
	{
	LINE_NUMBER(102);
	if ((frame[0].i) == 0) goto label_1;
	}
	{
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[1].o)))->F_block;
	if ((isInstance(ctx, sp[0].o, &class_mindustry_world_blocks_distribution_Conveyor)) != 0) goto label_1;
	}
	{
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[1].o)))->F_block;
	if ((isInstance(ctx, sp[0].o, &class_mindustry_world_blocks_liquid_Conduit)) != 0) goto label_1;
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

jbool SM_mindustry_ai_types_SuicideAI_lambda$target$0_boolean_boolean_mindustry_gen_Unit_R_boolean(jcontext ctx, jbool param0, jbool param1, jobject param2) {
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ai/types/SuicideAI:lambda$target$0", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_ai_types_SuicideAI(ctx);
	frame[0].i = param0;
	frame[1].i = param1;
	frame[2].o = param2;
	{
	LINE_NUMBER(102);
	jint temp0 = (jint)((func_mindustry_gen_Unit_checkTarget_boolean_boolean_R_boolean) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_mindustry_gen_Unit_checkTarget_boolean_boolean_R_boolean])(ctx, (frame[2].o), (frame[0].i), (frame[1].i));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jbool M_mindustry_ai_types_SuicideAI_lambda$updateUnit$0_int_int_R_boolean(jcontext ctx, jobject self, jint param0, jint param1) {
	NULL_CHECK(self);
	jtype frame[12];
	auto stack = &frame[8];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ai/types/SuicideAI:lambda$updateUnit$0", 12 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(53);
	clinit_arc_math_geom_Geometry(ctx);
	sp[0].o = (jobject)SF_arc_math_geom_Geometry_d4c;
	frame[3].o = sp[0].o;
	frame[4].i = (((jarray) nullCheck(ctx, (frame[3].o)))->length);
	frame[5].i = (jint(0));
	if ((frame[5].i) >= (frame[4].i)) goto label_4;
	}
	{
	frame[6].o = ((jobject)ARRAY_ACCESS(jobject, (frame[3].o), (frame[5].i)));
	LINE_NUMBER(54);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_world;
	sp[0].o = (jobject)((func_mindustry_core_World_tile_int_int_R_mindustry_world_Tile) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_World_tile_int_int_R_mindustry_world_Tile])(ctx, sp[0].o, ((frame[1].i) + ((jint)((arc_math_geom_Point2 *) NULL_CHECK((frame[6].o)))->F_x)), ((frame[2].i) + ((jint)((arc_math_geom_Point2 *) NULL_CHECK((frame[6].o)))->F_y)));
	frame[7].o = sp[0].o;
	LINE_NUMBER(55);
	if ((frame[7].o) == nullptr) goto label_7;
	}
	{
	sp[0].o = (jobject)((mindustry_world_Tile *) NULL_CHECK((frame[7].o)))->F_build;
	sp[1].o = (jobject)((mindustry_entities_units_AIController *) NULL_CHECK((frame[0].o)))->F_target;
	if (sp[0].o != sp[1].o) goto label_7;
	}
	INST_ICONST(0);
	popStackFrame(ctx);
	INST_IRETURN();
label_7:;
	{
	LINE_NUMBER(56);
	if ((frame[7].o) == nullptr) goto label_8;
	}
	{
	sp[0].o = (jobject)((mindustry_world_Tile *) NULL_CHECK((frame[7].o)))->F_build;
	if (sp[0].o == nullptr) goto label_8;
	}
	{
	sp[0].o = (jobject)((mindustry_world_Tile *) NULL_CHECK((frame[7].o)))->F_build;
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK(sp[0].o))->F_team;
	sp[1].o = (jobject)((mindustry_entities_units_AIController *) NULL_CHECK((frame[0].o)))->F_unit;
	sp[1].o = (jobject)((func_mindustry_gen_Unit_team_R_mindustry_game_Team) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_mindustry_gen_Unit_team_R_mindustry_game_Team])(ctx, sp[1].o);
	if (sp[0].o == sp[1].o) goto label_8;
	}
	{
	LINE_NUMBER(57);
	clinit_mindustry_ai_types_SuicideAI(ctx);
	SF_mindustry_ai_types_SuicideAI_blockedByBlock = (jint(1));
	LINE_NUMBER(58);
	popStackFrame(ctx);
	return (jint(1));
	}
label_8:;
	{
	LINE_NUMBER(60);
	if ((frame[7].o) == nullptr) goto label_11;
	}
	{
	jint temp0 = (jint)((func_mindustry_world_Tile_solid_R_boolean) ((void **) nullCheck(ctx, (frame[7].o))->vtable)[VTABLE_mindustry_world_Tile_solid_R_boolean])(ctx, (frame[7].o));
	if (temp0 == 0) goto label_12;
	}
label_11:;
	INST_ICONST(1);
	goto label_13;
label_12:;
	INST_ICONST(0);
label_13:;
	popStackFrame(ctx);
	INST_IRETURN();
label_4:;
	{
	LINE_NUMBER(63);
	popStackFrame(ctx);
	return (jint(0));
	}

	popStackFrame(ctx);
}

void *vtable_mindustry_ai_types_SuicideAI[] {
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
	(void *) M_mindustry_ai_types_SuicideAI_updateUnit,
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
	(void *) M_mindustry_ai_types_SuicideAI_target_float_float_float_boolean_boolean_R_mindustry_gen_Teamc,
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
	(void *) M_mindustry_ai_types_SuicideAI_lambda$updateUnit$0_int_int_R_boolean,
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
	{ "lambda$updateUnit$0", "(II)Z" },
};

static FieldMetadata fields[] {
	{ "blockedByBlock", &class_boolean, (intptr_t) &SF_mindustry_ai_types_SuicideAI_blockedByBlock, "Z", 8 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_mindustry_ai_types_SuicideAI, 0, "()V", 1 },
	{ "updateUnit", (intptr_t) M_mindustry_ai_types_SuicideAI_updateUnit, VTABLE_mindustry_ai_types_SuicideAI_updateUnit, "()V", 1 },
	{ "target", (intptr_t) M_mindustry_ai_types_SuicideAI_target_float_float_float_boolean_boolean_R_mindustry_gen_Teamc, VTABLE_mindustry_ai_types_SuicideAI_target_float_float_float_boolean_boolean_R_mindustry_gen_Teamc, "(FFFZZ)Lmindustry/gen/Teamc;", 1 },
	{ "lambda$target$1", (intptr_t) SM_mindustry_ai_types_SuicideAI_lambda$target$1_boolean_mindustry_gen_Building_R_boolean, 0, "(ZLmindustry/gen/Building;)Z", 4106 },
	{ "lambda$target$0", (intptr_t) SM_mindustry_ai_types_SuicideAI_lambda$target$0_boolean_boolean_mindustry_gen_Unit_R_boolean, 0, "(ZZLmindustry/gen/Unit;)Z", 4106 },
	{ "lambda$updateUnit$0", (intptr_t) M_mindustry_ai_types_SuicideAI_lambda$updateUnit$0_int_int_R_boolean, VTABLE_mindustry_ai_types_SuicideAI_lambda$updateUnit$0_int_int_R_boolean, "(II)Z", 4098 },
};

Class class_mindustry_ai_types_SuicideAI{
		.nativeName = (intptr_t) "mindustry/ai/types/SuicideAI",
		.parentClass = (intptr_t) &class_mindustry_ai_types_GroundAI,
		.size = sizeof(mindustry_ai_types_SuicideAI),
		.classVtable = (intptr_t) vtable_mindustry_ai_types_SuicideAI,
		.staticInitializer = (intptr_t) clinit_mindustry_ai_types_SuicideAI,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_mindustry_ai_types_SuicideAI,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 33,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 1,
		.nativeFields = (intptr_t) fields,
		.methodCount = 6,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 63,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_mindustry_ai_types_SuicideAI = registerClass(&class_mindustry_ai_types_SuicideAI);

}
