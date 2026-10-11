#include "java/util/Arrays_ArrayList.h"
#include "java/lang/ClassCastException.h"
#include "java/lang/IndexOutOfBoundsException.h"
#include "java/util/RandomAccess.h"
#include "java/lang/Iterable.h"
#include "java/util/Arrays_ArrayList.h"
#include "java/util/Collection.h"
#include "java/lang/Object.h"
#include "java/lang/ArrayStoreException.h"
#include "java/lang/ArrayIndexOutOfBoundsException.h"
#include "java/util/Arrays.h"
#include "java/lang/NullPointerException.h"
#include "java/util/List.h"
#include "java/util/AbstractList.h"
#include "java/util/AbstractCollection.h"

extern "C" {


void mark_java_util_Arrays$ArrayList(jobject object, jint mark, jint depth) {
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
	auto self = (java_util_Arrays$ArrayList *) object;
	if (self->F_a)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_a)->clazz)->markFunction)((jobject) self->F_a, mark, depth + 1);
}

void clinit_java_util_Arrays$ArrayList(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	clinit_java_util_AbstractList(ctx);
}

void init_java_util_Arrays$ArrayList_Array1_java_lang_Object(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/Arrays$ArrayList:<init>", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_util_Arrays$ArrayList(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(51);
	init_java_util_AbstractList(ctx, (frame[0].o));
	LINE_NUMBER(52);
	if ((frame[1].o) != nullptr) goto label_2;
	}
	{
	LINE_NUMBER(53);
	clinit_java_lang_NullPointerException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_NullPointerException);
	init_java_lang_NullPointerException(ctx, sp[0].o);
	throwException(ctx, sp[0].o);	}
label_2:;
	{
	LINE_NUMBER(55);
	((java_util_Arrays$ArrayList *) NULL_CHECK((frame[0].o)))->F_a = (jref) (frame[1].o);
	LINE_NUMBER(56);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jbool M_java_util_Arrays$ArrayList_contains_java_lang_Object_R_boolean(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/Arrays$ArrayList:contains", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(60);
	if ((frame[1].o) == nullptr) goto label_1;
	}
	{
	LINE_NUMBER(61);
	sp[0].o = (jobject)((java_util_Arrays$ArrayList *) NULL_CHECK((frame[0].o)))->F_a;
	frame[2].o = sp[0].o;
	frame[3].i = (((jarray) nullCheck(ctx, (frame[2].o)))->length);
	frame[4].i = (jint(0));
	}
label_3:;
	{
	if ((frame[4].i) >= (frame[3].i)) goto label_4;
	}
	{
	frame[5].o = ((jobject)ARRAY_ACCESS(jobject, (frame[2].o), (frame[4].i)));
	LINE_NUMBER(62);
	jint temp0 = (jint)((func_java_lang_Object_equals_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_Object_equals_java_lang_Object_R_boolean])(ctx, (frame[1].o), (frame[5].o));
	if (temp0 == 0) goto label_6;
	}
	{
	LINE_NUMBER(63);
	popStackFrame(ctx);
	return (jint(1));
	}
label_6:;
	{
	LINE_NUMBER(61);
	INST_IINC(4, 1);
	goto label_3;
	}
label_4:;
	goto label_8;
label_1:;
	{
	LINE_NUMBER(67);
	sp[0].o = (jobject)((java_util_Arrays$ArrayList *) NULL_CHECK((frame[0].o)))->F_a;
	frame[2].o = sp[0].o;
	frame[3].i = (((jarray) nullCheck(ctx, (frame[2].o)))->length);
	frame[4].i = (jint(0));
	}
label_9:;
	{
	if ((frame[4].i) >= (frame[3].i)) goto label_8;
	}
	{
	frame[5].o = ((jobject)ARRAY_ACCESS(jobject, (frame[2].o), (frame[4].i)));
	LINE_NUMBER(68);
	if ((frame[5].o) != nullptr) goto label_11;
	}
	{
	LINE_NUMBER(69);
	popStackFrame(ctx);
	return (jint(1));
	}
label_11:;
	{
	LINE_NUMBER(67);
	INST_IINC(4, 1);
	goto label_9;
	}
label_8:;
	{
	LINE_NUMBER(73);
	popStackFrame(ctx);
	return (jint(0));
	}

	popStackFrame(ctx);
}

