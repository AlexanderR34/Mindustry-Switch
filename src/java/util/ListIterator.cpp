#include "java/util/ListIterator.h"
#include "java/lang/Object.h"
#include "java/util/ListIterator.h"
#include "java/util/Iterator.h"

extern "C" {


void mark_java_util_ListIterator(jobject object, jint mark, jint depth) {
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
	auto self = (java_util_ListIterator *) object;
}

void clinit_java_util_ListIterator(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
}

void *vtable_java_util_ListIterator[] {
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
	(void *) M_java_util_Iterator_remove,
	(void *) M_java_util_Iterator_forEachRemaining_java_util_function_Consumer,
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
	{ "hasNext", "()Z" },
	{ "next", "()Ljava/lang/Object;" },
	{ "remove", "()V" },
	{ "forEachRemaining", "(Ljava/util/function/Consumer;)V" },
	{ "add", "(Ljava/lang/Object;)V" },
	{ "hasPrevious", "()Z" },
	{ "nextIndex", "()I" },
	{ "previous", "()Ljava/lang/Object;" },
	{ "previousIndex", "()I" },
	{ "set", "(Ljava/lang/Object;)V" },
};

static jclass interfaces[] { &class_java_util_Iterator, };

static MethodMetadata methods[] {
	{ "add", 0, INDEX_java_util_ListIterator_add_java_lang_Object, "(Ljava/lang/Object;)V", 1025 },
	{ "hasNext", 0, INDEX_java_util_ListIterator_hasNext_R_boolean, "()Z", 1025 },
	{ "hasPrevious", 0, INDEX_java_util_ListIterator_hasPrevious_R_boolean, "()Z", 1025 },
	{ "next", 0, INDEX_java_util_ListIterator_next_R_java_lang_Object, "()Ljava/lang/Object;", 1025 },
	{ "nextIndex", 0, INDEX_java_util_ListIterator_nextIndex_R_int, "()I", 1025 },
	{ "previous", 0, INDEX_java_util_ListIterator_previous_R_java_lang_Object, "()Ljava/lang/Object;", 1025 },
	{ "previousIndex", 0, INDEX_java_util_ListIterator_previousIndex_R_int, "()I", 1025 },
	{ "remove", 0, INDEX_java_util_ListIterator_remove, "()V", 1025 },
	{ "set", 0, INDEX_java_util_ListIterator_set_java_lang_Object, "(Ljava/lang/Object;)V", 1025 },
};

Class class_java_util_ListIterator{
		.nativeName = (intptr_t) "java/util/ListIterator",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(java_util_ListIterator),
		.classVtable = (intptr_t) vtable_java_util_ListIterator,
		.staticInitializer = (intptr_t) clinit_java_util_ListIterator,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_java_util_ListIterator,
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
		.methodCount = 9,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 21,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_java_util_ListIterator = registerClass(&class_java_util_ListIterator);

}
