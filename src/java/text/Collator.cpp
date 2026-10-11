#include "java/text/Collator.h"
#include "java/lang/Object.h"
#include "java/lang/String.h"
#include "java/util/Comparator.h"
#include "java/lang/NullPointerException.h"
#include "java/text/Collator.h"
#include "java/util/Locale.h"
#include "java/text/CollationKey.h"

extern "C" {

jint SF_java_text_Collator_NO_DECOMPOSITION;
jint SF_java_text_Collator_CANONICAL_DECOMPOSITION;
jint SF_java_text_Collator_FULL_DECOMPOSITION;
jint SF_java_text_Collator_PRIMARY;
jint SF_java_text_Collator_SECONDARY;
jint SF_java_text_Collator_TERTIARY;
jint SF_java_text_Collator_IDENTICAL;

void mark_java_text_Collator(jobject object, jint mark, jint depth) {
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
	auto self = (java_text_Collator *) object;
}

void clinit_java_text_Collator(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	SF_java_text_Collator_NO_DECOMPOSITION = jint(0);
	SF_java_text_Collator_CANONICAL_DECOMPOSITION = jint(1);
	SF_java_text_Collator_FULL_DECOMPOSITION = jint(2);
	SF_java_text_Collator_PRIMARY = jint(0);
	SF_java_text_Collator_SECONDARY = jint(1);
	SF_java_text_Collator_TERTIARY = jint(2);
	SF_java_text_Collator_IDENTICAL = jint(3);
}

void init_java_text_Collator(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/text/Collator:<init>", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_text_Collator(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(63);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(64);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jint M_java_text_Collator_compare_java_lang_Object_java_lang_Object_R_int(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/text/Collator:compare", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(81);
	jint temp0 = (jint)((func_java_text_Collator_compare_java_lang_String_java_lang_String_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_text_Collator_compare_java_lang_String_java_lang_String_R_int])(ctx, (frame[0].o), (checkCast(ctx, &class_java_lang_String, (frame[1].o))), (checkCast(ctx, &class_java_lang_String, (frame[2].o))));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jbool M_java_text_Collator_equals_java_lang_String_java_lang_String_R_boolean(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/text/Collator:equals", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(109);
	jint temp0 = (jint)((func_java_text_Collator_compare_java_lang_String_java_lang_String_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_text_Collator_compare_java_lang_String_java_lang_String_R_int])(ctx, (frame[0].o), (frame[1].o), (frame[2].o));
	if (temp0 != 0) goto label_1;
	}
	INST_ICONST(1);
	goto label_2;
label_1:;
	INST_ICONST(0);
label_2:;
	popStackFrame(ctx);
	INST_IRETURN();

	popStackFrame(ctx);
}

jobject SM_java_text_Collator_getAvailableLocales_R_Array1_java_util_Locale(jcontext ctx) {
	jtype frame[1];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/text/Collator:getAvailableLocales", 1 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_text_Collator(ctx);
	{
	LINE_NUMBER(118);
	sp[0].o = (jobject)createArray(ctx, &class_java_util_Locale, (jint(0)));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jint M_java_text_Collator_getDecomposition_R_int(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/text/Collator:getDecomposition", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(139);
	popStackFrame(ctx);
	return (jint(0));
	}

	popStackFrame(ctx);
}

jobject SM_java_text_Collator_getInstance_R_java_text_Collator(jcontext ctx) {
	jtype frame[1];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/text/Collator:getInstance", 1 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_text_Collator(ctx);
	{
	LINE_NUMBER(148);
	sp[0].o = (jobject)SM_java_util_Locale_getDefault_R_java_util_Locale(ctx);
	sp[0].o = (jobject)SM_java_text_Collator_getInstance_java_util_Locale_R_java_text_Collator(ctx, sp[0].o);
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject SM_java_text_Collator_getInstance_java_util_Locale_R_java_text_Collator(jcontext ctx, jobject param0) {
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/text/Collator:getInstance", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_text_Collator(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(155);
	if ((frame[0].o) != nullptr) goto label_1;
	}
	{
	LINE_NUMBER(156);
	clinit_java_lang_NullPointerException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_NullPointerException);
	init_java_lang_NullPointerException_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"locale == null"_j))));
	throwException(ctx, sp[0].o);	}
label_1:;
	{
	LINE_NUMBER(158);
	popStackFrame(ctx);
	return (jobject(nullptr));
	}

	popStackFrame(ctx);
}

jint M_java_text_Collator_getStrength_R_int(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/text/Collator:getStrength", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(168);
	popStackFrame(ctx);
	return (jint(3));
	}

	popStackFrame(ctx);
}

