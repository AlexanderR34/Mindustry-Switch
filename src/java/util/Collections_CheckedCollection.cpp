#include "java/util/Collections_CheckedCollection.h"
#include "java/util/Iterator.h"
#include "java/util/Collections_CheckedCollection.h"
#include "java/lang/Iterable.h"
#include "java/util/Collection.h"
#include "java/util/Collections_CheckedListIterator.h"
#include "java/lang/Object.h"
#include "java/util/ListIterator.h"
#include "java/lang/String.h"
#include "java/util/Arrays.h"
#include "java/util/Collections.h"
#include "java/lang/NullPointerException.h"
#include "java/lang/Class.h"
#include "java/util/List.h"

extern "C" {

jlong SF_java_util_Collections$CheckedCollection_serialVersionUID;

void mark_java_util_Collections$CheckedCollection(jobject object, jint mark, jint depth) {
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
	auto self = (java_util_Collections$CheckedCollection *) object;
	if (self->F_c)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_c)->clazz)->markFunction)((jobject) self->F_c, mark, depth + 1);
	if (self->F_type)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_type)->clazz)->markFunction)((jobject) self->F_type, mark, depth + 1);
}

void clinit_java_util_Collections$CheckedCollection(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	SF_java_util_Collections$CheckedCollection_serialVersionUID = jlong(1578914078182001775ll);
}

void init_java_util_Collections$CheckedCollection_java_util_Collection_java_lang_Class(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/Collections$CheckedCollection:<init>", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_util_Collections$CheckedCollection(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(2796);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(2797);
	if ((frame[1].o) == nullptr) goto label_2;
	}
	INST_ALOAD(2);
	if ((--sp)->o != nullptr) goto label_3;
label_2:;
	{
	LINE_NUMBER(2798);
	clinit_java_lang_NullPointerException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_NullPointerException);
	init_java_lang_NullPointerException(ctx, sp[0].o);
	throwException(ctx, sp[0].o);	}
