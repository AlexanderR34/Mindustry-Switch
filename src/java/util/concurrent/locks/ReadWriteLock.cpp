#include "java/util/concurrent/locks/ReadWriteLock.h"
#include "java/lang/Object.h"
#include "java/util/concurrent/locks/ReadWriteLock.h"
#include "java/util/concurrent/locks/Lock.h"

extern "C" {


void mark_java_util_concurrent_locks_ReadWriteLock(jobject object, jint mark, jint depth) {
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
	auto self = (java_util_concurrent_locks_ReadWriteLock *) object;
}

void clinit_java_util_concurrent_locks_ReadWriteLock(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
}

void *vtable_java_util_concurrent_locks_ReadWriteLock[] {
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
	{ "readLock", "()Ljava/util/concurrent/locks/Lock;" },
	{ "writeLock", "()Ljava/util/concurrent/locks/Lock;" },
};

static MethodMetadata methods[] {
	{ "readLock", 0, INDEX_java_util_concurrent_locks_ReadWriteLock_readLock_R_java_util_concurrent_locks_Lock, "()Ljava/util/concurrent/locks/Lock;", 1025 },
	{ "writeLock", 0, INDEX_java_util_concurrent_locks_ReadWriteLock_writeLock_R_java_util_concurrent_locks_Lock, "()Ljava/util/concurrent/locks/Lock;", 1025 },
};

Class class_java_util_concurrent_locks_ReadWriteLock{
		.nativeName = (intptr_t) "java/util/concurrent/locks/ReadWriteLock",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(java_util_concurrent_locks_ReadWriteLock),
		.classVtable = (intptr_t) vtable_java_util_concurrent_locks_ReadWriteLock,
		.staticInitializer = (intptr_t) clinit_java_util_concurrent_locks_ReadWriteLock,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_java_util_concurrent_locks_ReadWriteLock,
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
		.methodCount = 2,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 13,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_java_util_concurrent_locks_ReadWriteLock = registerClass(&class_java_util_concurrent_locks_ReadWriteLock);

}
