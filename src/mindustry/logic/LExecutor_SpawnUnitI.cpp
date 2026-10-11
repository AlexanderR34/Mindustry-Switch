#include "mindustry/logic/LExecutor_SpawnUnitI.h"
#include "arc/math/Mathf.h"
#include "mindustry/game/EventType_UnitSpawnEvent.h"
#include "mindustry/net/Net.h"
#include "mindustry/gen/Unit.h"
#include "mindustry/logic/LVar.h"
#include "arc/Events.h"
#include "mindustry/logic/LExecutor_LInstruction.h"
#include "mindustry/logic/LExecutor.h"
#include "mindustry/type/UnitType.h"
#include "mindustry/gen/Unitc.h"
#include "java/lang/Object.h"
#include "mindustry/logic/LExecutor_SpawnUnitI.h"
#include "mindustry/entities/Units.h"
#include "mindustry/ai/WaveSpawner.h"
#include "mindustry/game/Team.h"
#include "mindustry/Vars.h"
#include "mindustry/core/World.h"

extern "C" {


void mark_mindustry_logic_LExecutor$SpawnUnitI(jobject object, jint mark, jint depth) {
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
	auto self = (mindustry_logic_LExecutor$SpawnUnitI *) object;
	if (self->F_type)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_type)->clazz)->markFunction)((jobject) self->F_type, mark, depth + 1);
	if (self->F_x)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_x)->clazz)->markFunction)((jobject) self->F_x, mark, depth + 1);
	if (self->F_y)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_y)->clazz)->markFunction)((jobject) self->F_y, mark, depth + 1);
	if (self->F_rotation)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_rotation)->clazz)->markFunction)((jobject) self->F_rotation, mark, depth + 1);
	if (self->F_team)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_team)->clazz)->markFunction)((jobject) self->F_team, mark, depth + 1);
	if (self->F_result)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_result)->clazz)->markFunction)((jobject) self->F_result, mark, depth + 1);
	if (self->F_effect)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_effect)->clazz)->markFunction)((jobject) self->F_effect, mark, depth + 1);
}

void clinit_mindustry_logic_LExecutor$SpawnUnitI(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
}

