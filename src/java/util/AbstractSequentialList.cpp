#include "java/util/AbstractSequentialList.h"
#include "java/util/Collection.h"
#include "java/util/ListIterator.h"
#include "java/lang/Object.h"
#include "java/util/NoSuchElementException.h"
#include "java/util/Iterator.h"
#include "java/lang/IndexOutOfBoundsException.h"
#include "java/util/AbstractSequentialList.h"
#include "java/lang/Iterable.h"
#include "java/util/List.h"
#include "java/util/AbstractList.h"
#include "java/util/AbstractCollection.h"

extern "C" {


void mark_java_util_AbstractSequentialList(jobject object, jint mark, jint depth) {
	if (!object) {
		return;
	}
	if (depth > GC_DEPTH_ALWAYS && (object->gcMark < GC_MARK_START || object->gcMark == mark))
		return;
	if (depth > MAX_GC_MARK_DEPTH) {
		markDeepObject(object);
		return;
	}
	mark_java_util_AbstractList(object, mark, depth);
	if (object->gcMark >= GC_MARK_START)
		object->gcMark = mark;
	auto self = (java_util_AbstractSequentialList *) object;
}

void clinit_java_util_AbstractSequentialList(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	clinit_java_util_AbstractList(ctx);
}

void init_java_util_AbstractSequentialList(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/AbstractSequentialList:<init>", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_util_AbstractSequentialList(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(33);
	init_java_util_AbstractList(ctx, (frame[0].o));
	LINE_NUMBER(34);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_java_util_AbstractSequentialList_add_int_java_lang_Object(jcontext ctx, jobject self, jint param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/AbstractSequentialList:add", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(38);
	sp[0].o = (jobject)((func_java_util_AbstractSequentialList_listIterator_int_R_java_util_ListIterator) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_util_AbstractSequentialList_listIterator_int_R_java_util_ListIterator])(ctx, (frame[0].o), (frame[1].i));
	((func_java_util_ListIterator_add_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_ListIterator, INDEX_java_util_ListIterator_add_java_lang_Object, sp[0].o))(ctx, sp[0].o, (frame[2].o));
	LINE_NUMBER(39);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jbool M_java_util_AbstractSequentialList_addAll_int_java_util_Collection_R_boolean(jcontext ctx, jobject self, jint param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/AbstractSequentialList:addAll", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(43);
	sp[0].o = (jobject)((func_java_util_AbstractSequentialList_listIterator_int_R_java_util_ListIterator) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_util_AbstractSequentialList_listIterator_int_R_java_util_ListIterator])(ctx, (frame[0].o), (frame[1].i));
	frame[3].o = sp[0].o;
	LINE_NUMBER(44);
	sp[0].o = (jobject)((func_java_util_Collection_iterator_R_java_util_Iterator) resolveInterfaceMethod(ctx, &class_java_util_Collection, INDEX_java_util_Collection_iterator_R_java_util_Iterator, (frame[2].o)))(ctx, (frame[2].o));
	frame[4].o = sp[0].o;
	LINE_NUMBER(45);
	jint temp0 = (jint)((func_java_util_ListIterator_nextIndex_R_int) resolveInterfaceMethod(ctx, &class_java_util_ListIterator, INDEX_java_util_ListIterator_nextIndex_R_int, (frame[3].o)))(ctx, (frame[3].o));
	frame[5].i = temp0;
	}
label_3:;
	{
	LINE_NUMBER(46);
	jint temp0 = (jint)((func_java_util_Iterator_hasNext_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_hasNext_R_boolean, (frame[4].o)))(ctx, (frame[4].o));
	if (temp0 == 0) goto label_4;
	}
	{
	LINE_NUMBER(47);
	sp[0].o = frame[3].o;
	sp[1].o = (jobject)((func_java_util_Iterator_next_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_next_R_java_lang_Object, (frame[4].o)))(ctx, (frame[4].o));
	((func_java_util_ListIterator_add_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_ListIterator, INDEX_java_util_ListIterator_add_java_lang_Object, sp[0].o))(ctx, sp[0].o, sp[1].o);
	goto label_3;
	}
label_4:;
	{
	LINE_NUMBER(49);
	jint temp0 = frame[5].i;
	jint temp1 = (jint)((func_java_util_ListIterator_nextIndex_R_int) resolveInterfaceMethod(ctx, &class_java_util_ListIterator, INDEX_java_util_ListIterator_nextIndex_R_int, (frame[3].o)))(ctx, (frame[3].o));
	if (temp0 == temp1) goto label_6;
	}
	INST_ICONST(1);
	goto label_7;
label_6:;
	INST_ICONST(0);
label_7:;
	popStackFrame(ctx);
	INST_IRETURN();

	popStackFrame(ctx);
}

