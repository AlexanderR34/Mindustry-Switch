#include "mindustry/ai/types/BoostAI.h"
#include "mindustry/gen/Teamc.h"
#include "java/lang/Object.h"
#include "mindustry/entities/units/AIController.h"
#include "mindustry/gen/Unit.h"
#include "mindustry/ai/types/BoostAI.h"
#include "mindustry/ai/types/CommandAI.h"
#include "mindustry/ai/UnitCommand.h"
#include "arc/math/geom/Position.h"
#include "mindustry/entities/units/UnitController.h"
#include "mindustry/gen/Unitc.h"

extern "C" {


void mark_mindustry_ai_types_BoostAI(jobject object, jint mark, jint depth) {
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
	auto self = (mindustry_ai_types_BoostAI *) object;
}

void clinit_mindustry_ai_types_BoostAI(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	clinit_mindustry_entities_units_AIController(ctx);
}

void init_mindustry_ai_types_BoostAI(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ai/types/BoostAI:<init>", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_ai_types_BoostAI(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(7);
	init_mindustry_entities_units_AIController(ctx, (frame[0].o));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_ai_types_BoostAI_updateUnit(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ai/types/BoostAI:updateUnit", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(11);
	sp[0].o = (jobject)((mindustry_entities_units_AIController *) NULL_CHECK((frame[0].o)))->F_unit;
	sp[0].o = (jobject)((func_mindustry_gen_Unit_controller_R_mindustry_entities_units_UnitController) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_gen_Unit_controller_R_mindustry_entities_units_UnitController])(ctx, sp[0].o);
	frame[2].o = sp[0].o;
	if ((isInstance(ctx, (frame[2].o), &class_mindustry_ai_types_CommandAI)) == 0) goto label_1;
	}
	{
	frame[1].o = (checkCast(ctx, &class_mindustry_ai_types_CommandAI, (frame[2].o)));
	LINE_NUMBER(12);
	((func_mindustry_ai_types_CommandAI_defaultBehavior) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_ai_types_CommandAI_defaultBehavior])(ctx, (frame[1].o));
	LINE_NUMBER(13);
	sp[0].o = (jobject)((mindustry_entities_units_AIController *) NULL_CHECK((frame[0].o)))->F_unit;
	((func_mindustry_gen_Unit_updateBoosting_boolean_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_gen_Unit_updateBoosting_boolean_boolean])(ctx, sp[0].o, (jint(1)), (jint(1)));
	LINE_NUMBER(16);
	sp[0].o = (jobject)((mindustry_ai_types_CommandAI *) NULL_CHECK((frame[1].o)))->F_attackTarget;
	if (sp[0].o == nullptr) goto label_5;
	}
	{
	sp[0].o = (jobject)((mindustry_entities_units_AIController *) NULL_CHECK((frame[0].o)))->F_unit;
	sp[1].o = (jobject)((mindustry_ai_types_CommandAI *) NULL_CHECK((frame[1].o)))->F_attackTarget;
	sp[2].o = (jobject)((mindustry_entities_units_AIController *) NULL_CHECK((frame[0].o)))->F_unit;
	jfloat temp0 = (jfloat)((func_mindustry_gen_Unit_range_R_float) ((void **) nullCheck(ctx, sp[2].o)->vtable)[VTABLE_mindustry_gen_Unit_range_R_float])(ctx, sp[2].o);
	jint temp1 = (jint)((func_mindustry_gen_Unit_within_arc_math_geom_Position_float_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_gen_Unit_within_arc_math_geom_Position_float_R_boolean])(ctx, sp[0].o, sp[1].o, temp0);
	if (temp1 == 0) goto label_5;
	}
	{
	LINE_NUMBER(17);
	sp[0].o = (jobject)((mindustry_entities_units_AIController *) NULL_CHECK((frame[0].o)))->F_unit;
	sp[0].o = (jobject)((func_mindustry_gen_Unit_command_R_mindustry_ai_types_CommandAI) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_gen_Unit_command_R_mindustry_ai_types_CommandAI])(ctx, sp[0].o);
	clinit_mindustry_ai_UnitCommand(ctx);
	sp[1].o = (jobject)SF_mindustry_ai_UnitCommand_moveCommand;
	((func_mindustry_ai_types_CommandAI_command_mindustry_ai_UnitCommand) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_ai_types_CommandAI_command_mindustry_ai_UnitCommand])(ctx, sp[0].o, sp[1].o);
	goto label_5;
	}
label_1:;
	{
	LINE_NUMBER(20);
	sp[0].o = (jobject)((mindustry_entities_units_AIController *) NULL_CHECK((frame[0].o)))->F_unit;
	((func_mindustry_gen_Unit_updateBoosting_boolean_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_gen_Unit_updateBoosting_boolean_boolean])(ctx, sp[0].o, (jint(1)), (jint(1)));
	}
label_5:;
	LINE_NUMBER(22);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void *vtable_mindustry_ai_types_BoostAI[] {
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
	(void *) M_mindustry_ai_types_BoostAI_updateUnit,
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

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_mindustry_ai_types_BoostAI, 0, "()V", 1 },
	{ "updateUnit", (intptr_t) M_mindustry_ai_types_BoostAI_updateUnit, VTABLE_mindustry_ai_types_BoostAI_updateUnit, "()V", 1 },
};

Class class_mindustry_ai_types_BoostAI{
		.nativeName = (intptr_t) "mindustry/ai/types/BoostAI",
		.parentClass = (intptr_t) &class_mindustry_entities_units_AIController,
		.size = sizeof(mindustry_ai_types_BoostAI),
		.classVtable = (intptr_t) vtable_mindustry_ai_types_BoostAI,
		.staticInitializer = (intptr_t) clinit_mindustry_ai_types_BoostAI,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_mindustry_ai_types_BoostAI,
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
		.methodCount = 2,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 61,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_mindustry_ai_types_BoostAI = registerClass(&class_mindustry_ai_types_BoostAI);

}
