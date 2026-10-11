#include "java/util/Collections_ReverseComparatorWithComparator.h"
#include "java/lang/Object.h"
#include "java/util/Collections_ReverseComparatorWithComparator.h"
#include "java/util/Collections.h"
#include "java/util/Comparator.h"

extern "C" {

jlong SF_java_util_Collections$ReverseComparatorWithComparator_serialVersionUID;

void mark_java_util_Collections$ReverseComparatorWithComparator(jobject object, jint mark, jint depth) {
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
	auto self = (java_util_Collections$ReverseComparatorWithComparator *) object;
	if (self->F_comparator)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_comparator)->clazz)->markFunction)((jobject) self->F_comparator, mark, depth + 1);
}

void clinit_java_util_Collections$ReverseComparatorWithComparator(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	SF_java_util_Collections$ReverseComparatorWithComparator_serialVersionUID = jlong(4374092139857ll);
}

void init_java_util_Collections$ReverseComparatorWithComparator_java_util_Comparator(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/Collections$ReverseComparatorWithComparator:<init>", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_util_Collections$ReverseComparatorWithComparator(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(225);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(226);
	((java_util_Collections$ReverseComparatorWithComparator *) NULL_CHECK((frame[0].o)))->F_comparator = (jref) (frame[1].o);
	LINE_NUMBER(227);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jint M_java_util_Collections$ReverseComparatorWithComparator_compare_java_lang_Object_java_lang_Object_R_int(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/Collections$ReverseComparatorWithComparator:compare", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(230);
	sp[0].o = (jobject)((java_util_Collections$ReverseComparatorWithComparator *) NULL_CHECK((frame[0].o)))->F_comparator;
	jint temp0 = (jint)((func_java_util_Comparator_compare_java_lang_Object_java_lang_Object_R_int) resolveInterfaceMethod(ctx, &class_java_util_Comparator, INDEX_java_util_Comparator_compare_java_lang_Object_java_lang_Object_R_int, sp[0].o))(ctx, sp[0].o, (frame[2].o), (frame[1].o));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jbool M_java_util_Collections$ReverseComparatorWithComparator_equals_java_lang_Object_R_boolean(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/Collections$ReverseComparatorWithComparator:equals", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(235);
	if ((isInstance(ctx, (frame[1].o), &class_java_util_Collections$ReverseComparatorWithComparator)) == 0) goto label_1;
	}
	{
	sp[0].o = (jobject)((java_util_Collections$ReverseComparatorWithComparator *) NULL_CHECK((checkCast(ctx, &class_java_util_Collections$ReverseComparatorWithComparator, (frame[1].o)))))->F_comparator;
	sp[1].o = (jobject)((java_util_Collections$ReverseComparatorWithComparator *) NULL_CHECK((frame[0].o)))->F_comparator;
	LINE_NUMBER(237);
	jint temp0 = (jint)((func_java_lang_Object_equals_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_Object_equals_java_lang_Object_R_boolean])(ctx, sp[0].o, sp[1].o);
	if (temp0 == 0) goto label_1;
	}
	INST_ICONST(1);
	goto label_3;
label_1:;
	INST_ICONST(0);
label_3:;
	LINE_NUMBER(235);
	popStackFrame(ctx);
	INST_IRETURN();

	popStackFrame(ctx);
}

jint M_java_util_Collections$ReverseComparatorWithComparator_hashCode_R_int(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/Collections$ReverseComparatorWithComparator:hashCode", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(242);
	sp[0].o = (jobject)((java_util_Collections$ReverseComparatorWithComparator *) NULL_CHECK((frame[0].o)))->F_comparator;
	jint temp0 = (jint)((func_java_lang_Object_hashCode_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_Object_hashCode_R_int])(ctx, sp[0].o);
	popStackFrame(ctx);
	return (temp0 ^ (jint(-1)));
	}

	popStackFrame(ctx);
}

