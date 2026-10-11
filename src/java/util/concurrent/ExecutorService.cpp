#include "java/util/concurrent/ExecutorService.h"
#include "java/util/Collection.h"
#include "java/lang/Object.h"
#include "java/util/concurrent/ExecutorService.h"
#include "java/util/concurrent/TimeUnit.h"
#include "java/util/concurrent/Future.h"
#include "java/util/concurrent/Callable.h"
#include "java/util/concurrent/Executor.h"
#include "java/util/List.h"
#include "java/lang/Runnable.h"

extern "C" {


void mark_java_util_concurrent_ExecutorService(jobject object, jint mark, jint depth) {
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
	auto self = (java_util_concurrent_ExecutorService *) object;
}

void clinit_java_util_concurrent_ExecutorService(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
}

void *vtable_java_util_concurrent_ExecutorService[] {
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
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
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
	{ "execute", "(Ljava/lang/Runnable;)V" },
	{ "shutdown", "()V" },
	{ "shutdownNow", "()Ljava/util/List;" },
	{ "isShutdown", "()Z" },
	{ "isTerminated", "()Z" },
	{ "awaitTermination", "(JLjava/util/concurrent/TimeUnit;)Z" },
	{ "submit", "(Ljava/util/concurrent/Callable;)Ljava/util/concurrent/Future;" },
	{ "submit", "(Ljava/lang/Runnable;Ljava/lang/Object;)Ljava/util/concurrent/Future;" },
	{ "submit", "(Ljava/lang/Runnable;)Ljava/util/concurrent/Future;" },
	{ "invokeAll", "(Ljava/util/Collection;)Ljava/util/List;" },
	{ "invokeAll", "(Ljava/util/Collection;JLjava/util/concurrent/TimeUnit;)Ljava/util/List;" },
	{ "invokeAny", "(Ljava/util/Collection;)Ljava/lang/Object;" },
	{ "invokeAny", "(Ljava/util/Collection;JLjava/util/concurrent/TimeUnit;)Ljava/lang/Object;" },
};

static jclass interfaces[] { &class_java_util_concurrent_Executor, };

static MethodMetadata methods[] {
	{ "shutdown", 0, INDEX_java_util_concurrent_ExecutorService_shutdown, "()V", 1025 },
	{ "shutdownNow", 0, INDEX_java_util_concurrent_ExecutorService_shutdownNow_R_java_util_List, "()Ljava/util/List;", 1025 },
	{ "isShutdown", 0, INDEX_java_util_concurrent_ExecutorService_isShutdown_R_boolean, "()Z", 1025 },
	{ "isTerminated", 0, INDEX_java_util_concurrent_ExecutorService_isTerminated_R_boolean, "()Z", 1025 },
	{ "awaitTermination", 0, INDEX_java_util_concurrent_ExecutorService_awaitTermination_long_java_util_concurrent_TimeUnit_R_boolean, "(JLjava/util/concurrent/TimeUnit;)Z", 1025 },
	{ "submit", 0, INDEX_java_util_concurrent_ExecutorService_submit_java_util_concurrent_Callable_R_java_util_concurrent_Future, "(Ljava/util/concurrent/Callable;)Ljava/util/concurrent/Future;", 1025 },
	{ "submit", 0, INDEX_java_util_concurrent_ExecutorService_submit_java_lang_Runnable_java_lang_Object_R_java_util_concurrent_Future, "(Ljava/lang/Runnable;Ljava/lang/Object;)Ljava/util/concurrent/Future;", 1025 },
	{ "submit", 0, INDEX_java_util_concurrent_ExecutorService_submit_java_lang_Runnable_R_java_util_concurrent_Future, "(Ljava/lang/Runnable;)Ljava/util/concurrent/Future;", 1025 },
	{ "invokeAll", 0, INDEX_java_util_concurrent_ExecutorService_invokeAll_java_util_Collection_R_java_util_List, "(Ljava/util/Collection;)Ljava/util/List;", 1025 },
	{ "invokeAll", 0, INDEX_java_util_concurrent_ExecutorService_invokeAll_java_util_Collection_long_java_util_concurrent_TimeUnit_R_java_util_List, "(Ljava/util/Collection;JLjava/util/concurrent/TimeUnit;)Ljava/util/List;", 1025 },
	{ "invokeAny", 0, INDEX_java_util_concurrent_ExecutorService_invokeAny_java_util_Collection_R_java_lang_Object, "(Ljava/util/Collection;)Ljava/lang/Object;", 1025 },
	{ "invokeAny", 0, INDEX_java_util_concurrent_ExecutorService_invokeAny_java_util_Collection_long_java_util_concurrent_TimeUnit_R_java_lang_Object, "(Ljava/util/Collection;JLjava/util/concurrent/TimeUnit;)Ljava/lang/Object;", 1025 },
};

Class class_java_util_concurrent_ExecutorService{
		.nativeName = (intptr_t) "java/util/concurrent/ExecutorService",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(java_util_concurrent_ExecutorService),
		.classVtable = (intptr_t) vtable_java_util_concurrent_ExecutorService,
		.staticInitializer = (intptr_t) clinit_java_util_concurrent_ExecutorService,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_java_util_concurrent_ExecutorService,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 1537,
		.interfaceCount = 1,
		.nativeInterfaces = (intptr_t) interfaces,
		.fieldCount = 0,
		.nativeFields = (intptr_t) nullptr,
		.methodCount = 12,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 24,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_java_util_concurrent_ExecutorService = registerClass(&class_java_util_concurrent_ExecutorService);

}
