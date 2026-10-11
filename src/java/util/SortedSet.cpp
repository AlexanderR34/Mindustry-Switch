#include "java/util/SortedSet.h"
#include "java/util/Collection.h"
#include "java/lang/Object.h"
#include "java/util/Set.h"
#include "java/util/SortedSet.h"
#include "java/util/Comparator.h"
#include "java/lang/Iterable.h"

extern "C" {


void mark_java_util_SortedSet(jobject object, jint mark, jint depth) {
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
	auto self = (java_util_SortedSet *) object;
}

void clinit_java_util_SortedSet(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
}

void *vtable_java_util_SortedSet[] {
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
};

static jclass interfaces[] { &class_java_util_Set, };

static MethodMetadata methods[] {
	{ "comparator", 0, INDEX_java_util_SortedSet_comparator_R_java_util_Comparator, "()Ljava/util/Comparator;", 1025 },
	{ "first", 0, INDEX_java_util_SortedSet_first_R_java_lang_Object, "()Ljava/lang/Object;", 1025 },
	{ "headSet", 0, INDEX_java_util_SortedSet_headSet_java_lang_Object_R_java_util_SortedSet, "(Ljava/lang/Object;)Ljava/util/SortedSet;", 1025 },
	{ "last", 0, INDEX_java_util_SortedSet_last_R_java_lang_Object, "()Ljava/lang/Object;", 1025 },
	{ "subSet", 0, INDEX_java_util_SortedSet_subSet_java_lang_Object_java_lang_Object_R_java_util_SortedSet, "(Ljava/lang/Object;Ljava/lang/Object;)Ljava/util/SortedSet;", 1025 },
	{ "tailSet", 0, INDEX_java_util_SortedSet_tailSet_java_lang_Object_R_java_util_SortedSet, "(Ljava/lang/Object;)Ljava/util/SortedSet;", 1025 },
};

Class class_java_util_SortedSet{
		.nativeName = (intptr_t) "java/util/SortedSet",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(java_util_SortedSet),
		.classVtable = (intptr_t) vtable_java_util_SortedSet,
		.staticInitializer = (intptr_t) clinit_java_util_SortedSet,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_java_util_SortedSet,
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
		.methodCount = 6,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 32,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_java_util_SortedSet = registerClass(&class_java_util_SortedSet);

}
