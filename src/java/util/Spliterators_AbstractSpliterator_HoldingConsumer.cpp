#include "java/util/Spliterators_AbstractSpliterator_HoldingConsumer.h"
#include "java/lang/Object.h"
#include "java/util/Spliterators_AbstractSpliterator_HoldingConsumer.h"
#include "java/util/Spliterators_AbstractSpliterator.h"
#include "java/util/function/Consumer.h"

extern "C" {


void mark_java_util_Spliterators$AbstractSpliterator$HoldingConsumer(jobject object, jint mark, jint depth) {
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
	auto self = (java_util_Spliterators$AbstractSpliterator$HoldingConsumer *) object;
	if (self->F_value)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_value)->clazz)->markFunction)((jobject) self->F_value, mark, depth + 1);
}

void clinit_java_util_Spliterators$AbstractSpliterator$HoldingConsumer(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
}

void init_java_util_Spliterators$AbstractSpliterator$HoldingConsumer(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/Spliterators$AbstractSpliterator$HoldingConsumer:<init>", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_util_Spliterators$AbstractSpliterator$HoldingConsumer(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(1280);
	init_java_lang_Object(ctx, (frame[0].o));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_java_util_Spliterators$AbstractSpliterator$HoldingConsumer_accept_java_lang_Object(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/Spliterators$AbstractSpliterator$HoldingConsumer:accept", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(1285);
	((java_util_Spliterators$AbstractSpliterator$HoldingConsumer *) NULL_CHECK((frame[0].o)))->F_value = (jref) (frame[1].o);
	LINE_NUMBER(1286);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void *vtable_java_util_Spliterators$AbstractSpliterator$HoldingConsumer[] {
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
	(void *) M_java_util_Spliterators$AbstractSpliterator$HoldingConsumer_accept_java_lang_Object,
	(void *) M_java_util_function_Consumer_andThen_java_util_function_Consumer_R_java_util_function_Consumer,
	(void *) M_java_util_function_Consumer_lambda$andThen$0_java_util_function_Consumer_java_lang_Object,
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
	{ "accept", "(Ljava/lang/Object;)V" },
	{ "andThen", "(Ljava/util/function/Consumer;)Ljava/util/function/Consumer;" },
	{ "lambda$andThen$0", "(Ljava/util/function/Consumer;Ljava/lang/Object;)V" },
};

static jclass interfaces[] { &class_java_util_function_Consumer, };

static FieldMetadata fields[] {
	{ "value", &class_java_lang_Object, offsetof(java_util_Spliterators$AbstractSpliterator$HoldingConsumer, F_value), "Ljava/lang/Object;", 0 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_java_util_Spliterators$AbstractSpliterator$HoldingConsumer, 0, "()V", 0 },
	{ "accept", (intptr_t) M_java_util_Spliterators$AbstractSpliterator$HoldingConsumer_accept_java_lang_Object, VTABLE_java_util_Spliterators$AbstractSpliterator$HoldingConsumer_accept_java_lang_Object, "(Ljava/lang/Object;)V", 1 },
};

Class class_java_util_Spliterators$AbstractSpliterator$HoldingConsumer{
		.nativeName = (intptr_t) "java/util/Spliterators$AbstractSpliterator$HoldingConsumer",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(java_util_Spliterators$AbstractSpliterator$HoldingConsumer),
		.classVtable = (intptr_t) vtable_java_util_Spliterators$AbstractSpliterator$HoldingConsumer,
		.staticInitializer = (intptr_t) clinit_java_util_Spliterators$AbstractSpliterator$HoldingConsumer,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_java_util_Spliterators$AbstractSpliterator$HoldingConsumer,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) &class_java_util_Spliterators$AbstractSpliterator,
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
static bool registered_java_util_Spliterators$AbstractSpliterator$HoldingConsumer = registerClass(&class_java_util_Spliterators$AbstractSpliterator$HoldingConsumer);

}

