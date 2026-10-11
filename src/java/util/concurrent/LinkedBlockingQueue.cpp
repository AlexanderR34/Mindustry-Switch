#include "java/util/concurrent/LinkedBlockingQueue.h"
#include "java/util/concurrent/LinkedBlockingQueue.h"
#include "java/lang/Math.h"
#include "java/util/AbstractQueue.h"
#include "java/lang/StringBuilder.h"
#include "java/util/Iterator.h"
#include "java/util/concurrent/LinkedBlockingQueue_Node.h"
#include "java/util/concurrent/atomic/AtomicInteger.h"
#include "java/util/concurrent/TimeUnit.h"
#include "java/lang/reflect/Array.h"
#include "java/lang/IllegalArgumentException.h"
#include "java/util/concurrent/LinkedBlockingQueue_Itr.h"
#include "java/lang/Iterable.h"
#include "java/util/concurrent/BlockingQueue.h"
#include "java/util/Collection.h"
#include "java/io/Serializable.h"
#include "java/lang/Object.h"
#include "java/lang/String.h"
#include "java/util/concurrent/locks/Condition.h"
#include "java/lang/NullPointerException.h"
#include "java/lang/IllegalStateException.h"
#include "java/lang/Class.h"
#include "java/lang/Throwable.h"
#include "java/util/concurrent/locks/ReentrantLock.h"
#include "java/util/AbstractCollection.h"

extern "C" {

jlong SF_java_util_concurrent_LinkedBlockingQueue_serialVersionUID;

void mark_java_util_concurrent_LinkedBlockingQueue(jobject object, jint mark, jint depth) {
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
	auto self = (java_util_concurrent_LinkedBlockingQueue *) object;
	if (self->F_count)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_count)->clazz)->markFunction)((jobject) self->F_count, mark, depth + 1);
	if (self->F_head)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_head)->clazz)->markFunction)((jobject) self->F_head, mark, depth + 1);
	if (self->F_last)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_last)->clazz)->markFunction)((jobject) self->F_last, mark, depth + 1);
	if (self->F_takeLock)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_takeLock)->clazz)->markFunction)((jobject) self->F_takeLock, mark, depth + 1);
	if (self->F_notEmpty)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_notEmpty)->clazz)->markFunction)((jobject) self->F_notEmpty, mark, depth + 1);
	if (self->F_putLock)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_putLock)->clazz)->markFunction)((jobject) self->F_putLock, mark, depth + 1);
	if (self->F_notFull)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_notFull)->clazz)->markFunction)((jobject) self->F_notFull, mark, depth + 1);
}

void clinit_java_util_concurrent_LinkedBlockingQueue(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	clinit_java_util_AbstractQueue(ctx);
	SF_java_util_concurrent_LinkedBlockingQueue_serialVersionUID = jlong(-6903933977591709194ll);
}

void M_java_util_concurrent_LinkedBlockingQueue_signalNotEmpty(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/concurrent/LinkedBlockingQueue:signalNotEmpty", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(171);
	sp[0].o = (jobject)((java_util_concurrent_LinkedBlockingQueue *) NULL_CHECK((frame[0].o)))->F_takeLock;
	frame[1].o = sp[0].o;
	LINE_NUMBER(172);
	((func_java_util_concurrent_locks_ReentrantLock_lock) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_util_concurrent_locks_ReentrantLock_lock])(ctx, (frame[1].o));
	}
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(174);
	sp[0].o = (jobject)((java_util_concurrent_LinkedBlockingQueue *) NULL_CHECK((frame[0].o)))->F_notEmpty;
	((func_java_util_concurrent_locks_Condition_signal) resolveInterfaceMethod(ctx, &class_java_util_concurrent_locks_Condition, INDEX_java_util_concurrent_locks_Condition_signal, sp[0].o))(ctx, sp[0].o);
	}
	popExceptionFrame(frameRef);
	{
	LINE_NUMBER(176);
	((func_java_util_concurrent_locks_ReentrantLock_unlock) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_util_concurrent_locks_ReentrantLock_unlock])(ctx, (frame[1].o));
	LINE_NUMBER(177);
	goto label_7;
	}
label_2:;
	{
	sp -= 1;
	LINE_NUMBER(176);
	frame[2].o = sp[0].o;
	((func_java_util_concurrent_locks_ReentrantLock_unlock) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_util_concurrent_locks_ReentrantLock_unlock])(ctx, (frame[1].o));
	LINE_NUMBER(177);
	throwException(ctx, (frame[2].o));	}
label_7:;
	LINE_NUMBER(178);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_java_util_concurrent_LinkedBlockingQueue_signalNotFull(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/concurrent/LinkedBlockingQueue:signalNotFull", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(184);
	sp[0].o = (jobject)((java_util_concurrent_LinkedBlockingQueue *) NULL_CHECK((frame[0].o)))->F_putLock;
	frame[1].o = sp[0].o;
	LINE_NUMBER(185);
	((func_java_util_concurrent_locks_ReentrantLock_lock) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_util_concurrent_locks_ReentrantLock_lock])(ctx, (frame[1].o));
	}
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(187);
	sp[0].o = (jobject)((java_util_concurrent_LinkedBlockingQueue *) NULL_CHECK((frame[0].o)))->F_notFull;
	((func_java_util_concurrent_locks_Condition_signal) resolveInterfaceMethod(ctx, &class_java_util_concurrent_locks_Condition, INDEX_java_util_concurrent_locks_Condition_signal, sp[0].o))(ctx, sp[0].o);
	}
	popExceptionFrame(frameRef);
	{
	LINE_NUMBER(189);
	((func_java_util_concurrent_locks_ReentrantLock_unlock) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_util_concurrent_locks_ReentrantLock_unlock])(ctx, (frame[1].o));
	LINE_NUMBER(190);
	goto label_7;
	}
label_2:;
	{
	sp -= 1;
	LINE_NUMBER(189);
	frame[2].o = sp[0].o;
	((func_java_util_concurrent_locks_ReentrantLock_unlock) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_util_concurrent_locks_ReentrantLock_unlock])(ctx, (frame[1].o));
	LINE_NUMBER(190);
	throwException(ctx, (frame[2].o));	}
label_7:;
	LINE_NUMBER(191);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_java_util_concurrent_LinkedBlockingQueue_enqueue_java_util_concurrent_LinkedBlockingQueue$Node(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/concurrent/LinkedBlockingQueue:enqueue", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(201);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((java_util_concurrent_LinkedBlockingQueue *) NULL_CHECK((frame[0].o)))->F_last;
	sp[2].o = frame[1].o;
	((java_util_concurrent_LinkedBlockingQueue$Node *) NULL_CHECK(sp[1].o))->F_next = (jref) sp[2].o;
	((java_util_concurrent_LinkedBlockingQueue *) NULL_CHECK(sp[0].o))->F_last = (jref) sp[2].o;
	LINE_NUMBER(202);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_java_util_concurrent_LinkedBlockingQueue_dequeue_R_java_lang_Object(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/concurrent/LinkedBlockingQueue:dequeue", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(212);
	sp[0].o = (jobject)((java_util_concurrent_LinkedBlockingQueue *) NULL_CHECK((frame[0].o)))->F_head;
	frame[1].o = sp[0].o;
	LINE_NUMBER(213);
	sp[0].o = (jobject)((java_util_concurrent_LinkedBlockingQueue$Node *) NULL_CHECK((frame[1].o)))->F_next;
	frame[2].o = sp[0].o;
	LINE_NUMBER(214);
	((java_util_concurrent_LinkedBlockingQueue$Node *) NULL_CHECK((frame[1].o)))->F_next = (jref) (frame[1].o);
	LINE_NUMBER(215);
	((java_util_concurrent_LinkedBlockingQueue *) NULL_CHECK((frame[0].o)))->F_head = (jref) (frame[2].o);
	LINE_NUMBER(216);
	sp[0].o = (jobject)((java_util_concurrent_LinkedBlockingQueue$Node *) NULL_CHECK((frame[2].o)))->F_item;
	frame[3].o = sp[0].o;
	LINE_NUMBER(217);
	((java_util_concurrent_LinkedBlockingQueue$Node *) NULL_CHECK((frame[2].o)))->F_item = (jref) (jobject(nullptr));
	LINE_NUMBER(218);
	popStackFrame(ctx);
	return (frame[3].o);
	}

	popStackFrame(ctx);
}

void M_java_util_concurrent_LinkedBlockingQueue_fullyLock(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/concurrent/LinkedBlockingQueue:fullyLock", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(225);
	sp[0].o = (jobject)((java_util_concurrent_LinkedBlockingQueue *) NULL_CHECK((frame[0].o)))->F_putLock;
	((func_java_util_concurrent_locks_ReentrantLock_lock) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_concurrent_locks_ReentrantLock_lock])(ctx, sp[0].o);
	LINE_NUMBER(226);
	sp[0].o = (jobject)((java_util_concurrent_LinkedBlockingQueue *) NULL_CHECK((frame[0].o)))->F_takeLock;
	((func_java_util_concurrent_locks_ReentrantLock_lock) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_concurrent_locks_ReentrantLock_lock])(ctx, sp[0].o);
	LINE_NUMBER(227);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_java_util_concurrent_LinkedBlockingQueue_fullyUnlock(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/concurrent/LinkedBlockingQueue:fullyUnlock", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(233);
	sp[0].o = (jobject)((java_util_concurrent_LinkedBlockingQueue *) NULL_CHECK((frame[0].o)))->F_takeLock;
	((func_java_util_concurrent_locks_ReentrantLock_unlock) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_concurrent_locks_ReentrantLock_unlock])(ctx, sp[0].o);
	LINE_NUMBER(234);
	sp[0].o = (jobject)((java_util_concurrent_LinkedBlockingQueue *) NULL_CHECK((frame[0].o)))->F_putLock;
	((func_java_util_concurrent_locks_ReentrantLock_unlock) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_concurrent_locks_ReentrantLock_unlock])(ctx, sp[0].o);
	LINE_NUMBER(235);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_java_util_concurrent_LinkedBlockingQueue(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/concurrent/LinkedBlockingQueue:<init>", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_util_concurrent_LinkedBlockingQueue(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(250);
	init_java_util_concurrent_LinkedBlockingQueue_int(ctx, (frame[0].o), (jint(2147483647)));
	LINE_NUMBER(251);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_java_util_concurrent_LinkedBlockingQueue_int(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/concurrent/LinkedBlockingQueue:<init>", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_util_concurrent_LinkedBlockingQueue(ctx);
	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(260);
	init_java_util_AbstractQueue(ctx, (frame[0].o));
	LINE_NUMBER(140);
	sp[0].o = frame[0].o;
	clinit_java_util_concurrent_atomic_AtomicInteger(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_util_concurrent_atomic_AtomicInteger);
	init_java_util_concurrent_atomic_AtomicInteger(ctx, sp[1].o);
	((java_util_concurrent_LinkedBlockingQueue *) NULL_CHECK(sp[0].o))->F_count = (jref) sp[1].o;
	LINE_NUMBER(155);
	sp[0].o = frame[0].o;
	clinit_java_util_concurrent_locks_ReentrantLock(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_util_concurrent_locks_ReentrantLock);
	init_java_util_concurrent_locks_ReentrantLock(ctx, sp[1].o);
	((java_util_concurrent_LinkedBlockingQueue *) NULL_CHECK(sp[0].o))->F_takeLock = (jref) sp[1].o;
	LINE_NUMBER(158);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((java_util_concurrent_LinkedBlockingQueue *) NULL_CHECK((frame[0].o)))->F_takeLock;
	sp[1].o = (jobject)((func_java_util_concurrent_locks_ReentrantLock_newCondition_R_java_util_concurrent_locks_Condition) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_util_concurrent_locks_ReentrantLock_newCondition_R_java_util_concurrent_locks_Condition])(ctx, sp[1].o);
	((java_util_concurrent_LinkedBlockingQueue *) NULL_CHECK(sp[0].o))->F_notEmpty = (jref) sp[1].o;
	LINE_NUMBER(161);
	sp[0].o = frame[0].o;
	clinit_java_util_concurrent_locks_ReentrantLock(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_util_concurrent_locks_ReentrantLock);
	init_java_util_concurrent_locks_ReentrantLock(ctx, sp[1].o);
	((java_util_concurrent_LinkedBlockingQueue *) NULL_CHECK(sp[0].o))->F_putLock = (jref) sp[1].o;
	LINE_NUMBER(164);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((java_util_concurrent_LinkedBlockingQueue *) NULL_CHECK((frame[0].o)))->F_putLock;
	sp[1].o = (jobject)((func_java_util_concurrent_locks_ReentrantLock_newCondition_R_java_util_concurrent_locks_Condition) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_util_concurrent_locks_ReentrantLock_newCondition_R_java_util_concurrent_locks_Condition])(ctx, sp[1].o);
	((java_util_concurrent_LinkedBlockingQueue *) NULL_CHECK(sp[0].o))->F_notFull = (jref) sp[1].o;
	LINE_NUMBER(261);
	if ((frame[1].i) > 0) goto label_7;
	}
	{
	clinit_java_lang_IllegalArgumentException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IllegalArgumentException);
	init_java_lang_IllegalArgumentException(ctx, sp[0].o);
	throwException(ctx, sp[0].o);	}
