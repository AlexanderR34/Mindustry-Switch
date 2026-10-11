#include "mindustry/entities/comp/UnitComp.h"
#include "mindustry/logic/Ranged.h"
#include "mindustry/gen/Minerc.h"
#include "mindustry/logic/Settable.h"
#include "arc/graphics/Color.h"
#include "mindustry/ai/BlockIndexer.h"
#include "mindustry/content/Fx.h"
#include "mindustry/gen/Physicsc.h"
#include "arc/util/Tmp.h"
#include "arc/struct/Seq.h"
#include "mindustry/world/blocks/payloads/BuildPayload.h"
#include "java/lang/reflect/Method.h"
#include "mindustry/entities/units/BuildPlan.h"
#include "mindustry/world/Tile.h"
#include "mindustry/gen/Healthc.h"
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
#include "mindustry/entities/units/UnitController.h"
#include "mindustry/gen/Building.h"
#include "java/lang/Object.h"
#include "mindustry/entities/units/AIController.h"
#include "mindustry/game/EventType_UnitDestroyEvent.h"
#include "mindustry/gen/Itemsc.h"
#include "mindustry/entities/comp/UnitComp_1.h"
#include "mindustry/entities/bullet/BulletType.h"
#include "mindustry/world/blocks/ExplosionShield.h"
#include "mindustry/game/Rules.h"
#include "mindustry/game/FogControl.h"
#include "mindustry/ui/Displayable.h"
#include "mindustry/gen/Unitc.h"
#include "mindustry/gen/Syncc.h"
#include "mindustry/entities/abilities/EmptyDataAbility.h"
#include "mindustry/core/Control.h"
#include "mindustry/content/UnitTypes.h"
#include "mindustry/entities/units/WeaponMount.h"
#include "mindustry/world/meta/BlockFlag.h"
#include "mindustry/async/PhysicsProcess.h"
#include "arc/graphics/g2d/TextureRegion.h"
#include "java/lang/annotation/Annotation.h"
#include "mindustry/game/Teams_TeamData.h"
#include "java/lang/IllegalArgumentException.h"
#include "mindustry/ai/types/CommandAI.h"
#include "mindustry/type/Sector.h"
#include "mindustry/type/UnitType.h"
#include "mindustry/ai/types/LogicAI.h"
#include "mindustry/ai/Pathfinder_PathCost.h"
#include "mindustry/type/ItemStack.h"
#include "mindustry/game/EventType_Trigger.h"
#include "arc/audio/Sound.h"
#include "mindustry/gen/Statusc.h"
#include "mindustry/logic/Senseable.h"
#include "mindustry/Vars.h"
#include "mindustry/core/World.h"
#include "arc/math/Angles.h"
#include "arc/Events.h"
#include "mindustry/entities/Sized.h"
#include "arc/math/geom/Point2.h"
#include "mindustry/ctype/UnlockableContent.h"
#include "mindustry/ai/Pathfinder.h"
#include "mindustry/logic/LAccess.h"
#include "java/lang/reflect/Constructor.h"
#include "mindustry/entities/Effect.h"
#include "mindustry/gen/Entityc.h"
#include "mindustry/gen/TimedKillc.h"
#include "arc/math/geom/Position.h"
#include "java/lang/reflect/Field.h"
#include "mindustry/gen/Unit.h"
#include "mindustry/gen/Payloadc.h"
#include "mindustry/type/Item.h"
#include "mindustry/entities/Damage.h"
#include "mindustry/gen/Posc.h"
#include "mindustry/graphics/Trail.h"
#include "mindustry/gen/Builderc.h"
#include "mindustry/gen/Bullet.h"
#include "mindustry/entities/Units.h"
#include "mindustry/gen/Hitboxc.h"
#include "mindustry/ai/WaveSpawner.h"
#include "arc/graphics/Camera.h"
#include "arc/math/geom/Vec2.h"
#include "mindustry/net/Net.h"
#include "mindustry/world/Block.h"
#include "mindustry/type/Weapon.h"
#include "mindustry/world/blocks/payloads/UnitPayload.h"
#include "java/lang/Float.h"
#include "mindustry/gen/Rotc.h"
#include "mindustry/gen/Velc.h"
#include "mindustry/entities/comp/UnitComp_invoke_arc_func_Boolf_1.h"
#include "mindustry/entities/comp/UnitComp_invoke_arc_func_Boolf_0.h"
#include "mindustry/entities/comp/UnitComp_invoke_arc_func_Boolf_3.h"
#include "mindustry/world/Tiles.h"
#include "mindustry/entities/comp/UnitComp_invoke_arc_func_Boolf_2.h"
#include "java/lang/String.h"
#include "mindustry/entities/abilities/Ability.h"
#include "mindustry/game/EventType_UnitDrownEvent.h"
#include "mindustry/world/blocks/environment/Floor.h"
#include "mindustry/net/NetConnection.h"
#include "arc/math/geom/Geometry.h"
#include "java/lang/Math.h"
#include "mindustry/gen/Teamc.h"
#include "arc/math/geom/QuadTree_QuadTreeObject.h"
#include "arc/scene/ui/layout/Table.h"
#include "mindustry/core/NetClient.h"
#include "mindustry/type/StatusEffect.h"
#include "java/lang/Enum.h"
#include "mindustry/entities/comp/UnitComp.h"
#include "mindustry/content/Blocks.h"
#include "mindustry/gen/Player.h"
#include "mindustry/ctype/Content.h"
#include "mindustry/gen/Drawc.h"
#include "mindustry/game/Team.h"
#include "mindustry/core/GameState.h"
#include "mindustry/gen/Call.h"
#include "mindustry/audio/SoundControl.h"

extern "C" {

jobject SF_mindustry_entities_comp_UnitComp_tmp1;
jobject SF_mindustry_entities_comp_UnitComp_tmp2;
jfloat SF_mindustry_entities_comp_UnitComp_warpDst;

void mark_mindustry_entities_comp_UnitComp(jobject object, jint mark, jint depth) {
	if (!object) {
		if (SF_mindustry_entities_comp_UnitComp_tmp1)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_entities_comp_UnitComp_tmp1)->clazz)->markFunction)((jobject) SF_mindustry_entities_comp_UnitComp_tmp1, mark, depth + 1);
		if (SF_mindustry_entities_comp_UnitComp_tmp2)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_entities_comp_UnitComp_tmp2)->clazz)->markFunction)((jobject) SF_mindustry_entities_comp_UnitComp_tmp2, mark, depth + 1);
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
	auto self = (mindustry_entities_comp_UnitComp *) object;
	if (self->F_team)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_team)->clazz)->markFunction)((jobject) self->F_team, mark, depth + 1);
	if (self->F_mineTile)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_mineTile)->clazz)->markFunction)((jobject) self->F_mineTile, mark, depth + 1);
	if (self->F_vel)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_vel)->clazz)->markFunction)((jobject) self->F_vel, mark, depth + 1);
	if (self->F_mounts)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_mounts)->clazz)->markFunction)((jobject) self->F_mounts, mark, depth + 1);
	if (self->F_stack)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_stack)->clazz)->markFunction)((jobject) self->F_stack, mark, depth + 1);
	if (self->F_controller)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_controller)->clazz)->markFunction)((jobject) self->F_controller, mark, depth + 1);
	if (self->F_abilities)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_abilities)->clazz)->markFunction)((jobject) self->F_abilities, mark, depth + 1);
	if (self->F_type)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_type)->clazz)->markFunction)((jobject) self->F_type, mark, depth + 1);
	if (self->F_trail)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_trail)->clazz)->markFunction)((jobject) self->F_trail, mark, depth + 1);
	if (self->F_dockedType)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_dockedType)->clazz)->markFunction)((jobject) self->F_dockedType, mark, depth + 1);
	if (self->F_lastCommanded)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_lastCommanded)->clazz)->markFunction)((jobject) self->F_lastCommanded, mark, depth + 1);
	if (self->F_lastDrownFloor)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_lastDrownFloor)->clazz)->markFunction)((jobject) self->F_lastDrownFloor, mark, depth + 1);
}

void init_mindustry_entities_comp_UnitComp(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/comp/UnitComp:<init>", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_entities_comp_UnitComp(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(38);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(52);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)createArray(ctx, &class_mindustry_entities_abilities_Ability, (jint(0)));
	((mindustry_entities_comp_UnitComp *) NULL_CHECK(sp[0].o))->F_abilities = (jref) sp[1].o;
	LINE_NUMBER(53);
	sp[0].o = frame[0].o;
	clinit_mindustry_content_UnitTypes(ctx);
	sp[1].o = (jobject)SF_mindustry_content_UnitTypes_alpha;
	((mindustry_entities_comp_UnitComp *) NULL_CHECK(sp[0].o))->F_type = (jref) sp[1].o;
	LINE_NUMBER(62);
	((mindustry_entities_comp_UnitComp *) NULL_CHECK((frame[0].o)))->F_shadowAlpha = (jfloat(-1.0f));
	LINE_NUMBER(66);
	sp[0].o = frame[0].o;
	jfloat temp0 = (jfloat)SM_arc_math_Mathf_random_float_R_float(ctx, (jfloat(10.0f)));
	((mindustry_entities_comp_UnitComp *) NULL_CHECK(sp[0].o))->F_resupplyTime = temp0;
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jbool M_mindustry_entities_comp_UnitComp_checkTarget_boolean_boolean_R_boolean(jcontext ctx, jobject self, jbool param0, jbool param1) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/comp/UnitComp:checkTarget", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(77);
	jint temp0 = (jint)((func_mindustry_entities_comp_UnitComp_isGrounded_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_entities_comp_UnitComp_isGrounded_R_boolean])(ctx, (frame[0].o));
	if (temp0 == 0) goto label_1;
	}
	INST_ILOAD(2);
	if ((--sp)->i != 0) goto label_2;
label_1:;
	{
	jint temp0 = (jint)((func_mindustry_entities_comp_UnitComp_isFlying_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_entities_comp_UnitComp_isFlying_R_boolean])(ctx, (frame[0].o));
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

jbool M_mindustry_entities_comp_UnitComp_isGrounded_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/comp/UnitComp:isGrounded", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(81);
	if ((floatCompare(((jfloat)((mindustry_entities_comp_UnitComp *) NULL_CHECK((frame[0].o)))->F_elevation), (jfloat(1,000000e-03f)), 1)) >= 0) goto label_1;
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

jbool M_mindustry_entities_comp_UnitComp_isFlying_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/comp/UnitComp:isFlying", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(85);
	if ((floatCompare(((jfloat)((mindustry_entities_comp_UnitComp *) NULL_CHECK((frame[0].o)))->F_elevation), (jfloat(0.09f)), -1)) < 0) goto label_1;
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

jbool M_mindustry_entities_comp_UnitComp_canDrown_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/comp/UnitComp:canDrown", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(89);
	jint temp0 = (jint)((func_mindustry_entities_comp_UnitComp_isGrounded_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_entities_comp_UnitComp_isGrounded_R_boolean])(ctx, (frame[0].o));
	if (temp0 == 0) goto label_1;
	}
	{
	sp[0].o = (jobject)((mindustry_entities_comp_UnitComp *) NULL_CHECK((frame[0].o)))->F_type;
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

jobject M_mindustry_entities_comp_UnitComp_drownFloor_R_mindustry_world_blocks_environment_Floor(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/comp/UnitComp:drownFloor", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(93);
	sp[0].o = (jobject)((func_mindustry_entities_comp_UnitComp_floorOn_R_mindustry_world_blocks_environment_Floor) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_entities_comp_UnitComp_floorOn_R_mindustry_world_blocks_environment_Floor])(ctx, (frame[0].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void M_mindustry_entities_comp_UnitComp_wobble(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/comp/UnitComp:wobble", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(97);
	sp[0].o = frame[0].o;
	jfloat temp0 = (jfloat)((mindustry_entities_comp_UnitComp *) NULL_CHECK(sp[0].o))->F_x;
	jfloat temp1 = (jfloat)SM_arc_math_Mathf_sin_float_float_float_R_float(ctx, ((clinit_arc_util_Time(ctx), (jfloat)SF_arc_util_Time_time) + (jfloat(((((jint)((mindustry_entities_comp_UnitComp *) NULL_CHECK((frame[0].o)))->F_id) % (10)) * (12))))), (jfloat(25.0f)), (jfloat(0.05f)));
	((mindustry_entities_comp_UnitComp *) NULL_CHECK(sp[0].o))->F_x = (temp0 + ((temp1 * (clinit_arc_util_Time(ctx), (jfloat)SF_arc_util_Time_delta)) * ((jfloat)((mindustry_entities_comp_UnitComp *) NULL_CHECK((frame[0].o)))->F_elevation)));
	LINE_NUMBER(98);
	sp[0].o = frame[0].o;
	jfloat temp2 = (jfloat)((mindustry_entities_comp_UnitComp *) NULL_CHECK(sp[0].o))->F_y;
	jfloat temp3 = (jfloat)SM_arc_math_Mathf_cos_float_float_float_R_float(ctx, ((clinit_arc_util_Time(ctx), (jfloat)SF_arc_util_Time_time) + (jfloat(((((jint)((mindustry_entities_comp_UnitComp *) NULL_CHECK((frame[0].o)))->F_id) % (10)) * (12))))), (jfloat(25.0f)), (jfloat(0.05f)));
	((mindustry_entities_comp_UnitComp *) NULL_CHECK(sp[0].o))->F_y = (temp2 + ((temp3 * (clinit_arc_util_Time(ctx), (jfloat)SF_arc_util_Time_delta)) * ((jfloat)((mindustry_entities_comp_UnitComp *) NULL_CHECK((frame[0].o)))->F_elevation)));
	LINE_NUMBER(99);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_entities_comp_UnitComp_moveAt_arc_math_geom_Vec2_float(jcontext ctx, jobject self, jobject param0, jfloat param1) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/comp/UnitComp:moveAt", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].f = param1;
	{
	LINE_NUMBER(102);
	clinit_mindustry_entities_comp_UnitComp(ctx);
	sp[0].o = (jobject)SF_mindustry_entities_comp_UnitComp_tmp1;
	sp[0].o = (jobject)((func_arc_math_geom_Vec2_set_arc_math_geom_Vec2_R_arc_math_geom_Vec2) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Vec2_set_arc_math_geom_Vec2_R_arc_math_geom_Vec2])(ctx, sp[0].o, (frame[1].o));
	frame[3].o = sp[0].o;
	LINE_NUMBER(103);
	clinit_mindustry_entities_comp_UnitComp(ctx);
	sp[0].o = (jobject)SF_mindustry_entities_comp_UnitComp_tmp2;
	sp[0].o = (jobject)((func_arc_math_geom_Vec2_set_arc_math_geom_Vec2_R_arc_math_geom_Vec2) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Vec2_set_arc_math_geom_Vec2_R_arc_math_geom_Vec2])(ctx, sp[0].o, (frame[3].o));
	sp[1].o = (jobject)((mindustry_entities_comp_UnitComp *) NULL_CHECK((frame[0].o)))->F_vel;
	sp[0].o = (jobject)((func_arc_math_geom_Vec2_sub_arc_math_geom_Vec2_R_arc_math_geom_Vec2) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Vec2_sub_arc_math_geom_Vec2_R_arc_math_geom_Vec2])(ctx, sp[0].o, sp[1].o);
	jfloat temp0 = frame[2].f;
	jfloat temp1 = (jfloat)((func_arc_math_geom_Vec2_len_R_float) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_math_geom_Vec2_len_R_float])(ctx, (frame[1].o));
	sp[0].o = (jobject)((func_arc_math_geom_Vec2_limit_float_R_arc_math_geom_Vec2) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Vec2_limit_float_R_arc_math_geom_Vec2])(ctx, sp[0].o, ((temp0 * temp1) * (clinit_arc_util_Time(ctx), (jfloat)SF_arc_util_Time_delta)));
	LINE_NUMBER(104);
	sp[0].o = (jobject)((mindustry_entities_comp_UnitComp *) NULL_CHECK((frame[0].o)))->F_vel;
	clinit_mindustry_entities_comp_UnitComp(ctx);
	sp[1].o = (jobject)SF_mindustry_entities_comp_UnitComp_tmp2;
	sp[0].o = (jobject)((func_arc_math_geom_Vec2_add_arc_math_geom_Vec2_R_arc_math_geom_Vec2) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Vec2_add_arc_math_geom_Vec2_R_arc_math_geom_Vec2])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(105);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jfloat M_mindustry_entities_comp_UnitComp_floorSpeedMultiplier_R_float(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/comp/UnitComp:floorSpeedMultiplier", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(108);
	jint temp0 = (jint)((func_mindustry_entities_comp_UnitComp_isFlying_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_entities_comp_UnitComp_isFlying_R_boolean])(ctx, (frame[0].o));
	if (temp0 != 0) goto label_1;
	}
	{
	sp[0].o = (jobject)((mindustry_entities_comp_UnitComp *) NULL_CHECK((frame[0].o)))->F_type;
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
	sp->o = (jobject)((func_mindustry_entities_comp_UnitComp_floorOn_R_mindustry_world_blocks_environment_Floor) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_entities_comp_UnitComp_floorOn_R_mindustry_world_blocks_environment_Floor])(ctx, sp[0].o);
	sp++;
label_3:;
	{
	sp -= 1;
	frame[1].o = sp[0].o;
	LINE_NUMBER(109);
	jdouble temp0 = jdouble(((jfloat)((mindustry_world_blocks_environment_Floor *) NULL_CHECK((frame[1].o)))->F_speedMultiplier));
	sp[0].o = (jobject)((mindustry_entities_comp_UnitComp *) NULL_CHECK((frame[0].o)))->F_type;
	jdouble temp1 = (jdouble)SM_java_lang_Math_pow_double_double_R_double(ctx, temp0, (jdouble(((jfloat)((mindustry_type_UnitType *) NULL_CHECK(sp[0].o))->F_floorMultiplier))));
	popStackFrame(ctx);
	return ((jfloat(temp1)) * ((jfloat)((mindustry_entities_comp_UnitComp *) NULL_CHECK((frame[0].o)))->F_speedMultiplier));
	}

	popStackFrame(ctx);
}

void M_mindustry_entities_comp_UnitComp_unloaded(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[1];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/comp/UnitComp:unloaded", 1 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	LINE_NUMBER(115);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_entities_comp_UnitComp_updateBoosting_boolean(jcontext ctx, jobject self, jbool param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/comp/UnitComp:updateBoosting", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(118);
	((func_mindustry_entities_comp_UnitComp_updateBoosting_boolean_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_entities_comp_UnitComp_updateBoosting_boolean_boolean])(ctx, (frame[0].o), (frame[1].i), (jint(0)));
	LINE_NUMBER(119);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_entities_comp_UnitComp_updateBoosting_boolean_boolean(jcontext ctx, jobject self, jbool param0, jbool param1) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/comp/UnitComp:updateBoosting", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(122);
	sp[0].o = (jobject)((mindustry_entities_comp_UnitComp *) NULL_CHECK((frame[0].o)))->F_type;
	if (((jint)((mindustry_type_UnitType *) NULL_CHECK(sp[0].o))->F_canBoost) == 0) goto label_1;
	}
	{
	if (((jint)((mindustry_entities_comp_UnitComp *) NULL_CHECK((frame[0].o)))->F_dead) == 0) goto label_2;
	}
label_1:;
	popStackFrame(ctx);
	INST_RETURN();
label_2:;
	{
	LINE_NUMBER(124);
	if ((frame[1].i) != 0) goto label_3;
	}
	{
	jint temp0 = (jint)((func_mindustry_entities_comp_UnitComp_onSolid_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_entities_comp_UnitComp_onSolid_R_boolean])(ctx, (frame[0].o));
	if (temp0 != 0) goto label_3;
	}
	{
	jint temp0 = (jint)((func_mindustry_entities_comp_UnitComp_isFlying_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_entities_comp_UnitComp_isFlying_R_boolean])(ctx, (frame[0].o));
	if (temp0 == 0) goto label_4;
	}
	{
	jint temp0 = (jint)((func_mindustry_entities_comp_UnitComp_canLand_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_entities_comp_UnitComp_canLand_R_boolean])(ctx, (frame[0].o));
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
	LINE_NUMBER(125);
	sp[0].o = frame[0].o;
	jfloat temp0 = (jfloat)((mindustry_entities_comp_UnitComp *) NULL_CHECK((frame[0].o)))->F_elevation;
	sp[1].o = (jobject)((mindustry_entities_comp_UnitComp *) NULL_CHECK((frame[0].o)))->F_type;
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
	sp[0].o = (jobject)((mindustry_entities_comp_UnitComp *) NULL_CHECK((frame[0].o)))->F_type;
	jfloat temp0 = (jfloat)((mindustry_type_UnitType *) NULL_CHECK(sp[0].o))->F_riseSpeed;
	sp[0].f = temp0;
	sp += 1;
	goto label_10;
	}
label_9:;
	{
	sp[0].o = (jobject)((mindustry_entities_comp_UnitComp *) NULL_CHECK((frame[0].o)))->F_type;
	jfloat temp0 = (jfloat)((mindustry_type_UnitType *) NULL_CHECK(sp[0].o))->F_descentSpeed;
	sp[0].f = temp0;
	sp += 1;
	}
label_10:;
	{
	sp -= 4;
	jfloat temp0 = (jfloat)SM_arc_math_Mathf_approachDelta_float_float_float_R_float(ctx, sp[1].f, sp[2].f, sp[3].f);
	((mindustry_entities_comp_UnitComp *) NULL_CHECK(sp[0].o))->F_elevation = temp0;
	LINE_NUMBER(126);
	if ((frame[2].i) == 0) goto label_12;
	}
	{
	LINE_NUMBER(127);
	clinit_mindustry_game_EventType$Trigger(ctx);
	sp[0].o = (jobject)SF_mindustry_game_EventType$Trigger_unitCommandBoost;
	SM_arc_Events_fire_java_lang_Enum(ctx, sp[0].o);
	}
label_12:;
	LINE_NUMBER(129);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_entities_comp_UnitComp_movePref_arc_math_geom_Vec2(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/comp/UnitComp:movePref", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(133);
	sp[0].o = (jobject)((mindustry_entities_comp_UnitComp *) NULL_CHECK((frame[0].o)))->F_type;
	if (((jint)((mindustry_type_UnitType *) NULL_CHECK(sp[0].o))->F_omniMovement) == 0) goto label_1;
	}
	{
	LINE_NUMBER(134);
	((func_mindustry_entities_comp_UnitComp_moveAt_arc_math_geom_Vec2) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_entities_comp_UnitComp_moveAt_arc_math_geom_Vec2])(ctx, (frame[0].o), (frame[1].o));
	goto label_3;
	}
label_1:;
	{
	LINE_NUMBER(136);
	((func_mindustry_entities_comp_UnitComp_rotateMove_arc_math_geom_Vec2) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_entities_comp_UnitComp_rotateMove_arc_math_geom_Vec2])(ctx, (frame[0].o), (frame[1].o));
	}
label_3:;
	LINE_NUMBER(138);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_entities_comp_UnitComp_moveAt_arc_math_geom_Vec2(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/comp/UnitComp:moveAt", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(141);
	sp[0].o = frame[0].o;
	sp[1].o = frame[1].o;
	sp[2].o = (jobject)((mindustry_entities_comp_UnitComp *) NULL_CHECK((frame[0].o)))->F_type;
	((func_mindustry_entities_comp_UnitComp_moveAt_arc_math_geom_Vec2_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_entities_comp_UnitComp_moveAt_arc_math_geom_Vec2_float])(ctx, sp[0].o, sp[1].o, ((jfloat)((mindustry_type_UnitType *) NULL_CHECK(sp[2].o))->F_accel));
	LINE_NUMBER(142);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_entities_comp_UnitComp_approach_arc_math_geom_Vec2(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/comp/UnitComp:approach", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(145);
	sp[0].o = (jobject)((mindustry_entities_comp_UnitComp *) NULL_CHECK((frame[0].o)))->F_vel;
	sp[1].o = frame[1].o;
	sp[2].o = (jobject)((mindustry_entities_comp_UnitComp *) NULL_CHECK((frame[0].o)))->F_type;
	jfloat temp0 = (jfloat)((mindustry_type_UnitType *) NULL_CHECK(sp[2].o))->F_accel;
	jfloat temp1 = (jfloat)((func_mindustry_entities_comp_UnitComp_speed_R_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_entities_comp_UnitComp_speed_R_float])(ctx, (frame[0].o));
	sp[0].o = (jobject)((func_arc_math_geom_Vec2_approachDelta_arc_math_geom_Vec2_float_R_arc_math_geom_Vec2) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Vec2_approachDelta_arc_math_geom_Vec2_float_R_arc_math_geom_Vec2])(ctx, sp[0].o, sp[1].o, (temp0 * temp1));
	LINE_NUMBER(146);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_entities_comp_UnitComp_rotateMove_arc_math_geom_Vec2(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/comp/UnitComp:rotateMove", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(149);
	sp[0].o = frame[0].o;
	clinit_arc_util_Tmp(ctx);
	sp[1].o = (jobject)SF_arc_util_Tmp_v2;
	jfloat temp0 = (jfloat)((mindustry_entities_comp_UnitComp *) NULL_CHECK((frame[0].o)))->F_rotation;
	jfloat temp1 = (jfloat)((func_arc_math_geom_Vec2_len_R_float) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_math_geom_Vec2_len_R_float])(ctx, (frame[1].o));
	sp[1].o = (jobject)((func_arc_math_geom_Vec2_trns_float_float_R_arc_math_geom_Vec2) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_math_geom_Vec2_trns_float_float_R_arc_math_geom_Vec2])(ctx, sp[1].o, temp0, temp1);
	((func_mindustry_entities_comp_UnitComp_moveAt_arc_math_geom_Vec2) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_entities_comp_UnitComp_moveAt_arc_math_geom_Vec2])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(151);
	jint temp2 = (jint)((func_arc_math_geom_Vec2_isZero_R_boolean) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_math_geom_Vec2_isZero_R_boolean])(ctx, (frame[1].o));
	if (temp2 != 0) goto label_2;
	}
	{
	LINE_NUMBER(152);
	sp[0].o = frame[0].o;
	jfloat temp0 = (jfloat)((mindustry_entities_comp_UnitComp *) NULL_CHECK((frame[0].o)))->F_rotation;
	jfloat temp1 = (jfloat)((func_arc_math_geom_Vec2_angle_R_float) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_math_geom_Vec2_angle_R_float])(ctx, (frame[1].o));
	sp[1].o = (jobject)((mindustry_entities_comp_UnitComp *) NULL_CHECK((frame[0].o)))->F_type;
	jfloat temp2 = (jfloat)SM_arc_math_Angles_moveToward_float_float_float_R_float(ctx, temp0, temp1, ((((jfloat)((mindustry_type_UnitType *) NULL_CHECK(sp[1].o))->F_rotateSpeed) * (clinit_arc_util_Time(ctx), (jfloat)SF_arc_util_Time_delta)) * ((jfloat)((mindustry_entities_comp_UnitComp *) NULL_CHECK((frame[0].o)))->F_speedMultiplier)));
	((mindustry_entities_comp_UnitComp *) NULL_CHECK(sp[0].o))->F_rotation = temp2;
	}
label_2:;
	LINE_NUMBER(154);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_entities_comp_UnitComp_aimLook_arc_math_geom_Position(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/comp/UnitComp:aimLook", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(157);
	((func_mindustry_entities_comp_UnitComp_aim_arc_math_geom_Position) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_entities_comp_UnitComp_aim_arc_math_geom_Position])(ctx, (frame[0].o), (frame[1].o));
	LINE_NUMBER(158);
	((func_mindustry_entities_comp_UnitComp_lookAt_arc_math_geom_Position) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_entities_comp_UnitComp_lookAt_arc_math_geom_Position])(ctx, (frame[0].o), (frame[1].o));
	LINE_NUMBER(159);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_entities_comp_UnitComp_aimLook_float_float(jcontext ctx, jobject self, jfloat param0, jfloat param1) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/comp/UnitComp:aimLook", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	frame[2].f = param1;
	{
	LINE_NUMBER(162);
	((func_mindustry_entities_comp_UnitComp_aim_float_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_entities_comp_UnitComp_aim_float_float])(ctx, (frame[0].o), (frame[1].f), (frame[2].f));
	LINE_NUMBER(163);
	((func_mindustry_entities_comp_UnitComp_lookAt_float_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_entities_comp_UnitComp_lookAt_float_float])(ctx, (frame[0].o), (frame[1].f), (frame[2].f));
	LINE_NUMBER(164);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jbool M_mindustry_entities_comp_UnitComp_isPathImpassable_int_int_R_boolean(jcontext ctx, jobject self, jint param0, jint param1) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/comp/UnitComp:isPathImpassable", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(167);
	sp[0].o = (jobject)((mindustry_entities_comp_UnitComp *) NULL_CHECK((frame[0].o)))->F_type;
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
	sp[0].o = (jobject)((mindustry_entities_comp_UnitComp *) NULL_CHECK((frame[0].o)))->F_type;
	sp[0].o = (jobject)((mindustry_type_UnitType *) NULL_CHECK(sp[0].o))->F_pathCost;
	sp[1].o = (jobject)((mindustry_entities_comp_UnitComp *) NULL_CHECK((frame[0].o)))->F_team;
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

jfloat M_mindustry_entities_comp_UnitComp_physicSize_R_float(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/comp/UnitComp:physicSize", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(172);
	popStackFrame(ctx);
	return (((jfloat)((mindustry_entities_comp_UnitComp *) NULL_CHECK((frame[0].o)))->F_hitSize) * (jfloat(0.7f)));
	}

	popStackFrame(ctx);
}

jbool M_mindustry_entities_comp_UnitComp_canLand_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/comp/UnitComp:canLand", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(177);
	jfloat temp0 = (jfloat)((func_mindustry_entities_comp_UnitComp_physicSize_R_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_entities_comp_UnitComp_physicSize_R_float])(ctx, (frame[0].o));
	frame[1].f = temp0;
	LINE_NUMBER(178);
	jint temp1 = (jint)((func_mindustry_entities_comp_UnitComp_onSolid_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_entities_comp_UnitComp_onSolid_R_boolean])(ctx, (frame[0].o));
	if (temp1 != 0) goto label_2;
	}
	{
	jfloat temp0 = ((jfloat)((mindustry_entities_comp_UnitComp *) NULL_CHECK((frame[0].o)))->F_x) - ((frame[1].f) / (jfloat(2)));
	jfloat temp1 = ((jfloat)((mindustry_entities_comp_UnitComp *) NULL_CHECK((frame[0].o)))->F_y) - ((frame[1].f) / (jfloat(2)));
	jfloat temp2 = frame[1].f;
	jfloat temp3 = frame[1].f;
	{ /* InvokeDynamic */
		clinit_mindustry_entities_comp_UnitComp_invoke_arc_func_Boolf_0(ctx);
		auto proxy = (mindustry_entities_comp_UnitComp_invoke_arc_func_Boolf_0 *) gcAlloc(ctx, &class_mindustry_entities_comp_UnitComp_invoke_arc_func_Boolf_0);
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

jbool M_mindustry_entities_comp_UnitComp_inRange_arc_math_geom_Position_R_boolean(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/comp/UnitComp:inRange", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(182);
	sp[0].o = frame[0].o;
	sp[1].o = frame[1].o;
	sp[2].o = (jobject)((mindustry_entities_comp_UnitComp *) NULL_CHECK((frame[0].o)))->F_type;
	jint temp0 = (jint)((func_mindustry_entities_comp_UnitComp_within_arc_math_geom_Position_float_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_entities_comp_UnitComp_within_arc_math_geom_Position_float_R_boolean])(ctx, sp[0].o, sp[1].o, ((jfloat)((mindustry_type_UnitType *) NULL_CHECK(sp[2].o))->F_range));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jbool M_mindustry_entities_comp_UnitComp_hasWeapons_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/comp/UnitComp:hasWeapons", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(186);
	sp[0].o = (jobject)((mindustry_entities_comp_UnitComp *) NULL_CHECK((frame[0].o)))->F_type;
	jint temp0 = (jint)((func_mindustry_type_UnitType_hasWeapons_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_type_UnitType_hasWeapons_R_boolean])(ctx, sp[0].o);
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jfloat M_mindustry_entities_comp_UnitComp_speed_R_float(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/comp/UnitComp:speed", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(191);
	jint temp0 = (jint)((func_mindustry_entities_comp_UnitComp_isGrounded_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_entities_comp_UnitComp_isGrounded_R_boolean])(ctx, (frame[0].o));
	if (temp0 != 0) goto label_1;
	}
	{
	jint temp0 = (jint)((func_mindustry_entities_comp_UnitComp_isPlayer_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_entities_comp_UnitComp_isPlayer_R_boolean])(ctx, (frame[0].o));
	if (temp0 != 0) goto label_2;
	}
label_1:;
	INST_FCONST(1);
	goto label_3;
label_2:;
	{
	jfloat temp0 = jfloat(1);
	sp[0].o = (jobject)((mindustry_entities_comp_UnitComp *) NULL_CHECK((frame[0].o)))->F_type;
	jfloat temp1 = (jfloat)((mindustry_type_UnitType *) NULL_CHECK(sp[0].o))->F_strafePenalty;
	sp[0].o = (jobject)((func_mindustry_entities_comp_UnitComp_vel_R_arc_math_geom_Vec2) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_entities_comp_UnitComp_vel_R_arc_math_geom_Vec2])(ctx, (frame[0].o));
	jfloat temp2 = (jfloat)((func_arc_math_geom_Vec2_angle_R_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Vec2_angle_R_float])(ctx, sp[0].o);
	jfloat temp3 = (jfloat)SM_arc_math_Angles_angleDist_float_float_R_float(ctx, temp2, ((jfloat)((mindustry_entities_comp_UnitComp *) NULL_CHECK((frame[0].o)))->F_rotation));
	jfloat temp4 = (jfloat)SM_arc_math_Mathf_lerp_float_float_float_R_float(ctx, temp0, temp1, (temp3 / (jfloat(180.0f))));
	sp[0].f = temp4;
	sp += 1;
	}
label_3:;
	{
	sp -= 1;
	frame[1].f = sp[0].f;
	LINE_NUMBER(192);
	jfloat temp0 = jfloat(1);
	sp[0].o = (jobject)((mindustry_entities_comp_UnitComp *) NULL_CHECK((frame[0].o)))->F_type;
	jobject temp1 = sp[0].o;
	sp[0].f = temp0;
	sp += 1;
	if (((jint)((mindustry_type_UnitType *) NULL_CHECK(temp1))->F_canBoost) == 0) goto label_5;
	}
	{
	sp[0].o = (jobject)((mindustry_entities_comp_UnitComp *) NULL_CHECK((frame[0].o)))->F_type;
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
	jfloat temp0 = (jfloat)SM_arc_math_Mathf_lerp_float_float_float_R_float(ctx, sp[0].f, sp[1].f, ((jfloat)((mindustry_entities_comp_UnitComp *) NULL_CHECK((frame[0].o)))->F_elevation));
	frame[2].f = temp0;
	LINE_NUMBER(193);
	sp[0].o = (jobject)((mindustry_entities_comp_UnitComp *) NULL_CHECK((frame[0].o)))->F_type;
	jfloat temp1 = (((jfloat)((mindustry_type_UnitType *) NULL_CHECK(sp[0].o))->F_speed) * (frame[1].f)) * (frame[2].f);
	jfloat temp2 = (jfloat)((func_mindustry_entities_comp_UnitComp_floorSpeedMultiplier_R_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_entities_comp_UnitComp_floorSpeedMultiplier_R_float])(ctx, (frame[0].o));
	popStackFrame(ctx);
	return (temp1 * temp2);
	}

	popStackFrame(ctx);
}

jfloat M_mindustry_entities_comp_UnitComp_prefRotation_R_float(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/comp/UnitComp:prefRotation", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(198);
	jint temp0 = (jint)((func_mindustry_entities_comp_UnitComp_activelyBuilding_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_entities_comp_UnitComp_activelyBuilding_R_boolean])(ctx, (frame[0].o));
	if (temp0 == 0) goto label_1;
	}
	{
	sp[0].o = (jobject)((mindustry_entities_comp_UnitComp *) NULL_CHECK((frame[0].o)))->F_type;
	if (((jint)((mindustry_type_UnitType *) NULL_CHECK(sp[0].o))->F_rotateToBuilding) == 0) goto label_1;
	}
	{
	LINE_NUMBER(199);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((func_mindustry_entities_comp_UnitComp_buildPlan_R_mindustry_entities_units_BuildPlan) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_entities_comp_UnitComp_buildPlan_R_mindustry_entities_units_BuildPlan])(ctx, (frame[0].o));
	jfloat temp0 = (jfloat)((func_mindustry_entities_comp_UnitComp_angleTo_arc_math_geom_Position_R_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_entities_comp_UnitComp_angleTo_arc_math_geom_Position_R_float])(ctx, sp[0].o, sp[1].o);
	popStackFrame(ctx);
	return temp0;
	}
