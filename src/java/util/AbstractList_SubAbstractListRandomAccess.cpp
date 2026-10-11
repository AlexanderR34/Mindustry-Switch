#include "java/util/AbstractList_SubAbstractListRandomAccess.h"
#include "java/util/Collection.h"
#include "java/lang/Object.h"
#include "java/util/AbstractList_SubAbstractList.h"
#include "java/util/RandomAccess.h"
#include "java/lang/Iterable.h"
#include "java/util/List.h"
#include "java/util/AbstractList.h"
#include "java/util/AbstractCollection.h"

extern "C" {


void mark_java_util_AbstractList$SubAbstractListRandomAccess(jobject object, jint mark, jint depth) {
	if (!object) {
		return;
	}
	if (depth > GC_DEPTH_ALWAYS && (object->gcMark < GC_MARK_START || object->gcMark == mark))
		return;
	if (depth > MAX_GC_MARK_DEPTH) {
		markDeepObject(object);
		return;
	}
	mark_java_util_AbstractList$SubAbstractList(object, mark, depth);
	if (object->gcMark >= GC_MARK_START)
		object->gcMark = mark;
	auto self = (java_util_AbstractList$SubAbstractListRandomAccess *) object;
}

void clinit_java_util_AbstractList$SubAbstractListRandomAccess(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	clinit_java_util_AbstractList$SubAbstractList(ctx);
}

void init_java_util_AbstractList$SubAbstractListRandomAccess_java_util_AbstractList_int_int(jcontext ctx, jobject self, jobject param0, jint param1, jint param2) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/AbstractList$SubAbstractListRandomAccess:<init>", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_util_AbstractList$SubAbstractListRandomAccess(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	frame[3].i = param2;
	{
	LINE_NUMBER(155);
	init_java_util_AbstractList$SubAbstractList_java_util_AbstractList_int_int(ctx, (frame[0].o), (frame[1].o), (frame[2].i), (frame[3].i));
	LINE_NUMBER(156);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void *vtable_java_util_AbstractList$SubAbstractListRandomAccess[] {
	(void *) M_java_util_AbstractList_hashCode_R_int,
	(void *) M_java_util_AbstractList_equals_java_lang_Object_R_boolean,
	(void *) M_java_lang_Object_clone_R_java_lang_Object,
	(void *) M_java_lang_Object_getClass_R_java_lang_Class,
	(void *) M_java_util_AbstractCollection_toString_R_java_lang_String,
	(void *) M_java_lang_Object_finalize,
	(void *) M_java_lang_Object_notify,
	(void *) M_java_lang_Object_notifyAll,
	(void *) M_java_lang_Object_wait,
	(void *) M_java_lang_Object_wait_long,
	(void *) M_java_lang_Object_wait_long_int,
	(void *) M_java_util_AbstractList$SubAbstractList_iterator_R_java_util_Iterator,
	(void *) M_java_lang_Iterable_forEach_java_util_function_Consumer,
	(void *) M_java_util_Collection_spliterator_R_java_util_Spliterator,
	(void *) M_java_util_AbstractList_add_java_lang_Object_R_boolean,
	(void *) M_java_util_AbstractList$SubAbstractList_addAll_java_util_Collection_R_boolean,
	(void *) M_java_util_AbstractList_clear,
	(void *) M_java_util_AbstractCollection_contains_java_lang_Object_R_boolean,
	(void *) M_java_util_AbstractCollection_containsAll_java_util_Collection_R_boolean,
	(void *) M_java_util_AbstractCollection_isEmpty_R_boolean,
	(void *) M_java_util_AbstractCollection_remove_java_lang_Object_R_boolean,
	(void *) M_java_util_AbstractCollection_removeAll_java_util_Collection_R_boolean,
	(void *) M_java_util_AbstractCollection_retainAll_java_util_Collection_R_boolean,
	(void *) M_java_util_AbstractList$SubAbstractList_size_R_int,
	(void *) M_java_util_AbstractList_toArray_R_Array1_java_lang_Object,
	(void *) M_java_util_AbstractList_toArray_Array1_java_lang_Object_R_Array1_java_lang_Object,
	(void *) M_java_util_AbstractList$SubAbstractList_add_int_java_lang_Object,
	(void *) M_java_util_AbstractList$SubAbstractList_addAll_int_java_util_Collection_R_boolean,
	(void *) M_java_util_AbstractList$SubAbstractList_get_int_R_java_lang_Object,
	(void *) M_java_util_AbstractList_indexOf_java_lang_Object_R_int,
	(void *) M_java_util_AbstractList_lastIndexOf_java_lang_Object_R_int,
	(void *) M_java_util_AbstractList_listIterator_R_java_util_ListIterator,
	(void *) M_java_util_AbstractList$SubAbstractList_listIterator_int_R_java_util_ListIterator,
	(void *) M_java_util_List_sort_java_util_Comparator,
	(void *) M_java_util_AbstractList$SubAbstractList_remove_int_R_java_lang_Object,
	(void *) M_java_util_AbstractList$SubAbstractList_set_int_java_lang_Object_R_java_lang_Object,
	(void *) M_java_util_AbstractList_subList_int_int_R_java_util_List,
	(void *) M_java_util_AbstractList$SubAbstractList_removeRange_int_int,
	(void *) M_java_util_AbstractList$SubAbstractList_sizeChanged_boolean,
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
	{ "add", "(ILjava/lang/Object;)V" },
	{ "addAll", "(ILjava/util/Collection;)Z" },
	{ "get", "(I)Ljava/lang/Object;" },
	{ "indexOf", "(Ljava/lang/Object;)I" },
	{ "lastIndexOf", "(Ljava/lang/Object;)I" },
	{ "listIterator", "()Ljava/util/ListIterator;" },
	{ "listIterator", "(I)Ljava/util/ListIterator;" },
	{ "sort", "(Ljava/util/Comparator;)V" },
	{ "remove", "(I)Ljava/lang/Object;" },
	{ "set", "(ILjava/lang/Object;)Ljava/lang/Object;" },
	{ "subList", "(II)Ljava/util/List;" },
	{ "removeRange", "(II)V" },
	{ "sizeChanged", "(Z)V" },
};

static jclass interfaces[] { &class_java_util_RandomAccess, };

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_java_util_AbstractList$SubAbstractListRandomAccess_java_util_AbstractList_int_int, 0, "(Ljava/util/AbstractList;II)V", 0 },
};

Class class_java_util_AbstractList$SubAbstractListRandomAccess{
		.nativeName = (intptr_t) "java/util/AbstractList$SubAbstractListRandomAccess",
		.parentClass = (intptr_t) &class_java_util_AbstractList$SubAbstractList,
		.size = sizeof(java_util_AbstractList$SubAbstractListRandomAccess),
		.classVtable = (intptr_t) vtable_java_util_AbstractList$SubAbstractListRandomAccess,
		.staticInitializer = (intptr_t) clinit_java_util_AbstractList$SubAbstractListRandomAccess,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_java_util_AbstractList$SubAbstractListRandomAccess,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) &class_java_util_AbstractList,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 48,
		.interfaceCount = 1,
		.nativeInterfaces = (intptr_t) interfaces,
		.fieldCount = 0,
		.nativeFields = (intptr_t) nullptr,
		.methodCount = 1,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 39,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_java_util_AbstractList$SubAbstractListRandomAccess = registerClass(&class_java_util_AbstractList$SubAbstractListRandomAccess);

}

