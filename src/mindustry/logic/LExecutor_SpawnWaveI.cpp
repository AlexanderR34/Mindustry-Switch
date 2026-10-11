#include "mindustry/logic/LExecutor_SpawnWaveI.h"
#include "mindustry/net/Net.h"
#include "arc/math/geom/Vec2.h"
#include "java/util/Iterator.h"
#include "mindustry/logic/LVar.h"
#include "mindustry/logic/LExecutor_LInstruction.h"
#include "mindustry/logic/LExecutor_SpawnWaveI.h"
#include "mindustry/game/Rules.h"
#include "arc/math/geom/Point2.h"
#include "mindustry/logic/LExecutor.h"
#include "mindustry/type/UnitType.h"
#include "mindustry/game/SpawnGroup.h"
#include "java/lang/Object.h"
#include "mindustry/core/Logic.h"
#include "arc/util/Tmp.h"
#include "arc/struct/Seq.h"
#include "mindustry/ai/WaveSpawner.h"
#include "mindustry/Vars.h"
#include "mindustry/core/World.h"
#include "mindustry/core/GameState.h"

extern "C" {


void mark_mindustry_logic_LExecutor$SpawnWaveI(jobject object, jint mark, jint depth) {
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
	auto self = (mindustry_logic_LExecutor$SpawnWaveI *) object;
	if (self->F_natural)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_natural)->clazz)->markFunction)((jobject) self->F_natural, mark, depth + 1);
	if (self->F_x)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_x)->clazz)->markFunction)((jobject) self->F_x, mark, depth + 1);
	if (self->F_y)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_y)->clazz)->markFunction)((jobject) self->F_y, mark, depth + 1);
}

void clinit_mindustry_logic_LExecutor$SpawnWaveI(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
}

void init_mindustry_logic_LExecutor$SpawnWaveI(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/logic/LExecutor$SpawnWaveI:<init>", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_logic_LExecutor$SpawnWaveI(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(2163);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(2164);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_mindustry_logic_LExecutor$SpawnWaveI_mindustry_logic_LVar_mindustry_logic_LVar_mindustry_logic_LVar(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/logic/LExecutor$SpawnWaveI:<init>", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_logic_LExecutor$SpawnWaveI(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].o = param2;
	{
	LINE_NUMBER(2166);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(2167);
	((mindustry_logic_LExecutor$SpawnWaveI *) NULL_CHECK((frame[0].o)))->F_natural = (jref) (frame[1].o);
	LINE_NUMBER(2168);
	((mindustry_logic_LExecutor$SpawnWaveI *) NULL_CHECK((frame[0].o)))->F_x = (jref) (frame[2].o);
	LINE_NUMBER(2169);
	((mindustry_logic_LExecutor$SpawnWaveI *) NULL_CHECK((frame[0].o)))->F_y = (jref) (frame[3].o);
	LINE_NUMBER(2170);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_logic_LExecutor$SpawnWaveI_run_mindustry_logic_LExecutor(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[15];
	auto stack = &frame[10];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/logic/LExecutor$SpawnWaveI:run", 15 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(2174);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_net;
	jint temp0 = (jint)((func_mindustry_net_Net_client_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_net_Net_client_R_boolean])(ctx, sp[0].o);
	if (temp0 == 0) goto label_1;
	}
	popStackFrame(ctx);
	INST_RETURN();
label_1:;
	{
	LINE_NUMBER(2176);
	sp[0].o = (jobject)((mindustry_logic_LExecutor$SpawnWaveI *) NULL_CHECK((frame[0].o)))->F_natural;
	jint temp0 = (jint)((func_mindustry_logic_LVar_bool_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_logic_LVar_bool_R_boolean])(ctx, sp[0].o);
	if (temp0 == 0) goto label_2;
	}
	{
	LINE_NUMBER(2177);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_logic;
	((func_mindustry_core_Logic_skipWave) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_Logic_skipWave])(ctx, sp[0].o);
	LINE_NUMBER(2178);
	popStackFrame(ctx);
	return;
	}
label_2:;
	{
	LINE_NUMBER(2182);
	sp[0].o = (jobject)((mindustry_logic_LExecutor$SpawnWaveI *) NULL_CHECK((frame[0].o)))->F_x;
	jfloat temp0 = (jfloat)((func_mindustry_logic_LVar_numf_R_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_logic_LVar_numf_R_float])(ctx, sp[0].o);
	jfloat temp1 = (jfloat)SM_mindustry_core_World_unconv_float_R_float(ctx, temp0);
	frame[2].f = temp1;
	LINE_NUMBER(2183);
	sp[0].o = (jobject)((mindustry_logic_LExecutor$SpawnWaveI *) NULL_CHECK((frame[0].o)))->F_y;
	jfloat temp2 = (jfloat)((func_mindustry_logic_LVar_numf_R_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_logic_LVar_numf_R_float])(ctx, sp[0].o);
	jfloat temp3 = (jfloat)SM_mindustry_core_World_unconv_float_R_float(ctx, temp2);
	frame[3].f = temp3;
	LINE_NUMBER(2184);
	sp[0].o = (jobject)((mindustry_logic_LExecutor$SpawnWaveI *) NULL_CHECK((frame[0].o)))->F_x;
	jint temp4 = (jint)((func_mindustry_logic_LVar_numi_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_logic_LVar_numi_R_int])(ctx, sp[0].o);
	sp[0].o = (jobject)((mindustry_logic_LExecutor$SpawnWaveI *) NULL_CHECK((frame[0].o)))->F_y;
	jint temp5 = (jint)((func_mindustry_logic_LVar_numi_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_logic_LVar_numi_R_int])(ctx, sp[0].o);
	jint temp6 = (jint)SM_arc_math_geom_Point2_pack_int_int_R_int(ctx, temp4, temp5);
	frame[4].i = temp6;
	LINE_NUMBER(2186);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	sp[0].o = (jobject)((mindustry_core_GameState *) NULL_CHECK(sp[0].o))->F_rules;
	sp[0].o = (jobject)((mindustry_game_Rules *) NULL_CHECK(sp[0].o))->F_spawns;
	sp[0].o = (jobject)((func_arc_struct_Seq_iterator_R_java_util_Iterator) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_iterator_R_java_util_Iterator])(ctx, sp[0].o);
	frame[5].o = sp[0].o;
	}
