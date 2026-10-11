#include "java/util/Spliterator_OfDouble_invoke_java_util_function_DoubleConsumer_0.h"
#include "java/lang/Object.h"
#include "java/util/function/DoubleConsumer.h"
#include "java/util/function/Consumer.h"
#include "java/util/Spliterator_OfDouble_invoke_java_util_function_DoubleConsumer_0.h"

extern "C" {


void mark_java_util_Spliterator$OfDouble_invoke_java_util_function_DoubleConsumer_0(jobject object, jint mark, jint depth) {
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
	auto self = (java_util_Spliterator$OfDouble_invoke_java_util_function_DoubleConsumer_0 *) object;
	if (self->F_field0)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_field0)->clazz)->markFunction)((jobject) self->F_field0, mark, depth + 1);
}

void clinit_java_util_Spliterator$OfDouble_invoke_java_util_function_DoubleConsumer_0(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
}

void M_java_util_Spliterator$OfDouble_invoke_java_util_function_DoubleConsumer_0_accept_double(jcontext ctx, jobject self, jdouble param0) {
	NULL_CHECK(self);
	FrameInfo frameInfo { "java/util/Spliterator$OfDouble_invoke_java_util_function_DoubleConsumer_0:accept", 0 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, nullptr, nullptr);

auto proxy = (java_util_Spliterator$OfDouble_invoke_java_util_function_DoubleConsumer_0 *) self;
	((func_java_util_function_Consumer_accept_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_function_Consumer, INDEX_java_util_function_Consumer_accept_java_lang_Object, (jobject)proxy->F_field0))(ctx, (jobject) proxy->F_field0, boxDouble(ctx, param0));
	popStackFrame(ctx);
	return;

	popStackFrame(ctx);
}

void *vtable_java_util_Spliterator$OfDouble_invoke_java_util_function_DoubleConsumer_0[] {
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
	(void *) M_java_util_Spliterator$OfDouble_invoke_java_util_function_DoubleConsumer_0_accept_double,
	(void *) M_java_util_function_DoubleConsumer_andThen_java_util_function_DoubleConsumer_R_java_util_function_DoubleConsumer,
	(void *) M_java_util_function_DoubleConsumer_lambda$andThen$0_java_util_function_DoubleConsumer_double,
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
	{ "accept", "(D)V" },
	{ "andThen", "(Ljava/util/function/DoubleConsumer;)Ljava/util/function/DoubleConsumer;" },
	{ "lambda$andThen$0", "(Ljava/util/function/DoubleConsumer;D)V" },
};

static jclass interfaces[] { &class_java_util_function_DoubleConsumer, };

static FieldMetadata fields[] {
	{ "field0", &class_java_util_function_Consumer, offsetof(java_util_Spliterator$OfDouble_invoke_java_util_function_DoubleConsumer_0, F_field0), "Ljava/util/function/Consumer;", 0 },
};

static MethodMetadata methods[] {
	{ "accept", (intptr_t) M_java_util_Spliterator$OfDouble_invoke_java_util_function_DoubleConsumer_0_accept_double, VTABLE_java_util_Spliterator$OfDouble_invoke_java_util_function_DoubleConsumer_0_accept_double, "(D)V", 0 },
};

Class class_java_util_Spliterator$OfDouble_invoke_java_util_function_DoubleConsumer_0{
		.nativeName = (intptr_t) "java/util/Spliterator$OfDouble_invoke_java_util_function_DoubleConsumer_0",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(java_util_Spliterator$OfDouble_invoke_java_util_function_DoubleConsumer_0),
		.classVtable = (intptr_t) vtable_java_util_Spliterator$OfDouble_invoke_java_util_function_DoubleConsumer_0,
		.staticInitializer = (intptr_t) clinit_java_util_Spliterator$OfDouble_invoke_java_util_function_DoubleConsumer_0,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_java_util_Spliterator$OfDouble_invoke_java_util_function_DoubleConsumer_0,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 0,
		.interfaceCount = 1,
		.nativeInterfaces = (intptr_t) interfaces,
		.fieldCount = 1,
		.nativeFields = (intptr_t) fields,
		.methodCount = 1,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 14,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_java_util_Spliterator$OfDouble_invoke_java_util_function_DoubleConsumer_0 = registerClass(&class_java_util_Spliterator$OfDouble_invoke_java_util_function_DoubleConsumer_0);

}