jobject SM_java_util_Collections$ReverseComparatorWithComparator_access$400_java_util_Collections$ReverseComparatorWithComparator_R_java_util_Comparator(jcontext ctx, jobject param0) {
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/Collections$ReverseComparatorWithComparator:access$400", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_util_Collections$ReverseComparatorWithComparator(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(218);
	sp[0].o = (jobject)((java_util_Collections$ReverseComparatorWithComparator *) NULL_CHECK((frame[0].o)))->F_comparator;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void *vtable_java_util_Collections$ReverseComparatorWithComparator[] {
	(void *) M_java_util_Collections$ReverseComparatorWithComparator_hashCode_R_int,
	(void *) M_java_util_Collections$ReverseComparatorWithComparator_equals_java_lang_Object_R_boolean,
	(void *) M_java_lang_Object_clone_R_java_lang_Object,
	(void *) M_java_lang_Object_getClass_R_java_lang_Class,
	(void *) M_java_lang_Object_toString_R_java_lang_String,
	(void *) M_java_lang_Object_finalize,
	(void *) M_java_lang_Object_notify,
	(void *) M_java_lang_Object_notifyAll,
	(void *) M_java_lang_Object_wait,
	(void *) M_java_lang_Object_wait_long,
	(void *) M_java_lang_Object_wait_long_int,
	(void *) M_java_util_Collections$ReverseComparatorWithComparator_compare_java_lang_Object_java_lang_Object_R_int,
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
	{ "serialVersionUID", &class_long, (intptr_t) &SF_java_util_Collections$ReverseComparatorWithComparator_serialVersionUID, "J", 26 },
	{ "comparator", &class_java_util_Comparator, offsetof(java_util_Collections$ReverseComparatorWithComparator, F_comparator), "Ljava/util/Comparator;", 18 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_java_util_Collections$ReverseComparatorWithComparator_java_util_Comparator, 0, "(Ljava/util/Comparator;)V", 0 },
	{ "compare", (intptr_t) M_java_util_Collections$ReverseComparatorWithComparator_compare_java_lang_Object_java_lang_Object_R_int, VTABLE_java_util_Collections$ReverseComparatorWithComparator_compare_java_lang_Object_java_lang_Object_R_int, "(Ljava/lang/Object;Ljava/lang/Object;)I", 1 },
	{ "equals", (intptr_t) M_java_util_Collections$ReverseComparatorWithComparator_equals_java_lang_Object_R_boolean, VTABLE_java_util_Collections$ReverseComparatorWithComparator_equals_java_lang_Object_R_boolean, "(Ljava/lang/Object;)Z", 1 },
	{ "hashCode", (intptr_t) M_java_util_Collections$ReverseComparatorWithComparator_hashCode_R_int, VTABLE_java_util_Collections$ReverseComparatorWithComparator_hashCode_R_int, "()I", 1 },
	{ "access$400", (intptr_t) SM_java_util_Collections$ReverseComparatorWithComparator_access$400_java_util_Collections$ReverseComparatorWithComparator_R_java_util_Comparator, 0, "(Ljava/util/Collections$ReverseComparatorWithComparator;)Ljava/util/Comparator;", 4104 },
};

Class class_java_util_Collections$ReverseComparatorWithComparator{
		.nativeName = (intptr_t) "java/util/Collections$ReverseComparatorWithComparator",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(java_util_Collections$ReverseComparatorWithComparator),
		.classVtable = (intptr_t) vtable_java_util_Collections$ReverseComparatorWithComparator,
		.staticInitializer = (intptr_t) clinit_java_util_Collections$ReverseComparatorWithComparator,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_java_util_Collections$ReverseComparatorWithComparator,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) &class_java_util_Collections,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 48,
		.interfaceCount = 1,
		.nativeInterfaces = (intptr_t) interfaces,
		.fieldCount = 2,
		.nativeFields = (intptr_t) fields,
		.methodCount = 5,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 20,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_java_util_Collections$ReverseComparatorWithComparator = registerClass(&class_java_util_Collections$ReverseComparatorWithComparator);

}

