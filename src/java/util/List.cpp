#include "java/util/List.h"
#include "java/util/Collection.h"
#include "java/util/Spliterator.h"
#include "java/lang/Object.h"
#include "java/util/ListIterator.h"
#include "java/util/Iterator.h"
#include "java/util/Spliterators.h"
#include "java/util/Arrays.h"
#include "java/util/Comparator.h"
#include "java/util/AbstractList_RandomAccessSpliterator.h"
#include "java/util/RandomAccess.h"
#include "java/lang/Iterable.h"
#include "java/util/List.h"

extern "C" {


void mark_java_util_List(jobject object, jint mark, jint depth) {
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
	auto self = (java_util_List *) object;
}

void clinit_java_util_List(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
}

void M_java_util_List_sort_java_util_Comparator(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[10];
	auto stack = &frame[8];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/List:sort", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(239);
	sp[0].o = (jobject)((func_java_util_List_toArray_R_Array1_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_List, INDEX_java_util_List_toArray_R_Array1_java_lang_Object, (frame[0].o)))(ctx, (frame[0].o));
	frame[2].o = sp[0].o;
	LINE_NUMBER(240);
	SM_java_util_Arrays_sort_Array1_java_lang_Object_java_util_Comparator(ctx, (frame[2].o), (frame[1].o));
	LINE_NUMBER(241);
	sp[0].o = (jobject)((func_java_util_List_listIterator_R_java_util_ListIterator) resolveInterfaceMethod(ctx, &class_java_util_List, INDEX_java_util_List_listIterator_R_java_util_ListIterator, (frame[0].o)))(ctx, (frame[0].o));
	frame[3].o = sp[0].o;
	LINE_NUMBER(242);
	frame[4].o = (frame[2].o);
	frame[5].i = (((jarray) nullCheck(ctx, (frame[4].o)))->length);
	frame[6].i = (jint(0));
	}
label_4:;
	{
	if ((frame[6].i) >= (frame[5].i)) goto label_5;
	}
	{
	frame[7].o = ((jobject)ARRAY_ACCESS(jobject, (frame[4].o), (frame[6].i)));
	LINE_NUMBER(243);
	sp[0].o = (jobject)((func_java_util_ListIterator_next_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_ListIterator, INDEX_java_util_ListIterator_next_R_java_lang_Object, (frame[3].o)))(ctx, (frame[3].o));
	LINE_NUMBER(244);
	((func_java_util_ListIterator_set_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_ListIterator, INDEX_java_util_ListIterator_set_java_lang_Object, (frame[3].o)))(ctx, (frame[3].o), (frame[7].o));
	LINE_NUMBER(242);
	INST_IINC(6, 1);
	goto label_4;
	}
label_5:;
	LINE_NUMBER(246);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jobject M_java_util_List_spliterator_R_java_util_Spliterator(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/List:spliterator", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(365);
	if ((isInstance(ctx, (frame[0].o), &class_java_util_RandomAccess)) == 0) goto label_1;
	}
	{
	clinit_java_util_AbstractList$RandomAccessSpliterator(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_util_AbstractList$RandomAccessSpliterator);
	init_java_util_AbstractList$RandomAccessSpliterator_java_util_List(ctx, sp[0].o, (frame[0].o));
	sp += 1;
	goto label_2;
	}
label_1:;
	{
	sp[0].o = (jobject)SM_java_util_Spliterators_spliterator_java_util_Collection_int_R_java_util_Spliterator(ctx, (frame[0].o), (16));
	sp += 1;
	}
label_2:;
	popStackFrame(ctx);
	INST_ARETURN();

	popStackFrame(ctx);
}

void *vtable_java_util_List[] {
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
	(void *) M_java_util_List_spliterator_R_java_util_Spliterator,
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
	(void *) M_java_util_List_sort_java_util_Comparator,
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
};

static jclass interfaces[] { &class_java_util_Collection, };