label_7:;
	{
	LINE_NUMBER(262);
	((java_util_concurrent_LinkedBlockingQueue *) NULL_CHECK((frame[0].o)))->F_capacity = (frame[1].i);
	LINE_NUMBER(263);
	sp[0].o = frame[0].o;
	sp[1].o = frame[0].o;
	clinit_java_util_concurrent_LinkedBlockingQueue$Node(ctx);
	sp[2].o = gcAlloc(ctx, &class_java_util_concurrent_LinkedBlockingQueue$Node);
	init_java_util_concurrent_LinkedBlockingQueue$Node_java_lang_Object(ctx, sp[2].o, (jobject(nullptr)));
	((java_util_concurrent_LinkedBlockingQueue *) NULL_CHECK(sp[1].o))->F_head = (jref) sp[2].o;
	((java_util_concurrent_LinkedBlockingQueue *) NULL_CHECK(sp[0].o))->F_last = (jref) sp[2].o;
	LINE_NUMBER(264);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_java_util_concurrent_LinkedBlockingQueue_java_util_Collection(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[11];
	auto stack = &frame[7];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/concurrent/LinkedBlockingQueue:<init>", 11 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_util_concurrent_LinkedBlockingQueue(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(277);
	init_java_util_concurrent_LinkedBlockingQueue_int(ctx, (frame[0].o), (jint(2147483647)));
	LINE_NUMBER(278);
	sp[0].o = (jobject)((java_util_concurrent_LinkedBlockingQueue *) NULL_CHECK((frame[0].o)))->F_putLock;
	frame[2].o = sp[0].o;
	LINE_NUMBER(279);
	((func_java_util_concurrent_locks_ReentrantLock_lock) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_java_util_concurrent_locks_ReentrantLock_lock])(ctx, (frame[2].o));
	}
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(281);
	frame[3].i = (jint(0));
	LINE_NUMBER(282);
	sp[0].o = (jobject)((func_java_util_Collection_iterator_R_java_util_Iterator) resolveInterfaceMethod(ctx, &class_java_util_Collection, INDEX_java_util_Collection_iterator_R_java_util_Iterator, (frame[1].o)))(ctx, (frame[1].o));
	frame[4].o = sp[0].o;
	}
label_10:;
	{
	jint temp0 = (jint)((func_java_util_Iterator_hasNext_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_hasNext_R_boolean, (frame[4].o)))(ctx, (frame[4].o));
	if (temp0 == 0) goto label_11;
	}
	{
	sp[0].o = (jobject)((func_java_util_Iterator_next_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_next_R_java_lang_Object, (frame[4].o)))(ctx, (frame[4].o));
	frame[5].o = sp[0].o;
	LINE_NUMBER(283);
	if ((frame[5].o) != nullptr) goto label_13;
	}
	{
	LINE_NUMBER(284);
	clinit_java_lang_NullPointerException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_NullPointerException);
	init_java_lang_NullPointerException(ctx, sp[0].o);
	throwException(ctx, sp[0].o);	}
label_13:;
	{
	LINE_NUMBER(285);
	if ((frame[3].i) != ((jint)((java_util_concurrent_LinkedBlockingQueue *) NULL_CHECK((frame[0].o)))->F_capacity)) goto label_15;
	}
	{
	LINE_NUMBER(286);
	clinit_java_lang_IllegalStateException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IllegalStateException);
	init_java_lang_IllegalStateException_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"Queue full"_j))));
	throwException(ctx, sp[0].o);	}
label_15:;
	{
	LINE_NUMBER(287);
	sp[0].o = frame[0].o;
	clinit_java_util_concurrent_LinkedBlockingQueue$Node(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_util_concurrent_LinkedBlockingQueue$Node);
	init_java_util_concurrent_LinkedBlockingQueue$Node_java_lang_Object(ctx, sp[1].o, (frame[5].o));
	M_java_util_concurrent_LinkedBlockingQueue_enqueue_java_util_concurrent_LinkedBlockingQueue$Node(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(288);
	INST_IINC(3, 1);
	LINE_NUMBER(289);
	goto label_10;
	}
label_11:;
	{
	LINE_NUMBER(290);
	sp[0].o = (jobject)((java_util_concurrent_LinkedBlockingQueue *) NULL_CHECK((frame[0].o)))->F_count;
	((func_java_util_concurrent_atomic_AtomicInteger_set_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_concurrent_atomic_AtomicInteger_set_int])(ctx, sp[0].o, (frame[3].i));
	}
	popExceptionFrame(frameRef);
	{
	LINE_NUMBER(292);
	((func_java_util_concurrent_locks_ReentrantLock_unlock) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_java_util_concurrent_locks_ReentrantLock_unlock])(ctx, (frame[2].o));
	LINE_NUMBER(293);
	goto label_20;
	}
label_2:;
label_5: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	LINE_NUMBER(292);
	INST_ASTORE(6);
	popExceptionFrame(frameRef);
	{
	((func_java_util_concurrent_locks_ReentrantLock_unlock) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_java_util_concurrent_locks_ReentrantLock_unlock])(ctx, (frame[2].o));
	LINE_NUMBER(293);
	throwException(ctx, (frame[6].o));	}
label_20:;
	LINE_NUMBER(294);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jint M_java_util_concurrent_LinkedBlockingQueue_size_R_int(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/concurrent/LinkedBlockingQueue:size", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(304);
	sp[0].o = (jobject)((java_util_concurrent_LinkedBlockingQueue *) NULL_CHECK((frame[0].o)))->F_count;
	jint temp0 = (jint)((func_java_util_concurrent_atomic_AtomicInteger_get_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_concurrent_atomic_AtomicInteger_get_R_int])(ctx, sp[0].o);
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jint M_java_util_concurrent_LinkedBlockingQueue_remainingCapacity_R_int(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/concurrent/LinkedBlockingQueue:remainingCapacity", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(321);
	jint temp0 = (jint)((java_util_concurrent_LinkedBlockingQueue *) NULL_CHECK((frame[0].o)))->F_capacity;
	sp[0].o = (jobject)((java_util_concurrent_LinkedBlockingQueue *) NULL_CHECK((frame[0].o)))->F_count;
	jint temp1 = (jint)((func_java_util_concurrent_atomic_AtomicInteger_get_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_concurrent_atomic_AtomicInteger_get_R_int])(ctx, sp[0].o);
	popStackFrame(ctx);
	return (temp0 - temp1);
	}

	popStackFrame(ctx);
}

void M_java_util_concurrent_LinkedBlockingQueue_put_java_lang_Object(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[10];
	auto stack = &frame[7];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/concurrent/LinkedBlockingQueue:put", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(332);
	if ((frame[1].o) != nullptr) goto label_7;
	}
	{
	clinit_java_lang_NullPointerException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_NullPointerException);
	init_java_lang_NullPointerException(ctx, sp[0].o);
	throwException(ctx, sp[0].o);	}
label_7:;
	{
	LINE_NUMBER(335);
	frame[2].i = (jint(-1));
	LINE_NUMBER(336);
	clinit_java_util_concurrent_LinkedBlockingQueue$Node(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_util_concurrent_LinkedBlockingQueue$Node);
	init_java_util_concurrent_LinkedBlockingQueue$Node_java_lang_Object(ctx, sp[0].o, (frame[1].o));
	frame[3].o = sp[0].o;
	LINE_NUMBER(337);
	sp[0].o = (jobject)((java_util_concurrent_LinkedBlockingQueue *) NULL_CHECK((frame[0].o)))->F_putLock;
	frame[4].o = sp[0].o;
	LINE_NUMBER(338);
	sp[0].o = (jobject)((java_util_concurrent_LinkedBlockingQueue *) NULL_CHECK((frame[0].o)))->F_count;
	frame[5].o = sp[0].o;
	LINE_NUMBER(339);
	((func_java_util_concurrent_locks_ReentrantLock_lockInterruptibly) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_java_util_concurrent_locks_ReentrantLock_lockInterruptibly])(ctx, (frame[4].o));
	}
label_0:;
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(349);
	jint temp0 = (jint)((func_java_util_concurrent_atomic_AtomicInteger_get_R_int) ((void **) nullCheck(ctx, (frame[5].o))->vtable)[VTABLE_java_util_concurrent_atomic_AtomicInteger_get_R_int])(ctx, (frame[5].o));
	if (temp0 != ((jint)((java_util_concurrent_LinkedBlockingQueue *) NULL_CHECK((frame[0].o)))->F_capacity)) goto label_12;
	}
	{
	LINE_NUMBER(350);
	sp[0].o = (jobject)((java_util_concurrent_LinkedBlockingQueue *) NULL_CHECK((frame[0].o)))->F_notFull;
	((func_java_util_concurrent_locks_Condition_await) resolveInterfaceMethod(ctx, &class_java_util_concurrent_locks_Condition, INDEX_java_util_concurrent_locks_Condition_await, sp[0].o))(ctx, sp[0].o);
	{ popExceptionFrames(frameRef, 1); goto label_0; }
	}
label_12:;
	{
	LINE_NUMBER(352);
	M_java_util_concurrent_LinkedBlockingQueue_enqueue_java_util_concurrent_LinkedBlockingQueue$Node(ctx, (frame[0].o), (frame[3].o));
	LINE_NUMBER(353);
	jint temp0 = (jint)((func_java_util_concurrent_atomic_AtomicInteger_getAndIncrement_R_int) ((void **) nullCheck(ctx, (frame[5].o))->vtable)[VTABLE_java_util_concurrent_atomic_AtomicInteger_getAndIncrement_R_int])(ctx, (frame[5].o));
	frame[2].i = temp0;
	LINE_NUMBER(354);
	if (((frame[2].i) + (jint(1))) >= ((jint)((java_util_concurrent_LinkedBlockingQueue *) NULL_CHECK((frame[0].o)))->F_capacity)) goto label_1;
	}
	{
	LINE_NUMBER(355);
	sp[0].o = (jobject)((java_util_concurrent_LinkedBlockingQueue *) NULL_CHECK((frame[0].o)))->F_notFull;
	((func_java_util_concurrent_locks_Condition_signal) resolveInterfaceMethod(ctx, &class_java_util_concurrent_locks_Condition, INDEX_java_util_concurrent_locks_Condition_signal, sp[0].o))(ctx, sp[0].o);
	}
label_1:;
	popExceptionFrame(frameRef);
	{
	LINE_NUMBER(357);
	((func_java_util_concurrent_locks_ReentrantLock_unlock) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_java_util_concurrent_locks_ReentrantLock_unlock])(ctx, (frame[4].o));
	LINE_NUMBER(358);
	goto label_18;
	}
label_2:;
label_5: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	LINE_NUMBER(357);
	INST_ASTORE(6);
	popExceptionFrame(frameRef);
	{
	((func_java_util_concurrent_locks_ReentrantLock_unlock) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_java_util_concurrent_locks_ReentrantLock_unlock])(ctx, (frame[4].o));
	LINE_NUMBER(358);
	throwException(ctx, (frame[6].o));	}
label_18:;
	{
	LINE_NUMBER(359);
	if ((frame[2].i) != 0) goto label_20;
	}
	{
	LINE_NUMBER(360);
	M_java_util_concurrent_LinkedBlockingQueue_signalNotEmpty(ctx, (frame[0].o));
	}
label_20:;
	LINE_NUMBER(361);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jbool M_java_util_concurrent_LinkedBlockingQueue_offer_java_lang_Object_long_java_util_concurrent_TimeUnit_R_boolean(jcontext ctx, jobject self, jobject param0, jlong param1, jobject param2) {
	NULL_CHECK(self);
	jtype frame[16];
	auto stack = &frame[12];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/concurrent/LinkedBlockingQueue:offer", 16 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);
	volatile bool bypasses[1]{};

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].l = param1;
	frame[4].o = param2;
	{
	LINE_NUMBER(375);
	if ((frame[1].o) != nullptr) goto label_10;
	}
	{
	clinit_java_lang_NullPointerException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_NullPointerException);
	init_java_lang_NullPointerException(ctx, sp[0].o);
	throwException(ctx, sp[0].o);	}
label_10:;
	{
	LINE_NUMBER(376);
	jlong temp0 = (jlong)((func_java_util_concurrent_TimeUnit_toNanos_long_R_long) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_java_util_concurrent_TimeUnit_toNanos_long_R_long])(ctx, (frame[4].o), (frame[2].l));
	frame[5].l = temp0;
	LINE_NUMBER(377);
	frame[7].i = (jint(-1));
	LINE_NUMBER(378);
	sp[0].o = (jobject)((java_util_concurrent_LinkedBlockingQueue *) NULL_CHECK((frame[0].o)))->F_putLock;
	frame[8].o = sp[0].o;
	LINE_NUMBER(379);
	sp[0].o = (jobject)((java_util_concurrent_LinkedBlockingQueue *) NULL_CHECK((frame[0].o)))->F_count;
	frame[9].o = sp[0].o;
	LINE_NUMBER(380);
	((func_java_util_concurrent_locks_ReentrantLock_lockInterruptibly) ((void **) nullCheck(ctx, (frame[8].o))->vtable)[VTABLE_java_util_concurrent_locks_ReentrantLock_lockInterruptibly])(ctx, (frame[8].o));
	}
