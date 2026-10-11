#include "java/util/Spliterator.h"
#include "java/util/Spliterator.h"
#include "java/lang/Object.h"
#include "java/util/Spliterator_OfLong.h"
#include "java/util/Spliterator_OfDouble.h"
#include "java/util/Spliterator_OfInt.h"
#include "java/util/Comparator.h"
#include "java/lang/IllegalStateException.h"
#include "java/util/function/Consumer.h"
#include "java/util/Spliterator_OfPrimitive.h"

extern "C" {

jint SF_java_util_Spliterator_ORDERED;
jint SF_java_util_Spliterator_DISTINCT;
jint SF_java_util_Spliterator_SORTED;
jint SF_java_util_Spliterator_SIZED;
jint SF_java_util_Spliterator_NONNULL;
jint SF_java_util_Spliterator_IMMUTABLE;
jint SF_java_util_Spliterator_CONCURRENT;
jint SF_java_util_Spliterator_SUBSIZED;

void mark_java_util_Spliterator(jobject object, jint mark, jint depth) {
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
	auto self = (java_util_Spliterator *) object;
}

void clinit_java_util_Spliterator(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	SF_java_util_Spliterator_ORDERED = jint(16);
	SF_java_util_Spliterator_DISTINCT = jint(1);
	SF_java_util_Spliterator_SORTED = jint(4);
	SF_java_util_Spliterator_SIZED = jint(64);
	SF_java_util_Spliterator_NONNULL = jint(256);
	SF_java_util_Spliterator_IMMUTABLE = jint(1024);
	SF_java_util_Spliterator_CONCURRENT = jint(4096);
	SF_java_util_Spliterator_SUBSIZED = jint(16384);
}

void M_java_util_Spliterator_forEachRemaining_java_util_function_Consumer(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/Spliterator:forEachRemaining", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
label_0:;
	{
	LINE_NUMBER(326);
	jint temp0 = (jint)((func_java_util_Spliterator_tryAdvance_java_util_function_Consumer_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_Spliterator, INDEX_java_util_Spliterator_tryAdvance_java_util_function_Consumer_R_boolean, (frame[0].o)))(ctx, (frame[0].o), (frame[1].o));
	if (temp0 != 0) goto label_0;
	}
	LINE_NUMBER(327);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jlong M_java_util_Spliterator_getExactSizeIfKnown_R_long(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/Spliterator:getExactSizeIfKnown", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(408);
	jint temp0 = (jint)((func_java_util_Spliterator_characteristics_R_int) resolveInterfaceMethod(ctx, &class_java_util_Spliterator, INDEX_java_util_Spliterator_characteristics_R_int, (frame[0].o)))(ctx, (frame[0].o));
	if ((temp0 & (64)) != 0) goto label_1;
	}
	(sp++)->l = jlong(-1ll);
	goto label_2;
label_1:;
	INST_ALOAD(0);
	POP_N(1); // Pop method args
	sp->l = (jlong)((func_java_util_Spliterator_estimateSize_R_long) resolveInterfaceMethod(ctx, &class_java_util_Spliterator, INDEX_java_util_Spliterator_estimateSize_R_long, sp[0].o))(ctx, sp[0].o);
	sp++;
label_2:;
	popStackFrame(ctx);
	INST_LRETURN();

	popStackFrame(ctx);
}

jbool M_java_util_Spliterator_hasCharacteristics_int_R_boolean(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/Spliterator:hasCharacteristics", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(447);
	jint temp0 = (jint)((func_java_util_Spliterator_characteristics_R_int) resolveInterfaceMethod(ctx, &class_java_util_Spliterator, INDEX_java_util_Spliterator_characteristics_R_int, (frame[0].o)))(ctx, (frame[0].o));
	if ((temp0 & (frame[1].i)) != (frame[1].i)) goto label_1;
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

jobject M_java_util_Spliterator_getComparator_R_java_util_Comparator(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/Spliterator:getComparator", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(465);
	clinit_java_lang_IllegalStateException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IllegalStateException);
	init_java_lang_IllegalStateException(ctx, sp[0].o);
	throwException(ctx, sp[0].o);	}

	popStackFrame(ctx);
}