label_1:;
	{
	LINE_NUMBER(200);
	sp[0].o = (jobject)((mindustry_entities_comp_UnitComp *) NULL_CHECK((frame[0].o)))->F_mineTile;
	if (sp[0].o == nullptr) goto label_3;
	}
	{
	LINE_NUMBER(201);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((mindustry_entities_comp_UnitComp *) NULL_CHECK((frame[0].o)))->F_mineTile;
	jfloat temp0 = (jfloat)((func_mindustry_entities_comp_UnitComp_angleTo_arc_math_geom_Position_R_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_entities_comp_UnitComp_angleTo_arc_math_geom_Position_R_float])(ctx, sp[0].o, sp[1].o);
	popStackFrame(ctx);
	return temp0;
	}
label_3:;
	{
	LINE_NUMBER(202);
	jint temp0 = (jint)((func_mindustry_entities_comp_UnitComp_moving_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_entities_comp_UnitComp_moving_R_boolean])(ctx, (frame[0].o));
	if (temp0 == 0) goto label_5;
	}
	{
	sp[0].o = (jobject)((mindustry_entities_comp_UnitComp *) NULL_CHECK((frame[0].o)))->F_type;
	if (((jint)((mindustry_type_UnitType *) NULL_CHECK(sp[0].o))->F_omniMovement) == 0) goto label_5;
	}
	{
	LINE_NUMBER(203);
	sp[0].o = (jobject)((func_mindustry_entities_comp_UnitComp_vel_R_arc_math_geom_Vec2) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_entities_comp_UnitComp_vel_R_arc_math_geom_Vec2])(ctx, (frame[0].o));
	jfloat temp0 = (jfloat)((func_arc_math_geom_Vec2_angle_R_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Vec2_angle_R_float])(ctx, sp[0].o);
	popStackFrame(ctx);
	return temp0;
	}
label_5:;
	{
	LINE_NUMBER(205);
	popStackFrame(ctx);
	return ((jfloat)((mindustry_entities_comp_UnitComp *) NULL_CHECK((frame[0].o)))->F_rotation);
	}

	popStackFrame(ctx);
}

jfloat M_mindustry_entities_comp_UnitComp_ammof_R_float(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/comp/UnitComp:ammof", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(209);
	popStackFrame(ctx);
	return (jfloat(1));
	}

	popStackFrame(ctx);
}

jbool M_mindustry_entities_comp_UnitComp_displayable_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/comp/UnitComp:displayable", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(214);
	sp[0].o = (jobject)((mindustry_entities_comp_UnitComp *) NULL_CHECK((frame[0].o)))->F_type;
	popStackFrame(ctx);
	return ((jint)((mindustry_type_UnitType *) NULL_CHECK(sp[0].o))->F_hoverable);
	}

	popStackFrame(ctx);
}

jbool M_mindustry_entities_comp_UnitComp_isSyncHidden_mindustry_game_Team_R_boolean(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/comp/UnitComp:isSyncHidden", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(221);
	jint temp0 = (jint)((func_mindustry_entities_comp_UnitComp_isShooting_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_entities_comp_UnitComp_isShooting_R_boolean])(ctx, (frame[0].o));
	if (temp0 != 0) goto label_1;
	}
	{
	jint temp0 = (jint)((func_mindustry_entities_comp_UnitComp_inFogTo_mindustry_game_Team_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_entities_comp_UnitComp_inFogTo_mindustry_game_Team_R_boolean])(ctx, (frame[0].o), (frame[1].o));
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

void M_mindustry_entities_comp_UnitComp_handleSyncHidden(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/comp/UnitComp:handleSyncHidden", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(226);
	((func_mindustry_entities_comp_UnitComp_remove) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_entities_comp_UnitComp_remove])(ctx, (frame[0].o));
	LINE_NUMBER(227);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_netClient;
	((func_mindustry_core_NetClient_clearRemovedEntity_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_NetClient_clearRemovedEntity_int])(ctx, sp[0].o, ((jint)((mindustry_entities_comp_UnitComp *) NULL_CHECK((frame[0].o)))->F_id));
	LINE_NUMBER(228);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jbool M_mindustry_entities_comp_UnitComp_inFogTo_mindustry_game_Team_R_boolean(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[13];
	auto stack = &frame[7];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/comp/UnitComp:inFogTo", 13 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(233);
	sp[0].o = (jobject)((mindustry_entities_comp_UnitComp *) NULL_CHECK((frame[0].o)))->F_team;
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
	LINE_NUMBER(235);
	if ((floatCompare(((jfloat)((mindustry_entities_comp_UnitComp *) NULL_CHECK((frame[0].o)))->F_hitSize), (jfloat(16.0f)), 1)) > 0) goto label_3;
	}
	{
	LINE_NUMBER(236);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_fogControl;
	jint temp0 = (jint)((func_mindustry_game_FogControl_isVisible_mindustry_game_Team_float_float_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_game_FogControl_isVisible_mindustry_game_Team_float_float_R_boolean])(ctx, sp[0].o, (frame[1].o), ((jfloat)((mindustry_entities_comp_UnitComp *) NULL_CHECK((frame[0].o)))->F_x), ((jfloat)((mindustry_entities_comp_UnitComp *) NULL_CHECK((frame[0].o)))->F_y));
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
	LINE_NUMBER(239);
	frame[2].f = (((jfloat)((mindustry_entities_comp_UnitComp *) NULL_CHECK((frame[0].o)))->F_hitSize) / (jfloat(2)));
	LINE_NUMBER(240);
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
	LINE_NUMBER(241);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_fogControl;
	jint temp0 = (jint)((func_mindustry_game_FogControl_isVisible_mindustry_game_Team_float_float_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_game_FogControl_isVisible_mindustry_game_Team_float_float_R_boolean])(ctx, sp[0].o, (frame[1].o), (((jfloat)((mindustry_entities_comp_UnitComp *) NULL_CHECK((frame[0].o)))->F_x) + ((jfloat(((jint)((arc_math_geom_Point2 *) NULL_CHECK((frame[6].o)))->F_x))) * (frame[2].f))), (((jfloat)((mindustry_entities_comp_UnitComp *) NULL_CHECK((frame[0].o)))->F_y) + ((jfloat(((jint)((arc_math_geom_Point2 *) NULL_CHECK((frame[6].o)))->F_y))) * (frame[2].f))));
	if (temp0 == 0) goto label_11;
	}
	{
	LINE_NUMBER(242);
	popStackFrame(ctx);
	return (jint(0));
	}
label_11:;
	{
	LINE_NUMBER(240);
	INST_IINC(5, 1);
	goto label_8;
	}
label_9:;
	{
	LINE_NUMBER(247);
	popStackFrame(ctx);
	return (jint(1));
	}

	popStackFrame(ctx);
}

jfloat M_mindustry_entities_comp_UnitComp_range_R_float(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/comp/UnitComp:range", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(252);
	sp[0].o = (jobject)((mindustry_entities_comp_UnitComp *) NULL_CHECK((frame[0].o)))->F_type;
	popStackFrame(ctx);
	return ((jfloat)((mindustry_type_UnitType *) NULL_CHECK(sp[0].o))->F_maxRange);
	}

	popStackFrame(ctx);
}

jfloat M_mindustry_entities_comp_UnitComp_clipSize_R_float(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/comp/UnitComp:clipSize", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(257);
	jint temp0 = (jint)((func_mindustry_entities_comp_UnitComp_isBuilding_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_entities_comp_UnitComp_isBuilding_R_boolean])(ctx, (frame[0].o));
	if (temp0 == 0) goto label_1;
	}
	{
	LINE_NUMBER(258);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	sp[0].o = (jobject)((mindustry_core_GameState *) NULL_CHECK(sp[0].o))->F_rules;
	if (((jint)((mindustry_game_Rules *) NULL_CHECK(sp[0].o))->F_infiniteResources) == 0) goto label_3;
	}
	(sp++)->f = jfloat(3,402823e+38f);
	goto label_4;
label_3:;
	{
	sp[0].o = (jobject)((mindustry_entities_comp_UnitComp *) NULL_CHECK((frame[0].o)))->F_type;
	jfloat temp0 = (jfloat)((mindustry_type_UnitType *) NULL_CHECK(sp[0].o))->F_clipSize;
	sp[0].o = (jobject)((mindustry_entities_comp_UnitComp *) NULL_CHECK((frame[0].o)))->F_type;
	sp[0].o = (jobject)((mindustry_type_UnitType *) NULL_CHECK(sp[0].o))->F_region;
	jfloat temp1 = (jfloat)SM_java_lang_Math_max_float_float_R_float(ctx, temp0, (jfloat(((jint)((arc_graphics_g2d_TextureRegion *) NULL_CHECK(sp[0].o))->F_width))));
	sp[0].o = (jobject)((mindustry_entities_comp_UnitComp *) NULL_CHECK((frame[0].o)))->F_type;
	jfloat temp2 = (temp1 + ((jfloat)((mindustry_type_UnitType *) NULL_CHECK(sp[0].o))->F_buildRange)) + (jfloat(32.0f));
	sp[0].f = temp2;
	sp += 1;
	}
label_4:;
	popStackFrame(ctx);
	INST_FRETURN();
label_1:;
	{
	LINE_NUMBER(260);
	jint temp0 = (jint)((func_mindustry_entities_comp_UnitComp_mining_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_entities_comp_UnitComp_mining_R_boolean])(ctx, (frame[0].o));
	if (temp0 == 0) goto label_5;
	}
	{
	LINE_NUMBER(261);
	sp[0].o = (jobject)((mindustry_entities_comp_UnitComp *) NULL_CHECK((frame[0].o)))->F_type;
	jfloat temp0 = (jfloat)((mindustry_type_UnitType *) NULL_CHECK(sp[0].o))->F_clipSize;
	sp[0].o = (jobject)((mindustry_entities_comp_UnitComp *) NULL_CHECK((frame[0].o)))->F_type;
	popStackFrame(ctx);
	return (temp0 + ((jfloat)((mindustry_type_UnitType *) NULL_CHECK(sp[0].o))->F_mineRange));
	}
label_5:;
	{
	LINE_NUMBER(263);
	sp[0].o = (jobject)((mindustry_entities_comp_UnitComp *) NULL_CHECK((frame[0].o)))->F_type;
	popStackFrame(ctx);
	return ((jfloat)((mindustry_type_UnitType *) NULL_CHECK(sp[0].o))->F_clipSize);
	}

	popStackFrame(ctx);
}

jdouble M_mindustry_entities_comp_UnitComp_sense_mindustry_logic_LAccess_R_double(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/comp/UnitComp:sense", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(268);
	clinit_mindustry_entities_comp_UnitComp$1(ctx);
	sp[0].o = (jobject)SF_mindustry_entities_comp_UnitComp$1_$SwitchMap$mindustry$logic$LAccess;
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
	LINE_NUMBER(269);
	sp[0].o = (jobject)((func_mindustry_entities_comp_UnitComp_stack_R_mindustry_type_ItemStack) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_entities_comp_UnitComp_stack_R_mindustry_type_ItemStack])(ctx, (frame[0].o));
	jdouble temp0 = jdouble(((jint)((mindustry_type_ItemStack *) NULL_CHECK(sp[0].o))->F_amount));
	sp[0].d = temp0;
	sp += 1;
	goto label_41;
	}
label_2:;
	{
	LINE_NUMBER(270);
	sp[0].o = (jobject)((mindustry_entities_comp_UnitComp *) NULL_CHECK((frame[0].o)))->F_type;
	jdouble temp0 = jdouble(((jint)((mindustry_type_UnitType *) NULL_CHECK(sp[0].o))->F_itemCapacity));
	sp[0].d = temp0;
	sp += 1;
	goto label_41;
	}
label_3:;
	{
	LINE_NUMBER(271);
	jdouble temp0 = jdouble(((jfloat)((mindustry_entities_comp_UnitComp *) NULL_CHECK((frame[0].o)))->F_rotation));
	sp[0].d = temp0;
	sp += 1;
	goto label_41;
	}
label_4:;
	{
	LINE_NUMBER(272);
	jdouble temp0 = jdouble(((jfloat)((mindustry_entities_comp_UnitComp *) NULL_CHECK((frame[0].o)))->F_health));
	sp[0].d = temp0;
	sp += 1;
	goto label_41;
	}
label_5:;
	{
	LINE_NUMBER(273);
	jdouble temp0 = jdouble(((jfloat)((mindustry_entities_comp_UnitComp *) NULL_CHECK((frame[0].o)))->F_shield));
	sp[0].d = temp0;
	sp += 1;
	goto label_41;
	}
label_6:;
	{
	LINE_NUMBER(274);
	jdouble temp0 = jdouble(((jfloat)((mindustry_entities_comp_UnitComp *) NULL_CHECK((frame[0].o)))->F_maxHealth));
	sp[0].d = temp0;
	sp += 1;
	goto label_41;
	}
label_7:;
	{
	LINE_NUMBER(275);
	jint temp0 = (jint)((func_mindustry_entities_comp_UnitComp_isFlying_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_entities_comp_UnitComp_isFlying_R_boolean])(ctx, (frame[0].o));
	if (temp0 == 0) goto label_42;
	}
	INST_DCONST(1);
	goto label_41;
label_42:;
	INST_DCONST(0);
	goto label_41;
label_8:;
	{
	LINE_NUMBER(276);
	jfloat temp0 = (jfloat)SM_mindustry_core_World_conv_float_R_float(ctx, ((jfloat)((mindustry_entities_comp_UnitComp *) NULL_CHECK((frame[0].o)))->F_x));
	jdouble temp1 = jdouble(temp0);
	sp[0].d = temp1;
	sp += 1;
	goto label_41;
	}
label_9:;
	{
	LINE_NUMBER(277);
	jfloat temp0 = (jfloat)SM_mindustry_core_World_conv_float_R_float(ctx, ((jfloat)((mindustry_entities_comp_UnitComp *) NULL_CHECK((frame[0].o)))->F_y));
	jdouble temp1 = jdouble(temp0);
	sp[0].d = temp1;
	sp += 1;
	goto label_41;
	}
label_10:;
	{
	LINE_NUMBER(278);
	sp[0].o = (jobject)((mindustry_entities_comp_UnitComp *) NULL_CHECK((frame[0].o)))->F_vel;
	jdouble temp0 = jdouble(((((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK(sp[0].o))->F_x) * (jfloat(60.0f))) / (jfloat(8.0f))));
	sp[0].d = temp0;
	sp += 1;
	goto label_41;
	}
label_11:;
	{
	LINE_NUMBER(279);
	sp[0].o = (jobject)((mindustry_entities_comp_UnitComp *) NULL_CHECK((frame[0].o)))->F_vel;
	jdouble temp0 = jdouble(((((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK(sp[0].o))->F_y) * (jfloat(60.0f))) / (jfloat(8.0f))));
	sp[0].d = temp0;
	sp += 1;
	goto label_41;
	}
label_12:;
	{
	LINE_NUMBER(280);
	if (((jint)((mindustry_entities_comp_UnitComp *) NULL_CHECK((frame[0].o)))->F_dead) != 0) goto label_43;
	}
	{
	jint temp0 = (jint)((func_mindustry_entities_comp_UnitComp_isAdded_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_entities_comp_UnitComp_isAdded_R_boolean])(ctx, (frame[0].o));
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
	LINE_NUMBER(281);
	sp[0].o = (jobject)((mindustry_entities_comp_UnitComp *) NULL_CHECK((frame[0].o)))->F_team;
	jdouble temp0 = jdouble(((jint)((mindustry_game_Team *) NULL_CHECK(sp[0].o))->F_id));
	sp[0].d = temp0;
	sp += 1;
	goto label_41;
	}
label_14:;
	{
	LINE_NUMBER(282);
	jint temp0 = (jint)((func_mindustry_entities_comp_UnitComp_isShooting_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_entities_comp_UnitComp_isShooting_R_boolean])(ctx, (frame[0].o));
	if (temp0 == 0) goto label_45;
	}
	INST_DCONST(1);
	goto label_41;
label_45:;
	INST_DCONST(0);
	goto label_41;
label_15:;
	{
	LINE_NUMBER(283);
	sp[0].o = (jobject)((mindustry_entities_comp_UnitComp *) NULL_CHECK((frame[0].o)))->F_type;
	if (((jint)((mindustry_type_UnitType *) NULL_CHECK(sp[0].o))->F_canBoost) == 0) goto label_46;
	}
	{
	jint temp0 = (jint)((func_mindustry_entities_comp_UnitComp_isFlying_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_entities_comp_UnitComp_isFlying_R_boolean])(ctx, (frame[0].o));
	if (temp0 == 0) goto label_46;
	}
	INST_DCONST(1);
	goto label_41;
label_46:;
	INST_DCONST(0);
	goto label_41;
label_16:;
	{
	LINE_NUMBER(284);
	jfloat temp0 = (jfloat)((func_mindustry_entities_comp_UnitComp_range_R_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_entities_comp_UnitComp_range_R_float])(ctx, (frame[0].o));
	jdouble temp1 = jdouble((temp0 / (jfloat(8.0f))));
	sp[0].d = temp1;
	sp += 1;
	goto label_41;
	}
label_17:;
	{
	LINE_NUMBER(285);
	jfloat temp0 = (jfloat)((func_mindustry_entities_comp_UnitComp_aimX_R_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_entities_comp_UnitComp_aimX_R_float])(ctx, (frame[0].o));
	jfloat temp1 = (jfloat)SM_mindustry_core_World_conv_float_R_float(ctx, temp0);
	jdouble temp2 = jdouble(temp1);
	sp[0].d = temp2;
	sp += 1;
	goto label_41;
	}
label_18:;
	{
	LINE_NUMBER(286);
	jfloat temp0 = (jfloat)((func_mindustry_entities_comp_UnitComp_aimY_R_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_entities_comp_UnitComp_aimY_R_float])(ctx, (frame[0].o));
	jfloat temp1 = (jfloat)SM_mindustry_core_World_conv_float_R_float(ctx, temp0);
	jdouble temp2 = jdouble(temp1);
	sp[0].d = temp2;
	sp += 1;
	goto label_41;
	}
label_19:;
	{
	LINE_NUMBER(287);
	sp[0].o = (jobject)((mindustry_entities_comp_UnitComp *) NULL_CHECK((frame[0].o)))->F_controller;
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
	LINE_NUMBER(288);
	sp[0].o = (jobject)((mindustry_entities_comp_UnitComp *) NULL_CHECK((frame[0].o)))->F_controller;
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
	LINE_NUMBER(289);
	sp[0].o = (jobject)((mindustry_entities_comp_UnitComp *) NULL_CHECK((frame[0].o)))->F_controller;
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
	LINE_NUMBER(290);
	sp[0].o = (jobject)((mindustry_entities_comp_UnitComp *) NULL_CHECK((frame[0].o)))->F_controller;
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
	LINE_NUMBER(291);
	jint temp0 = (jint)((func_mindustry_entities_comp_UnitComp_mining_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_entities_comp_UnitComp_mining_R_boolean])(ctx, (frame[0].o));
	if (temp0 == 0) goto label_67;
	}
	INST_DCONST(1);
	goto label_41;
label_67:;
	INST_DCONST(0);
	goto label_41;
label_24:;
	{
	LINE_NUMBER(292);
	jint temp0 = (jint)((func_mindustry_entities_comp_UnitComp_mining_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_entities_comp_UnitComp_mining_R_boolean])(ctx, (frame[0].o));
	if (temp0 == 0) goto label_68;
	}
	{
	sp[0].o = (jobject)((mindustry_entities_comp_UnitComp *) NULL_CHECK((frame[0].o)))->F_mineTile;
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
	LINE_NUMBER(293);
	jint temp0 = (jint)((func_mindustry_entities_comp_UnitComp_mining_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_entities_comp_UnitComp_mining_R_boolean])(ctx, (frame[0].o));
	if (temp0 == 0) goto label_69;
	}
	{
	sp[0].o = (jobject)((mindustry_entities_comp_UnitComp *) NULL_CHECK((frame[0].o)))->F_mineTile;
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
	LINE_NUMBER(294);
	jint temp0 = (jint)((func_mindustry_entities_comp_UnitComp_isBuilding_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_entities_comp_UnitComp_isBuilding_R_boolean])(ctx, (frame[0].o));
	if (temp0 == 0) goto label_70;
	}
	{
	sp[0].o = (jobject)((func_mindustry_entities_comp_UnitComp_buildPlan_R_mindustry_entities_units_BuildPlan) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_entities_comp_UnitComp_buildPlan_R_mindustry_entities_units_BuildPlan])(ctx, (frame[0].o));
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
	LINE_NUMBER(295);
	jint temp0 = (jint)((func_mindustry_entities_comp_UnitComp_isBuilding_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_entities_comp_UnitComp_isBuilding_R_boolean])(ctx, (frame[0].o));
	if (temp0 == 0) goto label_71;
	}
	{
	sp[0].o = (jobject)((func_mindustry_entities_comp_UnitComp_buildPlan_R_mindustry_entities_units_BuildPlan) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_entities_comp_UnitComp_buildPlan_R_mindustry_entities_units_BuildPlan])(ctx, (frame[0].o));
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
	LINE_NUMBER(296);
	if ((floatCompare(((jfloat)((mindustry_entities_comp_UnitComp *) NULL_CHECK((frame[0].o)))->F_armorOverride), (jfloat(0)), -1)) < 0) goto label_72;
	}
	{
	jdouble temp0 = jdouble(((jfloat)((mindustry_entities_comp_UnitComp *) NULL_CHECK((frame[0].o)))->F_armorOverride));
	sp[0].d = temp0;
	sp += 1;
	goto label_41;
	}
label_72:;
	{
	jdouble temp0 = jdouble(((jfloat)((mindustry_entities_comp_UnitComp *) NULL_CHECK((frame[0].o)))->F_armor));
	sp[0].d = temp0;
	sp += 1;
	goto label_41;
	}
label_29:;
	{
	LINE_NUMBER(297);
	jdouble temp0 = (jdouble)((mindustry_entities_comp_UnitComp *) NULL_CHECK((frame[0].o)))->F_flag;
	sp[0].d = temp0;
	sp += 1;
	goto label_41;
	}
label_30:;
	{
	LINE_NUMBER(298);
	sp[0].o = (jobject)((mindustry_entities_comp_UnitComp *) NULL_CHECK((frame[0].o)))->F_type;
	jdouble temp0 = jdouble((((((jfloat)((mindustry_type_UnitType *) NULL_CHECK(sp[0].o))->F_speed) * (jfloat(60.0f))) / (jfloat(8.0f))) * ((jfloat)((mindustry_entities_comp_UnitComp *) NULL_CHECK((frame[0].o)))->F_speedMultiplier)));
	sp[0].d = temp0;
	sp += 1;
	goto label_41;
	}
label_31:;
	{
	LINE_NUMBER(299);
	jint temp0 = (jint)((func_mindustry_entities_comp_UnitComp_isValid_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_entities_comp_UnitComp_isValid_R_boolean])(ctx, (frame[0].o));
	if (temp0 != 0) goto label_73;
	}
	INST_ICONST(0);
	goto label_74;
label_73:;
	{
	LINE_NUMBER(300);
	sp[0].o = (jobject)((mindustry_entities_comp_UnitComp *) NULL_CHECK((frame[0].o)))->F_controller;
	if ((isInstance(ctx, sp[0].o, &class_mindustry_ai_types_LogicAI)) == 0) goto label_75;
	}
	INST_ICONST(1);
	goto label_74;
label_75:;
	{
	LINE_NUMBER(301);
	sp[0].o = (jobject)((mindustry_entities_comp_UnitComp *) NULL_CHECK((frame[0].o)))->F_controller;
	if ((isInstance(ctx, sp[0].o, &class_mindustry_gen_Player)) == 0) goto label_76;
	}
	INST_ICONST(2);
	goto label_74;
label_76:;
	{
	LINE_NUMBER(302);
	sp[0].o = (jobject)((mindustry_entities_comp_UnitComp *) NULL_CHECK((frame[0].o)))->F_controller;
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
	LINE_NUMBER(303);
	INST_ICONST(0);
label_74:;
	INST_I2D();
	goto label_41;
label_32:;
	{
	LINE_NUMBER(304);
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
	LINE_NUMBER(305);
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
	LINE_NUMBER(306);
	sp[0].o = (jobject)((mindustry_entities_comp_UnitComp *) NULL_CHECK((frame[0].o)))->F_type;
	jdouble temp0 = jdouble((((jfloat)((mindustry_type_UnitType *) NULL_CHECK(sp[0].o))->F_payloadCapacity) / (jfloat(64.0f))));
	sp[0].d = temp0;
	sp += 1;
	goto label_41;
	}
label_35:;
	{
	LINE_NUMBER(307);
	jdouble temp0 = jdouble((((jfloat)((mindustry_entities_comp_UnitComp *) NULL_CHECK((frame[0].o)))->F_hitSize) / (jfloat(8.0f))));
	sp[0].d = temp0;
	sp += 1;
	goto label_41;
	}
label_36:;
	{
	LINE_NUMBER(308);
	sp[0].o = (jobject)((mindustry_entities_comp_UnitComp *) NULL_CHECK((frame[0].o)))->F_team;
	sp[0].o = (jobject)((mindustry_game_Team *) NULL_CHECK(sp[0].o))->F_color;
	jfloat temp0 = (jfloat)((arc_graphics_Color *) NULL_CHECK(sp[0].o))->F_r;
	sp[0].o = (jobject)((mindustry_entities_comp_UnitComp *) NULL_CHECK((frame[0].o)))->F_team;
	sp[0].o = (jobject)((mindustry_game_Team *) NULL_CHECK(sp[0].o))->F_color;
	jfloat temp1 = (jfloat)((arc_graphics_Color *) NULL_CHECK(sp[0].o))->F_g;
	sp[0].o = (jobject)((mindustry_entities_comp_UnitComp *) NULL_CHECK((frame[0].o)))->F_team;
	sp[0].o = (jobject)((mindustry_game_Team *) NULL_CHECK(sp[0].o))->F_color;
	jdouble temp2 = (jdouble)SM_arc_graphics_Color_toDoubleBits_float_float_float_float_R_double(ctx, temp0, temp1, ((jfloat)((arc_graphics_Color *) NULL_CHECK(sp[0].o))->F_b), (jfloat(1)));
	sp[0].d = temp2;
	sp += 1;
	goto label_41;
	}
label_37:;
	{
	LINE_NUMBER(309);
	sp[0].o = (jobject)((mindustry_entities_comp_UnitComp *) NULL_CHECK((frame[0].o)))->F_controller;
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
	LINE_NUMBER(310);
	sp[0].o = (jobject)((mindustry_entities_comp_UnitComp *) NULL_CHECK((frame[0].o)))->F_controller;
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
	LINE_NUMBER(311);
	sp[0].o = (jobject)((mindustry_entities_comp_UnitComp *) NULL_CHECK((frame[0].o)))->F_controller;
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
	LINE_NUMBER(312);
	(sp++)->d = jdouble(std::numeric_limits<double>::quiet_NaN());
label_41:;
	LINE_NUMBER(268);
	popStackFrame(ctx);
	INST_DRETURN();

	popStackFrame(ctx);
}

jobject M_mindustry_entities_comp_UnitComp_senseObject_mindustry_logic_LAccess_R_java_lang_Object(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/comp/UnitComp:senseObject", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(318);
	clinit_mindustry_entities_comp_UnitComp$1(ctx);
	sp[0].o = (jobject)SF_mindustry_entities_comp_UnitComp$1_$SwitchMap$mindustry$logic$LAccess;
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
	LINE_NUMBER(319);
	sp[0].o = (jobject)((mindustry_entities_comp_UnitComp *) NULL_CHECK((frame[0].o)))->F_type;
	sp += 1;
	goto label_11;
	}
label_2:;
	{
	LINE_NUMBER(320);
	sp[0].o = (jobject)((mindustry_entities_comp_UnitComp *) NULL_CHECK((frame[0].o)))->F_controller;
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
	LINE_NUMBER(321);
	sp[0].o = (jobject)((func_mindustry_entities_comp_UnitComp_stack_R_mindustry_type_ItemStack) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_entities_comp_UnitComp_stack_R_mindustry_type_ItemStack])(ctx, (frame[0].o));
	if (((jint)((mindustry_type_ItemStack *) NULL_CHECK(sp[0].o))->F_amount) != 0) goto label_14;
	}
	INST_ACONST_NULL();
	goto label_11;
label_14:;
	{
	sp[0].o = (jobject)((func_mindustry_entities_comp_UnitComp_item_R_mindustry_type_Item) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_entities_comp_UnitComp_item_R_mindustry_type_Item])(ctx, (frame[0].o));
	sp += 1;
	goto label_11;
	}
label_4:;
	{
	LINE_NUMBER(322);
	jint temp0 = (jint)((func_mindustry_entities_comp_UnitComp_isValid_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_entities_comp_UnitComp_isValid_R_boolean])(ctx, (frame[0].o));
	if (temp0 != 0) goto label_15;
	}
	INST_ACONST_NULL();
	goto label_11;
label_15:;
	{
	sp[0].o = (jobject)((mindustry_entities_comp_UnitComp *) NULL_CHECK((frame[0].o)))->F_controller;
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
	LINE_NUMBER(323);
	frame[5].o = (frame[0].o);
	if ((isInstance(ctx, (frame[5].o), &class_mindustry_gen_Payloadc)) == 0) goto label_18;
	}
	{
	frame[4].o = (checkCast(ctx, &class_mindustry_gen_Payloadc, (frame[5].o)));
	LINE_NUMBER(324);
	sp[0].o = (jobject)((func_mindustry_gen_Payloadc_payloads_R_arc_struct_Seq) resolveInterfaceMethod(ctx, &class_mindustry_gen_Payloadc, INDEX_mindustry_gen_Payloadc_payloads_R_arc_struct_Seq, (frame[4].o)))(ctx, (frame[4].o));
	jint temp0 = (jint)((func_arc_struct_Seq_isEmpty_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_isEmpty_R_boolean])(ctx, sp[0].o);
	if (temp0 == 0) goto label_20;
	}
	INST_ACONST_NULL();
	goto label_11;
label_20:;
	{
	LINE_NUMBER(325);
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
	LINE_NUMBER(326);
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
	LINE_NUMBER(327);
	jint temp0 = (jint)((func_mindustry_entities_comp_UnitComp_isBuilding_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_entities_comp_UnitComp_isBuilding_R_boolean])(ctx, (frame[0].o));
	if (temp0 == 0) goto label_25;
	}
	{
	sp[0].o = (jobject)((func_mindustry_entities_comp_UnitComp_buildPlan_R_mindustry_entities_units_BuildPlan) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_entities_comp_UnitComp_buildPlan_R_mindustry_entities_units_BuildPlan])(ctx, (frame[0].o));
	if (((jint)((mindustry_entities_units_BuildPlan *) NULL_CHECK(sp[0].o))->F_breaking) != 0) goto label_25;
	}
	{
	sp[0].o = (jobject)((func_mindustry_entities_comp_UnitComp_buildPlan_R_mindustry_entities_units_BuildPlan) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_entities_comp_UnitComp_buildPlan_R_mindustry_entities_units_BuildPlan])(ctx, (frame[0].o));
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
	LINE_NUMBER(328);
	jint temp0 = (jint)((func_mindustry_entities_comp_UnitComp_isBuilding_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_entities_comp_UnitComp_isBuilding_R_boolean])(ctx, (frame[0].o));
	if (temp0 == 0) goto label_26;
	}
	{
	sp[0].o = (jobject)((func_mindustry_entities_comp_UnitComp_buildPlan_R_mindustry_entities_units_BuildPlan) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_entities_comp_UnitComp_buildPlan_R_mindustry_entities_units_BuildPlan])(ctx, (frame[0].o));
	if (((jint)((mindustry_entities_units_BuildPlan *) NULL_CHECK(sp[0].o))->F_breaking) == 0) goto label_26;
	}
	{
	sp[0].o = (jobject)((func_mindustry_entities_comp_UnitComp_buildPlan_R_mindustry_entities_units_BuildPlan) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_entities_comp_UnitComp_buildPlan_R_mindustry_entities_units_BuildPlan])(ctx, (frame[0].o));
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
	LINE_NUMBER(329);
	sp[0].o = (jobject)((mindustry_entities_comp_UnitComp *) NULL_CHECK((frame[0].o)))->F_controller;
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
	LINE_NUMBER(330);
	sp[0].o = (jobject)((mindustry_entities_comp_UnitComp *) NULL_CHECK((frame[0].o)))->F_controller;
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
	LINE_NUMBER(331);
	clinit_mindustry_entities_comp_UnitComp(ctx);
	(sp++)->o = SF_mindustry_logic_Senseable_noSensed;
