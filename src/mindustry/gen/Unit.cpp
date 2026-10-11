#include "mindustry/gen/Unit.h"
#include "arc/math/geom/Vec2.h"
#include "mindustry/entities/Sized.h"
#include "mindustry/logic/Ranged.h"
#include "mindustry/gen/Minerc.h"
#include "mindustry/gen/IndexableEntity__sync.h"
#include "mindustry/logic/Settable.h"
#include "mindustry/gen/Rotc.h"
#include "mindustry/gen/Velc.h"
#include "mindustry/ui/Displayable.h"
#include "mindustry/gen/Unitc.h"
#include "java/lang/reflect/Constructor.h"
#include "java/lang/String.h"
#include "mindustry/gen/Physicsc.h"
#include "mindustry/gen/Entityc.h"
#include "mindustry/entities/abilities/Ability.h"
#include "mindustry/gen/Syncc.h"
#include "java/lang/reflect/Method.h"
#include "mindustry/world/Tile.h"
#include "mindustry/content/UnitTypes.h"
#include "mindustry/gen/Healthc.h"
#include "mindustry/world/blocks/environment/Floor.h"
#include "arc/math/geom/Position.h"
#include "mindustry/entities/units/WeaponMount.h"
#include "mindustry/gen/Shieldc.h"
#include "mindustry/gen/Teamc.h"
#include "java/lang/reflect/Field.h"
#include "mindustry/gen/Unit.h"
#include "arc/math/geom/QuadTree_QuadTreeObject.h"
#include "java/lang/annotation/Annotation.h"
#include "arc/struct/Queue.h"
#include "mindustry/gen/Weaponsc.h"
#include "arc/util/Nullable.h"
#include "mindustry/type/UnitType.h"
#include "mindustry/gen/Posc.h"
#include "mindustry/graphics/Trail.h"
#include "mindustry/entities/EntityGroup.h"
#include "java/lang/Object.h"
#include "mindustry/gen/Builderc.h"
#include "mindustry/type/ItemStack.h"
#include "mindustry/gen/Itemsc.h"
#include "mindustry/gen/IndexableEntity__draw.h"
#include "mindustry/gen/Statusc.h"
#include "mindustry/logic/Senseable.h"
#include "mindustry/gen/Drawc.h"
#include "mindustry/gen/Hitboxc.h"
#include "mindustry/game/Team.h"
#include "mindustry/gen/IndexableEntity__unit.h"

extern "C" {


void mark_mindustry_gen_Unit(jobject object, jint mark, jint depth) {
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
	auto self = (mindustry_gen_Unit *) object;
	if (self->F_abilities)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_abilities)->clazz)->markFunction)((jobject) self->F_abilities, mark, depth + 1);
	if (self->F_dockedType)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_dockedType)->clazz)->markFunction)((jobject) self->F_dockedType, mark, depth + 1);
	if (self->F_lastCommanded)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_lastCommanded)->clazz)->markFunction)((jobject) self->F_lastCommanded, mark, depth + 1);
	if (self->F_lastDrownFloor)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_lastDrownFloor)->clazz)->markFunction)((jobject) self->F_lastDrownFloor, mark, depth + 1);
	if (self->F_mineTile)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_mineTile)->clazz)->markFunction)((jobject) self->F_mineTile, mark, depth + 1);
	if (self->F_mounts)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_mounts)->clazz)->markFunction)((jobject) self->F_mounts, mark, depth + 1);
	if (self->F_plans)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_plans)->clazz)->markFunction)((jobject) self->F_plans, mark, depth + 1);
	if (self->F_stack)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_stack)->clazz)->markFunction)((jobject) self->F_stack, mark, depth + 1);
	if (self->F_team)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_team)->clazz)->markFunction)((jobject) self->F_team, mark, depth + 1);
	if (self->F_trail)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_trail)->clazz)->markFunction)((jobject) self->F_trail, mark, depth + 1);
	if (self->F_type)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_type)->clazz)->markFunction)((jobject) self->F_type, mark, depth + 1);
	if (self->F_vel)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_vel)->clazz)->markFunction)((jobject) self->F_vel, mark, depth + 1);
}

void clinit_mindustry_gen_Unit(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
}

void init_mindustry_gen_Unit(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/Unit:<init>", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_gen_Unit(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(87);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(88);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)createArray(ctx, &class_mindustry_entities_abilities_Ability, (jint(0)));
	((mindustry_gen_Unit *) NULL_CHECK(sp[0].o))->F_abilities = (jref) sp[1].o;
	LINE_NUMBER(98);
	((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_armorOverride = (jfloat(-1.0f));
	LINE_NUMBER(100);
	((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_buildAlpha = (jfloat(0));
	LINE_NUMBER(102);
	((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_buildSpeedMultiplier = (jfloat(1));
	LINE_NUMBER(104);
	((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_damageMultiplier = (jfloat(1));
	LINE_NUMBER(112);
	((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_disarmed = (jint(0));
	LINE_NUMBER(117);
	((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_drag = (jfloat(0));
	LINE_NUMBER(119);
	((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_dragMultiplier = (jfloat(1));
	LINE_NUMBER(136);
	((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_healthMultiplier = (jfloat(1));
	LINE_NUMBER(142);
	sp[0].o = frame[0].o;
	jint temp0 = (jint)SM_mindustry_entities_EntityGroup_nextId_R_int(ctx);
	((mindustry_gen_Unit *) NULL_CHECK(sp[0].o))->F_id = temp0;
	LINE_NUMBER(144);
	((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_index__draw = (jint(-1));
	LINE_NUMBER(146);
	((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_index__sync = (jint(-1));
	LINE_NUMBER(148);
	((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_index__unit = (jint(-1));
	LINE_NUMBER(167);
	((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_maxHealth = (jfloat(1));
	LINE_NUMBER(175);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)createArray(ctx, &class_mindustry_entities_units_WeaponMount, (jint(0)));
	((mindustry_gen_Unit *) NULL_CHECK(sp[0].o))->F_mounts = (jref) sp[1].o;
	LINE_NUMBER(178);
	sp[0].o = frame[0].o;
	clinit_arc_struct_Queue(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_struct_Queue);
	init_arc_struct_Queue_int(ctx, sp[1].o, (jint(1)));
	((mindustry_gen_Unit *) NULL_CHECK(sp[0].o))->F_plans = (jref) sp[1].o;
	LINE_NUMBER(181);
	((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_reloadMultiplier = (jfloat(1));
	LINE_NUMBER(187);
	((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_shadowAlpha = (jfloat(-1.0f));
	LINE_NUMBER(191);
	((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_shieldAlpha = (jfloat(0));
	LINE_NUMBER(195);
	((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_speedMultiplier = (jfloat(1));
	LINE_NUMBER(199);
	sp[0].o = frame[0].o;
	clinit_mindustry_type_ItemStack(ctx);
	sp[1].o = gcAlloc(ctx, &class_mindustry_type_ItemStack);
	init_mindustry_type_ItemStack(ctx, sp[1].o);
	((mindustry_gen_Unit *) NULL_CHECK(sp[0].o))->F_stack = (jref) sp[1].o;
	LINE_NUMBER(201);
	sp[0].o = frame[0].o;
	clinit_mindustry_game_Team(ctx);
	sp[1].o = (jobject)SF_mindustry_game_Team_derelict;
	((mindustry_gen_Unit *) NULL_CHECK(sp[0].o))->F_team = (jref) sp[1].o;
	LINE_NUMBER(206);
	sp[0].o = frame[0].o;
	clinit_mindustry_content_UnitTypes(ctx);
	sp[1].o = (jobject)SF_mindustry_content_UnitTypes_alpha;
	((mindustry_gen_Unit *) NULL_CHECK(sp[0].o))->F_type = (jref) sp[1].o;
	LINE_NUMBER(208);
	((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_updateBuilding = (jint(1));
	LINE_NUMBER(213);
	sp[0].o = frame[0].o;
	clinit_arc_math_geom_Vec2(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_math_geom_Vec2);
	init_arc_math_geom_Vec2(ctx, sp[1].o);
	((mindustry_gen_Unit *) NULL_CHECK(sp[0].o))->F_vel = (jref) sp[1].o;
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_mindustry_gen_Unit_vel_R_arc_math_geom_Vec2(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/Unit:vel", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(226);
	sp[0].o = (jobject)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_vel;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_mindustry_gen_Unit_plans_R_arc_struct_Queue(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/Unit:plans", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(231);
	sp[0].o = (jobject)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_plans;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jbool M_mindustry_gen_Unit_dead_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/Unit:dead", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(236);
	popStackFrame(ctx);
	return ((jint)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_dead);
	}

	popStackFrame(ctx);
}

jbool M_mindustry_gen_Unit_disarmed_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/Unit:disarmed", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(241);
	popStackFrame(ctx);
	return ((jint)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_disarmed);
	}

	popStackFrame(ctx);
}

jbool M_mindustry_gen_Unit_hasPhysicsRef_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/Unit:hasPhysicsRef", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(246);
	popStackFrame(ctx);
	return ((jint)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_hasPhysicsRef);
	}

	popStackFrame(ctx);
}

jbool M_mindustry_gen_Unit_hasTarget_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/Unit:hasTarget", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(251);
	popStackFrame(ctx);
	return ((jint)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_hasTarget);
	}

	popStackFrame(ctx);
}

jbool M_mindustry_gen_Unit_isShooting_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/Unit:isShooting", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(256);
	popStackFrame(ctx);
	return ((jint)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_isShooting);
	}

	popStackFrame(ctx);
}

jbool M_mindustry_gen_Unit_spawnedByCore_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/Unit:spawnedByCore", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(261);
	popStackFrame(ctx);
	return ((jint)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_spawnedByCore);
	}

	popStackFrame(ctx);
}

jbool M_mindustry_gen_Unit_updateBuilding_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/Unit:updateBuilding", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(266);
	popStackFrame(ctx);
	return ((jint)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_updateBuilding);
	}

	popStackFrame(ctx);
}

jdouble M_mindustry_gen_Unit_flag_R_double(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/Unit:flag", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(271);
	popStackFrame(ctx);
	return ((jdouble)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_flag);
	}

	popStackFrame(ctx);
}

jfloat M_mindustry_gen_Unit_aimX_R_float(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/Unit:aimX", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(276);
	popStackFrame(ctx);
	return ((jfloat)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_aimX);
	}

	popStackFrame(ctx);
}

jfloat M_mindustry_gen_Unit_aimY_R_float(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/Unit:aimY", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(281);
	popStackFrame(ctx);
	return ((jfloat)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_aimY);
	}

	popStackFrame(ctx);
}

jfloat M_mindustry_gen_Unit_armor_R_float(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/Unit:armor", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(286);
	popStackFrame(ctx);
	return ((jfloat)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_armor);
	}

	popStackFrame(ctx);
}

jfloat M_mindustry_gen_Unit_armorOverride_R_float(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/Unit:armorOverride", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(291);
	popStackFrame(ctx);
	return ((jfloat)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_armorOverride);
	}

	popStackFrame(ctx);
}

jfloat M_mindustry_gen_Unit_buildAlpha_R_float(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/Unit:buildAlpha", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(296);
	popStackFrame(ctx);
	return ((jfloat)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_buildAlpha);
	}

	popStackFrame(ctx);
}

jfloat M_mindustry_gen_Unit_buildSpeedMultiplier_R_float(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/Unit:buildSpeedMultiplier", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(301);
	popStackFrame(ctx);
	return ((jfloat)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_buildSpeedMultiplier);
	}

	popStackFrame(ctx);
}

jfloat M_mindustry_gen_Unit_damageMultiplier_R_float(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/Unit:damageMultiplier", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(306);
	popStackFrame(ctx);
	return ((jfloat)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_damageMultiplier);
	}

	popStackFrame(ctx);
}

jfloat M_mindustry_gen_Unit_deltaX_R_float(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/Unit:deltaX", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(311);
	popStackFrame(ctx);
	return ((jfloat)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_deltaX);
	}

	popStackFrame(ctx);
}

jfloat M_mindustry_gen_Unit_deltaY_R_float(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/Unit:deltaY", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(316);
	popStackFrame(ctx);
	return ((jfloat)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_deltaY);
	}

	popStackFrame(ctx);
}

jfloat M_mindustry_gen_Unit_drag_R_float(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/Unit:drag", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(321);
	popStackFrame(ctx);
	return ((jfloat)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_drag);
	}

	popStackFrame(ctx);
}

jfloat M_mindustry_gen_Unit_dragMultiplier_R_float(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/Unit:dragMultiplier", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(326);
	popStackFrame(ctx);
	return ((jfloat)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_dragMultiplier);
	}

	popStackFrame(ctx);
}

jfloat M_mindustry_gen_Unit_drownTime_R_float(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/Unit:drownTime", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(331);
	popStackFrame(ctx);
	return ((jfloat)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_drownTime);
	}

	popStackFrame(ctx);
}

jfloat M_mindustry_gen_Unit_elevation_R_float(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/Unit:elevation", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(336);
	popStackFrame(ctx);
	return ((jfloat)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_elevation);
	}

	popStackFrame(ctx);
}

jfloat M_mindustry_gen_Unit_healTime_R_float(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/Unit:healTime", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(341);
	popStackFrame(ctx);
	return ((jfloat)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_healTime);
	}

	popStackFrame(ctx);
}

jfloat M_mindustry_gen_Unit_health_R_float(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/Unit:health", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(346);
	popStackFrame(ctx);
	return ((jfloat)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_health);
	}

	popStackFrame(ctx);
}

jfloat M_mindustry_gen_Unit_healthMultiplier_R_float(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/Unit:healthMultiplier", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(351);
	popStackFrame(ctx);
	return ((jfloat)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_healthMultiplier);
	}

	popStackFrame(ctx);
}

jfloat M_mindustry_gen_Unit_hitTime_R_float(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/Unit:hitTime", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(356);
	popStackFrame(ctx);
	return ((jfloat)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_hitTime);
	}

	popStackFrame(ctx);
}

jfloat M_mindustry_gen_Unit_itemTime_R_float(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/Unit:itemTime", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(361);
	popStackFrame(ctx);
	return ((jfloat)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_itemTime);
	}

	popStackFrame(ctx);
}

jfloat M_mindustry_gen_Unit_lastX_R_float(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/Unit:lastX", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(366);
	popStackFrame(ctx);
	return ((jfloat)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_lastX);
	}

	popStackFrame(ctx);
}

jfloat M_mindustry_gen_Unit_lastY_R_float(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/Unit:lastY", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(371);
	popStackFrame(ctx);
	return ((jfloat)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_lastY);
	}

	popStackFrame(ctx);
}

jfloat M_mindustry_gen_Unit_maxHealth_R_float(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/Unit:maxHealth", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(376);
	popStackFrame(ctx);
	return ((jfloat)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_maxHealth);
	}

	popStackFrame(ctx);
}

