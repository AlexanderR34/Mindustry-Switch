#include "java/util/Spliterator_OfLong.h"
#include "java/util/Spliterator_OfLong_invoke_java_util_function_LongConsumer_0.h"
#include "java/util/Spliterator.h"
#include "java/util/Spliterator_OfLong_invoke_java_util_function_LongConsumer_1.h"
#include "java/lang/Object.h"
#include "java/util/Spliterator_OfLong.h"
#include "java/util/function/LongConsumer.h"
#include "java/util/function/Consumer.h"
#include "java/util/Spliterator_OfPrimitive.h"
#include "java/util/Objects.h"

extern "C" {


void mark_java_util_Spliterator$OfLong(jobject object, jint mark, jint depth) {
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
	auto self = (java_util_Spliterator$OfLong *) object;
}

void clinit_java_util_Spliterator$OfLong(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
}

void M_java_util_Spliterator$OfLong_forEachRemaining_java_util_function_LongConsumer(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/Spliterator$OfLong:forEachRemaining", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
label_0:;
	{
	LINE_NUMBER(724);
	jint temp0 = (jint)((func_java_util_Spliterator$OfLong_tryAdvance_java_util_function_LongConsumer_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_Spliterator$OfLong, INDEX_java_util_Spliterator$OfLong_tryAdvance_java_util_function_LongConsumer_R_boolean, (frame[0].o)))(ctx, (frame[0].o), (frame[1].o));
	if (temp0 != 0) goto label_0;
	}
	LINE_NUMBER(725);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jbool M_java_util_Spliterator$OfLong_tryAdvance_java_util_function_Consumer_R_boolean(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/Spliterator$OfLong:tryAdvance", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(739);
	if ((isInstance(ctx, (frame[1].o), &class_java_util_function_LongConsumer)) == 0) goto label_1;
	}
	{
	LINE_NUMBER(740);
	jint temp0 = (jint)((func_java_util_Spliterator$OfLong_tryAdvance_java_util_function_LongConsumer_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_Spliterator$OfLong, INDEX_java_util_Spliterator$OfLong_tryAdvance_java_util_function_LongConsumer_R_boolean, (frame[0].o)))(ctx, (frame[0].o), (checkCast(ctx, &class_java_util_function_LongConsumer, (frame[1].o))));
	popStackFrame(ctx);
	return temp0;
	}
label_1:;
	{
	LINE_NUMBER(746);
	sp[0].o = frame[0].o;
	sp[1].o = frame[1].o;
	sp[2].o = (jobject)SM_java_util_Objects_requireNonNull_java_lang_Object_R_java_lang_Object(ctx, sp[1].o);
	{ /* InvokeDynamic */
		clinit_java_util_Spliterator$OfLong_invoke_java_util_function_LongConsumer_0(ctx);
		auto proxy = (java_util_Spliterator$OfLong_invoke_java_util_function_LongConsumer_0 *) gcAlloc(ctx, &class_java_util_Spliterator$OfLong_invoke_java_util_function_LongConsumer_0);
		proxy->F_field0 = (jref) sp[1].o;
		sp[1].o = (jobject) proxy;
	}
	jint temp0 = (jint)((func_java_util_Spliterator$OfLong_tryAdvance_java_util_function_LongConsumer_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_Spliterator$OfLong, INDEX_java_util_Spliterator$OfLong_tryAdvance_java_util_function_LongConsumer_R_boolean, sp[0].o))(ctx, sp[0].o, sp[1].o);
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

void M_java_util_Spliterator$OfLong_forEachRemaining_java_util_function_Consumer(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/Spliterator$OfLong:forEachRemaining", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(762);
	if ((isInstance(ctx, (frame[1].o), &class_java_util_function_LongConsumer)) == 0) goto label_1;
	}
	{
	LINE_NUMBER(763);
	((func_java_util_Spliterator$OfLong_forEachRemaining_java_util_function_LongConsumer) resolveInterfaceMethod(ctx, &class_java_util_Spliterator$OfLong, INDEX_java_util_Spliterator$OfLong_forEachRemaining_java_util_function_LongConsumer, (frame[0].o)))(ctx, (frame[0].o), (checkCast(ctx, &class_java_util_function_LongConsumer, (frame[1].o))));
	goto label_3;
	}
label_1:;
	{
	LINE_NUMBER(769);
	sp[0].o = frame[0].o;
	sp[1].o = frame[1].o;
	sp[2].o = (jobject)SM_java_util_Objects_requireNonNull_java_lang_Object_R_java_lang_Object(ctx, sp[1].o);
	{ /* InvokeDynamic */
		clinit_java_util_Spliterator$OfLong_invoke_java_util_function_LongConsumer_1(ctx);
		auto proxy = (java_util_Spliterator$OfLong_invoke_java_util_function_LongConsumer_1 *) gcAlloc(ctx, &class_java_util_Spliterator$OfLong_invoke_java_util_function_LongConsumer_1);
		proxy->F_field0 = (jref) sp[1].o;
		sp[1].o = (jobject) proxy;
	}
	((func_java_util_Spliterator$OfLong_forEachRemaining_java_util_function_LongConsumer) resolveInterfaceMethod(ctx, &class_java_util_Spliterator$OfLong, INDEX_java_util_Spliterator$OfLong_forEachRemaining_java_util_function_LongConsumer, sp[0].o))(ctx, sp[0].o, sp[1].o);
	}
label_3:;
	LINE_NUMBER(771);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_java_util_Spliterator$OfLong_forEachRemaining_java_lang_Object(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/Spliterator$OfLong:forEachRemaining", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(714);
	((func_java_util_Spliterator$OfLong_forEachRemaining_java_util_function_LongConsumer) resolveInterfaceMethod(ctx, &class_java_util_Spliterator$OfLong, INDEX_java_util_Spliterator$OfLong_forEachRemaining_java_util_function_LongConsumer, (frame[0].o)))(ctx, (frame[0].o), (checkCast(ctx, &class_java_util_function_LongConsumer, (frame[1].o))));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jbool M_java_util_Spliterator$OfLong_tryAdvance_java_lang_Object_R_boolean(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/Spliterator$OfLong:tryAdvance", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(714);
	jint temp0 = (jint)((func_java_util_Spliterator$OfLong_tryAdvance_java_util_function_LongConsumer_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_Spliterator$OfLong, INDEX_java_util_Spliterator$OfLong_tryAdvance_java_util_function_LongConsumer_R_boolean, (frame[0].o)))(ctx, (frame[0].o), (checkCast(ctx, &class_java_util_function_LongConsumer, (frame[1].o))));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jobject M_java_util_Spliterator$OfLong_trySplit_R_java_util_Spliterator$OfPrimitive(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/Spliterator$OfLong:trySplit", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(714);
	sp[0].o = (jobject)((func_java_util_Spliterator$OfLong_trySplit_R_java_util_Spliterator$OfLong) resolveInterfaceMethod(ctx, &class_java_util_Spliterator$OfLong, INDEX_java_util_Spliterator$OfLong_trySplit_R_java_util_Spliterator$OfLong, (frame[0].o)))(ctx, (frame[0].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_java_util_Spliterator$OfLong_trySplit_R_java_util_Spliterator(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/Spliterator$OfLong:trySplit", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(714);
	sp[0].o = (jobject)((func_java_util_Spliterator$OfLong_trySplit_R_java_util_Spliterator$OfLong) resolveInterfaceMethod(ctx, &class_java_util_Spliterator$OfLong, INDEX_java_util_Spliterator$OfLong_trySplit_R_java_util_Spliterator$OfLong, (frame[0].o)))(ctx, (frame[0].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void *vtable_java_util_Spliterator$OfLong[] {
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
	(void *) M_java_util_Spliterator$OfLong_tryAdvance_java_util_function_Consumer_R_boolean,
	(void *) M_java_util_Spliterator$OfLong_forEachRemaining_java_util_function_Consumer,
	(void *) M_java_util_Spliterator$OfLong_trySplit_R_java_util_Spliterator,
	(void *) nullptr,
	(void *) M_java_util_Spliterator_getExactSizeIfKnown_R_long,
	(void *) nullptr,
	(void *) M_java_util_Spliterator_hasCharacteristics_int_R_boolean,
	(void *) M_java_util_Spliterator_getComparator_R_java_util_Comparator,
	(void *) M_java_util_Spliterator$OfLong_trySplit_R_java_util_Spliterator$OfPrimitive,
	(void *) M_java_util_Spliterator$OfLong_tryAdvance_java_lang_Object_R_boolean,
	(void *) M_java_util_Spliterator$OfLong_forEachRemaining_java_lang_Object,
	(void *) nullptr,
	(void *) nullptr,
	(void *) M_java_util_Spliterator$OfLong_forEachRemaining_java_util_function_LongConsumer,
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
	{ "trySplit", "()Ljava/util/Spliterator$OfPrimitive;" },
	{ "tryAdvance", "(Ljava/lang/Object;)Z" },
	{ "forEachRemaining", "(Ljava/lang/Object;)V" },
	{ "trySplit", "()Ljava/util/Spliterator$OfLong;" },
	{ "tryAdvance", "(Ljava/util/function/LongConsumer;)Z" },
	{ "forEachRemaining", "(Ljava/util/function/LongConsumer;)V" },
};

static jclass interfaces[] { &class_java_util_Spliterator$OfPrimitive, };

static MethodMetadata methods[] {
	{ "trySplit", 0, INDEX_java_util_Spliterator$OfLong_trySplit_R_java_util_Spliterator$OfLong, "()Ljava/util/Spliterator$OfLong;", 1025 },
	{ "tryAdvance", 0, INDEX_java_util_Spliterator$OfLong_tryAdvance_java_util_function_LongConsumer_R_boolean, "(Ljava/util/function/LongConsumer;)Z", 1025 },
	{ "forEachRemaining", (intptr_t) M_java_util_Spliterator$OfLong_forEachRemaining_java_util_function_LongConsumer, INDEX_java_util_Spliterator$OfLong_forEachRemaining_java_util_function_LongConsumer, "(Ljava/util/function/LongConsumer;)V", 1 },
	{ "tryAdvance", (intptr_t) M_java_util_Spliterator$OfLong_tryAdvance_java_util_function_Consumer_R_boolean, INDEX_java_util_Spliterator$OfLong_tryAdvance_java_util_function_Consumer_R_boolean, "(Ljava/util/function/Consumer;)Z", 1 },
	{ "forEachRemaining", (intptr_t) M_java_util_Spliterator$OfLong_forEachRemaining_java_util_function_Consumer, INDEX_java_util_Spliterator$OfLong_forEachRemaining_java_util_function_Consumer, "(Ljava/util/function/Consumer;)V", 1 },
	{ "forEachRemaining", (intptr_t) M_java_util_Spliterator$OfLong_forEachRemaining_java_lang_Object, INDEX_java_util_Spliterator$OfLong_forEachRemaining_java_lang_Object, "(Ljava/lang/Object;)V", 4161 },
	{ "tryAdvance", (intptr_t) M_java_util_Spliterator$OfLong_tryAdvance_java_lang_Object_R_boolean, INDEX_java_util_Spliterator$OfLong_tryAdvance_java_lang_Object_R_boolean, "(Ljava/lang/Object;)Z", 4161 },
	{ "trySplit", (intptr_t) M_java_util_Spliterator$OfLong_trySplit_R_java_util_Spliterator$OfPrimitive, INDEX_java_util_Spliterator$OfLong_trySplit_R_java_util_Spliterator$OfPrimitive, "()Ljava/util/Spliterator$OfPrimitive;", 4161 },
	{ "trySplit", (intptr_t) M_java_util_Spliterator$OfLong_trySplit_R_java_util_Spliterator, INDEX_java_util_Spliterator$OfLong_trySplit_R_java_util_Spliterator, "()Ljava/util/Spliterator;", 4161 },
};

Class class_java_util_Spliterator$OfLong{
		.nativeName = (intptr_t) "java/util/Spliterator$OfLong",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(java_util_Spliterator$OfLong),
		.classVtable = (intptr_t) vtable_java_util_Spliterator$OfLong,
		.staticInitializer = (intptr_t) clinit_java_util_Spliterator$OfLong,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_java_util_Spliterator$OfLong,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) &class_java_util_Spliterator,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 1545,
		.interfaceCount = 1,
		.nativeInterfaces = (intptr_t) interfaces,
		.fieldCount = 0,
		.nativeFields = (intptr_t) nullptr,
		.methodCount = 9,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 25,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_java_util_Spliterator$OfLong = registerClass(&class_java_util_Spliterator$OfLong);

}

