#include "mindustry/ai/types/FlyingFollowAI.h"
#include "java/lang/Math.h"
#include "arc/math/Mathf.h"
#include "mindustry/gen/Teamc.h"
#include "mindustry/gen/Unit.h"
#include "mindustry/ai/types/FlyingFollowAI.h"
#include "mindustry/entities/Sized.h"
#include "mindustry/game/Rules.h"
#include "mindustry/entities/Units_Sortf.h"
#include "arc/util/Interval.h"
#include "mindustry/type/UnitType.h"
#include "mindustry/gen/Unitc.h"
#include "mindustry/entities/units/UnitController.h"
#include "mindustry/ai/types/FlyingFollowAI_invoke_mindustry_entities_Units_Sortf_1.h"
#include "java/lang/Object.h"
#include "mindustry/entities/units/AIController.h"
#include "mindustry/ai/types/FlyingAI.h"
#include "mindustry/ai/types/FlyingFollowAI_invoke_arc_func_Boolf_1.h"
#include "mindustry/entities/Units.h"
#include "arc/math/geom/Position.h"
#include "mindustry/game/Team.h"
#include "mindustry/Vars.h"
#include "mindustry/core/GameState.h"
#include "arc/func/Boolf.h"

extern "C" {


void mark_mindustry_ai_types_FlyingFollowAI(jobject object, jint mark, jint depth) {
	if (!object) {
		return;
	}
	if (depth > GC_DEPTH_ALWAYS && (object->gcMark < GC_MARK_START || object->gcMark == mark))
		return;
	if (depth > MAX_GC_MARK_DEPTH) {
		markDeepObject(object);
		return;
	}
	mark_mindustry_ai_types_FlyingAI(object, mark, depth);
	if (object->gcMark >= GC_MARK_START)
		object->gcMark = mark;
	auto self = (mindustry_ai_types_FlyingFollowAI *) object;
	if (self->F_following)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_following)->clazz)->markFunction)((jobject) self->F_following, mark, depth + 1);
}

void clinit_mindustry_ai_types_FlyingFollowAI(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	clinit_mindustry_ai_types_FlyingAI(ctx);
}

void init_mindustry_ai_types_FlyingFollowAI(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ai/types/FlyingFollowAI:<init>", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_ai_types_FlyingFollowAI(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(11);
	init_mindustry_ai_types_FlyingAI(ctx, (frame[0].o));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_ai_types_FlyingFollowAI_updateMovement(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[10];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ai/types/FlyingFollowAI:updateMovement", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(16);
	((func_mindustry_ai_types_FlyingFollowAI_unloadPayloads) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_ai_types_FlyingFollowAI_unloadPayloads])(ctx, (frame[0].o));
	LINE_NUMBER(18);
	sp[0].o = (jobject)((mindustry_ai_types_FlyingFollowAI *) NULL_CHECK((frame[0].o)))->F_following;
	if (sp[0].o == nullptr) goto label_2;
	}
	{
	LINE_NUMBER(19);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((mindustry_ai_types_FlyingFollowAI *) NULL_CHECK((frame[0].o)))->F_following;
	sp[2].o = (jobject)((mindustry_ai_types_FlyingFollowAI *) NULL_CHECK((frame[0].o)))->F_following;
	frame[2].o = sp[2].o;
	sp += 2;
	if ((isInstance(ctx, (frame[2].o), &class_mindustry_entities_Sized)) == 0) goto label_4;
	}
	{
	frame[1].o = (checkCast(ctx, &class_mindustry_entities_Sized, (frame[2].o)));
	jfloat temp0 = (jfloat)((func_mindustry_entities_Sized_hitSize_R_float) resolveInterfaceMethod(ctx, &class_mindustry_entities_Sized, INDEX_mindustry_entities_Sized_hitSize_R_float, (frame[1].o)))(ctx, (frame[1].o));
	jfloat temp1 = (temp0 / (jfloat(2))) * (jfloat(1.1f));
	sp[0].f = temp1;
	sp += 1;
	goto label_6;
	}
label_4:;
	INST_FCONST(0);
