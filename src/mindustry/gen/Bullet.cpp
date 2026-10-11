#include "mindustry/gen/Bullet.h"
#include "mindustry/gen/Damagec.h"
#include "arc/func/Prov.h"
#include "arc/math/Angles.h"
#include "mindustry/gen/Bulletc.h"
#include "arc/math/geom/Rect.h"
#include "mindustry/ctype/UnlockableContent.h"
#include "mindustry/logic/LAccess.h"
#include "arc/graphics/Color.h"
#include "java/lang/reflect/Constructor.h"
#include "arc/graphics/g2d/Draw.h"
#include "java/lang/Runnable.h"
#include "mindustry/gen/Bullet_invoke_java_lang_Runnable_1.h"
#include "arc/util/pooling/Pools.h"
#include "mindustry/gen/Entityc.h"
#include "arc/util/Tmp.h"
#include "arc/struct/Seq.h"
#include "java/lang/reflect/Method.h"
#include "mindustry/gen/IndexableEntity__bullet.h"
#include "mindustry/world/Tile.h"
#include "mindustry/entities/Mover.h"
#include "arc/math/geom/Position.h"
#include "mindustry/gen/Healthc.h"
#include "arc/math/Mathf.h"
#include "java/lang/reflect/Field.h"
#include "mindustry/gen/Unit.h"
#include "mindustry/gen/Bullet_1.h"
#include "mindustry/gen/Shielderc.h"
#include "arc/math/geom/QuadTree.h"
#include "arc/util/Time.h"
#include "arc/util/Nullable.h"
#include "arc/util/Interval.h"
#include "mindustry/gen/Building.h"
#include "mindustry/gen/Posc.h"
#include "mindustry/gen/Timedc.h"
#include "mindustry/graphics/Trail.h"
#include "java/lang/Object.h"
#include "mindustry/gen/Bullet.h"
#include "mindustry/gen/IndexableEntity__draw.h"
#include "mindustry/gen/Hitboxc.h"
#include "mindustry/entities/bullet/BulletType.h"
#include "mindustry/world/blocks/environment/StaticWall.h"
#include "arc/util/io/Writes.h"
#include "arc/math/geom/Vec2.h"
#include "mindustry/world/Block.h"
#include "mindustry/gen/Groups.h"
#include "mindustry/world/blocks/storage/CoreBlock_CoreBuild.h"
#include "mindustry/game/FogControl.h"
#include "java/lang/Float.h"
#include "arc/struct/IntSeq.h"
#include "mindustry/gen/Rotc.h"
#include "arc/math/Scaled.h"
#include "mindustry/gen/Unitc.h"
#include "arc/func/Cons.h"
#include "java/lang/String.h"
#include "mindustry/world/blocks/environment/Floor.h"
#include "mindustry/game/Rules_TeamRule.h"
#include "arc/math/geom/Geometry.h"
#include "java/lang/Math.h"
#include "mindustry/gen/Teamc.h"
#include "arc/util/pooling/Pool_Poolable.h"
#include "java/lang/annotation/Annotation.h"
#include "mindustry/game/Teams_TeamData.h"
#include "java/lang/Enum.h"
#include "mindustry/gen/Ownerc.h"
#include "arc/util/io/Reads.h"
#include "mindustry/entities/EntityGroup.h"
#include "mindustry/content/Blocks.h"
#include "mindustry/gen/Bullet_invoke_arc_func_Prov_1.h"
#include "mindustry/game/Teams.h"
#include "mindustry/graphics/Drawf.h"
#include "mindustry/logic/Senseable.h"
#include "mindustry/gen/Drawc.h"
#include "mindustry/game/Team.h"
#include "java/lang/Class.h"
#include "mindustry/Vars.h"
#include "mindustry/core/World.h"
#include "mindustry/core/GameState.h"
#include "mindustry/gen/Timerc.h"

extern "C" {


void mark_mindustry_gen_Bullet(jobject object, jint mark, jint depth) {
	if (!object) {
		return;
	}
	if (depth > GC_DEPTH_ALWAYS && (object->gcMark < GC_MARK_START || object->gcMark == mark))
		return;
	if (depth > MAX_GC_MARK_DEPTH) {
		markDeepObject(object);
		return;
	}
	if (object->gcMark >= GC_MARK_START)
		object->gcMark = mark;
	auto self = (mindustry_gen_Bullet *) object;
	if (self->F_aimTile)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_aimTile)->clazz)->markFunction)((jobject) self->F_aimTile, mark, depth + 1);
	if (self->F_collided)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_collided)->clazz)->markFunction)((jobject) self->F_collided, mark, depth + 1);
	if (self->F_data)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_data)->clazz)->markFunction)((jobject) self->F_data, mark, depth + 1);
	if (self->F_mover)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_mover)->clazz)->markFunction)((jobject) self->F_mover, mark, depth + 1);
	if (self->F_owner)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_owner)->clazz)->markFunction)((jobject) self->F_owner, mark, depth + 1);
	if (self->F_shooter)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_shooter)->clazz)->markFunction)((jobject) self->F_shooter, mark, depth + 1);
	if (self->F_stickyTarget)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_stickyTarget)->clazz)->markFunction)((jobject) self->F_stickyTarget, mark, depth + 1);
	if (self->F_team)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_team)->clazz)->markFunction)((jobject) self->F_team, mark, depth + 1);
	if (self->F_timer)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_timer)->clazz)->markFunction)((jobject) self->F_timer, mark, depth + 1);
	if (self->F_trail)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_trail)->clazz)->markFunction)((jobject) self->F_trail, mark, depth + 1);
	if (self->F_type)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_type)->clazz)->markFunction)((jobject) self->F_type, mark, depth + 1);
	if (self->F_vel)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_vel)->clazz)->markFunction)((jobject) self->F_vel, mark, depth + 1);
}

void clinit_mindustry_gen_Bullet(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
}

void init_mindustry_gen_Bullet(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/Bullet:<init>", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_gen_Bullet(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(190);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(111);
	sp[0].o = frame[0].o;
	clinit_arc_struct_IntSeq(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_struct_IntSeq);
	init_arc_struct_IntSeq_int(ctx, sp[1].o, (6));
	((mindustry_gen_Bullet *) NULL_CHECK(sp[0].o))->F_collided = (jref) sp[1].o;
	LINE_NUMBER(129);
	sp[0].o = frame[0].o;
	jint temp0 = (jint)SM_mindustry_entities_EntityGroup_nextId_R_int(ctx);
	((mindustry_gen_Bullet *) NULL_CHECK(sp[0].o))->F_id = temp0;
	LINE_NUMBER(131);
	((mindustry_gen_Bullet *) NULL_CHECK((frame[0].o)))->F_index__bullet = (jint(-1));
	LINE_NUMBER(133);
	((mindustry_gen_Bullet *) NULL_CHECK((frame[0].o)))->F_index__draw = (jint(-1));
	LINE_NUMBER(135);
	((mindustry_gen_Bullet *) NULL_CHECK((frame[0].o)))->F_justSpawned = (jint(1));
	LINE_NUMBER(169);
	sp[0].o = frame[0].o;
	clinit_mindustry_game_Team(ctx);
	sp[1].o = (jobject)SF_mindustry_game_Team_derelict;
	((mindustry_gen_Bullet *) NULL_CHECK(sp[0].o))->F_team = (jref) sp[1].o;
	LINE_NUMBER(173);
	sp[0].o = frame[0].o;
	clinit_arc_util_Interval(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_util_Interval);
	init_arc_util_Interval_int(ctx, sp[1].o, (6));
	((mindustry_gen_Bullet *) NULL_CHECK(sp[0].o))->F_timer = (jref) sp[1].o;
	LINE_NUMBER(180);
	sp[0].o = frame[0].o;
	clinit_arc_math_geom_Vec2(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_math_geom_Vec2);
	init_arc_math_geom_Vec2(ctx, sp[1].o);
	((mindustry_gen_Bullet *) NULL_CHECK(sp[0].o))->F_vel = (jref) sp[1].o;
	LINE_NUMBER(191);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_mindustry_gen_Bullet_buildOn_R_mindustry_gen_Building(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/Bullet:buildOn", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(196);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_world;
	sp[0].o = (jobject)((func_mindustry_core_World_buildWorld_float_float_R_mindustry_gen_Building) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_World_buildWorld_float_float_R_mindustry_gen_Building])(ctx, sp[0].o, ((jfloat)((mindustry_gen_Bullet *) NULL_CHECK((frame[0].o)))->F_x), ((jfloat)((mindustry_gen_Bullet *) NULL_CHECK((frame[0].o)))->F_y));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_mindustry_gen_Bullet_tileOn_R_mindustry_world_Tile(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/Bullet:tileOn", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(202);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_world;
	sp[0].o = (jobject)((func_mindustry_core_World_tileWorld_float_float_R_mindustry_world_Tile) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_World_tileWorld_float_float_R_mindustry_world_Tile])(ctx, sp[0].o, ((jfloat)((mindustry_gen_Bullet *) NULL_CHECK((frame[0].o)))->F_x), ((jfloat)((mindustry_gen_Bullet *) NULL_CHECK((frame[0].o)))->F_y));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_mindustry_gen_Bullet_closestCore_R_mindustry_world_blocks_storage_CoreBlock$CoreBuild(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/Bullet:closestCore", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(208);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	sp[0].o = (jobject)((mindustry_core_GameState *) NULL_CHECK(sp[0].o))->F_teams;
	jfloat temp0 = (jfloat)((mindustry_gen_Bullet *) NULL_CHECK((frame[0].o)))->F_x;
	jfloat temp1 = (jfloat)((mindustry_gen_Bullet *) NULL_CHECK((frame[0].o)))->F_y;
	sp[1].o = (jobject)((mindustry_gen_Bullet *) NULL_CHECK((frame[0].o)))->F_team;
	sp[0].o = (jobject)((func_mindustry_game_Teams_closestCore_float_float_mindustry_game_Team_R_mindustry_world_blocks_storage_CoreBlock$CoreBuild) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_game_Teams_closestCore_float_float_mindustry_game_Team_R_mindustry_world_blocks_storage_CoreBlock$CoreBuild])(ctx, sp[0].o, temp0, temp1, sp[1].o);
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_mindustry_gen_Bullet_closestEnemyCore_R_mindustry_world_blocks_storage_CoreBlock$CoreBuild(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/Bullet:closestEnemyCore", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(214);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	sp[0].o = (jobject)((mindustry_core_GameState *) NULL_CHECK(sp[0].o))->F_teams;
	jfloat temp0 = (jfloat)((mindustry_gen_Bullet *) NULL_CHECK((frame[0].o)))->F_x;
	jfloat temp1 = (jfloat)((mindustry_gen_Bullet *) NULL_CHECK((frame[0].o)))->F_y;
	sp[1].o = (jobject)((mindustry_gen_Bullet *) NULL_CHECK((frame[0].o)))->F_team;
	sp[0].o = (jobject)((func_mindustry_game_Teams_closestEnemyCore_float_float_mindustry_game_Team_R_mindustry_world_blocks_storage_CoreBlock$CoreBuild) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_game_Teams_closestEnemyCore_float_float_mindustry_game_Team_R_mindustry_world_blocks_storage_CoreBlock$CoreBuild])(ctx, sp[0].o, temp0, temp1, sp[1].o);
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_mindustry_gen_Bullet_core_R_mindustry_world_blocks_storage_CoreBlock$CoreBuild(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/Bullet:core", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(220);
	sp[0].o = (jobject)((mindustry_gen_Bullet *) NULL_CHECK((frame[0].o)))->F_team;
	sp[0].o = (jobject)((func_mindustry_game_Team_core_R_mindustry_world_blocks_storage_CoreBlock$CoreBuild) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_game_Team_core_R_mindustry_world_blocks_storage_CoreBlock$CoreBuild])(ctx, sp[0].o);
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_mindustry_gen_Bullet_vel_R_arc_math_geom_Vec2(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/Bullet:vel", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(225);
	sp[0].o = (jobject)((mindustry_gen_Bullet *) NULL_CHECK((frame[0].o)))->F_vel;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_mindustry_gen_Bullet_collided_R_arc_struct_IntSeq(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/Bullet:collided", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(230);
	sp[0].o = (jobject)((mindustry_gen_Bullet *) NULL_CHECK((frame[0].o)))->F_collided;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_mindustry_gen_Bullet_timer_R_arc_util_Interval(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/Bullet:timer", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(235);
	sp[0].o = (jobject)((mindustry_gen_Bullet *) NULL_CHECK((frame[0].o)))->F_timer;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jbool M_mindustry_gen_Bullet_absorbed_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/Bullet:absorbed", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(240);
	popStackFrame(ctx);
	return ((jint)((mindustry_gen_Bullet *) NULL_CHECK((frame[0].o)))->F_absorbed);
	}

	popStackFrame(ctx);
}

jbool M_mindustry_gen_Bullet_hit_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/Bullet:hit", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(245);
	popStackFrame(ctx);
	return ((jint)((mindustry_gen_Bullet *) NULL_CHECK((frame[0].o)))->F_hit);
	}

	popStackFrame(ctx);
}

jbool M_mindustry_gen_Bullet_justSpawned_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/Bullet:justSpawned", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(250);
	popStackFrame(ctx);
	return ((jint)((mindustry_gen_Bullet *) NULL_CHECK((frame[0].o)))->F_justSpawned);
	}

	popStackFrame(ctx);
}

jbool M_mindustry_gen_Bullet_keepAlive_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/Bullet:keepAlive", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(255);
	popStackFrame(ctx);
	return ((jint)((mindustry_gen_Bullet *) NULL_CHECK((frame[0].o)))->F_keepAlive);
	}

	popStackFrame(ctx);
}

jfloat M_mindustry_gen_Bullet_aimX_R_float(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/Bullet:aimX", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(260);
	popStackFrame(ctx);
	return ((jfloat)((mindustry_gen_Bullet *) NULL_CHECK((frame[0].o)))->F_aimX);
	}

	popStackFrame(ctx);
}

jfloat M_mindustry_gen_Bullet_aimY_R_float(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/Bullet:aimY", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(265);
	popStackFrame(ctx);
	return ((jfloat)((mindustry_gen_Bullet *) NULL_CHECK((frame[0].o)))->F_aimY);
	}

	popStackFrame(ctx);
}

jfloat M_mindustry_gen_Bullet_buildingDamageMultiplier_R_float(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/Bullet:buildingDamageMultiplier", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(270);
	popStackFrame(ctx);
	return ((jfloat)((mindustry_gen_Bullet *) NULL_CHECK((frame[0].o)))->F_buildingDamageMultiplier);
	}

	popStackFrame(ctx);
}

jfloat M_mindustry_gen_Bullet_damage_R_float(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/Bullet:damage", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(275);
	popStackFrame(ctx);
	return ((jfloat)((mindustry_gen_Bullet *) NULL_CHECK((frame[0].o)))->F_damage);
	}

	popStackFrame(ctx);
}

jfloat M_mindustry_gen_Bullet_deltaX_R_float(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/Bullet:deltaX", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(280);
	popStackFrame(ctx);
	return ((jfloat)((mindustry_gen_Bullet *) NULL_CHECK((frame[0].o)))->F_deltaX);
	}

	popStackFrame(ctx);
}

jfloat M_mindustry_gen_Bullet_deltaY_R_float(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/Bullet:deltaY", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(285);
	popStackFrame(ctx);
	return ((jfloat)((mindustry_gen_Bullet *) NULL_CHECK((frame[0].o)))->F_deltaY);
	}

	popStackFrame(ctx);
}

jfloat M_mindustry_gen_Bullet_fdata_R_float(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/Bullet:fdata", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(290);
	popStackFrame(ctx);
	return ((jfloat)((mindustry_gen_Bullet *) NULL_CHECK((frame[0].o)))->F_fdata);
	}

	popStackFrame(ctx);
}

jfloat M_mindustry_gen_Bullet_lastX_R_float(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/Bullet:lastX", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(295);
	popStackFrame(ctx);
	return ((jfloat)((mindustry_gen_Bullet *) NULL_CHECK((frame[0].o)))->F_lastX);
	}

	popStackFrame(ctx);
}

jfloat M_mindustry_gen_Bullet_lastY_R_float(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/Bullet:lastY", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(300);
	popStackFrame(ctx);
	return ((jfloat)((mindustry_gen_Bullet *) NULL_CHECK((frame[0].o)))->F_lastY);
	}

	popStackFrame(ctx);
}

jfloat M_mindustry_gen_Bullet_lifetime_R_float(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/Bullet:lifetime", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(305);
	popStackFrame(ctx);
	return ((jfloat)((mindustry_gen_Bullet *) NULL_CHECK((frame[0].o)))->F_lifetime);
	}

	popStackFrame(ctx);
}

jfloat M_mindustry_gen_Bullet_originX_R_float(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/Bullet:originX", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(310);
	popStackFrame(ctx);
	return ((jfloat)((mindustry_gen_Bullet *) NULL_CHECK((frame[0].o)))->F_originX);
	}

	popStackFrame(ctx);
}

jfloat M_mindustry_gen_Bullet_originY_R_float(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/Bullet:originY", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(315);
	popStackFrame(ctx);
	return ((jfloat)((mindustry_gen_Bullet *) NULL_CHECK((frame[0].o)))->F_originY);
	}

	popStackFrame(ctx);
}

jfloat M_mindustry_gen_Bullet_stickyRotation_R_float(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/Bullet:stickyRotation", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(320);
	popStackFrame(ctx);
	return ((jfloat)((mindustry_gen_Bullet *) NULL_CHECK((frame[0].o)))->F_stickyRotation);
	}

	popStackFrame(ctx);
}

jfloat M_mindustry_gen_Bullet_stickyRotationOffset_R_float(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/Bullet:stickyRotationOffset", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(325);
	popStackFrame(ctx);
	return ((jfloat)((mindustry_gen_Bullet *) NULL_CHECK((frame[0].o)))->F_stickyRotationOffset);
	}

	popStackFrame(ctx);
}

jfloat M_mindustry_gen_Bullet_stickyX_R_float(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/Bullet:stickyX", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(330);
	popStackFrame(ctx);
	return ((jfloat)((mindustry_gen_Bullet *) NULL_CHECK((frame[0].o)))->F_stickyX);
	}

	popStackFrame(ctx);
}

jfloat M_mindustry_gen_Bullet_stickyY_R_float(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/Bullet:stickyY", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(335);
	popStackFrame(ctx);
	return ((jfloat)((mindustry_gen_Bullet *) NULL_CHECK((frame[0].o)))->F_stickyY);
	}

	popStackFrame(ctx);
}

jfloat M_mindustry_gen_Bullet_time_R_float(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/Bullet:time", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(340);
	popStackFrame(ctx);
	return ((jfloat)((mindustry_gen_Bullet *) NULL_CHECK((frame[0].o)))->F_time);
	}

	popStackFrame(ctx);
}

jfloat M_mindustry_gen_Bullet_x_R_float(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/Bullet:x", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(345);
	popStackFrame(ctx);
	return ((jfloat)((mindustry_gen_Bullet *) NULL_CHECK((frame[0].o)))->F_x);
	}

	popStackFrame(ctx);
}

jfloat M_mindustry_gen_Bullet_y_R_float(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/Bullet:y", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(350);
	popStackFrame(ctx);
	return ((jfloat)((mindustry_gen_Bullet *) NULL_CHECK((frame[0].o)))->F_y);
	}

	popStackFrame(ctx);
}

jint M_mindustry_gen_Bullet_classId_R_int(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/Bullet:classId", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(355);
	popStackFrame(ctx);
	return (7);
	}

	popStackFrame(ctx);
}

jint M_mindustry_gen_Bullet_frags_R_int(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/Bullet:frags", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(360);
	popStackFrame(ctx);
	return ((jint)((mindustry_gen_Bullet *) NULL_CHECK((frame[0].o)))->F_frags);
	}

	popStackFrame(ctx);
}

jint M_mindustry_gen_Bullet_id_R_int(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/Bullet:id", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(365);
	popStackFrame(ctx);
	return ((jint)((mindustry_gen_Bullet *) NULL_CHECK((frame[0].o)))->F_id);
	}

	popStackFrame(ctx);
}

