#include "java/util/Collections_UnmodifiableRandomAccessList.h"
#include "java/util/Collection.h"
#include "java/lang/Object.h"
#include "java/util/Collections.h"
#include "java/util/Collections_UnmodifiableList.h"
#include "java/util/RandomAccess.h"
#include "java/lang/Iterable.h"
#include "java/util/List.h"
#include "java/util/Collections_UnmodifiableCollection.h"
#include "java/util/Collections_UnmodifiableRandomAccessList.h"

extern "C" {


void mark_java_util_Collections$UnmodifiableRandomAccessList(jobject object, jint mark, jint depth) {
	if (!object) {
		return;
	}
	if (depth > GC_DEPTH_ALWAYS && (object->gcMark < GC_MARK_START || object->gcMark == mark))
		return;
	if (depth > MAX_GC_MARK_DEPTH) {
		markDeepObject(object);
		return;
	}
	mark_java_util_Collections$UnmodifiableList(object, mark, depth);
	if (object->gcMark >= GC_MARK_START)
		object->gcMark = mark;
	auto self = (java_util_Collections$UnmodifiableRandomAccessList *) object;
}

void clinit_java_util_Collections$UnmodifiableRandomAccessList(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	clinit_java_util_Collections$UnmodifiableList(ctx);
}

void init_java_util_Collections$UnmodifiableRandomAccessList_java_util_List(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/Collections$UnmodifiableRandomAccessList:<init>", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_util_Collections$UnmodifiableRandomAccessList(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(1011);
	init_java_util_Collections$UnmodifiableList_java_util_List(ctx, (frame[0].o), (frame[1].o));
	LINE_NUMBER(1012);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_java_util_Collections$UnmodifiableRandomAccessList_subList_int_int_R_java_util_List(jcontext ctx, jobject self, jint param0, jint param1) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/Collections$UnmodifiableRandomAccessList:subList", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(1016);
	clinit_java_util_Collections$UnmodifiableRandomAccessList(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_util_Collections$UnmodifiableRandomAccessList);
	sp[1].o = (jobject)((java_util_Collections$UnmodifiableList *) NULL_CHECK((frame[0].o)))->F_list;
	sp[1].o = (jobject)((func_java_util_List_subList_int_int_R_java_util_List) resolveInterfaceMethod(ctx, &class_java_util_List, INDEX_java_util_List_subList_int_int_R_java_util_List, sp[1].o))(ctx, sp[1].o, (frame[1].i), (frame[2].i));
	init_java_util_Collections$UnmodifiableRandomAccessList_java_util_List(ctx, sp[0].o, sp[1].o);
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_java_util_Collections$UnmodifiableRandomAccessList_writeReplace_R_java_lang_Object(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/Collections$UnmodifiableRandomAccessList:writeReplace", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(1031);
	clinit_java_util_Collections$UnmodifiableList(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_util_Collections$UnmodifiableList);
	sp[1].o = (jobject)((java_util_Collections$UnmodifiableList *) NULL_CHECK((frame[0].o)))->F_list;
	init_java_util_Collections$UnmodifiableList_java_util_List(ctx, sp[0].o, sp[1].o);
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void *vtable_java_util_Collections$UnmodifiableRandomAccessList[] {
	(void *) M_java_util_Collections$UnmodifiableList_hashCode_R_int,
	(void *) M_java_util_Collections$UnmodifiableList_equals_java_lang_Object_R_boolean,
	(void *) M_java_lang_Object_clone_R_java_lang_Object,
	(void *) M_java_lang_Object_getClass_R_java_lang_Class,
	(void *) M_java_util_Collections$UnmodifiableCollection_toString_R_java_lang_String,
	(void *) M_java_lang_Object_finalize,
	(void *) M_java_lang_Object_notify,
	(void *) M_java_lang_Object_notifyAll,
	(void *) M_java_lang_Object_wait,
	(void *) M_java_lang_Object_wait_long,
	(void *) M_java_lang_Object_wait_long_int,
	(void *) M_java_util_Collections$UnmodifiableCollection_iterator_R_java_util_Iterator,
	(void *) M_java_lang_Iterable_forEach_java_util_function_Consumer,
	(void *) M_java_util_Collection_spliterator_R_java_util_Spliterator,
	(void *) M_java_util_Collections$UnmodifiableCollection_add_java_lang_Object_R_boolean,
	(void *) M_java_util_Collections$UnmodifiableCollection_addAll_java_util_Collection_R_boolean,
	(void *) M_java_util_Collections$UnmodifiableCollection_clear,
	(void *) M_java_util_Collections$UnmodifiableCollection_contains_java_lang_Object_R_boolean,
	(void *) M_java_util_Collections$UnmodifiableCollection_containsAll_java_util_Collection_R_boolean,
	(void *) M_java_util_Collections$UnmodifiableCollection_isEmpty_R_boolean,
	(void *) M_java_util_Collections$UnmodifiableCollection_remove_java_lang_Object_R_boolean,
	(void *) M_java_util_Collections$UnmodifiableCollection_removeAll_java_util_Collection_R_boolean,
	(void *) M_java_util_Collections$UnmodifiableCollection_retainAll_java_util_Collection_R_boolean,
	(void *) M_java_util_Collections$UnmodifiableCollection_size_R_int,
	(void *) M_java_util_Collections$UnmodifiableCollection_toArray_R_Array1_java_lang_Object,
	(void *) M_java_util_Collections$UnmodifiableCollection_toArray_Array1_java_lang_Object_R_Array1_java_lang_Object,
	(void *) M_java_util_Collections$UnmodifiableList_add_int_java_lang_Object,
	(void *) M_java_util_Collections$UnmodifiableList_addAll_int_java_util_Collection_R_boolean,
	(void *) M_java_util_Collections$UnmodifiableList_get_int_R_java_lang_Object,
	(void *) M_java_util_Collections$UnmodifiableList_indexOf_java_lang_Object_R_int,
	(void *) M_java_util_Collections$UnmodifiableList_lastIndexOf_java_lang_Object_R_int,
	(void *) M_java_util_Collections$UnmodifiableList_listIterator_R_java_util_ListIterator,
	(void *) M_java_util_Collections$UnmodifiableList_listIterator_int_R_java_util_ListIterator,
	(void *) M_java_util_List_sort_java_util_Comparator,
	(void *) M_java_util_Collections$UnmodifiableList_remove_int_R_java_lang_Object,
	(void *) M_java_util_Collections$UnmodifiableList_set_int_java_lang_Object_R_java_lang_Object,
	(void *) M_java_util_Collections$UnmodifiableRandomAccessList_subList_int_int_R_java_util_List,
	(void *) M_java_util_Collections$UnmodifiableList_readResolve_R_java_lang_Object,
	(void *) M_java_util_Collections$UnmodifiableRandomAccessList_writeReplace_R_java_lang_Object,
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
	{ "readResolve", "()Ljava/lang/Object;" },
	{ "writeReplace", "()Ljava/lang/Object;" },
};

static jclass interfaces[] { &class_java_util_RandomAccess, };

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_java_util_Collections$UnmodifiableRandomAccessList_java_util_List, 0, "(Ljava/util/List;)V", 0 },
	{ "subList", (intptr_t) M_java_util_Collections$UnmodifiableRandomAccessList_subList_int_int_R_java_util_List, VTABLE_java_util_Collections$UnmodifiableRandomAccessList_subList_int_int_R_java_util_List, "(II)Ljava/util/List;", 1 },
	{ "writeReplace", (intptr_t) M_java_util_Collections$UnmodifiableRandomAccessList_writeReplace_R_java_lang_Object, VTABLE_java_util_Collections$UnmodifiableRandomAccessList_writeReplace_R_java_lang_Object, "()Ljava/lang/Object;", 2 },
};

Class class_java_util_Collections$UnmodifiableRandomAccessList{
		.nativeName = (intptr_t) "java/util/Collections$UnmodifiableRandomAccessList",
		.parentClass = (intptr_t) &class_java_util_Collections$UnmodifiableList,
		.size = sizeof(java_util_Collections$UnmodifiableRandomAccessList),
		.classVtable = (intptr_t) vtable_java_util_Collections$UnmodifiableRandomAccessList,
		.staticInitializer = (intptr_t) clinit_java_util_Collections$UnmodifiableRandomAccessList,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_java_util_Collections$UnmodifiableRandomAccessList,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) &class_java_util_Collections,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 32,
		.interfaceCount = 1,
		.nativeInterfaces = (intptr_t) interfaces,
		.fieldCount = 0,
		.nativeFields = (intptr_t) nullptr,
		.methodCount = 3,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 39,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_java_util_Collections$UnmodifiableRandomAccessList = registerClass(&class_java_util_Collections$UnmodifiableRandomAccessList);

}