label_11:;
	LINE_NUMBER(318);
	popStackFrame(ctx);
	INST_ARETURN();

	popStackFrame(ctx);
}

jdouble M_mindustry_entities_comp_UnitComp_sense_mindustry_ctype_Content_R_double(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/comp/UnitComp:sense", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(337);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((func_mindustry_entities_comp_UnitComp_stack_R_mindustry_type_ItemStack) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_entities_comp_UnitComp_stack_R_mindustry_type_ItemStack])(ctx, (frame[0].o));
	sp[1].o = (jobject)((mindustry_type_ItemStack *) NULL_CHECK(sp[1].o))->F_item;
	if (sp[0].o != sp[1].o) goto label_1;
	}
	{
	sp[0].o = (jobject)((func_mindustry_entities_comp_UnitComp_stack_R_mindustry_type_ItemStack) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_entities_comp_UnitComp_stack_R_mindustry_type_ItemStack])(ctx, (frame[0].o));
	popStackFrame(ctx);
	return (jdouble(((jint)((mindustry_type_ItemStack *) NULL_CHECK(sp[0].o))->F_amount)));
	}
label_1:;
	{
	LINE_NUMBER(338);
	if ((isInstance(ctx, (frame[1].o), &class_mindustry_type_UnitType)) == 0) goto label_2;
	}
	{
	frame[2].o = (checkCast(ctx, &class_mindustry_type_UnitType, (frame[1].o)));
	LINE_NUMBER(339);
	frame[4].o = (frame[0].o);
	if ((isInstance(ctx, (frame[4].o), &class_mindustry_gen_Payloadc)) == 0) goto label_4;
	}
	{
	frame[3].o = (checkCast(ctx, &class_mindustry_gen_Payloadc, (frame[4].o)));
	LINE_NUMBER(340);
	sp[0].o = (jobject)((func_mindustry_gen_Payloadc_payloads_R_arc_struct_Seq) resolveInterfaceMethod(ctx, &class_mindustry_gen_Payloadc, INDEX_mindustry_gen_Payloadc_payloads_R_arc_struct_Seq, (frame[3].o)))(ctx, (frame[3].o));
	jint temp0 = (jint)((func_arc_struct_Seq_isEmpty_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_isEmpty_R_boolean])(ctx, sp[0].o);
	if (temp0 == 0) goto label_6;
	}
	INST_ICONST(0);
	goto label_7;
label_6:;
	{
	LINE_NUMBER(341);
	sp[0].o = (jobject)((func_mindustry_gen_Payloadc_payloads_R_arc_struct_Seq) resolveInterfaceMethod(ctx, &class_mindustry_gen_Payloadc, INDEX_mindustry_gen_Payloadc_payloads_R_arc_struct_Seq, (frame[3].o)))(ctx, (frame[3].o));
	{ /* InvokeDynamic */
		clinit_mindustry_entities_comp_UnitComp_invoke_arc_func_Boolf_1(ctx);
		auto proxy = (mindustry_entities_comp_UnitComp_invoke_arc_func_Boolf_1 *) gcAlloc(ctx, &class_mindustry_entities_comp_UnitComp_invoke_arc_func_Boolf_1);
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
	LINE_NUMBER(339);
	popStackFrame(ctx);
	INST_DRETURN();
label_2:;
	{
	LINE_NUMBER(343);
	if ((isInstance(ctx, (frame[1].o), &class_mindustry_world_Block)) == 0) goto label_9;
	}
	{
	frame[2].o = (checkCast(ctx, &class_mindustry_world_Block, (frame[1].o)));
	LINE_NUMBER(344);
	frame[4].o = (frame[0].o);
	if ((isInstance(ctx, (frame[4].o), &class_mindustry_gen_Payloadc)) == 0) goto label_11;
	}
	{
	frame[3].o = (checkCast(ctx, &class_mindustry_gen_Payloadc, (frame[4].o)));
	LINE_NUMBER(345);
	sp[0].o = (jobject)((func_mindustry_gen_Payloadc_payloads_R_arc_struct_Seq) resolveInterfaceMethod(ctx, &class_mindustry_gen_Payloadc, INDEX_mindustry_gen_Payloadc_payloads_R_arc_struct_Seq, (frame[3].o)))(ctx, (frame[3].o));
	jint temp0 = (jint)((func_arc_struct_Seq_isEmpty_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_isEmpty_R_boolean])(ctx, sp[0].o);
	if (temp0 == 0) goto label_13;
	}
	INST_ICONST(0);
	goto label_14;
label_13:;
	{
	LINE_NUMBER(346);
	sp[0].o = (jobject)((func_mindustry_gen_Payloadc_payloads_R_arc_struct_Seq) resolveInterfaceMethod(ctx, &class_mindustry_gen_Payloadc, INDEX_mindustry_gen_Payloadc_payloads_R_arc_struct_Seq, (frame[3].o)))(ctx, (frame[3].o));
	{ /* InvokeDynamic */
		clinit_mindustry_entities_comp_UnitComp_invoke_arc_func_Boolf_2(ctx);
		auto proxy = (mindustry_entities_comp_UnitComp_invoke_arc_func_Boolf_2 *) gcAlloc(ctx, &class_mindustry_entities_comp_UnitComp_invoke_arc_func_Boolf_2);
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
	LINE_NUMBER(344);
	popStackFrame(ctx);
	INST_DRETURN();
label_9:;
	{
	LINE_NUMBER(348);
	if ((isInstance(ctx, (frame[1].o), &class_mindustry_type_StatusEffect)) == 0) goto label_16;
	}
	{
	frame[2].o = (checkCast(ctx, &class_mindustry_type_StatusEffect, (frame[1].o)));
	LINE_NUMBER(349);
	jint temp0 = (jint)((func_mindustry_entities_comp_UnitComp_hasEffect_mindustry_type_StatusEffect_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_entities_comp_UnitComp_hasEffect_mindustry_type_StatusEffect_R_boolean])(ctx, (frame[0].o), (frame[2].o));
	if (temp0 == 0) goto label_18;
	}
	{
	jfloat temp0 = (jfloat)((func_mindustry_entities_comp_UnitComp_getDuration_mindustry_type_StatusEffect_R_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_entities_comp_UnitComp_getDuration_mindustry_type_StatusEffect_R_float])(ctx, (frame[0].o), (frame[2].o));
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
	LINE_NUMBER(351);
	popStackFrame(ctx);
	return (jdouble(std::numeric_limits<double>::quiet_NaN()));
	}

	popStackFrame(ctx);
}

void M_mindustry_entities_comp_UnitComp_setProp_mindustry_logic_LAccess_double(jcontext ctx, jobject self, jobject param0, jdouble param1) {
	NULL_CHECK(self);
	jtype frame[14];
	auto stack = &frame[7];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/comp/UnitComp:setProp", 14 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].d = param1;
	{
	LINE_NUMBER(356);
	clinit_mindustry_entities_comp_UnitComp$1(ctx);
	sp[0].o = (jobject)SF_mindustry_entities_comp_UnitComp$1_$SwitchMap$mindustry$logic$LAccess;
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
	LINE_NUMBER(358);
	sp[0].o = frame[0].o;
	jdouble temp0 = (jdouble)SM_arc_math_Mathf_clamp_double_double_double_R_double(ctx, (frame[2].d), (jdouble(0)), (jdouble(((jfloat)((mindustry_entities_comp_UnitComp *) NULL_CHECK((frame[0].o)))->F_maxHealth))));
	((mindustry_entities_comp_UnitComp *) NULL_CHECK(sp[0].o))->F_health = (jfloat(temp0));
	LINE_NUMBER(359);
	if ((floatCompare(((jfloat)((mindustry_entities_comp_UnitComp *) NULL_CHECK((frame[0].o)))->F_health), (jfloat(0)), 1)) > 0) goto label_4;
	}
	{
	if (((jint)((mindustry_entities_comp_UnitComp *) NULL_CHECK((frame[0].o)))->F_dead) != 0) goto label_4;
	}
	{
	LINE_NUMBER(360);
	((func_mindustry_entities_comp_UnitComp_kill) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_entities_comp_UnitComp_kill])(ctx, (frame[0].o));
	goto label_4;
	}
label_3:;
	{
	LINE_NUMBER(363);
	sp[0].o = frame[0].o;
	jfloat temp0 = (jfloat)SM_java_lang_Math_max_float_float_R_float(ctx, (jfloat((frame[2].d))), (jfloat(0)));
	((mindustry_entities_comp_UnitComp *) NULL_CHECK(sp[0].o))->F_shield = temp0;
	goto label_4;
	}
label_5:;
	{
	LINE_NUMBER(365);
	sp[0].o = frame[0].o;
	jfloat temp0 = (jfloat)SM_mindustry_core_World_unconv_float_R_float(ctx, (jfloat((frame[2].d))));
	((mindustry_entities_comp_UnitComp *) NULL_CHECK(sp[0].o))->F_x = temp0;
	LINE_NUMBER(366);
	jint temp1 = (jint)((func_mindustry_entities_comp_UnitComp_isLocal_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_entities_comp_UnitComp_isLocal_R_boolean])(ctx, (frame[0].o));
	if (temp1 != 0) goto label_4;
	}
	{
	((func_mindustry_entities_comp_UnitComp_snapInterpolation) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_entities_comp_UnitComp_snapInterpolation])(ctx, (frame[0].o));
	goto label_4;
	}
label_6:;
	{
	LINE_NUMBER(369);
	sp[0].o = frame[0].o;
	jfloat temp0 = (jfloat)SM_mindustry_core_World_unconv_float_R_float(ctx, (jfloat((frame[2].d))));
	((mindustry_entities_comp_UnitComp *) NULL_CHECK(sp[0].o))->F_y = temp0;
	LINE_NUMBER(370);
	jint temp1 = (jint)((func_mindustry_entities_comp_UnitComp_isLocal_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_entities_comp_UnitComp_isLocal_R_boolean])(ctx, (frame[0].o));
	if (temp1 != 0) goto label_4;
	}
	{
	((func_mindustry_entities_comp_UnitComp_snapInterpolation) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_entities_comp_UnitComp_snapInterpolation])(ctx, (frame[0].o));
	goto label_4;
	}
label_7:;
	{
	LINE_NUMBER(372);
	sp[0].o = (jobject)((mindustry_entities_comp_UnitComp *) NULL_CHECK((frame[0].o)))->F_vel;
	((arc_math_geom_Vec2 *) NULL_CHECK(sp[0].o))->F_x = (jfloat((((frame[2].d) * (jdouble(8.0))) / (jdouble(60.0)))));
	goto label_4;
	}
label_8:;
	{
	LINE_NUMBER(373);
	sp[0].o = (jobject)((mindustry_entities_comp_UnitComp *) NULL_CHECK((frame[0].o)))->F_vel;
	((arc_math_geom_Vec2 *) NULL_CHECK(sp[0].o))->F_y = (jfloat((((frame[2].d) * (jdouble(8.0))) / (jdouble(60.0)))));
	goto label_4;
	}
label_1:;
	{
	LINE_NUMBER(374);
	((mindustry_entities_comp_UnitComp *) NULL_CHECK((frame[0].o)))->F_rotation = (jfloat((frame[2].d)));
	goto label_4;
	}
label_9:;
	{
	LINE_NUMBER(376);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_net;
	jint temp0 = (jint)((func_mindustry_net_Net_client_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_net_Net_client_R_boolean])(ctx, sp[0].o);
	if (temp0 != 0) goto label_4;
	}
	{
	LINE_NUMBER(377);
	sp[0].o = (jobject)SM_mindustry_game_Team_get_int_R_mindustry_game_Team(ctx, (jint((frame[2].d))));
	frame[4].o = sp[0].o;
	LINE_NUMBER(378);
	sp[0].o = (jobject)((mindustry_entities_comp_UnitComp *) NULL_CHECK((frame[0].o)))->F_controller;
	frame[6].o = sp[0].o;
	if ((isInstance(ctx, (frame[6].o), &class_mindustry_gen_Player)) == 0) goto label_19;
	}
	{
	frame[5].o = (checkCast(ctx, &class_mindustry_gen_Player, (frame[6].o)));
	LINE_NUMBER(379);
	((func_mindustry_gen_Player_team_mindustry_game_Team) ((void **) nullCheck(ctx, (frame[5].o))->vtable)[VTABLE_mindustry_gen_Player_team_mindustry_game_Team])(ctx, (frame[5].o), (frame[4].o));
	}
label_19:;
	{
	LINE_NUMBER(381);
	((mindustry_entities_comp_UnitComp *) NULL_CHECK((frame[0].o)))->F_team = (jref) (frame[4].o);
	LINE_NUMBER(382);
	goto label_4;
	}
label_11:;
	{
	LINE_NUMBER(384);
	((mindustry_entities_comp_UnitComp *) NULL_CHECK((frame[0].o)))->F_flag = (frame[2].d);
	goto label_4;
	}
label_12:;
	{
	LINE_NUMBER(385);
	sp[0].o = frame[0].o;
	jfloat temp0 = (jfloat)SM_arc_math_Mathf_clamp_float_float_float_R_float(ctx, (jfloat((frame[2].d))), (jfloat(0)), (jfloat(1000.0f)));
	((func_mindustry_entities_comp_UnitComp_statusSpeed_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_entities_comp_UnitComp_statusSpeed_float])(ctx, sp[0].o, temp0);
	goto label_4;
	}
label_10:;
	{
	LINE_NUMBER(386);
	sp[0].o = frame[0].o;
	jfloat temp0 = (jfloat)SM_java_lang_Math_max_float_float_R_float(ctx, (jfloat((frame[2].d))), (jfloat(0)));
	((func_mindustry_entities_comp_UnitComp_statusArmor_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_entities_comp_UnitComp_statusArmor_float])(ctx, sp[0].o, temp0);
	}
label_4:;
	LINE_NUMBER(388);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_entities_comp_UnitComp_setProp_mindustry_logic_LAccess_java_lang_Object(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[11];
	auto stack = &frame[7];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/comp/UnitComp:setProp", 11 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(392);
	clinit_mindustry_entities_comp_UnitComp$1(ctx);
	sp[0].o = (jobject)SF_mindustry_entities_comp_UnitComp$1_$SwitchMap$mindustry$logic$LAccess;
	jint temp0 = (jint)((func_mindustry_logic_LAccess_ordinal_R_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_logic_LAccess_ordinal_R_int])(ctx, (frame[1].o));
	switch(((jint)ARRAY_ACCESS(jint, sp[0].o, temp0))) {
		case 13: goto label_1;
		case 44: goto label_2;
		default: goto label_3;
	}
	}
label_1:;
	{
	LINE_NUMBER(394);
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
	LINE_NUMBER(395);
	sp[0].o = (jobject)((mindustry_entities_comp_UnitComp *) NULL_CHECK((frame[0].o)))->F_controller;
	frame[5].o = sp[0].o;
	if ((isInstance(ctx, (frame[5].o), &class_mindustry_gen_Player)) == 0) goto label_7;
	}
	{
	frame[4].o = (checkCast(ctx, &class_mindustry_gen_Player, (frame[5].o)));
	((func_mindustry_gen_Player_team_mindustry_game_Team) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_mindustry_gen_Player_team_mindustry_game_Team])(ctx, (frame[4].o), (frame[3].o));
	}
label_7:;
	{
	LINE_NUMBER(396);
	((mindustry_entities_comp_UnitComp *) NULL_CHECK((frame[0].o)))->F_team = (jref) (frame[3].o);
	}
label_4:;
	LINE_NUMBER(398);
	goto label_3;
label_2:;
	{
	LINE_NUMBER(401);
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
	LINE_NUMBER(402);
	if ((isInstance(ctx, (frame[2].o), &class_mindustry_world_Block)) == 0) goto label_11;
	}
	{
	frame[4].o = (checkCast(ctx, &class_mindustry_world_Block, (frame[2].o)));
	LINE_NUMBER(403);
	jint temp0 = (jint)((func_mindustry_world_Block_synthetic_R_boolean) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_mindustry_world_Block_synthetic_R_boolean])(ctx, (frame[4].o));
	if (temp0 == 0) goto label_3;
	}
	{
	LINE_NUMBER(404);
	sp[0].o = (jobject)((func_mindustry_world_Block_newBuilding_R_mindustry_gen_Building) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_mindustry_world_Block_newBuilding_R_mindustry_gen_Building])(ctx, (frame[4].o));
	sp[1].o = frame[4].o;
	sp[2].o = (jobject)((func_mindustry_entities_comp_UnitComp_team_R_mindustry_game_Team) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_entities_comp_UnitComp_team_R_mindustry_game_Team])(ctx, (frame[0].o));
	sp[0].o = (jobject)((func_mindustry_gen_Building_create_mindustry_world_Block_mindustry_game_Team_R_mindustry_gen_Building) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_gen_Building_create_mindustry_world_Block_mindustry_game_Team_R_mindustry_gen_Building])(ctx, sp[0].o, sp[1].o, sp[2].o);
	frame[6].o = sp[0].o;
	LINE_NUMBER(405);
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
	LINE_NUMBER(406);
	goto label_3;
label_11:;
	{
	LINE_NUMBER(407);
	if ((isInstance(ctx, (frame[2].o), &class_mindustry_type_UnitType)) == 0) goto label_16;
	}
	{
	frame[5].o = (checkCast(ctx, &class_mindustry_type_UnitType, (frame[2].o)));
	LINE_NUMBER(408);
	sp[0].o = frame[5].o;
	sp[1].o = (jobject)((func_mindustry_entities_comp_UnitComp_team_R_mindustry_game_Team) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_entities_comp_UnitComp_team_R_mindustry_game_Team])(ctx, (frame[0].o));
	sp[0].o = (jobject)((func_mindustry_type_UnitType_create_mindustry_game_Team_R_mindustry_gen_Unit) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_type_UnitType_create_mindustry_game_Team_R_mindustry_gen_Unit])(ctx, sp[0].o, sp[1].o);
	frame[6].o = sp[0].o;
	LINE_NUMBER(409);
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
	LINE_NUMBER(410);
	goto label_3;
label_16:;
	INST_ALOAD(2);
	if ((--sp)->o != nullptr) goto label_3;
	{
	sp[0].o = (jobject)((func_mindustry_gen_Payloadc_payloads_R_arc_struct_Seq) resolveInterfaceMethod(ctx, &class_mindustry_gen_Payloadc, INDEX_mindustry_gen_Payloadc_payloads_R_arc_struct_Seq, (frame[3].o)))(ctx, (frame[3].o));
	if (((jint)((arc_struct_Seq *) NULL_CHECK(sp[0].o))->F_size) <= 0) goto label_3;
	}
	{
	LINE_NUMBER(411);
	sp[0].o = (jobject)((func_mindustry_gen_Payloadc_payloads_R_arc_struct_Seq) resolveInterfaceMethod(ctx, &class_mindustry_gen_Payloadc, INDEX_mindustry_gen_Payloadc_payloads_R_arc_struct_Seq, (frame[3].o)))(ctx, (frame[3].o));
	sp[0].o = (jobject)((func_arc_struct_Seq_pop_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_pop_R_java_lang_Object])(ctx, sp[0].o);
	}
label_3:;
	LINE_NUMBER(416);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_entities_comp_UnitComp_setProp_mindustry_ctype_UnlockableContent_double(jcontext ctx, jobject self, jobject param0, jdouble param1) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/comp/UnitComp:setProp", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].d = param1;
	{
	LINE_NUMBER(420);
	if ((isInstance(ctx, (frame[1].o), &class_mindustry_type_Item)) == 0) goto label_1;
	}
	{
	frame[4].o = (checkCast(ctx, &class_mindustry_type_Item, (frame[1].o)));
	LINE_NUMBER(421);
	sp[0].o = (jobject)((mindustry_entities_comp_UnitComp *) NULL_CHECK((frame[0].o)))->F_stack;
	((mindustry_type_ItemStack *) NULL_CHECK(sp[0].o))->F_item = (jref) (frame[4].o);
	LINE_NUMBER(422);
	sp[0].o = (jobject)((mindustry_entities_comp_UnitComp *) NULL_CHECK((frame[0].o)))->F_stack;
	jint temp0 = jint((frame[2].d));
	jint temp1 = jint(0);
	sp[1].o = (jobject)((mindustry_entities_comp_UnitComp *) NULL_CHECK((frame[0].o)))->F_type;
	jint temp2 = (jint)SM_arc_math_Mathf_clamp_int_int_int_R_int(ctx, temp0, temp1, ((jint)((mindustry_type_UnitType *) NULL_CHECK(sp[1].o))->F_itemCapacity));
	((mindustry_type_ItemStack *) NULL_CHECK(sp[0].o))->F_amount = temp2;
	}
label_1:;
	{
	LINE_NUMBER(424);
	if ((isInstance(ctx, (frame[1].o), &class_mindustry_type_StatusEffect)) == 0) goto label_4;
	}
	{
	frame[4].o = (checkCast(ctx, &class_mindustry_type_StatusEffect, (frame[1].o)));
	LINE_NUMBER(425);
	((func_mindustry_entities_comp_UnitComp_setDuration_mindustry_type_StatusEffect_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_entities_comp_UnitComp_setDuration_mindustry_type_StatusEffect_float])(ctx, (frame[0].o), (frame[4].o), ((jfloat((frame[2].d))) * (jfloat(60.0f))));
	}
label_4:;
	LINE_NUMBER(427);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jbool M_mindustry_entities_comp_UnitComp_canShoot_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/comp/UnitComp:canShoot", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(433);
	if (((jint)((mindustry_entities_comp_UnitComp *) NULL_CHECK((frame[0].o)))->F_disarmed) != 0) goto label_1;
	}
	{
	sp[0].o = (jobject)((mindustry_entities_comp_UnitComp *) NULL_CHECK((frame[0].o)))->F_type;
	if (((jint)((mindustry_type_UnitType *) NULL_CHECK(sp[0].o))->F_canBoost) == 0) goto label_2;
	}
	{
	jint temp0 = (jint)((func_mindustry_entities_comp_UnitComp_isFlying_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_entities_comp_UnitComp_isFlying_R_boolean])(ctx, (frame[0].o));
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

jbool M_mindustry_entities_comp_UnitComp_isEnemy_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/comp/UnitComp:isEnemy", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(437);
	sp[0].o = (jobject)((mindustry_entities_comp_UnitComp *) NULL_CHECK((frame[0].o)))->F_type;
	popStackFrame(ctx);
	return ((jint)((mindustry_type_UnitType *) NULL_CHECK(sp[0].o))->F_isEnemy);
	}

	popStackFrame(ctx);
}

jbool M_mindustry_entities_comp_UnitComp_collides_mindustry_gen_Hitboxc_R_boolean(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/comp/UnitComp:collides", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(443);
	jint temp0 = (jint)((func_mindustry_entities_comp_UnitComp_hittable_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_entities_comp_UnitComp_hittable_R_boolean])(ctx, (frame[0].o));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

void M_mindustry_entities_comp_UnitComp_collision_mindustry_gen_Hitboxc_float_float(jcontext ctx, jobject self, jobject param0, jfloat param1, jfloat param2) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/comp/UnitComp:collision", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].f = param1;
	frame[3].f = param2;
	{
	LINE_NUMBER(448);
	if ((isInstance(ctx, (frame[1].o), &class_mindustry_gen_Bullet)) == 0) goto label_1;
	}
	{
	frame[4].o = (checkCast(ctx, &class_mindustry_gen_Bullet, (frame[1].o)));
	LINE_NUMBER(449);
	sp[0].o = (jobject)((mindustry_entities_comp_UnitComp *) NULL_CHECK((frame[0].o)))->F_controller;
	((func_mindustry_entities_units_UnitController_hit_mindustry_gen_Bullet) resolveInterfaceMethod(ctx, &class_mindustry_entities_units_UnitController, INDEX_mindustry_entities_units_UnitController_hit_mindustry_gen_Bullet, sp[0].o))(ctx, sp[0].o, (frame[4].o));
	}
label_1:;
	LINE_NUMBER(451);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jint M_mindustry_entities_comp_UnitComp_itemCapacity_R_int(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/comp/UnitComp:itemCapacity", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(455);
	sp[0].o = (jobject)((mindustry_entities_comp_UnitComp *) NULL_CHECK((frame[0].o)))->F_type;
	popStackFrame(ctx);
	return ((jint)((mindustry_type_UnitType *) NULL_CHECK(sp[0].o))->F_itemCapacity);
	}

	popStackFrame(ctx);
}

jfloat M_mindustry_entities_comp_UnitComp_bounds_R_float(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/comp/UnitComp:bounds", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(460);
	popStackFrame(ctx);
	return (((jfloat)((mindustry_entities_comp_UnitComp *) NULL_CHECK((frame[0].o)))->F_hitSize) * (jfloat(2)));
	}

	popStackFrame(ctx);
}

void M_mindustry_entities_comp_UnitComp_controller_mindustry_entities_units_UnitController(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/comp/UnitComp:controller", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(465);
	((mindustry_entities_comp_UnitComp *) NULL_CHECK((frame[0].o)))->F_controller = (jref) (frame[1].o);
	LINE_NUMBER(466);
	sp[0].o = (jobject)((mindustry_entities_comp_UnitComp *) NULL_CHECK((frame[0].o)))->F_controller;
	sp[0].o = (jobject)((func_mindustry_entities_units_UnitController_unit_R_mindustry_gen_Unit) resolveInterfaceMethod(ctx, &class_mindustry_entities_units_UnitController, INDEX_mindustry_entities_units_UnitController_unit_R_mindustry_gen_Unit, sp[0].o))(ctx, sp[0].o);
	sp[1].o = (jobject)((func_mindustry_entities_comp_UnitComp_self_R_mindustry_gen_Entityc) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_entities_comp_UnitComp_self_R_mindustry_gen_Entityc])(ctx, (frame[0].o));
	if (sp[0].o == sp[1].o) goto label_2;
	}
	{
	sp[0].o = (jobject)((mindustry_entities_comp_UnitComp *) NULL_CHECK((frame[0].o)))->F_controller;
	sp[1].o = (jobject)((func_mindustry_entities_comp_UnitComp_self_R_mindustry_gen_Entityc) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_entities_comp_UnitComp_self_R_mindustry_gen_Entityc])(ctx, (frame[0].o));
	((func_mindustry_entities_units_UnitController_unit_mindustry_gen_Unit) resolveInterfaceMethod(ctx, &class_mindustry_entities_units_UnitController, INDEX_mindustry_entities_units_UnitController_unit_mindustry_gen_Unit, sp[0].o))(ctx, sp[0].o, (checkCast(ctx, &class_mindustry_gen_Unit, sp[1].o)));
	}
label_2:;
	LINE_NUMBER(467);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jobject M_mindustry_entities_comp_UnitComp_controller_R_mindustry_entities_units_UnitController(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/comp/UnitComp:controller", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(471);
	sp[0].o = (jobject)((mindustry_entities_comp_UnitComp *) NULL_CHECK((frame[0].o)))->F_controller;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void M_mindustry_entities_comp_UnitComp_resetController(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/comp/UnitComp:resetController", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(475);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((mindustry_entities_comp_UnitComp *) NULL_CHECK((frame[0].o)))->F_type;
	sp[2].o = (jobject)((func_mindustry_entities_comp_UnitComp_self_R_mindustry_gen_Entityc) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_entities_comp_UnitComp_self_R_mindustry_gen_Entityc])(ctx, (frame[0].o));
	sp[1].o = (jobject)((func_mindustry_type_UnitType_createController_mindustry_gen_Unit_R_mindustry_entities_units_UnitController) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_mindustry_type_UnitType_createController_mindustry_gen_Unit_R_mindustry_entities_units_UnitController])(ctx, sp[1].o, (checkCast(ctx, &class_mindustry_gen_Unit, sp[2].o)));
	((func_mindustry_entities_comp_UnitComp_controller_mindustry_entities_units_UnitController) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_entities_comp_UnitComp_controller_mindustry_entities_units_UnitController])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(476);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_entities_comp_UnitComp_set_mindustry_type_UnitType_mindustry_entities_units_UnitController(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/comp/UnitComp:set", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(480);
	sp[0].o = (jobject)((mindustry_entities_comp_UnitComp *) NULL_CHECK((frame[0].o)))->F_type;
	if (sp[0].o == (frame[1].o)) goto label_1;
	}
	{
	LINE_NUMBER(481);
	((func_mindustry_entities_comp_UnitComp_setType_mindustry_type_UnitType) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_entities_comp_UnitComp_setType_mindustry_type_UnitType])(ctx, (frame[0].o), (frame[1].o));
	}
label_1:;
	{
	LINE_NUMBER(483);
	((func_mindustry_entities_comp_UnitComp_controller_mindustry_entities_units_UnitController) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_entities_comp_UnitComp_controller_mindustry_entities_units_UnitController])(ctx, (frame[0].o), (frame[2].o));
	LINE_NUMBER(484);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jint M_mindustry_entities_comp_UnitComp_collisionLayer_R_int(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/comp/UnitComp:collisionLayer", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(488);
	sp[0].o = (jobject)((mindustry_entities_comp_UnitComp *) NULL_CHECK((frame[0].o)))->F_type;
	if (((jint)((mindustry_type_UnitType *) NULL_CHECK(sp[0].o))->F_allowLegStep) == 0) goto label_1;
	}
	{
	sp[0].o = (jobject)((mindustry_entities_comp_UnitComp *) NULL_CHECK((frame[0].o)))->F_type;
	if (((jint)((mindustry_type_UnitType *) NULL_CHECK(sp[0].o))->F_legPhysicsLayer) == 0) goto label_1;
	}
	INST_ICONST(1);
	goto label_2;
label_1:;
	{
	jint temp0 = (jint)((func_mindustry_entities_comp_UnitComp_isGrounded_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_entities_comp_UnitComp_isGrounded_R_boolean])(ctx, (frame[0].o));
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

void M_mindustry_entities_comp_UnitComp_lookAt_float(jcontext ctx, jobject self, jfloat param0) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/comp/UnitComp:lookAt", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	{
	LINE_NUMBER(492);
	sp[0].o = frame[0].o;
	jfloat temp0 = (jfloat)((mindustry_entities_comp_UnitComp *) NULL_CHECK((frame[0].o)))->F_rotation;
	jfloat temp1 = frame[1].f;
	sp[1].o = (jobject)((mindustry_entities_comp_UnitComp *) NULL_CHECK((frame[0].o)))->F_type;
	jfloat temp2 = ((jfloat)((mindustry_type_UnitType *) NULL_CHECK(sp[1].o))->F_rotateSpeed) * (clinit_arc_util_Time(ctx), (jfloat)SF_arc_util_Time_delta);
	jfloat temp3 = (jfloat)((func_mindustry_entities_comp_UnitComp_speedMultiplier_R_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_entities_comp_UnitComp_speedMultiplier_R_float])(ctx, (frame[0].o));
	jfloat temp4 = (jfloat)SM_arc_math_Angles_moveToward_float_float_float_R_float(ctx, temp0, temp1, (temp2 * temp3));
	((mindustry_entities_comp_UnitComp *) NULL_CHECK(sp[0].o))->F_rotation = temp4;
	LINE_NUMBER(493);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_entities_comp_UnitComp_lookAt_arc_math_geom_Position(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/comp/UnitComp:lookAt", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(496);
	sp[0].o = frame[0].o;
	jfloat temp0 = (jfloat)((func_mindustry_entities_comp_UnitComp_angleTo_arc_math_geom_Position_R_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_entities_comp_UnitComp_angleTo_arc_math_geom_Position_R_float])(ctx, (frame[0].o), (frame[1].o));
	((func_mindustry_entities_comp_UnitComp_lookAt_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_entities_comp_UnitComp_lookAt_float])(ctx, sp[0].o, temp0);
	LINE_NUMBER(497);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_entities_comp_UnitComp_lookAt_float_float(jcontext ctx, jobject self, jfloat param0, jfloat param1) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/comp/UnitComp:lookAt", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	frame[2].f = param1;
	{
	LINE_NUMBER(500);
	sp[0].o = frame[0].o;
	jfloat temp0 = (jfloat)((func_mindustry_entities_comp_UnitComp_angleTo_float_float_R_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_entities_comp_UnitComp_angleTo_float_float_R_float])(ctx, (frame[0].o), (frame[1].f), (frame[2].f));
	((func_mindustry_entities_comp_UnitComp_lookAt_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_entities_comp_UnitComp_lookAt_float])(ctx, sp[0].o, temp0);
	LINE_NUMBER(501);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jbool M_mindustry_entities_comp_UnitComp_isAI_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/comp/UnitComp:isAI", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(504);
	sp[0].o = (jobject)((mindustry_entities_comp_UnitComp *) NULL_CHECK((frame[0].o)))->F_controller;
	popStackFrame(ctx);
	return (isInstance(ctx, sp[0].o, &class_mindustry_entities_units_AIController));
	}

	popStackFrame(ctx);
}

jbool M_mindustry_entities_comp_UnitComp_allowCommand_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/comp/UnitComp:allowCommand", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(509);
	sp[0].o = (jobject)((mindustry_entities_comp_UnitComp *) NULL_CHECK((frame[0].o)))->F_controller;
	popStackFrame(ctx);
	return (isInstance(ctx, sp[0].o, &class_mindustry_ai_types_CommandAI));
	}

	popStackFrame(ctx);
}

jbool M_mindustry_entities_comp_UnitComp_isCommandable_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/comp/UnitComp:isCommandable", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(514);
	sp[0].o = (jobject)((mindustry_entities_comp_UnitComp *) NULL_CHECK((frame[0].o)))->F_controller;
	popStackFrame(ctx);
	return (isInstance(ctx, sp[0].o, &class_mindustry_ai_types_CommandAI));
	}

	popStackFrame(ctx);
}

