#include "mindustry/logic/RadarSort.h"
#include "mindustry/gen/Unit.h"
#include "mindustry/logic/RadarSort_invoke_mindustry_logic_RadarSort_RadarSortFunc_8.h"
#include "mindustry/logic/RadarSort_invoke_mindustry_logic_RadarSort_RadarSortFunc_7.h"
#include "mindustry/logic/RadarSort_invoke_mindustry_logic_RadarSort_RadarSortFunc_9.h"
#include "java/lang/Enum.h"
#include "mindustry/logic/RadarSort_invoke_mindustry_logic_RadarSort_RadarSortFunc_6.h"
#include "mindustry/logic/RadarSort_invoke_mindustry_logic_RadarSort_RadarSortFunc_5.h"
#include "java/lang/Object.h"
#include "java/lang/String.h"
#include "mindustry/logic/RadarSort_RadarSortFunc.h"
#include "mindustry/logic/RadarSort.h"
#include "java/lang/Class.h"
#include "arc/math/geom/Position.h"

extern "C" {

jobject SF_mindustry_logic_RadarSort_distance;
jobject SF_mindustry_logic_RadarSort_health;
jobject SF_mindustry_logic_RadarSort_shield;
jobject SF_mindustry_logic_RadarSort_armor;
jobject SF_mindustry_logic_RadarSort_maxHealth;
jobject SF_mindustry_logic_RadarSort_all;
jobject SF_mindustry_logic_RadarSort_$VALUES;

void mark_mindustry_logic_RadarSort(jobject object, jint mark, jint depth) {
	if (!object) {
		if (SF_mindustry_logic_RadarSort_distance)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_logic_RadarSort_distance)->clazz)->markFunction)((jobject) SF_mindustry_logic_RadarSort_distance, mark, depth + 1);
		if (SF_mindustry_logic_RadarSort_health)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_logic_RadarSort_health)->clazz)->markFunction)((jobject) SF_mindustry_logic_RadarSort_health, mark, depth + 1);
		if (SF_mindustry_logic_RadarSort_shield)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_logic_RadarSort_shield)->clazz)->markFunction)((jobject) SF_mindustry_logic_RadarSort_shield, mark, depth + 1);
		if (SF_mindustry_logic_RadarSort_armor)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_logic_RadarSort_armor)->clazz)->markFunction)((jobject) SF_mindustry_logic_RadarSort_armor, mark, depth + 1);
		if (SF_mindustry_logic_RadarSort_maxHealth)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_logic_RadarSort_maxHealth)->clazz)->markFunction)((jobject) SF_mindustry_logic_RadarSort_maxHealth, mark, depth + 1);
		if (SF_mindustry_logic_RadarSort_all)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_logic_RadarSort_all)->clazz)->markFunction)((jobject) SF_mindustry_logic_RadarSort_all, mark, depth + 1);
		if (SF_mindustry_logic_RadarSort_$VALUES)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_logic_RadarSort_$VALUES)->clazz)->markFunction)((jobject) SF_mindustry_logic_RadarSort_$VALUES, mark, depth + 1);
		return;
	}
	if (depth > GC_DEPTH_ALWAYS && (object->gcMark < GC_MARK_START || object->gcMark == mark))
		return;
	if (depth > MAX_GC_MARK_DEPTH) {
		markDeepObject(object);
		return;
	}
	mark_java_lang_Enum(object, mark, depth);
	if (object->gcMark >= GC_MARK_START)
		object->gcMark = mark;
	auto self = (mindustry_logic_RadarSort *) object;
	if (self->F_func)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_func)->clazz)->markFunction)((jobject) self->F_func, mark, depth + 1);
}

jobject SM_mindustry_logic_RadarSort_values_R_Array1_mindustry_logic_RadarSort(jcontext ctx) {
	jtype frame[1];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/logic/RadarSort:values", 1 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_logic_RadarSort(ctx);
	{
	LINE_NUMBER(6);
	clinit_mindustry_logic_RadarSort(ctx);
	sp[0].o = (jobject)SF_mindustry_logic_RadarSort_$VALUES;
	sp[0].o = (jobject)((func_java_lang_Object_clone_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_Object_clone_R_java_lang_Object])(ctx, sp[0].o);
	popStackFrame(ctx);
	return (checkCast(ctx, getArrayClass(&class_mindustry_logic_RadarSort, 1), sp[0].o));
	}

	popStackFrame(ctx);
}

