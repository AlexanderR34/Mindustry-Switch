#include "mindustry/logic/LExecutor_ExplosionI.h"
#include "java/lang/Math.h"
#include "mindustry/net/Net.h"
#include "java/lang/Object.h"
#include "mindustry/logic/LVar.h"
#include "mindustry/logic/LExecutor_LInstruction.h"
#include "mindustry/logic/LExecutor_ExplosionI.h"
#include "mindustry/game/Team.h"
#include "mindustry/logic/LExecutor.h"
#include "mindustry/Vars.h"
#include "mindustry/core/World.h"
#include "mindustry/gen/Call.h"

extern "C" {


void mark_mindustry_logic_LExecutor$ExplosionI(jobject object, jint mark, jint depth) {
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
	auto self = (mindustry_logic_LExecutor$ExplosionI *) object;
	if (self->F_team)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_team)->clazz)->markFunction)((jobject) self->F_team, mark, depth + 1);
	if (self->F_x)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_x)->clazz)->markFunction)((jobject) self->F_x, mark, depth + 1);
	if (self->F_y)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_y)->clazz)->markFunction)((jobject) self->F_y, mark, depth + 1);
	if (self->F_radius)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_radius)->clazz)->markFunction)((jobject) self->F_radius, mark, depth + 1);
	if (self->F_damage)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_damage)->clazz)->markFunction)((jobject) self->F_damage, mark, depth + 1);
	if (self->F_air)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_air)->clazz)->markFunction)((jobject) self->F_air, mark, depth + 1);
	if (self->F_ground)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_ground)->clazz)->markFunction)((jobject) self->F_ground, mark, depth + 1);
	if (self->F_pierce)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_pierce)->clazz)->markFunction)((jobject) self->F_pierce, mark, depth + 1);
	if (self->F_effect)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_effect)->clazz)->markFunction)((jobject) self->F_effect, mark, depth + 1);
}

void clinit_mindustry_logic_LExecutor$ExplosionI(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
}