label_6:;
	{
	sp -= 3;
	sp[3].o = (jobject)((mindustry_entities_units_AIController *) NULL_CHECK((frame[0].o)))->F_unit;
	((func_mindustry_ai_types_FlyingFollowAI_moveTo_arc_math_geom_Position_float_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_ai_types_FlyingFollowAI_moveTo_arc_math_geom_Position_float_float])(ctx, sp[0].o, sp[1].o, ((sp[2].f + (((jfloat)((mindustry_gen_Unit *) NULL_CHECK(sp[3].o))->F_hitSize) / (jfloat(2)))) + (jfloat(15.0f))), (jfloat(50.0f)));
	goto label_7;
	}
label_2:;
	{
	LINE_NUMBER(20);
	sp[0].o = (jobject)((mindustry_entities_units_AIController *) NULL_CHECK((frame[0].o)))->F_target;
	if (sp[0].o == nullptr) goto label_7;
	}
	{
	sp[0].o = (jobject)((mindustry_entities_units_AIController *) NULL_CHECK((frame[0].o)))->F_unit;
	jint temp0 = (jint)((func_mindustry_gen_Unit_hasWeapons_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_gen_Unit_hasWeapons_R_boolean])(ctx, sp[0].o);
	if (temp0 == 0) goto label_7;
	}
	{
	LINE_NUMBER(21);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((mindustry_entities_units_AIController *) NULL_CHECK((frame[0].o)))->F_target;
	((func_mindustry_ai_types_FlyingFollowAI_moveTo_arc_math_geom_Position_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_ai_types_FlyingFollowAI_moveTo_arc_math_geom_Position_float])(ctx, sp[0].o, sp[1].o, (jfloat(80.0f)));
	}
label_7:;
	{
	LINE_NUMBER(24);
	jint temp0 = (jint)((func_mindustry_ai_types_FlyingFollowAI_shouldFaceTarget_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_ai_types_FlyingFollowAI_shouldFaceTarget_R_boolean])(ctx, (frame[0].o));
	if (temp0 == 0) goto label_9;
	}
	{
	LINE_NUMBER(25);
	sp[0].o = (jobject)((mindustry_entities_units_AIController *) NULL_CHECK((frame[0].o)))->F_unit;
	sp[1].o = (jobject)((mindustry_entities_units_AIController *) NULL_CHECK((frame[0].o)))->F_target;
	((func_mindustry_gen_Unit_lookAt_arc_math_geom_Position) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_gen_Unit_lookAt_arc_math_geom_Position])(ctx, sp[0].o, sp[1].o);
	goto label_11;
	}
label_9:;
	{
	LINE_NUMBER(26);
	sp[0].o = (jobject)((mindustry_ai_types_FlyingFollowAI *) NULL_CHECK((frame[0].o)))->F_following;
	if (sp[0].o == nullptr) goto label_11;
	}
	{
	LINE_NUMBER(27);
	sp[0].o = (jobject)((mindustry_entities_units_AIController *) NULL_CHECK((frame[0].o)))->F_unit;
	sp[1].o = (jobject)((mindustry_ai_types_FlyingFollowAI *) NULL_CHECK((frame[0].o)))->F_following;
	((func_mindustry_gen_Unit_lookAt_arc_math_geom_Position) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_gen_Unit_lookAt_arc_math_geom_Position])(ctx, sp[0].o, sp[1].o);
	}