jobject SM_mindustry_logic_RadarSort_valueOf_java_lang_String_R_mindustry_logic_RadarSort(jcontext ctx, jobject param0) {
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/logic/RadarSort:valueOf", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_logic_RadarSort(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(6);
	sp[0].o = (jobject)SM_java_lang_Enum_valueOf_java_lang_Class_java_lang_String_R_java_lang_Enum(ctx, (((jobject) &class_mindustry_logic_RadarSort)), (frame[0].o));
	popStackFrame(ctx);
	return (checkCast(ctx, &class_mindustry_logic_RadarSort, sp[0].o));
	}

	popStackFrame(ctx);
}

void init_mindustry_logic_RadarSort_java_lang_String_int_mindustry_logic_RadarSort$RadarSortFunc(jcontext ctx, jobject self, jobject param0, jint param1, jobject param2) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/logic/RadarSort:<init>", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_logic_RadarSort(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	frame[3].o = param2;
	{
	LINE_NUMBER(17);
	init_java_lang_Enum_java_lang_String_int(ctx, (frame[0].o), (frame[1].o), (frame[2].i));
	LINE_NUMBER(18);
	((mindustry_logic_RadarSort *) NULL_CHECK((frame[0].o)))->F_func = (jref) (frame[3].o);
	LINE_NUMBER(19);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject SM_mindustry_logic_RadarSort_$values_R_Array1_mindustry_logic_RadarSort(jcontext ctx) {
	jtype frame[4];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/logic/RadarSort:$values", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_logic_RadarSort(ctx);
	{
	LINE_NUMBER(6);
	sp[0].o = (jobject)createArray(ctx, &class_mindustry_logic_RadarSort, (jint(5)));
	jint temp0 = jint(0);
	clinit_mindustry_logic_RadarSort(ctx);
	sp[1].o = (jobject)SF_mindustry_logic_RadarSort_distance;
	ARRAY_ACCESS(jobject, sp[0].o, temp0) = sp[1].o;
	jint temp1 = jint(1);
	clinit_mindustry_logic_RadarSort(ctx);
	sp[1].o = (jobject)SF_mindustry_logic_RadarSort_health;
	ARRAY_ACCESS(jobject, sp[0].o, temp1) = sp[1].o;
	jint temp2 = jint(2);
	clinit_mindustry_logic_RadarSort(ctx);
	sp[1].o = (jobject)SF_mindustry_logic_RadarSort_shield;
	ARRAY_ACCESS(jobject, sp[0].o, temp2) = sp[1].o;
	jint temp3 = jint(3);
	clinit_mindustry_logic_RadarSort(ctx);
	sp[1].o = (jobject)SF_mindustry_logic_RadarSort_armor;
	ARRAY_ACCESS(jobject, sp[0].o, temp3) = sp[1].o;
	jint temp4 = jint(4);
	clinit_mindustry_logic_RadarSort(ctx);
	sp[1].o = (jobject)SF_mindustry_logic_RadarSort_maxHealth;
	ARRAY_ACCESS(jobject, sp[0].o, temp4) = sp[1].o;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jfloat SM_mindustry_logic_RadarSort_lambda$static$4_arc_math_geom_Position_mindustry_gen_Unit_R_float(jcontext ctx, jobject param0, jobject param1) {
	jtype frame[3];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/logic/RadarSort:lambda$static$4", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_logic_RadarSort(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	{
	LINE_NUMBER(11);
	jfloat temp0 = (jfloat)((func_mindustry_gen_Unit_maxHealth_R_float) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_gen_Unit_maxHealth_R_float])(ctx, (frame[1].o));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jfloat SM_mindustry_logic_RadarSort_lambda$static$3_arc_math_geom_Position_mindustry_gen_Unit_R_float(jcontext ctx, jobject param0, jobject param1) {
	jtype frame[3];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/logic/RadarSort:lambda$static$3", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_logic_RadarSort(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	{
	LINE_NUMBER(10);
	jfloat temp0 = (jfloat)((func_mindustry_gen_Unit_armor_R_float) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_gen_Unit_armor_R_float])(ctx, (frame[1].o));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jfloat SM_mindustry_logic_RadarSort_lambda$static$2_arc_math_geom_Position_mindustry_gen_Unit_R_float(jcontext ctx, jobject param0, jobject param1) {
	jtype frame[3];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/logic/RadarSort:lambda$static$2", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_logic_RadarSort(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	{
	LINE_NUMBER(9);
	jfloat temp0 = (jfloat)((func_mindustry_gen_Unit_shield_R_float) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_gen_Unit_shield_R_float])(ctx, (frame[1].o));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jfloat SM_mindustry_logic_RadarSort_lambda$static$1_arc_math_geom_Position_mindustry_gen_Unit_R_float(jcontext ctx, jobject param0, jobject param1) {
	jtype frame[3];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/logic/RadarSort:lambda$static$1", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_logic_RadarSort(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	{
	LINE_NUMBER(8);
	jfloat temp0 = (jfloat)((func_mindustry_gen_Unit_health_R_float) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_gen_Unit_health_R_float])(ctx, (frame[1].o));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jfloat SM_mindustry_logic_RadarSort_lambda$static$0_arc_math_geom_Position_mindustry_gen_Unit_R_float(jcontext ctx, jobject param0, jobject param1) {
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/logic/RadarSort:lambda$static$0", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_logic_RadarSort(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	{
	LINE_NUMBER(7);
	jfloat temp0 = (jfloat)((func_arc_math_geom_Position_dst2_arc_math_geom_Position_R_float) resolveInterfaceMethod(ctx, &class_arc_math_geom_Position, INDEX_arc_math_geom_Position_dst2_arc_math_geom_Position_R_float, (frame[0].o)))(ctx, (frame[0].o), (frame[1].o));
	popStackFrame(ctx);
	return (-temp0);
	}

	popStackFrame(ctx);
}

void clinit_mindustry_logic_RadarSort(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	clinit_java_lang_Enum(ctx);
	jtype frame[5];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/logic/RadarSort:<clinit>", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_logic_RadarSort(ctx);
	{
	LINE_NUMBER(7);
	clinit_mindustry_logic_RadarSort(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_logic_RadarSort);
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"distance"_j));
	jint temp0 = jint(0);
	{ /* InvokeDynamic */
		clinit_mindustry_logic_RadarSort_invoke_mindustry_logic_RadarSort$RadarSortFunc_5(ctx);
		auto proxy = (mindustry_logic_RadarSort_invoke_mindustry_logic_RadarSort$RadarSortFunc_5 *) gcAlloc(ctx, &class_mindustry_logic_RadarSort_invoke_mindustry_logic_RadarSort$RadarSortFunc_5);
		sp[2].o = (jobject) proxy;
	}
	init_mindustry_logic_RadarSort_java_lang_String_int_mindustry_logic_RadarSort$RadarSortFunc(ctx, sp[0].o, sp[1].o, temp0, sp[2].o);
	clinit_mindustry_logic_RadarSort(ctx);
	SF_mindustry_logic_RadarSort_distance = sp[0].o;
	LINE_NUMBER(8);
	clinit_mindustry_logic_RadarSort(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_logic_RadarSort);
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"health"_j));
	jint temp1 = jint(1);
	{ /* InvokeDynamic */
		clinit_mindustry_logic_RadarSort_invoke_mindustry_logic_RadarSort$RadarSortFunc_6(ctx);
		auto proxy = (mindustry_logic_RadarSort_invoke_mindustry_logic_RadarSort$RadarSortFunc_6 *) gcAlloc(ctx, &class_mindustry_logic_RadarSort_invoke_mindustry_logic_RadarSort$RadarSortFunc_6);
		sp[2].o = (jobject) proxy;
	}
	init_mindustry_logic_RadarSort_java_lang_String_int_mindustry_logic_RadarSort$RadarSortFunc(ctx, sp[0].o, sp[1].o, temp1, sp[2].o);
	clinit_mindustry_logic_RadarSort(ctx);
	SF_mindustry_logic_RadarSort_health = sp[0].o;
	LINE_NUMBER(9);
	clinit_mindustry_logic_RadarSort(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_logic_RadarSort);
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"shield"_j));
	jint temp2 = jint(2);
	{ /* InvokeDynamic */
		clinit_mindustry_logic_RadarSort_invoke_mindustry_logic_RadarSort$RadarSortFunc_7(ctx);
		auto proxy = (mindustry_logic_RadarSort_invoke_mindustry_logic_RadarSort$RadarSortFunc_7 *) gcAlloc(ctx, &class_mindustry_logic_RadarSort_invoke_mindustry_logic_RadarSort$RadarSortFunc_7);
		sp[2].o = (jobject) proxy;
	}
	init_mindustry_logic_RadarSort_java_lang_String_int_mindustry_logic_RadarSort$RadarSortFunc(ctx, sp[0].o, sp[1].o, temp2, sp[2].o);
	clinit_mindustry_logic_RadarSort(ctx);
	SF_mindustry_logic_RadarSort_shield = sp[0].o;
	LINE_NUMBER(10);
	clinit_mindustry_logic_RadarSort(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_logic_RadarSort);
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"armor"_j));
	jint temp3 = jint(3);
	{ /* InvokeDynamic */
		clinit_mindustry_logic_RadarSort_invoke_mindustry_logic_RadarSort$RadarSortFunc_8(ctx);
		auto proxy = (mindustry_logic_RadarSort_invoke_mindustry_logic_RadarSort$RadarSortFunc_8 *) gcAlloc(ctx, &class_mindustry_logic_RadarSort_invoke_mindustry_logic_RadarSort$RadarSortFunc_8);
		sp[2].o = (jobject) proxy;
	}
	init_mindustry_logic_RadarSort_java_lang_String_int_mindustry_logic_RadarSort$RadarSortFunc(ctx, sp[0].o, sp[1].o, temp3, sp[2].o);
	clinit_mindustry_logic_RadarSort(ctx);
	SF_mindustry_logic_RadarSort_armor = sp[0].o;
	LINE_NUMBER(11);
	clinit_mindustry_logic_RadarSort(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_logic_RadarSort);
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"maxHealth"_j));
	jint temp4 = jint(4);
	{ /* InvokeDynamic */
		clinit_mindustry_logic_RadarSort_invoke_mindustry_logic_RadarSort$RadarSortFunc_9(ctx);
		auto proxy = (mindustry_logic_RadarSort_invoke_mindustry_logic_RadarSort$RadarSortFunc_9 *) gcAlloc(ctx, &class_mindustry_logic_RadarSort_invoke_mindustry_logic_RadarSort$RadarSortFunc_9);
		sp[2].o = (jobject) proxy;
	}
	init_mindustry_logic_RadarSort_java_lang_String_int_mindustry_logic_RadarSort$RadarSortFunc(ctx, sp[0].o, sp[1].o, temp4, sp[2].o);
	clinit_mindustry_logic_RadarSort(ctx);
	SF_mindustry_logic_RadarSort_maxHealth = sp[0].o;
	LINE_NUMBER(6);
	sp[0].o = (jobject)SM_mindustry_logic_RadarSort_$values_R_Array1_mindustry_logic_RadarSort(ctx);
	clinit_mindustry_logic_RadarSort(ctx);
	SF_mindustry_logic_RadarSort_$VALUES = sp[0].o;
	LINE_NUMBER(15);
	sp[0].o = (jobject)SM_mindustry_logic_RadarSort_values_R_Array1_mindustry_logic_RadarSort(ctx);
	clinit_mindustry_logic_RadarSort(ctx);
	SF_mindustry_logic_RadarSort_all = sp[0].o;
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void *vtable_mindustry_logic_RadarSort[] {
	(void *) M_java_lang_Enum_hashCode_R_int,
	(void *) M_java_lang_Enum_equals_java_lang_Object_R_boolean,
	(void *) M_java_lang_Enum_clone_R_java_lang_Object,
	(void *) M_java_lang_Object_getClass_R_java_lang_Class,
	(void *) M_java_lang_Enum_toString_R_java_lang_String,
	(void *) M_java_lang_Object_finalize,
	(void *) M_java_lang_Object_notify,
	(void *) M_java_lang_Object_notifyAll,
	(void *) M_java_lang_Object_wait,
	(void *) M_java_lang_Object_wait_long,
	(void *) M_java_lang_Object_wait_long_int,
	(void *) M_java_lang_Enum_compareTo_java_lang_Object_R_int,
	(void *) M_java_lang_Enum_compareTo_java_lang_Enum_R_int,
	(void *) M_java_lang_Enum_name_R_java_lang_String,
	(void *) M_java_lang_Enum_ordinal_R_int,
	(void *) M_java_lang_Enum_getDeclaringClass_R_java_lang_Class,
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
	{ "compareTo", "(Ljava/lang/Object;)I" },
	{ "compareTo", "(Ljava/lang/Enum;)I" },
	{ "name", "()Ljava/lang/String;" },
	{ "ordinal", "()I" },
	{ "getDeclaringClass", "()Ljava/lang/Class;" },
};