label_0:;
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(382);
	jint temp0 = (jint)((func_java_util_concurrent_atomic_AtomicInteger_get_R_int) ((void **) nullCheck(ctx, (frame[9].o))->vtable)[VTABLE_java_util_concurrent_atomic_AtomicInteger_get_R_int])(ctx, (frame[9].o));
	if (temp0 != ((jint)((java_util_concurrent_LinkedBlockingQueue *) NULL_CHECK((frame[0].o)))->F_capacity)) { popExceptionFrames(frameRef, 1); bypasses[0] = true; goto label_6; } // goto label_15
	}
	{
	LINE_NUMBER(383);
	if ((longCompare((frame[5].l), (jlong(0)))) > 0) { popExceptionFrames(frameRef, 1); goto label_4; }
	}
	{
	LINE_NUMBER(384);
	frame[10].i = (jint(0));
	}
	popExceptionFrame(frameRef);
	{
	LINE_NUMBER(392);
	((func_java_util_concurrent_locks_ReentrantLock_unlock) ((void **) nullCheck(ctx, (frame[8].o))->vtable)[VTABLE_java_util_concurrent_locks_ReentrantLock_unlock])(ctx, (frame[8].o));
	LINE_NUMBER(384);
	popStackFrame(ctx);
	return (frame[10].i);
	}
label_4:;
label_6: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	if (bypasses[0]) { bypasses[0] = false; goto label_15; }
	{
	LINE_NUMBER(385);
	sp[0].o = (jobject)((java_util_concurrent_LinkedBlockingQueue *) NULL_CHECK((frame[0].o)))->F_notFull;
	jlong temp0 = (jlong)((func_java_util_concurrent_locks_Condition_awaitNanos_long_R_long) resolveInterfaceMethod(ctx, &class_java_util_concurrent_locks_Condition, INDEX_java_util_concurrent_locks_Condition_awaitNanos_long_R_long, sp[0].o))(ctx, sp[0].o, (frame[5].l));
	frame[5].l = temp0;
	{ popExceptionFrames(frameRef, 1); goto label_0; }
	}
label_15:;
	{
	LINE_NUMBER(387);
	sp[0].o = frame[0].o;
	clinit_java_util_concurrent_LinkedBlockingQueue$Node(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_util_concurrent_LinkedBlockingQueue$Node);
	init_java_util_concurrent_LinkedBlockingQueue$Node_java_lang_Object(ctx, sp[1].o, (frame[1].o));
	M_java_util_concurrent_LinkedBlockingQueue_enqueue_java_util_concurrent_LinkedBlockingQueue$Node(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(388);
	jint temp0 = (jint)((func_java_util_concurrent_atomic_AtomicInteger_getAndIncrement_R_int) ((void **) nullCheck(ctx, (frame[9].o))->vtable)[VTABLE_java_util_concurrent_atomic_AtomicInteger_getAndIncrement_R_int])(ctx, (frame[9].o));
	frame[7].i = temp0;
	LINE_NUMBER(389);
	if (((frame[7].i) + (jint(1))) >= ((jint)((java_util_concurrent_LinkedBlockingQueue *) NULL_CHECK((frame[0].o)))->F_capacity)) goto label_5;
	}
	{
	LINE_NUMBER(390);
	sp[0].o = (jobject)((java_util_concurrent_LinkedBlockingQueue *) NULL_CHECK((frame[0].o)))->F_notFull;
	((func_java_util_concurrent_locks_Condition_signal) resolveInterfaceMethod(ctx, &class_java_util_concurrent_locks_Condition, INDEX_java_util_concurrent_locks_Condition_signal, sp[0].o))(ctx, sp[0].o);
	}
label_5:;
	popExceptionFrame(frameRef);
	{
	LINE_NUMBER(392);
	((func_java_util_concurrent_locks_ReentrantLock_unlock) ((void **) nullCheck(ctx, (frame[8].o))->vtable)[VTABLE_java_util_concurrent_locks_ReentrantLock_unlock])(ctx, (frame[8].o));
	LINE_NUMBER(393);
	goto label_23;
	}
label_2:;
label_8: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	LINE_NUMBER(392);
	INST_ASTORE(11);
	popExceptionFrame(frameRef);
	{
	((func_java_util_concurrent_locks_ReentrantLock_unlock) ((void **) nullCheck(ctx, (frame[8].o))->vtable)[VTABLE_java_util_concurrent_locks_ReentrantLock_unlock])(ctx, (frame[8].o));
	LINE_NUMBER(393);
	throwException(ctx, (frame[11].o));	}
label_23:;
	{
	LINE_NUMBER(394);
	if ((frame[7].i) != 0) goto label_25;
	}
	{
	LINE_NUMBER(395);
	M_java_util_concurrent_LinkedBlockingQueue_signalNotEmpty(ctx, (frame[0].o));
	}
label_25:;
	{
	LINE_NUMBER(396);
	popStackFrame(ctx);
	return (jint(1));
	}

	popStackFrame(ctx);
}

jbool M_java_util_concurrent_LinkedBlockingQueue_offer_java_lang_Object_R_boolean(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[10];
	auto stack = &frame[7];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/concurrent/LinkedBlockingQueue:offer", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(411);
	if ((frame[1].o) != nullptr) goto label_7;
	}
	{
	clinit_java_lang_NullPointerException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_NullPointerException);
	init_java_lang_NullPointerException(ctx, sp[0].o);
	throwException(ctx, sp[0].o);	}
label_7:;
	{
	LINE_NUMBER(412);
	sp[0].o = (jobject)((java_util_concurrent_LinkedBlockingQueue *) NULL_CHECK((frame[0].o)))->F_count;
	frame[2].o = sp[0].o;
	LINE_NUMBER(413);
	jint temp0 = (jint)((func_java_util_concurrent_atomic_AtomicInteger_get_R_int) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_java_util_concurrent_atomic_AtomicInteger_get_R_int])(ctx, (frame[2].o));
	if (temp0 != ((jint)((java_util_concurrent_LinkedBlockingQueue *) NULL_CHECK((frame[0].o)))->F_capacity)) goto label_9;
	}
	{
	LINE_NUMBER(414);
	popStackFrame(ctx);
	return (jint(0));
	}
label_9:;
	{
	LINE_NUMBER(415);
	frame[3].i = (jint(-1));
	LINE_NUMBER(416);
	clinit_java_util_concurrent_LinkedBlockingQueue$Node(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_util_concurrent_LinkedBlockingQueue$Node);
	init_java_util_concurrent_LinkedBlockingQueue$Node_java_lang_Object(ctx, sp[0].o, (frame[1].o));
	frame[4].o = sp[0].o;
	LINE_NUMBER(417);
	sp[0].o = (jobject)((java_util_concurrent_LinkedBlockingQueue *) NULL_CHECK((frame[0].o)))->F_putLock;
	frame[5].o = sp[0].o;
	LINE_NUMBER(418);
	((func_java_util_concurrent_locks_ReentrantLock_lock) ((void **) nullCheck(ctx, (frame[5].o))->vtable)[VTABLE_java_util_concurrent_locks_ReentrantLock_lock])(ctx, (frame[5].o));
	}
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(420);
	jint temp0 = (jint)((func_java_util_concurrent_atomic_AtomicInteger_get_R_int) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_java_util_concurrent_atomic_AtomicInteger_get_R_int])(ctx, (frame[2].o));
	if (temp0 >= ((jint)((java_util_concurrent_LinkedBlockingQueue *) NULL_CHECK((frame[0].o)))->F_capacity)) goto label_1;
	}
	{
	LINE_NUMBER(421);
	M_java_util_concurrent_LinkedBlockingQueue_enqueue_java_util_concurrent_LinkedBlockingQueue$Node(ctx, (frame[0].o), (frame[4].o));
	LINE_NUMBER(422);
	jint temp0 = (jint)((func_java_util_concurrent_atomic_AtomicInteger_getAndIncrement_R_int) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_java_util_concurrent_atomic_AtomicInteger_getAndIncrement_R_int])(ctx, (frame[2].o));
	frame[3].i = temp0;
	LINE_NUMBER(423);
	if (((frame[3].i) + (jint(1))) >= ((jint)((java_util_concurrent_LinkedBlockingQueue *) NULL_CHECK((frame[0].o)))->F_capacity)) goto label_1;
	}
	{
	LINE_NUMBER(424);
	sp[0].o = (jobject)((java_util_concurrent_LinkedBlockingQueue *) NULL_CHECK((frame[0].o)))->F_notFull;
	((func_java_util_concurrent_locks_Condition_signal) resolveInterfaceMethod(ctx, &class_java_util_concurrent_locks_Condition, INDEX_java_util_concurrent_locks_Condition_signal, sp[0].o))(ctx, sp[0].o);
	}
label_1:;
	popExceptionFrame(frameRef);
	{
	LINE_NUMBER(427);
	((func_java_util_concurrent_locks_ReentrantLock_unlock) ((void **) nullCheck(ctx, (frame[5].o))->vtable)[VTABLE_java_util_concurrent_locks_ReentrantLock_unlock])(ctx, (frame[5].o));
	LINE_NUMBER(428);
	goto label_19;
	}
label_2:;
label_5: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	LINE_NUMBER(427);
	INST_ASTORE(6);
	popExceptionFrame(frameRef);
	{
	((func_java_util_concurrent_locks_ReentrantLock_unlock) ((void **) nullCheck(ctx, (frame[5].o))->vtable)[VTABLE_java_util_concurrent_locks_ReentrantLock_unlock])(ctx, (frame[5].o));
	LINE_NUMBER(428);
	throwException(ctx, (frame[6].o));	}
label_19:;
	{
	LINE_NUMBER(429);
	if ((frame[3].i) != 0) goto label_21;
	}
	{
	LINE_NUMBER(430);
	M_java_util_concurrent_LinkedBlockingQueue_signalNotEmpty(ctx, (frame[0].o));
	}
label_21:;
	{
	LINE_NUMBER(431);
	if ((frame[3].i) < 0) goto label_23;
	}
	INST_ICONST(1);
	goto label_24;
label_23:;
	INST_ICONST(0);
label_24:;
	popStackFrame(ctx);
	INST_IRETURN();

	popStackFrame(ctx);
}

jobject M_java_util_concurrent_LinkedBlockingQueue_take_R_java_lang_Object(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/concurrent/LinkedBlockingQueue:take", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(436);
	frame[2].i = (jint(-1));
	LINE_NUMBER(437);
	sp[0].o = (jobject)((java_util_concurrent_LinkedBlockingQueue *) NULL_CHECK((frame[0].o)))->F_count;
	frame[3].o = sp[0].o;
	LINE_NUMBER(438);
	sp[0].o = (jobject)((java_util_concurrent_LinkedBlockingQueue *) NULL_CHECK((frame[0].o)))->F_takeLock;
	frame[4].o = sp[0].o;
	LINE_NUMBER(439);
	((func_java_util_concurrent_locks_ReentrantLock_lockInterruptibly) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_java_util_concurrent_locks_ReentrantLock_lockInterruptibly])(ctx, (frame[4].o));
	}
label_0:;
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(441);
	jint temp0 = (jint)((func_java_util_concurrent_atomic_AtomicInteger_get_R_int) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_java_util_concurrent_atomic_AtomicInteger_get_R_int])(ctx, (frame[3].o));
	if (temp0 != 0) goto label_10;
	}
	{
	LINE_NUMBER(442);
	sp[0].o = (jobject)((java_util_concurrent_LinkedBlockingQueue *) NULL_CHECK((frame[0].o)))->F_notEmpty;
	((func_java_util_concurrent_locks_Condition_await) resolveInterfaceMethod(ctx, &class_java_util_concurrent_locks_Condition, INDEX_java_util_concurrent_locks_Condition_await, sp[0].o))(ctx, sp[0].o);
	{ popExceptionFrames(frameRef, 1); goto label_0; }
	}
label_10:;
	{
	LINE_NUMBER(444);
	sp[0].o = (jobject)M_java_util_concurrent_LinkedBlockingQueue_dequeue_R_java_lang_Object(ctx, (frame[0].o));
	frame[1].o = sp[0].o;
	LINE_NUMBER(445);
	jint temp0 = (jint)((func_java_util_concurrent_atomic_AtomicInteger_getAndDecrement_R_int) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_java_util_concurrent_atomic_AtomicInteger_getAndDecrement_R_int])(ctx, (frame[3].o));
	frame[2].i = temp0;
	LINE_NUMBER(446);
	if ((frame[2].i) <= (jint(1))) goto label_1;
	}
	{
	LINE_NUMBER(447);
	sp[0].o = (jobject)((java_util_concurrent_LinkedBlockingQueue *) NULL_CHECK((frame[0].o)))->F_notEmpty;
	((func_java_util_concurrent_locks_Condition_signal) resolveInterfaceMethod(ctx, &class_java_util_concurrent_locks_Condition, INDEX_java_util_concurrent_locks_Condition_signal, sp[0].o))(ctx, sp[0].o);
	}
