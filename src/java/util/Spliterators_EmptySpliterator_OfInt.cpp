#include "java/util/Spliterators_EmptySpliterator_OfInt.h"
#include "java/util/Spliterator.h"
#include "java/lang/Object.h"
#include "java/util/Spliterators_EmptySpliterator.h"
#include "java/util/function/IntConsumer.h"
#include "java/util/Spliterator_OfInt.h"
#include "java/util/Spliterators_EmptySpliterator_OfInt.h"
#include "java/util/Spliterator_OfPrimitive.h"

extern "C" {


void mark_java_util_Spliterators$EmptySpliterator$OfInt(jobject object, jint mark, jint depth) {
	if (!object) {
		return;
	}
	if (depth > GC_DEPTH_ALWAYS && (object->gcMark < GC_MARK_START || object->gcMark == mark))
		return;
	if (depth > MAX_GC_MARK_DEPTH) {
		markDeepObject(object);
		return;
	}
	mark_java_util_Spliterators$EmptySpliterator(object, mark, depth);
	if (object->gcMark >= GC_MARK_START)
		object->gcMark = mark;
	auto self = (java_util_Spliterators$EmptySpliterator$OfInt *) object;
}

void clinit_java_util_Spliterators$EmptySpliterator$OfInt(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	clinit_java_util_Spliterators$EmptySpliterator(ctx);
}

void init_java_util_Spliterators$EmptySpliterator$OfInt(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/Spliterators$EmptySpliterator$OfInt:<init>", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_util_Spliterators$EmptySpliterator$OfInt(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(870);
	init_java_util_Spliterators$EmptySpliterator(ctx, (frame[0].o));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_java_util_Spliterators$EmptySpliterator$OfInt_forEachRemaining_java_util_function_IntConsumer(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/Spliterators$EmptySpliterator$OfInt:forEachRemaining", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(867);
	M_java_util_Spliterators$EmptySpliterator_forEachRemaining_java_lang_Object(ctx, (frame[0].o), (frame[1].o));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jbool M_java_util_Spliterators$EmptySpliterator$OfInt_tryAdvance_java_util_function_IntConsumer_R_boolean(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/Spliterators$EmptySpliterator$OfInt:tryAdvance", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(867);
	jint temp0 = (jint)M_java_util_Spliterators$EmptySpliterator_tryAdvance_java_lang_Object_R_boolean(ctx, (frame[0].o), (frame[1].o));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jobject M_java_util_Spliterators$EmptySpliterator$OfInt_trySplit_R_java_util_Spliterator$OfInt(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/Spliterators$EmptySpliterator$OfInt:trySplit", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(867);
	sp[0].o = (jobject)M_java_util_Spliterators$EmptySpliterator_trySplit_R_java_util_Spliterator(ctx, (frame[0].o));
	popStackFrame(ctx);
	return (checkCast(ctx, &class_java_util_Spliterator$OfInt, sp[0].o));
	}

	popStackFrame(ctx);
}

jobject M_java_util_Spliterators$EmptySpliterator$OfInt_trySplit_R_java_util_Spliterator$OfPrimitive(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/Spliterators$EmptySpliterator$OfInt:trySplit", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(867);
	sp[0].o = (jobject)M_java_util_Spliterators$EmptySpliterator_trySplit_R_java_util_Spliterator(ctx, (frame[0].o));
	popStackFrame(ctx);
	return (checkCast(ctx, &class_java_util_Spliterator$OfPrimitive, sp[0].o));
	}

	popStackFrame(ctx);
}

void *vtable_java_util_Spliterators$EmptySpliterator$OfInt[] {
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
	(void *) M_java_util_Spliterators$EmptySpliterator_trySplit_R_java_util_Spliterator,
	(void *) M_java_util_Spliterators$EmptySpliterator_tryAdvance_java_lang_Object_R_boolean,
	(void *) M_java_util_Spliterators$EmptySpliterator_forEachRemaining_java_lang_Object,
	(void *) M_java_util_Spliterators$EmptySpliterator_estimateSize_R_long,
	(void *) M_java_util_Spliterators$EmptySpliterator_characteristics_R_int,
	(void *) M_java_util_Spliterator$OfInt_tryAdvance_java_util_function_Consumer_R_boolean,
	(void *) M_java_util_Spliterator$OfInt_forEachRemaining_java_util_function_Consumer,
	(void *) M_java_util_Spliterator_getExactSizeIfKnown_R_long,
	(void *) M_java_util_Spliterator_hasCharacteristics_int_R_boolean,
	(void *) M_java_util_Spliterator_getComparator_R_java_util_Comparator,
	(void *) M_java_util_Spliterators$EmptySpliterator$OfInt_trySplit_R_java_util_Spliterator$OfPrimitive,
	(void *) M_java_util_Spliterators$EmptySpliterator$OfInt_trySplit_R_java_util_Spliterator$OfInt,
	(void *) M_java_util_Spliterators$EmptySpliterator$OfInt_tryAdvance_java_util_function_IntConsumer_R_boolean,
	(void *) M_java_util_Spliterators$EmptySpliterator$OfInt_forEachRemaining_java_util_function_IntConsumer,
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
	{ "trySplit", "()Ljava/util/Spliterator;" },
	{ "tryAdvance", "(Ljava/lang/Object;)Z" },
	{ "forEachRemaining", "(Ljava/lang/Object;)V" },
	{ "estimateSize", "()J" },
	{ "characteristics", "()I" },
	{ "tryAdvance", "(Ljava/util/function/Consumer;)Z" },
	{ "forEachRemaining", "(Ljava/util/function/Consumer;)V" },
	{ "getExactSizeIfKnown", "()J" },
	{ "hasCharacteristics", "(I)Z" },
	{ "getComparator", "()Ljava/util/Comparator;" },
	{ "trySplit", "()Ljava/util/Spliterator$OfPrimitive;" },
	{ "trySplit", "()Ljava/util/Spliterator$OfInt;" },
	{ "tryAdvance", "(Ljava/util/function/IntConsumer;)Z" },
	{ "forEachRemaining", "(Ljava/util/function/IntConsumer;)V" },
};

static jclass interfaces[] { &class_java_util_Spliterator$OfInt, };

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_java_util_Spliterators$EmptySpliterator$OfInt, 0, "()V", 0 },
	{ "forEachRemaining", (intptr_t) M_java_util_Spliterators$EmptySpliterator$OfInt_forEachRemaining_java_util_function_IntConsumer, VTABLE_java_util_Spliterators$EmptySpliterator$OfInt_forEachRemaining_java_util_function_IntConsumer, "(Ljava/util/function/IntConsumer;)V", 4161 },
	{ "tryAdvance", (intptr_t) M_java_util_Spliterators$EmptySpliterator$OfInt_tryAdvance_java_util_function_IntConsumer_R_boolean, VTABLE_java_util_Spliterators$EmptySpliterator$OfInt_tryAdvance_java_util_function_IntConsumer_R_boolean, "(Ljava/util/function/IntConsumer;)Z", 4161 },
	{ "trySplit", (intptr_t) M_java_util_Spliterators$EmptySpliterator$OfInt_trySplit_R_java_util_Spliterator$OfInt, VTABLE_java_util_Spliterators$EmptySpliterator$OfInt_trySplit_R_java_util_Spliterator$OfInt, "()Ljava/util/Spliterator$OfInt;", 4161 },
	{ "trySplit", (intptr_t) M_java_util_Spliterators$EmptySpliterator$OfInt_trySplit_R_java_util_Spliterator$OfPrimitive, VTABLE_java_util_Spliterators$EmptySpliterator$OfInt_trySplit_R_java_util_Spliterator$OfPrimitive, "()Ljava/util/Spliterator$OfPrimitive;", 4161 },
};

Class class_java_util_Spliterators$EmptySpliterator$OfInt{
		.nativeName = (intptr_t) "java/util/Spliterators$EmptySpliterator$OfInt",
		.parentClass = (intptr_t) &class_java_util_Spliterators$EmptySpliterator,
		.size = sizeof(java_util_Spliterators$EmptySpliterator$OfInt),
		.classVtable = (intptr_t) vtable_java_util_Spliterators$EmptySpliterator$OfInt,
		.staticInitializer = (intptr_t) clinit_java_util_Spliterators$EmptySpliterator$OfInt,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_java_util_Spliterators$EmptySpliterator$OfInt,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) &class_java_util_Spliterators$EmptySpliterator,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 48,
		.interfaceCount = 1,
		.nativeInterfaces = (intptr_t) interfaces,
		.fieldCount = 0,
		.nativeFields = (intptr_t) nullptr,
		.methodCount = 5,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 25,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_java_util_Spliterators$EmptySpliterator$OfInt = registerClass(&class_java_util_Spliterators$EmptySpliterator$OfInt);

}

