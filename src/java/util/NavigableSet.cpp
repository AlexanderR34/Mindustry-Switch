#include "java/util/NavigableSet.h"
#include "java/util/Collection.h"
#include "java/lang/Object.h"
#include "java/util/Set.h"
#include "java/util/SortedSet.h"
#include "java/util/Iterator.h"
#include "java/util/NavigableSet.h"
#include "java/lang/Iterable.h"

extern "C" {


void mark_java_util_NavigableSet(jobject object, jint mark, jint depth) {
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
	auto self = (java_util_NavigableSet *) object;
}

void clinit_java_util_NavigableSet(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
}

void *vtable_java_util_NavigableSet[] {
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
	(void *) M_java_util_Set_spliterator_R_java_util_Spliterator,
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
	{ "comparator", "()Ljava/util/Comparator;" },
	{ "first", "()Ljava/lang/Object;" },
	{ "headSet", "(Ljava/lang/Object;)Ljava/util/SortedSet;" },
	{ "last", "()Ljava/lang/Object;" },
	{ "subSet", "(Ljava/lang/Object;Ljava/lang/Object;)Ljava/util/SortedSet;" },
	{ "tailSet", "(Ljava/lang/Object;)Ljava/util/SortedSet;" },
	{ "pollFirst", "()Ljava/lang/Object;" },
	{ "pollLast", "()Ljava/lang/Object;" },
	{ "higher", "(Ljava/lang/Object;)Ljava/lang/Object;" },
	{ "ceiling", "(Ljava/lang/Object;)Ljava/lang/Object;" },
	{ "lower", "(Ljava/lang/Object;)Ljava/lang/Object;" },
	{ "floor", "(Ljava/lang/Object;)Ljava/lang/Object;" },
	{ "descendingIterator", "()Ljava/util/Iterator;" },
	{ "descendingSet", "()Ljava/util/NavigableSet;" },
	{ "subSet", "(Ljava/lang/Object;ZLjava/lang/Object;Z)Ljava/util/NavigableSet;" },
	{ "headSet", "(Ljava/lang/Object;Z)Ljava/util/NavigableSet;" },
	{ "tailSet", "(Ljava/lang/Object;Z)Ljava/util/NavigableSet;" },
};

static jclass interfaces[] { &class_java_util_SortedSet, };

static MethodMetadata methods[] {
	{ "pollFirst", 0, INDEX_java_util_NavigableSet_pollFirst_R_java_lang_Object, "()Ljava/lang/Object;", 1025 },
	{ "pollLast", 0, INDEX_java_util_NavigableSet_pollLast_R_java_lang_Object, "()Ljava/lang/Object;", 1025 },
	{ "higher", 0, INDEX_java_util_NavigableSet_higher_java_lang_Object_R_java_lang_Object, "(Ljava/lang/Object;)Ljava/lang/Object;", 1025 },
	{ "ceiling", 0, INDEX_java_util_NavigableSet_ceiling_java_lang_Object_R_java_lang_Object, "(Ljava/lang/Object;)Ljava/lang/Object;", 1025 },
	{ "lower", 0, INDEX_java_util_NavigableSet_lower_java_lang_Object_R_java_lang_Object, "(Ljava/lang/Object;)Ljava/lang/Object;", 1025 },
	{ "floor", 0, INDEX_java_util_NavigableSet_floor_java_lang_Object_R_java_lang_Object, "(Ljava/lang/Object;)Ljava/lang/Object;", 1025 },
	{ "descendingIterator", 0, INDEX_java_util_NavigableSet_descendingIterator_R_java_util_Iterator, "()Ljava/util/Iterator;", 1025 },
	{ "descendingSet", 0, INDEX_java_util_NavigableSet_descendingSet_R_java_util_NavigableSet, "()Ljava/util/NavigableSet;", 1025 },
	{ "subSet", 0, INDEX_java_util_NavigableSet_subSet_java_lang_Object_boolean_java_lang_Object_boolean_R_java_util_NavigableSet, "(Ljava/lang/Object;ZLjava/lang/Object;Z)Ljava/util/NavigableSet;", 1025 },
	{ "headSet", 0, INDEX_java_util_NavigableSet_headSet_java_lang_Object_boolean_R_java_util_NavigableSet, "(Ljava/lang/Object;Z)Ljava/util/NavigableSet;", 1025 },
	{ "tailSet", 0, INDEX_java_util_NavigableSet_tailSet_java_lang_Object_boolean_R_java_util_NavigableSet, "(Ljava/lang/Object;Z)Ljava/util/NavigableSet;", 1025 },
};

Class class_java_util_NavigableSet{
		.nativeName = (intptr_t) "java/util/NavigableSet",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(java_util_NavigableSet),
		.classVtable = (intptr_t) vtable_java_util_NavigableSet,
		.staticInitializer = (intptr_t) clinit_java_util_NavigableSet,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_java_util_NavigableSet,
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
		.vtableSize = 43,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_java_util_NavigableSet = registerClass(&class_java_util_NavigableSet);

}