jfloat M_mindustry_gen_Unit_mineTimer_R_float(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/Unit:mineTimer", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(381);
	popStackFrame(ctx);
	return ((jfloat)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_mineTimer);
	}

	popStackFrame(ctx);
}

jfloat M_mindustry_gen_Unit_reloadMultiplier_R_float(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/Unit:reloadMultiplier", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(386);
	popStackFrame(ctx);
	return ((jfloat)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_reloadMultiplier);
	}

	popStackFrame(ctx);
}

jfloat M_mindustry_gen_Unit_rotation_R_float(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/Unit:rotation", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(391);
	popStackFrame(ctx);
	return ((jfloat)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_rotation);
	}

	popStackFrame(ctx);
}

jfloat M_mindustry_gen_Unit_shadowAlpha_R_float(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/Unit:shadowAlpha", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(396);
	popStackFrame(ctx);
	return ((jfloat)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_shadowAlpha);
	}

	popStackFrame(ctx);
}

jfloat M_mindustry_gen_Unit_shield_R_float(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/Unit:shield", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(401);
	popStackFrame(ctx);
	return ((jfloat)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_shield);
	}

	popStackFrame(ctx);
}

jfloat M_mindustry_gen_Unit_shieldAlpha_R_float(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/Unit:shieldAlpha", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(406);
	popStackFrame(ctx);
	return ((jfloat)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_shieldAlpha);
	}

	popStackFrame(ctx);
}

jfloat M_mindustry_gen_Unit_speedMultiplier_R_float(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/Unit:speedMultiplier", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(411);
	popStackFrame(ctx);
	return ((jfloat)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_speedMultiplier);
	}

	popStackFrame(ctx);
}

jfloat M_mindustry_gen_Unit_splashTimer_R_float(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/Unit:splashTimer", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(416);
	popStackFrame(ctx);
	return ((jfloat)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_splashTimer);
	}

	popStackFrame(ctx);
}

jfloat M_mindustry_gen_Unit_x_R_float(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/Unit:x", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(421);
	popStackFrame(ctx);
	return ((jfloat)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_x);
	}

	popStackFrame(ctx);
}

jfloat M_mindustry_gen_Unit_y_R_float(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/Unit:y", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(426);
	popStackFrame(ctx);
	return ((jfloat)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_y);
	}

	popStackFrame(ctx);
}

jint M_mindustry_gen_Unit_id_R_int(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/Unit:id", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(431);
	popStackFrame(ctx);
	return ((jint)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_id);
	}

	popStackFrame(ctx);
}

jint M_mindustry_gen_Unit_lastFogPos_R_int(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/Unit:lastFogPos", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(436);
	popStackFrame(ctx);
	return ((jint)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_lastFogPos);
	}

	popStackFrame(ctx);
}

jobject M_mindustry_gen_Unit_lastCommanded_R_java_lang_String(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/Unit:lastCommanded", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(441);
	sp[0].o = (jobject)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_lastCommanded;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jlong M_mindustry_gen_Unit_lastUpdated_R_long(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/Unit:lastUpdated", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(446);
	popStackFrame(ctx);
	return ((jlong)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_lastUpdated);
	}

	popStackFrame(ctx);
}

jlong M_mindustry_gen_Unit_updateSpacing_R_long(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/Unit:updateSpacing", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(451);
	popStackFrame(ctx);
	return ((jlong)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_updateSpacing);
	}

	popStackFrame(ctx);
}

