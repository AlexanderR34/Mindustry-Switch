#include "mindustry/entities/comp/BulletComp.h"
#include "mindustry/gen/Damagec.h"
#include "arc/math/Angles.h"
#include "mindustry/gen/Bulletc.h"
#include "mindustry/entities/Sized.h"
#include "arc/math/geom/Rect.h"
#include "mindustry/ctype/UnlockableContent.h"
#include "mindustry/logic/Settable.h"
#include "mindustry/logic/LAccess.h"
#include "arc/graphics/Color.h"
#include "arc/graphics/g2d/Draw.h"
#include "java/lang/Runnable.h"
#include "java/lang/reflect/Constructor.h"
#include "mindustry/gen/Entityc.h"
#include "arc/util/Tmp.h"
#include "arc/struct/Seq.h"
#include "java/lang/reflect/Method.h"
#include "mindustry/entities/Mover.h"
#include "mindustry/world/Tile.h"
#include "mindustry/gen/Healthc.h"
#include "arc/math/geom/Position.h"
#include "arc/math/Mathf.h"
#include "java/lang/reflect/Field.h"
#include "mindustry/gen/Unit.h"
#include "mindustry/gen/Shielderc.h"
#include "arc/math/geom/QuadTree.h"
#include "arc/util/Time.h"
#include "arc/util/Nullable.h"
#include "mindustry/gen/Building.h"
#include "mindustry/gen/Timedc.h"
#include "mindustry/gen/Posc.h"
#include "mindustry/graphics/Trail.h"
#include "java/lang/Object.h"
#include "mindustry/gen/Bullet.h"
#include "mindustry/gen/Hitboxc.h"
#include "mindustry/entities/bullet/BulletType.h"
#include "mindustry/world/blocks/environment/StaticWall.h"
#include "arc/math/geom/Vec2.h"
#include "mindustry/entities/comp/BulletComp_1.h"
#include "mindustry/world/Block.h"
#include "mindustry/gen/Groups.h"
#include "arc/struct/IntSeq.h"
#include "mindustry/gen/Rotc.h"
#include "arc/math/Scaled.h"
#include "mindustry/gen/Unitc.h"
#include "arc/func/Cons.h"
#include "mindustry/entities/comp/BulletComp_invoke_java_lang_Runnable_0.h"
#include "mindustry/world/blocks/environment/Floor.h"
#include "arc/math/geom/Geometry.h"
#include "java/lang/Math.h"
#include "mindustry/gen/Teamc.h"
#include "arc/math/geom/QuadTree_QuadTreeObject.h"
#include "java/lang/annotation/Annotation.h"
#include "mindustry/game/Teams_TeamData.h"
#include "java/lang/Enum.h"
#include "mindustry/gen/Ownerc.h"
#include "mindustry/content/Blocks.h"
#include "mindustry/entities/comp/BulletComp.h"
#include "mindustry/game/Teams.h"
#include "mindustry/logic/Senseable.h"
#include "mindustry/graphics/Drawf.h"
#include "mindustry/gen/Drawc.h"
#include "mindustry/game/Team.h"
#include "mindustry/Vars.h"
#include "mindustry/core/GameState.h"
#include "mindustry/core/World.h"
#include "mindustry/gen/Timerc.h"

extern "C" {


void mark_mindustry_entities_comp_BulletComp(jobject object, jint mark, jint depth) {
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
	auto self = (mindustry_entities_comp_BulletComp *) object;
	if (self->F_team)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_team)->clazz)->markFunction)((jobject) self->F_team, mark, depth + 1);
	if (self->F_owner)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_owner)->clazz)->markFunction)((jobject) self->F_owner, mark, depth + 1);
	if (self->F_collided)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_collided)->clazz)->markFunction)((jobject) self->F_collided, mark, depth + 1);
	if (self->F_type)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_type)->clazz)->markFunction)((jobject) self->F_type, mark, depth + 1);
	if (self->F_vel)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_vel)->clazz)->markFunction)((jobject) self->F_vel, mark, depth + 1);
	if (self->F_data)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_data)->clazz)->markFunction)((jobject) self->F_data, mark, depth + 1);
	if (self->F_shooter)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_shooter)->clazz)->markFunction)((jobject) self->F_shooter, mark, depth + 1);
	if (self->F_aimTile)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_aimTile)->clazz)->markFunction)((jobject) self->F_aimTile, mark, depth + 1);
	if (self->F_mover)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_mover)->clazz)->markFunction)((jobject) self->F_mover, mark, depth + 1);
	if (self->F_trail)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_trail)->clazz)->markFunction)((jobject) self->F_trail, mark, depth + 1);
	if (self->F_stickyTarget)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_stickyTarget)->clazz)->markFunction)((jobject) self->F_stickyTarget, mark, depth + 1);
}

void clinit_mindustry_entities_comp_BulletComp(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
}

void init_mindustry_entities_comp_BulletComp(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/comp/BulletComp:<init>", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_entities_comp_BulletComp(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(28);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(33);
	sp[0].o = frame[0].o;
	clinit_arc_struct_IntSeq(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_struct_IntSeq);
	init_arc_struct_IntSeq_int(ctx, sp[1].o, (6));
	((mindustry_entities_comp_BulletComp *) NULL_CHECK(sp[0].o))->F_collided = (jref) sp[1].o;
	LINE_NUMBER(35);
	sp[0].o = frame[0].o;
	clinit_arc_math_geom_Vec2(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_math_geom_Vec2);
	init_arc_math_geom_Vec2(ctx, sp[1].o);
	((mindustry_entities_comp_BulletComp *) NULL_CHECK(sp[0].o))->F_vel = (jref) sp[1].o;
	LINE_NUMBER(45);
	((mindustry_entities_comp_BulletComp *) NULL_CHECK((frame[0].o)))->F_justSpawned = (jint(1));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_entities_comp_BulletComp_getCollisions_arc_func_Cons(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/comp/BulletComp:getCollisions", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(62);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	sp[0].o = (jobject)((mindustry_core_GameState *) NULL_CHECK(sp[0].o))->F_teams;
	sp[0].o = (jobject)((mindustry_game_Teams *) NULL_CHECK(sp[0].o))->F_present;
	frame[2].o = sp[0].o;
	LINE_NUMBER(63);
	frame[3].i = (jint(0));
	}
label_2:;
	{
	if ((frame[3].i) >= ((jint)((arc_struct_Seq *) NULL_CHECK((frame[2].o)))->F_size)) goto label_3;
	}
	{
	LINE_NUMBER(64);
	sp[0].o = (jobject)((arc_struct_Seq *) NULL_CHECK((frame[2].o)))->F_items;
	sp[0].o = (jobject)((mindustry_game_Teams$TeamData *) NULL_CHECK(((jobject)ARRAY_ACCESS(jobject, (checkCast(ctx, getArrayClass(&class_mindustry_game_Teams$TeamData, 1), sp[0].o)), (frame[3].i)))))->F_team;
	sp[1].o = (jobject)((mindustry_entities_comp_BulletComp *) NULL_CHECK((frame[0].o)))->F_team;
	if (sp[0].o == sp[1].o) goto label_5;
	}
	{
	LINE_NUMBER(65);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((arc_struct_Seq *) NULL_CHECK((frame[2].o)))->F_items;
	sp[1].o = (jobject)((func_mindustry_game_Teams$TeamData_tree_R_arc_math_geom_QuadTree) ((void **) nullCheck(ctx, ((jobject)ARRAY_ACCESS(jobject, (checkCast(ctx, getArrayClass(&class_mindustry_game_Teams$TeamData, 1), sp[1].o)), (frame[3].i))))->vtable)[VTABLE_mindustry_game_Teams$TeamData_tree_R_arc_math_geom_QuadTree])(ctx, ((jobject)ARRAY_ACCESS(jobject, (checkCast(ctx, getArrayClass(&class_mindustry_game_Teams$TeamData, 1), sp[1].o)), (frame[3].i))));
	((func_arc_func_Cons_get_java_lang_Object) resolveInterfaceMethod(ctx, &class_arc_func_Cons, INDEX_arc_func_Cons_get_java_lang_Object, sp[0].o))(ctx, sp[0].o, sp[1].o);
	}
label_5:;
	{
	LINE_NUMBER(63);
	INST_IINC(3, 1);
	goto label_2;
	}
label_3:;
	LINE_NUMBER(68);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jbool M_mindustry_entities_comp_BulletComp_isLocal_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/comp/BulletComp:isLocal", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(74);
	popStackFrame(ctx);
	return (jint(1));
	}

	popStackFrame(ctx);
}

void M_mindustry_entities_comp_BulletComp_add(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/comp/BulletComp:add", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(79);
	sp[0].o = (jobject)((mindustry_entities_comp_BulletComp *) NULL_CHECK((frame[0].o)))->F_type;
	sp[1].o = (jobject)((func_mindustry_entities_comp_BulletComp_self_R_mindustry_gen_Entityc) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_entities_comp_BulletComp_self_R_mindustry_gen_Entityc])(ctx, (frame[0].o));
	((func_mindustry_entities_bullet_BulletType_init_mindustry_gen_Bullet) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_entities_bullet_BulletType_init_mindustry_gen_Bullet])(ctx, sp[0].o, (checkCast(ctx, &class_mindustry_gen_Bullet, sp[1].o)));
	LINE_NUMBER(80);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_entities_comp_BulletComp_remove(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/comp/BulletComp:remove", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(84);
	if ((clinit_mindustry_gen_Groups(ctx), (jint)SF_mindustry_gen_Groups_isClearing) == 0) goto label_1;
	}
	popStackFrame(ctx);
	INST_RETURN();
label_1:;
	{
	LINE_NUMBER(87);
	if (((jint)((mindustry_entities_comp_BulletComp *) NULL_CHECK((frame[0].o)))->F_hit) != 0) goto label_2;
	}
	{
	LINE_NUMBER(88);
	sp[0].o = (jobject)((mindustry_entities_comp_BulletComp *) NULL_CHECK((frame[0].o)))->F_type;
	sp[1].o = (jobject)((func_mindustry_entities_comp_BulletComp_self_R_mindustry_gen_Entityc) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_entities_comp_BulletComp_self_R_mindustry_gen_Entityc])(ctx, (frame[0].o));
	((func_mindustry_entities_bullet_BulletType_despawned_mindustry_gen_Bullet) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_entities_bullet_BulletType_despawned_mindustry_gen_Bullet])(ctx, sp[0].o, (checkCast(ctx, &class_mindustry_gen_Bullet, sp[1].o)));
	}
label_2:;
	{
	LINE_NUMBER(90);
	sp[0].o = (jobject)((mindustry_entities_comp_BulletComp *) NULL_CHECK((frame[0].o)))->F_type;
	sp[1].o = (jobject)((func_mindustry_entities_comp_BulletComp_self_R_mindustry_gen_Entityc) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_entities_comp_BulletComp_self_R_mindustry_gen_Entityc])(ctx, (frame[0].o));
	((func_mindustry_entities_bullet_BulletType_removed_mindustry_gen_Bullet) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_entities_bullet_BulletType_removed_mindustry_gen_Bullet])(ctx, sp[0].o, (checkCast(ctx, &class_mindustry_gen_Bullet, sp[1].o)));
	LINE_NUMBER(91);
	sp[0].o = (jobject)((mindustry_entities_comp_BulletComp *) NULL_CHECK((frame[0].o)))->F_collided;
	((func_arc_struct_IntSeq_clear) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_IntSeq_clear])(ctx, sp[0].o);
	LINE_NUMBER(92);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jfloat M_mindustry_entities_comp_BulletComp_damageMultiplier_R_float(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/comp/BulletComp:damageMultiplier", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(96);
	sp[0].o = (jobject)((mindustry_entities_comp_BulletComp *) NULL_CHECK((frame[0].o)))->F_type;
	sp[1].o = (jobject)((func_mindustry_entities_comp_BulletComp_self_R_mindustry_gen_Entityc) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_entities_comp_BulletComp_self_R_mindustry_gen_Entityc])(ctx, (frame[0].o));
	jfloat temp0 = (jfloat)((func_mindustry_entities_bullet_BulletType_damageMultiplier_mindustry_gen_Bullet_R_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_entities_bullet_BulletType_damageMultiplier_mindustry_gen_Bullet_R_float])(ctx, sp[0].o, (checkCast(ctx, &class_mindustry_gen_Bullet, sp[1].o)));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

void M_mindustry_entities_comp_BulletComp_absorb(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/comp/BulletComp:absorb", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(101);
	((mindustry_entities_comp_BulletComp *) NULL_CHECK((frame[0].o)))->F_absorbed = (jint(1));
	LINE_NUMBER(102);
	((func_mindustry_entities_comp_BulletComp_remove) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_entities_comp_BulletComp_remove])(ctx, (frame[0].o));
	LINE_NUMBER(103);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jbool M_mindustry_entities_comp_BulletComp_hasCollided_int_R_boolean(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/comp/BulletComp:hasCollided", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(106);
	sp[0].o = (jobject)((mindustry_entities_comp_BulletComp *) NULL_CHECK((frame[0].o)))->F_collided;
	if (((jint)((arc_struct_IntSeq *) NULL_CHECK(sp[0].o))->F_size) == 0) goto label_1;
	}
	{
	sp[0].o = (jobject)((mindustry_entities_comp_BulletComp *) NULL_CHECK((frame[0].o)))->F_collided;
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

jfloat M_mindustry_entities_comp_BulletComp_clipSize_R_float(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/comp/BulletComp:clipSize", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(111);
	sp[0].o = (jobject)((mindustry_entities_comp_BulletComp *) NULL_CHECK((frame[0].o)))->F_type;
	popStackFrame(ctx);
	return ((jfloat)((mindustry_entities_bullet_BulletType *) NULL_CHECK(sp[0].o))->F_drawSize);
	}

	popStackFrame(ctx);
}

