#include "java/util/concurrent/CopyOnWriteArrayList_invoke_java_util_function_Predicate_0.h"
#include "java/util/Collection.h"
#include "java/lang/Object.h"
#include "java/util/concurrent/CopyOnWriteArrayList.h"
#include "java/util/function/Predicate.h"
#include "java/util/concurrent/CopyOnWriteArrayList_invoke_java_util_function_Predicate_0.h"

extern "C" {


void mark_java_util_concurrent_CopyOnWriteArrayList_invoke_java_util_function_Predicate_0(jobject object, jint mark, jint depth) {
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
	auto self = (java_util_concurrent_CopyOnWriteArrayList_invoke_java_util_function_Predicate_0 *) object;
	if (self->F_field0)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_field0)->clazz)->markFunction)((jobject) self->F_field0, mark, depth + 1);
}

void clinit_java_util_concurrent_CopyOnWriteArrayList_invoke_java_util_function_Predicate_0(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
}

jbool M_java_util_concurrent_CopyOnWriteArrayList_invoke_java_util_function_Predicate_0_test_java_lang_Object_R_boolean(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	FrameInfo frameInfo { "java/util/concurrent/CopyOnWriteArrayList_invoke_java_util_function_Predicate_0:test", 0 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, nullptr, nullptr);

auto proxy = (java_util_concurrent_CopyOnWriteArrayList_invoke_java_util_function_Predicate_0 *) self;
	auto object = SM_java_util_concurrent_CopyOnWriteArrayList_lambda$removeAll$0_java_util_Collection_java_lang_Object_R_boolean(ctx, (jobject) proxy->F_field0, param0);
	popStackFrame(ctx);
	return object;

	popStackFrame(ctx);
}

void *vtable_java_util_concurrent_CopyOnWriteArrayList_invoke_java_util_function_Predicate_0[] {
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
	(void *) M_java_util_concurrent_CopyOnWriteArrayList_invoke_java_util_function_Predicate_0_test_java_lang_Object_R_boolean,
	(void *) M_java_util_function_Predicate_and_java_util_function_Predicate_R_java_util_function_Predicate,
	(void *) M_java_util_function_Predicate_negate_R_java_util_function_Predicate,
	(void *) M_java_util_function_Predicate_or_java_util_function_Predicate_R_java_util_function_Predicate,
	(void *) M_java_util_function_Predicate_lambda$or$2_java_util_function_Predicate_java_lang_Object_R_boolean,
	(void *) M_java_util_function_Predicate_lambda$negate$1_java_lang_Object_R_boolean,
	(void *) M_java_util_function_Predicate_lambda$and$0_java_util_function_Predicate_java_lang_Object_R_boolean,
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
	{ "test", "(Ljava/lang/Object;)Z" },
	{ "and", "(Ljava/util/function/Predicate;)Ljava/util/function/Predicate;" },
	{ "negate", "()Ljava/util/function/Predicate;" },
	{ "or", "(Ljava/util/function/Predicate;)Ljava/util/function/Predicate;" },
	{ "lambda$or$2", "(Ljava/util/function/Predicate;Ljava/lang/Object;)Z" },
	{ "lambda$negate$1", "(Ljava/lang/Object;)Z" },
	{ "lambda$and$0", "(Ljava/util/function/Predicate;Ljava/lang/Object;)Z" },
};

static jclass interfaces[] { &class_java_util_function_Predicate, };

static FieldMetadata fields[] {
	{ "field0", &class_java_util_Collection, offsetof(java_util_concurrent_CopyOnWriteArrayList_invoke_java_util_function_Predicate_0, F_field0), "Ljava/util/Collection;", 0 },
};

static MethodMetadata methods[] {
	{ "test", (intptr_t) M_java_util_concurrent_CopyOnWriteArrayList_invoke_java_util_function_Predicate_0_test_java_lang_Object_R_boolean, VTABLE_java_util_concurrent_CopyOnWriteArrayList_invoke_java_util_function_Predicate_0_test_java_lang_Object_R_boolean, "(Ljava/lang/Object;)Z", 0 },
};

Class class_java_util_concurrent_CopyOnWriteArrayList_invoke_java_util_function_Predicate_0{
		.nativeName = (intptr_t) "java/util/concurrent/CopyOnWriteArrayList_invoke_java_util_function_Predicate_0",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(java_util_concurrent_CopyOnWriteArrayList_invoke_java_util_function_Predicate_0),
		.classVtable = (intptr_t) vtable_java_util_concurrent_CopyOnWriteArrayList_invoke_java_util_function_Predicate_0,
		.staticInitializer = (intptr_t) clinit_java_util_concurrent_CopyOnWriteArrayList_invoke_java_util_function_Predicate_0,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_java_util_concurrent_CopyOnWriteArrayList_invoke_java_util_function_Predicate_0,
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
		.vtableSize = 18,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_java_util_concurrent_CopyOnWriteArrayList_invoke_java_util_function_Predicate_0 = registerClass(&class_java_util_concurrent_CopyOnWriteArrayList_invoke_java_util_function_Predicate_0);

}