jobject M_java_util_Arrays$ArrayList_get_int_R_java_lang_Object(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/Arrays$ArrayList:get", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_ArrayIndexOutOfBoundsException))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(79);
	sp[0].o = (jobject)((java_util_Arrays$ArrayList *) NULL_CHECK((frame[0].o)))->F_a;
	sp[0].o = (jobject)ARRAY_ACCESS(jobject, sp[0].o, (frame[1].i));
	sp += 1;
	}
	popExceptionFrame(frameRef);
	popStackFrame(ctx);
	INST_ARETURN();
label_2:;
	{
	sp -= 1;
	LINE_NUMBER(80);
	frame[2].o = sp[0].o;
	LINE_NUMBER(81);
	clinit_java_lang_IndexOutOfBoundsException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IndexOutOfBoundsException);
	init_java_lang_IndexOutOfBoundsException(ctx, sp[0].o);
	throwException(ctx, sp[0].o);	}

	popStackFrame(ctx);
}

jint M_java_util_Arrays$ArrayList_indexOf_java_lang_Object_R_int(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/Arrays$ArrayList:indexOf", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(87);
	if ((frame[1].o) == nullptr) goto label_1;
	}
	{
	LINE_NUMBER(88);
	frame[2].i = (jint(0));
	}
label_3:;
	{
	jint temp0 = frame[2].i;
	sp[0].o = (jobject)((java_util_Arrays$ArrayList *) NULL_CHECK((frame[0].o)))->F_a;
	if (temp0 >= (((jarray) nullCheck(ctx, sp[0].o))->length)) goto label_4;
	}
	{
	LINE_NUMBER(89);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((java_util_Arrays$ArrayList *) NULL_CHECK((frame[0].o)))->F_a;
	jint temp0 = (jint)((func_java_lang_Object_equals_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_Object_equals_java_lang_Object_R_boolean])(ctx, sp[0].o, ((jobject)ARRAY_ACCESS(jobject, sp[1].o, (frame[2].i))));
	if (temp0 == 0) goto label_6;
	}
	{
	LINE_NUMBER(90);
	popStackFrame(ctx);
	return (frame[2].i);
	}
label_6:;
	{
	LINE_NUMBER(88);
	INST_IINC(2, 1);
	goto label_3;
	}
label_4:;
	goto label_8;
label_1:;
	{
	LINE_NUMBER(94);
	frame[2].i = (jint(0));
	}
label_9:;
	{
	jint temp0 = frame[2].i;
	sp[0].o = (jobject)((java_util_Arrays$ArrayList *) NULL_CHECK((frame[0].o)))->F_a;
	if (temp0 >= (((jarray) nullCheck(ctx, sp[0].o))->length)) goto label_8;
	}
	{
	LINE_NUMBER(95);
	sp[0].o = (jobject)((java_util_Arrays$ArrayList *) NULL_CHECK((frame[0].o)))->F_a;
	if (((jobject)ARRAY_ACCESS(jobject, sp[0].o, (frame[2].i))) != nullptr) goto label_11;
	}
	{
	LINE_NUMBER(96);
	popStackFrame(ctx);
	return (frame[2].i);
	}
label_11:;
	{
	LINE_NUMBER(94);
	INST_IINC(2, 1);
	goto label_9;
	}
label_8:;
	{
	LINE_NUMBER(100);
	popStackFrame(ctx);
	return (jint(-1));
	}

	popStackFrame(ctx);
}

jint M_java_util_Arrays$ArrayList_lastIndexOf_java_lang_Object_R_int(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/Arrays$ArrayList:lastIndexOf", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(105);
	if ((frame[1].o) == nullptr) goto label_1;
	}
	{
	LINE_NUMBER(106);
	sp[0].o = (jobject)((java_util_Arrays$ArrayList *) NULL_CHECK((frame[0].o)))->F_a;
	frame[2].i = ((((jarray) nullCheck(ctx, sp[0].o))->length) - (jint(1)));
	}
label_3:;
	INST_ILOAD(2);
	if ((--sp)->i < 0) goto label_4;
	{
	LINE_NUMBER(107);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((java_util_Arrays$ArrayList *) NULL_CHECK((frame[0].o)))->F_a;
	jint temp0 = (jint)((func_java_lang_Object_equals_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_Object_equals_java_lang_Object_R_boolean])(ctx, sp[0].o, ((jobject)ARRAY_ACCESS(jobject, sp[1].o, (frame[2].i))));
	if (temp0 == 0) goto label_6;
	}
	{
	LINE_NUMBER(108);
	popStackFrame(ctx);
	return (frame[2].i);
	}