jbool M_mindustry_entities_comp_BulletComp_collides_mindustry_gen_Hitboxc_R_boolean(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/comp/BulletComp:collides", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(119);
	sp[0].o = (jobject)((mindustry_entities_comp_BulletComp *) NULL_CHECK((frame[0].o)))->F_type;
	if (((jint)((mindustry_entities_bullet_BulletType *) NULL_CHECK(sp[0].o))->F_collides) == 0) goto label_1;
	}
	{
	if ((isInstance(ctx, (frame[1].o), &class_mindustry_gen_Teamc)) == 0) goto label_1;
	}
	{
	LINE_NUMBER(117);
	frame[3].o = (checkCast(ctx, &class_mindustry_gen_Teamc, (frame[1].o)));
	sp[0].o = (jobject)((func_mindustry_gen_Teamc_team_R_mindustry_game_Team) resolveInterfaceMethod(ctx, &class_mindustry_gen_Teamc, INDEX_mindustry_gen_Teamc_team_R_mindustry_game_Team, (frame[3].o)))(ctx, (frame[3].o));
	sp[1].o = (jobject)((mindustry_entities_comp_BulletComp *) NULL_CHECK((frame[0].o)))->F_team;
	if (sp[0].o == sp[1].o) goto label_1;
	}
	{
	if ((isInstance(ctx, (frame[1].o), &class_mindustry_gen_Unit)) == 0) goto label_4;
	}
	{
	LINE_NUMBER(118);
	frame[2].o = (checkCast(ctx, &class_mindustry_gen_Unit, (frame[1].o)));
	sp[0].o = frame[2].o;
	sp[1].o = (jobject)((mindustry_entities_comp_BulletComp *) NULL_CHECK((frame[0].o)))->F_type;
	jint temp0 = (jint)((mindustry_entities_bullet_BulletType *) NULL_CHECK(sp[1].o))->F_collidesAir;
	sp[1].o = (jobject)((mindustry_entities_comp_BulletComp *) NULL_CHECK((frame[0].o)))->F_type;
	jint temp1 = (jint)((func_mindustry_gen_Unit_checkTarget_boolean_boolean_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_gen_Unit_checkTarget_boolean_boolean_R_boolean])(ctx, sp[0].o, temp0, ((jint)((mindustry_entities_bullet_BulletType *) NULL_CHECK(sp[1].o))->F_collidesGround));
	if (temp1 == 0) goto label_1;
	}
label_4:;
	{
	sp[0].o = (jobject)((mindustry_entities_comp_BulletComp *) NULL_CHECK((frame[0].o)))->F_type;
	if (((jint)((mindustry_entities_bullet_BulletType *) NULL_CHECK(sp[0].o))->F_pierce) == 0) goto label_7;
	}
	{
	sp[0].o = frame[0].o;
	sp[1].o = frame[1].o;
	LINE_NUMBER(119);
	jint temp0 = (jint)((func_mindustry_gen_Entityc_id_R_int) resolveInterfaceMethod(ctx, &class_mindustry_gen_Entityc, INDEX_mindustry_gen_Entityc_id_R_int, sp[1].o))(ctx, sp[1].o);
	jint temp1 = (jint)((func_mindustry_entities_comp_BulletComp_hasCollided_int_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_entities_comp_BulletComp_hasCollided_int_R_boolean])(ctx, sp[0].o, temp0);
	if (temp1 != 0) goto label_1;
	}
label_7:;
	{
	sp[0].o = (jobject)((mindustry_entities_comp_BulletComp *) NULL_CHECK((frame[0].o)))->F_stickyTarget;
	if (sp[0].o != nullptr) goto label_1;
	}
	INST_ICONST(1);
	goto label_9;
label_1:;
	INST_ICONST(0);
label_9:;
	LINE_NUMBER(117);
	popStackFrame(ctx);
	INST_IRETURN();

	popStackFrame(ctx);
}

void M_mindustry_entities_comp_BulletComp_collision_mindustry_gen_Hitboxc_float_float(jcontext ctx, jobject self, jobject param0, jfloat param1, jfloat param2) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/comp/BulletComp:collision", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].f = param1;
	frame[3].f = param2;
	{
	LINE_NUMBER(125);
	sp[0].o = (jobject)((mindustry_entities_comp_BulletComp *) NULL_CHECK((frame[0].o)))->F_type;
	if (((jint)((mindustry_entities_bullet_BulletType *) NULL_CHECK(sp[0].o))->F_sticky) == 0) goto label_1;
	}
	{
	LINE_NUMBER(126);
	sp[0].o = (jobject)((mindustry_entities_comp_BulletComp *) NULL_CHECK((frame[0].o)))->F_stickyTarget;
	if (sp[0].o != nullptr) goto label_3;
	}
	{
	LINE_NUMBER(128);
	sp[0].o = frame[0].o;
	jfloat temp0 = frame[2].f;
	sp[1].o = (jobject)((mindustry_entities_comp_BulletComp *) NULL_CHECK((frame[0].o)))->F_vel;
	((mindustry_entities_comp_BulletComp *) NULL_CHECK(sp[0].o))->F_x = (temp0 + ((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK(sp[1].o))->F_x));
	LINE_NUMBER(129);
	sp[0].o = frame[0].o;
	jfloat temp1 = frame[3].f;
	sp[1].o = (jobject)((mindustry_entities_comp_BulletComp *) NULL_CHECK((frame[0].o)))->F_vel;
	((mindustry_entities_comp_BulletComp *) NULL_CHECK(sp[0].o))->F_y = (temp1 + ((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK(sp[1].o))->F_y));
	LINE_NUMBER(130);
	((func_mindustry_entities_comp_BulletComp_stickTo_mindustry_gen_Posc) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_entities_comp_BulletComp_stickTo_mindustry_gen_Posc])(ctx, (frame[0].o), (frame[1].o));
	goto label_3;
	}
label_1:;
	{
	LINE_NUMBER(133);
	sp[0].o = (jobject)((mindustry_entities_comp_BulletComp *) NULL_CHECK((frame[0].o)))->F_type;
	sp[1].o = (jobject)((func_mindustry_entities_comp_BulletComp_self_R_mindustry_gen_Entityc) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_entities_comp_BulletComp_self_R_mindustry_gen_Entityc])(ctx, (frame[0].o));
	((func_mindustry_entities_bullet_BulletType_hit_mindustry_gen_Bullet_float_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_entities_bullet_BulletType_hit_mindustry_gen_Bullet_float_float])(ctx, sp[0].o, (checkCast(ctx, &class_mindustry_gen_Bullet, sp[1].o)), (frame[2].f), (frame[3].f));
	LINE_NUMBER(136);
	sp[0].o = (jobject)((mindustry_entities_comp_BulletComp *) NULL_CHECK((frame[0].o)))->F_type;
	if (((jint)((mindustry_entities_bullet_BulletType *) NULL_CHECK(sp[0].o))->F_pierce) != 0) goto label_8;
	}
	{
	LINE_NUMBER(137);
	((mindustry_entities_comp_BulletComp *) NULL_CHECK((frame[0].o)))->F_hit = (jint(1));
	LINE_NUMBER(138);
	((func_mindustry_entities_comp_BulletComp_remove) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_entities_comp_BulletComp_remove])(ctx, (frame[0].o));
	goto label_11;
	}
label_8:;
	{
	LINE_NUMBER(140);
	sp[0].o = (jobject)((mindustry_entities_comp_BulletComp *) NULL_CHECK((frame[0].o)))->F_collided;
	jint temp0 = (jint)((func_mindustry_gen_Entityc_id_R_int) resolveInterfaceMethod(ctx, &class_mindustry_gen_Entityc, INDEX_mindustry_gen_Entityc_id_R_int, (frame[1].o)))(ctx, (frame[1].o));
	((func_arc_struct_IntSeq_add_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_IntSeq_add_int])(ctx, sp[0].o, temp0);
	}
label_11:;
	{
	LINE_NUMBER(143);
	sp[0].o = (jobject)((mindustry_entities_comp_BulletComp *) NULL_CHECK((frame[0].o)))->F_type;
	sp[1].o = (jobject)((func_mindustry_entities_comp_BulletComp_self_R_mindustry_gen_Entityc) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_entities_comp_BulletComp_self_R_mindustry_gen_Entityc])(ctx, (frame[0].o));
	sp[1].o = checkCast(ctx, &class_mindustry_gen_Bullet, sp[1].o);
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
	LINE_NUMBER(145);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_entities_comp_BulletComp_stickTo_mindustry_gen_Posc(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/comp/BulletComp:stickTo", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(148);
	sp[0].o = frame[0].o;
	jfloat temp0 = (jfloat)((mindustry_entities_comp_BulletComp *) NULL_CHECK(sp[0].o))->F_lifetime;
	sp[1].o = (jobject)((mindustry_entities_comp_BulletComp *) NULL_CHECK((frame[0].o)))->F_type;
	((mindustry_entities_comp_BulletComp *) NULL_CHECK(sp[0].o))->F_lifetime = (temp0 + ((jfloat)((mindustry_entities_bullet_BulletType *) NULL_CHECK(sp[1].o))->F_stickyExtraLifetime));
	LINE_NUMBER(150);
	sp[0].o = frame[0].o;
	jfloat temp1 = (jfloat)((mindustry_entities_comp_BulletComp *) NULL_CHECK((frame[0].o)))->F_x;
	jfloat temp2 = (jfloat)((func_mindustry_gen_Posc_x_R_float) resolveInterfaceMethod(ctx, &class_mindustry_gen_Posc, INDEX_mindustry_gen_Posc_x_R_float, (frame[1].o)))(ctx, (frame[1].o));
	((mindustry_entities_comp_BulletComp *) NULL_CHECK(sp[0].o))->F_stickyX = (temp1 - temp2);
	LINE_NUMBER(151);
	sp[0].o = frame[0].o;
	jfloat temp3 = (jfloat)((mindustry_entities_comp_BulletComp *) NULL_CHECK((frame[0].o)))->F_y;
	jfloat temp4 = (jfloat)((func_mindustry_gen_Posc_y_R_float) resolveInterfaceMethod(ctx, &class_mindustry_gen_Posc, INDEX_mindustry_gen_Posc_y_R_float, (frame[1].o)))(ctx, (frame[1].o));
	((mindustry_entities_comp_BulletComp *) NULL_CHECK(sp[0].o))->F_stickyY = (temp3 - temp4);
	LINE_NUMBER(152);
	((mindustry_entities_comp_BulletComp *) NULL_CHECK((frame[0].o)))->F_stickyTarget = (jref) (frame[1].o);
	LINE_NUMBER(153);
	((mindustry_entities_comp_BulletComp *) NULL_CHECK((frame[0].o)))->F_stickyRotationOffset = ((jfloat)((mindustry_entities_comp_BulletComp *) NULL_CHECK((frame[0].o)))->F_rotation);
	LINE_NUMBER(154);
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
	((mindustry_entities_comp_BulletComp *) NULL_CHECK(sp[0].o))->F_stickyRotation = sp[1].f;
	LINE_NUMBER(155);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_entities_comp_BulletComp_update(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[10];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/comp/BulletComp:update", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(161);
	if (((jint)((mindustry_entities_comp_BulletComp *) NULL_CHECK((frame[0].o)))->F_justSpawned) != 0) goto label_1;
	}
	{
	LINE_NUMBER(162);
	sp[0].o = frame[0].o;
	jfloat temp0 = (jfloat)((mindustry_entities_comp_BulletComp *) NULL_CHECK(sp[0].o))->F_x;
	sp[1].o = (jobject)((mindustry_entities_comp_BulletComp *) NULL_CHECK((frame[0].o)))->F_vel;
	((mindustry_entities_comp_BulletComp *) NULL_CHECK(sp[0].o))->F_x = (temp0 + (((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK(sp[1].o))->F_x) * (clinit_arc_util_Time(ctx), (jfloat)SF_arc_util_Time_delta)));
	LINE_NUMBER(163);
	sp[0].o = frame[0].o;
	jfloat temp1 = (jfloat)((mindustry_entities_comp_BulletComp *) NULL_CHECK(sp[0].o))->F_y;
	sp[1].o = (jobject)((mindustry_entities_comp_BulletComp *) NULL_CHECK((frame[0].o)))->F_vel;
	((mindustry_entities_comp_BulletComp *) NULL_CHECK(sp[0].o))->F_y = (temp1 + (((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK(sp[1].o))->F_y) * (clinit_arc_util_Time(ctx), (jfloat)SF_arc_util_Time_delta)));
	LINE_NUMBER(164);
	sp[0].o = (jobject)((mindustry_entities_comp_BulletComp *) NULL_CHECK((frame[0].o)))->F_vel;
	jfloat temp2 = jfloat(1);
	sp[1].o = (jobject)((mindustry_entities_comp_BulletComp *) NULL_CHECK((frame[0].o)))->F_type;
	jfloat temp3 = (jfloat)SM_java_lang_Math_max_float_float_R_float(ctx, (temp2 - (((jfloat)((mindustry_entities_bullet_BulletType *) NULL_CHECK(sp[1].o))->F_drag) * (clinit_arc_util_Time(ctx), (jfloat)SF_arc_util_Time_delta))), (jfloat(0)));
	sp[0].o = (jobject)((func_arc_math_geom_Vec2_scl_float_R_arc_math_geom_Vec2) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Vec2_scl_float_R_arc_math_geom_Vec2])(ctx, sp[0].o, temp3);
	}
