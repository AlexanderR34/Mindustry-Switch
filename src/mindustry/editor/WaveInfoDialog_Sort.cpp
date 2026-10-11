#include "mindustry/editor/WaveInfoDialog_Sort.h"
#include "arc/func/Floatf.h"
#include "java/lang/Enum.h"
#include "mindustry/editor/WaveInfoDialog.h"
#include "mindustry/type/UnitType.h"
#include "mindustry/game/SpawnGroup.h"
#include "java/lang/Object.h"
#include "java/lang/String.h"
#include "mindustry/editor/WaveInfoDialog_Sort_invoke_arc_func_Floatf_6.h"
#include "mindustry/editor/WaveInfoDialog_Sort_invoke_arc_func_Floatf_7.h"
#include "mindustry/editor/WaveInfoDialog_Sort_invoke_arc_func_Floatf_5.h"
#include "java/lang/Class.h"
#include "mindustry/editor/WaveInfoDialog_Sort_invoke_arc_func_Floatf_8.h"
#include "mindustry/editor/WaveInfoDialog_Sort.h"
#include "mindustry/editor/WaveInfoDialog_Sort_invoke_arc_func_Floatf_9.h"

extern "C" {

jobject SF_mindustry_editor_WaveInfoDialog$Sort_begin;
jobject SF_mindustry_editor_WaveInfoDialog$Sort_health;
jobject SF_mindustry_editor_WaveInfoDialog$Sort_type;
jobject SF_mindustry_editor_WaveInfoDialog$Sort_all;
jobject SF_mindustry_editor_WaveInfoDialog$Sort_$VALUES;

void mark_mindustry_editor_WaveInfoDialog$Sort(jobject object, jint mark, jint depth) {
	if (!object) {
		if (SF_mindustry_editor_WaveInfoDialog$Sort_begin)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_editor_WaveInfoDialog$Sort_begin)->clazz)->markFunction)((jobject) SF_mindustry_editor_WaveInfoDialog$Sort_begin, mark, depth + 1);
		if (SF_mindustry_editor_WaveInfoDialog$Sort_health)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_editor_WaveInfoDialog$Sort_health)->clazz)->markFunction)((jobject) SF_mindustry_editor_WaveInfoDialog$Sort_health, mark, depth + 1);
		if (SF_mindustry_editor_WaveInfoDialog$Sort_type)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_editor_WaveInfoDialog$Sort_type)->clazz)->markFunction)((jobject) SF_mindustry_editor_WaveInfoDialog$Sort_type, mark, depth + 1);
		if (SF_mindustry_editor_WaveInfoDialog$Sort_all)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_editor_WaveInfoDialog$Sort_all)->clazz)->markFunction)((jobject) SF_mindustry_editor_WaveInfoDialog$Sort_all, mark, depth + 1);
		if (SF_mindustry_editor_WaveInfoDialog$Sort_$VALUES)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_editor_WaveInfoDialog$Sort_$VALUES)->clazz)->markFunction)((jobject) SF_mindustry_editor_WaveInfoDialog$Sort_$VALUES, mark, depth + 1);
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
	auto self = (mindustry_editor_WaveInfoDialog$Sort *) object;
	if (self->F_sort)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_sort)->clazz)->markFunction)((jobject) self->F_sort, mark, depth + 1);
	if (self->F_secondary)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_secondary)->clazz)->markFunction)((jobject) self->F_secondary, mark, depth + 1);
}

jobject SM_mindustry_editor_WaveInfoDialog$Sort_values_R_Array1_mindustry_editor_WaveInfoDialog$Sort(jcontext ctx) {
	jtype frame[1];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/editor/WaveInfoDialog$Sort:values", 1 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_editor_WaveInfoDialog$Sort(ctx);
	{
	LINE_NUMBER(432);
	clinit_mindustry_editor_WaveInfoDialog$Sort(ctx);
	sp[0].o = (jobject)SF_mindustry_editor_WaveInfoDialog$Sort_$VALUES;
	sp[0].o = (jobject)((func_java_lang_Object_clone_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_Object_clone_R_java_lang_Object])(ctx, sp[0].o);
	popStackFrame(ctx);
	return (checkCast(ctx, getArrayClass(&class_mindustry_editor_WaveInfoDialog$Sort, 1), sp[0].o));
	}

	popStackFrame(ctx);
}