void init_mindustry_logic_LExecutor$SpawnUnitI_mindustry_logic_LVar_mindustry_logic_LVar_mindustry_logic_LVar_mindustry_logic_LVar_mindustry_logic_LVar_mindustry_logic_LVar_mindustry_logic_LVar(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2, jobject param3, jobject param4, jobject param5, jobject param6) {
	NULL_CHECK(self);
	jtype frame[10];
	auto stack = &frame[8];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/logic/LExecutor$SpawnUnitI:<init>", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_logic_LExecutor$SpawnUnitI(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].o = param2;
	frame[4].o = param3;
	frame[5].o = param4;
	frame[6].o = param5;
	frame[7].o = param6;
	{
	LINE_NUMBER(1618);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(1619);
	((mindustry_logic_LExecutor$SpawnUnitI *) NULL_CHECK((frame[0].o)))->F_type = (jref) (frame[1].o);
	LINE_NUMBER(1620);
	((mindustry_logic_LExecutor$SpawnUnitI *) NULL_CHECK((frame[0].o)))->F_x = (jref) (frame[2].o);
	LINE_NUMBER(1621);
	((mindustry_logic_LExecutor$SpawnUnitI *) NULL_CHECK((frame[0].o)))->F_y = (jref) (frame[3].o);
	LINE_NUMBER(1622);
	((mindustry_logic_LExecutor$SpawnUnitI *) NULL_CHECK((frame[0].o)))->F_rotation = (jref) (frame[4].o);
	LINE_NUMBER(1623);
	((mindustry_logic_LExecutor$SpawnUnitI *) NULL_CHECK((frame[0].o)))->F_team = (jref) (frame[5].o);
	LINE_NUMBER(1624);
	((mindustry_logic_LExecutor$SpawnUnitI *) NULL_CHECK((frame[0].o)))->F_result = (jref) (frame[6].o);
	LINE_NUMBER(1625);
	((mindustry_logic_LExecutor$SpawnUnitI *) NULL_CHECK((frame[0].o)))->F_effect = (jref) (frame[7].o);
	LINE_NUMBER(1626);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_mindustry_logic_LExecutor$SpawnUnitI(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/logic/LExecutor$SpawnUnitI:<init>", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_logic_LExecutor$SpawnUnitI(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(1628);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(1629);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_logic_LExecutor$SpawnUnitI_run_mindustry_logic_LExecutor(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[10];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/logic/LExecutor$SpawnUnitI:run", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(1633);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_net;
	jint temp0 = (jint)((func_mindustry_net_Net_client_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_net_Net_client_R_boolean])(ctx, sp[0].o);
	if (temp0 == 0) goto label_1;
	}
	popStackFrame(ctx);
	INST_RETURN();
label_1:;
	{
	LINE_NUMBER(1635);
	sp[0].o = (jobject)((mindustry_logic_LExecutor$SpawnUnitI *) NULL_CHECK((frame[0].o)))->F_team;
	sp[0].o = (jobject)((func_mindustry_logic_LVar_team_R_mindustry_game_Team) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_logic_LVar_team_R_mindustry_game_Team])(ctx, sp[0].o);
	frame[2].o = sp[0].o;
	LINE_NUMBER(1637);
	if ((frame[2].o) == nullptr) goto label_3;
	}
	{
	sp[0].o = (jobject)((mindustry_logic_LExecutor$SpawnUnitI *) NULL_CHECK((frame[0].o)))->F_type;
	sp[0].o = (jobject)((func_mindustry_logic_LVar_obj_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_logic_LVar_obj_R_java_lang_Object])(ctx, sp[0].o);
	frame[4].o = sp[0].o;
	if ((isInstance(ctx, (frame[4].o), &class_mindustry_type_UnitType)) == 0) goto label_3;
	}
	{
	frame[3].o = (checkCast(ctx, &class_mindustry_type_UnitType, (frame[4].o)));
	if (((jint)((mindustry_type_UnitType *) NULL_CHECK((frame[3].o)))->F_internal) != 0) goto label_3;
	}
	{
	jint temp0 = (jint)SM_mindustry_entities_Units_canCreate_mindustry_game_Team_mindustry_type_UnitType_R_boolean(ctx, (frame[2].o), (frame[3].o));
	if (temp0 == 0) goto label_3;
	}
	{
	LINE_NUMBER(1639);
	sp[0].o = frame[3].o;
	sp[1].o = frame[2].o;
	sp[2].o = (jobject)((mindustry_logic_LExecutor$SpawnUnitI *) NULL_CHECK((frame[0].o)))->F_x;
	jfloat temp0 = (jfloat)((func_mindustry_logic_LVar_numf_R_float) ((void **) nullCheck(ctx, sp[2].o)->vtable)[VTABLE_mindustry_logic_LVar_numf_R_float])(ctx, sp[2].o);
	jfloat temp1 = (jfloat)SM_mindustry_core_World_unconv_float_R_float(ctx, temp0);
	jfloat temp2 = (jfloat)SM_arc_math_Mathf_range_float_R_float(ctx, (jfloat(1,000000e-02f)));
	jfloat temp3 = temp1 + temp2;
	sp[2].o = (jobject)((mindustry_logic_LExecutor$SpawnUnitI *) NULL_CHECK((frame[0].o)))->F_y;
	jfloat temp4 = (jfloat)((func_mindustry_logic_LVar_numf_R_float) ((void **) nullCheck(ctx, sp[2].o)->vtable)[VTABLE_mindustry_logic_LVar_numf_R_float])(ctx, sp[2].o);
	jfloat temp5 = (jfloat)SM_mindustry_core_World_unconv_float_R_float(ctx, temp4);
	jfloat temp6 = (jfloat)SM_arc_math_Mathf_range_float_R_float(ctx, (jfloat(1,000000e-02f)));
	jfloat temp7 = temp5 + temp6;
	sp[2].o = (jobject)((mindustry_logic_LExecutor$SpawnUnitI *) NULL_CHECK((frame[0].o)))->F_rotation;
	jfloat temp8 = (jfloat)((func_mindustry_logic_LVar_numf_R_float) ((void **) nullCheck(ctx, sp[2].o)->vtable)[VTABLE_mindustry_logic_LVar_numf_R_float])(ctx, sp[2].o);
	sp[0].o = (jobject)((func_mindustry_type_UnitType_spawn_mindustry_game_Team_float_float_float_R_mindustry_gen_Unit) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_type_UnitType_spawn_mindustry_game_Team_float_float_float_R_mindustry_gen_Unit])(ctx, sp[0].o, sp[1].o, temp3, temp7, temp8);
	frame[4].o = sp[0].o;
	LINE_NUMBER(1640);
	sp[0].o = (jobject)((mindustry_logic_LExecutor$SpawnUnitI *) NULL_CHECK((frame[0].o)))->F_effect;
	jint temp9 = (jint)((func_mindustry_logic_LVar_bool_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_logic_LVar_bool_R_boolean])(ctx, sp[0].o);
	if (temp9 == 0) goto label_7;
	}
	{
	LINE_NUMBER(1641);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_spawner;
	((func_mindustry_ai_WaveSpawner_spawnEffect_mindustry_gen_Unit) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_ai_WaveSpawner_spawnEffect_mindustry_gen_Unit])(ctx, sp[0].o, (frame[4].o));
	goto label_9;
	}