label_1:;
	{
	LINE_NUMBER(166);
	((mindustry_entities_comp_BulletComp *) NULL_CHECK((frame[0].o)))->F_justSpawned = (jint(0));
	LINE_NUMBER(168);
	sp[0].o = (jobject)((mindustry_entities_comp_BulletComp *) NULL_CHECK((frame[0].o)))->F_mover;
	if (sp[0].o == nullptr) goto label_6;
	}
	{
	LINE_NUMBER(169);
	sp[0].o = (jobject)((mindustry_entities_comp_BulletComp *) NULL_CHECK((frame[0].o)))->F_mover;
	sp[1].o = (jobject)((func_mindustry_entities_comp_BulletComp_self_R_mindustry_gen_Entityc) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_entities_comp_BulletComp_self_R_mindustry_gen_Entityc])(ctx, (frame[0].o));
	((func_mindustry_entities_Mover_move_mindustry_gen_Bullet) resolveInterfaceMethod(ctx, &class_mindustry_entities_Mover, INDEX_mindustry_entities_Mover_move_mindustry_gen_Bullet, sp[0].o))(ctx, sp[0].o, (checkCast(ctx, &class_mindustry_gen_Bullet, sp[1].o)));
	}
label_6:;
	{
	LINE_NUMBER(172);
	sp[0].o = (jobject)((mindustry_entities_comp_BulletComp *) NULL_CHECK((frame[0].o)))->F_type;
	if ((floatCompare(((jfloat)((mindustry_entities_bullet_BulletType *) NULL_CHECK(sp[0].o))->F_accel), (jfloat(0)), -1)) == 0) goto label_8;
	}
	{
	LINE_NUMBER(173);
	sp[0].o = (jobject)((mindustry_entities_comp_BulletComp *) NULL_CHECK((frame[0].o)))->F_vel;
	sp[1].o = (jobject)((mindustry_entities_comp_BulletComp *) NULL_CHECK((frame[0].o)))->F_vel;
	jfloat temp0 = (jfloat)((func_arc_math_geom_Vec2_len_R_float) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_math_geom_Vec2_len_R_float])(ctx, sp[1].o);
	sp[1].o = (jobject)((mindustry_entities_comp_BulletComp *) NULL_CHECK((frame[0].o)))->F_type;
	sp[0].o = (jobject)((func_arc_math_geom_Vec2_setLength_float_R_arc_math_geom_Vec2) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Vec2_setLength_float_R_arc_math_geom_Vec2])(ctx, sp[0].o, (temp0 + (((jfloat)((mindustry_entities_bullet_BulletType *) NULL_CHECK(sp[1].o))->F_accel) * (clinit_arc_util_Time(ctx), (jfloat)SF_arc_util_Time_delta))));
	}
label_8:;
	{
	LINE_NUMBER(176);
	sp[0].o = (jobject)((mindustry_entities_comp_BulletComp *) NULL_CHECK((frame[0].o)))->F_type;
	sp[1].o = (jobject)((func_mindustry_entities_comp_BulletComp_self_R_mindustry_gen_Entityc) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_entities_comp_BulletComp_self_R_mindustry_gen_Entityc])(ctx, (frame[0].o));
	((func_mindustry_entities_bullet_BulletType_update_mindustry_gen_Bullet) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_entities_bullet_BulletType_update_mindustry_gen_Bullet])(ctx, sp[0].o, (checkCast(ctx, &class_mindustry_gen_Bullet, sp[1].o)));
	LINE_NUMBER(178);
	sp[0].o = (jobject)((mindustry_entities_comp_BulletComp *) NULL_CHECK((frame[0].o)))->F_stickyTarget;
	if (sp[0].o == nullptr) goto label_11;
	}
	{
	LINE_NUMBER(180);
	sp[0].o = (jobject)((mindustry_entities_comp_BulletComp *) NULL_CHECK((frame[0].o)))->F_stickyTarget;
	frame[2].o = sp[0].o;
	if ((isInstance(ctx, (frame[2].o), &class_mindustry_gen_Healthc)) == 0) goto label_13;
	}
	{
	frame[1].o = (checkCast(ctx, &class_mindustry_gen_Healthc, (frame[2].o)));
	jint temp0 = (jint)((func_mindustry_gen_Healthc_isValid_R_boolean) resolveInterfaceMethod(ctx, &class_mindustry_gen_Healthc, INDEX_mindustry_gen_Healthc_isValid_R_boolean, (frame[1].o)))(ctx, (frame[1].o));
	if (temp0 == 0) goto label_13;
	}
	{
	LINE_NUMBER(181);
	sp[0].o = (jobject)((mindustry_entities_comp_BulletComp *) NULL_CHECK((frame[0].o)))->F_stickyTarget;
	frame[4].o = sp[0].o;
	if ((isInstance(ctx, (frame[4].o), &class_mindustry_gen_Rotc)) == 0) goto label_16;
	}
	{
	frame[3].o = (checkCast(ctx, &class_mindustry_gen_Rotc, (frame[4].o)));
	jfloat temp0 = (jfloat)((func_mindustry_gen_Rotc_rotation_R_float) resolveInterfaceMethod(ctx, &class_mindustry_gen_Rotc, INDEX_mindustry_gen_Rotc_rotation_R_float, (frame[3].o)))(ctx, (frame[3].o));
	jfloat temp1 = temp0 - ((jfloat)((mindustry_entities_comp_BulletComp *) NULL_CHECK((frame[0].o)))->F_stickyRotation);
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
	LINE_NUMBER(182);
	sp[0].o = frame[0].o;
	clinit_arc_util_Tmp(ctx);
	sp[1].o = (jobject)SF_arc_util_Tmp_v1;
	sp[1].o = (jobject)((func_arc_math_geom_Vec2_set_float_float_R_arc_math_geom_Vec2) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_math_geom_Vec2_set_float_float_R_arc_math_geom_Vec2])(ctx, sp[1].o, ((jfloat)((mindustry_entities_comp_BulletComp *) NULL_CHECK((frame[0].o)))->F_stickyX), ((jfloat)((mindustry_entities_comp_BulletComp *) NULL_CHECK((frame[0].o)))->F_stickyY));
	sp[1].o = (jobject)((func_arc_math_geom_Vec2_rotate_float_R_arc_math_geom_Vec2) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_math_geom_Vec2_rotate_float_R_arc_math_geom_Vec2])(ctx, sp[1].o, (frame[2].f));
	sp[2].o = (jobject)((mindustry_entities_comp_BulletComp *) NULL_CHECK((frame[0].o)))->F_stickyTarget;
	sp[1].o = (jobject)((func_arc_math_geom_Vec2_add_arc_math_geom_Position_R_arc_math_geom_Vec2) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_math_geom_Vec2_add_arc_math_geom_Position_R_arc_math_geom_Vec2])(ctx, sp[1].o, sp[2].o);
	((func_mindustry_entities_comp_BulletComp_set_arc_math_geom_Position) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_entities_comp_BulletComp_set_arc_math_geom_Position])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(183);
	((mindustry_entities_comp_BulletComp *) NULL_CHECK((frame[0].o)))->F_rotation = ((frame[2].f) + ((jfloat)((mindustry_entities_comp_BulletComp *) NULL_CHECK((frame[0].o)))->F_stickyRotationOffset));
	LINE_NUMBER(184);
	sp[0].o = (jobject)((mindustry_entities_comp_BulletComp *) NULL_CHECK((frame[0].o)))->F_vel;
	sp[0].o = (jobject)((func_arc_math_geom_Vec2_setAngle_float_R_arc_math_geom_Vec2) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Vec2_setAngle_float_R_arc_math_geom_Vec2])(ctx, sp[0].o, ((jfloat)((mindustry_entities_comp_BulletComp *) NULL_CHECK((frame[0].o)))->F_rotation));
	}
label_13:;
	LINE_NUMBER(185);
	goto label_22;
label_11:;
	{
	LINE_NUMBER(186);
	sp[0].o = (jobject)((mindustry_entities_comp_BulletComp *) NULL_CHECK((frame[0].o)))->F_type;
	if (((jint)((mindustry_entities_bullet_BulletType *) NULL_CHECK(sp[0].o))->F_collidesTiles) == 0) goto label_22;
	}
	{
	sp[0].o = (jobject)((mindustry_entities_comp_BulletComp *) NULL_CHECK((frame[0].o)))->F_type;
	if (((jint)((mindustry_entities_bullet_BulletType *) NULL_CHECK(sp[0].o))->F_collides) == 0) goto label_22;
	}
	{
	sp[0].o = (jobject)((mindustry_entities_comp_BulletComp *) NULL_CHECK((frame[0].o)))->F_type;
	if (((jint)((mindustry_entities_bullet_BulletType *) NULL_CHECK(sp[0].o))->F_collidesGround) == 0) goto label_22;
	}
	{
	LINE_NUMBER(187);
	sp[0].o = frame[0].o;
	jint temp0 = (jint)SM_mindustry_core_World_toTile_float_R_int(ctx, ((jfloat)((mindustry_entities_comp_BulletComp *) NULL_CHECK((frame[0].o)))->F_lastX));
	jint temp1 = (jint)SM_mindustry_core_World_toTile_float_R_int(ctx, ((jfloat)((mindustry_entities_comp_BulletComp *) NULL_CHECK((frame[0].o)))->F_lastY));
	jint temp2 = (jint)((func_mindustry_entities_comp_BulletComp_tileX_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_entities_comp_BulletComp_tileX_R_int])(ctx, (frame[0].o));
	jint temp3 = (jint)((func_mindustry_entities_comp_BulletComp_tileY_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_entities_comp_BulletComp_tileY_R_int])(ctx, (frame[0].o));
	((func_mindustry_entities_comp_BulletComp_tileRaycast_int_int_int_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_entities_comp_BulletComp_tileRaycast_int_int_int_int])(ctx, sp[0].o, temp0, temp1, temp2, temp3);
	}
label_22:;
	{
	LINE_NUMBER(190);
	sp[0].o = (jobject)((mindustry_entities_comp_BulletComp *) NULL_CHECK((frame[0].o)))->F_type;
	if (((jint)((mindustry_entities_bullet_BulletType *) NULL_CHECK(sp[0].o))->F_removeAfterPierce) == 0) goto label_24;
	}
	{
	sp[0].o = (jobject)((mindustry_entities_comp_BulletComp *) NULL_CHECK((frame[0].o)))->F_type;
	if (((jint)((mindustry_entities_bullet_BulletType *) NULL_CHECK(sp[0].o))->F_pierceCap) == (jint(-1))) goto label_24;
	}
	{
	sp[0].o = (jobject)((mindustry_entities_comp_BulletComp *) NULL_CHECK((frame[0].o)))->F_collided;
	jint temp0 = (jint)((arc_struct_IntSeq *) NULL_CHECK(sp[0].o))->F_size;
	sp[0].o = (jobject)((mindustry_entities_comp_BulletComp *) NULL_CHECK((frame[0].o)))->F_type;
	if (temp0 < ((jint)((mindustry_entities_bullet_BulletType *) NULL_CHECK(sp[0].o))->F_pierceCap)) goto label_24;
	}
	{
	LINE_NUMBER(191);
	((mindustry_entities_comp_BulletComp *) NULL_CHECK((frame[0].o)))->F_hit = (jint(1));
	LINE_NUMBER(192);
	((func_mindustry_entities_comp_BulletComp_remove) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_entities_comp_BulletComp_remove])(ctx, (frame[0].o));
	}
label_24:;
	{
	LINE_NUMBER(195);
	if (((jint)((mindustry_entities_comp_BulletComp *) NULL_CHECK((frame[0].o)))->F_keepAlive) == 0) goto label_27;
	}
	{
	LINE_NUMBER(196);
	sp[0].o = frame[0].o;
	((mindustry_entities_comp_BulletComp *) NULL_CHECK(sp[0].o))->F_time = (((jfloat)((mindustry_entities_comp_BulletComp *) NULL_CHECK(sp[0].o))->F_time) - (clinit_arc_util_Time(ctx), (jfloat)SF_arc_util_Time_delta));
	LINE_NUMBER(197);
	((mindustry_entities_comp_BulletComp *) NULL_CHECK((frame[0].o)))->F_keepAlive = (jint(0));
	}
