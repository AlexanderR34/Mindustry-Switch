#include "mindustry/type/Category.h"
#include "java/lang/Object.h"
#include "java/lang/String.h"
#include "mindustry/type/Category.h"
#include "java/lang/Enum.h"
#include "java/lang/Class.h"

extern "C" {

jobject SF_mindustry_type_Category_turret;
jobject SF_mindustry_type_Category_production;
jobject SF_mindustry_type_Category_distribution;
jobject SF_mindustry_type_Category_liquid;
jobject SF_mindustry_type_Category_power;
jobject SF_mindustry_type_Category_defense;
jobject SF_mindustry_type_Category_crafting;
jobject SF_mindustry_type_Category_units;
jobject SF_mindustry_type_Category_effect;
jobject SF_mindustry_type_Category_logic;
jobject SF_mindustry_type_Category_all;
jobject SF_mindustry_type_Category_$VALUES;

void mark_mindustry_type_Category(jobject object, jint mark, jint depth) {
	if (!object) {
		if (SF_mindustry_type_Category_turret)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_type_Category_turret)->clazz)->markFunction)((jobject) SF_mindustry_type_Category_turret, mark, depth + 1);
		if (SF_mindustry_type_Category_production)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_type_Category_production)->clazz)->markFunction)((jobject) SF_mindustry_type_Category_production, mark, depth + 1);
		if (SF_mindustry_type_Category_distribution)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_type_Category_distribution)->clazz)->markFunction)((jobject) SF_mindustry_type_Category_distribution, mark, depth + 1);
		if (SF_mindustry_type_Category_liquid)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_type_Category_liquid)->clazz)->markFunction)((jobject) SF_mindustry_type_Category_liquid, mark, depth + 1);
		if (SF_mindustry_type_Category_power)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_type_Category_power)->clazz)->markFunction)((jobject) SF_mindustry_type_Category_power, mark, depth + 1);
		if (SF_mindustry_type_Category_defense)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_type_Category_defense)->clazz)->markFunction)((jobject) SF_mindustry_type_Category_defense, mark, depth + 1);
		if (SF_mindustry_type_Category_crafting)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_type_Category_crafting)->clazz)->markFunction)((jobject) SF_mindustry_type_Category_crafting, mark, depth + 1);
		if (SF_mindustry_type_Category_units)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_type_Category_units)->clazz)->markFunction)((jobject) SF_mindustry_type_Category_units, mark, depth + 1);
		if (SF_mindustry_type_Category_effect)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_type_Category_effect)->clazz)->markFunction)((jobject) SF_mindustry_type_Category_effect, mark, depth + 1);
		if (SF_mindustry_type_Category_logic)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_type_Category_logic)->clazz)->markFunction)((jobject) SF_mindustry_type_Category_logic, mark, depth + 1);
		if (SF_mindustry_type_Category_all)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_type_Category_all)->clazz)->markFunction)((jobject) SF_mindustry_type_Category_all, mark, depth + 1);
		if (SF_mindustry_type_Category_$VALUES)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_type_Category_$VALUES)->clazz)->markFunction)((jobject) SF_mindustry_type_Category_$VALUES, mark, depth + 1);
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
	auto self = (mindustry_type_Category *) object;
}

jobject SM_mindustry_type_Category_values_R_Array1_mindustry_type_Category(jcontext ctx) {
	jtype frame[1];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/type/Category:values", 1 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_type_Category(ctx);
	{
	LINE_NUMBER(3);
	clinit_mindustry_type_Category(ctx);
	sp[0].o = (jobject)SF_mindustry_type_Category_$VALUES;
	sp[0].o = (jobject)((func_java_lang_Object_clone_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_Object_clone_R_java_lang_Object])(ctx, sp[0].o);
	popStackFrame(ctx);
	return (checkCast(ctx, getArrayClass(&class_mindustry_type_Category, 1), sp[0].o));
	}

	popStackFrame(ctx);
}

jobject SM_mindustry_type_Category_valueOf_java_lang_String_R_mindustry_type_Category(jcontext ctx, jobject param0) {
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/type/Category:valueOf", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_type_Category(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(3);
	sp[0].o = (jobject)SM_java_lang_Enum_valueOf_java_lang_Class_java_lang_String_R_java_lang_Enum(ctx, (((jobject) &class_mindustry_type_Category)), (frame[0].o));
	popStackFrame(ctx);
	return (checkCast(ctx, &class_mindustry_type_Category, sp[0].o));
	}

	popStackFrame(ctx);
}

