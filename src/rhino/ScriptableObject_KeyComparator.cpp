#include "rhino/ScriptableObject_KeyComparator.h"
#include "java/lang/Integer.h"
#include "java/lang/Object.h"
#include "rhino/ScriptableObject_KeyComparator.h"
#include "java/util/Comparator.h"
#include "rhino/ScriptableObject.h"

extern "C" {


void mark_rhino_ScriptableObject$KeyComparator(jobject object, jint mark, jint depth) {
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
	auto self = (rhino_ScriptableObject$KeyComparator *) object;
}

void clinit_rhino_ScriptableObject$KeyComparator(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
}

void init_rhino_ScriptableObject$KeyComparator(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/ScriptableObject$KeyComparator:<init>", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_rhino_ScriptableObject$KeyComparator(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(2810);
	init_java_lang_Object(ctx, (frame[0].o));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jint M_rhino_ScriptableObject$KeyComparator_compare_java_lang_Object_java_lang_Object_R_int(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/ScriptableObject$KeyComparator:compare", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(2814);
	if ((isInstance(ctx, (frame[1].o), &class_java_lang_Integer)) == 0) goto label_1;
	}
	{
	LINE_NUMBER(2815);
	if ((isInstance(ctx, (frame[2].o), &class_java_lang_Integer)) == 0) goto label_3;
	}
	{
	LINE_NUMBER(2816);
	jint temp0 = (jint)((func_java_lang_Integer_intValue_R_int) ((void **) nullCheck(ctx, (checkCast(ctx, &class_java_lang_Integer, (frame[1].o))))->vtable)[VTABLE_java_lang_Integer_intValue_R_int])(ctx, (checkCast(ctx, &class_java_lang_Integer, (frame[1].o))));
	frame[3].i = temp0;
	LINE_NUMBER(2817);
	jint temp1 = (jint)((func_java_lang_Integer_intValue_R_int) ((void **) nullCheck(ctx, (checkCast(ctx, &class_java_lang_Integer, (frame[2].o))))->vtable)[VTABLE_java_lang_Integer_intValue_R_int])(ctx, (checkCast(ctx, &class_java_lang_Integer, (frame[2].o))));
	frame[4].i = temp1;
	LINE_NUMBER(2818);
	if ((frame[3].i) >= (frame[4].i)) goto label_7;
	}
	{
	LINE_NUMBER(2819);
	popStackFrame(ctx);
	return (jint(-1));
	}
label_7:;
	{
	LINE_NUMBER(2821);
	if ((frame[3].i) <= (frame[4].i)) goto label_9;
	}
	{
	LINE_NUMBER(2822);
	popStackFrame(ctx);
	return (jint(1));
	}
label_9:;
	{
	LINE_NUMBER(2824);
	popStackFrame(ctx);
	return (jint(0));
	}
label_3:;
	{
	LINE_NUMBER(2826);
	popStackFrame(ctx);
	return (jint(-1));
	}
label_1:;
	{
	LINE_NUMBER(2828);
	if ((isInstance(ctx, (frame[2].o), &class_java_lang_Integer)) == 0) goto label_11;
	}
	{
	LINE_NUMBER(2829);
	popStackFrame(ctx);
	return (jint(1));
	}
label_11:;
	{
	LINE_NUMBER(2831);
	popStackFrame(ctx);
	return (jint(0));
	}

	popStackFrame(ctx);
}

void *vtable_rhino_ScriptableObject$KeyComparator[] {
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
	(void *) M_rhino_ScriptableObject$KeyComparator_compare_java_lang_Object_java_lang_Object_R_int,
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

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_rhino_ScriptableObject$KeyComparator, 0, "()V", 1 },
	{ "compare", (intptr_t) M_rhino_ScriptableObject$KeyComparator_compare_java_lang_Object_java_lang_Object_R_int, VTABLE_rhino_ScriptableObject$KeyComparator_compare_java_lang_Object_java_lang_Object_R_int, "(Ljava/lang/Object;Ljava/lang/Object;)I", 1 },
};

Class class_rhino_ScriptableObject$KeyComparator{
		.nativeName = (intptr_t) "rhino/ScriptableObject$KeyComparator",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(rhino_ScriptableObject$KeyComparator),
		.classVtable = (intptr_t) vtable_rhino_ScriptableObject$KeyComparator,
		.staticInitializer = (intptr_t) clinit_rhino_ScriptableObject$KeyComparator,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_rhino_ScriptableObject$KeyComparator,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) &class_rhino_ScriptableObject,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 49,
		.interfaceCount = 1,
		.nativeInterfaces = (intptr_t) interfaces,
		.fieldCount = 0,
		.nativeFields = (intptr_t) nullptr,
		.methodCount = 2,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 20,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_rhino_ScriptableObject$KeyComparator = registerClass(&class_rhino_ScriptableObject$KeyComparator);

}