label_27:;
	LINE_NUMBER(199);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_entities_comp_BulletComp_moveRelative_float_float(jcontext ctx, jobject self, jfloat param0, jfloat param1) {
	NULL_CHECK(self);
	jtype frame[10];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/comp/BulletComp:moveRelative", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	frame[2].f = param1;
	{
	LINE_NUMBER(202);
	jfloat temp0 = (jfloat)((func_mindustry_entities_comp_BulletComp_rotation_R_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_entities_comp_BulletComp_rotation_R_float])(ctx, (frame[0].o));
	frame[3].f = temp0;
	LINE_NUMBER(203);
	sp[0].o = frame[0].o;
	jfloat temp1 = (jfloat)((mindustry_entities_comp_BulletComp *) NULL_CHECK(sp[0].o))->F_x;
	jfloat temp2 = (jfloat)SM_arc_math_Angles_trnsx_float_float_float_R_float(ctx, (frame[3].f), ((frame[1].f) * (clinit_arc_util_Time(ctx), (jfloat)SF_arc_util_Time_delta)), ((frame[2].f) * (clinit_arc_util_Time(ctx), (jfloat)SF_arc_util_Time_delta)));
	((mindustry_entities_comp_BulletComp *) NULL_CHECK(sp[0].o))->F_x = (temp1 + temp2);
	LINE_NUMBER(204);
	sp[0].o = frame[0].o;
	jfloat temp3 = (jfloat)((mindustry_entities_comp_BulletComp *) NULL_CHECK(sp[0].o))->F_y;
	jfloat temp4 = (jfloat)SM_arc_math_Angles_trnsy_float_float_float_R_float(ctx, (frame[3].f), ((frame[1].f) * (clinit_arc_util_Time(ctx), (jfloat)SF_arc_util_Time_delta)), ((frame[2].f) * (clinit_arc_util_Time(ctx), (jfloat)SF_arc_util_Time_delta)));
	((mindustry_entities_comp_BulletComp *) NULL_CHECK(sp[0].o))->F_y = (temp3 + temp4);
	LINE_NUMBER(205);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_entities_comp_BulletComp_turn_float_float(jcontext ctx, jobject self, jfloat param0, jfloat param1) {
	NULL_CHECK(self);
	jtype frame[10];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/comp/BulletComp:turn", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	frame[2].f = param1;
	{
	LINE_NUMBER(208);
	sp[0].o = (jobject)((mindustry_entities_comp_BulletComp *) NULL_CHECK((frame[0].o)))->F_vel;
	jfloat temp0 = (jfloat)((func_arc_math_geom_Vec2_angle_R_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Vec2_angle_R_float])(ctx, sp[0].o);
	frame[3].f = temp0;
	LINE_NUMBER(209);
	sp[0].o = (jobject)((mindustry_entities_comp_BulletComp *) NULL_CHECK((frame[0].o)))->F_vel;
	jfloat temp1 = (jfloat)SM_arc_math_Angles_trnsx_float_float_float_R_float(ctx, (frame[3].f), ((frame[1].f) * (clinit_arc_util_Time(ctx), (jfloat)SF_arc_util_Time_delta)), ((frame[2].f) * (clinit_arc_util_Time(ctx), (jfloat)SF_arc_util_Time_delta)));
	jfloat temp2 = (jfloat)SM_arc_math_Angles_trnsy_float_float_float_R_float(ctx, (frame[3].f), ((frame[1].f) * (clinit_arc_util_Time(ctx), (jfloat)SF_arc_util_Time_delta)), ((frame[2].f) * (clinit_arc_util_Time(ctx), (jfloat)SF_arc_util_Time_delta)));
	sp[0].o = (jobject)((func_arc_math_geom_Vec2_add_float_float_R_arc_math_geom_Vec2) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Vec2_add_float_float_R_arc_math_geom_Vec2])(ctx, sp[0].o, temp1, temp2);
	sp[1].o = (jobject)((mindustry_entities_comp_BulletComp *) NULL_CHECK((frame[0].o)))->F_type;
	sp[0].o = (jobject)((func_arc_math_geom_Vec2_limit_float_R_arc_math_geom_Vec2) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Vec2_limit_float_R_arc_math_geom_Vec2])(ctx, sp[0].o, ((jfloat)((mindustry_entities_bullet_BulletType *) NULL_CHECK(sp[1].o))->F_speed));
	LINE_NUMBER(210);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jbool M_mindustry_entities_comp_BulletComp_checkUnderBuild_mindustry_gen_Building_float_float_R_boolean(jcontext ctx, jobject self, jobject param0, jfloat param1, jfloat param2) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/comp/BulletComp:checkUnderBuild", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].f = param1;
	frame[3].f = param2;
	{
	LINE_NUMBER(213);
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[1].o)))->F_block;
	if (((jint)((mindustry_world_Block *) NULL_CHECK(sp[0].o))->F_underBullets) == 0) goto label_1;
	}
	{
	sp[0].o = (jobject)((mindustry_entities_comp_BulletComp *) NULL_CHECK((frame[0].o)))->F_aimTile;
	if (sp[0].o == nullptr) goto label_2;
	}
	{
	sp[0].o = (jobject)((mindustry_entities_comp_BulletComp *) NULL_CHECK((frame[0].o)))->F_aimTile;
	sp[0].o = (jobject)((mindustry_world_Tile *) NULL_CHECK(sp[0].o))->F_build;
	if (sp[0].o == (frame[1].o)) goto label_1;
	}
label_2:;
	{
	sp[0].o = (jobject)((mindustry_entities_comp_BulletComp *) NULL_CHECK((frame[0].o)))->F_type;
	if (((jint)((mindustry_entities_bullet_BulletType *) NULL_CHECK(sp[0].o))->F_hitUnder) != 0) goto label_1;
	}
	{
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[1].o)))->F_team;
	sp[1].o = (jobject)((mindustry_entities_comp_BulletComp *) NULL_CHECK((frame[0].o)))->F_team;
	if (sp[0].o == sp[1].o) goto label_1;
	}
	{
	sp[0].o = (jobject)((mindustry_entities_comp_BulletComp *) NULL_CHECK((frame[0].o)))->F_type;
	if (((jint)((mindustry_entities_bullet_BulletType *) NULL_CHECK(sp[0].o))->F_pierce) == 0) goto label_3;
	}
	{
	sp[0].o = (jobject)((mindustry_entities_comp_BulletComp *) NULL_CHECK((frame[0].o)))->F_aimTile;
	if (sp[0].o == nullptr) goto label_3;
	}
	{
	jfloat temp0 = frame[2].f;
	jfloat temp1 = frame[3].f;
	jfloat temp2 = (jfloat)((mindustry_entities_comp_BulletComp *) NULL_CHECK((frame[0].o)))->F_originX;
	jfloat temp3 = (jfloat)((mindustry_entities_comp_BulletComp *) NULL_CHECK((frame[0].o)))->F_originY;
	LINE_NUMBER(222);
	jfloat temp4 = (jfloat)SM_arc_math_Mathf_dst_float_float_float_float_R_float(ctx, temp0, temp1, temp2, temp3);
	sp[0].o = (jobject)((mindustry_entities_comp_BulletComp *) NULL_CHECK((frame[0].o)))->F_aimTile;
	jfloat temp5 = (jfloat)((func_mindustry_world_Tile_dst_float_float_R_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_Tile_dst_float_float_R_float])(ctx, sp[0].o, ((jfloat)((mindustry_entities_comp_BulletComp *) NULL_CHECK((frame[0].o)))->F_originX), ((jfloat)((mindustry_entities_comp_BulletComp *) NULL_CHECK((frame[0].o)))->F_originY));
	if ((floatCompare(temp4, (temp5 + (jfloat(2))), -1)) > 0) goto label_1;
	}
label_3:;
	{
	if ((floatCompare(((jfloat)((mindustry_entities_comp_BulletComp *) NULL_CHECK((frame[0].o)))->F_aimX), (jfloat(-1.0f)), -1)) != 0) goto label_5;
	}
	{
	if ((floatCompare(((jfloat)((mindustry_entities_comp_BulletComp *) NULL_CHECK((frame[0].o)))->F_aimY), (jfloat(-1.0f)), -1)) != 0) goto label_5;
	}
label_1:;
	INST_ICONST(1);
	goto label_6;
label_5:;
	INST_ICONST(0);
label_6:;
	LINE_NUMBER(213);
	popStackFrame(ctx);
	INST_IRETURN();

	popStackFrame(ctx);
}

void M_mindustry_entities_comp_BulletComp_tileRaycast_int_int_int_int(jcontext ctx, jobject self, jint param0, jint param1, jint param2, jint param3) {
	NULL_CHECK(self);
	jtype frame[28];
	auto stack = &frame[19];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/comp/BulletComp:tileRaycast", 28 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].i = param1;
	frame[3].i = param2;
	frame[4].i = param3;
	{
	LINE_NUMBER(230);
	frame[5].i = (frame[1].i);
	jint temp0 = (jint)SM_java_lang_Math_abs_int_R_int(ctx, ((frame[3].i) - (frame[5].i)));
	frame[6].i = temp0;
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
	LINE_NUMBER(231);
	frame[8].i = (frame[2].i);
	jint temp0 = (jint)SM_java_lang_Math_abs_int_R_int(ctx, ((frame[4].i) - (frame[8].i)));
	frame[9].i = temp0;
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
	LINE_NUMBER(232);
	frame[12].i = ((frame[6].i) - (frame[9].i));
	LINE_NUMBER(233);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_world;
	jint temp0 = (jint)((func_mindustry_core_World_width_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_World_width_R_int])(ctx, sp[0].o);
	frame[13].i = temp0;
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_world;
	jint temp1 = (jint)((func_mindustry_core_World_height_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_World_height_R_int])(ctx, sp[0].o);
	frame[14].i = temp1;
	}
label_13:;
	{
	LINE_NUMBER(235);
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
	LINE_NUMBER(236);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_world;
	sp[0].o = (jobject)((func_mindustry_core_World_build_int_int_R_mindustry_gen_Building) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_World_build_int_int_R_mindustry_gen_Building])(ctx, sp[0].o, (frame[5].i), (frame[8].i));
	frame[15].o = sp[0].o;
	LINE_NUMBER(238);
	sp[0].o = (jobject)((mindustry_entities_comp_BulletComp *) NULL_CHECK((frame[0].o)))->F_type;
	if (((jint)((mindustry_entities_bullet_BulletType *) NULL_CHECK(sp[0].o))->F_collideFloor) != 0) goto label_17;
	}
	{
	sp[0].o = (jobject)((mindustry_entities_comp_BulletComp *) NULL_CHECK((frame[0].o)))->F_type;
	if (((jint)((mindustry_entities_bullet_BulletType *) NULL_CHECK(sp[0].o))->F_collideTerrain) == 0) goto label_18;
	}
label_17:;
	{
	LINE_NUMBER(239);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_world;
	sp[0].o = (jobject)((func_mindustry_core_World_tile_int_int_R_mindustry_world_Tile) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_World_tile_int_int_R_mindustry_world_Tile])(ctx, sp[0].o, (frame[5].i), (frame[8].i));
	frame[16].o = sp[0].o;
	LINE_NUMBER(240);
	sp[0].o = (jobject)((mindustry_entities_comp_BulletComp *) NULL_CHECK((frame[0].o)))->F_type;
	if (((jint)((mindustry_entities_bullet_BulletType *) NULL_CHECK(sp[0].o))->F_collideFloor) == 0) goto label_20;
	}
	INST_ALOAD(16);
	if ((--sp)->o == nullptr) goto label_21;
	{
	sp[0].o = frame[16].o;
	LINE_NUMBER(241);
	sp[0].o = (jobject)((func_mindustry_world_Tile_floor_R_mindustry_world_blocks_environment_Floor) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_Tile_floor_R_mindustry_world_blocks_environment_Floor])(ctx, sp[0].o);
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
	sp[0].o = (jobject)((mindustry_entities_comp_BulletComp *) NULL_CHECK((frame[0].o)))->F_type;
	if (((jint)((mindustry_entities_bullet_BulletType *) NULL_CHECK(sp[0].o))->F_collideTerrain) == 0) goto label_18;
	}
	INST_ALOAD(16);
	if ((--sp)->o == nullptr) goto label_18;
	{
	sp[0].o = frame[16].o;
	LINE_NUMBER(242);
	sp[0].o = (jobject)((func_mindustry_world_Tile_block_R_mindustry_world_Block) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_Tile_block_R_mindustry_world_Block])(ctx, sp[0].o);
	if ((isInstance(ctx, sp[0].o, &class_mindustry_world_blocks_environment_StaticWall)) == 0) goto label_18;
	}
label_21:;
	{
	LINE_NUMBER(244);
	((func_mindustry_entities_comp_BulletComp_remove) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_entities_comp_BulletComp_remove])(ctx, (frame[0].o));
	LINE_NUMBER(245);
	((mindustry_entities_comp_BulletComp *) NULL_CHECK((frame[0].o)))->F_hit = (jint(1));
	LINE_NUMBER(246);
	popStackFrame(ctx);
	return;
	}
