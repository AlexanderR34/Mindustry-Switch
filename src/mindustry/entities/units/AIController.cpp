#include "mindustry/entities/units/AIController.h"
#include "arc/math/Angles.h"
#include "mindustry/entities/Sized.h"
#include "mindustry/world/meta/BlockStatus.h"
#include "mindustry/ai/Pathfinder.h"
#include "java/lang/reflect/Constructor.h"
#include "mindustry/ai/BlockIndexer.h"
#include "mindustry/ai/Pathfinder_Flowfield.h"
#include "mindustry/gen/Entityc.h"
#include "arc/util/Tmp.h"
#include "arc/struct/Seq.h"
#include "java/lang/reflect/Method.h"
#include "mindustry/entities/Predict.h"
#include "mindustry/world/Tile.h"
#include "arc/math/geom/Position.h"
#include "mindustry/gen/Healthc.h"
#include "mindustry/gen/Mechc.h"
#include "arc/func/Boolf.h"
#include "arc/math/Mathf.h"
#include "mindustry/ai/UnitStance.h"
#include "java/lang/reflect/Field.h"
#include "mindustry/gen/Unit.h"
#include "mindustry/gen/Payloadc.h"
#include "arc/util/Time.h"
#include "arc/util/Nullable.h"
#include "arc/util/Interval.h"
#include "mindustry/world/modules/ItemModule.h"
#include "mindustry/entities/units/UnitController.h"
#include "mindustry/gen/Building.h"
#include "mindustry/gen/Posc.h"
#include "mindustry/entities/units/AIController_invoke_arc_func_Boolf_7.h"
#include "mindustry/entities/units/AIController_invoke_arc_func_Boolf_8.h"
#include "java/lang/Object.h"
#include "mindustry/entities/units/AIController_invoke_arc_func_Boolf_9.h"
#include "mindustry/entities/units/AIController.h"
#include "mindustry/entities/units/AIController_invoke_arc_func_Boolf_5.h"
#include "mindustry/entities/units/AIController_invoke_arc_func_Boolf_6.h"
#include "mindustry/entities/Units.h"
#include "mindustry/ai/WaveSpawner.h"
#include "mindustry/entities/bullet/BulletType.h"
#include "arc/math/geom/Vec2.h"
#include "mindustry/type/Weapon.h"
#include "mindustry/world/Block.h"
#include "mindustry/world/blocks/payloads/UnitPayload.h"
#include "mindustry/gen/Velc.h"
#include "java/lang/Iterable.h"
#include "mindustry/gen/Unitc.h"
#include "mindustry/entities/units/WeaponMount.h"
#include "mindustry/world/meta/BlockFlag.h"
#include "arc/math/geom/Geometry.h"
#include "java/lang/Math.h"
#include "mindustry/gen/Teamc.h"
#include "java/lang/annotation/Annotation.h"
#include "mindustry/ai/types/CommandAI.h"
#include "mindustry/type/UnitType.h"
#include "mindustry/game/Team.h"
#include "mindustry/Vars.h"

extern "C" {

jobject SF_mindustry_entities_units_AIController_vec;
jfloat SF_mindustry_entities_units_AIController_rotateBackTimer;
jint SF_mindustry_entities_units_AIController_timerTarget;
jint SF_mindustry_entities_units_AIController_timerTarget2;
jint SF_mindustry_entities_units_AIController_timerTarget3;
jint SF_mindustry_entities_units_AIController_timerTarget4;

void mark_mindustry_entities_units_AIController(jobject object, jint mark, jint depth) {
	if (!object) {
		if (SF_mindustry_entities_units_AIController_vec)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_entities_units_AIController_vec)->clazz)->markFunction)((jobject) SF_mindustry_entities_units_AIController_vec, mark, depth + 1);
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
	auto self = (mindustry_entities_units_AIController *) object;
	if (self->F_unit)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_unit)->clazz)->markFunction)((jobject) self->F_unit, mark, depth + 1);
	if (self->F_timer)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_timer)->clazz)->markFunction)((jobject) self->F_timer, mark, depth + 1);
	if (self->F_fallback)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_fallback)->clazz)->markFunction)((jobject) self->F_fallback, mark, depth + 1);
	if (self->F_target)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_target)->clazz)->markFunction)((jobject) self->F_target, mark, depth + 1);
	if (self->F_bomberTarget)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_bomberTarget)->clazz)->markFunction)((jobject) self->F_bomberTarget, mark, depth + 1);
}

void init_mindustry_entities_units_AIController(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/units/AIController:<init>", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_entities_units_AIController(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(20);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(26);
	sp[0].o = frame[0].o;
	clinit_arc_util_Interval(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_util_Interval);
	init_arc_util_Interval_int(ctx, sp[1].o, (jint(4)));
	((mindustry_entities_units_AIController *) NULL_CHECK(sp[0].o))->F_timer = (jref) sp[1].o;
	LINE_NUMBER(36);
	((func_mindustry_entities_units_AIController_resetTimers) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_entities_units_AIController_resetTimers])(ctx, (frame[0].o));
	LINE_NUMBER(26);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_entities_units_AIController_resetTimers(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/units/AIController:resetTimers", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(40);
	sp[0].o = (jobject)((mindustry_entities_units_AIController *) NULL_CHECK((frame[0].o)))->F_timer;
	jint temp0 = jint(0);
	jfloat temp1 = (jfloat)SM_arc_math_Mathf_random_float_R_float(ctx, (jfloat(40.0f)));
	((func_arc_util_Interval_reset_int_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_util_Interval_reset_int_float])(ctx, sp[0].o, temp0, temp1);
	LINE_NUMBER(41);
	sp[0].o = (jobject)((mindustry_entities_units_AIController *) NULL_CHECK((frame[0].o)))->F_timer;
	jint temp2 = jint(1);
	jfloat temp3 = (jfloat)SM_arc_math_Mathf_random_float_R_float(ctx, (jfloat(60.0f)));
	((func_arc_util_Interval_reset_int_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_util_Interval_reset_int_float])(ctx, sp[0].o, temp2, temp3);
	LINE_NUMBER(42);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_entities_units_AIController_updateUnit(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/units/AIController:updateUnit", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(47);
	jint temp0 = (jint)((func_mindustry_entities_units_AIController_useFallback_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_entities_units_AIController_useFallback_R_boolean])(ctx, (frame[0].o));
	if (temp0 == 0) goto label_1;
	}
	{
	sp[0].o = (jobject)((mindustry_entities_units_AIController *) NULL_CHECK((frame[0].o)))->F_fallback;
	if (sp[0].o != nullptr) goto label_2;
	}
	{
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((func_mindustry_entities_units_AIController_fallback_R_mindustry_entities_units_AIController) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_entities_units_AIController_fallback_R_mindustry_entities_units_AIController])(ctx, (frame[0].o));
	((mindustry_entities_units_AIController *) NULL_CHECK(sp[0].o))->F_fallback = (jref) sp[1].o;
	if (sp[1].o == nullptr) goto label_1;
	}
label_2:;
	{
	LINE_NUMBER(48);
	sp[0].o = (jobject)((mindustry_entities_units_AIController *) NULL_CHECK((frame[0].o)))->F_fallback;
	sp[0].o = (jobject)((mindustry_entities_units_AIController *) NULL_CHECK(sp[0].o))->F_unit;
	sp[1].o = (jobject)((mindustry_entities_units_AIController *) NULL_CHECK((frame[0].o)))->F_unit;
	if (sp[0].o == sp[1].o) goto label_3;
	}
	{
	sp[0].o = (jobject)((mindustry_entities_units_AIController *) NULL_CHECK((frame[0].o)))->F_fallback;
	sp[1].o = (jobject)((mindustry_entities_units_AIController *) NULL_CHECK((frame[0].o)))->F_unit;
	((func_mindustry_entities_units_AIController_unit_mindustry_gen_Unit) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_entities_units_AIController_unit_mindustry_gen_Unit])(ctx, sp[0].o, sp[1].o);
	}
label_3:;
	{
	LINE_NUMBER(49);
	sp[0].o = (jobject)((mindustry_entities_units_AIController *) NULL_CHECK((frame[0].o)))->F_fallback;
	((func_mindustry_entities_units_AIController_updateUnit) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_entities_units_AIController_updateUnit])(ctx, sp[0].o);
	LINE_NUMBER(50);
	popStackFrame(ctx);
	return;
	}
label_1:;
	{
	LINE_NUMBER(53);
	((func_mindustry_entities_units_AIController_updateVisuals) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_entities_units_AIController_updateVisuals])(ctx, (frame[0].o));
	LINE_NUMBER(54);
	((func_mindustry_entities_units_AIController_updateTargeting) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_entities_units_AIController_updateTargeting])(ctx, (frame[0].o));
	LINE_NUMBER(55);
	((func_mindustry_entities_units_AIController_updateMovement) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_entities_units_AIController_updateMovement])(ctx, (frame[0].o));
	LINE_NUMBER(56);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jbool M_mindustry_entities_units_AIController_hasStance_mindustry_ai_UnitStance_R_boolean(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/units/AIController:hasStance", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(59);
	sp[0].o = (jobject)((mindustry_entities_units_AIController *) NULL_CHECK((frame[0].o)))->F_unit;
	sp[0].o = (jobject)((func_mindustry_gen_Unit_controller_R_mindustry_entities_units_UnitController) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_gen_Unit_controller_R_mindustry_entities_units_UnitController])(ctx, sp[0].o);
	frame[3].o = sp[0].o;
	if ((isInstance(ctx, (frame[3].o), &class_mindustry_ai_types_CommandAI)) == 0) goto label_1;
	}
	{
	frame[2].o = (checkCast(ctx, &class_mindustry_ai_types_CommandAI, (frame[3].o)));
	LINE_NUMBER(60);
	jint temp0 = (jint)((func_mindustry_ai_types_CommandAI_hasStance_mindustry_ai_UnitStance_R_boolean) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_mindustry_ai_types_CommandAI_hasStance_mindustry_ai_UnitStance_R_boolean])(ctx, (frame[2].o), (frame[1].o));
	popStackFrame(ctx);
	return temp0;
	}
label_1:;
	{
	LINE_NUMBER(62);
	popStackFrame(ctx);
	return (jint(0));
	}

	popStackFrame(ctx);
}

void M_mindustry_entities_units_AIController_stanceChanged(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[1];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/units/AIController:stanceChanged", 1 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	LINE_NUMBER(66);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jbool M_mindustry_entities_units_AIController_keepState_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/units/AIController:keepState", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(73);
	popStackFrame(ctx);
	return (jint(0));
	}

	popStackFrame(ctx);
}

void M_mindustry_entities_units_AIController_afterRead_mindustry_gen_Unit(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/units/AIController:afterRead", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	LINE_NUMBER(79);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jbool M_mindustry_entities_units_AIController_isLogicControllable_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/units/AIController:isLogicControllable", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(83);
	popStackFrame(ctx);
	return (jint(1));
	}

	popStackFrame(ctx);
}

void M_mindustry_entities_units_AIController_stopShooting(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/units/AIController:stopShooting", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(87);
	sp[0].o = (jobject)((mindustry_entities_units_AIController *) NULL_CHECK((frame[0].o)))->F_unit;
	sp[0].o = (jobject)((mindustry_gen_Unit *) NULL_CHECK(sp[0].o))->F_mounts;
	frame[1].o = sp[0].o;
	frame[2].i = (((jarray) nullCheck(ctx, (frame[1].o)))->length);
	frame[3].i = (jint(0));
	}
label_1:;
	{
	if ((frame[3].i) >= (frame[2].i)) goto label_2;
	}
	{
	frame[4].o = ((jobject)ARRAY_ACCESS(jobject, (frame[1].o), (frame[3].i)));
	LINE_NUMBER(89);
	((mindustry_entities_units_WeaponMount *) NULL_CHECK((frame[4].o)))->F_shoot = (jint(0));
	LINE_NUMBER(87);
	INST_IINC(3, 1);
	goto label_1;
	}
label_2:;
	LINE_NUMBER(91);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jobject M_mindustry_entities_units_AIController_fallback_R_mindustry_entities_units_AIController(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/units/AIController:fallback", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(95);
	popStackFrame(ctx);
	return (jobject(nullptr));
	}

	popStackFrame(ctx);
}

jbool M_mindustry_entities_units_AIController_useFallback_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/units/AIController:useFallback", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(99);
	popStackFrame(ctx);
	return (jint(0));
	}

	popStackFrame(ctx);
}

void M_mindustry_entities_units_AIController_updateVisuals(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/units/AIController:updateVisuals", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(103);
	sp[0].o = (jobject)((mindustry_entities_units_AIController *) NULL_CHECK((frame[0].o)))->F_unit;
	jint temp0 = (jint)((func_mindustry_gen_Unit_isFlying_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_gen_Unit_isFlying_R_boolean])(ctx, sp[0].o);
	if (temp0 == 0) goto label_1;
	}
	{
	LINE_NUMBER(104);
	sp[0].o = (jobject)((mindustry_entities_units_AIController *) NULL_CHECK((frame[0].o)))->F_unit;
	sp[0].o = (jobject)((mindustry_gen_Unit *) NULL_CHECK(sp[0].o))->F_type;
	if (((jint)((mindustry_type_UnitType *) NULL_CHECK(sp[0].o))->F_wobble) == 0) goto label_3;
	}
	{
	sp[0].o = (jobject)((mindustry_entities_units_AIController *) NULL_CHECK((frame[0].o)))->F_unit;
	((func_mindustry_gen_Unit_wobble) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_gen_Unit_wobble])(ctx, sp[0].o);
	}
label_3:;
	{
	LINE_NUMBER(106);
	sp[0].o = (jobject)((mindustry_entities_units_AIController *) NULL_CHECK((frame[0].o)))->F_unit;
	sp[1].o = (jobject)((mindustry_entities_units_AIController *) NULL_CHECK((frame[0].o)))->F_unit;
	jfloat temp0 = (jfloat)((func_mindustry_gen_Unit_prefRotation_R_float) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_mindustry_gen_Unit_prefRotation_R_float])(ctx, sp[1].o);
	((func_mindustry_gen_Unit_lookAt_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_gen_Unit_lookAt_float])(ctx, sp[0].o, temp0);
	}
label_1:;
	LINE_NUMBER(108);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_entities_units_AIController_updateMovement(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[1];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/units/AIController:updateMovement", 1 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	LINE_NUMBER(112);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_entities_units_AIController_updateTargeting(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/units/AIController:updateTargeting", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(115);
	sp[0].o = (jobject)((mindustry_entities_units_AIController *) NULL_CHECK((frame[0].o)))->F_unit;
	jint temp0 = (jint)((func_mindustry_gen_Unit_hasWeapons_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_gen_Unit_hasWeapons_R_boolean])(ctx, sp[0].o);
	if (temp0 == 0) goto label_1;
	}
	{
	LINE_NUMBER(116);
	((func_mindustry_entities_units_AIController_updateWeapons) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_entities_units_AIController_updateWeapons])(ctx, (frame[0].o));
	}
label_1:;
	LINE_NUMBER(118);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_entities_units_AIController_faceTarget(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/units/AIController:faceTarget", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(122);
	sp[0].o = (jobject)((mindustry_entities_units_AIController *) NULL_CHECK((frame[0].o)))->F_unit;
	sp[0].o = (jobject)((mindustry_gen_Unit *) NULL_CHECK(sp[0].o))->F_type;
	if (((jint)((mindustry_type_UnitType *) NULL_CHECK(sp[0].o))->F_omniMovement) != 0) goto label_1;
	}
	{
	sp[0].o = (jobject)((mindustry_entities_units_AIController *) NULL_CHECK((frame[0].o)))->F_unit;
	if ((isInstance(ctx, sp[0].o, &class_mindustry_gen_Mechc)) == 0) goto label_2;
	}
