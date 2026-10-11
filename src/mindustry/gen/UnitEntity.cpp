#include "mindustry/gen/UnitEntity.h"
#include "arc/func/Prov.h"
#include "mindustry/gen/Minerc.h"
#include "arc/util/Eachable.h"
#include "mindustry/gen/UnitEntity_1.h"
#include "arc/graphics/Color.h"
#include "arc/graphics/g2d/Draw.h"
#include "mindustry/ai/BlockIndexer.h"
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
#include "mindustry/gen/UnitEntity_invoke_arc_func_Prov_3.h"
#include "mindustry/world/blocks/payloads/Payload.h"
#include "mindustry/gen/UnitEntity_invoke_arc_func_Prov_2.h"
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
#include "mindustry/gen/UnitEntity_invoke_arc_func_Cons_1.h"
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
#include "mindustry/gen/Unitc.h"
#include "arc/graphics/g2d/Fill.h"
#include "arc/func/Cons.h"
#include "mindustry/game/EventType_BuildSelectEvent.h"
#include "mindustry/content/StatusEffects.h"
#include "mindustry/gen/Syncc.h"
#include "mindustry/core/Control.h"
#include "mindustry/entities/abilities/EmptyDataAbility.h"
#include "mindustry/entities/units/StatusEntry.h"
#include "mindustry/entities/units/WeaponMount.h"
#include "mindustry/game/Rules_TeamRule.h"
#include "mindustry/world/meta/BlockFlag.h"
#include "mindustry/async/PhysicsProcess.h"
#include "arc/graphics/g2d/TextureRegion.h"
#include "java/lang/annotation/Annotation.h"
#include "mindustry/gen/UnitEntity.h"
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
#include "java/nio/FloatBuffer.h"
#include "arc/math/Angles.h"
#include "arc/Events.h"
#include "mindustry/gen/UnitEntity_invoke_arc_func_Boolf_15.h"
#include "arc/math/geom/Point2.h"
#include "mindustry/gen/UnitEntity_invoke_arc_func_Boolf_14.h"
#include "arc/math/geom/Rect.h"
#include "mindustry/ctype/UnlockableContent.h"
#include "mindustry/gen/UnitEntity_invoke_arc_func_Boolf_13.h"
#include "mindustry/world/blocks/ConstructBlock_ConstructBuild.h"
#include "mindustry/ai/Pathfinder.h"
#include "mindustry/gen/UnitEntity_invoke_arc_func_Boolf_12.h"
#include "mindustry/logic/LAccess.h"
#include "mindustry/gen/UnitEntity_invoke_arc_func_Boolf_19.h"
#include "mindustry/entities/EntityCollisions.h"
#include "mindustry/gen/UnitEntity_invoke_arc_func_Boolf_18.h"
#include "mindustry/gen/UnitEntity_invoke_arc_func_Boolf_17.h"
#include "java/lang/reflect/Constructor.h"
#include "mindustry/gen/UnitEntity_invoke_arc_func_Boolf_16.h"
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
#include "mindustry/gen/UnitEntity_invoke_arc_func_Boolf_11.h"
#include "mindustry/gen/Bullet.h"
#include "mindustry/gen/UnitEntity_invoke_arc_func_Boolf_10.h"
#include "mindustry/entities/Units.h"
#include "mindustry/gen/Hitboxc.h"
#include "mindustry/ai/WaveSpawner.h"
#include "arc/graphics/Camera.h"
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
#include "mindustry/entities/EntityCollisions_SolidPred.h"
#include "mindustry/type/StatusEffect.h"
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

jfloat SF_mindustry_gen_UnitEntity_hitDuration;
jobject SF_mindustry_gen_UnitEntity_tmp1;
jobject SF_mindustry_gen_UnitEntity_tmp2;
jfloat SF_mindustry_gen_UnitEntity_warpDst;

void mark_mindustry_gen_UnitEntity(jobject object, jint mark, jint depth) {
	if (!object) {
		if (SF_mindustry_gen_UnitEntity_tmp1)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_gen_UnitEntity_tmp1)->clazz)->markFunction)((jobject) SF_mindustry_gen_UnitEntity_tmp1, mark, depth + 1);
		if (SF_mindustry_gen_UnitEntity_tmp2)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_gen_UnitEntity_tmp2)->clazz)->markFunction)((jobject) SF_mindustry_gen_UnitEntity_tmp2, mark, depth + 1);
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
	auto self = (mindustry_gen_UnitEntity *) object;
	if (self->F_applied)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_applied)->clazz)->markFunction)((jobject) self->F_applied, mark, depth + 1);
	if (self->F_controller)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_controller)->clazz)->markFunction)((jobject) self->F_controller, mark, depth + 1);
	if (self->F_lastActive)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_lastActive)->clazz)->markFunction)((jobject) self->F_lastActive, mark, depth + 1);
	if (self->F_statuses)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_statuses)->clazz)->markFunction)((jobject) self->F_statuses, mark, depth + 1);
}

void init_mindustry_gen_UnitEntity(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/UnitEntity:<init>", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_gen_UnitEntity(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(154);
	init_mindustry_gen_Unit(ctx, (frame[0].o));
	LINE_NUMBER(119);
	sp[0].o = frame[0].o;
	clinit_arc_struct_Bits(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_struct_Bits);
	clinit_mindustry_Vars(ctx);
	sp[2].o = (jobject)SF_mindustry_Vars_content;
	clinit_mindustry_ctype_ContentType(ctx);
	sp[3].o = (jobject)SF_mindustry_ctype_ContentType_status;
	sp[2].o = (jobject)((func_mindustry_core_ContentLoader_getBy_mindustry_ctype_ContentType_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[2].o)->vtable)[VTABLE_mindustry_core_ContentLoader_getBy_mindustry_ctype_ContentType_R_arc_struct_Seq])(ctx, sp[2].o, sp[3].o);
	init_arc_struct_Bits_int(ctx, sp[1].o, ((jint)((arc_struct_Seq *) NULL_CHECK(sp[2].o))->F_size));
	((mindustry_gen_UnitEntity *) NULL_CHECK(sp[0].o))->F_applied = (jref) sp[1].o;
	LINE_NUMBER(132);
	sp[0].o = frame[0].o;
	jfloat temp0 = (jfloat)SM_arc_math_Mathf_random_float_R_float(ctx, (jfloat(10.0f)));
	((mindustry_gen_UnitEntity *) NULL_CHECK(sp[0].o))->F_resupplyTime = temp0;
	LINE_NUMBER(138);
	sp[0].o = frame[0].o;
	clinit_arc_struct_Seq(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_struct_Seq);
	init_arc_struct_Seq_int(ctx, sp[1].o, (jint(4)));
	((mindustry_gen_UnitEntity *) NULL_CHECK(sp[0].o))->F_statuses = (jref) sp[1].o;
	LINE_NUMBER(155);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_mindustry_gen_UnitEntity_buildOn_R_mindustry_gen_Building(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/UnitEntity:buildOn", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(160);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_world;
	sp[0].o = (jobject)((func_mindustry_core_World_buildWorld_float_float_R_mindustry_gen_Building) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_World_buildWorld_float_float_R_mindustry_gen_Building])(ctx, sp[0].o, ((jfloat)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_x), ((jfloat)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_y));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_mindustry_gen_UnitEntity_getPlayer_R_mindustry_gen_Player(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/UnitEntity:getPlayer", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(166);
	jint temp0 = (jint)((func_mindustry_gen_UnitEntity_isPlayer_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_gen_UnitEntity_isPlayer_R_boolean])(ctx, (frame[0].o));
	if (temp0 == 0) goto label_1;
	}
	{
	sp[0].o = (jobject)((mindustry_gen_UnitEntity *) NULL_CHECK((frame[0].o)))->F_controller;
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

jobject M_mindustry_gen_UnitEntity_getControllerName_R_java_lang_String(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/UnitEntity:getControllerName", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(172);
	jint temp0 = (jint)((func_mindustry_gen_UnitEntity_isPlayer_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_gen_UnitEntity_isPlayer_R_boolean])(ctx, (frame[0].o));
	if (temp0 == 0) goto label_1;
	}
	{
	sp[0].o = (jobject)((func_mindustry_gen_UnitEntity_getPlayer_R_mindustry_gen_Player) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_gen_UnitEntity_getPlayer_R_mindustry_gen_Player])(ctx, (frame[0].o));
	sp[0].o = (jobject)((func_mindustry_gen_Player_coloredName_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_gen_Player_coloredName_R_java_lang_String])(ctx, sp[0].o);
	popStackFrame(ctx);
	return sp[0].o;
	}
label_1:;
	{
	LINE_NUMBER(173);
	sp[0].o = (jobject)((mindustry_gen_UnitEntity *) NULL_CHECK((frame[0].o)))->F_controller;
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
	LINE_NUMBER(174);
	popStackFrame(ctx);
	return (jobject(nullptr));
	}

	popStackFrame(ctx);
}

jobject M_mindustry_gen_UnitEntity_solidity_R_mindustry_entities_EntityCollisions$SolidPred(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/UnitEntity:solidity", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(180);
	popStackFrame(ctx);
	return (jobject(nullptr));
	}

	popStackFrame(ctx);
}

jobject M_mindustry_gen_UnitEntity_buildPlan_R_mindustry_entities_units_BuildPlan(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/UnitEntity:buildPlan", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(186);
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

jobject M_mindustry_gen_UnitEntity_getMineResult_mindustry_world_Tile_R_mindustry_type_Item(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/UnitEntity:getMineResult", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(192);
	if ((frame[1].o) != nullptr) goto label_1;
	}
	INST_ACONST_NULL();
	popStackFrame(ctx);
	INST_ARETURN();
label_1:;
	{
	LINE_NUMBER(194);
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
	LINE_NUMBER(195);
	sp[0].o = (jobject)((func_mindustry_world_Tile_drop_R_mindustry_type_Item) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_world_Tile_drop_R_mindustry_type_Item])(ctx, (frame[1].o));
	frame[2].o = sp[0].o;
	goto label_5;
	}
label_2:;
	{
	LINE_NUMBER(196);
	sp[0].o = (jobject)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_type;
	if (((jint)((mindustry_type_UnitType *) NULL_CHECK(sp[0].o))->F_mineWalls) == 0) goto label_6;
	}
	{
	LINE_NUMBER(197);
	sp[0].o = (jobject)((func_mindustry_world_Tile_wallDrop_R_mindustry_type_Item) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_world_Tile_wallDrop_R_mindustry_type_Item])(ctx, (frame[1].o));
	frame[2].o = sp[0].o;
	goto label_5;
	}
label_6:;
	{
	LINE_NUMBER(199);
	popStackFrame(ctx);
	return (jobject(nullptr));
	}
label_5:;
	{
	LINE_NUMBER(201);
	jint temp0 = (jint)((func_mindustry_gen_UnitEntity_canMine_mindustry_type_Item_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_gen_UnitEntity_canMine_mindustry_type_Item_R_boolean])(ctx, (frame[0].o), (frame[2].o));
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

jobject M_mindustry_gen_UnitEntity_tileOn_R_mindustry_world_Tile(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/UnitEntity:tileOn", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(207);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_world;
	sp[0].o = (jobject)((func_mindustry_core_World_tileWorld_float_float_R_mindustry_world_Tile) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_World_tileWorld_float_float_R_mindustry_world_Tile])(ctx, sp[0].o, ((jfloat)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_x), ((jfloat)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_y));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_mindustry_gen_UnitEntity_drownFloor_R_mindustry_world_blocks_environment_Floor(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/UnitEntity:drownFloor", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(213);
	sp[0].o = (jobject)((func_mindustry_gen_UnitEntity_floorOn_R_mindustry_world_blocks_environment_Floor) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_gen_UnitEntity_floorOn_R_mindustry_world_blocks_environment_Floor])(ctx, (frame[0].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_mindustry_gen_UnitEntity_closestCore_R_mindustry_world_blocks_storage_CoreBlock$CoreBuild(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/UnitEntity:closestCore", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(219);
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

jobject M_mindustry_gen_UnitEntity_closestEnemyCore_R_mindustry_world_blocks_storage_CoreBlock$CoreBuild(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/UnitEntity:closestEnemyCore", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(225);
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

jobject M_mindustry_gen_UnitEntity_core_R_mindustry_world_blocks_storage_CoreBlock$CoreBuild(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/UnitEntity:core", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(231);
	sp[0].o = (jobject)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_team;
	sp[0].o = (jobject)((func_mindustry_game_Team_core_R_mindustry_world_blocks_storage_CoreBlock$CoreBuild) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_game_Team_core_R_mindustry_world_blocks_storage_CoreBlock$CoreBuild])(ctx, sp[0].o);
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jbool M_mindustry_gen_UnitEntity_isRotate_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/UnitEntity:isRotate", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(236);
	popStackFrame(ctx);
	return ((jint)((mindustry_gen_UnitEntity *) NULL_CHECK((frame[0].o)))->F_isRotate);
	}

	popStackFrame(ctx);
}

jint M_mindustry_gen_UnitEntity_classId_R_int(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/UnitEntity:classId", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(241);
	popStackFrame(ctx);
	return (jint(3));
	}

	popStackFrame(ctx);
}

void M_mindustry_gen_UnitEntity_read_arc_util_io_Reads(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[10];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/UnitEntity:read", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(246);
	jint temp0 = (jint)((func_arc_util_io_Reads_s_R_short) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_util_io_Reads_s_R_short])(ctx, (frame[1].o));
	frame[2].i = temp0;
	LINE_NUMBER(247);
	if ((frame[2].i) != 0) goto label_2;
	}
	{
	LINE_NUMBER(248);
	jfloat temp0 = (jfloat)((func_arc_util_io_Reads_f_R_float) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_util_io_Reads_f_R_float])(ctx, (frame[1].o));
	LINE_NUMBER(249);
	jfloat temp1 = (jfloat)((func_arc_util_io_Reads_f_R_float) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_util_io_Reads_f_R_float])(ctx, (frame[1].o));
	LINE_NUMBER(250);
	sp[0].o = frame[0].o;
	sp[1].o = frame[1].o;
	sp[2].o = (jobject)((mindustry_gen_UnitEntity *) NULL_CHECK((frame[0].o)))->F_controller;
	sp[1].o = (jobject)SM_mindustry_io_TypeIO_readController_arc_util_io_Reads_mindustry_entities_units_UnitController_R_mindustry_entities_units_UnitController(ctx, sp[1].o, sp[2].o);
	((mindustry_gen_UnitEntity *) NULL_CHECK(sp[0].o))->F_controller = (jref) sp[1].o;
	LINE_NUMBER(251);
	jint temp2 = (jint)((func_arc_util_io_Reads_bool_R_boolean) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_util_io_Reads_bool_R_boolean])(ctx, (frame[1].o));
	LINE_NUMBER(252);
	sp[0].o = frame[0].o;
	jfloat temp3 = (jfloat)((func_arc_util_io_Reads_f_R_float) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_util_io_Reads_f_R_float])(ctx, (frame[1].o));
	((mindustry_gen_Unit *) NULL_CHECK(sp[0].o))->F_elevation = temp3;
	LINE_NUMBER(253);
	sp[0].o = frame[0].o;
	jfloat temp4 = (jfloat)((func_arc_util_io_Reads_f_R_float) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_util_io_Reads_f_R_float])(ctx, (frame[1].o));
	((mindustry_gen_Unit *) NULL_CHECK(sp[0].o))->F_health = temp4;
	LINE_NUMBER(254);
	sp[0].o = frame[0].o;
	jint temp5 = (jint)((func_arc_util_io_Reads_bool_R_boolean) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_util_io_Reads_bool_R_boolean])(ctx, (frame[1].o));
	((mindustry_gen_Unit *) NULL_CHECK(sp[0].o))->F_isShooting = temp5;
	LINE_NUMBER(255);
	sp[0].o = frame[0].o;
	sp[1].o = frame[1].o;
	sp[2].o = (jobject)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_mounts;
	sp[1].o = (jobject)SM_mindustry_io_TypeIO_readMounts_arc_util_io_Reads_Array1_mindustry_entities_units_WeaponMount_R_Array1_mindustry_entities_units_WeaponMount(ctx, sp[1].o, sp[2].o);
	((mindustry_gen_Unit *) NULL_CHECK(sp[0].o))->F_mounts = (jref) sp[1].o;
	LINE_NUMBER(256);
	sp[0].o = frame[0].o;
	jfloat temp6 = (jfloat)((func_arc_util_io_Reads_f_R_float) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_util_io_Reads_f_R_float])(ctx, (frame[1].o));
	((mindustry_gen_Unit *) NULL_CHECK(sp[0].o))->F_rotation = temp6;
	LINE_NUMBER(257);
	sp[0].o = frame[0].o;
	jfloat temp7 = (jfloat)((func_arc_util_io_Reads_f_R_float) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_util_io_Reads_f_R_float])(ctx, (frame[1].o));
	((mindustry_gen_Unit *) NULL_CHECK(sp[0].o))->F_shield = temp7;
	LINE_NUMBER(258);
	sp[0].o = frame[0].o;
	jint temp8 = (jint)((func_arc_util_io_Reads_bool_R_boolean) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_util_io_Reads_bool_R_boolean])(ctx, (frame[1].o));
	((mindustry_gen_Unit *) NULL_CHECK(sp[0].o))->F_spawnedByCore = temp8;
	LINE_NUMBER(259);
	sp[0].o = frame[0].o;
	sp[1].o = frame[1].o;
	sp[2].o = (jobject)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_stack;
	sp[1].o = (jobject)SM_mindustry_io_TypeIO_readItems_arc_util_io_Reads_mindustry_type_ItemStack_R_mindustry_type_ItemStack(ctx, sp[1].o, sp[2].o);
	((mindustry_gen_Unit *) NULL_CHECK(sp[0].o))->F_stack = (jref) sp[1].o;
	LINE_NUMBER(260);
	jint temp9 = (jint)((func_arc_util_io_Reads_i_R_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_util_io_Reads_i_R_int])(ctx, (frame[1].o));
	frame[3].i = temp9;
	LINE_NUMBER(261);
	sp[0].o = (jobject)((mindustry_gen_UnitEntity *) NULL_CHECK((frame[0].o)))->F_statuses;
	sp[0].o = (jobject)((func_arc_struct_Seq_clear_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_clear_R_arc_struct_Seq])(ctx, sp[0].o);
	LINE_NUMBER(262);
	frame[4].i = (jint(0));
	}
label_18:;
	{
	if ((frame[4].i) >= (frame[3].i)) goto label_19;
	}
	{
	LINE_NUMBER(263);
	sp[0].o = (jobject)SM_mindustry_io_TypeIO_readStatus_arc_util_io_Reads_R_mindustry_entities_units_StatusEntry(ctx, (frame[1].o));
	frame[5].o = sp[0].o;
	LINE_NUMBER(264);
	if ((frame[5].o) == nullptr) goto label_22;
	}
	{
	sp[0].o = (jobject)((mindustry_gen_UnitEntity *) NULL_CHECK((frame[0].o)))->F_statuses;
	sp[0].o = (jobject)((func_arc_struct_Seq_add_java_lang_Object_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_add_java_lang_Object_R_arc_struct_Seq])(ctx, sp[0].o, (frame[5].o));
	}
label_22:;
	{
	LINE_NUMBER(262);
	INST_IINC(4, 1);
	goto label_18;
	}
label_19:;
	{
	LINE_NUMBER(266);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)SM_mindustry_io_TypeIO_readTeam_arc_util_io_Reads_R_mindustry_game_Team(ctx, (frame[1].o));
	((mindustry_gen_Unit *) NULL_CHECK(sp[0].o))->F_team = (jref) sp[1].o;
	LINE_NUMBER(267);
	sp[0].o = frame[0].o;
	clinit_mindustry_Vars(ctx);
	sp[1].o = (jobject)SF_mindustry_Vars_content;
	clinit_mindustry_ctype_ContentType(ctx);
	sp[2].o = (jobject)SF_mindustry_ctype_ContentType_unit;
	jint temp0 = (jint)((func_arc_util_io_Reads_s_R_short) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_util_io_Reads_s_R_short])(ctx, (frame[1].o));
	sp[1].o = (jobject)((func_mindustry_core_ContentLoader_getByID_mindustry_ctype_ContentType_int_R_mindustry_ctype_Content) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_mindustry_core_ContentLoader_getByID_mindustry_ctype_ContentType_int_R_mindustry_ctype_Content])(ctx, sp[1].o, sp[2].o, temp0);
	((mindustry_gen_Unit *) NULL_CHECK(sp[0].o))->F_type = (jref) (checkCast(ctx, &class_mindustry_type_UnitType, sp[1].o));
	LINE_NUMBER(268);
	sp[0].o = frame[0].o;
	jfloat temp1 = (jfloat)((func_arc_util_io_Reads_f_R_float) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_util_io_Reads_f_R_float])(ctx, (frame[1].o));
	((mindustry_gen_Unit *) NULL_CHECK(sp[0].o))->F_x = temp1;
	LINE_NUMBER(269);
	sp[0].o = frame[0].o;
	jfloat temp2 = (jfloat)((func_arc_util_io_Reads_f_R_float) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_util_io_Reads_f_R_float])(ctx, (frame[1].o));
	((mindustry_gen_Unit *) NULL_CHECK(sp[0].o))->F_y = temp2;
	LINE_NUMBER(270);
	goto label_27;
	}
label_2:;
	{
	if ((frame[2].i) != (jint(1))) goto label_28;
	}
	{
	LINE_NUMBER(271);
	jfloat temp0 = (jfloat)((func_arc_util_io_Reads_f_R_float) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_util_io_Reads_f_R_float])(ctx, (frame[1].o));
	LINE_NUMBER(272);
	jfloat temp1 = (jfloat)((func_arc_util_io_Reads_f_R_float) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_util_io_Reads_f_R_float])(ctx, (frame[1].o));
	LINE_NUMBER(273);
	sp[0].o = frame[0].o;
	sp[1].o = frame[1].o;
	sp[2].o = (jobject)((mindustry_gen_UnitEntity *) NULL_CHECK((frame[0].o)))->F_controller;
	sp[1].o = (jobject)SM_mindustry_io_TypeIO_readController_arc_util_io_Reads_mindustry_entities_units_UnitController_R_mindustry_entities_units_UnitController(ctx, sp[1].o, sp[2].o);
	((mindustry_gen_UnitEntity *) NULL_CHECK(sp[0].o))->F_controller = (jref) sp[1].o;
	LINE_NUMBER(274);
	sp[0].o = frame[0].o;
	jfloat temp2 = (jfloat)((func_arc_util_io_Reads_f_R_float) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_util_io_Reads_f_R_float])(ctx, (frame[1].o));
	((mindustry_gen_Unit *) NULL_CHECK(sp[0].o))->F_elevation = temp2;
	LINE_NUMBER(275);
	sp[0].o = frame[0].o;
	jfloat temp3 = (jfloat)((func_arc_util_io_Reads_f_R_float) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_util_io_Reads_f_R_float])(ctx, (frame[1].o));
	((mindustry_gen_Unit *) NULL_CHECK(sp[0].o))->F_health = temp3;
	LINE_NUMBER(276);
	sp[0].o = frame[0].o;
	jint temp4 = (jint)((func_arc_util_io_Reads_bool_R_boolean) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_util_io_Reads_bool_R_boolean])(ctx, (frame[1].o));
	((mindustry_gen_Unit *) NULL_CHECK(sp[0].o))->F_isShooting = temp4;
	LINE_NUMBER(277);
	sp[0].o = frame[0].o;
	sp[1].o = frame[1].o;
	sp[2].o = (jobject)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_mounts;
	sp[1].o = (jobject)SM_mindustry_io_TypeIO_readMounts_arc_util_io_Reads_Array1_mindustry_entities_units_WeaponMount_R_Array1_mindustry_entities_units_WeaponMount(ctx, sp[1].o, sp[2].o);
	((mindustry_gen_Unit *) NULL_CHECK(sp[0].o))->F_mounts = (jref) sp[1].o;
	LINE_NUMBER(278);
	sp[0].o = frame[0].o;
	jfloat temp5 = (jfloat)((func_arc_util_io_Reads_f_R_float) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_util_io_Reads_f_R_float])(ctx, (frame[1].o));
	((mindustry_gen_Unit *) NULL_CHECK(sp[0].o))->F_rotation = temp5;
	LINE_NUMBER(279);
	sp[0].o = frame[0].o;
	jfloat temp6 = (jfloat)((func_arc_util_io_Reads_f_R_float) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_util_io_Reads_f_R_float])(ctx, (frame[1].o));
	((mindustry_gen_Unit *) NULL_CHECK(sp[0].o))->F_shield = temp6;
	LINE_NUMBER(280);
	sp[0].o = frame[0].o;
	jint temp7 = (jint)((func_arc_util_io_Reads_bool_R_boolean) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_util_io_Reads_bool_R_boolean])(ctx, (frame[1].o));
	((mindustry_gen_Unit *) NULL_CHECK(sp[0].o))->F_spawnedByCore = temp7;
	LINE_NUMBER(281);
	sp[0].o = frame[0].o;
	sp[1].o = frame[1].o;
	sp[2].o = (jobject)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_stack;
	sp[1].o = (jobject)SM_mindustry_io_TypeIO_readItems_arc_util_io_Reads_mindustry_type_ItemStack_R_mindustry_type_ItemStack(ctx, sp[1].o, sp[2].o);
	((mindustry_gen_Unit *) NULL_CHECK(sp[0].o))->F_stack = (jref) sp[1].o;
	LINE_NUMBER(282);
	jint temp8 = (jint)((func_arc_util_io_Reads_i_R_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_util_io_Reads_i_R_int])(ctx, (frame[1].o));
	frame[3].i = temp8;
	LINE_NUMBER(283);
	sp[0].o = (jobject)((mindustry_gen_UnitEntity *) NULL_CHECK((frame[0].o)))->F_statuses;
	sp[0].o = (jobject)((func_arc_struct_Seq_clear_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_clear_R_arc_struct_Seq])(ctx, sp[0].o);
	LINE_NUMBER(284);
	frame[4].i = (jint(0));
	}
label_43:;
	{
	if ((frame[4].i) >= (frame[3].i)) goto label_44;
	}
	{
	LINE_NUMBER(285);
	sp[0].o = (jobject)SM_mindustry_io_TypeIO_readStatus_arc_util_io_Reads_R_mindustry_entities_units_StatusEntry(ctx, (frame[1].o));
	frame[5].o = sp[0].o;
	LINE_NUMBER(286);
	if ((frame[5].o) == nullptr) goto label_47;
	}
	{
	sp[0].o = (jobject)((mindustry_gen_UnitEntity *) NULL_CHECK((frame[0].o)))->F_statuses;
	sp[0].o = (jobject)((func_arc_struct_Seq_add_java_lang_Object_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_add_java_lang_Object_R_arc_struct_Seq])(ctx, sp[0].o, (frame[5].o));
	}
label_47:;
	{
	LINE_NUMBER(284);
	INST_IINC(4, 1);
	goto label_43;
	}
label_44:;
	{
	LINE_NUMBER(288);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)SM_mindustry_io_TypeIO_readTeam_arc_util_io_Reads_R_mindustry_game_Team(ctx, (frame[1].o));
	((mindustry_gen_Unit *) NULL_CHECK(sp[0].o))->F_team = (jref) sp[1].o;
	LINE_NUMBER(289);
	sp[0].o = frame[0].o;
	clinit_mindustry_Vars(ctx);
	sp[1].o = (jobject)SF_mindustry_Vars_content;
	clinit_mindustry_ctype_ContentType(ctx);
	sp[2].o = (jobject)SF_mindustry_ctype_ContentType_unit;
	jint temp0 = (jint)((func_arc_util_io_Reads_s_R_short) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_util_io_Reads_s_R_short])(ctx, (frame[1].o));
	sp[1].o = (jobject)((func_mindustry_core_ContentLoader_getByID_mindustry_ctype_ContentType_int_R_mindustry_ctype_Content) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_mindustry_core_ContentLoader_getByID_mindustry_ctype_ContentType_int_R_mindustry_ctype_Content])(ctx, sp[1].o, sp[2].o, temp0);
	((mindustry_gen_Unit *) NULL_CHECK(sp[0].o))->F_type = (jref) (checkCast(ctx, &class_mindustry_type_UnitType, sp[1].o));
	LINE_NUMBER(290);
	sp[0].o = frame[0].o;
	jfloat temp1 = (jfloat)((func_arc_util_io_Reads_f_R_float) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_util_io_Reads_f_R_float])(ctx, (frame[1].o));
	((mindustry_gen_Unit *) NULL_CHECK(sp[0].o))->F_x = temp1;
	LINE_NUMBER(291);
	sp[0].o = frame[0].o;
	jfloat temp2 = (jfloat)((func_arc_util_io_Reads_f_R_float) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_util_io_Reads_f_R_float])(ctx, (frame[1].o));
	((mindustry_gen_Unit *) NULL_CHECK(sp[0].o))->F_y = temp2;
	LINE_NUMBER(292);
	goto label_27;
	}
label_28:;
	{
	if ((frame[2].i) != (jint(2))) goto label_52;
	}
	{
	LINE_NUMBER(293);
	jfloat temp0 = (jfloat)((func_arc_util_io_Reads_f_R_float) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_util_io_Reads_f_R_float])(ctx, (frame[1].o));
	LINE_NUMBER(294);
	jfloat temp1 = (jfloat)((func_arc_util_io_Reads_f_R_float) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_util_io_Reads_f_R_float])(ctx, (frame[1].o));
	LINE_NUMBER(295);
	sp[0].o = frame[0].o;
	sp[1].o = frame[1].o;
	sp[2].o = (jobject)((mindustry_gen_UnitEntity *) NULL_CHECK((frame[0].o)))->F_controller;
	sp[1].o = (jobject)SM_mindustry_io_TypeIO_readController_arc_util_io_Reads_mindustry_entities_units_UnitController_R_mindustry_entities_units_UnitController(ctx, sp[1].o, sp[2].o);
	((mindustry_gen_UnitEntity *) NULL_CHECK(sp[0].o))->F_controller = (jref) sp[1].o;
	LINE_NUMBER(296);
	sp[0].o = frame[0].o;
	jfloat temp2 = (jfloat)((func_arc_util_io_Reads_f_R_float) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_util_io_Reads_f_R_float])(ctx, (frame[1].o));
	((mindustry_gen_Unit *) NULL_CHECK(sp[0].o))->F_elevation = temp2;
	LINE_NUMBER(297);
	sp[0].o = frame[0].o;
	jdouble temp3 = (jdouble)((func_arc_util_io_Reads_d_R_double) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_util_io_Reads_d_R_double])(ctx, (frame[1].o));
	((mindustry_gen_Unit *) NULL_CHECK(sp[0].o))->F_flag = temp3;
	LINE_NUMBER(298);
	sp[0].o = frame[0].o;
	jfloat temp4 = (jfloat)((func_arc_util_io_Reads_f_R_float) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_util_io_Reads_f_R_float])(ctx, (frame[1].o));
	((mindustry_gen_Unit *) NULL_CHECK(sp[0].o))->F_health = temp4;
	LINE_NUMBER(299);
	sp[0].o = frame[0].o;
	jint temp5 = (jint)((func_arc_util_io_Reads_bool_R_boolean) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_util_io_Reads_bool_R_boolean])(ctx, (frame[1].o));
	((mindustry_gen_Unit *) NULL_CHECK(sp[0].o))->F_isShooting = temp5;
	LINE_NUMBER(300);
	sp[0].o = frame[0].o;
	sp[1].o = frame[1].o;
	sp[2].o = (jobject)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_mounts;
	sp[1].o = (jobject)SM_mindustry_io_TypeIO_readMounts_arc_util_io_Reads_Array1_mindustry_entities_units_WeaponMount_R_Array1_mindustry_entities_units_WeaponMount(ctx, sp[1].o, sp[2].o);
	((mindustry_gen_Unit *) NULL_CHECK(sp[0].o))->F_mounts = (jref) sp[1].o;
	LINE_NUMBER(301);
	sp[0].o = frame[0].o;
	jfloat temp6 = (jfloat)((func_arc_util_io_Reads_f_R_float) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_util_io_Reads_f_R_float])(ctx, (frame[1].o));
	((mindustry_gen_Unit *) NULL_CHECK(sp[0].o))->F_rotation = temp6;
	LINE_NUMBER(302);
	sp[0].o = frame[0].o;
	jfloat temp7 = (jfloat)((func_arc_util_io_Reads_f_R_float) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_util_io_Reads_f_R_float])(ctx, (frame[1].o));
	((mindustry_gen_Unit *) NULL_CHECK(sp[0].o))->F_shield = temp7;
	LINE_NUMBER(303);
	sp[0].o = frame[0].o;
	jint temp8 = (jint)((func_arc_util_io_Reads_bool_R_boolean) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_util_io_Reads_bool_R_boolean])(ctx, (frame[1].o));
	((mindustry_gen_Unit *) NULL_CHECK(sp[0].o))->F_spawnedByCore = temp8;
	LINE_NUMBER(304);
	sp[0].o = frame[0].o;
	sp[1].o = frame[1].o;
	sp[2].o = (jobject)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_stack;
	sp[1].o = (jobject)SM_mindustry_io_TypeIO_readItems_arc_util_io_Reads_mindustry_type_ItemStack_R_mindustry_type_ItemStack(ctx, sp[1].o, sp[2].o);
	((mindustry_gen_Unit *) NULL_CHECK(sp[0].o))->F_stack = (jref) sp[1].o;
	LINE_NUMBER(305);
	jint temp9 = (jint)((func_arc_util_io_Reads_i_R_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_util_io_Reads_i_R_int])(ctx, (frame[1].o));
	frame[3].i = temp9;
	LINE_NUMBER(306);
	sp[0].o = (jobject)((mindustry_gen_UnitEntity *) NULL_CHECK((frame[0].o)))->F_statuses;
	sp[0].o = (jobject)((func_arc_struct_Seq_clear_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_clear_R_arc_struct_Seq])(ctx, sp[0].o);
	LINE_NUMBER(307);
	frame[4].i = (jint(0));
	}
label_68:;
	{
	if ((frame[4].i) >= (frame[3].i)) goto label_69;
	}
	{
	LINE_NUMBER(308);
	sp[0].o = (jobject)SM_mindustry_io_TypeIO_readStatus_arc_util_io_Reads_R_mindustry_entities_units_StatusEntry(ctx, (frame[1].o));
	frame[5].o = sp[0].o;
	LINE_NUMBER(309);
	if ((frame[5].o) == nullptr) goto label_72;
	}
	{
	sp[0].o = (jobject)((mindustry_gen_UnitEntity *) NULL_CHECK((frame[0].o)))->F_statuses;
	sp[0].o = (jobject)((func_arc_struct_Seq_add_java_lang_Object_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_add_java_lang_Object_R_arc_struct_Seq])(ctx, sp[0].o, (frame[5].o));
	}
label_72:;
	{
	LINE_NUMBER(307);
	INST_IINC(4, 1);
	goto label_68;
	}
label_69:;
	{
	LINE_NUMBER(311);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)SM_mindustry_io_TypeIO_readTeam_arc_util_io_Reads_R_mindustry_game_Team(ctx, (frame[1].o));
	((mindustry_gen_Unit *) NULL_CHECK(sp[0].o))->F_team = (jref) sp[1].o;
	LINE_NUMBER(312);
	sp[0].o = frame[0].o;
	clinit_mindustry_Vars(ctx);
	sp[1].o = (jobject)SF_mindustry_Vars_content;
	clinit_mindustry_ctype_ContentType(ctx);
	sp[2].o = (jobject)SF_mindustry_ctype_ContentType_unit;
	jint temp0 = (jint)((func_arc_util_io_Reads_s_R_short) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_util_io_Reads_s_R_short])(ctx, (frame[1].o));
	sp[1].o = (jobject)((func_mindustry_core_ContentLoader_getByID_mindustry_ctype_ContentType_int_R_mindustry_ctype_Content) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_mindustry_core_ContentLoader_getByID_mindustry_ctype_ContentType_int_R_mindustry_ctype_Content])(ctx, sp[1].o, sp[2].o, temp0);
	((mindustry_gen_Unit *) NULL_CHECK(sp[0].o))->F_type = (jref) (checkCast(ctx, &class_mindustry_type_UnitType, sp[1].o));
	LINE_NUMBER(313);
	sp[0].o = frame[0].o;
	jfloat temp1 = (jfloat)((func_arc_util_io_Reads_f_R_float) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_util_io_Reads_f_R_float])(ctx, (frame[1].o));
	((mindustry_gen_Unit *) NULL_CHECK(sp[0].o))->F_x = temp1;
	LINE_NUMBER(314);
	sp[0].o = frame[0].o;
	jfloat temp2 = (jfloat)((func_arc_util_io_Reads_f_R_float) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_util_io_Reads_f_R_float])(ctx, (frame[1].o));
	((mindustry_gen_Unit *) NULL_CHECK(sp[0].o))->F_y = temp2;
	LINE_NUMBER(315);
	goto label_27;
	}
label_52:;
	{
	if ((frame[2].i) != (jint(3))) goto label_77;
	}
	{
	LINE_NUMBER(316);
	jfloat temp0 = (jfloat)((func_arc_util_io_Reads_f_R_float) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_util_io_Reads_f_R_float])(ctx, (frame[1].o));
	LINE_NUMBER(317);
	jfloat temp1 = (jfloat)((func_arc_util_io_Reads_f_R_float) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_util_io_Reads_f_R_float])(ctx, (frame[1].o));
	LINE_NUMBER(318);
	sp[0].o = frame[0].o;
	sp[1].o = frame[1].o;
	sp[2].o = (jobject)((mindustry_gen_UnitEntity *) NULL_CHECK((frame[0].o)))->F_controller;
	sp[1].o = (jobject)SM_mindustry_io_TypeIO_readController_arc_util_io_Reads_mindustry_entities_units_UnitController_R_mindustry_entities_units_UnitController(ctx, sp[1].o, sp[2].o);
	((mindustry_gen_UnitEntity *) NULL_CHECK(sp[0].o))->F_controller = (jref) sp[1].o;
	LINE_NUMBER(319);
	sp[0].o = frame[0].o;
	jfloat temp2 = (jfloat)((func_arc_util_io_Reads_f_R_float) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_util_io_Reads_f_R_float])(ctx, (frame[1].o));
	((mindustry_gen_Unit *) NULL_CHECK(sp[0].o))->F_elevation = temp2;
	LINE_NUMBER(320);
	sp[0].o = frame[0].o;
	jdouble temp3 = (jdouble)((func_arc_util_io_Reads_d_R_double) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_util_io_Reads_d_R_double])(ctx, (frame[1].o));
	((mindustry_gen_Unit *) NULL_CHECK(sp[0].o))->F_flag = temp3;
	LINE_NUMBER(321);
	sp[0].o = frame[0].o;
	jfloat temp4 = (jfloat)((func_arc_util_io_Reads_f_R_float) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_util_io_Reads_f_R_float])(ctx, (frame[1].o));
	((mindustry_gen_Unit *) NULL_CHECK(sp[0].o))->F_health = temp4;
	LINE_NUMBER(322);
	sp[0].o = frame[0].o;
	jint temp5 = (jint)((func_arc_util_io_Reads_bool_R_boolean) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_util_io_Reads_bool_R_boolean])(ctx, (frame[1].o));
	((mindustry_gen_Unit *) NULL_CHECK(sp[0].o))->F_isShooting = temp5;
	LINE_NUMBER(323);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)SM_mindustry_io_TypeIO_readTile_arc_util_io_Reads_R_mindustry_world_Tile(ctx, (frame[1].o));
	((mindustry_gen_Unit *) NULL_CHECK(sp[0].o))->F_mineTile = (jref) sp[1].o;
	LINE_NUMBER(324);
	sp[0].o = frame[0].o;
	sp[1].o = frame[1].o;
	sp[2].o = (jobject)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_mounts;
	sp[1].o = (jobject)SM_mindustry_io_TypeIO_readMounts_arc_util_io_Reads_Array1_mindustry_entities_units_WeaponMount_R_Array1_mindustry_entities_units_WeaponMount(ctx, sp[1].o, sp[2].o);
	((mindustry_gen_Unit *) NULL_CHECK(sp[0].o))->F_mounts = (jref) sp[1].o;
	LINE_NUMBER(325);
	sp[0].o = frame[0].o;
	jfloat temp6 = (jfloat)((func_arc_util_io_Reads_f_R_float) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_util_io_Reads_f_R_float])(ctx, (frame[1].o));
	((mindustry_gen_Unit *) NULL_CHECK(sp[0].o))->F_rotation = temp6;
	LINE_NUMBER(326);
	sp[0].o = frame[0].o;
	jfloat temp7 = (jfloat)((func_arc_util_io_Reads_f_R_float) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_util_io_Reads_f_R_float])(ctx, (frame[1].o));
	((mindustry_gen_Unit *) NULL_CHECK(sp[0].o))->F_shield = temp7;
	LINE_NUMBER(327);
	sp[0].o = frame[0].o;
	jint temp8 = (jint)((func_arc_util_io_Reads_bool_R_boolean) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_util_io_Reads_bool_R_boolean])(ctx, (frame[1].o));
	((mindustry_gen_Unit *) NULL_CHECK(sp[0].o))->F_spawnedByCore = temp8;
	LINE_NUMBER(328);
	sp[0].o = frame[0].o;
	sp[1].o = frame[1].o;
	sp[2].o = (jobject)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_stack;
	sp[1].o = (jobject)SM_mindustry_io_TypeIO_readItems_arc_util_io_Reads_mindustry_type_ItemStack_R_mindustry_type_ItemStack(ctx, sp[1].o, sp[2].o);
	((mindustry_gen_Unit *) NULL_CHECK(sp[0].o))->F_stack = (jref) sp[1].o;
	LINE_NUMBER(329);
	jint temp9 = (jint)((func_arc_util_io_Reads_i_R_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_util_io_Reads_i_R_int])(ctx, (frame[1].o));
	frame[3].i = temp9;
	LINE_NUMBER(330);
	sp[0].o = (jobject)((mindustry_gen_UnitEntity *) NULL_CHECK((frame[0].o)))->F_statuses;
	sp[0].o = (jobject)((func_arc_struct_Seq_clear_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_clear_R_arc_struct_Seq])(ctx, sp[0].o);
	LINE_NUMBER(331);
	frame[4].i = (jint(0));
	}
label_94:;
	{
	if ((frame[4].i) >= (frame[3].i)) goto label_95;
	}
	{
	LINE_NUMBER(332);
	sp[0].o = (jobject)SM_mindustry_io_TypeIO_readStatus_arc_util_io_Reads_R_mindustry_entities_units_StatusEntry(ctx, (frame[1].o));
	frame[5].o = sp[0].o;
	LINE_NUMBER(333);
	if ((frame[5].o) == nullptr) goto label_98;
	}
	{
	sp[0].o = (jobject)((mindustry_gen_UnitEntity *) NULL_CHECK((frame[0].o)))->F_statuses;
	sp[0].o = (jobject)((func_arc_struct_Seq_add_java_lang_Object_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_add_java_lang_Object_R_arc_struct_Seq])(ctx, sp[0].o, (frame[5].o));
	}
label_98:;
	{
	LINE_NUMBER(331);
	INST_IINC(4, 1);
	goto label_94;
	}
label_95:;
	{
	LINE_NUMBER(335);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)SM_mindustry_io_TypeIO_readTeam_arc_util_io_Reads_R_mindustry_game_Team(ctx, (frame[1].o));
	((mindustry_gen_Unit *) NULL_CHECK(sp[0].o))->F_team = (jref) sp[1].o;
	LINE_NUMBER(336);
	sp[0].o = frame[0].o;
	clinit_mindustry_Vars(ctx);
	sp[1].o = (jobject)SF_mindustry_Vars_content;
	clinit_mindustry_ctype_ContentType(ctx);
	sp[2].o = (jobject)SF_mindustry_ctype_ContentType_unit;
	jint temp0 = (jint)((func_arc_util_io_Reads_s_R_short) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_util_io_Reads_s_R_short])(ctx, (frame[1].o));
	sp[1].o = (jobject)((func_mindustry_core_ContentLoader_getByID_mindustry_ctype_ContentType_int_R_mindustry_ctype_Content) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_mindustry_core_ContentLoader_getByID_mindustry_ctype_ContentType_int_R_mindustry_ctype_Content])(ctx, sp[1].o, sp[2].o, temp0);
	((mindustry_gen_Unit *) NULL_CHECK(sp[0].o))->F_type = (jref) (checkCast(ctx, &class_mindustry_type_UnitType, sp[1].o));
	LINE_NUMBER(337);
	sp[0].o = frame[0].o;
	jfloat temp1 = (jfloat)((func_arc_util_io_Reads_f_R_float) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_util_io_Reads_f_R_float])(ctx, (frame[1].o));
	((mindustry_gen_Unit *) NULL_CHECK(sp[0].o))->F_x = temp1;
	LINE_NUMBER(338);
	sp[0].o = frame[0].o;
	jfloat temp2 = (jfloat)((func_arc_util_io_Reads_f_R_float) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_util_io_Reads_f_R_float])(ctx, (frame[1].o));
	((mindustry_gen_Unit *) NULL_CHECK(sp[0].o))->F_y = temp2;
	LINE_NUMBER(339);
	goto label_27;
	}
label_77:;
	{
	if ((frame[2].i) != (jint(4))) goto label_103;
	}
	{
	LINE_NUMBER(340);
	jfloat temp0 = (jfloat)((func_arc_util_io_Reads_f_R_float) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_util_io_Reads_f_R_float])(ctx, (frame[1].o));
	LINE_NUMBER(341);
	jfloat temp1 = (jfloat)((func_arc_util_io_Reads_f_R_float) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_util_io_Reads_f_R_float])(ctx, (frame[1].o));
	LINE_NUMBER(342);
	sp[0].o = frame[0].o;
	sp[1].o = frame[1].o;
	sp[2].o = (jobject)((mindustry_gen_UnitEntity *) NULL_CHECK((frame[0].o)))->F_controller;
	sp[1].o = (jobject)SM_mindustry_io_TypeIO_readController_arc_util_io_Reads_mindustry_entities_units_UnitController_R_mindustry_entities_units_UnitController(ctx, sp[1].o, sp[2].o);
	((mindustry_gen_UnitEntity *) NULL_CHECK(sp[0].o))->F_controller = (jref) sp[1].o;
	LINE_NUMBER(343);
	sp[0].o = frame[0].o;
	jfloat temp2 = (jfloat)((func_arc_util_io_Reads_f_R_float) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_util_io_Reads_f_R_float])(ctx, (frame[1].o));
	((mindustry_gen_Unit *) NULL_CHECK(sp[0].o))->F_elevation = temp2;
	LINE_NUMBER(344);
	sp[0].o = frame[0].o;
	jdouble temp3 = (jdouble)((func_arc_util_io_Reads_d_R_double) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_util_io_Reads_d_R_double])(ctx, (frame[1].o));
	((mindustry_gen_Unit *) NULL_CHECK(sp[0].o))->F_flag = temp3;
	LINE_NUMBER(345);
	sp[0].o = frame[0].o;
	jfloat temp4 = (jfloat)((func_arc_util_io_Reads_f_R_float) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_util_io_Reads_f_R_float])(ctx, (frame[1].o));
	((mindustry_gen_Unit *) NULL_CHECK(sp[0].o))->F_health = temp4;
	LINE_NUMBER(346);
	sp[0].o = frame[0].o;
	jint temp5 = (jint)((func_arc_util_io_Reads_bool_R_boolean) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_util_io_Reads_bool_R_boolean])(ctx, (frame[1].o));
	((mindustry_gen_Unit *) NULL_CHECK(sp[0].o))->F_isShooting = temp5;
	LINE_NUMBER(347);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)SM_mindustry_io_TypeIO_readTile_arc_util_io_Reads_R_mindustry_world_Tile(ctx, (frame[1].o));
	((mindustry_gen_Unit *) NULL_CHECK(sp[0].o))->F_mineTile = (jref) sp[1].o;
	LINE_NUMBER(348);
	sp[0].o = frame[0].o;
	sp[1].o = frame[1].o;
	sp[2].o = (jobject)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_mounts;
	sp[1].o = (jobject)SM_mindustry_io_TypeIO_readMounts_arc_util_io_Reads_Array1_mindustry_entities_units_WeaponMount_R_Array1_mindustry_entities_units_WeaponMount(ctx, sp[1].o, sp[2].o);
	((mindustry_gen_Unit *) NULL_CHECK(sp[0].o))->F_mounts = (jref) sp[1].o;
	LINE_NUMBER(349);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)SM_mindustry_io_TypeIO_readPlansQueue_arc_util_io_Reads_R_arc_struct_Queue(ctx, (frame[1].o));
	((mindustry_gen_Unit *) NULL_CHECK(sp[0].o))->F_plans = (jref) sp[1].o;
	LINE_NUMBER(350);
	sp[0].o = frame[0].o;
	jfloat temp6 = (jfloat)((func_arc_util_io_Reads_f_R_float) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_util_io_Reads_f_R_float])(ctx, (frame[1].o));
	((mindustry_gen_Unit *) NULL_CHECK(sp[0].o))->F_rotation = temp6;
	LINE_NUMBER(351);
	sp[0].o = frame[0].o;
	jfloat temp7 = (jfloat)((func_arc_util_io_Reads_f_R_float) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_util_io_Reads_f_R_float])(ctx, (frame[1].o));
	((mindustry_gen_Unit *) NULL_CHECK(sp[0].o))->F_shield = temp7;
	LINE_NUMBER(352);
	sp[0].o = frame[0].o;
	jint temp8 = (jint)((func_arc_util_io_Reads_bool_R_boolean) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_util_io_Reads_bool_R_boolean])(ctx, (frame[1].o));
	((mindustry_gen_Unit *) NULL_CHECK(sp[0].o))->F_spawnedByCore = temp8;
	LINE_NUMBER(353);
	sp[0].o = frame[0].o;
	sp[1].o = frame[1].o;
	sp[2].o = (jobject)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_stack;
	sp[1].o = (jobject)SM_mindustry_io_TypeIO_readItems_arc_util_io_Reads_mindustry_type_ItemStack_R_mindustry_type_ItemStack(ctx, sp[1].o, sp[2].o);
	((mindustry_gen_Unit *) NULL_CHECK(sp[0].o))->F_stack = (jref) sp[1].o;
	LINE_NUMBER(354);
	jint temp9 = (jint)((func_arc_util_io_Reads_i_R_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_util_io_Reads_i_R_int])(ctx, (frame[1].o));
	frame[3].i = temp9;
	LINE_NUMBER(355);
	sp[0].o = (jobject)((mindustry_gen_UnitEntity *) NULL_CHECK((frame[0].o)))->F_statuses;
	sp[0].o = (jobject)((func_arc_struct_Seq_clear_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_clear_R_arc_struct_Seq])(ctx, sp[0].o);
	LINE_NUMBER(356);
	frame[4].i = (jint(0));
	}
label_121:;
	{
	if ((frame[4].i) >= (frame[3].i)) goto label_122;
	}
	{
	LINE_NUMBER(357);
	sp[0].o = (jobject)SM_mindustry_io_TypeIO_readStatus_arc_util_io_Reads_R_mindustry_entities_units_StatusEntry(ctx, (frame[1].o));
	frame[5].o = sp[0].o;
	LINE_NUMBER(358);
	if ((frame[5].o) == nullptr) goto label_125;
	}
	{
	sp[0].o = (jobject)((mindustry_gen_UnitEntity *) NULL_CHECK((frame[0].o)))->F_statuses;
	sp[0].o = (jobject)((func_arc_struct_Seq_add_java_lang_Object_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_add_java_lang_Object_R_arc_struct_Seq])(ctx, sp[0].o, (frame[5].o));
	}
label_125:;
	{
	LINE_NUMBER(356);
	INST_IINC(4, 1);
	goto label_121;
	}
label_122:;
	{
	LINE_NUMBER(360);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)SM_mindustry_io_TypeIO_readTeam_arc_util_io_Reads_R_mindustry_game_Team(ctx, (frame[1].o));
	((mindustry_gen_Unit *) NULL_CHECK(sp[0].o))->F_team = (jref) sp[1].o;
	LINE_NUMBER(361);
	sp[0].o = frame[0].o;
	clinit_mindustry_Vars(ctx);
	sp[1].o = (jobject)SF_mindustry_Vars_content;
	clinit_mindustry_ctype_ContentType(ctx);
	sp[2].o = (jobject)SF_mindustry_ctype_ContentType_unit;
	jint temp0 = (jint)((func_arc_util_io_Reads_s_R_short) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_util_io_Reads_s_R_short])(ctx, (frame[1].o));
	sp[1].o = (jobject)((func_mindustry_core_ContentLoader_getByID_mindustry_ctype_ContentType_int_R_mindustry_ctype_Content) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_mindustry_core_ContentLoader_getByID_mindustry_ctype_ContentType_int_R_mindustry_ctype_Content])(ctx, sp[1].o, sp[2].o, temp0);
	((mindustry_gen_Unit *) NULL_CHECK(sp[0].o))->F_type = (jref) (checkCast(ctx, &class_mindustry_type_UnitType, sp[1].o));
	LINE_NUMBER(362);
	sp[0].o = frame[0].o;
	jfloat temp1 = (jfloat)((func_arc_util_io_Reads_f_R_float) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_util_io_Reads_f_R_float])(ctx, (frame[1].o));
	((mindustry_gen_Unit *) NULL_CHECK(sp[0].o))->F_x = temp1;
	LINE_NUMBER(363);
	sp[0].o = frame[0].o;
	jfloat temp2 = (jfloat)((func_arc_util_io_Reads_f_R_float) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_util_io_Reads_f_R_float])(ctx, (frame[1].o));
	((mindustry_gen_Unit *) NULL_CHECK(sp[0].o))->F_y = temp2;
	LINE_NUMBER(364);
	goto label_27;
	}
label_103:;
	{
	if ((frame[2].i) != (jint(5))) goto label_130;
	}
	{
	LINE_NUMBER(365);
	jfloat temp0 = (jfloat)((func_arc_util_io_Reads_f_R_float) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_util_io_Reads_f_R_float])(ctx, (frame[1].o));
	LINE_NUMBER(366);
	jfloat temp1 = (jfloat)((func_arc_util_io_Reads_f_R_float) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_util_io_Reads_f_R_float])(ctx, (frame[1].o));
	LINE_NUMBER(367);
	sp[0].o = frame[0].o;
	sp[1].o = frame[1].o;
	sp[2].o = (jobject)((mindustry_gen_UnitEntity *) NULL_CHECK((frame[0].o)))->F_controller;
	sp[1].o = (jobject)SM_mindustry_io_TypeIO_readController_arc_util_io_Reads_mindustry_entities_units_UnitController_R_mindustry_entities_units_UnitController(ctx, sp[1].o, sp[2].o);
	((mindustry_gen_UnitEntity *) NULL_CHECK(sp[0].o))->F_controller = (jref) sp[1].o;
	LINE_NUMBER(368);
	sp[0].o = frame[0].o;
	jfloat temp2 = (jfloat)((func_arc_util_io_Reads_f_R_float) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_util_io_Reads_f_R_float])(ctx, (frame[1].o));
	((mindustry_gen_Unit *) NULL_CHECK(sp[0].o))->F_elevation = temp2;
	LINE_NUMBER(369);
	sp[0].o = frame[0].o;
	jdouble temp3 = (jdouble)((func_arc_util_io_Reads_d_R_double) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_util_io_Reads_d_R_double])(ctx, (frame[1].o));
	((mindustry_gen_Unit *) NULL_CHECK(sp[0].o))->F_flag = temp3;
	LINE_NUMBER(370);
	sp[0].o = frame[0].o;
	jfloat temp4 = (jfloat)((func_arc_util_io_Reads_f_R_float) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_util_io_Reads_f_R_float])(ctx, (frame[1].o));
	((mindustry_gen_Unit *) NULL_CHECK(sp[0].o))->F_health = temp4;
	LINE_NUMBER(371);
	sp[0].o = frame[0].o;
	jint temp5 = (jint)((func_arc_util_io_Reads_bool_R_boolean) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_util_io_Reads_bool_R_boolean])(ctx, (frame[1].o));
	((mindustry_gen_Unit *) NULL_CHECK(sp[0].o))->F_isShooting = temp5;
	LINE_NUMBER(372);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)SM_mindustry_io_TypeIO_readTile_arc_util_io_Reads_R_mindustry_world_Tile(ctx, (frame[1].o));
	((mindustry_gen_Unit *) NULL_CHECK(sp[0].o))->F_mineTile = (jref) sp[1].o;
	LINE_NUMBER(373);
	sp[0].o = frame[0].o;
	sp[1].o = frame[1].o;
	sp[2].o = (jobject)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_mounts;
	sp[1].o = (jobject)SM_mindustry_io_TypeIO_readMounts_arc_util_io_Reads_Array1_mindustry_entities_units_WeaponMount_R_Array1_mindustry_entities_units_WeaponMount(ctx, sp[1].o, sp[2].o);
	((mindustry_gen_Unit *) NULL_CHECK(sp[0].o))->F_mounts = (jref) sp[1].o;
	LINE_NUMBER(374);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)SM_mindustry_io_TypeIO_readPlansQueue_arc_util_io_Reads_R_arc_struct_Queue(ctx, (frame[1].o));
	((mindustry_gen_Unit *) NULL_CHECK(sp[0].o))->F_plans = (jref) sp[1].o;
	LINE_NUMBER(375);
	sp[0].o = frame[0].o;
	jfloat temp6 = (jfloat)((func_arc_util_io_Reads_f_R_float) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_util_io_Reads_f_R_float])(ctx, (frame[1].o));
	((mindustry_gen_Unit *) NULL_CHECK(sp[0].o))->F_rotation = temp6;
	LINE_NUMBER(376);
	sp[0].o = frame[0].o;
	jfloat temp7 = (jfloat)((func_arc_util_io_Reads_f_R_float) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_util_io_Reads_f_R_float])(ctx, (frame[1].o));
	((mindustry_gen_Unit *) NULL_CHECK(sp[0].o))->F_shield = temp7;
	LINE_NUMBER(377);
	sp[0].o = frame[0].o;
	jint temp8 = (jint)((func_arc_util_io_Reads_bool_R_boolean) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_util_io_Reads_bool_R_boolean])(ctx, (frame[1].o));
	((mindustry_gen_Unit *) NULL_CHECK(sp[0].o))->F_spawnedByCore = temp8;
	LINE_NUMBER(378);
	sp[0].o = frame[0].o;
	sp[1].o = frame[1].o;
	sp[2].o = (jobject)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_stack;
	sp[1].o = (jobject)SM_mindustry_io_TypeIO_readItems_arc_util_io_Reads_mindustry_type_ItemStack_R_mindustry_type_ItemStack(ctx, sp[1].o, sp[2].o);
	((mindustry_gen_Unit *) NULL_CHECK(sp[0].o))->F_stack = (jref) sp[1].o;
	LINE_NUMBER(379);
	jint temp9 = (jint)((func_arc_util_io_Reads_i_R_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_util_io_Reads_i_R_int])(ctx, (frame[1].o));
	frame[3].i = temp9;
	LINE_NUMBER(380);
	sp[0].o = (jobject)((mindustry_gen_UnitEntity *) NULL_CHECK((frame[0].o)))->F_statuses;
	sp[0].o = (jobject)((func_arc_struct_Seq_clear_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_clear_R_arc_struct_Seq])(ctx, sp[0].o);
	LINE_NUMBER(381);
	frame[4].i = (jint(0));
	}
label_148:;
	{
	if ((frame[4].i) >= (frame[3].i)) goto label_149;
	}
	{
	LINE_NUMBER(382);
	sp[0].o = (jobject)SM_mindustry_io_TypeIO_readStatus_arc_util_io_Reads_R_mindustry_entities_units_StatusEntry(ctx, (frame[1].o));
	frame[5].o = sp[0].o;
	LINE_NUMBER(383);
	if ((frame[5].o) == nullptr) goto label_152;
	}
	{
	sp[0].o = (jobject)((mindustry_gen_UnitEntity *) NULL_CHECK((frame[0].o)))->F_statuses;
	sp[0].o = (jobject)((func_arc_struct_Seq_add_java_lang_Object_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_add_java_lang_Object_R_arc_struct_Seq])(ctx, sp[0].o, (frame[5].o));
	}
label_152:;
	{
	LINE_NUMBER(381);
	INST_IINC(4, 1);
	goto label_148;
	}
label_149:;
	{
	LINE_NUMBER(385);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)SM_mindustry_io_TypeIO_readTeam_arc_util_io_Reads_R_mindustry_game_Team(ctx, (frame[1].o));
	((mindustry_gen_Unit *) NULL_CHECK(sp[0].o))->F_team = (jref) sp[1].o;
	LINE_NUMBER(386);
	sp[0].o = frame[0].o;
	clinit_mindustry_Vars(ctx);
	sp[1].o = (jobject)SF_mindustry_Vars_content;
	clinit_mindustry_ctype_ContentType(ctx);
	sp[2].o = (jobject)SF_mindustry_ctype_ContentType_unit;
	jint temp0 = (jint)((func_arc_util_io_Reads_s_R_short) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_util_io_Reads_s_R_short])(ctx, (frame[1].o));
	sp[1].o = (jobject)((func_mindustry_core_ContentLoader_getByID_mindustry_ctype_ContentType_int_R_mindustry_ctype_Content) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_mindustry_core_ContentLoader_getByID_mindustry_ctype_ContentType_int_R_mindustry_ctype_Content])(ctx, sp[1].o, sp[2].o, temp0);
	((mindustry_gen_Unit *) NULL_CHECK(sp[0].o))->F_type = (jref) (checkCast(ctx, &class_mindustry_type_UnitType, sp[1].o));
	LINE_NUMBER(387);
	sp[0].o = frame[0].o;
	jint temp1 = (jint)((func_arc_util_io_Reads_bool_R_boolean) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_util_io_Reads_bool_R_boolean])(ctx, (frame[1].o));
	((mindustry_gen_Unit *) NULL_CHECK(sp[0].o))->F_updateBuilding = temp1;
	LINE_NUMBER(388);
	sp[0].o = frame[0].o;
	jfloat temp2 = (jfloat)((func_arc_util_io_Reads_f_R_float) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_util_io_Reads_f_R_float])(ctx, (frame[1].o));
	((mindustry_gen_Unit *) NULL_CHECK(sp[0].o))->F_x = temp2;
	LINE_NUMBER(389);
	sp[0].o = frame[0].o;
	jfloat temp3 = (jfloat)((func_arc_util_io_Reads_f_R_float) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_util_io_Reads_f_R_float])(ctx, (frame[1].o));
	((mindustry_gen_Unit *) NULL_CHECK(sp[0].o))->F_y = temp3;
	LINE_NUMBER(390);
	goto label_27;
	}
label_130:;
	{
	if ((frame[2].i) != (6)) goto label_158;
	}
	{
	LINE_NUMBER(391);
	jfloat temp0 = (jfloat)((func_arc_util_io_Reads_f_R_float) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_util_io_Reads_f_R_float])(ctx, (frame[1].o));
	LINE_NUMBER(392);
	sp[0].o = frame[0].o;
	sp[1].o = frame[1].o;
	sp[2].o = (jobject)((mindustry_gen_UnitEntity *) NULL_CHECK((frame[0].o)))->F_controller;
	sp[1].o = (jobject)SM_mindustry_io_TypeIO_readController_arc_util_io_Reads_mindustry_entities_units_UnitController_R_mindustry_entities_units_UnitController(ctx, sp[1].o, sp[2].o);
	((mindustry_gen_UnitEntity *) NULL_CHECK(sp[0].o))->F_controller = (jref) sp[1].o;
	LINE_NUMBER(393);
	sp[0].o = frame[0].o;
	jfloat temp1 = (jfloat)((func_arc_util_io_Reads_f_R_float) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_util_io_Reads_f_R_float])(ctx, (frame[1].o));
	((mindustry_gen_Unit *) NULL_CHECK(sp[0].o))->F_elevation = temp1;
	LINE_NUMBER(394);
	sp[0].o = frame[0].o;
	jdouble temp2 = (jdouble)((func_arc_util_io_Reads_d_R_double) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_util_io_Reads_d_R_double])(ctx, (frame[1].o));
	((mindustry_gen_Unit *) NULL_CHECK(sp[0].o))->F_flag = temp2;
	LINE_NUMBER(395);
	sp[0].o = frame[0].o;
	jfloat temp3 = (jfloat)((func_arc_util_io_Reads_f_R_float) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_util_io_Reads_f_R_float])(ctx, (frame[1].o));
	((mindustry_gen_Unit *) NULL_CHECK(sp[0].o))->F_health = temp3;
	LINE_NUMBER(396);
	sp[0].o = frame[0].o;
	jint temp4 = (jint)((func_arc_util_io_Reads_bool_R_boolean) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_util_io_Reads_bool_R_boolean])(ctx, (frame[1].o));
	((mindustry_gen_Unit *) NULL_CHECK(sp[0].o))->F_isShooting = temp4;
	LINE_NUMBER(397);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)SM_mindustry_io_TypeIO_readTile_arc_util_io_Reads_R_mindustry_world_Tile(ctx, (frame[1].o));
	((mindustry_gen_Unit *) NULL_CHECK(sp[0].o))->F_mineTile = (jref) sp[1].o;
	LINE_NUMBER(398);
	sp[0].o = frame[0].o;
	sp[1].o = frame[1].o;
	sp[2].o = (jobject)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_mounts;
	sp[1].o = (jobject)SM_mindustry_io_TypeIO_readMounts_arc_util_io_Reads_Array1_mindustry_entities_units_WeaponMount_R_Array1_mindustry_entities_units_WeaponMount(ctx, sp[1].o, sp[2].o);
	((mindustry_gen_Unit *) NULL_CHECK(sp[0].o))->F_mounts = (jref) sp[1].o;
	LINE_NUMBER(399);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)SM_mindustry_io_TypeIO_readPlansQueue_arc_util_io_Reads_R_arc_struct_Queue(ctx, (frame[1].o));
	((mindustry_gen_Unit *) NULL_CHECK(sp[0].o))->F_plans = (jref) sp[1].o;
	LINE_NUMBER(400);
	sp[0].o = frame[0].o;
	jfloat temp5 = (jfloat)((func_arc_util_io_Reads_f_R_float) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_util_io_Reads_f_R_float])(ctx, (frame[1].o));
	((mindustry_gen_Unit *) NULL_CHECK(sp[0].o))->F_rotation = temp5;
	LINE_NUMBER(401);
	sp[0].o = frame[0].o;
	jfloat temp6 = (jfloat)((func_arc_util_io_Reads_f_R_float) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_util_io_Reads_f_R_float])(ctx, (frame[1].o));
	((mindustry_gen_Unit *) NULL_CHECK(sp[0].o))->F_shield = temp6;
	LINE_NUMBER(402);
	sp[0].o = frame[0].o;
	jint temp7 = (jint)((func_arc_util_io_Reads_bool_R_boolean) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_util_io_Reads_bool_R_boolean])(ctx, (frame[1].o));
	((mindustry_gen_Unit *) NULL_CHECK(sp[0].o))->F_spawnedByCore = temp7;
	LINE_NUMBER(403);
	sp[0].o = frame[0].o;
	sp[1].o = frame[1].o;
	sp[2].o = (jobject)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_stack;
	sp[1].o = (jobject)SM_mindustry_io_TypeIO_readItems_arc_util_io_Reads_mindustry_type_ItemStack_R_mindustry_type_ItemStack(ctx, sp[1].o, sp[2].o);
	((mindustry_gen_Unit *) NULL_CHECK(sp[0].o))->F_stack = (jref) sp[1].o;
	LINE_NUMBER(404);
	jint temp8 = (jint)((func_arc_util_io_Reads_i_R_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_util_io_Reads_i_R_int])(ctx, (frame[1].o));
	frame[3].i = temp8;
	LINE_NUMBER(405);
	sp[0].o = (jobject)((mindustry_gen_UnitEntity *) NULL_CHECK((frame[0].o)))->F_statuses;
	sp[0].o = (jobject)((func_arc_struct_Seq_clear_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_clear_R_arc_struct_Seq])(ctx, sp[0].o);
	LINE_NUMBER(406);
	frame[4].i = (jint(0));
	}
label_175:;
	{
	if ((frame[4].i) >= (frame[3].i)) goto label_176;
	}
	{
	LINE_NUMBER(407);
	sp[0].o = (jobject)SM_mindustry_io_TypeIO_readStatus_arc_util_io_Reads_R_mindustry_entities_units_StatusEntry(ctx, (frame[1].o));
	frame[5].o = sp[0].o;
	LINE_NUMBER(408);
	if ((frame[5].o) == nullptr) goto label_179;
	}
	{
	sp[0].o = (jobject)((mindustry_gen_UnitEntity *) NULL_CHECK((frame[0].o)))->F_statuses;
	sp[0].o = (jobject)((func_arc_struct_Seq_add_java_lang_Object_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_add_java_lang_Object_R_arc_struct_Seq])(ctx, sp[0].o, (frame[5].o));
	}
label_179:;
	{
	LINE_NUMBER(406);
	INST_IINC(4, 1);
	goto label_175;
	}
label_176:;
	{
	LINE_NUMBER(410);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)SM_mindustry_io_TypeIO_readTeam_arc_util_io_Reads_R_mindustry_game_Team(ctx, (frame[1].o));
	((mindustry_gen_Unit *) NULL_CHECK(sp[0].o))->F_team = (jref) sp[1].o;
	LINE_NUMBER(411);
	sp[0].o = frame[0].o;
	clinit_mindustry_Vars(ctx);
	sp[1].o = (jobject)SF_mindustry_Vars_content;
	clinit_mindustry_ctype_ContentType(ctx);
	sp[2].o = (jobject)SF_mindustry_ctype_ContentType_unit;
	jint temp0 = (jint)((func_arc_util_io_Reads_s_R_short) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_util_io_Reads_s_R_short])(ctx, (frame[1].o));
	sp[1].o = (jobject)((func_mindustry_core_ContentLoader_getByID_mindustry_ctype_ContentType_int_R_mindustry_ctype_Content) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_mindustry_core_ContentLoader_getByID_mindustry_ctype_ContentType_int_R_mindustry_ctype_Content])(ctx, sp[1].o, sp[2].o, temp0);
	((mindustry_gen_Unit *) NULL_CHECK(sp[0].o))->F_type = (jref) (checkCast(ctx, &class_mindustry_type_UnitType, sp[1].o));
	LINE_NUMBER(412);
	sp[0].o = frame[0].o;
	jint temp1 = (jint)((func_arc_util_io_Reads_bool_R_boolean) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_util_io_Reads_bool_R_boolean])(ctx, (frame[1].o));
	((mindustry_gen_Unit *) NULL_CHECK(sp[0].o))->F_updateBuilding = temp1;
	LINE_NUMBER(413);
	sp[0].o = frame[0].o;
	sp[1].o = frame[1].o;
	sp[2].o = (jobject)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_vel;
	sp[1].o = (jobject)SM_mindustry_io_TypeIO_readVec2_arc_util_io_Reads_arc_math_geom_Vec2_R_arc_math_geom_Vec2(ctx, sp[1].o, sp[2].o);
	((mindustry_gen_Unit *) NULL_CHECK(sp[0].o))->F_vel = (jref) sp[1].o;
	LINE_NUMBER(414);
	sp[0].o = frame[0].o;
	jfloat temp2 = (jfloat)((func_arc_util_io_Reads_f_R_float) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_util_io_Reads_f_R_float])(ctx, (frame[1].o));
	((mindustry_gen_Unit *) NULL_CHECK(sp[0].o))->F_x = temp2;
	LINE_NUMBER(415);
	sp[0].o = frame[0].o;
	jfloat temp3 = (jfloat)((func_arc_util_io_Reads_f_R_float) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_util_io_Reads_f_R_float])(ctx, (frame[1].o));
	((mindustry_gen_Unit *) NULL_CHECK(sp[0].o))->F_y = temp3;
	LINE_NUMBER(416);
	goto label_27;
	}
label_158:;
	{
	if ((frame[2].i) != (7)) goto label_186;
	}
	{
	LINE_NUMBER(417);
	sp[0].o = frame[0].o;
	sp[1].o = frame[1].o;
	sp[2].o = (jobject)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_abilities;
	sp[1].o = (jobject)SM_mindustry_io_TypeIO_readAbilities_arc_util_io_Reads_Array1_mindustry_entities_abilities_Ability_R_Array1_mindustry_entities_abilities_Ability(ctx, sp[1].o, sp[2].o);
	((mindustry_gen_Unit *) NULL_CHECK(sp[0].o))->F_abilities = (jref) sp[1].o;
	LINE_NUMBER(418);
	jfloat temp0 = (jfloat)((func_arc_util_io_Reads_f_R_float) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_util_io_Reads_f_R_float])(ctx, (frame[1].o));
	LINE_NUMBER(419);
	sp[0].o = frame[0].o;
	sp[1].o = frame[1].o;
	sp[2].o = (jobject)((mindustry_gen_UnitEntity *) NULL_CHECK((frame[0].o)))->F_controller;
	sp[1].o = (jobject)SM_mindustry_io_TypeIO_readController_arc_util_io_Reads_mindustry_entities_units_UnitController_R_mindustry_entities_units_UnitController(ctx, sp[1].o, sp[2].o);
	((mindustry_gen_UnitEntity *) NULL_CHECK(sp[0].o))->F_controller = (jref) sp[1].o;
	LINE_NUMBER(420);
	sp[0].o = frame[0].o;
	jfloat temp1 = (jfloat)((func_arc_util_io_Reads_f_R_float) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_util_io_Reads_f_R_float])(ctx, (frame[1].o));
	((mindustry_gen_Unit *) NULL_CHECK(sp[0].o))->F_elevation = temp1;
	LINE_NUMBER(421);
	sp[0].o = frame[0].o;
	jdouble temp2 = (jdouble)((func_arc_util_io_Reads_d_R_double) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_util_io_Reads_d_R_double])(ctx, (frame[1].o));
	((mindustry_gen_Unit *) NULL_CHECK(sp[0].o))->F_flag = temp2;
	LINE_NUMBER(422);
	sp[0].o = frame[0].o;
	jfloat temp3 = (jfloat)((func_arc_util_io_Reads_f_R_float) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_util_io_Reads_f_R_float])(ctx, (frame[1].o));
	((mindustry_gen_Unit *) NULL_CHECK(sp[0].o))->F_health = temp3;
	LINE_NUMBER(423);
	sp[0].o = frame[0].o;
	jint temp4 = (jint)((func_arc_util_io_Reads_bool_R_boolean) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_util_io_Reads_bool_R_boolean])(ctx, (frame[1].o));
	((mindustry_gen_Unit *) NULL_CHECK(sp[0].o))->F_isShooting = temp4;
	LINE_NUMBER(424);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)SM_mindustry_io_TypeIO_readTile_arc_util_io_Reads_R_mindustry_world_Tile(ctx, (frame[1].o));
	((mindustry_gen_Unit *) NULL_CHECK(sp[0].o))->F_mineTile = (jref) sp[1].o;
	LINE_NUMBER(425);
	sp[0].o = frame[0].o;
	sp[1].o = frame[1].o;
	sp[2].o = (jobject)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_mounts;
	sp[1].o = (jobject)SM_mindustry_io_TypeIO_readMounts_arc_util_io_Reads_Array1_mindustry_entities_units_WeaponMount_R_Array1_mindustry_entities_units_WeaponMount(ctx, sp[1].o, sp[2].o);
	((mindustry_gen_Unit *) NULL_CHECK(sp[0].o))->F_mounts = (jref) sp[1].o;
	LINE_NUMBER(426);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)SM_mindustry_io_TypeIO_readPlansQueue_arc_util_io_Reads_R_arc_struct_Queue(ctx, (frame[1].o));
	((mindustry_gen_Unit *) NULL_CHECK(sp[0].o))->F_plans = (jref) sp[1].o;
	LINE_NUMBER(427);
	sp[0].o = frame[0].o;
	jfloat temp5 = (jfloat)((func_arc_util_io_Reads_f_R_float) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_util_io_Reads_f_R_float])(ctx, (frame[1].o));
	((mindustry_gen_Unit *) NULL_CHECK(sp[0].o))->F_rotation = temp5;
	LINE_NUMBER(428);
	sp[0].o = frame[0].o;
	jfloat temp6 = (jfloat)((func_arc_util_io_Reads_f_R_float) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_util_io_Reads_f_R_float])(ctx, (frame[1].o));
	((mindustry_gen_Unit *) NULL_CHECK(sp[0].o))->F_shield = temp6;
	LINE_NUMBER(429);
	sp[0].o = frame[0].o;
	jint temp7 = (jint)((func_arc_util_io_Reads_bool_R_boolean) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_util_io_Reads_bool_R_boolean])(ctx, (frame[1].o));
	((mindustry_gen_Unit *) NULL_CHECK(sp[0].o))->F_spawnedByCore = temp7;
	LINE_NUMBER(430);
	sp[0].o = frame[0].o;
	sp[1].o = frame[1].o;
	sp[2].o = (jobject)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_stack;
	sp[1].o = (jobject)SM_mindustry_io_TypeIO_readItems_arc_util_io_Reads_mindustry_type_ItemStack_R_mindustry_type_ItemStack(ctx, sp[1].o, sp[2].o);
	((mindustry_gen_Unit *) NULL_CHECK(sp[0].o))->F_stack = (jref) sp[1].o;
	LINE_NUMBER(431);
	jint temp8 = (jint)((func_arc_util_io_Reads_i_R_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_util_io_Reads_i_R_int])(ctx, (frame[1].o));
	frame[3].i = temp8;
	LINE_NUMBER(432);
	sp[0].o = (jobject)((mindustry_gen_UnitEntity *) NULL_CHECK((frame[0].o)))->F_statuses;
	sp[0].o = (jobject)((func_arc_struct_Seq_clear_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_clear_R_arc_struct_Seq])(ctx, sp[0].o);
	LINE_NUMBER(433);
	frame[4].i = (jint(0));
	}
label_204:;
	{
	if ((frame[4].i) >= (frame[3].i)) goto label_205;
	}
	{
	LINE_NUMBER(434);
	sp[0].o = (jobject)SM_mindustry_io_TypeIO_readStatus_arc_util_io_Reads_R_mindustry_entities_units_StatusEntry(ctx, (frame[1].o));
	frame[5].o = sp[0].o;
	LINE_NUMBER(435);
	if ((frame[5].o) == nullptr) goto label_208;
	}
	{
	sp[0].o = (jobject)((mindustry_gen_UnitEntity *) NULL_CHECK((frame[0].o)))->F_statuses;
	sp[0].o = (jobject)((func_arc_struct_Seq_add_java_lang_Object_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_add_java_lang_Object_R_arc_struct_Seq])(ctx, sp[0].o, (frame[5].o));
	}
label_208:;
	{
	LINE_NUMBER(433);
	INST_IINC(4, 1);
	goto label_204;
	}
label_205:;
	{
	LINE_NUMBER(437);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)SM_mindustry_io_TypeIO_readTeam_arc_util_io_Reads_R_mindustry_game_Team(ctx, (frame[1].o));
	((mindustry_gen_Unit *) NULL_CHECK(sp[0].o))->F_team = (jref) sp[1].o;
	LINE_NUMBER(438);
	sp[0].o = frame[0].o;
	clinit_mindustry_Vars(ctx);
	sp[1].o = (jobject)SF_mindustry_Vars_content;
	clinit_mindustry_ctype_ContentType(ctx);
	sp[2].o = (jobject)SF_mindustry_ctype_ContentType_unit;
	jint temp0 = (jint)((func_arc_util_io_Reads_s_R_short) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_util_io_Reads_s_R_short])(ctx, (frame[1].o));
	sp[1].o = (jobject)((func_mindustry_core_ContentLoader_getByID_mindustry_ctype_ContentType_int_R_mindustry_ctype_Content) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_mindustry_core_ContentLoader_getByID_mindustry_ctype_ContentType_int_R_mindustry_ctype_Content])(ctx, sp[1].o, sp[2].o, temp0);
	((mindustry_gen_Unit *) NULL_CHECK(sp[0].o))->F_type = (jref) (checkCast(ctx, &class_mindustry_type_UnitType, sp[1].o));
	LINE_NUMBER(439);
	sp[0].o = frame[0].o;
	jint temp1 = (jint)((func_arc_util_io_Reads_bool_R_boolean) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_util_io_Reads_bool_R_boolean])(ctx, (frame[1].o));
	((mindustry_gen_Unit *) NULL_CHECK(sp[0].o))->F_updateBuilding = temp1;
	LINE_NUMBER(440);
	sp[0].o = frame[0].o;
	sp[1].o = frame[1].o;
	sp[2].o = (jobject)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_vel;
	sp[1].o = (jobject)SM_mindustry_io_TypeIO_readVec2_arc_util_io_Reads_arc_math_geom_Vec2_R_arc_math_geom_Vec2(ctx, sp[1].o, sp[2].o);
	((mindustry_gen_Unit *) NULL_CHECK(sp[0].o))->F_vel = (jref) sp[1].o;
	LINE_NUMBER(441);
	sp[0].o = frame[0].o;
	jfloat temp2 = (jfloat)((func_arc_util_io_Reads_f_R_float) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_util_io_Reads_f_R_float])(ctx, (frame[1].o));
	((mindustry_gen_Unit *) NULL_CHECK(sp[0].o))->F_x = temp2;
	LINE_NUMBER(442);
	sp[0].o = frame[0].o;
	jfloat temp3 = (jfloat)((func_arc_util_io_Reads_f_R_float) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_util_io_Reads_f_R_float])(ctx, (frame[1].o));
	((mindustry_gen_Unit *) NULL_CHECK(sp[0].o))->F_y = temp3;
	LINE_NUMBER(443);
	goto label_27;
	}
label_186:;
	{
	if ((frame[2].i) != (8)) goto label_215;
	}
	{
	LINE_NUMBER(444);
	sp[0].o = frame[0].o;
	sp[1].o = frame[1].o;
	sp[2].o = (jobject)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_abilities;
	sp[1].o = (jobject)SM_mindustry_io_TypeIO_readAbilities_arc_util_io_Reads_Array1_mindustry_entities_abilities_Ability_R_Array1_mindustry_entities_abilities_Ability(ctx, sp[1].o, sp[2].o);
	((mindustry_gen_Unit *) NULL_CHECK(sp[0].o))->F_abilities = (jref) sp[1].o;
	LINE_NUMBER(445);
	jfloat temp0 = (jfloat)((func_arc_util_io_Reads_f_R_float) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_util_io_Reads_f_R_float])(ctx, (frame[1].o));
	LINE_NUMBER(446);
	sp[0].o = frame[0].o;
	sp[1].o = frame[1].o;
	sp[2].o = (jobject)((mindustry_gen_UnitEntity *) NULL_CHECK((frame[0].o)))->F_controller;
	sp[1].o = (jobject)SM_mindustry_io_TypeIO_readController_arc_util_io_Reads_mindustry_entities_units_UnitController_R_mindustry_entities_units_UnitController(ctx, sp[1].o, sp[2].o);
	((mindustry_gen_UnitEntity *) NULL_CHECK(sp[0].o))->F_controller = (jref) sp[1].o;
	LINE_NUMBER(447);
	sp[0].o = frame[0].o;
	jfloat temp1 = (jfloat)((func_arc_util_io_Reads_f_R_float) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_util_io_Reads_f_R_float])(ctx, (frame[1].o));
	((mindustry_gen_Unit *) NULL_CHECK(sp[0].o))->F_elevation = temp1;
	LINE_NUMBER(448);
	sp[0].o = frame[0].o;
	jdouble temp2 = (jdouble)((func_arc_util_io_Reads_d_R_double) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_util_io_Reads_d_R_double])(ctx, (frame[1].o));
	((mindustry_gen_Unit *) NULL_CHECK(sp[0].o))->F_flag = temp2;
	LINE_NUMBER(449);
	sp[0].o = frame[0].o;
	jfloat temp3 = (jfloat)((func_arc_util_io_Reads_f_R_float) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_util_io_Reads_f_R_float])(ctx, (frame[1].o));
	((mindustry_gen_Unit *) NULL_CHECK(sp[0].o))->F_health = temp3;
	LINE_NUMBER(450);
	sp[0].o = frame[0].o;
	jint temp4 = (jint)((func_arc_util_io_Reads_bool_R_boolean) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_util_io_Reads_bool_R_boolean])(ctx, (frame[1].o));
	((mindustry_gen_Unit *) NULL_CHECK(sp[0].o))->F_isShooting = temp4;
	LINE_NUMBER(451);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)SM_mindustry_io_TypeIO_readTile_arc_util_io_Reads_R_mindustry_world_Tile(ctx, (frame[1].o));
	((mindustry_gen_Unit *) NULL_CHECK(sp[0].o))->F_mineTile = (jref) sp[1].o;
	LINE_NUMBER(452);
	sp[0].o = frame[0].o;
	sp[1].o = frame[1].o;
	sp[2].o = (jobject)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_mounts;
	sp[1].o = (jobject)SM_mindustry_io_TypeIO_readMounts_arc_util_io_Reads_Array1_mindustry_entities_units_WeaponMount_R_Array1_mindustry_entities_units_WeaponMount(ctx, sp[1].o, sp[2].o);
	((mindustry_gen_Unit *) NULL_CHECK(sp[0].o))->F_mounts = (jref) sp[1].o;
	LINE_NUMBER(453);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)SM_mindustry_io_TypeIO_readPlansQueue_arc_util_io_Reads_R_arc_struct_Queue(ctx, (frame[1].o));
	((mindustry_gen_Unit *) NULL_CHECK(sp[0].o))->F_plans = (jref) sp[1].o;
	LINE_NUMBER(454);
	sp[0].o = frame[0].o;
	jfloat temp5 = (jfloat)((func_arc_util_io_Reads_f_R_float) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_util_io_Reads_f_R_float])(ctx, (frame[1].o));
	((mindustry_gen_Unit *) NULL_CHECK(sp[0].o))->F_rotation = temp5;
	LINE_NUMBER(455);
	sp[0].o = frame[0].o;
	jfloat temp6 = (jfloat)((func_arc_util_io_Reads_f_R_float) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_util_io_Reads_f_R_float])(ctx, (frame[1].o));
	((mindustry_gen_Unit *) NULL_CHECK(sp[0].o))->F_shield = temp6;
	LINE_NUMBER(456);
	sp[0].o = frame[0].o;
	jint temp7 = (jint)((func_arc_util_io_Reads_bool_R_boolean) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_util_io_Reads_bool_R_boolean])(ctx, (frame[1].o));
	((mindustry_gen_Unit *) NULL_CHECK(sp[0].o))->F_spawnedByCore = temp7;
	LINE_NUMBER(457);
	sp[0].o = frame[0].o;
	sp[1].o = frame[1].o;
	sp[2].o = (jobject)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_stack;
	sp[1].o = (jobject)SM_mindustry_io_TypeIO_readItems_arc_util_io_Reads_mindustry_type_ItemStack_R_mindustry_type_ItemStack(ctx, sp[1].o, sp[2].o);
	((mindustry_gen_Unit *) NULL_CHECK(sp[0].o))->F_stack = (jref) sp[1].o;
	LINE_NUMBER(458);
	jint temp8 = (jint)((func_arc_util_io_Reads_i_R_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_util_io_Reads_i_R_int])(ctx, (frame[1].o));
	frame[3].i = temp8;
	LINE_NUMBER(459);
	sp[0].o = (jobject)((mindustry_gen_UnitEntity *) NULL_CHECK((frame[0].o)))->F_statuses;
	sp[0].o = (jobject)((func_arc_struct_Seq_clear_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_clear_R_arc_struct_Seq])(ctx, sp[0].o);
	LINE_NUMBER(460);
	frame[4].i = (jint(0));
	}
label_233:;
	{
	if ((frame[4].i) >= (frame[3].i)) goto label_234;
	}
	{
	LINE_NUMBER(461);
	sp[0].o = (jobject)SM_mindustry_io_TypeIO_readStatus_arc_util_io_Reads_R_mindustry_entities_units_StatusEntry(ctx, (frame[1].o));
	frame[5].o = sp[0].o;
	LINE_NUMBER(462);
	if ((frame[5].o) == nullptr) goto label_237;
	}
	{
	sp[0].o = (jobject)((mindustry_gen_UnitEntity *) NULL_CHECK((frame[0].o)))->F_statuses;
	sp[0].o = (jobject)((func_arc_struct_Seq_add_java_lang_Object_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_add_java_lang_Object_R_arc_struct_Seq])(ctx, sp[0].o, (frame[5].o));
	}
label_237:;
	{
	LINE_NUMBER(460);
	INST_IINC(4, 1);
	goto label_233;
	}
label_234:;
	{
	LINE_NUMBER(464);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)SM_mindustry_io_TypeIO_readTeam_arc_util_io_Reads_R_mindustry_game_Team(ctx, (frame[1].o));
	((mindustry_gen_Unit *) NULL_CHECK(sp[0].o))->F_team = (jref) sp[1].o;
	LINE_NUMBER(465);
	sp[0].o = frame[0].o;
	clinit_mindustry_Vars(ctx);
	sp[1].o = (jobject)SF_mindustry_Vars_content;
	clinit_mindustry_ctype_ContentType(ctx);
	sp[2].o = (jobject)SF_mindustry_ctype_ContentType_unit;
	jint temp0 = (jint)((func_arc_util_io_Reads_s_R_short) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_util_io_Reads_s_R_short])(ctx, (frame[1].o));
	sp[1].o = (jobject)((func_mindustry_core_ContentLoader_getByID_mindustry_ctype_ContentType_int_R_mindustry_ctype_Content) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_mindustry_core_ContentLoader_getByID_mindustry_ctype_ContentType_int_R_mindustry_ctype_Content])(ctx, sp[1].o, sp[2].o, temp0);
	((mindustry_gen_Unit *) NULL_CHECK(sp[0].o))->F_type = (jref) (checkCast(ctx, &class_mindustry_type_UnitType, sp[1].o));
	LINE_NUMBER(466);
	sp[0].o = frame[0].o;
	jint temp1 = (jint)((func_arc_util_io_Reads_bool_R_boolean) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_util_io_Reads_bool_R_boolean])(ctx, (frame[1].o));
	((mindustry_gen_Unit *) NULL_CHECK(sp[0].o))->F_updateBuilding = temp1;
	LINE_NUMBER(467);
	sp[0].o = frame[0].o;
	sp[1].o = frame[1].o;
	sp[2].o = (jobject)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_vel;
	sp[1].o = (jobject)SM_mindustry_io_TypeIO_readVec2_arc_util_io_Reads_arc_math_geom_Vec2_R_arc_math_geom_Vec2(ctx, sp[1].o, sp[2].o);
	((mindustry_gen_Unit *) NULL_CHECK(sp[0].o))->F_vel = (jref) sp[1].o;
	LINE_NUMBER(468);
	sp[0].o = frame[0].o;
	jfloat temp2 = (jfloat)((func_arc_util_io_Reads_f_R_float) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_util_io_Reads_f_R_float])(ctx, (frame[1].o));
	((mindustry_gen_Unit *) NULL_CHECK(sp[0].o))->F_x = temp2;
	LINE_NUMBER(469);
	sp[0].o = frame[0].o;
	jfloat temp3 = (jfloat)((func_arc_util_io_Reads_f_R_float) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_util_io_Reads_f_R_float])(ctx, (frame[1].o));
	((mindustry_gen_Unit *) NULL_CHECK(sp[0].o))->F_y = temp3;
	LINE_NUMBER(470);
	goto label_27;
	}
label_215:;
	{
	if ((frame[2].i) != (9)) goto label_244;
	}
	{
	LINE_NUMBER(471);
	sp[0].o = frame[0].o;
	sp[1].o = frame[1].o;
	sp[2].o = (jobject)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_abilities;
	sp[1].o = (jobject)SM_mindustry_io_TypeIO_readAbilities_arc_util_io_Reads_Array1_mindustry_entities_abilities_Ability_R_Array1_mindustry_entities_abilities_Ability(ctx, sp[1].o, sp[2].o);
	((mindustry_gen_Unit *) NULL_CHECK(sp[0].o))->F_abilities = (jref) sp[1].o;
	LINE_NUMBER(472);
	sp[0].o = frame[0].o;
	sp[1].o = frame[1].o;
	sp[2].o = (jobject)((mindustry_gen_UnitEntity *) NULL_CHECK((frame[0].o)))->F_controller;
	sp[1].o = (jobject)SM_mindustry_io_TypeIO_readController_arc_util_io_Reads_mindustry_entities_units_UnitController_R_mindustry_entities_units_UnitController(ctx, sp[1].o, sp[2].o);
	((mindustry_gen_UnitEntity *) NULL_CHECK(sp[0].o))->F_controller = (jref) sp[1].o;
	LINE_NUMBER(473);
	sp[0].o = frame[0].o;
	jfloat temp0 = (jfloat)((func_arc_util_io_Reads_f_R_float) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_util_io_Reads_f_R_float])(ctx, (frame[1].o));
	((mindustry_gen_Unit *) NULL_CHECK(sp[0].o))->F_elevation = temp0;
	LINE_NUMBER(474);
	sp[0].o = frame[0].o;
	jdouble temp1 = (jdouble)((func_arc_util_io_Reads_d_R_double) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_util_io_Reads_d_R_double])(ctx, (frame[1].o));
	((mindustry_gen_Unit *) NULL_CHECK(sp[0].o))->F_flag = temp1;
	LINE_NUMBER(475);
	sp[0].o = frame[0].o;
	jfloat temp2 = (jfloat)((func_arc_util_io_Reads_f_R_float) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_util_io_Reads_f_R_float])(ctx, (frame[1].o));
	((mindustry_gen_Unit *) NULL_CHECK(sp[0].o))->F_health = temp2;
	LINE_NUMBER(476);
	sp[0].o = frame[0].o;
	jint temp3 = (jint)((func_arc_util_io_Reads_bool_R_boolean) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_util_io_Reads_bool_R_boolean])(ctx, (frame[1].o));
	((mindustry_gen_Unit *) NULL_CHECK(sp[0].o))->F_isShooting = temp3;
	LINE_NUMBER(477);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)SM_mindustry_io_TypeIO_readTile_arc_util_io_Reads_R_mindustry_world_Tile(ctx, (frame[1].o));
	((mindustry_gen_Unit *) NULL_CHECK(sp[0].o))->F_mineTile = (jref) sp[1].o;
	LINE_NUMBER(478);
	sp[0].o = frame[0].o;
	sp[1].o = frame[1].o;
	sp[2].o = (jobject)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_mounts;
	sp[1].o = (jobject)SM_mindustry_io_TypeIO_readMounts_arc_util_io_Reads_Array1_mindustry_entities_units_WeaponMount_R_Array1_mindustry_entities_units_WeaponMount(ctx, sp[1].o, sp[2].o);
	((mindustry_gen_Unit *) NULL_CHECK(sp[0].o))->F_mounts = (jref) sp[1].o;
	LINE_NUMBER(479);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)SM_mindustry_io_TypeIO_readPlansQueue_arc_util_io_Reads_R_arc_struct_Queue(ctx, (frame[1].o));
	((mindustry_gen_Unit *) NULL_CHECK(sp[0].o))->F_plans = (jref) sp[1].o;
	LINE_NUMBER(480);
	sp[0].o = frame[0].o;
	jfloat temp4 = (jfloat)((func_arc_util_io_Reads_f_R_float) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_util_io_Reads_f_R_float])(ctx, (frame[1].o));
	((mindustry_gen_Unit *) NULL_CHECK(sp[0].o))->F_rotation = temp4;
	LINE_NUMBER(481);
	sp[0].o = frame[0].o;
	jfloat temp5 = (jfloat)((func_arc_util_io_Reads_f_R_float) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_util_io_Reads_f_R_float])(ctx, (frame[1].o));
	((mindustry_gen_Unit *) NULL_CHECK(sp[0].o))->F_shield = temp5;
	LINE_NUMBER(482);
	sp[0].o = frame[0].o;
	jint temp6 = (jint)((func_arc_util_io_Reads_bool_R_boolean) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_util_io_Reads_bool_R_boolean])(ctx, (frame[1].o));
	((mindustry_gen_Unit *) NULL_CHECK(sp[0].o))->F_spawnedByCore = temp6;
	LINE_NUMBER(483);
	sp[0].o = frame[0].o;
	sp[1].o = frame[1].o;
	sp[2].o = (jobject)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_stack;
	sp[1].o = (jobject)SM_mindustry_io_TypeIO_readItems_arc_util_io_Reads_mindustry_type_ItemStack_R_mindustry_type_ItemStack(ctx, sp[1].o, sp[2].o);
	((mindustry_gen_Unit *) NULL_CHECK(sp[0].o))->F_stack = (jref) sp[1].o;
	LINE_NUMBER(484);
	jint temp7 = (jint)((func_arc_util_io_Reads_i_R_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_util_io_Reads_i_R_int])(ctx, (frame[1].o));
	frame[3].i = temp7;
	LINE_NUMBER(485);
	sp[0].o = (jobject)((mindustry_gen_UnitEntity *) NULL_CHECK((frame[0].o)))->F_statuses;
	sp[0].o = (jobject)((func_arc_struct_Seq_clear_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_clear_R_arc_struct_Seq])(ctx, sp[0].o);
	LINE_NUMBER(486);
	frame[4].i = (jint(0));
	}
label_261:;
	{
	if ((frame[4].i) >= (frame[3].i)) goto label_262;
	}
	{
	LINE_NUMBER(487);
	sp[0].o = (jobject)SM_mindustry_io_TypeIO_readStatus_arc_util_io_Reads_R_mindustry_entities_units_StatusEntry(ctx, (frame[1].o));
	frame[5].o = sp[0].o;
	LINE_NUMBER(488);
	if ((frame[5].o) == nullptr) goto label_265;
	}
	{
	sp[0].o = (jobject)((mindustry_gen_UnitEntity *) NULL_CHECK((frame[0].o)))->F_statuses;
	sp[0].o = (jobject)((func_arc_struct_Seq_add_java_lang_Object_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_add_java_lang_Object_R_arc_struct_Seq])(ctx, sp[0].o, (frame[5].o));
	}
label_265:;
	{
	LINE_NUMBER(486);
	INST_IINC(4, 1);
	goto label_261;
	}
label_262:;
	{
	LINE_NUMBER(490);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)SM_mindustry_io_TypeIO_readTeam_arc_util_io_Reads_R_mindustry_game_Team(ctx, (frame[1].o));
	((mindustry_gen_Unit *) NULL_CHECK(sp[0].o))->F_team = (jref) sp[1].o;
	LINE_NUMBER(491);
	sp[0].o = frame[0].o;
	clinit_mindustry_Vars(ctx);
	sp[1].o = (jobject)SF_mindustry_Vars_content;
	clinit_mindustry_ctype_ContentType(ctx);
	sp[2].o = (jobject)SF_mindustry_ctype_ContentType_unit;
	jint temp0 = (jint)((func_arc_util_io_Reads_s_R_short) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_util_io_Reads_s_R_short])(ctx, (frame[1].o));
	sp[1].o = (jobject)((func_mindustry_core_ContentLoader_getByID_mindustry_ctype_ContentType_int_R_mindustry_ctype_Content) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_mindustry_core_ContentLoader_getByID_mindustry_ctype_ContentType_int_R_mindustry_ctype_Content])(ctx, sp[1].o, sp[2].o, temp0);
	((mindustry_gen_Unit *) NULL_CHECK(sp[0].o))->F_type = (jref) (checkCast(ctx, &class_mindustry_type_UnitType, sp[1].o));
	LINE_NUMBER(492);
	sp[0].o = frame[0].o;
	jint temp1 = (jint)((func_arc_util_io_Reads_bool_R_boolean) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_util_io_Reads_bool_R_boolean])(ctx, (frame[1].o));
	((mindustry_gen_Unit *) NULL_CHECK(sp[0].o))->F_updateBuilding = temp1;
	LINE_NUMBER(493);
	sp[0].o = frame[0].o;
	sp[1].o = frame[1].o;
	sp[2].o = (jobject)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_vel;
	sp[1].o = (jobject)SM_mindustry_io_TypeIO_readVec2_arc_util_io_Reads_arc_math_geom_Vec2_R_arc_math_geom_Vec2(ctx, sp[1].o, sp[2].o);
	((mindustry_gen_Unit *) NULL_CHECK(sp[0].o))->F_vel = (jref) sp[1].o;
	LINE_NUMBER(494);
	sp[0].o = frame[0].o;
	jfloat temp2 = (jfloat)((func_arc_util_io_Reads_f_R_float) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_util_io_Reads_f_R_float])(ctx, (frame[1].o));
	((mindustry_gen_Unit *) NULL_CHECK(sp[0].o))->F_x = temp2;
	LINE_NUMBER(495);
	sp[0].o = frame[0].o;
	jfloat temp3 = (jfloat)((func_arc_util_io_Reads_f_R_float) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_util_io_Reads_f_R_float])(ctx, (frame[1].o));
	((mindustry_gen_Unit *) NULL_CHECK(sp[0].o))->F_y = temp3;
	LINE_NUMBER(496);
	goto label_27;
	}
label_244:;
	{
	LINE_NUMBER(497);
	clinit_java_lang_IllegalArgumentException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IllegalArgumentException);
	sp[1].o = (jobject)concatStringsRecipe(ctx, u8"Unknown revision '\u0001' for entity type 'flare'"_j.string, 1, boxShort(ctx, (frame[2].i)));
	init_java_lang_IllegalArgumentException_java_lang_String(ctx, sp[0].o, sp[1].o);
	throwException(ctx, sp[0].o);	}
label_27:;
	{
	LINE_NUMBER(500);
	((func_mindustry_gen_UnitEntity_afterRead) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_gen_UnitEntity_afterRead])(ctx, (frame[0].o));
	LINE_NUMBER(501);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_gen_UnitEntity_write_arc_util_io_Writes(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/UnitEntity:write", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(505);
	((func_arc_util_io_Writes_s_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_util_io_Writes_s_int])(ctx, (frame[1].o), (9));
	LINE_NUMBER(506);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_abilities;
	SM_mindustry_io_TypeIO_writeAbilities_arc_util_io_Writes_Array1_mindustry_entities_abilities_Ability(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(507);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((mindustry_gen_UnitEntity *) NULL_CHECK((frame[0].o)))->F_controller;
	SM_mindustry_io_TypeIO_writeController_arc_util_io_Writes_mindustry_entities_units_UnitController(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(508);
	((func_arc_util_io_Writes_f_float) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_util_io_Writes_f_float])(ctx, (frame[1].o), ((jfloat)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_elevation));
	LINE_NUMBER(509);
	((func_arc_util_io_Writes_d_double) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_util_io_Writes_d_double])(ctx, (frame[1].o), ((jdouble)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_flag));
	LINE_NUMBER(510);
	((func_arc_util_io_Writes_f_float) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_util_io_Writes_f_float])(ctx, (frame[1].o), ((jfloat)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_health));
	LINE_NUMBER(511);
	((func_arc_util_io_Writes_bool_boolean) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_util_io_Writes_bool_boolean])(ctx, (frame[1].o), ((jint)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_isShooting));
	LINE_NUMBER(512);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_mineTile;
	SM_mindustry_io_TypeIO_writeTile_arc_util_io_Writes_mindustry_world_Tile(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(513);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_mounts;
	SM_mindustry_io_TypeIO_writeMounts_arc_util_io_Writes_Array1_mindustry_entities_units_WeaponMount(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(514);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_plans;
	((func_arc_util_io_Writes_i_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_util_io_Writes_i_int])(ctx, sp[0].o, ((jint)((arc_struct_Queue *) NULL_CHECK(sp[1].o))->F_size));
	LINE_NUMBER(515);
	frame[2].i = (jint(0));
	}
label_11:;
	{
	jint temp0 = frame[2].i;
	sp[0].o = (jobject)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_plans;
	if (temp0 >= ((jint)((arc_struct_Queue *) NULL_CHECK(sp[0].o))->F_size)) goto label_12;
	}
	{
	LINE_NUMBER(516);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_plans;
	sp[1].o = (jobject)((func_arc_struct_Queue_get_int_R_java_lang_Object) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_struct_Queue_get_int_R_java_lang_Object])(ctx, sp[1].o, (frame[2].i));
	SM_mindustry_io_TypeIO_writePlan_arc_util_io_Writes_mindustry_entities_units_BuildPlan(ctx, sp[0].o, (checkCast(ctx, &class_mindustry_entities_units_BuildPlan, sp[1].o)));
	LINE_NUMBER(515);
	INST_IINC(2, 1);
	goto label_11;
	}
label_12:;
	{
	LINE_NUMBER(518);
	((func_arc_util_io_Writes_f_float) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_util_io_Writes_f_float])(ctx, (frame[1].o), ((jfloat)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_rotation));
	LINE_NUMBER(519);
	((func_arc_util_io_Writes_f_float) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_util_io_Writes_f_float])(ctx, (frame[1].o), ((jfloat)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_shield));
	LINE_NUMBER(520);
	((func_arc_util_io_Writes_bool_boolean) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_util_io_Writes_bool_boolean])(ctx, (frame[1].o), ((jint)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_spawnedByCore));
	LINE_NUMBER(521);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_stack;
	SM_mindustry_io_TypeIO_writeItems_arc_util_io_Writes_mindustry_type_ItemStack(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(522);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((mindustry_gen_UnitEntity *) NULL_CHECK((frame[0].o)))->F_statuses;
	((func_arc_util_io_Writes_i_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_util_io_Writes_i_int])(ctx, sp[0].o, ((jint)((arc_struct_Seq *) NULL_CHECK(sp[1].o))->F_size));
	LINE_NUMBER(523);
	frame[2].i = (jint(0));
	}
label_20:;
	{
	jint temp0 = frame[2].i;
	sp[0].o = (jobject)((mindustry_gen_UnitEntity *) NULL_CHECK((frame[0].o)))->F_statuses;
	if (temp0 >= ((jint)((arc_struct_Seq *) NULL_CHECK(sp[0].o))->F_size)) goto label_21;
	}
	{
	LINE_NUMBER(524);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((mindustry_gen_UnitEntity *) NULL_CHECK((frame[0].o)))->F_statuses;
	sp[1].o = (jobject)((func_arc_struct_Seq_get_int_R_java_lang_Object) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_struct_Seq_get_int_R_java_lang_Object])(ctx, sp[1].o, (frame[2].i));
	SM_mindustry_io_TypeIO_writeStatus_arc_util_io_Writes_mindustry_entities_units_StatusEntry(ctx, sp[0].o, (checkCast(ctx, &class_mindustry_entities_units_StatusEntry, sp[1].o)));
	LINE_NUMBER(523);
	INST_IINC(2, 1);
	goto label_20;
	}
label_21:;
	{
	LINE_NUMBER(526);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_team;
	SM_mindustry_io_TypeIO_writeTeam_arc_util_io_Writes_mindustry_game_Team(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(527);
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
	LINE_NUMBER(528);
	((func_arc_util_io_Writes_bool_boolean) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_util_io_Writes_bool_boolean])(ctx, (frame[1].o), ((jint)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_updateBuilding));
	LINE_NUMBER(529);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_vel;
	SM_mindustry_io_TypeIO_writeVec2_arc_util_io_Writes_arc_math_geom_Vec2(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(530);
	((func_arc_util_io_Writes_f_float) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_util_io_Writes_f_float])(ctx, (frame[1].o), ((jfloat)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_x));
	LINE_NUMBER(531);
	((func_arc_util_io_Writes_f_float) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_util_io_Writes_f_float])(ctx, (frame[1].o), ((jfloat)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_y));
	LINE_NUMBER(533);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_gen_UnitEntity_applyStatus_mindustry_type_StatusEffect_float_boolean(jcontext ctx, jobject self, jobject param0, jfloat param1, jbool param2) {
	NULL_CHECK(self);
	jtype frame[11];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/UnitEntity:applyStatus", 11 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].f = param1;
	frame[3].i = param2;
	{
	LINE_NUMBER(537);
	sp[0].o = frame[1].o;
	clinit_mindustry_content_StatusEffects(ctx);
	sp[1].o = (jobject)SF_mindustry_content_StatusEffects_none;
	if (sp[0].o == sp[1].o) goto label_1;
	}
	INST_ALOAD(1);
	if ((--sp)->o == nullptr) goto label_1;
	{
	jint temp0 = (jint)((func_mindustry_gen_UnitEntity_isImmune_mindustry_type_StatusEffect_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_gen_UnitEntity_isImmune_mindustry_type_StatusEffect_R_boolean])(ctx, (frame[0].o), (frame[1].o));
	if (temp0 == 0) goto label_2;
	}
label_1:;
	popStackFrame(ctx);
	INST_RETURN();
label_2:;
	{
	LINE_NUMBER(538);
	if ((frame[3].i) == 0) goto label_3;
	}
	{
	if ((floatCompare((frame[2].f), (jfloat(0)), -1)) != 0) goto label_3;
	}
	{
	LINE_NUMBER(539);
	jint temp0 = (jint)((func_mindustry_gen_UnitEntity_hasEffect_mindustry_type_StatusEffect_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_gen_UnitEntity_hasEffect_mindustry_type_StatusEffect_R_boolean])(ctx, (frame[0].o), (frame[1].o));
	if (temp0 == 0) goto label_5;
	}
	{
	((func_mindustry_gen_UnitEntity_unapply_mindustry_type_StatusEffect) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_gen_UnitEntity_unapply_mindustry_type_StatusEffect])(ctx, (frame[0].o), (frame[1].o));
	}
label_5:;
	LINE_NUMBER(540);
	popStackFrame(ctx);
	INST_RETURN();
label_3:;
	{
	LINE_NUMBER(542);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	jint temp0 = (jint)((func_mindustry_core_GameState_isCampaign_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_GameState_isCampaign_R_boolean])(ctx, sp[0].o);
	if (temp0 == 0) goto label_6;
	}
	{
	LINE_NUMBER(543);
	((func_mindustry_type_StatusEffect_unlock) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_type_StatusEffect_unlock])(ctx, (frame[1].o));
	}
label_6:;
	{
	LINE_NUMBER(545);
	sp[0].o = (jobject)((mindustry_gen_UnitEntity *) NULL_CHECK((frame[0].o)))->F_statuses;
	if (((jint)((arc_struct_Seq *) NULL_CHECK(sp[0].o))->F_size) <= 0) goto label_8;
	}
	{
	LINE_NUMBER(546);
	frame[4].i = (jint(0));
	}
label_10:;
	{
	jint temp0 = frame[4].i;
	sp[0].o = (jobject)((mindustry_gen_UnitEntity *) NULL_CHECK((frame[0].o)))->F_statuses;
	if (temp0 >= ((jint)((arc_struct_Seq *) NULL_CHECK(sp[0].o))->F_size)) goto label_8;
	}
	{
	LINE_NUMBER(547);
	sp[0].o = (jobject)((mindustry_gen_UnitEntity *) NULL_CHECK((frame[0].o)))->F_statuses;
	sp[0].o = (jobject)((func_arc_struct_Seq_get_int_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_get_int_R_java_lang_Object])(ctx, sp[0].o, (frame[4].i));
	frame[5].o = (checkCast(ctx, &class_mindustry_entities_units_StatusEntry, sp[0].o));
	LINE_NUMBER(548);
	sp[0].o = (jobject)((mindustry_entities_units_StatusEntry *) NULL_CHECK((frame[5].o)))->F_effect;
	if (sp[0].o != (frame[1].o)) goto label_13;
	}
	{
	LINE_NUMBER(549);
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
	LINE_NUMBER(550);
	((func_mindustry_type_StatusEffect_applied_mindustry_gen_Unit_float_boolean) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_type_StatusEffect_applied_mindustry_gen_Unit_float_boolean])(ctx, (frame[1].o), (frame[0].o), ((jfloat)((mindustry_entities_units_StatusEntry *) NULL_CHECK((frame[5].o)))->F_time), (jint(1)));
	LINE_NUMBER(551);
	popStackFrame(ctx);
	return;
	}
label_13:;
	{
	LINE_NUMBER(552);
	sp[0].o = (jobject)((mindustry_entities_units_StatusEntry *) NULL_CHECK((frame[5].o)))->F_effect;
	jint temp0 = (jint)((func_mindustry_type_StatusEffect_applyTransition_mindustry_gen_Unit_mindustry_type_StatusEffect_mindustry_entities_units_StatusEntry_float_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_type_StatusEffect_applyTransition_mindustry_gen_Unit_mindustry_type_StatusEffect_mindustry_entities_units_StatusEntry_float_R_boolean])(ctx, sp[0].o, (frame[0].o), (frame[1].o), (frame[5].o), (frame[2].f));
	if (temp0 == 0) goto label_19;
	}
	LINE_NUMBER(553);
	popStackFrame(ctx);
	INST_RETURN();
label_19:;
	{
	LINE_NUMBER(546);
	INST_IINC(4, 1);
	goto label_10;
	}
label_8:;
	{
	LINE_NUMBER(557);
	if (((jint)((mindustry_type_StatusEffect *) NULL_CHECK((frame[1].o)))->F_reactive) != 0) goto label_21;
	}
	{
	LINE_NUMBER(558);
	sp[0].o = ((jobject) &class_mindustry_entities_units_StatusEntry);
	{ /* InvokeDynamic */
		clinit_mindustry_gen_UnitEntity_invoke_arc_func_Prov_2(ctx);
		auto proxy = (mindustry_gen_UnitEntity_invoke_arc_func_Prov_2 *) gcAlloc(ctx, &class_mindustry_gen_UnitEntity_invoke_arc_func_Prov_2);
		sp[1].o = (jobject) proxy;
	}
	sp[0].o = (jobject)SM_arc_util_pooling_Pools_obtain_java_lang_Class_arc_func_Prov_R_java_lang_Object(ctx, sp[0].o, sp[1].o);
	frame[4].o = (checkCast(ctx, &class_mindustry_entities_units_StatusEntry, sp[0].o));
	LINE_NUMBER(559);
	((mindustry_entities_units_StatusEntry *) NULL_CHECK((frame[4].o)))->F_damageTime = (jfloat(0));
	LINE_NUMBER(560);
	sp[0].o = (jobject)((func_mindustry_entities_units_StatusEntry_set_mindustry_type_StatusEffect_float_R_mindustry_entities_units_StatusEntry) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_mindustry_entities_units_StatusEntry_set_mindustry_type_StatusEffect_float_R_mindustry_entities_units_StatusEntry])(ctx, (frame[4].o), (frame[1].o), (frame[2].f));
	LINE_NUMBER(561);
	sp[0].o = (jobject)((mindustry_gen_UnitEntity *) NULL_CHECK((frame[0].o)))->F_applied;
	((func_arc_struct_Bits_set_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Bits_set_int])(ctx, sp[0].o, ((jint)((mindustry_ctype_Content *) NULL_CHECK((frame[1].o)))->F_id));
	LINE_NUMBER(562);
	sp[0].o = (jobject)((mindustry_gen_UnitEntity *) NULL_CHECK((frame[0].o)))->F_statuses;
	sp[0].o = (jobject)((func_arc_struct_Seq_add_java_lang_Object_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_add_java_lang_Object_R_arc_struct_Seq])(ctx, sp[0].o, (frame[4].o));
	LINE_NUMBER(563);
	((func_mindustry_type_StatusEffect_applied_mindustry_gen_Unit_float_boolean) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_type_StatusEffect_applied_mindustry_gen_Unit_float_boolean])(ctx, (frame[1].o), (frame[0].o), (frame[2].f), (jint(0)));
	}
label_21:;
	LINE_NUMBER(565);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jobject M_mindustry_gen_UnitEntity_self_R_mindustry_gen_Entityc(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/UnitEntity:self", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(569);
	popStackFrame(ctx);
	return (frame[0].o);
	}

	popStackFrame(ctx);
}

jobject M_mindustry_gen_UnitEntity_as_R_java_lang_Object(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/UnitEntity:as", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(574);
	popStackFrame(ctx);
	return (frame[0].o);
	}

	popStackFrame(ctx);
}

jobject M_mindustry_gen_UnitEntity_statusColor_R_arc_graphics_Color(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[13];
	auto stack = &frame[8];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/UnitEntity:statusColor", 13 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(579);
	sp[0].o = (jobject)((mindustry_gen_UnitEntity *) NULL_CHECK((frame[0].o)))->F_statuses;
	if (((jint)((arc_struct_Seq *) NULL_CHECK(sp[0].o))->F_size) != 0) goto label_1;
	}
	{
	LINE_NUMBER(580);
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
	LINE_NUMBER(582);
	frame[1].f = (jfloat(1));
	LINE_NUMBER(583);
	frame[2].f = (jfloat(1));
	LINE_NUMBER(584);
	frame[3].f = (jfloat(1));
	LINE_NUMBER(585);
	frame[4].f = (jfloat(0));
	LINE_NUMBER(586);
	sp[0].o = (jobject)((mindustry_gen_UnitEntity *) NULL_CHECK((frame[0].o)))->F_statuses;
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
	LINE_NUMBER(587);
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
	LINE_NUMBER(588);
	jfloat temp0 = frame[1].f;
	sp[0].o = (jobject)((mindustry_entities_units_StatusEntry *) NULL_CHECK((frame[6].o)))->F_effect;
	sp[0].o = (jobject)((mindustry_type_StatusEffect *) NULL_CHECK(sp[0].o))->F_color;
	frame[1].f = (temp0 + (((jfloat)((arc_graphics_Color *) NULL_CHECK(sp[0].o))->F_r) * (frame[7].f)));
	LINE_NUMBER(589);
	jfloat temp1 = frame[2].f;
	sp[0].o = (jobject)((mindustry_entities_units_StatusEntry *) NULL_CHECK((frame[6].o)))->F_effect;
	sp[0].o = (jobject)((mindustry_type_StatusEffect *) NULL_CHECK(sp[0].o))->F_color;
	frame[2].f = (temp1 + (((jfloat)((arc_graphics_Color *) NULL_CHECK(sp[0].o))->F_g) * (frame[7].f)));
	LINE_NUMBER(590);
	jfloat temp2 = frame[3].f;
	sp[0].o = (jobject)((mindustry_entities_units_StatusEntry *) NULL_CHECK((frame[6].o)))->F_effect;
	sp[0].o = (jobject)((mindustry_type_StatusEffect *) NULL_CHECK(sp[0].o))->F_color;
	frame[3].f = (temp2 + (((jfloat)((arc_graphics_Color *) NULL_CHECK(sp[0].o))->F_b) * (frame[7].f)));
	LINE_NUMBER(591);
	frame[4].f = ((frame[4].f) + (frame[7].f));
	LINE_NUMBER(592);
	goto label_7;
	}
label_8:;
	{
	LINE_NUMBER(593);
	sp[0].o = (jobject)((mindustry_gen_UnitEntity *) NULL_CHECK((frame[0].o)))->F_statuses;
	frame[5].f = ((jfloat(((jint)((arc_struct_Seq *) NULL_CHECK(sp[0].o))->F_size))) + (frame[4].f));
	LINE_NUMBER(594);
	clinit_arc_util_Tmp(ctx);
	sp[0].o = (jobject)SF_arc_util_Tmp_c1;
	sp[0].o = (jobject)((func_arc_graphics_Color_set_float_float_float_float_R_arc_graphics_Color) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_Color_set_float_float_float_float_R_arc_graphics_Color])(ctx, sp[0].o, ((frame[1].f) / (frame[5].f)), ((frame[2].f) / (frame[5].f)), ((frame[3].f) / (frame[5].f)), (jfloat(1)));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_mindustry_gen_UnitEntity_icon_R_arc_graphics_g2d_TextureRegion(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/UnitEntity:icon", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(599);
	sp[0].o = (jobject)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_type;
	sp[0].o = (jobject)((mindustry_ctype_UnlockableContent *) NULL_CHECK(sp[0].o))->F_uiIcon;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_mindustry_gen_UnitEntity_statusBits_R_arc_struct_Bits(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/UnitEntity:statusBits", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(604);
	sp[0].o = (jobject)((mindustry_gen_UnitEntity *) NULL_CHECK((frame[0].o)))->F_applied;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jbool M_mindustry_gen_UnitEntity_acceptsItem_mindustry_type_Item_R_boolean(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/UnitEntity:acceptsItem", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(609);
	jint temp0 = (jint)((func_mindustry_gen_UnitEntity_hasItem_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_gen_UnitEntity_hasItem_R_boolean])(ctx, (frame[0].o));
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
	jint temp1 = (jint)((func_mindustry_gen_UnitEntity_itemCapacity_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_gen_UnitEntity_itemCapacity_R_int])(ctx, (frame[0].o));
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

jbool M_mindustry_gen_UnitEntity_activelyBuilding_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/UnitEntity:activelyBuilding", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(614);
	jint temp0 = (jint)((func_mindustry_gen_UnitEntity_isBuilding_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_gen_UnitEntity_isBuilding_R_boolean])(ctx, (frame[0].o));
	if (temp0 == 0) goto label_1;
	}
	{
	LINE_NUMBER(615);
	sp[0].o = (jobject)((func_mindustry_gen_UnitEntity_buildPlan_R_mindustry_entities_units_BuildPlan) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_gen_UnitEntity_buildPlan_R_mindustry_entities_units_BuildPlan])(ctx, (frame[0].o));
	frame[1].o = sp[0].o;
	LINE_NUMBER(616);
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
	sp->i = (jint)((func_mindustry_gen_UnitEntity_within_arc_math_geom_Position_float_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_gen_UnitEntity_within_arc_math_geom_Position_float_R_boolean])(ctx, sp[0].o, sp[1].o, sp[2].f);
	sp++;
	if ((--sp)->i != 0) goto label_1;
	{
	LINE_NUMBER(617);
	popStackFrame(ctx);
	return (jint(0));
	}
label_1:;
	{
	LINE_NUMBER(620);
	jint temp0 = (jint)((func_mindustry_gen_UnitEntity_isBuilding_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_gen_UnitEntity_isBuilding_R_boolean])(ctx, (frame[0].o));
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

jbool M_mindustry_gen_UnitEntity_allowCommand_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/UnitEntity:allowCommand", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(625);
	sp[0].o = (jobject)((mindustry_gen_UnitEntity *) NULL_CHECK((frame[0].o)))->F_controller;
	popStackFrame(ctx);
	return (isInstance(ctx, sp[0].o, &class_mindustry_ai_types_CommandAI));
	}

	popStackFrame(ctx);
}

jbool M_mindustry_gen_UnitEntity_canBuild_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/UnitEntity:canBuild", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(630);
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

jbool M_mindustry_gen_UnitEntity_canDrown_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/UnitEntity:canDrown", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(635);
	jint temp0 = (jint)((func_mindustry_gen_UnitEntity_isGrounded_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_gen_UnitEntity_isGrounded_R_boolean])(ctx, (frame[0].o));
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

jbool M_mindustry_gen_UnitEntity_canLand_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/UnitEntity:canLand", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(640);
	jfloat temp0 = (jfloat)((func_mindustry_gen_UnitEntity_physicSize_R_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_gen_UnitEntity_physicSize_R_float])(ctx, (frame[0].o));
	frame[1].f = temp0;
	LINE_NUMBER(641);
	jint temp1 = (jint)((func_mindustry_gen_UnitEntity_onSolid_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_gen_UnitEntity_onSolid_R_boolean])(ctx, (frame[0].o));
	if (temp1 != 0) goto label_2;
	}
	{
	jfloat temp0 = ((jfloat)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_x) - ((frame[1].f) / (jfloat(2)));
	jfloat temp1 = ((jfloat)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_y) - ((frame[1].f) / (jfloat(2)));
	jfloat temp2 = frame[1].f;
	jfloat temp3 = frame[1].f;
	{ /* InvokeDynamic */
		clinit_mindustry_gen_UnitEntity_invoke_arc_func_Boolf_10(ctx);
		auto proxy = (mindustry_gen_UnitEntity_invoke_arc_func_Boolf_10 *) gcAlloc(ctx, &class_mindustry_gen_UnitEntity_invoke_arc_func_Boolf_10);
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

jbool M_mindustry_gen_UnitEntity_canMine_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/UnitEntity:canMine", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(646);
	sp[0].o = (jobject)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_type;
	jfloat temp0 = (jfloat)((mindustry_type_UnitType *) NULL_CHECK(sp[0].o))->F_mineSpeed;
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	sp[0].o = (jobject)((mindustry_core_GameState *) NULL_CHECK(sp[0].o))->F_rules;
	sp[1].o = (jobject)((func_mindustry_gen_UnitEntity_team_R_mindustry_game_Team) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_gen_UnitEntity_team_R_mindustry_game_Team])(ctx, (frame[0].o));
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

jbool M_mindustry_gen_UnitEntity_canMine_mindustry_type_Item_R_boolean(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/UnitEntity:canMine", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(651);
	if ((frame[1].o) != nullptr) goto label_1;
	}
	INST_ICONST(0);
	popStackFrame(ctx);
	INST_IRETURN();
label_1:;
	{
	LINE_NUMBER(652);
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

jbool M_mindustry_gen_UnitEntity_canPass_int_int_R_boolean(jcontext ctx, jobject self, jint param0, jint param1) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/UnitEntity:canPass", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(657);
	sp[0].o = (jobject)((func_mindustry_gen_UnitEntity_solidity_R_mindustry_entities_EntityCollisions$SolidPred) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_gen_UnitEntity_solidity_R_mindustry_entities_EntityCollisions$SolidPred])(ctx, (frame[0].o));
	frame[3].o = sp[0].o;
	LINE_NUMBER(658);
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

jbool M_mindustry_gen_UnitEntity_canPassOn_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/UnitEntity:canPassOn", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(663);
	sp[0].o = frame[0].o;
	jint temp0 = (jint)((func_mindustry_gen_UnitEntity_tileX_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_gen_UnitEntity_tileX_R_int])(ctx, (frame[0].o));
	jint temp1 = (jint)((func_mindustry_gen_UnitEntity_tileY_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_gen_UnitEntity_tileY_R_int])(ctx, (frame[0].o));
	jint temp2 = (jint)((func_mindustry_gen_UnitEntity_canPass_int_int_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_gen_UnitEntity_canPass_int_int_R_boolean])(ctx, sp[0].o, temp0, temp1);
	popStackFrame(ctx);
	return temp2;
	}

	popStackFrame(ctx);
}

jbool M_mindustry_gen_UnitEntity_canShoot_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/UnitEntity:canShoot", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(668);
	if (((jint)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_disarmed) != 0) goto label_1;
	}
	{
	sp[0].o = (jobject)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_type;
	if (((jint)((mindustry_type_UnitType *) NULL_CHECK(sp[0].o))->F_canBoost) == 0) goto label_2;
	}
	{
	jint temp0 = (jint)((func_mindustry_gen_UnitEntity_isFlying_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_gen_UnitEntity_isFlying_R_boolean])(ctx, (frame[0].o));
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

jbool M_mindustry_gen_UnitEntity_canTarget_mindustry_gen_Teamc_R_boolean(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/UnitEntity:canTarget", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(673);
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

jbool M_mindustry_gen_UnitEntity_cheating_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/UnitEntity:cheating", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(678);
	sp[0].o = (jobject)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_team;
	sp[0].o = (jobject)((func_mindustry_game_Team_rules_R_mindustry_game_Rules$TeamRule) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_game_Team_rules_R_mindustry_game_Rules$TeamRule])(ctx, sp[0].o);
	popStackFrame(ctx);
	return ((jint)((mindustry_game_Rules$TeamRule *) NULL_CHECK(sp[0].o))->F_cheat);
	}

	popStackFrame(ctx);
}

jbool M_mindustry_gen_UnitEntity_checkTarget_boolean_boolean_R_boolean(jcontext ctx, jobject self, jbool param0, jbool param1) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/UnitEntity:checkTarget", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(683);
	jint temp0 = (jint)((func_mindustry_gen_UnitEntity_isGrounded_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_gen_UnitEntity_isGrounded_R_boolean])(ctx, (frame[0].o));
	if (temp0 == 0) goto label_1;
	}
	INST_ILOAD(2);
	if ((--sp)->i != 0) goto label_2;
label_1:;
	{
	jint temp0 = (jint)((func_mindustry_gen_UnitEntity_isFlying_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_gen_UnitEntity_isFlying_R_boolean])(ctx, (frame[0].o));
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

jbool M_mindustry_gen_UnitEntity_collides_mindustry_gen_Hitboxc_R_boolean(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/UnitEntity:collides", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(688);
	jint temp0 = (jint)((func_mindustry_gen_UnitEntity_hittable_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_gen_UnitEntity_hittable_R_boolean])(ctx, (frame[0].o));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jbool M_mindustry_gen_UnitEntity_damaged_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/UnitEntity:damaged", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(693);
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

jbool M_mindustry_gen_UnitEntity_displayable_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/UnitEntity:displayable", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(698);
	sp[0].o = (jobject)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_type;
	popStackFrame(ctx);
	return ((jint)((mindustry_type_UnitType *) NULL_CHECK(sp[0].o))->F_hoverable);
	}

	popStackFrame(ctx);
}

jbool M_mindustry_gen_UnitEntity_hasEffect_mindustry_type_StatusEffect_R_boolean(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/UnitEntity:hasEffect", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(703);
	sp[0].o = (jobject)((mindustry_gen_UnitEntity *) NULL_CHECK((frame[0].o)))->F_applied;
	jint temp0 = (jint)((func_arc_struct_Bits_get_int_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Bits_get_int_R_boolean])(ctx, sp[0].o, ((jint)((mindustry_ctype_Content *) NULL_CHECK((frame[1].o)))->F_id));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jbool M_mindustry_gen_UnitEntity_hasItem_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/UnitEntity:hasItem", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(708);
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

jbool M_mindustry_gen_UnitEntity_hasWeapons_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/UnitEntity:hasWeapons", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(713);
	sp[0].o = (jobject)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_type;
	jint temp0 = (jint)((func_mindustry_type_UnitType_hasWeapons_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_type_UnitType_hasWeapons_R_boolean])(ctx, sp[0].o);
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jbool M_mindustry_gen_UnitEntity_hittable_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/UnitEntity:hittable", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(718);
	sp[0].o = (jobject)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_type;
	jint temp0 = (jint)((func_mindustry_type_UnitType_hittable_mindustry_gen_Unit_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_type_UnitType_hittable_mindustry_gen_Unit_R_boolean])(ctx, sp[0].o, (frame[0].o));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jbool M_mindustry_gen_UnitEntity_ignoreSolids_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/UnitEntity:ignoreSolids", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(723);
	popStackFrame(ctx);
	return (jint(0));
	}

	popStackFrame(ctx);
}

jbool M_mindustry_gen_UnitEntity_inFogTo_mindustry_game_Team_R_boolean(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[13];
	auto stack = &frame[7];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/UnitEntity:inFogTo", 13 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(728);
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
	LINE_NUMBER(729);
	if ((floatCompare(((jfloat)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_hitSize), (jfloat(16.0f)), 1)) > 0) goto label_3;
	}
	{
	LINE_NUMBER(730);
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
	LINE_NUMBER(732);
	frame[2].f = (((jfloat)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_hitSize) / (jfloat(2)));
	LINE_NUMBER(733);
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
	LINE_NUMBER(734);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_fogControl;
	jint temp0 = (jint)((func_mindustry_game_FogControl_isVisible_mindustry_game_Team_float_float_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_game_FogControl_isVisible_mindustry_game_Team_float_float_R_boolean])(ctx, sp[0].o, (frame[1].o), (((jfloat)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_x) + ((jfloat(((jint)((arc_math_geom_Point2 *) NULL_CHECK((frame[6].o)))->F_x))) * (frame[2].f))), (((jfloat)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_y) + ((jfloat(((jint)((arc_math_geom_Point2 *) NULL_CHECK((frame[6].o)))->F_y))) * (frame[2].f))));
	if (temp0 == 0) goto label_11;
	}
	{
	LINE_NUMBER(735);
	popStackFrame(ctx);
	return (jint(0));
	}
label_11:;
	{
	LINE_NUMBER(733);
	INST_IINC(5, 1);
	goto label_8;
	}
label_9:;
	{
	LINE_NUMBER(739);
	popStackFrame(ctx);
	return (jint(1));
	}

	popStackFrame(ctx);
}

jbool M_mindustry_gen_UnitEntity_inRange_arc_math_geom_Position_R_boolean(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/UnitEntity:inRange", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(744);
	sp[0].o = frame[0].o;
	sp[1].o = frame[1].o;
	sp[2].o = (jobject)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_type;
	jint temp0 = (jint)((func_mindustry_gen_UnitEntity_within_arc_math_geom_Position_float_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_gen_UnitEntity_within_arc_math_geom_Position_float_R_boolean])(ctx, sp[0].o, sp[1].o, ((jfloat)((mindustry_type_UnitType *) NULL_CHECK(sp[2].o))->F_range));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jbool M_mindustry_gen_UnitEntity_isAI_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/UnitEntity:isAI", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(749);
	sp[0].o = (jobject)((mindustry_gen_UnitEntity *) NULL_CHECK((frame[0].o)))->F_controller;
	popStackFrame(ctx);
	return (isInstance(ctx, sp[0].o, &class_mindustry_entities_units_AIController));
	}

	popStackFrame(ctx);
}

jbool M_mindustry_gen_UnitEntity_isAdded_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/UnitEntity:isAdded", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(754);
	popStackFrame(ctx);
	return ((jint)((mindustry_gen_UnitEntity *) NULL_CHECK((frame[0].o)))->F_added);
	}

	popStackFrame(ctx);
}

jbool M_mindustry_gen_UnitEntity_isBoss_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/UnitEntity:isBoss", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(759);
	sp[0].o = frame[0].o;
	clinit_mindustry_content_StatusEffects(ctx);
	sp[1].o = (jobject)SF_mindustry_content_StatusEffects_boss;
	jint temp0 = (jint)((func_mindustry_gen_UnitEntity_hasEffect_mindustry_type_StatusEffect_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_gen_UnitEntity_hasEffect_mindustry_type_StatusEffect_R_boolean])(ctx, sp[0].o, sp[1].o);
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jbool M_mindustry_gen_UnitEntity_isBuilding_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/UnitEntity:isBuilding", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(764);
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

jbool M_mindustry_gen_UnitEntity_isCommandable_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/UnitEntity:isCommandable", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(769);
	sp[0].o = (jobject)((mindustry_gen_UnitEntity *) NULL_CHECK((frame[0].o)))->F_controller;
	popStackFrame(ctx);
	return (isInstance(ctx, sp[0].o, &class_mindustry_ai_types_CommandAI));
	}

	popStackFrame(ctx);
}

jbool M_mindustry_gen_UnitEntity_isEnemy_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/UnitEntity:isEnemy", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(774);
	sp[0].o = (jobject)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_type;
	popStackFrame(ctx);
	return ((jint)((mindustry_type_UnitType *) NULL_CHECK(sp[0].o))->F_isEnemy);
	}

	popStackFrame(ctx);
}

jbool M_mindustry_gen_UnitEntity_isFlying_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/UnitEntity:isFlying", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(779);
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

jbool M_mindustry_gen_UnitEntity_isGrounded_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/UnitEntity:isGrounded", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(784);
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

jbool M_mindustry_gen_UnitEntity_isImmune_mindustry_type_StatusEffect_R_boolean(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/UnitEntity:isImmune", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(789);
	sp[0].o = (jobject)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_type;
	sp[0].o = (jobject)((mindustry_type_UnitType *) NULL_CHECK(sp[0].o))->F_immunities;
	jint temp0 = (jint)((func_arc_struct_ObjectSet_contains_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectSet_contains_java_lang_Object_R_boolean])(ctx, sp[0].o, (frame[1].o));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jbool M_mindustry_gen_UnitEntity_isLocal_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/UnitEntity:isLocal", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(794);
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

jbool M_mindustry_gen_UnitEntity_isMissile_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/UnitEntity:isMissile", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(799);
	popStackFrame(ctx);
	return (isInstance(ctx, (frame[0].o), &class_mindustry_gen_TimedKillc));
	}

	popStackFrame(ctx);
}

jbool M_mindustry_gen_UnitEntity_isPathImpassable_int_int_R_boolean(jcontext ctx, jobject self, jint param0, jint param1) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/UnitEntity:isPathImpassable", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(804);
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

jbool M_mindustry_gen_UnitEntity_isPlayer_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/UnitEntity:isPlayer", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(809);
	sp[0].o = (jobject)((mindustry_gen_UnitEntity *) NULL_CHECK((frame[0].o)))->F_controller;
	popStackFrame(ctx);
	return (isInstance(ctx, sp[0].o, &class_mindustry_gen_Player));
	}

	popStackFrame(ctx);
}

jbool M_mindustry_gen_UnitEntity_isRemote_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/UnitEntity:isRemote", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(814);
	frame[2].o = (frame[0].o);
	if ((isInstance(ctx, (frame[2].o), &class_mindustry_gen_Unitc)) == 0) goto label_1;
	}
	{
	frame[1].o = (checkCast(ctx, &class_mindustry_gen_Unitc, (frame[2].o)));
	jint temp0 = (jint)((func_mindustry_gen_Unitc_isPlayer_R_boolean) resolveInterfaceMethod(ctx, &class_mindustry_gen_Unitc, INDEX_mindustry_gen_Unitc_isPlayer_R_boolean, (frame[1].o)))(ctx, (frame[1].o));
	if (temp0 == 0) goto label_1;
	}
	{
	jint temp0 = (jint)((func_mindustry_gen_UnitEntity_isLocal_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_gen_UnitEntity_isLocal_R_boolean])(ctx, (frame[0].o));
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

jbool M_mindustry_gen_UnitEntity_isSyncHidden_mindustry_game_Team_R_boolean(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/UnitEntity:isSyncHidden", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(819);
	jint temp0 = (jint)((func_mindustry_gen_UnitEntity_isShooting_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_gen_UnitEntity_isShooting_R_boolean])(ctx, (frame[0].o));
	if (temp0 != 0) goto label_1;
	}
	{
	jint temp0 = (jint)((func_mindustry_gen_UnitEntity_inFogTo_mindustry_game_Team_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_gen_UnitEntity_inFogTo_mindustry_game_Team_R_boolean])(ctx, (frame[0].o), (frame[1].o));
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

jbool M_mindustry_gen_UnitEntity_isValid_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/UnitEntity:isValid", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(824);
	if (((jint)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_dead) != 0) goto label_1;
	}
	{
	jint temp0 = (jint)((func_mindustry_gen_UnitEntity_isAdded_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_gen_UnitEntity_isAdded_R_boolean])(ctx, (frame[0].o));
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

jbool M_mindustry_gen_UnitEntity_killable_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/UnitEntity:killable", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(829);
	sp[0].o = (jobject)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_type;
	jint temp0 = (jint)((func_mindustry_type_UnitType_killable_mindustry_gen_Unit_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_type_UnitType_killable_mindustry_gen_Unit_R_boolean])(ctx, sp[0].o, (frame[0].o));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jbool M_mindustry_gen_UnitEntity_mining_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/UnitEntity:mining", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(834);
	sp[0].o = (jobject)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_mineTile;
	if (sp[0].o == nullptr) goto label_1;
	}
	{
	jint temp0 = (jint)((func_mindustry_gen_UnitEntity_activelyBuilding_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_gen_UnitEntity_activelyBuilding_R_boolean])(ctx, (frame[0].o));
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

jbool M_mindustry_gen_UnitEntity_moving_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/UnitEntity:moving", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(839);
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

jbool M_mindustry_gen_UnitEntity_offloadImmediately_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/UnitEntity:offloadImmediately", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(844);
	jint temp0 = (jint)((func_mindustry_gen_UnitEntity_isPlayer_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_gen_UnitEntity_isPlayer_R_boolean])(ctx, (frame[0].o));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jbool M_mindustry_gen_UnitEntity_onSolid_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/UnitEntity:onSolid", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(849);
	sp[0].o = (jobject)((func_mindustry_gen_UnitEntity_tileOn_R_mindustry_world_Tile) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_gen_UnitEntity_tileOn_R_mindustry_world_Tile])(ctx, (frame[0].o));
	frame[1].o = sp[0].o;
	LINE_NUMBER(850);
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

jbool M_mindustry_gen_UnitEntity_playerControllable_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/UnitEntity:playerControllable", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(855);
	sp[0].o = (jobject)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_type;
	if (((jint)((mindustry_type_UnitType *) NULL_CHECK(sp[0].o))->F_playerControllable) == 0) goto label_1;
	}
	{
	sp[0].o = (jobject)((mindustry_gen_UnitEntity *) NULL_CHECK((frame[0].o)))->F_controller;
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

jbool M_mindustry_gen_UnitEntity_serialize_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/UnitEntity:serialize", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(859);
	popStackFrame(ctx);
	return (jint(1));
	}

	popStackFrame(ctx);
}

jbool M_mindustry_gen_UnitEntity_shouldSkip_mindustry_entities_units_BuildPlan_mindustry_gen_Building_R_boolean(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/UnitEntity:shouldSkip", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(864);
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
	LINE_NUMBER(865);
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
		clinit_mindustry_gen_UnitEntity_invoke_arc_func_Boolf_11(ctx);
		auto proxy = (mindustry_gen_UnitEntity_invoke_arc_func_Boolf_11 *) gcAlloc(ctx, &class_mindustry_gen_UnitEntity_invoke_arc_func_Boolf_11);
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

jbool M_mindustry_gen_UnitEntity_shouldUpdateController_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/UnitEntity:shouldUpdateController", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(870);
	popStackFrame(ctx);
	return (jint(1));
	}

	popStackFrame(ctx);
}

jbool M_mindustry_gen_UnitEntity_targetable_mindustry_game_Team_R_boolean(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/UnitEntity:targetable", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(875);
	sp[0].o = (jobject)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_type;
	jint temp0 = (jint)((func_mindustry_type_UnitType_targetable_mindustry_gen_Unit_mindustry_game_Team_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_type_UnitType_targetable_mindustry_gen_Unit_mindustry_game_Team_R_boolean])(ctx, sp[0].o, (frame[0].o), (frame[1].o));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jbool M_mindustry_gen_UnitEntity_validMine_mindustry_world_Tile_R_boolean(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/UnitEntity:validMine", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(880);
	jint temp0 = (jint)((func_mindustry_gen_UnitEntity_validMine_mindustry_world_Tile_boolean_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_gen_UnitEntity_validMine_mindustry_world_Tile_boolean_R_boolean])(ctx, (frame[0].o), (frame[1].o), (jint(1)));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jbool M_mindustry_gen_UnitEntity_validMine_mindustry_world_Tile_boolean_R_boolean(jcontext ctx, jobject self, jobject param0, jbool param1) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/UnitEntity:validMine", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(885);
	if ((frame[1].o) != nullptr) goto label_1;
	}
	INST_ICONST(0);
	popStackFrame(ctx);
	INST_IRETURN();
label_1:;
	{
	LINE_NUMBER(886);
	if ((frame[2].i) == 0) goto label_2;
	}
	{
	sp[0].o = frame[0].o;
	jfloat temp0 = (jfloat)((func_mindustry_world_Tile_worldx_R_float) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_world_Tile_worldx_R_float])(ctx, (frame[1].o));
	jfloat temp1 = (jfloat)((func_mindustry_world_Tile_worldy_R_float) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_world_Tile_worldy_R_float])(ctx, (frame[1].o));
	sp[1].o = (jobject)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_type;
	jint temp2 = (jint)((func_mindustry_gen_UnitEntity_within_float_float_float_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_gen_UnitEntity_within_float_float_float_R_boolean])(ctx, sp[0].o, temp0, temp1, ((jfloat)((mindustry_type_UnitType *) NULL_CHECK(sp[1].o))->F_mineRange));
	if (temp2 != 0) goto label_2;
	}
	{
	LINE_NUMBER(887);
	popStackFrame(ctx);
	return (jint(0));
	}
label_2:;
	{
	LINE_NUMBER(889);
	sp[0].o = (jobject)((func_mindustry_gen_UnitEntity_getMineResult_mindustry_world_Tile_R_mindustry_type_Item) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_gen_UnitEntity_getMineResult_mindustry_world_Tile_R_mindustry_type_Item])(ctx, (frame[0].o), (frame[1].o));
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

jdouble M_mindustry_gen_UnitEntity_sense_mindustry_ctype_Content_R_double(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/UnitEntity:sense", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(894);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((func_mindustry_gen_UnitEntity_stack_R_mindustry_type_ItemStack) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_gen_UnitEntity_stack_R_mindustry_type_ItemStack])(ctx, (frame[0].o));
	sp[1].o = (jobject)((mindustry_type_ItemStack *) NULL_CHECK(sp[1].o))->F_item;
	if (sp[0].o != sp[1].o) goto label_1;
	}
	{
	sp[0].o = (jobject)((func_mindustry_gen_UnitEntity_stack_R_mindustry_type_ItemStack) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_gen_UnitEntity_stack_R_mindustry_type_ItemStack])(ctx, (frame[0].o));
	popStackFrame(ctx);
	return (jdouble(((jint)((mindustry_type_ItemStack *) NULL_CHECK(sp[0].o))->F_amount)));
	}
label_1:;
	{
	LINE_NUMBER(895);
	if ((isInstance(ctx, (frame[1].o), &class_mindustry_type_UnitType)) == 0) goto label_2;
	}
	{
	frame[2].o = (checkCast(ctx, &class_mindustry_type_UnitType, (frame[1].o)));
	LINE_NUMBER(896);
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
		clinit_mindustry_gen_UnitEntity_invoke_arc_func_Boolf_12(ctx);
		auto proxy = (mindustry_gen_UnitEntity_invoke_arc_func_Boolf_12 *) gcAlloc(ctx, &class_mindustry_gen_UnitEntity_invoke_arc_func_Boolf_12);
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
	LINE_NUMBER(898);
	if ((isInstance(ctx, (frame[1].o), &class_mindustry_world_Block)) == 0) goto label_9;
	}
	{
	frame[2].o = (checkCast(ctx, &class_mindustry_world_Block, (frame[1].o)));
	LINE_NUMBER(899);
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
		clinit_mindustry_gen_UnitEntity_invoke_arc_func_Boolf_13(ctx);
		auto proxy = (mindustry_gen_UnitEntity_invoke_arc_func_Boolf_13 *) gcAlloc(ctx, &class_mindustry_gen_UnitEntity_invoke_arc_func_Boolf_13);
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
	LINE_NUMBER(901);
	if ((isInstance(ctx, (frame[1].o), &class_mindustry_type_StatusEffect)) == 0) goto label_16;
	}
	{
	frame[2].o = (checkCast(ctx, &class_mindustry_type_StatusEffect, (frame[1].o)));
	LINE_NUMBER(902);
	jint temp0 = (jint)((func_mindustry_gen_UnitEntity_hasEffect_mindustry_type_StatusEffect_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_gen_UnitEntity_hasEffect_mindustry_type_StatusEffect_R_boolean])(ctx, (frame[0].o), (frame[2].o));
	if (temp0 == 0) goto label_18;
	}
	{
	jfloat temp0 = (jfloat)((func_mindustry_gen_UnitEntity_getDuration_mindustry_type_StatusEffect_R_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_gen_UnitEntity_getDuration_mindustry_type_StatusEffect_R_float])(ctx, (frame[0].o), (frame[2].o));
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
	LINE_NUMBER(904);
	popStackFrame(ctx);
	return (jdouble(std::numeric_limits<double>::quiet_NaN()));
	}

	popStackFrame(ctx);
}

jdouble M_mindustry_gen_UnitEntity_sense_mindustry_logic_LAccess_R_double(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/UnitEntity:sense", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(909);
	clinit_mindustry_gen_UnitEntity$1(ctx);
	sp[0].o = (jobject)SF_mindustry_gen_UnitEntity$1_$SwitchMap$mindustry$logic$LAccess;
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
	LINE_NUMBER(910);
	sp[0].o = (jobject)((func_mindustry_gen_UnitEntity_stack_R_mindustry_type_ItemStack) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_gen_UnitEntity_stack_R_mindustry_type_ItemStack])(ctx, (frame[0].o));
	jdouble temp0 = jdouble(((jint)((mindustry_type_ItemStack *) NULL_CHECK(sp[0].o))->F_amount));
	sp[0].d = temp0;
	sp += 1;
	goto label_41;
	}
label_2:;
	{
	LINE_NUMBER(911);
	sp[0].o = (jobject)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_type;
	jdouble temp0 = jdouble(((jint)((mindustry_type_UnitType *) NULL_CHECK(sp[0].o))->F_itemCapacity));
	sp[0].d = temp0;
	sp += 1;
	goto label_41;
	}
label_3:;
	{
	LINE_NUMBER(912);
	jdouble temp0 = jdouble(((jfloat)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_rotation));
	sp[0].d = temp0;
	sp += 1;
	goto label_41;
	}
label_4:;
	{
	LINE_NUMBER(913);
	jdouble temp0 = jdouble(((jfloat)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_health));
	sp[0].d = temp0;
	sp += 1;
	goto label_41;
	}
label_5:;
	{
	LINE_NUMBER(914);
	jdouble temp0 = jdouble(((jfloat)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_shield));
	sp[0].d = temp0;
	sp += 1;
	goto label_41;
	}
label_6:;
	{
	LINE_NUMBER(915);
	jdouble temp0 = jdouble(((jfloat)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_maxHealth));
	sp[0].d = temp0;
	sp += 1;
	goto label_41;
	}
label_7:;
	{
	LINE_NUMBER(916);
	jint temp0 = (jint)((func_mindustry_gen_UnitEntity_isFlying_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_gen_UnitEntity_isFlying_R_boolean])(ctx, (frame[0].o));
	if (temp0 == 0) goto label_42;
	}
	INST_DCONST(1);
	goto label_41;
label_42:;
	INST_DCONST(0);
	goto label_41;
label_8:;
	{
	LINE_NUMBER(917);
	jfloat temp0 = (jfloat)SM_mindustry_core_World_conv_float_R_float(ctx, ((jfloat)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_x));
	jdouble temp1 = jdouble(temp0);
	sp[0].d = temp1;
	sp += 1;
	goto label_41;
	}
label_9:;
	{
	LINE_NUMBER(918);
	jfloat temp0 = (jfloat)SM_mindustry_core_World_conv_float_R_float(ctx, ((jfloat)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_y));
	jdouble temp1 = jdouble(temp0);
	sp[0].d = temp1;
	sp += 1;
	goto label_41;
	}
label_10:;
	{
	LINE_NUMBER(919);
	sp[0].o = (jobject)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_vel;
	jdouble temp0 = jdouble(((((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK(sp[0].o))->F_x) * (jfloat(60.0f))) / (jfloat(8.0f))));
	sp[0].d = temp0;
	sp += 1;
	goto label_41;
	}
label_11:;
	{
	LINE_NUMBER(920);
	sp[0].o = (jobject)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_vel;
	jdouble temp0 = jdouble(((((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK(sp[0].o))->F_y) * (jfloat(60.0f))) / (jfloat(8.0f))));
	sp[0].d = temp0;
	sp += 1;
	goto label_41;
	}
label_12:;
	{
	LINE_NUMBER(921);
	if (((jint)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_dead) != 0) goto label_43;
	}
	{
	jint temp0 = (jint)((func_mindustry_gen_UnitEntity_isAdded_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_gen_UnitEntity_isAdded_R_boolean])(ctx, (frame[0].o));
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
	LINE_NUMBER(922);
	sp[0].o = (jobject)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_team;
	jdouble temp0 = jdouble(((jint)((mindustry_game_Team *) NULL_CHECK(sp[0].o))->F_id));
	sp[0].d = temp0;
	sp += 1;
	goto label_41;
	}
label_14:;
	{
	LINE_NUMBER(923);
	jint temp0 = (jint)((func_mindustry_gen_UnitEntity_isShooting_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_gen_UnitEntity_isShooting_R_boolean])(ctx, (frame[0].o));
	if (temp0 == 0) goto label_45;
	}
	INST_DCONST(1);
	goto label_41;
label_45:;
	INST_DCONST(0);
	goto label_41;
label_15:;
	{
	LINE_NUMBER(924);
	sp[0].o = (jobject)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_type;
	if (((jint)((mindustry_type_UnitType *) NULL_CHECK(sp[0].o))->F_canBoost) == 0) goto label_46;
	}
	{
	jint temp0 = (jint)((func_mindustry_gen_UnitEntity_isFlying_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_gen_UnitEntity_isFlying_R_boolean])(ctx, (frame[0].o));
	if (temp0 == 0) goto label_46;
	}
	INST_DCONST(1);
	goto label_41;
label_46:;
	INST_DCONST(0);
	goto label_41;
label_16:;
	{
	LINE_NUMBER(925);
	jfloat temp0 = (jfloat)((func_mindustry_gen_UnitEntity_range_R_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_gen_UnitEntity_range_R_float])(ctx, (frame[0].o));
	jdouble temp1 = jdouble((temp0 / (jfloat(8.0f))));
	sp[0].d = temp1;
	sp += 1;
	goto label_41;
	}
label_17:;
	{
	LINE_NUMBER(926);
	jfloat temp0 = (jfloat)((func_mindustry_gen_UnitEntity_aimX_R_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_gen_UnitEntity_aimX_R_float])(ctx, (frame[0].o));
	jfloat temp1 = (jfloat)SM_mindustry_core_World_conv_float_R_float(ctx, temp0);
	jdouble temp2 = jdouble(temp1);
	sp[0].d = temp2;
	sp += 1;
	goto label_41;
	}
label_18:;
	{
	LINE_NUMBER(927);
	jfloat temp0 = (jfloat)((func_mindustry_gen_UnitEntity_aimY_R_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_gen_UnitEntity_aimY_R_float])(ctx, (frame[0].o));
	jfloat temp1 = (jfloat)SM_mindustry_core_World_conv_float_R_float(ctx, temp0);
	jdouble temp2 = jdouble(temp1);
	sp[0].d = temp2;
	sp += 1;
	goto label_41;
	}
label_19:;
	{
	LINE_NUMBER(928);
	sp[0].o = (jobject)((mindustry_gen_UnitEntity *) NULL_CHECK((frame[0].o)))->F_controller;
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
	LINE_NUMBER(929);
	sp[0].o = (jobject)((mindustry_gen_UnitEntity *) NULL_CHECK((frame[0].o)))->F_controller;
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
	LINE_NUMBER(930);
	sp[0].o = (jobject)((mindustry_gen_UnitEntity *) NULL_CHECK((frame[0].o)))->F_controller;
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
	LINE_NUMBER(931);
	sp[0].o = (jobject)((mindustry_gen_UnitEntity *) NULL_CHECK((frame[0].o)))->F_controller;
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
	LINE_NUMBER(932);
	jint temp0 = (jint)((func_mindustry_gen_UnitEntity_mining_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_gen_UnitEntity_mining_R_boolean])(ctx, (frame[0].o));
	if (temp0 == 0) goto label_67;
	}
	INST_DCONST(1);
	goto label_41;
label_67:;
	INST_DCONST(0);
	goto label_41;
label_24:;
	{
	LINE_NUMBER(933);
	jint temp0 = (jint)((func_mindustry_gen_UnitEntity_mining_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_gen_UnitEntity_mining_R_boolean])(ctx, (frame[0].o));
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
	LINE_NUMBER(934);
	jint temp0 = (jint)((func_mindustry_gen_UnitEntity_mining_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_gen_UnitEntity_mining_R_boolean])(ctx, (frame[0].o));
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
	LINE_NUMBER(935);
	jint temp0 = (jint)((func_mindustry_gen_UnitEntity_isBuilding_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_gen_UnitEntity_isBuilding_R_boolean])(ctx, (frame[0].o));
	if (temp0 == 0) goto label_70;
	}
	{
	sp[0].o = (jobject)((func_mindustry_gen_UnitEntity_buildPlan_R_mindustry_entities_units_BuildPlan) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_gen_UnitEntity_buildPlan_R_mindustry_entities_units_BuildPlan])(ctx, (frame[0].o));
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
	LINE_NUMBER(936);
	jint temp0 = (jint)((func_mindustry_gen_UnitEntity_isBuilding_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_gen_UnitEntity_isBuilding_R_boolean])(ctx, (frame[0].o));
	if (temp0 == 0) goto label_71;
	}
	{
	sp[0].o = (jobject)((func_mindustry_gen_UnitEntity_buildPlan_R_mindustry_entities_units_BuildPlan) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_gen_UnitEntity_buildPlan_R_mindustry_entities_units_BuildPlan])(ctx, (frame[0].o));
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
	LINE_NUMBER(937);
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
	LINE_NUMBER(938);
	jdouble temp0 = (jdouble)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_flag;
	sp[0].d = temp0;
	sp += 1;
	goto label_41;
	}
label_30:;
	{
	LINE_NUMBER(939);
	sp[0].o = (jobject)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_type;
	jdouble temp0 = jdouble((((((jfloat)((mindustry_type_UnitType *) NULL_CHECK(sp[0].o))->F_speed) * (jfloat(60.0f))) / (jfloat(8.0f))) * ((jfloat)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_speedMultiplier)));
	sp[0].d = temp0;
	sp += 1;
	goto label_41;
	}
label_31:;
	{
	LINE_NUMBER(940);
	jint temp0 = (jint)((func_mindustry_gen_UnitEntity_isValid_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_gen_UnitEntity_isValid_R_boolean])(ctx, (frame[0].o));
	if (temp0 != 0) goto label_73;
	}
	INST_ICONST(0);
	goto label_74;
label_73:;
	{
	sp[0].o = (jobject)((mindustry_gen_UnitEntity *) NULL_CHECK((frame[0].o)))->F_controller;
	if ((isInstance(ctx, sp[0].o, &class_mindustry_ai_types_LogicAI)) == 0) goto label_75;
	}
	INST_ICONST(1);
	goto label_74;
label_75:;
	{
	sp[0].o = (jobject)((mindustry_gen_UnitEntity *) NULL_CHECK((frame[0].o)))->F_controller;
	if ((isInstance(ctx, sp[0].o, &class_mindustry_gen_Player)) == 0) goto label_76;
	}
	INST_ICONST(2);
	goto label_74;
label_76:;
	{
	sp[0].o = (jobject)((mindustry_gen_UnitEntity *) NULL_CHECK((frame[0].o)))->F_controller;
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
	LINE_NUMBER(941);
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
	LINE_NUMBER(942);
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
	LINE_NUMBER(943);
	sp[0].o = (jobject)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_type;
	jdouble temp0 = jdouble((((jfloat)((mindustry_type_UnitType *) NULL_CHECK(sp[0].o))->F_payloadCapacity) / (jfloat(64.0f))));
	sp[0].d = temp0;
	sp += 1;
	goto label_41;
	}
label_35:;
	{
	LINE_NUMBER(944);
	jdouble temp0 = jdouble((((jfloat)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_hitSize) / (jfloat(8.0f))));
	sp[0].d = temp0;
	sp += 1;
	goto label_41;
	}
label_36:;
	{
	LINE_NUMBER(945);
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
	LINE_NUMBER(946);
	sp[0].o = (jobject)((mindustry_gen_UnitEntity *) NULL_CHECK((frame[0].o)))->F_controller;
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
	LINE_NUMBER(947);
	sp[0].o = (jobject)((mindustry_gen_UnitEntity *) NULL_CHECK((frame[0].o)))->F_controller;
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
	LINE_NUMBER(948);
	sp[0].o = (jobject)((mindustry_gen_UnitEntity *) NULL_CHECK((frame[0].o)))->F_controller;
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
	LINE_NUMBER(949);
	(sp++)->d = jdouble(std::numeric_limits<double>::quiet_NaN());
label_41:;
	LINE_NUMBER(909);
	popStackFrame(ctx);
	INST_DRETURN();

	popStackFrame(ctx);
}

jfloat M_mindustry_gen_UnitEntity_ammof_R_float(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/UnitEntity:ammof", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(955);
	popStackFrame(ctx);
	return (jfloat(1));
	}

	popStackFrame(ctx);
}

jfloat M_mindustry_gen_UnitEntity_bounds_R_float(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/UnitEntity:bounds", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(960);
	popStackFrame(ctx);
	return (((jfloat)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_hitSize) * (jfloat(2)));
	}

	popStackFrame(ctx);
}

jfloat M_mindustry_gen_UnitEntity_clipSize_R_float(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/UnitEntity:clipSize", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(965);
	jint temp0 = (jint)((func_mindustry_gen_UnitEntity_isBuilding_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_gen_UnitEntity_isBuilding_R_boolean])(ctx, (frame[0].o));
	if (temp0 == 0) goto label_1;
	}
	{
	LINE_NUMBER(966);
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
	LINE_NUMBER(968);
	jint temp0 = (jint)((func_mindustry_gen_UnitEntity_mining_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_gen_UnitEntity_mining_R_boolean])(ctx, (frame[0].o));
	if (temp0 == 0) goto label_5;
	}
	{
	LINE_NUMBER(969);
	sp[0].o = (jobject)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_type;
	jfloat temp0 = (jfloat)((mindustry_type_UnitType *) NULL_CHECK(sp[0].o))->F_clipSize;
	sp[0].o = (jobject)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_type;
	popStackFrame(ctx);
	return (temp0 + ((jfloat)((mindustry_type_UnitType *) NULL_CHECK(sp[0].o))->F_mineRange));
	}
label_5:;
	{
	LINE_NUMBER(971);
	sp[0].o = (jobject)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_type;
	popStackFrame(ctx);
	return ((jfloat)((mindustry_type_UnitType *) NULL_CHECK(sp[0].o))->F_clipSize);
	}

	popStackFrame(ctx);
}

jfloat M_mindustry_gen_UnitEntity_deltaAngle_R_float(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/UnitEntity:deltaAngle", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(976);
	jfloat temp0 = (jfloat)SM_arc_math_Mathf_angle_float_float_R_float(ctx, ((jfloat)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_deltaX), ((jfloat)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_deltaY));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jfloat M_mindustry_gen_UnitEntity_deltaLen_R_float(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/UnitEntity:deltaLen", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(981);
	jfloat temp0 = (jfloat)SM_arc_math_Mathf_len_float_float_R_float(ctx, ((jfloat)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_deltaX), ((jfloat)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_deltaY));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jfloat M_mindustry_gen_UnitEntity_floorSpeedMultiplier_R_float(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/UnitEntity:floorSpeedMultiplier", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(986);
	jint temp0 = (jint)((func_mindustry_gen_UnitEntity_isFlying_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_gen_UnitEntity_isFlying_R_boolean])(ctx, (frame[0].o));
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
	sp->o = (jobject)((func_mindustry_gen_UnitEntity_floorOn_R_mindustry_world_blocks_environment_Floor) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_gen_UnitEntity_floorOn_R_mindustry_world_blocks_environment_Floor])(ctx, sp[0].o);
	sp++;
label_3:;
	{
	sp -= 1;
	frame[1].o = sp[0].o;
	LINE_NUMBER(987);
	jdouble temp0 = jdouble(((jfloat)((mindustry_world_blocks_environment_Floor *) NULL_CHECK((frame[1].o)))->F_speedMultiplier));
	sp[0].o = (jobject)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_type;
	jdouble temp1 = (jdouble)SM_java_lang_Math_pow_double_double_R_double(ctx, temp0, (jdouble(((jfloat)((mindustry_type_UnitType *) NULL_CHECK(sp[0].o))->F_floorMultiplier))));
	popStackFrame(ctx);
	return ((jfloat(temp1)) * ((jfloat)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_speedMultiplier));
	}

	popStackFrame(ctx);
}

jfloat M_mindustry_gen_UnitEntity_getDuration_mindustry_type_StatusEffect_R_float(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/UnitEntity:getDuration", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(992);
	sp[0].o = (jobject)((mindustry_gen_UnitEntity *) NULL_CHECK((frame[0].o)))->F_statuses;
	{ /* InvokeDynamic */
		clinit_mindustry_gen_UnitEntity_invoke_arc_func_Boolf_14(ctx);
		auto proxy = (mindustry_gen_UnitEntity_invoke_arc_func_Boolf_14 *) gcAlloc(ctx, &class_mindustry_gen_UnitEntity_invoke_arc_func_Boolf_14);
		proxy->F_field0 = (jref) (frame[1].o);
		sp[1].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_struct_Seq_find_arc_func_Boolf_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_find_arc_func_Boolf_R_java_lang_Object])(ctx, sp[0].o, sp[1].o);
	frame[2].o = (checkCast(ctx, &class_mindustry_entities_units_StatusEntry, sp[0].o));
	LINE_NUMBER(993);
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

jfloat M_mindustry_gen_UnitEntity_getX_R_float(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/UnitEntity:getX", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(998);
	popStackFrame(ctx);
	return ((jfloat)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_x);
	}

	popStackFrame(ctx);
}

jfloat M_mindustry_gen_UnitEntity_getY_R_float(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/UnitEntity:getY", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(1003);
	popStackFrame(ctx);
	return ((jfloat)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_y);
	}

	popStackFrame(ctx);
}

jfloat M_mindustry_gen_UnitEntity_healthf_R_float(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/UnitEntity:healthf", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(1008);
	popStackFrame(ctx);
	return (((jfloat)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_health) / ((jfloat)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_maxHealth));
	}

	popStackFrame(ctx);
}

jfloat M_mindustry_gen_UnitEntity_hitSize_R_float(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/UnitEntity:hitSize", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(1013);
	popStackFrame(ctx);
	return ((jfloat)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_hitSize);
	}

	popStackFrame(ctx);
}

jfloat M_mindustry_gen_UnitEntity_mass_R_float(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/UnitEntity:mass", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(1018);
	popStackFrame(ctx);
	return ((((jfloat)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_hitSize) * ((jfloat)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_hitSize)) * (jfloat(3.1415927f)));
	}

	popStackFrame(ctx);
}

jfloat M_mindustry_gen_UnitEntity_physicSize_R_float(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/UnitEntity:physicSize", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(1023);
	popStackFrame(ctx);
	return (((jfloat)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_hitSize) * (jfloat(0.7f)));
	}

	popStackFrame(ctx);
}

jfloat M_mindustry_gen_UnitEntity_prefRotation_R_float(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/UnitEntity:prefRotation", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(1028);
	jint temp0 = (jint)((func_mindustry_gen_UnitEntity_activelyBuilding_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_gen_UnitEntity_activelyBuilding_R_boolean])(ctx, (frame[0].o));
	if (temp0 == 0) goto label_1;
	}
	{
	sp[0].o = (jobject)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_type;
	if (((jint)((mindustry_type_UnitType *) NULL_CHECK(sp[0].o))->F_rotateToBuilding) == 0) goto label_1;
	}
	{
	LINE_NUMBER(1029);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((func_mindustry_gen_UnitEntity_buildPlan_R_mindustry_entities_units_BuildPlan) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_gen_UnitEntity_buildPlan_R_mindustry_entities_units_BuildPlan])(ctx, (frame[0].o));
	jfloat temp0 = (jfloat)((func_mindustry_gen_UnitEntity_angleTo_arc_math_geom_Position_R_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_gen_UnitEntity_angleTo_arc_math_geom_Position_R_float])(ctx, sp[0].o, sp[1].o);
	popStackFrame(ctx);
	return temp0;
	}
label_1:;
	{
	LINE_NUMBER(1030);
	sp[0].o = (jobject)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_mineTile;
	if (sp[0].o == nullptr) goto label_3;
	}
	{
	LINE_NUMBER(1031);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_mineTile;
	jfloat temp0 = (jfloat)((func_mindustry_gen_UnitEntity_angleTo_arc_math_geom_Position_R_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_gen_UnitEntity_angleTo_arc_math_geom_Position_R_float])(ctx, sp[0].o, sp[1].o);
	popStackFrame(ctx);
	return temp0;
	}
label_3:;
	{
	LINE_NUMBER(1032);
	jint temp0 = (jint)((func_mindustry_gen_UnitEntity_moving_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_gen_UnitEntity_moving_R_boolean])(ctx, (frame[0].o));
	if (temp0 == 0) goto label_5;
	}
	{
	sp[0].o = (jobject)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_type;
	if (((jint)((mindustry_type_UnitType *) NULL_CHECK(sp[0].o))->F_omniMovement) == 0) goto label_5;
	}
	{
	LINE_NUMBER(1033);
	sp[0].o = (jobject)((func_mindustry_gen_UnitEntity_vel_R_arc_math_geom_Vec2) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_gen_UnitEntity_vel_R_arc_math_geom_Vec2])(ctx, (frame[0].o));
	jfloat temp0 = (jfloat)((func_arc_math_geom_Vec2_angle_R_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Vec2_angle_R_float])(ctx, sp[0].o);
	popStackFrame(ctx);
	return temp0;
	}
label_5:;
	{
	LINE_NUMBER(1035);
	popStackFrame(ctx);
	return ((jfloat)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_rotation);
	}

	popStackFrame(ctx);
}

jfloat M_mindustry_gen_UnitEntity_range_R_float(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/UnitEntity:range", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(1040);
	sp[0].o = (jobject)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_type;
	popStackFrame(ctx);
	return ((jfloat)((mindustry_type_UnitType *) NULL_CHECK(sp[0].o))->F_maxRange);
	}

	popStackFrame(ctx);
}

jfloat M_mindustry_gen_UnitEntity_speed_R_float(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/UnitEntity:speed", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(1045);
	jint temp0 = (jint)((func_mindustry_gen_UnitEntity_isGrounded_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_gen_UnitEntity_isGrounded_R_boolean])(ctx, (frame[0].o));
	if (temp0 != 0) goto label_1;
	}
	{
	jint temp0 = (jint)((func_mindustry_gen_UnitEntity_isPlayer_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_gen_UnitEntity_isPlayer_R_boolean])(ctx, (frame[0].o));
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
	sp[0].o = (jobject)((func_mindustry_gen_UnitEntity_vel_R_arc_math_geom_Vec2) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_gen_UnitEntity_vel_R_arc_math_geom_Vec2])(ctx, (frame[0].o));
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
	LINE_NUMBER(1046);
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
	LINE_NUMBER(1047);
	sp[0].o = (jobject)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_type;
	jfloat temp1 = (((jfloat)((mindustry_type_UnitType *) NULL_CHECK(sp[0].o))->F_speed) * (frame[1].f)) * (frame[2].f);
	jfloat temp2 = (jfloat)((func_mindustry_gen_UnitEntity_floorSpeedMultiplier_R_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_gen_UnitEntity_floorSpeedMultiplier_R_float])(ctx, (frame[0].o));
	popStackFrame(ctx);
	return (temp1 * temp2);
	}

	popStackFrame(ctx);
}

jint M_mindustry_gen_UnitEntity_cap_R_int(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/UnitEntity:cap", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(1052);
	sp[0].o = (jobject)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_team;
	jint temp0 = (jint)SM_mindustry_entities_Units_getCap_mindustry_game_Team_R_int(ctx, sp[0].o);
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jint M_mindustry_gen_UnitEntity_collisionLayer_R_int(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/UnitEntity:collisionLayer", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(1057);
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
	jint temp0 = (jint)((func_mindustry_gen_UnitEntity_isGrounded_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_gen_UnitEntity_isGrounded_R_boolean])(ctx, (frame[0].o));
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

jint M_mindustry_gen_UnitEntity_count_R_int(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/UnitEntity:count", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(1062);
	sp[0].o = (jobject)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_team;
	sp[0].o = (jobject)((func_mindustry_game_Team_data_R_mindustry_game_Teams$TeamData) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_game_Team_data_R_mindustry_game_Teams$TeamData])(ctx, sp[0].o);
	sp[1].o = (jobject)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_type;
	jint temp0 = (jint)((func_mindustry_game_Teams$TeamData_countType_mindustry_type_UnitType_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_game_Teams$TeamData_countType_mindustry_type_UnitType_R_int])(ctx, sp[0].o, sp[1].o);
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jint M_mindustry_gen_UnitEntity_itemCapacity_R_int(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/UnitEntity:itemCapacity", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(1067);
	sp[0].o = (jobject)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_type;
	popStackFrame(ctx);
	return ((jint)((mindustry_type_UnitType *) NULL_CHECK(sp[0].o))->F_itemCapacity);
	}

	popStackFrame(ctx);
}

jint M_mindustry_gen_UnitEntity_maxAccepted_mindustry_type_Item_R_int(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/UnitEntity:maxAccepted", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(1072);
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
	jint temp0 = (jint)((func_mindustry_gen_UnitEntity_itemCapacity_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_gen_UnitEntity_itemCapacity_R_int])(ctx, (frame[0].o));
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

jint M_mindustry_gen_UnitEntity_tileX_R_int(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/UnitEntity:tileX", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(1077);
	jint temp0 = (jint)SM_mindustry_core_World_toTile_float_R_int(ctx, ((jfloat)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_x));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jint M_mindustry_gen_UnitEntity_tileY_R_int(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/UnitEntity:tileY", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(1082);
	jint temp0 = (jint)SM_mindustry_core_World_toTile_float_R_int(ctx, ((jfloat)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_y));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jobject M_mindustry_gen_UnitEntity_senseObject_mindustry_logic_LAccess_R_java_lang_Object(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/UnitEntity:senseObject", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(1087);
	clinit_mindustry_gen_UnitEntity$1(ctx);
	sp[0].o = (jobject)SF_mindustry_gen_UnitEntity$1_$SwitchMap$mindustry$logic$LAccess;
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
	LINE_NUMBER(1088);
	sp[0].o = (jobject)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_type;
	sp += 1;
	goto label_11;
	}
label_2:;
	{
	LINE_NUMBER(1089);
	sp[0].o = (jobject)((mindustry_gen_UnitEntity *) NULL_CHECK((frame[0].o)))->F_controller;
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
	LINE_NUMBER(1090);
	sp[0].o = (jobject)((func_mindustry_gen_UnitEntity_stack_R_mindustry_type_ItemStack) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_gen_UnitEntity_stack_R_mindustry_type_ItemStack])(ctx, (frame[0].o));
	if (((jint)((mindustry_type_ItemStack *) NULL_CHECK(sp[0].o))->F_amount) != 0) goto label_14;
	}
	INST_ACONST_NULL();
	goto label_11;
label_14:;
	{
	sp[0].o = (jobject)((func_mindustry_gen_UnitEntity_item_R_mindustry_type_Item) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_gen_UnitEntity_item_R_mindustry_type_Item])(ctx, (frame[0].o));
	sp += 1;
	goto label_11;
	}
label_4:;
	{
	LINE_NUMBER(1091);
	jint temp0 = (jint)((func_mindustry_gen_UnitEntity_isValid_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_gen_UnitEntity_isValid_R_boolean])(ctx, (frame[0].o));
	if (temp0 != 0) goto label_15;
	}
	INST_ACONST_NULL();
	goto label_11;
label_15:;
	{
	sp[0].o = (jobject)((mindustry_gen_UnitEntity *) NULL_CHECK((frame[0].o)))->F_controller;
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
	LINE_NUMBER(1092);
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
	LINE_NUMBER(1093);
	jint temp0 = (jint)((func_mindustry_gen_UnitEntity_isBuilding_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_gen_UnitEntity_isBuilding_R_boolean])(ctx, (frame[0].o));
	if (temp0 == 0) goto label_25;
	}
	{
	sp[0].o = (jobject)((func_mindustry_gen_UnitEntity_buildPlan_R_mindustry_entities_units_BuildPlan) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_gen_UnitEntity_buildPlan_R_mindustry_entities_units_BuildPlan])(ctx, (frame[0].o));
	if (((jint)((mindustry_entities_units_BuildPlan *) NULL_CHECK(sp[0].o))->F_breaking) != 0) goto label_25;
	}
	{
	sp[0].o = (jobject)((func_mindustry_gen_UnitEntity_buildPlan_R_mindustry_entities_units_BuildPlan) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_gen_UnitEntity_buildPlan_R_mindustry_entities_units_BuildPlan])(ctx, (frame[0].o));
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
	LINE_NUMBER(1094);
	jint temp0 = (jint)((func_mindustry_gen_UnitEntity_isBuilding_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_gen_UnitEntity_isBuilding_R_boolean])(ctx, (frame[0].o));
	if (temp0 == 0) goto label_26;
	}
	{
	sp[0].o = (jobject)((func_mindustry_gen_UnitEntity_buildPlan_R_mindustry_entities_units_BuildPlan) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_gen_UnitEntity_buildPlan_R_mindustry_entities_units_BuildPlan])(ctx, (frame[0].o));
	if (((jint)((mindustry_entities_units_BuildPlan *) NULL_CHECK(sp[0].o))->F_breaking) == 0) goto label_26;
	}
	{
	sp[0].o = (jobject)((func_mindustry_gen_UnitEntity_buildPlan_R_mindustry_entities_units_BuildPlan) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_gen_UnitEntity_buildPlan_R_mindustry_entities_units_BuildPlan])(ctx, (frame[0].o));
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
	LINE_NUMBER(1095);
	sp[0].o = (jobject)((mindustry_gen_UnitEntity *) NULL_CHECK((frame[0].o)))->F_controller;
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
	LINE_NUMBER(1096);
	sp[0].o = (jobject)((mindustry_gen_UnitEntity *) NULL_CHECK((frame[0].o)))->F_controller;
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
	LINE_NUMBER(1097);
	clinit_mindustry_gen_UnitEntity(ctx);
	(sp++)->o = SF_mindustry_logic_Senseable_noSensed;
label_11:;
	LINE_NUMBER(1087);
	popStackFrame(ctx);
	INST_ARETURN();

	popStackFrame(ctx);
}

jobject M_mindustry_gen_UnitEntity_toString_R_java_lang_String(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/UnitEntity:toString", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(1103);
	jint temp0 = (jint)((func_mindustry_gen_UnitEntity_id_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_gen_UnitEntity_id_R_int])(ctx, (frame[0].o));
	sp[0].o = (jobject)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_type;
	sp[0].o = (jobject)SM_java_lang_String_valueOf_java_lang_Object_R_java_lang_String(ctx, sp[0].o);
	sp[0].o = (jobject)concatStringsRecipe(ctx, u8"Unit#\u0001:\u0001 (\u0001, \u0001)"_j.string, 4, boxInteger(ctx, temp0), sp[0].o, boxFloat(ctx, ((jfloat)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_x)), boxFloat(ctx, ((jfloat)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_y)));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_mindustry_gen_UnitEntity_command_R_mindustry_ai_types_CommandAI(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/UnitEntity:command", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(1108);
	sp[0].o = (jobject)((mindustry_gen_UnitEntity *) NULL_CHECK((frame[0].o)))->F_controller;
	frame[2].o = sp[0].o;
	if ((isInstance(ctx, (frame[2].o), &class_mindustry_ai_types_CommandAI)) == 0) goto label_1;
	}
	{
	frame[1].o = (checkCast(ctx, &class_mindustry_ai_types_CommandAI, (frame[2].o)));
	LINE_NUMBER(1109);
	popStackFrame(ctx);
	return (frame[1].o);
	}
label_1:;
	{
	LINE_NUMBER(1111);
	clinit_java_lang_IllegalArgumentException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IllegalArgumentException);
	init_java_lang_IllegalArgumentException_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"Unit cannot be commanded - check isCommandable() first."_j))));
	throwException(ctx, sp[0].o);	}

	popStackFrame(ctx);
}

jobject M_mindustry_gen_UnitEntity_applyDynamicStatus_R_mindustry_entities_units_StatusEntry(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/UnitEntity:applyDynamicStatus", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(1117);
	sp[0].o = frame[0].o;
	clinit_mindustry_content_StatusEffects(ctx);
	sp[1].o = (jobject)SF_mindustry_content_StatusEffects_dynamic;
	jint temp0 = (jint)((func_mindustry_gen_UnitEntity_hasEffect_mindustry_type_StatusEffect_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_gen_UnitEntity_hasEffect_mindustry_type_StatusEffect_R_boolean])(ctx, sp[0].o, sp[1].o);
	if (temp0 == 0) goto label_1;
	}
	{
	LINE_NUMBER(1118);
	sp[0].o = (jobject)((mindustry_gen_UnitEntity *) NULL_CHECK((frame[0].o)))->F_statuses;
	{ /* InvokeDynamic */
		clinit_mindustry_gen_UnitEntity_invoke_arc_func_Boolf_15(ctx);
		auto proxy = (mindustry_gen_UnitEntity_invoke_arc_func_Boolf_15 *) gcAlloc(ctx, &class_mindustry_gen_UnitEntity_invoke_arc_func_Boolf_15);
		sp[1].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_struct_Seq_find_arc_func_Boolf_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_find_arc_func_Boolf_R_java_lang_Object])(ctx, sp[0].o, sp[1].o);
	frame[1].o = (checkCast(ctx, &class_mindustry_entities_units_StatusEntry, sp[0].o));
	LINE_NUMBER(1119);
	if ((frame[1].o) == nullptr) goto label_1;
	}
	INST_ALOAD(1);
	popStackFrame(ctx);
	INST_ARETURN();
label_1:;
	{
	LINE_NUMBER(1121);
	sp[0].o = ((jobject) &class_mindustry_entities_units_StatusEntry);
	{ /* InvokeDynamic */
		clinit_mindustry_gen_UnitEntity_invoke_arc_func_Prov_3(ctx);
		auto proxy = (mindustry_gen_UnitEntity_invoke_arc_func_Prov_3 *) gcAlloc(ctx, &class_mindustry_gen_UnitEntity_invoke_arc_func_Prov_3);
		sp[1].o = (jobject) proxy;
	}
	sp[0].o = (jobject)SM_arc_util_pooling_Pools_obtain_java_lang_Class_arc_func_Prov_R_java_lang_Object(ctx, sp[0].o, sp[1].o);
	frame[1].o = (checkCast(ctx, &class_mindustry_entities_units_StatusEntry, sp[0].o));
	LINE_NUMBER(1122);
	sp[0].o = frame[1].o;
	clinit_mindustry_content_StatusEffects(ctx);
	sp[1].o = (jobject)SF_mindustry_content_StatusEffects_dynamic;
	sp[0].o = (jobject)((func_mindustry_entities_units_StatusEntry_set_mindustry_type_StatusEffect_float_R_mindustry_entities_units_StatusEntry) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_entities_units_StatusEntry_set_mindustry_type_StatusEffect_float_R_mindustry_entities_units_StatusEntry])(ctx, sp[0].o, sp[1].o, (jfloat(std::numeric_limits<float>::infinity())));
	LINE_NUMBER(1123);
	sp[0].o = (jobject)((mindustry_gen_UnitEntity *) NULL_CHECK((frame[0].o)))->F_statuses;
	sp[0].o = (jobject)((func_arc_struct_Seq_add_java_lang_Object_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_add_java_lang_Object_R_arc_struct_Seq])(ctx, sp[0].o, (frame[1].o));
	LINE_NUMBER(1124);
	sp[0].o = (jobject)((mindustry_gen_UnitEntity *) NULL_CHECK((frame[0].o)))->F_applied;
	clinit_mindustry_content_StatusEffects(ctx);
	sp[1].o = (jobject)SF_mindustry_content_StatusEffects_dynamic;
	((func_arc_struct_Bits_set_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Bits_set_int])(ctx, sp[0].o, ((jint)((mindustry_ctype_Content *) NULL_CHECK(sp[1].o))->F_id));
	LINE_NUMBER(1125);
	sp[0].o = (jobject)((mindustry_entities_units_StatusEntry *) NULL_CHECK((frame[1].o)))->F_effect;
	((func_mindustry_type_StatusEffect_applied_mindustry_gen_Unit_float_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_type_StatusEffect_applied_mindustry_gen_Unit_float_boolean])(ctx, sp[0].o, (frame[0].o), ((jfloat)((mindustry_entities_units_StatusEntry *) NULL_CHECK((frame[1].o)))->F_time), (jint(0)));
	LINE_NUMBER(1126);
	popStackFrame(ctx);
	return (frame[1].o);
	}

	popStackFrame(ctx);
}

jobject M_mindustry_gen_UnitEntity_controller_R_mindustry_entities_units_UnitController(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/UnitEntity:controller", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(1131);
	sp[0].o = (jobject)((mindustry_gen_UnitEntity *) NULL_CHECK((frame[0].o)))->F_controller;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_mindustry_gen_UnitEntity_item_R_mindustry_type_Item(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/UnitEntity:item", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(1136);
	sp[0].o = (jobject)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_stack;
	sp[0].o = (jobject)((mindustry_type_ItemStack *) NULL_CHECK(sp[0].o))->F_item;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_mindustry_gen_UnitEntity_blockOn_R_mindustry_world_Block(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/UnitEntity:blockOn", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(1141);
	sp[0].o = (jobject)((func_mindustry_gen_UnitEntity_tileOn_R_mindustry_world_Tile) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_gen_UnitEntity_tileOn_R_mindustry_world_Tile])(ctx, (frame[0].o));
	frame[1].o = sp[0].o;
	LINE_NUMBER(1142);
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

jobject M_mindustry_gen_UnitEntity_floorOn_R_mindustry_world_blocks_environment_Floor(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/UnitEntity:floorOn", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(1147);
	sp[0].o = (jobject)((func_mindustry_gen_UnitEntity_tileOn_R_mindustry_world_Tile) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_gen_UnitEntity_tileOn_R_mindustry_world_Tile])(ctx, (frame[0].o));
	frame[1].o = sp[0].o;
	LINE_NUMBER(1148);
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

jobject SM_mindustry_gen_UnitEntity_create_R_mindustry_gen_UnitEntity(jcontext ctx) {
	jtype frame[2];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/UnitEntity:create", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_gen_UnitEntity(ctx);
	{
	LINE_NUMBER(1152);
	clinit_mindustry_gen_UnitEntity(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_gen_UnitEntity);
	init_mindustry_gen_UnitEntity(ctx, sp[0].o);
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void M_mindustry_gen_UnitEntity_add(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/UnitEntity:add", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(1156);
	if (((jint)((mindustry_gen_UnitEntity *) NULL_CHECK((frame[0].o)))->F_added) != (jint(1))) goto label_1;
	}
	popStackFrame(ctx);
	INST_RETURN();
label_1:;
	{
	LINE_NUMBER(1157);
	sp[0].o = frame[0].o;
	clinit_mindustry_gen_Groups(ctx);
	sp[1].o = (jobject)SF_mindustry_gen_Groups_unit;
	jint temp0 = (jint)((func_mindustry_entities_EntityGroup_addIndex_mindustry_gen_Entityc_R_int) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_mindustry_entities_EntityGroup_addIndex_mindustry_gen_Entityc_R_int])(ctx, sp[1].o, (frame[0].o));
	((mindustry_gen_Unit *) NULL_CHECK(sp[0].o))->F_index__unit = temp0;
	LINE_NUMBER(1158);
	sp[0].o = frame[0].o;
	clinit_mindustry_gen_Groups(ctx);
	sp[1].o = (jobject)SF_mindustry_gen_Groups_sync;
	jint temp1 = (jint)((func_mindustry_entities_EntityGroup_addIndex_mindustry_gen_Entityc_R_int) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_mindustry_entities_EntityGroup_addIndex_mindustry_gen_Entityc_R_int])(ctx, sp[1].o, (frame[0].o));
	((mindustry_gen_Unit *) NULL_CHECK(sp[0].o))->F_index__sync = temp1;
	LINE_NUMBER(1159);
	sp[0].o = frame[0].o;
	clinit_mindustry_gen_Groups(ctx);
	sp[1].o = (jobject)SF_mindustry_gen_Groups_draw;
	jint temp2 = (jint)((func_mindustry_entities_EntityGroup_addIndex_mindustry_gen_Entityc_R_int) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_mindustry_entities_EntityGroup_addIndex_mindustry_gen_Entityc_R_int])(ctx, sp[1].o, (frame[0].o));
	((mindustry_gen_Unit *) NULL_CHECK(sp[0].o))->F_index__draw = temp2;
	LINE_NUMBER(1162);
	((mindustry_gen_UnitEntity *) NULL_CHECK((frame[0].o)))->F_added = (jint(1));
	LINE_NUMBER(1166);
	((func_mindustry_gen_UnitEntity_updateLastPosition) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_gen_UnitEntity_updateLastPosition])(ctx, (frame[0].o));
	LINE_NUMBER(1170);
	sp[0].o = (jobject)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_team;
	sp[0].o = (jobject)((func_mindustry_game_Team_data_R_mindustry_game_Teams$TeamData) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_game_Team_data_R_mindustry_game_Teams$TeamData])(ctx, sp[0].o);
	sp[1].o = (jobject)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_type;
	((func_mindustry_game_Teams$TeamData_updateCount_mindustry_type_UnitType_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_game_Teams$TeamData_updateCount_mindustry_type_UnitType_int])(ctx, sp[0].o, sp[1].o, (jint(1)));
	LINE_NUMBER(1171);
	sp[0].o = (jobject)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_type;
	if (((jint)((mindustry_type_UnitType *) NULL_CHECK(sp[0].o))->F_useUnitCap) == 0) goto label_8;
	}
	{
	jint temp0 = (jint)((func_mindustry_gen_UnitEntity_count_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_gen_UnitEntity_count_R_int])(ctx, (frame[0].o));
	jint temp1 = (jint)((func_mindustry_gen_UnitEntity_cap_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_gen_UnitEntity_cap_R_int])(ctx, (frame[0].o));
	if (temp0 <= temp1) goto label_8;
	}
	{
	if (((jint)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_spawnedByCore) != 0) goto label_8;
	}
	{
	if (((jint)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_dead) != 0) goto label_8;
	}
	{
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	sp[0].o = (jobject)((mindustry_core_GameState *) NULL_CHECK(sp[0].o))->F_rules;
	if (((jint)((mindustry_game_Rules *) NULL_CHECK(sp[0].o))->F_editor) != 0) goto label_8;
	}
	{
	LINE_NUMBER(1172);
	SM_mindustry_gen_Call_unitCapDeath_mindustry_gen_Unit(ctx, (frame[0].o));
	LINE_NUMBER(1173);
	sp[0].o = (jobject)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_team;
	sp[0].o = (jobject)((func_mindustry_game_Team_data_R_mindustry_game_Teams$TeamData) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_game_Team_data_R_mindustry_game_Teams$TeamData])(ctx, sp[0].o);
	sp[1].o = (jobject)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_type;
	((func_mindustry_game_Teams$TeamData_updateCount_mindustry_type_UnitType_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_game_Teams$TeamData_updateCount_mindustry_type_UnitType_int])(ctx, sp[0].o, sp[1].o, (jint(-1)));
	}
label_8:;
	{
	LINE_NUMBER(1175);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_unitPhysics;
	((func_mindustry_async_PhysicsProcess_add_mindustry_gen_Unit) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_async_PhysicsProcess_add_mindustry_gen_Unit])(ctx, sp[0].o, (frame[0].o));
	LINE_NUMBER(1177);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_gen_UnitEntity_addBuild_mindustry_entities_units_BuildPlan(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/UnitEntity:addBuild", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(1181);
	((func_mindustry_gen_UnitEntity_addBuild_mindustry_entities_units_BuildPlan_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_gen_UnitEntity_addBuild_mindustry_entities_units_BuildPlan_boolean])(ctx, (frame[0].o), (frame[1].o), (jint(1)));
	LINE_NUMBER(1182);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_gen_UnitEntity_addBuild_mindustry_entities_units_BuildPlan_boolean(jcontext ctx, jobject self, jobject param0, jbool param1) {
	NULL_CHECK(self);
	jtype frame[10];
	auto stack = &frame[7];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/UnitEntity:addBuild", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(1186);
	jint temp0 = (jint)((func_mindustry_gen_UnitEntity_canBuild_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_gen_UnitEntity_canBuild_R_boolean])(ctx, (frame[0].o));
	if (temp0 != 0) goto label_1;
	}
	popStackFrame(ctx);
	INST_RETURN();
label_1:;
	{
	LINE_NUMBER(1187);
	frame[3].o = (jobject(nullptr));
	LINE_NUMBER(1188);
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
	LINE_NUMBER(1189);
	if (((jint)((mindustry_entities_units_BuildPlan *) NULL_CHECK((frame[5].o)))->F_x) != ((jint)((mindustry_entities_units_BuildPlan *) NULL_CHECK((frame[1].o)))->F_x)) goto label_6;
	}
	{
	if (((jint)((mindustry_entities_units_BuildPlan *) NULL_CHECK((frame[5].o)))->F_y) != ((jint)((mindustry_entities_units_BuildPlan *) NULL_CHECK((frame[1].o)))->F_y)) goto label_6;
	}
	{
	LINE_NUMBER(1190);
	frame[3].o = (frame[5].o);
	LINE_NUMBER(1191);
	goto label_4;
	}
label_6:;
	LINE_NUMBER(1193);
	goto label_3;
label_4:;
	{
	LINE_NUMBER(1194);
	if ((frame[3].o) == nullptr) goto label_9;
	}
	{
	LINE_NUMBER(1195);
	sp[0].o = (jobject)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_plans;
	jint temp0 = (jint)((func_arc_struct_Queue_remove_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Queue_remove_java_lang_Object_R_boolean])(ctx, sp[0].o, (frame[3].o));
	}
label_9:;
	{
	LINE_NUMBER(1197);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_world;
	sp[0].o = (jobject)((func_mindustry_core_World_tile_int_int_R_mindustry_world_Tile) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_World_tile_int_int_R_mindustry_world_Tile])(ctx, sp[0].o, ((jint)((mindustry_entities_units_BuildPlan *) NULL_CHECK((frame[1].o)))->F_x), ((jint)((mindustry_entities_units_BuildPlan *) NULL_CHECK((frame[1].o)))->F_y));
	frame[4].o = sp[0].o;
	LINE_NUMBER(1198);
	if ((frame[4].o) == nullptr) goto label_12;
	}
	{
	sp[0].o = (jobject)((mindustry_world_Tile *) NULL_CHECK((frame[4].o)))->F_build;
	frame[6].o = sp[0].o;
	if ((isInstance(ctx, (frame[6].o), &class_mindustry_world_blocks_ConstructBlock$ConstructBuild)) == 0) goto label_12;
	}
	{
	frame[5].o = (checkCast(ctx, &class_mindustry_world_blocks_ConstructBlock$ConstructBuild, (frame[6].o)));
	LINE_NUMBER(1199);
	((mindustry_entities_units_BuildPlan *) NULL_CHECK((frame[1].o)))->F_progress = ((jfloat)((mindustry_world_blocks_ConstructBlock$ConstructBuild *) NULL_CHECK((frame[5].o)))->F_progress);
	}
label_12:;
	{
	LINE_NUMBER(1201);
	if ((frame[2].i) == 0) goto label_14;
	}
	{
	LINE_NUMBER(1202);
	sp[0].o = (jobject)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_plans;
	((func_arc_struct_Queue_addLast_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Queue_addLast_java_lang_Object])(ctx, sp[0].o, (frame[1].o));
	goto label_16;
	}
label_14:;
	{
	LINE_NUMBER(1204);
	sp[0].o = (jobject)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_plans;
	((func_arc_struct_Queue_addFirst_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Queue_addFirst_java_lang_Object])(ctx, sp[0].o, (frame[1].o));
	}
label_16:;
	LINE_NUMBER(1206);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_gen_UnitEntity_addItem_mindustry_type_Item(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/UnitEntity:addItem", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(1210);
	((func_mindustry_gen_UnitEntity_addItem_mindustry_type_Item_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_gen_UnitEntity_addItem_mindustry_type_Item_int])(ctx, (frame[0].o), (frame[1].o), (jint(1)));
	LINE_NUMBER(1211);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_gen_UnitEntity_addItem_mindustry_type_Item_int(jcontext ctx, jobject self, jobject param0, jint param1) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/UnitEntity:addItem", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(1215);
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
	LINE_NUMBER(1216);
	sp[0].o = (jobject)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_stack;
	((mindustry_type_ItemStack *) NULL_CHECK(sp[0].o))->F_item = (jref) (frame[1].o);
	LINE_NUMBER(1217);
	sp[0].o = (jobject)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_stack;
	sp[1].o = (jobject)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_stack;
	jint temp0 = (jint)((mindustry_type_ItemStack *) NULL_CHECK(sp[1].o))->F_amount;
	jint temp1 = jint(0);
	jint temp2 = (jint)((func_mindustry_gen_UnitEntity_itemCapacity_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_gen_UnitEntity_itemCapacity_R_int])(ctx, (frame[0].o));
	jint temp3 = (jint)SM_arc_math_Mathf_clamp_int_int_int_R_int(ctx, temp0, temp1, temp2);
	((mindustry_type_ItemStack *) NULL_CHECK(sp[0].o))->F_amount = temp3;
	LINE_NUMBER(1218);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_gen_UnitEntity_afterRead(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/UnitEntity:afterRead", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(1223);
	sp[0].o = (jobject)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_plans;
	if (sp[0].o != nullptr) goto label_1;
	}
	{
	LINE_NUMBER(1224);
	sp[0].o = frame[0].o;
	clinit_arc_struct_Queue(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_struct_Queue);
	init_arc_struct_Queue_int(ctx, sp[1].o, (jint(1)));
	((mindustry_gen_Unit *) NULL_CHECK(sp[0].o))->F_plans = (jref) sp[1].o;
	}
label_1:;
	{
	LINE_NUMBER(1232);
	((func_mindustry_gen_UnitEntity_updateLastPosition) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_gen_UnitEntity_updateLastPosition])(ctx, (frame[0].o));
	LINE_NUMBER(1236);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_type;
	((func_mindustry_gen_UnitEntity_setType_mindustry_type_UnitType) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_gen_UnitEntity_setType_mindustry_type_UnitType])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(1237);
	sp[0].o = (jobject)((mindustry_gen_UnitEntity *) NULL_CHECK((frame[0].o)))->F_controller;
	((func_mindustry_entities_units_UnitController_unit_mindustry_gen_Unit) resolveInterfaceMethod(ctx, &class_mindustry_entities_units_UnitController, INDEX_mindustry_entities_units_UnitController_unit_mindustry_gen_Unit, sp[0].o))(ctx, sp[0].o, (frame[0].o));
	LINE_NUMBER(1238);
	sp[0].o = (jobject)((mindustry_gen_UnitEntity *) NULL_CHECK((frame[0].o)))->F_controller;
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
	LINE_NUMBER(1239);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_type;
	sp[1].o = (jobject)((func_mindustry_type_UnitType_createController_mindustry_gen_Unit_R_mindustry_entities_units_UnitController) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_mindustry_type_UnitType_createController_mindustry_gen_Unit_R_mindustry_entities_units_UnitController])(ctx, sp[1].o, (frame[0].o));
	((func_mindustry_gen_UnitEntity_controller_mindustry_entities_units_UnitController) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_gen_UnitEntity_controller_mindustry_entities_units_UnitController])(ctx, sp[0].o, sp[1].o);
	}
label_8:;
	LINE_NUMBER(1242);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_gen_UnitEntity_afterReadAll(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/UnitEntity:afterReadAll", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(1250);
	sp[0].o = (jobject)((mindustry_gen_UnitEntity *) NULL_CHECK((frame[0].o)))->F_controller;
	((func_mindustry_entities_units_UnitController_afterRead_mindustry_gen_Unit) resolveInterfaceMethod(ctx, &class_mindustry_entities_units_UnitController, INDEX_mindustry_entities_units_UnitController_afterRead_mindustry_gen_Unit, sp[0].o))(ctx, sp[0].o, (frame[0].o));
	LINE_NUMBER(1252);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_gen_UnitEntity_afterSync(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/UnitEntity:afterSync", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(1260);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_type;
	((func_mindustry_gen_UnitEntity_setType_mindustry_type_UnitType) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_gen_UnitEntity_setType_mindustry_type_UnitType])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(1261);
	sp[0].o = (jobject)((mindustry_gen_UnitEntity *) NULL_CHECK((frame[0].o)))->F_controller;
	((func_mindustry_entities_units_UnitController_unit_mindustry_gen_Unit) resolveInterfaceMethod(ctx, &class_mindustry_entities_units_UnitController, INDEX_mindustry_entities_units_UnitController_unit_mindustry_gen_Unit, sp[0].o))(ctx, sp[0].o, (frame[0].o));
	LINE_NUMBER(1263);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_gen_UnitEntity_aim_arc_math_geom_Position(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/UnitEntity:aim", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(1267);
	sp[0].o = frame[0].o;
	jfloat temp0 = (jfloat)((func_arc_math_geom_Position_getX_R_float) resolveInterfaceMethod(ctx, &class_arc_math_geom_Position, INDEX_arc_math_geom_Position_getX_R_float, (frame[1].o)))(ctx, (frame[1].o));
	jfloat temp1 = (jfloat)((func_arc_math_geom_Position_getY_R_float) resolveInterfaceMethod(ctx, &class_arc_math_geom_Position, INDEX_arc_math_geom_Position_getY_R_float, (frame[1].o)))(ctx, (frame[1].o));
	((func_mindustry_gen_UnitEntity_aim_float_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_gen_UnitEntity_aim_float_float])(ctx, sp[0].o, temp0, temp1);
	LINE_NUMBER(1268);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_gen_UnitEntity_aim_float_float(jcontext ctx, jobject self, jfloat param0, jfloat param1) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/UnitEntity:aim", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	frame[2].f = param1;
	{
	LINE_NUMBER(1272);
	((func_mindustry_gen_UnitEntity_aim_float_float_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_gen_UnitEntity_aim_float_float_boolean])(ctx, (frame[0].o), (frame[1].f), (frame[2].f), (jint(0)));
	LINE_NUMBER(1273);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_gen_UnitEntity_aim_float_float_boolean(jcontext ctx, jobject self, jfloat param0, jfloat param1, jbool param2) {
	NULL_CHECK(self);
	jtype frame[11];
	auto stack = &frame[8];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/UnitEntity:aim", 11 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	frame[2].f = param1;
	frame[3].i = param2;
	{
	LINE_NUMBER(1277);
	clinit_arc_util_Tmp(ctx);
	sp[0].o = (jobject)SF_arc_util_Tmp_v1;
	sp[0].o = (jobject)((func_arc_math_geom_Vec2_set_float_float_R_arc_math_geom_Vec2) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Vec2_set_float_float_R_arc_math_geom_Vec2])(ctx, sp[0].o, (frame[1].f), (frame[2].f));
	sp[0].o = (jobject)((func_arc_math_geom_Vec2_sub_float_float_R_arc_math_geom_Vec2) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Vec2_sub_float_float_R_arc_math_geom_Vec2])(ctx, sp[0].o, ((jfloat)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_x), ((jfloat)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_y));
	LINE_NUMBER(1278);
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
	LINE_NUMBER(1279);
	clinit_arc_util_Tmp(ctx);
	sp[0].o = (jobject)SF_arc_util_Tmp_v1;
	frame[1].f = (((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK(sp[0].o))->F_x) + ((jfloat)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_x));
	LINE_NUMBER(1280);
	clinit_arc_util_Tmp(ctx);
	sp[0].o = (jobject)SF_arc_util_Tmp_v1;
	frame[2].f = (((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK(sp[0].o))->F_y) + ((jfloat)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_y));
	LINE_NUMBER(1281);
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
	LINE_NUMBER(1282);
	sp[0].o = (jobject)((mindustry_entities_units_WeaponMount *) NULL_CHECK((frame[7].o)))->F_weapon;
	if (((jint)((mindustry_type_Weapon *) NULL_CHECK(sp[0].o))->F_controllable) == 0) goto label_8;
	}
	{
	LINE_NUMBER(1283);
	if ((frame[3].i) == 0) goto label_10;
	}
	{
	((mindustry_entities_units_WeaponMount *) NULL_CHECK((frame[7].o)))->F_target = (jref) (jobject(nullptr));
	}
label_10:;
	{
	LINE_NUMBER(1284);
	((mindustry_entities_units_WeaponMount *) NULL_CHECK((frame[7].o)))->F_aimX = (frame[1].f);
	LINE_NUMBER(1285);
	((mindustry_entities_units_WeaponMount *) NULL_CHECK((frame[7].o)))->F_aimY = (frame[2].f);
	}
label_8:;
	{
	LINE_NUMBER(1281);
	INST_IINC(6, 1);
	goto label_5;
	}
label_6:;
	{
	LINE_NUMBER(1288);
	((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_aimX = (frame[1].f);
	LINE_NUMBER(1289);
	((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_aimY = (frame[2].f);
	LINE_NUMBER(1290);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_gen_UnitEntity_aimLook_arc_math_geom_Position(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/UnitEntity:aimLook", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(1294);
	((func_mindustry_gen_UnitEntity_aim_arc_math_geom_Position) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_gen_UnitEntity_aim_arc_math_geom_Position])(ctx, (frame[0].o), (frame[1].o));
	LINE_NUMBER(1295);
	((func_mindustry_gen_UnitEntity_lookAt_arc_math_geom_Position) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_gen_UnitEntity_lookAt_arc_math_geom_Position])(ctx, (frame[0].o), (frame[1].o));
	LINE_NUMBER(1296);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_gen_UnitEntity_aimLook_float_float(jcontext ctx, jobject self, jfloat param0, jfloat param1) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/UnitEntity:aimLook", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	frame[2].f = param1;
	{
	LINE_NUMBER(1300);
	((func_mindustry_gen_UnitEntity_aim_float_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_gen_UnitEntity_aim_float_float])(ctx, (frame[0].o), (frame[1].f), (frame[2].f));
	LINE_NUMBER(1301);
	((func_mindustry_gen_UnitEntity_lookAt_float_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_gen_UnitEntity_lookAt_float_float])(ctx, (frame[0].o), (frame[1].f), (frame[2].f));
	LINE_NUMBER(1302);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_gen_UnitEntity_apply_mindustry_type_StatusEffect(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/UnitEntity:apply", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(1306);
	((func_mindustry_gen_UnitEntity_apply_mindustry_type_StatusEffect_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_gen_UnitEntity_apply_mindustry_type_StatusEffect_float])(ctx, (frame[0].o), (frame[1].o), (jfloat(1)));
	LINE_NUMBER(1307);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_gen_UnitEntity_apply_mindustry_type_StatusEffect_float(jcontext ctx, jobject self, jobject param0, jfloat param1) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/UnitEntity:apply", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].f = param1;
	{
	LINE_NUMBER(1311);
	((func_mindustry_gen_UnitEntity_applyStatus_mindustry_type_StatusEffect_float_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_gen_UnitEntity_applyStatus_mindustry_type_StatusEffect_float_boolean])(ctx, (frame[0].o), (frame[1].o), (frame[2].f), (jint(0)));
	LINE_NUMBER(1312);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_gen_UnitEntity_approach_arc_math_geom_Vec2(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/UnitEntity:approach", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(1316);
	sp[0].o = (jobject)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_vel;
	sp[1].o = frame[1].o;
	sp[2].o = (jobject)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_type;
	jfloat temp0 = (jfloat)((mindustry_type_UnitType *) NULL_CHECK(sp[2].o))->F_accel;
	jfloat temp1 = (jfloat)((func_mindustry_gen_UnitEntity_speed_R_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_gen_UnitEntity_speed_R_float])(ctx, (frame[0].o));
	sp[0].o = (jobject)((func_arc_math_geom_Vec2_approachDelta_arc_math_geom_Vec2_float_R_arc_math_geom_Vec2) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Vec2_approachDelta_arc_math_geom_Vec2_float_R_arc_math_geom_Vec2])(ctx, sp[0].o, sp[1].o, (temp0 * temp1));
	LINE_NUMBER(1317);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_gen_UnitEntity_beforeWrite(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[1];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/UnitEntity:beforeWrite", 1 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	LINE_NUMBER(1321);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_gen_UnitEntity_clampHealth(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/UnitEntity:clampHealth", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(1325);
	sp[0].o = frame[0].o;
	jfloat temp0 = (jfloat)SM_java_lang_Math_min_float_float_R_float(ctx, ((jfloat)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_health), ((jfloat)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_maxHealth));
	((mindustry_gen_Unit *) NULL_CHECK(sp[0].o))->F_health = temp0;
	LINE_NUMBER(1326);
	jint temp1 = (jint)SM_java_lang_Float_isNaN_float_R_boolean(ctx, ((jfloat)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_health));
	if (temp1 == 0) goto label_2;
	}
	{
	((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_health = (jfloat(0));
	}
label_2:;
	LINE_NUMBER(1327);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_gen_UnitEntity_clearBuilding(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/UnitEntity:clearBuilding", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(1331);
	sp[0].o = (jobject)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_plans;
	((func_arc_struct_Queue_clear) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Queue_clear])(ctx, sp[0].o);
	LINE_NUMBER(1332);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_gen_UnitEntity_clearItem(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/UnitEntity:clearItem", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(1336);
	sp[0].o = (jobject)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_stack;
	((mindustry_type_ItemStack *) NULL_CHECK(sp[0].o))->F_amount = (jint(0));
	LINE_NUMBER(1337);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_gen_UnitEntity_clearStatuses(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/UnitEntity:clearStatuses", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(1341);
	sp[0].o = (jobject)((mindustry_gen_UnitEntity *) NULL_CHECK((frame[0].o)))->F_statuses;
	{ /* InvokeDynamic */
		clinit_mindustry_gen_UnitEntity_invoke_arc_func_Cons_1(ctx);
		auto proxy = (mindustry_gen_UnitEntity_invoke_arc_func_Cons_1 *) gcAlloc(ctx, &class_mindustry_gen_UnitEntity_invoke_arc_func_Cons_1);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[1].o = (jobject) proxy;
	}
	((func_arc_struct_Seq_each_arc_func_Cons) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_each_arc_func_Cons])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(1342);
	sp[0].o = (jobject)((mindustry_gen_UnitEntity *) NULL_CHECK((frame[0].o)))->F_statuses;
	sp[0].o = (jobject)((func_arc_struct_Seq_clear_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_clear_R_arc_struct_Seq])(ctx, sp[0].o);
	LINE_NUMBER(1343);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_gen_UnitEntity_collision_mindustry_gen_Hitboxc_float_float(jcontext ctx, jobject self, jobject param0, jfloat param1, jfloat param2) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/UnitEntity:collision", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].f = param1;
	frame[3].f = param2;
	{
	LINE_NUMBER(1351);
	if ((isInstance(ctx, (frame[1].o), &class_mindustry_gen_Bullet)) == 0) goto label_1;
	}
	{
	frame[4].o = (checkCast(ctx, &class_mindustry_gen_Bullet, (frame[1].o)));
	LINE_NUMBER(1352);
	sp[0].o = (jobject)((mindustry_gen_UnitEntity *) NULL_CHECK((frame[0].o)))->F_controller;
	((func_mindustry_entities_units_UnitController_hit_mindustry_gen_Bullet) resolveInterfaceMethod(ctx, &class_mindustry_entities_units_UnitController, INDEX_mindustry_entities_units_UnitController_hit_mindustry_gen_Bullet, sp[0].o))(ctx, sp[0].o, (frame[4].o));
	}
label_1:;
	LINE_NUMBER(1355);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_gen_UnitEntity_controlWeapons_boolean_boolean(jcontext ctx, jobject self, jbool param0, jbool param1) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[7];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/UnitEntity:controlWeapons", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(1359);
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
	LINE_NUMBER(1360);
	sp[0].o = (jobject)((mindustry_entities_units_WeaponMount *) NULL_CHECK((frame[6].o)))->F_weapon;
	if (((jint)((mindustry_type_Weapon *) NULL_CHECK(sp[0].o))->F_controllable) == 0) goto label_4;
	}
	{
	LINE_NUMBER(1361);
	((mindustry_entities_units_WeaponMount *) NULL_CHECK((frame[6].o)))->F_rotate = (frame[1].i);
	LINE_NUMBER(1362);
	((mindustry_entities_units_WeaponMount *) NULL_CHECK((frame[6].o)))->F_shoot = (frame[2].i);
	}
label_4:;
	{
	LINE_NUMBER(1359);
	INST_IINC(5, 1);
	goto label_1;
	}
label_2:;
	{
	LINE_NUMBER(1365);
	((mindustry_gen_UnitEntity *) NULL_CHECK((frame[0].o)))->F_isRotate = (frame[1].i);
	LINE_NUMBER(1366);
	((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_isShooting = (frame[2].i);
	LINE_NUMBER(1367);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_gen_UnitEntity_controlWeapons_boolean(jcontext ctx, jobject self, jbool param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/UnitEntity:controlWeapons", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(1371);
	((func_mindustry_gen_UnitEntity_controlWeapons_boolean_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_gen_UnitEntity_controlWeapons_boolean_boolean])(ctx, (frame[0].o), (frame[1].i), (frame[1].i));
	LINE_NUMBER(1372);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_gen_UnitEntity_controller_mindustry_entities_units_UnitController(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/UnitEntity:controller", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(1376);
	((mindustry_gen_UnitEntity *) NULL_CHECK((frame[0].o)))->F_controller = (jref) (frame[1].o);
	LINE_NUMBER(1377);
	sp[0].o = (jobject)((mindustry_gen_UnitEntity *) NULL_CHECK((frame[0].o)))->F_controller;
	sp[0].o = (jobject)((func_mindustry_entities_units_UnitController_unit_R_mindustry_gen_Unit) resolveInterfaceMethod(ctx, &class_mindustry_entities_units_UnitController, INDEX_mindustry_entities_units_UnitController_unit_R_mindustry_gen_Unit, sp[0].o))(ctx, sp[0].o);
	if (sp[0].o == (frame[0].o)) goto label_2;
	}
	{
	sp[0].o = (jobject)((mindustry_gen_UnitEntity *) NULL_CHECK((frame[0].o)))->F_controller;
	((func_mindustry_entities_units_UnitController_unit_mindustry_gen_Unit) resolveInterfaceMethod(ctx, &class_mindustry_entities_units_UnitController, INDEX_mindustry_entities_units_UnitController_unit_mindustry_gen_Unit, sp[0].o))(ctx, sp[0].o, (frame[0].o));
	}
label_2:;
	LINE_NUMBER(1378);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_gen_UnitEntity_damage_float(jcontext ctx, jobject self, jfloat param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/UnitEntity:damage", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	{
	LINE_NUMBER(1382);
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
	jfloat hMult = (jfloat)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_healthMultiplier;
	if (std::isnan(hMult) || hMult <= 0.0001f) hMult = 1.0f;
	jfloat temp1 = temp0 / hMult;
	clinit_mindustry_Vars(ctx);
	sp[1].o = (jobject)SF_mindustry_Vars_state;
	sp[1].o = (jobject)((mindustry_core_GameState *) NULL_CHECK(sp[1].o))->F_rules;
	sp[2].o = (jobject)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_team;
	jfloat temp2 = (jfloat)((func_mindustry_game_Rules_unitHealth_mindustry_game_Team_R_float) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_mindustry_game_Rules_unitHealth_mindustry_game_Team_R_float])(ctx, sp[1].o, sp[2].o);
	if (std::isnan(temp2) || temp2 <= 0.0001f) temp2 = 1.0f;
	jfloat finalDmg = temp1 / temp2;
	if (std::isnan(finalDmg) || std::isinf(finalDmg) || finalDmg < 0.0f) finalDmg = 0.0f;
	((func_mindustry_gen_UnitEntity_rawDamage_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_gen_UnitEntity_rawDamage_float])(ctx, sp[0].o, finalDmg);
	LINE_NUMBER(1383);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_gen_UnitEntity_damage_float_boolean(jcontext ctx, jobject self, jfloat param0, jbool param1) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/UnitEntity:damage", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(1387);
	frame[3].f = ((jfloat)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_hitTime);
	LINE_NUMBER(1388);
	((func_mindustry_gen_UnitEntity_damage_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_gen_UnitEntity_damage_float])(ctx, (frame[0].o), (frame[1].f));
	LINE_NUMBER(1389);
	if ((frame[2].i) != 0) goto label_3;
	}
	{
	LINE_NUMBER(1390);
	((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_hitTime = (frame[3].f);
	}
label_3:;
	LINE_NUMBER(1392);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_gen_UnitEntity_damageArmorMult_float_float(jcontext ctx, jobject self, jfloat param0, jfloat param1) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/UnitEntity:damageArmorMult", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	frame[2].f = param1;
	{
	LINE_NUMBER(1396);
	((func_mindustry_gen_UnitEntity_damageArmorMult_float_float_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_gen_UnitEntity_damageArmorMult_float_float_boolean])(ctx, (frame[0].o), (frame[1].f), (frame[2].f), (jint(1)));
	LINE_NUMBER(1397);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_gen_UnitEntity_damageArmorMult_float_float_boolean(jcontext ctx, jobject self, jfloat param0, jfloat param1, jbool param2) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/UnitEntity:damageArmorMult", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	frame[2].f = param1;
	frame[3].i = param2;
	{
	LINE_NUMBER(1401);
	frame[4].f = ((jfloat)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_hitTime);
	LINE_NUMBER(1402);
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
	jfloat hMult = (jfloat)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_healthMultiplier;
	if (std::isnan(hMult) || hMult <= 0.0001f) hMult = 1.0f;
	jfloat temp1 = temp0 / hMult;
	clinit_mindustry_Vars(ctx);
	sp[1].o = (jobject)SF_mindustry_Vars_state;
	sp[1].o = (jobject)((mindustry_core_GameState *) NULL_CHECK(sp[1].o))->F_rules;
	sp[2].o = (jobject)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_team;
	jfloat temp2 = (jfloat)((func_mindustry_game_Rules_unitHealth_mindustry_game_Team_R_float) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_mindustry_game_Rules_unitHealth_mindustry_game_Team_R_float])(ctx, sp[1].o, sp[2].o);
	if (std::isnan(temp2) || temp2 <= 0.0001f) temp2 = 1.0f;
	jfloat finalDmg = temp1 / temp2;
	if (std::isnan(finalDmg) || std::isinf(finalDmg) || finalDmg < 0.0f) finalDmg = 0.0f;
	((func_mindustry_gen_UnitEntity_rawDamage_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_gen_UnitEntity_rawDamage_float])(ctx, sp[0].o, finalDmg);
	LINE_NUMBER(1403);
	if ((frame[3].i) != 0) goto label_5;
	}
	{
	LINE_NUMBER(1404);
	((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_hitTime = (frame[4].f);
	}
label_5:;
	LINE_NUMBER(1406);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_gen_UnitEntity_damageContinuous_float(jcontext ctx, jobject self, jfloat param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/UnitEntity:damageContinuous", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	{
	LINE_NUMBER(1410);
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
	((func_mindustry_gen_UnitEntity_damage_float_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_gen_UnitEntity_damage_float_boolean])(ctx, sp[0].o, sp[1].f, sp[2].i);
	LINE_NUMBER(1411);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_gen_UnitEntity_damageContinuousArmorMult_float_float(jcontext ctx, jobject self, jfloat param0, jfloat param1) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/UnitEntity:damageContinuousArmorMult", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	frame[2].f = param1;
	{
	LINE_NUMBER(1415);
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
	((func_mindustry_gen_UnitEntity_damageArmorMult_float_float_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_gen_UnitEntity_damageArmorMult_float_float_boolean])(ctx, sp[0].o, sp[1].f, sp[2].f, sp[3].i);
	LINE_NUMBER(1416);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_gen_UnitEntity_damageContinuousPierce_float(jcontext ctx, jobject self, jfloat param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/UnitEntity:damageContinuousPierce", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	{
	LINE_NUMBER(1420);
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
	((func_mindustry_gen_UnitEntity_damagePierce_float_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_gen_UnitEntity_damagePierce_float_boolean])(ctx, sp[0].o, sp[1].f, sp[2].i);
	LINE_NUMBER(1421);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_gen_UnitEntity_damagePierce_float(jcontext ctx, jobject self, jfloat param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/UnitEntity:damagePierce", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	{
	LINE_NUMBER(1425);
	((func_mindustry_gen_UnitEntity_damagePierce_float_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_gen_UnitEntity_damagePierce_float_boolean])(ctx, (frame[0].o), (frame[1].f), (jint(1)));
	LINE_NUMBER(1426);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_gen_UnitEntity_damagePierce_float_boolean(jcontext ctx, jobject self, jfloat param0, jbool param1) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/UnitEntity:damagePierce", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(1430);
	frame[3].f = ((jfloat)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_hitTime);
	LINE_NUMBER(1431);
	sp[0].o = frame[0].o;
	jfloat temp0 = (frame[1].f) / ((jfloat)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_healthMultiplier);
	clinit_mindustry_Vars(ctx);
	sp[1].o = (jobject)SF_mindustry_Vars_state;
	sp[1].o = (jobject)((mindustry_core_GameState *) NULL_CHECK(sp[1].o))->F_rules;
	sp[2].o = (jobject)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_team;
	jfloat temp1 = (jfloat)((func_mindustry_game_Rules_unitHealth_mindustry_game_Team_R_float) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_mindustry_game_Rules_unitHealth_mindustry_game_Team_R_float])(ctx, sp[1].o, sp[2].o);
	((func_mindustry_gen_UnitEntity_rawDamage_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_gen_UnitEntity_rawDamage_float])(ctx, sp[0].o, (temp0 / temp1));
	LINE_NUMBER(1432);
	if ((frame[2].i) != 0) goto label_3;
	}
	{
	LINE_NUMBER(1433);
	((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_hitTime = (frame[3].f);
	}
label_3:;
	LINE_NUMBER(1435);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_gen_UnitEntity_destroy(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[20];
	auto stack = &frame[9];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/UnitEntity:destroy", 20 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(1439);
	jint temp0 = (jint)((func_mindustry_gen_UnitEntity_isAdded_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_gen_UnitEntity_isAdded_R_boolean])(ctx, (frame[0].o));
	if (temp0 == 0) goto label_1;
	}
	{
	jint temp0 = (jint)((func_mindustry_gen_UnitEntity_killable_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_gen_UnitEntity_killable_R_boolean])(ctx, (frame[0].o));
	if (temp0 != 0) goto label_2;
	}
label_1:;
	popStackFrame(ctx);
	INST_RETURN();
label_2:;
	{
	LINE_NUMBER(1440);
	jfloat temp0 = jfloat(2);
	sp[0].o = (jobject)((func_mindustry_gen_UnitEntity_item_R_mindustry_type_Item) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_gen_UnitEntity_item_R_mindustry_type_Item])(ctx, (frame[0].o));
	jfloat temp1 = (jfloat)((mindustry_type_Item *) NULL_CHECK(sp[0].o))->F_explosiveness;
	sp[0].o = (jobject)((func_mindustry_gen_UnitEntity_stack_R_mindustry_type_ItemStack) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_gen_UnitEntity_stack_R_mindustry_type_ItemStack])(ctx, (frame[0].o));
	frame[1].f = (temp0 + ((temp1 * (jfloat(((jint)((mindustry_type_ItemStack *) NULL_CHECK(sp[0].o))->F_amount)))) * (jfloat(1.53f))));
	LINE_NUMBER(1441);
	sp[0].o = (jobject)((func_mindustry_gen_UnitEntity_item_R_mindustry_type_Item) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_gen_UnitEntity_item_R_mindustry_type_Item])(ctx, (frame[0].o));
	jfloat temp2 = (jfloat)((mindustry_type_Item *) NULL_CHECK(sp[0].o))->F_flammability;
	sp[0].o = (jobject)((func_mindustry_gen_UnitEntity_stack_R_mindustry_type_ItemStack) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_gen_UnitEntity_stack_R_mindustry_type_ItemStack])(ctx, (frame[0].o));
	frame[2].f = ((temp2 * (jfloat(((jint)((mindustry_type_ItemStack *) NULL_CHECK(sp[0].o))->F_amount)))) / (jfloat(1.9f)));
	LINE_NUMBER(1442);
	sp[0].o = (jobject)((func_mindustry_gen_UnitEntity_item_R_mindustry_type_Item) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_gen_UnitEntity_item_R_mindustry_type_Item])(ctx, (frame[0].o));
	jfloat temp3 = (jfloat)((mindustry_type_Item *) NULL_CHECK(sp[0].o))->F_charge;
	sp[0].o = (jobject)((func_mindustry_gen_UnitEntity_stack_R_mindustry_type_ItemStack) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_gen_UnitEntity_stack_R_mindustry_type_ItemStack])(ctx, (frame[0].o));
	jfloat temp4 = (jfloat)SM_arc_math_Mathf_pow_float_float_R_float(ctx, (jfloat(((jint)((mindustry_type_ItemStack *) NULL_CHECK(sp[0].o))->F_amount))), (jfloat(1.11f)));
	frame[3].f = ((temp3 * temp4) * (jfloat(160.0f)));
	LINE_NUMBER(1443);
	if (((jint)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_spawnedByCore) != 0) goto label_6;
	}
	{
	LINE_NUMBER(1444);
	jfloat temp0 = (jfloat)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_x;
	jfloat temp1 = (jfloat)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_y;
	jfloat temp2 = frame[2].f;
	jfloat temp3 = frame[1].f;
	jfloat temp4 = frame[3].f;
	jfloat temp5 = (jfloat)((func_mindustry_gen_UnitEntity_bounds_R_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_gen_UnitEntity_bounds_R_float])(ctx, (frame[0].o));
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
	if (((jint)((mindustry_game_Rules *) NULL_CHECK(temp7))->F_damageExplosions) == 0) goto label_8;
	}
	{
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	sp[0].o = (jobject)((mindustry_core_GameState *) NULL_CHECK(sp[0].o))->F_rules;
	sp[1].o = (jobject)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_team;
	jfloat temp0 = (jfloat)((func_mindustry_game_Rules_unitCrashDamage_mindustry_game_Team_R_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_game_Rules_unitCrashDamage_mindustry_game_Team_R_float])(ctx, sp[0].o, sp[1].o);
	if ((floatCompare(temp0, (jfloat(0)), -1)) <= 0) goto label_8;
	}
	INST_ICONST(1);
	goto label_9;
label_8:;
	INST_ICONST(0);
label_9:;
	{
	sp[0].o = (jobject)((func_mindustry_gen_UnitEntity_item_R_mindustry_type_Item) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_gen_UnitEntity_item_R_mindustry_type_Item])(ctx, (frame[0].o));
	if ((floatCompare(((jfloat)((mindustry_type_Item *) NULL_CHECK(sp[0].o))->F_flammability), (jfloat(1)), -1)) <= 0) goto label_10;
	}
	INST_ICONST(1);
	goto label_11;
label_10:;
	INST_ICONST(0);
label_11:;
	{
	sp -= 8;
	sp[8].o = (jobject)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_team;
	sp[9].o = (jobject)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_type;
	sp[9].o = (jobject)((mindustry_type_UnitType *) NULL_CHECK(sp[9].o))->F_deathExplosionEffect;
	SM_mindustry_entities_Damage_dynamicExplosion_float_float_float_float_float_float_boolean_boolean_mindustry_game_Team_mindustry_entities_Effect_float(ctx, sp[0].f, sp[1].f, sp[2].f, sp[3].f, sp[4].f, sp[5].f, sp[6].i, sp[7].i, sp[8].o, sp[9].o, (jfloat(0)));
	goto label_12;
	}
label_6:;
	{
	LINE_NUMBER(1446);
	sp[0].o = (jobject)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_type;
	sp[0].o = (jobject)((mindustry_type_UnitType *) NULL_CHECK(sp[0].o))->F_deathExplosionEffect;
	jfloat temp0 = (jfloat)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_x;
	jfloat temp1 = (jfloat)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_y;
	jfloat temp2 = (jfloat)((func_mindustry_gen_UnitEntity_bounds_R_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_gen_UnitEntity_bounds_R_float])(ctx, (frame[0].o));
	((func_mindustry_entities_Effect_at_float_float_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_entities_Effect_at_float_float_float])(ctx, sp[0].o, temp0, temp1, ((temp2 / (jfloat(2))) / (jfloat(8.0f))));
	}
label_12:;
	{
	LINE_NUMBER(1448);
	sp[0].o = (jobject)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_type;
	if ((floatCompare(((jfloat)((mindustry_type_UnitType *) NULL_CHECK(sp[0].o))->F_deathShake), (jfloat(0)), 1)) >= 0) goto label_13;
	}
	{
	jfloat temp0 = (jfloat(3.0f)) + (((jfloat)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_hitSize) / (jfloat(3.0f)));
	sp[0].f = temp0;
	sp += 1;
	goto label_14;
	}
label_13:;
	{
	sp[0].o = (jobject)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_type;
	jfloat temp0 = (jfloat)((mindustry_type_UnitType *) NULL_CHECK(sp[0].o))->F_deathShake;
	sp[0].f = temp0;
	sp += 1;
	}
label_14:;
	{
	sp -= 1;
	frame[4].f = sp[0].f;
	LINE_NUMBER(1449);
	sp[0].o = (jobject)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_type;
	if (((jint)((mindustry_type_UnitType *) NULL_CHECK(sp[0].o))->F_createScorch) == 0) goto label_16;
	}
	{
	LINE_NUMBER(1450);
	SM_mindustry_entities_Effect_scorch_float_float_int(ctx, ((jfloat)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_x), ((jfloat)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_y), (jint((((jfloat)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_hitSize) / (jfloat(5.0f))))));
	}
label_16:;
	{
	LINE_NUMBER(1452);
	SM_mindustry_entities_Effect_shake_float_float_arc_math_geom_Position(ctx, (frame[4].f), (frame[4].f), (frame[0].o));
	LINE_NUMBER(1453);
	sp[0].o = (jobject)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_type;
	sp[0].o = (jobject)((mindustry_type_UnitType *) NULL_CHECK(sp[0].o))->F_deathSound;
	sp[1].o = frame[0].o;
	jfloat temp0 = jfloat(1);
	sp[2].o = (jobject)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_type;
	jint temp1 = (jint)((func_arc_audio_Sound_at_arc_math_geom_Position_float_float_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_audio_Sound_at_arc_math_geom_Position_float_float_R_int])(ctx, sp[0].o, sp[1].o, temp0, ((jfloat)((mindustry_type_UnitType *) NULL_CHECK(sp[2].o))->F_deathSoundVolume));
	LINE_NUMBER(1454);
	clinit_mindustry_game_EventType$UnitDestroyEvent(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_game_EventType$UnitDestroyEvent);
	init_mindustry_game_EventType$UnitDestroyEvent_mindustry_gen_Unit(ctx, sp[0].o, (frame[0].o));
	SM_arc_Events_fire_java_lang_Object(ctx, sp[0].o);
	LINE_NUMBER(1455);
	if ((floatCompare((frame[1].f), (jfloat(7.0f)), -1)) <= 0) goto label_21;
	}
	{
	jint temp0 = (jint)((func_mindustry_gen_UnitEntity_isLocal_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_gen_UnitEntity_isLocal_R_boolean])(ctx, (frame[0].o));
	if (temp0 != 0) goto label_22;
	}
	{
	if (((jint)((mindustry_gen_UnitEntity *) NULL_CHECK((frame[0].o)))->F_wasPlayer) == 0) goto label_21;
	}
label_22:;
	{
	LINE_NUMBER(1456);
	clinit_mindustry_game_EventType$Trigger(ctx);
	sp[0].o = (jobject)SF_mindustry_game_EventType$Trigger_suicideBomb;
	SM_arc_Events_fire_java_lang_Enum(ctx, sp[0].o);
	}
label_21:;
	{
	LINE_NUMBER(1458);
	sp[0].o = (jobject)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_mounts;
	frame[5].o = sp[0].o;
	frame[6].i = (((jarray) nullCheck(ctx, (frame[5].o)))->length);
	frame[7].i = (jint(0));
	}
label_23:;
	{
	if ((frame[7].i) >= (frame[6].i)) goto label_24;
	}
	{
	frame[8].o = ((jobject)ARRAY_ACCESS(jobject, (frame[5].o), (frame[7].i)));
	LINE_NUMBER(1459);
	sp[0].o = (jobject)((mindustry_entities_units_WeaponMount *) NULL_CHECK((frame[8].o)))->F_weapon;
	if (((jint)((mindustry_type_Weapon *) NULL_CHECK(sp[0].o))->F_shootOnDeath) == 0) goto label_26;
	}
	{
	sp[0].o = (jobject)((mindustry_entities_units_WeaponMount *) NULL_CHECK((frame[8].o)))->F_weapon;
	sp[0].o = (jobject)((mindustry_type_Weapon *) NULL_CHECK(sp[0].o))->F_bullet;
	if (((jint)((mindustry_entities_bullet_BulletType *) NULL_CHECK(sp[0].o))->F_killShooter) == 0) goto label_27;
	}
	{
	if (((jint)((mindustry_entities_units_WeaponMount *) NULL_CHECK((frame[8].o)))->F_totalShots) > 0) goto label_26;
	}
label_27:;
	{
	LINE_NUMBER(1460);
	sp[0].o = (jobject)((mindustry_entities_units_WeaponMount *) NULL_CHECK((frame[8].o)))->F_weapon;
	sp[0].o = (jobject)((mindustry_type_Weapon *) NULL_CHECK(sp[0].o))->F_shootOnDeathEffect;
	if (sp[0].o == nullptr) goto label_28;
	}
	{
	if (((jint)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_hasTarget) != 0) goto label_28;
	}
	{
	LINE_NUMBER(1461);
	((mindustry_entities_units_WeaponMount *) NULL_CHECK((frame[8].o)))->F_allowShootEffects = (jint(0));
	LINE_NUMBER(1462);
	sp[0].o = (jobject)((mindustry_entities_units_WeaponMount *) NULL_CHECK((frame[8].o)))->F_weapon;
	sp[0].o = (jobject)((mindustry_type_Weapon *) NULL_CHECK(sp[0].o))->F_shootOnDeathEffect;
	((func_mindustry_entities_Effect_at_float_float_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_entities_Effect_at_float_float_float])(ctx, sp[0].o, ((jfloat)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_x), ((jfloat)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_y), ((jfloat)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_rotation));
	}
label_28:;
	{
	LINE_NUMBER(1464);
	((mindustry_entities_units_WeaponMount *) NULL_CHECK((frame[8].o)))->F_reload = (jfloat(0));
	LINE_NUMBER(1465);
	((mindustry_entities_units_WeaponMount *) NULL_CHECK((frame[8].o)))->F_shoot = (jint(1));
	LINE_NUMBER(1466);
	sp[0].o = (jobject)((mindustry_entities_units_WeaponMount *) NULL_CHECK((frame[8].o)))->F_weapon;
	((func_mindustry_type_Weapon_update_mindustry_gen_Unit_mindustry_entities_units_WeaponMount) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_type_Weapon_update_mindustry_gen_Unit_mindustry_entities_units_WeaponMount])(ctx, sp[0].o, (frame[0].o), (frame[8].o));
	}
label_26:;
	{
	LINE_NUMBER(1458);
	INST_IINC(7, 1);
	goto label_23;
	}
label_24:;
	{
	LINE_NUMBER(1469);
	sp[0].o = (jobject)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_type;
	if (((jint)((mindustry_type_UnitType *) NULL_CHECK(sp[0].o))->F_flying) == 0) goto label_33;
	}
	{
	if (((jint)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_spawnedByCore) != 0) goto label_33;
	}
	{
	sp[0].o = (jobject)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_type;
	if (((jint)((mindustry_type_UnitType *) NULL_CHECK(sp[0].o))->F_createWreck) == 0) goto label_33;
	}
	{
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	sp[0].o = (jobject)((mindustry_core_GameState *) NULL_CHECK(sp[0].o))->F_rules;
	sp[1].o = (jobject)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_team;
	jfloat temp0 = (jfloat)((func_mindustry_game_Rules_unitCrashDamage_mindustry_game_Team_R_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_game_Rules_unitCrashDamage_mindustry_game_Team_R_float])(ctx, sp[0].o, sp[1].o);
	if ((floatCompare(temp0, (jfloat(0)), -1)) <= 0) goto label_33;
	}
	{
	LINE_NUMBER(1470);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_indexer;
	sp[1].o = (jobject)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_team;
	clinit_mindustry_world_meta_BlockFlag(ctx);
	sp[2].o = (jobject)SF_mindustry_world_meta_BlockFlag_shield;
	sp[0].o = (jobject)((func_mindustry_ai_BlockIndexer_getEnemy_mindustry_game_Team_mindustry_world_meta_BlockFlag_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_ai_BlockIndexer_getEnemy_mindustry_game_Team_mindustry_world_meta_BlockFlag_R_arc_struct_Seq])(ctx, sp[0].o, sp[1].o, sp[2].o);
	frame[5].o = sp[0].o;
	LINE_NUMBER(1471);
	jfloat temp0 = (jfloat)SM_arc_math_Mathf_pow_float_float_R_float(ctx, ((jfloat)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_hitSize), (jfloat(0.75f)));
	sp[0].o = (jobject)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_type;
	jfloat temp1 = (temp0 * ((jfloat)((mindustry_type_UnitType *) NULL_CHECK(sp[0].o))->F_crashDamageMultiplier)) * (jfloat(2.5f));
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	sp[0].o = (jobject)((mindustry_core_GameState *) NULL_CHECK(sp[0].o))->F_rules;
	sp[1].o = (jobject)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_team;
	jfloat temp2 = (jfloat)((func_mindustry_game_Rules_unitCrashDamage_mindustry_game_Team_R_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_game_Rules_unitCrashDamage_mindustry_game_Team_R_float])(ctx, sp[0].o, sp[1].o);
	frame[6].f = (temp1 * temp2);
	LINE_NUMBER(1472);
	jint temp3 = (jint)((func_arc_struct_Seq_isEmpty_R_boolean) ((void **) nullCheck(ctx, (frame[5].o))->vtable)[VTABLE_arc_struct_Seq_isEmpty_R_boolean])(ctx, (frame[5].o));
	if (temp3 != 0) goto label_37;
	}
	{
	sp[0].o = frame[5].o;
	{ /* InvokeDynamic */
		clinit_mindustry_gen_UnitEntity_invoke_arc_func_Boolf_16(ctx);
		auto proxy = (mindustry_gen_UnitEntity_invoke_arc_func_Boolf_16 *) gcAlloc(ctx, &class_mindustry_gen_UnitEntity_invoke_arc_func_Boolf_16);
		proxy->F_field1 = (frame[6].f);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[1].o = (jobject) proxy;
	}
	jint temp0 = (jint)((func_arc_struct_Seq_contains_arc_func_Boolf_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_contains_arc_func_Boolf_R_boolean])(ctx, sp[0].o, sp[1].o);
	if (temp0 != 0) goto label_33;
	}
label_37:;
	{
	LINE_NUMBER(1473);
	sp[0].o = (jobject)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_team;
	jfloat temp0 = (jfloat)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_x;
	jfloat temp1 = (jfloat)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_y;
	jfloat temp2 = (jfloat)SM_arc_math_Mathf_pow_float_float_R_float(ctx, ((jfloat)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_hitSize), (jfloat(0.94f)));
	SM_mindustry_entities_Damage_damage_mindustry_game_Team_float_float_float_float_boolean_boolean_boolean(ctx, sp[0].o, temp0, temp1, (temp2 * (jfloat(1.25f))), (frame[6].f), (jint(1)), (jint(0)), (jint(1)));
	}
label_33:;
	{
	LINE_NUMBER(1476);
	if ((clinit_mindustry_Vars(ctx), (jint)SF_mindustry_Vars_headless) != 0) goto label_38;
	}
	{
	sp[0].o = (jobject)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_type;
	if (((jint)((mindustry_type_UnitType *) NULL_CHECK(sp[0].o))->F_createScorch) == 0) goto label_38;
	}
	{
	LINE_NUMBER(1477);
	frame[5].i = (jint(0));
	}
label_40:;
	{
	jint temp0 = frame[5].i;
	sp[0].o = (jobject)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_type;
	sp[0].o = (jobject)((mindustry_type_UnitType *) NULL_CHECK(sp[0].o))->F_wreckRegions;
	if (temp0 >= (((jarray) nullCheck(ctx, sp[0].o))->length)) goto label_38;
	}
	{
	LINE_NUMBER(1478);
	sp[0].o = (jobject)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_type;
	sp[0].o = (jobject)((mindustry_type_UnitType *) NULL_CHECK(sp[0].o))->F_wreckRegions;
	jint temp0 = (jint)((func_arc_graphics_g2d_TextureRegion_found_R_boolean) ((void **) nullCheck(ctx, ((jobject)ARRAY_ACCESS(jobject, sp[0].o, (frame[5].i))))->vtable)[VTABLE_arc_graphics_g2d_TextureRegion_found_R_boolean])(ctx, ((jobject)ARRAY_ACCESS(jobject, sp[0].o, (frame[5].i))));
	if (temp0 == 0) goto label_42;
	}
	{
	LINE_NUMBER(1479);
	sp[0].o = (jobject)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_type;
	frame[6].f = (((jfloat)((mindustry_type_UnitType *) NULL_CHECK(sp[0].o))->F_hitSize) / (jfloat(4.0f)));
	LINE_NUMBER(1480);
	clinit_arc_util_Tmp(ctx);
	sp[0].o = (jobject)SF_arc_util_Tmp_v1;
	sp[0].o = (jobject)((func_arc_math_geom_Vec2_rnd_float_R_arc_math_geom_Vec2) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Vec2_rnd_float_R_arc_math_geom_Vec2])(ctx, sp[0].o, (frame[6].f));
	LINE_NUMBER(1481);
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
label_42:;
	{
	LINE_NUMBER(1477);
	INST_IINC(5, 1);
	goto label_40;
	}
label_38:;
	{
	LINE_NUMBER(1485);
	sp[0].o = (jobject)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_abilities;
	frame[5].o = sp[0].o;
	frame[6].i = (((jarray) nullCheck(ctx, (frame[5].o)))->length);
	frame[7].i = (jint(0));
	}
label_46:;
	{
	if ((frame[7].i) >= (frame[6].i)) goto label_47;
	}
	{
	frame[8].o = ((jobject)ARRAY_ACCESS(jobject, (frame[5].o), (frame[7].i)));
	LINE_NUMBER(1486);
	((func_mindustry_entities_abilities_Ability_death_mindustry_gen_Unit) ((void **) nullCheck(ctx, (frame[8].o))->vtable)[VTABLE_mindustry_entities_abilities_Ability_death_mindustry_gen_Unit])(ctx, (frame[8].o), (frame[0].o));
	LINE_NUMBER(1485);
	INST_IINC(7, 1);
	goto label_46;
	}
label_47:;
	{
	LINE_NUMBER(1488);
	sp[0].o = (jobject)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_type;
	((func_mindustry_type_UnitType_killed_mindustry_gen_Unit) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_type_UnitType_killed_mindustry_gen_Unit])(ctx, sp[0].o, (frame[0].o));
	LINE_NUMBER(1489);
	((func_mindustry_gen_UnitEntity_remove) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_gen_UnitEntity_remove])(ctx, (frame[0].o));
	LINE_NUMBER(1490);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_gen_UnitEntity_display_arc_scene_ui_layout_Table(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/UnitEntity:display", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(1494);
	sp[0].o = (jobject)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_type;
	((func_mindustry_type_UnitType_display_mindustry_gen_Unit_arc_scene_ui_layout_Table) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_type_UnitType_display_mindustry_gen_Unit_arc_scene_ui_layout_Table])(ctx, sp[0].o, (frame[0].o), (frame[1].o));
	LINE_NUMBER(1495);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_gen_UnitEntity_draw(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/UnitEntity:draw", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(1503);
	sp[0].o = (jobject)((mindustry_gen_UnitEntity *) NULL_CHECK((frame[0].o)))->F_statuses;
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
	LINE_NUMBER(1504);
	sp[0].o = (jobject)((mindustry_entities_units_StatusEntry *) NULL_CHECK((frame[2].o)))->F_effect;
	((func_mindustry_type_StatusEffect_draw_mindustry_gen_Unit_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_type_StatusEffect_draw_mindustry_gen_Unit_float])(ctx, sp[0].o, (frame[0].o), ((jfloat)((mindustry_entities_units_StatusEntry *) NULL_CHECK((frame[2].o)))->F_time));
	LINE_NUMBER(1505);
	goto label_1;
	}
label_2:;
	{
	LINE_NUMBER(1509);
	sp[0].o = (jobject)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_type;
	((func_mindustry_type_UnitType_draw_mindustry_gen_Unit) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_type_UnitType_draw_mindustry_gen_Unit])(ctx, sp[0].o, (frame[0].o));
	LINE_NUMBER(1511);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_gen_UnitEntity_drawBuilding(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[12];
	auto stack = &frame[8];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/UnitEntity:drawBuilding", 12 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(1515);
	jint temp0 = (jint)((func_mindustry_gen_UnitEntity_activelyBuilding_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_gen_UnitEntity_activelyBuilding_R_boolean])(ctx, (frame[0].o));
	frame[1].i = temp0;
	LINE_NUMBER(1516);
	if ((frame[1].i) != 0) goto label_2;
	}
	{
	sp[0].o = (jobject)((mindustry_gen_UnitEntity *) NULL_CHECK((frame[0].o)))->F_lastActive;
	if (sp[0].o != nullptr) goto label_2;
	}
	popStackFrame(ctx);
	INST_RETURN();
label_2:;
	{
	LINE_NUMBER(1517);
	SM_arc_graphics_g2d_Draw_z_float(ctx, (jfloat(115.0f)));
	LINE_NUMBER(1518);
	if ((frame[1].i) == 0) goto label_4;
	}
	{
	sp[0].o = (jobject)((func_mindustry_gen_UnitEntity_buildPlan_R_mindustry_entities_units_BuildPlan) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_gen_UnitEntity_buildPlan_R_mindustry_entities_units_BuildPlan])(ctx, (frame[0].o));
	sp += 1;
	goto label_5;
	}
label_4:;
	INST_ALOAD(0);
	sp[-1].o = (jobject) ((mindustry_gen_UnitEntity *) NULL_CHECK(sp[-1].o))->F_lastActive;
label_5:;
	{
	sp -= 1;
	frame[2].o = sp[0].o;
	LINE_NUMBER(1519);
	sp[0].o = (jobject)((func_mindustry_entities_units_BuildPlan_tile_R_mindustry_world_Tile) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_mindustry_entities_units_BuildPlan_tile_R_mindustry_world_Tile])(ctx, (frame[2].o));
	frame[3].o = sp[0].o;
	LINE_NUMBER(1520);
	sp[0].o = (jobject)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_team;
	sp[0].o = (jobject)((func_mindustry_game_Team_core_R_mindustry_world_blocks_storage_CoreBlock$CoreBuild) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_game_Team_core_R_mindustry_world_blocks_storage_CoreBlock$CoreBuild])(ctx, sp[0].o);
	frame[4].o = sp[0].o;
	LINE_NUMBER(1521);
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
	sp->i = (jint)((func_mindustry_gen_UnitEntity_within_arc_math_geom_Position_float_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_gen_UnitEntity_within_arc_math_geom_Position_float_R_boolean])(ctx, sp[0].o, sp[1].o, sp[2].f);
	sp++;
	if ((--sp)->i != 0) goto label_12;
label_9:;
	LINE_NUMBER(1522);
	popStackFrame(ctx);
	INST_RETURN();
label_12:;
	{
	LINE_NUMBER(1524);
	if ((frame[4].o) == nullptr) goto label_13;
	}
	INST_ILOAD(1);
	if ((--sp)->i == 0) goto label_13;
	{
	jint temp0 = (jint)((func_mindustry_gen_UnitEntity_isLocal_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_gen_UnitEntity_isLocal_R_boolean])(ctx, (frame[0].o));
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
	LINE_NUMBER(1525);
	SM_arc_graphics_g2d_Draw_z_float(ctx, (jfloat(84.0f)));
	LINE_NUMBER(1526);
	((func_mindustry_gen_UnitEntity_drawPlan_mindustry_entities_units_BuildPlan_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_gen_UnitEntity_drawPlan_mindustry_entities_units_BuildPlan_float])(ctx, (frame[0].o), (frame[2].o), (jfloat(0.5f)));
	LINE_NUMBER(1527);
	((func_mindustry_gen_UnitEntity_drawPlanTop_mindustry_entities_units_BuildPlan_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_gen_UnitEntity_drawPlanTop_mindustry_entities_units_BuildPlan_float])(ctx, (frame[0].o), (frame[2].o), (jfloat(0.5f)));
	LINE_NUMBER(1528);
	SM_arc_graphics_g2d_Draw_z_float(ctx, (jfloat(115.0f)));
	}
label_13:;
	{
	LINE_NUMBER(1530);
	sp[0].o = (jobject)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_type;
	if (((jint)((mindustry_type_UnitType *) NULL_CHECK(sp[0].o))->F_drawBuildBeam) == 0) goto label_18;
	}
	{
	LINE_NUMBER(1531);
	sp[0].o = (jobject)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_type;
	jfloat temp0 = (jfloat)((mindustry_type_UnitType *) NULL_CHECK(sp[0].o))->F_buildBeamOffset;
	jfloat temp1 = (jfloat)SM_arc_math_Mathf_absin_float_float_float_R_float(ctx, (clinit_arc_util_Time(ctx), (jfloat)SF_arc_util_Time_time), (jfloat(3.0f)), (jfloat(0.6f)));
	frame[5].f = (temp0 + temp1);
	LINE_NUMBER(1532);
	jfloat temp2 = (jfloat)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_x;
	jfloat temp3 = (jfloat)SM_arc_math_Angles_trnsx_float_float_R_float(ctx, ((jfloat)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_rotation), (frame[5].f));
	frame[6].f = (temp2 + temp3);
	LINE_NUMBER(1533);
	jfloat temp4 = (jfloat)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_y;
	jfloat temp5 = (jfloat)SM_arc_math_Angles_trnsy_float_float_R_float(ctx, ((jfloat)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_rotation), (frame[5].f));
	frame[7].f = (temp4 + temp5);
	LINE_NUMBER(1534);
	((func_mindustry_gen_UnitEntity_drawBuildingBeam_float_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_gen_UnitEntity_drawBuildingBeam_float_float])(ctx, (frame[0].o), (frame[6].f), (frame[7].f));
	}
label_18:;
	LINE_NUMBER(1536);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_gen_UnitEntity_drawBuildingBeam_float_float(jcontext ctx, jobject self, jfloat param0, jfloat param1) {
	NULL_CHECK(self);
	jtype frame[15];
	auto stack = &frame[9];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/UnitEntity:drawBuildingBeam", 15 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	frame[2].f = param1;
	{
	LINE_NUMBER(1540);
	jint temp0 = (jint)((func_mindustry_gen_UnitEntity_activelyBuilding_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_gen_UnitEntity_activelyBuilding_R_boolean])(ctx, (frame[0].o));
	frame[3].i = temp0;
	LINE_NUMBER(1541);
	if ((frame[3].i) != 0) goto label_2;
	}
	{
	sp[0].o = (jobject)((mindustry_gen_UnitEntity *) NULL_CHECK((frame[0].o)))->F_lastActive;
	if (sp[0].o != nullptr) goto label_2;
	}
	popStackFrame(ctx);
	INST_RETURN();
label_2:;
	{
	LINE_NUMBER(1542);
	SM_arc_graphics_g2d_Draw_z_float(ctx, (jfloat(115.0f)));
	LINE_NUMBER(1543);
	if ((frame[3].i) == 0) goto label_4;
	}
	{
	sp[0].o = (jobject)((func_mindustry_gen_UnitEntity_buildPlan_R_mindustry_entities_units_BuildPlan) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_gen_UnitEntity_buildPlan_R_mindustry_entities_units_BuildPlan])(ctx, (frame[0].o));
	sp += 1;
	goto label_5;
	}
label_4:;
	INST_ALOAD(0);
	sp[-1].o = (jobject) ((mindustry_gen_UnitEntity *) NULL_CHECK(sp[-1].o))->F_lastActive;
label_5:;
	{
	sp -= 1;
	frame[4].o = sp[0].o;
	LINE_NUMBER(1544);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_world;
	sp[0].o = (jobject)((func_mindustry_core_World_tile_int_int_R_mindustry_world_Tile) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_World_tile_int_int_R_mindustry_world_Tile])(ctx, sp[0].o, ((jint)((mindustry_entities_units_BuildPlan *) NULL_CHECK((frame[4].o)))->F_x), ((jint)((mindustry_entities_units_BuildPlan *) NULL_CHECK((frame[4].o)))->F_y));
	frame[5].o = sp[0].o;
	LINE_NUMBER(1545);
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
	sp->i = (jint)((func_mindustry_gen_UnitEntity_within_arc_math_geom_Position_float_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_gen_UnitEntity_within_arc_math_geom_Position_float_R_boolean])(ctx, sp[0].o, sp[1].o, sp[2].f);
	sp++;
	if ((--sp)->i != 0) goto label_11;
label_8:;
	LINE_NUMBER(1546);
	popStackFrame(ctx);
	INST_RETURN();
label_11:;
	{
	LINE_NUMBER(1548);
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
	jint temp0 = (jint)((mindustry_gen_UnitEntity *) NULL_CHECK((frame[0].o)))->F_lastSize;
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
	LINE_NUMBER(1549);
	jfloat temp0 = (jfloat)((func_mindustry_entities_units_BuildPlan_drawx_R_float) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_mindustry_entities_units_BuildPlan_drawx_R_float])(ctx, (frame[4].o));
	frame[7].f = temp0;
	LINE_NUMBER(1550);
	jfloat temp1 = (jfloat)((func_mindustry_entities_units_BuildPlan_drawy_R_float) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_mindustry_entities_units_BuildPlan_drawy_R_float])(ctx, (frame[4].o));
	frame[8].f = temp1;
	LINE_NUMBER(1551);
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
	LINE_NUMBER(1552);
	SM_arc_graphics_g2d_Draw_z_float(ctx, (jfloat(122.0f)));
	LINE_NUMBER(1553);
	SM_arc_graphics_g2d_Draw_alpha_float(ctx, ((jfloat)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_buildAlpha));
	LINE_NUMBER(1554);
	if ((frame[3].i) != 0) goto label_23;
	}
	{
	sp[0].o = (jobject)((mindustry_world_Tile *) NULL_CHECK((frame[5].o)))->F_build;
	if ((isInstance(ctx, sp[0].o, &class_mindustry_world_blocks_ConstructBlock$ConstructBuild)) != 0) goto label_23;
	}
	{
	LINE_NUMBER(1555);
	jfloat temp0 = (jfloat)((func_mindustry_entities_units_BuildPlan_drawx_R_float) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_mindustry_entities_units_BuildPlan_drawx_R_float])(ctx, (frame[4].o));
	jfloat temp1 = (jfloat)((func_mindustry_entities_units_BuildPlan_drawy_R_float) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_mindustry_entities_units_BuildPlan_drawy_R_float])(ctx, (frame[4].o));
	SM_arc_graphics_g2d_Fill_square_float_float_float(ctx, temp0, temp1, ((jfloat(((frame[6].i) * (8)))) / (jfloat(2))));
	}
label_23:;
	{
	LINE_NUMBER(1557);
	SM_mindustry_graphics_Drawf_buildBeam_float_float_float_float_float(ctx, (frame[1].f), (frame[2].f), (frame[7].f), (frame[8].f), ((jfloat(((8) * (frame[6].i)))) / (jfloat(2))));
	LINE_NUMBER(1558);
	jfloat temp0 = frame[1].f;
	jfloat temp1 = frame[2].f;
	jfloat temp2 = jfloat(1.8f);
	jfloat temp3 = (jfloat)SM_arc_math_Mathf_absin_float_float_float_R_float(ctx, (clinit_arc_util_Time(ctx), (jfloat)SF_arc_util_Time_time), (jfloat(2.2f)), (jfloat(1.1f)));
	SM_arc_graphics_g2d_Fill_square_float_float_float_float(ctx, temp0, temp1, (temp2 + temp3), (((jfloat)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_rotation) + (jfloat(45.0f))));
	LINE_NUMBER(1559);
	SM_arc_graphics_g2d_Draw_reset(ctx);
	LINE_NUMBER(1560);
	SM_arc_graphics_g2d_Draw_z_float(ctx, (jfloat(115.0f)));
	LINE_NUMBER(1561);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_gen_UnitEntity_drawPlan_mindustry_entities_units_BuildPlan_float(jcontext ctx, jobject self, jobject param0, jfloat param1) {
	NULL_CHECK(self);
	jtype frame[11];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/UnitEntity:drawPlan", 11 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].f = param1;
	{
	LINE_NUMBER(1565);
	((mindustry_entities_units_BuildPlan *) NULL_CHECK((frame[1].o)))->F_animScale = (jfloat(1));
	LINE_NUMBER(1566);
	if (((jint)((mindustry_entities_units_BuildPlan *) NULL_CHECK((frame[1].o)))->F_breaking) == 0) goto label_2;
	}
	{
	LINE_NUMBER(1567);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_control;
	sp[0].o = (jobject)((mindustry_core_Control *) NULL_CHECK(sp[0].o))->F_input;
	((func_mindustry_input_InputHandler_drawBreaking_mindustry_entities_units_BuildPlan) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_input_InputHandler_drawBreaking_mindustry_entities_units_BuildPlan])(ctx, sp[0].o, (frame[1].o));
	goto label_4;
	}
label_2:;
	{
	LINE_NUMBER(1569);
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
	LINE_NUMBER(1571);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_gen_UnitEntity_drawPlanTop_mindustry_entities_units_BuildPlan_float(jcontext ctx, jobject self, jobject param0, jfloat param1) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/UnitEntity:drawPlanTop", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].f = param1;
	{
	LINE_NUMBER(1575);
	if (((jint)((mindustry_entities_units_BuildPlan *) NULL_CHECK((frame[1].o)))->F_breaking) != 0) goto label_1;
	}
	{
	LINE_NUMBER(1576);
	SM_arc_graphics_g2d_Draw_reset(ctx);
	LINE_NUMBER(1577);
	clinit_arc_graphics_Color(ctx);
	sp[0].o = (jobject)SF_arc_graphics_Color_white;
	jfloat temp0 = jfloat(0.24f);
	jfloat temp1 = (jfloat)SM_arc_math_Mathf_absin_float_float_float_R_float(ctx, (clinit_arc_util_Time(ctx), (jfloat)SF_arc_util_Time_globalTime), (jfloat(6.0f)), (jfloat(0.28f)));
	SM_arc_graphics_g2d_Draw_mixcol_arc_graphics_Color_float(ctx, sp[0].o, (temp0 + temp1));
	LINE_NUMBER(1578);
	SM_arc_graphics_g2d_Draw_alpha_float(ctx, (frame[2].f));
	LINE_NUMBER(1579);
	sp[0].o = (jobject)((mindustry_entities_units_BuildPlan *) NULL_CHECK((frame[1].o)))->F_block;
	sp[1].o = frame[1].o;
	sp[2].o = (jobject)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_plans;
	((func_mindustry_world_Block_drawPlanConfigTop_mindustry_entities_units_BuildPlan_arc_util_Eachable) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_Block_drawPlanConfigTop_mindustry_entities_units_BuildPlan_arc_util_Eachable])(ctx, sp[0].o, sp[1].o, sp[2].o);
	}
label_1:;
	LINE_NUMBER(1581);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_gen_UnitEntity_getCollisions_arc_func_Cons(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/UnitEntity:getCollisions", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	LINE_NUMBER(1585);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_gen_UnitEntity_handleSyncHidden(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/UnitEntity:handleSyncHidden", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(1593);
	((func_mindustry_gen_UnitEntity_remove) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_gen_UnitEntity_remove])(ctx, (frame[0].o));
	LINE_NUMBER(1594);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_netClient;
	((func_mindustry_core_NetClient_clearRemovedEntity_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_NetClient_clearRemovedEntity_int])(ctx, sp[0].o, ((jint)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_id));
	LINE_NUMBER(1596);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_gen_UnitEntity_heal(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/UnitEntity:heal", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(1600);
	((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_dead = (jint(0));
	LINE_NUMBER(1601);
	((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_health = ((jfloat)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_maxHealth);
	LINE_NUMBER(1602);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_gen_UnitEntity_heal_float(jcontext ctx, jobject self, jfloat param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/UnitEntity:heal", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	{
	LINE_NUMBER(1607);
	sp[0].o = frame[0].o;
	((mindustry_gen_Unit *) NULL_CHECK(sp[0].o))->F_health = (((jfloat)((mindustry_gen_Unit *) NULL_CHECK(sp[0].o))->F_health) + (frame[1].f));
	LINE_NUMBER(1608);
	((func_mindustry_gen_UnitEntity_clampHealth) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_gen_UnitEntity_clampHealth])(ctx, (frame[0].o));
	LINE_NUMBER(1612);
	if ((floatCompare(((jfloat)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_health), ((jfloat)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_maxHealth), 1)) >= 0) goto label_3;
	}
	{
	if ((floatCompare((frame[1].f), (jfloat(0)), -1)) <= 0) goto label_3;
	}
	{
	LINE_NUMBER(1613);
	((mindustry_gen_UnitEntity *) NULL_CHECK((frame[0].o)))->F_wasHealed = (jint(1));
	}
label_3:;
	LINE_NUMBER(1616);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_gen_UnitEntity_healFract_float(jcontext ctx, jobject self, jfloat param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/UnitEntity:healFract", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	{
	LINE_NUMBER(1620);
	((func_mindustry_gen_UnitEntity_heal_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_gen_UnitEntity_heal_float])(ctx, (frame[0].o), ((frame[1].f) * ((jfloat)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_maxHealth)));
	LINE_NUMBER(1621);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_gen_UnitEntity_hitbox_arc_math_geom_Rect(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/UnitEntity:hitbox", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(1625);
	sp[0].o = (jobject)((func_arc_math_geom_Rect_setCentered_float_float_float_float_R_arc_math_geom_Rect) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_math_geom_Rect_setCentered_float_float_float_float_R_arc_math_geom_Rect])(ctx, (frame[1].o), ((jfloat)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_x), ((jfloat)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_y), ((jfloat)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_hitSize), ((jfloat)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_hitSize));
	LINE_NUMBER(1626);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_gen_UnitEntity_hitboxTile_arc_math_geom_Rect(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/UnitEntity:hitboxTile", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(1630);
	jfloat temp0 = (jfloat)SM_java_lang_Math_min_float_float_R_float(ctx, (((jfloat)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_hitSize) * (jfloat(0.66f))), (jfloat(7.8f)));
	frame[2].f = temp0;
	LINE_NUMBER(1631);
	sp[0].o = (jobject)((func_arc_math_geom_Rect_setCentered_float_float_float_float_R_arc_math_geom_Rect) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_math_geom_Rect_setCentered_float_float_float_float_R_arc_math_geom_Rect])(ctx, (frame[1].o), ((jfloat)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_x), ((jfloat)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_y), (frame[2].f), (frame[2].f));
	LINE_NUMBER(1632);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_gen_UnitEntity_impulse_arc_math_geom_Vec2(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/UnitEntity:impulse", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(1636);
	((func_mindustry_gen_UnitEntity_impulse_float_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_gen_UnitEntity_impulse_float_float])(ctx, (frame[0].o), ((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK((frame[1].o)))->F_x), ((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK((frame[1].o)))->F_y));
	LINE_NUMBER(1637);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_gen_UnitEntity_impulse_float_float(jcontext ctx, jobject self, jfloat param0, jfloat param1) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/UnitEntity:impulse", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	frame[2].f = param1;
	{
	LINE_NUMBER(1641);
	jfloat temp0 = (jfloat)((func_mindustry_gen_UnitEntity_mass_R_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_gen_UnitEntity_mass_R_float])(ctx, (frame[0].o));
	frame[3].f = temp0;
	LINE_NUMBER(1642);
	sp[0].o = (jobject)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_vel;
	sp[0].o = (jobject)((func_arc_math_geom_Vec2_add_float_float_R_arc_math_geom_Vec2) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Vec2_add_float_float_R_arc_math_geom_Vec2])(ctx, sp[0].o, ((frame[1].f) / (frame[3].f)), ((frame[2].f) / (frame[3].f)));
	LINE_NUMBER(1643);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_gen_UnitEntity_impulseNet_arc_math_geom_Vec2(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/UnitEntity:impulseNet", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(1647);
	((func_mindustry_gen_UnitEntity_impulse_float_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_gen_UnitEntity_impulse_float_float])(ctx, (frame[0].o), ((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK((frame[1].o)))->F_x), ((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK((frame[1].o)))->F_y));
	LINE_NUMBER(1648);
	jint temp0 = (jint)((func_mindustry_gen_UnitEntity_isRemote_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_gen_UnitEntity_isRemote_R_boolean])(ctx, (frame[0].o));
	if (temp0 == 0) goto label_2;
	}
	{
	LINE_NUMBER(1649);
	jfloat temp0 = (jfloat)((func_mindustry_gen_UnitEntity_mass_R_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_gen_UnitEntity_mass_R_float])(ctx, (frame[0].o));
	frame[2].f = temp0;
	LINE_NUMBER(1650);
	((func_mindustry_gen_UnitEntity_move_float_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_gen_UnitEntity_move_float_float])(ctx, (frame[0].o), (((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK((frame[1].o)))->F_x) / (frame[2].f)), (((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK((frame[1].o)))->F_y) / (frame[2].f)));
	}
label_2:;
	LINE_NUMBER(1652);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_gen_UnitEntity_interpolate(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/UnitEntity:interpolate", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(1655);
	if ((longCompare(((jlong)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_lastUpdated), (jlong(0)))) == 0) goto label_1;
	}
	{
	if ((longCompare(((jlong)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_updateSpacing), (jlong(0)))) == 0) goto label_1;
	}
	{
	LINE_NUMBER(1656);
	jlong temp0 = (jlong)SM_arc_util_Time_timeSinceMillis_long_R_long(ctx, ((jlong)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_lastUpdated));
	frame[1].f = (jfloat(temp0));
	LINE_NUMBER(1657);
	jfloat temp1 = (jfloat)SM_java_lang_Math_min_float_float_R_float(ctx, ((frame[1].f) / (jfloat(((jlong)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_updateSpacing)))), (jfloat(2)));
	frame[2].f = temp1;
	LINE_NUMBER(1658);
	sp[0].o = frame[0].o;
	jfloat temp2 = (jfloat)SM_arc_math_Mathf_slerp_float_float_float_R_float(ctx, ((jfloat)((mindustry_gen_UnitEntity *) NULL_CHECK((frame[0].o)))->F_rotation_LAST_), ((jfloat)((mindustry_gen_UnitEntity *) NULL_CHECK((frame[0].o)))->F_rotation_TARGET_), (frame[2].f));
	((mindustry_gen_Unit *) NULL_CHECK(sp[0].o))->F_rotation = temp2;
	LINE_NUMBER(1659);
	sp[0].o = frame[0].o;
	jfloat temp3 = (jfloat)SM_arc_math_Mathf_lerp_float_float_float_R_float(ctx, ((jfloat)((mindustry_gen_UnitEntity *) NULL_CHECK((frame[0].o)))->F_x_LAST_), ((jfloat)((mindustry_gen_UnitEntity *) NULL_CHECK((frame[0].o)))->F_x_TARGET_), (frame[2].f));
	((mindustry_gen_Unit *) NULL_CHECK(sp[0].o))->F_x = temp3;
	LINE_NUMBER(1660);
	sp[0].o = frame[0].o;
	jfloat temp4 = (jfloat)SM_arc_math_Mathf_lerp_float_float_float_R_float(ctx, ((jfloat)((mindustry_gen_UnitEntity *) NULL_CHECK((frame[0].o)))->F_y_LAST_), ((jfloat)((mindustry_gen_UnitEntity *) NULL_CHECK((frame[0].o)))->F_y_TARGET_), (frame[2].f));
	((mindustry_gen_Unit *) NULL_CHECK(sp[0].o))->F_y = temp4;
	LINE_NUMBER(1661);
	goto label_8;
	}
label_1:;
	{
	if ((longCompare(((jlong)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_lastUpdated), (jlong(0)))) == 0) goto label_8;
	}
	{
	LINE_NUMBER(1662);
	((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_rotation = ((jfloat)((mindustry_gen_UnitEntity *) NULL_CHECK((frame[0].o)))->F_rotation_TARGET_);
	LINE_NUMBER(1663);
	((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_x = ((jfloat)((mindustry_gen_UnitEntity *) NULL_CHECK((frame[0].o)))->F_x_TARGET_);
	LINE_NUMBER(1664);
	((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_y = ((jfloat)((mindustry_gen_UnitEntity *) NULL_CHECK((frame[0].o)))->F_y_TARGET_);
	}
label_8:;
	LINE_NUMBER(1667);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_gen_UnitEntity_kill(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/UnitEntity:kill", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(1671);
	if (((jint)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_dead) != 0) goto label_1;
	}
	{
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_net;
	jint temp0 = (jint)((func_mindustry_net_Net_client_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_net_Net_client_R_boolean])(ctx, sp[0].o);
	if (temp0 != 0) goto label_1;
	}
	{
	jint temp0 = (jint)((func_mindustry_gen_UnitEntity_killable_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_gen_UnitEntity_killable_R_boolean])(ctx, (frame[0].o));
	if (temp0 != 0) goto label_2;
	}
label_1:;
	popStackFrame(ctx);
	INST_RETURN();
label_2:;
	{
	LINE_NUMBER(1672);
	SM_mindustry_gen_Call_unitDeath_int(ctx, ((jint)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_id));
	LINE_NUMBER(1673);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_gen_UnitEntity_killed(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/UnitEntity:killed", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(1681);
	sp[0].o = frame[0].o;
	jint temp0 = (jint)((func_mindustry_gen_UnitEntity_isLocal_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_gen_UnitEntity_isLocal_R_boolean])(ctx, (frame[0].o));
	((mindustry_gen_UnitEntity *) NULL_CHECK(sp[0].o))->F_wasPlayer = temp0;
	LINE_NUMBER(1682);
	sp[0].o = frame[0].o;
	jfloat temp1 = (jfloat)SM_java_lang_Math_min_float_float_R_float(ctx, ((jfloat)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_health), (jfloat(0)));
	((mindustry_gen_Unit *) NULL_CHECK(sp[0].o))->F_health = temp1;
	LINE_NUMBER(1683);
	((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_dead = (jint(1));
	LINE_NUMBER(1684);
	sp[0].o = (jobject)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_type;
	if (((jint)((mindustry_type_UnitType *) NULL_CHECK(sp[0].o))->F_flying) == 0) goto label_4;
	}
	{
	sp[0].o = (jobject)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_type;
	if (((jint)((mindustry_type_UnitType *) NULL_CHECK(sp[0].o))->F_createWreck) != 0) goto label_5;
	}
label_4:;
	{
	LINE_NUMBER(1685);
	((func_mindustry_gen_UnitEntity_destroy) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_gen_UnitEntity_destroy])(ctx, (frame[0].o));
	goto label_6;
	}
label_5:;
	{
	LINE_NUMBER(1687);
	sp[0].o = (jobject)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_type;
	sp[0].o = (jobject)((mindustry_type_UnitType *) NULL_CHECK(sp[0].o))->F_wreckSound;
	sp[1].o = frame[0].o;
	jfloat temp0 = jfloat(1);
	sp[2].o = (jobject)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_type;
	jint temp1 = (jint)((func_arc_audio_Sound_at_arc_math_geom_Position_float_float_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_audio_Sound_at_arc_math_geom_Position_float_float_R_int])(ctx, sp[0].o, sp[1].o, temp0, ((jfloat)((mindustry_type_UnitType *) NULL_CHECK(sp[2].o))->F_wreckSoundVolume));
	}
label_6:;
	LINE_NUMBER(1690);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_gen_UnitEntity_landed(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/UnitEntity:landed", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(1694);
	sp[0].o = (jobject)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_type;
	if ((floatCompare(((jfloat)((mindustry_type_UnitType *) NULL_CHECK(sp[0].o))->F_mechLandShake), (jfloat(0)), -1)) <= 0) goto label_1;
	}
	{
	LINE_NUMBER(1695);
	sp[0].o = (jobject)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_type;
	jfloat temp0 = (jfloat)((mindustry_type_UnitType *) NULL_CHECK(sp[0].o))->F_mechLandShake;
	sp[0].o = (jobject)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_type;
	SM_mindustry_entities_Effect_shake_float_float_arc_math_geom_Position(ctx, temp0, ((jfloat)((mindustry_type_UnitType *) NULL_CHECK(sp[0].o))->F_mechLandShake), (frame[0].o));
	}
label_1:;
	{
	LINE_NUMBER(1697);
	sp[0].o = (jobject)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_type;
	((func_mindustry_type_UnitType_landed_mindustry_gen_Unit) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_type_UnitType_landed_mindustry_gen_Unit])(ctx, sp[0].o, (frame[0].o));
	LINE_NUMBER(1698);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_gen_UnitEntity_lookAt_arc_math_geom_Position(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/UnitEntity:lookAt", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(1702);
	sp[0].o = frame[0].o;
	jfloat temp0 = (jfloat)((func_mindustry_gen_UnitEntity_angleTo_arc_math_geom_Position_R_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_gen_UnitEntity_angleTo_arc_math_geom_Position_R_float])(ctx, (frame[0].o), (frame[1].o));
	((func_mindustry_gen_UnitEntity_lookAt_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_gen_UnitEntity_lookAt_float])(ctx, sp[0].o, temp0);
	LINE_NUMBER(1703);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_gen_UnitEntity_lookAt_float(jcontext ctx, jobject self, jfloat param0) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/UnitEntity:lookAt", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	{
	LINE_NUMBER(1707);
	sp[0].o = frame[0].o;
	jfloat temp0 = (jfloat)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_rotation;
	jfloat temp1 = frame[1].f;
	sp[1].o = (jobject)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_type;
	jfloat temp2 = ((jfloat)((mindustry_type_UnitType *) NULL_CHECK(sp[1].o))->F_rotateSpeed) * (clinit_arc_util_Time(ctx), (jfloat)SF_arc_util_Time_delta);
	jfloat temp3 = (jfloat)((func_mindustry_gen_UnitEntity_speedMultiplier_R_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_gen_UnitEntity_speedMultiplier_R_float])(ctx, (frame[0].o));
	jfloat temp4 = (jfloat)SM_arc_math_Angles_moveToward_float_float_float_R_float(ctx, temp0, temp1, (temp2 * temp3));
	((mindustry_gen_Unit *) NULL_CHECK(sp[0].o))->F_rotation = temp4;
	LINE_NUMBER(1708);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_gen_UnitEntity_lookAt_float_float(jcontext ctx, jobject self, jfloat param0, jfloat param1) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/UnitEntity:lookAt", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	frame[2].f = param1;
	{
	LINE_NUMBER(1712);
	sp[0].o = frame[0].o;
	jfloat temp0 = (jfloat)((func_mindustry_gen_UnitEntity_angleTo_float_float_R_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_gen_UnitEntity_angleTo_float_float_R_float])(ctx, (frame[0].o), (frame[1].f), (frame[2].f));
	((func_mindustry_gen_UnitEntity_lookAt_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_gen_UnitEntity_lookAt_float])(ctx, sp[0].o, temp0);
	LINE_NUMBER(1713);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_gen_UnitEntity_move_arc_math_geom_Vec2(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/UnitEntity:move", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(1717);
	((func_mindustry_gen_UnitEntity_move_float_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_gen_UnitEntity_move_float_float])(ctx, (frame[0].o), ((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK((frame[1].o)))->F_x), ((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK((frame[1].o)))->F_y));
	LINE_NUMBER(1718);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_gen_UnitEntity_move_float_float(jcontext ctx, jobject self, jfloat param0, jfloat param1) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/UnitEntity:move", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	frame[2].f = param1;
	{
	LINE_NUMBER(1722);
	sp[0].o = (jobject)((func_mindustry_gen_UnitEntity_solidity_R_mindustry_entities_EntityCollisions$SolidPred) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_gen_UnitEntity_solidity_R_mindustry_entities_EntityCollisions$SolidPred])(ctx, (frame[0].o));
	frame[3].o = sp[0].o;
	LINE_NUMBER(1723);
	if ((frame[3].o) == nullptr) goto label_2;
	}
	{
	LINE_NUMBER(1724);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_collisions;
	((func_mindustry_entities_EntityCollisions_move_mindustry_gen_Hitboxc_float_float_mindustry_entities_EntityCollisions$SolidPred) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_entities_EntityCollisions_move_mindustry_gen_Hitboxc_float_float_mindustry_entities_EntityCollisions$SolidPred])(ctx, sp[0].o, (frame[0].o), (frame[1].f), (frame[2].f), (frame[3].o));
	goto label_4;
	}
label_2:;
	{
	LINE_NUMBER(1726);
	sp[0].o = frame[0].o;
	((mindustry_gen_Unit *) NULL_CHECK(sp[0].o))->F_x = (((jfloat)((mindustry_gen_Unit *) NULL_CHECK(sp[0].o))->F_x) + (frame[1].f));
	LINE_NUMBER(1727);
	sp[0].o = frame[0].o;
	((mindustry_gen_Unit *) NULL_CHECK(sp[0].o))->F_y = (((jfloat)((mindustry_gen_Unit *) NULL_CHECK(sp[0].o))->F_y) + (frame[2].f));
	}
label_4:;
	LINE_NUMBER(1729);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_gen_UnitEntity_moveAt_arc_math_geom_Vec2(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/UnitEntity:moveAt", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(1733);
	sp[0].o = frame[0].o;
	sp[1].o = frame[1].o;
	sp[2].o = (jobject)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_type;
	((func_mindustry_gen_UnitEntity_moveAt_arc_math_geom_Vec2_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_gen_UnitEntity_moveAt_arc_math_geom_Vec2_float])(ctx, sp[0].o, sp[1].o, ((jfloat)((mindustry_type_UnitType *) NULL_CHECK(sp[2].o))->F_accel));
	LINE_NUMBER(1734);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_gen_UnitEntity_moveAt_arc_math_geom_Vec2_float(jcontext ctx, jobject self, jobject param0, jfloat param1) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/UnitEntity:moveAt", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].f = param1;
	{
	LINE_NUMBER(1738);
	clinit_mindustry_gen_UnitEntity(ctx);
	sp[0].o = (jobject)SF_mindustry_gen_UnitEntity_tmp1;
	sp[0].o = (jobject)((func_arc_math_geom_Vec2_set_arc_math_geom_Vec2_R_arc_math_geom_Vec2) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Vec2_set_arc_math_geom_Vec2_R_arc_math_geom_Vec2])(ctx, sp[0].o, (frame[1].o));
	frame[3].o = sp[0].o;
	LINE_NUMBER(1739);
	clinit_mindustry_gen_UnitEntity(ctx);
	sp[0].o = (jobject)SF_mindustry_gen_UnitEntity_tmp2;
	sp[0].o = (jobject)((func_arc_math_geom_Vec2_set_arc_math_geom_Vec2_R_arc_math_geom_Vec2) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Vec2_set_arc_math_geom_Vec2_R_arc_math_geom_Vec2])(ctx, sp[0].o, (frame[3].o));
	sp[1].o = (jobject)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_vel;
	sp[0].o = (jobject)((func_arc_math_geom_Vec2_sub_arc_math_geom_Vec2_R_arc_math_geom_Vec2) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Vec2_sub_arc_math_geom_Vec2_R_arc_math_geom_Vec2])(ctx, sp[0].o, sp[1].o);
	jfloat temp0 = frame[2].f;
	jfloat temp1 = (jfloat)((func_arc_math_geom_Vec2_len_R_float) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_math_geom_Vec2_len_R_float])(ctx, (frame[1].o));
	sp[0].o = (jobject)((func_arc_math_geom_Vec2_limit_float_R_arc_math_geom_Vec2) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Vec2_limit_float_R_arc_math_geom_Vec2])(ctx, sp[0].o, ((temp0 * temp1) * (clinit_arc_util_Time(ctx), (jfloat)SF_arc_util_Time_delta)));
	LINE_NUMBER(1740);
	sp[0].o = (jobject)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_vel;
	clinit_mindustry_gen_UnitEntity(ctx);
	sp[1].o = (jobject)SF_mindustry_gen_UnitEntity_tmp2;
	sp[0].o = (jobject)((func_arc_math_geom_Vec2_add_arc_math_geom_Vec2_R_arc_math_geom_Vec2) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Vec2_add_arc_math_geom_Vec2_R_arc_math_geom_Vec2])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(1741);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_gen_UnitEntity_movePref_arc_math_geom_Vec2(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/UnitEntity:movePref", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(1745);
	sp[0].o = (jobject)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_type;
	if (((jint)((mindustry_type_UnitType *) NULL_CHECK(sp[0].o))->F_omniMovement) == 0) goto label_1;
	}
	{
	LINE_NUMBER(1746);
	((func_mindustry_gen_UnitEntity_moveAt_arc_math_geom_Vec2) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_gen_UnitEntity_moveAt_arc_math_geom_Vec2])(ctx, (frame[0].o), (frame[1].o));
	goto label_3;
	}
label_1:;
	{
	LINE_NUMBER(1748);
	((func_mindustry_gen_UnitEntity_rotateMove_arc_math_geom_Vec2) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_gen_UnitEntity_rotateMove_arc_math_geom_Vec2])(ctx, (frame[0].o), (frame[1].o));
	}
label_3:;
	LINE_NUMBER(1750);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_gen_UnitEntity_rawDamage_float(jcontext ctx, jobject self, jfloat param0) {
	NULL_CHECK(self);
	jtype frame[10];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/UnitEntity:rawDamage", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	if (std::isnan(frame[1].f) || std::isinf(frame[1].f) || frame[1].f < 0.0f) frame[1].f = 0.0f;
	if (std::isnan(((mindustry_gen_Unit *) NULL_CHECK(frame[0].o))->F_health)) {
		((mindustry_gen_Unit *) NULL_CHECK(frame[0].o))->F_health = ((mindustry_gen_Unit *) NULL_CHECK(frame[0].o))->F_maxHealth;
	}
	{
	LINE_NUMBER(1754);
	if ((floatCompare(((jfloat)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_shield), 0.0001f, -1)) <= 0) goto label_1;
	}
	INST_ICONST(1);
	goto label_2;
label_1:;
	INST_ICONST(0);
label_2:;
	{
	sp -= 1;
	frame[2].i = sp[0].i;
	LINE_NUMBER(1755);
	jint temp0 = (jint)SM_java_lang_Float_isNaN_float_R_boolean(ctx, ((jfloat)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_health));
	if (temp0 == 0) goto label_4;
	}
	{
	((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_health = ((mindustry_gen_Unit *) NULL_CHECK(frame[0].o))->F_maxHealth;
	}
label_4:;
	{
	LINE_NUMBER(1756);
	if ((frame[2].i) == 0) goto label_5;
	}
	{
	LINE_NUMBER(1757);
	((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_shieldAlpha = (jfloat(1));
	}
label_5:;
	{
	LINE_NUMBER(1759);
	jfloat temp0 = (jfloat)SM_java_lang_Math_max_float_float_R_float(ctx, ((jfloat)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_shield), (jfloat(0)));
	jfloat temp1 = (jfloat)SM_java_lang_Math_min_float_float_R_float(ctx, temp0, (frame[1].f));
	frame[3].f = temp1;
	LINE_NUMBER(1760);
	sp[0].o = frame[0].o;
	((mindustry_gen_Unit *) NULL_CHECK(sp[0].o))->F_shield = (((jfloat)((mindustry_gen_Unit *) NULL_CHECK(sp[0].o))->F_shield) - (frame[3].f));
	LINE_NUMBER(1761);
	((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_hitTime = (jfloat(1));
	LINE_NUMBER(1762);
	frame[1].f = ((frame[1].f) - (frame[3].f));
	LINE_NUMBER(1763);
	if ((floatCompare((frame[1].f), (jfloat(0)), -1)) <= 0) goto label_11;
	}
	{
	sp[0].o = (jobject)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_type;
	if (((jint)((mindustry_type_UnitType *) NULL_CHECK(sp[0].o))->F_killable) == 0) goto label_11;
	}
	{
	LINE_NUMBER(1764);
	sp[0].o = frame[0].o;
	((mindustry_gen_Unit *) NULL_CHECK(sp[0].o))->F_health = (((jfloat)((mindustry_gen_Unit *) NULL_CHECK(sp[0].o))->F_health) - (frame[1].f));
	LINE_NUMBER(1765);
	if (((jfloat)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_health) > 0.0f) goto label_14;
	}
	{
	if (((jint)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_dead) != 0) goto label_14;
	}
	{
	LINE_NUMBER(1766);
	((func_mindustry_gen_UnitEntity_kill) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_gen_UnitEntity_kill])(ctx, (frame[0].o));
	}
label_14:;
	{
	LINE_NUMBER(1768);
	if ((frame[2].i) == 0) goto label_11;
	}
	{
	if ((floatCompare(((jfloat)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_shield), 0.0001f, 1)) > 0) goto label_11;
	}
	{
	LINE_NUMBER(1769);
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
	LINE_NUMBER(1772);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_gen_UnitEntity_readSync_arc_util_io_Reads(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[10];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/UnitEntity:readSync", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(1775);
	if ((longCompare(((jlong)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_lastUpdated), (jlong(0)))) == 0) goto label_1;
	}
	{
	sp[0].o = frame[0].o;
	jlong temp0 = (jlong)SM_arc_util_Time_timeSinceMillis_long_R_long(ctx, ((jlong)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_lastUpdated));
	((mindustry_gen_Unit *) NULL_CHECK(sp[0].o))->F_updateSpacing = temp0;
	}
label_1:;
	{
	LINE_NUMBER(1776);
	sp[0].o = frame[0].o;
	jlong temp0 = (jlong)SM_arc_util_Time_millis_R_long(ctx);
	((mindustry_gen_Unit *) NULL_CHECK(sp[0].o))->F_lastUpdated = temp0;
	LINE_NUMBER(1777);
	jint temp1 = (jint)((func_mindustry_gen_UnitEntity_isLocal_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_gen_UnitEntity_isLocal_R_boolean])(ctx, (frame[0].o));
	frame[2].i = temp1;
	LINE_NUMBER(1778);
	sp[0].o = frame[0].o;
	sp[1].o = frame[1].o;
	sp[2].o = (jobject)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_abilities;
	sp[1].o = (jobject)SM_mindustry_io_TypeIO_readAbilities_arc_util_io_Reads_Array1_mindustry_entities_abilities_Ability_R_Array1_mindustry_entities_abilities_Ability(ctx, sp[1].o, sp[2].o);
	((mindustry_gen_Unit *) NULL_CHECK(sp[0].o))->F_abilities = (jref) sp[1].o;
	LINE_NUMBER(1779);
	sp[0].o = frame[0].o;
	jfloat temp2 = (jfloat)((func_arc_util_io_Reads_f_R_float) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_util_io_Reads_f_R_float])(ctx, (frame[1].o));
	((mindustry_gen_Unit *) NULL_CHECK(sp[0].o))->F_aimX = temp2;
	LINE_NUMBER(1780);
	sp[0].o = frame[0].o;
	jfloat temp3 = (jfloat)((func_arc_util_io_Reads_f_R_float) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_util_io_Reads_f_R_float])(ctx, (frame[1].o));
	((mindustry_gen_Unit *) NULL_CHECK(sp[0].o))->F_aimY = temp3;
	LINE_NUMBER(1781);
	sp[0].o = frame[0].o;
	sp[1].o = frame[1].o;
	sp[2].o = (jobject)((mindustry_gen_UnitEntity *) NULL_CHECK((frame[0].o)))->F_controller;
	sp[1].o = (jobject)SM_mindustry_io_TypeIO_readController_arc_util_io_Reads_mindustry_entities_units_UnitController_R_mindustry_entities_units_UnitController(ctx, sp[1].o, sp[2].o);
	((mindustry_gen_UnitEntity *) NULL_CHECK(sp[0].o))->F_controller = (jref) sp[1].o;
	LINE_NUMBER(1782);
	if ((frame[2].i) != 0) goto label_8;
	}
	{
	LINE_NUMBER(1783);
	sp[0].o = frame[0].o;
	jfloat temp0 = (jfloat)((func_arc_util_io_Reads_f_R_float) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_util_io_Reads_f_R_float])(ctx, (frame[1].o));
	((mindustry_gen_Unit *) NULL_CHECK(sp[0].o))->F_elevation = temp0;
	goto label_10;
	}
label_8:;
	{
	LINE_NUMBER(1785);
	jfloat temp0 = (jfloat)((func_arc_util_io_Reads_f_R_float) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_util_io_Reads_f_R_float])(ctx, (frame[1].o));
	}
label_10:;
	{
	LINE_NUMBER(1787);
	sp[0].o = frame[0].o;
	jdouble temp0 = (jdouble)((func_arc_util_io_Reads_d_R_double) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_util_io_Reads_d_R_double])(ctx, (frame[1].o));
	((mindustry_gen_Unit *) NULL_CHECK(sp[0].o))->F_flag = temp0;
	LINE_NUMBER(1788);
	sp[0].o = frame[0].o;
	jfloat temp1 = (jfloat)((func_arc_util_io_Reads_f_R_float) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_util_io_Reads_f_R_float])(ctx, (frame[1].o));
	((mindustry_gen_Unit *) NULL_CHECK(sp[0].o))->F_health = temp1;
	LINE_NUMBER(1789);
	sp[0].o = frame[0].o;
	jint temp2 = (jint)((func_arc_util_io_Reads_bool_R_boolean) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_util_io_Reads_bool_R_boolean])(ctx, (frame[1].o));
	((mindustry_gen_Unit *) NULL_CHECK(sp[0].o))->F_isShooting = temp2;
	LINE_NUMBER(1790);
	if ((frame[2].i) != 0) goto label_14;
	}
	{
	LINE_NUMBER(1791);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)SM_mindustry_io_TypeIO_readTile_arc_util_io_Reads_R_mindustry_world_Tile(ctx, (frame[1].o));
	((mindustry_gen_Unit *) NULL_CHECK(sp[0].o))->F_mineTile = (jref) sp[1].o;
	goto label_16;
	}
label_14:;
	{
	LINE_NUMBER(1793);
	sp[0].o = (jobject)SM_mindustry_io_TypeIO_readTile_arc_util_io_Reads_R_mindustry_world_Tile(ctx, (frame[1].o));
	}
label_16:;
	{
	LINE_NUMBER(1795);
	if ((frame[2].i) != 0) goto label_17;
	}
	{
	LINE_NUMBER(1796);
	sp[0].o = frame[0].o;
	sp[1].o = frame[1].o;
	sp[2].o = (jobject)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_mounts;
	sp[1].o = (jobject)SM_mindustry_io_TypeIO_readMounts_arc_util_io_Reads_Array1_mindustry_entities_units_WeaponMount_R_Array1_mindustry_entities_units_WeaponMount(ctx, sp[1].o, sp[2].o);
	((mindustry_gen_Unit *) NULL_CHECK(sp[0].o))->F_mounts = (jref) sp[1].o;
	goto label_19;
	}
label_17:;
	{
	LINE_NUMBER(1798);
	sp[0].o = (jobject)SM_mindustry_io_TypeIO_readMounts_arc_util_io_Reads_R_Array1_mindustry_entities_units_WeaponMount(ctx, (frame[1].o));
	}
label_19:;
	{
	LINE_NUMBER(1800);
	if ((frame[2].i) != 0) goto label_20;
	}
	{
	LINE_NUMBER(1801);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)SM_mindustry_io_TypeIO_readPlansQueueNet_arc_util_io_Reads_R_arc_struct_Queue(ctx, (frame[1].o));
	((mindustry_gen_Unit *) NULL_CHECK(sp[0].o))->F_plans = (jref) sp[1].o;
	goto label_22;
	}
label_20:;
	{
	LINE_NUMBER(1803);
	sp[0].o = (jobject)SM_mindustry_io_TypeIO_readPlansQueueNet_arc_util_io_Reads_R_arc_struct_Queue(ctx, (frame[1].o));
	}
label_22:;
	{
	LINE_NUMBER(1805);
	if ((frame[2].i) != 0) goto label_23;
	}
	{
	LINE_NUMBER(1806);
	((mindustry_gen_UnitEntity *) NULL_CHECK((frame[0].o)))->F_rotation_LAST_ = ((jfloat)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_rotation);
	LINE_NUMBER(1807);
	sp[0].o = frame[0].o;
	jfloat temp0 = (jfloat)((func_arc_util_io_Reads_f_R_float) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_util_io_Reads_f_R_float])(ctx, (frame[1].o));
	((mindustry_gen_UnitEntity *) NULL_CHECK(sp[0].o))->F_rotation_TARGET_ = temp0;
	goto label_26;
	}
label_23:;
	{
	LINE_NUMBER(1809);
	jfloat temp0 = (jfloat)((func_arc_util_io_Reads_f_R_float) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_util_io_Reads_f_R_float])(ctx, (frame[1].o));
	LINE_NUMBER(1810);
	((mindustry_gen_UnitEntity *) NULL_CHECK((frame[0].o)))->F_rotation_LAST_ = ((jfloat)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_rotation);
	LINE_NUMBER(1811);
	((mindustry_gen_UnitEntity *) NULL_CHECK((frame[0].o)))->F_rotation_TARGET_ = ((jfloat)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_rotation);
	}
label_26:;
	{
	LINE_NUMBER(1813);
	sp[0].o = frame[0].o;
	jfloat temp0 = (jfloat)((func_arc_util_io_Reads_f_R_float) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_util_io_Reads_f_R_float])(ctx, (frame[1].o));
	((mindustry_gen_Unit *) NULL_CHECK(sp[0].o))->F_shield = temp0;
	LINE_NUMBER(1814);
	sp[0].o = frame[0].o;
	jint temp1 = (jint)((func_arc_util_io_Reads_bool_R_boolean) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_util_io_Reads_bool_R_boolean])(ctx, (frame[1].o));
	((mindustry_gen_Unit *) NULL_CHECK(sp[0].o))->F_spawnedByCore = temp1;
	LINE_NUMBER(1815);
	sp[0].o = frame[0].o;
	sp[1].o = frame[1].o;
	sp[2].o = (jobject)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_stack;
	sp[1].o = (jobject)SM_mindustry_io_TypeIO_readItems_arc_util_io_Reads_mindustry_type_ItemStack_R_mindustry_type_ItemStack(ctx, sp[1].o, sp[2].o);
	((mindustry_gen_Unit *) NULL_CHECK(sp[0].o))->F_stack = (jref) sp[1].o;
	LINE_NUMBER(1816);
	jint temp2 = (jint)((func_arc_util_io_Reads_i_R_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_util_io_Reads_i_R_int])(ctx, (frame[1].o));
	frame[3].i = temp2;
	LINE_NUMBER(1817);
	sp[0].o = (jobject)((mindustry_gen_UnitEntity *) NULL_CHECK((frame[0].o)))->F_statuses;
	sp[0].o = (jobject)((func_arc_struct_Seq_clear_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_clear_R_arc_struct_Seq])(ctx, sp[0].o);
	LINE_NUMBER(1818);
	frame[4].i = (jint(0));
	}
label_34:;
	{
	if ((frame[4].i) >= (frame[3].i)) goto label_35;
	}
	{
	LINE_NUMBER(1819);
	sp[0].o = (jobject)SM_mindustry_io_TypeIO_readStatus_arc_util_io_Reads_R_mindustry_entities_units_StatusEntry(ctx, (frame[1].o));
	frame[5].o = sp[0].o;
	LINE_NUMBER(1820);
	if ((frame[5].o) == nullptr) goto label_38;
	}
	{
	sp[0].o = (jobject)((mindustry_gen_UnitEntity *) NULL_CHECK((frame[0].o)))->F_statuses;
	sp[0].o = (jobject)((func_arc_struct_Seq_add_java_lang_Object_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_add_java_lang_Object_R_arc_struct_Seq])(ctx, sp[0].o, (frame[5].o));
	}
label_38:;
	{
	LINE_NUMBER(1818);
	INST_IINC(4, 1);
	goto label_34;
	}
label_35:;
	{
	LINE_NUMBER(1822);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)SM_mindustry_io_TypeIO_readTeam_arc_util_io_Reads_R_mindustry_game_Team(ctx, (frame[1].o));
	((mindustry_gen_Unit *) NULL_CHECK(sp[0].o))->F_team = (jref) sp[1].o;
	LINE_NUMBER(1823);
	sp[0].o = frame[0].o;
	clinit_mindustry_Vars(ctx);
	sp[1].o = (jobject)SF_mindustry_Vars_content;
	clinit_mindustry_ctype_ContentType(ctx);
	sp[2].o = (jobject)SF_mindustry_ctype_ContentType_unit;
	jint temp0 = (jint)((func_arc_util_io_Reads_s_R_short) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_util_io_Reads_s_R_short])(ctx, (frame[1].o));
	sp[1].o = (jobject)((func_mindustry_core_ContentLoader_getByID_mindustry_ctype_ContentType_int_R_mindustry_ctype_Content) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_mindustry_core_ContentLoader_getByID_mindustry_ctype_ContentType_int_R_mindustry_ctype_Content])(ctx, sp[1].o, sp[2].o, temp0);
	((mindustry_gen_Unit *) NULL_CHECK(sp[0].o))->F_type = (jref) (checkCast(ctx, &class_mindustry_type_UnitType, sp[1].o));
	LINE_NUMBER(1824);
	if ((frame[2].i) != 0) goto label_41;
	}
	{
	LINE_NUMBER(1825);
	sp[0].o = frame[0].o;
	jint temp0 = (jint)((func_arc_util_io_Reads_bool_R_boolean) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_util_io_Reads_bool_R_boolean])(ctx, (frame[1].o));
	((mindustry_gen_Unit *) NULL_CHECK(sp[0].o))->F_updateBuilding = temp0;
	goto label_43;
	}
label_41:;
	{
	LINE_NUMBER(1827);
	jint temp0 = (jint)((func_arc_util_io_Reads_bool_R_boolean) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_util_io_Reads_bool_R_boolean])(ctx, (frame[1].o));
	}
label_43:;
	{
	LINE_NUMBER(1829);
	if ((frame[2].i) != 0) goto label_44;
	}
	{
	LINE_NUMBER(1830);
	sp[0].o = frame[0].o;
	sp[1].o = frame[1].o;
	sp[2].o = (jobject)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_vel;
	sp[1].o = (jobject)SM_mindustry_io_TypeIO_readVec2_arc_util_io_Reads_arc_math_geom_Vec2_R_arc_math_geom_Vec2(ctx, sp[1].o, sp[2].o);
	((mindustry_gen_Unit *) NULL_CHECK(sp[0].o))->F_vel = (jref) sp[1].o;
	goto label_46;
	}
label_44:;
	{
	LINE_NUMBER(1832);
	sp[0].o = (jobject)SM_mindustry_io_TypeIO_readVec2_arc_util_io_Reads_R_arc_math_geom_Vec2(ctx, (frame[1].o));
	}
label_46:;
	{
	LINE_NUMBER(1834);
	if ((frame[2].i) != 0) goto label_47;
	}
	{
	LINE_NUMBER(1835);
	((mindustry_gen_UnitEntity *) NULL_CHECK((frame[0].o)))->F_x_LAST_ = ((jfloat)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_x);
	LINE_NUMBER(1836);
	sp[0].o = frame[0].o;
	jfloat temp0 = (jfloat)((func_arc_util_io_Reads_f_R_float) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_util_io_Reads_f_R_float])(ctx, (frame[1].o));
	((mindustry_gen_UnitEntity *) NULL_CHECK(sp[0].o))->F_x_TARGET_ = temp0;
	goto label_50;
	}
label_47:;
	{
	LINE_NUMBER(1838);
	jfloat temp0 = (jfloat)((func_arc_util_io_Reads_f_R_float) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_util_io_Reads_f_R_float])(ctx, (frame[1].o));
	LINE_NUMBER(1839);
	((mindustry_gen_UnitEntity *) NULL_CHECK((frame[0].o)))->F_x_LAST_ = ((jfloat)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_x);
	LINE_NUMBER(1840);
	((mindustry_gen_UnitEntity *) NULL_CHECK((frame[0].o)))->F_x_TARGET_ = ((jfloat)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_x);
	}
label_50:;
	{
	LINE_NUMBER(1842);
	if ((frame[2].i) != 0) goto label_53;
	}
	{
	LINE_NUMBER(1843);
	((mindustry_gen_UnitEntity *) NULL_CHECK((frame[0].o)))->F_y_LAST_ = ((jfloat)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_y);
	LINE_NUMBER(1844);
	sp[0].o = frame[0].o;
	jfloat temp0 = (jfloat)((func_arc_util_io_Reads_f_R_float) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_util_io_Reads_f_R_float])(ctx, (frame[1].o));
	((mindustry_gen_UnitEntity *) NULL_CHECK(sp[0].o))->F_y_TARGET_ = temp0;
	goto label_56;
	}
label_53:;
	{
	LINE_NUMBER(1846);
	jfloat temp0 = (jfloat)((func_arc_util_io_Reads_f_R_float) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_util_io_Reads_f_R_float])(ctx, (frame[1].o));
	LINE_NUMBER(1847);
	((mindustry_gen_UnitEntity *) NULL_CHECK((frame[0].o)))->F_y_LAST_ = ((jfloat)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_y);
	LINE_NUMBER(1848);
	((mindustry_gen_UnitEntity *) NULL_CHECK((frame[0].o)))->F_y_TARGET_ = ((jfloat)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_y);
	}
label_56:;
	{
	LINE_NUMBER(1850);
	((func_mindustry_gen_UnitEntity_afterSync) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_gen_UnitEntity_afterSync])(ctx, (frame[0].o));
	LINE_NUMBER(1852);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_gen_UnitEntity_readSyncManual_java_nio_FloatBuffer(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/UnitEntity:readSyncManual", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(1855);
	if ((longCompare(((jlong)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_lastUpdated), (jlong(0)))) == 0) goto label_1;
	}
	{
	sp[0].o = frame[0].o;
	jlong temp0 = (jlong)SM_arc_util_Time_timeSinceMillis_long_R_long(ctx, ((jlong)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_lastUpdated));
	((mindustry_gen_Unit *) NULL_CHECK(sp[0].o))->F_updateSpacing = temp0;
	}
label_1:;
	{
	LINE_NUMBER(1856);
	sp[0].o = frame[0].o;
	jlong temp0 = (jlong)SM_arc_util_Time_millis_R_long(ctx);
	((mindustry_gen_Unit *) NULL_CHECK(sp[0].o))->F_lastUpdated = temp0;
	LINE_NUMBER(1857);
	((mindustry_gen_UnitEntity *) NULL_CHECK((frame[0].o)))->F_rotation_LAST_ = ((jfloat)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_rotation);
	LINE_NUMBER(1858);
	sp[0].o = frame[0].o;
	jfloat temp1 = (jfloat)((func_java_nio_FloatBuffer_get_R_float) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_nio_FloatBuffer_get_R_float])(ctx, (frame[1].o));
	((mindustry_gen_UnitEntity *) NULL_CHECK(sp[0].o))->F_rotation_TARGET_ = temp1;
	LINE_NUMBER(1859);
	((mindustry_gen_UnitEntity *) NULL_CHECK((frame[0].o)))->F_x_LAST_ = ((jfloat)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_x);
	LINE_NUMBER(1860);
	sp[0].o = frame[0].o;
	jfloat temp2 = (jfloat)((func_java_nio_FloatBuffer_get_R_float) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_nio_FloatBuffer_get_R_float])(ctx, (frame[1].o));
	((mindustry_gen_UnitEntity *) NULL_CHECK(sp[0].o))->F_x_TARGET_ = temp2;
	LINE_NUMBER(1861);
	((mindustry_gen_UnitEntity *) NULL_CHECK((frame[0].o)))->F_y_LAST_ = ((jfloat)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_y);
	LINE_NUMBER(1862);
	sp[0].o = frame[0].o;
	jfloat temp3 = (jfloat)((func_java_nio_FloatBuffer_get_R_float) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_nio_FloatBuffer_get_R_float])(ctx, (frame[1].o));
	((mindustry_gen_UnitEntity *) NULL_CHECK(sp[0].o))->F_y_TARGET_ = temp3;
	LINE_NUMBER(1864);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_gen_UnitEntity_remove(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[11];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/UnitEntity:remove", 11 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(1867);
	if (((jint)((mindustry_gen_UnitEntity *) NULL_CHECK((frame[0].o)))->F_added) != 0) goto label_1;
	}
	popStackFrame(ctx);
	INST_RETURN();
label_1:;
	{
	LINE_NUMBER(1868);
	clinit_mindustry_gen_Groups(ctx);
	sp[0].o = (jobject)SF_mindustry_gen_Groups_unit;
	((func_mindustry_entities_EntityGroup_removeIndex_mindustry_gen_Entityc_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_entities_EntityGroup_removeIndex_mindustry_gen_Entityc_int])(ctx, sp[0].o, (frame[0].o), ((jint)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_index__unit));
	LINE_NUMBER(1869);
	((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_index__unit = (jint(-1));
	LINE_NUMBER(1870);
	clinit_mindustry_gen_Groups(ctx);
	sp[0].o = (jobject)SF_mindustry_gen_Groups_sync;
	((func_mindustry_entities_EntityGroup_removeIndex_mindustry_gen_Entityc_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_entities_EntityGroup_removeIndex_mindustry_gen_Entityc_int])(ctx, sp[0].o, (frame[0].o), ((jint)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_index__sync));
	LINE_NUMBER(1871);
	((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_index__sync = (jint(-1));
	LINE_NUMBER(1872);
	clinit_mindustry_gen_Groups(ctx);
	sp[0].o = (jobject)SF_mindustry_gen_Groups_draw;
	((func_mindustry_entities_EntityGroup_removeIndex_mindustry_gen_Entityc_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_entities_EntityGroup_removeIndex_mindustry_gen_Entityc_int])(ctx, sp[0].o, (frame[0].o), ((jint)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_index__draw));
	LINE_NUMBER(1873);
	((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_index__draw = (jint(-1));
	LINE_NUMBER(1876);
	((mindustry_gen_UnitEntity *) NULL_CHECK((frame[0].o)))->F_added = (jint(0));
	LINE_NUMBER(1880);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_net;
	jint temp0 = (jint)((func_mindustry_net_Net_client_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_net_Net_client_R_boolean])(ctx, sp[0].o);
	if (temp0 == 0) goto label_9;
	}
	{
	LINE_NUMBER(1881);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_netClient;
	jint temp0 = (jint)((func_mindustry_gen_UnitEntity_id_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_gen_UnitEntity_id_R_int])(ctx, (frame[0].o));
	((func_mindustry_core_NetClient_addRemovedEntity_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_NetClient_addRemovedEntity_int])(ctx, sp[0].o, temp0);
	}
label_9:;
	{
	LINE_NUMBER(1886);
	sp[0].o = (jobject)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_team;
	sp[0].o = (jobject)((func_mindustry_game_Team_data_R_mindustry_game_Teams$TeamData) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_game_Team_data_R_mindustry_game_Teams$TeamData])(ctx, sp[0].o);
	sp[1].o = (jobject)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_type;
	((func_mindustry_game_Teams$TeamData_updateCount_mindustry_type_UnitType_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_game_Teams$TeamData_updateCount_mindustry_type_UnitType_int])(ctx, sp[0].o, sp[1].o, (jint(-1)));
	LINE_NUMBER(1887);
	sp[0].o = (jobject)((mindustry_gen_UnitEntity *) NULL_CHECK((frame[0].o)))->F_controller;
	((func_mindustry_entities_units_UnitController_removed_mindustry_gen_Unit) resolveInterfaceMethod(ctx, &class_mindustry_entities_units_UnitController, INDEX_mindustry_entities_units_UnitController_removed_mindustry_gen_Unit, sp[0].o))(ctx, sp[0].o, (frame[0].o));
	LINE_NUMBER(1888);
	sp[0].o = (jobject)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_trail;
	if (sp[0].o == nullptr) goto label_13;
	}
	{
	sp[0].o = (jobject)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_trail;
	jint temp0 = (jint)((func_mindustry_graphics_Trail_size_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_graphics_Trail_size_R_int])(ctx, sp[0].o);
	if (temp0 <= 0) goto label_13;
	}
	{
	LINE_NUMBER(1889);
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
	LINE_NUMBER(1894);
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
	LINE_NUMBER(1895);
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
	LINE_NUMBER(1896);
	sp[0].o = (jobject)((mindustry_entities_units_WeaponMount *) NULL_CHECK((frame[4].o)))->F_bullet;
	sp[1].o = (jobject)((mindustry_entities_units_WeaponMount *) NULL_CHECK((frame[4].o)))->F_bullet;
	((mindustry_gen_Bullet *) NULL_CHECK(sp[0].o))->F_time = (((jfloat)((mindustry_gen_Bullet *) NULL_CHECK(sp[1].o))->F_lifetime) - (jfloat(10.0f)));
	LINE_NUMBER(1897);
	((mindustry_entities_units_WeaponMount *) NULL_CHECK((frame[4].o)))->F_bullet = (jref) (jobject(nullptr));
	}
label_20:;
	{
	LINE_NUMBER(1899);
	sp[0].o = (jobject)((mindustry_entities_units_WeaponMount *) NULL_CHECK((frame[4].o)))->F_sound;
	if (sp[0].o == nullptr) goto label_23;
	}
	{
	LINE_NUMBER(1900);
	sp[0].o = (jobject)((mindustry_entities_units_WeaponMount *) NULL_CHECK((frame[4].o)))->F_sound;
	((func_mindustry_audio_SoundLoop_stop) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_audio_SoundLoop_stop])(ctx, sp[0].o);
	}
label_23:;
	{
	LINE_NUMBER(1894);
	INST_IINC(3, 1);
	goto label_17;
	}
label_18:;
	LINE_NUMBER(1904);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_gen_UnitEntity_removeBuild_int_int_boolean(jcontext ctx, jobject self, jint param0, jint param1, jbool param2) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/UnitEntity:removeBuild", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].i = param1;
	frame[3].i = param2;
	{
	LINE_NUMBER(1908);
	sp[0].o = (jobject)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_plans;
	{ /* InvokeDynamic */
		clinit_mindustry_gen_UnitEntity_invoke_arc_func_Boolf_17(ctx);
		auto proxy = (mindustry_gen_UnitEntity_invoke_arc_func_Boolf_17 *) gcAlloc(ctx, &class_mindustry_gen_UnitEntity_invoke_arc_func_Boolf_17);
		proxy->F_field2 = (frame[2].i);
		proxy->F_field1 = (frame[1].i);
		proxy->F_field0 = (frame[3].i);
		sp[1].o = (jobject) proxy;
	}
	jint temp0 = (jint)((func_arc_struct_Queue_indexOf_arc_func_Boolf_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Queue_indexOf_arc_func_Boolf_R_int])(ctx, sp[0].o, sp[1].o);
	frame[4].i = temp0;
	LINE_NUMBER(1909);
	if ((frame[4].i) == (jint(-1))) goto label_2;
	}
	{
	LINE_NUMBER(1910);
	sp[0].o = (jobject)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_plans;
	sp[0].o = (jobject)((func_arc_struct_Queue_removeIndex_int_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Queue_removeIndex_int_R_java_lang_Object])(ctx, sp[0].o, (frame[4].i));
	}
label_2:;
	LINE_NUMBER(1912);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_gen_UnitEntity_resetController(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/UnitEntity:resetController", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(1916);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_type;
	sp[1].o = (jobject)((func_mindustry_type_UnitType_createController_mindustry_gen_Unit_R_mindustry_entities_units_UnitController) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_mindustry_type_UnitType_createController_mindustry_gen_Unit_R_mindustry_entities_units_UnitController])(ctx, sp[1].o, (frame[0].o));
	((func_mindustry_gen_UnitEntity_controller_mindustry_entities_units_UnitController) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_gen_UnitEntity_controller_mindustry_entities_units_UnitController])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(1917);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_gen_UnitEntity_rotateMove_arc_math_geom_Vec2(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/UnitEntity:rotateMove", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(1921);
	sp[0].o = frame[0].o;
	clinit_arc_util_Tmp(ctx);
	sp[1].o = (jobject)SF_arc_util_Tmp_v2;
	jfloat temp0 = (jfloat)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_rotation;
	jfloat temp1 = (jfloat)((func_arc_math_geom_Vec2_len_R_float) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_math_geom_Vec2_len_R_float])(ctx, (frame[1].o));
	sp[1].o = (jobject)((func_arc_math_geom_Vec2_trns_float_float_R_arc_math_geom_Vec2) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_math_geom_Vec2_trns_float_float_R_arc_math_geom_Vec2])(ctx, sp[1].o, temp0, temp1);
	((func_mindustry_gen_UnitEntity_moveAt_arc_math_geom_Vec2) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_gen_UnitEntity_moveAt_arc_math_geom_Vec2])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(1922);
	jint temp2 = (jint)((func_arc_math_geom_Vec2_isZero_R_boolean) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_math_geom_Vec2_isZero_R_boolean])(ctx, (frame[1].o));
	if (temp2 != 0) goto label_2;
	}
	{
	LINE_NUMBER(1923);
	sp[0].o = frame[0].o;
	jfloat temp0 = (jfloat)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_rotation;
	jfloat temp1 = (jfloat)((func_arc_math_geom_Vec2_angle_R_float) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_math_geom_Vec2_angle_R_float])(ctx, (frame[1].o));
	sp[1].o = (jobject)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_type;
	jfloat temp2 = (jfloat)SM_arc_math_Angles_moveToward_float_float_float_R_float(ctx, temp0, temp1, ((((jfloat)((mindustry_type_UnitType *) NULL_CHECK(sp[1].o))->F_rotateSpeed) * (clinit_arc_util_Time(ctx), (jfloat)SF_arc_util_Time_delta)) * ((jfloat)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_speedMultiplier)));
	((mindustry_gen_Unit *) NULL_CHECK(sp[0].o))->F_rotation = temp2;
	}
label_2:;
	LINE_NUMBER(1925);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_gen_UnitEntity_set_arc_math_geom_Position(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/UnitEntity:set", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(1929);
	sp[0].o = frame[0].o;
	jfloat temp0 = (jfloat)((func_arc_math_geom_Position_getX_R_float) resolveInterfaceMethod(ctx, &class_arc_math_geom_Position, INDEX_arc_math_geom_Position_getX_R_float, (frame[1].o)))(ctx, (frame[1].o));
	jfloat temp1 = (jfloat)((func_arc_math_geom_Position_getY_R_float) resolveInterfaceMethod(ctx, &class_arc_math_geom_Position, INDEX_arc_math_geom_Position_getY_R_float, (frame[1].o)))(ctx, (frame[1].o));
	((func_mindustry_gen_UnitEntity_set_float_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_gen_UnitEntity_set_float_float])(ctx, sp[0].o, temp0, temp1);
	LINE_NUMBER(1930);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_gen_UnitEntity_set_float_float(jcontext ctx, jobject self, jfloat param0, jfloat param1) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/UnitEntity:set", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	frame[2].f = param1;
	{
	LINE_NUMBER(1934);
	((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_x = (frame[1].f);
	LINE_NUMBER(1935);
	((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_y = (frame[2].f);
	LINE_NUMBER(1936);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_gen_UnitEntity_set_mindustry_type_UnitType_mindustry_entities_units_UnitController(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/UnitEntity:set", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(1940);
	sp[0].o = (jobject)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_type;
	if (sp[0].o == (frame[1].o)) goto label_1;
	}
	{
	LINE_NUMBER(1941);
	((func_mindustry_gen_UnitEntity_setType_mindustry_type_UnitType) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_gen_UnitEntity_setType_mindustry_type_UnitType])(ctx, (frame[0].o), (frame[1].o));
	}
label_1:;
	{
	LINE_NUMBER(1943);
	((func_mindustry_gen_UnitEntity_controller_mindustry_entities_units_UnitController) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_gen_UnitEntity_controller_mindustry_entities_units_UnitController])(ctx, (frame[0].o), (frame[2].o));
	LINE_NUMBER(1944);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_gen_UnitEntity_setDuration_mindustry_type_StatusEffect_float(jcontext ctx, jobject self, jobject param0, jfloat param1) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/UnitEntity:setDuration", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].f = param1;
	{
	LINE_NUMBER(1948);
	((func_mindustry_gen_UnitEntity_applyStatus_mindustry_type_StatusEffect_float_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_gen_UnitEntity_applyStatus_mindustry_type_StatusEffect_float_boolean])(ctx, (frame[0].o), (frame[1].o), (frame[2].f), (jint(1)));
	LINE_NUMBER(1949);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_gen_UnitEntity_setProp_mindustry_ctype_UnlockableContent_double(jcontext ctx, jobject self, jobject param0, jdouble param1) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/UnitEntity:setProp", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].d = param1;
	{
	LINE_NUMBER(1953);
	if ((isInstance(ctx, (frame[1].o), &class_mindustry_type_Item)) == 0) goto label_1;
	}
	{
	frame[4].o = (checkCast(ctx, &class_mindustry_type_Item, (frame[1].o)));
	LINE_NUMBER(1954);
	sp[0].o = (jobject)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_stack;
	((mindustry_type_ItemStack *) NULL_CHECK(sp[0].o))->F_item = (jref) (frame[4].o);
	LINE_NUMBER(1955);
	sp[0].o = (jobject)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_stack;
	jint temp0 = jint((frame[2].d));
	jint temp1 = jint(0);
	sp[1].o = (jobject)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_type;
	jint temp2 = (jint)SM_arc_math_Mathf_clamp_int_int_int_R_int(ctx, temp0, temp1, ((jint)((mindustry_type_UnitType *) NULL_CHECK(sp[1].o))->F_itemCapacity));
	((mindustry_type_ItemStack *) NULL_CHECK(sp[0].o))->F_amount = temp2;
	}
label_1:;
	{
	LINE_NUMBER(1957);
	if ((isInstance(ctx, (frame[1].o), &class_mindustry_type_StatusEffect)) == 0) goto label_4;
	}
	{
	frame[4].o = (checkCast(ctx, &class_mindustry_type_StatusEffect, (frame[1].o)));
	LINE_NUMBER(1958);
	((func_mindustry_gen_UnitEntity_setDuration_mindustry_type_StatusEffect_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_gen_UnitEntity_setDuration_mindustry_type_StatusEffect_float])(ctx, (frame[0].o), (frame[4].o), ((jfloat((frame[2].d))) * (jfloat(60.0f))));
	}
label_4:;
	LINE_NUMBER(1960);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_gen_UnitEntity_setProp_mindustry_logic_LAccess_double(jcontext ctx, jobject self, jobject param0, jdouble param1) {
	NULL_CHECK(self);
	jtype frame[14];
	auto stack = &frame[7];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/UnitEntity:setProp", 14 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].d = param1;
	{
	LINE_NUMBER(1964);
	clinit_mindustry_gen_UnitEntity$1(ctx);
	sp[0].o = (jobject)SF_mindustry_gen_UnitEntity$1_$SwitchMap$mindustry$logic$LAccess;
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
	LINE_NUMBER(1966);
	sp[0].o = frame[0].o;
	jdouble temp0 = (jdouble)SM_arc_math_Mathf_clamp_double_double_double_R_double(ctx, (frame[2].d), (jdouble(0)), (jdouble(((jfloat)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_maxHealth))));
	((mindustry_gen_Unit *) NULL_CHECK(sp[0].o))->F_health = (jfloat(temp0));
	LINE_NUMBER(1967);
	if ((floatCompare(((jfloat)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_health), (jfloat(0)), 1)) > 0) goto label_4;
	}
	{
	if (((jint)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_dead) != 0) goto label_4;
	}
	{
	LINE_NUMBER(1968);
	((func_mindustry_gen_UnitEntity_kill) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_gen_UnitEntity_kill])(ctx, (frame[0].o));
	goto label_4;
	}
label_3:;
	{
	LINE_NUMBER(1971);
	sp[0].o = frame[0].o;
	jfloat temp0 = (jfloat)SM_java_lang_Math_max_float_float_R_float(ctx, (jfloat((frame[2].d))), (jfloat(0)));
	((mindustry_gen_Unit *) NULL_CHECK(sp[0].o))->F_shield = temp0;
	goto label_4;
	}
label_5:;
	{
	LINE_NUMBER(1973);
	sp[0].o = frame[0].o;
	jfloat temp0 = (jfloat)SM_mindustry_core_World_unconv_float_R_float(ctx, (jfloat((frame[2].d))));
	((mindustry_gen_Unit *) NULL_CHECK(sp[0].o))->F_x = temp0;
	LINE_NUMBER(1974);
	jint temp1 = (jint)((func_mindustry_gen_UnitEntity_isLocal_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_gen_UnitEntity_isLocal_R_boolean])(ctx, (frame[0].o));
	if (temp1 != 0) goto label_4;
	}
	{
	((func_mindustry_gen_UnitEntity_snapInterpolation) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_gen_UnitEntity_snapInterpolation])(ctx, (frame[0].o));
	goto label_4;
	}
label_6:;
	{
	LINE_NUMBER(1977);
	sp[0].o = frame[0].o;
	jfloat temp0 = (jfloat)SM_mindustry_core_World_unconv_float_R_float(ctx, (jfloat((frame[2].d))));
	((mindustry_gen_Unit *) NULL_CHECK(sp[0].o))->F_y = temp0;
	LINE_NUMBER(1978);
	jint temp1 = (jint)((func_mindustry_gen_UnitEntity_isLocal_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_gen_UnitEntity_isLocal_R_boolean])(ctx, (frame[0].o));
	if (temp1 != 0) goto label_4;
	}
	{
	((func_mindustry_gen_UnitEntity_snapInterpolation) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_gen_UnitEntity_snapInterpolation])(ctx, (frame[0].o));
	goto label_4;
	}
label_7:;
	{
	LINE_NUMBER(1980);
	sp[0].o = (jobject)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_vel;
	((arc_math_geom_Vec2 *) NULL_CHECK(sp[0].o))->F_x = (jfloat((((frame[2].d) * (jdouble(8.0))) / (jdouble(60.0)))));
	goto label_4;
	}
label_8:;
	{
	LINE_NUMBER(1981);
	sp[0].o = (jobject)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_vel;
	((arc_math_geom_Vec2 *) NULL_CHECK(sp[0].o))->F_y = (jfloat((((frame[2].d) * (jdouble(8.0))) / (jdouble(60.0)))));
	goto label_4;
	}
label_1:;
	{
	LINE_NUMBER(1982);
	((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_rotation = (jfloat((frame[2].d)));
	goto label_4;
	}
label_9:;
	{
	LINE_NUMBER(1984);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_net;
	jint temp0 = (jint)((func_mindustry_net_Net_client_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_net_Net_client_R_boolean])(ctx, sp[0].o);
	if (temp0 != 0) goto label_4;
	}
	{
	LINE_NUMBER(1985);
	sp[0].o = (jobject)SM_mindustry_game_Team_get_int_R_mindustry_game_Team(ctx, (jint((frame[2].d))));
	frame[4].o = sp[0].o;
	LINE_NUMBER(1986);
	sp[0].o = (jobject)((mindustry_gen_UnitEntity *) NULL_CHECK((frame[0].o)))->F_controller;
	frame[6].o = sp[0].o;
	if ((isInstance(ctx, (frame[6].o), &class_mindustry_gen_Player)) == 0) goto label_19;
	}
	{
	frame[5].o = (checkCast(ctx, &class_mindustry_gen_Player, (frame[6].o)));
	LINE_NUMBER(1987);
	((func_mindustry_gen_Player_team_mindustry_game_Team) ((void **) nullCheck(ctx, (frame[5].o))->vtable)[VTABLE_mindustry_gen_Player_team_mindustry_game_Team])(ctx, (frame[5].o), (frame[4].o));
	}
label_19:;
	{
	LINE_NUMBER(1989);
	((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_team = (jref) (frame[4].o);
	LINE_NUMBER(1990);
	goto label_4;
	}
label_11:;
	{
	LINE_NUMBER(1992);
	((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_flag = (frame[2].d);
	goto label_4;
	}
label_12:;
	{
	LINE_NUMBER(1993);
	sp[0].o = frame[0].o;
	jfloat temp0 = (jfloat)SM_arc_math_Mathf_clamp_float_float_float_R_float(ctx, (jfloat((frame[2].d))), (jfloat(0)), (jfloat(1000.0f)));
	((func_mindustry_gen_UnitEntity_statusSpeed_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_gen_UnitEntity_statusSpeed_float])(ctx, sp[0].o, temp0);
	goto label_4;
	}
label_10:;
	{
	LINE_NUMBER(1994);
	sp[0].o = frame[0].o;
	jfloat temp0 = (jfloat)SM_java_lang_Math_max_float_float_R_float(ctx, (jfloat((frame[2].d))), (jfloat(0)));
	((func_mindustry_gen_UnitEntity_statusArmor_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_gen_UnitEntity_statusArmor_float])(ctx, sp[0].o, temp0);
	}
label_4:;
	LINE_NUMBER(1996);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_gen_UnitEntity_setProp_mindustry_logic_LAccess_java_lang_Object(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[11];
	auto stack = &frame[7];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/UnitEntity:setProp", 11 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(2000);
	clinit_mindustry_gen_UnitEntity$1(ctx);
	sp[0].o = (jobject)SF_mindustry_gen_UnitEntity$1_$SwitchMap$mindustry$logic$LAccess;
	jint temp0 = (jint)((func_mindustry_logic_LAccess_ordinal_R_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_logic_LAccess_ordinal_R_int])(ctx, (frame[1].o));
	switch(((jint)ARRAY_ACCESS(jint, sp[0].o, temp0))) {
		case 13: goto label_1;
		case 44: goto label_2;
		default: goto label_3;
	}
	}
label_1:;
	{
	LINE_NUMBER(2002);
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
	LINE_NUMBER(2003);
	sp[0].o = (jobject)((mindustry_gen_UnitEntity *) NULL_CHECK((frame[0].o)))->F_controller;
	frame[5].o = sp[0].o;
	if ((isInstance(ctx, (frame[5].o), &class_mindustry_gen_Player)) == 0) goto label_7;
	}
	{
	frame[4].o = (checkCast(ctx, &class_mindustry_gen_Player, (frame[5].o)));
	((func_mindustry_gen_Player_team_mindustry_game_Team) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_mindustry_gen_Player_team_mindustry_game_Team])(ctx, (frame[4].o), (frame[3].o));
	}
label_7:;
	{
	LINE_NUMBER(2004);
	((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_team = (jref) (frame[3].o);
	}
label_4:;
	LINE_NUMBER(2006);
	goto label_3;
label_2:;
	{
	LINE_NUMBER(2008);
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
	LINE_NUMBER(2009);
	if ((isInstance(ctx, (frame[2].o), &class_mindustry_world_Block)) == 0) goto label_11;
	}
	{
	frame[4].o = (checkCast(ctx, &class_mindustry_world_Block, (frame[2].o)));
	LINE_NUMBER(2010);
	jint temp0 = (jint)((func_mindustry_world_Block_synthetic_R_boolean) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_mindustry_world_Block_synthetic_R_boolean])(ctx, (frame[4].o));
	if (temp0 == 0) goto label_3;
	}
	{
	LINE_NUMBER(2011);
	sp[0].o = (jobject)((func_mindustry_world_Block_newBuilding_R_mindustry_gen_Building) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_mindustry_world_Block_newBuilding_R_mindustry_gen_Building])(ctx, (frame[4].o));
	sp[1].o = frame[4].o;
	sp[2].o = (jobject)((func_mindustry_gen_UnitEntity_team_R_mindustry_game_Team) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_gen_UnitEntity_team_R_mindustry_game_Team])(ctx, (frame[0].o));
	sp[0].o = (jobject)((func_mindustry_gen_Building_create_mindustry_world_Block_mindustry_game_Team_R_mindustry_gen_Building) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_gen_Building_create_mindustry_world_Block_mindustry_game_Team_R_mindustry_gen_Building])(ctx, sp[0].o, sp[1].o, sp[2].o);
	frame[6].o = sp[0].o;
	LINE_NUMBER(2012);
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
	LINE_NUMBER(2013);
	goto label_3;
label_11:;
	{
	LINE_NUMBER(2014);
	if ((isInstance(ctx, (frame[2].o), &class_mindustry_type_UnitType)) == 0) goto label_16;
	}
	{
	frame[5].o = (checkCast(ctx, &class_mindustry_type_UnitType, (frame[2].o)));
	LINE_NUMBER(2015);
	sp[0].o = frame[5].o;
	sp[1].o = (jobject)((func_mindustry_gen_UnitEntity_team_R_mindustry_game_Team) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_gen_UnitEntity_team_R_mindustry_game_Team])(ctx, (frame[0].o));
	sp[0].o = (jobject)((func_mindustry_type_UnitType_create_mindustry_game_Team_R_mindustry_gen_Unit) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_type_UnitType_create_mindustry_game_Team_R_mindustry_gen_Unit])(ctx, sp[0].o, sp[1].o);
	frame[6].o = sp[0].o;
	LINE_NUMBER(2016);
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
	LINE_NUMBER(2017);
	goto label_3;
label_16:;
	INST_ALOAD(2);
	if ((--sp)->o != nullptr) goto label_3;
	{
	sp[0].o = (jobject)((func_mindustry_gen_Payloadc_payloads_R_arc_struct_Seq) resolveInterfaceMethod(ctx, &class_mindustry_gen_Payloadc, INDEX_mindustry_gen_Payloadc_payloads_R_arc_struct_Seq, (frame[3].o)))(ctx, (frame[3].o));
	if (((jint)((arc_struct_Seq *) NULL_CHECK(sp[0].o))->F_size) <= 0) goto label_3;
	}
	{
	LINE_NUMBER(2018);
	sp[0].o = (jobject)((func_mindustry_gen_Payloadc_payloads_R_arc_struct_Seq) resolveInterfaceMethod(ctx, &class_mindustry_gen_Payloadc, INDEX_mindustry_gen_Payloadc_payloads_R_arc_struct_Seq, (frame[3].o)))(ctx, (frame[3].o));
	sp[0].o = (jobject)((func_arc_struct_Seq_pop_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_pop_R_java_lang_Object])(ctx, sp[0].o);
	}
label_3:;
	LINE_NUMBER(2023);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_gen_UnitEntity_setType_mindustry_type_UnitType(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/UnitEntity:setType", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(2027);
	((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_type = (jref) (frame[1].o);
	LINE_NUMBER(2028);
	((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_maxHealth = ((jfloat)((mindustry_type_UnitType *) NULL_CHECK((frame[1].o)))->F_health);
	LINE_NUMBER(2029);
	((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_drag = ((jfloat)((mindustry_type_UnitType *) NULL_CHECK((frame[1].o)))->F_drag);
	LINE_NUMBER(2030);
	((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_armor = ((jfloat)((mindustry_type_UnitType *) NULL_CHECK((frame[1].o)))->F_armor);
	LINE_NUMBER(2031);
	((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_hitSize = ((jfloat)((mindustry_type_UnitType *) NULL_CHECK((frame[1].o)))->F_hitSize);
	LINE_NUMBER(2032);
	sp[0].o = (jobject)((func_mindustry_gen_UnitEntity_mounts_R_Array1_mindustry_entities_units_WeaponMount) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_gen_UnitEntity_mounts_R_Array1_mindustry_entities_units_WeaponMount])(ctx, (frame[0].o));
	jint temp0 = ((jarray) nullCheck(ctx, sp[0].o))->length;
	sp[0].o = (jobject)((mindustry_type_UnitType *) NULL_CHECK((frame[1].o)))->F_weapons;
	if (temp0 == ((jint)((arc_struct_Seq *) NULL_CHECK(sp[0].o))->F_size)) goto label_6;
	}
	{
	((func_mindustry_gen_UnitEntity_setupWeapons_mindustry_type_UnitType) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_gen_UnitEntity_setupWeapons_mindustry_type_UnitType])(ctx, (frame[0].o), (frame[1].o));
	}
label_6:;
	{
	LINE_NUMBER(2033);
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
	LINE_NUMBER(2034);
	sp[0].o = (jobject)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_abilities;
	frame[2].o = sp[0].o;
	LINE_NUMBER(2035);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((mindustry_type_UnitType *) NULL_CHECK((frame[1].o)))->F_abilities;
	sp[1].o = (jobject)createArray(ctx, &class_mindustry_entities_abilities_Ability, ((jint)((arc_struct_Seq *) NULL_CHECK(sp[1].o))->F_size));
	((mindustry_gen_Unit *) NULL_CHECK(sp[0].o))->F_abilities = (jref) sp[1].o;
	LINE_NUMBER(2036);
	frame[3].i = (jint(0));
	}
label_11:;
	{
	jint temp0 = frame[3].i;
	sp[0].o = (jobject)((mindustry_type_UnitType *) NULL_CHECK((frame[1].o)))->F_abilities;
	if (temp0 >= ((jint)((arc_struct_Seq *) NULL_CHECK(sp[0].o))->F_size)) goto label_8;
	}
	{
	LINE_NUMBER(2037);
	sp[0].o = (jobject)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_abilities;
	jint temp0 = frame[3].i;
	sp[1].o = (jobject)((mindustry_type_UnitType *) NULL_CHECK((frame[1].o)))->F_abilities;
	sp[1].o = (jobject)((func_arc_struct_Seq_get_int_R_java_lang_Object) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_struct_Seq_get_int_R_java_lang_Object])(ctx, sp[1].o, (frame[3].i));
	sp[1].o = (jobject)((func_mindustry_entities_abilities_Ability_copy_R_mindustry_entities_abilities_Ability) ((void **) nullCheck(ctx, (checkCast(ctx, &class_mindustry_entities_abilities_Ability, sp[1].o)))->vtable)[VTABLE_mindustry_entities_abilities_Ability_copy_R_mindustry_entities_abilities_Ability])(ctx, (checkCast(ctx, &class_mindustry_entities_abilities_Ability, sp[1].o)));
	ARRAY_ACCESS(jobject, sp[0].o, temp0) = sp[1].o;
	LINE_NUMBER(2038);
	if ((frame[3].i) >= (((jarray) nullCheck(ctx, (frame[2].o)))->length)) goto label_14;
	}
	{
	LINE_NUMBER(2039);
	sp[0].o = (jobject)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_abilities;
	((mindustry_entities_abilities_Ability *) NULL_CHECK(((jobject)ARRAY_ACCESS(jobject, sp[0].o, (frame[3].i)))))->F_data = ((jfloat)((mindustry_entities_abilities_Ability *) NULL_CHECK(((jobject)ARRAY_ACCESS(jobject, (frame[2].o), (frame[3].i)))))->F_data);
	}
label_14:;
	{
	LINE_NUMBER(2036);
	INST_IINC(3, 1);
	goto label_11;
	}
label_8:;
	{
	LINE_NUMBER(2043);
	sp[0].o = (jobject)((mindustry_gen_UnitEntity *) NULL_CHECK((frame[0].o)))->F_controller;
	if (sp[0].o != nullptr) goto label_16;
	}
	{
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((func_mindustry_type_UnitType_createController_mindustry_gen_Unit_R_mindustry_entities_units_UnitController) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_type_UnitType_createController_mindustry_gen_Unit_R_mindustry_entities_units_UnitController])(ctx, (frame[1].o), (frame[0].o));
	((func_mindustry_gen_UnitEntity_controller_mindustry_entities_units_UnitController) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_gen_UnitEntity_controller_mindustry_entities_units_UnitController])(ctx, sp[0].o, sp[1].o);
	}
label_16:;
	LINE_NUMBER(2044);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_gen_UnitEntity_setWeaponRotation_float(jcontext ctx, jobject self, jfloat param0) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/UnitEntity:setWeaponRotation", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	{
	LINE_NUMBER(2048);
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
	LINE_NUMBER(2049);
	((mindustry_entities_units_WeaponMount *) NULL_CHECK((frame[5].o)))->F_rotation = (frame[1].f);
	LINE_NUMBER(2048);
	INST_IINC(4, 1);
	goto label_1;
	}
label_2:;
	LINE_NUMBER(2051);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_gen_UnitEntity_setupWeapons_mindustry_type_UnitType(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/UnitEntity:setupWeapons", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(2055);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((mindustry_type_UnitType *) NULL_CHECK((frame[1].o)))->F_weapons;
	sp[1].o = (jobject)createArray(ctx, &class_mindustry_entities_units_WeaponMount, ((jint)((arc_struct_Seq *) NULL_CHECK(sp[1].o))->F_size));
	((mindustry_gen_Unit *) NULL_CHECK(sp[0].o))->F_mounts = (jref) sp[1].o;
	LINE_NUMBER(2056);
	frame[2].i = (jint(0));
	}
label_2:;
	{
	jint temp0 = frame[2].i;
	sp[0].o = (jobject)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_mounts;
	if (temp0 >= (((jarray) nullCheck(ctx, sp[0].o))->length)) goto label_3;
	}
	{
	LINE_NUMBER(2057);
	sp[0].o = (jobject)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_mounts;
	jint temp0 = frame[2].i;
	sp[1].o = (jobject)((mindustry_type_UnitType *) NULL_CHECK((frame[1].o)))->F_weapons;
	sp[1].o = (jobject)((func_arc_struct_Seq_get_int_R_java_lang_Object) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_struct_Seq_get_int_R_java_lang_Object])(ctx, sp[1].o, (frame[2].i));
	sp[1].o = (jobject)((mindustry_type_Weapon *) NULL_CHECK((checkCast(ctx, &class_mindustry_type_Weapon, sp[1].o))))->F_mountType;
	sp[2].o = (jobject)((mindustry_type_UnitType *) NULL_CHECK((frame[1].o)))->F_weapons;
	sp[2].o = (jobject)((func_arc_struct_Seq_get_int_R_java_lang_Object) ((void **) nullCheck(ctx, sp[2].o)->vtable)[VTABLE_arc_struct_Seq_get_int_R_java_lang_Object])(ctx, sp[2].o, (frame[2].i));
	sp[1].o = (jobject)((func_arc_func_Func_get_java_lang_Object_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_arc_func_Func, INDEX_arc_func_Func_get_java_lang_Object_R_java_lang_Object, sp[1].o))(ctx, sp[1].o, (checkCast(ctx, &class_mindustry_type_Weapon, sp[2].o)));
	ARRAY_ACCESS(jobject, sp[0].o, temp0) = (checkCast(ctx, &class_mindustry_entities_units_WeaponMount, sp[1].o));
	LINE_NUMBER(2056);
	INST_IINC(2, 1);
	goto label_2;
	}
label_3:;
	LINE_NUMBER(2059);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_gen_UnitEntity_snapInterpolation(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/UnitEntity:snapInterpolation", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(2062);
	((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_updateSpacing = (jlong(16ll));
	LINE_NUMBER(2063);
	sp[0].o = frame[0].o;
	jlong temp0 = (jlong)SM_arc_util_Time_millis_R_long(ctx);
	((mindustry_gen_Unit *) NULL_CHECK(sp[0].o))->F_lastUpdated = temp0;
	LINE_NUMBER(2064);
	((mindustry_gen_UnitEntity *) NULL_CHECK((frame[0].o)))->F_rotation_LAST_ = ((jfloat)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_rotation);
	LINE_NUMBER(2065);
	((mindustry_gen_UnitEntity *) NULL_CHECK((frame[0].o)))->F_rotation_TARGET_ = ((jfloat)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_rotation);
	LINE_NUMBER(2066);
	((mindustry_gen_UnitEntity *) NULL_CHECK((frame[0].o)))->F_x_LAST_ = ((jfloat)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_x);
	LINE_NUMBER(2067);
	((mindustry_gen_UnitEntity *) NULL_CHECK((frame[0].o)))->F_x_TARGET_ = ((jfloat)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_x);
	LINE_NUMBER(2068);
	((mindustry_gen_UnitEntity *) NULL_CHECK((frame[0].o)))->F_y_LAST_ = ((jfloat)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_y);
	LINE_NUMBER(2069);
	((mindustry_gen_UnitEntity *) NULL_CHECK((frame[0].o)))->F_y_TARGET_ = ((jfloat)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_y);
	LINE_NUMBER(2071);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_gen_UnitEntity_snapSync(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/UnitEntity:snapSync", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(2074);
	((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_updateSpacing = (jlong(16ll));
	LINE_NUMBER(2075);
	sp[0].o = frame[0].o;
	jlong temp0 = (jlong)SM_arc_util_Time_millis_R_long(ctx);
	((mindustry_gen_Unit *) NULL_CHECK(sp[0].o))->F_lastUpdated = temp0;
	LINE_NUMBER(2076);
	((mindustry_gen_UnitEntity *) NULL_CHECK((frame[0].o)))->F_rotation_LAST_ = ((jfloat)((mindustry_gen_UnitEntity *) NULL_CHECK((frame[0].o)))->F_rotation_TARGET_);
	LINE_NUMBER(2077);
	((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_rotation = ((jfloat)((mindustry_gen_UnitEntity *) NULL_CHECK((frame[0].o)))->F_rotation_TARGET_);
	LINE_NUMBER(2078);
	((mindustry_gen_UnitEntity *) NULL_CHECK((frame[0].o)))->F_x_LAST_ = ((jfloat)((mindustry_gen_UnitEntity *) NULL_CHECK((frame[0].o)))->F_x_TARGET_);
	LINE_NUMBER(2079);
	((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_x = ((jfloat)((mindustry_gen_UnitEntity *) NULL_CHECK((frame[0].o)))->F_x_TARGET_);
	LINE_NUMBER(2080);
	((mindustry_gen_UnitEntity *) NULL_CHECK((frame[0].o)))->F_y_LAST_ = ((jfloat)((mindustry_gen_UnitEntity *) NULL_CHECK((frame[0].o)))->F_y_TARGET_);
	LINE_NUMBER(2081);
	((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_y = ((jfloat)((mindustry_gen_UnitEntity *) NULL_CHECK((frame[0].o)))->F_y_TARGET_);
	LINE_NUMBER(2083);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_gen_UnitEntity_statusArmor_float(jcontext ctx, jobject self, jfloat param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/UnitEntity:statusArmor", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	{
	LINE_NUMBER(2087);
	sp[0].o = (jobject)((func_mindustry_gen_UnitEntity_applyDynamicStatus_R_mindustry_entities_units_StatusEntry) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_gen_UnitEntity_applyDynamicStatus_R_mindustry_entities_units_StatusEntry])(ctx, (frame[0].o));
	((mindustry_entities_units_StatusEntry *) NULL_CHECK(sp[0].o))->F_armorOverride = (frame[1].f);
	LINE_NUMBER(2088);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_gen_UnitEntity_statusBuildSpeed_float(jcontext ctx, jobject self, jfloat param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/UnitEntity:statusBuildSpeed", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	{
	LINE_NUMBER(2092);
	sp[0].o = (jobject)((func_mindustry_gen_UnitEntity_applyDynamicStatus_R_mindustry_entities_units_StatusEntry) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_gen_UnitEntity_applyDynamicStatus_R_mindustry_entities_units_StatusEntry])(ctx, (frame[0].o));
	jfloat temp0 = frame[1].f;
	sp[1].o = (jobject)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_type;
	((mindustry_entities_units_StatusEntry *) NULL_CHECK(sp[0].o))->F_buildSpeedMultiplier = (temp0 / ((jfloat)((mindustry_type_UnitType *) NULL_CHECK(sp[1].o))->F_buildSpeed));
	LINE_NUMBER(2093);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_gen_UnitEntity_statusDamageMultiplier_float(jcontext ctx, jobject self, jfloat param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/UnitEntity:statusDamageMultiplier", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	{
	LINE_NUMBER(2097);
	sp[0].o = (jobject)((func_mindustry_gen_UnitEntity_applyDynamicStatus_R_mindustry_entities_units_StatusEntry) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_gen_UnitEntity_applyDynamicStatus_R_mindustry_entities_units_StatusEntry])(ctx, (frame[0].o));
	((mindustry_entities_units_StatusEntry *) NULL_CHECK(sp[0].o))->F_damageMultiplier = (frame[1].f);
	LINE_NUMBER(2098);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_gen_UnitEntity_statusDrag_float(jcontext ctx, jobject self, jfloat param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/UnitEntity:statusDrag", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	{
	LINE_NUMBER(2102);
	sp[0].o = (jobject)((func_mindustry_gen_UnitEntity_applyDynamicStatus_R_mindustry_entities_units_StatusEntry) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_gen_UnitEntity_applyDynamicStatus_R_mindustry_entities_units_StatusEntry])(ctx, (frame[0].o));
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
	LINE_NUMBER(2103);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_gen_UnitEntity_statusMaxHealth_float(jcontext ctx, jobject self, jfloat param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/UnitEntity:statusMaxHealth", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	{
	LINE_NUMBER(2107);
	sp[0].o = (jobject)((func_mindustry_gen_UnitEntity_applyDynamicStatus_R_mindustry_entities_units_StatusEntry) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_gen_UnitEntity_applyDynamicStatus_R_mindustry_entities_units_StatusEntry])(ctx, (frame[0].o));
	((mindustry_entities_units_StatusEntry *) NULL_CHECK(sp[0].o))->F_healthMultiplier = ((frame[1].f) / ((jfloat)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_maxHealth));
	LINE_NUMBER(2108);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_gen_UnitEntity_statusReloadMultiplier_float(jcontext ctx, jobject self, jfloat param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/UnitEntity:statusReloadMultiplier", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	{
	LINE_NUMBER(2112);
	sp[0].o = (jobject)((func_mindustry_gen_UnitEntity_applyDynamicStatus_R_mindustry_entities_units_StatusEntry) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_gen_UnitEntity_applyDynamicStatus_R_mindustry_entities_units_StatusEntry])(ctx, (frame[0].o));
	((mindustry_entities_units_StatusEntry *) NULL_CHECK(sp[0].o))->F_reloadMultiplier = (frame[1].f);
	LINE_NUMBER(2113);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_gen_UnitEntity_statusSpeed_float(jcontext ctx, jobject self, jfloat param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/UnitEntity:statusSpeed", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	{
	LINE_NUMBER(2117);
	sp[0].o = (jobject)((func_mindustry_gen_UnitEntity_applyDynamicStatus_R_mindustry_entities_units_StatusEntry) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_gen_UnitEntity_applyDynamicStatus_R_mindustry_entities_units_StatusEntry])(ctx, (frame[0].o));
	jfloat temp0 = frame[1].f;
	sp[1].o = (jobject)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_type;
	((mindustry_entities_units_StatusEntry *) NULL_CHECK(sp[0].o))->F_speedMultiplier = (temp0 / ((((jfloat)((mindustry_type_UnitType *) NULL_CHECK(sp[1].o))->F_speed) * (jfloat(60.0f))) / (jfloat(8.0f))));
	LINE_NUMBER(2118);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_gen_UnitEntity_trns_arc_math_geom_Position(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/UnitEntity:trns", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(2122);
	sp[0].o = frame[0].o;
	jfloat temp0 = (jfloat)((func_arc_math_geom_Position_getX_R_float) resolveInterfaceMethod(ctx, &class_arc_math_geom_Position, INDEX_arc_math_geom_Position_getX_R_float, (frame[1].o)))(ctx, (frame[1].o));
	jfloat temp1 = (jfloat)((func_arc_math_geom_Position_getY_R_float) resolveInterfaceMethod(ctx, &class_arc_math_geom_Position, INDEX_arc_math_geom_Position_getY_R_float, (frame[1].o)))(ctx, (frame[1].o));
	((func_mindustry_gen_UnitEntity_trns_float_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_gen_UnitEntity_trns_float_float])(ctx, sp[0].o, temp0, temp1);
	LINE_NUMBER(2123);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_gen_UnitEntity_trns_float_float(jcontext ctx, jobject self, jfloat param0, jfloat param1) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/UnitEntity:trns", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	frame[2].f = param1;
	{
	LINE_NUMBER(2127);
	((func_mindustry_gen_UnitEntity_set_float_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_gen_UnitEntity_set_float_float])(ctx, (frame[0].o), (((jfloat)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_x) + (frame[1].f)), (((jfloat)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_y) + (frame[2].f)));
	LINE_NUMBER(2128);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_gen_UnitEntity_unapply_mindustry_type_StatusEffect(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/UnitEntity:unapply", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(2132);
	sp[0].o = (jobject)((mindustry_gen_UnitEntity *) NULL_CHECK((frame[0].o)))->F_statuses;
	{ /* InvokeDynamic */
		clinit_mindustry_gen_UnitEntity_invoke_arc_func_Boolf_18(ctx);
		auto proxy = (mindustry_gen_UnitEntity_invoke_arc_func_Boolf_18 *) gcAlloc(ctx, &class_mindustry_gen_UnitEntity_invoke_arc_func_Boolf_18);
		proxy->F_field1 = (jref) (frame[1].o);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[1].o = (jobject) proxy;
	}
	jint temp0 = (jint)((func_arc_struct_Seq_remove_arc_func_Boolf_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_remove_arc_func_Boolf_R_boolean])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(2140);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_gen_UnitEntity_unloaded(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[1];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/UnitEntity:unloaded", 1 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	LINE_NUMBER(2144);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_gen_UnitEntity_update(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[17];
	auto stack = &frame[9];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/UnitEntity:update", 17 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(2149);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_net;
	jint temp0 = (jint)((func_mindustry_net_Net_client_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_net_Net_client_R_boolean])(ctx, sp[0].o);
	if (temp0 == 0) goto label_1;
	}
	{
	jint temp0 = (jint)((func_mindustry_gen_UnitEntity_isLocal_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_gen_UnitEntity_isLocal_R_boolean])(ctx, (frame[0].o));
	if (temp0 == 0) goto label_2;
	}
label_1:;
	{
	LINE_NUMBER(2150);
	frame[1].f = ((jfloat)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_x);
	LINE_NUMBER(2151);
	frame[2].f = ((jfloat)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_y);
	LINE_NUMBER(2152);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_vel;
	jfloat temp0 = ((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK(sp[1].o))->F_x) * (clinit_arc_util_Time(ctx), (jfloat)SF_arc_util_Time_delta);
	sp[1].o = (jobject)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_vel;
	((func_mindustry_gen_UnitEntity_move_float_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_gen_UnitEntity_move_float_float])(ctx, sp[0].o, temp0, (((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK(sp[1].o))->F_y) * (clinit_arc_util_Time(ctx), (jfloat)SF_arc_util_Time_delta)));
	LINE_NUMBER(2153);
	jint temp1 = (jint)SM_arc_math_Mathf_equal_float_float_R_boolean(ctx, (frame[1].f), ((jfloat)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_x));
	if (temp1 == 0) goto label_6;
	}
	{
	sp[0].o = (jobject)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_vel;
	((arc_math_geom_Vec2 *) NULL_CHECK(sp[0].o))->F_x = (jfloat(0));
	}
label_6:;
	{
	LINE_NUMBER(2154);
	jint temp0 = (jint)SM_arc_math_Mathf_equal_float_float_R_boolean(ctx, (frame[2].f), ((jfloat)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_y));
	if (temp0 == 0) goto label_7;
	}
	{
	sp[0].o = (jobject)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_vel;
	((arc_math_geom_Vec2 *) NULL_CHECK(sp[0].o))->F_y = (jfloat(0));
	}
label_7:;
	{
	LINE_NUMBER(2155);
	sp[0].o = (jobject)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_vel;
	jfloat temp0 = (jfloat)SM_java_lang_Math_max_float_float_R_float(ctx, ((jfloat(1)) - (((jfloat)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_drag) * (clinit_arc_util_Time(ctx), (jfloat)SF_arc_util_Time_delta))), (jfloat(0)));
	sp[0].o = (jobject)((func_arc_math_geom_Vec2_scl_float_R_arc_math_geom_Vec2) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Vec2_scl_float_R_arc_math_geom_Vec2])(ctx, sp[0].o, temp0);
	}
label_2:;
	{
	LINE_NUMBER(2160);
	((func_mindustry_gen_UnitEntity_updateBuildLogic) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_gen_UnitEntity_updateBuildLogic])(ctx, (frame[0].o));
	LINE_NUMBER(2167);
	sp[0].o = frame[0].o;
	((mindustry_gen_Unit *) NULL_CHECK(sp[0].o))->F_hitTime = (((jfloat)((mindustry_gen_Unit *) NULL_CHECK(sp[0].o))->F_hitTime) - ((clinit_arc_util_Time(ctx), (jfloat)SF_arc_util_Time_delta) / (jfloat(9.0f))));
	LINE_NUMBER(2174);
	sp[0].o = (jobject)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_stack;
	sp[1].o = (jobject)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_stack;
	jint temp0 = (jint)((mindustry_type_ItemStack *) NULL_CHECK(sp[1].o))->F_amount;
	jint temp1 = jint(0);
	jint temp2 = (jint)((func_mindustry_gen_UnitEntity_itemCapacity_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_gen_UnitEntity_itemCapacity_R_int])(ctx, (frame[0].o));
	jint temp3 = (jint)SM_arc_math_Mathf_clamp_int_int_int_R_int(ctx, temp0, temp1, temp2);
	((mindustry_type_ItemStack *) NULL_CHECK(sp[0].o))->F_amount = temp3;
	LINE_NUMBER(2175);
	sp[0].o = frame[0].o;
	jfloat temp4 = (jfloat)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_itemTime;
	jint temp5 = (jint)((func_mindustry_gen_UnitEntity_hasItem_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_gen_UnitEntity_hasItem_R_boolean])(ctx, (frame[0].o));
	jint temp6 = (jint)SM_arc_math_Mathf_num_boolean_R_int(ctx, temp5);
	jfloat temp7 = (jfloat)SM_arc_math_Mathf_lerpDelta_float_float_float_R_float(ctx, temp4, (jfloat(temp6)), (jfloat(0.05f)));
	((mindustry_gen_Unit *) NULL_CHECK(sp[0].o))->F_itemTime = temp7;
	LINE_NUMBER(2179);
	sp[0].o = (jobject)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_mineTile;
	if (sp[0].o != nullptr) goto label_12;
	}
	goto label_13;
label_12:;
	{
	LINE_NUMBER(2180);
	sp[0].o = (jobject)((func_mindustry_gen_UnitEntity_closestCore_R_mindustry_world_blocks_storage_CoreBlock$CoreBuild) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_gen_UnitEntity_closestCore_R_mindustry_world_blocks_storage_CoreBlock$CoreBuild])(ctx, (frame[0].o));
	frame[1].o = sp[0].o;
	LINE_NUMBER(2181);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_mineTile;
	sp[0].o = (jobject)((func_mindustry_gen_UnitEntity_getMineResult_mindustry_world_Tile_R_mindustry_type_Item) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_gen_UnitEntity_getMineResult_mindustry_world_Tile_R_mindustry_type_Item])(ctx, sp[0].o, sp[1].o);
	frame[2].o = sp[0].o;
	LINE_NUMBER(2182);
	if ((frame[1].o) == nullptr) goto label_16;
	}
	INST_ALOAD(2);
	if ((--sp)->o == nullptr) goto label_16;
	{
	jint temp0 = (jint)((func_mindustry_gen_UnitEntity_acceptsItem_mindustry_type_Item_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_gen_UnitEntity_acceptsItem_mindustry_type_Item_R_boolean])(ctx, (frame[0].o), (frame[2].o));
	if (temp0 != 0) goto label_16;
	}
	{
	jint temp0 = (jint)((func_mindustry_gen_UnitEntity_within_arc_math_geom_Position_float_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_gen_UnitEntity_within_arc_math_geom_Position_float_R_boolean])(ctx, (frame[0].o), (frame[1].o), (jfloat(220.0f)));
	if (temp0 == 0) goto label_16;
	}
	{
	jint temp0 = (jint)((func_mindustry_gen_UnitEntity_offloadImmediately_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_gen_UnitEntity_offloadImmediately_R_boolean])(ctx, (frame[0].o));
	if (temp0 != 0) goto label_16;
	}
	{
	LINE_NUMBER(2183);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((func_mindustry_gen_UnitEntity_item_R_mindustry_type_Item) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_gen_UnitEntity_item_R_mindustry_type_Item])(ctx, (frame[0].o));
	sp[2].o = (jobject)((func_mindustry_gen_UnitEntity_stack_R_mindustry_type_ItemStack) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_gen_UnitEntity_stack_R_mindustry_type_ItemStack])(ctx, (frame[0].o));
	jint temp0 = (jint)((func_mindustry_gen_Building_acceptStack_mindustry_type_Item_int_mindustry_gen_Teamc_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_gen_Building_acceptStack_mindustry_type_Item_int_mindustry_gen_Teamc_R_int])(ctx, sp[0].o, sp[1].o, ((jint)((mindustry_type_ItemStack *) NULL_CHECK(sp[2].o))->F_amount), (frame[0].o));
	frame[3].i = temp0;
	LINE_NUMBER(2184);
	if ((frame[3].i) <= 0) goto label_16;
	}
	{
	LINE_NUMBER(2185);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((func_mindustry_gen_UnitEntity_item_R_mindustry_type_Item) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_gen_UnitEntity_item_R_mindustry_type_Item])(ctx, (frame[0].o));
	jint temp0 = frame[3].i;
	sp[2].o = (jobject)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_mineTile;
	jfloat temp1 = (jfloat)((func_mindustry_world_Tile_worldx_R_float) ((void **) nullCheck(ctx, sp[2].o)->vtable)[VTABLE_mindustry_world_Tile_worldx_R_float])(ctx, sp[2].o);
	jfloat temp2 = (jfloat)SM_arc_math_Mathf_range_float_R_float(ctx, (jfloat(4.0f)));
	jfloat temp3 = temp1 + temp2;
	sp[2].o = (jobject)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_mineTile;
	jfloat temp4 = (jfloat)((func_mindustry_world_Tile_worldy_R_float) ((void **) nullCheck(ctx, sp[2].o)->vtable)[VTABLE_mindustry_world_Tile_worldy_R_float])(ctx, sp[2].o);
	jfloat temp5 = (jfloat)SM_arc_math_Mathf_range_float_R_float(ctx, (jfloat(4.0f)));
	SM_mindustry_gen_Call_transferItemTo_mindustry_gen_Unit_mindustry_type_Item_int_float_float_mindustry_gen_Building(ctx, sp[0].o, sp[1].o, temp0, temp3, (temp4 + temp5), (frame[1].o));
	LINE_NUMBER(2186);
	((func_mindustry_gen_UnitEntity_clearItem) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_gen_UnitEntity_clearItem])(ctx, (frame[0].o));
	}
label_16:;
	{
	LINE_NUMBER(2189);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_net;
	jint temp0 = (jint)((func_mindustry_net_Net_client_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_net_Net_client_R_boolean])(ctx, sp[0].o);
	if (temp0 == 0) goto label_21;
	}
	{
	jint temp0 = (jint)((func_mindustry_gen_UnitEntity_isLocal_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_gen_UnitEntity_isLocal_R_boolean])(ctx, (frame[0].o));
	if (temp0 == 0) goto label_22;
	}
label_21:;
	{
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_mineTile;
	jint temp0 = (jint)((func_mindustry_gen_UnitEntity_validMine_mindustry_world_Tile_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_gen_UnitEntity_validMine_mindustry_world_Tile_R_boolean])(ctx, sp[0].o, sp[1].o);
	if (temp0 != 0) goto label_22;
	}
	{
	LINE_NUMBER(2190);
	((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_mineTile = (jref) (jobject(nullptr));
	LINE_NUMBER(2191);
	((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_mineTimer = (jfloat(0));
	goto label_13;
	}
label_22:;
	{
	LINE_NUMBER(2192);
	jint temp0 = (jint)((func_mindustry_gen_UnitEntity_mining_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_gen_UnitEntity_mining_R_boolean])(ctx, (frame[0].o));
	if (temp0 == 0) goto label_13;
	}
	INST_ALOAD(2);
	if ((--sp)->o == nullptr) goto label_13;
	{
	LINE_NUMBER(2193);
	clinit_arc_util_Time(ctx);
	jfloat temp0 = (jfloat)SF_arc_util_Time_delta;
	sp[0].o = (jobject)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_type;
	jfloat temp1 = temp0 * ((jfloat)((mindustry_type_UnitType *) NULL_CHECK(sp[0].o))->F_mineSpeed);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	sp[0].o = (jobject)((mindustry_core_GameState *) NULL_CHECK(sp[0].o))->F_rules;
	sp[1].o = (jobject)((func_mindustry_gen_UnitEntity_team_R_mindustry_game_Team) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_gen_UnitEntity_team_R_mindustry_game_Team])(ctx, (frame[0].o));
	jfloat temp2 = (jfloat)((func_mindustry_game_Rules_unitMineSpeed_mindustry_game_Team_R_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_game_Rules_unitMineSpeed_mindustry_game_Team_R_float])(ctx, sp[0].o, sp[1].o);
	frame[3].f = (temp1 * temp2);
	LINE_NUMBER(2194);
	sp[0].o = frame[0].o;
	((mindustry_gen_Unit *) NULL_CHECK(sp[0].o))->F_mineTimer = (((jfloat)((mindustry_gen_Unit *) NULL_CHECK(sp[0].o))->F_mineTimer) + (frame[3].f));
	LINE_NUMBER(2195);
	jint temp3 = (jint)SM_arc_math_Mathf_chance_double_R_boolean(ctx, (jdouble(((jfloat(0.035f)) * (frame[3].f)))));
	if (temp3 == 0) goto label_28;
	}
	{
	LINE_NUMBER(2196);
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
label_28:;
	{
	LINE_NUMBER(2198);
	jfloat temp0 = (jfloat)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_mineTimer;
	jfloat temp1 = jfloat(50.0f);
	sp[0].o = (jobject)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_type;
	jobject temp2 = sp[0].o;
	sp[0].f = temp0;
	sp[1].f = temp1;
	sp += 2;
	if (((jint)((mindustry_type_UnitType *) NULL_CHECK(temp2))->F_mineHardnessScaling) == 0) goto label_30;
	}
	{
	jfloat temp0 = (jfloat(((jint)((mindustry_type_Item *) NULL_CHECK((frame[2].o)))->F_hardness))) * (jfloat(15.0f));
	sp[0].f = temp0;
	sp += 1;
	goto label_31;
	}
label_30:;
	(sp++)->f = jfloat(15.0f);
label_31:;
	{
	sp -= 3;
	if ((floatCompare(sp[0].f, (sp[1].f + sp[2].f), -1)) < 0) goto label_32;
	}
	{
	LINE_NUMBER(2199);
	((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_mineTimer = (jfloat(0));
	LINE_NUMBER(2200);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	sp[0].o = (jobject)((mindustry_core_GameState *) NULL_CHECK(sp[0].o))->F_rules;
	sp[0].o = (jobject)((mindustry_game_Rules *) NULL_CHECK(sp[0].o))->F_sector;
	if (sp[0].o == nullptr) goto label_35;
	}
	{
	sp[0].o = (jobject)((func_mindustry_gen_UnitEntity_team_R_mindustry_game_Team) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_gen_UnitEntity_team_R_mindustry_game_Team])(ctx, (frame[0].o));
	clinit_mindustry_Vars(ctx);
	sp[1].o = (jobject)SF_mindustry_Vars_state;
	sp[1].o = (jobject)((mindustry_core_GameState *) NULL_CHECK(sp[1].o))->F_rules;
	sp[1].o = (jobject)((mindustry_game_Rules *) NULL_CHECK(sp[1].o))->F_defaultTeam;
	if (sp[0].o != sp[1].o) goto label_35;
	}
	{
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	sp[0].o = (jobject)((mindustry_core_GameState *) NULL_CHECK(sp[0].o))->F_rules;
	sp[0].o = (jobject)((mindustry_game_Rules *) NULL_CHECK(sp[0].o))->F_sector;
	sp[0].o = (jobject)((mindustry_type_Sector *) NULL_CHECK(sp[0].o))->F_info;
	((func_mindustry_game_SectorInfo_handleProduction_mindustry_type_Item_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_game_SectorInfo_handleProduction_mindustry_type_Item_int])(ctx, sp[0].o, (frame[2].o), (jint(1)));
	}
label_35:;
	{
	LINE_NUMBER(2201);
	if ((frame[1].o) == nullptr) goto label_36;
	}
	{
	jint temp0 = (jint)((func_mindustry_gen_UnitEntity_within_arc_math_geom_Position_float_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_gen_UnitEntity_within_arc_math_geom_Position_float_R_boolean])(ctx, (frame[0].o), (frame[1].o), (jfloat(220.0f)));
	if (temp0 == 0) goto label_36;
	}
	{
	jint temp0 = (jint)((func_mindustry_gen_Building_acceptStack_mindustry_type_Item_int_mindustry_gen_Teamc_R_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_gen_Building_acceptStack_mindustry_type_Item_int_mindustry_gen_Teamc_R_int])(ctx, (frame[1].o), (frame[2].o), (jint(1)), (frame[0].o));
	if (temp0 != (jint(1))) goto label_36;
	}
	{
	jint temp0 = (jint)((func_mindustry_gen_UnitEntity_offloadImmediately_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_gen_UnitEntity_offloadImmediately_R_boolean])(ctx, (frame[0].o));
	if (temp0 == 0) goto label_36;
	}
	{
	LINE_NUMBER(2202);
	sp[0].o = (jobject)((func_mindustry_gen_UnitEntity_item_R_mindustry_type_Item) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_gen_UnitEntity_item_R_mindustry_type_Item])(ctx, (frame[0].o));
	if (sp[0].o != (frame[2].o)) goto label_38;
	}
	{
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_net;
	jint temp0 = (jint)((func_mindustry_net_Net_client_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_net_Net_client_R_boolean])(ctx, sp[0].o);
	if (temp0 != 0) goto label_38;
	}
	{
	((func_mindustry_gen_UnitEntity_addItem_mindustry_type_Item) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_gen_UnitEntity_addItem_mindustry_type_Item])(ctx, (frame[0].o), (frame[2].o));
	}
label_38:;
	{
	LINE_NUMBER(2203);
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
	goto label_32;
	}
label_36:;
	{
	LINE_NUMBER(2204);
	jint temp0 = (jint)((func_mindustry_gen_UnitEntity_acceptsItem_mindustry_type_Item_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_gen_UnitEntity_acceptsItem_mindustry_type_Item_R_boolean])(ctx, (frame[0].o), (frame[2].o));
	if (temp0 == 0) goto label_39;
	}
	{
	LINE_NUMBER(2205);
	sp[0].o = frame[2].o;
	sp[1].o = (jobject)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_mineTile;
	jfloat temp0 = (jfloat)((func_mindustry_world_Tile_worldx_R_float) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_mindustry_world_Tile_worldx_R_float])(ctx, sp[1].o);
	jfloat temp1 = (jfloat)SM_arc_math_Mathf_range_float_R_float(ctx, (jfloat(4.0f)));
	jfloat temp2 = temp0 + temp1;
	sp[1].o = (jobject)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_mineTile;
	jfloat temp3 = (jfloat)((func_mindustry_world_Tile_worldy_R_float) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_mindustry_world_Tile_worldy_R_float])(ctx, sp[1].o);
	jfloat temp4 = (jfloat)SM_arc_math_Mathf_range_float_R_float(ctx, (jfloat(4.0f)));
	SM_mindustry_input_InputHandler_transferItemToUnit_mindustry_type_Item_float_float_mindustry_gen_Itemsc(ctx, sp[0].o, temp2, (temp3 + temp4), (frame[0].o));
	goto label_32;
	}
label_39:;
	{
	LINE_NUMBER(2207);
	((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_mineTile = (jref) (jobject(nullptr));
	LINE_NUMBER(2208);
	((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_mineTimer = (jfloat(0));
	}
label_32:;
	{
	LINE_NUMBER(2211);
	if ((clinit_mindustry_Vars(ctx), (jint)SF_mindustry_Vars_headless) != 0) goto label_13;
	}
	{
	LINE_NUMBER(2212);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_control;
	sp[0].o = (jobject)((mindustry_core_Control *) NULL_CHECK(sp[0].o))->F_sound;
	sp[1].o = (jobject)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_type;
	sp[1].o = (jobject)((mindustry_type_UnitType *) NULL_CHECK(sp[1].o))->F_mineSound;
	sp[2].o = frame[0].o;
	sp[3].o = (jobject)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_type;
	((func_mindustry_audio_SoundControl_loop_arc_audio_Sound_arc_math_geom_Position_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_audio_SoundControl_loop_arc_audio_Sound_arc_math_geom_Position_float])(ctx, sp[0].o, sp[1].o, sp[2].o, ((jfloat)((mindustry_type_UnitType *) NULL_CHECK(sp[3].o))->F_mineSoundVolume));
	}
label_13:;
	{
	LINE_NUMBER(2218);
	sp[0].o = frame[0].o;
	((mindustry_gen_Unit *) NULL_CHECK(sp[0].o))->F_shieldAlpha = (((jfloat)((mindustry_gen_Unit *) NULL_CHECK(sp[0].o))->F_shieldAlpha) - ((clinit_arc_util_Time(ctx), (jfloat)SF_arc_util_Time_delta) / (jfloat(15.0f))));
	LINE_NUMBER(2219);
	if ((floatCompare(((jfloat)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_shieldAlpha), (jfloat(0)), 1)) >= 0) goto label_44;
	}
	{
	((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_shieldAlpha = (jfloat(0));
	}
label_44:;
	{
	LINE_NUMBER(2223);
	sp[0].o = (jobject)((func_mindustry_gen_UnitEntity_floorOn_R_mindustry_world_blocks_environment_Floor) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_gen_UnitEntity_floorOn_R_mindustry_world_blocks_environment_Floor])(ctx, (frame[0].o));
	frame[1].o = sp[0].o;
	LINE_NUMBER(2224);
	jint temp0 = (jint)((func_mindustry_gen_UnitEntity_isGrounded_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_gen_UnitEntity_isGrounded_R_boolean])(ctx, (frame[0].o));
	if (temp0 == 0) goto label_46;
	}
	{
	sp[0].o = (jobject)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_type;
	if (((jint)((mindustry_type_UnitType *) NULL_CHECK(sp[0].o))->F_hovering) != 0) goto label_46;
	}
	{
	LINE_NUMBER(2225);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((mindustry_world_blocks_environment_Floor *) NULL_CHECK((frame[1].o)))->F_status;
	((func_mindustry_gen_UnitEntity_apply_mindustry_type_StatusEffect_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_gen_UnitEntity_apply_mindustry_type_StatusEffect_float])(ctx, sp[0].o, sp[1].o, ((jfloat)((mindustry_world_blocks_environment_Floor *) NULL_CHECK((frame[1].o)))->F_statusDuration));
	}
label_46:;
	{
	LINE_NUMBER(2227);
	sp[0].o = (jobject)((mindustry_gen_UnitEntity *) NULL_CHECK((frame[0].o)))->F_applied;
	((func_arc_struct_Bits_clear) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Bits_clear])(ctx, sp[0].o);
	LINE_NUMBER(2228);
	((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_armorOverride = (jfloat(-1.0f));
	LINE_NUMBER(2229);
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
	LINE_NUMBER(2230);
	((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_disarmed = (jint(0));
	LINE_NUMBER(2231);
	sp[0].o = (jobject)((mindustry_gen_UnitEntity *) NULL_CHECK((frame[0].o)))->F_statuses;
	jint temp11 = (jint)((func_arc_struct_Seq_isEmpty_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_isEmpty_R_boolean])(ctx, sp[0].o);
	if (temp11 == 0) goto label_52;
	}
	goto label_53;
label_52:;
	{
	LINE_NUMBER(2232);
	frame[2].i = (jint(0));
	}
label_54:;
	{
	LINE_NUMBER(2233);
	jint temp0 = frame[2].i;
	sp[0].o = (jobject)((mindustry_gen_UnitEntity *) NULL_CHECK((frame[0].o)))->F_statuses;
	if (temp0 >= ((jint)((arc_struct_Seq *) NULL_CHECK(sp[0].o))->F_size)) goto label_53;
	}
	{
	LINE_NUMBER(2234);
	sp[0].o = (jobject)((mindustry_gen_UnitEntity *) NULL_CHECK((frame[0].o)))->F_statuses;
	jint temp0 = frame[2].i;
	INST_IINC(2, 1);
	sp[0].o = (jobject)((func_arc_struct_Seq_get_int_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_get_int_R_java_lang_Object])(ctx, sp[0].o, temp0);
	frame[3].o = (checkCast(ctx, &class_mindustry_entities_units_StatusEntry, sp[0].o));
	LINE_NUMBER(2235);
	sp[0].o = frame[3].o;
	jfloat temp1 = (jfloat)SM_java_lang_Math_max_float_float_R_float(ctx, (((jfloat)((mindustry_entities_units_StatusEntry *) NULL_CHECK((frame[3].o)))->F_time) - (clinit_arc_util_Time(ctx), (jfloat)SF_arc_util_Time_delta)), (jfloat(0)));
	((mindustry_entities_units_StatusEntry *) NULL_CHECK(sp[0].o))->F_time = temp1;
	LINE_NUMBER(2236);
	sp[0].o = (jobject)((mindustry_entities_units_StatusEntry *) NULL_CHECK((frame[3].o)))->F_effect;
	if (sp[0].o == nullptr) goto label_58;
	}
	{
	if ((floatCompare(((jfloat)((mindustry_entities_units_StatusEntry *) NULL_CHECK((frame[3].o)))->F_time), (jfloat(0)), 1)) > 0) goto label_59;
	}
	{
	sp[0].o = (jobject)((mindustry_entities_units_StatusEntry *) NULL_CHECK((frame[3].o)))->F_effect;
	if (((jint)((mindustry_type_StatusEffect *) NULL_CHECK(sp[0].o))->F_permanent) != 0) goto label_59;
	}
label_58:;
	{
	LINE_NUMBER(2237);
	sp[0].o = (jobject)((mindustry_entities_units_StatusEntry *) NULL_CHECK((frame[3].o)))->F_effect;
	if (sp[0].o == nullptr) goto label_60;
	}
	{
	LINE_NUMBER(2238);
	sp[0].o = (jobject)((mindustry_entities_units_StatusEntry *) NULL_CHECK((frame[3].o)))->F_effect;
	((func_mindustry_type_StatusEffect_onRemoved_mindustry_gen_Unit) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_type_StatusEffect_onRemoved_mindustry_gen_Unit])(ctx, sp[0].o, (frame[0].o));
	}
label_60:;
	{
	LINE_NUMBER(2240);
	SM_arc_util_pooling_Pools_free_java_lang_Object(ctx, (frame[3].o));
	LINE_NUMBER(2241);
	INST_IINC(2, -1);
	LINE_NUMBER(2242);
	sp[0].o = (jobject)((mindustry_gen_UnitEntity *) NULL_CHECK((frame[0].o)))->F_statuses;
	sp[0].o = (jobject)((func_arc_struct_Seq_remove_int_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_remove_int_R_java_lang_Object])(ctx, sp[0].o, (frame[2].i));
	goto label_64;
	}
label_59:;
	{
	LINE_NUMBER(2244);
	sp[0].o = (jobject)((mindustry_gen_UnitEntity *) NULL_CHECK((frame[0].o)))->F_applied;
	sp[1].o = (jobject)((mindustry_entities_units_StatusEntry *) NULL_CHECK((frame[3].o)))->F_effect;
	((func_arc_struct_Bits_set_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Bits_set_int])(ctx, sp[0].o, ((jint)((mindustry_ctype_Content *) NULL_CHECK(sp[1].o))->F_id));
	LINE_NUMBER(2245);
	sp[0].o = (jobject)((mindustry_entities_units_StatusEntry *) NULL_CHECK((frame[3].o)))->F_effect;
	if (((jint)((mindustry_type_StatusEffect *) NULL_CHECK(sp[0].o))->F_dynamic) == 0) goto label_66;
	}
	{
	LINE_NUMBER(2246);
	sp[0].o = frame[0].o;
	((mindustry_gen_Unit *) NULL_CHECK(sp[0].o))->F_speedMultiplier = (((jfloat)((mindustry_gen_Unit *) NULL_CHECK(sp[0].o))->F_speedMultiplier) * ((jfloat)((mindustry_entities_units_StatusEntry *) NULL_CHECK((frame[3].o)))->F_speedMultiplier));
	LINE_NUMBER(2247);
	sp[0].o = frame[0].o;
	((mindustry_gen_Unit *) NULL_CHECK(sp[0].o))->F_healthMultiplier = (((jfloat)((mindustry_gen_Unit *) NULL_CHECK(sp[0].o))->F_healthMultiplier) * ((jfloat)((mindustry_entities_units_StatusEntry *) NULL_CHECK((frame[3].o)))->F_healthMultiplier));
	LINE_NUMBER(2248);
	sp[0].o = frame[0].o;
	((mindustry_gen_Unit *) NULL_CHECK(sp[0].o))->F_damageMultiplier = (((jfloat)((mindustry_gen_Unit *) NULL_CHECK(sp[0].o))->F_damageMultiplier) * ((jfloat)((mindustry_entities_units_StatusEntry *) NULL_CHECK((frame[3].o)))->F_damageMultiplier));
	LINE_NUMBER(2249);
	sp[0].o = frame[0].o;
	((mindustry_gen_Unit *) NULL_CHECK(sp[0].o))->F_reloadMultiplier = (((jfloat)((mindustry_gen_Unit *) NULL_CHECK(sp[0].o))->F_reloadMultiplier) * ((jfloat)((mindustry_entities_units_StatusEntry *) NULL_CHECK((frame[3].o)))->F_reloadMultiplier));
	LINE_NUMBER(2250);
	sp[0].o = frame[0].o;
	((mindustry_gen_Unit *) NULL_CHECK(sp[0].o))->F_buildSpeedMultiplier = (((jfloat)((mindustry_gen_Unit *) NULL_CHECK(sp[0].o))->F_buildSpeedMultiplier) * ((jfloat)((mindustry_entities_units_StatusEntry *) NULL_CHECK((frame[3].o)))->F_buildSpeedMultiplier));
	LINE_NUMBER(2251);
	sp[0].o = frame[0].o;
	((mindustry_gen_Unit *) NULL_CHECK(sp[0].o))->F_dragMultiplier = (((jfloat)((mindustry_gen_Unit *) NULL_CHECK(sp[0].o))->F_dragMultiplier) * ((jfloat)((mindustry_entities_units_StatusEntry *) NULL_CHECK((frame[3].o)))->F_dragMultiplier));
	LINE_NUMBER(2252);
	if ((floatCompare(((jfloat)((mindustry_entities_units_StatusEntry *) NULL_CHECK((frame[3].o)))->F_armorOverride), (jfloat(0)), -1)) < 0) goto label_74;
	}
	{
	((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_armorOverride = ((jfloat)((mindustry_entities_units_StatusEntry *) NULL_CHECK((frame[3].o)))->F_armorOverride);
	goto label_74;
	}
label_66:;
	{
	LINE_NUMBER(2254);
	sp[0].o = frame[0].o;
	jfloat temp0 = (jfloat)((mindustry_gen_Unit *) NULL_CHECK(sp[0].o))->F_speedMultiplier;
	sp[1].o = (jobject)((mindustry_entities_units_StatusEntry *) NULL_CHECK((frame[3].o)))->F_effect;
	((mindustry_gen_Unit *) NULL_CHECK(sp[0].o))->F_speedMultiplier = (temp0 * ((jfloat)((mindustry_type_StatusEffect *) NULL_CHECK(sp[1].o))->F_speedMultiplier));
	LINE_NUMBER(2255);
	sp[0].o = frame[0].o;
	jfloat temp1 = (jfloat)((mindustry_gen_Unit *) NULL_CHECK(sp[0].o))->F_healthMultiplier;
	sp[1].o = (jobject)((mindustry_entities_units_StatusEntry *) NULL_CHECK((frame[3].o)))->F_effect;
	((mindustry_gen_Unit *) NULL_CHECK(sp[0].o))->F_healthMultiplier = (temp1 * ((jfloat)((mindustry_type_StatusEffect *) NULL_CHECK(sp[1].o))->F_healthMultiplier));
	LINE_NUMBER(2256);
	sp[0].o = frame[0].o;
	jfloat temp2 = (jfloat)((mindustry_gen_Unit *) NULL_CHECK(sp[0].o))->F_damageMultiplier;
	sp[1].o = (jobject)((mindustry_entities_units_StatusEntry *) NULL_CHECK((frame[3].o)))->F_effect;
	((mindustry_gen_Unit *) NULL_CHECK(sp[0].o))->F_damageMultiplier = (temp2 * ((jfloat)((mindustry_type_StatusEffect *) NULL_CHECK(sp[1].o))->F_damageMultiplier));
	LINE_NUMBER(2257);
	sp[0].o = frame[0].o;
	jfloat temp3 = (jfloat)((mindustry_gen_Unit *) NULL_CHECK(sp[0].o))->F_reloadMultiplier;
	sp[1].o = (jobject)((mindustry_entities_units_StatusEntry *) NULL_CHECK((frame[3].o)))->F_effect;
	((mindustry_gen_Unit *) NULL_CHECK(sp[0].o))->F_reloadMultiplier = (temp3 * ((jfloat)((mindustry_type_StatusEffect *) NULL_CHECK(sp[1].o))->F_reloadMultiplier));
	LINE_NUMBER(2258);
	sp[0].o = frame[0].o;
	jfloat temp4 = (jfloat)((mindustry_gen_Unit *) NULL_CHECK(sp[0].o))->F_buildSpeedMultiplier;
	sp[1].o = (jobject)((mindustry_entities_units_StatusEntry *) NULL_CHECK((frame[3].o)))->F_effect;
	((mindustry_gen_Unit *) NULL_CHECK(sp[0].o))->F_buildSpeedMultiplier = (temp4 * ((jfloat)((mindustry_type_StatusEffect *) NULL_CHECK(sp[1].o))->F_buildSpeedMultiplier));
	LINE_NUMBER(2259);
	sp[0].o = frame[0].o;
	jfloat temp5 = (jfloat)((mindustry_gen_Unit *) NULL_CHECK(sp[0].o))->F_dragMultiplier;
	sp[1].o = (jobject)((mindustry_entities_units_StatusEntry *) NULL_CHECK((frame[3].o)))->F_effect;
	((mindustry_gen_Unit *) NULL_CHECK(sp[0].o))->F_dragMultiplier = (temp5 * ((jfloat)((mindustry_type_StatusEffect *) NULL_CHECK(sp[1].o))->F_dragMultiplier));
	}
label_74:;
	{
	LINE_NUMBER(2261);
	sp[0].o = frame[0].o;
	jint temp0 = (jint)((mindustry_gen_Unit *) NULL_CHECK(sp[0].o))->F_disarmed;
	sp[1].o = (jobject)((mindustry_entities_units_StatusEntry *) NULL_CHECK((frame[3].o)))->F_effect;
	((mindustry_gen_Unit *) NULL_CHECK(sp[0].o))->F_disarmed = (temp0 | ((jint)((mindustry_type_StatusEffect *) NULL_CHECK(sp[1].o))->F_disarm));
	LINE_NUMBER(2262);
	sp[0].o = (jobject)((mindustry_entities_units_StatusEntry *) NULL_CHECK((frame[3].o)))->F_effect;
	((func_mindustry_type_StatusEffect_update_mindustry_gen_Unit_mindustry_entities_units_StatusEntry) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_type_StatusEffect_update_mindustry_gen_Unit_mindustry_entities_units_StatusEntry])(ctx, sp[0].o, (frame[0].o), (frame[3].o));
	}
label_64:;
	LINE_NUMBER(2264);
	goto label_54;
label_53:;
	{
	LINE_NUMBER(2268);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_net;
	jint temp0 = (jint)((func_mindustry_net_Net_client_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_net_Net_client_R_boolean])(ctx, sp[0].o);
	if (temp0 == 0) goto label_81;
	}
	{
	jint temp0 = (jint)((func_mindustry_gen_UnitEntity_isLocal_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_gen_UnitEntity_isLocal_R_boolean])(ctx, (frame[0].o));
	if (temp0 == 0) goto label_82;
	}
label_81:;
	{
	jint temp0 = (jint)((func_mindustry_gen_UnitEntity_isRemote_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_gen_UnitEntity_isRemote_R_boolean])(ctx, (frame[0].o));
	if (temp0 == 0) goto label_83;
	}
label_82:;
	{
	LINE_NUMBER(2269);
	((func_mindustry_gen_UnitEntity_interpolate) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_gen_UnitEntity_interpolate])(ctx, (frame[0].o));
	}
label_83:;
	{
	LINE_NUMBER(2274);
	sp[0].o = (jobject)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_type;
	((func_mindustry_type_UnitType_update_mindustry_gen_Unit) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_type_UnitType_update_mindustry_gen_Unit])(ctx, sp[0].o, (frame[0].o));
	LINE_NUMBER(2275);
	jint temp0 = (jint)SM_java_lang_Float_isNaN_float_R_boolean(ctx, ((jfloat)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_x));
	if (temp0 != 0) goto label_85;
	}
	{
	jint temp0 = (jint)SM_java_lang_Float_isNaN_float_R_boolean(ctx, ((jfloat)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_y));
	if (temp0 == 0) goto label_86;
	}
label_85:;
	{
	LINE_NUMBER(2276);
	((func_mindustry_gen_UnitEntity_remove) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_gen_UnitEntity_remove])(ctx, (frame[0].o));
	LINE_NUMBER(2277);
	goto label_88;
	}
label_86:;
	{
	LINE_NUMBER(2279);
	sp[0].o = (jobject)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_type;
	if (((jint)((mindustry_type_UnitType *) NULL_CHECK(sp[0].o))->F_bounded) == 0) goto label_89;
	}
	{
	LINE_NUMBER(2280);
	frame[1].f = (jfloat(0));
	LINE_NUMBER(2281);
	frame[2].f = (jfloat(0));
	LINE_NUMBER(2282);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_world;
	jint temp0 = (jint)((func_mindustry_core_World_unitHeight_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_World_unitHeight_R_int])(ctx, sp[0].o);
	frame[3].f = (jfloat(temp0));
	LINE_NUMBER(2283);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_world;
	jint temp1 = (jint)((func_mindustry_core_World_unitWidth_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_World_unitWidth_R_int])(ctx, sp[0].o);
	frame[4].f = (jfloat(temp1));
	LINE_NUMBER(2284);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	sp[0].o = (jobject)((mindustry_core_GameState *) NULL_CHECK(sp[0].o))->F_rules;
	if (((jint)((mindustry_game_Rules *) NULL_CHECK(sp[0].o))->F_limitMapArea) == 0) goto label_95;
	}
	{
	sp[0].o = (jobject)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_team;
	jint temp0 = (jint)((func_mindustry_game_Team_isAI_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_game_Team_isAI_R_boolean])(ctx, sp[0].o);
	if (temp0 != 0) goto label_95;
	}
	{
	LINE_NUMBER(2285);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	sp[0].o = (jobject)((mindustry_core_GameState *) NULL_CHECK(sp[0].o))->F_rules;
	frame[1].f = (jfloat((((jint)((mindustry_game_Rules *) NULL_CHECK(sp[0].o))->F_limitY) * (8))));
	LINE_NUMBER(2286);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	sp[0].o = (jobject)((mindustry_core_GameState *) NULL_CHECK(sp[0].o))->F_rules;
	frame[2].f = (jfloat((((jint)((mindustry_game_Rules *) NULL_CHECK(sp[0].o))->F_limitX) * (8))));
	LINE_NUMBER(2287);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	sp[0].o = (jobject)((mindustry_core_GameState *) NULL_CHECK(sp[0].o))->F_rules;
	frame[3].f = ((jfloat((((jint)((mindustry_game_Rules *) NULL_CHECK(sp[0].o))->F_limitHeight) * (8)))) + (frame[1].f));
	LINE_NUMBER(2288);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	sp[0].o = (jobject)((mindustry_core_GameState *) NULL_CHECK(sp[0].o))->F_rules;
	frame[4].f = ((jfloat((((jint)((mindustry_game_Rules *) NULL_CHECK(sp[0].o))->F_limitWidth) * (8)))) + (frame[2].f));
	}
label_95:;
	{
	LINE_NUMBER(2290);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_net;
	jint temp0 = (jint)((func_mindustry_net_Net_client_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_net_Net_client_R_boolean])(ctx, sp[0].o);
	if (temp0 == 0) goto label_100;
	}
	{
	jint temp0 = (jint)((func_mindustry_gen_UnitEntity_isLocal_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_gen_UnitEntity_isLocal_R_boolean])(ctx, (frame[0].o));
	if (temp0 == 0) goto label_101;
	}
label_100:;
	{
	LINE_NUMBER(2291);
	frame[5].f = (jfloat(0));
	LINE_NUMBER(2292);
	frame[6].f = (jfloat(0));
	LINE_NUMBER(2293);
	if ((floatCompare(((jfloat)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_x), (frame[2].f), 1)) >= 0) goto label_104;
	}
	{
	frame[5].f = ((frame[5].f) + ((-(((jfloat)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_x) - (frame[2].f))) / (jfloat(8.0f))));
	}
label_104:;
	{
	LINE_NUMBER(2294);
	if ((floatCompare(((jfloat)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_y), (frame[1].f), 1)) >= 0) goto label_105;
	}
	{
	frame[6].f = ((frame[6].f) + ((-(((jfloat)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_y) - (frame[1].f))) / (jfloat(8.0f))));
	}
label_105:;
	{
	LINE_NUMBER(2295);
	if ((floatCompare(((jfloat)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_x), ((frame[4].f) - (jfloat(8.0f))), -1)) <= 0) goto label_106;
	}
	{
	frame[5].f = ((frame[5].f) - ((((jfloat)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_x) - ((frame[4].f) - (jfloat(8.0f)))) / (jfloat(8.0f))));
	}
label_106:;
	{
	LINE_NUMBER(2296);
	if ((floatCompare(((jfloat)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_y), ((frame[3].f) - (jfloat(8.0f))), -1)) <= 0) goto label_107;
	}
	{
	frame[6].f = ((frame[6].f) - ((((jfloat)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_y) - ((frame[3].f) - (jfloat(8.0f)))) / (jfloat(8.0f))));
	}
label_107:;
	{
	LINE_NUMBER(2297);
	jfloat temp0 = jfloat(10.0f);
	jfloat temp1 = (jfloat)SM_java_lang_Math_max_float_float_R_float(ctx, (clinit_arc_util_Time(ctx), (jfloat)SF_arc_util_Time_delta), (jfloat(1)));
	frame[7].f = (temp0 / temp1);
	LINE_NUMBER(2298);
	sp[0].o = frame[0].o;
	jfloat temp2 = (jfloat)SM_arc_math_Mathf_clamp_float_float_float_R_float(ctx, ((frame[5].f) * (clinit_arc_util_Time(ctx), (jfloat)SF_arc_util_Time_delta)), (-(frame[7].f)), (frame[7].f));
	jfloat temp3 = (jfloat)SM_arc_math_Mathf_clamp_float_float_float_R_float(ctx, ((frame[6].f) * (clinit_arc_util_Time(ctx), (jfloat)SF_arc_util_Time_delta)), (-(frame[7].f)), (frame[7].f));
	((func_mindustry_gen_UnitEntity_velAddNet_float_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_gen_UnitEntity_velAddNet_float_float])(ctx, sp[0].o, temp2, temp3);
	LINE_NUMBER(2299);
	frame[8].f = (jfloat(8.0f));
	LINE_NUMBER(2300);
	sp[0].o = frame[0].o;
	jfloat temp4 = (jfloat)SM_arc_math_Mathf_clamp_float_float_float_R_float(ctx, ((jfloat)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_x), ((frame[2].f) - (frame[8].f)), (((frame[4].f) - (jfloat(8.0f))) + (frame[8].f)));
	((mindustry_gen_Unit *) NULL_CHECK(sp[0].o))->F_x = temp4;
	LINE_NUMBER(2301);
	sp[0].o = frame[0].o;
	jfloat temp5 = (jfloat)SM_arc_math_Mathf_clamp_float_float_float_R_float(ctx, ((jfloat)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_y), ((frame[1].f) - (frame[8].f)), (((frame[3].f) - (jfloat(8.0f))) + (frame[8].f)));
	((mindustry_gen_Unit *) NULL_CHECK(sp[0].o))->F_y = temp5;
	}
label_101:;
	{
	LINE_NUMBER(2303);
	jint temp0 = (jint)((func_mindustry_gen_UnitEntity_isGrounded_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_gen_UnitEntity_isGrounded_R_boolean])(ctx, (frame[0].o));
	if (temp0 == 0) goto label_112;
	}
	{
	LINE_NUMBER(2304);
	sp[0].o = frame[0].o;
	jfloat temp0 = (jfloat)SM_arc_math_Mathf_clamp_float_float_float_R_float(ctx, ((jfloat)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_x), (frame[2].f), ((frame[4].f) - (jfloat(8.0f))));
	((mindustry_gen_Unit *) NULL_CHECK(sp[0].o))->F_x = temp0;
	LINE_NUMBER(2305);
	sp[0].o = frame[0].o;
	jfloat temp1 = (jfloat)SM_arc_math_Mathf_clamp_float_float_float_R_float(ctx, ((jfloat)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_y), (frame[1].f), ((frame[3].f) - (jfloat(8.0f))));
	((mindustry_gen_Unit *) NULL_CHECK(sp[0].o))->F_y = temp1;
	}
label_112:;
	{
	LINE_NUMBER(2307);
	if ((floatCompare(((jfloat)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_x), ((jfloat(-250.0f)) + (frame[2].f)), 1)) < 0) goto label_115;
	}
	{
	if ((floatCompare(((jfloat)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_y), ((jfloat(-250.0f)) + (frame[1].f)), 1)) < 0) goto label_115;
	}
	{
	if ((floatCompare(((jfloat)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_x), ((frame[4].f) + (jfloat(250.0f))), -1)) >= 0) goto label_115;
	}
	{
	if ((floatCompare(((jfloat)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_y), ((frame[3].f) + (jfloat(250.0f))), -1)) < 0) goto label_89;
	}
label_115:;
	{
	LINE_NUMBER(2308);
	((func_mindustry_gen_UnitEntity_kill) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_gen_UnitEntity_kill])(ctx, (frame[0].o));
	}
label_89:;
	{
	LINE_NUMBER(2311);
	jint temp0 = (jint)SM_java_lang_Float_isNaN_float_R_boolean(ctx, ((jfloat)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_health));
	if (temp0 == 0) goto label_116;
	}
	{
	LINE_NUMBER(2312);
	((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_health = (jfloat(0));
	LINE_NUMBER(2313);
	((func_mindustry_gen_UnitEntity_kill) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_gen_UnitEntity_kill])(ctx, (frame[0].o));
	}
label_116:;
	{
	LINE_NUMBER(2315);
	sp[0].o = (jobject)((func_mindustry_gen_UnitEntity_floorOn_R_mindustry_world_blocks_environment_Floor) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_gen_UnitEntity_floorOn_R_mindustry_world_blocks_environment_Floor])(ctx, (frame[0].o));
	frame[1].o = sp[0].o;
	LINE_NUMBER(2316);
	sp[0].o = (jobject)((func_mindustry_gen_UnitEntity_tileOn_R_mindustry_world_Tile) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_gen_UnitEntity_tileOn_R_mindustry_world_Tile])(ctx, (frame[0].o));
	frame[2].o = sp[0].o;
	LINE_NUMBER(2317);
	jint temp0 = (jint)((func_mindustry_gen_UnitEntity_isFlying_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_gen_UnitEntity_isFlying_R_boolean])(ctx, (frame[0].o));
	if (temp0 == ((jint)((mindustry_gen_UnitEntity *) NULL_CHECK((frame[0].o)))->F_wasFlying)) goto label_121;
	}
	{
	LINE_NUMBER(2318);
	if (((jint)((mindustry_gen_UnitEntity *) NULL_CHECK((frame[0].o)))->F_wasFlying) == 0) goto label_123;
	}
	{
	LINE_NUMBER(2319);
	if ((frame[2].o) == nullptr) goto label_123;
	}
	{
	LINE_NUMBER(2320);
	clinit_mindustry_content_Fx(ctx);
	sp[0].o = (jobject)SF_mindustry_content_Fx_unitLand;
	jfloat temp0 = (jfloat)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_x;
	jfloat temp1 = (jfloat)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_y;
	sp[1].f = temp0;
	sp[2].f = temp1;
	sp += 3;
	if (((jint)((mindustry_world_blocks_environment_Floor *) NULL_CHECK((frame[1].o)))->F_isLiquid) == 0) goto label_126;
	}
	INST_FCONST(1);
	goto label_127;
label_126:;
	(sp++)->f = jfloat(0.5f);
label_127:;
	{
	sp -= 4;
	sp[4].o = (jobject)((func_mindustry_world_Tile_getFloorColor_R_arc_graphics_Color) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_mindustry_world_Tile_getFloorColor_R_arc_graphics_Color])(ctx, (frame[2].o));
	((func_mindustry_entities_Effect_at_float_float_float_arc_graphics_Color) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_entities_Effect_at_float_float_float_arc_graphics_Color])(ctx, sp[0].o, sp[1].f, sp[2].f, sp[3].f, sp[4].o);
	}
label_123:;
	{
	LINE_NUMBER(2323);
	sp[0].o = frame[0].o;
	jint temp0 = (jint)((func_mindustry_gen_UnitEntity_isFlying_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_gen_UnitEntity_isFlying_R_boolean])(ctx, (frame[0].o));
	((mindustry_gen_UnitEntity *) NULL_CHECK(sp[0].o))->F_wasFlying = temp0;
	}
label_121:;
	{
	LINE_NUMBER(2325);
	sp[0].o = (jobject)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_type;
	if (((jint)((mindustry_type_UnitType *) NULL_CHECK(sp[0].o))->F_hovering) != 0) goto label_128;
	}
	{
	jint temp0 = (jint)((func_mindustry_gen_UnitEntity_isGrounded_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_gen_UnitEntity_isGrounded_R_boolean])(ctx, (frame[0].o));
	if (temp0 == 0) goto label_128;
	}
	{
	sp[0].o = (jobject)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_type;
	if (((jint)((mindustry_type_UnitType *) NULL_CHECK(sp[0].o))->F_emitWalkEffect) == 0) goto label_128;
	}
	{
	LINE_NUMBER(2326);
	sp[0].o = frame[0].o;
	jfloat temp0 = (jfloat)((mindustry_gen_Unit *) NULL_CHECK(sp[0].o))->F_splashTimer;
	jfloat temp1 = (jfloat)((func_mindustry_gen_UnitEntity_deltaX_R_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_gen_UnitEntity_deltaX_R_float])(ctx, (frame[0].o));
	jfloat temp2 = (jfloat)((func_mindustry_gen_UnitEntity_deltaY_R_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_gen_UnitEntity_deltaY_R_float])(ctx, (frame[0].o));
	jfloat temp3 = (jfloat)SM_arc_math_Mathf_dst_float_float_R_float(ctx, temp1, temp2);
	jfloat temp4 = temp0 + temp3;
	((mindustry_gen_Unit *) NULL_CHECK(sp[0].o))->F_splashTimer = temp4;
	jfloat temp7 = jfloat(7.0f);
	jfloat temp8 = (jfloat)((func_mindustry_gen_UnitEntity_hitSize_R_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_gen_UnitEntity_hitSize_R_float])(ctx, (frame[0].o));
	if ((floatCompare(temp4, (temp7 + (temp8 / (jfloat(8.0f)))), -1)) < 0) goto label_128;
	}
	{
	LINE_NUMBER(2327);
	sp[0].o = (jobject)((mindustry_world_blocks_environment_Floor *) NULL_CHECK((frame[1].o)))->F_walkEffect;
	jfloat temp0 = (jfloat)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_x;
	jfloat temp1 = (jfloat)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_y;
	jfloat temp2 = (jfloat)((func_mindustry_gen_UnitEntity_hitSize_R_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_gen_UnitEntity_hitSize_R_float])(ctx, (frame[0].o));
	jfloat temp3 = temp2 / (jfloat(8.0f));
	sp[1].f = temp0;
	sp[2].f = temp1;
	sp[3].f = temp3;
	sp += 4;
	if ((frame[2].o) == nullptr) goto label_131;
	}
	{
	sp[0].o = (jobject)((func_mindustry_world_Tile_getFloorColor_R_arc_graphics_Color) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_mindustry_world_Tile_getFloorColor_R_arc_graphics_Color])(ctx, (frame[2].o));
	sp += 1;
	goto label_132;
	}
label_131:;
	INST_ALOAD(1);
	sp[-1].o = (jobject) ((mindustry_world_Block *) NULL_CHECK(sp[-1].o))->F_mapColor;
label_132:;
	{
	sp -= 5;
	((func_mindustry_entities_Effect_at_float_float_float_arc_graphics_Color) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_entities_Effect_at_float_float_float_arc_graphics_Color])(ctx, sp[0].o, sp[1].f, sp[2].f, sp[3].f, sp[4].o);
	LINE_NUMBER(2328);
	((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_splashTimer = (jfloat(0));
	LINE_NUMBER(2329);
	sp[0].o = (jobject)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_type;
	if (((jint)((mindustry_type_UnitType *) NULL_CHECK(sp[0].o))->F_emitWalkSound) == 0) goto label_128;
	}
	{
	LINE_NUMBER(2330);
	sp[0].o = (jobject)((mindustry_world_blocks_environment_Floor *) NULL_CHECK((frame[1].o)))->F_walkSound;
	jfloat temp0 = (jfloat)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_x;
	jfloat temp1 = (jfloat)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_y;
	jfloat temp2 = (jfloat)SM_arc_math_Mathf_random_float_float_R_float(ctx, ((jfloat)((mindustry_world_blocks_environment_Floor *) NULL_CHECK((frame[1].o)))->F_walkSoundPitchMin), ((jfloat)((mindustry_world_blocks_environment_Floor *) NULL_CHECK((frame[1].o)))->F_walkSoundPitchMax));
	jint temp3 = (jint)((func_arc_audio_Sound_at_float_float_float_float_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_audio_Sound_at_float_float_float_float_R_int])(ctx, sp[0].o, temp0, temp1, temp2, ((jfloat)((mindustry_world_blocks_environment_Floor *) NULL_CHECK((frame[1].o)))->F_walkSoundVolume));
	}
label_128:;
	{
	LINE_NUMBER(2334);
	((func_mindustry_gen_UnitEntity_updateDrowning) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_gen_UnitEntity_updateDrowning])(ctx, (frame[0].o));
	LINE_NUMBER(2335);
	if (((jint)((mindustry_gen_UnitEntity *) NULL_CHECK((frame[0].o)))->F_wasHealed) == 0) goto label_137;
	}
	{
	if ((floatCompare(((jfloat)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_healTime), (jfloat(-1.0f)), 1)) > 0) goto label_137;
	}
	{
	LINE_NUMBER(2336);
	((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_healTime = (jfloat(1));
	}
label_137:;
	{
	LINE_NUMBER(2338);
	sp[0].o = frame[0].o;
	((mindustry_gen_Unit *) NULL_CHECK(sp[0].o))->F_healTime = (((jfloat)((mindustry_gen_Unit *) NULL_CHECK(sp[0].o))->F_healTime) - ((clinit_arc_util_Time(ctx), (jfloat)SF_arc_util_Time_delta) / (jfloat(20.0f))));
	LINE_NUMBER(2339);
	((mindustry_gen_UnitEntity *) NULL_CHECK((frame[0].o)))->F_wasHealed = (jint(0));
	LINE_NUMBER(2340);
	sp[0].o = (jobject)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_team;
	jint temp0 = (jint)((func_mindustry_game_Team_isOnlyAI_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_game_Team_isOnlyAI_R_boolean])(ctx, sp[0].o);
	if (temp0 == 0) goto label_141;
	}
	{
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	jint temp0 = (jint)((func_mindustry_core_GameState_isCampaign_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_GameState_isCampaign_R_boolean])(ctx, sp[0].o);
	if (temp0 == 0) goto label_141;
	}
	{
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	sp[0].o = (jobject)((func_mindustry_core_GameState_getSector_R_mindustry_type_Sector) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_GameState_getSector_R_mindustry_type_Sector])(ctx, sp[0].o);
	jint temp0 = (jint)((func_mindustry_type_Sector_isCaptured_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_type_Sector_isCaptured_R_boolean])(ctx, sp[0].o);
	if (temp0 == 0) goto label_141;
	}
	{
	LINE_NUMBER(2341);
	((func_mindustry_gen_UnitEntity_kill) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_gen_UnitEntity_kill])(ctx, (frame[0].o));
	}
label_141:;
	{
	LINE_NUMBER(2343);
	if ((clinit_mindustry_Vars(ctx), (jint)SF_mindustry_Vars_headless) != 0) goto label_143;
	}
	{
	LINE_NUMBER(2344);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_control;
	sp[0].o = (jobject)((mindustry_core_Control *) NULL_CHECK(sp[0].o))->F_sound;
	sp[1].o = (jobject)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_type;
	sp[1].o = (jobject)((mindustry_type_UnitType *) NULL_CHECK(sp[1].o))->F_loopSound;
	sp[2].o = frame[0].o;
	sp[3].o = (jobject)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_type;
	((func_mindustry_audio_SoundControl_loop_arc_audio_Sound_arc_math_geom_Position_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_audio_SoundControl_loop_arc_audio_Sound_arc_math_geom_Position_float])(ctx, sp[0].o, sp[1].o, sp[2].o, ((jfloat)((mindustry_type_UnitType *) NULL_CHECK(sp[3].o))->F_loopSoundVolume));
	LINE_NUMBER(2345);
	sp[0].o = (jobject)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_type;
	sp[0].o = (jobject)((mindustry_type_UnitType *) NULL_CHECK(sp[0].o))->F_moveSound;
	clinit_mindustry_gen_Sounds(ctx);
	sp[1].o = (jobject)SF_mindustry_gen_Sounds_none;
	if (sp[0].o == sp[1].o) goto label_143;
	}
	{
	LINE_NUMBER(2346);
	sp[0].o = (jobject)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_vel;
	jfloat temp0 = (jfloat)((func_arc_math_geom_Vec2_len_R_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Vec2_len_R_float])(ctx, sp[0].o);
	sp[0].o = (jobject)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_type;
	jfloat temp1 = (jfloat)SM_arc_math_Mathf_clamp_float_R_float(ctx, (temp0 / ((jfloat)((mindustry_type_UnitType *) NULL_CHECK(sp[0].o))->F_speed)));
	frame[3].f = temp1;
	LINE_NUMBER(2347);
	sp[0].o = (jobject)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_type;
	jfloat temp2 = (jfloat)((mindustry_type_UnitType *) NULL_CHECK(sp[0].o))->F_moveSoundPitchMin;
	sp[0].o = (jobject)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_type;
	jfloat temp3 = (jfloat)SM_arc_math_Mathf_lerp_float_float_float_R_float(ctx, temp2, ((jfloat)((mindustry_type_UnitType *) NULL_CHECK(sp[0].o))->F_moveSoundPitchMax), (frame[3].f));
	frame[4].f = temp3;
	LINE_NUMBER(2348);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_control;
	sp[0].o = (jobject)((mindustry_core_Control *) NULL_CHECK(sp[0].o))->F_sound;
	sp[1].o = (jobject)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_type;
	sp[1].o = (jobject)((mindustry_type_UnitType *) NULL_CHECK(sp[1].o))->F_moveSound;
	sp[2].o = frame[0].o;
	sp[3].o = (jobject)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_type;
	((func_mindustry_audio_SoundControl_loop_arc_audio_Sound_arc_math_geom_Position_float_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_audio_SoundControl_loop_arc_audio_Sound_arc_math_geom_Position_float_float])(ctx, sp[0].o, sp[1].o, sp[2].o, (((jfloat)((mindustry_type_UnitType *) NULL_CHECK(sp[3].o))->F_moveSoundVolume) * (frame[3].f)), (frame[4].f));
	}
label_143:;
	{
	LINE_NUMBER(2351);
	sp[0].o = (jobject)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_type;
	clinit_mindustry_Vars(ctx);
	sp[1].o = (jobject)SF_mindustry_Vars_state;
	sp[1].o = (jobject)((mindustry_core_GameState *) NULL_CHECK(sp[1].o))->F_rules;
	jint temp0 = (jint)((func_mindustry_type_UnitType_supportsEnv_int_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_type_UnitType_supportsEnv_int_R_boolean])(ctx, sp[0].o, ((jint)((mindustry_game_Rules *) NULL_CHECK(sp[1].o))->F_env));
	if (temp0 != 0) goto label_149;
	}
	{
	if (((jint)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_dead) != 0) goto label_149;
	}
	{
	LINE_NUMBER(2352);
	SM_mindustry_gen_Call_unitEnvDeath_mindustry_gen_Unit(ctx, (frame[0].o));
	LINE_NUMBER(2353);
	sp[0].o = (jobject)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_team;
	sp[0].o = (jobject)((func_mindustry_game_Team_data_R_mindustry_game_Teams$TeamData) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_game_Team_data_R_mindustry_game_Teams$TeamData])(ctx, sp[0].o);
	sp[1].o = (jobject)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_type;
	((func_mindustry_game_Teams$TeamData_updateCount_mindustry_type_UnitType_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_game_Teams$TeamData_updateCount_mindustry_type_UnitType_int])(ctx, sp[0].o, sp[1].o, (jint(-1)));
	}
label_149:;
	{
	LINE_NUMBER(2355);
	sp[0].o = (jobject)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_abilities;
	frame[3].o = sp[0].o;
	frame[4].i = (((jarray) nullCheck(ctx, (frame[3].o)))->length);
	frame[5].i = (jint(0));
	}
label_152:;
	{
	if ((frame[5].i) >= (frame[4].i)) goto label_153;
	}
	{
	frame[6].o = ((jobject)ARRAY_ACCESS(jobject, (frame[3].o), (frame[5].i)));
	LINE_NUMBER(2356);
	((func_mindustry_entities_abilities_Ability_update_mindustry_gen_Unit) ((void **) nullCheck(ctx, (frame[6].o))->vtable)[VTABLE_mindustry_entities_abilities_Ability_update_mindustry_gen_Unit])(ctx, (frame[6].o), (frame[0].o));
	LINE_NUMBER(2355);
	INST_IINC(5, 1);
	goto label_152;
	}
label_153:;
	{
	LINE_NUMBER(2358);
	sp[0].o = (jobject)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_trail;
	if (sp[0].o == nullptr) goto label_156;
	}
	{
	LINE_NUMBER(2359);
	sp[0].o = (jobject)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_trail;
	sp[1].o = (jobject)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_type;
	((mindustry_graphics_Trail *) NULL_CHECK(sp[0].o))->F_length = ((jint)((mindustry_type_UnitType *) NULL_CHECK(sp[1].o))->F_trailLength);
	LINE_NUMBER(2360);
	sp[0].o = (jobject)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_type;
	if (((jint)((mindustry_type_UnitType *) NULL_CHECK(sp[0].o))->F_useEngineElevation) == 0) goto label_159;
	}
	{
	jfloat temp0 = (jfloat)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_elevation;
	sp[0].f = temp0;
	sp += 1;
	goto label_160;
	}
label_159:;
	INST_FCONST(1);
label_160:;
	{
	sp -= 1;
	frame[3].f = sp[0].f;
	LINE_NUMBER(2361);
	sp[0].o = (jobject)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_type;
	jfloat temp0 = ((jfloat)((mindustry_type_UnitType *) NULL_CHECK(sp[0].o))->F_engineOffset) / (jfloat(2));
	sp[0].o = (jobject)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_type;
	frame[4].f = (temp0 + ((((jfloat)((mindustry_type_UnitType *) NULL_CHECK(sp[0].o))->F_engineOffset) / (jfloat(2))) * (frame[3].f)));
	LINE_NUMBER(2362);
	jfloat temp1 = (jfloat)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_x;
	jfloat temp2 = (jfloat)SM_arc_math_Angles_trnsx_float_float_R_float(ctx, (((jfloat)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_rotation) + (jfloat(180.0f))), (frame[4].f));
	frame[5].f = (temp1 + temp2);
	LINE_NUMBER(2363);
	jfloat temp3 = (jfloat)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_y;
	jfloat temp4 = (jfloat)SM_arc_math_Angles_trnsy_float_float_R_float(ctx, (((jfloat)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_rotation) + (jfloat(180.0f))), (frame[4].f));
	frame[6].f = (temp3 + temp4);
	LINE_NUMBER(2364);
	sp[0].o = (jobject)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_trail;
	((func_mindustry_graphics_Trail_update_float_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_graphics_Trail_update_float_float])(ctx, sp[0].o, (frame[5].f), (frame[6].f));
	}
label_156:;
	{
	LINE_NUMBER(2366);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_type;
	jfloat temp0 = (jfloat)((mindustry_type_UnitType *) NULL_CHECK(sp[1].o))->F_drag;
	jint temp1 = (jint)((func_mindustry_gen_UnitEntity_isGrounded_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_gen_UnitEntity_isGrounded_R_boolean])(ctx, (frame[0].o));
	sp[1].f = temp0;
	sp += 2;
	if (temp1 == 0) goto label_165;
	}
	{
	sp[0].o = (jobject)((func_mindustry_gen_UnitEntity_floorOn_R_mindustry_world_blocks_environment_Floor) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_gen_UnitEntity_floorOn_R_mindustry_world_blocks_environment_Floor])(ctx, (frame[0].o));
	jfloat temp0 = (jfloat)((mindustry_world_blocks_environment_Floor *) NULL_CHECK(sp[0].o))->F_dragMultiplier;
	sp[0].f = temp0;
	sp += 1;
	goto label_166;
	}
label_165:;
	INST_FCONST(1);
label_166:;
	{
	sp -= 3;
	jfloat temp0 = (sp[1].f * sp[2].f) * ((jfloat)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_dragMultiplier);
	clinit_mindustry_Vars(ctx);
	sp[1].o = (jobject)SF_mindustry_Vars_state;
	sp[1].o = (jobject)((mindustry_core_GameState *) NULL_CHECK(sp[1].o))->F_rules;
	((mindustry_gen_Unit *) NULL_CHECK(sp[0].o))->F_drag = (temp0 * ((jfloat)((mindustry_game_Rules *) NULL_CHECK(sp[1].o))->F_dragMultiplier));
	LINE_NUMBER(2367);
	sp[0].o = (jobject)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_team;
	clinit_mindustry_Vars(ctx);
	sp[1].o = (jobject)SF_mindustry_Vars_state;
	sp[1].o = (jobject)((mindustry_core_GameState *) NULL_CHECK(sp[1].o))->F_rules;
	sp[1].o = (jobject)((mindustry_game_Rules *) NULL_CHECK(sp[1].o))->F_waveTeam;
	if (sp[0].o == sp[1].o) goto label_168;
	}
	{
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	jint temp0 = (jint)((func_mindustry_core_GameState_hasSpawns_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_GameState_hasSpawns_R_boolean])(ctx, sp[0].o);
	if (temp0 == 0) goto label_168;
	}
	{
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_net;
	jint temp0 = (jint)((func_mindustry_net_Net_client_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_net_Net_client_R_boolean])(ctx, sp[0].o);
	if (temp0 == 0) goto label_169;
	}
	{
	jint temp0 = (jint)((func_mindustry_gen_UnitEntity_isLocal_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_gen_UnitEntity_isLocal_R_boolean])(ctx, (frame[0].o));
	if (temp0 == 0) goto label_168;
	}
label_169:;
	{
	jint temp0 = (jint)((func_mindustry_gen_UnitEntity_hittable_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_gen_UnitEntity_hittable_R_boolean])(ctx, (frame[0].o));
	if (temp0 == 0) goto label_168;
	}
	{
	LINE_NUMBER(2368);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	sp[0].o = (jobject)((mindustry_core_GameState *) NULL_CHECK(sp[0].o))->F_rules;
	frame[3].f = ((((jfloat)((mindustry_game_Rules *) NULL_CHECK(sp[0].o))->F_dropZoneRadius) + (((jfloat)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_hitSize) / (jfloat(2)))) + (jfloat(1)));
	LINE_NUMBER(2369);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_spawner;
	sp[0].o = (jobject)((func_mindustry_ai_WaveSpawner_getSpawns_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_ai_WaveSpawner_getSpawns_R_arc_struct_Seq])(ctx, sp[0].o);
	sp[0].o = (jobject)((func_arc_struct_Seq_iterator_R_java_util_Iterator) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_iterator_R_java_util_Iterator])(ctx, sp[0].o);
	frame[4].o = sp[0].o;
	}
label_172:;
	{
	jint temp0 = (jint)((func_java_util_Iterator_hasNext_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_hasNext_R_boolean, (frame[4].o)))(ctx, (frame[4].o));
	if (temp0 == 0) goto label_168;
	}
	{
	sp[0].o = (jobject)((func_java_util_Iterator_next_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_next_R_java_lang_Object, (frame[4].o)))(ctx, (frame[4].o));
	frame[5].o = (checkCast(ctx, &class_mindustry_world_Tile, sp[0].o));
	LINE_NUMBER(2370);
	sp[0].o = frame[0].o;
	jfloat temp0 = (jfloat)((func_mindustry_world_Tile_worldx_R_float) ((void **) nullCheck(ctx, (frame[5].o))->vtable)[VTABLE_mindustry_world_Tile_worldx_R_float])(ctx, (frame[5].o));
	jfloat temp1 = (jfloat)((func_mindustry_world_Tile_worldy_R_float) ((void **) nullCheck(ctx, (frame[5].o))->vtable)[VTABLE_mindustry_world_Tile_worldy_R_float])(ctx, (frame[5].o));
	jint temp2 = (jint)((func_mindustry_gen_UnitEntity_within_float_float_float_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_gen_UnitEntity_within_float_float_float_R_boolean])(ctx, sp[0].o, temp0, temp1, (frame[3].f));
	if (temp2 == 0) goto label_174;
	}
	{
	LINE_NUMBER(2371);
	sp[0].o = frame[0].o;
	clinit_arc_util_Tmp(ctx);
	sp[1].o = (jobject)SF_arc_util_Tmp_v1;
	sp[1].o = (jobject)((func_arc_math_geom_Vec2_set_arc_math_geom_Position_R_arc_math_geom_Vec2) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_math_geom_Vec2_set_arc_math_geom_Position_R_arc_math_geom_Vec2])(ctx, sp[1].o, (frame[0].o));
	jfloat temp0 = (jfloat)((func_mindustry_world_Tile_worldx_R_float) ((void **) nullCheck(ctx, (frame[5].o))->vtable)[VTABLE_mindustry_world_Tile_worldx_R_float])(ctx, (frame[5].o));
	jfloat temp1 = (jfloat)((func_mindustry_world_Tile_worldy_R_float) ((void **) nullCheck(ctx, (frame[5].o))->vtable)[VTABLE_mindustry_world_Tile_worldy_R_float])(ctx, (frame[5].o));
	sp[1].o = (jobject)((func_arc_math_geom_Vec2_sub_float_float_R_arc_math_geom_Vec2) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_math_geom_Vec2_sub_float_float_R_arc_math_geom_Vec2])(ctx, sp[1].o, temp0, temp1);
	jfloat temp2 = jfloat(1.1f);
	jfloat temp3 = (jfloat)((func_mindustry_gen_UnitEntity_dst_arc_math_geom_Position_R_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_gen_UnitEntity_dst_arc_math_geom_Position_R_float])(ctx, (frame[0].o), (frame[5].o));
	sp[1].o = (jobject)((func_arc_math_geom_Vec2_setLength_float_R_arc_math_geom_Vec2) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_math_geom_Vec2_setLength_float_R_arc_math_geom_Vec2])(ctx, sp[1].o, (temp2 - (temp3 / (frame[3].f))));
	sp[1].o = (jobject)((func_arc_math_geom_Vec2_scl_float_R_arc_math_geom_Vec2) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_math_geom_Vec2_scl_float_R_arc_math_geom_Vec2])(ctx, sp[1].o, ((jfloat(0.45f)) * (clinit_arc_util_Time(ctx), (jfloat)SF_arc_util_Time_delta)));
	((func_mindustry_gen_UnitEntity_velAddNet_arc_math_geom_Vec2) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_gen_UnitEntity_velAddNet_arc_math_geom_Vec2])(ctx, sp[0].o, sp[1].o);
	}
label_174:;
	LINE_NUMBER(2373);
	goto label_172;
label_168:;
	{
	LINE_NUMBER(2375);
	if (((jint)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_dead) != 0) goto label_176;
	}
	{
	if ((floatCompare(((jfloat)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_health), (jfloat(0)), 1)) > 0) goto label_177;
	}
label_176:;
	{
	LINE_NUMBER(2376);
	((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_drag = (jfloat(1,000000e-02f));
	LINE_NUMBER(2377);
	jint temp0 = (jint)SM_arc_math_Mathf_chanceDelta_double_R_boolean(ctx, (jdouble(0.1)));
	if (temp0 == 0) goto label_179;
	}
	{
	LINE_NUMBER(2378);
	clinit_arc_util_Tmp(ctx);
	sp[0].o = (jobject)SF_arc_util_Tmp_v1;
	jfloat temp0 = (jfloat)SM_arc_math_Mathf_range_float_R_float(ctx, ((jfloat)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_hitSize));
	sp[0].o = (jobject)((func_arc_math_geom_Vec2_rnd_float_R_arc_math_geom_Vec2) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Vec2_rnd_float_R_arc_math_geom_Vec2])(ctx, sp[0].o, temp0);
	LINE_NUMBER(2379);
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
label_179:;
	{
	LINE_NUMBER(2381);
	jint temp0 = (jint)SM_arc_math_Mathf_chanceDelta_double_R_boolean(ctx, (jdouble(0.2)));
	if (temp0 == 0) goto label_182;
	}
	{
	LINE_NUMBER(2382);
	sp[0].o = (jobject)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_type;
	jfloat temp0 = ((jfloat)((mindustry_type_UnitType *) NULL_CHECK(sp[0].o))->F_engineOffset) / (jfloat(2));
	sp[0].o = (jobject)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_type;
	frame[3].f = (temp0 + ((((jfloat)((mindustry_type_UnitType *) NULL_CHECK(sp[0].o))->F_engineOffset) / (jfloat(2))) * ((jfloat)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_elevation)));
	LINE_NUMBER(2383);
	sp[0].o = (jobject)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_type;
	jfloat temp1 = (jfloat)SM_arc_math_Mathf_range_float_R_float(ctx, ((jfloat)((mindustry_type_UnitType *) NULL_CHECK(sp[0].o))->F_engineSize));
	frame[4].f = temp1;
	LINE_NUMBER(2384);
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
label_182:;
	{
	LINE_NUMBER(2386);
	sp[0].o = frame[0].o;
	jfloat temp0 = (jfloat)((mindustry_gen_Unit *) NULL_CHECK(sp[0].o))->F_elevation;
	sp[1].o = (jobject)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_type;
	((mindustry_gen_Unit *) NULL_CHECK(sp[0].o))->F_elevation = (temp0 - (((jfloat)((mindustry_type_UnitType *) NULL_CHECK(sp[1].o))->F_fallSpeed) * (clinit_arc_util_Time(ctx), (jfloat)SF_arc_util_Time_delta)));
	LINE_NUMBER(2387);
	jint temp1 = (jint)((func_mindustry_gen_UnitEntity_isGrounded_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_gen_UnitEntity_isGrounded_R_boolean])(ctx, (frame[0].o));
	if (temp1 != 0) goto label_187;
	}
	{
	jfloat temp0 = (jfloat)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_health;
	jfloat temp1 = -((jfloat)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_maxHealth);
	sp[0].o = (jobject)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_type;
	if ((floatCompare(temp0, (temp1 * ((jfloat)((mindustry_type_UnitType *) NULL_CHECK(sp[0].o))->F_wreckHealthMultiplier)), 1)) > 0) goto label_177;
	}
label_187:;
	{
	LINE_NUMBER(2388);
	SM_mindustry_gen_Call_unitDestroy_int(ctx, ((jint)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_id));
	}
label_177:;
	{
	LINE_NUMBER(2391);
	if ((frame[2].o) == nullptr) goto label_188;
	}
	{
	sp[0].o = (jobject)((mindustry_world_Tile *) NULL_CHECK((frame[2].o)))->F_build;
	if (sp[0].o == nullptr) goto label_188;
	}
	{
	LINE_NUMBER(2392);
	sp[0].o = (jobject)((mindustry_world_Tile *) NULL_CHECK((frame[2].o)))->F_build;
	((func_mindustry_gen_Building_unitOnAny_mindustry_gen_Unit) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_gen_Building_unitOnAny_mindustry_gen_Unit])(ctx, sp[0].o, (frame[0].o));
	}
label_188:;
	{
	LINE_NUMBER(2394);
	if ((frame[2].o) == nullptr) goto label_190;
	}
	{
	jint temp0 = (jint)((func_mindustry_gen_UnitEntity_isGrounded_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_gen_UnitEntity_isGrounded_R_boolean])(ctx, (frame[0].o));
	if (temp0 == 0) goto label_190;
	}
	{
	sp[0].o = (jobject)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_type;
	if (((jint)((mindustry_type_UnitType *) NULL_CHECK(sp[0].o))->F_hovering) != 0) goto label_190;
	}
	{
	LINE_NUMBER(2395);
	sp[0].o = (jobject)((mindustry_world_Tile *) NULL_CHECK((frame[2].o)))->F_build;
	if (sp[0].o == nullptr) goto label_192;
	}
	{
	LINE_NUMBER(2396);
	sp[0].o = (jobject)((mindustry_world_Tile *) NULL_CHECK((frame[2].o)))->F_build;
	((func_mindustry_gen_Building_unitOn_mindustry_gen_Unit) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_gen_Building_unitOn_mindustry_gen_Unit])(ctx, sp[0].o, (frame[0].o));
	}
label_192:;
	{
	LINE_NUMBER(2398);
	if ((floatCompare(((jfloat)((mindustry_world_blocks_environment_Floor *) NULL_CHECK((frame[1].o)))->F_damageTaken), (jfloat(0)), -1)) <= 0) goto label_190;
	}
	{
	LINE_NUMBER(2399);
	((func_mindustry_gen_UnitEntity_damageContinuous_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_gen_UnitEntity_damageContinuous_float])(ctx, (frame[0].o), ((jfloat)((mindustry_world_blocks_environment_Floor *) NULL_CHECK((frame[1].o)))->F_damageTaken));
	}
label_190:;
	{
	LINE_NUMBER(2402);
	if ((frame[2].o) == nullptr) goto label_195;
	}
	{
	jint temp0 = (jint)((func_mindustry_gen_UnitEntity_canPassOn_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_gen_UnitEntity_canPassOn_R_boolean])(ctx, (frame[0].o));
	if (temp0 != 0) goto label_195;
	}
	{
	LINE_NUMBER(2403);
	sp[0].o = (jobject)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_type;
	if (((jint)((mindustry_type_UnitType *) NULL_CHECK(sp[0].o))->F_canBoost) == 0) goto label_197;
	}
	{
	LINE_NUMBER(2404);
	((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_elevation = (jfloat(1));
	goto label_195;
	}
label_197:;
	{
	LINE_NUMBER(2405);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_net;
	jint temp0 = (jint)((func_mindustry_net_Net_client_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_net_Net_client_R_boolean])(ctx, sp[0].o);
	if (temp0 != 0) goto label_195;
	}
	clinit_mindustry_Vars(ctx);
	(sp++)->i = SF_mindustry_Vars_headless;
	if ((--sp)->i != 0) goto label_199;
	{
	jint temp0 = (jint)((func_mindustry_gen_UnitEntity_isRemote_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_gen_UnitEntity_isRemote_R_boolean])(ctx, (frame[0].o));
	if (temp0 != 0) goto label_195;
	}
label_199:;
	{
	LINE_NUMBER(2406);
	((func_mindustry_gen_UnitEntity_kill) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_gen_UnitEntity_kill])(ctx, (frame[0].o));
	}
label_195:;
	{
	LINE_NUMBER(2409);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_net;
	jint temp0 = (jint)((func_mindustry_net_Net_client_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_net_Net_client_R_boolean])(ctx, sp[0].o);
	if (temp0 != 0) goto label_200;
	}
	{
	if (((jint)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_dead) != 0) goto label_200;
	}
	{
	jint temp0 = (jint)((func_mindustry_gen_UnitEntity_shouldUpdateController_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_gen_UnitEntity_shouldUpdateController_R_boolean])(ctx, (frame[0].o));
	if (temp0 == 0) goto label_200;
	}
	{
	LINE_NUMBER(2410);
	sp[0].o = (jobject)((mindustry_gen_UnitEntity *) NULL_CHECK((frame[0].o)))->F_controller;
	((func_mindustry_entities_units_UnitController_updateUnit) resolveInterfaceMethod(ctx, &class_mindustry_entities_units_UnitController, INDEX_mindustry_entities_units_UnitController_updateUnit, sp[0].o))(ctx, sp[0].o);
	}
label_200:;
	{
	LINE_NUMBER(2412);
	sp[0].o = (jobject)((mindustry_gen_UnitEntity *) NULL_CHECK((frame[0].o)))->F_controller;
	jint temp0 = (jint)((func_mindustry_entities_units_UnitController_isValidController_R_boolean) resolveInterfaceMethod(ctx, &class_mindustry_entities_units_UnitController, INDEX_mindustry_entities_units_UnitController_isValidController_R_boolean, sp[0].o))(ctx, sp[0].o);
	if (temp0 != 0) goto label_202;
	}
	{
	LINE_NUMBER(2413);
	((func_mindustry_gen_UnitEntity_resetController) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_gen_UnitEntity_resetController])(ctx, (frame[0].o));
	}
label_202:;
	{
	LINE_NUMBER(2415);
	if (((jint)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_spawnedByCore) == 0) goto label_88;
	}
	{
	jint temp0 = (jint)((func_mindustry_gen_UnitEntity_isPlayer_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_gen_UnitEntity_isPlayer_R_boolean])(ctx, (frame[0].o));
	if (temp0 != 0) goto label_88;
	}
	{
	if (((jint)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_dead) != 0) goto label_88;
	}
	{
	LINE_NUMBER(2416);
	SM_mindustry_gen_Call_unitDespawn_mindustry_gen_Unit(ctx, (frame[0].o));
	}
label_88:;
	{
	LINE_NUMBER(2421);
	sp[0].o = (jobject)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_mounts;
	frame[1].o = sp[0].o;
	frame[2].i = (((jarray) nullCheck(ctx, (frame[1].o)))->length);
	frame[3].i = (jint(0));
	}
label_205:;
	{
	if ((frame[3].i) >= (frame[2].i)) goto label_206;
	}
	{
	frame[4].o = ((jobject)ARRAY_ACCESS(jobject, (frame[1].o), (frame[3].i)));
	LINE_NUMBER(2422);
	sp[0].o = (jobject)((mindustry_entities_units_WeaponMount *) NULL_CHECK((frame[4].o)))->F_weapon;
	((func_mindustry_type_Weapon_update_mindustry_gen_Unit_mindustry_entities_units_WeaponMount) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_type_Weapon_update_mindustry_gen_Unit_mindustry_entities_units_WeaponMount])(ctx, sp[0].o, (frame[0].o), (frame[4].o));
	LINE_NUMBER(2421);
	INST_IINC(3, 1);
	goto label_205;
	}
label_206:;
	LINE_NUMBER(2425);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_gen_UnitEntity_updateBoosting_boolean(jcontext ctx, jobject self, jbool param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/UnitEntity:updateBoosting", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(2429);
	((func_mindustry_gen_UnitEntity_updateBoosting_boolean_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_gen_UnitEntity_updateBoosting_boolean_boolean])(ctx, (frame[0].o), (frame[1].i), (jint(0)));
	LINE_NUMBER(2430);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_gen_UnitEntity_updateBoosting_boolean_boolean(jcontext ctx, jobject self, jbool param0, jbool param1) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/UnitEntity:updateBoosting", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(2434);
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
	LINE_NUMBER(2435);
	if ((frame[1].i) != 0) goto label_3;
	}
	{
	jint temp0 = (jint)((func_mindustry_gen_UnitEntity_onSolid_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_gen_UnitEntity_onSolid_R_boolean])(ctx, (frame[0].o));
	if (temp0 != 0) goto label_3;
	}
	{
	jint temp0 = (jint)((func_mindustry_gen_UnitEntity_isFlying_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_gen_UnitEntity_isFlying_R_boolean])(ctx, (frame[0].o));
	if (temp0 == 0) goto label_4;
	}
	{
	jint temp0 = (jint)((func_mindustry_gen_UnitEntity_canLand_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_gen_UnitEntity_canLand_R_boolean])(ctx, (frame[0].o));
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
	LINE_NUMBER(2436);
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
	LINE_NUMBER(2437);
	if ((frame[2].i) == 0) goto label_12;
	}
	{
	LINE_NUMBER(2438);
	clinit_mindustry_game_EventType$Trigger(ctx);
	sp[0].o = (jobject)SF_mindustry_game_EventType$Trigger_unitCommandBoost;
	SM_arc_Events_fire_java_lang_Enum(ctx, sp[0].o);
	}
label_12:;
	LINE_NUMBER(2440);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_gen_UnitEntity_updateBuildLogic(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[22];
	auto stack = &frame[15];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/UnitEntity:updateBuildLogic", 22 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(2444);
	sp[0].o = (jobject)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_type;
	if ((floatCompare(((jfloat)((mindustry_type_UnitType *) NULL_CHECK(sp[0].o))->F_buildSpeed), (jfloat(0)), 1)) > 0) goto label_1;
	}
	popStackFrame(ctx);
	INST_RETURN();
label_1:;
	{
	LINE_NUMBER(2445);
	if ((clinit_mindustry_Vars(ctx), (jint)SF_mindustry_Vars_headless) != 0) goto label_2;
	}
	{
	LINE_NUMBER(2446);
	sp[0].o = (jobject)((mindustry_gen_UnitEntity *) NULL_CHECK((frame[0].o)))->F_lastActive;
	if (sp[0].o == nullptr) goto label_4;
	}
	{
	if ((floatCompare(((jfloat)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_buildAlpha), (jfloat(1,000000e-02f)), 1)) > 0) goto label_4;
	}
	{
	LINE_NUMBER(2447);
	((mindustry_gen_UnitEntity *) NULL_CHECK((frame[0].o)))->F_lastActive = (jref) (jobject(nullptr));
	}
label_4:;
	{
	LINE_NUMBER(2449);
	sp[0].o = frame[0].o;
	jfloat temp0 = (jfloat)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_buildAlpha;
	jint temp1 = (jint)((func_mindustry_gen_UnitEntity_activelyBuilding_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_gen_UnitEntity_activelyBuilding_R_boolean])(ctx, (frame[0].o));
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
	LINE_NUMBER(2451);
	((func_mindustry_gen_UnitEntity_validatePlans) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_gen_UnitEntity_validatePlans])(ctx, (frame[0].o));
	LINE_NUMBER(2452);
	if (((jint)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_updateBuilding) == 0) goto label_9;
	}
	{
	jint temp0 = (jint)((func_mindustry_gen_UnitEntity_canBuild_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_gen_UnitEntity_canBuild_R_boolean])(ctx, (frame[0].o));
	if (temp0 != 0) goto label_10;
	}
label_9:;
	LINE_NUMBER(2453);
	popStackFrame(ctx);
	INST_RETURN();
label_10:;
	{
	LINE_NUMBER(2455);
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
	LINE_NUMBER(2456);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	sp[0].o = (jobject)((mindustry_core_GameState *) NULL_CHECK(sp[0].o))->F_rules;
	if (((jint)((mindustry_game_Rules *) NULL_CHECK(sp[0].o))->F_infiniteResources) != 0) goto label_14;
	}
	{
	sp[0].o = (jobject)((func_mindustry_gen_UnitEntity_team_R_mindustry_game_Team) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_gen_UnitEntity_team_R_mindustry_game_Team])(ctx, (frame[0].o));
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
	LINE_NUMBER(2457);
	sp[0].o = frame[0].o;
	((mindustry_gen_UnitEntity *) NULL_CHECK(sp[0].o))->F_buildCounter = (((jfloat)((mindustry_gen_UnitEntity *) NULL_CHECK(sp[0].o))->F_buildCounter) + (clinit_arc_util_Time(ctx), (jfloat)SF_arc_util_Time_delta));
	LINE_NUMBER(2458);
	jint temp0 = (jint)SM_java_lang_Float_isNaN_float_R_boolean(ctx, ((jfloat)((mindustry_gen_UnitEntity *) NULL_CHECK((frame[0].o)))->F_buildCounter));
	if (temp0 != 0) goto label_19;
	}
	{
	jint temp0 = (jint)SM_java_lang_Float_isInfinite_float_R_boolean(ctx, ((jfloat)((mindustry_gen_UnitEntity *) NULL_CHECK((frame[0].o)))->F_buildCounter));
	if (temp0 == 0) goto label_20;
	}
label_19:;
	{
	((mindustry_gen_UnitEntity *) NULL_CHECK((frame[0].o)))->F_buildCounter = (jfloat(0));
	}
label_20:;
	{
	LINE_NUMBER(2459);
	sp[0].o = frame[0].o;
	jfloat temp0 = (jfloat)SM_java_lang_Math_min_float_float_R_float(ctx, ((jfloat)((mindustry_gen_UnitEntity *) NULL_CHECK((frame[0].o)))->F_buildCounter), (jfloat(10.0f)));
	((mindustry_gen_UnitEntity *) NULL_CHECK(sp[0].o))->F_buildCounter = temp0;
	LINE_NUMBER(2460);
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
	LINE_NUMBER(2461);
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
	LINE_NUMBER(2462);
	frame[5].i = (jint(0));
	LINE_NUMBER(2463);
	sp[0].o = (jobject)((func_mindustry_gen_UnitEntity_core_R_mindustry_world_blocks_storage_CoreBlock$CoreBuild) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_gen_UnitEntity_core_R_mindustry_world_blocks_storage_CoreBlock$CoreBuild])(ctx, (frame[0].o));
	frame[6].o = sp[0].o;
	LINE_NUMBER(2464);
	if ((frame[6].o) != nullptr) goto label_30;
	}
	INST_ILOAD(2);
	if ((--sp)->i != 0) goto label_30;
	popStackFrame(ctx);
	INST_RETURN();
label_30:;
	{
	LINE_NUMBER(2465);
	if ((floatCompare(((jfloat)((mindustry_gen_UnitEntity *) NULL_CHECK((frame[0].o)))->F_buildCounter), (jfloat(1)), -1)) >= 0) goto label_31;
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
	LINE_NUMBER(2466);
	sp[0].o = frame[0].o;
	((mindustry_gen_UnitEntity *) NULL_CHECK(sp[0].o))->F_buildCounter = (((jfloat)((mindustry_gen_UnitEntity *) NULL_CHECK(sp[0].o))->F_buildCounter) - (jfloat(1)));
	LINE_NUMBER(2467);
	sp[0].o = (jobject)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_plans;
	if (((jint)((arc_struct_Queue *) NULL_CHECK(sp[0].o))->F_size) <= (jint(1))) goto label_35;
	}
	{
	LINE_NUMBER(2468);
	frame[7].i = (jint(0));
	LINE_NUMBER(2469);
	sp[0].o = (jobject)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_plans;
	frame[8].i = ((jint)((arc_struct_Queue *) NULL_CHECK(sp[0].o))->F_size);
	LINE_NUMBER(2470);
	frame[9].f = (jfloat(3,402823e+38f));
	LINE_NUMBER(2471);
	frame[10].i = (jint(0));
	LINE_NUMBER(2472);
	frame[11].i = (jint(-1));
	}
label_41:;
	{
	LINE_NUMBER(2473);
	if ((frame[7].i) >= (frame[8].i)) goto label_42;
	}
	{
	LINE_NUMBER(2474);
	sp[0].o = (jobject)((func_mindustry_gen_UnitEntity_buildPlan_R_mindustry_entities_units_BuildPlan) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_gen_UnitEntity_buildPlan_R_mindustry_entities_units_BuildPlan])(ctx, (frame[0].o));
	frame[12].o = sp[0].o;
	LINE_NUMBER(2475);
	jfloat temp0 = (jfloat)((func_mindustry_entities_units_BuildPlan_dst2_arc_math_geom_Position_R_float) ((void **) nullCheck(ctx, (frame[12].o))->vtable)[VTABLE_mindustry_entities_units_BuildPlan_dst2_arc_math_geom_Position_R_float])(ctx, (frame[12].o), (frame[0].o));
	frame[13].f = temp0;
	LINE_NUMBER(2476);
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
	LINE_NUMBER(2477);
	if ((frame[14].i) == 0) goto label_49;
	}
	{
	jint temp0 = (jint)((func_mindustry_gen_UnitEntity_shouldSkip_mindustry_entities_units_BuildPlan_mindustry_gen_Building_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_gen_UnitEntity_shouldSkip_mindustry_entities_units_BuildPlan_mindustry_gen_Building_R_boolean])(ctx, (frame[0].o), (frame[12].o), (frame[6].o));
	if (temp0 != 0) goto label_49;
	}
	{
	LINE_NUMBER(2478);
	frame[10].i = (jint(1));
	LINE_NUMBER(2479);
	goto label_42;
	}
label_49:;
	{
	LINE_NUMBER(2480);
	if ((frame[14].i) == 0) goto label_52;
	}
	{
	if ((floatCompare((frame[13].f), (frame[9].f), 1)) >= 0) goto label_52;
	}
	{
	LINE_NUMBER(2481);
	frame[11].i = (frame[7].i);
	LINE_NUMBER(2482);
	frame[9].f = (frame[13].f);
	}
label_52:;
	{
	LINE_NUMBER(2484);
	sp[0].o = (jobject)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_plans;
	sp[0].o = (jobject)((func_arc_struct_Queue_removeFirst_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Queue_removeFirst_R_java_lang_Object])(ctx, sp[0].o);
	LINE_NUMBER(2485);
	sp[0].o = (jobject)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_plans;
	((func_arc_struct_Queue_addLast_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Queue_addLast_java_lang_Object])(ctx, sp[0].o, (frame[12].o));
	LINE_NUMBER(2486);
	INST_IINC(7, 1);
	LINE_NUMBER(2487);
	goto label_41;
	}
label_42:;
	{
	LINE_NUMBER(2488);
	if ((frame[10].i) != 0) goto label_35;
	}
	INST_ILOAD(11);
	if ((--sp)->i <= 0) goto label_35;
	{
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((func_mindustry_gen_UnitEntity_buildPlan_R_mindustry_entities_units_BuildPlan) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_gen_UnitEntity_buildPlan_R_mindustry_entities_units_BuildPlan])(ctx, (frame[0].o));
	jint temp0 = (jint)((func_mindustry_gen_UnitEntity_within_arc_math_geom_Position_float_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_gen_UnitEntity_within_arc_math_geom_Position_float_R_boolean])(ctx, sp[0].o, sp[1].o, (frame[1].f));
	if (temp0 != 0) goto label_35;
	}
	{
	LINE_NUMBER(2489);
	frame[12].i = (jint(0));
	}
label_59:;
	{
	if ((frame[12].i) >= (frame[11].i)) goto label_35;
	}
	{
	LINE_NUMBER(2490);
	sp[0].o = (jobject)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_plans;
	sp[1].o = (jobject)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_plans;
	sp[1].o = (jobject)((func_arc_struct_Queue_removeFirst_R_java_lang_Object) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_struct_Queue_removeFirst_R_java_lang_Object])(ctx, sp[1].o);
	((func_arc_struct_Queue_addLast_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Queue_addLast_java_lang_Object])(ctx, sp[0].o, (checkCast(ctx, &class_mindustry_entities_units_BuildPlan, sp[1].o)));
	LINE_NUMBER(2489);
	INST_IINC(12, 1);
	goto label_59;
	}
label_35:;
	{
	LINE_NUMBER(2494);
	sp[0].o = (jobject)((func_mindustry_gen_UnitEntity_buildPlan_R_mindustry_entities_units_BuildPlan) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_gen_UnitEntity_buildPlan_R_mindustry_entities_units_BuildPlan])(ctx, (frame[0].o));
	frame[7].o = sp[0].o;
	LINE_NUMBER(2495);
	sp[0].o = (jobject)((func_mindustry_entities_units_BuildPlan_tile_R_mindustry_world_Tile) ((void **) nullCheck(ctx, (frame[7].o))->vtable)[VTABLE_mindustry_entities_units_BuildPlan_tile_R_mindustry_world_Tile])(ctx, (frame[7].o));
	frame[8].o = sp[0].o;
	LINE_NUMBER(2496);
	((mindustry_gen_UnitEntity *) NULL_CHECK((frame[0].o)))->F_lastActive = (jref) (frame[7].o);
	LINE_NUMBER(2497);
	((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_buildAlpha = (jfloat(1));
	LINE_NUMBER(2498);
	if (((jint)((mindustry_entities_units_BuildPlan *) NULL_CHECK((frame[7].o)))->F_breaking) == 0) goto label_66;
	}
	{
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((func_mindustry_world_Tile_block_R_mindustry_world_Block) ((void **) nullCheck(ctx, (frame[8].o))->vtable)[VTABLE_mindustry_world_Tile_block_R_mindustry_world_Block])(ctx, (frame[8].o));
	((mindustry_gen_UnitEntity *) NULL_CHECK(sp[0].o))->F_lastSize = ((jint)((mindustry_world_Block *) NULL_CHECK(sp[1].o))->F_size);
	}
label_66:;
	{
	LINE_NUMBER(2499);
	jint temp0 = (jint)((func_mindustry_gen_UnitEntity_within_arc_math_geom_Position_float_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_gen_UnitEntity_within_arc_math_geom_Position_float_R_boolean])(ctx, (frame[0].o), (frame[8].o), (frame[1].f));
	if (temp0 != 0) goto label_67;
	}
	goto label_30;
label_67:;
	{
	LINE_NUMBER(2500);
	if ((clinit_mindustry_Vars(ctx), (jint)SF_mindustry_Vars_headless) != 0) goto label_68;
	}
	{
	LINE_NUMBER(2501);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_control;
	sp[0].o = (jobject)((mindustry_core_Control *) NULL_CHECK(sp[0].o))->F_sound;
	clinit_mindustry_gen_Sounds(ctx);
	sp[1].o = (jobject)SF_mindustry_gen_Sounds_loopBuild;
	((func_mindustry_audio_SoundControl_loop_arc_audio_Sound_arc_math_geom_Position_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_audio_SoundControl_loop_arc_audio_Sound_arc_math_geom_Position_float])(ctx, sp[0].o, sp[1].o, (frame[8].o), (jfloat(1.3f)));
	}
label_68:;
	{
	LINE_NUMBER(2503);
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
	LINE_NUMBER(2504);
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
	LINE_NUMBER(2505);
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
	LINE_NUMBER(2506);
	sp[0].o = (jobject)((mindustry_entities_units_BuildPlan *) NULL_CHECK((frame[7].o)))->F_block;
	jint temp0 = (jint)SM_mindustry_world_Build_checkNoUnitOverlap_mindustry_world_Block_int_int_R_boolean(ctx, sp[0].o, ((jint)((mindustry_entities_units_BuildPlan *) NULL_CHECK((frame[7].o)))->F_x), ((jint)((mindustry_entities_units_BuildPlan *) NULL_CHECK((frame[7].o)))->F_y));
	if (temp0 == 0) goto label_80;
	}
	{
	LINE_NUMBER(2507);
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
		clinit_mindustry_gen_UnitEntity_invoke_arc_func_Boolf_19(ctx);
		auto proxy = (mindustry_gen_UnitEntity_invoke_arc_func_Boolf_19 *) gcAlloc(ctx, &class_mindustry_gen_UnitEntity_invoke_arc_func_Boolf_19);
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
	LINE_NUMBER(2508);
	if ((frame[11].i) == 0) goto label_87;
	}
	{
	LINE_NUMBER(2509);
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
	LINE_NUMBER(2510);
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
	LINE_NUMBER(2511);
	sp[0].o = (jobject)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_plans;
	if (((jint)((arc_struct_Queue *) NULL_CHECK(sp[0].o))->F_size) <= 0) goto label_30;
	}
	{
	LINE_NUMBER(2512);
	sp[0].o = (jobject)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_plans;
	sp[0].o = (jobject)((func_arc_struct_Queue_removeFirst_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Queue_removeFirst_R_java_lang_Object])(ctx, sp[0].o);
	goto label_30;
	}
label_87:;
	{
	LINE_NUMBER(2517);
	((mindustry_entities_units_BuildPlan *) NULL_CHECK((frame[7].o)))->F_stuck = (jint(1));
	}
label_92:;
	LINE_NUMBER(2519);
	goto label_95;
label_80:;
	{
	LINE_NUMBER(2520);
	sp[0].o = (jobject)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_plans;
	sp[0].o = (jobject)((func_arc_struct_Queue_removeFirst_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Queue_removeFirst_R_java_lang_Object])(ctx, sp[0].o);
	LINE_NUMBER(2521);
	sp[0].o = (jobject)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_plans;
	((func_arc_struct_Queue_addLast_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Queue_addLast_java_lang_Object])(ctx, sp[0].o, (frame[7].o));
	LINE_NUMBER(2522);
	goto label_30;
	}
label_78:;
	{
	LINE_NUMBER(2524);
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
	LINE_NUMBER(2525);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_team;
	SM_mindustry_gen_Call_beginBreak_mindustry_gen_Unit_mindustry_game_Team_int_int(ctx, sp[0].o, sp[1].o, ((jint)((mindustry_entities_units_BuildPlan *) NULL_CHECK((frame[7].o)))->F_x), ((jint)((mindustry_entities_units_BuildPlan *) NULL_CHECK((frame[7].o)))->F_y));
	goto label_95;
	}
label_98:;
	{
	LINE_NUMBER(2527);
	sp[0].o = (jobject)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_plans;
	sp[0].o = (jobject)((func_arc_struct_Queue_removeFirst_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Queue_removeFirst_R_java_lang_Object])(ctx, sp[0].o);
	LINE_NUMBER(2528);
	goto label_30;
	}
label_77:;
	{
	LINE_NUMBER(2530);
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
	LINE_NUMBER(2531);
	sp[0].o = (jobject)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_plans;
	sp[0].o = (jobject)((func_arc_struct_Queue_removeFirst_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Queue_removeFirst_R_java_lang_Object])(ctx, sp[0].o);
	LINE_NUMBER(2532);
	goto label_30;
	}
label_95:;
	{
	LINE_NUMBER(2534);
	sp[0].o = (jobject)((mindustry_world_Tile *) NULL_CHECK((frame[8].o)))->F_build;
	if ((isInstance(ctx, sp[0].o, &class_mindustry_world_blocks_ConstructBlock$ConstructBuild)) == 0) goto label_104;
	}
	{
	if (((jint)((mindustry_entities_units_BuildPlan *) NULL_CHECK((frame[7].o)))->F_initialized) != 0) goto label_104;
	}
	{
	LINE_NUMBER(2535);
	clinit_mindustry_game_EventType$BuildSelectEvent(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_game_EventType$BuildSelectEvent);
	sp[1].o = frame[8].o;
	sp[2].o = (jobject)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_team;
	init_mindustry_game_EventType$BuildSelectEvent_mindustry_world_Tile_mindustry_game_Team_mindustry_gen_Unit_boolean(ctx, sp[0].o, sp[1].o, sp[2].o, (frame[0].o), ((jint)((mindustry_entities_units_BuildPlan *) NULL_CHECK((frame[7].o)))->F_breaking));
	SM_arc_Events_fire_java_lang_Object(ctx, sp[0].o);
	LINE_NUMBER(2536);
	((mindustry_entities_units_BuildPlan *) NULL_CHECK((frame[7].o)))->F_initialized = (jint(1));
	}
label_104:;
	{
	LINE_NUMBER(2538);
	sp[0].o = (jobject)((mindustry_world_Tile *) NULL_CHECK((frame[8].o)))->F_build;
	frame[11].o = sp[0].o;
	if ((isInstance(ctx, (frame[11].o), &class_mindustry_world_blocks_ConstructBlock$ConstructBuild)) == 0) goto label_30;
	}
	{
	frame[10].o = (checkCast(ctx, &class_mindustry_world_blocks_ConstructBlock$ConstructBuild, (frame[11].o)));
	LINE_NUMBER(2541);
	jfloat temp0 = (jfloat(1)) / ((jfloat)((mindustry_world_blocks_ConstructBlock$ConstructBuild *) NULL_CHECK((frame[10].o)))->F_buildCost);
	sp[0].o = (jobject)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_type;
	jfloat temp1 = (temp0 * ((jfloat)((mindustry_type_UnitType *) NULL_CHECK(sp[0].o))->F_buildSpeed)) * ((jfloat)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_buildSpeedMultiplier);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	sp[0].o = (jobject)((mindustry_core_GameState *) NULL_CHECK(sp[0].o))->F_rules;
	sp[1].o = (jobject)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_team;
	jfloat temp2 = (jfloat)((func_mindustry_game_Rules_buildSpeed_mindustry_game_Team_R_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_game_Rules_buildSpeed_mindustry_game_Team_R_float])(ctx, sp[0].o, sp[1].o);
	frame[11].f = (temp1 * temp2);
	LINE_NUMBER(2542);
	if (((jint)((mindustry_entities_units_BuildPlan *) NULL_CHECK((frame[7].o)))->F_breaking) == 0) goto label_109;
	}
	{
	LINE_NUMBER(2543);
	((func_mindustry_world_blocks_ConstructBlock$ConstructBuild_deconstruct_mindustry_gen_Unit_mindustry_world_blocks_storage_CoreBlock$CoreBuild_float) ((void **) nullCheck(ctx, (frame[10].o))->vtable)[VTABLE_mindustry_world_blocks_ConstructBlock$ConstructBuild_deconstruct_mindustry_gen_Unit_mindustry_world_blocks_storage_CoreBlock$CoreBuild_float])(ctx, (frame[10].o), (frame[0].o), (frame[6].o), (frame[11].f));
	goto label_111;
	}
label_109:;
	{
	LINE_NUMBER(2544);
	if ((frame[9].i) == 0) goto label_111;
	}
	{
	LINE_NUMBER(2545);
	sp[0].o = frame[10].o;
	sp[1].o = frame[0].o;
	sp[2].o = frame[6].o;
	jfloat temp0 = frame[11].f;
	sp[3].o = (jobject)((mindustry_entities_units_BuildPlan *) NULL_CHECK((frame[7].o)))->F_config;
	((func_mindustry_world_blocks_ConstructBlock$ConstructBuild_construct_mindustry_gen_Unit_mindustry_gen_Building_float_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_blocks_ConstructBlock$ConstructBuild_construct_mindustry_gen_Unit_mindustry_gen_Building_float_java_lang_Object])(ctx, sp[0].o, sp[1].o, sp[2].o, temp0, sp[3].o);
	}
label_111:;
	{
	LINE_NUMBER(2547);
	sp[0].o = frame[7].o;
	jint temp0 = (jint)SM_arc_math_Mathf_equal_float_float_R_boolean(ctx, ((jfloat)((mindustry_entities_units_BuildPlan *) NULL_CHECK((frame[7].o)))->F_progress), ((jfloat)((mindustry_world_blocks_ConstructBlock$ConstructBuild *) NULL_CHECK((frame[10].o)))->F_progress));
	((mindustry_entities_units_BuildPlan *) NULL_CHECK(sp[0].o))->F_stuck = temp0;
	LINE_NUMBER(2548);
	((mindustry_entities_units_BuildPlan *) NULL_CHECK((frame[7].o)))->F_progress = ((jfloat)((mindustry_world_blocks_ConstructBlock$ConstructBuild *) NULL_CHECK((frame[10].o)))->F_progress);
	LINE_NUMBER(2549);
	goto label_30;
	}
label_32:;
	LINE_NUMBER(2550);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_gen_UnitEntity_updateDrowning(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/UnitEntity:updateDrowning", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(2554);
	sp[0].o = (jobject)((func_mindustry_gen_UnitEntity_drownFloor_R_mindustry_world_blocks_environment_Floor) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_gen_UnitEntity_drownFloor_R_mindustry_world_blocks_environment_Floor])(ctx, (frame[0].o));
	frame[1].o = sp[0].o;
	LINE_NUMBER(2555);
	if ((frame[1].o) == nullptr) goto label_2;
	}
	{
	if (((jint)((mindustry_world_blocks_environment_Floor *) NULL_CHECK((frame[1].o)))->F_isLiquid) == 0) goto label_2;
	}
	{
	if ((floatCompare(((jfloat)((mindustry_world_blocks_environment_Floor *) NULL_CHECK((frame[1].o)))->F_drownTime), (jfloat(0)), -1)) <= 0) goto label_2;
	}
	{
	jint temp0 = (jint)((func_mindustry_gen_UnitEntity_canDrown_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_gen_UnitEntity_canDrown_R_boolean])(ctx, (frame[0].o));
	if (temp0 == 0) goto label_2;
	}
	{
	LINE_NUMBER(2556);
	((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_lastDrownFloor = (jref) (frame[1].o);
	LINE_NUMBER(2557);
	sp[0].o = frame[0].o;
	jfloat temp0 = (jfloat)((mindustry_gen_Unit *) NULL_CHECK(sp[0].o))->F_drownTime;
	clinit_arc_util_Time(ctx);
	jfloat temp1 = (jfloat)SF_arc_util_Time_delta;
	jfloat temp2 = ((jfloat)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_hitSize) / (jfloat(8.0f));
	sp[1].o = (jobject)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_type;
	((mindustry_gen_Unit *) NULL_CHECK(sp[0].o))->F_drownTime = (temp0 + (temp1 / ((temp2 * ((jfloat)((mindustry_type_UnitType *) NULL_CHECK(sp[1].o))->F_drownTimeMultiplier)) * ((jfloat)((mindustry_world_blocks_environment_Floor *) NULL_CHECK((frame[1].o)))->F_drownTime))));
	LINE_NUMBER(2558);
	jint temp3 = (jint)SM_arc_math_Mathf_chanceDelta_double_R_boolean(ctx, (jdouble(0.05000000074505806)));
	if (temp3 == 0) goto label_6;
	}
	{
	LINE_NUMBER(2559);
	sp[0].o = (jobject)((mindustry_world_blocks_environment_Floor *) NULL_CHECK((frame[1].o)))->F_drownUpdateEffect;
	jfloat temp0 = (jfloat)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_x;
	jfloat temp1 = (jfloat)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_y;
	jfloat temp2 = (jfloat)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_hitSize;
	sp[1].o = (jobject)((mindustry_world_Block *) NULL_CHECK((frame[1].o)))->F_mapColor;
	((func_mindustry_entities_Effect_at_float_float_float_arc_graphics_Color) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_entities_Effect_at_float_float_float_arc_graphics_Color])(ctx, sp[0].o, temp0, temp1, temp2, sp[1].o);
	}
label_6:;
	{
	LINE_NUMBER(2561);
	if ((floatCompare(((jfloat)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_drownTime), (jfloat(0.999f)), -1)) < 0) goto label_8;
	}
	{
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_net;
	jint temp0 = (jint)((func_mindustry_net_Net_client_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_net_Net_client_R_boolean])(ctx, sp[0].o);
	if (temp0 != 0) goto label_8;
	}
	{
	LINE_NUMBER(2562);
	((func_mindustry_gen_UnitEntity_kill) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_gen_UnitEntity_kill])(ctx, (frame[0].o));
	LINE_NUMBER(2563);
	clinit_mindustry_game_EventType$UnitDrownEvent(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_game_EventType$UnitDrownEvent);
	init_mindustry_game_EventType$UnitDrownEvent_mindustry_gen_Unit(ctx, sp[0].o, (frame[0].o));
	SM_arc_Events_fire_java_lang_Object(ctx, sp[0].o);
	goto label_8;
	}
label_2:;
	{
	LINE_NUMBER(2566);
	sp[0].o = frame[0].o;
	((mindustry_gen_Unit *) NULL_CHECK(sp[0].o))->F_drownTime = (((jfloat)((mindustry_gen_Unit *) NULL_CHECK(sp[0].o))->F_drownTime) - ((clinit_arc_util_Time(ctx), (jfloat)SF_arc_util_Time_delta) / (jfloat(50.0f))));
	}
label_8:;
	{
	LINE_NUMBER(2568);
	sp[0].o = frame[0].o;
	jfloat temp0 = (jfloat)SM_arc_math_Mathf_clamp_float_R_float(ctx, ((jfloat)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_drownTime));
	((mindustry_gen_Unit *) NULL_CHECK(sp[0].o))->F_drownTime = temp0;
	LINE_NUMBER(2569);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_gen_UnitEntity_updateLastPosition(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/UnitEntity:updateLastPosition", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(2573);
	((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_deltaX = (((jfloat)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_x) - ((jfloat)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_lastX));
	LINE_NUMBER(2574);
	((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_deltaY = (((jfloat)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_y) - ((jfloat)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_lastY));
	LINE_NUMBER(2575);
	((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_lastX = ((jfloat)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_x);
	LINE_NUMBER(2576);
	((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_lastY = ((jfloat)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_y);
	LINE_NUMBER(2577);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_gen_UnitEntity_validatePlans(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/UnitEntity:validatePlans", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(2581);
	sp[0].o = (jobject)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_plans;
	if (((jint)((arc_struct_Queue *) NULL_CHECK(sp[0].o))->F_size) <= 0) goto label_1;
	}
	{
	LINE_NUMBER(2582);
	sp[0].o = (jobject)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_plans;
	sp[0].o = (jobject)((func_arc_struct_Queue_iterator_R_java_util_Iterator) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Queue_iterator_R_java_util_Iterator])(ctx, sp[0].o);
	frame[1].o = sp[0].o;
	}
label_3:;
	{
	LINE_NUMBER(2583);
	jint temp0 = (jint)((func_java_util_Iterator_hasNext_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_hasNext_R_boolean, (frame[1].o)))(ctx, (frame[1].o));
	if (temp0 == 0) goto label_1;
	}
	{
	LINE_NUMBER(2584);
	sp[0].o = (jobject)((func_java_util_Iterator_next_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_next_R_java_lang_Object, (frame[1].o)))(ctx, (frame[1].o));
	frame[2].o = (checkCast(ctx, &class_mindustry_entities_units_BuildPlan, sp[0].o));
	LINE_NUMBER(2585);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_world;
	sp[0].o = (jobject)((func_mindustry_core_World_tile_int_int_R_mindustry_world_Tile) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_World_tile_int_int_R_mindustry_world_Tile])(ctx, sp[0].o, ((jint)((mindustry_entities_units_BuildPlan *) NULL_CHECK((frame[2].o)))->F_x), ((jint)((mindustry_entities_units_BuildPlan *) NULL_CHECK((frame[2].o)))->F_y));
	frame[3].o = sp[0].o;
	LINE_NUMBER(2586);
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
	LINE_NUMBER(2587);
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
	LINE_NUMBER(2588);
	((func_java_util_Iterator_remove) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_remove, (frame[1].o)))(ctx, (frame[1].o));
	}
label_12:;
	LINE_NUMBER(2590);
	goto label_3;
label_1:;
	LINE_NUMBER(2592);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_gen_UnitEntity_velAddNet_arc_math_geom_Vec2(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/UnitEntity:velAddNet", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(2596);
	sp[0].o = (jobject)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_vel;
	sp[0].o = (jobject)((func_arc_math_geom_Vec2_add_arc_math_geom_Vec2_R_arc_math_geom_Vec2) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Vec2_add_arc_math_geom_Vec2_R_arc_math_geom_Vec2])(ctx, sp[0].o, (frame[1].o));
	LINE_NUMBER(2597);
	jint temp0 = (jint)((func_mindustry_gen_UnitEntity_isRemote_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_gen_UnitEntity_isRemote_R_boolean])(ctx, (frame[0].o));
	if (temp0 == 0) goto label_2;
	}
	{
	LINE_NUMBER(2598);
	sp[0].o = frame[0].o;
	((mindustry_gen_Unit *) NULL_CHECK(sp[0].o))->F_x = (((jfloat)((mindustry_gen_Unit *) NULL_CHECK(sp[0].o))->F_x) + ((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK((frame[1].o)))->F_x));
	LINE_NUMBER(2599);
	sp[0].o = frame[0].o;
	((mindustry_gen_Unit *) NULL_CHECK(sp[0].o))->F_y = (((jfloat)((mindustry_gen_Unit *) NULL_CHECK(sp[0].o))->F_y) + ((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK((frame[1].o)))->F_y));
	}
label_2:;
	LINE_NUMBER(2601);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_gen_UnitEntity_velAddNet_float_float(jcontext ctx, jobject self, jfloat param0, jfloat param1) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/UnitEntity:velAddNet", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	frame[2].f = param1;
	{
	LINE_NUMBER(2605);
	sp[0].o = (jobject)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_vel;
	sp[0].o = (jobject)((func_arc_math_geom_Vec2_add_float_float_R_arc_math_geom_Vec2) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Vec2_add_float_float_R_arc_math_geom_Vec2])(ctx, sp[0].o, (frame[1].f), (frame[2].f));
	LINE_NUMBER(2606);
	jint temp0 = (jint)((func_mindustry_gen_UnitEntity_isRemote_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_gen_UnitEntity_isRemote_R_boolean])(ctx, (frame[0].o));
	if (temp0 == 0) goto label_2;
	}
	{
	LINE_NUMBER(2607);
	sp[0].o = frame[0].o;
	((mindustry_gen_Unit *) NULL_CHECK(sp[0].o))->F_x = (((jfloat)((mindustry_gen_Unit *) NULL_CHECK(sp[0].o))->F_x) + (frame[1].f));
	LINE_NUMBER(2608);
	sp[0].o = frame[0].o;
	((mindustry_gen_Unit *) NULL_CHECK(sp[0].o))->F_y = (((jfloat)((mindustry_gen_Unit *) NULL_CHECK(sp[0].o))->F_y) + (frame[2].f));
	}
label_2:;
	LINE_NUMBER(2610);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_gen_UnitEntity_wobble(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/UnitEntity:wobble", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(2614);
	sp[0].o = frame[0].o;
	jfloat temp0 = (jfloat)((mindustry_gen_Unit *) NULL_CHECK(sp[0].o))->F_x;
	jfloat temp1 = (jfloat)SM_arc_math_Mathf_sin_float_float_float_R_float(ctx, ((clinit_arc_util_Time(ctx), (jfloat)SF_arc_util_Time_time) + (jfloat(((((jint)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_id) % (10)) * (12))))), (jfloat(25.0f)), (jfloat(0.05f)));
	((mindustry_gen_Unit *) NULL_CHECK(sp[0].o))->F_x = (temp0 + ((temp1 * (clinit_arc_util_Time(ctx), (jfloat)SF_arc_util_Time_delta)) * ((jfloat)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_elevation)));
	LINE_NUMBER(2615);
	sp[0].o = frame[0].o;
	jfloat temp2 = (jfloat)((mindustry_gen_Unit *) NULL_CHECK(sp[0].o))->F_y;
	jfloat temp3 = (jfloat)SM_arc_math_Mathf_cos_float_float_float_R_float(ctx, ((clinit_arc_util_Time(ctx), (jfloat)SF_arc_util_Time_time) + (jfloat(((((jint)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_id) % (10)) * (12))))), (jfloat(25.0f)), (jfloat(0.05f)));
	((mindustry_gen_Unit *) NULL_CHECK(sp[0].o))->F_y = (temp2 + ((temp3 * (clinit_arc_util_Time(ctx), (jfloat)SF_arc_util_Time_delta)) * ((jfloat)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_elevation)));
	LINE_NUMBER(2616);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_gen_UnitEntity_writeSync_arc_util_io_Writes(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/UnitEntity:writeSync", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(2619);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_abilities;
	SM_mindustry_io_TypeIO_writeAbilities_arc_util_io_Writes_Array1_mindustry_entities_abilities_Ability(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(2620);
	((func_arc_util_io_Writes_f_float) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_util_io_Writes_f_float])(ctx, (frame[1].o), ((jfloat)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_aimX));
	LINE_NUMBER(2621);
	((func_arc_util_io_Writes_f_float) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_util_io_Writes_f_float])(ctx, (frame[1].o), ((jfloat)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_aimY));
	LINE_NUMBER(2622);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((mindustry_gen_UnitEntity *) NULL_CHECK((frame[0].o)))->F_controller;
	SM_mindustry_io_TypeIO_writeController_arc_util_io_Writes_mindustry_entities_units_UnitController(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(2623);
	((func_arc_util_io_Writes_f_float) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_util_io_Writes_f_float])(ctx, (frame[1].o), ((jfloat)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_elevation));
	LINE_NUMBER(2624);
	((func_arc_util_io_Writes_d_double) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_util_io_Writes_d_double])(ctx, (frame[1].o), ((jdouble)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_flag));
	LINE_NUMBER(2625);
	((func_arc_util_io_Writes_f_float) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_util_io_Writes_f_float])(ctx, (frame[1].o), ((jfloat)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_health));
	LINE_NUMBER(2626);
	((func_arc_util_io_Writes_bool_boolean) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_util_io_Writes_bool_boolean])(ctx, (frame[1].o), ((jint)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_isShooting));
	LINE_NUMBER(2627);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_mineTile;
	SM_mindustry_io_TypeIO_writeTile_arc_util_io_Writes_mindustry_world_Tile(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(2628);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_mounts;
	SM_mindustry_io_TypeIO_writeMounts_arc_util_io_Writes_Array1_mindustry_entities_units_WeaponMount(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(2629);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_plans;
	SM_mindustry_io_TypeIO_writePlansQueueNet_arc_util_io_Writes_arc_struct_Queue(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(2630);
	((func_arc_util_io_Writes_f_float) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_util_io_Writes_f_float])(ctx, (frame[1].o), ((jfloat)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_rotation));
	LINE_NUMBER(2631);
	((func_arc_util_io_Writes_f_float) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_util_io_Writes_f_float])(ctx, (frame[1].o), ((jfloat)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_shield));
	LINE_NUMBER(2632);
	((func_arc_util_io_Writes_bool_boolean) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_util_io_Writes_bool_boolean])(ctx, (frame[1].o), ((jint)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_spawnedByCore));
	LINE_NUMBER(2633);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_stack;
	SM_mindustry_io_TypeIO_writeItems_arc_util_io_Writes_mindustry_type_ItemStack(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(2634);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((mindustry_gen_UnitEntity *) NULL_CHECK((frame[0].o)))->F_statuses;
	((func_arc_util_io_Writes_i_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_util_io_Writes_i_int])(ctx, sp[0].o, ((jint)((arc_struct_Seq *) NULL_CHECK(sp[1].o))->F_size));
	LINE_NUMBER(2635);
	frame[2].i = (jint(0));
	}
label_17:;
	{
	jint temp0 = frame[2].i;
	sp[0].o = (jobject)((mindustry_gen_UnitEntity *) NULL_CHECK((frame[0].o)))->F_statuses;
	if (temp0 >= ((jint)((arc_struct_Seq *) NULL_CHECK(sp[0].o))->F_size)) goto label_18;
	}
	{
	LINE_NUMBER(2636);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((mindustry_gen_UnitEntity *) NULL_CHECK((frame[0].o)))->F_statuses;
	sp[1].o = (jobject)((func_arc_struct_Seq_get_int_R_java_lang_Object) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_struct_Seq_get_int_R_java_lang_Object])(ctx, sp[1].o, (frame[2].i));
	SM_mindustry_io_TypeIO_writeStatus_arc_util_io_Writes_mindustry_entities_units_StatusEntry(ctx, sp[0].o, (checkCast(ctx, &class_mindustry_entities_units_StatusEntry, sp[1].o)));
	LINE_NUMBER(2635);
	INST_IINC(2, 1);
	goto label_17;
	}
label_18:;
	{
	LINE_NUMBER(2638);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_team;
	SM_mindustry_io_TypeIO_writeTeam_arc_util_io_Writes_mindustry_game_Team(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(2639);
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
	LINE_NUMBER(2640);
	((func_arc_util_io_Writes_bool_boolean) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_util_io_Writes_bool_boolean])(ctx, (frame[1].o), ((jint)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_updateBuilding));
	LINE_NUMBER(2641);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_vel;
	SM_mindustry_io_TypeIO_writeVec2_arc_util_io_Writes_arc_math_geom_Vec2(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(2642);
	((func_arc_util_io_Writes_f_float) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_util_io_Writes_f_float])(ctx, (frame[1].o), ((jfloat)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_x));
	LINE_NUMBER(2643);
	((func_arc_util_io_Writes_f_float) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_util_io_Writes_f_float])(ctx, (frame[1].o), ((jfloat)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_y));
	LINE_NUMBER(2645);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_gen_UnitEntity_writeSyncManual_java_nio_FloatBuffer(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/UnitEntity:writeSyncManual", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(2648);
	sp[0].o = (jobject)((func_java_nio_FloatBuffer_put_float_R_java_nio_FloatBuffer) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_nio_FloatBuffer_put_float_R_java_nio_FloatBuffer])(ctx, (frame[1].o), ((jfloat)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_rotation));
	LINE_NUMBER(2649);
	sp[0].o = (jobject)((func_java_nio_FloatBuffer_put_float_R_java_nio_FloatBuffer) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_nio_FloatBuffer_put_float_R_java_nio_FloatBuffer])(ctx, (frame[1].o), ((jfloat)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_x));
	LINE_NUMBER(2650);
	sp[0].o = (jobject)((func_java_nio_FloatBuffer_put_float_R_java_nio_FloatBuffer) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_nio_FloatBuffer_put_float_R_java_nio_FloatBuffer])(ctx, (frame[1].o), ((jfloat)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_y));
	LINE_NUMBER(2652);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jbool SM_mindustry_gen_UnitEntity_lambda$updateBuildLogic$0_mindustry_world_blocks_storage_CoreBlock$CoreBuild_mindustry_type_ItemStack_R_boolean(jcontext ctx, jobject param0, jobject param1) {
	jtype frame[6];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/UnitEntity:lambda$updateBuildLogic$0", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_gen_UnitEntity(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	{
	LINE_NUMBER(2507);
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

jbool M_mindustry_gen_UnitEntity_lambda$unapply$0_mindustry_type_StatusEffect_mindustry_entities_units_StatusEntry_R_boolean(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/UnitEntity:lambda$unapply$0", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(2133);
	sp[0].o = (jobject)((mindustry_entities_units_StatusEntry *) NULL_CHECK((frame[2].o)))->F_effect;
	if (sp[0].o != (frame[1].o)) goto label_1;
	}
	{
	LINE_NUMBER(2134);
	sp[0].o = (jobject)((mindustry_entities_units_StatusEntry *) NULL_CHECK((frame[2].o)))->F_effect;
	((func_mindustry_type_StatusEffect_onRemoved_mindustry_gen_Unit) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_type_StatusEffect_onRemoved_mindustry_gen_Unit])(ctx, sp[0].o, (frame[0].o));
	LINE_NUMBER(2135);
	SM_arc_util_pooling_Pools_free_java_lang_Object(ctx, (frame[2].o));
	LINE_NUMBER(2136);
	popStackFrame(ctx);
	return (jint(1));
	}
label_1:;
	{
	LINE_NUMBER(2138);
	popStackFrame(ctx);
	return (jint(0));
	}

	popStackFrame(ctx);
}

jbool SM_mindustry_gen_UnitEntity_lambda$removeBuild$0_boolean_int_int_mindustry_entities_units_BuildPlan_R_boolean(jcontext ctx, jbool param0, jint param1, jint param2, jobject param3) {
	jtype frame[6];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/UnitEntity:lambda$removeBuild$0", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_gen_UnitEntity(ctx);
	frame[0].i = param0;
	frame[1].i = param1;
	frame[2].i = param2;
	frame[3].o = param3;
	{
	LINE_NUMBER(1908);
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

jbool M_mindustry_gen_UnitEntity_lambda$destroy$0_float_mindustry_gen_Building_R_boolean(jcontext ctx, jobject self, jfloat param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/UnitEntity:lambda$destroy$0", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(1472);
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

void M_mindustry_gen_UnitEntity_lambda$clearStatuses$0_mindustry_entities_units_StatusEntry(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/UnitEntity:lambda$clearStatuses$0", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(1341);
	sp[0].o = (jobject)((mindustry_entities_units_StatusEntry *) NULL_CHECK((frame[1].o)))->F_effect;
	((func_mindustry_type_StatusEffect_onRemoved_mindustry_gen_Unit) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_type_StatusEffect_onRemoved_mindustry_gen_Unit])(ctx, sp[0].o, (frame[0].o));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jbool SM_mindustry_gen_UnitEntity_lambda$applyDynamicStatus$0_mindustry_entities_units_StatusEntry_R_boolean(jcontext ctx, jobject param0) {
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/UnitEntity:lambda$applyDynamicStatus$0", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_gen_UnitEntity(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(1118);
	sp[0].o = (jobject)((mindustry_entities_units_StatusEntry *) NULL_CHECK((frame[0].o)))->F_effect;
	popStackFrame(ctx);
	return ((jint)((mindustry_type_StatusEffect *) NULL_CHECK(sp[0].o))->F_dynamic);
	}

	popStackFrame(ctx);
}

jbool SM_mindustry_gen_UnitEntity_lambda$getDuration$0_mindustry_type_StatusEffect_mindustry_entities_units_StatusEntry_R_boolean(jcontext ctx, jobject param0, jobject param1) {
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/UnitEntity:lambda$getDuration$0", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_gen_UnitEntity(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	{
	LINE_NUMBER(992);
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

jbool SM_mindustry_gen_UnitEntity_lambda$sense$1_mindustry_world_Block_mindustry_world_blocks_payloads_Payload_R_boolean(jcontext ctx, jobject param0, jobject param1) {
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/UnitEntity:lambda$sense$1", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_gen_UnitEntity(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	{
	LINE_NUMBER(899);
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

jbool SM_mindustry_gen_UnitEntity_lambda$sense$0_mindustry_type_UnitType_mindustry_world_blocks_payloads_Payload_R_boolean(jcontext ctx, jobject param0, jobject param1) {
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/UnitEntity:lambda$sense$0", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_gen_UnitEntity(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	{
	LINE_NUMBER(896);
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

jbool SM_mindustry_gen_UnitEntity_lambda$shouldSkip$0_mindustry_gen_Building_mindustry_type_ItemStack_R_boolean(jcontext ctx, jobject param0, jobject param1) {
	jtype frame[6];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/UnitEntity:lambda$shouldSkip$0", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_gen_UnitEntity(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	{
	LINE_NUMBER(865);
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

jbool M_mindustry_gen_UnitEntity_lambda$canLand$0_mindustry_gen_Unit_R_boolean(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/UnitEntity:lambda$canLand$0", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(641);
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

void clinit_mindustry_gen_UnitEntity(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	clinit_mindustry_gen_Unit(ctx);
	SF_mindustry_gen_UnitEntity_hitDuration = jfloat(9.0f);
	SF_mindustry_gen_UnitEntity_warpDst = jfloat(8.0f);
	jtype frame[2];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/UnitEntity:<clinit>", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_gen_UnitEntity(ctx);
	{
	LINE_NUMBER(111);
	clinit_arc_math_geom_Vec2(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_math_geom_Vec2);
	init_arc_math_geom_Vec2(ctx, sp[0].o);
	clinit_mindustry_gen_UnitEntity(ctx);
	SF_mindustry_gen_UnitEntity_tmp1 = sp[0].o;
	LINE_NUMBER(113);
	clinit_arc_math_geom_Vec2(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_math_geom_Vec2);
	init_arc_math_geom_Vec2(ctx, sp[0].o);
	clinit_mindustry_gen_UnitEntity(ctx);
	SF_mindustry_gen_UnitEntity_tmp2 = sp[0].o;
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

static void initAnnotations(jcontext ctx) {
	auto &clazz = class_mindustry_gen_UnitEntity;
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

	{ // Method solidity
		auto annotationArray = (jarray) createArray(ctx, &class_java_lang_annotation_Annotation, 1);
		methods[3]->F_annotations = (intptr_t) annotationArray;
		auto annotations = (jobject *) annotationArray->data;
		annotations[0] = gcAlloc(ctx, &class_arc_util_Nullable);
	}

	{ // Method buildPlan
		auto annotationArray = (jarray) createArray(ctx, &class_java_lang_annotation_Annotation, 1);
		methods[4]->F_annotations = (intptr_t) annotationArray;
		auto annotations = (jobject *) annotationArray->data;
		annotations[0] = gcAlloc(ctx, &class_arc_util_Nullable);
	}

	{ // Method getMineResult
		auto annotationArray = (jarray) createArray(ctx, &class_java_lang_annotation_Annotation, 1);
		methods[5]->F_annotations = (intptr_t) annotationArray;
		auto annotations = (jobject *) annotationArray->data;
		annotations[0] = gcAlloc(ctx, &class_arc_util_Nullable);
	}

	{ // Method tileOn
		auto annotationArray = (jarray) createArray(ctx, &class_java_lang_annotation_Annotation, 1);
		methods[6]->F_annotations = (intptr_t) annotationArray;
		auto annotations = (jobject *) annotationArray->data;
		annotations[0] = gcAlloc(ctx, &class_arc_util_Nullable);
	}

	{ // Method drownFloor
		auto annotationArray = (jarray) createArray(ctx, &class_java_lang_annotation_Annotation, 1);
		methods[7]->F_annotations = (intptr_t) annotationArray;
		auto annotations = (jobject *) annotationArray->data;
		annotations[0] = gcAlloc(ctx, &class_arc_util_Nullable);
	}

	{ // Method closestCore
		auto annotationArray = (jarray) createArray(ctx, &class_java_lang_annotation_Annotation, 1);
		methods[8]->F_annotations = (intptr_t) annotationArray;
		auto annotations = (jobject *) annotationArray->data;
		annotations[0] = gcAlloc(ctx, &class_arc_util_Nullable);
	}

	{ // Method closestEnemyCore
		auto annotationArray = (jarray) createArray(ctx, &class_java_lang_annotation_Annotation, 1);
		methods[9]->F_annotations = (intptr_t) annotationArray;
		auto annotations = (jobject *) annotationArray->data;
		annotations[0] = gcAlloc(ctx, &class_arc_util_Nullable);
	}

	{ // Method core
		auto annotationArray = (jarray) createArray(ctx, &class_java_lang_annotation_Annotation, 1);
		methods[10]->F_annotations = (intptr_t) annotationArray;
		auto annotations = (jobject *) annotationArray->data;
		annotations[0] = gcAlloc(ctx, &class_arc_util_Nullable);
	}

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
}

void *vtable_mindustry_gen_UnitEntity[] {
	(void *) M_java_lang_Object_hashCode_R_int,
	(void *) M_java_lang_Object_equals_java_lang_Object_R_boolean,
	(void *) M_java_lang_Object_clone_R_java_lang_Object,
	(void *) M_java_lang_Object_getClass_R_java_lang_Class,
	(void *) M_mindustry_gen_UnitEntity_toString_R_java_lang_String,
	(void *) M_java_lang_Object_finalize,
	(void *) M_java_lang_Object_notify,
	(void *) M_java_lang_Object_notifyAll,
	(void *) M_java_lang_Object_wait,
	(void *) M_java_lang_Object_wait_long,
	(void *) M_java_lang_Object_wait_long_int,
	(void *) M_mindustry_gen_UnitEntity_self_R_mindustry_gen_Entityc,
	(void *) M_mindustry_gen_UnitEntity_as_R_java_lang_Object,
	(void *) M_mindustry_gen_UnitEntity_isAdded_R_boolean,
	(void *) M_mindustry_gen_UnitEntity_isLocal_R_boolean,
	(void *) M_mindustry_gen_UnitEntity_isRemote_R_boolean,
	(void *) M_mindustry_gen_UnitEntity_serialize_R_boolean,
	(void *) M_mindustry_gen_UnitEntity_classId_R_int,
	(void *) M_mindustry_gen_Unit_id_R_int,
	(void *) M_mindustry_gen_UnitEntity_add,
	(void *) M_mindustry_gen_UnitEntity_afterRead,
	(void *) M_mindustry_gen_UnitEntity_afterReadAll,
	(void *) M_mindustry_gen_UnitEntity_beforeWrite,
	(void *) M_mindustry_gen_Unit_id_int,
	(void *) M_mindustry_gen_UnitEntity_read_arc_util_io_Reads,
	(void *) M_mindustry_gen_UnitEntity_remove,
	(void *) M_mindustry_gen_UnitEntity_update,
	(void *) M_mindustry_gen_UnitEntity_write_arc_util_io_Writes,
	(void *) M_mindustry_gen_UnitEntity_getX_R_float,
	(void *) M_mindustry_gen_UnitEntity_getY_R_float,
	(void *) M_arc_math_geom_Position_angleTo_arc_math_geom_Position_R_float,
	(void *) M_arc_math_geom_Position_angleTo_float_float_R_float,
	(void *) M_arc_math_geom_Position_dst2_arc_math_geom_Position_R_float,
	(void *) M_arc_math_geom_Position_dst_arc_math_geom_Position_R_float,
	(void *) M_arc_math_geom_Position_dst_float_float_R_float,
	(void *) M_arc_math_geom_Position_dst2_float_float_R_float,
	(void *) M_arc_math_geom_Position_within_arc_math_geom_Position_float_R_boolean,
	(void *) M_arc_math_geom_Position_within_float_float_float_R_boolean,
	(void *) M_mindustry_gen_UnitEntity_floorOn_R_mindustry_world_blocks_environment_Floor,
	(void *) M_mindustry_gen_UnitEntity_buildOn_R_mindustry_gen_Building,
	(void *) M_mindustry_gen_UnitEntity_onSolid_R_boolean,
	(void *) M_mindustry_gen_Unit_x_R_float,
	(void *) M_mindustry_gen_Unit_y_R_float,
	(void *) M_mindustry_gen_UnitEntity_tileX_R_int,
	(void *) M_mindustry_gen_UnitEntity_tileY_R_int,
	(void *) M_mindustry_gen_UnitEntity_blockOn_R_mindustry_world_Block,
	(void *) M_mindustry_gen_UnitEntity_tileOn_R_mindustry_world_Tile,
	(void *) M_mindustry_gen_UnitEntity_set_arc_math_geom_Position,
	(void *) M_mindustry_gen_UnitEntity_set_float_float,
	(void *) M_mindustry_gen_UnitEntity_trns_arc_math_geom_Position,
	(void *) M_mindustry_gen_UnitEntity_trns_float_float,
	(void *) M_mindustry_gen_Unit_x_float,
	(void *) M_mindustry_gen_Unit_y_float,
	(void *) M_mindustry_gen_Unit_rotation_R_float,
	(void *) M_mindustry_gen_Unit_rotation_float,
	(void *) M_mindustry_gen_UnitEntity_applyDynamicStatus_R_mindustry_entities_units_StatusEntry,
	(void *) M_mindustry_gen_UnitEntity_apply_mindustry_type_StatusEffect_float,
	(void *) M_mindustry_gen_UnitEntity_apply_mindustry_type_StatusEffect,
	(void *) M_mindustry_gen_UnitEntity_unapply_mindustry_type_StatusEffect,
	(void *) M_mindustry_gen_UnitEntity_statusDamageMultiplier_float,
	(void *) M_mindustry_gen_UnitEntity_statusReloadMultiplier_float,
	(void *) M_mindustry_gen_UnitEntity_statusArmor_float,
	(void *) M_mindustry_gen_UnitEntity_statusBuildSpeed_float,
	(void *) M_mindustry_gen_UnitEntity_statusDrag_float,
	(void *) M_mindustry_gen_UnitEntity_statusMaxHealth_float,
	(void *) M_mindustry_gen_UnitEntity_statusSpeed_float,
	(void *) M_mindustry_gen_UnitEntity_statusColor_R_arc_graphics_Color,
	(void *) M_mindustry_gen_UnitEntity_statusBits_R_arc_struct_Bits,
	(void *) M_mindustry_gen_Unit_disarmed_R_boolean,
	(void *) M_mindustry_gen_UnitEntity_hasEffect_mindustry_type_StatusEffect_R_boolean,
	(void *) M_mindustry_gen_UnitEntity_isBoss_R_boolean,
	(void *) M_mindustry_gen_UnitEntity_isGrounded_R_boolean,
	(void *) M_mindustry_gen_UnitEntity_isImmune_mindustry_type_StatusEffect_R_boolean,
	(void *) M_mindustry_gen_Unit_armorOverride_R_float,
	(void *) M_mindustry_gen_Unit_buildSpeedMultiplier_R_float,
	(void *) M_mindustry_gen_Unit_damageMultiplier_R_float,
	(void *) M_mindustry_gen_Unit_dragMultiplier_R_float,
	(void *) M_mindustry_gen_UnitEntity_getDuration_mindustry_type_StatusEffect_R_float,
	(void *) M_mindustry_gen_Unit_healthMultiplier_R_float,
	(void *) M_mindustry_gen_Unit_reloadMultiplier_R_float,
	(void *) M_mindustry_gen_Unit_speedMultiplier_R_float,
	(void *) M_mindustry_gen_Unit_armorOverride_float,
	(void *) M_mindustry_gen_Unit_buildSpeedMultiplier_float,
	(void *) M_mindustry_gen_UnitEntity_clearStatuses,
	(void *) M_mindustry_gen_Unit_damageMultiplier_float,
	(void *) M_mindustry_gen_Unit_disarmed_boolean,
	(void *) M_mindustry_gen_Unit_dragMultiplier_float,
	(void *) M_mindustry_gen_UnitEntity_draw,
	(void *) M_mindustry_gen_Unit_healthMultiplier_float,
	(void *) M_mindustry_gen_Unit_reloadMultiplier_float,
	(void *) M_mindustry_gen_UnitEntity_setDuration_mindustry_type_StatusEffect_float,
	(void *) M_mindustry_gen_Unit_speedMultiplier_float,
	(void *) M_mindustry_gen_UnitEntity_inFogTo_mindustry_game_Team_R_boolean,
	(void *) M_mindustry_gen_UnitEntity_cheating_R_boolean,
	(void *) M_mindustry_gen_Unit_team_R_mindustry_game_Team,
	(void *) M_mindustry_gen_UnitEntity_closestCore_R_mindustry_world_blocks_storage_CoreBlock$CoreBuild,
	(void *) M_mindustry_gen_UnitEntity_closestEnemyCore_R_mindustry_world_blocks_storage_CoreBlock$CoreBuild,
	(void *) M_mindustry_gen_UnitEntity_core_R_mindustry_world_blocks_storage_CoreBlock$CoreBuild,
	(void *) M_mindustry_gen_Unit_team_mindustry_game_Team,
	(void *) M_mindustry_gen_UnitEntity_buildPlan_R_mindustry_entities_units_BuildPlan,
	(void *) M_mindustry_gen_UnitEntity_shouldSkip_mindustry_entities_units_BuildPlan_mindustry_gen_Building_R_boolean,
	(void *) M_mindustry_gen_UnitEntity_addBuild_mindustry_entities_units_BuildPlan_boolean,
	(void *) M_mindustry_gen_UnitEntity_addBuild_mindustry_entities_units_BuildPlan,
	(void *) M_mindustry_gen_UnitEntity_clearBuilding,
	(void *) M_mindustry_gen_UnitEntity_isBuilding_R_boolean,
	(void *) M_mindustry_gen_Unit_plans_R_arc_struct_Queue,
	(void *) M_mindustry_gen_UnitEntity_activelyBuilding_R_boolean,
	(void *) M_mindustry_gen_UnitEntity_canBuild_R_boolean,
	(void *) M_mindustry_gen_Unit_updateBuilding_R_boolean,
	(void *) M_mindustry_gen_Unit_buildAlpha_R_float,
	(void *) M_mindustry_gen_Unit_buildAlpha_float,
	(void *) M_mindustry_gen_UnitEntity_drawBuilding,
	(void *) M_mindustry_gen_UnitEntity_drawBuildingBeam_float_float,
	(void *) M_mindustry_gen_UnitEntity_drawPlan_mindustry_entities_units_BuildPlan_float,
	(void *) M_mindustry_gen_UnitEntity_drawPlanTop_mindustry_entities_units_BuildPlan_float,
	(void *) M_mindustry_gen_Unit_plans_arc_struct_Queue,
	(void *) M_mindustry_gen_UnitEntity_removeBuild_int_int_boolean,
	(void *) M_mindustry_gen_UnitEntity_updateBuildLogic,
	(void *) M_mindustry_gen_Unit_updateBuilding_boolean,
	(void *) M_mindustry_gen_UnitEntity_validatePlans,
	(void *) M_mindustry_gen_UnitEntity_clipSize_R_float,
	(void *) M_mindustry_gen_UnitEntity_damageArmorMult_float_float,
	(void *) M_mindustry_gen_UnitEntity_damageArmorMult_float_float_boolean,
	(void *) M_mindustry_gen_UnitEntity_damagePierce_float,
	(void *) M_mindustry_gen_UnitEntity_damagePierce_float_boolean,
	(void *) M_mindustry_gen_UnitEntity_healFract_float,
	(void *) M_mindustry_gen_UnitEntity_heal_float,
	(void *) M_mindustry_gen_UnitEntity_damaged_R_boolean,
	(void *) M_mindustry_gen_Unit_dead_R_boolean,
	(void *) M_mindustry_gen_UnitEntity_isValid_R_boolean,
	(void *) M_mindustry_gen_Unit_health_R_float,
	(void *) M_mindustry_gen_UnitEntity_healthf_R_float,
	(void *) M_mindustry_gen_Unit_hitTime_R_float,
	(void *) M_mindustry_gen_Unit_maxHealth_R_float,
	(void *) M_mindustry_gen_UnitEntity_clampHealth,
	(void *) M_mindustry_gen_UnitEntity_damage_float,
	(void *) M_mindustry_gen_UnitEntity_damage_float_boolean,
	(void *) M_mindustry_gen_UnitEntity_damageContinuous_float,
	(void *) M_mindustry_gen_UnitEntity_damageContinuousArmorMult_float_float,
	(void *) M_mindustry_gen_UnitEntity_damageContinuousPierce_float,
	(void *) M_mindustry_gen_Unit_dead_boolean,
	(void *) M_mindustry_gen_UnitEntity_heal,
	(void *) M_mindustry_gen_Unit_health_float,
	(void *) M_mindustry_gen_Unit_hitTime_float,
	(void *) M_mindustry_gen_UnitEntity_kill,
	(void *) M_mindustry_gen_UnitEntity_killed,
	(void *) M_mindustry_gen_Unit_maxHealth_float,
	(void *) M_mindustry_gen_UnitEntity_hitbox_arc_math_geom_Rect,
	(void *) M_mindustry_gen_UnitEntity_hitSize_R_float,
	(void *) M_mindustry_gen_UnitEntity_collides_mindustry_gen_Hitboxc_R_boolean,
	(void *) M_mindustry_gen_UnitEntity_deltaAngle_R_float,
	(void *) M_mindustry_gen_UnitEntity_deltaLen_R_float,
	(void *) M_mindustry_gen_Unit_deltaX_R_float,
	(void *) M_mindustry_gen_Unit_deltaY_R_float,
	(void *) M_mindustry_gen_Unit_lastX_R_float,
	(void *) M_mindustry_gen_Unit_lastY_R_float,
	(void *) M_mindustry_gen_UnitEntity_collision_mindustry_gen_Hitboxc_float_float,
	(void *) M_mindustry_gen_Unit_deltaX_float,
	(void *) M_mindustry_gen_Unit_deltaY_float,
	(void *) M_mindustry_gen_UnitEntity_getCollisions_arc_func_Cons,
	(void *) M_mindustry_gen_Unit_hitSize_float,
	(void *) M_mindustry_gen_UnitEntity_hitboxTile_arc_math_geom_Rect,
	(void *) M_mindustry_gen_Unit_lastX_float,
	(void *) M_mindustry_gen_Unit_lastY_float,
	(void *) M_mindustry_gen_UnitEntity_updateLastPosition,
	(void *) M_mindustry_gen_Unit_setIndex__draw_int,
	(void *) M_mindustry_gen_Unit_setIndex__sync_int,
	(void *) M_mindustry_gen_Unit_setIndex__unit_int,
	(void *) M_mindustry_gen_UnitEntity_acceptsItem_mindustry_type_Item_R_boolean,
	(void *) M_mindustry_gen_UnitEntity_hasItem_R_boolean,
	(void *) M_mindustry_gen_Unit_itemTime_R_float,
	(void *) M_mindustry_gen_UnitEntity_itemCapacity_R_int,
	(void *) M_mindustry_gen_UnitEntity_maxAccepted_mindustry_type_Item_R_int,
	(void *) M_mindustry_gen_UnitEntity_item_R_mindustry_type_Item,
	(void *) M_mindustry_gen_Unit_stack_R_mindustry_type_ItemStack,
	(void *) M_mindustry_gen_UnitEntity_addItem_mindustry_type_Item,
	(void *) M_mindustry_gen_UnitEntity_addItem_mindustry_type_Item_int,
	(void *) M_mindustry_gen_UnitEntity_clearItem,
	(void *) M_mindustry_gen_Unit_itemTime_float,
	(void *) M_mindustry_gen_Unit_stack_mindustry_type_ItemStack,
	(void *) M_mindustry_gen_Unit_mineTile_R_mindustry_world_Tile,
	(void *) M_mindustry_gen_UnitEntity_canMine_R_boolean,
	(void *) M_mindustry_gen_UnitEntity_canMine_mindustry_type_Item_R_boolean,
	(void *) M_mindustry_gen_UnitEntity_mining_R_boolean,
	(void *) M_mindustry_gen_UnitEntity_offloadImmediately_R_boolean,
	(void *) M_mindustry_gen_UnitEntity_validMine_mindustry_world_Tile_R_boolean,
	(void *) M_mindustry_gen_UnitEntity_validMine_mindustry_world_Tile_boolean_R_boolean,
	(void *) M_mindustry_gen_Unit_mineTimer_R_float,
	(void *) M_mindustry_gen_UnitEntity_getMineResult_mindustry_world_Tile_R_mindustry_type_Item,
	(void *) M_mindustry_gen_Unit_mineTile_mindustry_world_Tile,
	(void *) M_mindustry_gen_Unit_mineTimer_float,
	(void *) M_mindustry_gen_UnitEntity_solidity_R_mindustry_entities_EntityCollisions$SolidPred,
	(void *) M_mindustry_gen_UnitEntity_canPassOn_R_boolean,
	(void *) M_mindustry_gen_UnitEntity_canPass_int_int_R_boolean,
	(void *) M_mindustry_gen_Unit_vel_R_arc_math_geom_Vec2,
	(void *) M_mindustry_gen_UnitEntity_ignoreSolids_R_boolean,
	(void *) M_mindustry_gen_UnitEntity_moving_R_boolean,
	(void *) M_mindustry_gen_Unit_drag_R_float,
	(void *) M_mindustry_gen_Unit_drag_float,
	(void *) M_mindustry_gen_UnitEntity_move_arc_math_geom_Vec2,
	(void *) M_mindustry_gen_UnitEntity_move_float_float,
	(void *) M_mindustry_gen_Unit_vel_arc_math_geom_Vec2,
	(void *) M_mindustry_gen_UnitEntity_velAddNet_arc_math_geom_Vec2,
	(void *) M_mindustry_gen_UnitEntity_velAddNet_float_float,
	(void *) M_mindustry_gen_Unit_hasPhysicsRef_R_boolean,
	(void *) M_mindustry_gen_UnitEntity_mass_R_float,
	(void *) M_mindustry_gen_Unit_hasPhysicsRef_boolean,
	(void *) M_mindustry_gen_UnitEntity_impulse_arc_math_geom_Vec2,
	(void *) M_mindustry_gen_UnitEntity_impulse_float_float,
	(void *) M_mindustry_gen_UnitEntity_impulseNet_arc_math_geom_Vec2,
	(void *) M_mindustry_gen_Unit_shield_R_float,
	(void *) M_mindustry_gen_Unit_shield_float,
	(void *) M_mindustry_gen_Unit_shieldAlpha_R_float,
	(void *) M_mindustry_gen_Unit_shieldAlpha_float,
	(void *) M_mindustry_gen_Unit_armor_R_float,
	(void *) M_mindustry_gen_Unit_armor_float,
	(void *) M_mindustry_gen_UnitEntity_rawDamage_float,
	(void *) M_mindustry_gen_UnitEntity_isSyncHidden_mindustry_game_Team_R_boolean,
	(void *) M_mindustry_gen_Unit_lastUpdated_R_long,
	(void *) M_mindustry_gen_Unit_updateSpacing_R_long,
	(void *) M_mindustry_gen_UnitEntity_afterSync,
	(void *) M_mindustry_gen_UnitEntity_handleSyncHidden,
	(void *) M_mindustry_gen_UnitEntity_interpolate,
	(void *) M_mindustry_gen_Unit_lastUpdated_long,
	(void *) M_mindustry_gen_UnitEntity_readSync_arc_util_io_Reads,
	(void *) M_mindustry_gen_UnitEntity_readSyncManual_java_nio_FloatBuffer,
	(void *) M_mindustry_gen_UnitEntity_snapInterpolation,
	(void *) M_mindustry_gen_UnitEntity_snapSync,
	(void *) M_mindustry_gen_Unit_updateSpacing_long,
	(void *) M_mindustry_gen_UnitEntity_writeSync_arc_util_io_Writes,
	(void *) M_mindustry_gen_UnitEntity_writeSyncManual_java_nio_FloatBuffer,
	(void *) M_mindustry_gen_UnitEntity_aim_float_float,
	(void *) M_mindustry_gen_UnitEntity_aim_float_float_boolean,
	(void *) M_mindustry_gen_Unit_mounts_R_Array1_mindustry_entities_units_WeaponMount,
	(void *) M_mindustry_gen_Unit_mounts_Array1_mindustry_entities_units_WeaponMount,
	(void *) M_mindustry_gen_UnitEntity_canShoot_R_boolean,
	(void *) M_mindustry_gen_UnitEntity_isRotate_R_boolean,
	(void *) M_mindustry_gen_Unit_isShooting_R_boolean,
	(void *) M_mindustry_gen_Unit_aimX_R_float,
	(void *) M_mindustry_gen_Unit_aimY_R_float,
	(void *) M_mindustry_gen_UnitEntity_aim_arc_math_geom_Position,
	(void *) M_mindustry_gen_Unit_aimX_float,
	(void *) M_mindustry_gen_Unit_aimY_float,
	(void *) M_mindustry_gen_UnitEntity_controlWeapons_boolean_boolean,
	(void *) M_mindustry_gen_UnitEntity_controlWeapons_boolean,
	(void *) M_mindustry_gen_Unit_isShooting_boolean,
	(void *) M_mindustry_gen_UnitEntity_setWeaponRotation_float,
	(void *) M_mindustry_gen_UnitEntity_setupWeapons_mindustry_type_UnitType,
	(void *) M_mindustry_gen_UnitEntity_range_R_float,
	(void *) M_mindustry_gen_UnitEntity_sense_mindustry_logic_LAccess_R_double,
	(void *) M_mindustry_gen_UnitEntity_sense_mindustry_ctype_Content_R_double,
	(void *) M_mindustry_gen_UnitEntity_senseObject_mindustry_logic_LAccess_R_java_lang_Object,
	(void *) M_mindustry_gen_UnitEntity_setProp_mindustry_logic_LAccess_double,
	(void *) M_mindustry_gen_UnitEntity_setProp_mindustry_logic_LAccess_java_lang_Object,
	(void *) M_mindustry_gen_UnitEntity_setProp_mindustry_ctype_UnlockableContent_double,
	(void *) M_mindustry_gen_UnitEntity_displayable_R_boolean,
	(void *) M_mindustry_gen_UnitEntity_display_arc_scene_ui_layout_Table,
	(void *) M_mindustry_gen_UnitEntity_icon_R_arc_graphics_g2d_TextureRegion,
	(void *) M_mindustry_gen_UnitEntity_physicSize_R_float,
	(void *) M_mindustry_gen_UnitEntity_getControllerName_R_java_lang_String,
	(void *) M_mindustry_gen_UnitEntity_speed_R_float,
	(void *) M_mindustry_gen_UnitEntity_collisionLayer_R_int,
	(void *) M_mindustry_gen_UnitEntity_prefRotation_R_float,
	(void *) M_mindustry_gen_UnitEntity_allowCommand_R_boolean,
	(void *) M_mindustry_gen_UnitEntity_isCommandable_R_boolean,
	(void *) M_mindustry_gen_UnitEntity_canLand_R_boolean,
	(void *) M_mindustry_gen_UnitEntity_destroy,
	(void *) M_mindustry_gen_UnitEntity_unloaded,
	(void *) M_mindustry_gen_UnitEntity_movePref_arc_math_geom_Vec2,
	(void *) M_mindustry_gen_Unit_hasTarget_R_boolean,
	(void *) M_mindustry_gen_Unit_hasTarget_boolean,
	(void *) M_mindustry_gen_Unit_trail_R_mindustry_graphics_Trail,
	(void *) M_mindustry_gen_Unit_dockedType_R_mindustry_type_UnitType,
	(void *) M_mindustry_gen_Unit_lastDrownFloor_R_mindustry_world_blocks_environment_Floor,
	(void *) M_mindustry_gen_UnitEntity_getPlayer_R_mindustry_gen_Player,
	(void *) M_mindustry_gen_UnitEntity_canDrown_R_boolean,
	(void *) M_mindustry_gen_UnitEntity_canTarget_mindustry_gen_Teamc_R_boolean,
	(void *) M_mindustry_gen_UnitEntity_checkTarget_boolean_boolean_R_boolean,
	(void *) M_mindustry_gen_UnitEntity_hasWeapons_R_boolean,
	(void *) M_mindustry_gen_UnitEntity_hittable_R_boolean,
	(void *) M_mindustry_gen_UnitEntity_inRange_arc_math_geom_Position_R_boolean,
	(void *) M_mindustry_gen_UnitEntity_isAI_R_boolean,
	(void *) M_mindustry_gen_UnitEntity_isEnemy_R_boolean,
	(void *) M_mindustry_gen_UnitEntity_isFlying_R_boolean,
	(void *) M_mindustry_gen_UnitEntity_isMissile_R_boolean,
	(void *) M_mindustry_gen_UnitEntity_isPathImpassable_int_int_R_boolean,
	(void *) M_mindustry_gen_UnitEntity_isPlayer_R_boolean,
	(void *) M_mindustry_gen_UnitEntity_killable_R_boolean,
	(void *) M_mindustry_gen_UnitEntity_playerControllable_R_boolean,
	(void *) M_mindustry_gen_UnitEntity_shouldUpdateController_R_boolean,
	(void *) M_mindustry_gen_Unit_spawnedByCore_R_boolean,
	(void *) M_mindustry_gen_UnitEntity_targetable_mindustry_game_Team_R_boolean,
	(void *) M_mindustry_gen_Unit_flag_R_double,
	(void *) M_mindustry_gen_UnitEntity_ammof_R_float,
	(void *) M_mindustry_gen_UnitEntity_bounds_R_float,
	(void *) M_mindustry_gen_Unit_drownTime_R_float,
	(void *) M_mindustry_gen_Unit_elevation_R_float,
	(void *) M_mindustry_gen_UnitEntity_floorSpeedMultiplier_R_float,
	(void *) M_mindustry_gen_Unit_healTime_R_float,
	(void *) M_mindustry_gen_Unit_shadowAlpha_R_float,
	(void *) M_mindustry_gen_Unit_splashTimer_R_float,
	(void *) M_mindustry_gen_UnitEntity_cap_R_int,
	(void *) M_mindustry_gen_UnitEntity_count_R_int,
	(void *) M_mindustry_gen_Unit_lastFogPos_R_int,
	(void *) M_mindustry_gen_Unit_lastCommanded_R_java_lang_String,
	(void *) M_mindustry_gen_UnitEntity_command_R_mindustry_ai_types_CommandAI,
	(void *) M_mindustry_gen_Unit_abilities_R_Array1_mindustry_entities_abilities_Ability,
	(void *) M_mindustry_gen_UnitEntity_controller_R_mindustry_entities_units_UnitController,
	(void *) M_mindustry_gen_Unit_type_R_mindustry_type_UnitType,
	(void *) M_mindustry_gen_UnitEntity_drownFloor_R_mindustry_world_blocks_environment_Floor,
	(void *) M_mindustry_gen_Unit_abilities_Array1_mindustry_entities_abilities_Ability,
	(void *) M_mindustry_gen_UnitEntity_aimLook_arc_math_geom_Position,
	(void *) M_mindustry_gen_UnitEntity_aimLook_float_float,
	(void *) M_mindustry_gen_UnitEntity_approach_arc_math_geom_Vec2,
	(void *) M_mindustry_gen_UnitEntity_controller_mindustry_entities_units_UnitController,
	(void *) M_mindustry_gen_Unit_dockedType_mindustry_type_UnitType,
	(void *) M_mindustry_gen_Unit_drownTime_float,
	(void *) M_mindustry_gen_Unit_elevation_float,
	(void *) M_mindustry_gen_Unit_flag_double,
	(void *) M_mindustry_gen_Unit_healTime_float,
	(void *) M_mindustry_gen_UnitEntity_landed,
	(void *) M_mindustry_gen_Unit_lastCommanded_java_lang_String,
	(void *) M_mindustry_gen_Unit_lastDrownFloor_mindustry_world_blocks_environment_Floor,
	(void *) M_mindustry_gen_Unit_lastFogPos_int,
	(void *) M_mindustry_gen_UnitEntity_lookAt_arc_math_geom_Position,
	(void *) M_mindustry_gen_UnitEntity_lookAt_float,
	(void *) M_mindustry_gen_UnitEntity_lookAt_float_float,
	(void *) M_mindustry_gen_UnitEntity_moveAt_arc_math_geom_Vec2,
	(void *) M_mindustry_gen_UnitEntity_moveAt_arc_math_geom_Vec2_float,
	(void *) M_mindustry_gen_UnitEntity_resetController,
	(void *) M_mindustry_gen_UnitEntity_rotateMove_arc_math_geom_Vec2,
	(void *) M_mindustry_gen_UnitEntity_set_mindustry_type_UnitType_mindustry_entities_units_UnitController,
	(void *) M_mindustry_gen_UnitEntity_setType_mindustry_type_UnitType,
	(void *) M_mindustry_gen_Unit_shadowAlpha_float,
	(void *) M_mindustry_gen_Unit_spawnedByCore_boolean,
	(void *) M_mindustry_gen_Unit_splashTimer_float,
	(void *) M_mindustry_gen_Unit_trail_mindustry_graphics_Trail,
	(void *) M_mindustry_gen_Unit_type_mindustry_type_UnitType,
	(void *) M_mindustry_gen_UnitEntity_updateBoosting_boolean,
	(void *) M_mindustry_gen_UnitEntity_updateBoosting_boolean_boolean,
	(void *) M_mindustry_gen_UnitEntity_updateDrowning,
	(void *) M_mindustry_gen_UnitEntity_wobble,
	(void *) M_mindustry_gen_UnitEntity_applyStatus_mindustry_type_StatusEffect_float_boolean,
	(void *) M_mindustry_gen_UnitEntity_lambda$unapply$0_mindustry_type_StatusEffect_mindustry_entities_units_StatusEntry_R_boolean,
	(void *) M_mindustry_gen_UnitEntity_lambda$destroy$0_float_mindustry_gen_Building_R_boolean,
	(void *) M_mindustry_gen_UnitEntity_lambda$clearStatuses$0_mindustry_entities_units_StatusEntry,
	(void *) M_mindustry_gen_UnitEntity_lambda$canLand$0_mindustry_gen_Unit_R_boolean,
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
	{ "applyStatus", "(Lmindustry/type/StatusEffect;FZ)V" },
	{ "lambda$unapply$0", "(Lmindustry/type/StatusEffect;Lmindustry/entities/units/StatusEntry;)Z" },
	{ "lambda$destroy$0", "(FLmindustry/gen/Building;)Z" },
	{ "lambda$clearStatuses$0", "(Lmindustry/entities/units/StatusEntry;)V" },
	{ "lambda$canLand$0", "(Lmindustry/gen/Unit;)Z" },
};

static jclass interfaces[] { &class_mindustry_gen_Builderc, &class_mindustry_gen_Drawc, &class_mindustry_gen_Entityc, &class_mindustry_gen_Healthc, &class_mindustry_gen_Hitboxc, &class_mindustry_gen_Itemsc, &class_mindustry_gen_Minerc, &class_mindustry_gen_Physicsc, &class_mindustry_gen_Posc, &class_mindustry_gen_Rotc, &class_mindustry_gen_Shieldc, &class_mindustry_gen_Statusc, &class_mindustry_gen_Syncc, &class_mindustry_gen_Teamc, &class_mindustry_gen_Unitc, &class_mindustry_gen_Velc, &class_mindustry_gen_Weaponsc, };

static FieldMetadata fields[] {
	{ "hitDuration", &class_float, (intptr_t) &SF_mindustry_gen_UnitEntity_hitDuration, "F", 25 },
	{ "tmp1", &class_arc_math_geom_Vec2, (intptr_t) &SF_mindustry_gen_UnitEntity_tmp1, "Larc/math/geom/Vec2;", 28 },
	{ "tmp2", &class_arc_math_geom_Vec2, (intptr_t) &SF_mindustry_gen_UnitEntity_tmp2, "Larc/math/geom/Vec2;", 28 },
	{ "warpDst", &class_float, (intptr_t) &SF_mindustry_gen_UnitEntity_warpDst, "F", 25 },
	{ "added", &class_boolean, offsetof(mindustry_gen_UnitEntity, F_added), "Z", 132 },
	{ "applied", &class_arc_struct_Bits, offsetof(mindustry_gen_UnitEntity, F_applied), "Larc/struct/Bits;", 132 },
	{ "buildCounter", &class_float, offsetof(mindustry_gen_UnitEntity, F_buildCounter), "F", 132 },
	{ "controller", &class_mindustry_entities_units_UnitController, offsetof(mindustry_gen_UnitEntity, F_controller), "Lmindustry/entities/units/UnitController;", 4 },
	{ "isRotate", &class_boolean, offsetof(mindustry_gen_UnitEntity, F_isRotate), "Z", 132 },
	{ "lastActive", &class_mindustry_entities_units_BuildPlan, offsetof(mindustry_gen_UnitEntity, F_lastActive), "Lmindustry/entities/units/BuildPlan;", 132 },
	{ "lastSize", &class_int, offsetof(mindustry_gen_UnitEntity, F_lastSize), "I", 132 },
	{ "resupplyTime", &class_float, offsetof(mindustry_gen_UnitEntity, F_resupplyTime), "F", 132 },
	{ "rotation_LAST_", &class_float, offsetof(mindustry_gen_UnitEntity, F_rotation_LAST_), "F", 130 },
	{ "rotation_TARGET_", &class_float, offsetof(mindustry_gen_UnitEntity, F_rotation_TARGET_), "F", 130 },
	{ "statuses", &class_arc_struct_Seq, offsetof(mindustry_gen_UnitEntity, F_statuses), "Larc/struct/Seq;", 4 },
	{ "wasFlying", &class_boolean, offsetof(mindustry_gen_UnitEntity, F_wasFlying), "Z", 132 },
	{ "wasHealed", &class_boolean, offsetof(mindustry_gen_UnitEntity, F_wasHealed), "Z", 132 },
	{ "wasPlayer", &class_boolean, offsetof(mindustry_gen_UnitEntity, F_wasPlayer), "Z", 132 },
	{ "x_LAST_", &class_float, offsetof(mindustry_gen_UnitEntity, F_x_LAST_), "F", 130 },
	{ "x_TARGET_", &class_float, offsetof(mindustry_gen_UnitEntity, F_x_TARGET_), "F", 130 },
	{ "y_LAST_", &class_float, offsetof(mindustry_gen_UnitEntity, F_y_LAST_), "F", 130 },
	{ "y_TARGET_", &class_float, offsetof(mindustry_gen_UnitEntity, F_y_TARGET_), "F", 130 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_mindustry_gen_UnitEntity, 0, "()V", 4 },
	{ "buildOn", (intptr_t) M_mindustry_gen_UnitEntity_buildOn_R_mindustry_gen_Building, VTABLE_mindustry_gen_UnitEntity_buildOn_R_mindustry_gen_Building, "()Lmindustry/gen/Building;", 1 },
	{ "getPlayer", (intptr_t) M_mindustry_gen_UnitEntity_getPlayer_R_mindustry_gen_Player, VTABLE_mindustry_gen_UnitEntity_getPlayer_R_mindustry_gen_Player, "()Lmindustry/gen/Player;", 1 },
	{ "getControllerName", (intptr_t) M_mindustry_gen_UnitEntity_getControllerName_R_java_lang_String, VTABLE_mindustry_gen_UnitEntity_getControllerName_R_java_lang_String, "()Ljava/lang/String;", 1 },
	{ "solidity", (intptr_t) M_mindustry_gen_UnitEntity_solidity_R_mindustry_entities_EntityCollisions$SolidPred, VTABLE_mindustry_gen_UnitEntity_solidity_R_mindustry_entities_EntityCollisions$SolidPred, "()Lmindustry/entities/EntityCollisions$SolidPred;", 1 },
	{ "buildPlan", (intptr_t) M_mindustry_gen_UnitEntity_buildPlan_R_mindustry_entities_units_BuildPlan, VTABLE_mindustry_gen_UnitEntity_buildPlan_R_mindustry_entities_units_BuildPlan, "()Lmindustry/entities/units/BuildPlan;", 1 },
	{ "getMineResult", (intptr_t) M_mindustry_gen_UnitEntity_getMineResult_mindustry_world_Tile_R_mindustry_type_Item, VTABLE_mindustry_gen_UnitEntity_getMineResult_mindustry_world_Tile_R_mindustry_type_Item, "(Lmindustry/world/Tile;)Lmindustry/type/Item;", 1 },
	{ "tileOn", (intptr_t) M_mindustry_gen_UnitEntity_tileOn_R_mindustry_world_Tile, VTABLE_mindustry_gen_UnitEntity_tileOn_R_mindustry_world_Tile, "()Lmindustry/world/Tile;", 1 },
	{ "drownFloor", (intptr_t) M_mindustry_gen_UnitEntity_drownFloor_R_mindustry_world_blocks_environment_Floor, VTABLE_mindustry_gen_UnitEntity_drownFloor_R_mindustry_world_blocks_environment_Floor, "()Lmindustry/world/blocks/environment/Floor;", 1 },
	{ "closestCore", (intptr_t) M_mindustry_gen_UnitEntity_closestCore_R_mindustry_world_blocks_storage_CoreBlock$CoreBuild, VTABLE_mindustry_gen_UnitEntity_closestCore_R_mindustry_world_blocks_storage_CoreBlock$CoreBuild, "()Lmindustry/world/blocks/storage/CoreBlock$CoreBuild;", 1 },
	{ "closestEnemyCore", (intptr_t) M_mindustry_gen_UnitEntity_closestEnemyCore_R_mindustry_world_blocks_storage_CoreBlock$CoreBuild, VTABLE_mindustry_gen_UnitEntity_closestEnemyCore_R_mindustry_world_blocks_storage_CoreBlock$CoreBuild, "()Lmindustry/world/blocks/storage/CoreBlock$CoreBuild;", 1 },
	{ "core", (intptr_t) M_mindustry_gen_UnitEntity_core_R_mindustry_world_blocks_storage_CoreBlock$CoreBuild, VTABLE_mindustry_gen_UnitEntity_core_R_mindustry_world_blocks_storage_CoreBlock$CoreBuild, "()Lmindustry/world/blocks/storage/CoreBlock$CoreBuild;", 1 },
	{ "isRotate", (intptr_t) M_mindustry_gen_UnitEntity_isRotate_R_boolean, VTABLE_mindustry_gen_UnitEntity_isRotate_R_boolean, "()Z", 1 },
	{ "classId", (intptr_t) M_mindustry_gen_UnitEntity_classId_R_int, VTABLE_mindustry_gen_UnitEntity_classId_R_int, "()I", 1 },
	{ "read", (intptr_t) M_mindustry_gen_UnitEntity_read_arc_util_io_Reads, VTABLE_mindustry_gen_UnitEntity_read_arc_util_io_Reads, "(Larc/util/io/Reads;)V", 1 },
	{ "write", (intptr_t) M_mindustry_gen_UnitEntity_write_arc_util_io_Writes, VTABLE_mindustry_gen_UnitEntity_write_arc_util_io_Writes, "(Larc/util/io/Writes;)V", 1 },
	{ "applyStatus", (intptr_t) M_mindustry_gen_UnitEntity_applyStatus_mindustry_type_StatusEffect_float_boolean, VTABLE_mindustry_gen_UnitEntity_applyStatus_mindustry_type_StatusEffect_float_boolean, "(Lmindustry/type/StatusEffect;FZ)V", 2 },
	{ "self", (intptr_t) M_mindustry_gen_UnitEntity_self_R_mindustry_gen_Entityc, VTABLE_mindustry_gen_UnitEntity_self_R_mindustry_gen_Entityc, "()Lmindustry/gen/Entityc;", 1 },
	{ "as", (intptr_t) M_mindustry_gen_UnitEntity_as_R_java_lang_Object, VTABLE_mindustry_gen_UnitEntity_as_R_java_lang_Object, "()Ljava/lang/Object;", 1 },
	{ "statusColor", (intptr_t) M_mindustry_gen_UnitEntity_statusColor_R_arc_graphics_Color, VTABLE_mindustry_gen_UnitEntity_statusColor_R_arc_graphics_Color, "()Larc/graphics/Color;", 1 },
	{ "icon", (intptr_t) M_mindustry_gen_UnitEntity_icon_R_arc_graphics_g2d_TextureRegion, VTABLE_mindustry_gen_UnitEntity_icon_R_arc_graphics_g2d_TextureRegion, "()Larc/graphics/g2d/TextureRegion;", 1 },
	{ "statusBits", (intptr_t) M_mindustry_gen_UnitEntity_statusBits_R_arc_struct_Bits, VTABLE_mindustry_gen_UnitEntity_statusBits_R_arc_struct_Bits, "()Larc/struct/Bits;", 1 },
	{ "acceptsItem", (intptr_t) M_mindustry_gen_UnitEntity_acceptsItem_mindustry_type_Item_R_boolean, VTABLE_mindustry_gen_UnitEntity_acceptsItem_mindustry_type_Item_R_boolean, "(Lmindustry/type/Item;)Z", 1 },
	{ "activelyBuilding", (intptr_t) M_mindustry_gen_UnitEntity_activelyBuilding_R_boolean, VTABLE_mindustry_gen_UnitEntity_activelyBuilding_R_boolean, "()Z", 1 },
	{ "allowCommand", (intptr_t) M_mindustry_gen_UnitEntity_allowCommand_R_boolean, VTABLE_mindustry_gen_UnitEntity_allowCommand_R_boolean, "()Z", 1 },
	{ "canBuild", (intptr_t) M_mindustry_gen_UnitEntity_canBuild_R_boolean, VTABLE_mindustry_gen_UnitEntity_canBuild_R_boolean, "()Z", 1 },
	{ "canDrown", (intptr_t) M_mindustry_gen_UnitEntity_canDrown_R_boolean, VTABLE_mindustry_gen_UnitEntity_canDrown_R_boolean, "()Z", 1 },
	{ "canLand", (intptr_t) M_mindustry_gen_UnitEntity_canLand_R_boolean, VTABLE_mindustry_gen_UnitEntity_canLand_R_boolean, "()Z", 1 },
	{ "canMine", (intptr_t) M_mindustry_gen_UnitEntity_canMine_R_boolean, VTABLE_mindustry_gen_UnitEntity_canMine_R_boolean, "()Z", 1 },
	{ "canMine", (intptr_t) M_mindustry_gen_UnitEntity_canMine_mindustry_type_Item_R_boolean, VTABLE_mindustry_gen_UnitEntity_canMine_mindustry_type_Item_R_boolean, "(Lmindustry/type/Item;)Z", 1 },
	{ "canPass", (intptr_t) M_mindustry_gen_UnitEntity_canPass_int_int_R_boolean, VTABLE_mindustry_gen_UnitEntity_canPass_int_int_R_boolean, "(II)Z", 1 },
	{ "canPassOn", (intptr_t) M_mindustry_gen_UnitEntity_canPassOn_R_boolean, VTABLE_mindustry_gen_UnitEntity_canPassOn_R_boolean, "()Z", 1 },
	{ "canShoot", (intptr_t) M_mindustry_gen_UnitEntity_canShoot_R_boolean, VTABLE_mindustry_gen_UnitEntity_canShoot_R_boolean, "()Z", 1 },
	{ "canTarget", (intptr_t) M_mindustry_gen_UnitEntity_canTarget_mindustry_gen_Teamc_R_boolean, VTABLE_mindustry_gen_UnitEntity_canTarget_mindustry_gen_Teamc_R_boolean, "(Lmindustry/gen/Teamc;)Z", 1 },
	{ "cheating", (intptr_t) M_mindustry_gen_UnitEntity_cheating_R_boolean, VTABLE_mindustry_gen_UnitEntity_cheating_R_boolean, "()Z", 1 },
	{ "checkTarget", (intptr_t) M_mindustry_gen_UnitEntity_checkTarget_boolean_boolean_R_boolean, VTABLE_mindustry_gen_UnitEntity_checkTarget_boolean_boolean_R_boolean, "(ZZ)Z", 1 },
	{ "collides", (intptr_t) M_mindustry_gen_UnitEntity_collides_mindustry_gen_Hitboxc_R_boolean, VTABLE_mindustry_gen_UnitEntity_collides_mindustry_gen_Hitboxc_R_boolean, "(Lmindustry/gen/Hitboxc;)Z", 1 },
	{ "damaged", (intptr_t) M_mindustry_gen_UnitEntity_damaged_R_boolean, VTABLE_mindustry_gen_UnitEntity_damaged_R_boolean, "()Z", 1 },
	{ "displayable", (intptr_t) M_mindustry_gen_UnitEntity_displayable_R_boolean, VTABLE_mindustry_gen_UnitEntity_displayable_R_boolean, "()Z", 1 },
	{ "hasEffect", (intptr_t) M_mindustry_gen_UnitEntity_hasEffect_mindustry_type_StatusEffect_R_boolean, VTABLE_mindustry_gen_UnitEntity_hasEffect_mindustry_type_StatusEffect_R_boolean, "(Lmindustry/type/StatusEffect;)Z", 1 },
	{ "hasItem", (intptr_t) M_mindustry_gen_UnitEntity_hasItem_R_boolean, VTABLE_mindustry_gen_UnitEntity_hasItem_R_boolean, "()Z", 1 },
	{ "hasWeapons", (intptr_t) M_mindustry_gen_UnitEntity_hasWeapons_R_boolean, VTABLE_mindustry_gen_UnitEntity_hasWeapons_R_boolean, "()Z", 1 },
	{ "hittable", (intptr_t) M_mindustry_gen_UnitEntity_hittable_R_boolean, VTABLE_mindustry_gen_UnitEntity_hittable_R_boolean, "()Z", 1 },
	{ "ignoreSolids", (intptr_t) M_mindustry_gen_UnitEntity_ignoreSolids_R_boolean, VTABLE_mindustry_gen_UnitEntity_ignoreSolids_R_boolean, "()Z", 1 },
	{ "inFogTo", (intptr_t) M_mindustry_gen_UnitEntity_inFogTo_mindustry_game_Team_R_boolean, VTABLE_mindustry_gen_UnitEntity_inFogTo_mindustry_game_Team_R_boolean, "(Lmindustry/game/Team;)Z", 1 },
	{ "inRange", (intptr_t) M_mindustry_gen_UnitEntity_inRange_arc_math_geom_Position_R_boolean, VTABLE_mindustry_gen_UnitEntity_inRange_arc_math_geom_Position_R_boolean, "(Larc/math/geom/Position;)Z", 1 },
	{ "isAI", (intptr_t) M_mindustry_gen_UnitEntity_isAI_R_boolean, VTABLE_mindustry_gen_UnitEntity_isAI_R_boolean, "()Z", 1 },
	{ "isAdded", (intptr_t) M_mindustry_gen_UnitEntity_isAdded_R_boolean, VTABLE_mindustry_gen_UnitEntity_isAdded_R_boolean, "()Z", 1 },
	{ "isBoss", (intptr_t) M_mindustry_gen_UnitEntity_isBoss_R_boolean, VTABLE_mindustry_gen_UnitEntity_isBoss_R_boolean, "()Z", 1 },
	{ "isBuilding", (intptr_t) M_mindustry_gen_UnitEntity_isBuilding_R_boolean, VTABLE_mindustry_gen_UnitEntity_isBuilding_R_boolean, "()Z", 1 },
	{ "isCommandable", (intptr_t) M_mindustry_gen_UnitEntity_isCommandable_R_boolean, VTABLE_mindustry_gen_UnitEntity_isCommandable_R_boolean, "()Z", 1 },
	{ "isEnemy", (intptr_t) M_mindustry_gen_UnitEntity_isEnemy_R_boolean, VTABLE_mindustry_gen_UnitEntity_isEnemy_R_boolean, "()Z", 1 },
	{ "isFlying", (intptr_t) M_mindustry_gen_UnitEntity_isFlying_R_boolean, VTABLE_mindustry_gen_UnitEntity_isFlying_R_boolean, "()Z", 1 },
	{ "isGrounded", (intptr_t) M_mindustry_gen_UnitEntity_isGrounded_R_boolean, VTABLE_mindustry_gen_UnitEntity_isGrounded_R_boolean, "()Z", 1 },
	{ "isImmune", (intptr_t) M_mindustry_gen_UnitEntity_isImmune_mindustry_type_StatusEffect_R_boolean, VTABLE_mindustry_gen_UnitEntity_isImmune_mindustry_type_StatusEffect_R_boolean, "(Lmindustry/type/StatusEffect;)Z", 1 },
	{ "isLocal", (intptr_t) M_mindustry_gen_UnitEntity_isLocal_R_boolean, VTABLE_mindustry_gen_UnitEntity_isLocal_R_boolean, "()Z", 1 },
	{ "isMissile", (intptr_t) M_mindustry_gen_UnitEntity_isMissile_R_boolean, VTABLE_mindustry_gen_UnitEntity_isMissile_R_boolean, "()Z", 1 },
	{ "isPathImpassable", (intptr_t) M_mindustry_gen_UnitEntity_isPathImpassable_int_int_R_boolean, VTABLE_mindustry_gen_UnitEntity_isPathImpassable_int_int_R_boolean, "(II)Z", 1 },
	{ "isPlayer", (intptr_t) M_mindustry_gen_UnitEntity_isPlayer_R_boolean, VTABLE_mindustry_gen_UnitEntity_isPlayer_R_boolean, "()Z", 1 },
	{ "isRemote", (intptr_t) M_mindustry_gen_UnitEntity_isRemote_R_boolean, VTABLE_mindustry_gen_UnitEntity_isRemote_R_boolean, "()Z", 1 },
	{ "isSyncHidden", (intptr_t) M_mindustry_gen_UnitEntity_isSyncHidden_mindustry_game_Team_R_boolean, VTABLE_mindustry_gen_UnitEntity_isSyncHidden_mindustry_game_Team_R_boolean, "(Lmindustry/game/Team;)Z", 1 },
	{ "isValid", (intptr_t) M_mindustry_gen_UnitEntity_isValid_R_boolean, VTABLE_mindustry_gen_UnitEntity_isValid_R_boolean, "()Z", 1 },
	{ "killable", (intptr_t) M_mindustry_gen_UnitEntity_killable_R_boolean, VTABLE_mindustry_gen_UnitEntity_killable_R_boolean, "()Z", 1 },
	{ "mining", (intptr_t) M_mindustry_gen_UnitEntity_mining_R_boolean, VTABLE_mindustry_gen_UnitEntity_mining_R_boolean, "()Z", 1 },
	{ "moving", (intptr_t) M_mindustry_gen_UnitEntity_moving_R_boolean, VTABLE_mindustry_gen_UnitEntity_moving_R_boolean, "()Z", 1 },
	{ "offloadImmediately", (intptr_t) M_mindustry_gen_UnitEntity_offloadImmediately_R_boolean, VTABLE_mindustry_gen_UnitEntity_offloadImmediately_R_boolean, "()Z", 1 },
	{ "onSolid", (intptr_t) M_mindustry_gen_UnitEntity_onSolid_R_boolean, VTABLE_mindustry_gen_UnitEntity_onSolid_R_boolean, "()Z", 1 },
	{ "playerControllable", (intptr_t) M_mindustry_gen_UnitEntity_playerControllable_R_boolean, VTABLE_mindustry_gen_UnitEntity_playerControllable_R_boolean, "()Z", 1 },
	{ "serialize", (intptr_t) M_mindustry_gen_UnitEntity_serialize_R_boolean, VTABLE_mindustry_gen_UnitEntity_serialize_R_boolean, "()Z", 1 },
	{ "shouldSkip", (intptr_t) M_mindustry_gen_UnitEntity_shouldSkip_mindustry_entities_units_BuildPlan_mindustry_gen_Building_R_boolean, VTABLE_mindustry_gen_UnitEntity_shouldSkip_mindustry_entities_units_BuildPlan_mindustry_gen_Building_R_boolean, "(Lmindustry/entities/units/BuildPlan;Lmindustry/gen/Building;)Z", 1 },
	{ "shouldUpdateController", (intptr_t) M_mindustry_gen_UnitEntity_shouldUpdateController_R_boolean, VTABLE_mindustry_gen_UnitEntity_shouldUpdateController_R_boolean, "()Z", 1 },
	{ "targetable", (intptr_t) M_mindustry_gen_UnitEntity_targetable_mindustry_game_Team_R_boolean, VTABLE_mindustry_gen_UnitEntity_targetable_mindustry_game_Team_R_boolean, "(Lmindustry/game/Team;)Z", 1 },
	{ "validMine", (intptr_t) M_mindustry_gen_UnitEntity_validMine_mindustry_world_Tile_R_boolean, VTABLE_mindustry_gen_UnitEntity_validMine_mindustry_world_Tile_R_boolean, "(Lmindustry/world/Tile;)Z", 1 },
	{ "validMine", (intptr_t) M_mindustry_gen_UnitEntity_validMine_mindustry_world_Tile_boolean_R_boolean, VTABLE_mindustry_gen_UnitEntity_validMine_mindustry_world_Tile_boolean_R_boolean, "(Lmindustry/world/Tile;Z)Z", 1 },
	{ "sense", (intptr_t) M_mindustry_gen_UnitEntity_sense_mindustry_ctype_Content_R_double, VTABLE_mindustry_gen_UnitEntity_sense_mindustry_ctype_Content_R_double, "(Lmindustry/ctype/Content;)D", 1 },
	{ "sense", (intptr_t) M_mindustry_gen_UnitEntity_sense_mindustry_logic_LAccess_R_double, VTABLE_mindustry_gen_UnitEntity_sense_mindustry_logic_LAccess_R_double, "(Lmindustry/logic/LAccess;)D", 1 },
	{ "ammof", (intptr_t) M_mindustry_gen_UnitEntity_ammof_R_float, VTABLE_mindustry_gen_UnitEntity_ammof_R_float, "()F", 1 },
	{ "bounds", (intptr_t) M_mindustry_gen_UnitEntity_bounds_R_float, VTABLE_mindustry_gen_UnitEntity_bounds_R_float, "()F", 1 },
	{ "clipSize", (intptr_t) M_mindustry_gen_UnitEntity_clipSize_R_float, VTABLE_mindustry_gen_UnitEntity_clipSize_R_float, "()F", 1 },
	{ "deltaAngle", (intptr_t) M_mindustry_gen_UnitEntity_deltaAngle_R_float, VTABLE_mindustry_gen_UnitEntity_deltaAngle_R_float, "()F", 1 },
	{ "deltaLen", (intptr_t) M_mindustry_gen_UnitEntity_deltaLen_R_float, VTABLE_mindustry_gen_UnitEntity_deltaLen_R_float, "()F", 1 },
	{ "floorSpeedMultiplier", (intptr_t) M_mindustry_gen_UnitEntity_floorSpeedMultiplier_R_float, VTABLE_mindustry_gen_UnitEntity_floorSpeedMultiplier_R_float, "()F", 1 },
	{ "getDuration", (intptr_t) M_mindustry_gen_UnitEntity_getDuration_mindustry_type_StatusEffect_R_float, VTABLE_mindustry_gen_UnitEntity_getDuration_mindustry_type_StatusEffect_R_float, "(Lmindustry/type/StatusEffect;)F", 1 },
	{ "getX", (intptr_t) M_mindustry_gen_UnitEntity_getX_R_float, VTABLE_mindustry_gen_UnitEntity_getX_R_float, "()F", 1 },
	{ "getY", (intptr_t) M_mindustry_gen_UnitEntity_getY_R_float, VTABLE_mindustry_gen_UnitEntity_getY_R_float, "()F", 1 },
	{ "healthf", (intptr_t) M_mindustry_gen_UnitEntity_healthf_R_float, VTABLE_mindustry_gen_UnitEntity_healthf_R_float, "()F", 1 },
	{ "hitSize", (intptr_t) M_mindustry_gen_UnitEntity_hitSize_R_float, VTABLE_mindustry_gen_UnitEntity_hitSize_R_float, "()F", 1 },
	{ "mass", (intptr_t) M_mindustry_gen_UnitEntity_mass_R_float, VTABLE_mindustry_gen_UnitEntity_mass_R_float, "()F", 1 },
	{ "physicSize", (intptr_t) M_mindustry_gen_UnitEntity_physicSize_R_float, VTABLE_mindustry_gen_UnitEntity_physicSize_R_float, "()F", 1 },
	{ "prefRotation", (intptr_t) M_mindustry_gen_UnitEntity_prefRotation_R_float, VTABLE_mindustry_gen_UnitEntity_prefRotation_R_float, "()F", 1 },
	{ "range", (intptr_t) M_mindustry_gen_UnitEntity_range_R_float, VTABLE_mindustry_gen_UnitEntity_range_R_float, "()F", 1 },
	{ "speed", (intptr_t) M_mindustry_gen_UnitEntity_speed_R_float, VTABLE_mindustry_gen_UnitEntity_speed_R_float, "()F", 1 },
	{ "cap", (intptr_t) M_mindustry_gen_UnitEntity_cap_R_int, VTABLE_mindustry_gen_UnitEntity_cap_R_int, "()I", 1 },
	{ "collisionLayer", (intptr_t) M_mindustry_gen_UnitEntity_collisionLayer_R_int, VTABLE_mindustry_gen_UnitEntity_collisionLayer_R_int, "()I", 1 },
	{ "count", (intptr_t) M_mindustry_gen_UnitEntity_count_R_int, VTABLE_mindustry_gen_UnitEntity_count_R_int, "()I", 1 },
	{ "itemCapacity", (intptr_t) M_mindustry_gen_UnitEntity_itemCapacity_R_int, VTABLE_mindustry_gen_UnitEntity_itemCapacity_R_int, "()I", 1 },
	{ "maxAccepted", (intptr_t) M_mindustry_gen_UnitEntity_maxAccepted_mindustry_type_Item_R_int, VTABLE_mindustry_gen_UnitEntity_maxAccepted_mindustry_type_Item_R_int, "(Lmindustry/type/Item;)I", 1 },
	{ "tileX", (intptr_t) M_mindustry_gen_UnitEntity_tileX_R_int, VTABLE_mindustry_gen_UnitEntity_tileX_R_int, "()I", 1 },
	{ "tileY", (intptr_t) M_mindustry_gen_UnitEntity_tileY_R_int, VTABLE_mindustry_gen_UnitEntity_tileY_R_int, "()I", 1 },
	{ "senseObject", (intptr_t) M_mindustry_gen_UnitEntity_senseObject_mindustry_logic_LAccess_R_java_lang_Object, VTABLE_mindustry_gen_UnitEntity_senseObject_mindustry_logic_LAccess_R_java_lang_Object, "(Lmindustry/logic/LAccess;)Ljava/lang/Object;", 1 },
	{ "toString", (intptr_t) M_mindustry_gen_UnitEntity_toString_R_java_lang_String, VTABLE_mindustry_gen_UnitEntity_toString_R_java_lang_String, "()Ljava/lang/String;", 1 },
	{ "command", (intptr_t) M_mindustry_gen_UnitEntity_command_R_mindustry_ai_types_CommandAI, VTABLE_mindustry_gen_UnitEntity_command_R_mindustry_ai_types_CommandAI, "()Lmindustry/ai/types/CommandAI;", 1 },
	{ "applyDynamicStatus", (intptr_t) M_mindustry_gen_UnitEntity_applyDynamicStatus_R_mindustry_entities_units_StatusEntry, VTABLE_mindustry_gen_UnitEntity_applyDynamicStatus_R_mindustry_entities_units_StatusEntry, "()Lmindustry/entities/units/StatusEntry;", 1 },
	{ "controller", (intptr_t) M_mindustry_gen_UnitEntity_controller_R_mindustry_entities_units_UnitController, VTABLE_mindustry_gen_UnitEntity_controller_R_mindustry_entities_units_UnitController, "()Lmindustry/entities/units/UnitController;", 1 },
	{ "item", (intptr_t) M_mindustry_gen_UnitEntity_item_R_mindustry_type_Item, VTABLE_mindustry_gen_UnitEntity_item_R_mindustry_type_Item, "()Lmindustry/type/Item;", 1 },
	{ "blockOn", (intptr_t) M_mindustry_gen_UnitEntity_blockOn_R_mindustry_world_Block, VTABLE_mindustry_gen_UnitEntity_blockOn_R_mindustry_world_Block, "()Lmindustry/world/Block;", 1 },
	{ "floorOn", (intptr_t) M_mindustry_gen_UnitEntity_floorOn_R_mindustry_world_blocks_environment_Floor, VTABLE_mindustry_gen_UnitEntity_floorOn_R_mindustry_world_blocks_environment_Floor, "()Lmindustry/world/blocks/environment/Floor;", 1 },
	{ "create", (intptr_t) SM_mindustry_gen_UnitEntity_create_R_mindustry_gen_UnitEntity, 0, "()Lmindustry/gen/UnitEntity;", 9 },
	{ "add", (intptr_t) M_mindustry_gen_UnitEntity_add, VTABLE_mindustry_gen_UnitEntity_add, "()V", 1 },
	{ "addBuild", (intptr_t) M_mindustry_gen_UnitEntity_addBuild_mindustry_entities_units_BuildPlan, VTABLE_mindustry_gen_UnitEntity_addBuild_mindustry_entities_units_BuildPlan, "(Lmindustry/entities/units/BuildPlan;)V", 1 },
	{ "addBuild", (intptr_t) M_mindustry_gen_UnitEntity_addBuild_mindustry_entities_units_BuildPlan_boolean, VTABLE_mindustry_gen_UnitEntity_addBuild_mindustry_entities_units_BuildPlan_boolean, "(Lmindustry/entities/units/BuildPlan;Z)V", 1 },
	{ "addItem", (intptr_t) M_mindustry_gen_UnitEntity_addItem_mindustry_type_Item, VTABLE_mindustry_gen_UnitEntity_addItem_mindustry_type_Item, "(Lmindustry/type/Item;)V", 1 },
	{ "addItem", (intptr_t) M_mindustry_gen_UnitEntity_addItem_mindustry_type_Item_int, VTABLE_mindustry_gen_UnitEntity_addItem_mindustry_type_Item_int, "(Lmindustry/type/Item;I)V", 1 },
	{ "afterRead", (intptr_t) M_mindustry_gen_UnitEntity_afterRead, VTABLE_mindustry_gen_UnitEntity_afterRead, "()V", 1 },
	{ "afterReadAll", (intptr_t) M_mindustry_gen_UnitEntity_afterReadAll, VTABLE_mindustry_gen_UnitEntity_afterReadAll, "()V", 1 },
	{ "afterSync", (intptr_t) M_mindustry_gen_UnitEntity_afterSync, VTABLE_mindustry_gen_UnitEntity_afterSync, "()V", 1 },
	{ "aim", (intptr_t) M_mindustry_gen_UnitEntity_aim_arc_math_geom_Position, VTABLE_mindustry_gen_UnitEntity_aim_arc_math_geom_Position, "(Larc/math/geom/Position;)V", 1 },
	{ "aim", (intptr_t) M_mindustry_gen_UnitEntity_aim_float_float, VTABLE_mindustry_gen_UnitEntity_aim_float_float, "(FF)V", 1 },
	{ "aim", (intptr_t) M_mindustry_gen_UnitEntity_aim_float_float_boolean, VTABLE_mindustry_gen_UnitEntity_aim_float_float_boolean, "(FFZ)V", 1 },
	{ "aimLook", (intptr_t) M_mindustry_gen_UnitEntity_aimLook_arc_math_geom_Position, VTABLE_mindustry_gen_UnitEntity_aimLook_arc_math_geom_Position, "(Larc/math/geom/Position;)V", 1 },
	{ "aimLook", (intptr_t) M_mindustry_gen_UnitEntity_aimLook_float_float, VTABLE_mindustry_gen_UnitEntity_aimLook_float_float, "(FF)V", 1 },
	{ "apply", (intptr_t) M_mindustry_gen_UnitEntity_apply_mindustry_type_StatusEffect, VTABLE_mindustry_gen_UnitEntity_apply_mindustry_type_StatusEffect, "(Lmindustry/type/StatusEffect;)V", 1 },
	{ "apply", (intptr_t) M_mindustry_gen_UnitEntity_apply_mindustry_type_StatusEffect_float, VTABLE_mindustry_gen_UnitEntity_apply_mindustry_type_StatusEffect_float, "(Lmindustry/type/StatusEffect;F)V", 1 },
	{ "approach", (intptr_t) M_mindustry_gen_UnitEntity_approach_arc_math_geom_Vec2, VTABLE_mindustry_gen_UnitEntity_approach_arc_math_geom_Vec2, "(Larc/math/geom/Vec2;)V", 1 },
	{ "beforeWrite", (intptr_t) M_mindustry_gen_UnitEntity_beforeWrite, VTABLE_mindustry_gen_UnitEntity_beforeWrite, "()V", 1 },
	{ "clampHealth", (intptr_t) M_mindustry_gen_UnitEntity_clampHealth, VTABLE_mindustry_gen_UnitEntity_clampHealth, "()V", 1 },
	{ "clearBuilding", (intptr_t) M_mindustry_gen_UnitEntity_clearBuilding, VTABLE_mindustry_gen_UnitEntity_clearBuilding, "()V", 1 },
	{ "clearItem", (intptr_t) M_mindustry_gen_UnitEntity_clearItem, VTABLE_mindustry_gen_UnitEntity_clearItem, "()V", 1 },
	{ "clearStatuses", (intptr_t) M_mindustry_gen_UnitEntity_clearStatuses, VTABLE_mindustry_gen_UnitEntity_clearStatuses, "()V", 1 },
	{ "collision", (intptr_t) M_mindustry_gen_UnitEntity_collision_mindustry_gen_Hitboxc_float_float, VTABLE_mindustry_gen_UnitEntity_collision_mindustry_gen_Hitboxc_float_float, "(Lmindustry/gen/Hitboxc;FF)V", 1 },
	{ "controlWeapons", (intptr_t) M_mindustry_gen_UnitEntity_controlWeapons_boolean_boolean, VTABLE_mindustry_gen_UnitEntity_controlWeapons_boolean_boolean, "(ZZ)V", 1 },
	{ "controlWeapons", (intptr_t) M_mindustry_gen_UnitEntity_controlWeapons_boolean, VTABLE_mindustry_gen_UnitEntity_controlWeapons_boolean, "(Z)V", 1 },
	{ "controller", (intptr_t) M_mindustry_gen_UnitEntity_controller_mindustry_entities_units_UnitController, VTABLE_mindustry_gen_UnitEntity_controller_mindustry_entities_units_UnitController, "(Lmindustry/entities/units/UnitController;)V", 1 },
	{ "damage", (intptr_t) M_mindustry_gen_UnitEntity_damage_float, VTABLE_mindustry_gen_UnitEntity_damage_float, "(F)V", 1 },
	{ "damage", (intptr_t) M_mindustry_gen_UnitEntity_damage_float_boolean, VTABLE_mindustry_gen_UnitEntity_damage_float_boolean, "(FZ)V", 1 },
	{ "damageArmorMult", (intptr_t) M_mindustry_gen_UnitEntity_damageArmorMult_float_float, VTABLE_mindustry_gen_UnitEntity_damageArmorMult_float_float, "(FF)V", 1 },
	{ "damageArmorMult", (intptr_t) M_mindustry_gen_UnitEntity_damageArmorMult_float_float_boolean, VTABLE_mindustry_gen_UnitEntity_damageArmorMult_float_float_boolean, "(FFZ)V", 1 },
	{ "damageContinuous", (intptr_t) M_mindustry_gen_UnitEntity_damageContinuous_float, VTABLE_mindustry_gen_UnitEntity_damageContinuous_float, "(F)V", 1 },
	{ "damageContinuousArmorMult", (intptr_t) M_mindustry_gen_UnitEntity_damageContinuousArmorMult_float_float, VTABLE_mindustry_gen_UnitEntity_damageContinuousArmorMult_float_float, "(FF)V", 1 },
	{ "damageContinuousPierce", (intptr_t) M_mindustry_gen_UnitEntity_damageContinuousPierce_float, VTABLE_mindustry_gen_UnitEntity_damageContinuousPierce_float, "(F)V", 1 },
	{ "damagePierce", (intptr_t) M_mindustry_gen_UnitEntity_damagePierce_float, VTABLE_mindustry_gen_UnitEntity_damagePierce_float, "(F)V", 1 },
	{ "damagePierce", (intptr_t) M_mindustry_gen_UnitEntity_damagePierce_float_boolean, VTABLE_mindustry_gen_UnitEntity_damagePierce_float_boolean, "(FZ)V", 1 },
	{ "destroy", (intptr_t) M_mindustry_gen_UnitEntity_destroy, VTABLE_mindustry_gen_UnitEntity_destroy, "()V", 1 },
	{ "display", (intptr_t) M_mindustry_gen_UnitEntity_display_arc_scene_ui_layout_Table, VTABLE_mindustry_gen_UnitEntity_display_arc_scene_ui_layout_Table, "(Larc/scene/ui/layout/Table;)V", 1 },
	{ "draw", (intptr_t) M_mindustry_gen_UnitEntity_draw, VTABLE_mindustry_gen_UnitEntity_draw, "()V", 1 },
	{ "drawBuilding", (intptr_t) M_mindustry_gen_UnitEntity_drawBuilding, VTABLE_mindustry_gen_UnitEntity_drawBuilding, "()V", 1 },
	{ "drawBuildingBeam", (intptr_t) M_mindustry_gen_UnitEntity_drawBuildingBeam_float_float, VTABLE_mindustry_gen_UnitEntity_drawBuildingBeam_float_float, "(FF)V", 1 },
	{ "drawPlan", (intptr_t) M_mindustry_gen_UnitEntity_drawPlan_mindustry_entities_units_BuildPlan_float, VTABLE_mindustry_gen_UnitEntity_drawPlan_mindustry_entities_units_BuildPlan_float, "(Lmindustry/entities/units/BuildPlan;F)V", 1 },
	{ "drawPlanTop", (intptr_t) M_mindustry_gen_UnitEntity_drawPlanTop_mindustry_entities_units_BuildPlan_float, VTABLE_mindustry_gen_UnitEntity_drawPlanTop_mindustry_entities_units_BuildPlan_float, "(Lmindustry/entities/units/BuildPlan;F)V", 1 },
	{ "getCollisions", (intptr_t) M_mindustry_gen_UnitEntity_getCollisions_arc_func_Cons, VTABLE_mindustry_gen_UnitEntity_getCollisions_arc_func_Cons, "(Larc/func/Cons;)V", 1 },
	{ "handleSyncHidden", (intptr_t) M_mindustry_gen_UnitEntity_handleSyncHidden, VTABLE_mindustry_gen_UnitEntity_handleSyncHidden, "()V", 1 },
	{ "heal", (intptr_t) M_mindustry_gen_UnitEntity_heal, VTABLE_mindustry_gen_UnitEntity_heal, "()V", 1 },
	{ "heal", (intptr_t) M_mindustry_gen_UnitEntity_heal_float, VTABLE_mindustry_gen_UnitEntity_heal_float, "(F)V", 1 },
	{ "healFract", (intptr_t) M_mindustry_gen_UnitEntity_healFract_float, VTABLE_mindustry_gen_UnitEntity_healFract_float, "(F)V", 1 },
	{ "hitbox", (intptr_t) M_mindustry_gen_UnitEntity_hitbox_arc_math_geom_Rect, VTABLE_mindustry_gen_UnitEntity_hitbox_arc_math_geom_Rect, "(Larc/math/geom/Rect;)V", 1 },
	{ "hitboxTile", (intptr_t) M_mindustry_gen_UnitEntity_hitboxTile_arc_math_geom_Rect, VTABLE_mindustry_gen_UnitEntity_hitboxTile_arc_math_geom_Rect, "(Larc/math/geom/Rect;)V", 1 },
	{ "impulse", (intptr_t) M_mindustry_gen_UnitEntity_impulse_arc_math_geom_Vec2, VTABLE_mindustry_gen_UnitEntity_impulse_arc_math_geom_Vec2, "(Larc/math/geom/Vec2;)V", 1 },
	{ "impulse", (intptr_t) M_mindustry_gen_UnitEntity_impulse_float_float, VTABLE_mindustry_gen_UnitEntity_impulse_float_float, "(FF)V", 1 },
	{ "impulseNet", (intptr_t) M_mindustry_gen_UnitEntity_impulseNet_arc_math_geom_Vec2, VTABLE_mindustry_gen_UnitEntity_impulseNet_arc_math_geom_Vec2, "(Larc/math/geom/Vec2;)V", 1 },
	{ "interpolate", (intptr_t) M_mindustry_gen_UnitEntity_interpolate, VTABLE_mindustry_gen_UnitEntity_interpolate, "()V", 1 },
	{ "kill", (intptr_t) M_mindustry_gen_UnitEntity_kill, VTABLE_mindustry_gen_UnitEntity_kill, "()V", 1 },
	{ "killed", (intptr_t) M_mindustry_gen_UnitEntity_killed, VTABLE_mindustry_gen_UnitEntity_killed, "()V", 1 },
	{ "landed", (intptr_t) M_mindustry_gen_UnitEntity_landed, VTABLE_mindustry_gen_UnitEntity_landed, "()V", 1 },
	{ "lookAt", (intptr_t) M_mindustry_gen_UnitEntity_lookAt_arc_math_geom_Position, VTABLE_mindustry_gen_UnitEntity_lookAt_arc_math_geom_Position, "(Larc/math/geom/Position;)V", 1 },
	{ "lookAt", (intptr_t) M_mindustry_gen_UnitEntity_lookAt_float, VTABLE_mindustry_gen_UnitEntity_lookAt_float, "(F)V", 1 },
	{ "lookAt", (intptr_t) M_mindustry_gen_UnitEntity_lookAt_float_float, VTABLE_mindustry_gen_UnitEntity_lookAt_float_float, "(FF)V", 1 },
	{ "move", (intptr_t) M_mindustry_gen_UnitEntity_move_arc_math_geom_Vec2, VTABLE_mindustry_gen_UnitEntity_move_arc_math_geom_Vec2, "(Larc/math/geom/Vec2;)V", 1 },
	{ "move", (intptr_t) M_mindustry_gen_UnitEntity_move_float_float, VTABLE_mindustry_gen_UnitEntity_move_float_float, "(FF)V", 1 },
	{ "moveAt", (intptr_t) M_mindustry_gen_UnitEntity_moveAt_arc_math_geom_Vec2, VTABLE_mindustry_gen_UnitEntity_moveAt_arc_math_geom_Vec2, "(Larc/math/geom/Vec2;)V", 1 },
	{ "moveAt", (intptr_t) M_mindustry_gen_UnitEntity_moveAt_arc_math_geom_Vec2_float, VTABLE_mindustry_gen_UnitEntity_moveAt_arc_math_geom_Vec2_float, "(Larc/math/geom/Vec2;F)V", 1 },
	{ "movePref", (intptr_t) M_mindustry_gen_UnitEntity_movePref_arc_math_geom_Vec2, VTABLE_mindustry_gen_UnitEntity_movePref_arc_math_geom_Vec2, "(Larc/math/geom/Vec2;)V", 1 },
	{ "rawDamage", (intptr_t) M_mindustry_gen_UnitEntity_rawDamage_float, VTABLE_mindustry_gen_UnitEntity_rawDamage_float, "(F)V", 1 },
	{ "readSync", (intptr_t) M_mindustry_gen_UnitEntity_readSync_arc_util_io_Reads, VTABLE_mindustry_gen_UnitEntity_readSync_arc_util_io_Reads, "(Larc/util/io/Reads;)V", 1 },
	{ "readSyncManual", (intptr_t) M_mindustry_gen_UnitEntity_readSyncManual_java_nio_FloatBuffer, VTABLE_mindustry_gen_UnitEntity_readSyncManual_java_nio_FloatBuffer, "(Ljava/nio/FloatBuffer;)V", 1 },
	{ "remove", (intptr_t) M_mindustry_gen_UnitEntity_remove, VTABLE_mindustry_gen_UnitEntity_remove, "()V", 1 },
	{ "removeBuild", (intptr_t) M_mindustry_gen_UnitEntity_removeBuild_int_int_boolean, VTABLE_mindustry_gen_UnitEntity_removeBuild_int_int_boolean, "(IIZ)V", 1 },
	{ "resetController", (intptr_t) M_mindustry_gen_UnitEntity_resetController, VTABLE_mindustry_gen_UnitEntity_resetController, "()V", 1 },
	{ "rotateMove", (intptr_t) M_mindustry_gen_UnitEntity_rotateMove_arc_math_geom_Vec2, VTABLE_mindustry_gen_UnitEntity_rotateMove_arc_math_geom_Vec2, "(Larc/math/geom/Vec2;)V", 1 },
	{ "set", (intptr_t) M_mindustry_gen_UnitEntity_set_arc_math_geom_Position, VTABLE_mindustry_gen_UnitEntity_set_arc_math_geom_Position, "(Larc/math/geom/Position;)V", 1 },
	{ "set", (intptr_t) M_mindustry_gen_UnitEntity_set_float_float, VTABLE_mindustry_gen_UnitEntity_set_float_float, "(FF)V", 1 },
	{ "set", (intptr_t) M_mindustry_gen_UnitEntity_set_mindustry_type_UnitType_mindustry_entities_units_UnitController, VTABLE_mindustry_gen_UnitEntity_set_mindustry_type_UnitType_mindustry_entities_units_UnitController, "(Lmindustry/type/UnitType;Lmindustry/entities/units/UnitController;)V", 1 },
	{ "setDuration", (intptr_t) M_mindustry_gen_UnitEntity_setDuration_mindustry_type_StatusEffect_float, VTABLE_mindustry_gen_UnitEntity_setDuration_mindustry_type_StatusEffect_float, "(Lmindustry/type/StatusEffect;F)V", 1 },
	{ "setProp", (intptr_t) M_mindustry_gen_UnitEntity_setProp_mindustry_ctype_UnlockableContent_double, VTABLE_mindustry_gen_UnitEntity_setProp_mindustry_ctype_UnlockableContent_double, "(Lmindustry/ctype/UnlockableContent;D)V", 1 },
	{ "setProp", (intptr_t) M_mindustry_gen_UnitEntity_setProp_mindustry_logic_LAccess_double, VTABLE_mindustry_gen_UnitEntity_setProp_mindustry_logic_LAccess_double, "(Lmindustry/logic/LAccess;D)V", 1 },
	{ "setProp", (intptr_t) M_mindustry_gen_UnitEntity_setProp_mindustry_logic_LAccess_java_lang_Object, VTABLE_mindustry_gen_UnitEntity_setProp_mindustry_logic_LAccess_java_lang_Object, "(Lmindustry/logic/LAccess;Ljava/lang/Object;)V", 1 },
	{ "setType", (intptr_t) M_mindustry_gen_UnitEntity_setType_mindustry_type_UnitType, VTABLE_mindustry_gen_UnitEntity_setType_mindustry_type_UnitType, "(Lmindustry/type/UnitType;)V", 1 },
	{ "setWeaponRotation", (intptr_t) M_mindustry_gen_UnitEntity_setWeaponRotation_float, VTABLE_mindustry_gen_UnitEntity_setWeaponRotation_float, "(F)V", 1 },
	{ "setupWeapons", (intptr_t) M_mindustry_gen_UnitEntity_setupWeapons_mindustry_type_UnitType, VTABLE_mindustry_gen_UnitEntity_setupWeapons_mindustry_type_UnitType, "(Lmindustry/type/UnitType;)V", 1 },
	{ "snapInterpolation", (intptr_t) M_mindustry_gen_UnitEntity_snapInterpolation, VTABLE_mindustry_gen_UnitEntity_snapInterpolation, "()V", 1 },
	{ "snapSync", (intptr_t) M_mindustry_gen_UnitEntity_snapSync, VTABLE_mindustry_gen_UnitEntity_snapSync, "()V", 1 },
	{ "statusArmor", (intptr_t) M_mindustry_gen_UnitEntity_statusArmor_float, VTABLE_mindustry_gen_UnitEntity_statusArmor_float, "(F)V", 1 },
	{ "statusBuildSpeed", (intptr_t) M_mindustry_gen_UnitEntity_statusBuildSpeed_float, VTABLE_mindustry_gen_UnitEntity_statusBuildSpeed_float, "(F)V", 1 },
	{ "statusDamageMultiplier", (intptr_t) M_mindustry_gen_UnitEntity_statusDamageMultiplier_float, VTABLE_mindustry_gen_UnitEntity_statusDamageMultiplier_float, "(F)V", 1 },
	{ "statusDrag", (intptr_t) M_mindustry_gen_UnitEntity_statusDrag_float, VTABLE_mindustry_gen_UnitEntity_statusDrag_float, "(F)V", 1 },
	{ "statusMaxHealth", (intptr_t) M_mindustry_gen_UnitEntity_statusMaxHealth_float, VTABLE_mindustry_gen_UnitEntity_statusMaxHealth_float, "(F)V", 1 },
	{ "statusReloadMultiplier", (intptr_t) M_mindustry_gen_UnitEntity_statusReloadMultiplier_float, VTABLE_mindustry_gen_UnitEntity_statusReloadMultiplier_float, "(F)V", 1 },
	{ "statusSpeed", (intptr_t) M_mindustry_gen_UnitEntity_statusSpeed_float, VTABLE_mindustry_gen_UnitEntity_statusSpeed_float, "(F)V", 1 },
	{ "trns", (intptr_t) M_mindustry_gen_UnitEntity_trns_arc_math_geom_Position, VTABLE_mindustry_gen_UnitEntity_trns_arc_math_geom_Position, "(Larc/math/geom/Position;)V", 1 },
	{ "trns", (intptr_t) M_mindustry_gen_UnitEntity_trns_float_float, VTABLE_mindustry_gen_UnitEntity_trns_float_float, "(FF)V", 1 },
	{ "unapply", (intptr_t) M_mindustry_gen_UnitEntity_unapply_mindustry_type_StatusEffect, VTABLE_mindustry_gen_UnitEntity_unapply_mindustry_type_StatusEffect, "(Lmindustry/type/StatusEffect;)V", 1 },
	{ "unloaded", (intptr_t) M_mindustry_gen_UnitEntity_unloaded, VTABLE_mindustry_gen_UnitEntity_unloaded, "()V", 1 },
	{ "update", (intptr_t) M_mindustry_gen_UnitEntity_update, VTABLE_mindustry_gen_UnitEntity_update, "()V", 1 },
	{ "updateBoosting", (intptr_t) M_mindustry_gen_UnitEntity_updateBoosting_boolean, VTABLE_mindustry_gen_UnitEntity_updateBoosting_boolean, "(Z)V", 1 },
	{ "updateBoosting", (intptr_t) M_mindustry_gen_UnitEntity_updateBoosting_boolean_boolean, VTABLE_mindustry_gen_UnitEntity_updateBoosting_boolean_boolean, "(ZZ)V", 1 },
	{ "updateBuildLogic", (intptr_t) M_mindustry_gen_UnitEntity_updateBuildLogic, VTABLE_mindustry_gen_UnitEntity_updateBuildLogic, "()V", 1 },
	{ "updateDrowning", (intptr_t) M_mindustry_gen_UnitEntity_updateDrowning, VTABLE_mindustry_gen_UnitEntity_updateDrowning, "()V", 1 },
	{ "updateLastPosition", (intptr_t) M_mindustry_gen_UnitEntity_updateLastPosition, VTABLE_mindustry_gen_UnitEntity_updateLastPosition, "()V", 1 },
	{ "validatePlans", (intptr_t) M_mindustry_gen_UnitEntity_validatePlans, VTABLE_mindustry_gen_UnitEntity_validatePlans, "()V", 1 },
	{ "velAddNet", (intptr_t) M_mindustry_gen_UnitEntity_velAddNet_arc_math_geom_Vec2, VTABLE_mindustry_gen_UnitEntity_velAddNet_arc_math_geom_Vec2, "(Larc/math/geom/Vec2;)V", 1 },
	{ "velAddNet", (intptr_t) M_mindustry_gen_UnitEntity_velAddNet_float_float, VTABLE_mindustry_gen_UnitEntity_velAddNet_float_float, "(FF)V", 1 },
	{ "wobble", (intptr_t) M_mindustry_gen_UnitEntity_wobble, VTABLE_mindustry_gen_UnitEntity_wobble, "()V", 1 },
	{ "writeSync", (intptr_t) M_mindustry_gen_UnitEntity_writeSync_arc_util_io_Writes, VTABLE_mindustry_gen_UnitEntity_writeSync_arc_util_io_Writes, "(Larc/util/io/Writes;)V", 1 },
	{ "writeSyncManual", (intptr_t) M_mindustry_gen_UnitEntity_writeSyncManual_java_nio_FloatBuffer, VTABLE_mindustry_gen_UnitEntity_writeSyncManual_java_nio_FloatBuffer, "(Ljava/nio/FloatBuffer;)V", 1 },
	{ "lambda$updateBuildLogic$0", (intptr_t) SM_mindustry_gen_UnitEntity_lambda$updateBuildLogic$0_mindustry_world_blocks_storage_CoreBlock$CoreBuild_mindustry_type_ItemStack_R_boolean, 0, "(Lmindustry/world/blocks/storage/CoreBlock$CoreBuild;Lmindustry/type/ItemStack;)Z", 4106 },
	{ "lambda$unapply$0", (intptr_t) M_mindustry_gen_UnitEntity_lambda$unapply$0_mindustry_type_StatusEffect_mindustry_entities_units_StatusEntry_R_boolean, VTABLE_mindustry_gen_UnitEntity_lambda$unapply$0_mindustry_type_StatusEffect_mindustry_entities_units_StatusEntry_R_boolean, "(Lmindustry/type/StatusEffect;Lmindustry/entities/units/StatusEntry;)Z", 4098 },
	{ "lambda$removeBuild$0", (intptr_t) SM_mindustry_gen_UnitEntity_lambda$removeBuild$0_boolean_int_int_mindustry_entities_units_BuildPlan_R_boolean, 0, "(ZIILmindustry/entities/units/BuildPlan;)Z", 4106 },
	{ "lambda$destroy$0", (intptr_t) M_mindustry_gen_UnitEntity_lambda$destroy$0_float_mindustry_gen_Building_R_boolean, VTABLE_mindustry_gen_UnitEntity_lambda$destroy$0_float_mindustry_gen_Building_R_boolean, "(FLmindustry/gen/Building;)Z", 4098 },
	{ "lambda$clearStatuses$0", (intptr_t) M_mindustry_gen_UnitEntity_lambda$clearStatuses$0_mindustry_entities_units_StatusEntry, VTABLE_mindustry_gen_UnitEntity_lambda$clearStatuses$0_mindustry_entities_units_StatusEntry, "(Lmindustry/entities/units/StatusEntry;)V", 4098 },
	{ "lambda$applyDynamicStatus$0", (intptr_t) SM_mindustry_gen_UnitEntity_lambda$applyDynamicStatus$0_mindustry_entities_units_StatusEntry_R_boolean, 0, "(Lmindustry/entities/units/StatusEntry;)Z", 4106 },
	{ "lambda$getDuration$0", (intptr_t) SM_mindustry_gen_UnitEntity_lambda$getDuration$0_mindustry_type_StatusEffect_mindustry_entities_units_StatusEntry_R_boolean, 0, "(Lmindustry/type/StatusEffect;Lmindustry/entities/units/StatusEntry;)Z", 4106 },
	{ "lambda$sense$1", (intptr_t) SM_mindustry_gen_UnitEntity_lambda$sense$1_mindustry_world_Block_mindustry_world_blocks_payloads_Payload_R_boolean, 0, "(Lmindustry/world/Block;Lmindustry/world/blocks/payloads/Payload;)Z", 4106 },
	{ "lambda$sense$0", (intptr_t) SM_mindustry_gen_UnitEntity_lambda$sense$0_mindustry_type_UnitType_mindustry_world_blocks_payloads_Payload_R_boolean, 0, "(Lmindustry/type/UnitType;Lmindustry/world/blocks/payloads/Payload;)Z", 4106 },
	{ "lambda$shouldSkip$0", (intptr_t) SM_mindustry_gen_UnitEntity_lambda$shouldSkip$0_mindustry_gen_Building_mindustry_type_ItemStack_R_boolean, 0, "(Lmindustry/gen/Building;Lmindustry/type/ItemStack;)Z", 4106 },
	{ "lambda$canLand$0", (intptr_t) M_mindustry_gen_UnitEntity_lambda$canLand$0_mindustry_gen_Unit_R_boolean, VTABLE_mindustry_gen_UnitEntity_lambda$canLand$0_mindustry_gen_Unit_R_boolean, "(Lmindustry/gen/Unit;)Z", 4098 },
	{ "<clinit>", (intptr_t) clinit_mindustry_gen_UnitEntity, 0, "()V", 8 },
};

Class class_mindustry_gen_UnitEntity{
		.nativeName = (intptr_t) "mindustry/gen/UnitEntity",
		.parentClass = (intptr_t) &class_mindustry_gen_Unit,
		.size = sizeof(mindustry_gen_UnitEntity),
		.classVtable = (intptr_t) vtable_mindustry_gen_UnitEntity,
		.staticInitializer = (intptr_t) clinit_mindustry_gen_UnitEntity,
		.annotationInitializer = (intptr_t) initAnnotations,
		.markFunction = (intptr_t) mark_mindustry_gen_UnitEntity,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 33,
		.interfaceCount = 17,
		.nativeInterfaces = (intptr_t) interfaces,
		.fieldCount = 22,
		.nativeFields = (intptr_t) fields,
		.methodCount = 225,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 347,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_mindustry_gen_UnitEntity = registerClass(&class_mindustry_gen_UnitEntity);

}
