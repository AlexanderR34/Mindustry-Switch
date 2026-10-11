#include "java/util/concurrent/RejectedExecutionHandler.h"
#include "java/lang/Object.h"
#include "java/util/concurrent/ThreadPoolExecutor.h"
#include "java/util/concurrent/RejectedExecutionHandler.h"
#include "java/lang/Runnable.h"

extern "C" {


void mark_java_util_concurrent_RejectedExecutionHandler(jobject object, jint mark, jint depth) {
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
	auto self = (java_util_concurrent_RejectedExecutionHandler *) object;
}

void clinit_java_util_concurrent_RejectedExecutionHandler(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
}

void *vtable_java_util_concurrent_RejectedExecutionHandler[] {
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
	{ "rejectedExecution", "(Ljava/lang/Runnable;Ljava/util/concurrent/ThreadPoolExecutor;)V" },
};

static MethodMetadata methods[] {
	{ "rejectedExecution", 0, INDEX_java_util_concurrent_RejectedExecutionHandler_rejectedExecution_java_lang_Runnable_java_util_concurrent_ThreadPoolExecutor, "(Ljava/lang/Runnable;Ljava/util/concurrent/ThreadPoolExecutor;)V", 1025 },
};

Class class_java_util_concurrent_RejectedExecutionHandler{
		.nativeName = (intptr_t) "java/util/concurrent/RejectedExecutionHandler",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(java_util_concurrent_RejectedExecutionHandler),
		.classVtable = (intptr_t) vtable_java_util_concurrent_RejectedExecutionHandler,
		.staticInitializer = (intptr_t) clinit_java_util_concurrent_RejectedExecutionHandler,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_java_util_concurrent_RejectedExecutionHandler,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 1537,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 0,
		.nativeFields = (intptr_t) nullptr,
		.methodCount = 1,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 12,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_java_util_concurrent_RejectedExecutionHandler = registerClass(&class_java_util_concurrent_RejectedExecutionHandler);

}