label_1:;
	{
	LINE_NUMBER(123);
	sp[0].o = (jobject)((mindustry_entities_units_AIController *) NULL_CHECK((frame[0].o)))->F_target;
	sp[1].o = (jobject)((mindustry_entities_units_AIController *) NULL_CHECK((frame[0].o)))->F_unit;
	sp[2].o = (jobject)((mindustry_entities_units_AIController *) NULL_CHECK((frame[0].o)))->F_unit;
	jfloat temp0 = (jfloat)((func_mindustry_gen_Unit_range_R_float) ((void **) nullCheck(ctx, sp[2].o)->vtable)[VTABLE_mindustry_gen_Unit_range_R_float])(ctx, sp[2].o);
	jint temp1 = (jint)SM_mindustry_entities_Units_invalidateTarget_mindustry_gen_Teamc_mindustry_gen_Unit_float_R_boolean(ctx, sp[0].o, sp[1].o, temp0);
	if (temp1 != 0) goto label_3;
	}
	{
	sp[0].o = (jobject)((mindustry_entities_units_AIController *) NULL_CHECK((frame[0].o)))->F_unit;
	sp[0].o = (jobject)((mindustry_gen_Unit *) NULL_CHECK(sp[0].o))->F_type;
	if (((jint)((mindustry_type_UnitType *) NULL_CHECK(sp[0].o))->F_faceTarget) == 0) goto label_3;
	}
	{
	sp[0].o = (jobject)((mindustry_entities_units_AIController *) NULL_CHECK((frame[0].o)))->F_unit;
	sp[0].o = (jobject)((mindustry_gen_Unit *) NULL_CHECK(sp[0].o))->F_type;
	jint temp0 = (jint)((func_mindustry_type_UnitType_hasWeapons_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_type_UnitType_hasWeapons_R_boolean])(ctx, sp[0].o);
	if (temp0 == 0) goto label_3;
	}
	{
	LINE_NUMBER(124);
	sp[0].o = (jobject)((mindustry_entities_units_AIController *) NULL_CHECK((frame[0].o)))->F_unit;
	sp[1].o = (jobject)((mindustry_entities_units_AIController *) NULL_CHECK((frame[0].o)))->F_unit;
	sp[2].o = (jobject)((mindustry_entities_units_AIController *) NULL_CHECK((frame[0].o)))->F_target;
	sp[3].o = (jobject)((mindustry_entities_units_AIController *) NULL_CHECK((frame[0].o)))->F_unit;
	sp[3].o = (jobject)((mindustry_gen_Unit *) NULL_CHECK(sp[3].o))->F_type;
	sp[3].o = (jobject)((mindustry_type_UnitType *) NULL_CHECK(sp[3].o))->F_weapons;
	sp[3].o = (jobject)((func_arc_struct_Seq_first_R_java_lang_Object) ((void **) nullCheck(ctx, sp[3].o)->vtable)[VTABLE_arc_struct_Seq_first_R_java_lang_Object])(ctx, sp[3].o);
	sp[3].o = (jobject)((mindustry_type_Weapon *) NULL_CHECK((checkCast(ctx, &class_mindustry_type_Weapon, sp[3].o))))->F_bullet;
	sp[1].o = (jobject)SM_mindustry_entities_Predict_intercept_arc_math_geom_Position_arc_math_geom_Position_mindustry_entities_bullet_BulletType_R_arc_math_geom_Vec2(ctx, sp[1].o, sp[2].o, sp[3].o);
	((func_mindustry_gen_Unit_lookAt_arc_math_geom_Position) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_gen_Unit_lookAt_arc_math_geom_Position])(ctx, sp[0].o, sp[1].o);
	goto label_2;
	}
label_3:;
	{
	LINE_NUMBER(125);
	sp[0].o = (jobject)((mindustry_entities_units_AIController *) NULL_CHECK((frame[0].o)))->F_unit;
	jint temp0 = (jint)((func_mindustry_gen_Unit_moving_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_gen_Unit_moving_R_boolean])(ctx, sp[0].o);
	if (temp0 == 0) goto label_2;
	}
	{
	LINE_NUMBER(126);
	sp[0].o = (jobject)((mindustry_entities_units_AIController *) NULL_CHECK((frame[0].o)))->F_unit;
	sp[1].o = (jobject)((mindustry_entities_units_AIController *) NULL_CHECK((frame[0].o)))->F_unit;
	sp[1].o = (jobject)((func_mindustry_gen_Unit_vel_R_arc_math_geom_Vec2) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_mindustry_gen_Unit_vel_R_arc_math_geom_Vec2])(ctx, sp[1].o);
	jfloat temp0 = (jfloat)((func_arc_math_geom_Vec2_angle_R_float) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_math_geom_Vec2_angle_R_float])(ctx, sp[1].o);
	((func_mindustry_gen_Unit_lookAt_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_gen_Unit_lookAt_float])(ctx, sp[0].o, temp0);
	}
label_2:;
	LINE_NUMBER(129);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_entities_units_AIController_faceMovement(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/units/AIController:faceMovement", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(132);
	sp[0].o = (jobject)((mindustry_entities_units_AIController *) NULL_CHECK((frame[0].o)))->F_unit;
	sp[0].o = (jobject)((mindustry_gen_Unit *) NULL_CHECK(sp[0].o))->F_type;
	if (((jint)((mindustry_type_UnitType *) NULL_CHECK(sp[0].o))->F_omniMovement) != 0) goto label_1;
	}
	{
	sp[0].o = (jobject)((mindustry_entities_units_AIController *) NULL_CHECK((frame[0].o)))->F_unit;
	if ((isInstance(ctx, sp[0].o, &class_mindustry_gen_Mechc)) == 0) goto label_2;
	}
label_1:;
	{
	sp[0].o = (jobject)((mindustry_entities_units_AIController *) NULL_CHECK((frame[0].o)))->F_unit;
	jint temp0 = (jint)((func_mindustry_gen_Unit_moving_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_gen_Unit_moving_R_boolean])(ctx, sp[0].o);
	if (temp0 == 0) goto label_2;
	}
	{
	LINE_NUMBER(133);
	sp[0].o = (jobject)((mindustry_entities_units_AIController *) NULL_CHECK((frame[0].o)))->F_unit;
	sp[1].o = (jobject)((mindustry_entities_units_AIController *) NULL_CHECK((frame[0].o)))->F_unit;
	sp[1].o = (jobject)((func_mindustry_gen_Unit_vel_R_arc_math_geom_Vec2) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_mindustry_gen_Unit_vel_R_arc_math_geom_Vec2])(ctx, sp[1].o);
	jfloat temp0 = (jfloat)((func_arc_math_geom_Vec2_angle_R_float) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_math_geom_Vec2_angle_R_float])(ctx, sp[1].o);
	((func_mindustry_gen_Unit_lookAt_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_gen_Unit_lookAt_float])(ctx, sp[0].o, temp0);
	}
label_2:;
	LINE_NUMBER(135);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jbool M_mindustry_entities_units_AIController_invalid_mindustry_gen_Teamc_R_boolean(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/units/AIController:invalid", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(138);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((mindustry_entities_units_AIController *) NULL_CHECK((frame[0].o)))->F_unit;
	sp[1].o = (jobject)((mindustry_gen_Unit *) NULL_CHECK(sp[1].o))->F_team;
	sp[2].o = (jobject)((mindustry_entities_units_AIController *) NULL_CHECK((frame[0].o)))->F_unit;
	jfloat temp0 = (jfloat)((mindustry_gen_Unit *) NULL_CHECK(sp[2].o))->F_x;
	sp[2].o = (jobject)((mindustry_entities_units_AIController *) NULL_CHECK((frame[0].o)))->F_unit;
	jint temp1 = (jint)SM_mindustry_entities_Units_invalidateTarget_mindustry_gen_Posc_mindustry_game_Team_float_float_R_boolean(ctx, sp[0].o, sp[1].o, temp0, ((jfloat)((mindustry_gen_Unit *) NULL_CHECK(sp[2].o))->F_y));
	popStackFrame(ctx);
	return temp1;
	}

	popStackFrame(ctx);
}

void M_mindustry_entities_units_AIController_pathfind_int(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/units/AIController:pathfind", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(142);
	((func_mindustry_entities_units_AIController_pathfind_int_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_entities_units_AIController_pathfind_int_boolean])(ctx, (frame[0].o), (frame[1].i), (jint(1)));
	LINE_NUMBER(143);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_entities_units_AIController_pathfind_int_boolean(jcontext ctx, jobject self, jint param0, jbool param1) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/units/AIController:pathfind", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(146);
	((func_mindustry_entities_units_AIController_pathfind_int_boolean_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_entities_units_AIController_pathfind_int_boolean_boolean])(ctx, (frame[0].o), (frame[1].i), (frame[2].i), (jint(0)));
	LINE_NUMBER(147);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_entities_units_AIController_pathfind_int_boolean_boolean(jcontext ctx, jobject self, jint param0, jbool param1, jbool param2) {
	NULL_CHECK(self);
	jtype frame[12];
	auto stack = &frame[7];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/units/AIController:pathfind", 12 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].i = param1;
	frame[3].i = param2;
	{
	LINE_NUMBER(150);
	sp[0].o = (jobject)((mindustry_entities_units_AIController *) NULL_CHECK((frame[0].o)))->F_unit;
	sp[0].o = (jobject)((mindustry_gen_Unit *) NULL_CHECK(sp[0].o))->F_type;
	frame[4].i = ((jint)((mindustry_type_UnitType *) NULL_CHECK(sp[0].o))->F_flowfieldPathType);
	LINE_NUMBER(152);
	sp[0].o = (jobject)((mindustry_entities_units_AIController *) NULL_CHECK((frame[0].o)))->F_unit;
	sp[0].o = (jobject)((func_mindustry_gen_Unit_tileOn_R_mindustry_world_Tile) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_gen_Unit_tileOn_R_mindustry_world_Tile])(ctx, sp[0].o);
	frame[5].o = sp[0].o;
	LINE_NUMBER(153);
	if ((frame[5].o) != nullptr) goto label_3;
	}
	popStackFrame(ctx);
	INST_RETURN();
label_3:;
	{
	LINE_NUMBER(154);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_pathfinder;
	sp[1].o = (jobject)((mindustry_entities_units_AIController *) NULL_CHECK((frame[0].o)))->F_unit;
	sp[1].o = (jobject)((mindustry_gen_Unit *) NULL_CHECK(sp[1].o))->F_team;
	sp[0].o = (jobject)((func_mindustry_ai_Pathfinder_getField_mindustry_game_Team_int_int_R_mindustry_ai_Pathfinder$Flowfield) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_ai_Pathfinder_getField_mindustry_game_Team_int_int_R_mindustry_ai_Pathfinder$Flowfield])(ctx, sp[0].o, sp[1].o, (frame[4].i), (frame[1].i));
	sp[1].o = frame[5].o;
	sp += 2;
	if ((frame[3].i) == 0) goto label_4;
	}
	{
	sp[0].o = (jobject)((mindustry_entities_units_AIController *) NULL_CHECK((frame[0].o)))->F_unit;
	jint temp0 = (jint)((func_mindustry_gen_Unit_collisionLayer_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_gen_Unit_collisionLayer_R_int])(ctx, sp[0].o);
	if (temp0 != 0) goto label_4;
	}
	{
	sp[0].o = (jobject)((mindustry_entities_units_AIController *) NULL_CHECK((frame[0].o)))->F_unit;
	jint temp0 = (jint)((mindustry_gen_Unit *) NULL_CHECK(sp[0].o))->F_id;
	sp[0].i = temp0;
	sp += 1;
	goto label_5;
	}
label_4:;
	INST_ICONST(0);
label_5:;
	{
	sp -= 3;
	sp[0].o = (jobject)((func_mindustry_ai_Pathfinder$Flowfield_getNextTile_mindustry_world_Tile_int_R_mindustry_world_Tile) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_ai_Pathfinder$Flowfield_getNextTile_mindustry_world_Tile_int_R_mindustry_world_Tile])(ctx, sp[0].o, sp[1].o, sp[2].i);
	frame[6].o = sp[0].o;
	LINE_NUMBER(156);
	if ((frame[5].o) != (frame[6].o)) goto label_7;
	}
	INST_ILOAD(2);
	if ((--sp)->i != 0) goto label_8;
label_7:;
	{
	sp[0].o = (jobject)((mindustry_entities_units_AIController *) NULL_CHECK((frame[0].o)))->F_unit;
	jint temp0 = (jint)((func_mindustry_gen_Unit_canPass_int_int_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_gen_Unit_canPass_int_int_R_boolean])(ctx, sp[0].o, ((jint)((mindustry_world_Tile *) NULL_CHECK((frame[6].o)))->F_x), ((jint)((mindustry_world_Tile *) NULL_CHECK((frame[6].o)))->F_y));
	if (temp0 != 0) goto label_9;
	}
label_8:;
	popStackFrame(ctx);
	INST_RETURN();
label_9:;
	{
	LINE_NUMBER(160);
	sp[0].o = (jobject)((mindustry_entities_units_AIController *) NULL_CHECK((frame[0].o)))->F_unit;
	clinit_mindustry_entities_units_AIController(ctx);
	sp[1].o = (jobject)SF_mindustry_entities_units_AIController_vec;
	sp[2].o = (jobject)((mindustry_entities_units_AIController *) NULL_CHECK((frame[0].o)))->F_unit;
	jfloat temp0 = (jfloat)((func_mindustry_world_Tile_worldx_R_float) ((void **) nullCheck(ctx, (frame[6].o))->vtable)[VTABLE_mindustry_world_Tile_worldx_R_float])(ctx, (frame[6].o));
	jfloat temp1 = (jfloat)((func_mindustry_world_Tile_worldy_R_float) ((void **) nullCheck(ctx, (frame[6].o))->vtable)[VTABLE_mindustry_world_Tile_worldy_R_float])(ctx, (frame[6].o));
	jfloat temp2 = (jfloat)((func_mindustry_gen_Unit_angleTo_float_float_R_float) ((void **) nullCheck(ctx, sp[2].o)->vtable)[VTABLE_mindustry_gen_Unit_angleTo_float_float_R_float])(ctx, sp[2].o, temp0, temp1);
	jfloat temp3 = (jfloat)((func_mindustry_entities_units_AIController_prefSpeed_R_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_entities_units_AIController_prefSpeed_R_float])(ctx, (frame[0].o));
	sp[1].o = (jobject)((func_arc_math_geom_Vec2_trns_float_float_R_arc_math_geom_Vec2) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_math_geom_Vec2_trns_float_float_R_arc_math_geom_Vec2])(ctx, sp[1].o, temp2, temp3);
	((func_mindustry_gen_Unit_movePref_arc_math_geom_Vec2) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_gen_Unit_movePref_arc_math_geom_Vec2])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(161);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_mindustry_entities_units_AIController_alterPathfind_arc_math_geom_Vec2_R_arc_math_geom_Vec2(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/units/AIController:alterPathfind", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(164);
	popStackFrame(ctx);
	return (frame[1].o);
	}

	popStackFrame(ctx);
}

void M_mindustry_entities_units_AIController_targetInvalidated(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/units/AIController:targetInvalidated", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(169);
	sp[0].o = (jobject)((mindustry_entities_units_AIController *) NULL_CHECK((frame[0].o)))->F_timer;
	((func_arc_util_Interval_reset_int_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_util_Interval_reset_int_float])(ctx, sp[0].o, (jint(0)), (jfloat(-1.0f)));
	LINE_NUMBER(170);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_entities_units_AIController_updateWeapons(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[21];
	auto stack = &frame[14];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/units/AIController:updateWeapons", 21 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(173);
	sp[0].o = (jobject)((mindustry_entities_units_AIController *) NULL_CHECK((frame[0].o)))->F_unit;
	frame[1].f = (((jfloat)((mindustry_gen_Unit *) NULL_CHECK(sp[0].o))->F_rotation) - (jfloat(90.0f)));
	LINE_NUMBER(174);
	jint temp0 = (jint)((func_mindustry_entities_units_AIController_retarget_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_entities_units_AIController_retarget_R_boolean])(ctx, (frame[0].o));
	frame[2].i = temp0;
	LINE_NUMBER(176);
	if ((frame[2].i) == 0) goto label_3;
	}
	{
	LINE_NUMBER(177);
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
	sp[1].o = (jobject)((func_mindustry_entities_units_AIController_findMainTarget_float_float_float_boolean_boolean_R_mindustry_gen_Teamc) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_mindustry_entities_units_AIController_findMainTarget_float_float_float_boolean_boolean_R_mindustry_gen_Teamc])(ctx, sp[1].o, temp0, temp1, temp2, temp3, ((jint)((mindustry_type_UnitType *) NULL_CHECK(sp[2].o))->F_targetGround));
	((mindustry_entities_units_AIController *) NULL_CHECK(sp[0].o))->F_target = (jref) sp[1].o;
	}
