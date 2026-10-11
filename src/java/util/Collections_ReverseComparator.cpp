#include "java/util/Collections_ReverseComparator.h"
#include "java/lang/Object.h"
#include "java/lang/Comparable.h"
#include "java/util/Collections_ReverseComparator.h"
#include "java/util/Collections.h"
#include "java/util/Comparator.h"

extern "C" {

jobject SF_java_util_Collections$ReverseComparator_INSTANCE;

void mark_java_util_Collections$ReverseComparator(jobject object, jint mark, jint depth) {
	if (!object) {
		if (SF_java_util_Collections$ReverseComparator_INSTANCE)
			((gc_mark_ptr) ((jclass) ((jobject) SF_java_util_Collections$ReverseComparator_INSTANCE)->clazz)->markFunction)((jobject) SF_java_util_Collections$ReverseComparator_INSTANCE, mark, depth + 1);
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
	auto self = (java_util_Collections$ReverseComparator *) object;
}

void init_java_util_Collections$ReverseComparator(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/Collections$ReverseComparator:<init>", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_util_Collections$ReverseComparator(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(206);
	init_java_lang_Object(ctx, (frame[0].o));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jint M_java_util_Collections$ReverseComparator_compare_java_lang_Object_java_lang_Object_R_int(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/Collections$ReverseComparator:compare", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(213);
	frame[3].o = (checkCast(ctx, &class_java_lang_Comparable, (frame[2].o)));
	LINE_NUMBER(214);
	jint temp0 = (jint)((func_java_lang_Comparable_compareTo_java_lang_Object_R_int) resolveInterfaceMethod(ctx, &class_java_lang_Comparable, INDEX_java_lang_Comparable_compareTo_java_lang_Object_R_int, (frame[3].o)))(ctx, (frame[3].o), (frame[1].o));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jobject SM_java_util_Collections$ReverseComparator_access$300_R_java_util_Collections$ReverseComparator(jcontext ctx) {
	jtype frame[1];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/Collections$ReverseComparator:access$300", 1 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_util_Collections$ReverseComparator(ctx);
	{
	LINE_NUMBER(206);
	clinit_java_util_Collections$ReverseComparator(ctx);
	sp[0].o = (jobject)SF_java_util_Collections$ReverseComparator_INSTANCE;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void clinit_java_util_Collections$ReverseComparator(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	jtype frame[2];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/Collections$ReverseComparator:<clinit>", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_util_Collections$ReverseComparator(ctx);
	{
	LINE_NUMBER(208);
	clinit_java_util_Collections$ReverseComparator(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_util_Collections$ReverseComparator);
	init_java_util_Collections$ReverseComparator(ctx, sp[0].o);
	clinit_java_util_Collections$ReverseComparator(ctx);
	SF_java_util_Collections$ReverseComparator_INSTANCE = sp[0].o;
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void *vtable_java_util_Collections$ReverseComparator[] {
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
	(void *) M_java_util_Collections$ReverseComparator_compare_java_lang_Object_java_lang_Object_R_int,
	(void *) M_java_util_Comparator_reversed_R_java_util_Comparator,
	(void *) M_java_util_Comparator_thenComparing_java_util_Comparator_R_java_util_Comparator,
	(void *) M_java_util_Comparator_thenComparing_java_util_function_Function_java_util_Comparator_R_java_util_Comparator,
	(void *) M_java_util_Comparator_thenComparing_java_util_function_Function_R_java_util_Comparator,
	(void *) M_java_util_Comparator_thenComparingInt_java_util_function_ToIntFunction_R_java_util_Comparator,
	(void *) M_java_util_Comparator_thenComparingLong_java_util_function_ToLongFunction_R_java_util_Comparator,
	(void *) M_java_util_Comparator_thenComparingDouble_java_util_function_ToDoubleFunction_R_java_util_Comparator,
	(void *) M_java_util_Comparator_lambda$thenComparing$0_java_util_Comparator_java_lang_Object_java_lang_Object_R_int,
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
	{ "compare", "(Ljava/lang/Object;Ljava/lang/Object;)I" },
	{ "reversed", "()Ljava/util/Comparator;" },
	{ "thenComparing", "(Ljava/util/Comparator;)Ljava/util/Comparator;" },
	{ "thenComparing", "(Ljava/util/function/Function;Ljava/util/Comparator;)Ljava/util/Comparator;" },
	{ "thenComparing", "(Ljava/util/function/Function;)Ljava/util/Comparator;" },
	{ "thenComparingInt", "(Ljava/util/function/ToIntFunction;)Ljava/util/Comparator;" },
	{ "thenComparingLong", "(Ljava/util/function/ToLongFunction;)Ljava/util/Comparator;" },
	{ "thenComparingDouble", "(Ljava/util/function/ToDoubleFunction;)Ljava/util/Comparator;" },
	{ "lambda$thenComparing$0", "(Ljava/util/Comparator;Ljava/lang/Object;Ljava/lang/Object;)I" },
};

static jclass interfaces[] { &class_java_util_Comparator, };

static FieldMetadata fields[] {
	{ "INSTANCE", &class_java_util_Collections$ReverseComparator, (intptr_t) &SF_java_util_Collections$ReverseComparator_INSTANCE, "Ljava/util/Collections$ReverseComparator;", 26 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_java_util_Collections$ReverseComparator, 0, "()V", 2 },
	{ "compare", (intptr_t) M_java_util_Collections$ReverseComparator_compare_java_lang_Object_java_lang_Object_R_int, VTABLE_java_util_Collections$ReverseComparator_compare_java_lang_Object_java_lang_Object_R_int, "(Ljava/lang/Object;Ljava/lang/Object;)I", 1 },
	{ "access$300", (intptr_t) SM_java_util_Collections$ReverseComparator_access$300_R_java_util_Collections$ReverseComparator, 0, "()Ljava/util/Collections$ReverseComparator;", 4104 },
	{ "<clinit>", (intptr_t) clinit_java_util_Collections$ReverseComparator, 0, "()V", 8 },
};

Class class_java_util_Collections$ReverseComparator{
		.nativeName = (intptr_t) "java/util/Collections$ReverseComparator",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(java_util_Collections$ReverseComparator),
		.classVtable = (intptr_t) vtable_java_util_Collections$ReverseComparator,
		.staticInitializer = (intptr_t) clinit_java_util_Collections$ReverseComparator,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_java_util_Collections$ReverseComparator,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) &class_java_util_Collections,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 48,
		.interfaceCount = 1,
		.nativeInterfaces = (intptr_t) interfaces,
		.fieldCount = 1,
		.nativeFields = (intptr_t) fields,
		.methodCount = 4,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 20,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_java_util_Collections$ReverseComparator = registerClass(&class_java_util_Collections$ReverseComparator);

}