label_1:;
	popExceptionFrame(frameRef);
	{
	LINE_NUMBER(449);
	((func_java_util_concurrent_locks_ReentrantLock_unlock) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_java_util_concurrent_locks_ReentrantLock_unlock])(ctx, (frame[4].o));
	LINE_NUMBER(450);
	goto label_16;
	}
label_2:;
label_5: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	LINE_NUMBER(449);
	INST_ASTORE(5);
	popExceptionFrame(frameRef);
	{
	((func_java_util_concurrent_locks_ReentrantLock_unlock) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_java_util_concurrent_locks_ReentrantLock_unlock])(ctx, (frame[4].o));
	LINE_NUMBER(450);
	throwException(ctx, (frame[5].o));	}
label_16:;
	{
	LINE_NUMBER(451);
	if ((frame[2].i) != ((jint)((java_util_concurrent_LinkedBlockingQueue *) NULL_CHECK((frame[0].o)))->F_capacity)) goto label_18;
	}
	{
	LINE_NUMBER(452);
	M_java_util_concurrent_LinkedBlockingQueue_signalNotFull(ctx, (frame[0].o));
	}
label_18:;
	{
	LINE_NUMBER(453);
	popStackFrame(ctx);
	return (frame[1].o);
	}

	popStackFrame(ctx);
}

jobject M_java_util_concurrent_LinkedBlockingQueue_poll_long_java_util_concurrent_TimeUnit_R_java_lang_Object(jcontext ctx, jobject self, jlong param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[16];
	auto stack = &frame[12];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/concurrent/LinkedBlockingQueue:poll", 16 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);
	volatile bool bypasses[1]{};

	frame[0].o = self;
	frame[1].l = param0;
	frame[3].o = param1;
	{
	LINE_NUMBER(457);
	frame[4].o = (jobject(nullptr));
	LINE_NUMBER(458);
	frame[5].i = (jint(-1));
	LINE_NUMBER(459);
	jlong temp0 = (jlong)((func_java_util_concurrent_TimeUnit_toNanos_long_R_long) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_java_util_concurrent_TimeUnit_toNanos_long_R_long])(ctx, (frame[3].o), (frame[1].l));
	frame[6].l = temp0;
	LINE_NUMBER(460);
	sp[0].o = (jobject)((java_util_concurrent_LinkedBlockingQueue *) NULL_CHECK((frame[0].o)))->F_count;
	frame[8].o = sp[0].o;
	LINE_NUMBER(461);
	sp[0].o = (jobject)((java_util_concurrent_LinkedBlockingQueue *) NULL_CHECK((frame[0].o)))->F_takeLock;
	frame[9].o = sp[0].o;
	LINE_NUMBER(462);
	((func_java_util_concurrent_locks_ReentrantLock_lockInterruptibly) ((void **) nullCheck(ctx, (frame[9].o))->vtable)[VTABLE_java_util_concurrent_locks_ReentrantLock_lockInterruptibly])(ctx, (frame[9].o));
	}
label_0:;
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(464);
	jint temp0 = (jint)((func_java_util_concurrent_atomic_AtomicInteger_get_R_int) ((void **) nullCheck(ctx, (frame[8].o))->vtable)[VTABLE_java_util_concurrent_atomic_AtomicInteger_get_R_int])(ctx, (frame[8].o));
	if (temp0 != 0) { popExceptionFrames(frameRef, 1); bypasses[0] = true; goto label_6; } // goto label_15
	}
	{
	LINE_NUMBER(465);
	if ((longCompare((frame[6].l), (jlong(0)))) > 0) { popExceptionFrames(frameRef, 1); goto label_4; }
	}
	{
	LINE_NUMBER(466);
	frame[10].o = (jobject(nullptr));
	}
	popExceptionFrame(frameRef);
	{
	LINE_NUMBER(474);
	((func_java_util_concurrent_locks_ReentrantLock_unlock) ((void **) nullCheck(ctx, (frame[9].o))->vtable)[VTABLE_java_util_concurrent_locks_ReentrantLock_unlock])(ctx, (frame[9].o));
	LINE_NUMBER(466);
	popStackFrame(ctx);
	return (frame[10].o);
	}
label_4:;
label_6: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	if (bypasses[0]) { bypasses[0] = false; goto label_15; }
	{
	LINE_NUMBER(467);
	sp[0].o = (jobject)((java_util_concurrent_LinkedBlockingQueue *) NULL_CHECK((frame[0].o)))->F_notEmpty;
	jlong temp0 = (jlong)((func_java_util_concurrent_locks_Condition_awaitNanos_long_R_long) resolveInterfaceMethod(ctx, &class_java_util_concurrent_locks_Condition, INDEX_java_util_concurrent_locks_Condition_awaitNanos_long_R_long, sp[0].o))(ctx, sp[0].o, (frame[6].l));
	frame[6].l = temp0;
	{ popExceptionFrames(frameRef, 1); goto label_0; }
	}
label_15:;
	{
	LINE_NUMBER(469);
	sp[0].o = (jobject)M_java_util_concurrent_LinkedBlockingQueue_dequeue_R_java_lang_Object(ctx, (frame[0].o));
	frame[4].o = sp[0].o;
	LINE_NUMBER(470);
	jint temp0 = (jint)((func_java_util_concurrent_atomic_AtomicInteger_getAndDecrement_R_int) ((void **) nullCheck(ctx, (frame[8].o))->vtable)[VTABLE_java_util_concurrent_atomic_AtomicInteger_getAndDecrement_R_int])(ctx, (frame[8].o));
	frame[5].i = temp0;
	LINE_NUMBER(471);
	if ((frame[5].i) <= (jint(1))) goto label_5;
	}
	{
	LINE_NUMBER(472);
	sp[0].o = (jobject)((java_util_concurrent_LinkedBlockingQueue *) NULL_CHECK((frame[0].o)))->F_notEmpty;
	((func_java_util_concurrent_locks_Condition_signal) resolveInterfaceMethod(ctx, &class_java_util_concurrent_locks_Condition, INDEX_java_util_concurrent_locks_Condition_signal, sp[0].o))(ctx, sp[0].o);
	}
label_5:;
	popExceptionFrame(frameRef);
	{
	LINE_NUMBER(474);
	((func_java_util_concurrent_locks_ReentrantLock_unlock) ((void **) nullCheck(ctx, (frame[9].o))->vtable)[VTABLE_java_util_concurrent_locks_ReentrantLock_unlock])(ctx, (frame[9].o));
	LINE_NUMBER(475);
	goto label_23;
	}
label_2:;
label_8: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	LINE_NUMBER(474);
	INST_ASTORE(11);
	popExceptionFrame(frameRef);
	{
	((func_java_util_concurrent_locks_ReentrantLock_unlock) ((void **) nullCheck(ctx, (frame[9].o))->vtable)[VTABLE_java_util_concurrent_locks_ReentrantLock_unlock])(ctx, (frame[9].o));
	LINE_NUMBER(475);
	throwException(ctx, (frame[11].o));	}
label_23:;
	{
	LINE_NUMBER(476);
	if ((frame[5].i) != ((jint)((java_util_concurrent_LinkedBlockingQueue *) NULL_CHECK((frame[0].o)))->F_capacity)) goto label_25;
	}
	{
	LINE_NUMBER(477);
	M_java_util_concurrent_LinkedBlockingQueue_signalNotFull(ctx, (frame[0].o));
	}
label_25:;
	{
	LINE_NUMBER(478);
	popStackFrame(ctx);
	return (frame[4].o);
	}

	popStackFrame(ctx);
}

jobject M_java_util_concurrent_LinkedBlockingQueue_poll_R_java_lang_Object(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/concurrent/LinkedBlockingQueue:poll", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(482);
	sp[0].o = (jobject)((java_util_concurrent_LinkedBlockingQueue *) NULL_CHECK((frame[0].o)))->F_count;
	frame[1].o = sp[0].o;
	LINE_NUMBER(483);
	jint temp0 = (jint)((func_java_util_concurrent_atomic_AtomicInteger_get_R_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_util_concurrent_atomic_AtomicInteger_get_R_int])(ctx, (frame[1].o));
	if (temp0 != 0) goto label_8;
	}
	{
	LINE_NUMBER(484);
	popStackFrame(ctx);
	return (jobject(nullptr));
	}
label_8:;
	{
	LINE_NUMBER(485);
	frame[2].o = (jobject(nullptr));
	LINE_NUMBER(486);
	frame[3].i = (jint(-1));
	LINE_NUMBER(487);
	sp[0].o = (jobject)((java_util_concurrent_LinkedBlockingQueue *) NULL_CHECK((frame[0].o)))->F_takeLock;
	frame[4].o = sp[0].o;
	LINE_NUMBER(488);
	((func_java_util_concurrent_locks_ReentrantLock_lock) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_java_util_concurrent_locks_ReentrantLock_lock])(ctx, (frame[4].o));
	}
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(490);
	jint temp0 = (jint)((func_java_util_concurrent_atomic_AtomicInteger_get_R_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_util_concurrent_atomic_AtomicInteger_get_R_int])(ctx, (frame[1].o));
	if (temp0 <= 0) goto label_1;
	}
	{
	LINE_NUMBER(491);
	sp[0].o = (jobject)M_java_util_concurrent_LinkedBlockingQueue_dequeue_R_java_lang_Object(ctx, (frame[0].o));
	frame[2].o = sp[0].o;
	LINE_NUMBER(492);
	jint temp0 = (jint)((func_java_util_concurrent_atomic_AtomicInteger_getAndDecrement_R_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_util_concurrent_atomic_AtomicInteger_getAndDecrement_R_int])(ctx, (frame[1].o));
	frame[3].i = temp0;
	LINE_NUMBER(493);
	if ((frame[3].i) <= (jint(1))) goto label_1;
	}
	{
	LINE_NUMBER(494);
	sp[0].o = (jobject)((java_util_concurrent_LinkedBlockingQueue *) NULL_CHECK((frame[0].o)))->F_notEmpty;
	((func_java_util_concurrent_locks_Condition_signal) resolveInterfaceMethod(ctx, &class_java_util_concurrent_locks_Condition, INDEX_java_util_concurrent_locks_Condition_signal, sp[0].o))(ctx, sp[0].o);
	}
label_1:;
	popExceptionFrame(frameRef);
	{
	LINE_NUMBER(497);
	((func_java_util_concurrent_locks_ReentrantLock_unlock) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_java_util_concurrent_locks_ReentrantLock_unlock])(ctx, (frame[4].o));
	LINE_NUMBER(498);
	goto label_18;
	}
label_2:;
label_5: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	LINE_NUMBER(497);
	INST_ASTORE(5);
	popExceptionFrame(frameRef);
	{
	((func_java_util_concurrent_locks_ReentrantLock_unlock) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_java_util_concurrent_locks_ReentrantLock_unlock])(ctx, (frame[4].o));
	LINE_NUMBER(498);
	throwException(ctx, (frame[5].o));	}
label_18:;
	{
	LINE_NUMBER(499);
	if ((frame[3].i) != ((jint)((java_util_concurrent_LinkedBlockingQueue *) NULL_CHECK((frame[0].o)))->F_capacity)) goto label_20;
	}
	{
	LINE_NUMBER(500);
	M_java_util_concurrent_LinkedBlockingQueue_signalNotFull(ctx, (frame[0].o));
	}
label_20:;
	{
	LINE_NUMBER(501);
	popStackFrame(ctx);
	return (frame[2].o);
	}

	popStackFrame(ctx);
}

jobject M_java_util_concurrent_LinkedBlockingQueue_peek_R_java_lang_Object(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/concurrent/LinkedBlockingQueue:peek", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(505);
	sp[0].o = (jobject)((java_util_concurrent_LinkedBlockingQueue *) NULL_CHECK((frame[0].o)))->F_count;
	jint temp0 = (jint)((func_java_util_concurrent_atomic_AtomicInteger_get_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_concurrent_atomic_AtomicInteger_get_R_int])(ctx, sp[0].o);
	if (temp0 != 0) goto label_10;
	}
	{
	LINE_NUMBER(506);
	popStackFrame(ctx);
	return (jobject(nullptr));
	}