label_3:;
	{
	LINE_NUMBER(180);
	sp[0].o = frame[0].o;
	((mindustry_entities_units_AIController *) NULL_CHECK(sp[0].o))->F_noTargetTime = (((jfloat)((mindustry_entities_units_AIController *) NULL_CHECK(sp[0].o))->F_noTargetTime) + (clinit_arc_util_Time(ctx), (jfloat)SF_arc_util_Time_delta));
	LINE_NUMBER(182);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((mindustry_entities_units_AIController *) NULL_CHECK((frame[0].o)))->F_target;
	jint temp0 = (jint)((func_mindustry_entities_units_AIController_invalid_mindustry_gen_Teamc_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_entities_units_AIController_invalid_mindustry_gen_Teamc_R_boolean])(ctx, sp[0].o, sp[1].o);
	if (temp0 == 0) goto label_6;
	}
	{
	LINE_NUMBER(183);
	sp[0].o = (jobject)((mindustry_entities_units_AIController *) NULL_CHECK((frame[0].o)))->F_target;
	frame[4].o = sp[0].o;
	if ((isInstance(ctx, (frame[4].o), &class_mindustry_gen_Healthc)) == 0) goto label_8;
	}
	{
	frame[3].o = (checkCast(ctx, &class_mindustry_gen_Healthc, (frame[4].o)));
	jint temp0 = (jint)((func_mindustry_gen_Healthc_isValid_R_boolean) resolveInterfaceMethod(ctx, &class_mindustry_gen_Healthc, INDEX_mindustry_gen_Healthc_isValid_R_boolean, (frame[3].o)))(ctx, (frame[3].o));
	if (temp0 != 0) goto label_8;
	}
	{
	LINE_NUMBER(184);
	((func_mindustry_entities_units_AIController_targetInvalidated) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_entities_units_AIController_targetInvalidated])(ctx, (frame[0].o));
	}
label_8:;
	{
	LINE_NUMBER(186);
	((mindustry_entities_units_AIController *) NULL_CHECK((frame[0].o)))->F_target = (jref) (jobject(nullptr));
	goto label_11;
	}
label_6:;
	{
	LINE_NUMBER(188);
	((mindustry_entities_units_AIController *) NULL_CHECK((frame[0].o)))->F_noTargetTime = (jfloat(0));
	}
label_11:;
	{
	LINE_NUMBER(191);
	sp[0].o = (jobject)((mindustry_entities_units_AIController *) NULL_CHECK((frame[0].o)))->F_unit;
	((mindustry_gen_Unit *) NULL_CHECK(sp[0].o))->F_isShooting = (jint(0));
	LINE_NUMBER(193);
	sp[0].o = (jobject)((mindustry_entities_units_AIController *) NULL_CHECK((frame[0].o)))->F_unit;
	sp[0].o = (jobject)((mindustry_gen_Unit *) NULL_CHECK(sp[0].o))->F_mounts;
	frame[3].o = sp[0].o;
	frame[4].i = (((jarray) nullCheck(ctx, (frame[3].o)))->length);
	frame[5].i = (jint(0));
	}
label_13:;
	{
	if ((frame[5].i) >= (frame[4].i)) goto label_14;
	}
	{
	frame[6].o = ((jobject)ARRAY_ACCESS(jobject, (frame[3].o), (frame[5].i)));
	LINE_NUMBER(194);
	sp[0].o = (jobject)((mindustry_entities_units_WeaponMount *) NULL_CHECK((frame[6].o)))->F_weapon;
	frame[7].o = sp[0].o;
	LINE_NUMBER(195);
	jfloat temp0 = (jfloat)((func_mindustry_type_Weapon_range_R_float) ((void **) nullCheck(ctx, (frame[7].o))->vtable)[VTABLE_mindustry_type_Weapon_range_R_float])(ctx, (frame[7].o));
	frame[8].f = temp0;
	LINE_NUMBER(198);
	if (((jint)((mindustry_type_Weapon *) NULL_CHECK((frame[7].o)))->F_controllable) == 0) goto label_18;
	}
	{
	if (((jint)((mindustry_type_Weapon *) NULL_CHECK((frame[7].o)))->F_noAttack) == 0) goto label_19;
	}
	goto label_18;
label_19:;
	{
	LINE_NUMBER(200);
	if (((jint)((mindustry_type_Weapon *) NULL_CHECK((frame[7].o)))->F_aiControllable) != 0) goto label_20;
	}
	{
	LINE_NUMBER(201);
	((mindustry_entities_units_WeaponMount *) NULL_CHECK((frame[6].o)))->F_rotate = (jint(0));
	LINE_NUMBER(202);
	goto label_18;
	}
label_20:;
	{
	LINE_NUMBER(205);
	sp[0].o = (jobject)((mindustry_entities_units_AIController *) NULL_CHECK((frame[0].o)))->F_unit;
	jfloat temp0 = (jfloat)((mindustry_gen_Unit *) NULL_CHECK(sp[0].o))->F_x;
	jfloat temp1 = (jfloat)SM_arc_math_Angles_trnsx_float_float_float_R_float(ctx, (frame[1].f), ((jfloat)((mindustry_type_Weapon *) NULL_CHECK((frame[7].o)))->F_x), ((jfloat)((mindustry_type_Weapon *) NULL_CHECK((frame[7].o)))->F_y));
	frame[9].f = (temp0 + temp1);
	LINE_NUMBER(206);
	sp[0].o = (jobject)((mindustry_entities_units_AIController *) NULL_CHECK((frame[0].o)))->F_unit;
	jfloat temp2 = (jfloat)((mindustry_gen_Unit *) NULL_CHECK(sp[0].o))->F_y;
	jfloat temp3 = (jfloat)SM_arc_math_Angles_trnsy_float_float_float_R_float(ctx, (frame[1].f), ((jfloat)((mindustry_type_Weapon *) NULL_CHECK((frame[7].o)))->F_x), ((jfloat)((mindustry_type_Weapon *) NULL_CHECK((frame[7].o)))->F_y));
	frame[10].f = (temp2 + temp3);
	LINE_NUMBER(208);
	sp[0].o = (jobject)((mindustry_entities_units_AIController *) NULL_CHECK((frame[0].o)))->F_unit;
	sp[0].o = (jobject)((mindustry_gen_Unit *) NULL_CHECK(sp[0].o))->F_type;
	if (((jint)((mindustry_type_UnitType *) NULL_CHECK(sp[0].o))->F_singleTarget) == 0) goto label_25;
	}
	{
	LINE_NUMBER(209);
	sp[0].o = frame[6].o;
	sp[1].o = (jobject)((mindustry_entities_units_AIController *) NULL_CHECK((frame[0].o)))->F_target;
	((mindustry_entities_units_WeaponMount *) NULL_CHECK(sp[0].o))->F_target = (jref) sp[1].o;
	goto label_27;
	}
label_25:;
	{
	LINE_NUMBER(211);
	if ((frame[2].i) == 0) goto label_28;
	}
	{
	LINE_NUMBER(212);
	sp[0].o = frame[6].o;
	sp[1].o = frame[0].o;
	jfloat temp0 = frame[9].f;
	jfloat temp1 = frame[10].f;
	jfloat temp2 = frame[8].f;
	sp[2].o = (jobject)((mindustry_type_Weapon *) NULL_CHECK((frame[7].o)))->F_bullet;
	jint temp3 = (jint)((mindustry_entities_bullet_BulletType *) NULL_CHECK(sp[2].o))->F_collidesAir;
	sp[2].o = (jobject)((mindustry_type_Weapon *) NULL_CHECK((frame[7].o)))->F_bullet;
	sp[1].o = (jobject)((func_mindustry_entities_units_AIController_findTarget_float_float_float_boolean_boolean_R_mindustry_gen_Teamc) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_mindustry_entities_units_AIController_findTarget_float_float_float_boolean_boolean_R_mindustry_gen_Teamc])(ctx, sp[1].o, temp0, temp1, temp2, temp3, ((jint)((mindustry_entities_bullet_BulletType *) NULL_CHECK(sp[2].o))->F_collidesGround));
	((mindustry_entities_units_WeaponMount *) NULL_CHECK(sp[0].o))->F_target = (jref) sp[1].o;
	}
label_28:;
	{
	LINE_NUMBER(215);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((mindustry_entities_units_WeaponMount *) NULL_CHECK((frame[6].o)))->F_target;
	jint temp0 = (jint)((func_mindustry_entities_units_AIController_checkTarget_mindustry_gen_Teamc_float_float_float_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_entities_units_AIController_checkTarget_mindustry_gen_Teamc_float_float_float_R_boolean])(ctx, sp[0].o, sp[1].o, (frame[9].f), (frame[10].f), (frame[8].f));
	if (temp0 == 0) goto label_27;
	}
	{
	LINE_NUMBER(216);
	((mindustry_entities_units_WeaponMount *) NULL_CHECK((frame[6].o)))->F_target = (jref) (jobject(nullptr));
	}
label_27:;
	{
	LINE_NUMBER(220);
	frame[11].i = (jint(0));
	LINE_NUMBER(222);
	sp[0].o = (jobject)((mindustry_entities_units_WeaponMount *) NULL_CHECK((frame[6].o)))->F_target;
	if (sp[0].o == nullptr) goto label_32;
	}
	{
	LINE_NUMBER(223);
	sp[0].o = (jobject)((mindustry_entities_units_WeaponMount *) NULL_CHECK((frame[6].o)))->F_target;
	jfloat temp0 = frame[9].f;
	jfloat temp1 = frame[10].f;
	jfloat temp2 = frame[8].f;
	sp[1].o = (jobject)((mindustry_entities_units_WeaponMount *) NULL_CHECK((frame[6].o)))->F_target;
	frame[13].o = sp[1].o;
	sp[1].f = temp0;
	sp[2].f = temp1;
	sp[3].f = temp2;
	sp += 4;
	if ((isInstance(ctx, (frame[13].o), &class_mindustry_entities_Sized)) == 0) goto label_34;
	}
	{
	frame[12].o = (checkCast(ctx, &class_mindustry_entities_Sized, (frame[13].o)));
	jfloat temp0 = (jfloat)((func_mindustry_entities_Sized_hitSize_R_float) resolveInterfaceMethod(ctx, &class_mindustry_entities_Sized, INDEX_mindustry_entities_Sized_hitSize_R_float, (frame[12].o)))(ctx, (frame[12].o));
	jfloat temp1 = temp0 / (jfloat(2));
	sp[0].f = temp1;
	sp += 1;
	goto label_36;
	}
label_34:;
	INST_FCONST(0);
label_36:;
	{
	sp -= 5;
	jint temp0 = (jint)((func_arc_math_geom_Position_within_float_float_float_R_boolean) resolveInterfaceMethod(ctx, &class_arc_math_geom_Position, INDEX_arc_math_geom_Position_within_float_float_float_R_boolean, sp[0].o))(ctx, sp[0].o, sp[1].f, sp[2].f, (sp[3].f + sp[4].f));
	if (temp0 == 0) goto label_37;
	}
	{
	jint temp0 = (jint)((func_mindustry_entities_units_AIController_shouldShoot_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_entities_units_AIController_shouldShoot_R_boolean])(ctx, (frame[0].o));
	if (temp0 == 0) goto label_37;
	}
	INST_ICONST(1);
	goto label_38;
label_37:;
	INST_ICONST(0);
label_38:;
	{
	sp -= 1;
	frame[11].i = sp[0].i;
	LINE_NUMBER(225);
	sp[0].o = (jobject)((mindustry_entities_units_AIController *) NULL_CHECK((frame[0].o)))->F_unit;
	sp[0].o = (jobject)((mindustry_gen_Unit *) NULL_CHECK(sp[0].o))->F_type;
	if (((jint)((mindustry_type_UnitType *) NULL_CHECK(sp[0].o))->F_autoDropBombs) == 0) goto label_40;
	}
	INST_ILOAD(11);
	if ((--sp)->i != 0) goto label_40;
	{
	LINE_NUMBER(226);
	sp[0].o = (jobject)((mindustry_entities_units_AIController *) NULL_CHECK((frame[0].o)))->F_bomberTarget;
	if (sp[0].o == nullptr) goto label_42;
	}
	{
	sp[0].o = (jobject)((mindustry_entities_units_AIController *) NULL_CHECK((frame[0].o)))->F_bomberTarget;
	jint temp0 = (jint)((func_mindustry_gen_Entityc_isAdded_R_boolean) resolveInterfaceMethod(ctx, &class_mindustry_gen_Entityc, INDEX_mindustry_gen_Entityc_isAdded_R_boolean, sp[0].o))(ctx, sp[0].o);
	if (temp0 == 0) goto label_42;
	}
	{
	sp[0].o = (jobject)((mindustry_entities_units_AIController *) NULL_CHECK((frame[0].o)))->F_bomberTarget;
	sp[1].o = (jobject)((mindustry_entities_units_AIController *) NULL_CHECK((frame[0].o)))->F_unit;
	sp[2].o = (jobject)((mindustry_entities_units_AIController *) NULL_CHECK((frame[0].o)))->F_unit;
	jfloat temp0 = ((jfloat)((mindustry_gen_Unit *) NULL_CHECK(sp[2].o))->F_hitSize) / (jfloat(2));
	sp[2].o = (jobject)((mindustry_entities_units_AIController *) NULL_CHECK((frame[0].o)))->F_bomberTarget;
	jfloat temp1 = (jfloat)((func_mindustry_entities_Sized_hitSize_R_float) resolveInterfaceMethod(ctx, &class_mindustry_entities_Sized, INDEX_mindustry_entities_Sized_hitSize_R_float, (checkCast(ctx, &class_mindustry_entities_Sized, sp[2].o))))(ctx, (checkCast(ctx, &class_mindustry_entities_Sized, sp[2].o)));
	jint temp2 = (jint)((func_arc_math_geom_Position_within_arc_math_geom_Position_float_R_boolean) resolveInterfaceMethod(ctx, &class_arc_math_geom_Position, INDEX_arc_math_geom_Position_within_arc_math_geom_Position_float_R_boolean, sp[0].o))(ctx, sp[0].o, sp[1].o, (temp0 + (temp1 / (jfloat(2)))));
	if (temp2 != 0) goto label_43;
	}
label_42:;
	{
	LINE_NUMBER(227);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((mindustry_entities_units_AIController *) NULL_CHECK((frame[0].o)))->F_unit;
	sp[1].o = (jobject)((mindustry_gen_Unit *) NULL_CHECK(sp[1].o))->F_team;
	sp[2].o = (jobject)((mindustry_entities_units_AIController *) NULL_CHECK((frame[0].o)))->F_unit;
	jfloat temp0 = (jfloat)((mindustry_gen_Unit *) NULL_CHECK(sp[2].o))->F_x;
	sp[2].o = (jobject)((mindustry_entities_units_AIController *) NULL_CHECK((frame[0].o)))->F_unit;
	jfloat temp1 = (jfloat)((mindustry_gen_Unit *) NULL_CHECK(sp[2].o))->F_y;
	sp[2].o = (jobject)((mindustry_entities_units_AIController *) NULL_CHECK((frame[0].o)))->F_unit;
	jfloat temp2 = (jfloat)((mindustry_gen_Unit *) NULL_CHECK(sp[2].o))->F_hitSize;
	{ /* InvokeDynamic */
		clinit_mindustry_entities_units_AIController_invoke_arc_func_Boolf_5(ctx);
		auto proxy = (mindustry_entities_units_AIController_invoke_arc_func_Boolf_5 *) gcAlloc(ctx, &class_mindustry_entities_units_AIController_invoke_arc_func_Boolf_5);
		sp[2].o = (jobject) proxy;
	}
	{ /* InvokeDynamic */
		clinit_mindustry_entities_units_AIController_invoke_arc_func_Boolf_6(ctx);
		auto proxy = (mindustry_entities_units_AIController_invoke_arc_func_Boolf_6 *) gcAlloc(ctx, &class_mindustry_entities_units_AIController_invoke_arc_func_Boolf_6);
		sp[3].o = (jobject) proxy;
	}
	sp[1].o = (jobject)SM_mindustry_entities_Units_closestTarget_mindustry_game_Team_float_float_float_arc_func_Boolf_arc_func_Boolf_R_mindustry_gen_Teamc(ctx, sp[1].o, temp0, temp1, temp2, sp[2].o, sp[3].o);
	((mindustry_entities_units_AIController *) NULL_CHECK(sp[0].o))->F_bomberTarget = (jref) sp[1].o;
	}
label_43:;
	{
	LINE_NUMBER(229);
	sp[0].o = (jobject)((mindustry_entities_units_AIController *) NULL_CHECK((frame[0].o)))->F_bomberTarget;
	if (sp[0].o == nullptr) goto label_44;
	}
	INST_ICONST(1);
	goto label_45;
label_44:;
	INST_ICONST(0);
label_45:;
	INST_ISTORE(11);