void init_mindustry_type_Category_java_lang_String_int(jcontext ctx, jobject self, jobject param0, jint param1) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/type/Category:<init>", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_type_Category(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(3);
	init_java_lang_Enum_java_lang_String_int(ctx, (frame[0].o), (frame[1].o), (frame[2].i));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_mindustry_type_Category_prev_R_mindustry_type_Category(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/type/Category:prev", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(28);
	clinit_mindustry_type_Category(ctx);
	sp[0].o = (jobject)SF_mindustry_type_Category_all;
	jint temp0 = (jint)((func_mindustry_type_Category_ordinal_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_type_Category_ordinal_R_int])(ctx, (frame[0].o));
	jint temp1 = temp0 - (jint(1));
	clinit_mindustry_type_Category(ctx);
	sp[1].o = (jobject)SF_mindustry_type_Category_all;
	jint temp2 = temp1 + (((jarray) nullCheck(ctx, sp[1].o))->length);
	clinit_mindustry_type_Category(ctx);
	sp[1].o = (jobject)SF_mindustry_type_Category_all;
	popStackFrame(ctx);
	return ((jobject)ARRAY_ACCESS(jobject, sp[0].o, (temp2 % (((jarray) nullCheck(ctx, sp[1].o))->length))));
	}

	popStackFrame(ctx);
}

jobject M_mindustry_type_Category_next_R_mindustry_type_Category(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/type/Category:next", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(32);
	clinit_mindustry_type_Category(ctx);
	sp[0].o = (jobject)SF_mindustry_type_Category_all;
	jint temp0 = (jint)((func_mindustry_type_Category_ordinal_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_type_Category_ordinal_R_int])(ctx, (frame[0].o));
	jint temp1 = temp0 + (jint(1));
	clinit_mindustry_type_Category(ctx);
	sp[1].o = (jobject)SF_mindustry_type_Category_all;
	popStackFrame(ctx);
	return ((jobject)ARRAY_ACCESS(jobject, sp[0].o, (temp1 % (((jarray) nullCheck(ctx, sp[1].o))->length))));
	}

	popStackFrame(ctx);
}

