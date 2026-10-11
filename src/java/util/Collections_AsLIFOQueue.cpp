#include "java/util/Collections_AsLIFOQueue.h"
#include "java/util/AbstractQueue.h"
#include "java/util/Collection.h"
#include "java/lang/Object.h"
#include "java/util/Iterator.h"
#include "java/lang/String.h"
#include "java/util/Deque.h"
#include "java/util/Collections.h"
#include "java/util/Collections_AsLIFOQueue.h"
#include "java/lang/Iterable.h"

extern "C" {


void mark_java_util_Collections$AsLIFOQueue(jobject object, jint mark, jint depth) {
	if (!object) {
		return;
	}
	if (depth > GC_DEPTH_ALWAYS && (object->gcMark < GC_MARK_START || object->gcMark == mark))
		return;
	if (depth > MAX_GC_MARK_DEPTH) {
		markDeepObject(object);
		return;
	}
	mark_java_util_AbstractQueue(object, mark, depth);
	if (object->gcMark >= GC_MARK_START)
		object->gcMark = mark;
	auto self = (java_util_Collections$AsLIFOQueue *) object;
	if (self->F_q)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_q)->clazz)->markFunction)((jobject) self->F_q, mark, depth + 1);
}

void clinit_java_util_Collections$AsLIFOQueue(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	clinit_java_util_AbstractQueue(ctx);
}