label_40:;
	{
	LINE_NUMBER(232);
	sp[0].o = (jobject)((mindustry_entities_units_AIController *) NULL_CHECK((frame[0].o)))->F_unit;
	sp[1].o = (jobject)((mindustry_entities_units_WeaponMount *) NULL_CHECK((frame[6].o)))->F_target;
	sp[2].o = (jobject)((mindustry_type_Weapon *) NULL_CHECK((frame[7].o)))->F_bullet;
	sp[0].o = (jobject)SM_mindustry_entities_Predict_intercept_arc_math_geom_Position_arc_math_geom_Position_mindustry_entities_bullet_BulletType_R_arc_math_geom_Vec2(ctx, sp[0].o, sp[1].o, sp[2].o);
	frame[12].o = sp[0].o;
	LINE_NUMBER(233);
	((mindustry_entities_units_WeaponMount *) NULL_CHECK((frame[6].o)))->F_aimX = ((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK((frame[12].o)))->F_x);
	LINE_NUMBER(234);
	((mindustry_entities_units_WeaponMount *) NULL_CHECK((frame[6].o)))->F_aimY = ((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK((frame[12].o)))->F_y);
	}
label_32:;
	{
	LINE_NUMBER(237);
	sp[0].o = frame[6].o;
	sp[1].o = frame[6].o;
	jint temp0 = frame[11].i;
	((mindustry_entities_units_WeaponMount *) NULL_CHECK(sp[1].o))->F_rotate = temp0;
	((mindustry_entities_units_WeaponMount *) NULL_CHECK(sp[0].o))->F_shoot = temp0;
	LINE_NUMBER(238);
	jint temp3 = (jint)((func_mindustry_entities_units_AIController_shouldFire_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_entities_units_AIController_shouldFire_R_boolean])(ctx, (frame[0].o));
	if (temp3 != 0) goto label_49;
	}
	{
	LINE_NUMBER(239);
	((mindustry_entities_units_WeaponMount *) NULL_CHECK((frame[6].o)))->F_shoot = (jint(0));
	}
label_49:;
	{
	LINE_NUMBER(242);
	sp[0].o = (jobject)((mindustry_entities_units_AIController *) NULL_CHECK((frame[0].o)))->F_unit;
	((mindustry_gen_Unit *) NULL_CHECK(sp[0].o))->F_isShooting = (((jint)((mindustry_gen_Unit *) NULL_CHECK(sp[0].o))->F_isShooting) | ((jint)((mindustry_entities_units_WeaponMount *) NULL_CHECK((frame[6].o)))->F_shoot));
	LINE_NUMBER(244);
	sp[0].o = (jobject)((mindustry_entities_units_WeaponMount *) NULL_CHECK((frame[6].o)))->F_target;
	if (sp[0].o != nullptr) goto label_52;
	}
	INST_ILOAD(11);
	if ((--sp)->i != 0) goto label_52;
	{
	jfloat temp0 = (jfloat)((mindustry_entities_units_WeaponMount *) NULL_CHECK((frame[6].o)))->F_rotation;
	sp[0].o = (jobject)((mindustry_entities_units_WeaponMount *) NULL_CHECK((frame[6].o)))->F_weapon;
	jint temp1 = (jint)SM_arc_math_Angles_within_float_float_float_R_boolean(ctx, temp0, ((jfloat)((mindustry_type_Weapon *) NULL_CHECK(sp[0].o))->F_baseRotation), (jfloat(1,000000e-02f)));
	if (temp1 != 0) goto label_52;
	}
	{
	if ((floatCompare(((jfloat)((mindustry_entities_units_AIController *) NULL_CHECK((frame[0].o)))->F_noTargetTime), (jfloat(300.0f)), -1)) < 0) goto label_52;
	}
	{
	LINE_NUMBER(245);
	((mindustry_entities_units_WeaponMount *) NULL_CHECK((frame[6].o)))->F_rotate = (jint(1));
	LINE_NUMBER(246);
	clinit_arc_util_Tmp(ctx);
	sp[0].o = (jobject)SF_arc_util_Tmp_v1;
	sp[1].o = (jobject)((mindustry_entities_units_AIController *) NULL_CHECK((frame[0].o)))->F_unit;
	jfloat temp0 = (jfloat)((mindustry_gen_Unit *) NULL_CHECK(sp[1].o))->F_rotation;
	sp[1].o = (jobject)((mindustry_entities_units_WeaponMount *) NULL_CHECK((frame[6].o)))->F_weapon;
	sp[0].o = (jobject)((func_arc_math_geom_Vec2_trns_float_float_R_arc_math_geom_Vec2) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Vec2_trns_float_float_R_arc_math_geom_Vec2])(ctx, sp[0].o, (temp0 + ((jfloat)((mindustry_type_Weapon *) NULL_CHECK(sp[1].o))->F_baseRotation)), (jfloat(5.0f)));
	LINE_NUMBER(247);
	sp[0].o = frame[6].o;
	jfloat temp1 = frame[9].f;
	clinit_arc_util_Tmp(ctx);
	sp[1].o = (jobject)SF_arc_util_Tmp_v1;
	((mindustry_entities_units_WeaponMount *) NULL_CHECK(sp[0].o))->F_aimX = (temp1 + ((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK(sp[1].o))->F_x));
	LINE_NUMBER(248);
	sp[0].o = frame[6].o;
	jfloat temp2 = frame[10].f;
	clinit_arc_util_Tmp(ctx);
	sp[1].o = (jobject)SF_arc_util_Tmp_v1;
	((mindustry_entities_units_WeaponMount *) NULL_CHECK(sp[0].o))->F_aimY = (temp2 + ((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK(sp[1].o))->F_y));
	}
label_52:;
	{
	LINE_NUMBER(251);
	if ((frame[11].i) == 0) goto label_18;
	}
	{
	LINE_NUMBER(252);
	sp[0].o = (jobject)((mindustry_entities_units_AIController *) NULL_CHECK((frame[0].o)))->F_unit;
	((mindustry_gen_Unit *) NULL_CHECK(sp[0].o))->F_aimX = ((jfloat)((mindustry_entities_units_WeaponMount *) NULL_CHECK((frame[6].o)))->F_aimX);
	LINE_NUMBER(253);
	sp[0].o = (jobject)((mindustry_entities_units_AIController *) NULL_CHECK((frame[0].o)))->F_unit;
	((mindustry_gen_Unit *) NULL_CHECK(sp[0].o))->F_aimY = ((jfloat)((mindustry_entities_units_WeaponMount *) NULL_CHECK((frame[6].o)))->F_aimY);
	}
label_18:;
	{
	LINE_NUMBER(193);
	INST_IINC(5, 1);
	goto label_13;
	}
label_14:;
	LINE_NUMBER(256);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jbool M_mindustry_entities_units_AIController_checkTarget_mindustry_gen_Teamc_float_float_float_R_boolean(jcontext ctx, jobject self, jobject param0, jfloat param1, jfloat param2, jfloat param3) {
	NULL_CHECK(self);
	jtype frame[10];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/units/AIController:checkTarget", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].f = param1;
	frame[3].f = param2;
	frame[4].f = param3;
	{
	LINE_NUMBER(259);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((mindustry_entities_units_AIController *) NULL_CHECK((frame[0].o)))->F_unit;
	sp[1].o = (jobject)((mindustry_gen_Unit *) NULL_CHECK(sp[1].o))->F_team;
	jint temp0 = (jint)SM_mindustry_entities_Units_invalidateTarget_mindustry_gen_Posc_mindustry_game_Team_float_float_float_R_boolean(ctx, sp[0].o, sp[1].o, (frame[2].f), (frame[3].f), (frame[4].f));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jbool M_mindustry_entities_units_AIController_shouldFire_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/units/AIController:shouldFire", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(264);
	popStackFrame(ctx);
	return (jint(1));
	}

	popStackFrame(ctx);
}

jbool M_mindustry_entities_units_AIController_shouldShoot_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/units/AIController:shouldShoot", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(268);
	popStackFrame(ctx);
	return (jint(1));
	}

	popStackFrame(ctx);
}

jobject M_mindustry_entities_units_AIController_targetFlag_float_float_mindustry_world_meta_BlockFlag_boolean_R_mindustry_gen_Teamc(jcontext ctx, jobject self, jfloat param0, jfloat param1, jobject param2, jbool param3) {
	NULL_CHECK(self);
	jtype frame[10];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/units/AIController:targetFlag", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	frame[2].f = param1;
	frame[3].o = param2;
	frame[4].i = param3;
	{
	LINE_NUMBER(272);
	sp[0].o = (jobject)((mindustry_entities_units_AIController *) NULL_CHECK((frame[0].o)))->F_unit;
	sp[0].o = (jobject)((mindustry_gen_Unit *) NULL_CHECK(sp[0].o))->F_team;
	clinit_mindustry_game_Team(ctx);
	sp[1].o = (jobject)SF_mindustry_game_Team_derelict;
	if (sp[0].o != sp[1].o) goto label_1;
	}
	INST_ACONST_NULL();
	popStackFrame(ctx);
	INST_ARETURN();
label_1:;
	{
	LINE_NUMBER(273);
	jfloat temp0 = frame[1].f;
	jfloat temp1 = frame[2].f;
	sp[0].f = temp0;
	sp[1].f = temp1;
	sp += 2;
	if ((frame[4].i) == 0) goto label_2;
	}
	{
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_indexer;
	sp[1].o = (jobject)((mindustry_entities_units_AIController *) NULL_CHECK((frame[0].o)))->F_unit;
	sp[1].o = (jobject)((mindustry_gen_Unit *) NULL_CHECK(sp[1].o))->F_team;
	sp[0].o = (jobject)((func_mindustry_ai_BlockIndexer_getEnemy_mindustry_game_Team_mindustry_world_meta_BlockFlag_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_ai_BlockIndexer_getEnemy_mindustry_game_Team_mindustry_world_meta_BlockFlag_R_arc_struct_Seq])(ctx, sp[0].o, sp[1].o, (frame[3].o));
	sp += 1;
	goto label_3;
	}
label_2:;
	{
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_indexer;
	sp[1].o = (jobject)((mindustry_entities_units_AIController *) NULL_CHECK((frame[0].o)))->F_unit;
	sp[1].o = (jobject)((mindustry_gen_Unit *) NULL_CHECK(sp[1].o))->F_team;
	sp[0].o = (jobject)((func_mindustry_ai_BlockIndexer_getFlagged_mindustry_game_Team_mindustry_world_meta_BlockFlag_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_ai_BlockIndexer_getFlagged_mindustry_game_Team_mindustry_world_meta_BlockFlag_R_arc_struct_Seq])(ctx, sp[0].o, sp[1].o, (frame[3].o));
	sp += 1;
	}
label_3:;
	{
	sp -= 3;
	sp[0].o = (jobject)SM_arc_math_geom_Geometry_findClosest_float_float_java_lang_Iterable_R_arc_math_geom_Position(ctx, sp[0].f, sp[1].f, sp[2].o);
	popStackFrame(ctx);
	return (checkCast(ctx, &class_mindustry_gen_Teamc, sp[0].o));
	}

	popStackFrame(ctx);
}

jobject M_mindustry_entities_units_AIController_targetFlagActive_float_float_mindustry_world_meta_BlockFlag_boolean_R_mindustry_gen_Teamc(jcontext ctx, jobject self, jfloat param0, jfloat param1, jobject param2, jbool param3) {
	NULL_CHECK(self);
	jtype frame[10];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/units/AIController:targetFlagActive", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	frame[2].f = param1;
	frame[3].o = param2;
	frame[4].i = param3;
	{
	LINE_NUMBER(277);
	sp[0].o = (jobject)((mindustry_entities_units_AIController *) NULL_CHECK((frame[0].o)))->F_unit;
	sp[0].o = (jobject)((mindustry_gen_Unit *) NULL_CHECK(sp[0].o))->F_team;
	clinit_mindustry_game_Team(ctx);
	sp[1].o = (jobject)SF_mindustry_game_Team_derelict;
	if (sp[0].o != sp[1].o) goto label_1;
	}
	INST_ACONST_NULL();
	popStackFrame(ctx);
	INST_ARETURN();
label_1:;
	{
	LINE_NUMBER(278);
	jfloat temp0 = frame[1].f;
	jfloat temp1 = frame[2].f;
	sp[0].f = temp0;
	sp[1].f = temp1;
	sp += 2;
	if ((frame[4].i) == 0) goto label_2;
	}
	{
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_indexer;
	sp[1].o = (jobject)((mindustry_entities_units_AIController *) NULL_CHECK((frame[0].o)))->F_unit;
	sp[1].o = (jobject)((mindustry_gen_Unit *) NULL_CHECK(sp[1].o))->F_team;
	sp[0].o = (jobject)((func_mindustry_ai_BlockIndexer_getEnemy_mindustry_game_Team_mindustry_world_meta_BlockFlag_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_ai_BlockIndexer_getEnemy_mindustry_game_Team_mindustry_world_meta_BlockFlag_R_arc_struct_Seq])(ctx, sp[0].o, sp[1].o, (frame[3].o));
	sp += 1;
	goto label_3;
	}
label_2:;
	{
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_indexer;
	sp[1].o = (jobject)((mindustry_entities_units_AIController *) NULL_CHECK((frame[0].o)))->F_unit;
	sp[1].o = (jobject)((mindustry_gen_Unit *) NULL_CHECK(sp[1].o))->F_team;
	sp[0].o = (jobject)((func_mindustry_ai_BlockIndexer_getFlagged_mindustry_game_Team_mindustry_world_meta_BlockFlag_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_ai_BlockIndexer_getFlagged_mindustry_game_Team_mindustry_world_meta_BlockFlag_R_arc_struct_Seq])(ctx, sp[0].o, sp[1].o, (frame[3].o));
	sp += 1;
	}
label_3:;
	{
	sp -= 3;
	{ /* InvokeDynamic */
		clinit_mindustry_entities_units_AIController_invoke_arc_func_Boolf_7(ctx);
		auto proxy = (mindustry_entities_units_AIController_invoke_arc_func_Boolf_7 *) gcAlloc(ctx, &class_mindustry_entities_units_AIController_invoke_arc_func_Boolf_7);
		sp[3].o = (jobject) proxy;
	}
	sp[0].o = (jobject)SM_arc_math_geom_Geometry_findClosest_float_float_java_lang_Iterable_arc_func_Boolf_R_arc_math_geom_Position(ctx, sp[0].f, sp[1].f, sp[2].o, sp[3].o);
	popStackFrame(ctx);
	return (checkCast(ctx, &class_mindustry_gen_Teamc, sp[0].o));
	}

	popStackFrame(ctx);
}

jobject M_mindustry_entities_units_AIController_target_float_float_float_boolean_boolean_R_mindustry_gen_Teamc(jcontext ctx, jobject self, jfloat param0, jfloat param1, jfloat param2, jbool param3, jbool param4) {
	NULL_CHECK(self);
	jtype frame[13];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/units/AIController:target", 13 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	frame[2].f = param1;
	frame[3].f = param2;
	frame[4].i = param3;
	frame[5].i = param4;
	{
	LINE_NUMBER(282);
	sp[0].o = (jobject)((mindustry_entities_units_AIController *) NULL_CHECK((frame[0].o)))->F_unit;
	sp[0].o = (jobject)((mindustry_gen_Unit *) NULL_CHECK(sp[0].o))->F_team;
	jfloat temp0 = frame[1].f;
	jfloat temp1 = frame[2].f;
	jfloat temp2 = frame[3].f;
	{ /* InvokeDynamic */
		clinit_mindustry_entities_units_AIController_invoke_arc_func_Boolf_8(ctx);
		auto proxy = (mindustry_entities_units_AIController_invoke_arc_func_Boolf_8 *) gcAlloc(ctx, &class_mindustry_entities_units_AIController_invoke_arc_func_Boolf_8);
		proxy->F_field1 = (frame[5].i);
		proxy->F_field0 = (frame[4].i);
		sp[1].o = (jobject) proxy;
	}
	{ /* InvokeDynamic */
		clinit_mindustry_entities_units_AIController_invoke_arc_func_Boolf_9(ctx);
		auto proxy = (mindustry_entities_units_AIController_invoke_arc_func_Boolf_9 *) gcAlloc(ctx, &class_mindustry_entities_units_AIController_invoke_arc_func_Boolf_9);
		proxy->F_field1 = (frame[5].i);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[2].o = (jobject) proxy;
	}
	sp[0].o = (jobject)SM_mindustry_entities_Units_closestTarget_mindustry_game_Team_float_float_float_arc_func_Boolf_arc_func_Boolf_R_mindustry_gen_Teamc(ctx, sp[0].o, temp0, temp1, temp2, sp[1].o, sp[2].o);
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jbool M_mindustry_entities_units_AIController_retarget_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/units/AIController:retarget", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(286);
	sp[0].o = (jobject)((mindustry_entities_units_AIController *) NULL_CHECK((frame[0].o)))->F_timer;
	jint temp0 = jint(0);
	sp[1].o = (jobject)((mindustry_entities_units_AIController *) NULL_CHECK((frame[0].o)))->F_target;
	jobject temp1 = sp[1].o;
	sp[1].i = temp0;
	sp += 2;
	if (temp1 != nullptr) goto label_1;
	}
	(sp++)->f = jfloat(40.0f);
	goto label_2;
label_1:;
	(sp++)->f = jfloat(90.0f);
label_2:;
	POP_N(3); // Pop method args
	sp->i = (jint)((func_arc_util_Interval_get_int_float_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_util_Interval_get_int_float_R_boolean])(ctx, sp[0].o, sp[1].i, sp[2].f);
	sp++;
	popStackFrame(ctx);
	INST_IRETURN();

	popStackFrame(ctx);
}

