#include "mindustry/gen/LegsUnit.h"
#include "arc/func/Prov.h"
#include "mindustry/gen/Minerc.h"
#include "mindustry/gen/LegsUnit_1.h"
#include "arc/util/Eachable.h"
#include "arc/graphics/Color.h"
#include "arc/graphics/g2d/Draw.h"
#include "mindustry/graphics/InverseKinematics.h"
#include "mindustry/gen/LegsUnit_invoke_mindustry_entities_EntityCollisions_SolidPred_2.h"
#include "mindustry/ai/BlockIndexer.h"
#include "mindustry/gen/LegsUnit_invoke_mindustry_entities_EntityCollisions_SolidPred_3.h"
#include "mindustry/content/Fx.h"
#include "mindustry/gen/Physicsc.h"
#include "arc/util/pooling/Pools.h"
#include "arc/util/Tmp.h"
#include "arc/struct/Seq.h"
#include "mindustry/world/blocks/payloads/BuildPayload.h"
#include "java/lang/reflect/Method.h"
#include "mindustry/entities/units/BuildPlan.h"
#include "mindustry/world/Tile.h"
#include "mindustry/gen/Healthc.h"
#include "mindustry/game/SectorInfo.h"
#include "mindustry/gen/Shieldc.h"
#include "arc/func/Boolf.h"
#include "mindustry/world/blocks/payloads/Payload.h"
#include "arc/math/Mathf.h"
#include "arc/Core.h"
#include "java/util/Iterator.h"
#include "mindustry/gen/Sounds.h"
#include "arc/util/Time.h"
#include "mindustry/gen/Weaponsc.h"
#include "arc/util/Nullable.h"
#include "mindustry/gen/Building.h"
#include "mindustry/entities/units/UnitController.h"
#include "java/lang/Object.h"
#include "mindustry/entities/units/AIController.h"
#include "mindustry/game/EventType_UnitDestroyEvent.h"
#include "mindustry/world/blocks/ConstructBlock.h"
#include "mindustry/gen/Itemsc.h"
#include "arc/struct/ObjectSet.h"
#include "mindustry/io/TypeIO.h"
#include "mindustry/entities/bullet/BulletType.h"
#include "arc/util/io/Writes.h"
#include "mindustry/audio/SoundLoop.h"
#include "mindustry/world/blocks/ExplosionShield.h"
#include "mindustry/game/Rules.h"
#include "mindustry/game/FogControl.h"
#include "mindustry/gen/Legsc.h"
#include "mindustry/gen/Unitc.h"
#include "arc/graphics/g2d/Fill.h"
#include "arc/func/Cons.h"
#include "mindustry/game/EventType_BuildSelectEvent.h"
#include "mindustry/content/StatusEffects.h"
#include "mindustry/gen/LegsUnit_invoke_arc_func_Prov_3.h"
#include "mindustry/gen/Syncc.h"
#include "mindustry/gen/LegsUnit_invoke_arc_func_Prov_2.h"
#include "mindustry/core/Control.h"
#include "mindustry/entities/abilities/EmptyDataAbility.h"
#include "mindustry/entities/units/StatusEntry.h"
#include "mindustry/entities/units/WeaponMount.h"
#include "mindustry/game/Rules_TeamRule.h"
#include "mindustry/world/meta/BlockFlag.h"
#include "mindustry/async/PhysicsProcess.h"
#include "arc/graphics/g2d/TextureRegion.h"
#include "java/lang/annotation/Annotation.h"
#include "mindustry/game/Teams_TeamData.h"
#include "java/lang/IllegalArgumentException.h"
#include "mindustry/ai/types/CommandAI.h"
#include "mindustry/type/Sector.h"
#include "mindustry/type/UnitType.h"
#include "arc/util/io/Reads.h"
#include "mindustry/entities/EntityGroup.h"
#include "mindustry/ai/types/LogicAI.h"
#include "mindustry/game/Teams.h"
#include "mindustry/type/ItemStack.h"
#include "mindustry/ai/Pathfinder_PathCost.h"
#include "mindustry/game/EventType_Trigger.h"
#include "arc/audio/Sound.h"
#include "mindustry/gen/Statusc.h"
#include "mindustry/graphics/Drawf.h"
#include "mindustry/Vars.h"
#include "mindustry/core/World.h"
#include "mindustry/gen/LegsUnit_invoke_arc_func_Boolf_15.h"
#include "mindustry/gen/LegsUnit_invoke_arc_func_Boolf_14.h"
#include "mindustry/gen/LegsUnit_invoke_arc_func_Boolf_17.h"
#include "mindustry/gen/LegsUnit_invoke_arc_func_Boolf_16.h"
#include "java/nio/FloatBuffer.h"
#include "arc/math/Angles.h"
#include "mindustry/gen/LegsUnit_invoke_arc_func_Boolf_19.h"
#include "arc/Events.h"
#include "mindustry/gen/LegsUnit_invoke_arc_func_Boolf_18.h"
#include "arc/math/geom/Point2.h"
#include "arc/math/geom/Rect.h"
#include "mindustry/ctype/UnlockableContent.h"
#include "mindustry/world/blocks/ConstructBlock_ConstructBuild.h"
#include "mindustry/ai/Pathfinder.h"
#include "mindustry/logic/LAccess.h"
#include "mindustry/entities/EntityCollisions.h"
#include "java/lang/reflect/Constructor.h"
#include "mindustry/entities/Effect.h"
#include "mindustry/core/ContentLoader.h"
#include "mindustry/gen/Entityc.h"
#include "mindustry/gen/TimedKillc.h"
#include "arc/math/geom/Position.h"
#include "java/lang/reflect/Field.h"
#include "arc/func/Func.h"
#include "mindustry/gen/Unit.h"
#include "arc/struct/Bits.h"
#include "mindustry/gen/Payloadc.h"
#include "arc/util/Structs.h"
#include "arc/struct/Queue.h"
#include "mindustry/type/Item.h"
#include "mindustry/entities/Damage.h"
#include "mindustry/world/modules/ItemModule.h"
#include "mindustry/gen/Posc.h"
#include "mindustry/graphics/Trail.h"
#include "mindustry/gen/Builderc.h"
#include "mindustry/gen/Bullet.h"
#include "mindustry/entities/Units.h"
#include "mindustry/entities/LegDestroyData.h"
#include "mindustry/gen/Hitboxc.h"
#include "mindustry/entities/Leg.h"
#include "mindustry/ai/WaveSpawner.h"
#include "mindustry/gen/LegsUnit_invoke_arc_func_Boolf_11.h"
#include "mindustry/gen/LegsUnit_invoke_arc_func_Boolf_10.h"
#include "arc/graphics/Camera.h"
#include "mindustry/gen/LegsUnit.h"
#include "mindustry/gen/LegsUnit_invoke_arc_func_Boolf_13.h"
#include "mindustry/gen/LegsUnit_invoke_arc_func_Boolf_12.h"
#include "arc/math/geom/Vec2.h"
#include "mindustry/net/Net.h"
#include "mindustry/world/Block.h"
#include "mindustry/type/Weapon.h"
#include "mindustry/gen/Groups.h"
#include "mindustry/world/blocks/storage/CoreBlock_CoreBuild.h"
#include "arc/graphics/g2d/Lines.h"
#include "mindustry/world/blocks/payloads/UnitPayload.h"
#include "java/lang/Float.h"
#include "mindustry/gen/Rotc.h"
#include "mindustry/gen/Velc.h"
#include "mindustry/world/Tiles.h"
#include "java/lang/String.h"
#include "mindustry/entities/abilities/Ability.h"
#include "mindustry/game/EventType_UnitDrownEvent.h"
#include "mindustry/world/blocks/environment/Floor.h"
#include "mindustry/net/NetConnection.h"
#include "arc/math/geom/Geometry.h"
#include "java/lang/Math.h"
#include "mindustry/gen/Teamc.h"
#include "arc/scene/ui/layout/Table.h"
#include "mindustry/type/StatusEffect.h"
#include "mindustry/entities/EntityCollisions_SolidPred.h"
#include "mindustry/gen/LegsUnit_invoke_arc_func_Cons_1.h"
#include "mindustry/core/NetClient.h"
#include "java/lang/Enum.h"
#include "mindustry/content/Blocks.h"
#include "mindustry/graphics/Pal.h"
#include "mindustry/gen/Player.h"
#include "mindustry/ctype/Content.h"
#include "mindustry/gen/Drawc.h"
#include "mindustry/ctype/ContentType.h"
#include "mindustry/game/Team.h"
#include "java/lang/Class.h"
#include "mindustry/core/GameState.h"
#include "mindustry/gen/Call.h"
#include "mindustry/input/InputHandler.h"
#include "mindustry/world/Build.h"
#include "mindustry/audio/SoundControl.h"

extern "C" {

jfloat SF_mindustry_gen_LegsUnit_hitDuration;
jobject SF_mindustry_gen_LegsUnit_straightVec;
jobject SF_mindustry_gen_LegsUnit_tmp1;
jobject SF_mindustry_gen_LegsUnit_tmp2;
jfloat SF_mindustry_gen_LegsUnit_warpDst;

void mark_mindustry_gen_LegsUnit(jobject object, jint mark, jint depth) {
	if (!object) {
		if (SF_mindustry_gen_LegsUnit_straightVec)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_gen_LegsUnit_straightVec)->clazz)->markFunction)((jobject) SF_mindustry_gen_LegsUnit_straightVec, mark, depth + 1);
		if (SF_mindustry_gen_LegsUnit_tmp1)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_gen_LegsUnit_tmp1)->clazz)->markFunction)((jobject) SF_mindustry_gen_LegsUnit_tmp1, mark, depth + 1);
		if (SF_mindustry_gen_LegsUnit_tmp2)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_gen_LegsUnit_tmp2)->clazz)->markFunction)((jobject) SF_mindustry_gen_LegsUnit_tmp2, mark, depth + 1);
		return;
	}
	if (depth > GC_DEPTH_ALWAYS && (object->gcMark < GC_MARK_START || object->gcMark == mark))
		return;
	if (depth > MAX_GC_MARK_DEPTH) {
		markDeepObject(object);
		return;
	}
	mark_mindustry_gen_Unit(object, mark, depth);
	if (object->gcMark >= GC_MARK_START)
		object->gcMark = mark;
	auto self = (mindustry_gen_LegsUnit *) object;
	if (self->F_applied)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_applied)->clazz)->markFunction)((jobject) self->F_applied, mark, depth + 1);
	if (self->F_controller)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_controller)->clazz)->markFunction)((jobject) self->F_controller, mark, depth + 1);
	if (self->F_curMoveOffset)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_curMoveOffset)->clazz)->markFunction)((jobject) self->F_curMoveOffset, mark, depth + 1);
	if (self->F_lastActive)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_lastActive)->clazz)->markFunction)((jobject) self->F_lastActive, mark, depth + 1);
	if (self->F_lastDeepFloor)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_lastDeepFloor)->clazz)->markFunction)((jobject) self->F_lastDeepFloor, mark, depth + 1);
	if (self->F_legs)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_legs)->clazz)->markFunction)((jobject) self->F_legs, mark, depth + 1);
	if (self->F_statuses)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_statuses)->clazz)->markFunction)((jobject) self->F_statuses, mark, depth + 1);
}

void init_mindustry_gen_LegsUnit(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/LegsUnit:<init>", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_gen_LegsUnit(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(169);
	init_mindustry_gen_Unit(ctx, (frame[0].o));
	LINE_NUMBER(122);
	sp[0].o = frame[0].o;
	clinit_arc_struct_Bits(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_struct_Bits);
	clinit_mindustry_Vars(ctx);
	sp[2].o = (jobject)SF_mindustry_Vars_content;
	clinit_mindustry_ctype_ContentType(ctx);
	sp[3].o = (jobject)SF_mindustry_ctype_ContentType_status;
	sp[2].o = (jobject)((func_mindustry_core_ContentLoader_getBy_mindustry_ctype_ContentType_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[2].o)->vtable)[VTABLE_mindustry_core_ContentLoader_getBy_mindustry_ctype_ContentType_R_arc_struct_Seq])(ctx, sp[2].o, sp[3].o);
	init_arc_struct_Bits_int(ctx, sp[1].o, ((jint)((arc_struct_Seq *) NULL_CHECK(sp[2].o))->F_size));
	((mindustry_gen_LegsUnit *) NULL_CHECK(sp[0].o))->F_applied = (jref) sp[1].o;
	LINE_NUMBER(130);
	sp[0].o = frame[0].o;
	clinit_arc_math_geom_Vec2(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_math_geom_Vec2);
	init_arc_math_geom_Vec2(ctx, sp[1].o);
	((mindustry_gen_LegsUnit *) NULL_CHECK(sp[0].o))->F_curMoveOffset = (jref) sp[1].o;
	LINE_NUMBER(141);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)createArray(ctx, &class_mindustry_entities_Leg, (jint(0)));
	((mindustry_gen_LegsUnit *) NULL_CHECK(sp[0].o))->F_legs = (jref) sp[1].o;
	LINE_NUMBER(145);
	sp[0].o = frame[0].o;
	jfloat temp0 = (jfloat)SM_arc_math_Mathf_random_float_R_float(ctx, (jfloat(10.0f)));
	((mindustry_gen_LegsUnit *) NULL_CHECK(sp[0].o))->F_resupplyTime = temp0;
	LINE_NUMBER(151);
	sp[0].o = frame[0].o;
	clinit_arc_struct_Seq(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_struct_Seq);
	init_arc_struct_Seq_int(ctx, sp[1].o, (jint(4)));
	((mindustry_gen_LegsUnit *) NULL_CHECK(sp[0].o))->F_statuses = (jref) sp[1].o;
	LINE_NUMBER(170);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_mindustry_gen_LegsUnit_buildOn_R_mindustry_gen_Building(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/LegsUnit:buildOn", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(175);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_world;
	sp[0].o = (jobject)((func_mindustry_core_World_buildWorld_float_float_R_mindustry_gen_Building) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_World_buildWorld_float_float_R_mindustry_gen_Building])(ctx, sp[0].o, ((jfloat)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_x), ((jfloat)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_y));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_mindustry_gen_LegsUnit_getPlayer_R_mindustry_gen_Player(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/LegsUnit:getPlayer", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(181);
	jint temp0 = (jint)((func_mindustry_gen_LegsUnit_isPlayer_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_gen_LegsUnit_isPlayer_R_boolean])(ctx, (frame[0].o));
	if (temp0 == 0) goto label_1;
	}
	{
	sp[0].o = (jobject)((mindustry_gen_LegsUnit *) NULL_CHECK((frame[0].o)))->F_controller;
	sp[0].o = checkCast(ctx, &class_mindustry_gen_Player, sp[0].o);
	sp += 1;
	goto label_2;
	}
label_1:;
	INST_ACONST_NULL();
label_2:;
	popStackFrame(ctx);
	INST_ARETURN();

	popStackFrame(ctx);
}

jobject M_mindustry_gen_LegsUnit_getControllerName_R_java_lang_String(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/LegsUnit:getControllerName", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(187);
	jint temp0 = (jint)((func_mindustry_gen_LegsUnit_isPlayer_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_gen_LegsUnit_isPlayer_R_boolean])(ctx, (frame[0].o));
	if (temp0 == 0) goto label_1;
	}
	{
	sp[0].o = (jobject)((func_mindustry_gen_LegsUnit_getPlayer_R_mindustry_gen_Player) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_gen_LegsUnit_getPlayer_R_mindustry_gen_Player])(ctx, (frame[0].o));
	sp[0].o = (jobject)((func_mindustry_gen_Player_coloredName_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_gen_Player_coloredName_R_java_lang_String])(ctx, sp[0].o);
	popStackFrame(ctx);
	return sp[0].o;
	}
label_1:;
	{
	LINE_NUMBER(188);
	sp[0].o = (jobject)((mindustry_gen_LegsUnit *) NULL_CHECK((frame[0].o)))->F_controller;
	frame[2].o = sp[0].o;
	if ((isInstance(ctx, (frame[2].o), &class_mindustry_ai_types_LogicAI)) == 0) goto label_2;
	}
	{
	frame[1].o = (checkCast(ctx, &class_mindustry_ai_types_LogicAI, (frame[2].o)));
	sp[0].o = (jobject)((mindustry_ai_types_LogicAI *) NULL_CHECK((frame[1].o)))->F_controller;
	if (sp[0].o == nullptr) goto label_2;
	}
	{
	sp[0].o = (jobject)((mindustry_ai_types_LogicAI *) NULL_CHECK((frame[1].o)))->F_controller;
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK(sp[0].o))->F_lastAccessed;
	popStackFrame(ctx);
	return sp[0].o;
	}
label_2:;
	{
	LINE_NUMBER(189);
	popStackFrame(ctx);
	return (jobject(nullptr));
	}

	popStackFrame(ctx);
}

jobject M_mindustry_gen_LegsUnit_buildPlan_R_mindustry_entities_units_BuildPlan(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/LegsUnit:buildPlan", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(195);
	sp[0].o = (jobject)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_plans;
	if (((jint)((arc_struct_Queue *) NULL_CHECK(sp[0].o))->F_size) != 0) goto label_1;
	}
	INST_ACONST_NULL();
	goto label_2;
label_1:;
	{
	sp[0].o = (jobject)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_plans;
	sp[0].o = (jobject)((func_arc_struct_Queue_first_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Queue_first_R_java_lang_Object])(ctx, sp[0].o);
	sp[0].o = checkCast(ctx, &class_mindustry_entities_units_BuildPlan, sp[0].o);
	sp += 1;
	}
label_2:;
	popStackFrame(ctx);
	INST_ARETURN();

	popStackFrame(ctx);
}

jobject M_mindustry_gen_LegsUnit_getMineResult_mindustry_world_Tile_R_mindustry_type_Item(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/LegsUnit:getMineResult", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(201);
	if ((frame[1].o) != nullptr) goto label_1;
	}
	INST_ACONST_NULL();
	popStackFrame(ctx);
	INST_ARETURN();
label_1:;
	{
	LINE_NUMBER(203);
	sp[0].o = (jobject)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_type;
	if (((jint)((mindustry_type_UnitType *) NULL_CHECK(sp[0].o))->F_mineFloor) == 0) goto label_2;
	}
	{
	sp[0].o = (jobject)((func_mindustry_world_Tile_block_R_mindustry_world_Block) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_world_Tile_block_R_mindustry_world_Block])(ctx, (frame[1].o));
	clinit_mindustry_content_Blocks(ctx);
	sp[1].o = (jobject)SF_mindustry_content_Blocks_air;
	if (sp[0].o != sp[1].o) goto label_2;
	}
	{
	LINE_NUMBER(204);
	sp[0].o = (jobject)((func_mindustry_world_Tile_drop_R_mindustry_type_Item) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_world_Tile_drop_R_mindustry_type_Item])(ctx, (frame[1].o));
	frame[2].o = sp[0].o;
	goto label_5;
	}
label_2:;
	{
	LINE_NUMBER(205);
	sp[0].o = (jobject)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_type;
	if (((jint)((mindustry_type_UnitType *) NULL_CHECK(sp[0].o))->F_mineWalls) == 0) goto label_6;
	}
	{
	LINE_NUMBER(206);
	sp[0].o = (jobject)((func_mindustry_world_Tile_wallDrop_R_mindustry_type_Item) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_world_Tile_wallDrop_R_mindustry_type_Item])(ctx, (frame[1].o));
	frame[2].o = sp[0].o;
	goto label_5;
	}
label_6:;
	{
	LINE_NUMBER(208);
	popStackFrame(ctx);
	return (jobject(nullptr));
	}
label_5:;
	{
	LINE_NUMBER(210);
	jint temp0 = (jint)((func_mindustry_gen_LegsUnit_canMine_mindustry_type_Item_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_gen_LegsUnit_canMine_mindustry_type_Item_R_boolean])(ctx, (frame[0].o), (frame[2].o));
	if (temp0 == 0) goto label_9;
	}
	INST_ALOAD(2);
	goto label_10;
label_9:;
	INST_ACONST_NULL();
label_10:;
	popStackFrame(ctx);
	INST_ARETURN();

	popStackFrame(ctx);
}

jobject M_mindustry_gen_LegsUnit_tileOn_R_mindustry_world_Tile(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/LegsUnit:tileOn", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(216);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_world;
	sp[0].o = (jobject)((func_mindustry_core_World_tileWorld_float_float_R_mindustry_world_Tile) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_World_tileWorld_float_float_R_mindustry_world_Tile])(ctx, sp[0].o, ((jfloat)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_x), ((jfloat)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_y));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_mindustry_gen_LegsUnit_closestCore_R_mindustry_world_blocks_storage_CoreBlock$CoreBuild(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/LegsUnit:closestCore", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(222);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	sp[0].o = (jobject)((mindustry_core_GameState *) NULL_CHECK(sp[0].o))->F_teams;
	jfloat temp0 = (jfloat)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_x;
	jfloat temp1 = (jfloat)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_y;
	sp[1].o = (jobject)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_team;
	sp[0].o = (jobject)((func_mindustry_game_Teams_closestCore_float_float_mindustry_game_Team_R_mindustry_world_blocks_storage_CoreBlock$CoreBuild) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_game_Teams_closestCore_float_float_mindustry_game_Team_R_mindustry_world_blocks_storage_CoreBlock$CoreBuild])(ctx, sp[0].o, temp0, temp1, sp[1].o);
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_mindustry_gen_LegsUnit_closestEnemyCore_R_mindustry_world_blocks_storage_CoreBlock$CoreBuild(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/LegsUnit:closestEnemyCore", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(228);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	sp[0].o = (jobject)((mindustry_core_GameState *) NULL_CHECK(sp[0].o))->F_teams;
	jfloat temp0 = (jfloat)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_x;
	jfloat temp1 = (jfloat)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_y;
	sp[1].o = (jobject)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_team;
	sp[0].o = (jobject)((func_mindustry_game_Teams_closestEnemyCore_float_float_mindustry_game_Team_R_mindustry_world_blocks_storage_CoreBlock$CoreBuild) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_game_Teams_closestEnemyCore_float_float_mindustry_game_Team_R_mindustry_world_blocks_storage_CoreBlock$CoreBuild])(ctx, sp[0].o, temp0, temp1, sp[1].o);
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_mindustry_gen_LegsUnit_core_R_mindustry_world_blocks_storage_CoreBlock$CoreBuild(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/LegsUnit:core", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(234);
	sp[0].o = (jobject)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_team;
	sp[0].o = (jobject)((func_mindustry_game_Team_core_R_mindustry_world_blocks_storage_CoreBlock$CoreBuild) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_game_Team_core_R_mindustry_world_blocks_storage_CoreBlock$CoreBuild])(ctx, sp[0].o);
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_mindustry_gen_LegsUnit_curMoveOffset_R_arc_math_geom_Vec2(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/LegsUnit:curMoveOffset", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(239);
	sp[0].o = (jobject)((mindustry_gen_LegsUnit *) NULL_CHECK((frame[0].o)))->F_curMoveOffset;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jbool M_mindustry_gen_LegsUnit_isRotate_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/LegsUnit:isRotate", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(244);
	popStackFrame(ctx);
	return ((jint)((mindustry_gen_LegsUnit *) NULL_CHECK((frame[0].o)))->F_isRotate);
	}

	popStackFrame(ctx);
}

jfloat M_mindustry_gen_LegsUnit_baseRotation_R_float(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/LegsUnit:baseRotation", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(249);
	popStackFrame(ctx);
	return ((jfloat)((mindustry_gen_LegsUnit *) NULL_CHECK((frame[0].o)))->F_baseRotation);
	}

	popStackFrame(ctx);
}

jfloat M_mindustry_gen_LegsUnit_moveSpace_R_float(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/LegsUnit:moveSpace", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(254);
	popStackFrame(ctx);
	return ((jfloat)((mindustry_gen_LegsUnit *) NULL_CHECK((frame[0].o)))->F_moveSpace);
	}

	popStackFrame(ctx);
}

jfloat M_mindustry_gen_LegsUnit_totalLength_R_float(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/LegsUnit:totalLength", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(259);
	popStackFrame(ctx);
	return ((jfloat)((mindustry_gen_LegsUnit *) NULL_CHECK((frame[0].o)))->F_totalLength);
	}

	popStackFrame(ctx);
}

jint M_mindustry_gen_LegsUnit_classId_R_int(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/LegsUnit:classId", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(264);
	popStackFrame(ctx);
	return (24);
	}

	popStackFrame(ctx);
}

jobject M_mindustry_gen_LegsUnit_legs_R_Array1_mindustry_entities_Leg(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/LegsUnit:legs", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(269);
	sp[0].o = (jobject)((mindustry_gen_LegsUnit *) NULL_CHECK((frame[0].o)))->F_legs;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_mindustry_gen_LegsUnit_lastDeepFloor_R_mindustry_world_blocks_environment_Floor(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/LegsUnit:lastDeepFloor", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(274);
	sp[0].o = (jobject)((mindustry_gen_LegsUnit *) NULL_CHECK((frame[0].o)))->F_lastDeepFloor;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void M_mindustry_gen_LegsUnit_baseRotation_float(jcontext ctx, jobject self, jfloat param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/LegsUnit:baseRotation", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	{
	LINE_NUMBER(279);
	((mindustry_gen_LegsUnit *) NULL_CHECK((frame[0].o)))->F_baseRotation = (frame[1].f);
	LINE_NUMBER(280);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_gen_LegsUnit_curMoveOffset_arc_math_geom_Vec2(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/LegsUnit:curMoveOffset", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(284);
	((mindustry_gen_LegsUnit *) NULL_CHECK((frame[0].o)))->F_curMoveOffset = (jref) (frame[1].o);
	LINE_NUMBER(285);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_gen_LegsUnit_lastDeepFloor_mindustry_world_blocks_environment_Floor(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/LegsUnit:lastDeepFloor", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(289);
	((mindustry_gen_LegsUnit *) NULL_CHECK((frame[0].o)))->F_lastDeepFloor = (jref) (frame[1].o);
	LINE_NUMBER(290);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_gen_LegsUnit_legs_Array1_mindustry_entities_Leg(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/LegsUnit:legs", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(294);
	((mindustry_gen_LegsUnit *) NULL_CHECK((frame[0].o)))->F_legs = (jref) (frame[1].o);
	LINE_NUMBER(295);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_gen_LegsUnit_moveSpace_float(jcontext ctx, jobject self, jfloat param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/LegsUnit:moveSpace", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	{
	LINE_NUMBER(299);
	((mindustry_gen_LegsUnit *) NULL_CHECK((frame[0].o)))->F_moveSpace = (frame[1].f);
	LINE_NUMBER(300);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_gen_LegsUnit_totalLength_float(jcontext ctx, jobject self, jfloat param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/LegsUnit:totalLength", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	{
	LINE_NUMBER(304);
	((mindustry_gen_LegsUnit *) NULL_CHECK((frame[0].o)))->F_totalLength = (frame[1].f);
	LINE_NUMBER(305);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_gen_LegsUnit_read_arc_util_io_Reads(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[10];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/LegsUnit:read", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(309);
	jint temp0 = (jint)((func_arc_util_io_Reads_s_R_short) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_util_io_Reads_s_R_short])(ctx, (frame[1].o));
	frame[2].i = temp0;
	LINE_NUMBER(310);
	if ((frame[2].i) != 0) goto label_2;
	}
	{
	LINE_NUMBER(311);
	jfloat temp0 = (jfloat)((func_arc_util_io_Reads_f_R_float) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_util_io_Reads_f_R_float])(ctx, (frame[1].o));
	LINE_NUMBER(312);
	jfloat temp1 = (jfloat)((func_arc_util_io_Reads_f_R_float) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_util_io_Reads_f_R_float])(ctx, (frame[1].o));
	LINE_NUMBER(313);
	sp[0].o = frame[0].o;
	sp[1].o = frame[1].o;
	sp[2].o = (jobject)((mindustry_gen_LegsUnit *) NULL_CHECK((frame[0].o)))->F_controller;
	sp[1].o = (jobject)SM_mindustry_io_TypeIO_readController_arc_util_io_Reads_mindustry_entities_units_UnitController_R_mindustry_entities_units_UnitController(ctx, sp[1].o, sp[2].o);
	((mindustry_gen_LegsUnit *) NULL_CHECK(sp[0].o))->F_controller = (jref) sp[1].o;
	LINE_NUMBER(314);
	jint temp2 = (jint)((func_arc_util_io_Reads_bool_R_boolean) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_util_io_Reads_bool_R_boolean])(ctx, (frame[1].o));
	LINE_NUMBER(315);
	sp[0].o = frame[0].o;
	jfloat temp3 = (jfloat)((func_arc_util_io_Reads_f_R_float) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_util_io_Reads_f_R_float])(ctx, (frame[1].o));
	((mindustry_gen_Unit *) NULL_CHECK(sp[0].o))->F_elevation = temp3;
	LINE_NUMBER(316);
	sp[0].o = frame[0].o;
	jfloat temp4 = (jfloat)((func_arc_util_io_Reads_f_R_float) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_util_io_Reads_f_R_float])(ctx, (frame[1].o));
	((mindustry_gen_Unit *) NULL_CHECK(sp[0].o))->F_health = temp4;
	LINE_NUMBER(317);
	sp[0].o = frame[0].o;
	jint temp5 = (jint)((func_arc_util_io_Reads_bool_R_boolean) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_util_io_Reads_bool_R_boolean])(ctx, (frame[1].o));
	((mindustry_gen_Unit *) NULL_CHECK(sp[0].o))->F_isShooting = temp5;
	LINE_NUMBER(318);
	sp[0].o = frame[0].o;
	sp[1].o = frame[1].o;
	sp[2].o = (jobject)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_mounts;
	sp[1].o = (jobject)SM_mindustry_io_TypeIO_readMounts_arc_util_io_Reads_Array1_mindustry_entities_units_WeaponMount_R_Array1_mindustry_entities_units_WeaponMount(ctx, sp[1].o, sp[2].o);
	((mindustry_gen_Unit *) NULL_CHECK(sp[0].o))->F_mounts = (jref) sp[1].o;
	LINE_NUMBER(319);
	sp[0].o = frame[0].o;
	jfloat temp6 = (jfloat)((func_arc_util_io_Reads_f_R_float) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_util_io_Reads_f_R_float])(ctx, (frame[1].o));
	((mindustry_gen_Unit *) NULL_CHECK(sp[0].o))->F_rotation = temp6;
	LINE_NUMBER(320);
	sp[0].o = frame[0].o;
	jfloat temp7 = (jfloat)((func_arc_util_io_Reads_f_R_float) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_util_io_Reads_f_R_float])(ctx, (frame[1].o));
	((mindustry_gen_Unit *) NULL_CHECK(sp[0].o))->F_shield = temp7;
	LINE_NUMBER(321);
	sp[0].o = frame[0].o;
	jint temp8 = (jint)((func_arc_util_io_Reads_bool_R_boolean) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_util_io_Reads_bool_R_boolean])(ctx, (frame[1].o));
	((mindustry_gen_Unit *) NULL_CHECK(sp[0].o))->F_spawnedByCore = temp8;
	LINE_NUMBER(322);
	sp[0].o = frame[0].o;
	sp[1].o = frame[1].o;
	sp[2].o = (jobject)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_stack;
	sp[1].o = (jobject)SM_mindustry_io_TypeIO_readItems_arc_util_io_Reads_mindustry_type_ItemStack_R_mindustry_type_ItemStack(ctx, sp[1].o, sp[2].o);
	((mindustry_gen_Unit *) NULL_CHECK(sp[0].o))->F_stack = (jref) sp[1].o;
	LINE_NUMBER(323);
	jint temp9 = (jint)((func_arc_util_io_Reads_i_R_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_util_io_Reads_i_R_int])(ctx, (frame[1].o));
	frame[3].i = temp9;
	LINE_NUMBER(324);
	sp[0].o = (jobject)((mindustry_gen_LegsUnit *) NULL_CHECK((frame[0].o)))->F_statuses;
	sp[0].o = (jobject)((func_arc_struct_Seq_clear_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_clear_R_arc_struct_Seq])(ctx, sp[0].o);
	LINE_NUMBER(325);
	frame[4].i = (jint(0));
	}
label_18:;
	{
	if ((frame[4].i) >= (frame[3].i)) goto label_19;
	}
	{
	LINE_NUMBER(326);
	sp[0].o = (jobject)SM_mindustry_io_TypeIO_readStatus_arc_util_io_Reads_R_mindustry_entities_units_StatusEntry(ctx, (frame[1].o));
	frame[5].o = sp[0].o;
	LINE_NUMBER(327);
	if ((frame[5].o) == nullptr) goto label_22;
	}
	{
	sp[0].o = (jobject)((mindustry_gen_LegsUnit *) NULL_CHECK((frame[0].o)))->F_statuses;
	sp[0].o = (jobject)((func_arc_struct_Seq_add_java_lang_Object_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_add_java_lang_Object_R_arc_struct_Seq])(ctx, sp[0].o, (frame[5].o));
	}
label_22:;
	{
	LINE_NUMBER(325);
	INST_IINC(4, 1);
	goto label_18;
	}
label_19:;
	{
	LINE_NUMBER(329);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)SM_mindustry_io_TypeIO_readTeam_arc_util_io_Reads_R_mindustry_game_Team(ctx, (frame[1].o));
	((mindustry_gen_Unit *) NULL_CHECK(sp[0].o))->F_team = (jref) sp[1].o;
	LINE_NUMBER(330);
	sp[0].o = frame[0].o;
	clinit_mindustry_Vars(ctx);
	sp[1].o = (jobject)SF_mindustry_Vars_content;
	clinit_mindustry_ctype_ContentType(ctx);
	sp[2].o = (jobject)SF_mindustry_ctype_ContentType_unit;
	jint temp0 = (jint)((func_arc_util_io_Reads_s_R_short) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_util_io_Reads_s_R_short])(ctx, (frame[1].o));
	sp[1].o = (jobject)((func_mindustry_core_ContentLoader_getByID_mindustry_ctype_ContentType_int_R_mindustry_ctype_Content) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_mindustry_core_ContentLoader_getByID_mindustry_ctype_ContentType_int_R_mindustry_ctype_Content])(ctx, sp[1].o, sp[2].o, temp0);
	((mindustry_gen_Unit *) NULL_CHECK(sp[0].o))->F_type = (jref) (checkCast(ctx, &class_mindustry_type_UnitType, sp[1].o));
	LINE_NUMBER(331);
	sp[0].o = frame[0].o;
	jfloat temp1 = (jfloat)((func_arc_util_io_Reads_f_R_float) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_util_io_Reads_f_R_float])(ctx, (frame[1].o));
	((mindustry_gen_Unit *) NULL_CHECK(sp[0].o))->F_x = temp1;
	LINE_NUMBER(332);
	sp[0].o = frame[0].o;
	jfloat temp2 = (jfloat)((func_arc_util_io_Reads_f_R_float) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_util_io_Reads_f_R_float])(ctx, (frame[1].o));
	((mindustry_gen_Unit *) NULL_CHECK(sp[0].o))->F_y = temp2;
	LINE_NUMBER(333);
	goto label_27;
	}
label_2:;
	{
	if ((frame[2].i) != (jint(1))) goto label_28;
	}
	{
	LINE_NUMBER(334);
	jfloat temp0 = (jfloat)((func_arc_util_io_Reads_f_R_float) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_util_io_Reads_f_R_float])(ctx, (frame[1].o));
	LINE_NUMBER(335);
	jfloat temp1 = (jfloat)((func_arc_util_io_Reads_f_R_float) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_util_io_Reads_f_R_float])(ctx, (frame[1].o));
	LINE_NUMBER(336);
	sp[0].o = frame[0].o;
	sp[1].o = frame[1].o;
	sp[2].o = (jobject)((mindustry_gen_LegsUnit *) NULL_CHECK((frame[0].o)))->F_controller;
	sp[1].o = (jobject)SM_mindustry_io_TypeIO_readController_arc_util_io_Reads_mindustry_entities_units_UnitController_R_mindustry_entities_units_UnitController(ctx, sp[1].o, sp[2].o);
	((mindustry_gen_LegsUnit *) NULL_CHECK(sp[0].o))->F_controller = (jref) sp[1].o;
	LINE_NUMBER(337);
	sp[0].o = frame[0].o;
	jfloat temp2 = (jfloat)((func_arc_util_io_Reads_f_R_float) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_util_io_Reads_f_R_float])(ctx, (frame[1].o));
	((mindustry_gen_Unit *) NULL_CHECK(sp[0].o))->F_elevation = temp2;
	LINE_NUMBER(338);
	sp[0].o = frame[0].o;
	jfloat temp3 = (jfloat)((func_arc_util_io_Reads_f_R_float) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_util_io_Reads_f_R_float])(ctx, (frame[1].o));
	((mindustry_gen_Unit *) NULL_CHECK(sp[0].o))->F_health = temp3;
	LINE_NUMBER(339);
	sp[0].o = frame[0].o;
	jint temp4 = (jint)((func_arc_util_io_Reads_bool_R_boolean) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_util_io_Reads_bool_R_boolean])(ctx, (frame[1].o));
	((mindustry_gen_Unit *) NULL_CHECK(sp[0].o))->F_isShooting = temp4;
	LINE_NUMBER(340);
	sp[0].o = frame[0].o;
	sp[1].o = frame[1].o;
	sp[2].o = (jobject)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_mounts;
	sp[1].o = (jobject)SM_mindustry_io_TypeIO_readMounts_arc_util_io_Reads_Array1_mindustry_entities_units_WeaponMount_R_Array1_mindustry_entities_units_WeaponMount(ctx, sp[1].o, sp[2].o);
	((mindustry_gen_Unit *) NULL_CHECK(sp[0].o))->F_mounts = (jref) sp[1].o;
	LINE_NUMBER(341);
	sp[0].o = frame[0].o;
	jfloat temp5 = (jfloat)((func_arc_util_io_Reads_f_R_float) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_util_io_Reads_f_R_float])(ctx, (frame[1].o));
	((mindustry_gen_Unit *) NULL_CHECK(sp[0].o))->F_rotation = temp5;
	LINE_NUMBER(342);
	sp[0].o = frame[0].o;
	jfloat temp6 = (jfloat)((func_arc_util_io_Reads_f_R_float) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_util_io_Reads_f_R_float])(ctx, (frame[1].o));
	((mindustry_gen_Unit *) NULL_CHECK(sp[0].o))->F_shield = temp6;
	LINE_NUMBER(343);
	sp[0].o = frame[0].o;
	jint temp7 = (jint)((func_arc_util_io_Reads_bool_R_boolean) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_util_io_Reads_bool_R_boolean])(ctx, (frame[1].o));
	((mindustry_gen_Unit *) NULL_CHECK(sp[0].o))->F_spawnedByCore = temp7;
	LINE_NUMBER(344);
	sp[0].o = frame[0].o;
	sp[1].o = frame[1].o;
	sp[2].o = (jobject)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_stack;
	sp[1].o = (jobject)SM_mindustry_io_TypeIO_readItems_arc_util_io_Reads_mindustry_type_ItemStack_R_mindustry_type_ItemStack(ctx, sp[1].o, sp[2].o);
	((mindustry_gen_Unit *) NULL_CHECK(sp[0].o))->F_stack = (jref) sp[1].o;
	LINE_NUMBER(345);
	jint temp8 = (jint)((func_arc_util_io_Reads_i_R_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_util_io_Reads_i_R_int])(ctx, (frame[1].o));
	frame[3].i = temp8;
	LINE_NUMBER(346);
	sp[0].o = (jobject)((mindustry_gen_LegsUnit *) NULL_CHECK((frame[0].o)))->F_statuses;
	sp[0].o = (jobject)((func_arc_struct_Seq_clear_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_clear_R_arc_struct_Seq])(ctx, sp[0].o);
	LINE_NUMBER(347);
	frame[4].i = (jint(0));
	}
label_43:;
	{
	if ((frame[4].i) >= (frame[3].i)) goto label_44;
	}
	{
	LINE_NUMBER(348);
	sp[0].o = (jobject)SM_mindustry_io_TypeIO_readStatus_arc_util_io_Reads_R_mindustry_entities_units_StatusEntry(ctx, (frame[1].o));
	frame[5].o = sp[0].o;
	LINE_NUMBER(349);
	if ((frame[5].o) == nullptr) goto label_47;
	}
	{
	sp[0].o = (jobject)((mindustry_gen_LegsUnit *) NULL_CHECK((frame[0].o)))->F_statuses;
	sp[0].o = (jobject)((func_arc_struct_Seq_add_java_lang_Object_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_add_java_lang_Object_R_arc_struct_Seq])(ctx, sp[0].o, (frame[5].o));
	}
label_47:;
	{
	LINE_NUMBER(347);
	INST_IINC(4, 1);
	goto label_43;
	}
label_44:;
	{
	LINE_NUMBER(351);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)SM_mindustry_io_TypeIO_readTeam_arc_util_io_Reads_R_mindustry_game_Team(ctx, (frame[1].o));
	((mindustry_gen_Unit *) NULL_CHECK(sp[0].o))->F_team = (jref) sp[1].o;
	LINE_NUMBER(352);
	sp[0].o = frame[0].o;
	clinit_mindustry_Vars(ctx);
	sp[1].o = (jobject)SF_mindustry_Vars_content;
	clinit_mindustry_ctype_ContentType(ctx);
	sp[2].o = (jobject)SF_mindustry_ctype_ContentType_unit;
	jint temp0 = (jint)((func_arc_util_io_Reads_s_R_short) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_util_io_Reads_s_R_short])(ctx, (frame[1].o));
	sp[1].o = (jobject)((func_mindustry_core_ContentLoader_getByID_mindustry_ctype_ContentType_int_R_mindustry_ctype_Content) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_mindustry_core_ContentLoader_getByID_mindustry_ctype_ContentType_int_R_mindustry_ctype_Content])(ctx, sp[1].o, sp[2].o, temp0);
	((mindustry_gen_Unit *) NULL_CHECK(sp[0].o))->F_type = (jref) (checkCast(ctx, &class_mindustry_type_UnitType, sp[1].o));
	LINE_NUMBER(353);
	sp[0].o = frame[0].o;
	jfloat temp1 = (jfloat)((func_arc_util_io_Reads_f_R_float) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_util_io_Reads_f_R_float])(ctx, (frame[1].o));
	((mindustry_gen_Unit *) NULL_CHECK(sp[0].o))->F_x = temp1;
	LINE_NUMBER(354);
	sp[0].o = frame[0].o;
	jfloat temp2 = (jfloat)((func_arc_util_io_Reads_f_R_float) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_util_io_Reads_f_R_float])(ctx, (frame[1].o));
	((mindustry_gen_Unit *) NULL_CHECK(sp[0].o))->F_y = temp2;
	LINE_NUMBER(355);
	goto label_27;
	}
label_28:;
	{
	if ((frame[2].i) != (jint(2))) goto label_52;
	}
	{
	LINE_NUMBER(356);
	jfloat temp0 = (jfloat)((func_arc_util_io_Reads_f_R_float) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_util_io_Reads_f_R_float])(ctx, (frame[1].o));
	LINE_NUMBER(357);
	jfloat temp1 = (jfloat)((func_arc_util_io_Reads_f_R_float) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_util_io_Reads_f_R_float])(ctx, (frame[1].o));
	LINE_NUMBER(358);
	sp[0].o = frame[0].o;
	sp[1].o = frame[1].o;
	sp[2].o = (jobject)((mindustry_gen_LegsUnit *) NULL_CHECK((frame[0].o)))->F_controller;
	sp[1].o = (jobject)SM_mindustry_io_TypeIO_readController_arc_util_io_Reads_mindustry_entities_units_UnitController_R_mindustry_entities_units_UnitController(ctx, sp[1].o, sp[2].o);
	((mindustry_gen_LegsUnit *) NULL_CHECK(sp[0].o))->F_controller = (jref) sp[1].o;
	LINE_NUMBER(359);
	sp[0].o = frame[0].o;
	jfloat temp2 = (jfloat)((func_arc_util_io_Reads_f_R_float) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_util_io_Reads_f_R_float])(ctx, (frame[1].o));
	((mindustry_gen_Unit *) NULL_CHECK(sp[0].o))->F_elevation = temp2;
	LINE_NUMBER(360);
	sp[0].o = frame[0].o;
	jdouble temp3 = (jdouble)((func_arc_util_io_Reads_d_R_double) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_util_io_Reads_d_R_double])(ctx, (frame[1].o));
	((mindustry_gen_Unit *) NULL_CHECK(sp[0].o))->F_flag = temp3;
	LINE_NUMBER(361);
	sp[0].o = frame[0].o;
	jfloat temp4 = (jfloat)((func_arc_util_io_Reads_f_R_float) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_util_io_Reads_f_R_float])(ctx, (frame[1].o));
	((mindustry_gen_Unit *) NULL_CHECK(sp[0].o))->F_health = temp4;
	LINE_NUMBER(362);
	sp[0].o = frame[0].o;
	jint temp5 = (jint)((func_arc_util_io_Reads_bool_R_boolean) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_util_io_Reads_bool_R_boolean])(ctx, (frame[1].o));
	((mindustry_gen_Unit *) NULL_CHECK(sp[0].o))->F_isShooting = temp5;
	LINE_NUMBER(363);
	sp[0].o = frame[0].o;
	sp[1].o = frame[1].o;
	sp[2].o = (jobject)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_mounts;
	sp[1].o = (jobject)SM_mindustry_io_TypeIO_readMounts_arc_util_io_Reads_Array1_mindustry_entities_units_WeaponMount_R_Array1_mindustry_entities_units_WeaponMount(ctx, sp[1].o, sp[2].o);
	((mindustry_gen_Unit *) NULL_CHECK(sp[0].o))->F_mounts = (jref) sp[1].o;
	LINE_NUMBER(364);
	sp[0].o = frame[0].o;
	jfloat temp6 = (jfloat)((func_arc_util_io_Reads_f_R_float) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_util_io_Reads_f_R_float])(ctx, (frame[1].o));
	((mindustry_gen_Unit *) NULL_CHECK(sp[0].o))->F_rotation = temp6;
	LINE_NUMBER(365);
	sp[0].o = frame[0].o;
	jfloat temp7 = (jfloat)((func_arc_util_io_Reads_f_R_float) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_util_io_Reads_f_R_float])(ctx, (frame[1].o));
	((mindustry_gen_Unit *) NULL_CHECK(sp[0].o))->F_shield = temp7;
	LINE_NUMBER(366);
	sp[0].o = frame[0].o;
	jint temp8 = (jint)((func_arc_util_io_Reads_bool_R_boolean) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_util_io_Reads_bool_R_boolean])(ctx, (frame[1].o));
	((mindustry_gen_Unit *) NULL_CHECK(sp[0].o))->F_spawnedByCore = temp8;
	LINE_NUMBER(367);
	sp[0].o = frame[0].o;
	sp[1].o = frame[1].o;
	sp[2].o = (jobject)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_stack;
	sp[1].o = (jobject)SM_mindustry_io_TypeIO_readItems_arc_util_io_Reads_mindustry_type_ItemStack_R_mindustry_type_ItemStack(ctx, sp[1].o, sp[2].o);
	((mindustry_gen_Unit *) NULL_CHECK(sp[0].o))->F_stack = (jref) sp[1].o;
	LINE_NUMBER(368);
	jint temp9 = (jint)((func_arc_util_io_Reads_i_R_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_util_io_Reads_i_R_int])(ctx, (frame[1].o));
	frame[3].i = temp9;
	LINE_NUMBER(369);
	sp[0].o = (jobject)((mindustry_gen_LegsUnit *) NULL_CHECK((frame[0].o)))->F_statuses;
	sp[0].o = (jobject)((func_arc_struct_Seq_clear_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_clear_R_arc_struct_Seq])(ctx, sp[0].o);
	LINE_NUMBER(370);
	frame[4].i = (jint(0));
	}
label_68:;
	{
	if ((frame[4].i) >= (frame[3].i)) goto label_69;
	}
	{
	LINE_NUMBER(371);
	sp[0].o = (jobject)SM_mindustry_io_TypeIO_readStatus_arc_util_io_Reads_R_mindustry_entities_units_StatusEntry(ctx, (frame[1].o));
	frame[5].o = sp[0].o;
	LINE_NUMBER(372);
	if ((frame[5].o) == nullptr) goto label_72;
	}
	{
	sp[0].o = (jobject)((mindustry_gen_LegsUnit *) NULL_CHECK((frame[0].o)))->F_statuses;
	sp[0].o = (jobject)((func_arc_struct_Seq_add_java_lang_Object_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_add_java_lang_Object_R_arc_struct_Seq])(ctx, sp[0].o, (frame[5].o));
	}
label_72:;
	{
	LINE_NUMBER(370);
	INST_IINC(4, 1);
	goto label_68;
	}
label_69:;
	{
	LINE_NUMBER(374);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)SM_mindustry_io_TypeIO_readTeam_arc_util_io_Reads_R_mindustry_game_Team(ctx, (frame[1].o));
	((mindustry_gen_Unit *) NULL_CHECK(sp[0].o))->F_team = (jref) sp[1].o;
	LINE_NUMBER(375);
	sp[0].o = frame[0].o;
	clinit_mindustry_Vars(ctx);
	sp[1].o = (jobject)SF_mindustry_Vars_content;
	clinit_mindustry_ctype_ContentType(ctx);
	sp[2].o = (jobject)SF_mindustry_ctype_ContentType_unit;
	jint temp0 = (jint)((func_arc_util_io_Reads_s_R_short) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_util_io_Reads_s_R_short])(ctx, (frame[1].o));
	sp[1].o = (jobject)((func_mindustry_core_ContentLoader_getByID_mindustry_ctype_ContentType_int_R_mindustry_ctype_Content) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_mindustry_core_ContentLoader_getByID_mindustry_ctype_ContentType_int_R_mindustry_ctype_Content])(ctx, sp[1].o, sp[2].o, temp0);
	((mindustry_gen_Unit *) NULL_CHECK(sp[0].o))->F_type = (jref) (checkCast(ctx, &class_mindustry_type_UnitType, sp[1].o));
	LINE_NUMBER(376);
	sp[0].o = frame[0].o;
	jfloat temp1 = (jfloat)((func_arc_util_io_Reads_f_R_float) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_util_io_Reads_f_R_float])(ctx, (frame[1].o));
	((mindustry_gen_Unit *) NULL_CHECK(sp[0].o))->F_x = temp1;
	LINE_NUMBER(377);
	sp[0].o = frame[0].o;
	jfloat temp2 = (jfloat)((func_arc_util_io_Reads_f_R_float) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_util_io_Reads_f_R_float])(ctx, (frame[1].o));
	((mindustry_gen_Unit *) NULL_CHECK(sp[0].o))->F_y = temp2;
	LINE_NUMBER(378);
	goto label_27;
	}
label_52:;
	{
	if ((frame[2].i) != (jint(3))) goto label_77;
	}
	{
	LINE_NUMBER(379);
	jfloat temp0 = (jfloat)((func_arc_util_io_Reads_f_R_float) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_util_io_Reads_f_R_float])(ctx, (frame[1].o));
	LINE_NUMBER(380);
	jfloat temp1 = (jfloat)((func_arc_util_io_Reads_f_R_float) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_util_io_Reads_f_R_float])(ctx, (frame[1].o));
	LINE_NUMBER(381);
	sp[0].o = frame[0].o;
	sp[1].o = frame[1].o;
	sp[2].o = (jobject)((mindustry_gen_LegsUnit *) NULL_CHECK((frame[0].o)))->F_controller;
	sp[1].o = (jobject)SM_mindustry_io_TypeIO_readController_arc_util_io_Reads_mindustry_entities_units_UnitController_R_mindustry_entities_units_UnitController(ctx, sp[1].o, sp[2].o);
	((mindustry_gen_LegsUnit *) NULL_CHECK(sp[0].o))->F_controller = (jref) sp[1].o;
	LINE_NUMBER(382);
	sp[0].o = frame[0].o;
	jfloat temp2 = (jfloat)((func_arc_util_io_Reads_f_R_float) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_util_io_Reads_f_R_float])(ctx, (frame[1].o));
	((mindustry_gen_Unit *) NULL_CHECK(sp[0].o))->F_elevation = temp2;
	LINE_NUMBER(383);
	sp[0].o = frame[0].o;
	jdouble temp3 = (jdouble)((func_arc_util_io_Reads_d_R_double) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_util_io_Reads_d_R_double])(ctx, (frame[1].o));
	((mindustry_gen_Unit *) NULL_CHECK(sp[0].o))->F_flag = temp3;
	LINE_NUMBER(384);
	sp[0].o = frame[0].o;
	jfloat temp4 = (jfloat)((func_arc_util_io_Reads_f_R_float) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_util_io_Reads_f_R_float])(ctx, (frame[1].o));
	((mindustry_gen_Unit *) NULL_CHECK(sp[0].o))->F_health = temp4;
	LINE_NUMBER(385);
	sp[0].o = frame[0].o;
	jint temp5 = (jint)((func_arc_util_io_Reads_bool_R_boolean) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_util_io_Reads_bool_R_boolean])(ctx, (frame[1].o));
	((mindustry_gen_Unit *) NULL_CHECK(sp[0].o))->F_isShooting = temp5;
	LINE_NUMBER(386);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)SM_mindustry_io_TypeIO_readTile_arc_util_io_Reads_R_mindustry_world_Tile(ctx, (frame[1].o));
	((mindustry_gen_Unit *) NULL_CHECK(sp[0].o))->F_mineTile = (jref) sp[1].o;
	LINE_NUMBER(387);
	sp[0].o = frame[0].o;
	sp[1].o = frame[1].o;
	sp[2].o = (jobject)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_mounts;
	sp[1].o = (jobject)SM_mindustry_io_TypeIO_readMounts_arc_util_io_Reads_Array1_mindustry_entities_units_WeaponMount_R_Array1_mindustry_entities_units_WeaponMount(ctx, sp[1].o, sp[2].o);
	((mindustry_gen_Unit *) NULL_CHECK(sp[0].o))->F_mounts = (jref) sp[1].o;
	LINE_NUMBER(388);
	sp[0].o = frame[0].o;
	jfloat temp6 = (jfloat)((func_arc_util_io_Reads_f_R_float) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_util_io_Reads_f_R_float])(ctx, (frame[1].o));
	((mindustry_gen_Unit *) NULL_CHECK(sp[0].o))->F_rotation = temp6;
	LINE_NUMBER(389);
	sp[0].o = frame[0].o;
	jfloat temp7 = (jfloat)((func_arc_util_io_Reads_f_R_float) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_util_io_Reads_f_R_float])(ctx, (frame[1].o));
	((mindustry_gen_Unit *) NULL_CHECK(sp[0].o))->F_shield = temp7;
	LINE_NUMBER(390);
	sp[0].o = frame[0].o;
	jint temp8 = (jint)((func_arc_util_io_Reads_bool_R_boolean) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_util_io_Reads_bool_R_boolean])(ctx, (frame[1].o));
	((mindustry_gen_Unit *) NULL_CHECK(sp[0].o))->F_spawnedByCore = temp8;
	LINE_NUMBER(391);
	sp[0].o = frame[0].o;
	sp[1].o = frame[1].o;
	sp[2].o = (jobject)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_stack;
	sp[1].o = (jobject)SM_mindustry_io_TypeIO_readItems_arc_util_io_Reads_mindustry_type_ItemStack_R_mindustry_type_ItemStack(ctx, sp[1].o, sp[2].o);
	((mindustry_gen_Unit *) NULL_CHECK(sp[0].o))->F_stack = (jref) sp[1].o;
	LINE_NUMBER(392);
	jint temp9 = (jint)((func_arc_util_io_Reads_i_R_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_util_io_Reads_i_R_int])(ctx, (frame[1].o));
	frame[3].i = temp9;
	LINE_NUMBER(393);
	sp[0].o = (jobject)((mindustry_gen_LegsUnit *) NULL_CHECK((frame[0].o)))->F_statuses;
	sp[0].o = (jobject)((func_arc_struct_Seq_clear_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_clear_R_arc_struct_Seq])(ctx, sp[0].o);
	LINE_NUMBER(394);
	frame[4].i = (jint(0));
	}
label_94:;
	{
	if ((frame[4].i) >= (frame[3].i)) goto label_95;
	}
	{
	LINE_NUMBER(395);
	sp[0].o = (jobject)SM_mindustry_io_TypeIO_readStatus_arc_util_io_Reads_R_mindustry_entities_units_StatusEntry(ctx, (frame[1].o));
	frame[5].o = sp[0].o;
	LINE_NUMBER(396);
	if ((frame[5].o) == nullptr) goto label_98;
	}
	{
	sp[0].o = (jobject)((mindustry_gen_LegsUnit *) NULL_CHECK((frame[0].o)))->F_statuses;
	sp[0].o = (jobject)((func_arc_struct_Seq_add_java_lang_Object_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_add_java_lang_Object_R_arc_struct_Seq])(ctx, sp[0].o, (frame[5].o));
	}
label_98:;
	{
	LINE_NUMBER(394);
	INST_IINC(4, 1);
	goto label_94;
	}
label_95:;
	{
	LINE_NUMBER(398);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)SM_mindustry_io_TypeIO_readTeam_arc_util_io_Reads_R_mindustry_game_Team(ctx, (frame[1].o));
	((mindustry_gen_Unit *) NULL_CHECK(sp[0].o))->F_team = (jref) sp[1].o;
	LINE_NUMBER(399);
	sp[0].o = frame[0].o;
	clinit_mindustry_Vars(ctx);
	sp[1].o = (jobject)SF_mindustry_Vars_content;
	clinit_mindustry_ctype_ContentType(ctx);
	sp[2].o = (jobject)SF_mindustry_ctype_ContentType_unit;
	jint temp0 = (jint)((func_arc_util_io_Reads_s_R_short) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_util_io_Reads_s_R_short])(ctx, (frame[1].o));
	sp[1].o = (jobject)((func_mindustry_core_ContentLoader_getByID_mindustry_ctype_ContentType_int_R_mindustry_ctype_Content) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_mindustry_core_ContentLoader_getByID_mindustry_ctype_ContentType_int_R_mindustry_ctype_Content])(ctx, sp[1].o, sp[2].o, temp0);
	((mindustry_gen_Unit *) NULL_CHECK(sp[0].o))->F_type = (jref) (checkCast(ctx, &class_mindustry_type_UnitType, sp[1].o));
	LINE_NUMBER(400);
	sp[0].o = frame[0].o;
	jfloat temp1 = (jfloat)((func_arc_util_io_Reads_f_R_float) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_util_io_Reads_f_R_float])(ctx, (frame[1].o));
	((mindustry_gen_Unit *) NULL_CHECK(sp[0].o))->F_x = temp1;
	LINE_NUMBER(401);
	sp[0].o = frame[0].o;
	jfloat temp2 = (jfloat)((func_arc_util_io_Reads_f_R_float) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_util_io_Reads_f_R_float])(ctx, (frame[1].o));
	((mindustry_gen_Unit *) NULL_CHECK(sp[0].o))->F_y = temp2;
	LINE_NUMBER(402);
	goto label_27;
	}
label_77:;
	{
	if ((frame[2].i) != (jint(4))) goto label_103;
	}
	{
	LINE_NUMBER(403);
	jfloat temp0 = (jfloat)((func_arc_util_io_Reads_f_R_float) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_util_io_Reads_f_R_float])(ctx, (frame[1].o));
	LINE_NUMBER(404);
	jfloat temp1 = (jfloat)((func_arc_util_io_Reads_f_R_float) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_util_io_Reads_f_R_float])(ctx, (frame[1].o));
	LINE_NUMBER(405);
	sp[0].o = frame[0].o;
	sp[1].o = frame[1].o;
	sp[2].o = (jobject)((mindustry_gen_LegsUnit *) NULL_CHECK((frame[0].o)))->F_controller;
	sp[1].o = (jobject)SM_mindustry_io_TypeIO_readController_arc_util_io_Reads_mindustry_entities_units_UnitController_R_mindustry_entities_units_UnitController(ctx, sp[1].o, sp[2].o);
	((mindustry_gen_LegsUnit *) NULL_CHECK(sp[0].o))->F_controller = (jref) sp[1].o;
	LINE_NUMBER(406);
	sp[0].o = frame[0].o;
	jfloat temp2 = (jfloat)((func_arc_util_io_Reads_f_R_float) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_util_io_Reads_f_R_float])(ctx, (frame[1].o));
	((mindustry_gen_Unit *) NULL_CHECK(sp[0].o))->F_elevation = temp2;
	LINE_NUMBER(407);
	sp[0].o = frame[0].o;
	jdouble temp3 = (jdouble)((func_arc_util_io_Reads_d_R_double) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_util_io_Reads_d_R_double])(ctx, (frame[1].o));
	((mindustry_gen_Unit *) NULL_CHECK(sp[0].o))->F_flag = temp3;
	LINE_NUMBER(408);
	sp[0].o = frame[0].o;
	jfloat temp4 = (jfloat)((func_arc_util_io_Reads_f_R_float) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_util_io_Reads_f_R_float])(ctx, (frame[1].o));
	((mindustry_gen_Unit *) NULL_CHECK(sp[0].o))->F_health = temp4;
	LINE_NUMBER(409);
	sp[0].o = frame[0].o;
	jint temp5 = (jint)((func_arc_util_io_Reads_bool_R_boolean) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_util_io_Reads_bool_R_boolean])(ctx, (frame[1].o));
	((mindustry_gen_Unit *) NULL_CHECK(sp[0].o))->F_isShooting = temp5;
	LINE_NUMBER(410);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)SM_mindustry_io_TypeIO_readTile_arc_util_io_Reads_R_mindustry_world_Tile(ctx, (frame[1].o));
	((mindustry_gen_Unit *) NULL_CHECK(sp[0].o))->F_mineTile = (jref) sp[1].o;
	LINE_NUMBER(411);
	sp[0].o = frame[0].o;
	sp[1].o = frame[1].o;
	sp[2].o = (jobject)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_mounts;
	sp[1].o = (jobject)SM_mindustry_io_TypeIO_readMounts_arc_util_io_Reads_Array1_mindustry_entities_units_WeaponMount_R_Array1_mindustry_entities_units_WeaponMount(ctx, sp[1].o, sp[2].o);
	((mindustry_gen_Unit *) NULL_CHECK(sp[0].o))->F_mounts = (jref) sp[1].o;
	LINE_NUMBER(412);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)SM_mindustry_io_TypeIO_readPlansQueue_arc_util_io_Reads_R_arc_struct_Queue(ctx, (frame[1].o));
	((mindustry_gen_Unit *) NULL_CHECK(sp[0].o))->F_plans = (jref) sp[1].o;
	LINE_NUMBER(413);
	sp[0].o = frame[0].o;
	jfloat temp6 = (jfloat)((func_arc_util_io_Reads_f_R_float) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_util_io_Reads_f_R_float])(ctx, (frame[1].o));
	((mindustry_gen_Unit *) NULL_CHECK(sp[0].o))->F_rotation = temp6;
	LINE_NUMBER(414);
	sp[0].o = frame[0].o;
	jfloat temp7 = (jfloat)((func_arc_util_io_Reads_f_R_float) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_util_io_Reads_f_R_float])(ctx, (frame[1].o));
	((mindustry_gen_Unit *) NULL_CHECK(sp[0].o))->F_shield = temp7;
	LINE_NUMBER(415);
	sp[0].o = frame[0].o;
	jint temp8 = (jint)((func_arc_util_io_Reads_bool_R_boolean) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_util_io_Reads_bool_R_boolean])(ctx, (frame[1].o));
	((mindustry_gen_Unit *) NULL_CHECK(sp[0].o))->F_spawnedByCore = temp8;
	LINE_NUMBER(416);
	sp[0].o = frame[0].o;
	sp[1].o = frame[1].o;
	sp[2].o = (jobject)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_stack;
	sp[1].o = (jobject)SM_mindustry_io_TypeIO_readItems_arc_util_io_Reads_mindustry_type_ItemStack_R_mindustry_type_ItemStack(ctx, sp[1].o, sp[2].o);
	((mindustry_gen_Unit *) NULL_CHECK(sp[0].o))->F_stack = (jref) sp[1].o;
	LINE_NUMBER(417);
	jint temp9 = (jint)((func_arc_util_io_Reads_i_R_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_util_io_Reads_i_R_int])(ctx, (frame[1].o));
	frame[3].i = temp9;
	LINE_NUMBER(418);
	sp[0].o = (jobject)((mindustry_gen_LegsUnit *) NULL_CHECK((frame[0].o)))->F_statuses;
	sp[0].o = (jobject)((func_arc_struct_Seq_clear_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_clear_R_arc_struct_Seq])(ctx, sp[0].o);
	LINE_NUMBER(419);
	frame[4].i = (jint(0));
	}
label_121:;
	{
	if ((frame[4].i) >= (frame[3].i)) goto label_122;
	}
	{
	LINE_NUMBER(420);
	sp[0].o = (jobject)SM_mindustry_io_TypeIO_readStatus_arc_util_io_Reads_R_mindustry_entities_units_StatusEntry(ctx, (frame[1].o));
	frame[5].o = sp[0].o;
	LINE_NUMBER(421);
	if ((frame[5].o) == nullptr) goto label_125;
	}
	{
	sp[0].o = (jobject)((mindustry_gen_LegsUnit *) NULL_CHECK((frame[0].o)))->F_statuses;
	sp[0].o = (jobject)((func_arc_struct_Seq_add_java_lang_Object_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_add_java_lang_Object_R_arc_struct_Seq])(ctx, sp[0].o, (frame[5].o));
	}
label_125:;
	{
	LINE_NUMBER(419);
	INST_IINC(4, 1);
	goto label_121;
	}
label_122:;
	{
	LINE_NUMBER(423);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)SM_mindustry_io_TypeIO_readTeam_arc_util_io_Reads_R_mindustry_game_Team(ctx, (frame[1].o));
	((mindustry_gen_Unit *) NULL_CHECK(sp[0].o))->F_team = (jref) sp[1].o;
	LINE_NUMBER(424);
	sp[0].o = frame[0].o;
	clinit_mindustry_Vars(ctx);
	sp[1].o = (jobject)SF_mindustry_Vars_content;
	clinit_mindustry_ctype_ContentType(ctx);
	sp[2].o = (jobject)SF_mindustry_ctype_ContentType_unit;
	jint temp0 = (jint)((func_arc_util_io_Reads_s_R_short) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_util_io_Reads_s_R_short])(ctx, (frame[1].o));
	sp[1].o = (jobject)((func_mindustry_core_ContentLoader_getByID_mindustry_ctype_ContentType_int_R_mindustry_ctype_Content) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_mindustry_core_ContentLoader_getByID_mindustry_ctype_ContentType_int_R_mindustry_ctype_Content])(ctx, sp[1].o, sp[2].o, temp0);
	((mindustry_gen_Unit *) NULL_CHECK(sp[0].o))->F_type = (jref) (checkCast(ctx, &class_mindustry_type_UnitType, sp[1].o));
	LINE_NUMBER(425);
	sp[0].o = frame[0].o;
	jfloat temp1 = (jfloat)((func_arc_util_io_Reads_f_R_float) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_util_io_Reads_f_R_float])(ctx, (frame[1].o));
	((mindustry_gen_Unit *) NULL_CHECK(sp[0].o))->F_x = temp1;
	LINE_NUMBER(426);
	sp[0].o = frame[0].o;
	jfloat temp2 = (jfloat)((func_arc_util_io_Reads_f_R_float) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_util_io_Reads_f_R_float])(ctx, (frame[1].o));
	((mindustry_gen_Unit *) NULL_CHECK(sp[0].o))->F_y = temp2;
	LINE_NUMBER(427);
	goto label_27;
	}
label_103:;
	{
	if ((frame[2].i) != (jint(5))) goto label_130;
	}
	{
	LINE_NUMBER(428);
	jfloat temp0 = (jfloat)((func_arc_util_io_Reads_f_R_float) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_util_io_Reads_f_R_float])(ctx, (frame[1].o));
	LINE_NUMBER(429);
	jfloat temp1 = (jfloat)((func_arc_util_io_Reads_f_R_float) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_util_io_Reads_f_R_float])(ctx, (frame[1].o));
	LINE_NUMBER(430);
	sp[0].o = frame[0].o;
	sp[1].o = frame[1].o;
	sp[2].o = (jobject)((mindustry_gen_LegsUnit *) NULL_CHECK((frame[0].o)))->F_controller;
	sp[1].o = (jobject)SM_mindustry_io_TypeIO_readController_arc_util_io_Reads_mindustry_entities_units_UnitController_R_mindustry_entities_units_UnitController(ctx, sp[1].o, sp[2].o);
	((mindustry_gen_LegsUnit *) NULL_CHECK(sp[0].o))->F_controller = (jref) sp[1].o;
	LINE_NUMBER(431);
	sp[0].o = frame[0].o;
	jfloat temp2 = (jfloat)((func_arc_util_io_Reads_f_R_float) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_util_io_Reads_f_R_float])(ctx, (frame[1].o));
	((mindustry_gen_Unit *) NULL_CHECK(sp[0].o))->F_elevation = temp2;
	LINE_NUMBER(432);
	sp[0].o = frame[0].o;
	jdouble temp3 = (jdouble)((func_arc_util_io_Reads_d_R_double) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_util_io_Reads_d_R_double])(ctx, (frame[1].o));
	((mindustry_gen_Unit *) NULL_CHECK(sp[0].o))->F_flag = temp3;
	LINE_NUMBER(433);
	sp[0].o = frame[0].o;
	jfloat temp4 = (jfloat)((func_arc_util_io_Reads_f_R_float) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_util_io_Reads_f_R_float])(ctx, (frame[1].o));
	((mindustry_gen_Unit *) NULL_CHECK(sp[0].o))->F_health = temp4;
	LINE_NUMBER(434);
	sp[0].o = frame[0].o;
	jint temp5 = (jint)((func_arc_util_io_Reads_bool_R_boolean) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_util_io_Reads_bool_R_boolean])(ctx, (frame[1].o));
	((mindustry_gen_Unit *) NULL_CHECK(sp[0].o))->F_isShooting = temp5;
	LINE_NUMBER(435);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)SM_mindustry_io_TypeIO_readTile_arc_util_io_Reads_R_mindustry_world_Tile(ctx, (frame[1].o));
	((mindustry_gen_Unit *) NULL_CHECK(sp[0].o))->F_mineTile = (jref) sp[1].o;
	LINE_NUMBER(436);
	sp[0].o = frame[0].o;
	sp[1].o = frame[1].o;
	sp[2].o = (jobject)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_mounts;
	sp[1].o = (jobject)SM_mindustry_io_TypeIO_readMounts_arc_util_io_Reads_Array1_mindustry_entities_units_WeaponMount_R_Array1_mindustry_entities_units_WeaponMount(ctx, sp[1].o, sp[2].o);
	((mindustry_gen_Unit *) NULL_CHECK(sp[0].o))->F_mounts = (jref) sp[1].o;
	LINE_NUMBER(437);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)SM_mindustry_io_TypeIO_readPlansQueue_arc_util_io_Reads_R_arc_struct_Queue(ctx, (frame[1].o));
	((mindustry_gen_Unit *) NULL_CHECK(sp[0].o))->F_plans = (jref) sp[1].o;
	LINE_NUMBER(438);
	sp[0].o = frame[0].o;
	jfloat temp6 = (jfloat)((func_arc_util_io_Reads_f_R_float) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_util_io_Reads_f_R_float])(ctx, (frame[1].o));
	((mindustry_gen_Unit *) NULL_CHECK(sp[0].o))->F_rotation = temp6;
	LINE_NUMBER(439);
	sp[0].o = frame[0].o;
	jfloat temp7 = (jfloat)((func_arc_util_io_Reads_f_R_float) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_util_io_Reads_f_R_float])(ctx, (frame[1].o));
	((mindustry_gen_Unit *) NULL_CHECK(sp[0].o))->F_shield = temp7;
	LINE_NUMBER(440);
	sp[0].o = frame[0].o;
	jint temp8 = (jint)((func_arc_util_io_Reads_bool_R_boolean) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_util_io_Reads_bool_R_boolean])(ctx, (frame[1].o));
	((mindustry_gen_Unit *) NULL_CHECK(sp[0].o))->F_spawnedByCore = temp8;
	LINE_NUMBER(441);
	sp[0].o = frame[0].o;
	sp[1].o = frame[1].o;
	sp[2].o = (jobject)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_stack;
	sp[1].o = (jobject)SM_mindustry_io_TypeIO_readItems_arc_util_io_Reads_mindustry_type_ItemStack_R_mindustry_type_ItemStack(ctx, sp[1].o, sp[2].o);
	((mindustry_gen_Unit *) NULL_CHECK(sp[0].o))->F_stack = (jref) sp[1].o;
	LINE_NUMBER(442);
	jint temp9 = (jint)((func_arc_util_io_Reads_i_R_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_util_io_Reads_i_R_int])(ctx, (frame[1].o));
	frame[3].i = temp9;
	LINE_NUMBER(443);
	sp[0].o = (jobject)((mindustry_gen_LegsUnit *) NULL_CHECK((frame[0].o)))->F_statuses;
	sp[0].o = (jobject)((func_arc_struct_Seq_clear_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_clear_R_arc_struct_Seq])(ctx, sp[0].o);
	LINE_NUMBER(444);
	frame[4].i = (jint(0));
	}
label_148:;
	{
	if ((frame[4].i) >= (frame[3].i)) goto label_149;
	}
	{
	LINE_NUMBER(445);
	sp[0].o = (jobject)SM_mindustry_io_TypeIO_readStatus_arc_util_io_Reads_R_mindustry_entities_units_StatusEntry(ctx, (frame[1].o));
	frame[5].o = sp[0].o;
	LINE_NUMBER(446);
	if ((frame[5].o) == nullptr) goto label_152;
	}
	{
	sp[0].o = (jobject)((mindustry_gen_LegsUnit *) NULL_CHECK((frame[0].o)))->F_statuses;
	sp[0].o = (jobject)((func_arc_struct_Seq_add_java_lang_Object_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_add_java_lang_Object_R_arc_struct_Seq])(ctx, sp[0].o, (frame[5].o));
	}
label_152:;
	{
	LINE_NUMBER(444);
	INST_IINC(4, 1);
	goto label_148;
	}
label_149:;
	{
	LINE_NUMBER(448);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)SM_mindustry_io_TypeIO_readTeam_arc_util_io_Reads_R_mindustry_game_Team(ctx, (frame[1].o));
	((mindustry_gen_Unit *) NULL_CHECK(sp[0].o))->F_team = (jref) sp[1].o;
	LINE_NUMBER(449);
	sp[0].o = frame[0].o;
	clinit_mindustry_Vars(ctx);
	sp[1].o = (jobject)SF_mindustry_Vars_content;
	clinit_mindustry_ctype_ContentType(ctx);
	sp[2].o = (jobject)SF_mindustry_ctype_ContentType_unit;
	jint temp0 = (jint)((func_arc_util_io_Reads_s_R_short) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_util_io_Reads_s_R_short])(ctx, (frame[1].o));
	sp[1].o = (jobject)((func_mindustry_core_ContentLoader_getByID_mindustry_ctype_ContentType_int_R_mindustry_ctype_Content) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_mindustry_core_ContentLoader_getByID_mindustry_ctype_ContentType_int_R_mindustry_ctype_Content])(ctx, sp[1].o, sp[2].o, temp0);
	((mindustry_gen_Unit *) NULL_CHECK(sp[0].o))->F_type = (jref) (checkCast(ctx, &class_mindustry_type_UnitType, sp[1].o));
	LINE_NUMBER(450);
	sp[0].o = frame[0].o;
	jint temp1 = (jint)((func_arc_util_io_Reads_bool_R_boolean) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_util_io_Reads_bool_R_boolean])(ctx, (frame[1].o));
	((mindustry_gen_Unit *) NULL_CHECK(sp[0].o))->F_updateBuilding = temp1;
	LINE_NUMBER(451);
	sp[0].o = frame[0].o;
	jfloat temp2 = (jfloat)((func_arc_util_io_Reads_f_R_float) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_util_io_Reads_f_R_float])(ctx, (frame[1].o));
	((mindustry_gen_Unit *) NULL_CHECK(sp[0].o))->F_x = temp2;
	LINE_NUMBER(452);
	sp[0].o = frame[0].o;
	jfloat temp3 = (jfloat)((func_arc_util_io_Reads_f_R_float) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_util_io_Reads_f_R_float])(ctx, (frame[1].o));
	((mindustry_gen_Unit *) NULL_CHECK(sp[0].o))->F_y = temp3;
	LINE_NUMBER(453);
	goto label_27;
	}
label_130:;
	{
	if ((frame[2].i) != (6)) goto label_158;
	}
	{
	LINE_NUMBER(454);
	jfloat temp0 = (jfloat)((func_arc_util_io_Reads_f_R_float) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_util_io_Reads_f_R_float])(ctx, (frame[1].o));
	LINE_NUMBER(455);
	sp[0].o = frame[0].o;
	sp[1].o = frame[1].o;
	sp[2].o = (jobject)((mindustry_gen_LegsUnit *) NULL_CHECK((frame[0].o)))->F_controller;
	sp[1].o = (jobject)SM_mindustry_io_TypeIO_readController_arc_util_io_Reads_mindustry_entities_units_UnitController_R_mindustry_entities_units_UnitController(ctx, sp[1].o, sp[2].o);
	((mindustry_gen_LegsUnit *) NULL_CHECK(sp[0].o))->F_controller = (jref) sp[1].o;
	LINE_NUMBER(456);
	sp[0].o = frame[0].o;
	jfloat temp1 = (jfloat)((func_arc_util_io_Reads_f_R_float) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_util_io_Reads_f_R_float])(ctx, (frame[1].o));
	((mindustry_gen_Unit *) NULL_CHECK(sp[0].o))->F_elevation = temp1;
	LINE_NUMBER(457);
	sp[0].o = frame[0].o;
	jdouble temp2 = (jdouble)((func_arc_util_io_Reads_d_R_double) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_util_io_Reads_d_R_double])(ctx, (frame[1].o));
	((mindustry_gen_Unit *) NULL_CHECK(sp[0].o))->F_flag = temp2;
	LINE_NUMBER(458);
	sp[0].o = frame[0].o;
	jfloat temp3 = (jfloat)((func_arc_util_io_Reads_f_R_float) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_util_io_Reads_f_R_float])(ctx, (frame[1].o));
	((mindustry_gen_Unit *) NULL_CHECK(sp[0].o))->F_health = temp3;
	LINE_NUMBER(459);
	sp[0].o = frame[0].o;
	jint temp4 = (jint)((func_arc_util_io_Reads_bool_R_boolean) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_util_io_Reads_bool_R_boolean])(ctx, (frame[1].o));
	((mindustry_gen_Unit *) NULL_CHECK(sp[0].o))->F_isShooting = temp4;
	LINE_NUMBER(460);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)SM_mindustry_io_TypeIO_readTile_arc_util_io_Reads_R_mindustry_world_Tile(ctx, (frame[1].o));
	((mindustry_gen_Unit *) NULL_CHECK(sp[0].o))->F_mineTile = (jref) sp[1].o;
	LINE_NUMBER(461);
	sp[0].o = frame[0].o;
	sp[1].o = frame[1].o;
	sp[2].o = (jobject)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_mounts;
	sp[1].o = (jobject)SM_mindustry_io_TypeIO_readMounts_arc_util_io_Reads_Array1_mindustry_entities_units_WeaponMount_R_Array1_mindustry_entities_units_WeaponMount(ctx, sp[1].o, sp[2].o);
	((mindustry_gen_Unit *) NULL_CHECK(sp[0].o))->F_mounts = (jref) sp[1].o;
	LINE_NUMBER(462);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)SM_mindustry_io_TypeIO_readPlansQueue_arc_util_io_Reads_R_arc_struct_Queue(ctx, (frame[1].o));
	((mindustry_gen_Unit *) NULL_CHECK(sp[0].o))->F_plans = (jref) sp[1].o;
	LINE_NUMBER(463);
	sp[0].o = frame[0].o;
	jfloat temp5 = (jfloat)((func_arc_util_io_Reads_f_R_float) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_util_io_Reads_f_R_float])(ctx, (frame[1].o));
	((mindustry_gen_Unit *) NULL_CHECK(sp[0].o))->F_rotation = temp5;
	LINE_NUMBER(464);
	sp[0].o = frame[0].o;
	jfloat temp6 = (jfloat)((func_arc_util_io_Reads_f_R_float) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_util_io_Reads_f_R_float])(ctx, (frame[1].o));
	((mindustry_gen_Unit *) NULL_CHECK(sp[0].o))->F_shield = temp6;
	LINE_NUMBER(465);
	sp[0].o = frame[0].o;
	jint temp7 = (jint)((func_arc_util_io_Reads_bool_R_boolean) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_util_io_Reads_bool_R_boolean])(ctx, (frame[1].o));
	((mindustry_gen_Unit *) NULL_CHECK(sp[0].o))->F_spawnedByCore = temp7;
	LINE_NUMBER(466);
	sp[0].o = frame[0].o;
	sp[1].o = frame[1].o;
	sp[2].o = (jobject)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_stack;
	sp[1].o = (jobject)SM_mindustry_io_TypeIO_readItems_arc_util_io_Reads_mindustry_type_ItemStack_R_mindustry_type_ItemStack(ctx, sp[1].o, sp[2].o);
	((mindustry_gen_Unit *) NULL_CHECK(sp[0].o))->F_stack = (jref) sp[1].o;
	LINE_NUMBER(467);
	jint temp8 = (jint)((func_arc_util_io_Reads_i_R_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_util_io_Reads_i_R_int])(ctx, (frame[1].o));
	frame[3].i = temp8;
	LINE_NUMBER(468);
	sp[0].o = (jobject)((mindustry_gen_LegsUnit *) NULL_CHECK((frame[0].o)))->F_statuses;
	sp[0].o = (jobject)((func_arc_struct_Seq_clear_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_clear_R_arc_struct_Seq])(ctx, sp[0].o);
	LINE_NUMBER(469);
	frame[4].i = (jint(0));
	}
label_175:;
	{
	if ((frame[4].i) >= (frame[3].i)) goto label_176;
	}
	{
	LINE_NUMBER(470);
	sp[0].o = (jobject)SM_mindustry_io_TypeIO_readStatus_arc_util_io_Reads_R_mindustry_entities_units_StatusEntry(ctx, (frame[1].o));
	frame[5].o = sp[0].o;
	LINE_NUMBER(471);
	if ((frame[5].o) == nullptr) goto label_179;
	}
	{
	sp[0].o = (jobject)((mindustry_gen_LegsUnit *) NULL_CHECK((frame[0].o)))->F_statuses;
	sp[0].o = (jobject)((func_arc_struct_Seq_add_java_lang_Object_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_add_java_lang_Object_R_arc_struct_Seq])(ctx, sp[0].o, (frame[5].o));
	}
label_179:;
	{
	LINE_NUMBER(469);
	INST_IINC(4, 1);
	goto label_175;
	}
label_176:;
	{
	LINE_NUMBER(473);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)SM_mindustry_io_TypeIO_readTeam_arc_util_io_Reads_R_mindustry_game_Team(ctx, (frame[1].o));
	((mindustry_gen_Unit *) NULL_CHECK(sp[0].o))->F_team = (jref) sp[1].o;
	LINE_NUMBER(474);
	sp[0].o = frame[0].o;
	clinit_mindustry_Vars(ctx);
	sp[1].o = (jobject)SF_mindustry_Vars_content;
	clinit_mindustry_ctype_ContentType(ctx);
	sp[2].o = (jobject)SF_mindustry_ctype_ContentType_unit;
	jint temp0 = (jint)((func_arc_util_io_Reads_s_R_short) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_util_io_Reads_s_R_short])(ctx, (frame[1].o));
	sp[1].o = (jobject)((func_mindustry_core_ContentLoader_getByID_mindustry_ctype_ContentType_int_R_mindustry_ctype_Content) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_mindustry_core_ContentLoader_getByID_mindustry_ctype_ContentType_int_R_mindustry_ctype_Content])(ctx, sp[1].o, sp[2].o, temp0);
	((mindustry_gen_Unit *) NULL_CHECK(sp[0].o))->F_type = (jref) (checkCast(ctx, &class_mindustry_type_UnitType, sp[1].o));
	LINE_NUMBER(475);
	sp[0].o = frame[0].o;
	jint temp1 = (jint)((func_arc_util_io_Reads_bool_R_boolean) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_util_io_Reads_bool_R_boolean])(ctx, (frame[1].o));
	((mindustry_gen_Unit *) NULL_CHECK(sp[0].o))->F_updateBuilding = temp1;
	LINE_NUMBER(476);
	sp[0].o = frame[0].o;
	sp[1].o = frame[1].o;
	sp[2].o = (jobject)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_vel;
	sp[1].o = (jobject)SM_mindustry_io_TypeIO_readVec2_arc_util_io_Reads_arc_math_geom_Vec2_R_arc_math_geom_Vec2(ctx, sp[1].o, sp[2].o);
	((mindustry_gen_Unit *) NULL_CHECK(sp[0].o))->F_vel = (jref) sp[1].o;
	LINE_NUMBER(477);
	sp[0].o = frame[0].o;
	jfloat temp2 = (jfloat)((func_arc_util_io_Reads_f_R_float) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_util_io_Reads_f_R_float])(ctx, (frame[1].o));
	((mindustry_gen_Unit *) NULL_CHECK(sp[0].o))->F_x = temp2;
	LINE_NUMBER(478);
	sp[0].o = frame[0].o;
	jfloat temp3 = (jfloat)((func_arc_util_io_Reads_f_R_float) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_util_io_Reads_f_R_float])(ctx, (frame[1].o));
	((mindustry_gen_Unit *) NULL_CHECK(sp[0].o))->F_y = temp3;
	LINE_NUMBER(479);
	goto label_27;
	}
label_158:;
	{
	if ((frame[2].i) != (7)) goto label_186;
	}
	{
	LINE_NUMBER(480);
	sp[0].o = frame[0].o;
	sp[1].o = frame[1].o;
	sp[2].o = (jobject)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_abilities;
	sp[1].o = (jobject)SM_mindustry_io_TypeIO_readAbilities_arc_util_io_Reads_Array1_mindustry_entities_abilities_Ability_R_Array1_mindustry_entities_abilities_Ability(ctx, sp[1].o, sp[2].o);
	((mindustry_gen_Unit *) NULL_CHECK(sp[0].o))->F_abilities = (jref) sp[1].o;
	LINE_NUMBER(481);
	jfloat temp0 = (jfloat)((func_arc_util_io_Reads_f_R_float) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_util_io_Reads_f_R_float])(ctx, (frame[1].o));
	LINE_NUMBER(482);
	sp[0].o = frame[0].o;
	sp[1].o = frame[1].o;
	sp[2].o = (jobject)((mindustry_gen_LegsUnit *) NULL_CHECK((frame[0].o)))->F_controller;
	sp[1].o = (jobject)SM_mindustry_io_TypeIO_readController_arc_util_io_Reads_mindustry_entities_units_UnitController_R_mindustry_entities_units_UnitController(ctx, sp[1].o, sp[2].o);
	((mindustry_gen_LegsUnit *) NULL_CHECK(sp[0].o))->F_controller = (jref) sp[1].o;
	LINE_NUMBER(483);
	sp[0].o = frame[0].o;
	jfloat temp1 = (jfloat)((func_arc_util_io_Reads_f_R_float) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_util_io_Reads_f_R_float])(ctx, (frame[1].o));
	((mindustry_gen_Unit *) NULL_CHECK(sp[0].o))->F_elevation = temp1;
	LINE_NUMBER(484);
	sp[0].o = frame[0].o;
	jdouble temp2 = (jdouble)((func_arc_util_io_Reads_d_R_double) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_util_io_Reads_d_R_double])(ctx, (frame[1].o));
	((mindustry_gen_Unit *) NULL_CHECK(sp[0].o))->F_flag = temp2;
	LINE_NUMBER(485);
	sp[0].o = frame[0].o;
	jfloat temp3 = (jfloat)((func_arc_util_io_Reads_f_R_float) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_util_io_Reads_f_R_float])(ctx, (frame[1].o));
	((mindustry_gen_Unit *) NULL_CHECK(sp[0].o))->F_health = temp3;
	LINE_NUMBER(486);
	sp[0].o = frame[0].o;
	jint temp4 = (jint)((func_arc_util_io_Reads_bool_R_boolean) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_util_io_Reads_bool_R_boolean])(ctx, (frame[1].o));
	((mindustry_gen_Unit *) NULL_CHECK(sp[0].o))->F_isShooting = temp4;
	LINE_NUMBER(487);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)SM_mindustry_io_TypeIO_readTile_arc_util_io_Reads_R_mindustry_world_Tile(ctx, (frame[1].o));
	((mindustry_gen_Unit *) NULL_CHECK(sp[0].o))->F_mineTile = (jref) sp[1].o;
	LINE_NUMBER(488);
	sp[0].o = frame[0].o;
	sp[1].o = frame[1].o;
	sp[2].o = (jobject)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_mounts;
	sp[1].o = (jobject)SM_mindustry_io_TypeIO_readMounts_arc_util_io_Reads_Array1_mindustry_entities_units_WeaponMount_R_Array1_mindustry_entities_units_WeaponMount(ctx, sp[1].o, sp[2].o);
	((mindustry_gen_Unit *) NULL_CHECK(sp[0].o))->F_mounts = (jref) sp[1].o;
	LINE_NUMBER(489);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)SM_mindustry_io_TypeIO_readPlansQueue_arc_util_io_Reads_R_arc_struct_Queue(ctx, (frame[1].o));
	((mindustry_gen_Unit *) NULL_CHECK(sp[0].o))->F_plans = (jref) sp[1].o;
	LINE_NUMBER(490);
	sp[0].o = frame[0].o;
	jfloat temp5 = (jfloat)((func_arc_util_io_Reads_f_R_float) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_util_io_Reads_f_R_float])(ctx, (frame[1].o));
	((mindustry_gen_Unit *) NULL_CHECK(sp[0].o))->F_rotation = temp5;
	LINE_NUMBER(491);
	sp[0].o = frame[0].o;
	jfloat temp6 = (jfloat)((func_arc_util_io_Reads_f_R_float) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_util_io_Reads_f_R_float])(ctx, (frame[1].o));
	((mindustry_gen_Unit *) NULL_CHECK(sp[0].o))->F_shield = temp6;
	LINE_NUMBER(492);
	sp[0].o = frame[0].o;
	jint temp7 = (jint)((func_arc_util_io_Reads_bool_R_boolean) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_util_io_Reads_bool_R_boolean])(ctx, (frame[1].o));
	((mindustry_gen_Unit *) NULL_CHECK(sp[0].o))->F_spawnedByCore = temp7;
	LINE_NUMBER(493);
	sp[0].o = frame[0].o;
	sp[1].o = frame[1].o;
	sp[2].o = (jobject)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_stack;
	sp[1].o = (jobject)SM_mindustry_io_TypeIO_readItems_arc_util_io_Reads_mindustry_type_ItemStack_R_mindustry_type_ItemStack(ctx, sp[1].o, sp[2].o);
	((mindustry_gen_Unit *) NULL_CHECK(sp[0].o))->F_stack = (jref) sp[1].o;
	LINE_NUMBER(494);
	jint temp8 = (jint)((func_arc_util_io_Reads_i_R_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_util_io_Reads_i_R_int])(ctx, (frame[1].o));
	frame[3].i = temp8;
	LINE_NUMBER(495);
	sp[0].o = (jobject)((mindustry_gen_LegsUnit *) NULL_CHECK((frame[0].o)))->F_statuses;
	sp[0].o = (jobject)((func_arc_struct_Seq_clear_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_clear_R_arc_struct_Seq])(ctx, sp[0].o);
	LINE_NUMBER(496);
	frame[4].i = (jint(0));
	}
label_204:;
	{
	if ((frame[4].i) >= (frame[3].i)) goto label_205;
	}
	{
	LINE_NUMBER(497);
	sp[0].o = (jobject)SM_mindustry_io_TypeIO_readStatus_arc_util_io_Reads_R_mindustry_entities_units_StatusEntry(ctx, (frame[1].o));
	frame[5].o = sp[0].o;
	LINE_NUMBER(498);
	if ((frame[5].o) == nullptr) goto label_208;
	}
	{
	sp[0].o = (jobject)((mindustry_gen_LegsUnit *) NULL_CHECK((frame[0].o)))->F_statuses;
	sp[0].o = (jobject)((func_arc_struct_Seq_add_java_lang_Object_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_add_java_lang_Object_R_arc_struct_Seq])(ctx, sp[0].o, (frame[5].o));
	}
label_208:;
	{
	LINE_NUMBER(496);
	INST_IINC(4, 1);
	goto label_204;
	}
label_205:;
	{
	LINE_NUMBER(500);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)SM_mindustry_io_TypeIO_readTeam_arc_util_io_Reads_R_mindustry_game_Team(ctx, (frame[1].o));
	((mindustry_gen_Unit *) NULL_CHECK(sp[0].o))->F_team = (jref) sp[1].o;
	LINE_NUMBER(501);
	sp[0].o = frame[0].o;
	clinit_mindustry_Vars(ctx);
	sp[1].o = (jobject)SF_mindustry_Vars_content;
	clinit_mindustry_ctype_ContentType(ctx);
	sp[2].o = (jobject)SF_mindustry_ctype_ContentType_unit;
	jint temp0 = (jint)((func_arc_util_io_Reads_s_R_short) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_util_io_Reads_s_R_short])(ctx, (frame[1].o));
	sp[1].o = (jobject)((func_mindustry_core_ContentLoader_getByID_mindustry_ctype_ContentType_int_R_mindustry_ctype_Content) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_mindustry_core_ContentLoader_getByID_mindustry_ctype_ContentType_int_R_mindustry_ctype_Content])(ctx, sp[1].o, sp[2].o, temp0);
	((mindustry_gen_Unit *) NULL_CHECK(sp[0].o))->F_type = (jref) (checkCast(ctx, &class_mindustry_type_UnitType, sp[1].o));
	LINE_NUMBER(502);
	sp[0].o = frame[0].o;
	jint temp1 = (jint)((func_arc_util_io_Reads_bool_R_boolean) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_util_io_Reads_bool_R_boolean])(ctx, (frame[1].o));
	((mindustry_gen_Unit *) NULL_CHECK(sp[0].o))->F_updateBuilding = temp1;
	LINE_NUMBER(503);
	sp[0].o = frame[0].o;
	sp[1].o = frame[1].o;
	sp[2].o = (jobject)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_vel;
	sp[1].o = (jobject)SM_mindustry_io_TypeIO_readVec2_arc_util_io_Reads_arc_math_geom_Vec2_R_arc_math_geom_Vec2(ctx, sp[1].o, sp[2].o);
	((mindustry_gen_Unit *) NULL_CHECK(sp[0].o))->F_vel = (jref) sp[1].o;
	LINE_NUMBER(504);
	sp[0].o = frame[0].o;
	jfloat temp2 = (jfloat)((func_arc_util_io_Reads_f_R_float) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_util_io_Reads_f_R_float])(ctx, (frame[1].o));
	((mindustry_gen_Unit *) NULL_CHECK(sp[0].o))->F_x = temp2;
	LINE_NUMBER(505);
	sp[0].o = frame[0].o;
	jfloat temp3 = (jfloat)((func_arc_util_io_Reads_f_R_float) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_util_io_Reads_f_R_float])(ctx, (frame[1].o));
	((mindustry_gen_Unit *) NULL_CHECK(sp[0].o))->F_y = temp3;
	LINE_NUMBER(506);
	goto label_27;
	}
label_186:;
	{
	if ((frame[2].i) != (8)) goto label_215;
	}
	{
	LINE_NUMBER(507);
	sp[0].o = frame[0].o;
	sp[1].o = frame[1].o;
	sp[2].o = (jobject)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_abilities;
	sp[1].o = (jobject)SM_mindustry_io_TypeIO_readAbilities_arc_util_io_Reads_Array1_mindustry_entities_abilities_Ability_R_Array1_mindustry_entities_abilities_Ability(ctx, sp[1].o, sp[2].o);
	((mindustry_gen_Unit *) NULL_CHECK(sp[0].o))->F_abilities = (jref) sp[1].o;
	LINE_NUMBER(508);
	jfloat temp0 = (jfloat)((func_arc_util_io_Reads_f_R_float) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_util_io_Reads_f_R_float])(ctx, (frame[1].o));
	LINE_NUMBER(509);
	sp[0].o = frame[0].o;
	sp[1].o = frame[1].o;
	sp[2].o = (jobject)((mindustry_gen_LegsUnit *) NULL_CHECK((frame[0].o)))->F_controller;
	sp[1].o = (jobject)SM_mindustry_io_TypeIO_readController_arc_util_io_Reads_mindustry_entities_units_UnitController_R_mindustry_entities_units_UnitController(ctx, sp[1].o, sp[2].o);
	((mindustry_gen_LegsUnit *) NULL_CHECK(sp[0].o))->F_controller = (jref) sp[1].o;
	LINE_NUMBER(510);
	sp[0].o = frame[0].o;
	jfloat temp1 = (jfloat)((func_arc_util_io_Reads_f_R_float) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_util_io_Reads_f_R_float])(ctx, (frame[1].o));
	((mindustry_gen_Unit *) NULL_CHECK(sp[0].o))->F_elevation = temp1;
	LINE_NUMBER(511);
	sp[0].o = frame[0].o;
	jdouble temp2 = (jdouble)((func_arc_util_io_Reads_d_R_double) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_util_io_Reads_d_R_double])(ctx, (frame[1].o));
	((mindustry_gen_Unit *) NULL_CHECK(sp[0].o))->F_flag = temp2;
	LINE_NUMBER(512);
	sp[0].o = frame[0].o;
	jfloat temp3 = (jfloat)((func_arc_util_io_Reads_f_R_float) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_util_io_Reads_f_R_float])(ctx, (frame[1].o));
	((mindustry_gen_Unit *) NULL_CHECK(sp[0].o))->F_health = temp3;
	LINE_NUMBER(513);
	sp[0].o = frame[0].o;
	jint temp4 = (jint)((func_arc_util_io_Reads_bool_R_boolean) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_util_io_Reads_bool_R_boolean])(ctx, (frame[1].o));
	((mindustry_gen_Unit *) NULL_CHECK(sp[0].o))->F_isShooting = temp4;
	LINE_NUMBER(514);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)SM_mindustry_io_TypeIO_readTile_arc_util_io_Reads_R_mindustry_world_Tile(ctx, (frame[1].o));
	((mindustry_gen_Unit *) NULL_CHECK(sp[0].o))->F_mineTile = (jref) sp[1].o;
	LINE_NUMBER(515);
	sp[0].o = frame[0].o;
	sp[1].o = frame[1].o;
	sp[2].o = (jobject)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_mounts;
	sp[1].o = (jobject)SM_mindustry_io_TypeIO_readMounts_arc_util_io_Reads_Array1_mindustry_entities_units_WeaponMount_R_Array1_mindustry_entities_units_WeaponMount(ctx, sp[1].o, sp[2].o);
	((mindustry_gen_Unit *) NULL_CHECK(sp[0].o))->F_mounts = (jref) sp[1].o;
	LINE_NUMBER(516);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)SM_mindustry_io_TypeIO_readPlansQueue_arc_util_io_Reads_R_arc_struct_Queue(ctx, (frame[1].o));
	((mindustry_gen_Unit *) NULL_CHECK(sp[0].o))->F_plans = (jref) sp[1].o;
	LINE_NUMBER(517);
	sp[0].o = frame[0].o;
	jfloat temp5 = (jfloat)((func_arc_util_io_Reads_f_R_float) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_util_io_Reads_f_R_float])(ctx, (frame[1].o));
	((mindustry_gen_Unit *) NULL_CHECK(sp[0].o))->F_rotation = temp5;
	LINE_NUMBER(518);
	sp[0].o = frame[0].o;
	jfloat temp6 = (jfloat)((func_arc_util_io_Reads_f_R_float) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_util_io_Reads_f_R_float])(ctx, (frame[1].o));
	((mindustry_gen_Unit *) NULL_CHECK(sp[0].o))->F_shield = temp6;
	LINE_NUMBER(519);
	sp[0].o = frame[0].o;
	jint temp7 = (jint)((func_arc_util_io_Reads_bool_R_boolean) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_util_io_Reads_bool_R_boolean])(ctx, (frame[1].o));
	((mindustry_gen_Unit *) NULL_CHECK(sp[0].o))->F_spawnedByCore = temp7;
	LINE_NUMBER(520);
	sp[0].o = frame[0].o;
	sp[1].o = frame[1].o;
	sp[2].o = (jobject)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_stack;
	sp[1].o = (jobject)SM_mindustry_io_TypeIO_readItems_arc_util_io_Reads_mindustry_type_ItemStack_R_mindustry_type_ItemStack(ctx, sp[1].o, sp[2].o);
	((mindustry_gen_Unit *) NULL_CHECK(sp[0].o))->F_stack = (jref) sp[1].o;
	LINE_NUMBER(521);
	jint temp8 = (jint)((func_arc_util_io_Reads_i_R_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_util_io_Reads_i_R_int])(ctx, (frame[1].o));
	frame[3].i = temp8;
	LINE_NUMBER(522);
	sp[0].o = (jobject)((mindustry_gen_LegsUnit *) NULL_CHECK((frame[0].o)))->F_statuses;
	sp[0].o = (jobject)((func_arc_struct_Seq_clear_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_clear_R_arc_struct_Seq])(ctx, sp[0].o);
	LINE_NUMBER(523);
	frame[4].i = (jint(0));
	}
label_233:;
	{
	if ((frame[4].i) >= (frame[3].i)) goto label_234;
	}
	{
	LINE_NUMBER(524);
	sp[0].o = (jobject)SM_mindustry_io_TypeIO_readStatus_arc_util_io_Reads_R_mindustry_entities_units_StatusEntry(ctx, (frame[1].o));
	frame[5].o = sp[0].o;
	LINE_NUMBER(525);
	if ((frame[5].o) == nullptr) goto label_237;
	}
	{
	sp[0].o = (jobject)((mindustry_gen_LegsUnit *) NULL_CHECK((frame[0].o)))->F_statuses;
	sp[0].o = (jobject)((func_arc_struct_Seq_add_java_lang_Object_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_add_java_lang_Object_R_arc_struct_Seq])(ctx, sp[0].o, (frame[5].o));
	}
label_237:;
	{
	LINE_NUMBER(523);
	INST_IINC(4, 1);
	goto label_233;
	}
label_234:;
	{
	LINE_NUMBER(527);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)SM_mindustry_io_TypeIO_readTeam_arc_util_io_Reads_R_mindustry_game_Team(ctx, (frame[1].o));
	((mindustry_gen_Unit *) NULL_CHECK(sp[0].o))->F_team = (jref) sp[1].o;
	LINE_NUMBER(528);
	sp[0].o = frame[0].o;
	clinit_mindustry_Vars(ctx);
	sp[1].o = (jobject)SF_mindustry_Vars_content;
	clinit_mindustry_ctype_ContentType(ctx);
	sp[2].o = (jobject)SF_mindustry_ctype_ContentType_unit;
	jint temp0 = (jint)((func_arc_util_io_Reads_s_R_short) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_util_io_Reads_s_R_short])(ctx, (frame[1].o));
	sp[1].o = (jobject)((func_mindustry_core_ContentLoader_getByID_mindustry_ctype_ContentType_int_R_mindustry_ctype_Content) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_mindustry_core_ContentLoader_getByID_mindustry_ctype_ContentType_int_R_mindustry_ctype_Content])(ctx, sp[1].o, sp[2].o, temp0);
	((mindustry_gen_Unit *) NULL_CHECK(sp[0].o))->F_type = (jref) (checkCast(ctx, &class_mindustry_type_UnitType, sp[1].o));
	LINE_NUMBER(529);
	sp[0].o = frame[0].o;
	jint temp1 = (jint)((func_arc_util_io_Reads_bool_R_boolean) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_util_io_Reads_bool_R_boolean])(ctx, (frame[1].o));
	((mindustry_gen_Unit *) NULL_CHECK(sp[0].o))->F_updateBuilding = temp1;
	LINE_NUMBER(530);
	sp[0].o = frame[0].o;
	sp[1].o = frame[1].o;
	sp[2].o = (jobject)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_vel;
	sp[1].o = (jobject)SM_mindustry_io_TypeIO_readVec2_arc_util_io_Reads_arc_math_geom_Vec2_R_arc_math_geom_Vec2(ctx, sp[1].o, sp[2].o);
	((mindustry_gen_Unit *) NULL_CHECK(sp[0].o))->F_vel = (jref) sp[1].o;
	LINE_NUMBER(531);
	sp[0].o = frame[0].o;
	jfloat temp2 = (jfloat)((func_arc_util_io_Reads_f_R_float) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_util_io_Reads_f_R_float])(ctx, (frame[1].o));
	((mindustry_gen_Unit *) NULL_CHECK(sp[0].o))->F_x = temp2;
	LINE_NUMBER(532);
	sp[0].o = frame[0].o;
	jfloat temp3 = (jfloat)((func_arc_util_io_Reads_f_R_float) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_util_io_Reads_f_R_float])(ctx, (frame[1].o));
	((mindustry_gen_Unit *) NULL_CHECK(sp[0].o))->F_y = temp3;
	LINE_NUMBER(533);
	goto label_27;
	}
label_215:;
	{
	if ((frame[2].i) != (9)) goto label_244;
	}
	{
	LINE_NUMBER(534);
	sp[0].o = frame[0].o;
	sp[1].o = frame[1].o;
	sp[2].o = (jobject)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_abilities;
	sp[1].o = (jobject)SM_mindustry_io_TypeIO_readAbilities_arc_util_io_Reads_Array1_mindustry_entities_abilities_Ability_R_Array1_mindustry_entities_abilities_Ability(ctx, sp[1].o, sp[2].o);
	((mindustry_gen_Unit *) NULL_CHECK(sp[0].o))->F_abilities = (jref) sp[1].o;
	LINE_NUMBER(535);
	sp[0].o = frame[0].o;
	sp[1].o = frame[1].o;
	sp[2].o = (jobject)((mindustry_gen_LegsUnit *) NULL_CHECK((frame[0].o)))->F_controller;
	sp[1].o = (jobject)SM_mindustry_io_TypeIO_readController_arc_util_io_Reads_mindustry_entities_units_UnitController_R_mindustry_entities_units_UnitController(ctx, sp[1].o, sp[2].o);
	((mindustry_gen_LegsUnit *) NULL_CHECK(sp[0].o))->F_controller = (jref) sp[1].o;
	LINE_NUMBER(536);
	sp[0].o = frame[0].o;
	jfloat temp0 = (jfloat)((func_arc_util_io_Reads_f_R_float) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_util_io_Reads_f_R_float])(ctx, (frame[1].o));
	((mindustry_gen_Unit *) NULL_CHECK(sp[0].o))->F_elevation = temp0;
	LINE_NUMBER(537);
	sp[0].o = frame[0].o;
	jdouble temp1 = (jdouble)((func_arc_util_io_Reads_d_R_double) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_util_io_Reads_d_R_double])(ctx, (frame[1].o));
	((mindustry_gen_Unit *) NULL_CHECK(sp[0].o))->F_flag = temp1;
	LINE_NUMBER(538);
	sp[0].o = frame[0].o;
	jfloat temp2 = (jfloat)((func_arc_util_io_Reads_f_R_float) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_util_io_Reads_f_R_float])(ctx, (frame[1].o));
	((mindustry_gen_Unit *) NULL_CHECK(sp[0].o))->F_health = temp2;
	LINE_NUMBER(539);
	sp[0].o = frame[0].o;
	jint temp3 = (jint)((func_arc_util_io_Reads_bool_R_boolean) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_util_io_Reads_bool_R_boolean])(ctx, (frame[1].o));
	((mindustry_gen_Unit *) NULL_CHECK(sp[0].o))->F_isShooting = temp3;
	LINE_NUMBER(540);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)SM_mindustry_io_TypeIO_readTile_arc_util_io_Reads_R_mindustry_world_Tile(ctx, (frame[1].o));
	((mindustry_gen_Unit *) NULL_CHECK(sp[0].o))->F_mineTile = (jref) sp[1].o;
	LINE_NUMBER(541);
	sp[0].o = frame[0].o;
	sp[1].o = frame[1].o;
	sp[2].o = (jobject)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_mounts;
	sp[1].o = (jobject)SM_mindustry_io_TypeIO_readMounts_arc_util_io_Reads_Array1_mindustry_entities_units_WeaponMount_R_Array1_mindustry_entities_units_WeaponMount(ctx, sp[1].o, sp[2].o);
	((mindustry_gen_Unit *) NULL_CHECK(sp[0].o))->F_mounts = (jref) sp[1].o;
	LINE_NUMBER(542);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)SM_mindustry_io_TypeIO_readPlansQueue_arc_util_io_Reads_R_arc_struct_Queue(ctx, (frame[1].o));
	((mindustry_gen_Unit *) NULL_CHECK(sp[0].o))->F_plans = (jref) sp[1].o;
	LINE_NUMBER(543);
	sp[0].o = frame[0].o;
	jfloat temp4 = (jfloat)((func_arc_util_io_Reads_f_R_float) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_util_io_Reads_f_R_float])(ctx, (frame[1].o));
	((mindustry_gen_Unit *) NULL_CHECK(sp[0].o))->F_rotation = temp4;
	LINE_NUMBER(544);
	sp[0].o = frame[0].o;
	jfloat temp5 = (jfloat)((func_arc_util_io_Reads_f_R_float) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_util_io_Reads_f_R_float])(ctx, (frame[1].o));
	((mindustry_gen_Unit *) NULL_CHECK(sp[0].o))->F_shield = temp5;
	LINE_NUMBER(545);
	sp[0].o = frame[0].o;
	jint temp6 = (jint)((func_arc_util_io_Reads_bool_R_boolean) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_util_io_Reads_bool_R_boolean])(ctx, (frame[1].o));
	((mindustry_gen_Unit *) NULL_CHECK(sp[0].o))->F_spawnedByCore = temp6;
	LINE_NUMBER(546);
	sp[0].o = frame[0].o;
	sp[1].o = frame[1].o;
	sp[2].o = (jobject)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_stack;
	sp[1].o = (jobject)SM_mindustry_io_TypeIO_readItems_arc_util_io_Reads_mindustry_type_ItemStack_R_mindustry_type_ItemStack(ctx, sp[1].o, sp[2].o);
	((mindustry_gen_Unit *) NULL_CHECK(sp[0].o))->F_stack = (jref) sp[1].o;
	LINE_NUMBER(547);
	jint temp7 = (jint)((func_arc_util_io_Reads_i_R_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_util_io_Reads_i_R_int])(ctx, (frame[1].o));
	frame[3].i = temp7;
	LINE_NUMBER(548);
	sp[0].o = (jobject)((mindustry_gen_LegsUnit *) NULL_CHECK((frame[0].o)))->F_statuses;
	sp[0].o = (jobject)((func_arc_struct_Seq_clear_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_clear_R_arc_struct_Seq])(ctx, sp[0].o);
	LINE_NUMBER(549);
	frame[4].i = (jint(0));
	}
label_261:;
	{
	if ((frame[4].i) >= (frame[3].i)) goto label_262;
	}
	{
	LINE_NUMBER(550);
	sp[0].o = (jobject)SM_mindustry_io_TypeIO_readStatus_arc_util_io_Reads_R_mindustry_entities_units_StatusEntry(ctx, (frame[1].o));
	frame[5].o = sp[0].o;
	LINE_NUMBER(551);
	if ((frame[5].o) == nullptr) goto label_265;
	}
	{
	sp[0].o = (jobject)((mindustry_gen_LegsUnit *) NULL_CHECK((frame[0].o)))->F_statuses;
	sp[0].o = (jobject)((func_arc_struct_Seq_add_java_lang_Object_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_add_java_lang_Object_R_arc_struct_Seq])(ctx, sp[0].o, (frame[5].o));
	}
label_265:;
	{
	LINE_NUMBER(549);
	INST_IINC(4, 1);
	goto label_261;
	}
label_262:;
	{
	LINE_NUMBER(553);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)SM_mindustry_io_TypeIO_readTeam_arc_util_io_Reads_R_mindustry_game_Team(ctx, (frame[1].o));
	((mindustry_gen_Unit *) NULL_CHECK(sp[0].o))->F_team = (jref) sp[1].o;
	LINE_NUMBER(554);
	sp[0].o = frame[0].o;
	clinit_mindustry_Vars(ctx);
	sp[1].o = (jobject)SF_mindustry_Vars_content;
	clinit_mindustry_ctype_ContentType(ctx);
	sp[2].o = (jobject)SF_mindustry_ctype_ContentType_unit;
	jint temp0 = (jint)((func_arc_util_io_Reads_s_R_short) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_util_io_Reads_s_R_short])(ctx, (frame[1].o));
	sp[1].o = (jobject)((func_mindustry_core_ContentLoader_getByID_mindustry_ctype_ContentType_int_R_mindustry_ctype_Content) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_mindustry_core_ContentLoader_getByID_mindustry_ctype_ContentType_int_R_mindustry_ctype_Content])(ctx, sp[1].o, sp[2].o, temp0);
	((mindustry_gen_Unit *) NULL_CHECK(sp[0].o))->F_type = (jref) (checkCast(ctx, &class_mindustry_type_UnitType, sp[1].o));
	LINE_NUMBER(555);
	sp[0].o = frame[0].o;
	jint temp1 = (jint)((func_arc_util_io_Reads_bool_R_boolean) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_util_io_Reads_bool_R_boolean])(ctx, (frame[1].o));
	((mindustry_gen_Unit *) NULL_CHECK(sp[0].o))->F_updateBuilding = temp1;
	LINE_NUMBER(556);
	sp[0].o = frame[0].o;
	sp[1].o = frame[1].o;
	sp[2].o = (jobject)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_vel;
	sp[1].o = (jobject)SM_mindustry_io_TypeIO_readVec2_arc_util_io_Reads_arc_math_geom_Vec2_R_arc_math_geom_Vec2(ctx, sp[1].o, sp[2].o);
	((mindustry_gen_Unit *) NULL_CHECK(sp[0].o))->F_vel = (jref) sp[1].o;
	LINE_NUMBER(557);
	sp[0].o = frame[0].o;
	jfloat temp2 = (jfloat)((func_arc_util_io_Reads_f_R_float) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_util_io_Reads_f_R_float])(ctx, (frame[1].o));
	((mindustry_gen_Unit *) NULL_CHECK(sp[0].o))->F_x = temp2;
	LINE_NUMBER(558);
	sp[0].o = frame[0].o;
	jfloat temp3 = (jfloat)((func_arc_util_io_Reads_f_R_float) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_util_io_Reads_f_R_float])(ctx, (frame[1].o));
	((mindustry_gen_Unit *) NULL_CHECK(sp[0].o))->F_y = temp3;
	LINE_NUMBER(559);
	goto label_27;
	}
label_244:;
	{
	LINE_NUMBER(560);
	clinit_java_lang_IllegalArgumentException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IllegalArgumentException);
	sp[1].o = (jobject)concatStringsRecipe(ctx, u8"Unknown revision '\u0001' for entity type 'corvus'"_j.string, 1, boxShort(ctx, (frame[2].i)));
	init_java_lang_IllegalArgumentException_java_lang_String(ctx, sp[0].o, sp[1].o);
	throwException(ctx, sp[0].o);	}
label_27:;
	{
	LINE_NUMBER(563);
	((func_mindustry_gen_LegsUnit_afterRead) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_gen_LegsUnit_afterRead])(ctx, (frame[0].o));
	LINE_NUMBER(564);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_gen_LegsUnit_write_arc_util_io_Writes(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/LegsUnit:write", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(568);
	((func_arc_util_io_Writes_s_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_util_io_Writes_s_int])(ctx, (frame[1].o), (9));
	LINE_NUMBER(569);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_abilities;
	SM_mindustry_io_TypeIO_writeAbilities_arc_util_io_Writes_Array1_mindustry_entities_abilities_Ability(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(570);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((mindustry_gen_LegsUnit *) NULL_CHECK((frame[0].o)))->F_controller;
	SM_mindustry_io_TypeIO_writeController_arc_util_io_Writes_mindustry_entities_units_UnitController(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(571);
	((func_arc_util_io_Writes_f_float) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_util_io_Writes_f_float])(ctx, (frame[1].o), ((jfloat)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_elevation));
	LINE_NUMBER(572);
	((func_arc_util_io_Writes_d_double) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_util_io_Writes_d_double])(ctx, (frame[1].o), ((jdouble)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_flag));
	LINE_NUMBER(573);
	((func_arc_util_io_Writes_f_float) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_util_io_Writes_f_float])(ctx, (frame[1].o), ((jfloat)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_health));
	LINE_NUMBER(574);
	((func_arc_util_io_Writes_bool_boolean) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_util_io_Writes_bool_boolean])(ctx, (frame[1].o), ((jint)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_isShooting));
	LINE_NUMBER(575);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_mineTile;
	SM_mindustry_io_TypeIO_writeTile_arc_util_io_Writes_mindustry_world_Tile(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(576);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_mounts;
	SM_mindustry_io_TypeIO_writeMounts_arc_util_io_Writes_Array1_mindustry_entities_units_WeaponMount(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(577);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_plans;
	((func_arc_util_io_Writes_i_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_util_io_Writes_i_int])(ctx, sp[0].o, ((jint)((arc_struct_Queue *) NULL_CHECK(sp[1].o))->F_size));
	LINE_NUMBER(578);
	frame[2].i = (jint(0));
	}
label_11:;
	{
	jint temp0 = frame[2].i;
	sp[0].o = (jobject)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_plans;
	if (temp0 >= ((jint)((arc_struct_Queue *) NULL_CHECK(sp[0].o))->F_size)) goto label_12;
	}
	{
	LINE_NUMBER(579);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_plans;
	sp[1].o = (jobject)((func_arc_struct_Queue_get_int_R_java_lang_Object) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_struct_Queue_get_int_R_java_lang_Object])(ctx, sp[1].o, (frame[2].i));
	SM_mindustry_io_TypeIO_writePlan_arc_util_io_Writes_mindustry_entities_units_BuildPlan(ctx, sp[0].o, (checkCast(ctx, &class_mindustry_entities_units_BuildPlan, sp[1].o)));
	LINE_NUMBER(578);
	INST_IINC(2, 1);
	goto label_11;
	}
label_12:;
	{
	LINE_NUMBER(581);
	((func_arc_util_io_Writes_f_float) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_util_io_Writes_f_float])(ctx, (frame[1].o), ((jfloat)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_rotation));
	LINE_NUMBER(582);
	((func_arc_util_io_Writes_f_float) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_util_io_Writes_f_float])(ctx, (frame[1].o), ((jfloat)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_shield));
	LINE_NUMBER(583);
	((func_arc_util_io_Writes_bool_boolean) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_util_io_Writes_bool_boolean])(ctx, (frame[1].o), ((jint)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_spawnedByCore));
	LINE_NUMBER(584);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_stack;
	SM_mindustry_io_TypeIO_writeItems_arc_util_io_Writes_mindustry_type_ItemStack(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(585);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((mindustry_gen_LegsUnit *) NULL_CHECK((frame[0].o)))->F_statuses;
	((func_arc_util_io_Writes_i_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_util_io_Writes_i_int])(ctx, sp[0].o, ((jint)((arc_struct_Seq *) NULL_CHECK(sp[1].o))->F_size));
	LINE_NUMBER(586);
	frame[2].i = (jint(0));
	}
label_20:;
	{
	jint temp0 = frame[2].i;
	sp[0].o = (jobject)((mindustry_gen_LegsUnit *) NULL_CHECK((frame[0].o)))->F_statuses;
	if (temp0 >= ((jint)((arc_struct_Seq *) NULL_CHECK(sp[0].o))->F_size)) goto label_21;
	}
	{
	LINE_NUMBER(587);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((mindustry_gen_LegsUnit *) NULL_CHECK((frame[0].o)))->F_statuses;
	sp[1].o = (jobject)((func_arc_struct_Seq_get_int_R_java_lang_Object) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_struct_Seq_get_int_R_java_lang_Object])(ctx, sp[1].o, (frame[2].i));
	SM_mindustry_io_TypeIO_writeStatus_arc_util_io_Writes_mindustry_entities_units_StatusEntry(ctx, sp[0].o, (checkCast(ctx, &class_mindustry_entities_units_StatusEntry, sp[1].o)));
	LINE_NUMBER(586);
	INST_IINC(2, 1);
	goto label_20;
	}
label_21:;
	{
	LINE_NUMBER(589);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_team;
	SM_mindustry_io_TypeIO_writeTeam_arc_util_io_Writes_mindustry_game_Team(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(590);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_type;
	sp += 1;
	if (sp[0].o != nullptr) goto label_25;
	}
	INST_ICONST(-1);
	goto label_26;
label_25:;
	{
	sp[0].o = (jobject)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_type;
	jint temp0 = (jint)((mindustry_ctype_Content *) NULL_CHECK(sp[0].o))->F_id;
	sp[0].i = temp0;
	sp += 1;
	}
label_26:;
	{
	sp -= 2;
	((func_arc_util_io_Writes_s_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_util_io_Writes_s_int])(ctx, sp[0].o, sp[1].i);
	LINE_NUMBER(591);
	((func_arc_util_io_Writes_bool_boolean) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_util_io_Writes_bool_boolean])(ctx, (frame[1].o), ((jint)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_updateBuilding));
	LINE_NUMBER(592);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_vel;
	SM_mindustry_io_TypeIO_writeVec2_arc_util_io_Writes_arc_math_geom_Vec2(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(593);
	((func_arc_util_io_Writes_f_float) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_util_io_Writes_f_float])(ctx, (frame[1].o), ((jfloat)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_x));
	LINE_NUMBER(594);
	((func_arc_util_io_Writes_f_float) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_util_io_Writes_f_float])(ctx, (frame[1].o), ((jfloat)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_y));
	LINE_NUMBER(596);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_gen_LegsUnit_applyStatus_mindustry_type_StatusEffect_float_boolean(jcontext ctx, jobject self, jobject param0, jfloat param1, jbool param2) {
	NULL_CHECK(self);
	jtype frame[11];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/LegsUnit:applyStatus", 11 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].f = param1;
	frame[3].i = param2;
	{
	LINE_NUMBER(600);
	sp[0].o = frame[1].o;
	clinit_mindustry_content_StatusEffects(ctx);
	sp[1].o = (jobject)SF_mindustry_content_StatusEffects_none;
	if (sp[0].o == sp[1].o) goto label_1;
	}
	INST_ALOAD(1);
	if ((--sp)->o == nullptr) goto label_1;
	{
	jint temp0 = (jint)((func_mindustry_gen_LegsUnit_isImmune_mindustry_type_StatusEffect_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_gen_LegsUnit_isImmune_mindustry_type_StatusEffect_R_boolean])(ctx, (frame[0].o), (frame[1].o));
	if (temp0 == 0) goto label_2;
	}
label_1:;
	popStackFrame(ctx);
	INST_RETURN();
label_2:;
	{
	LINE_NUMBER(601);
	if ((frame[3].i) == 0) goto label_3;
	}
	{
	if ((floatCompare((frame[2].f), (jfloat(0)), -1)) != 0) goto label_3;
	}
	{
	LINE_NUMBER(602);
	jint temp0 = (jint)((func_mindustry_gen_LegsUnit_hasEffect_mindustry_type_StatusEffect_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_gen_LegsUnit_hasEffect_mindustry_type_StatusEffect_R_boolean])(ctx, (frame[0].o), (frame[1].o));
	if (temp0 == 0) goto label_5;
	}
	{
	((func_mindustry_gen_LegsUnit_unapply_mindustry_type_StatusEffect) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_gen_LegsUnit_unapply_mindustry_type_StatusEffect])(ctx, (frame[0].o), (frame[1].o));
	}
label_5:;
	LINE_NUMBER(603);
	popStackFrame(ctx);
	INST_RETURN();
label_3:;
	{
	LINE_NUMBER(605);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	jint temp0 = (jint)((func_mindustry_core_GameState_isCampaign_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_GameState_isCampaign_R_boolean])(ctx, sp[0].o);
	if (temp0 == 0) goto label_6;
	}
	{
	LINE_NUMBER(606);
	((func_mindustry_type_StatusEffect_unlock) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_type_StatusEffect_unlock])(ctx, (frame[1].o));
	}
label_6:;
	{
	LINE_NUMBER(608);
	sp[0].o = (jobject)((mindustry_gen_LegsUnit *) NULL_CHECK((frame[0].o)))->F_statuses;
	if (((jint)((arc_struct_Seq *) NULL_CHECK(sp[0].o))->F_size) <= 0) goto label_8;
	}
	{
	LINE_NUMBER(609);
	frame[4].i = (jint(0));
	}
label_10:;
	{
	jint temp0 = frame[4].i;
	sp[0].o = (jobject)((mindustry_gen_LegsUnit *) NULL_CHECK((frame[0].o)))->F_statuses;
	if (temp0 >= ((jint)((arc_struct_Seq *) NULL_CHECK(sp[0].o))->F_size)) goto label_8;
	}
	{
	LINE_NUMBER(610);
	sp[0].o = (jobject)((mindustry_gen_LegsUnit *) NULL_CHECK((frame[0].o)))->F_statuses;
	sp[0].o = (jobject)((func_arc_struct_Seq_get_int_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_get_int_R_java_lang_Object])(ctx, sp[0].o, (frame[4].i));
	frame[5].o = (checkCast(ctx, &class_mindustry_entities_units_StatusEntry, sp[0].o));
	LINE_NUMBER(611);
	sp[0].o = (jobject)((mindustry_entities_units_StatusEntry *) NULL_CHECK((frame[5].o)))->F_effect;
	if (sp[0].o != (frame[1].o)) goto label_13;
	}
	{
	LINE_NUMBER(612);
	sp[0].o = frame[5].o;
	sp += 1;
	if ((frame[3].i) == 0) goto label_15;
	}
	INST_FLOAD(2);
	goto label_16;
label_15:;
	{
	jfloat temp0 = (jfloat)SM_java_lang_Math_max_float_float_R_float(ctx, ((jfloat)((mindustry_entities_units_StatusEntry *) NULL_CHECK((frame[5].o)))->F_time), (frame[2].f));
	sp[0].f = temp0;
	sp += 1;
	}
label_16:;
	{
	sp -= 2;
	((mindustry_entities_units_StatusEntry *) NULL_CHECK(sp[0].o))->F_time = sp[1].f;
	LINE_NUMBER(613);
	((func_mindustry_type_StatusEffect_applied_mindustry_gen_Unit_float_boolean) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_type_StatusEffect_applied_mindustry_gen_Unit_float_boolean])(ctx, (frame[1].o), (frame[0].o), ((jfloat)((mindustry_entities_units_StatusEntry *) NULL_CHECK((frame[5].o)))->F_time), (jint(1)));
	LINE_NUMBER(614);
	popStackFrame(ctx);
	return;
	}
label_13:;
	{
	LINE_NUMBER(615);
	sp[0].o = (jobject)((mindustry_entities_units_StatusEntry *) NULL_CHECK((frame[5].o)))->F_effect;
	jint temp0 = (jint)((func_mindustry_type_StatusEffect_applyTransition_mindustry_gen_Unit_mindustry_type_StatusEffect_mindustry_entities_units_StatusEntry_float_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_type_StatusEffect_applyTransition_mindustry_gen_Unit_mindustry_type_StatusEffect_mindustry_entities_units_StatusEntry_float_R_boolean])(ctx, sp[0].o, (frame[0].o), (frame[1].o), (frame[5].o), (frame[2].f));
	if (temp0 == 0) goto label_19;
	}
	LINE_NUMBER(616);
	popStackFrame(ctx);
	INST_RETURN();
label_19:;
	{
	LINE_NUMBER(609);
	INST_IINC(4, 1);
	goto label_10;
	}
label_8:;
	{
	LINE_NUMBER(620);
	if (((jint)((mindustry_type_StatusEffect *) NULL_CHECK((frame[1].o)))->F_reactive) != 0) goto label_21;
	}
	{
	LINE_NUMBER(621);
	sp[0].o = ((jobject) &class_mindustry_entities_units_StatusEntry);
	{ /* InvokeDynamic */
		clinit_mindustry_gen_LegsUnit_invoke_arc_func_Prov_2(ctx);
		auto proxy = (mindustry_gen_LegsUnit_invoke_arc_func_Prov_2 *) gcAlloc(ctx, &class_mindustry_gen_LegsUnit_invoke_arc_func_Prov_2);
		sp[1].o = (jobject) proxy;
	}
	sp[0].o = (jobject)SM_arc_util_pooling_Pools_obtain_java_lang_Class_arc_func_Prov_R_java_lang_Object(ctx, sp[0].o, sp[1].o);
	frame[4].o = (checkCast(ctx, &class_mindustry_entities_units_StatusEntry, sp[0].o));
	LINE_NUMBER(622);
	((mindustry_entities_units_StatusEntry *) NULL_CHECK((frame[4].o)))->F_damageTime = (jfloat(0));
	LINE_NUMBER(623);
	sp[0].o = (jobject)((func_mindustry_entities_units_StatusEntry_set_mindustry_type_StatusEffect_float_R_mindustry_entities_units_StatusEntry) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_mindustry_entities_units_StatusEntry_set_mindustry_type_StatusEffect_float_R_mindustry_entities_units_StatusEntry])(ctx, (frame[4].o), (frame[1].o), (frame[2].f));
	LINE_NUMBER(624);
	sp[0].o = (jobject)((mindustry_gen_LegsUnit *) NULL_CHECK((frame[0].o)))->F_applied;
	((func_arc_struct_Bits_set_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Bits_set_int])(ctx, sp[0].o, ((jint)((mindustry_ctype_Content *) NULL_CHECK((frame[1].o)))->F_id));
	LINE_NUMBER(625);
	sp[0].o = (jobject)((mindustry_gen_LegsUnit *) NULL_CHECK((frame[0].o)))->F_statuses;
	sp[0].o = (jobject)((func_arc_struct_Seq_add_java_lang_Object_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_add_java_lang_Object_R_arc_struct_Seq])(ctx, sp[0].o, (frame[4].o));
	LINE_NUMBER(626);
	((func_mindustry_type_StatusEffect_applied_mindustry_gen_Unit_float_boolean) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_type_StatusEffect_applied_mindustry_gen_Unit_float_boolean])(ctx, (frame[1].o), (frame[0].o), (frame[2].f), (jint(0)));
	}
label_21:;
	LINE_NUMBER(628);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jobject M_mindustry_gen_LegsUnit_self_R_mindustry_gen_Entityc(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/LegsUnit:self", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(632);
	popStackFrame(ctx);
	return (frame[0].o);
	}

	popStackFrame(ctx);
}

jobject M_mindustry_gen_LegsUnit_as_R_java_lang_Object(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/LegsUnit:as", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(637);
	popStackFrame(ctx);
	return (frame[0].o);
	}

	popStackFrame(ctx);
}

jobject M_mindustry_gen_LegsUnit_statusColor_R_arc_graphics_Color(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[13];
	auto stack = &frame[8];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/LegsUnit:statusColor", 13 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(642);
	sp[0].o = (jobject)((mindustry_gen_LegsUnit *) NULL_CHECK((frame[0].o)))->F_statuses;
	if (((jint)((arc_struct_Seq *) NULL_CHECK(sp[0].o))->F_size) != 0) goto label_1;
	}
	{
	LINE_NUMBER(643);
	clinit_arc_util_Tmp(ctx);
	sp[0].o = (jobject)SF_arc_util_Tmp_c1;
	clinit_arc_graphics_Color(ctx);
	sp[1].o = (jobject)SF_arc_graphics_Color_white;
	sp[0].o = (jobject)((func_arc_graphics_Color_set_arc_graphics_Color_R_arc_graphics_Color) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_Color_set_arc_graphics_Color_R_arc_graphics_Color])(ctx, sp[0].o, sp[1].o);
	popStackFrame(ctx);
	return sp[0].o;
	}
label_1:;
	{
	LINE_NUMBER(645);
	frame[1].f = (jfloat(1));
	LINE_NUMBER(646);
	frame[2].f = (jfloat(1));
	LINE_NUMBER(647);
	frame[3].f = (jfloat(1));
	LINE_NUMBER(648);
	frame[4].f = (jfloat(0));
	LINE_NUMBER(649);
	sp[0].o = (jobject)((mindustry_gen_LegsUnit *) NULL_CHECK((frame[0].o)))->F_statuses;
	sp[0].o = (jobject)((func_arc_struct_Seq_iterator_R_java_util_Iterator) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_iterator_R_java_util_Iterator])(ctx, sp[0].o);
	frame[5].o = sp[0].o;
	}
label_7:;
	{
	jint temp0 = (jint)((func_java_util_Iterator_hasNext_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_hasNext_R_boolean, (frame[5].o)))(ctx, (frame[5].o));
	if (temp0 == 0) goto label_8;
	}
	{
	sp[0].o = (jobject)((func_java_util_Iterator_next_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_next_R_java_lang_Object, (frame[5].o)))(ctx, (frame[5].o));
	frame[6].o = (checkCast(ctx, &class_mindustry_entities_units_StatusEntry, sp[0].o));
	LINE_NUMBER(650);
	if ((floatCompare(((jfloat)((mindustry_entities_units_StatusEntry *) NULL_CHECK((frame[6].o)))->F_time), (jfloat(10.0f)), 1)) >= 0) goto label_10;
	}
	{
	jfloat temp0 = ((jfloat)((mindustry_entities_units_StatusEntry *) NULL_CHECK((frame[6].o)))->F_time) / (jfloat(10.0f));
	sp[0].f = temp0;
	sp += 1;
	goto label_11;
	}
label_10:;
	INST_FCONST(1);
label_11:;
	{
	sp -= 1;
	frame[7].f = sp[0].f;
	LINE_NUMBER(651);
	jfloat temp0 = frame[1].f;
	sp[0].o = (jobject)((mindustry_entities_units_StatusEntry *) NULL_CHECK((frame[6].o)))->F_effect;
	sp[0].o = (jobject)((mindustry_type_StatusEffect *) NULL_CHECK(sp[0].o))->F_color;
	frame[1].f = (temp0 + (((jfloat)((arc_graphics_Color *) NULL_CHECK(sp[0].o))->F_r) * (frame[7].f)));
	LINE_NUMBER(652);
	jfloat temp1 = frame[2].f;
	sp[0].o = (jobject)((mindustry_entities_units_StatusEntry *) NULL_CHECK((frame[6].o)))->F_effect;
	sp[0].o = (jobject)((mindustry_type_StatusEffect *) NULL_CHECK(sp[0].o))->F_color;
	frame[2].f = (temp1 + (((jfloat)((arc_graphics_Color *) NULL_CHECK(sp[0].o))->F_g) * (frame[7].f)));
	LINE_NUMBER(653);
	jfloat temp2 = frame[3].f;
	sp[0].o = (jobject)((mindustry_entities_units_StatusEntry *) NULL_CHECK((frame[6].o)))->F_effect;
	sp[0].o = (jobject)((mindustry_type_StatusEffect *) NULL_CHECK(sp[0].o))->F_color;
	frame[3].f = (temp2 + (((jfloat)((arc_graphics_Color *) NULL_CHECK(sp[0].o))->F_b) * (frame[7].f)));
	LINE_NUMBER(654);
	frame[4].f = ((frame[4].f) + (frame[7].f));
	LINE_NUMBER(655);
	goto label_7;
	}
label_8:;
	{
	LINE_NUMBER(656);
	sp[0].o = (jobject)((mindustry_gen_LegsUnit *) NULL_CHECK((frame[0].o)))->F_statuses;
	frame[5].f = ((jfloat(((jint)((arc_struct_Seq *) NULL_CHECK(sp[0].o))->F_size))) + (frame[4].f));
	LINE_NUMBER(657);
	clinit_arc_util_Tmp(ctx);
	sp[0].o = (jobject)SF_arc_util_Tmp_c1;
	sp[0].o = (jobject)((func_arc_graphics_Color_set_float_float_float_float_R_arc_graphics_Color) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_Color_set_float_float_float_float_R_arc_graphics_Color])(ctx, sp[0].o, ((frame[1].f) / (frame[5].f)), ((frame[2].f) / (frame[5].f)), ((frame[3].f) / (frame[5].f)), (jfloat(1)));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_mindustry_gen_LegsUnit_icon_R_arc_graphics_g2d_TextureRegion(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/LegsUnit:icon", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(662);
	sp[0].o = (jobject)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_type;
	sp[0].o = (jobject)((mindustry_ctype_UnlockableContent *) NULL_CHECK(sp[0].o))->F_uiIcon;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_mindustry_gen_LegsUnit_legOffset_arc_math_geom_Vec2_int_R_arc_math_geom_Vec2(jcontext ctx, jobject self, jobject param0, jint param1) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/LegsUnit:legOffset", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(667);
	sp[0].o = frame[1].o;
	jfloat temp0 = (jfloat)((func_mindustry_gen_LegsUnit_defaultLegAngle_int_R_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_gen_LegsUnit_defaultLegAngle_int_R_float])(ctx, (frame[0].o), (frame[2].i));
	sp[1].o = (jobject)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_type;
	sp[0].o = (jobject)((func_arc_math_geom_Vec2_trns_float_float_R_arc_math_geom_Vec2) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Vec2_trns_float_float_R_arc_math_geom_Vec2])(ctx, sp[0].o, temp0, ((jfloat)((mindustry_type_UnitType *) NULL_CHECK(sp[1].o))->F_legBaseOffset));
	LINE_NUMBER(668);
	sp[0].o = (jobject)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_type;
	if ((floatCompare(((jfloat)((mindustry_type_UnitType *) NULL_CHECK(sp[0].o))->F_legStraightness), (jfloat(0)), -1)) <= 0) goto label_2;
	}
	{
	LINE_NUMBER(669);
	clinit_mindustry_gen_LegsUnit(ctx);
	sp[0].o = (jobject)SF_mindustry_gen_LegsUnit_straightVec;
	jfloat temp0 = (jfloat)((func_mindustry_gen_LegsUnit_defaultLegAngle_int_R_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_gen_LegsUnit_defaultLegAngle_int_R_float])(ctx, (frame[0].o), (frame[2].i));
	jfloat temp1 = temp0 - ((jfloat)((mindustry_gen_LegsUnit *) NULL_CHECK((frame[0].o)))->F_baseRotation);
	sp[1].o = (jobject)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_type;
	sp[0].o = (jobject)((func_arc_math_geom_Vec2_trns_float_float_R_arc_math_geom_Vec2) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Vec2_trns_float_float_R_arc_math_geom_Vec2])(ctx, sp[0].o, temp1, ((jfloat)((mindustry_type_UnitType *) NULL_CHECK(sp[1].o))->F_legBaseOffset));
	LINE_NUMBER(670);
	clinit_mindustry_gen_LegsUnit(ctx);
	sp[0].o = (jobject)SF_mindustry_gen_LegsUnit_straightVec;
	clinit_mindustry_gen_LegsUnit(ctx);
	sp[1].o = (jobject)SF_mindustry_gen_LegsUnit_straightVec;
	jint temp2 = (jint)SM_arc_math_Mathf_sign_float_R_int(ctx, ((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK(sp[1].o))->F_y));
	jfloat temp3 = jfloat(temp2);
	sp[1].o = (jobject)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_type;
	jfloat temp4 = temp3 * ((jfloat)((mindustry_type_UnitType *) NULL_CHECK(sp[1].o))->F_legBaseOffset);
	sp[1].o = (jobject)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_type;
	((arc_math_geom_Vec2 *) NULL_CHECK(sp[0].o))->F_y = (temp4 * ((jfloat)((mindustry_type_UnitType *) NULL_CHECK(sp[1].o))->F_legStraightLength));
	LINE_NUMBER(671);
	clinit_mindustry_gen_LegsUnit(ctx);
	sp[0].o = (jobject)SF_mindustry_gen_LegsUnit_straightVec;
	sp[0].o = (jobject)((func_arc_math_geom_Vec2_rotate_float_R_arc_math_geom_Vec2) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Vec2_rotate_float_R_arc_math_geom_Vec2])(ctx, sp[0].o, ((jfloat)((mindustry_gen_LegsUnit *) NULL_CHECK((frame[0].o)))->F_baseRotation));
	LINE_NUMBER(672);
	sp[0].o = frame[1].o;
	clinit_mindustry_gen_LegsUnit(ctx);
	sp[1].o = (jobject)SF_mindustry_gen_LegsUnit_straightVec;
	sp[2].o = (jobject)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_type;
	sp[0].o = (jobject)((func_arc_math_geom_Vec2_lerp_arc_math_geom_Vec2_float_R_arc_math_geom_Vec2) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Vec2_lerp_arc_math_geom_Vec2_float_R_arc_math_geom_Vec2])(ctx, sp[0].o, sp[1].o, ((jfloat)((mindustry_type_UnitType *) NULL_CHECK(sp[2].o))->F_baseLegStraightness));
	}
label_2:;
	{
	LINE_NUMBER(674);
	popStackFrame(ctx);
	return (frame[1].o);
	}

	popStackFrame(ctx);
}

jobject M_mindustry_gen_LegsUnit_statusBits_R_arc_struct_Bits(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/LegsUnit:statusBits", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(679);
	sp[0].o = (jobject)((mindustry_gen_LegsUnit *) NULL_CHECK((frame[0].o)))->F_applied;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jbool M_mindustry_gen_LegsUnit_acceptsItem_mindustry_type_Item_R_boolean(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/LegsUnit:acceptsItem", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(684);
	jint temp0 = (jint)((func_mindustry_gen_LegsUnit_hasItem_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_gen_LegsUnit_hasItem_R_boolean])(ctx, (frame[0].o));
	if (temp0 == 0) goto label_1;
	}
	{
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_stack;
	sp[1].o = (jobject)((mindustry_type_ItemStack *) NULL_CHECK(sp[1].o))->F_item;
	if (sp[0].o != sp[1].o) goto label_2;
	}
	{
	sp[0].o = (jobject)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_stack;
	jint temp0 = ((jint)((mindustry_type_ItemStack *) NULL_CHECK(sp[0].o))->F_amount) + (jint(1));
	jint temp1 = (jint)((func_mindustry_gen_LegsUnit_itemCapacity_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_gen_LegsUnit_itemCapacity_R_int])(ctx, (frame[0].o));
	if (temp0 > temp1) goto label_2;
	}
label_1:;
	INST_ICONST(1);
	goto label_3;
label_2:;
	INST_ICONST(0);
label_3:;
	popStackFrame(ctx);
	INST_IRETURN();

	popStackFrame(ctx);
}

jbool M_mindustry_gen_LegsUnit_activelyBuilding_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/LegsUnit:activelyBuilding", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(689);
	jint temp0 = (jint)((func_mindustry_gen_LegsUnit_isBuilding_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_gen_LegsUnit_isBuilding_R_boolean])(ctx, (frame[0].o));
	if (temp0 == 0) goto label_1;
	}
	{
	LINE_NUMBER(690);
	sp[0].o = (jobject)((func_mindustry_gen_LegsUnit_buildPlan_R_mindustry_entities_units_BuildPlan) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_gen_LegsUnit_buildPlan_R_mindustry_entities_units_BuildPlan])(ctx, (frame[0].o));
	frame[1].o = sp[0].o;
	LINE_NUMBER(691);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	jint temp0 = (jint)((func_mindustry_core_GameState_isEditor_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_GameState_isEditor_R_boolean])(ctx, sp[0].o);
	if (temp0 != 0) goto label_1;
	}
	INST_ALOAD(1);
	if ((--sp)->o == nullptr) goto label_1;
	{
	sp[0].o = frame[0].o;
	sp[1].o = frame[1].o;
	clinit_mindustry_Vars(ctx);
	sp[2].o = (jobject)SF_mindustry_Vars_state;
	sp[2].o = (jobject)((mindustry_core_GameState *) NULL_CHECK(sp[2].o))->F_rules;
	sp += 2;
	if (((jint)((mindustry_game_Rules *) NULL_CHECK(sp[0].o))->F_infiniteResources) == 0) goto label_4;
	}
	(sp++)->f = jfloat(3,402823e+38f);
	goto label_5;
label_4:;
	{
	sp[0].o = (jobject)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_type;
	jfloat temp0 = (jfloat)((mindustry_type_UnitType *) NULL_CHECK(sp[0].o))->F_buildRange;
	sp[0].f = temp0;
	sp += 1;
	}
label_5:;
	POP_N(3); // Pop method args
	sp->i = (jint)((func_mindustry_gen_LegsUnit_within_arc_math_geom_Position_float_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_gen_LegsUnit_within_arc_math_geom_Position_float_R_boolean])(ctx, sp[0].o, sp[1].o, sp[2].f);
	sp++;
	if ((--sp)->i != 0) goto label_1;
	{
	LINE_NUMBER(692);
	popStackFrame(ctx);
	return (jint(0));
	}
label_1:;
	{
	LINE_NUMBER(695);
	jint temp0 = (jint)((func_mindustry_gen_LegsUnit_isBuilding_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_gen_LegsUnit_isBuilding_R_boolean])(ctx, (frame[0].o));
	if (temp0 == 0) goto label_7;
	}
	{
	if (((jint)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_updateBuilding) == 0) goto label_7;
	}
	INST_ICONST(1);
	goto label_8;
label_7:;
	INST_ICONST(0);
label_8:;
	popStackFrame(ctx);
	INST_IRETURN();

	popStackFrame(ctx);
}

jbool M_mindustry_gen_LegsUnit_allowCommand_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/LegsUnit:allowCommand", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(700);
	sp[0].o = (jobject)((mindustry_gen_LegsUnit *) NULL_CHECK((frame[0].o)))->F_controller;
	popStackFrame(ctx);
	return (isInstance(ctx, sp[0].o, &class_mindustry_ai_types_CommandAI));
	}

	popStackFrame(ctx);
}

jbool M_mindustry_gen_LegsUnit_canBuild_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/LegsUnit:canBuild", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(705);
	sp[0].o = (jobject)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_type;
	if ((floatCompare(((jfloat)((mindustry_type_UnitType *) NULL_CHECK(sp[0].o))->F_buildSpeed), (jfloat(0)), -1)) <= 0) goto label_1;
	}
	{
	if ((floatCompare(((jfloat)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_buildSpeedMultiplier), (jfloat(0)), -1)) <= 0) goto label_1;
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

jbool M_mindustry_gen_LegsUnit_canDrown_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/LegsUnit:canDrown", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(710);
	jint temp0 = (jint)((func_mindustry_gen_LegsUnit_isGrounded_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_gen_LegsUnit_isGrounded_R_boolean])(ctx, (frame[0].o));
	if (temp0 == 0) goto label_1;
	}
	{
	sp[0].o = (jobject)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_type;
	if (((jint)((mindustry_type_UnitType *) NULL_CHECK(sp[0].o))->F_canDrown) == 0) goto label_1;
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

jbool M_mindustry_gen_LegsUnit_canLand_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/LegsUnit:canLand", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(715);
	jfloat temp0 = (jfloat)((func_mindustry_gen_LegsUnit_physicSize_R_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_gen_LegsUnit_physicSize_R_float])(ctx, (frame[0].o));
	frame[1].f = temp0;
	LINE_NUMBER(716);
	jint temp1 = (jint)((func_mindustry_gen_LegsUnit_onSolid_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_gen_LegsUnit_onSolid_R_boolean])(ctx, (frame[0].o));
	if (temp1 != 0) goto label_2;
	}
	{
	jfloat temp0 = ((jfloat)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_x) - ((frame[1].f) / (jfloat(2)));
	jfloat temp1 = ((jfloat)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_y) - ((frame[1].f) / (jfloat(2)));
	jfloat temp2 = frame[1].f;
	jfloat temp3 = frame[1].f;
	{ /* InvokeDynamic */
		clinit_mindustry_gen_LegsUnit_invoke_arc_func_Boolf_10(ctx);
		auto proxy = (mindustry_gen_LegsUnit_invoke_arc_func_Boolf_10 *) gcAlloc(ctx, &class_mindustry_gen_LegsUnit_invoke_arc_func_Boolf_10);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[0].o = (jobject) proxy;
	}
	jint temp4 = (jint)SM_mindustry_entities_Units_any_float_float_float_float_arc_func_Boolf_R_boolean(ctx, temp0, temp1, temp2, temp3, sp[0].o);
	if (temp4 != 0) goto label_2;
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

jbool M_mindustry_gen_LegsUnit_canMine_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/LegsUnit:canMine", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(721);
	sp[0].o = (jobject)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_type;
	jfloat temp0 = (jfloat)((mindustry_type_UnitType *) NULL_CHECK(sp[0].o))->F_mineSpeed;
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	sp[0].o = (jobject)((mindustry_core_GameState *) NULL_CHECK(sp[0].o))->F_rules;
	sp[1].o = (jobject)((func_mindustry_gen_LegsUnit_team_R_mindustry_game_Team) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_gen_LegsUnit_team_R_mindustry_game_Team])(ctx, (frame[0].o));
	jfloat temp1 = (jfloat)((func_mindustry_game_Rules_unitMineSpeed_mindustry_game_Team_R_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_game_Rules_unitMineSpeed_mindustry_game_Team_R_float])(ctx, sp[0].o, sp[1].o);
	if ((floatCompare((temp0 * temp1), (jfloat(0)), -1)) <= 0) goto label_1;
	}
	{
	sp[0].o = (jobject)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_type;
	if (((jint)((mindustry_type_UnitType *) NULL_CHECK(sp[0].o))->F_mineTier) < 0) goto label_1;
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

jbool M_mindustry_gen_LegsUnit_canMine_mindustry_type_Item_R_boolean(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/LegsUnit:canMine", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(726);
	if ((frame[1].o) != nullptr) goto label_1;
	}
	INST_ICONST(0);
	popStackFrame(ctx);
	INST_IRETURN();
label_1:;
	{
	LINE_NUMBER(727);
	sp[0].o = (jobject)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_type;
	if (((jint)((mindustry_type_UnitType *) NULL_CHECK(sp[0].o))->F_mineTier) < ((jint)((mindustry_type_Item *) NULL_CHECK((frame[1].o)))->F_hardness)) goto label_2;
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

jbool M_mindustry_gen_LegsUnit_canPass_int_int_R_boolean(jcontext ctx, jobject self, jint param0, jint param1) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/LegsUnit:canPass", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(732);
	sp[0].o = (jobject)((func_mindustry_gen_LegsUnit_solidity_R_mindustry_entities_EntityCollisions$SolidPred) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_gen_LegsUnit_solidity_R_mindustry_entities_EntityCollisions$SolidPred])(ctx, (frame[0].o));
	frame[3].o = sp[0].o;
	LINE_NUMBER(733);
	if ((frame[3].o) == nullptr) goto label_2;
	}
	{
	jint temp0 = (jint)((func_mindustry_entities_EntityCollisions$SolidPred_solid_int_int_R_boolean) resolveInterfaceMethod(ctx, &class_mindustry_entities_EntityCollisions$SolidPred, INDEX_mindustry_entities_EntityCollisions$SolidPred_solid_int_int_R_boolean, (frame[3].o)))(ctx, (frame[3].o), (frame[1].i), (frame[2].i));
	if (temp0 != 0) goto label_3;
	}
label_2:;
	INST_ICONST(1);
	goto label_4;
label_3:;
	INST_ICONST(0);
label_4:;
	popStackFrame(ctx);
	INST_IRETURN();

	popStackFrame(ctx);
}

jbool M_mindustry_gen_LegsUnit_canPassOn_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/LegsUnit:canPassOn", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(738);
	sp[0].o = frame[0].o;
	jint temp0 = (jint)((func_mindustry_gen_LegsUnit_tileX_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_gen_LegsUnit_tileX_R_int])(ctx, (frame[0].o));
	jint temp1 = (jint)((func_mindustry_gen_LegsUnit_tileY_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_gen_LegsUnit_tileY_R_int])(ctx, (frame[0].o));
	jint temp2 = (jint)((func_mindustry_gen_LegsUnit_canPass_int_int_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_gen_LegsUnit_canPass_int_int_R_boolean])(ctx, sp[0].o, temp0, temp1);
	popStackFrame(ctx);
	return temp2;
	}

	popStackFrame(ctx);
}

jbool M_mindustry_gen_LegsUnit_canShoot_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/LegsUnit:canShoot", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(743);
	if (((jint)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_disarmed) != 0) goto label_1;
	}
	{
	sp[0].o = (jobject)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_type;
	if (((jint)((mindustry_type_UnitType *) NULL_CHECK(sp[0].o))->F_canBoost) == 0) goto label_2;
	}
	{
	jint temp0 = (jint)((func_mindustry_gen_LegsUnit_isFlying_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_gen_LegsUnit_isFlying_R_boolean])(ctx, (frame[0].o));
	if (temp0 != 0) goto label_1;
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

jbool M_mindustry_gen_LegsUnit_canTarget_mindustry_gen_Teamc_R_boolean(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/LegsUnit:canTarget", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(748);
	if ((frame[1].o) == nullptr) goto label_1;
	}
	{
	if ((isInstance(ctx, (frame[1].o), &class_mindustry_gen_Unit)) == 0) goto label_2;
	}
	{
	frame[3].o = (checkCast(ctx, &class_mindustry_gen_Unit, (frame[1].o)));
	sp[0].o = frame[3].o;
	sp[1].o = (jobject)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_type;
	jint temp0 = (jint)((mindustry_type_UnitType *) NULL_CHECK(sp[1].o))->F_targetAir;
	sp[1].o = (jobject)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_type;
	jint temp1 = (jint)((func_mindustry_gen_Unit_checkTarget_boolean_boolean_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_gen_Unit_checkTarget_boolean_boolean_R_boolean])(ctx, sp[0].o, temp0, ((jint)((mindustry_type_UnitType *) NULL_CHECK(sp[1].o))->F_targetGround));
	if (temp1 == 0) goto label_1;
	}
	goto label_4;
label_2:;
	{
	if ((isInstance(ctx, (frame[1].o), &class_mindustry_gen_Building)) == 0) goto label_1;
	}
	{
	frame[2].o = (checkCast(ctx, &class_mindustry_gen_Building, (frame[1].o)));
	sp[0].o = (jobject)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_type;
	if (((jint)((mindustry_type_UnitType *) NULL_CHECK(sp[0].o))->F_targetGround) == 0) goto label_1;
	}
label_4:;
	INST_ICONST(1);
	goto label_6;
label_1:;
	INST_ICONST(0);
label_6:;
	popStackFrame(ctx);
	INST_IRETURN();

	popStackFrame(ctx);
}

jbool M_mindustry_gen_LegsUnit_cheating_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/LegsUnit:cheating", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(753);
	sp[0].o = (jobject)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_team;
	sp[0].o = (jobject)((func_mindustry_game_Team_rules_R_mindustry_game_Rules$TeamRule) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_game_Team_rules_R_mindustry_game_Rules$TeamRule])(ctx, sp[0].o);
	popStackFrame(ctx);
	return ((jint)((mindustry_game_Rules$TeamRule *) NULL_CHECK(sp[0].o))->F_cheat);
	}

	popStackFrame(ctx);
}

jbool M_mindustry_gen_LegsUnit_checkTarget_boolean_boolean_R_boolean(jcontext ctx, jobject self, jbool param0, jbool param1) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/LegsUnit:checkTarget", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(758);
	jint temp0 = (jint)((func_mindustry_gen_LegsUnit_isGrounded_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_gen_LegsUnit_isGrounded_R_boolean])(ctx, (frame[0].o));
	if (temp0 == 0) goto label_1;
	}
	INST_ILOAD(2);
	if ((--sp)->i != 0) goto label_2;
label_1:;
	{
	jint temp0 = (jint)((func_mindustry_gen_LegsUnit_isFlying_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_gen_LegsUnit_isFlying_R_boolean])(ctx, (frame[0].o));
	if (temp0 == 0) goto label_3;
	}
	INST_ILOAD(1);
	if ((--sp)->i == 0) goto label_3;
label_2:;
	INST_ICONST(1);
	goto label_4;
label_3:;
	INST_ICONST(0);
label_4:;
	popStackFrame(ctx);
	INST_IRETURN();

	popStackFrame(ctx);
}

jbool M_mindustry_gen_LegsUnit_collides_mindustry_gen_Hitboxc_R_boolean(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/LegsUnit:collides", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(763);
	jint temp0 = (jint)((func_mindustry_gen_LegsUnit_hittable_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_gen_LegsUnit_hittable_R_boolean])(ctx, (frame[0].o));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jbool M_mindustry_gen_LegsUnit_damaged_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/LegsUnit:damaged", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(768);
	if ((floatCompare(((jfloat)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_health), (((jfloat)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_maxHealth) - (jfloat(1,000000e-03f))), 1)) >= 0) goto label_1;
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

jbool M_mindustry_gen_LegsUnit_displayable_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/LegsUnit:displayable", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(773);
	sp[0].o = (jobject)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_type;
	popStackFrame(ctx);
	return ((jint)((mindustry_type_UnitType *) NULL_CHECK(sp[0].o))->F_hoverable);
	}

	popStackFrame(ctx);
}

jbool M_mindustry_gen_LegsUnit_hasEffect_mindustry_type_StatusEffect_R_boolean(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/LegsUnit:hasEffect", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(778);
	sp[0].o = (jobject)((mindustry_gen_LegsUnit *) NULL_CHECK((frame[0].o)))->F_applied;
	jint temp0 = (jint)((func_arc_struct_Bits_get_int_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Bits_get_int_R_boolean])(ctx, sp[0].o, ((jint)((mindustry_ctype_Content *) NULL_CHECK((frame[1].o)))->F_id));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jbool M_mindustry_gen_LegsUnit_hasItem_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/LegsUnit:hasItem", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(783);
	sp[0].o = (jobject)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_stack;
	if (((jint)((mindustry_type_ItemStack *) NULL_CHECK(sp[0].o))->F_amount) <= 0) goto label_1;
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

jbool M_mindustry_gen_LegsUnit_hasWeapons_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/LegsUnit:hasWeapons", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(788);
	sp[0].o = (jobject)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_type;
	jint temp0 = (jint)((func_mindustry_type_UnitType_hasWeapons_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_type_UnitType_hasWeapons_R_boolean])(ctx, sp[0].o);
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jbool M_mindustry_gen_LegsUnit_hittable_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/LegsUnit:hittable", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(793);
	sp[0].o = (jobject)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_type;
	jint temp0 = (jint)((func_mindustry_type_UnitType_hittable_mindustry_gen_Unit_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_type_UnitType_hittable_mindustry_gen_Unit_R_boolean])(ctx, sp[0].o, (frame[0].o));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jbool M_mindustry_gen_LegsUnit_ignoreSolids_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/LegsUnit:ignoreSolids", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(798);
	popStackFrame(ctx);
	return (jint(0));
	}

	popStackFrame(ctx);
}

jbool M_mindustry_gen_LegsUnit_inFogTo_mindustry_game_Team_R_boolean(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[13];
	auto stack = &frame[7];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/LegsUnit:inFogTo", 13 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(803);
	sp[0].o = (jobject)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_team;
	if (sp[0].o == (frame[1].o)) goto label_1;
	}
	{
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	sp[0].o = (jobject)((mindustry_core_GameState *) NULL_CHECK(sp[0].o))->F_rules;
	if (((jint)((mindustry_game_Rules *) NULL_CHECK(sp[0].o))->F_fog) != 0) goto label_2;
	}
label_1:;
	INST_ICONST(0);
	popStackFrame(ctx);
	INST_IRETURN();
label_2:;
	{
	LINE_NUMBER(804);
	if ((floatCompare(((jfloat)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_hitSize), (jfloat(16.0f)), 1)) > 0) goto label_3;
	}
	{
	LINE_NUMBER(805);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_fogControl;
	jint temp0 = (jint)((func_mindustry_game_FogControl_isVisible_mindustry_game_Team_float_float_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_game_FogControl_isVisible_mindustry_game_Team_float_float_R_boolean])(ctx, sp[0].o, (frame[1].o), ((jfloat)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_x), ((jfloat)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_y));
	if (temp0 != 0) goto label_5;
	}
	INST_ICONST(1);
	goto label_6;
label_5:;
	INST_ICONST(0);
label_6:;
	popStackFrame(ctx);
	INST_IRETURN();
label_3:;
	{
	LINE_NUMBER(807);
	frame[2].f = (((jfloat)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_hitSize) / (jfloat(2)));
	LINE_NUMBER(808);
	clinit_arc_math_geom_Geometry(ctx);
	sp[0].o = (jobject)SF_arc_math_geom_Geometry_d8;
	frame[3].o = sp[0].o;
	frame[4].i = (((jarray) nullCheck(ctx, (frame[3].o)))->length);
	frame[5].i = (jint(0));
	}
label_8:;
	{
	if ((frame[5].i) >= (frame[4].i)) goto label_9;
	}
	{
	frame[6].o = ((jobject)ARRAY_ACCESS(jobject, (frame[3].o), (frame[5].i)));
	LINE_NUMBER(809);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_fogControl;
	jint temp0 = (jint)((func_mindustry_game_FogControl_isVisible_mindustry_game_Team_float_float_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_game_FogControl_isVisible_mindustry_game_Team_float_float_R_boolean])(ctx, sp[0].o, (frame[1].o), (((jfloat)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_x) + ((jfloat(((jint)((arc_math_geom_Point2 *) NULL_CHECK((frame[6].o)))->F_x))) * (frame[2].f))), (((jfloat)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_y) + ((jfloat(((jint)((arc_math_geom_Point2 *) NULL_CHECK((frame[6].o)))->F_y))) * (frame[2].f))));
	if (temp0 == 0) goto label_11;
	}
	{
	LINE_NUMBER(810);
	popStackFrame(ctx);
	return (jint(0));
	}
label_11:;
	{
	LINE_NUMBER(808);
	INST_IINC(5, 1);
	goto label_8;
	}
label_9:;
	{
	LINE_NUMBER(814);
	popStackFrame(ctx);
	return (jint(1));
	}

	popStackFrame(ctx);
}

jbool M_mindustry_gen_LegsUnit_inRange_arc_math_geom_Position_R_boolean(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/LegsUnit:inRange", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(819);
	sp[0].o = frame[0].o;
	sp[1].o = frame[1].o;
	sp[2].o = (jobject)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_type;
	jint temp0 = (jint)((func_mindustry_gen_LegsUnit_within_arc_math_geom_Position_float_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_gen_LegsUnit_within_arc_math_geom_Position_float_R_boolean])(ctx, sp[0].o, sp[1].o, ((jfloat)((mindustry_type_UnitType *) NULL_CHECK(sp[2].o))->F_range));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jbool M_mindustry_gen_LegsUnit_isAI_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/LegsUnit:isAI", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(824);
	sp[0].o = (jobject)((mindustry_gen_LegsUnit *) NULL_CHECK((frame[0].o)))->F_controller;
	popStackFrame(ctx);
	return (isInstance(ctx, sp[0].o, &class_mindustry_entities_units_AIController));
	}

	popStackFrame(ctx);
}

jbool M_mindustry_gen_LegsUnit_isAdded_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/LegsUnit:isAdded", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(829);
	popStackFrame(ctx);
	return ((jint)((mindustry_gen_LegsUnit *) NULL_CHECK((frame[0].o)))->F_added);
	}

	popStackFrame(ctx);
}

jbool M_mindustry_gen_LegsUnit_isBoss_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/LegsUnit:isBoss", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(834);
	sp[0].o = frame[0].o;
	clinit_mindustry_content_StatusEffects(ctx);
	sp[1].o = (jobject)SF_mindustry_content_StatusEffects_boss;
	jint temp0 = (jint)((func_mindustry_gen_LegsUnit_hasEffect_mindustry_type_StatusEffect_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_gen_LegsUnit_hasEffect_mindustry_type_StatusEffect_R_boolean])(ctx, sp[0].o, sp[1].o);
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jbool M_mindustry_gen_LegsUnit_isBuilding_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/LegsUnit:isBuilding", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(839);
	sp[0].o = (jobject)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_plans;
	if (((jint)((arc_struct_Queue *) NULL_CHECK(sp[0].o))->F_size) == 0) goto label_1;
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

jbool M_mindustry_gen_LegsUnit_isCommandable_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/LegsUnit:isCommandable", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(844);
	sp[0].o = (jobject)((mindustry_gen_LegsUnit *) NULL_CHECK((frame[0].o)))->F_controller;
	popStackFrame(ctx);
	return (isInstance(ctx, sp[0].o, &class_mindustry_ai_types_CommandAI));
	}

	popStackFrame(ctx);
}

jbool M_mindustry_gen_LegsUnit_isEnemy_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/LegsUnit:isEnemy", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(849);
	sp[0].o = (jobject)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_type;
	popStackFrame(ctx);
	return ((jint)((mindustry_type_UnitType *) NULL_CHECK(sp[0].o))->F_isEnemy);
	}

	popStackFrame(ctx);
}

jbool M_mindustry_gen_LegsUnit_isFlying_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/LegsUnit:isFlying", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(854);
	if ((floatCompare(((jfloat)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_elevation), (jfloat(0.09f)), -1)) < 0) goto label_1;
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

jbool M_mindustry_gen_LegsUnit_isGrounded_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/LegsUnit:isGrounded", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(859);
	if ((floatCompare(((jfloat)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_elevation), (jfloat(1,000000e-03f)), 1)) >= 0) goto label_1;
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

jbool M_mindustry_gen_LegsUnit_isImmune_mindustry_type_StatusEffect_R_boolean(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/LegsUnit:isImmune", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(864);
	sp[0].o = (jobject)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_type;
	sp[0].o = (jobject)((mindustry_type_UnitType *) NULL_CHECK(sp[0].o))->F_immunities;
	jint temp0 = (jint)((func_arc_struct_ObjectSet_contains_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectSet_contains_java_lang_Object_R_boolean])(ctx, sp[0].o, (frame[1].o));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jbool M_mindustry_gen_LegsUnit_isLocal_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/LegsUnit:isLocal", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(869);
	sp[0].o = frame[0].o;
	clinit_mindustry_Vars(ctx);
	sp[1].o = (jobject)SF_mindustry_Vars_player;
	if (sp[0].o == sp[1].o) goto label_1;
	}
	{
	frame[2].o = (frame[0].o);
	if ((isInstance(ctx, (frame[2].o), &class_mindustry_gen_Unitc)) == 0) goto label_2;
	}
	{
	frame[1].o = (checkCast(ctx, &class_mindustry_gen_Unitc, (frame[2].o)));
	sp[0].o = (jobject)((func_mindustry_gen_Unitc_controller_R_mindustry_entities_units_UnitController) resolveInterfaceMethod(ctx, &class_mindustry_gen_Unitc, INDEX_mindustry_gen_Unitc_controller_R_mindustry_entities_units_UnitController, (frame[1].o)))(ctx, (frame[1].o));
	clinit_mindustry_Vars(ctx);
	sp[1].o = (jobject)SF_mindustry_Vars_player;
	if (sp[0].o != sp[1].o) goto label_2;
	}
label_1:;
	INST_ICONST(1);
	goto label_4;
label_2:;
	INST_ICONST(0);
label_4:;
	popStackFrame(ctx);
	INST_IRETURN();

	popStackFrame(ctx);
}

jbool M_mindustry_gen_LegsUnit_isMissile_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/LegsUnit:isMissile", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(874);
	popStackFrame(ctx);
	return (isInstance(ctx, (frame[0].o), &class_mindustry_gen_TimedKillc));
	}

	popStackFrame(ctx);
}

jbool M_mindustry_gen_LegsUnit_isPathImpassable_int_int_R_boolean(jcontext ctx, jobject self, jint param0, jint param1) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/LegsUnit:isPathImpassable", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(879);
	sp[0].o = (jobject)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_type;
	if (((jint)((mindustry_type_UnitType *) NULL_CHECK(sp[0].o))->F_flying) != 0) goto label_1;
	}
	{
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_world;
	sp[0].o = (jobject)((mindustry_core_World *) NULL_CHECK(sp[0].o))->F_tiles;
	jint temp0 = (jint)((func_mindustry_world_Tiles_in_int_int_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_Tiles_in_int_int_R_boolean])(ctx, sp[0].o, (frame[1].i), (frame[2].i));
	if (temp0 == 0) goto label_1;
	}
	{
	sp[0].o = (jobject)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_type;
	sp[0].o = (jobject)((mindustry_type_UnitType *) NULL_CHECK(sp[0].o))->F_pathCost;
	sp[1].o = (jobject)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_team;
	jint temp0 = (jint)((mindustry_game_Team *) NULL_CHECK(sp[1].o))->F_id;
	clinit_mindustry_Vars(ctx);
	sp[1].o = (jobject)SF_mindustry_Vars_pathfinder;
	jint temp1 = (jint)((func_mindustry_ai_Pathfinder_get_int_int_R_int) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_mindustry_ai_Pathfinder_get_int_int_R_int])(ctx, sp[1].o, (frame[1].i), (frame[2].i));
	jint temp2 = (jint)((func_mindustry_ai_Pathfinder$PathCost_getCost_int_int_R_int) resolveInterfaceMethod(ctx, &class_mindustry_ai_Pathfinder$PathCost, INDEX_mindustry_ai_Pathfinder$PathCost_getCost_int_int_R_int, sp[0].o))(ctx, sp[0].o, temp0, temp1);
	if (temp2 != (jint(-1))) goto label_1;
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

jbool M_mindustry_gen_LegsUnit_isPlayer_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/LegsUnit:isPlayer", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(884);
	sp[0].o = (jobject)((mindustry_gen_LegsUnit *) NULL_CHECK((frame[0].o)))->F_controller;
	popStackFrame(ctx);
	return (isInstance(ctx, sp[0].o, &class_mindustry_gen_Player));
	}

	popStackFrame(ctx);
}

jbool M_mindustry_gen_LegsUnit_isRemote_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/LegsUnit:isRemote", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(889);
	frame[2].o = (frame[0].o);
	if ((isInstance(ctx, (frame[2].o), &class_mindustry_gen_Unitc)) == 0) goto label_1;
	}
	{
	frame[1].o = (checkCast(ctx, &class_mindustry_gen_Unitc, (frame[2].o)));
	jint temp0 = (jint)((func_mindustry_gen_Unitc_isPlayer_R_boolean) resolveInterfaceMethod(ctx, &class_mindustry_gen_Unitc, INDEX_mindustry_gen_Unitc_isPlayer_R_boolean, (frame[1].o)))(ctx, (frame[1].o));
	if (temp0 == 0) goto label_1;
	}
	{
	jint temp0 = (jint)((func_mindustry_gen_LegsUnit_isLocal_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_gen_LegsUnit_isLocal_R_boolean])(ctx, (frame[0].o));
	if (temp0 != 0) goto label_1;
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

jbool M_mindustry_gen_LegsUnit_isSyncHidden_mindustry_game_Team_R_boolean(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/LegsUnit:isSyncHidden", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(894);
	jint temp0 = (jint)((func_mindustry_gen_LegsUnit_isShooting_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_gen_LegsUnit_isShooting_R_boolean])(ctx, (frame[0].o));
	if (temp0 != 0) goto label_1;
	}
	{
	jint temp0 = (jint)((func_mindustry_gen_LegsUnit_inFogTo_mindustry_game_Team_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_gen_LegsUnit_inFogTo_mindustry_game_Team_R_boolean])(ctx, (frame[0].o), (frame[1].o));
	if (temp0 == 0) goto label_1;
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

jbool M_mindustry_gen_LegsUnit_isValid_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/LegsUnit:isValid", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(899);
	if (((jint)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_dead) != 0) goto label_1;
	}
	{
	jint temp0 = (jint)((func_mindustry_gen_LegsUnit_isAdded_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_gen_LegsUnit_isAdded_R_boolean])(ctx, (frame[0].o));
	if (temp0 == 0) goto label_1;
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

jbool M_mindustry_gen_LegsUnit_killable_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/LegsUnit:killable", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(904);
	sp[0].o = (jobject)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_type;
	jint temp0 = (jint)((func_mindustry_type_UnitType_killable_mindustry_gen_Unit_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_type_UnitType_killable_mindustry_gen_Unit_R_boolean])(ctx, sp[0].o, (frame[0].o));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jbool M_mindustry_gen_LegsUnit_mining_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/LegsUnit:mining", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(909);
	sp[0].o = (jobject)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_mineTile;
	if (sp[0].o == nullptr) goto label_1;
	}
	{
	jint temp0 = (jint)((func_mindustry_gen_LegsUnit_activelyBuilding_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_gen_LegsUnit_activelyBuilding_R_boolean])(ctx, (frame[0].o));
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

jbool M_mindustry_gen_LegsUnit_moving_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/LegsUnit:moving", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(914);
	sp[0].o = (jobject)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_vel;
	jint temp0 = (jint)((func_arc_math_geom_Vec2_isZero_float_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Vec2_isZero_float_R_boolean])(ctx, sp[0].o, (jfloat(1,000000e-02f)));
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

jbool M_mindustry_gen_LegsUnit_offloadImmediately_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/LegsUnit:offloadImmediately", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(919);
	jint temp0 = (jint)((func_mindustry_gen_LegsUnit_isPlayer_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_gen_LegsUnit_isPlayer_R_boolean])(ctx, (frame[0].o));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jbool M_mindustry_gen_LegsUnit_onSolid_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/LegsUnit:onSolid", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(924);
	sp[0].o = (jobject)((func_mindustry_gen_LegsUnit_tileOn_R_mindustry_world_Tile) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_gen_LegsUnit_tileOn_R_mindustry_world_Tile])(ctx, (frame[0].o));
	frame[1].o = sp[0].o;
	LINE_NUMBER(925);
	if ((frame[1].o) == nullptr) goto label_2;
	}
	{
	jint temp0 = (jint)((func_mindustry_world_Tile_solid_R_boolean) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_world_Tile_solid_R_boolean])(ctx, (frame[1].o));
	if (temp0 == 0) goto label_3;
	}
label_2:;
	INST_ICONST(1);
	goto label_4;
label_3:;
	INST_ICONST(0);
label_4:;
	popStackFrame(ctx);
	INST_IRETURN();

	popStackFrame(ctx);
}

jbool M_mindustry_gen_LegsUnit_playerControllable_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/LegsUnit:playerControllable", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(930);
	sp[0].o = (jobject)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_type;
	if (((jint)((mindustry_type_UnitType *) NULL_CHECK(sp[0].o))->F_playerControllable) == 0) goto label_1;
	}
	{
	sp[0].o = (jobject)((mindustry_gen_LegsUnit *) NULL_CHECK((frame[0].o)))->F_controller;
	frame[2].o = sp[0].o;
	if ((isInstance(ctx, (frame[2].o), &class_mindustry_ai_types_LogicAI)) == 0) goto label_2;
	}
	{
	frame[1].o = (checkCast(ctx, &class_mindustry_ai_types_LogicAI, (frame[2].o)));
	sp[0].o = (jobject)((mindustry_ai_types_LogicAI *) NULL_CHECK((frame[1].o)))->F_controller;
	if (sp[0].o == nullptr) goto label_2;
	}
	{
	sp[0].o = (jobject)((mindustry_ai_types_LogicAI *) NULL_CHECK((frame[1].o)))->F_controller;
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK(sp[0].o))->F_block;
	if (((jint)((mindustry_world_Block *) NULL_CHECK(sp[0].o))->F_privileged) != 0) goto label_1;
	}
label_2:;
	INST_ICONST(1);
	goto label_4;
label_1:;
	INST_ICONST(0);
label_4:;
	popStackFrame(ctx);
	INST_IRETURN();

	popStackFrame(ctx);
}

jbool M_mindustry_gen_LegsUnit_serialize_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/LegsUnit:serialize", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(934);
	popStackFrame(ctx);
	return (jint(1));
	}

	popStackFrame(ctx);
}

jbool M_mindustry_gen_LegsUnit_shouldSkip_mindustry_entities_units_BuildPlan_mindustry_gen_Building_R_boolean(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/LegsUnit:shouldSkip", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(939);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	sp[0].o = (jobject)((mindustry_core_GameState *) NULL_CHECK(sp[0].o))->F_rules;
	if (((jint)((mindustry_game_Rules *) NULL_CHECK(sp[0].o))->F_infiniteResources) != 0) goto label_1;
	}
	{
	sp[0].o = (jobject)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_team;
	sp[0].o = (jobject)((func_mindustry_game_Team_rules_R_mindustry_game_Rules$TeamRule) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_game_Team_rules_R_mindustry_game_Rules$TeamRule])(ctx, sp[0].o);
	if (((jint)((mindustry_game_Rules$TeamRule *) NULL_CHECK(sp[0].o))->F_infiniteResources) != 0) goto label_1;
	}
	{
	if (((jint)((mindustry_entities_units_BuildPlan *) NULL_CHECK((frame[1].o)))->F_breaking) != 0) goto label_1;
	}
	INST_ALOAD(2);
	if ((--sp)->o == nullptr) goto label_1;
	{
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_team;
	jint temp0 = (jint)((func_mindustry_entities_units_BuildPlan_isRotation_mindustry_game_Team_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_entities_units_BuildPlan_isRotation_mindustry_game_Team_R_boolean])(ctx, sp[0].o, sp[1].o);
	if (temp0 != 0) goto label_1;
	}
	{
	jint temp0 = (jint)((func_mindustry_entities_units_BuildPlan_isDerelictRepair_R_boolean) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_entities_units_BuildPlan_isDerelictRepair_R_boolean])(ctx, (frame[1].o));
	if (temp0 == 0) goto label_2;
	}
label_1:;
	INST_ICONST(0);
	popStackFrame(ctx);
	INST_IRETURN();
label_2:;
	{
	LINE_NUMBER(940);
	if (((jint)((mindustry_entities_units_BuildPlan *) NULL_CHECK((frame[1].o)))->F_stuck) == 0) goto label_3;
	}
	{
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[2].o)))->F_items;
	sp[1].o = (jobject)((mindustry_entities_units_BuildPlan *) NULL_CHECK((frame[1].o)))->F_block;
	sp[1].o = (jobject)((mindustry_world_Block *) NULL_CHECK(sp[1].o))->F_requirements;
	jint temp0 = (jint)((func_mindustry_world_modules_ItemModule_has_Array1_mindustry_type_ItemStack_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_modules_ItemModule_has_Array1_mindustry_type_ItemStack_R_boolean])(ctx, sp[0].o, sp[1].o);
	if (temp0 == 0) goto label_4;
	}
label_3:;
	{
	sp[0].o = (jobject)((mindustry_entities_units_BuildPlan *) NULL_CHECK((frame[1].o)))->F_block;
	sp[0].o = (jobject)((mindustry_world_Block *) NULL_CHECK(sp[0].o))->F_requirements;
	{ /* InvokeDynamic */
		clinit_mindustry_gen_LegsUnit_invoke_arc_func_Boolf_11(ctx);
		auto proxy = (mindustry_gen_LegsUnit_invoke_arc_func_Boolf_11 *) gcAlloc(ctx, &class_mindustry_gen_LegsUnit_invoke_arc_func_Boolf_11);
		proxy->F_field0 = (jref) (frame[2].o);
		sp[1].o = (jobject) proxy;
	}
	jint temp0 = (jint)SM_arc_util_Structs_contains_Array1_java_lang_Object_arc_func_Boolf_R_boolean(ctx, sp[0].o, sp[1].o);
	if (temp0 == 0) goto label_5;
	}
label_4:;
	INST_ICONST(1);
	goto label_6;
label_5:;
	INST_ICONST(0);
label_6:;
	popStackFrame(ctx);
	INST_IRETURN();

	popStackFrame(ctx);
}

jbool M_mindustry_gen_LegsUnit_shouldUpdateController_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/LegsUnit:shouldUpdateController", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(945);
	popStackFrame(ctx);
	return (jint(1));
	}

	popStackFrame(ctx);
}

jbool M_mindustry_gen_LegsUnit_targetable_mindustry_game_Team_R_boolean(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/LegsUnit:targetable", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(950);
	sp[0].o = (jobject)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_type;
	jint temp0 = (jint)((func_mindustry_type_UnitType_targetable_mindustry_gen_Unit_mindustry_game_Team_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_type_UnitType_targetable_mindustry_gen_Unit_mindustry_game_Team_R_boolean])(ctx, sp[0].o, (frame[0].o), (frame[1].o));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jbool M_mindustry_gen_LegsUnit_validMine_mindustry_world_Tile_R_boolean(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/LegsUnit:validMine", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(955);
	jint temp0 = (jint)((func_mindustry_gen_LegsUnit_validMine_mindustry_world_Tile_boolean_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_gen_LegsUnit_validMine_mindustry_world_Tile_boolean_R_boolean])(ctx, (frame[0].o), (frame[1].o), (jint(1)));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jbool M_mindustry_gen_LegsUnit_validMine_mindustry_world_Tile_boolean_R_boolean(jcontext ctx, jobject self, jobject param0, jbool param1) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/LegsUnit:validMine", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(960);
	if ((frame[1].o) != nullptr) goto label_1;
	}
	INST_ICONST(0);
	popStackFrame(ctx);
	INST_IRETURN();
label_1:;
	{
	LINE_NUMBER(961);
	if ((frame[2].i) == 0) goto label_2;
	}
	{
	sp[0].o = frame[0].o;
	jfloat temp0 = (jfloat)((func_mindustry_world_Tile_worldx_R_float) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_world_Tile_worldx_R_float])(ctx, (frame[1].o));
	jfloat temp1 = (jfloat)((func_mindustry_world_Tile_worldy_R_float) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_world_Tile_worldy_R_float])(ctx, (frame[1].o));
	sp[1].o = (jobject)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_type;
	jint temp2 = (jint)((func_mindustry_gen_LegsUnit_within_float_float_float_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_gen_LegsUnit_within_float_float_float_R_boolean])(ctx, sp[0].o, temp0, temp1, ((jfloat)((mindustry_type_UnitType *) NULL_CHECK(sp[1].o))->F_mineRange));
	if (temp2 != 0) goto label_2;
	}
	{
	LINE_NUMBER(962);
	popStackFrame(ctx);
	return (jint(0));
	}
label_2:;
	{
	LINE_NUMBER(964);
	sp[0].o = (jobject)((func_mindustry_gen_LegsUnit_getMineResult_mindustry_world_Tile_R_mindustry_type_Item) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_gen_LegsUnit_getMineResult_mindustry_world_Tile_R_mindustry_type_Item])(ctx, (frame[0].o), (frame[1].o));
	if (sp[0].o == nullptr) goto label_4;
	}
	INST_ICONST(1);
	goto label_5;
label_4:;
	INST_ICONST(0);
label_5:;
	popStackFrame(ctx);
	INST_IRETURN();

	popStackFrame(ctx);
}

jdouble M_mindustry_gen_LegsUnit_sense_mindustry_ctype_Content_R_double(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/LegsUnit:sense", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(969);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((func_mindustry_gen_LegsUnit_stack_R_mindustry_type_ItemStack) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_gen_LegsUnit_stack_R_mindustry_type_ItemStack])(ctx, (frame[0].o));
	sp[1].o = (jobject)((mindustry_type_ItemStack *) NULL_CHECK(sp[1].o))->F_item;
	if (sp[0].o != sp[1].o) goto label_1;
	}
	{
	sp[0].o = (jobject)((func_mindustry_gen_LegsUnit_stack_R_mindustry_type_ItemStack) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_gen_LegsUnit_stack_R_mindustry_type_ItemStack])(ctx, (frame[0].o));
	popStackFrame(ctx);
	return (jdouble(((jint)((mindustry_type_ItemStack *) NULL_CHECK(sp[0].o))->F_amount)));
	}
label_1:;
	{
	LINE_NUMBER(970);
	if ((isInstance(ctx, (frame[1].o), &class_mindustry_type_UnitType)) == 0) goto label_2;
	}
	{
	frame[2].o = (checkCast(ctx, &class_mindustry_type_UnitType, (frame[1].o)));
	LINE_NUMBER(971);
	frame[4].o = (frame[0].o);
	if ((isInstance(ctx, (frame[4].o), &class_mindustry_gen_Payloadc)) == 0) goto label_4;
	}
	{
	frame[3].o = (checkCast(ctx, &class_mindustry_gen_Payloadc, (frame[4].o)));
	sp[0].o = (jobject)((func_mindustry_gen_Payloadc_payloads_R_arc_struct_Seq) resolveInterfaceMethod(ctx, &class_mindustry_gen_Payloadc, INDEX_mindustry_gen_Payloadc_payloads_R_arc_struct_Seq, (frame[3].o)))(ctx, (frame[3].o));
	jint temp0 = (jint)((func_arc_struct_Seq_isEmpty_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_isEmpty_R_boolean])(ctx, sp[0].o);
	if (temp0 == 0) goto label_6;
	}
	INST_ICONST(0);
	goto label_7;
label_6:;
	{
	sp[0].o = (jobject)((func_mindustry_gen_Payloadc_payloads_R_arc_struct_Seq) resolveInterfaceMethod(ctx, &class_mindustry_gen_Payloadc, INDEX_mindustry_gen_Payloadc_payloads_R_arc_struct_Seq, (frame[3].o)))(ctx, (frame[3].o));
	{ /* InvokeDynamic */
		clinit_mindustry_gen_LegsUnit_invoke_arc_func_Boolf_12(ctx);
		auto proxy = (mindustry_gen_LegsUnit_invoke_arc_func_Boolf_12 *) gcAlloc(ctx, &class_mindustry_gen_LegsUnit_invoke_arc_func_Boolf_12);
		proxy->F_field0 = (jref) (frame[2].o);
		sp[1].o = (jobject) proxy;
	}
	jint temp0 = (jint)((func_arc_struct_Seq_count_arc_func_Boolf_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_count_arc_func_Boolf_R_int])(ctx, sp[0].o, sp[1].o);
	sp[0].i = temp0;
	sp += 1;
	}
label_7:;
	INST_I2D();
	goto label_8;
label_4:;
	INST_DCONST(0);
label_8:;
	popStackFrame(ctx);
	INST_DRETURN();
label_2:;
	{
	LINE_NUMBER(973);
	if ((isInstance(ctx, (frame[1].o), &class_mindustry_world_Block)) == 0) goto label_9;
	}
	{
	frame[2].o = (checkCast(ctx, &class_mindustry_world_Block, (frame[1].o)));
	LINE_NUMBER(974);
	frame[4].o = (frame[0].o);
	if ((isInstance(ctx, (frame[4].o), &class_mindustry_gen_Payloadc)) == 0) goto label_11;
	}
	{
	frame[3].o = (checkCast(ctx, &class_mindustry_gen_Payloadc, (frame[4].o)));
	sp[0].o = (jobject)((func_mindustry_gen_Payloadc_payloads_R_arc_struct_Seq) resolveInterfaceMethod(ctx, &class_mindustry_gen_Payloadc, INDEX_mindustry_gen_Payloadc_payloads_R_arc_struct_Seq, (frame[3].o)))(ctx, (frame[3].o));
	jint temp0 = (jint)((func_arc_struct_Seq_isEmpty_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_isEmpty_R_boolean])(ctx, sp[0].o);
	if (temp0 == 0) goto label_13;
	}
	INST_ICONST(0);
	goto label_14;
label_13:;
	{
	sp[0].o = (jobject)((func_mindustry_gen_Payloadc_payloads_R_arc_struct_Seq) resolveInterfaceMethod(ctx, &class_mindustry_gen_Payloadc, INDEX_mindustry_gen_Payloadc_payloads_R_arc_struct_Seq, (frame[3].o)))(ctx, (frame[3].o));
	{ /* InvokeDynamic */
		clinit_mindustry_gen_LegsUnit_invoke_arc_func_Boolf_13(ctx);
		auto proxy = (mindustry_gen_LegsUnit_invoke_arc_func_Boolf_13 *) gcAlloc(ctx, &class_mindustry_gen_LegsUnit_invoke_arc_func_Boolf_13);
		proxy->F_field0 = (jref) (frame[2].o);
		sp[1].o = (jobject) proxy;
	}
	jint temp0 = (jint)((func_arc_struct_Seq_count_arc_func_Boolf_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_count_arc_func_Boolf_R_int])(ctx, sp[0].o, sp[1].o);
	sp[0].i = temp0;
	sp += 1;
	}
label_14:;
	INST_I2D();
	goto label_15;
label_11:;
	INST_DCONST(0);
label_15:;
	popStackFrame(ctx);
	INST_DRETURN();
label_9:;
	{
	LINE_NUMBER(976);
	if ((isInstance(ctx, (frame[1].o), &class_mindustry_type_StatusEffect)) == 0) goto label_16;
	}
	{
	frame[2].o = (checkCast(ctx, &class_mindustry_type_StatusEffect, (frame[1].o)));
	LINE_NUMBER(977);
	jint temp0 = (jint)((func_mindustry_gen_LegsUnit_hasEffect_mindustry_type_StatusEffect_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_gen_LegsUnit_hasEffect_mindustry_type_StatusEffect_R_boolean])(ctx, (frame[0].o), (frame[2].o));
	if (temp0 == 0) goto label_18;
	}
	{
	jfloat temp0 = (jfloat)((func_mindustry_gen_LegsUnit_getDuration_mindustry_type_StatusEffect_R_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_gen_LegsUnit_getDuration_mindustry_type_StatusEffect_R_float])(ctx, (frame[0].o), (frame[2].o));
	jdouble temp1 = jdouble((temp0 / (jfloat(60.0f))));
	sp[0].d = temp1;
	sp += 1;
	goto label_19;
	}
label_18:;
	INST_DCONST(0);
label_19:;
	popStackFrame(ctx);
	INST_DRETURN();
label_16:;
	{
	LINE_NUMBER(979);
	popStackFrame(ctx);
	return (jdouble(std::numeric_limits<double>::quiet_NaN()));
	}

	popStackFrame(ctx);
}

jdouble M_mindustry_gen_LegsUnit_sense_mindustry_logic_LAccess_R_double(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/LegsUnit:sense", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(984);
	clinit_mindustry_gen_LegsUnit$1(ctx);
	sp[0].o = (jobject)SF_mindustry_gen_LegsUnit$1_$SwitchMap$mindustry$logic$LAccess;
	jint temp0 = (jint)((func_mindustry_logic_LAccess_ordinal_R_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_logic_LAccess_ordinal_R_int])(ctx, (frame[1].o));
	switch(((jint)ARRAY_ACCESS(jint, sp[0].o, temp0))) {
		case 1: goto label_1;
		case 2: goto label_2;
		case 3: goto label_3;
		case 4: goto label_4;
		case 5: goto label_5;
		case 6: goto label_6;
		case 7: goto label_7;
		case 8: goto label_8;
		case 9: goto label_9;
		case 10: goto label_10;
		case 11: goto label_11;
		case 12: goto label_12;
		case 13: goto label_13;
		case 14: goto label_14;
		case 15: goto label_15;
		case 16: goto label_16;
		case 17: goto label_17;
		case 18: goto label_18;
		case 19: goto label_19;
		case 20: goto label_20;
		case 21: goto label_21;
		case 22: goto label_22;
		case 23: goto label_23;
		case 24: goto label_24;
		case 25: goto label_25;
		case 26: goto label_26;
		case 27: goto label_27;
		case 28: goto label_28;
		case 29: goto label_29;
		case 30: goto label_30;
		case 31: goto label_31;
		case 32: goto label_32;
		case 33: goto label_33;
		case 34: goto label_34;
		case 35: goto label_35;
		case 36: goto label_36;
		case 37: goto label_37;
		case 38: goto label_38;
		case 39: goto label_39;
		default: goto label_40;
	}
	}
label_1:;
	{
	LINE_NUMBER(985);
	sp[0].o = (jobject)((func_mindustry_gen_LegsUnit_stack_R_mindustry_type_ItemStack) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_gen_LegsUnit_stack_R_mindustry_type_ItemStack])(ctx, (frame[0].o));
	jdouble temp0 = jdouble(((jint)((mindustry_type_ItemStack *) NULL_CHECK(sp[0].o))->F_amount));
	sp[0].d = temp0;
	sp += 1;
	goto label_41;
	}
label_2:;
	{
	LINE_NUMBER(986);
	sp[0].o = (jobject)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_type;
	jdouble temp0 = jdouble(((jint)((mindustry_type_UnitType *) NULL_CHECK(sp[0].o))->F_itemCapacity));
	sp[0].d = temp0;
	sp += 1;
	goto label_41;
	}
label_3:;
	{
	LINE_NUMBER(987);
	jdouble temp0 = jdouble(((jfloat)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_rotation));
	sp[0].d = temp0;
	sp += 1;
	goto label_41;
	}
label_4:;
	{
	LINE_NUMBER(988);
	jdouble temp0 = jdouble(((jfloat)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_health));
	sp[0].d = temp0;
	sp += 1;
	goto label_41;
	}
label_5:;
	{
	LINE_NUMBER(989);
	jdouble temp0 = jdouble(((jfloat)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_shield));
	sp[0].d = temp0;
	sp += 1;
	goto label_41;
	}
label_6:;
	{
	LINE_NUMBER(990);
	jdouble temp0 = jdouble(((jfloat)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_maxHealth));
	sp[0].d = temp0;
	sp += 1;
	goto label_41;
	}
label_7:;
	{
	LINE_NUMBER(991);
	jint temp0 = (jint)((func_mindustry_gen_LegsUnit_isFlying_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_gen_LegsUnit_isFlying_R_boolean])(ctx, (frame[0].o));
	if (temp0 == 0) goto label_42;
	}
	INST_DCONST(1);
	goto label_41;
label_42:;
	INST_DCONST(0);
	goto label_41;
label_8:;
	{
	LINE_NUMBER(992);
	jfloat temp0 = (jfloat)SM_mindustry_core_World_conv_float_R_float(ctx, ((jfloat)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_x));
	jdouble temp1 = jdouble(temp0);
	sp[0].d = temp1;
	sp += 1;
	goto label_41;
	}
label_9:;
	{
	LINE_NUMBER(993);
	jfloat temp0 = (jfloat)SM_mindustry_core_World_conv_float_R_float(ctx, ((jfloat)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_y));
	jdouble temp1 = jdouble(temp0);
	sp[0].d = temp1;
	sp += 1;
	goto label_41;
	}
label_10:;
	{
	LINE_NUMBER(994);
	sp[0].o = (jobject)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_vel;
	jdouble temp0 = jdouble(((((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK(sp[0].o))->F_x) * (jfloat(60.0f))) / (jfloat(8.0f))));
	sp[0].d = temp0;
	sp += 1;
	goto label_41;
	}
label_11:;
	{
	LINE_NUMBER(995);
	sp[0].o = (jobject)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_vel;
	jdouble temp0 = jdouble(((((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK(sp[0].o))->F_y) * (jfloat(60.0f))) / (jfloat(8.0f))));
	sp[0].d = temp0;
	sp += 1;
	goto label_41;
	}
label_12:;
	{
	LINE_NUMBER(996);
	if (((jint)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_dead) != 0) goto label_43;
	}
	{
	jint temp0 = (jint)((func_mindustry_gen_LegsUnit_isAdded_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_gen_LegsUnit_isAdded_R_boolean])(ctx, (frame[0].o));
	if (temp0 != 0) goto label_44;
	}
label_43:;
	INST_DCONST(1);
	goto label_41;
label_44:;
	INST_DCONST(0);
	goto label_41;
label_13:;
	{
	LINE_NUMBER(997);
	sp[0].o = (jobject)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_team;
	jdouble temp0 = jdouble(((jint)((mindustry_game_Team *) NULL_CHECK(sp[0].o))->F_id));
	sp[0].d = temp0;
	sp += 1;
	goto label_41;
	}
label_14:;
	{
	LINE_NUMBER(998);
	jint temp0 = (jint)((func_mindustry_gen_LegsUnit_isShooting_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_gen_LegsUnit_isShooting_R_boolean])(ctx, (frame[0].o));
	if (temp0 == 0) goto label_45;
	}
	INST_DCONST(1);
	goto label_41;
label_45:;
	INST_DCONST(0);
	goto label_41;
label_15:;
	{
	LINE_NUMBER(999);
	sp[0].o = (jobject)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_type;
	if (((jint)((mindustry_type_UnitType *) NULL_CHECK(sp[0].o))->F_canBoost) == 0) goto label_46;
	}
	{
	jint temp0 = (jint)((func_mindustry_gen_LegsUnit_isFlying_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_gen_LegsUnit_isFlying_R_boolean])(ctx, (frame[0].o));
	if (temp0 == 0) goto label_46;
	}
	INST_DCONST(1);
	goto label_41;
label_46:;
	INST_DCONST(0);
	goto label_41;
label_16:;
	{
	LINE_NUMBER(1000);
	jfloat temp0 = (jfloat)((func_mindustry_gen_LegsUnit_range_R_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_gen_LegsUnit_range_R_float])(ctx, (frame[0].o));
	jdouble temp1 = jdouble((temp0 / (jfloat(8.0f))));
	sp[0].d = temp1;
	sp += 1;
	goto label_41;
	}
label_17:;
	{
	LINE_NUMBER(1001);
	jfloat temp0 = (jfloat)((func_mindustry_gen_LegsUnit_aimX_R_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_gen_LegsUnit_aimX_R_float])(ctx, (frame[0].o));
	jfloat temp1 = (jfloat)SM_mindustry_core_World_conv_float_R_float(ctx, temp0);
	jdouble temp2 = jdouble(temp1);
	sp[0].d = temp2;
	sp += 1;
	goto label_41;
	}
label_18:;
	{
	LINE_NUMBER(1002);
	jfloat temp0 = (jfloat)((func_mindustry_gen_LegsUnit_aimY_R_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_gen_LegsUnit_aimY_R_float])(ctx, (frame[0].o));
	jfloat temp1 = (jfloat)SM_mindustry_core_World_conv_float_R_float(ctx, temp0);
	jdouble temp2 = jdouble(temp1);
	sp[0].d = temp2;
	sp += 1;
	goto label_41;
	}
label_19:;
	{
	LINE_NUMBER(1003);
	sp[0].o = (jobject)((mindustry_gen_LegsUnit *) NULL_CHECK((frame[0].o)))->F_controller;
	frame[3].o = sp[0].o;
	if ((isInstance(ctx, (frame[3].o), &class_mindustry_gen_Player)) == 0) goto label_47;
	}
	{
	frame[2].o = (checkCast(ctx, &class_mindustry_gen_Player, (frame[3].o)));
	sp[0].o = (jobject)((mindustry_gen_Player *) NULL_CHECK((frame[2].o)))->F_con;
	if (sp[0].o != nullptr) goto label_49;
	}
	{
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_camera;
	sp[0].o = (jobject)((arc_graphics_Camera *) NULL_CHECK(sp[0].o))->F_position;
	jfloat temp0 = (jfloat)((arc_math_geom_Vec2 *) NULL_CHECK(sp[0].o))->F_x;
	sp[0].f = temp0;
	sp += 1;
	goto label_50;
	}
label_49:;
	{
	sp[0].o = (jobject)((mindustry_gen_Player *) NULL_CHECK((frame[2].o)))->F_con;
	jfloat temp0 = (jfloat)((mindustry_net_NetConnection *) NULL_CHECK(sp[0].o))->F_viewX;
	sp[0].f = temp0;
	sp += 1;
	}
label_50:;
	POP_N(1); // Pop method args
	sp->f = (jfloat)SM_mindustry_core_World_conv_float_R_float(ctx, sp[0].f);
	sp++;
	goto label_51;
label_47:;
	INST_FCONST(0);
label_51:;
	INST_F2D();
	goto label_41;
label_20:;
	{
	LINE_NUMBER(1004);
	sp[0].o = (jobject)((mindustry_gen_LegsUnit *) NULL_CHECK((frame[0].o)))->F_controller;
	frame[3].o = sp[0].o;
	if ((isInstance(ctx, (frame[3].o), &class_mindustry_gen_Player)) == 0) goto label_52;
	}
	{
	frame[2].o = (checkCast(ctx, &class_mindustry_gen_Player, (frame[3].o)));
	sp[0].o = (jobject)((mindustry_gen_Player *) NULL_CHECK((frame[2].o)))->F_con;
	if (sp[0].o != nullptr) goto label_54;
	}
	{
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_camera;
	sp[0].o = (jobject)((arc_graphics_Camera *) NULL_CHECK(sp[0].o))->F_position;
	jfloat temp0 = (jfloat)((arc_math_geom_Vec2 *) NULL_CHECK(sp[0].o))->F_y;
	sp[0].f = temp0;
	sp += 1;
	goto label_55;
	}
label_54:;
	{
	sp[0].o = (jobject)((mindustry_gen_Player *) NULL_CHECK((frame[2].o)))->F_con;
	jfloat temp0 = (jfloat)((mindustry_net_NetConnection *) NULL_CHECK(sp[0].o))->F_viewY;
	sp[0].f = temp0;
	sp += 1;
	}
label_55:;
	POP_N(1); // Pop method args
	sp->f = (jfloat)SM_mindustry_core_World_conv_float_R_float(ctx, sp[0].f);
	sp++;
	goto label_56;
label_52:;
	INST_FCONST(0);
label_56:;
	INST_F2D();
	goto label_41;
label_21:;
	{
	LINE_NUMBER(1005);
	sp[0].o = (jobject)((mindustry_gen_LegsUnit *) NULL_CHECK((frame[0].o)))->F_controller;
	frame[3].o = sp[0].o;
	if ((isInstance(ctx, (frame[3].o), &class_mindustry_gen_Player)) == 0) goto label_57;
	}
	{
	frame[2].o = (checkCast(ctx, &class_mindustry_gen_Player, (frame[3].o)));
	sp[0].o = (jobject)((mindustry_gen_Player *) NULL_CHECK((frame[2].o)))->F_con;
	if (sp[0].o != nullptr) goto label_59;
	}
	{
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_camera;
	jfloat temp0 = (jfloat)((arc_graphics_Camera *) NULL_CHECK(sp[0].o))->F_width;
	sp[0].f = temp0;
	sp += 1;
	goto label_60;
	}
label_59:;
	{
	sp[0].o = (jobject)((mindustry_gen_Player *) NULL_CHECK((frame[2].o)))->F_con;
	jfloat temp0 = (jfloat)((mindustry_net_NetConnection *) NULL_CHECK(sp[0].o))->F_viewWidth;
	sp[0].f = temp0;
	sp += 1;
	}
label_60:;
	POP_N(1); // Pop method args
	sp->f = (jfloat)SM_mindustry_core_World_conv_float_R_float(ctx, sp[0].f);
	sp++;
	goto label_61;
label_57:;
	INST_FCONST(0);
label_61:;
	INST_F2D();
	goto label_41;
label_22:;
	{
	LINE_NUMBER(1006);
	sp[0].o = (jobject)((mindustry_gen_LegsUnit *) NULL_CHECK((frame[0].o)))->F_controller;
	frame[3].o = sp[0].o;
	if ((isInstance(ctx, (frame[3].o), &class_mindustry_gen_Player)) == 0) goto label_62;
	}
	{
	frame[2].o = (checkCast(ctx, &class_mindustry_gen_Player, (frame[3].o)));
	sp[0].o = (jobject)((mindustry_gen_Player *) NULL_CHECK((frame[2].o)))->F_con;
	if (sp[0].o != nullptr) goto label_64;
	}
	{
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_camera;
	jfloat temp0 = (jfloat)((arc_graphics_Camera *) NULL_CHECK(sp[0].o))->F_height;
	sp[0].f = temp0;
	sp += 1;
	goto label_65;
	}
label_64:;
	{
	sp[0].o = (jobject)((mindustry_gen_Player *) NULL_CHECK((frame[2].o)))->F_con;
	jfloat temp0 = (jfloat)((mindustry_net_NetConnection *) NULL_CHECK(sp[0].o))->F_viewHeight;
	sp[0].f = temp0;
	sp += 1;
	}
label_65:;
	POP_N(1); // Pop method args
	sp->f = (jfloat)SM_mindustry_core_World_conv_float_R_float(ctx, sp[0].f);
	sp++;
	goto label_66;
label_62:;
	INST_FCONST(0);
label_66:;
	INST_F2D();
	goto label_41;
label_23:;
	{
	LINE_NUMBER(1007);
	jint temp0 = (jint)((func_mindustry_gen_LegsUnit_mining_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_gen_LegsUnit_mining_R_boolean])(ctx, (frame[0].o));
	if (temp0 == 0) goto label_67;
	}
	INST_DCONST(1);
	goto label_41;
label_67:;
	INST_DCONST(0);
	goto label_41;
label_24:;
	{
	LINE_NUMBER(1008);
	jint temp0 = (jint)((func_mindustry_gen_LegsUnit_mining_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_gen_LegsUnit_mining_R_boolean])(ctx, (frame[0].o));
	if (temp0 == 0) goto label_68;
	}
	{
	sp[0].o = (jobject)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_mineTile;
	jdouble temp0 = jdouble(((jint)((mindustry_world_Tile *) NULL_CHECK(sp[0].o))->F_x));
	sp[0].d = temp0;
	sp += 1;
	goto label_41;
	}
label_68:;
	(sp++)->d = jdouble(-1.0);
	goto label_41;
label_25:;
	{
	LINE_NUMBER(1009);
	jint temp0 = (jint)((func_mindustry_gen_LegsUnit_mining_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_gen_LegsUnit_mining_R_boolean])(ctx, (frame[0].o));
	if (temp0 == 0) goto label_69;
	}
	{
	sp[0].o = (jobject)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_mineTile;
	jdouble temp0 = jdouble(((jint)((mindustry_world_Tile *) NULL_CHECK(sp[0].o))->F_y));
	sp[0].d = temp0;
	sp += 1;
	goto label_41;
	}
label_69:;
	(sp++)->d = jdouble(-1.0);
	goto label_41;
label_26:;
	{
	LINE_NUMBER(1010);
	jint temp0 = (jint)((func_mindustry_gen_LegsUnit_isBuilding_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_gen_LegsUnit_isBuilding_R_boolean])(ctx, (frame[0].o));
	if (temp0 == 0) goto label_70;
	}
	{
	sp[0].o = (jobject)((func_mindustry_gen_LegsUnit_buildPlan_R_mindustry_entities_units_BuildPlan) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_gen_LegsUnit_buildPlan_R_mindustry_entities_units_BuildPlan])(ctx, (frame[0].o));
	jdouble temp0 = jdouble(((jint)((mindustry_entities_units_BuildPlan *) NULL_CHECK(sp[0].o))->F_x));
	sp[0].d = temp0;
	sp += 1;
	goto label_41;
	}
label_70:;
	(sp++)->d = jdouble(-1.0);
	goto label_41;
label_27:;
	{
	LINE_NUMBER(1011);
	jint temp0 = (jint)((func_mindustry_gen_LegsUnit_isBuilding_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_gen_LegsUnit_isBuilding_R_boolean])(ctx, (frame[0].o));
	if (temp0 == 0) goto label_71;
	}
	{
	sp[0].o = (jobject)((func_mindustry_gen_LegsUnit_buildPlan_R_mindustry_entities_units_BuildPlan) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_gen_LegsUnit_buildPlan_R_mindustry_entities_units_BuildPlan])(ctx, (frame[0].o));
	jdouble temp0 = jdouble(((jint)((mindustry_entities_units_BuildPlan *) NULL_CHECK(sp[0].o))->F_y));
	sp[0].d = temp0;
	sp += 1;
	goto label_41;
	}
label_71:;
	(sp++)->d = jdouble(-1.0);
	goto label_41;
label_28:;
	{
	LINE_NUMBER(1012);
	if ((floatCompare(((jfloat)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_armorOverride), (jfloat(0)), -1)) < 0) goto label_72;
	}
	{
	jdouble temp0 = jdouble(((jfloat)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_armorOverride));
	sp[0].d = temp0;
	sp += 1;
	goto label_41;
	}
label_72:;
	{
	jdouble temp0 = jdouble(((jfloat)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_armor));
	sp[0].d = temp0;
	sp += 1;
	goto label_41;
	}
label_29:;
	{
	LINE_NUMBER(1013);
	jdouble temp0 = (jdouble)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_flag;
	sp[0].d = temp0;
	sp += 1;
	goto label_41;
	}
label_30:;
	{
	LINE_NUMBER(1014);
	sp[0].o = (jobject)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_type;
	jdouble temp0 = jdouble((((((jfloat)((mindustry_type_UnitType *) NULL_CHECK(sp[0].o))->F_speed) * (jfloat(60.0f))) / (jfloat(8.0f))) * ((jfloat)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_speedMultiplier)));
	sp[0].d = temp0;
	sp += 1;
	goto label_41;
	}
label_31:;
	{
	LINE_NUMBER(1015);
	jint temp0 = (jint)((func_mindustry_gen_LegsUnit_isValid_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_gen_LegsUnit_isValid_R_boolean])(ctx, (frame[0].o));
	if (temp0 != 0) goto label_73;
	}
	INST_ICONST(0);
	goto label_74;
label_73:;
	{
	sp[0].o = (jobject)((mindustry_gen_LegsUnit *) NULL_CHECK((frame[0].o)))->F_controller;
	if ((isInstance(ctx, sp[0].o, &class_mindustry_ai_types_LogicAI)) == 0) goto label_75;
	}
	INST_ICONST(1);
	goto label_74;
label_75:;
	{
	sp[0].o = (jobject)((mindustry_gen_LegsUnit *) NULL_CHECK((frame[0].o)))->F_controller;
	if ((isInstance(ctx, sp[0].o, &class_mindustry_gen_Player)) == 0) goto label_76;
	}
	INST_ICONST(2);
	goto label_74;
label_76:;
	{
	sp[0].o = (jobject)((mindustry_gen_LegsUnit *) NULL_CHECK((frame[0].o)))->F_controller;
	frame[3].o = sp[0].o;
	if ((isInstance(ctx, (frame[3].o), &class_mindustry_ai_types_CommandAI)) == 0) goto label_77;
	}
	{
	frame[2].o = (checkCast(ctx, &class_mindustry_ai_types_CommandAI, (frame[3].o)));
	jint temp0 = (jint)((func_mindustry_ai_types_CommandAI_hasCommand_R_boolean) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_mindustry_ai_types_CommandAI_hasCommand_R_boolean])(ctx, (frame[2].o));
	if (temp0 == 0) goto label_77;
	}
	INST_ICONST(3);
	goto label_74;
label_77:;
	INST_ICONST(0);
label_74:;
	INST_I2D();
	goto label_41;
label_32:;
	{
	LINE_NUMBER(1016);
	frame[3].o = (frame[0].o);
	if ((isInstance(ctx, (frame[3].o), &class_mindustry_gen_Payloadc)) == 0) goto label_79;
	}
	{
	frame[2].o = (checkCast(ctx, &class_mindustry_gen_Payloadc, (frame[3].o)));
	sp[0].o = (jobject)((func_mindustry_gen_Payloadc_payloads_R_arc_struct_Seq) resolveInterfaceMethod(ctx, &class_mindustry_gen_Payloadc, INDEX_mindustry_gen_Payloadc_payloads_R_arc_struct_Seq, (frame[2].o)))(ctx, (frame[2].o));
	jdouble temp0 = jdouble(((jint)((arc_struct_Seq *) NULL_CHECK(sp[0].o))->F_size));
	sp[0].d = temp0;
	sp += 1;
	goto label_41;
	}
label_79:;
	INST_DCONST(0);
	goto label_41;
label_33:;
	{
	LINE_NUMBER(1017);
	frame[3].o = (frame[0].o);
	if ((isInstance(ctx, (frame[3].o), &class_mindustry_gen_Payloadc)) == 0) goto label_81;
	}
	{
	frame[2].o = (checkCast(ctx, &class_mindustry_gen_Payloadc, (frame[3].o)));
	jfloat temp0 = (jfloat)((func_mindustry_gen_Payloadc_payloadUsed_R_float) resolveInterfaceMethod(ctx, &class_mindustry_gen_Payloadc, INDEX_mindustry_gen_Payloadc_payloadUsed_R_float, (frame[2].o)))(ctx, (frame[2].o));
	jdouble temp1 = jdouble((temp0 / (jfloat(64.0f))));
	sp[0].d = temp1;
	sp += 1;
	goto label_41;
	}
label_81:;
	INST_DCONST(0);
	goto label_41;
label_34:;
	{
	LINE_NUMBER(1018);
	sp[0].o = (jobject)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_type;
	jdouble temp0 = jdouble((((jfloat)((mindustry_type_UnitType *) NULL_CHECK(sp[0].o))->F_payloadCapacity) / (jfloat(64.0f))));
	sp[0].d = temp0;
	sp += 1;
	goto label_41;
	}
label_35:;
	{
	LINE_NUMBER(1019);
	jdouble temp0 = jdouble((((jfloat)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_hitSize) / (jfloat(8.0f))));
	sp[0].d = temp0;
	sp += 1;
	goto label_41;
	}
label_36:;
	{
	LINE_NUMBER(1020);
	sp[0].o = (jobject)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_team;
	sp[0].o = (jobject)((mindustry_game_Team *) NULL_CHECK(sp[0].o))->F_color;
	jfloat temp0 = (jfloat)((arc_graphics_Color *) NULL_CHECK(sp[0].o))->F_r;
	sp[0].o = (jobject)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_team;
	sp[0].o = (jobject)((mindustry_game_Team *) NULL_CHECK(sp[0].o))->F_color;
	jfloat temp1 = (jfloat)((arc_graphics_Color *) NULL_CHECK(sp[0].o))->F_g;
	sp[0].o = (jobject)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_team;
	sp[0].o = (jobject)((mindustry_game_Team *) NULL_CHECK(sp[0].o))->F_color;
	jdouble temp2 = (jdouble)SM_arc_graphics_Color_toDoubleBits_float_float_float_float_R_double(ctx, temp0, temp1, ((jfloat)((arc_graphics_Color *) NULL_CHECK(sp[0].o))->F_b), (jfloat(1)));
	sp[0].d = temp2;
	sp += 1;
	goto label_41;
	}
label_37:;
	{
	LINE_NUMBER(1021);
	sp[0].o = (jobject)((mindustry_gen_LegsUnit *) NULL_CHECK((frame[0].o)))->F_controller;
	frame[3].o = sp[0].o;
	if ((isInstance(ctx, (frame[3].o), &class_mindustry_gen_Player)) == 0) goto label_83;
	}
	{
	frame[2].o = (checkCast(ctx, &class_mindustry_gen_Player, (frame[3].o)));
	jdouble temp0 = jdouble(((jint)((mindustry_gen_Player *) NULL_CHECK((frame[2].o)))->F_selectedRotation));
	sp[0].d = temp0;
	sp += 1;
	goto label_41;
	}
label_83:;
	INST_DCONST(0);
	goto label_41;
label_38:;
	{
	LINE_NUMBER(1022);
	sp[0].o = (jobject)((mindustry_gen_LegsUnit *) NULL_CHECK((frame[0].o)))->F_controller;
	frame[3].o = sp[0].o;
	if ((isInstance(ctx, (frame[3].o), &class_mindustry_gen_Player)) == 0) goto label_85;
	}
	{
	frame[2].o = (checkCast(ctx, &class_mindustry_gen_Player, (frame[3].o)));
	jint temp0 = (jint)((func_mindustry_gen_Player_isPinging_R_boolean) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_mindustry_gen_Player_isPinging_R_boolean])(ctx, (frame[2].o));
	if (temp0 == 0) goto label_85;
	}
	{
	jfloat temp0 = (jfloat)SM_mindustry_core_World_conv_float_R_float(ctx, ((jfloat)((mindustry_gen_Player *) NULL_CHECK((frame[2].o)))->F_pingX));
	sp[0].f = temp0;
	sp += 1;
	goto label_87;
	}
label_85:;
	(sp++)->f = jfloat(std::numeric_limits<float>::quiet_NaN());
label_87:;
	INST_F2D();
	goto label_41;
label_39:;
	{
	LINE_NUMBER(1023);
	sp[0].o = (jobject)((mindustry_gen_LegsUnit *) NULL_CHECK((frame[0].o)))->F_controller;
	frame[3].o = sp[0].o;
	if ((isInstance(ctx, (frame[3].o), &class_mindustry_gen_Player)) == 0) goto label_88;
	}
	{
	frame[2].o = (checkCast(ctx, &class_mindustry_gen_Player, (frame[3].o)));
	jint temp0 = (jint)((func_mindustry_gen_Player_isPinging_R_boolean) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_mindustry_gen_Player_isPinging_R_boolean])(ctx, (frame[2].o));
	if (temp0 == 0) goto label_88;
	}
	{
	jfloat temp0 = (jfloat)SM_mindustry_core_World_conv_float_R_float(ctx, ((jfloat)((mindustry_gen_Player *) NULL_CHECK((frame[2].o)))->F_pingY));
	sp[0].f = temp0;
	sp += 1;
	goto label_90;
	}
label_88:;
	(sp++)->f = jfloat(std::numeric_limits<float>::quiet_NaN());
label_90:;
	INST_F2D();
	goto label_41;
label_40:;
	LINE_NUMBER(1024);
	(sp++)->d = jdouble(std::numeric_limits<double>::quiet_NaN());
label_41:;
	LINE_NUMBER(984);
	popStackFrame(ctx);
	INST_DRETURN();

	popStackFrame(ctx);
}

jfloat M_mindustry_gen_LegsUnit_ammof_R_float(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/LegsUnit:ammof", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(1030);
	popStackFrame(ctx);
	return (jfloat(1));
	}

	popStackFrame(ctx);
}

jfloat M_mindustry_gen_LegsUnit_bounds_R_float(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/LegsUnit:bounds", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(1035);
	popStackFrame(ctx);
	return (((jfloat)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_hitSize) * (jfloat(2)));
	}

	popStackFrame(ctx);
}

jfloat M_mindustry_gen_LegsUnit_clipSize_R_float(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/LegsUnit:clipSize", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(1040);
	jint temp0 = (jint)((func_mindustry_gen_LegsUnit_isBuilding_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_gen_LegsUnit_isBuilding_R_boolean])(ctx, (frame[0].o));
	if (temp0 == 0) goto label_1;
	}
	{
	LINE_NUMBER(1041);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	sp[0].o = (jobject)((mindustry_core_GameState *) NULL_CHECK(sp[0].o))->F_rules;
	if (((jint)((mindustry_game_Rules *) NULL_CHECK(sp[0].o))->F_infiniteResources) == 0) goto label_3;
	}
	(sp++)->f = jfloat(3,402823e+38f);
	goto label_4;
label_3:;
	{
	sp[0].o = (jobject)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_type;
	jfloat temp0 = (jfloat)((mindustry_type_UnitType *) NULL_CHECK(sp[0].o))->F_clipSize;
	sp[0].o = (jobject)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_type;
	sp[0].o = (jobject)((mindustry_type_UnitType *) NULL_CHECK(sp[0].o))->F_region;
	jfloat temp1 = (jfloat)SM_java_lang_Math_max_float_float_R_float(ctx, temp0, (jfloat(((jint)((arc_graphics_g2d_TextureRegion *) NULL_CHECK(sp[0].o))->F_width))));
	sp[0].o = (jobject)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_type;
	jfloat temp2 = (temp1 + ((jfloat)((mindustry_type_UnitType *) NULL_CHECK(sp[0].o))->F_buildRange)) + (jfloat(32.0f));
	sp[0].f = temp2;
	sp += 1;
	}
label_4:;
	popStackFrame(ctx);
	INST_FRETURN();
label_1:;
	{
	LINE_NUMBER(1043);
	jint temp0 = (jint)((func_mindustry_gen_LegsUnit_mining_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_gen_LegsUnit_mining_R_boolean])(ctx, (frame[0].o));
	if (temp0 == 0) goto label_5;
	}
	{
	LINE_NUMBER(1044);
	sp[0].o = (jobject)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_type;
	jfloat temp0 = (jfloat)((mindustry_type_UnitType *) NULL_CHECK(sp[0].o))->F_clipSize;
	sp[0].o = (jobject)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_type;
	popStackFrame(ctx);
	return (temp0 + ((jfloat)((mindustry_type_UnitType *) NULL_CHECK(sp[0].o))->F_mineRange));
	}
label_5:;
	{
	LINE_NUMBER(1046);
	sp[0].o = (jobject)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_type;
	popStackFrame(ctx);
	return ((jfloat)((mindustry_type_UnitType *) NULL_CHECK(sp[0].o))->F_clipSize);
	}

	popStackFrame(ctx);
}

jfloat M_mindustry_gen_LegsUnit_defaultLegAngle_int_R_float(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/LegsUnit:defaultLegAngle", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(1051);
	jfloat temp0 = (jfloat)((mindustry_gen_LegsUnit *) NULL_CHECK((frame[0].o)))->F_baseRotation;
	jfloat temp1 = jfloat(360.0f);
	sp[0].o = (jobject)((mindustry_gen_LegsUnit *) NULL_CHECK((frame[0].o)))->F_legs;
	jfloat temp2 = temp0 + ((temp1 / (jfloat((((jarray) nullCheck(ctx, sp[0].o))->length)))) * (jfloat((frame[1].i))));
	jfloat temp3 = jfloat(360.0f);
	sp[0].o = (jobject)((mindustry_gen_LegsUnit *) NULL_CHECK((frame[0].o)))->F_legs;
	popStackFrame(ctx);
	return (temp2 + ((temp3 / (jfloat((((jarray) nullCheck(ctx, sp[0].o))->length)))) / (jfloat(2))));
	}

	popStackFrame(ctx);
}

jfloat M_mindustry_gen_LegsUnit_deltaAngle_R_float(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/LegsUnit:deltaAngle", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(1056);
	jfloat temp0 = (jfloat)SM_arc_math_Mathf_angle_float_float_R_float(ctx, ((jfloat)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_deltaX), ((jfloat)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_deltaY));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jfloat M_mindustry_gen_LegsUnit_deltaLen_R_float(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/LegsUnit:deltaLen", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(1061);
	jfloat temp0 = (jfloat)SM_arc_math_Mathf_len_float_float_R_float(ctx, ((jfloat)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_deltaX), ((jfloat)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_deltaY));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jfloat M_mindustry_gen_LegsUnit_floorSpeedMultiplier_R_float(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/LegsUnit:floorSpeedMultiplier", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(1066);
	jint temp0 = (jint)((func_mindustry_gen_LegsUnit_isFlying_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_gen_LegsUnit_isFlying_R_boolean])(ctx, (frame[0].o));
	if (temp0 != 0) goto label_1;
	}
	{
	sp[0].o = (jobject)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_type;
	if (((jint)((mindustry_type_UnitType *) NULL_CHECK(sp[0].o))->F_hovering) == 0) goto label_2;
	}
label_1:;
	{
	clinit_mindustry_content_Blocks(ctx);
	sp[0].o = (jobject)SF_mindustry_content_Blocks_air;
	sp[0].o = (jobject)((func_mindustry_world_Block_asFloor_R_mindustry_world_blocks_environment_Floor) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_Block_asFloor_R_mindustry_world_blocks_environment_Floor])(ctx, sp[0].o);
	sp += 1;
	goto label_3;
	}
label_2:;
	INST_ALOAD(0);
	POP_N(1); // Pop method args
	sp->o = (jobject)((func_mindustry_gen_LegsUnit_floorOn_R_mindustry_world_blocks_environment_Floor) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_gen_LegsUnit_floorOn_R_mindustry_world_blocks_environment_Floor])(ctx, sp[0].o);
	sp++;
label_3:;
	{
	sp -= 1;
	frame[1].o = sp[0].o;
	LINE_NUMBER(1067);
	jdouble temp0 = jdouble(((jfloat)((mindustry_world_blocks_environment_Floor *) NULL_CHECK((frame[1].o)))->F_speedMultiplier));
	sp[0].o = (jobject)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_type;
	jdouble temp1 = (jdouble)SM_java_lang_Math_pow_double_double_R_double(ctx, temp0, (jdouble(((jfloat)((mindustry_type_UnitType *) NULL_CHECK(sp[0].o))->F_floorMultiplier))));
	popStackFrame(ctx);
	return ((jfloat(temp1)) * ((jfloat)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_speedMultiplier));
	}

	popStackFrame(ctx);
}

jfloat M_mindustry_gen_LegsUnit_getDuration_mindustry_type_StatusEffect_R_float(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/LegsUnit:getDuration", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(1072);
	sp[0].o = (jobject)((mindustry_gen_LegsUnit *) NULL_CHECK((frame[0].o)))->F_statuses;
	{ /* InvokeDynamic */
		clinit_mindustry_gen_LegsUnit_invoke_arc_func_Boolf_14(ctx);
		auto proxy = (mindustry_gen_LegsUnit_invoke_arc_func_Boolf_14 *) gcAlloc(ctx, &class_mindustry_gen_LegsUnit_invoke_arc_func_Boolf_14);
		proxy->F_field0 = (jref) (frame[1].o);
		sp[1].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_struct_Seq_find_arc_func_Boolf_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_find_arc_func_Boolf_R_java_lang_Object])(ctx, sp[0].o, sp[1].o);
	frame[2].o = (checkCast(ctx, &class_mindustry_entities_units_StatusEntry, sp[0].o));
	LINE_NUMBER(1073);
	if ((frame[2].o) != nullptr) goto label_2;
	}
	INST_FCONST(0);
	goto label_3;
label_2:;
	INST_ALOAD(2);
	sp[-1].f = ((mindustry_entities_units_StatusEntry *) NULL_CHECK(sp[-1].o))->F_time;
label_3:;
	popStackFrame(ctx);
	INST_FRETURN();

	popStackFrame(ctx);
}

jfloat M_mindustry_gen_LegsUnit_getX_R_float(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/LegsUnit:getX", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(1078);
	popStackFrame(ctx);
	return ((jfloat)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_x);
	}

	popStackFrame(ctx);
}

jfloat M_mindustry_gen_LegsUnit_getY_R_float(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/LegsUnit:getY", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(1083);
	popStackFrame(ctx);
	return ((jfloat)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_y);
	}

	popStackFrame(ctx);
}

jfloat M_mindustry_gen_LegsUnit_healthf_R_float(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/LegsUnit:healthf", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(1088);
	popStackFrame(ctx);
	return (((jfloat)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_health) / ((jfloat)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_maxHealth));
	}

	popStackFrame(ctx);
}

jfloat M_mindustry_gen_LegsUnit_hitSize_R_float(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/LegsUnit:hitSize", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(1093);
	popStackFrame(ctx);
	return ((jfloat)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_hitSize);
	}

	popStackFrame(ctx);
}

jfloat M_mindustry_gen_LegsUnit_legAngle_int_R_float(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/LegsUnit:legAngle", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(1098);
	sp[0].o = (jobject)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_type;
	if ((floatCompare(((jfloat)((mindustry_type_UnitType *) NULL_CHECK(sp[0].o))->F_legStraightness), (jfloat(0)), -1)) <= 0) goto label_1;
	}
	{
	LINE_NUMBER(1099);
	jfloat temp0 = (jfloat)((func_mindustry_gen_LegsUnit_defaultLegAngle_int_R_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_gen_LegsUnit_defaultLegAngle_int_R_float])(ctx, (frame[0].o), (frame[1].i));
	jint temp1 = frame[1].i;
	sp[0].o = (jobject)((mindustry_gen_LegsUnit *) NULL_CHECK((frame[0].o)))->F_legs;
	jobject temp2 = sp[0].o;
	sp[0].f = temp0;
	sp += 1;
	if (temp1 < ((((jarray) nullCheck(ctx, temp2))->length) / (jint(2)))) goto label_3;
	}
	(sp++)->f = jfloat(-90.0f);
	goto label_4;
label_3:;
	(sp++)->f = jfloat(90.0f);
label_4:;
	{
	sp -= 2;
	jfloat temp0 = sp[1].f + ((jfloat)((mindustry_gen_LegsUnit *) NULL_CHECK((frame[0].o)))->F_baseRotation);
	sp[1].o = (jobject)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_type;
	jfloat temp1 = (jfloat)SM_arc_math_Mathf_slerp_float_float_float_R_float(ctx, sp[0].f, temp0, ((jfloat)((mindustry_type_UnitType *) NULL_CHECK(sp[1].o))->F_legStraightness));
	popStackFrame(ctx);
	return temp1;
	}
label_1:;
	{
	LINE_NUMBER(1101);
	jfloat temp0 = (jfloat)((func_mindustry_gen_LegsUnit_defaultLegAngle_int_R_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_gen_LegsUnit_defaultLegAngle_int_R_float])(ctx, (frame[0].o), (frame[1].i));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jfloat M_mindustry_gen_LegsUnit_mass_R_float(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/LegsUnit:mass", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(1106);
	popStackFrame(ctx);
	return ((((jfloat)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_hitSize) * ((jfloat)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_hitSize)) * (jfloat(3.1415927f)));
	}

	popStackFrame(ctx);
}

jfloat M_mindustry_gen_LegsUnit_physicSize_R_float(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/LegsUnit:physicSize", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(1111);
	popStackFrame(ctx);
	return (((jfloat)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_hitSize) * (jfloat(0.7f)));
	}

	popStackFrame(ctx);
}

jfloat M_mindustry_gen_LegsUnit_prefRotation_R_float(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/LegsUnit:prefRotation", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(1116);
	jint temp0 = (jint)((func_mindustry_gen_LegsUnit_activelyBuilding_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_gen_LegsUnit_activelyBuilding_R_boolean])(ctx, (frame[0].o));
	if (temp0 == 0) goto label_1;
	}
	{
	sp[0].o = (jobject)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_type;
	if (((jint)((mindustry_type_UnitType *) NULL_CHECK(sp[0].o))->F_rotateToBuilding) == 0) goto label_1;
	}
	{
	LINE_NUMBER(1117);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((func_mindustry_gen_LegsUnit_buildPlan_R_mindustry_entities_units_BuildPlan) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_gen_LegsUnit_buildPlan_R_mindustry_entities_units_BuildPlan])(ctx, (frame[0].o));
	jfloat temp0 = (jfloat)((func_mindustry_gen_LegsUnit_angleTo_arc_math_geom_Position_R_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_gen_LegsUnit_angleTo_arc_math_geom_Position_R_float])(ctx, sp[0].o, sp[1].o);
	popStackFrame(ctx);
	return temp0;
	}
label_1:;
	{
	LINE_NUMBER(1118);
	sp[0].o = (jobject)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_mineTile;
	if (sp[0].o == nullptr) goto label_3;
	}
	{
	LINE_NUMBER(1119);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_mineTile;
	jfloat temp0 = (jfloat)((func_mindustry_gen_LegsUnit_angleTo_arc_math_geom_Position_R_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_gen_LegsUnit_angleTo_arc_math_geom_Position_R_float])(ctx, sp[0].o, sp[1].o);
	popStackFrame(ctx);
	return temp0;
	}
label_3:;
	{
	LINE_NUMBER(1120);
	jint temp0 = (jint)((func_mindustry_gen_LegsUnit_moving_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_gen_LegsUnit_moving_R_boolean])(ctx, (frame[0].o));
	if (temp0 == 0) goto label_5;
	}
	{
	sp[0].o = (jobject)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_type;
	if (((jint)((mindustry_type_UnitType *) NULL_CHECK(sp[0].o))->F_omniMovement) == 0) goto label_5;
	}
	{
	LINE_NUMBER(1121);
	sp[0].o = (jobject)((func_mindustry_gen_LegsUnit_vel_R_arc_math_geom_Vec2) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_gen_LegsUnit_vel_R_arc_math_geom_Vec2])(ctx, (frame[0].o));
	jfloat temp0 = (jfloat)((func_arc_math_geom_Vec2_angle_R_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Vec2_angle_R_float])(ctx, sp[0].o);
	popStackFrame(ctx);
	return temp0;
	}
label_5:;
	{
	LINE_NUMBER(1123);
	popStackFrame(ctx);
	return ((jfloat)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_rotation);
	}

	popStackFrame(ctx);
}

jfloat M_mindustry_gen_LegsUnit_range_R_float(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/LegsUnit:range", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(1128);
	sp[0].o = (jobject)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_type;
	popStackFrame(ctx);
	return ((jfloat)((mindustry_type_UnitType *) NULL_CHECK(sp[0].o))->F_maxRange);
	}

	popStackFrame(ctx);
}

jfloat M_mindustry_gen_LegsUnit_speed_R_float(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/LegsUnit:speed", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(1133);
	jint temp0 = (jint)((func_mindustry_gen_LegsUnit_isGrounded_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_gen_LegsUnit_isGrounded_R_boolean])(ctx, (frame[0].o));
	if (temp0 != 0) goto label_1;
	}
	{
	jint temp0 = (jint)((func_mindustry_gen_LegsUnit_isPlayer_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_gen_LegsUnit_isPlayer_R_boolean])(ctx, (frame[0].o));
	if (temp0 != 0) goto label_2;
	}
label_1:;
	INST_FCONST(1);
	goto label_3;
label_2:;
	{
	jfloat temp0 = jfloat(1);
	sp[0].o = (jobject)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_type;
	jfloat temp1 = (jfloat)((mindustry_type_UnitType *) NULL_CHECK(sp[0].o))->F_strafePenalty;
	sp[0].o = (jobject)((func_mindustry_gen_LegsUnit_vel_R_arc_math_geom_Vec2) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_gen_LegsUnit_vel_R_arc_math_geom_Vec2])(ctx, (frame[0].o));
	jfloat temp2 = (jfloat)((func_arc_math_geom_Vec2_angle_R_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Vec2_angle_R_float])(ctx, sp[0].o);
	jfloat temp3 = (jfloat)SM_arc_math_Angles_angleDist_float_float_R_float(ctx, temp2, ((jfloat)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_rotation));
	jfloat temp4 = (jfloat)SM_arc_math_Mathf_lerp_float_float_float_R_float(ctx, temp0, temp1, (temp3 / (jfloat(180.0f))));
	sp[0].f = temp4;
	sp += 1;
	}
label_3:;
	{
	sp -= 1;
	frame[1].f = sp[0].f;
	LINE_NUMBER(1134);
	jfloat temp0 = jfloat(1);
	sp[0].o = (jobject)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_type;
	jobject temp1 = sp[0].o;
	sp[0].f = temp0;
	sp += 1;
	if (((jint)((mindustry_type_UnitType *) NULL_CHECK(temp1))->F_canBoost) == 0) goto label_5;
	}
	{
	sp[0].o = (jobject)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_type;
	jfloat temp0 = (jfloat)((mindustry_type_UnitType *) NULL_CHECK(sp[0].o))->F_boostMultiplier;
	sp[0].f = temp0;
	sp += 1;
	goto label_6;
	}
label_5:;
	INST_FCONST(1);
label_6:;
	{
	sp -= 2;
	jfloat temp0 = (jfloat)SM_arc_math_Mathf_lerp_float_float_float_R_float(ctx, sp[0].f, sp[1].f, ((jfloat)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_elevation));
	frame[2].f = temp0;
	LINE_NUMBER(1135);
	sp[0].o = (jobject)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_type;
	jfloat temp1 = (((jfloat)((mindustry_type_UnitType *) NULL_CHECK(sp[0].o))->F_speed) * (frame[1].f)) * (frame[2].f);
	jfloat temp2 = (jfloat)((func_mindustry_gen_LegsUnit_floorSpeedMultiplier_R_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_gen_LegsUnit_floorSpeedMultiplier_R_float])(ctx, (frame[0].o));
	popStackFrame(ctx);
	return (temp1 * temp2);
	}

	popStackFrame(ctx);
}

jint M_mindustry_gen_LegsUnit_cap_R_int(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/LegsUnit:cap", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(1140);
	sp[0].o = (jobject)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_team;
	jint temp0 = (jint)SM_mindustry_entities_Units_getCap_mindustry_game_Team_R_int(ctx, sp[0].o);
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jint M_mindustry_gen_LegsUnit_collisionLayer_R_int(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/LegsUnit:collisionLayer", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(1145);
	sp[0].o = (jobject)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_type;
	if (((jint)((mindustry_type_UnitType *) NULL_CHECK(sp[0].o))->F_allowLegStep) == 0) goto label_1;
	}
	{
	sp[0].o = (jobject)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_type;
	if (((jint)((mindustry_type_UnitType *) NULL_CHECK(sp[0].o))->F_legPhysicsLayer) == 0) goto label_1;
	}
	INST_ICONST(1);
	goto label_2;
label_1:;
	{
	jint temp0 = (jint)((func_mindustry_gen_LegsUnit_isGrounded_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_gen_LegsUnit_isGrounded_R_boolean])(ctx, (frame[0].o));
	if (temp0 == 0) goto label_3;
	}
	INST_ICONST(0);
	goto label_2;
label_3:;
	INST_ICONST(2);
label_2:;
	popStackFrame(ctx);
	INST_IRETURN();

	popStackFrame(ctx);
}

jint M_mindustry_gen_LegsUnit_count_R_int(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/LegsUnit:count", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(1150);
	sp[0].o = (jobject)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_team;
	sp[0].o = (jobject)((func_mindustry_game_Team_data_R_mindustry_game_Teams$TeamData) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_game_Team_data_R_mindustry_game_Teams$TeamData])(ctx, sp[0].o);
	sp[1].o = (jobject)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_type;
	jint temp0 = (jint)((func_mindustry_game_Teams$TeamData_countType_mindustry_type_UnitType_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_game_Teams$TeamData_countType_mindustry_type_UnitType_R_int])(ctx, sp[0].o, sp[1].o);
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jint M_mindustry_gen_LegsUnit_itemCapacity_R_int(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/LegsUnit:itemCapacity", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(1155);
	sp[0].o = (jobject)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_type;
	popStackFrame(ctx);
	return ((jint)((mindustry_type_UnitType *) NULL_CHECK(sp[0].o))->F_itemCapacity);
	}

	popStackFrame(ctx);
}

jint M_mindustry_gen_LegsUnit_maxAccepted_mindustry_type_Item_R_int(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/LegsUnit:maxAccepted", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(1160);
	sp[0].o = (jobject)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_stack;
	sp[0].o = (jobject)((mindustry_type_ItemStack *) NULL_CHECK(sp[0].o))->F_item;
	if (sp[0].o == (frame[1].o)) goto label_1;
	}
	{
	sp[0].o = (jobject)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_stack;
	if (((jint)((mindustry_type_ItemStack *) NULL_CHECK(sp[0].o))->F_amount) <= 0) goto label_1;
	}
	INST_ICONST(0);
	goto label_2;
label_1:;
	{
	jint temp0 = (jint)((func_mindustry_gen_LegsUnit_itemCapacity_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_gen_LegsUnit_itemCapacity_R_int])(ctx, (frame[0].o));
	sp[0].o = (jobject)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_stack;
	jint temp1 = temp0 - ((jint)((mindustry_type_ItemStack *) NULL_CHECK(sp[0].o))->F_amount);
	sp[0].i = temp1;
	sp += 1;
	}
label_2:;
	popStackFrame(ctx);
	INST_IRETURN();

	popStackFrame(ctx);
}

jint M_mindustry_gen_LegsUnit_tileX_R_int(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/LegsUnit:tileX", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(1165);
	jint temp0 = (jint)SM_mindustry_core_World_toTile_float_R_int(ctx, ((jfloat)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_x));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jint M_mindustry_gen_LegsUnit_tileY_R_int(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/LegsUnit:tileY", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(1170);
	jint temp0 = (jint)SM_mindustry_core_World_toTile_float_R_int(ctx, ((jfloat)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_y));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jobject M_mindustry_gen_LegsUnit_senseObject_mindustry_logic_LAccess_R_java_lang_Object(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/LegsUnit:senseObject", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(1175);
	clinit_mindustry_gen_LegsUnit$1(ctx);
	sp[0].o = (jobject)SF_mindustry_gen_LegsUnit$1_$SwitchMap$mindustry$logic$LAccess;
	jint temp0 = (jint)((func_mindustry_logic_LAccess_ordinal_R_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_logic_LAccess_ordinal_R_int])(ctx, (frame[1].o));
	switch(((jint)ARRAY_ACCESS(jint, sp[0].o, temp0))) {
		case 40: goto label_1;
		case 41: goto label_2;
		case 42: goto label_3;
		case 43: goto label_4;
		case 44: goto label_5;
		case 45: goto label_6;
		case 46: goto label_7;
		case 47: goto label_8;
		case 48: goto label_9;
		default: goto label_10;
	}
	}
label_1:;
	{
	LINE_NUMBER(1176);
	sp[0].o = (jobject)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_type;
	sp += 1;
	goto label_11;
	}
label_2:;
	{
	LINE_NUMBER(1177);
	sp[0].o = (jobject)((mindustry_gen_LegsUnit *) NULL_CHECK((frame[0].o)))->F_controller;
	frame[3].o = sp[0].o;
	if ((isInstance(ctx, (frame[3].o), &class_mindustry_gen_Player)) == 0) goto label_12;
	}
	{
	frame[2].o = (checkCast(ctx, &class_mindustry_gen_Player, (frame[3].o)));
	sp[0].o = (jobject)((mindustry_gen_Player *) NULL_CHECK((frame[2].o)))->F_name;
	sp += 1;
	goto label_11;
	}
label_12:;
	INST_ACONST_NULL();
	goto label_11;
label_3:;
	{
	LINE_NUMBER(1178);
	sp[0].o = (jobject)((func_mindustry_gen_LegsUnit_stack_R_mindustry_type_ItemStack) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_gen_LegsUnit_stack_R_mindustry_type_ItemStack])(ctx, (frame[0].o));
	if (((jint)((mindustry_type_ItemStack *) NULL_CHECK(sp[0].o))->F_amount) != 0) goto label_14;
	}
	INST_ACONST_NULL();
	goto label_11;
label_14:;
	{
	sp[0].o = (jobject)((func_mindustry_gen_LegsUnit_item_R_mindustry_type_Item) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_gen_LegsUnit_item_R_mindustry_type_Item])(ctx, (frame[0].o));
	sp += 1;
	goto label_11;
	}
label_4:;
	{
	LINE_NUMBER(1179);
	jint temp0 = (jint)((func_mindustry_gen_LegsUnit_isValid_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_gen_LegsUnit_isValid_R_boolean])(ctx, (frame[0].o));
	if (temp0 != 0) goto label_15;
	}
	INST_ACONST_NULL();
	goto label_11;
label_15:;
	{
	sp[0].o = (jobject)((mindustry_gen_LegsUnit *) NULL_CHECK((frame[0].o)))->F_controller;
	frame[3].o = sp[0].o;
	if ((isInstance(ctx, (frame[3].o), &class_mindustry_ai_types_LogicAI)) == 0) goto label_16;
	}
	{
	frame[2].o = (checkCast(ctx, &class_mindustry_ai_types_LogicAI, (frame[3].o)));
	sp[0].o = (jobject)((mindustry_ai_types_LogicAI *) NULL_CHECK((frame[2].o)))->F_controller;
	sp += 1;
	goto label_11;
	}
label_16:;
	INST_ALOAD(0);
	goto label_11;
label_5:;
	{
	LINE_NUMBER(1180);
	frame[5].o = (frame[0].o);
	if ((isInstance(ctx, (frame[5].o), &class_mindustry_gen_Payloadc)) == 0) goto label_18;
	}
	{
	frame[4].o = (checkCast(ctx, &class_mindustry_gen_Payloadc, (frame[5].o)));
	sp[0].o = (jobject)((func_mindustry_gen_Payloadc_payloads_R_arc_struct_Seq) resolveInterfaceMethod(ctx, &class_mindustry_gen_Payloadc, INDEX_mindustry_gen_Payloadc_payloads_R_arc_struct_Seq, (frame[4].o)))(ctx, (frame[4].o));
	jint temp0 = (jint)((func_arc_struct_Seq_isEmpty_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_isEmpty_R_boolean])(ctx, sp[0].o);
	if (temp0 == 0) goto label_20;
	}
	INST_ACONST_NULL();
	goto label_11;
label_20:;
	{
	sp[0].o = (jobject)((func_mindustry_gen_Payloadc_payloads_R_arc_struct_Seq) resolveInterfaceMethod(ctx, &class_mindustry_gen_Payloadc, INDEX_mindustry_gen_Payloadc_payloads_R_arc_struct_Seq, (frame[4].o)))(ctx, (frame[4].o));
	sp[0].o = (jobject)((func_arc_struct_Seq_peek_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_peek_R_java_lang_Object])(ctx, sp[0].o);
	frame[5].o = sp[0].o;
	if ((isInstance(ctx, (frame[5].o), &class_mindustry_world_blocks_payloads_UnitPayload)) == 0) goto label_21;
	}
	{
	frame[3].o = (checkCast(ctx, &class_mindustry_world_blocks_payloads_UnitPayload, (frame[5].o)));
	sp[0].o = (jobject)((mindustry_world_blocks_payloads_UnitPayload *) NULL_CHECK((frame[3].o)))->F_unit;
	sp[0].o = (jobject)((mindustry_gen_Unit *) NULL_CHECK(sp[0].o))->F_type;
	sp += 1;
	goto label_11;
	}
label_21:;
	{
	sp[0].o = (jobject)((func_mindustry_gen_Payloadc_payloads_R_arc_struct_Seq) resolveInterfaceMethod(ctx, &class_mindustry_gen_Payloadc, INDEX_mindustry_gen_Payloadc_payloads_R_arc_struct_Seq, (frame[4].o)))(ctx, (frame[4].o));
	sp[0].o = (jobject)((func_arc_struct_Seq_peek_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_peek_R_java_lang_Object])(ctx, sp[0].o);
	frame[5].o = sp[0].o;
	if ((isInstance(ctx, (frame[5].o), &class_mindustry_world_blocks_payloads_BuildPayload)) == 0) goto label_23;
	}
	{
	frame[2].o = (checkCast(ctx, &class_mindustry_world_blocks_payloads_BuildPayload, (frame[5].o)));
	sp[0].o = (jobject)((func_mindustry_world_blocks_payloads_BuildPayload_block_R_mindustry_world_Block) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_mindustry_world_blocks_payloads_BuildPayload_block_R_mindustry_world_Block])(ctx, (frame[2].o));
	sp += 1;
	goto label_11;
	}
label_23:;
	INST_ACONST_NULL();
	goto label_11;
label_18:;
	INST_ACONST_NULL();
	goto label_11;
label_6:;
	{
	LINE_NUMBER(1181);
	jint temp0 = (jint)((func_mindustry_gen_LegsUnit_isBuilding_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_gen_LegsUnit_isBuilding_R_boolean])(ctx, (frame[0].o));
	if (temp0 == 0) goto label_25;
	}
	{
	sp[0].o = (jobject)((func_mindustry_gen_LegsUnit_buildPlan_R_mindustry_entities_units_BuildPlan) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_gen_LegsUnit_buildPlan_R_mindustry_entities_units_BuildPlan])(ctx, (frame[0].o));
	if (((jint)((mindustry_entities_units_BuildPlan *) NULL_CHECK(sp[0].o))->F_breaking) != 0) goto label_25;
	}
	{
	sp[0].o = (jobject)((func_mindustry_gen_LegsUnit_buildPlan_R_mindustry_entities_units_BuildPlan) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_gen_LegsUnit_buildPlan_R_mindustry_entities_units_BuildPlan])(ctx, (frame[0].o));
	sp[0].o = (jobject)((func_mindustry_entities_units_BuildPlan_tile_R_mindustry_world_Tile) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_entities_units_BuildPlan_tile_R_mindustry_world_Tile])(ctx, sp[0].o);
	sp[0].o = (jobject)((mindustry_world_Tile *) NULL_CHECK(sp[0].o))->F_build;
	sp += 1;
	goto label_11;
	}
label_25:;
	INST_ACONST_NULL();
	goto label_11;
label_7:;
	{
	LINE_NUMBER(1182);
	jint temp0 = (jint)((func_mindustry_gen_LegsUnit_isBuilding_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_gen_LegsUnit_isBuilding_R_boolean])(ctx, (frame[0].o));
	if (temp0 == 0) goto label_26;
	}
	{
	sp[0].o = (jobject)((func_mindustry_gen_LegsUnit_buildPlan_R_mindustry_entities_units_BuildPlan) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_gen_LegsUnit_buildPlan_R_mindustry_entities_units_BuildPlan])(ctx, (frame[0].o));
	if (((jint)((mindustry_entities_units_BuildPlan *) NULL_CHECK(sp[0].o))->F_breaking) == 0) goto label_26;
	}
	{
	sp[0].o = (jobject)((func_mindustry_gen_LegsUnit_buildPlan_R_mindustry_entities_units_BuildPlan) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_gen_LegsUnit_buildPlan_R_mindustry_entities_units_BuildPlan])(ctx, (frame[0].o));
	sp[0].o = (jobject)((func_mindustry_entities_units_BuildPlan_tile_R_mindustry_world_Tile) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_entities_units_BuildPlan_tile_R_mindustry_world_Tile])(ctx, sp[0].o);
	sp[0].o = (jobject)((mindustry_world_Tile *) NULL_CHECK(sp[0].o))->F_build;
	sp += 1;
	goto label_11;
	}
label_26:;
	INST_ACONST_NULL();
	goto label_11;
label_8:;
	{
	LINE_NUMBER(1183);
	sp[0].o = (jobject)((mindustry_gen_LegsUnit *) NULL_CHECK((frame[0].o)))->F_controller;
	frame[3].o = sp[0].o;
	if ((isInstance(ctx, (frame[3].o), &class_mindustry_gen_Player)) == 0) goto label_27;
	}
	{
	frame[2].o = (checkCast(ctx, &class_mindustry_gen_Player, (frame[3].o)));
	sp[0].o = (jobject)((mindustry_gen_Player *) NULL_CHECK((frame[2].o)))->F_selectedBlock;
	sp += 1;
	goto label_11;
	}
label_27:;
	INST_ACONST_NULL();
	goto label_11;
label_9:;
	{
	LINE_NUMBER(1184);
	sp[0].o = (jobject)((mindustry_gen_LegsUnit *) NULL_CHECK((frame[0].o)))->F_controller;
	frame[3].o = sp[0].o;
	if ((isInstance(ctx, (frame[3].o), &class_mindustry_gen_Player)) == 0) goto label_29;
	}
	{
	frame[2].o = (checkCast(ctx, &class_mindustry_gen_Player, (frame[3].o)));
	jint temp0 = (jint)((func_mindustry_gen_Player_isPinging_R_boolean) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_mindustry_gen_Player_isPinging_R_boolean])(ctx, (frame[2].o));
	if (temp0 == 0) goto label_29;
	}
	{
	sp[0].o = (jobject)((mindustry_gen_Player *) NULL_CHECK((frame[2].o)))->F_pingText;
	sp += 1;
	goto label_11;
	}
label_29:;
	INST_ACONST_NULL();
	goto label_11;
label_10:;
	LINE_NUMBER(1185);
	clinit_mindustry_gen_LegsUnit(ctx);
	(sp++)->o = SF_mindustry_logic_Senseable_noSensed;
label_11:;
	LINE_NUMBER(1175);
	popStackFrame(ctx);
	INST_ARETURN();

	popStackFrame(ctx);
}

jobject M_mindustry_gen_LegsUnit_toString_R_java_lang_String(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/LegsUnit:toString", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(1191);
	jint temp0 = (jint)((func_mindustry_gen_LegsUnit_id_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_gen_LegsUnit_id_R_int])(ctx, (frame[0].o));
	sp[0].o = (jobject)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_type;
	sp[0].o = (jobject)SM_java_lang_String_valueOf_java_lang_Object_R_java_lang_String(ctx, sp[0].o);
	sp[0].o = (jobject)concatStringsRecipe(ctx, u8"Unit#\u0001:\u0001 (\u0001, \u0001)"_j.string, 4, boxInteger(ctx, temp0), sp[0].o, boxFloat(ctx, ((jfloat)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_x)), boxFloat(ctx, ((jfloat)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_y)));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_mindustry_gen_LegsUnit_command_R_mindustry_ai_types_CommandAI(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/LegsUnit:command", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(1196);
	sp[0].o = (jobject)((mindustry_gen_LegsUnit *) NULL_CHECK((frame[0].o)))->F_controller;
	frame[2].o = sp[0].o;
	if ((isInstance(ctx, (frame[2].o), &class_mindustry_ai_types_CommandAI)) == 0) goto label_1;
	}
	{
	frame[1].o = (checkCast(ctx, &class_mindustry_ai_types_CommandAI, (frame[2].o)));
	LINE_NUMBER(1197);
	popStackFrame(ctx);
	return (frame[1].o);
	}
label_1:;
	{
	LINE_NUMBER(1199);
	clinit_java_lang_IllegalArgumentException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IllegalArgumentException);
	init_java_lang_IllegalArgumentException_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"Unit cannot be commanded - check isCommandable() first."_j))));
	throwException(ctx, sp[0].o);	}

	popStackFrame(ctx);
}

jobject M_mindustry_gen_LegsUnit_solidity_R_mindustry_entities_EntityCollisions$SolidPred(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/LegsUnit:solidity", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(1205);
	jint temp0 = (jint)((func_mindustry_gen_LegsUnit_ignoreSolids_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_gen_LegsUnit_ignoreSolids_R_boolean])(ctx, (frame[0].o));
	if (temp0 == 0) goto label_1;
	}
	INST_ACONST_NULL();
	goto label_2;
label_1:;
	{
	sp[0].o = (jobject)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_type;
	if (((jint)((mindustry_type_UnitType *) NULL_CHECK(sp[0].o))->F_allowLegStep) == 0) goto label_3;
	}
	{ /* InvokeDynamic */
		clinit_mindustry_gen_LegsUnit_invoke_mindustry_entities_EntityCollisions$SolidPred_2(ctx);
		auto proxy = (mindustry_gen_LegsUnit_invoke_mindustry_entities_EntityCollisions$SolidPred_2 *) gcAlloc(ctx, &class_mindustry_gen_LegsUnit_invoke_mindustry_entities_EntityCollisions$SolidPred_2);
		PUSH_OBJECT((jobject) proxy);
	}
	goto label_2;
label_3:;
	{ /* InvokeDynamic */
		clinit_mindustry_gen_LegsUnit_invoke_mindustry_entities_EntityCollisions$SolidPred_3(ctx);
		auto proxy = (mindustry_gen_LegsUnit_invoke_mindustry_entities_EntityCollisions$SolidPred_3 *) gcAlloc(ctx, &class_mindustry_gen_LegsUnit_invoke_mindustry_entities_EntityCollisions$SolidPred_3);
		PUSH_OBJECT((jobject) proxy);
	}
label_2:;
	popStackFrame(ctx);
	INST_ARETURN();

	popStackFrame(ctx);
}

jobject M_mindustry_gen_LegsUnit_applyDynamicStatus_R_mindustry_entities_units_StatusEntry(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/LegsUnit:applyDynamicStatus", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(1210);
	sp[0].o = frame[0].o;
	clinit_mindustry_content_StatusEffects(ctx);
	sp[1].o = (jobject)SF_mindustry_content_StatusEffects_dynamic;
	jint temp0 = (jint)((func_mindustry_gen_LegsUnit_hasEffect_mindustry_type_StatusEffect_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_gen_LegsUnit_hasEffect_mindustry_type_StatusEffect_R_boolean])(ctx, sp[0].o, sp[1].o);
	if (temp0 == 0) goto label_1;
	}
	{
	LINE_NUMBER(1211);
	sp[0].o = (jobject)((mindustry_gen_LegsUnit *) NULL_CHECK((frame[0].o)))->F_statuses;
	{ /* InvokeDynamic */
		clinit_mindustry_gen_LegsUnit_invoke_arc_func_Boolf_15(ctx);
		auto proxy = (mindustry_gen_LegsUnit_invoke_arc_func_Boolf_15 *) gcAlloc(ctx, &class_mindustry_gen_LegsUnit_invoke_arc_func_Boolf_15);
		sp[1].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_struct_Seq_find_arc_func_Boolf_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_find_arc_func_Boolf_R_java_lang_Object])(ctx, sp[0].o, sp[1].o);
	frame[1].o = (checkCast(ctx, &class_mindustry_entities_units_StatusEntry, sp[0].o));
	LINE_NUMBER(1212);
	if ((frame[1].o) == nullptr) goto label_1;
	}
	INST_ALOAD(1);
	popStackFrame(ctx);
	INST_ARETURN();
label_1:;
	{
	LINE_NUMBER(1214);
	sp[0].o = ((jobject) &class_mindustry_entities_units_StatusEntry);
	{ /* InvokeDynamic */
		clinit_mindustry_gen_LegsUnit_invoke_arc_func_Prov_3(ctx);
		auto proxy = (mindustry_gen_LegsUnit_invoke_arc_func_Prov_3 *) gcAlloc(ctx, &class_mindustry_gen_LegsUnit_invoke_arc_func_Prov_3);
		sp[1].o = (jobject) proxy;
	}
	sp[0].o = (jobject)SM_arc_util_pooling_Pools_obtain_java_lang_Class_arc_func_Prov_R_java_lang_Object(ctx, sp[0].o, sp[1].o);
	frame[1].o = (checkCast(ctx, &class_mindustry_entities_units_StatusEntry, sp[0].o));
	LINE_NUMBER(1215);
	sp[0].o = frame[1].o;
	clinit_mindustry_content_StatusEffects(ctx);
	sp[1].o = (jobject)SF_mindustry_content_StatusEffects_dynamic;
	sp[0].o = (jobject)((func_mindustry_entities_units_StatusEntry_set_mindustry_type_StatusEffect_float_R_mindustry_entities_units_StatusEntry) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_entities_units_StatusEntry_set_mindustry_type_StatusEffect_float_R_mindustry_entities_units_StatusEntry])(ctx, sp[0].o, sp[1].o, (jfloat(std::numeric_limits<float>::infinity())));
	LINE_NUMBER(1216);
	sp[0].o = (jobject)((mindustry_gen_LegsUnit *) NULL_CHECK((frame[0].o)))->F_statuses;
	sp[0].o = (jobject)((func_arc_struct_Seq_add_java_lang_Object_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_add_java_lang_Object_R_arc_struct_Seq])(ctx, sp[0].o, (frame[1].o));
	LINE_NUMBER(1217);
	sp[0].o = (jobject)((mindustry_gen_LegsUnit *) NULL_CHECK((frame[0].o)))->F_applied;
	clinit_mindustry_content_StatusEffects(ctx);
	sp[1].o = (jobject)SF_mindustry_content_StatusEffects_dynamic;
	((func_arc_struct_Bits_set_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Bits_set_int])(ctx, sp[0].o, ((jint)((mindustry_ctype_Content *) NULL_CHECK(sp[1].o))->F_id));
	LINE_NUMBER(1218);
	sp[0].o = (jobject)((mindustry_entities_units_StatusEntry *) NULL_CHECK((frame[1].o)))->F_effect;
	((func_mindustry_type_StatusEffect_applied_mindustry_gen_Unit_float_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_type_StatusEffect_applied_mindustry_gen_Unit_float_boolean])(ctx, sp[0].o, (frame[0].o), ((jfloat)((mindustry_entities_units_StatusEntry *) NULL_CHECK((frame[1].o)))->F_time), (jint(0)));
	LINE_NUMBER(1219);
	popStackFrame(ctx);
	return (frame[1].o);
	}

	popStackFrame(ctx);
}

jobject M_mindustry_gen_LegsUnit_controller_R_mindustry_entities_units_UnitController(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/LegsUnit:controller", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(1224);
	sp[0].o = (jobject)((mindustry_gen_LegsUnit *) NULL_CHECK((frame[0].o)))->F_controller;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_mindustry_gen_LegsUnit_item_R_mindustry_type_Item(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/LegsUnit:item", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(1229);
	sp[0].o = (jobject)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_stack;
	sp[0].o = (jobject)((mindustry_type_ItemStack *) NULL_CHECK(sp[0].o))->F_item;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_mindustry_gen_LegsUnit_blockOn_R_mindustry_world_Block(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/LegsUnit:blockOn", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(1234);
	sp[0].o = (jobject)((func_mindustry_gen_LegsUnit_tileOn_R_mindustry_world_Tile) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_gen_LegsUnit_tileOn_R_mindustry_world_Tile])(ctx, (frame[0].o));
	frame[1].o = sp[0].o;
	LINE_NUMBER(1235);
	if ((frame[1].o) != nullptr) goto label_2;
	}
	clinit_mindustry_content_Blocks(ctx);
	(sp++)->o = SF_mindustry_content_Blocks_air;
	goto label_3;
label_2:;
	INST_ALOAD(1);
	POP_N(1); // Pop method args
	sp->o = (jobject)((func_mindustry_world_Tile_block_R_mindustry_world_Block) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_Tile_block_R_mindustry_world_Block])(ctx, sp[0].o);
	sp++;
label_3:;
	popStackFrame(ctx);
	INST_ARETURN();

	popStackFrame(ctx);
}

jobject M_mindustry_gen_LegsUnit_drownFloor_R_mindustry_world_blocks_environment_Floor(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/LegsUnit:drownFloor", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(1240);
	sp[0].o = (jobject)((mindustry_gen_LegsUnit *) NULL_CHECK((frame[0].o)))->F_lastDeepFloor;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_mindustry_gen_LegsUnit_floorOn_R_mindustry_world_blocks_environment_Floor(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/LegsUnit:floorOn", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(1245);
	sp[0].o = (jobject)((func_mindustry_gen_LegsUnit_tileOn_R_mindustry_world_Tile) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_gen_LegsUnit_tileOn_R_mindustry_world_Tile])(ctx, (frame[0].o));
	frame[1].o = sp[0].o;
	LINE_NUMBER(1246);
	if ((frame[1].o) == nullptr) goto label_2;
	}
	{
	sp[0].o = (jobject)((func_mindustry_world_Tile_block_R_mindustry_world_Block) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_world_Tile_block_R_mindustry_world_Block])(ctx, (frame[1].o));
	clinit_mindustry_content_Blocks(ctx);
	sp[1].o = (jobject)SF_mindustry_content_Blocks_air;
	if (sp[0].o == sp[1].o) goto label_3;
	}
label_2:;
	{
	clinit_mindustry_content_Blocks(ctx);
	sp[0].o = (jobject)SF_mindustry_content_Blocks_air;
	sp[0].o = checkCast(ctx, &class_mindustry_world_blocks_environment_Floor, sp[0].o);
	sp += 1;
	goto label_4;
	}
label_3:;
	INST_ALOAD(1);
	POP_N(1); // Pop method args
	sp->o = (jobject)((func_mindustry_world_Tile_floor_R_mindustry_world_blocks_environment_Floor) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_Tile_floor_R_mindustry_world_blocks_environment_Floor])(ctx, sp[0].o);
	sp++;
label_4:;
	popStackFrame(ctx);
	INST_ARETURN();

	popStackFrame(ctx);
}

jobject SM_mindustry_gen_LegsUnit_create_R_mindustry_gen_LegsUnit(jcontext ctx) {
	jtype frame[2];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/LegsUnit:create", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_gen_LegsUnit(ctx);
	{
	LINE_NUMBER(1250);
	clinit_mindustry_gen_LegsUnit(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_gen_LegsUnit);
	init_mindustry_gen_LegsUnit(ctx, sp[0].o);
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void M_mindustry_gen_LegsUnit_add(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/LegsUnit:add", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(1254);
	if (((jint)((mindustry_gen_LegsUnit *) NULL_CHECK((frame[0].o)))->F_added) != (jint(1))) goto label_1;
	}
	popStackFrame(ctx);
	INST_RETURN();
label_1:;
	{
	LINE_NUMBER(1255);
	sp[0].o = frame[0].o;
	clinit_mindustry_gen_Groups(ctx);
	sp[1].o = (jobject)SF_mindustry_gen_Groups_unit;
	jint temp0 = (jint)((func_mindustry_entities_EntityGroup_addIndex_mindustry_gen_Entityc_R_int) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_mindustry_entities_EntityGroup_addIndex_mindustry_gen_Entityc_R_int])(ctx, sp[1].o, (frame[0].o));
	((mindustry_gen_Unit *) NULL_CHECK(sp[0].o))->F_index__unit = temp0;
	LINE_NUMBER(1256);
	sp[0].o = frame[0].o;
	clinit_mindustry_gen_Groups(ctx);
	sp[1].o = (jobject)SF_mindustry_gen_Groups_sync;
	jint temp1 = (jint)((func_mindustry_entities_EntityGroup_addIndex_mindustry_gen_Entityc_R_int) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_mindustry_entities_EntityGroup_addIndex_mindustry_gen_Entityc_R_int])(ctx, sp[1].o, (frame[0].o));
	((mindustry_gen_Unit *) NULL_CHECK(sp[0].o))->F_index__sync = temp1;
	LINE_NUMBER(1257);
	sp[0].o = frame[0].o;
	clinit_mindustry_gen_Groups(ctx);
	sp[1].o = (jobject)SF_mindustry_gen_Groups_draw;
	jint temp2 = (jint)((func_mindustry_entities_EntityGroup_addIndex_mindustry_gen_Entityc_R_int) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_mindustry_entities_EntityGroup_addIndex_mindustry_gen_Entityc_R_int])(ctx, sp[1].o, (frame[0].o));
	((mindustry_gen_Unit *) NULL_CHECK(sp[0].o))->F_index__draw = temp2;
	LINE_NUMBER(1260);
	((mindustry_gen_LegsUnit *) NULL_CHECK((frame[0].o)))->F_added = (jint(1));
	LINE_NUMBER(1264);
	((func_mindustry_gen_LegsUnit_updateLastPosition) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_gen_LegsUnit_updateLastPosition])(ctx, (frame[0].o));
	LINE_NUMBER(1268);
	((func_mindustry_gen_LegsUnit_resetLegs) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_gen_LegsUnit_resetLegs])(ctx, (frame[0].o));
	LINE_NUMBER(1272);
	sp[0].o = (jobject)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_team;
	sp[0].o = (jobject)((func_mindustry_game_Team_data_R_mindustry_game_Teams$TeamData) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_game_Team_data_R_mindustry_game_Teams$TeamData])(ctx, sp[0].o);
	sp[1].o = (jobject)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_type;
	((func_mindustry_game_Teams$TeamData_updateCount_mindustry_type_UnitType_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_game_Teams$TeamData_updateCount_mindustry_type_UnitType_int])(ctx, sp[0].o, sp[1].o, (jint(1)));
	LINE_NUMBER(1273);
	sp[0].o = (jobject)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_type;
	if (((jint)((mindustry_type_UnitType *) NULL_CHECK(sp[0].o))->F_useUnitCap) == 0) goto label_9;
	}
	{
	jint temp0 = (jint)((func_mindustry_gen_LegsUnit_count_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_gen_LegsUnit_count_R_int])(ctx, (frame[0].o));
	jint temp1 = (jint)((func_mindustry_gen_LegsUnit_cap_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_gen_LegsUnit_cap_R_int])(ctx, (frame[0].o));
	if (temp0 <= temp1) goto label_9;
	}
	{
	if (((jint)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_spawnedByCore) != 0) goto label_9;
	}
	{
	if (((jint)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_dead) != 0) goto label_9;
	}
	{
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	sp[0].o = (jobject)((mindustry_core_GameState *) NULL_CHECK(sp[0].o))->F_rules;
	if (((jint)((mindustry_game_Rules *) NULL_CHECK(sp[0].o))->F_editor) != 0) goto label_9;
	}
	{
	LINE_NUMBER(1274);
	SM_mindustry_gen_Call_unitCapDeath_mindustry_gen_Unit(ctx, (frame[0].o));
	LINE_NUMBER(1275);
	sp[0].o = (jobject)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_team;
	sp[0].o = (jobject)((func_mindustry_game_Team_data_R_mindustry_game_Teams$TeamData) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_game_Team_data_R_mindustry_game_Teams$TeamData])(ctx, sp[0].o);
	sp[1].o = (jobject)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_type;
	((func_mindustry_game_Teams$TeamData_updateCount_mindustry_type_UnitType_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_game_Teams$TeamData_updateCount_mindustry_type_UnitType_int])(ctx, sp[0].o, sp[1].o, (jint(-1)));
	}
label_9:;
	{
	LINE_NUMBER(1277);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_unitPhysics;
	((func_mindustry_async_PhysicsProcess_add_mindustry_gen_Unit) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_async_PhysicsProcess_add_mindustry_gen_Unit])(ctx, sp[0].o, (frame[0].o));
	LINE_NUMBER(1279);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_gen_LegsUnit_addBuild_mindustry_entities_units_BuildPlan(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/LegsUnit:addBuild", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(1283);
	((func_mindustry_gen_LegsUnit_addBuild_mindustry_entities_units_BuildPlan_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_gen_LegsUnit_addBuild_mindustry_entities_units_BuildPlan_boolean])(ctx, (frame[0].o), (frame[1].o), (jint(1)));
	LINE_NUMBER(1284);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_gen_LegsUnit_addBuild_mindustry_entities_units_BuildPlan_boolean(jcontext ctx, jobject self, jobject param0, jbool param1) {
	NULL_CHECK(self);
	jtype frame[10];
	auto stack = &frame[7];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/LegsUnit:addBuild", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(1288);
	jint temp0 = (jint)((func_mindustry_gen_LegsUnit_canBuild_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_gen_LegsUnit_canBuild_R_boolean])(ctx, (frame[0].o));
	if (temp0 != 0) goto label_1;
	}
	popStackFrame(ctx);
	INST_RETURN();
label_1:;
	{
	LINE_NUMBER(1289);
	frame[3].o = (jobject(nullptr));
	LINE_NUMBER(1290);
	sp[0].o = (jobject)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_plans;
	sp[0].o = (jobject)((func_arc_struct_Queue_iterator_R_java_util_Iterator) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Queue_iterator_R_java_util_Iterator])(ctx, sp[0].o);
	frame[4].o = sp[0].o;
	}
label_3:;
	{
	jint temp0 = (jint)((func_java_util_Iterator_hasNext_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_hasNext_R_boolean, (frame[4].o)))(ctx, (frame[4].o));
	if (temp0 == 0) goto label_4;
	}
	{
	sp[0].o = (jobject)((func_java_util_Iterator_next_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_next_R_java_lang_Object, (frame[4].o)))(ctx, (frame[4].o));
	frame[5].o = (checkCast(ctx, &class_mindustry_entities_units_BuildPlan, sp[0].o));
	LINE_NUMBER(1291);
	if (((jint)((mindustry_entities_units_BuildPlan *) NULL_CHECK((frame[5].o)))->F_x) != ((jint)((mindustry_entities_units_BuildPlan *) NULL_CHECK((frame[1].o)))->F_x)) goto label_6;
	}
	{
	if (((jint)((mindustry_entities_units_BuildPlan *) NULL_CHECK((frame[5].o)))->F_y) != ((jint)((mindustry_entities_units_BuildPlan *) NULL_CHECK((frame[1].o)))->F_y)) goto label_6;
	}
	{
	LINE_NUMBER(1292);
	frame[3].o = (frame[5].o);
	LINE_NUMBER(1293);
	goto label_4;
	}
label_6:;
	LINE_NUMBER(1295);
	goto label_3;
label_4:;
	{
	LINE_NUMBER(1296);
	if ((frame[3].o) == nullptr) goto label_9;
	}
	{
	LINE_NUMBER(1297);
	sp[0].o = (jobject)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_plans;
	jint temp0 = (jint)((func_arc_struct_Queue_remove_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Queue_remove_java_lang_Object_R_boolean])(ctx, sp[0].o, (frame[3].o));
	}
label_9:;
	{
	LINE_NUMBER(1299);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_world;
	sp[0].o = (jobject)((func_mindustry_core_World_tile_int_int_R_mindustry_world_Tile) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_World_tile_int_int_R_mindustry_world_Tile])(ctx, sp[0].o, ((jint)((mindustry_entities_units_BuildPlan *) NULL_CHECK((frame[1].o)))->F_x), ((jint)((mindustry_entities_units_BuildPlan *) NULL_CHECK((frame[1].o)))->F_y));
	frame[4].o = sp[0].o;
	LINE_NUMBER(1300);
	if ((frame[4].o) == nullptr) goto label_12;
	}
	{
	sp[0].o = (jobject)((mindustry_world_Tile *) NULL_CHECK((frame[4].o)))->F_build;
	frame[6].o = sp[0].o;
	if ((isInstance(ctx, (frame[6].o), &class_mindustry_world_blocks_ConstructBlock$ConstructBuild)) == 0) goto label_12;
	}
	{
	frame[5].o = (checkCast(ctx, &class_mindustry_world_blocks_ConstructBlock$ConstructBuild, (frame[6].o)));
	LINE_NUMBER(1301);
	((mindustry_entities_units_BuildPlan *) NULL_CHECK((frame[1].o)))->F_progress = ((jfloat)((mindustry_world_blocks_ConstructBlock$ConstructBuild *) NULL_CHECK((frame[5].o)))->F_progress);
	}
label_12:;
	{
	LINE_NUMBER(1303);
	if ((frame[2].i) == 0) goto label_14;
	}
	{
	LINE_NUMBER(1304);
	sp[0].o = (jobject)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_plans;
	((func_arc_struct_Queue_addLast_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Queue_addLast_java_lang_Object])(ctx, sp[0].o, (frame[1].o));
	goto label_16;
	}
label_14:;
	{
	LINE_NUMBER(1306);
	sp[0].o = (jobject)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_plans;
	((func_arc_struct_Queue_addFirst_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Queue_addFirst_java_lang_Object])(ctx, sp[0].o, (frame[1].o));
	}
label_16:;
	LINE_NUMBER(1308);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_gen_LegsUnit_addItem_mindustry_type_Item(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/LegsUnit:addItem", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(1312);
	((func_mindustry_gen_LegsUnit_addItem_mindustry_type_Item_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_gen_LegsUnit_addItem_mindustry_type_Item_int])(ctx, (frame[0].o), (frame[1].o), (jint(1)));
	LINE_NUMBER(1313);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_gen_LegsUnit_addItem_mindustry_type_Item_int(jcontext ctx, jobject self, jobject param0, jint param1) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/LegsUnit:addItem", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(1317);
	sp[0].o = (jobject)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_stack;
	sp[1].o = (jobject)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_stack;
	sp[1].o = (jobject)((mindustry_type_ItemStack *) NULL_CHECK(sp[1].o))->F_item;
	sp += 1;
	if (sp[0].o != (frame[1].o)) goto label_1;
	}
	{
	sp[0].o = (jobject)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_stack;
	jint temp0 = ((jint)((mindustry_type_ItemStack *) NULL_CHECK(sp[0].o))->F_amount) + (frame[2].i);
	sp[0].i = temp0;
	sp += 1;
	goto label_2;
	}
label_1:;
	INST_ILOAD(2);
label_2:;
	{
	sp -= 2;
	((mindustry_type_ItemStack *) NULL_CHECK(sp[0].o))->F_amount = sp[1].i;
	LINE_NUMBER(1318);
	sp[0].o = (jobject)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_stack;
	((mindustry_type_ItemStack *) NULL_CHECK(sp[0].o))->F_item = (jref) (frame[1].o);
	LINE_NUMBER(1319);
	sp[0].o = (jobject)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_stack;
	sp[1].o = (jobject)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_stack;
	jint temp0 = (jint)((mindustry_type_ItemStack *) NULL_CHECK(sp[1].o))->F_amount;
	jint temp1 = jint(0);
	jint temp2 = (jint)((func_mindustry_gen_LegsUnit_itemCapacity_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_gen_LegsUnit_itemCapacity_R_int])(ctx, (frame[0].o));
	jint temp3 = (jint)SM_arc_math_Mathf_clamp_int_int_int_R_int(ctx, temp0, temp1, temp2);
	((mindustry_type_ItemStack *) NULL_CHECK(sp[0].o))->F_amount = temp3;
	LINE_NUMBER(1320);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_gen_LegsUnit_afterRead(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/LegsUnit:afterRead", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(1325);
	sp[0].o = (jobject)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_plans;
	if (sp[0].o != nullptr) goto label_1;
	}
	{
	LINE_NUMBER(1326);
	sp[0].o = frame[0].o;
	clinit_arc_struct_Queue(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_struct_Queue);
	init_arc_struct_Queue_int(ctx, sp[1].o, (jint(1)));
	((mindustry_gen_Unit *) NULL_CHECK(sp[0].o))->F_plans = (jref) sp[1].o;
	}
label_1:;
	{
	LINE_NUMBER(1334);
	((func_mindustry_gen_LegsUnit_updateLastPosition) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_gen_LegsUnit_updateLastPosition])(ctx, (frame[0].o));
	LINE_NUMBER(1338);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_type;
	((func_mindustry_gen_LegsUnit_setType_mindustry_type_UnitType) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_gen_LegsUnit_setType_mindustry_type_UnitType])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(1339);
	sp[0].o = (jobject)((mindustry_gen_LegsUnit *) NULL_CHECK((frame[0].o)))->F_controller;
	((func_mindustry_entities_units_UnitController_unit_mindustry_gen_Unit) resolveInterfaceMethod(ctx, &class_mindustry_entities_units_UnitController, INDEX_mindustry_entities_units_UnitController_unit_mindustry_gen_Unit, sp[0].o))(ctx, sp[0].o, (frame[0].o));
	LINE_NUMBER(1340);
	sp[0].o = (jobject)((mindustry_gen_LegsUnit *) NULL_CHECK((frame[0].o)))->F_controller;
	frame[2].o = sp[0].o;
	if ((isInstance(ctx, (frame[2].o), &class_mindustry_entities_units_AIController)) == 0) goto label_6;
	}
	{
	frame[1].o = (checkCast(ctx, &class_mindustry_entities_units_AIController, (frame[2].o)));
	jint temp0 = (jint)((func_mindustry_entities_units_AIController_keepState_R_boolean) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_entities_units_AIController_keepState_R_boolean])(ctx, (frame[1].o));
	if (temp0 != 0) goto label_8;
	}
label_6:;
	{
	LINE_NUMBER(1341);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_type;
	sp[1].o = (jobject)((func_mindustry_type_UnitType_createController_mindustry_gen_Unit_R_mindustry_entities_units_UnitController) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_mindustry_type_UnitType_createController_mindustry_gen_Unit_R_mindustry_entities_units_UnitController])(ctx, sp[1].o, (frame[0].o));
	((func_mindustry_gen_LegsUnit_controller_mindustry_entities_units_UnitController) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_gen_LegsUnit_controller_mindustry_entities_units_UnitController])(ctx, sp[0].o, sp[1].o);
	}
label_8:;
	LINE_NUMBER(1344);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_gen_LegsUnit_afterReadAll(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/LegsUnit:afterReadAll", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(1352);
	sp[0].o = (jobject)((mindustry_gen_LegsUnit *) NULL_CHECK((frame[0].o)))->F_controller;
	((func_mindustry_entities_units_UnitController_afterRead_mindustry_gen_Unit) resolveInterfaceMethod(ctx, &class_mindustry_entities_units_UnitController, INDEX_mindustry_entities_units_UnitController_afterRead_mindustry_gen_Unit, sp[0].o))(ctx, sp[0].o, (frame[0].o));
	LINE_NUMBER(1354);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_gen_LegsUnit_afterSync(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/LegsUnit:afterSync", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(1362);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_type;
	((func_mindustry_gen_LegsUnit_setType_mindustry_type_UnitType) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_gen_LegsUnit_setType_mindustry_type_UnitType])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(1363);
	sp[0].o = (jobject)((mindustry_gen_LegsUnit *) NULL_CHECK((frame[0].o)))->F_controller;
	((func_mindustry_entities_units_UnitController_unit_mindustry_gen_Unit) resolveInterfaceMethod(ctx, &class_mindustry_entities_units_UnitController, INDEX_mindustry_entities_units_UnitController_unit_mindustry_gen_Unit, sp[0].o))(ctx, sp[0].o, (frame[0].o));
	LINE_NUMBER(1365);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_gen_LegsUnit_aim_arc_math_geom_Position(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/LegsUnit:aim", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(1369);
	sp[0].o = frame[0].o;
	jfloat temp0 = (jfloat)((func_arc_math_geom_Position_getX_R_float) resolveInterfaceMethod(ctx, &class_arc_math_geom_Position, INDEX_arc_math_geom_Position_getX_R_float, (frame[1].o)))(ctx, (frame[1].o));
	jfloat temp1 = (jfloat)((func_arc_math_geom_Position_getY_R_float) resolveInterfaceMethod(ctx, &class_arc_math_geom_Position, INDEX_arc_math_geom_Position_getY_R_float, (frame[1].o)))(ctx, (frame[1].o));
	((func_mindustry_gen_LegsUnit_aim_float_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_gen_LegsUnit_aim_float_float])(ctx, sp[0].o, temp0, temp1);
	LINE_NUMBER(1370);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_gen_LegsUnit_aim_float_float(jcontext ctx, jobject self, jfloat param0, jfloat param1) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/LegsUnit:aim", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	frame[2].f = param1;
	{
	LINE_NUMBER(1374);
	((func_mindustry_gen_LegsUnit_aim_float_float_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_gen_LegsUnit_aim_float_float_boolean])(ctx, (frame[0].o), (frame[1].f), (frame[2].f), (jint(0)));
	LINE_NUMBER(1375);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_gen_LegsUnit_aim_float_float_boolean(jcontext ctx, jobject self, jfloat param0, jfloat param1, jbool param2) {
	NULL_CHECK(self);
	jtype frame[11];
	auto stack = &frame[8];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/LegsUnit:aim", 11 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	frame[2].f = param1;
	frame[3].i = param2;
	{
	LINE_NUMBER(1379);
	clinit_arc_util_Tmp(ctx);
	sp[0].o = (jobject)SF_arc_util_Tmp_v1;
	sp[0].o = (jobject)((func_arc_math_geom_Vec2_set_float_float_R_arc_math_geom_Vec2) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Vec2_set_float_float_R_arc_math_geom_Vec2])(ctx, sp[0].o, (frame[1].f), (frame[2].f));
	sp[0].o = (jobject)((func_arc_math_geom_Vec2_sub_float_float_R_arc_math_geom_Vec2) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Vec2_sub_float_float_R_arc_math_geom_Vec2])(ctx, sp[0].o, ((jfloat)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_x), ((jfloat)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_y));
	LINE_NUMBER(1380);
	clinit_arc_util_Tmp(ctx);
	sp[0].o = (jobject)SF_arc_util_Tmp_v1;
	jfloat temp0 = (jfloat)((func_arc_math_geom_Vec2_len_R_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Vec2_len_R_float])(ctx, sp[0].o);
	sp[0].o = (jobject)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_type;
	if ((floatCompare(temp0, ((jfloat)((mindustry_type_UnitType *) NULL_CHECK(sp[0].o))->F_aimDst), 1)) >= 0) goto label_2;
	}
	{
	clinit_arc_util_Tmp(ctx);
	sp[0].o = (jobject)SF_arc_util_Tmp_v1;
	sp[1].o = (jobject)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_type;
	sp[0].o = (jobject)((func_arc_math_geom_Vec2_setLength_float_R_arc_math_geom_Vec2) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Vec2_setLength_float_R_arc_math_geom_Vec2])(ctx, sp[0].o, ((jfloat)((mindustry_type_UnitType *) NULL_CHECK(sp[1].o))->F_aimDst));
	}
label_2:;
	{
	LINE_NUMBER(1381);
	clinit_arc_util_Tmp(ctx);
	sp[0].o = (jobject)SF_arc_util_Tmp_v1;
	frame[1].f = (((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK(sp[0].o))->F_x) + ((jfloat)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_x));
	LINE_NUMBER(1382);
	clinit_arc_util_Tmp(ctx);
	sp[0].o = (jobject)SF_arc_util_Tmp_v1;
	frame[2].f = (((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK(sp[0].o))->F_y) + ((jfloat)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_y));
	LINE_NUMBER(1383);
	sp[0].o = (jobject)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_mounts;
	frame[4].o = sp[0].o;
	frame[5].i = (((jarray) nullCheck(ctx, (frame[4].o)))->length);
	frame[6].i = (jint(0));
	}
label_5:;
	{
	if ((frame[6].i) >= (frame[5].i)) goto label_6;
	}
	{
	frame[7].o = ((jobject)ARRAY_ACCESS(jobject, (frame[4].o), (frame[6].i)));
	LINE_NUMBER(1384);
	sp[0].o = (jobject)((mindustry_entities_units_WeaponMount *) NULL_CHECK((frame[7].o)))->F_weapon;
	if (((jint)((mindustry_type_Weapon *) NULL_CHECK(sp[0].o))->F_controllable) == 0) goto label_8;
	}
	{
	LINE_NUMBER(1385);
	if ((frame[3].i) == 0) goto label_10;
	}
	{
	((mindustry_entities_units_WeaponMount *) NULL_CHECK((frame[7].o)))->F_target = (jref) (jobject(nullptr));
	}
label_10:;
	{
	LINE_NUMBER(1386);
	((mindustry_entities_units_WeaponMount *) NULL_CHECK((frame[7].o)))->F_aimX = (frame[1].f);
	LINE_NUMBER(1387);
	((mindustry_entities_units_WeaponMount *) NULL_CHECK((frame[7].o)))->F_aimY = (frame[2].f);
	}
label_8:;
	{
	LINE_NUMBER(1383);
	INST_IINC(6, 1);
	goto label_5;
	}
label_6:;
	{
	LINE_NUMBER(1390);
	((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_aimX = (frame[1].f);
	LINE_NUMBER(1391);
	((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_aimY = (frame[2].f);
	LINE_NUMBER(1392);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_gen_LegsUnit_aimLook_arc_math_geom_Position(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/LegsUnit:aimLook", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(1396);
	((func_mindustry_gen_LegsUnit_aim_arc_math_geom_Position) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_gen_LegsUnit_aim_arc_math_geom_Position])(ctx, (frame[0].o), (frame[1].o));
	LINE_NUMBER(1397);
	((func_mindustry_gen_LegsUnit_lookAt_arc_math_geom_Position) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_gen_LegsUnit_lookAt_arc_math_geom_Position])(ctx, (frame[0].o), (frame[1].o));
	LINE_NUMBER(1398);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_gen_LegsUnit_aimLook_float_float(jcontext ctx, jobject self, jfloat param0, jfloat param1) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/LegsUnit:aimLook", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	frame[2].f = param1;
	{
	LINE_NUMBER(1402);
	((func_mindustry_gen_LegsUnit_aim_float_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_gen_LegsUnit_aim_float_float])(ctx, (frame[0].o), (frame[1].f), (frame[2].f));
	LINE_NUMBER(1403);
	((func_mindustry_gen_LegsUnit_lookAt_float_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_gen_LegsUnit_lookAt_float_float])(ctx, (frame[0].o), (frame[1].f), (frame[2].f));
	LINE_NUMBER(1404);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_gen_LegsUnit_apply_mindustry_type_StatusEffect(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/LegsUnit:apply", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(1408);
	((func_mindustry_gen_LegsUnit_apply_mindustry_type_StatusEffect_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_gen_LegsUnit_apply_mindustry_type_StatusEffect_float])(ctx, (frame[0].o), (frame[1].o), (jfloat(1)));
	LINE_NUMBER(1409);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_gen_LegsUnit_apply_mindustry_type_StatusEffect_float(jcontext ctx, jobject self, jobject param0, jfloat param1) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/LegsUnit:apply", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].f = param1;
	{
	LINE_NUMBER(1413);
	((func_mindustry_gen_LegsUnit_applyStatus_mindustry_type_StatusEffect_float_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_gen_LegsUnit_applyStatus_mindustry_type_StatusEffect_float_boolean])(ctx, (frame[0].o), (frame[1].o), (frame[2].f), (jint(0)));
	LINE_NUMBER(1414);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_gen_LegsUnit_approach_arc_math_geom_Vec2(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/LegsUnit:approach", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(1418);
	sp[0].o = (jobject)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_vel;
	sp[1].o = frame[1].o;
	sp[2].o = (jobject)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_type;
	jfloat temp0 = (jfloat)((mindustry_type_UnitType *) NULL_CHECK(sp[2].o))->F_accel;
	jfloat temp1 = (jfloat)((func_mindustry_gen_LegsUnit_speed_R_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_gen_LegsUnit_speed_R_float])(ctx, (frame[0].o));
	sp[0].o = (jobject)((func_arc_math_geom_Vec2_approachDelta_arc_math_geom_Vec2_float_R_arc_math_geom_Vec2) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Vec2_approachDelta_arc_math_geom_Vec2_float_R_arc_math_geom_Vec2])(ctx, sp[0].o, sp[1].o, (temp0 * temp1));
	LINE_NUMBER(1419);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_gen_LegsUnit_beforeWrite(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[1];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/LegsUnit:beforeWrite", 1 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	LINE_NUMBER(1423);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_gen_LegsUnit_clampHealth(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/LegsUnit:clampHealth", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(1427);
	sp[0].o = frame[0].o;
	jfloat temp0 = (jfloat)SM_java_lang_Math_min_float_float_R_float(ctx, ((jfloat)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_health), ((jfloat)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_maxHealth));
	((mindustry_gen_Unit *) NULL_CHECK(sp[0].o))->F_health = temp0;
	LINE_NUMBER(1428);
	jint temp1 = (jint)SM_java_lang_Float_isNaN_float_R_boolean(ctx, ((jfloat)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_health));
	if (temp1 == 0) goto label_2;
	}
	{
	((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_health = (jfloat(0));
	}
label_2:;
	LINE_NUMBER(1429);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_gen_LegsUnit_clearBuilding(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/LegsUnit:clearBuilding", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(1433);
	sp[0].o = (jobject)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_plans;
	((func_arc_struct_Queue_clear) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Queue_clear])(ctx, sp[0].o);
	LINE_NUMBER(1434);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_gen_LegsUnit_clearItem(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/LegsUnit:clearItem", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(1438);
	sp[0].o = (jobject)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_stack;
	((mindustry_type_ItemStack *) NULL_CHECK(sp[0].o))->F_amount = (jint(0));
	LINE_NUMBER(1439);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_gen_LegsUnit_clearStatuses(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/LegsUnit:clearStatuses", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(1443);
	sp[0].o = (jobject)((mindustry_gen_LegsUnit *) NULL_CHECK((frame[0].o)))->F_statuses;
	{ /* InvokeDynamic */
		clinit_mindustry_gen_LegsUnit_invoke_arc_func_Cons_1(ctx);
		auto proxy = (mindustry_gen_LegsUnit_invoke_arc_func_Cons_1 *) gcAlloc(ctx, &class_mindustry_gen_LegsUnit_invoke_arc_func_Cons_1);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[1].o = (jobject) proxy;
	}
	((func_arc_struct_Seq_each_arc_func_Cons) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_each_arc_func_Cons])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(1444);
	sp[0].o = (jobject)((mindustry_gen_LegsUnit *) NULL_CHECK((frame[0].o)))->F_statuses;
	sp[0].o = (jobject)((func_arc_struct_Seq_clear_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_clear_R_arc_struct_Seq])(ctx, sp[0].o);
	LINE_NUMBER(1445);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_gen_LegsUnit_collision_mindustry_gen_Hitboxc_float_float(jcontext ctx, jobject self, jobject param0, jfloat param1, jfloat param2) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/LegsUnit:collision", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].f = param1;
	frame[3].f = param2;
	{
	LINE_NUMBER(1453);
	if ((isInstance(ctx, (frame[1].o), &class_mindustry_gen_Bullet)) == 0) goto label_1;
	}
	{
	frame[4].o = (checkCast(ctx, &class_mindustry_gen_Bullet, (frame[1].o)));
	LINE_NUMBER(1454);
	sp[0].o = (jobject)((mindustry_gen_LegsUnit *) NULL_CHECK((frame[0].o)))->F_controller;
	((func_mindustry_entities_units_UnitController_hit_mindustry_gen_Bullet) resolveInterfaceMethod(ctx, &class_mindustry_entities_units_UnitController, INDEX_mindustry_entities_units_UnitController_hit_mindustry_gen_Bullet, sp[0].o))(ctx, sp[0].o, (frame[4].o));
	}
label_1:;
	LINE_NUMBER(1457);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_gen_LegsUnit_controlWeapons_boolean_boolean(jcontext ctx, jobject self, jbool param0, jbool param1) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[7];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/LegsUnit:controlWeapons", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(1461);
	sp[0].o = (jobject)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_mounts;
	frame[3].o = sp[0].o;
	frame[4].i = (((jarray) nullCheck(ctx, (frame[3].o)))->length);
	frame[5].i = (jint(0));
	}
label_1:;
	{
	if ((frame[5].i) >= (frame[4].i)) goto label_2;
	}
	{
	frame[6].o = ((jobject)ARRAY_ACCESS(jobject, (frame[3].o), (frame[5].i)));
	LINE_NUMBER(1462);
	sp[0].o = (jobject)((mindustry_entities_units_WeaponMount *) NULL_CHECK((frame[6].o)))->F_weapon;
	if (((jint)((mindustry_type_Weapon *) NULL_CHECK(sp[0].o))->F_controllable) == 0) goto label_4;
	}
	{
	LINE_NUMBER(1463);
	((mindustry_entities_units_WeaponMount *) NULL_CHECK((frame[6].o)))->F_rotate = (frame[1].i);
	LINE_NUMBER(1464);
	((mindustry_entities_units_WeaponMount *) NULL_CHECK((frame[6].o)))->F_shoot = (frame[2].i);
	}
label_4:;
	{
	LINE_NUMBER(1461);
	INST_IINC(5, 1);
	goto label_1;
	}
label_2:;
	{
	LINE_NUMBER(1467);
	((mindustry_gen_LegsUnit *) NULL_CHECK((frame[0].o)))->F_isRotate = (frame[1].i);
	LINE_NUMBER(1468);
	((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_isShooting = (frame[2].i);
	LINE_NUMBER(1469);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_gen_LegsUnit_controlWeapons_boolean(jcontext ctx, jobject self, jbool param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/LegsUnit:controlWeapons", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(1473);
	((func_mindustry_gen_LegsUnit_controlWeapons_boolean_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_gen_LegsUnit_controlWeapons_boolean_boolean])(ctx, (frame[0].o), (frame[1].i), (frame[1].i));
	LINE_NUMBER(1474);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_gen_LegsUnit_controller_mindustry_entities_units_UnitController(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/LegsUnit:controller", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(1478);
	((mindustry_gen_LegsUnit *) NULL_CHECK((frame[0].o)))->F_controller = (jref) (frame[1].o);
	LINE_NUMBER(1479);
	sp[0].o = (jobject)((mindustry_gen_LegsUnit *) NULL_CHECK((frame[0].o)))->F_controller;
	sp[0].o = (jobject)((func_mindustry_entities_units_UnitController_unit_R_mindustry_gen_Unit) resolveInterfaceMethod(ctx, &class_mindustry_entities_units_UnitController, INDEX_mindustry_entities_units_UnitController_unit_R_mindustry_gen_Unit, sp[0].o))(ctx, sp[0].o);
	if (sp[0].o == (frame[0].o)) goto label_2;
	}
	{
	sp[0].o = (jobject)((mindustry_gen_LegsUnit *) NULL_CHECK((frame[0].o)))->F_controller;
	((func_mindustry_entities_units_UnitController_unit_mindustry_gen_Unit) resolveInterfaceMethod(ctx, &class_mindustry_entities_units_UnitController, INDEX_mindustry_entities_units_UnitController_unit_mindustry_gen_Unit, sp[0].o))(ctx, sp[0].o, (frame[0].o));
	}
label_2:;
	LINE_NUMBER(1480);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_gen_LegsUnit_damage_float(jcontext ctx, jobject self, jfloat param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/LegsUnit:damage", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	{
	LINE_NUMBER(1484);
	sp[0].o = frame[0].o;
	jfloat temp0 = frame[1].f;
	sp[1].f = temp0;
	sp += 2;
	if ((floatCompare(((jfloat)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_armorOverride), (jfloat(0)), -1)) < 0) goto label_1;
	}
	{
	jfloat temp0 = (jfloat)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_armorOverride;
	sp[0].f = temp0;
	sp += 1;
	goto label_2;
	}
label_1:;
	INST_ALOAD(0);
	sp[-1].f = ((mindustry_gen_Unit *) NULL_CHECK(sp[-1].o))->F_armor;
label_2:;
	{
	sp -= 3;
	jfloat temp0 = (jfloat)SM_mindustry_entities_Damage_applyArmor_float_float_R_float(ctx, sp[1].f, sp[2].f);
	jfloat temp1 = temp0 / ((jfloat)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_healthMultiplier);
	clinit_mindustry_Vars(ctx);
	sp[1].o = (jobject)SF_mindustry_Vars_state;
	sp[1].o = (jobject)((mindustry_core_GameState *) NULL_CHECK(sp[1].o))->F_rules;
	sp[2].o = (jobject)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_team;
	jfloat temp2 = (jfloat)((func_mindustry_game_Rules_unitHealth_mindustry_game_Team_R_float) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_mindustry_game_Rules_unitHealth_mindustry_game_Team_R_float])(ctx, sp[1].o, sp[2].o);
	((func_mindustry_gen_LegsUnit_rawDamage_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_gen_LegsUnit_rawDamage_float])(ctx, sp[0].o, (temp1 / temp2));
	LINE_NUMBER(1485);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_gen_LegsUnit_damage_float_boolean(jcontext ctx, jobject self, jfloat param0, jbool param1) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/LegsUnit:damage", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(1489);
	frame[3].f = ((jfloat)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_hitTime);
	LINE_NUMBER(1490);
	((func_mindustry_gen_LegsUnit_damage_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_gen_LegsUnit_damage_float])(ctx, (frame[0].o), (frame[1].f));
	LINE_NUMBER(1491);
	if ((frame[2].i) != 0) goto label_3;
	}
	{
	LINE_NUMBER(1492);
	((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_hitTime = (frame[3].f);
	}
label_3:;
	LINE_NUMBER(1494);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_gen_LegsUnit_damageArmorMult_float_float(jcontext ctx, jobject self, jfloat param0, jfloat param1) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/LegsUnit:damageArmorMult", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	frame[2].f = param1;
	{
	LINE_NUMBER(1498);
	((func_mindustry_gen_LegsUnit_damageArmorMult_float_float_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_gen_LegsUnit_damageArmorMult_float_float_boolean])(ctx, (frame[0].o), (frame[1].f), (frame[2].f), (jint(1)));
	LINE_NUMBER(1499);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_gen_LegsUnit_damageArmorMult_float_float_boolean(jcontext ctx, jobject self, jfloat param0, jfloat param1, jbool param2) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/LegsUnit:damageArmorMult", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	frame[2].f = param1;
	frame[3].i = param2;
	{
	LINE_NUMBER(1503);
	frame[4].f = ((jfloat)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_hitTime);
	LINE_NUMBER(1504);
	sp[0].o = frame[0].o;
	jfloat temp0 = frame[1].f;
	sp[1].f = temp0;
	sp += 2;
	if ((floatCompare(((jfloat)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_armorOverride), (jfloat(0)), -1)) < 0) goto label_2;
	}
	{
	jfloat temp0 = ((jfloat)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_armorOverride) * (frame[2].f);
	sp[0].f = temp0;
	sp += 1;
	goto label_3;
	}
label_2:;
	{
	jfloat temp0 = ((jfloat)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_armor) * (frame[2].f);
	sp[0].f = temp0;
	sp += 1;
	}
label_3:;
	{
	sp -= 3;
	jfloat temp0 = (jfloat)SM_mindustry_entities_Damage_applyArmor_float_float_R_float(ctx, sp[1].f, sp[2].f);
	jfloat temp1 = temp0 / ((jfloat)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_healthMultiplier);
	clinit_mindustry_Vars(ctx);
	sp[1].o = (jobject)SF_mindustry_Vars_state;
	sp[1].o = (jobject)((mindustry_core_GameState *) NULL_CHECK(sp[1].o))->F_rules;
	sp[2].o = (jobject)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_team;
	jfloat temp2 = (jfloat)((func_mindustry_game_Rules_unitHealth_mindustry_game_Team_R_float) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_mindustry_game_Rules_unitHealth_mindustry_game_Team_R_float])(ctx, sp[1].o, sp[2].o);
	((func_mindustry_gen_LegsUnit_rawDamage_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_gen_LegsUnit_rawDamage_float])(ctx, sp[0].o, (temp1 / temp2));
	LINE_NUMBER(1505);
	if ((frame[3].i) != 0) goto label_5;
	}
	{
	LINE_NUMBER(1506);
	((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_hitTime = (frame[4].f);
	}
label_5:;
	LINE_NUMBER(1508);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_gen_LegsUnit_damageContinuous_float(jcontext ctx, jobject self, jfloat param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/LegsUnit:damageContinuous", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	{
	LINE_NUMBER(1512);
	sp[0].o = frame[0].o;
	jfloat temp0 = (frame[1].f) * (clinit_arc_util_Time(ctx), (jfloat)SF_arc_util_Time_delta);
	sp[1].f = temp0;
	sp += 2;
	if ((floatCompare(((jfloat)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_hitTime), (jfloat(-1.0f)), 1)) > 0) goto label_1;
	}
	INST_ICONST(1);
	goto label_2;
label_1:;
	INST_ICONST(0);
label_2:;
	{
	sp -= 3;
	((func_mindustry_gen_LegsUnit_damage_float_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_gen_LegsUnit_damage_float_boolean])(ctx, sp[0].o, sp[1].f, sp[2].i);
	LINE_NUMBER(1513);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_gen_LegsUnit_damageContinuousArmorMult_float_float(jcontext ctx, jobject self, jfloat param0, jfloat param1) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/LegsUnit:damageContinuousArmorMult", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	frame[2].f = param1;
	{
	LINE_NUMBER(1517);
	sp[0].o = frame[0].o;
	jfloat temp0 = (frame[1].f) * (clinit_arc_util_Time(ctx), (jfloat)SF_arc_util_Time_delta);
	jfloat temp1 = frame[2].f;
	sp[1].f = temp0;
	sp[2].f = temp1;
	sp += 3;
	if ((floatCompare(((jfloat)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_hitTime), (jfloat(-11.0f)), 1)) > 0) goto label_1;
	}
	INST_ICONST(1);
	goto label_2;
label_1:;
	INST_ICONST(0);
label_2:;
	{
	sp -= 4;
	((func_mindustry_gen_LegsUnit_damageArmorMult_float_float_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_gen_LegsUnit_damageArmorMult_float_float_boolean])(ctx, sp[0].o, sp[1].f, sp[2].f, sp[3].i);
	LINE_NUMBER(1518);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_gen_LegsUnit_damageContinuousPierce_float(jcontext ctx, jobject self, jfloat param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/LegsUnit:damageContinuousPierce", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	{
	LINE_NUMBER(1522);
	sp[0].o = frame[0].o;
	jfloat temp0 = (frame[1].f) * (clinit_arc_util_Time(ctx), (jfloat)SF_arc_util_Time_delta);
	sp[1].f = temp0;
	sp += 2;
	if ((floatCompare(((jfloat)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_hitTime), (jfloat(-11.0f)), 1)) > 0) goto label_1;
	}
	INST_ICONST(1);
	goto label_2;
label_1:;
	INST_ICONST(0);
label_2:;
	{
	sp -= 3;
	((func_mindustry_gen_LegsUnit_damagePierce_float_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_gen_LegsUnit_damagePierce_float_boolean])(ctx, sp[0].o, sp[1].f, sp[2].i);
	LINE_NUMBER(1523);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_gen_LegsUnit_damagePierce_float(jcontext ctx, jobject self, jfloat param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/LegsUnit:damagePierce", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	{
	LINE_NUMBER(1527);
	((func_mindustry_gen_LegsUnit_damagePierce_float_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_gen_LegsUnit_damagePierce_float_boolean])(ctx, (frame[0].o), (frame[1].f), (jint(1)));
	LINE_NUMBER(1528);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_gen_LegsUnit_damagePierce_float_boolean(jcontext ctx, jobject self, jfloat param0, jbool param1) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/LegsUnit:damagePierce", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(1532);
	frame[3].f = ((jfloat)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_hitTime);
	LINE_NUMBER(1533);
	sp[0].o = frame[0].o;
	jfloat temp0 = (frame[1].f) / ((jfloat)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_healthMultiplier);
	clinit_mindustry_Vars(ctx);
	sp[1].o = (jobject)SF_mindustry_Vars_state;
	sp[1].o = (jobject)((mindustry_core_GameState *) NULL_CHECK(sp[1].o))->F_rules;
	sp[2].o = (jobject)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_team;
	jfloat temp1 = (jfloat)((func_mindustry_game_Rules_unitHealth_mindustry_game_Team_R_float) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_mindustry_game_Rules_unitHealth_mindustry_game_Team_R_float])(ctx, sp[1].o, sp[2].o);
	((func_mindustry_gen_LegsUnit_rawDamage_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_gen_LegsUnit_rawDamage_float])(ctx, sp[0].o, (temp0 / temp1));
	LINE_NUMBER(1534);
	if ((frame[2].i) != 0) goto label_3;
	}
	{
	LINE_NUMBER(1535);
	((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_hitTime = (frame[3].f);
	}
label_3:;
	LINE_NUMBER(1537);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_gen_LegsUnit_destroy(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[20];
	auto stack = &frame[9];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/LegsUnit:destroy", 20 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(1542);
	jint temp0 = (jint)((func_mindustry_gen_LegsUnit_isAdded_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_gen_LegsUnit_isAdded_R_boolean])(ctx, (frame[0].o));
	if (temp0 == 0) goto label_1;
	}
	clinit_mindustry_Vars(ctx);
	(sp++)->i = SF_mindustry_Vars_headless;
	if ((--sp)->i == 0) goto label_2;
	goto label_1;
label_2:;
	{
	LINE_NUMBER(1543);
	sp[0].o = (jobject)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_type;
	sp[0].o = (jobject)((mindustry_type_UnitType *) NULL_CHECK(sp[0].o))->F_legRegion;
	frame[1].f = (((jfloat(((jint)((arc_graphics_g2d_TextureRegion *) NULL_CHECK(sp[0].o))->F_height))) / (jfloat(4.0f))) / (jfloat(1.45f)));
	LINE_NUMBER(1544);
	frame[2].i = (jint(0));
	}
label_4:;
	{
	jint temp0 = frame[2].i;
	sp[0].o = (jobject)((mindustry_gen_LegsUnit *) NULL_CHECK((frame[0].o)))->F_legs;
	if (temp0 >= (((jarray) nullCheck(ctx, sp[0].o))->length)) goto label_1;
	}
	{
	LINE_NUMBER(1545);
	sp[0].o = (jobject)((mindustry_gen_LegsUnit *) NULL_CHECK((frame[0].o)))->F_legs;
	frame[3].o = ((jobject)ARRAY_ACCESS(jobject, sp[0].o, (frame[2].i)));
	LINE_NUMBER(1546);
	sp[0].o = frame[0].o;
	clinit_arc_util_Tmp(ctx);
	sp[1].o = (jobject)SF_arc_util_Tmp_v1;
	sp[0].o = (jobject)((func_mindustry_gen_LegsUnit_legOffset_arc_math_geom_Vec2_int_R_arc_math_geom_Vec2) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_gen_LegsUnit_legOffset_arc_math_geom_Vec2_int_R_arc_math_geom_Vec2])(ctx, sp[0].o, sp[1].o, (frame[2].i));
	sp[0].o = (jobject)((func_arc_math_geom_Vec2_add_float_float_R_arc_math_geom_Vec2) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Vec2_add_float_float_R_arc_math_geom_Vec2])(ctx, sp[0].o, ((jfloat)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_x), ((jfloat)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_y));
	frame[4].o = sp[0].o;
	LINE_NUMBER(1547);
	clinit_arc_util_Tmp(ctx);
	sp[0].o = (jobject)SF_arc_util_Tmp_v2;
	sp[1].o = (jobject)((mindustry_entities_Leg *) NULL_CHECK((frame[3].o)))->F_base;
	sp[0].o = (jobject)((func_arc_math_geom_Vec2_set_arc_math_geom_Vec2_R_arc_math_geom_Vec2) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Vec2_set_arc_math_geom_Vec2_R_arc_math_geom_Vec2])(ctx, sp[0].o, sp[1].o);
	sp[1].o = (jobject)((mindustry_entities_Leg *) NULL_CHECK((frame[3].o)))->F_joint;
	sp[0].o = (jobject)((func_arc_math_geom_Vec2_sub_arc_math_geom_Vec2_R_arc_math_geom_Vec2) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Vec2_sub_arc_math_geom_Vec2_R_arc_math_geom_Vec2])(ctx, sp[0].o, sp[1].o);
	sp[0].o = (jobject)((func_arc_math_geom_Vec2_inv_R_arc_math_geom_Vec2) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Vec2_inv_R_arc_math_geom_Vec2])(ctx, sp[0].o);
	sp[1].o = (jobject)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_type;
	sp[0].o = (jobject)((func_arc_math_geom_Vec2_setLength_float_R_arc_math_geom_Vec2) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Vec2_setLength_float_R_arc_math_geom_Vec2])(ctx, sp[0].o, ((jfloat)((mindustry_type_UnitType *) NULL_CHECK(sp[1].o))->F_legExtension));
	LINE_NUMBER(1548);
	sp[0].o = (jobject)createArray(ctx, &class_arc_math_geom_Vec2, (jint(3)));
	ARRAY_ACCESS(jobject, sp[0].o, (jint(0))) = (frame[4].o);
	jint temp0 = jint(1);
	sp[1].o = (jobject)((mindustry_entities_Leg *) NULL_CHECK((frame[3].o)))->F_joint;
	ARRAY_ACCESS(jobject, sp[0].o, temp0) = sp[1].o;
	jint temp1 = jint(2);
	sp[1].o = (jobject)((mindustry_entities_Leg *) NULL_CHECK((frame[3].o)))->F_base;
	ARRAY_ACCESS(jobject, sp[0].o, temp1) = sp[1].o;
	frame[5].o = sp[0].o;
	frame[6].i = (((jarray) nullCheck(ctx, (frame[5].o)))->length);
	frame[7].i = (jint(0));
	}
label_9:;
	{
	if ((frame[7].i) >= (frame[6].i)) goto label_10;
	}
	{
	frame[8].o = ((jobject)ARRAY_ACCESS(jobject, (frame[5].o), (frame[7].i)));
	LINE_NUMBER(1549);
	jfloat temp0 = (jfloat)((arc_math_geom_Vec2 *) NULL_CHECK((frame[8].o)))->F_x;
	jfloat temp1 = (jfloat)((arc_math_geom_Vec2 *) NULL_CHECK((frame[8].o)))->F_y;
	jfloat temp2 = jfloat(0);
	jfloat temp3 = jfloat(0);
	jfloat temp4 = jfloat(0);
	jfloat temp5 = frame[1].f;
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	sp[0].o = (jobject)((mindustry_core_GameState *) NULL_CHECK(sp[0].o))->F_rules;
	jint temp6 = (jint)((mindustry_game_Rules *) NULL_CHECK(sp[0].o))->F_damageExplosions;
	jint temp7 = jint(0);
	sp[0].o = (jobject)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_team;
	sp[1].o = (jobject)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_type;
	sp[1].o = (jobject)((mindustry_type_UnitType *) NULL_CHECK(sp[1].o))->F_deathExplosionEffect;
	SM_mindustry_entities_Damage_dynamicExplosion_float_float_float_float_float_float_boolean_boolean_mindustry_game_Team_mindustry_entities_Effect(ctx, temp0, temp1, temp2, temp3, temp4, temp5, temp6, temp7, sp[0].o, sp[1].o);
	LINE_NUMBER(1548);
	INST_IINC(7, 1);
	goto label_9;
	}
label_10:;
	{
	LINE_NUMBER(1551);
	clinit_mindustry_content_Fx(ctx);
	sp[0].o = (jobject)SF_mindustry_content_Fx_legDestroy;
	jfloat temp0 = (jfloat)((arc_math_geom_Vec2 *) NULL_CHECK((frame[4].o)))->F_x;
	jfloat temp1 = (jfloat)((arc_math_geom_Vec2 *) NULL_CHECK((frame[4].o)))->F_y;
	jfloat temp2 = jfloat(0);
	clinit_mindustry_entities_LegDestroyData(ctx);
	sp[1].o = gcAlloc(ctx, &class_mindustry_entities_LegDestroyData);
	sp[2].o = (jobject)((func_arc_math_geom_Vec2_cpy_R_arc_math_geom_Vec2) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_arc_math_geom_Vec2_cpy_R_arc_math_geom_Vec2])(ctx, (frame[4].o));
	sp[3].o = (jobject)((mindustry_entities_Leg *) NULL_CHECK((frame[3].o)))->F_joint;
	sp[4].o = (jobject)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_type;
	sp[4].o = (jobject)((mindustry_type_UnitType *) NULL_CHECK(sp[4].o))->F_legRegion;
	init_mindustry_entities_LegDestroyData_arc_math_geom_Vec2_arc_math_geom_Vec2_arc_graphics_g2d_TextureRegion(ctx, sp[1].o, sp[2].o, sp[3].o, sp[4].o);
	((func_mindustry_entities_Effect_at_float_float_float_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_entities_Effect_at_float_float_float_java_lang_Object])(ctx, sp[0].o, temp0, temp1, temp2, sp[1].o);
	LINE_NUMBER(1552);
	clinit_mindustry_content_Fx(ctx);
	sp[0].o = (jobject)SF_mindustry_content_Fx_legDestroy;
	sp[1].o = (jobject)((mindustry_entities_Leg *) NULL_CHECK((frame[3].o)))->F_joint;
	jfloat temp3 = (jfloat)((arc_math_geom_Vec2 *) NULL_CHECK(sp[1].o))->F_x;
	sp[1].o = (jobject)((mindustry_entities_Leg *) NULL_CHECK((frame[3].o)))->F_joint;
	jfloat temp4 = (jfloat)((arc_math_geom_Vec2 *) NULL_CHECK(sp[1].o))->F_y;
	jfloat temp5 = jfloat(0);
	clinit_mindustry_entities_LegDestroyData(ctx);
	sp[1].o = gcAlloc(ctx, &class_mindustry_entities_LegDestroyData);
	sp[2].o = (jobject)((mindustry_entities_Leg *) NULL_CHECK((frame[3].o)))->F_joint;
	sp[2].o = (jobject)((func_arc_math_geom_Vec2_cpy_R_arc_math_geom_Vec2) ((void **) nullCheck(ctx, sp[2].o)->vtable)[VTABLE_arc_math_geom_Vec2_cpy_R_arc_math_geom_Vec2])(ctx, sp[2].o);
	clinit_arc_util_Tmp(ctx);
	sp[3].o = (jobject)SF_arc_util_Tmp_v2;
	sp[2].o = (jobject)((func_arc_math_geom_Vec2_add_arc_math_geom_Vec2_R_arc_math_geom_Vec2) ((void **) nullCheck(ctx, sp[2].o)->vtable)[VTABLE_arc_math_geom_Vec2_add_arc_math_geom_Vec2_R_arc_math_geom_Vec2])(ctx, sp[2].o, sp[3].o);
	sp[3].o = (jobject)((mindustry_entities_Leg *) NULL_CHECK((frame[3].o)))->F_base;
	sp[4].o = (jobject)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_type;
	sp[4].o = (jobject)((mindustry_type_UnitType *) NULL_CHECK(sp[4].o))->F_legBaseRegion;
	init_mindustry_entities_LegDestroyData_arc_math_geom_Vec2_arc_math_geom_Vec2_arc_graphics_g2d_TextureRegion(ctx, sp[1].o, sp[2].o, sp[3].o, sp[4].o);
	((func_mindustry_entities_Effect_at_float_float_float_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_entities_Effect_at_float_float_float_java_lang_Object])(ctx, sp[0].o, temp3, temp4, temp5, sp[1].o);
	LINE_NUMBER(1544);
	INST_IINC(2, 1);
	goto label_4;
	}
label_1:;
	{
	LINE_NUMBER(1557);
	jint temp0 = (jint)((func_mindustry_gen_LegsUnit_isAdded_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_gen_LegsUnit_isAdded_R_boolean])(ctx, (frame[0].o));
	if (temp0 == 0) goto label_15;
	}
	{
	jint temp0 = (jint)((func_mindustry_gen_LegsUnit_killable_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_gen_LegsUnit_killable_R_boolean])(ctx, (frame[0].o));
	if (temp0 != 0) goto label_16;
	}
	goto label_15;
label_16:;
	{
	LINE_NUMBER(1558);
	jfloat temp0 = jfloat(2);
	sp[0].o = (jobject)((func_mindustry_gen_LegsUnit_item_R_mindustry_type_Item) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_gen_LegsUnit_item_R_mindustry_type_Item])(ctx, (frame[0].o));
	jfloat temp1 = (jfloat)((mindustry_type_Item *) NULL_CHECK(sp[0].o))->F_explosiveness;
	sp[0].o = (jobject)((func_mindustry_gen_LegsUnit_stack_R_mindustry_type_ItemStack) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_gen_LegsUnit_stack_R_mindustry_type_ItemStack])(ctx, (frame[0].o));
	frame[1].f = (temp0 + ((temp1 * (jfloat(((jint)((mindustry_type_ItemStack *) NULL_CHECK(sp[0].o))->F_amount)))) * (jfloat(1.53f))));
	LINE_NUMBER(1559);
	sp[0].o = (jobject)((func_mindustry_gen_LegsUnit_item_R_mindustry_type_Item) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_gen_LegsUnit_item_R_mindustry_type_Item])(ctx, (frame[0].o));
	jfloat temp2 = (jfloat)((mindustry_type_Item *) NULL_CHECK(sp[0].o))->F_flammability;
	sp[0].o = (jobject)((func_mindustry_gen_LegsUnit_stack_R_mindustry_type_ItemStack) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_gen_LegsUnit_stack_R_mindustry_type_ItemStack])(ctx, (frame[0].o));
	frame[2].f = ((temp2 * (jfloat(((jint)((mindustry_type_ItemStack *) NULL_CHECK(sp[0].o))->F_amount)))) / (jfloat(1.9f)));
	LINE_NUMBER(1560);
	sp[0].o = (jobject)((func_mindustry_gen_LegsUnit_item_R_mindustry_type_Item) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_gen_LegsUnit_item_R_mindustry_type_Item])(ctx, (frame[0].o));
	jfloat temp3 = (jfloat)((mindustry_type_Item *) NULL_CHECK(sp[0].o))->F_charge;
	sp[0].o = (jobject)((func_mindustry_gen_LegsUnit_stack_R_mindustry_type_ItemStack) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_gen_LegsUnit_stack_R_mindustry_type_ItemStack])(ctx, (frame[0].o));
	jfloat temp4 = (jfloat)SM_arc_math_Mathf_pow_float_float_R_float(ctx, (jfloat(((jint)((mindustry_type_ItemStack *) NULL_CHECK(sp[0].o))->F_amount))), (jfloat(1.11f)));
	frame[3].f = ((temp3 * temp4) * (jfloat(160.0f)));
	LINE_NUMBER(1561);
	if (((jint)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_spawnedByCore) != 0) goto label_20;
	}
	{
	LINE_NUMBER(1562);
	jfloat temp0 = (jfloat)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_x;
	jfloat temp1 = (jfloat)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_y;
	jfloat temp2 = frame[2].f;
	jfloat temp3 = frame[1].f;
	jfloat temp4 = frame[3].f;
	jfloat temp5 = (jfloat)((func_mindustry_gen_LegsUnit_bounds_R_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_gen_LegsUnit_bounds_R_float])(ctx, (frame[0].o));
	sp[0].o = (jobject)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_type;
	jfloat temp6 = (temp5 + (((jfloat)((mindustry_type_UnitType *) NULL_CHECK(sp[0].o))->F_legLength) / (jfloat(1.7f)))) / (jfloat(2));
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	sp[0].o = (jobject)((mindustry_core_GameState *) NULL_CHECK(sp[0].o))->F_rules;
	jobject temp7 = sp[0].o;
	sp[0].f = temp0;
	sp[1].f = temp1;
	sp[2].f = temp2;
	sp[3].f = temp3;
	sp[4].f = temp4;
	sp[5].f = temp6;
	sp += 6;
	if (((jint)((mindustry_game_Rules *) NULL_CHECK(temp7))->F_damageExplosions) == 0) goto label_22;
	}
	{
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	sp[0].o = (jobject)((mindustry_core_GameState *) NULL_CHECK(sp[0].o))->F_rules;
	sp[1].o = (jobject)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_team;
	jfloat temp0 = (jfloat)((func_mindustry_game_Rules_unitCrashDamage_mindustry_game_Team_R_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_game_Rules_unitCrashDamage_mindustry_game_Team_R_float])(ctx, sp[0].o, sp[1].o);
	if ((floatCompare(temp0, (jfloat(0)), -1)) <= 0) goto label_22;
	}
	INST_ICONST(1);
	goto label_23;
label_22:;
	INST_ICONST(0);
label_23:;
	{
	sp[0].o = (jobject)((func_mindustry_gen_LegsUnit_item_R_mindustry_type_Item) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_gen_LegsUnit_item_R_mindustry_type_Item])(ctx, (frame[0].o));
	if ((floatCompare(((jfloat)((mindustry_type_Item *) NULL_CHECK(sp[0].o))->F_flammability), (jfloat(1)), -1)) <= 0) goto label_24;
	}
	INST_ICONST(1);
	goto label_25;
label_24:;
	INST_ICONST(0);
label_25:;
	{
	sp -= 8;
	sp[8].o = (jobject)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_team;
	sp[9].o = (jobject)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_type;
	sp[9].o = (jobject)((mindustry_type_UnitType *) NULL_CHECK(sp[9].o))->F_deathExplosionEffect;
	SM_mindustry_entities_Damage_dynamicExplosion_float_float_float_float_float_float_boolean_boolean_mindustry_game_Team_mindustry_entities_Effect_float(ctx, sp[0].f, sp[1].f, sp[2].f, sp[3].f, sp[4].f, sp[5].f, sp[6].i, sp[7].i, sp[8].o, sp[9].o, (jfloat(0)));
	goto label_26;
	}
label_20:;
	{
	LINE_NUMBER(1564);
	sp[0].o = (jobject)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_type;
	sp[0].o = (jobject)((mindustry_type_UnitType *) NULL_CHECK(sp[0].o))->F_deathExplosionEffect;
	jfloat temp0 = (jfloat)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_x;
	jfloat temp1 = (jfloat)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_y;
	jfloat temp2 = (jfloat)((func_mindustry_gen_LegsUnit_bounds_R_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_gen_LegsUnit_bounds_R_float])(ctx, (frame[0].o));
	((func_mindustry_entities_Effect_at_float_float_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_entities_Effect_at_float_float_float])(ctx, sp[0].o, temp0, temp1, ((temp2 / (jfloat(2))) / (jfloat(8.0f))));
	}
label_26:;
	{
	LINE_NUMBER(1566);
	sp[0].o = (jobject)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_type;
	if ((floatCompare(((jfloat)((mindustry_type_UnitType *) NULL_CHECK(sp[0].o))->F_deathShake), (jfloat(0)), 1)) >= 0) goto label_27;
	}
	{
	jfloat temp0 = (jfloat(3.0f)) + (((jfloat)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_hitSize) / (jfloat(3.0f)));
	sp[0].f = temp0;
	sp += 1;
	goto label_28;
	}
label_27:;
	{
	sp[0].o = (jobject)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_type;
	jfloat temp0 = (jfloat)((mindustry_type_UnitType *) NULL_CHECK(sp[0].o))->F_deathShake;
	sp[0].f = temp0;
	sp += 1;
	}
label_28:;
	{
	sp -= 1;
	frame[4].f = sp[0].f;
	LINE_NUMBER(1567);
	sp[0].o = (jobject)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_type;
	if (((jint)((mindustry_type_UnitType *) NULL_CHECK(sp[0].o))->F_createScorch) == 0) goto label_30;
	}
	{
	LINE_NUMBER(1568);
	SM_mindustry_entities_Effect_scorch_float_float_int(ctx, ((jfloat)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_x), ((jfloat)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_y), (jint((((jfloat)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_hitSize) / (jfloat(5.0f))))));
	}
label_30:;
	{
	LINE_NUMBER(1570);
	SM_mindustry_entities_Effect_shake_float_float_arc_math_geom_Position(ctx, (frame[4].f), (frame[4].f), (frame[0].o));
	LINE_NUMBER(1571);
	sp[0].o = (jobject)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_type;
	sp[0].o = (jobject)((mindustry_type_UnitType *) NULL_CHECK(sp[0].o))->F_deathSound;
	sp[1].o = frame[0].o;
	jfloat temp0 = jfloat(1);
	sp[2].o = (jobject)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_type;
	jint temp1 = (jint)((func_arc_audio_Sound_at_arc_math_geom_Position_float_float_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_audio_Sound_at_arc_math_geom_Position_float_float_R_int])(ctx, sp[0].o, sp[1].o, temp0, ((jfloat)((mindustry_type_UnitType *) NULL_CHECK(sp[2].o))->F_deathSoundVolume));
	LINE_NUMBER(1572);
	clinit_mindustry_game_EventType$UnitDestroyEvent(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_game_EventType$UnitDestroyEvent);
	init_mindustry_game_EventType$UnitDestroyEvent_mindustry_gen_Unit(ctx, sp[0].o, (frame[0].o));
	SM_arc_Events_fire_java_lang_Object(ctx, sp[0].o);
	LINE_NUMBER(1573);
	if ((floatCompare((frame[1].f), (jfloat(7.0f)), -1)) <= 0) goto label_35;
	}
	{
	jint temp0 = (jint)((func_mindustry_gen_LegsUnit_isLocal_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_gen_LegsUnit_isLocal_R_boolean])(ctx, (frame[0].o));
	if (temp0 != 0) goto label_36;
	}
	{
	if (((jint)((mindustry_gen_LegsUnit *) NULL_CHECK((frame[0].o)))->F_wasPlayer) == 0) goto label_35;
	}
label_36:;
	{
	LINE_NUMBER(1574);
	clinit_mindustry_game_EventType$Trigger(ctx);
	sp[0].o = (jobject)SF_mindustry_game_EventType$Trigger_suicideBomb;
	SM_arc_Events_fire_java_lang_Enum(ctx, sp[0].o);
	}
label_35:;
	{
	LINE_NUMBER(1576);
	sp[0].o = (jobject)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_mounts;
	frame[5].o = sp[0].o;
	frame[6].i = (((jarray) nullCheck(ctx, (frame[5].o)))->length);
	frame[7].i = (jint(0));
	}
label_37:;
	{
	if ((frame[7].i) >= (frame[6].i)) goto label_38;
	}
	{
	frame[8].o = ((jobject)ARRAY_ACCESS(jobject, (frame[5].o), (frame[7].i)));
	LINE_NUMBER(1577);
	sp[0].o = (jobject)((mindustry_entities_units_WeaponMount *) NULL_CHECK((frame[8].o)))->F_weapon;
	if (((jint)((mindustry_type_Weapon *) NULL_CHECK(sp[0].o))->F_shootOnDeath) == 0) goto label_40;
	}
	{
	sp[0].o = (jobject)((mindustry_entities_units_WeaponMount *) NULL_CHECK((frame[8].o)))->F_weapon;
	sp[0].o = (jobject)((mindustry_type_Weapon *) NULL_CHECK(sp[0].o))->F_bullet;
	if (((jint)((mindustry_entities_bullet_BulletType *) NULL_CHECK(sp[0].o))->F_killShooter) == 0) goto label_41;
	}
	{
	if (((jint)((mindustry_entities_units_WeaponMount *) NULL_CHECK((frame[8].o)))->F_totalShots) > 0) goto label_40;
	}
label_41:;
	{
	LINE_NUMBER(1578);
	sp[0].o = (jobject)((mindustry_entities_units_WeaponMount *) NULL_CHECK((frame[8].o)))->F_weapon;
	sp[0].o = (jobject)((mindustry_type_Weapon *) NULL_CHECK(sp[0].o))->F_shootOnDeathEffect;
	if (sp[0].o == nullptr) goto label_42;
	}
	{
	if (((jint)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_hasTarget) != 0) goto label_42;
	}
	{
	LINE_NUMBER(1579);
	((mindustry_entities_units_WeaponMount *) NULL_CHECK((frame[8].o)))->F_allowShootEffects = (jint(0));
	LINE_NUMBER(1580);
	sp[0].o = (jobject)((mindustry_entities_units_WeaponMount *) NULL_CHECK((frame[8].o)))->F_weapon;
	sp[0].o = (jobject)((mindustry_type_Weapon *) NULL_CHECK(sp[0].o))->F_shootOnDeathEffect;
	((func_mindustry_entities_Effect_at_float_float_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_entities_Effect_at_float_float_float])(ctx, sp[0].o, ((jfloat)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_x), ((jfloat)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_y), ((jfloat)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_rotation));
	}
label_42:;
	{
	LINE_NUMBER(1582);
	((mindustry_entities_units_WeaponMount *) NULL_CHECK((frame[8].o)))->F_reload = (jfloat(0));
	LINE_NUMBER(1583);
	((mindustry_entities_units_WeaponMount *) NULL_CHECK((frame[8].o)))->F_shoot = (jint(1));
	LINE_NUMBER(1584);
	sp[0].o = (jobject)((mindustry_entities_units_WeaponMount *) NULL_CHECK((frame[8].o)))->F_weapon;
	((func_mindustry_type_Weapon_update_mindustry_gen_Unit_mindustry_entities_units_WeaponMount) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_type_Weapon_update_mindustry_gen_Unit_mindustry_entities_units_WeaponMount])(ctx, sp[0].o, (frame[0].o), (frame[8].o));
	}
label_40:;
	{
	LINE_NUMBER(1576);
	INST_IINC(7, 1);
	goto label_37;
	}
label_38:;
	{
	LINE_NUMBER(1587);
	sp[0].o = (jobject)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_type;
	if (((jint)((mindustry_type_UnitType *) NULL_CHECK(sp[0].o))->F_flying) == 0) goto label_47;
	}
	{
	if (((jint)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_spawnedByCore) != 0) goto label_47;
	}
	{
	sp[0].o = (jobject)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_type;
	if (((jint)((mindustry_type_UnitType *) NULL_CHECK(sp[0].o))->F_createWreck) == 0) goto label_47;
	}
	{
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	sp[0].o = (jobject)((mindustry_core_GameState *) NULL_CHECK(sp[0].o))->F_rules;
	sp[1].o = (jobject)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_team;
	jfloat temp0 = (jfloat)((func_mindustry_game_Rules_unitCrashDamage_mindustry_game_Team_R_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_game_Rules_unitCrashDamage_mindustry_game_Team_R_float])(ctx, sp[0].o, sp[1].o);
	if ((floatCompare(temp0, (jfloat(0)), -1)) <= 0) goto label_47;
	}
	{
	LINE_NUMBER(1588);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_indexer;
	sp[1].o = (jobject)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_team;
	clinit_mindustry_world_meta_BlockFlag(ctx);
	sp[2].o = (jobject)SF_mindustry_world_meta_BlockFlag_shield;
	sp[0].o = (jobject)((func_mindustry_ai_BlockIndexer_getEnemy_mindustry_game_Team_mindustry_world_meta_BlockFlag_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_ai_BlockIndexer_getEnemy_mindustry_game_Team_mindustry_world_meta_BlockFlag_R_arc_struct_Seq])(ctx, sp[0].o, sp[1].o, sp[2].o);
	frame[5].o = sp[0].o;
	LINE_NUMBER(1589);
	jfloat temp0 = (jfloat)SM_arc_math_Mathf_pow_float_float_R_float(ctx, ((jfloat)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_hitSize), (jfloat(0.75f)));
	sp[0].o = (jobject)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_type;
	jfloat temp1 = (temp0 * ((jfloat)((mindustry_type_UnitType *) NULL_CHECK(sp[0].o))->F_crashDamageMultiplier)) * (jfloat(2.5f));
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	sp[0].o = (jobject)((mindustry_core_GameState *) NULL_CHECK(sp[0].o))->F_rules;
	sp[1].o = (jobject)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_team;
	jfloat temp2 = (jfloat)((func_mindustry_game_Rules_unitCrashDamage_mindustry_game_Team_R_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_game_Rules_unitCrashDamage_mindustry_game_Team_R_float])(ctx, sp[0].o, sp[1].o);
	frame[6].f = (temp1 * temp2);
	LINE_NUMBER(1590);
	jint temp3 = (jint)((func_arc_struct_Seq_isEmpty_R_boolean) ((void **) nullCheck(ctx, (frame[5].o))->vtable)[VTABLE_arc_struct_Seq_isEmpty_R_boolean])(ctx, (frame[5].o));
	if (temp3 != 0) goto label_51;
	}
	{
	sp[0].o = frame[5].o;
	{ /* InvokeDynamic */
		clinit_mindustry_gen_LegsUnit_invoke_arc_func_Boolf_16(ctx);
		auto proxy = (mindustry_gen_LegsUnit_invoke_arc_func_Boolf_16 *) gcAlloc(ctx, &class_mindustry_gen_LegsUnit_invoke_arc_func_Boolf_16);
		proxy->F_field1 = (frame[6].f);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[1].o = (jobject) proxy;
	}
	jint temp0 = (jint)((func_arc_struct_Seq_contains_arc_func_Boolf_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_contains_arc_func_Boolf_R_boolean])(ctx, sp[0].o, sp[1].o);
	if (temp0 != 0) goto label_47;
	}
label_51:;
	{
	LINE_NUMBER(1591);
	sp[0].o = (jobject)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_team;
	jfloat temp0 = (jfloat)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_x;
	jfloat temp1 = (jfloat)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_y;
	jfloat temp2 = (jfloat)SM_arc_math_Mathf_pow_float_float_R_float(ctx, ((jfloat)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_hitSize), (jfloat(0.94f)));
	SM_mindustry_entities_Damage_damage_mindustry_game_Team_float_float_float_float_boolean_boolean_boolean(ctx, sp[0].o, temp0, temp1, (temp2 * (jfloat(1.25f))), (frame[6].f), (jint(1)), (jint(0)), (jint(1)));
	}
label_47:;
	{
	LINE_NUMBER(1594);
	if ((clinit_mindustry_Vars(ctx), (jint)SF_mindustry_Vars_headless) != 0) goto label_52;
	}
	{
	sp[0].o = (jobject)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_type;
	if (((jint)((mindustry_type_UnitType *) NULL_CHECK(sp[0].o))->F_createScorch) == 0) goto label_52;
	}
	{
	LINE_NUMBER(1595);
	frame[5].i = (jint(0));
	}
label_54:;
	{
	jint temp0 = frame[5].i;
	sp[0].o = (jobject)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_type;
	sp[0].o = (jobject)((mindustry_type_UnitType *) NULL_CHECK(sp[0].o))->F_wreckRegions;
	if (temp0 >= (((jarray) nullCheck(ctx, sp[0].o))->length)) goto label_52;
	}
	{
	LINE_NUMBER(1596);
	sp[0].o = (jobject)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_type;
	sp[0].o = (jobject)((mindustry_type_UnitType *) NULL_CHECK(sp[0].o))->F_wreckRegions;
	jint temp0 = (jint)((func_arc_graphics_g2d_TextureRegion_found_R_boolean) ((void **) nullCheck(ctx, ((jobject)ARRAY_ACCESS(jobject, sp[0].o, (frame[5].i))))->vtable)[VTABLE_arc_graphics_g2d_TextureRegion_found_R_boolean])(ctx, ((jobject)ARRAY_ACCESS(jobject, sp[0].o, (frame[5].i))));
	if (temp0 == 0) goto label_56;
	}
	{
	LINE_NUMBER(1597);
	sp[0].o = (jobject)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_type;
	frame[6].f = (((jfloat)((mindustry_type_UnitType *) NULL_CHECK(sp[0].o))->F_hitSize) / (jfloat(4.0f)));
	LINE_NUMBER(1598);
	clinit_arc_util_Tmp(ctx);
	sp[0].o = (jobject)SF_arc_util_Tmp_v1;
	sp[0].o = (jobject)((func_arc_math_geom_Vec2_rnd_float_R_arc_math_geom_Vec2) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Vec2_rnd_float_R_arc_math_geom_Vec2])(ctx, sp[0].o, (frame[6].f));
	LINE_NUMBER(1599);
	sp[0].o = (jobject)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_type;
	sp[0].o = (jobject)((mindustry_type_UnitType *) NULL_CHECK(sp[0].o))->F_wreckRegions;
	sp[0].o = (jobject)ARRAY_ACCESS(jobject, sp[0].o, (frame[5].i));
	jfloat temp0 = (jfloat)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_x;
	clinit_arc_util_Tmp(ctx);
	sp[1].o = (jobject)SF_arc_util_Tmp_v1;
	jfloat temp1 = temp0 + ((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK(sp[1].o))->F_x);
	jfloat temp2 = (jfloat)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_y;
	clinit_arc_util_Tmp(ctx);
	sp[1].o = (jobject)SF_arc_util_Tmp_v1;
	SM_mindustry_entities_Effect_decal_arc_graphics_g2d_TextureRegion_float_float_float(ctx, sp[0].o, temp1, (temp2 + ((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK(sp[1].o))->F_y)), (((jfloat)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_rotation) - (jfloat(90.0f))));
	}
label_56:;
	{
	LINE_NUMBER(1595);
	INST_IINC(5, 1);
	goto label_54;
	}
label_52:;
	{
	LINE_NUMBER(1603);
	sp[0].o = (jobject)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_abilities;
	frame[5].o = sp[0].o;
	frame[6].i = (((jarray) nullCheck(ctx, (frame[5].o)))->length);
	frame[7].i = (jint(0));
	}
label_60:;
	{
	if ((frame[7].i) >= (frame[6].i)) goto label_61;
	}
	{
	frame[8].o = ((jobject)ARRAY_ACCESS(jobject, (frame[5].o), (frame[7].i)));
	LINE_NUMBER(1604);
	((func_mindustry_entities_abilities_Ability_death_mindustry_gen_Unit) ((void **) nullCheck(ctx, (frame[8].o))->vtable)[VTABLE_mindustry_entities_abilities_Ability_death_mindustry_gen_Unit])(ctx, (frame[8].o), (frame[0].o));
	LINE_NUMBER(1603);
	INST_IINC(7, 1);
	goto label_60;
	}
label_61:;
	{
	LINE_NUMBER(1606);
	sp[0].o = (jobject)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_type;
	((func_mindustry_type_UnitType_killed_mindustry_gen_Unit) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_type_UnitType_killed_mindustry_gen_Unit])(ctx, sp[0].o, (frame[0].o));
	LINE_NUMBER(1607);
	((func_mindustry_gen_LegsUnit_remove) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_gen_LegsUnit_remove])(ctx, (frame[0].o));
	}
label_15:;
	LINE_NUMBER(1609);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_gen_LegsUnit_display_arc_scene_ui_layout_Table(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/LegsUnit:display", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(1613);
	sp[0].o = (jobject)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_type;
	((func_mindustry_type_UnitType_display_mindustry_gen_Unit_arc_scene_ui_layout_Table) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_type_UnitType_display_mindustry_gen_Unit_arc_scene_ui_layout_Table])(ctx, sp[0].o, (frame[0].o), (frame[1].o));
	LINE_NUMBER(1614);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_gen_LegsUnit_draw(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/LegsUnit:draw", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(1622);
	sp[0].o = (jobject)((mindustry_gen_LegsUnit *) NULL_CHECK((frame[0].o)))->F_statuses;
	sp[0].o = (jobject)((func_arc_struct_Seq_iterator_R_java_util_Iterator) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_iterator_R_java_util_Iterator])(ctx, sp[0].o);
	frame[1].o = sp[0].o;
	}
label_1:;
	{
	jint temp0 = (jint)((func_java_util_Iterator_hasNext_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_hasNext_R_boolean, (frame[1].o)))(ctx, (frame[1].o));
	if (temp0 == 0) goto label_2;
	}
	{
	sp[0].o = (jobject)((func_java_util_Iterator_next_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_next_R_java_lang_Object, (frame[1].o)))(ctx, (frame[1].o));
	frame[2].o = (checkCast(ctx, &class_mindustry_entities_units_StatusEntry, sp[0].o));
	LINE_NUMBER(1623);
	sp[0].o = (jobject)((mindustry_entities_units_StatusEntry *) NULL_CHECK((frame[2].o)))->F_effect;
	((func_mindustry_type_StatusEffect_draw_mindustry_gen_Unit_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_type_StatusEffect_draw_mindustry_gen_Unit_float])(ctx, sp[0].o, (frame[0].o), ((jfloat)((mindustry_entities_units_StatusEntry *) NULL_CHECK((frame[2].o)))->F_time));
	LINE_NUMBER(1624);
	goto label_1;
	}
label_2:;
	{
	LINE_NUMBER(1628);
	sp[0].o = (jobject)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_type;
	((func_mindustry_type_UnitType_draw_mindustry_gen_Unit) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_type_UnitType_draw_mindustry_gen_Unit])(ctx, sp[0].o, (frame[0].o));
	LINE_NUMBER(1630);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_gen_LegsUnit_drawBuilding(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[12];
	auto stack = &frame[8];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/LegsUnit:drawBuilding", 12 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(1634);
	jint temp0 = (jint)((func_mindustry_gen_LegsUnit_activelyBuilding_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_gen_LegsUnit_activelyBuilding_R_boolean])(ctx, (frame[0].o));
	frame[1].i = temp0;
	LINE_NUMBER(1635);
	if ((frame[1].i) != 0) goto label_2;
	}
	{
	sp[0].o = (jobject)((mindustry_gen_LegsUnit *) NULL_CHECK((frame[0].o)))->F_lastActive;
	if (sp[0].o != nullptr) goto label_2;
	}
	popStackFrame(ctx);
	INST_RETURN();
label_2:;
	{
	LINE_NUMBER(1636);
	SM_arc_graphics_g2d_Draw_z_float(ctx, (jfloat(115.0f)));
	LINE_NUMBER(1637);
	if ((frame[1].i) == 0) goto label_4;
	}
	{
	sp[0].o = (jobject)((func_mindustry_gen_LegsUnit_buildPlan_R_mindustry_entities_units_BuildPlan) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_gen_LegsUnit_buildPlan_R_mindustry_entities_units_BuildPlan])(ctx, (frame[0].o));
	sp += 1;
	goto label_5;
	}
label_4:;
	INST_ALOAD(0);
	sp[-1].o = (jobject) ((mindustry_gen_LegsUnit *) NULL_CHECK(sp[-1].o))->F_lastActive;
label_5:;
	{
	sp -= 1;
	frame[2].o = sp[0].o;
	LINE_NUMBER(1638);
	sp[0].o = (jobject)((func_mindustry_entities_units_BuildPlan_tile_R_mindustry_world_Tile) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_mindustry_entities_units_BuildPlan_tile_R_mindustry_world_Tile])(ctx, (frame[2].o));
	frame[3].o = sp[0].o;
	LINE_NUMBER(1639);
	sp[0].o = (jobject)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_team;
	sp[0].o = (jobject)((func_mindustry_game_Team_core_R_mindustry_world_blocks_storage_CoreBlock$CoreBuild) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_game_Team_core_R_mindustry_world_blocks_storage_CoreBlock$CoreBuild])(ctx, sp[0].o);
	frame[4].o = sp[0].o;
	LINE_NUMBER(1640);
	if ((frame[3].o) == nullptr) goto label_9;
	}
	{
	sp[0].o = frame[0].o;
	sp[1].o = frame[2].o;
	clinit_mindustry_Vars(ctx);
	sp[2].o = (jobject)SF_mindustry_Vars_state;
	sp[2].o = (jobject)((mindustry_core_GameState *) NULL_CHECK(sp[2].o))->F_rules;
	sp += 2;
	if (((jint)((mindustry_game_Rules *) NULL_CHECK(sp[0].o))->F_infiniteResources) == 0) goto label_10;
	}
	(sp++)->f = jfloat(3,402823e+38f);
	goto label_11;
label_10:;
	{
	sp[0].o = (jobject)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_type;
	jfloat temp0 = (jfloat)((mindustry_type_UnitType *) NULL_CHECK(sp[0].o))->F_buildRange;
	sp[0].f = temp0;
	sp += 1;
	}
label_11:;
	POP_N(3); // Pop method args
	sp->i = (jint)((func_mindustry_gen_LegsUnit_within_arc_math_geom_Position_float_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_gen_LegsUnit_within_arc_math_geom_Position_float_R_boolean])(ctx, sp[0].o, sp[1].o, sp[2].f);
	sp++;
	if ((--sp)->i != 0) goto label_12;
label_9:;
	LINE_NUMBER(1641);
	popStackFrame(ctx);
	INST_RETURN();
label_12:;
	{
	LINE_NUMBER(1643);
	if ((frame[4].o) == nullptr) goto label_13;
	}
	INST_ILOAD(1);
	if ((--sp)->i == 0) goto label_13;
	{
	jint temp0 = (jint)((func_mindustry_gen_LegsUnit_isLocal_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_gen_LegsUnit_isLocal_R_boolean])(ctx, (frame[0].o));
	if (temp0 != 0) goto label_13;
	}
	{
	sp[0].o = (jobject)((func_mindustry_world_Tile_block_R_mindustry_world_Block) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_mindustry_world_Tile_block_R_mindustry_world_Block])(ctx, (frame[3].o));
	if ((isInstance(ctx, sp[0].o, &class_mindustry_world_blocks_ConstructBlock)) != 0) goto label_13;
	}
	{
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	jint temp0 = (jint)((func_mindustry_core_GameState_isPaused_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_GameState_isPaused_R_boolean])(ctx, sp[0].o);
	if (temp0 != 0) goto label_13;
	}
	{
	LINE_NUMBER(1644);
	SM_arc_graphics_g2d_Draw_z_float(ctx, (jfloat(84.0f)));
	LINE_NUMBER(1645);
	((func_mindustry_gen_LegsUnit_drawPlan_mindustry_entities_units_BuildPlan_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_gen_LegsUnit_drawPlan_mindustry_entities_units_BuildPlan_float])(ctx, (frame[0].o), (frame[2].o), (jfloat(0.5f)));
	LINE_NUMBER(1646);
	((func_mindustry_gen_LegsUnit_drawPlanTop_mindustry_entities_units_BuildPlan_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_gen_LegsUnit_drawPlanTop_mindustry_entities_units_BuildPlan_float])(ctx, (frame[0].o), (frame[2].o), (jfloat(0.5f)));
	LINE_NUMBER(1647);
	SM_arc_graphics_g2d_Draw_z_float(ctx, (jfloat(115.0f)));
	}
label_13:;
	{
	LINE_NUMBER(1649);
	sp[0].o = (jobject)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_type;
	if (((jint)((mindustry_type_UnitType *) NULL_CHECK(sp[0].o))->F_drawBuildBeam) == 0) goto label_18;
	}
	{
	LINE_NUMBER(1650);
	sp[0].o = (jobject)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_type;
	jfloat temp0 = (jfloat)((mindustry_type_UnitType *) NULL_CHECK(sp[0].o))->F_buildBeamOffset;
	jfloat temp1 = (jfloat)SM_arc_math_Mathf_absin_float_float_float_R_float(ctx, (clinit_arc_util_Time(ctx), (jfloat)SF_arc_util_Time_time), (jfloat(3.0f)), (jfloat(0.6f)));
	frame[5].f = (temp0 + temp1);
	LINE_NUMBER(1651);
	jfloat temp2 = (jfloat)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_x;
	jfloat temp3 = (jfloat)SM_arc_math_Angles_trnsx_float_float_R_float(ctx, ((jfloat)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_rotation), (frame[5].f));
	frame[6].f = (temp2 + temp3);
	LINE_NUMBER(1652);
	jfloat temp4 = (jfloat)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_y;
	jfloat temp5 = (jfloat)SM_arc_math_Angles_trnsy_float_float_R_float(ctx, ((jfloat)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_rotation), (frame[5].f));
	frame[7].f = (temp4 + temp5);
	LINE_NUMBER(1653);
	((func_mindustry_gen_LegsUnit_drawBuildingBeam_float_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_gen_LegsUnit_drawBuildingBeam_float_float])(ctx, (frame[0].o), (frame[6].f), (frame[7].f));
	}
label_18:;
	LINE_NUMBER(1655);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_gen_LegsUnit_drawBuildingBeam_float_float(jcontext ctx, jobject self, jfloat param0, jfloat param1) {
	NULL_CHECK(self);
	jtype frame[15];
	auto stack = &frame[9];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/LegsUnit:drawBuildingBeam", 15 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	frame[2].f = param1;
	{
	LINE_NUMBER(1659);
	jint temp0 = (jint)((func_mindustry_gen_LegsUnit_activelyBuilding_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_gen_LegsUnit_activelyBuilding_R_boolean])(ctx, (frame[0].o));
	frame[3].i = temp0;
	LINE_NUMBER(1660);
	if ((frame[3].i) != 0) goto label_2;
	}
	{
	sp[0].o = (jobject)((mindustry_gen_LegsUnit *) NULL_CHECK((frame[0].o)))->F_lastActive;
	if (sp[0].o != nullptr) goto label_2;
	}
	popStackFrame(ctx);
	INST_RETURN();
label_2:;
	{
	LINE_NUMBER(1661);
	SM_arc_graphics_g2d_Draw_z_float(ctx, (jfloat(115.0f)));
	LINE_NUMBER(1662);
	if ((frame[3].i) == 0) goto label_4;
	}
	{
	sp[0].o = (jobject)((func_mindustry_gen_LegsUnit_buildPlan_R_mindustry_entities_units_BuildPlan) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_gen_LegsUnit_buildPlan_R_mindustry_entities_units_BuildPlan])(ctx, (frame[0].o));
	sp += 1;
	goto label_5;
	}
label_4:;
	INST_ALOAD(0);
	sp[-1].o = (jobject) ((mindustry_gen_LegsUnit *) NULL_CHECK(sp[-1].o))->F_lastActive;
label_5:;
	{
	sp -= 1;
	frame[4].o = sp[0].o;
	LINE_NUMBER(1663);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_world;
	sp[0].o = (jobject)((func_mindustry_core_World_tile_int_int_R_mindustry_world_Tile) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_World_tile_int_int_R_mindustry_world_Tile])(ctx, sp[0].o, ((jint)((mindustry_entities_units_BuildPlan *) NULL_CHECK((frame[4].o)))->F_x), ((jint)((mindustry_entities_units_BuildPlan *) NULL_CHECK((frame[4].o)))->F_y));
	frame[5].o = sp[0].o;
	LINE_NUMBER(1664);
	if ((frame[5].o) == nullptr) goto label_8;
	}
	{
	sp[0].o = frame[0].o;
	sp[1].o = frame[4].o;
	clinit_mindustry_Vars(ctx);
	sp[2].o = (jobject)SF_mindustry_Vars_state;
	sp[2].o = (jobject)((mindustry_core_GameState *) NULL_CHECK(sp[2].o))->F_rules;
	sp += 2;
	if (((jint)((mindustry_game_Rules *) NULL_CHECK(sp[0].o))->F_infiniteResources) == 0) goto label_9;
	}
	(sp++)->f = jfloat(3,402823e+38f);
	goto label_10;
label_9:;
	{
	sp[0].o = (jobject)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_type;
	jfloat temp0 = (jfloat)((mindustry_type_UnitType *) NULL_CHECK(sp[0].o))->F_buildRange;
	sp[0].f = temp0;
	sp += 1;
	}
label_10:;
	POP_N(3); // Pop method args
	sp->i = (jint)((func_mindustry_gen_LegsUnit_within_arc_math_geom_Position_float_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_gen_LegsUnit_within_arc_math_geom_Position_float_R_boolean])(ctx, sp[0].o, sp[1].o, sp[2].f);
	sp++;
	if ((--sp)->i != 0) goto label_11;
label_8:;
	LINE_NUMBER(1665);
	popStackFrame(ctx);
	INST_RETURN();
label_11:;
	{
	LINE_NUMBER(1667);
	if (((jint)((mindustry_entities_units_BuildPlan *) NULL_CHECK((frame[4].o)))->F_breaking) == 0) goto label_12;
	}
	INST_ILOAD(3);
	if ((--sp)->i == 0) goto label_13;
	{
	sp[0].o = (jobject)((func_mindustry_world_Tile_block_R_mindustry_world_Block) ((void **) nullCheck(ctx, (frame[5].o))->vtable)[VTABLE_mindustry_world_Tile_block_R_mindustry_world_Block])(ctx, (frame[5].o));
	jint temp0 = (jint)((mindustry_world_Block *) NULL_CHECK(sp[0].o))->F_size;
	sp[0].i = temp0;
	sp += 1;
	goto label_14;
	}
label_13:;
	{
	jint temp0 = (jint)((mindustry_gen_LegsUnit *) NULL_CHECK((frame[0].o)))->F_lastSize;
	sp[0].i = temp0;
	sp += 1;
	goto label_14;
	}
label_12:;
	{
	sp[0].o = (jobject)((mindustry_entities_units_BuildPlan *) NULL_CHECK((frame[4].o)))->F_block;
	jint temp0 = (jint)((mindustry_world_Block *) NULL_CHECK(sp[0].o))->F_size;
	sp[0].i = temp0;
	sp += 1;
	}
label_14:;
	{
	sp -= 1;
	frame[6].i = sp[0].i;
	LINE_NUMBER(1668);
	jfloat temp0 = (jfloat)((func_mindustry_entities_units_BuildPlan_drawx_R_float) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_mindustry_entities_units_BuildPlan_drawx_R_float])(ctx, (frame[4].o));
	frame[7].f = temp0;
	LINE_NUMBER(1669);
	jfloat temp1 = (jfloat)((func_mindustry_entities_units_BuildPlan_drawy_R_float) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_mindustry_entities_units_BuildPlan_drawy_R_float])(ctx, (frame[4].o));
	frame[8].f = temp1;
	LINE_NUMBER(1670);
	jfloat temp2 = jfloat(1);
	sp[0].f = temp2;
	sp += 1;
	if (((jint)((mindustry_entities_units_BuildPlan *) NULL_CHECK((frame[4].o)))->F_breaking) == 0) goto label_18;
	}
	clinit_mindustry_graphics_Pal(ctx);
	(sp++)->o = SF_mindustry_graphics_Pal_remove;
	goto label_19;
label_18:;
	clinit_mindustry_graphics_Pal(ctx);
	(sp++)->o = SF_mindustry_graphics_Pal_accent;
label_19:;
	{
	sp -= 2;
	SM_arc_graphics_g2d_Lines_stroke_float_arc_graphics_Color(ctx, sp[0].f, sp[1].o);
	LINE_NUMBER(1671);
	SM_arc_graphics_g2d_Draw_z_float(ctx, (jfloat(122.0f)));
	LINE_NUMBER(1672);
	SM_arc_graphics_g2d_Draw_alpha_float(ctx, ((jfloat)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_buildAlpha));
	LINE_NUMBER(1673);
	if ((frame[3].i) != 0) goto label_23;
	}
	{
	sp[0].o = (jobject)((mindustry_world_Tile *) NULL_CHECK((frame[5].o)))->F_build;
	if ((isInstance(ctx, sp[0].o, &class_mindustry_world_blocks_ConstructBlock$ConstructBuild)) != 0) goto label_23;
	}
	{
	LINE_NUMBER(1674);
	jfloat temp0 = (jfloat)((func_mindustry_entities_units_BuildPlan_drawx_R_float) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_mindustry_entities_units_BuildPlan_drawx_R_float])(ctx, (frame[4].o));
	jfloat temp1 = (jfloat)((func_mindustry_entities_units_BuildPlan_drawy_R_float) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_mindustry_entities_units_BuildPlan_drawy_R_float])(ctx, (frame[4].o));
	SM_arc_graphics_g2d_Fill_square_float_float_float(ctx, temp0, temp1, ((jfloat(((frame[6].i) * (8)))) / (jfloat(2))));
	}
label_23:;
	{
	LINE_NUMBER(1676);
	SM_mindustry_graphics_Drawf_buildBeam_float_float_float_float_float(ctx, (frame[1].f), (frame[2].f), (frame[7].f), (frame[8].f), ((jfloat(((8) * (frame[6].i)))) / (jfloat(2))));
	LINE_NUMBER(1677);
	jfloat temp0 = frame[1].f;
	jfloat temp1 = frame[2].f;
	jfloat temp2 = jfloat(1.8f);
	jfloat temp3 = (jfloat)SM_arc_math_Mathf_absin_float_float_float_R_float(ctx, (clinit_arc_util_Time(ctx), (jfloat)SF_arc_util_Time_time), (jfloat(2.2f)), (jfloat(1.1f)));
	SM_arc_graphics_g2d_Fill_square_float_float_float_float(ctx, temp0, temp1, (temp2 + temp3), (((jfloat)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_rotation) + (jfloat(45.0f))));
	LINE_NUMBER(1678);
	SM_arc_graphics_g2d_Draw_reset(ctx);
	LINE_NUMBER(1679);
	SM_arc_graphics_g2d_Draw_z_float(ctx, (jfloat(115.0f)));
	LINE_NUMBER(1680);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_gen_LegsUnit_drawPlan_mindustry_entities_units_BuildPlan_float(jcontext ctx, jobject self, jobject param0, jfloat param1) {
	NULL_CHECK(self);
	jtype frame[11];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/LegsUnit:drawPlan", 11 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].f = param1;
	{
	LINE_NUMBER(1684);
	((mindustry_entities_units_BuildPlan *) NULL_CHECK((frame[1].o)))->F_animScale = (jfloat(1));
	LINE_NUMBER(1685);
	if (((jint)((mindustry_entities_units_BuildPlan *) NULL_CHECK((frame[1].o)))->F_breaking) == 0) goto label_2;
	}
	{
	LINE_NUMBER(1686);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_control;
	sp[0].o = (jobject)((mindustry_core_Control *) NULL_CHECK(sp[0].o))->F_input;
	((func_mindustry_input_InputHandler_drawBreaking_mindustry_entities_units_BuildPlan) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_input_InputHandler_drawBreaking_mindustry_entities_units_BuildPlan])(ctx, sp[0].o, (frame[1].o));
	goto label_4;
	}
label_2:;
	{
	LINE_NUMBER(1688);
	sp[0].o = (jobject)((mindustry_entities_units_BuildPlan *) NULL_CHECK((frame[1].o)))->F_block;
	sp[1].o = frame[1].o;
	clinit_mindustry_Vars(ctx);
	sp[2].o = (jobject)SF_mindustry_Vars_control;
	sp[2].o = (jobject)((mindustry_core_Control *) NULL_CHECK(sp[2].o))->F_input;
	sp[2].o = (jobject)((func_mindustry_input_InputHandler_allPlans_R_arc_util_Eachable) ((void **) nullCheck(ctx, sp[2].o)->vtable)[VTABLE_mindustry_input_InputHandler_allPlans_R_arc_util_Eachable])(ctx, sp[2].o);
	sp[3].o = (jobject)((mindustry_entities_units_BuildPlan *) NULL_CHECK((frame[1].o)))->F_block;
	sp[4].o = (jobject)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_team;
	jint temp0 = (jint)SM_mindustry_world_Build_validPlace_mindustry_world_Block_mindustry_game_Team_int_int_int_R_boolean(ctx, sp[3].o, sp[4].o, ((jint)((mindustry_entities_units_BuildPlan *) NULL_CHECK((frame[1].o)))->F_x), ((jint)((mindustry_entities_units_BuildPlan *) NULL_CHECK((frame[1].o)))->F_y), ((jint)((mindustry_entities_units_BuildPlan *) NULL_CHECK((frame[1].o)))->F_rotation));
	sp += 3;
	if (temp0 != 0) goto label_5;
	}
	{
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_control;
	sp[0].o = (jobject)((mindustry_core_Control *) NULL_CHECK(sp[0].o))->F_input;
	jint temp0 = (jint)((func_mindustry_input_InputHandler_planMatches_mindustry_entities_units_BuildPlan_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_input_InputHandler_planMatches_mindustry_entities_units_BuildPlan_R_boolean])(ctx, sp[0].o, (frame[1].o));
	if (temp0 == 0) goto label_6;
	}
label_5:;
	INST_ICONST(1);
	goto label_7;
label_6:;
	INST_ICONST(0);
label_7:;
	INST_FLOAD(2);
	POP_N(5); // Pop method args
	((func_mindustry_world_Block_drawPlan_mindustry_entities_units_BuildPlan_arc_util_Eachable_boolean_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_Block_drawPlan_mindustry_entities_units_BuildPlan_arc_util_Eachable_boolean_float])(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].i, sp[4].f);
label_4:;
	LINE_NUMBER(1690);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_gen_LegsUnit_drawPlanTop_mindustry_entities_units_BuildPlan_float(jcontext ctx, jobject self, jobject param0, jfloat param1) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/LegsUnit:drawPlanTop", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].f = param1;
	{
	LINE_NUMBER(1694);
	if (((jint)((mindustry_entities_units_BuildPlan *) NULL_CHECK((frame[1].o)))->F_breaking) != 0) goto label_1;
	}
	{
	LINE_NUMBER(1695);
	SM_arc_graphics_g2d_Draw_reset(ctx);
	LINE_NUMBER(1696);
	clinit_arc_graphics_Color(ctx);
	sp[0].o = (jobject)SF_arc_graphics_Color_white;
	jfloat temp0 = jfloat(0.24f);
	jfloat temp1 = (jfloat)SM_arc_math_Mathf_absin_float_float_float_R_float(ctx, (clinit_arc_util_Time(ctx), (jfloat)SF_arc_util_Time_globalTime), (jfloat(6.0f)), (jfloat(0.28f)));
	SM_arc_graphics_g2d_Draw_mixcol_arc_graphics_Color_float(ctx, sp[0].o, (temp0 + temp1));
	LINE_NUMBER(1697);
	SM_arc_graphics_g2d_Draw_alpha_float(ctx, (frame[2].f));
	LINE_NUMBER(1698);
	sp[0].o = (jobject)((mindustry_entities_units_BuildPlan *) NULL_CHECK((frame[1].o)))->F_block;
	sp[1].o = frame[1].o;
	sp[2].o = (jobject)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_plans;
	((func_mindustry_world_Block_drawPlanConfigTop_mindustry_entities_units_BuildPlan_arc_util_Eachable) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_Block_drawPlanConfigTop_mindustry_entities_units_BuildPlan_arc_util_Eachable])(ctx, sp[0].o, sp[1].o, sp[2].o);
	}
label_1:;
	LINE_NUMBER(1700);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_gen_LegsUnit_getCollisions_arc_func_Cons(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/LegsUnit:getCollisions", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	LINE_NUMBER(1704);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_gen_LegsUnit_handleSyncHidden(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/LegsUnit:handleSyncHidden", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(1712);
	((func_mindustry_gen_LegsUnit_remove) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_gen_LegsUnit_remove])(ctx, (frame[0].o));
	LINE_NUMBER(1713);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_netClient;
	((func_mindustry_core_NetClient_clearRemovedEntity_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_NetClient_clearRemovedEntity_int])(ctx, sp[0].o, ((jint)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_id));
	LINE_NUMBER(1715);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_gen_LegsUnit_heal(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/LegsUnit:heal", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(1719);
	((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_dead = (jint(0));
	LINE_NUMBER(1720);
	((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_health = ((jfloat)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_maxHealth);
	LINE_NUMBER(1721);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_gen_LegsUnit_heal_float(jcontext ctx, jobject self, jfloat param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/LegsUnit:heal", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	{
	LINE_NUMBER(1726);
	sp[0].o = frame[0].o;
	((mindustry_gen_Unit *) NULL_CHECK(sp[0].o))->F_health = (((jfloat)((mindustry_gen_Unit *) NULL_CHECK(sp[0].o))->F_health) + (frame[1].f));
	LINE_NUMBER(1727);
	((func_mindustry_gen_LegsUnit_clampHealth) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_gen_LegsUnit_clampHealth])(ctx, (frame[0].o));
	LINE_NUMBER(1731);
	if ((floatCompare(((jfloat)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_health), ((jfloat)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_maxHealth), 1)) >= 0) goto label_3;
	}
	{
	if ((floatCompare((frame[1].f), (jfloat(0)), -1)) <= 0) goto label_3;
	}
	{
	LINE_NUMBER(1732);
	((mindustry_gen_LegsUnit *) NULL_CHECK((frame[0].o)))->F_wasHealed = (jint(1));
	}
label_3:;
	LINE_NUMBER(1735);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_gen_LegsUnit_healFract_float(jcontext ctx, jobject self, jfloat param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/LegsUnit:healFract", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	{
	LINE_NUMBER(1739);
	((func_mindustry_gen_LegsUnit_heal_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_gen_LegsUnit_heal_float])(ctx, (frame[0].o), ((frame[1].f) * ((jfloat)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_maxHealth)));
	LINE_NUMBER(1740);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_gen_LegsUnit_hitbox_arc_math_geom_Rect(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/LegsUnit:hitbox", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(1744);
	sp[0].o = (jobject)((func_arc_math_geom_Rect_setCentered_float_float_float_float_R_arc_math_geom_Rect) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_math_geom_Rect_setCentered_float_float_float_float_R_arc_math_geom_Rect])(ctx, (frame[1].o), ((jfloat)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_x), ((jfloat)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_y), ((jfloat)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_hitSize), ((jfloat)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_hitSize));
	LINE_NUMBER(1745);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_gen_LegsUnit_hitboxTile_arc_math_geom_Rect(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/LegsUnit:hitboxTile", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(1749);
	jfloat temp0 = (jfloat)SM_java_lang_Math_min_float_float_R_float(ctx, (((jfloat)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_hitSize) * (jfloat(0.66f))), (jfloat(7.8f)));
	frame[2].f = temp0;
	LINE_NUMBER(1750);
	sp[0].o = (jobject)((func_arc_math_geom_Rect_setCentered_float_float_float_float_R_arc_math_geom_Rect) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_math_geom_Rect_setCentered_float_float_float_float_R_arc_math_geom_Rect])(ctx, (frame[1].o), ((jfloat)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_x), ((jfloat)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_y), (frame[2].f), (frame[2].f));
	LINE_NUMBER(1751);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_gen_LegsUnit_impulse_arc_math_geom_Vec2(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/LegsUnit:impulse", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(1755);
	((func_mindustry_gen_LegsUnit_impulse_float_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_gen_LegsUnit_impulse_float_float])(ctx, (frame[0].o), ((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK((frame[1].o)))->F_x), ((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK((frame[1].o)))->F_y));
	LINE_NUMBER(1756);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_gen_LegsUnit_impulse_float_float(jcontext ctx, jobject self, jfloat param0, jfloat param1) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/LegsUnit:impulse", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	frame[2].f = param1;
	{
	LINE_NUMBER(1760);
	jfloat temp0 = (jfloat)((func_mindustry_gen_LegsUnit_mass_R_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_gen_LegsUnit_mass_R_float])(ctx, (frame[0].o));
	frame[3].f = temp0;
	LINE_NUMBER(1761);
	sp[0].o = (jobject)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_vel;
	sp[0].o = (jobject)((func_arc_math_geom_Vec2_add_float_float_R_arc_math_geom_Vec2) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Vec2_add_float_float_R_arc_math_geom_Vec2])(ctx, sp[0].o, ((frame[1].f) / (frame[3].f)), ((frame[2].f) / (frame[3].f)));
	LINE_NUMBER(1762);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_gen_LegsUnit_impulseNet_arc_math_geom_Vec2(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/LegsUnit:impulseNet", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(1766);
	((func_mindustry_gen_LegsUnit_impulse_float_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_gen_LegsUnit_impulse_float_float])(ctx, (frame[0].o), ((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK((frame[1].o)))->F_x), ((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK((frame[1].o)))->F_y));
	LINE_NUMBER(1767);
	jint temp0 = (jint)((func_mindustry_gen_LegsUnit_isRemote_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_gen_LegsUnit_isRemote_R_boolean])(ctx, (frame[0].o));
	if (temp0 == 0) goto label_2;
	}
	{
	LINE_NUMBER(1768);
	jfloat temp0 = (jfloat)((func_mindustry_gen_LegsUnit_mass_R_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_gen_LegsUnit_mass_R_float])(ctx, (frame[0].o));
	frame[2].f = temp0;
	LINE_NUMBER(1769);
	((func_mindustry_gen_LegsUnit_move_float_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_gen_LegsUnit_move_float_float])(ctx, (frame[0].o), (((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK((frame[1].o)))->F_x) / (frame[2].f)), (((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK((frame[1].o)))->F_y) / (frame[2].f)));
	}
label_2:;
	LINE_NUMBER(1771);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_gen_LegsUnit_interpolate(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/LegsUnit:interpolate", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(1774);
	if ((longCompare(((jlong)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_lastUpdated), (jlong(0)))) == 0) goto label_1;
	}
	{
	if ((longCompare(((jlong)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_updateSpacing), (jlong(0)))) == 0) goto label_1;
	}
	{
	LINE_NUMBER(1775);
	jlong temp0 = (jlong)SM_arc_util_Time_timeSinceMillis_long_R_long(ctx, ((jlong)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_lastUpdated));
	frame[1].f = (jfloat(temp0));
	LINE_NUMBER(1776);
	jfloat temp1 = (jfloat)SM_java_lang_Math_min_float_float_R_float(ctx, ((frame[1].f) / (jfloat(((jlong)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_updateSpacing)))), (jfloat(2)));
	frame[2].f = temp1;
	LINE_NUMBER(1777);
	sp[0].o = frame[0].o;
	jfloat temp2 = (jfloat)SM_arc_math_Mathf_slerp_float_float_float_R_float(ctx, ((jfloat)((mindustry_gen_LegsUnit *) NULL_CHECK((frame[0].o)))->F_rotation_LAST_), ((jfloat)((mindustry_gen_LegsUnit *) NULL_CHECK((frame[0].o)))->F_rotation_TARGET_), (frame[2].f));
	((mindustry_gen_Unit *) NULL_CHECK(sp[0].o))->F_rotation = temp2;
	LINE_NUMBER(1778);
	sp[0].o = frame[0].o;
	jfloat temp3 = (jfloat)SM_arc_math_Mathf_lerp_float_float_float_R_float(ctx, ((jfloat)((mindustry_gen_LegsUnit *) NULL_CHECK((frame[0].o)))->F_x_LAST_), ((jfloat)((mindustry_gen_LegsUnit *) NULL_CHECK((frame[0].o)))->F_x_TARGET_), (frame[2].f));
	((mindustry_gen_Unit *) NULL_CHECK(sp[0].o))->F_x = temp3;
	LINE_NUMBER(1779);
	sp[0].o = frame[0].o;
	jfloat temp4 = (jfloat)SM_arc_math_Mathf_lerp_float_float_float_R_float(ctx, ((jfloat)((mindustry_gen_LegsUnit *) NULL_CHECK((frame[0].o)))->F_y_LAST_), ((jfloat)((mindustry_gen_LegsUnit *) NULL_CHECK((frame[0].o)))->F_y_TARGET_), (frame[2].f));
	((mindustry_gen_Unit *) NULL_CHECK(sp[0].o))->F_y = temp4;
	LINE_NUMBER(1780);
	goto label_8;
	}
label_1:;
	{
	if ((longCompare(((jlong)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_lastUpdated), (jlong(0)))) == 0) goto label_8;
	}
	{
	LINE_NUMBER(1781);
	((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_rotation = ((jfloat)((mindustry_gen_LegsUnit *) NULL_CHECK((frame[0].o)))->F_rotation_TARGET_);
	LINE_NUMBER(1782);
	((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_x = ((jfloat)((mindustry_gen_LegsUnit *) NULL_CHECK((frame[0].o)))->F_x_TARGET_);
	LINE_NUMBER(1783);
	((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_y = ((jfloat)((mindustry_gen_LegsUnit *) NULL_CHECK((frame[0].o)))->F_y_TARGET_);
	}
label_8:;
	LINE_NUMBER(1786);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_gen_LegsUnit_kill(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/LegsUnit:kill", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(1790);
	if (((jint)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_dead) != 0) goto label_1;
	}
	{
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_net;
	jint temp0 = (jint)((func_mindustry_net_Net_client_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_net_Net_client_R_boolean])(ctx, sp[0].o);
	if (temp0 != 0) goto label_1;
	}
	{
	jint temp0 = (jint)((func_mindustry_gen_LegsUnit_killable_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_gen_LegsUnit_killable_R_boolean])(ctx, (frame[0].o));
	if (temp0 != 0) goto label_2;
	}
label_1:;
	popStackFrame(ctx);
	INST_RETURN();
label_2:;
	{
	LINE_NUMBER(1791);
	SM_mindustry_gen_Call_unitDeath_int(ctx, ((jint)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_id));
	LINE_NUMBER(1792);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_gen_LegsUnit_killed(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/LegsUnit:killed", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(1800);
	sp[0].o = frame[0].o;
	jint temp0 = (jint)((func_mindustry_gen_LegsUnit_isLocal_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_gen_LegsUnit_isLocal_R_boolean])(ctx, (frame[0].o));
	((mindustry_gen_LegsUnit *) NULL_CHECK(sp[0].o))->F_wasPlayer = temp0;
	LINE_NUMBER(1801);
	sp[0].o = frame[0].o;
	jfloat temp1 = (jfloat)SM_java_lang_Math_min_float_float_R_float(ctx, ((jfloat)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_health), (jfloat(0)));
	((mindustry_gen_Unit *) NULL_CHECK(sp[0].o))->F_health = temp1;
	LINE_NUMBER(1802);
	((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_dead = (jint(1));
	LINE_NUMBER(1803);
	sp[0].o = (jobject)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_type;
	if (((jint)((mindustry_type_UnitType *) NULL_CHECK(sp[0].o))->F_flying) == 0) goto label_4;
	}
	{
	sp[0].o = (jobject)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_type;
	if (((jint)((mindustry_type_UnitType *) NULL_CHECK(sp[0].o))->F_createWreck) != 0) goto label_5;
	}
label_4:;
	{
	LINE_NUMBER(1804);
	((func_mindustry_gen_LegsUnit_destroy) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_gen_LegsUnit_destroy])(ctx, (frame[0].o));
	goto label_6;
	}
label_5:;
	{
	LINE_NUMBER(1806);
	sp[0].o = (jobject)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_type;
	sp[0].o = (jobject)((mindustry_type_UnitType *) NULL_CHECK(sp[0].o))->F_wreckSound;
	sp[1].o = frame[0].o;
	jfloat temp0 = jfloat(1);
	sp[2].o = (jobject)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_type;
	jint temp1 = (jint)((func_arc_audio_Sound_at_arc_math_geom_Position_float_float_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_audio_Sound_at_arc_math_geom_Position_float_float_R_int])(ctx, sp[0].o, sp[1].o, temp0, ((jfloat)((mindustry_type_UnitType *) NULL_CHECK(sp[2].o))->F_wreckSoundVolume));
	}
label_6:;
	LINE_NUMBER(1809);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_gen_LegsUnit_landed(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/LegsUnit:landed", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(1813);
	sp[0].o = (jobject)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_type;
	if ((floatCompare(((jfloat)((mindustry_type_UnitType *) NULL_CHECK(sp[0].o))->F_mechLandShake), (jfloat(0)), -1)) <= 0) goto label_1;
	}
	{
	LINE_NUMBER(1814);
	sp[0].o = (jobject)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_type;
	jfloat temp0 = (jfloat)((mindustry_type_UnitType *) NULL_CHECK(sp[0].o))->F_mechLandShake;
	sp[0].o = (jobject)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_type;
	SM_mindustry_entities_Effect_shake_float_float_arc_math_geom_Position(ctx, temp0, ((jfloat)((mindustry_type_UnitType *) NULL_CHECK(sp[0].o))->F_mechLandShake), (frame[0].o));
	}
label_1:;
	{
	LINE_NUMBER(1816);
	sp[0].o = (jobject)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_type;
	((func_mindustry_type_UnitType_landed_mindustry_gen_Unit) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_type_UnitType_landed_mindustry_gen_Unit])(ctx, sp[0].o, (frame[0].o));
	LINE_NUMBER(1817);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_gen_LegsUnit_lookAt_arc_math_geom_Position(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/LegsUnit:lookAt", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(1821);
	sp[0].o = frame[0].o;
	jfloat temp0 = (jfloat)((func_mindustry_gen_LegsUnit_angleTo_arc_math_geom_Position_R_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_gen_LegsUnit_angleTo_arc_math_geom_Position_R_float])(ctx, (frame[0].o), (frame[1].o));
	((func_mindustry_gen_LegsUnit_lookAt_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_gen_LegsUnit_lookAt_float])(ctx, sp[0].o, temp0);
	LINE_NUMBER(1822);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_gen_LegsUnit_lookAt_float(jcontext ctx, jobject self, jfloat param0) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/LegsUnit:lookAt", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	{
	LINE_NUMBER(1826);
	sp[0].o = frame[0].o;
	jfloat temp0 = (jfloat)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_rotation;
	jfloat temp1 = frame[1].f;
	sp[1].o = (jobject)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_type;
	jfloat temp2 = ((jfloat)((mindustry_type_UnitType *) NULL_CHECK(sp[1].o))->F_rotateSpeed) * (clinit_arc_util_Time(ctx), (jfloat)SF_arc_util_Time_delta);
	jfloat temp3 = (jfloat)((func_mindustry_gen_LegsUnit_speedMultiplier_R_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_gen_LegsUnit_speedMultiplier_R_float])(ctx, (frame[0].o));
	jfloat temp4 = (jfloat)SM_arc_math_Angles_moveToward_float_float_float_R_float(ctx, temp0, temp1, (temp2 * temp3));
	((mindustry_gen_Unit *) NULL_CHECK(sp[0].o))->F_rotation = temp4;
	LINE_NUMBER(1827);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_gen_LegsUnit_lookAt_float_float(jcontext ctx, jobject self, jfloat param0, jfloat param1) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/LegsUnit:lookAt", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	frame[2].f = param1;
	{
	LINE_NUMBER(1831);
	sp[0].o = frame[0].o;
	jfloat temp0 = (jfloat)((func_mindustry_gen_LegsUnit_angleTo_float_float_R_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_gen_LegsUnit_angleTo_float_float_R_float])(ctx, (frame[0].o), (frame[1].f), (frame[2].f));
	((func_mindustry_gen_LegsUnit_lookAt_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_gen_LegsUnit_lookAt_float])(ctx, sp[0].o, temp0);
	LINE_NUMBER(1832);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_gen_LegsUnit_move_arc_math_geom_Vec2(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/LegsUnit:move", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(1836);
	((func_mindustry_gen_LegsUnit_move_float_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_gen_LegsUnit_move_float_float])(ctx, (frame[0].o), ((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK((frame[1].o)))->F_x), ((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK((frame[1].o)))->F_y));
	LINE_NUMBER(1837);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_gen_LegsUnit_move_float_float(jcontext ctx, jobject self, jfloat param0, jfloat param1) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/LegsUnit:move", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	frame[2].f = param1;
	{
	LINE_NUMBER(1841);
	sp[0].o = (jobject)((func_mindustry_gen_LegsUnit_solidity_R_mindustry_entities_EntityCollisions$SolidPred) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_gen_LegsUnit_solidity_R_mindustry_entities_EntityCollisions$SolidPred])(ctx, (frame[0].o));
	frame[3].o = sp[0].o;
	LINE_NUMBER(1842);
	if ((frame[3].o) == nullptr) goto label_2;
	}
	{
	LINE_NUMBER(1843);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_collisions;
	((func_mindustry_entities_EntityCollisions_move_mindustry_gen_Hitboxc_float_float_mindustry_entities_EntityCollisions$SolidPred) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_entities_EntityCollisions_move_mindustry_gen_Hitboxc_float_float_mindustry_entities_EntityCollisions$SolidPred])(ctx, sp[0].o, (frame[0].o), (frame[1].f), (frame[2].f), (frame[3].o));
	goto label_4;
	}
label_2:;
	{
	LINE_NUMBER(1845);
	sp[0].o = frame[0].o;
	((mindustry_gen_Unit *) NULL_CHECK(sp[0].o))->F_x = (((jfloat)((mindustry_gen_Unit *) NULL_CHECK(sp[0].o))->F_x) + (frame[1].f));
	LINE_NUMBER(1846);
	sp[0].o = frame[0].o;
	((mindustry_gen_Unit *) NULL_CHECK(sp[0].o))->F_y = (((jfloat)((mindustry_gen_Unit *) NULL_CHECK(sp[0].o))->F_y) + (frame[2].f));
	}
label_4:;
	LINE_NUMBER(1848);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_gen_LegsUnit_moveAt_arc_math_geom_Vec2(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/LegsUnit:moveAt", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(1852);
	sp[0].o = frame[0].o;
	sp[1].o = frame[1].o;
	sp[2].o = (jobject)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_type;
	((func_mindustry_gen_LegsUnit_moveAt_arc_math_geom_Vec2_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_gen_LegsUnit_moveAt_arc_math_geom_Vec2_float])(ctx, sp[0].o, sp[1].o, ((jfloat)((mindustry_type_UnitType *) NULL_CHECK(sp[2].o))->F_accel));
	LINE_NUMBER(1853);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_gen_LegsUnit_moveAt_arc_math_geom_Vec2_float(jcontext ctx, jobject self, jobject param0, jfloat param1) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/LegsUnit:moveAt", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].f = param1;
	{
	LINE_NUMBER(1857);
	clinit_mindustry_gen_LegsUnit(ctx);
	sp[0].o = (jobject)SF_mindustry_gen_LegsUnit_tmp1;
	sp[0].o = (jobject)((func_arc_math_geom_Vec2_set_arc_math_geom_Vec2_R_arc_math_geom_Vec2) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Vec2_set_arc_math_geom_Vec2_R_arc_math_geom_Vec2])(ctx, sp[0].o, (frame[1].o));
	frame[3].o = sp[0].o;
	LINE_NUMBER(1858);
	clinit_mindustry_gen_LegsUnit(ctx);
	sp[0].o = (jobject)SF_mindustry_gen_LegsUnit_tmp2;
	sp[0].o = (jobject)((func_arc_math_geom_Vec2_set_arc_math_geom_Vec2_R_arc_math_geom_Vec2) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Vec2_set_arc_math_geom_Vec2_R_arc_math_geom_Vec2])(ctx, sp[0].o, (frame[3].o));
	sp[1].o = (jobject)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_vel;
	sp[0].o = (jobject)((func_arc_math_geom_Vec2_sub_arc_math_geom_Vec2_R_arc_math_geom_Vec2) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Vec2_sub_arc_math_geom_Vec2_R_arc_math_geom_Vec2])(ctx, sp[0].o, sp[1].o);
	jfloat temp0 = frame[2].f;
	jfloat temp1 = (jfloat)((func_arc_math_geom_Vec2_len_R_float) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_math_geom_Vec2_len_R_float])(ctx, (frame[1].o));
	sp[0].o = (jobject)((func_arc_math_geom_Vec2_limit_float_R_arc_math_geom_Vec2) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Vec2_limit_float_R_arc_math_geom_Vec2])(ctx, sp[0].o, ((temp0 * temp1) * (clinit_arc_util_Time(ctx), (jfloat)SF_arc_util_Time_delta)));
	LINE_NUMBER(1859);
	sp[0].o = (jobject)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_vel;
	clinit_mindustry_gen_LegsUnit(ctx);
	sp[1].o = (jobject)SF_mindustry_gen_LegsUnit_tmp2;
	sp[0].o = (jobject)((func_arc_math_geom_Vec2_add_arc_math_geom_Vec2_R_arc_math_geom_Vec2) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Vec2_add_arc_math_geom_Vec2_R_arc_math_geom_Vec2])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(1860);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_gen_LegsUnit_movePref_arc_math_geom_Vec2(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/LegsUnit:movePref", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(1864);
	sp[0].o = (jobject)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_type;
	if (((jint)((mindustry_type_UnitType *) NULL_CHECK(sp[0].o))->F_omniMovement) == 0) goto label_1;
	}
	{
	LINE_NUMBER(1865);
	((func_mindustry_gen_LegsUnit_moveAt_arc_math_geom_Vec2) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_gen_LegsUnit_moveAt_arc_math_geom_Vec2])(ctx, (frame[0].o), (frame[1].o));
	goto label_3;
	}
label_1:;
	{
	LINE_NUMBER(1867);
	((func_mindustry_gen_LegsUnit_rotateMove_arc_math_geom_Vec2) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_gen_LegsUnit_rotateMove_arc_math_geom_Vec2])(ctx, (frame[0].o), (frame[1].o));
	}
label_3:;
	LINE_NUMBER(1869);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_gen_LegsUnit_rawDamage_float(jcontext ctx, jobject self, jfloat param0) {
	NULL_CHECK(self);
	jtype frame[10];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/LegsUnit:rawDamage", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	{
	LINE_NUMBER(1873);
	if ((floatCompare(((jfloat)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_shield), (jfloat(1,000000e-04f)), -1)) <= 0) goto label_1;
	}
	INST_ICONST(1);
	goto label_2;
label_1:;
	INST_ICONST(0);
label_2:;
	{
	sp -= 1;
	frame[2].i = sp[0].i;
	LINE_NUMBER(1874);
	jint temp0 = (jint)SM_java_lang_Float_isNaN_float_R_boolean(ctx, ((jfloat)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_health));
	if (temp0 == 0) goto label_4;
	}
	{
	((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_health = (jfloat(0));
	}
label_4:;
	{
	LINE_NUMBER(1875);
	if ((frame[2].i) == 0) goto label_5;
	}
	{
	LINE_NUMBER(1876);
	((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_shieldAlpha = (jfloat(1));
	}
label_5:;
	{
	LINE_NUMBER(1878);
	jfloat temp0 = (jfloat)SM_java_lang_Math_max_float_float_R_float(ctx, ((jfloat)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_shield), (jfloat(0)));
	jfloat temp1 = (jfloat)SM_java_lang_Math_min_float_float_R_float(ctx, temp0, (frame[1].f));
	frame[3].f = temp1;
	LINE_NUMBER(1879);
	sp[0].o = frame[0].o;
	((mindustry_gen_Unit *) NULL_CHECK(sp[0].o))->F_shield = (((jfloat)((mindustry_gen_Unit *) NULL_CHECK(sp[0].o))->F_shield) - (frame[3].f));
	LINE_NUMBER(1880);
	((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_hitTime = (jfloat(1));
	LINE_NUMBER(1881);
	frame[1].f = ((frame[1].f) - (frame[3].f));
	LINE_NUMBER(1882);
	if ((floatCompare((frame[1].f), (jfloat(0)), -1)) <= 0) goto label_11;
	}
	{
	sp[0].o = (jobject)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_type;
	if (((jint)((mindustry_type_UnitType *) NULL_CHECK(sp[0].o))->F_killable) == 0) goto label_11;
	}
	{
	LINE_NUMBER(1883);
	sp[0].o = frame[0].o;
	((mindustry_gen_Unit *) NULL_CHECK(sp[0].o))->F_health = (((jfloat)((mindustry_gen_Unit *) NULL_CHECK(sp[0].o))->F_health) - (frame[1].f));
	LINE_NUMBER(1884);
	if ((floatCompare(((jfloat)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_health), (jfloat(0)), 1)) > 0) goto label_14;
	}
	{
	if (((jint)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_dead) != 0) goto label_14;
	}
	{
	LINE_NUMBER(1885);
	((func_mindustry_gen_LegsUnit_kill) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_gen_LegsUnit_kill])(ctx, (frame[0].o));
	}
label_14:;
	{
	LINE_NUMBER(1887);
	if ((frame[2].i) == 0) goto label_11;
	}
	{
	if ((floatCompare(((jfloat)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_shield), (jfloat(1,000000e-04f)), 1)) > 0) goto label_11;
	}
	{
	LINE_NUMBER(1888);
	clinit_mindustry_content_Fx(ctx);
	sp[0].o = (jobject)SF_mindustry_content_Fx_unitShieldBreak;
	jfloat temp0 = (jfloat)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_x;
	jfloat temp1 = (jfloat)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_y;
	jfloat temp2 = jfloat(0);
	sp[1].o = (jobject)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_type;
	sp[1].o = (jobject)((func_mindustry_type_UnitType_shieldColor_mindustry_gen_Unit_R_arc_graphics_Color) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_mindustry_type_UnitType_shieldColor_mindustry_gen_Unit_R_arc_graphics_Color])(ctx, sp[1].o, (frame[0].o));
	((func_mindustry_entities_Effect_at_float_float_float_arc_graphics_Color_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_entities_Effect_at_float_float_float_arc_graphics_Color_java_lang_Object])(ctx, sp[0].o, temp0, temp1, temp2, sp[1].o, (frame[0].o));
	}
label_11:;
	LINE_NUMBER(1891);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_gen_LegsUnit_readSync_arc_util_io_Reads(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[10];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/LegsUnit:readSync", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(1894);
	if ((longCompare(((jlong)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_lastUpdated), (jlong(0)))) == 0) goto label_1;
	}
	{
	sp[0].o = frame[0].o;
	jlong temp0 = (jlong)SM_arc_util_Time_timeSinceMillis_long_R_long(ctx, ((jlong)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_lastUpdated));
	((mindustry_gen_Unit *) NULL_CHECK(sp[0].o))->F_updateSpacing = temp0;
	}
label_1:;
	{
	LINE_NUMBER(1895);
	sp[0].o = frame[0].o;
	jlong temp0 = (jlong)SM_arc_util_Time_millis_R_long(ctx);
	((mindustry_gen_Unit *) NULL_CHECK(sp[0].o))->F_lastUpdated = temp0;
	LINE_NUMBER(1896);
	jint temp1 = (jint)((func_mindustry_gen_LegsUnit_isLocal_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_gen_LegsUnit_isLocal_R_boolean])(ctx, (frame[0].o));
	frame[2].i = temp1;
	LINE_NUMBER(1897);
	sp[0].o = frame[0].o;
	sp[1].o = frame[1].o;
	sp[2].o = (jobject)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_abilities;
	sp[1].o = (jobject)SM_mindustry_io_TypeIO_readAbilities_arc_util_io_Reads_Array1_mindustry_entities_abilities_Ability_R_Array1_mindustry_entities_abilities_Ability(ctx, sp[1].o, sp[2].o);
	((mindustry_gen_Unit *) NULL_CHECK(sp[0].o))->F_abilities = (jref) sp[1].o;
	LINE_NUMBER(1898);
	sp[0].o = frame[0].o;
	jfloat temp2 = (jfloat)((func_arc_util_io_Reads_f_R_float) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_util_io_Reads_f_R_float])(ctx, (frame[1].o));
	((mindustry_gen_Unit *) NULL_CHECK(sp[0].o))->F_aimX = temp2;
	LINE_NUMBER(1899);
	sp[0].o = frame[0].o;
	jfloat temp3 = (jfloat)((func_arc_util_io_Reads_f_R_float) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_util_io_Reads_f_R_float])(ctx, (frame[1].o));
	((mindustry_gen_Unit *) NULL_CHECK(sp[0].o))->F_aimY = temp3;
	LINE_NUMBER(1900);
	sp[0].o = frame[0].o;
	sp[1].o = frame[1].o;
	sp[2].o = (jobject)((mindustry_gen_LegsUnit *) NULL_CHECK((frame[0].o)))->F_controller;
	sp[1].o = (jobject)SM_mindustry_io_TypeIO_readController_arc_util_io_Reads_mindustry_entities_units_UnitController_R_mindustry_entities_units_UnitController(ctx, sp[1].o, sp[2].o);
	((mindustry_gen_LegsUnit *) NULL_CHECK(sp[0].o))->F_controller = (jref) sp[1].o;
	LINE_NUMBER(1901);
	if ((frame[2].i) != 0) goto label_8;
	}
	{
	LINE_NUMBER(1902);
	sp[0].o = frame[0].o;
	jfloat temp0 = (jfloat)((func_arc_util_io_Reads_f_R_float) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_util_io_Reads_f_R_float])(ctx, (frame[1].o));
	((mindustry_gen_Unit *) NULL_CHECK(sp[0].o))->F_elevation = temp0;
	goto label_10;
	}
label_8:;
	{
	LINE_NUMBER(1904);
	jfloat temp0 = (jfloat)((func_arc_util_io_Reads_f_R_float) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_util_io_Reads_f_R_float])(ctx, (frame[1].o));
	}
label_10:;
	{
	LINE_NUMBER(1906);
	sp[0].o = frame[0].o;
	jdouble temp0 = (jdouble)((func_arc_util_io_Reads_d_R_double) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_util_io_Reads_d_R_double])(ctx, (frame[1].o));
	((mindustry_gen_Unit *) NULL_CHECK(sp[0].o))->F_flag = temp0;
	LINE_NUMBER(1907);
	sp[0].o = frame[0].o;
	jfloat temp1 = (jfloat)((func_arc_util_io_Reads_f_R_float) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_util_io_Reads_f_R_float])(ctx, (frame[1].o));
	((mindustry_gen_Unit *) NULL_CHECK(sp[0].o))->F_health = temp1;
	LINE_NUMBER(1908);
	sp[0].o = frame[0].o;
	jint temp2 = (jint)((func_arc_util_io_Reads_bool_R_boolean) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_util_io_Reads_bool_R_boolean])(ctx, (frame[1].o));
	((mindustry_gen_Unit *) NULL_CHECK(sp[0].o))->F_isShooting = temp2;
	LINE_NUMBER(1909);
	if ((frame[2].i) != 0) goto label_14;
	}
	{
	LINE_NUMBER(1910);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)SM_mindustry_io_TypeIO_readTile_arc_util_io_Reads_R_mindustry_world_Tile(ctx, (frame[1].o));
	((mindustry_gen_Unit *) NULL_CHECK(sp[0].o))->F_mineTile = (jref) sp[1].o;
	goto label_16;
	}
label_14:;
	{
	LINE_NUMBER(1912);
	sp[0].o = (jobject)SM_mindustry_io_TypeIO_readTile_arc_util_io_Reads_R_mindustry_world_Tile(ctx, (frame[1].o));
	}
label_16:;
	{
	LINE_NUMBER(1914);
	if ((frame[2].i) != 0) goto label_17;
	}
	{
	LINE_NUMBER(1915);
	sp[0].o = frame[0].o;
	sp[1].o = frame[1].o;
	sp[2].o = (jobject)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_mounts;
	sp[1].o = (jobject)SM_mindustry_io_TypeIO_readMounts_arc_util_io_Reads_Array1_mindustry_entities_units_WeaponMount_R_Array1_mindustry_entities_units_WeaponMount(ctx, sp[1].o, sp[2].o);
	((mindustry_gen_Unit *) NULL_CHECK(sp[0].o))->F_mounts = (jref) sp[1].o;
	goto label_19;
	}
label_17:;
	{
	LINE_NUMBER(1917);
	sp[0].o = (jobject)SM_mindustry_io_TypeIO_readMounts_arc_util_io_Reads_R_Array1_mindustry_entities_units_WeaponMount(ctx, (frame[1].o));
	}
label_19:;
	{
	LINE_NUMBER(1919);
	if ((frame[2].i) != 0) goto label_20;
	}
	{
	LINE_NUMBER(1920);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)SM_mindustry_io_TypeIO_readPlansQueueNet_arc_util_io_Reads_R_arc_struct_Queue(ctx, (frame[1].o));
	((mindustry_gen_Unit *) NULL_CHECK(sp[0].o))->F_plans = (jref) sp[1].o;
	goto label_22;
	}
label_20:;
	{
	LINE_NUMBER(1922);
	sp[0].o = (jobject)SM_mindustry_io_TypeIO_readPlansQueueNet_arc_util_io_Reads_R_arc_struct_Queue(ctx, (frame[1].o));
	}
label_22:;
	{
	LINE_NUMBER(1924);
	if ((frame[2].i) != 0) goto label_23;
	}
	{
	LINE_NUMBER(1925);
	((mindustry_gen_LegsUnit *) NULL_CHECK((frame[0].o)))->F_rotation_LAST_ = ((jfloat)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_rotation);
	LINE_NUMBER(1926);
	sp[0].o = frame[0].o;
	jfloat temp0 = (jfloat)((func_arc_util_io_Reads_f_R_float) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_util_io_Reads_f_R_float])(ctx, (frame[1].o));
	((mindustry_gen_LegsUnit *) NULL_CHECK(sp[0].o))->F_rotation_TARGET_ = temp0;
	goto label_26;
	}
label_23:;
	{
	LINE_NUMBER(1928);
	jfloat temp0 = (jfloat)((func_arc_util_io_Reads_f_R_float) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_util_io_Reads_f_R_float])(ctx, (frame[1].o));
	LINE_NUMBER(1929);
	((mindustry_gen_LegsUnit *) NULL_CHECK((frame[0].o)))->F_rotation_LAST_ = ((jfloat)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_rotation);
	LINE_NUMBER(1930);
	((mindustry_gen_LegsUnit *) NULL_CHECK((frame[0].o)))->F_rotation_TARGET_ = ((jfloat)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_rotation);
	}
label_26:;
	{
	LINE_NUMBER(1932);
	sp[0].o = frame[0].o;
	jfloat temp0 = (jfloat)((func_arc_util_io_Reads_f_R_float) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_util_io_Reads_f_R_float])(ctx, (frame[1].o));
	((mindustry_gen_Unit *) NULL_CHECK(sp[0].o))->F_shield = temp0;
	LINE_NUMBER(1933);
	sp[0].o = frame[0].o;
	jint temp1 = (jint)((func_arc_util_io_Reads_bool_R_boolean) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_util_io_Reads_bool_R_boolean])(ctx, (frame[1].o));
	((mindustry_gen_Unit *) NULL_CHECK(sp[0].o))->F_spawnedByCore = temp1;
	LINE_NUMBER(1934);
	sp[0].o = frame[0].o;
	sp[1].o = frame[1].o;
	sp[2].o = (jobject)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_stack;
	sp[1].o = (jobject)SM_mindustry_io_TypeIO_readItems_arc_util_io_Reads_mindustry_type_ItemStack_R_mindustry_type_ItemStack(ctx, sp[1].o, sp[2].o);
	((mindustry_gen_Unit *) NULL_CHECK(sp[0].o))->F_stack = (jref) sp[1].o;
	LINE_NUMBER(1935);
	jint temp2 = (jint)((func_arc_util_io_Reads_i_R_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_util_io_Reads_i_R_int])(ctx, (frame[1].o));
	frame[3].i = temp2;
	LINE_NUMBER(1936);
	sp[0].o = (jobject)((mindustry_gen_LegsUnit *) NULL_CHECK((frame[0].o)))->F_statuses;
	sp[0].o = (jobject)((func_arc_struct_Seq_clear_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_clear_R_arc_struct_Seq])(ctx, sp[0].o);
	LINE_NUMBER(1937);
	frame[4].i = (jint(0));
	}
label_34:;
	{
	if ((frame[4].i) >= (frame[3].i)) goto label_35;
	}
	{
	LINE_NUMBER(1938);
	sp[0].o = (jobject)SM_mindustry_io_TypeIO_readStatus_arc_util_io_Reads_R_mindustry_entities_units_StatusEntry(ctx, (frame[1].o));
	frame[5].o = sp[0].o;
	LINE_NUMBER(1939);
	if ((frame[5].o) == nullptr) goto label_38;
	}
	{
	sp[0].o = (jobject)((mindustry_gen_LegsUnit *) NULL_CHECK((frame[0].o)))->F_statuses;
	sp[0].o = (jobject)((func_arc_struct_Seq_add_java_lang_Object_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_add_java_lang_Object_R_arc_struct_Seq])(ctx, sp[0].o, (frame[5].o));
	}
label_38:;
	{
	LINE_NUMBER(1937);
	INST_IINC(4, 1);
	goto label_34;
	}
label_35:;
	{
	LINE_NUMBER(1941);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)SM_mindustry_io_TypeIO_readTeam_arc_util_io_Reads_R_mindustry_game_Team(ctx, (frame[1].o));
	((mindustry_gen_Unit *) NULL_CHECK(sp[0].o))->F_team = (jref) sp[1].o;
	LINE_NUMBER(1942);
	sp[0].o = frame[0].o;
	clinit_mindustry_Vars(ctx);
	sp[1].o = (jobject)SF_mindustry_Vars_content;
	clinit_mindustry_ctype_ContentType(ctx);
	sp[2].o = (jobject)SF_mindustry_ctype_ContentType_unit;
	jint temp0 = (jint)((func_arc_util_io_Reads_s_R_short) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_util_io_Reads_s_R_short])(ctx, (frame[1].o));
	sp[1].o = (jobject)((func_mindustry_core_ContentLoader_getByID_mindustry_ctype_ContentType_int_R_mindustry_ctype_Content) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_mindustry_core_ContentLoader_getByID_mindustry_ctype_ContentType_int_R_mindustry_ctype_Content])(ctx, sp[1].o, sp[2].o, temp0);
	((mindustry_gen_Unit *) NULL_CHECK(sp[0].o))->F_type = (jref) (checkCast(ctx, &class_mindustry_type_UnitType, sp[1].o));
	LINE_NUMBER(1943);
	if ((frame[2].i) != 0) goto label_41;
	}
	{
	LINE_NUMBER(1944);
	sp[0].o = frame[0].o;
	jint temp0 = (jint)((func_arc_util_io_Reads_bool_R_boolean) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_util_io_Reads_bool_R_boolean])(ctx, (frame[1].o));
	((mindustry_gen_Unit *) NULL_CHECK(sp[0].o))->F_updateBuilding = temp0;
	goto label_43;
	}
label_41:;
	{
	LINE_NUMBER(1946);
	jint temp0 = (jint)((func_arc_util_io_Reads_bool_R_boolean) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_util_io_Reads_bool_R_boolean])(ctx, (frame[1].o));
	}
label_43:;
	{
	LINE_NUMBER(1948);
	if ((frame[2].i) != 0) goto label_44;
	}
	{
	LINE_NUMBER(1949);
	sp[0].o = frame[0].o;
	sp[1].o = frame[1].o;
	sp[2].o = (jobject)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_vel;
	sp[1].o = (jobject)SM_mindustry_io_TypeIO_readVec2_arc_util_io_Reads_arc_math_geom_Vec2_R_arc_math_geom_Vec2(ctx, sp[1].o, sp[2].o);
	((mindustry_gen_Unit *) NULL_CHECK(sp[0].o))->F_vel = (jref) sp[1].o;
	goto label_46;
	}
label_44:;
	{
	LINE_NUMBER(1951);
	sp[0].o = (jobject)SM_mindustry_io_TypeIO_readVec2_arc_util_io_Reads_R_arc_math_geom_Vec2(ctx, (frame[1].o));
	}
label_46:;
	{
	LINE_NUMBER(1953);
	if ((frame[2].i) != 0) goto label_47;
	}
	{
	LINE_NUMBER(1954);
	((mindustry_gen_LegsUnit *) NULL_CHECK((frame[0].o)))->F_x_LAST_ = ((jfloat)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_x);
	LINE_NUMBER(1955);
	sp[0].o = frame[0].o;
	jfloat temp0 = (jfloat)((func_arc_util_io_Reads_f_R_float) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_util_io_Reads_f_R_float])(ctx, (frame[1].o));
	((mindustry_gen_LegsUnit *) NULL_CHECK(sp[0].o))->F_x_TARGET_ = temp0;
	goto label_50;
	}
label_47:;
	{
	LINE_NUMBER(1957);
	jfloat temp0 = (jfloat)((func_arc_util_io_Reads_f_R_float) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_util_io_Reads_f_R_float])(ctx, (frame[1].o));
	LINE_NUMBER(1958);
	((mindustry_gen_LegsUnit *) NULL_CHECK((frame[0].o)))->F_x_LAST_ = ((jfloat)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_x);
	LINE_NUMBER(1959);
	((mindustry_gen_LegsUnit *) NULL_CHECK((frame[0].o)))->F_x_TARGET_ = ((jfloat)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_x);
	}
label_50:;
	{
	LINE_NUMBER(1961);
	if ((frame[2].i) != 0) goto label_53;
	}
	{
	LINE_NUMBER(1962);
	((mindustry_gen_LegsUnit *) NULL_CHECK((frame[0].o)))->F_y_LAST_ = ((jfloat)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_y);
	LINE_NUMBER(1963);
	sp[0].o = frame[0].o;
	jfloat temp0 = (jfloat)((func_arc_util_io_Reads_f_R_float) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_util_io_Reads_f_R_float])(ctx, (frame[1].o));
	((mindustry_gen_LegsUnit *) NULL_CHECK(sp[0].o))->F_y_TARGET_ = temp0;
	goto label_56;
	}
label_53:;
	{
	LINE_NUMBER(1965);
	jfloat temp0 = (jfloat)((func_arc_util_io_Reads_f_R_float) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_util_io_Reads_f_R_float])(ctx, (frame[1].o));
	LINE_NUMBER(1966);
	((mindustry_gen_LegsUnit *) NULL_CHECK((frame[0].o)))->F_y_LAST_ = ((jfloat)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_y);
	LINE_NUMBER(1967);
	((mindustry_gen_LegsUnit *) NULL_CHECK((frame[0].o)))->F_y_TARGET_ = ((jfloat)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_y);
	}
label_56:;
	{
	LINE_NUMBER(1969);
	((func_mindustry_gen_LegsUnit_afterSync) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_gen_LegsUnit_afterSync])(ctx, (frame[0].o));
	LINE_NUMBER(1971);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_gen_LegsUnit_readSyncManual_java_nio_FloatBuffer(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/LegsUnit:readSyncManual", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(1974);
	if ((longCompare(((jlong)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_lastUpdated), (jlong(0)))) == 0) goto label_1;
	}
	{
	sp[0].o = frame[0].o;
	jlong temp0 = (jlong)SM_arc_util_Time_timeSinceMillis_long_R_long(ctx, ((jlong)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_lastUpdated));
	((mindustry_gen_Unit *) NULL_CHECK(sp[0].o))->F_updateSpacing = temp0;
	}
label_1:;
	{
	LINE_NUMBER(1975);
	sp[0].o = frame[0].o;
	jlong temp0 = (jlong)SM_arc_util_Time_millis_R_long(ctx);
	((mindustry_gen_Unit *) NULL_CHECK(sp[0].o))->F_lastUpdated = temp0;
	LINE_NUMBER(1976);
	((mindustry_gen_LegsUnit *) NULL_CHECK((frame[0].o)))->F_rotation_LAST_ = ((jfloat)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_rotation);
	LINE_NUMBER(1977);
	sp[0].o = frame[0].o;
	jfloat temp1 = (jfloat)((func_java_nio_FloatBuffer_get_R_float) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_nio_FloatBuffer_get_R_float])(ctx, (frame[1].o));
	((mindustry_gen_LegsUnit *) NULL_CHECK(sp[0].o))->F_rotation_TARGET_ = temp1;
	LINE_NUMBER(1978);
	((mindustry_gen_LegsUnit *) NULL_CHECK((frame[0].o)))->F_x_LAST_ = ((jfloat)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_x);
	LINE_NUMBER(1979);
	sp[0].o = frame[0].o;
	jfloat temp2 = (jfloat)((func_java_nio_FloatBuffer_get_R_float) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_nio_FloatBuffer_get_R_float])(ctx, (frame[1].o));
	((mindustry_gen_LegsUnit *) NULL_CHECK(sp[0].o))->F_x_TARGET_ = temp2;
	LINE_NUMBER(1980);
	((mindustry_gen_LegsUnit *) NULL_CHECK((frame[0].o)))->F_y_LAST_ = ((jfloat)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_y);
	LINE_NUMBER(1981);
	sp[0].o = frame[0].o;
	jfloat temp3 = (jfloat)((func_java_nio_FloatBuffer_get_R_float) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_nio_FloatBuffer_get_R_float])(ctx, (frame[1].o));
	((mindustry_gen_LegsUnit *) NULL_CHECK(sp[0].o))->F_y_TARGET_ = temp3;
	LINE_NUMBER(1983);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_gen_LegsUnit_remove(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[11];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/LegsUnit:remove", 11 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(1986);
	if (((jint)((mindustry_gen_LegsUnit *) NULL_CHECK((frame[0].o)))->F_added) != 0) goto label_1;
	}
	popStackFrame(ctx);
	INST_RETURN();
label_1:;
	{
	LINE_NUMBER(1987);
	clinit_mindustry_gen_Groups(ctx);
	sp[0].o = (jobject)SF_mindustry_gen_Groups_unit;
	((func_mindustry_entities_EntityGroup_removeIndex_mindustry_gen_Entityc_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_entities_EntityGroup_removeIndex_mindustry_gen_Entityc_int])(ctx, sp[0].o, (frame[0].o), ((jint)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_index__unit));
	LINE_NUMBER(1988);
	((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_index__unit = (jint(-1));
	LINE_NUMBER(1989);
	clinit_mindustry_gen_Groups(ctx);
	sp[0].o = (jobject)SF_mindustry_gen_Groups_sync;
	((func_mindustry_entities_EntityGroup_removeIndex_mindustry_gen_Entityc_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_entities_EntityGroup_removeIndex_mindustry_gen_Entityc_int])(ctx, sp[0].o, (frame[0].o), ((jint)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_index__sync));
	LINE_NUMBER(1990);
	((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_index__sync = (jint(-1));
	LINE_NUMBER(1991);
	clinit_mindustry_gen_Groups(ctx);
	sp[0].o = (jobject)SF_mindustry_gen_Groups_draw;
	((func_mindustry_entities_EntityGroup_removeIndex_mindustry_gen_Entityc_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_entities_EntityGroup_removeIndex_mindustry_gen_Entityc_int])(ctx, sp[0].o, (frame[0].o), ((jint)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_index__draw));
	LINE_NUMBER(1992);
	((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_index__draw = (jint(-1));
	LINE_NUMBER(1995);
	((mindustry_gen_LegsUnit *) NULL_CHECK((frame[0].o)))->F_added = (jint(0));
	LINE_NUMBER(1999);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_net;
	jint temp0 = (jint)((func_mindustry_net_Net_client_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_net_Net_client_R_boolean])(ctx, sp[0].o);
	if (temp0 == 0) goto label_9;
	}
	{
	LINE_NUMBER(2000);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_netClient;
	jint temp0 = (jint)((func_mindustry_gen_LegsUnit_id_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_gen_LegsUnit_id_R_int])(ctx, (frame[0].o));
	((func_mindustry_core_NetClient_addRemovedEntity_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_NetClient_addRemovedEntity_int])(ctx, sp[0].o, temp0);
	}
label_9:;
	{
	LINE_NUMBER(2005);
	sp[0].o = (jobject)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_team;
	sp[0].o = (jobject)((func_mindustry_game_Team_data_R_mindustry_game_Teams$TeamData) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_game_Team_data_R_mindustry_game_Teams$TeamData])(ctx, sp[0].o);
	sp[1].o = (jobject)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_type;
	((func_mindustry_game_Teams$TeamData_updateCount_mindustry_type_UnitType_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_game_Teams$TeamData_updateCount_mindustry_type_UnitType_int])(ctx, sp[0].o, sp[1].o, (jint(-1)));
	LINE_NUMBER(2006);
	sp[0].o = (jobject)((mindustry_gen_LegsUnit *) NULL_CHECK((frame[0].o)))->F_controller;
	((func_mindustry_entities_units_UnitController_removed_mindustry_gen_Unit) resolveInterfaceMethod(ctx, &class_mindustry_entities_units_UnitController, INDEX_mindustry_entities_units_UnitController_removed_mindustry_gen_Unit, sp[0].o))(ctx, sp[0].o, (frame[0].o));
	LINE_NUMBER(2007);
	sp[0].o = (jobject)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_trail;
	if (sp[0].o == nullptr) goto label_13;
	}
	{
	sp[0].o = (jobject)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_trail;
	jint temp0 = (jint)((func_mindustry_graphics_Trail_size_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_graphics_Trail_size_R_int])(ctx, sp[0].o);
	if (temp0 <= 0) goto label_13;
	}
	{
	LINE_NUMBER(2008);
	clinit_mindustry_content_Fx(ctx);
	sp[0].o = (jobject)SF_mindustry_content_Fx_trailFade;
	jfloat temp0 = (jfloat)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_x;
	jfloat temp1 = (jfloat)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_y;
	sp[1].o = (jobject)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_trail;
	jfloat temp2 = (jfloat)((func_mindustry_graphics_Trail_width_R_float) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_mindustry_graphics_Trail_width_R_float])(ctx, sp[1].o);
	sp[1].o = (jobject)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_type;
	sp[1].o = (jobject)((mindustry_type_UnitType *) NULL_CHECK(sp[1].o))->F_trailColor;
	jobject temp3 = sp[1].o;
	sp[1].f = temp0;
	sp[2].f = temp1;
	sp[3].f = temp2;
	sp += 4;
	if (temp3 != nullptr) goto label_15;
	}
	{
	sp[0].o = (jobject)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_team;
	sp[0].o = (jobject)((mindustry_game_Team *) NULL_CHECK(sp[0].o))->F_color;
	sp += 1;
	goto label_16;
	}
label_15:;
	{
	sp[0].o = (jobject)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_type;
	sp[0].o = (jobject)((mindustry_type_UnitType *) NULL_CHECK(sp[0].o))->F_trailColor;
	sp += 1;
	}
label_16:;
	{
	sp -= 5;
	sp[5].o = (jobject)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_trail;
	sp[5].o = (jobject)((func_mindustry_graphics_Trail_copy_R_mindustry_graphics_Trail) ((void **) nullCheck(ctx, sp[5].o)->vtable)[VTABLE_mindustry_graphics_Trail_copy_R_mindustry_graphics_Trail])(ctx, sp[5].o);
	((func_mindustry_entities_Effect_at_float_float_float_arc_graphics_Color_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_entities_Effect_at_float_float_float_arc_graphics_Color_java_lang_Object])(ctx, sp[0].o, sp[1].f, sp[2].f, sp[3].f, sp[4].o, sp[5].o);
	}
label_13:;
	{
	LINE_NUMBER(2013);
	sp[0].o = (jobject)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_mounts;
	frame[1].o = sp[0].o;
	frame[2].i = (((jarray) nullCheck(ctx, (frame[1].o)))->length);
	frame[3].i = (jint(0));
	}
label_17:;
	{
	if ((frame[3].i) >= (frame[2].i)) goto label_18;
	}
	{
	frame[4].o = ((jobject)ARRAY_ACCESS(jobject, (frame[1].o), (frame[3].i)));
	LINE_NUMBER(2014);
	sp[0].o = (jobject)((mindustry_entities_units_WeaponMount *) NULL_CHECK((frame[4].o)))->F_weapon;
	if (((jint)((mindustry_type_Weapon *) NULL_CHECK(sp[0].o))->F_continuous) == 0) goto label_20;
	}
	{
	sp[0].o = (jobject)((mindustry_entities_units_WeaponMount *) NULL_CHECK((frame[4].o)))->F_bullet;
	if (sp[0].o == nullptr) goto label_20;
	}
	{
	sp[0].o = (jobject)((mindustry_entities_units_WeaponMount *) NULL_CHECK((frame[4].o)))->F_bullet;
	sp[0].o = (jobject)((mindustry_gen_Bullet *) NULL_CHECK(sp[0].o))->F_owner;
	if (sp[0].o != (frame[0].o)) goto label_20;
	}
	{
	LINE_NUMBER(2015);
	sp[0].o = (jobject)((mindustry_entities_units_WeaponMount *) NULL_CHECK((frame[4].o)))->F_bullet;
	sp[1].o = (jobject)((mindustry_entities_units_WeaponMount *) NULL_CHECK((frame[4].o)))->F_bullet;
	((mindustry_gen_Bullet *) NULL_CHECK(sp[0].o))->F_time = (((jfloat)((mindustry_gen_Bullet *) NULL_CHECK(sp[1].o))->F_lifetime) - (jfloat(10.0f)));
	LINE_NUMBER(2016);
	((mindustry_entities_units_WeaponMount *) NULL_CHECK((frame[4].o)))->F_bullet = (jref) (jobject(nullptr));
	}
label_20:;
	{
	LINE_NUMBER(2018);
	sp[0].o = (jobject)((mindustry_entities_units_WeaponMount *) NULL_CHECK((frame[4].o)))->F_sound;
	if (sp[0].o == nullptr) goto label_23;
	}
	{
	LINE_NUMBER(2019);
	sp[0].o = (jobject)((mindustry_entities_units_WeaponMount *) NULL_CHECK((frame[4].o)))->F_sound;
	((func_mindustry_audio_SoundLoop_stop) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_audio_SoundLoop_stop])(ctx, sp[0].o);
	}
label_23:;
	{
	LINE_NUMBER(2013);
	INST_IINC(3, 1);
	goto label_17;
	}
label_18:;
	LINE_NUMBER(2023);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_gen_LegsUnit_removeBuild_int_int_boolean(jcontext ctx, jobject self, jint param0, jint param1, jbool param2) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/LegsUnit:removeBuild", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].i = param1;
	frame[3].i = param2;
	{
	LINE_NUMBER(2027);
	sp[0].o = (jobject)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_plans;
	{ /* InvokeDynamic */
		clinit_mindustry_gen_LegsUnit_invoke_arc_func_Boolf_17(ctx);
		auto proxy = (mindustry_gen_LegsUnit_invoke_arc_func_Boolf_17 *) gcAlloc(ctx, &class_mindustry_gen_LegsUnit_invoke_arc_func_Boolf_17);
		proxy->F_field2 = (frame[2].i);
		proxy->F_field1 = (frame[1].i);
		proxy->F_field0 = (frame[3].i);
		sp[1].o = (jobject) proxy;
	}
	jint temp0 = (jint)((func_arc_struct_Queue_indexOf_arc_func_Boolf_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Queue_indexOf_arc_func_Boolf_R_int])(ctx, sp[0].o, sp[1].o);
	frame[4].i = temp0;
	LINE_NUMBER(2028);
	if ((frame[4].i) == (jint(-1))) goto label_2;
	}
	{
	LINE_NUMBER(2029);
	sp[0].o = (jobject)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_plans;
	sp[0].o = (jobject)((func_arc_struct_Queue_removeIndex_int_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Queue_removeIndex_int_R_java_lang_Object])(ctx, sp[0].o, (frame[4].i));
	}
label_2:;
	LINE_NUMBER(2031);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_gen_LegsUnit_resetController(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/LegsUnit:resetController", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(2035);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_type;
	sp[1].o = (jobject)((func_mindustry_type_UnitType_createController_mindustry_gen_Unit_R_mindustry_entities_units_UnitController) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_mindustry_type_UnitType_createController_mindustry_gen_Unit_R_mindustry_entities_units_UnitController])(ctx, sp[1].o, (frame[0].o));
	((func_mindustry_gen_LegsUnit_controller_mindustry_entities_units_UnitController) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_gen_LegsUnit_controller_mindustry_entities_units_UnitController])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(2036);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_gen_LegsUnit_resetLegs(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/LegsUnit:resetLegs", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(2040);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_type;
	((func_mindustry_gen_LegsUnit_resetLegs_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_gen_LegsUnit_resetLegs_float])(ctx, sp[0].o, ((jfloat)((mindustry_type_UnitType *) NULL_CHECK(sp[1].o))->F_legLength));
	LINE_NUMBER(2041);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_gen_LegsUnit_resetLegs_float(jcontext ctx, jobject self, jfloat param0) {
	NULL_CHECK(self);
	jtype frame[11];
	auto stack = &frame[7];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/LegsUnit:resetLegs", 11 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	{
	LINE_NUMBER(2045);
	sp[0].o = (jobject)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_type;
	frame[2].i = ((jint)((mindustry_type_UnitType *) NULL_CHECK(sp[0].o))->F_legCount);
	LINE_NUMBER(2046);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)createArray(ctx, &class_mindustry_entities_Leg, (frame[2].i));
	((mindustry_gen_LegsUnit *) NULL_CHECK(sp[0].o))->F_legs = (jref) sp[1].o;
	LINE_NUMBER(2047);
	sp[0].o = (jobject)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_type;
	if (((jint)((mindustry_type_UnitType *) NULL_CHECK(sp[0].o))->F_lockLegBase) == 0) goto label_3;
	}
	{
	LINE_NUMBER(2048);
	((mindustry_gen_LegsUnit *) NULL_CHECK((frame[0].o)))->F_baseRotation = ((jfloat)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_rotation);
	}
label_3:;
	{
	LINE_NUMBER(2050);
	frame[3].i = (jint(0));
	}
label_5:;
	{
	jint temp0 = frame[3].i;
	sp[0].o = (jobject)((mindustry_gen_LegsUnit *) NULL_CHECK((frame[0].o)))->F_legs;
	if (temp0 >= (((jarray) nullCheck(ctx, sp[0].o))->length)) goto label_6;
	}
	{
	LINE_NUMBER(2051);
	clinit_mindustry_entities_Leg(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_entities_Leg);
	init_mindustry_entities_Leg(ctx, sp[0].o);
	frame[4].o = sp[0].o;
	LINE_NUMBER(2052);
	jfloat temp0 = (jfloat)((func_mindustry_gen_LegsUnit_legAngle_int_R_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_gen_LegsUnit_legAngle_int_R_float])(ctx, (frame[0].o), (frame[3].i));
	frame[5].f = temp0;
	LINE_NUMBER(2053);
	sp[0].o = frame[0].o;
	clinit_arc_util_Tmp(ctx);
	sp[1].o = (jobject)SF_arc_util_Tmp_v5;
	sp[0].o = (jobject)((func_mindustry_gen_LegsUnit_legOffset_arc_math_geom_Vec2_int_R_arc_math_geom_Vec2) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_gen_LegsUnit_legOffset_arc_math_geom_Vec2_int_R_arc_math_geom_Vec2])(ctx, sp[0].o, sp[1].o, (frame[3].i));
	sp[0].o = (jobject)((func_arc_math_geom_Vec2_add_float_float_R_arc_math_geom_Vec2) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Vec2_add_float_float_R_arc_math_geom_Vec2])(ctx, sp[0].o, ((jfloat)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_x), ((jfloat)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_y));
	frame[6].o = sp[0].o;
	LINE_NUMBER(2054);
	sp[0].o = (jobject)((mindustry_entities_Leg *) NULL_CHECK((frame[4].o)))->F_joint;
	sp[0].o = (jobject)((func_arc_math_geom_Vec2_trns_float_float_R_arc_math_geom_Vec2) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Vec2_trns_float_float_R_arc_math_geom_Vec2])(ctx, sp[0].o, (frame[5].f), ((frame[1].f) / (jfloat(2))));
	sp[0].o = (jobject)((func_arc_math_geom_Vec2_add_arc_math_geom_Vec2_R_arc_math_geom_Vec2) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Vec2_add_arc_math_geom_Vec2_R_arc_math_geom_Vec2])(ctx, sp[0].o, (frame[6].o));
	LINE_NUMBER(2055);
	sp[0].o = (jobject)((mindustry_entities_Leg *) NULL_CHECK((frame[4].o)))->F_base;
	sp[0].o = (jobject)((func_arc_math_geom_Vec2_trns_float_float_R_arc_math_geom_Vec2) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Vec2_trns_float_float_R_arc_math_geom_Vec2])(ctx, sp[0].o, (frame[5].f), (frame[1].f));
	sp[0].o = (jobject)((func_arc_math_geom_Vec2_add_arc_math_geom_Vec2_R_arc_math_geom_Vec2) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Vec2_add_arc_math_geom_Vec2_R_arc_math_geom_Vec2])(ctx, sp[0].o, (frame[6].o));
	LINE_NUMBER(2056);
	sp[0].o = (jobject)((mindustry_gen_LegsUnit *) NULL_CHECK((frame[0].o)))->F_legs;
	ARRAY_ACCESS(jobject, sp[0].o, (frame[3].i)) = (frame[4].o);
	LINE_NUMBER(2050);
	INST_IINC(3, 1);
	goto label_5;
	}
label_6:;
	{
	LINE_NUMBER(2058);
	sp[0].o = frame[0].o;
	jfloat temp0 = (jfloat)SM_arc_math_Mathf_random_float_R_float(ctx, (jfloat(100.0f)));
	((mindustry_gen_LegsUnit *) NULL_CHECK(sp[0].o))->F_totalLength = temp0;
	LINE_NUMBER(2059);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_gen_LegsUnit_rotateMove_arc_math_geom_Vec2(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/LegsUnit:rotateMove", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(2063);
	sp[0].o = frame[0].o;
	clinit_arc_util_Tmp(ctx);
	sp[1].o = (jobject)SF_arc_util_Tmp_v2;
	jfloat temp0 = (jfloat)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_rotation;
	jfloat temp1 = (jfloat)((func_arc_math_geom_Vec2_len_R_float) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_math_geom_Vec2_len_R_float])(ctx, (frame[1].o));
	sp[1].o = (jobject)((func_arc_math_geom_Vec2_trns_float_float_R_arc_math_geom_Vec2) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_math_geom_Vec2_trns_float_float_R_arc_math_geom_Vec2])(ctx, sp[1].o, temp0, temp1);
	((func_mindustry_gen_LegsUnit_moveAt_arc_math_geom_Vec2) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_gen_LegsUnit_moveAt_arc_math_geom_Vec2])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(2064);
	jint temp2 = (jint)((func_arc_math_geom_Vec2_isZero_R_boolean) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_math_geom_Vec2_isZero_R_boolean])(ctx, (frame[1].o));
	if (temp2 != 0) goto label_2;
	}
	{
	LINE_NUMBER(2065);
	sp[0].o = frame[0].o;
	jfloat temp0 = (jfloat)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_rotation;
	jfloat temp1 = (jfloat)((func_arc_math_geom_Vec2_angle_R_float) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_math_geom_Vec2_angle_R_float])(ctx, (frame[1].o));
	sp[1].o = (jobject)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_type;
	jfloat temp2 = (jfloat)SM_arc_math_Angles_moveToward_float_float_float_R_float(ctx, temp0, temp1, ((((jfloat)((mindustry_type_UnitType *) NULL_CHECK(sp[1].o))->F_rotateSpeed) * (clinit_arc_util_Time(ctx), (jfloat)SF_arc_util_Time_delta)) * ((jfloat)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_speedMultiplier)));
	((mindustry_gen_Unit *) NULL_CHECK(sp[0].o))->F_rotation = temp2;
	}
label_2:;
	LINE_NUMBER(2067);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_gen_LegsUnit_set_arc_math_geom_Position(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/LegsUnit:set", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(2071);
	sp[0].o = frame[0].o;
	jfloat temp0 = (jfloat)((func_arc_math_geom_Position_getX_R_float) resolveInterfaceMethod(ctx, &class_arc_math_geom_Position, INDEX_arc_math_geom_Position_getX_R_float, (frame[1].o)))(ctx, (frame[1].o));
	jfloat temp1 = (jfloat)((func_arc_math_geom_Position_getY_R_float) resolveInterfaceMethod(ctx, &class_arc_math_geom_Position, INDEX_arc_math_geom_Position_getY_R_float, (frame[1].o)))(ctx, (frame[1].o));
	((func_mindustry_gen_LegsUnit_set_float_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_gen_LegsUnit_set_float_float])(ctx, sp[0].o, temp0, temp1);
	LINE_NUMBER(2072);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_gen_LegsUnit_set_float_float(jcontext ctx, jobject self, jfloat param0, jfloat param1) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/LegsUnit:set", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	frame[2].f = param1;
	{
	LINE_NUMBER(2076);
	((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_x = (frame[1].f);
	LINE_NUMBER(2077);
	((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_y = (frame[2].f);
	LINE_NUMBER(2078);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_gen_LegsUnit_set_mindustry_type_UnitType_mindustry_entities_units_UnitController(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/LegsUnit:set", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(2082);
	sp[0].o = (jobject)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_type;
	if (sp[0].o == (frame[1].o)) goto label_1;
	}
	{
	LINE_NUMBER(2083);
	((func_mindustry_gen_LegsUnit_setType_mindustry_type_UnitType) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_gen_LegsUnit_setType_mindustry_type_UnitType])(ctx, (frame[0].o), (frame[1].o));
	}
label_1:;
	{
	LINE_NUMBER(2085);
	((func_mindustry_gen_LegsUnit_controller_mindustry_entities_units_UnitController) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_gen_LegsUnit_controller_mindustry_entities_units_UnitController])(ctx, (frame[0].o), (frame[2].o));
	LINE_NUMBER(2086);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_gen_LegsUnit_setDuration_mindustry_type_StatusEffect_float(jcontext ctx, jobject self, jobject param0, jfloat param1) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/LegsUnit:setDuration", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].f = param1;
	{
	LINE_NUMBER(2090);
	((func_mindustry_gen_LegsUnit_applyStatus_mindustry_type_StatusEffect_float_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_gen_LegsUnit_applyStatus_mindustry_type_StatusEffect_float_boolean])(ctx, (frame[0].o), (frame[1].o), (frame[2].f), (jint(1)));
	LINE_NUMBER(2091);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_gen_LegsUnit_setProp_mindustry_ctype_UnlockableContent_double(jcontext ctx, jobject self, jobject param0, jdouble param1) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/LegsUnit:setProp", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].d = param1;
	{
	LINE_NUMBER(2095);
	if ((isInstance(ctx, (frame[1].o), &class_mindustry_type_Item)) == 0) goto label_1;
	}
	{
	frame[4].o = (checkCast(ctx, &class_mindustry_type_Item, (frame[1].o)));
	LINE_NUMBER(2096);
	sp[0].o = (jobject)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_stack;
	((mindustry_type_ItemStack *) NULL_CHECK(sp[0].o))->F_item = (jref) (frame[4].o);
	LINE_NUMBER(2097);
	sp[0].o = (jobject)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_stack;
	jint temp0 = jint((frame[2].d));
	jint temp1 = jint(0);
	sp[1].o = (jobject)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_type;
	jint temp2 = (jint)SM_arc_math_Mathf_clamp_int_int_int_R_int(ctx, temp0, temp1, ((jint)((mindustry_type_UnitType *) NULL_CHECK(sp[1].o))->F_itemCapacity));
	((mindustry_type_ItemStack *) NULL_CHECK(sp[0].o))->F_amount = temp2;
	}
label_1:;
	{
	LINE_NUMBER(2099);
	if ((isInstance(ctx, (frame[1].o), &class_mindustry_type_StatusEffect)) == 0) goto label_4;
	}
	{
	frame[4].o = (checkCast(ctx, &class_mindustry_type_StatusEffect, (frame[1].o)));
	LINE_NUMBER(2100);
	((func_mindustry_gen_LegsUnit_setDuration_mindustry_type_StatusEffect_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_gen_LegsUnit_setDuration_mindustry_type_StatusEffect_float])(ctx, (frame[0].o), (frame[4].o), ((jfloat((frame[2].d))) * (jfloat(60.0f))));
	}
label_4:;
	LINE_NUMBER(2102);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_gen_LegsUnit_setProp_mindustry_logic_LAccess_double(jcontext ctx, jobject self, jobject param0, jdouble param1) {
	NULL_CHECK(self);
	jtype frame[14];
	auto stack = &frame[7];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/LegsUnit:setProp", 14 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].d = param1;
	{
	LINE_NUMBER(2106);
	clinit_mindustry_gen_LegsUnit$1(ctx);
	sp[0].o = (jobject)SF_mindustry_gen_LegsUnit$1_$SwitchMap$mindustry$logic$LAccess;
	jint temp0 = (jint)((func_mindustry_logic_LAccess_ordinal_R_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_logic_LAccess_ordinal_R_int])(ctx, (frame[1].o));
	switch(((jint)ARRAY_ACCESS(jint, sp[0].o, temp0))) {
		case 3: goto label_1;
		case 4: goto label_2;
		case 5: goto label_3;
		case 6: goto label_4;
		case 7: goto label_4;
		case 8: goto label_5;
		case 9: goto label_6;
		case 10: goto label_7;
		case 11: goto label_8;
		case 12: goto label_4;
		case 13: goto label_9;
		case 14: goto label_4;
		case 15: goto label_4;
		case 16: goto label_4;
		case 17: goto label_4;
		case 18: goto label_4;
		case 19: goto label_4;
		case 20: goto label_4;
		case 21: goto label_4;
		case 22: goto label_4;
		case 23: goto label_4;
		case 24: goto label_4;
		case 25: goto label_4;
		case 26: goto label_4;
		case 27: goto label_4;
		case 28: goto label_10;
		case 29: goto label_11;
		case 30: goto label_12;
		default: goto label_4;
	}
	}
label_2:;
	{
	LINE_NUMBER(2108);
	sp[0].o = frame[0].o;
	jdouble temp0 = (jdouble)SM_arc_math_Mathf_clamp_double_double_double_R_double(ctx, (frame[2].d), (jdouble(0)), (jdouble(((jfloat)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_maxHealth))));
	((mindustry_gen_Unit *) NULL_CHECK(sp[0].o))->F_health = (jfloat(temp0));
	LINE_NUMBER(2109);
	if ((floatCompare(((jfloat)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_health), (jfloat(0)), 1)) > 0) goto label_4;
	}
	{
	if (((jint)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_dead) != 0) goto label_4;
	}
	{
	LINE_NUMBER(2110);
	((func_mindustry_gen_LegsUnit_kill) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_gen_LegsUnit_kill])(ctx, (frame[0].o));
	goto label_4;
	}
label_3:;
	{
	LINE_NUMBER(2113);
	sp[0].o = frame[0].o;
	jfloat temp0 = (jfloat)SM_java_lang_Math_max_float_float_R_float(ctx, (jfloat((frame[2].d))), (jfloat(0)));
	((mindustry_gen_Unit *) NULL_CHECK(sp[0].o))->F_shield = temp0;
	goto label_4;
	}
label_5:;
	{
	LINE_NUMBER(2115);
	sp[0].o = frame[0].o;
	jfloat temp0 = (jfloat)SM_mindustry_core_World_unconv_float_R_float(ctx, (jfloat((frame[2].d))));
	((mindustry_gen_Unit *) NULL_CHECK(sp[0].o))->F_x = temp0;
	LINE_NUMBER(2116);
	jint temp1 = (jint)((func_mindustry_gen_LegsUnit_isLocal_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_gen_LegsUnit_isLocal_R_boolean])(ctx, (frame[0].o));
	if (temp1 != 0) goto label_4;
	}
	{
	((func_mindustry_gen_LegsUnit_snapInterpolation) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_gen_LegsUnit_snapInterpolation])(ctx, (frame[0].o));
	goto label_4;
	}
label_6:;
	{
	LINE_NUMBER(2119);
	sp[0].o = frame[0].o;
	jfloat temp0 = (jfloat)SM_mindustry_core_World_unconv_float_R_float(ctx, (jfloat((frame[2].d))));
	((mindustry_gen_Unit *) NULL_CHECK(sp[0].o))->F_y = temp0;
	LINE_NUMBER(2120);
	jint temp1 = (jint)((func_mindustry_gen_LegsUnit_isLocal_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_gen_LegsUnit_isLocal_R_boolean])(ctx, (frame[0].o));
	if (temp1 != 0) goto label_4;
	}
	{
	((func_mindustry_gen_LegsUnit_snapInterpolation) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_gen_LegsUnit_snapInterpolation])(ctx, (frame[0].o));
	goto label_4;
	}
label_7:;
	{
	LINE_NUMBER(2122);
	sp[0].o = (jobject)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_vel;
	((arc_math_geom_Vec2 *) NULL_CHECK(sp[0].o))->F_x = (jfloat((((frame[2].d) * (jdouble(8.0))) / (jdouble(60.0)))));
	goto label_4;
	}
label_8:;
	{
	LINE_NUMBER(2123);
	sp[0].o = (jobject)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_vel;
	((arc_math_geom_Vec2 *) NULL_CHECK(sp[0].o))->F_y = (jfloat((((frame[2].d) * (jdouble(8.0))) / (jdouble(60.0)))));
	goto label_4;
	}
label_1:;
	{
	LINE_NUMBER(2124);
	((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_rotation = (jfloat((frame[2].d)));
	goto label_4;
	}
label_9:;
	{
	LINE_NUMBER(2126);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_net;
	jint temp0 = (jint)((func_mindustry_net_Net_client_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_net_Net_client_R_boolean])(ctx, sp[0].o);
	if (temp0 != 0) goto label_4;
	}
	{
	LINE_NUMBER(2127);
	sp[0].o = (jobject)SM_mindustry_game_Team_get_int_R_mindustry_game_Team(ctx, (jint((frame[2].d))));
	frame[4].o = sp[0].o;
	LINE_NUMBER(2128);
	sp[0].o = (jobject)((mindustry_gen_LegsUnit *) NULL_CHECK((frame[0].o)))->F_controller;
	frame[6].o = sp[0].o;
	if ((isInstance(ctx, (frame[6].o), &class_mindustry_gen_Player)) == 0) goto label_19;
	}
	{
	frame[5].o = (checkCast(ctx, &class_mindustry_gen_Player, (frame[6].o)));
	LINE_NUMBER(2129);
	((func_mindustry_gen_Player_team_mindustry_game_Team) ((void **) nullCheck(ctx, (frame[5].o))->vtable)[VTABLE_mindustry_gen_Player_team_mindustry_game_Team])(ctx, (frame[5].o), (frame[4].o));
	}
label_19:;
	{
	LINE_NUMBER(2131);
	((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_team = (jref) (frame[4].o);
	LINE_NUMBER(2132);
	goto label_4;
	}
label_11:;
	{
	LINE_NUMBER(2134);
	((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_flag = (frame[2].d);
	goto label_4;
	}
label_12:;
	{
	LINE_NUMBER(2135);
	sp[0].o = frame[0].o;
	jfloat temp0 = (jfloat)SM_arc_math_Mathf_clamp_float_float_float_R_float(ctx, (jfloat((frame[2].d))), (jfloat(0)), (jfloat(1000.0f)));
	((func_mindustry_gen_LegsUnit_statusSpeed_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_gen_LegsUnit_statusSpeed_float])(ctx, sp[0].o, temp0);
	goto label_4;
	}
label_10:;
	{
	LINE_NUMBER(2136);
	sp[0].o = frame[0].o;
	jfloat temp0 = (jfloat)SM_java_lang_Math_max_float_float_R_float(ctx, (jfloat((frame[2].d))), (jfloat(0)));
	((func_mindustry_gen_LegsUnit_statusArmor_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_gen_LegsUnit_statusArmor_float])(ctx, sp[0].o, temp0);
	}
label_4:;
	LINE_NUMBER(2138);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_gen_LegsUnit_setProp_mindustry_logic_LAccess_java_lang_Object(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[11];
	auto stack = &frame[7];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/LegsUnit:setProp", 11 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(2142);
	clinit_mindustry_gen_LegsUnit$1(ctx);
	sp[0].o = (jobject)SF_mindustry_gen_LegsUnit$1_$SwitchMap$mindustry$logic$LAccess;
	jint temp0 = (jint)((func_mindustry_logic_LAccess_ordinal_R_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_logic_LAccess_ordinal_R_int])(ctx, (frame[1].o));
	switch(((jint)ARRAY_ACCESS(jint, sp[0].o, temp0))) {
		case 13: goto label_1;
		case 44: goto label_2;
		default: goto label_3;
	}
	}
label_1:;
	{
	LINE_NUMBER(2144);
	if ((isInstance(ctx, (frame[2].o), &class_mindustry_game_Team)) == 0) goto label_4;
	}
	{
	frame[3].o = (checkCast(ctx, &class_mindustry_game_Team, (frame[2].o)));
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_net;
	jint temp0 = (jint)((func_mindustry_net_Net_client_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_net_Net_client_R_boolean])(ctx, sp[0].o);
	if (temp0 != 0) goto label_4;
	}
	{
	LINE_NUMBER(2145);
	sp[0].o = (jobject)((mindustry_gen_LegsUnit *) NULL_CHECK((frame[0].o)))->F_controller;
	frame[5].o = sp[0].o;
	if ((isInstance(ctx, (frame[5].o), &class_mindustry_gen_Player)) == 0) goto label_7;
	}
	{
	frame[4].o = (checkCast(ctx, &class_mindustry_gen_Player, (frame[5].o)));
	((func_mindustry_gen_Player_team_mindustry_game_Team) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_mindustry_gen_Player_team_mindustry_game_Team])(ctx, (frame[4].o), (frame[3].o));
	}
label_7:;
	{
	LINE_NUMBER(2146);
	((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_team = (jref) (frame[3].o);
	}
label_4:;
	LINE_NUMBER(2148);
	goto label_3;
label_2:;
	{
	LINE_NUMBER(2150);
	frame[4].o = (frame[0].o);
	if ((isInstance(ctx, (frame[4].o), &class_mindustry_gen_Payloadc)) == 0) goto label_3;
	}
	{
	frame[3].o = (checkCast(ctx, &class_mindustry_gen_Payloadc, (frame[4].o)));
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_net;
	jint temp0 = (jint)((func_mindustry_net_Net_client_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_net_Net_client_R_boolean])(ctx, sp[0].o);
	if (temp0 != 0) goto label_3;
	}
	{
	LINE_NUMBER(2151);
	if ((isInstance(ctx, (frame[2].o), &class_mindustry_world_Block)) == 0) goto label_11;
	}
	{
	frame[4].o = (checkCast(ctx, &class_mindustry_world_Block, (frame[2].o)));
	LINE_NUMBER(2152);
	jint temp0 = (jint)((func_mindustry_world_Block_synthetic_R_boolean) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_mindustry_world_Block_synthetic_R_boolean])(ctx, (frame[4].o));
	if (temp0 == 0) goto label_3;
	}
	{
	LINE_NUMBER(2153);
	sp[0].o = (jobject)((func_mindustry_world_Block_newBuilding_R_mindustry_gen_Building) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_mindustry_world_Block_newBuilding_R_mindustry_gen_Building])(ctx, (frame[4].o));
	sp[1].o = frame[4].o;
	sp[2].o = (jobject)((func_mindustry_gen_LegsUnit_team_R_mindustry_game_Team) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_gen_LegsUnit_team_R_mindustry_game_Team])(ctx, (frame[0].o));
	sp[0].o = (jobject)((func_mindustry_gen_Building_create_mindustry_world_Block_mindustry_game_Team_R_mindustry_gen_Building) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_gen_Building_create_mindustry_world_Block_mindustry_game_Team_R_mindustry_gen_Building])(ctx, sp[0].o, sp[1].o, sp[2].o);
	frame[6].o = sp[0].o;
	LINE_NUMBER(2154);
	jint temp0 = (jint)((func_mindustry_gen_Payloadc_canPickup_mindustry_gen_Building_R_boolean) resolveInterfaceMethod(ctx, &class_mindustry_gen_Payloadc, INDEX_mindustry_gen_Payloadc_canPickup_mindustry_gen_Building_R_boolean, (frame[3].o)))(ctx, (frame[3].o), (frame[6].o));
	if (temp0 == 0) goto label_15;
	}
	{
	sp[0].o = frame[3].o;
	clinit_mindustry_world_blocks_payloads_BuildPayload(ctx);
	sp[1].o = gcAlloc(ctx, &class_mindustry_world_blocks_payloads_BuildPayload);
	init_mindustry_world_blocks_payloads_BuildPayload_mindustry_gen_Building(ctx, sp[1].o, (frame[6].o));
	((func_mindustry_gen_Payloadc_addPayload_mindustry_world_blocks_payloads_Payload) resolveInterfaceMethod(ctx, &class_mindustry_gen_Payloadc, INDEX_mindustry_gen_Payloadc_addPayload_mindustry_world_blocks_payloads_Payload, sp[0].o))(ctx, sp[0].o, sp[1].o);
	}
label_15:;
	LINE_NUMBER(2155);
	goto label_3;
label_11:;
	{
	LINE_NUMBER(2156);
	if ((isInstance(ctx, (frame[2].o), &class_mindustry_type_UnitType)) == 0) goto label_16;
	}
	{
	frame[5].o = (checkCast(ctx, &class_mindustry_type_UnitType, (frame[2].o)));
	LINE_NUMBER(2157);
	sp[0].o = frame[5].o;
	sp[1].o = (jobject)((func_mindustry_gen_LegsUnit_team_R_mindustry_game_Team) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_gen_LegsUnit_team_R_mindustry_game_Team])(ctx, (frame[0].o));
	sp[0].o = (jobject)((func_mindustry_type_UnitType_create_mindustry_game_Team_R_mindustry_gen_Unit) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_type_UnitType_create_mindustry_game_Team_R_mindustry_gen_Unit])(ctx, sp[0].o, sp[1].o);
	frame[6].o = sp[0].o;
	LINE_NUMBER(2158);
	jint temp0 = (jint)((func_mindustry_gen_Payloadc_canPickup_mindustry_gen_Unit_R_boolean) resolveInterfaceMethod(ctx, &class_mindustry_gen_Payloadc, INDEX_mindustry_gen_Payloadc_canPickup_mindustry_gen_Unit_R_boolean, (frame[3].o)))(ctx, (frame[3].o), (frame[6].o));
	if (temp0 == 0) goto label_19;
	}
	{
	sp[0].o = frame[3].o;
	clinit_mindustry_world_blocks_payloads_UnitPayload(ctx);
	sp[1].o = gcAlloc(ctx, &class_mindustry_world_blocks_payloads_UnitPayload);
	init_mindustry_world_blocks_payloads_UnitPayload_mindustry_gen_Unit(ctx, sp[1].o, (frame[6].o));
	((func_mindustry_gen_Payloadc_addPayload_mindustry_world_blocks_payloads_Payload) resolveInterfaceMethod(ctx, &class_mindustry_gen_Payloadc, INDEX_mindustry_gen_Payloadc_addPayload_mindustry_world_blocks_payloads_Payload, sp[0].o))(ctx, sp[0].o, sp[1].o);
	}
label_19:;
	LINE_NUMBER(2159);
	goto label_3;
label_16:;
	INST_ALOAD(2);
	if ((--sp)->o != nullptr) goto label_3;
	{
	sp[0].o = (jobject)((func_mindustry_gen_Payloadc_payloads_R_arc_struct_Seq) resolveInterfaceMethod(ctx, &class_mindustry_gen_Payloadc, INDEX_mindustry_gen_Payloadc_payloads_R_arc_struct_Seq, (frame[3].o)))(ctx, (frame[3].o));
	if (((jint)((arc_struct_Seq *) NULL_CHECK(sp[0].o))->F_size) <= 0) goto label_3;
	}
	{
	LINE_NUMBER(2160);
	sp[0].o = (jobject)((func_mindustry_gen_Payloadc_payloads_R_arc_struct_Seq) resolveInterfaceMethod(ctx, &class_mindustry_gen_Payloadc, INDEX_mindustry_gen_Payloadc_payloads_R_arc_struct_Seq, (frame[3].o)))(ctx, (frame[3].o));
	sp[0].o = (jobject)((func_arc_struct_Seq_pop_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_pop_R_java_lang_Object])(ctx, sp[0].o);
	}
label_3:;
	LINE_NUMBER(2165);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_gen_LegsUnit_setType_mindustry_type_UnitType(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/LegsUnit:setType", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(2169);
	((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_type = (jref) (frame[1].o);
	LINE_NUMBER(2170);
	((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_maxHealth = ((jfloat)((mindustry_type_UnitType *) NULL_CHECK((frame[1].o)))->F_health);
	LINE_NUMBER(2171);
	((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_drag = ((jfloat)((mindustry_type_UnitType *) NULL_CHECK((frame[1].o)))->F_drag);
	LINE_NUMBER(2172);
	((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_armor = ((jfloat)((mindustry_type_UnitType *) NULL_CHECK((frame[1].o)))->F_armor);
	LINE_NUMBER(2173);
	((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_hitSize = ((jfloat)((mindustry_type_UnitType *) NULL_CHECK((frame[1].o)))->F_hitSize);
	LINE_NUMBER(2174);
	sp[0].o = (jobject)((func_mindustry_gen_LegsUnit_mounts_R_Array1_mindustry_entities_units_WeaponMount) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_gen_LegsUnit_mounts_R_Array1_mindustry_entities_units_WeaponMount])(ctx, (frame[0].o));
	jint temp0 = ((jarray) nullCheck(ctx, sp[0].o))->length;
	sp[0].o = (jobject)((mindustry_type_UnitType *) NULL_CHECK((frame[1].o)))->F_weapons;
	if (temp0 == ((jint)((arc_struct_Seq *) NULL_CHECK(sp[0].o))->F_size)) goto label_6;
	}
	{
	((func_mindustry_gen_LegsUnit_setupWeapons_mindustry_type_UnitType) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_gen_LegsUnit_setupWeapons_mindustry_type_UnitType])(ctx, (frame[0].o), (frame[1].o));
	}
label_6:;
	{
	LINE_NUMBER(2175);
	sp[0].o = (jobject)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_abilities;
	jint temp0 = ((jarray) nullCheck(ctx, sp[0].o))->length;
	sp[0].o = (jobject)((mindustry_type_UnitType *) NULL_CHECK((frame[1].o)))->F_abilities;
	if (temp0 != ((jint)((arc_struct_Seq *) NULL_CHECK(sp[0].o))->F_size)) goto label_7;
	}
	{
	sp[0].o = (jobject)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_abilities;
	if ((((jarray) nullCheck(ctx, sp[0].o))->length) <= 0) goto label_8;
	}
	{
	sp[0].o = (jobject)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_abilities;
	if ((isInstance(ctx, ((jobject)ARRAY_ACCESS(jobject, sp[0].o, (jint(0)))), &class_mindustry_entities_abilities_EmptyDataAbility)) == 0) goto label_8;
	}
label_7:;
	{
	LINE_NUMBER(2176);
	sp[0].o = (jobject)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_abilities;
	frame[2].o = sp[0].o;
	LINE_NUMBER(2177);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((mindustry_type_UnitType *) NULL_CHECK((frame[1].o)))->F_abilities;
	sp[1].o = (jobject)createArray(ctx, &class_mindustry_entities_abilities_Ability, ((jint)((arc_struct_Seq *) NULL_CHECK(sp[1].o))->F_size));
	((mindustry_gen_Unit *) NULL_CHECK(sp[0].o))->F_abilities = (jref) sp[1].o;
	LINE_NUMBER(2178);
	frame[3].i = (jint(0));
	}
label_11:;
	{
	jint temp0 = frame[3].i;
	sp[0].o = (jobject)((mindustry_type_UnitType *) NULL_CHECK((frame[1].o)))->F_abilities;
	if (temp0 >= ((jint)((arc_struct_Seq *) NULL_CHECK(sp[0].o))->F_size)) goto label_8;
	}
	{
	LINE_NUMBER(2179);
	sp[0].o = (jobject)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_abilities;
	jint temp0 = frame[3].i;
	sp[1].o = (jobject)((mindustry_type_UnitType *) NULL_CHECK((frame[1].o)))->F_abilities;
	sp[1].o = (jobject)((func_arc_struct_Seq_get_int_R_java_lang_Object) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_struct_Seq_get_int_R_java_lang_Object])(ctx, sp[1].o, (frame[3].i));
	sp[1].o = (jobject)((func_mindustry_entities_abilities_Ability_copy_R_mindustry_entities_abilities_Ability) ((void **) nullCheck(ctx, (checkCast(ctx, &class_mindustry_entities_abilities_Ability, sp[1].o)))->vtable)[VTABLE_mindustry_entities_abilities_Ability_copy_R_mindustry_entities_abilities_Ability])(ctx, (checkCast(ctx, &class_mindustry_entities_abilities_Ability, sp[1].o)));
	ARRAY_ACCESS(jobject, sp[0].o, temp0) = sp[1].o;
	LINE_NUMBER(2180);
	if ((frame[3].i) >= (((jarray) nullCheck(ctx, (frame[2].o)))->length)) goto label_14;
	}
	{
	LINE_NUMBER(2181);
	sp[0].o = (jobject)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_abilities;
	((mindustry_entities_abilities_Ability *) NULL_CHECK(((jobject)ARRAY_ACCESS(jobject, sp[0].o, (frame[3].i)))))->F_data = ((jfloat)((mindustry_entities_abilities_Ability *) NULL_CHECK(((jobject)ARRAY_ACCESS(jobject, (frame[2].o), (frame[3].i)))))->F_data);
	}
label_14:;
	{
	LINE_NUMBER(2178);
	INST_IINC(3, 1);
	goto label_11;
	}
label_8:;
	{
	LINE_NUMBER(2185);
	sp[0].o = (jobject)((mindustry_gen_LegsUnit *) NULL_CHECK((frame[0].o)))->F_controller;
	if (sp[0].o != nullptr) goto label_16;
	}
	{
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((func_mindustry_type_UnitType_createController_mindustry_gen_Unit_R_mindustry_entities_units_UnitController) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_type_UnitType_createController_mindustry_gen_Unit_R_mindustry_entities_units_UnitController])(ctx, (frame[1].o), (frame[0].o));
	((func_mindustry_gen_LegsUnit_controller_mindustry_entities_units_UnitController) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_gen_LegsUnit_controller_mindustry_entities_units_UnitController])(ctx, sp[0].o, sp[1].o);
	}
label_16:;
	LINE_NUMBER(2186);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_gen_LegsUnit_setWeaponRotation_float(jcontext ctx, jobject self, jfloat param0) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/LegsUnit:setWeaponRotation", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	{
	LINE_NUMBER(2190);
	sp[0].o = (jobject)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_mounts;
	frame[2].o = sp[0].o;
	frame[3].i = (((jarray) nullCheck(ctx, (frame[2].o)))->length);
	frame[4].i = (jint(0));
	}
label_1:;
	{
	if ((frame[4].i) >= (frame[3].i)) goto label_2;
	}
	{
	frame[5].o = ((jobject)ARRAY_ACCESS(jobject, (frame[2].o), (frame[4].i)));
	LINE_NUMBER(2191);
	((mindustry_entities_units_WeaponMount *) NULL_CHECK((frame[5].o)))->F_rotation = (frame[1].f);
	LINE_NUMBER(2190);
	INST_IINC(4, 1);
	goto label_1;
	}
label_2:;
	LINE_NUMBER(2193);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_gen_LegsUnit_setupWeapons_mindustry_type_UnitType(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/LegsUnit:setupWeapons", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(2197);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((mindustry_type_UnitType *) NULL_CHECK((frame[1].o)))->F_weapons;
	sp[1].o = (jobject)createArray(ctx, &class_mindustry_entities_units_WeaponMount, ((jint)((arc_struct_Seq *) NULL_CHECK(sp[1].o))->F_size));
	((mindustry_gen_Unit *) NULL_CHECK(sp[0].o))->F_mounts = (jref) sp[1].o;
	LINE_NUMBER(2198);
	frame[2].i = (jint(0));
	}
label_2:;
	{
	jint temp0 = frame[2].i;
	sp[0].o = (jobject)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_mounts;
	if (temp0 >= (((jarray) nullCheck(ctx, sp[0].o))->length)) goto label_3;
	}
	{
	LINE_NUMBER(2199);
	sp[0].o = (jobject)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_mounts;
	jint temp0 = frame[2].i;
	sp[1].o = (jobject)((mindustry_type_UnitType *) NULL_CHECK((frame[1].o)))->F_weapons;
	sp[1].o = (jobject)((func_arc_struct_Seq_get_int_R_java_lang_Object) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_struct_Seq_get_int_R_java_lang_Object])(ctx, sp[1].o, (frame[2].i));
	sp[1].o = (jobject)((mindustry_type_Weapon *) NULL_CHECK((checkCast(ctx, &class_mindustry_type_Weapon, sp[1].o))))->F_mountType;
	sp[2].o = (jobject)((mindustry_type_UnitType *) NULL_CHECK((frame[1].o)))->F_weapons;
	sp[2].o = (jobject)((func_arc_struct_Seq_get_int_R_java_lang_Object) ((void **) nullCheck(ctx, sp[2].o)->vtable)[VTABLE_arc_struct_Seq_get_int_R_java_lang_Object])(ctx, sp[2].o, (frame[2].i));
	sp[1].o = (jobject)((func_arc_func_Func_get_java_lang_Object_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_arc_func_Func, INDEX_arc_func_Func_get_java_lang_Object_R_java_lang_Object, sp[1].o))(ctx, sp[1].o, (checkCast(ctx, &class_mindustry_type_Weapon, sp[2].o)));
	ARRAY_ACCESS(jobject, sp[0].o, temp0) = (checkCast(ctx, &class_mindustry_entities_units_WeaponMount, sp[1].o));
	LINE_NUMBER(2198);
	INST_IINC(2, 1);
	goto label_2;
	}
label_3:;
	LINE_NUMBER(2201);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_gen_LegsUnit_snapInterpolation(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/LegsUnit:snapInterpolation", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(2204);
	((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_updateSpacing = (jlong(16ll));
	LINE_NUMBER(2205);
	sp[0].o = frame[0].o;
	jlong temp0 = (jlong)SM_arc_util_Time_millis_R_long(ctx);
	((mindustry_gen_Unit *) NULL_CHECK(sp[0].o))->F_lastUpdated = temp0;
	LINE_NUMBER(2206);
	((mindustry_gen_LegsUnit *) NULL_CHECK((frame[0].o)))->F_rotation_LAST_ = ((jfloat)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_rotation);
	LINE_NUMBER(2207);
	((mindustry_gen_LegsUnit *) NULL_CHECK((frame[0].o)))->F_rotation_TARGET_ = ((jfloat)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_rotation);
	LINE_NUMBER(2208);
	((mindustry_gen_LegsUnit *) NULL_CHECK((frame[0].o)))->F_x_LAST_ = ((jfloat)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_x);
	LINE_NUMBER(2209);
	((mindustry_gen_LegsUnit *) NULL_CHECK((frame[0].o)))->F_x_TARGET_ = ((jfloat)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_x);
	LINE_NUMBER(2210);
	((mindustry_gen_LegsUnit *) NULL_CHECK((frame[0].o)))->F_y_LAST_ = ((jfloat)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_y);
	LINE_NUMBER(2211);
	((mindustry_gen_LegsUnit *) NULL_CHECK((frame[0].o)))->F_y_TARGET_ = ((jfloat)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_y);
	LINE_NUMBER(2213);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_gen_LegsUnit_snapSync(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/LegsUnit:snapSync", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(2216);
	((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_updateSpacing = (jlong(16ll));
	LINE_NUMBER(2217);
	sp[0].o = frame[0].o;
	jlong temp0 = (jlong)SM_arc_util_Time_millis_R_long(ctx);
	((mindustry_gen_Unit *) NULL_CHECK(sp[0].o))->F_lastUpdated = temp0;
	LINE_NUMBER(2218);
	((mindustry_gen_LegsUnit *) NULL_CHECK((frame[0].o)))->F_rotation_LAST_ = ((jfloat)((mindustry_gen_LegsUnit *) NULL_CHECK((frame[0].o)))->F_rotation_TARGET_);
	LINE_NUMBER(2219);
	((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_rotation = ((jfloat)((mindustry_gen_LegsUnit *) NULL_CHECK((frame[0].o)))->F_rotation_TARGET_);
	LINE_NUMBER(2220);
	((mindustry_gen_LegsUnit *) NULL_CHECK((frame[0].o)))->F_x_LAST_ = ((jfloat)((mindustry_gen_LegsUnit *) NULL_CHECK((frame[0].o)))->F_x_TARGET_);
	LINE_NUMBER(2221);
	((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_x = ((jfloat)((mindustry_gen_LegsUnit *) NULL_CHECK((frame[0].o)))->F_x_TARGET_);
	LINE_NUMBER(2222);
	((mindustry_gen_LegsUnit *) NULL_CHECK((frame[0].o)))->F_y_LAST_ = ((jfloat)((mindustry_gen_LegsUnit *) NULL_CHECK((frame[0].o)))->F_y_TARGET_);
	LINE_NUMBER(2223);
	((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_y = ((jfloat)((mindustry_gen_LegsUnit *) NULL_CHECK((frame[0].o)))->F_y_TARGET_);
	LINE_NUMBER(2225);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_gen_LegsUnit_statusArmor_float(jcontext ctx, jobject self, jfloat param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/LegsUnit:statusArmor", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	{
	LINE_NUMBER(2229);
	sp[0].o = (jobject)((func_mindustry_gen_LegsUnit_applyDynamicStatus_R_mindustry_entities_units_StatusEntry) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_gen_LegsUnit_applyDynamicStatus_R_mindustry_entities_units_StatusEntry])(ctx, (frame[0].o));
	((mindustry_entities_units_StatusEntry *) NULL_CHECK(sp[0].o))->F_armorOverride = (frame[1].f);
	LINE_NUMBER(2230);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_gen_LegsUnit_statusBuildSpeed_float(jcontext ctx, jobject self, jfloat param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/LegsUnit:statusBuildSpeed", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	{
	LINE_NUMBER(2234);
	sp[0].o = (jobject)((func_mindustry_gen_LegsUnit_applyDynamicStatus_R_mindustry_entities_units_StatusEntry) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_gen_LegsUnit_applyDynamicStatus_R_mindustry_entities_units_StatusEntry])(ctx, (frame[0].o));
	jfloat temp0 = frame[1].f;
	sp[1].o = (jobject)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_type;
	((mindustry_entities_units_StatusEntry *) NULL_CHECK(sp[0].o))->F_buildSpeedMultiplier = (temp0 / ((jfloat)((mindustry_type_UnitType *) NULL_CHECK(sp[1].o))->F_buildSpeed));
	LINE_NUMBER(2235);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_gen_LegsUnit_statusDamageMultiplier_float(jcontext ctx, jobject self, jfloat param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/LegsUnit:statusDamageMultiplier", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	{
	LINE_NUMBER(2239);
	sp[0].o = (jobject)((func_mindustry_gen_LegsUnit_applyDynamicStatus_R_mindustry_entities_units_StatusEntry) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_gen_LegsUnit_applyDynamicStatus_R_mindustry_entities_units_StatusEntry])(ctx, (frame[0].o));
	((mindustry_entities_units_StatusEntry *) NULL_CHECK(sp[0].o))->F_damageMultiplier = (frame[1].f);
	LINE_NUMBER(2240);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_gen_LegsUnit_statusDrag_float(jcontext ctx, jobject self, jfloat param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/LegsUnit:statusDrag", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	{
	LINE_NUMBER(2244);
	sp[0].o = (jobject)((func_mindustry_gen_LegsUnit_applyDynamicStatus_R_mindustry_entities_units_StatusEntry) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_gen_LegsUnit_applyDynamicStatus_R_mindustry_entities_units_StatusEntry])(ctx, (frame[0].o));
	sp[1].o = (jobject)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_type;
	sp += 1;
	if ((floatCompare(((jfloat)((mindustry_type_UnitType *) NULL_CHECK(sp[0].o))->F_drag), (jfloat(0)), -1)) != 0) goto label_1;
	}
	INST_FCONST(0);
	goto label_2;
label_1:;
	{
	jfloat temp0 = frame[1].f;
	sp[0].o = (jobject)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_type;
	jfloat temp1 = temp0 / ((jfloat)((mindustry_type_UnitType *) NULL_CHECK(sp[0].o))->F_drag);
	sp[0].f = temp1;
	sp += 1;
	}
label_2:;
	{
	sp -= 2;
	((mindustry_entities_units_StatusEntry *) NULL_CHECK(sp[0].o))->F_dragMultiplier = sp[1].f;
	LINE_NUMBER(2245);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_gen_LegsUnit_statusMaxHealth_float(jcontext ctx, jobject self, jfloat param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/LegsUnit:statusMaxHealth", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	{
	LINE_NUMBER(2249);
	sp[0].o = (jobject)((func_mindustry_gen_LegsUnit_applyDynamicStatus_R_mindustry_entities_units_StatusEntry) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_gen_LegsUnit_applyDynamicStatus_R_mindustry_entities_units_StatusEntry])(ctx, (frame[0].o));
	((mindustry_entities_units_StatusEntry *) NULL_CHECK(sp[0].o))->F_healthMultiplier = ((frame[1].f) / ((jfloat)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_maxHealth));
	LINE_NUMBER(2250);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_gen_LegsUnit_statusReloadMultiplier_float(jcontext ctx, jobject self, jfloat param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/LegsUnit:statusReloadMultiplier", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	{
	LINE_NUMBER(2254);
	sp[0].o = (jobject)((func_mindustry_gen_LegsUnit_applyDynamicStatus_R_mindustry_entities_units_StatusEntry) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_gen_LegsUnit_applyDynamicStatus_R_mindustry_entities_units_StatusEntry])(ctx, (frame[0].o));
	((mindustry_entities_units_StatusEntry *) NULL_CHECK(sp[0].o))->F_reloadMultiplier = (frame[1].f);
	LINE_NUMBER(2255);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_gen_LegsUnit_statusSpeed_float(jcontext ctx, jobject self, jfloat param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/LegsUnit:statusSpeed", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	{
	LINE_NUMBER(2259);
	sp[0].o = (jobject)((func_mindustry_gen_LegsUnit_applyDynamicStatus_R_mindustry_entities_units_StatusEntry) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_gen_LegsUnit_applyDynamicStatus_R_mindustry_entities_units_StatusEntry])(ctx, (frame[0].o));
	jfloat temp0 = frame[1].f;
	sp[1].o = (jobject)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_type;
	((mindustry_entities_units_StatusEntry *) NULL_CHECK(sp[0].o))->F_speedMultiplier = (temp0 / ((((jfloat)((mindustry_type_UnitType *) NULL_CHECK(sp[1].o))->F_speed) * (jfloat(60.0f))) / (jfloat(8.0f))));
	LINE_NUMBER(2260);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_gen_LegsUnit_trns_arc_math_geom_Position(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/LegsUnit:trns", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(2264);
	sp[0].o = frame[0].o;
	jfloat temp0 = (jfloat)((func_arc_math_geom_Position_getX_R_float) resolveInterfaceMethod(ctx, &class_arc_math_geom_Position, INDEX_arc_math_geom_Position_getX_R_float, (frame[1].o)))(ctx, (frame[1].o));
	jfloat temp1 = (jfloat)((func_arc_math_geom_Position_getY_R_float) resolveInterfaceMethod(ctx, &class_arc_math_geom_Position, INDEX_arc_math_geom_Position_getY_R_float, (frame[1].o)))(ctx, (frame[1].o));
	((func_mindustry_gen_LegsUnit_trns_float_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_gen_LegsUnit_trns_float_float])(ctx, sp[0].o, temp0, temp1);
	LINE_NUMBER(2265);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_gen_LegsUnit_trns_float_float(jcontext ctx, jobject self, jfloat param0, jfloat param1) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/LegsUnit:trns", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	frame[2].f = param1;
	{
	LINE_NUMBER(2269);
	((func_mindustry_gen_LegsUnit_set_float_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_gen_LegsUnit_set_float_float])(ctx, (frame[0].o), (((jfloat)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_x) + (frame[1].f)), (((jfloat)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_y) + (frame[2].f)));
	LINE_NUMBER(2270);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_gen_LegsUnit_unapply_mindustry_type_StatusEffect(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/LegsUnit:unapply", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(2274);
	sp[0].o = (jobject)((mindustry_gen_LegsUnit *) NULL_CHECK((frame[0].o)))->F_statuses;
	{ /* InvokeDynamic */
		clinit_mindustry_gen_LegsUnit_invoke_arc_func_Boolf_18(ctx);
		auto proxy = (mindustry_gen_LegsUnit_invoke_arc_func_Boolf_18 *) gcAlloc(ctx, &class_mindustry_gen_LegsUnit_invoke_arc_func_Boolf_18);
		proxy->F_field1 = (jref) (frame[1].o);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[1].o = (jobject) proxy;
	}
	jint temp0 = (jint)((func_arc_struct_Seq_remove_arc_func_Boolf_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_remove_arc_func_Boolf_R_boolean])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(2282);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_gen_LegsUnit_unloaded(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/LegsUnit:unloaded", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(2287);
	((func_mindustry_gen_LegsUnit_resetLegs_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_gen_LegsUnit_resetLegs_float])(ctx, (frame[0].o), (jfloat(1)));
	LINE_NUMBER(2292);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_gen_LegsUnit_update(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[32];
	auto stack = &frame[24];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/LegsUnit:update", 32 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(2297);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_net;
	jint temp0 = (jint)((func_mindustry_net_Net_client_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_net_Net_client_R_boolean])(ctx, sp[0].o);
	if (temp0 == 0) goto label_1;
	}
	{
	jint temp0 = (jint)((func_mindustry_gen_LegsUnit_isLocal_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_gen_LegsUnit_isLocal_R_boolean])(ctx, (frame[0].o));
	if (temp0 == 0) goto label_2;
	}
label_1:;
	{
	LINE_NUMBER(2298);
	frame[1].f = ((jfloat)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_x);
	LINE_NUMBER(2299);
	frame[2].f = ((jfloat)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_y);
	LINE_NUMBER(2300);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_vel;
	jfloat temp0 = ((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK(sp[1].o))->F_x) * (clinit_arc_util_Time(ctx), (jfloat)SF_arc_util_Time_delta);
	sp[1].o = (jobject)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_vel;
	((func_mindustry_gen_LegsUnit_move_float_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_gen_LegsUnit_move_float_float])(ctx, sp[0].o, temp0, (((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK(sp[1].o))->F_y) * (clinit_arc_util_Time(ctx), (jfloat)SF_arc_util_Time_delta)));
	LINE_NUMBER(2301);
	jint temp1 = (jint)SM_arc_math_Mathf_equal_float_float_R_boolean(ctx, (frame[1].f), ((jfloat)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_x));
	if (temp1 == 0) goto label_6;
	}
	{
	sp[0].o = (jobject)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_vel;
	((arc_math_geom_Vec2 *) NULL_CHECK(sp[0].o))->F_x = (jfloat(0));
	}
label_6:;
	{
	LINE_NUMBER(2302);
	jint temp0 = (jint)SM_arc_math_Mathf_equal_float_float_R_boolean(ctx, (frame[2].f), ((jfloat)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_y));
	if (temp0 == 0) goto label_7;
	}
	{
	sp[0].o = (jobject)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_vel;
	((arc_math_geom_Vec2 *) NULL_CHECK(sp[0].o))->F_y = (jfloat(0));
	}
label_7:;
	{
	LINE_NUMBER(2303);
	sp[0].o = (jobject)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_vel;
	jfloat temp0 = (jfloat)SM_java_lang_Math_max_float_float_R_float(ctx, ((jfloat(1)) - (((jfloat)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_drag) * (clinit_arc_util_Time(ctx), (jfloat)SF_arc_util_Time_delta))), (jfloat(0)));
	sp[0].o = (jobject)((func_arc_math_geom_Vec2_scl_float_R_arc_math_geom_Vec2) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Vec2_scl_float_R_arc_math_geom_Vec2])(ctx, sp[0].o, temp0);
	}
label_2:;
	{
	LINE_NUMBER(2308);
	((func_mindustry_gen_LegsUnit_updateBuildLogic) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_gen_LegsUnit_updateBuildLogic])(ctx, (frame[0].o));
	LINE_NUMBER(2315);
	sp[0].o = frame[0].o;
	((mindustry_gen_Unit *) NULL_CHECK(sp[0].o))->F_hitTime = (((jfloat)((mindustry_gen_Unit *) NULL_CHECK(sp[0].o))->F_hitTime) - ((clinit_arc_util_Time(ctx), (jfloat)SF_arc_util_Time_delta) / (jfloat(9.0f))));
	LINE_NUMBER(2322);
	sp[0].o = (jobject)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_stack;
	sp[1].o = (jobject)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_stack;
	jint temp0 = (jint)((mindustry_type_ItemStack *) NULL_CHECK(sp[1].o))->F_amount;
	jint temp1 = jint(0);
	jint temp2 = (jint)((func_mindustry_gen_LegsUnit_itemCapacity_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_gen_LegsUnit_itemCapacity_R_int])(ctx, (frame[0].o));
	jint temp3 = (jint)SM_arc_math_Mathf_clamp_int_int_int_R_int(ctx, temp0, temp1, temp2);
	((mindustry_type_ItemStack *) NULL_CHECK(sp[0].o))->F_amount = temp3;
	LINE_NUMBER(2323);
	sp[0].o = frame[0].o;
	jfloat temp4 = (jfloat)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_itemTime;
	jint temp5 = (jint)((func_mindustry_gen_LegsUnit_hasItem_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_gen_LegsUnit_hasItem_R_boolean])(ctx, (frame[0].o));
	jint temp6 = (jint)SM_arc_math_Mathf_num_boolean_R_int(ctx, temp5);
	jfloat temp7 = (jfloat)SM_arc_math_Mathf_lerpDelta_float_float_float_R_float(ctx, temp4, (jfloat(temp6)), (jfloat(0.05f)));
	((mindustry_gen_Unit *) NULL_CHECK(sp[0].o))->F_itemTime = temp7;
	LINE_NUMBER(2327);
	jfloat temp8 = (jfloat)((func_mindustry_gen_LegsUnit_deltaX_R_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_gen_LegsUnit_deltaX_R_float])(ctx, (frame[0].o));
	jfloat temp9 = (jfloat)((func_mindustry_gen_LegsUnit_deltaY_R_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_gen_LegsUnit_deltaY_R_float])(ctx, (frame[0].o));
	jfloat temp10 = (jfloat)SM_arc_math_Mathf_dst_float_float_R_float(ctx, temp8, temp9);
	if ((floatCompare(temp10, (jfloat(1,000000e-03f)), -1)) <= 0) goto label_12;
	}
	{
	LINE_NUMBER(2328);
	sp[0].o = frame[0].o;
	jfloat temp0 = (jfloat)((mindustry_gen_LegsUnit *) NULL_CHECK((frame[0].o)))->F_baseRotation;
	jfloat temp1 = (jfloat)((func_mindustry_gen_LegsUnit_deltaX_R_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_gen_LegsUnit_deltaX_R_float])(ctx, (frame[0].o));
	jfloat temp2 = (jfloat)((func_mindustry_gen_LegsUnit_deltaY_R_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_gen_LegsUnit_deltaY_R_float])(ctx, (frame[0].o));
	jfloat temp3 = (jfloat)SM_arc_math_Mathf_angle_float_float_R_float(ctx, temp1, temp2);
	sp[1].o = (jobject)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_type;
	jfloat temp4 = (jfloat)SM_arc_math_Angles_moveToward_float_float_float_R_float(ctx, temp0, temp3, ((jfloat)((mindustry_type_UnitType *) NULL_CHECK(sp[1].o))->F_rotateSpeed));
	((mindustry_gen_LegsUnit *) NULL_CHECK(sp[0].o))->F_baseRotation = temp4;
	}
label_12:;
	{
	LINE_NUMBER(2330);
	sp[0].o = (jobject)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_type;
	if (((jint)((mindustry_type_UnitType *) NULL_CHECK(sp[0].o))->F_lockLegBase) == 0) goto label_14;
	}
	{
	LINE_NUMBER(2331);
	((mindustry_gen_LegsUnit *) NULL_CHECK((frame[0].o)))->F_baseRotation = ((jfloat)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_rotation);
	}
label_14:;
	{
	LINE_NUMBER(2333);
	sp[0].o = (jobject)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_type;
	frame[1].f = ((jfloat)((mindustry_type_UnitType *) NULL_CHECK(sp[0].o))->F_legLength);
	LINE_NUMBER(2334);
	sp[0].o = (jobject)((mindustry_gen_LegsUnit *) NULL_CHECK((frame[0].o)))->F_legs;
	jint temp0 = ((jarray) nullCheck(ctx, sp[0].o))->length;
	sp[0].o = (jobject)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_type;
	if (temp0 == ((jint)((mindustry_type_UnitType *) NULL_CHECK(sp[0].o))->F_legCount)) goto label_17;
	}
	{
	LINE_NUMBER(2335);
	((func_mindustry_gen_LegsUnit_resetLegs) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_gen_LegsUnit_resetLegs])(ctx, (frame[0].o));
	}
label_17:;
	{
	LINE_NUMBER(2337);
	sp[0].o = (jobject)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_type;
	frame[2].f = ((jfloat)((mindustry_type_UnitType *) NULL_CHECK(sp[0].o))->F_legSpeed);
	LINE_NUMBER(2338);
	sp[0].o = (jobject)((mindustry_gen_LegsUnit *) NULL_CHECK((frame[0].o)))->F_legs;
	jint temp0 = ((jarray) nullCheck(ctx, sp[0].o))->length;
	sp[0].o = (jobject)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_type;
	jint temp1 = (jint)SM_java_lang_Math_max_int_int_R_int(ctx, (temp0 / ((jint)((mindustry_type_UnitType *) NULL_CHECK(sp[0].o))->F_legGroupSize)), (jint(2)));
	frame[3].i = temp1;
	LINE_NUMBER(2339);
	sp[0].o = frame[0].o;
	jfloat temp2 = ((frame[1].f) / (jfloat(1.6f))) / ((jfloat((frame[3].i))) / (jfloat(2)));
	sp[1].o = (jobject)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_type;
	((mindustry_gen_LegsUnit *) NULL_CHECK(sp[0].o))->F_moveSpace = (temp2 * ((jfloat)((mindustry_type_UnitType *) NULL_CHECK(sp[1].o))->F_legMoveSpace));
	LINE_NUMBER(2340);
	sp[0].o = frame[0].o;
	jfloat temp3 = (jfloat)((mindustry_gen_LegsUnit *) NULL_CHECK(sp[0].o))->F_totalLength;
	sp[1].o = (jobject)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_type;
	jobject temp4 = sp[1].o;
	sp[1].f = temp3;
	sp += 2;
	if (((jint)((mindustry_type_UnitType *) NULL_CHECK(temp4))->F_legContinuousMove) == 0) goto label_22;
	}
	{
	sp[0].o = (jobject)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_type;
	jfloat temp0 = (((jfloat)((mindustry_type_UnitType *) NULL_CHECK(sp[0].o))->F_speed) * ((jfloat)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_speedMultiplier)) * (clinit_arc_util_Time(ctx), (jfloat)SF_arc_util_Time_delta);
	sp[0].f = temp0;
	sp += 1;
	goto label_23;
	}
label_22:;
	{
	jfloat temp0 = (jfloat)((func_mindustry_gen_LegsUnit_deltaX_R_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_gen_LegsUnit_deltaX_R_float])(ctx, (frame[0].o));
	jfloat temp1 = (jfloat)((func_mindustry_gen_LegsUnit_deltaY_R_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_gen_LegsUnit_deltaY_R_float])(ctx, (frame[0].o));
	jfloat temp2 = (jfloat)SM_arc_math_Mathf_dst_float_float_R_float(ctx, temp0, temp1);
	sp[0].f = temp2;
	sp += 1;
	}
label_23:;
	{
	sp -= 3;
	((mindustry_gen_LegsUnit *) NULL_CHECK(sp[0].o))->F_totalLength = (sp[1].f + sp[2].f);
	LINE_NUMBER(2341);
	jfloat temp0 = ((jfloat)((mindustry_gen_LegsUnit *) NULL_CHECK((frame[0].o)))->F_moveSpace) * (jfloat(0.85f));
	sp[0].o = (jobject)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_type;
	frame[4].f = (temp0 * ((jfloat)((mindustry_type_UnitType *) NULL_CHECK(sp[0].o))->F_legForwardScl));
	LINE_NUMBER(2342);
	jint temp1 = (jint)((func_mindustry_gen_LegsUnit_moving_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_gen_LegsUnit_moving_R_boolean])(ctx, (frame[0].o));
	frame[5].i = temp1;
	LINE_NUMBER(2343);
	if ((frame[5].i) != 0) goto label_27;
	}
	{
	clinit_arc_util_Tmp(ctx);
	sp[0].o = (jobject)SF_arc_util_Tmp_v4;
	sp[0].o = (jobject)((func_arc_math_geom_Vec2_setZero_R_arc_math_geom_Vec2) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Vec2_setZero_R_arc_math_geom_Vec2])(ctx, sp[0].o);
	sp += 1;
	goto label_28;
	}
label_27:;
	{
	clinit_arc_util_Tmp(ctx);
	sp[0].o = (jobject)SF_arc_util_Tmp_v4;
	jfloat temp0 = (jfloat)((func_mindustry_gen_LegsUnit_deltaX_R_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_gen_LegsUnit_deltaX_R_float])(ctx, (frame[0].o));
	jfloat temp1 = (jfloat)((func_mindustry_gen_LegsUnit_deltaY_R_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_gen_LegsUnit_deltaY_R_float])(ctx, (frame[0].o));
	jfloat temp2 = (jfloat)SM_arc_math_Angles_angle_float_float_R_float(ctx, temp0, temp1);
	sp[0].o = (jobject)((func_arc_math_geom_Vec2_trns_float_float_R_arc_math_geom_Vec2) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Vec2_trns_float_float_R_arc_math_geom_Vec2])(ctx, sp[0].o, temp2, (frame[4].f));
	sp += 1;
	}
label_28:;
	{
	sp -= 1;
	frame[6].o = sp[0].o;
	LINE_NUMBER(2344);
	sp[0].o = (jobject)((mindustry_gen_LegsUnit *) NULL_CHECK((frame[0].o)))->F_curMoveOffset;
	sp[0].o = (jobject)((func_arc_math_geom_Vec2_lerpDelta_arc_math_geom_Position_float_R_arc_math_geom_Vec2) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Vec2_lerpDelta_arc_math_geom_Position_float_R_arc_math_geom_Vec2])(ctx, sp[0].o, (frame[6].o), (jfloat(0.1f)));
	frame[6].o = sp[0].o;
	LINE_NUMBER(2345);
	((mindustry_gen_LegsUnit *) NULL_CHECK((frame[0].o)))->F_lastDeepFloor = (jref) (jobject(nullptr));
	LINE_NUMBER(2346);
	frame[7].i = (jint(0));
	LINE_NUMBER(2347);
	frame[8].i = (jint(0));
	}
label_33:;
	{
	jint temp0 = frame[8].i;
	sp[0].o = (jobject)((mindustry_gen_LegsUnit *) NULL_CHECK((frame[0].o)))->F_legs;
	if (temp0 >= (((jarray) nullCheck(ctx, sp[0].o))->length)) goto label_34;
	}
	{
	LINE_NUMBER(2348);
	jfloat temp0 = (jfloat)((func_mindustry_gen_LegsUnit_legAngle_int_R_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_gen_LegsUnit_legAngle_int_R_float])(ctx, (frame[0].o), (frame[8].i));
	frame[9].f = temp0;
	LINE_NUMBER(2349);
	sp[0].o = frame[0].o;
	clinit_arc_util_Tmp(ctx);
	sp[1].o = (jobject)SF_arc_util_Tmp_v5;
	sp[0].o = (jobject)((func_mindustry_gen_LegsUnit_legOffset_arc_math_geom_Vec2_int_R_arc_math_geom_Vec2) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_gen_LegsUnit_legOffset_arc_math_geom_Vec2_int_R_arc_math_geom_Vec2])(ctx, sp[0].o, sp[1].o, (frame[8].i));
	sp[0].o = (jobject)((func_arc_math_geom_Vec2_add_float_float_R_arc_math_geom_Vec2) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Vec2_add_float_float_R_arc_math_geom_Vec2])(ctx, sp[0].o, ((jfloat)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_x), ((jfloat)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_y));
	frame[10].o = sp[0].o;
	LINE_NUMBER(2350);
	sp[0].o = (jobject)((mindustry_gen_LegsUnit *) NULL_CHECK((frame[0].o)))->F_legs;
	frame[11].o = ((jobject)ARRAY_ACCESS(jobject, sp[0].o, (frame[8].i)));
	LINE_NUMBER(2351);
	sp[0].o = (jobject)((mindustry_entities_Leg *) NULL_CHECK((frame[11].o)))->F_joint;
	sp[0].o = (jobject)((func_arc_math_geom_Vec2_sub_arc_math_geom_Vec2_R_arc_math_geom_Vec2) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Vec2_sub_arc_math_geom_Vec2_R_arc_math_geom_Vec2])(ctx, sp[0].o, (frame[10].o));
	sp[1].o = (jobject)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_type;
	jfloat temp1 = (((jfloat)((mindustry_type_UnitType *) NULL_CHECK(sp[1].o))->F_legMinLength) * (frame[1].f)) / (jfloat(2));
	sp[1].o = (jobject)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_type;
	sp[0].o = (jobject)((func_arc_math_geom_Vec2_clampLength_float_float_R_arc_math_geom_Vec2) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Vec2_clampLength_float_float_R_arc_math_geom_Vec2])(ctx, sp[0].o, temp1, ((((jfloat)((mindustry_type_UnitType *) NULL_CHECK(sp[1].o))->F_legMaxLength) * (frame[1].f)) / (jfloat(2))));
	sp[0].o = (jobject)((func_arc_math_geom_Vec2_add_arc_math_geom_Vec2_R_arc_math_geom_Vec2) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Vec2_add_arc_math_geom_Vec2_R_arc_math_geom_Vec2])(ctx, sp[0].o, (frame[10].o));
	LINE_NUMBER(2352);
	sp[0].o = (jobject)((mindustry_entities_Leg *) NULL_CHECK((frame[11].o)))->F_base;
	sp[0].o = (jobject)((func_arc_math_geom_Vec2_sub_arc_math_geom_Vec2_R_arc_math_geom_Vec2) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Vec2_sub_arc_math_geom_Vec2_R_arc_math_geom_Vec2])(ctx, sp[0].o, (frame[10].o));
	sp[1].o = (jobject)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_type;
	jfloat temp2 = ((jfloat)((mindustry_type_UnitType *) NULL_CHECK(sp[1].o))->F_legMinLength) * (frame[1].f);
	sp[1].o = (jobject)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_type;
	sp[0].o = (jobject)((func_arc_math_geom_Vec2_clampLength_float_float_R_arc_math_geom_Vec2) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Vec2_clampLength_float_float_R_arc_math_geom_Vec2])(ctx, sp[0].o, temp2, (((jfloat)((mindustry_type_UnitType *) NULL_CHECK(sp[1].o))->F_legMaxLength) * (frame[1].f)));
	sp[0].o = (jobject)((func_arc_math_geom_Vec2_add_arc_math_geom_Vec2_R_arc_math_geom_Vec2) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Vec2_add_arc_math_geom_Vec2_R_arc_math_geom_Vec2])(ctx, sp[0].o, (frame[10].o));
	LINE_NUMBER(2353);
	jfloat temp3 = (jfloat)((mindustry_gen_LegsUnit *) NULL_CHECK((frame[0].o)))->F_totalLength;
	jfloat temp4 = jfloat((frame[8].i));
	sp[0].o = (jobject)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_type;
	frame[12].f = ((temp3 + (temp4 * ((jfloat)((mindustry_type_UnitType *) NULL_CHECK(sp[0].o))->F_legPairOffset))) / ((jfloat)((mindustry_gen_LegsUnit *) NULL_CHECK((frame[0].o)))->F_moveSpace));
	LINE_NUMBER(2354);
	frame[13].i = (jint((frame[12].f)));
	LINE_NUMBER(2355);
	frame[14].i = ((frame[13].i) % (frame[3].i));
	LINE_NUMBER(2356);
	if (((frame[8].i) % (frame[3].i)) != (frame[14].i)) goto label_44;
	}
	INST_ICONST(1);
	goto label_45;
label_44:;
	INST_ICONST(0);
label_45:;
	{
	sp -= 1;
	frame[15].i = sp[0].i;
	LINE_NUMBER(2357);
	jint temp0 = frame[8].i;
	sp[0].o = (jobject)((mindustry_gen_LegsUnit *) NULL_CHECK((frame[0].o)))->F_legs;
	if (temp0 >= ((((jarray) nullCheck(ctx, sp[0].o))->length) / (jint(2)))) goto label_47;
	}
	INST_ICONST(1);
	goto label_48;
label_47:;
	INST_ICONST(0);
label_48:;
	{
	sp -= 1;
	frame[16].i = sp[0].i;
	LINE_NUMBER(2358);
	jfloat temp0 = (jfloat((frame[8].i))) + (jfloat(0.5f));
	sp[0].o = (jobject)((mindustry_gen_LegsUnit *) NULL_CHECK((frame[0].o)))->F_legs;
	jfloat temp1 = (jfloat)SM_java_lang_Math_abs_float_R_float(ctx, (temp0 - ((jfloat((((jarray) nullCheck(ctx, sp[0].o))->length))) / (jfloat(2)))));
	if ((floatCompare(temp1, (jfloat(0.501f)), 1)) > 0) goto label_50;
	}
	INST_ICONST(1);
	goto label_51;
label_50:;
	INST_ICONST(0);
label_51:;
	{
	sp -= 1;
	frame[17].i = sp[0].i;
	LINE_NUMBER(2359);
	if ((frame[17].i) == 0) goto label_53;
	}
	{
	sp[0].o = (jobject)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_type;
	if (((jint)((mindustry_type_UnitType *) NULL_CHECK(sp[0].o))->F_flipBackLegs) == 0) goto label_53;
	}
	INST_ILOAD(16);
	if ((--sp)->i != 0) goto label_54;
	INST_ICONST(1);
	goto label_55;
label_54:;
	INST_ICONST(0);
label_55:;
	INST_ISTORE(16);
label_53:;
	{
	LINE_NUMBER(2360);
	sp[0].o = (jobject)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_type;
	if (((jint)((mindustry_type_UnitType *) NULL_CHECK(sp[0].o))->F_flipLegSide) == 0) goto label_56;
	}
	INST_ILOAD(16);
	if ((--sp)->i != 0) goto label_57;
	INST_ICONST(1);
	goto label_58;
label_57:;
	INST_ICONST(0);
label_58:;
	INST_ISTORE(16);
label_56:;
	{
	LINE_NUMBER(2361);
	((mindustry_entities_Leg *) NULL_CHECK((frame[11].o)))->F_moving = (frame[15].i);
	LINE_NUMBER(2362);
	sp[0].o = frame[11].o;
	sp += 1;
	if ((frame[5].i) == 0) goto label_60;
	}
	{
	jfloat temp0 = fmodf((frame[12].f), (jfloat(1)));
	sp[0].f = temp0;
	sp += 1;
	goto label_61;
	}
label_60:;
	{
	jfloat temp0 = (jfloat)SM_arc_math_Mathf_lerpDelta_float_float_float_R_float(ctx, ((jfloat)((mindustry_entities_Leg *) NULL_CHECK((frame[11].o)))->F_stage), (jfloat(0)), (jfloat(0.1f)));
	sp[0].f = temp0;
	sp += 1;
	}
label_61:;
	{
	sp -= 2;
	((mindustry_entities_Leg *) NULL_CHECK(sp[0].o))->F_stage = sp[1].f;
	LINE_NUMBER(2363);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_world;
	sp[1].o = (jobject)((mindustry_entities_Leg *) NULL_CHECK((frame[11].o)))->F_base;
	jfloat temp0 = (jfloat)((arc_math_geom_Vec2 *) NULL_CHECK(sp[1].o))->F_x;
	sp[1].o = (jobject)((mindustry_entities_Leg *) NULL_CHECK((frame[11].o)))->F_base;
	sp[0].o = (jobject)((func_mindustry_core_World_tileWorld_float_float_R_mindustry_world_Tile) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_World_tileWorld_float_float_R_mindustry_world_Tile])(ctx, sp[0].o, temp0, ((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK(sp[1].o))->F_y));
	frame[18].o = sp[0].o;
	LINE_NUMBER(2364);
	if ((frame[18].o) != nullptr) goto label_64;
	}
	clinit_arc_graphics_Color(ctx);
	(sp++)->o = SF_arc_graphics_Color_clear;
	goto label_65;
label_64:;
	INST_ALOAD(18);
	POP_N(1); // Pop method args
	sp->o = (jobject)((func_mindustry_world_Tile_getFloorColor_R_arc_graphics_Color) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_Tile_getFloorColor_R_arc_graphics_Color])(ctx, sp[0].o);
	sp++;
label_65:;
	{
	sp -= 1;
	frame[19].o = sp[0].o;
	LINE_NUMBER(2365);
	if ((frame[18].o) != nullptr) goto label_67;
	}
	{
	clinit_mindustry_content_Blocks(ctx);
	sp[0].o = (jobject)SF_mindustry_content_Blocks_air;
	sp[0].o = (jobject)((func_mindustry_world_Block_asFloor_R_mindustry_world_blocks_environment_Floor) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_Block_asFloor_R_mindustry_world_blocks_environment_Floor])(ctx, sp[0].o);
	sp += 1;
	goto label_68;
	}
label_67:;
	INST_ALOAD(18);
	POP_N(1); // Pop method args
	sp->o = (jobject)((func_mindustry_world_Tile_floor_R_mindustry_world_blocks_environment_Floor) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_Tile_floor_R_mindustry_world_blocks_environment_Floor])(ctx, sp[0].o);
	sp++;
label_68:;
	{
	sp -= 1;
	frame[20].o = sp[0].o;
	LINE_NUMBER(2366);
	if ((frame[18].o) == nullptr) goto label_70;
	}
	{
	jint temp0 = (jint)((func_mindustry_world_Tile_isDeep_R_boolean) ((void **) nullCheck(ctx, (frame[18].o))->vtable)[VTABLE_mindustry_world_Tile_isDeep_R_boolean])(ctx, (frame[18].o));
	if (temp0 == 0) goto label_70;
	}
	{
	LINE_NUMBER(2367);
	INST_IINC(7, 1);
	LINE_NUMBER(2368);
	((mindustry_gen_LegsUnit *) NULL_CHECK((frame[0].o)))->F_lastDeepFloor = (jref) (frame[20].o);
	}
label_70:;
	{
	LINE_NUMBER(2370);
	if (((jint)((mindustry_entities_Leg *) NULL_CHECK((frame[11].o)))->F_group) == (frame[14].i)) goto label_73;
	}
	{
	LINE_NUMBER(2371);
	if ((frame[15].i) != 0) goto label_75;
	}
	INST_ILOAD(5);
	if ((--sp)->i != 0) goto label_76;
	{
	sp[0].o = (jobject)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_type;
	if (((jint)((mindustry_type_UnitType *) NULL_CHECK(sp[0].o))->F_legContinuousMove) != 0) goto label_75;
	}
label_76:;
	{
	if (((frame[8].i) % (frame[3].i)) != ((jint)((mindustry_entities_Leg *) NULL_CHECK((frame[11].o)))->F_group)) goto label_75;
	}
	{
	LINE_NUMBER(2372);
	if ((clinit_mindustry_Vars(ctx), (jint)SF_mindustry_Vars_headless) != 0) goto label_78;
	}
	{
	sp[0].o = frame[0].o;
	clinit_mindustry_Vars(ctx);
	sp[1].o = (jobject)SF_mindustry_Vars_player;
	sp[1].o = (jobject)((func_mindustry_gen_Player_team_R_mindustry_game_Team) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_mindustry_gen_Player_team_R_mindustry_game_Team])(ctx, sp[1].o);
	jint temp0 = (jint)((func_mindustry_gen_LegsUnit_inFogTo_mindustry_game_Team_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_gen_LegsUnit_inFogTo_mindustry_game_Team_R_boolean])(ctx, sp[0].o, sp[1].o);
	if (temp0 != 0) goto label_78;
	}
	{
	LINE_NUMBER(2373);
	if (((jint)((mindustry_world_blocks_environment_Floor *) NULL_CHECK((frame[20].o)))->F_isLiquid) == 0) goto label_80;
	}
	INST_ALOAD(18);
	if ((--sp)->o == nullptr) goto label_80;
	{
	sp[0].o = (jobject)((func_mindustry_world_Tile_block_R_mindustry_world_Block) ((void **) nullCheck(ctx, (frame[18].o))->vtable)[VTABLE_mindustry_world_Tile_block_R_mindustry_world_Block])(ctx, (frame[18].o));
	clinit_mindustry_content_Blocks(ctx);
	sp[1].o = (jobject)SF_mindustry_content_Blocks_air;
	if (sp[0].o != sp[1].o) goto label_80;
	}
	{
	LINE_NUMBER(2374);
	sp[0].o = (jobject)((mindustry_world_blocks_environment_Floor *) NULL_CHECK((frame[20].o)))->F_walkEffect;
	sp[1].o = (jobject)((mindustry_entities_Leg *) NULL_CHECK((frame[11].o)))->F_base;
	jfloat temp0 = (jfloat)((arc_math_geom_Vec2 *) NULL_CHECK(sp[1].o))->F_x;
	sp[1].o = (jobject)((mindustry_entities_Leg *) NULL_CHECK((frame[11].o)))->F_base;
	jfloat temp1 = (jfloat)((arc_math_geom_Vec2 *) NULL_CHECK(sp[1].o))->F_y;
	sp[1].o = (jobject)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_type;
	((func_mindustry_entities_Effect_at_float_float_float_arc_graphics_Color) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_entities_Effect_at_float_float_float_arc_graphics_Color])(ctx, sp[0].o, temp0, temp1, ((jfloat)((mindustry_type_UnitType *) NULL_CHECK(sp[1].o))->F_rippleScale), (frame[19].o));
	LINE_NUMBER(2375);
	sp[0].o = (jobject)((mindustry_world_blocks_environment_Floor *) NULL_CHECK((frame[20].o)))->F_walkSound;
	jint temp2 = (jint)((func_arc_audio_Sound_at_float_float_float_float_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_audio_Sound_at_float_float_float_float_R_int])(ctx, sp[0].o, ((jfloat)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_x), ((jfloat)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_y), (jfloat(1)), ((jfloat)((mindustry_world_blocks_environment_Floor *) NULL_CHECK((frame[20].o)))->F_walkSoundVolume));
	goto label_83;
	}
label_80:;
	{
	LINE_NUMBER(2377);
	clinit_mindustry_content_Fx(ctx);
	sp[0].o = (jobject)SF_mindustry_content_Fx_unitLandSmall;
	sp[1].o = (jobject)((mindustry_entities_Leg *) NULL_CHECK((frame[11].o)))->F_base;
	jfloat temp0 = (jfloat)((arc_math_geom_Vec2 *) NULL_CHECK(sp[1].o))->F_x;
	sp[1].o = (jobject)((mindustry_entities_Leg *) NULL_CHECK((frame[11].o)))->F_base;
	jfloat temp1 = (jfloat)((arc_math_geom_Vec2 *) NULL_CHECK(sp[1].o))->F_y;
	sp[1].o = (jobject)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_type;
	((func_mindustry_entities_Effect_at_float_float_float_arc_graphics_Color) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_entities_Effect_at_float_float_float_arc_graphics_Color])(ctx, sp[0].o, temp0, temp1, ((jfloat)((mindustry_type_UnitType *) NULL_CHECK(sp[1].o))->F_rippleScale), (frame[19].o));
	LINE_NUMBER(2378);
	sp[0].o = (jobject)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_type;
	sp[0].o = (jobject)((mindustry_type_UnitType *) NULL_CHECK(sp[0].o))->F_stepSound;
	sp[1].o = (jobject)((mindustry_entities_Leg *) NULL_CHECK((frame[11].o)))->F_base;
	jfloat temp2 = (jfloat)((arc_math_geom_Vec2 *) NULL_CHECK(sp[1].o))->F_x;
	sp[1].o = (jobject)((mindustry_entities_Leg *) NULL_CHECK((frame[11].o)))->F_base;
	jfloat temp3 = (jfloat)((arc_math_geom_Vec2 *) NULL_CHECK(sp[1].o))->F_y;
	sp[1].o = (jobject)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_type;
	jfloat temp4 = (jfloat)((mindustry_type_UnitType *) NULL_CHECK(sp[1].o))->F_stepSoundPitch;
	sp[1].o = (jobject)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_type;
	jfloat temp5 = (jfloat)SM_arc_math_Mathf_range_float_R_float(ctx, ((jfloat)((mindustry_type_UnitType *) NULL_CHECK(sp[1].o))->F_stepSoundPitchRange));
	jfloat temp6 = temp4 + temp5;
	sp[1].o = (jobject)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_type;
	jint temp7 = (jint)((func_arc_audio_Sound_at_float_float_float_float_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_audio_Sound_at_float_float_float_float_R_int])(ctx, sp[0].o, temp2, temp3, temp6, ((jfloat)((mindustry_type_UnitType *) NULL_CHECK(sp[1].o))->F_stepSoundVolume));
	}
label_83:;
	{
	LINE_NUMBER(2380);
	sp[0].o = (jobject)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_type;
	if ((floatCompare(((jfloat)((mindustry_type_UnitType *) NULL_CHECK(sp[0].o))->F_stepShake), (jfloat(0)), -1)) <= 0) goto label_78;
	}
	{
	LINE_NUMBER(2381);
	sp[0].o = (jobject)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_type;
	jfloat temp0 = (jfloat)((mindustry_type_UnitType *) NULL_CHECK(sp[0].o))->F_stepShake;
	sp[0].o = (jobject)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_type;
	jfloat temp1 = (jfloat)((mindustry_type_UnitType *) NULL_CHECK(sp[0].o))->F_stepShake;
	sp[0].o = (jobject)((mindustry_entities_Leg *) NULL_CHECK((frame[11].o)))->F_base;
	SM_mindustry_entities_Effect_shake_float_float_arc_math_geom_Position(ctx, temp0, temp1, sp[0].o);
	}
label_78:;
	{
	LINE_NUMBER(2384);
	sp[0].o = (jobject)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_type;
	if ((floatCompare(((jfloat)((mindustry_type_UnitType *) NULL_CHECK(sp[0].o))->F_legSplashDamage), (jfloat(0)), -1)) <= 0) goto label_75;
	}
	{
	if (((jint)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_disarmed) != 0) goto label_75;
	}
	{
	LINE_NUMBER(2385);
	sp[0].o = (jobject)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_team;
	sp[1].o = (jobject)((mindustry_entities_Leg *) NULL_CHECK((frame[11].o)))->F_base;
	jfloat temp0 = (jfloat)((arc_math_geom_Vec2 *) NULL_CHECK(sp[1].o))->F_x;
	sp[1].o = (jobject)((mindustry_entities_Leg *) NULL_CHECK((frame[11].o)))->F_base;
	jfloat temp1 = (jfloat)((arc_math_geom_Vec2 *) NULL_CHECK(sp[1].o))->F_y;
	sp[1].o = (jobject)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_type;
	jfloat temp2 = (jfloat)((mindustry_type_UnitType *) NULL_CHECK(sp[1].o))->F_legSplashRange;
	sp[1].o = (jobject)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_type;
	jfloat temp3 = (jfloat)((mindustry_type_UnitType *) NULL_CHECK(sp[1].o))->F_legSplashDamage;
	clinit_mindustry_Vars(ctx);
	sp[1].o = (jobject)SF_mindustry_Vars_state;
	sp[1].o = (jobject)((mindustry_core_GameState *) NULL_CHECK(sp[1].o))->F_rules;
	sp[2].o = (jobject)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_team;
	jfloat temp4 = (jfloat)((func_mindustry_game_Rules_unitDamage_mindustry_game_Team_R_float) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_mindustry_game_Rules_unitDamage_mindustry_game_Team_R_float])(ctx, sp[1].o, sp[2].o);
	SM_mindustry_entities_Damage_damage_mindustry_game_Team_float_float_float_float_boolean_boolean(ctx, sp[0].o, temp0, temp1, temp2, (temp3 * temp4), (jint(0)), (jint(1)));
	LINE_NUMBER(2386);
	if ((frame[18].o) == nullptr) goto label_75;
	}
	{
	sp[0].o = (jobject)((func_mindustry_world_Tile_block_R_mindustry_world_Block) ((void **) nullCheck(ctx, (frame[18].o))->vtable)[VTABLE_mindustry_world_Tile_block_R_mindustry_world_Block])(ctx, (frame[18].o));
	if (((jint)((mindustry_world_Block *) NULL_CHECK(sp[0].o))->F_unitMoveBreakable) == 0) goto label_75;
	}
	{
	LINE_NUMBER(2387);
	sp[0].o = frame[18].o;
	sp[1].o = (jobject)((func_mindustry_world_Tile_block_R_mindustry_world_Block) ((void **) nullCheck(ctx, (frame[18].o))->vtable)[VTABLE_mindustry_world_Tile_block_R_mindustry_world_Block])(ctx, (frame[18].o));
	SM_mindustry_world_blocks_ConstructBlock_deconstructFinish_mindustry_world_Tile_mindustry_world_Block_mindustry_gen_Unit(ctx, sp[0].o, sp[1].o, (frame[0].o));
	}
label_75:;
	{
	LINE_NUMBER(2391);
	((mindustry_entities_Leg *) NULL_CHECK((frame[11].o)))->F_group = (frame[14].i);
	}
label_73:;
	{
	LINE_NUMBER(2393);
	clinit_arc_util_Tmp(ctx);
	sp[0].o = (jobject)SF_arc_util_Tmp_v1;
	jfloat temp0 = frame[9].f;
	jfloat temp1 = frame[1].f;
	sp[1].o = (jobject)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_type;
	sp[0].o = (jobject)((func_arc_math_geom_Vec2_trns_float_float_R_arc_math_geom_Vec2) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Vec2_trns_float_float_R_arc_math_geom_Vec2])(ctx, sp[0].o, temp0, (temp1 * ((jfloat)((mindustry_type_UnitType *) NULL_CHECK(sp[1].o))->F_legLengthScl)));
	sp[0].o = (jobject)((func_arc_math_geom_Vec2_add_arc_math_geom_Vec2_R_arc_math_geom_Vec2) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Vec2_add_arc_math_geom_Vec2_R_arc_math_geom_Vec2])(ctx, sp[0].o, (frame[10].o));
	sp[0].o = (jobject)((func_arc_math_geom_Vec2_add_arc_math_geom_Vec2_R_arc_math_geom_Vec2) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Vec2_add_arc_math_geom_Vec2_R_arc_math_geom_Vec2])(ctx, sp[0].o, (frame[6].o));
	frame[21].o = sp[0].o;
	LINE_NUMBER(2394);
	clinit_arc_util_Tmp(ctx);
	sp[0].o = (jobject)SF_arc_util_Tmp_v2;
	frame[22].o = sp[0].o;
	LINE_NUMBER(2395);
	jfloat temp2 = (frame[1].f) / (jfloat(2));
	jfloat temp3 = (frame[1].f) / (jfloat(2));
	clinit_arc_util_Tmp(ctx);
	sp[0].o = (jobject)SF_arc_util_Tmp_v6;
	sp[1].o = (jobject)((mindustry_entities_Leg *) NULL_CHECK((frame[11].o)))->F_base;
	sp[0].o = (jobject)((func_arc_math_geom_Vec2_set_arc_math_geom_Vec2_R_arc_math_geom_Vec2) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Vec2_set_arc_math_geom_Vec2_R_arc_math_geom_Vec2])(ctx, sp[0].o, sp[1].o);
	sp[0].o = (jobject)((func_arc_math_geom_Vec2_sub_arc_math_geom_Vec2_R_arc_math_geom_Vec2) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Vec2_sub_arc_math_geom_Vec2_R_arc_math_geom_Vec2])(ctx, sp[0].o, (frame[10].o));
	jint temp4 = (jint)SM_mindustry_graphics_InverseKinematics_solve_float_float_arc_math_geom_Vec2_boolean_arc_math_geom_Vec2_R_boolean(ctx, temp2, temp3, sp[0].o, (frame[16].i), (frame[22].o));
	LINE_NUMBER(2396);
	sp[0].o = (jobject)((func_arc_math_geom_Vec2_add_arc_math_geom_Vec2_R_arc_math_geom_Vec2) ((void **) nullCheck(ctx, (frame[22].o))->vtable)[VTABLE_arc_math_geom_Vec2_add_arc_math_geom_Vec2_R_arc_math_geom_Vec2])(ctx, (frame[22].o), (frame[10].o));
	LINE_NUMBER(2397);
	clinit_arc_util_Tmp(ctx);
	sp[0].o = (jobject)SF_arc_util_Tmp_v6;
	sp[0].o = (jobject)((func_arc_math_geom_Vec2_set_arc_math_geom_Vec2_R_arc_math_geom_Vec2) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Vec2_set_arc_math_geom_Vec2_R_arc_math_geom_Vec2])(ctx, sp[0].o, (frame[10].o));
	sp[1].o = (jobject)((mindustry_entities_Leg *) NULL_CHECK((frame[11].o)))->F_base;
	sp[0].o = (jobject)((func_arc_math_geom_Vec2_lerp_arc_math_geom_Vec2_float_R_arc_math_geom_Vec2) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Vec2_lerp_arc_math_geom_Vec2_float_R_arc_math_geom_Vec2])(ctx, sp[0].o, sp[1].o, (jfloat(0.5f)));
	LINE_NUMBER(2398);
	if ((frame[15].i) == 0) goto label_94;
	}
	{
	LINE_NUMBER(2399);
	frame[23].f = (fmodf((frame[12].f), (jfloat(1))));
	LINE_NUMBER(2400);
	sp[0].o = (jobject)((mindustry_entities_Leg *) NULL_CHECK((frame[11].o)))->F_base;
	sp[0].o = (jobject)((func_arc_math_geom_Vec2_lerpDelta_arc_math_geom_Position_float_R_arc_math_geom_Vec2) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Vec2_lerpDelta_arc_math_geom_Position_float_R_arc_math_geom_Vec2])(ctx, sp[0].o, (frame[21].o), (frame[23].f));
	LINE_NUMBER(2401);
	sp[0].o = (jobject)((mindustry_entities_Leg *) NULL_CHECK((frame[11].o)))->F_joint;
	sp[0].o = (jobject)((func_arc_math_geom_Vec2_lerpDelta_arc_math_geom_Position_float_R_arc_math_geom_Vec2) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Vec2_lerpDelta_arc_math_geom_Position_float_R_arc_math_geom_Vec2])(ctx, sp[0].o, (frame[22].o), ((frame[23].f) / (jfloat(2))));
	}
label_94:;
	{
	LINE_NUMBER(2403);
	sp[0].o = (jobject)((mindustry_entities_Leg *) NULL_CHECK((frame[11].o)))->F_joint;
	sp[0].o = (jobject)((func_arc_math_geom_Vec2_lerpDelta_arc_math_geom_Position_float_R_arc_math_geom_Vec2) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Vec2_lerpDelta_arc_math_geom_Position_float_R_arc_math_geom_Vec2])(ctx, sp[0].o, (frame[22].o), ((frame[2].f) / (jfloat(4.0f))));
	LINE_NUMBER(2404);
	sp[0].o = (jobject)((mindustry_entities_Leg *) NULL_CHECK((frame[11].o)))->F_joint;
	sp[0].o = (jobject)((func_arc_math_geom_Vec2_sub_arc_math_geom_Vec2_R_arc_math_geom_Vec2) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Vec2_sub_arc_math_geom_Vec2_R_arc_math_geom_Vec2])(ctx, sp[0].o, (frame[10].o));
	sp[1].o = (jobject)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_type;
	jfloat temp0 = (((jfloat)((mindustry_type_UnitType *) NULL_CHECK(sp[1].o))->F_legMinLength) * (frame[1].f)) / (jfloat(2));
	sp[1].o = (jobject)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_type;
	sp[0].o = (jobject)((func_arc_math_geom_Vec2_clampLength_float_float_R_arc_math_geom_Vec2) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Vec2_clampLength_float_float_R_arc_math_geom_Vec2])(ctx, sp[0].o, temp0, ((((jfloat)((mindustry_type_UnitType *) NULL_CHECK(sp[1].o))->F_legMaxLength) * (frame[1].f)) / (jfloat(2))));
	sp[0].o = (jobject)((func_arc_math_geom_Vec2_add_arc_math_geom_Vec2_R_arc_math_geom_Vec2) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Vec2_add_arc_math_geom_Vec2_R_arc_math_geom_Vec2])(ctx, sp[0].o, (frame[10].o));
	LINE_NUMBER(2405);
	sp[0].o = (jobject)((mindustry_entities_Leg *) NULL_CHECK((frame[11].o)))->F_base;
	sp[0].o = (jobject)((func_arc_math_geom_Vec2_sub_arc_math_geom_Vec2_R_arc_math_geom_Vec2) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Vec2_sub_arc_math_geom_Vec2_R_arc_math_geom_Vec2])(ctx, sp[0].o, (frame[10].o));
	sp[1].o = (jobject)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_type;
	jfloat temp1 = ((jfloat)((mindustry_type_UnitType *) NULL_CHECK(sp[1].o))->F_legMinLength) * (frame[1].f);
	sp[1].o = (jobject)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_type;
	sp[0].o = (jobject)((func_arc_math_geom_Vec2_clampLength_float_float_R_arc_math_geom_Vec2) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Vec2_clampLength_float_float_R_arc_math_geom_Vec2])(ctx, sp[0].o, temp1, (((jfloat)((mindustry_type_UnitType *) NULL_CHECK(sp[1].o))->F_legMaxLength) * (frame[1].f)));
	sp[0].o = (jobject)((func_arc_math_geom_Vec2_add_arc_math_geom_Vec2_R_arc_math_geom_Vec2) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Vec2_add_arc_math_geom_Vec2_R_arc_math_geom_Vec2])(ctx, sp[0].o, (frame[10].o));
	LINE_NUMBER(2347);
	INST_IINC(8, 1);
	goto label_33;
	}
label_34:;
	{
	LINE_NUMBER(2407);
	jint temp0 = frame[7].i;
	sp[0].o = (jobject)((mindustry_gen_LegsUnit *) NULL_CHECK((frame[0].o)))->F_legs;
	if (temp0 != (((jarray) nullCheck(ctx, sp[0].o))->length)) goto label_101;
	}
	{
	sp[0].o = (jobject)((func_mindustry_gen_LegsUnit_floorOn_R_mindustry_world_blocks_environment_Floor) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_gen_LegsUnit_floorOn_R_mindustry_world_blocks_environment_Floor])(ctx, (frame[0].o));
	jint temp0 = (jint)((func_mindustry_world_blocks_environment_Floor_isDeep_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_blocks_environment_Floor_isDeep_R_boolean])(ctx, sp[0].o);
	if (temp0 != 0) goto label_102;
	}
label_101:;
	{
	LINE_NUMBER(2408);
	((mindustry_gen_LegsUnit *) NULL_CHECK((frame[0].o)))->F_lastDeepFloor = (jref) (jobject(nullptr));
	}
label_102:;
	{
	LINE_NUMBER(2413);
	sp[0].o = (jobject)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_mineTile;
	if (sp[0].o != nullptr) goto label_103;
	}
	goto label_104;
label_103:;
	{
	LINE_NUMBER(2414);
	sp[0].o = (jobject)((func_mindustry_gen_LegsUnit_closestCore_R_mindustry_world_blocks_storage_CoreBlock$CoreBuild) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_gen_LegsUnit_closestCore_R_mindustry_world_blocks_storage_CoreBlock$CoreBuild])(ctx, (frame[0].o));
	frame[1].o = sp[0].o;
	LINE_NUMBER(2415);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_mineTile;
	sp[0].o = (jobject)((func_mindustry_gen_LegsUnit_getMineResult_mindustry_world_Tile_R_mindustry_type_Item) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_gen_LegsUnit_getMineResult_mindustry_world_Tile_R_mindustry_type_Item])(ctx, sp[0].o, sp[1].o);
	frame[2].o = sp[0].o;
	LINE_NUMBER(2416);
	if ((frame[1].o) == nullptr) goto label_107;
	}
	INST_ALOAD(2);
	if ((--sp)->o == nullptr) goto label_107;
	{
	jint temp0 = (jint)((func_mindustry_gen_LegsUnit_acceptsItem_mindustry_type_Item_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_gen_LegsUnit_acceptsItem_mindustry_type_Item_R_boolean])(ctx, (frame[0].o), (frame[2].o));
	if (temp0 != 0) goto label_107;
	}
	{
	jint temp0 = (jint)((func_mindustry_gen_LegsUnit_within_arc_math_geom_Position_float_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_gen_LegsUnit_within_arc_math_geom_Position_float_R_boolean])(ctx, (frame[0].o), (frame[1].o), (jfloat(220.0f)));
	if (temp0 == 0) goto label_107;
	}
	{
	jint temp0 = (jint)((func_mindustry_gen_LegsUnit_offloadImmediately_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_gen_LegsUnit_offloadImmediately_R_boolean])(ctx, (frame[0].o));
	if (temp0 != 0) goto label_107;
	}
	{
	LINE_NUMBER(2417);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((func_mindustry_gen_LegsUnit_item_R_mindustry_type_Item) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_gen_LegsUnit_item_R_mindustry_type_Item])(ctx, (frame[0].o));
	sp[2].o = (jobject)((func_mindustry_gen_LegsUnit_stack_R_mindustry_type_ItemStack) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_gen_LegsUnit_stack_R_mindustry_type_ItemStack])(ctx, (frame[0].o));
	jint temp0 = (jint)((func_mindustry_gen_Building_acceptStack_mindustry_type_Item_int_mindustry_gen_Teamc_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_gen_Building_acceptStack_mindustry_type_Item_int_mindustry_gen_Teamc_R_int])(ctx, sp[0].o, sp[1].o, ((jint)((mindustry_type_ItemStack *) NULL_CHECK(sp[2].o))->F_amount), (frame[0].o));
	frame[3].i = temp0;
	LINE_NUMBER(2418);
	if ((frame[3].i) <= 0) goto label_107;
	}
	{
	LINE_NUMBER(2419);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((func_mindustry_gen_LegsUnit_item_R_mindustry_type_Item) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_gen_LegsUnit_item_R_mindustry_type_Item])(ctx, (frame[0].o));
	jint temp0 = frame[3].i;
	sp[2].o = (jobject)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_mineTile;
	jfloat temp1 = (jfloat)((func_mindustry_world_Tile_worldx_R_float) ((void **) nullCheck(ctx, sp[2].o)->vtable)[VTABLE_mindustry_world_Tile_worldx_R_float])(ctx, sp[2].o);
	jfloat temp2 = (jfloat)SM_arc_math_Mathf_range_float_R_float(ctx, (jfloat(4.0f)));
	jfloat temp3 = temp1 + temp2;
	sp[2].o = (jobject)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_mineTile;
	jfloat temp4 = (jfloat)((func_mindustry_world_Tile_worldy_R_float) ((void **) nullCheck(ctx, sp[2].o)->vtable)[VTABLE_mindustry_world_Tile_worldy_R_float])(ctx, sp[2].o);
	jfloat temp5 = (jfloat)SM_arc_math_Mathf_range_float_R_float(ctx, (jfloat(4.0f)));
	SM_mindustry_gen_Call_transferItemTo_mindustry_gen_Unit_mindustry_type_Item_int_float_float_mindustry_gen_Building(ctx, sp[0].o, sp[1].o, temp0, temp3, (temp4 + temp5), (frame[1].o));
	LINE_NUMBER(2420);
	((func_mindustry_gen_LegsUnit_clearItem) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_gen_LegsUnit_clearItem])(ctx, (frame[0].o));
	}
label_107:;
	{
	LINE_NUMBER(2423);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_net;
	jint temp0 = (jint)((func_mindustry_net_Net_client_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_net_Net_client_R_boolean])(ctx, sp[0].o);
	if (temp0 == 0) goto label_112;
	}
	{
	jint temp0 = (jint)((func_mindustry_gen_LegsUnit_isLocal_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_gen_LegsUnit_isLocal_R_boolean])(ctx, (frame[0].o));
	if (temp0 == 0) goto label_113;
	}
label_112:;
	{
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_mineTile;
	jint temp0 = (jint)((func_mindustry_gen_LegsUnit_validMine_mindustry_world_Tile_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_gen_LegsUnit_validMine_mindustry_world_Tile_R_boolean])(ctx, sp[0].o, sp[1].o);
	if (temp0 != 0) goto label_113;
	}
	{
	LINE_NUMBER(2424);
	((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_mineTile = (jref) (jobject(nullptr));
	LINE_NUMBER(2425);
	((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_mineTimer = (jfloat(0));
	goto label_104;
	}
label_113:;
	{
	LINE_NUMBER(2426);
	jint temp0 = (jint)((func_mindustry_gen_LegsUnit_mining_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_gen_LegsUnit_mining_R_boolean])(ctx, (frame[0].o));
	if (temp0 == 0) goto label_104;
	}
	INST_ALOAD(2);
	if ((--sp)->o == nullptr) goto label_104;
	{
	LINE_NUMBER(2427);
	clinit_arc_util_Time(ctx);
	jfloat temp0 = (jfloat)SF_arc_util_Time_delta;
	sp[0].o = (jobject)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_type;
	jfloat temp1 = temp0 * ((jfloat)((mindustry_type_UnitType *) NULL_CHECK(sp[0].o))->F_mineSpeed);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	sp[0].o = (jobject)((mindustry_core_GameState *) NULL_CHECK(sp[0].o))->F_rules;
	sp[1].o = (jobject)((func_mindustry_gen_LegsUnit_team_R_mindustry_game_Team) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_gen_LegsUnit_team_R_mindustry_game_Team])(ctx, (frame[0].o));
	jfloat temp2 = (jfloat)((func_mindustry_game_Rules_unitMineSpeed_mindustry_game_Team_R_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_game_Rules_unitMineSpeed_mindustry_game_Team_R_float])(ctx, sp[0].o, sp[1].o);
	frame[3].f = (temp1 * temp2);
	LINE_NUMBER(2428);
	sp[0].o = frame[0].o;
	((mindustry_gen_Unit *) NULL_CHECK(sp[0].o))->F_mineTimer = (((jfloat)((mindustry_gen_Unit *) NULL_CHECK(sp[0].o))->F_mineTimer) + (frame[3].f));
	LINE_NUMBER(2429);
	jint temp3 = (jint)SM_arc_math_Mathf_chance_double_R_boolean(ctx, (jdouble(((jfloat(0.035f)) * (frame[3].f)))));
	if (temp3 == 0) goto label_119;
	}
	{
	LINE_NUMBER(2430);
	clinit_mindustry_content_Fx(ctx);
	sp[0].o = (jobject)SF_mindustry_content_Fx_unitMine;
	sp[1].o = (jobject)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_mineTile;
	jfloat temp0 = (jfloat)((func_mindustry_world_Tile_worldx_R_float) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_mindustry_world_Tile_worldx_R_float])(ctx, sp[1].o);
	jfloat temp1 = (jfloat)SM_arc_math_Mathf_range_float_R_float(ctx, (jfloat(2)));
	jfloat temp2 = temp0 + temp1;
	sp[1].o = (jobject)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_mineTile;
	jfloat temp3 = (jfloat)((func_mindustry_world_Tile_worldy_R_float) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_mindustry_world_Tile_worldy_R_float])(ctx, sp[1].o);
	jfloat temp4 = (jfloat)SM_arc_math_Mathf_range_float_R_float(ctx, (jfloat(2)));
	jfloat temp5 = temp3 + temp4;
	jfloat temp6 = jfloat(0);
	sp[1].o = (jobject)((mindustry_type_Item *) NULL_CHECK((frame[2].o)))->F_color;
	((func_mindustry_entities_Effect_at_float_float_float_arc_graphics_Color) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_entities_Effect_at_float_float_float_arc_graphics_Color])(ctx, sp[0].o, temp2, temp5, temp6, sp[1].o);
	}
label_119:;
	{
	LINE_NUMBER(2432);
	jfloat temp0 = (jfloat)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_mineTimer;
	jfloat temp1 = jfloat(50.0f);
	sp[0].o = (jobject)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_type;
	jobject temp2 = sp[0].o;
	sp[0].f = temp0;
	sp[1].f = temp1;
	sp += 2;
	if (((jint)((mindustry_type_UnitType *) NULL_CHECK(temp2))->F_mineHardnessScaling) == 0) goto label_121;
	}
	{
	jfloat temp0 = (jfloat(((jint)((mindustry_type_Item *) NULL_CHECK((frame[2].o)))->F_hardness))) * (jfloat(15.0f));
	sp[0].f = temp0;
	sp += 1;
	goto label_122;
	}
label_121:;
	(sp++)->f = jfloat(15.0f);
label_122:;
	{
	sp -= 3;
	if ((floatCompare(sp[0].f, (sp[1].f + sp[2].f), -1)) < 0) goto label_123;
	}
	{
	LINE_NUMBER(2433);
	((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_mineTimer = (jfloat(0));
	LINE_NUMBER(2434);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	sp[0].o = (jobject)((mindustry_core_GameState *) NULL_CHECK(sp[0].o))->F_rules;
	sp[0].o = (jobject)((mindustry_game_Rules *) NULL_CHECK(sp[0].o))->F_sector;
	if (sp[0].o == nullptr) goto label_126;
	}
	{
	sp[0].o = (jobject)((func_mindustry_gen_LegsUnit_team_R_mindustry_game_Team) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_gen_LegsUnit_team_R_mindustry_game_Team])(ctx, (frame[0].o));
	clinit_mindustry_Vars(ctx);
	sp[1].o = (jobject)SF_mindustry_Vars_state;
	sp[1].o = (jobject)((mindustry_core_GameState *) NULL_CHECK(sp[1].o))->F_rules;
	sp[1].o = (jobject)((mindustry_game_Rules *) NULL_CHECK(sp[1].o))->F_defaultTeam;
	if (sp[0].o != sp[1].o) goto label_126;
	}
	{
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	sp[0].o = (jobject)((mindustry_core_GameState *) NULL_CHECK(sp[0].o))->F_rules;
	sp[0].o = (jobject)((mindustry_game_Rules *) NULL_CHECK(sp[0].o))->F_sector;
	sp[0].o = (jobject)((mindustry_type_Sector *) NULL_CHECK(sp[0].o))->F_info;
	((func_mindustry_game_SectorInfo_handleProduction_mindustry_type_Item_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_game_SectorInfo_handleProduction_mindustry_type_Item_int])(ctx, sp[0].o, (frame[2].o), (jint(1)));
	}
label_126:;
	{
	LINE_NUMBER(2435);
	if ((frame[1].o) == nullptr) goto label_127;
	}
	{
	jint temp0 = (jint)((func_mindustry_gen_LegsUnit_within_arc_math_geom_Position_float_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_gen_LegsUnit_within_arc_math_geom_Position_float_R_boolean])(ctx, (frame[0].o), (frame[1].o), (jfloat(220.0f)));
	if (temp0 == 0) goto label_127;
	}
	{
	jint temp0 = (jint)((func_mindustry_gen_Building_acceptStack_mindustry_type_Item_int_mindustry_gen_Teamc_R_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_gen_Building_acceptStack_mindustry_type_Item_int_mindustry_gen_Teamc_R_int])(ctx, (frame[1].o), (frame[2].o), (jint(1)), (frame[0].o));
	if (temp0 != (jint(1))) goto label_127;
	}
	{
	jint temp0 = (jint)((func_mindustry_gen_LegsUnit_offloadImmediately_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_gen_LegsUnit_offloadImmediately_R_boolean])(ctx, (frame[0].o));
	if (temp0 == 0) goto label_127;
	}
	{
	LINE_NUMBER(2436);
	sp[0].o = (jobject)((func_mindustry_gen_LegsUnit_item_R_mindustry_type_Item) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_gen_LegsUnit_item_R_mindustry_type_Item])(ctx, (frame[0].o));
	if (sp[0].o != (frame[2].o)) goto label_129;
	}
	{
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_net;
	jint temp0 = (jint)((func_mindustry_net_Net_client_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_net_Net_client_R_boolean])(ctx, sp[0].o);
	if (temp0 != 0) goto label_129;
	}
	{
	((func_mindustry_gen_LegsUnit_addItem_mindustry_type_Item) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_gen_LegsUnit_addItem_mindustry_type_Item])(ctx, (frame[0].o), (frame[2].o));
	}
label_129:;
	{
	LINE_NUMBER(2437);
	sp[0].o = frame[0].o;
	sp[1].o = frame[2].o;
	jint temp0 = jint(1);
	sp[2].o = (jobject)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_mineTile;
	jfloat temp1 = (jfloat)((func_mindustry_world_Tile_worldx_R_float) ((void **) nullCheck(ctx, sp[2].o)->vtable)[VTABLE_mindustry_world_Tile_worldx_R_float])(ctx, sp[2].o);
	jfloat temp2 = (jfloat)SM_arc_math_Mathf_range_float_R_float(ctx, (jfloat(4.0f)));
	jfloat temp3 = temp1 + temp2;
	sp[2].o = (jobject)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_mineTile;
	jfloat temp4 = (jfloat)((func_mindustry_world_Tile_worldy_R_float) ((void **) nullCheck(ctx, sp[2].o)->vtable)[VTABLE_mindustry_world_Tile_worldy_R_float])(ctx, sp[2].o);
	jfloat temp5 = (jfloat)SM_arc_math_Mathf_range_float_R_float(ctx, (jfloat(4.0f)));
	SM_mindustry_gen_Call_transferItemTo_mindustry_gen_Unit_mindustry_type_Item_int_float_float_mindustry_gen_Building(ctx, sp[0].o, sp[1].o, temp0, temp3, (temp4 + temp5), (frame[1].o));
	goto label_123;
	}
label_127:;
	{
	LINE_NUMBER(2438);
	jint temp0 = (jint)((func_mindustry_gen_LegsUnit_acceptsItem_mindustry_type_Item_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_gen_LegsUnit_acceptsItem_mindustry_type_Item_R_boolean])(ctx, (frame[0].o), (frame[2].o));
	if (temp0 == 0) goto label_130;
	}
	{
	LINE_NUMBER(2439);
	sp[0].o = frame[2].o;
	sp[1].o = (jobject)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_mineTile;
	jfloat temp0 = (jfloat)((func_mindustry_world_Tile_worldx_R_float) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_mindustry_world_Tile_worldx_R_float])(ctx, sp[1].o);
	jfloat temp1 = (jfloat)SM_arc_math_Mathf_range_float_R_float(ctx, (jfloat(4.0f)));
	jfloat temp2 = temp0 + temp1;
	sp[1].o = (jobject)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_mineTile;
	jfloat temp3 = (jfloat)((func_mindustry_world_Tile_worldy_R_float) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_mindustry_world_Tile_worldy_R_float])(ctx, sp[1].o);
	jfloat temp4 = (jfloat)SM_arc_math_Mathf_range_float_R_float(ctx, (jfloat(4.0f)));
	SM_mindustry_input_InputHandler_transferItemToUnit_mindustry_type_Item_float_float_mindustry_gen_Itemsc(ctx, sp[0].o, temp2, (temp3 + temp4), (frame[0].o));
	goto label_123;
	}
label_130:;
	{
	LINE_NUMBER(2441);
	((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_mineTile = (jref) (jobject(nullptr));
	LINE_NUMBER(2442);
	((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_mineTimer = (jfloat(0));
	}
label_123:;
	{
	LINE_NUMBER(2445);
	if ((clinit_mindustry_Vars(ctx), (jint)SF_mindustry_Vars_headless) != 0) goto label_104;
	}
	{
	LINE_NUMBER(2446);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_control;
	sp[0].o = (jobject)((mindustry_core_Control *) NULL_CHECK(sp[0].o))->F_sound;
	sp[1].o = (jobject)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_type;
	sp[1].o = (jobject)((mindustry_type_UnitType *) NULL_CHECK(sp[1].o))->F_mineSound;
	sp[2].o = frame[0].o;
	sp[3].o = (jobject)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_type;
	((func_mindustry_audio_SoundControl_loop_arc_audio_Sound_arc_math_geom_Position_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_audio_SoundControl_loop_arc_audio_Sound_arc_math_geom_Position_float])(ctx, sp[0].o, sp[1].o, sp[2].o, ((jfloat)((mindustry_type_UnitType *) NULL_CHECK(sp[3].o))->F_mineSoundVolume));
	}
label_104:;
	{
	LINE_NUMBER(2452);
	sp[0].o = frame[0].o;
	((mindustry_gen_Unit *) NULL_CHECK(sp[0].o))->F_shieldAlpha = (((jfloat)((mindustry_gen_Unit *) NULL_CHECK(sp[0].o))->F_shieldAlpha) - ((clinit_arc_util_Time(ctx), (jfloat)SF_arc_util_Time_delta) / (jfloat(15.0f))));
	LINE_NUMBER(2453);
	if ((floatCompare(((jfloat)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_shieldAlpha), (jfloat(0)), 1)) >= 0) goto label_135;
	}
	{
	((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_shieldAlpha = (jfloat(0));
	}
label_135:;
	{
	LINE_NUMBER(2457);
	sp[0].o = (jobject)((func_mindustry_gen_LegsUnit_floorOn_R_mindustry_world_blocks_environment_Floor) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_gen_LegsUnit_floorOn_R_mindustry_world_blocks_environment_Floor])(ctx, (frame[0].o));
	frame[1].o = sp[0].o;
	LINE_NUMBER(2458);
	jint temp0 = (jint)((func_mindustry_gen_LegsUnit_isGrounded_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_gen_LegsUnit_isGrounded_R_boolean])(ctx, (frame[0].o));
	if (temp0 == 0) goto label_137;
	}
	{
	sp[0].o = (jobject)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_type;
	if (((jint)((mindustry_type_UnitType *) NULL_CHECK(sp[0].o))->F_hovering) != 0) goto label_137;
	}
	{
	LINE_NUMBER(2459);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((mindustry_world_blocks_environment_Floor *) NULL_CHECK((frame[1].o)))->F_status;
	((func_mindustry_gen_LegsUnit_apply_mindustry_type_StatusEffect_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_gen_LegsUnit_apply_mindustry_type_StatusEffect_float])(ctx, sp[0].o, sp[1].o, ((jfloat)((mindustry_world_blocks_environment_Floor *) NULL_CHECK((frame[1].o)))->F_statusDuration));
	}
label_137:;
	{
	LINE_NUMBER(2461);
	sp[0].o = (jobject)((mindustry_gen_LegsUnit *) NULL_CHECK((frame[0].o)))->F_applied;
	((func_arc_struct_Bits_clear) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Bits_clear])(ctx, sp[0].o);
	LINE_NUMBER(2462);
	((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_armorOverride = (jfloat(-1.0f));
	LINE_NUMBER(2463);
	sp[0].o = frame[0].o;
	sp[1].o = frame[0].o;
	sp[2].o = frame[0].o;
	sp[3].o = frame[0].o;
	sp[4].o = frame[0].o;
	sp[5].o = frame[0].o;
	jfloat temp0 = jfloat(1);
	((mindustry_gen_Unit *) NULL_CHECK(sp[5].o))->F_dragMultiplier = temp0;
	((mindustry_gen_Unit *) NULL_CHECK(sp[4].o))->F_buildSpeedMultiplier = temp0;
	((mindustry_gen_Unit *) NULL_CHECK(sp[3].o))->F_reloadMultiplier = temp0;
	((mindustry_gen_Unit *) NULL_CHECK(sp[2].o))->F_healthMultiplier = temp0;
	((mindustry_gen_Unit *) NULL_CHECK(sp[1].o))->F_damageMultiplier = temp0;
	((mindustry_gen_Unit *) NULL_CHECK(sp[0].o))->F_speedMultiplier = temp0;
	LINE_NUMBER(2464);
	((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_disarmed = (jint(0));
	LINE_NUMBER(2465);
	sp[0].o = (jobject)((mindustry_gen_LegsUnit *) NULL_CHECK((frame[0].o)))->F_statuses;
	jint temp11 = (jint)((func_arc_struct_Seq_isEmpty_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_isEmpty_R_boolean])(ctx, sp[0].o);
	if (temp11 == 0) goto label_143;
	}
	goto label_144;
label_143:;
	{
	LINE_NUMBER(2466);
	frame[2].i = (jint(0));
	}
label_145:;
	{
	LINE_NUMBER(2467);
	jint temp0 = frame[2].i;
	sp[0].o = (jobject)((mindustry_gen_LegsUnit *) NULL_CHECK((frame[0].o)))->F_statuses;
	if (temp0 >= ((jint)((arc_struct_Seq *) NULL_CHECK(sp[0].o))->F_size)) goto label_144;
	}
	{
	LINE_NUMBER(2468);
	sp[0].o = (jobject)((mindustry_gen_LegsUnit *) NULL_CHECK((frame[0].o)))->F_statuses;
	jint temp0 = frame[2].i;
	INST_IINC(2, 1);
	sp[0].o = (jobject)((func_arc_struct_Seq_get_int_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_get_int_R_java_lang_Object])(ctx, sp[0].o, temp0);
	frame[3].o = (checkCast(ctx, &class_mindustry_entities_units_StatusEntry, sp[0].o));
	LINE_NUMBER(2469);
	sp[0].o = frame[3].o;
	jfloat temp1 = (jfloat)SM_java_lang_Math_max_float_float_R_float(ctx, (((jfloat)((mindustry_entities_units_StatusEntry *) NULL_CHECK((frame[3].o)))->F_time) - (clinit_arc_util_Time(ctx), (jfloat)SF_arc_util_Time_delta)), (jfloat(0)));
	((mindustry_entities_units_StatusEntry *) NULL_CHECK(sp[0].o))->F_time = temp1;
	LINE_NUMBER(2470);
	sp[0].o = (jobject)((mindustry_entities_units_StatusEntry *) NULL_CHECK((frame[3].o)))->F_effect;
	if (sp[0].o == nullptr) goto label_149;
	}
	{
	if ((floatCompare(((jfloat)((mindustry_entities_units_StatusEntry *) NULL_CHECK((frame[3].o)))->F_time), (jfloat(0)), 1)) > 0) goto label_150;
	}
	{
	sp[0].o = (jobject)((mindustry_entities_units_StatusEntry *) NULL_CHECK((frame[3].o)))->F_effect;
	if (((jint)((mindustry_type_StatusEffect *) NULL_CHECK(sp[0].o))->F_permanent) != 0) goto label_150;
	}
label_149:;
	{
	LINE_NUMBER(2471);
	sp[0].o = (jobject)((mindustry_entities_units_StatusEntry *) NULL_CHECK((frame[3].o)))->F_effect;
	if (sp[0].o == nullptr) goto label_151;
	}
	{
	LINE_NUMBER(2472);
	sp[0].o = (jobject)((mindustry_entities_units_StatusEntry *) NULL_CHECK((frame[3].o)))->F_effect;
	((func_mindustry_type_StatusEffect_onRemoved_mindustry_gen_Unit) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_type_StatusEffect_onRemoved_mindustry_gen_Unit])(ctx, sp[0].o, (frame[0].o));
	}
label_151:;
	{
	LINE_NUMBER(2474);
	SM_arc_util_pooling_Pools_free_java_lang_Object(ctx, (frame[3].o));
	LINE_NUMBER(2475);
	INST_IINC(2, -1);
	LINE_NUMBER(2476);
	sp[0].o = (jobject)((mindustry_gen_LegsUnit *) NULL_CHECK((frame[0].o)))->F_statuses;
	sp[0].o = (jobject)((func_arc_struct_Seq_remove_int_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_remove_int_R_java_lang_Object])(ctx, sp[0].o, (frame[2].i));
	goto label_155;
	}
label_150:;
	{
	LINE_NUMBER(2478);
	sp[0].o = (jobject)((mindustry_gen_LegsUnit *) NULL_CHECK((frame[0].o)))->F_applied;
	sp[1].o = (jobject)((mindustry_entities_units_StatusEntry *) NULL_CHECK((frame[3].o)))->F_effect;
	((func_arc_struct_Bits_set_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Bits_set_int])(ctx, sp[0].o, ((jint)((mindustry_ctype_Content *) NULL_CHECK(sp[1].o))->F_id));
	LINE_NUMBER(2479);
	sp[0].o = (jobject)((mindustry_entities_units_StatusEntry *) NULL_CHECK((frame[3].o)))->F_effect;
	if (((jint)((mindustry_type_StatusEffect *) NULL_CHECK(sp[0].o))->F_dynamic) == 0) goto label_157;
	}
	{
	LINE_NUMBER(2480);
	sp[0].o = frame[0].o;
	((mindustry_gen_Unit *) NULL_CHECK(sp[0].o))->F_speedMultiplier = (((jfloat)((mindustry_gen_Unit *) NULL_CHECK(sp[0].o))->F_speedMultiplier) * ((jfloat)((mindustry_entities_units_StatusEntry *) NULL_CHECK((frame[3].o)))->F_speedMultiplier));
	LINE_NUMBER(2481);
	sp[0].o = frame[0].o;
	((mindustry_gen_Unit *) NULL_CHECK(sp[0].o))->F_healthMultiplier = (((jfloat)((mindustry_gen_Unit *) NULL_CHECK(sp[0].o))->F_healthMultiplier) * ((jfloat)((mindustry_entities_units_StatusEntry *) NULL_CHECK((frame[3].o)))->F_healthMultiplier));
	LINE_NUMBER(2482);
	sp[0].o = frame[0].o;
	((mindustry_gen_Unit *) NULL_CHECK(sp[0].o))->F_damageMultiplier = (((jfloat)((mindustry_gen_Unit *) NULL_CHECK(sp[0].o))->F_damageMultiplier) * ((jfloat)((mindustry_entities_units_StatusEntry *) NULL_CHECK((frame[3].o)))->F_damageMultiplier));
	LINE_NUMBER(2483);
	sp[0].o = frame[0].o;
	((mindustry_gen_Unit *) NULL_CHECK(sp[0].o))->F_reloadMultiplier = (((jfloat)((mindustry_gen_Unit *) NULL_CHECK(sp[0].o))->F_reloadMultiplier) * ((jfloat)((mindustry_entities_units_StatusEntry *) NULL_CHECK((frame[3].o)))->F_reloadMultiplier));
	LINE_NUMBER(2484);
	sp[0].o = frame[0].o;
	((mindustry_gen_Unit *) NULL_CHECK(sp[0].o))->F_buildSpeedMultiplier = (((jfloat)((mindustry_gen_Unit *) NULL_CHECK(sp[0].o))->F_buildSpeedMultiplier) * ((jfloat)((mindustry_entities_units_StatusEntry *) NULL_CHECK((frame[3].o)))->F_buildSpeedMultiplier));
	LINE_NUMBER(2485);
	sp[0].o = frame[0].o;
	((mindustry_gen_Unit *) NULL_CHECK(sp[0].o))->F_dragMultiplier = (((jfloat)((mindustry_gen_Unit *) NULL_CHECK(sp[0].o))->F_dragMultiplier) * ((jfloat)((mindustry_entities_units_StatusEntry *) NULL_CHECK((frame[3].o)))->F_dragMultiplier));
	LINE_NUMBER(2486);
	if ((floatCompare(((jfloat)((mindustry_entities_units_StatusEntry *) NULL_CHECK((frame[3].o)))->F_armorOverride), (jfloat(0)), -1)) < 0) goto label_165;
	}
	{
	((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_armorOverride = ((jfloat)((mindustry_entities_units_StatusEntry *) NULL_CHECK((frame[3].o)))->F_armorOverride);
	goto label_165;
	}
label_157:;
	{
	LINE_NUMBER(2488);
	sp[0].o = frame[0].o;
	jfloat temp0 = (jfloat)((mindustry_gen_Unit *) NULL_CHECK(sp[0].o))->F_speedMultiplier;
	sp[1].o = (jobject)((mindustry_entities_units_StatusEntry *) NULL_CHECK((frame[3].o)))->F_effect;
	((mindustry_gen_Unit *) NULL_CHECK(sp[0].o))->F_speedMultiplier = (temp0 * ((jfloat)((mindustry_type_StatusEffect *) NULL_CHECK(sp[1].o))->F_speedMultiplier));
	LINE_NUMBER(2489);
	sp[0].o = frame[0].o;
	jfloat temp1 = (jfloat)((mindustry_gen_Unit *) NULL_CHECK(sp[0].o))->F_healthMultiplier;
	sp[1].o = (jobject)((mindustry_entities_units_StatusEntry *) NULL_CHECK((frame[3].o)))->F_effect;
	((mindustry_gen_Unit *) NULL_CHECK(sp[0].o))->F_healthMultiplier = (temp1 * ((jfloat)((mindustry_type_StatusEffect *) NULL_CHECK(sp[1].o))->F_healthMultiplier));
	LINE_NUMBER(2490);
	sp[0].o = frame[0].o;
	jfloat temp2 = (jfloat)((mindustry_gen_Unit *) NULL_CHECK(sp[0].o))->F_damageMultiplier;
	sp[1].o = (jobject)((mindustry_entities_units_StatusEntry *) NULL_CHECK((frame[3].o)))->F_effect;
	((mindustry_gen_Unit *) NULL_CHECK(sp[0].o))->F_damageMultiplier = (temp2 * ((jfloat)((mindustry_type_StatusEffect *) NULL_CHECK(sp[1].o))->F_damageMultiplier));
	LINE_NUMBER(2491);
	sp[0].o = frame[0].o;
	jfloat temp3 = (jfloat)((mindustry_gen_Unit *) NULL_CHECK(sp[0].o))->F_reloadMultiplier;
	sp[1].o = (jobject)((mindustry_entities_units_StatusEntry *) NULL_CHECK((frame[3].o)))->F_effect;
	((mindustry_gen_Unit *) NULL_CHECK(sp[0].o))->F_reloadMultiplier = (temp3 * ((jfloat)((mindustry_type_StatusEffect *) NULL_CHECK(sp[1].o))->F_reloadMultiplier));
	LINE_NUMBER(2492);
	sp[0].o = frame[0].o;
	jfloat temp4 = (jfloat)((mindustry_gen_Unit *) NULL_CHECK(sp[0].o))->F_buildSpeedMultiplier;
	sp[1].o = (jobject)((mindustry_entities_units_StatusEntry *) NULL_CHECK((frame[3].o)))->F_effect;
	((mindustry_gen_Unit *) NULL_CHECK(sp[0].o))->F_buildSpeedMultiplier = (temp4 * ((jfloat)((mindustry_type_StatusEffect *) NULL_CHECK(sp[1].o))->F_buildSpeedMultiplier));
	LINE_NUMBER(2493);
	sp[0].o = frame[0].o;
	jfloat temp5 = (jfloat)((mindustry_gen_Unit *) NULL_CHECK(sp[0].o))->F_dragMultiplier;
	sp[1].o = (jobject)((mindustry_entities_units_StatusEntry *) NULL_CHECK((frame[3].o)))->F_effect;
	((mindustry_gen_Unit *) NULL_CHECK(sp[0].o))->F_dragMultiplier = (temp5 * ((jfloat)((mindustry_type_StatusEffect *) NULL_CHECK(sp[1].o))->F_dragMultiplier));
	}
label_165:;
	{
	LINE_NUMBER(2495);
	sp[0].o = frame[0].o;
	jint temp0 = (jint)((mindustry_gen_Unit *) NULL_CHECK(sp[0].o))->F_disarmed;
	sp[1].o = (jobject)((mindustry_entities_units_StatusEntry *) NULL_CHECK((frame[3].o)))->F_effect;
	((mindustry_gen_Unit *) NULL_CHECK(sp[0].o))->F_disarmed = (temp0 | ((jint)((mindustry_type_StatusEffect *) NULL_CHECK(sp[1].o))->F_disarm));
	LINE_NUMBER(2496);
	sp[0].o = (jobject)((mindustry_entities_units_StatusEntry *) NULL_CHECK((frame[3].o)))->F_effect;
	((func_mindustry_type_StatusEffect_update_mindustry_gen_Unit_mindustry_entities_units_StatusEntry) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_type_StatusEffect_update_mindustry_gen_Unit_mindustry_entities_units_StatusEntry])(ctx, sp[0].o, (frame[0].o), (frame[3].o));
	}
label_155:;
	LINE_NUMBER(2498);
	goto label_145;
label_144:;
	{
	LINE_NUMBER(2502);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_net;
	jint temp0 = (jint)((func_mindustry_net_Net_client_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_net_Net_client_R_boolean])(ctx, sp[0].o);
	if (temp0 == 0) goto label_172;
	}
	{
	jint temp0 = (jint)((func_mindustry_gen_LegsUnit_isLocal_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_gen_LegsUnit_isLocal_R_boolean])(ctx, (frame[0].o));
	if (temp0 == 0) goto label_173;
	}
label_172:;
	{
	jint temp0 = (jint)((func_mindustry_gen_LegsUnit_isRemote_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_gen_LegsUnit_isRemote_R_boolean])(ctx, (frame[0].o));
	if (temp0 == 0) goto label_174;
	}
label_173:;
	{
	LINE_NUMBER(2503);
	((func_mindustry_gen_LegsUnit_interpolate) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_gen_LegsUnit_interpolate])(ctx, (frame[0].o));
	}
label_174:;
	{
	LINE_NUMBER(2508);
	sp[0].o = (jobject)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_type;
	((func_mindustry_type_UnitType_update_mindustry_gen_Unit) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_type_UnitType_update_mindustry_gen_Unit])(ctx, sp[0].o, (frame[0].o));
	LINE_NUMBER(2509);
	jint temp0 = (jint)SM_java_lang_Float_isNaN_float_R_boolean(ctx, ((jfloat)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_x));
	if (temp0 != 0) goto label_176;
	}
	{
	jint temp0 = (jint)SM_java_lang_Float_isNaN_float_R_boolean(ctx, ((jfloat)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_y));
	if (temp0 == 0) goto label_177;
	}
label_176:;
	{
	LINE_NUMBER(2510);
	((func_mindustry_gen_LegsUnit_remove) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_gen_LegsUnit_remove])(ctx, (frame[0].o));
	LINE_NUMBER(2511);
	goto label_179;
	}
label_177:;
	{
	LINE_NUMBER(2513);
	sp[0].o = (jobject)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_type;
	if (((jint)((mindustry_type_UnitType *) NULL_CHECK(sp[0].o))->F_bounded) == 0) goto label_180;
	}
	{
	LINE_NUMBER(2514);
	frame[1].f = (jfloat(0));
	LINE_NUMBER(2515);
	frame[2].f = (jfloat(0));
	LINE_NUMBER(2516);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_world;
	jint temp0 = (jint)((func_mindustry_core_World_unitHeight_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_World_unitHeight_R_int])(ctx, sp[0].o);
	frame[3].f = (jfloat(temp0));
	LINE_NUMBER(2517);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_world;
	jint temp1 = (jint)((func_mindustry_core_World_unitWidth_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_World_unitWidth_R_int])(ctx, sp[0].o);
	frame[4].f = (jfloat(temp1));
	LINE_NUMBER(2518);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	sp[0].o = (jobject)((mindustry_core_GameState *) NULL_CHECK(sp[0].o))->F_rules;
	if (((jint)((mindustry_game_Rules *) NULL_CHECK(sp[0].o))->F_limitMapArea) == 0) goto label_186;
	}
	{
	sp[0].o = (jobject)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_team;
	jint temp0 = (jint)((func_mindustry_game_Team_isAI_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_game_Team_isAI_R_boolean])(ctx, sp[0].o);
	if (temp0 != 0) goto label_186;
	}
	{
	LINE_NUMBER(2519);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	sp[0].o = (jobject)((mindustry_core_GameState *) NULL_CHECK(sp[0].o))->F_rules;
	frame[1].f = (jfloat((((jint)((mindustry_game_Rules *) NULL_CHECK(sp[0].o))->F_limitY) * (8))));
	LINE_NUMBER(2520);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	sp[0].o = (jobject)((mindustry_core_GameState *) NULL_CHECK(sp[0].o))->F_rules;
	frame[2].f = (jfloat((((jint)((mindustry_game_Rules *) NULL_CHECK(sp[0].o))->F_limitX) * (8))));
	LINE_NUMBER(2521);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	sp[0].o = (jobject)((mindustry_core_GameState *) NULL_CHECK(sp[0].o))->F_rules;
	frame[3].f = ((jfloat((((jint)((mindustry_game_Rules *) NULL_CHECK(sp[0].o))->F_limitHeight) * (8)))) + (frame[1].f));
	LINE_NUMBER(2522);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	sp[0].o = (jobject)((mindustry_core_GameState *) NULL_CHECK(sp[0].o))->F_rules;
	frame[4].f = ((jfloat((((jint)((mindustry_game_Rules *) NULL_CHECK(sp[0].o))->F_limitWidth) * (8)))) + (frame[2].f));
	}
label_186:;
	{
	LINE_NUMBER(2524);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_net;
	jint temp0 = (jint)((func_mindustry_net_Net_client_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_net_Net_client_R_boolean])(ctx, sp[0].o);
	if (temp0 == 0) goto label_191;
	}
	{
	jint temp0 = (jint)((func_mindustry_gen_LegsUnit_isLocal_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_gen_LegsUnit_isLocal_R_boolean])(ctx, (frame[0].o));
	if (temp0 == 0) goto label_192;
	}
label_191:;
	{
	LINE_NUMBER(2525);
	frame[5].f = (jfloat(0));
	LINE_NUMBER(2526);
	frame[6].f = (jfloat(0));
	LINE_NUMBER(2527);
	if ((floatCompare(((jfloat)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_x), (frame[2].f), 1)) >= 0) goto label_195;
	}
	{
	frame[5].f = ((frame[5].f) + ((-(((jfloat)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_x) - (frame[2].f))) / (jfloat(8.0f))));
	}
label_195:;
	{
	LINE_NUMBER(2528);
	if ((floatCompare(((jfloat)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_y), (frame[1].f), 1)) >= 0) goto label_196;
	}
	{
	frame[6].f = ((frame[6].f) + ((-(((jfloat)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_y) - (frame[1].f))) / (jfloat(8.0f))));
	}
label_196:;
	{
	LINE_NUMBER(2529);
	if ((floatCompare(((jfloat)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_x), ((frame[4].f) - (jfloat(8.0f))), -1)) <= 0) goto label_197;
	}
	{
	frame[5].f = ((frame[5].f) - ((((jfloat)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_x) - ((frame[4].f) - (jfloat(8.0f)))) / (jfloat(8.0f))));
	}
label_197:;
	{
	LINE_NUMBER(2530);
	if ((floatCompare(((jfloat)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_y), ((frame[3].f) - (jfloat(8.0f))), -1)) <= 0) goto label_198;
	}
	{
	frame[6].f = ((frame[6].f) - ((((jfloat)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_y) - ((frame[3].f) - (jfloat(8.0f)))) / (jfloat(8.0f))));
	}
label_198:;
	{
	LINE_NUMBER(2531);
	jfloat temp0 = jfloat(10.0f);
	jfloat temp1 = (jfloat)SM_java_lang_Math_max_float_float_R_float(ctx, (clinit_arc_util_Time(ctx), (jfloat)SF_arc_util_Time_delta), (jfloat(1)));
	frame[7].f = (temp0 / temp1);
	LINE_NUMBER(2532);
	sp[0].o = frame[0].o;
	jfloat temp2 = (jfloat)SM_arc_math_Mathf_clamp_float_float_float_R_float(ctx, ((frame[5].f) * (clinit_arc_util_Time(ctx), (jfloat)SF_arc_util_Time_delta)), (-(frame[7].f)), (frame[7].f));
	jfloat temp3 = (jfloat)SM_arc_math_Mathf_clamp_float_float_float_R_float(ctx, ((frame[6].f) * (clinit_arc_util_Time(ctx), (jfloat)SF_arc_util_Time_delta)), (-(frame[7].f)), (frame[7].f));
	((func_mindustry_gen_LegsUnit_velAddNet_float_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_gen_LegsUnit_velAddNet_float_float])(ctx, sp[0].o, temp2, temp3);
	LINE_NUMBER(2533);
	frame[8].f = (jfloat(8.0f));
	LINE_NUMBER(2534);
	sp[0].o = frame[0].o;
	jfloat temp4 = (jfloat)SM_arc_math_Mathf_clamp_float_float_float_R_float(ctx, ((jfloat)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_x), ((frame[2].f) - (frame[8].f)), (((frame[4].f) - (jfloat(8.0f))) + (frame[8].f)));
	((mindustry_gen_Unit *) NULL_CHECK(sp[0].o))->F_x = temp4;
	LINE_NUMBER(2535);
	sp[0].o = frame[0].o;
	jfloat temp5 = (jfloat)SM_arc_math_Mathf_clamp_float_float_float_R_float(ctx, ((jfloat)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_y), ((frame[1].f) - (frame[8].f)), (((frame[3].f) - (jfloat(8.0f))) + (frame[8].f)));
	((mindustry_gen_Unit *) NULL_CHECK(sp[0].o))->F_y = temp5;
	}
label_192:;
	{
	LINE_NUMBER(2537);
	jint temp0 = (jint)((func_mindustry_gen_LegsUnit_isGrounded_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_gen_LegsUnit_isGrounded_R_boolean])(ctx, (frame[0].o));
	if (temp0 == 0) goto label_203;
	}
	{
	LINE_NUMBER(2538);
	sp[0].o = frame[0].o;
	jfloat temp0 = (jfloat)SM_arc_math_Mathf_clamp_float_float_float_R_float(ctx, ((jfloat)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_x), (frame[2].f), ((frame[4].f) - (jfloat(8.0f))));
	((mindustry_gen_Unit *) NULL_CHECK(sp[0].o))->F_x = temp0;
	LINE_NUMBER(2539);
	sp[0].o = frame[0].o;
	jfloat temp1 = (jfloat)SM_arc_math_Mathf_clamp_float_float_float_R_float(ctx, ((jfloat)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_y), (frame[1].f), ((frame[3].f) - (jfloat(8.0f))));
	((mindustry_gen_Unit *) NULL_CHECK(sp[0].o))->F_y = temp1;
	}
label_203:;
	{
	LINE_NUMBER(2541);
	if ((floatCompare(((jfloat)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_x), ((jfloat(-250.0f)) + (frame[2].f)), 1)) < 0) goto label_206;
	}
	{
	if ((floatCompare(((jfloat)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_y), ((jfloat(-250.0f)) + (frame[1].f)), 1)) < 0) goto label_206;
	}
	{
	if ((floatCompare(((jfloat)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_x), ((frame[4].f) + (jfloat(250.0f))), -1)) >= 0) goto label_206;
	}
	{
	if ((floatCompare(((jfloat)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_y), ((frame[3].f) + (jfloat(250.0f))), -1)) < 0) goto label_180;
	}
label_206:;
	{
	LINE_NUMBER(2542);
	((func_mindustry_gen_LegsUnit_kill) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_gen_LegsUnit_kill])(ctx, (frame[0].o));
	}
label_180:;
	{
	LINE_NUMBER(2545);
	jint temp0 = (jint)SM_java_lang_Float_isNaN_float_R_boolean(ctx, ((jfloat)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_health));
	if (temp0 == 0) goto label_207;
	}
	{
	LINE_NUMBER(2546);
	((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_health = (jfloat(0));
	LINE_NUMBER(2547);
	((func_mindustry_gen_LegsUnit_kill) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_gen_LegsUnit_kill])(ctx, (frame[0].o));
	}
label_207:;
	{
	LINE_NUMBER(2549);
	sp[0].o = (jobject)((func_mindustry_gen_LegsUnit_floorOn_R_mindustry_world_blocks_environment_Floor) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_gen_LegsUnit_floorOn_R_mindustry_world_blocks_environment_Floor])(ctx, (frame[0].o));
	frame[1].o = sp[0].o;
	LINE_NUMBER(2550);
	sp[0].o = (jobject)((func_mindustry_gen_LegsUnit_tileOn_R_mindustry_world_Tile) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_gen_LegsUnit_tileOn_R_mindustry_world_Tile])(ctx, (frame[0].o));
	frame[2].o = sp[0].o;
	LINE_NUMBER(2551);
	jint temp0 = (jint)((func_mindustry_gen_LegsUnit_isFlying_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_gen_LegsUnit_isFlying_R_boolean])(ctx, (frame[0].o));
	if (temp0 == ((jint)((mindustry_gen_LegsUnit *) NULL_CHECK((frame[0].o)))->F_wasFlying)) goto label_212;
	}
	{
	LINE_NUMBER(2552);
	if (((jint)((mindustry_gen_LegsUnit *) NULL_CHECK((frame[0].o)))->F_wasFlying) == 0) goto label_214;
	}
	{
	LINE_NUMBER(2553);
	if ((frame[2].o) == nullptr) goto label_214;
	}
	{
	LINE_NUMBER(2554);
	clinit_mindustry_content_Fx(ctx);
	sp[0].o = (jobject)SF_mindustry_content_Fx_unitLand;
	jfloat temp0 = (jfloat)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_x;
	jfloat temp1 = (jfloat)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_y;
	sp[1].f = temp0;
	sp[2].f = temp1;
	sp += 3;
	if (((jint)((mindustry_world_blocks_environment_Floor *) NULL_CHECK((frame[1].o)))->F_isLiquid) == 0) goto label_217;
	}
	INST_FCONST(1);
	goto label_218;
label_217:;
	(sp++)->f = jfloat(0.5f);
label_218:;
	{
	sp -= 4;
	sp[4].o = (jobject)((func_mindustry_world_Tile_getFloorColor_R_arc_graphics_Color) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_mindustry_world_Tile_getFloorColor_R_arc_graphics_Color])(ctx, (frame[2].o));
	((func_mindustry_entities_Effect_at_float_float_float_arc_graphics_Color) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_entities_Effect_at_float_float_float_arc_graphics_Color])(ctx, sp[0].o, sp[1].f, sp[2].f, sp[3].f, sp[4].o);
	}
label_214:;
	{
	LINE_NUMBER(2557);
	sp[0].o = frame[0].o;
	jint temp0 = (jint)((func_mindustry_gen_LegsUnit_isFlying_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_gen_LegsUnit_isFlying_R_boolean])(ctx, (frame[0].o));
	((mindustry_gen_LegsUnit *) NULL_CHECK(sp[0].o))->F_wasFlying = temp0;
	}
label_212:;
	{
	LINE_NUMBER(2559);
	sp[0].o = (jobject)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_type;
	if (((jint)((mindustry_type_UnitType *) NULL_CHECK(sp[0].o))->F_hovering) != 0) goto label_219;
	}
	{
	jint temp0 = (jint)((func_mindustry_gen_LegsUnit_isGrounded_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_gen_LegsUnit_isGrounded_R_boolean])(ctx, (frame[0].o));
	if (temp0 == 0) goto label_219;
	}
	{
	sp[0].o = (jobject)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_type;
	if (((jint)((mindustry_type_UnitType *) NULL_CHECK(sp[0].o))->F_emitWalkEffect) == 0) goto label_219;
	}
	{
	LINE_NUMBER(2560);
	sp[0].o = frame[0].o;
	jfloat temp0 = (jfloat)((mindustry_gen_Unit *) NULL_CHECK(sp[0].o))->F_splashTimer;
	jfloat temp1 = (jfloat)((func_mindustry_gen_LegsUnit_deltaX_R_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_gen_LegsUnit_deltaX_R_float])(ctx, (frame[0].o));
	jfloat temp2 = (jfloat)((func_mindustry_gen_LegsUnit_deltaY_R_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_gen_LegsUnit_deltaY_R_float])(ctx, (frame[0].o));
	jfloat temp3 = (jfloat)SM_arc_math_Mathf_dst_float_float_R_float(ctx, temp1, temp2);
	jfloat temp4 = temp0 + temp3;
	((mindustry_gen_Unit *) NULL_CHECK(sp[0].o))->F_splashTimer = temp4;
	jfloat temp7 = jfloat(7.0f);
	jfloat temp8 = (jfloat)((func_mindustry_gen_LegsUnit_hitSize_R_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_gen_LegsUnit_hitSize_R_float])(ctx, (frame[0].o));
	if ((floatCompare(temp4, (temp7 + (temp8 / (jfloat(8.0f)))), -1)) < 0) goto label_219;
	}
	{
	LINE_NUMBER(2561);
	sp[0].o = (jobject)((mindustry_world_blocks_environment_Floor *) NULL_CHECK((frame[1].o)))->F_walkEffect;
	jfloat temp0 = (jfloat)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_x;
	jfloat temp1 = (jfloat)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_y;
	jfloat temp2 = (jfloat)((func_mindustry_gen_LegsUnit_hitSize_R_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_gen_LegsUnit_hitSize_R_float])(ctx, (frame[0].o));
	jfloat temp3 = temp2 / (jfloat(8.0f));
	sp[1].f = temp0;
	sp[2].f = temp1;
	sp[3].f = temp3;
	sp += 4;
	if ((frame[2].o) == nullptr) goto label_222;
	}
	{
	sp[0].o = (jobject)((func_mindustry_world_Tile_getFloorColor_R_arc_graphics_Color) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_mindustry_world_Tile_getFloorColor_R_arc_graphics_Color])(ctx, (frame[2].o));
	sp += 1;
	goto label_223;
	}
label_222:;
	INST_ALOAD(1);
	sp[-1].o = (jobject) ((mindustry_world_Block *) NULL_CHECK(sp[-1].o))->F_mapColor;
label_223:;
	{
	sp -= 5;
	((func_mindustry_entities_Effect_at_float_float_float_arc_graphics_Color) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_entities_Effect_at_float_float_float_arc_graphics_Color])(ctx, sp[0].o, sp[1].f, sp[2].f, sp[3].f, sp[4].o);
	LINE_NUMBER(2562);
	((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_splashTimer = (jfloat(0));
	LINE_NUMBER(2563);
	sp[0].o = (jobject)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_type;
	if (((jint)((mindustry_type_UnitType *) NULL_CHECK(sp[0].o))->F_emitWalkSound) == 0) goto label_219;
	}
	{
	LINE_NUMBER(2564);
	sp[0].o = (jobject)((mindustry_world_blocks_environment_Floor *) NULL_CHECK((frame[1].o)))->F_walkSound;
	jfloat temp0 = (jfloat)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_x;
	jfloat temp1 = (jfloat)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_y;
	jfloat temp2 = (jfloat)SM_arc_math_Mathf_random_float_float_R_float(ctx, ((jfloat)((mindustry_world_blocks_environment_Floor *) NULL_CHECK((frame[1].o)))->F_walkSoundPitchMin), ((jfloat)((mindustry_world_blocks_environment_Floor *) NULL_CHECK((frame[1].o)))->F_walkSoundPitchMax));
	jint temp3 = (jint)((func_arc_audio_Sound_at_float_float_float_float_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_audio_Sound_at_float_float_float_float_R_int])(ctx, sp[0].o, temp0, temp1, temp2, ((jfloat)((mindustry_world_blocks_environment_Floor *) NULL_CHECK((frame[1].o)))->F_walkSoundVolume));
	}
label_219:;
	{
	LINE_NUMBER(2568);
	((func_mindustry_gen_LegsUnit_updateDrowning) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_gen_LegsUnit_updateDrowning])(ctx, (frame[0].o));
	LINE_NUMBER(2569);
	if (((jint)((mindustry_gen_LegsUnit *) NULL_CHECK((frame[0].o)))->F_wasHealed) == 0) goto label_228;
	}
	{
	if ((floatCompare(((jfloat)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_healTime), (jfloat(-1.0f)), 1)) > 0) goto label_228;
	}
	{
	LINE_NUMBER(2570);
	((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_healTime = (jfloat(1));
	}
label_228:;
	{
	LINE_NUMBER(2572);
	sp[0].o = frame[0].o;
	((mindustry_gen_Unit *) NULL_CHECK(sp[0].o))->F_healTime = (((jfloat)((mindustry_gen_Unit *) NULL_CHECK(sp[0].o))->F_healTime) - ((clinit_arc_util_Time(ctx), (jfloat)SF_arc_util_Time_delta) / (jfloat(20.0f))));
	LINE_NUMBER(2573);
	((mindustry_gen_LegsUnit *) NULL_CHECK((frame[0].o)))->F_wasHealed = (jint(0));
	LINE_NUMBER(2574);
	sp[0].o = (jobject)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_team;
	jint temp0 = (jint)((func_mindustry_game_Team_isOnlyAI_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_game_Team_isOnlyAI_R_boolean])(ctx, sp[0].o);
	if (temp0 == 0) goto label_232;
	}
	{
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	jint temp0 = (jint)((func_mindustry_core_GameState_isCampaign_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_GameState_isCampaign_R_boolean])(ctx, sp[0].o);
	if (temp0 == 0) goto label_232;
	}
	{
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	sp[0].o = (jobject)((func_mindustry_core_GameState_getSector_R_mindustry_type_Sector) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_GameState_getSector_R_mindustry_type_Sector])(ctx, sp[0].o);
	jint temp0 = (jint)((func_mindustry_type_Sector_isCaptured_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_type_Sector_isCaptured_R_boolean])(ctx, sp[0].o);
	if (temp0 == 0) goto label_232;
	}
	{
	LINE_NUMBER(2575);
	((func_mindustry_gen_LegsUnit_kill) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_gen_LegsUnit_kill])(ctx, (frame[0].o));
	}
label_232:;
	{
	LINE_NUMBER(2577);
	if ((clinit_mindustry_Vars(ctx), (jint)SF_mindustry_Vars_headless) != 0) goto label_234;
	}
	{
	LINE_NUMBER(2578);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_control;
	sp[0].o = (jobject)((mindustry_core_Control *) NULL_CHECK(sp[0].o))->F_sound;
	sp[1].o = (jobject)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_type;
	sp[1].o = (jobject)((mindustry_type_UnitType *) NULL_CHECK(sp[1].o))->F_loopSound;
	sp[2].o = frame[0].o;
	sp[3].o = (jobject)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_type;
	((func_mindustry_audio_SoundControl_loop_arc_audio_Sound_arc_math_geom_Position_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_audio_SoundControl_loop_arc_audio_Sound_arc_math_geom_Position_float])(ctx, sp[0].o, sp[1].o, sp[2].o, ((jfloat)((mindustry_type_UnitType *) NULL_CHECK(sp[3].o))->F_loopSoundVolume));
	LINE_NUMBER(2579);
	sp[0].o = (jobject)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_type;
	sp[0].o = (jobject)((mindustry_type_UnitType *) NULL_CHECK(sp[0].o))->F_moveSound;
	clinit_mindustry_gen_Sounds(ctx);
	sp[1].o = (jobject)SF_mindustry_gen_Sounds_none;
	if (sp[0].o == sp[1].o) goto label_234;
	}
	{
	LINE_NUMBER(2580);
	sp[0].o = (jobject)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_vel;
	jfloat temp0 = (jfloat)((func_arc_math_geom_Vec2_len_R_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Vec2_len_R_float])(ctx, sp[0].o);
	sp[0].o = (jobject)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_type;
	jfloat temp1 = (jfloat)SM_arc_math_Mathf_clamp_float_R_float(ctx, (temp0 / ((jfloat)((mindustry_type_UnitType *) NULL_CHECK(sp[0].o))->F_speed)));
	frame[3].f = temp1;
	LINE_NUMBER(2581);
	sp[0].o = (jobject)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_type;
	jfloat temp2 = (jfloat)((mindustry_type_UnitType *) NULL_CHECK(sp[0].o))->F_moveSoundPitchMin;
	sp[0].o = (jobject)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_type;
	jfloat temp3 = (jfloat)SM_arc_math_Mathf_lerp_float_float_float_R_float(ctx, temp2, ((jfloat)((mindustry_type_UnitType *) NULL_CHECK(sp[0].o))->F_moveSoundPitchMax), (frame[3].f));
	frame[4].f = temp3;
	LINE_NUMBER(2582);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_control;
	sp[0].o = (jobject)((mindustry_core_Control *) NULL_CHECK(sp[0].o))->F_sound;
	sp[1].o = (jobject)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_type;
	sp[1].o = (jobject)((mindustry_type_UnitType *) NULL_CHECK(sp[1].o))->F_moveSound;
	sp[2].o = frame[0].o;
	sp[3].o = (jobject)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_type;
	((func_mindustry_audio_SoundControl_loop_arc_audio_Sound_arc_math_geom_Position_float_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_audio_SoundControl_loop_arc_audio_Sound_arc_math_geom_Position_float_float])(ctx, sp[0].o, sp[1].o, sp[2].o, (((jfloat)((mindustry_type_UnitType *) NULL_CHECK(sp[3].o))->F_moveSoundVolume) * (frame[3].f)), (frame[4].f));
	}
label_234:;
	{
	LINE_NUMBER(2585);
	sp[0].o = (jobject)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_type;
	clinit_mindustry_Vars(ctx);
	sp[1].o = (jobject)SF_mindustry_Vars_state;
	sp[1].o = (jobject)((mindustry_core_GameState *) NULL_CHECK(sp[1].o))->F_rules;
	jint temp0 = (jint)((func_mindustry_type_UnitType_supportsEnv_int_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_type_UnitType_supportsEnv_int_R_boolean])(ctx, sp[0].o, ((jint)((mindustry_game_Rules *) NULL_CHECK(sp[1].o))->F_env));
	if (temp0 != 0) goto label_240;
	}
	{
	if (((jint)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_dead) != 0) goto label_240;
	}
	{
	LINE_NUMBER(2586);
	SM_mindustry_gen_Call_unitEnvDeath_mindustry_gen_Unit(ctx, (frame[0].o));
	LINE_NUMBER(2587);
	sp[0].o = (jobject)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_team;
	sp[0].o = (jobject)((func_mindustry_game_Team_data_R_mindustry_game_Teams$TeamData) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_game_Team_data_R_mindustry_game_Teams$TeamData])(ctx, sp[0].o);
	sp[1].o = (jobject)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_type;
	((func_mindustry_game_Teams$TeamData_updateCount_mindustry_type_UnitType_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_game_Teams$TeamData_updateCount_mindustry_type_UnitType_int])(ctx, sp[0].o, sp[1].o, (jint(-1)));
	}
label_240:;
	{
	LINE_NUMBER(2589);
	sp[0].o = (jobject)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_abilities;
	frame[3].o = sp[0].o;
	frame[4].i = (((jarray) nullCheck(ctx, (frame[3].o)))->length);
	frame[5].i = (jint(0));
	}
label_243:;
	{
	if ((frame[5].i) >= (frame[4].i)) goto label_244;
	}
	{
	frame[6].o = ((jobject)ARRAY_ACCESS(jobject, (frame[3].o), (frame[5].i)));
	LINE_NUMBER(2590);
	((func_mindustry_entities_abilities_Ability_update_mindustry_gen_Unit) ((void **) nullCheck(ctx, (frame[6].o))->vtable)[VTABLE_mindustry_entities_abilities_Ability_update_mindustry_gen_Unit])(ctx, (frame[6].o), (frame[0].o));
	LINE_NUMBER(2589);
	INST_IINC(5, 1);
	goto label_243;
	}
label_244:;
	{
	LINE_NUMBER(2592);
	sp[0].o = (jobject)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_trail;
	if (sp[0].o == nullptr) goto label_247;
	}
	{
	LINE_NUMBER(2593);
	sp[0].o = (jobject)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_trail;
	sp[1].o = (jobject)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_type;
	((mindustry_graphics_Trail *) NULL_CHECK(sp[0].o))->F_length = ((jint)((mindustry_type_UnitType *) NULL_CHECK(sp[1].o))->F_trailLength);
	LINE_NUMBER(2594);
	sp[0].o = (jobject)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_type;
	if (((jint)((mindustry_type_UnitType *) NULL_CHECK(sp[0].o))->F_useEngineElevation) == 0) goto label_250;
	}
	{
	jfloat temp0 = (jfloat)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_elevation;
	sp[0].f = temp0;
	sp += 1;
	goto label_251;
	}
label_250:;
	INST_FCONST(1);
label_251:;
	{
	sp -= 1;
	frame[3].f = sp[0].f;
	LINE_NUMBER(2595);
	sp[0].o = (jobject)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_type;
	jfloat temp0 = ((jfloat)((mindustry_type_UnitType *) NULL_CHECK(sp[0].o))->F_engineOffset) / (jfloat(2));
	sp[0].o = (jobject)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_type;
	frame[4].f = (temp0 + ((((jfloat)((mindustry_type_UnitType *) NULL_CHECK(sp[0].o))->F_engineOffset) / (jfloat(2))) * (frame[3].f)));
	LINE_NUMBER(2596);
	jfloat temp1 = (jfloat)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_x;
	jfloat temp2 = (jfloat)SM_arc_math_Angles_trnsx_float_float_R_float(ctx, (((jfloat)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_rotation) + (jfloat(180.0f))), (frame[4].f));
	frame[5].f = (temp1 + temp2);
	LINE_NUMBER(2597);
	jfloat temp3 = (jfloat)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_y;
	jfloat temp4 = (jfloat)SM_arc_math_Angles_trnsy_float_float_R_float(ctx, (((jfloat)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_rotation) + (jfloat(180.0f))), (frame[4].f));
	frame[6].f = (temp3 + temp4);
	LINE_NUMBER(2598);
	sp[0].o = (jobject)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_trail;
	((func_mindustry_graphics_Trail_update_float_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_graphics_Trail_update_float_float])(ctx, sp[0].o, (frame[5].f), (frame[6].f));
	}
label_247:;
	{
	LINE_NUMBER(2600);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_type;
	jfloat temp0 = (jfloat)((mindustry_type_UnitType *) NULL_CHECK(sp[1].o))->F_drag;
	jint temp1 = (jint)((func_mindustry_gen_LegsUnit_isGrounded_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_gen_LegsUnit_isGrounded_R_boolean])(ctx, (frame[0].o));
	sp[1].f = temp0;
	sp += 2;
	if (temp1 == 0) goto label_256;
	}
	{
	sp[0].o = (jobject)((func_mindustry_gen_LegsUnit_floorOn_R_mindustry_world_blocks_environment_Floor) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_gen_LegsUnit_floorOn_R_mindustry_world_blocks_environment_Floor])(ctx, (frame[0].o));
	jfloat temp0 = (jfloat)((mindustry_world_blocks_environment_Floor *) NULL_CHECK(sp[0].o))->F_dragMultiplier;
	sp[0].f = temp0;
	sp += 1;
	goto label_257;
	}
label_256:;
	INST_FCONST(1);
label_257:;
	{
	sp -= 3;
	jfloat temp0 = (sp[1].f * sp[2].f) * ((jfloat)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_dragMultiplier);
	clinit_mindustry_Vars(ctx);
	sp[1].o = (jobject)SF_mindustry_Vars_state;
	sp[1].o = (jobject)((mindustry_core_GameState *) NULL_CHECK(sp[1].o))->F_rules;
	((mindustry_gen_Unit *) NULL_CHECK(sp[0].o))->F_drag = (temp0 * ((jfloat)((mindustry_game_Rules *) NULL_CHECK(sp[1].o))->F_dragMultiplier));
	LINE_NUMBER(2601);
	sp[0].o = (jobject)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_team;
	clinit_mindustry_Vars(ctx);
	sp[1].o = (jobject)SF_mindustry_Vars_state;
	sp[1].o = (jobject)((mindustry_core_GameState *) NULL_CHECK(sp[1].o))->F_rules;
	sp[1].o = (jobject)((mindustry_game_Rules *) NULL_CHECK(sp[1].o))->F_waveTeam;
	if (sp[0].o == sp[1].o) goto label_259;
	}
	{
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	jint temp0 = (jint)((func_mindustry_core_GameState_hasSpawns_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_GameState_hasSpawns_R_boolean])(ctx, sp[0].o);
	if (temp0 == 0) goto label_259;
	}
	{
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_net;
	jint temp0 = (jint)((func_mindustry_net_Net_client_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_net_Net_client_R_boolean])(ctx, sp[0].o);
	if (temp0 == 0) goto label_260;
	}
	{
	jint temp0 = (jint)((func_mindustry_gen_LegsUnit_isLocal_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_gen_LegsUnit_isLocal_R_boolean])(ctx, (frame[0].o));
	if (temp0 == 0) goto label_259;
	}
label_260:;
	{
	jint temp0 = (jint)((func_mindustry_gen_LegsUnit_hittable_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_gen_LegsUnit_hittable_R_boolean])(ctx, (frame[0].o));
	if (temp0 == 0) goto label_259;
	}
	{
	LINE_NUMBER(2602);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	sp[0].o = (jobject)((mindustry_core_GameState *) NULL_CHECK(sp[0].o))->F_rules;
	frame[3].f = ((((jfloat)((mindustry_game_Rules *) NULL_CHECK(sp[0].o))->F_dropZoneRadius) + (((jfloat)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_hitSize) / (jfloat(2)))) + (jfloat(1)));
	LINE_NUMBER(2603);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_spawner;
	sp[0].o = (jobject)((func_mindustry_ai_WaveSpawner_getSpawns_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_ai_WaveSpawner_getSpawns_R_arc_struct_Seq])(ctx, sp[0].o);
	sp[0].o = (jobject)((func_arc_struct_Seq_iterator_R_java_util_Iterator) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_iterator_R_java_util_Iterator])(ctx, sp[0].o);
	frame[4].o = sp[0].o;
	}
label_263:;
	{
	jint temp0 = (jint)((func_java_util_Iterator_hasNext_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_hasNext_R_boolean, (frame[4].o)))(ctx, (frame[4].o));
	if (temp0 == 0) goto label_259;
	}
	{
	sp[0].o = (jobject)((func_java_util_Iterator_next_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_next_R_java_lang_Object, (frame[4].o)))(ctx, (frame[4].o));
	frame[5].o = (checkCast(ctx, &class_mindustry_world_Tile, sp[0].o));
	LINE_NUMBER(2604);
	sp[0].o = frame[0].o;
	jfloat temp0 = (jfloat)((func_mindustry_world_Tile_worldx_R_float) ((void **) nullCheck(ctx, (frame[5].o))->vtable)[VTABLE_mindustry_world_Tile_worldx_R_float])(ctx, (frame[5].o));
	jfloat temp1 = (jfloat)((func_mindustry_world_Tile_worldy_R_float) ((void **) nullCheck(ctx, (frame[5].o))->vtable)[VTABLE_mindustry_world_Tile_worldy_R_float])(ctx, (frame[5].o));
	jint temp2 = (jint)((func_mindustry_gen_LegsUnit_within_float_float_float_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_gen_LegsUnit_within_float_float_float_R_boolean])(ctx, sp[0].o, temp0, temp1, (frame[3].f));
	if (temp2 == 0) goto label_265;
	}
	{
	LINE_NUMBER(2605);
	sp[0].o = frame[0].o;
	clinit_arc_util_Tmp(ctx);
	sp[1].o = (jobject)SF_arc_util_Tmp_v1;
	sp[1].o = (jobject)((func_arc_math_geom_Vec2_set_arc_math_geom_Position_R_arc_math_geom_Vec2) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_math_geom_Vec2_set_arc_math_geom_Position_R_arc_math_geom_Vec2])(ctx, sp[1].o, (frame[0].o));
	jfloat temp0 = (jfloat)((func_mindustry_world_Tile_worldx_R_float) ((void **) nullCheck(ctx, (frame[5].o))->vtable)[VTABLE_mindustry_world_Tile_worldx_R_float])(ctx, (frame[5].o));
	jfloat temp1 = (jfloat)((func_mindustry_world_Tile_worldy_R_float) ((void **) nullCheck(ctx, (frame[5].o))->vtable)[VTABLE_mindustry_world_Tile_worldy_R_float])(ctx, (frame[5].o));
	sp[1].o = (jobject)((func_arc_math_geom_Vec2_sub_float_float_R_arc_math_geom_Vec2) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_math_geom_Vec2_sub_float_float_R_arc_math_geom_Vec2])(ctx, sp[1].o, temp0, temp1);
	jfloat temp2 = jfloat(1.1f);
	jfloat temp3 = (jfloat)((func_mindustry_gen_LegsUnit_dst_arc_math_geom_Position_R_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_gen_LegsUnit_dst_arc_math_geom_Position_R_float])(ctx, (frame[0].o), (frame[5].o));
	sp[1].o = (jobject)((func_arc_math_geom_Vec2_setLength_float_R_arc_math_geom_Vec2) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_math_geom_Vec2_setLength_float_R_arc_math_geom_Vec2])(ctx, sp[1].o, (temp2 - (temp3 / (frame[3].f))));
	sp[1].o = (jobject)((func_arc_math_geom_Vec2_scl_float_R_arc_math_geom_Vec2) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_math_geom_Vec2_scl_float_R_arc_math_geom_Vec2])(ctx, sp[1].o, ((jfloat(0.45f)) * (clinit_arc_util_Time(ctx), (jfloat)SF_arc_util_Time_delta)));
	((func_mindustry_gen_LegsUnit_velAddNet_arc_math_geom_Vec2) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_gen_LegsUnit_velAddNet_arc_math_geom_Vec2])(ctx, sp[0].o, sp[1].o);
	}
label_265:;
	LINE_NUMBER(2607);
	goto label_263;
label_259:;
	{
	LINE_NUMBER(2609);
	if (((jint)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_dead) != 0) goto label_267;
	}
	{
	if ((floatCompare(((jfloat)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_health), (jfloat(0)), 1)) > 0) goto label_268;
	}
label_267:;
	{
	LINE_NUMBER(2610);
	((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_drag = (jfloat(1,000000e-02f));
	LINE_NUMBER(2611);
	jint temp0 = (jint)SM_arc_math_Mathf_chanceDelta_double_R_boolean(ctx, (jdouble(0.1)));
	if (temp0 == 0) goto label_270;
	}
	{
	LINE_NUMBER(2612);
	clinit_arc_util_Tmp(ctx);
	sp[0].o = (jobject)SF_arc_util_Tmp_v1;
	jfloat temp0 = (jfloat)SM_arc_math_Mathf_range_float_R_float(ctx, ((jfloat)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_hitSize));
	sp[0].o = (jobject)((func_arc_math_geom_Vec2_rnd_float_R_arc_math_geom_Vec2) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Vec2_rnd_float_R_arc_math_geom_Vec2])(ctx, sp[0].o, temp0);
	LINE_NUMBER(2613);
	sp[0].o = (jobject)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_type;
	sp[0].o = (jobject)((mindustry_type_UnitType *) NULL_CHECK(sp[0].o))->F_fallEffect;
	jfloat temp1 = (jfloat)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_x;
	clinit_arc_util_Tmp(ctx);
	sp[1].o = (jobject)SF_arc_util_Tmp_v1;
	jfloat temp2 = temp1 + ((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK(sp[1].o))->F_x);
	jfloat temp3 = (jfloat)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_y;
	clinit_arc_util_Tmp(ctx);
	sp[1].o = (jobject)SF_arc_util_Tmp_v1;
	((func_mindustry_entities_Effect_at_float_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_entities_Effect_at_float_float])(ctx, sp[0].o, temp2, (temp3 + ((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK(sp[1].o))->F_y)));
	}
label_270:;
	{
	LINE_NUMBER(2615);
	jint temp0 = (jint)SM_arc_math_Mathf_chanceDelta_double_R_boolean(ctx, (jdouble(0.2)));
	if (temp0 == 0) goto label_273;
	}
	{
	LINE_NUMBER(2616);
	sp[0].o = (jobject)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_type;
	jfloat temp0 = ((jfloat)((mindustry_type_UnitType *) NULL_CHECK(sp[0].o))->F_engineOffset) / (jfloat(2));
	sp[0].o = (jobject)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_type;
	frame[3].f = (temp0 + ((((jfloat)((mindustry_type_UnitType *) NULL_CHECK(sp[0].o))->F_engineOffset) / (jfloat(2))) * ((jfloat)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_elevation)));
	LINE_NUMBER(2617);
	sp[0].o = (jobject)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_type;
	jfloat temp1 = (jfloat)SM_arc_math_Mathf_range_float_R_float(ctx, ((jfloat)((mindustry_type_UnitType *) NULL_CHECK(sp[0].o))->F_engineSize));
	frame[4].f = temp1;
	LINE_NUMBER(2618);
	sp[0].o = (jobject)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_type;
	sp[0].o = (jobject)((mindustry_type_UnitType *) NULL_CHECK(sp[0].o))->F_fallEngineEffect;
	jfloat temp2 = (jfloat)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_x;
	jfloat temp3 = (jfloat)SM_arc_math_Angles_trnsx_float_float_R_float(ctx, (((jfloat)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_rotation) + (jfloat(180.0f))), (frame[3].f));
	jfloat temp4 = temp2 + temp3;
	jfloat temp5 = (jfloat)SM_arc_math_Mathf_range_float_R_float(ctx, (frame[4].f));
	jfloat temp6 = temp4 + temp5;
	jfloat temp7 = (jfloat)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_y;
	jfloat temp8 = (jfloat)SM_arc_math_Angles_trnsy_float_float_R_float(ctx, (((jfloat)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_rotation) + (jfloat(180.0f))), (frame[3].f));
	jfloat temp9 = temp7 + temp8;
	jfloat temp10 = (jfloat)SM_arc_math_Mathf_range_float_R_float(ctx, (frame[4].f));
	jfloat temp11 = temp9 + temp10;
	jfloat temp12 = (jfloat)SM_arc_math_Mathf_random_R_float(ctx);
	((func_mindustry_entities_Effect_at_float_float_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_entities_Effect_at_float_float_float])(ctx, sp[0].o, temp6, temp11, temp12);
	}
label_273:;
	{
	LINE_NUMBER(2620);
	sp[0].o = frame[0].o;
	jfloat temp0 = (jfloat)((mindustry_gen_Unit *) NULL_CHECK(sp[0].o))->F_elevation;
	sp[1].o = (jobject)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_type;
	((mindustry_gen_Unit *) NULL_CHECK(sp[0].o))->F_elevation = (temp0 - (((jfloat)((mindustry_type_UnitType *) NULL_CHECK(sp[1].o))->F_fallSpeed) * (clinit_arc_util_Time(ctx), (jfloat)SF_arc_util_Time_delta)));
	LINE_NUMBER(2621);
	jint temp1 = (jint)((func_mindustry_gen_LegsUnit_isGrounded_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_gen_LegsUnit_isGrounded_R_boolean])(ctx, (frame[0].o));
	if (temp1 != 0) goto label_278;
	}
	{
	jfloat temp0 = (jfloat)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_health;
	jfloat temp1 = -((jfloat)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_maxHealth);
	sp[0].o = (jobject)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_type;
	if ((floatCompare(temp0, (temp1 * ((jfloat)((mindustry_type_UnitType *) NULL_CHECK(sp[0].o))->F_wreckHealthMultiplier)), 1)) > 0) goto label_268;
	}
label_278:;
	{
	LINE_NUMBER(2622);
	SM_mindustry_gen_Call_unitDestroy_int(ctx, ((jint)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_id));
	}
label_268:;
	{
	LINE_NUMBER(2625);
	if ((frame[2].o) == nullptr) goto label_279;
	}
	{
	sp[0].o = (jobject)((mindustry_world_Tile *) NULL_CHECK((frame[2].o)))->F_build;
	if (sp[0].o == nullptr) goto label_279;
	}
	{
	LINE_NUMBER(2626);
	sp[0].o = (jobject)((mindustry_world_Tile *) NULL_CHECK((frame[2].o)))->F_build;
	((func_mindustry_gen_Building_unitOnAny_mindustry_gen_Unit) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_gen_Building_unitOnAny_mindustry_gen_Unit])(ctx, sp[0].o, (frame[0].o));
	}
label_279:;
	{
	LINE_NUMBER(2628);
	if ((frame[2].o) == nullptr) goto label_281;
	}
	{
	jint temp0 = (jint)((func_mindustry_gen_LegsUnit_isGrounded_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_gen_LegsUnit_isGrounded_R_boolean])(ctx, (frame[0].o));
	if (temp0 == 0) goto label_281;
	}
	{
	sp[0].o = (jobject)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_type;
	if (((jint)((mindustry_type_UnitType *) NULL_CHECK(sp[0].o))->F_hovering) != 0) goto label_281;
	}
	{
	LINE_NUMBER(2629);
	sp[0].o = (jobject)((mindustry_world_Tile *) NULL_CHECK((frame[2].o)))->F_build;
	if (sp[0].o == nullptr) goto label_283;
	}
	{
	LINE_NUMBER(2630);
	sp[0].o = (jobject)((mindustry_world_Tile *) NULL_CHECK((frame[2].o)))->F_build;
	((func_mindustry_gen_Building_unitOn_mindustry_gen_Unit) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_gen_Building_unitOn_mindustry_gen_Unit])(ctx, sp[0].o, (frame[0].o));
	}
label_283:;
	{
	LINE_NUMBER(2632);
	if ((floatCompare(((jfloat)((mindustry_world_blocks_environment_Floor *) NULL_CHECK((frame[1].o)))->F_damageTaken), (jfloat(0)), -1)) <= 0) goto label_281;
	}
	{
	LINE_NUMBER(2633);
	((func_mindustry_gen_LegsUnit_damageContinuous_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_gen_LegsUnit_damageContinuous_float])(ctx, (frame[0].o), ((jfloat)((mindustry_world_blocks_environment_Floor *) NULL_CHECK((frame[1].o)))->F_damageTaken));
	}
label_281:;
	{
	LINE_NUMBER(2636);
	if ((frame[2].o) == nullptr) goto label_286;
	}
	{
	jint temp0 = (jint)((func_mindustry_gen_LegsUnit_canPassOn_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_gen_LegsUnit_canPassOn_R_boolean])(ctx, (frame[0].o));
	if (temp0 != 0) goto label_286;
	}
	{
	LINE_NUMBER(2637);
	sp[0].o = (jobject)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_type;
	if (((jint)((mindustry_type_UnitType *) NULL_CHECK(sp[0].o))->F_canBoost) == 0) goto label_288;
	}
	{
	LINE_NUMBER(2638);
	((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_elevation = (jfloat(1));
	goto label_286;
	}
label_288:;
	{
	LINE_NUMBER(2639);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_net;
	jint temp0 = (jint)((func_mindustry_net_Net_client_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_net_Net_client_R_boolean])(ctx, sp[0].o);
	if (temp0 != 0) goto label_286;
	}
	clinit_mindustry_Vars(ctx);
	(sp++)->i = SF_mindustry_Vars_headless;
	if ((--sp)->i != 0) goto label_290;
	{
	jint temp0 = (jint)((func_mindustry_gen_LegsUnit_isRemote_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_gen_LegsUnit_isRemote_R_boolean])(ctx, (frame[0].o));
	if (temp0 != 0) goto label_286;
	}
label_290:;
	{
	LINE_NUMBER(2640);
	((func_mindustry_gen_LegsUnit_kill) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_gen_LegsUnit_kill])(ctx, (frame[0].o));
	}
label_286:;
	{
	LINE_NUMBER(2643);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_net;
	jint temp0 = (jint)((func_mindustry_net_Net_client_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_net_Net_client_R_boolean])(ctx, sp[0].o);
	if (temp0 != 0) goto label_291;
	}
	{
	if (((jint)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_dead) != 0) goto label_291;
	}
	{
	jint temp0 = (jint)((func_mindustry_gen_LegsUnit_shouldUpdateController_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_gen_LegsUnit_shouldUpdateController_R_boolean])(ctx, (frame[0].o));
	if (temp0 == 0) goto label_291;
	}
	{
	LINE_NUMBER(2644);
	sp[0].o = (jobject)((mindustry_gen_LegsUnit *) NULL_CHECK((frame[0].o)))->F_controller;
	((func_mindustry_entities_units_UnitController_updateUnit) resolveInterfaceMethod(ctx, &class_mindustry_entities_units_UnitController, INDEX_mindustry_entities_units_UnitController_updateUnit, sp[0].o))(ctx, sp[0].o);
	}
label_291:;
	{
	LINE_NUMBER(2646);
	sp[0].o = (jobject)((mindustry_gen_LegsUnit *) NULL_CHECK((frame[0].o)))->F_controller;
	jint temp0 = (jint)((func_mindustry_entities_units_UnitController_isValidController_R_boolean) resolveInterfaceMethod(ctx, &class_mindustry_entities_units_UnitController, INDEX_mindustry_entities_units_UnitController_isValidController_R_boolean, sp[0].o))(ctx, sp[0].o);
	if (temp0 != 0) goto label_293;
	}
	{
	LINE_NUMBER(2647);
	((func_mindustry_gen_LegsUnit_resetController) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_gen_LegsUnit_resetController])(ctx, (frame[0].o));
	}
label_293:;
	{
	LINE_NUMBER(2649);
	if (((jint)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_spawnedByCore) == 0) goto label_179;
	}
	{
	jint temp0 = (jint)((func_mindustry_gen_LegsUnit_isPlayer_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_gen_LegsUnit_isPlayer_R_boolean])(ctx, (frame[0].o));
	if (temp0 != 0) goto label_179;
	}
	{
	if (((jint)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_dead) != 0) goto label_179;
	}
	{
	LINE_NUMBER(2650);
	SM_mindustry_gen_Call_unitDespawn_mindustry_gen_Unit(ctx, (frame[0].o));
	}
label_179:;
	{
	LINE_NUMBER(2655);
	sp[0].o = (jobject)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_mounts;
	frame[1].o = sp[0].o;
	frame[2].i = (((jarray) nullCheck(ctx, (frame[1].o)))->length);
	frame[3].i = (jint(0));
	}
label_296:;
	{
	if ((frame[3].i) >= (frame[2].i)) goto label_297;
	}
	{
	frame[4].o = ((jobject)ARRAY_ACCESS(jobject, (frame[1].o), (frame[3].i)));
	LINE_NUMBER(2656);
	sp[0].o = (jobject)((mindustry_entities_units_WeaponMount *) NULL_CHECK((frame[4].o)))->F_weapon;
	((func_mindustry_type_Weapon_update_mindustry_gen_Unit_mindustry_entities_units_WeaponMount) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_type_Weapon_update_mindustry_gen_Unit_mindustry_entities_units_WeaponMount])(ctx, sp[0].o, (frame[0].o), (frame[4].o));
	LINE_NUMBER(2655);
	INST_IINC(3, 1);
	goto label_296;
	}
label_297:;
	LINE_NUMBER(2659);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_gen_LegsUnit_updateBoosting_boolean(jcontext ctx, jobject self, jbool param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/LegsUnit:updateBoosting", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(2663);
	((func_mindustry_gen_LegsUnit_updateBoosting_boolean_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_gen_LegsUnit_updateBoosting_boolean_boolean])(ctx, (frame[0].o), (frame[1].i), (jint(0)));
	LINE_NUMBER(2664);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_gen_LegsUnit_updateBoosting_boolean_boolean(jcontext ctx, jobject self, jbool param0, jbool param1) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/LegsUnit:updateBoosting", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(2668);
	sp[0].o = (jobject)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_type;
	if (((jint)((mindustry_type_UnitType *) NULL_CHECK(sp[0].o))->F_canBoost) == 0) goto label_1;
	}
	{
	if (((jint)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_dead) == 0) goto label_2;
	}
label_1:;
	popStackFrame(ctx);
	INST_RETURN();
label_2:;
	{
	LINE_NUMBER(2669);
	if ((frame[1].i) != 0) goto label_3;
	}
	{
	jint temp0 = (jint)((func_mindustry_gen_LegsUnit_onSolid_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_gen_LegsUnit_onSolid_R_boolean])(ctx, (frame[0].o));
	if (temp0 != 0) goto label_3;
	}
	{
	jint temp0 = (jint)((func_mindustry_gen_LegsUnit_isFlying_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_gen_LegsUnit_isFlying_R_boolean])(ctx, (frame[0].o));
	if (temp0 == 0) goto label_4;
	}
	{
	jint temp0 = (jint)((func_mindustry_gen_LegsUnit_canLand_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_gen_LegsUnit_canLand_R_boolean])(ctx, (frame[0].o));
	if (temp0 != 0) goto label_4;
	}
label_3:;
	INST_ICONST(1);
	goto label_5;
label_4:;
	INST_ICONST(0);
label_5:;
	{
	sp -= 1;
	frame[3].i = sp[0].i;
	LINE_NUMBER(2670);
	sp[0].o = frame[0].o;
	jfloat temp0 = (jfloat)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_elevation;
	sp[1].o = (jobject)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_type;
	jobject temp1 = sp[1].o;
	sp[1].f = temp0;
	sp += 2;
	if (((jint)((mindustry_type_UnitType *) NULL_CHECK(temp1))->F_canBoost) == 0) goto label_7;
	}
	{
	jint temp0 = (jint)SM_arc_math_Mathf_num_boolean_R_int(ctx, (frame[3].i));
	jfloat temp1 = jfloat(temp0);
	sp[0].f = temp1;
	sp += 1;
	goto label_8;
	}
label_7:;
	INST_FCONST(0);
label_8:;
	INST_ILOAD(3);
	if ((--sp)->i == 0) goto label_9;
	{
	sp[0].o = (jobject)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_type;
	jfloat temp0 = (jfloat)((mindustry_type_UnitType *) NULL_CHECK(sp[0].o))->F_riseSpeed;
	sp[0].f = temp0;
	sp += 1;
	goto label_10;
	}
label_9:;
	{
	sp[0].o = (jobject)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_type;
	jfloat temp0 = (jfloat)((mindustry_type_UnitType *) NULL_CHECK(sp[0].o))->F_descentSpeed;
	sp[0].f = temp0;
	sp += 1;
	}
label_10:;
	{
	sp -= 4;
	jfloat temp0 = (jfloat)SM_arc_math_Mathf_approachDelta_float_float_float_R_float(ctx, sp[1].f, sp[2].f, sp[3].f);
	((mindustry_gen_Unit *) NULL_CHECK(sp[0].o))->F_elevation = temp0;
	LINE_NUMBER(2671);
	if ((frame[2].i) == 0) goto label_12;
	}
	{
	LINE_NUMBER(2672);
	clinit_mindustry_game_EventType$Trigger(ctx);
	sp[0].o = (jobject)SF_mindustry_game_EventType$Trigger_unitCommandBoost;
	SM_arc_Events_fire_java_lang_Enum(ctx, sp[0].o);
	}
label_12:;
	LINE_NUMBER(2674);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_gen_LegsUnit_updateBuildLogic(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[22];
	auto stack = &frame[15];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/LegsUnit:updateBuildLogic", 22 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(2678);
	sp[0].o = (jobject)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_type;
	if ((floatCompare(((jfloat)((mindustry_type_UnitType *) NULL_CHECK(sp[0].o))->F_buildSpeed), (jfloat(0)), 1)) > 0) goto label_1;
	}
	popStackFrame(ctx);
	INST_RETURN();
label_1:;
	{
	LINE_NUMBER(2679);
	if ((clinit_mindustry_Vars(ctx), (jint)SF_mindustry_Vars_headless) != 0) goto label_2;
	}
	{
	LINE_NUMBER(2680);
	sp[0].o = (jobject)((mindustry_gen_LegsUnit *) NULL_CHECK((frame[0].o)))->F_lastActive;
	if (sp[0].o == nullptr) goto label_4;
	}
	{
	if ((floatCompare(((jfloat)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_buildAlpha), (jfloat(1,000000e-02f)), 1)) > 0) goto label_4;
	}
	{
	LINE_NUMBER(2681);
	((mindustry_gen_LegsUnit *) NULL_CHECK((frame[0].o)))->F_lastActive = (jref) (jobject(nullptr));
	}
label_4:;
	{
	LINE_NUMBER(2683);
	sp[0].o = frame[0].o;
	jfloat temp0 = (jfloat)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_buildAlpha;
	jint temp1 = (jint)((func_mindustry_gen_LegsUnit_activelyBuilding_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_gen_LegsUnit_activelyBuilding_R_boolean])(ctx, (frame[0].o));
	sp[1].f = temp0;
	sp += 2;
	if (temp1 == 0) goto label_6;
	}
	INST_FCONST(1);
	goto label_7;
label_6:;
	INST_FCONST(0);
label_7:;
	{
	sp -= 3;
	jfloat temp0 = (jfloat)SM_arc_math_Mathf_lerpDelta_float_float_float_R_float(ctx, sp[1].f, sp[2].f, (jfloat(0.15f)));
	((mindustry_gen_Unit *) NULL_CHECK(sp[0].o))->F_buildAlpha = temp0;
	}
label_2:;
	{
	LINE_NUMBER(2685);
	((func_mindustry_gen_LegsUnit_validatePlans) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_gen_LegsUnit_validatePlans])(ctx, (frame[0].o));
	LINE_NUMBER(2686);
	if (((jint)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_updateBuilding) == 0) goto label_9;
	}
	{
	jint temp0 = (jint)((func_mindustry_gen_LegsUnit_canBuild_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_gen_LegsUnit_canBuild_R_boolean])(ctx, (frame[0].o));
	if (temp0 != 0) goto label_10;
	}
label_9:;
	LINE_NUMBER(2687);
	popStackFrame(ctx);
	INST_RETURN();
label_10:;
	{
	LINE_NUMBER(2689);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	sp[0].o = (jobject)((mindustry_core_GameState *) NULL_CHECK(sp[0].o))->F_rules;
	if (((jint)((mindustry_game_Rules *) NULL_CHECK(sp[0].o))->F_infiniteResources) == 0) goto label_11;
	}
	(sp++)->f = jfloat(3,402823e+38f);
	goto label_12;
label_11:;
	{
	sp[0].o = (jobject)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_type;
	jfloat temp0 = (jfloat)((mindustry_type_UnitType *) NULL_CHECK(sp[0].o))->F_buildRange;
	sp[0].f = temp0;
	sp += 1;
	}
label_12:;
	{
	sp -= 1;
	frame[1].f = sp[0].f;
	LINE_NUMBER(2690);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	sp[0].o = (jobject)((mindustry_core_GameState *) NULL_CHECK(sp[0].o))->F_rules;
	if (((jint)((mindustry_game_Rules *) NULL_CHECK(sp[0].o))->F_infiniteResources) != 0) goto label_14;
	}
	{
	sp[0].o = (jobject)((func_mindustry_gen_LegsUnit_team_R_mindustry_game_Team) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_gen_LegsUnit_team_R_mindustry_game_Team])(ctx, (frame[0].o));
	sp[0].o = (jobject)((func_mindustry_game_Team_rules_R_mindustry_game_Rules$TeamRule) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_game_Team_rules_R_mindustry_game_Rules$TeamRule])(ctx, sp[0].o);
	if (((jint)((mindustry_game_Rules$TeamRule *) NULL_CHECK(sp[0].o))->F_infiniteResources) == 0) goto label_15;
	}
label_14:;
	INST_ICONST(1);
	goto label_16;
label_15:;
	INST_ICONST(0);
label_16:;
	{
	sp -= 1;
	frame[2].i = sp[0].i;
	LINE_NUMBER(2691);
	sp[0].o = frame[0].o;
	((mindustry_gen_LegsUnit *) NULL_CHECK(sp[0].o))->F_buildCounter = (((jfloat)((mindustry_gen_LegsUnit *) NULL_CHECK(sp[0].o))->F_buildCounter) + (clinit_arc_util_Time(ctx), (jfloat)SF_arc_util_Time_delta));
	LINE_NUMBER(2692);
	jint temp0 = (jint)SM_java_lang_Float_isNaN_float_R_boolean(ctx, ((jfloat)((mindustry_gen_LegsUnit *) NULL_CHECK((frame[0].o)))->F_buildCounter));
	if (temp0 != 0) goto label_19;
	}
	{
	jint temp0 = (jint)SM_java_lang_Float_isInfinite_float_R_boolean(ctx, ((jfloat)((mindustry_gen_LegsUnit *) NULL_CHECK((frame[0].o)))->F_buildCounter));
	if (temp0 == 0) goto label_20;
	}
label_19:;
	{
	((mindustry_gen_LegsUnit *) NULL_CHECK((frame[0].o)))->F_buildCounter = (jfloat(0));
	}
label_20:;
	{
	LINE_NUMBER(2693);
	sp[0].o = frame[0].o;
	jfloat temp0 = (jfloat)SM_java_lang_Math_min_float_float_R_float(ctx, ((jfloat)((mindustry_gen_LegsUnit *) NULL_CHECK((frame[0].o)))->F_buildCounter), (jfloat(10.0f)));
	((mindustry_gen_LegsUnit *) NULL_CHECK(sp[0].o))->F_buildCounter = temp0;
	LINE_NUMBER(2694);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	sp[0].o = (jobject)((mindustry_core_GameState *) NULL_CHECK(sp[0].o))->F_rules;
	if (((jint)((mindustry_game_Rules *) NULL_CHECK(sp[0].o))->F_instantBuild) == 0) goto label_22;
	}
	{
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	sp[0].o = (jobject)((mindustry_core_GameState *) NULL_CHECK(sp[0].o))->F_rules;
	if (((jint)((mindustry_game_Rules *) NULL_CHECK(sp[0].o))->F_infiniteResources) == 0) goto label_22;
	}
	INST_ICONST(1);
	goto label_23;
label_22:;
	INST_ICONST(0);
label_23:;
	{
	sp -= 1;
	frame[3].i = sp[0].i;
	LINE_NUMBER(2695);
	if ((frame[3].i) == 0) goto label_25;
	}
	{
	sp[0].o = (jobject)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_plans;
	jint temp0 = (jint)((arc_struct_Queue *) NULL_CHECK(sp[0].o))->F_size;
	sp[0].i = temp0;
	sp += 1;
	goto label_26;
	}
label_25:;
	INST_BIPUSH(10);
label_26:;
	{
	sp -= 1;
	frame[4].i = sp[0].i;
	LINE_NUMBER(2696);
	frame[5].i = (jint(0));
	LINE_NUMBER(2697);
	sp[0].o = (jobject)((func_mindustry_gen_LegsUnit_core_R_mindustry_world_blocks_storage_CoreBlock$CoreBuild) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_gen_LegsUnit_core_R_mindustry_world_blocks_storage_CoreBlock$CoreBuild])(ctx, (frame[0].o));
	frame[6].o = sp[0].o;
	LINE_NUMBER(2698);
	if ((frame[6].o) != nullptr) goto label_30;
	}
	INST_ILOAD(2);
	if ((--sp)->i != 0) goto label_30;
	popStackFrame(ctx);
	INST_RETURN();
label_30:;
	{
	LINE_NUMBER(2699);
	if ((floatCompare(((jfloat)((mindustry_gen_LegsUnit *) NULL_CHECK((frame[0].o)))->F_buildCounter), (jfloat(1)), -1)) >= 0) goto label_31;
	}
	INST_ILOAD(3);
	if ((--sp)->i == 0) goto label_32;
label_31:;
	{
	jint temp0 = frame[5].i;
	INST_IINC(5, 1);
	if (temp0 >= (frame[4].i)) goto label_32;
	}
	{
	sp[0].o = (jobject)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_plans;
	if (((jint)((arc_struct_Queue *) NULL_CHECK(sp[0].o))->F_size) <= 0) goto label_32;
	}
	{
	LINE_NUMBER(2700);
	sp[0].o = frame[0].o;
	((mindustry_gen_LegsUnit *) NULL_CHECK(sp[0].o))->F_buildCounter = (((jfloat)((mindustry_gen_LegsUnit *) NULL_CHECK(sp[0].o))->F_buildCounter) - (jfloat(1)));
	LINE_NUMBER(2701);
	sp[0].o = (jobject)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_plans;
	if (((jint)((arc_struct_Queue *) NULL_CHECK(sp[0].o))->F_size) <= (jint(1))) goto label_35;
	}
	{
	LINE_NUMBER(2702);
	frame[7].i = (jint(0));
	LINE_NUMBER(2703);
	sp[0].o = (jobject)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_plans;
	frame[8].i = ((jint)((arc_struct_Queue *) NULL_CHECK(sp[0].o))->F_size);
	LINE_NUMBER(2704);
	frame[9].f = (jfloat(3,402823e+38f));
	LINE_NUMBER(2705);
	frame[10].i = (jint(0));
	LINE_NUMBER(2706);
	frame[11].i = (jint(-1));
	}
label_41:;
	{
	LINE_NUMBER(2707);
	if ((frame[7].i) >= (frame[8].i)) goto label_42;
	}
	{
	LINE_NUMBER(2708);
	sp[0].o = (jobject)((func_mindustry_gen_LegsUnit_buildPlan_R_mindustry_entities_units_BuildPlan) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_gen_LegsUnit_buildPlan_R_mindustry_entities_units_BuildPlan])(ctx, (frame[0].o));
	frame[12].o = sp[0].o;
	LINE_NUMBER(2709);
	jfloat temp0 = (jfloat)((func_mindustry_entities_units_BuildPlan_dst2_arc_math_geom_Position_R_float) ((void **) nullCheck(ctx, (frame[12].o))->vtable)[VTABLE_mindustry_entities_units_BuildPlan_dst2_arc_math_geom_Position_R_float])(ctx, (frame[12].o), (frame[0].o));
	frame[13].f = temp0;
	LINE_NUMBER(2710);
	if ((floatCompare((frame[13].f), ((frame[1].f) * (frame[1].f)), 1)) > 0) goto label_46;
	}
	INST_ICONST(1);
	goto label_47;
label_46:;
	INST_ICONST(0);
label_47:;
	{
	sp -= 1;
	frame[14].i = sp[0].i;
	LINE_NUMBER(2711);
	if ((frame[14].i) == 0) goto label_49;
	}
	{
	jint temp0 = (jint)((func_mindustry_gen_LegsUnit_shouldSkip_mindustry_entities_units_BuildPlan_mindustry_gen_Building_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_gen_LegsUnit_shouldSkip_mindustry_entities_units_BuildPlan_mindustry_gen_Building_R_boolean])(ctx, (frame[0].o), (frame[12].o), (frame[6].o));
	if (temp0 != 0) goto label_49;
	}
	{
	LINE_NUMBER(2712);
	frame[10].i = (jint(1));
	LINE_NUMBER(2713);
	goto label_42;
	}
label_49:;
	{
	LINE_NUMBER(2714);
	if ((frame[14].i) == 0) goto label_52;
	}
	{
	if ((floatCompare((frame[13].f), (frame[9].f), 1)) >= 0) goto label_52;
	}
	{
	LINE_NUMBER(2715);
	frame[11].i = (frame[7].i);
	LINE_NUMBER(2716);
	frame[9].f = (frame[13].f);
	}
label_52:;
	{
	LINE_NUMBER(2718);
	sp[0].o = (jobject)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_plans;
	sp[0].o = (jobject)((func_arc_struct_Queue_removeFirst_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Queue_removeFirst_R_java_lang_Object])(ctx, sp[0].o);
	LINE_NUMBER(2719);
	sp[0].o = (jobject)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_plans;
	((func_arc_struct_Queue_addLast_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Queue_addLast_java_lang_Object])(ctx, sp[0].o, (frame[12].o));
	LINE_NUMBER(2720);
	INST_IINC(7, 1);
	LINE_NUMBER(2721);
	goto label_41;
	}
label_42:;
	{
	LINE_NUMBER(2722);
	if ((frame[10].i) != 0) goto label_35;
	}
	INST_ILOAD(11);
	if ((--sp)->i <= 0) goto label_35;
	{
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((func_mindustry_gen_LegsUnit_buildPlan_R_mindustry_entities_units_BuildPlan) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_gen_LegsUnit_buildPlan_R_mindustry_entities_units_BuildPlan])(ctx, (frame[0].o));
	jint temp0 = (jint)((func_mindustry_gen_LegsUnit_within_arc_math_geom_Position_float_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_gen_LegsUnit_within_arc_math_geom_Position_float_R_boolean])(ctx, sp[0].o, sp[1].o, (frame[1].f));
	if (temp0 != 0) goto label_35;
	}
	{
	LINE_NUMBER(2723);
	frame[12].i = (jint(0));
	}
label_59:;
	{
	if ((frame[12].i) >= (frame[11].i)) goto label_35;
	}
	{
	LINE_NUMBER(2724);
	sp[0].o = (jobject)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_plans;
	sp[1].o = (jobject)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_plans;
	sp[1].o = (jobject)((func_arc_struct_Queue_removeFirst_R_java_lang_Object) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_struct_Queue_removeFirst_R_java_lang_Object])(ctx, sp[1].o);
	((func_arc_struct_Queue_addLast_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Queue_addLast_java_lang_Object])(ctx, sp[0].o, (checkCast(ctx, &class_mindustry_entities_units_BuildPlan, sp[1].o)));
	LINE_NUMBER(2723);
	INST_IINC(12, 1);
	goto label_59;
	}
label_35:;
	{
	LINE_NUMBER(2728);
	sp[0].o = (jobject)((func_mindustry_gen_LegsUnit_buildPlan_R_mindustry_entities_units_BuildPlan) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_gen_LegsUnit_buildPlan_R_mindustry_entities_units_BuildPlan])(ctx, (frame[0].o));
	frame[7].o = sp[0].o;
	LINE_NUMBER(2729);
	sp[0].o = (jobject)((func_mindustry_entities_units_BuildPlan_tile_R_mindustry_world_Tile) ((void **) nullCheck(ctx, (frame[7].o))->vtable)[VTABLE_mindustry_entities_units_BuildPlan_tile_R_mindustry_world_Tile])(ctx, (frame[7].o));
	frame[8].o = sp[0].o;
	LINE_NUMBER(2730);
	((mindustry_gen_LegsUnit *) NULL_CHECK((frame[0].o)))->F_lastActive = (jref) (frame[7].o);
	LINE_NUMBER(2731);
	((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_buildAlpha = (jfloat(1));
	LINE_NUMBER(2732);
	if (((jint)((mindustry_entities_units_BuildPlan *) NULL_CHECK((frame[7].o)))->F_breaking) == 0) goto label_66;
	}
	{
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((func_mindustry_world_Tile_block_R_mindustry_world_Block) ((void **) nullCheck(ctx, (frame[8].o))->vtable)[VTABLE_mindustry_world_Tile_block_R_mindustry_world_Block])(ctx, (frame[8].o));
	((mindustry_gen_LegsUnit *) NULL_CHECK(sp[0].o))->F_lastSize = ((jint)((mindustry_world_Block *) NULL_CHECK(sp[1].o))->F_size);
	}
label_66:;
	{
	LINE_NUMBER(2733);
	jint temp0 = (jint)((func_mindustry_gen_LegsUnit_within_arc_math_geom_Position_float_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_gen_LegsUnit_within_arc_math_geom_Position_float_R_boolean])(ctx, (frame[0].o), (frame[8].o), (frame[1].f));
	if (temp0 != 0) goto label_67;
	}
	goto label_30;
label_67:;
	{
	LINE_NUMBER(2734);
	if ((clinit_mindustry_Vars(ctx), (jint)SF_mindustry_Vars_headless) != 0) goto label_68;
	}
	{
	LINE_NUMBER(2735);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_control;
	sp[0].o = (jobject)((mindustry_core_Control *) NULL_CHECK(sp[0].o))->F_sound;
	clinit_mindustry_gen_Sounds(ctx);
	sp[1].o = (jobject)SF_mindustry_gen_Sounds_loopBuild;
	((func_mindustry_audio_SoundControl_loop_arc_audio_Sound_arc_math_geom_Position_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_audio_SoundControl_loop_arc_audio_Sound_arc_math_geom_Position_float])(ctx, sp[0].o, sp[1].o, (frame[8].o), (jfloat(1.3f)));
	}
label_68:;
	{
	LINE_NUMBER(2737);
	sp[0].o = (jobject)((mindustry_entities_units_BuildPlan *) NULL_CHECK((frame[7].o)))->F_block;
	if (sp[0].o == nullptr) goto label_70;
	}
	{
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	jint temp0 = (jint)((func_mindustry_core_GameState_isEditor_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_GameState_isEditor_R_boolean])(ctx, sp[0].o);
	if (temp0 != 0) goto label_71;
	}
	{
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	sp[0].o = (jobject)((mindustry_core_GameState *) NULL_CHECK(sp[0].o))->F_rules;
	if (((jint)((mindustry_game_Rules *) NULL_CHECK(sp[0].o))->F_waves) == 0) goto label_72;
	}
	{
	sp[0].o = (jobject)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_team;
	clinit_mindustry_Vars(ctx);
	sp[1].o = (jobject)SF_mindustry_Vars_state;
	sp[1].o = (jobject)((mindustry_core_GameState *) NULL_CHECK(sp[1].o))->F_rules;
	sp[1].o = (jobject)((mindustry_game_Rules *) NULL_CHECK(sp[1].o))->F_waveTeam;
	if (sp[0].o != sp[1].o) goto label_72;
	}
	{
	sp[0].o = (jobject)((mindustry_entities_units_BuildPlan *) NULL_CHECK((frame[7].o)))->F_block;
	jint temp0 = (jint)((func_mindustry_world_Block_isVisible_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_Block_isVisible_R_boolean])(ctx, sp[0].o);
	if (temp0 != 0) goto label_71;
	}
label_72:;
	{
	sp[0].o = (jobject)((mindustry_entities_units_BuildPlan *) NULL_CHECK((frame[7].o)))->F_block;
	jint temp0 = (jint)((func_mindustry_world_Block_unlockedNowHost_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_Block_unlockedNowHost_R_boolean])(ctx, sp[0].o);
	if (temp0 == 0) goto label_70;
	}
	{
	sp[0].o = (jobject)((mindustry_entities_units_BuildPlan *) NULL_CHECK((frame[7].o)))->F_block;
	jint temp0 = (jint)((func_mindustry_world_Block_environmentBuildable_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_Block_environmentBuildable_R_boolean])(ctx, sp[0].o);
	if (temp0 == 0) goto label_70;
	}
	{
	sp[0].o = (jobject)((mindustry_entities_units_BuildPlan *) NULL_CHECK((frame[7].o)))->F_block;
	jint temp0 = (jint)((func_mindustry_world_Block_isPlaceable_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_Block_isPlaceable_R_boolean])(ctx, sp[0].o);
	if (temp0 == 0) goto label_70;
	}
label_71:;
	INST_ICONST(1);
	goto label_73;
label_70:;
	INST_ICONST(0);
label_73:;
	{
	sp -= 1;
	frame[9].i = sp[0].i;
	LINE_NUMBER(2738);
	sp[0].o = (jobject)((mindustry_world_Tile *) NULL_CHECK((frame[8].o)))->F_build;
	frame[11].o = sp[0].o;
	if ((isInstance(ctx, (frame[11].o), &class_mindustry_world_blocks_ConstructBlock$ConstructBuild)) == 0) goto label_75;
	}
	{
	frame[10].o = (checkCast(ctx, &class_mindustry_world_blocks_ConstructBlock$ConstructBuild, (frame[11].o)));
	goto label_77;
	}
label_75:;
	{
	LINE_NUMBER(2739);
	if (((jint)((mindustry_entities_units_BuildPlan *) NULL_CHECK((frame[7].o)))->F_initialized) != 0) goto label_78;
	}
	{
	if (((jint)((mindustry_entities_units_BuildPlan *) NULL_CHECK((frame[7].o)))->F_breaking) != 0) goto label_78;
	}
	{
	sp[0].o = (jobject)((mindustry_entities_units_BuildPlan *) NULL_CHECK((frame[7].o)))->F_block;
	sp[1].o = (jobject)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_team;
	jint temp0 = (jint)SM_mindustry_world_Build_validPlaceIgnoreUnits_mindustry_world_Block_mindustry_game_Team_int_int_int_boolean_boolean_R_boolean(ctx, sp[0].o, sp[1].o, ((jint)((mindustry_entities_units_BuildPlan *) NULL_CHECK((frame[7].o)))->F_x), ((jint)((mindustry_entities_units_BuildPlan *) NULL_CHECK((frame[7].o)))->F_y), ((jint)((mindustry_entities_units_BuildPlan *) NULL_CHECK((frame[7].o)))->F_rotation), (jint(1)), (jint(1)));
	if (temp0 == 0) goto label_78;
	}
	INST_ILOAD(9);
	if ((--sp)->i == 0) goto label_78;
	{
	LINE_NUMBER(2740);
	sp[0].o = (jobject)((mindustry_entities_units_BuildPlan *) NULL_CHECK((frame[7].o)))->F_block;
	jint temp0 = (jint)SM_mindustry_world_Build_checkNoUnitOverlap_mindustry_world_Block_int_int_R_boolean(ctx, sp[0].o, ((jint)((mindustry_entities_units_BuildPlan *) NULL_CHECK((frame[7].o)))->F_x), ((jint)((mindustry_entities_units_BuildPlan *) NULL_CHECK((frame[7].o)))->F_y));
	if (temp0 == 0) goto label_80;
	}
	{
	LINE_NUMBER(2741);
	if ((frame[2].i) != 0) goto label_82;
	}
	{
	sp[0].o = frame[7].o;
	sp[1].o = (jobject)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_team;
	jint temp0 = (jint)((func_mindustry_entities_units_BuildPlan_isRotation_mindustry_game_Team_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_entities_units_BuildPlan_isRotation_mindustry_game_Team_R_boolean])(ctx, sp[0].o, sp[1].o);
	if (temp0 != 0) goto label_82;
	}
	{
	sp[0].o = (jobject)((func_mindustry_world_Tile_team_R_mindustry_game_Team) ((void **) nullCheck(ctx, (frame[8].o))->vtable)[VTABLE_mindustry_world_Tile_team_R_mindustry_game_Team])(ctx, (frame[8].o));
	clinit_mindustry_game_Team(ctx);
	sp[1].o = (jobject)SF_mindustry_game_Team_derelict;
	if (sp[0].o != sp[1].o) goto label_83;
	}
	{
	sp[0].o = (jobject)((func_mindustry_world_Tile_block_R_mindustry_world_Block) ((void **) nullCheck(ctx, (frame[8].o))->vtable)[VTABLE_mindustry_world_Tile_block_R_mindustry_world_Block])(ctx, (frame[8].o));
	sp[1].o = (jobject)((mindustry_entities_units_BuildPlan *) NULL_CHECK((frame[7].o)))->F_block;
	if (sp[0].o != sp[1].o) goto label_83;
	}
	{
	sp[0].o = (jobject)((mindustry_world_Tile *) NULL_CHECK((frame[8].o)))->F_build;
	if (sp[0].o == nullptr) goto label_83;
	}
	{
	sp[0].o = (jobject)((func_mindustry_world_Tile_block_R_mindustry_world_Block) ((void **) nullCheck(ctx, (frame[8].o))->vtable)[VTABLE_mindustry_world_Tile_block_R_mindustry_world_Block])(ctx, (frame[8].o));
	if (((jint)((mindustry_world_Block *) NULL_CHECK(sp[0].o))->F_allowDerelictRepair) == 0) goto label_83;
	}
	{
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	sp[0].o = (jobject)((mindustry_core_GameState *) NULL_CHECK(sp[0].o))->F_rules;
	if (((jint)((mindustry_game_Rules *) NULL_CHECK(sp[0].o))->F_derelictRepair) != 0) goto label_82;
	}
label_83:;
	{
	sp[0].o = (jobject)((mindustry_entities_units_BuildPlan *) NULL_CHECK((frame[7].o)))->F_block;
	sp[0].o = (jobject)((mindustry_world_Block *) NULL_CHECK(sp[0].o))->F_requirements;
	{ /* InvokeDynamic */
		clinit_mindustry_gen_LegsUnit_invoke_arc_func_Boolf_19(ctx);
		auto proxy = (mindustry_gen_LegsUnit_invoke_arc_func_Boolf_19 *) gcAlloc(ctx, &class_mindustry_gen_LegsUnit_invoke_arc_func_Boolf_19);
		proxy->F_field0 = (jref) (frame[6].o);
		sp[1].o = (jobject) proxy;
	}
	jint temp0 = (jint)SM_arc_util_Structs_contains_Array1_java_lang_Object_arc_func_Boolf_R_boolean(ctx, sp[0].o, sp[1].o);
	if (temp0 != 0) goto label_84;
	}
label_82:;
	INST_ICONST(1);
	goto label_85;
label_84:;
	INST_ICONST(0);
label_85:;
	{
	sp -= 1;
	frame[11].i = sp[0].i;
	LINE_NUMBER(2742);
	if ((frame[11].i) == 0) goto label_87;
	}
	{
	LINE_NUMBER(2743);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((mindustry_entities_units_BuildPlan *) NULL_CHECK((frame[7].o)))->F_block;
	sp[2].o = (jobject)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_team;
	jint temp0 = (jint)((mindustry_entities_units_BuildPlan *) NULL_CHECK((frame[7].o)))->F_x;
	jint temp1 = (jint)((mindustry_entities_units_BuildPlan *) NULL_CHECK((frame[7].o)))->F_y;
	jint temp2 = (jint)((mindustry_entities_units_BuildPlan *) NULL_CHECK((frame[7].o)))->F_rotation;
	sp[3].o = (jobject)((mindustry_entities_units_BuildPlan *) NULL_CHECK((frame[7].o)))->F_block;
	jobject temp3 = sp[3].o;
	sp[3].i = temp0;
	sp[4].i = temp1;
	sp[5].i = temp2;
	sp += 6;
	if (((jint)((mindustry_world_Block *) NULL_CHECK(temp3))->F_instantBuild) == 0) goto label_89;
	}
	{
	sp[0].o = (jobject)((mindustry_entities_units_BuildPlan *) NULL_CHECK((frame[7].o)))->F_config;
	sp += 1;
	goto label_90;
	}
label_89:;
	INST_ACONST_NULL();
label_90:;
	{
	sp -= 7;
	SM_mindustry_gen_Call_beginPlace_mindustry_gen_Unit_mindustry_world_Block_mindustry_game_Team_int_int_int_java_lang_Object(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].i, sp[4].i, sp[5].i, sp[6].o);
	LINE_NUMBER(2744);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_net;
	jint temp0 = (jint)((func_mindustry_net_Net_client_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_net_Net_client_R_boolean])(ctx, sp[0].o);
	if (temp0 != 0) goto label_92;
	}
	{
	sp[0].o = (jobject)((mindustry_entities_units_BuildPlan *) NULL_CHECK((frame[7].o)))->F_block;
	if (((jint)((mindustry_world_Block *) NULL_CHECK(sp[0].o))->F_instantBuild) == 0) goto label_92;
	}
	{
	LINE_NUMBER(2745);
	sp[0].o = (jobject)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_plans;
	if (((jint)((arc_struct_Queue *) NULL_CHECK(sp[0].o))->F_size) <= 0) goto label_30;
	}
	{
	LINE_NUMBER(2746);
	sp[0].o = (jobject)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_plans;
	sp[0].o = (jobject)((func_arc_struct_Queue_removeFirst_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Queue_removeFirst_R_java_lang_Object])(ctx, sp[0].o);
	goto label_30;
	}
label_87:;
	{
	LINE_NUMBER(2751);
	((mindustry_entities_units_BuildPlan *) NULL_CHECK((frame[7].o)))->F_stuck = (jint(1));
	}
label_92:;
	LINE_NUMBER(2753);
	goto label_95;
label_80:;
	{
	LINE_NUMBER(2754);
	sp[0].o = (jobject)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_plans;
	sp[0].o = (jobject)((func_arc_struct_Queue_removeFirst_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Queue_removeFirst_R_java_lang_Object])(ctx, sp[0].o);
	LINE_NUMBER(2755);
	sp[0].o = (jobject)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_plans;
	((func_arc_struct_Queue_addLast_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Queue_addLast_java_lang_Object])(ctx, sp[0].o, (frame[7].o));
	LINE_NUMBER(2756);
	goto label_30;
	}
label_78:;
	{
	LINE_NUMBER(2758);
	if (((jint)((mindustry_entities_units_BuildPlan *) NULL_CHECK((frame[7].o)))->F_initialized) != 0) goto label_98;
	}
	{
	if (((jint)((mindustry_entities_units_BuildPlan *) NULL_CHECK((frame[7].o)))->F_breaking) == 0) goto label_98;
	}
	{
	sp[0].o = (jobject)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_team;
	jint temp0 = (jint)SM_mindustry_world_Build_validBreak_mindustry_game_Team_int_int_R_boolean(ctx, sp[0].o, ((jint)((mindustry_entities_units_BuildPlan *) NULL_CHECK((frame[7].o)))->F_x), ((jint)((mindustry_entities_units_BuildPlan *) NULL_CHECK((frame[7].o)))->F_y));
	if (temp0 == 0) goto label_98;
	}
	{
	LINE_NUMBER(2759);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_team;
	SM_mindustry_gen_Call_beginBreak_mindustry_gen_Unit_mindustry_game_Team_int_int(ctx, sp[0].o, sp[1].o, ((jint)((mindustry_entities_units_BuildPlan *) NULL_CHECK((frame[7].o)))->F_x), ((jint)((mindustry_entities_units_BuildPlan *) NULL_CHECK((frame[7].o)))->F_y));
	goto label_95;
	}
label_98:;
	{
	LINE_NUMBER(2761);
	sp[0].o = (jobject)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_plans;
	sp[0].o = (jobject)((func_arc_struct_Queue_removeFirst_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Queue_removeFirst_R_java_lang_Object])(ctx, sp[0].o);
	LINE_NUMBER(2762);
	goto label_30;
	}
label_77:;
	{
	LINE_NUMBER(2764);
	sp[0].o = (jobject)((func_mindustry_world_Tile_team_R_mindustry_game_Team) ((void **) nullCheck(ctx, (frame[8].o))->vtable)[VTABLE_mindustry_world_Tile_team_R_mindustry_game_Team])(ctx, (frame[8].o));
	sp[1].o = (jobject)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_team;
	if (sp[0].o == sp[1].o) goto label_101;
	}
	{
	sp[0].o = (jobject)((func_mindustry_world_Tile_team_R_mindustry_game_Team) ((void **) nullCheck(ctx, (frame[8].o))->vtable)[VTABLE_mindustry_world_Tile_team_R_mindustry_game_Team])(ctx, (frame[8].o));
	clinit_mindustry_game_Team(ctx);
	sp[1].o = (jobject)SF_mindustry_game_Team_derelict;
	if (sp[0].o != sp[1].o) goto label_102;
	}
label_101:;
	{
	if (((jint)((mindustry_entities_units_BuildPlan *) NULL_CHECK((frame[7].o)))->F_breaking) != 0) goto label_95;
	}
	{
	sp[0].o = (jobject)((mindustry_world_blocks_ConstructBlock$ConstructBuild *) NULL_CHECK((frame[10].o)))->F_current;
	sp[1].o = (jobject)((mindustry_entities_units_BuildPlan *) NULL_CHECK((frame[7].o)))->F_block;
	if (sp[0].o != sp[1].o) goto label_102;
	}
	{
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[10].o)))->F_tile;
	sp[1].o = (jobject)((func_mindustry_entities_units_BuildPlan_tile_R_mindustry_world_Tile) ((void **) nullCheck(ctx, (frame[7].o))->vtable)[VTABLE_mindustry_entities_units_BuildPlan_tile_R_mindustry_world_Tile])(ctx, (frame[7].o));
	if (sp[0].o == sp[1].o) goto label_95;
	}
label_102:;
	{
	LINE_NUMBER(2765);
	sp[0].o = (jobject)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_plans;
	sp[0].o = (jobject)((func_arc_struct_Queue_removeFirst_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Queue_removeFirst_R_java_lang_Object])(ctx, sp[0].o);
	LINE_NUMBER(2766);
	goto label_30;
	}
label_95:;
	{
	LINE_NUMBER(2768);
	sp[0].o = (jobject)((mindustry_world_Tile *) NULL_CHECK((frame[8].o)))->F_build;
	if ((isInstance(ctx, sp[0].o, &class_mindustry_world_blocks_ConstructBlock$ConstructBuild)) == 0) goto label_104;
	}
	{
	if (((jint)((mindustry_entities_units_BuildPlan *) NULL_CHECK((frame[7].o)))->F_initialized) != 0) goto label_104;
	}
	{
	LINE_NUMBER(2769);
	clinit_mindustry_game_EventType$BuildSelectEvent(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_game_EventType$BuildSelectEvent);
	sp[1].o = frame[8].o;
	sp[2].o = (jobject)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_team;
	init_mindustry_game_EventType$BuildSelectEvent_mindustry_world_Tile_mindustry_game_Team_mindustry_gen_Unit_boolean(ctx, sp[0].o, sp[1].o, sp[2].o, (frame[0].o), ((jint)((mindustry_entities_units_BuildPlan *) NULL_CHECK((frame[7].o)))->F_breaking));
	SM_arc_Events_fire_java_lang_Object(ctx, sp[0].o);
	LINE_NUMBER(2770);
	((mindustry_entities_units_BuildPlan *) NULL_CHECK((frame[7].o)))->F_initialized = (jint(1));
	}
label_104:;
	{
	LINE_NUMBER(2772);
	sp[0].o = (jobject)((mindustry_world_Tile *) NULL_CHECK((frame[8].o)))->F_build;
	frame[11].o = sp[0].o;
	if ((isInstance(ctx, (frame[11].o), &class_mindustry_world_blocks_ConstructBlock$ConstructBuild)) == 0) goto label_30;
	}
	{
	frame[10].o = (checkCast(ctx, &class_mindustry_world_blocks_ConstructBlock$ConstructBuild, (frame[11].o)));
	LINE_NUMBER(2775);
	jfloat temp0 = (jfloat(1)) / ((jfloat)((mindustry_world_blocks_ConstructBlock$ConstructBuild *) NULL_CHECK((frame[10].o)))->F_buildCost);
	sp[0].o = (jobject)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_type;
	jfloat temp1 = (temp0 * ((jfloat)((mindustry_type_UnitType *) NULL_CHECK(sp[0].o))->F_buildSpeed)) * ((jfloat)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_buildSpeedMultiplier);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	sp[0].o = (jobject)((mindustry_core_GameState *) NULL_CHECK(sp[0].o))->F_rules;
	sp[1].o = (jobject)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_team;
	jfloat temp2 = (jfloat)((func_mindustry_game_Rules_buildSpeed_mindustry_game_Team_R_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_game_Rules_buildSpeed_mindustry_game_Team_R_float])(ctx, sp[0].o, sp[1].o);
	frame[11].f = (temp1 * temp2);
	LINE_NUMBER(2776);
	if (((jint)((mindustry_entities_units_BuildPlan *) NULL_CHECK((frame[7].o)))->F_breaking) == 0) goto label_109;
	}
	{
	LINE_NUMBER(2777);
	((func_mindustry_world_blocks_ConstructBlock$ConstructBuild_deconstruct_mindustry_gen_Unit_mindustry_world_blocks_storage_CoreBlock$CoreBuild_float) ((void **) nullCheck(ctx, (frame[10].o))->vtable)[VTABLE_mindustry_world_blocks_ConstructBlock$ConstructBuild_deconstruct_mindustry_gen_Unit_mindustry_world_blocks_storage_CoreBlock$CoreBuild_float])(ctx, (frame[10].o), (frame[0].o), (frame[6].o), (frame[11].f));
	goto label_111;
	}
label_109:;
	{
	LINE_NUMBER(2778);
	if ((frame[9].i) == 0) goto label_111;
	}
	{
	LINE_NUMBER(2779);
	sp[0].o = frame[10].o;
	sp[1].o = frame[0].o;
	sp[2].o = frame[6].o;
	jfloat temp0 = frame[11].f;
	sp[3].o = (jobject)((mindustry_entities_units_BuildPlan *) NULL_CHECK((frame[7].o)))->F_config;
	((func_mindustry_world_blocks_ConstructBlock$ConstructBuild_construct_mindustry_gen_Unit_mindustry_gen_Building_float_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_blocks_ConstructBlock$ConstructBuild_construct_mindustry_gen_Unit_mindustry_gen_Building_float_java_lang_Object])(ctx, sp[0].o, sp[1].o, sp[2].o, temp0, sp[3].o);
	}
label_111:;
	{
	LINE_NUMBER(2781);
	sp[0].o = frame[7].o;
	jint temp0 = (jint)SM_arc_math_Mathf_equal_float_float_R_boolean(ctx, ((jfloat)((mindustry_entities_units_BuildPlan *) NULL_CHECK((frame[7].o)))->F_progress), ((jfloat)((mindustry_world_blocks_ConstructBlock$ConstructBuild *) NULL_CHECK((frame[10].o)))->F_progress));
	((mindustry_entities_units_BuildPlan *) NULL_CHECK(sp[0].o))->F_stuck = temp0;
	LINE_NUMBER(2782);
	((mindustry_entities_units_BuildPlan *) NULL_CHECK((frame[7].o)))->F_progress = ((jfloat)((mindustry_world_blocks_ConstructBlock$ConstructBuild *) NULL_CHECK((frame[10].o)))->F_progress);
	LINE_NUMBER(2783);
	goto label_30;
	}
label_32:;
	LINE_NUMBER(2784);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_gen_LegsUnit_updateDrowning(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/LegsUnit:updateDrowning", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(2788);
	sp[0].o = (jobject)((func_mindustry_gen_LegsUnit_drownFloor_R_mindustry_world_blocks_environment_Floor) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_gen_LegsUnit_drownFloor_R_mindustry_world_blocks_environment_Floor])(ctx, (frame[0].o));
	frame[1].o = sp[0].o;
	LINE_NUMBER(2789);
	if ((frame[1].o) == nullptr) goto label_2;
	}
	{
	if (((jint)((mindustry_world_blocks_environment_Floor *) NULL_CHECK((frame[1].o)))->F_isLiquid) == 0) goto label_2;
	}
	{
	if ((floatCompare(((jfloat)((mindustry_world_blocks_environment_Floor *) NULL_CHECK((frame[1].o)))->F_drownTime), (jfloat(0)), -1)) <= 0) goto label_2;
	}
	{
	jint temp0 = (jint)((func_mindustry_gen_LegsUnit_canDrown_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_gen_LegsUnit_canDrown_R_boolean])(ctx, (frame[0].o));
	if (temp0 == 0) goto label_2;
	}
	{
	LINE_NUMBER(2790);
	((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_lastDrownFloor = (jref) (frame[1].o);
	LINE_NUMBER(2791);
	sp[0].o = frame[0].o;
	jfloat temp0 = (jfloat)((mindustry_gen_Unit *) NULL_CHECK(sp[0].o))->F_drownTime;
	clinit_arc_util_Time(ctx);
	jfloat temp1 = (jfloat)SF_arc_util_Time_delta;
	jfloat temp2 = ((jfloat)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_hitSize) / (jfloat(8.0f));
	sp[1].o = (jobject)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_type;
	((mindustry_gen_Unit *) NULL_CHECK(sp[0].o))->F_drownTime = (temp0 + (temp1 / ((temp2 * ((jfloat)((mindustry_type_UnitType *) NULL_CHECK(sp[1].o))->F_drownTimeMultiplier)) * ((jfloat)((mindustry_world_blocks_environment_Floor *) NULL_CHECK((frame[1].o)))->F_drownTime))));
	LINE_NUMBER(2792);
	jint temp3 = (jint)SM_arc_math_Mathf_chanceDelta_double_R_boolean(ctx, (jdouble(0.05000000074505806)));
	if (temp3 == 0) goto label_6;
	}
	{
	LINE_NUMBER(2793);
	sp[0].o = (jobject)((mindustry_world_blocks_environment_Floor *) NULL_CHECK((frame[1].o)))->F_drownUpdateEffect;
	jfloat temp0 = (jfloat)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_x;
	jfloat temp1 = (jfloat)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_y;
	jfloat temp2 = (jfloat)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_hitSize;
	sp[1].o = (jobject)((mindustry_world_Block *) NULL_CHECK((frame[1].o)))->F_mapColor;
	((func_mindustry_entities_Effect_at_float_float_float_arc_graphics_Color) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_entities_Effect_at_float_float_float_arc_graphics_Color])(ctx, sp[0].o, temp0, temp1, temp2, sp[1].o);
	}
label_6:;
	{
	LINE_NUMBER(2795);
	if ((floatCompare(((jfloat)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_drownTime), (jfloat(0.999f)), -1)) < 0) goto label_8;
	}
	{
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_net;
	jint temp0 = (jint)((func_mindustry_net_Net_client_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_net_Net_client_R_boolean])(ctx, sp[0].o);
	if (temp0 != 0) goto label_8;
	}
	{
	LINE_NUMBER(2796);
	((func_mindustry_gen_LegsUnit_kill) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_gen_LegsUnit_kill])(ctx, (frame[0].o));
	LINE_NUMBER(2797);
	clinit_mindustry_game_EventType$UnitDrownEvent(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_game_EventType$UnitDrownEvent);
	init_mindustry_game_EventType$UnitDrownEvent_mindustry_gen_Unit(ctx, sp[0].o, (frame[0].o));
	SM_arc_Events_fire_java_lang_Object(ctx, sp[0].o);
	goto label_8;
	}
label_2:;
	{
	LINE_NUMBER(2800);
	sp[0].o = frame[0].o;
	((mindustry_gen_Unit *) NULL_CHECK(sp[0].o))->F_drownTime = (((jfloat)((mindustry_gen_Unit *) NULL_CHECK(sp[0].o))->F_drownTime) - ((clinit_arc_util_Time(ctx), (jfloat)SF_arc_util_Time_delta) / (jfloat(50.0f))));
	}
label_8:;
	{
	LINE_NUMBER(2802);
	sp[0].o = frame[0].o;
	jfloat temp0 = (jfloat)SM_arc_math_Mathf_clamp_float_R_float(ctx, ((jfloat)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_drownTime));
	((mindustry_gen_Unit *) NULL_CHECK(sp[0].o))->F_drownTime = temp0;
	LINE_NUMBER(2803);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_gen_LegsUnit_updateLastPosition(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/LegsUnit:updateLastPosition", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(2807);
	((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_deltaX = (((jfloat)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_x) - ((jfloat)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_lastX));
	LINE_NUMBER(2808);
	((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_deltaY = (((jfloat)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_y) - ((jfloat)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_lastY));
	LINE_NUMBER(2809);
	((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_lastX = ((jfloat)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_x);
	LINE_NUMBER(2810);
	((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_lastY = ((jfloat)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_y);
	LINE_NUMBER(2811);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_gen_LegsUnit_validatePlans(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/LegsUnit:validatePlans", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(2815);
	sp[0].o = (jobject)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_plans;
	if (((jint)((arc_struct_Queue *) NULL_CHECK(sp[0].o))->F_size) <= 0) goto label_1;
	}
	{
	LINE_NUMBER(2816);
	sp[0].o = (jobject)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_plans;
	sp[0].o = (jobject)((func_arc_struct_Queue_iterator_R_java_util_Iterator) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Queue_iterator_R_java_util_Iterator])(ctx, sp[0].o);
	frame[1].o = sp[0].o;
	}
label_3:;
	{
	LINE_NUMBER(2817);
	jint temp0 = (jint)((func_java_util_Iterator_hasNext_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_hasNext_R_boolean, (frame[1].o)))(ctx, (frame[1].o));
	if (temp0 == 0) goto label_1;
	}
	{
	LINE_NUMBER(2818);
	sp[0].o = (jobject)((func_java_util_Iterator_next_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_next_R_java_lang_Object, (frame[1].o)))(ctx, (frame[1].o));
	frame[2].o = (checkCast(ctx, &class_mindustry_entities_units_BuildPlan, sp[0].o));
	LINE_NUMBER(2819);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_world;
	sp[0].o = (jobject)((func_mindustry_core_World_tile_int_int_R_mindustry_world_Tile) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_World_tile_int_int_R_mindustry_world_Tile])(ctx, sp[0].o, ((jint)((mindustry_entities_units_BuildPlan *) NULL_CHECK((frame[2].o)))->F_x), ((jint)((mindustry_entities_units_BuildPlan *) NULL_CHECK((frame[2].o)))->F_y));
	frame[3].o = sp[0].o;
	LINE_NUMBER(2820);
	if ((frame[3].o) == nullptr) goto label_7;
	}
	{
	sp[0].o = (jobject)((mindustry_world_Tile *) NULL_CHECK((frame[3].o)))->F_build;
	if (sp[0].o == nullptr) goto label_7;
	}
	{
	sp[0].o = (jobject)((func_mindustry_world_Tile_block_R_mindustry_world_Block) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_mindustry_world_Tile_block_R_mindustry_world_Block])(ctx, (frame[3].o));
	sp[1].o = (jobject)((mindustry_entities_units_BuildPlan *) NULL_CHECK((frame[2].o)))->F_block;
	if (sp[0].o != sp[1].o) goto label_7;
	}
	{
	sp[0].o = (jobject)((mindustry_world_Tile *) NULL_CHECK((frame[3].o)))->F_build;
	jint temp0 = (jint)((func_mindustry_gen_Building_tileX_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_gen_Building_tileX_R_int])(ctx, sp[0].o);
	if (temp0 != ((jint)((mindustry_entities_units_BuildPlan *) NULL_CHECK((frame[2].o)))->F_x)) goto label_7;
	}
	{
	sp[0].o = (jobject)((mindustry_world_Tile *) NULL_CHECK((frame[3].o)))->F_build;
	jint temp0 = (jint)((func_mindustry_gen_Building_tileY_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_gen_Building_tileY_R_int])(ctx, sp[0].o);
	if (temp0 != ((jint)((mindustry_entities_units_BuildPlan *) NULL_CHECK((frame[2].o)))->F_y)) goto label_7;
	}
	{
	sp[0].o = (jobject)((func_mindustry_world_Tile_team_R_mindustry_game_Team) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_mindustry_world_Tile_team_R_mindustry_game_Team])(ctx, (frame[3].o));
	clinit_mindustry_game_Team(ctx);
	sp[1].o = (jobject)SF_mindustry_game_Team_derelict;
	if (sp[0].o != sp[1].o) goto label_7;
	}
	INST_ICONST(1);
	goto label_8;
label_7:;
	INST_ICONST(0);
label_8:;
	{
	sp -= 1;
	frame[4].i = sp[0].i;
	LINE_NUMBER(2821);
	if ((frame[3].o) == nullptr) goto label_10;
	}
	{
	if (((jint)((mindustry_entities_units_BuildPlan *) NULL_CHECK((frame[2].o)))->F_breaking) == 0) goto label_11;
	}
	{
	sp[0].o = (jobject)((func_mindustry_world_Tile_block_R_mindustry_world_Block) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_mindustry_world_Tile_block_R_mindustry_world_Block])(ctx, (frame[3].o));
	clinit_mindustry_content_Blocks(ctx);
	sp[1].o = (jobject)SF_mindustry_content_Blocks_air;
	if (sp[0].o == sp[1].o) goto label_10;
	}
label_11:;
	{
	if (((jint)((mindustry_entities_units_BuildPlan *) NULL_CHECK((frame[2].o)))->F_breaking) != 0) goto label_12;
	}
	{
	sp[0].o = (jobject)((mindustry_world_Tile *) NULL_CHECK((frame[3].o)))->F_build;
	if (sp[0].o == nullptr) goto label_13;
	}
	{
	sp[0].o = (jobject)((mindustry_world_Tile *) NULL_CHECK((frame[3].o)))->F_build;
	if (((jint)((mindustry_gen_Building *) NULL_CHECK(sp[0].o))->F_rotation) != ((jint)((mindustry_entities_units_BuildPlan *) NULL_CHECK((frame[2].o)))->F_rotation)) goto label_13;
	}
	INST_ILOAD(4);
	if ((--sp)->i == 0) goto label_14;
label_13:;
	{
	sp[0].o = (jobject)((mindustry_entities_units_BuildPlan *) NULL_CHECK((frame[2].o)))->F_block;
	if (((jint)((mindustry_world_Block *) NULL_CHECK(sp[0].o))->F_rotate) != 0) goto label_12;
	}
label_14:;
	{
	sp[0].o = (jobject)((func_mindustry_world_Tile_block_R_mindustry_world_Block) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_mindustry_world_Tile_block_R_mindustry_world_Block])(ctx, (frame[3].o));
	sp[1].o = (jobject)((mindustry_entities_units_BuildPlan *) NULL_CHECK((frame[2].o)))->F_block;
	if (sp[0].o != sp[1].o) goto label_15;
	}
	INST_ILOAD(4);
	if ((--sp)->i == 0) goto label_10;
label_15:;
	{
	sp[0].o = (jobject)((mindustry_entities_units_BuildPlan *) NULL_CHECK((frame[2].o)))->F_block;
	if (sp[0].o == nullptr) goto label_12;
	}
	{
	sp[0].o = (jobject)((mindustry_entities_units_BuildPlan *) NULL_CHECK((frame[2].o)))->F_block;
	jint temp0 = (jint)((func_mindustry_world_Block_isOverlay_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_Block_isOverlay_R_boolean])(ctx, sp[0].o);
	if (temp0 == 0) goto label_16;
	}
	{
	sp[0].o = (jobject)((mindustry_entities_units_BuildPlan *) NULL_CHECK((frame[2].o)))->F_block;
	sp[1].o = (jobject)((func_mindustry_world_Tile_overlay_R_mindustry_world_blocks_environment_Floor) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_mindustry_world_Tile_overlay_R_mindustry_world_blocks_environment_Floor])(ctx, (frame[3].o));
	if (sp[0].o == sp[1].o) goto label_10;
	}
label_16:;
	{
	sp[0].o = (jobject)((mindustry_entities_units_BuildPlan *) NULL_CHECK((frame[2].o)))->F_block;
	jint temp0 = (jint)((func_mindustry_world_Block_isFloor_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_Block_isFloor_R_boolean])(ctx, sp[0].o);
	if (temp0 == 0) goto label_12;
	}
	{
	sp[0].o = (jobject)((mindustry_entities_units_BuildPlan *) NULL_CHECK((frame[2].o)))->F_block;
	sp[1].o = (jobject)((func_mindustry_world_Tile_floor_R_mindustry_world_blocks_environment_Floor) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_mindustry_world_Tile_floor_R_mindustry_world_blocks_environment_Floor])(ctx, (frame[3].o));
	if (sp[0].o != sp[1].o) goto label_12;
	}
label_10:;
	{
	LINE_NUMBER(2822);
	((func_java_util_Iterator_remove) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_remove, (frame[1].o)))(ctx, (frame[1].o));
	}
label_12:;
	LINE_NUMBER(2824);
	goto label_3;
label_1:;
	LINE_NUMBER(2826);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_gen_LegsUnit_velAddNet_arc_math_geom_Vec2(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/LegsUnit:velAddNet", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(2830);
	sp[0].o = (jobject)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_vel;
	sp[0].o = (jobject)((func_arc_math_geom_Vec2_add_arc_math_geom_Vec2_R_arc_math_geom_Vec2) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Vec2_add_arc_math_geom_Vec2_R_arc_math_geom_Vec2])(ctx, sp[0].o, (frame[1].o));
	LINE_NUMBER(2831);
	jint temp0 = (jint)((func_mindustry_gen_LegsUnit_isRemote_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_gen_LegsUnit_isRemote_R_boolean])(ctx, (frame[0].o));
	if (temp0 == 0) goto label_2;
	}
	{
	LINE_NUMBER(2832);
	sp[0].o = frame[0].o;
	((mindustry_gen_Unit *) NULL_CHECK(sp[0].o))->F_x = (((jfloat)((mindustry_gen_Unit *) NULL_CHECK(sp[0].o))->F_x) + ((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK((frame[1].o)))->F_x));
	LINE_NUMBER(2833);
	sp[0].o = frame[0].o;
	((mindustry_gen_Unit *) NULL_CHECK(sp[0].o))->F_y = (((jfloat)((mindustry_gen_Unit *) NULL_CHECK(sp[0].o))->F_y) + ((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK((frame[1].o)))->F_y));
	}
label_2:;
	LINE_NUMBER(2835);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_gen_LegsUnit_velAddNet_float_float(jcontext ctx, jobject self, jfloat param0, jfloat param1) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/LegsUnit:velAddNet", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	frame[2].f = param1;
	{
	LINE_NUMBER(2839);
	sp[0].o = (jobject)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_vel;
	sp[0].o = (jobject)((func_arc_math_geom_Vec2_add_float_float_R_arc_math_geom_Vec2) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Vec2_add_float_float_R_arc_math_geom_Vec2])(ctx, sp[0].o, (frame[1].f), (frame[2].f));
	LINE_NUMBER(2840);
	jint temp0 = (jint)((func_mindustry_gen_LegsUnit_isRemote_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_gen_LegsUnit_isRemote_R_boolean])(ctx, (frame[0].o));
	if (temp0 == 0) goto label_2;
	}
	{
	LINE_NUMBER(2841);
	sp[0].o = frame[0].o;
	((mindustry_gen_Unit *) NULL_CHECK(sp[0].o))->F_x = (((jfloat)((mindustry_gen_Unit *) NULL_CHECK(sp[0].o))->F_x) + (frame[1].f));
	LINE_NUMBER(2842);
	sp[0].o = frame[0].o;
	((mindustry_gen_Unit *) NULL_CHECK(sp[0].o))->F_y = (((jfloat)((mindustry_gen_Unit *) NULL_CHECK(sp[0].o))->F_y) + (frame[2].f));
	}
label_2:;
	LINE_NUMBER(2844);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_gen_LegsUnit_wobble(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/LegsUnit:wobble", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(2848);
	sp[0].o = frame[0].o;
	jfloat temp0 = (jfloat)((mindustry_gen_Unit *) NULL_CHECK(sp[0].o))->F_x;
	jfloat temp1 = (jfloat)SM_arc_math_Mathf_sin_float_float_float_R_float(ctx, ((clinit_arc_util_Time(ctx), (jfloat)SF_arc_util_Time_time) + (jfloat(((((jint)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_id) % (10)) * (12))))), (jfloat(25.0f)), (jfloat(0.05f)));
	((mindustry_gen_Unit *) NULL_CHECK(sp[0].o))->F_x = (temp0 + ((temp1 * (clinit_arc_util_Time(ctx), (jfloat)SF_arc_util_Time_delta)) * ((jfloat)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_elevation)));
	LINE_NUMBER(2849);
	sp[0].o = frame[0].o;
	jfloat temp2 = (jfloat)((mindustry_gen_Unit *) NULL_CHECK(sp[0].o))->F_y;
	jfloat temp3 = (jfloat)SM_arc_math_Mathf_cos_float_float_float_R_float(ctx, ((clinit_arc_util_Time(ctx), (jfloat)SF_arc_util_Time_time) + (jfloat(((((jint)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_id) % (10)) * (12))))), (jfloat(25.0f)), (jfloat(0.05f)));
	((mindustry_gen_Unit *) NULL_CHECK(sp[0].o))->F_y = (temp2 + ((temp3 * (clinit_arc_util_Time(ctx), (jfloat)SF_arc_util_Time_delta)) * ((jfloat)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_elevation)));
	LINE_NUMBER(2850);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_gen_LegsUnit_writeSync_arc_util_io_Writes(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/LegsUnit:writeSync", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(2853);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_abilities;
	SM_mindustry_io_TypeIO_writeAbilities_arc_util_io_Writes_Array1_mindustry_entities_abilities_Ability(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(2854);
	((func_arc_util_io_Writes_f_float) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_util_io_Writes_f_float])(ctx, (frame[1].o), ((jfloat)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_aimX));
	LINE_NUMBER(2855);
	((func_arc_util_io_Writes_f_float) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_util_io_Writes_f_float])(ctx, (frame[1].o), ((jfloat)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_aimY));
	LINE_NUMBER(2856);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((mindustry_gen_LegsUnit *) NULL_CHECK((frame[0].o)))->F_controller;
	SM_mindustry_io_TypeIO_writeController_arc_util_io_Writes_mindustry_entities_units_UnitController(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(2857);
	((func_arc_util_io_Writes_f_float) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_util_io_Writes_f_float])(ctx, (frame[1].o), ((jfloat)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_elevation));
	LINE_NUMBER(2858);
	((func_arc_util_io_Writes_d_double) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_util_io_Writes_d_double])(ctx, (frame[1].o), ((jdouble)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_flag));
	LINE_NUMBER(2859);
	((func_arc_util_io_Writes_f_float) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_util_io_Writes_f_float])(ctx, (frame[1].o), ((jfloat)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_health));
	LINE_NUMBER(2860);
	((func_arc_util_io_Writes_bool_boolean) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_util_io_Writes_bool_boolean])(ctx, (frame[1].o), ((jint)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_isShooting));
	LINE_NUMBER(2861);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_mineTile;
	SM_mindustry_io_TypeIO_writeTile_arc_util_io_Writes_mindustry_world_Tile(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(2862);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_mounts;
	SM_mindustry_io_TypeIO_writeMounts_arc_util_io_Writes_Array1_mindustry_entities_units_WeaponMount(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(2863);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_plans;
	SM_mindustry_io_TypeIO_writePlansQueueNet_arc_util_io_Writes_arc_struct_Queue(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(2864);
	((func_arc_util_io_Writes_f_float) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_util_io_Writes_f_float])(ctx, (frame[1].o), ((jfloat)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_rotation));
	LINE_NUMBER(2865);
	((func_arc_util_io_Writes_f_float) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_util_io_Writes_f_float])(ctx, (frame[1].o), ((jfloat)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_shield));
	LINE_NUMBER(2866);
	((func_arc_util_io_Writes_bool_boolean) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_util_io_Writes_bool_boolean])(ctx, (frame[1].o), ((jint)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_spawnedByCore));
	LINE_NUMBER(2867);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_stack;
	SM_mindustry_io_TypeIO_writeItems_arc_util_io_Writes_mindustry_type_ItemStack(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(2868);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((mindustry_gen_LegsUnit *) NULL_CHECK((frame[0].o)))->F_statuses;
	((func_arc_util_io_Writes_i_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_util_io_Writes_i_int])(ctx, sp[0].o, ((jint)((arc_struct_Seq *) NULL_CHECK(sp[1].o))->F_size));
	LINE_NUMBER(2869);
	frame[2].i = (jint(0));
	}
label_17:;
	{
	jint temp0 = frame[2].i;
	sp[0].o = (jobject)((mindustry_gen_LegsUnit *) NULL_CHECK((frame[0].o)))->F_statuses;
	if (temp0 >= ((jint)((arc_struct_Seq *) NULL_CHECK(sp[0].o))->F_size)) goto label_18;
	}
	{
	LINE_NUMBER(2870);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((mindustry_gen_LegsUnit *) NULL_CHECK((frame[0].o)))->F_statuses;
	sp[1].o = (jobject)((func_arc_struct_Seq_get_int_R_java_lang_Object) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_struct_Seq_get_int_R_java_lang_Object])(ctx, sp[1].o, (frame[2].i));
	SM_mindustry_io_TypeIO_writeStatus_arc_util_io_Writes_mindustry_entities_units_StatusEntry(ctx, sp[0].o, (checkCast(ctx, &class_mindustry_entities_units_StatusEntry, sp[1].o)));
	LINE_NUMBER(2869);
	INST_IINC(2, 1);
	goto label_17;
	}
label_18:;
	{
	LINE_NUMBER(2872);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_team;
	SM_mindustry_io_TypeIO_writeTeam_arc_util_io_Writes_mindustry_game_Team(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(2873);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_type;
	sp += 1;
	if (sp[0].o != nullptr) goto label_22;
	}
	INST_ICONST(-1);
	goto label_23;
label_22:;
	{
	sp[0].o = (jobject)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_type;
	jint temp0 = (jint)((mindustry_ctype_Content *) NULL_CHECK(sp[0].o))->F_id;
	sp[0].i = temp0;
	sp += 1;
	}
label_23:;
	{
	sp -= 2;
	((func_arc_util_io_Writes_s_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_util_io_Writes_s_int])(ctx, sp[0].o, sp[1].i);
	LINE_NUMBER(2874);
	((func_arc_util_io_Writes_bool_boolean) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_util_io_Writes_bool_boolean])(ctx, (frame[1].o), ((jint)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_updateBuilding));
	LINE_NUMBER(2875);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_vel;
	SM_mindustry_io_TypeIO_writeVec2_arc_util_io_Writes_arc_math_geom_Vec2(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(2876);
	((func_arc_util_io_Writes_f_float) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_util_io_Writes_f_float])(ctx, (frame[1].o), ((jfloat)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_x));
	LINE_NUMBER(2877);
	((func_arc_util_io_Writes_f_float) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_util_io_Writes_f_float])(ctx, (frame[1].o), ((jfloat)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_y));
	LINE_NUMBER(2879);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_gen_LegsUnit_writeSyncManual_java_nio_FloatBuffer(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/LegsUnit:writeSyncManual", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(2882);
	sp[0].o = (jobject)((func_java_nio_FloatBuffer_put_float_R_java_nio_FloatBuffer) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_nio_FloatBuffer_put_float_R_java_nio_FloatBuffer])(ctx, (frame[1].o), ((jfloat)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_rotation));
	LINE_NUMBER(2883);
	sp[0].o = (jobject)((func_java_nio_FloatBuffer_put_float_R_java_nio_FloatBuffer) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_nio_FloatBuffer_put_float_R_java_nio_FloatBuffer])(ctx, (frame[1].o), ((jfloat)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_x));
	LINE_NUMBER(2884);
	sp[0].o = (jobject)((func_java_nio_FloatBuffer_put_float_R_java_nio_FloatBuffer) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_nio_FloatBuffer_put_float_R_java_nio_FloatBuffer])(ctx, (frame[1].o), ((jfloat)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_y));
	LINE_NUMBER(2886);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jbool SM_mindustry_gen_LegsUnit_lambda$updateBuildLogic$0_mindustry_world_blocks_storage_CoreBlock$CoreBuild_mindustry_type_ItemStack_R_boolean(jcontext ctx, jobject param0, jobject param1) {
	jtype frame[6];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/LegsUnit:lambda$updateBuildLogic$0", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_gen_LegsUnit(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	{
	LINE_NUMBER(2741);
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_items;
	sp[1].o = (jobject)((mindustry_type_ItemStack *) NULL_CHECK((frame[1].o)))->F_item;
	jfloat temp0 = jfloat(((jint)((mindustry_type_ItemStack *) NULL_CHECK((frame[1].o)))->F_amount));
	clinit_mindustry_Vars(ctx);
	sp[2].o = (jobject)SF_mindustry_Vars_state;
	sp[2].o = (jobject)((mindustry_core_GameState *) NULL_CHECK(sp[2].o))->F_rules;
	jint temp1 = (jint)SM_arc_math_Mathf_round_float_R_int(ctx, (temp0 * ((jfloat)((mindustry_game_Rules *) NULL_CHECK(sp[2].o))->F_buildCostMultiplier)));
	jint temp2 = (jint)SM_java_lang_Math_min_int_int_R_int(ctx, temp1, (jint(1)));
	jint temp3 = (jint)((func_mindustry_world_modules_ItemModule_has_mindustry_type_Item_int_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_modules_ItemModule_has_mindustry_type_Item_int_R_boolean])(ctx, sp[0].o, sp[1].o, temp2);
	if (temp3 != 0) goto label_1;
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

jbool M_mindustry_gen_LegsUnit_lambda$unapply$0_mindustry_type_StatusEffect_mindustry_entities_units_StatusEntry_R_boolean(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/LegsUnit:lambda$unapply$0", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(2275);
	sp[0].o = (jobject)((mindustry_entities_units_StatusEntry *) NULL_CHECK((frame[2].o)))->F_effect;
	if (sp[0].o != (frame[1].o)) goto label_1;
	}
	{
	LINE_NUMBER(2276);
	sp[0].o = (jobject)((mindustry_entities_units_StatusEntry *) NULL_CHECK((frame[2].o)))->F_effect;
	((func_mindustry_type_StatusEffect_onRemoved_mindustry_gen_Unit) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_type_StatusEffect_onRemoved_mindustry_gen_Unit])(ctx, sp[0].o, (frame[0].o));
	LINE_NUMBER(2277);
	SM_arc_util_pooling_Pools_free_java_lang_Object(ctx, (frame[2].o));
	LINE_NUMBER(2278);
	popStackFrame(ctx);
	return (jint(1));
	}
label_1:;
	{
	LINE_NUMBER(2280);
	popStackFrame(ctx);
	return (jint(0));
	}

	popStackFrame(ctx);
}

jbool SM_mindustry_gen_LegsUnit_lambda$removeBuild$0_boolean_int_int_mindustry_entities_units_BuildPlan_R_boolean(jcontext ctx, jbool param0, jint param1, jint param2, jobject param3) {
	jtype frame[6];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/LegsUnit:lambda$removeBuild$0", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_gen_LegsUnit(ctx);
	frame[0].i = param0;
	frame[1].i = param1;
	frame[2].i = param2;
	frame[3].o = param3;
	{
	LINE_NUMBER(2027);
	if (((jint)((mindustry_entities_units_BuildPlan *) NULL_CHECK((frame[3].o)))->F_breaking) != (frame[0].i)) goto label_1;
	}
	{
	if (((jint)((mindustry_entities_units_BuildPlan *) NULL_CHECK((frame[3].o)))->F_x) != (frame[1].i)) goto label_1;
	}
	{
	if (((jint)((mindustry_entities_units_BuildPlan *) NULL_CHECK((frame[3].o)))->F_y) != (frame[2].i)) goto label_1;
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

jbool M_mindustry_gen_LegsUnit_lambda$destroy$0_float_mindustry_gen_Building_R_boolean(jcontext ctx, jobject self, jfloat param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/LegsUnit:lambda$destroy$0", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(1590);
	if ((isInstance(ctx, (frame[2].o), &class_mindustry_world_blocks_ExplosionShield)) == 0) goto label_1;
	}
	{
	frame[3].o = (checkCast(ctx, &class_mindustry_world_blocks_ExplosionShield, (frame[2].o)));
	jint temp0 = (jint)((func_mindustry_world_blocks_ExplosionShield_absorbExplosion_float_float_float_R_boolean) resolveInterfaceMethod(ctx, &class_mindustry_world_blocks_ExplosionShield, INDEX_mindustry_world_blocks_ExplosionShield_absorbExplosion_float_float_float_R_boolean, (frame[3].o)))(ctx, (frame[3].o), ((jfloat)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_x), ((jfloat)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_y), (frame[1].f));
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

void M_mindustry_gen_LegsUnit_lambda$clearStatuses$0_mindustry_entities_units_StatusEntry(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/LegsUnit:lambda$clearStatuses$0", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(1443);
	sp[0].o = (jobject)((mindustry_entities_units_StatusEntry *) NULL_CHECK((frame[1].o)))->F_effect;
	((func_mindustry_type_StatusEffect_onRemoved_mindustry_gen_Unit) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_type_StatusEffect_onRemoved_mindustry_gen_Unit])(ctx, sp[0].o, (frame[0].o));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jbool SM_mindustry_gen_LegsUnit_lambda$applyDynamicStatus$0_mindustry_entities_units_StatusEntry_R_boolean(jcontext ctx, jobject param0) {
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/LegsUnit:lambda$applyDynamicStatus$0", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_gen_LegsUnit(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(1211);
	sp[0].o = (jobject)((mindustry_entities_units_StatusEntry *) NULL_CHECK((frame[0].o)))->F_effect;
	popStackFrame(ctx);
	return ((jint)((mindustry_type_StatusEffect *) NULL_CHECK(sp[0].o))->F_dynamic);
	}

	popStackFrame(ctx);
}

jbool SM_mindustry_gen_LegsUnit_lambda$getDuration$0_mindustry_type_StatusEffect_mindustry_entities_units_StatusEntry_R_boolean(jcontext ctx, jobject param0, jobject param1) {
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/LegsUnit:lambda$getDuration$0", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_gen_LegsUnit(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	{
	LINE_NUMBER(1072);
	sp[0].o = (jobject)((mindustry_entities_units_StatusEntry *) NULL_CHECK((frame[1].o)))->F_effect;
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

jbool SM_mindustry_gen_LegsUnit_lambda$sense$1_mindustry_world_Block_mindustry_world_blocks_payloads_Payload_R_boolean(jcontext ctx, jobject param0, jobject param1) {
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/LegsUnit:lambda$sense$1", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_gen_LegsUnit(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	{
	LINE_NUMBER(974);
	if ((isInstance(ctx, (frame[1].o), &class_mindustry_world_blocks_payloads_BuildPayload)) == 0) goto label_1;
	}
	{
	frame[2].o = (checkCast(ctx, &class_mindustry_world_blocks_payloads_BuildPayload, (frame[1].o)));
	sp[0].o = (jobject)((mindustry_world_blocks_payloads_BuildPayload *) NULL_CHECK((frame[2].o)))->F_build;
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK(sp[0].o))->F_block;
	if (sp[0].o != (frame[0].o)) goto label_1;
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

jbool SM_mindustry_gen_LegsUnit_lambda$sense$0_mindustry_type_UnitType_mindustry_world_blocks_payloads_Payload_R_boolean(jcontext ctx, jobject param0, jobject param1) {
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/LegsUnit:lambda$sense$0", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_gen_LegsUnit(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	{
	LINE_NUMBER(971);
	if ((isInstance(ctx, (frame[1].o), &class_mindustry_world_blocks_payloads_UnitPayload)) == 0) goto label_1;
	}
	{
	frame[2].o = (checkCast(ctx, &class_mindustry_world_blocks_payloads_UnitPayload, (frame[1].o)));
	sp[0].o = (jobject)((mindustry_world_blocks_payloads_UnitPayload *) NULL_CHECK((frame[2].o)))->F_unit;
	sp[0].o = (jobject)((mindustry_gen_Unit *) NULL_CHECK(sp[0].o))->F_type;
	if (sp[0].o != (frame[0].o)) goto label_1;
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

jbool SM_mindustry_gen_LegsUnit_lambda$shouldSkip$0_mindustry_gen_Building_mindustry_type_ItemStack_R_boolean(jcontext ctx, jobject param0, jobject param1) {
	jtype frame[6];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/LegsUnit:lambda$shouldSkip$0", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_gen_LegsUnit(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	{
	LINE_NUMBER(940);
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_items;
	sp[1].o = (jobject)((mindustry_type_ItemStack *) NULL_CHECK((frame[1].o)))->F_item;
	jint temp0 = (jint)SM_java_lang_Math_min_int_int_R_int(ctx, ((jint)((mindustry_type_ItemStack *) NULL_CHECK((frame[1].o)))->F_amount), (15));
	jint temp1 = (jint)((func_mindustry_world_modules_ItemModule_has_mindustry_type_Item_int_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_modules_ItemModule_has_mindustry_type_Item_int_R_boolean])(ctx, sp[0].o, sp[1].o, temp0);
	if (temp1 != 0) goto label_1;
	}
	{
	jfloat temp0 = jfloat(((jint)((mindustry_type_ItemStack *) NULL_CHECK((frame[1].o)))->F_amount));
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	sp[0].o = (jobject)((mindustry_core_GameState *) NULL_CHECK(sp[0].o))->F_rules;
	jint temp1 = (jint)SM_arc_math_Mathf_round_float_R_int(ctx, (temp0 * ((jfloat)((mindustry_game_Rules *) NULL_CHECK(sp[0].o))->F_buildCostMultiplier)));
	if (temp1 <= 0) goto label_1;
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

jbool M_mindustry_gen_LegsUnit_lambda$canLand$0_mindustry_gen_Unit_R_boolean(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/LegsUnit:lambda$canLand$0", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(716);
	if ((frame[1].o) == (frame[0].o)) goto label_1;
	}
	{
	jint temp0 = (jint)((func_mindustry_gen_Unit_isGrounded_R_boolean) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_gen_Unit_isGrounded_R_boolean])(ctx, (frame[1].o));
	if (temp0 == 0) goto label_1;
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

void clinit_mindustry_gen_LegsUnit(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	clinit_mindustry_gen_Unit(ctx);
	SF_mindustry_gen_LegsUnit_hitDuration = jfloat(9.0f);
	SF_mindustry_gen_LegsUnit_warpDst = jfloat(8.0f);
	jtype frame[2];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/LegsUnit:<clinit>", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_gen_LegsUnit(ctx);
	{
	LINE_NUMBER(112);
	clinit_arc_math_geom_Vec2(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_math_geom_Vec2);
	init_arc_math_geom_Vec2(ctx, sp[0].o);
	clinit_mindustry_gen_LegsUnit(ctx);
	SF_mindustry_gen_LegsUnit_straightVec = sp[0].o;
	LINE_NUMBER(114);
	clinit_arc_math_geom_Vec2(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_math_geom_Vec2);
	init_arc_math_geom_Vec2(ctx, sp[0].o);
	clinit_mindustry_gen_LegsUnit(ctx);
	SF_mindustry_gen_LegsUnit_tmp1 = sp[0].o;
	LINE_NUMBER(116);
	clinit_arc_math_geom_Vec2(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_math_geom_Vec2);
	init_arc_math_geom_Vec2(ctx, sp[0].o);
	clinit_mindustry_gen_LegsUnit(ctx);
	SF_mindustry_gen_LegsUnit_tmp2 = sp[0].o;
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

static void initAnnotations(jcontext ctx) {
	auto &clazz = class_mindustry_gen_LegsUnit;
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

	fields[8]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[9]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[10]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[11]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[12]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[13]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[14]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[15]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[16]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[17]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[18]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[19]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[20]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[21]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[22]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[23]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[24]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[25]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[26]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[27]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[28]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	((java_lang_reflect_Method *) ((java_lang_reflect_Constructor *) constructors[0])->F_method)->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	{ // Method buildOn
		auto annotationArray = (jarray) createArray(ctx, &class_java_lang_annotation_Annotation, 1);
		methods[0]->F_annotations = (intptr_t) annotationArray;
		auto annotations = (jobject *) annotationArray->data;
		annotations[0] = gcAlloc(ctx, &class_arc_util_Nullable);
	}

	{ // Method getPlayer
		auto annotationArray = (jarray) createArray(ctx, &class_java_lang_annotation_Annotation, 1);
		methods[1]->F_annotations = (intptr_t) annotationArray;
		auto annotations = (jobject *) annotationArray->data;
		annotations[0] = gcAlloc(ctx, &class_arc_util_Nullable);
	}

	{ // Method getControllerName
		auto annotationArray = (jarray) createArray(ctx, &class_java_lang_annotation_Annotation, 1);
		methods[2]->F_annotations = (intptr_t) annotationArray;
		auto annotations = (jobject *) annotationArray->data;
		annotations[0] = gcAlloc(ctx, &class_arc_util_Nullable);
	}

	{ // Method buildPlan
		auto annotationArray = (jarray) createArray(ctx, &class_java_lang_annotation_Annotation, 1);
		methods[3]->F_annotations = (intptr_t) annotationArray;
		auto annotations = (jobject *) annotationArray->data;
		annotations[0] = gcAlloc(ctx, &class_arc_util_Nullable);
	}

	{ // Method getMineResult
		auto annotationArray = (jarray) createArray(ctx, &class_java_lang_annotation_Annotation, 1);
		methods[4]->F_annotations = (intptr_t) annotationArray;
		auto annotations = (jobject *) annotationArray->data;
		annotations[0] = gcAlloc(ctx, &class_arc_util_Nullable);
	}

	{ // Method tileOn
		auto annotationArray = (jarray) createArray(ctx, &class_java_lang_annotation_Annotation, 1);
		methods[5]->F_annotations = (intptr_t) annotationArray;
		auto annotations = (jobject *) annotationArray->data;
		annotations[0] = gcAlloc(ctx, &class_arc_util_Nullable);
	}

	{ // Method closestCore
		auto annotationArray = (jarray) createArray(ctx, &class_java_lang_annotation_Annotation, 1);
		methods[6]->F_annotations = (intptr_t) annotationArray;
		auto annotations = (jobject *) annotationArray->data;
		annotations[0] = gcAlloc(ctx, &class_arc_util_Nullable);
	}

	{ // Method closestEnemyCore
		auto annotationArray = (jarray) createArray(ctx, &class_java_lang_annotation_Annotation, 1);
		methods[7]->F_annotations = (intptr_t) annotationArray;
		auto annotations = (jobject *) annotationArray->data;
		annotations[0] = gcAlloc(ctx, &class_arc_util_Nullable);
	}

	{ // Method core
		auto annotationArray = (jarray) createArray(ctx, &class_java_lang_annotation_Annotation, 1);
		methods[8]->F_annotations = (intptr_t) annotationArray;
		auto annotations = (jobject *) annotationArray->data;
		annotations[0] = gcAlloc(ctx, &class_arc_util_Nullable);
	}

	methods[9]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[10]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[11]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[12]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[13]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[14]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[15]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[16]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[17]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[18]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[19]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[20]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[21]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[22]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[23]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[24]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[25]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[26]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[27]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[28]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[29]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[30]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[31]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[32]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[33]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[34]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[35]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[36]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[37]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[38]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[39]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[40]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[41]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[42]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[43]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[44]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[45]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[46]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[47]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[48]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[49]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[50]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[51]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[52]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[53]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[54]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[55]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[56]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[57]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[58]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[59]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[60]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[61]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[62]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[63]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[64]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[65]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[66]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[67]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[68]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[69]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[70]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[71]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[72]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[73]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[74]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[75]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[76]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[77]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[78]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[79]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[80]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[81]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[82]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[83]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[84]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[85]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[86]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[87]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[88]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[89]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[90]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[91]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[92]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[93]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[94]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[95]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[96]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[97]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[98]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[99]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[100]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[101]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[102]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[103]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[104]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[105]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[106]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[107]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[108]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[109]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[110]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[111]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[112]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[113]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[114]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[115]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[116]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[117]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[118]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[119]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[120]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[121]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[122]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[123]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[124]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[125]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[126]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[127]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[128]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[129]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[130]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[131]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[132]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[133]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[134]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[135]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[136]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[137]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[138]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[139]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[140]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[141]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[142]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[143]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[144]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[145]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[146]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[147]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[148]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[149]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[150]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[151]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[152]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[153]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[154]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[155]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[156]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[157]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[158]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[159]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[160]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[161]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[162]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[163]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[164]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[165]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[166]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[167]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[168]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[169]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[170]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[171]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[172]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[173]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[174]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[175]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[176]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[177]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[178]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[179]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[180]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[181]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[182]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[183]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[184]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[185]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[186]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[187]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[188]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[189]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[190]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[191]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[192]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[193]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[194]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[195]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[196]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[197]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[198]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[199]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[200]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[201]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[202]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[203]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[204]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[205]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[206]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[207]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[208]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[209]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[210]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[211]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[212]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[213]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[214]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[215]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[216]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[217]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[218]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[219]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[220]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[221]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[222]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[223]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[224]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[225]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[226]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[227]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[228]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[229]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[230]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[231]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[232]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[233]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[234]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[235]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[236]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[237]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[238]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[239]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[240]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);
}

void *vtable_mindustry_gen_LegsUnit[] {
	(void *) M_java_lang_Object_hashCode_R_int,
	(void *) M_java_lang_Object_equals_java_lang_Object_R_boolean,
	(void *) M_java_lang_Object_clone_R_java_lang_Object,
	(void *) M_java_lang_Object_getClass_R_java_lang_Class,
	(void *) M_mindustry_gen_LegsUnit_toString_R_java_lang_String,
	(void *) M_java_lang_Object_finalize,
	(void *) M_java_lang_Object_notify,
	(void *) M_java_lang_Object_notifyAll,
	(void *) M_java_lang_Object_wait,
	(void *) M_java_lang_Object_wait_long,
	(void *) M_java_lang_Object_wait_long_int,
	(void *) M_mindustry_gen_LegsUnit_self_R_mindustry_gen_Entityc,
	(void *) M_mindustry_gen_LegsUnit_as_R_java_lang_Object,
	(void *) M_mindustry_gen_LegsUnit_isAdded_R_boolean,
	(void *) M_mindustry_gen_LegsUnit_isLocal_R_boolean,
	(void *) M_mindustry_gen_LegsUnit_isRemote_R_boolean,
	(void *) M_mindustry_gen_LegsUnit_serialize_R_boolean,
	(void *) M_mindustry_gen_LegsUnit_classId_R_int,
	(void *) M_mindustry_gen_Unit_id_R_int,
	(void *) M_mindustry_gen_LegsUnit_add,
	(void *) M_mindustry_gen_LegsUnit_afterRead,
	(void *) M_mindustry_gen_LegsUnit_afterReadAll,
	(void *) M_mindustry_gen_LegsUnit_beforeWrite,
	(void *) M_mindustry_gen_Unit_id_int,
	(void *) M_mindustry_gen_LegsUnit_read_arc_util_io_Reads,
	(void *) M_mindustry_gen_LegsUnit_remove,
	(void *) M_mindustry_gen_LegsUnit_update,
	(void *) M_mindustry_gen_LegsUnit_write_arc_util_io_Writes,
	(void *) M_mindustry_gen_LegsUnit_getX_R_float,
	(void *) M_mindustry_gen_LegsUnit_getY_R_float,
	(void *) M_arc_math_geom_Position_angleTo_arc_math_geom_Position_R_float,
	(void *) M_arc_math_geom_Position_angleTo_float_float_R_float,
	(void *) M_arc_math_geom_Position_dst2_arc_math_geom_Position_R_float,
	(void *) M_arc_math_geom_Position_dst_arc_math_geom_Position_R_float,
	(void *) M_arc_math_geom_Position_dst_float_float_R_float,
	(void *) M_arc_math_geom_Position_dst2_float_float_R_float,
	(void *) M_arc_math_geom_Position_within_arc_math_geom_Position_float_R_boolean,
	(void *) M_arc_math_geom_Position_within_float_float_float_R_boolean,
	(void *) M_mindustry_gen_LegsUnit_floorOn_R_mindustry_world_blocks_environment_Floor,
	(void *) M_mindustry_gen_LegsUnit_buildOn_R_mindustry_gen_Building,
	(void *) M_mindustry_gen_LegsUnit_onSolid_R_boolean,
	(void *) M_mindustry_gen_Unit_x_R_float,
	(void *) M_mindustry_gen_Unit_y_R_float,
	(void *) M_mindustry_gen_LegsUnit_tileX_R_int,
	(void *) M_mindustry_gen_LegsUnit_tileY_R_int,
	(void *) M_mindustry_gen_LegsUnit_blockOn_R_mindustry_world_Block,
	(void *) M_mindustry_gen_LegsUnit_tileOn_R_mindustry_world_Tile,
	(void *) M_mindustry_gen_LegsUnit_set_arc_math_geom_Position,
	(void *) M_mindustry_gen_LegsUnit_set_float_float,
	(void *) M_mindustry_gen_LegsUnit_trns_arc_math_geom_Position,
	(void *) M_mindustry_gen_LegsUnit_trns_float_float,
	(void *) M_mindustry_gen_Unit_x_float,
	(void *) M_mindustry_gen_Unit_y_float,
	(void *) M_mindustry_gen_Unit_rotation_R_float,
	(void *) M_mindustry_gen_Unit_rotation_float,
	(void *) M_mindustry_gen_LegsUnit_applyDynamicStatus_R_mindustry_entities_units_StatusEntry,
	(void *) M_mindustry_gen_LegsUnit_apply_mindustry_type_StatusEffect_float,
	(void *) M_mindustry_gen_LegsUnit_apply_mindustry_type_StatusEffect,
	(void *) M_mindustry_gen_LegsUnit_unapply_mindustry_type_StatusEffect,
	(void *) M_mindustry_gen_LegsUnit_statusDamageMultiplier_float,
	(void *) M_mindustry_gen_LegsUnit_statusReloadMultiplier_float,
	(void *) M_mindustry_gen_LegsUnit_statusArmor_float,
	(void *) M_mindustry_gen_LegsUnit_statusBuildSpeed_float,
	(void *) M_mindustry_gen_LegsUnit_statusDrag_float,
	(void *) M_mindustry_gen_LegsUnit_statusMaxHealth_float,
	(void *) M_mindustry_gen_LegsUnit_statusSpeed_float,
	(void *) M_mindustry_gen_LegsUnit_statusColor_R_arc_graphics_Color,
	(void *) M_mindustry_gen_LegsUnit_statusBits_R_arc_struct_Bits,
	(void *) M_mindustry_gen_Unit_disarmed_R_boolean,
	(void *) M_mindustry_gen_LegsUnit_hasEffect_mindustry_type_StatusEffect_R_boolean,
	(void *) M_mindustry_gen_LegsUnit_isBoss_R_boolean,
	(void *) M_mindustry_gen_LegsUnit_isGrounded_R_boolean,
	(void *) M_mindustry_gen_LegsUnit_isImmune_mindustry_type_StatusEffect_R_boolean,
	(void *) M_mindustry_gen_Unit_armorOverride_R_float,
	(void *) M_mindustry_gen_Unit_buildSpeedMultiplier_R_float,
	(void *) M_mindustry_gen_Unit_damageMultiplier_R_float,
	(void *) M_mindustry_gen_Unit_dragMultiplier_R_float,
	(void *) M_mindustry_gen_LegsUnit_getDuration_mindustry_type_StatusEffect_R_float,
	(void *) M_mindustry_gen_Unit_healthMultiplier_R_float,
	(void *) M_mindustry_gen_Unit_reloadMultiplier_R_float,
	(void *) M_mindustry_gen_Unit_speedMultiplier_R_float,
	(void *) M_mindustry_gen_Unit_armorOverride_float,
	(void *) M_mindustry_gen_Unit_buildSpeedMultiplier_float,
	(void *) M_mindustry_gen_LegsUnit_clearStatuses,
	(void *) M_mindustry_gen_Unit_damageMultiplier_float,
	(void *) M_mindustry_gen_Unit_disarmed_boolean,
	(void *) M_mindustry_gen_Unit_dragMultiplier_float,
	(void *) M_mindustry_gen_LegsUnit_draw,
	(void *) M_mindustry_gen_Unit_healthMultiplier_float,
	(void *) M_mindustry_gen_Unit_reloadMultiplier_float,
	(void *) M_mindustry_gen_LegsUnit_setDuration_mindustry_type_StatusEffect_float,
	(void *) M_mindustry_gen_Unit_speedMultiplier_float,
	(void *) M_mindustry_gen_LegsUnit_inFogTo_mindustry_game_Team_R_boolean,
	(void *) M_mindustry_gen_LegsUnit_cheating_R_boolean,
	(void *) M_mindustry_gen_Unit_team_R_mindustry_game_Team,
	(void *) M_mindustry_gen_LegsUnit_closestCore_R_mindustry_world_blocks_storage_CoreBlock$CoreBuild,
	(void *) M_mindustry_gen_LegsUnit_closestEnemyCore_R_mindustry_world_blocks_storage_CoreBlock$CoreBuild,
	(void *) M_mindustry_gen_LegsUnit_core_R_mindustry_world_blocks_storage_CoreBlock$CoreBuild,
	(void *) M_mindustry_gen_Unit_team_mindustry_game_Team,
	(void *) M_mindustry_gen_LegsUnit_buildPlan_R_mindustry_entities_units_BuildPlan,
	(void *) M_mindustry_gen_LegsUnit_shouldSkip_mindustry_entities_units_BuildPlan_mindustry_gen_Building_R_boolean,
	(void *) M_mindustry_gen_LegsUnit_addBuild_mindustry_entities_units_BuildPlan_boolean,
	(void *) M_mindustry_gen_LegsUnit_addBuild_mindustry_entities_units_BuildPlan,
	(void *) M_mindustry_gen_LegsUnit_clearBuilding,
	(void *) M_mindustry_gen_LegsUnit_isBuilding_R_boolean,
	(void *) M_mindustry_gen_Unit_plans_R_arc_struct_Queue,
	(void *) M_mindustry_gen_LegsUnit_activelyBuilding_R_boolean,
	(void *) M_mindustry_gen_LegsUnit_canBuild_R_boolean,
	(void *) M_mindustry_gen_Unit_updateBuilding_R_boolean,
	(void *) M_mindustry_gen_Unit_buildAlpha_R_float,
	(void *) M_mindustry_gen_Unit_buildAlpha_float,
	(void *) M_mindustry_gen_LegsUnit_drawBuilding,
	(void *) M_mindustry_gen_LegsUnit_drawBuildingBeam_float_float,
	(void *) M_mindustry_gen_LegsUnit_drawPlan_mindustry_entities_units_BuildPlan_float,
	(void *) M_mindustry_gen_LegsUnit_drawPlanTop_mindustry_entities_units_BuildPlan_float,
	(void *) M_mindustry_gen_Unit_plans_arc_struct_Queue,
	(void *) M_mindustry_gen_LegsUnit_removeBuild_int_int_boolean,
	(void *) M_mindustry_gen_LegsUnit_updateBuildLogic,
	(void *) M_mindustry_gen_Unit_updateBuilding_boolean,
	(void *) M_mindustry_gen_LegsUnit_validatePlans,
	(void *) M_mindustry_gen_LegsUnit_clipSize_R_float,
	(void *) M_mindustry_gen_LegsUnit_damageArmorMult_float_float,
	(void *) M_mindustry_gen_LegsUnit_damageArmorMult_float_float_boolean,
	(void *) M_mindustry_gen_LegsUnit_damagePierce_float,
	(void *) M_mindustry_gen_LegsUnit_damagePierce_float_boolean,
	(void *) M_mindustry_gen_LegsUnit_healFract_float,
	(void *) M_mindustry_gen_LegsUnit_heal_float,
	(void *) M_mindustry_gen_LegsUnit_damaged_R_boolean,
	(void *) M_mindustry_gen_Unit_dead_R_boolean,
	(void *) M_mindustry_gen_LegsUnit_isValid_R_boolean,
	(void *) M_mindustry_gen_Unit_health_R_float,
	(void *) M_mindustry_gen_LegsUnit_healthf_R_float,
	(void *) M_mindustry_gen_Unit_hitTime_R_float,
	(void *) M_mindustry_gen_Unit_maxHealth_R_float,
	(void *) M_mindustry_gen_LegsUnit_clampHealth,
	(void *) M_mindustry_gen_LegsUnit_damage_float,
	(void *) M_mindustry_gen_LegsUnit_damage_float_boolean,
	(void *) M_mindustry_gen_LegsUnit_damageContinuous_float,
	(void *) M_mindustry_gen_LegsUnit_damageContinuousArmorMult_float_float,
	(void *) M_mindustry_gen_LegsUnit_damageContinuousPierce_float,
	(void *) M_mindustry_gen_Unit_dead_boolean,
	(void *) M_mindustry_gen_LegsUnit_heal,
	(void *) M_mindustry_gen_Unit_health_float,
	(void *) M_mindustry_gen_Unit_hitTime_float,
	(void *) M_mindustry_gen_LegsUnit_kill,
	(void *) M_mindustry_gen_LegsUnit_killed,
	(void *) M_mindustry_gen_Unit_maxHealth_float,
	(void *) M_mindustry_gen_LegsUnit_hitbox_arc_math_geom_Rect,
	(void *) M_mindustry_gen_LegsUnit_hitSize_R_float,
	(void *) M_mindustry_gen_LegsUnit_collides_mindustry_gen_Hitboxc_R_boolean,
	(void *) M_mindustry_gen_LegsUnit_deltaAngle_R_float,
	(void *) M_mindustry_gen_LegsUnit_deltaLen_R_float,
	(void *) M_mindustry_gen_Unit_deltaX_R_float,
	(void *) M_mindustry_gen_Unit_deltaY_R_float,
	(void *) M_mindustry_gen_Unit_lastX_R_float,
	(void *) M_mindustry_gen_Unit_lastY_R_float,
	(void *) M_mindustry_gen_LegsUnit_collision_mindustry_gen_Hitboxc_float_float,
	(void *) M_mindustry_gen_Unit_deltaX_float,
	(void *) M_mindustry_gen_Unit_deltaY_float,
	(void *) M_mindustry_gen_LegsUnit_getCollisions_arc_func_Cons,
	(void *) M_mindustry_gen_Unit_hitSize_float,
	(void *) M_mindustry_gen_LegsUnit_hitboxTile_arc_math_geom_Rect,
	(void *) M_mindustry_gen_Unit_lastX_float,
	(void *) M_mindustry_gen_Unit_lastY_float,
	(void *) M_mindustry_gen_LegsUnit_updateLastPosition,
	(void *) M_mindustry_gen_Unit_setIndex__draw_int,
	(void *) M_mindustry_gen_Unit_setIndex__sync_int,
	(void *) M_mindustry_gen_Unit_setIndex__unit_int,
	(void *) M_mindustry_gen_LegsUnit_acceptsItem_mindustry_type_Item_R_boolean,
	(void *) M_mindustry_gen_LegsUnit_hasItem_R_boolean,
	(void *) M_mindustry_gen_Unit_itemTime_R_float,
	(void *) M_mindustry_gen_LegsUnit_itemCapacity_R_int,
	(void *) M_mindustry_gen_LegsUnit_maxAccepted_mindustry_type_Item_R_int,
	(void *) M_mindustry_gen_LegsUnit_item_R_mindustry_type_Item,
	(void *) M_mindustry_gen_Unit_stack_R_mindustry_type_ItemStack,
	(void *) M_mindustry_gen_LegsUnit_addItem_mindustry_type_Item,
	(void *) M_mindustry_gen_LegsUnit_addItem_mindustry_type_Item_int,
	(void *) M_mindustry_gen_LegsUnit_clearItem,
	(void *) M_mindustry_gen_Unit_itemTime_float,
	(void *) M_mindustry_gen_Unit_stack_mindustry_type_ItemStack,
	(void *) M_mindustry_gen_Unit_mineTile_R_mindustry_world_Tile,
	(void *) M_mindustry_gen_LegsUnit_canMine_R_boolean,
	(void *) M_mindustry_gen_LegsUnit_canMine_mindustry_type_Item_R_boolean,
	(void *) M_mindustry_gen_LegsUnit_mining_R_boolean,
	(void *) M_mindustry_gen_LegsUnit_offloadImmediately_R_boolean,
	(void *) M_mindustry_gen_LegsUnit_validMine_mindustry_world_Tile_R_boolean,
	(void *) M_mindustry_gen_LegsUnit_validMine_mindustry_world_Tile_boolean_R_boolean,
	(void *) M_mindustry_gen_Unit_mineTimer_R_float,
	(void *) M_mindustry_gen_LegsUnit_getMineResult_mindustry_world_Tile_R_mindustry_type_Item,
	(void *) M_mindustry_gen_Unit_mineTile_mindustry_world_Tile,
	(void *) M_mindustry_gen_Unit_mineTimer_float,
	(void *) M_mindustry_gen_LegsUnit_solidity_R_mindustry_entities_EntityCollisions$SolidPred,
	(void *) M_mindustry_gen_LegsUnit_canPassOn_R_boolean,
	(void *) M_mindustry_gen_LegsUnit_canPass_int_int_R_boolean,
	(void *) M_mindustry_gen_Unit_vel_R_arc_math_geom_Vec2,
	(void *) M_mindustry_gen_LegsUnit_ignoreSolids_R_boolean,
	(void *) M_mindustry_gen_LegsUnit_moving_R_boolean,
	(void *) M_mindustry_gen_Unit_drag_R_float,
	(void *) M_mindustry_gen_Unit_drag_float,
	(void *) M_mindustry_gen_LegsUnit_move_arc_math_geom_Vec2,
	(void *) M_mindustry_gen_LegsUnit_move_float_float,
	(void *) M_mindustry_gen_Unit_vel_arc_math_geom_Vec2,
	(void *) M_mindustry_gen_LegsUnit_velAddNet_arc_math_geom_Vec2,
	(void *) M_mindustry_gen_LegsUnit_velAddNet_float_float,
	(void *) M_mindustry_gen_Unit_hasPhysicsRef_R_boolean,
	(void *) M_mindustry_gen_LegsUnit_mass_R_float,
	(void *) M_mindustry_gen_Unit_hasPhysicsRef_boolean,
	(void *) M_mindustry_gen_LegsUnit_impulse_arc_math_geom_Vec2,
	(void *) M_mindustry_gen_LegsUnit_impulse_float_float,
	(void *) M_mindustry_gen_LegsUnit_impulseNet_arc_math_geom_Vec2,
	(void *) M_mindustry_gen_Unit_shield_R_float,
	(void *) M_mindustry_gen_Unit_shield_float,
	(void *) M_mindustry_gen_Unit_shieldAlpha_R_float,
	(void *) M_mindustry_gen_Unit_shieldAlpha_float,
	(void *) M_mindustry_gen_Unit_armor_R_float,
	(void *) M_mindustry_gen_Unit_armor_float,
	(void *) M_mindustry_gen_LegsUnit_rawDamage_float,
	(void *) M_mindustry_gen_LegsUnit_isSyncHidden_mindustry_game_Team_R_boolean,
	(void *) M_mindustry_gen_Unit_lastUpdated_R_long,
	(void *) M_mindustry_gen_Unit_updateSpacing_R_long,
	(void *) M_mindustry_gen_LegsUnit_afterSync,
	(void *) M_mindustry_gen_LegsUnit_handleSyncHidden,
	(void *) M_mindustry_gen_LegsUnit_interpolate,
	(void *) M_mindustry_gen_Unit_lastUpdated_long,
	(void *) M_mindustry_gen_LegsUnit_readSync_arc_util_io_Reads,
	(void *) M_mindustry_gen_LegsUnit_readSyncManual_java_nio_FloatBuffer,
	(void *) M_mindustry_gen_LegsUnit_snapInterpolation,
	(void *) M_mindustry_gen_LegsUnit_snapSync,
	(void *) M_mindustry_gen_Unit_updateSpacing_long,
	(void *) M_mindustry_gen_LegsUnit_writeSync_arc_util_io_Writes,
	(void *) M_mindustry_gen_LegsUnit_writeSyncManual_java_nio_FloatBuffer,
	(void *) M_mindustry_gen_LegsUnit_aim_float_float,
	(void *) M_mindustry_gen_LegsUnit_aim_float_float_boolean,
	(void *) M_mindustry_gen_Unit_mounts_R_Array1_mindustry_entities_units_WeaponMount,
	(void *) M_mindustry_gen_Unit_mounts_Array1_mindustry_entities_units_WeaponMount,
	(void *) M_mindustry_gen_LegsUnit_canShoot_R_boolean,
	(void *) M_mindustry_gen_LegsUnit_isRotate_R_boolean,
	(void *) M_mindustry_gen_Unit_isShooting_R_boolean,
	(void *) M_mindustry_gen_Unit_aimX_R_float,
	(void *) M_mindustry_gen_Unit_aimY_R_float,
	(void *) M_mindustry_gen_LegsUnit_aim_arc_math_geom_Position,
	(void *) M_mindustry_gen_Unit_aimX_float,
	(void *) M_mindustry_gen_Unit_aimY_float,
	(void *) M_mindustry_gen_LegsUnit_controlWeapons_boolean_boolean,
	(void *) M_mindustry_gen_LegsUnit_controlWeapons_boolean,
	(void *) M_mindustry_gen_Unit_isShooting_boolean,
	(void *) M_mindustry_gen_LegsUnit_setWeaponRotation_float,
	(void *) M_mindustry_gen_LegsUnit_setupWeapons_mindustry_type_UnitType,
	(void *) M_mindustry_gen_LegsUnit_range_R_float,
	(void *) M_mindustry_gen_LegsUnit_sense_mindustry_logic_LAccess_R_double,
	(void *) M_mindustry_gen_LegsUnit_sense_mindustry_ctype_Content_R_double,
	(void *) M_mindustry_gen_LegsUnit_senseObject_mindustry_logic_LAccess_R_java_lang_Object,
	(void *) M_mindustry_gen_LegsUnit_setProp_mindustry_logic_LAccess_double,
	(void *) M_mindustry_gen_LegsUnit_setProp_mindustry_logic_LAccess_java_lang_Object,
	(void *) M_mindustry_gen_LegsUnit_setProp_mindustry_ctype_UnlockableContent_double,
	(void *) M_mindustry_gen_LegsUnit_displayable_R_boolean,
	(void *) M_mindustry_gen_LegsUnit_display_arc_scene_ui_layout_Table,
	(void *) M_mindustry_gen_LegsUnit_icon_R_arc_graphics_g2d_TextureRegion,
	(void *) M_mindustry_gen_LegsUnit_physicSize_R_float,
	(void *) M_mindustry_gen_LegsUnit_getControllerName_R_java_lang_String,
	(void *) M_mindustry_gen_LegsUnit_speed_R_float,
	(void *) M_mindustry_gen_LegsUnit_collisionLayer_R_int,
	(void *) M_mindustry_gen_LegsUnit_prefRotation_R_float,
	(void *) M_mindustry_gen_LegsUnit_allowCommand_R_boolean,
	(void *) M_mindustry_gen_LegsUnit_isCommandable_R_boolean,
	(void *) M_mindustry_gen_LegsUnit_canLand_R_boolean,
	(void *) M_mindustry_gen_LegsUnit_destroy,
	(void *) M_mindustry_gen_LegsUnit_unloaded,
	(void *) M_mindustry_gen_LegsUnit_movePref_arc_math_geom_Vec2,
	(void *) M_mindustry_gen_Unit_hasTarget_R_boolean,
	(void *) M_mindustry_gen_Unit_hasTarget_boolean,
	(void *) M_mindustry_gen_Unit_trail_R_mindustry_graphics_Trail,
	(void *) M_mindustry_gen_Unit_dockedType_R_mindustry_type_UnitType,
	(void *) M_mindustry_gen_Unit_lastDrownFloor_R_mindustry_world_blocks_environment_Floor,
	(void *) M_mindustry_gen_LegsUnit_getPlayer_R_mindustry_gen_Player,
	(void *) M_mindustry_gen_LegsUnit_canDrown_R_boolean,
	(void *) M_mindustry_gen_LegsUnit_canTarget_mindustry_gen_Teamc_R_boolean,
	(void *) M_mindustry_gen_LegsUnit_checkTarget_boolean_boolean_R_boolean,
	(void *) M_mindustry_gen_LegsUnit_hasWeapons_R_boolean,
	(void *) M_mindustry_gen_LegsUnit_hittable_R_boolean,
	(void *) M_mindustry_gen_LegsUnit_inRange_arc_math_geom_Position_R_boolean,
	(void *) M_mindustry_gen_LegsUnit_isAI_R_boolean,
	(void *) M_mindustry_gen_LegsUnit_isEnemy_R_boolean,
	(void *) M_mindustry_gen_LegsUnit_isFlying_R_boolean,
	(void *) M_mindustry_gen_LegsUnit_isMissile_R_boolean,
	(void *) M_mindustry_gen_LegsUnit_isPathImpassable_int_int_R_boolean,
	(void *) M_mindustry_gen_LegsUnit_isPlayer_R_boolean,
	(void *) M_mindustry_gen_LegsUnit_killable_R_boolean,
	(void *) M_mindustry_gen_LegsUnit_playerControllable_R_boolean,
	(void *) M_mindustry_gen_LegsUnit_shouldUpdateController_R_boolean,
	(void *) M_mindustry_gen_Unit_spawnedByCore_R_boolean,
	(void *) M_mindustry_gen_LegsUnit_targetable_mindustry_game_Team_R_boolean,
	(void *) M_mindustry_gen_Unit_flag_R_double,
	(void *) M_mindustry_gen_LegsUnit_ammof_R_float,
	(void *) M_mindustry_gen_LegsUnit_bounds_R_float,
	(void *) M_mindustry_gen_Unit_drownTime_R_float,
	(void *) M_mindustry_gen_Unit_elevation_R_float,
	(void *) M_mindustry_gen_LegsUnit_floorSpeedMultiplier_R_float,
	(void *) M_mindustry_gen_Unit_healTime_R_float,
	(void *) M_mindustry_gen_Unit_shadowAlpha_R_float,
	(void *) M_mindustry_gen_Unit_splashTimer_R_float,
	(void *) M_mindustry_gen_LegsUnit_cap_R_int,
	(void *) M_mindustry_gen_LegsUnit_count_R_int,
	(void *) M_mindustry_gen_Unit_lastFogPos_R_int,
	(void *) M_mindustry_gen_Unit_lastCommanded_R_java_lang_String,
	(void *) M_mindustry_gen_LegsUnit_command_R_mindustry_ai_types_CommandAI,
	(void *) M_mindustry_gen_Unit_abilities_R_Array1_mindustry_entities_abilities_Ability,
	(void *) M_mindustry_gen_LegsUnit_controller_R_mindustry_entities_units_UnitController,
	(void *) M_mindustry_gen_Unit_type_R_mindustry_type_UnitType,
	(void *) M_mindustry_gen_LegsUnit_drownFloor_R_mindustry_world_blocks_environment_Floor,
	(void *) M_mindustry_gen_Unit_abilities_Array1_mindustry_entities_abilities_Ability,
	(void *) M_mindustry_gen_LegsUnit_aimLook_arc_math_geom_Position,
	(void *) M_mindustry_gen_LegsUnit_aimLook_float_float,
	(void *) M_mindustry_gen_LegsUnit_approach_arc_math_geom_Vec2,
	(void *) M_mindustry_gen_LegsUnit_controller_mindustry_entities_units_UnitController,
	(void *) M_mindustry_gen_Unit_dockedType_mindustry_type_UnitType,
	(void *) M_mindustry_gen_Unit_drownTime_float,
	(void *) M_mindustry_gen_Unit_elevation_float,
	(void *) M_mindustry_gen_Unit_flag_double,
	(void *) M_mindustry_gen_Unit_healTime_float,
	(void *) M_mindustry_gen_LegsUnit_landed,
	(void *) M_mindustry_gen_Unit_lastCommanded_java_lang_String,
	(void *) M_mindustry_gen_Unit_lastDrownFloor_mindustry_world_blocks_environment_Floor,
	(void *) M_mindustry_gen_Unit_lastFogPos_int,
	(void *) M_mindustry_gen_LegsUnit_lookAt_arc_math_geom_Position,
	(void *) M_mindustry_gen_LegsUnit_lookAt_float,
	(void *) M_mindustry_gen_LegsUnit_lookAt_float_float,
	(void *) M_mindustry_gen_LegsUnit_moveAt_arc_math_geom_Vec2,
	(void *) M_mindustry_gen_LegsUnit_moveAt_arc_math_geom_Vec2_float,
	(void *) M_mindustry_gen_LegsUnit_resetController,
	(void *) M_mindustry_gen_LegsUnit_rotateMove_arc_math_geom_Vec2,
	(void *) M_mindustry_gen_LegsUnit_set_mindustry_type_UnitType_mindustry_entities_units_UnitController,
	(void *) M_mindustry_gen_LegsUnit_setType_mindustry_type_UnitType,
	(void *) M_mindustry_gen_Unit_shadowAlpha_float,
	(void *) M_mindustry_gen_Unit_spawnedByCore_boolean,
	(void *) M_mindustry_gen_Unit_splashTimer_float,
	(void *) M_mindustry_gen_Unit_trail_mindustry_graphics_Trail,
	(void *) M_mindustry_gen_Unit_type_mindustry_type_UnitType,
	(void *) M_mindustry_gen_LegsUnit_updateBoosting_boolean,
	(void *) M_mindustry_gen_LegsUnit_updateBoosting_boolean_boolean,
	(void *) M_mindustry_gen_LegsUnit_updateDrowning,
	(void *) M_mindustry_gen_LegsUnit_wobble,
	(void *) M_mindustry_gen_LegsUnit_legAngle_int_R_float,
	(void *) M_mindustry_gen_LegsUnit_curMoveOffset_R_arc_math_geom_Vec2,
	(void *) M_mindustry_gen_LegsUnit_legOffset_arc_math_geom_Vec2_int_R_arc_math_geom_Vec2,
	(void *) M_mindustry_gen_LegsUnit_baseRotation_R_float,
	(void *) M_mindustry_gen_LegsUnit_defaultLegAngle_int_R_float,
	(void *) M_mindustry_gen_LegsUnit_moveSpace_R_float,
	(void *) M_mindustry_gen_LegsUnit_totalLength_R_float,
	(void *) M_mindustry_gen_LegsUnit_legs_R_Array1_mindustry_entities_Leg,
	(void *) M_mindustry_gen_LegsUnit_lastDeepFloor_R_mindustry_world_blocks_environment_Floor,
	(void *) M_mindustry_gen_LegsUnit_baseRotation_float,
	(void *) M_mindustry_gen_LegsUnit_curMoveOffset_arc_math_geom_Vec2,
	(void *) M_mindustry_gen_LegsUnit_lastDeepFloor_mindustry_world_blocks_environment_Floor,
	(void *) M_mindustry_gen_LegsUnit_legs_Array1_mindustry_entities_Leg,
	(void *) M_mindustry_gen_LegsUnit_moveSpace_float,
	(void *) M_mindustry_gen_LegsUnit_resetLegs,
	(void *) M_mindustry_gen_LegsUnit_resetLegs_float,
	(void *) M_mindustry_gen_LegsUnit_totalLength_float,
	(void *) M_mindustry_gen_LegsUnit_applyStatus_mindustry_type_StatusEffect_float_boolean,
	(void *) M_mindustry_gen_LegsUnit_lambda$unapply$0_mindustry_type_StatusEffect_mindustry_entities_units_StatusEntry_R_boolean,
	(void *) M_mindustry_gen_LegsUnit_lambda$destroy$0_float_mindustry_gen_Building_R_boolean,
	(void *) M_mindustry_gen_LegsUnit_lambda$clearStatuses$0_mindustry_entities_units_StatusEntry,
	(void *) M_mindustry_gen_LegsUnit_lambda$canLand$0_mindustry_gen_Unit_R_boolean,
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
	{ "rotation", "()F" },
	{ "rotation", "(F)V" },
	{ "applyDynamicStatus", "()Lmindustry/entities/units/StatusEntry;" },
	{ "apply", "(Lmindustry/type/StatusEffect;F)V" },
	{ "apply", "(Lmindustry/type/StatusEffect;)V" },
	{ "unapply", "(Lmindustry/type/StatusEffect;)V" },
	{ "statusDamageMultiplier", "(F)V" },
	{ "statusReloadMultiplier", "(F)V" },
	{ "statusArmor", "(F)V" },
	{ "statusBuildSpeed", "(F)V" },
	{ "statusDrag", "(F)V" },
	{ "statusMaxHealth", "(F)V" },
	{ "statusSpeed", "(F)V" },
	{ "statusColor", "()Larc/graphics/Color;" },
	{ "statusBits", "()Larc/struct/Bits;" },
	{ "disarmed", "()Z" },
	{ "hasEffect", "(Lmindustry/type/StatusEffect;)Z" },
	{ "isBoss", "()Z" },
	{ "isGrounded", "()Z" },
	{ "isImmune", "(Lmindustry/type/StatusEffect;)Z" },
	{ "armorOverride", "()F" },
	{ "buildSpeedMultiplier", "()F" },
	{ "damageMultiplier", "()F" },
	{ "dragMultiplier", "()F" },
	{ "getDuration", "(Lmindustry/type/StatusEffect;)F" },
	{ "healthMultiplier", "()F" },
	{ "reloadMultiplier", "()F" },
	{ "speedMultiplier", "()F" },
	{ "armorOverride", "(F)V" },
	{ "buildSpeedMultiplier", "(F)V" },
	{ "clearStatuses", "()V" },
	{ "damageMultiplier", "(F)V" },
	{ "disarmed", "(Z)V" },
	{ "dragMultiplier", "(F)V" },
	{ "draw", "()V" },
	{ "healthMultiplier", "(F)V" },
	{ "reloadMultiplier", "(F)V" },
	{ "setDuration", "(Lmindustry/type/StatusEffect;F)V" },
	{ "speedMultiplier", "(F)V" },
	{ "inFogTo", "(Lmindustry/game/Team;)Z" },
	{ "cheating", "()Z" },
	{ "team", "()Lmindustry/game/Team;" },
	{ "closestCore", "()Lmindustry/world/blocks/storage/CoreBlock$CoreBuild;" },
	{ "closestEnemyCore", "()Lmindustry/world/blocks/storage/CoreBlock$CoreBuild;" },
	{ "core", "()Lmindustry/world/blocks/storage/CoreBlock$CoreBuild;" },
	{ "team", "(Lmindustry/game/Team;)V" },
	{ "buildPlan", "()Lmindustry/entities/units/BuildPlan;" },
	{ "shouldSkip", "(Lmindustry/entities/units/BuildPlan;Lmindustry/gen/Building;)Z" },
	{ "addBuild", "(Lmindustry/entities/units/BuildPlan;Z)V" },
	{ "addBuild", "(Lmindustry/entities/units/BuildPlan;)V" },
	{ "clearBuilding", "()V" },
	{ "isBuilding", "()Z" },
	{ "plans", "()Larc/struct/Queue;" },
	{ "activelyBuilding", "()Z" },
	{ "canBuild", "()Z" },
	{ "updateBuilding", "()Z" },
	{ "buildAlpha", "()F" },
	{ "buildAlpha", "(F)V" },
	{ "drawBuilding", "()V" },
	{ "drawBuildingBeam", "(FF)V" },
	{ "drawPlan", "(Lmindustry/entities/units/BuildPlan;F)V" },
	{ "drawPlanTop", "(Lmindustry/entities/units/BuildPlan;F)V" },
	{ "plans", "(Larc/struct/Queue;)V" },
	{ "removeBuild", "(IIZ)V" },
	{ "updateBuildLogic", "()V" },
	{ "updateBuilding", "(Z)V" },
	{ "validatePlans", "()V" },
	{ "clipSize", "()F" },
	{ "damageArmorMult", "(FF)V" },
	{ "damageArmorMult", "(FFZ)V" },
	{ "damagePierce", "(F)V" },
	{ "damagePierce", "(FZ)V" },
	{ "healFract", "(F)V" },
	{ "heal", "(F)V" },
	{ "damaged", "()Z" },
	{ "dead", "()Z" },
	{ "isValid", "()Z" },
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
	{ "hitbox", "(Larc/math/geom/Rect;)V" },
	{ "hitSize", "()F" },
	{ "collides", "(Lmindustry/gen/Hitboxc;)Z" },
	{ "deltaAngle", "()F" },
	{ "deltaLen", "()F" },
	{ "deltaX", "()F" },
	{ "deltaY", "()F" },
	{ "lastX", "()F" },
	{ "lastY", "()F" },
	{ "collision", "(Lmindustry/gen/Hitboxc;FF)V" },
	{ "deltaX", "(F)V" },
	{ "deltaY", "(F)V" },
	{ "getCollisions", "(Larc/func/Cons;)V" },
	{ "hitSize", "(F)V" },
	{ "hitboxTile", "(Larc/math/geom/Rect;)V" },
	{ "lastX", "(F)V" },
	{ "lastY", "(F)V" },
	{ "updateLastPosition", "()V" },
	{ "setIndex__draw", "(I)V" },
	{ "setIndex__sync", "(I)V" },
	{ "setIndex__unit", "(I)V" },
	{ "acceptsItem", "(Lmindustry/type/Item;)Z" },
	{ "hasItem", "()Z" },
	{ "itemTime", "()F" },
	{ "itemCapacity", "()I" },
	{ "maxAccepted", "(Lmindustry/type/Item;)I" },
	{ "item", "()Lmindustry/type/Item;" },
	{ "stack", "()Lmindustry/type/ItemStack;" },
	{ "addItem", "(Lmindustry/type/Item;)V" },
	{ "addItem", "(Lmindustry/type/Item;I)V" },
	{ "clearItem", "()V" },
	{ "itemTime", "(F)V" },
	{ "stack", "(Lmindustry/type/ItemStack;)V" },
	{ "mineTile", "()Lmindustry/world/Tile;" },
	{ "canMine", "()Z" },
	{ "canMine", "(Lmindustry/type/Item;)Z" },
	{ "mining", "()Z" },
	{ "offloadImmediately", "()Z" },
	{ "validMine", "(Lmindustry/world/Tile;)Z" },
	{ "validMine", "(Lmindustry/world/Tile;Z)Z" },
	{ "mineTimer", "()F" },
	{ "getMineResult", "(Lmindustry/world/Tile;)Lmindustry/type/Item;" },
	{ "mineTile", "(Lmindustry/world/Tile;)V" },
	{ "mineTimer", "(F)V" },
	{ "solidity", "()Lmindustry/entities/EntityCollisions$SolidPred;" },
	{ "canPassOn", "()Z" },
	{ "canPass", "(II)Z" },
	{ "vel", "()Larc/math/geom/Vec2;" },
	{ "ignoreSolids", "()Z" },
	{ "moving", "()Z" },
	{ "drag", "()F" },
	{ "drag", "(F)V" },
	{ "move", "(Larc/math/geom/Vec2;)V" },
	{ "move", "(FF)V" },
	{ "vel", "(Larc/math/geom/Vec2;)V" },
	{ "velAddNet", "(Larc/math/geom/Vec2;)V" },
	{ "velAddNet", "(FF)V" },
	{ "hasPhysicsRef", "()Z" },
	{ "mass", "()F" },
	{ "hasPhysicsRef", "(Z)V" },
	{ "impulse", "(Larc/math/geom/Vec2;)V" },
	{ "impulse", "(FF)V" },
	{ "impulseNet", "(Larc/math/geom/Vec2;)V" },
	{ "shield", "()F" },
	{ "shield", "(F)V" },
	{ "shieldAlpha", "()F" },
	{ "shieldAlpha", "(F)V" },
	{ "armor", "()F" },
	{ "armor", "(F)V" },
	{ "rawDamage", "(F)V" },
	{ "isSyncHidden", "(Lmindustry/game/Team;)Z" },
	{ "lastUpdated", "()J" },
	{ "updateSpacing", "()J" },
	{ "afterSync", "()V" },
	{ "handleSyncHidden", "()V" },
	{ "interpolate", "()V" },
	{ "lastUpdated", "(J)V" },
	{ "readSync", "(Larc/util/io/Reads;)V" },
	{ "readSyncManual", "(Ljava/nio/FloatBuffer;)V" },
	{ "snapInterpolation", "()V" },
	{ "snapSync", "()V" },
	{ "updateSpacing", "(J)V" },
	{ "writeSync", "(Larc/util/io/Writes;)V" },
	{ "writeSyncManual", "(Ljava/nio/FloatBuffer;)V" },
	{ "aim", "(FF)V" },
	{ "aim", "(FFZ)V" },
	{ "mounts", "()[Lmindustry/entities/units/WeaponMount;" },
	{ "mounts", "([Lmindustry/entities/units/WeaponMount;)V" },
	{ "canShoot", "()Z" },
	{ "isRotate", "()Z" },
	{ "isShooting", "()Z" },
	{ "aimX", "()F" },
	{ "aimY", "()F" },
	{ "aim", "(Larc/math/geom/Position;)V" },
	{ "aimX", "(F)V" },
	{ "aimY", "(F)V" },
	{ "controlWeapons", "(ZZ)V" },
	{ "controlWeapons", "(Z)V" },
	{ "isShooting", "(Z)V" },
	{ "setWeaponRotation", "(F)V" },
	{ "setupWeapons", "(Lmindustry/type/UnitType;)V" },
	{ "range", "()F" },
	{ "sense", "(Lmindustry/logic/LAccess;)D" },
	{ "sense", "(Lmindustry/ctype/Content;)D" },
	{ "senseObject", "(Lmindustry/logic/LAccess;)Ljava/lang/Object;" },
	{ "setProp", "(Lmindustry/logic/LAccess;D)V" },
	{ "setProp", "(Lmindustry/logic/LAccess;Ljava/lang/Object;)V" },
	{ "setProp", "(Lmindustry/ctype/UnlockableContent;D)V" },
	{ "displayable", "()Z" },
	{ "display", "(Larc/scene/ui/layout/Table;)V" },
	{ "icon", "()Larc/graphics/g2d/TextureRegion;" },
	{ "physicSize", "()F" },
	{ "getControllerName", "()Ljava/lang/String;" },
	{ "speed", "()F" },
	{ "collisionLayer", "()I" },
	{ "prefRotation", "()F" },
	{ "allowCommand", "()Z" },
	{ "isCommandable", "()Z" },
	{ "canLand", "()Z" },
	{ "destroy", "()V" },
	{ "unloaded", "()V" },
	{ "movePref", "(Larc/math/geom/Vec2;)V" },
	{ "hasTarget", "()Z" },
	{ "hasTarget", "(Z)V" },
	{ "trail", "()Lmindustry/graphics/Trail;" },
	{ "dockedType", "()Lmindustry/type/UnitType;" },
	{ "lastDrownFloor", "()Lmindustry/world/blocks/environment/Floor;" },
	{ "getPlayer", "()Lmindustry/gen/Player;" },
	{ "canDrown", "()Z" },
	{ "canTarget", "(Lmindustry/gen/Teamc;)Z" },
	{ "checkTarget", "(ZZ)Z" },
	{ "hasWeapons", "()Z" },
	{ "hittable", "()Z" },
	{ "inRange", "(Larc/math/geom/Position;)Z" },
	{ "isAI", "()Z" },
	{ "isEnemy", "()Z" },
	{ "isFlying", "()Z" },
	{ "isMissile", "()Z" },
	{ "isPathImpassable", "(II)Z" },
	{ "isPlayer", "()Z" },
	{ "killable", "()Z" },
	{ "playerControllable", "()Z" },
	{ "shouldUpdateController", "()Z" },
	{ "spawnedByCore", "()Z" },
	{ "targetable", "(Lmindustry/game/Team;)Z" },
	{ "flag", "()D" },
	{ "ammof", "()F" },
	{ "bounds", "()F" },
	{ "drownTime", "()F" },
	{ "elevation", "()F" },
	{ "floorSpeedMultiplier", "()F" },
	{ "healTime", "()F" },
	{ "shadowAlpha", "()F" },
	{ "splashTimer", "()F" },
	{ "cap", "()I" },
	{ "count", "()I" },
	{ "lastFogPos", "()I" },
	{ "lastCommanded", "()Ljava/lang/String;" },
	{ "command", "()Lmindustry/ai/types/CommandAI;" },
	{ "abilities", "()[Lmindustry/entities/abilities/Ability;" },
	{ "controller", "()Lmindustry/entities/units/UnitController;" },
	{ "type", "()Lmindustry/type/UnitType;" },
	{ "drownFloor", "()Lmindustry/world/blocks/environment/Floor;" },
	{ "abilities", "([Lmindustry/entities/abilities/Ability;)V" },
	{ "aimLook", "(Larc/math/geom/Position;)V" },
	{ "aimLook", "(FF)V" },
	{ "approach", "(Larc/math/geom/Vec2;)V" },
	{ "controller", "(Lmindustry/entities/units/UnitController;)V" },
	{ "dockedType", "(Lmindustry/type/UnitType;)V" },
	{ "drownTime", "(F)V" },
	{ "elevation", "(F)V" },
	{ "flag", "(D)V" },
	{ "healTime", "(F)V" },
	{ "landed", "()V" },
	{ "lastCommanded", "(Ljava/lang/String;)V" },
	{ "lastDrownFloor", "(Lmindustry/world/blocks/environment/Floor;)V" },
	{ "lastFogPos", "(I)V" },
	{ "lookAt", "(Larc/math/geom/Position;)V" },
	{ "lookAt", "(F)V" },
	{ "lookAt", "(FF)V" },
	{ "moveAt", "(Larc/math/geom/Vec2;)V" },
	{ "moveAt", "(Larc/math/geom/Vec2;F)V" },
	{ "resetController", "()V" },
	{ "rotateMove", "(Larc/math/geom/Vec2;)V" },
	{ "set", "(Lmindustry/type/UnitType;Lmindustry/entities/units/UnitController;)V" },
	{ "setType", "(Lmindustry/type/UnitType;)V" },
	{ "shadowAlpha", "(F)V" },
	{ "spawnedByCore", "(Z)V" },
	{ "splashTimer", "(F)V" },
	{ "trail", "(Lmindustry/graphics/Trail;)V" },
	{ "type", "(Lmindustry/type/UnitType;)V" },
	{ "updateBoosting", "(Z)V" },
	{ "updateBoosting", "(ZZ)V" },
	{ "updateDrowning", "()V" },
	{ "wobble", "()V" },
	{ "legAngle", "(I)F" },
	{ "curMoveOffset", "()Larc/math/geom/Vec2;" },
	{ "legOffset", "(Larc/math/geom/Vec2;I)Larc/math/geom/Vec2;" },
	{ "baseRotation", "()F" },
	{ "defaultLegAngle", "(I)F" },
	{ "moveSpace", "()F" },
	{ "totalLength", "()F" },
	{ "legs", "()[Lmindustry/entities/Leg;" },
	{ "lastDeepFloor", "()Lmindustry/world/blocks/environment/Floor;" },
	{ "baseRotation", "(F)V" },
	{ "curMoveOffset", "(Larc/math/geom/Vec2;)V" },
	{ "lastDeepFloor", "(Lmindustry/world/blocks/environment/Floor;)V" },
	{ "legs", "([Lmindustry/entities/Leg;)V" },
	{ "moveSpace", "(F)V" },
	{ "resetLegs", "()V" },
	{ "resetLegs", "(F)V" },
	{ "totalLength", "(F)V" },
	{ "applyStatus", "(Lmindustry/type/StatusEffect;FZ)V" },
	{ "lambda$unapply$0", "(Lmindustry/type/StatusEffect;Lmindustry/entities/units/StatusEntry;)Z" },
	{ "lambda$destroy$0", "(FLmindustry/gen/Building;)Z" },
	{ "lambda$clearStatuses$0", "(Lmindustry/entities/units/StatusEntry;)V" },
	{ "lambda$canLand$0", "(Lmindustry/gen/Unit;)Z" },
};

static jclass interfaces[] { &class_mindustry_gen_Builderc, &class_mindustry_gen_Drawc, &class_mindustry_gen_Entityc, &class_mindustry_gen_Healthc, &class_mindustry_gen_Hitboxc, &class_mindustry_gen_Itemsc, &class_mindustry_gen_Legsc, &class_mindustry_gen_Minerc, &class_mindustry_gen_Physicsc, &class_mindustry_gen_Posc, &class_mindustry_gen_Rotc, &class_mindustry_gen_Shieldc, &class_mindustry_gen_Statusc, &class_mindustry_gen_Syncc, &class_mindustry_gen_Teamc, &class_mindustry_gen_Unitc, &class_mindustry_gen_Velc, &class_mindustry_gen_Weaponsc, };

static FieldMetadata fields[] {
	{ "hitDuration", &class_float, (intptr_t) &SF_mindustry_gen_LegsUnit_hitDuration, "F", 25 },
	{ "straightVec", &class_arc_math_geom_Vec2, (intptr_t) &SF_mindustry_gen_LegsUnit_straightVec, "Larc/math/geom/Vec2;", 28 },
	{ "tmp1", &class_arc_math_geom_Vec2, (intptr_t) &SF_mindustry_gen_LegsUnit_tmp1, "Larc/math/geom/Vec2;", 28 },
	{ "tmp2", &class_arc_math_geom_Vec2, (intptr_t) &SF_mindustry_gen_LegsUnit_tmp2, "Larc/math/geom/Vec2;", 28 },
	{ "warpDst", &class_float, (intptr_t) &SF_mindustry_gen_LegsUnit_warpDst, "F", 25 },
	{ "added", &class_boolean, offsetof(mindustry_gen_LegsUnit, F_added), "Z", 132 },
	{ "applied", &class_arc_struct_Bits, offsetof(mindustry_gen_LegsUnit, F_applied), "Larc/struct/Bits;", 132 },
	{ "baseRotation", &class_float, offsetof(mindustry_gen_LegsUnit, F_baseRotation), "F", 129 },
	{ "buildCounter", &class_float, offsetof(mindustry_gen_LegsUnit, F_buildCounter), "F", 132 },
	{ "controller", &class_mindustry_entities_units_UnitController, offsetof(mindustry_gen_LegsUnit, F_controller), "Lmindustry/entities/units/UnitController;", 4 },
	{ "curMoveOffset", &class_arc_math_geom_Vec2, offsetof(mindustry_gen_LegsUnit, F_curMoveOffset), "Larc/math/geom/Vec2;", 129 },
	{ "isRotate", &class_boolean, offsetof(mindustry_gen_LegsUnit, F_isRotate), "Z", 132 },
	{ "lastActive", &class_mindustry_entities_units_BuildPlan, offsetof(mindustry_gen_LegsUnit, F_lastActive), "Lmindustry/entities/units/BuildPlan;", 132 },
	{ "lastDeepFloor", &class_mindustry_world_blocks_environment_Floor, offsetof(mindustry_gen_LegsUnit, F_lastDeepFloor), "Lmindustry/world/blocks/environment/Floor;", 129 },
	{ "lastSize", &class_int, offsetof(mindustry_gen_LegsUnit, F_lastSize), "I", 132 },
	{ "legs", getArrayClass(&class_mindustry_entities_Leg, 1), offsetof(mindustry_gen_LegsUnit, F_legs), "[Lmindustry/entities/Leg;", 129 },
	{ "moveSpace", &class_float, offsetof(mindustry_gen_LegsUnit, F_moveSpace), "F", 129 },
	{ "resupplyTime", &class_float, offsetof(mindustry_gen_LegsUnit, F_resupplyTime), "F", 132 },
	{ "rotation_LAST_", &class_float, offsetof(mindustry_gen_LegsUnit, F_rotation_LAST_), "F", 130 },
	{ "rotation_TARGET_", &class_float, offsetof(mindustry_gen_LegsUnit, F_rotation_TARGET_), "F", 130 },
	{ "statuses", &class_arc_struct_Seq, offsetof(mindustry_gen_LegsUnit, F_statuses), "Larc/struct/Seq;", 4 },
	{ "totalLength", &class_float, offsetof(mindustry_gen_LegsUnit, F_totalLength), "F", 129 },
	{ "wasFlying", &class_boolean, offsetof(mindustry_gen_LegsUnit, F_wasFlying), "Z", 132 },
	{ "wasHealed", &class_boolean, offsetof(mindustry_gen_LegsUnit, F_wasHealed), "Z", 132 },
	{ "wasPlayer", &class_boolean, offsetof(mindustry_gen_LegsUnit, F_wasPlayer), "Z", 132 },
	{ "x_LAST_", &class_float, offsetof(mindustry_gen_LegsUnit, F_x_LAST_), "F", 130 },
	{ "x_TARGET_", &class_float, offsetof(mindustry_gen_LegsUnit, F_x_TARGET_), "F", 130 },
	{ "y_LAST_", &class_float, offsetof(mindustry_gen_LegsUnit, F_y_LAST_), "F", 130 },
	{ "y_TARGET_", &class_float, offsetof(mindustry_gen_LegsUnit, F_y_TARGET_), "F", 130 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_mindustry_gen_LegsUnit, 0, "()V", 4 },
	{ "buildOn", (intptr_t) M_mindustry_gen_LegsUnit_buildOn_R_mindustry_gen_Building, VTABLE_mindustry_gen_LegsUnit_buildOn_R_mindustry_gen_Building, "()Lmindustry/gen/Building;", 1 },
	{ "getPlayer", (intptr_t) M_mindustry_gen_LegsUnit_getPlayer_R_mindustry_gen_Player, VTABLE_mindustry_gen_LegsUnit_getPlayer_R_mindustry_gen_Player, "()Lmindustry/gen/Player;", 1 },
	{ "getControllerName", (intptr_t) M_mindustry_gen_LegsUnit_getControllerName_R_java_lang_String, VTABLE_mindustry_gen_LegsUnit_getControllerName_R_java_lang_String, "()Ljava/lang/String;", 1 },
	{ "buildPlan", (intptr_t) M_mindustry_gen_LegsUnit_buildPlan_R_mindustry_entities_units_BuildPlan, VTABLE_mindustry_gen_LegsUnit_buildPlan_R_mindustry_entities_units_BuildPlan, "()Lmindustry/entities/units/BuildPlan;", 1 },
	{ "getMineResult", (intptr_t) M_mindustry_gen_LegsUnit_getMineResult_mindustry_world_Tile_R_mindustry_type_Item, VTABLE_mindustry_gen_LegsUnit_getMineResult_mindustry_world_Tile_R_mindustry_type_Item, "(Lmindustry/world/Tile;)Lmindustry/type/Item;", 1 },
	{ "tileOn", (intptr_t) M_mindustry_gen_LegsUnit_tileOn_R_mindustry_world_Tile, VTABLE_mindustry_gen_LegsUnit_tileOn_R_mindustry_world_Tile, "()Lmindustry/world/Tile;", 1 },
	{ "closestCore", (intptr_t) M_mindustry_gen_LegsUnit_closestCore_R_mindustry_world_blocks_storage_CoreBlock$CoreBuild, VTABLE_mindustry_gen_LegsUnit_closestCore_R_mindustry_world_blocks_storage_CoreBlock$CoreBuild, "()Lmindustry/world/blocks/storage/CoreBlock$CoreBuild;", 1 },
	{ "closestEnemyCore", (intptr_t) M_mindustry_gen_LegsUnit_closestEnemyCore_R_mindustry_world_blocks_storage_CoreBlock$CoreBuild, VTABLE_mindustry_gen_LegsUnit_closestEnemyCore_R_mindustry_world_blocks_storage_CoreBlock$CoreBuild, "()Lmindustry/world/blocks/storage/CoreBlock$CoreBuild;", 1 },
	{ "core", (intptr_t) M_mindustry_gen_LegsUnit_core_R_mindustry_world_blocks_storage_CoreBlock$CoreBuild, VTABLE_mindustry_gen_LegsUnit_core_R_mindustry_world_blocks_storage_CoreBlock$CoreBuild, "()Lmindustry/world/blocks/storage/CoreBlock$CoreBuild;", 1 },
	{ "curMoveOffset", (intptr_t) M_mindustry_gen_LegsUnit_curMoveOffset_R_arc_math_geom_Vec2, VTABLE_mindustry_gen_LegsUnit_curMoveOffset_R_arc_math_geom_Vec2, "()Larc/math/geom/Vec2;", 1 },
	{ "isRotate", (intptr_t) M_mindustry_gen_LegsUnit_isRotate_R_boolean, VTABLE_mindustry_gen_LegsUnit_isRotate_R_boolean, "()Z", 1 },
	{ "baseRotation", (intptr_t) M_mindustry_gen_LegsUnit_baseRotation_R_float, VTABLE_mindustry_gen_LegsUnit_baseRotation_R_float, "()F", 1 },
	{ "moveSpace", (intptr_t) M_mindustry_gen_LegsUnit_moveSpace_R_float, VTABLE_mindustry_gen_LegsUnit_moveSpace_R_float, "()F", 1 },
	{ "totalLength", (intptr_t) M_mindustry_gen_LegsUnit_totalLength_R_float, VTABLE_mindustry_gen_LegsUnit_totalLength_R_float, "()F", 1 },
	{ "classId", (intptr_t) M_mindustry_gen_LegsUnit_classId_R_int, VTABLE_mindustry_gen_LegsUnit_classId_R_int, "()I", 1 },
	{ "legs", (intptr_t) M_mindustry_gen_LegsUnit_legs_R_Array1_mindustry_entities_Leg, VTABLE_mindustry_gen_LegsUnit_legs_R_Array1_mindustry_entities_Leg, "()[Lmindustry/entities/Leg;", 1 },
	{ "lastDeepFloor", (intptr_t) M_mindustry_gen_LegsUnit_lastDeepFloor_R_mindustry_world_blocks_environment_Floor, VTABLE_mindustry_gen_LegsUnit_lastDeepFloor_R_mindustry_world_blocks_environment_Floor, "()Lmindustry/world/blocks/environment/Floor;", 1 },
	{ "baseRotation", (intptr_t) M_mindustry_gen_LegsUnit_baseRotation_float, VTABLE_mindustry_gen_LegsUnit_baseRotation_float, "(F)V", 1 },
	{ "curMoveOffset", (intptr_t) M_mindustry_gen_LegsUnit_curMoveOffset_arc_math_geom_Vec2, VTABLE_mindustry_gen_LegsUnit_curMoveOffset_arc_math_geom_Vec2, "(Larc/math/geom/Vec2;)V", 1 },
	{ "lastDeepFloor", (intptr_t) M_mindustry_gen_LegsUnit_lastDeepFloor_mindustry_world_blocks_environment_Floor, VTABLE_mindustry_gen_LegsUnit_lastDeepFloor_mindustry_world_blocks_environment_Floor, "(Lmindustry/world/blocks/environment/Floor;)V", 1 },
	{ "legs", (intptr_t) M_mindustry_gen_LegsUnit_legs_Array1_mindustry_entities_Leg, VTABLE_mindustry_gen_LegsUnit_legs_Array1_mindustry_entities_Leg, "([Lmindustry/entities/Leg;)V", 1 },
	{ "moveSpace", (intptr_t) M_mindustry_gen_LegsUnit_moveSpace_float, VTABLE_mindustry_gen_LegsUnit_moveSpace_float, "(F)V", 1 },
	{ "totalLength", (intptr_t) M_mindustry_gen_LegsUnit_totalLength_float, VTABLE_mindustry_gen_LegsUnit_totalLength_float, "(F)V", 1 },
	{ "read", (intptr_t) M_mindustry_gen_LegsUnit_read_arc_util_io_Reads, VTABLE_mindustry_gen_LegsUnit_read_arc_util_io_Reads, "(Larc/util/io/Reads;)V", 1 },
	{ "write", (intptr_t) M_mindustry_gen_LegsUnit_write_arc_util_io_Writes, VTABLE_mindustry_gen_LegsUnit_write_arc_util_io_Writes, "(Larc/util/io/Writes;)V", 1 },
	{ "applyStatus", (intptr_t) M_mindustry_gen_LegsUnit_applyStatus_mindustry_type_StatusEffect_float_boolean, VTABLE_mindustry_gen_LegsUnit_applyStatus_mindustry_type_StatusEffect_float_boolean, "(Lmindustry/type/StatusEffect;FZ)V", 2 },
	{ "self", (intptr_t) M_mindustry_gen_LegsUnit_self_R_mindustry_gen_Entityc, VTABLE_mindustry_gen_LegsUnit_self_R_mindustry_gen_Entityc, "()Lmindustry/gen/Entityc;", 1 },
	{ "as", (intptr_t) M_mindustry_gen_LegsUnit_as_R_java_lang_Object, VTABLE_mindustry_gen_LegsUnit_as_R_java_lang_Object, "()Ljava/lang/Object;", 1 },
	{ "statusColor", (intptr_t) M_mindustry_gen_LegsUnit_statusColor_R_arc_graphics_Color, VTABLE_mindustry_gen_LegsUnit_statusColor_R_arc_graphics_Color, "()Larc/graphics/Color;", 1 },
	{ "icon", (intptr_t) M_mindustry_gen_LegsUnit_icon_R_arc_graphics_g2d_TextureRegion, VTABLE_mindustry_gen_LegsUnit_icon_R_arc_graphics_g2d_TextureRegion, "()Larc/graphics/g2d/TextureRegion;", 1 },
	{ "legOffset", (intptr_t) M_mindustry_gen_LegsUnit_legOffset_arc_math_geom_Vec2_int_R_arc_math_geom_Vec2, VTABLE_mindustry_gen_LegsUnit_legOffset_arc_math_geom_Vec2_int_R_arc_math_geom_Vec2, "(Larc/math/geom/Vec2;I)Larc/math/geom/Vec2;", 1 },
	{ "statusBits", (intptr_t) M_mindustry_gen_LegsUnit_statusBits_R_arc_struct_Bits, VTABLE_mindustry_gen_LegsUnit_statusBits_R_arc_struct_Bits, "()Larc/struct/Bits;", 1 },
	{ "acceptsItem", (intptr_t) M_mindustry_gen_LegsUnit_acceptsItem_mindustry_type_Item_R_boolean, VTABLE_mindustry_gen_LegsUnit_acceptsItem_mindustry_type_Item_R_boolean, "(Lmindustry/type/Item;)Z", 1 },
	{ "activelyBuilding", (intptr_t) M_mindustry_gen_LegsUnit_activelyBuilding_R_boolean, VTABLE_mindustry_gen_LegsUnit_activelyBuilding_R_boolean, "()Z", 1 },
	{ "allowCommand", (intptr_t) M_mindustry_gen_LegsUnit_allowCommand_R_boolean, VTABLE_mindustry_gen_LegsUnit_allowCommand_R_boolean, "()Z", 1 },
	{ "canBuild", (intptr_t) M_mindustry_gen_LegsUnit_canBuild_R_boolean, VTABLE_mindustry_gen_LegsUnit_canBuild_R_boolean, "()Z", 1 },
	{ "canDrown", (intptr_t) M_mindustry_gen_LegsUnit_canDrown_R_boolean, VTABLE_mindustry_gen_LegsUnit_canDrown_R_boolean, "()Z", 1 },
	{ "canLand", (intptr_t) M_mindustry_gen_LegsUnit_canLand_R_boolean, VTABLE_mindustry_gen_LegsUnit_canLand_R_boolean, "()Z", 1 },
	{ "canMine", (intptr_t) M_mindustry_gen_LegsUnit_canMine_R_boolean, VTABLE_mindustry_gen_LegsUnit_canMine_R_boolean, "()Z", 1 },
	{ "canMine", (intptr_t) M_mindustry_gen_LegsUnit_canMine_mindustry_type_Item_R_boolean, VTABLE_mindustry_gen_LegsUnit_canMine_mindustry_type_Item_R_boolean, "(Lmindustry/type/Item;)Z", 1 },
	{ "canPass", (intptr_t) M_mindustry_gen_LegsUnit_canPass_int_int_R_boolean, VTABLE_mindustry_gen_LegsUnit_canPass_int_int_R_boolean, "(II)Z", 1 },
	{ "canPassOn", (intptr_t) M_mindustry_gen_LegsUnit_canPassOn_R_boolean, VTABLE_mindustry_gen_LegsUnit_canPassOn_R_boolean, "()Z", 1 },
	{ "canShoot", (intptr_t) M_mindustry_gen_LegsUnit_canShoot_R_boolean, VTABLE_mindustry_gen_LegsUnit_canShoot_R_boolean, "()Z", 1 },
	{ "canTarget", (intptr_t) M_mindustry_gen_LegsUnit_canTarget_mindustry_gen_Teamc_R_boolean, VTABLE_mindustry_gen_LegsUnit_canTarget_mindustry_gen_Teamc_R_boolean, "(Lmindustry/gen/Teamc;)Z", 1 },
	{ "cheating", (intptr_t) M_mindustry_gen_LegsUnit_cheating_R_boolean, VTABLE_mindustry_gen_LegsUnit_cheating_R_boolean, "()Z", 1 },
	{ "checkTarget", (intptr_t) M_mindustry_gen_LegsUnit_checkTarget_boolean_boolean_R_boolean, VTABLE_mindustry_gen_LegsUnit_checkTarget_boolean_boolean_R_boolean, "(ZZ)Z", 1 },
	{ "collides", (intptr_t) M_mindustry_gen_LegsUnit_collides_mindustry_gen_Hitboxc_R_boolean, VTABLE_mindustry_gen_LegsUnit_collides_mindustry_gen_Hitboxc_R_boolean, "(Lmindustry/gen/Hitboxc;)Z", 1 },
	{ "damaged", (intptr_t) M_mindustry_gen_LegsUnit_damaged_R_boolean, VTABLE_mindustry_gen_LegsUnit_damaged_R_boolean, "()Z", 1 },
	{ "displayable", (intptr_t) M_mindustry_gen_LegsUnit_displayable_R_boolean, VTABLE_mindustry_gen_LegsUnit_displayable_R_boolean, "()Z", 1 },
	{ "hasEffect", (intptr_t) M_mindustry_gen_LegsUnit_hasEffect_mindustry_type_StatusEffect_R_boolean, VTABLE_mindustry_gen_LegsUnit_hasEffect_mindustry_type_StatusEffect_R_boolean, "(Lmindustry/type/StatusEffect;)Z", 1 },
	{ "hasItem", (intptr_t) M_mindustry_gen_LegsUnit_hasItem_R_boolean, VTABLE_mindustry_gen_LegsUnit_hasItem_R_boolean, "()Z", 1 },
	{ "hasWeapons", (intptr_t) M_mindustry_gen_LegsUnit_hasWeapons_R_boolean, VTABLE_mindustry_gen_LegsUnit_hasWeapons_R_boolean, "()Z", 1 },
	{ "hittable", (intptr_t) M_mindustry_gen_LegsUnit_hittable_R_boolean, VTABLE_mindustry_gen_LegsUnit_hittable_R_boolean, "()Z", 1 },
	{ "ignoreSolids", (intptr_t) M_mindustry_gen_LegsUnit_ignoreSolids_R_boolean, VTABLE_mindustry_gen_LegsUnit_ignoreSolids_R_boolean, "()Z", 1 },
	{ "inFogTo", (intptr_t) M_mindustry_gen_LegsUnit_inFogTo_mindustry_game_Team_R_boolean, VTABLE_mindustry_gen_LegsUnit_inFogTo_mindustry_game_Team_R_boolean, "(Lmindustry/game/Team;)Z", 1 },
	{ "inRange", (intptr_t) M_mindustry_gen_LegsUnit_inRange_arc_math_geom_Position_R_boolean, VTABLE_mindustry_gen_LegsUnit_inRange_arc_math_geom_Position_R_boolean, "(Larc/math/geom/Position;)Z", 1 },
	{ "isAI", (intptr_t) M_mindustry_gen_LegsUnit_isAI_R_boolean, VTABLE_mindustry_gen_LegsUnit_isAI_R_boolean, "()Z", 1 },
	{ "isAdded", (intptr_t) M_mindustry_gen_LegsUnit_isAdded_R_boolean, VTABLE_mindustry_gen_LegsUnit_isAdded_R_boolean, "()Z", 1 },
	{ "isBoss", (intptr_t) M_mindustry_gen_LegsUnit_isBoss_R_boolean, VTABLE_mindustry_gen_LegsUnit_isBoss_R_boolean, "()Z", 1 },
	{ "isBuilding", (intptr_t) M_mindustry_gen_LegsUnit_isBuilding_R_boolean, VTABLE_mindustry_gen_LegsUnit_isBuilding_R_boolean, "()Z", 1 },
	{ "isCommandable", (intptr_t) M_mindustry_gen_LegsUnit_isCommandable_R_boolean, VTABLE_mindustry_gen_LegsUnit_isCommandable_R_boolean, "()Z", 1 },
	{ "isEnemy", (intptr_t) M_mindustry_gen_LegsUnit_isEnemy_R_boolean, VTABLE_mindustry_gen_LegsUnit_isEnemy_R_boolean, "()Z", 1 },
	{ "isFlying", (intptr_t) M_mindustry_gen_LegsUnit_isFlying_R_boolean, VTABLE_mindustry_gen_LegsUnit_isFlying_R_boolean, "()Z", 1 },
	{ "isGrounded", (intptr_t) M_mindustry_gen_LegsUnit_isGrounded_R_boolean, VTABLE_mindustry_gen_LegsUnit_isGrounded_R_boolean, "()Z", 1 },
	{ "isImmune", (intptr_t) M_mindustry_gen_LegsUnit_isImmune_mindustry_type_StatusEffect_R_boolean, VTABLE_mindustry_gen_LegsUnit_isImmune_mindustry_type_StatusEffect_R_boolean, "(Lmindustry/type/StatusEffect;)Z", 1 },
	{ "isLocal", (intptr_t) M_mindustry_gen_LegsUnit_isLocal_R_boolean, VTABLE_mindustry_gen_LegsUnit_isLocal_R_boolean, "()Z", 1 },
	{ "isMissile", (intptr_t) M_mindustry_gen_LegsUnit_isMissile_R_boolean, VTABLE_mindustry_gen_LegsUnit_isMissile_R_boolean, "()Z", 1 },
	{ "isPathImpassable", (intptr_t) M_mindustry_gen_LegsUnit_isPathImpassable_int_int_R_boolean, VTABLE_mindustry_gen_LegsUnit_isPathImpassable_int_int_R_boolean, "(II)Z", 1 },
	{ "isPlayer", (intptr_t) M_mindustry_gen_LegsUnit_isPlayer_R_boolean, VTABLE_mindustry_gen_LegsUnit_isPlayer_R_boolean, "()Z", 1 },
	{ "isRemote", (intptr_t) M_mindustry_gen_LegsUnit_isRemote_R_boolean, VTABLE_mindustry_gen_LegsUnit_isRemote_R_boolean, "()Z", 1 },
	{ "isSyncHidden", (intptr_t) M_mindustry_gen_LegsUnit_isSyncHidden_mindustry_game_Team_R_boolean, VTABLE_mindustry_gen_LegsUnit_isSyncHidden_mindustry_game_Team_R_boolean, "(Lmindustry/game/Team;)Z", 1 },
	{ "isValid", (intptr_t) M_mindustry_gen_LegsUnit_isValid_R_boolean, VTABLE_mindustry_gen_LegsUnit_isValid_R_boolean, "()Z", 1 },
	{ "killable", (intptr_t) M_mindustry_gen_LegsUnit_killable_R_boolean, VTABLE_mindustry_gen_LegsUnit_killable_R_boolean, "()Z", 1 },
	{ "mining", (intptr_t) M_mindustry_gen_LegsUnit_mining_R_boolean, VTABLE_mindustry_gen_LegsUnit_mining_R_boolean, "()Z", 1 },
	{ "moving", (intptr_t) M_mindustry_gen_LegsUnit_moving_R_boolean, VTABLE_mindustry_gen_LegsUnit_moving_R_boolean, "()Z", 1 },
	{ "offloadImmediately", (intptr_t) M_mindustry_gen_LegsUnit_offloadImmediately_R_boolean, VTABLE_mindustry_gen_LegsUnit_offloadImmediately_R_boolean, "()Z", 1 },
	{ "onSolid", (intptr_t) M_mindustry_gen_LegsUnit_onSolid_R_boolean, VTABLE_mindustry_gen_LegsUnit_onSolid_R_boolean, "()Z", 1 },
	{ "playerControllable", (intptr_t) M_mindustry_gen_LegsUnit_playerControllable_R_boolean, VTABLE_mindustry_gen_LegsUnit_playerControllable_R_boolean, "()Z", 1 },
	{ "serialize", (intptr_t) M_mindustry_gen_LegsUnit_serialize_R_boolean, VTABLE_mindustry_gen_LegsUnit_serialize_R_boolean, "()Z", 1 },
	{ "shouldSkip", (intptr_t) M_mindustry_gen_LegsUnit_shouldSkip_mindustry_entities_units_BuildPlan_mindustry_gen_Building_R_boolean, VTABLE_mindustry_gen_LegsUnit_shouldSkip_mindustry_entities_units_BuildPlan_mindustry_gen_Building_R_boolean, "(Lmindustry/entities/units/BuildPlan;Lmindustry/gen/Building;)Z", 1 },
	{ "shouldUpdateController", (intptr_t) M_mindustry_gen_LegsUnit_shouldUpdateController_R_boolean, VTABLE_mindustry_gen_LegsUnit_shouldUpdateController_R_boolean, "()Z", 1 },
	{ "targetable", (intptr_t) M_mindustry_gen_LegsUnit_targetable_mindustry_game_Team_R_boolean, VTABLE_mindustry_gen_LegsUnit_targetable_mindustry_game_Team_R_boolean, "(Lmindustry/game/Team;)Z", 1 },
	{ "validMine", (intptr_t) M_mindustry_gen_LegsUnit_validMine_mindustry_world_Tile_R_boolean, VTABLE_mindustry_gen_LegsUnit_validMine_mindustry_world_Tile_R_boolean, "(Lmindustry/world/Tile;)Z", 1 },
	{ "validMine", (intptr_t) M_mindustry_gen_LegsUnit_validMine_mindustry_world_Tile_boolean_R_boolean, VTABLE_mindustry_gen_LegsUnit_validMine_mindustry_world_Tile_boolean_R_boolean, "(Lmindustry/world/Tile;Z)Z", 1 },
	{ "sense", (intptr_t) M_mindustry_gen_LegsUnit_sense_mindustry_ctype_Content_R_double, VTABLE_mindustry_gen_LegsUnit_sense_mindustry_ctype_Content_R_double, "(Lmindustry/ctype/Content;)D", 1 },
	{ "sense", (intptr_t) M_mindustry_gen_LegsUnit_sense_mindustry_logic_LAccess_R_double, VTABLE_mindustry_gen_LegsUnit_sense_mindustry_logic_LAccess_R_double, "(Lmindustry/logic/LAccess;)D", 1 },
	{ "ammof", (intptr_t) M_mindustry_gen_LegsUnit_ammof_R_float, VTABLE_mindustry_gen_LegsUnit_ammof_R_float, "()F", 1 },
	{ "bounds", (intptr_t) M_mindustry_gen_LegsUnit_bounds_R_float, VTABLE_mindustry_gen_LegsUnit_bounds_R_float, "()F", 1 },
	{ "clipSize", (intptr_t) M_mindustry_gen_LegsUnit_clipSize_R_float, VTABLE_mindustry_gen_LegsUnit_clipSize_R_float, "()F", 1 },
	{ "defaultLegAngle", (intptr_t) M_mindustry_gen_LegsUnit_defaultLegAngle_int_R_float, VTABLE_mindustry_gen_LegsUnit_defaultLegAngle_int_R_float, "(I)F", 1 },
	{ "deltaAngle", (intptr_t) M_mindustry_gen_LegsUnit_deltaAngle_R_float, VTABLE_mindustry_gen_LegsUnit_deltaAngle_R_float, "()F", 1 },
	{ "deltaLen", (intptr_t) M_mindustry_gen_LegsUnit_deltaLen_R_float, VTABLE_mindustry_gen_LegsUnit_deltaLen_R_float, "()F", 1 },
	{ "floorSpeedMultiplier", (intptr_t) M_mindustry_gen_LegsUnit_floorSpeedMultiplier_R_float, VTABLE_mindustry_gen_LegsUnit_floorSpeedMultiplier_R_float, "()F", 1 },
	{ "getDuration", (intptr_t) M_mindustry_gen_LegsUnit_getDuration_mindustry_type_StatusEffect_R_float, VTABLE_mindustry_gen_LegsUnit_getDuration_mindustry_type_StatusEffect_R_float, "(Lmindustry/type/StatusEffect;)F", 1 },
	{ "getX", (intptr_t) M_mindustry_gen_LegsUnit_getX_R_float, VTABLE_mindustry_gen_LegsUnit_getX_R_float, "()F", 1 },
	{ "getY", (intptr_t) M_mindustry_gen_LegsUnit_getY_R_float, VTABLE_mindustry_gen_LegsUnit_getY_R_float, "()F", 1 },
	{ "healthf", (intptr_t) M_mindustry_gen_LegsUnit_healthf_R_float, VTABLE_mindustry_gen_LegsUnit_healthf_R_float, "()F", 1 },
	{ "hitSize", (intptr_t) M_mindustry_gen_LegsUnit_hitSize_R_float, VTABLE_mindustry_gen_LegsUnit_hitSize_R_float, "()F", 1 },
	{ "legAngle", (intptr_t) M_mindustry_gen_LegsUnit_legAngle_int_R_float, VTABLE_mindustry_gen_LegsUnit_legAngle_int_R_float, "(I)F", 1 },
	{ "mass", (intptr_t) M_mindustry_gen_LegsUnit_mass_R_float, VTABLE_mindustry_gen_LegsUnit_mass_R_float, "()F", 1 },
	{ "physicSize", (intptr_t) M_mindustry_gen_LegsUnit_physicSize_R_float, VTABLE_mindustry_gen_LegsUnit_physicSize_R_float, "()F", 1 },
	{ "prefRotation", (intptr_t) M_mindustry_gen_LegsUnit_prefRotation_R_float, VTABLE_mindustry_gen_LegsUnit_prefRotation_R_float, "()F", 1 },
	{ "range", (intptr_t) M_mindustry_gen_LegsUnit_range_R_float, VTABLE_mindustry_gen_LegsUnit_range_R_float, "()F", 1 },
	{ "speed", (intptr_t) M_mindustry_gen_LegsUnit_speed_R_float, VTABLE_mindustry_gen_LegsUnit_speed_R_float, "()F", 1 },
	{ "cap", (intptr_t) M_mindustry_gen_LegsUnit_cap_R_int, VTABLE_mindustry_gen_LegsUnit_cap_R_int, "()I", 1 },
	{ "collisionLayer", (intptr_t) M_mindustry_gen_LegsUnit_collisionLayer_R_int, VTABLE_mindustry_gen_LegsUnit_collisionLayer_R_int, "()I", 1 },
	{ "count", (intptr_t) M_mindustry_gen_LegsUnit_count_R_int, VTABLE_mindustry_gen_LegsUnit_count_R_int, "()I", 1 },
	{ "itemCapacity", (intptr_t) M_mindustry_gen_LegsUnit_itemCapacity_R_int, VTABLE_mindustry_gen_LegsUnit_itemCapacity_R_int, "()I", 1 },
	{ "maxAccepted", (intptr_t) M_mindustry_gen_LegsUnit_maxAccepted_mindustry_type_Item_R_int, VTABLE_mindustry_gen_LegsUnit_maxAccepted_mindustry_type_Item_R_int, "(Lmindustry/type/Item;)I", 1 },
	{ "tileX", (intptr_t) M_mindustry_gen_LegsUnit_tileX_R_int, VTABLE_mindustry_gen_LegsUnit_tileX_R_int, "()I", 1 },
	{ "tileY", (intptr_t) M_mindustry_gen_LegsUnit_tileY_R_int, VTABLE_mindustry_gen_LegsUnit_tileY_R_int, "()I", 1 },
	{ "senseObject", (intptr_t) M_mindustry_gen_LegsUnit_senseObject_mindustry_logic_LAccess_R_java_lang_Object, VTABLE_mindustry_gen_LegsUnit_senseObject_mindustry_logic_LAccess_R_java_lang_Object, "(Lmindustry/logic/LAccess;)Ljava/lang/Object;", 1 },
	{ "toString", (intptr_t) M_mindustry_gen_LegsUnit_toString_R_java_lang_String, VTABLE_mindustry_gen_LegsUnit_toString_R_java_lang_String, "()Ljava/lang/String;", 1 },
	{ "command", (intptr_t) M_mindustry_gen_LegsUnit_command_R_mindustry_ai_types_CommandAI, VTABLE_mindustry_gen_LegsUnit_command_R_mindustry_ai_types_CommandAI, "()Lmindustry/ai/types/CommandAI;", 1 },
	{ "solidity", (intptr_t) M_mindustry_gen_LegsUnit_solidity_R_mindustry_entities_EntityCollisions$SolidPred, VTABLE_mindustry_gen_LegsUnit_solidity_R_mindustry_entities_EntityCollisions$SolidPred, "()Lmindustry/entities/EntityCollisions$SolidPred;", 1 },
	{ "applyDynamicStatus", (intptr_t) M_mindustry_gen_LegsUnit_applyDynamicStatus_R_mindustry_entities_units_StatusEntry, VTABLE_mindustry_gen_LegsUnit_applyDynamicStatus_R_mindustry_entities_units_StatusEntry, "()Lmindustry/entities/units/StatusEntry;", 1 },
	{ "controller", (intptr_t) M_mindustry_gen_LegsUnit_controller_R_mindustry_entities_units_UnitController, VTABLE_mindustry_gen_LegsUnit_controller_R_mindustry_entities_units_UnitController, "()Lmindustry/entities/units/UnitController;", 1 },
	{ "item", (intptr_t) M_mindustry_gen_LegsUnit_item_R_mindustry_type_Item, VTABLE_mindustry_gen_LegsUnit_item_R_mindustry_type_Item, "()Lmindustry/type/Item;", 1 },
	{ "blockOn", (intptr_t) M_mindustry_gen_LegsUnit_blockOn_R_mindustry_world_Block, VTABLE_mindustry_gen_LegsUnit_blockOn_R_mindustry_world_Block, "()Lmindustry/world/Block;", 1 },
	{ "drownFloor", (intptr_t) M_mindustry_gen_LegsUnit_drownFloor_R_mindustry_world_blocks_environment_Floor, VTABLE_mindustry_gen_LegsUnit_drownFloor_R_mindustry_world_blocks_environment_Floor, "()Lmindustry/world/blocks/environment/Floor;", 1 },
	{ "floorOn", (intptr_t) M_mindustry_gen_LegsUnit_floorOn_R_mindustry_world_blocks_environment_Floor, VTABLE_mindustry_gen_LegsUnit_floorOn_R_mindustry_world_blocks_environment_Floor, "()Lmindustry/world/blocks/environment/Floor;", 1 },
	{ "create", (intptr_t) SM_mindustry_gen_LegsUnit_create_R_mindustry_gen_LegsUnit, 0, "()Lmindustry/gen/LegsUnit;", 9 },
	{ "add", (intptr_t) M_mindustry_gen_LegsUnit_add, VTABLE_mindustry_gen_LegsUnit_add, "()V", 1 },
	{ "addBuild", (intptr_t) M_mindustry_gen_LegsUnit_addBuild_mindustry_entities_units_BuildPlan, VTABLE_mindustry_gen_LegsUnit_addBuild_mindustry_entities_units_BuildPlan, "(Lmindustry/entities/units/BuildPlan;)V", 1 },
	{ "addBuild", (intptr_t) M_mindustry_gen_LegsUnit_addBuild_mindustry_entities_units_BuildPlan_boolean, VTABLE_mindustry_gen_LegsUnit_addBuild_mindustry_entities_units_BuildPlan_boolean, "(Lmindustry/entities/units/BuildPlan;Z)V", 1 },
	{ "addItem", (intptr_t) M_mindustry_gen_LegsUnit_addItem_mindustry_type_Item, VTABLE_mindustry_gen_LegsUnit_addItem_mindustry_type_Item, "(Lmindustry/type/Item;)V", 1 },
	{ "addItem", (intptr_t) M_mindustry_gen_LegsUnit_addItem_mindustry_type_Item_int, VTABLE_mindustry_gen_LegsUnit_addItem_mindustry_type_Item_int, "(Lmindustry/type/Item;I)V", 1 },
	{ "afterRead", (intptr_t) M_mindustry_gen_LegsUnit_afterRead, VTABLE_mindustry_gen_LegsUnit_afterRead, "()V", 1 },
	{ "afterReadAll", (intptr_t) M_mindustry_gen_LegsUnit_afterReadAll, VTABLE_mindustry_gen_LegsUnit_afterReadAll, "()V", 1 },
	{ "afterSync", (intptr_t) M_mindustry_gen_LegsUnit_afterSync, VTABLE_mindustry_gen_LegsUnit_afterSync, "()V", 1 },
	{ "aim", (intptr_t) M_mindustry_gen_LegsUnit_aim_arc_math_geom_Position, VTABLE_mindustry_gen_LegsUnit_aim_arc_math_geom_Position, "(Larc/math/geom/Position;)V", 1 },
	{ "aim", (intptr_t) M_mindustry_gen_LegsUnit_aim_float_float, VTABLE_mindustry_gen_LegsUnit_aim_float_float, "(FF)V", 1 },
	{ "aim", (intptr_t) M_mindustry_gen_LegsUnit_aim_float_float_boolean, VTABLE_mindustry_gen_LegsUnit_aim_float_float_boolean, "(FFZ)V", 1 },
	{ "aimLook", (intptr_t) M_mindustry_gen_LegsUnit_aimLook_arc_math_geom_Position, VTABLE_mindustry_gen_LegsUnit_aimLook_arc_math_geom_Position, "(Larc/math/geom/Position;)V", 1 },
	{ "aimLook", (intptr_t) M_mindustry_gen_LegsUnit_aimLook_float_float, VTABLE_mindustry_gen_LegsUnit_aimLook_float_float, "(FF)V", 1 },
	{ "apply", (intptr_t) M_mindustry_gen_LegsUnit_apply_mindustry_type_StatusEffect, VTABLE_mindustry_gen_LegsUnit_apply_mindustry_type_StatusEffect, "(Lmindustry/type/StatusEffect;)V", 1 },
	{ "apply", (intptr_t) M_mindustry_gen_LegsUnit_apply_mindustry_type_StatusEffect_float, VTABLE_mindustry_gen_LegsUnit_apply_mindustry_type_StatusEffect_float, "(Lmindustry/type/StatusEffect;F)V", 1 },
	{ "approach", (intptr_t) M_mindustry_gen_LegsUnit_approach_arc_math_geom_Vec2, VTABLE_mindustry_gen_LegsUnit_approach_arc_math_geom_Vec2, "(Larc/math/geom/Vec2;)V", 1 },
	{ "beforeWrite", (intptr_t) M_mindustry_gen_LegsUnit_beforeWrite, VTABLE_mindustry_gen_LegsUnit_beforeWrite, "()V", 1 },
	{ "clampHealth", (intptr_t) M_mindustry_gen_LegsUnit_clampHealth, VTABLE_mindustry_gen_LegsUnit_clampHealth, "()V", 1 },
	{ "clearBuilding", (intptr_t) M_mindustry_gen_LegsUnit_clearBuilding, VTABLE_mindustry_gen_LegsUnit_clearBuilding, "()V", 1 },
	{ "clearItem", (intptr_t) M_mindustry_gen_LegsUnit_clearItem, VTABLE_mindustry_gen_LegsUnit_clearItem, "()V", 1 },
	{ "clearStatuses", (intptr_t) M_mindustry_gen_LegsUnit_clearStatuses, VTABLE_mindustry_gen_LegsUnit_clearStatuses, "()V", 1 },
	{ "collision", (intptr_t) M_mindustry_gen_LegsUnit_collision_mindustry_gen_Hitboxc_float_float, VTABLE_mindustry_gen_LegsUnit_collision_mindustry_gen_Hitboxc_float_float, "(Lmindustry/gen/Hitboxc;FF)V", 1 },
	{ "controlWeapons", (intptr_t) M_mindustry_gen_LegsUnit_controlWeapons_boolean_boolean, VTABLE_mindustry_gen_LegsUnit_controlWeapons_boolean_boolean, "(ZZ)V", 1 },
	{ "controlWeapons", (intptr_t) M_mindustry_gen_LegsUnit_controlWeapons_boolean, VTABLE_mindustry_gen_LegsUnit_controlWeapons_boolean, "(Z)V", 1 },
	{ "controller", (intptr_t) M_mindustry_gen_LegsUnit_controller_mindustry_entities_units_UnitController, VTABLE_mindustry_gen_LegsUnit_controller_mindustry_entities_units_UnitController, "(Lmindustry/entities/units/UnitController;)V", 1 },
	{ "damage", (intptr_t) M_mindustry_gen_LegsUnit_damage_float, VTABLE_mindustry_gen_LegsUnit_damage_float, "(F)V", 1 },
	{ "damage", (intptr_t) M_mindustry_gen_LegsUnit_damage_float_boolean, VTABLE_mindustry_gen_LegsUnit_damage_float_boolean, "(FZ)V", 1 },
	{ "damageArmorMult", (intptr_t) M_mindustry_gen_LegsUnit_damageArmorMult_float_float, VTABLE_mindustry_gen_LegsUnit_damageArmorMult_float_float, "(FF)V", 1 },
	{ "damageArmorMult", (intptr_t) M_mindustry_gen_LegsUnit_damageArmorMult_float_float_boolean, VTABLE_mindustry_gen_LegsUnit_damageArmorMult_float_float_boolean, "(FFZ)V", 1 },
	{ "damageContinuous", (intptr_t) M_mindustry_gen_LegsUnit_damageContinuous_float, VTABLE_mindustry_gen_LegsUnit_damageContinuous_float, "(F)V", 1 },
	{ "damageContinuousArmorMult", (intptr_t) M_mindustry_gen_LegsUnit_damageContinuousArmorMult_float_float, VTABLE_mindustry_gen_LegsUnit_damageContinuousArmorMult_float_float, "(FF)V", 1 },
	{ "damageContinuousPierce", (intptr_t) M_mindustry_gen_LegsUnit_damageContinuousPierce_float, VTABLE_mindustry_gen_LegsUnit_damageContinuousPierce_float, "(F)V", 1 },
	{ "damagePierce", (intptr_t) M_mindustry_gen_LegsUnit_damagePierce_float, VTABLE_mindustry_gen_LegsUnit_damagePierce_float, "(F)V", 1 },
	{ "damagePierce", (intptr_t) M_mindustry_gen_LegsUnit_damagePierce_float_boolean, VTABLE_mindustry_gen_LegsUnit_damagePierce_float_boolean, "(FZ)V", 1 },
	{ "destroy", (intptr_t) M_mindustry_gen_LegsUnit_destroy, VTABLE_mindustry_gen_LegsUnit_destroy, "()V", 1 },
	{ "display", (intptr_t) M_mindustry_gen_LegsUnit_display_arc_scene_ui_layout_Table, VTABLE_mindustry_gen_LegsUnit_display_arc_scene_ui_layout_Table, "(Larc/scene/ui/layout/Table;)V", 1 },
	{ "draw", (intptr_t) M_mindustry_gen_LegsUnit_draw, VTABLE_mindustry_gen_LegsUnit_draw, "()V", 1 },
	{ "drawBuilding", (intptr_t) M_mindustry_gen_LegsUnit_drawBuilding, VTABLE_mindustry_gen_LegsUnit_drawBuilding, "()V", 1 },
	{ "drawBuildingBeam", (intptr_t) M_mindustry_gen_LegsUnit_drawBuildingBeam_float_float, VTABLE_mindustry_gen_LegsUnit_drawBuildingBeam_float_float, "(FF)V", 1 },
	{ "drawPlan", (intptr_t) M_mindustry_gen_LegsUnit_drawPlan_mindustry_entities_units_BuildPlan_float, VTABLE_mindustry_gen_LegsUnit_drawPlan_mindustry_entities_units_BuildPlan_float, "(Lmindustry/entities/units/BuildPlan;F)V", 1 },
	{ "drawPlanTop", (intptr_t) M_mindustry_gen_LegsUnit_drawPlanTop_mindustry_entities_units_BuildPlan_float, VTABLE_mindustry_gen_LegsUnit_drawPlanTop_mindustry_entities_units_BuildPlan_float, "(Lmindustry/entities/units/BuildPlan;F)V", 1 },
	{ "getCollisions", (intptr_t) M_mindustry_gen_LegsUnit_getCollisions_arc_func_Cons, VTABLE_mindustry_gen_LegsUnit_getCollisions_arc_func_Cons, "(Larc/func/Cons;)V", 1 },
	{ "handleSyncHidden", (intptr_t) M_mindustry_gen_LegsUnit_handleSyncHidden, VTABLE_mindustry_gen_LegsUnit_handleSyncHidden, "()V", 1 },
	{ "heal", (intptr_t) M_mindustry_gen_LegsUnit_heal, VTABLE_mindustry_gen_LegsUnit_heal, "()V", 1 },
	{ "heal", (intptr_t) M_mindustry_gen_LegsUnit_heal_float, VTABLE_mindustry_gen_LegsUnit_heal_float, "(F)V", 1 },
	{ "healFract", (intptr_t) M_mindustry_gen_LegsUnit_healFract_float, VTABLE_mindustry_gen_LegsUnit_healFract_float, "(F)V", 1 },
	{ "hitbox", (intptr_t) M_mindustry_gen_LegsUnit_hitbox_arc_math_geom_Rect, VTABLE_mindustry_gen_LegsUnit_hitbox_arc_math_geom_Rect, "(Larc/math/geom/Rect;)V", 1 },
	{ "hitboxTile", (intptr_t) M_mindustry_gen_LegsUnit_hitboxTile_arc_math_geom_Rect, VTABLE_mindustry_gen_LegsUnit_hitboxTile_arc_math_geom_Rect, "(Larc/math/geom/Rect;)V", 1 },
	{ "impulse", (intptr_t) M_mindustry_gen_LegsUnit_impulse_arc_math_geom_Vec2, VTABLE_mindustry_gen_LegsUnit_impulse_arc_math_geom_Vec2, "(Larc/math/geom/Vec2;)V", 1 },
	{ "impulse", (intptr_t) M_mindustry_gen_LegsUnit_impulse_float_float, VTABLE_mindustry_gen_LegsUnit_impulse_float_float, "(FF)V", 1 },
	{ "impulseNet", (intptr_t) M_mindustry_gen_LegsUnit_impulseNet_arc_math_geom_Vec2, VTABLE_mindustry_gen_LegsUnit_impulseNet_arc_math_geom_Vec2, "(Larc/math/geom/Vec2;)V", 1 },
	{ "interpolate", (intptr_t) M_mindustry_gen_LegsUnit_interpolate, VTABLE_mindustry_gen_LegsUnit_interpolate, "()V", 1 },
	{ "kill", (intptr_t) M_mindustry_gen_LegsUnit_kill, VTABLE_mindustry_gen_LegsUnit_kill, "()V", 1 },
	{ "killed", (intptr_t) M_mindustry_gen_LegsUnit_killed, VTABLE_mindustry_gen_LegsUnit_killed, "()V", 1 },
	{ "landed", (intptr_t) M_mindustry_gen_LegsUnit_landed, VTABLE_mindustry_gen_LegsUnit_landed, "()V", 1 },
	{ "lookAt", (intptr_t) M_mindustry_gen_LegsUnit_lookAt_arc_math_geom_Position, VTABLE_mindustry_gen_LegsUnit_lookAt_arc_math_geom_Position, "(Larc/math/geom/Position;)V", 1 },
	{ "lookAt", (intptr_t) M_mindustry_gen_LegsUnit_lookAt_float, VTABLE_mindustry_gen_LegsUnit_lookAt_float, "(F)V", 1 },
	{ "lookAt", (intptr_t) M_mindustry_gen_LegsUnit_lookAt_float_float, VTABLE_mindustry_gen_LegsUnit_lookAt_float_float, "(FF)V", 1 },
	{ "move", (intptr_t) M_mindustry_gen_LegsUnit_move_arc_math_geom_Vec2, VTABLE_mindustry_gen_LegsUnit_move_arc_math_geom_Vec2, "(Larc/math/geom/Vec2;)V", 1 },
	{ "move", (intptr_t) M_mindustry_gen_LegsUnit_move_float_float, VTABLE_mindustry_gen_LegsUnit_move_float_float, "(FF)V", 1 },
	{ "moveAt", (intptr_t) M_mindustry_gen_LegsUnit_moveAt_arc_math_geom_Vec2, VTABLE_mindustry_gen_LegsUnit_moveAt_arc_math_geom_Vec2, "(Larc/math/geom/Vec2;)V", 1 },
	{ "moveAt", (intptr_t) M_mindustry_gen_LegsUnit_moveAt_arc_math_geom_Vec2_float, VTABLE_mindustry_gen_LegsUnit_moveAt_arc_math_geom_Vec2_float, "(Larc/math/geom/Vec2;F)V", 1 },
	{ "movePref", (intptr_t) M_mindustry_gen_LegsUnit_movePref_arc_math_geom_Vec2, VTABLE_mindustry_gen_LegsUnit_movePref_arc_math_geom_Vec2, "(Larc/math/geom/Vec2;)V", 1 },
	{ "rawDamage", (intptr_t) M_mindustry_gen_LegsUnit_rawDamage_float, VTABLE_mindustry_gen_LegsUnit_rawDamage_float, "(F)V", 1 },
	{ "readSync", (intptr_t) M_mindustry_gen_LegsUnit_readSync_arc_util_io_Reads, VTABLE_mindustry_gen_LegsUnit_readSync_arc_util_io_Reads, "(Larc/util/io/Reads;)V", 1 },
	{ "readSyncManual", (intptr_t) M_mindustry_gen_LegsUnit_readSyncManual_java_nio_FloatBuffer, VTABLE_mindustry_gen_LegsUnit_readSyncManual_java_nio_FloatBuffer, "(Ljava/nio/FloatBuffer;)V", 1 },
	{ "remove", (intptr_t) M_mindustry_gen_LegsUnit_remove, VTABLE_mindustry_gen_LegsUnit_remove, "()V", 1 },
	{ "removeBuild", (intptr_t) M_mindustry_gen_LegsUnit_removeBuild_int_int_boolean, VTABLE_mindustry_gen_LegsUnit_removeBuild_int_int_boolean, "(IIZ)V", 1 },
	{ "resetController", (intptr_t) M_mindustry_gen_LegsUnit_resetController, VTABLE_mindustry_gen_LegsUnit_resetController, "()V", 1 },
	{ "resetLegs", (intptr_t) M_mindustry_gen_LegsUnit_resetLegs, VTABLE_mindustry_gen_LegsUnit_resetLegs, "()V", 1 },
	{ "resetLegs", (intptr_t) M_mindustry_gen_LegsUnit_resetLegs_float, VTABLE_mindustry_gen_LegsUnit_resetLegs_float, "(F)V", 1 },
	{ "rotateMove", (intptr_t) M_mindustry_gen_LegsUnit_rotateMove_arc_math_geom_Vec2, VTABLE_mindustry_gen_LegsUnit_rotateMove_arc_math_geom_Vec2, "(Larc/math/geom/Vec2;)V", 1 },
	{ "set", (intptr_t) M_mindustry_gen_LegsUnit_set_arc_math_geom_Position, VTABLE_mindustry_gen_LegsUnit_set_arc_math_geom_Position, "(Larc/math/geom/Position;)V", 1 },
	{ "set", (intptr_t) M_mindustry_gen_LegsUnit_set_float_float, VTABLE_mindustry_gen_LegsUnit_set_float_float, "(FF)V", 1 },
	{ "set", (intptr_t) M_mindustry_gen_LegsUnit_set_mindustry_type_UnitType_mindustry_entities_units_UnitController, VTABLE_mindustry_gen_LegsUnit_set_mindustry_type_UnitType_mindustry_entities_units_UnitController, "(Lmindustry/type/UnitType;Lmindustry/entities/units/UnitController;)V", 1 },
	{ "setDuration", (intptr_t) M_mindustry_gen_LegsUnit_setDuration_mindustry_type_StatusEffect_float, VTABLE_mindustry_gen_LegsUnit_setDuration_mindustry_type_StatusEffect_float, "(Lmindustry/type/StatusEffect;F)V", 1 },
	{ "setProp", (intptr_t) M_mindustry_gen_LegsUnit_setProp_mindustry_ctype_UnlockableContent_double, VTABLE_mindustry_gen_LegsUnit_setProp_mindustry_ctype_UnlockableContent_double, "(Lmindustry/ctype/UnlockableContent;D)V", 1 },
	{ "setProp", (intptr_t) M_mindustry_gen_LegsUnit_setProp_mindustry_logic_LAccess_double, VTABLE_mindustry_gen_LegsUnit_setProp_mindustry_logic_LAccess_double, "(Lmindustry/logic/LAccess;D)V", 1 },
	{ "setProp", (intptr_t) M_mindustry_gen_LegsUnit_setProp_mindustry_logic_LAccess_java_lang_Object, VTABLE_mindustry_gen_LegsUnit_setProp_mindustry_logic_LAccess_java_lang_Object, "(Lmindustry/logic/LAccess;Ljava/lang/Object;)V", 1 },
	{ "setType", (intptr_t) M_mindustry_gen_LegsUnit_setType_mindustry_type_UnitType, VTABLE_mindustry_gen_LegsUnit_setType_mindustry_type_UnitType, "(Lmindustry/type/UnitType;)V", 1 },
	{ "setWeaponRotation", (intptr_t) M_mindustry_gen_LegsUnit_setWeaponRotation_float, VTABLE_mindustry_gen_LegsUnit_setWeaponRotation_float, "(F)V", 1 },
	{ "setupWeapons", (intptr_t) M_mindustry_gen_LegsUnit_setupWeapons_mindustry_type_UnitType, VTABLE_mindustry_gen_LegsUnit_setupWeapons_mindustry_type_UnitType, "(Lmindustry/type/UnitType;)V", 1 },
	{ "snapInterpolation", (intptr_t) M_mindustry_gen_LegsUnit_snapInterpolation, VTABLE_mindustry_gen_LegsUnit_snapInterpolation, "()V", 1 },
	{ "snapSync", (intptr_t) M_mindustry_gen_LegsUnit_snapSync, VTABLE_mindustry_gen_LegsUnit_snapSync, "()V", 1 },
	{ "statusArmor", (intptr_t) M_mindustry_gen_LegsUnit_statusArmor_float, VTABLE_mindustry_gen_LegsUnit_statusArmor_float, "(F)V", 1 },
	{ "statusBuildSpeed", (intptr_t) M_mindustry_gen_LegsUnit_statusBuildSpeed_float, VTABLE_mindustry_gen_LegsUnit_statusBuildSpeed_float, "(F)V", 1 },
	{ "statusDamageMultiplier", (intptr_t) M_mindustry_gen_LegsUnit_statusDamageMultiplier_float, VTABLE_mindustry_gen_LegsUnit_statusDamageMultiplier_float, "(F)V", 1 },
	{ "statusDrag", (intptr_t) M_mindustry_gen_LegsUnit_statusDrag_float, VTABLE_mindustry_gen_LegsUnit_statusDrag_float, "(F)V", 1 },
	{ "statusMaxHealth", (intptr_t) M_mindustry_gen_LegsUnit_statusMaxHealth_float, VTABLE_mindustry_gen_LegsUnit_statusMaxHealth_float, "(F)V", 1 },
	{ "statusReloadMultiplier", (intptr_t) M_mindustry_gen_LegsUnit_statusReloadMultiplier_float, VTABLE_mindustry_gen_LegsUnit_statusReloadMultiplier_float, "(F)V", 1 },
	{ "statusSpeed", (intptr_t) M_mindustry_gen_LegsUnit_statusSpeed_float, VTABLE_mindustry_gen_LegsUnit_statusSpeed_float, "(F)V", 1 },
	{ "trns", (intptr_t) M_mindustry_gen_LegsUnit_trns_arc_math_geom_Position, VTABLE_mindustry_gen_LegsUnit_trns_arc_math_geom_Position, "(Larc/math/geom/Position;)V", 1 },
	{ "trns", (intptr_t) M_mindustry_gen_LegsUnit_trns_float_float, VTABLE_mindustry_gen_LegsUnit_trns_float_float, "(FF)V", 1 },
	{ "unapply", (intptr_t) M_mindustry_gen_LegsUnit_unapply_mindustry_type_StatusEffect, VTABLE_mindustry_gen_LegsUnit_unapply_mindustry_type_StatusEffect, "(Lmindustry/type/StatusEffect;)V", 1 },
	{ "unloaded", (intptr_t) M_mindustry_gen_LegsUnit_unloaded, VTABLE_mindustry_gen_LegsUnit_unloaded, "()V", 1 },
	{ "update", (intptr_t) M_mindustry_gen_LegsUnit_update, VTABLE_mindustry_gen_LegsUnit_update, "()V", 1 },
	{ "updateBoosting", (intptr_t) M_mindustry_gen_LegsUnit_updateBoosting_boolean, VTABLE_mindustry_gen_LegsUnit_updateBoosting_boolean, "(Z)V", 1 },
	{ "updateBoosting", (intptr_t) M_mindustry_gen_LegsUnit_updateBoosting_boolean_boolean, VTABLE_mindustry_gen_LegsUnit_updateBoosting_boolean_boolean, "(ZZ)V", 1 },
	{ "updateBuildLogic", (intptr_t) M_mindustry_gen_LegsUnit_updateBuildLogic, VTABLE_mindustry_gen_LegsUnit_updateBuildLogic, "()V", 1 },
	{ "updateDrowning", (intptr_t) M_mindustry_gen_LegsUnit_updateDrowning, VTABLE_mindustry_gen_LegsUnit_updateDrowning, "()V", 1 },
	{ "updateLastPosition", (intptr_t) M_mindustry_gen_LegsUnit_updateLastPosition, VTABLE_mindustry_gen_LegsUnit_updateLastPosition, "()V", 1 },
	{ "validatePlans", (intptr_t) M_mindustry_gen_LegsUnit_validatePlans, VTABLE_mindustry_gen_LegsUnit_validatePlans, "()V", 1 },
	{ "velAddNet", (intptr_t) M_mindustry_gen_LegsUnit_velAddNet_arc_math_geom_Vec2, VTABLE_mindustry_gen_LegsUnit_velAddNet_arc_math_geom_Vec2, "(Larc/math/geom/Vec2;)V", 1 },
	{ "velAddNet", (intptr_t) M_mindustry_gen_LegsUnit_velAddNet_float_float, VTABLE_mindustry_gen_LegsUnit_velAddNet_float_float, "(FF)V", 1 },
	{ "wobble", (intptr_t) M_mindustry_gen_LegsUnit_wobble, VTABLE_mindustry_gen_LegsUnit_wobble, "()V", 1 },
	{ "writeSync", (intptr_t) M_mindustry_gen_LegsUnit_writeSync_arc_util_io_Writes, VTABLE_mindustry_gen_LegsUnit_writeSync_arc_util_io_Writes, "(Larc/util/io/Writes;)V", 1 },
	{ "writeSyncManual", (intptr_t) M_mindustry_gen_LegsUnit_writeSyncManual_java_nio_FloatBuffer, VTABLE_mindustry_gen_LegsUnit_writeSyncManual_java_nio_FloatBuffer, "(Ljava/nio/FloatBuffer;)V", 1 },
	{ "lambda$updateBuildLogic$0", (intptr_t) SM_mindustry_gen_LegsUnit_lambda$updateBuildLogic$0_mindustry_world_blocks_storage_CoreBlock$CoreBuild_mindustry_type_ItemStack_R_boolean, 0, "(Lmindustry/world/blocks/storage/CoreBlock$CoreBuild;Lmindustry/type/ItemStack;)Z", 4106 },
	{ "lambda$unapply$0", (intptr_t) M_mindustry_gen_LegsUnit_lambda$unapply$0_mindustry_type_StatusEffect_mindustry_entities_units_StatusEntry_R_boolean, VTABLE_mindustry_gen_LegsUnit_lambda$unapply$0_mindustry_type_StatusEffect_mindustry_entities_units_StatusEntry_R_boolean, "(Lmindustry/type/StatusEffect;Lmindustry/entities/units/StatusEntry;)Z", 4098 },
	{ "lambda$removeBuild$0", (intptr_t) SM_mindustry_gen_LegsUnit_lambda$removeBuild$0_boolean_int_int_mindustry_entities_units_BuildPlan_R_boolean, 0, "(ZIILmindustry/entities/units/BuildPlan;)Z", 4106 },
	{ "lambda$destroy$0", (intptr_t) M_mindustry_gen_LegsUnit_lambda$destroy$0_float_mindustry_gen_Building_R_boolean, VTABLE_mindustry_gen_LegsUnit_lambda$destroy$0_float_mindustry_gen_Building_R_boolean, "(FLmindustry/gen/Building;)Z", 4098 },
	{ "lambda$clearStatuses$0", (intptr_t) M_mindustry_gen_LegsUnit_lambda$clearStatuses$0_mindustry_entities_units_StatusEntry, VTABLE_mindustry_gen_LegsUnit_lambda$clearStatuses$0_mindustry_entities_units_StatusEntry, "(Lmindustry/entities/units/StatusEntry;)V", 4098 },
	{ "lambda$applyDynamicStatus$0", (intptr_t) SM_mindustry_gen_LegsUnit_lambda$applyDynamicStatus$0_mindustry_entities_units_StatusEntry_R_boolean, 0, "(Lmindustry/entities/units/StatusEntry;)Z", 4106 },
	{ "lambda$getDuration$0", (intptr_t) SM_mindustry_gen_LegsUnit_lambda$getDuration$0_mindustry_type_StatusEffect_mindustry_entities_units_StatusEntry_R_boolean, 0, "(Lmindustry/type/StatusEffect;Lmindustry/entities/units/StatusEntry;)Z", 4106 },
	{ "lambda$sense$1", (intptr_t) SM_mindustry_gen_LegsUnit_lambda$sense$1_mindustry_world_Block_mindustry_world_blocks_payloads_Payload_R_boolean, 0, "(Lmindustry/world/Block;Lmindustry/world/blocks/payloads/Payload;)Z", 4106 },
	{ "lambda$sense$0", (intptr_t) SM_mindustry_gen_LegsUnit_lambda$sense$0_mindustry_type_UnitType_mindustry_world_blocks_payloads_Payload_R_boolean, 0, "(Lmindustry/type/UnitType;Lmindustry/world/blocks/payloads/Payload;)Z", 4106 },
	{ "lambda$shouldSkip$0", (intptr_t) SM_mindustry_gen_LegsUnit_lambda$shouldSkip$0_mindustry_gen_Building_mindustry_type_ItemStack_R_boolean, 0, "(Lmindustry/gen/Building;Lmindustry/type/ItemStack;)Z", 4106 },
	{ "lambda$canLand$0", (intptr_t) M_mindustry_gen_LegsUnit_lambda$canLand$0_mindustry_gen_Unit_R_boolean, VTABLE_mindustry_gen_LegsUnit_lambda$canLand$0_mindustry_gen_Unit_R_boolean, "(Lmindustry/gen/Unit;)Z", 4098 },
	{ "<clinit>", (intptr_t) clinit_mindustry_gen_LegsUnit, 0, "()V", 8 },
};

Class class_mindustry_gen_LegsUnit{
		.nativeName = (intptr_t) "mindustry/gen/LegsUnit",
		.parentClass = (intptr_t) &class_mindustry_gen_Unit,
		.size = sizeof(mindustry_gen_LegsUnit),
		.classVtable = (intptr_t) vtable_mindustry_gen_LegsUnit,
		.staticInitializer = (intptr_t) clinit_mindustry_gen_LegsUnit,
		.annotationInitializer = (intptr_t) initAnnotations,
		.markFunction = (intptr_t) mark_mindustry_gen_LegsUnit,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 33,
		.interfaceCount = 18,
		.nativeInterfaces = (intptr_t) interfaces,
		.fieldCount = 29,
		.nativeFields = (intptr_t) fields,
		.methodCount = 242,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 364,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_mindustry_gen_LegsUnit = registerClass(&class_mindustry_gen_LegsUnit);

}
