#include "java/util/Spliterators_AbstractLongSpliterator_HoldingLongConsumer.h"
#include "java/lang/Object.h"
#include "java/util/Spliterators_AbstractLongSpliterator.h"
#include "java/util/function/LongConsumer.h"
#include "java/util/Spliterators_AbstractLongSpliterator_HoldingLongConsumer.h"

extern "C" {


void mark_java_util_Spliterators$AbstractLongSpliterator$HoldingLongConsumer(jobject object, jint mark, jint depth) {
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
	auto self = (java_util_Spliterators$AbstractLongSpliterator$HoldingLongConsumer *) object;
}

void clinit_java_util_Spliterators$AbstractLongSpliterator$HoldingLongConsumer(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
}

void init_java_util_Spliterators$AbstractLongSpliterator$HoldingLongConsumer(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/Spliterators$AbstractLongSpliterator$HoldingLongConsumer:<init>", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_util_Spliterators$AbstractLongSpliterator$HoldingLongConsumer(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(1513);
	init_java_lang_Object(ctx, (frame[0].o));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_java_util_Spliterators$AbstractLongSpliterator$HoldingLongConsumer_accept_long(jcontext ctx, jobject self, jlong param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/Spliterators$AbstractLongSpliterator$HoldingLongConsumer:accept", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].l = param0;
	{
	LINE_NUMBER(1518);
	((java_util_Spliterators$AbstractLongSpliterator$HoldingLongConsumer *) NULL_CHECK((frame[0].o)))->F_value = (frame[1].l);
	LINE_NUMBER(1519);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void *vtable_java_util_Spliterators$AbstractLongSpliterator$HoldingLongConsumer[] {
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
	(void *) M_java_util_Spliterators$AbstractLongSpliterator$HoldingLongConsumer_accept_long,
	(void *) M_java_util_function_LongConsumer_andThen_java_util_function_LongConsumer_R_java_util_function_LongConsumer,
	(void *) M_java_util_function_LongConsumer_lambda$andThen$0_java_util_function_LongConsumer_long,
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
	{ "accept", "(J)V" },
	{ "andThen", "(Ljava/util/function/LongConsumer;)Ljava/util/function/LongConsumer;" },
	{ "lambda$andThen$0", "(Ljava/util/function/LongConsumer;J)V" },
};

static jclass interfaces[] { &class_java_util_function_LongConsumer, };

static FieldMetadata fields[] {
	{ "value", &class_long, offsetof(java_util_Spliterators$AbstractLongSpliterator$HoldingLongConsumer, F_value), "J", 0 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_java_util_Spliterators$AbstractLongSpliterator$HoldingLongConsumer, 0, "()V", 0 },
	{ "accept", (intptr_t) M_java_util_Spliterators$AbstractLongSpliterator$HoldingLongConsumer_accept_long, VTABLE_java_util_Spliterators$AbstractLongSpliterator$HoldingLongConsumer_accept_long, "(J)V", 1 },
};

Class class_java_util_Spliterators$AbstractLongSpliterator$HoldingLongConsumer{
		.nativeName = (intptr_t) "java/util/Spliterators$AbstractLongSpliterator$HoldingLongConsumer",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(java_util_Spliterators$AbstractLongSpliterator$HoldingLongConsumer),
		.classVtable = (intptr_t) vtable_java_util_Spliterators$AbstractLongSpliterator$HoldingLongConsumer,
		.staticInitializer = (intptr_t) clinit_java_util_Spliterators$AbstractLongSpliterator$HoldingLongConsumer,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_java_util_Spliterators$AbstractLongSpliterator$HoldingLongConsumer,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) &class_java_util_Spliterators$AbstractLongSpliterator,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 48,
		.interfaceCount = 1,
		.nativeInterfaces = (intptr_t) interfaces,
		.fieldCount = 1,
		.nativeFields = (intptr_t) fields,
		.methodCount = 2,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 14,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_java_util_Spliterators$AbstractLongSpliterator$HoldingLongConsumer = registerClass(&class_java_util_Spliterators$AbstractLongSpliterator$HoldingLongConsumer);

}

