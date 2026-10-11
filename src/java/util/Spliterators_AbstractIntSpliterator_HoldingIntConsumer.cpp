#include "java/util/Spliterators_AbstractIntSpliterator_HoldingIntConsumer.h"
#include "java/lang/Object.h"
#include "java/util/function/IntConsumer.h"
#include "java/util/Spliterators_AbstractIntSpliterator.h"
#include "java/util/Spliterators_AbstractIntSpliterator_HoldingIntConsumer.h"

extern "C" {


void mark_java_util_Spliterators$AbstractIntSpliterator$HoldingIntConsumer(jobject object, jint mark, jint depth) {
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
	auto self = (java_util_Spliterators$AbstractIntSpliterator$HoldingIntConsumer *) object;
}

void clinit_java_util_Spliterators$AbstractIntSpliterator$HoldingIntConsumer(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
}

void init_java_util_Spliterators$AbstractIntSpliterator$HoldingIntConsumer(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/Spliterators$AbstractIntSpliterator$HoldingIntConsumer:<init>", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_util_Spliterators$AbstractIntSpliterator$HoldingIntConsumer(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(1403);
	init_java_lang_Object(ctx, (frame[0].o));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_java_util_Spliterators$AbstractIntSpliterator$HoldingIntConsumer_accept_int(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/Spliterators$AbstractIntSpliterator$HoldingIntConsumer:accept", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(1408);
	((java_util_Spliterators$AbstractIntSpliterator$HoldingIntConsumer *) NULL_CHECK((frame[0].o)))->F_value = (frame[1].i);
	LINE_NUMBER(1409);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void *vtable_java_util_Spliterators$AbstractIntSpliterator$HoldingIntConsumer[] {
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
	(void *) M_java_util_Spliterators$AbstractIntSpliterator$HoldingIntConsumer_accept_int,
	(void *) M_java_util_function_IntConsumer_andThen_java_util_function_IntConsumer_R_java_util_function_IntConsumer,
	(void *) M_java_util_function_IntConsumer_lambda$andThen$0_java_util_function_IntConsumer_int,
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
	{ "accept", "(I)V" },
	{ "andThen", "(Ljava/util/function/IntConsumer;)Ljava/util/function/IntConsumer;" },
	{ "lambda$andThen$0", "(Ljava/util/function/IntConsumer;I)V" },
};

static jclass interfaces[] { &class_java_util_function_IntConsumer, };

static FieldMetadata fields[] {
	{ "value", &class_int, offsetof(java_util_Spliterators$AbstractIntSpliterator$HoldingIntConsumer, F_value), "I", 0 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_java_util_Spliterators$AbstractIntSpliterator$HoldingIntConsumer, 0, "()V", 0 },
	{ "accept", (intptr_t) M_java_util_Spliterators$AbstractIntSpliterator$HoldingIntConsumer_accept_int, VTABLE_java_util_Spliterators$AbstractIntSpliterator$HoldingIntConsumer_accept_int, "(I)V", 1 },
};

Class class_java_util_Spliterators$AbstractIntSpliterator$HoldingIntConsumer{
		.nativeName = (intptr_t) "java/util/Spliterators$AbstractIntSpliterator$HoldingIntConsumer",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(java_util_Spliterators$AbstractIntSpliterator$HoldingIntConsumer),
		.classVtable = (intptr_t) vtable_java_util_Spliterators$AbstractIntSpliterator$HoldingIntConsumer,
		.staticInitializer = (intptr_t) clinit_java_util_Spliterators$AbstractIntSpliterator$HoldingIntConsumer,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_java_util_Spliterators$AbstractIntSpliterator$HoldingIntConsumer,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) &class_java_util_Spliterators$AbstractIntSpliterator,
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
static bool registered_java_util_Spliterators$AbstractIntSpliterator$HoldingIntConsumer = registerClass(&class_java_util_Spliterators$AbstractIntSpliterator$HoldingIntConsumer);

}