label_6:;
	{
	LINE_NUMBER(106);
	INST_IINC(2, -1);
	goto label_3;
	}
label_4:;
	goto label_8;
label_1:;
	{
	LINE_NUMBER(112);
	sp[0].o = (jobject)((java_util_Arrays$ArrayList *) NULL_CHECK((frame[0].o)))->F_a;
	frame[2].i = ((((jarray) nullCheck(ctx, sp[0].o))->length) - (jint(1)));
	}
label_9:;
	INST_ILOAD(2);
	if ((--sp)->i < 0) goto label_8;
	{
	LINE_NUMBER(113);
	sp[0].o = (jobject)((java_util_Arrays$ArrayList *) NULL_CHECK((frame[0].o)))->F_a;
	if (((jobject)ARRAY_ACCESS(jobject, sp[0].o, (frame[2].i))) != nullptr) goto label_11;
	}
	{
	LINE_NUMBER(114);
	popStackFrame(ctx);
	return (frame[2].i);
	}
label_11:;
	{
	LINE_NUMBER(112);
	INST_IINC(2, -1);
	goto label_9;
	}
label_8:;
	{
	LINE_NUMBER(118);
	popStackFrame(ctx);
	return (jint(-1));
	}

	popStackFrame(ctx);
}

jobject M_java_util_Arrays$ArrayList_set_int_java_lang_Object_R_java_lang_Object(jcontext ctx, jobject self, jint param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/Arrays$ArrayList:set", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].o = param1;
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_ArrayIndexOutOfBoundsException))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
label_5: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_ArrayStoreException))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 2); goto label_4; }
	}
	{
	LINE_NUMBER(124);
	sp[0].o = (jobject)((java_util_Arrays$ArrayList *) NULL_CHECK((frame[0].o)))->F_a;
	frame[3].o = ((jobject)ARRAY_ACCESS(jobject, sp[0].o, (frame[1].i)));
	LINE_NUMBER(125);
	sp[0].o = (jobject)((java_util_Arrays$ArrayList *) NULL_CHECK((frame[0].o)))->F_a;
	ARRAY_ACCESS(jobject, sp[0].o, (frame[1].i)) = (frame[2].o);
	LINE_NUMBER(126);
	sp[0].o = frame[3].o;
	sp += 1;
	}
	popExceptionFrame(frameRef);
	popExceptionFrame(frameRef);
	popStackFrame(ctx);
	INST_ARETURN();
label_2:;
	{
	sp -= 1;
	LINE_NUMBER(127);
	frame[3].o = sp[0].o;
	LINE_NUMBER(128);
	clinit_java_lang_IndexOutOfBoundsException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IndexOutOfBoundsException);
	init_java_lang_IndexOutOfBoundsException(ctx, sp[0].o);
	throwException(ctx, sp[0].o);	}
label_4:;
	{
	sp -= 1;
	LINE_NUMBER(129);
	frame[3].o = sp[0].o;
	LINE_NUMBER(130);
	clinit_java_lang_ClassCastException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_ClassCastException);
	init_java_lang_ClassCastException(ctx, sp[0].o);
	throwException(ctx, sp[0].o);	}

	popStackFrame(ctx);
}

jint M_java_util_Arrays$ArrayList_size_R_int(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/Arrays$ArrayList:size", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(136);
	sp[0].o = (jobject)((java_util_Arrays$ArrayList *) NULL_CHECK((frame[0].o)))->F_a;
	popStackFrame(ctx);
	return (((jarray) nullCheck(ctx, sp[0].o))->length);
	}

	popStackFrame(ctx);
}