label_18:;
	{
	LINE_NUMBER(250);
	if ((frame[15].o) == nullptr) goto label_26;
	}
	{
	jint temp0 = (jint)((func_mindustry_entities_comp_BulletComp_isAdded_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_entities_comp_BulletComp_isAdded_R_boolean])(ctx, (frame[0].o));
	if (temp0 == 0) goto label_26;
	}
	{
	sp[0].o = frame[0].o;
	sp[1].o = frame[15].o;
	jfloat temp0 = jfloat(((frame[5].i) * (8)));
	jfloat temp1 = jfloat(((frame[8].i) * (8)));
	LINE_NUMBER(251);
	jint temp2 = (jint)((func_mindustry_entities_comp_BulletComp_checkUnderBuild_mindustry_gen_Building_float_float_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_entities_comp_BulletComp_checkUnderBuild_mindustry_gen_Building_float_float_R_boolean])(ctx, sp[0].o, sp[1].o, temp0, temp1);
	if (temp2 == 0) goto label_26;
	}
	{
	sp[0].o = frame[15].o;
	sp[1].o = frame[0].o;
	LINE_NUMBER(252);
	sp[1].o = (jobject)((func_mindustry_entities_comp_BulletComp_self_R_mindustry_gen_Entityc) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_mindustry_entities_comp_BulletComp_self_R_mindustry_gen_Entityc])(ctx, sp[1].o);
	jint temp0 = (jint)((func_mindustry_gen_Building_collide_mindustry_gen_Bullet_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_gen_Building_collide_mindustry_gen_Bullet_R_boolean])(ctx, sp[0].o, (checkCast(ctx, &class_mindustry_gen_Bullet, sp[1].o)));
	if (temp0 == 0) goto label_26;
	}
	{
	sp[0].o = (jobject)((mindustry_entities_comp_BulletComp *) NULL_CHECK((frame[0].o)))->F_type;
	sp[1].o = (jobject)((func_mindustry_entities_comp_BulletComp_self_R_mindustry_gen_Entityc) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_entities_comp_BulletComp_self_R_mindustry_gen_Entityc])(ctx, (frame[0].o));
	jint temp0 = (jint)((func_mindustry_entities_bullet_BulletType_testCollision_mindustry_gen_Bullet_mindustry_gen_Building_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_entities_bullet_BulletType_testCollision_mindustry_gen_Bullet_mindustry_gen_Building_R_boolean])(ctx, sp[0].o, (checkCast(ctx, &class_mindustry_gen_Bullet, sp[1].o)), (frame[15].o));
	if (temp0 == 0) goto label_26;
	}
	{
	sp[0].o = frame[15].o;
	LINE_NUMBER(253);
	jint temp0 = (jint)((func_mindustry_gen_Building_dead_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_gen_Building_dead_R_boolean])(ctx, sp[0].o);
	if (temp0 != 0) goto label_26;
	}
	{
	sp[0].o = (jobject)((mindustry_entities_comp_BulletComp *) NULL_CHECK((frame[0].o)))->F_type;
	if (((jint)((mindustry_entities_bullet_BulletType *) NULL_CHECK(sp[0].o))->F_collidesTeam) != 0) goto label_30;
	}
	{
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[15].o)))->F_team;
	sp[1].o = (jobject)((mindustry_entities_comp_BulletComp *) NULL_CHECK((frame[0].o)))->F_team;
	if (sp[0].o == sp[1].o) goto label_26;
	}
label_30:;
	{
	sp[0].o = (jobject)((mindustry_entities_comp_BulletComp *) NULL_CHECK((frame[0].o)))->F_type;
	if (((jint)((mindustry_entities_bullet_BulletType *) NULL_CHECK(sp[0].o))->F_pierceBuilding) == 0) goto label_31;
	}
	{
	jint temp0 = (jint)((func_mindustry_entities_comp_BulletComp_hasCollided_int_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_entities_comp_BulletComp_hasCollided_int_R_boolean])(ctx, (frame[0].o), ((jint)((mindustry_gen_Building *) NULL_CHECK((frame[15].o)))->F_id));
	if (temp0 != 0) goto label_26;
	}
label_31:;
	{
	LINE_NUMBER(255);
	sp[0].o = (jobject)((mindustry_entities_comp_BulletComp *) NULL_CHECK((frame[0].o)))->F_type;
	if (((jint)((mindustry_entities_bullet_BulletType *) NULL_CHECK(sp[0].o))->F_sticky) == 0) goto label_32;
	}
	{
	LINE_NUMBER(256);
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[15].o)))->F_team;
	sp[1].o = (jobject)((mindustry_entities_comp_BulletComp *) NULL_CHECK((frame[0].o)))->F_team;
	if (sp[0].o == sp[1].o) goto label_26;
	}
	{
	LINE_NUMBER(258);
	jfloat temp0 = (jfloat)((mindustry_entities_comp_BulletComp *) NULL_CHECK((frame[0].o)))->F_lastX;
	jfloat temp1 = (jfloat)((mindustry_entities_comp_BulletComp *) NULL_CHECK((frame[0].o)))->F_lastY;
	jfloat temp2 = jfloat((frame[5].i));
	jfloat temp3 = jfloat((frame[8].i));
	clinit_arc_util_Tmp(ctx);
	sp[0].o = (jobject)SF_arc_util_Tmp_r1;
	sp[0].o = (jobject)((func_arc_math_geom_Rect_setCentered_float_float_float_float_R_arc_math_geom_Rect) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Rect_setCentered_float_float_float_float_R_arc_math_geom_Rect])(ctx, sp[0].o, (jfloat(((frame[5].i) * (8)))), (jfloat(((frame[8].i) * (8)))), (jfloat(8.0f)), (jfloat(8.0f)));
	sp[0].o = (jobject)SM_arc_math_geom_Geometry_raycastRect_float_float_float_float_arc_math_geom_Rect_R_arc_math_geom_Vec2(ctx, temp0, temp1, temp2, temp3, sp[0].o);
	frame[16].o = sp[0].o;
	LINE_NUMBER(259);
	if ((frame[16].o) == nullptr) goto label_36;
	}
	{
	LINE_NUMBER(260);
	((mindustry_entities_comp_BulletComp *) NULL_CHECK((frame[0].o)))->F_x = ((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK((frame[16].o)))->F_x);
	LINE_NUMBER(261);
	((mindustry_entities_comp_BulletComp *) NULL_CHECK((frame[0].o)))->F_y = ((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK((frame[16].o)))->F_y);
	}
label_36:;
	{
	LINE_NUMBER(264);
	((func_mindustry_entities_comp_BulletComp_stickTo_mindustry_gen_Posc) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_entities_comp_BulletComp_stickTo_mindustry_gen_Posc])(ctx, (frame[0].o), (frame[15].o));
	LINE_NUMBER(266);
	popStackFrame(ctx);
	return;
	}
label_32:;
	{
	LINE_NUMBER(269);
	frame[16].i = (jint(0));
	frame[17].i = (jint(0));
	LINE_NUMBER(270);
	frame[18].f = ((jfloat)((mindustry_gen_Building *) NULL_CHECK((frame[15].o)))->F_health);
	LINE_NUMBER(272);
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[15].o)))->F_team;
	sp[1].o = (jobject)((mindustry_entities_comp_BulletComp *) NULL_CHECK((frame[0].o)))->F_team;
	if (sp[0].o == sp[1].o) goto label_43;
	}
	{
	LINE_NUMBER(273);
	sp[0].o = frame[15].o;
	sp[1].o = (jobject)((func_mindustry_entities_comp_BulletComp_self_R_mindustry_gen_Entityc) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_entities_comp_BulletComp_self_R_mindustry_gen_Entityc])(ctx, (frame[0].o));
	jint temp0 = (jint)((func_mindustry_gen_Building_collision_mindustry_gen_Bullet_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_gen_Building_collision_mindustry_gen_Bullet_R_boolean])(ctx, sp[0].o, (checkCast(ctx, &class_mindustry_gen_Bullet, sp[1].o)));
	frame[16].i = temp0;
	}
label_43:;
	{
	LINE_NUMBER(276);
	if ((frame[16].i) != 0) goto label_45;
	}
	{
	sp[0].o = (jobject)((mindustry_entities_comp_BulletComp *) NULL_CHECK((frame[0].o)))->F_type;
	if (((jint)((mindustry_entities_bullet_BulletType *) NULL_CHECK(sp[0].o))->F_collidesTeam) == 0) goto label_46;
	}
label_45:;
	{
	LINE_NUMBER(277);
	jfloat temp0 = (jfloat)SM_arc_math_Mathf_dst2_float_float_float_float_R_float(ctx, ((jfloat)((mindustry_entities_comp_BulletComp *) NULL_CHECK((frame[0].o)))->F_lastX), ((jfloat)((mindustry_entities_comp_BulletComp *) NULL_CHECK((frame[0].o)))->F_lastY), (jfloat(((frame[5].i) * (8)))), (jfloat(((frame[8].i) * (8)))));
	jfloat temp1 = (jfloat)SM_arc_math_Mathf_dst2_float_float_float_float_R_float(ctx, ((jfloat)((mindustry_entities_comp_BulletComp *) NULL_CHECK((frame[0].o)))->F_lastX), ((jfloat)((mindustry_entities_comp_BulletComp *) NULL_CHECK((frame[0].o)))->F_lastY), ((jfloat)((mindustry_entities_comp_BulletComp *) NULL_CHECK((frame[0].o)))->F_x), ((jfloat)((mindustry_entities_comp_BulletComp *) NULL_CHECK((frame[0].o)))->F_y));
	if ((floatCompare(temp0, temp1, 1)) >= 0) goto label_47;
	}
	{
	LINE_NUMBER(278);
	((mindustry_entities_comp_BulletComp *) NULL_CHECK((frame[0].o)))->F_x = (jfloat(((frame[5].i) * (8))));
	LINE_NUMBER(279);
	((mindustry_entities_comp_BulletComp *) NULL_CHECK((frame[0].o)))->F_y = (jfloat(((frame[8].i) * (8))));
	}
label_47:;
	{
	LINE_NUMBER(282);
	sp[0].o = (jobject)((mindustry_entities_comp_BulletComp *) NULL_CHECK((frame[0].o)))->F_type;
	if (((jint)((mindustry_entities_bullet_BulletType *) NULL_CHECK(sp[0].o))->F_pierceBuilding) != 0) goto label_50;
	}
	{
	LINE_NUMBER(283);
	((mindustry_entities_comp_BulletComp *) NULL_CHECK((frame[0].o)))->F_hit = (jint(1));
	LINE_NUMBER(284);
	frame[17].i = (jint(1));
	goto label_46;
	}
label_50:;
	{
	LINE_NUMBER(286);
	sp[0].o = (jobject)((mindustry_entities_comp_BulletComp *) NULL_CHECK((frame[0].o)))->F_collided;
	((func_arc_struct_IntSeq_add_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_IntSeq_add_int])(ctx, sp[0].o, ((jint)((mindustry_gen_Building *) NULL_CHECK((frame[15].o)))->F_id));
	}
label_46:;
	{
	LINE_NUMBER(290);
	sp[0].o = (jobject)((mindustry_entities_comp_BulletComp *) NULL_CHECK((frame[0].o)))->F_type;
	sp[1].o = (jobject)((func_mindustry_entities_comp_BulletComp_self_R_mindustry_gen_Entityc) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_entities_comp_BulletComp_self_R_mindustry_gen_Entityc])(ctx, (frame[0].o));
	((func_mindustry_entities_bullet_BulletType_hitTile_mindustry_gen_Bullet_mindustry_gen_Building_float_float_float_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_entities_bullet_BulletType_hitTile_mindustry_gen_Bullet_mindustry_gen_Building_float_float_float_boolean])(ctx, sp[0].o, (checkCast(ctx, &class_mindustry_gen_Bullet, sp[1].o)), (frame[15].o), (jfloat(((frame[5].i) * (8)))), (jfloat(((frame[8].i) * (8)))), (frame[18].f), (jint(1)));
	LINE_NUMBER(291);
	if ((frame[17].i) == 0) goto label_54;
	}
	{
	LINE_NUMBER(292);
	((func_mindustry_entities_comp_BulletComp_remove) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_entities_comp_BulletComp_remove])(ctx, (frame[0].o));
	}
label_54:;
	{
	LINE_NUMBER(295);
	sp[0].o = (jobject)((mindustry_entities_comp_BulletComp *) NULL_CHECK((frame[0].o)))->F_type;
	if (((jint)((mindustry_entities_bullet_BulletType *) NULL_CHECK(sp[0].o))->F_laserBullet) == 0) goto label_56;
	}
	{
	jint temp0 = (jint)((func_mindustry_gen_Building_absorbLasers_R_boolean) ((void **) nullCheck(ctx, (frame[15].o))->vtable)[VTABLE_mindustry_gen_Building_absorbLasers_R_boolean])(ctx, (frame[15].o));
	if (temp0 == 0) goto label_56;
	}
	{
	LINE_NUMBER(296);
	((mindustry_entities_comp_BulletComp *) NULL_CHECK((frame[0].o)))->F_hit = (jint(1));
	LINE_NUMBER(297);
	((func_mindustry_entities_comp_BulletComp_remove) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_entities_comp_BulletComp_remove])(ctx, (frame[0].o));
	LINE_NUMBER(298);
	popStackFrame(ctx);
	return;
	}
label_56:;
	{
	LINE_NUMBER(302);
	sp[0].o = (jobject)((mindustry_entities_comp_BulletComp *) NULL_CHECK((frame[0].o)))->F_type;
	if (((jint)((mindustry_entities_bullet_BulletType *) NULL_CHECK(sp[0].o))->F_pierceBuilding) == 0) goto label_26;
	}
	popStackFrame(ctx);
	INST_RETURN();