jobject M_mindustry_entities_units_AIController_findMainTarget_float_float_float_boolean_boolean_R_mindustry_gen_Teamc(jcontext ctx, jobject self, jfloat param0, jfloat param1, jfloat param2, jbool param3, jbool param4) {
	NULL_CHECK(self);
	jtype frame[12];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/units/AIController:findMainTarget", 12 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	frame[2].f = param1;
	frame[3].f = param2;
	frame[4].i = param3;
	frame[5].i = param4;
	{
	LINE_NUMBER(290);
	sp[0].o = (jobject)((func_mindustry_entities_units_AIController_findTarget_float_float_float_boolean_boolean_R_mindustry_gen_Teamc) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_entities_units_AIController_findTarget_float_float_float_boolean_boolean_R_mindustry_gen_Teamc])(ctx, (frame[0].o), (frame[1].f), (frame[2].f), (frame[3].f), (frame[4].i), (frame[5].i));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_mindustry_entities_units_AIController_findTarget_float_float_float_boolean_boolean_R_mindustry_gen_Teamc(jcontext ctx, jobject self, jfloat param0, jfloat param1, jfloat param2, jbool param3, jbool param4) {
	NULL_CHECK(self);
	jtype frame[12];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/units/AIController:findTarget", 12 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	frame[2].f = param1;
	frame[3].f = param2;
	frame[4].i = param3;
	frame[5].i = param4;
	{
	LINE_NUMBER(294);
	sp[0].o = (jobject)((func_mindustry_entities_units_AIController_target_float_float_float_boolean_boolean_R_mindustry_gen_Teamc) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_entities_units_AIController_target_float_float_float_boolean_boolean_R_mindustry_gen_Teamc])(ctx, (frame[0].o), (frame[1].f), (frame[2].f), (frame[3].f), (frame[4].i), (frame[5].i));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void M_mindustry_entities_units_AIController_commandTarget_mindustry_gen_Teamc(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/units/AIController:commandTarget", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	LINE_NUMBER(297);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_entities_units_AIController_commandPosition_arc_math_geom_Vec2(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/units/AIController:commandPosition", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	LINE_NUMBER(299);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_entities_units_AIController_init(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[1];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/units/AIController:init", 1 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	LINE_NUMBER(304);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jobject M_mindustry_entities_units_AIController_getClosestSpawner_R_mindustry_world_Tile(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/units/AIController:getClosestSpawner", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(307);
	sp[0].o = (jobject)((mindustry_entities_units_AIController *) NULL_CHECK((frame[0].o)))->F_unit;
	jfloat temp0 = (jfloat)((mindustry_gen_Unit *) NULL_CHECK(sp[0].o))->F_x;
	sp[0].o = (jobject)((mindustry_entities_units_AIController *) NULL_CHECK((frame[0].o)))->F_unit;
	jfloat temp1 = (jfloat)((mindustry_gen_Unit *) NULL_CHECK(sp[0].o))->F_y;
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_spawner;
	sp[0].o = (jobject)((func_mindustry_ai_WaveSpawner_getSpawns_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_ai_WaveSpawner_getSpawns_R_arc_struct_Seq])(ctx, sp[0].o);
	sp[0].o = (jobject)SM_arc_math_geom_Geometry_findClosest_float_float_java_lang_Iterable_R_arc_math_geom_Position(ctx, temp0, temp1, sp[0].o);
	popStackFrame(ctx);
	return (checkCast(ctx, &class_mindustry_world_Tile, sp[0].o));
	}

	popStackFrame(ctx);
}

void M_mindustry_entities_units_AIController_unloadPayloads(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/units/AIController:unloadPayloads", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(311);
	sp[0].o = (jobject)((mindustry_entities_units_AIController *) NULL_CHECK((frame[0].o)))->F_unit;
	frame[2].o = sp[0].o;
	if ((isInstance(ctx, (frame[2].o), &class_mindustry_gen_Payloadc)) == 0) goto label_1;
	}
	{
	frame[1].o = (checkCast(ctx, &class_mindustry_gen_Payloadc, (frame[2].o)));
	jint temp0 = (jint)((func_mindustry_gen_Payloadc_hasPayload_R_boolean) resolveInterfaceMethod(ctx, &class_mindustry_gen_Payloadc, INDEX_mindustry_gen_Payloadc_hasPayload_R_boolean, (frame[1].o)))(ctx, (frame[1].o));
	if (temp0 == 0) goto label_1;
	}
	{
	sp[0].o = (jobject)((mindustry_entities_units_AIController *) NULL_CHECK((frame[0].o)))->F_target;
	if ((isInstance(ctx, sp[0].o, &class_mindustry_gen_Building)) == 0) goto label_1;
	}
	{
	sp[0].o = (jobject)((func_mindustry_gen_Payloadc_payloads_R_arc_struct_Seq) resolveInterfaceMethod(ctx, &class_mindustry_gen_Payloadc, INDEX_mindustry_gen_Payloadc_payloads_R_arc_struct_Seq, (frame[1].o)))(ctx, (frame[1].o));
	sp[0].o = (jobject)((func_arc_struct_Seq_peek_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_peek_R_java_lang_Object])(ctx, sp[0].o);
	if ((isInstance(ctx, sp[0].o, &class_mindustry_world_blocks_payloads_UnitPayload)) == 0) goto label_1;
	}
	{
	LINE_NUMBER(312);
	sp[0].o = (jobject)((mindustry_entities_units_AIController *) NULL_CHECK((frame[0].o)))->F_target;
	sp[1].o = (jobject)((mindustry_entities_units_AIController *) NULL_CHECK((frame[0].o)))->F_unit;
	sp[2].o = (jobject)((mindustry_entities_units_AIController *) NULL_CHECK((frame[0].o)))->F_unit;
	sp[2].o = (jobject)((func_mindustry_gen_Unit_type_R_mindustry_type_UnitType) ((void **) nullCheck(ctx, sp[2].o)->vtable)[VTABLE_mindustry_gen_Unit_type_R_mindustry_type_UnitType])(ctx, sp[2].o);
	jfloat temp0 = (jfloat)SM_java_lang_Math_max_float_float_R_float(ctx, (((jfloat)((mindustry_type_UnitType *) NULL_CHECK(sp[2].o))->F_range) + (jfloat(1))), (jfloat(75.0f)));
	jint temp1 = (jint)((func_arc_math_geom_Position_within_arc_math_geom_Position_float_R_boolean) resolveInterfaceMethod(ctx, &class_arc_math_geom_Position, INDEX_arc_math_geom_Position_within_arc_math_geom_Position_float_R_boolean, sp[0].o))(ctx, sp[0].o, sp[1].o, temp0);
	if (temp1 == 0) goto label_1;
	}
	{
	LINE_NUMBER(313);
	jint temp0 = (jint)((func_mindustry_gen_Payloadc_dropLastPayload_R_boolean) resolveInterfaceMethod(ctx, &class_mindustry_gen_Payloadc, INDEX_mindustry_gen_Payloadc_dropLastPayload_R_boolean, (frame[1].o)))(ctx, (frame[1].o));
	}
label_1:;
	LINE_NUMBER(316);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_entities_units_AIController_circleAttack_float(jcontext ctx, jobject self, jfloat param0) {
	NULL_CHECK(self);
	jtype frame[10];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/units/AIController:circleAttack", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	{
	LINE_NUMBER(319);
	sp[0].o = (jobject)((mindustry_entities_units_AIController *) NULL_CHECK((frame[0].o)))->F_target;
	if (sp[0].o != nullptr) goto label_1;
	}
	popStackFrame(ctx);
	INST_RETURN();
label_1:;
	{
	LINE_NUMBER(321);
	clinit_mindustry_entities_units_AIController(ctx);
	sp[0].o = (jobject)SF_mindustry_entities_units_AIController_vec;
	sp[1].o = (jobject)((mindustry_entities_units_AIController *) NULL_CHECK((frame[0].o)))->F_target;
	sp[0].o = (jobject)((func_arc_math_geom_Vec2_set_arc_math_geom_Position_R_arc_math_geom_Vec2) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Vec2_set_arc_math_geom_Position_R_arc_math_geom_Vec2])(ctx, sp[0].o, sp[1].o);
	sp[1].o = (jobject)((mindustry_entities_units_AIController *) NULL_CHECK((frame[0].o)))->F_unit;
	sp[0].o = (jobject)((func_arc_math_geom_Vec2_sub_arc_math_geom_Position_R_arc_math_geom_Vec2) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Vec2_sub_arc_math_geom_Position_R_arc_math_geom_Vec2])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(323);
	sp[0].o = (jobject)((mindustry_entities_units_AIController *) NULL_CHECK((frame[0].o)))->F_unit;
	sp[1].o = (jobject)((mindustry_entities_units_AIController *) NULL_CHECK((frame[0].o)))->F_target;
	jfloat temp0 = (jfloat)((func_mindustry_gen_Unit_angleTo_arc_math_geom_Position_R_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_gen_Unit_angleTo_arc_math_geom_Position_R_float])(ctx, sp[0].o, sp[1].o);
	frame[2].f = temp0;
	LINE_NUMBER(324);
	jfloat temp1 = frame[2].f;
	sp[0].o = (jobject)((mindustry_entities_units_AIController *) NULL_CHECK((frame[0].o)))->F_unit;
	jfloat temp2 = (jfloat)((func_mindustry_gen_Unit_rotation_R_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_gen_Unit_rotation_R_float])(ctx, sp[0].o);
	jfloat temp3 = (jfloat)SM_arc_math_Angles_angleDist_float_float_R_float(ctx, temp1, temp2);
	frame[3].f = temp3;
	LINE_NUMBER(326);
	sp[0].o = (jobject)((mindustry_entities_units_AIController *) NULL_CHECK((frame[0].o)))->F_target;
	frame[5].o = sp[0].o;
	if ((isInstance(ctx, (frame[5].o), &class_mindustry_gen_Unit)) == 0) goto label_5;
	}
	{
	frame[4].o = (checkCast(ctx, &class_mindustry_gen_Unit, (frame[5].o)));
	jint temp0 = (jint)((func_mindustry_gen_Unit_collisionLayer_R_int) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_mindustry_gen_Unit_collisionLayer_R_int])(ctx, (frame[4].o));
	sp[0].o = (jobject)((mindustry_entities_units_AIController *) NULL_CHECK((frame[0].o)))->F_unit;
	jint temp1 = (jint)((func_mindustry_gen_Unit_collisionLayer_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_gen_Unit_collisionLayer_R_int])(ctx, sp[0].o);
	if (temp0 != temp1) goto label_5;
	}
	{
	LINE_NUMBER(327);
	jfloat temp0 = (jfloat)((func_mindustry_gen_Unit_physicSize_R_float) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_mindustry_gen_Unit_physicSize_R_float])(ctx, (frame[4].o));
	frame[5].f = (temp0 + (jfloat(30.0f)));
	LINE_NUMBER(328);
	if (((jint)((mindustry_entities_units_AIController *) NULL_CHECK((frame[0].o)))->F_turningAway) == 0) goto label_9;
	}
	{
	LINE_NUMBER(330);
	clinit_mindustry_entities_units_AIController(ctx);
	sp[0].o = (jobject)SF_mindustry_entities_units_AIController_vec;
	jfloat temp0 = (jfloat)((func_mindustry_entities_units_AIController_prefSpeed_R_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_entities_units_AIController_prefSpeed_R_float])(ctx, (frame[0].o));
	sp[0].o = (jobject)((func_arc_math_geom_Vec2_setLength_float_R_arc_math_geom_Vec2) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Vec2_setLength_float_R_arc_math_geom_Vec2])(ctx, sp[0].o, temp0);
	sp[0].o = (jobject)((func_arc_math_geom_Vec2_scl_float_R_arc_math_geom_Vec2) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Vec2_scl_float_R_arc_math_geom_Vec2])(ctx, sp[0].o, (jfloat(-1.0f)));
	LINE_NUMBER(331);
	sp[0].o = (jobject)((mindustry_entities_units_AIController *) NULL_CHECK((frame[0].o)))->F_unit;
	clinit_mindustry_entities_units_AIController(ctx);
	sp[1].o = (jobject)SF_mindustry_entities_units_AIController_vec;
	((func_mindustry_gen_Unit_movePref_arc_math_geom_Vec2) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_gen_Unit_movePref_arc_math_geom_Vec2])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(333);
	sp[0].o = (jobject)((mindustry_entities_units_AIController *) NULL_CHECK((frame[0].o)))->F_unit;
	sp[1].o = frame[4].o;
	sp[2].o = (jobject)((mindustry_entities_units_AIController *) NULL_CHECK((frame[0].o)))->F_unit;
	sp[2].o = (jobject)((mindustry_gen_Unit *) NULL_CHECK(sp[2].o))->F_type;
	jfloat temp1 = ((jfloat)((mindustry_type_UnitType *) NULL_CHECK(sp[2].o))->F_circleTargetRadius) * (jfloat(0.5f));
	jfloat temp2 = (jfloat)((func_mindustry_gen_Unit_physicSize_R_float) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_mindustry_gen_Unit_physicSize_R_float])(ctx, (frame[4].o));
	jint temp3 = (jint)((func_mindustry_gen_Unit_within_arc_math_geom_Position_float_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_gen_Unit_within_arc_math_geom_Position_float_R_boolean])(ctx, sp[0].o, sp[1].o, (temp1 + temp2));
	if (temp3 != 0) goto label_13;
	}
	{
	LINE_NUMBER(334);
	((mindustry_entities_units_AIController *) NULL_CHECK((frame[0].o)))->F_turningAway = (jint(0));
	}
label_13:;
	LINE_NUMBER(336);
	popStackFrame(ctx);
	INST_RETURN();
label_9:;
	{
	LINE_NUMBER(337);
	sp[0].o = (jobject)((mindustry_entities_units_AIController *) NULL_CHECK((frame[0].o)))->F_unit;
	jint temp0 = (jint)((func_mindustry_gen_Unit_within_arc_math_geom_Position_float_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_gen_Unit_within_arc_math_geom_Position_float_R_boolean])(ctx, sp[0].o, (frame[4].o), (frame[5].f));
	if (temp0 == 0) goto label_5;
	}
	{
	LINE_NUMBER(338);
	((mindustry_entities_units_AIController *) NULL_CHECK((frame[0].o)))->F_turningAway = (jint(1));
	}
label_5:;
	{
	LINE_NUMBER(342);
	if ((floatCompare((frame[3].f), (jfloat(70.0f)), -1)) <= 0) goto label_16;
	}
	{
	clinit_mindustry_entities_units_AIController(ctx);
	sp[0].o = (jobject)SF_mindustry_entities_units_AIController_vec;
	jfloat temp0 = (jfloat)((func_arc_math_geom_Vec2_len_R_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Vec2_len_R_float])(ctx, sp[0].o);
	if ((floatCompare(temp0, (frame[1].f), 1)) >= 0) goto label_16;
	}
	{
	LINE_NUMBER(343);
	clinit_mindustry_entities_units_AIController(ctx);
	sp[0].o = (jobject)SF_mindustry_entities_units_AIController_vec;
	sp[1].o = (jobject)((mindustry_entities_units_AIController *) NULL_CHECK((frame[0].o)))->F_unit;
	sp[1].o = (jobject)((func_mindustry_gen_Unit_vel_R_arc_math_geom_Vec2) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_mindustry_gen_Unit_vel_R_arc_math_geom_Vec2])(ctx, sp[1].o);
	jfloat temp0 = (jfloat)((func_arc_math_geom_Vec2_angle_R_float) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_math_geom_Vec2_angle_R_float])(ctx, sp[1].o);
	sp[0].o = (jobject)((func_arc_math_geom_Vec2_setAngle_float_R_arc_math_geom_Vec2) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Vec2_setAngle_float_R_arc_math_geom_Vec2])(ctx, sp[0].o, temp0);
	goto label_18;
	}