label_10:;
	{
	LINE_NUMBER(507);
	sp[0].o = (jobject)((java_util_concurrent_LinkedBlockingQueue *) NULL_CHECK((frame[0].o)))->F_takeLock;
	frame[1].o = sp[0].o;
	LINE_NUMBER(508);
	((func_java_util_concurrent_locks_ReentrantLock_lock) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_util_concurrent_locks_ReentrantLock_lock])(ctx, (frame[1].o));
	}
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(510);
	sp[0].o = (jobject)((java_util_concurrent_LinkedBlockingQueue *) NULL_CHECK((frame[0].o)))->F_head;
	sp[0].o = (jobject)((java_util_concurrent_LinkedBlockingQueue$Node *) NULL_CHECK(sp[0].o))->F_next;
	frame[2].o = sp[0].o;
	LINE_NUMBER(511);
	if ((frame[2].o) != nullptr) { popExceptionFrames(frameRef, 1); goto label_4; }
	}
	{
	LINE_NUMBER(512);
	frame[3].o = (jobject(nullptr));
	}
	popExceptionFrame(frameRef);
	{
	LINE_NUMBER(516);
	((func_java_util_concurrent_locks_ReentrantLock_unlock) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_util_concurrent_locks_ReentrantLock_unlock])(ctx, (frame[1].o));
	LINE_NUMBER(512);
	popStackFrame(ctx);
	return (frame[3].o);
	}
label_4:;
label_6: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(514);
	sp[0].o = (jobject)((java_util_concurrent_LinkedBlockingQueue$Node *) NULL_CHECK((frame[2].o)))->F_item;
	frame[3].o = sp[0].o;
	}
	popExceptionFrame(frameRef);
	{
	LINE_NUMBER(516);
	((func_java_util_concurrent_locks_ReentrantLock_unlock) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_util_concurrent_locks_ReentrantLock_unlock])(ctx, (frame[1].o));
	LINE_NUMBER(514);
	popStackFrame(ctx);
	return (frame[3].o);
	}
label_2:;
label_8: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	LINE_NUMBER(516);
	INST_ASTORE(4);
	popExceptionFrame(frameRef);
	{
	((func_java_util_concurrent_locks_ReentrantLock_unlock) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_util_concurrent_locks_ReentrantLock_unlock])(ctx, (frame[1].o));
	LINE_NUMBER(517);
	throwException(ctx, (frame[4].o));	}

	popStackFrame(ctx);
}

void M_java_util_concurrent_LinkedBlockingQueue_unlink_java_util_concurrent_LinkedBlockingQueue$Node_java_util_concurrent_LinkedBlockingQueue$Node(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/concurrent/LinkedBlockingQueue:unlink", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(527);
	((java_util_concurrent_LinkedBlockingQueue$Node *) NULL_CHECK((frame[1].o)))->F_item = (jref) (jobject(nullptr));
	LINE_NUMBER(528);
	sp[0].o = frame[2].o;
	sp[1].o = (jobject)((java_util_concurrent_LinkedBlockingQueue$Node *) NULL_CHECK((frame[1].o)))->F_next;
	((java_util_concurrent_LinkedBlockingQueue$Node *) NULL_CHECK(sp[0].o))->F_next = (jref) sp[1].o;
	LINE_NUMBER(529);
	sp[0].o = (jobject)((java_util_concurrent_LinkedBlockingQueue *) NULL_CHECK((frame[0].o)))->F_last;
	if (sp[0].o != (frame[1].o)) goto label_3;
	}
	{
	LINE_NUMBER(530);
	((java_util_concurrent_LinkedBlockingQueue *) NULL_CHECK((frame[0].o)))->F_last = (jref) (frame[2].o);
	}
label_3:;
	{
	LINE_NUMBER(531);
	sp[0].o = (jobject)((java_util_concurrent_LinkedBlockingQueue *) NULL_CHECK((frame[0].o)))->F_count;
	jint temp0 = (jint)((func_java_util_concurrent_atomic_AtomicInteger_getAndDecrement_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_concurrent_atomic_AtomicInteger_getAndDecrement_R_int])(ctx, sp[0].o);
	if (temp0 != ((jint)((java_util_concurrent_LinkedBlockingQueue *) NULL_CHECK((frame[0].o)))->F_capacity)) goto label_5;
	}
	{
	LINE_NUMBER(532);
	sp[0].o = (jobject)((java_util_concurrent_LinkedBlockingQueue *) NULL_CHECK((frame[0].o)))->F_notFull;
	((func_java_util_concurrent_locks_Condition_signal) resolveInterfaceMethod(ctx, &class_java_util_concurrent_locks_Condition, INDEX_java_util_concurrent_locks_Condition_signal, sp[0].o))(ctx, sp[0].o);
	}
label_5:;
	LINE_NUMBER(533);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jbool M_java_util_concurrent_LinkedBlockingQueue_remove_java_lang_Object_R_boolean(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/concurrent/LinkedBlockingQueue:remove", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);
	volatile bool bypasses[2]{};

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(547);
	if ((frame[1].o) != nullptr) goto label_10;
	}
	INST_ICONST(0);
	popStackFrame(ctx);
	INST_IRETURN();
label_10:;
	{
	LINE_NUMBER(548);
	((func_java_util_concurrent_LinkedBlockingQueue_fullyLock) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_util_concurrent_LinkedBlockingQueue_fullyLock])(ctx, (frame[0].o));
	}
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	if (bypasses[1]) { bypasses[1] = false; goto label_12; }
	{
	LINE_NUMBER(550);
	sp[0].o = (jobject)((java_util_concurrent_LinkedBlockingQueue *) NULL_CHECK((frame[0].o)))->F_head;
	frame[2].o = sp[0].o;
	sp[0].o = (jobject)((java_util_concurrent_LinkedBlockingQueue$Node *) NULL_CHECK((frame[2].o)))->F_next;
	frame[3].o = sp[0].o;
	}
label_12:;
	{
	LINE_NUMBER(551);
	if ((frame[3].o) == nullptr) { popExceptionFrames(frameRef, 1); bypasses[0] = true; goto label_6; } // goto label_13
	}
	{
	LINE_NUMBER(553);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((java_util_concurrent_LinkedBlockingQueue$Node *) NULL_CHECK((frame[3].o)))->F_item;
	jint temp0 = (jint)((func_java_lang_Object_equals_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_Object_equals_java_lang_Object_R_boolean])(ctx, sp[0].o, sp[1].o);
	if (temp0 == 0) { popExceptionFrames(frameRef, 1); goto label_4; }
	}
	{
	LINE_NUMBER(554);
	((func_java_util_concurrent_LinkedBlockingQueue_unlink_java_util_concurrent_LinkedBlockingQueue$Node_java_util_concurrent_LinkedBlockingQueue$Node) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_util_concurrent_LinkedBlockingQueue_unlink_java_util_concurrent_LinkedBlockingQueue$Node_java_util_concurrent_LinkedBlockingQueue$Node])(ctx, (frame[0].o), (frame[3].o), (frame[2].o));
	LINE_NUMBER(555);
	frame[4].i = (jint(1));
	}
	popExceptionFrame(frameRef);
	{
	LINE_NUMBER(560);
	((func_java_util_concurrent_LinkedBlockingQueue_fullyUnlock) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_util_concurrent_LinkedBlockingQueue_fullyUnlock])(ctx, (frame[0].o));
	LINE_NUMBER(555);
	popStackFrame(ctx);
	return (frame[4].i);
	}
label_4:;
label_6: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	if (bypasses[0]) { bypasses[0] = false; goto label_13; }
	{
	LINE_NUMBER(552);
	frame[2].o = (frame[3].o);
	sp[0].o = (jobject)((java_util_concurrent_LinkedBlockingQueue$Node *) NULL_CHECK((frame[3].o)))->F_next;
	frame[3].o = sp[0].o;
	{ popExceptionFrames(frameRef, 1); bypasses[1] = true; goto label_3; } // goto label_12
	}
label_13:;
	{
	LINE_NUMBER(558);
	frame[2].i = (jint(0));
	}
	popExceptionFrame(frameRef);
	{
	LINE_NUMBER(560);
	((func_java_util_concurrent_LinkedBlockingQueue_fullyUnlock) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_util_concurrent_LinkedBlockingQueue_fullyUnlock])(ctx, (frame[0].o));
	LINE_NUMBER(558);
	popStackFrame(ctx);
	return (frame[2].i);
	}
label_2:;
label_8: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	LINE_NUMBER(560);
	INST_ASTORE(5);
	popExceptionFrame(frameRef);
	{
	((func_java_util_concurrent_LinkedBlockingQueue_fullyUnlock) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_util_concurrent_LinkedBlockingQueue_fullyUnlock])(ctx, (frame[0].o));
	LINE_NUMBER(561);
	throwException(ctx, (frame[5].o));	}

	popStackFrame(ctx);
}

jbool M_java_util_concurrent_LinkedBlockingQueue_contains_java_lang_Object_R_boolean(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/concurrent/LinkedBlockingQueue:contains", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);
	volatile bool bypasses[2]{};

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(573);
	if ((frame[1].o) != nullptr) goto label_10;
	}
	INST_ICONST(0);
	popStackFrame(ctx);
	INST_IRETURN();
label_10:;
	{
	LINE_NUMBER(574);
	((func_java_util_concurrent_LinkedBlockingQueue_fullyLock) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_util_concurrent_LinkedBlockingQueue_fullyLock])(ctx, (frame[0].o));
	}
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	if (bypasses[1]) { bypasses[1] = false; goto label_11; }
	{
	LINE_NUMBER(576);
	sp[0].o = (jobject)((java_util_concurrent_LinkedBlockingQueue *) NULL_CHECK((frame[0].o)))->F_head;
	sp[0].o = (jobject)((java_util_concurrent_LinkedBlockingQueue$Node *) NULL_CHECK(sp[0].o))->F_next;
	frame[2].o = sp[0].o;
	}
label_11:;
	INST_ALOAD(2);
	if ((--sp)->o == nullptr) { popExceptionFrames(frameRef, 1); bypasses[0] = true; goto label_6; } // goto label_12
	{
	LINE_NUMBER(577);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((java_util_concurrent_LinkedBlockingQueue$Node *) NULL_CHECK((frame[2].o)))->F_item;
	jint temp0 = (jint)((func_java_lang_Object_equals_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_Object_equals_java_lang_Object_R_boolean])(ctx, sp[0].o, sp[1].o);
	if (temp0 == 0) { popExceptionFrames(frameRef, 1); goto label_4; }
	}
	{
	LINE_NUMBER(578);
	frame[3].i = (jint(1));
	}
	popExceptionFrame(frameRef);
	{
	LINE_NUMBER(581);
	((func_java_util_concurrent_LinkedBlockingQueue_fullyUnlock) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_util_concurrent_LinkedBlockingQueue_fullyUnlock])(ctx, (frame[0].o));
	LINE_NUMBER(578);
	popStackFrame(ctx);
	return (frame[3].i);
	}
label_4:;
label_6: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	if (bypasses[0]) { bypasses[0] = false; goto label_12; }
	{
	LINE_NUMBER(576);
	sp[0].o = (jobject)((java_util_concurrent_LinkedBlockingQueue$Node *) NULL_CHECK((frame[2].o)))->F_next;
	frame[2].o = sp[0].o;
	{ popExceptionFrames(frameRef, 1); bypasses[1] = true; goto label_3; } // goto label_11
	}
label_12:;
	{
	LINE_NUMBER(579);
	frame[2].i = (jint(0));
	}
	popExceptionFrame(frameRef);
	{
	LINE_NUMBER(581);
	((func_java_util_concurrent_LinkedBlockingQueue_fullyUnlock) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_util_concurrent_LinkedBlockingQueue_fullyUnlock])(ctx, (frame[0].o));
	LINE_NUMBER(579);
	popStackFrame(ctx);
	return (frame[2].i);
	}
label_2:;
label_8: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	LINE_NUMBER(581);
	INST_ASTORE(4);
	popExceptionFrame(frameRef);
	{
	((func_java_util_concurrent_LinkedBlockingQueue_fullyUnlock) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_util_concurrent_LinkedBlockingQueue_fullyUnlock])(ctx, (frame[0].o));
	LINE_NUMBER(582);
	throwException(ctx, (frame[4].o));	}

	popStackFrame(ctx);
}

jobject M_java_util_concurrent_LinkedBlockingQueue_toArray_R_Array1_java_lang_Object(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/concurrent/LinkedBlockingQueue:toArray", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(599);
	((func_java_util_concurrent_LinkedBlockingQueue_fullyLock) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_util_concurrent_LinkedBlockingQueue_fullyLock])(ctx, (frame[0].o));
	}
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(601);
	sp[0].o = (jobject)((java_util_concurrent_LinkedBlockingQueue *) NULL_CHECK((frame[0].o)))->F_count;
	jint temp0 = (jint)((func_java_util_concurrent_atomic_AtomicInteger_get_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_concurrent_atomic_AtomicInteger_get_R_int])(ctx, sp[0].o);
	frame[1].i = temp0;
	LINE_NUMBER(602);
	sp[0].o = (jobject)createArray(ctx, &class_java_lang_Object, (frame[1].i));
	frame[2].o = sp[0].o;
	LINE_NUMBER(603);
	frame[3].i = (jint(0));
	LINE_NUMBER(604);
	sp[0].o = (jobject)((java_util_concurrent_LinkedBlockingQueue *) NULL_CHECK((frame[0].o)))->F_head;
	sp[0].o = (jobject)((java_util_concurrent_LinkedBlockingQueue$Node *) NULL_CHECK(sp[0].o))->F_next;
	frame[4].o = sp[0].o;
	}
