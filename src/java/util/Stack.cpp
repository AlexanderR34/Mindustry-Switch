#include "java/util/Stack.h"
#include "java/util/Collection.h"
#include "java/lang/Object.h"
#include "java/util/Vector.h"
#include "java/lang/IndexOutOfBoundsException.h"
#include "java/util/Stack.h"
#include "java/util/EmptyStackException.h"
#include "java/lang/Iterable.h"
#include "java/util/List.h"
#include "java/util/AbstractList.h"

extern "C" {

jlong SF_java_util_Stack_serialVersionUID;

void mark_java_util_Stack(jobject object, jint mark, jint depth) {
	if (!object) {
		return;
	}
	if (depth > GC_DEPTH_ALWAYS && (object->gcMark < GC_MARK_START || object->gcMark == mark))
		return;
	if (depth > MAX_GC_MARK_DEPTH) {
		markDeepObject(object);
		return;
	}
	mark_java_util_Vector(object, mark, depth);
	if (object->gcMark >= GC_MARK_START)
		object->gcMark = mark;
	auto self = (java_util_Stack *) object;
}

void clinit_java_util_Stack(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	clinit_java_util_Vector(ctx);
	SF_java_util_Stack_serialVersionUID = jlong(1224463164541339165ll);
}

void init_java_util_Stack(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/Stack:<init>", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_util_Stack(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(33);
	init_java_util_Vector(ctx, (frame[0].o));
	LINE_NUMBER(34);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jbool M_java_util_Stack_empty_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/Stack:empty", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(42);
	jint temp0 = (jint)((func_java_util_Stack_isEmpty_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_util_Stack_isEmpty_R_boolean])(ctx, (frame[0].o));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jobject M_java_util_Stack_peek_R_java_lang_Object(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/Stack:peek", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, self);

	frame[0].o = self;
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_IndexOutOfBoundsException))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(56);
	sp[0].o = (jobject)((java_util_Vector *) NULL_CHECK((frame[0].o)))->F_elementData;
	sp[0].o = (jobject)ARRAY_ACCESS(jobject, sp[0].o, (((jint)((java_util_Vector *) NULL_CHECK((frame[0].o)))->F_elementCount) - (jint(1))));
	sp += 1;
	}
	popExceptionFrame(frameRef);
	popStackFrame(ctx, self);
	INST_ARETURN();
label_2:;
	{
	sp -= 1;
	LINE_NUMBER(57);
	frame[1].o = sp[0].o;
	LINE_NUMBER(58);
	clinit_java_util_EmptyStackException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_util_EmptyStackException);
	init_java_util_EmptyStackException(ctx, sp[0].o);
	throwException(ctx, sp[0].o);	}

	popStackFrame(ctx);
}

jobject M_java_util_Stack_pop_R_java_lang_Object(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/Stack:pop", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, self);

	frame[0].o = self;
	{
	LINE_NUMBER(73);
	if (((jint)((java_util_Vector *) NULL_CHECK((frame[0].o)))->F_elementCount) != 0) goto label_1;
	}
	{
	LINE_NUMBER(74);
	clinit_java_util_EmptyStackException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_util_EmptyStackException);
	init_java_util_EmptyStackException(ctx, sp[0].o);
	throwException(ctx, sp[0].o);	}
label_1:;
	{
	LINE_NUMBER(76);
	sp[0].o = frame[0].o;
	jint temp0 = ((jint)((java_util_Vector *) NULL_CHECK(sp[0].o))->F_elementCount) - (jint(1));
	((java_util_Vector *) NULL_CHECK(sp[0].o))->F_elementCount = temp0;
	frame[1].i = temp0;
	LINE_NUMBER(77);
	sp[0].o = (jobject)((java_util_Vector *) NULL_CHECK((frame[0].o)))->F_elementData;
	frame[2].o = ((jobject)ARRAY_ACCESS(jobject, sp[0].o, (frame[1].i)));
	LINE_NUMBER(78);
	sp[0].o = (jobject)((java_util_Vector *) NULL_CHECK((frame[0].o)))->F_elementData;
	ARRAY_ACCESS(jobject, sp[0].o, (frame[1].i)) = (jobject(nullptr));
	LINE_NUMBER(79);
	sp[0].o = frame[0].o;
	((java_util_AbstractList *) NULL_CHECK(sp[0].o))->F_modCount = (((jint)((java_util_AbstractList *) NULL_CHECK(sp[0].o))->F_modCount) + (jint(1)));
	LINE_NUMBER(80);
	popStackFrame(ctx, self);
	return (frame[2].o);
	}

	popStackFrame(ctx);
}

jobject M_java_util_Stack_push_java_lang_Object_R_java_lang_Object(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/Stack:push", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(93);
	((func_java_util_Stack_addElement_java_lang_Object) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_util_Stack_addElement_java_lang_Object])(ctx, (frame[0].o), (frame[1].o));
	LINE_NUMBER(94);
	popStackFrame(ctx);
	return (frame[1].o);
	}

	popStackFrame(ctx);
}