void *vtable_java_util_Arrays$ArrayList[] {
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
	(void *) M_java_util_AbstractList_iterator_R_java_util_Iterator,
	(void *) M_java_lang_Iterable_forEach_java_util_function_Consumer,
	(void *) M_java_util_Collection_spliterator_R_java_util_Spliterator,
	(void *) M_java_util_AbstractList_add_java_lang_Object_R_boolean,
	(void *) M_java_util_AbstractCollection_addAll_java_util_Collection_R_boolean,
	(void *) M_java_util_AbstractList_clear,
	(void *) M_java_util_Arrays$ArrayList_contains_java_lang_Object_R_boolean,
	(void *) M_java_util_AbstractCollection_containsAll_java_util_Collection_R_boolean,
	(void *) M_java_util_AbstractCollection_isEmpty_R_boolean,
	(void *) M_java_util_AbstractCollection_remove_java_lang_Object_R_boolean,
	(void *) M_java_util_AbstractCollection_removeAll_java_util_Collection_R_boolean,
	(void *) M_java_util_AbstractCollection_retainAll_java_util_Collection_R_boolean,
	(void *) M_java_util_Arrays$ArrayList_size_R_int,
	(void *) M_java_util_AbstractList_toArray_R_Array1_java_lang_Object,
	(void *) M_java_util_AbstractList_toArray_Array1_java_lang_Object_R_Array1_java_lang_Object,
	(void *) M_java_util_AbstractList_add_int_java_lang_Object,
	(void *) M_java_util_AbstractList_addAll_int_java_util_Collection_R_boolean,
	(void *) M_java_util_Arrays$ArrayList_get_int_R_java_lang_Object,
	(void *) M_java_util_Arrays$ArrayList_indexOf_java_lang_Object_R_int,
	(void *) M_java_util_Arrays$ArrayList_lastIndexOf_java_lang_Object_R_int,
	(void *) M_java_util_AbstractList_listIterator_R_java_util_ListIterator,
	(void *) M_java_util_AbstractList_listIterator_int_R_java_util_ListIterator,
	(void *) M_java_util_List_sort_java_util_Comparator,
	(void *) M_java_util_AbstractList_remove_int_R_java_lang_Object,
	(void *) M_java_util_Arrays$ArrayList_set_int_java_lang_Object_R_java_lang_Object,
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

static jclass interfaces[] { &class_java_util_List, &class_java_util_RandomAccess, };

static FieldMetadata fields[] {
	{ "a", getArrayClass(&class_java_lang_Object, 1), offsetof(java_util_Arrays$ArrayList, F_a), "[Ljava/lang/Object;", 18 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_java_util_Arrays$ArrayList_Array1_java_lang_Object, 0, "([Ljava/lang/Object;)V", 0 },
	{ "contains", (intptr_t) M_java_util_Arrays$ArrayList_contains_java_lang_Object_R_boolean, VTABLE_java_util_Arrays$ArrayList_contains_java_lang_Object_R_boolean, "(Ljava/lang/Object;)Z", 1 },
	{ "get", (intptr_t) M_java_util_Arrays$ArrayList_get_int_R_java_lang_Object, VTABLE_java_util_Arrays$ArrayList_get_int_R_java_lang_Object, "(I)Ljava/lang/Object;", 1 },
	{ "indexOf", (intptr_t) M_java_util_Arrays$ArrayList_indexOf_java_lang_Object_R_int, VTABLE_java_util_Arrays$ArrayList_indexOf_java_lang_Object_R_int, "(Ljava/lang/Object;)I", 1 },
	{ "lastIndexOf", (intptr_t) M_java_util_Arrays$ArrayList_lastIndexOf_java_lang_Object_R_int, VTABLE_java_util_Arrays$ArrayList_lastIndexOf_java_lang_Object_R_int, "(Ljava/lang/Object;)I", 1 },
	{ "set", (intptr_t) M_java_util_Arrays$ArrayList_set_int_java_lang_Object_R_java_lang_Object, VTABLE_java_util_Arrays$ArrayList_set_int_java_lang_Object_R_java_lang_Object, "(ILjava/lang/Object;)Ljava/lang/Object;", 1 },
	{ "size", (intptr_t) M_java_util_Arrays$ArrayList_size_R_int, VTABLE_java_util_Arrays$ArrayList_size_R_int, "()I", 1 },
};

Class class_java_util_Arrays$ArrayList{
		.nativeName = (intptr_t) "java/util/Arrays$ArrayList",
		.parentClass = (intptr_t) &class_java_util_AbstractList,
		.size = sizeof(java_util_Arrays$ArrayList),
		.classVtable = (intptr_t) vtable_java_util_Arrays$ArrayList,
		.staticInitializer = (intptr_t) clinit_java_util_Arrays$ArrayList,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_java_util_Arrays$ArrayList,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) &class_java_util_Arrays,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 32,
		.interfaceCount = 2,
		.nativeInterfaces = (intptr_t) interfaces,
		.fieldCount = 1,
		.nativeFields = (intptr_t) fields,
		.methodCount = 7,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 38,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_java_util_Arrays$ArrayList = registerClass(&class_java_util_Arrays$ArrayList);

}