label_11:;
	{
	LINE_NUMBER(30);
	sp[0].o = (jobject)((mindustry_entities_units_AIController *) NULL_CHECK((frame[0].o)))->F_timer;
	jint temp0 = (jint)((func_arc_util_Interval_get_int_float_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_util_Interval_get_int_float_R_boolean])(ctx, sp[0].o, (jint(2)), (jfloat(30.0f)));
	if (temp0 == 0) goto label_13;
	}
	{
	LINE_NUMBER(31);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((mindustry_entities_units_AIController *) NULL_CHECK((frame[0].o)))->F_unit;
	sp[1].o = (jobject)((mindustry_gen_Unit *) NULL_CHECK(sp[1].o))->F_team;
	sp[2].o = (jobject)((mindustry_entities_units_AIController *) NULL_CHECK((frame[0].o)))->F_unit;
	jfloat temp0 = (jfloat)((mindustry_gen_Unit *) NULL_CHECK(sp[2].o))->F_x;
	sp[2].o = (jobject)((mindustry_entities_units_AIController *) NULL_CHECK((frame[0].o)))->F_unit;
	jfloat temp1 = (jfloat)((mindustry_gen_Unit *) NULL_CHECK(sp[2].o))->F_y;
	sp[2].o = (jobject)((mindustry_entities_units_AIController *) NULL_CHECK((frame[0].o)))->F_unit;
	sp[2].o = (jobject)((mindustry_gen_Unit *) NULL_CHECK(sp[2].o))->F_type;
	jfloat temp2 = (jfloat)SM_java_lang_Math_max_float_float_R_float(ctx, ((jfloat)((mindustry_type_UnitType *) NULL_CHECK(sp[2].o))->F_range), (jfloat(400.0f)));
	{ /* InvokeDynamic */
		clinit_mindustry_ai_types_FlyingFollowAI_invoke_arc_func_Boolf_1(ctx);
		auto proxy = (mindustry_ai_types_FlyingFollowAI_invoke_arc_func_Boolf_1 *) gcAlloc(ctx, &class_mindustry_ai_types_FlyingFollowAI_invoke_arc_func_Boolf_1);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[2].o = (jobject) proxy;
	}
	{ /* InvokeDynamic */
		clinit_mindustry_ai_types_FlyingFollowAI_invoke_mindustry_entities_Units$Sortf_1(ctx);
		auto proxy = (mindustry_ai_types_FlyingFollowAI_invoke_mindustry_entities_Units$Sortf_1 *) gcAlloc(ctx, &class_mindustry_ai_types_FlyingFollowAI_invoke_mindustry_entities_Units$Sortf_1);
		sp[3].o = (jobject) proxy;
	}
	sp[1].o = (jobject)SM_mindustry_entities_Units_closest_mindustry_game_Team_float_float_float_arc_func_Boolf_mindustry_entities_Units$Sortf_R_mindustry_gen_Unit(ctx, sp[1].o, temp0, temp1, temp2, sp[2].o, sp[3].o);
	((mindustry_ai_types_FlyingFollowAI *) NULL_CHECK(sp[0].o))->F_following = (jref) sp[1].o;
	}
label_13:;
	LINE_NUMBER(33);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jbool M_mindustry_ai_types_FlyingFollowAI_shouldFaceTarget_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ai/types/FlyingFollowAI:shouldFaceTarget", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(36);
	sp[0].o = (jobject)((mindustry_entities_units_AIController *) NULL_CHECK((frame[0].o)))->F_target;
	if (sp[0].o == nullptr) goto label_1;
	}
	{
	sp[0].o = (jobject)((mindustry_ai_types_FlyingFollowAI *) NULL_CHECK((frame[0].o)))->F_following;
	if (sp[0].o == nullptr) goto label_2;
	}
	{
	sp[0].o = (jobject)((mindustry_entities_units_AIController *) NULL_CHECK((frame[0].o)))->F_unit;
	sp[1].o = (jobject)((mindustry_entities_units_AIController *) NULL_CHECK((frame[0].o)))->F_target;
	sp[2].o = (jobject)((mindustry_entities_units_AIController *) NULL_CHECK((frame[0].o)))->F_unit;
	jfloat temp0 = (jfloat)((func_mindustry_gen_Unit_range_R_float) ((void **) nullCheck(ctx, sp[2].o)->vtable)[VTABLE_mindustry_gen_Unit_range_R_float])(ctx, sp[2].o);
	jint temp1 = (jint)((func_mindustry_gen_Unit_within_arc_math_geom_Position_float_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_gen_Unit_within_arc_math_geom_Position_float_R_boolean])(ctx, sp[0].o, sp[1].o, temp0);
	if (temp1 == 0) goto label_1;
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

void M_mindustry_ai_types_FlyingFollowAI_updateVisuals(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ai/types/FlyingFollowAI:updateVisuals", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(41);
	sp[0].o = (jobject)((mindustry_entities_units_AIController *) NULL_CHECK((frame[0].o)))->F_unit;
	jint temp0 = (jint)((func_mindustry_gen_Unit_isFlying_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_gen_Unit_isFlying_R_boolean])(ctx, sp[0].o);
	if (temp0 == 0) goto label_1;
	}
	{
	LINE_NUMBER(42);
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
	LINE_NUMBER(44);
	jint temp0 = (jint)((func_mindustry_ai_types_FlyingFollowAI_shouldFaceTarget_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_ai_types_FlyingFollowAI_shouldFaceTarget_R_boolean])(ctx, (frame[0].o));
	if (temp0 != 0) goto label_1;
	}
	{
	LINE_NUMBER(45);
	sp[0].o = (jobject)((mindustry_entities_units_AIController *) NULL_CHECK((frame[0].o)))->F_unit;
	sp[1].o = (jobject)((mindustry_entities_units_AIController *) NULL_CHECK((frame[0].o)))->F_unit;
	jfloat temp0 = (jfloat)((func_mindustry_gen_Unit_prefRotation_R_float) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_mindustry_gen_Unit_prefRotation_R_float])(ctx, sp[1].o);
	((func_mindustry_gen_Unit_lookAt_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_gen_Unit_lookAt_float])(ctx, sp[0].o, temp0);
	}