jbool M_mindustry_entities_comp_UnitComp_canTarget_mindustry_gen_Teamc_R_boolean(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/comp/UnitComp:canTarget", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(518);
	if ((frame[1].o) == nullptr) goto label_1;
	}
	{
	if ((isInstance(ctx, (frame[1].o), &class_mindustry_gen_Unit)) == 0) goto label_2;
	}
	{
	frame[3].o = (checkCast(ctx, &class_mindustry_gen_Unit, (frame[1].o)));
	sp[0].o = frame[3].o;
	sp[1].o = (jobject)((mindustry_entities_comp_UnitComp *) NULL_CHECK((frame[0].o)))->F_type;
	jint temp0 = (jint)((mindustry_type_UnitType *) NULL_CHECK(sp[1].o))->F_targetAir;
	sp[1].o = (jobject)((mindustry_entities_comp_UnitComp *) NULL_CHECK((frame[0].o)))->F_type;
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
	sp[0].o = (jobject)((mindustry_entities_comp_UnitComp *) NULL_CHECK((frame[0].o)))->F_type;
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

jobject M_mindustry_entities_comp_UnitComp_command_R_mindustry_ai_types_CommandAI(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/comp/UnitComp:command", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(522);
	sp[0].o = (jobject)((mindustry_entities_comp_UnitComp *) NULL_CHECK((frame[0].o)))->F_controller;
	frame[2].o = sp[0].o;
	if ((isInstance(ctx, (frame[2].o), &class_mindustry_ai_types_CommandAI)) == 0) goto label_1;
	}
	{
	frame[1].o = (checkCast(ctx, &class_mindustry_ai_types_CommandAI, (frame[2].o)));
	LINE_NUMBER(523);
	popStackFrame(ctx);
	return (frame[1].o);
	}
label_1:;
	{
	LINE_NUMBER(525);
	clinit_java_lang_IllegalArgumentException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IllegalArgumentException);
	init_java_lang_IllegalArgumentException_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"Unit cannot be commanded - check isCommandable() first."_j))));
	throwException(ctx, sp[0].o);	}

	popStackFrame(ctx);
}

jbool M_mindustry_entities_comp_UnitComp_isMissile_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/comp/UnitComp:isMissile", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(530);
	popStackFrame(ctx);
	return (isInstance(ctx, (frame[0].o), &class_mindustry_gen_TimedKillc));
	}

	popStackFrame(ctx);
}

jint M_mindustry_entities_comp_UnitComp_count_R_int(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/comp/UnitComp:count", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(534);
	sp[0].o = (jobject)((mindustry_entities_comp_UnitComp *) NULL_CHECK((frame[0].o)))->F_team;
	sp[0].o = (jobject)((func_mindustry_game_Team_data_R_mindustry_game_Teams$TeamData) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_game_Team_data_R_mindustry_game_Teams$TeamData])(ctx, sp[0].o);
	sp[1].o = (jobject)((mindustry_entities_comp_UnitComp *) NULL_CHECK((frame[0].o)))->F_type;
	jint temp0 = (jint)((func_mindustry_game_Teams$TeamData_countType_mindustry_type_UnitType_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_game_Teams$TeamData_countType_mindustry_type_UnitType_R_int])(ctx, sp[0].o, sp[1].o);
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jint M_mindustry_entities_comp_UnitComp_cap_R_int(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/comp/UnitComp:cap", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(538);
	sp[0].o = (jobject)((mindustry_entities_comp_UnitComp *) NULL_CHECK((frame[0].o)))->F_team;
	jint temp0 = (jint)SM_mindustry_entities_Units_getCap_mindustry_game_Team_R_int(ctx, sp[0].o);
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

void M_mindustry_entities_comp_UnitComp_setType_mindustry_type_UnitType(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/comp/UnitComp:setType", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(542);
	((mindustry_entities_comp_UnitComp *) NULL_CHECK((frame[0].o)))->F_type = (jref) (frame[1].o);
	LINE_NUMBER(543);
	((mindustry_entities_comp_UnitComp *) NULL_CHECK((frame[0].o)))->F_maxHealth = ((jfloat)((mindustry_type_UnitType *) NULL_CHECK((frame[1].o)))->F_health);
	LINE_NUMBER(544);
	((mindustry_entities_comp_UnitComp *) NULL_CHECK((frame[0].o)))->F_drag = ((jfloat)((mindustry_type_UnitType *) NULL_CHECK((frame[1].o)))->F_drag);
	LINE_NUMBER(545);
	((mindustry_entities_comp_UnitComp *) NULL_CHECK((frame[0].o)))->F_armor = ((jfloat)((mindustry_type_UnitType *) NULL_CHECK((frame[1].o)))->F_armor);
	LINE_NUMBER(546);
	((mindustry_entities_comp_UnitComp *) NULL_CHECK((frame[0].o)))->F_hitSize = ((jfloat)((mindustry_type_UnitType *) NULL_CHECK((frame[1].o)))->F_hitSize);
	LINE_NUMBER(548);
	sp[0].o = (jobject)((func_mindustry_entities_comp_UnitComp_mounts_R_Array1_mindustry_entities_units_WeaponMount) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_entities_comp_UnitComp_mounts_R_Array1_mindustry_entities_units_WeaponMount])(ctx, (frame[0].o));
	jint temp0 = ((jarray) nullCheck(ctx, sp[0].o))->length;
	sp[0].o = (jobject)((mindustry_type_UnitType *) NULL_CHECK((frame[1].o)))->F_weapons;
	if (temp0 == ((jint)((arc_struct_Seq *) NULL_CHECK(sp[0].o))->F_size)) goto label_6;
	}
	{
	((func_mindustry_entities_comp_UnitComp_setupWeapons_mindustry_type_UnitType) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_entities_comp_UnitComp_setupWeapons_mindustry_type_UnitType])(ctx, (frame[0].o), (frame[1].o));
	}
label_6:;
	{
	LINE_NUMBER(549);
	sp[0].o = (jobject)((mindustry_entities_comp_UnitComp *) NULL_CHECK((frame[0].o)))->F_abilities;
	jint temp0 = ((jarray) nullCheck(ctx, sp[0].o))->length;
	sp[0].o = (jobject)((mindustry_type_UnitType *) NULL_CHECK((frame[1].o)))->F_abilities;
	if (temp0 != ((jint)((arc_struct_Seq *) NULL_CHECK(sp[0].o))->F_size)) goto label_7;
	}
	{
	sp[0].o = (jobject)((mindustry_entities_comp_UnitComp *) NULL_CHECK((frame[0].o)))->F_abilities;
	if ((((jarray) nullCheck(ctx, sp[0].o))->length) <= 0) goto label_8;
	}
	{
	sp[0].o = (jobject)((mindustry_entities_comp_UnitComp *) NULL_CHECK((frame[0].o)))->F_abilities;
	if ((isInstance(ctx, ((jobject)ARRAY_ACCESS(jobject, sp[0].o, (jint(0)))), &class_mindustry_entities_abilities_EmptyDataAbility)) == 0) goto label_8;
	}
label_7:;
	{
	LINE_NUMBER(550);
	sp[0].o = (jobject)((mindustry_entities_comp_UnitComp *) NULL_CHECK((frame[0].o)))->F_abilities;
	frame[2].o = sp[0].o;
	LINE_NUMBER(551);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((mindustry_type_UnitType *) NULL_CHECK((frame[1].o)))->F_abilities;
	sp[1].o = (jobject)createArray(ctx, &class_mindustry_entities_abilities_Ability, ((jint)((arc_struct_Seq *) NULL_CHECK(sp[1].o))->F_size));
	((mindustry_entities_comp_UnitComp *) NULL_CHECK(sp[0].o))->F_abilities = (jref) sp[1].o;
	LINE_NUMBER(552);
	frame[3].i = (jint(0));
	}
label_11:;
	{
	jint temp0 = frame[3].i;
	sp[0].o = (jobject)((mindustry_type_UnitType *) NULL_CHECK((frame[1].o)))->F_abilities;
	if (temp0 >= ((jint)((arc_struct_Seq *) NULL_CHECK(sp[0].o))->F_size)) goto label_8;
	}
	{
	LINE_NUMBER(553);
	sp[0].o = (jobject)((mindustry_entities_comp_UnitComp *) NULL_CHECK((frame[0].o)))->F_abilities;
	jint temp0 = frame[3].i;
	sp[1].o = (jobject)((mindustry_type_UnitType *) NULL_CHECK((frame[1].o)))->F_abilities;
	sp[1].o = (jobject)((func_arc_struct_Seq_get_int_R_java_lang_Object) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_struct_Seq_get_int_R_java_lang_Object])(ctx, sp[1].o, (frame[3].i));
	sp[1].o = (jobject)((func_mindustry_entities_abilities_Ability_copy_R_mindustry_entities_abilities_Ability) ((void **) nullCheck(ctx, (checkCast(ctx, &class_mindustry_entities_abilities_Ability, sp[1].o)))->vtable)[VTABLE_mindustry_entities_abilities_Ability_copy_R_mindustry_entities_abilities_Ability])(ctx, (checkCast(ctx, &class_mindustry_entities_abilities_Ability, sp[1].o)));
	ARRAY_ACCESS(jobject, sp[0].o, temp0) = sp[1].o;
	LINE_NUMBER(554);
	if ((frame[3].i) >= (((jarray) nullCheck(ctx, (frame[2].o)))->length)) goto label_14;
	}
	{
	LINE_NUMBER(555);
	sp[0].o = (jobject)((mindustry_entities_comp_UnitComp *) NULL_CHECK((frame[0].o)))->F_abilities;
	((mindustry_entities_abilities_Ability *) NULL_CHECK(((jobject)ARRAY_ACCESS(jobject, sp[0].o, (frame[3].i)))))->F_data = ((jfloat)((mindustry_entities_abilities_Ability *) NULL_CHECK(((jobject)ARRAY_ACCESS(jobject, (frame[2].o), (frame[3].i)))))->F_data);
	}
label_14:;
	{
	LINE_NUMBER(552);
	INST_IINC(3, 1);
	goto label_11;
	}
label_8:;
	{
	LINE_NUMBER(559);
	sp[0].o = (jobject)((mindustry_entities_comp_UnitComp *) NULL_CHECK((frame[0].o)))->F_controller;
	if (sp[0].o != nullptr) goto label_16;
	}
	{
	sp[0].o = frame[0].o;
	sp[1].o = frame[1].o;
	sp[2].o = (jobject)((func_mindustry_entities_comp_UnitComp_self_R_mindustry_gen_Entityc) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_entities_comp_UnitComp_self_R_mindustry_gen_Entityc])(ctx, (frame[0].o));
	sp[1].o = (jobject)((func_mindustry_type_UnitType_createController_mindustry_gen_Unit_R_mindustry_entities_units_UnitController) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_mindustry_type_UnitType_createController_mindustry_gen_Unit_R_mindustry_entities_units_UnitController])(ctx, sp[1].o, (checkCast(ctx, &class_mindustry_gen_Unit, sp[2].o)));
	((func_mindustry_entities_comp_UnitComp_controller_mindustry_entities_units_UnitController) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_entities_comp_UnitComp_controller_mindustry_entities_units_UnitController])(ctx, sp[0].o, sp[1].o);
	}
label_16:;
	LINE_NUMBER(560);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jbool M_mindustry_entities_comp_UnitComp_playerControllable_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/comp/UnitComp:playerControllable", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(563);
	sp[0].o = (jobject)((mindustry_entities_comp_UnitComp *) NULL_CHECK((frame[0].o)))->F_type;
	if (((jint)((mindustry_type_UnitType *) NULL_CHECK(sp[0].o))->F_playerControllable) == 0) goto label_1;
	}
	{
	sp[0].o = (jobject)((mindustry_entities_comp_UnitComp *) NULL_CHECK((frame[0].o)))->F_controller;
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

jbool M_mindustry_entities_comp_UnitComp_targetable_mindustry_game_Team_R_boolean(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/comp/UnitComp:targetable", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(567);
	sp[0].o = (jobject)((mindustry_entities_comp_UnitComp *) NULL_CHECK((frame[0].o)))->F_type;
	sp[1].o = (jobject)((func_mindustry_entities_comp_UnitComp_self_R_mindustry_gen_Entityc) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_entities_comp_UnitComp_self_R_mindustry_gen_Entityc])(ctx, (frame[0].o));
	jint temp0 = (jint)((func_mindustry_type_UnitType_targetable_mindustry_gen_Unit_mindustry_game_Team_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_type_UnitType_targetable_mindustry_gen_Unit_mindustry_game_Team_R_boolean])(ctx, sp[0].o, (checkCast(ctx, &class_mindustry_gen_Unit, sp[1].o)), (frame[1].o));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jbool M_mindustry_entities_comp_UnitComp_killable_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/comp/UnitComp:killable", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(571);
	sp[0].o = (jobject)((mindustry_entities_comp_UnitComp *) NULL_CHECK((frame[0].o)))->F_type;
	sp[1].o = (jobject)((func_mindustry_entities_comp_UnitComp_self_R_mindustry_gen_Entityc) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_entities_comp_UnitComp_self_R_mindustry_gen_Entityc])(ctx, (frame[0].o));
	jint temp0 = (jint)((func_mindustry_type_UnitType_killable_mindustry_gen_Unit_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_type_UnitType_killable_mindustry_gen_Unit_R_boolean])(ctx, sp[0].o, (checkCast(ctx, &class_mindustry_gen_Unit, sp[1].o)));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jbool M_mindustry_entities_comp_UnitComp_hittable_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/comp/UnitComp:hittable", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(575);
	sp[0].o = (jobject)((mindustry_entities_comp_UnitComp *) NULL_CHECK((frame[0].o)))->F_type;
	sp[1].o = (jobject)((func_mindustry_entities_comp_UnitComp_self_R_mindustry_gen_Entityc) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_entities_comp_UnitComp_self_R_mindustry_gen_Entityc])(ctx, (frame[0].o));
	jint temp0 = (jint)((func_mindustry_type_UnitType_hittable_mindustry_gen_Unit_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_type_UnitType_hittable_mindustry_gen_Unit_R_boolean])(ctx, sp[0].o, (checkCast(ctx, &class_mindustry_gen_Unit, sp[1].o)));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

void M_mindustry_entities_comp_UnitComp_afterSync(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/comp/UnitComp:afterSync", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(581);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((mindustry_entities_comp_UnitComp *) NULL_CHECK((frame[0].o)))->F_type;
	((func_mindustry_entities_comp_UnitComp_setType_mindustry_type_UnitType) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_entities_comp_UnitComp_setType_mindustry_type_UnitType])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(582);
	sp[0].o = (jobject)((mindustry_entities_comp_UnitComp *) NULL_CHECK((frame[0].o)))->F_controller;
	sp[1].o = (jobject)((func_mindustry_entities_comp_UnitComp_self_R_mindustry_gen_Entityc) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_entities_comp_UnitComp_self_R_mindustry_gen_Entityc])(ctx, (frame[0].o));
	((func_mindustry_entities_units_UnitController_unit_mindustry_gen_Unit) resolveInterfaceMethod(ctx, &class_mindustry_entities_units_UnitController, INDEX_mindustry_entities_units_UnitController_unit_mindustry_gen_Unit, sp[0].o))(ctx, sp[0].o, (checkCast(ctx, &class_mindustry_gen_Unit, sp[1].o)));
	LINE_NUMBER(583);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_entities_comp_UnitComp_afterRead(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/comp/UnitComp:afterRead", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(587);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((mindustry_entities_comp_UnitComp *) NULL_CHECK((frame[0].o)))->F_type;
	((func_mindustry_entities_comp_UnitComp_setType_mindustry_type_UnitType) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_entities_comp_UnitComp_setType_mindustry_type_UnitType])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(588);
	sp[0].o = (jobject)((mindustry_entities_comp_UnitComp *) NULL_CHECK((frame[0].o)))->F_controller;
	sp[1].o = (jobject)((func_mindustry_entities_comp_UnitComp_self_R_mindustry_gen_Entityc) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_entities_comp_UnitComp_self_R_mindustry_gen_Entityc])(ctx, (frame[0].o));
	((func_mindustry_entities_units_UnitController_unit_mindustry_gen_Unit) resolveInterfaceMethod(ctx, &class_mindustry_entities_units_UnitController, INDEX_mindustry_entities_units_UnitController_unit_mindustry_gen_Unit, sp[0].o))(ctx, sp[0].o, (checkCast(ctx, &class_mindustry_gen_Unit, sp[1].o)));
	LINE_NUMBER(590);
	sp[0].o = (jobject)((mindustry_entities_comp_UnitComp *) NULL_CHECK((frame[0].o)))->F_controller;
	frame[2].o = sp[0].o;
	if ((isInstance(ctx, (frame[2].o), &class_mindustry_entities_units_AIController)) == 0) goto label_3;
	}
	{
	frame[1].o = (checkCast(ctx, &class_mindustry_entities_units_AIController, (frame[2].o)));
	jint temp0 = (jint)((func_mindustry_entities_units_AIController_keepState_R_boolean) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_entities_units_AIController_keepState_R_boolean])(ctx, (frame[1].o));
	if (temp0 != 0) goto label_5;
	}
label_3:;
	{
	LINE_NUMBER(591);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((mindustry_entities_comp_UnitComp *) NULL_CHECK((frame[0].o)))->F_type;
	sp[2].o = (jobject)((func_mindustry_entities_comp_UnitComp_self_R_mindustry_gen_Entityc) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_entities_comp_UnitComp_self_R_mindustry_gen_Entityc])(ctx, (frame[0].o));
	sp[1].o = (jobject)((func_mindustry_type_UnitType_createController_mindustry_gen_Unit_R_mindustry_entities_units_UnitController) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_mindustry_type_UnitType_createController_mindustry_gen_Unit_R_mindustry_entities_units_UnitController])(ctx, sp[1].o, (checkCast(ctx, &class_mindustry_gen_Unit, sp[2].o)));
	((func_mindustry_entities_comp_UnitComp_controller_mindustry_entities_units_UnitController) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_entities_comp_UnitComp_controller_mindustry_entities_units_UnitController])(ctx, sp[0].o, sp[1].o);
	}
label_5:;
	LINE_NUMBER(593);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_entities_comp_UnitComp_afterReadAll(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/comp/UnitComp:afterReadAll", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(597);
	sp[0].o = (jobject)((mindustry_entities_comp_UnitComp *) NULL_CHECK((frame[0].o)))->F_controller;
	sp[1].o = (jobject)((func_mindustry_entities_comp_UnitComp_self_R_mindustry_gen_Entityc) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_entities_comp_UnitComp_self_R_mindustry_gen_Entityc])(ctx, (frame[0].o));
	((func_mindustry_entities_units_UnitController_afterRead_mindustry_gen_Unit) resolveInterfaceMethod(ctx, &class_mindustry_entities_units_UnitController, INDEX_mindustry_entities_units_UnitController_afterRead_mindustry_gen_Unit, sp[0].o))(ctx, sp[0].o, (checkCast(ctx, &class_mindustry_gen_Unit, sp[1].o)));
	LINE_NUMBER(598);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_entities_comp_UnitComp_add(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/comp/UnitComp:add", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(602);
	sp[0].o = (jobject)((mindustry_entities_comp_UnitComp *) NULL_CHECK((frame[0].o)))->F_team;
	sp[0].o = (jobject)((func_mindustry_game_Team_data_R_mindustry_game_Teams$TeamData) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_game_Team_data_R_mindustry_game_Teams$TeamData])(ctx, sp[0].o);
	sp[1].o = (jobject)((mindustry_entities_comp_UnitComp *) NULL_CHECK((frame[0].o)))->F_type;
	((func_mindustry_game_Teams$TeamData_updateCount_mindustry_type_UnitType_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_game_Teams$TeamData_updateCount_mindustry_type_UnitType_int])(ctx, sp[0].o, sp[1].o, (jint(1)));
	LINE_NUMBER(605);
	sp[0].o = (jobject)((mindustry_entities_comp_UnitComp *) NULL_CHECK((frame[0].o)))->F_type;
	if (((jint)((mindustry_type_UnitType *) NULL_CHECK(sp[0].o))->F_useUnitCap) == 0) goto label_2;
	}
	{
	jint temp0 = (jint)((func_mindustry_entities_comp_UnitComp_count_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_entities_comp_UnitComp_count_R_int])(ctx, (frame[0].o));
	jint temp1 = (jint)((func_mindustry_entities_comp_UnitComp_cap_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_entities_comp_UnitComp_cap_R_int])(ctx, (frame[0].o));
	if (temp0 <= temp1) goto label_2;
	}
	{
	if (((jint)((mindustry_entities_comp_UnitComp *) NULL_CHECK((frame[0].o)))->F_spawnedByCore) != 0) goto label_2;
	}
	{
	if (((jint)((mindustry_entities_comp_UnitComp *) NULL_CHECK((frame[0].o)))->F_dead) != 0) goto label_2;
	}
	{
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	sp[0].o = (jobject)((mindustry_core_GameState *) NULL_CHECK(sp[0].o))->F_rules;
	if (((jint)((mindustry_game_Rules *) NULL_CHECK(sp[0].o))->F_editor) != 0) goto label_2;
	}
	{
	LINE_NUMBER(606);
	sp[0].o = (jobject)((func_mindustry_entities_comp_UnitComp_self_R_mindustry_gen_Entityc) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_entities_comp_UnitComp_self_R_mindustry_gen_Entityc])(ctx, (frame[0].o));
	SM_mindustry_gen_Call_unitCapDeath_mindustry_gen_Unit(ctx, (checkCast(ctx, &class_mindustry_gen_Unit, sp[0].o)));
	LINE_NUMBER(607);
	sp[0].o = (jobject)((mindustry_entities_comp_UnitComp *) NULL_CHECK((frame[0].o)))->F_team;
	sp[0].o = (jobject)((func_mindustry_game_Team_data_R_mindustry_game_Teams$TeamData) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_game_Team_data_R_mindustry_game_Teams$TeamData])(ctx, sp[0].o);
	sp[1].o = (jobject)((mindustry_entities_comp_UnitComp *) NULL_CHECK((frame[0].o)))->F_type;
	((func_mindustry_game_Teams$TeamData_updateCount_mindustry_type_UnitType_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_game_Teams$TeamData_updateCount_mindustry_type_UnitType_int])(ctx, sp[0].o, sp[1].o, (jint(-1)));
	}
label_2:;
	{
	LINE_NUMBER(610);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_unitPhysics;
	sp[1].o = (jobject)((func_mindustry_entities_comp_UnitComp_self_R_mindustry_gen_Entityc) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_entities_comp_UnitComp_self_R_mindustry_gen_Entityc])(ctx, (frame[0].o));
	((func_mindustry_async_PhysicsProcess_add_mindustry_gen_Unit) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_async_PhysicsProcess_add_mindustry_gen_Unit])(ctx, sp[0].o, (checkCast(ctx, &class_mindustry_gen_Unit, sp[1].o)));
	LINE_NUMBER(612);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_entities_comp_UnitComp_remove(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/comp/UnitComp:remove", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(616);
	sp[0].o = (jobject)((mindustry_entities_comp_UnitComp *) NULL_CHECK((frame[0].o)))->F_team;
	sp[0].o = (jobject)((func_mindustry_game_Team_data_R_mindustry_game_Teams$TeamData) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_game_Team_data_R_mindustry_game_Teams$TeamData])(ctx, sp[0].o);
	sp[1].o = (jobject)((mindustry_entities_comp_UnitComp *) NULL_CHECK((frame[0].o)))->F_type;
	((func_mindustry_game_Teams$TeamData_updateCount_mindustry_type_UnitType_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_game_Teams$TeamData_updateCount_mindustry_type_UnitType_int])(ctx, sp[0].o, sp[1].o, (jint(-1)));
	LINE_NUMBER(617);
	sp[0].o = (jobject)((mindustry_entities_comp_UnitComp *) NULL_CHECK((frame[0].o)))->F_controller;
	sp[1].o = (jobject)((func_mindustry_entities_comp_UnitComp_self_R_mindustry_gen_Entityc) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_entities_comp_UnitComp_self_R_mindustry_gen_Entityc])(ctx, (frame[0].o));
	((func_mindustry_entities_units_UnitController_removed_mindustry_gen_Unit) resolveInterfaceMethod(ctx, &class_mindustry_entities_units_UnitController, INDEX_mindustry_entities_units_UnitController_removed_mindustry_gen_Unit, sp[0].o))(ctx, sp[0].o, (checkCast(ctx, &class_mindustry_gen_Unit, sp[1].o)));
	LINE_NUMBER(620);
	sp[0].o = (jobject)((mindustry_entities_comp_UnitComp *) NULL_CHECK((frame[0].o)))->F_trail;
	if (sp[0].o == nullptr) goto label_3;
	}
	{
	sp[0].o = (jobject)((mindustry_entities_comp_UnitComp *) NULL_CHECK((frame[0].o)))->F_trail;
	jint temp0 = (jint)((func_mindustry_graphics_Trail_size_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_graphics_Trail_size_R_int])(ctx, sp[0].o);
	if (temp0 <= 0) goto label_3;
	}
	{
	LINE_NUMBER(621);
	clinit_mindustry_content_Fx(ctx);
	sp[0].o = (jobject)SF_mindustry_content_Fx_trailFade;
	jfloat temp0 = (jfloat)((mindustry_entities_comp_UnitComp *) NULL_CHECK((frame[0].o)))->F_x;
	jfloat temp1 = (jfloat)((mindustry_entities_comp_UnitComp *) NULL_CHECK((frame[0].o)))->F_y;
	sp[1].o = (jobject)((mindustry_entities_comp_UnitComp *) NULL_CHECK((frame[0].o)))->F_trail;
	jfloat temp2 = (jfloat)((func_mindustry_graphics_Trail_width_R_float) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_mindustry_graphics_Trail_width_R_float])(ctx, sp[1].o);
	sp[1].o = (jobject)((mindustry_entities_comp_UnitComp *) NULL_CHECK((frame[0].o)))->F_type;
	sp[1].o = (jobject)((mindustry_type_UnitType *) NULL_CHECK(sp[1].o))->F_trailColor;
	jobject temp3 = sp[1].o;
	sp[1].f = temp0;
	sp[2].f = temp1;
	sp[3].f = temp2;
	sp += 4;
	if (temp3 != nullptr) goto label_5;
	}
	{
	sp[0].o = (jobject)((mindustry_entities_comp_UnitComp *) NULL_CHECK((frame[0].o)))->F_team;
	sp[0].o = (jobject)((mindustry_game_Team *) NULL_CHECK(sp[0].o))->F_color;
	sp += 1;
	goto label_6;
	}
label_5:;
	{
	sp[0].o = (jobject)((mindustry_entities_comp_UnitComp *) NULL_CHECK((frame[0].o)))->F_type;
	sp[0].o = (jobject)((mindustry_type_UnitType *) NULL_CHECK(sp[0].o))->F_trailColor;
	sp += 1;
	}
label_6:;
	{
	sp -= 5;
	sp[5].o = (jobject)((mindustry_entities_comp_UnitComp *) NULL_CHECK((frame[0].o)))->F_trail;
	sp[5].o = (jobject)((func_mindustry_graphics_Trail_copy_R_mindustry_graphics_Trail) ((void **) nullCheck(ctx, sp[5].o)->vtable)[VTABLE_mindustry_graphics_Trail_copy_R_mindustry_graphics_Trail])(ctx, sp[5].o);
	((func_mindustry_entities_Effect_at_float_float_float_arc_graphics_Color_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_entities_Effect_at_float_float_float_arc_graphics_Color_java_lang_Object])(ctx, sp[0].o, sp[1].f, sp[2].f, sp[3].f, sp[4].o, sp[5].o);
	}
label_3:;
	LINE_NUMBER(623);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_entities_comp_UnitComp_landed(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/comp/UnitComp:landed", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(627);
	sp[0].o = (jobject)((mindustry_entities_comp_UnitComp *) NULL_CHECK((frame[0].o)))->F_type;
	if ((floatCompare(((jfloat)((mindustry_type_UnitType *) NULL_CHECK(sp[0].o))->F_mechLandShake), (jfloat(0)), -1)) <= 0) goto label_1;
	}
	{
	LINE_NUMBER(628);
	sp[0].o = (jobject)((mindustry_entities_comp_UnitComp *) NULL_CHECK((frame[0].o)))->F_type;
	jfloat temp0 = (jfloat)((mindustry_type_UnitType *) NULL_CHECK(sp[0].o))->F_mechLandShake;
	sp[0].o = (jobject)((mindustry_entities_comp_UnitComp *) NULL_CHECK((frame[0].o)))->F_type;
	SM_mindustry_entities_Effect_shake_float_float_arc_math_geom_Position(ctx, temp0, ((jfloat)((mindustry_type_UnitType *) NULL_CHECK(sp[0].o))->F_mechLandShake), (frame[0].o));
	}
label_1:;
	{
	LINE_NUMBER(631);
	sp[0].o = (jobject)((mindustry_entities_comp_UnitComp *) NULL_CHECK((frame[0].o)))->F_type;
	sp[1].o = (jobject)((func_mindustry_entities_comp_UnitComp_self_R_mindustry_gen_Entityc) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_entities_comp_UnitComp_self_R_mindustry_gen_Entityc])(ctx, (frame[0].o));
	((func_mindustry_type_UnitType_landed_mindustry_gen_Unit) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_type_UnitType_landed_mindustry_gen_Unit])(ctx, sp[0].o, (checkCast(ctx, &class_mindustry_gen_Unit, sp[1].o)));
	LINE_NUMBER(632);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_entities_comp_UnitComp_heal_float(jcontext ctx, jobject self, jfloat param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/comp/UnitComp:heal", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	{
	LINE_NUMBER(636);
	if ((floatCompare(((jfloat)((mindustry_entities_comp_UnitComp *) NULL_CHECK((frame[0].o)))->F_health), ((jfloat)((mindustry_entities_comp_UnitComp *) NULL_CHECK((frame[0].o)))->F_maxHealth), 1)) >= 0) goto label_1;
	}
	{
	if ((floatCompare((frame[1].f), (jfloat(0)), -1)) <= 0) goto label_1;
	}
	{
	LINE_NUMBER(637);
	((mindustry_entities_comp_UnitComp *) NULL_CHECK((frame[0].o)))->F_wasHealed = (jint(1));
	}
label_1:;
	LINE_NUMBER(639);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_entities_comp_UnitComp_updateDrowning(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/comp/UnitComp:updateDrowning", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(642);
	sp[0].o = (jobject)((func_mindustry_entities_comp_UnitComp_drownFloor_R_mindustry_world_blocks_environment_Floor) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_entities_comp_UnitComp_drownFloor_R_mindustry_world_blocks_environment_Floor])(ctx, (frame[0].o));
	frame[1].o = sp[0].o;
	LINE_NUMBER(644);
	if ((frame[1].o) == nullptr) goto label_2;
	}
	{
	if (((jint)((mindustry_world_blocks_environment_Floor *) NULL_CHECK((frame[1].o)))->F_isLiquid) == 0) goto label_2;
	}
	{
	if ((floatCompare(((jfloat)((mindustry_world_blocks_environment_Floor *) NULL_CHECK((frame[1].o)))->F_drownTime), (jfloat(0)), -1)) <= 0) goto label_2;
	}
	{
	jint temp0 = (jint)((func_mindustry_entities_comp_UnitComp_canDrown_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_entities_comp_UnitComp_canDrown_R_boolean])(ctx, (frame[0].o));
	if (temp0 == 0) goto label_2;
	}
	{
	LINE_NUMBER(645);
	((mindustry_entities_comp_UnitComp *) NULL_CHECK((frame[0].o)))->F_lastDrownFloor = (jref) (frame[1].o);
	LINE_NUMBER(646);
	sp[0].o = frame[0].o;
	jfloat temp0 = (jfloat)((mindustry_entities_comp_UnitComp *) NULL_CHECK(sp[0].o))->F_drownTime;
	clinit_arc_util_Time(ctx);
	jfloat temp1 = (jfloat)SF_arc_util_Time_delta;
	jfloat temp2 = ((jfloat)((mindustry_entities_comp_UnitComp *) NULL_CHECK((frame[0].o)))->F_hitSize) / (jfloat(8.0f));
	sp[1].o = (jobject)((mindustry_entities_comp_UnitComp *) NULL_CHECK((frame[0].o)))->F_type;
	((mindustry_entities_comp_UnitComp *) NULL_CHECK(sp[0].o))->F_drownTime = (temp0 + (temp1 / ((temp2 * ((jfloat)((mindustry_type_UnitType *) NULL_CHECK(sp[1].o))->F_drownTimeMultiplier)) * ((jfloat)((mindustry_world_blocks_environment_Floor *) NULL_CHECK((frame[1].o)))->F_drownTime))));
	LINE_NUMBER(647);
	jint temp3 = (jint)SM_arc_math_Mathf_chanceDelta_double_R_boolean(ctx, (jdouble(0.05000000074505806)));
	if (temp3 == 0) goto label_6;
	}
	{
	LINE_NUMBER(648);
	sp[0].o = (jobject)((mindustry_world_blocks_environment_Floor *) NULL_CHECK((frame[1].o)))->F_drownUpdateEffect;
	jfloat temp0 = (jfloat)((mindustry_entities_comp_UnitComp *) NULL_CHECK((frame[0].o)))->F_x;
	jfloat temp1 = (jfloat)((mindustry_entities_comp_UnitComp *) NULL_CHECK((frame[0].o)))->F_y;
	jfloat temp2 = (jfloat)((mindustry_entities_comp_UnitComp *) NULL_CHECK((frame[0].o)))->F_hitSize;
	sp[1].o = (jobject)((mindustry_world_Block *) NULL_CHECK((frame[1].o)))->F_mapColor;
	((func_mindustry_entities_Effect_at_float_float_float_arc_graphics_Color) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_entities_Effect_at_float_float_float_arc_graphics_Color])(ctx, sp[0].o, temp0, temp1, temp2, sp[1].o);
	}
label_6:;
	{
	LINE_NUMBER(651);
	if ((floatCompare(((jfloat)((mindustry_entities_comp_UnitComp *) NULL_CHECK((frame[0].o)))->F_drownTime), (jfloat(0.999f)), -1)) < 0) goto label_8;
	}
	{
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_net;
	jint temp0 = (jint)((func_mindustry_net_Net_client_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_net_Net_client_R_boolean])(ctx, sp[0].o);
	if (temp0 != 0) goto label_8;
	}
	{
	LINE_NUMBER(652);
	((func_mindustry_entities_comp_UnitComp_kill) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_entities_comp_UnitComp_kill])(ctx, (frame[0].o));
	LINE_NUMBER(653);
	clinit_mindustry_game_EventType$UnitDrownEvent(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_game_EventType$UnitDrownEvent);
	sp[1].o = (jobject)((func_mindustry_entities_comp_UnitComp_self_R_mindustry_gen_Entityc) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_entities_comp_UnitComp_self_R_mindustry_gen_Entityc])(ctx, (frame[0].o));
	init_mindustry_game_EventType$UnitDrownEvent_mindustry_gen_Unit(ctx, sp[0].o, (checkCast(ctx, &class_mindustry_gen_Unit, sp[1].o)));
	SM_arc_Events_fire_java_lang_Object(ctx, sp[0].o);
	goto label_8;
	}
label_2:;
	{
	LINE_NUMBER(656);
	sp[0].o = frame[0].o;
	((mindustry_entities_comp_UnitComp *) NULL_CHECK(sp[0].o))->F_drownTime = (((jfloat)((mindustry_entities_comp_UnitComp *) NULL_CHECK(sp[0].o))->F_drownTime) - ((clinit_arc_util_Time(ctx), (jfloat)SF_arc_util_Time_delta) / (jfloat(50.0f))));
	}