label_7:;
	{
	LINE_NUMBER(1644);
	((func_mindustry_gen_Unit_unloaded) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_mindustry_gen_Unit_unloaded])(ctx, (frame[4].o));
	LINE_NUMBER(1645);
	clinit_mindustry_game_EventType$UnitSpawnEvent(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_game_EventType$UnitSpawnEvent);
	init_mindustry_game_EventType$UnitSpawnEvent_mindustry_gen_Unit(ctx, sp[0].o, (frame[4].o));
	SM_arc_Events_fire_java_lang_Object(ctx, sp[0].o);
	}
label_9:;
	{
	LINE_NUMBER(1647);
	sp[0].o = (jobject)((mindustry_logic_LExecutor$SpawnUnitI *) NULL_CHECK((frame[0].o)))->F_result;
	((func_mindustry_logic_LVar_setobj_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_logic_LVar_setobj_java_lang_Object])(ctx, sp[0].o, (frame[4].o));
	}
label_3:;
	LINE_NUMBER(1649);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void *vtable_mindustry_logic_LExecutor$SpawnUnitI[] {
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
	(void *) M_mindustry_logic_LExecutor$SpawnUnitI_run_mindustry_logic_LExecutor,
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
	{ "run", "(Lmindustry/logic/LExecutor;)V" },
};

static jclass interfaces[] { &class_mindustry_logic_LExecutor$LInstruction, };

static FieldMetadata fields[] {
	{ "type", &class_mindustry_logic_LVar, offsetof(mindustry_logic_LExecutor$SpawnUnitI, F_type), "Lmindustry/logic/LVar;", 1 },
	{ "x", &class_mindustry_logic_LVar, offsetof(mindustry_logic_LExecutor$SpawnUnitI, F_x), "Lmindustry/logic/LVar;", 1 },
	{ "y", &class_mindustry_logic_LVar, offsetof(mindustry_logic_LExecutor$SpawnUnitI, F_y), "Lmindustry/logic/LVar;", 1 },
	{ "rotation", &class_mindustry_logic_LVar, offsetof(mindustry_logic_LExecutor$SpawnUnitI, F_rotation), "Lmindustry/logic/LVar;", 1 },
	{ "team", &class_mindustry_logic_LVar, offsetof(mindustry_logic_LExecutor$SpawnUnitI, F_team), "Lmindustry/logic/LVar;", 1 },
	{ "result", &class_mindustry_logic_LVar, offsetof(mindustry_logic_LExecutor$SpawnUnitI, F_result), "Lmindustry/logic/LVar;", 1 },
	{ "effect", &class_mindustry_logic_LVar, offsetof(mindustry_logic_LExecutor$SpawnUnitI, F_effect), "Lmindustry/logic/LVar;", 1 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_mindustry_logic_LExecutor$SpawnUnitI_mindustry_logic_LVar_mindustry_logic_LVar_mindustry_logic_LVar_mindustry_logic_LVar_mindustry_logic_LVar_mindustry_logic_LVar_mindustry_logic_LVar, 0, "(Lmindustry/logic/LVar;Lmindustry/logic/LVar;Lmindustry/logic/LVar;Lmindustry/logic/LVar;Lmindustry/logic/LVar;Lmindustry/logic/LVar;Lmindustry/logic/LVar;)V", 1 },
	{ "<init>", (intptr_t) init_mindustry_logic_LExecutor$SpawnUnitI, 0, "()V", 1 },
	{ "run", (intptr_t) M_mindustry_logic_LExecutor$SpawnUnitI_run_mindustry_logic_LExecutor, VTABLE_mindustry_logic_LExecutor$SpawnUnitI_run_mindustry_logic_LExecutor, "(Lmindustry/logic/LExecutor;)V", 1 },
};

Class class_mindustry_logic_LExecutor$SpawnUnitI{
		.nativeName = (intptr_t) "mindustry/logic/LExecutor$SpawnUnitI",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(mindustry_logic_LExecutor$SpawnUnitI),
		.classVtable = (intptr_t) vtable_mindustry_logic_LExecutor$SpawnUnitI,
		.staticInitializer = (intptr_t) clinit_mindustry_logic_LExecutor$SpawnUnitI,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_mindustry_logic_LExecutor$SpawnUnitI,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) &class_mindustry_logic_LExecutor,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 33,
		.interfaceCount = 1,
		.nativeInterfaces = (intptr_t) interfaces,
		.fieldCount = 7,
		.nativeFields = (intptr_t) fields,
		.methodCount = 3,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 12,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_mindustry_logic_LExecutor$SpawnUnitI = registerClass(&class_mindustry_logic_LExecutor$SpawnUnitI);

}

