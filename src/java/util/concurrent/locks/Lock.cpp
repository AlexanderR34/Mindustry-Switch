#include "java/util/concurrent/locks/Lock.h"
#include "java/lang/Object.h"
#include "java/util/concurrent/locks/Condition.h"
#include "java/util/concurrent/TimeUnit.h"
#include "java/util/concurrent/locks/Lock.h"

extern "C" {


void mark_java_util_concurrent_locks_Lock(jobject object, jint mark, jint depth) {
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
	auto self = (java_util_concurrent_locks_Lock *) object;
}

void clinit_java_util_concurrent_locks_Lock(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
}

void *vtable_java_util_concurrent_locks_Lock[] {
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
	{ "lock", "()V" },
	{ "lockInterruptibly", "()V" },
	{ "tryLock", "()Z" },
	{ "tryLock", "(JLjava/util/concurrent/TimeUnit;)Z" },
	{ "unlock", "()V" },
	{ "newCondition", "()Ljava/util/concurrent/locks/Condition;" },
};

static MethodMetadata methods[] {
	{ "lock", 0, INDEX_java_util_concurrent_locks_Lock_lock, "()V", 1025 },
	{ "lockInterruptibly", 0, INDEX_java_util_concurrent_locks_Lock_lockInterruptibly, "()V", 1025 },
	{ "tryLock", 0, INDEX_java_util_concurrent_locks_Lock_tryLock_R_boolean, "()Z", 1025 },
	{ "tryLock", 0, INDEX_java_util_concurrent_locks_Lock_tryLock_long_java_util_concurrent_TimeUnit_R_boolean, "(JLjava/util/concurrent/TimeUnit;)Z", 1025 },
	{ "unlock", 0, INDEX_java_util_concurrent_locks_Lock_unlock, "()V", 1025 },
	{ "newCondition", 0, INDEX_java_util_concurrent_locks_Lock_newCondition_R_java_util_concurrent_locks_Condition, "()Ljava/util/concurrent/locks/Condition;", 1025 },
};

Class class_java_util_concurrent_locks_Lock{
		.nativeName = (intptr_t) "java/util/concurrent/locks/Lock",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(java_util_concurrent_locks_Lock),
		.classVtable = (intptr_t) vtable_java_util_concurrent_locks_Lock,
		.staticInitializer = (intptr_t) clinit_java_util_concurrent_locks_Lock,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_java_util_concurrent_locks_Lock,
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
		.methodCount = 6,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 17,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_java_util_concurrent_locks_Lock = registerClass(&class_java_util_concurrent_locks_Lock);

}