jobject M_java_util_AbstractSequentialList_get_int_R_java_lang_Object(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/AbstractSequentialList:get", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_util_NoSuchElementException))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(55);
	sp[0].o = (jobject)((func_java_util_AbstractSequentialList_listIterator_int_R_java_util_ListIterator) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_util_AbstractSequentialList_listIterator_int_R_java_util_ListIterator])(ctx, (frame[0].o), (frame[1].i));
	sp[0].o = (jobject)((func_java_util_ListIterator_next_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_ListIterator, INDEX_java_util_ListIterator_next_R_java_lang_Object, sp[0].o))(ctx, sp[0].o);
	sp += 1;
	}
	popExceptionFrame(frameRef);
	popStackFrame(ctx);
	INST_ARETURN();
label_2:;
	{
	sp -= 1;
	LINE_NUMBER(56);
	frame[2].o = sp[0].o;
	LINE_NUMBER(57);
	clinit_java_lang_IndexOutOfBoundsException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IndexOutOfBoundsException);
	init_java_lang_IndexOutOfBoundsException(ctx, sp[0].o);
	throwException(ctx, sp[0].o);	}

	popStackFrame(ctx);
}

jobject M_java_util_AbstractSequentialList_iterator_R_java_util_Iterator(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/AbstractSequentialList:iterator", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(63);
	sp[0].o = (jobject)((func_java_util_AbstractSequentialList_listIterator_int_R_java_util_ListIterator) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_util_AbstractSequentialList_listIterator_int_R_java_util_ListIterator])(ctx, (frame[0].o), (jint(0)));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_java_util_AbstractSequentialList_remove_int_R_java_lang_Object(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/AbstractSequentialList:remove", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_util_NoSuchElementException))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(72);
	sp[0].o = (jobject)((func_java_util_AbstractSequentialList_listIterator_int_R_java_util_ListIterator) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_util_AbstractSequentialList_listIterator_int_R_java_util_ListIterator])(ctx, (frame[0].o), (frame[1].i));
	frame[2].o = sp[0].o;
	LINE_NUMBER(73);
	sp[0].o = (jobject)((func_java_util_ListIterator_next_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_ListIterator, INDEX_java_util_ListIterator_next_R_java_lang_Object, (frame[2].o)))(ctx, (frame[2].o));
	frame[3].o = sp[0].o;
	LINE_NUMBER(74);
	((func_java_util_ListIterator_remove) resolveInterfaceMethod(ctx, &class_java_util_ListIterator, INDEX_java_util_ListIterator_remove, (frame[2].o)))(ctx, (frame[2].o));
	LINE_NUMBER(75);
	sp[0].o = frame[3].o;
	sp += 1;
	}
	popExceptionFrame(frameRef);
	popStackFrame(ctx);
	INST_ARETURN();
label_2:;
	{
	sp -= 1;
	LINE_NUMBER(76);
	frame[2].o = sp[0].o;
	LINE_NUMBER(77);
	clinit_java_lang_IndexOutOfBoundsException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IndexOutOfBoundsException);
	init_java_lang_IndexOutOfBoundsException(ctx, sp[0].o);
	throwException(ctx, sp[0].o);	}

	popStackFrame(ctx);
}

jobject M_java_util_AbstractSequentialList_set_int_java_lang_Object_R_java_lang_Object(jcontext ctx, jobject self, jint param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/AbstractSequentialList:set", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(83);
	sp[0].o = (jobject)((func_java_util_AbstractSequentialList_listIterator_int_R_java_util_ListIterator) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_util_AbstractSequentialList_listIterator_int_R_java_util_ListIterator])(ctx, (frame[0].o), (frame[1].i));
	frame[3].o = sp[0].o;
	LINE_NUMBER(84);
	jint temp0 = (jint)((func_java_util_ListIterator_hasNext_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_ListIterator, INDEX_java_util_ListIterator_hasNext_R_boolean, (frame[3].o)))(ctx, (frame[3].o));
	if (temp0 != 0) goto label_2;
	}
	{
	LINE_NUMBER(85);
	clinit_java_lang_IndexOutOfBoundsException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IndexOutOfBoundsException);
	init_java_lang_IndexOutOfBoundsException(ctx, sp[0].o);
	throwException(ctx, sp[0].o);	}
label_2:;
	{
	LINE_NUMBER(87);
	sp[0].o = (jobject)((func_java_util_ListIterator_next_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_ListIterator, INDEX_java_util_ListIterator_next_R_java_lang_Object, (frame[3].o)))(ctx, (frame[3].o));
	frame[4].o = sp[0].o;
	LINE_NUMBER(88);
	((func_java_util_ListIterator_set_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_ListIterator, INDEX_java_util_ListIterator_set_java_lang_Object, (frame[3].o)))(ctx, (frame[3].o), (frame[2].o));
	LINE_NUMBER(89);
	popStackFrame(ctx);
	return (frame[4].o);
	}

	popStackFrame(ctx);
}