jint M_java_util_Stack_search_java_lang_Object_R_int(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/Stack:search", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, self);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(107);
	sp[0].o = (jobject)((java_util_Vector *) NULL_CHECK((frame[0].o)))->F_elementData;
	frame[2].o = sp[0].o;
	LINE_NUMBER(108);
	frame[3].i = ((jint)((java_util_Vector *) NULL_CHECK((frame[0].o)))->F_elementCount);
	LINE_NUMBER(109);
	if ((frame[1].o) == nullptr) goto label_3;
	}
	{
	LINE_NUMBER(110);
	frame[4].i = ((frame[3].i) - (jint(1)));
	}
label_5:;
	INST_ILOAD(4);
	if ((--sp)->i < 0) goto label_6;
	{
	LINE_NUMBER(111);
	jint temp0 = (jint)((func_java_lang_Object_equals_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_Object_equals_java_lang_Object_R_boolean])(ctx, (frame[1].o), ((jobject)ARRAY_ACCESS(jobject, (frame[2].o), (frame[4].i))));
	if (temp0 == 0) goto label_8;
	}
	{
	LINE_NUMBER(112);
	popStackFrame(ctx, self);
	return ((frame[3].i) - (frame[4].i));
	}
label_8:;
	{
	LINE_NUMBER(110);
	INST_IINC(4, -1);
	goto label_5;
	}
label_6:;
	goto label_10;
label_3:;
	{
	LINE_NUMBER(116);
	frame[4].i = ((frame[3].i) - (jint(1)));
	}
label_11:;
	INST_ILOAD(4);
	if ((--sp)->i < 0) goto label_10;
	{
	LINE_NUMBER(117);
	if (((jobject)ARRAY_ACCESS(jobject, (frame[2].o), (frame[4].i))) != nullptr) goto label_13;
	}
	{
	LINE_NUMBER(118);
	popStackFrame(ctx, self);
	return ((frame[3].i) - (frame[4].i));
	}
label_13:;
	{
	LINE_NUMBER(116);
	INST_IINC(4, -1);
	goto label_11;
	}
label_10:;
	{
	LINE_NUMBER(122);
	popStackFrame(ctx, self);
	return (jint(-1));
	}

	popStackFrame(ctx);
}

