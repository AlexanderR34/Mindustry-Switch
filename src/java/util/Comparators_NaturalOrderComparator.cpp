#include "java/util/Comparators_NaturalOrderComparator.h"
#include "java/lang/Object.h"
#include "java/lang/String.h"
#include "java/lang/Comparable.h"
#include "java/util/Comparator.h"
#include "java/util/Comparators.h"
#include "java/lang/Enum.h"
#include "java/lang/Class.h"
#include "java/util/Comparators_NaturalOrderComparator.h"

extern "C" {

jobject SF_java_util_Comparators$NaturalOrderComparator_INSTANCE;
jobject SF_java_util_Comparators$NaturalOrderComparator_$VALUES;

void mark_java_util_Comparators$NaturalOrderComparator(jobject object, jint mark, jint depth) {
	if (!object) {
		if (SF_java_util_Comparators$NaturalOrderComparator_INSTANCE)
			((gc_mark_ptr) ((jclass) ((jobject) SF_java_util_Comparators$NaturalOrderComparator_INSTANCE)->clazz)->markFunction)((jobject) SF_java_util_Comparators$NaturalOrderComparator_INSTANCE, mark, depth + 1);
		if (SF_java_util_Comparators$NaturalOrderComparator_$VALUES)
			((gc_mark_ptr) ((jclass) ((jobject) SF_java_util_Comparators$NaturalOrderComparator_$VALUES)->clazz)->markFunction)((jobject) SF_java_util_Comparators$NaturalOrderComparator_$VALUES, mark, depth + 1);
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
	auto self = (java_util_Comparators$NaturalOrderComparator *) object;
}

jobject SM_java_util_Comparators$NaturalOrderComparator_values_R_Array1_java_util_Comparators$NaturalOrderComparator(jcontext ctx) {
	jtype frame[1];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/Comparators$NaturalOrderComparator:values", 1 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_util_Comparators$NaturalOrderComparator(ctx);
	{
	LINE_NUMBER(47);
	clinit_java_util_Comparators$NaturalOrderComparator(ctx);
	sp[0].o = (jobject)SF_java_util_Comparators$NaturalOrderComparator_$VALUES;
	sp[0].o = (jobject)((func_java_lang_Object_clone_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_Object_clone_R_java_lang_Object])(ctx, sp[0].o);
	popStackFrame(ctx);
	return (checkCast(ctx, getArrayClass(&class_java_util_Comparators$NaturalOrderComparator, 1), sp[0].o));
	}

	popStackFrame(ctx);
}

jobject SM_java_util_Comparators$NaturalOrderComparator_valueOf_java_lang_String_R_java_util_Comparators$NaturalOrderComparator(jcontext ctx, jobject param0) {
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/Comparators$NaturalOrderComparator:valueOf", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_util_Comparators$NaturalOrderComparator(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(47);
	sp[0].o = (jobject)SM_java_lang_Enum_valueOf_java_lang_Class_java_lang_String_R_java_lang_Enum(ctx, (((jobject) &class_java_util_Comparators$NaturalOrderComparator)), (frame[0].o));
	popStackFrame(ctx);
	return (checkCast(ctx, &class_java_util_Comparators$NaturalOrderComparator, sp[0].o));
	}

	popStackFrame(ctx);
}

void init_java_util_Comparators$NaturalOrderComparator_java_lang_String_int(jcontext ctx, jobject self, jobject param0, jint param1) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/Comparators$NaturalOrderComparator:<init>", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_util_Comparators$NaturalOrderComparator(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(47);
	init_java_lang_Enum_java_lang_String_int(ctx, (frame[0].o), (frame[1].o), (frame[2].i));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jint M_java_util_Comparators$NaturalOrderComparator_compare_java_lang_Comparable_java_lang_Comparable_R_int(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/Comparators$NaturalOrderComparator:compare", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(52);
	jint temp0 = (jint)((func_java_lang_Comparable_compareTo_java_lang_Object_R_int) resolveInterfaceMethod(ctx, &class_java_lang_Comparable, INDEX_java_lang_Comparable_compareTo_java_lang_Object_R_int, (frame[1].o)))(ctx, (frame[1].o), (frame[2].o));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jobject M_java_util_Comparators$NaturalOrderComparator_reversed_R_java_util_Comparator(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/Comparators$NaturalOrderComparator:reversed", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(57);
	sp[0].o = (jobject)SM_java_util_Comparator_reverseOrder_R_java_util_Comparator(ctx);
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jint M_java_util_Comparators$NaturalOrderComparator_compare_java_lang_Object_java_lang_Object_R_int(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/Comparators$NaturalOrderComparator:compare", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(47);
	jint temp0 = (jint)((func_java_util_Comparators$NaturalOrderComparator_compare_java_lang_Comparable_java_lang_Comparable_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_util_Comparators$NaturalOrderComparator_compare_java_lang_Comparable_java_lang_Comparable_R_int])(ctx, (frame[0].o), (checkCast(ctx, &class_java_lang_Comparable, (frame[1].o))), (checkCast(ctx, &class_java_lang_Comparable, (frame[2].o))));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jobject SM_java_util_Comparators$NaturalOrderComparator_$values_R_Array1_java_util_Comparators$NaturalOrderComparator(jcontext ctx) {
	jtype frame[4];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/Comparators$NaturalOrderComparator:$values", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_util_Comparators$NaturalOrderComparator(ctx);
	{
	LINE_NUMBER(47);
	sp[0].o = (jobject)createArray(ctx, &class_java_util_Comparators$NaturalOrderComparator, (jint(1)));
	jint temp0 = jint(0);
	clinit_java_util_Comparators$NaturalOrderComparator(ctx);
	sp[1].o = (jobject)SF_java_util_Comparators$NaturalOrderComparator_INSTANCE;
	ARRAY_ACCESS(jobject, sp[0].o, temp0) = sp[1].o;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void clinit_java_util_Comparators$NaturalOrderComparator(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	clinit_java_lang_Enum(ctx);
	jtype frame[4];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/Comparators$NaturalOrderComparator:<clinit>", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_util_Comparators$NaturalOrderComparator(ctx);
	{
	LINE_NUMBER(48);
	clinit_java_util_Comparators$NaturalOrderComparator(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_util_Comparators$NaturalOrderComparator);
	init_java_util_Comparators$NaturalOrderComparator_java_lang_String_int(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"INSTANCE"_j))), (jint(0)));
	clinit_java_util_Comparators$NaturalOrderComparator(ctx);
	SF_java_util_Comparators$NaturalOrderComparator_INSTANCE = sp[0].o;
	LINE_NUMBER(47);
	sp[0].o = (jobject)SM_java_util_Comparators$NaturalOrderComparator_$values_R_Array1_java_util_Comparators$NaturalOrderComparator(ctx);
	clinit_java_util_Comparators$NaturalOrderComparator(ctx);
	SF_java_util_Comparators$NaturalOrderComparator_$VALUES = sp[0].o;
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void *vtable_java_util_Comparators$NaturalOrderComparator[] {
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
	(void *) M_java_util_Comparators$NaturalOrderComparator_compare_java_lang_Object_java_lang_Object_R_int,
	(void *) M_java_util_Comparators$NaturalOrderComparator_reversed_R_java_util_Comparator,
	(void *) M_java_util_Comparator_thenComparing_java_util_Comparator_R_java_util_Comparator,
	(void *) M_java_util_Comparator_thenComparing_java_util_function_Function_java_util_Comparator_R_java_util_Comparator,
	(void *) M_java_util_Comparator_thenComparing_java_util_function_Function_R_java_util_Comparator,
	(void *) M_java_util_Comparator_thenComparingInt_java_util_function_ToIntFunction_R_java_util_Comparator,
	(void *) M_java_util_Comparator_thenComparingLong_java_util_function_ToLongFunction_R_java_util_Comparator,
	(void *) M_java_util_Comparator_thenComparingDouble_java_util_function_ToDoubleFunction_R_java_util_Comparator,
	(void *) M_java_util_Comparator_lambda$thenComparing$0_java_util_Comparator_java_lang_Object_java_lang_Object_R_int,
	(void *) M_java_util_Comparators$NaturalOrderComparator_compare_java_lang_Comparable_java_lang_Comparable_R_int,
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
	{ "compare", "(Ljava/lang/Object;Ljava/lang/Object;)I" },
	{ "reversed", "()Ljava/util/Comparator;" },
	{ "thenComparing", "(Ljava/util/Comparator;)Ljava/util/Comparator;" },
	{ "thenComparing", "(Ljava/util/function/Function;Ljava/util/Comparator;)Ljava/util/Comparator;" },
	{ "thenComparing", "(Ljava/util/function/Function;)Ljava/util/Comparator;" },
	{ "thenComparingInt", "(Ljava/util/function/ToIntFunction;)Ljava/util/Comparator;" },
	{ "thenComparingLong", "(Ljava/util/function/ToLongFunction;)Ljava/util/Comparator;" },
	{ "thenComparingDouble", "(Ljava/util/function/ToDoubleFunction;)Ljava/util/Comparator;" },
	{ "lambda$thenComparing$0", "(Ljava/util/Comparator;Ljava/lang/Object;Ljava/lang/Object;)I" },
	{ "compare", "(Ljava/lang/Comparable;Ljava/lang/Comparable;)I" },
};

static jclass interfaces[] { &class_java_util_Comparator, };

static FieldMetadata fields[] {
	{ "INSTANCE", &class_java_util_Comparators$NaturalOrderComparator, (intptr_t) &SF_java_util_Comparators$NaturalOrderComparator_INSTANCE, "Ljava/util/Comparators$NaturalOrderComparator;", 16409 },
	{ "$VALUES", getArrayClass(&class_java_util_Comparators$NaturalOrderComparator, 1), (intptr_t) &SF_java_util_Comparators$NaturalOrderComparator_$VALUES, "[Ljava/util/Comparators$NaturalOrderComparator;", 4122 },
};

static MethodMetadata methods[] {
	{ "values", (intptr_t) SM_java_util_Comparators$NaturalOrderComparator_values_R_Array1_java_util_Comparators$NaturalOrderComparator, 0, "()[Ljava/util/Comparators$NaturalOrderComparator;", 9 },
	{ "valueOf", (intptr_t) SM_java_util_Comparators$NaturalOrderComparator_valueOf_java_lang_String_R_java_util_Comparators$NaturalOrderComparator, 0, "(Ljava/lang/String;)Ljava/util/Comparators$NaturalOrderComparator;", 9 },
	{ "<init>", (intptr_t) init_java_util_Comparators$NaturalOrderComparator_java_lang_String_int, 0, "(Ljava/lang/String;I)V", 2 },
	{ "compare", (intptr_t) M_java_util_Comparators$NaturalOrderComparator_compare_java_lang_Comparable_java_lang_Comparable_R_int, VTABLE_java_util_Comparators$NaturalOrderComparator_compare_java_lang_Comparable_java_lang_Comparable_R_int, "(Ljava/lang/Comparable;Ljava/lang/Comparable;)I", 1 },
	{ "reversed", (intptr_t) M_java_util_Comparators$NaturalOrderComparator_reversed_R_java_util_Comparator, VTABLE_java_util_Comparators$NaturalOrderComparator_reversed_R_java_util_Comparator, "()Ljava/util/Comparator;", 1 },
	{ "compare", (intptr_t) M_java_util_Comparators$NaturalOrderComparator_compare_java_lang_Object_java_lang_Object_R_int, VTABLE_java_util_Comparators$NaturalOrderComparator_compare_java_lang_Object_java_lang_Object_R_int, "(Ljava/lang/Object;Ljava/lang/Object;)I", 4161 },
	{ "$values", (intptr_t) SM_java_util_Comparators$NaturalOrderComparator_$values_R_Array1_java_util_Comparators$NaturalOrderComparator, 0, "()[Ljava/util/Comparators$NaturalOrderComparator;", 4106 },
	{ "<clinit>", (intptr_t) clinit_java_util_Comparators$NaturalOrderComparator, 0, "()V", 8 },
};

Class class_java_util_Comparators$NaturalOrderComparator{
		.nativeName = (intptr_t) "java/util/Comparators$NaturalOrderComparator",
		.parentClass = (intptr_t) &class_java_lang_Enum,
		.size = sizeof(java_util_Comparators$NaturalOrderComparator),
		.classVtable = (intptr_t) vtable_java_util_Comparators$NaturalOrderComparator,
		.staticInitializer = (intptr_t) clinit_java_util_Comparators$NaturalOrderComparator,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_java_util_Comparators$NaturalOrderComparator,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) &class_java_util_Comparators,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 16440,
		.interfaceCount = 1,
		.nativeInterfaces = (intptr_t) interfaces,
		.fieldCount = 2,
		.nativeFields = (intptr_t) fields,
		.methodCount = 8,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 26,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_java_util_Comparators$NaturalOrderComparator = registerClass(&class_java_util_Comparators$NaturalOrderComparator);

}