label_10:;
	INST_ALOAD(4);
	if ((--sp)->o == nullptr) goto label_11;
	{
	LINE_NUMBER(605);
	sp[0].o = frame[2].o;
	jint temp0 = frame[3].i;
	INST_IINC(3, 1);
	sp[1].o = (jobject)((java_util_concurrent_LinkedBlockingQueue$Node *) NULL_CHECK((frame[4].o)))->F_item;
	ARRAY_ACCESS(jobject, sp[0].o, temp0) = sp[1].o;
	LINE_NUMBER(604);
	sp[0].o = (jobject)((java_util_concurrent_LinkedBlockingQueue$Node *) NULL_CHECK((frame[4].o)))->F_next;
	frame[4].o = sp[0].o;
	goto label_10;
	}
label_11:;
	{
	LINE_NUMBER(606);
	frame[4].o = (frame[2].o);
	}
	popExceptionFrame(frameRef);
	{
	LINE_NUMBER(608);
	((func_java_util_concurrent_LinkedBlockingQueue_fullyUnlock) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_util_concurrent_LinkedBlockingQueue_fullyUnlock])(ctx, (frame[0].o));
	LINE_NUMBER(606);
	popStackFrame(ctx);
	return (frame[4].o);
	}
label_2:;
label_5: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	LINE_NUMBER(608);
	INST_ASTORE(5);
	popExceptionFrame(frameRef);
	{
	((func_java_util_concurrent_LinkedBlockingQueue_fullyUnlock) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_util_concurrent_LinkedBlockingQueue_fullyUnlock])(ctx, (frame[0].o));
	LINE_NUMBER(609);
	throwException(ctx, (frame[5].o));	}

	popStackFrame(ctx);
}

jobject M_java_util_concurrent_LinkedBlockingQueue_toArray_Array1_java_lang_Object_R_Array1_java_lang_Object(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/concurrent/LinkedBlockingQueue:toArray", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(649);
	((func_java_util_concurrent_LinkedBlockingQueue_fullyLock) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_util_concurrent_LinkedBlockingQueue_fullyLock])(ctx, (frame[0].o));
	}
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(651);
	sp[0].o = (jobject)((java_util_concurrent_LinkedBlockingQueue *) NULL_CHECK((frame[0].o)))->F_count;
	jint temp0 = (jint)((func_java_util_concurrent_atomic_AtomicInteger_get_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_concurrent_atomic_AtomicInteger_get_R_int])(ctx, sp[0].o);
	frame[2].i = temp0;
	LINE_NUMBER(652);
	if ((((jarray) nullCheck(ctx, (frame[1].o)))->length) >= (frame[2].i)) goto label_8;
	}
	{
	LINE_NUMBER(653);
	sp[0].o = frame[1].o;
	LINE_NUMBER(654);
	sp[0].o = (jobject)((func_java_lang_Object_getClass_R_java_lang_Class) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_Object_getClass_R_java_lang_Class])(ctx, sp[0].o);
	sp[0].o = (jobject)((func_java_lang_Class_getComponentType_R_java_lang_Class) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_Class_getComponentType_R_java_lang_Class])(ctx, sp[0].o);
	sp[0].o = (jobject)SM_java_lang_reflect_Array_newInstance_java_lang_Class_int_R_java_lang_Object(ctx, sp[0].o, (frame[2].i));
	frame[1].o = (checkCast(ctx, getArrayClass(&class_java_lang_Object, 1), sp[0].o));
	}
label_8:;
	{
	LINE_NUMBER(656);
	frame[3].i = (jint(0));
	LINE_NUMBER(657);
	sp[0].o = (jobject)((java_util_concurrent_LinkedBlockingQueue *) NULL_CHECK((frame[0].o)))->F_head;
	sp[0].o = (jobject)((java_util_concurrent_LinkedBlockingQueue$Node *) NULL_CHECK(sp[0].o))->F_next;
	frame[4].o = sp[0].o;
	}
label_12:;
	INST_ALOAD(4);
	if ((--sp)->o == nullptr) goto label_13;
	{
	LINE_NUMBER(658);
	sp[0].o = frame[1].o;
	jint temp0 = frame[3].i;
	INST_IINC(3, 1);
	sp[1].o = (jobject)((java_util_concurrent_LinkedBlockingQueue$Node *) NULL_CHECK((frame[4].o)))->F_item;
	ARRAY_ACCESS(jobject, sp[0].o, temp0) = sp[1].o;
	LINE_NUMBER(657);
	sp[0].o = (jobject)((java_util_concurrent_LinkedBlockingQueue$Node *) NULL_CHECK((frame[4].o)))->F_next;
	frame[4].o = sp[0].o;
	goto label_12;
	}
label_13:;
	{
	LINE_NUMBER(659);
	if ((((jarray) nullCheck(ctx, (frame[1].o)))->length) <= (frame[3].i)) goto label_16;
	}
	{
	LINE_NUMBER(660);
	ARRAY_ACCESS(jobject, (frame[1].o), (frame[3].i)) = (jobject(nullptr));
	}
label_16:;
	{
	LINE_NUMBER(661);
	frame[4].o = (frame[1].o);
	}
	popExceptionFrame(frameRef);
	{
	LINE_NUMBER(663);
	((func_java_util_concurrent_LinkedBlockingQueue_fullyUnlock) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_util_concurrent_LinkedBlockingQueue_fullyUnlock])(ctx, (frame[0].o));
	LINE_NUMBER(661);
	popStackFrame(ctx);
	return (frame[4].o);
	}
label_2:;
label_5: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	LINE_NUMBER(663);
	INST_ASTORE(5);
	popExceptionFrame(frameRef);
	{
	((func_java_util_concurrent_LinkedBlockingQueue_fullyUnlock) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_util_concurrent_LinkedBlockingQueue_fullyUnlock])(ctx, (frame[0].o));
	LINE_NUMBER(664);
	throwException(ctx, (frame[5].o));	}

	popStackFrame(ctx);
}

jobject M_java_util_concurrent_LinkedBlockingQueue_toString_R_java_lang_String(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/concurrent/LinkedBlockingQueue:toString", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);
	volatile bool bypasses[3]{};

	frame[0].o = self;
	{
	LINE_NUMBER(668);
	((func_java_util_concurrent_LinkedBlockingQueue_fullyLock) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_util_concurrent_LinkedBlockingQueue_fullyLock])(ctx, (frame[0].o));
	}
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); bypasses[0] = true; goto label_9; } // goto label_2
	}
	{
	LINE_NUMBER(670);
	sp[0].o = (jobject)((java_util_concurrent_LinkedBlockingQueue *) NULL_CHECK((frame[0].o)))->F_head;
	sp[0].o = (jobject)((java_util_concurrent_LinkedBlockingQueue$Node *) NULL_CHECK(sp[0].o))->F_next;
	frame[1].o = sp[0].o;
	LINE_NUMBER(671);
	if ((frame[1].o) != nullptr) { popExceptionFrames(frameRef, 1); goto label_4; }
	}
	{
	LINE_NUMBER(672);
	frame[2].o = (((jobject) createStringLiteral(ctx, u8"[]"_j)));
	}
	popExceptionFrame(frameRef);
	{
	LINE_NUMBER(685);
	((func_java_util_concurrent_LinkedBlockingQueue_fullyUnlock) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_util_concurrent_LinkedBlockingQueue_fullyUnlock])(ctx, (frame[0].o));
	LINE_NUMBER(672);
	popStackFrame(ctx);
	return (frame[2].o);
	}
label_4:;
label_6: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); bypasses[1] = true; goto label_9; } // goto label_2
	}
	if (bypasses[2]) { bypasses[2] = false; goto label_15; }
	{
	LINE_NUMBER(674);
	clinit_java_lang_StringBuilder(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[0].o);
	frame[2].o = sp[0].o;
	LINE_NUMBER(675);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_char_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_java_lang_StringBuilder_append_char_R_java_lang_StringBuilder])(ctx, (frame[2].o), (91));
	}
label_15:;
	{
	LINE_NUMBER(677);
	sp[0].o = (jobject)((java_util_concurrent_LinkedBlockingQueue$Node *) NULL_CHECK((frame[1].o)))->F_item;
	frame[3].o = sp[0].o;
	LINE_NUMBER(678);
	sp[0].o = frame[2].o;
	sp += 1;
	if ((frame[3].o) != (frame[0].o)) goto label_17;
	}
	(sp++)->o = ((jobject) createStringLiteral(ctx, u8"(this Collection)"_j));
	goto label_18;
label_17:;
	INST_ALOAD(3);
label_18:;
	{
	sp -= 2;
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_Object_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_Object_R_java_lang_StringBuilder])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(679);
	sp[0].o = (jobject)((java_util_concurrent_LinkedBlockingQueue$Node *) NULL_CHECK((frame[1].o)))->F_next;
	frame[1].o = sp[0].o;
	LINE_NUMBER(680);
	if ((frame[1].o) != nullptr) { popExceptionFrames(frameRef, 1); goto label_7; }
	}
	{
	LINE_NUMBER(681);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_char_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_java_lang_StringBuilder_append_char_R_java_lang_StringBuilder])(ctx, (frame[2].o), (93));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[0].o);
	frame[4].o = sp[0].o;
	}
	popExceptionFrame(frameRef);
	{
	LINE_NUMBER(685);
	((func_java_util_concurrent_LinkedBlockingQueue_fullyUnlock) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_util_concurrent_LinkedBlockingQueue_fullyUnlock])(ctx, (frame[0].o));
	LINE_NUMBER(681);
	popStackFrame(ctx);
	return (frame[4].o);
	}
label_7:;
label_9: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); goto label_2;
	}
	if (bypasses[0]) { bypasses[0] = false; goto label_2; }
	if (bypasses[1]) { bypasses[1] = false; goto label_2; }
	{
	LINE_NUMBER(682);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_char_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_java_lang_StringBuilder_append_char_R_java_lang_StringBuilder])(ctx, (frame[2].o), (44));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_char_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_char_R_java_lang_StringBuilder])(ctx, sp[0].o, (32));
	LINE_NUMBER(683);
	{ popExceptionFrames(frameRef, 1); bypasses[2] = true; goto label_6; } // goto label_15
	}
label_2:;
	LINE_NUMBER(685);
	INST_ASTORE(5);
	popExceptionFrame(frameRef);
	{
	((func_java_util_concurrent_LinkedBlockingQueue_fullyUnlock) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_util_concurrent_LinkedBlockingQueue_fullyUnlock])(ctx, (frame[0].o));
	LINE_NUMBER(686);
	throwException(ctx, (frame[5].o));	}

	popStackFrame(ctx);
}

void M_java_util_concurrent_LinkedBlockingQueue_clear(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/concurrent/LinkedBlockingQueue:clear", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(694);
	((func_java_util_concurrent_LinkedBlockingQueue_fullyLock) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_util_concurrent_LinkedBlockingQueue_fullyLock])(ctx, (frame[0].o));
	}
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(696);
	sp[0].o = (jobject)((java_util_concurrent_LinkedBlockingQueue *) NULL_CHECK((frame[0].o)))->F_head;
	frame[2].o = sp[0].o;
	}
label_5:;
	{
	sp[0].o = (jobject)((java_util_concurrent_LinkedBlockingQueue$Node *) NULL_CHECK((frame[2].o)))->F_next;
	frame[1].o = sp[0].o;
	if (sp[0].o == nullptr) goto label_7;
	}
	{
	LINE_NUMBER(697);
	((java_util_concurrent_LinkedBlockingQueue$Node *) NULL_CHECK((frame[2].o)))->F_next = (jref) (frame[2].o);
	LINE_NUMBER(698);
	((java_util_concurrent_LinkedBlockingQueue$Node *) NULL_CHECK((frame[1].o)))->F_item = (jref) (jobject(nullptr));
	LINE_NUMBER(696);
	frame[2].o = (frame[1].o);
	goto label_5;
	}
label_7:;
	{
	LINE_NUMBER(700);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((java_util_concurrent_LinkedBlockingQueue *) NULL_CHECK((frame[0].o)))->F_last;
	((java_util_concurrent_LinkedBlockingQueue *) NULL_CHECK(sp[0].o))->F_head = (jref) sp[1].o;
	LINE_NUMBER(702);
	sp[0].o = (jobject)((java_util_concurrent_LinkedBlockingQueue *) NULL_CHECK((frame[0].o)))->F_count;
	jint temp0 = (jint)((func_java_util_concurrent_atomic_AtomicInteger_getAndSet_int_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_concurrent_atomic_AtomicInteger_getAndSet_int_R_int])(ctx, sp[0].o, (jint(0)));
	if (temp0 != ((jint)((java_util_concurrent_LinkedBlockingQueue *) NULL_CHECK((frame[0].o)))->F_capacity)) goto label_1;
	}
	{
	LINE_NUMBER(703);
	sp[0].o = (jobject)((java_util_concurrent_LinkedBlockingQueue *) NULL_CHECK((frame[0].o)))->F_notFull;
	((func_java_util_concurrent_locks_Condition_signal) resolveInterfaceMethod(ctx, &class_java_util_concurrent_locks_Condition, INDEX_java_util_concurrent_locks_Condition_signal, sp[0].o))(ctx, sp[0].o);
	}