jobject M_mindustry_gen_Bullet_data_R_java_lang_Object(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/Bullet:data", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(370);
	sp[0].o = (jobject)((mindustry_gen_Bullet *) NULL_CHECK((frame[0].o)))->F_data;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_mindustry_gen_Bullet_toString_R_java_lang_String(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/Bullet:toString", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(375);
	sp[0].o = (jobject)concatStringsRecipe(ctx, u8"Bullet#\u0001"_j.string, 1, boxInteger(ctx, ((jint)((mindustry_gen_Bullet *) NULL_CHECK((frame[0].o)))->F_id)));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_mindustry_gen_Bullet_mover_R_mindustry_entities_Mover(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/Bullet:mover", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(380);
	sp[0].o = (jobject)((mindustry_gen_Bullet *) NULL_CHECK((frame[0].o)))->F_mover;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_mindustry_gen_Bullet_type_R_mindustry_entities_bullet_BulletType(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/Bullet:type", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(385);
	sp[0].o = (jobject)((mindustry_gen_Bullet *) NULL_CHECK((frame[0].o)))->F_type;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_mindustry_gen_Bullet_team_R_mindustry_game_Team(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/Bullet:team", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(390);
	sp[0].o = (jobject)((mindustry_gen_Bullet *) NULL_CHECK((frame[0].o)))->F_team;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_mindustry_gen_Bullet_owner_R_mindustry_gen_Entityc(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/Bullet:owner", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(395);
	sp[0].o = (jobject)((mindustry_gen_Bullet *) NULL_CHECK((frame[0].o)))->F_owner;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_mindustry_gen_Bullet_shooter_R_mindustry_gen_Entityc(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/Bullet:shooter", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(400);
	sp[0].o = (jobject)((mindustry_gen_Bullet *) NULL_CHECK((frame[0].o)))->F_shooter;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_mindustry_gen_Bullet_stickyTarget_R_mindustry_gen_Posc(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/Bullet:stickyTarget", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(405);
	sp[0].o = (jobject)((mindustry_gen_Bullet *) NULL_CHECK((frame[0].o)))->F_stickyTarget;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_mindustry_gen_Bullet_trail_R_mindustry_graphics_Trail(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/Bullet:trail", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(410);
	sp[0].o = (jobject)((mindustry_gen_Bullet *) NULL_CHECK((frame[0].o)))->F_trail;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_mindustry_gen_Bullet_aimTile_R_mindustry_world_Tile(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/Bullet:aimTile", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(415);
	sp[0].o = (jobject)((mindustry_gen_Bullet *) NULL_CHECK((frame[0].o)))->F_aimTile;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void M_mindustry_gen_Bullet_absorbed_boolean(jcontext ctx, jobject self, jbool param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/Bullet:absorbed", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(420);
	((mindustry_gen_Bullet *) NULL_CHECK((frame[0].o)))->F_absorbed = (frame[1].i);
	LINE_NUMBER(421);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_gen_Bullet_aimTile_mindustry_world_Tile(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/Bullet:aimTile", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(425);
	((mindustry_gen_Bullet *) NULL_CHECK((frame[0].o)))->F_aimTile = (jref) (frame[1].o);
	LINE_NUMBER(426);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_gen_Bullet_aimX_float(jcontext ctx, jobject self, jfloat param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/Bullet:aimX", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	{
	LINE_NUMBER(430);
	((mindustry_gen_Bullet *) NULL_CHECK((frame[0].o)))->F_aimX = (frame[1].f);
	LINE_NUMBER(431);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_gen_Bullet_aimY_float(jcontext ctx, jobject self, jfloat param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/Bullet:aimY", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	{
	LINE_NUMBER(435);
	((mindustry_gen_Bullet *) NULL_CHECK((frame[0].o)))->F_aimY = (frame[1].f);
	LINE_NUMBER(436);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_gen_Bullet_buildingDamageMultiplier_float(jcontext ctx, jobject self, jfloat param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/Bullet:buildingDamageMultiplier", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	{
	LINE_NUMBER(440);
	((mindustry_gen_Bullet *) NULL_CHECK((frame[0].o)))->F_buildingDamageMultiplier = (frame[1].f);
	LINE_NUMBER(441);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_gen_Bullet_collided_arc_struct_IntSeq(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/Bullet:collided", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(445);
	((mindustry_gen_Bullet *) NULL_CHECK((frame[0].o)))->F_collided = (jref) (frame[1].o);
	LINE_NUMBER(446);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_gen_Bullet_damage_float(jcontext ctx, jobject self, jfloat param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/Bullet:damage", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	{
	LINE_NUMBER(450);
	((mindustry_gen_Bullet *) NULL_CHECK((frame[0].o)))->F_damage = (frame[1].f);
	LINE_NUMBER(451);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_gen_Bullet_data_java_lang_Object(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/Bullet:data", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(455);
	((mindustry_gen_Bullet *) NULL_CHECK((frame[0].o)))->F_data = (jref) (frame[1].o);
	LINE_NUMBER(456);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_gen_Bullet_deltaX_float(jcontext ctx, jobject self, jfloat param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/Bullet:deltaX", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	{
	LINE_NUMBER(460);
	((mindustry_gen_Bullet *) NULL_CHECK((frame[0].o)))->F_deltaX = (frame[1].f);
	LINE_NUMBER(461);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_gen_Bullet_deltaY_float(jcontext ctx, jobject self, jfloat param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/Bullet:deltaY", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	{
	LINE_NUMBER(465);
	((mindustry_gen_Bullet *) NULL_CHECK((frame[0].o)))->F_deltaY = (frame[1].f);
	LINE_NUMBER(466);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_gen_Bullet_fdata_float(jcontext ctx, jobject self, jfloat param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/Bullet:fdata", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	{
	LINE_NUMBER(470);
	((mindustry_gen_Bullet *) NULL_CHECK((frame[0].o)))->F_fdata = (frame[1].f);
	LINE_NUMBER(471);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_gen_Bullet_frags_int(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/Bullet:frags", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(475);
	((mindustry_gen_Bullet *) NULL_CHECK((frame[0].o)))->F_frags = (frame[1].i);
	LINE_NUMBER(476);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_gen_Bullet_hit_boolean(jcontext ctx, jobject self, jbool param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/Bullet:hit", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(480);
	((mindustry_gen_Bullet *) NULL_CHECK((frame[0].o)))->F_hit = (frame[1].i);
	LINE_NUMBER(481);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_gen_Bullet_hitSize_float(jcontext ctx, jobject self, jfloat param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/Bullet:hitSize", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	{
	LINE_NUMBER(485);
	((mindustry_gen_Bullet *) NULL_CHECK((frame[0].o)))->F_hitSize = (frame[1].f);
	LINE_NUMBER(486);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_gen_Bullet_id_int(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/Bullet:id", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(490);
	((mindustry_gen_Bullet *) NULL_CHECK((frame[0].o)))->F_id = (frame[1].i);
	LINE_NUMBER(491);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_gen_Bullet_justSpawned_boolean(jcontext ctx, jobject self, jbool param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/Bullet:justSpawned", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(495);
	((mindustry_gen_Bullet *) NULL_CHECK((frame[0].o)))->F_justSpawned = (frame[1].i);
	LINE_NUMBER(496);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_gen_Bullet_keepAlive_boolean(jcontext ctx, jobject self, jbool param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/Bullet:keepAlive", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(500);
	((mindustry_gen_Bullet *) NULL_CHECK((frame[0].o)))->F_keepAlive = (frame[1].i);
	LINE_NUMBER(501);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_gen_Bullet_lastX_float(jcontext ctx, jobject self, jfloat param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/Bullet:lastX", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	{
	LINE_NUMBER(505);
	((mindustry_gen_Bullet *) NULL_CHECK((frame[0].o)))->F_lastX = (frame[1].f);
	LINE_NUMBER(506);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_gen_Bullet_lastY_float(jcontext ctx, jobject self, jfloat param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/Bullet:lastY", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	{
	LINE_NUMBER(510);
	((mindustry_gen_Bullet *) NULL_CHECK((frame[0].o)))->F_lastY = (frame[1].f);
	LINE_NUMBER(511);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_gen_Bullet_lifetime_float(jcontext ctx, jobject self, jfloat param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/Bullet:lifetime", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	{
	LINE_NUMBER(515);
	((mindustry_gen_Bullet *) NULL_CHECK((frame[0].o)))->F_lifetime = (frame[1].f);
	LINE_NUMBER(516);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_gen_Bullet_mover_mindustry_entities_Mover(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/Bullet:mover", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(520);
	((mindustry_gen_Bullet *) NULL_CHECK((frame[0].o)))->F_mover = (jref) (frame[1].o);
	LINE_NUMBER(521);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_gen_Bullet_originX_float(jcontext ctx, jobject self, jfloat param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/Bullet:originX", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	{
	LINE_NUMBER(525);
	((mindustry_gen_Bullet *) NULL_CHECK((frame[0].o)))->F_originX = (frame[1].f);
	LINE_NUMBER(526);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_gen_Bullet_originY_float(jcontext ctx, jobject self, jfloat param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/Bullet:originY", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	{
	LINE_NUMBER(530);
	((mindustry_gen_Bullet *) NULL_CHECK((frame[0].o)))->F_originY = (frame[1].f);
	LINE_NUMBER(531);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_gen_Bullet_owner_mindustry_gen_Entityc(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/Bullet:owner", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(535);
	((mindustry_gen_Bullet *) NULL_CHECK((frame[0].o)))->F_owner = (jref) (frame[1].o);
	LINE_NUMBER(536);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_gen_Bullet_setIndex__bullet_int(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/Bullet:setIndex__bullet", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(540);
	((mindustry_gen_Bullet *) NULL_CHECK((frame[0].o)))->F_index__bullet = (frame[1].i);
	LINE_NUMBER(541);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_gen_Bullet_setIndex__draw_int(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/Bullet:setIndex__draw", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(545);
	((mindustry_gen_Bullet *) NULL_CHECK((frame[0].o)))->F_index__draw = (frame[1].i);
	LINE_NUMBER(546);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_gen_Bullet_shooter_mindustry_gen_Entityc(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/Bullet:shooter", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(550);
	((mindustry_gen_Bullet *) NULL_CHECK((frame[0].o)))->F_shooter = (jref) (frame[1].o);
	LINE_NUMBER(551);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_gen_Bullet_stickyRotation_float(jcontext ctx, jobject self, jfloat param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/Bullet:stickyRotation", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	{
	LINE_NUMBER(555);
	((mindustry_gen_Bullet *) NULL_CHECK((frame[0].o)))->F_stickyRotation = (frame[1].f);
	LINE_NUMBER(556);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_gen_Bullet_stickyRotationOffset_float(jcontext ctx, jobject self, jfloat param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/Bullet:stickyRotationOffset", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	{
	LINE_NUMBER(560);
	((mindustry_gen_Bullet *) NULL_CHECK((frame[0].o)))->F_stickyRotationOffset = (frame[1].f);
	LINE_NUMBER(561);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_gen_Bullet_stickyTarget_mindustry_gen_Posc(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/Bullet:stickyTarget", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(565);
	((mindustry_gen_Bullet *) NULL_CHECK((frame[0].o)))->F_stickyTarget = (jref) (frame[1].o);
	LINE_NUMBER(566);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_gen_Bullet_stickyX_float(jcontext ctx, jobject self, jfloat param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/Bullet:stickyX", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	{
	LINE_NUMBER(570);
	((mindustry_gen_Bullet *) NULL_CHECK((frame[0].o)))->F_stickyX = (frame[1].f);
	LINE_NUMBER(571);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_gen_Bullet_stickyY_float(jcontext ctx, jobject self, jfloat param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/Bullet:stickyY", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	{
	LINE_NUMBER(575);
	((mindustry_gen_Bullet *) NULL_CHECK((frame[0].o)))->F_stickyY = (frame[1].f);
	LINE_NUMBER(576);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_gen_Bullet_team_mindustry_game_Team(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/Bullet:team", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(580);
	((mindustry_gen_Bullet *) NULL_CHECK((frame[0].o)))->F_team = (jref) (frame[1].o);
	LINE_NUMBER(581);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_gen_Bullet_time_float(jcontext ctx, jobject self, jfloat param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/Bullet:time", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	{
	LINE_NUMBER(585);
	((mindustry_gen_Bullet *) NULL_CHECK((frame[0].o)))->F_time = (frame[1].f);
	LINE_NUMBER(586);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_gen_Bullet_timer_arc_util_Interval(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/Bullet:timer", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(590);
	((mindustry_gen_Bullet *) NULL_CHECK((frame[0].o)))->F_timer = (jref) (frame[1].o);
	LINE_NUMBER(591);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_gen_Bullet_trail_mindustry_graphics_Trail(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/Bullet:trail", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(595);
	((mindustry_gen_Bullet *) NULL_CHECK((frame[0].o)))->F_trail = (jref) (frame[1].o);
	LINE_NUMBER(596);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_gen_Bullet_type_mindustry_entities_bullet_BulletType(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/Bullet:type", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(600);
	((mindustry_gen_Bullet *) NULL_CHECK((frame[0].o)))->F_type = (jref) (frame[1].o);
	LINE_NUMBER(601);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_gen_Bullet_vel_arc_math_geom_Vec2(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/Bullet:vel", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(605);
	((mindustry_gen_Bullet *) NULL_CHECK((frame[0].o)))->F_vel = (jref) (frame[1].o);
	LINE_NUMBER(606);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_gen_Bullet_x_float(jcontext ctx, jobject self, jfloat param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/Bullet:x", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	{
	LINE_NUMBER(610);
	((mindustry_gen_Bullet *) NULL_CHECK((frame[0].o)))->F_x = (frame[1].f);
	LINE_NUMBER(611);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_gen_Bullet_y_float(jcontext ctx, jobject self, jfloat param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/Bullet:y", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	{
	LINE_NUMBER(615);
	((mindustry_gen_Bullet *) NULL_CHECK((frame[0].o)))->F_y = (frame[1].f);
	LINE_NUMBER(616);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_mindustry_gen_Bullet_self_R_mindustry_gen_Entityc(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/Bullet:self", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(620);
	popStackFrame(ctx);
	return (frame[0].o);
	}

	popStackFrame(ctx);
}

jobject M_mindustry_gen_Bullet_as_R_java_lang_Object(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/Bullet:as", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(625);
	popStackFrame(ctx);
	return (frame[0].o);
	}

	popStackFrame(ctx);
}

jbool M_mindustry_gen_Bullet_cheating_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/Bullet:cheating", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(630);
	sp[0].o = (jobject)((mindustry_gen_Bullet *) NULL_CHECK((frame[0].o)))->F_team;
	sp[0].o = (jobject)((func_mindustry_game_Team_rules_R_mindustry_game_Rules$TeamRule) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_game_Team_rules_R_mindustry_game_Rules$TeamRule])(ctx, sp[0].o);
	popStackFrame(ctx);
	return ((jint)((mindustry_game_Rules$TeamRule *) NULL_CHECK(sp[0].o))->F_cheat);
	}

	popStackFrame(ctx);
}

jbool M_mindustry_gen_Bullet_checkUnderBuild_mindustry_gen_Building_float_float_R_boolean(jcontext ctx, jobject self, jobject param0, jfloat param1, jfloat param2) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/Bullet:checkUnderBuild", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].f = param1;
	frame[3].f = param2;
	{
	LINE_NUMBER(635);
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[1].o)))->F_block;
	if (((jint)((mindustry_world_Block *) NULL_CHECK(sp[0].o))->F_underBullets) == 0) goto label_1;
	}
	{
	sp[0].o = (jobject)((mindustry_gen_Bullet *) NULL_CHECK((frame[0].o)))->F_aimTile;
	if (sp[0].o == nullptr) goto label_2;
	}
	{
	sp[0].o = (jobject)((mindustry_gen_Bullet *) NULL_CHECK((frame[0].o)))->F_aimTile;
	sp[0].o = (jobject)((mindustry_world_Tile *) NULL_CHECK(sp[0].o))->F_build;
	if (sp[0].o == (frame[1].o)) goto label_1;
	}
label_2:;
	{
	sp[0].o = (jobject)((mindustry_gen_Bullet *) NULL_CHECK((frame[0].o)))->F_type;
	if (((jint)((mindustry_entities_bullet_BulletType *) NULL_CHECK(sp[0].o))->F_hitUnder) != 0) goto label_1;
	}
	{
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[1].o)))->F_team;
	sp[1].o = (jobject)((mindustry_gen_Bullet *) NULL_CHECK((frame[0].o)))->F_team;
	if (sp[0].o == sp[1].o) goto label_1;
	}
	{
	sp[0].o = (jobject)((mindustry_gen_Bullet *) NULL_CHECK((frame[0].o)))->F_type;
	if (((jint)((mindustry_entities_bullet_BulletType *) NULL_CHECK(sp[0].o))->F_pierce) == 0) goto label_3;
	}
	{
	sp[0].o = (jobject)((mindustry_gen_Bullet *) NULL_CHECK((frame[0].o)))->F_aimTile;
	if (sp[0].o == nullptr) goto label_3;
	}
	{
	jfloat temp0 = (jfloat)SM_arc_math_Mathf_dst_float_float_float_float_R_float(ctx, (frame[2].f), (frame[3].f), ((jfloat)((mindustry_gen_Bullet *) NULL_CHECK((frame[0].o)))->F_originX), ((jfloat)((mindustry_gen_Bullet *) NULL_CHECK((frame[0].o)))->F_originY));
	sp[0].o = (jobject)((mindustry_gen_Bullet *) NULL_CHECK((frame[0].o)))->F_aimTile;
	jfloat temp1 = (jfloat)((func_mindustry_world_Tile_dst_float_float_R_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_Tile_dst_float_float_R_float])(ctx, sp[0].o, ((jfloat)((mindustry_gen_Bullet *) NULL_CHECK((frame[0].o)))->F_originX), ((jfloat)((mindustry_gen_Bullet *) NULL_CHECK((frame[0].o)))->F_originY));
	if ((floatCompare(temp0, (temp1 + (jfloat(2))), -1)) > 0) goto label_1;
	}
label_3:;
	{
	if ((floatCompare(((jfloat)((mindustry_gen_Bullet *) NULL_CHECK((frame[0].o)))->F_aimX), (jfloat(-1.0f)), -1)) != 0) goto label_4;
	}
	{
	if ((floatCompare(((jfloat)((mindustry_gen_Bullet *) NULL_CHECK((frame[0].o)))->F_aimY), (jfloat(-1.0f)), -1)) != 0) goto label_4;
	}
label_1:;
	INST_ICONST(1);
	goto label_5;
label_4:;
	INST_ICONST(0);
label_5:;
	popStackFrame(ctx);
	INST_IRETURN();

	popStackFrame(ctx);
}

jbool M_mindustry_gen_Bullet_collides_mindustry_gen_Hitboxc_R_boolean(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/Bullet:collides", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(640);
	sp[0].o = (jobject)((mindustry_gen_Bullet *) NULL_CHECK((frame[0].o)))->F_type;
	if (((jint)((mindustry_entities_bullet_BulletType *) NULL_CHECK(sp[0].o))->F_collides) == 0) goto label_1;
	}
	{
	if ((isInstance(ctx, (frame[1].o), &class_mindustry_gen_Teamc)) == 0) goto label_1;
	}
	{
	frame[3].o = (checkCast(ctx, &class_mindustry_gen_Teamc, (frame[1].o)));
	sp[0].o = (jobject)((func_mindustry_gen_Teamc_team_R_mindustry_game_Team) resolveInterfaceMethod(ctx, &class_mindustry_gen_Teamc, INDEX_mindustry_gen_Teamc_team_R_mindustry_game_Team, (frame[3].o)))(ctx, (frame[3].o));
	sp[1].o = (jobject)((mindustry_gen_Bullet *) NULL_CHECK((frame[0].o)))->F_team;
	if (sp[0].o == sp[1].o) goto label_1;
	}
	{
	if ((isInstance(ctx, (frame[1].o), &class_mindustry_gen_Unit)) == 0) goto label_3;
	}
	{
	frame[2].o = (checkCast(ctx, &class_mindustry_gen_Unit, (frame[1].o)));
	sp[0].o = frame[2].o;
	sp[1].o = (jobject)((mindustry_gen_Bullet *) NULL_CHECK((frame[0].o)))->F_type;
	jint temp0 = (jint)((mindustry_entities_bullet_BulletType *) NULL_CHECK(sp[1].o))->F_collidesAir;
	sp[1].o = (jobject)((mindustry_gen_Bullet *) NULL_CHECK((frame[0].o)))->F_type;
	jint temp1 = (jint)((func_mindustry_gen_Unit_checkTarget_boolean_boolean_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_gen_Unit_checkTarget_boolean_boolean_R_boolean])(ctx, sp[0].o, temp0, ((jint)((mindustry_entities_bullet_BulletType *) NULL_CHECK(sp[1].o))->F_collidesGround));
	if (temp1 == 0) goto label_1;
	}
label_3:;
	{
	sp[0].o = (jobject)((mindustry_gen_Bullet *) NULL_CHECK((frame[0].o)))->F_type;
	if (((jint)((mindustry_entities_bullet_BulletType *) NULL_CHECK(sp[0].o))->F_pierce) == 0) goto label_5;
	}
	{
	sp[0].o = frame[0].o;
	jint temp0 = (jint)((func_mindustry_gen_Entityc_id_R_int) resolveInterfaceMethod(ctx, &class_mindustry_gen_Entityc, INDEX_mindustry_gen_Entityc_id_R_int, (frame[1].o)))(ctx, (frame[1].o));
	jint temp1 = (jint)((func_mindustry_gen_Bullet_hasCollided_int_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_gen_Bullet_hasCollided_int_R_boolean])(ctx, sp[0].o, temp0);
	if (temp1 != 0) goto label_1;
	}
label_5:;
	{
	sp[0].o = (jobject)((mindustry_gen_Bullet *) NULL_CHECK((frame[0].o)))->F_stickyTarget;
	if (sp[0].o != nullptr) goto label_1;
	}
	INST_ICONST(1);
	goto label_6;
label_1:;
	INST_ICONST(0);
label_6:;
	popStackFrame(ctx);
	INST_IRETURN();

	popStackFrame(ctx);
}

jbool M_mindustry_gen_Bullet_hasCollided_int_R_boolean(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/Bullet:hasCollided", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(645);
	sp[0].o = (jobject)((mindustry_gen_Bullet *) NULL_CHECK((frame[0].o)))->F_collided;
	if (((jint)((arc_struct_IntSeq *) NULL_CHECK(sp[0].o))->F_size) == 0) goto label_1;
	}
	{
	sp[0].o = (jobject)((mindustry_gen_Bullet *) NULL_CHECK((frame[0].o)))->F_collided;
	jint temp0 = (jint)((func_arc_struct_IntSeq_contains_int_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_IntSeq_contains_int_R_boolean])(ctx, sp[0].o, (frame[1].i));
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

jbool M_mindustry_gen_Bullet_inFogTo_mindustry_game_Team_R_boolean(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/Bullet:inFogTo", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(650);
	sp[0].o = (jobject)((mindustry_gen_Bullet *) NULL_CHECK((frame[0].o)))->F_team;
	if (sp[0].o == (frame[1].o)) goto label_1;
	}
	{
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_fogControl;
	jint temp0 = (jint)((func_mindustry_game_FogControl_isVisible_mindustry_game_Team_float_float_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_game_FogControl_isVisible_mindustry_game_Team_float_float_R_boolean])(ctx, sp[0].o, (frame[1].o), ((jfloat)((mindustry_gen_Bullet *) NULL_CHECK((frame[0].o)))->F_x), ((jfloat)((mindustry_gen_Bullet *) NULL_CHECK((frame[0].o)))->F_y));
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

jbool M_mindustry_gen_Bullet_isAdded_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/Bullet:isAdded", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(655);
	popStackFrame(ctx);
	return ((jint)((mindustry_gen_Bullet *) NULL_CHECK((frame[0].o)))->F_added);
	}

	popStackFrame(ctx);
}

jbool M_mindustry_gen_Bullet_isLocal_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/Bullet:isLocal", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(660);
	popStackFrame(ctx);
	return (jint(1));
	}

	popStackFrame(ctx);
}

jbool M_mindustry_gen_Bullet_isRemote_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/Bullet:isRemote", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(665);
	frame[2].o = (frame[0].o);
	if ((isInstance(ctx, (frame[2].o), &class_mindustry_gen_Unitc)) == 0) goto label_1;
	}
	{
	frame[1].o = (checkCast(ctx, &class_mindustry_gen_Unitc, (frame[2].o)));
	jint temp0 = (jint)((func_mindustry_gen_Unitc_isPlayer_R_boolean) resolveInterfaceMethod(ctx, &class_mindustry_gen_Unitc, INDEX_mindustry_gen_Unitc_isPlayer_R_boolean, (frame[1].o)))(ctx, (frame[1].o));
	if (temp0 == 0) goto label_1;
	}
	{
	jint temp0 = (jint)((func_mindustry_gen_Bullet_isLocal_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_gen_Bullet_isLocal_R_boolean])(ctx, (frame[0].o));
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

jbool M_mindustry_gen_Bullet_onSolid_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/Bullet:onSolid", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(670);
	sp[0].o = (jobject)((func_mindustry_gen_Bullet_tileOn_R_mindustry_world_Tile) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_gen_Bullet_tileOn_R_mindustry_world_Tile])(ctx, (frame[0].o));
	frame[1].o = sp[0].o;
	LINE_NUMBER(671);
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

jbool M_mindustry_gen_Bullet_serialize_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/Bullet:serialize", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(675);
	popStackFrame(ctx);
	return (jint(0));
	}

	popStackFrame(ctx);
}

jbool M_mindustry_gen_Bullet_timer_int_float_R_boolean(jcontext ctx, jobject self, jint param0, jfloat param1) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/Bullet:timer", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].f = param1;
	{
	LINE_NUMBER(680);
	jint temp0 = (jint)SM_java_lang_Float_isInfinite_float_R_boolean(ctx, (frame[2].f));
	if (temp0 == 0) goto label_1;
	}
	INST_ICONST(0);
	popStackFrame(ctx);
	INST_IRETURN();
label_1:;
	{
	LINE_NUMBER(681);
	sp[0].o = (jobject)((mindustry_gen_Bullet *) NULL_CHECK((frame[0].o)))->F_timer;
	jint temp0 = (jint)((func_arc_util_Interval_get_int_float_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_util_Interval_get_int_float_R_boolean])(ctx, sp[0].o, (frame[1].i), (frame[2].f));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jdouble M_mindustry_gen_Bullet_sense_mindustry_logic_LAccess_R_double(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/Bullet:sense", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(686);
	clinit_mindustry_gen_Bullet$1(ctx);
	sp[0].o = (jobject)SF_mindustry_gen_Bullet$1_$SwitchMap$mindustry$logic$LAccess;
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
		default: goto label_18;
	}
	}
label_1:;
	{
	LINE_NUMBER(687);
	jdouble temp0 = jdouble(((jfloat)((mindustry_gen_Bullet *) NULL_CHECK((frame[0].o)))->F_rotation));
	sp[0].d = temp0;
	sp += 1;
	goto label_19;
	}
label_2:;
	{
	LINE_NUMBER(688);
	jdouble temp0 = jdouble(((jfloat)((mindustry_gen_Bullet *) NULL_CHECK((frame[0].o)))->F_damage));
	sp[0].d = temp0;
	sp += 1;
	goto label_19;
	}
label_3:;
	{
	LINE_NUMBER(689);
	sp[0].o = (jobject)((mindustry_gen_Bullet *) NULL_CHECK((frame[0].o)))->F_type;
	jdouble temp0 = jdouble(((jfloat)((mindustry_entities_bullet_BulletType *) NULL_CHECK(sp[0].o))->F_damage));
	sp[0].d = temp0;
	sp += 1;
	goto label_19;
	}
label_4:;
	{
	LINE_NUMBER(690);
	jfloat temp0 = (jfloat)SM_mindustry_core_World_conv_float_R_float(ctx, ((jfloat)((mindustry_gen_Bullet *) NULL_CHECK((frame[0].o)))->F_x));
	jdouble temp1 = jdouble(temp0);
	sp[0].d = temp1;
	sp += 1;
	goto label_19;
	}
label_5:;
	{
	LINE_NUMBER(691);
	jfloat temp0 = (jfloat)SM_mindustry_core_World_conv_float_R_float(ctx, ((jfloat)((mindustry_gen_Bullet *) NULL_CHECK((frame[0].o)))->F_y));
	jdouble temp1 = jdouble(temp0);
	sp[0].d = temp1;
	sp += 1;
	goto label_19;
	}
label_6:;
	{
	LINE_NUMBER(692);
	sp[0].o = (jobject)((mindustry_gen_Bullet *) NULL_CHECK((frame[0].o)))->F_vel;
	jdouble temp0 = jdouble(((((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK(sp[0].o))->F_x) * (jfloat(60.0f))) / (jfloat(8.0f))));
	sp[0].d = temp0;
	sp += 1;
	goto label_19;
	}
label_7:;
	{
	LINE_NUMBER(693);
	sp[0].o = (jobject)((mindustry_gen_Bullet *) NULL_CHECK((frame[0].o)))->F_vel;
	jdouble temp0 = jdouble(((((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK(sp[0].o))->F_y) * (jfloat(60.0f))) / (jfloat(8.0f))));
	sp[0].d = temp0;
	sp += 1;
	goto label_19;
	}
label_8:;
	{
	LINE_NUMBER(694);
	jint temp0 = (jint)((func_mindustry_gen_Bullet_isAdded_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_gen_Bullet_isAdded_R_boolean])(ctx, (frame[0].o));
	if (temp0 != 0) goto label_20;
	}
	INST_DCONST(1);
	goto label_19;
label_20:;
	INST_DCONST(0);
	goto label_19;
label_9:;
	{
	LINE_NUMBER(695);
	sp[0].o = (jobject)((mindustry_gen_Bullet *) NULL_CHECK((frame[0].o)))->F_team;
	jdouble temp0 = jdouble(((jint)((mindustry_game_Team *) NULL_CHECK(sp[0].o))->F_id));
	sp[0].d = temp0;
	sp += 1;
	goto label_19;
	}
label_10:;
	{
	LINE_NUMBER(696);
	sp[0].o = (jobject)((mindustry_gen_Bullet *) NULL_CHECK((frame[0].o)))->F_type;
	jdouble temp0 = jdouble(((jfloat)((mindustry_entities_bullet_BulletType *) NULL_CHECK(sp[0].o))->F_range));
	sp[0].d = temp0;
	sp += 1;
	goto label_19;
	}
label_11:;
	{
	LINE_NUMBER(697);
	jfloat temp0 = (jfloat)((func_mindustry_gen_Bullet_aimX_R_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_gen_Bullet_aimX_R_float])(ctx, (frame[0].o));
	jfloat temp1 = (jfloat)SM_mindustry_core_World_conv_float_R_float(ctx, temp0);
	jdouble temp2 = jdouble(temp1);
	sp[0].d = temp2;
	sp += 1;
	goto label_19;
	}
label_12:;
	{
	LINE_NUMBER(698);
	jfloat temp0 = (jfloat)((func_mindustry_gen_Bullet_aimY_R_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_gen_Bullet_aimY_R_float])(ctx, (frame[0].o));
	jfloat temp1 = (jfloat)SM_mindustry_core_World_conv_float_R_float(ctx, temp0);
	jdouble temp2 = jdouble(temp1);
	sp[0].d = temp2;
	sp += 1;
	goto label_19;
	}
label_13:;
	{
	LINE_NUMBER(699);
	sp[0].o = (jobject)((mindustry_gen_Bullet *) NULL_CHECK((frame[0].o)))->F_type;
	jdouble temp0 = jdouble(((((jfloat)((mindustry_entities_bullet_BulletType *) NULL_CHECK(sp[0].o))->F_speed) * (jfloat(60.0f))) / (jfloat(8.0f))));
	sp[0].d = temp0;
	sp += 1;
	goto label_19;
	}
label_14:;
	{
	LINE_NUMBER(700);
	sp[0].o = (jobject)((mindustry_gen_Bullet *) NULL_CHECK((frame[0].o)))->F_type;
	jdouble temp0 = jdouble((((jfloat)((mindustry_entities_bullet_BulletType *) NULL_CHECK(sp[0].o))->F_hitSize) / (jfloat(8.0f))));
	sp[0].d = temp0;
	sp += 1;
	goto label_19;
	}
label_15:;
	{
	LINE_NUMBER(701);
	sp[0].o = (jobject)((mindustry_gen_Bullet *) NULL_CHECK((frame[0].o)))->F_team;
	sp[0].o = (jobject)((mindustry_game_Team *) NULL_CHECK(sp[0].o))->F_color;
	jfloat temp0 = (jfloat)((arc_graphics_Color *) NULL_CHECK(sp[0].o))->F_r;
	sp[0].o = (jobject)((mindustry_gen_Bullet *) NULL_CHECK((frame[0].o)))->F_team;
	sp[0].o = (jobject)((mindustry_game_Team *) NULL_CHECK(sp[0].o))->F_color;
	jfloat temp1 = (jfloat)((arc_graphics_Color *) NULL_CHECK(sp[0].o))->F_g;
	sp[0].o = (jobject)((mindustry_gen_Bullet *) NULL_CHECK((frame[0].o)))->F_team;
	sp[0].o = (jobject)((mindustry_game_Team *) NULL_CHECK(sp[0].o))->F_color;
	jdouble temp2 = (jdouble)SM_arc_graphics_Color_toDoubleBits_float_float_float_float_R_double(ctx, temp0, temp1, ((jfloat)((arc_graphics_Color *) NULL_CHECK(sp[0].o))->F_b), (jfloat(1)));
	sp[0].d = temp2;
	sp += 1;
	goto label_19;
	}
label_16:;
	{
	LINE_NUMBER(702);
	jdouble temp0 = jdouble(((jfloat)((mindustry_gen_Bullet *) NULL_CHECK((frame[0].o)))->F_lifetime));
	sp[0].d = temp0;
	sp += 1;
	goto label_19;
	}
label_17:;
	{
	LINE_NUMBER(703);
	jdouble temp0 = jdouble(((jfloat)((mindustry_gen_Bullet *) NULL_CHECK((frame[0].o)))->F_time));
	sp[0].d = temp0;
	sp += 1;
	goto label_19;
	}
label_18:;
	LINE_NUMBER(704);
	(sp++)->d = jdouble(std::numeric_limits<double>::quiet_NaN());
label_19:;
	LINE_NUMBER(686);
	popStackFrame(ctx);
	INST_DRETURN();

	popStackFrame(ctx);
}

jfloat M_mindustry_gen_Bullet_clipSize_R_float(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/Bullet:clipSize", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(710);
	sp[0].o = (jobject)((mindustry_gen_Bullet *) NULL_CHECK((frame[0].o)))->F_type;
	popStackFrame(ctx);
	return ((jfloat)((mindustry_entities_bullet_BulletType *) NULL_CHECK(sp[0].o))->F_drawSize);
	}

	popStackFrame(ctx);
}

jfloat M_mindustry_gen_Bullet_damageMultiplier_R_float(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/Bullet:damageMultiplier", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(715);
	sp[0].o = (jobject)((mindustry_gen_Bullet *) NULL_CHECK((frame[0].o)))->F_type;
	jfloat temp0 = (jfloat)((func_mindustry_entities_bullet_BulletType_damageMultiplier_mindustry_gen_Bullet_R_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_entities_bullet_BulletType_damageMultiplier_mindustry_gen_Bullet_R_float])(ctx, sp[0].o, (frame[0].o));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jfloat M_mindustry_gen_Bullet_deltaAngle_R_float(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/Bullet:deltaAngle", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(720);
	jfloat temp0 = (jfloat)SM_arc_math_Mathf_angle_float_float_R_float(ctx, ((jfloat)((mindustry_gen_Bullet *) NULL_CHECK((frame[0].o)))->F_deltaX), ((jfloat)((mindustry_gen_Bullet *) NULL_CHECK((frame[0].o)))->F_deltaY));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jfloat M_mindustry_gen_Bullet_deltaLen_R_float(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/Bullet:deltaLen", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(725);
	jfloat temp0 = (jfloat)SM_arc_math_Mathf_len_float_float_R_float(ctx, ((jfloat)((mindustry_gen_Bullet *) NULL_CHECK((frame[0].o)))->F_deltaX), ((jfloat)((mindustry_gen_Bullet *) NULL_CHECK((frame[0].o)))->F_deltaY));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jfloat M_mindustry_gen_Bullet_fin_R_float(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/Bullet:fin", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(730);
	popStackFrame(ctx);
	return (((jfloat)((mindustry_gen_Bullet *) NULL_CHECK((frame[0].o)))->F_time) / ((jfloat)((mindustry_gen_Bullet *) NULL_CHECK((frame[0].o)))->F_lifetime));
	}

	popStackFrame(ctx);
}

jfloat M_mindustry_gen_Bullet_getX_R_float(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/Bullet:getX", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(735);
	popStackFrame(ctx);
	return ((jfloat)((mindustry_gen_Bullet *) NULL_CHECK((frame[0].o)))->F_x);
	}

	popStackFrame(ctx);
}

jfloat M_mindustry_gen_Bullet_getY_R_float(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/Bullet:getY", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(740);
	popStackFrame(ctx);
	return ((jfloat)((mindustry_gen_Bullet *) NULL_CHECK((frame[0].o)))->F_y);
	}

	popStackFrame(ctx);
}

jfloat M_mindustry_gen_Bullet_hitSize_R_float(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/Bullet:hitSize", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(745);
	popStackFrame(ctx);
	return ((jfloat)((mindustry_gen_Bullet *) NULL_CHECK((frame[0].o)))->F_hitSize);
	}

	popStackFrame(ctx);
}

jfloat M_mindustry_gen_Bullet_rotation_R_float(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/Bullet:rotation", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(750);
	sp[0].o = (jobject)((mindustry_gen_Bullet *) NULL_CHECK((frame[0].o)))->F_vel;
	jint temp0 = (jint)((func_arc_math_geom_Vec2_isZero_float_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Vec2_isZero_float_R_boolean])(ctx, sp[0].o, (jfloat(1,000000e-03f)));
	if (temp0 == 0) goto label_1;
	}
	{
	jfloat temp0 = (jfloat)((mindustry_gen_Bullet *) NULL_CHECK((frame[0].o)))->F_rotation;
	sp[0].f = temp0;
	sp += 1;
	goto label_2;
	}
label_1:;
	{
	sp[0].o = (jobject)((mindustry_gen_Bullet *) NULL_CHECK((frame[0].o)))->F_vel;
	jfloat temp0 = (jfloat)((func_arc_math_geom_Vec2_angle_R_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Vec2_angle_R_float])(ctx, sp[0].o);
	sp[0].f = temp0;
	sp += 1;
	}
label_2:;
	popStackFrame(ctx);
	INST_FRETURN();

	popStackFrame(ctx);
}

jint M_mindustry_gen_Bullet_tileX_R_int(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/Bullet:tileX", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(755);
	jint temp0 = (jint)SM_mindustry_core_World_toTile_float_R_int(ctx, ((jfloat)((mindustry_gen_Bullet *) NULL_CHECK((frame[0].o)))->F_x));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jint M_mindustry_gen_Bullet_tileY_R_int(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/Bullet:tileY", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(760);
	jint temp0 = (jint)SM_mindustry_core_World_toTile_float_R_int(ctx, ((jfloat)((mindustry_gen_Bullet *) NULL_CHECK((frame[0].o)))->F_y));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jobject M_mindustry_gen_Bullet_blockOn_R_mindustry_world_Block(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/Bullet:blockOn", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(765);
	sp[0].o = (jobject)((func_mindustry_gen_Bullet_tileOn_R_mindustry_world_Tile) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_gen_Bullet_tileOn_R_mindustry_world_Tile])(ctx, (frame[0].o));
	frame[1].o = sp[0].o;
	LINE_NUMBER(766);
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

jobject M_mindustry_gen_Bullet_floorOn_R_mindustry_world_blocks_environment_Floor(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/Bullet:floorOn", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(771);
	sp[0].o = (jobject)((func_mindustry_gen_Bullet_tileOn_R_mindustry_world_Tile) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_gen_Bullet_tileOn_R_mindustry_world_Tile])(ctx, (frame[0].o));
	frame[1].o = sp[0].o;
	LINE_NUMBER(772);
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

jobject SM_mindustry_gen_Bullet_create_R_mindustry_gen_Bullet(jcontext ctx) {
	jtype frame[2];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/Bullet:create", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_gen_Bullet(ctx);
	{
	LINE_NUMBER(776);
	sp[0].o = ((jobject) &class_mindustry_gen_Bullet);
	{ /* InvokeDynamic */
		clinit_mindustry_gen_Bullet_invoke_arc_func_Prov_1(ctx);
		auto proxy = (mindustry_gen_Bullet_invoke_arc_func_Prov_1 *) gcAlloc(ctx, &class_mindustry_gen_Bullet_invoke_arc_func_Prov_1);
		sp[1].o = (jobject) proxy;
	}
	sp[0].o = (jobject)SM_arc_util_pooling_Pools_obtain_java_lang_Class_arc_func_Prov_R_java_lang_Object(ctx, sp[0].o, sp[1].o);
	popStackFrame(ctx);
	return (checkCast(ctx, &class_mindustry_gen_Bullet, sp[0].o));
	}

	popStackFrame(ctx);
}

void M_mindustry_gen_Bullet_absorb(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/Bullet:absorb", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(782);
	((mindustry_gen_Bullet *) NULL_CHECK((frame[0].o)))->F_absorbed = (jint(1));
	LINE_NUMBER(783);
	((func_mindustry_gen_Bullet_remove) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_gen_Bullet_remove])(ctx, (frame[0].o));
	LINE_NUMBER(788);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_gen_Bullet_add(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/Bullet:add", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(791);
	if (((jint)((mindustry_gen_Bullet *) NULL_CHECK((frame[0].o)))->F_added) != (jint(1))) goto label_1;
	}
	popStackFrame(ctx);
	INST_RETURN();
label_1:;
	{
	LINE_NUMBER(792);
	sp[0].o = frame[0].o;
	clinit_mindustry_gen_Groups(ctx);
	sp[1].o = (jobject)SF_mindustry_gen_Groups_bullet;
	jint temp0 = (jint)((func_mindustry_entities_EntityGroup_addIndex_mindustry_gen_Entityc_R_int) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_mindustry_entities_EntityGroup_addIndex_mindustry_gen_Entityc_R_int])(ctx, sp[1].o, (frame[0].o));
	((mindustry_gen_Bullet *) NULL_CHECK(sp[0].o))->F_index__bullet = temp0;
	LINE_NUMBER(793);
	sp[0].o = frame[0].o;
	clinit_mindustry_gen_Groups(ctx);
	sp[1].o = (jobject)SF_mindustry_gen_Groups_draw;
	jint temp1 = (jint)((func_mindustry_entities_EntityGroup_addIndex_mindustry_gen_Entityc_R_int) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_mindustry_entities_EntityGroup_addIndex_mindustry_gen_Entityc_R_int])(ctx, sp[1].o, (frame[0].o));
	((mindustry_gen_Bullet *) NULL_CHECK(sp[0].o))->F_index__draw = temp1;
	LINE_NUMBER(796);
	sp[0].o = (jobject)((mindustry_gen_Bullet *) NULL_CHECK((frame[0].o)))->F_type;
	((func_mindustry_entities_bullet_BulletType_init_mindustry_gen_Bullet) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_entities_bullet_BulletType_init_mindustry_gen_Bullet])(ctx, sp[0].o, (frame[0].o));
	LINE_NUMBER(800);
	((mindustry_gen_Bullet *) NULL_CHECK((frame[0].o)))->F_added = (jint(1));
	LINE_NUMBER(804);
	((func_mindustry_gen_Bullet_updateLastPosition) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_gen_Bullet_updateLastPosition])(ctx, (frame[0].o));
	LINE_NUMBER(806);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_gen_Bullet_afterRead(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/Bullet:afterRead", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(814);
	((func_mindustry_gen_Bullet_updateLastPosition) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_gen_Bullet_updateLastPosition])(ctx, (frame[0].o));
	LINE_NUMBER(816);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_gen_Bullet_afterReadAll(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[1];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/Bullet:afterReadAll", 1 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	LINE_NUMBER(820);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_gen_Bullet_beforeWrite(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[1];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/Bullet:beforeWrite", 1 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	LINE_NUMBER(824);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_gen_Bullet_collision_mindustry_gen_Hitboxc_float_float(jcontext ctx, jobject self, jobject param0, jfloat param1, jfloat param2) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/Bullet:collision", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].f = param1;
	frame[3].f = param2;
	{
	LINE_NUMBER(832);
	sp[0].o = (jobject)((mindustry_gen_Bullet *) NULL_CHECK((frame[0].o)))->F_type;
	if (((jint)((mindustry_entities_bullet_BulletType *) NULL_CHECK(sp[0].o))->F_sticky) == 0) goto label_1;
	}
	{
	LINE_NUMBER(833);
	sp[0].o = (jobject)((mindustry_gen_Bullet *) NULL_CHECK((frame[0].o)))->F_stickyTarget;
	if (sp[0].o != nullptr) goto label_3;
	}
	{
	LINE_NUMBER(834);
	sp[0].o = frame[0].o;
	jfloat temp0 = frame[2].f;
	sp[1].o = (jobject)((mindustry_gen_Bullet *) NULL_CHECK((frame[0].o)))->F_vel;
	((mindustry_gen_Bullet *) NULL_CHECK(sp[0].o))->F_x = (temp0 + ((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK(sp[1].o))->F_x));
	LINE_NUMBER(835);
	sp[0].o = frame[0].o;
	jfloat temp1 = frame[3].f;
	sp[1].o = (jobject)((mindustry_gen_Bullet *) NULL_CHECK((frame[0].o)))->F_vel;
	((mindustry_gen_Bullet *) NULL_CHECK(sp[0].o))->F_y = (temp1 + ((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK(sp[1].o))->F_y));
	LINE_NUMBER(836);
	((func_mindustry_gen_Bullet_stickTo_mindustry_gen_Posc) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_gen_Bullet_stickTo_mindustry_gen_Posc])(ctx, (frame[0].o), (frame[1].o));
	goto label_3;
	}
label_1:;
	{
	LINE_NUMBER(839);
	sp[0].o = (jobject)((mindustry_gen_Bullet *) NULL_CHECK((frame[0].o)))->F_type;
	((func_mindustry_entities_bullet_BulletType_hit_mindustry_gen_Bullet_float_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_entities_bullet_BulletType_hit_mindustry_gen_Bullet_float_float])(ctx, sp[0].o, (frame[0].o), (frame[2].f), (frame[3].f));
	LINE_NUMBER(840);
	sp[0].o = (jobject)((mindustry_gen_Bullet *) NULL_CHECK((frame[0].o)))->F_type;
	if (((jint)((mindustry_entities_bullet_BulletType *) NULL_CHECK(sp[0].o))->F_pierce) != 0) goto label_8;
	}
	{
	LINE_NUMBER(841);
	((mindustry_gen_Bullet *) NULL_CHECK((frame[0].o)))->F_hit = (jint(1));
	LINE_NUMBER(842);
	((func_mindustry_gen_Bullet_remove) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_gen_Bullet_remove])(ctx, (frame[0].o));
	goto label_11;
	}
label_8:;
	{
	LINE_NUMBER(844);
	sp[0].o = (jobject)((mindustry_gen_Bullet *) NULL_CHECK((frame[0].o)))->F_collided;
	jint temp0 = (jint)((func_mindustry_gen_Entityc_id_R_int) resolveInterfaceMethod(ctx, &class_mindustry_gen_Entityc, INDEX_mindustry_gen_Entityc_id_R_int, (frame[1].o)))(ctx, (frame[1].o));
	((func_arc_struct_IntSeq_add_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_IntSeq_add_int])(ctx, sp[0].o, temp0);
	}
label_11:;
	{
	LINE_NUMBER(846);
	sp[0].o = (jobject)((mindustry_gen_Bullet *) NULL_CHECK((frame[0].o)))->F_type;
	sp[1].o = frame[0].o;
	sp[2].o = frame[1].o;
	sp += 3;
	if ((isInstance(ctx, (frame[1].o), &class_mindustry_gen_Healthc)) == 0) goto label_12;
	}
	{
	frame[4].o = (checkCast(ctx, &class_mindustry_gen_Healthc, (frame[1].o)));
	jfloat temp0 = (jfloat)((func_mindustry_gen_Healthc_health_R_float) resolveInterfaceMethod(ctx, &class_mindustry_gen_Healthc, INDEX_mindustry_gen_Healthc_health_R_float, (frame[4].o)))(ctx, (frame[4].o));
	sp[0].f = temp0;
	sp += 1;
	goto label_14;
	}
label_12:;
	INST_FCONST(0);
label_14:;
	POP_N(4); // Pop method args
	((func_mindustry_entities_bullet_BulletType_hitEntity_mindustry_gen_Bullet_mindustry_gen_Hitboxc_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_entities_bullet_BulletType_hitEntity_mindustry_gen_Bullet_mindustry_gen_Hitboxc_float])(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].f);
label_3:;
	LINE_NUMBER(849);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_gen_Bullet_draw(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/Bullet:draw", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(854);
	sp[0].o = (jobject)((mindustry_gen_Bullet *) NULL_CHECK((frame[0].o)))->F_type;
	SM_arc_graphics_g2d_Draw_z_float(ctx, ((jfloat)((mindustry_entities_bullet_BulletType *) NULL_CHECK(sp[0].o))->F_layer));
	LINE_NUMBER(855);
	sp[0].o = (jobject)((mindustry_gen_Bullet *) NULL_CHECK((frame[0].o)))->F_type;
	if (((jint)((mindustry_entities_bullet_BulletType *) NULL_CHECK(sp[0].o))->F_underwater) == 0) goto label_2;
	}
	{
	LINE_NUMBER(856);
	{ /* InvokeDynamic */
		clinit_mindustry_gen_Bullet_invoke_java_lang_Runnable_1(ctx);
		auto proxy = (mindustry_gen_Bullet_invoke_java_lang_Runnable_1 *) gcAlloc(ctx, &class_mindustry_gen_Bullet_invoke_java_lang_Runnable_1);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[0].o = (jobject) proxy;
	}
	SM_mindustry_graphics_Drawf_underwater_java_lang_Runnable(ctx, sp[0].o);
	goto label_4;
	}
label_2:;
	{
	LINE_NUMBER(858);
	sp[0].o = (jobject)((mindustry_gen_Bullet *) NULL_CHECK((frame[0].o)))->F_type;
	((func_mindustry_entities_bullet_BulletType_draw_mindustry_gen_Bullet) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_entities_bullet_BulletType_draw_mindustry_gen_Bullet])(ctx, sp[0].o, (frame[0].o));
	}
label_4:;
	{
	LINE_NUMBER(860);
	sp[0].o = (jobject)((mindustry_gen_Bullet *) NULL_CHECK((frame[0].o)))->F_type;
	((func_mindustry_entities_bullet_BulletType_drawLight_mindustry_gen_Bullet) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_entities_bullet_BulletType_drawLight_mindustry_gen_Bullet])(ctx, sp[0].o, (frame[0].o));
	LINE_NUMBER(861);
	SM_arc_graphics_g2d_Draw_reset(ctx);
	LINE_NUMBER(866);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_gen_Bullet_getCollisions_arc_func_Cons(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/Bullet:getCollisions", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(871);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	sp[0].o = (jobject)((mindustry_core_GameState *) NULL_CHECK(sp[0].o))->F_teams;
	sp[0].o = (jobject)((mindustry_game_Teams *) NULL_CHECK(sp[0].o))->F_present;
	frame[2].o = sp[0].o;
	LINE_NUMBER(872);
	frame[3].i = (jint(0));
	}
label_2:;
	{
	if ((frame[3].i) >= ((jint)((arc_struct_Seq *) NULL_CHECK((frame[2].o)))->F_size)) goto label_3;
	}
	{
	LINE_NUMBER(873);
	sp[0].o = (jobject)((arc_struct_Seq *) NULL_CHECK((frame[2].o)))->F_items;
	sp[0].o = (jobject)((mindustry_game_Teams$TeamData *) NULL_CHECK(((jobject)ARRAY_ACCESS(jobject, (checkCast(ctx, getArrayClass(&class_mindustry_game_Teams$TeamData, 1), sp[0].o)), (frame[3].i)))))->F_team;
	sp[1].o = (jobject)((mindustry_gen_Bullet *) NULL_CHECK((frame[0].o)))->F_team;
	if (sp[0].o == sp[1].o) goto label_5;
	}
	{
	LINE_NUMBER(874);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((arc_struct_Seq *) NULL_CHECK((frame[2].o)))->F_items;
	sp[1].o = (jobject)((func_mindustry_game_Teams$TeamData_tree_R_arc_math_geom_QuadTree) ((void **) nullCheck(ctx, ((jobject)ARRAY_ACCESS(jobject, (checkCast(ctx, getArrayClass(&class_mindustry_game_Teams$TeamData, 1), sp[1].o)), (frame[3].i))))->vtable)[VTABLE_mindustry_game_Teams$TeamData_tree_R_arc_math_geom_QuadTree])(ctx, ((jobject)ARRAY_ACCESS(jobject, (checkCast(ctx, getArrayClass(&class_mindustry_game_Teams$TeamData, 1), sp[1].o)), (frame[3].i))));
	((func_arc_func_Cons_get_java_lang_Object) resolveInterfaceMethod(ctx, &class_arc_func_Cons, INDEX_arc_func_Cons_get_java_lang_Object, sp[0].o))(ctx, sp[0].o, sp[1].o);
	}
label_5:;
	{
	LINE_NUMBER(872);
	INST_IINC(3, 1);
	goto label_2;
	}
label_3:;
	LINE_NUMBER(881);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_gen_Bullet_hitbox_arc_math_geom_Rect(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/Bullet:hitbox", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(885);
	sp[0].o = (jobject)((func_arc_math_geom_Rect_setCentered_float_float_float_float_R_arc_math_geom_Rect) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_math_geom_Rect_setCentered_float_float_float_float_R_arc_math_geom_Rect])(ctx, (frame[1].o), ((jfloat)((mindustry_gen_Bullet *) NULL_CHECK((frame[0].o)))->F_x), ((jfloat)((mindustry_gen_Bullet *) NULL_CHECK((frame[0].o)))->F_y), ((jfloat)((mindustry_gen_Bullet *) NULL_CHECK((frame[0].o)))->F_hitSize), ((jfloat)((mindustry_gen_Bullet *) NULL_CHECK((frame[0].o)))->F_hitSize));
	LINE_NUMBER(886);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_gen_Bullet_hitboxTile_arc_math_geom_Rect(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/Bullet:hitboxTile", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(890);
	jfloat temp0 = (jfloat)SM_java_lang_Math_min_float_float_R_float(ctx, (((jfloat)((mindustry_gen_Bullet *) NULL_CHECK((frame[0].o)))->F_hitSize) * (jfloat(0.66f))), (jfloat(7.8f)));
	frame[2].f = temp0;
	LINE_NUMBER(891);
	sp[0].o = (jobject)((func_arc_math_geom_Rect_setCentered_float_float_float_float_R_arc_math_geom_Rect) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_math_geom_Rect_setCentered_float_float_float_float_R_arc_math_geom_Rect])(ctx, (frame[1].o), ((jfloat)((mindustry_gen_Bullet *) NULL_CHECK((frame[0].o)))->F_x), ((jfloat)((mindustry_gen_Bullet *) NULL_CHECK((frame[0].o)))->F_y), (frame[2].f), (frame[2].f));
	LINE_NUMBER(892);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_gen_Bullet_initVel_float_float(jcontext ctx, jobject self, jfloat param0, jfloat param1) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/Bullet:initVel", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	frame[2].f = param1;
	{
	LINE_NUMBER(896);
	sp[0].o = (jobject)((mindustry_gen_Bullet *) NULL_CHECK((frame[0].o)))->F_vel;
	sp[0].o = (jobject)((func_arc_math_geom_Vec2_trns_float_float_R_arc_math_geom_Vec2) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Vec2_trns_float_float_R_arc_math_geom_Vec2])(ctx, sp[0].o, (frame[1].f), (frame[2].f));
	LINE_NUMBER(897);
	((mindustry_gen_Bullet *) NULL_CHECK((frame[0].o)))->F_rotation = (frame[1].f);
	LINE_NUMBER(898);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_gen_Bullet_moveRelative_float_float(jcontext ctx, jobject self, jfloat param0, jfloat param1) {
	NULL_CHECK(self);
	jtype frame[10];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/Bullet:moveRelative", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	frame[2].f = param1;
	{
	LINE_NUMBER(902);
	jfloat temp0 = (jfloat)((func_mindustry_gen_Bullet_rotation_R_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_gen_Bullet_rotation_R_float])(ctx, (frame[0].o));
	frame[3].f = temp0;
	LINE_NUMBER(903);
	sp[0].o = frame[0].o;
	jfloat temp1 = (jfloat)((mindustry_gen_Bullet *) NULL_CHECK(sp[0].o))->F_x;
	jfloat temp2 = (jfloat)SM_arc_math_Angles_trnsx_float_float_float_R_float(ctx, (frame[3].f), ((frame[1].f) * (clinit_arc_util_Time(ctx), (jfloat)SF_arc_util_Time_delta)), ((frame[2].f) * (clinit_arc_util_Time(ctx), (jfloat)SF_arc_util_Time_delta)));
	((mindustry_gen_Bullet *) NULL_CHECK(sp[0].o))->F_x = (temp1 + temp2);
	LINE_NUMBER(904);
	sp[0].o = frame[0].o;
	jfloat temp3 = (jfloat)((mindustry_gen_Bullet *) NULL_CHECK(sp[0].o))->F_y;
	jfloat temp4 = (jfloat)SM_arc_math_Angles_trnsy_float_float_float_R_float(ctx, (frame[3].f), ((frame[1].f) * (clinit_arc_util_Time(ctx), (jfloat)SF_arc_util_Time_delta)), ((frame[2].f) * (clinit_arc_util_Time(ctx), (jfloat)SF_arc_util_Time_delta)));
	((mindustry_gen_Bullet *) NULL_CHECK(sp[0].o))->F_y = (temp3 + temp4);
	LINE_NUMBER(905);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_gen_Bullet_read_arc_util_io_Reads(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/Bullet:read", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(909);
	((func_mindustry_gen_Bullet_afterRead) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_gen_Bullet_afterRead])(ctx, (frame[0].o));
	LINE_NUMBER(910);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_gen_Bullet_remove(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/Bullet:remove", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(913);
	if (((jint)((mindustry_gen_Bullet *) NULL_CHECK((frame[0].o)))->F_added) != 0) goto label_1;
	}
	popStackFrame(ctx);
	INST_RETURN();
label_1:;
	{
	LINE_NUMBER(914);
	clinit_mindustry_gen_Groups(ctx);
	sp[0].o = (jobject)SF_mindustry_gen_Groups_bullet;
	((func_mindustry_entities_EntityGroup_removeIndex_mindustry_gen_Entityc_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_entities_EntityGroup_removeIndex_mindustry_gen_Entityc_int])(ctx, sp[0].o, (frame[0].o), ((jint)((mindustry_gen_Bullet *) NULL_CHECK((frame[0].o)))->F_index__bullet));
	LINE_NUMBER(915);
	((mindustry_gen_Bullet *) NULL_CHECK((frame[0].o)))->F_index__bullet = (jint(-1));
	LINE_NUMBER(916);
	clinit_mindustry_gen_Groups(ctx);
	sp[0].o = (jobject)SF_mindustry_gen_Groups_draw;
	((func_mindustry_entities_EntityGroup_removeIndex_mindustry_gen_Entityc_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_entities_EntityGroup_removeIndex_mindustry_gen_Entityc_int])(ctx, sp[0].o, (frame[0].o), ((jint)((mindustry_gen_Bullet *) NULL_CHECK((frame[0].o)))->F_index__draw));
	LINE_NUMBER(917);
	((mindustry_gen_Bullet *) NULL_CHECK((frame[0].o)))->F_index__draw = (jint(-1));
	LINE_NUMBER(920);
	if ((clinit_mindustry_gen_Groups(ctx), (jint)SF_mindustry_gen_Groups_isClearing) == 0) goto label_6;
	}
	goto label_7;
label_6:;
	{
	LINE_NUMBER(921);
	if (((jint)((mindustry_gen_Bullet *) NULL_CHECK((frame[0].o)))->F_hit) != 0) goto label_8;
	}
	{
	LINE_NUMBER(922);
	sp[0].o = (jobject)((mindustry_gen_Bullet *) NULL_CHECK((frame[0].o)))->F_type;
	((func_mindustry_entities_bullet_BulletType_despawned_mindustry_gen_Bullet) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_entities_bullet_BulletType_despawned_mindustry_gen_Bullet])(ctx, sp[0].o, (frame[0].o));
	}
label_8:;
	{
	LINE_NUMBER(924);
	sp[0].o = (jobject)((mindustry_gen_Bullet *) NULL_CHECK((frame[0].o)))->F_type;
	((func_mindustry_entities_bullet_BulletType_removed_mindustry_gen_Bullet) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_entities_bullet_BulletType_removed_mindustry_gen_Bullet])(ctx, sp[0].o, (frame[0].o));
	LINE_NUMBER(925);
	sp[0].o = (jobject)((mindustry_gen_Bullet *) NULL_CHECK((frame[0].o)))->F_collided;
	((func_arc_struct_IntSeq_clear) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_IntSeq_clear])(ctx, sp[0].o);
	}
label_7:;
	{
	LINE_NUMBER(929);
	((mindustry_gen_Bullet *) NULL_CHECK((frame[0].o)))->F_added = (jint(0));
	LINE_NUMBER(931);
	SM_mindustry_gen_Groups_queueFree_arc_util_pooling_Pool$Poolable(ctx, (frame[0].o));
	LINE_NUMBER(932);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_gen_Bullet_reset(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/Bullet:reset", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(935);
	((mindustry_gen_Bullet *) NULL_CHECK((frame[0].o)))->F_absorbed = (jint(0));
	LINE_NUMBER(936);
	((mindustry_gen_Bullet *) NULL_CHECK((frame[0].o)))->F_added = (jint(0));
	LINE_NUMBER(937);
	((mindustry_gen_Bullet *) NULL_CHECK((frame[0].o)))->F_aimTile = (jref) (jobject(nullptr));
	LINE_NUMBER(938);
	((mindustry_gen_Bullet *) NULL_CHECK((frame[0].o)))->F_aimX = (jfloat(0));
	LINE_NUMBER(939);
	((mindustry_gen_Bullet *) NULL_CHECK((frame[0].o)))->F_aimY = (jfloat(0));
	LINE_NUMBER(940);
	((mindustry_gen_Bullet *) NULL_CHECK((frame[0].o)))->F_buildingDamageMultiplier = (jfloat(0));
	LINE_NUMBER(941);
	((mindustry_gen_Bullet *) NULL_CHECK((frame[0].o)))->F_damage = (jfloat(0));
	LINE_NUMBER(942);
	((mindustry_gen_Bullet *) NULL_CHECK((frame[0].o)))->F_data = (jref) (jobject(nullptr));
	LINE_NUMBER(943);
	((mindustry_gen_Bullet *) NULL_CHECK((frame[0].o)))->F_deltaX = (jfloat(0));
	LINE_NUMBER(944);
	((mindustry_gen_Bullet *) NULL_CHECK((frame[0].o)))->F_deltaY = (jfloat(0));
	LINE_NUMBER(945);
	((mindustry_gen_Bullet *) NULL_CHECK((frame[0].o)))->F_fdata = (jfloat(0));
	LINE_NUMBER(946);
	((mindustry_gen_Bullet *) NULL_CHECK((frame[0].o)))->F_frags = (jint(0));
	LINE_NUMBER(947);
	((mindustry_gen_Bullet *) NULL_CHECK((frame[0].o)))->F_hit = (jint(0));
	LINE_NUMBER(948);
	((mindustry_gen_Bullet *) NULL_CHECK((frame[0].o)))->F_hitSize = (jfloat(0));
	LINE_NUMBER(949);
	sp[0].o = frame[0].o;
	jint temp0 = (jint)SM_mindustry_entities_EntityGroup_nextId_R_int(ctx);
	((mindustry_gen_Bullet *) NULL_CHECK(sp[0].o))->F_id = temp0;
	LINE_NUMBER(950);
	((mindustry_gen_Bullet *) NULL_CHECK((frame[0].o)))->F_justSpawned = (jint(1));
	LINE_NUMBER(951);
	((mindustry_gen_Bullet *) NULL_CHECK((frame[0].o)))->F_keepAlive = (jint(0));
	LINE_NUMBER(952);
	((mindustry_gen_Bullet *) NULL_CHECK((frame[0].o)))->F_lastX = (jfloat(0));
	LINE_NUMBER(953);
	((mindustry_gen_Bullet *) NULL_CHECK((frame[0].o)))->F_lastY = (jfloat(0));
	LINE_NUMBER(954);
	((mindustry_gen_Bullet *) NULL_CHECK((frame[0].o)))->F_lifetime = (jfloat(0));
	LINE_NUMBER(955);
	((mindustry_gen_Bullet *) NULL_CHECK((frame[0].o)))->F_mover = (jref) (jobject(nullptr));
	LINE_NUMBER(956);
	((mindustry_gen_Bullet *) NULL_CHECK((frame[0].o)))->F_originX = (jfloat(0));
	LINE_NUMBER(957);
	((mindustry_gen_Bullet *) NULL_CHECK((frame[0].o)))->F_originY = (jfloat(0));
	LINE_NUMBER(958);
	((mindustry_gen_Bullet *) NULL_CHECK((frame[0].o)))->F_owner = (jref) (jobject(nullptr));
	LINE_NUMBER(959);
	((mindustry_gen_Bullet *) NULL_CHECK((frame[0].o)))->F_rotation = (jfloat(0));
	LINE_NUMBER(960);
	((mindustry_gen_Bullet *) NULL_CHECK((frame[0].o)))->F_shooter = (jref) (jobject(nullptr));
	LINE_NUMBER(961);
	((mindustry_gen_Bullet *) NULL_CHECK((frame[0].o)))->F_stickyRotation = (jfloat(0));
	LINE_NUMBER(962);
	((mindustry_gen_Bullet *) NULL_CHECK((frame[0].o)))->F_stickyRotationOffset = (jfloat(0));
	LINE_NUMBER(963);
	((mindustry_gen_Bullet *) NULL_CHECK((frame[0].o)))->F_stickyTarget = (jref) (jobject(nullptr));
	LINE_NUMBER(964);
	((mindustry_gen_Bullet *) NULL_CHECK((frame[0].o)))->F_stickyX = (jfloat(0));
	LINE_NUMBER(965);
	((mindustry_gen_Bullet *) NULL_CHECK((frame[0].o)))->F_stickyY = (jfloat(0));
	LINE_NUMBER(966);
	((mindustry_gen_Bullet *) NULL_CHECK((frame[0].o)))->F_time = (jfloat(0));
	LINE_NUMBER(967);
	((mindustry_gen_Bullet *) NULL_CHECK((frame[0].o)))->F_trail = (jref) (jobject(nullptr));
	LINE_NUMBER(968);
	((mindustry_gen_Bullet *) NULL_CHECK((frame[0].o)))->F_type = (jref) (jobject(nullptr));
	LINE_NUMBER(969);
	((mindustry_gen_Bullet *) NULL_CHECK((frame[0].o)))->F_x = (jfloat(0));
	LINE_NUMBER(970);
	((mindustry_gen_Bullet *) NULL_CHECK((frame[0].o)))->F_y = (jfloat(0));
	LINE_NUMBER(971);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_gen_Bullet_rotation_float(jcontext ctx, jobject self, jfloat param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/Bullet:rotation", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	{
	LINE_NUMBER(975);
	sp[0].o = (jobject)((mindustry_gen_Bullet *) NULL_CHECK((frame[0].o)))->F_vel;
	sp[1].o = frame[0].o;
	jfloat temp0 = frame[1].f;
	((mindustry_gen_Bullet *) NULL_CHECK(sp[1].o))->F_rotation = temp0;
	sp[0].o = (jobject)((func_arc_math_geom_Vec2_setAngle_float_R_arc_math_geom_Vec2) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Vec2_setAngle_float_R_arc_math_geom_Vec2])(ctx, sp[0].o, temp0);
	LINE_NUMBER(976);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_gen_Bullet_set_arc_math_geom_Position(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/Bullet:set", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(980);
	sp[0].o = frame[0].o;
	jfloat temp0 = (jfloat)((func_arc_math_geom_Position_getX_R_float) resolveInterfaceMethod(ctx, &class_arc_math_geom_Position, INDEX_arc_math_geom_Position_getX_R_float, (frame[1].o)))(ctx, (frame[1].o));
	jfloat temp1 = (jfloat)((func_arc_math_geom_Position_getY_R_float) resolveInterfaceMethod(ctx, &class_arc_math_geom_Position, INDEX_arc_math_geom_Position_getY_R_float, (frame[1].o)))(ctx, (frame[1].o));
	((func_mindustry_gen_Bullet_set_float_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_gen_Bullet_set_float_float])(ctx, sp[0].o, temp0, temp1);
	LINE_NUMBER(981);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_gen_Bullet_set_float_float(jcontext ctx, jobject self, jfloat param0, jfloat param1) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/Bullet:set", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	frame[2].f = param1;
	{
	LINE_NUMBER(985);
	((mindustry_gen_Bullet *) NULL_CHECK((frame[0].o)))->F_x = (frame[1].f);
	LINE_NUMBER(986);
	((mindustry_gen_Bullet *) NULL_CHECK((frame[0].o)))->F_y = (frame[2].f);
	LINE_NUMBER(987);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_gen_Bullet_setProp_mindustry_ctype_UnlockableContent_double(jcontext ctx, jobject self, jobject param0, jdouble param1) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/Bullet:setProp", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].d = param1;
	LINE_NUMBER(991);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_gen_Bullet_setProp_mindustry_logic_LAccess_double(jcontext ctx, jobject self, jobject param0, jdouble param1) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/Bullet:setProp", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].d = param1;
	{
	LINE_NUMBER(995);
	clinit_mindustry_gen_Bullet$1(ctx);
	sp[0].o = (jobject)SF_mindustry_gen_Bullet$1_$SwitchMap$mindustry$logic$LAccess;
	jint temp0 = (jint)((func_mindustry_logic_LAccess_ordinal_R_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_logic_LAccess_ordinal_R_int])(ctx, (frame[1].o));
	switch(((jint)ARRAY_ACCESS(jint, sp[0].o, temp0))) {
		case 1: goto label_1;
		case 2: goto label_2;
		case 3: goto label_3;
		case 4: goto label_4;
		case 5: goto label_5;
		case 6: goto label_6;
		case 7: goto label_7;
		case 8: goto label_3;
		case 9: goto label_8;
		case 10: goto label_3;
		case 11: goto label_3;
		case 12: goto label_3;
		case 13: goto label_9;
		case 14: goto label_3;
		case 15: goto label_3;
		case 16: goto label_10;
		case 17: goto label_11;
		default: goto label_3;
	}
	}
label_2:;
	{
	LINE_NUMBER(996);
	((mindustry_gen_Bullet *) NULL_CHECK((frame[0].o)))->F_damage = (jfloat((frame[2].d)));
	goto label_3;
	}
label_4:;
	{
	LINE_NUMBER(997);
	sp[0].o = frame[0].o;
	jfloat temp0 = (jfloat)SM_mindustry_core_World_unconv_float_R_float(ctx, (jfloat((frame[2].d))));
	((mindustry_gen_Bullet *) NULL_CHECK(sp[0].o))->F_x = temp0;
	goto label_3;
	}
label_5:;
	{
	LINE_NUMBER(998);
	sp[0].o = frame[0].o;
	jfloat temp0 = (jfloat)SM_mindustry_core_World_unconv_float_R_float(ctx, (jfloat((frame[2].d))));
	((mindustry_gen_Bullet *) NULL_CHECK(sp[0].o))->F_y = temp0;
	goto label_3;
	}
label_6:;
	{
	LINE_NUMBER(999);
	sp[0].o = (jobject)((mindustry_gen_Bullet *) NULL_CHECK((frame[0].o)))->F_vel;
	((arc_math_geom_Vec2 *) NULL_CHECK(sp[0].o))->F_x = (jfloat((((frame[2].d) * (jdouble(8.0))) / (jdouble(60.0)))));
	goto label_3;
	}
label_7:;
	{
	LINE_NUMBER(1000);
	sp[0].o = (jobject)((mindustry_gen_Bullet *) NULL_CHECK((frame[0].o)))->F_vel;
	((arc_math_geom_Vec2 *) NULL_CHECK(sp[0].o))->F_y = (jfloat((((frame[2].d) * (jdouble(8.0))) / (jdouble(60.0)))));
	goto label_3;
	}
label_1:;
	{
	LINE_NUMBER(1001);
	((mindustry_gen_Bullet *) NULL_CHECK((frame[0].o)))->F_rotation = (jfloat((frame[2].d)));
	goto label_3;
	}
label_8:;
	{
	LINE_NUMBER(1002);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)SM_mindustry_game_Team_get_int_R_mindustry_game_Team(ctx, (jint((frame[2].d))));
	((mindustry_gen_Bullet *) NULL_CHECK(sp[0].o))->F_team = (jref) sp[1].o;
	goto label_3;
	}
label_9:;
	{
	LINE_NUMBER(1003);
	sp[0].o = (jobject)((mindustry_gen_Bullet *) NULL_CHECK((frame[0].o)))->F_vel;
	sp[0].o = (jobject)((func_arc_math_geom_Vec2_setLength_float_R_arc_math_geom_Vec2) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Vec2_setLength_float_R_arc_math_geom_Vec2])(ctx, sp[0].o, ((jfloat((frame[2].d))) * (jfloat(8.0f))));
	goto label_3;
	}
label_10:;
	{
	LINE_NUMBER(1004);
	((mindustry_gen_Bullet *) NULL_CHECK((frame[0].o)))->F_lifetime = (jfloat((frame[2].d)));
	goto label_3;
	}
label_11:;
	{
	LINE_NUMBER(1005);
	((mindustry_gen_Bullet *) NULL_CHECK((frame[0].o)))->F_time = (jfloat((frame[2].d)));
	}
label_3:;
	LINE_NUMBER(1007);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_gen_Bullet_setProp_mindustry_logic_LAccess_java_lang_Object(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/Bullet:setProp", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(1011);
	clinit_mindustry_gen_Bullet$1(ctx);
	sp[0].o = (jobject)SF_mindustry_gen_Bullet$1_$SwitchMap$mindustry$logic$LAccess;
	jint temp0 = (jint)((func_mindustry_logic_LAccess_ordinal_R_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_logic_LAccess_ordinal_R_int])(ctx, (frame[1].o));
	switch(((jint)ARRAY_ACCESS(jint, sp[0].o, temp0))) {
		case 9: goto label_1;
		default: goto label_2;
	}
	}
label_1:;
	{
	LINE_NUMBER(1013);
	if ((isInstance(ctx, (frame[2].o), &class_mindustry_game_Team)) == 0) goto label_2;
	}
	{
	frame[3].o = (checkCast(ctx, &class_mindustry_game_Team, (frame[2].o)));
	LINE_NUMBER(1014);
	((mindustry_gen_Bullet *) NULL_CHECK((frame[0].o)))->F_team = (jref) (frame[3].o);
	}
label_2:;
	LINE_NUMBER(1018);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_gen_Bullet_stickTo_mindustry_gen_Posc(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/Bullet:stickTo", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(1022);
	sp[0].o = frame[0].o;
	jfloat temp0 = (jfloat)((mindustry_gen_Bullet *) NULL_CHECK(sp[0].o))->F_lifetime;
	sp[1].o = (jobject)((mindustry_gen_Bullet *) NULL_CHECK((frame[0].o)))->F_type;
	((mindustry_gen_Bullet *) NULL_CHECK(sp[0].o))->F_lifetime = (temp0 + ((jfloat)((mindustry_entities_bullet_BulletType *) NULL_CHECK(sp[1].o))->F_stickyExtraLifetime));
	LINE_NUMBER(1023);
	sp[0].o = frame[0].o;
	jfloat temp1 = (jfloat)((mindustry_gen_Bullet *) NULL_CHECK((frame[0].o)))->F_x;
	jfloat temp2 = (jfloat)((func_mindustry_gen_Posc_x_R_float) resolveInterfaceMethod(ctx, &class_mindustry_gen_Posc, INDEX_mindustry_gen_Posc_x_R_float, (frame[1].o)))(ctx, (frame[1].o));
	((mindustry_gen_Bullet *) NULL_CHECK(sp[0].o))->F_stickyX = (temp1 - temp2);
	LINE_NUMBER(1024);
	sp[0].o = frame[0].o;
	jfloat temp3 = (jfloat)((mindustry_gen_Bullet *) NULL_CHECK((frame[0].o)))->F_y;
	jfloat temp4 = (jfloat)((func_mindustry_gen_Posc_y_R_float) resolveInterfaceMethod(ctx, &class_mindustry_gen_Posc, INDEX_mindustry_gen_Posc_y_R_float, (frame[1].o)))(ctx, (frame[1].o));
	((mindustry_gen_Bullet *) NULL_CHECK(sp[0].o))->F_stickyY = (temp3 - temp4);
	LINE_NUMBER(1025);
	((mindustry_gen_Bullet *) NULL_CHECK((frame[0].o)))->F_stickyTarget = (jref) (frame[1].o);
	LINE_NUMBER(1026);
	((mindustry_gen_Bullet *) NULL_CHECK((frame[0].o)))->F_stickyRotationOffset = ((jfloat)((mindustry_gen_Bullet *) NULL_CHECK((frame[0].o)))->F_rotation);
	LINE_NUMBER(1027);
	sp[0].o = frame[0].o;
	sp += 1;
	if ((isInstance(ctx, (frame[1].o), &class_mindustry_gen_Rotc)) == 0) goto label_6;
	}
	{
	frame[2].o = (checkCast(ctx, &class_mindustry_gen_Rotc, (frame[1].o)));
	jfloat temp0 = (jfloat)((func_mindustry_gen_Rotc_rotation_R_float) resolveInterfaceMethod(ctx, &class_mindustry_gen_Rotc, INDEX_mindustry_gen_Rotc_rotation_R_float, (frame[2].o)))(ctx, (frame[2].o));
	sp[0].f = temp0;
	sp += 1;
	goto label_8;
	}
label_6:;
	INST_FCONST(0);
label_8:;
	{
	sp -= 2;
	((mindustry_gen_Bullet *) NULL_CHECK(sp[0].o))->F_stickyRotation = sp[1].f;
	LINE_NUMBER(1028);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_gen_Bullet_tileRaycast_int_int_int_int(jcontext ctx, jobject self, jint param0, jint param1, jint param2, jint param3) {
	NULL_CHECK(self);
	jtype frame[28];
	auto stack = &frame[19];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/Bullet:tileRaycast", 28 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].i = param1;
	frame[3].i = param2;
	frame[4].i = param3;
	{
	LINE_NUMBER(1032);
	frame[5].i = (frame[1].i);
	LINE_NUMBER(1033);
	jint temp0 = (jint)SM_java_lang_Math_abs_int_R_int(ctx, ((frame[3].i) - (frame[5].i)));
	frame[6].i = temp0;
	LINE_NUMBER(1034);
	if ((frame[5].i) >= (frame[3].i)) goto label_3;
	}
	INST_ICONST(1);
	goto label_4;
label_3:;
	INST_ICONST(-1);
label_4:;
	{
	sp -= 1;
	frame[7].i = sp[0].i;
	LINE_NUMBER(1035);
	frame[8].i = (frame[2].i);
	LINE_NUMBER(1036);
	jint temp0 = (jint)SM_java_lang_Math_abs_int_R_int(ctx, ((frame[4].i) - (frame[8].i)));
	frame[9].i = temp0;
	LINE_NUMBER(1037);
	if ((frame[8].i) >= (frame[4].i)) goto label_8;
	}
	INST_ICONST(1);
	goto label_9;
label_8:;
	INST_ICONST(-1);
label_9:;
	{
	sp -= 1;
	frame[10].i = sp[0].i;
	LINE_NUMBER(1039);
	frame[12].i = ((frame[6].i) - (frame[9].i));
	LINE_NUMBER(1040);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_world;
	jint temp0 = (jint)((func_mindustry_core_World_width_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_World_width_R_int])(ctx, sp[0].o);
	frame[13].i = temp0;
	LINE_NUMBER(1041);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_world;
	jint temp1 = (jint)((func_mindustry_core_World_height_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_World_height_R_int])(ctx, sp[0].o);
	frame[14].i = temp1;
	}
label_13:;
	{
	LINE_NUMBER(1042);
	if ((frame[5].i) < 0) goto label_14;
	}
	INST_ILOAD(8);
	if ((--sp)->i < 0) goto label_14;
	{
	if ((frame[5].i) >= (frame[13].i)) goto label_14;
	}
	{
	if ((frame[8].i) >= (frame[14].i)) goto label_14;
	}
	{
	LINE_NUMBER(1043);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_world;
	sp[0].o = (jobject)((func_mindustry_core_World_build_int_int_R_mindustry_gen_Building) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_World_build_int_int_R_mindustry_gen_Building])(ctx, sp[0].o, (frame[5].i), (frame[8].i));
	frame[15].o = sp[0].o;
	LINE_NUMBER(1044);
	sp[0].o = (jobject)((mindustry_gen_Bullet *) NULL_CHECK((frame[0].o)))->F_type;
	if (((jint)((mindustry_entities_bullet_BulletType *) NULL_CHECK(sp[0].o))->F_collideFloor) != 0) goto label_17;
	}
	{
	sp[0].o = (jobject)((mindustry_gen_Bullet *) NULL_CHECK((frame[0].o)))->F_type;
	if (((jint)((mindustry_entities_bullet_BulletType *) NULL_CHECK(sp[0].o))->F_collideTerrain) == 0) goto label_18;
	}
label_17:;
	{
	LINE_NUMBER(1045);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_world;
	sp[0].o = (jobject)((func_mindustry_core_World_tile_int_int_R_mindustry_world_Tile) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_World_tile_int_int_R_mindustry_world_Tile])(ctx, sp[0].o, (frame[5].i), (frame[8].i));
	frame[16].o = sp[0].o;
	LINE_NUMBER(1046);
	sp[0].o = (jobject)((mindustry_gen_Bullet *) NULL_CHECK((frame[0].o)))->F_type;
	if (((jint)((mindustry_entities_bullet_BulletType *) NULL_CHECK(sp[0].o))->F_collideFloor) == 0) goto label_20;
	}
	INST_ALOAD(16);
	if ((--sp)->o == nullptr) goto label_21;
	{
	sp[0].o = (jobject)((func_mindustry_world_Tile_floor_R_mindustry_world_blocks_environment_Floor) ((void **) nullCheck(ctx, (frame[16].o))->vtable)[VTABLE_mindustry_world_Tile_floor_R_mindustry_world_blocks_environment_Floor])(ctx, (frame[16].o));
	jint temp0 = (jint)((func_mindustry_world_blocks_environment_Floor_hasSurface_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_blocks_environment_Floor_hasSurface_R_boolean])(ctx, sp[0].o);
	if (temp0 != 0) goto label_21;
	}
	{
	sp[0].o = (jobject)((func_mindustry_world_Tile_block_R_mindustry_world_Block) ((void **) nullCheck(ctx, (frame[16].o))->vtable)[VTABLE_mindustry_world_Tile_block_R_mindustry_world_Block])(ctx, (frame[16].o));
	clinit_mindustry_content_Blocks(ctx);
	sp[1].o = (jobject)SF_mindustry_content_Blocks_air;
	if (sp[0].o != sp[1].o) goto label_21;
	}
label_20:;
	{
	sp[0].o = (jobject)((mindustry_gen_Bullet *) NULL_CHECK((frame[0].o)))->F_type;
	if (((jint)((mindustry_entities_bullet_BulletType *) NULL_CHECK(sp[0].o))->F_collideTerrain) == 0) goto label_18;
	}
	INST_ALOAD(16);
	if ((--sp)->o == nullptr) goto label_18;
	{
	sp[0].o = (jobject)((func_mindustry_world_Tile_block_R_mindustry_world_Block) ((void **) nullCheck(ctx, (frame[16].o))->vtable)[VTABLE_mindustry_world_Tile_block_R_mindustry_world_Block])(ctx, (frame[16].o));
	if ((isInstance(ctx, sp[0].o, &class_mindustry_world_blocks_environment_StaticWall)) == 0) goto label_18;
	}
label_21:;
	{
	LINE_NUMBER(1047);
	((func_mindustry_gen_Bullet_remove) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_gen_Bullet_remove])(ctx, (frame[0].o));
	LINE_NUMBER(1048);
	((mindustry_gen_Bullet *) NULL_CHECK((frame[0].o)))->F_hit = (jint(1));
	LINE_NUMBER(1049);
	popStackFrame(ctx);
	return;
	}
label_18:;
	{
	LINE_NUMBER(1052);
	if ((frame[15].o) == nullptr) goto label_24;
	}
	{
	jint temp0 = (jint)((func_mindustry_gen_Bullet_isAdded_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_gen_Bullet_isAdded_R_boolean])(ctx, (frame[0].o));
	if (temp0 == 0) goto label_24;
	}
	{
	jint temp0 = (jint)((func_mindustry_gen_Bullet_checkUnderBuild_mindustry_gen_Building_float_float_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_gen_Bullet_checkUnderBuild_mindustry_gen_Building_float_float_R_boolean])(ctx, (frame[0].o), (frame[15].o), (jfloat(((frame[5].i) * (8)))), (jfloat(((frame[8].i) * (8)))));
	if (temp0 == 0) goto label_24;
	}
	{
	jint temp0 = (jint)((func_mindustry_gen_Building_collide_mindustry_gen_Bullet_R_boolean) ((void **) nullCheck(ctx, (frame[15].o))->vtable)[VTABLE_mindustry_gen_Building_collide_mindustry_gen_Bullet_R_boolean])(ctx, (frame[15].o), (frame[0].o));
	if (temp0 == 0) goto label_24;
	}
	{
	sp[0].o = (jobject)((mindustry_gen_Bullet *) NULL_CHECK((frame[0].o)))->F_type;
	jint temp0 = (jint)((func_mindustry_entities_bullet_BulletType_testCollision_mindustry_gen_Bullet_mindustry_gen_Building_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_entities_bullet_BulletType_testCollision_mindustry_gen_Bullet_mindustry_gen_Building_R_boolean])(ctx, sp[0].o, (frame[0].o), (frame[15].o));
	if (temp0 == 0) goto label_24;
	}
	{
	jint temp0 = (jint)((func_mindustry_gen_Building_dead_R_boolean) ((void **) nullCheck(ctx, (frame[15].o))->vtable)[VTABLE_mindustry_gen_Building_dead_R_boolean])(ctx, (frame[15].o));
	if (temp0 != 0) goto label_24;
	}
	{
	sp[0].o = (jobject)((mindustry_gen_Bullet *) NULL_CHECK((frame[0].o)))->F_type;
	if (((jint)((mindustry_entities_bullet_BulletType *) NULL_CHECK(sp[0].o))->F_collidesTeam) != 0) goto label_25;
	}
	{
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[15].o)))->F_team;
	sp[1].o = (jobject)((mindustry_gen_Bullet *) NULL_CHECK((frame[0].o)))->F_team;
	if (sp[0].o == sp[1].o) goto label_24;
	}
label_25:;
	{
	sp[0].o = (jobject)((mindustry_gen_Bullet *) NULL_CHECK((frame[0].o)))->F_type;
	if (((jint)((mindustry_entities_bullet_BulletType *) NULL_CHECK(sp[0].o))->F_pierceBuilding) == 0) goto label_26;
	}
	{
	jint temp0 = (jint)((func_mindustry_gen_Bullet_hasCollided_int_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_gen_Bullet_hasCollided_int_R_boolean])(ctx, (frame[0].o), ((jint)((mindustry_gen_Building *) NULL_CHECK((frame[15].o)))->F_id));
	if (temp0 != 0) goto label_24;
	}
label_26:;
	{
	LINE_NUMBER(1053);
	sp[0].o = (jobject)((mindustry_gen_Bullet *) NULL_CHECK((frame[0].o)))->F_type;
	if (((jint)((mindustry_entities_bullet_BulletType *) NULL_CHECK(sp[0].o))->F_sticky) == 0) goto label_27;
	}
	{
	LINE_NUMBER(1054);
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[15].o)))->F_team;
	sp[1].o = (jobject)((mindustry_gen_Bullet *) NULL_CHECK((frame[0].o)))->F_team;
	if (sp[0].o == sp[1].o) goto label_24;
	}
	{
	LINE_NUMBER(1055);
	jfloat temp0 = (jfloat)((mindustry_gen_Bullet *) NULL_CHECK((frame[0].o)))->F_lastX;
	jfloat temp1 = (jfloat)((mindustry_gen_Bullet *) NULL_CHECK((frame[0].o)))->F_lastY;
	jfloat temp2 = jfloat((frame[5].i));
	jfloat temp3 = jfloat((frame[8].i));
	clinit_arc_util_Tmp(ctx);
	sp[0].o = (jobject)SF_arc_util_Tmp_r1;
	sp[0].o = (jobject)((func_arc_math_geom_Rect_setCentered_float_float_float_float_R_arc_math_geom_Rect) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Rect_setCentered_float_float_float_float_R_arc_math_geom_Rect])(ctx, sp[0].o, (jfloat(((frame[5].i) * (8)))), (jfloat(((frame[8].i) * (8)))), (jfloat(8.0f)), (jfloat(8.0f)));
	sp[0].o = (jobject)SM_arc_math_geom_Geometry_raycastRect_float_float_float_float_arc_math_geom_Rect_R_arc_math_geom_Vec2(ctx, temp0, temp1, temp2, temp3, sp[0].o);
	frame[16].o = sp[0].o;
	LINE_NUMBER(1056);
	if ((frame[16].o) == nullptr) goto label_31;
	}
	{
	LINE_NUMBER(1057);
	((mindustry_gen_Bullet *) NULL_CHECK((frame[0].o)))->F_x = ((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK((frame[16].o)))->F_x);
	LINE_NUMBER(1058);
	((mindustry_gen_Bullet *) NULL_CHECK((frame[0].o)))->F_y = ((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK((frame[16].o)))->F_y);
	}
label_31:;
	{
	LINE_NUMBER(1060);
	((func_mindustry_gen_Bullet_stickTo_mindustry_gen_Posc) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_gen_Bullet_stickTo_mindustry_gen_Posc])(ctx, (frame[0].o), (frame[15].o));
	LINE_NUMBER(1061);
	popStackFrame(ctx);
	return;
	}
label_27:;
	{
	LINE_NUMBER(1064);
	frame[16].i = (jint(0));
	LINE_NUMBER(1065);
	frame[17].i = (jint(0));
	LINE_NUMBER(1066);
	frame[18].f = ((jfloat)((mindustry_gen_Building *) NULL_CHECK((frame[15].o)))->F_health);
	LINE_NUMBER(1067);
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[15].o)))->F_team;
	sp[1].o = (jobject)((mindustry_gen_Bullet *) NULL_CHECK((frame[0].o)))->F_team;
	if (sp[0].o == sp[1].o) goto label_38;
	}
	{
	LINE_NUMBER(1068);
	jint temp0 = (jint)((func_mindustry_gen_Building_collision_mindustry_gen_Bullet_R_boolean) ((void **) nullCheck(ctx, (frame[15].o))->vtable)[VTABLE_mindustry_gen_Building_collision_mindustry_gen_Bullet_R_boolean])(ctx, (frame[15].o), (frame[0].o));
	frame[16].i = temp0;
	}
label_38:;
	{
	LINE_NUMBER(1070);
	if ((frame[16].i) != 0) goto label_40;
	}
	{
	sp[0].o = (jobject)((mindustry_gen_Bullet *) NULL_CHECK((frame[0].o)))->F_type;
	if (((jint)((mindustry_entities_bullet_BulletType *) NULL_CHECK(sp[0].o))->F_collidesTeam) == 0) goto label_41;
	}
label_40:;
	{
	LINE_NUMBER(1071);
	jfloat temp0 = (jfloat)SM_arc_math_Mathf_dst2_float_float_float_float_R_float(ctx, ((jfloat)((mindustry_gen_Bullet *) NULL_CHECK((frame[0].o)))->F_lastX), ((jfloat)((mindustry_gen_Bullet *) NULL_CHECK((frame[0].o)))->F_lastY), (jfloat(((frame[5].i) * (8)))), (jfloat(((frame[8].i) * (8)))));
	jfloat temp1 = (jfloat)SM_arc_math_Mathf_dst2_float_float_float_float_R_float(ctx, ((jfloat)((mindustry_gen_Bullet *) NULL_CHECK((frame[0].o)))->F_lastX), ((jfloat)((mindustry_gen_Bullet *) NULL_CHECK((frame[0].o)))->F_lastY), ((jfloat)((mindustry_gen_Bullet *) NULL_CHECK((frame[0].o)))->F_x), ((jfloat)((mindustry_gen_Bullet *) NULL_CHECK((frame[0].o)))->F_y));
	if ((floatCompare(temp0, temp1, 1)) >= 0) goto label_42;
	}
	{
	LINE_NUMBER(1072);
	((mindustry_gen_Bullet *) NULL_CHECK((frame[0].o)))->F_x = (jfloat(((frame[5].i) * (8))));
	LINE_NUMBER(1073);
	((mindustry_gen_Bullet *) NULL_CHECK((frame[0].o)))->F_y = (jfloat(((frame[8].i) * (8))));
	}
label_42:;
	{
	LINE_NUMBER(1075);
	sp[0].o = (jobject)((mindustry_gen_Bullet *) NULL_CHECK((frame[0].o)))->F_type;
	if (((jint)((mindustry_entities_bullet_BulletType *) NULL_CHECK(sp[0].o))->F_pierceBuilding) != 0) goto label_45;
	}
	{
	LINE_NUMBER(1076);
	((mindustry_gen_Bullet *) NULL_CHECK((frame[0].o)))->F_hit = (jint(1));
	LINE_NUMBER(1077);
	frame[17].i = (jint(1));
	goto label_41;
	}
label_45:;
	{
	LINE_NUMBER(1079);
	sp[0].o = (jobject)((mindustry_gen_Bullet *) NULL_CHECK((frame[0].o)))->F_collided;
	((func_arc_struct_IntSeq_add_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_IntSeq_add_int])(ctx, sp[0].o, ((jint)((mindustry_gen_Building *) NULL_CHECK((frame[15].o)))->F_id));
	}
label_41:;
	{
	LINE_NUMBER(1082);
	sp[0].o = (jobject)((mindustry_gen_Bullet *) NULL_CHECK((frame[0].o)))->F_type;
	((func_mindustry_entities_bullet_BulletType_hitTile_mindustry_gen_Bullet_mindustry_gen_Building_float_float_float_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_entities_bullet_BulletType_hitTile_mindustry_gen_Bullet_mindustry_gen_Building_float_float_float_boolean])(ctx, sp[0].o, (frame[0].o), (frame[15].o), (jfloat(((frame[5].i) * (8)))), (jfloat(((frame[8].i) * (8)))), (frame[18].f), (jint(1)));
	LINE_NUMBER(1083);
	if ((frame[17].i) == 0) goto label_49;
	}
	{
	LINE_NUMBER(1084);
	((func_mindustry_gen_Bullet_remove) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_gen_Bullet_remove])(ctx, (frame[0].o));
	}
label_49:;
	{
	LINE_NUMBER(1086);
	sp[0].o = (jobject)((mindustry_gen_Bullet *) NULL_CHECK((frame[0].o)))->F_type;
	if (((jint)((mindustry_entities_bullet_BulletType *) NULL_CHECK(sp[0].o))->F_laserBullet) == 0) goto label_51;
	}
	{
	jint temp0 = (jint)((func_mindustry_gen_Building_absorbLasers_R_boolean) ((void **) nullCheck(ctx, (frame[15].o))->vtable)[VTABLE_mindustry_gen_Building_absorbLasers_R_boolean])(ctx, (frame[15].o));
	if (temp0 == 0) goto label_51;
	}
	{
	LINE_NUMBER(1087);
	((mindustry_gen_Bullet *) NULL_CHECK((frame[0].o)))->F_hit = (jint(1));
	LINE_NUMBER(1088);
	((func_mindustry_gen_Bullet_remove) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_gen_Bullet_remove])(ctx, (frame[0].o));
	LINE_NUMBER(1089);
	popStackFrame(ctx);
	return;
	}
label_51:;
	{
	LINE_NUMBER(1091);
	sp[0].o = (jobject)((mindustry_gen_Bullet *) NULL_CHECK((frame[0].o)))->F_type;
	if (((jint)((mindustry_entities_bullet_BulletType *) NULL_CHECK(sp[0].o))->F_pierceBuilding) == 0) goto label_24;
	}
	popStackFrame(ctx);
	INST_RETURN();
label_24:;
	{
	LINE_NUMBER(1094);
	if ((frame[5].i) != (frame[3].i)) goto label_55;
	}
	{
	if ((frame[8].i) != (frame[4].i)) goto label_55;
	}
	goto label_14;
label_55:;
	{
	LINE_NUMBER(1095);
	frame[11].i = ((jint(2)) * (frame[12].i));
	LINE_NUMBER(1096);
	if ((frame[11].i) <= (-(frame[9].i))) goto label_57;
	}
	{
	LINE_NUMBER(1097);
	frame[12].i = ((frame[12].i) - (frame[9].i));
	LINE_NUMBER(1098);
	frame[5].i = ((frame[5].i) + (frame[7].i));
	}
label_57:;
	{
	LINE_NUMBER(1100);
	if ((frame[11].i) >= (frame[6].i)) goto label_60;
	}
	{
	LINE_NUMBER(1101);
	frame[12].i = ((frame[12].i) + (frame[6].i));
	LINE_NUMBER(1102);
	frame[8].i = ((frame[8].i) + (frame[10].i));
	}
label_60:;
	LINE_NUMBER(1104);
	goto label_13;
label_14:;
	LINE_NUMBER(1105);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_gen_Bullet_trns_arc_math_geom_Position(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/Bullet:trns", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(1109);
	sp[0].o = frame[0].o;
	jfloat temp0 = (jfloat)((func_arc_math_geom_Position_getX_R_float) resolveInterfaceMethod(ctx, &class_arc_math_geom_Position, INDEX_arc_math_geom_Position_getX_R_float, (frame[1].o)))(ctx, (frame[1].o));
	jfloat temp1 = (jfloat)((func_arc_math_geom_Position_getY_R_float) resolveInterfaceMethod(ctx, &class_arc_math_geom_Position, INDEX_arc_math_geom_Position_getY_R_float, (frame[1].o)))(ctx, (frame[1].o));
	((func_mindustry_gen_Bullet_trns_float_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_gen_Bullet_trns_float_float])(ctx, sp[0].o, temp0, temp1);
	LINE_NUMBER(1110);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_gen_Bullet_trns_float_float(jcontext ctx, jobject self, jfloat param0, jfloat param1) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/Bullet:trns", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	frame[2].f = param1;
	{
	LINE_NUMBER(1114);
	((func_mindustry_gen_Bullet_set_float_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_gen_Bullet_set_float_float])(ctx, (frame[0].o), (((jfloat)((mindustry_gen_Bullet *) NULL_CHECK((frame[0].o)))->F_x) + (frame[1].f)), (((jfloat)((mindustry_gen_Bullet *) NULL_CHECK((frame[0].o)))->F_y) + (frame[2].f)));
	LINE_NUMBER(1115);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_gen_Bullet_turn_float_float(jcontext ctx, jobject self, jfloat param0, jfloat param1) {
	NULL_CHECK(self);
	jtype frame[10];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/Bullet:turn", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	frame[2].f = param1;
	{
	LINE_NUMBER(1119);
	sp[0].o = (jobject)((mindustry_gen_Bullet *) NULL_CHECK((frame[0].o)))->F_vel;
	jfloat temp0 = (jfloat)((func_arc_math_geom_Vec2_angle_R_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Vec2_angle_R_float])(ctx, sp[0].o);
	frame[3].f = temp0;
	LINE_NUMBER(1120);
	sp[0].o = (jobject)((mindustry_gen_Bullet *) NULL_CHECK((frame[0].o)))->F_vel;
	jfloat temp1 = (jfloat)SM_arc_math_Angles_trnsx_float_float_float_R_float(ctx, (frame[3].f), ((frame[1].f) * (clinit_arc_util_Time(ctx), (jfloat)SF_arc_util_Time_delta)), ((frame[2].f) * (clinit_arc_util_Time(ctx), (jfloat)SF_arc_util_Time_delta)));
	jfloat temp2 = (jfloat)SM_arc_math_Angles_trnsy_float_float_float_R_float(ctx, (frame[3].f), ((frame[1].f) * (clinit_arc_util_Time(ctx), (jfloat)SF_arc_util_Time_delta)), ((frame[2].f) * (clinit_arc_util_Time(ctx), (jfloat)SF_arc_util_Time_delta)));
	sp[0].o = (jobject)((func_arc_math_geom_Vec2_add_float_float_R_arc_math_geom_Vec2) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Vec2_add_float_float_R_arc_math_geom_Vec2])(ctx, sp[0].o, temp1, temp2);
	sp[1].o = (jobject)((mindustry_gen_Bullet *) NULL_CHECK((frame[0].o)))->F_type;
	sp[0].o = (jobject)((func_arc_math_geom_Vec2_limit_float_R_arc_math_geom_Vec2) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Vec2_limit_float_R_arc_math_geom_Vec2])(ctx, sp[0].o, ((jfloat)((mindustry_entities_bullet_BulletType *) NULL_CHECK(sp[1].o))->F_speed));
	LINE_NUMBER(1121);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_gen_Bullet_update(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[10];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/Bullet:update", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(1126);
	if (((jint)((mindustry_gen_Bullet *) NULL_CHECK((frame[0].o)))->F_justSpawned) != 0) goto label_1;
	}
	{
	LINE_NUMBER(1127);
	sp[0].o = frame[0].o;
	jfloat temp0 = (jfloat)((mindustry_gen_Bullet *) NULL_CHECK(sp[0].o))->F_x;
	sp[1].o = (jobject)((mindustry_gen_Bullet *) NULL_CHECK((frame[0].o)))->F_vel;
	((mindustry_gen_Bullet *) NULL_CHECK(sp[0].o))->F_x = (temp0 + (((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK(sp[1].o))->F_x) * (clinit_arc_util_Time(ctx), (jfloat)SF_arc_util_Time_delta)));
	LINE_NUMBER(1128);
	sp[0].o = frame[0].o;
	jfloat temp1 = (jfloat)((mindustry_gen_Bullet *) NULL_CHECK(sp[0].o))->F_y;
	sp[1].o = (jobject)((mindustry_gen_Bullet *) NULL_CHECK((frame[0].o)))->F_vel;
	((mindustry_gen_Bullet *) NULL_CHECK(sp[0].o))->F_y = (temp1 + (((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK(sp[1].o))->F_y) * (clinit_arc_util_Time(ctx), (jfloat)SF_arc_util_Time_delta)));
	LINE_NUMBER(1129);
	sp[0].o = (jobject)((mindustry_gen_Bullet *) NULL_CHECK((frame[0].o)))->F_vel;
	jfloat temp2 = jfloat(1);
	sp[1].o = (jobject)((mindustry_gen_Bullet *) NULL_CHECK((frame[0].o)))->F_type;
	jfloat temp3 = (jfloat)SM_java_lang_Math_max_float_float_R_float(ctx, (temp2 - (((jfloat)((mindustry_entities_bullet_BulletType *) NULL_CHECK(sp[1].o))->F_drag) * (clinit_arc_util_Time(ctx), (jfloat)SF_arc_util_Time_delta))), (jfloat(0)));
	sp[0].o = (jobject)((func_arc_math_geom_Vec2_scl_float_R_arc_math_geom_Vec2) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Vec2_scl_float_R_arc_math_geom_Vec2])(ctx, sp[0].o, temp3);
	}
label_1:;
	{
	LINE_NUMBER(1131);
	((mindustry_gen_Bullet *) NULL_CHECK((frame[0].o)))->F_justSpawned = (jint(0));
	LINE_NUMBER(1132);
	sp[0].o = (jobject)((mindustry_gen_Bullet *) NULL_CHECK((frame[0].o)))->F_mover;
	if (sp[0].o == nullptr) goto label_6;
	}
	{
	LINE_NUMBER(1133);
	sp[0].o = (jobject)((mindustry_gen_Bullet *) NULL_CHECK((frame[0].o)))->F_mover;
	((func_mindustry_entities_Mover_move_mindustry_gen_Bullet) resolveInterfaceMethod(ctx, &class_mindustry_entities_Mover, INDEX_mindustry_entities_Mover_move_mindustry_gen_Bullet, sp[0].o))(ctx, sp[0].o, (frame[0].o));
	}
label_6:;
	{
	LINE_NUMBER(1135);
	sp[0].o = (jobject)((mindustry_gen_Bullet *) NULL_CHECK((frame[0].o)))->F_type;
	if ((floatCompare(((jfloat)((mindustry_entities_bullet_BulletType *) NULL_CHECK(sp[0].o))->F_accel), (jfloat(0)), -1)) == 0) goto label_8;
	}
	{
	LINE_NUMBER(1136);
	sp[0].o = (jobject)((mindustry_gen_Bullet *) NULL_CHECK((frame[0].o)))->F_vel;
	sp[1].o = (jobject)((mindustry_gen_Bullet *) NULL_CHECK((frame[0].o)))->F_vel;
	jfloat temp0 = (jfloat)((func_arc_math_geom_Vec2_len_R_float) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_math_geom_Vec2_len_R_float])(ctx, sp[1].o);
	sp[1].o = (jobject)((mindustry_gen_Bullet *) NULL_CHECK((frame[0].o)))->F_type;
	sp[0].o = (jobject)((func_arc_math_geom_Vec2_setLength_float_R_arc_math_geom_Vec2) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Vec2_setLength_float_R_arc_math_geom_Vec2])(ctx, sp[0].o, (temp0 + (((jfloat)((mindustry_entities_bullet_BulletType *) NULL_CHECK(sp[1].o))->F_accel) * (clinit_arc_util_Time(ctx), (jfloat)SF_arc_util_Time_delta))));
	}
label_8:;
	{
	LINE_NUMBER(1138);
	sp[0].o = (jobject)((mindustry_gen_Bullet *) NULL_CHECK((frame[0].o)))->F_type;
	((func_mindustry_entities_bullet_BulletType_update_mindustry_gen_Bullet) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_entities_bullet_BulletType_update_mindustry_gen_Bullet])(ctx, sp[0].o, (frame[0].o));
	LINE_NUMBER(1139);
	sp[0].o = (jobject)((mindustry_gen_Bullet *) NULL_CHECK((frame[0].o)))->F_stickyTarget;
	if (sp[0].o == nullptr) goto label_11;
	}
	{
	LINE_NUMBER(1140);
	sp[0].o = (jobject)((mindustry_gen_Bullet *) NULL_CHECK((frame[0].o)))->F_stickyTarget;
	frame[2].o = sp[0].o;
	if ((isInstance(ctx, (frame[2].o), &class_mindustry_gen_Healthc)) == 0) goto label_13;
	}
	{
	frame[1].o = (checkCast(ctx, &class_mindustry_gen_Healthc, (frame[2].o)));
	jint temp0 = (jint)((func_mindustry_gen_Healthc_isValid_R_boolean) resolveInterfaceMethod(ctx, &class_mindustry_gen_Healthc, INDEX_mindustry_gen_Healthc_isValid_R_boolean, (frame[1].o)))(ctx, (frame[1].o));
	if (temp0 == 0) goto label_13;
	}
	{
	LINE_NUMBER(1141);
	sp[0].o = (jobject)((mindustry_gen_Bullet *) NULL_CHECK((frame[0].o)))->F_stickyTarget;
	frame[4].o = sp[0].o;
	if ((isInstance(ctx, (frame[4].o), &class_mindustry_gen_Rotc)) == 0) goto label_16;
	}
	{
	frame[3].o = (checkCast(ctx, &class_mindustry_gen_Rotc, (frame[4].o)));
	jfloat temp0 = (jfloat)((func_mindustry_gen_Rotc_rotation_R_float) resolveInterfaceMethod(ctx, &class_mindustry_gen_Rotc, INDEX_mindustry_gen_Rotc_rotation_R_float, (frame[3].o)))(ctx, (frame[3].o));
	jfloat temp1 = temp0 - ((jfloat)((mindustry_gen_Bullet *) NULL_CHECK((frame[0].o)))->F_stickyRotation);
	sp[0].f = temp1;
	sp += 1;
	goto label_18;
	}
label_16:;
	INST_FCONST(0);
label_18:;
	{
	sp -= 1;
	frame[2].f = sp[0].f;
	LINE_NUMBER(1142);
	sp[0].o = frame[0].o;
	clinit_arc_util_Tmp(ctx);
	sp[1].o = (jobject)SF_arc_util_Tmp_v1;
	sp[1].o = (jobject)((func_arc_math_geom_Vec2_set_float_float_R_arc_math_geom_Vec2) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_math_geom_Vec2_set_float_float_R_arc_math_geom_Vec2])(ctx, sp[1].o, ((jfloat)((mindustry_gen_Bullet *) NULL_CHECK((frame[0].o)))->F_stickyX), ((jfloat)((mindustry_gen_Bullet *) NULL_CHECK((frame[0].o)))->F_stickyY));
	sp[1].o = (jobject)((func_arc_math_geom_Vec2_rotate_float_R_arc_math_geom_Vec2) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_math_geom_Vec2_rotate_float_R_arc_math_geom_Vec2])(ctx, sp[1].o, (frame[2].f));
	sp[2].o = (jobject)((mindustry_gen_Bullet *) NULL_CHECK((frame[0].o)))->F_stickyTarget;
	sp[1].o = (jobject)((func_arc_math_geom_Vec2_add_arc_math_geom_Position_R_arc_math_geom_Vec2) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_math_geom_Vec2_add_arc_math_geom_Position_R_arc_math_geom_Vec2])(ctx, sp[1].o, sp[2].o);
	((func_mindustry_gen_Bullet_set_arc_math_geom_Position) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_gen_Bullet_set_arc_math_geom_Position])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(1143);
	((mindustry_gen_Bullet *) NULL_CHECK((frame[0].o)))->F_rotation = ((frame[2].f) + ((jfloat)((mindustry_gen_Bullet *) NULL_CHECK((frame[0].o)))->F_stickyRotationOffset));
	LINE_NUMBER(1144);
	sp[0].o = (jobject)((mindustry_gen_Bullet *) NULL_CHECK((frame[0].o)))->F_vel;
	sp[0].o = (jobject)((func_arc_math_geom_Vec2_setAngle_float_R_arc_math_geom_Vec2) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Vec2_setAngle_float_R_arc_math_geom_Vec2])(ctx, sp[0].o, ((jfloat)((mindustry_gen_Bullet *) NULL_CHECK((frame[0].o)))->F_rotation));
	}
label_13:;
	LINE_NUMBER(1145);
	goto label_22;
label_11:;
	{
	LINE_NUMBER(1146);
	sp[0].o = (jobject)((mindustry_gen_Bullet *) NULL_CHECK((frame[0].o)))->F_type;
	if (((jint)((mindustry_entities_bullet_BulletType *) NULL_CHECK(sp[0].o))->F_collidesTiles) == 0) goto label_22;
	}
	{
	sp[0].o = (jobject)((mindustry_gen_Bullet *) NULL_CHECK((frame[0].o)))->F_type;
	if (((jint)((mindustry_entities_bullet_BulletType *) NULL_CHECK(sp[0].o))->F_collides) == 0) goto label_22;
	}
	{
	sp[0].o = (jobject)((mindustry_gen_Bullet *) NULL_CHECK((frame[0].o)))->F_type;
	if (((jint)((mindustry_entities_bullet_BulletType *) NULL_CHECK(sp[0].o))->F_collidesGround) == 0) goto label_22;
	}
	{
	LINE_NUMBER(1147);
	sp[0].o = frame[0].o;
	jint temp0 = (jint)SM_mindustry_core_World_toTile_float_R_int(ctx, ((jfloat)((mindustry_gen_Bullet *) NULL_CHECK((frame[0].o)))->F_lastX));
	jint temp1 = (jint)SM_mindustry_core_World_toTile_float_R_int(ctx, ((jfloat)((mindustry_gen_Bullet *) NULL_CHECK((frame[0].o)))->F_lastY));
	jint temp2 = (jint)((func_mindustry_gen_Bullet_tileX_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_gen_Bullet_tileX_R_int])(ctx, (frame[0].o));
	jint temp3 = (jint)((func_mindustry_gen_Bullet_tileY_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_gen_Bullet_tileY_R_int])(ctx, (frame[0].o));
	((func_mindustry_gen_Bullet_tileRaycast_int_int_int_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_gen_Bullet_tileRaycast_int_int_int_int])(ctx, sp[0].o, temp0, temp1, temp2, temp3);
	}
label_22:;
	{
	LINE_NUMBER(1149);
	sp[0].o = (jobject)((mindustry_gen_Bullet *) NULL_CHECK((frame[0].o)))->F_type;
	if (((jint)((mindustry_entities_bullet_BulletType *) NULL_CHECK(sp[0].o))->F_removeAfterPierce) == 0) goto label_24;
	}
	{
	sp[0].o = (jobject)((mindustry_gen_Bullet *) NULL_CHECK((frame[0].o)))->F_type;
	if (((jint)((mindustry_entities_bullet_BulletType *) NULL_CHECK(sp[0].o))->F_pierceCap) == (jint(-1))) goto label_24;
	}
	{
	sp[0].o = (jobject)((mindustry_gen_Bullet *) NULL_CHECK((frame[0].o)))->F_collided;
	jint temp0 = (jint)((arc_struct_IntSeq *) NULL_CHECK(sp[0].o))->F_size;
	sp[0].o = (jobject)((mindustry_gen_Bullet *) NULL_CHECK((frame[0].o)))->F_type;
	if (temp0 < ((jint)((mindustry_entities_bullet_BulletType *) NULL_CHECK(sp[0].o))->F_pierceCap)) goto label_24;
	}
	{
	LINE_NUMBER(1150);
	((mindustry_gen_Bullet *) NULL_CHECK((frame[0].o)))->F_hit = (jint(1));
	LINE_NUMBER(1151);
	((func_mindustry_gen_Bullet_remove) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_gen_Bullet_remove])(ctx, (frame[0].o));
	}
label_24:;
	{
	LINE_NUMBER(1153);
	if (((jint)((mindustry_gen_Bullet *) NULL_CHECK((frame[0].o)))->F_keepAlive) == 0) goto label_27;
	}
	{
	LINE_NUMBER(1154);
	sp[0].o = frame[0].o;
	((mindustry_gen_Bullet *) NULL_CHECK(sp[0].o))->F_time = (((jfloat)((mindustry_gen_Bullet *) NULL_CHECK(sp[0].o))->F_time) - (clinit_arc_util_Time(ctx), (jfloat)SF_arc_util_Time_delta));
	LINE_NUMBER(1155);
	((mindustry_gen_Bullet *) NULL_CHECK((frame[0].o)))->F_keepAlive = (jint(0));
	}
label_27:;
	{
	LINE_NUMBER(1166);
	sp[0].o = frame[0].o;
	jfloat temp0 = (jfloat)SM_java_lang_Math_min_float_float_R_float(ctx, (((jfloat)((mindustry_gen_Bullet *) NULL_CHECK((frame[0].o)))->F_time) + (clinit_arc_util_Time(ctx), (jfloat)SF_arc_util_Time_delta)), ((jfloat)((mindustry_gen_Bullet *) NULL_CHECK((frame[0].o)))->F_lifetime));
	((mindustry_gen_Bullet *) NULL_CHECK(sp[0].o))->F_time = temp0;
	LINE_NUMBER(1167);
	if ((floatCompare(((jfloat)((mindustry_gen_Bullet *) NULL_CHECK((frame[0].o)))->F_time), ((jfloat)((mindustry_gen_Bullet *) NULL_CHECK((frame[0].o)))->F_lifetime), -1)) < 0) goto label_31;
	}
	{
	LINE_NUMBER(1168);
	((func_mindustry_gen_Bullet_remove) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_gen_Bullet_remove])(ctx, (frame[0].o));
	}
label_31:;
	LINE_NUMBER(1171);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_gen_Bullet_updateLastPosition(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/Bullet:updateLastPosition", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(1175);
	((mindustry_gen_Bullet *) NULL_CHECK((frame[0].o)))->F_deltaX = (((jfloat)((mindustry_gen_Bullet *) NULL_CHECK((frame[0].o)))->F_x) - ((jfloat)((mindustry_gen_Bullet *) NULL_CHECK((frame[0].o)))->F_lastX));
	LINE_NUMBER(1176);
	((mindustry_gen_Bullet *) NULL_CHECK((frame[0].o)))->F_deltaY = (((jfloat)((mindustry_gen_Bullet *) NULL_CHECK((frame[0].o)))->F_y) - ((jfloat)((mindustry_gen_Bullet *) NULL_CHECK((frame[0].o)))->F_lastY));
	LINE_NUMBER(1177);
	((mindustry_gen_Bullet *) NULL_CHECK((frame[0].o)))->F_lastX = ((jfloat)((mindustry_gen_Bullet *) NULL_CHECK((frame[0].o)))->F_x);
	LINE_NUMBER(1178);
	((mindustry_gen_Bullet *) NULL_CHECK((frame[0].o)))->F_lastY = ((jfloat)((mindustry_gen_Bullet *) NULL_CHECK((frame[0].o)))->F_y);
	LINE_NUMBER(1179);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_gen_Bullet_write_arc_util_io_Writes(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/Bullet:write", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	LINE_NUMBER(1183);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_gen_Bullet_lambda$draw$0(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/Bullet:lambda$draw$0", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(856);
	sp[0].o = (jobject)((mindustry_gen_Bullet *) NULL_CHECK((frame[0].o)))->F_type;
	((func_mindustry_entities_bullet_BulletType_draw_mindustry_gen_Bullet) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_entities_bullet_BulletType_draw_mindustry_gen_Bullet])(ctx, sp[0].o, (frame[0].o));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

static void initAnnotations(jcontext ctx) {
	auto &clazz = class_mindustry_gen_Bullet;
	auto fields = (java_lang_reflect_Field **) ((jarray) clazz.fields)->data;
	auto methods = (java_lang_reflect_Method **) ((jarray) clazz.methods)->data;
	auto constructors = (java_lang_reflect_Constructor **) ((jarray) clazz.constructors)->data;

	fields[0]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[1]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	{ // Field aimTile
		auto annotationArray = (jarray) createArray(ctx, &class_java_lang_annotation_Annotation, 1);
		fields[2]->F_annotations = (intptr_t) annotationArray;
		auto annotations = (jobject *) annotationArray->data;
		annotations[0] = gcAlloc(ctx, &class_arc_util_Nullable);
	}

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

	{ // Field mover
		auto annotationArray = (jarray) createArray(ctx, &class_java_lang_annotation_Annotation, 1);
		fields[23]->F_annotations = (intptr_t) annotationArray;
		auto annotations = (jobject *) annotationArray->data;
		annotations[0] = gcAlloc(ctx, &class_arc_util_Nullable);
	}

	fields[24]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[25]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[26]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[27]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[28]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[29]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[30]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[31]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[32]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[33]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[34]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[35]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[36]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	{ // Field trail
		auto annotationArray = (jarray) createArray(ctx, &class_java_lang_annotation_Annotation, 1);
		fields[37]->F_annotations = (intptr_t) annotationArray;
		auto annotations = (jobject *) annotationArray->data;
		annotations[0] = gcAlloc(ctx, &class_arc_util_Nullable);
	}

	fields[38]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[39]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[40]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[41]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	((java_lang_reflect_Method *) ((java_lang_reflect_Constructor *) constructors[0])->F_method)->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	{ // Method buildOn
		auto annotationArray = (jarray) createArray(ctx, &class_java_lang_annotation_Annotation, 1);
		methods[0]->F_annotations = (intptr_t) annotationArray;
		auto annotations = (jobject *) annotationArray->data;
		annotations[0] = gcAlloc(ctx, &class_arc_util_Nullable);
	}

	{ // Method tileOn
		auto annotationArray = (jarray) createArray(ctx, &class_java_lang_annotation_Annotation, 1);
		methods[1]->F_annotations = (intptr_t) annotationArray;
		auto annotations = (jobject *) annotationArray->data;
		annotations[0] = gcAlloc(ctx, &class_arc_util_Nullable);
	}

	{ // Method closestCore
		auto annotationArray = (jarray) createArray(ctx, &class_java_lang_annotation_Annotation, 1);
		methods[2]->F_annotations = (intptr_t) annotationArray;
		auto annotations = (jobject *) annotationArray->data;
		annotations[0] = gcAlloc(ctx, &class_arc_util_Nullable);
	}

	{ // Method closestEnemyCore
		auto annotationArray = (jarray) createArray(ctx, &class_java_lang_annotation_Annotation, 1);
		methods[3]->F_annotations = (intptr_t) annotationArray;
		auto annotations = (jobject *) annotationArray->data;
		annotations[0] = gcAlloc(ctx, &class_arc_util_Nullable);
	}

	{ // Method core
		auto annotationArray = (jarray) createArray(ctx, &class_java_lang_annotation_Annotation, 1);
		methods[4]->F_annotations = (intptr_t) annotationArray;
		auto annotations = (jobject *) annotationArray->data;
		annotations[0] = gcAlloc(ctx, &class_arc_util_Nullable);
	}

	methods[5]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[6]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[7]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[8]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

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
}

void *vtable_mindustry_gen_Bullet[] {
	(void *) M_java_lang_Object_hashCode_R_int,
	(void *) M_java_lang_Object_equals_java_lang_Object_R_boolean,
	(void *) M_java_lang_Object_clone_R_java_lang_Object,
	(void *) M_java_lang_Object_getClass_R_java_lang_Class,
	(void *) M_mindustry_gen_Bullet_toString_R_java_lang_String,
	(void *) M_java_lang_Object_finalize,
	(void *) M_java_lang_Object_notify,
	(void *) M_java_lang_Object_notifyAll,
	(void *) M_java_lang_Object_wait,
	(void *) M_java_lang_Object_wait_long,
	(void *) M_java_lang_Object_wait_long_int,
	(void *) M_mindustry_gen_Bullet_reset,
	(void *) M_mindustry_gen_Bullet_self_R_mindustry_gen_Entityc,
	(void *) M_mindustry_gen_Bullet_as_R_java_lang_Object,
	(void *) M_mindustry_gen_Bullet_isAdded_R_boolean,
	(void *) M_mindustry_gen_Bullet_isLocal_R_boolean,
	(void *) M_mindustry_gen_Bullet_isRemote_R_boolean,
	(void *) M_mindustry_gen_Bullet_serialize_R_boolean,
	(void *) M_mindustry_gen_Bullet_classId_R_int,
	(void *) M_mindustry_gen_Bullet_id_R_int,
	(void *) M_mindustry_gen_Bullet_add,
	(void *) M_mindustry_gen_Bullet_afterRead,
	(void *) M_mindustry_gen_Bullet_afterReadAll,
	(void *) M_mindustry_gen_Bullet_beforeWrite,
	(void *) M_mindustry_gen_Bullet_id_int,
	(void *) M_mindustry_gen_Bullet_read_arc_util_io_Reads,
	(void *) M_mindustry_gen_Bullet_remove,
	(void *) M_mindustry_gen_Bullet_update,
	(void *) M_mindustry_gen_Bullet_write_arc_util_io_Writes,
	(void *) M_mindustry_gen_Bullet_damage_R_float,
	(void *) M_mindustry_gen_Bullet_damage_float,
	(void *) M_mindustry_gen_Bullet_getX_R_float,
	(void *) M_mindustry_gen_Bullet_getY_R_float,
	(void *) M_arc_math_geom_Position_angleTo_arc_math_geom_Position_R_float,
	(void *) M_arc_math_geom_Position_angleTo_float_float_R_float,
	(void *) M_arc_math_geom_Position_dst2_arc_math_geom_Position_R_float,
	(void *) M_arc_math_geom_Position_dst_arc_math_geom_Position_R_float,
	(void *) M_arc_math_geom_Position_dst_float_float_R_float,
	(void *) M_arc_math_geom_Position_dst2_float_float_R_float,
	(void *) M_arc_math_geom_Position_within_arc_math_geom_Position_float_R_boolean,
	(void *) M_arc_math_geom_Position_within_float_float_float_R_boolean,
	(void *) M_mindustry_gen_Bullet_floorOn_R_mindustry_world_blocks_environment_Floor,
	(void *) M_mindustry_gen_Bullet_buildOn_R_mindustry_gen_Building,
	(void *) M_mindustry_gen_Bullet_onSolid_R_boolean,
	(void *) M_mindustry_gen_Bullet_x_R_float,
	(void *) M_mindustry_gen_Bullet_y_R_float,
	(void *) M_mindustry_gen_Bullet_tileX_R_int,
	(void *) M_mindustry_gen_Bullet_tileY_R_int,
	(void *) M_mindustry_gen_Bullet_blockOn_R_mindustry_world_Block,
	(void *) M_mindustry_gen_Bullet_tileOn_R_mindustry_world_Tile,
	(void *) M_mindustry_gen_Bullet_set_arc_math_geom_Position,
	(void *) M_mindustry_gen_Bullet_set_float_float,
	(void *) M_mindustry_gen_Bullet_trns_arc_math_geom_Position,
	(void *) M_mindustry_gen_Bullet_trns_float_float,
	(void *) M_mindustry_gen_Bullet_x_float,
	(void *) M_mindustry_gen_Bullet_y_float,
	(void *) M_mindustry_gen_Bullet_clipSize_R_float,
	(void *) M_mindustry_gen_Bullet_draw,
	(void *) M_mindustry_gen_Bullet_hitbox_arc_math_geom_Rect,
	(void *) M_mindustry_gen_Bullet_hitSize_R_float,
	(void *) M_mindustry_gen_Bullet_collides_mindustry_gen_Hitboxc_R_boolean,
	(void *) M_mindustry_gen_Bullet_deltaAngle_R_float,
	(void *) M_mindustry_gen_Bullet_deltaLen_R_float,
	(void *) M_mindustry_gen_Bullet_deltaX_R_float,
	(void *) M_mindustry_gen_Bullet_deltaY_R_float,
	(void *) M_mindustry_gen_Bullet_lastX_R_float,
	(void *) M_mindustry_gen_Bullet_lastY_R_float,
	(void *) M_mindustry_gen_Bullet_collision_mindustry_gen_Hitboxc_float_float,
	(void *) M_mindustry_gen_Bullet_deltaX_float,
	(void *) M_mindustry_gen_Bullet_deltaY_float,
	(void *) M_mindustry_gen_Bullet_getCollisions_arc_func_Cons,
	(void *) M_mindustry_gen_Bullet_hitSize_float,
	(void *) M_mindustry_gen_Bullet_hitboxTile_arc_math_geom_Rect,
	(void *) M_mindustry_gen_Bullet_lastX_float,
	(void *) M_mindustry_gen_Bullet_lastY_float,
	(void *) M_mindustry_gen_Bullet_updateLastPosition,
	(void *) M_mindustry_gen_Bullet_owner_R_mindustry_gen_Entityc,
	(void *) M_mindustry_gen_Bullet_owner_mindustry_gen_Entityc,
	(void *) M_mindustry_gen_Bullet_inFogTo_mindustry_game_Team_R_boolean,
	(void *) M_mindustry_gen_Bullet_cheating_R_boolean,
	(void *) M_mindustry_gen_Bullet_team_R_mindustry_game_Team,
	(void *) M_mindustry_gen_Bullet_closestCore_R_mindustry_world_blocks_storage_CoreBlock$CoreBuild,
	(void *) M_mindustry_gen_Bullet_closestEnemyCore_R_mindustry_world_blocks_storage_CoreBlock$CoreBuild,
	(void *) M_mindustry_gen_Bullet_core_R_mindustry_world_blocks_storage_CoreBlock$CoreBuild,
	(void *) M_mindustry_gen_Bullet_team_mindustry_game_Team,
	(void *) M_mindustry_gen_Bullet_absorb,
	(void *) M_mindustry_gen_Bullet_fin_R_float,
	(void *) M_arc_math_Scaled_fout_R_float,
	(void *) M_arc_math_Scaled_fout_arc_math_Interp_R_float,
	(void *) M_arc_math_Scaled_fout_float_R_float,
	(void *) M_arc_math_Scaled_fin_arc_math_Interp_R_float,
	(void *) M_arc_math_Scaled_finpow_R_float,
	(void *) M_arc_math_Scaled_foutpow_R_float,
	(void *) M_arc_math_Scaled_finpowdown_R_float,
	(void *) M_arc_math_Scaled_foutpowdown_R_float,
	(void *) M_arc_math_Scaled_fslope_R_float,
	(void *) M_mindustry_gen_Bullet_lifetime_R_float,
	(void *) M_mindustry_gen_Bullet_time_R_float,
	(void *) M_mindustry_gen_Bullet_lifetime_float,
	(void *) M_mindustry_gen_Bullet_time_float,
	(void *) M_mindustry_gen_Bullet_timer_R_arc_util_Interval,
	(void *) M_mindustry_gen_Bullet_timer_int_float_R_boolean,
	(void *) M_mindustry_gen_Bullet_timer_arc_util_Interval,
	(void *) M_mindustry_gen_Bullet_sense_mindustry_logic_LAccess_R_double,
	(void *) M_mindustry_logic_Senseable_sense_mindustry_ctype_Content_R_double,
	(void *) M_mindustry_logic_Senseable_senseObject_mindustry_logic_LAccess_R_java_lang_Object,
	(void *) M_mindustry_gen_Bullet_setProp_mindustry_logic_LAccess_double,
	(void *) M_mindustry_gen_Bullet_setProp_mindustry_logic_LAccess_java_lang_Object,
	(void *) M_mindustry_gen_Bullet_setProp_mindustry_ctype_UnlockableContent_double,
	(void *) M_mindustry_gen_Bullet_rotation_R_float,
	(void *) M_mindustry_gen_Bullet_rotation_float,
	(void *) M_mindustry_gen_Bullet_shooter_R_mindustry_gen_Entityc,
	(void *) M_mindustry_gen_Bullet_shooter_mindustry_gen_Entityc,
	(void *) M_mindustry_gen_Bullet_mover_R_mindustry_entities_Mover,
	(void *) M_mindustry_gen_Bullet_trail_R_mindustry_graphics_Trail,
	(void *) M_mindustry_gen_Bullet_aimTile_R_mindustry_world_Tile,
	(void *) M_mindustry_gen_Bullet_stickyTarget_R_mindustry_gen_Posc,
	(void *) M_mindustry_gen_Bullet_vel_R_arc_math_geom_Vec2,
	(void *) M_mindustry_gen_Bullet_collided_R_arc_struct_IntSeq,
	(void *) M_mindustry_gen_Bullet_absorbed_R_boolean,
	(void *) M_mindustry_gen_Bullet_checkUnderBuild_mindustry_gen_Building_float_float_R_boolean,
	(void *) M_mindustry_gen_Bullet_hasCollided_int_R_boolean,
	(void *) M_mindustry_gen_Bullet_hit_R_boolean,
	(void *) M_mindustry_gen_Bullet_justSpawned_R_boolean,
	(void *) M_mindustry_gen_Bullet_keepAlive_R_boolean,
	(void *) M_mindustry_gen_Bullet_aimX_R_float,
	(void *) M_mindustry_gen_Bullet_aimY_R_float,
	(void *) M_mindustry_gen_Bullet_buildingDamageMultiplier_R_float,
	(void *) M_mindustry_gen_Bullet_damageMultiplier_R_float,
	(void *) M_mindustry_gen_Bullet_fdata_R_float,
	(void *) M_mindustry_gen_Bullet_originX_R_float,
	(void *) M_mindustry_gen_Bullet_originY_R_float,
	(void *) M_mindustry_gen_Bullet_stickyRotation_R_float,
	(void *) M_mindustry_gen_Bullet_stickyRotationOffset_R_float,
	(void *) M_mindustry_gen_Bullet_stickyX_R_float,
	(void *) M_mindustry_gen_Bullet_stickyY_R_float,
	(void *) M_mindustry_gen_Bullet_frags_R_int,
	(void *) M_mindustry_gen_Bullet_data_R_java_lang_Object,
	(void *) M_mindustry_gen_Bullet_type_R_mindustry_entities_bullet_BulletType,
	(void *) M_mindustry_gen_Bullet_absorbed_boolean,
	(void *) M_mindustry_gen_Bullet_aimTile_mindustry_world_Tile,
	(void *) M_mindustry_gen_Bullet_aimX_float,
	(void *) M_mindustry_gen_Bullet_aimY_float,
	(void *) M_mindustry_gen_Bullet_buildingDamageMultiplier_float,
	(void *) M_mindustry_gen_Bullet_collided_arc_struct_IntSeq,
	(void *) M_mindustry_gen_Bullet_data_java_lang_Object,
	(void *) M_mindustry_gen_Bullet_fdata_float,
	(void *) M_mindustry_gen_Bullet_frags_int,
	(void *) M_mindustry_gen_Bullet_hit_boolean,
	(void *) M_mindustry_gen_Bullet_initVel_float_float,
	(void *) M_mindustry_gen_Bullet_justSpawned_boolean,
	(void *) M_mindustry_gen_Bullet_keepAlive_boolean,
	(void *) M_mindustry_gen_Bullet_moveRelative_float_float,
	(void *) M_mindustry_gen_Bullet_mover_mindustry_entities_Mover,
	(void *) M_mindustry_gen_Bullet_originX_float,
	(void *) M_mindustry_gen_Bullet_originY_float,
	(void *) M_mindustry_gen_Bullet_stickTo_mindustry_gen_Posc,
	(void *) M_mindustry_gen_Bullet_stickyRotation_float,
	(void *) M_mindustry_gen_Bullet_stickyRotationOffset_float,
	(void *) M_mindustry_gen_Bullet_stickyTarget_mindustry_gen_Posc,
	(void *) M_mindustry_gen_Bullet_stickyX_float,
	(void *) M_mindustry_gen_Bullet_stickyY_float,
	(void *) M_mindustry_gen_Bullet_tileRaycast_int_int_int_int,
	(void *) M_mindustry_gen_Bullet_trail_mindustry_graphics_Trail,
	(void *) M_mindustry_gen_Bullet_turn_float_float,
	(void *) M_mindustry_gen_Bullet_type_mindustry_entities_bullet_BulletType,
	(void *) M_mindustry_gen_Bullet_vel_arc_math_geom_Vec2,
	(void *) M_mindustry_gen_Bullet_setIndex__bullet_int,
	(void *) M_mindustry_gen_Bullet_setIndex__draw_int,
	(void *) M_mindustry_gen_Bullet_lambda$draw$0,
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
	{ "reset", "()V" },
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
	{ "damage", "()F" },
	{ "damage", "(F)V" },
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
	{ "clipSize", "()F" },
	{ "draw", "()V" },
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
	{ "owner", "()Lmindustry/gen/Entityc;" },
	{ "owner", "(Lmindustry/gen/Entityc;)V" },
	{ "inFogTo", "(Lmindustry/game/Team;)Z" },
	{ "cheating", "()Z" },
	{ "team", "()Lmindustry/game/Team;" },
	{ "closestCore", "()Lmindustry/world/blocks/storage/CoreBlock$CoreBuild;" },
	{ "closestEnemyCore", "()Lmindustry/world/blocks/storage/CoreBlock$CoreBuild;" },
	{ "core", "()Lmindustry/world/blocks/storage/CoreBlock$CoreBuild;" },
	{ "team", "(Lmindustry/game/Team;)V" },
	{ "absorb", "()V" },
	{ "fin", "()F" },
	{ "fout", "()F" },
	{ "fout", "(Larc/math/Interp;)F" },
	{ "fout", "(F)F" },
	{ "fin", "(Larc/math/Interp;)F" },
	{ "finpow", "()F" },
	{ "foutpow", "()F" },
	{ "finpowdown", "()F" },
	{ "foutpowdown", "()F" },
	{ "fslope", "()F" },
	{ "lifetime", "()F" },
	{ "time", "()F" },
	{ "lifetime", "(F)V" },
	{ "time", "(F)V" },
	{ "timer", "()Larc/util/Interval;" },
	{ "timer", "(IF)Z" },
	{ "timer", "(Larc/util/Interval;)V" },
	{ "sense", "(Lmindustry/logic/LAccess;)D" },
	{ "sense", "(Lmindustry/ctype/Content;)D" },
	{ "senseObject", "(Lmindustry/logic/LAccess;)Ljava/lang/Object;" },
	{ "setProp", "(Lmindustry/logic/LAccess;D)V" },
	{ "setProp", "(Lmindustry/logic/LAccess;Ljava/lang/Object;)V" },
	{ "setProp", "(Lmindustry/ctype/UnlockableContent;D)V" },
	{ "rotation", "()F" },
	{ "rotation", "(F)V" },
	{ "shooter", "()Lmindustry/gen/Entityc;" },
	{ "shooter", "(Lmindustry/gen/Entityc;)V" },
	{ "mover", "()Lmindustry/entities/Mover;" },
	{ "trail", "()Lmindustry/graphics/Trail;" },
	{ "aimTile", "()Lmindustry/world/Tile;" },
	{ "stickyTarget", "()Lmindustry/gen/Posc;" },
	{ "vel", "()Larc/math/geom/Vec2;" },
	{ "collided", "()Larc/struct/IntSeq;" },
	{ "absorbed", "()Z" },
	{ "checkUnderBuild", "(Lmindustry/gen/Building;FF)Z" },
	{ "hasCollided", "(I)Z" },
	{ "hit", "()Z" },
	{ "justSpawned", "()Z" },
	{ "keepAlive", "()Z" },
	{ "aimX", "()F" },
	{ "aimY", "()F" },
	{ "buildingDamageMultiplier", "()F" },
	{ "damageMultiplier", "()F" },
	{ "fdata", "()F" },
	{ "originX", "()F" },
	{ "originY", "()F" },
	{ "stickyRotation", "()F" },
	{ "stickyRotationOffset", "()F" },
	{ "stickyX", "()F" },
	{ "stickyY", "()F" },
	{ "frags", "()I" },
	{ "data", "()Ljava/lang/Object;" },
	{ "type", "()Lmindustry/entities/bullet/BulletType;" },
	{ "absorbed", "(Z)V" },
	{ "aimTile", "(Lmindustry/world/Tile;)V" },
	{ "aimX", "(F)V" },
	{ "aimY", "(F)V" },
	{ "buildingDamageMultiplier", "(F)V" },
	{ "collided", "(Larc/struct/IntSeq;)V" },
	{ "data", "(Ljava/lang/Object;)V" },
	{ "fdata", "(F)V" },
	{ "frags", "(I)V" },
	{ "hit", "(Z)V" },
	{ "initVel", "(FF)V" },
	{ "justSpawned", "(Z)V" },
	{ "keepAlive", "(Z)V" },
	{ "moveRelative", "(FF)V" },
	{ "mover", "(Lmindustry/entities/Mover;)V" },
	{ "originX", "(F)V" },
	{ "originY", "(F)V" },
	{ "stickTo", "(Lmindustry/gen/Posc;)V" },
	{ "stickyRotation", "(F)V" },
	{ "stickyRotationOffset", "(F)V" },
	{ "stickyTarget", "(Lmindustry/gen/Posc;)V" },
	{ "stickyX", "(F)V" },
	{ "stickyY", "(F)V" },
	{ "tileRaycast", "(IIII)V" },
	{ "trail", "(Lmindustry/graphics/Trail;)V" },
	{ "turn", "(FF)V" },
	{ "type", "(Lmindustry/entities/bullet/BulletType;)V" },
	{ "vel", "(Larc/math/geom/Vec2;)V" },
	{ "setIndex__bullet", "(I)V" },
	{ "setIndex__draw", "(I)V" },
	{ "lambda$draw$0", "()V" },
};

static jclass interfaces[] { &class_arc_util_pooling_Pool$Poolable, &class_mindustry_gen_Bulletc, &class_mindustry_gen_Damagec, &class_mindustry_gen_Drawc, &class_mindustry_gen_Entityc, &class_mindustry_gen_Hitboxc, &class_mindustry_gen_IndexableEntity__bullet, &class_mindustry_gen_IndexableEntity__draw, &class_mindustry_gen_Ownerc, &class_mindustry_gen_Posc, &class_mindustry_gen_Shielderc, &class_mindustry_gen_Teamc, &class_mindustry_gen_Timedc, &class_mindustry_gen_Timerc, };

static FieldMetadata fields[] {
	{ "absorbed", &class_boolean, offsetof(mindustry_gen_Bullet, F_absorbed), "Z", 129 },
	{ "added", &class_boolean, offsetof(mindustry_gen_Bullet, F_added), "Z", 132 },
	{ "aimTile", &class_mindustry_world_Tile, offsetof(mindustry_gen_Bullet, F_aimTile), "Lmindustry/world/Tile;", 129 },
	{ "aimX", &class_float, offsetof(mindustry_gen_Bullet, F_aimX), "F", 129 },
	{ "aimY", &class_float, offsetof(mindustry_gen_Bullet, F_aimY), "F", 129 },
	{ "buildingDamageMultiplier", &class_float, offsetof(mindustry_gen_Bullet, F_buildingDamageMultiplier), "F", 129 },
	{ "collided", &class_arc_struct_IntSeq, offsetof(mindustry_gen_Bullet, F_collided), "Larc/struct/IntSeq;", 1 },
	{ "damage", &class_float, offsetof(mindustry_gen_Bullet, F_damage), "F", 1 },
	{ "data", &class_java_lang_Object, offsetof(mindustry_gen_Bullet, F_data), "Ljava/lang/Object;", 1 },
	{ "deltaX", &class_float, offsetof(mindustry_gen_Bullet, F_deltaX), "F", 129 },
	{ "deltaY", &class_float, offsetof(mindustry_gen_Bullet, F_deltaY), "F", 129 },
	{ "fdata", &class_float, offsetof(mindustry_gen_Bullet, F_fdata), "F", 1 },
	{ "frags", &class_int, offsetof(mindustry_gen_Bullet, F_frags), "I", 129 },
	{ "hit", &class_boolean, offsetof(mindustry_gen_Bullet, F_hit), "Z", 129 },
	{ "hitSize", &class_float, offsetof(mindustry_gen_Bullet, F_hitSize), "F", 129 },
	{ "id", &class_int, offsetof(mindustry_gen_Bullet, F_id), "I", 129 },
	{ "index__bullet", &class_int, offsetof(mindustry_gen_Bullet, F_index__bullet), "I", 132 },
	{ "index__draw", &class_int, offsetof(mindustry_gen_Bullet, F_index__draw), "I", 132 },
	{ "justSpawned", &class_boolean, offsetof(mindustry_gen_Bullet, F_justSpawned), "Z", 129 },
	{ "keepAlive", &class_boolean, offsetof(mindustry_gen_Bullet, F_keepAlive), "Z", 129 },
	{ "lastX", &class_float, offsetof(mindustry_gen_Bullet, F_lastX), "F", 129 },
	{ "lastY", &class_float, offsetof(mindustry_gen_Bullet, F_lastY), "F", 129 },
	{ "lifetime", &class_float, offsetof(mindustry_gen_Bullet, F_lifetime), "F", 1 },
	{ "mover", &class_mindustry_entities_Mover, offsetof(mindustry_gen_Bullet, F_mover), "Lmindustry/entities/Mover;", 129 },
	{ "originX", &class_float, offsetof(mindustry_gen_Bullet, F_originX), "F", 129 },
	{ "originY", &class_float, offsetof(mindustry_gen_Bullet, F_originY), "F", 129 },
	{ "owner", &class_mindustry_gen_Entityc, offsetof(mindustry_gen_Bullet, F_owner), "Lmindustry/gen/Entityc;", 1 },
	{ "rotation", &class_float, offsetof(mindustry_gen_Bullet, F_rotation), "F", 4 },
	{ "shooter", &class_mindustry_gen_Entityc, offsetof(mindustry_gen_Bullet, F_shooter), "Lmindustry/gen/Entityc;", 129 },
	{ "stickyRotation", &class_float, offsetof(mindustry_gen_Bullet, F_stickyRotation), "F", 129 },
	{ "stickyRotationOffset", &class_float, offsetof(mindustry_gen_Bullet, F_stickyRotationOffset), "F", 129 },
	{ "stickyTarget", &class_mindustry_gen_Posc, offsetof(mindustry_gen_Bullet, F_stickyTarget), "Lmindustry/gen/Posc;", 129 },
	{ "stickyX", &class_float, offsetof(mindustry_gen_Bullet, F_stickyX), "F", 129 },
	{ "stickyY", &class_float, offsetof(mindustry_gen_Bullet, F_stickyY), "F", 129 },
	{ "team", &class_mindustry_game_Team, offsetof(mindustry_gen_Bullet, F_team), "Lmindustry/game/Team;", 1 },
	{ "time", &class_float, offsetof(mindustry_gen_Bullet, F_time), "F", 1 },
	{ "timer", &class_arc_util_Interval, offsetof(mindustry_gen_Bullet, F_timer), "Larc/util/Interval;", 129 },
	{ "trail", &class_mindustry_graphics_Trail, offsetof(mindustry_gen_Bullet, F_trail), "Lmindustry/graphics/Trail;", 129 },
	{ "type", &class_mindustry_entities_bullet_BulletType, offsetof(mindustry_gen_Bullet, F_type), "Lmindustry/entities/bullet/BulletType;", 1 },
	{ "vel", &class_arc_math_geom_Vec2, offsetof(mindustry_gen_Bullet, F_vel), "Larc/math/geom/Vec2;", 1 },
	{ "x", &class_float, offsetof(mindustry_gen_Bullet, F_x), "F", 1 },
	{ "y", &class_float, offsetof(mindustry_gen_Bullet, F_y), "F", 1 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_mindustry_gen_Bullet, 0, "()V", 4 },
	{ "buildOn", (intptr_t) M_mindustry_gen_Bullet_buildOn_R_mindustry_gen_Building, VTABLE_mindustry_gen_Bullet_buildOn_R_mindustry_gen_Building, "()Lmindustry/gen/Building;", 1 },
	{ "tileOn", (intptr_t) M_mindustry_gen_Bullet_tileOn_R_mindustry_world_Tile, VTABLE_mindustry_gen_Bullet_tileOn_R_mindustry_world_Tile, "()Lmindustry/world/Tile;", 1 },
	{ "closestCore", (intptr_t) M_mindustry_gen_Bullet_closestCore_R_mindustry_world_blocks_storage_CoreBlock$CoreBuild, VTABLE_mindustry_gen_Bullet_closestCore_R_mindustry_world_blocks_storage_CoreBlock$CoreBuild, "()Lmindustry/world/blocks/storage/CoreBlock$CoreBuild;", 1 },
	{ "closestEnemyCore", (intptr_t) M_mindustry_gen_Bullet_closestEnemyCore_R_mindustry_world_blocks_storage_CoreBlock$CoreBuild, VTABLE_mindustry_gen_Bullet_closestEnemyCore_R_mindustry_world_blocks_storage_CoreBlock$CoreBuild, "()Lmindustry/world/blocks/storage/CoreBlock$CoreBuild;", 1 },
	{ "core", (intptr_t) M_mindustry_gen_Bullet_core_R_mindustry_world_blocks_storage_CoreBlock$CoreBuild, VTABLE_mindustry_gen_Bullet_core_R_mindustry_world_blocks_storage_CoreBlock$CoreBuild, "()Lmindustry/world/blocks/storage/CoreBlock$CoreBuild;", 1 },
	{ "vel", (intptr_t) M_mindustry_gen_Bullet_vel_R_arc_math_geom_Vec2, VTABLE_mindustry_gen_Bullet_vel_R_arc_math_geom_Vec2, "()Larc/math/geom/Vec2;", 1 },
	{ "collided", (intptr_t) M_mindustry_gen_Bullet_collided_R_arc_struct_IntSeq, VTABLE_mindustry_gen_Bullet_collided_R_arc_struct_IntSeq, "()Larc/struct/IntSeq;", 1 },
	{ "timer", (intptr_t) M_mindustry_gen_Bullet_timer_R_arc_util_Interval, VTABLE_mindustry_gen_Bullet_timer_R_arc_util_Interval, "()Larc/util/Interval;", 1 },
	{ "absorbed", (intptr_t) M_mindustry_gen_Bullet_absorbed_R_boolean, VTABLE_mindustry_gen_Bullet_absorbed_R_boolean, "()Z", 1 },
	{ "hit", (intptr_t) M_mindustry_gen_Bullet_hit_R_boolean, VTABLE_mindustry_gen_Bullet_hit_R_boolean, "()Z", 1 },
	{ "justSpawned", (intptr_t) M_mindustry_gen_Bullet_justSpawned_R_boolean, VTABLE_mindustry_gen_Bullet_justSpawned_R_boolean, "()Z", 1 },
	{ "keepAlive", (intptr_t) M_mindustry_gen_Bullet_keepAlive_R_boolean, VTABLE_mindustry_gen_Bullet_keepAlive_R_boolean, "()Z", 1 },
	{ "aimX", (intptr_t) M_mindustry_gen_Bullet_aimX_R_float, VTABLE_mindustry_gen_Bullet_aimX_R_float, "()F", 1 },
	{ "aimY", (intptr_t) M_mindustry_gen_Bullet_aimY_R_float, VTABLE_mindustry_gen_Bullet_aimY_R_float, "()F", 1 },
	{ "buildingDamageMultiplier", (intptr_t) M_mindustry_gen_Bullet_buildingDamageMultiplier_R_float, VTABLE_mindustry_gen_Bullet_buildingDamageMultiplier_R_float, "()F", 1 },
	{ "damage", (intptr_t) M_mindustry_gen_Bullet_damage_R_float, VTABLE_mindustry_gen_Bullet_damage_R_float, "()F", 1 },
	{ "deltaX", (intptr_t) M_mindustry_gen_Bullet_deltaX_R_float, VTABLE_mindustry_gen_Bullet_deltaX_R_float, "()F", 1 },
	{ "deltaY", (intptr_t) M_mindustry_gen_Bullet_deltaY_R_float, VTABLE_mindustry_gen_Bullet_deltaY_R_float, "()F", 1 },
	{ "fdata", (intptr_t) M_mindustry_gen_Bullet_fdata_R_float, VTABLE_mindustry_gen_Bullet_fdata_R_float, "()F", 1 },
	{ "lastX", (intptr_t) M_mindustry_gen_Bullet_lastX_R_float, VTABLE_mindustry_gen_Bullet_lastX_R_float, "()F", 1 },
	{ "lastY", (intptr_t) M_mindustry_gen_Bullet_lastY_R_float, VTABLE_mindustry_gen_Bullet_lastY_R_float, "()F", 1 },
	{ "lifetime", (intptr_t) M_mindustry_gen_Bullet_lifetime_R_float, VTABLE_mindustry_gen_Bullet_lifetime_R_float, "()F", 1 },
	{ "originX", (intptr_t) M_mindustry_gen_Bullet_originX_R_float, VTABLE_mindustry_gen_Bullet_originX_R_float, "()F", 1 },
	{ "originY", (intptr_t) M_mindustry_gen_Bullet_originY_R_float, VTABLE_mindustry_gen_Bullet_originY_R_float, "()F", 1 },
	{ "stickyRotation", (intptr_t) M_mindustry_gen_Bullet_stickyRotation_R_float, VTABLE_mindustry_gen_Bullet_stickyRotation_R_float, "()F", 1 },
	{ "stickyRotationOffset", (intptr_t) M_mindustry_gen_Bullet_stickyRotationOffset_R_float, VTABLE_mindustry_gen_Bullet_stickyRotationOffset_R_float, "()F", 1 },
	{ "stickyX", (intptr_t) M_mindustry_gen_Bullet_stickyX_R_float, VTABLE_mindustry_gen_Bullet_stickyX_R_float, "()F", 1 },
	{ "stickyY", (intptr_t) M_mindustry_gen_Bullet_stickyY_R_float, VTABLE_mindustry_gen_Bullet_stickyY_R_float, "()F", 1 },
	{ "time", (intptr_t) M_mindustry_gen_Bullet_time_R_float, VTABLE_mindustry_gen_Bullet_time_R_float, "()F", 1 },
	{ "x", (intptr_t) M_mindustry_gen_Bullet_x_R_float, VTABLE_mindustry_gen_Bullet_x_R_float, "()F", 1 },
	{ "y", (intptr_t) M_mindustry_gen_Bullet_y_R_float, VTABLE_mindustry_gen_Bullet_y_R_float, "()F", 1 },
	{ "classId", (intptr_t) M_mindustry_gen_Bullet_classId_R_int, VTABLE_mindustry_gen_Bullet_classId_R_int, "()I", 1 },
	{ "frags", (intptr_t) M_mindustry_gen_Bullet_frags_R_int, VTABLE_mindustry_gen_Bullet_frags_R_int, "()I", 1 },
	{ "id", (intptr_t) M_mindustry_gen_Bullet_id_R_int, VTABLE_mindustry_gen_Bullet_id_R_int, "()I", 1 },
	{ "data", (intptr_t) M_mindustry_gen_Bullet_data_R_java_lang_Object, VTABLE_mindustry_gen_Bullet_data_R_java_lang_Object, "()Ljava/lang/Object;", 1 },
	{ "toString", (intptr_t) M_mindustry_gen_Bullet_toString_R_java_lang_String, VTABLE_mindustry_gen_Bullet_toString_R_java_lang_String, "()Ljava/lang/String;", 1 },
	{ "mover", (intptr_t) M_mindustry_gen_Bullet_mover_R_mindustry_entities_Mover, VTABLE_mindustry_gen_Bullet_mover_R_mindustry_entities_Mover, "()Lmindustry/entities/Mover;", 1 },
	{ "type", (intptr_t) M_mindustry_gen_Bullet_type_R_mindustry_entities_bullet_BulletType, VTABLE_mindustry_gen_Bullet_type_R_mindustry_entities_bullet_BulletType, "()Lmindustry/entities/bullet/BulletType;", 1 },
	{ "team", (intptr_t) M_mindustry_gen_Bullet_team_R_mindustry_game_Team, VTABLE_mindustry_gen_Bullet_team_R_mindustry_game_Team, "()Lmindustry/game/Team;", 1 },
	{ "owner", (intptr_t) M_mindustry_gen_Bullet_owner_R_mindustry_gen_Entityc, VTABLE_mindustry_gen_Bullet_owner_R_mindustry_gen_Entityc, "()Lmindustry/gen/Entityc;", 1 },
	{ "shooter", (intptr_t) M_mindustry_gen_Bullet_shooter_R_mindustry_gen_Entityc, VTABLE_mindustry_gen_Bullet_shooter_R_mindustry_gen_Entityc, "()Lmindustry/gen/Entityc;", 1 },
	{ "stickyTarget", (intptr_t) M_mindustry_gen_Bullet_stickyTarget_R_mindustry_gen_Posc, VTABLE_mindustry_gen_Bullet_stickyTarget_R_mindustry_gen_Posc, "()Lmindustry/gen/Posc;", 1 },
	{ "trail", (intptr_t) M_mindustry_gen_Bullet_trail_R_mindustry_graphics_Trail, VTABLE_mindustry_gen_Bullet_trail_R_mindustry_graphics_Trail, "()Lmindustry/graphics/Trail;", 1 },
	{ "aimTile", (intptr_t) M_mindustry_gen_Bullet_aimTile_R_mindustry_world_Tile, VTABLE_mindustry_gen_Bullet_aimTile_R_mindustry_world_Tile, "()Lmindustry/world/Tile;", 1 },
	{ "absorbed", (intptr_t) M_mindustry_gen_Bullet_absorbed_boolean, VTABLE_mindustry_gen_Bullet_absorbed_boolean, "(Z)V", 1 },
	{ "aimTile", (intptr_t) M_mindustry_gen_Bullet_aimTile_mindustry_world_Tile, VTABLE_mindustry_gen_Bullet_aimTile_mindustry_world_Tile, "(Lmindustry/world/Tile;)V", 1 },
	{ "aimX", (intptr_t) M_mindustry_gen_Bullet_aimX_float, VTABLE_mindustry_gen_Bullet_aimX_float, "(F)V", 1 },
	{ "aimY", (intptr_t) M_mindustry_gen_Bullet_aimY_float, VTABLE_mindustry_gen_Bullet_aimY_float, "(F)V", 1 },
	{ "buildingDamageMultiplier", (intptr_t) M_mindustry_gen_Bullet_buildingDamageMultiplier_float, VTABLE_mindustry_gen_Bullet_buildingDamageMultiplier_float, "(F)V", 1 },
	{ "collided", (intptr_t) M_mindustry_gen_Bullet_collided_arc_struct_IntSeq, VTABLE_mindustry_gen_Bullet_collided_arc_struct_IntSeq, "(Larc/struct/IntSeq;)V", 1 },
	{ "damage", (intptr_t) M_mindustry_gen_Bullet_damage_float, VTABLE_mindustry_gen_Bullet_damage_float, "(F)V", 1 },
	{ "data", (intptr_t) M_mindustry_gen_Bullet_data_java_lang_Object, VTABLE_mindustry_gen_Bullet_data_java_lang_Object, "(Ljava/lang/Object;)V", 1 },
	{ "deltaX", (intptr_t) M_mindustry_gen_Bullet_deltaX_float, VTABLE_mindustry_gen_Bullet_deltaX_float, "(F)V", 1 },
	{ "deltaY", (intptr_t) M_mindustry_gen_Bullet_deltaY_float, VTABLE_mindustry_gen_Bullet_deltaY_float, "(F)V", 1 },
	{ "fdata", (intptr_t) M_mindustry_gen_Bullet_fdata_float, VTABLE_mindustry_gen_Bullet_fdata_float, "(F)V", 1 },
	{ "frags", (intptr_t) M_mindustry_gen_Bullet_frags_int, VTABLE_mindustry_gen_Bullet_frags_int, "(I)V", 1 },
	{ "hit", (intptr_t) M_mindustry_gen_Bullet_hit_boolean, VTABLE_mindustry_gen_Bullet_hit_boolean, "(Z)V", 1 },
	{ "hitSize", (intptr_t) M_mindustry_gen_Bullet_hitSize_float, VTABLE_mindustry_gen_Bullet_hitSize_float, "(F)V", 1 },
	{ "id", (intptr_t) M_mindustry_gen_Bullet_id_int, VTABLE_mindustry_gen_Bullet_id_int, "(I)V", 1 },
	{ "justSpawned", (intptr_t) M_mindustry_gen_Bullet_justSpawned_boolean, VTABLE_mindustry_gen_Bullet_justSpawned_boolean, "(Z)V", 1 },
	{ "keepAlive", (intptr_t) M_mindustry_gen_Bullet_keepAlive_boolean, VTABLE_mindustry_gen_Bullet_keepAlive_boolean, "(Z)V", 1 },
	{ "lastX", (intptr_t) M_mindustry_gen_Bullet_lastX_float, VTABLE_mindustry_gen_Bullet_lastX_float, "(F)V", 1 },
	{ "lastY", (intptr_t) M_mindustry_gen_Bullet_lastY_float, VTABLE_mindustry_gen_Bullet_lastY_float, "(F)V", 1 },
	{ "lifetime", (intptr_t) M_mindustry_gen_Bullet_lifetime_float, VTABLE_mindustry_gen_Bullet_lifetime_float, "(F)V", 1 },
	{ "mover", (intptr_t) M_mindustry_gen_Bullet_mover_mindustry_entities_Mover, VTABLE_mindustry_gen_Bullet_mover_mindustry_entities_Mover, "(Lmindustry/entities/Mover;)V", 1 },
	{ "originX", (intptr_t) M_mindustry_gen_Bullet_originX_float, VTABLE_mindustry_gen_Bullet_originX_float, "(F)V", 1 },
	{ "originY", (intptr_t) M_mindustry_gen_Bullet_originY_float, VTABLE_mindustry_gen_Bullet_originY_float, "(F)V", 1 },
	{ "owner", (intptr_t) M_mindustry_gen_Bullet_owner_mindustry_gen_Entityc, VTABLE_mindustry_gen_Bullet_owner_mindustry_gen_Entityc, "(Lmindustry/gen/Entityc;)V", 1 },
	{ "setIndex__bullet", (intptr_t) M_mindustry_gen_Bullet_setIndex__bullet_int, VTABLE_mindustry_gen_Bullet_setIndex__bullet_int, "(I)V", 1 },
	{ "setIndex__draw", (intptr_t) M_mindustry_gen_Bullet_setIndex__draw_int, VTABLE_mindustry_gen_Bullet_setIndex__draw_int, "(I)V", 1 },
	{ "shooter", (intptr_t) M_mindustry_gen_Bullet_shooter_mindustry_gen_Entityc, VTABLE_mindustry_gen_Bullet_shooter_mindustry_gen_Entityc, "(Lmindustry/gen/Entityc;)V", 1 },
	{ "stickyRotation", (intptr_t) M_mindustry_gen_Bullet_stickyRotation_float, VTABLE_mindustry_gen_Bullet_stickyRotation_float, "(F)V", 1 },
	{ "stickyRotationOffset", (intptr_t) M_mindustry_gen_Bullet_stickyRotationOffset_float, VTABLE_mindustry_gen_Bullet_stickyRotationOffset_float, "(F)V", 1 },
	{ "stickyTarget", (intptr_t) M_mindustry_gen_Bullet_stickyTarget_mindustry_gen_Posc, VTABLE_mindustry_gen_Bullet_stickyTarget_mindustry_gen_Posc, "(Lmindustry/gen/Posc;)V", 1 },
	{ "stickyX", (intptr_t) M_mindustry_gen_Bullet_stickyX_float, VTABLE_mindustry_gen_Bullet_stickyX_float, "(F)V", 1 },
	{ "stickyY", (intptr_t) M_mindustry_gen_Bullet_stickyY_float, VTABLE_mindustry_gen_Bullet_stickyY_float, "(F)V", 1 },
	{ "team", (intptr_t) M_mindustry_gen_Bullet_team_mindustry_game_Team, VTABLE_mindustry_gen_Bullet_team_mindustry_game_Team, "(Lmindustry/game/Team;)V", 1 },
	{ "time", (intptr_t) M_mindustry_gen_Bullet_time_float, VTABLE_mindustry_gen_Bullet_time_float, "(F)V", 1 },
	{ "timer", (intptr_t) M_mindustry_gen_Bullet_timer_arc_util_Interval, VTABLE_mindustry_gen_Bullet_timer_arc_util_Interval, "(Larc/util/Interval;)V", 1 },
	{ "trail", (intptr_t) M_mindustry_gen_Bullet_trail_mindustry_graphics_Trail, VTABLE_mindustry_gen_Bullet_trail_mindustry_graphics_Trail, "(Lmindustry/graphics/Trail;)V", 1 },
	{ "type", (intptr_t) M_mindustry_gen_Bullet_type_mindustry_entities_bullet_BulletType, VTABLE_mindustry_gen_Bullet_type_mindustry_entities_bullet_BulletType, "(Lmindustry/entities/bullet/BulletType;)V", 1 },
	{ "vel", (intptr_t) M_mindustry_gen_Bullet_vel_arc_math_geom_Vec2, VTABLE_mindustry_gen_Bullet_vel_arc_math_geom_Vec2, "(Larc/math/geom/Vec2;)V", 1 },
	{ "x", (intptr_t) M_mindustry_gen_Bullet_x_float, VTABLE_mindustry_gen_Bullet_x_float, "(F)V", 1 },
	{ "y", (intptr_t) M_mindustry_gen_Bullet_y_float, VTABLE_mindustry_gen_Bullet_y_float, "(F)V", 1 },
	{ "self", (intptr_t) M_mindustry_gen_Bullet_self_R_mindustry_gen_Entityc, VTABLE_mindustry_gen_Bullet_self_R_mindustry_gen_Entityc, "()Lmindustry/gen/Entityc;", 1 },
	{ "as", (intptr_t) M_mindustry_gen_Bullet_as_R_java_lang_Object, VTABLE_mindustry_gen_Bullet_as_R_java_lang_Object, "()Ljava/lang/Object;", 1 },
	{ "cheating", (intptr_t) M_mindustry_gen_Bullet_cheating_R_boolean, VTABLE_mindustry_gen_Bullet_cheating_R_boolean, "()Z", 1 },
	{ "checkUnderBuild", (intptr_t) M_mindustry_gen_Bullet_checkUnderBuild_mindustry_gen_Building_float_float_R_boolean, VTABLE_mindustry_gen_Bullet_checkUnderBuild_mindustry_gen_Building_float_float_R_boolean, "(Lmindustry/gen/Building;FF)Z", 1 },
	{ "collides", (intptr_t) M_mindustry_gen_Bullet_collides_mindustry_gen_Hitboxc_R_boolean, VTABLE_mindustry_gen_Bullet_collides_mindustry_gen_Hitboxc_R_boolean, "(Lmindustry/gen/Hitboxc;)Z", 1 },
	{ "hasCollided", (intptr_t) M_mindustry_gen_Bullet_hasCollided_int_R_boolean, VTABLE_mindustry_gen_Bullet_hasCollided_int_R_boolean, "(I)Z", 1 },
	{ "inFogTo", (intptr_t) M_mindustry_gen_Bullet_inFogTo_mindustry_game_Team_R_boolean, VTABLE_mindustry_gen_Bullet_inFogTo_mindustry_game_Team_R_boolean, "(Lmindustry/game/Team;)Z", 1 },
	{ "isAdded", (intptr_t) M_mindustry_gen_Bullet_isAdded_R_boolean, VTABLE_mindustry_gen_Bullet_isAdded_R_boolean, "()Z", 1 },
	{ "isLocal", (intptr_t) M_mindustry_gen_Bullet_isLocal_R_boolean, VTABLE_mindustry_gen_Bullet_isLocal_R_boolean, "()Z", 1 },
	{ "isRemote", (intptr_t) M_mindustry_gen_Bullet_isRemote_R_boolean, VTABLE_mindustry_gen_Bullet_isRemote_R_boolean, "()Z", 1 },
	{ "onSolid", (intptr_t) M_mindustry_gen_Bullet_onSolid_R_boolean, VTABLE_mindustry_gen_Bullet_onSolid_R_boolean, "()Z", 1 },
	{ "serialize", (intptr_t) M_mindustry_gen_Bullet_serialize_R_boolean, VTABLE_mindustry_gen_Bullet_serialize_R_boolean, "()Z", 1 },
	{ "timer", (intptr_t) M_mindustry_gen_Bullet_timer_int_float_R_boolean, VTABLE_mindustry_gen_Bullet_timer_int_float_R_boolean, "(IF)Z", 1 },
	{ "sense", (intptr_t) M_mindustry_gen_Bullet_sense_mindustry_logic_LAccess_R_double, VTABLE_mindustry_gen_Bullet_sense_mindustry_logic_LAccess_R_double, "(Lmindustry/logic/LAccess;)D", 1 },
	{ "clipSize", (intptr_t) M_mindustry_gen_Bullet_clipSize_R_float, VTABLE_mindustry_gen_Bullet_clipSize_R_float, "()F", 1 },
	{ "damageMultiplier", (intptr_t) M_mindustry_gen_Bullet_damageMultiplier_R_float, VTABLE_mindustry_gen_Bullet_damageMultiplier_R_float, "()F", 1 },
	{ "deltaAngle", (intptr_t) M_mindustry_gen_Bullet_deltaAngle_R_float, VTABLE_mindustry_gen_Bullet_deltaAngle_R_float, "()F", 1 },
	{ "deltaLen", (intptr_t) M_mindustry_gen_Bullet_deltaLen_R_float, VTABLE_mindustry_gen_Bullet_deltaLen_R_float, "()F", 1 },
	{ "fin", (intptr_t) M_mindustry_gen_Bullet_fin_R_float, VTABLE_mindustry_gen_Bullet_fin_R_float, "()F", 1 },
	{ "getX", (intptr_t) M_mindustry_gen_Bullet_getX_R_float, VTABLE_mindustry_gen_Bullet_getX_R_float, "()F", 1 },
	{ "getY", (intptr_t) M_mindustry_gen_Bullet_getY_R_float, VTABLE_mindustry_gen_Bullet_getY_R_float, "()F", 1 },
	{ "hitSize", (intptr_t) M_mindustry_gen_Bullet_hitSize_R_float, VTABLE_mindustry_gen_Bullet_hitSize_R_float, "()F", 1 },
	{ "rotation", (intptr_t) M_mindustry_gen_Bullet_rotation_R_float, VTABLE_mindustry_gen_Bullet_rotation_R_float, "()F", 1 },
	{ "tileX", (intptr_t) M_mindustry_gen_Bullet_tileX_R_int, VTABLE_mindustry_gen_Bullet_tileX_R_int, "()I", 1 },
	{ "tileY", (intptr_t) M_mindustry_gen_Bullet_tileY_R_int, VTABLE_mindustry_gen_Bullet_tileY_R_int, "()I", 1 },
	{ "blockOn", (intptr_t) M_mindustry_gen_Bullet_blockOn_R_mindustry_world_Block, VTABLE_mindustry_gen_Bullet_blockOn_R_mindustry_world_Block, "()Lmindustry/world/Block;", 1 },
	{ "floorOn", (intptr_t) M_mindustry_gen_Bullet_floorOn_R_mindustry_world_blocks_environment_Floor, VTABLE_mindustry_gen_Bullet_floorOn_R_mindustry_world_blocks_environment_Floor, "()Lmindustry/world/blocks/environment/Floor;", 1 },
	{ "create", (intptr_t) SM_mindustry_gen_Bullet_create_R_mindustry_gen_Bullet, 0, "()Lmindustry/gen/Bullet;", 9 },
	{ "absorb", (intptr_t) M_mindustry_gen_Bullet_absorb, VTABLE_mindustry_gen_Bullet_absorb, "()V", 1 },
	{ "add", (intptr_t) M_mindustry_gen_Bullet_add, VTABLE_mindustry_gen_Bullet_add, "()V", 1 },
	{ "afterRead", (intptr_t) M_mindustry_gen_Bullet_afterRead, VTABLE_mindustry_gen_Bullet_afterRead, "()V", 1 },
	{ "afterReadAll", (intptr_t) M_mindustry_gen_Bullet_afterReadAll, VTABLE_mindustry_gen_Bullet_afterReadAll, "()V", 1 },
	{ "beforeWrite", (intptr_t) M_mindustry_gen_Bullet_beforeWrite, VTABLE_mindustry_gen_Bullet_beforeWrite, "()V", 1 },
	{ "collision", (intptr_t) M_mindustry_gen_Bullet_collision_mindustry_gen_Hitboxc_float_float, VTABLE_mindustry_gen_Bullet_collision_mindustry_gen_Hitboxc_float_float, "(Lmindustry/gen/Hitboxc;FF)V", 1 },
	{ "draw", (intptr_t) M_mindustry_gen_Bullet_draw, VTABLE_mindustry_gen_Bullet_draw, "()V", 1 },
	{ "getCollisions", (intptr_t) M_mindustry_gen_Bullet_getCollisions_arc_func_Cons, VTABLE_mindustry_gen_Bullet_getCollisions_arc_func_Cons, "(Larc/func/Cons;)V", 1 },
	{ "hitbox", (intptr_t) M_mindustry_gen_Bullet_hitbox_arc_math_geom_Rect, VTABLE_mindustry_gen_Bullet_hitbox_arc_math_geom_Rect, "(Larc/math/geom/Rect;)V", 1 },
	{ "hitboxTile", (intptr_t) M_mindustry_gen_Bullet_hitboxTile_arc_math_geom_Rect, VTABLE_mindustry_gen_Bullet_hitboxTile_arc_math_geom_Rect, "(Larc/math/geom/Rect;)V", 1 },
	{ "initVel", (intptr_t) M_mindustry_gen_Bullet_initVel_float_float, VTABLE_mindustry_gen_Bullet_initVel_float_float, "(FF)V", 1 },
	{ "moveRelative", (intptr_t) M_mindustry_gen_Bullet_moveRelative_float_float, VTABLE_mindustry_gen_Bullet_moveRelative_float_float, "(FF)V", 1 },
	{ "read", (intptr_t) M_mindustry_gen_Bullet_read_arc_util_io_Reads, VTABLE_mindustry_gen_Bullet_read_arc_util_io_Reads, "(Larc/util/io/Reads;)V", 1 },
	{ "remove", (intptr_t) M_mindustry_gen_Bullet_remove, VTABLE_mindustry_gen_Bullet_remove, "()V", 1 },
	{ "reset", (intptr_t) M_mindustry_gen_Bullet_reset, VTABLE_mindustry_gen_Bullet_reset, "()V", 1 },
	{ "rotation", (intptr_t) M_mindustry_gen_Bullet_rotation_float, VTABLE_mindustry_gen_Bullet_rotation_float, "(F)V", 1 },
	{ "set", (intptr_t) M_mindustry_gen_Bullet_set_arc_math_geom_Position, VTABLE_mindustry_gen_Bullet_set_arc_math_geom_Position, "(Larc/math/geom/Position;)V", 1 },
	{ "set", (intptr_t) M_mindustry_gen_Bullet_set_float_float, VTABLE_mindustry_gen_Bullet_set_float_float, "(FF)V", 1 },
	{ "setProp", (intptr_t) M_mindustry_gen_Bullet_setProp_mindustry_ctype_UnlockableContent_double, VTABLE_mindustry_gen_Bullet_setProp_mindustry_ctype_UnlockableContent_double, "(Lmindustry/ctype/UnlockableContent;D)V", 1 },
	{ "setProp", (intptr_t) M_mindustry_gen_Bullet_setProp_mindustry_logic_LAccess_double, VTABLE_mindustry_gen_Bullet_setProp_mindustry_logic_LAccess_double, "(Lmindustry/logic/LAccess;D)V", 1 },
	{ "setProp", (intptr_t) M_mindustry_gen_Bullet_setProp_mindustry_logic_LAccess_java_lang_Object, VTABLE_mindustry_gen_Bullet_setProp_mindustry_logic_LAccess_java_lang_Object, "(Lmindustry/logic/LAccess;Ljava/lang/Object;)V", 1 },
	{ "stickTo", (intptr_t) M_mindustry_gen_Bullet_stickTo_mindustry_gen_Posc, VTABLE_mindustry_gen_Bullet_stickTo_mindustry_gen_Posc, "(Lmindustry/gen/Posc;)V", 1 },
	{ "tileRaycast", (intptr_t) M_mindustry_gen_Bullet_tileRaycast_int_int_int_int, VTABLE_mindustry_gen_Bullet_tileRaycast_int_int_int_int, "(IIII)V", 1 },
	{ "trns", (intptr_t) M_mindustry_gen_Bullet_trns_arc_math_geom_Position, VTABLE_mindustry_gen_Bullet_trns_arc_math_geom_Position, "(Larc/math/geom/Position;)V", 1 },
	{ "trns", (intptr_t) M_mindustry_gen_Bullet_trns_float_float, VTABLE_mindustry_gen_Bullet_trns_float_float, "(FF)V", 1 },
	{ "turn", (intptr_t) M_mindustry_gen_Bullet_turn_float_float, VTABLE_mindustry_gen_Bullet_turn_float_float, "(FF)V", 1 },
	{ "update", (intptr_t) M_mindustry_gen_Bullet_update, VTABLE_mindustry_gen_Bullet_update, "()V", 1 },
	{ "updateLastPosition", (intptr_t) M_mindustry_gen_Bullet_updateLastPosition, VTABLE_mindustry_gen_Bullet_updateLastPosition, "()V", 1 },
	{ "write", (intptr_t) M_mindustry_gen_Bullet_write_arc_util_io_Writes, VTABLE_mindustry_gen_Bullet_write_arc_util_io_Writes, "(Larc/util/io/Writes;)V", 1 },
	{ "lambda$draw$0", (intptr_t) M_mindustry_gen_Bullet_lambda$draw$0, VTABLE_mindustry_gen_Bullet_lambda$draw$0, "()V", 4098 },
};

Class class_mindustry_gen_Bullet{
		.nativeName = (intptr_t) "mindustry/gen/Bullet",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(mindustry_gen_Bullet),
		.classVtable = (intptr_t) vtable_mindustry_gen_Bullet,
		.staticInitializer = (intptr_t) clinit_mindustry_gen_Bullet,
		.annotationInitializer = (intptr_t) initAnnotations,
		.markFunction = (intptr_t) mark_mindustry_gen_Bullet,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 33,
		.interfaceCount = 14,
		.nativeInterfaces = (intptr_t) interfaces,
		.fieldCount = 42,
		.nativeFields = (intptr_t) fields,
		.methodCount = 143,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 170,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_mindustry_gen_Bullet = registerClass(&class_mindustry_gen_Bullet);

}