label_16:;
	{
	LINE_NUMBER(344);
	sp[0].o = (jobject)((mindustry_entities_units_AIController *) NULL_CHECK((frame[0].o)))->F_unit;
	sp[0].o = (jobject)((mindustry_gen_Unit *) NULL_CHECK(sp[0].o))->F_type;
	if (((jint)((mindustry_type_UnitType *) NULL_CHECK(sp[0].o))->F_omniMovement) == 0) goto label_18;
	}
	{
	LINE_NUMBER(345);
	clinit_mindustry_entities_units_AIController(ctx);
	sp[0].o = (jobject)SF_mindustry_entities_units_AIController_vec;
	sp[1].o = (jobject)((mindustry_entities_units_AIController *) NULL_CHECK((frame[0].o)))->F_unit;
	sp[1].o = (jobject)((func_mindustry_gen_Unit_vel_R_arc_math_geom_Vec2) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_mindustry_gen_Unit_vel_R_arc_math_geom_Vec2])(ctx, sp[1].o);
	jfloat temp0 = (jfloat)((func_arc_math_geom_Vec2_angle_R_float) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_math_geom_Vec2_angle_R_float])(ctx, sp[1].o);
	clinit_mindustry_entities_units_AIController(ctx);
	sp[1].o = (jobject)SF_mindustry_entities_units_AIController_vec;
	jfloat temp1 = (jfloat)((func_arc_math_geom_Vec2_angle_R_float) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_math_geom_Vec2_angle_R_float])(ctx, sp[1].o);
	jfloat temp2 = (jfloat)SM_arc_math_Angles_moveToward_float_float_float_R_float(ctx, temp0, temp1, (jfloat(6.0f)));
	sp[0].o = (jobject)((func_arc_math_geom_Vec2_setAngle_float_R_arc_math_geom_Vec2) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Vec2_setAngle_float_R_arc_math_geom_Vec2])(ctx, sp[0].o, temp2);
	}
label_18:;
	{
	LINE_NUMBER(348);
	clinit_mindustry_entities_units_AIController(ctx);
	sp[0].o = (jobject)SF_mindustry_entities_units_AIController_vec;
	jfloat temp0 = (jfloat)((func_mindustry_entities_units_AIController_prefSpeed_R_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_entities_units_AIController_prefSpeed_R_float])(ctx, (frame[0].o));
	sp[0].o = (jobject)((func_arc_math_geom_Vec2_setLength_float_R_arc_math_geom_Vec2) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Vec2_setLength_float_R_arc_math_geom_Vec2])(ctx, sp[0].o, temp0);
	LINE_NUMBER(350);
	sp[0].o = (jobject)((mindustry_entities_units_AIController *) NULL_CHECK((frame[0].o)))->F_unit;
	clinit_mindustry_entities_units_AIController(ctx);
	sp[1].o = (jobject)SF_mindustry_entities_units_AIController_vec;
	((func_mindustry_gen_Unit_movePref_arc_math_geom_Vec2) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_gen_Unit_movePref_arc_math_geom_Vec2])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(351);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_entities_units_AIController_circle_arc_math_geom_Position_float(jcontext ctx, jobject self, jobject param0, jfloat param1) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/units/AIController:circle", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].f = param1;
	{
	LINE_NUMBER(354);
	sp[0].o = frame[0].o;
	sp[1].o = frame[1].o;
	jfloat temp0 = frame[2].f;
	jfloat temp1 = (jfloat)((func_mindustry_entities_units_AIController_prefSpeed_R_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_entities_units_AIController_prefSpeed_R_float])(ctx, (frame[0].o));
	((func_mindustry_entities_units_AIController_circle_arc_math_geom_Position_float_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_entities_units_AIController_circle_arc_math_geom_Position_float_float])(ctx, sp[0].o, sp[1].o, temp0, temp1);
	LINE_NUMBER(355);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_entities_units_AIController_circle_arc_math_geom_Position_float_float(jcontext ctx, jobject self, jobject param0, jfloat param1, jfloat param2) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/units/AIController:circle", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].f = param1;
	frame[3].f = param2;
	{
	LINE_NUMBER(358);
	if ((frame[1].o) != nullptr) goto label_1;
	}
	popStackFrame(ctx);
	INST_RETURN();
label_1:;
	{
	LINE_NUMBER(360);
	clinit_mindustry_entities_units_AIController(ctx);
	sp[0].o = (jobject)SF_mindustry_entities_units_AIController_vec;
	sp[0].o = (jobject)((func_arc_math_geom_Vec2_set_arc_math_geom_Position_R_arc_math_geom_Vec2) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Vec2_set_arc_math_geom_Position_R_arc_math_geom_Vec2])(ctx, sp[0].o, (frame[1].o));
	sp[1].o = (jobject)((mindustry_entities_units_AIController *) NULL_CHECK((frame[0].o)))->F_unit;
	sp[0].o = (jobject)((func_arc_math_geom_Vec2_sub_arc_math_geom_Position_R_arc_math_geom_Vec2) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Vec2_sub_arc_math_geom_Position_R_arc_math_geom_Vec2])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(362);
	clinit_mindustry_entities_units_AIController(ctx);
	sp[0].o = (jobject)SF_mindustry_entities_units_AIController_vec;
	jfloat temp0 = (jfloat)((func_arc_math_geom_Vec2_len_R_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Vec2_len_R_float])(ctx, sp[0].o);
	if ((floatCompare(temp0, (frame[2].f), 1)) >= 0) goto label_3;
	}
	{
	LINE_NUMBER(363);
	clinit_mindustry_entities_units_AIController(ctx);
	sp[0].o = (jobject)SF_mindustry_entities_units_AIController_vec;
	jfloat temp0 = frame[2].f;
	clinit_mindustry_entities_units_AIController(ctx);
	sp[1].o = (jobject)SF_mindustry_entities_units_AIController_vec;
	jfloat temp1 = (jfloat)((func_arc_math_geom_Vec2_len_R_float) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_math_geom_Vec2_len_R_float])(ctx, sp[1].o);
	sp[0].o = (jobject)((func_arc_math_geom_Vec2_rotate_float_R_arc_math_geom_Vec2) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Vec2_rotate_float_R_arc_math_geom_Vec2])(ctx, sp[0].o, (((temp0 - temp1) / (frame[2].f)) * (jfloat(180.0f))));
	}
label_3:;
	{
	LINE_NUMBER(366);
	clinit_mindustry_entities_units_AIController(ctx);
	sp[0].o = (jobject)SF_mindustry_entities_units_AIController_vec;
	sp[0].o = (jobject)((func_arc_math_geom_Vec2_setLength_float_R_arc_math_geom_Vec2) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Vec2_setLength_float_R_arc_math_geom_Vec2])(ctx, sp[0].o, (frame[3].f));
	LINE_NUMBER(368);
	sp[0].o = (jobject)((mindustry_entities_units_AIController *) NULL_CHECK((frame[0].o)))->F_unit;
	clinit_mindustry_entities_units_AIController(ctx);
	sp[1].o = (jobject)SF_mindustry_entities_units_AIController_vec;
	((func_mindustry_gen_Unit_movePref_arc_math_geom_Vec2) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_gen_Unit_movePref_arc_math_geom_Vec2])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(369);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_entities_units_AIController_moveTo_arc_math_geom_Position_float(jcontext ctx, jobject self, jobject param0, jfloat param1) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/units/AIController:moveTo", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].f = param1;
	{
	LINE_NUMBER(372);
	((func_mindustry_entities_units_AIController_moveTo_arc_math_geom_Position_float_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_entities_units_AIController_moveTo_arc_math_geom_Position_float_float])(ctx, (frame[0].o), (frame[1].o), (frame[2].f), (jfloat(100.0f)));
	LINE_NUMBER(373);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_entities_units_AIController_moveTo_arc_math_geom_Position_float_float(jcontext ctx, jobject self, jobject param0, jfloat param1, jfloat param2) {
	NULL_CHECK(self);
	jtype frame[10];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/units/AIController:moveTo", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].f = param1;
	frame[3].f = param2;
	{
	LINE_NUMBER(376);
	sp[0].o = frame[0].o;
	sp[1].o = frame[1].o;
	jfloat temp0 = frame[2].f;
	jfloat temp1 = frame[3].f;
	sp[2].o = (jobject)((mindustry_entities_units_AIController *) NULL_CHECK((frame[0].o)))->F_unit;
	jint temp2 = (jint)((func_mindustry_gen_Unit_isFlying_R_boolean) ((void **) nullCheck(ctx, sp[2].o)->vtable)[VTABLE_mindustry_gen_Unit_isFlying_R_boolean])(ctx, sp[2].o);
	((func_mindustry_entities_units_AIController_moveTo_arc_math_geom_Position_float_float_boolean_arc_math_geom_Vec2) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_entities_units_AIController_moveTo_arc_math_geom_Position_float_float_boolean_arc_math_geom_Vec2])(ctx, sp[0].o, sp[1].o, temp0, temp1, temp2, (jobject(nullptr)));
	LINE_NUMBER(377);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_entities_units_AIController_moveTo_arc_math_geom_Position_float_float_boolean_arc_math_geom_Vec2(jcontext ctx, jobject self, jobject param0, jfloat param1, jfloat param2, jbool param3, jobject param4) {
	NULL_CHECK(self);
	jtype frame[13];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/units/AIController:moveTo", 13 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].f = param1;
	frame[3].f = param2;
	frame[4].i = param3;
	frame[5].o = param4;
	{
	LINE_NUMBER(380);
	((func_mindustry_entities_units_AIController_moveTo_arc_math_geom_Position_float_float_boolean_arc_math_geom_Vec2_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_entities_units_AIController_moveTo_arc_math_geom_Position_float_float_boolean_arc_math_geom_Vec2_boolean])(ctx, (frame[0].o), (frame[1].o), (frame[2].f), (frame[3].f), (frame[4].i), (frame[5].o), (jint(0)));
	LINE_NUMBER(381);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_entities_units_AIController_moveTo_arc_math_geom_Position_float_float_boolean_arc_math_geom_Vec2_boolean(jcontext ctx, jobject self, jobject param0, jfloat param1, jfloat param2, jbool param3, jobject param4, jbool param5) {
	NULL_CHECK(self);
	jtype frame[14];
	auto stack = &frame[10];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/units/AIController:moveTo", 14 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].f = param1;
	frame[3].f = param2;
	frame[4].i = param3;
	frame[5].o = param4;
	frame[6].i = param5;
	{
	LINE_NUMBER(384);
	if ((frame[1].o) != nullptr) goto label_1;
	}
	popStackFrame(ctx);
	INST_RETURN();
label_1:;
	{
	LINE_NUMBER(386);
	jfloat temp0 = (jfloat)((func_mindustry_entities_units_AIController_prefSpeed_R_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_entities_units_AIController_prefSpeed_R_float])(ctx, (frame[0].o));
	frame[7].f = temp0;
	LINE_NUMBER(388);
	clinit_mindustry_entities_units_AIController(ctx);
	sp[0].o = (jobject)SF_mindustry_entities_units_AIController_vec;
	sp[0].o = (jobject)((func_arc_math_geom_Vec2_set_arc_math_geom_Position_R_arc_math_geom_Vec2) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Vec2_set_arc_math_geom_Position_R_arc_math_geom_Vec2])(ctx, sp[0].o, (frame[1].o));
	sp[1].o = (jobject)((mindustry_entities_units_AIController *) NULL_CHECK((frame[0].o)))->F_unit;
	sp[0].o = (jobject)((func_arc_math_geom_Vec2_sub_arc_math_geom_Position_R_arc_math_geom_Vec2) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Vec2_sub_arc_math_geom_Position_R_arc_math_geom_Vec2])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(390);
	if ((floatCompare((frame[2].f), (jfloat(1,000000e-03f)), 1)) > 0) goto label_4;
	}
	INST_FCONST(1);
	goto label_5;
label_4:;
	{
	sp[0].o = (jobject)((mindustry_entities_units_AIController *) NULL_CHECK((frame[0].o)))->F_unit;
	jfloat temp0 = (jfloat)((func_mindustry_gen_Unit_dst_arc_math_geom_Position_R_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_gen_Unit_dst_arc_math_geom_Position_R_float])(ctx, sp[0].o, (frame[1].o));
	jfloat temp1 = (jfloat)SM_arc_math_Mathf_clamp_float_float_float_R_float(ctx, ((temp0 - (frame[2].f)) / (frame[3].f)), (jfloat(-1.0f)), (jfloat(1)));
	sp[0].f = temp1;
	sp += 1;
	}
label_5:;
	{
	sp -= 1;
	frame[8].f = sp[0].f;
	LINE_NUMBER(392);
	clinit_mindustry_entities_units_AIController(ctx);
	sp[0].o = (jobject)SF_mindustry_entities_units_AIController_vec;
	sp[0].o = (jobject)((func_arc_math_geom_Vec2_setLength_float_R_arc_math_geom_Vec2) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Vec2_setLength_float_R_arc_math_geom_Vec2])(ctx, sp[0].o, ((frame[7].f) * (frame[8].f)));
	LINE_NUMBER(394);
	if ((frame[6].i) == 0) goto label_8;
	}
	{
	if ((floatCompare((frame[8].f), (jfloat(0)), -1)) <= 0) goto label_8;
	}
	{
	LINE_NUMBER(395);
	clinit_arc_util_Tmp(ctx);
	sp[0].o = (jobject)SF_arc_util_Tmp_v3;
	sp[1].o = (jobject)((mindustry_entities_units_AIController *) NULL_CHECK((frame[0].o)))->F_unit;
	sp[1].o = (jobject)((mindustry_gen_Unit *) NULL_CHECK(sp[1].o))->F_vel;
	jfloat temp0 = -((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK(sp[1].o))->F_x);
	sp[1].o = (jobject)((mindustry_entities_units_AIController *) NULL_CHECK((frame[0].o)))->F_unit;
	sp[1].o = (jobject)((mindustry_gen_Unit *) NULL_CHECK(sp[1].o))->F_type;
	jfloat temp1 = (temp0 / ((jfloat)((mindustry_type_UnitType *) NULL_CHECK(sp[1].o))->F_accel)) * (jfloat(2));
	sp[1].o = (jobject)((mindustry_entities_units_AIController *) NULL_CHECK((frame[0].o)))->F_unit;
	sp[1].o = (jobject)((mindustry_gen_Unit *) NULL_CHECK(sp[1].o))->F_vel;
	jfloat temp2 = -((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK(sp[1].o))->F_y);
	sp[1].o = (jobject)((mindustry_entities_units_AIController *) NULL_CHECK((frame[0].o)))->F_unit;
	sp[1].o = (jobject)((mindustry_gen_Unit *) NULL_CHECK(sp[1].o))->F_type;
	sp[0].o = (jobject)((func_arc_math_geom_Vec2_set_float_float_R_arc_math_geom_Vec2) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Vec2_set_float_float_R_arc_math_geom_Vec2])(ctx, sp[0].o, temp1, ((temp2 / ((jfloat)((mindustry_type_UnitType *) NULL_CHECK(sp[1].o))->F_accel)) * (jfloat(2))));
	jfloat temp3 = (jfloat)((func_arc_math_geom_Position_getX_R_float) resolveInterfaceMethod(ctx, &class_arc_math_geom_Position, INDEX_arc_math_geom_Position_getX_R_float, (frame[1].o)))(ctx, (frame[1].o));
	sp[1].o = (jobject)((mindustry_entities_units_AIController *) NULL_CHECK((frame[0].o)))->F_unit;
	jfloat temp4 = temp3 - ((jfloat)((mindustry_gen_Unit *) NULL_CHECK(sp[1].o))->F_x);
	jfloat temp5 = (jfloat)((func_arc_math_geom_Position_getY_R_float) resolveInterfaceMethod(ctx, &class_arc_math_geom_Position, INDEX_arc_math_geom_Position_getY_R_float, (frame[1].o)))(ctx, (frame[1].o));
	sp[1].o = (jobject)((mindustry_entities_units_AIController *) NULL_CHECK((frame[0].o)))->F_unit;
	sp[0].o = (jobject)((func_arc_math_geom_Vec2_add_float_float_R_arc_math_geom_Vec2) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Vec2_add_float_float_R_arc_math_geom_Vec2])(ctx, sp[0].o, temp4, (temp5 - ((jfloat)((mindustry_gen_Unit *) NULL_CHECK(sp[1].o))->F_y)));
	LINE_NUMBER(397);
	sp[0].o = (jobject)((mindustry_entities_units_AIController *) NULL_CHECK((frame[0].o)))->F_unit;
	sp[0].o = (jobject)((mindustry_gen_Unit *) NULL_CHECK(sp[0].o))->F_type;
	if (((jint)((mindustry_type_UnitType *) NULL_CHECK(sp[0].o))->F_omniMovement) != 0) goto label_11;
	}
	{
	sp[0].o = (jobject)((mindustry_entities_units_AIController *) NULL_CHECK((frame[0].o)))->F_unit;
	sp[0].o = (jobject)((mindustry_gen_Unit *) NULL_CHECK(sp[0].o))->F_type;
	if (((jint)((mindustry_type_UnitType *) NULL_CHECK(sp[0].o))->F_rotateMoveFirst) == 0) goto label_12;
	}