jobject SM_mindustry_type_Category_$values_R_Array1_mindustry_type_Category(jcontext ctx) {
	jtype frame[4];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/type/Category:$values", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_type_Category(ctx);
	{
	LINE_NUMBER(3);
	sp[0].o = (jobject)createArray(ctx, &class_mindustry_type_Category, (10));
	jint temp0 = jint(0);
	clinit_mindustry_type_Category(ctx);
	sp[1].o = (jobject)SF_mindustry_type_Category_turret;
	ARRAY_ACCESS(jobject, sp[0].o, temp0) = sp[1].o;
	jint temp1 = jint(1);
	clinit_mindustry_type_Category(ctx);
	sp[1].o = (jobject)SF_mindustry_type_Category_production;
	ARRAY_ACCESS(jobject, sp[0].o, temp1) = sp[1].o;
	jint temp2 = jint(2);
	clinit_mindustry_type_Category(ctx);
	sp[1].o = (jobject)SF_mindustry_type_Category_distribution;
	ARRAY_ACCESS(jobject, sp[0].o, temp2) = sp[1].o;
	jint temp3 = jint(3);
	clinit_mindustry_type_Category(ctx);
	sp[1].o = (jobject)SF_mindustry_type_Category_liquid;
	ARRAY_ACCESS(jobject, sp[0].o, temp3) = sp[1].o;
	jint temp4 = jint(4);
	clinit_mindustry_type_Category(ctx);
	sp[1].o = (jobject)SF_mindustry_type_Category_power;
	ARRAY_ACCESS(jobject, sp[0].o, temp4) = sp[1].o;
	jint temp5 = jint(5);
	clinit_mindustry_type_Category(ctx);
	sp[1].o = (jobject)SF_mindustry_type_Category_defense;
	ARRAY_ACCESS(jobject, sp[0].o, temp5) = sp[1].o;
	jint temp6 = 6;
	clinit_mindustry_type_Category(ctx);
	sp[1].o = (jobject)SF_mindustry_type_Category_crafting;
	ARRAY_ACCESS(jobject, sp[0].o, temp6) = sp[1].o;
	jint temp7 = 7;
	clinit_mindustry_type_Category(ctx);
	sp[1].o = (jobject)SF_mindustry_type_Category_units;
	ARRAY_ACCESS(jobject, sp[0].o, temp7) = sp[1].o;
	jint temp8 = 8;
	clinit_mindustry_type_Category(ctx);
	sp[1].o = (jobject)SF_mindustry_type_Category_effect;
	ARRAY_ACCESS(jobject, sp[0].o, temp8) = sp[1].o;
	jint temp9 = 9;
	clinit_mindustry_type_Category(ctx);
	sp[1].o = (jobject)SF_mindustry_type_Category_logic;
	ARRAY_ACCESS(jobject, sp[0].o, temp9) = sp[1].o;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void clinit_mindustry_type_Category(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	clinit_java_lang_Enum(ctx);
	jtype frame[4];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/type/Category:<clinit>", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_type_Category(ctx);
	{
	LINE_NUMBER(5);
	clinit_mindustry_type_Category(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_type_Category);
	init_mindustry_type_Category_java_lang_String_int(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"turret"_j))), (jint(0)));
	clinit_mindustry_type_Category(ctx);
	SF_mindustry_type_Category_turret = sp[0].o;
	LINE_NUMBER(7);
	clinit_mindustry_type_Category(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_type_Category);
	init_mindustry_type_Category_java_lang_String_int(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"production"_j))), (jint(1)));
	clinit_mindustry_type_Category(ctx);
	SF_mindustry_type_Category_production = sp[0].o;
	LINE_NUMBER(9);
	clinit_mindustry_type_Category(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_type_Category);
	init_mindustry_type_Category_java_lang_String_int(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"distribution"_j))), (jint(2)));
	clinit_mindustry_type_Category(ctx);
	SF_mindustry_type_Category_distribution = sp[0].o;
	LINE_NUMBER(11);
	clinit_mindustry_type_Category(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_type_Category);
	init_mindustry_type_Category_java_lang_String_int(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"liquid"_j))), (jint(3)));
	clinit_mindustry_type_Category(ctx);
	SF_mindustry_type_Category_liquid = sp[0].o;
	LINE_NUMBER(13);
	clinit_mindustry_type_Category(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_type_Category);
	init_mindustry_type_Category_java_lang_String_int(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"power"_j))), (jint(4)));
	clinit_mindustry_type_Category(ctx);
	SF_mindustry_type_Category_power = sp[0].o;
	LINE_NUMBER(15);
	clinit_mindustry_type_Category(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_type_Category);
	init_mindustry_type_Category_java_lang_String_int(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"defense"_j))), (jint(5)));
	clinit_mindustry_type_Category(ctx);
	SF_mindustry_type_Category_defense = sp[0].o;
	LINE_NUMBER(17);
	clinit_mindustry_type_Category(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_type_Category);
	init_mindustry_type_Category_java_lang_String_int(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"crafting"_j))), (6));
	clinit_mindustry_type_Category(ctx);
	SF_mindustry_type_Category_crafting = sp[0].o;
	LINE_NUMBER(19);
	clinit_mindustry_type_Category(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_type_Category);
	init_mindustry_type_Category_java_lang_String_int(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"units"_j))), (7));
	clinit_mindustry_type_Category(ctx);
	SF_mindustry_type_Category_units = sp[0].o;
	LINE_NUMBER(21);
	clinit_mindustry_type_Category(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_type_Category);
	init_mindustry_type_Category_java_lang_String_int(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"effect"_j))), (8));
	clinit_mindustry_type_Category(ctx);
	SF_mindustry_type_Category_effect = sp[0].o;
	LINE_NUMBER(23);
	clinit_mindustry_type_Category(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_type_Category);
	init_mindustry_type_Category_java_lang_String_int(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"logic"_j))), (9));
	clinit_mindustry_type_Category(ctx);
	SF_mindustry_type_Category_logic = sp[0].o;
	LINE_NUMBER(3);
	sp[0].o = (jobject)SM_mindustry_type_Category_$values_R_Array1_mindustry_type_Category(ctx);
	clinit_mindustry_type_Category(ctx);
	SF_mindustry_type_Category_$VALUES = sp[0].o;
	LINE_NUMBER(25);
	sp[0].o = (jobject)SM_mindustry_type_Category_values_R_Array1_mindustry_type_Category(ctx);
	clinit_mindustry_type_Category(ctx);
	SF_mindustry_type_Category_all = sp[0].o;
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void *vtable_mindustry_type_Category[] {
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
	(void *) M_mindustry_type_Category_prev_R_mindustry_type_Category,
	(void *) M_mindustry_type_Category_next_R_mindustry_type_Category,
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
	{ "prev", "()Lmindustry/type/Category;" },
	{ "next", "()Lmindustry/type/Category;" },
};

