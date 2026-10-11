#include "java/util/concurrent/locks/Condition.h"
#include "java/lang/Object.h"
#include "java/util/concurrent/locks/Condition.h"
#include "java/util/concurrent/TimeUnit.h"
#include "java/util/Date.h"

extern "C" {


void mark_java_util_concurrent_locks_Condition(jobject object, jint mark, jint depth) {
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
	auto self = (java_util_concurrent_locks_Condition *) object;
}

void clinit_java_util_concurrent_locks_Condition(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
}

void *vtable_java_util_concurrent_locks_Condition[] {
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
	{ "await", "()V" },
	{ "awaitUninterruptibly", "()V" },
	{ "awaitNanos", "(J)J" },
	{ "await", "(JLjava/util/concurrent/TimeUnit;)Z" },
	{ "awaitUntil", "(Ljava/util/Date;)Z" },
	{ "signal", "()V" },
	{ "signalAll", "()V" },
};

static MethodMetadata methods[] {
	{ "await", 0, INDEX_java_util_concurrent_locks_Condition_await, "()V", 1025 },
	{ "awaitUninterruptibly", 0, INDEX_java_util_concurrent_locks_Condition_awaitUninterruptibly, "()V", 1025 },
	{ "awaitNanos", 0, INDEX_java_util_concurrent_locks_Condition_awaitNanos_long_R_long, "(J)J", 1025 },
	{ "await", 0, INDEX_java_util_concurrent_locks_Condition_await_long_java_util_concurrent_TimeUnit_R_boolean, "(JLjava/util/concurrent/TimeUnit;)Z", 1025 },
	{ "awaitUntil", 0, INDEX_java_util_concurrent_locks_Condition_awaitUntil_java_util_Date_R_boolean, "(Ljava/util/Date;)Z", 1025 },
	{ "signal", 0, INDEX_java_util_concurrent_locks_Condition_signal, "()V", 1025 },
	{ "signalAll", 0, INDEX_java_util_concurrent_locks_Condition_signalAll, "()V", 1025 },
};

Class class_java_util_concurrent_locks_Condition{
		.nativeName = (intptr_t) "java/util/concurrent/locks/Condition",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(java_util_concurrent_locks_Condition),
		.classVtable = (intptr_t) vtable_java_util_concurrent_locks_Condition,
		.staticInitializer = (intptr_t) clinit_java_util_concurrent_locks_Condition,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_java_util_concurrent_locks_Condition,
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
		.methodCount = 7,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 18,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_java_util_concurrent_locks_Condition = registerClass(&class_java_util_concurrent_locks_Condition);

}