void *vtable_java_util_AbstractSequentialList[] {
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
	(void *) M_java_util_AbstractSequentialList_iterator_R_java_util_Iterator,
	(void *) M_java_lang_Iterable_forEach_java_util_function_Consumer,
	(void *) M_java_util_Collection_spliterator_R_java_util_Spliterator,
	(void *) M_java_util_AbstractList_add_java_lang_Object_R_boolean,
	(void *) M_java_util_AbstractCollection_addAll_java_util_Collection_R_boolean,
	(void *) M_java_util_AbstractList_clear,
	(void *) M_java_util_AbstractCollection_contains_java_lang_Object_R_boolean,
	(void *) M_java_util_AbstractCollection_containsAll_java_util_Collection_R_boolean,
	(void *) M_java_util_AbstractCollection_isEmpty_R_boolean,
	(void *) M_java_util_AbstractCollection_remove_java_lang_Object_R_boolean,
	(void *) M_java_util_AbstractCollection_removeAll_java_util_Collection_R_boolean,
	(void *) M_java_util_AbstractCollection_retainAll_java_util_Collection_R_boolean,
	(void *) nullptr,
	(void *) M_java_util_AbstractList_toArray_R_Array1_java_lang_Object,
	(void *) M_java_util_AbstractList_toArray_Array1_java_lang_Object_R_Array1_java_lang_Object,
	(void *) M_java_util_AbstractSequentialList_add_int_java_lang_Object,
	(void *) M_java_util_AbstractSequentialList_addAll_int_java_util_Collection_R_boolean,
	(void *) M_java_util_AbstractSequentialList_get_int_R_java_lang_Object,
	(void *) M_java_util_AbstractList_indexOf_java_lang_Object_R_int,
	(void *) M_java_util_AbstractList_lastIndexOf_java_lang_Object_R_int,
	(void *) M_java_util_AbstractList_listIterator_R_java_util_ListIterator,
	(void *) M_java_util_AbstractList_listIterator_int_R_java_util_ListIterator,
	(void *) M_java_util_List_sort_java_util_Comparator,
	(void *) M_java_util_AbstractSequentialList_remove_int_R_java_lang_Object,
	(void *) M_java_util_AbstractSequentialList_set_int_java_lang_Object_R_java_lang_Object,
	(void *) M_java_util_AbstractList_subList_int_int_R_java_util_List,
	(void *) M_java_util_AbstractList_removeRange_int_int,
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
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_java_util_AbstractSequentialList, 0, "()V", 4 },
	{ "add", (intptr_t) M_java_util_AbstractSequentialList_add_int_java_lang_Object, VTABLE_java_util_AbstractSequentialList_add_int_java_lang_Object, "(ILjava/lang/Object;)V", 1 },
	{ "addAll", (intptr_t) M_java_util_AbstractSequentialList_addAll_int_java_util_Collection_R_boolean, VTABLE_java_util_AbstractSequentialList_addAll_int_java_util_Collection_R_boolean, "(ILjava/util/Collection;)Z", 1 },
	{ "get", (intptr_t) M_java_util_AbstractSequentialList_get_int_R_java_lang_Object, VTABLE_java_util_AbstractSequentialList_get_int_R_java_lang_Object, "(I)Ljava/lang/Object;", 1 },
	{ "iterator", (intptr_t) M_java_util_AbstractSequentialList_iterator_R_java_util_Iterator, VTABLE_java_util_AbstractSequentialList_iterator_R_java_util_Iterator, "()Ljava/util/Iterator;", 1 },
	{ "listIterator", 0, VTABLE_java_util_AbstractSequentialList_listIterator_int_R_java_util_ListIterator, "(I)Ljava/util/ListIterator;", 1025 },
	{ "remove", (intptr_t) M_java_util_AbstractSequentialList_remove_int_R_java_lang_Object, VTABLE_java_util_AbstractSequentialList_remove_int_R_java_lang_Object, "(I)Ljava/lang/Object;", 1 },
	{ "set", (intptr_t) M_java_util_AbstractSequentialList_set_int_java_lang_Object_R_java_lang_Object, VTABLE_java_util_AbstractSequentialList_set_int_java_lang_Object_R_java_lang_Object, "(ILjava/lang/Object;)Ljava/lang/Object;", 1 },
};

Class class_java_util_AbstractSequentialList{
		.nativeName = (intptr_t) "java/util/AbstractSequentialList",
		.parentClass = (intptr_t) &class_java_util_AbstractList,
		.size = sizeof(java_util_AbstractSequentialList),
		.classVtable = (intptr_t) vtable_java_util_AbstractSequentialList,
		.staticInitializer = (intptr_t) clinit_java_util_AbstractSequentialList,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_java_util_AbstractSequentialList,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 1057,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 0,
		.nativeFields = (intptr_t) nullptr,
		.methodCount = 8,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 38,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_java_util_AbstractSequentialList = registerClass(&class_java_util_AbstractSequentialList);

}