label_26:;
	{
	LINE_NUMBER(306);
	if ((frame[5].i) != (frame[3].i)) goto label_60;
	}
	{
	if ((frame[8].i) != (frame[4].i)) goto label_60;
	}
	goto label_14;
label_60:;
	{
	LINE_NUMBER(308);
	frame[11].i = ((jint(2)) * (frame[12].i));
	LINE_NUMBER(309);
	if ((frame[11].i) <= (-(frame[9].i))) goto label_62;
	}
	{
	LINE_NUMBER(310);
	frame[12].i = ((frame[12].i) - (frame[9].i));
	LINE_NUMBER(311);
	frame[5].i = ((frame[5].i) + (frame[7].i));
	}
label_62:;
	{
	LINE_NUMBER(314);
	if ((frame[11].i) >= (frame[6].i)) goto label_65;
	}
	{
	LINE_NUMBER(315);
	frame[12].i = ((frame[12].i) + (frame[6].i));
	LINE_NUMBER(316);
	frame[8].i = ((frame[8].i) + (frame[10].i));
	}
label_65:;
	LINE_NUMBER(318);
	goto label_13;
label_14:;
	LINE_NUMBER(319);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_entities_comp_BulletComp_draw(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/comp/BulletComp:draw", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(323);
	sp[0].o = (jobject)((mindustry_entities_comp_BulletComp *) NULL_CHECK((frame[0].o)))->F_type;
	SM_arc_graphics_g2d_Draw_z_float(ctx, ((jfloat)((mindustry_entities_bullet_BulletType *) NULL_CHECK(sp[0].o))->F_layer));
	LINE_NUMBER(325);
	sp[0].o = (jobject)((mindustry_entities_comp_BulletComp *) NULL_CHECK((frame[0].o)))->F_type;
	if (((jint)((mindustry_entities_bullet_BulletType *) NULL_CHECK(sp[0].o))->F_underwater) == 0) goto label_2;
	}
	{
	LINE_NUMBER(326);
	{ /* InvokeDynamic */
		clinit_mindustry_entities_comp_BulletComp_invoke_java_lang_Runnable_0(ctx);
		auto proxy = (mindustry_entities_comp_BulletComp_invoke_java_lang_Runnable_0 *) gcAlloc(ctx, &class_mindustry_entities_comp_BulletComp_invoke_java_lang_Runnable_0);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[0].o = (jobject) proxy;
	}
	SM_mindustry_graphics_Drawf_underwater_java_lang_Runnable(ctx, sp[0].o);
	goto label_4;
	}
label_2:;
	{
	LINE_NUMBER(328);
	sp[0].o = (jobject)((mindustry_entities_comp_BulletComp *) NULL_CHECK((frame[0].o)))->F_type;
	sp[1].o = (jobject)((func_mindustry_entities_comp_BulletComp_self_R_mindustry_gen_Entityc) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_entities_comp_BulletComp_self_R_mindustry_gen_Entityc])(ctx, (frame[0].o));
	((func_mindustry_entities_bullet_BulletType_draw_mindustry_gen_Bullet) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_entities_bullet_BulletType_draw_mindustry_gen_Bullet])(ctx, sp[0].o, (checkCast(ctx, &class_mindustry_gen_Bullet, sp[1].o)));
	}
label_4:;
	{
	LINE_NUMBER(330);
	sp[0].o = (jobject)((mindustry_entities_comp_BulletComp *) NULL_CHECK((frame[0].o)))->F_type;
	sp[1].o = (jobject)((func_mindustry_entities_comp_BulletComp_self_R_mindustry_gen_Entityc) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_entities_comp_BulletComp_self_R_mindustry_gen_Entityc])(ctx, (frame[0].o));
	((func_mindustry_entities_bullet_BulletType_drawLight_mindustry_gen_Bullet) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_entities_bullet_BulletType_drawLight_mindustry_gen_Bullet])(ctx, sp[0].o, (checkCast(ctx, &class_mindustry_gen_Bullet, sp[1].o)));
	LINE_NUMBER(332);
	SM_arc_graphics_g2d_Draw_reset(ctx);
	LINE_NUMBER(333);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_entities_comp_BulletComp_initVel_float_float(jcontext ctx, jobject self, jfloat param0, jfloat param1) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/comp/BulletComp:initVel", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	frame[2].f = param1;
	{
	LINE_NUMBER(336);
	sp[0].o = (jobject)((mindustry_entities_comp_BulletComp *) NULL_CHECK((frame[0].o)))->F_vel;
	sp[0].o = (jobject)((func_arc_math_geom_Vec2_trns_float_float_R_arc_math_geom_Vec2) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Vec2_trns_float_float_R_arc_math_geom_Vec2])(ctx, sp[0].o, (frame[1].f), (frame[2].f));
	LINE_NUMBER(337);
	((mindustry_entities_comp_BulletComp *) NULL_CHECK((frame[0].o)))->F_rotation = (frame[1].f);
	LINE_NUMBER(338);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_entities_comp_BulletComp_rotation_float(jcontext ctx, jobject self, jfloat param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/comp/BulletComp:rotation", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	{
	LINE_NUMBER(343);
	sp[0].o = (jobject)((mindustry_entities_comp_BulletComp *) NULL_CHECK((frame[0].o)))->F_vel;
	sp[1].o = frame[0].o;
	jfloat temp0 = frame[1].f;
	((mindustry_entities_comp_BulletComp *) NULL_CHECK(sp[1].o))->F_rotation = temp0;
	sp[0].o = (jobject)((func_arc_math_geom_Vec2_setAngle_float_R_arc_math_geom_Vec2) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Vec2_setAngle_float_R_arc_math_geom_Vec2])(ctx, sp[0].o, temp0);
	LINE_NUMBER(344);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jfloat M_mindustry_entities_comp_BulletComp_rotation_R_float(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/comp/BulletComp:rotation", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(349);
	sp[0].o = (jobject)((mindustry_entities_comp_BulletComp *) NULL_CHECK((frame[0].o)))->F_vel;
	jint temp0 = (jint)((func_arc_math_geom_Vec2_isZero_float_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Vec2_isZero_float_R_boolean])(ctx, sp[0].o, (jfloat(1,000000e-03f)));
	if (temp0 == 0) goto label_1;
	}
	{
	jfloat temp0 = (jfloat)((mindustry_entities_comp_BulletComp *) NULL_CHECK((frame[0].o)))->F_rotation;
	sp[0].f = temp0;
	sp += 1;
	goto label_2;
	}
label_1:;
	{
	sp[0].o = (jobject)((mindustry_entities_comp_BulletComp *) NULL_CHECK((frame[0].o)))->F_vel;
	jfloat temp0 = (jfloat)((func_arc_math_geom_Vec2_angle_R_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Vec2_angle_R_float])(ctx, sp[0].o);
	sp[0].f = temp0;
	sp += 1;
	}
label_2:;
	popStackFrame(ctx);
	INST_FRETURN();

	popStackFrame(ctx);
}

jdouble M_mindustry_entities_comp_BulletComp_sense_mindustry_logic_LAccess_R_double(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/comp/BulletComp:sense", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(355);
	clinit_mindustry_entities_comp_BulletComp$1(ctx);
	sp[0].o = (jobject)SF_mindustry_entities_comp_BulletComp$1_$SwitchMap$mindustry$logic$LAccess;
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
	LINE_NUMBER(356);
	jdouble temp0 = jdouble(((jfloat)((mindustry_entities_comp_BulletComp *) NULL_CHECK((frame[0].o)))->F_rotation));
	sp[0].d = temp0;
	sp += 1;
	goto label_19;
	}
label_2:;
	{
	LINE_NUMBER(357);
	jdouble temp0 = jdouble(((jfloat)((mindustry_entities_comp_BulletComp *) NULL_CHECK((frame[0].o)))->F_damage));
	sp[0].d = temp0;
	sp += 1;
	goto label_19;
	}
label_3:;
	{
	LINE_NUMBER(358);
	sp[0].o = (jobject)((mindustry_entities_comp_BulletComp *) NULL_CHECK((frame[0].o)))->F_type;
	jdouble temp0 = jdouble(((jfloat)((mindustry_entities_bullet_BulletType *) NULL_CHECK(sp[0].o))->F_damage));
	sp[0].d = temp0;
	sp += 1;
	goto label_19;
	}
label_4:;
	{
	LINE_NUMBER(359);
	jfloat temp0 = (jfloat)SM_mindustry_core_World_conv_float_R_float(ctx, ((jfloat)((mindustry_entities_comp_BulletComp *) NULL_CHECK((frame[0].o)))->F_x));
	jdouble temp1 = jdouble(temp0);
	sp[0].d = temp1;
	sp += 1;
	goto label_19;
	}
label_5:;
	{
	LINE_NUMBER(360);
	jfloat temp0 = (jfloat)SM_mindustry_core_World_conv_float_R_float(ctx, ((jfloat)((mindustry_entities_comp_BulletComp *) NULL_CHECK((frame[0].o)))->F_y));
	jdouble temp1 = jdouble(temp0);
	sp[0].d = temp1;
	sp += 1;
	goto label_19;
	}
label_6:;
	{
	LINE_NUMBER(361);
	sp[0].o = (jobject)((mindustry_entities_comp_BulletComp *) NULL_CHECK((frame[0].o)))->F_vel;
	jdouble temp0 = jdouble(((((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK(sp[0].o))->F_x) * (jfloat(60.0f))) / (jfloat(8.0f))));
	sp[0].d = temp0;
	sp += 1;
	goto label_19;
	}
label_7:;
	{
	LINE_NUMBER(362);
	sp[0].o = (jobject)((mindustry_entities_comp_BulletComp *) NULL_CHECK((frame[0].o)))->F_vel;
	jdouble temp0 = jdouble(((((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK(sp[0].o))->F_y) * (jfloat(60.0f))) / (jfloat(8.0f))));
	sp[0].d = temp0;
	sp += 1;
	goto label_19;
	}
label_8:;
	{
	LINE_NUMBER(363);
	jint temp0 = (jint)((func_mindustry_entities_comp_BulletComp_isAdded_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_entities_comp_BulletComp_isAdded_R_boolean])(ctx, (frame[0].o));
	if (temp0 != 0) goto label_20;
	}
	INST_DCONST(1);
	goto label_19;
label_20:;
	INST_DCONST(0);
	goto label_19;
label_9:;
	{
	LINE_NUMBER(364);
	sp[0].o = (jobject)((mindustry_entities_comp_BulletComp *) NULL_CHECK((frame[0].o)))->F_team;
	jdouble temp0 = jdouble(((jint)((mindustry_game_Team *) NULL_CHECK(sp[0].o))->F_id));
	sp[0].d = temp0;
	sp += 1;
	goto label_19;
	}
label_10:;
	{
	LINE_NUMBER(365);
	sp[0].o = (jobject)((mindustry_entities_comp_BulletComp *) NULL_CHECK((frame[0].o)))->F_type;
	jdouble temp0 = jdouble(((jfloat)((mindustry_entities_bullet_BulletType *) NULL_CHECK(sp[0].o))->F_range));
	sp[0].d = temp0;
	sp += 1;
	goto label_19;
	}
label_11:;
	{
	LINE_NUMBER(366);
	jfloat temp0 = (jfloat)((func_mindustry_entities_comp_BulletComp_aimX_R_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_entities_comp_BulletComp_aimX_R_float])(ctx, (frame[0].o));
	jfloat temp1 = (jfloat)SM_mindustry_core_World_conv_float_R_float(ctx, temp0);
	jdouble temp2 = jdouble(temp1);
	sp[0].d = temp2;
	sp += 1;
	goto label_19;
	}
label_12:;
	{
	LINE_NUMBER(367);
	jfloat temp0 = (jfloat)((func_mindustry_entities_comp_BulletComp_aimY_R_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_entities_comp_BulletComp_aimY_R_float])(ctx, (frame[0].o));
	jfloat temp1 = (jfloat)SM_mindustry_core_World_conv_float_R_float(ctx, temp0);
	jdouble temp2 = jdouble(temp1);
	sp[0].d = temp2;
	sp += 1;
	goto label_19;
	}
label_13:;
	{
	LINE_NUMBER(368);
	sp[0].o = (jobject)((mindustry_entities_comp_BulletComp *) NULL_CHECK((frame[0].o)))->F_type;
	jdouble temp0 = jdouble(((((jfloat)((mindustry_entities_bullet_BulletType *) NULL_CHECK(sp[0].o))->F_speed) * (jfloat(60.0f))) / (jfloat(8.0f))));
	sp[0].d = temp0;
	sp += 1;
	goto label_19;
	}
label_14:;
	{
	LINE_NUMBER(369);
	sp[0].o = (jobject)((mindustry_entities_comp_BulletComp *) NULL_CHECK((frame[0].o)))->F_type;
	jdouble temp0 = jdouble((((jfloat)((mindustry_entities_bullet_BulletType *) NULL_CHECK(sp[0].o))->F_hitSize) / (jfloat(8.0f))));
	sp[0].d = temp0;
	sp += 1;
	goto label_19;
	}
