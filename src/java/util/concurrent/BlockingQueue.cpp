#include "java/util/concurrent/BlockingQueue.h"
#include "java/util/Collection.h"
#include "java/lang/Object.h"
#include "java/util/Queue.h"
#include "java/util/concurrent/TimeUnit.h"
#include "java/lang/Iterable.h"
#include "java/util/concurrent/BlockingQueue.h"

extern "C" {


void mark_java_util_concurrent_BlockingQueue(jobject object, jint mark, jint depth) {
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
	auto self = (java_util_concurrent_BlockingQueue *) object;
}

void clinit_java_util_concurrent_BlockingQueue(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
}

void *vtable_java_util_concurrent_BlockingQueue[] {
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
	(void *) M_java_lang_Iterable_forEach_java_util_function_Consumer,
	(void *) M_java_util_Collection_spliterator_R_java_util_Spliterator,
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
	{ "iterator", "()Ljava/util/Iterator;" },
	{ "forEach", "(Ljava/util/function/Consumer;)V" },
	{ "spliterator", "()Ljava/util/Spliterator;" },
	{ "add", "(Ljava/lang/Object;)Z" },
	{ "addAll", "(Ljava/util/Collection;)Z" },
	{ "clear", "()V" },
	{ "contains", "(Ljava/lang/Object;)Z" },
	{ "containsAll", "(Ljava/util/Collection;)Z" },
	{ "isEmpty", "()Z" },
	{ "remove", "(Ljava/lang/Object;)Z" },
	{ "removeAll", "(Ljava/util/Collection;)Z" },
	{ "retainAll", "(Ljava/util/Collection;)Z" },
	{ "size", "()I" },
	{ "toArray", "()[Ljava/lang/Object;" },
	{ "toArray", "([Ljava/lang/Object;)[Ljava/lang/Object;" },
	{ "offer", "(Ljava/lang/Object;)Z" },
	{ "poll", "()Ljava/lang/Object;" },
	{ "remove", "()Ljava/lang/Object;" },
	{ "peek", "()Ljava/lang/Object;" },
	{ "element", "()Ljava/lang/Object;" },
	{ "put", "(Ljava/lang/Object;)V" },
	{ "offer", "(Ljava/lang/Object;JLjava/util/concurrent/TimeUnit;)Z" },
	{ "take", "()Ljava/lang/Object;" },
	{ "poll", "(JLjava/util/concurrent/TimeUnit;)Ljava/lang/Object;" },
	{ "remainingCapacity", "()I" },
	{ "drainTo", "(Ljava/util/Collection;)I" },
	{ "drainTo", "(Ljava/util/Collection;I)I" },
};

static jclass interfaces[] { &class_java_util_Queue, };

static MethodMetadata methods[] {
	{ "add", 0, INDEX_java_util_concurrent_BlockingQueue_add_java_lang_Object_R_boolean, "(Ljava/lang/Object;)Z", 1025 },
	{ "offer", 0, INDEX_java_util_concurrent_BlockingQueue_offer_java_lang_Object_R_boolean, "(Ljava/lang/Object;)Z", 1025 },
	{ "put", 0, INDEX_java_util_concurrent_BlockingQueue_put_java_lang_Object, "(Ljava/lang/Object;)V", 1025 },
	{ "offer", 0, INDEX_java_util_concurrent_BlockingQueue_offer_java_lang_Object_long_java_util_concurrent_TimeUnit_R_boolean, "(Ljava/lang/Object;JLjava/util/concurrent/TimeUnit;)Z", 1025 },
	{ "take", 0, INDEX_java_util_concurrent_BlockingQueue_take_R_java_lang_Object, "()Ljava/lang/Object;", 1025 },
	{ "poll", 0, INDEX_java_util_concurrent_BlockingQueue_poll_long_java_util_concurrent_TimeUnit_R_java_lang_Object, "(JLjava/util/concurrent/TimeUnit;)Ljava/lang/Object;", 1025 },
	{ "remainingCapacity", 0, INDEX_java_util_concurrent_BlockingQueue_remainingCapacity_R_int, "()I", 1025 },
	{ "remove", 0, INDEX_java_util_concurrent_BlockingQueue_remove_java_lang_Object_R_boolean, "(Ljava/lang/Object;)Z", 1025 },
	{ "contains", 0, INDEX_java_util_concurrent_BlockingQueue_contains_java_lang_Object_R_boolean, "(Ljava/lang/Object;)Z", 1025 },
	{ "drainTo", 0, INDEX_java_util_concurrent_BlockingQueue_drainTo_java_util_Collection_R_int, "(Ljava/util/Collection;)I", 1025 },
	{ "drainTo", 0, INDEX_java_util_concurrent_BlockingQueue_drainTo_java_util_Collection_int_R_int, "(Ljava/util/Collection;I)I", 1025 },
};

Class class_java_util_concurrent_BlockingQueue{
		.nativeName = (intptr_t) "java/util/concurrent/BlockingQueue",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(java_util_concurrent_BlockingQueue),
		.classVtable = (intptr_t) vtable_java_util_concurrent_BlockingQueue,
		.staticInitializer = (intptr_t) clinit_java_util_concurrent_BlockingQueue,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_java_util_concurrent_BlockingQueue,
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
		.methodCount = 11,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 38,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_java_util_concurrent_BlockingQueue = registerClass(&class_java_util_concurrent_BlockingQueue);

}