void init_mindustry_logic_LExecutor$ExplosionI_mindustry_logic_LVar_mindustry_logic_LVar_mindustry_logic_LVar_mindustry_logic_LVar_mindustry_logic_LVar_mindustry_logic_LVar_mindustry_logic_LVar_mindustry_logic_LVar_mindustry_logic_LVar(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2, jobject param3, jobject param4, jobject param5, jobject param6, jobject param7, jobject param8) {
	NULL_CHECK(self);
	jtype frame[12];
	auto stack = &frame[10];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/logic/LExecutor$ExplosionI:<init>", 12 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_logic_LExecutor$ExplosionI(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].o = param2;
	frame[4].o = param3;
	frame[5].o = param4;
	frame[6].o = param5;
	frame[7].o = param6;
	frame[8].o = param7;
	frame[9].o = param8;
	{
	LINE_NUMBER(2007);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(2008);
	((mindustry_logic_LExecutor$ExplosionI *) NULL_CHECK((frame[0].o)))->F_team = (jref) (frame[1].o);
	LINE_NUMBER(2009);
	((mindustry_logic_LExecutor$ExplosionI *) NULL_CHECK((frame[0].o)))->F_x = (jref) (frame[2].o);
	LINE_NUMBER(2010);
	((mindustry_logic_LExecutor$ExplosionI *) NULL_CHECK((frame[0].o)))->F_y = (jref) (frame[3].o);
	LINE_NUMBER(2011);
	((mindustry_logic_LExecutor$ExplosionI *) NULL_CHECK((frame[0].o)))->F_radius = (jref) (frame[4].o);
	LINE_NUMBER(2012);
	((mindustry_logic_LExecutor$ExplosionI *) NULL_CHECK((frame[0].o)))->F_damage = (jref) (frame[5].o);
	LINE_NUMBER(2013);
	((mindustry_logic_LExecutor$ExplosionI *) NULL_CHECK((frame[0].o)))->F_air = (jref) (frame[6].o);
	LINE_NUMBER(2014);
	((mindustry_logic_LExecutor$ExplosionI *) NULL_CHECK((frame[0].o)))->F_ground = (jref) (frame[7].o);
	LINE_NUMBER(2015);
	((mindustry_logic_LExecutor$ExplosionI *) NULL_CHECK((frame[0].o)))->F_pierce = (jref) (frame[8].o);
	LINE_NUMBER(2016);
	((mindustry_logic_LExecutor$ExplosionI *) NULL_CHECK((frame[0].o)))->F_effect = (jref) (frame[9].o);
	LINE_NUMBER(2017);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_mindustry_logic_LExecutor$ExplosionI(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/logic/LExecutor$ExplosionI:<init>", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_logic_LExecutor$ExplosionI(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(2019);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(2020);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_logic_LExecutor$ExplosionI_run_mindustry_logic_LExecutor(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[12];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/logic/LExecutor$ExplosionI:run", 12 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(2024);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_net;
	jint temp0 = (jint)((func_mindustry_net_Net_client_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_net_Net_client_R_boolean])(ctx, sp[0].o);
	if (temp0 == 0) goto label_1;
	}
	popStackFrame(ctx);
	INST_RETURN();
label_1:;
	{
	LINE_NUMBER(2026);
	sp[0].o = (jobject)((mindustry_logic_LExecutor$ExplosionI *) NULL_CHECK((frame[0].o)))->F_team;
	sp[0].o = (jobject)((func_mindustry_logic_LVar_team_R_mindustry_game_Team) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_logic_LVar_team_R_mindustry_game_Team])(ctx, sp[0].o);
	frame[2].o = sp[0].o;
	LINE_NUMBER(2028);
	sp[0].o = frame[2].o;
	sp[1].o = (jobject)((mindustry_logic_LExecutor$ExplosionI *) NULL_CHECK((frame[0].o)))->F_x;
	jfloat temp0 = (jfloat)((func_mindustry_logic_LVar_numf_R_float) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_mindustry_logic_LVar_numf_R_float])(ctx, sp[1].o);
	jfloat temp1 = (jfloat)SM_mindustry_core_World_unconv_float_R_float(ctx, temp0);
	sp[1].o = (jobject)((mindustry_logic_LExecutor$ExplosionI *) NULL_CHECK((frame[0].o)))->F_y;
	jfloat temp2 = (jfloat)((func_mindustry_logic_LVar_numf_R_float) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_mindustry_logic_LVar_numf_R_float])(ctx, sp[1].o);
	jfloat temp3 = (jfloat)SM_mindustry_core_World_unconv_float_R_float(ctx, temp2);
	sp[1].o = (jobject)((mindustry_logic_LExecutor$ExplosionI *) NULL_CHECK((frame[0].o)))->F_radius;
	jfloat temp4 = (jfloat)((func_mindustry_logic_LVar_numf_R_float) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_mindustry_logic_LVar_numf_R_float])(ctx, sp[1].o);
	jfloat temp5 = (jfloat)SM_java_lang_Math_min_float_float_R_float(ctx, temp4, (jfloat(100.0f)));
	jfloat temp6 = (jfloat)SM_mindustry_core_World_unconv_float_R_float(ctx, temp5);
	sp[1].o = (jobject)((mindustry_logic_LExecutor$ExplosionI *) NULL_CHECK((frame[0].o)))->F_damage;
	jfloat temp7 = (jfloat)((func_mindustry_logic_LVar_numf_R_float) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_mindustry_logic_LVar_numf_R_float])(ctx, sp[1].o);
	sp[1].o = (jobject)((mindustry_logic_LExecutor$ExplosionI *) NULL_CHECK((frame[0].o)))->F_air;
	jint temp8 = (jint)((func_mindustry_logic_LVar_bool_R_boolean) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_mindustry_logic_LVar_bool_R_boolean])(ctx, sp[1].o);
	sp[1].o = (jobject)((mindustry_logic_LExecutor$ExplosionI *) NULL_CHECK((frame[0].o)))->F_ground;
	jint temp9 = (jint)((func_mindustry_logic_LVar_bool_R_boolean) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_mindustry_logic_LVar_bool_R_boolean])(ctx, sp[1].o);
	sp[1].o = (jobject)((mindustry_logic_LExecutor$ExplosionI *) NULL_CHECK((frame[0].o)))->F_pierce;
	jint temp10 = (jint)((func_mindustry_logic_LVar_bool_R_boolean) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_mindustry_logic_LVar_bool_R_boolean])(ctx, sp[1].o);
	sp[1].o = (jobject)((mindustry_logic_LExecutor$ExplosionI *) NULL_CHECK((frame[0].o)))->F_effect;
	jint temp11 = (jint)((func_mindustry_logic_LVar_bool_R_boolean) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_mindustry_logic_LVar_bool_R_boolean])(ctx, sp[1].o);
	SM_mindustry_gen_Call_logicExplosion_mindustry_game_Team_float_float_float_float_boolean_boolean_boolean_boolean(ctx, sp[0].o, temp1, temp3, temp6, temp7, temp8, temp9, temp10, temp11);
	LINE_NUMBER(2029);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void *vtable_mindustry_logic_LExecutor$ExplosionI[] {
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
	(void *) M_mindustry_logic_LExecutor$ExplosionI_run_mindustry_logic_LExecutor,
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
	{ "team", &class_mindustry_logic_LVar, offsetof(mindustry_logic_LExecutor$ExplosionI, F_team), "Lmindustry/logic/LVar;", 1 },
	{ "x", &class_mindustry_logic_LVar, offsetof(mindustry_logic_LExecutor$ExplosionI, F_x), "Lmindustry/logic/LVar;", 1 },
	{ "y", &class_mindustry_logic_LVar, offsetof(mindustry_logic_LExecutor$ExplosionI, F_y), "Lmindustry/logic/LVar;", 1 },
	{ "radius", &class_mindustry_logic_LVar, offsetof(mindustry_logic_LExecutor$ExplosionI, F_radius), "Lmindustry/logic/LVar;", 1 },
	{ "damage", &class_mindustry_logic_LVar, offsetof(mindustry_logic_LExecutor$ExplosionI, F_damage), "Lmindustry/logic/LVar;", 1 },
	{ "air", &class_mindustry_logic_LVar, offsetof(mindustry_logic_LExecutor$ExplosionI, F_air), "Lmindustry/logic/LVar;", 1 },
	{ "ground", &class_mindustry_logic_LVar, offsetof(mindustry_logic_LExecutor$ExplosionI, F_ground), "Lmindustry/logic/LVar;", 1 },
	{ "pierce", &class_mindustry_logic_LVar, offsetof(mindustry_logic_LExecutor$ExplosionI, F_pierce), "Lmindustry/logic/LVar;", 1 },
	{ "effect", &class_mindustry_logic_LVar, offsetof(mindustry_logic_LExecutor$ExplosionI, F_effect), "Lmindustry/logic/LVar;", 1 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_mindustry_logic_LExecutor$ExplosionI_mindustry_logic_LVar_mindustry_logic_LVar_mindustry_logic_LVar_mindustry_logic_LVar_mindustry_logic_LVar_mindustry_logic_LVar_mindustry_logic_LVar_mindustry_logic_LVar_mindustry_logic_LVar, 0, "(Lmindustry/logic/LVar;Lmindustry/logic/LVar;Lmindustry/logic/LVar;Lmindustry/logic/LVar;Lmindustry/logic/LVar;Lmindustry/logic/LVar;Lmindustry/logic/LVar;Lmindustry/logic/LVar;Lmindustry/logic/LVar;)V", 1 },
	{ "<init>", (intptr_t) init_mindustry_logic_LExecutor$ExplosionI, 0, "()V", 1 },
	{ "run", (intptr_t) M_mindustry_logic_LExecutor$ExplosionI_run_mindustry_logic_LExecutor, VTABLE_mindustry_logic_LExecutor$ExplosionI_run_mindustry_logic_LExecutor, "(Lmindustry/logic/LExecutor;)V", 1 },
};

Class class_mindustry_logic_LExecutor$ExplosionI{
		.nativeName = (intptr_t) "mindustry/logic/LExecutor$ExplosionI",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(mindustry_logic_LExecutor$ExplosionI),
		.classVtable = (intptr_t) vtable_mindustry_logic_LExecutor$ExplosionI,
		.staticInitializer = (intptr_t) clinit_mindustry_logic_LExecutor$ExplosionI,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_mindustry_logic_LExecutor$ExplosionI,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) &class_mindustry_logic_LExecutor,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 33,
		.interfaceCount = 1,
		.nativeInterfaces = (intptr_t) interfaces,
		.fieldCount = 9,
		.nativeFields = (intptr_t) fields,
		.methodCount = 3,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 12,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_mindustry_logic_LExecutor$ExplosionI = registerClass(&class_mindustry_logic_LExecutor$ExplosionI);

}

