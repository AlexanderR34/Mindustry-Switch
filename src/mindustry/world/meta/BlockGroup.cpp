#include "mindustry/world/meta/BlockGroup.h"
#include "java/lang/Object.h"
#include "java/lang/String.h"
#include "java/lang/Enum.h"
#include "java/lang/Class.h"
#include "mindustry/world/meta/BlockGroup.h"

extern "C" {

jobject SF_mindustry_world_meta_BlockGroup_none;
jobject SF_mindustry_world_meta_BlockGroup_walls;
jobject SF_mindustry_world_meta_BlockGroup_projectors;
jobject SF_mindustry_world_meta_BlockGroup_turrets;
jobject SF_mindustry_world_meta_BlockGroup_transportation;
jobject SF_mindustry_world_meta_BlockGroup_power;
jobject SF_mindustry_world_meta_BlockGroup_liquids;
jobject SF_mindustry_world_meta_BlockGroup_drills;
jobject SF_mindustry_world_meta_BlockGroup_units;
jobject SF_mindustry_world_meta_BlockGroup_logic;
jobject SF_mindustry_world_meta_BlockGroup_payloads;
jobject SF_mindustry_world_meta_BlockGroup_heat;
jobject SF_mindustry_world_meta_BlockGroup_$VALUES;

void mark_mindustry_world_meta_BlockGroup(jobject object, jint mark, jint depth) {
	if (!object) {
		if (SF_mindustry_world_meta_BlockGroup_none)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_world_meta_BlockGroup_none)->clazz)->markFunction)((jobject) SF_mindustry_world_meta_BlockGroup_none, mark, depth + 1);
		if (SF_mindustry_world_meta_BlockGroup_walls)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_world_meta_BlockGroup_walls)->clazz)->markFunction)((jobject) SF_mindustry_world_meta_BlockGroup_walls, mark, depth + 1);
		if (SF_mindustry_world_meta_BlockGroup_projectors)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_world_meta_BlockGroup_projectors)->clazz)->markFunction)((jobject) SF_mindustry_world_meta_BlockGroup_projectors, mark, depth + 1);
		if (SF_mindustry_world_meta_BlockGroup_turrets)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_world_meta_BlockGroup_turrets)->clazz)->markFunction)((jobject) SF_mindustry_world_meta_BlockGroup_turrets, mark, depth + 1);
		if (SF_mindustry_world_meta_BlockGroup_transportation)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_world_meta_BlockGroup_transportation)->clazz)->markFunction)((jobject) SF_mindustry_world_meta_BlockGroup_transportation, mark, depth + 1);
		if (SF_mindustry_world_meta_BlockGroup_power)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_world_meta_BlockGroup_power)->clazz)->markFunction)((jobject) SF_mindustry_world_meta_BlockGroup_power, mark, depth + 1);
		if (SF_mindustry_world_meta_BlockGroup_liquids)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_world_meta_BlockGroup_liquids)->clazz)->markFunction)((jobject) SF_mindustry_world_meta_BlockGroup_liquids, mark, depth + 1);
		if (SF_mindustry_world_meta_BlockGroup_drills)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_world_meta_BlockGroup_drills)->clazz)->markFunction)((jobject) SF_mindustry_world_meta_BlockGroup_drills, mark, depth + 1);
		if (SF_mindustry_world_meta_BlockGroup_units)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_world_meta_BlockGroup_units)->clazz)->markFunction)((jobject) SF_mindustry_world_meta_BlockGroup_units, mark, depth + 1);
		if (SF_mindustry_world_meta_BlockGroup_logic)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_world_meta_BlockGroup_logic)->clazz)->markFunction)((jobject) SF_mindustry_world_meta_BlockGroup_logic, mark, depth + 1);
		if (SF_mindustry_world_meta_BlockGroup_payloads)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_world_meta_BlockGroup_payloads)->clazz)->markFunction)((jobject) SF_mindustry_world_meta_BlockGroup_payloads, mark, depth + 1);
		if (SF_mindustry_world_meta_BlockGroup_heat)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_world_meta_BlockGroup_heat)->clazz)->markFunction)((jobject) SF_mindustry_world_meta_BlockGroup_heat, mark, depth + 1);
		if (SF_mindustry_world_meta_BlockGroup_$VALUES)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_world_meta_BlockGroup_$VALUES)->clazz)->markFunction)((jobject) SF_mindustry_world_meta_BlockGroup_$VALUES, mark, depth + 1);
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
	auto self = (mindustry_world_meta_BlockGroup *) object;
}

