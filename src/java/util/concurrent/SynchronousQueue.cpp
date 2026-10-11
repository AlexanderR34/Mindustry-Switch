#include "java/util/concurrent/SynchronousQueue.h"
#include "java/util/AbstractQueue.h"
#include "java/util/concurrent/ArrayBlockingQueue.h"
#include "java/util/Collection.h"
#include "java/io/Serializable.h"
#include "java/lang/Object.h"
#include "java/util/Iterator.h"
#include "java/util/Queue.h"
#include "java/util/concurrent/TimeUnit.h"
#include "java/lang/Iterable.h"
#include "java/util/concurrent/SynchronousQueue.h"
#include "java/util/concurrent/BlockingQueue.h"
#include "java/util/AbstractCollection.h"

extern "C" {


void mark_java_util_concurrent_SynchronousQueue(jobject object, jint mark, jint depth) {
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
	auto self = (java_util_concurrent_SynchronousQueue *) object;
	if (self->F_queue)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_queue)->clazz)->markFunction)((jobject) self->F_queue, mark, depth + 1);
}

void clinit_java_util_concurrent_SynchronousQueue(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	clinit_java_util_AbstractQueue(ctx);
}

void init_java_util_concurrent_SynchronousQueue(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/concurrent/SynchronousQueue:<init>", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_util_concurrent_SynchronousQueue(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(7);
	init_java_util_AbstractQueue(ctx, (frame[0].o));
	LINE_NUMBER(9);
	sp[0].o = frame[0].o;
	clinit_java_util_concurrent_ArrayBlockingQueue(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_util_concurrent_ArrayBlockingQueue);
	init_java_util_concurrent_ArrayBlockingQueue_int(ctx, sp[1].o, (jint(4)));
	((java_util_concurrent_SynchronousQueue *) NULL_CHECK(sp[0].o))->F_queue = (jref) sp[1].o;
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jbool M_java_util_concurrent_SynchronousQueue_add_java_lang_Object_R_boolean(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/concurrent/SynchronousQueue:add", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(13);
	sp[0].o = (jobject)((java_util_concurrent_SynchronousQueue *) NULL_CHECK((frame[0].o)))->F_queue;
	jint temp0 = (jint)((func_java_util_concurrent_ArrayBlockingQueue_add_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_concurrent_ArrayBlockingQueue_add_java_lang_Object_R_boolean])(ctx, sp[0].o, (frame[1].o));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jbool M_java_util_concurrent_SynchronousQueue_offer_java_lang_Object_R_boolean(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/concurrent/SynchronousQueue:offer", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(18);
	sp[0].o = (jobject)((java_util_concurrent_SynchronousQueue *) NULL_CHECK((frame[0].o)))->F_queue;
	jint temp0 = (jint)((func_java_util_concurrent_ArrayBlockingQueue_offer_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_concurrent_ArrayBlockingQueue_offer_java_lang_Object_R_boolean])(ctx, sp[0].o, (frame[1].o));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jobject M_java_util_concurrent_SynchronousQueue_remove_R_java_lang_Object(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/concurrent/SynchronousQueue:remove", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(23);
	sp[0].o = (jobject)((java_util_concurrent_SynchronousQueue *) NULL_CHECK((frame[0].o)))->F_queue;
	sp[0].o = (jobject)((func_java_util_concurrent_ArrayBlockingQueue_remove_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_concurrent_ArrayBlockingQueue_remove_R_java_lang_Object])(ctx, sp[0].o);
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_java_util_concurrent_SynchronousQueue_poll_R_java_lang_Object(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/concurrent/SynchronousQueue:poll", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(28);
	sp[0].o = (jobject)((java_util_concurrent_SynchronousQueue *) NULL_CHECK((frame[0].o)))->F_queue;
	sp[0].o = (jobject)((func_java_util_concurrent_ArrayBlockingQueue_poll_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_concurrent_ArrayBlockingQueue_poll_R_java_lang_Object])(ctx, sp[0].o);
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_java_util_concurrent_SynchronousQueue_element_R_java_lang_Object(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/concurrent/SynchronousQueue:element", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(33);
	sp[0].o = (jobject)((java_util_concurrent_SynchronousQueue *) NULL_CHECK((frame[0].o)))->F_queue;
	sp[0].o = (jobject)((func_java_util_concurrent_ArrayBlockingQueue_element_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_concurrent_ArrayBlockingQueue_element_R_java_lang_Object])(ctx, sp[0].o);
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_java_util_concurrent_SynchronousQueue_peek_R_java_lang_Object(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/concurrent/SynchronousQueue:peek", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(38);
	sp[0].o = (jobject)((java_util_concurrent_SynchronousQueue *) NULL_CHECK((frame[0].o)))->F_queue;
	sp[0].o = (jobject)((func_java_util_concurrent_ArrayBlockingQueue_peek_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_concurrent_ArrayBlockingQueue_peek_R_java_lang_Object])(ctx, sp[0].o);
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void M_java_util_concurrent_SynchronousQueue_put_java_lang_Object(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/concurrent/SynchronousQueue:put", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(43);
	sp[0].o = (jobject)((java_util_concurrent_SynchronousQueue *) NULL_CHECK((frame[0].o)))->F_queue;
	((func_java_util_concurrent_ArrayBlockingQueue_put_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_concurrent_ArrayBlockingQueue_put_java_lang_Object])(ctx, sp[0].o, (frame[1].o));
	LINE_NUMBER(44);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jbool M_java_util_concurrent_SynchronousQueue_offer_java_lang_Object_long_java_util_concurrent_TimeUnit_R_boolean(jcontext ctx, jobject self, jobject param0, jlong param1, jobject param2) {
	NULL_CHECK(self);
	jtype frame[10];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/concurrent/SynchronousQueue:offer", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].l = param1;
	frame[4].o = param2;
	{
	LINE_NUMBER(48);
	sp[0].o = (jobject)((java_util_concurrent_SynchronousQueue *) NULL_CHECK((frame[0].o)))->F_queue;
	jint temp0 = (jint)((func_java_util_concurrent_ArrayBlockingQueue_offer_java_lang_Object_long_java_util_concurrent_TimeUnit_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_concurrent_ArrayBlockingQueue_offer_java_lang_Object_long_java_util_concurrent_TimeUnit_R_boolean])(ctx, sp[0].o, (frame[1].o), (frame[2].l), (frame[4].o));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jobject M_java_util_concurrent_SynchronousQueue_take_R_java_lang_Object(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/concurrent/SynchronousQueue:take", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(53);
	sp[0].o = (jobject)((java_util_concurrent_SynchronousQueue *) NULL_CHECK((frame[0].o)))->F_queue;
	sp[0].o = (jobject)((func_java_util_concurrent_ArrayBlockingQueue_take_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_concurrent_ArrayBlockingQueue_take_R_java_lang_Object])(ctx, sp[0].o);
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_java_util_concurrent_SynchronousQueue_poll_long_java_util_concurrent_TimeUnit_R_java_lang_Object(jcontext ctx, jobject self, jlong param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/concurrent/SynchronousQueue:poll", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].l = param0;
	frame[3].o = param1;
	{
	LINE_NUMBER(58);
	sp[0].o = (jobject)((java_util_concurrent_SynchronousQueue *) NULL_CHECK((frame[0].o)))->F_queue;
	sp[0].o = (jobject)((func_java_util_concurrent_ArrayBlockingQueue_poll_long_java_util_concurrent_TimeUnit_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_concurrent_ArrayBlockingQueue_poll_long_java_util_concurrent_TimeUnit_R_java_lang_Object])(ctx, sp[0].o, (frame[1].l), (frame[3].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jint M_java_util_concurrent_SynchronousQueue_remainingCapacity_R_int(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/concurrent/SynchronousQueue:remainingCapacity", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(63);
	sp[0].o = (jobject)((java_util_concurrent_SynchronousQueue *) NULL_CHECK((frame[0].o)))->F_queue;
	jint temp0 = (jint)((func_java_util_concurrent_ArrayBlockingQueue_remainingCapacity_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_concurrent_ArrayBlockingQueue_remainingCapacity_R_int])(ctx, sp[0].o);
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jbool M_java_util_concurrent_SynchronousQueue_remove_java_lang_Object_R_boolean(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/concurrent/SynchronousQueue:remove", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(68);
	sp[0].o = (jobject)((java_util_concurrent_SynchronousQueue *) NULL_CHECK((frame[0].o)))->F_queue;
	jint temp0 = (jint)((func_java_util_concurrent_ArrayBlockingQueue_remove_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_concurrent_ArrayBlockingQueue_remove_java_lang_Object_R_boolean])(ctx, sp[0].o, (frame[1].o));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jbool M_java_util_concurrent_SynchronousQueue_containsAll_java_util_Collection_R_boolean(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/concurrent/SynchronousQueue:containsAll", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(73);
	sp[0].o = (jobject)((java_util_concurrent_SynchronousQueue *) NULL_CHECK((frame[0].o)))->F_queue;
	jint temp0 = (jint)((func_java_util_concurrent_ArrayBlockingQueue_containsAll_java_util_Collection_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_concurrent_ArrayBlockingQueue_containsAll_java_util_Collection_R_boolean])(ctx, sp[0].o, (frame[1].o));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jbool M_java_util_concurrent_SynchronousQueue_addAll_java_util_Collection_R_boolean(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/concurrent/SynchronousQueue:addAll", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(78);
	sp[0].o = (jobject)((java_util_concurrent_SynchronousQueue *) NULL_CHECK((frame[0].o)))->F_queue;
	jint temp0 = (jint)((func_java_util_concurrent_ArrayBlockingQueue_addAll_java_util_Collection_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_concurrent_ArrayBlockingQueue_addAll_java_util_Collection_R_boolean])(ctx, sp[0].o, (frame[1].o));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jbool M_java_util_concurrent_SynchronousQueue_removeAll_java_util_Collection_R_boolean(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/concurrent/SynchronousQueue:removeAll", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(83);
	sp[0].o = (jobject)((java_util_concurrent_SynchronousQueue *) NULL_CHECK((frame[0].o)))->F_queue;
	jint temp0 = (jint)((func_java_util_concurrent_ArrayBlockingQueue_removeAll_java_util_Collection_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_concurrent_ArrayBlockingQueue_removeAll_java_util_Collection_R_boolean])(ctx, sp[0].o, (frame[1].o));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jbool M_java_util_concurrent_SynchronousQueue_retainAll_java_util_Collection_R_boolean(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/concurrent/SynchronousQueue:retainAll", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(88);
	sp[0].o = (jobject)((java_util_concurrent_SynchronousQueue *) NULL_CHECK((frame[0].o)))->F_queue;
	jint temp0 = (jint)((func_java_util_concurrent_ArrayBlockingQueue_retainAll_java_util_Collection_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_concurrent_ArrayBlockingQueue_retainAll_java_util_Collection_R_boolean])(ctx, sp[0].o, (frame[1].o));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

void M_java_util_concurrent_SynchronousQueue_clear(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/concurrent/SynchronousQueue:clear", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(93);
	sp[0].o = (jobject)((java_util_concurrent_SynchronousQueue *) NULL_CHECK((frame[0].o)))->F_queue;
	((func_java_util_concurrent_ArrayBlockingQueue_clear) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_concurrent_ArrayBlockingQueue_clear])(ctx, sp[0].o);
	LINE_NUMBER(94);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jbool M_java_util_concurrent_SynchronousQueue_equals_java_lang_Object_R_boolean(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/concurrent/SynchronousQueue:equals", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(98);
	sp[0].o = (jobject)((java_util_concurrent_SynchronousQueue *) NULL_CHECK((frame[0].o)))->F_queue;
	jint temp0 = (jint)((func_java_lang_Object_equals_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_Object_equals_java_lang_Object_R_boolean])(ctx, sp[0].o, (frame[1].o));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jint M_java_util_concurrent_SynchronousQueue_hashCode_R_int(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/concurrent/SynchronousQueue:hashCode", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(103);
	sp[0].o = (jobject)((java_util_concurrent_SynchronousQueue *) NULL_CHECK((frame[0].o)))->F_queue;
	jint temp0 = (jint)((func_java_lang_Object_hashCode_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_Object_hashCode_R_int])(ctx, sp[0].o);
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jint M_java_util_concurrent_SynchronousQueue_size_R_int(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/concurrent/SynchronousQueue:size", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(108);
	sp[0].o = (jobject)((java_util_concurrent_SynchronousQueue *) NULL_CHECK((frame[0].o)))->F_queue;
	jint temp0 = (jint)((func_java_util_concurrent_ArrayBlockingQueue_size_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_concurrent_ArrayBlockingQueue_size_R_int])(ctx, sp[0].o);
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jbool M_java_util_concurrent_SynchronousQueue_isEmpty_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/concurrent/SynchronousQueue:isEmpty", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(113);
	sp[0].o = (jobject)((java_util_concurrent_SynchronousQueue *) NULL_CHECK((frame[0].o)))->F_queue;
	jint temp0 = (jint)((func_java_util_concurrent_ArrayBlockingQueue_isEmpty_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_concurrent_ArrayBlockingQueue_isEmpty_R_boolean])(ctx, sp[0].o);
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jbool M_java_util_concurrent_SynchronousQueue_contains_java_lang_Object_R_boolean(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/concurrent/SynchronousQueue:contains", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(118);
	sp[0].o = (jobject)((java_util_concurrent_SynchronousQueue *) NULL_CHECK((frame[0].o)))->F_queue;
	jint temp0 = (jint)((func_java_util_concurrent_ArrayBlockingQueue_contains_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_concurrent_ArrayBlockingQueue_contains_java_lang_Object_R_boolean])(ctx, sp[0].o, (frame[1].o));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jobject M_java_util_concurrent_SynchronousQueue_iterator_R_java_util_Iterator(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/concurrent/SynchronousQueue:iterator", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(123);
	sp[0].o = (jobject)((java_util_concurrent_SynchronousQueue *) NULL_CHECK((frame[0].o)))->F_queue;
	sp[0].o = (jobject)((func_java_util_concurrent_ArrayBlockingQueue_iterator_R_java_util_Iterator) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_concurrent_ArrayBlockingQueue_iterator_R_java_util_Iterator])(ctx, sp[0].o);
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_java_util_concurrent_SynchronousQueue_toArray_R_Array1_java_lang_Object(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/concurrent/SynchronousQueue:toArray", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(128);
	sp[0].o = (jobject)((java_util_concurrent_SynchronousQueue *) NULL_CHECK((frame[0].o)))->F_queue;
	sp[0].o = (jobject)((func_java_util_concurrent_ArrayBlockingQueue_toArray_R_Array1_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_concurrent_ArrayBlockingQueue_toArray_R_Array1_java_lang_Object])(ctx, sp[0].o);
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_java_util_concurrent_SynchronousQueue_toArray_Array1_java_lang_Object_R_Array1_java_lang_Object(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/concurrent/SynchronousQueue:toArray", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(133);
	sp[0].o = (jobject)((java_util_concurrent_SynchronousQueue *) NULL_CHECK((frame[0].o)))->F_queue;
	sp[0].o = (jobject)((func_java_util_concurrent_ArrayBlockingQueue_toArray_Array1_java_lang_Object_R_Array1_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_concurrent_ArrayBlockingQueue_toArray_Array1_java_lang_Object_R_Array1_java_lang_Object])(ctx, sp[0].o, (frame[1].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jint M_java_util_concurrent_SynchronousQueue_drainTo_java_util_Collection_R_int(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/concurrent/SynchronousQueue:drainTo", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(138);
	sp[0].o = (jobject)((java_util_concurrent_SynchronousQueue *) NULL_CHECK((frame[0].o)))->F_queue;
	jint temp0 = (jint)((func_java_util_concurrent_ArrayBlockingQueue_drainTo_java_util_Collection_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_concurrent_ArrayBlockingQueue_drainTo_java_util_Collection_R_int])(ctx, sp[0].o, (frame[1].o));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jint M_java_util_concurrent_SynchronousQueue_drainTo_java_util_Collection_int_R_int(jcontext ctx, jobject self, jobject param0, jint param1) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/concurrent/SynchronousQueue:drainTo", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(143);
	sp[0].o = (jobject)((java_util_concurrent_SynchronousQueue *) NULL_CHECK((frame[0].o)))->F_queue;
	jint temp0 = (jint)((func_java_util_concurrent_ArrayBlockingQueue_drainTo_java_util_Collection_int_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_concurrent_ArrayBlockingQueue_drainTo_java_util_Collection_int_R_int])(ctx, sp[0].o, (frame[1].o), (frame[2].i));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

void *vtable_java_util_concurrent_SynchronousQueue[] {
	(void *) M_java_util_concurrent_SynchronousQueue_hashCode_R_int,
	(void *) M_java_util_concurrent_SynchronousQueue_equals_java_lang_Object_R_boolean,
	(void *) M_java_lang_Object_clone_R_java_lang_Object,
	(void *) M_java_lang_Object_getClass_R_java_lang_Class,
	(void *) M_java_util_AbstractCollection_toString_R_java_lang_String,
	(void *) M_java_lang_Object_finalize,
	(void *) M_java_lang_Object_notify,
	(void *) M_java_lang_Object_notifyAll,
	(void *) M_java_lang_Object_wait,
	(void *) M_java_lang_Object_wait_long,
	(void *) M_java_lang_Object_wait_long_int,
	(void *) M_java_util_concurrent_SynchronousQueue_iterator_R_java_util_Iterator,
	(void *) M_java_lang_Iterable_forEach_java_util_function_Consumer,
	(void *) M_java_util_Collection_spliterator_R_java_util_Spliterator,
	(void *) M_java_util_concurrent_SynchronousQueue_add_java_lang_Object_R_boolean,
	(void *) M_java_util_concurrent_SynchronousQueue_addAll_java_util_Collection_R_boolean,
	(void *) M_java_util_concurrent_SynchronousQueue_clear,
	(void *) M_java_util_concurrent_SynchronousQueue_contains_java_lang_Object_R_boolean,
	(void *) M_java_util_concurrent_SynchronousQueue_containsAll_java_util_Collection_R_boolean,
	(void *) M_java_util_concurrent_SynchronousQueue_isEmpty_R_boolean,
	(void *) M_java_util_concurrent_SynchronousQueue_remove_java_lang_Object_R_boolean,
	(void *) M_java_util_concurrent_SynchronousQueue_removeAll_java_util_Collection_R_boolean,
	(void *) M_java_util_concurrent_SynchronousQueue_retainAll_java_util_Collection_R_boolean,
	(void *) M_java_util_concurrent_SynchronousQueue_size_R_int,
	(void *) M_java_util_concurrent_SynchronousQueue_toArray_R_Array1_java_lang_Object,
	(void *) M_java_util_concurrent_SynchronousQueue_toArray_Array1_java_lang_Object_R_Array1_java_lang_Object,
	(void *) M_java_util_concurrent_SynchronousQueue_offer_java_lang_Object_R_boolean,
	(void *) M_java_util_concurrent_SynchronousQueue_poll_R_java_lang_Object,
	(void *) M_java_util_concurrent_SynchronousQueue_remove_R_java_lang_Object,
	(void *) M_java_util_concurrent_SynchronousQueue_peek_R_java_lang_Object,
	(void *) M_java_util_concurrent_SynchronousQueue_element_R_java_lang_Object,
	(void *) M_java_util_concurrent_SynchronousQueue_put_java_lang_Object,
	(void *) M_java_util_concurrent_SynchronousQueue_offer_java_lang_Object_long_java_util_concurrent_TimeUnit_R_boolean,
	(void *) M_java_util_concurrent_SynchronousQueue_take_R_java_lang_Object,
	(void *) M_java_util_concurrent_SynchronousQueue_poll_long_java_util_concurrent_TimeUnit_R_java_lang_Object,
	(void *) M_java_util_concurrent_SynchronousQueue_remainingCapacity_R_int,
	(void *) M_java_util_concurrent_SynchronousQueue_drainTo_java_util_Collection_R_int,
	(void *) M_java_util_concurrent_SynchronousQueue_drainTo_java_util_Collection_int_R_int,
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
	{ "put", "(Ljava/lang/Object;)V" },
	{ "offer", "(Ljava/lang/Object;JLjava/util/concurrent/TimeUnit;)Z" },
	{ "take", "()Ljava/lang/Object;" },
	{ "poll", "(JLjava/util/concurrent/TimeUnit;)Ljava/lang/Object;" },
	{ "remainingCapacity", "()I" },
	{ "drainTo", "(Ljava/util/Collection;)I" },
	{ "drainTo", "(Ljava/util/Collection;I)I" },
};

static jclass interfaces[] { &class_java_util_concurrent_BlockingQueue, &class_java_io_Serializable, };

static FieldMetadata fields[] {
	{ "queue", &class_java_util_concurrent_ArrayBlockingQueue, offsetof(java_util_concurrent_SynchronousQueue, F_queue), "Ljava/util/concurrent/ArrayBlockingQueue;", 18 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_java_util_concurrent_SynchronousQueue, 0, "()V", 1 },
	{ "add", (intptr_t) M_java_util_concurrent_SynchronousQueue_add_java_lang_Object_R_boolean, VTABLE_java_util_concurrent_SynchronousQueue_add_java_lang_Object_R_boolean, "(Ljava/lang/Object;)Z", 1 },
	{ "offer", (intptr_t) M_java_util_concurrent_SynchronousQueue_offer_java_lang_Object_R_boolean, VTABLE_java_util_concurrent_SynchronousQueue_offer_java_lang_Object_R_boolean, "(Ljava/lang/Object;)Z", 1 },
	{ "remove", (intptr_t) M_java_util_concurrent_SynchronousQueue_remove_R_java_lang_Object, VTABLE_java_util_concurrent_SynchronousQueue_remove_R_java_lang_Object, "()Ljava/lang/Object;", 1 },
	{ "poll", (intptr_t) M_java_util_concurrent_SynchronousQueue_poll_R_java_lang_Object, VTABLE_java_util_concurrent_SynchronousQueue_poll_R_java_lang_Object, "()Ljava/lang/Object;", 1 },
	{ "element", (intptr_t) M_java_util_concurrent_SynchronousQueue_element_R_java_lang_Object, VTABLE_java_util_concurrent_SynchronousQueue_element_R_java_lang_Object, "()Ljava/lang/Object;", 1 },
	{ "peek", (intptr_t) M_java_util_concurrent_SynchronousQueue_peek_R_java_lang_Object, VTABLE_java_util_concurrent_SynchronousQueue_peek_R_java_lang_Object, "()Ljava/lang/Object;", 1 },
	{ "put", (intptr_t) M_java_util_concurrent_SynchronousQueue_put_java_lang_Object, VTABLE_java_util_concurrent_SynchronousQueue_put_java_lang_Object, "(Ljava/lang/Object;)V", 1 },
	{ "offer", (intptr_t) M_java_util_concurrent_SynchronousQueue_offer_java_lang_Object_long_java_util_concurrent_TimeUnit_R_boolean, VTABLE_java_util_concurrent_SynchronousQueue_offer_java_lang_Object_long_java_util_concurrent_TimeUnit_R_boolean, "(Ljava/lang/Object;JLjava/util/concurrent/TimeUnit;)Z", 1 },
	{ "take", (intptr_t) M_java_util_concurrent_SynchronousQueue_take_R_java_lang_Object, VTABLE_java_util_concurrent_SynchronousQueue_take_R_java_lang_Object, "()Ljava/lang/Object;", 1 },
	{ "poll", (intptr_t) M_java_util_concurrent_SynchronousQueue_poll_long_java_util_concurrent_TimeUnit_R_java_lang_Object, VTABLE_java_util_concurrent_SynchronousQueue_poll_long_java_util_concurrent_TimeUnit_R_java_lang_Object, "(JLjava/util/concurrent/TimeUnit;)Ljava/lang/Object;", 1 },
	{ "remainingCapacity", (intptr_t) M_java_util_concurrent_SynchronousQueue_remainingCapacity_R_int, VTABLE_java_util_concurrent_SynchronousQueue_remainingCapacity_R_int, "()I", 1 },
	{ "remove", (intptr_t) M_java_util_concurrent_SynchronousQueue_remove_java_lang_Object_R_boolean, VTABLE_java_util_concurrent_SynchronousQueue_remove_java_lang_Object_R_boolean, "(Ljava/lang/Object;)Z", 1 },
	{ "containsAll", (intptr_t) M_java_util_concurrent_SynchronousQueue_containsAll_java_util_Collection_R_boolean, VTABLE_java_util_concurrent_SynchronousQueue_containsAll_java_util_Collection_R_boolean, "(Ljava/util/Collection;)Z", 1 },
	{ "addAll", (intptr_t) M_java_util_concurrent_SynchronousQueue_addAll_java_util_Collection_R_boolean, VTABLE_java_util_concurrent_SynchronousQueue_addAll_java_util_Collection_R_boolean, "(Ljava/util/Collection;)Z", 1 },
	{ "removeAll", (intptr_t) M_java_util_concurrent_SynchronousQueue_removeAll_java_util_Collection_R_boolean, VTABLE_java_util_concurrent_SynchronousQueue_removeAll_java_util_Collection_R_boolean, "(Ljava/util/Collection;)Z", 1 },
	{ "retainAll", (intptr_t) M_java_util_concurrent_SynchronousQueue_retainAll_java_util_Collection_R_boolean, VTABLE_java_util_concurrent_SynchronousQueue_retainAll_java_util_Collection_R_boolean, "(Ljava/util/Collection;)Z", 1 },
	{ "clear", (intptr_t) M_java_util_concurrent_SynchronousQueue_clear, VTABLE_java_util_concurrent_SynchronousQueue_clear, "()V", 1 },
	{ "equals", (intptr_t) M_java_util_concurrent_SynchronousQueue_equals_java_lang_Object_R_boolean, VTABLE_java_util_concurrent_SynchronousQueue_equals_java_lang_Object_R_boolean, "(Ljava/lang/Object;)Z", 1 },
	{ "hashCode", (intptr_t) M_java_util_concurrent_SynchronousQueue_hashCode_R_int, VTABLE_java_util_concurrent_SynchronousQueue_hashCode_R_int, "()I", 1 },
	{ "size", (intptr_t) M_java_util_concurrent_SynchronousQueue_size_R_int, VTABLE_java_util_concurrent_SynchronousQueue_size_R_int, "()I", 1 },
	{ "isEmpty", (intptr_t) M_java_util_concurrent_SynchronousQueue_isEmpty_R_boolean, VTABLE_java_util_concurrent_SynchronousQueue_isEmpty_R_boolean, "()Z", 1 },
	{ "contains", (intptr_t) M_java_util_concurrent_SynchronousQueue_contains_java_lang_Object_R_boolean, VTABLE_java_util_concurrent_SynchronousQueue_contains_java_lang_Object_R_boolean, "(Ljava/lang/Object;)Z", 1 },
	{ "iterator", (intptr_t) M_java_util_concurrent_SynchronousQueue_iterator_R_java_util_Iterator, VTABLE_java_util_concurrent_SynchronousQueue_iterator_R_java_util_Iterator, "()Ljava/util/Iterator;", 1 },
	{ "toArray", (intptr_t) M_java_util_concurrent_SynchronousQueue_toArray_R_Array1_java_lang_Object, VTABLE_java_util_concurrent_SynchronousQueue_toArray_R_Array1_java_lang_Object, "()[Ljava/lang/Object;", 1 },
	{ "toArray", (intptr_t) M_java_util_concurrent_SynchronousQueue_toArray_Array1_java_lang_Object_R_Array1_java_lang_Object, VTABLE_java_util_concurrent_SynchronousQueue_toArray_Array1_java_lang_Object_R_Array1_java_lang_Object, "([Ljava/lang/Object;)[Ljava/lang/Object;", 1 },
	{ "drainTo", (intptr_t) M_java_util_concurrent_SynchronousQueue_drainTo_java_util_Collection_R_int, VTABLE_java_util_concurrent_SynchronousQueue_drainTo_java_util_Collection_R_int, "(Ljava/util/Collection;)I", 1 },
	{ "drainTo", (intptr_t) M_java_util_concurrent_SynchronousQueue_drainTo_java_util_Collection_int_R_int, VTABLE_java_util_concurrent_SynchronousQueue_drainTo_java_util_Collection_int_R_int, "(Ljava/util/Collection;I)I", 1 },
};

Class class_java_util_concurrent_SynchronousQueue{
		.nativeName = (intptr_t) "java/util/concurrent/SynchronousQueue",
		.parentClass = (intptr_t) &class_java_util_AbstractQueue,
		.size = sizeof(java_util_concurrent_SynchronousQueue),
		.classVtable = (intptr_t) vtable_java_util_concurrent_SynchronousQueue,
		.staticInitializer = (intptr_t) clinit_java_util_concurrent_SynchronousQueue,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_java_util_concurrent_SynchronousQueue,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 33,
		.interfaceCount = 2,
		.nativeInterfaces = (intptr_t) interfaces,
		.fieldCount = 1,
		.nativeFields = (intptr_t) fields,
		.methodCount = 28,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 38,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_java_util_concurrent_SynchronousQueue = registerClass(&class_java_util_concurrent_SynchronousQueue);

}