jobject M_mindustry_gen_Unit_abilities_R_Array1_mindustry_entities_abilities_Ability(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/Unit:abilities", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(456);
	sp[0].o = (jobject)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_abilities;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_mindustry_gen_Unit_mounts_R_Array1_mindustry_entities_units_WeaponMount(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/Unit:mounts", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(461);
	sp[0].o = (jobject)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_mounts;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_mindustry_gen_Unit_team_R_mindustry_game_Team(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/Unit:team", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(466);
	sp[0].o = (jobject)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_team;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_mindustry_gen_Unit_trail_R_mindustry_graphics_Trail(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/Unit:trail", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(471);
	sp[0].o = (jobject)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_trail;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_mindustry_gen_Unit_stack_R_mindustry_type_ItemStack(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/Unit:stack", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(476);
	sp[0].o = (jobject)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_stack;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_mindustry_gen_Unit_dockedType_R_mindustry_type_UnitType(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/Unit:dockedType", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(481);
	sp[0].o = (jobject)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_dockedType;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_mindustry_gen_Unit_type_R_mindustry_type_UnitType(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/Unit:type", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(486);
	sp[0].o = (jobject)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_type;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_mindustry_gen_Unit_mineTile_R_mindustry_world_Tile(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/Unit:mineTile", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(491);
	sp[0].o = (jobject)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_mineTile;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_mindustry_gen_Unit_lastDrownFloor_R_mindustry_world_blocks_environment_Floor(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/Unit:lastDrownFloor", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(496);
	sp[0].o = (jobject)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_lastDrownFloor;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void M_mindustry_gen_Unit_abilities_Array1_mindustry_entities_abilities_Ability(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/Unit:abilities", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(501);
	((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_abilities = (jref) (frame[1].o);
	LINE_NUMBER(502);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_gen_Unit_aimX_float(jcontext ctx, jobject self, jfloat param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/Unit:aimX", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	{
	LINE_NUMBER(506);
	((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_aimX = (frame[1].f);
	LINE_NUMBER(507);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_gen_Unit_aimY_float(jcontext ctx, jobject self, jfloat param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/Unit:aimY", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	{
	LINE_NUMBER(511);
	((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_aimY = (frame[1].f);
	LINE_NUMBER(512);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_gen_Unit_armor_float(jcontext ctx, jobject self, jfloat param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/Unit:armor", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	{
	LINE_NUMBER(516);
	((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_armor = (frame[1].f);
	LINE_NUMBER(517);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_gen_Unit_armorOverride_float(jcontext ctx, jobject self, jfloat param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/Unit:armorOverride", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	{
	LINE_NUMBER(521);
	((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_armorOverride = (frame[1].f);
	LINE_NUMBER(522);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_gen_Unit_buildAlpha_float(jcontext ctx, jobject self, jfloat param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/Unit:buildAlpha", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	{
	LINE_NUMBER(526);
	((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_buildAlpha = (frame[1].f);
	LINE_NUMBER(527);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_gen_Unit_buildSpeedMultiplier_float(jcontext ctx, jobject self, jfloat param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/Unit:buildSpeedMultiplier", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	{
	LINE_NUMBER(531);
	((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_buildSpeedMultiplier = (frame[1].f);
	LINE_NUMBER(532);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_gen_Unit_damageMultiplier_float(jcontext ctx, jobject self, jfloat param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/Unit:damageMultiplier", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	{
	LINE_NUMBER(536);
	((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_damageMultiplier = (frame[1].f);
	LINE_NUMBER(537);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_gen_Unit_dead_boolean(jcontext ctx, jobject self, jbool param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/Unit:dead", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(541);
	((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_dead = (frame[1].i);
	LINE_NUMBER(542);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_gen_Unit_deltaX_float(jcontext ctx, jobject self, jfloat param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/Unit:deltaX", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	{
	LINE_NUMBER(546);
	((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_deltaX = (frame[1].f);
	LINE_NUMBER(547);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_gen_Unit_deltaY_float(jcontext ctx, jobject self, jfloat param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/Unit:deltaY", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	{
	LINE_NUMBER(551);
	((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_deltaY = (frame[1].f);
	LINE_NUMBER(552);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_gen_Unit_disarmed_boolean(jcontext ctx, jobject self, jbool param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/Unit:disarmed", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(556);
	((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_disarmed = (frame[1].i);
	LINE_NUMBER(557);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_gen_Unit_dockedType_mindustry_type_UnitType(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/Unit:dockedType", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(561);
	((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_dockedType = (jref) (frame[1].o);
	LINE_NUMBER(562);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_gen_Unit_drag_float(jcontext ctx, jobject self, jfloat param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/Unit:drag", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	{
	LINE_NUMBER(566);
	((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_drag = (frame[1].f);
	LINE_NUMBER(567);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_gen_Unit_dragMultiplier_float(jcontext ctx, jobject self, jfloat param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/Unit:dragMultiplier", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	{
	LINE_NUMBER(571);
	((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_dragMultiplier = (frame[1].f);
	LINE_NUMBER(572);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_gen_Unit_drownTime_float(jcontext ctx, jobject self, jfloat param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/Unit:drownTime", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	{
	LINE_NUMBER(576);
	((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_drownTime = (frame[1].f);
	LINE_NUMBER(577);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_gen_Unit_elevation_float(jcontext ctx, jobject self, jfloat param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/Unit:elevation", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	{
	LINE_NUMBER(581);
	((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_elevation = (frame[1].f);
	LINE_NUMBER(582);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_gen_Unit_flag_double(jcontext ctx, jobject self, jdouble param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/Unit:flag", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].d = param0;
	{
	LINE_NUMBER(586);
	((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_flag = (frame[1].d);
	LINE_NUMBER(587);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_gen_Unit_hasPhysicsRef_boolean(jcontext ctx, jobject self, jbool param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/Unit:hasPhysicsRef", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(591);
	((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_hasPhysicsRef = (frame[1].i);
	LINE_NUMBER(592);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_gen_Unit_hasTarget_boolean(jcontext ctx, jobject self, jbool param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/Unit:hasTarget", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(596);
	((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_hasTarget = (frame[1].i);
	LINE_NUMBER(597);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_gen_Unit_healTime_float(jcontext ctx, jobject self, jfloat param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/Unit:healTime", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	{
	LINE_NUMBER(601);
	((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_healTime = (frame[1].f);
	LINE_NUMBER(602);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_gen_Unit_health_float(jcontext ctx, jobject self, jfloat param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/Unit:health", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	{
	LINE_NUMBER(606);
	((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_health = (frame[1].f);
	LINE_NUMBER(607);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_gen_Unit_healthMultiplier_float(jcontext ctx, jobject self, jfloat param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/Unit:healthMultiplier", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	{
	LINE_NUMBER(611);
	((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_healthMultiplier = (frame[1].f);
	LINE_NUMBER(612);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_gen_Unit_hitSize_float(jcontext ctx, jobject self, jfloat param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/Unit:hitSize", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	{
	LINE_NUMBER(616);
	((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_hitSize = (frame[1].f);
	LINE_NUMBER(617);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_gen_Unit_hitTime_float(jcontext ctx, jobject self, jfloat param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/Unit:hitTime", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	{
	LINE_NUMBER(621);
	((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_hitTime = (frame[1].f);
	LINE_NUMBER(622);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_gen_Unit_id_int(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/Unit:id", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(626);
	((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_id = (frame[1].i);
	LINE_NUMBER(627);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_gen_Unit_isShooting_boolean(jcontext ctx, jobject self, jbool param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/Unit:isShooting", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(631);
	((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_isShooting = (frame[1].i);
	LINE_NUMBER(632);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_gen_Unit_itemTime_float(jcontext ctx, jobject self, jfloat param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/Unit:itemTime", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	{
	LINE_NUMBER(636);
	((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_itemTime = (frame[1].f);
	LINE_NUMBER(637);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_gen_Unit_lastCommanded_java_lang_String(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/Unit:lastCommanded", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(641);
	((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_lastCommanded = (jref) (frame[1].o);
	LINE_NUMBER(642);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_gen_Unit_lastDrownFloor_mindustry_world_blocks_environment_Floor(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/Unit:lastDrownFloor", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(646);
	((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_lastDrownFloor = (jref) (frame[1].o);
	LINE_NUMBER(647);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_gen_Unit_lastFogPos_int(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/Unit:lastFogPos", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(651);
	((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_lastFogPos = (frame[1].i);
	LINE_NUMBER(652);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_gen_Unit_lastUpdated_long(jcontext ctx, jobject self, jlong param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/Unit:lastUpdated", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].l = param0;
	{
	LINE_NUMBER(656);
	((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_lastUpdated = (frame[1].l);
	LINE_NUMBER(657);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_gen_Unit_lastX_float(jcontext ctx, jobject self, jfloat param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/Unit:lastX", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	{
	LINE_NUMBER(661);
	((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_lastX = (frame[1].f);
	LINE_NUMBER(662);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_gen_Unit_lastY_float(jcontext ctx, jobject self, jfloat param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/Unit:lastY", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	{
	LINE_NUMBER(666);
	((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_lastY = (frame[1].f);
	LINE_NUMBER(667);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_gen_Unit_maxHealth_float(jcontext ctx, jobject self, jfloat param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/Unit:maxHealth", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	{
	LINE_NUMBER(671);
	((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_maxHealth = (frame[1].f);
	LINE_NUMBER(672);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_gen_Unit_mineTile_mindustry_world_Tile(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/Unit:mineTile", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(676);
	((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_mineTile = (jref) (frame[1].o);
	LINE_NUMBER(677);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_gen_Unit_mineTimer_float(jcontext ctx, jobject self, jfloat param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/Unit:mineTimer", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	{
	LINE_NUMBER(681);
	((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_mineTimer = (frame[1].f);
	LINE_NUMBER(682);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_gen_Unit_mounts_Array1_mindustry_entities_units_WeaponMount(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/Unit:mounts", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(686);
	((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_mounts = (jref) (frame[1].o);
	LINE_NUMBER(687);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_gen_Unit_plans_arc_struct_Queue(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/Unit:plans", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(691);
	((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_plans = (jref) (frame[1].o);
	LINE_NUMBER(692);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_gen_Unit_reloadMultiplier_float(jcontext ctx, jobject self, jfloat param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/Unit:reloadMultiplier", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	{
	LINE_NUMBER(696);
	((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_reloadMultiplier = (frame[1].f);
	LINE_NUMBER(697);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_gen_Unit_rotation_float(jcontext ctx, jobject self, jfloat param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/Unit:rotation", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	{
	LINE_NUMBER(701);
	((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_rotation = (frame[1].f);
	LINE_NUMBER(702);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_gen_Unit_setIndex__draw_int(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/Unit:setIndex__draw", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(706);
	((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_index__draw = (frame[1].i);
	LINE_NUMBER(707);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_gen_Unit_setIndex__sync_int(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/Unit:setIndex__sync", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(711);
	((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_index__sync = (frame[1].i);
	LINE_NUMBER(712);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_gen_Unit_setIndex__unit_int(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/Unit:setIndex__unit", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(716);
	((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_index__unit = (frame[1].i);
	LINE_NUMBER(717);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_gen_Unit_shadowAlpha_float(jcontext ctx, jobject self, jfloat param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/Unit:shadowAlpha", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	{
	LINE_NUMBER(721);
	((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_shadowAlpha = (frame[1].f);
	LINE_NUMBER(722);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_gen_Unit_shield_float(jcontext ctx, jobject self, jfloat param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/Unit:shield", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	{
	LINE_NUMBER(726);
	((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_shield = (frame[1].f);
	LINE_NUMBER(727);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_gen_Unit_shieldAlpha_float(jcontext ctx, jobject self, jfloat param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/Unit:shieldAlpha", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	{
	LINE_NUMBER(731);
	((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_shieldAlpha = (frame[1].f);
	LINE_NUMBER(732);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_gen_Unit_spawnedByCore_boolean(jcontext ctx, jobject self, jbool param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/Unit:spawnedByCore", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(736);
	((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_spawnedByCore = (frame[1].i);
	LINE_NUMBER(737);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_gen_Unit_speedMultiplier_float(jcontext ctx, jobject self, jfloat param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/Unit:speedMultiplier", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	{
	LINE_NUMBER(741);
	((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_speedMultiplier = (frame[1].f);
	LINE_NUMBER(742);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_gen_Unit_splashTimer_float(jcontext ctx, jobject self, jfloat param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/Unit:splashTimer", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	{
	LINE_NUMBER(746);
	((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_splashTimer = (frame[1].f);
	LINE_NUMBER(747);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_gen_Unit_stack_mindustry_type_ItemStack(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/Unit:stack", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(751);
	((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_stack = (jref) (frame[1].o);
	LINE_NUMBER(752);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_gen_Unit_team_mindustry_game_Team(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/Unit:team", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(756);
	((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_team = (jref) (frame[1].o);
	LINE_NUMBER(757);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_gen_Unit_trail_mindustry_graphics_Trail(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/Unit:trail", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(761);
	((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_trail = (jref) (frame[1].o);
	LINE_NUMBER(762);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_gen_Unit_type_mindustry_type_UnitType(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/Unit:type", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(766);
	((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_type = (jref) (frame[1].o);
	LINE_NUMBER(767);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_gen_Unit_updateBuilding_boolean(jcontext ctx, jobject self, jbool param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/Unit:updateBuilding", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(771);
	((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_updateBuilding = (frame[1].i);
	LINE_NUMBER(772);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_gen_Unit_updateSpacing_long(jcontext ctx, jobject self, jlong param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/Unit:updateSpacing", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].l = param0;
	{
	LINE_NUMBER(776);
	((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_updateSpacing = (frame[1].l);
	LINE_NUMBER(777);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_gen_Unit_vel_arc_math_geom_Vec2(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/Unit:vel", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(781);
	((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_vel = (jref) (frame[1].o);
	LINE_NUMBER(782);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_gen_Unit_x_float(jcontext ctx, jobject self, jfloat param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/Unit:x", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	{
	LINE_NUMBER(786);
	((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_x = (frame[1].f);
	LINE_NUMBER(787);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_gen_Unit_y_float(jcontext ctx, jobject self, jfloat param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/Unit:y", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	{
	LINE_NUMBER(791);
	((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_y = (frame[1].f);
	LINE_NUMBER(792);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

static void initAnnotations(jcontext ctx) {
	auto &clazz = class_mindustry_gen_Unit;
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

	{ // Field dockedType
		auto annotationArray = (jarray) createArray(ctx, &class_java_lang_annotation_Annotation, 1);
		fields[12]->F_annotations = (intptr_t) annotationArray;
		auto annotations = (jobject *) annotationArray->data;
		annotations[0] = gcAlloc(ctx, &class_arc_util_Nullable);
	}

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

	fields[29]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[30]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[31]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	{ // Field lastDrownFloor
		auto annotationArray = (jarray) createArray(ctx, &class_java_lang_annotation_Annotation, 1);
		fields[32]->F_annotations = (intptr_t) annotationArray;
		auto annotations = (jobject *) annotationArray->data;
		annotations[0] = gcAlloc(ctx, &class_arc_util_Nullable);
	}

	fields[33]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[34]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[35]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[36]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[37]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	{ // Field mineTile
		auto annotationArray = (jarray) createArray(ctx, &class_java_lang_annotation_Annotation, 1);
		fields[38]->F_annotations = (intptr_t) annotationArray;
		auto annotations = (jobject *) annotationArray->data;
		annotations[0] = gcAlloc(ctx, &class_arc_util_Nullable);
	}

	fields[39]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[40]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[41]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[42]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[43]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[44]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[45]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[46]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[47]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[48]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[49]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[50]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[51]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	{ // Field trail
		auto annotationArray = (jarray) createArray(ctx, &class_java_lang_annotation_Annotation, 1);
		fields[52]->F_annotations = (intptr_t) annotationArray;
		auto annotations = (jobject *) annotationArray->data;
		annotations[0] = gcAlloc(ctx, &class_arc_util_Nullable);
	}

	fields[53]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[54]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[55]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[56]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[57]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[58]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

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
}

void *vtable_mindustry_gen_Unit[] {
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
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) M_mindustry_gen_Unit_id_R_int,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) M_mindustry_gen_Unit_id_int,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) M_arc_math_geom_Position_angleTo_arc_math_geom_Position_R_float,
	(void *) M_arc_math_geom_Position_angleTo_float_float_R_float,
	(void *) M_arc_math_geom_Position_dst2_arc_math_geom_Position_R_float,
	(void *) M_arc_math_geom_Position_dst_arc_math_geom_Position_R_float,
	(void *) M_arc_math_geom_Position_dst_float_float_R_float,
	(void *) M_arc_math_geom_Position_dst2_float_float_R_float,
	(void *) M_arc_math_geom_Position_within_arc_math_geom_Position_float_R_boolean,
	(void *) M_arc_math_geom_Position_within_float_float_float_R_boolean,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) M_mindustry_gen_Unit_x_R_float,
	(void *) M_mindustry_gen_Unit_y_R_float,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) M_mindustry_gen_Unit_x_float,
	(void *) M_mindustry_gen_Unit_y_float,
	(void *) M_mindustry_gen_Unit_rotation_R_float,
	(void *) M_mindustry_gen_Unit_rotation_float,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) M_mindustry_gen_Unit_disarmed_R_boolean,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) M_mindustry_gen_Unit_armorOverride_R_float,
	(void *) M_mindustry_gen_Unit_buildSpeedMultiplier_R_float,
	(void *) M_mindustry_gen_Unit_damageMultiplier_R_float,
	(void *) M_mindustry_gen_Unit_dragMultiplier_R_float,
	(void *) nullptr,
	(void *) M_mindustry_gen_Unit_healthMultiplier_R_float,
	(void *) M_mindustry_gen_Unit_reloadMultiplier_R_float,
	(void *) M_mindustry_gen_Unit_speedMultiplier_R_float,
	(void *) M_mindustry_gen_Unit_armorOverride_float,
	(void *) M_mindustry_gen_Unit_buildSpeedMultiplier_float,
	(void *) nullptr,
	(void *) M_mindustry_gen_Unit_damageMultiplier_float,
	(void *) M_mindustry_gen_Unit_disarmed_boolean,
	(void *) M_mindustry_gen_Unit_dragMultiplier_float,
	(void *) nullptr,
	(void *) M_mindustry_gen_Unit_healthMultiplier_float,
	(void *) M_mindustry_gen_Unit_reloadMultiplier_float,
	(void *) nullptr,
	(void *) M_mindustry_gen_Unit_speedMultiplier_float,
	(void *) nullptr,
	(void *) nullptr,
	(void *) M_mindustry_gen_Unit_team_R_mindustry_game_Team,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) M_mindustry_gen_Unit_team_mindustry_game_Team,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) M_mindustry_gen_Unit_plans_R_arc_struct_Queue,
	(void *) nullptr,
	(void *) nullptr,
	(void *) M_mindustry_gen_Unit_updateBuilding_R_boolean,
	(void *) M_mindustry_gen_Unit_buildAlpha_R_float,
	(void *) M_mindustry_gen_Unit_buildAlpha_float,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) M_mindustry_gen_Unit_plans_arc_struct_Queue,
	(void *) nullptr,
	(void *) nullptr,
	(void *) M_mindustry_gen_Unit_updateBuilding_boolean,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) M_mindustry_gen_Unit_dead_R_boolean,
	(void *) nullptr,
	(void *) M_mindustry_gen_Unit_health_R_float,
	(void *) nullptr,
	(void *) M_mindustry_gen_Unit_hitTime_R_float,
	(void *) M_mindustry_gen_Unit_maxHealth_R_float,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) M_mindustry_gen_Unit_dead_boolean,
	(void *) nullptr,
	(void *) M_mindustry_gen_Unit_health_float,
	(void *) M_mindustry_gen_Unit_hitTime_float,
	(void *) nullptr,
	(void *) nullptr,
	(void *) M_mindustry_gen_Unit_maxHealth_float,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) M_mindustry_gen_Unit_deltaX_R_float,
	(void *) M_mindustry_gen_Unit_deltaY_R_float,
	(void *) M_mindustry_gen_Unit_lastX_R_float,
	(void *) M_mindustry_gen_Unit_lastY_R_float,
	(void *) nullptr,
	(void *) M_mindustry_gen_Unit_deltaX_float,
	(void *) M_mindustry_gen_Unit_deltaY_float,
	(void *) nullptr,
	(void *) M_mindustry_gen_Unit_hitSize_float,
	(void *) nullptr,
	(void *) M_mindustry_gen_Unit_lastX_float,
	(void *) M_mindustry_gen_Unit_lastY_float,
	(void *) nullptr,
	(void *) M_mindustry_gen_Unit_setIndex__draw_int,
	(void *) M_mindustry_gen_Unit_setIndex__sync_int,
	(void *) M_mindustry_gen_Unit_setIndex__unit_int,
	(void *) nullptr,
	(void *) nullptr,
	(void *) M_mindustry_gen_Unit_itemTime_R_float,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) M_mindustry_gen_Unit_stack_R_mindustry_type_ItemStack,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) M_mindustry_gen_Unit_itemTime_float,
	(void *) M_mindustry_gen_Unit_stack_mindustry_type_ItemStack,
	(void *) M_mindustry_gen_Unit_mineTile_R_mindustry_world_Tile,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) M_mindustry_gen_Unit_mineTimer_R_float,
	(void *) nullptr,
	(void *) M_mindustry_gen_Unit_mineTile_mindustry_world_Tile,
	(void *) M_mindustry_gen_Unit_mineTimer_float,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) M_mindustry_gen_Unit_vel_R_arc_math_geom_Vec2,
	(void *) nullptr,
	(void *) nullptr,
	(void *) M_mindustry_gen_Unit_drag_R_float,
	(void *) M_mindustry_gen_Unit_drag_float,
	(void *) nullptr,
	(void *) nullptr,
	(void *) M_mindustry_gen_Unit_vel_arc_math_geom_Vec2,
	(void *) nullptr,
	(void *) nullptr,
	(void *) M_mindustry_gen_Unit_hasPhysicsRef_R_boolean,
	(void *) nullptr,
	(void *) M_mindustry_gen_Unit_hasPhysicsRef_boolean,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) M_mindustry_gen_Unit_shield_R_float,
	(void *) M_mindustry_gen_Unit_shield_float,
	(void *) M_mindustry_gen_Unit_shieldAlpha_R_float,
	(void *) M_mindustry_gen_Unit_shieldAlpha_float,
	(void *) M_mindustry_gen_Unit_armor_R_float,
	(void *) M_mindustry_gen_Unit_armor_float,
	(void *) nullptr,
	(void *) nullptr,
	(void *) M_mindustry_gen_Unit_lastUpdated_R_long,
	(void *) M_mindustry_gen_Unit_updateSpacing_R_long,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) M_mindustry_gen_Unit_lastUpdated_long,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) M_mindustry_gen_Unit_updateSpacing_long,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) M_mindustry_gen_Unit_mounts_R_Array1_mindustry_entities_units_WeaponMount,
	(void *) M_mindustry_gen_Unit_mounts_Array1_mindustry_entities_units_WeaponMount,
	(void *) nullptr,
	(void *) nullptr,
	(void *) M_mindustry_gen_Unit_isShooting_R_boolean,
	(void *) M_mindustry_gen_Unit_aimX_R_float,
	(void *) M_mindustry_gen_Unit_aimY_R_float,
	(void *) nullptr,
	(void *) M_mindustry_gen_Unit_aimX_float,
	(void *) M_mindustry_gen_Unit_aimY_float,
	(void *) nullptr,
	(void *) nullptr,
	(void *) M_mindustry_gen_Unit_isShooting_boolean,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) M_mindustry_logic_Senseable_sense_mindustry_ctype_Content_R_double,
	(void *) M_mindustry_logic_Senseable_senseObject_mindustry_logic_LAccess_R_java_lang_Object,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) M_mindustry_ui_Displayable_displayable_R_boolean,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) M_mindustry_gen_Unit_hasTarget_R_boolean,
	(void *) M_mindustry_gen_Unit_hasTarget_boolean,
	(void *) M_mindustry_gen_Unit_trail_R_mindustry_graphics_Trail,
	(void *) M_mindustry_gen_Unit_dockedType_R_mindustry_type_UnitType,
	(void *) M_mindustry_gen_Unit_lastDrownFloor_R_mindustry_world_blocks_environment_Floor,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) M_mindustry_gen_Unit_spawnedByCore_R_boolean,
	(void *) nullptr,
	(void *) M_mindustry_gen_Unit_flag_R_double,
	(void *) nullptr,
	(void *) nullptr,
	(void *) M_mindustry_gen_Unit_drownTime_R_float,
	(void *) M_mindustry_gen_Unit_elevation_R_float,
	(void *) nullptr,
	(void *) M_mindustry_gen_Unit_healTime_R_float,
	(void *) M_mindustry_gen_Unit_shadowAlpha_R_float,
	(void *) M_mindustry_gen_Unit_splashTimer_R_float,
	(void *) nullptr,
	(void *) nullptr,
	(void *) M_mindustry_gen_Unit_lastFogPos_R_int,
	(void *) M_mindustry_gen_Unit_lastCommanded_R_java_lang_String,
	(void *) nullptr,
	(void *) M_mindustry_gen_Unit_abilities_R_Array1_mindustry_entities_abilities_Ability,
	(void *) nullptr,
	(void *) M_mindustry_gen_Unit_type_R_mindustry_type_UnitType,
	(void *) nullptr,
	(void *) M_mindustry_gen_Unit_abilities_Array1_mindustry_entities_abilities_Ability,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) M_mindustry_gen_Unit_dockedType_mindustry_type_UnitType,
	(void *) M_mindustry_gen_Unit_drownTime_float,
	(void *) M_mindustry_gen_Unit_elevation_float,
	(void *) M_mindustry_gen_Unit_flag_double,
	(void *) M_mindustry_gen_Unit_healTime_float,
	(void *) nullptr,
	(void *) M_mindustry_gen_Unit_lastCommanded_java_lang_String,
	(void *) M_mindustry_gen_Unit_lastDrownFloor_mindustry_world_blocks_environment_Floor,
	(void *) M_mindustry_gen_Unit_lastFogPos_int,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) M_mindustry_gen_Unit_shadowAlpha_float,
	(void *) M_mindustry_gen_Unit_spawnedByCore_boolean,
	(void *) M_mindustry_gen_Unit_splashTimer_float,
	(void *) M_mindustry_gen_Unit_trail_mindustry_graphics_Trail,
	(void *) M_mindustry_gen_Unit_type_mindustry_type_UnitType,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
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
};

static jclass interfaces[] { &class_mindustry_gen_Builderc, &class_mindustry_gen_Drawc, &class_mindustry_gen_Entityc, &class_mindustry_gen_Healthc, &class_mindustry_gen_Hitboxc, &class_mindustry_gen_IndexableEntity__draw, &class_mindustry_gen_IndexableEntity__sync, &class_mindustry_gen_IndexableEntity__unit, &class_mindustry_gen_Itemsc, &class_mindustry_gen_Minerc, &class_mindustry_gen_Physicsc, &class_mindustry_gen_Posc, &class_mindustry_gen_Rotc, &class_mindustry_gen_Shieldc, &class_mindustry_gen_Statusc, &class_mindustry_gen_Syncc, &class_mindustry_gen_Teamc, &class_mindustry_gen_Unitc, &class_mindustry_gen_Velc, &class_mindustry_gen_Weaponsc, };

static FieldMetadata fields[] {
	{ "abilities", getArrayClass(&class_mindustry_entities_abilities_Ability, 1), offsetof(mindustry_gen_Unit, F_abilities), "[Lmindustry/entities/abilities/Ability;", 1 },
	{ "aimX", &class_float, offsetof(mindustry_gen_Unit, F_aimX), "F", 1 },
	{ "aimY", &class_float, offsetof(mindustry_gen_Unit, F_aimY), "F", 1 },
	{ "armor", &class_float, offsetof(mindustry_gen_Unit, F_armor), "F", 129 },
	{ "armorOverride", &class_float, offsetof(mindustry_gen_Unit, F_armorOverride), "F", 129 },
	{ "buildAlpha", &class_float, offsetof(mindustry_gen_Unit, F_buildAlpha), "F", 129 },
	{ "buildSpeedMultiplier", &class_float, offsetof(mindustry_gen_Unit, F_buildSpeedMultiplier), "F", 129 },
	{ "damageMultiplier", &class_float, offsetof(mindustry_gen_Unit, F_damageMultiplier), "F", 129 },
	{ "dead", &class_boolean, offsetof(mindustry_gen_Unit, F_dead), "Z", 129 },
	{ "deltaX", &class_float, offsetof(mindustry_gen_Unit, F_deltaX), "F", 129 },
	{ "deltaY", &class_float, offsetof(mindustry_gen_Unit, F_deltaY), "F", 129 },
	{ "disarmed", &class_boolean, offsetof(mindustry_gen_Unit, F_disarmed), "Z", 129 },
	{ "dockedType", &class_mindustry_type_UnitType, offsetof(mindustry_gen_Unit, F_dockedType), "Lmindustry/type/UnitType;", 129 },
	{ "drag", &class_float, offsetof(mindustry_gen_Unit, F_drag), "F", 129 },
	{ "dragMultiplier", &class_float, offsetof(mindustry_gen_Unit, F_dragMultiplier), "F", 129 },
	{ "drownTime", &class_float, offsetof(mindustry_gen_Unit, F_drownTime), "F", 129 },
	{ "elevation", &class_float, offsetof(mindustry_gen_Unit, F_elevation), "F", 1 },
	{ "flag", &class_double, offsetof(mindustry_gen_Unit, F_flag), "D", 1 },
	{ "hasPhysicsRef", &class_boolean, offsetof(mindustry_gen_Unit, F_hasPhysicsRef), "Z", 129 },
	{ "hasTarget", &class_boolean, offsetof(mindustry_gen_Unit, F_hasTarget), "Z", 129 },
	{ "healTime", &class_float, offsetof(mindustry_gen_Unit, F_healTime), "F", 129 },
	{ "health", &class_float, offsetof(mindustry_gen_Unit, F_health), "F", 1 },
	{ "healthMultiplier", &class_float, offsetof(mindustry_gen_Unit, F_healthMultiplier), "F", 129 },
	{ "hitSize", &class_float, offsetof(mindustry_gen_Unit, F_hitSize), "F", 129 },
	{ "hitTime", &class_float, offsetof(mindustry_gen_Unit, F_hitTime), "F", 129 },
	{ "id", &class_int, offsetof(mindustry_gen_Unit, F_id), "I", 129 },
	{ "index__draw", &class_int, offsetof(mindustry_gen_Unit, F_index__draw), "I", 132 },
	{ "index__sync", &class_int, offsetof(mindustry_gen_Unit, F_index__sync), "I", 132 },
	{ "index__unit", &class_int, offsetof(mindustry_gen_Unit, F_index__unit), "I", 132 },
	{ "isShooting", &class_boolean, offsetof(mindustry_gen_Unit, F_isShooting), "Z", 1 },
	{ "itemTime", &class_float, offsetof(mindustry_gen_Unit, F_itemTime), "F", 129 },
	{ "lastCommanded", &class_java_lang_String, offsetof(mindustry_gen_Unit, F_lastCommanded), "Ljava/lang/String;", 129 },
	{ "lastDrownFloor", &class_mindustry_world_blocks_environment_Floor, offsetof(mindustry_gen_Unit, F_lastDrownFloor), "Lmindustry/world/blocks/environment/Floor;", 129 },
	{ "lastFogPos", &class_int, offsetof(mindustry_gen_Unit, F_lastFogPos), "I", 129 },
	{ "lastUpdated", &class_long, offsetof(mindustry_gen_Unit, F_lastUpdated), "J", 129 },
	{ "lastX", &class_float, offsetof(mindustry_gen_Unit, F_lastX), "F", 129 },
	{ "lastY", &class_float, offsetof(mindustry_gen_Unit, F_lastY), "F", 129 },
	{ "maxHealth", &class_float, offsetof(mindustry_gen_Unit, F_maxHealth), "F", 129 },
	{ "mineTile", &class_mindustry_world_Tile, offsetof(mindustry_gen_Unit, F_mineTile), "Lmindustry/world/Tile;", 1 },
	{ "mineTimer", &class_float, offsetof(mindustry_gen_Unit, F_mineTimer), "F", 129 },
	{ "mounts", getArrayClass(&class_mindustry_entities_units_WeaponMount, 1), offsetof(mindustry_gen_Unit, F_mounts), "[Lmindustry/entities/units/WeaponMount;", 1 },
	{ "plans", &class_arc_struct_Queue, offsetof(mindustry_gen_Unit, F_plans), "Larc/struct/Queue;", 1 },
	{ "reloadMultiplier", &class_float, offsetof(mindustry_gen_Unit, F_reloadMultiplier), "F", 129 },
	{ "rotation", &class_float, offsetof(mindustry_gen_Unit, F_rotation), "F", 1 },
	{ "shadowAlpha", &class_float, offsetof(mindustry_gen_Unit, F_shadowAlpha), "F", 129 },
	{ "shield", &class_float, offsetof(mindustry_gen_Unit, F_shield), "F", 1 },
	{ "shieldAlpha", &class_float, offsetof(mindustry_gen_Unit, F_shieldAlpha), "F", 129 },
	{ "spawnedByCore", &class_boolean, offsetof(mindustry_gen_Unit, F_spawnedByCore), "Z", 1 },
	{ "speedMultiplier", &class_float, offsetof(mindustry_gen_Unit, F_speedMultiplier), "F", 129 },
	{ "splashTimer", &class_float, offsetof(mindustry_gen_Unit, F_splashTimer), "F", 129 },
	{ "stack", &class_mindustry_type_ItemStack, offsetof(mindustry_gen_Unit, F_stack), "Lmindustry/type/ItemStack;", 1 },
	{ "team", &class_mindustry_game_Team, offsetof(mindustry_gen_Unit, F_team), "Lmindustry/game/Team;", 1 },
	{ "trail", &class_mindustry_graphics_Trail, offsetof(mindustry_gen_Unit, F_trail), "Lmindustry/graphics/Trail;", 129 },
	{ "type", &class_mindustry_type_UnitType, offsetof(mindustry_gen_Unit, F_type), "Lmindustry/type/UnitType;", 1 },
	{ "updateBuilding", &class_boolean, offsetof(mindustry_gen_Unit, F_updateBuilding), "Z", 1 },
	{ "updateSpacing", &class_long, offsetof(mindustry_gen_Unit, F_updateSpacing), "J", 129 },
	{ "vel", &class_arc_math_geom_Vec2, offsetof(mindustry_gen_Unit, F_vel), "Larc/math/geom/Vec2;", 1 },
	{ "x", &class_float, offsetof(mindustry_gen_Unit, F_x), "F", 1 },
	{ "y", &class_float, offsetof(mindustry_gen_Unit, F_y), "F", 1 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_mindustry_gen_Unit, 0, "()V", 1 },
	{ "vel", (intptr_t) M_mindustry_gen_Unit_vel_R_arc_math_geom_Vec2, VTABLE_mindustry_gen_Unit_vel_R_arc_math_geom_Vec2, "()Larc/math/geom/Vec2;", 1 },
	{ "plans", (intptr_t) M_mindustry_gen_Unit_plans_R_arc_struct_Queue, VTABLE_mindustry_gen_Unit_plans_R_arc_struct_Queue, "()Larc/struct/Queue;", 1 },
	{ "dead", (intptr_t) M_mindustry_gen_Unit_dead_R_boolean, VTABLE_mindustry_gen_Unit_dead_R_boolean, "()Z", 1 },
	{ "disarmed", (intptr_t) M_mindustry_gen_Unit_disarmed_R_boolean, VTABLE_mindustry_gen_Unit_disarmed_R_boolean, "()Z", 1 },
	{ "hasPhysicsRef", (intptr_t) M_mindustry_gen_Unit_hasPhysicsRef_R_boolean, VTABLE_mindustry_gen_Unit_hasPhysicsRef_R_boolean, "()Z", 1 },
	{ "hasTarget", (intptr_t) M_mindustry_gen_Unit_hasTarget_R_boolean, VTABLE_mindustry_gen_Unit_hasTarget_R_boolean, "()Z", 1 },
	{ "isShooting", (intptr_t) M_mindustry_gen_Unit_isShooting_R_boolean, VTABLE_mindustry_gen_Unit_isShooting_R_boolean, "()Z", 1 },
	{ "spawnedByCore", (intptr_t) M_mindustry_gen_Unit_spawnedByCore_R_boolean, VTABLE_mindustry_gen_Unit_spawnedByCore_R_boolean, "()Z", 1 },
	{ "updateBuilding", (intptr_t) M_mindustry_gen_Unit_updateBuilding_R_boolean, VTABLE_mindustry_gen_Unit_updateBuilding_R_boolean, "()Z", 1 },
	{ "flag", (intptr_t) M_mindustry_gen_Unit_flag_R_double, VTABLE_mindustry_gen_Unit_flag_R_double, "()D", 1 },
	{ "aimX", (intptr_t) M_mindustry_gen_Unit_aimX_R_float, VTABLE_mindustry_gen_Unit_aimX_R_float, "()F", 1 },
	{ "aimY", (intptr_t) M_mindustry_gen_Unit_aimY_R_float, VTABLE_mindustry_gen_Unit_aimY_R_float, "()F", 1 },
	{ "armor", (intptr_t) M_mindustry_gen_Unit_armor_R_float, VTABLE_mindustry_gen_Unit_armor_R_float, "()F", 1 },
	{ "armorOverride", (intptr_t) M_mindustry_gen_Unit_armorOverride_R_float, VTABLE_mindustry_gen_Unit_armorOverride_R_float, "()F", 1 },
	{ "buildAlpha", (intptr_t) M_mindustry_gen_Unit_buildAlpha_R_float, VTABLE_mindustry_gen_Unit_buildAlpha_R_float, "()F", 1 },
	{ "buildSpeedMultiplier", (intptr_t) M_mindustry_gen_Unit_buildSpeedMultiplier_R_float, VTABLE_mindustry_gen_Unit_buildSpeedMultiplier_R_float, "()F", 1 },
	{ "damageMultiplier", (intptr_t) M_mindustry_gen_Unit_damageMultiplier_R_float, VTABLE_mindustry_gen_Unit_damageMultiplier_R_float, "()F", 1 },
	{ "deltaX", (intptr_t) M_mindustry_gen_Unit_deltaX_R_float, VTABLE_mindustry_gen_Unit_deltaX_R_float, "()F", 1 },
	{ "deltaY", (intptr_t) M_mindustry_gen_Unit_deltaY_R_float, VTABLE_mindustry_gen_Unit_deltaY_R_float, "()F", 1 },
	{ "drag", (intptr_t) M_mindustry_gen_Unit_drag_R_float, VTABLE_mindustry_gen_Unit_drag_R_float, "()F", 1 },
	{ "dragMultiplier", (intptr_t) M_mindustry_gen_Unit_dragMultiplier_R_float, VTABLE_mindustry_gen_Unit_dragMultiplier_R_float, "()F", 1 },
	{ "drownTime", (intptr_t) M_mindustry_gen_Unit_drownTime_R_float, VTABLE_mindustry_gen_Unit_drownTime_R_float, "()F", 1 },
	{ "elevation", (intptr_t) M_mindustry_gen_Unit_elevation_R_float, VTABLE_mindustry_gen_Unit_elevation_R_float, "()F", 1 },
	{ "healTime", (intptr_t) M_mindustry_gen_Unit_healTime_R_float, VTABLE_mindustry_gen_Unit_healTime_R_float, "()F", 1 },
	{ "health", (intptr_t) M_mindustry_gen_Unit_health_R_float, VTABLE_mindustry_gen_Unit_health_R_float, "()F", 1 },
	{ "healthMultiplier", (intptr_t) M_mindustry_gen_Unit_healthMultiplier_R_float, VTABLE_mindustry_gen_Unit_healthMultiplier_R_float, "()F", 1 },
	{ "hitTime", (intptr_t) M_mindustry_gen_Unit_hitTime_R_float, VTABLE_mindustry_gen_Unit_hitTime_R_float, "()F", 1 },
	{ "itemTime", (intptr_t) M_mindustry_gen_Unit_itemTime_R_float, VTABLE_mindustry_gen_Unit_itemTime_R_float, "()F", 1 },
	{ "lastX", (intptr_t) M_mindustry_gen_Unit_lastX_R_float, VTABLE_mindustry_gen_Unit_lastX_R_float, "()F", 1 },
	{ "lastY", (intptr_t) M_mindustry_gen_Unit_lastY_R_float, VTABLE_mindustry_gen_Unit_lastY_R_float, "()F", 1 },
	{ "maxHealth", (intptr_t) M_mindustry_gen_Unit_maxHealth_R_float, VTABLE_mindustry_gen_Unit_maxHealth_R_float, "()F", 1 },
	{ "mineTimer", (intptr_t) M_mindustry_gen_Unit_mineTimer_R_float, VTABLE_mindustry_gen_Unit_mineTimer_R_float, "()F", 1 },
	{ "reloadMultiplier", (intptr_t) M_mindustry_gen_Unit_reloadMultiplier_R_float, VTABLE_mindustry_gen_Unit_reloadMultiplier_R_float, "()F", 1 },
	{ "rotation", (intptr_t) M_mindustry_gen_Unit_rotation_R_float, VTABLE_mindustry_gen_Unit_rotation_R_float, "()F", 1 },
	{ "shadowAlpha", (intptr_t) M_mindustry_gen_Unit_shadowAlpha_R_float, VTABLE_mindustry_gen_Unit_shadowAlpha_R_float, "()F", 1 },
	{ "shield", (intptr_t) M_mindustry_gen_Unit_shield_R_float, VTABLE_mindustry_gen_Unit_shield_R_float, "()F", 1 },
	{ "shieldAlpha", (intptr_t) M_mindustry_gen_Unit_shieldAlpha_R_float, VTABLE_mindustry_gen_Unit_shieldAlpha_R_float, "()F", 1 },
	{ "speedMultiplier", (intptr_t) M_mindustry_gen_Unit_speedMultiplier_R_float, VTABLE_mindustry_gen_Unit_speedMultiplier_R_float, "()F", 1 },
	{ "splashTimer", (intptr_t) M_mindustry_gen_Unit_splashTimer_R_float, VTABLE_mindustry_gen_Unit_splashTimer_R_float, "()F", 1 },
	{ "x", (intptr_t) M_mindustry_gen_Unit_x_R_float, VTABLE_mindustry_gen_Unit_x_R_float, "()F", 1 },
	{ "y", (intptr_t) M_mindustry_gen_Unit_y_R_float, VTABLE_mindustry_gen_Unit_y_R_float, "()F", 1 },
	{ "id", (intptr_t) M_mindustry_gen_Unit_id_R_int, VTABLE_mindustry_gen_Unit_id_R_int, "()I", 1 },
	{ "lastFogPos", (intptr_t) M_mindustry_gen_Unit_lastFogPos_R_int, VTABLE_mindustry_gen_Unit_lastFogPos_R_int, "()I", 1 },
	{ "lastCommanded", (intptr_t) M_mindustry_gen_Unit_lastCommanded_R_java_lang_String, VTABLE_mindustry_gen_Unit_lastCommanded_R_java_lang_String, "()Ljava/lang/String;", 1 },
	{ "lastUpdated", (intptr_t) M_mindustry_gen_Unit_lastUpdated_R_long, VTABLE_mindustry_gen_Unit_lastUpdated_R_long, "()J", 1 },
	{ "updateSpacing", (intptr_t) M_mindustry_gen_Unit_updateSpacing_R_long, VTABLE_mindustry_gen_Unit_updateSpacing_R_long, "()J", 1 },
	{ "abilities", (intptr_t) M_mindustry_gen_Unit_abilities_R_Array1_mindustry_entities_abilities_Ability, VTABLE_mindustry_gen_Unit_abilities_R_Array1_mindustry_entities_abilities_Ability, "()[Lmindustry/entities/abilities/Ability;", 1 },
	{ "mounts", (intptr_t) M_mindustry_gen_Unit_mounts_R_Array1_mindustry_entities_units_WeaponMount, VTABLE_mindustry_gen_Unit_mounts_R_Array1_mindustry_entities_units_WeaponMount, "()[Lmindustry/entities/units/WeaponMount;", 1 },
	{ "team", (intptr_t) M_mindustry_gen_Unit_team_R_mindustry_game_Team, VTABLE_mindustry_gen_Unit_team_R_mindustry_game_Team, "()Lmindustry/game/Team;", 1 },
	{ "trail", (intptr_t) M_mindustry_gen_Unit_trail_R_mindustry_graphics_Trail, VTABLE_mindustry_gen_Unit_trail_R_mindustry_graphics_Trail, "()Lmindustry/graphics/Trail;", 1 },
	{ "stack", (intptr_t) M_mindustry_gen_Unit_stack_R_mindustry_type_ItemStack, VTABLE_mindustry_gen_Unit_stack_R_mindustry_type_ItemStack, "()Lmindustry/type/ItemStack;", 1 },
	{ "dockedType", (intptr_t) M_mindustry_gen_Unit_dockedType_R_mindustry_type_UnitType, VTABLE_mindustry_gen_Unit_dockedType_R_mindustry_type_UnitType, "()Lmindustry/type/UnitType;", 1 },
	{ "type", (intptr_t) M_mindustry_gen_Unit_type_R_mindustry_type_UnitType, VTABLE_mindustry_gen_Unit_type_R_mindustry_type_UnitType, "()Lmindustry/type/UnitType;", 1 },
	{ "mineTile", (intptr_t) M_mindustry_gen_Unit_mineTile_R_mindustry_world_Tile, VTABLE_mindustry_gen_Unit_mineTile_R_mindustry_world_Tile, "()Lmindustry/world/Tile;", 1 },
	{ "lastDrownFloor", (intptr_t) M_mindustry_gen_Unit_lastDrownFloor_R_mindustry_world_blocks_environment_Floor, VTABLE_mindustry_gen_Unit_lastDrownFloor_R_mindustry_world_blocks_environment_Floor, "()Lmindustry/world/blocks/environment/Floor;", 1 },
	{ "abilities", (intptr_t) M_mindustry_gen_Unit_abilities_Array1_mindustry_entities_abilities_Ability, VTABLE_mindustry_gen_Unit_abilities_Array1_mindustry_entities_abilities_Ability, "([Lmindustry/entities/abilities/Ability;)V", 1 },
	{ "aimX", (intptr_t) M_mindustry_gen_Unit_aimX_float, VTABLE_mindustry_gen_Unit_aimX_float, "(F)V", 1 },
	{ "aimY", (intptr_t) M_mindustry_gen_Unit_aimY_float, VTABLE_mindustry_gen_Unit_aimY_float, "(F)V", 1 },
	{ "armor", (intptr_t) M_mindustry_gen_Unit_armor_float, VTABLE_mindustry_gen_Unit_armor_float, "(F)V", 1 },
	{ "armorOverride", (intptr_t) M_mindustry_gen_Unit_armorOverride_float, VTABLE_mindustry_gen_Unit_armorOverride_float, "(F)V", 1 },
	{ "buildAlpha", (intptr_t) M_mindustry_gen_Unit_buildAlpha_float, VTABLE_mindustry_gen_Unit_buildAlpha_float, "(F)V", 1 },
	{ "buildSpeedMultiplier", (intptr_t) M_mindustry_gen_Unit_buildSpeedMultiplier_float, VTABLE_mindustry_gen_Unit_buildSpeedMultiplier_float, "(F)V", 1 },
	{ "damageMultiplier", (intptr_t) M_mindustry_gen_Unit_damageMultiplier_float, VTABLE_mindustry_gen_Unit_damageMultiplier_float, "(F)V", 1 },
	{ "dead", (intptr_t) M_mindustry_gen_Unit_dead_boolean, VTABLE_mindustry_gen_Unit_dead_boolean, "(Z)V", 1 },
	{ "deltaX", (intptr_t) M_mindustry_gen_Unit_deltaX_float, VTABLE_mindustry_gen_Unit_deltaX_float, "(F)V", 1 },
	{ "deltaY", (intptr_t) M_mindustry_gen_Unit_deltaY_float, VTABLE_mindustry_gen_Unit_deltaY_float, "(F)V", 1 },
	{ "disarmed", (intptr_t) M_mindustry_gen_Unit_disarmed_boolean, VTABLE_mindustry_gen_Unit_disarmed_boolean, "(Z)V", 1 },
	{ "dockedType", (intptr_t) M_mindustry_gen_Unit_dockedType_mindustry_type_UnitType, VTABLE_mindustry_gen_Unit_dockedType_mindustry_type_UnitType, "(Lmindustry/type/UnitType;)V", 1 },
	{ "drag", (intptr_t) M_mindustry_gen_Unit_drag_float, VTABLE_mindustry_gen_Unit_drag_float, "(F)V", 1 },
	{ "dragMultiplier", (intptr_t) M_mindustry_gen_Unit_dragMultiplier_float, VTABLE_mindustry_gen_Unit_dragMultiplier_float, "(F)V", 1 },
	{ "drownTime", (intptr_t) M_mindustry_gen_Unit_drownTime_float, VTABLE_mindustry_gen_Unit_drownTime_float, "(F)V", 1 },
	{ "elevation", (intptr_t) M_mindustry_gen_Unit_elevation_float, VTABLE_mindustry_gen_Unit_elevation_float, "(F)V", 1 },
	{ "flag", (intptr_t) M_mindustry_gen_Unit_flag_double, VTABLE_mindustry_gen_Unit_flag_double, "(D)V", 1 },
	{ "hasPhysicsRef", (intptr_t) M_mindustry_gen_Unit_hasPhysicsRef_boolean, VTABLE_mindustry_gen_Unit_hasPhysicsRef_boolean, "(Z)V", 1 },
	{ "hasTarget", (intptr_t) M_mindustry_gen_Unit_hasTarget_boolean, VTABLE_mindustry_gen_Unit_hasTarget_boolean, "(Z)V", 1 },
	{ "healTime", (intptr_t) M_mindustry_gen_Unit_healTime_float, VTABLE_mindustry_gen_Unit_healTime_float, "(F)V", 1 },
	{ "health", (intptr_t) M_mindustry_gen_Unit_health_float, VTABLE_mindustry_gen_Unit_health_float, "(F)V", 1 },
	{ "healthMultiplier", (intptr_t) M_mindustry_gen_Unit_healthMultiplier_float, VTABLE_mindustry_gen_Unit_healthMultiplier_float, "(F)V", 1 },
	{ "hitSize", (intptr_t) M_mindustry_gen_Unit_hitSize_float, VTABLE_mindustry_gen_Unit_hitSize_float, "(F)V", 1 },
	{ "hitTime", (intptr_t) M_mindustry_gen_Unit_hitTime_float, VTABLE_mindustry_gen_Unit_hitTime_float, "(F)V", 1 },
	{ "id", (intptr_t) M_mindustry_gen_Unit_id_int, VTABLE_mindustry_gen_Unit_id_int, "(I)V", 1 },
	{ "isShooting", (intptr_t) M_mindustry_gen_Unit_isShooting_boolean, VTABLE_mindustry_gen_Unit_isShooting_boolean, "(Z)V", 1 },
	{ "itemTime", (intptr_t) M_mindustry_gen_Unit_itemTime_float, VTABLE_mindustry_gen_Unit_itemTime_float, "(F)V", 1 },
	{ "lastCommanded", (intptr_t) M_mindustry_gen_Unit_lastCommanded_java_lang_String, VTABLE_mindustry_gen_Unit_lastCommanded_java_lang_String, "(Ljava/lang/String;)V", 1 },
	{ "lastDrownFloor", (intptr_t) M_mindustry_gen_Unit_lastDrownFloor_mindustry_world_blocks_environment_Floor, VTABLE_mindustry_gen_Unit_lastDrownFloor_mindustry_world_blocks_environment_Floor, "(Lmindustry/world/blocks/environment/Floor;)V", 1 },
	{ "lastFogPos", (intptr_t) M_mindustry_gen_Unit_lastFogPos_int, VTABLE_mindustry_gen_Unit_lastFogPos_int, "(I)V", 1 },
	{ "lastUpdated", (intptr_t) M_mindustry_gen_Unit_lastUpdated_long, VTABLE_mindustry_gen_Unit_lastUpdated_long, "(J)V", 1 },
	{ "lastX", (intptr_t) M_mindustry_gen_Unit_lastX_float, VTABLE_mindustry_gen_Unit_lastX_float, "(F)V", 1 },
	{ "lastY", (intptr_t) M_mindustry_gen_Unit_lastY_float, VTABLE_mindustry_gen_Unit_lastY_float, "(F)V", 1 },
	{ "maxHealth", (intptr_t) M_mindustry_gen_Unit_maxHealth_float, VTABLE_mindustry_gen_Unit_maxHealth_float, "(F)V", 1 },
	{ "mineTile", (intptr_t) M_mindustry_gen_Unit_mineTile_mindustry_world_Tile, VTABLE_mindustry_gen_Unit_mineTile_mindustry_world_Tile, "(Lmindustry/world/Tile;)V", 1 },
	{ "mineTimer", (intptr_t) M_mindustry_gen_Unit_mineTimer_float, VTABLE_mindustry_gen_Unit_mineTimer_float, "(F)V", 1 },
	{ "mounts", (intptr_t) M_mindustry_gen_Unit_mounts_Array1_mindustry_entities_units_WeaponMount, VTABLE_mindustry_gen_Unit_mounts_Array1_mindustry_entities_units_WeaponMount, "([Lmindustry/entities/units/WeaponMount;)V", 1 },
	{ "plans", (intptr_t) M_mindustry_gen_Unit_plans_arc_struct_Queue, VTABLE_mindustry_gen_Unit_plans_arc_struct_Queue, "(Larc/struct/Queue;)V", 1 },
	{ "reloadMultiplier", (intptr_t) M_mindustry_gen_Unit_reloadMultiplier_float, VTABLE_mindustry_gen_Unit_reloadMultiplier_float, "(F)V", 1 },
	{ "rotation", (intptr_t) M_mindustry_gen_Unit_rotation_float, VTABLE_mindustry_gen_Unit_rotation_float, "(F)V", 1 },
	{ "setIndex__draw", (intptr_t) M_mindustry_gen_Unit_setIndex__draw_int, VTABLE_mindustry_gen_Unit_setIndex__draw_int, "(I)V", 1 },
	{ "setIndex__sync", (intptr_t) M_mindustry_gen_Unit_setIndex__sync_int, VTABLE_mindustry_gen_Unit_setIndex__sync_int, "(I)V", 1 },
	{ "setIndex__unit", (intptr_t) M_mindustry_gen_Unit_setIndex__unit_int, VTABLE_mindustry_gen_Unit_setIndex__unit_int, "(I)V", 1 },
	{ "shadowAlpha", (intptr_t) M_mindustry_gen_Unit_shadowAlpha_float, VTABLE_mindustry_gen_Unit_shadowAlpha_float, "(F)V", 1 },
	{ "shield", (intptr_t) M_mindustry_gen_Unit_shield_float, VTABLE_mindustry_gen_Unit_shield_float, "(F)V", 1 },
	{ "shieldAlpha", (intptr_t) M_mindustry_gen_Unit_shieldAlpha_float, VTABLE_mindustry_gen_Unit_shieldAlpha_float, "(F)V", 1 },
	{ "spawnedByCore", (intptr_t) M_mindustry_gen_Unit_spawnedByCore_boolean, VTABLE_mindustry_gen_Unit_spawnedByCore_boolean, "(Z)V", 1 },
	{ "speedMultiplier", (intptr_t) M_mindustry_gen_Unit_speedMultiplier_float, VTABLE_mindustry_gen_Unit_speedMultiplier_float, "(F)V", 1 },
	{ "splashTimer", (intptr_t) M_mindustry_gen_Unit_splashTimer_float, VTABLE_mindustry_gen_Unit_splashTimer_float, "(F)V", 1 },
	{ "stack", (intptr_t) M_mindustry_gen_Unit_stack_mindustry_type_ItemStack, VTABLE_mindustry_gen_Unit_stack_mindustry_type_ItemStack, "(Lmindustry/type/ItemStack;)V", 1 },
	{ "team", (intptr_t) M_mindustry_gen_Unit_team_mindustry_game_Team, VTABLE_mindustry_gen_Unit_team_mindustry_game_Team, "(Lmindustry/game/Team;)V", 1 },
	{ "trail", (intptr_t) M_mindustry_gen_Unit_trail_mindustry_graphics_Trail, VTABLE_mindustry_gen_Unit_trail_mindustry_graphics_Trail, "(Lmindustry/graphics/Trail;)V", 1 },
	{ "type", (intptr_t) M_mindustry_gen_Unit_type_mindustry_type_UnitType, VTABLE_mindustry_gen_Unit_type_mindustry_type_UnitType, "(Lmindustry/type/UnitType;)V", 1 },
	{ "updateBuilding", (intptr_t) M_mindustry_gen_Unit_updateBuilding_boolean, VTABLE_mindustry_gen_Unit_updateBuilding_boolean, "(Z)V", 1 },
	{ "updateSpacing", (intptr_t) M_mindustry_gen_Unit_updateSpacing_long, VTABLE_mindustry_gen_Unit_updateSpacing_long, "(J)V", 1 },
	{ "vel", (intptr_t) M_mindustry_gen_Unit_vel_arc_math_geom_Vec2, VTABLE_mindustry_gen_Unit_vel_arc_math_geom_Vec2, "(Larc/math/geom/Vec2;)V", 1 },
	{ "x", (intptr_t) M_mindustry_gen_Unit_x_float, VTABLE_mindustry_gen_Unit_x_float, "(F)V", 1 },
	{ "y", (intptr_t) M_mindustry_gen_Unit_y_float, VTABLE_mindustry_gen_Unit_y_float, "(F)V", 1 },
};

Class class_mindustry_gen_Unit{
		.nativeName = (intptr_t) "mindustry/gen/Unit",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(mindustry_gen_Unit),
		.classVtable = (intptr_t) vtable_mindustry_gen_Unit,
		.staticInitializer = (intptr_t) clinit_mindustry_gen_Unit,
		.annotationInitializer = (intptr_t) initAnnotations,
		.markFunction = (intptr_t) mark_mindustry_gen_Unit,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 1057,
		.interfaceCount = 20,
		.nativeInterfaces = (intptr_t) interfaces,
		.fieldCount = 59,
		.nativeFields = (intptr_t) fields,
		.methodCount = 115,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 342,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_mindustry_gen_Unit = registerClass(&class_mindustry_gen_Unit);

}