jobject SM_mindustry_world_meta_BlockGroup_values_R_Array1_mindustry_world_meta_BlockGroup(jcontext ctx) {
	jtype frame[1];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/meta/BlockGroup:values", 1 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_world_meta_BlockGroup(ctx);
	{
	LINE_NUMBER(3);
	clinit_mindustry_world_meta_BlockGroup(ctx);
	sp[0].o = (jobject)SF_mindustry_world_meta_BlockGroup_$VALUES;
	sp[0].o = (jobject)((func_java_lang_Object_clone_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_Object_clone_R_java_lang_Object])(ctx, sp[0].o);
	popStackFrame(ctx);
	return (checkCast(ctx, getArrayClass(&class_mindustry_world_meta_BlockGroup, 1), sp[0].o));
	}

	popStackFrame(ctx);
}

jobject SM_mindustry_world_meta_BlockGroup_valueOf_java_lang_String_R_mindustry_world_meta_BlockGroup(jcontext ctx, jobject param0) {
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/meta/BlockGroup:valueOf", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_world_meta_BlockGroup(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(3);
	sp[0].o = (jobject)SM_java_lang_Enum_valueOf_java_lang_Class_java_lang_String_R_java_lang_Enum(ctx, (((jobject) &class_mindustry_world_meta_BlockGroup)), (frame[0].o));
	popStackFrame(ctx);
	return (checkCast(ctx, &class_mindustry_world_meta_BlockGroup, sp[0].o));
	}

	popStackFrame(ctx);
}

