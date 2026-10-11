#include "java/util/CaseInsensitiveOrder.h"
#include "java/lang/Math.h"
#include "java/lang/Object.h"
#include "java/lang/String.h"
#include "java/util/CaseInsensitiveOrder.h"
#include "java/util/Comparator.h"

extern "C" {


void mark_java_util_CaseInsensitiveOrder(jobject object, jint mark, jint depth) {
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
	auto self = (java_util_CaseInsensitiveOrder *) object;
}

void clinit_java_util_CaseInsensitiveOrder(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
}

void init_java_util_CaseInsensitiveOrder(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/CaseInsensitiveOrder:<init>", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_util_CaseInsensitiveOrder(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(33);
	init_java_lang_Object(ctx, (frame[0].o));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jint M_java_util_CaseInsensitiveOrder_compare_java_lang_String_java_lang_String_R_int(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[11];
	auto stack = &frame[9];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/CaseInsensitiveOrder:compare", 11 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(39);
	jint temp0 = (jint)((func_java_lang_String_length_R_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_String_length_R_int])(ctx, (frame[1].o));
	frame[3].i = temp0;
	LINE_NUMBER(40);
	jint temp1 = (jint)((func_java_lang_String_length_R_int) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_java_lang_String_length_R_int])(ctx, (frame[2].o));
	frame[4].i = temp1;
	LINE_NUMBER(41);
	sp[0].o = (jobject)((func_java_lang_String_toLowerCase_R_java_lang_String) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_String_toLowerCase_R_java_lang_String])(ctx, (frame[1].o));
	frame[1].o = sp[0].o;
	LINE_NUMBER(42);
	sp[0].o = (jobject)((func_java_lang_String_toLowerCase_R_java_lang_String) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_java_lang_String_toLowerCase_R_java_lang_String])(ctx, (frame[2].o));
	frame[2].o = sp[0].o;
	LINE_NUMBER(43);
	jint temp2 = (jint)SM_java_lang_Math_min_int_int_R_int(ctx, (frame[3].i), (frame[4].i));
	frame[5].i = temp2;
	LINE_NUMBER(44);
	frame[6].i = (jint(0));
	}
label_6:;
	{
	if ((frame[6].i) >= (frame[5].i)) goto label_7;
	}
	{
	LINE_NUMBER(45);
	jint temp0 = (jint)((func_java_lang_String_charAt_int_R_char) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_String_charAt_int_R_char])(ctx, (frame[1].o), (frame[6].i));
	frame[7].i = temp0;
	LINE_NUMBER(46);
	jint temp1 = (jint)((func_java_lang_String_charAt_int_R_char) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_java_lang_String_charAt_int_R_char])(ctx, (frame[2].o), (frame[6].i));
	frame[8].i = temp1;
	LINE_NUMBER(47);
	if ((frame[7].i) == (frame[8].i)) goto label_11;
	}
	{
	LINE_NUMBER(48);
	popStackFrame(ctx);
	return ((frame[7].i) - (frame[8].i));
	}
label_11:;
	{
	LINE_NUMBER(44);
	INST_IINC(6, 1);
	goto label_6;
	}
label_7:;
	{
	LINE_NUMBER(51);
	popStackFrame(ctx);
	return ((frame[3].i) - (frame[4].i));
	}

	popStackFrame(ctx);
}

jint M_java_util_CaseInsensitiveOrder_compare_java_lang_Object_java_lang_Object_R_int(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/CaseInsensitiveOrder:compare", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(33);
	jint temp0 = (jint)((func_java_util_CaseInsensitiveOrder_compare_java_lang_String_java_lang_String_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_util_CaseInsensitiveOrder_compare_java_lang_String_java_lang_String_R_int])(ctx, (frame[0].o), (checkCast(ctx, &class_java_lang_String, (frame[1].o))), (checkCast(ctx, &class_java_lang_String, (frame[2].o))));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

void *vtable_java_util_CaseInsensitiveOrder[] {
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
	(void *) M_java_util_CaseInsensitiveOrder_compare_java_lang_Object_java_lang_Object_R_int,
	(void *) M_java_util_Comparator_reversed_R_java_util_Comparator,
	(void *) M_java_util_Comparator_thenComparing_java_util_Comparator_R_java_util_Comparator,
	(void *) M_java_util_Comparator_thenComparing_java_util_function_Function_java_util_Comparator_R_java_util_Comparator,
	(void *) M_java_util_Comparator_thenComparing_java_util_function_Function_R_java_util_Comparator,
	(void *) M_java_util_Comparator_thenComparingInt_java_util_function_ToIntFunction_R_java_util_Comparator,
	(void *) M_java_util_Comparator_thenComparingLong_java_util_function_ToLongFunction_R_java_util_Comparator,
	(void *) M_java_util_Comparator_thenComparingDouble_java_util_function_ToDoubleFunction_R_java_util_Comparator,
	(void *) M_java_util_Comparator_lambda$thenComparing$0_java_util_Comparator_java_lang_Object_java_lang_Object_R_int,
	(void *) M_java_util_CaseInsensitiveOrder_compare_java_lang_String_java_lang_String_R_int,
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
	{ "compare", "(Ljava/lang/String;Ljava/lang/String;)I" },
};

static jclass interfaces[] { &class_java_util_Comparator, };

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_java_util_CaseInsensitiveOrder, 0, "()V", 1 },
	{ "compare", (intptr_t) M_java_util_CaseInsensitiveOrder_compare_java_lang_String_java_lang_String_R_int, VTABLE_java_util_CaseInsensitiveOrder_compare_java_lang_String_java_lang_String_R_int, "(Ljava/lang/String;Ljava/lang/String;)I", 1 },
	{ "compare", (intptr_t) M_java_util_CaseInsensitiveOrder_compare_java_lang_Object_java_lang_Object_R_int, VTABLE_java_util_CaseInsensitiveOrder_compare_java_lang_Object_java_lang_Object_R_int, "(Ljava/lang/Object;Ljava/lang/Object;)I", 4161 },
};

Class class_java_util_CaseInsensitiveOrder{
		.nativeName = (intptr_t) "java/util/CaseInsensitiveOrder",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(java_util_CaseInsensitiveOrder),
		.classVtable = (intptr_t) vtable_java_util_CaseInsensitiveOrder,
		.staticInitializer = (intptr_t) clinit_java_util_CaseInsensitiveOrder,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_java_util_CaseInsensitiveOrder,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 33,
		.interfaceCount = 1,
		.nativeInterfaces = (intptr_t) interfaces,
		.fieldCount = 0,
		.nativeFields = (intptr_t) nullptr,
		.methodCount = 3,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 21,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_java_util_CaseInsensitiveOrder = registerClass(&class_java_util_CaseInsensitiveOrder);

}