label_1:;
	popExceptionFrame(frameRef);
	{
	LINE_NUMBER(705);
	((func_java_util_concurrent_LinkedBlockingQueue_fullyUnlock) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_util_concurrent_LinkedBlockingQueue_fullyUnlock])(ctx, (frame[0].o));
	LINE_NUMBER(706);
	goto label_14;
	}
label_2:;
	{
	sp -= 1;
	LINE_NUMBER(705);
	frame[3].o = sp[0].o;
	((func_java_util_concurrent_LinkedBlockingQueue_fullyUnlock) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_util_concurrent_LinkedBlockingQueue_fullyUnlock])(ctx, (frame[0].o));
	LINE_NUMBER(706);
	throwException(ctx, (frame[3].o));	}
label_14:;
	LINE_NUMBER(707);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jint M_java_util_concurrent_LinkedBlockingQueue_drainTo_java_util_Collection_R_int(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/concurrent/LinkedBlockingQueue:drainTo", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(716);
	jint temp0 = (jint)((func_java_util_concurrent_LinkedBlockingQueue_drainTo_java_util_Collection_int_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_util_concurrent_LinkedBlockingQueue_drainTo_java_util_Collection_int_R_int])(ctx, (frame[0].o), (frame[1].o), (jint(2147483647)));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jint M_java_util_concurrent_LinkedBlockingQueue_drainTo_java_util_Collection_int_R_int(jcontext ctx, jobject self, jobject param0, jint param1) {
	NULL_CHECK(self);
	jtype frame[13];
	auto stack = &frame[11];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/concurrent/LinkedBlockingQueue:drainTo", 13 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);
	volatile bool bypasses[1]{};

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(726);
	if ((frame[1].o) != nullptr) goto label_13;
	}
	{
	LINE_NUMBER(727);
	clinit_java_lang_NullPointerException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_NullPointerException);
	init_java_lang_NullPointerException(ctx, sp[0].o);
	throwException(ctx, sp[0].o);	}
label_13:;
	{
	LINE_NUMBER(728);
	if ((frame[1].o) != (frame[0].o)) goto label_15;
	}
	{
	LINE_NUMBER(729);
	clinit_java_lang_IllegalArgumentException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IllegalArgumentException);
	init_java_lang_IllegalArgumentException(ctx, sp[0].o);
	throwException(ctx, sp[0].o);	}
label_15:;
	{
	LINE_NUMBER(730);
	if ((frame[2].i) > 0) goto label_17;
	}
	{
	LINE_NUMBER(731);
	popStackFrame(ctx);
	return (jint(0));
	}
label_17:;
	{
	LINE_NUMBER(732);
	frame[3].i = (jint(0));
	LINE_NUMBER(733);
	sp[0].o = (jobject)((java_util_concurrent_LinkedBlockingQueue *) NULL_CHECK((frame[0].o)))->F_takeLock;
	frame[4].o = sp[0].o;
	LINE_NUMBER(734);
	((func_java_util_concurrent_locks_ReentrantLock_lock) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_java_util_concurrent_locks_ReentrantLock_lock])(ctx, (frame[4].o));
	}
label_9: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); bypasses[0] = true; goto label_11; } // goto label_8
	}
	{
	LINE_NUMBER(736);
	jint temp0 = frame[2].i;
	sp[0].o = (jobject)((java_util_concurrent_LinkedBlockingQueue *) NULL_CHECK((frame[0].o)))->F_count;
	jint temp1 = (jint)((func_java_util_concurrent_atomic_AtomicInteger_get_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_concurrent_atomic_AtomicInteger_get_R_int])(ctx, sp[0].o);
	jint temp2 = (jint)SM_java_lang_Math_min_int_int_R_int(ctx, temp0, temp1);
	frame[5].i = temp2;
	LINE_NUMBER(738);
	sp[0].o = (jobject)((java_util_concurrent_LinkedBlockingQueue *) NULL_CHECK((frame[0].o)))->F_head;
	frame[6].o = sp[0].o;
	LINE_NUMBER(739);
	frame[7].i = (jint(0));
	}
label_0:;
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 2); goto label_2; }
	}
	{
	LINE_NUMBER(741);
	if ((frame[7].i) >= (frame[5].i)) goto label_23;
	}
	{
	LINE_NUMBER(742);
	sp[0].o = (jobject)((java_util_concurrent_LinkedBlockingQueue$Node *) NULL_CHECK((frame[6].o)))->F_next;
	frame[8].o = sp[0].o;
	LINE_NUMBER(743);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((java_util_concurrent_LinkedBlockingQueue$Node *) NULL_CHECK((frame[8].o)))->F_item;
	jint temp0 = (jint)((func_java_util_Collection_add_java_lang_Object_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_Collection, INDEX_java_util_Collection_add_java_lang_Object_R_boolean, sp[0].o))(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(744);
	((java_util_concurrent_LinkedBlockingQueue$Node *) NULL_CHECK((frame[8].o)))->F_item = (jref) (jobject(nullptr));
	LINE_NUMBER(745);
	((java_util_concurrent_LinkedBlockingQueue$Node *) NULL_CHECK((frame[6].o)))->F_next = (jref) (frame[6].o);
	LINE_NUMBER(746);
	frame[6].o = (frame[8].o);
	LINE_NUMBER(747);
	INST_IINC(7, 1);
	LINE_NUMBER(748);
	{ popExceptionFrames(frameRef, 1); goto label_0; }
	}
label_23:;
	{
	LINE_NUMBER(749);
	frame[8].i = (frame[5].i);
	}
	popExceptionFrame(frameRef);
	{
	LINE_NUMBER(752);
	if ((frame[7].i) <= 0) goto label_7;
	}
	{
	LINE_NUMBER(754);
	((java_util_concurrent_LinkedBlockingQueue *) NULL_CHECK((frame[0].o)))->F_head = (jref) (frame[6].o);
	LINE_NUMBER(755);
	sp[0].o = (jobject)((java_util_concurrent_LinkedBlockingQueue *) NULL_CHECK((frame[0].o)))->F_count;
	jint temp0 = (jint)((func_java_util_concurrent_atomic_AtomicInteger_getAndAdd_int_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_concurrent_atomic_AtomicInteger_getAndAdd_int_R_int])(ctx, sp[0].o, (-(frame[7].i)));
	if (temp0 != ((jint)((java_util_concurrent_LinkedBlockingQueue *) NULL_CHECK((frame[0].o)))->F_capacity)) goto label_33;
	}
	INST_ICONST(1);
	goto label_34;
label_33:;
	INST_ICONST(0);
label_34:;
	INST_ISTORE(3);
label_7:;
	popExceptionFrame(frameRef);
	{
	LINE_NUMBER(759);
	((func_java_util_concurrent_locks_ReentrantLock_unlock) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_java_util_concurrent_locks_ReentrantLock_unlock])(ctx, (frame[4].o));
	LINE_NUMBER(760);
	if ((frame[3].i) == 0) goto label_36;
	}
	{
	LINE_NUMBER(761);
	M_java_util_concurrent_LinkedBlockingQueue_signalNotFull(ctx, (frame[0].o));
	}
label_36:;
	{
	LINE_NUMBER(749);
	popStackFrame(ctx);
	return (frame[8].i);
	}
label_2:;
label_11: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); goto label_8;
	}
	if (bypasses[0]) { bypasses[0] = false; goto label_8; }
label_5: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 2); goto label_2; }
	}
	LINE_NUMBER(752);
	INST_ASTORE(9);
	popExceptionFrame(frameRef);
	INST_ILOAD(7);
	if ((--sp)->i <= 0) goto label_38;
	{
	LINE_NUMBER(754);
	((java_util_concurrent_LinkedBlockingQueue *) NULL_CHECK((frame[0].o)))->F_head = (jref) (frame[6].o);
	LINE_NUMBER(755);
	sp[0].o = (jobject)((java_util_concurrent_LinkedBlockingQueue *) NULL_CHECK((frame[0].o)))->F_count;
	jint temp0 = (jint)((func_java_util_concurrent_atomic_AtomicInteger_getAndAdd_int_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_concurrent_atomic_AtomicInteger_getAndAdd_int_R_int])(ctx, sp[0].o, (-(frame[7].i)));
	if (temp0 != ((jint)((java_util_concurrent_LinkedBlockingQueue *) NULL_CHECK((frame[0].o)))->F_capacity)) goto label_41;
	}
	INST_ICONST(1);
	goto label_42;
label_41:;
	INST_ICONST(0);
label_42:;
	INST_ISTORE(3);
label_38:;
	{
	LINE_NUMBER(757);
	throwException(ctx, (frame[9].o));	}
label_8:;
	LINE_NUMBER(759);
	INST_ASTORE(10);
	popExceptionFrame(frameRef);
	{
	((func_java_util_concurrent_locks_ReentrantLock_unlock) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_java_util_concurrent_locks_ReentrantLock_unlock])(ctx, (frame[4].o));
	LINE_NUMBER(760);
	if ((frame[3].i) == 0) goto label_44;
	}
	{
	LINE_NUMBER(761);
	M_java_util_concurrent_LinkedBlockingQueue_signalNotFull(ctx, (frame[0].o));
	}
label_44:;
	{
	LINE_NUMBER(762);
	throwException(ctx, (frame[10].o));	}

	popStackFrame(ctx);
}

