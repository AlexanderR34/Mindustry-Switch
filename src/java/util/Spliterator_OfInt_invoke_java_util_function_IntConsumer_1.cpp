#include "java/util/Spliterator_OfInt_invoke_java_util_function_IntConsumer_1.h"
#include "java/lang/Object.h"
#include "java/util/function/IntConsumer.h"
#include "java/util/Spliterator_OfInt_invoke_java_util_function_IntConsumer_1.h"
#include "java/util/function/Consumer.h"

extern "C" {


void mark_java_util_Spliterator$OfInt_invoke_java_util_function_IntConsumer_1(jobject object, jint mark, jint depth) {
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
	auto self = (java_util_Spliterator$OfInt_invoke_java_util_function_IntConsumer_1 *) object;
	if (self->F_field0)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_field0)->clazz)->markFunction)((jobject) self->F_field0, mark, depth + 1);
}

void clinit_java_util_Spliterator$OfInt_invoke_java_util_function_IntConsumer_1(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
}

void M_java_util_Spliterator$OfInt_invoke_java_util_function_IntConsumer_1_accept_int(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	FrameInfo frameInfo { "java/util/Spliterator$OfInt_invoke_java_util_function_IntConsumer_1:accept", 0 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, nullptr, nullptr);

auto proxy = (java_util_Spliterator$OfInt_invoke_java_util_function_IntConsumer_1 *) self;
	((func_java_util_function_Consumer_accept_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_function_Consumer, INDEX_java_util_function_Consumer_accept_java_lang_Object, (jobject)proxy->F_field0))(ctx, (jobject) proxy->F_field0, boxInteger(ctx, param0));
	popStackFrame(ctx);
	return;

	popStackFrame(ctx);
}

void *vtable_java_util_Spliterator$OfInt_invoke_java_util_function_IntConsumer_1[] {
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
	(void *) M_java_util_Spliterator$OfInt_invoke_java_util_function_IntConsumer_1_accept_int,
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
	{ "field0", &class_java_util_function_Consumer, offsetof(java_util_Spliterator$OfInt_invoke_java_util_function_IntConsumer_1, F_field0), "Ljava/util/function/Consumer;", 0 },
};

static MethodMetadata methods[] {
	{ "accept", (intptr_t) M_java_util_Spliterator$OfInt_invoke_java_util_function_IntConsumer_1_accept_int, VTABLE_java_util_Spliterator$OfInt_invoke_java_util_function_IntConsumer_1_accept_int, "(I)V", 0 },
};

Class class_java_util_Spliterator$OfInt_invoke_java_util_function_IntConsumer_1{
		.nativeName = (intptr_t) "java/util/Spliterator$OfInt_invoke_java_util_function_IntConsumer_1",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(java_util_Spliterator$OfInt_invoke_java_util_function_IntConsumer_1),
		.classVtable = (intptr_t) vtable_java_util_Spliterator$OfInt_invoke_java_util_function_IntConsumer_1,
		.staticInitializer = (intptr_t) clinit_java_util_Spliterator$OfInt_invoke_java_util_function_IntConsumer_1,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_java_util_Spliterator$OfInt_invoke_java_util_function_IntConsumer_1,
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
static bool registered_java_util_Spliterator$OfInt_invoke_java_util_function_IntConsumer_1 = registerClass(&class_java_util_Spliterator$OfInt_invoke_java_util_function_IntConsumer_1);

}