void M_java_text_Collator_setDecomposition_int(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/text/Collator:setDecomposition", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	LINE_NUMBER(186);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_java_text_Collator_setStrength_int(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/text/Collator:setStrength", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	LINE_NUMBER(198);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void *vtable_java_text_Collator[] {
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
	(void *) M_java_text_Collator_compare_java_lang_Object_java_lang_Object_R_int,
	(void *) M_java_util_Comparator_reversed_R_java_util_Comparator,
	(void *) M_java_util_Comparator_thenComparing_java_util_Comparator_R_java_util_Comparator,
	(void *) M_java_util_Comparator_thenComparing_java_util_function_Function_java_util_Comparator_R_java_util_Comparator,
	(void *) M_java_util_Comparator_thenComparing_java_util_function_Function_R_java_util_Comparator,
	(void *) M_java_util_Comparator_thenComparingInt_java_util_function_ToIntFunction_R_java_util_Comparator,
	(void *) M_java_util_Comparator_thenComparingLong_java_util_function_ToLongFunction_R_java_util_Comparator,
	(void *) M_java_util_Comparator_thenComparingDouble_java_util_function_ToDoubleFunction_R_java_util_Comparator,
	(void *) M_java_util_Comparator_lambda$thenComparing$0_java_util_Comparator_java_lang_Object_java_lang_Object_R_int,
	(void *) nullptr,
	(void *) M_java_text_Collator_equals_java_lang_String_java_lang_String_R_boolean,
	(void *) nullptr,
	(void *) M_java_text_Collator_getDecomposition_R_int,
	(void *) M_java_text_Collator_getStrength_R_int,
	(void *) M_java_text_Collator_setDecomposition_int,
	(void *) M_java_text_Collator_setStrength_int,
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
	{ "equals", "(Ljava/lang/String;Ljava/lang/String;)Z" },
	{ "getCollationKey", "(Ljava/lang/String;)Ljava/text/CollationKey;" },
	{ "getDecomposition", "()I" },
	{ "getStrength", "()I" },
	{ "setDecomposition", "(I)V" },
	{ "setStrength", "(I)V" },
};

static jclass interfaces[] { &class_java_util_Comparator, };

static FieldMetadata fields[] {
	{ "NO_DECOMPOSITION", &class_int, (intptr_t) &SF_java_text_Collator_NO_DECOMPOSITION, "I", 25 },
	{ "CANONICAL_DECOMPOSITION", &class_int, (intptr_t) &SF_java_text_Collator_CANONICAL_DECOMPOSITION, "I", 25 },
	{ "FULL_DECOMPOSITION", &class_int, (intptr_t) &SF_java_text_Collator_FULL_DECOMPOSITION, "I", 25 },
	{ "PRIMARY", &class_int, (intptr_t) &SF_java_text_Collator_PRIMARY, "I", 25 },
	{ "SECONDARY", &class_int, (intptr_t) &SF_java_text_Collator_SECONDARY, "I", 25 },
	{ "TERTIARY", &class_int, (intptr_t) &SF_java_text_Collator_TERTIARY, "I", 25 },
	{ "IDENTICAL", &class_int, (intptr_t) &SF_java_text_Collator_IDENTICAL, "I", 25 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_java_text_Collator, 0, "()V", 4 },
	{ "compare", (intptr_t) M_java_text_Collator_compare_java_lang_Object_java_lang_Object_R_int, VTABLE_java_text_Collator_compare_java_lang_Object_java_lang_Object_R_int, "(Ljava/lang/Object;Ljava/lang/Object;)I", 1 },
	{ "compare", 0, VTABLE_java_text_Collator_compare_java_lang_String_java_lang_String_R_int, "(Ljava/lang/String;Ljava/lang/String;)I", 1025 },
	{ "equals", (intptr_t) M_java_text_Collator_equals_java_lang_String_java_lang_String_R_boolean, VTABLE_java_text_Collator_equals_java_lang_String_java_lang_String_R_boolean, "(Ljava/lang/String;Ljava/lang/String;)Z", 1 },
	{ "getAvailableLocales", (intptr_t) SM_java_text_Collator_getAvailableLocales_R_Array1_java_util_Locale, 0, "()[Ljava/util/Locale;", 9 },
	{ "getCollationKey", 0, VTABLE_java_text_Collator_getCollationKey_java_lang_String_R_java_text_CollationKey, "(Ljava/lang/String;)Ljava/text/CollationKey;", 1025 },
	{ "getDecomposition", (intptr_t) M_java_text_Collator_getDecomposition_R_int, VTABLE_java_text_Collator_getDecomposition_R_int, "()I", 1 },
	{ "getInstance", (intptr_t) SM_java_text_Collator_getInstance_R_java_text_Collator, 0, "()Ljava/text/Collator;", 9 },
	{ "getInstance", (intptr_t) SM_java_text_Collator_getInstance_java_util_Locale_R_java_text_Collator, 0, "(Ljava/util/Locale;)Ljava/text/Collator;", 9 },
	{ "getStrength", (intptr_t) M_java_text_Collator_getStrength_R_int, VTABLE_java_text_Collator_getStrength_R_int, "()I", 1 },
	{ "hashCode", 0, VTABLE_java_text_Collator_hashCode_R_int, "()I", 1025 },
	{ "setDecomposition", (intptr_t) M_java_text_Collator_setDecomposition_int, VTABLE_java_text_Collator_setDecomposition_int, "(I)V", 1 },
	{ "setStrength", (intptr_t) M_java_text_Collator_setStrength_int, VTABLE_java_text_Collator_setStrength_int, "(I)V", 1 },
};

Class class_java_text_Collator{
		.nativeName = (intptr_t) "java/text/Collator",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(java_text_Collator),
		.classVtable = (intptr_t) vtable_java_text_Collator,
		.staticInitializer = (intptr_t) clinit_java_text_Collator,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_java_text_Collator,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 1057,
		.interfaceCount = 1,
		.nativeInterfaces = (intptr_t) interfaces,
		.fieldCount = 7,
		.nativeFields = (intptr_t) fields,
		.methodCount = 13,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 27,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_java_text_Collator = registerClass(&class_java_text_Collator);

}
