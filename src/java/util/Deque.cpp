#include "java/util/Deque.h"
#include "java/util/Collection.h"
#include "java/lang/Object.h"
#include "java/util/Iterator.h"
#include "java/util/Queue.h"
#include "java/util/Deque.h"
#include "java/lang/Iterable.h"

extern "C" {


void mark_java_util_Deque(jobject object, jint mark, jint depth) {
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
	auto self = (java_util_Deque *) object;
}

void clinit_java_util_Deque(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
}

void *vtable_java_util_Deque[] {
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
	{ "addFirst", "(Ljava/lang/Object;)V" },
	{ "addLast", "(Ljava/lang/Object;)V" },
	{ "offerFirst", "(Ljava/lang/Object;)Z" },
	{ "offerLast", "(Ljava/lang/Object;)Z" },
	{ "removeFirst", "()Ljava/lang/Object;" },
	{ "removeLast", "()Ljava/lang/Object;" },
	{ "pollFirst", "()Ljava/lang/Object;" },
	{ "pollLast", "()Ljava/lang/Object;" },
	{ "getFirst", "()Ljava/lang/Object;" },
	{ "getLast", "()Ljava/lang/Object;" },
	{ "peekFirst", "()Ljava/lang/Object;" },
	{ "peekLast", "()Ljava/lang/Object;" },
	{ "removeFirstOccurrence", "(Ljava/lang/Object;)Z" },
	{ "removeLastOccurrence", "(Ljava/lang/Object;)Z" },
	{ "push", "(Ljava/lang/Object;)V" },
	{ "pop", "()Ljava/lang/Object;" },
	{ "descendingIterator", "()Ljava/util/Iterator;" },
};

static jclass interfaces[] { &class_java_util_Queue, };

static MethodMetadata methods[] {
	{ "addFirst", 0, INDEX_java_util_Deque_addFirst_java_lang_Object, "(Ljava/lang/Object;)V", 1025 },
	{ "addLast", 0, INDEX_java_util_Deque_addLast_java_lang_Object, "(Ljava/lang/Object;)V", 1025 },
	{ "offerFirst", 0, INDEX_java_util_Deque_offerFirst_java_lang_Object_R_boolean, "(Ljava/lang/Object;)Z", 1025 },
	{ "offerLast", 0, INDEX_java_util_Deque_offerLast_java_lang_Object_R_boolean, "(Ljava/lang/Object;)Z", 1025 },
	{ "removeFirst", 0, INDEX_java_util_Deque_removeFirst_R_java_lang_Object, "()Ljava/lang/Object;", 1025 },
	{ "removeLast", 0, INDEX_java_util_Deque_removeLast_R_java_lang_Object, "()Ljava/lang/Object;", 1025 },
	{ "pollFirst", 0, INDEX_java_util_Deque_pollFirst_R_java_lang_Object, "()Ljava/lang/Object;", 1025 },
	{ "pollLast", 0, INDEX_java_util_Deque_pollLast_R_java_lang_Object, "()Ljava/lang/Object;", 1025 },
	{ "getFirst", 0, INDEX_java_util_Deque_getFirst_R_java_lang_Object, "()Ljava/lang/Object;", 1025 },
	{ "getLast", 0, INDEX_java_util_Deque_getLast_R_java_lang_Object, "()Ljava/lang/Object;", 1025 },
	{ "peekFirst", 0, INDEX_java_util_Deque_peekFirst_R_java_lang_Object, "()Ljava/lang/Object;", 1025 },
	{ "peekLast", 0, INDEX_java_util_Deque_peekLast_R_java_lang_Object, "()Ljava/lang/Object;", 1025 },
	{ "removeFirstOccurrence", 0, INDEX_java_util_Deque_removeFirstOccurrence_java_lang_Object_R_boolean, "(Ljava/lang/Object;)Z", 1025 },
	{ "removeLastOccurrence", 0, INDEX_java_util_Deque_removeLastOccurrence_java_lang_Object_R_boolean, "(Ljava/lang/Object;)Z", 1025 },
	{ "push", 0, INDEX_java_util_Deque_push_java_lang_Object, "(Ljava/lang/Object;)V", 1025 },
	{ "pop", 0, INDEX_java_util_Deque_pop_R_java_lang_Object, "()Ljava/lang/Object;", 1025 },
	{ "descendingIterator", 0, INDEX_java_util_Deque_descendingIterator_R_java_util_Iterator, "()Ljava/util/Iterator;", 1025 },
};

Class class_java_util_Deque{
		.nativeName = (intptr_t) "java/util/Deque",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(java_util_Deque),
		.classVtable = (intptr_t) vtable_java_util_Deque,
		.staticInitializer = (intptr_t) clinit_java_util_Deque,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_java_util_Deque,
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
		.methodCount = 17,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 48,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_java_util_Deque = registerClass(&class_java_util_Deque);

}