label_8:;
	{
	LINE_NUMBER(659);
	sp[0].o = frame[0].o;
	jfloat temp0 = (jfloat)SM_arc_math_Mathf_clamp_float_R_float(ctx, ((jfloat)((mindustry_entities_comp_UnitComp *) NULL_CHECK((frame[0].o)))->F_drownTime));
	((mindustry_entities_comp_UnitComp *) NULL_CHECK(sp[0].o))->F_drownTime = temp0;
	LINE_NUMBER(660);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_entities_comp_UnitComp_update(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[14];
	auto stack = &frame[9];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/comp/UnitComp:update", 14 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(665);
	sp[0].o = (jobject)((mindustry_entities_comp_UnitComp *) NULL_CHECK((frame[0].o)))->F_type;
	sp[1].o = (jobject)((func_mindustry_entities_comp_UnitComp_self_R_mindustry_gen_Entityc) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_entities_comp_UnitComp_self_R_mindustry_gen_Entityc])(ctx, (frame[0].o));
	((func_mindustry_type_UnitType_update_mindustry_gen_Unit) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_type_UnitType_update_mindustry_gen_Unit])(ctx, sp[0].o, (checkCast(ctx, &class_mindustry_gen_Unit, sp[1].o)));
	LINE_NUMBER(668);
	jint temp0 = (jint)SM_java_lang_Float_isNaN_float_R_boolean(ctx, ((jfloat)((mindustry_entities_comp_UnitComp *) NULL_CHECK((frame[0].o)))->F_x));
	if (temp0 != 0) goto label_2;
	}
	{
	jint temp0 = (jint)SM_java_lang_Float_isNaN_float_R_boolean(ctx, ((jfloat)((mindustry_entities_comp_UnitComp *) NULL_CHECK((frame[0].o)))->F_y));
	if (temp0 == 0) goto label_3;
	}
label_2:;
	{
	LINE_NUMBER(669);
	((func_mindustry_entities_comp_UnitComp_remove) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_entities_comp_UnitComp_remove])(ctx, (frame[0].o));
	LINE_NUMBER(670);
	popStackFrame(ctx);
	return;
	}
label_3:;
	{
	LINE_NUMBER(675);
	sp[0].o = (jobject)((mindustry_entities_comp_UnitComp *) NULL_CHECK((frame[0].o)))->F_type;
	if (((jint)((mindustry_type_UnitType *) NULL_CHECK(sp[0].o))->F_bounded) == 0) goto label_5;
	}
	{
	LINE_NUMBER(676);
	frame[1].f = (jfloat(0));
	frame[2].f = (jfloat(0));
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_world;
	jint temp0 = (jint)((func_mindustry_core_World_unitHeight_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_World_unitHeight_R_int])(ctx, sp[0].o);
	frame[3].f = (jfloat(temp0));
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_world;
	jint temp1 = (jint)((func_mindustry_core_World_unitWidth_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_World_unitWidth_R_int])(ctx, sp[0].o);
	frame[4].f = (jfloat(temp1));
	LINE_NUMBER(679);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	sp[0].o = (jobject)((mindustry_core_GameState *) NULL_CHECK(sp[0].o))->F_rules;
	if (((jint)((mindustry_game_Rules *) NULL_CHECK(sp[0].o))->F_limitMapArea) == 0) goto label_11;
	}
	{
	sp[0].o = (jobject)((mindustry_entities_comp_UnitComp *) NULL_CHECK((frame[0].o)))->F_team;
	jint temp0 = (jint)((func_mindustry_game_Team_isAI_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_game_Team_isAI_R_boolean])(ctx, sp[0].o);
	if (temp0 != 0) goto label_11;
	}
	{
	LINE_NUMBER(680);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	sp[0].o = (jobject)((mindustry_core_GameState *) NULL_CHECK(sp[0].o))->F_rules;
	frame[1].f = (jfloat((((jint)((mindustry_game_Rules *) NULL_CHECK(sp[0].o))->F_limitY) * (8))));
	LINE_NUMBER(681);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	sp[0].o = (jobject)((mindustry_core_GameState *) NULL_CHECK(sp[0].o))->F_rules;
	frame[2].f = (jfloat((((jint)((mindustry_game_Rules *) NULL_CHECK(sp[0].o))->F_limitX) * (8))));
	LINE_NUMBER(682);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	sp[0].o = (jobject)((mindustry_core_GameState *) NULL_CHECK(sp[0].o))->F_rules;
	frame[3].f = ((jfloat((((jint)((mindustry_game_Rules *) NULL_CHECK(sp[0].o))->F_limitHeight) * (8)))) + (frame[1].f));
	LINE_NUMBER(683);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	sp[0].o = (jobject)((mindustry_core_GameState *) NULL_CHECK(sp[0].o))->F_rules;
	frame[4].f = ((jfloat((((jint)((mindustry_game_Rules *) NULL_CHECK(sp[0].o))->F_limitWidth) * (8)))) + (frame[2].f));
	}
label_11:;
	{
	LINE_NUMBER(686);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_net;
	jint temp0 = (jint)((func_mindustry_net_Net_client_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_net_Net_client_R_boolean])(ctx, sp[0].o);
	if (temp0 == 0) goto label_16;
	}
	{
	jint temp0 = (jint)((func_mindustry_entities_comp_UnitComp_isLocal_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_entities_comp_UnitComp_isLocal_R_boolean])(ctx, (frame[0].o));
	if (temp0 == 0) goto label_17;
	}
label_16:;
	{
	LINE_NUMBER(688);
	frame[5].f = (jfloat(0));
	frame[6].f = (jfloat(0));
	LINE_NUMBER(691);
	if ((floatCompare(((jfloat)((mindustry_entities_comp_UnitComp *) NULL_CHECK((frame[0].o)))->F_x), (frame[2].f), 1)) >= 0) goto label_20;
	}
	{
	frame[5].f = ((frame[5].f) + ((-(((jfloat)((mindustry_entities_comp_UnitComp *) NULL_CHECK((frame[0].o)))->F_x) - (frame[2].f))) / (jfloat(8.0f))));
	}
label_20:;
	{
	LINE_NUMBER(692);
	if ((floatCompare(((jfloat)((mindustry_entities_comp_UnitComp *) NULL_CHECK((frame[0].o)))->F_y), (frame[1].f), 1)) >= 0) goto label_21;
	}
	{
	frame[6].f = ((frame[6].f) + ((-(((jfloat)((mindustry_entities_comp_UnitComp *) NULL_CHECK((frame[0].o)))->F_y) - (frame[1].f))) / (jfloat(8.0f))));
	}
label_21:;
	{
	LINE_NUMBER(693);
	if ((floatCompare(((jfloat)((mindustry_entities_comp_UnitComp *) NULL_CHECK((frame[0].o)))->F_x), ((frame[4].f) - (jfloat(8.0f))), -1)) <= 0) goto label_22;
	}
	{
	frame[5].f = ((frame[5].f) - ((((jfloat)((mindustry_entities_comp_UnitComp *) NULL_CHECK((frame[0].o)))->F_x) - ((frame[4].f) - (jfloat(8.0f)))) / (jfloat(8.0f))));
	}
label_22:;
	{
	LINE_NUMBER(694);
	if ((floatCompare(((jfloat)((mindustry_entities_comp_UnitComp *) NULL_CHECK((frame[0].o)))->F_y), ((frame[3].f) - (jfloat(8.0f))), -1)) <= 0) goto label_23;
	}
	{
	frame[6].f = ((frame[6].f) - ((((jfloat)((mindustry_entities_comp_UnitComp *) NULL_CHECK((frame[0].o)))->F_y) - ((frame[3].f) - (jfloat(8.0f)))) / (jfloat(8.0f))));
	}
label_23:;
	{
	LINE_NUMBER(697);
	jfloat temp0 = jfloat(10.0f);
	jfloat temp1 = (jfloat)SM_java_lang_Math_max_float_float_R_float(ctx, (clinit_arc_util_Time(ctx), (jfloat)SF_arc_util_Time_delta), (jfloat(1)));
	frame[7].f = (temp0 / temp1);
	LINE_NUMBER(699);
	sp[0].o = frame[0].o;
	jfloat temp2 = (jfloat)SM_arc_math_Mathf_clamp_float_float_float_R_float(ctx, ((frame[5].f) * (clinit_arc_util_Time(ctx), (jfloat)SF_arc_util_Time_delta)), (-(frame[7].f)), (frame[7].f));
	jfloat temp3 = (jfloat)SM_arc_math_Mathf_clamp_float_float_float_R_float(ctx, ((frame[6].f) * (clinit_arc_util_Time(ctx), (jfloat)SF_arc_util_Time_delta)), (-(frame[7].f)), (frame[7].f));
	((func_mindustry_entities_comp_UnitComp_velAddNet_float_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_entities_comp_UnitComp_velAddNet_float_float])(ctx, sp[0].o, temp2, temp3);
	LINE_NUMBER(700);
	frame[8].f = (jfloat(8.0f));
	LINE_NUMBER(701);
	sp[0].o = frame[0].o;
	jfloat temp4 = (jfloat)SM_arc_math_Mathf_clamp_float_float_float_R_float(ctx, ((jfloat)((mindustry_entities_comp_UnitComp *) NULL_CHECK((frame[0].o)))->F_x), ((frame[2].f) - (frame[8].f)), (((frame[4].f) - (jfloat(8.0f))) + (frame[8].f)));
	((mindustry_entities_comp_UnitComp *) NULL_CHECK(sp[0].o))->F_x = temp4;
	LINE_NUMBER(702);
	sp[0].o = frame[0].o;
	jfloat temp5 = (jfloat)SM_arc_math_Mathf_clamp_float_float_float_R_float(ctx, ((jfloat)((mindustry_entities_comp_UnitComp *) NULL_CHECK((frame[0].o)))->F_y), ((frame[1].f) - (frame[8].f)), (((frame[3].f) - (jfloat(8.0f))) + (frame[8].f)));
	((mindustry_entities_comp_UnitComp *) NULL_CHECK(sp[0].o))->F_y = temp5;
	}
label_17:;
	{
	LINE_NUMBER(706);
	jint temp0 = (jint)((func_mindustry_entities_comp_UnitComp_isGrounded_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_entities_comp_UnitComp_isGrounded_R_boolean])(ctx, (frame[0].o));
	if (temp0 == 0) goto label_28;
	}
	{
	LINE_NUMBER(707);
	sp[0].o = frame[0].o;
	jfloat temp0 = (jfloat)SM_arc_math_Mathf_clamp_float_float_float_R_float(ctx, ((jfloat)((mindustry_entities_comp_UnitComp *) NULL_CHECK((frame[0].o)))->F_x), (frame[2].f), ((frame[4].f) - (jfloat(8.0f))));
	((mindustry_entities_comp_UnitComp *) NULL_CHECK(sp[0].o))->F_x = temp0;
	LINE_NUMBER(708);
	sp[0].o = frame[0].o;
	jfloat temp1 = (jfloat)SM_arc_math_Mathf_clamp_float_float_float_R_float(ctx, ((jfloat)((mindustry_entities_comp_UnitComp *) NULL_CHECK((frame[0].o)))->F_y), (frame[1].f), ((frame[3].f) - (jfloat(8.0f))));
	((mindustry_entities_comp_UnitComp *) NULL_CHECK(sp[0].o))->F_y = temp1;
	}
label_28:;
	{
	LINE_NUMBER(712);
	if ((floatCompare(((jfloat)((mindustry_entities_comp_UnitComp *) NULL_CHECK((frame[0].o)))->F_x), ((jfloat(-250.0f)) + (frame[2].f)), 1)) < 0) goto label_31;
	}
	{
	if ((floatCompare(((jfloat)((mindustry_entities_comp_UnitComp *) NULL_CHECK((frame[0].o)))->F_y), ((jfloat(-250.0f)) + (frame[1].f)), 1)) < 0) goto label_31;
	}
	{
	if ((floatCompare(((jfloat)((mindustry_entities_comp_UnitComp *) NULL_CHECK((frame[0].o)))->F_x), ((frame[4].f) + (jfloat(250.0f))), -1)) >= 0) goto label_31;
	}
	{
	if ((floatCompare(((jfloat)((mindustry_entities_comp_UnitComp *) NULL_CHECK((frame[0].o)))->F_y), ((frame[3].f) + (jfloat(250.0f))), -1)) < 0) goto label_5;
	}
label_31:;
	{
	LINE_NUMBER(713);
	((func_mindustry_entities_comp_UnitComp_kill) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_entities_comp_UnitComp_kill])(ctx, (frame[0].o));
	}
label_5:;
	{
	LINE_NUMBER(717);
	jint temp0 = (jint)SM_java_lang_Float_isNaN_float_R_boolean(ctx, ((jfloat)((mindustry_entities_comp_UnitComp *) NULL_CHECK((frame[0].o)))->F_health));
	if (temp0 == 0) goto label_32;
	}
	{
	LINE_NUMBER(718);
	((mindustry_entities_comp_UnitComp *) NULL_CHECK((frame[0].o)))->F_health = (jfloat(0));
	LINE_NUMBER(719);
	((func_mindustry_entities_comp_UnitComp_kill) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_entities_comp_UnitComp_kill])(ctx, (frame[0].o));
	}
label_32:;
	{
	LINE_NUMBER(724);
	sp[0].o = (jobject)((func_mindustry_entities_comp_UnitComp_floorOn_R_mindustry_world_blocks_environment_Floor) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_entities_comp_UnitComp_floorOn_R_mindustry_world_blocks_environment_Floor])(ctx, (frame[0].o));
	frame[1].o = sp[0].o;
	LINE_NUMBER(725);
	sp[0].o = (jobject)((func_mindustry_entities_comp_UnitComp_tileOn_R_mindustry_world_Tile) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_entities_comp_UnitComp_tileOn_R_mindustry_world_Tile])(ctx, (frame[0].o));
	frame[2].o = sp[0].o;
	LINE_NUMBER(727);
	jint temp0 = (jint)((func_mindustry_entities_comp_UnitComp_isFlying_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_entities_comp_UnitComp_isFlying_R_boolean])(ctx, (frame[0].o));
	if (temp0 == ((jint)((mindustry_entities_comp_UnitComp *) NULL_CHECK((frame[0].o)))->F_wasFlying)) goto label_37;
	}
	{
	LINE_NUMBER(728);
	if (((jint)((mindustry_entities_comp_UnitComp *) NULL_CHECK((frame[0].o)))->F_wasFlying) == 0) goto label_39;
	}
	{
	LINE_NUMBER(729);
	if ((frame[2].o) == nullptr) goto label_39;
	}
	{
	LINE_NUMBER(730);
	clinit_mindustry_content_Fx(ctx);
	sp[0].o = (jobject)SF_mindustry_content_Fx_unitLand;
	jfloat temp0 = (jfloat)((mindustry_entities_comp_UnitComp *) NULL_CHECK((frame[0].o)))->F_x;
	jfloat temp1 = (jfloat)((mindustry_entities_comp_UnitComp *) NULL_CHECK((frame[0].o)))->F_y;
	sp[1].f = temp0;
	sp[2].f = temp1;
	sp += 3;
	if (((jint)((mindustry_world_blocks_environment_Floor *) NULL_CHECK((frame[1].o)))->F_isLiquid) == 0) goto label_42;
	}
	INST_FCONST(1);
	goto label_43;
label_42:;
	(sp++)->f = jfloat(0.5f);
label_43:;
	{
	sp -= 4;
	sp[4].o = (jobject)((func_mindustry_world_Tile_getFloorColor_R_arc_graphics_Color) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_mindustry_world_Tile_getFloorColor_R_arc_graphics_Color])(ctx, (frame[2].o));
	((func_mindustry_entities_Effect_at_float_float_float_arc_graphics_Color) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_entities_Effect_at_float_float_float_arc_graphics_Color])(ctx, sp[0].o, sp[1].f, sp[2].f, sp[3].f, sp[4].o);
	}
label_39:;
	{
	LINE_NUMBER(734);
	sp[0].o = frame[0].o;
	jint temp0 = (jint)((func_mindustry_entities_comp_UnitComp_isFlying_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_entities_comp_UnitComp_isFlying_R_boolean])(ctx, (frame[0].o));
	((mindustry_entities_comp_UnitComp *) NULL_CHECK(sp[0].o))->F_wasFlying = temp0;
	}
label_37:;
	{
	LINE_NUMBER(737);
	sp[0].o = (jobject)((mindustry_entities_comp_UnitComp *) NULL_CHECK((frame[0].o)))->F_type;
	if (((jint)((mindustry_type_UnitType *) NULL_CHECK(sp[0].o))->F_hovering) != 0) goto label_44;
	}
	{
	jint temp0 = (jint)((func_mindustry_entities_comp_UnitComp_isGrounded_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_entities_comp_UnitComp_isGrounded_R_boolean])(ctx, (frame[0].o));
	if (temp0 == 0) goto label_44;
	}
	{
	sp[0].o = (jobject)((mindustry_entities_comp_UnitComp *) NULL_CHECK((frame[0].o)))->F_type;
	if (((jint)((mindustry_type_UnitType *) NULL_CHECK(sp[0].o))->F_emitWalkEffect) == 0) goto label_44;
	}
	{
	LINE_NUMBER(738);
	sp[0].o = frame[0].o;
	jfloat temp0 = (jfloat)((mindustry_entities_comp_UnitComp *) NULL_CHECK(sp[0].o))->F_splashTimer;
	jfloat temp1 = (jfloat)((func_mindustry_entities_comp_UnitComp_deltaX_R_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_entities_comp_UnitComp_deltaX_R_float])(ctx, (frame[0].o));
	jfloat temp2 = (jfloat)((func_mindustry_entities_comp_UnitComp_deltaY_R_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_entities_comp_UnitComp_deltaY_R_float])(ctx, (frame[0].o));
	jfloat temp3 = (jfloat)SM_arc_math_Mathf_dst_float_float_R_float(ctx, temp1, temp2);
	jfloat temp4 = temp0 + temp3;
	((mindustry_entities_comp_UnitComp *) NULL_CHECK(sp[0].o))->F_splashTimer = temp4;
	jfloat temp7 = jfloat(7.0f);
	jfloat temp8 = (jfloat)((func_mindustry_entities_comp_UnitComp_hitSize_R_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_entities_comp_UnitComp_hitSize_R_float])(ctx, (frame[0].o));
	if ((floatCompare(temp4, (temp7 + (temp8 / (jfloat(8.0f)))), -1)) < 0) goto label_44;
	}
	{
	LINE_NUMBER(739);
	sp[0].o = (jobject)((mindustry_world_blocks_environment_Floor *) NULL_CHECK((frame[1].o)))->F_walkEffect;
	jfloat temp0 = (jfloat)((mindustry_entities_comp_UnitComp *) NULL_CHECK((frame[0].o)))->F_x;
	jfloat temp1 = (jfloat)((mindustry_entities_comp_UnitComp *) NULL_CHECK((frame[0].o)))->F_y;
	jfloat temp2 = (jfloat)((func_mindustry_entities_comp_UnitComp_hitSize_R_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_entities_comp_UnitComp_hitSize_R_float])(ctx, (frame[0].o));
	jfloat temp3 = temp2 / (jfloat(8.0f));
	sp[1].f = temp0;
	sp[2].f = temp1;
	sp[3].f = temp3;
	sp += 4;
	if ((frame[2].o) == nullptr) goto label_47;
	}
	{
	sp[0].o = (jobject)((func_mindustry_world_Tile_getFloorColor_R_arc_graphics_Color) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_mindustry_world_Tile_getFloorColor_R_arc_graphics_Color])(ctx, (frame[2].o));
	sp += 1;
	goto label_48;
	}
label_47:;
	INST_ALOAD(1);
	sp[-1].o = (jobject) ((mindustry_world_Block *) NULL_CHECK(sp[-1].o))->F_mapColor;
label_48:;
	{
	sp -= 5;
	((func_mindustry_entities_Effect_at_float_float_float_arc_graphics_Color) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_entities_Effect_at_float_float_float_arc_graphics_Color])(ctx, sp[0].o, sp[1].f, sp[2].f, sp[3].f, sp[4].o);
	LINE_NUMBER(740);
	((mindustry_entities_comp_UnitComp *) NULL_CHECK((frame[0].o)))->F_splashTimer = (jfloat(0));
	LINE_NUMBER(742);
	sp[0].o = (jobject)((mindustry_entities_comp_UnitComp *) NULL_CHECK((frame[0].o)))->F_type;
	if (((jint)((mindustry_type_UnitType *) NULL_CHECK(sp[0].o))->F_emitWalkSound) == 0) goto label_44;
	}
	{
	LINE_NUMBER(743);
	sp[0].o = (jobject)((mindustry_world_blocks_environment_Floor *) NULL_CHECK((frame[1].o)))->F_walkSound;
	jfloat temp0 = (jfloat)((mindustry_entities_comp_UnitComp *) NULL_CHECK((frame[0].o)))->F_x;
	jfloat temp1 = (jfloat)((mindustry_entities_comp_UnitComp *) NULL_CHECK((frame[0].o)))->F_y;
	jfloat temp2 = (jfloat)SM_arc_math_Mathf_random_float_float_R_float(ctx, ((jfloat)((mindustry_world_blocks_environment_Floor *) NULL_CHECK((frame[1].o)))->F_walkSoundPitchMin), ((jfloat)((mindustry_world_blocks_environment_Floor *) NULL_CHECK((frame[1].o)))->F_walkSoundPitchMax));
	jint temp3 = (jint)((func_arc_audio_Sound_at_float_float_float_float_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_audio_Sound_at_float_float_float_float_R_int])(ctx, sp[0].o, temp0, temp1, temp2, ((jfloat)((mindustry_world_blocks_environment_Floor *) NULL_CHECK((frame[1].o)))->F_walkSoundVolume));
	}
label_44:;
	{
	LINE_NUMBER(748);
	((func_mindustry_entities_comp_UnitComp_updateDrowning) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_entities_comp_UnitComp_updateDrowning])(ctx, (frame[0].o));
	LINE_NUMBER(750);
	if (((jint)((mindustry_entities_comp_UnitComp *) NULL_CHECK((frame[0].o)))->F_wasHealed) == 0) goto label_53;
	}
	{
	if ((floatCompare(((jfloat)((mindustry_entities_comp_UnitComp *) NULL_CHECK((frame[0].o)))->F_healTime), (jfloat(-1.0f)), 1)) > 0) goto label_53;
	}
	{
	LINE_NUMBER(751);
	((mindustry_entities_comp_UnitComp *) NULL_CHECK((frame[0].o)))->F_healTime = (jfloat(1));
	}
label_53:;
	{
	LINE_NUMBER(753);
	sp[0].o = frame[0].o;
	((mindustry_entities_comp_UnitComp *) NULL_CHECK(sp[0].o))->F_healTime = (((jfloat)((mindustry_entities_comp_UnitComp *) NULL_CHECK(sp[0].o))->F_healTime) - ((clinit_arc_util_Time(ctx), (jfloat)SF_arc_util_Time_delta) / (jfloat(20.0f))));
	LINE_NUMBER(754);
	((mindustry_entities_comp_UnitComp *) NULL_CHECK((frame[0].o)))->F_wasHealed = (jint(0));
	LINE_NUMBER(757);
	sp[0].o = (jobject)((mindustry_entities_comp_UnitComp *) NULL_CHECK((frame[0].o)))->F_team;
	jint temp0 = (jint)((func_mindustry_game_Team_isOnlyAI_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_game_Team_isOnlyAI_R_boolean])(ctx, sp[0].o);
	if (temp0 == 0) goto label_57;
	}
	{
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	jint temp0 = (jint)((func_mindustry_core_GameState_isCampaign_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_GameState_isCampaign_R_boolean])(ctx, sp[0].o);
	if (temp0 == 0) goto label_57;
	}
	{
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	sp[0].o = (jobject)((func_mindustry_core_GameState_getSector_R_mindustry_type_Sector) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_GameState_getSector_R_mindustry_type_Sector])(ctx, sp[0].o);
	jint temp0 = (jint)((func_mindustry_type_Sector_isCaptured_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_type_Sector_isCaptured_R_boolean])(ctx, sp[0].o);
	if (temp0 == 0) goto label_57;
	}
	{
	LINE_NUMBER(758);
	((func_mindustry_entities_comp_UnitComp_kill) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_entities_comp_UnitComp_kill])(ctx, (frame[0].o));
	}
label_57:;
	{
	LINE_NUMBER(761);
	if ((clinit_mindustry_Vars(ctx), (jint)SF_mindustry_Vars_headless) != 0) goto label_59;
	}
	{
	LINE_NUMBER(762);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_control;
	sp[0].o = (jobject)((mindustry_core_Control *) NULL_CHECK(sp[0].o))->F_sound;
	sp[1].o = (jobject)((mindustry_entities_comp_UnitComp *) NULL_CHECK((frame[0].o)))->F_type;
	sp[1].o = (jobject)((mindustry_type_UnitType *) NULL_CHECK(sp[1].o))->F_loopSound;
	sp[2].o = frame[0].o;
	sp[3].o = (jobject)((mindustry_entities_comp_UnitComp *) NULL_CHECK((frame[0].o)))->F_type;
	((func_mindustry_audio_SoundControl_loop_arc_audio_Sound_arc_math_geom_Position_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_audio_SoundControl_loop_arc_audio_Sound_arc_math_geom_Position_float])(ctx, sp[0].o, sp[1].o, sp[2].o, ((jfloat)((mindustry_type_UnitType *) NULL_CHECK(sp[3].o))->F_loopSoundVolume));
	LINE_NUMBER(763);
	sp[0].o = (jobject)((mindustry_entities_comp_UnitComp *) NULL_CHECK((frame[0].o)))->F_type;
	sp[0].o = (jobject)((mindustry_type_UnitType *) NULL_CHECK(sp[0].o))->F_moveSound;
	clinit_mindustry_gen_Sounds(ctx);
	sp[1].o = (jobject)SF_mindustry_gen_Sounds_none;
	if (sp[0].o == sp[1].o) goto label_59;
	}
	{
	LINE_NUMBER(764);
	sp[0].o = (jobject)((mindustry_entities_comp_UnitComp *) NULL_CHECK((frame[0].o)))->F_vel;
	jfloat temp0 = (jfloat)((func_arc_math_geom_Vec2_len_R_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Vec2_len_R_float])(ctx, sp[0].o);
	sp[0].o = (jobject)((mindustry_entities_comp_UnitComp *) NULL_CHECK((frame[0].o)))->F_type;
	jfloat temp1 = (jfloat)SM_arc_math_Mathf_clamp_float_R_float(ctx, (temp0 / ((jfloat)((mindustry_type_UnitType *) NULL_CHECK(sp[0].o))->F_speed)));
	frame[3].f = temp1;
	LINE_NUMBER(765);
	sp[0].o = (jobject)((mindustry_entities_comp_UnitComp *) NULL_CHECK((frame[0].o)))->F_type;
	jfloat temp2 = (jfloat)((mindustry_type_UnitType *) NULL_CHECK(sp[0].o))->F_moveSoundPitchMin;
	sp[0].o = (jobject)((mindustry_entities_comp_UnitComp *) NULL_CHECK((frame[0].o)))->F_type;
	jfloat temp3 = (jfloat)SM_arc_math_Mathf_lerp_float_float_float_R_float(ctx, temp2, ((jfloat)((mindustry_type_UnitType *) NULL_CHECK(sp[0].o))->F_moveSoundPitchMax), (frame[3].f));
	frame[4].f = temp3;
	LINE_NUMBER(766);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_control;
	sp[0].o = (jobject)((mindustry_core_Control *) NULL_CHECK(sp[0].o))->F_sound;
	sp[1].o = (jobject)((mindustry_entities_comp_UnitComp *) NULL_CHECK((frame[0].o)))->F_type;
	sp[1].o = (jobject)((mindustry_type_UnitType *) NULL_CHECK(sp[1].o))->F_moveSound;
	sp[2].o = frame[0].o;
	sp[3].o = (jobject)((mindustry_entities_comp_UnitComp *) NULL_CHECK((frame[0].o)))->F_type;
	((func_mindustry_audio_SoundControl_loop_arc_audio_Sound_arc_math_geom_Position_float_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_audio_SoundControl_loop_arc_audio_Sound_arc_math_geom_Position_float_float])(ctx, sp[0].o, sp[1].o, sp[2].o, (((jfloat)((mindustry_type_UnitType *) NULL_CHECK(sp[3].o))->F_moveSoundVolume) * (frame[3].f)), (frame[4].f));
	}
label_59:;
	{
	LINE_NUMBER(771);
	sp[0].o = (jobject)((mindustry_entities_comp_UnitComp *) NULL_CHECK((frame[0].o)))->F_type;
	clinit_mindustry_Vars(ctx);
	sp[1].o = (jobject)SF_mindustry_Vars_state;
	sp[1].o = (jobject)((mindustry_core_GameState *) NULL_CHECK(sp[1].o))->F_rules;
	jint temp0 = (jint)((func_mindustry_type_UnitType_supportsEnv_int_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_type_UnitType_supportsEnv_int_R_boolean])(ctx, sp[0].o, ((jint)((mindustry_game_Rules *) NULL_CHECK(sp[1].o))->F_env));
	if (temp0 != 0) goto label_65;
	}
	{
	if (((jint)((mindustry_entities_comp_UnitComp *) NULL_CHECK((frame[0].o)))->F_dead) != 0) goto label_65;
	}
	{
	LINE_NUMBER(772);
	sp[0].o = (jobject)((func_mindustry_entities_comp_UnitComp_self_R_mindustry_gen_Entityc) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_entities_comp_UnitComp_self_R_mindustry_gen_Entityc])(ctx, (frame[0].o));
	SM_mindustry_gen_Call_unitEnvDeath_mindustry_gen_Unit(ctx, (checkCast(ctx, &class_mindustry_gen_Unit, sp[0].o)));
	LINE_NUMBER(773);
	sp[0].o = (jobject)((mindustry_entities_comp_UnitComp *) NULL_CHECK((frame[0].o)))->F_team;
	sp[0].o = (jobject)((func_mindustry_game_Team_data_R_mindustry_game_Teams$TeamData) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_game_Team_data_R_mindustry_game_Teams$TeamData])(ctx, sp[0].o);
	sp[1].o = (jobject)((mindustry_entities_comp_UnitComp *) NULL_CHECK((frame[0].o)))->F_type;
	((func_mindustry_game_Teams$TeamData_updateCount_mindustry_type_UnitType_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_game_Teams$TeamData_updateCount_mindustry_type_UnitType_int])(ctx, sp[0].o, sp[1].o, (jint(-1)));
	}
label_65:;
	{
	LINE_NUMBER(776);
	sp[0].o = (jobject)((mindustry_entities_comp_UnitComp *) NULL_CHECK((frame[0].o)))->F_abilities;
	frame[3].o = sp[0].o;
	frame[4].i = (((jarray) nullCheck(ctx, (frame[3].o)))->length);
	frame[5].i = (jint(0));
	}
label_68:;
	{
	if ((frame[5].i) >= (frame[4].i)) goto label_69;
	}
	{
	frame[6].o = ((jobject)ARRAY_ACCESS(jobject, (frame[3].o), (frame[5].i)));
	LINE_NUMBER(777);
	sp[0].o = frame[6].o;
	sp[1].o = (jobject)((func_mindustry_entities_comp_UnitComp_self_R_mindustry_gen_Entityc) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_entities_comp_UnitComp_self_R_mindustry_gen_Entityc])(ctx, (frame[0].o));
	((func_mindustry_entities_abilities_Ability_update_mindustry_gen_Unit) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_entities_abilities_Ability_update_mindustry_gen_Unit])(ctx, sp[0].o, (checkCast(ctx, &class_mindustry_gen_Unit, sp[1].o)));
	LINE_NUMBER(776);
	INST_IINC(5, 1);
	goto label_68;
	}
label_69:;
	{
	LINE_NUMBER(780);
	sp[0].o = (jobject)((mindustry_entities_comp_UnitComp *) NULL_CHECK((frame[0].o)))->F_trail;
	if (sp[0].o == nullptr) goto label_72;
	}
	{
	LINE_NUMBER(781);
	sp[0].o = (jobject)((mindustry_entities_comp_UnitComp *) NULL_CHECK((frame[0].o)))->F_trail;
	sp[1].o = (jobject)((mindustry_entities_comp_UnitComp *) NULL_CHECK((frame[0].o)))->F_type;
	((mindustry_graphics_Trail *) NULL_CHECK(sp[0].o))->F_length = ((jint)((mindustry_type_UnitType *) NULL_CHECK(sp[1].o))->F_trailLength);
	LINE_NUMBER(783);
	sp[0].o = (jobject)((mindustry_entities_comp_UnitComp *) NULL_CHECK((frame[0].o)))->F_type;
	if (((jint)((mindustry_type_UnitType *) NULL_CHECK(sp[0].o))->F_useEngineElevation) == 0) goto label_75;
	}
	{
	jfloat temp0 = (jfloat)((mindustry_entities_comp_UnitComp *) NULL_CHECK((frame[0].o)))->F_elevation;
	sp[0].f = temp0;
	sp += 1;
	goto label_76;
	}
label_75:;
	INST_FCONST(1);
label_76:;
	{
	sp -= 1;
	frame[3].f = sp[0].f;
	LINE_NUMBER(784);
	sp[0].o = (jobject)((mindustry_entities_comp_UnitComp *) NULL_CHECK((frame[0].o)))->F_type;
	jfloat temp0 = ((jfloat)((mindustry_type_UnitType *) NULL_CHECK(sp[0].o))->F_engineOffset) / (jfloat(2));
	sp[0].o = (jobject)((mindustry_entities_comp_UnitComp *) NULL_CHECK((frame[0].o)))->F_type;
	frame[4].f = (temp0 + ((((jfloat)((mindustry_type_UnitType *) NULL_CHECK(sp[0].o))->F_engineOffset) / (jfloat(2))) * (frame[3].f)));
	LINE_NUMBER(786);
	jfloat temp1 = (jfloat)((mindustry_entities_comp_UnitComp *) NULL_CHECK((frame[0].o)))->F_x;
	jfloat temp2 = (jfloat)SM_arc_math_Angles_trnsx_float_float_R_float(ctx, (((jfloat)((mindustry_entities_comp_UnitComp *) NULL_CHECK((frame[0].o)))->F_rotation) + (jfloat(180.0f))), (frame[4].f));
	frame[5].f = (temp1 + temp2);
	jfloat temp3 = (jfloat)((mindustry_entities_comp_UnitComp *) NULL_CHECK((frame[0].o)))->F_y;
	jfloat temp4 = (jfloat)SM_arc_math_Angles_trnsy_float_float_R_float(ctx, (((jfloat)((mindustry_entities_comp_UnitComp *) NULL_CHECK((frame[0].o)))->F_rotation) + (jfloat(180.0f))), (frame[4].f));
	frame[6].f = (temp3 + temp4);
	LINE_NUMBER(787);
	sp[0].o = (jobject)((mindustry_entities_comp_UnitComp *) NULL_CHECK((frame[0].o)))->F_trail;
	((func_mindustry_graphics_Trail_update_float_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_graphics_Trail_update_float_float])(ctx, sp[0].o, (frame[5].f), (frame[6].f));
	}