static FieldMetadata fields[] {
	{ "turret", &class_mindustry_type_Category, (intptr_t) &SF_mindustry_type_Category_turret, "Lmindustry/type/Category;", 16409 },
	{ "production", &class_mindustry_type_Category, (intptr_t) &SF_mindustry_type_Category_production, "Lmindustry/type/Category;", 16409 },
	{ "distribution", &class_mindustry_type_Category, (intptr_t) &SF_mindustry_type_Category_distribution, "Lmindustry/type/Category;", 16409 },
	{ "liquid", &class_mindustry_type_Category, (intptr_t) &SF_mindustry_type_Category_liquid, "Lmindustry/type/Category;", 16409 },
	{ "power", &class_mindustry_type_Category, (intptr_t) &SF_mindustry_type_Category_power, "Lmindustry/type/Category;", 16409 },
	{ "defense", &class_mindustry_type_Category, (intptr_t) &SF_mindustry_type_Category_defense, "Lmindustry/type/Category;", 16409 },
	{ "crafting", &class_mindustry_type_Category, (intptr_t) &SF_mindustry_type_Category_crafting, "Lmindustry/type/Category;", 16409 },
	{ "units", &class_mindustry_type_Category, (intptr_t) &SF_mindustry_type_Category_units, "Lmindustry/type/Category;", 16409 },
	{ "effect", &class_mindustry_type_Category, (intptr_t) &SF_mindustry_type_Category_effect, "Lmindustry/type/Category;", 16409 },
	{ "logic", &class_mindustry_type_Category, (intptr_t) &SF_mindustry_type_Category_logic, "Lmindustry/type/Category;", 16409 },
	{ "all", getArrayClass(&class_mindustry_type_Category, 1), (intptr_t) &SF_mindustry_type_Category_all, "[Lmindustry/type/Category;", 25 },
	{ "$VALUES", getArrayClass(&class_mindustry_type_Category, 1), (intptr_t) &SF_mindustry_type_Category_$VALUES, "[Lmindustry/type/Category;", 4122 },
};

static MethodMetadata methods[] {
	{ "values", (intptr_t) SM_mindustry_type_Category_values_R_Array1_mindustry_type_Category, 0, "()[Lmindustry/type/Category;", 9 },
	{ "valueOf", (intptr_t) SM_mindustry_type_Category_valueOf_java_lang_String_R_mindustry_type_Category, 0, "(Ljava/lang/String;)Lmindustry/type/Category;", 9 },
	{ "<init>", (intptr_t) init_mindustry_type_Category_java_lang_String_int, 0, "(Ljava/lang/String;I)V", 2 },
	{ "prev", (intptr_t) M_mindustry_type_Category_prev_R_mindustry_type_Category, VTABLE_mindustry_type_Category_prev_R_mindustry_type_Category, "()Lmindustry/type/Category;", 1 },
	{ "next", (intptr_t) M_mindustry_type_Category_next_R_mindustry_type_Category, VTABLE_mindustry_type_Category_next_R_mindustry_type_Category, "()Lmindustry/type/Category;", 1 },
	{ "$values", (intptr_t) SM_mindustry_type_Category_$values_R_Array1_mindustry_type_Category, 0, "()[Lmindustry/type/Category;", 4106 },
	{ "<clinit>", (intptr_t) clinit_mindustry_type_Category, 0, "()V", 8 },
};

Class class_mindustry_type_Category{
		.nativeName = (intptr_t) "mindustry/type/Category",
		.parentClass = (intptr_t) &class_java_lang_Enum,
		.size = sizeof(mindustry_type_Category),
		.classVtable = (intptr_t) vtable_mindustry_type_Category,
		.staticInitializer = (intptr_t) clinit_mindustry_type_Category,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_mindustry_type_Category,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 16433,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 12,
		.nativeFields = (intptr_t) fields,
		.methodCount = 7,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 18,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_mindustry_type_Category = registerClass(&class_mindustry_type_Category);

}