label_8:;
	{
	jint temp0 = (jint)((func_java_util_Iterator_hasNext_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_hasNext_R_boolean, (frame[5].o)))(ctx, (frame[5].o));
	if (temp0 == 0) goto label_9;
	}
	{
	sp[0].o = (jobject)((func_java_util_Iterator_next_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_next_R_java_lang_Object, (frame[5].o)))(ctx, (frame[5].o));
	frame[6].o = (checkCast(ctx, &class_mindustry_game_SpawnGroup, sp[0].o));
	LINE_NUMBER(2187);
	sp[0].o = (jobject)((mindustry_game_SpawnGroup *) NULL_CHECK((frame[6].o)))->F_type;
	if (sp[0].o == nullptr) goto label_8;
	}
	{
	if (((jint)((mindustry_game_SpawnGroup *) NULL_CHECK((frame[6].o)))->F_spawn) == (jint(-1))) goto label_11;
	}
	{
	if (((jint)((mindustry_game_SpawnGroup *) NULL_CHECK((frame[6].o)))->F_spawn) == (frame[4].i)) goto label_11;
	}
	goto label_8;
label_11:;
	{
	LINE_NUMBER(2189);
	sp[0].o = frame[6].o;
	clinit_mindustry_Vars(ctx);
	sp[1].o = (jobject)SF_mindustry_Vars_state;
	jint temp0 = (jint)((func_mindustry_game_SpawnGroup_getSpawned_int_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_game_SpawnGroup_getSpawned_int_R_int])(ctx, sp[0].o, (((jint)((mindustry_core_GameState *) NULL_CHECK(sp[1].o))->F_wave) - (jint(1))));
	frame[7].i = temp0;
	LINE_NUMBER(2190);
	frame[8].f = (jfloat(16.0f));
	LINE_NUMBER(2192);
	frame[9].i = (jint(0));
	}