label_72:;
	{
	LINE_NUMBER(790);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((mindustry_entities_comp_UnitComp *) NULL_CHECK((frame[0].o)))->F_type;
	jfloat temp0 = (jfloat)((mindustry_type_UnitType *) NULL_CHECK(sp[1].o))->F_drag;
	jint temp1 = (jint)((func_mindustry_entities_comp_UnitComp_isGrounded_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_entities_comp_UnitComp_isGrounded_R_boolean])(ctx, (frame[0].o));
	sp[1].f = temp0;
	sp += 2;
	if (temp1 == 0) goto label_81;
	}
	{
	sp[0].o = (jobject)((func_mindustry_entities_comp_UnitComp_floorOn_R_mindustry_world_blocks_environment_Floor) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_entities_comp_UnitComp_floorOn_R_mindustry_world_blocks_environment_Floor])(ctx, (frame[0].o));
	jfloat temp0 = (jfloat)((mindustry_world_blocks_environment_Floor *) NULL_CHECK(sp[0].o))->F_dragMultiplier;
	sp[0].f = temp0;
	sp += 1;
	goto label_82;
	}
label_81:;
	INST_FCONST(1);
label_82:;
	{
	sp -= 3;
	jfloat temp0 = (sp[1].f * sp[2].f) * ((jfloat)((mindustry_entities_comp_UnitComp *) NULL_CHECK((frame[0].o)))->F_dragMultiplier);
	clinit_mindustry_Vars(ctx);
	sp[1].o = (jobject)SF_mindustry_Vars_state;
	sp[1].o = (jobject)((mindustry_core_GameState *) NULL_CHECK(sp[1].o))->F_rules;
	((mindustry_entities_comp_UnitComp *) NULL_CHECK(sp[0].o))->F_drag = (temp0 * ((jfloat)((mindustry_game_Rules *) NULL_CHECK(sp[1].o))->F_dragMultiplier));
	LINE_NUMBER(793);
	sp[0].o = (jobject)((mindustry_entities_comp_UnitComp *) NULL_CHECK((frame[0].o)))->F_team;
	clinit_mindustry_Vars(ctx);
	sp[1].o = (jobject)SF_mindustry_Vars_state;
	sp[1].o = (jobject)((mindustry_core_GameState *) NULL_CHECK(sp[1].o))->F_rules;
	sp[1].o = (jobject)((mindustry_game_Rules *) NULL_CHECK(sp[1].o))->F_waveTeam;
	if (sp[0].o == sp[1].o) goto label_84;
	}
	{
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	jint temp0 = (jint)((func_mindustry_core_GameState_hasSpawns_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_GameState_hasSpawns_R_boolean])(ctx, sp[0].o);
	if (temp0 == 0) goto label_84;
	}
	{
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_net;
	jint temp0 = (jint)((func_mindustry_net_Net_client_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_net_Net_client_R_boolean])(ctx, sp[0].o);
	if (temp0 == 0) goto label_85;
	}
	{
	jint temp0 = (jint)((func_mindustry_entities_comp_UnitComp_isLocal_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_entities_comp_UnitComp_isLocal_R_boolean])(ctx, (frame[0].o));
	if (temp0 == 0) goto label_84;
	}
label_85:;
	{
	jint temp0 = (jint)((func_mindustry_entities_comp_UnitComp_hittable_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_entities_comp_UnitComp_hittable_R_boolean])(ctx, (frame[0].o));
	if (temp0 == 0) goto label_84;
	}
	{
	LINE_NUMBER(794);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	sp[0].o = (jobject)((mindustry_core_GameState *) NULL_CHECK(sp[0].o))->F_rules;
	frame[3].f = ((((jfloat)((mindustry_game_Rules *) NULL_CHECK(sp[0].o))->F_dropZoneRadius) + (((jfloat)((mindustry_entities_comp_UnitComp *) NULL_CHECK((frame[0].o)))->F_hitSize) / (jfloat(2)))) + (jfloat(1)));
	LINE_NUMBER(795);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_spawner;
	sp[0].o = (jobject)((func_mindustry_ai_WaveSpawner_getSpawns_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_ai_WaveSpawner_getSpawns_R_arc_struct_Seq])(ctx, sp[0].o);
	sp[0].o = (jobject)((func_arc_struct_Seq_iterator_R_java_util_Iterator) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_iterator_R_java_util_Iterator])(ctx, sp[0].o);
	frame[4].o = sp[0].o;
	}
label_88:;
	{
	jint temp0 = (jint)((func_java_util_Iterator_hasNext_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_hasNext_R_boolean, (frame[4].o)))(ctx, (frame[4].o));
	if (temp0 == 0) goto label_84;
	}
	{
	sp[0].o = (jobject)((func_java_util_Iterator_next_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_next_R_java_lang_Object, (frame[4].o)))(ctx, (frame[4].o));
	frame[5].o = (checkCast(ctx, &class_mindustry_world_Tile, sp[0].o));
	LINE_NUMBER(796);
	sp[0].o = frame[0].o;
	jfloat temp0 = (jfloat)((func_mindustry_world_Tile_worldx_R_float) ((void **) nullCheck(ctx, (frame[5].o))->vtable)[VTABLE_mindustry_world_Tile_worldx_R_float])(ctx, (frame[5].o));
	jfloat temp1 = (jfloat)((func_mindustry_world_Tile_worldy_R_float) ((void **) nullCheck(ctx, (frame[5].o))->vtable)[VTABLE_mindustry_world_Tile_worldy_R_float])(ctx, (frame[5].o));
	jint temp2 = (jint)((func_mindustry_entities_comp_UnitComp_within_float_float_float_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_entities_comp_UnitComp_within_float_float_float_R_boolean])(ctx, sp[0].o, temp0, temp1, (frame[3].f));
	if (temp2 == 0) goto label_90;
	}
	{
	LINE_NUMBER(797);
	sp[0].o = frame[0].o;
	clinit_arc_util_Tmp(ctx);
	sp[1].o = (jobject)SF_arc_util_Tmp_v1;
	sp[1].o = (jobject)((func_arc_math_geom_Vec2_set_arc_math_geom_Position_R_arc_math_geom_Vec2) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_math_geom_Vec2_set_arc_math_geom_Position_R_arc_math_geom_Vec2])(ctx, sp[1].o, (frame[0].o));
	jfloat temp0 = (jfloat)((func_mindustry_world_Tile_worldx_R_float) ((void **) nullCheck(ctx, (frame[5].o))->vtable)[VTABLE_mindustry_world_Tile_worldx_R_float])(ctx, (frame[5].o));
	jfloat temp1 = (jfloat)((func_mindustry_world_Tile_worldy_R_float) ((void **) nullCheck(ctx, (frame[5].o))->vtable)[VTABLE_mindustry_world_Tile_worldy_R_float])(ctx, (frame[5].o));
	sp[1].o = (jobject)((func_arc_math_geom_Vec2_sub_float_float_R_arc_math_geom_Vec2) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_math_geom_Vec2_sub_float_float_R_arc_math_geom_Vec2])(ctx, sp[1].o, temp0, temp1);
	jfloat temp2 = jfloat(1.1f);
	jfloat temp3 = (jfloat)((func_mindustry_entities_comp_UnitComp_dst_arc_math_geom_Position_R_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_entities_comp_UnitComp_dst_arc_math_geom_Position_R_float])(ctx, (frame[0].o), (frame[5].o));
	sp[1].o = (jobject)((func_arc_math_geom_Vec2_setLength_float_R_arc_math_geom_Vec2) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_math_geom_Vec2_setLength_float_R_arc_math_geom_Vec2])(ctx, sp[1].o, (temp2 - (temp3 / (frame[3].f))));
	sp[1].o = (jobject)((func_arc_math_geom_Vec2_scl_float_R_arc_math_geom_Vec2) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_math_geom_Vec2_scl_float_R_arc_math_geom_Vec2])(ctx, sp[1].o, ((jfloat(0.45f)) * (clinit_arc_util_Time(ctx), (jfloat)SF_arc_util_Time_delta)));
	((func_mindustry_entities_comp_UnitComp_velAddNet_arc_math_geom_Vec2) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_entities_comp_UnitComp_velAddNet_arc_math_geom_Vec2])(ctx, sp[0].o, sp[1].o);
	}
label_90:;
	LINE_NUMBER(799);
	goto label_88;
label_84:;
	{
	LINE_NUMBER(803);
	if (((jint)((mindustry_entities_comp_UnitComp *) NULL_CHECK((frame[0].o)))->F_dead) != 0) goto label_92;
	}
	{
	if ((floatCompare(((jfloat)((mindustry_entities_comp_UnitComp *) NULL_CHECK((frame[0].o)))->F_health), (jfloat(0)), 1)) > 0) goto label_93;
	}
label_92:;
	{
	LINE_NUMBER(805);
	((mindustry_entities_comp_UnitComp *) NULL_CHECK((frame[0].o)))->F_drag = (jfloat(1,000000e-02f));
	LINE_NUMBER(808);
	jint temp0 = (jint)SM_arc_math_Mathf_chanceDelta_double_R_boolean(ctx, (jdouble(0.1)));
	if (temp0 == 0) goto label_95;
	}
	{
	LINE_NUMBER(809);
	clinit_arc_util_Tmp(ctx);
	sp[0].o = (jobject)SF_arc_util_Tmp_v1;
	jfloat temp0 = (jfloat)SM_arc_math_Mathf_range_float_R_float(ctx, ((jfloat)((mindustry_entities_comp_UnitComp *) NULL_CHECK((frame[0].o)))->F_hitSize));
	sp[0].o = (jobject)((func_arc_math_geom_Vec2_rnd_float_R_arc_math_geom_Vec2) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Vec2_rnd_float_R_arc_math_geom_Vec2])(ctx, sp[0].o, temp0);
	LINE_NUMBER(810);
	sp[0].o = (jobject)((mindustry_entities_comp_UnitComp *) NULL_CHECK((frame[0].o)))->F_type;
	sp[0].o = (jobject)((mindustry_type_UnitType *) NULL_CHECK(sp[0].o))->F_fallEffect;
	jfloat temp1 = (jfloat)((mindustry_entities_comp_UnitComp *) NULL_CHECK((frame[0].o)))->F_x;
	clinit_arc_util_Tmp(ctx);
	sp[1].o = (jobject)SF_arc_util_Tmp_v1;
	jfloat temp2 = temp1 + ((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK(sp[1].o))->F_x);
	jfloat temp3 = (jfloat)((mindustry_entities_comp_UnitComp *) NULL_CHECK((frame[0].o)))->F_y;
	clinit_arc_util_Tmp(ctx);
	sp[1].o = (jobject)SF_arc_util_Tmp_v1;
	((func_mindustry_entities_Effect_at_float_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_entities_Effect_at_float_float])(ctx, sp[0].o, temp2, (temp3 + ((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK(sp[1].o))->F_y)));
	}
label_95:;
	{
	LINE_NUMBER(814);
	jint temp0 = (jint)SM_arc_math_Mathf_chanceDelta_double_R_boolean(ctx, (jdouble(0.2)));
	if (temp0 == 0) goto label_98;
	}
	{
	LINE_NUMBER(815);
	sp[0].o = (jobject)((mindustry_entities_comp_UnitComp *) NULL_CHECK((frame[0].o)))->F_type;
	jfloat temp0 = ((jfloat)((mindustry_type_UnitType *) NULL_CHECK(sp[0].o))->F_engineOffset) / (jfloat(2));
	sp[0].o = (jobject)((mindustry_entities_comp_UnitComp *) NULL_CHECK((frame[0].o)))->F_type;
	frame[3].f = (temp0 + ((((jfloat)((mindustry_type_UnitType *) NULL_CHECK(sp[0].o))->F_engineOffset) / (jfloat(2))) * ((jfloat)((mindustry_entities_comp_UnitComp *) NULL_CHECK((frame[0].o)))->F_elevation)));
	LINE_NUMBER(816);
	sp[0].o = (jobject)((mindustry_entities_comp_UnitComp *) NULL_CHECK((frame[0].o)))->F_type;
	jfloat temp1 = (jfloat)SM_arc_math_Mathf_range_float_R_float(ctx, ((jfloat)((mindustry_type_UnitType *) NULL_CHECK(sp[0].o))->F_engineSize));
	frame[4].f = temp1;
	LINE_NUMBER(817);
	sp[0].o = (jobject)((mindustry_entities_comp_UnitComp *) NULL_CHECK((frame[0].o)))->F_type;
	sp[0].o = (jobject)((mindustry_type_UnitType *) NULL_CHECK(sp[0].o))->F_fallEngineEffect;
	jfloat temp2 = (jfloat)((mindustry_entities_comp_UnitComp *) NULL_CHECK((frame[0].o)))->F_x;
	jfloat temp3 = ((jfloat)((mindustry_entities_comp_UnitComp *) NULL_CHECK((frame[0].o)))->F_rotation) + (jfloat(180.0f));
	jfloat temp4 = frame[3].f;
	LINE_NUMBER(818);
	jfloat temp5 = (jfloat)SM_arc_math_Angles_trnsx_float_float_R_float(ctx, temp3, temp4);
	jfloat temp6 = temp2 + temp5;
	jfloat temp7 = (jfloat)SM_arc_math_Mathf_range_float_R_float(ctx, (frame[4].f));
	jfloat temp8 = temp6 + temp7;
	jfloat temp9 = (jfloat)((mindustry_entities_comp_UnitComp *) NULL_CHECK((frame[0].o)))->F_y;
	jfloat temp10 = ((jfloat)((mindustry_entities_comp_UnitComp *) NULL_CHECK((frame[0].o)))->F_rotation) + (jfloat(180.0f));
	jfloat temp11 = frame[3].f;
	LINE_NUMBER(819);
	jfloat temp12 = (jfloat)SM_arc_math_Angles_trnsy_float_float_R_float(ctx, temp10, temp11);
	jfloat temp13 = temp9 + temp12;
	jfloat temp14 = (jfloat)SM_arc_math_Mathf_range_float_R_float(ctx, (frame[4].f));
	jfloat temp15 = temp13 + temp14;
	LINE_NUMBER(820);
	jfloat temp16 = (jfloat)SM_arc_math_Mathf_random_R_float(ctx);
	LINE_NUMBER(817);
	((func_mindustry_entities_Effect_at_float_float_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_entities_Effect_at_float_float_float])(ctx, sp[0].o, temp8, temp15, temp16);
	}
label_98:;
	{
	LINE_NUMBER(825);
	sp[0].o = frame[0].o;
	jfloat temp0 = (jfloat)((mindustry_entities_comp_UnitComp *) NULL_CHECK(sp[0].o))->F_elevation;
	sp[1].o = (jobject)((mindustry_entities_comp_UnitComp *) NULL_CHECK((frame[0].o)))->F_type;
	((mindustry_entities_comp_UnitComp *) NULL_CHECK(sp[0].o))->F_elevation = (temp0 - (((jfloat)((mindustry_type_UnitType *) NULL_CHECK(sp[1].o))->F_fallSpeed) * (clinit_arc_util_Time(ctx), (jfloat)SF_arc_util_Time_delta)));
	LINE_NUMBER(827);
	jint temp1 = (jint)((func_mindustry_entities_comp_UnitComp_isGrounded_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_entities_comp_UnitComp_isGrounded_R_boolean])(ctx, (frame[0].o));
	if (temp1 != 0) goto label_107;
	}
	{
	jfloat temp0 = (jfloat)((mindustry_entities_comp_UnitComp *) NULL_CHECK((frame[0].o)))->F_health;
	jfloat temp1 = -((jfloat)((mindustry_entities_comp_UnitComp *) NULL_CHECK((frame[0].o)))->F_maxHealth);
	sp[0].o = (jobject)((mindustry_entities_comp_UnitComp *) NULL_CHECK((frame[0].o)))->F_type;
	if ((floatCompare(temp0, (temp1 * ((jfloat)((mindustry_type_UnitType *) NULL_CHECK(sp[0].o))->F_wreckHealthMultiplier)), 1)) > 0) goto label_93;
	}
label_107:;
	{
	LINE_NUMBER(828);
	SM_mindustry_gen_Call_unitDestroy_int(ctx, ((jint)((mindustry_entities_comp_UnitComp *) NULL_CHECK((frame[0].o)))->F_id));
	}
label_93:;
	{
	LINE_NUMBER(832);
	if ((frame[2].o) == nullptr) goto label_108;
	}
	{
	sp[0].o = (jobject)((mindustry_world_Tile *) NULL_CHECK((frame[2].o)))->F_build;
	if (sp[0].o == nullptr) goto label_108;
	}
	{
	LINE_NUMBER(833);
	sp[0].o = (jobject)((mindustry_world_Tile *) NULL_CHECK((frame[2].o)))->F_build;
	sp[1].o = (jobject)((func_mindustry_entities_comp_UnitComp_self_R_mindustry_gen_Entityc) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_entities_comp_UnitComp_self_R_mindustry_gen_Entityc])(ctx, (frame[0].o));
	((func_mindustry_gen_Building_unitOnAny_mindustry_gen_Unit) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_gen_Building_unitOnAny_mindustry_gen_Unit])(ctx, sp[0].o, (checkCast(ctx, &class_mindustry_gen_Unit, sp[1].o)));
	}
label_108:;
	{
	LINE_NUMBER(836);
	if ((frame[2].o) == nullptr) goto label_110;
	}
	{
	jint temp0 = (jint)((func_mindustry_entities_comp_UnitComp_isGrounded_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_entities_comp_UnitComp_isGrounded_R_boolean])(ctx, (frame[0].o));
	if (temp0 == 0) goto label_110;
	}
	{
	sp[0].o = (jobject)((mindustry_entities_comp_UnitComp *) NULL_CHECK((frame[0].o)))->F_type;
	if (((jint)((mindustry_type_UnitType *) NULL_CHECK(sp[0].o))->F_hovering) != 0) goto label_110;
	}
	{
	LINE_NUMBER(838);
	sp[0].o = (jobject)((mindustry_world_Tile *) NULL_CHECK((frame[2].o)))->F_build;
	if (sp[0].o == nullptr) goto label_112;
	}
	{
	LINE_NUMBER(839);
	sp[0].o = (jobject)((mindustry_world_Tile *) NULL_CHECK((frame[2].o)))->F_build;
	sp[1].o = (jobject)((func_mindustry_entities_comp_UnitComp_self_R_mindustry_gen_Entityc) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_entities_comp_UnitComp_self_R_mindustry_gen_Entityc])(ctx, (frame[0].o));
	((func_mindustry_gen_Building_unitOn_mindustry_gen_Unit) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_gen_Building_unitOn_mindustry_gen_Unit])(ctx, sp[0].o, (checkCast(ctx, &class_mindustry_gen_Unit, sp[1].o)));
	}
label_112:;
	{
	LINE_NUMBER(843);
	if ((floatCompare(((jfloat)((mindustry_world_blocks_environment_Floor *) NULL_CHECK((frame[1].o)))->F_damageTaken), (jfloat(0)), -1)) <= 0) goto label_110;
	}
	{
	LINE_NUMBER(844);
	((func_mindustry_entities_comp_UnitComp_damageContinuous_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_entities_comp_UnitComp_damageContinuous_float])(ctx, (frame[0].o), ((jfloat)((mindustry_world_blocks_environment_Floor *) NULL_CHECK((frame[1].o)))->F_damageTaken));
	}
label_110:;
	{
	LINE_NUMBER(849);
	if ((frame[2].o) == nullptr) goto label_115;
	}
	{
	jint temp0 = (jint)((func_mindustry_entities_comp_UnitComp_canPassOn_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_entities_comp_UnitComp_canPassOn_R_boolean])(ctx, (frame[0].o));
	if (temp0 != 0) goto label_115;
	}
	{
	LINE_NUMBER(851);
	sp[0].o = (jobject)((mindustry_entities_comp_UnitComp *) NULL_CHECK((frame[0].o)))->F_type;
	if (((jint)((mindustry_type_UnitType *) NULL_CHECK(sp[0].o))->F_canBoost) == 0) goto label_117;
	}
	{
	LINE_NUMBER(852);
	((mindustry_entities_comp_UnitComp *) NULL_CHECK((frame[0].o)))->F_elevation = (jfloat(1));
	goto label_115;
	}
label_117:;
	{
	LINE_NUMBER(853);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_net;
	jint temp0 = (jint)((func_mindustry_net_Net_client_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_net_Net_client_R_boolean])(ctx, sp[0].o);
	if (temp0 != 0) goto label_115;
	}
	clinit_mindustry_Vars(ctx);
	(sp++)->i = SF_mindustry_Vars_headless;
	if ((--sp)->i != 0) goto label_119;
	{
	jint temp0 = (jint)((func_mindustry_entities_comp_UnitComp_isRemote_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_entities_comp_UnitComp_isRemote_R_boolean])(ctx, (frame[0].o));
	if (temp0 != 0) goto label_115;
	}
label_119:;
	{
	LINE_NUMBER(854);
	((func_mindustry_entities_comp_UnitComp_kill) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_entities_comp_UnitComp_kill])(ctx, (frame[0].o));
	}
label_115:;
	{
	LINE_NUMBER(859);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_net;
	jint temp0 = (jint)((func_mindustry_net_Net_client_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_net_Net_client_R_boolean])(ctx, sp[0].o);
	if (temp0 != 0) goto label_120;
	}
	{
	if (((jint)((mindustry_entities_comp_UnitComp *) NULL_CHECK((frame[0].o)))->F_dead) != 0) goto label_120;
	}
	{
	jint temp0 = (jint)((func_mindustry_entities_comp_UnitComp_shouldUpdateController_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_entities_comp_UnitComp_shouldUpdateController_R_boolean])(ctx, (frame[0].o));
	if (temp0 == 0) goto label_120;
	}
	{
	LINE_NUMBER(860);
	sp[0].o = (jobject)((mindustry_entities_comp_UnitComp *) NULL_CHECK((frame[0].o)))->F_controller;
	((func_mindustry_entities_units_UnitController_updateUnit) resolveInterfaceMethod(ctx, &class_mindustry_entities_units_UnitController, INDEX_mindustry_entities_units_UnitController_updateUnit, sp[0].o))(ctx, sp[0].o);
	}
label_120:;
	{
	LINE_NUMBER(864);
	sp[0].o = (jobject)((mindustry_entities_comp_UnitComp *) NULL_CHECK((frame[0].o)))->F_controller;
	jint temp0 = (jint)((func_mindustry_entities_units_UnitController_isValidController_R_boolean) resolveInterfaceMethod(ctx, &class_mindustry_entities_units_UnitController, INDEX_mindustry_entities_units_UnitController_isValidController_R_boolean, sp[0].o))(ctx, sp[0].o);
	if (temp0 != 0) goto label_122;
	}
	{
	LINE_NUMBER(865);
	((func_mindustry_entities_comp_UnitComp_resetController) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_entities_comp_UnitComp_resetController])(ctx, (frame[0].o));
	}
label_122:;
	{
	LINE_NUMBER(869);
	if (((jint)((mindustry_entities_comp_UnitComp *) NULL_CHECK((frame[0].o)))->F_spawnedByCore) == 0) goto label_124;
	}
	{
	jint temp0 = (jint)((func_mindustry_entities_comp_UnitComp_isPlayer_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_entities_comp_UnitComp_isPlayer_R_boolean])(ctx, (frame[0].o));
	if (temp0 != 0) goto label_124;
	}
	{
	if (((jint)((mindustry_entities_comp_UnitComp *) NULL_CHECK((frame[0].o)))->F_dead) != 0) goto label_124;
	}
	{
	LINE_NUMBER(870);
	sp[0].o = (jobject)((func_mindustry_entities_comp_UnitComp_self_R_mindustry_gen_Entityc) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_entities_comp_UnitComp_self_R_mindustry_gen_Entityc])(ctx, (frame[0].o));
	SM_mindustry_gen_Call_unitDespawn_mindustry_gen_Unit(ctx, (checkCast(ctx, &class_mindustry_gen_Unit, sp[0].o)));
	}
label_124:;
	LINE_NUMBER(872);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jbool M_mindustry_entities_comp_UnitComp_shouldUpdateController_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/comp/UnitComp:shouldUpdateController", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(875);
	popStackFrame(ctx);
	return (jint(1));
	}

	popStackFrame(ctx);
}

jobject M_mindustry_entities_comp_UnitComp_icon_R_arc_graphics_g2d_TextureRegion(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/comp/UnitComp:icon", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(880);
	sp[0].o = (jobject)((mindustry_entities_comp_UnitComp *) NULL_CHECK((frame[0].o)))->F_type;
	sp[0].o = (jobject)((mindustry_ctype_UnlockableContent *) NULL_CHECK(sp[0].o))->F_uiIcon;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void M_mindustry_entities_comp_UnitComp_destroy(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[20];
	auto stack = &frame[9];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/comp/UnitComp:destroy", 20 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(885);
	jint temp0 = (jint)((func_mindustry_entities_comp_UnitComp_isAdded_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_entities_comp_UnitComp_isAdded_R_boolean])(ctx, (frame[0].o));
	if (temp0 == 0) goto label_1;
	}
	{
	jint temp0 = (jint)((func_mindustry_entities_comp_UnitComp_killable_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_entities_comp_UnitComp_killable_R_boolean])(ctx, (frame[0].o));
	if (temp0 != 0) goto label_2;
	}
label_1:;
	popStackFrame(ctx);
	INST_RETURN();
label_2:;
	{
	LINE_NUMBER(887);
	jfloat temp0 = jfloat(2);
	sp[0].o = (jobject)((func_mindustry_entities_comp_UnitComp_item_R_mindustry_type_Item) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_entities_comp_UnitComp_item_R_mindustry_type_Item])(ctx, (frame[0].o));
	jfloat temp1 = (jfloat)((mindustry_type_Item *) NULL_CHECK(sp[0].o))->F_explosiveness;
	sp[0].o = (jobject)((func_mindustry_entities_comp_UnitComp_stack_R_mindustry_type_ItemStack) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_entities_comp_UnitComp_stack_R_mindustry_type_ItemStack])(ctx, (frame[0].o));
	frame[1].f = (temp0 + ((temp1 * (jfloat(((jint)((mindustry_type_ItemStack *) NULL_CHECK(sp[0].o))->F_amount)))) * (jfloat(1.53f))));
	LINE_NUMBER(888);
	sp[0].o = (jobject)((func_mindustry_entities_comp_UnitComp_item_R_mindustry_type_Item) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_entities_comp_UnitComp_item_R_mindustry_type_Item])(ctx, (frame[0].o));
	jfloat temp2 = (jfloat)((mindustry_type_Item *) NULL_CHECK(sp[0].o))->F_flammability;
	sp[0].o = (jobject)((func_mindustry_entities_comp_UnitComp_stack_R_mindustry_type_ItemStack) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_entities_comp_UnitComp_stack_R_mindustry_type_ItemStack])(ctx, (frame[0].o));
	frame[2].f = ((temp2 * (jfloat(((jint)((mindustry_type_ItemStack *) NULL_CHECK(sp[0].o))->F_amount)))) / (jfloat(1.9f)));
	LINE_NUMBER(889);
	sp[0].o = (jobject)((func_mindustry_entities_comp_UnitComp_item_R_mindustry_type_Item) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_entities_comp_UnitComp_item_R_mindustry_type_Item])(ctx, (frame[0].o));
	jfloat temp3 = (jfloat)((mindustry_type_Item *) NULL_CHECK(sp[0].o))->F_charge;
	sp[0].o = (jobject)((func_mindustry_entities_comp_UnitComp_stack_R_mindustry_type_ItemStack) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_entities_comp_UnitComp_stack_R_mindustry_type_ItemStack])(ctx, (frame[0].o));
	jfloat temp4 = (jfloat)SM_arc_math_Mathf_pow_float_float_R_float(ctx, (jfloat(((jint)((mindustry_type_ItemStack *) NULL_CHECK(sp[0].o))->F_amount))), (jfloat(1.11f)));
	frame[3].f = ((temp3 * temp4) * (jfloat(160.0f)));
	LINE_NUMBER(891);
	if (((jint)((mindustry_entities_comp_UnitComp *) NULL_CHECK((frame[0].o)))->F_spawnedByCore) != 0) goto label_6;
	}
	{
	LINE_NUMBER(892);
	jfloat temp0 = (jfloat)((mindustry_entities_comp_UnitComp *) NULL_CHECK((frame[0].o)))->F_x;
	jfloat temp1 = (jfloat)((mindustry_entities_comp_UnitComp *) NULL_CHECK((frame[0].o)))->F_y;
	jfloat temp2 = frame[2].f;
	jfloat temp3 = frame[1].f;
	jfloat temp4 = frame[3].f;
	jfloat temp5 = (jfloat)((func_mindustry_entities_comp_UnitComp_bounds_R_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_entities_comp_UnitComp_bounds_R_float])(ctx, (frame[0].o));
	sp[0].o = (jobject)((mindustry_entities_comp_UnitComp *) NULL_CHECK((frame[0].o)))->F_type;
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
	sp[1].o = (jobject)((mindustry_entities_comp_UnitComp *) NULL_CHECK((frame[0].o)))->F_team;
	jfloat temp0 = (jfloat)((func_mindustry_game_Rules_unitCrashDamage_mindustry_game_Team_R_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_game_Rules_unitCrashDamage_mindustry_game_Team_R_float])(ctx, sp[0].o, sp[1].o);
	if ((floatCompare(temp0, (jfloat(0)), -1)) <= 0) goto label_8;
	}
	INST_ICONST(1);
	goto label_9;
label_8:;
	INST_ICONST(0);
label_9:;
	{
	sp[0].o = (jobject)((func_mindustry_entities_comp_UnitComp_item_R_mindustry_type_Item) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_entities_comp_UnitComp_item_R_mindustry_type_Item])(ctx, (frame[0].o));
	if ((floatCompare(((jfloat)((mindustry_type_Item *) NULL_CHECK(sp[0].o))->F_flammability), (jfloat(1)), -1)) <= 0) goto label_10;
	}
	INST_ICONST(1);
	goto label_11;
label_10:;
	INST_ICONST(0);
label_11:;
	{
	sp -= 8;
	sp[8].o = (jobject)((mindustry_entities_comp_UnitComp *) NULL_CHECK((frame[0].o)))->F_team;
	sp[9].o = (jobject)((mindustry_entities_comp_UnitComp *) NULL_CHECK((frame[0].o)))->F_type;
	sp[9].o = (jobject)((mindustry_type_UnitType *) NULL_CHECK(sp[9].o))->F_deathExplosionEffect;
	SM_mindustry_entities_Damage_dynamicExplosion_float_float_float_float_float_float_boolean_boolean_mindustry_game_Team_mindustry_entities_Effect_float(ctx, sp[0].f, sp[1].f, sp[2].f, sp[3].f, sp[4].f, sp[5].f, sp[6].i, sp[7].i, sp[8].o, sp[9].o, (jfloat(0)));
	goto label_12;
	}
label_6:;
	{
	LINE_NUMBER(894);
	sp[0].o = (jobject)((mindustry_entities_comp_UnitComp *) NULL_CHECK((frame[0].o)))->F_type;
	sp[0].o = (jobject)((mindustry_type_UnitType *) NULL_CHECK(sp[0].o))->F_deathExplosionEffect;
	jfloat temp0 = (jfloat)((mindustry_entities_comp_UnitComp *) NULL_CHECK((frame[0].o)))->F_x;
	jfloat temp1 = (jfloat)((mindustry_entities_comp_UnitComp *) NULL_CHECK((frame[0].o)))->F_y;
	jfloat temp2 = (jfloat)((func_mindustry_entities_comp_UnitComp_bounds_R_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_entities_comp_UnitComp_bounds_R_float])(ctx, (frame[0].o));
	((func_mindustry_entities_Effect_at_float_float_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_entities_Effect_at_float_float_float])(ctx, sp[0].o, temp0, temp1, ((temp2 / (jfloat(2))) / (jfloat(8.0f))));
	}
label_12:;
	{
	LINE_NUMBER(897);
	sp[0].o = (jobject)((mindustry_entities_comp_UnitComp *) NULL_CHECK((frame[0].o)))->F_type;
	if ((floatCompare(((jfloat)((mindustry_type_UnitType *) NULL_CHECK(sp[0].o))->F_deathShake), (jfloat(0)), 1)) >= 0) goto label_13;
	}
	{
	jfloat temp0 = (jfloat(3.0f)) + (((jfloat)((mindustry_entities_comp_UnitComp *) NULL_CHECK((frame[0].o)))->F_hitSize) / (jfloat(3.0f)));
	sp[0].f = temp0;
	sp += 1;
	goto label_14;
	}
label_13:;
	{
	sp[0].o = (jobject)((mindustry_entities_comp_UnitComp *) NULL_CHECK((frame[0].o)))->F_type;
	jfloat temp0 = (jfloat)((mindustry_type_UnitType *) NULL_CHECK(sp[0].o))->F_deathShake;
	sp[0].f = temp0;
	sp += 1;
	}
label_14:;
	{
	sp -= 1;
	frame[4].f = sp[0].f;
	LINE_NUMBER(899);
	sp[0].o = (jobject)((mindustry_entities_comp_UnitComp *) NULL_CHECK((frame[0].o)))->F_type;
	if (((jint)((mindustry_type_UnitType *) NULL_CHECK(sp[0].o))->F_createScorch) == 0) goto label_16;
	}
	{
	LINE_NUMBER(900);
	SM_mindustry_entities_Effect_scorch_float_float_int(ctx, ((jfloat)((mindustry_entities_comp_UnitComp *) NULL_CHECK((frame[0].o)))->F_x), ((jfloat)((mindustry_entities_comp_UnitComp *) NULL_CHECK((frame[0].o)))->F_y), (jint((((jfloat)((mindustry_entities_comp_UnitComp *) NULL_CHECK((frame[0].o)))->F_hitSize) / (jfloat(5.0f))))));
	}