label_15:;
	{
	LINE_NUMBER(370);
	sp[0].o = (jobject)((mindustry_entities_comp_BulletComp *) NULL_CHECK((frame[0].o)))->F_team;
	sp[0].o = (jobject)((mindustry_game_Team *) NULL_CHECK(sp[0].o))->F_color;
	jfloat temp0 = (jfloat)((arc_graphics_Color *) NULL_CHECK(sp[0].o))->F_r;
	sp[0].o = (jobject)((mindustry_entities_comp_BulletComp *) NULL_CHECK((frame[0].o)))->F_team;
	sp[0].o = (jobject)((mindustry_game_Team *) NULL_CHECK(sp[0].o))->F_color;
	jfloat temp1 = (jfloat)((arc_graphics_Color *) NULL_CHECK(sp[0].o))->F_g;
	sp[0].o = (jobject)((mindustry_entities_comp_BulletComp *) NULL_CHECK((frame[0].o)))->F_team;
	sp[0].o = (jobject)((mindustry_game_Team *) NULL_CHECK(sp[0].o))->F_color;
	jdouble temp2 = (jdouble)SM_arc_graphics_Color_toDoubleBits_float_float_float_float_R_double(ctx, temp0, temp1, ((jfloat)((arc_graphics_Color *) NULL_CHECK(sp[0].o))->F_b), (jfloat(1)));
	sp[0].d = temp2;
	sp += 1;
	goto label_19;
	}
label_16:;
	{
	LINE_NUMBER(371);
	jdouble temp0 = jdouble(((jfloat)((mindustry_entities_comp_BulletComp *) NULL_CHECK((frame[0].o)))->F_lifetime));
	sp[0].d = temp0;
	sp += 1;
	goto label_19;
	}
label_17:;
	{
	LINE_NUMBER(372);
	jdouble temp0 = jdouble(((jfloat)((mindustry_entities_comp_BulletComp *) NULL_CHECK((frame[0].o)))->F_time));
	sp[0].d = temp0;
	sp += 1;
	goto label_19;
	}
label_18:;
	LINE_NUMBER(373);
	(sp++)->d = jdouble(std::numeric_limits<double>::quiet_NaN());
label_19:;
	LINE_NUMBER(355);
	popStackFrame(ctx);
	INST_DRETURN();

	popStackFrame(ctx);
}

void M_mindustry_entities_comp_BulletComp_setProp_mindustry_logic_LAccess_double(jcontext ctx, jobject self, jobject param0, jdouble param1) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/comp/BulletComp:setProp", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].d = param1;
	{
	LINE_NUMBER(379);
	clinit_mindustry_entities_comp_BulletComp$1(ctx);
	sp[0].o = (jobject)SF_mindustry_entities_comp_BulletComp$1_$SwitchMap$mindustry$logic$LAccess;
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
	LINE_NUMBER(380);
	((mindustry_entities_comp_BulletComp *) NULL_CHECK((frame[0].o)))->F_damage = (jfloat((frame[2].d)));
	goto label_3;
	}
label_4:;
	{
	LINE_NUMBER(381);
	sp[0].o = frame[0].o;
	jfloat temp0 = (jfloat)SM_mindustry_core_World_unconv_float_R_float(ctx, (jfloat((frame[2].d))));
	((mindustry_entities_comp_BulletComp *) NULL_CHECK(sp[0].o))->F_x = temp0;
	goto label_3;
	}
label_5:;
	{
	LINE_NUMBER(382);
	sp[0].o = frame[0].o;
	jfloat temp0 = (jfloat)SM_mindustry_core_World_unconv_float_R_float(ctx, (jfloat((frame[2].d))));
	((mindustry_entities_comp_BulletComp *) NULL_CHECK(sp[0].o))->F_y = temp0;
	goto label_3;
	}
label_6:;
	{
	LINE_NUMBER(383);
	sp[0].o = (jobject)((mindustry_entities_comp_BulletComp *) NULL_CHECK((frame[0].o)))->F_vel;
	((arc_math_geom_Vec2 *) NULL_CHECK(sp[0].o))->F_x = (jfloat((((frame[2].d) * (jdouble(8.0))) / (jdouble(60.0)))));
	goto label_3;
	}
label_7:;
	{
	LINE_NUMBER(384);
	sp[0].o = (jobject)((mindustry_entities_comp_BulletComp *) NULL_CHECK((frame[0].o)))->F_vel;
	((arc_math_geom_Vec2 *) NULL_CHECK(sp[0].o))->F_y = (jfloat((((frame[2].d) * (jdouble(8.0))) / (jdouble(60.0)))));
	goto label_3;
	}
label_1:;
	{
	LINE_NUMBER(385);
	((mindustry_entities_comp_BulletComp *) NULL_CHECK((frame[0].o)))->F_rotation = (jfloat((frame[2].d)));
	goto label_3;
	}
label_8:;
	{
	LINE_NUMBER(386);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)SM_mindustry_game_Team_get_int_R_mindustry_game_Team(ctx, (jint((frame[2].d))));
	((mindustry_entities_comp_BulletComp *) NULL_CHECK(sp[0].o))->F_team = (jref) sp[1].o;
	goto label_3;
	}
label_9:;
	{
	LINE_NUMBER(387);
	sp[0].o = (jobject)((mindustry_entities_comp_BulletComp *) NULL_CHECK((frame[0].o)))->F_vel;
	sp[0].o = (jobject)((func_arc_math_geom_Vec2_setLength_float_R_arc_math_geom_Vec2) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Vec2_setLength_float_R_arc_math_geom_Vec2])(ctx, sp[0].o, ((jfloat((frame[2].d))) * (jfloat(8.0f))));
	goto label_3;
	}
label_10:;
	{
	LINE_NUMBER(388);
	((mindustry_entities_comp_BulletComp *) NULL_CHECK((frame[0].o)))->F_lifetime = (jfloat((frame[2].d)));
	goto label_3;
	}
label_11:;
	{
	LINE_NUMBER(389);
	((mindustry_entities_comp_BulletComp *) NULL_CHECK((frame[0].o)))->F_time = (jfloat((frame[2].d)));
	}
label_3:;
	LINE_NUMBER(391);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_entities_comp_BulletComp_setProp_mindustry_ctype_UnlockableContent_double(jcontext ctx, jobject self, jobject param0, jdouble param1) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/comp/BulletComp:setProp", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].d = param1;
	LINE_NUMBER(396);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_entities_comp_BulletComp_setProp_mindustry_logic_LAccess_java_lang_Object(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/comp/BulletComp:setProp", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(400);
	clinit_mindustry_entities_comp_BulletComp$1(ctx);
	sp[0].o = (jobject)SF_mindustry_entities_comp_BulletComp$1_$SwitchMap$mindustry$logic$LAccess;
	jint temp0 = (jint)((func_mindustry_logic_LAccess_ordinal_R_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_logic_LAccess_ordinal_R_int])(ctx, (frame[1].o));
	switch(((jint)ARRAY_ACCESS(jint, sp[0].o, temp0))) {
		case 9: goto label_1;
		default: goto label_2;
	}
	}
label_1:;
	{
	LINE_NUMBER(402);
	if ((isInstance(ctx, (frame[2].o), &class_mindustry_game_Team)) == 0) goto label_2;
	}
	{
	frame[3].o = (checkCast(ctx, &class_mindustry_game_Team, (frame[2].o)));
	LINE_NUMBER(403);
	((mindustry_entities_comp_BulletComp *) NULL_CHECK((frame[0].o)))->F_team = (jref) (frame[3].o);
	}
label_2:;
	LINE_NUMBER(407);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_entities_comp_BulletComp_lambda$draw$0(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/comp/BulletComp:lambda$draw$0", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(326);
	sp[0].o = (jobject)((mindustry_entities_comp_BulletComp *) NULL_CHECK((frame[0].o)))->F_type;
	sp[1].o = (jobject)((func_mindustry_entities_comp_BulletComp_self_R_mindustry_gen_Entityc) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_entities_comp_BulletComp_self_R_mindustry_gen_Entityc])(ctx, (frame[0].o));
	((func_mindustry_entities_bullet_BulletType_draw_mindustry_gen_Bullet) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_entities_bullet_BulletType_draw_mindustry_gen_Bullet])(ctx, sp[0].o, (checkCast(ctx, &class_mindustry_gen_Bullet, sp[1].o)));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

static void initAnnotations(jcontext ctx) {
	auto &clazz = class_mindustry_entities_comp_BulletComp;
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

	{ // Field aimTile
		auto annotationArray = (jarray) createArray(ctx, &class_java_lang_annotation_Annotation, 1);
		fields[18]->F_annotations = (intptr_t) annotationArray;
		auto annotations = (jobject *) annotationArray->data;
		annotations[0] = gcAlloc(ctx, &class_arc_util_Nullable);
	}

	fields[19]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[20]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[21]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[22]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[23]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	{ // Field mover
		auto annotationArray = (jarray) createArray(ctx, &class_java_lang_annotation_Annotation, 1);
		fields[24]->F_annotations = (intptr_t) annotationArray;
		auto annotations = (jobject *) annotationArray->data;
		annotations[0] = gcAlloc(ctx, &class_arc_util_Nullable);
	}

	fields[25]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[26]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	{ // Field trail
		auto annotationArray = (jarray) createArray(ctx, &class_java_lang_annotation_Annotation, 1);
		fields[27]->F_annotations = (intptr_t) annotationArray;
		auto annotations = (jobject *) annotationArray->data;
		annotations[0] = gcAlloc(ctx, &class_arc_util_Nullable);
	}

	fields[28]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[29]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[30]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[31]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[32]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[33]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

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
}

void *vtable_mindustry_entities_comp_BulletComp[] {
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
	(void *) M_arc_math_Scaled_fout_R_float,
	(void *) M_arc_math_Scaled_fout_arc_math_Interp_R_float,
	(void *) M_arc_math_Scaled_fout_float_R_float,
	(void *) M_arc_math_Scaled_fin_arc_math_Interp_R_float,
	(void *) M_arc_math_Scaled_finpow_R_float,
	(void *) M_arc_math_Scaled_foutpow_R_float,
	(void *) M_arc_math_Scaled_finpowdown_R_float,
	(void *) M_arc_math_Scaled_foutpowdown_R_float,
	(void *) M_arc_math_Scaled_fslope_R_float,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) M_mindustry_entities_comp_BulletComp_isLocal_R_boolean,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) M_mindustry_entities_comp_BulletComp_add,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) M_mindustry_entities_comp_BulletComp_remove,
	(void *) M_mindustry_entities_comp_BulletComp_update,
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
	(void *) M_mindustry_entities_comp_BulletComp_collides_mindustry_gen_Hitboxc_R_boolean,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) M_mindustry_entities_comp_BulletComp_collision_mindustry_gen_Hitboxc_float_float,
	(void *) nullptr,
	(void *) nullptr,
	(void *) M_mindustry_entities_comp_BulletComp_getCollisions_arc_func_Cons,
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
	(void *) M_mindustry_entities_comp_BulletComp_clipSize_R_float,
	(void *) M_mindustry_entities_comp_BulletComp_draw,
	(void *) M_mindustry_entities_comp_BulletComp_absorb,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) M_mindustry_entities_comp_BulletComp_sense_mindustry_logic_LAccess_R_double,
	(void *) M_mindustry_logic_Senseable_sense_mindustry_ctype_Content_R_double,
	(void *) M_mindustry_logic_Senseable_senseObject_mindustry_logic_LAccess_R_java_lang_Object,
	(void *) M_mindustry_entities_comp_BulletComp_setProp_mindustry_logic_LAccess_double,
	(void *) M_mindustry_entities_comp_BulletComp_setProp_mindustry_logic_LAccess_java_lang_Object,
	(void *) M_mindustry_entities_comp_BulletComp_setProp_mindustry_ctype_UnlockableContent_double,
	(void *) M_mindustry_entities_comp_BulletComp_rotation_R_float,
	(void *) M_mindustry_entities_comp_BulletComp_rotation_float,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) M_mindustry_entities_comp_BulletComp_checkUnderBuild_mindustry_gen_Building_float_float_R_boolean,
	(void *) M_mindustry_entities_comp_BulletComp_hasCollided_int_R_boolean,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) M_mindustry_entities_comp_BulletComp_damageMultiplier_R_float,
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
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) M_mindustry_entities_comp_BulletComp_initVel_float_float,
	(void *) nullptr,
	(void *) nullptr,
	(void *) M_mindustry_entities_comp_BulletComp_moveRelative_float_float,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) M_mindustry_entities_comp_BulletComp_stickTo_mindustry_gen_Posc,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) M_mindustry_entities_comp_BulletComp_tileRaycast_int_int_int_int,
	(void *) nullptr,
	(void *) M_mindustry_entities_comp_BulletComp_turn_float_float,
	(void *) nullptr,
	(void *) nullptr,
	(void *) M_mindustry_entities_comp_BulletComp_lambda$draw$0,
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
	{ "lifetime", "()F" },
	{ "time", "()F" },
	{ "lifetime", "(F)V" },
	{ "time", "(F)V" },
	{ "damage", "()F" },
	{ "damage", "(F)V" },
	{ "hitbox", "(Larc/math/geom/Rect;)V" },
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
	{ "hitSize", "()F" },
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
	{ "inFogTo", "(Lmindustry/game/Team;)Z" },
	{ "cheating", "()Z" },
	{ "team", "()Lmindustry/game/Team;" },
	{ "closestCore", "()Lmindustry/world/blocks/storage/CoreBlock$CoreBuild;" },
	{ "closestEnemyCore", "()Lmindustry/world/blocks/storage/CoreBlock$CoreBuild;" },
	{ "core", "()Lmindustry/world/blocks/storage/CoreBlock$CoreBuild;" },
	{ "team", "(Lmindustry/game/Team;)V" },
	{ "clipSize", "()F" },
	{ "draw", "()V" },
	{ "absorb", "()V" },
	{ "owner", "()Lmindustry/gen/Entityc;" },
	{ "owner", "(Lmindustry/gen/Entityc;)V" },
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
	{ "lambda$draw$0", "()V" },
};