label_14:;
	{
	if ((frame[9].i) >= (frame[7].i)) goto label_15;
	}
	{
	LINE_NUMBER(2193);
	clinit_arc_util_Tmp(ctx);
	sp[0].o = (jobject)SF_arc_util_Tmp_v1;
	sp[0].o = (jobject)((func_arc_math_geom_Vec2_rnd_float_R_arc_math_geom_Vec2) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Vec2_rnd_float_R_arc_math_geom_Vec2])(ctx, sp[0].o, (frame[8].f));
	LINE_NUMBER(2195);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_spawner;
	sp[1].o = frame[6].o;
	jfloat temp0 = frame[2].f;
	clinit_arc_util_Tmp(ctx);
	sp[2].o = (jobject)SF_arc_util_Tmp_v1;
	jfloat temp1 = temp0 + ((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK(sp[2].o))->F_x);
	jfloat temp2 = frame[3].f;
	clinit_arc_util_Tmp(ctx);
	sp[2].o = (jobject)SF_arc_util_Tmp_v1;
	((func_mindustry_ai_WaveSpawner_spawnUnit_mindustry_game_SpawnGroup_float_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_ai_WaveSpawner_spawnUnit_mindustry_game_SpawnGroup_float_float])(ctx, sp[0].o, sp[1].o, temp1, (temp2 + ((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK(sp[2].o))->F_y)));
	LINE_NUMBER(2192);
	INST_IINC(9, 1);
	goto label_14;
	}
label_15:;
	LINE_NUMBER(2197);
	goto label_8;
label_9:;
	LINE_NUMBER(2198);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void *vtable_mindustry_logic_LExecutor$SpawnWaveI[] {
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
	(void *) M_mindustry_logic_LExecutor$SpawnWaveI_run_mindustry_logic_LExecutor,
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
	{ "natural", &class_mindustry_logic_LVar, offsetof(mindustry_logic_LExecutor$SpawnWaveI, F_natural), "Lmindustry/logic/LVar;", 1 },
	{ "x", &class_mindustry_logic_LVar, offsetof(mindustry_logic_LExecutor$SpawnWaveI, F_x), "Lmindustry/logic/LVar;", 1 },
	{ "y", &class_mindustry_logic_LVar, offsetof(mindustry_logic_LExecutor$SpawnWaveI, F_y), "Lmindustry/logic/LVar;", 1 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_mindustry_logic_LExecutor$SpawnWaveI, 0, "()V", 1 },
	{ "<init>", (intptr_t) init_mindustry_logic_LExecutor$SpawnWaveI_mindustry_logic_LVar_mindustry_logic_LVar_mindustry_logic_LVar, 0, "(Lmindustry/logic/LVar;Lmindustry/logic/LVar;Lmindustry/logic/LVar;)V", 1 },
	{ "run", (intptr_t) M_mindustry_logic_LExecutor$SpawnWaveI_run_mindustry_logic_LExecutor, VTABLE_mindustry_logic_LExecutor$SpawnWaveI_run_mindustry_logic_LExecutor, "(Lmindustry/logic/LExecutor;)V", 1 },
};

Class class_mindustry_logic_LExecutor$SpawnWaveI{
		.nativeName = (intptr_t) "mindustry/logic/LExecutor$SpawnWaveI",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(mindustry_logic_LExecutor$SpawnWaveI),
		.classVtable = (intptr_t) vtable_mindustry_logic_LExecutor$SpawnWaveI,
		.staticInitializer = (intptr_t) clinit_mindustry_logic_LExecutor$SpawnWaveI,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_mindustry_logic_LExecutor$SpawnWaveI,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) &class_mindustry_logic_LExecutor,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 33,
		.interfaceCount = 1,
		.nativeInterfaces = (intptr_t) interfaces,
		.fieldCount = 3,
		.nativeFields = (intptr_t) fields,
		.methodCount = 3,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 12,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_mindustry_logic_LExecutor$SpawnWaveI = registerClass(&class_mindustry_logic_LExecutor$SpawnWaveI);

}