static jclass innerClasses[] {
	&class_mindustry_logic_RadarSort$RadarSortFunc,
};

static FieldMetadata fields[] {
	{ "distance", &class_mindustry_logic_RadarSort, (intptr_t) &SF_mindustry_logic_RadarSort_distance, "Lmindustry/logic/RadarSort;", 16409 },
	{ "health", &class_mindustry_logic_RadarSort, (intptr_t) &SF_mindustry_logic_RadarSort_health, "Lmindustry/logic/RadarSort;", 16409 },
	{ "shield", &class_mindustry_logic_RadarSort, (intptr_t) &SF_mindustry_logic_RadarSort_shield, "Lmindustry/logic/RadarSort;", 16409 },
	{ "armor", &class_mindustry_logic_RadarSort, (intptr_t) &SF_mindustry_logic_RadarSort_armor, "Lmindustry/logic/RadarSort;", 16409 },
	{ "maxHealth", &class_mindustry_logic_RadarSort, (intptr_t) &SF_mindustry_logic_RadarSort_maxHealth, "Lmindustry/logic/RadarSort;", 16409 },
	{ "func", &class_mindustry_logic_RadarSort$RadarSortFunc, offsetof(mindustry_logic_RadarSort, F_func), "Lmindustry/logic/RadarSort$RadarSortFunc;", 17 },
	{ "all", getArrayClass(&class_mindustry_logic_RadarSort, 1), (intptr_t) &SF_mindustry_logic_RadarSort_all, "[Lmindustry/logic/RadarSort;", 25 },
	{ "$VALUES", getArrayClass(&class_mindustry_logic_RadarSort, 1), (intptr_t) &SF_mindustry_logic_RadarSort_$VALUES, "[Lmindustry/logic/RadarSort;", 4122 },
};

