#include "java/util/concurrent/CompletionService.h"
#include "java/lang/Object.h"
#include "java/util/concurrent/TimeUnit.h"
#include "java/util/concurrent/Future.h"
#include "java/util/concurrent/Callable.h"
#include "java/util/concurrent/CompletionService.h"
#include "java/lang/Runnable.h"

extern "C" {


void mark_java_util_concurrent_CompletionService(jobject object, jint mark, jint depth) {
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
	auto self = (java_util_concurrent_CompletionService *) object;
}

void clinit_java_util_concurrent_CompletionService(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
}

void *vtable_java_util_concurrent_CompletionService[] {
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
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
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
	{ "submit", "(Ljava/util/concurrent/Callable;)Ljava/util/concurrent/Future;" },
	{ "submit", "(Ljava/lang/Runnable;Ljava/lang/Object;)Ljava/util/concurrent/Future;" },
	{ "take", "()Ljava/util/concurrent/Future;" },
	{ "poll", "()Ljava/util/concurrent/Future;" },
	{ "poll", "(JLjava/util/concurrent/TimeUnit;)Ljava/util/concurrent/Future;" },
};

static MethodMetadata methods[] {
	{ "submit", 0, INDEX_java_util_concurrent_CompletionService_submit_java_util_concurrent_Callable_R_java_util_concurrent_Future, "(Ljava/util/concurrent/Callable;)Ljava/util/concurrent/Future;", 1025 },
	{ "submit", 0, INDEX_java_util_concurrent_CompletionService_submit_java_lang_Runnable_java_lang_Object_R_java_util_concurrent_Future, "(Ljava/lang/Runnable;Ljava/lang/Object;)Ljava/util/concurrent/Future;", 1025 },
	{ "take", 0, INDEX_java_util_concurrent_CompletionService_take_R_java_util_concurrent_Future, "()Ljava/util/concurrent/Future;", 1025 },
	{ "poll", 0, INDEX_java_util_concurrent_CompletionService_poll_R_java_util_concurrent_Future, "()Ljava/util/concurrent/Future;", 1025 },
	{ "poll", 0, INDEX_java_util_concurrent_CompletionService_poll_long_java_util_concurrent_TimeUnit_R_java_util_concurrent_Future, "(JLjava/util/concurrent/TimeUnit;)Ljava/util/concurrent/Future;", 1025 },
};

Class class_java_util_concurrent_CompletionService{
		.nativeName = (intptr_t) "java/util/concurrent/CompletionService",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(java_util_concurrent_CompletionService),
		.classVtable = (intptr_t) vtable_java_util_concurrent_CompletionService,
		.staticInitializer = (intptr_t) clinit_java_util_concurrent_CompletionService,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_java_util_concurrent_CompletionService,
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
		.methodCount = 5,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 16,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_java_util_concurrent_CompletionService = registerClass(&class_java_util_concurrent_CompletionService);

}