jobject SM_mindustry_editor_WaveInfoDialog$Sort_valueOf_java_lang_String_R_mindustry_editor_WaveInfoDialog$Sort(jcontext ctx, jobject param0) {
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/editor/WaveInfoDialog$Sort:valueOf", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_editor_WaveInfoDialog$Sort(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(432);
	sp[0].o = (jobject)SM_java_lang_Enum_valueOf_java_lang_Class_java_lang_String_R_java_lang_Enum(ctx, (((jobject) &class_mindustry_editor_WaveInfoDialog$Sort)), (frame[0].o));
	popStackFrame(ctx);
	return (checkCast(ctx, &class_mindustry_editor_WaveInfoDialog$Sort, sp[0].o));
	}

	popStackFrame(ctx);
}

void init_mindustry_editor_WaveInfoDialog$Sort_java_lang_String_int_arc_func_Floatf(jcontext ctx, jobject self, jobject param0, jint param1, jobject param2) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/editor/WaveInfoDialog$Sort:<init>", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_editor_WaveInfoDialog$Sort(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	frame[3].o = param2;
	{
	LINE_NUMBER(442);
	sp[0].o = frame[0].o;
	sp[1].o = frame[1].o;
	jint temp0 = frame[2].i;
	sp[2].o = frame[3].o;
	{ /* InvokeDynamic */
		clinit_mindustry_editor_WaveInfoDialog$Sort_invoke_arc_func_Floatf_5(ctx);
		auto proxy = (mindustry_editor_WaveInfoDialog$Sort_invoke_arc_func_Floatf_5 *) gcAlloc(ctx, &class_mindustry_editor_WaveInfoDialog$Sort_invoke_arc_func_Floatf_5);
		sp[3].o = (jobject) proxy;
	}
	init_mindustry_editor_WaveInfoDialog$Sort_java_lang_String_int_arc_func_Floatf_arc_func_Floatf(ctx, sp[0].o, sp[1].o, temp0, sp[2].o, sp[3].o);
	LINE_NUMBER(443);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_mindustry_editor_WaveInfoDialog$Sort_java_lang_String_int_arc_func_Floatf_arc_func_Floatf(jcontext ctx, jobject self, jobject param0, jint param1, jobject param2, jobject param3) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/editor/WaveInfoDialog$Sort:<init>", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_editor_WaveInfoDialog$Sort(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	frame[3].o = param2;
	frame[4].o = param3;
	{
	LINE_NUMBER(445);
	init_java_lang_Enum_java_lang_String_int(ctx, (frame[0].o), (frame[1].o), (frame[2].i));
	LINE_NUMBER(446);
	((mindustry_editor_WaveInfoDialog$Sort *) NULL_CHECK((frame[0].o)))->F_sort = (jref) (frame[3].o);
	LINE_NUMBER(447);
	((mindustry_editor_WaveInfoDialog$Sort *) NULL_CHECK((frame[0].o)))->F_secondary = (jref) (frame[4].o);
	LINE_NUMBER(448);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject SM_mindustry_editor_WaveInfoDialog$Sort_$values_R_Array1_mindustry_editor_WaveInfoDialog$Sort(jcontext ctx) {
	jtype frame[4];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/editor/WaveInfoDialog$Sort:$values", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_editor_WaveInfoDialog$Sort(ctx);
	{
	LINE_NUMBER(432);
	sp[0].o = (jobject)createArray(ctx, &class_mindustry_editor_WaveInfoDialog$Sort, (jint(3)));
	jint temp0 = jint(0);
	clinit_mindustry_editor_WaveInfoDialog$Sort(ctx);
	sp[1].o = (jobject)SF_mindustry_editor_WaveInfoDialog$Sort_begin;
	ARRAY_ACCESS(jobject, sp[0].o, temp0) = sp[1].o;
	jint temp1 = jint(1);
	clinit_mindustry_editor_WaveInfoDialog$Sort(ctx);
	sp[1].o = (jobject)SF_mindustry_editor_WaveInfoDialog$Sort_health;
	ARRAY_ACCESS(jobject, sp[0].o, temp1) = sp[1].o;
	jint temp2 = jint(2);
	clinit_mindustry_editor_WaveInfoDialog$Sort(ctx);
	sp[1].o = (jobject)SF_mindustry_editor_WaveInfoDialog$Sort_type;
	ARRAY_ACCESS(jobject, sp[0].o, temp2) = sp[1].o;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jfloat SM_mindustry_editor_WaveInfoDialog$Sort_lambda$new$0_mindustry_game_SpawnGroup_R_float(jcontext ctx, jobject param0) {
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/editor/WaveInfoDialog$Sort:lambda$new$0", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_editor_WaveInfoDialog$Sort(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(442);
	popStackFrame(ctx);
	return (jfloat(((jint)((mindustry_game_SpawnGroup *) NULL_CHECK((frame[0].o)))->F_begin)));
	}

	popStackFrame(ctx);
}

jfloat SM_mindustry_editor_WaveInfoDialog$Sort_lambda$static$3_mindustry_game_SpawnGroup_R_float(jcontext ctx, jobject param0) {
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/editor/WaveInfoDialog$Sort:lambda$static$3", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_editor_WaveInfoDialog$Sort(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(435);
	sp[0].o = (jobject)((mindustry_game_SpawnGroup *) NULL_CHECK((frame[0].o)))->F_type;
	popStackFrame(ctx);
	return (jfloat(((jint)((mindustry_ctype_Content *) NULL_CHECK(sp[0].o))->F_id)));
	}

	popStackFrame(ctx);
}

jfloat SM_mindustry_editor_WaveInfoDialog$Sort_lambda$static$2_mindustry_game_SpawnGroup_R_float(jcontext ctx, jobject param0) {
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/editor/WaveInfoDialog$Sort:lambda$static$2", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_editor_WaveInfoDialog$Sort(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(434);
	sp[0].o = (jobject)((mindustry_game_SpawnGroup *) NULL_CHECK((frame[0].o)))->F_type;
	popStackFrame(ctx);
	return ((jfloat)((mindustry_type_UnitType *) NULL_CHECK(sp[0].o))->F_health);
	}

	popStackFrame(ctx);
}

jfloat SM_mindustry_editor_WaveInfoDialog$Sort_lambda$static$1_mindustry_game_SpawnGroup_R_float(jcontext ctx, jobject param0) {
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/editor/WaveInfoDialog$Sort:lambda$static$1", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_editor_WaveInfoDialog$Sort(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(433);
	sp[0].o = (jobject)((mindustry_game_SpawnGroup *) NULL_CHECK((frame[0].o)))->F_type;
	popStackFrame(ctx);
	return (jfloat(((jint)((mindustry_ctype_Content *) NULL_CHECK(sp[0].o))->F_id)));
	}

	popStackFrame(ctx);
}