jobject M_java_util_concurrent_LinkedBlockingQueue_iterator_R_java_util_Iterator(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/concurrent/LinkedBlockingQueue:iterator", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(775);
	clinit_java_util_concurrent_LinkedBlockingQueue$Itr(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_util_concurrent_LinkedBlockingQueue$Itr);
	init_java_util_concurrent_LinkedBlockingQueue$Itr_java_util_concurrent_LinkedBlockingQueue(ctx, sp[0].o, (frame[0].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void *vtable_java_util_concurrent_LinkedBlockingQueue[] {
	(void *) M_java_lang_Object_hashCode_R_int,
	(void *) M_java_lang_Object_equals_java_lang_Object_R_boolean,
	(void *) M_java_lang_Object_clone_R_java_lang_Object,
	(void *) M_java_lang_Object_getClass_R_java_lang_Class,
	(void *) M_java_util_concurrent_LinkedBlockingQueue_toString_R_java_lang_String,
	(void *) M_java_lang_Object_finalize,
	(void *) M_java_lang_Object_notify,
	(void *) M_java_lang_Object_notifyAll,
	(void *) M_java_lang_Object_wait,
	(void *) M_java_lang_Object_wait_long,
	(void *) M_java_lang_Object_wait_long_int,
	(void *) M_java_util_concurrent_LinkedBlockingQueue_iterator_R_java_util_Iterator,
	(void *) M_java_lang_Iterable_forEach_java_util_function_Consumer,
	(void *) M_java_util_Collection_spliterator_R_java_util_Spliterator,
	(void *) M_java_util_AbstractQueue_add_java_lang_Object_R_boolean,
	(void *) M_java_util_AbstractQueue_addAll_java_util_Collection_R_boolean,
	(void *) M_java_util_concurrent_LinkedBlockingQueue_clear,
	(void *) M_java_util_concurrent_LinkedBlockingQueue_contains_java_lang_Object_R_boolean,
	(void *) M_java_util_AbstractCollection_containsAll_java_util_Collection_R_boolean,
	(void *) M_java_util_AbstractCollection_isEmpty_R_boolean,
	(void *) M_java_util_concurrent_LinkedBlockingQueue_remove_java_lang_Object_R_boolean,
	(void *) M_java_util_AbstractCollection_removeAll_java_util_Collection_R_boolean,
	(void *) M_java_util_AbstractCollection_retainAll_java_util_Collection_R_boolean,
	(void *) M_java_util_concurrent_LinkedBlockingQueue_size_R_int,
	(void *) M_java_util_concurrent_LinkedBlockingQueue_toArray_R_Array1_java_lang_Object,
	(void *) M_java_util_concurrent_LinkedBlockingQueue_toArray_Array1_java_lang_Object_R_Array1_java_lang_Object,
	(void *) M_java_util_concurrent_LinkedBlockingQueue_offer_java_lang_Object_R_boolean,
	(void *) M_java_util_concurrent_LinkedBlockingQueue_poll_R_java_lang_Object,
	(void *) M_java_util_AbstractQueue_remove_R_java_lang_Object,
	(void *) M_java_util_concurrent_LinkedBlockingQueue_peek_R_java_lang_Object,
	(void *) M_java_util_AbstractQueue_element_R_java_lang_Object,
	(void *) M_java_util_concurrent_LinkedBlockingQueue_put_java_lang_Object,
	(void *) M_java_util_concurrent_LinkedBlockingQueue_offer_java_lang_Object_long_java_util_concurrent_TimeUnit_R_boolean,
	(void *) M_java_util_concurrent_LinkedBlockingQueue_take_R_java_lang_Object,
	(void *) M_java_util_concurrent_LinkedBlockingQueue_poll_long_java_util_concurrent_TimeUnit_R_java_lang_Object,
	(void *) M_java_util_concurrent_LinkedBlockingQueue_remainingCapacity_R_int,
	(void *) M_java_util_concurrent_LinkedBlockingQueue_drainTo_java_util_Collection_R_int,
	(void *) M_java_util_concurrent_LinkedBlockingQueue_drainTo_java_util_Collection_int_R_int,
	(void *) M_java_util_concurrent_LinkedBlockingQueue_signalNotEmpty,
	(void *) M_java_util_concurrent_LinkedBlockingQueue_signalNotFull,
	(void *) M_java_util_concurrent_LinkedBlockingQueue_enqueue_java_util_concurrent_LinkedBlockingQueue$Node,
	(void *) M_java_util_concurrent_LinkedBlockingQueue_dequeue_R_java_lang_Object,
	(void *) M_java_util_concurrent_LinkedBlockingQueue_fullyLock,
	(void *) M_java_util_concurrent_LinkedBlockingQueue_fullyUnlock,
	(void *) M_java_util_concurrent_LinkedBlockingQueue_unlink_java_util_concurrent_LinkedBlockingQueue$Node_java_util_concurrent_LinkedBlockingQueue$Node,
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
	{ "signalNotEmpty", "()V" },
	{ "signalNotFull", "()V" },
	{ "enqueue", "(Ljava/util/concurrent/LinkedBlockingQueue$Node;)V" },
	{ "dequeue", "()Ljava/lang/Object;" },
	{ "fullyLock", "()V" },
	{ "fullyUnlock", "()V" },
	{ "unlink", "(Ljava/util/concurrent/LinkedBlockingQueue$Node;Ljava/util/concurrent/LinkedBlockingQueue$Node;)V" },
};

static jclass interfaces[] { &class_java_util_concurrent_BlockingQueue, &class_java_io_Serializable, };

static jclass innerClasses[] {
	&class_java_util_concurrent_LinkedBlockingQueue$Node,
	&class_java_util_concurrent_LinkedBlockingQueue$Itr,
};

static FieldMetadata fields[] {
	{ "serialVersionUID", &class_long, (intptr_t) &SF_java_util_concurrent_LinkedBlockingQueue_serialVersionUID, "J", 26 },
	{ "capacity", &class_int, offsetof(java_util_concurrent_LinkedBlockingQueue, F_capacity), "I", 18 },
	{ "count", &class_java_util_concurrent_atomic_AtomicInteger, offsetof(java_util_concurrent_LinkedBlockingQueue, F_count), "Ljava/util/concurrent/atomic/AtomicInteger;", 18 },
	{ "head", &class_java_util_concurrent_LinkedBlockingQueue$Node, offsetof(java_util_concurrent_LinkedBlockingQueue, F_head), "Ljava/util/concurrent/LinkedBlockingQueue$Node;", 128 },
	{ "last", &class_java_util_concurrent_LinkedBlockingQueue$Node, offsetof(java_util_concurrent_LinkedBlockingQueue, F_last), "Ljava/util/concurrent/LinkedBlockingQueue$Node;", 130 },
	{ "takeLock", &class_java_util_concurrent_locks_ReentrantLock, offsetof(java_util_concurrent_LinkedBlockingQueue, F_takeLock), "Ljava/util/concurrent/locks/ReentrantLock;", 18 },
	{ "notEmpty", &class_java_util_concurrent_locks_Condition, offsetof(java_util_concurrent_LinkedBlockingQueue, F_notEmpty), "Ljava/util/concurrent/locks/Condition;", 18 },
	{ "putLock", &class_java_util_concurrent_locks_ReentrantLock, offsetof(java_util_concurrent_LinkedBlockingQueue, F_putLock), "Ljava/util/concurrent/locks/ReentrantLock;", 18 },
	{ "notFull", &class_java_util_concurrent_locks_Condition, offsetof(java_util_concurrent_LinkedBlockingQueue, F_notFull), "Ljava/util/concurrent/locks/Condition;", 18 },
};

static MethodMetadata methods[] {
	{ "signalNotEmpty", (intptr_t) M_java_util_concurrent_LinkedBlockingQueue_signalNotEmpty, VTABLE_java_util_concurrent_LinkedBlockingQueue_signalNotEmpty, "()V", 2 },
	{ "signalNotFull", (intptr_t) M_java_util_concurrent_LinkedBlockingQueue_signalNotFull, VTABLE_java_util_concurrent_LinkedBlockingQueue_signalNotFull, "()V", 2 },
	{ "enqueue", (intptr_t) M_java_util_concurrent_LinkedBlockingQueue_enqueue_java_util_concurrent_LinkedBlockingQueue$Node, VTABLE_java_util_concurrent_LinkedBlockingQueue_enqueue_java_util_concurrent_LinkedBlockingQueue$Node, "(Ljava/util/concurrent/LinkedBlockingQueue$Node;)V", 2 },
	{ "dequeue", (intptr_t) M_java_util_concurrent_LinkedBlockingQueue_dequeue_R_java_lang_Object, VTABLE_java_util_concurrent_LinkedBlockingQueue_dequeue_R_java_lang_Object, "()Ljava/lang/Object;", 2 },
	{ "fullyLock", (intptr_t) M_java_util_concurrent_LinkedBlockingQueue_fullyLock, VTABLE_java_util_concurrent_LinkedBlockingQueue_fullyLock, "()V", 0 },
	{ "fullyUnlock", (intptr_t) M_java_util_concurrent_LinkedBlockingQueue_fullyUnlock, VTABLE_java_util_concurrent_LinkedBlockingQueue_fullyUnlock, "()V", 0 },
	{ "<init>", (intptr_t) init_java_util_concurrent_LinkedBlockingQueue, 0, "()V", 1 },
	{ "<init>", (intptr_t) init_java_util_concurrent_LinkedBlockingQueue_int, 0, "(I)V", 1 },
	{ "<init>", (intptr_t) init_java_util_concurrent_LinkedBlockingQueue_java_util_Collection, 0, "(Ljava/util/Collection;)V", 1 },
	{ "size", (intptr_t) M_java_util_concurrent_LinkedBlockingQueue_size_R_int, VTABLE_java_util_concurrent_LinkedBlockingQueue_size_R_int, "()I", 1 },
	{ "remainingCapacity", (intptr_t) M_java_util_concurrent_LinkedBlockingQueue_remainingCapacity_R_int, VTABLE_java_util_concurrent_LinkedBlockingQueue_remainingCapacity_R_int, "()I", 1 },
	{ "put", (intptr_t) M_java_util_concurrent_LinkedBlockingQueue_put_java_lang_Object, VTABLE_java_util_concurrent_LinkedBlockingQueue_put_java_lang_Object, "(Ljava/lang/Object;)V", 1 },
	{ "offer", (intptr_t) M_java_util_concurrent_LinkedBlockingQueue_offer_java_lang_Object_long_java_util_concurrent_TimeUnit_R_boolean, VTABLE_java_util_concurrent_LinkedBlockingQueue_offer_java_lang_Object_long_java_util_concurrent_TimeUnit_R_boolean, "(Ljava/lang/Object;JLjava/util/concurrent/TimeUnit;)Z", 1 },
	{ "offer", (intptr_t) M_java_util_concurrent_LinkedBlockingQueue_offer_java_lang_Object_R_boolean, VTABLE_java_util_concurrent_LinkedBlockingQueue_offer_java_lang_Object_R_boolean, "(Ljava/lang/Object;)Z", 1 },
	{ "take", (intptr_t) M_java_util_concurrent_LinkedBlockingQueue_take_R_java_lang_Object, VTABLE_java_util_concurrent_LinkedBlockingQueue_take_R_java_lang_Object, "()Ljava/lang/Object;", 1 },
	{ "poll", (intptr_t) M_java_util_concurrent_LinkedBlockingQueue_poll_long_java_util_concurrent_TimeUnit_R_java_lang_Object, VTABLE_java_util_concurrent_LinkedBlockingQueue_poll_long_java_util_concurrent_TimeUnit_R_java_lang_Object, "(JLjava/util/concurrent/TimeUnit;)Ljava/lang/Object;", 1 },
	{ "poll", (intptr_t) M_java_util_concurrent_LinkedBlockingQueue_poll_R_java_lang_Object, VTABLE_java_util_concurrent_LinkedBlockingQueue_poll_R_java_lang_Object, "()Ljava/lang/Object;", 1 },
	{ "peek", (intptr_t) M_java_util_concurrent_LinkedBlockingQueue_peek_R_java_lang_Object, VTABLE_java_util_concurrent_LinkedBlockingQueue_peek_R_java_lang_Object, "()Ljava/lang/Object;", 1 },
	{ "unlink", (intptr_t) M_java_util_concurrent_LinkedBlockingQueue_unlink_java_util_concurrent_LinkedBlockingQueue$Node_java_util_concurrent_LinkedBlockingQueue$Node, VTABLE_java_util_concurrent_LinkedBlockingQueue_unlink_java_util_concurrent_LinkedBlockingQueue$Node_java_util_concurrent_LinkedBlockingQueue$Node, "(Ljava/util/concurrent/LinkedBlockingQueue$Node;Ljava/util/concurrent/LinkedBlockingQueue$Node;)V", 0 },
	{ "remove", (intptr_t) M_java_util_concurrent_LinkedBlockingQueue_remove_java_lang_Object_R_boolean, VTABLE_java_util_concurrent_LinkedBlockingQueue_remove_java_lang_Object_R_boolean, "(Ljava/lang/Object;)Z", 1 },
	{ "contains", (intptr_t) M_java_util_concurrent_LinkedBlockingQueue_contains_java_lang_Object_R_boolean, VTABLE_java_util_concurrent_LinkedBlockingQueue_contains_java_lang_Object_R_boolean, "(Ljava/lang/Object;)Z", 1 },
	{ "toArray", (intptr_t) M_java_util_concurrent_LinkedBlockingQueue_toArray_R_Array1_java_lang_Object, VTABLE_java_util_concurrent_LinkedBlockingQueue_toArray_R_Array1_java_lang_Object, "()[Ljava/lang/Object;", 1 },
	{ "toArray", (intptr_t) M_java_util_concurrent_LinkedBlockingQueue_toArray_Array1_java_lang_Object_R_Array1_java_lang_Object, VTABLE_java_util_concurrent_LinkedBlockingQueue_toArray_Array1_java_lang_Object_R_Array1_java_lang_Object, "([Ljava/lang/Object;)[Ljava/lang/Object;", 1 },
	{ "toString", (intptr_t) M_java_util_concurrent_LinkedBlockingQueue_toString_R_java_lang_String, VTABLE_java_util_concurrent_LinkedBlockingQueue_toString_R_java_lang_String, "()Ljava/lang/String;", 1 },
	{ "clear", (intptr_t) M_java_util_concurrent_LinkedBlockingQueue_clear, VTABLE_java_util_concurrent_LinkedBlockingQueue_clear, "()V", 1 },
	{ "drainTo", (intptr_t) M_java_util_concurrent_LinkedBlockingQueue_drainTo_java_util_Collection_R_int, VTABLE_java_util_concurrent_LinkedBlockingQueue_drainTo_java_util_Collection_R_int, "(Ljava/util/Collection;)I", 1 },
	{ "drainTo", (intptr_t) M_java_util_concurrent_LinkedBlockingQueue_drainTo_java_util_Collection_int_R_int, VTABLE_java_util_concurrent_LinkedBlockingQueue_drainTo_java_util_Collection_int_R_int, "(Ljava/util/Collection;I)I", 1 },
	{ "iterator", (intptr_t) M_java_util_concurrent_LinkedBlockingQueue_iterator_R_java_util_Iterator, VTABLE_java_util_concurrent_LinkedBlockingQueue_iterator_R_java_util_Iterator, "()Ljava/util/Iterator;", 1 },
};

Class class_java_util_concurrent_LinkedBlockingQueue{
		.nativeName = (intptr_t) "java/util/concurrent/LinkedBlockingQueue",
		.parentClass = (intptr_t) &class_java_util_AbstractQueue,
		.size = sizeof(java_util_concurrent_LinkedBlockingQueue),
		.classVtable = (intptr_t) vtable_java_util_concurrent_LinkedBlockingQueue,
		.staticInitializer = (intptr_t) clinit_java_util_concurrent_LinkedBlockingQueue,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_java_util_concurrent_LinkedBlockingQueue,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 2,
		.nativeInnerClasses = (intptr_t) innerClasses,
		.access = 33,
		.interfaceCount = 2,
		.nativeInterfaces = (intptr_t) interfaces,
		.fieldCount = 9,
		.nativeFields = (intptr_t) fields,
		.methodCount = 28,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 45,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_java_util_concurrent_LinkedBlockingQueue = registerClass(&class_java_util_concurrent_LinkedBlockingQueue);

}