label_1:;
	LINE_NUMBER(48);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jobject M_mindustry_ai_types_FlyingFollowAI_fallback_R_mindustry_entities_units_AIController(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ai/types/FlyingFollowAI:fallback", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(52);
	clinit_mindustry_ai_types_FlyingAI(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_ai_types_FlyingAI);
	init_mindustry_ai_types_FlyingAI(ctx, sp[0].o);
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jbool M_mindustry_ai_types_FlyingFollowAI_useFallback_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ai/types/FlyingFollowAI:useFallback", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(58);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	sp[0].o = (jobject)((mindustry_core_GameState *) NULL_CHECK(sp[0].o))->F_rules;
	if (((jint)((mindustry_game_Rules *) NULL_CHECK(sp[0].o))->F_pvp) != 0) goto label_1;
	}
	{
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	sp[0].o = (jobject)((mindustry_core_GameState *) NULL_CHECK(sp[0].o))->F_rules;
	sp[0].o = (jobject)((mindustry_game_Rules *) NULL_CHECK(sp[0].o))->F_waveTeam;
	sp[1].o = (jobject)((mindustry_entities_units_AIController *) NULL_CHECK((frame[0].o)))->F_unit;
	sp[1].o = (jobject)((mindustry_gen_Unit *) NULL_CHECK(sp[1].o))->F_team;
	if (sp[0].o == sp[1].o) goto label_2;
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

jfloat SM_mindustry_ai_types_FlyingFollowAI_lambda$updateMovement$1_mindustry_gen_Unit_float_float_R_float(jcontext ctx, jobject param0, jfloat param1, jfloat param2) {
	jtype frame[8];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ai/types/FlyingFollowAI:lambda$updateMovement$1", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_ai_types_FlyingFollowAI(ctx);
	frame[0].o = param0;
	frame[1].f = param1;
	frame[2].f = param2;
	{
	LINE_NUMBER(31);
	jfloat temp0 = -((jfloat)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_maxHealth);
	jfloat temp1 = (jfloat)SM_arc_math_Mathf_dst2_float_float_float_float_R_float(ctx, ((jfloat)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_x), ((jfloat)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_y), (frame[1].f), (frame[2].f));
	popStackFrame(ctx);
	return (temp0 + (temp1 / (jfloat(6400.0f))));
	}

	popStackFrame(ctx);
}

jbool M_mindustry_ai_types_FlyingFollowAI_lambda$updateMovement$0_mindustry_gen_Unit_R_boolean(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ai/types/FlyingFollowAI:lambda$updateMovement$0", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(31);
	jint temp0 = (jint)((func_mindustry_gen_Unit_dead_R_boolean) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_gen_Unit_dead_R_boolean])(ctx, (frame[1].o));
	if (temp0 != 0) goto label_1;
	}
	{
	sp[0].o = (jobject)((func_mindustry_gen_Unit_controller_R_mindustry_entities_units_UnitController) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_gen_Unit_controller_R_mindustry_entities_units_UnitController])(ctx, (frame[1].o));
	if ((isInstance(ctx, sp[0].o, &class_mindustry_ai_types_FlyingFollowAI)) != 0) goto label_1;
	}
	{
	sp[0].o = (jobject)((mindustry_gen_Unit *) NULL_CHECK((frame[1].o)))->F_type;
	sp[1].o = (jobject)((mindustry_entities_units_AIController *) NULL_CHECK((frame[0].o)))->F_unit;
	sp[1].o = (jobject)((mindustry_gen_Unit *) NULL_CHECK(sp[1].o))->F_type;
	if (sp[0].o == sp[1].o) goto label_1;
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

void *vtable_mindustry_ai_types_FlyingFollowAI[] {
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
	(void *) M_mindustry_ai_types_FlyingFollowAI_fallback_R_mindustry_entities_units_AIController,
	(void *) M_mindustry_ai_types_FlyingFollowAI_useFallback_R_boolean,
	(void *) M_mindustry_ai_types_FlyingFollowAI_updateVisuals,
	(void *) M_mindustry_ai_types_FlyingFollowAI_updateMovement,
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
	(void *) M_mindustry_ai_types_FlyingAI_findMainTarget_float_float_float_boolean_boolean_R_mindustry_gen_Teamc,
	(void *) M_mindustry_ai_types_FlyingAI_findTarget_float_float_float_boolean_boolean_R_mindustry_gen_Teamc,
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
	(void *) M_mindustry_ai_types_FlyingFollowAI_shouldFaceTarget_R_boolean,
	(void *) M_mindustry_ai_types_FlyingFollowAI_lambda$updateMovement$0_mindustry_gen_Unit_R_boolean,
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
	{ "shouldFaceTarget", "()Z" },
	{ "lambda$updateMovement$0", "(Lmindustry/gen/Unit;)Z" },
};

static FieldMetadata fields[] {
	{ "following", &class_mindustry_gen_Teamc, offsetof(mindustry_ai_types_FlyingFollowAI, F_following), "Lmindustry/gen/Teamc;", 1 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_mindustry_ai_types_FlyingFollowAI, 0, "()V", 1 },
	{ "updateMovement", (intptr_t) M_mindustry_ai_types_FlyingFollowAI_updateMovement, VTABLE_mindustry_ai_types_FlyingFollowAI_updateMovement, "()V", 1 },
	{ "shouldFaceTarget", (intptr_t) M_mindustry_ai_types_FlyingFollowAI_shouldFaceTarget_R_boolean, VTABLE_mindustry_ai_types_FlyingFollowAI_shouldFaceTarget_R_boolean, "()Z", 1 },
	{ "updateVisuals", (intptr_t) M_mindustry_ai_types_FlyingFollowAI_updateVisuals, VTABLE_mindustry_ai_types_FlyingFollowAI_updateVisuals, "()V", 1 },
	{ "fallback", (intptr_t) M_mindustry_ai_types_FlyingFollowAI_fallback_R_mindustry_entities_units_AIController, VTABLE_mindustry_ai_types_FlyingFollowAI_fallback_R_mindustry_entities_units_AIController, "()Lmindustry/entities/units/AIController;", 1 },
	{ "useFallback", (intptr_t) M_mindustry_ai_types_FlyingFollowAI_useFallback_R_boolean, VTABLE_mindustry_ai_types_FlyingFollowAI_useFallback_R_boolean, "()Z", 1 },
	{ "lambda$updateMovement$1", (intptr_t) SM_mindustry_ai_types_FlyingFollowAI_lambda$updateMovement$1_mindustry_gen_Unit_float_float_R_float, 0, "(Lmindustry/gen/Unit;FF)F", 4106 },
	{ "lambda$updateMovement$0", (intptr_t) M_mindustry_ai_types_FlyingFollowAI_lambda$updateMovement$0_mindustry_gen_Unit_R_boolean, VTABLE_mindustry_ai_types_FlyingFollowAI_lambda$updateMovement$0_mindustry_gen_Unit_R_boolean, "(Lmindustry/gen/Unit;)Z", 4098 },
};

Class class_mindustry_ai_types_FlyingFollowAI{
		.nativeName = (intptr_t) "mindustry/ai/types/FlyingFollowAI",
		.parentClass = (intptr_t) &class_mindustry_ai_types_FlyingAI,
		.size = sizeof(mindustry_ai_types_FlyingFollowAI),
		.classVtable = (intptr_t) vtable_mindustry_ai_types_FlyingFollowAI,
		.staticInitializer = (intptr_t) clinit_mindustry_ai_types_FlyingFollowAI,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_mindustry_ai_types_FlyingFollowAI,
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
		.methodCount = 8,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 63,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_mindustry_ai_types_FlyingFollowAI = registerClass(&class_mindustry_ai_types_FlyingFollowAI);

}