label_16:;
	{
	LINE_NUMBER(902);
	SM_mindustry_entities_Effect_shake_float_float_arc_math_geom_Position(ctx, (frame[4].f), (frame[4].f), (frame[0].o));
	LINE_NUMBER(903);
	sp[0].o = (jobject)((mindustry_entities_comp_UnitComp *) NULL_CHECK((frame[0].o)))->F_type;
	sp[0].o = (jobject)((mindustry_type_UnitType *) NULL_CHECK(sp[0].o))->F_deathSound;
	sp[1].o = frame[0].o;
	jfloat temp0 = jfloat(1);
	sp[2].o = (jobject)((mindustry_entities_comp_UnitComp *) NULL_CHECK((frame[0].o)))->F_type;
	jint temp1 = (jint)((func_arc_audio_Sound_at_arc_math_geom_Position_float_float_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_audio_Sound_at_arc_math_geom_Position_float_float_R_int])(ctx, sp[0].o, sp[1].o, temp0, ((jfloat)((mindustry_type_UnitType *) NULL_CHECK(sp[2].o))->F_deathSoundVolume));
	LINE_NUMBER(905);
	clinit_mindustry_game_EventType$UnitDestroyEvent(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_game_EventType$UnitDestroyEvent);
	sp[1].o = (jobject)((func_mindustry_entities_comp_UnitComp_self_R_mindustry_gen_Entityc) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_entities_comp_UnitComp_self_R_mindustry_gen_Entityc])(ctx, (frame[0].o));
	init_mindustry_game_EventType$UnitDestroyEvent_mindustry_gen_Unit(ctx, sp[0].o, (checkCast(ctx, &class_mindustry_gen_Unit, sp[1].o)));
	SM_arc_Events_fire_java_lang_Object(ctx, sp[0].o);
	LINE_NUMBER(907);
	if ((floatCompare((frame[1].f), (jfloat(7.0f)), -1)) <= 0) goto label_21;
	}
	{
	jint temp0 = (jint)((func_mindustry_entities_comp_UnitComp_isLocal_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_entities_comp_UnitComp_isLocal_R_boolean])(ctx, (frame[0].o));
	if (temp0 != 0) goto label_22;
	}
	{
	if (((jint)((mindustry_entities_comp_UnitComp *) NULL_CHECK((frame[0].o)))->F_wasPlayer) == 0) goto label_21;
	}
label_22:;
	{
	LINE_NUMBER(908);
	clinit_mindustry_game_EventType$Trigger(ctx);
	sp[0].o = (jobject)SF_mindustry_game_EventType$Trigger_suicideBomb;
	SM_arc_Events_fire_java_lang_Enum(ctx, sp[0].o);
	}
label_21:;
	{
	LINE_NUMBER(911);
	sp[0].o = (jobject)((mindustry_entities_comp_UnitComp *) NULL_CHECK((frame[0].o)))->F_mounts;
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
	LINE_NUMBER(912);
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
	LINE_NUMBER(913);
	sp[0].o = (jobject)((mindustry_entities_units_WeaponMount *) NULL_CHECK((frame[8].o)))->F_weapon;
	sp[0].o = (jobject)((mindustry_type_Weapon *) NULL_CHECK(sp[0].o))->F_shootOnDeathEffect;
	if (sp[0].o == nullptr) goto label_28;
	}
	{
	if (((jint)((mindustry_entities_comp_UnitComp *) NULL_CHECK((frame[0].o)))->F_hasTarget) != 0) goto label_28;
	}
	{
	LINE_NUMBER(914);
	((mindustry_entities_units_WeaponMount *) NULL_CHECK((frame[8].o)))->F_allowShootEffects = (jint(0));
	LINE_NUMBER(915);
	sp[0].o = (jobject)((mindustry_entities_units_WeaponMount *) NULL_CHECK((frame[8].o)))->F_weapon;
	sp[0].o = (jobject)((mindustry_type_Weapon *) NULL_CHECK(sp[0].o))->F_shootOnDeathEffect;
	((func_mindustry_entities_Effect_at_float_float_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_entities_Effect_at_float_float_float])(ctx, sp[0].o, ((jfloat)((mindustry_entities_comp_UnitComp *) NULL_CHECK((frame[0].o)))->F_x), ((jfloat)((mindustry_entities_comp_UnitComp *) NULL_CHECK((frame[0].o)))->F_y), ((jfloat)((mindustry_entities_comp_UnitComp *) NULL_CHECK((frame[0].o)))->F_rotation));
	}
label_28:;
	{
	LINE_NUMBER(917);
	((mindustry_entities_units_WeaponMount *) NULL_CHECK((frame[8].o)))->F_reload = (jfloat(0));
	LINE_NUMBER(918);
	((mindustry_entities_units_WeaponMount *) NULL_CHECK((frame[8].o)))->F_shoot = (jint(1));
	LINE_NUMBER(919);
	sp[0].o = (jobject)((mindustry_entities_units_WeaponMount *) NULL_CHECK((frame[8].o)))->F_weapon;
	sp[1].o = (jobject)((func_mindustry_entities_comp_UnitComp_self_R_mindustry_gen_Entityc) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_entities_comp_UnitComp_self_R_mindustry_gen_Entityc])(ctx, (frame[0].o));
	((func_mindustry_type_Weapon_update_mindustry_gen_Unit_mindustry_entities_units_WeaponMount) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_type_Weapon_update_mindustry_gen_Unit_mindustry_entities_units_WeaponMount])(ctx, sp[0].o, (checkCast(ctx, &class_mindustry_gen_Unit, sp[1].o)), (frame[8].o));
	}
label_26:;
	{
	LINE_NUMBER(911);
	INST_IINC(7, 1);
	goto label_23;
	}
label_24:;
	{
	LINE_NUMBER(924);
	sp[0].o = (jobject)((mindustry_entities_comp_UnitComp *) NULL_CHECK((frame[0].o)))->F_type;
	if (((jint)((mindustry_type_UnitType *) NULL_CHECK(sp[0].o))->F_flying) == 0) goto label_33;
	}
	{
	if (((jint)((mindustry_entities_comp_UnitComp *) NULL_CHECK((frame[0].o)))->F_spawnedByCore) != 0) goto label_33;
	}
	{
	sp[0].o = (jobject)((mindustry_entities_comp_UnitComp *) NULL_CHECK((frame[0].o)))->F_type;
	if (((jint)((mindustry_type_UnitType *) NULL_CHECK(sp[0].o))->F_createWreck) == 0) goto label_33;
	}
	{
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	sp[0].o = (jobject)((mindustry_core_GameState *) NULL_CHECK(sp[0].o))->F_rules;
	sp[1].o = (jobject)((mindustry_entities_comp_UnitComp *) NULL_CHECK((frame[0].o)))->F_team;
	jfloat temp0 = (jfloat)((func_mindustry_game_Rules_unitCrashDamage_mindustry_game_Team_R_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_game_Rules_unitCrashDamage_mindustry_game_Team_R_float])(ctx, sp[0].o, sp[1].o);
	if ((floatCompare(temp0, (jfloat(0)), -1)) <= 0) goto label_33;
	}
	{
	LINE_NUMBER(925);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_indexer;
	sp[1].o = (jobject)((mindustry_entities_comp_UnitComp *) NULL_CHECK((frame[0].o)))->F_team;
	clinit_mindustry_world_meta_BlockFlag(ctx);
	sp[2].o = (jobject)SF_mindustry_world_meta_BlockFlag_shield;
	sp[0].o = (jobject)((func_mindustry_ai_BlockIndexer_getEnemy_mindustry_game_Team_mindustry_world_meta_BlockFlag_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_ai_BlockIndexer_getEnemy_mindustry_game_Team_mindustry_world_meta_BlockFlag_R_arc_struct_Seq])(ctx, sp[0].o, sp[1].o, sp[2].o);
	frame[5].o = sp[0].o;
	LINE_NUMBER(926);
	jfloat temp0 = (jfloat)SM_arc_math_Mathf_pow_float_float_R_float(ctx, ((jfloat)((mindustry_entities_comp_UnitComp *) NULL_CHECK((frame[0].o)))->F_hitSize), (jfloat(0.75f)));
	sp[0].o = (jobject)((mindustry_entities_comp_UnitComp *) NULL_CHECK((frame[0].o)))->F_type;
	jfloat temp1 = (temp0 * ((jfloat)((mindustry_type_UnitType *) NULL_CHECK(sp[0].o))->F_crashDamageMultiplier)) * (jfloat(2.5f));
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	sp[0].o = (jobject)((mindustry_core_GameState *) NULL_CHECK(sp[0].o))->F_rules;
	sp[1].o = (jobject)((mindustry_entities_comp_UnitComp *) NULL_CHECK((frame[0].o)))->F_team;
	jfloat temp2 = (jfloat)((func_mindustry_game_Rules_unitCrashDamage_mindustry_game_Team_R_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_game_Rules_unitCrashDamage_mindustry_game_Team_R_float])(ctx, sp[0].o, sp[1].o);
	frame[6].f = (temp1 * temp2);
	LINE_NUMBER(927);
	jint temp3 = (jint)((func_arc_struct_Seq_isEmpty_R_boolean) ((void **) nullCheck(ctx, (frame[5].o))->vtable)[VTABLE_arc_struct_Seq_isEmpty_R_boolean])(ctx, (frame[5].o));
	if (temp3 != 0) goto label_37;
	}
	{
	sp[0].o = frame[5].o;
	{ /* InvokeDynamic */
		clinit_mindustry_entities_comp_UnitComp_invoke_arc_func_Boolf_3(ctx);
		auto proxy = (mindustry_entities_comp_UnitComp_invoke_arc_func_Boolf_3 *) gcAlloc(ctx, &class_mindustry_entities_comp_UnitComp_invoke_arc_func_Boolf_3);
		proxy->F_field1 = (frame[6].f);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[1].o = (jobject) proxy;
	}
	jint temp0 = (jint)((func_arc_struct_Seq_contains_arc_func_Boolf_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_contains_arc_func_Boolf_R_boolean])(ctx, sp[0].o, sp[1].o);
	if (temp0 != 0) goto label_33;
	}
label_37:;
	{
	LINE_NUMBER(928);
	sp[0].o = (jobject)((mindustry_entities_comp_UnitComp *) NULL_CHECK((frame[0].o)))->F_team;
	jfloat temp0 = (jfloat)((mindustry_entities_comp_UnitComp *) NULL_CHECK((frame[0].o)))->F_x;
	jfloat temp1 = (jfloat)((mindustry_entities_comp_UnitComp *) NULL_CHECK((frame[0].o)))->F_y;
	jfloat temp2 = (jfloat)SM_arc_math_Mathf_pow_float_float_R_float(ctx, ((jfloat)((mindustry_entities_comp_UnitComp *) NULL_CHECK((frame[0].o)))->F_hitSize), (jfloat(0.94f)));
	SM_mindustry_entities_Damage_damage_mindustry_game_Team_float_float_float_float_boolean_boolean_boolean(ctx, sp[0].o, temp0, temp1, (temp2 * (jfloat(1.25f))), (frame[6].f), (jint(1)), (jint(0)), (jint(1)));
	}
label_33:;
	{
	LINE_NUMBER(932);
	if ((clinit_mindustry_Vars(ctx), (jint)SF_mindustry_Vars_headless) != 0) goto label_38;
	}
	{
	sp[0].o = (jobject)((mindustry_entities_comp_UnitComp *) NULL_CHECK((frame[0].o)))->F_type;
	if (((jint)((mindustry_type_UnitType *) NULL_CHECK(sp[0].o))->F_createScorch) == 0) goto label_38;
	}
	{
	LINE_NUMBER(933);
	frame[5].i = (jint(0));
	}
label_40:;
	{
	jint temp0 = frame[5].i;
	sp[0].o = (jobject)((mindustry_entities_comp_UnitComp *) NULL_CHECK((frame[0].o)))->F_type;
	sp[0].o = (jobject)((mindustry_type_UnitType *) NULL_CHECK(sp[0].o))->F_wreckRegions;
	if (temp0 >= (((jarray) nullCheck(ctx, sp[0].o))->length)) goto label_38;
	}
	{
	LINE_NUMBER(934);
	sp[0].o = (jobject)((mindustry_entities_comp_UnitComp *) NULL_CHECK((frame[0].o)))->F_type;
	sp[0].o = (jobject)((mindustry_type_UnitType *) NULL_CHECK(sp[0].o))->F_wreckRegions;
	jint temp0 = (jint)((func_arc_graphics_g2d_TextureRegion_found_R_boolean) ((void **) nullCheck(ctx, ((jobject)ARRAY_ACCESS(jobject, sp[0].o, (frame[5].i))))->vtable)[VTABLE_arc_graphics_g2d_TextureRegion_found_R_boolean])(ctx, ((jobject)ARRAY_ACCESS(jobject, sp[0].o, (frame[5].i))));
	if (temp0 == 0) goto label_42;
	}
	{
	LINE_NUMBER(935);
	sp[0].o = (jobject)((mindustry_entities_comp_UnitComp *) NULL_CHECK((frame[0].o)))->F_type;
	frame[6].f = (((jfloat)((mindustry_type_UnitType *) NULL_CHECK(sp[0].o))->F_hitSize) / (jfloat(4.0f)));
	LINE_NUMBER(936);
	clinit_arc_util_Tmp(ctx);
	sp[0].o = (jobject)SF_arc_util_Tmp_v1;
	sp[0].o = (jobject)((func_arc_math_geom_Vec2_rnd_float_R_arc_math_geom_Vec2) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Vec2_rnd_float_R_arc_math_geom_Vec2])(ctx, sp[0].o, (frame[6].f));
	LINE_NUMBER(937);
	sp[0].o = (jobject)((mindustry_entities_comp_UnitComp *) NULL_CHECK((frame[0].o)))->F_type;
	sp[0].o = (jobject)((mindustry_type_UnitType *) NULL_CHECK(sp[0].o))->F_wreckRegions;
	sp[0].o = (jobject)ARRAY_ACCESS(jobject, sp[0].o, (frame[5].i));
	jfloat temp0 = (jfloat)((mindustry_entities_comp_UnitComp *) NULL_CHECK((frame[0].o)))->F_x;
	clinit_arc_util_Tmp(ctx);
	sp[1].o = (jobject)SF_arc_util_Tmp_v1;
	jfloat temp1 = temp0 + ((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK(sp[1].o))->F_x);
	jfloat temp2 = (jfloat)((mindustry_entities_comp_UnitComp *) NULL_CHECK((frame[0].o)))->F_y;
	clinit_arc_util_Tmp(ctx);
	sp[1].o = (jobject)SF_arc_util_Tmp_v1;
	SM_mindustry_entities_Effect_decal_arc_graphics_g2d_TextureRegion_float_float_float(ctx, sp[0].o, temp1, (temp2 + ((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK(sp[1].o))->F_y)), (((jfloat)((mindustry_entities_comp_UnitComp *) NULL_CHECK((frame[0].o)))->F_rotation) - (jfloat(90.0f))));
	}
label_42:;
	{
	LINE_NUMBER(933);
	INST_IINC(5, 1);
	goto label_40;
	}
label_38:;
	{
	LINE_NUMBER(942);
	sp[0].o = (jobject)((mindustry_entities_comp_UnitComp *) NULL_CHECK((frame[0].o)))->F_abilities;
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
	LINE_NUMBER(943);
	sp[0].o = frame[8].o;
	sp[1].o = (jobject)((func_mindustry_entities_comp_UnitComp_self_R_mindustry_gen_Entityc) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_entities_comp_UnitComp_self_R_mindustry_gen_Entityc])(ctx, (frame[0].o));
	((func_mindustry_entities_abilities_Ability_death_mindustry_gen_Unit) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_entities_abilities_Ability_death_mindustry_gen_Unit])(ctx, sp[0].o, (checkCast(ctx, &class_mindustry_gen_Unit, sp[1].o)));
	LINE_NUMBER(942);
	INST_IINC(7, 1);
	goto label_46;
	}
label_47:;
	{
	LINE_NUMBER(946);
	sp[0].o = (jobject)((mindustry_entities_comp_UnitComp *) NULL_CHECK((frame[0].o)))->F_type;
	sp[1].o = (jobject)((func_mindustry_entities_comp_UnitComp_self_R_mindustry_gen_Entityc) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_entities_comp_UnitComp_self_R_mindustry_gen_Entityc])(ctx, (frame[0].o));
	((func_mindustry_type_UnitType_killed_mindustry_gen_Unit) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_type_UnitType_killed_mindustry_gen_Unit])(ctx, sp[0].o, (checkCast(ctx, &class_mindustry_gen_Unit, sp[1].o)));
	LINE_NUMBER(948);
	((func_mindustry_entities_comp_UnitComp_remove) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_entities_comp_UnitComp_remove])(ctx, (frame[0].o));
	LINE_NUMBER(949);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_mindustry_entities_comp_UnitComp_getControllerName_R_java_lang_String(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/comp/UnitComp:getControllerName", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(954);
	jint temp0 = (jint)((func_mindustry_entities_comp_UnitComp_isPlayer_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_entities_comp_UnitComp_isPlayer_R_boolean])(ctx, (frame[0].o));
	if (temp0 == 0) goto label_1;
	}
	{
	sp[0].o = (jobject)((func_mindustry_entities_comp_UnitComp_getPlayer_R_mindustry_gen_Player) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_entities_comp_UnitComp_getPlayer_R_mindustry_gen_Player])(ctx, (frame[0].o));
	sp[0].o = (jobject)((func_mindustry_gen_Player_coloredName_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_gen_Player_coloredName_R_java_lang_String])(ctx, sp[0].o);
	popStackFrame(ctx);
	return sp[0].o;
	}
label_1:;
	{
	LINE_NUMBER(955);
	sp[0].o = (jobject)((mindustry_entities_comp_UnitComp *) NULL_CHECK((frame[0].o)))->F_controller;
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
	LINE_NUMBER(956);
	popStackFrame(ctx);
	return (jobject(nullptr));
	}

	popStackFrame(ctx);
}

void M_mindustry_entities_comp_UnitComp_display_arc_scene_ui_layout_Table(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/comp/UnitComp:display", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(961);
	sp[0].o = (jobject)((mindustry_entities_comp_UnitComp *) NULL_CHECK((frame[0].o)))->F_type;
	sp[1].o = (jobject)((func_mindustry_entities_comp_UnitComp_self_R_mindustry_gen_Entityc) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_entities_comp_UnitComp_self_R_mindustry_gen_Entityc])(ctx, (frame[0].o));
	((func_mindustry_type_UnitType_display_mindustry_gen_Unit_arc_scene_ui_layout_Table) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_type_UnitType_display_mindustry_gen_Unit_arc_scene_ui_layout_Table])(ctx, sp[0].o, (checkCast(ctx, &class_mindustry_gen_Unit, sp[1].o)), (frame[1].o));
	LINE_NUMBER(962);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_entities_comp_UnitComp_draw(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/comp/UnitComp:draw", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(966);
	sp[0].o = (jobject)((mindustry_entities_comp_UnitComp *) NULL_CHECK((frame[0].o)))->F_type;
	sp[1].o = (jobject)((func_mindustry_entities_comp_UnitComp_self_R_mindustry_gen_Entityc) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_entities_comp_UnitComp_self_R_mindustry_gen_Entityc])(ctx, (frame[0].o));
	((func_mindustry_type_UnitType_draw_mindustry_gen_Unit) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_type_UnitType_draw_mindustry_gen_Unit])(ctx, sp[0].o, (checkCast(ctx, &class_mindustry_gen_Unit, sp[1].o)));
	LINE_NUMBER(967);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jbool M_mindustry_entities_comp_UnitComp_isPlayer_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/comp/UnitComp:isPlayer", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(971);
	sp[0].o = (jobject)((mindustry_entities_comp_UnitComp *) NULL_CHECK((frame[0].o)))->F_controller;
	popStackFrame(ctx);
	return (isInstance(ctx, sp[0].o, &class_mindustry_gen_Player));
	}

	popStackFrame(ctx);
}

jobject M_mindustry_entities_comp_UnitComp_getPlayer_R_mindustry_gen_Player(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/comp/UnitComp:getPlayer", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(976);
	jint temp0 = (jint)((func_mindustry_entities_comp_UnitComp_isPlayer_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_entities_comp_UnitComp_isPlayer_R_boolean])(ctx, (frame[0].o));
	if (temp0 == 0) goto label_1;
	}
	{
	sp[0].o = (jobject)((mindustry_entities_comp_UnitComp *) NULL_CHECK((frame[0].o)))->F_controller;
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

void M_mindustry_entities_comp_UnitComp_killed(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/comp/UnitComp:killed", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(981);
	sp[0].o = frame[0].o;
	jint temp0 = (jint)((func_mindustry_entities_comp_UnitComp_isLocal_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_entities_comp_UnitComp_isLocal_R_boolean])(ctx, (frame[0].o));
	((mindustry_entities_comp_UnitComp *) NULL_CHECK(sp[0].o))->F_wasPlayer = temp0;
	LINE_NUMBER(982);
	sp[0].o = frame[0].o;
	jfloat temp1 = (jfloat)SM_java_lang_Math_min_float_float_R_float(ctx, ((jfloat)((mindustry_entities_comp_UnitComp *) NULL_CHECK((frame[0].o)))->F_health), (jfloat(0)));
	((mindustry_entities_comp_UnitComp *) NULL_CHECK(sp[0].o))->F_health = temp1;
	LINE_NUMBER(983);
	((mindustry_entities_comp_UnitComp *) NULL_CHECK((frame[0].o)))->F_dead = (jint(1));
	LINE_NUMBER(986);
	sp[0].o = (jobject)((mindustry_entities_comp_UnitComp *) NULL_CHECK((frame[0].o)))->F_type;
	if (((jint)((mindustry_type_UnitType *) NULL_CHECK(sp[0].o))->F_flying) == 0) goto label_4;
	}
	{
	sp[0].o = (jobject)((mindustry_entities_comp_UnitComp *) NULL_CHECK((frame[0].o)))->F_type;
	if (((jint)((mindustry_type_UnitType *) NULL_CHECK(sp[0].o))->F_createWreck) != 0) goto label_5;
	}
label_4:;
	{
	LINE_NUMBER(987);
	((func_mindustry_entities_comp_UnitComp_destroy) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_entities_comp_UnitComp_destroy])(ctx, (frame[0].o));
	goto label_6;
	}
label_5:;
	{
	LINE_NUMBER(989);
	sp[0].o = (jobject)((mindustry_entities_comp_UnitComp *) NULL_CHECK((frame[0].o)))->F_type;
	sp[0].o = (jobject)((mindustry_type_UnitType *) NULL_CHECK(sp[0].o))->F_wreckSound;
	sp[1].o = frame[0].o;
	jfloat temp0 = jfloat(1);
	sp[2].o = (jobject)((mindustry_entities_comp_UnitComp *) NULL_CHECK((frame[0].o)))->F_type;
	jint temp1 = (jint)((func_arc_audio_Sound_at_arc_math_geom_Position_float_float_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_audio_Sound_at_arc_math_geom_Position_float_float_R_int])(ctx, sp[0].o, sp[1].o, temp0, ((jfloat)((mindustry_type_UnitType *) NULL_CHECK(sp[2].o))->F_wreckSoundVolume));
	}
label_6:;
	LINE_NUMBER(991);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_entities_comp_UnitComp_kill(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/comp/UnitComp:kill", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(996);
	if (((jint)((mindustry_entities_comp_UnitComp *) NULL_CHECK((frame[0].o)))->F_dead) != 0) goto label_1;
	}
	{
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_net;
	jint temp0 = (jint)((func_mindustry_net_Net_client_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_net_Net_client_R_boolean])(ctx, sp[0].o);
	if (temp0 != 0) goto label_1;
	}
	{
	jint temp0 = (jint)((func_mindustry_entities_comp_UnitComp_killable_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_entities_comp_UnitComp_killable_R_boolean])(ctx, (frame[0].o));
	if (temp0 != 0) goto label_2;
	}
label_1:;
	popStackFrame(ctx);
	INST_RETURN();
label_2:;
	{
	LINE_NUMBER(999);
	SM_mindustry_gen_Call_unitDeath_int(ctx, ((jint)((mindustry_entities_comp_UnitComp *) NULL_CHECK((frame[0].o)))->F_id));
	LINE_NUMBER(1000);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_mindustry_entities_comp_UnitComp_toString_R_java_lang_String(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/comp/UnitComp:toString", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(1005);
	jint temp0 = (jint)((func_mindustry_entities_comp_UnitComp_id_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_entities_comp_UnitComp_id_R_int])(ctx, (frame[0].o));
	sp[0].o = (jobject)((mindustry_entities_comp_UnitComp *) NULL_CHECK((frame[0].o)))->F_type;
	sp[0].o = (jobject)SM_java_lang_String_valueOf_java_lang_Object_R_java_lang_String(ctx, sp[0].o);
	sp[0].o = (jobject)concatStringsRecipe(ctx, u8"Unit#\u0001:\u0001 (\u0001, \u0001)"_j.string, 4, boxInteger(ctx, temp0), sp[0].o, boxFloat(ctx, ((jfloat)((mindustry_entities_comp_UnitComp *) NULL_CHECK((frame[0].o)))->F_x)), boxFloat(ctx, ((jfloat)((mindustry_entities_comp_UnitComp *) NULL_CHECK((frame[0].o)))->F_y)));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jbool M_mindustry_entities_comp_UnitComp_lambda$destroy$0_float_mindustry_gen_Building_R_boolean(jcontext ctx, jobject self, jfloat param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/comp/UnitComp:lambda$destroy$0", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(927);
	if ((isInstance(ctx, (frame[2].o), &class_mindustry_world_blocks_ExplosionShield)) == 0) goto label_1;
	}
	{
	frame[3].o = (checkCast(ctx, &class_mindustry_world_blocks_ExplosionShield, (frame[2].o)));
	jint temp0 = (jint)((func_mindustry_world_blocks_ExplosionShield_absorbExplosion_float_float_float_R_boolean) resolveInterfaceMethod(ctx, &class_mindustry_world_blocks_ExplosionShield, INDEX_mindustry_world_blocks_ExplosionShield_absorbExplosion_float_float_float_R_boolean, (frame[3].o)))(ctx, (frame[3].o), ((jfloat)((mindustry_entities_comp_UnitComp *) NULL_CHECK((frame[0].o)))->F_x), ((jfloat)((mindustry_entities_comp_UnitComp *) NULL_CHECK((frame[0].o)))->F_y), (frame[1].f));
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

jbool SM_mindustry_entities_comp_UnitComp_lambda$sense$1_mindustry_world_Block_mindustry_world_blocks_payloads_Payload_R_boolean(jcontext ctx, jobject param0, jobject param1) {
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/comp/UnitComp:lambda$sense$1", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_entities_comp_UnitComp(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	{
	LINE_NUMBER(346);
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

jbool SM_mindustry_entities_comp_UnitComp_lambda$sense$0_mindustry_type_UnitType_mindustry_world_blocks_payloads_Payload_R_boolean(jcontext ctx, jobject param0, jobject param1) {
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/comp/UnitComp:lambda$sense$0", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_entities_comp_UnitComp(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	{
	LINE_NUMBER(341);
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

jbool M_mindustry_entities_comp_UnitComp_lambda$canLand$0_mindustry_gen_Unit_R_boolean(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/comp/UnitComp:lambda$canLand$0", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(178);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((func_mindustry_entities_comp_UnitComp_self_R_mindustry_gen_Entityc) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_entities_comp_UnitComp_self_R_mindustry_gen_Entityc])(ctx, (frame[0].o));
	if (sp[0].o == sp[1].o) goto label_1;
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

void clinit_mindustry_entities_comp_UnitComp(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	SF_mindustry_entities_comp_UnitComp_warpDst = jfloat(8.0f);
	jtype frame[2];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/comp/UnitComp:<clinit>", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_entities_comp_UnitComp(ctx);
	{
	LINE_NUMBER(39);
	clinit_arc_math_geom_Vec2(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_math_geom_Vec2);
	init_arc_math_geom_Vec2(ctx, sp[0].o);
	clinit_mindustry_entities_comp_UnitComp(ctx);
	SF_mindustry_entities_comp_UnitComp_tmp1 = sp[0].o;
	clinit_arc_math_geom_Vec2(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_math_geom_Vec2);
	init_arc_math_geom_Vec2(ctx, sp[0].o);
	clinit_mindustry_entities_comp_UnitComp(ctx);
	SF_mindustry_entities_comp_UnitComp_tmp2 = sp[0].o;
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

static void initAnnotations(jcontext ctx) {
	auto &clazz = class_mindustry_entities_comp_UnitComp;
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

	{ // Field mineTile
		auto annotationArray = (jarray) createArray(ctx, &class_java_lang_annotation_Annotation, 1);
		fields[19]->F_annotations = (intptr_t) annotationArray;
		auto annotations = (jobject *) annotationArray->data;
		annotations[0] = gcAlloc(ctx, &class_arc_util_Nullable);
	}

	fields[20]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[21]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[22]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[23]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[24]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[25]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[26]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[27]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	{ // Field trail
		auto annotationArray = (jarray) createArray(ctx, &class_java_lang_annotation_Annotation, 1);
		fields[28]->F_annotations = (intptr_t) annotationArray;
		auto annotations = (jobject *) annotationArray->data;
		annotations[0] = gcAlloc(ctx, &class_arc_util_Nullable);
	}

	{ // Field dockedType
		auto annotationArray = (jarray) createArray(ctx, &class_java_lang_annotation_Annotation, 1);
		fields[29]->F_annotations = (intptr_t) annotationArray;
		auto annotations = (jobject *) annotationArray->data;
		annotations[0] = gcAlloc(ctx, &class_arc_util_Nullable);
	}

	fields[30]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[31]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[32]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[33]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[34]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[35]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[36]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[37]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[38]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[39]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[40]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[41]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	{ // Field lastDrownFloor
		auto annotationArray = (jarray) createArray(ctx, &class_java_lang_annotation_Annotation, 1);
		fields[42]->F_annotations = (intptr_t) annotationArray;
		auto annotations = (jobject *) annotationArray->data;
		annotations[0] = gcAlloc(ctx, &class_arc_util_Nullable);
	}

	((java_lang_reflect_Method *) ((java_lang_reflect_Constructor *) constructors[0])->F_method)->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[0]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[1]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[2]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[3]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	{ // Method drownFloor
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

	{ // Method getControllerName
		auto annotationArray = (jarray) createArray(ctx, &class_java_lang_annotation_Annotation, 1);
		methods[76]->F_annotations = (intptr_t) annotationArray;
		auto annotations = (jobject *) annotationArray->data;
		annotations[0] = gcAlloc(ctx, &class_arc_util_Nullable);
	}

	methods[77]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[78]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[79]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	{ // Method getPlayer
		auto annotationArray = (jarray) createArray(ctx, &class_java_lang_annotation_Annotation, 1);
		methods[80]->F_annotations = (intptr_t) annotationArray;
		auto annotations = (jobject *) annotationArray->data;
		annotations[0] = gcAlloc(ctx, &class_arc_util_Nullable);
	}

	methods[81]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[82]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[83]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[84]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[85]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[86]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[87]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[88]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);
}

void *vtable_mindustry_entities_comp_UnitComp[] {
	(void *) M_java_lang_Object_hashCode_R_int,
	(void *) M_java_lang_Object_equals_java_lang_Object_R_boolean,
	(void *) M_java_lang_Object_clone_R_java_lang_Object,
	(void *) M_java_lang_Object_getClass_R_java_lang_Class,
	(void *) M_mindustry_entities_comp_UnitComp_toString_R_java_lang_String,
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
	(void *) nullptr,
	(void *) M_mindustry_entities_comp_UnitComp_add,
	(void *) M_mindustry_entities_comp_UnitComp_afterRead,
	(void *) M_mindustry_entities_comp_UnitComp_afterReadAll,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) M_mindustry_entities_comp_UnitComp_remove,
	(void *) M_mindustry_entities_comp_UnitComp_update,
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
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) M_mindustry_entities_comp_UnitComp_heal_float,
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
	(void *) M_mindustry_entities_comp_UnitComp_kill,
	(void *) M_mindustry_entities_comp_UnitComp_killed,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) M_mindustry_entities_comp_UnitComp_collides_mindustry_gen_Hitboxc_R_boolean,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) M_mindustry_entities_comp_UnitComp_collision_mindustry_gen_Hitboxc_float_float,
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
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) M_mindustry_entities_comp_UnitComp_isGrounded_R_boolean,
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
	(void *) M_mindustry_entities_comp_UnitComp_draw,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) M_mindustry_entities_comp_UnitComp_inFogTo_mindustry_game_Team_R_boolean,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) M_mindustry_entities_comp_UnitComp_itemCapacity_R_int,
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
	(void *) M_mindustry_entities_comp_UnitComp_clipSize_R_float,
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
	(void *) M_mindustry_entities_comp_UnitComp_isSyncHidden_mindustry_game_Team_R_boolean,
	(void *) nullptr,
	(void *) nullptr,
	(void *) M_mindustry_entities_comp_UnitComp_afterSync,
	(void *) M_mindustry_entities_comp_UnitComp_handleSyncHidden,
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
	(void *) M_mindustry_entities_comp_UnitComp_canShoot_R_boolean,
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
	(void *) M_mindustry_entities_comp_UnitComp_range_R_float,
	(void *) M_mindustry_entities_comp_UnitComp_sense_mindustry_logic_LAccess_R_double,
	(void *) M_mindustry_entities_comp_UnitComp_sense_mindustry_ctype_Content_R_double,
	(void *) M_mindustry_entities_comp_UnitComp_senseObject_mindustry_logic_LAccess_R_java_lang_Object,
	(void *) M_mindustry_entities_comp_UnitComp_setProp_mindustry_logic_LAccess_double,
	(void *) M_mindustry_entities_comp_UnitComp_setProp_mindustry_logic_LAccess_java_lang_Object,
	(void *) M_mindustry_entities_comp_UnitComp_setProp_mindustry_ctype_UnlockableContent_double,
	(void *) M_mindustry_entities_comp_UnitComp_displayable_R_boolean,
	(void *) M_mindustry_entities_comp_UnitComp_display_arc_scene_ui_layout_Table,
	(void *) M_mindustry_entities_comp_UnitComp_icon_R_arc_graphics_g2d_TextureRegion,
	(void *) M_mindustry_entities_comp_UnitComp_physicSize_R_float,
	(void *) M_mindustry_entities_comp_UnitComp_getControllerName_R_java_lang_String,
	(void *) M_mindustry_entities_comp_UnitComp_speed_R_float,
	(void *) M_mindustry_entities_comp_UnitComp_collisionLayer_R_int,
	(void *) M_mindustry_entities_comp_UnitComp_prefRotation_R_float,
	(void *) M_mindustry_entities_comp_UnitComp_allowCommand_R_boolean,
	(void *) M_mindustry_entities_comp_UnitComp_isCommandable_R_boolean,
	(void *) M_mindustry_entities_comp_UnitComp_canLand_R_boolean,
	(void *) M_mindustry_entities_comp_UnitComp_destroy,
	(void *) M_mindustry_entities_comp_UnitComp_unloaded,
	(void *) M_mindustry_entities_comp_UnitComp_movePref_arc_math_geom_Vec2,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) M_mindustry_entities_comp_UnitComp_getPlayer_R_mindustry_gen_Player,
	(void *) M_mindustry_entities_comp_UnitComp_canDrown_R_boolean,
	(void *) M_mindustry_entities_comp_UnitComp_canTarget_mindustry_gen_Teamc_R_boolean,
	(void *) M_mindustry_entities_comp_UnitComp_checkTarget_boolean_boolean_R_boolean,
	(void *) M_mindustry_entities_comp_UnitComp_hasWeapons_R_boolean,
	(void *) M_mindustry_entities_comp_UnitComp_hittable_R_boolean,
	(void *) M_mindustry_entities_comp_UnitComp_inRange_arc_math_geom_Position_R_boolean,
	(void *) M_mindustry_entities_comp_UnitComp_isAI_R_boolean,
	(void *) M_mindustry_entities_comp_UnitComp_isEnemy_R_boolean,
	(void *) M_mindustry_entities_comp_UnitComp_isFlying_R_boolean,
	(void *) M_mindustry_entities_comp_UnitComp_isMissile_R_boolean,
	(void *) M_mindustry_entities_comp_UnitComp_isPathImpassable_int_int_R_boolean,
	(void *) M_mindustry_entities_comp_UnitComp_isPlayer_R_boolean,
	(void *) M_mindustry_entities_comp_UnitComp_killable_R_boolean,
	(void *) M_mindustry_entities_comp_UnitComp_playerControllable_R_boolean,
	(void *) M_mindustry_entities_comp_UnitComp_shouldUpdateController_R_boolean,
	(void *) nullptr,
	(void *) M_mindustry_entities_comp_UnitComp_targetable_mindustry_game_Team_R_boolean,
	(void *) nullptr,
	(void *) M_mindustry_entities_comp_UnitComp_ammof_R_float,
	(void *) M_mindustry_entities_comp_UnitComp_bounds_R_float,
	(void *) nullptr,
	(void *) nullptr,
	(void *) M_mindustry_entities_comp_UnitComp_floorSpeedMultiplier_R_float,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) M_mindustry_entities_comp_UnitComp_cap_R_int,
	(void *) M_mindustry_entities_comp_UnitComp_count_R_int,
	(void *) nullptr,
	(void *) nullptr,
	(void *) M_mindustry_entities_comp_UnitComp_command_R_mindustry_ai_types_CommandAI,
	(void *) nullptr,
	(void *) M_mindustry_entities_comp_UnitComp_controller_R_mindustry_entities_units_UnitController,
	(void *) nullptr,
	(void *) M_mindustry_entities_comp_UnitComp_drownFloor_R_mindustry_world_blocks_environment_Floor,
	(void *) nullptr,
	(void *) M_mindustry_entities_comp_UnitComp_aimLook_arc_math_geom_Position,
	(void *) M_mindustry_entities_comp_UnitComp_aimLook_float_float,
	(void *) M_mindustry_entities_comp_UnitComp_approach_arc_math_geom_Vec2,
	(void *) M_mindustry_entities_comp_UnitComp_controller_mindustry_entities_units_UnitController,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) M_mindustry_entities_comp_UnitComp_landed,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) M_mindustry_entities_comp_UnitComp_lookAt_arc_math_geom_Position,
	(void *) M_mindustry_entities_comp_UnitComp_lookAt_float,
	(void *) M_mindustry_entities_comp_UnitComp_lookAt_float_float,
	(void *) M_mindustry_entities_comp_UnitComp_moveAt_arc_math_geom_Vec2,
	(void *) M_mindustry_entities_comp_UnitComp_moveAt_arc_math_geom_Vec2_float,
	(void *) M_mindustry_entities_comp_UnitComp_resetController,
	(void *) M_mindustry_entities_comp_UnitComp_rotateMove_arc_math_geom_Vec2,
	(void *) M_mindustry_entities_comp_UnitComp_set_mindustry_type_UnitType_mindustry_entities_units_UnitController,
	(void *) M_mindustry_entities_comp_UnitComp_setType_mindustry_type_UnitType,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) M_mindustry_entities_comp_UnitComp_updateBoosting_boolean,
	(void *) M_mindustry_entities_comp_UnitComp_updateBoosting_boolean_boolean,
	(void *) M_mindustry_entities_comp_UnitComp_updateDrowning,
	(void *) M_mindustry_entities_comp_UnitComp_wobble,
	(void *) M_mindustry_entities_comp_UnitComp_lambda$destroy$0_float_mindustry_gen_Building_R_boolean,
	(void *) M_mindustry_entities_comp_UnitComp_lambda$canLand$0_mindustry_gen_Unit_R_boolean,
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
	{ "rotation", "()F" },
	{ "rotation", "(F)V" },
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
	{ "lambda$destroy$0", "(FLmindustry/gen/Building;)Z" },
	{ "lambda$canLand$0", "(Lmindustry/gen/Unit;)Z" },
};