label_11:;
	{
	LINE_NUMBER(398);
	clinit_mindustry_entities_units_AIController(ctx);
	sp[0].o = (jobject)SF_mindustry_entities_units_AIController_vec;
	clinit_arc_util_Tmp(ctx);
	sp[1].o = (jobject)SF_arc_util_Tmp_v3;
	sp[0].o = (jobject)((func_arc_math_geom_Vec2_add_arc_math_geom_Vec2_R_arc_math_geom_Vec2) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Vec2_add_arc_math_geom_Vec2_R_arc_math_geom_Vec2])(ctx, sp[0].o, sp[1].o);
	sp[0].o = (jobject)((func_arc_math_geom_Vec2_limit_float_R_arc_math_geom_Vec2) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Vec2_limit_float_R_arc_math_geom_Vec2])(ctx, sp[0].o, ((frame[7].f) * (frame[8].f)));
	goto label_8;
	}
label_12:;
	{
	LINE_NUMBER(401);
	sp[0].o = (jobject)((mindustry_entities_units_AIController *) NULL_CHECK((frame[0].o)))->F_unit;
	clinit_arc_util_Tmp(ctx);
	sp[1].o = (jobject)SF_arc_util_Tmp_v3;
	sp[1].o = (jobject)((func_arc_math_geom_Vec2_limit_float_R_arc_math_geom_Vec2) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_math_geom_Vec2_limit_float_R_arc_math_geom_Vec2])(ctx, sp[1].o, ((frame[7].f) * (frame[8].f)));
	((func_mindustry_gen_Unit_moveAt_arc_math_geom_Vec2) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_gen_Unit_moveAt_arc_math_geom_Vec2])(ctx, sp[0].o, sp[1].o);
	}
label_8:;
	{
	LINE_NUMBER(405);
	if ((floatCompare((frame[8].f), (jfloat(-0.5f)), 1)) >= 0) goto label_13;
	}
	{
	LINE_NUMBER(406);
	if ((frame[4].i) == 0) goto label_15;
	}
	{
	LINE_NUMBER(407);
	clinit_mindustry_entities_units_AIController(ctx);
	sp[0].o = (jobject)SF_mindustry_entities_units_AIController_vec;
	sp[0].o = (jobject)((func_arc_math_geom_Vec2_rotate_float_R_arc_math_geom_Vec2) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Vec2_rotate_float_R_arc_math_geom_Vec2])(ctx, sp[0].o, (jfloat(180.0f)));
	goto label_17;
	}
label_15:;
	{
	LINE_NUMBER(409);
	clinit_mindustry_entities_units_AIController(ctx);
	sp[0].o = (jobject)SF_mindustry_entities_units_AIController_vec;
	sp[0].o = (jobject)((func_arc_math_geom_Vec2_setZero_R_arc_math_geom_Vec2) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Vec2_setZero_R_arc_math_geom_Vec2])(ctx, sp[0].o);
	goto label_17;
	}
label_13:;
	{
	LINE_NUMBER(411);
	if ((floatCompare((frame[8].f), (jfloat(0)), 1)) >= 0) goto label_17;
	}
	{
	LINE_NUMBER(412);
	clinit_mindustry_entities_units_AIController(ctx);
	sp[0].o = (jobject)SF_mindustry_entities_units_AIController_vec;
	sp[0].o = (jobject)((func_arc_math_geom_Vec2_setZero_R_arc_math_geom_Vec2) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Vec2_setZero_R_arc_math_geom_Vec2])(ctx, sp[0].o);
	}
label_17:;
	{
	LINE_NUMBER(415);
	if ((frame[5].o) == nullptr) goto label_19;
	}
	{
	LINE_NUMBER(416);
	clinit_mindustry_entities_units_AIController(ctx);
	sp[0].o = (jobject)SF_mindustry_entities_units_AIController_vec;
	sp[0].o = (jobject)((func_arc_math_geom_Vec2_add_arc_math_geom_Vec2_R_arc_math_geom_Vec2) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Vec2_add_arc_math_geom_Vec2_R_arc_math_geom_Vec2])(ctx, sp[0].o, (frame[5].o));
	LINE_NUMBER(417);
	clinit_mindustry_entities_units_AIController(ctx);
	sp[0].o = (jobject)SF_mindustry_entities_units_AIController_vec;
	sp[0].o = (jobject)((func_arc_math_geom_Vec2_setLength_float_R_arc_math_geom_Vec2) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Vec2_setLength_float_R_arc_math_geom_Vec2])(ctx, sp[0].o, ((frame[7].f) * (frame[8].f)));
	}
label_19:;
	{
	LINE_NUMBER(421);
	clinit_mindustry_entities_units_AIController(ctx);
	sp[0].o = (jobject)SF_mindustry_entities_units_AIController_vec;
	jint temp0 = (jint)((func_arc_math_geom_Vec2_isNaN_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Vec2_isNaN_R_boolean])(ctx, sp[0].o);
	if (temp0 != 0) goto label_22;
	}
	{
	clinit_mindustry_entities_units_AIController(ctx);
	sp[0].o = (jobject)SF_mindustry_entities_units_AIController_vec;
	jint temp0 = (jint)((func_arc_math_geom_Vec2_isInfinite_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Vec2_isInfinite_R_boolean])(ctx, sp[0].o);
	if (temp0 != 0) goto label_22;
	}
	{
	clinit_mindustry_entities_units_AIController(ctx);
	sp[0].o = (jobject)SF_mindustry_entities_units_AIController_vec;
	jint temp0 = (jint)((func_arc_math_geom_Vec2_isZero_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Vec2_isZero_R_boolean])(ctx, sp[0].o);
	if (temp0 == 0) goto label_23;
	}
label_22:;
	popStackFrame(ctx);
	INST_RETURN();
label_23:;
	{
	LINE_NUMBER(423);
	sp[0].o = (jobject)((mindustry_entities_units_AIController *) NULL_CHECK((frame[0].o)))->F_unit;
	sp[0].o = (jobject)((mindustry_gen_Unit *) NULL_CHECK(sp[0].o))->F_type;
	if (((jint)((mindustry_type_UnitType *) NULL_CHECK(sp[0].o))->F_omniMovement) != 0) goto label_24;
	}
	{
	sp[0].o = (jobject)((mindustry_entities_units_AIController *) NULL_CHECK((frame[0].o)))->F_unit;
	sp[0].o = (jobject)((mindustry_gen_Unit *) NULL_CHECK(sp[0].o))->F_type;
	if (((jint)((mindustry_type_UnitType *) NULL_CHECK(sp[0].o))->F_rotateMoveFirst) == 0) goto label_24;
	}
	{
	LINE_NUMBER(424);
	clinit_mindustry_entities_units_AIController(ctx);
	sp[0].o = (jobject)SF_mindustry_entities_units_AIController_vec;
	jfloat temp0 = (jfloat)((func_arc_math_geom_Vec2_angle_R_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Vec2_angle_R_float])(ctx, sp[0].o);
	frame[9].f = temp0;
	LINE_NUMBER(425);
	sp[0].o = (jobject)((mindustry_entities_units_AIController *) NULL_CHECK((frame[0].o)))->F_unit;
	((func_mindustry_gen_Unit_lookAt_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_gen_Unit_lookAt_float])(ctx, sp[0].o, (frame[9].f));
	LINE_NUMBER(426);
	sp[0].o = (jobject)((mindustry_entities_units_AIController *) NULL_CHECK((frame[0].o)))->F_unit;
	jint temp1 = (jint)SM_arc_math_Angles_within_float_float_float_R_boolean(ctx, ((jfloat)((mindustry_gen_Unit *) NULL_CHECK(sp[0].o))->F_rotation), (frame[9].f), (jfloat(3.0f)));
	if (temp1 == 0) goto label_28;
	}
	{
	LINE_NUMBER(427);
	sp[0].o = (jobject)((mindustry_entities_units_AIController *) NULL_CHECK((frame[0].o)))->F_unit;
	clinit_mindustry_entities_units_AIController(ctx);
	sp[1].o = (jobject)SF_mindustry_entities_units_AIController_vec;
	((func_mindustry_gen_Unit_movePref_arc_math_geom_Vec2) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_gen_Unit_movePref_arc_math_geom_Vec2])(ctx, sp[0].o, sp[1].o);
	}
label_28:;
	LINE_NUMBER(429);
	goto label_30;
label_24:;
	{
	LINE_NUMBER(430);
	sp[0].o = (jobject)((mindustry_entities_units_AIController *) NULL_CHECK((frame[0].o)))->F_unit;
	clinit_mindustry_entities_units_AIController(ctx);
	sp[1].o = (jobject)SF_mindustry_entities_units_AIController_vec;
	((func_mindustry_gen_Unit_movePref_arc_math_geom_Vec2) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_gen_Unit_movePref_arc_math_geom_Vec2])(ctx, sp[0].o, sp[1].o);
	}
label_30:;
	LINE_NUMBER(432);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jfloat M_mindustry_entities_units_AIController_prefSpeed_R_float(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/units/AIController:prefSpeed", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(435);
	sp[0].o = (jobject)((mindustry_entities_units_AIController *) NULL_CHECK((frame[0].o)))->F_unit;
	jfloat temp0 = (jfloat)((func_mindustry_gen_Unit_speed_R_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_gen_Unit_speed_R_float])(ctx, sp[0].o);
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

void M_mindustry_entities_units_AIController_unit_mindustry_gen_Unit(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/units/AIController:unit", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(440);
	sp[0].o = (jobject)((mindustry_entities_units_AIController *) NULL_CHECK((frame[0].o)))->F_unit;
	if (sp[0].o != (frame[1].o)) goto label_1;
	}
	popStackFrame(ctx);
	INST_RETURN();
label_1:;
	{
	LINE_NUMBER(442);
	((mindustry_entities_units_AIController *) NULL_CHECK((frame[0].o)))->F_unit = (jref) (frame[1].o);
	LINE_NUMBER(443);
	((func_mindustry_entities_units_AIController_init) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_entities_units_AIController_init])(ctx, (frame[0].o));
	LINE_NUMBER(444);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_mindustry_entities_units_AIController_unit_R_mindustry_gen_Unit(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/units/AIController:unit", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(448);
	sp[0].o = (jobject)((mindustry_entities_units_AIController *) NULL_CHECK((frame[0].o)))->F_unit;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jbool M_mindustry_entities_units_AIController_lambda$target$1_boolean_mindustry_gen_Building_R_boolean(jcontext ctx, jobject self, jbool param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/units/AIController:lambda$target$1", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(282);
	if ((frame[1].i) == 0) goto label_1;
	}
	{
	sp[0].o = (jobject)((mindustry_entities_units_AIController *) NULL_CHECK((frame[0].o)))->F_unit;
	sp[0].o = (jobject)((mindustry_gen_Unit *) NULL_CHECK(sp[0].o))->F_type;
	if (((jint)((mindustry_type_UnitType *) NULL_CHECK(sp[0].o))->F_targetUnderBlocks) != 0) goto label_2;
	}
	{
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[2].o)))->F_block;
	if (((jint)((mindustry_world_Block *) NULL_CHECK(sp[0].o))->F_underBullets) != 0) goto label_1;
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

jbool SM_mindustry_entities_units_AIController_lambda$target$0_boolean_boolean_mindustry_gen_Unit_R_boolean(jcontext ctx, jbool param0, jbool param1, jobject param2) {
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/units/AIController:lambda$target$0", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_entities_units_AIController(ctx);
	frame[0].i = param0;
	frame[1].i = param1;
	frame[2].o = param2;
	{
	LINE_NUMBER(282);
	jint temp0 = (jint)((func_mindustry_gen_Unit_checkTarget_boolean_boolean_R_boolean) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_mindustry_gen_Unit_checkTarget_boolean_boolean_R_boolean])(ctx, (frame[2].o), (frame[0].i), (frame[1].i));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jbool SM_mindustry_entities_units_AIController_lambda$targetFlagActive$0_mindustry_gen_Building_R_boolean(jcontext ctx, jobject param0) {
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/units/AIController:lambda$targetFlagActive$0", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_entities_units_AIController(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(278);
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_items;
	if (sp[0].o == nullptr) goto label_1;
	}
	{
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_items;
	jint temp0 = (jint)((func_mindustry_world_modules_ItemModule_any_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_modules_ItemModule_any_R_boolean])(ctx, sp[0].o);
	if (temp0 != 0) goto label_2;
	}
label_1:;
	{
	sp[0].o = (jobject)((func_mindustry_gen_Building_status_R_mindustry_world_meta_BlockStatus) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_gen_Building_status_R_mindustry_world_meta_BlockStatus])(ctx, (frame[0].o));
	clinit_mindustry_world_meta_BlockStatus(ctx);
	sp[1].o = (jobject)SF_mindustry_world_meta_BlockStatus_noInput;
	if (sp[0].o == sp[1].o) goto label_3;
	}
label_2:;
	{
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_block;
	if (((jint)((mindustry_world_Block *) NULL_CHECK(sp[0].o))->F_targetable) == 0) goto label_3;
	}
	INST_ICONST(1);
	goto label_4;
label_3:;
	INST_ICONST(0);
label_4:;
	popStackFrame(ctx);
	INST_IRETURN();

	popStackFrame(ctx);
}

jbool SM_mindustry_entities_units_AIController_lambda$updateWeapons$1_mindustry_gen_Building_R_boolean(jcontext ctx, jobject param0) {
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/units/AIController:lambda$updateWeapons$1", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_entities_units_AIController(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(227);
	popStackFrame(ctx);
	return (jint(1));
	}

	popStackFrame(ctx);
}