static jclass interfaces[] { &class_mindustry_gen_Timedc, &class_mindustry_gen_Damagec, &class_mindustry_gen_Hitboxc, &class_mindustry_gen_Teamc, &class_mindustry_gen_Posc, &class_mindustry_gen_Drawc, &class_mindustry_gen_Shielderc, &class_mindustry_gen_Ownerc, &class_mindustry_gen_Bulletc, &class_mindustry_gen_Timerc, &class_mindustry_logic_Senseable, &class_mindustry_logic_Settable, };

static FieldMetadata fields[] {
	{ "team", &class_mindustry_game_Team, offsetof(mindustry_entities_comp_BulletComp, F_team), "Lmindustry/game/Team;", 0 },
	{ "owner", &class_mindustry_gen_Entityc, offsetof(mindustry_entities_comp_BulletComp, F_owner), "Lmindustry/gen/Entityc;", 0 },
	{ "x", &class_float, offsetof(mindustry_entities_comp_BulletComp, F_x), "F", 0 },
	{ "y", &class_float, offsetof(mindustry_entities_comp_BulletComp, F_y), "F", 0 },
	{ "damage", &class_float, offsetof(mindustry_entities_comp_BulletComp, F_damage), "F", 0 },
	{ "lastX", &class_float, offsetof(mindustry_entities_comp_BulletComp, F_lastX), "F", 0 },
	{ "lastY", &class_float, offsetof(mindustry_entities_comp_BulletComp, F_lastY), "F", 0 },
	{ "time", &class_float, offsetof(mindustry_entities_comp_BulletComp, F_time), "F", 0 },
	{ "lifetime", &class_float, offsetof(mindustry_entities_comp_BulletComp, F_lifetime), "F", 0 },
	{ "collided", &class_arc_struct_IntSeq, offsetof(mindustry_entities_comp_BulletComp, F_collided), "Larc/struct/IntSeq;", 0 },
	{ "type", &class_mindustry_entities_bullet_BulletType, offsetof(mindustry_entities_comp_BulletComp, F_type), "Lmindustry/entities/bullet/BulletType;", 0 },
	{ "vel", &class_arc_math_geom_Vec2, offsetof(mindustry_entities_comp_BulletComp, F_vel), "Larc/math/geom/Vec2;", 0 },
	{ "data", &class_java_lang_Object, offsetof(mindustry_entities_comp_BulletComp, F_data), "Ljava/lang/Object;", 0 },
	{ "fdata", &class_float, offsetof(mindustry_entities_comp_BulletComp, F_fdata), "F", 0 },
	{ "rotation", &class_float, offsetof(mindustry_entities_comp_BulletComp, F_rotation), "F", 2 },
	{ "keepAlive", &class_boolean, offsetof(mindustry_entities_comp_BulletComp, F_keepAlive), "Z", 128 },
	{ "justSpawned", &class_boolean, offsetof(mindustry_entities_comp_BulletComp, F_justSpawned), "Z", 128 },
	{ "shooter", &class_mindustry_gen_Entityc, offsetof(mindustry_entities_comp_BulletComp, F_shooter), "Lmindustry/gen/Entityc;", 128 },
	{ "aimTile", &class_mindustry_world_Tile, offsetof(mindustry_entities_comp_BulletComp, F_aimTile), "Lmindustry/world/Tile;", 128 },
	{ "aimX", &class_float, offsetof(mindustry_entities_comp_BulletComp, F_aimX), "F", 128 },
	{ "aimY", &class_float, offsetof(mindustry_entities_comp_BulletComp, F_aimY), "F", 128 },
	{ "originX", &class_float, offsetof(mindustry_entities_comp_BulletComp, F_originX), "F", 128 },
	{ "originY", &class_float, offsetof(mindustry_entities_comp_BulletComp, F_originY), "F", 128 },
	{ "buildingDamageMultiplier", &class_float, offsetof(mindustry_entities_comp_BulletComp, F_buildingDamageMultiplier), "F", 128 },
	{ "mover", &class_mindustry_entities_Mover, offsetof(mindustry_entities_comp_BulletComp, F_mover), "Lmindustry/entities/Mover;", 128 },
	{ "absorbed", &class_boolean, offsetof(mindustry_entities_comp_BulletComp, F_absorbed), "Z", 128 },
	{ "hit", &class_boolean, offsetof(mindustry_entities_comp_BulletComp, F_hit), "Z", 128 },
	{ "trail", &class_mindustry_graphics_Trail, offsetof(mindustry_entities_comp_BulletComp, F_trail), "Lmindustry/graphics/Trail;", 128 },
	{ "frags", &class_int, offsetof(mindustry_entities_comp_BulletComp, F_frags), "I", 128 },
	{ "stickyTarget", &class_mindustry_gen_Posc, offsetof(mindustry_entities_comp_BulletComp, F_stickyTarget), "Lmindustry/gen/Posc;", 128 },
	{ "stickyX", &class_float, offsetof(mindustry_entities_comp_BulletComp, F_stickyX), "F", 128 },
	{ "stickyY", &class_float, offsetof(mindustry_entities_comp_BulletComp, F_stickyY), "F", 128 },
	{ "stickyRotation", &class_float, offsetof(mindustry_entities_comp_BulletComp, F_stickyRotation), "F", 128 },
	{ "stickyRotationOffset", &class_float, offsetof(mindustry_entities_comp_BulletComp, F_stickyRotationOffset), "F", 128 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_mindustry_entities_comp_BulletComp, 0, "()V", 0 },
	{ "getCollisions", (intptr_t) M_mindustry_entities_comp_BulletComp_getCollisions_arc_func_Cons, VTABLE_mindustry_entities_comp_BulletComp_getCollisions_arc_func_Cons, "(Larc/func/Cons;)V", 1 },
	{ "isLocal", (intptr_t) M_mindustry_entities_comp_BulletComp_isLocal_R_boolean, VTABLE_mindustry_entities_comp_BulletComp_isLocal_R_boolean, "()Z", 1 },
	{ "add", (intptr_t) M_mindustry_entities_comp_BulletComp_add, VTABLE_mindustry_entities_comp_BulletComp_add, "()V", 1 },
	{ "remove", (intptr_t) M_mindustry_entities_comp_BulletComp_remove, VTABLE_mindustry_entities_comp_BulletComp_remove, "()V", 1 },
	{ "damageMultiplier", (intptr_t) M_mindustry_entities_comp_BulletComp_damageMultiplier_R_float, VTABLE_mindustry_entities_comp_BulletComp_damageMultiplier_R_float, "()F", 1 },
	{ "absorb", (intptr_t) M_mindustry_entities_comp_BulletComp_absorb, VTABLE_mindustry_entities_comp_BulletComp_absorb, "()V", 1 },
	{ "hasCollided", (intptr_t) M_mindustry_entities_comp_BulletComp_hasCollided_int_R_boolean, VTABLE_mindustry_entities_comp_BulletComp_hasCollided_int_R_boolean, "(I)Z", 1 },
	{ "clipSize", (intptr_t) M_mindustry_entities_comp_BulletComp_clipSize_R_float, VTABLE_mindustry_entities_comp_BulletComp_clipSize_R_float, "()F", 1 },
	{ "collides", (intptr_t) M_mindustry_entities_comp_BulletComp_collides_mindustry_gen_Hitboxc_R_boolean, VTABLE_mindustry_entities_comp_BulletComp_collides_mindustry_gen_Hitboxc_R_boolean, "(Lmindustry/gen/Hitboxc;)Z", 1 },
	{ "collision", (intptr_t) M_mindustry_entities_comp_BulletComp_collision_mindustry_gen_Hitboxc_float_float, VTABLE_mindustry_entities_comp_BulletComp_collision_mindustry_gen_Hitboxc_float_float, "(Lmindustry/gen/Hitboxc;FF)V", 1 },
	{ "stickTo", (intptr_t) M_mindustry_entities_comp_BulletComp_stickTo_mindustry_gen_Posc, VTABLE_mindustry_entities_comp_BulletComp_stickTo_mindustry_gen_Posc, "(Lmindustry/gen/Posc;)V", 1 },
	{ "update", (intptr_t) M_mindustry_entities_comp_BulletComp_update, VTABLE_mindustry_entities_comp_BulletComp_update, "()V", 1 },
	{ "moveRelative", (intptr_t) M_mindustry_entities_comp_BulletComp_moveRelative_float_float, VTABLE_mindustry_entities_comp_BulletComp_moveRelative_float_float, "(FF)V", 1 },
	{ "turn", (intptr_t) M_mindustry_entities_comp_BulletComp_turn_float_float, VTABLE_mindustry_entities_comp_BulletComp_turn_float_float, "(FF)V", 1 },
	{ "checkUnderBuild", (intptr_t) M_mindustry_entities_comp_BulletComp_checkUnderBuild_mindustry_gen_Building_float_float_R_boolean, VTABLE_mindustry_entities_comp_BulletComp_checkUnderBuild_mindustry_gen_Building_float_float_R_boolean, "(Lmindustry/gen/Building;FF)Z", 1 },
	{ "tileRaycast", (intptr_t) M_mindustry_entities_comp_BulletComp_tileRaycast_int_int_int_int, VTABLE_mindustry_entities_comp_BulletComp_tileRaycast_int_int_int_int, "(IIII)V", 1 },
	{ "draw", (intptr_t) M_mindustry_entities_comp_BulletComp_draw, VTABLE_mindustry_entities_comp_BulletComp_draw, "()V", 1 },
	{ "initVel", (intptr_t) M_mindustry_entities_comp_BulletComp_initVel_float_float, VTABLE_mindustry_entities_comp_BulletComp_initVel_float_float, "(FF)V", 1 },
	{ "rotation", (intptr_t) M_mindustry_entities_comp_BulletComp_rotation_float, VTABLE_mindustry_entities_comp_BulletComp_rotation_float, "(F)V", 1 },
	{ "rotation", (intptr_t) M_mindustry_entities_comp_BulletComp_rotation_R_float, VTABLE_mindustry_entities_comp_BulletComp_rotation_R_float, "()F", 1 },
	{ "sense", (intptr_t) M_mindustry_entities_comp_BulletComp_sense_mindustry_logic_LAccess_R_double, VTABLE_mindustry_entities_comp_BulletComp_sense_mindustry_logic_LAccess_R_double, "(Lmindustry/logic/LAccess;)D", 1 },
	{ "setProp", (intptr_t) M_mindustry_entities_comp_BulletComp_setProp_mindustry_logic_LAccess_double, VTABLE_mindustry_entities_comp_BulletComp_setProp_mindustry_logic_LAccess_double, "(Lmindustry/logic/LAccess;D)V", 1 },
	{ "setProp", (intptr_t) M_mindustry_entities_comp_BulletComp_setProp_mindustry_ctype_UnlockableContent_double, VTABLE_mindustry_entities_comp_BulletComp_setProp_mindustry_ctype_UnlockableContent_double, "(Lmindustry/ctype/UnlockableContent;D)V", 1 },
	{ "setProp", (intptr_t) M_mindustry_entities_comp_BulletComp_setProp_mindustry_logic_LAccess_java_lang_Object, VTABLE_mindustry_entities_comp_BulletComp_setProp_mindustry_logic_LAccess_java_lang_Object, "(Lmindustry/logic/LAccess;Ljava/lang/Object;)V", 1 },
	{ "lambda$draw$0", (intptr_t) M_mindustry_entities_comp_BulletComp_lambda$draw$0, VTABLE_mindustry_entities_comp_BulletComp_lambda$draw$0, "()V", 4098 },
};

Class class_mindustry_entities_comp_BulletComp{
		.nativeName = (intptr_t) "mindustry/entities/comp/BulletComp",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(mindustry_entities_comp_BulletComp),
		.classVtable = (intptr_t) vtable_mindustry_entities_comp_BulletComp,
		.staticInitializer = (intptr_t) clinit_mindustry_entities_comp_BulletComp,
		.annotationInitializer = (intptr_t) initAnnotations,
		.markFunction = (intptr_t) mark_mindustry_entities_comp_BulletComp,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 1056,
		.interfaceCount = 12,
		.nativeInterfaces = (intptr_t) interfaces,
		.fieldCount = 34,
		.nativeFields = (intptr_t) fields,
		.methodCount = 26,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 167,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_mindustry_entities_comp_BulletComp = registerClass(&class_mindustry_entities_comp_BulletComp);

}