static jclass interfaces[] { &class_mindustry_gen_Healthc, &class_mindustry_gen_Physicsc, &class_mindustry_gen_Hitboxc, &class_mindustry_gen_Statusc, &class_mindustry_gen_Teamc, &class_mindustry_gen_Itemsc, &class_mindustry_gen_Rotc, &class_mindustry_gen_Unitc, &class_mindustry_gen_Weaponsc, &class_mindustry_gen_Drawc, &class_mindustry_gen_Syncc, &class_mindustry_gen_Shieldc, &class_mindustry_ui_Displayable, &class_mindustry_logic_Ranged, &class_mindustry_gen_Minerc, &class_mindustry_gen_Builderc, &class_mindustry_logic_Senseable, &class_mindustry_logic_Settable, };

static FieldMetadata fields[] {
	{ "tmp1", &class_arc_math_geom_Vec2, (intptr_t) &SF_mindustry_entities_comp_UnitComp_tmp1, "Larc/math/geom/Vec2;", 26 },
	{ "tmp2", &class_arc_math_geom_Vec2, (intptr_t) &SF_mindustry_entities_comp_UnitComp_tmp2, "Larc/math/geom/Vec2;", 26 },
	{ "warpDst", &class_float, (intptr_t) &SF_mindustry_entities_comp_UnitComp_warpDst, "F", 24 },
	{ "dead", &class_boolean, offsetof(mindustry_entities_comp_UnitComp, F_dead), "Z", 0 },
	{ "disarmed", &class_boolean, offsetof(mindustry_entities_comp_UnitComp, F_disarmed), "Z", 0 },
	{ "x", &class_float, offsetof(mindustry_entities_comp_UnitComp, F_x), "F", 0 },
	{ "y", &class_float, offsetof(mindustry_entities_comp_UnitComp, F_y), "F", 0 },
	{ "rotation", &class_float, offsetof(mindustry_entities_comp_UnitComp, F_rotation), "F", 0 },
	{ "maxHealth", &class_float, offsetof(mindustry_entities_comp_UnitComp, F_maxHealth), "F", 0 },
	{ "drag", &class_float, offsetof(mindustry_entities_comp_UnitComp, F_drag), "F", 0 },
	{ "armor", &class_float, offsetof(mindustry_entities_comp_UnitComp, F_armor), "F", 0 },
	{ "hitSize", &class_float, offsetof(mindustry_entities_comp_UnitComp, F_hitSize), "F", 0 },
	{ "health", &class_float, offsetof(mindustry_entities_comp_UnitComp, F_health), "F", 0 },
	{ "shield", &class_float, offsetof(mindustry_entities_comp_UnitComp, F_shield), "F", 0 },
	{ "dragMultiplier", &class_float, offsetof(mindustry_entities_comp_UnitComp, F_dragMultiplier), "F", 0 },
	{ "armorOverride", &class_float, offsetof(mindustry_entities_comp_UnitComp, F_armorOverride), "F", 0 },
	{ "speedMultiplier", &class_float, offsetof(mindustry_entities_comp_UnitComp, F_speedMultiplier), "F", 0 },
	{ "team", &class_mindustry_game_Team, offsetof(mindustry_entities_comp_UnitComp, F_team), "Lmindustry/game/Team;", 0 },
	{ "id", &class_int, offsetof(mindustry_entities_comp_UnitComp, F_id), "I", 0 },
	{ "mineTile", &class_mindustry_world_Tile, offsetof(mindustry_entities_comp_UnitComp, F_mineTile), "Lmindustry/world/Tile;", 0 },
	{ "vel", &class_arc_math_geom_Vec2, offsetof(mindustry_entities_comp_UnitComp, F_vel), "Larc/math/geom/Vec2;", 0 },
	{ "mounts", getArrayClass(&class_mindustry_entities_units_WeaponMount, 1), offsetof(mindustry_entities_comp_UnitComp, F_mounts), "[Lmindustry/entities/units/WeaponMount;", 0 },
	{ "stack", &class_mindustry_type_ItemStack, offsetof(mindustry_entities_comp_UnitComp, F_stack), "Lmindustry/type/ItemStack;", 0 },
	{ "controller", &class_mindustry_entities_units_UnitController, offsetof(mindustry_entities_comp_UnitComp, F_controller), "Lmindustry/entities/units/UnitController;", 2 },
	{ "abilities", getArrayClass(&class_mindustry_entities_abilities_Ability, 1), offsetof(mindustry_entities_comp_UnitComp, F_abilities), "[Lmindustry/entities/abilities/Ability;", 0 },
	{ "type", &class_mindustry_type_UnitType, offsetof(mindustry_entities_comp_UnitComp, F_type), "Lmindustry/type/UnitType;", 0 },
	{ "spawnedByCore", &class_boolean, offsetof(mindustry_entities_comp_UnitComp, F_spawnedByCore), "Z", 0 },
	{ "flag", &class_double, offsetof(mindustry_entities_comp_UnitComp, F_flag), "D", 0 },
	{ "trail", &class_mindustry_graphics_Trail, offsetof(mindustry_entities_comp_UnitComp, F_trail), "Lmindustry/graphics/Trail;", 128 },
	{ "dockedType", &class_mindustry_type_UnitType, offsetof(mindustry_entities_comp_UnitComp, F_dockedType), "Lmindustry/type/UnitType;", 128 },
	{ "lastCommanded", &class_java_lang_String, offsetof(mindustry_entities_comp_UnitComp, F_lastCommanded), "Ljava/lang/String;", 128 },
	{ "shadowAlpha", &class_float, offsetof(mindustry_entities_comp_UnitComp, F_shadowAlpha), "F", 128 },
	{ "healTime", &class_float, offsetof(mindustry_entities_comp_UnitComp, F_healTime), "F", 128 },
	{ "lastFogPos", &class_int, offsetof(mindustry_entities_comp_UnitComp, F_lastFogPos), "I", 128 },
	{ "hasTarget", &class_boolean, offsetof(mindustry_entities_comp_UnitComp, F_hasTarget), "Z", 128 },
	{ "resupplyTime", &class_float, offsetof(mindustry_entities_comp_UnitComp, F_resupplyTime), "F", 130 },
	{ "wasPlayer", &class_boolean, offsetof(mindustry_entities_comp_UnitComp, F_wasPlayer), "Z", 130 },
	{ "wasHealed", &class_boolean, offsetof(mindustry_entities_comp_UnitComp, F_wasHealed), "Z", 130 },
	{ "elevation", &class_float, offsetof(mindustry_entities_comp_UnitComp, F_elevation), "F", 0 },
	{ "wasFlying", &class_boolean, offsetof(mindustry_entities_comp_UnitComp, F_wasFlying), "Z", 130 },
	{ "drownTime", &class_float, offsetof(mindustry_entities_comp_UnitComp, F_drownTime), "F", 128 },
	{ "splashTimer", &class_float, offsetof(mindustry_entities_comp_UnitComp, F_splashTimer), "F", 128 },
	{ "lastDrownFloor", &class_mindustry_world_blocks_environment_Floor, offsetof(mindustry_entities_comp_UnitComp, F_lastDrownFloor), "Lmindustry/world/blocks/environment/Floor;", 128 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_mindustry_entities_comp_UnitComp, 0, "()V", 0 },
	{ "checkTarget", (intptr_t) M_mindustry_entities_comp_UnitComp_checkTarget_boolean_boolean_R_boolean, VTABLE_mindustry_entities_comp_UnitComp_checkTarget_boolean_boolean_R_boolean, "(ZZ)Z", 1 },
	{ "isGrounded", (intptr_t) M_mindustry_entities_comp_UnitComp_isGrounded_R_boolean, VTABLE_mindustry_entities_comp_UnitComp_isGrounded_R_boolean, "()Z", 1 },
	{ "isFlying", (intptr_t) M_mindustry_entities_comp_UnitComp_isFlying_R_boolean, VTABLE_mindustry_entities_comp_UnitComp_isFlying_R_boolean, "()Z", 1 },
	{ "canDrown", (intptr_t) M_mindustry_entities_comp_UnitComp_canDrown_R_boolean, VTABLE_mindustry_entities_comp_UnitComp_canDrown_R_boolean, "()Z", 1 },
	{ "drownFloor", (intptr_t) M_mindustry_entities_comp_UnitComp_drownFloor_R_mindustry_world_blocks_environment_Floor, VTABLE_mindustry_entities_comp_UnitComp_drownFloor_R_mindustry_world_blocks_environment_Floor, "()Lmindustry/world/blocks/environment/Floor;", 1 },
	{ "wobble", (intptr_t) M_mindustry_entities_comp_UnitComp_wobble, VTABLE_mindustry_entities_comp_UnitComp_wobble, "()V", 1 },
	{ "moveAt", (intptr_t) M_mindustry_entities_comp_UnitComp_moveAt_arc_math_geom_Vec2_float, VTABLE_mindustry_entities_comp_UnitComp_moveAt_arc_math_geom_Vec2_float, "(Larc/math/geom/Vec2;F)V", 1 },
	{ "floorSpeedMultiplier", (intptr_t) M_mindustry_entities_comp_UnitComp_floorSpeedMultiplier_R_float, VTABLE_mindustry_entities_comp_UnitComp_floorSpeedMultiplier_R_float, "()F", 1 },
	{ "unloaded", (intptr_t) M_mindustry_entities_comp_UnitComp_unloaded, VTABLE_mindustry_entities_comp_UnitComp_unloaded, "()V", 1 },
	{ "updateBoosting", (intptr_t) M_mindustry_entities_comp_UnitComp_updateBoosting_boolean, VTABLE_mindustry_entities_comp_UnitComp_updateBoosting_boolean, "(Z)V", 1 },
	{ "updateBoosting", (intptr_t) M_mindustry_entities_comp_UnitComp_updateBoosting_boolean_boolean, VTABLE_mindustry_entities_comp_UnitComp_updateBoosting_boolean_boolean, "(ZZ)V", 1 },
	{ "movePref", (intptr_t) M_mindustry_entities_comp_UnitComp_movePref_arc_math_geom_Vec2, VTABLE_mindustry_entities_comp_UnitComp_movePref_arc_math_geom_Vec2, "(Larc/math/geom/Vec2;)V", 1 },
	{ "moveAt", (intptr_t) M_mindustry_entities_comp_UnitComp_moveAt_arc_math_geom_Vec2, VTABLE_mindustry_entities_comp_UnitComp_moveAt_arc_math_geom_Vec2, "(Larc/math/geom/Vec2;)V", 1 },
	{ "approach", (intptr_t) M_mindustry_entities_comp_UnitComp_approach_arc_math_geom_Vec2, VTABLE_mindustry_entities_comp_UnitComp_approach_arc_math_geom_Vec2, "(Larc/math/geom/Vec2;)V", 1 },
	{ "rotateMove", (intptr_t) M_mindustry_entities_comp_UnitComp_rotateMove_arc_math_geom_Vec2, VTABLE_mindustry_entities_comp_UnitComp_rotateMove_arc_math_geom_Vec2, "(Larc/math/geom/Vec2;)V", 1 },
	{ "aimLook", (intptr_t) M_mindustry_entities_comp_UnitComp_aimLook_arc_math_geom_Position, VTABLE_mindustry_entities_comp_UnitComp_aimLook_arc_math_geom_Position, "(Larc/math/geom/Position;)V", 1 },
	{ "aimLook", (intptr_t) M_mindustry_entities_comp_UnitComp_aimLook_float_float, VTABLE_mindustry_entities_comp_UnitComp_aimLook_float_float, "(FF)V", 1 },
	{ "isPathImpassable", (intptr_t) M_mindustry_entities_comp_UnitComp_isPathImpassable_int_int_R_boolean, VTABLE_mindustry_entities_comp_UnitComp_isPathImpassable_int_int_R_boolean, "(II)Z", 1 },
	{ "physicSize", (intptr_t) M_mindustry_entities_comp_UnitComp_physicSize_R_float, VTABLE_mindustry_entities_comp_UnitComp_physicSize_R_float, "()F", 1 },
	{ "canLand", (intptr_t) M_mindustry_entities_comp_UnitComp_canLand_R_boolean, VTABLE_mindustry_entities_comp_UnitComp_canLand_R_boolean, "()Z", 1 },
	{ "inRange", (intptr_t) M_mindustry_entities_comp_UnitComp_inRange_arc_math_geom_Position_R_boolean, VTABLE_mindustry_entities_comp_UnitComp_inRange_arc_math_geom_Position_R_boolean, "(Larc/math/geom/Position;)Z", 1 },
	{ "hasWeapons", (intptr_t) M_mindustry_entities_comp_UnitComp_hasWeapons_R_boolean, VTABLE_mindustry_entities_comp_UnitComp_hasWeapons_R_boolean, "()Z", 1 },
	{ "speed", (intptr_t) M_mindustry_entities_comp_UnitComp_speed_R_float, VTABLE_mindustry_entities_comp_UnitComp_speed_R_float, "()F", 1 },
	{ "prefRotation", (intptr_t) M_mindustry_entities_comp_UnitComp_prefRotation_R_float, VTABLE_mindustry_entities_comp_UnitComp_prefRotation_R_float, "()F", 1 },
	{ "ammof", (intptr_t) M_mindustry_entities_comp_UnitComp_ammof_R_float, VTABLE_mindustry_entities_comp_UnitComp_ammof_R_float, "()F", 1 },
	{ "displayable", (intptr_t) M_mindustry_entities_comp_UnitComp_displayable_R_boolean, VTABLE_mindustry_entities_comp_UnitComp_displayable_R_boolean, "()Z", 1 },
	{ "isSyncHidden", (intptr_t) M_mindustry_entities_comp_UnitComp_isSyncHidden_mindustry_game_Team_R_boolean, VTABLE_mindustry_entities_comp_UnitComp_isSyncHidden_mindustry_game_Team_R_boolean, "(Lmindustry/game/Team;)Z", 1 },
	{ "handleSyncHidden", (intptr_t) M_mindustry_entities_comp_UnitComp_handleSyncHidden, VTABLE_mindustry_entities_comp_UnitComp_handleSyncHidden, "()V", 1 },
	{ "inFogTo", (intptr_t) M_mindustry_entities_comp_UnitComp_inFogTo_mindustry_game_Team_R_boolean, VTABLE_mindustry_entities_comp_UnitComp_inFogTo_mindustry_game_Team_R_boolean, "(Lmindustry/game/Team;)Z", 1 },
	{ "range", (intptr_t) M_mindustry_entities_comp_UnitComp_range_R_float, VTABLE_mindustry_entities_comp_UnitComp_range_R_float, "()F", 1 },
	{ "clipSize", (intptr_t) M_mindustry_entities_comp_UnitComp_clipSize_R_float, VTABLE_mindustry_entities_comp_UnitComp_clipSize_R_float, "()F", 1 },
	{ "sense", (intptr_t) M_mindustry_entities_comp_UnitComp_sense_mindustry_logic_LAccess_R_double, VTABLE_mindustry_entities_comp_UnitComp_sense_mindustry_logic_LAccess_R_double, "(Lmindustry/logic/LAccess;)D", 1 },
	{ "senseObject", (intptr_t) M_mindustry_entities_comp_UnitComp_senseObject_mindustry_logic_LAccess_R_java_lang_Object, VTABLE_mindustry_entities_comp_UnitComp_senseObject_mindustry_logic_LAccess_R_java_lang_Object, "(Lmindustry/logic/LAccess;)Ljava/lang/Object;", 1 },
	{ "sense", (intptr_t) M_mindustry_entities_comp_UnitComp_sense_mindustry_ctype_Content_R_double, VTABLE_mindustry_entities_comp_UnitComp_sense_mindustry_ctype_Content_R_double, "(Lmindustry/ctype/Content;)D", 1 },
	{ "setProp", (intptr_t) M_mindustry_entities_comp_UnitComp_setProp_mindustry_logic_LAccess_double, VTABLE_mindustry_entities_comp_UnitComp_setProp_mindustry_logic_LAccess_double, "(Lmindustry/logic/LAccess;D)V", 1 },
	{ "setProp", (intptr_t) M_mindustry_entities_comp_UnitComp_setProp_mindustry_logic_LAccess_java_lang_Object, VTABLE_mindustry_entities_comp_UnitComp_setProp_mindustry_logic_LAccess_java_lang_Object, "(Lmindustry/logic/LAccess;Ljava/lang/Object;)V", 1 },
	{ "setProp", (intptr_t) M_mindustry_entities_comp_UnitComp_setProp_mindustry_ctype_UnlockableContent_double, VTABLE_mindustry_entities_comp_UnitComp_setProp_mindustry_ctype_UnlockableContent_double, "(Lmindustry/ctype/UnlockableContent;D)V", 1 },
	{ "canShoot", (intptr_t) M_mindustry_entities_comp_UnitComp_canShoot_R_boolean, VTABLE_mindustry_entities_comp_UnitComp_canShoot_R_boolean, "()Z", 1 },
	{ "isEnemy", (intptr_t) M_mindustry_entities_comp_UnitComp_isEnemy_R_boolean, VTABLE_mindustry_entities_comp_UnitComp_isEnemy_R_boolean, "()Z", 1 },
	{ "collides", (intptr_t) M_mindustry_entities_comp_UnitComp_collides_mindustry_gen_Hitboxc_R_boolean, VTABLE_mindustry_entities_comp_UnitComp_collides_mindustry_gen_Hitboxc_R_boolean, "(Lmindustry/gen/Hitboxc;)Z", 1 },
	{ "collision", (intptr_t) M_mindustry_entities_comp_UnitComp_collision_mindustry_gen_Hitboxc_float_float, VTABLE_mindustry_entities_comp_UnitComp_collision_mindustry_gen_Hitboxc_float_float, "(Lmindustry/gen/Hitboxc;FF)V", 1 },
	{ "itemCapacity", (intptr_t) M_mindustry_entities_comp_UnitComp_itemCapacity_R_int, VTABLE_mindustry_entities_comp_UnitComp_itemCapacity_R_int, "()I", 1 },
	{ "bounds", (intptr_t) M_mindustry_entities_comp_UnitComp_bounds_R_float, VTABLE_mindustry_entities_comp_UnitComp_bounds_R_float, "()F", 1 },
	{ "controller", (intptr_t) M_mindustry_entities_comp_UnitComp_controller_mindustry_entities_units_UnitController, VTABLE_mindustry_entities_comp_UnitComp_controller_mindustry_entities_units_UnitController, "(Lmindustry/entities/units/UnitController;)V", 1 },
	{ "controller", (intptr_t) M_mindustry_entities_comp_UnitComp_controller_R_mindustry_entities_units_UnitController, VTABLE_mindustry_entities_comp_UnitComp_controller_R_mindustry_entities_units_UnitController, "()Lmindustry/entities/units/UnitController;", 1 },
	{ "resetController", (intptr_t) M_mindustry_entities_comp_UnitComp_resetController, VTABLE_mindustry_entities_comp_UnitComp_resetController, "()V", 1 },
	{ "set", (intptr_t) M_mindustry_entities_comp_UnitComp_set_mindustry_type_UnitType_mindustry_entities_units_UnitController, VTABLE_mindustry_entities_comp_UnitComp_set_mindustry_type_UnitType_mindustry_entities_units_UnitController, "(Lmindustry/type/UnitType;Lmindustry/entities/units/UnitController;)V", 1 },
	{ "collisionLayer", (intptr_t) M_mindustry_entities_comp_UnitComp_collisionLayer_R_int, VTABLE_mindustry_entities_comp_UnitComp_collisionLayer_R_int, "()I", 1 },
	{ "lookAt", (intptr_t) M_mindustry_entities_comp_UnitComp_lookAt_float, VTABLE_mindustry_entities_comp_UnitComp_lookAt_float, "(F)V", 1 },
	{ "lookAt", (intptr_t) M_mindustry_entities_comp_UnitComp_lookAt_arc_math_geom_Position, VTABLE_mindustry_entities_comp_UnitComp_lookAt_arc_math_geom_Position, "(Larc/math/geom/Position;)V", 1 },
	{ "lookAt", (intptr_t) M_mindustry_entities_comp_UnitComp_lookAt_float_float, VTABLE_mindustry_entities_comp_UnitComp_lookAt_float_float, "(FF)V", 1 },
	{ "isAI", (intptr_t) M_mindustry_entities_comp_UnitComp_isAI_R_boolean, VTABLE_mindustry_entities_comp_UnitComp_isAI_R_boolean, "()Z", 1 },
	{ "allowCommand", (intptr_t) M_mindustry_entities_comp_UnitComp_allowCommand_R_boolean, VTABLE_mindustry_entities_comp_UnitComp_allowCommand_R_boolean, "()Z", 1 },
	{ "isCommandable", (intptr_t) M_mindustry_entities_comp_UnitComp_isCommandable_R_boolean, VTABLE_mindustry_entities_comp_UnitComp_isCommandable_R_boolean, "()Z", 1 },
	{ "canTarget", (intptr_t) M_mindustry_entities_comp_UnitComp_canTarget_mindustry_gen_Teamc_R_boolean, VTABLE_mindustry_entities_comp_UnitComp_canTarget_mindustry_gen_Teamc_R_boolean, "(Lmindustry/gen/Teamc;)Z", 1 },
	{ "command", (intptr_t) M_mindustry_entities_comp_UnitComp_command_R_mindustry_ai_types_CommandAI, VTABLE_mindustry_entities_comp_UnitComp_command_R_mindustry_ai_types_CommandAI, "()Lmindustry/ai/types/CommandAI;", 1 },
	{ "isMissile", (intptr_t) M_mindustry_entities_comp_UnitComp_isMissile_R_boolean, VTABLE_mindustry_entities_comp_UnitComp_isMissile_R_boolean, "()Z", 1 },
	{ "count", (intptr_t) M_mindustry_entities_comp_UnitComp_count_R_int, VTABLE_mindustry_entities_comp_UnitComp_count_R_int, "()I", 1 },
	{ "cap", (intptr_t) M_mindustry_entities_comp_UnitComp_cap_R_int, VTABLE_mindustry_entities_comp_UnitComp_cap_R_int, "()I", 1 },
	{ "setType", (intptr_t) M_mindustry_entities_comp_UnitComp_setType_mindustry_type_UnitType, VTABLE_mindustry_entities_comp_UnitComp_setType_mindustry_type_UnitType, "(Lmindustry/type/UnitType;)V", 1 },
	{ "playerControllable", (intptr_t) M_mindustry_entities_comp_UnitComp_playerControllable_R_boolean, VTABLE_mindustry_entities_comp_UnitComp_playerControllable_R_boolean, "()Z", 1 },
	{ "targetable", (intptr_t) M_mindustry_entities_comp_UnitComp_targetable_mindustry_game_Team_R_boolean, VTABLE_mindustry_entities_comp_UnitComp_targetable_mindustry_game_Team_R_boolean, "(Lmindustry/game/Team;)Z", 1 },
	{ "killable", (intptr_t) M_mindustry_entities_comp_UnitComp_killable_R_boolean, VTABLE_mindustry_entities_comp_UnitComp_killable_R_boolean, "()Z", 1 },
	{ "hittable", (intptr_t) M_mindustry_entities_comp_UnitComp_hittable_R_boolean, VTABLE_mindustry_entities_comp_UnitComp_hittable_R_boolean, "()Z", 1 },
	{ "afterSync", (intptr_t) M_mindustry_entities_comp_UnitComp_afterSync, VTABLE_mindustry_entities_comp_UnitComp_afterSync, "()V", 1 },
	{ "afterRead", (intptr_t) M_mindustry_entities_comp_UnitComp_afterRead, VTABLE_mindustry_entities_comp_UnitComp_afterRead, "()V", 1 },
	{ "afterReadAll", (intptr_t) M_mindustry_entities_comp_UnitComp_afterReadAll, VTABLE_mindustry_entities_comp_UnitComp_afterReadAll, "()V", 1 },
	{ "add", (intptr_t) M_mindustry_entities_comp_UnitComp_add, VTABLE_mindustry_entities_comp_UnitComp_add, "()V", 1 },
	{ "remove", (intptr_t) M_mindustry_entities_comp_UnitComp_remove, VTABLE_mindustry_entities_comp_UnitComp_remove, "()V", 1 },
	{ "landed", (intptr_t) M_mindustry_entities_comp_UnitComp_landed, VTABLE_mindustry_entities_comp_UnitComp_landed, "()V", 1 },
	{ "heal", (intptr_t) M_mindustry_entities_comp_UnitComp_heal_float, VTABLE_mindustry_entities_comp_UnitComp_heal_float, "(F)V", 1 },
	{ "updateDrowning", (intptr_t) M_mindustry_entities_comp_UnitComp_updateDrowning, VTABLE_mindustry_entities_comp_UnitComp_updateDrowning, "()V", 1 },
	{ "update", (intptr_t) M_mindustry_entities_comp_UnitComp_update, VTABLE_mindustry_entities_comp_UnitComp_update, "()V", 1 },
	{ "shouldUpdateController", (intptr_t) M_mindustry_entities_comp_UnitComp_shouldUpdateController_R_boolean, VTABLE_mindustry_entities_comp_UnitComp_shouldUpdateController_R_boolean, "()Z", 1 },
	{ "icon", (intptr_t) M_mindustry_entities_comp_UnitComp_icon_R_arc_graphics_g2d_TextureRegion, VTABLE_mindustry_entities_comp_UnitComp_icon_R_arc_graphics_g2d_TextureRegion, "()Larc/graphics/g2d/TextureRegion;", 1 },
	{ "destroy", (intptr_t) M_mindustry_entities_comp_UnitComp_destroy, VTABLE_mindustry_entities_comp_UnitComp_destroy, "()V", 1 },
	{ "getControllerName", (intptr_t) M_mindustry_entities_comp_UnitComp_getControllerName_R_java_lang_String, VTABLE_mindustry_entities_comp_UnitComp_getControllerName_R_java_lang_String, "()Ljava/lang/String;", 1 },
	{ "display", (intptr_t) M_mindustry_entities_comp_UnitComp_display_arc_scene_ui_layout_Table, VTABLE_mindustry_entities_comp_UnitComp_display_arc_scene_ui_layout_Table, "(Larc/scene/ui/layout/Table;)V", 1 },
	{ "draw", (intptr_t) M_mindustry_entities_comp_UnitComp_draw, VTABLE_mindustry_entities_comp_UnitComp_draw, "()V", 1 },
	{ "isPlayer", (intptr_t) M_mindustry_entities_comp_UnitComp_isPlayer_R_boolean, VTABLE_mindustry_entities_comp_UnitComp_isPlayer_R_boolean, "()Z", 1 },
	{ "getPlayer", (intptr_t) M_mindustry_entities_comp_UnitComp_getPlayer_R_mindustry_gen_Player, VTABLE_mindustry_entities_comp_UnitComp_getPlayer_R_mindustry_gen_Player, "()Lmindustry/gen/Player;", 1 },
	{ "killed", (intptr_t) M_mindustry_entities_comp_UnitComp_killed, VTABLE_mindustry_entities_comp_UnitComp_killed, "()V", 1 },
	{ "kill", (intptr_t) M_mindustry_entities_comp_UnitComp_kill, VTABLE_mindustry_entities_comp_UnitComp_kill, "()V", 1 },
	{ "toString", (intptr_t) M_mindustry_entities_comp_UnitComp_toString_R_java_lang_String, VTABLE_mindustry_entities_comp_UnitComp_toString_R_java_lang_String, "()Ljava/lang/String;", 1 },
	{ "lambda$destroy$0", (intptr_t) M_mindustry_entities_comp_UnitComp_lambda$destroy$0_float_mindustry_gen_Building_R_boolean, VTABLE_mindustry_entities_comp_UnitComp_lambda$destroy$0_float_mindustry_gen_Building_R_boolean, "(FLmindustry/gen/Building;)Z", 4098 },
	{ "lambda$sense$1", (intptr_t) SM_mindustry_entities_comp_UnitComp_lambda$sense$1_mindustry_world_Block_mindustry_world_blocks_payloads_Payload_R_boolean, 0, "(Lmindustry/world/Block;Lmindustry/world/blocks/payloads/Payload;)Z", 4106 },
	{ "lambda$sense$0", (intptr_t) SM_mindustry_entities_comp_UnitComp_lambda$sense$0_mindustry_type_UnitType_mindustry_world_blocks_payloads_Payload_R_boolean, 0, "(Lmindustry/type/UnitType;Lmindustry/world/blocks/payloads/Payload;)Z", 4106 },
	{ "lambda$canLand$0", (intptr_t) M_mindustry_entities_comp_UnitComp_lambda$canLand$0_mindustry_gen_Unit_R_boolean, VTABLE_mindustry_entities_comp_UnitComp_lambda$canLand$0_mindustry_gen_Unit_R_boolean, "(Lmindustry/gen/Unit;)Z", 4098 },
	{ "<clinit>", (intptr_t) clinit_mindustry_entities_comp_UnitComp, 0, "()V", 8 },
};

Class class_mindustry_entities_comp_UnitComp{
		.nativeName = (intptr_t) "mindustry/entities/comp/UnitComp",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(mindustry_entities_comp_UnitComp),
		.classVtable = (intptr_t) vtable_mindustry_entities_comp_UnitComp,
		.staticInitializer = (intptr_t) clinit_mindustry_entities_comp_UnitComp,
		.annotationInitializer = (intptr_t) initAnnotations,
		.markFunction = (intptr_t) mark_mindustry_entities_comp_UnitComp,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 1056,
		.interfaceCount = 18,
		.nativeInterfaces = (intptr_t) interfaces,
		.fieldCount = 43,
		.nativeFields = (intptr_t) fields,
		.methodCount = 90,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 341,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_mindustry_entities_comp_UnitComp = registerClass(&class_mindustry_entities_comp_UnitComp);

}