static MethodMetadata methods[] {
	{ "add", 0, INDEX_java_util_List_add_int_java_lang_Object, "(ILjava/lang/Object;)V", 1025 },
	{ "add", 0, INDEX_java_util_List_add_java_lang_Object_R_boolean, "(Ljava/lang/Object;)Z", 1025 },
	{ "addAll", 0, INDEX_java_util_List_addAll_int_java_util_Collection_R_boolean, "(ILjava/util/Collection;)Z", 1025 },
	{ "addAll", 0, INDEX_java_util_List_addAll_java_util_Collection_R_boolean, "(Ljava/util/Collection;)Z", 1025 },
	{ "clear", 0, INDEX_java_util_List_clear, "()V", 1025 },
	{ "contains", 0, INDEX_java_util_List_contains_java_lang_Object_R_boolean, "(Ljava/lang/Object;)Z", 1025 },
	{ "containsAll", 0, INDEX_java_util_List_containsAll_java_util_Collection_R_boolean, "(Ljava/util/Collection;)Z", 1025 },
	{ "equals", 0, INDEX_java_util_List_equals_java_lang_Object_R_boolean, "(Ljava/lang/Object;)Z", 1025 },
	{ "get", 0, INDEX_java_util_List_get_int_R_java_lang_Object, "(I)Ljava/lang/Object;", 1025 },
	{ "hashCode", 0, INDEX_java_util_List_hashCode_R_int, "()I", 1025 },
	{ "indexOf", 0, INDEX_java_util_List_indexOf_java_lang_Object_R_int, "(Ljava/lang/Object;)I", 1025 },
	{ "isEmpty", 0, INDEX_java_util_List_isEmpty_R_boolean, "()Z", 1025 },
	{ "iterator", 0, INDEX_java_util_List_iterator_R_java_util_Iterator, "()Ljava/util/Iterator;", 1025 },
	{ "lastIndexOf", 0, INDEX_java_util_List_lastIndexOf_java_lang_Object_R_int, "(Ljava/lang/Object;)I", 1025 },
	{ "listIterator", 0, INDEX_java_util_List_listIterator_R_java_util_ListIterator, "()Ljava/util/ListIterator;", 1025 },
	{ "listIterator", 0, INDEX_java_util_List_listIterator_int_R_java_util_ListIterator, "(I)Ljava/util/ListIterator;", 1025 },
	{ "sort", (intptr_t) M_java_util_List_sort_java_util_Comparator, INDEX_java_util_List_sort_java_util_Comparator, "(Ljava/util/Comparator;)V", 1 },
	{ "remove", 0, INDEX_java_util_List_remove_int_R_java_lang_Object, "(I)Ljava/lang/Object;", 1025 },
	{ "remove", 0, INDEX_java_util_List_remove_java_lang_Object_R_boolean, "(Ljava/lang/Object;)Z", 1025 },
	{ "removeAll", 0, INDEX_java_util_List_removeAll_java_util_Collection_R_boolean, "(Ljava/util/Collection;)Z", 1025 },
	{ "retainAll", 0, INDEX_java_util_List_retainAll_java_util_Collection_R_boolean, "(Ljava/util/Collection;)Z", 1025 },
	{ "set", 0, INDEX_java_util_List_set_int_java_lang_Object_R_java_lang_Object, "(ILjava/lang/Object;)Ljava/lang/Object;", 1025 },
	{ "size", 0, INDEX_java_util_List_size_R_int, "()I", 1025 },
	{ "subList", 0, INDEX_java_util_List_subList_int_int_R_java_util_List, "(II)Ljava/util/List;", 1025 },
	{ "toArray", 0, INDEX_java_util_List_toArray_R_Array1_java_lang_Object, "()[Ljava/lang/Object;", 1025 },
	{ "toArray", 0, INDEX_java_util_List_toArray_Array1_java_lang_Object_R_Array1_java_lang_Object, "([Ljava/lang/Object;)[Ljava/lang/Object;", 1025 },
	{ "spliterator", (intptr_t) M_java_util_List_spliterator_R_java_util_Spliterator, INDEX_java_util_List_spliterator_R_java_util_Spliterator, "()Ljava/util/Spliterator;", 1 },
};

Class class_java_util_List{
		.nativeName = (intptr_t) "java/util/List",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(java_util_List),
		.classVtable = (intptr_t) vtable_java_util_List,
		.staticInitializer = (intptr_t) clinit_java_util_List,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_java_util_List,
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
		.methodCount = 27,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 37,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_java_util_List = registerClass(&class_java_util_List);

}