static MethodMetadata methods[] {
	{ "values", (intptr_t) SM_mindustry_logic_RadarSort_values_R_Array1_mindustry_logic_RadarSort, 0, "()[Lmindustry/logic/RadarSort;", 9 },
	{ "valueOf", (intptr_t) SM_mindustry_logic_RadarSort_valueOf_java_lang_String_R_mindustry_logic_RadarSort, 0, "(Ljava/lang/String;)Lmindustry/logic/RadarSort;", 9 },
	{ "<init>", (intptr_t) init_mindustry_logic_RadarSort_java_lang_String_int_mindustry_logic_RadarSort$RadarSortFunc, 0, "(Ljava/lang/String;ILmindustry/logic/RadarSort$RadarSortFunc;)V", 2 },
	{ "$values", (intptr_t) SM_mindustry_logic_RadarSort_$values_R_Array1_mindustry_logic_RadarSort, 0, "()[Lmindustry/logic/RadarSort;", 4106 },
	{ "lambda$static$4", (intptr_t) SM_mindustry_logic_RadarSort_lambda$static$4_arc_math_geom_Position_mindustry_gen_Unit_R_float, 0, "(Larc/math/geom/Position;Lmindustry/gen/Unit;)F", 4106 },
	{ "lambda$static$3", (intptr_t) SM_mindustry_logic_RadarSort_lambda$static$3_arc_math_geom_Position_mindustry_gen_Unit_R_float, 0, "(Larc/math/geom/Position;Lmindustry/gen/Unit;)F", 4106 },
	{ "lambda$static$2", (intptr_t) SM_mindustry_logic_RadarSort_lambda$static$2_arc_math_geom_Position_mindustry_gen_Unit_R_float, 0, "(Larc/math/geom/Position;Lmindustry/gen/Unit;)F", 4106 },
	{ "lambda$static$1", (intptr_t) SM_mindustry_logic_RadarSort_lambda$static$1_arc_math_geom_Position_mindustry_gen_Unit_R_float, 0, "(Larc/math/geom/Position;Lmindustry/gen/Unit;)F", 4106 },
	{ "lambda$static$0", (intptr_t) SM_mindustry_logic_RadarSort_lambda$static$0_arc_math_geom_Position_mindustry_gen_Unit_R_float, 0, "(Larc/math/geom/Position;Lmindustry/gen/Unit;)F", 4106 },
	{ "<clinit>", (intptr_t) clinit_mindustry_logic_RadarSort, 0, "()V", 8 },
};

Class class_mindustry_logic_RadarSort{
		.nativeName = (intptr_t) "mindustry/logic/RadarSort",
		.parentClass = (intptr_t) &class_java_lang_Enum,
		.size = sizeof(mindustry_logic_RadarSort),
		.classVtable = (intptr_t) vtable_mindustry_logic_RadarSort,
		.staticInitializer = (intptr_t) clinit_mindustry_logic_RadarSort,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_mindustry_logic_RadarSort,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 1,
		.nativeInnerClasses = (intptr_t) innerClasses,
		.access = 16433,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 8,
		.nativeFields = (intptr_t) fields,
		.methodCount = 10,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 16,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_mindustry_logic_RadarSort = registerClass(&class_mindustry_logic_RadarSort);

}