void *vtable_java_util_Spliterator[] {
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
	(void *) nullptr,
	(void *) M_java_util_Spliterator_forEachRemaining_java_util_function_Consumer,
	(void *) nullptr,
	(void *) nullptr,
	(void *) M_java_util_Spliterator_getExactSizeIfKnown_R_long,
	(void *) nullptr,
	(void *) M_java_util_Spliterator_hasCharacteristics_int_R_boolean,
	(void *) M_java_util_Spliterator_getComparator_R_java_util_Comparator,
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
	{ "tryAdvance", "(Ljava/util/function/Consumer;)Z" },
	{ "forEachRemaining", "(Ljava/util/function/Consumer;)V" },
	{ "trySplit", "()Ljava/util/Spliterator;" },
	{ "estimateSize", "()J" },
	{ "getExactSizeIfKnown", "()J" },
	{ "characteristics", "()I" },
	{ "hasCharacteristics", "(I)Z" },
	{ "getComparator", "()Ljava/util/Comparator;" },
};

static jclass innerClasses[] {
	&class_java_util_Spliterator$OfDouble,
	&class_java_util_Spliterator$OfLong,
	&class_java_util_Spliterator$OfInt,
	&class_java_util_Spliterator$OfPrimitive,
};

static FieldMetadata fields[] {
	{ "ORDERED", &class_int, (intptr_t) &SF_java_util_Spliterator_ORDERED, "I", 25 },
	{ "DISTINCT", &class_int, (intptr_t) &SF_java_util_Spliterator_DISTINCT, "I", 25 },
	{ "SORTED", &class_int, (intptr_t) &SF_java_util_Spliterator_SORTED, "I", 25 },
	{ "SIZED", &class_int, (intptr_t) &SF_java_util_Spliterator_SIZED, "I", 25 },
	{ "NONNULL", &class_int, (intptr_t) &SF_java_util_Spliterator_NONNULL, "I", 25 },
	{ "IMMUTABLE", &class_int, (intptr_t) &SF_java_util_Spliterator_IMMUTABLE, "I", 25 },
	{ "CONCURRENT", &class_int, (intptr_t) &SF_java_util_Spliterator_CONCURRENT, "I", 25 },
	{ "SUBSIZED", &class_int, (intptr_t) &SF_java_util_Spliterator_SUBSIZED, "I", 25 },
};

static MethodMetadata methods[] {
	{ "tryAdvance", 0, INDEX_java_util_Spliterator_tryAdvance_java_util_function_Consumer_R_boolean, "(Ljava/util/function/Consumer;)Z", 1025 },
	{ "forEachRemaining", (intptr_t) M_java_util_Spliterator_forEachRemaining_java_util_function_Consumer, INDEX_java_util_Spliterator_forEachRemaining_java_util_function_Consumer, "(Ljava/util/function/Consumer;)V", 1 },
	{ "trySplit", 0, INDEX_java_util_Spliterator_trySplit_R_java_util_Spliterator, "()Ljava/util/Spliterator;", 1025 },
	{ "estimateSize", 0, INDEX_java_util_Spliterator_estimateSize_R_long, "()J", 1025 },
	{ "getExactSizeIfKnown", (intptr_t) M_java_util_Spliterator_getExactSizeIfKnown_R_long, INDEX_java_util_Spliterator_getExactSizeIfKnown_R_long, "()J", 1 },
	{ "characteristics", 0, INDEX_java_util_Spliterator_characteristics_R_int, "()I", 1025 },
	{ "hasCharacteristics", (intptr_t) M_java_util_Spliterator_hasCharacteristics_int_R_boolean, INDEX_java_util_Spliterator_hasCharacteristics_int_R_boolean, "(I)Z", 1 },
	{ "getComparator", (intptr_t) M_java_util_Spliterator_getComparator_R_java_util_Comparator, INDEX_java_util_Spliterator_getComparator_R_java_util_Comparator, "()Ljava/util/Comparator;", 1 },
};

Class class_java_util_Spliterator{
		.nativeName = (intptr_t) "java/util/Spliterator",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(java_util_Spliterator),
		.classVtable = (intptr_t) vtable_java_util_Spliterator,
		.staticInitializer = (intptr_t) clinit_java_util_Spliterator,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_java_util_Spliterator,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 4,
		.nativeInnerClasses = (intptr_t) innerClasses,
		.access = 1537,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 8,
		.nativeFields = (intptr_t) fields,
		.methodCount = 8,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 19,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_java_util_Spliterator = registerClass(&class_java_util_Spliterator);

}