void *vtable_java_util_Stack[] {
	(void *) M_java_util_Vector_hashCode_R_int,
	(void *) M_java_util_Vector_equals_java_lang_Object_R_boolean,
	(void *) M_java_lang_Object_clone_R_java_lang_Object,
	(void *) M_java_lang_Object_getClass_R_java_lang_Class,
	(void *) M_java_util_Vector_toString_R_java_lang_String,
	(void *) M_java_lang_Object_finalize,
	(void *) M_java_lang_Object_notify,
	(void *) M_java_lang_Object_notifyAll,
	(void *) M_java_lang_Object_wait,
	(void *) M_java_lang_Object_wait_long,
	(void *) M_java_lang_Object_wait_long_int,
	(void *) M_java_util_AbstractList_iterator_R_java_util_Iterator,
	(void *) M_java_lang_Iterable_forEach_java_util_function_Consumer,
	(void *) M_java_util_Collection_spliterator_R_java_util_Spliterator,
	(void *) M_java_util_Vector_add_java_lang_Object_R_boolean,
	(void *) M_java_util_Vector_addAll_java_util_Collection_R_boolean,
	(void *) M_java_util_Vector_clear,
	(void *) M_java_util_Vector_contains_java_lang_Object_R_boolean,
	(void *) M_java_util_Vector_containsAll_java_util_Collection_R_boolean,
	(void *) M_java_util_Vector_isEmpty_R_boolean,
	(void *) M_java_util_Vector_remove_java_lang_Object_R_boolean,
	(void *) M_java_util_Vector_removeAll_java_util_Collection_R_boolean,
	(void *) M_java_util_Vector_retainAll_java_util_Collection_R_boolean,
	(void *) M_java_util_Vector_size_R_int,
	(void *) M_java_util_Vector_toArray_R_Array1_java_lang_Object,
	(void *) M_java_util_Vector_toArray_Array1_java_lang_Object_R_Array1_java_lang_Object,
	(void *) M_java_util_Vector_add_int_java_lang_Object,
	(void *) M_java_util_Vector_addAll_int_java_util_Collection_R_boolean,
	(void *) M_java_util_Vector_get_int_R_java_lang_Object,
	(void *) M_java_util_Vector_indexOf_java_lang_Object_R_int,
	(void *) M_java_util_Vector_lastIndexOf_java_lang_Object_R_int,
	(void *) M_java_util_AbstractList_listIterator_R_java_util_ListIterator,
	(void *) M_java_util_AbstractList_listIterator_int_R_java_util_ListIterator,
	(void *) M_java_util_List_sort_java_util_Comparator,
	(void *) M_java_util_Vector_remove_int_R_java_lang_Object,
	(void *) M_java_util_Vector_set_int_java_lang_Object_R_java_lang_Object,
	(void *) M_java_util_Vector_subList_int_int_R_java_util_List,
	(void *) M_java_util_Vector_removeRange_int_int,
	(void *) M_java_util_Vector_newElementArray_int_R_Array1_java_lang_Object,
	(void *) M_java_util_Vector_addElement_java_lang_Object,
	(void *) M_java_util_Vector_capacity_R_int,
	(void *) M_java_util_Vector_copyInto_Array1_java_lang_Object,
	(void *) M_java_util_Vector_elementAt_int_R_java_lang_Object,
	(void *) M_java_util_Vector_elements_R_java_util_Enumeration,
	(void *) M_java_util_Vector_ensureCapacity_int,
	(void *) M_java_util_Vector_firstElement_R_java_lang_Object,
	(void *) M_java_util_Vector_grow_int,
	(void *) M_java_util_Vector_growByOne,
	(void *) M_java_util_Vector_growBy_int,
	(void *) M_java_util_Vector_indexOf_java_lang_Object_int_R_int,
	(void *) M_java_util_Vector_insertElementAt_java_lang_Object_int,
	(void *) M_java_util_Vector_lastElement_R_java_lang_Object,
	(void *) M_java_util_Vector_lastIndexOf_java_lang_Object_int_R_int,
	(void *) M_java_util_Vector_removeAllElements,
	(void *) M_java_util_Vector_removeElement_java_lang_Object_R_boolean,
	(void *) M_java_util_Vector_removeElementAt_int,
	(void *) M_java_util_Vector_setElementAt_java_lang_Object_int,
	(void *) M_java_util_Vector_setSize_int,
	(void *) M_java_util_Vector_trimToSize,
	(void *) M_java_util_Stack_empty_R_boolean,
	(void *) M_java_util_Stack_peek_R_java_lang_Object,
	(void *) M_java_util_Stack_pop_R_java_lang_Object,
	(void *) M_java_util_Stack_push_java_lang_Object_R_java_lang_Object,
	(void *) M_java_util_Stack_search_java_lang_Object_R_int,
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
	{ "newElementArray", "(I)[Ljava/lang/Object;" },
	{ "addElement", "(Ljava/lang/Object;)V" },
	{ "capacity", "()I" },
	{ "copyInto", "([Ljava/lang/Object;)V" },
	{ "elementAt", "(I)Ljava/lang/Object;" },
	{ "elements", "()Ljava/util/Enumeration;" },
	{ "ensureCapacity", "(I)V" },
	{ "firstElement", "()Ljava/lang/Object;" },
	{ "grow", "(I)V" },
	{ "growByOne", "()V" },
	{ "growBy", "(I)V" },
	{ "indexOf", "(Ljava/lang/Object;I)I" },
	{ "insertElementAt", "(Ljava/lang/Object;I)V" },
	{ "lastElement", "()Ljava/lang/Object;" },
	{ "lastIndexOf", "(Ljava/lang/Object;I)I" },
	{ "removeAllElements", "()V" },
	{ "removeElement", "(Ljava/lang/Object;)Z" },
	{ "removeElementAt", "(I)V" },
	{ "setElementAt", "(Ljava/lang/Object;I)V" },
	{ "setSize", "(I)V" },
	{ "trimToSize", "()V" },
	{ "empty", "()Z" },
	{ "peek", "()Ljava/lang/Object;" },
	{ "pop", "()Ljava/lang/Object;" },
	{ "push", "(Ljava/lang/Object;)Ljava/lang/Object;" },
	{ "search", "(Ljava/lang/Object;)I" },
};

static FieldMetadata fields[] {
	{ "serialVersionUID", &class_long, (intptr_t) &SF_java_util_Stack_serialVersionUID, "J", 26 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_java_util_Stack, 0, "()V", 1 },
	{ "empty", (intptr_t) M_java_util_Stack_empty_R_boolean, VTABLE_java_util_Stack_empty_R_boolean, "()Z", 1 },
	{ "peek", (intptr_t) M_java_util_Stack_peek_R_java_lang_Object, VTABLE_java_util_Stack_peek_R_java_lang_Object, "()Ljava/lang/Object;", 33 },
	{ "pop", (intptr_t) M_java_util_Stack_pop_R_java_lang_Object, VTABLE_java_util_Stack_pop_R_java_lang_Object, "()Ljava/lang/Object;", 33 },
	{ "push", (intptr_t) M_java_util_Stack_push_java_lang_Object_R_java_lang_Object, VTABLE_java_util_Stack_push_java_lang_Object_R_java_lang_Object, "(Ljava/lang/Object;)Ljava/lang/Object;", 1 },
	{ "search", (intptr_t) M_java_util_Stack_search_java_lang_Object_R_int, VTABLE_java_util_Stack_search_java_lang_Object_R_int, "(Ljava/lang/Object;)I", 33 },
};

Class class_java_util_Stack{
		.nativeName = (intptr_t) "java/util/Stack",
		.parentClass = (intptr_t) &class_java_util_Vector,
		.size = sizeof(java_util_Stack),
		.classVtable = (intptr_t) vtable_java_util_Stack,
		.staticInitializer = (intptr_t) clinit_java_util_Stack,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_java_util_Stack,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 33,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 1,
		.nativeFields = (intptr_t) fields,
		.methodCount = 6,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 64,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_java_util_Stack = registerClass(&class_java_util_Stack);

}