void init_java_util_Collections$AsLIFOQueue_java_util_Deque(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/Collections$AsLIFOQueue:<init>", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_util_Collections$AsLIFOQueue(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(2685);
	init_java_util_AbstractQueue(ctx, (frame[0].o));
	LINE_NUMBER(2686);
	((java_util_Collections$AsLIFOQueue *) NULL_CHECK((frame[0].o)))->F_q = (jref) (frame[1].o);
	LINE_NUMBER(2687);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_java_util_Collections$AsLIFOQueue_iterator_R_java_util_Iterator(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/Collections$AsLIFOQueue:iterator", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(2691);
	sp[0].o = (jobject)((java_util_Collections$AsLIFOQueue *) NULL_CHECK((frame[0].o)))->F_q;
	sp[0].o = (jobject)((func_java_util_Collection_iterator_R_java_util_Iterator) resolveInterfaceMethod(ctx, &class_java_util_Collection, INDEX_java_util_Collection_iterator_R_java_util_Iterator, sp[0].o))(ctx, sp[0].o);
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jint M_java_util_Collections$AsLIFOQueue_size_R_int(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/Collections$AsLIFOQueue:size", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(2696);
	sp[0].o = (jobject)((java_util_Collections$AsLIFOQueue *) NULL_CHECK((frame[0].o)))->F_q;
	jint temp0 = (jint)((func_java_util_Collection_size_R_int) resolveInterfaceMethod(ctx, &class_java_util_Collection, INDEX_java_util_Collection_size_R_int, sp[0].o))(ctx, sp[0].o);
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jbool M_java_util_Collections$AsLIFOQueue_offer_java_lang_Object_R_boolean(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/Collections$AsLIFOQueue:offer", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(2700);
	sp[0].o = (jobject)((java_util_Collections$AsLIFOQueue *) NULL_CHECK((frame[0].o)))->F_q;
	jint temp0 = (jint)((func_java_util_Deque_offerFirst_java_lang_Object_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_Deque, INDEX_java_util_Deque_offerFirst_java_lang_Object_R_boolean, sp[0].o))(ctx, sp[0].o, (frame[1].o));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jobject M_java_util_Collections$AsLIFOQueue_peek_R_java_lang_Object(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/Collections$AsLIFOQueue:peek", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(2704);
	sp[0].o = (jobject)((java_util_Collections$AsLIFOQueue *) NULL_CHECK((frame[0].o)))->F_q;
	sp[0].o = (jobject)((func_java_util_Deque_peekFirst_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Deque, INDEX_java_util_Deque_peekFirst_R_java_lang_Object, sp[0].o))(ctx, sp[0].o);
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_java_util_Collections$AsLIFOQueue_poll_R_java_lang_Object(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/Collections$AsLIFOQueue:poll", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(2708);
	sp[0].o = (jobject)((java_util_Collections$AsLIFOQueue *) NULL_CHECK((frame[0].o)))->F_q;
	sp[0].o = (jobject)((func_java_util_Deque_pollFirst_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Deque, INDEX_java_util_Deque_pollFirst_R_java_lang_Object, sp[0].o))(ctx, sp[0].o);
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jbool M_java_util_Collections$AsLIFOQueue_add_java_lang_Object_R_boolean(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/Collections$AsLIFOQueue:add", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(2713);
	sp[0].o = (jobject)((java_util_Collections$AsLIFOQueue *) NULL_CHECK((frame[0].o)))->F_q;
	((func_java_util_Deque_push_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Deque, INDEX_java_util_Deque_push_java_lang_Object, sp[0].o))(ctx, sp[0].o, (frame[1].o));
	LINE_NUMBER(2714);
	popStackFrame(ctx);
	return (jint(1));
	}

	popStackFrame(ctx);
}

void M_java_util_Collections$AsLIFOQueue_clear(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/Collections$AsLIFOQueue:clear", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(2719);
	sp[0].o = (jobject)((java_util_Collections$AsLIFOQueue *) NULL_CHECK((frame[0].o)))->F_q;
	((func_java_util_Collection_clear) resolveInterfaceMethod(ctx, &class_java_util_Collection, INDEX_java_util_Collection_clear, sp[0].o))(ctx, sp[0].o);
	LINE_NUMBER(2720);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_java_util_Collections$AsLIFOQueue_element_R_java_lang_Object(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/Collections$AsLIFOQueue:element", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(2724);
	sp[0].o = (jobject)((java_util_Collections$AsLIFOQueue *) NULL_CHECK((frame[0].o)))->F_q;
	sp[0].o = (jobject)((func_java_util_Deque_getFirst_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Deque, INDEX_java_util_Deque_getFirst_R_java_lang_Object, sp[0].o))(ctx, sp[0].o);
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_java_util_Collections$AsLIFOQueue_remove_R_java_lang_Object(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/Collections$AsLIFOQueue:remove", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(2729);
	sp[0].o = (jobject)((java_util_Collections$AsLIFOQueue *) NULL_CHECK((frame[0].o)))->F_q;
	sp[0].o = (jobject)((func_java_util_Deque_pop_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Deque, INDEX_java_util_Deque_pop_R_java_lang_Object, sp[0].o))(ctx, sp[0].o);
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jbool M_java_util_Collections$AsLIFOQueue_contains_java_lang_Object_R_boolean(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/Collections$AsLIFOQueue:contains", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(2734);
	sp[0].o = (jobject)((java_util_Collections$AsLIFOQueue *) NULL_CHECK((frame[0].o)))->F_q;
	jint temp0 = (jint)((func_java_util_Collection_contains_java_lang_Object_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_Collection, INDEX_java_util_Collection_contains_java_lang_Object_R_boolean, sp[0].o))(ctx, sp[0].o, (frame[1].o));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jbool M_java_util_Collections$AsLIFOQueue_containsAll_java_util_Collection_R_boolean(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/Collections$AsLIFOQueue:containsAll", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(2739);
	sp[0].o = (jobject)((java_util_Collections$AsLIFOQueue *) NULL_CHECK((frame[0].o)))->F_q;
	jint temp0 = (jint)((func_java_util_Collection_containsAll_java_util_Collection_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_Collection, INDEX_java_util_Collection_containsAll_java_util_Collection_R_boolean, sp[0].o))(ctx, sp[0].o, (frame[1].o));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jbool M_java_util_Collections$AsLIFOQueue_isEmpty_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/Collections$AsLIFOQueue:isEmpty", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(2744);
	sp[0].o = (jobject)((java_util_Collections$AsLIFOQueue *) NULL_CHECK((frame[0].o)))->F_q;
	jint temp0 = (jint)((func_java_util_Collection_isEmpty_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_Collection, INDEX_java_util_Collection_isEmpty_R_boolean, sp[0].o))(ctx, sp[0].o);
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jbool M_java_util_Collections$AsLIFOQueue_remove_java_lang_Object_R_boolean(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/Collections$AsLIFOQueue:remove", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(2749);
	sp[0].o = (jobject)((java_util_Collections$AsLIFOQueue *) NULL_CHECK((frame[0].o)))->F_q;
	jint temp0 = (jint)((func_java_util_Collection_remove_java_lang_Object_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_Collection, INDEX_java_util_Collection_remove_java_lang_Object_R_boolean, sp[0].o))(ctx, sp[0].o, (frame[1].o));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jbool M_java_util_Collections$AsLIFOQueue_removeAll_java_util_Collection_R_boolean(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/Collections$AsLIFOQueue:removeAll", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(2754);
	sp[0].o = (jobject)((java_util_Collections$AsLIFOQueue *) NULL_CHECK((frame[0].o)))->F_q;
	jint temp0 = (jint)((func_java_util_Collection_removeAll_java_util_Collection_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_Collection, INDEX_java_util_Collection_removeAll_java_util_Collection_R_boolean, sp[0].o))(ctx, sp[0].o, (frame[1].o));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jbool M_java_util_Collections$AsLIFOQueue_retainAll_java_util_Collection_R_boolean(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/Collections$AsLIFOQueue:retainAll", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(2759);
	sp[0].o = (jobject)((java_util_Collections$AsLIFOQueue *) NULL_CHECK((frame[0].o)))->F_q;
	jint temp0 = (jint)((func_java_util_Collection_retainAll_java_util_Collection_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_Collection, INDEX_java_util_Collection_retainAll_java_util_Collection_R_boolean, sp[0].o))(ctx, sp[0].o, (frame[1].o));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jobject M_java_util_Collections$AsLIFOQueue_toArray_R_Array1_java_lang_Object(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/Collections$AsLIFOQueue:toArray", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(2764);
	sp[0].o = (jobject)((java_util_Collections$AsLIFOQueue *) NULL_CHECK((frame[0].o)))->F_q;
	sp[0].o = (jobject)((func_java_util_Collection_toArray_R_Array1_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Collection, INDEX_java_util_Collection_toArray_R_Array1_java_lang_Object, sp[0].o))(ctx, sp[0].o);
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_java_util_Collections$AsLIFOQueue_toArray_Array1_java_lang_Object_R_Array1_java_lang_Object(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/Collections$AsLIFOQueue:toArray", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(2769);
	sp[0].o = (jobject)((java_util_Collections$AsLIFOQueue *) NULL_CHECK((frame[0].o)))->F_q;
	sp[0].o = (jobject)((func_java_util_Collection_toArray_Array1_java_lang_Object_R_Array1_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Collection, INDEX_java_util_Collection_toArray_Array1_java_lang_Object_R_Array1_java_lang_Object, sp[0].o))(ctx, sp[0].o, (frame[1].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_java_util_Collections$AsLIFOQueue_toString_R_java_lang_String(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/Collections$AsLIFOQueue:toString", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(2774);
	sp[0].o = (jobject)((java_util_Collections$AsLIFOQueue *) NULL_CHECK((frame[0].o)))->F_q;
	sp[0].o = (jobject)((func_java_lang_Object_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_Object_toString_R_java_lang_String])(ctx, sp[0].o);
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void *vtable_java_util_Collections$AsLIFOQueue[] {
	(void *) M_java_lang_Object_hashCode_R_int,
	(void *) M_java_lang_Object_equals_java_lang_Object_R_boolean,
	(void *) M_java_lang_Object_clone_R_java_lang_Object,
	(void *) M_java_lang_Object_getClass_R_java_lang_Class,
	(void *) M_java_util_Collections$AsLIFOQueue_toString_R_java_lang_String,
	(void *) M_java_lang_Object_finalize,
	(void *) M_java_lang_Object_notify,
	(void *) M_java_lang_Object_notifyAll,
	(void *) M_java_lang_Object_wait,
	(void *) M_java_lang_Object_wait_long,
	(void *) M_java_lang_Object_wait_long_int,
	(void *) M_java_util_Collections$AsLIFOQueue_iterator_R_java_util_Iterator,
	(void *) M_java_lang_Iterable_forEach_java_util_function_Consumer,
	(void *) M_java_util_Collection_spliterator_R_java_util_Spliterator,
	(void *) M_java_util_Collections$AsLIFOQueue_add_java_lang_Object_R_boolean,
	(void *) M_java_util_AbstractQueue_addAll_java_util_Collection_R_boolean,
	(void *) M_java_util_Collections$AsLIFOQueue_clear,
	(void *) M_java_util_Collections$AsLIFOQueue_contains_java_lang_Object_R_boolean,
	(void *) M_java_util_Collections$AsLIFOQueue_containsAll_java_util_Collection_R_boolean,
	(void *) M_java_util_Collections$AsLIFOQueue_isEmpty_R_boolean,
	(void *) M_java_util_Collections$AsLIFOQueue_remove_java_lang_Object_R_boolean,
	(void *) M_java_util_Collections$AsLIFOQueue_removeAll_java_util_Collection_R_boolean,
	(void *) M_java_util_Collections$AsLIFOQueue_retainAll_java_util_Collection_R_boolean,
	(void *) M_java_util_Collections$AsLIFOQueue_size_R_int,
	(void *) M_java_util_Collections$AsLIFOQueue_toArray_R_Array1_java_lang_Object,
	(void *) M_java_util_Collections$AsLIFOQueue_toArray_Array1_java_lang_Object_R_Array1_java_lang_Object,
	(void *) M_java_util_Collections$AsLIFOQueue_offer_java_lang_Object_R_boolean,
	(void *) M_java_util_Collections$AsLIFOQueue_poll_R_java_lang_Object,
	(void *) M_java_util_Collections$AsLIFOQueue_remove_R_java_lang_Object,
	(void *) M_java_util_Collections$AsLIFOQueue_peek_R_java_lang_Object,
	(void *) M_java_util_Collections$AsLIFOQueue_element_R_java_lang_Object,
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
	{ "offer", "(Ljava/lang/Object;)Z" },
	{ "poll", "()Ljava/lang/Object;" },
	{ "remove", "()Ljava/lang/Object;" },
	{ "peek", "()Ljava/lang/Object;" },
	{ "element", "()Ljava/lang/Object;" },
};

static FieldMetadata fields[] {
	{ "q", &class_java_util_Deque, offsetof(java_util_Collections$AsLIFOQueue, F_q), "Ljava/util/Deque;", 18 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_java_util_Collections$AsLIFOQueue_java_util_Deque, 0, "(Ljava/util/Deque;)V", 0 },
	{ "iterator", (intptr_t) M_java_util_Collections$AsLIFOQueue_iterator_R_java_util_Iterator, VTABLE_java_util_Collections$AsLIFOQueue_iterator_R_java_util_Iterator, "()Ljava/util/Iterator;", 1 },
	{ "size", (intptr_t) M_java_util_Collections$AsLIFOQueue_size_R_int, VTABLE_java_util_Collections$AsLIFOQueue_size_R_int, "()I", 1 },
	{ "offer", (intptr_t) M_java_util_Collections$AsLIFOQueue_offer_java_lang_Object_R_boolean, VTABLE_java_util_Collections$AsLIFOQueue_offer_java_lang_Object_R_boolean, "(Ljava/lang/Object;)Z", 1 },
	{ "peek", (intptr_t) M_java_util_Collections$AsLIFOQueue_peek_R_java_lang_Object, VTABLE_java_util_Collections$AsLIFOQueue_peek_R_java_lang_Object, "()Ljava/lang/Object;", 1 },
	{ "poll", (intptr_t) M_java_util_Collections$AsLIFOQueue_poll_R_java_lang_Object, VTABLE_java_util_Collections$AsLIFOQueue_poll_R_java_lang_Object, "()Ljava/lang/Object;", 1 },
	{ "add", (intptr_t) M_java_util_Collections$AsLIFOQueue_add_java_lang_Object_R_boolean, VTABLE_java_util_Collections$AsLIFOQueue_add_java_lang_Object_R_boolean, "(Ljava/lang/Object;)Z", 1 },
	{ "clear", (intptr_t) M_java_util_Collections$AsLIFOQueue_clear, VTABLE_java_util_Collections$AsLIFOQueue_clear, "()V", 1 },
	{ "element", (intptr_t) M_java_util_Collections$AsLIFOQueue_element_R_java_lang_Object, VTABLE_java_util_Collections$AsLIFOQueue_element_R_java_lang_Object, "()Ljava/lang/Object;", 1 },
	{ "remove", (intptr_t) M_java_util_Collections$AsLIFOQueue_remove_R_java_lang_Object, VTABLE_java_util_Collections$AsLIFOQueue_remove_R_java_lang_Object, "()Ljava/lang/Object;", 1 },
	{ "contains", (intptr_t) M_java_util_Collections$AsLIFOQueue_contains_java_lang_Object_R_boolean, VTABLE_java_util_Collections$AsLIFOQueue_contains_java_lang_Object_R_boolean, "(Ljava/lang/Object;)Z", 1 },
	{ "containsAll", (intptr_t) M_java_util_Collections$AsLIFOQueue_containsAll_java_util_Collection_R_boolean, VTABLE_java_util_Collections$AsLIFOQueue_containsAll_java_util_Collection_R_boolean, "(Ljava/util/Collection;)Z", 1 },
	{ "isEmpty", (intptr_t) M_java_util_Collections$AsLIFOQueue_isEmpty_R_boolean, VTABLE_java_util_Collections$AsLIFOQueue_isEmpty_R_boolean, "()Z", 1 },
	{ "remove", (intptr_t) M_java_util_Collections$AsLIFOQueue_remove_java_lang_Object_R_boolean, VTABLE_java_util_Collections$AsLIFOQueue_remove_java_lang_Object_R_boolean, "(Ljava/lang/Object;)Z", 1 },
	{ "removeAll", (intptr_t) M_java_util_Collections$AsLIFOQueue_removeAll_java_util_Collection_R_boolean, VTABLE_java_util_Collections$AsLIFOQueue_removeAll_java_util_Collection_R_boolean, "(Ljava/util/Collection;)Z", 1 },
	{ "retainAll", (intptr_t) M_java_util_Collections$AsLIFOQueue_retainAll_java_util_Collection_R_boolean, VTABLE_java_util_Collections$AsLIFOQueue_retainAll_java_util_Collection_R_boolean, "(Ljava/util/Collection;)Z", 1 },
	{ "toArray", (intptr_t) M_java_util_Collections$AsLIFOQueue_toArray_R_Array1_java_lang_Object, VTABLE_java_util_Collections$AsLIFOQueue_toArray_R_Array1_java_lang_Object, "()[Ljava/lang/Object;", 1 },
	{ "toArray", (intptr_t) M_java_util_Collections$AsLIFOQueue_toArray_Array1_java_lang_Object_R_Array1_java_lang_Object, VTABLE_java_util_Collections$AsLIFOQueue_toArray_Array1_java_lang_Object_R_Array1_java_lang_Object, "([Ljava/lang/Object;)[Ljava/lang/Object;", 1 },
	{ "toString", (intptr_t) M_java_util_Collections$AsLIFOQueue_toString_R_java_lang_String, VTABLE_java_util_Collections$AsLIFOQueue_toString_R_java_lang_String, "()Ljava/lang/String;", 1 },
};

Class class_java_util_Collections$AsLIFOQueue{
		.nativeName = (intptr_t) "java/util/Collections$AsLIFOQueue",
		.parentClass = (intptr_t) &class_java_util_AbstractQueue,
		.size = sizeof(java_util_Collections$AsLIFOQueue),
		.classVtable = (intptr_t) vtable_java_util_Collections$AsLIFOQueue,
		.staticInitializer = (intptr_t) clinit_java_util_Collections$AsLIFOQueue,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_java_util_Collections$AsLIFOQueue,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) &class_java_util_Collections,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 32,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 1,
		.nativeFields = (intptr_t) fields,
		.methodCount = 19,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 31,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_java_util_Collections$AsLIFOQueue = registerClass(&class_java_util_Collections$AsLIFOQueue);

}