jfloat SM_mindustry_editor_WaveInfoDialog$Sort_lambda$static$0_mindustry_game_SpawnGroup_R_float(jcontext ctx, jobject param0) {
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/editor/WaveInfoDialog$Sort:lambda$static$0", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_editor_WaveInfoDialog$Sort(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(433);
	popStackFrame(ctx);
	return (jfloat(((jint)((mindustry_game_SpawnGroup *) NULL_CHECK((frame[0].o)))->F_begin)));
	}

	popStackFrame(ctx);
}

void clinit_mindustry_editor_WaveInfoDialog$Sort(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	clinit_java_lang_Enum(ctx);
	jtype frame[6];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/editor/WaveInfoDialog$Sort:<clinit>", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_editor_WaveInfoDialog$Sort(ctx);
	{
	LINE_NUMBER(433);
	clinit_mindustry_editor_WaveInfoDialog$Sort(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_editor_WaveInfoDialog$Sort);
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"begin"_j));
	jint temp0 = jint(0);
	{ /* InvokeDynamic */
		clinit_mindustry_editor_WaveInfoDialog$Sort_invoke_arc_func_Floatf_6(ctx);
		auto proxy = (mindustry_editor_WaveInfoDialog$Sort_invoke_arc_func_Floatf_6 *) gcAlloc(ctx, &class_mindustry_editor_WaveInfoDialog$Sort_invoke_arc_func_Floatf_6);
		sp[2].o = (jobject) proxy;
	}
	{ /* InvokeDynamic */
		clinit_mindustry_editor_WaveInfoDialog$Sort_invoke_arc_func_Floatf_7(ctx);
		auto proxy = (mindustry_editor_WaveInfoDialog$Sort_invoke_arc_func_Floatf_7 *) gcAlloc(ctx, &class_mindustry_editor_WaveInfoDialog$Sort_invoke_arc_func_Floatf_7);
		sp[3].o = (jobject) proxy;
	}
	init_mindustry_editor_WaveInfoDialog$Sort_java_lang_String_int_arc_func_Floatf_arc_func_Floatf(ctx, sp[0].o, sp[1].o, temp0, sp[2].o, sp[3].o);
	clinit_mindustry_editor_WaveInfoDialog$Sort(ctx);
	SF_mindustry_editor_WaveInfoDialog$Sort_begin = sp[0].o;
	LINE_NUMBER(434);
	clinit_mindustry_editor_WaveInfoDialog$Sort(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_editor_WaveInfoDialog$Sort);
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"health"_j));
	jint temp1 = jint(1);
	{ /* InvokeDynamic */
		clinit_mindustry_editor_WaveInfoDialog$Sort_invoke_arc_func_Floatf_8(ctx);
		auto proxy = (mindustry_editor_WaveInfoDialog$Sort_invoke_arc_func_Floatf_8 *) gcAlloc(ctx, &class_mindustry_editor_WaveInfoDialog$Sort_invoke_arc_func_Floatf_8);
		sp[2].o = (jobject) proxy;
	}
	init_mindustry_editor_WaveInfoDialog$Sort_java_lang_String_int_arc_func_Floatf(ctx, sp[0].o, sp[1].o, temp1, sp[2].o);
	clinit_mindustry_editor_WaveInfoDialog$Sort(ctx);
	SF_mindustry_editor_WaveInfoDialog$Sort_health = sp[0].o;
	LINE_NUMBER(435);
	clinit_mindustry_editor_WaveInfoDialog$Sort(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_editor_WaveInfoDialog$Sort);
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"type"_j));
	jint temp2 = jint(2);
	{ /* InvokeDynamic */
		clinit_mindustry_editor_WaveInfoDialog$Sort_invoke_arc_func_Floatf_9(ctx);
		auto proxy = (mindustry_editor_WaveInfoDialog$Sort_invoke_arc_func_Floatf_9 *) gcAlloc(ctx, &class_mindustry_editor_WaveInfoDialog$Sort_invoke_arc_func_Floatf_9);
		sp[2].o = (jobject) proxy;
	}
	init_mindustry_editor_WaveInfoDialog$Sort_java_lang_String_int_arc_func_Floatf(ctx, sp[0].o, sp[1].o, temp2, sp[2].o);
	clinit_mindustry_editor_WaveInfoDialog$Sort(ctx);
	SF_mindustry_editor_WaveInfoDialog$Sort_type = sp[0].o;
	LINE_NUMBER(432);
	sp[0].o = (jobject)SM_mindustry_editor_WaveInfoDialog$Sort_$values_R_Array1_mindustry_editor_WaveInfoDialog$Sort(ctx);
	clinit_mindustry_editor_WaveInfoDialog$Sort(ctx);
	SF_mindustry_editor_WaveInfoDialog$Sort_$VALUES = sp[0].o;
	LINE_NUMBER(437);
	sp[0].o = (jobject)SM_mindustry_editor_WaveInfoDialog$Sort_values_R_Array1_mindustry_editor_WaveInfoDialog$Sort(ctx);
	clinit_mindustry_editor_WaveInfoDialog$Sort(ctx);
	SF_mindustry_editor_WaveInfoDialog$Sort_all = sp[0].o;
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void *vtable_mindustry_editor_WaveInfoDialog$Sort[] {
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

static FieldMetadata fields[] {
	{ "begin", &class_mindustry_editor_WaveInfoDialog$Sort, (intptr_t) &SF_mindustry_editor_WaveInfoDialog$Sort_begin, "Lmindustry/editor/WaveInfoDialog$Sort;", 16409 },
	{ "health", &class_mindustry_editor_WaveInfoDialog$Sort, (intptr_t) &SF_mindustry_editor_WaveInfoDialog$Sort_health, "Lmindustry/editor/WaveInfoDialog$Sort;", 16409 },
	{ "type", &class_mindustry_editor_WaveInfoDialog$Sort, (intptr_t) &SF_mindustry_editor_WaveInfoDialog$Sort_type, "Lmindustry/editor/WaveInfoDialog$Sort;", 16409 },
	{ "all", getArrayClass(&class_mindustry_editor_WaveInfoDialog$Sort, 1), (intptr_t) &SF_mindustry_editor_WaveInfoDialog$Sort_all, "[Lmindustry/editor/WaveInfoDialog$Sort;", 24 },
	{ "sort", &class_arc_func_Floatf, offsetof(mindustry_editor_WaveInfoDialog$Sort, F_sort), "Larc/func/Floatf;", 16 },
	{ "secondary", &class_arc_func_Floatf, offsetof(mindustry_editor_WaveInfoDialog$Sort, F_secondary), "Larc/func/Floatf;", 16 },
	{ "$VALUES", getArrayClass(&class_mindustry_editor_WaveInfoDialog$Sort, 1), (intptr_t) &SF_mindustry_editor_WaveInfoDialog$Sort_$VALUES, "[Lmindustry/editor/WaveInfoDialog$Sort;", 4122 },
};

static MethodMetadata methods[] {
	{ "values", (intptr_t) SM_mindustry_editor_WaveInfoDialog$Sort_values_R_Array1_mindustry_editor_WaveInfoDialog$Sort, 0, "()[Lmindustry/editor/WaveInfoDialog$Sort;", 9 },
	{ "valueOf", (intptr_t) SM_mindustry_editor_WaveInfoDialog$Sort_valueOf_java_lang_String_R_mindustry_editor_WaveInfoDialog$Sort, 0, "(Ljava/lang/String;)Lmindustry/editor/WaveInfoDialog$Sort;", 9 },
	{ "<init>", (intptr_t) init_mindustry_editor_WaveInfoDialog$Sort_java_lang_String_int_arc_func_Floatf, 0, "(Ljava/lang/String;ILarc/func/Floatf;)V", 2 },
	{ "<init>", (intptr_t) init_mindustry_editor_WaveInfoDialog$Sort_java_lang_String_int_arc_func_Floatf_arc_func_Floatf, 0, "(Ljava/lang/String;ILarc/func/Floatf;Larc/func/Floatf;)V", 2 },
	{ "$values", (intptr_t) SM_mindustry_editor_WaveInfoDialog$Sort_$values_R_Array1_mindustry_editor_WaveInfoDialog$Sort, 0, "()[Lmindustry/editor/WaveInfoDialog$Sort;", 4106 },
	{ "lambda$new$0", (intptr_t) SM_mindustry_editor_WaveInfoDialog$Sort_lambda$new$0_mindustry_game_SpawnGroup_R_float, 0, "(Lmindustry/game/SpawnGroup;)F", 4106 },
	{ "lambda$static$3", (intptr_t) SM_mindustry_editor_WaveInfoDialog$Sort_lambda$static$3_mindustry_game_SpawnGroup_R_float, 0, "(Lmindustry/game/SpawnGroup;)F", 4106 },
	{ "lambda$static$2", (intptr_t) SM_mindustry_editor_WaveInfoDialog$Sort_lambda$static$2_mindustry_game_SpawnGroup_R_float, 0, "(Lmindustry/game/SpawnGroup;)F", 4106 },
	{ "lambda$static$1", (intptr_t) SM_mindustry_editor_WaveInfoDialog$Sort_lambda$static$1_mindustry_game_SpawnGroup_R_float, 0, "(Lmindustry/game/SpawnGroup;)F", 4106 },
	{ "lambda$static$0", (intptr_t) SM_mindustry_editor_WaveInfoDialog$Sort_lambda$static$0_mindustry_game_SpawnGroup_R_float, 0, "(Lmindustry/game/SpawnGroup;)F", 4106 },
	{ "<clinit>", (intptr_t) clinit_mindustry_editor_WaveInfoDialog$Sort, 0, "()V", 8 },
};

Class class_mindustry_editor_WaveInfoDialog$Sort{
		.nativeName = (intptr_t) "mindustry/editor/WaveInfoDialog$Sort",
		.parentClass = (intptr_t) &class_java_lang_Enum,
		.size = sizeof(mindustry_editor_WaveInfoDialog$Sort),
		.classVtable = (intptr_t) vtable_mindustry_editor_WaveInfoDialog$Sort,
		.staticInitializer = (intptr_t) clinit_mindustry_editor_WaveInfoDialog$Sort,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_mindustry_editor_WaveInfoDialog$Sort,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) &class_mindustry_editor_WaveInfoDialog,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 16440,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 7,
		.nativeFields = (intptr_t) fields,
		.methodCount = 11,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 16,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_mindustry_editor_WaveInfoDialog$Sort = registerClass(&class_mindustry_editor_WaveInfoDialog$Sort);

}