label_3:;
	{
	LINE_NUMBER(2800);
	((java_util_Collections$CheckedCollection *) NULL_CHECK((frame[0].o)))->F_c = (jref) (frame[1].o);
	LINE_NUMBER(2801);
	((java_util_Collections$CheckedCollection *) NULL_CHECK((frame[0].o)))->F_type = (jref) (frame[2].o);
	LINE_NUMBER(2802);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jint M_java_util_Collections$CheckedCollection_size_R_int(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/Collections$CheckedCollection:size", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(2808);
	sp[0].o = (jobject)((java_util_Collections$CheckedCollection *) NULL_CHECK((frame[0].o)))->F_c;
	jint temp0 = (jint)((func_java_util_Collection_size_R_int) resolveInterfaceMethod(ctx, &class_java_util_Collection, INDEX_java_util_Collection_size_R_int, sp[0].o))(ctx, sp[0].o);
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jbool M_java_util_Collections$CheckedCollection_isEmpty_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/Collections$CheckedCollection:isEmpty", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(2815);
	sp[0].o = (jobject)((java_util_Collections$CheckedCollection *) NULL_CHECK((frame[0].o)))->F_c;
	jint temp0 = (jint)((func_java_util_Collection_isEmpty_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_Collection, INDEX_java_util_Collection_isEmpty_R_boolean, sp[0].o))(ctx, sp[0].o);
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jbool M_java_util_Collections$CheckedCollection_contains_java_lang_Object_R_boolean(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/Collections$CheckedCollection:contains", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(2822);
	sp[0].o = (jobject)((java_util_Collections$CheckedCollection *) NULL_CHECK((frame[0].o)))->F_c;
	jint temp0 = (jint)((func_java_util_Collection_contains_java_lang_Object_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_Collection, INDEX_java_util_Collection_contains_java_lang_Object_R_boolean, sp[0].o))(ctx, sp[0].o, (frame[1].o));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jobject M_java_util_Collections$CheckedCollection_iterator_R_java_util_Iterator(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/Collections$CheckedCollection:iterator", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(2829);
	sp[0].o = (jobject)((java_util_Collections$CheckedCollection *) NULL_CHECK((frame[0].o)))->F_c;
	sp[0].o = (jobject)((func_java_util_Collection_iterator_R_java_util_Iterator) resolveInterfaceMethod(ctx, &class_java_util_Collection, INDEX_java_util_Collection_iterator_R_java_util_Iterator, sp[0].o))(ctx, sp[0].o);
	frame[1].o = sp[0].o;
	LINE_NUMBER(2830);
	if ((isInstance(ctx, (frame[1].o), &class_java_util_ListIterator)) == 0) goto label_2;
	}
	{
	LINE_NUMBER(2831);
	clinit_java_util_Collections$CheckedListIterator(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_util_Collections$CheckedListIterator);
	sp[1].o = checkCast(ctx, &class_java_util_ListIterator, (frame[1].o));
	sp[2].o = (jobject)((java_util_Collections$CheckedCollection *) NULL_CHECK((frame[0].o)))->F_type;
	init_java_util_Collections$CheckedListIterator_java_util_ListIterator_java_lang_Class(ctx, sp[0].o, sp[1].o, sp[2].o);
	frame[1].o = sp[0].o;
	}
label_2:;
	{
	LINE_NUMBER(2833);
	popStackFrame(ctx);
	return (frame[1].o);
	}

	popStackFrame(ctx);
}

jobject M_java_util_Collections$CheckedCollection_toArray_R_Array1_java_lang_Object(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/Collections$CheckedCollection:toArray", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(2840);
	sp[0].o = (jobject)((java_util_Collections$CheckedCollection *) NULL_CHECK((frame[0].o)))->F_c;
	sp[0].o = (jobject)((func_java_util_Collection_toArray_R_Array1_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Collection, INDEX_java_util_Collection_toArray_R_Array1_java_lang_Object, sp[0].o))(ctx, sp[0].o);
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_java_util_Collections$CheckedCollection_toArray_Array1_java_lang_Object_R_Array1_java_lang_Object(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/Collections$CheckedCollection:toArray", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(2847);
	sp[0].o = (jobject)((java_util_Collections$CheckedCollection *) NULL_CHECK((frame[0].o)))->F_c;
	sp[0].o = (jobject)((func_java_util_Collection_toArray_Array1_java_lang_Object_R_Array1_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Collection, INDEX_java_util_Collection_toArray_Array1_java_lang_Object_R_Array1_java_lang_Object, sp[0].o))(ctx, sp[0].o, (frame[1].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jbool M_java_util_Collections$CheckedCollection_add_java_lang_Object_R_boolean(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/Collections$CheckedCollection:add", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(2854);
	sp[0].o = (jobject)((java_util_Collections$CheckedCollection *) NULL_CHECK((frame[0].o)))->F_c;
	sp[1].o = frame[1].o;
	sp[2].o = (jobject)((java_util_Collections$CheckedCollection *) NULL_CHECK((frame[0].o)))->F_type;
	sp[1].o = (jobject)SM_java_util_Collections_checkType_java_lang_Object_java_lang_Class_R_java_lang_Object(ctx, sp[1].o, sp[2].o);
	jint temp0 = (jint)((func_java_util_Collection_add_java_lang_Object_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_Collection, INDEX_java_util_Collection_add_java_lang_Object_R_boolean, sp[0].o))(ctx, sp[0].o, sp[1].o);
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jbool M_java_util_Collections$CheckedCollection_remove_java_lang_Object_R_boolean(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/Collections$CheckedCollection:remove", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(2861);
	sp[0].o = (jobject)((java_util_Collections$CheckedCollection *) NULL_CHECK((frame[0].o)))->F_c;
	jint temp0 = (jint)((func_java_util_Collection_remove_java_lang_Object_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_Collection, INDEX_java_util_Collection_remove_java_lang_Object_R_boolean, sp[0].o))(ctx, sp[0].o, (frame[1].o));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jbool M_java_util_Collections$CheckedCollection_containsAll_java_util_Collection_R_boolean(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/Collections$CheckedCollection:containsAll", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(2868);
	sp[0].o = (jobject)((java_util_Collections$CheckedCollection *) NULL_CHECK((frame[0].o)))->F_c;
	jint temp0 = (jint)((func_java_util_Collection_containsAll_java_util_Collection_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_Collection, INDEX_java_util_Collection_containsAll_java_util_Collection_R_boolean, sp[0].o))(ctx, sp[0].o, (frame[1].o));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jbool M_java_util_Collections$CheckedCollection_addAll_java_util_Collection_R_boolean(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[7];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/Collections$CheckedCollection:addAll", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(2876);
	sp[0].o = (jobject)((func_java_util_Collection_toArray_R_Array1_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Collection, INDEX_java_util_Collection_toArray_R_Array1_java_lang_Object, (frame[1].o)))(ctx, (frame[1].o));
	frame[2].o = sp[0].o;
	LINE_NUMBER(2877);
	frame[3].o = (frame[2].o);
	frame[4].i = (((jarray) nullCheck(ctx, (frame[3].o)))->length);
	frame[5].i = (jint(0));
	}
label_2:;
	{
	if ((frame[5].i) >= (frame[4].i)) goto label_3;
	}
	{
	frame[6].o = ((jobject)ARRAY_ACCESS(jobject, (frame[3].o), (frame[5].i)));
	LINE_NUMBER(2878);
	sp[0].o = frame[6].o;
	sp[1].o = (jobject)((java_util_Collections$CheckedCollection *) NULL_CHECK((frame[0].o)))->F_type;
	sp[0].o = (jobject)SM_java_util_Collections_checkType_java_lang_Object_java_lang_Class_R_java_lang_Object(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(2877);
	INST_IINC(5, 1);
	goto label_2;
	}
label_3:;
	{
	LINE_NUMBER(2880);
	sp[0].o = (jobject)((java_util_Collections$CheckedCollection *) NULL_CHECK((frame[0].o)))->F_c;
	sp[1].o = (jobject)SM_java_util_Arrays_asList_Array1_java_lang_Object_R_java_util_List(ctx, (frame[2].o));
	jint temp0 = (jint)((func_java_util_Collection_addAll_java_util_Collection_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_Collection, INDEX_java_util_Collection_addAll_java_util_Collection_R_boolean, sp[0].o))(ctx, sp[0].o, sp[1].o);
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jbool M_java_util_Collections$CheckedCollection_removeAll_java_util_Collection_R_boolean(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/Collections$CheckedCollection:removeAll", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(2887);
	sp[0].o = (jobject)((java_util_Collections$CheckedCollection *) NULL_CHECK((frame[0].o)))->F_c;
	jint temp0 = (jint)((func_java_util_Collection_removeAll_java_util_Collection_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_Collection, INDEX_java_util_Collection_removeAll_java_util_Collection_R_boolean, sp[0].o))(ctx, sp[0].o, (frame[1].o));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jbool M_java_util_Collections$CheckedCollection_retainAll_java_util_Collection_R_boolean(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/Collections$CheckedCollection:retainAll", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(2894);
	sp[0].o = (jobject)((java_util_Collections$CheckedCollection *) NULL_CHECK((frame[0].o)))->F_c;
	jint temp0 = (jint)((func_java_util_Collection_retainAll_java_util_Collection_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_Collection, INDEX_java_util_Collection_retainAll_java_util_Collection_R_boolean, sp[0].o))(ctx, sp[0].o, (frame[1].o));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

void M_java_util_Collections$CheckedCollection_clear(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/Collections$CheckedCollection:clear", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(2901);
	sp[0].o = (jobject)((java_util_Collections$CheckedCollection *) NULL_CHECK((frame[0].o)))->F_c;
	((func_java_util_Collection_clear) resolveInterfaceMethod(ctx, &class_java_util_Collection, INDEX_java_util_Collection_clear, sp[0].o))(ctx, sp[0].o);
	LINE_NUMBER(2902);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_java_util_Collections$CheckedCollection_toString_R_java_lang_String(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/Collections$CheckedCollection:toString", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(2909);
	sp[0].o = (jobject)((java_util_Collections$CheckedCollection *) NULL_CHECK((frame[0].o)))->F_c;
	sp[0].o = (jobject)((func_java_lang_Object_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_Object_toString_R_java_lang_String])(ctx, sp[0].o);
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void *vtable_java_util_Collections$CheckedCollection[] {
	(void *) M_java_lang_Object_hashCode_R_int,
	(void *) M_java_lang_Object_equals_java_lang_Object_R_boolean,
	(void *) M_java_lang_Object_clone_R_java_lang_Object,
	(void *) M_java_lang_Object_getClass_R_java_lang_Class,
	(void *) M_java_util_Collections$CheckedCollection_toString_R_java_lang_String,
	(void *) M_java_lang_Object_finalize,
	(void *) M_java_lang_Object_notify,
	(void *) M_java_lang_Object_notifyAll,
	(void *) M_java_lang_Object_wait,
	(void *) M_java_lang_Object_wait_long,
	(void *) M_java_lang_Object_wait_long_int,
	(void *) M_java_util_Collections$CheckedCollection_iterator_R_java_util_Iterator,
	(void *) M_java_lang_Iterable_forEach_java_util_function_Consumer,
	(void *) M_java_util_Collection_spliterator_R_java_util_Spliterator,
	(void *) M_java_util_Collections$CheckedCollection_add_java_lang_Object_R_boolean,
	(void *) M_java_util_Collections$CheckedCollection_addAll_java_util_Collection_R_boolean,
	(void *) M_java_util_Collections$CheckedCollection_clear,
	(void *) M_java_util_Collections$CheckedCollection_contains_java_lang_Object_R_boolean,
	(void *) M_java_util_Collections$CheckedCollection_containsAll_java_util_Collection_R_boolean,
	(void *) M_java_util_Collections$CheckedCollection_isEmpty_R_boolean,
	(void *) M_java_util_Collections$CheckedCollection_remove_java_lang_Object_R_boolean,
	(void *) M_java_util_Collections$CheckedCollection_removeAll_java_util_Collection_R_boolean,
	(void *) M_java_util_Collections$CheckedCollection_retainAll_java_util_Collection_R_boolean,
	(void *) M_java_util_Collections$CheckedCollection_size_R_int,
	(void *) M_java_util_Collections$CheckedCollection_toArray_R_Array1_java_lang_Object,
	(void *) M_java_util_Collections$CheckedCollection_toArray_Array1_java_lang_Object_R_Array1_java_lang_Object,
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
};

static jclass interfaces[] { &class_java_util_Collection, };

static FieldMetadata fields[] {
	{ "serialVersionUID", &class_long, (intptr_t) &SF_java_util_Collections$CheckedCollection_serialVersionUID, "J", 26 },
	{ "c", &class_java_util_Collection, offsetof(java_util_Collections$CheckedCollection, F_c), "Ljava/util/Collection;", 0 },
	{ "type", &class_java_lang_Class, offsetof(java_util_Collections$CheckedCollection, F_type), "Ljava/lang/Class;", 0 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_java_util_Collections$CheckedCollection_java_util_Collection_java_lang_Class, 0, "(Ljava/util/Collection;Ljava/lang/Class;)V", 1 },
	{ "size", (intptr_t) M_java_util_Collections$CheckedCollection_size_R_int, VTABLE_java_util_Collections$CheckedCollection_size_R_int, "()I", 1 },
	{ "isEmpty", (intptr_t) M_java_util_Collections$CheckedCollection_isEmpty_R_boolean, VTABLE_java_util_Collections$CheckedCollection_isEmpty_R_boolean, "()Z", 1 },
	{ "contains", (intptr_t) M_java_util_Collections$CheckedCollection_contains_java_lang_Object_R_boolean, VTABLE_java_util_Collections$CheckedCollection_contains_java_lang_Object_R_boolean, "(Ljava/lang/Object;)Z", 1 },
	{ "iterator", (intptr_t) M_java_util_Collections$CheckedCollection_iterator_R_java_util_Iterator, VTABLE_java_util_Collections$CheckedCollection_iterator_R_java_util_Iterator, "()Ljava/util/Iterator;", 1 },
	{ "toArray", (intptr_t) M_java_util_Collections$CheckedCollection_toArray_R_Array1_java_lang_Object, VTABLE_java_util_Collections$CheckedCollection_toArray_R_Array1_java_lang_Object, "()[Ljava/lang/Object;", 1 },
	{ "toArray", (intptr_t) M_java_util_Collections$CheckedCollection_toArray_Array1_java_lang_Object_R_Array1_java_lang_Object, VTABLE_java_util_Collections$CheckedCollection_toArray_Array1_java_lang_Object_R_Array1_java_lang_Object, "([Ljava/lang/Object;)[Ljava/lang/Object;", 1 },
	{ "add", (intptr_t) M_java_util_Collections$CheckedCollection_add_java_lang_Object_R_boolean, VTABLE_java_util_Collections$CheckedCollection_add_java_lang_Object_R_boolean, "(Ljava/lang/Object;)Z", 1 },
	{ "remove", (intptr_t) M_java_util_Collections$CheckedCollection_remove_java_lang_Object_R_boolean, VTABLE_java_util_Collections$CheckedCollection_remove_java_lang_Object_R_boolean, "(Ljava/lang/Object;)Z", 1 },
	{ "containsAll", (intptr_t) M_java_util_Collections$CheckedCollection_containsAll_java_util_Collection_R_boolean, VTABLE_java_util_Collections$CheckedCollection_containsAll_java_util_Collection_R_boolean, "(Ljava/util/Collection;)Z", 1 },
	{ "addAll", (intptr_t) M_java_util_Collections$CheckedCollection_addAll_java_util_Collection_R_boolean, VTABLE_java_util_Collections$CheckedCollection_addAll_java_util_Collection_R_boolean, "(Ljava/util/Collection;)Z", 1 },
	{ "removeAll", (intptr_t) M_java_util_Collections$CheckedCollection_removeAll_java_util_Collection_R_boolean, VTABLE_java_util_Collections$CheckedCollection_removeAll_java_util_Collection_R_boolean, "(Ljava/util/Collection;)Z", 1 },
	{ "retainAll", (intptr_t) M_java_util_Collections$CheckedCollection_retainAll_java_util_Collection_R_boolean, VTABLE_java_util_Collections$CheckedCollection_retainAll_java_util_Collection_R_boolean, "(Ljava/util/Collection;)Z", 1 },
	{ "clear", (intptr_t) M_java_util_Collections$CheckedCollection_clear, VTABLE_java_util_Collections$CheckedCollection_clear, "()V", 1 },
	{ "toString", (intptr_t) M_java_util_Collections$CheckedCollection_toString_R_java_lang_String, VTABLE_java_util_Collections$CheckedCollection_toString_R_java_lang_String, "()Ljava/lang/String;", 1 },
};

Class class_java_util_Collections$CheckedCollection{
		.nativeName = (intptr_t) "java/util/Collections$CheckedCollection",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(java_util_Collections$CheckedCollection),
		.classVtable = (intptr_t) vtable_java_util_Collections$CheckedCollection,
		.staticInitializer = (intptr_t) clinit_java_util_Collections$CheckedCollection,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_java_util_Collections$CheckedCollection,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) &class_java_util_Collections,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 32,
		.interfaceCount = 1,
		.nativeInterfaces = (intptr_t) interfaces,
		.fieldCount = 3,
		.nativeFields = (intptr_t) fields,
		.methodCount = 15,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 26,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_java_util_Collections$CheckedCollection = registerClass(&class_java_util_Collections$CheckedCollection);

}