void init_mindustry_world_meta_BlockGroup_java_lang_String_int_boolean(jcontext ctx, jobject self, jobject param0, jint param1, jbool param2) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/meta/BlockGroup:<init>", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_world_meta_BlockGroup(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	frame[3].i = param2;
	{
	LINE_NUMBER(9);
	init_java_lang_Enum_java_lang_String_int(ctx, (frame[0].o), (frame[1].o), (frame[2].i));
	LINE_NUMBER(10);
	((mindustry_world_meta_BlockGroup *) NULL_CHECK((frame[0].o)))->F_anyReplace = (frame[3].i);
	LINE_NUMBER(11);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_mindustry_world_meta_BlockGroup_java_lang_String_int(jcontext ctx, jobject self, jobject param0, jint param1) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/meta/BlockGroup:<init>", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_world_meta_BlockGroup(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(14);
	init_mindustry_world_meta_BlockGroup_java_lang_String_int_boolean(ctx, (frame[0].o), (frame[1].o), (frame[2].i), (jint(0)));
	LINE_NUMBER(15);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject SM_mindustry_world_meta_BlockGroup_$values_R_Array1_mindustry_world_meta_BlockGroup(jcontext ctx) {
	jtype frame[4];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/meta/BlockGroup:$values", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_world_meta_BlockGroup(ctx);
	{
	LINE_NUMBER(3);
	sp[0].o = (jobject)createArray(ctx, &class_mindustry_world_meta_BlockGroup, (12));
	jint temp0 = jint(0);
	clinit_mindustry_world_meta_BlockGroup(ctx);
	sp[1].o = (jobject)SF_mindustry_world_meta_BlockGroup_none;
	ARRAY_ACCESS(jobject, sp[0].o, temp0) = sp[1].o;
	jint temp1 = jint(1);
	clinit_mindustry_world_meta_BlockGroup(ctx);
	sp[1].o = (jobject)SF_mindustry_world_meta_BlockGroup_walls;
	ARRAY_ACCESS(jobject, sp[0].o, temp1) = sp[1].o;
	jint temp2 = jint(2);
	clinit_mindustry_world_meta_BlockGroup(ctx);
	sp[1].o = (jobject)SF_mindustry_world_meta_BlockGroup_projectors;
	ARRAY_ACCESS(jobject, sp[0].o, temp2) = sp[1].o;
	jint temp3 = jint(3);
	clinit_mindustry_world_meta_BlockGroup(ctx);
	sp[1].o = (jobject)SF_mindustry_world_meta_BlockGroup_turrets;
	ARRAY_ACCESS(jobject, sp[0].o, temp3) = sp[1].o;
	jint temp4 = jint(4);
	clinit_mindustry_world_meta_BlockGroup(ctx);
	sp[1].o = (jobject)SF_mindustry_world_meta_BlockGroup_transportation;
	ARRAY_ACCESS(jobject, sp[0].o, temp4) = sp[1].o;
	jint temp5 = jint(5);
	clinit_mindustry_world_meta_BlockGroup(ctx);
	sp[1].o = (jobject)SF_mindustry_world_meta_BlockGroup_power;
	ARRAY_ACCESS(jobject, sp[0].o, temp5) = sp[1].o;
	jint temp6 = 6;
	clinit_mindustry_world_meta_BlockGroup(ctx);
	sp[1].o = (jobject)SF_mindustry_world_meta_BlockGroup_liquids;
	ARRAY_ACCESS(jobject, sp[0].o, temp6) = sp[1].o;
	jint temp7 = 7;
	clinit_mindustry_world_meta_BlockGroup(ctx);
	sp[1].o = (jobject)SF_mindustry_world_meta_BlockGroup_drills;
	ARRAY_ACCESS(jobject, sp[0].o, temp7) = sp[1].o;
	jint temp8 = 8;
	clinit_mindustry_world_meta_BlockGroup(ctx);
	sp[1].o = (jobject)SF_mindustry_world_meta_BlockGroup_units;
	ARRAY_ACCESS(jobject, sp[0].o, temp8) = sp[1].o;
	jint temp9 = 9;
	clinit_mindustry_world_meta_BlockGroup(ctx);
	sp[1].o = (jobject)SF_mindustry_world_meta_BlockGroup_logic;
	ARRAY_ACCESS(jobject, sp[0].o, temp9) = sp[1].o;
	jint temp10 = 10;
	clinit_mindustry_world_meta_BlockGroup(ctx);
	sp[1].o = (jobject)SF_mindustry_world_meta_BlockGroup_payloads;
	ARRAY_ACCESS(jobject, sp[0].o, temp10) = sp[1].o;
	jint temp11 = 11;
	clinit_mindustry_world_meta_BlockGroup(ctx);
	sp[1].o = (jobject)SF_mindustry_world_meta_BlockGroup_heat;
	ARRAY_ACCESS(jobject, sp[0].o, temp11) = sp[1].o;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void clinit_mindustry_world_meta_BlockGroup(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	clinit_java_lang_Enum(ctx);
	jtype frame[5];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/meta/BlockGroup:<clinit>", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_world_meta_BlockGroup(ctx);
	{
	LINE_NUMBER(4);
	clinit_mindustry_world_meta_BlockGroup(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_world_meta_BlockGroup);
	init_mindustry_world_meta_BlockGroup_java_lang_String_int(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"none"_j))), (jint(0)));
	clinit_mindustry_world_meta_BlockGroup(ctx);
	SF_mindustry_world_meta_BlockGroup_none = sp[0].o;
	clinit_mindustry_world_meta_BlockGroup(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_world_meta_BlockGroup);
	init_mindustry_world_meta_BlockGroup_java_lang_String_int_boolean(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"walls"_j))), (jint(1)), (jint(1)));
	clinit_mindustry_world_meta_BlockGroup(ctx);
	SF_mindustry_world_meta_BlockGroup_walls = sp[0].o;
	clinit_mindustry_world_meta_BlockGroup(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_world_meta_BlockGroup);
	init_mindustry_world_meta_BlockGroup_java_lang_String_int_boolean(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"projectors"_j))), (jint(2)), (jint(1)));
	clinit_mindustry_world_meta_BlockGroup(ctx);
	SF_mindustry_world_meta_BlockGroup_projectors = sp[0].o;
	clinit_mindustry_world_meta_BlockGroup(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_world_meta_BlockGroup);
	init_mindustry_world_meta_BlockGroup_java_lang_String_int_boolean(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"turrets"_j))), (jint(3)), (jint(1)));
	clinit_mindustry_world_meta_BlockGroup(ctx);
	SF_mindustry_world_meta_BlockGroup_turrets = sp[0].o;
	clinit_mindustry_world_meta_BlockGroup(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_world_meta_BlockGroup);
	init_mindustry_world_meta_BlockGroup_java_lang_String_int_boolean(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"transportation"_j))), (jint(4)), (jint(1)));
	clinit_mindustry_world_meta_BlockGroup(ctx);
	SF_mindustry_world_meta_BlockGroup_transportation = sp[0].o;
	clinit_mindustry_world_meta_BlockGroup(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_world_meta_BlockGroup);
	init_mindustry_world_meta_BlockGroup_java_lang_String_int(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"power"_j))), (jint(5)));
	clinit_mindustry_world_meta_BlockGroup(ctx);
	SF_mindustry_world_meta_BlockGroup_power = sp[0].o;
	clinit_mindustry_world_meta_BlockGroup(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_world_meta_BlockGroup);
	init_mindustry_world_meta_BlockGroup_java_lang_String_int_boolean(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"liquids"_j))), (6), (jint(1)));
	clinit_mindustry_world_meta_BlockGroup(ctx);
	SF_mindustry_world_meta_BlockGroup_liquids = sp[0].o;
	clinit_mindustry_world_meta_BlockGroup(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_world_meta_BlockGroup);
	init_mindustry_world_meta_BlockGroup_java_lang_String_int(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"drills"_j))), (7));
	clinit_mindustry_world_meta_BlockGroup(ctx);
	SF_mindustry_world_meta_BlockGroup_drills = sp[0].o;
	clinit_mindustry_world_meta_BlockGroup(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_world_meta_BlockGroup);
	init_mindustry_world_meta_BlockGroup_java_lang_String_int(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"units"_j))), (8));
	clinit_mindustry_world_meta_BlockGroup(ctx);
	SF_mindustry_world_meta_BlockGroup_units = sp[0].o;
	clinit_mindustry_world_meta_BlockGroup(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_world_meta_BlockGroup);
	init_mindustry_world_meta_BlockGroup_java_lang_String_int_boolean(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"logic"_j))), (9), (jint(1)));
	clinit_mindustry_world_meta_BlockGroup(ctx);
	SF_mindustry_world_meta_BlockGroup_logic = sp[0].o;
	clinit_mindustry_world_meta_BlockGroup(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_world_meta_BlockGroup);
	init_mindustry_world_meta_BlockGroup_java_lang_String_int_boolean(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"payloads"_j))), (10), (jint(1)));
	clinit_mindustry_world_meta_BlockGroup(ctx);
	SF_mindustry_world_meta_BlockGroup_payloads = sp[0].o;
	clinit_mindustry_world_meta_BlockGroup(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_world_meta_BlockGroup);
	init_mindustry_world_meta_BlockGroup_java_lang_String_int_boolean(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"heat"_j))), (11), (jint(1)));
	clinit_mindustry_world_meta_BlockGroup(ctx);
	SF_mindustry_world_meta_BlockGroup_heat = sp[0].o;
	LINE_NUMBER(3);
	sp[0].o = (jobject)SM_mindustry_world_meta_BlockGroup_$values_R_Array1_mindustry_world_meta_BlockGroup(ctx);
	clinit_mindustry_world_meta_BlockGroup(ctx);
	SF_mindustry_world_meta_BlockGroup_$VALUES = sp[0].o;
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void *vtable_mindustry_world_meta_BlockGroup[] {
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
	{ "none", &class_mindustry_world_meta_BlockGroup, (intptr_t) &SF_mindustry_world_meta_BlockGroup_none, "Lmindustry/world/meta/BlockGroup;", 16409 },
	{ "walls", &class_mindustry_world_meta_BlockGroup, (intptr_t) &SF_mindustry_world_meta_BlockGroup_walls, "Lmindustry/world/meta/BlockGroup;", 16409 },
	{ "projectors", &class_mindustry_world_meta_BlockGroup, (intptr_t) &SF_mindustry_world_meta_BlockGroup_projectors, "Lmindustry/world/meta/BlockGroup;", 16409 },
	{ "turrets", &class_mindustry_world_meta_BlockGroup, (intptr_t) &SF_mindustry_world_meta_BlockGroup_turrets, "Lmindustry/world/meta/BlockGroup;", 16409 },
	{ "transportation", &class_mindustry_world_meta_BlockGroup, (intptr_t) &SF_mindustry_world_meta_BlockGroup_transportation, "Lmindustry/world/meta/BlockGroup;", 16409 },
	{ "power", &class_mindustry_world_meta_BlockGroup, (intptr_t) &SF_mindustry_world_meta_BlockGroup_power, "Lmindustry/world/meta/BlockGroup;", 16409 },
	{ "liquids", &class_mindustry_world_meta_BlockGroup, (intptr_t) &SF_mindustry_world_meta_BlockGroup_liquids, "Lmindustry/world/meta/BlockGroup;", 16409 },
	{ "drills", &class_mindustry_world_meta_BlockGroup, (intptr_t) &SF_mindustry_world_meta_BlockGroup_drills, "Lmindustry/world/meta/BlockGroup;", 16409 },
	{ "units", &class_mindustry_world_meta_BlockGroup, (intptr_t) &SF_mindustry_world_meta_BlockGroup_units, "Lmindustry/world/meta/BlockGroup;", 16409 },
	{ "logic", &class_mindustry_world_meta_BlockGroup, (intptr_t) &SF_mindustry_world_meta_BlockGroup_logic, "Lmindustry/world/meta/BlockGroup;", 16409 },
	{ "payloads", &class_mindustry_world_meta_BlockGroup, (intptr_t) &SF_mindustry_world_meta_BlockGroup_payloads, "Lmindustry/world/meta/BlockGroup;", 16409 },
	{ "heat", &class_mindustry_world_meta_BlockGroup, (intptr_t) &SF_mindustry_world_meta_BlockGroup_heat, "Lmindustry/world/meta/BlockGroup;", 16409 },
	{ "anyReplace", &class_boolean, offsetof(mindustry_world_meta_BlockGroup, F_anyReplace), "Z", 17 },
	{ "$VALUES", getArrayClass(&class_mindustry_world_meta_BlockGroup, 1), (intptr_t) &SF_mindustry_world_meta_BlockGroup_$VALUES, "[Lmindustry/world/meta/BlockGroup;", 4122 },
};