jbool SM_mindustry_entities_units_AIController_lambda$updateWeapons$0_mindustry_gen_Unit_R_boolean(jcontext ctx, jobject param0) {
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/units/AIController:lambda$updateWeapons$0", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_entities_units_AIController(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(227);
	jint temp0 = (jint)((func_mindustry_gen_Unit_isFlying_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_gen_Unit_isFlying_R_boolean])(ctx, (frame[0].o));
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

void clinit_mindustry_entities_units_AIController(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	SF_mindustry_entities_units_AIController_rotateBackTimer = jfloat(300.0f);
	SF_mindustry_entities_units_AIController_timerTarget = jint(0);
	SF_mindustry_entities_units_AIController_timerTarget2 = jint(1);
	SF_mindustry_entities_units_AIController_timerTarget3 = jint(2);
	SF_mindustry_entities_units_AIController_timerTarget4 = jint(3);
	jtype frame[2];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/units/AIController:<clinit>", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_entities_units_AIController(ctx);
	{
	LINE_NUMBER(21);
	clinit_arc_math_geom_Vec2(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_math_geom_Vec2);
	init_arc_math_geom_Vec2(ctx, sp[0].o);
	clinit_mindustry_entities_units_AIController(ctx);
	SF_mindustry_entities_units_AIController_vec = sp[0].o;
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

static void initAnnotations(jcontext ctx) {
	auto &clazz = class_mindustry_entities_units_AIController;
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

	{ // Field fallback
		auto annotationArray = (jarray) createArray(ctx, &class_java_lang_annotation_Annotation, 1);
		fields[8]->F_annotations = (intptr_t) annotationArray;
		auto annotations = (jobject *) annotationArray->data;
		annotations[0] = gcAlloc(ctx, &class_arc_util_Nullable);
	}

	fields[9]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	{ // Field target
		auto annotationArray = (jarray) createArray(ctx, &class_java_lang_annotation_Annotation, 1);
		fields[10]->F_annotations = (intptr_t) annotationArray;
		auto annotations = (jobject *) annotationArray->data;
		annotations[0] = gcAlloc(ctx, &class_arc_util_Nullable);
	}

	{ // Field bomberTarget
		auto annotationArray = (jarray) createArray(ctx, &class_java_lang_annotation_Annotation, 1);
		fields[11]->F_annotations = (intptr_t) annotationArray;
		auto annotations = (jobject *) annotationArray->data;
		annotations[0] = gcAlloc(ctx, &class_arc_util_Nullable);
	}

	fields[12]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	((java_lang_reflect_Method *) ((java_lang_reflect_Constructor *) constructors[0])->F_method)->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[0]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[1]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[2]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[3]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[4]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[5]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[6]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[7]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	{ // Method fallback
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

	{ // Method getClosestSpawner
		auto annotationArray = (jarray) createArray(ctx, &class_java_lang_annotation_Annotation, 1);
		methods[34]->F_annotations = (intptr_t) annotationArray;
		auto annotations = (jobject *) annotationArray->data;
		annotations[0] = gcAlloc(ctx, &class_arc_util_Nullable);
	}

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
}

void *vtable_mindustry_entities_units_AIController[] {
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
	(void *) M_mindustry_entities_units_AIController_updateMovement,
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

static jclass interfaces[] { &class_mindustry_entities_units_UnitController, };

static FieldMetadata fields[] {
	{ "vec", &class_arc_math_geom_Vec2, (intptr_t) &SF_mindustry_entities_units_AIController_vec, "Larc/math/geom/Vec2;", 28 },
	{ "rotateBackTimer", &class_float, (intptr_t) &SF_mindustry_entities_units_AIController_rotateBackTimer, "F", 28 },
	{ "timerTarget", &class_int, (intptr_t) &SF_mindustry_entities_units_AIController_timerTarget, "I", 28 },
	{ "timerTarget2", &class_int, (intptr_t) &SF_mindustry_entities_units_AIController_timerTarget2, "I", 28 },
	{ "timerTarget3", &class_int, (intptr_t) &SF_mindustry_entities_units_AIController_timerTarget3, "I", 28 },
	{ "timerTarget4", &class_int, (intptr_t) &SF_mindustry_entities_units_AIController_timerTarget4, "I", 28 },
	{ "unit", &class_mindustry_gen_Unit, offsetof(mindustry_entities_units_AIController, F_unit), "Lmindustry/gen/Unit;", 4 },
	{ "timer", &class_arc_util_Interval, offsetof(mindustry_entities_units_AIController, F_timer), "Larc/util/Interval;", 4 },
	{ "fallback", &class_mindustry_entities_units_AIController, offsetof(mindustry_entities_units_AIController, F_fallback), "Lmindustry/entities/units/AIController;", 4 },
	{ "noTargetTime", &class_float, offsetof(mindustry_entities_units_AIController, F_noTargetTime), "F", 4 },
	{ "target", &class_mindustry_gen_Teamc, offsetof(mindustry_entities_units_AIController, F_target), "Lmindustry/gen/Teamc;", 4 },
	{ "bomberTarget", &class_mindustry_gen_Teamc, offsetof(mindustry_entities_units_AIController, F_bomberTarget), "Lmindustry/gen/Teamc;", 4 },
	{ "turningAway", &class_boolean, offsetof(mindustry_entities_units_AIController, F_turningAway), "Z", 4 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_mindustry_entities_units_AIController, 0, "()V", 1 },
	{ "resetTimers", (intptr_t) M_mindustry_entities_units_AIController_resetTimers, VTABLE_mindustry_entities_units_AIController_resetTimers, "()V", 4 },
	{ "updateUnit", (intptr_t) M_mindustry_entities_units_AIController_updateUnit, VTABLE_mindustry_entities_units_AIController_updateUnit, "()V", 1 },
	{ "hasStance", (intptr_t) M_mindustry_entities_units_AIController_hasStance_mindustry_ai_UnitStance_R_boolean, VTABLE_mindustry_entities_units_AIController_hasStance_mindustry_ai_UnitStance_R_boolean, "(Lmindustry/ai/UnitStance;)Z", 1 },
	{ "stanceChanged", (intptr_t) M_mindustry_entities_units_AIController_stanceChanged, VTABLE_mindustry_entities_units_AIController_stanceChanged, "()V", 1 },
	{ "keepState", (intptr_t) M_mindustry_entities_units_AIController_keepState_R_boolean, VTABLE_mindustry_entities_units_AIController_keepState_R_boolean, "()Z", 1 },
	{ "afterRead", (intptr_t) M_mindustry_entities_units_AIController_afterRead_mindustry_gen_Unit, VTABLE_mindustry_entities_units_AIController_afterRead_mindustry_gen_Unit, "(Lmindustry/gen/Unit;)V", 1 },
	{ "isLogicControllable", (intptr_t) M_mindustry_entities_units_AIController_isLogicControllable_R_boolean, VTABLE_mindustry_entities_units_AIController_isLogicControllable_R_boolean, "()Z", 1 },
	{ "stopShooting", (intptr_t) M_mindustry_entities_units_AIController_stopShooting, VTABLE_mindustry_entities_units_AIController_stopShooting, "()V", 1 },
	{ "fallback", (intptr_t) M_mindustry_entities_units_AIController_fallback_R_mindustry_entities_units_AIController, VTABLE_mindustry_entities_units_AIController_fallback_R_mindustry_entities_units_AIController, "()Lmindustry/entities/units/AIController;", 1 },
	{ "useFallback", (intptr_t) M_mindustry_entities_units_AIController_useFallback_R_boolean, VTABLE_mindustry_entities_units_AIController_useFallback_R_boolean, "()Z", 1 },
	{ "updateVisuals", (intptr_t) M_mindustry_entities_units_AIController_updateVisuals, VTABLE_mindustry_entities_units_AIController_updateVisuals, "()V", 1 },
	{ "updateMovement", (intptr_t) M_mindustry_entities_units_AIController_updateMovement, VTABLE_mindustry_entities_units_AIController_updateMovement, "()V", 1 },
	{ "updateTargeting", (intptr_t) M_mindustry_entities_units_AIController_updateTargeting, VTABLE_mindustry_entities_units_AIController_updateTargeting, "()V", 1 },
	{ "faceTarget", (intptr_t) M_mindustry_entities_units_AIController_faceTarget, VTABLE_mindustry_entities_units_AIController_faceTarget, "()V", 1 },
	{ "faceMovement", (intptr_t) M_mindustry_entities_units_AIController_faceMovement, VTABLE_mindustry_entities_units_AIController_faceMovement, "()V", 1 },
	{ "invalid", (intptr_t) M_mindustry_entities_units_AIController_invalid_mindustry_gen_Teamc_R_boolean, VTABLE_mindustry_entities_units_AIController_invalid_mindustry_gen_Teamc_R_boolean, "(Lmindustry/gen/Teamc;)Z", 1 },
	{ "pathfind", (intptr_t) M_mindustry_entities_units_AIController_pathfind_int, VTABLE_mindustry_entities_units_AIController_pathfind_int, "(I)V", 1 },
	{ "pathfind", (intptr_t) M_mindustry_entities_units_AIController_pathfind_int_boolean, VTABLE_mindustry_entities_units_AIController_pathfind_int_boolean, "(IZ)V", 1 },
	{ "pathfind", (intptr_t) M_mindustry_entities_units_AIController_pathfind_int_boolean_boolean, VTABLE_mindustry_entities_units_AIController_pathfind_int_boolean_boolean, "(IZZ)V", 1 },
	{ "alterPathfind", (intptr_t) M_mindustry_entities_units_AIController_alterPathfind_arc_math_geom_Vec2_R_arc_math_geom_Vec2, VTABLE_mindustry_entities_units_AIController_alterPathfind_arc_math_geom_Vec2_R_arc_math_geom_Vec2, "(Larc/math/geom/Vec2;)Larc/math/geom/Vec2;", 1 },
	{ "targetInvalidated", (intptr_t) M_mindustry_entities_units_AIController_targetInvalidated, VTABLE_mindustry_entities_units_AIController_targetInvalidated, "()V", 1 },
	{ "updateWeapons", (intptr_t) M_mindustry_entities_units_AIController_updateWeapons, VTABLE_mindustry_entities_units_AIController_updateWeapons, "()V", 1 },
	{ "checkTarget", (intptr_t) M_mindustry_entities_units_AIController_checkTarget_mindustry_gen_Teamc_float_float_float_R_boolean, VTABLE_mindustry_entities_units_AIController_checkTarget_mindustry_gen_Teamc_float_float_float_R_boolean, "(Lmindustry/gen/Teamc;FFF)Z", 1 },
	{ "shouldFire", (intptr_t) M_mindustry_entities_units_AIController_shouldFire_R_boolean, VTABLE_mindustry_entities_units_AIController_shouldFire_R_boolean, "()Z", 1 },
	{ "shouldShoot", (intptr_t) M_mindustry_entities_units_AIController_shouldShoot_R_boolean, VTABLE_mindustry_entities_units_AIController_shouldShoot_R_boolean, "()Z", 1 },
	{ "targetFlag", (intptr_t) M_mindustry_entities_units_AIController_targetFlag_float_float_mindustry_world_meta_BlockFlag_boolean_R_mindustry_gen_Teamc, VTABLE_mindustry_entities_units_AIController_targetFlag_float_float_mindustry_world_meta_BlockFlag_boolean_R_mindustry_gen_Teamc, "(FFLmindustry/world/meta/BlockFlag;Z)Lmindustry/gen/Teamc;", 1 },
	{ "targetFlagActive", (intptr_t) M_mindustry_entities_units_AIController_targetFlagActive_float_float_mindustry_world_meta_BlockFlag_boolean_R_mindustry_gen_Teamc, VTABLE_mindustry_entities_units_AIController_targetFlagActive_float_float_mindustry_world_meta_BlockFlag_boolean_R_mindustry_gen_Teamc, "(FFLmindustry/world/meta/BlockFlag;Z)Lmindustry/gen/Teamc;", 1 },
	{ "target", (intptr_t) M_mindustry_entities_units_AIController_target_float_float_float_boolean_boolean_R_mindustry_gen_Teamc, VTABLE_mindustry_entities_units_AIController_target_float_float_float_boolean_boolean_R_mindustry_gen_Teamc, "(FFFZZ)Lmindustry/gen/Teamc;", 1 },
	{ "retarget", (intptr_t) M_mindustry_entities_units_AIController_retarget_R_boolean, VTABLE_mindustry_entities_units_AIController_retarget_R_boolean, "()Z", 1 },
	{ "findMainTarget", (intptr_t) M_mindustry_entities_units_AIController_findMainTarget_float_float_float_boolean_boolean_R_mindustry_gen_Teamc, VTABLE_mindustry_entities_units_AIController_findMainTarget_float_float_float_boolean_boolean_R_mindustry_gen_Teamc, "(FFFZZ)Lmindustry/gen/Teamc;", 1 },
	{ "findTarget", (intptr_t) M_mindustry_entities_units_AIController_findTarget_float_float_float_boolean_boolean_R_mindustry_gen_Teamc, VTABLE_mindustry_entities_units_AIController_findTarget_float_float_float_boolean_boolean_R_mindustry_gen_Teamc, "(FFFZZ)Lmindustry/gen/Teamc;", 1 },
	{ "commandTarget", (intptr_t) M_mindustry_entities_units_AIController_commandTarget_mindustry_gen_Teamc, VTABLE_mindustry_entities_units_AIController_commandTarget_mindustry_gen_Teamc, "(Lmindustry/gen/Teamc;)V", 1 },
	{ "commandPosition", (intptr_t) M_mindustry_entities_units_AIController_commandPosition_arc_math_geom_Vec2, VTABLE_mindustry_entities_units_AIController_commandPosition_arc_math_geom_Vec2, "(Larc/math/geom/Vec2;)V", 1 },
	{ "init", (intptr_t) M_mindustry_entities_units_AIController_init, VTABLE_mindustry_entities_units_AIController_init, "()V", 1 },
	{ "getClosestSpawner", (intptr_t) M_mindustry_entities_units_AIController_getClosestSpawner_R_mindustry_world_Tile, VTABLE_mindustry_entities_units_AIController_getClosestSpawner_R_mindustry_world_Tile, "()Lmindustry/world/Tile;", 1 },
	{ "unloadPayloads", (intptr_t) M_mindustry_entities_units_AIController_unloadPayloads, VTABLE_mindustry_entities_units_AIController_unloadPayloads, "()V", 1 },
	{ "circleAttack", (intptr_t) M_mindustry_entities_units_AIController_circleAttack_float, VTABLE_mindustry_entities_units_AIController_circleAttack_float, "(F)V", 1 },
	{ "circle", (intptr_t) M_mindustry_entities_units_AIController_circle_arc_math_geom_Position_float, VTABLE_mindustry_entities_units_AIController_circle_arc_math_geom_Position_float, "(Larc/math/geom/Position;F)V", 1 },
	{ "circle", (intptr_t) M_mindustry_entities_units_AIController_circle_arc_math_geom_Position_float_float, VTABLE_mindustry_entities_units_AIController_circle_arc_math_geom_Position_float_float, "(Larc/math/geom/Position;FF)V", 1 },
	{ "moveTo", (intptr_t) M_mindustry_entities_units_AIController_moveTo_arc_math_geom_Position_float, VTABLE_mindustry_entities_units_AIController_moveTo_arc_math_geom_Position_float, "(Larc/math/geom/Position;F)V", 1 },
	{ "moveTo", (intptr_t) M_mindustry_entities_units_AIController_moveTo_arc_math_geom_Position_float_float, VTABLE_mindustry_entities_units_AIController_moveTo_arc_math_geom_Position_float_float, "(Larc/math/geom/Position;FF)V", 1 },
	{ "moveTo", (intptr_t) M_mindustry_entities_units_AIController_moveTo_arc_math_geom_Position_float_float_boolean_arc_math_geom_Vec2, VTABLE_mindustry_entities_units_AIController_moveTo_arc_math_geom_Position_float_float_boolean_arc_math_geom_Vec2, "(Larc/math/geom/Position;FFZLarc/math/geom/Vec2;)V", 1 },
	{ "moveTo", (intptr_t) M_mindustry_entities_units_AIController_moveTo_arc_math_geom_Position_float_float_boolean_arc_math_geom_Vec2_boolean, VTABLE_mindustry_entities_units_AIController_moveTo_arc_math_geom_Position_float_float_boolean_arc_math_geom_Vec2_boolean, "(Larc/math/geom/Position;FFZLarc/math/geom/Vec2;Z)V", 1 },
	{ "prefSpeed", (intptr_t) M_mindustry_entities_units_AIController_prefSpeed_R_float, VTABLE_mindustry_entities_units_AIController_prefSpeed_R_float, "()F", 1 },
	{ "unit", (intptr_t) M_mindustry_entities_units_AIController_unit_mindustry_gen_Unit, VTABLE_mindustry_entities_units_AIController_unit_mindustry_gen_Unit, "(Lmindustry/gen/Unit;)V", 1 },
	{ "unit", (intptr_t) M_mindustry_entities_units_AIController_unit_R_mindustry_gen_Unit, VTABLE_mindustry_entities_units_AIController_unit_R_mindustry_gen_Unit, "()Lmindustry/gen/Unit;", 1 },
	{ "lambda$target$1", (intptr_t) M_mindustry_entities_units_AIController_lambda$target$1_boolean_mindustry_gen_Building_R_boolean, VTABLE_mindustry_entities_units_AIController_lambda$target$1_boolean_mindustry_gen_Building_R_boolean, "(ZLmindustry/gen/Building;)Z", 4098 },
	{ "lambda$target$0", (intptr_t) SM_mindustry_entities_units_AIController_lambda$target$0_boolean_boolean_mindustry_gen_Unit_R_boolean, 0, "(ZZLmindustry/gen/Unit;)Z", 4106 },
	{ "lambda$targetFlagActive$0", (intptr_t) SM_mindustry_entities_units_AIController_lambda$targetFlagActive$0_mindustry_gen_Building_R_boolean, 0, "(Lmindustry/gen/Building;)Z", 4106 },
	{ "lambda$updateWeapons$1", (intptr_t) SM_mindustry_entities_units_AIController_lambda$updateWeapons$1_mindustry_gen_Building_R_boolean, 0, "(Lmindustry/gen/Building;)Z", 4106 },
	{ "lambda$updateWeapons$0", (intptr_t) SM_mindustry_entities_units_AIController_lambda$updateWeapons$0_mindustry_gen_Unit_R_boolean, 0, "(Lmindustry/gen/Unit;)Z", 4106 },
	{ "<clinit>", (intptr_t) clinit_mindustry_entities_units_AIController, 0, "()V", 8 },
};

Class class_mindustry_entities_units_AIController{
		.nativeName = (intptr_t) "mindustry/entities/units/AIController",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(mindustry_entities_units_AIController),
		.classVtable = (intptr_t) vtable_mindustry_entities_units_AIController,
		.staticInitializer = (intptr_t) clinit_mindustry_entities_units_AIController,
		.annotationInitializer = (intptr_t) initAnnotations,
		.markFunction = (intptr_t) mark_mindustry_entities_units_AIController,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 33,
		.interfaceCount = 1,
		.nativeInterfaces = (intptr_t) interfaces,
		.fieldCount = 13,
		.nativeFields = (intptr_t) fields,
		.methodCount = 53,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 61,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_mindustry_entities_units_AIController = registerClass(&class_mindustry_entities_units_AIController);

}