static MethodMetadata methods[] {
	{ "values", (intptr_t) SM_mindustry_world_meta_BlockGroup_values_R_Array1_mindustry_world_meta_BlockGroup, 0, "()[Lmindustry/world/meta/BlockGroup;", 9 },
	{ "valueOf", (intptr_t) SM_mindustry_world_meta_BlockGroup_valueOf_java_lang_String_R_mindustry_world_meta_BlockGroup, 0, "(Ljava/lang/String;)Lmindustry/world/meta/BlockGroup;", 9 },
	{ "<init>", (intptr_t) init_mindustry_world_meta_BlockGroup_java_lang_String_int_boolean, 0, "(Ljava/lang/String;IZ)V", 2 },
	{ "<init>", (intptr_t) init_mindustry_world_meta_BlockGroup_java_lang_String_int, 0, "(Ljava/lang/String;I)V", 2 },
	{ "$values", (intptr_t) SM_mindustry_world_meta_BlockGroup_$values_R_Array1_mindustry_world_meta_BlockGroup, 0, "()[Lmindustry/world/meta/BlockGroup;", 4106 },
	{ "<clinit>", (intptr_t) clinit_mindustry_world_meta_BlockGroup, 0, "()V", 8 },
};

Class class_mindustry_world_meta_BlockGroup{
		.nativeName = (intptr_t) "mindustry/world/meta/BlockGroup",
		.parentClass = (intptr_t) &class_java_lang_Enum,
		.size = sizeof(mindustry_world_meta_BlockGroup),
		.classVtable = (intptr_t) vtable_mindustry_world_meta_BlockGroup,
		.staticInitializer = (intptr_t) clinit_mindustry_world_meta_BlockGroup,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_mindustry_world_meta_BlockGroup,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 16433,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 14,
		.nativeFields = (intptr_t) fields,
		.methodCount = 6,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 16,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_mindustry_world_meta_BlockGroup = registerClass(&class_mindustry_world_meta_BlockGroup);

}
