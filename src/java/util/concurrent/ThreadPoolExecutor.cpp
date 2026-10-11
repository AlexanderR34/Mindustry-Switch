#include "java/util/concurrent/ThreadPoolExecutor.h"
#include "java/lang/StringBuilder.h"
#include "java/lang/Error.h"
#include "java/util/ConcurrentModificationException.h"
#include "java/lang/InterruptedException.h"
#include "java/util/concurrent/AbstractExecutorService.h"
#include "java/util/concurrent/Future.h"
#include "java/util/concurrent/RejectedExecutionHandler.h"
#include "java/util/ArrayList.h"
#include "java/util/concurrent/ThreadPoolExecutor_DiscardPolicy.h"
#include "java/util/concurrent/ThreadPoolExecutor_AbortPolicy.h"
#include "java/lang/Runnable.h"
#include "java/util/Collection.h"
#include "java/lang/String.h"
#include "java/util/concurrent/ThreadFactory.h"
#include "java/lang/NullPointerException.h"
#include "java/util/HashSet.h"
#include "java/lang/Throwable.h"
#include "java/util/concurrent/locks/ReentrantLock.h"
#include "java/lang/Thread.h"
#include "java/lang/Math.h"
#include "java/util/Iterator.h"
#include "java/util/concurrent/atomic/AtomicInteger.h"
#include "java/util/concurrent/TimeUnit.h"
#include "java/lang/IllegalArgumentException.h"
#include "java/util/concurrent/Executors.h"
#include "java/util/concurrent/BlockingQueue.h"
#include "java/lang/Object.h"
#include "java/util/concurrent/ThreadPoolExecutor_Worker.h"
#include "java/util/concurrent/ThreadPoolExecutor.h"
#include "java/util/concurrent/ThreadPoolExecutor_CallerRunsPolicy.h"
#include "java/util/concurrent/locks/Condition.h"
#include "java/lang/IllegalThreadStateException.h"
#include "java/lang/RuntimeException.h"
#include "java/util/List.h"
#include "java/util/concurrent/ThreadPoolExecutor_DiscardOldestPolicy.h"
#include "java/lang/SecurityException.h"

extern "C" {

jint SF_java_util_concurrent_ThreadPoolExecutor_COUNT_BITS;
jint SF_java_util_concurrent_ThreadPoolExecutor_CAPACITY;
jint SF_java_util_concurrent_ThreadPoolExecutor_RUNNING;
jint SF_java_util_concurrent_ThreadPoolExecutor_SHUTDOWN;
jint SF_java_util_concurrent_ThreadPoolExecutor_STOP;
jint SF_java_util_concurrent_ThreadPoolExecutor_TIDYING;
jint SF_java_util_concurrent_ThreadPoolExecutor_TERMINATED;
jobject SF_java_util_concurrent_ThreadPoolExecutor_defaultHandler;
jbool SF_java_util_concurrent_ThreadPoolExecutor_ONLY_ONE;

void mark_java_util_concurrent_ThreadPoolExecutor(jobject object, jint mark, jint depth) {
	if (!object) {
		if (SF_java_util_concurrent_ThreadPoolExecutor_defaultHandler)
			((gc_mark_ptr) ((jclass) ((jobject) SF_java_util_concurrent_ThreadPoolExecutor_defaultHandler)->clazz)->markFunction)((jobject) SF_java_util_concurrent_ThreadPoolExecutor_defaultHandler, mark, depth + 1);
		return;
	}
	if (depth > GC_DEPTH_ALWAYS && (object->gcMark < GC_MARK_START || object->gcMark == mark))
		return;
	if (depth > MAX_GC_MARK_DEPTH) {
		markDeepObject(object);
		return;
	}
	mark_java_util_concurrent_AbstractExecutorService(object, mark, depth);
	if (object->gcMark >= GC_MARK_START)
		object->gcMark = mark;
	auto self = (java_util_concurrent_ThreadPoolExecutor *) object;
	if (self->F_ctl)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_ctl)->clazz)->markFunction)((jobject) self->F_ctl, mark, depth + 1);
	if (self->F_workQueue)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_workQueue)->clazz)->markFunction)((jobject) self->F_workQueue, mark, depth + 1);
	if (self->F_mainLock)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_mainLock)->clazz)->markFunction)((jobject) self->F_mainLock, mark, depth + 1);
	if (self->F_workers)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_workers)->clazz)->markFunction)((jobject) self->F_workers, mark, depth + 1);
	if (self->F_termination)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_termination)->clazz)->markFunction)((jobject) self->F_termination, mark, depth + 1);
	if (self->F_threadFactory)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_threadFactory)->clazz)->markFunction)((jobject) self->F_threadFactory, mark, depth + 1);
	if (self->F_handler)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_handler)->clazz)->markFunction)((jobject) self->F_handler, mark, depth + 1);
}

jint SM_java_util_concurrent_ThreadPoolExecutor_runStateOf_int_R_int(jcontext ctx, jint param0) {
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/concurrent/ThreadPoolExecutor:runStateOf", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_util_concurrent_ThreadPoolExecutor(ctx);
	frame[0].i = param0;
	{
	LINE_NUMBER(394);
	popStackFrame(ctx);
	return ((frame[0].i) & (jint(-536870912)));
	}

	popStackFrame(ctx);
}

jint SM_java_util_concurrent_ThreadPoolExecutor_workerCountOf_int_R_int(jcontext ctx, jint param0) {
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/concurrent/ThreadPoolExecutor:workerCountOf", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_util_concurrent_ThreadPoolExecutor(ctx);
	frame[0].i = param0;
	{
	LINE_NUMBER(395);
	popStackFrame(ctx);
	return ((frame[0].i) & (jint(536870911)));
	}

	popStackFrame(ctx);
}

jint SM_java_util_concurrent_ThreadPoolExecutor_ctlOf_int_int_R_int(jcontext ctx, jint param0, jint param1) {
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/concurrent/ThreadPoolExecutor:ctlOf", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_util_concurrent_ThreadPoolExecutor(ctx);
	frame[0].i = param0;
	frame[1].i = param1;
	{
	LINE_NUMBER(396);
	popStackFrame(ctx);
	return ((frame[0].i) | (frame[1].i));
	}

	popStackFrame(ctx);
}

jbool SM_java_util_concurrent_ThreadPoolExecutor_runStateLessThan_int_int_R_boolean(jcontext ctx, jint param0, jint param1) {
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/concurrent/ThreadPoolExecutor:runStateLessThan", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_util_concurrent_ThreadPoolExecutor(ctx);
	frame[0].i = param0;
	frame[1].i = param1;
	{
	LINE_NUMBER(404);
	if ((frame[0].i) >= (frame[1].i)) goto label_1;
	}
	INST_ICONST(1);
	goto label_2;
label_1:;
	INST_ICONST(0);
label_2:;
	popStackFrame(ctx);
	INST_IRETURN();

	popStackFrame(ctx);
}

jbool SM_java_util_concurrent_ThreadPoolExecutor_runStateAtLeast_int_int_R_boolean(jcontext ctx, jint param0, jint param1) {
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/concurrent/ThreadPoolExecutor:runStateAtLeast", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_util_concurrent_ThreadPoolExecutor(ctx);
	frame[0].i = param0;
	frame[1].i = param1;
	{
	LINE_NUMBER(408);
	if ((frame[0].i) < (frame[1].i)) goto label_1;
	}
	INST_ICONST(1);
	goto label_2;
label_1:;
	INST_ICONST(0);
label_2:;
	popStackFrame(ctx);
	INST_IRETURN();

	popStackFrame(ctx);
}

jbool SM_java_util_concurrent_ThreadPoolExecutor_isRunning_int_R_boolean(jcontext ctx, jint param0) {
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/concurrent/ThreadPoolExecutor:isRunning", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_util_concurrent_ThreadPoolExecutor(ctx);
	frame[0].i = param0;
	{
	LINE_NUMBER(412);
	if ((frame[0].i) >= 0) goto label_1;
	}
	INST_ICONST(1);
	goto label_2;
label_1:;
	INST_ICONST(0);
label_2:;
	popStackFrame(ctx);
	INST_IRETURN();

	popStackFrame(ctx);
}

jbool M_java_util_concurrent_ThreadPoolExecutor_compareAndIncrementWorkerCount_int_R_boolean(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/concurrent/ThreadPoolExecutor:compareAndIncrementWorkerCount", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(419);
	sp[0].o = (jobject)((java_util_concurrent_ThreadPoolExecutor *) NULL_CHECK((frame[0].o)))->F_ctl;
	jint temp0 = (jint)((func_java_util_concurrent_atomic_AtomicInteger_compareAndSet_int_int_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_concurrent_atomic_AtomicInteger_compareAndSet_int_int_R_boolean])(ctx, sp[0].o, (frame[1].i), ((frame[1].i) + (jint(1))));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jbool M_java_util_concurrent_ThreadPoolExecutor_compareAndDecrementWorkerCount_int_R_boolean(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/concurrent/ThreadPoolExecutor:compareAndDecrementWorkerCount", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(426);
	sp[0].o = (jobject)((java_util_concurrent_ThreadPoolExecutor *) NULL_CHECK((frame[0].o)))->F_ctl;
	jint temp0 = (jint)((func_java_util_concurrent_atomic_AtomicInteger_compareAndSet_int_int_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_concurrent_atomic_AtomicInteger_compareAndSet_int_int_R_boolean])(ctx, sp[0].o, (frame[1].i), ((frame[1].i) - (jint(1))));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

void M_java_util_concurrent_ThreadPoolExecutor_decrementWorkerCount(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/concurrent/ThreadPoolExecutor:decrementWorkerCount", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
label_0:;
	{
	LINE_NUMBER(435);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((java_util_concurrent_ThreadPoolExecutor *) NULL_CHECK((frame[0].o)))->F_ctl;
	jint temp0 = (jint)((func_java_util_concurrent_atomic_AtomicInteger_get_R_int) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_util_concurrent_atomic_AtomicInteger_get_R_int])(ctx, sp[1].o);
	jint temp1 = (jint)M_java_util_concurrent_ThreadPoolExecutor_compareAndDecrementWorkerCount_int_R_boolean(ctx, sp[0].o, temp0);
	if (temp1 == 0) goto label_0;
	}
	LINE_NUMBER(436);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_java_util_concurrent_ThreadPoolExecutor_advanceRunState_int(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/concurrent/ThreadPoolExecutor:advanceRunState", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
label_0:;
	{
	LINE_NUMBER(676);
	sp[0].o = (jobject)((java_util_concurrent_ThreadPoolExecutor *) NULL_CHECK((frame[0].o)))->F_ctl;
	jint temp0 = (jint)((func_java_util_concurrent_atomic_AtomicInteger_get_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_concurrent_atomic_AtomicInteger_get_R_int])(ctx, sp[0].o);
	frame[2].i = temp0;
	LINE_NUMBER(677);
	jint temp1 = (jint)SM_java_util_concurrent_ThreadPoolExecutor_runStateAtLeast_int_int_R_boolean(ctx, (frame[2].i), (frame[1].i));
	if (temp1 != 0) goto label_2;
	}
	{
	sp[0].o = (jobject)((java_util_concurrent_ThreadPoolExecutor *) NULL_CHECK((frame[0].o)))->F_ctl;
	jint temp0 = frame[2].i;
	jint temp1 = frame[1].i;
	jint temp2 = frame[2].i;
	LINE_NUMBER(678);
	jint temp3 = (jint)SM_java_util_concurrent_ThreadPoolExecutor_workerCountOf_int_R_int(ctx, temp2);
	jint temp4 = (jint)SM_java_util_concurrent_ThreadPoolExecutor_ctlOf_int_int_R_int(ctx, temp1, temp3);
	jint temp5 = (jint)((func_java_util_concurrent_atomic_AtomicInteger_compareAndSet_int_int_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_concurrent_atomic_AtomicInteger_compareAndSet_int_int_R_boolean])(ctx, sp[0].o, temp0, temp4);
	if (temp5 == 0) goto label_4;
	}
	LINE_NUMBER(679);
	goto label_2;
label_4:;
	LINE_NUMBER(680);
	goto label_0;
label_2:;
	LINE_NUMBER(681);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_java_util_concurrent_ThreadPoolExecutor_tryTerminate(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/concurrent/ThreadPoolExecutor:tryTerminate", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
label_10:;
	{
	LINE_NUMBER(695);
	sp[0].o = (jobject)((java_util_concurrent_ThreadPoolExecutor *) NULL_CHECK((frame[0].o)))->F_ctl;
	jint temp0 = (jint)((func_java_util_concurrent_atomic_AtomicInteger_get_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_concurrent_atomic_AtomicInteger_get_R_int])(ctx, sp[0].o);
	frame[1].i = temp0;
	LINE_NUMBER(696);
	jint temp1 = (jint)SM_java_util_concurrent_ThreadPoolExecutor_isRunning_int_R_boolean(ctx, (frame[1].i));
	if (temp1 != 0) goto label_12;
	}
	{
	jint temp0 = frame[1].i;
	jint temp1 = jint(1073741824);
	LINE_NUMBER(697);
	jint temp2 = (jint)SM_java_util_concurrent_ThreadPoolExecutor_runStateAtLeast_int_int_R_boolean(ctx, temp0, temp1);
	if (temp2 != 0) goto label_12;
	}
	{
	jint temp0 = frame[1].i;
	LINE_NUMBER(698);
	jint temp1 = (jint)SM_java_util_concurrent_ThreadPoolExecutor_runStateOf_int_R_int(ctx, temp0);
	if (temp1 != 0) goto label_15;
	}
	{
	sp[0].o = (jobject)((java_util_concurrent_ThreadPoolExecutor *) NULL_CHECK((frame[0].o)))->F_workQueue;
	jint temp0 = (jint)((func_java_util_Collection_isEmpty_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_Collection, INDEX_java_util_Collection_isEmpty_R_boolean, sp[0].o))(ctx, sp[0].o);
	if (temp0 != 0) goto label_15;
	}
label_12:;
	LINE_NUMBER(699);
	popStackFrame(ctx);
	INST_RETURN();
label_15:;
	{
	LINE_NUMBER(700);
	jint temp0 = (jint)SM_java_util_concurrent_ThreadPoolExecutor_workerCountOf_int_R_int(ctx, (frame[1].i));
	if (temp0 == 0) goto label_16;
	}
	{
	LINE_NUMBER(701);
	M_java_util_concurrent_ThreadPoolExecutor_interruptIdleWorkers_boolean(ctx, (frame[0].o), (jint(1)));
	LINE_NUMBER(702);
	popStackFrame(ctx);
	return;
	}
label_16:;
	{
	LINE_NUMBER(705);
	sp[0].o = (jobject)((java_util_concurrent_ThreadPoolExecutor *) NULL_CHECK((frame[0].o)))->F_mainLock;
	frame[2].o = sp[0].o;
	LINE_NUMBER(706);
	((func_java_util_concurrent_locks_ReentrantLock_lock) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_java_util_concurrent_locks_ReentrantLock_lock])(ctx, (frame[2].o));
	}
label_7: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_6; }
	}
	{
	LINE_NUMBER(708);
	sp[0].o = (jobject)((java_util_concurrent_ThreadPoolExecutor *) NULL_CHECK((frame[0].o)))->F_ctl;
	jint temp0 = frame[1].i;
	jint temp1 = (jint)SM_java_util_concurrent_ThreadPoolExecutor_ctlOf_int_int_R_int(ctx, (jint(1073741824)), (jint(0)));
	jint temp2 = (jint)((func_java_util_concurrent_atomic_AtomicInteger_compareAndSet_int_int_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_concurrent_atomic_AtomicInteger_compareAndSet_int_int_R_boolean])(ctx, sp[0].o, temp0, temp1);
	if (temp2 == 0) { popExceptionFrames(frameRef, 1); goto label_20; }
	}
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(710);
	((func_java_util_concurrent_ThreadPoolExecutor_terminated) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_util_concurrent_ThreadPoolExecutor_terminated])(ctx, (frame[0].o));
	}
	popExceptionFrame(frameRef);
	{
	LINE_NUMBER(712);
	sp[0].o = (jobject)((java_util_concurrent_ThreadPoolExecutor *) NULL_CHECK((frame[0].o)))->F_ctl;
	jint temp0 = (jint)SM_java_util_concurrent_ThreadPoolExecutor_ctlOf_int_int_R_int(ctx, (jint(1610612736)), (jint(0)));
	((func_java_util_concurrent_atomic_AtomicInteger_set_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_concurrent_atomic_AtomicInteger_set_int])(ctx, sp[0].o, temp0);
	LINE_NUMBER(713);
	sp[0].o = (jobject)((java_util_concurrent_ThreadPoolExecutor *) NULL_CHECK((frame[0].o)))->F_termination;
	((func_java_util_concurrent_locks_Condition_signalAll) resolveInterfaceMethod(ctx, &class_java_util_concurrent_locks_Condition, INDEX_java_util_concurrent_locks_Condition_signalAll, sp[0].o))(ctx, sp[0].o);
	LINE_NUMBER(714);
	goto label_5;
	}
label_2:;
	{
	sp -= 1;
	LINE_NUMBER(712);
	frame[3].o = sp[0].o;
	sp[0].o = (jobject)((java_util_concurrent_ThreadPoolExecutor *) NULL_CHECK((frame[0].o)))->F_ctl;
	jint temp0 = (jint)SM_java_util_concurrent_ThreadPoolExecutor_ctlOf_int_int_R_int(ctx, (jint(1610612736)), (jint(0)));
	((func_java_util_concurrent_atomic_AtomicInteger_set_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_concurrent_atomic_AtomicInteger_set_int])(ctx, sp[0].o, temp0);
	LINE_NUMBER(713);
	sp[0].o = (jobject)((java_util_concurrent_ThreadPoolExecutor *) NULL_CHECK((frame[0].o)))->F_termination;
	((func_java_util_concurrent_locks_Condition_signalAll) resolveInterfaceMethod(ctx, &class_java_util_concurrent_locks_Condition, INDEX_java_util_concurrent_locks_Condition_signalAll, sp[0].o))(ctx, sp[0].o);
	LINE_NUMBER(714);
	throwException(ctx, (frame[3].o));	}
label_5:;
	popExceptionFrame(frameRef);
	{
	LINE_NUMBER(718);
	((func_java_util_concurrent_locks_ReentrantLock_unlock) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_java_util_concurrent_locks_ReentrantLock_unlock])(ctx, (frame[2].o));
	LINE_NUMBER(715);
	popStackFrame(ctx);
	return;
	}
label_20:;
	{
	LINE_NUMBER(718);
	((func_java_util_concurrent_locks_ReentrantLock_unlock) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_java_util_concurrent_locks_ReentrantLock_unlock])(ctx, (frame[2].o));
	LINE_NUMBER(719);
	goto label_27;
	}
label_6:;
label_9: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_6; }
	}
	LINE_NUMBER(718);
	INST_ASTORE(4);
	popExceptionFrame(frameRef);
	{
	((func_java_util_concurrent_locks_ReentrantLock_unlock) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_java_util_concurrent_locks_ReentrantLock_unlock])(ctx, (frame[2].o));
	LINE_NUMBER(719);
	throwException(ctx, (frame[4].o));	}
label_27:;
	LINE_NUMBER(721);
	goto label_10;

	popStackFrame(ctx);
}

void M_java_util_concurrent_ThreadPoolExecutor_checkShutdownAccess(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[1];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/concurrent/ThreadPoolExecutor:checkShutdownAccess", 1 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	LINE_NUMBER(749);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_java_util_concurrent_ThreadPoolExecutor_interruptWorkers(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/concurrent/ThreadPoolExecutor:interruptWorkers", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(756);
	sp[0].o = (jobject)((java_util_concurrent_ThreadPoolExecutor *) NULL_CHECK((frame[0].o)))->F_mainLock;
	frame[1].o = sp[0].o;
	LINE_NUMBER(757);
	((func_java_util_concurrent_locks_ReentrantLock_lock) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_util_concurrent_locks_ReentrantLock_lock])(ctx, (frame[1].o));
	}
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(759);
	sp[0].o = (jobject)((java_util_concurrent_ThreadPoolExecutor *) NULL_CHECK((frame[0].o)))->F_workers;
	sp[0].o = (jobject)((func_java_util_HashSet_iterator_R_java_util_Iterator) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_HashSet_iterator_R_java_util_Iterator])(ctx, sp[0].o);
	frame[2].o = sp[0].o;
	}
label_8:;
	{
	jint temp0 = (jint)((func_java_util_Iterator_hasNext_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_hasNext_R_boolean, (frame[2].o)))(ctx, (frame[2].o));
	if (temp0 == 0) goto label_1;
	}
	{
	sp[0].o = (jobject)((func_java_util_Iterator_next_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_next_R_java_lang_Object, (frame[2].o)))(ctx, (frame[2].o));
	frame[3].o = (checkCast(ctx, &class_java_util_concurrent_ThreadPoolExecutor$Worker, sp[0].o));
	LINE_NUMBER(760);
	((func_java_util_concurrent_ThreadPoolExecutor$Worker_interruptIfStarted) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_java_util_concurrent_ThreadPoolExecutor$Worker_interruptIfStarted])(ctx, (frame[3].o));
	goto label_8;
	}
label_1:;
	popExceptionFrame(frameRef);
	{
	LINE_NUMBER(762);
	((func_java_util_concurrent_locks_ReentrantLock_unlock) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_util_concurrent_locks_ReentrantLock_unlock])(ctx, (frame[1].o));
	LINE_NUMBER(763);
	goto label_12;
	}
label_2:;
label_5: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	LINE_NUMBER(762);
	INST_ASTORE(4);
	popExceptionFrame(frameRef);
	{
	((func_java_util_concurrent_locks_ReentrantLock_unlock) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_util_concurrent_locks_ReentrantLock_unlock])(ctx, (frame[1].o));
	LINE_NUMBER(763);
	throwException(ctx, (frame[4].o));	}
label_12:;
	LINE_NUMBER(764);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_java_util_concurrent_ThreadPoolExecutor_interruptIdleWorkers_boolean(jcontext ctx, jobject self, jbool param0) {
	NULL_CHECK(self);
	jtype frame[10];
	auto stack = &frame[9];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/concurrent/ThreadPoolExecutor:interruptIdleWorkers", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(786);
	sp[0].o = (jobject)((java_util_concurrent_ThreadPoolExecutor *) NULL_CHECK((frame[0].o)))->F_mainLock;
	frame[2].o = sp[0].o;
	LINE_NUMBER(787);
	((func_java_util_concurrent_locks_ReentrantLock_lock) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_java_util_concurrent_locks_ReentrantLock_lock])(ctx, (frame[2].o));
	}
label_13: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_12; }
	}
	{
	LINE_NUMBER(789);
	sp[0].o = (jobject)((java_util_concurrent_ThreadPoolExecutor *) NULL_CHECK((frame[0].o)))->F_workers;
	sp[0].o = (jobject)((func_java_util_HashSet_iterator_R_java_util_Iterator) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_HashSet_iterator_R_java_util_Iterator])(ctx, sp[0].o);
	frame[3].o = sp[0].o;
	}
label_18:;
	{
	jint temp0 = (jint)((func_java_util_Iterator_hasNext_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_hasNext_R_boolean, (frame[3].o)))(ctx, (frame[3].o));
	if (temp0 == 0) goto label_11;
	}
	{
	sp[0].o = (jobject)((func_java_util_Iterator_next_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_next_R_java_lang_Object, (frame[3].o)))(ctx, (frame[3].o));
	frame[4].o = (checkCast(ctx, &class_java_util_concurrent_ThreadPoolExecutor$Worker, sp[0].o));
	LINE_NUMBER(790);
	sp[0].o = (jobject)((java_util_concurrent_ThreadPoolExecutor$Worker *) NULL_CHECK((frame[4].o)))->F_thread;
	frame[5].o = sp[0].o;
	LINE_NUMBER(791);
	jint temp0 = (jint)((func_java_lang_Thread_isInterrupted_R_boolean) ((void **) nullCheck(ctx, (frame[5].o))->vtable)[VTABLE_java_lang_Thread_isInterrupted_R_boolean])(ctx, (frame[5].o));
	if (temp0 != 0) goto label_21;
	}
	{
	jint temp0 = (jint)((func_java_util_concurrent_ThreadPoolExecutor$Worker_tryLock_R_boolean) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_java_util_concurrent_ThreadPoolExecutor$Worker_tryLock_R_boolean])(ctx, (frame[4].o));
	if (temp0 == 0) goto label_21;
	}
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_SecurityException))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
label_5: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 2); goto label_4; }
	}
	{
	LINE_NUMBER(793);
	((func_java_lang_Thread_interrupt) ((void **) nullCheck(ctx, (frame[5].o))->vtable)[VTABLE_java_lang_Thread_interrupt])(ctx, (frame[5].o));
	}
	popExceptionFrame(frameRef);
	popExceptionFrame(frameRef);
	{
	LINE_NUMBER(796);
	((func_java_util_concurrent_ThreadPoolExecutor$Worker_unlock) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_java_util_concurrent_ThreadPoolExecutor$Worker_unlock])(ctx, (frame[4].o));
	LINE_NUMBER(797);
	goto label_21;
	}
label_2:;
label_7: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_4; }
	}
	LINE_NUMBER(794);
	INST_ASTORE(6);
	popExceptionFrame(frameRef);
	{
	LINE_NUMBER(796);
	((func_java_util_concurrent_ThreadPoolExecutor$Worker_unlock) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_java_util_concurrent_ThreadPoolExecutor$Worker_unlock])(ctx, (frame[4].o));
	LINE_NUMBER(797);
	goto label_21;
	}
label_4:;
label_9: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_4; }
	}
	LINE_NUMBER(796);
	INST_ASTORE(7);
	popExceptionFrame(frameRef);
	{
	((func_java_util_concurrent_ThreadPoolExecutor$Worker_unlock) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_java_util_concurrent_ThreadPoolExecutor$Worker_unlock])(ctx, (frame[4].o));
	LINE_NUMBER(797);
	throwException(ctx, (frame[7].o));	}
label_21:;
	{
	LINE_NUMBER(799);
	if ((frame[1].i) == 0) goto label_25;
	}
	LINE_NUMBER(800);
	goto label_11;
label_25:;
	LINE_NUMBER(801);
	goto label_18;
label_11:;
	popExceptionFrame(frameRef);
	{
	LINE_NUMBER(803);
	((func_java_util_concurrent_locks_ReentrantLock_unlock) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_java_util_concurrent_locks_ReentrantLock_unlock])(ctx, (frame[2].o));
	LINE_NUMBER(804);
	goto label_28;
	}
label_12:;
label_15: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_12; }
	}
	LINE_NUMBER(803);
	INST_ASTORE(8);
	popExceptionFrame(frameRef);
	{
	((func_java_util_concurrent_locks_ReentrantLock_unlock) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_java_util_concurrent_locks_ReentrantLock_unlock])(ctx, (frame[2].o));
	LINE_NUMBER(804);
	throwException(ctx, (frame[8].o));	}
label_28:;
	LINE_NUMBER(805);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_java_util_concurrent_ThreadPoolExecutor_interruptIdleWorkers(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/concurrent/ThreadPoolExecutor:interruptIdleWorkers", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(812);
	M_java_util_concurrent_ThreadPoolExecutor_interruptIdleWorkers_boolean(ctx, (frame[0].o), (jint(0)));
	LINE_NUMBER(813);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_java_util_concurrent_ThreadPoolExecutor_reject_java_lang_Runnable(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/concurrent/ThreadPoolExecutor:reject", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(827);
	sp[0].o = (jobject)((java_util_concurrent_ThreadPoolExecutor *) NULL_CHECK((frame[0].o)))->F_handler;
	((func_java_util_concurrent_RejectedExecutionHandler_rejectedExecution_java_lang_Runnable_java_util_concurrent_ThreadPoolExecutor) resolveInterfaceMethod(ctx, &class_java_util_concurrent_RejectedExecutionHandler, INDEX_java_util_concurrent_RejectedExecutionHandler_rejectedExecution_java_lang_Runnable_java_util_concurrent_ThreadPoolExecutor, sp[0].o))(ctx, sp[0].o, (frame[1].o), (frame[0].o));
	LINE_NUMBER(828);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_java_util_concurrent_ThreadPoolExecutor_onShutdown(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[1];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/concurrent/ThreadPoolExecutor:onShutdown", 1 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	LINE_NUMBER(836);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jbool M_java_util_concurrent_ThreadPoolExecutor_isRunningOrShutdown_boolean_R_boolean(jcontext ctx, jobject self, jbool param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/concurrent/ThreadPoolExecutor:isRunningOrShutdown", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(845);
	sp[0].o = (jobject)((java_util_concurrent_ThreadPoolExecutor *) NULL_CHECK((frame[0].o)))->F_ctl;
	jint temp0 = (jint)((func_java_util_concurrent_atomic_AtomicInteger_get_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_concurrent_atomic_AtomicInteger_get_R_int])(ctx, sp[0].o);
	jint temp1 = (jint)SM_java_util_concurrent_ThreadPoolExecutor_runStateOf_int_R_int(ctx, temp0);
	frame[2].i = temp1;
	LINE_NUMBER(846);
	if ((frame[2].i) == (jint(-536870912))) goto label_2;
	}
	INST_ILOAD(2);
	if ((--sp)->i != 0) goto label_3;
	INST_ILOAD(1);
	if ((--sp)->i == 0) goto label_3;
label_2:;
	INST_ICONST(1);
	goto label_4;
label_3:;
	INST_ICONST(0);
label_4:;
	popStackFrame(ctx);
	INST_IRETURN();

	popStackFrame(ctx);
}

jobject M_java_util_concurrent_ThreadPoolExecutor_drainQueue_R_java_util_List(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[7];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/concurrent/ThreadPoolExecutor:drainQueue", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(856);
	sp[0].o = (jobject)((java_util_concurrent_ThreadPoolExecutor *) NULL_CHECK((frame[0].o)))->F_workQueue;
	frame[1].o = sp[0].o;
	LINE_NUMBER(857);
	clinit_java_util_ArrayList(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_util_ArrayList);
	init_java_util_ArrayList(ctx, sp[0].o);
	frame[2].o = sp[0].o;
	LINE_NUMBER(858);
	jint temp0 = (jint)((func_java_util_concurrent_BlockingQueue_drainTo_java_util_Collection_R_int) resolveInterfaceMethod(ctx, &class_java_util_concurrent_BlockingQueue, INDEX_java_util_concurrent_BlockingQueue_drainTo_java_util_Collection_R_int, (frame[1].o)))(ctx, (frame[1].o), (frame[2].o));
	LINE_NUMBER(859);
	jint temp1 = (jint)((func_java_util_Collection_isEmpty_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_Collection, INDEX_java_util_Collection_isEmpty_R_boolean, (frame[1].o)))(ctx, (frame[1].o));
	if (temp1 != 0) goto label_4;
	}
	{
	LINE_NUMBER(860);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)createArray(ctx, &class_java_lang_Runnable, (jint(0)));
	sp[0].o = (jobject)((func_java_util_Collection_toArray_Array1_java_lang_Object_R_Array1_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Collection, INDEX_java_util_Collection_toArray_Array1_java_lang_Object_R_Array1_java_lang_Object, sp[0].o))(ctx, sp[0].o, sp[1].o);
	frame[3].o = (checkCast(ctx, getArrayClass(&class_java_lang_Runnable, 1), sp[0].o));
	frame[4].i = (((jarray) nullCheck(ctx, (frame[3].o)))->length);
	frame[5].i = (jint(0));
	}
label_6:;
	{
	if ((frame[5].i) >= (frame[4].i)) goto label_4;
	}
	{
	frame[6].o = ((jobject)ARRAY_ACCESS(jobject, (frame[3].o), (frame[5].i)));
	LINE_NUMBER(861);
	jint temp0 = (jint)((func_java_util_concurrent_BlockingQueue_remove_java_lang_Object_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_concurrent_BlockingQueue, INDEX_java_util_concurrent_BlockingQueue_remove_java_lang_Object_R_boolean, (frame[1].o)))(ctx, (frame[1].o), (frame[6].o));
	if (temp0 == 0) goto label_8;
	}
	{
	LINE_NUMBER(862);
	jint temp0 = (jint)((func_java_util_ArrayList_add_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_java_util_ArrayList_add_java_lang_Object_R_boolean])(ctx, (frame[2].o), (frame[6].o));
	}
label_8:;
	{
	LINE_NUMBER(860);
	INST_IINC(5, 1);
	goto label_6;
	}
label_4:;
	{
	LINE_NUMBER(865);
	popStackFrame(ctx);
	return (frame[2].o);
	}

	popStackFrame(ctx);
}

jbool M_java_util_concurrent_ThreadPoolExecutor_addWorker_java_lang_Runnable_boolean_R_boolean(jcontext ctx, jobject self, jobject param0, jbool param1) {
	NULL_CHECK(self);
	jtype frame[16];
	auto stack = &frame[12];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/concurrent/ThreadPoolExecutor:addWorker", 16 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
label_12:;
	{
	LINE_NUMBER(901);
	sp[0].o = (jobject)((java_util_concurrent_ThreadPoolExecutor *) NULL_CHECK((frame[0].o)))->F_ctl;
	jint temp0 = (jint)((func_java_util_concurrent_atomic_AtomicInteger_get_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_concurrent_atomic_AtomicInteger_get_R_int])(ctx, sp[0].o);
	frame[3].i = temp0;
	LINE_NUMBER(902);
	jint temp1 = (jint)SM_java_util_concurrent_ThreadPoolExecutor_runStateOf_int_R_int(ctx, (frame[3].i));
	frame[4].i = temp1;
	LINE_NUMBER(905);
	if ((frame[4].i) < 0) goto label_15;
	}
	INST_ILOAD(4);
	if ((--sp)->i != 0) goto label_16;
	INST_ALOAD(1);
	if ((--sp)->o != nullptr) goto label_16;
	{
	sp[0].o = (jobject)((java_util_concurrent_ThreadPoolExecutor *) NULL_CHECK((frame[0].o)))->F_workQueue;
	LINE_NUMBER(908);
	jint temp0 = (jint)((func_java_util_Collection_isEmpty_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_Collection, INDEX_java_util_Collection_isEmpty_R_boolean, sp[0].o))(ctx, sp[0].o);
	if (temp0 == 0) goto label_15;
	}
label_16:;
	{
	LINE_NUMBER(909);
	popStackFrame(ctx);
	return (jint(0));
	}
label_15:;
	{
	LINE_NUMBER(912);
	jint temp0 = (jint)SM_java_util_concurrent_ThreadPoolExecutor_workerCountOf_int_R_int(ctx, (frame[3].i));
	frame[5].i = temp0;
	LINE_NUMBER(913);
	if ((frame[5].i) >= (jint(536870911))) goto label_19;
	}
	{
	jint temp0 = frame[5].i;
	LINE_NUMBER(914);
	sp[0].i = temp0;
	sp += 1;
	if ((frame[2].i) == 0) goto label_21;
	}
	{
	jint temp0 = (jint)((java_util_concurrent_ThreadPoolExecutor *) NULL_CHECK((frame[0].o)))->F_corePoolSize;
	sp[0].i = temp0;
	sp += 1;
	goto label_22;
	}
label_21:;
	INST_ALOAD(0);
	sp[-1].i = ((java_util_concurrent_ThreadPoolExecutor *) NULL_CHECK(sp[-1].o))->F_maximumPoolSize;
label_22:;
	sp -= 2; if (sp[0].i < sp[1].i) goto label_23;
label_19:;
	{
	LINE_NUMBER(915);
	popStackFrame(ctx);
	return (jint(0));
	}
label_23:;
	{
	LINE_NUMBER(916);
	jint temp0 = (jint)M_java_util_concurrent_ThreadPoolExecutor_compareAndIncrementWorkerCount_int_R_boolean(ctx, (frame[0].o), (frame[3].i));
	if (temp0 == 0) goto label_24;
	}
	LINE_NUMBER(917);
	goto label_26;
label_24:;
	{
	LINE_NUMBER(918);
	sp[0].o = (jobject)((java_util_concurrent_ThreadPoolExecutor *) NULL_CHECK((frame[0].o)))->F_ctl;
	jint temp0 = (jint)((func_java_util_concurrent_atomic_AtomicInteger_get_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_concurrent_atomic_AtomicInteger_get_R_int])(ctx, sp[0].o);
	frame[3].i = temp0;
	LINE_NUMBER(919);
	jint temp1 = (jint)SM_java_util_concurrent_ThreadPoolExecutor_runStateOf_int_R_int(ctx, (frame[3].i));
	if (temp1 == (frame[4].i)) goto label_28;
	}
	LINE_NUMBER(920);
	goto label_12;
label_28:;
	LINE_NUMBER(922);
	goto label_15;
label_26:;
	{
	LINE_NUMBER(925);
	frame[3].i = (jint(0));
	LINE_NUMBER(926);
	frame[4].i = (jint(0));
	LINE_NUMBER(927);
	frame[5].o = (jobject(nullptr));
	}
label_9: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_8; }
	}
	{
	LINE_NUMBER(929);
	clinit_java_util_concurrent_ThreadPoolExecutor$Worker(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_util_concurrent_ThreadPoolExecutor$Worker);
	init_java_util_concurrent_ThreadPoolExecutor$Worker_java_util_concurrent_ThreadPoolExecutor_java_lang_Runnable(ctx, sp[0].o, (frame[0].o), (frame[1].o));
	frame[5].o = sp[0].o;
	LINE_NUMBER(930);
	sp[0].o = (jobject)((java_util_concurrent_ThreadPoolExecutor$Worker *) NULL_CHECK((frame[5].o)))->F_thread;
	frame[6].o = sp[0].o;
	LINE_NUMBER(931);
	if ((frame[6].o) == nullptr) goto label_7;
	}
	{
	LINE_NUMBER(932);
	sp[0].o = (jobject)((java_util_concurrent_ThreadPoolExecutor *) NULL_CHECK((frame[0].o)))->F_mainLock;
	frame[7].o = sp[0].o;
	LINE_NUMBER(933);
	((func_java_util_concurrent_locks_ReentrantLock_lock) ((void **) nullCheck(ctx, (frame[7].o))->vtable)[VTABLE_java_util_concurrent_locks_ReentrantLock_lock])(ctx, (frame[7].o));
	}
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(938);
	sp[0].o = (jobject)((java_util_concurrent_ThreadPoolExecutor *) NULL_CHECK((frame[0].o)))->F_ctl;
	jint temp0 = (jint)((func_java_util_concurrent_atomic_AtomicInteger_get_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_concurrent_atomic_AtomicInteger_get_R_int])(ctx, sp[0].o);
	jint temp1 = (jint)SM_java_util_concurrent_ThreadPoolExecutor_runStateOf_int_R_int(ctx, temp0);
	frame[8].i = temp1;
	LINE_NUMBER(940);
	if ((frame[8].i) < 0) goto label_37;
	}
	INST_ILOAD(8);
	if ((--sp)->i != 0) goto label_1;
	INST_ALOAD(1);
	if ((--sp)->o != nullptr) goto label_1;
label_37:;
	{
	LINE_NUMBER(942);
	jint temp0 = (jint)((func_java_lang_Thread_isAlive_R_boolean) ((void **) nullCheck(ctx, (frame[6].o))->vtable)[VTABLE_java_lang_Thread_isAlive_R_boolean])(ctx, (frame[6].o));
	if (temp0 == 0) goto label_38;
	}
	{
	LINE_NUMBER(943);
	clinit_java_lang_IllegalThreadStateException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IllegalThreadStateException);
	init_java_lang_IllegalThreadStateException(ctx, sp[0].o);
	throwException(ctx, sp[0].o);	}
label_38:;
	{
	LINE_NUMBER(944);
	sp[0].o = (jobject)((java_util_concurrent_ThreadPoolExecutor *) NULL_CHECK((frame[0].o)))->F_workers;
	jint temp0 = (jint)((func_java_util_HashSet_add_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_HashSet_add_java_lang_Object_R_boolean])(ctx, sp[0].o, (frame[5].o));
	LINE_NUMBER(945);
	sp[0].o = (jobject)((java_util_concurrent_ThreadPoolExecutor *) NULL_CHECK((frame[0].o)))->F_workers;
	jint temp1 = (jint)((func_java_util_HashSet_size_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_HashSet_size_R_int])(ctx, sp[0].o);
	frame[9].i = temp1;
	LINE_NUMBER(946);
	if ((frame[9].i) <= ((jint)((java_util_concurrent_ThreadPoolExecutor *) NULL_CHECK((frame[0].o)))->F_largestPoolSize)) goto label_42;
	}
	{
	LINE_NUMBER(947);
	((java_util_concurrent_ThreadPoolExecutor *) NULL_CHECK((frame[0].o)))->F_largestPoolSize = (frame[9].i);
	}
label_42:;
	{
	LINE_NUMBER(948);
	frame[4].i = (jint(1));
	}
label_1:;
	popExceptionFrame(frameRef);
	{
	LINE_NUMBER(951);
	((func_java_util_concurrent_locks_ReentrantLock_unlock) ((void **) nullCheck(ctx, (frame[7].o))->vtable)[VTABLE_java_util_concurrent_locks_ReentrantLock_unlock])(ctx, (frame[7].o));
	LINE_NUMBER(952);
	goto label_45;
	}
label_2:;
label_5: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	LINE_NUMBER(951);
	INST_ASTORE(10);
	popExceptionFrame(frameRef);
	{
	((func_java_util_concurrent_locks_ReentrantLock_unlock) ((void **) nullCheck(ctx, (frame[7].o))->vtable)[VTABLE_java_util_concurrent_locks_ReentrantLock_unlock])(ctx, (frame[7].o));
	LINE_NUMBER(952);
	throwException(ctx, (frame[10].o));	}
label_45:;
	{
	LINE_NUMBER(953);
	if ((frame[4].i) == 0) goto label_7;
	}
	{
	LINE_NUMBER(954);
	((func_java_lang_Thread_start) ((void **) nullCheck(ctx, (frame[6].o))->vtable)[VTABLE_java_lang_Thread_start])(ctx, (frame[6].o));
	LINE_NUMBER(955);
	frame[3].i = (jint(1));
	}
label_7:;
	popExceptionFrame(frameRef);
	{
	LINE_NUMBER(959);
	if ((frame[3].i) != 0) goto label_49;
	}
	{
	LINE_NUMBER(960);
	M_java_util_concurrent_ThreadPoolExecutor_addWorkerFailed_java_util_concurrent_ThreadPoolExecutor$Worker(ctx, (frame[0].o), (frame[5].o));
	goto label_49;
	}
label_8:;
label_11: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_8; }
	}
	LINE_NUMBER(959);
	INST_ASTORE(11);
	popExceptionFrame(frameRef);
	INST_ILOAD(3);
	if ((--sp)->i != 0) goto label_51;
	{
	LINE_NUMBER(960);
	M_java_util_concurrent_ThreadPoolExecutor_addWorkerFailed_java_util_concurrent_ThreadPoolExecutor$Worker(ctx, (frame[0].o), (frame[5].o));
	}
label_51:;
	{
	LINE_NUMBER(961);
	throwException(ctx, (frame[11].o));	}
label_49:;
	{
	LINE_NUMBER(962);
	popStackFrame(ctx);
	return (frame[3].i);
	}

	popStackFrame(ctx);
}

void M_java_util_concurrent_ThreadPoolExecutor_addWorkerFailed_java_util_concurrent_ThreadPoolExecutor$Worker(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/concurrent/ThreadPoolExecutor:addWorkerFailed", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(973);
	sp[0].o = (jobject)((java_util_concurrent_ThreadPoolExecutor *) NULL_CHECK((frame[0].o)))->F_mainLock;
	frame[2].o = sp[0].o;
	LINE_NUMBER(974);
	((func_java_util_concurrent_locks_ReentrantLock_lock) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_java_util_concurrent_locks_ReentrantLock_lock])(ctx, (frame[2].o));
	}
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(976);
	if ((frame[1].o) == nullptr) goto label_6;
	}
	{
	LINE_NUMBER(977);
	sp[0].o = (jobject)((java_util_concurrent_ThreadPoolExecutor *) NULL_CHECK((frame[0].o)))->F_workers;
	jint temp0 = (jint)((func_java_util_HashSet_remove_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_HashSet_remove_java_lang_Object_R_boolean])(ctx, sp[0].o, (frame[1].o));
	}
label_6:;
	{
	LINE_NUMBER(978);
	M_java_util_concurrent_ThreadPoolExecutor_decrementWorkerCount(ctx, (frame[0].o));
	LINE_NUMBER(979);
	((func_java_util_concurrent_ThreadPoolExecutor_tryTerminate) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_util_concurrent_ThreadPoolExecutor_tryTerminate])(ctx, (frame[0].o));
	}
	popExceptionFrame(frameRef);
	{
	LINE_NUMBER(981);
	((func_java_util_concurrent_locks_ReentrantLock_unlock) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_java_util_concurrent_locks_ReentrantLock_unlock])(ctx, (frame[2].o));
	LINE_NUMBER(982);
	goto label_10;
	}
label_2:;
	{
	sp -= 1;
	LINE_NUMBER(981);
	frame[3].o = sp[0].o;
	((func_java_util_concurrent_locks_ReentrantLock_unlock) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_java_util_concurrent_locks_ReentrantLock_unlock])(ctx, (frame[2].o));
	LINE_NUMBER(982);
	throwException(ctx, (frame[3].o));	}
label_10:;
	LINE_NUMBER(983);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_java_util_concurrent_ThreadPoolExecutor_processWorkerExit_java_util_concurrent_ThreadPoolExecutor$Worker_boolean(jcontext ctx, jobject self, jobject param0, jbool param1) {
	NULL_CHECK(self);
	jtype frame[11];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/concurrent/ThreadPoolExecutor:processWorkerExit", 11 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(999);
	if ((frame[2].i) == 0) goto label_7;
	}
	{
	LINE_NUMBER(1000);
	M_java_util_concurrent_ThreadPoolExecutor_decrementWorkerCount(ctx, (frame[0].o));
	}
label_7:;
	{
	LINE_NUMBER(1002);
	sp[0].o = (jobject)((java_util_concurrent_ThreadPoolExecutor *) NULL_CHECK((frame[0].o)))->F_mainLock;
	frame[3].o = sp[0].o;
	LINE_NUMBER(1003);
	((func_java_util_concurrent_locks_ReentrantLock_lock) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_java_util_concurrent_locks_ReentrantLock_lock])(ctx, (frame[3].o));
	}
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(1005);
	sp[0].o = frame[0].o;
	((java_util_concurrent_ThreadPoolExecutor *) NULL_CHECK(sp[0].o))->F_completedTaskCount = (((jlong)((java_util_concurrent_ThreadPoolExecutor *) NULL_CHECK(sp[0].o))->F_completedTaskCount) + ((jlong)((java_util_concurrent_ThreadPoolExecutor$Worker *) NULL_CHECK((frame[1].o)))->F_completedTasks));
	LINE_NUMBER(1006);
	sp[0].o = (jobject)((java_util_concurrent_ThreadPoolExecutor *) NULL_CHECK((frame[0].o)))->F_workers;
	jint temp0 = (jint)((func_java_util_HashSet_remove_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_HashSet_remove_java_lang_Object_R_boolean])(ctx, sp[0].o, (frame[1].o));
	}
	popExceptionFrame(frameRef);
	{
	LINE_NUMBER(1008);
	((func_java_util_concurrent_locks_ReentrantLock_unlock) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_java_util_concurrent_locks_ReentrantLock_unlock])(ctx, (frame[3].o));
	LINE_NUMBER(1009);
	goto label_12;
	}
label_2:;
label_5: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	LINE_NUMBER(1008);
	INST_ASTORE(4);
	popExceptionFrame(frameRef);
	{
	((func_java_util_concurrent_locks_ReentrantLock_unlock) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_java_util_concurrent_locks_ReentrantLock_unlock])(ctx, (frame[3].o));
	LINE_NUMBER(1009);
	throwException(ctx, (frame[4].o));	}
label_12:;
	{
	LINE_NUMBER(1011);
	((func_java_util_concurrent_ThreadPoolExecutor_tryTerminate) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_util_concurrent_ThreadPoolExecutor_tryTerminate])(ctx, (frame[0].o));
	LINE_NUMBER(1013);
	sp[0].o = (jobject)((java_util_concurrent_ThreadPoolExecutor *) NULL_CHECK((frame[0].o)))->F_ctl;
	jint temp0 = (jint)((func_java_util_concurrent_atomic_AtomicInteger_get_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_concurrent_atomic_AtomicInteger_get_R_int])(ctx, sp[0].o);
	frame[4].i = temp0;
	LINE_NUMBER(1014);
	jint temp1 = (jint)SM_java_util_concurrent_ThreadPoolExecutor_runStateLessThan_int_int_R_boolean(ctx, (frame[4].i), (jint(536870912)));
	if (temp1 == 0) goto label_16;
	}
	{
	LINE_NUMBER(1015);
	if ((frame[2].i) != 0) goto label_18;
	}
	{
	LINE_NUMBER(1016);
	if (((jint)((java_util_concurrent_ThreadPoolExecutor *) NULL_CHECK((frame[0].o)))->F_allowCoreThreadTimeOut) == 0) goto label_20;
	}
	INST_ICONST(0);
	goto label_21;
label_20:;
	INST_ALOAD(0);
	sp[-1].i = ((java_util_concurrent_ThreadPoolExecutor *) NULL_CHECK(sp[-1].o))->F_corePoolSize;
label_21:;
	{
	sp -= 1;
	frame[5].i = sp[0].i;
	LINE_NUMBER(1017);
	if ((frame[5].i) != 0) goto label_23;
	}
	{
	sp[0].o = (jobject)((java_util_concurrent_ThreadPoolExecutor *) NULL_CHECK((frame[0].o)))->F_workQueue;
	jint temp0 = (jint)((func_java_util_Collection_isEmpty_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_Collection, INDEX_java_util_Collection_isEmpty_R_boolean, sp[0].o))(ctx, sp[0].o);
	if (temp0 != 0) goto label_23;
	}
	{
	LINE_NUMBER(1018);
	frame[5].i = (jint(1));
	}
label_23:;
	{
	LINE_NUMBER(1019);
	jint temp0 = (jint)SM_java_util_concurrent_ThreadPoolExecutor_workerCountOf_int_R_int(ctx, (frame[4].i));
	if (temp0 < (frame[5].i)) goto label_18;
	}
	LINE_NUMBER(1020);
	popStackFrame(ctx);
	INST_RETURN();
label_18:;
	{
	LINE_NUMBER(1022);
	jint temp0 = (jint)M_java_util_concurrent_ThreadPoolExecutor_addWorker_java_lang_Runnable_boolean_R_boolean(ctx, (frame[0].o), (jobject(nullptr)), (jint(0)));
	}
label_16:;
	LINE_NUMBER(1024);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jobject M_java_util_concurrent_ThreadPoolExecutor_getTask_R_java_lang_Runnable(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[11];
	auto stack = &frame[7];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/concurrent/ThreadPoolExecutor:getTask", 11 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(1044);
	frame[1].i = (jint(0));
	}
label_8:;
	{
	LINE_NUMBER(1047);
	sp[0].o = (jobject)((java_util_concurrent_ThreadPoolExecutor *) NULL_CHECK((frame[0].o)))->F_ctl;
	jint temp0 = (jint)((func_java_util_concurrent_atomic_AtomicInteger_get_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_concurrent_atomic_AtomicInteger_get_R_int])(ctx, sp[0].o);
	frame[2].i = temp0;
	LINE_NUMBER(1048);
	jint temp1 = (jint)SM_java_util_concurrent_ThreadPoolExecutor_runStateOf_int_R_int(ctx, (frame[2].i));
	frame[3].i = temp1;
	LINE_NUMBER(1051);
	if ((frame[3].i) < 0) goto label_11;
	}
	{
	if ((frame[3].i) >= (jint(536870912))) goto label_12;
	}
	{
	sp[0].o = (jobject)((java_util_concurrent_ThreadPoolExecutor *) NULL_CHECK((frame[0].o)))->F_workQueue;
	jint temp0 = (jint)((func_java_util_Collection_isEmpty_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_Collection, INDEX_java_util_Collection_isEmpty_R_boolean, sp[0].o))(ctx, sp[0].o);
	if (temp0 == 0) goto label_11;
	}
label_12:;
	{
	LINE_NUMBER(1052);
	M_java_util_concurrent_ThreadPoolExecutor_decrementWorkerCount(ctx, (frame[0].o));
	LINE_NUMBER(1053);
	popStackFrame(ctx);
	return (jobject(nullptr));
	}
label_11:;
	{
	LINE_NUMBER(1056);
	jint temp0 = (jint)SM_java_util_concurrent_ThreadPoolExecutor_workerCountOf_int_R_int(ctx, (frame[2].i));
	frame[4].i = temp0;
	LINE_NUMBER(1059);
	if (((jint)((java_util_concurrent_ThreadPoolExecutor *) NULL_CHECK((frame[0].o)))->F_allowCoreThreadTimeOut) != 0) goto label_15;
	}
	{
	if ((frame[4].i) <= ((jint)((java_util_concurrent_ThreadPoolExecutor *) NULL_CHECK((frame[0].o)))->F_corePoolSize)) goto label_16;
	}
label_15:;
	INST_ICONST(1);
	goto label_17;
label_16:;
	INST_ICONST(0);
label_17:;
	{
	sp -= 1;
	frame[5].i = sp[0].i;
	LINE_NUMBER(1061);
	if ((frame[4].i) > ((jint)((java_util_concurrent_ThreadPoolExecutor *) NULL_CHECK((frame[0].o)))->F_maximumPoolSize)) goto label_19;
	}
	INST_ILOAD(5);
	if ((--sp)->i == 0) goto label_0;
	INST_ILOAD(1);
	if ((--sp)->i == 0) goto label_0;
label_19:;
	{
	if ((frame[4].i) > (jint(1))) goto label_20;
	}
	{
	sp[0].o = (jobject)((java_util_concurrent_ThreadPoolExecutor *) NULL_CHECK((frame[0].o)))->F_workQueue;
	LINE_NUMBER(1062);
	jint temp0 = (jint)((func_java_util_Collection_isEmpty_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_Collection, INDEX_java_util_Collection_isEmpty_R_boolean, sp[0].o))(ctx, sp[0].o);
	if (temp0 == 0) goto label_0;
	}
label_20:;
	{
	LINE_NUMBER(1063);
	jint temp0 = (jint)M_java_util_concurrent_ThreadPoolExecutor_compareAndDecrementWorkerCount_int_R_boolean(ctx, (frame[0].o), (frame[2].i));
	if (temp0 == 0) goto label_8;
	}
	{
	LINE_NUMBER(1064);
	popStackFrame(ctx);
	return (jobject(nullptr));
	}
label_0:;
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_InterruptedException))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(1069);
	if ((frame[5].i) == 0) goto label_23;
	}
	{
	LINE_NUMBER(1070);
	sp[0].o = (jobject)((java_util_concurrent_ThreadPoolExecutor *) NULL_CHECK((frame[0].o)))->F_workQueue;
	jlong temp0 = (jlong)((java_util_concurrent_ThreadPoolExecutor *) NULL_CHECK((frame[0].o)))->F_keepAliveTime;
	clinit_java_util_concurrent_TimeUnit(ctx);
	sp[1].o = (jobject)SF_java_util_concurrent_TimeUnit_NANOSECONDS;
	sp[0].o = (jobject)((func_java_util_concurrent_BlockingQueue_poll_long_java_util_concurrent_TimeUnit_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_concurrent_BlockingQueue, INDEX_java_util_concurrent_BlockingQueue_poll_long_java_util_concurrent_TimeUnit_R_java_lang_Object, sp[0].o))(ctx, sp[0].o, temp0, sp[1].o);
	sp[0].o = checkCast(ctx, &class_java_lang_Runnable, sp[0].o);
	sp += 1;
	goto label_25;
	}
label_23:;
	{
	LINE_NUMBER(1071);
	sp[0].o = (jobject)((java_util_concurrent_ThreadPoolExecutor *) NULL_CHECK((frame[0].o)))->F_workQueue;
	sp[0].o = (jobject)((func_java_util_concurrent_BlockingQueue_take_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_concurrent_BlockingQueue, INDEX_java_util_concurrent_BlockingQueue_take_R_java_lang_Object, sp[0].o))(ctx, sp[0].o);
	sp[0].o = checkCast(ctx, &class_java_lang_Runnable, sp[0].o);
	sp += 1;
	}
label_25:;
	{
	sp -= 1;
	frame[6].o = sp[0].o;
	LINE_NUMBER(1072);
	if ((frame[6].o) == nullptr) { popExceptionFrames(frameRef, 1); goto label_4; }
	}
	LINE_NUMBER(1073);
	INST_ALOAD(6);
	popExceptionFrame(frameRef);
	popStackFrame(ctx);
	INST_ARETURN();
label_4:;
label_6: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_InterruptedException))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(1074);
	frame[1].i = (jint(1));
	}
	popExceptionFrame(frameRef);
	LINE_NUMBER(1077);
	goto label_28;
label_2:;
	{
	sp -= 1;
	LINE_NUMBER(1075);
	frame[6].o = sp[0].o;
	LINE_NUMBER(1076);
	frame[1].i = (jint(0));
	}
label_28:;
	LINE_NUMBER(1078);
	goto label_8;

	popStackFrame(ctx);
}

void M_java_util_concurrent_ThreadPoolExecutor_runWorker_java_util_concurrent_ThreadPoolExecutor$Worker(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[15];
	auto stack = &frame[10];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/concurrent/ThreadPoolExecutor:runWorker", 15 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);
	volatile bool bypasses[3]{};

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(1125);
	sp[0].o = (jobject)SM_java_lang_Thread_currentThread_R_java_lang_Thread(ctx);
	frame[2].o = sp[0].o;
	LINE_NUMBER(1126);
	sp[0].o = (jobject)((java_util_concurrent_ThreadPoolExecutor$Worker *) NULL_CHECK((frame[1].o)))->F_firstTask;
	frame[3].o = sp[0].o;
	LINE_NUMBER(1127);
	((java_util_concurrent_ThreadPoolExecutor$Worker *) NULL_CHECK((frame[1].o)))->F_firstTask = (jref) (jobject(nullptr));
	LINE_NUMBER(1128);
	((func_java_util_concurrent_ThreadPoolExecutor$Worker_unlock) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_util_concurrent_ThreadPoolExecutor$Worker_unlock])(ctx, (frame[1].o));
	LINE_NUMBER(1129);
	frame[4].i = (jint(1));
	}
label_18:;
label_21: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_20; }
	}
	{
	LINE_NUMBER(1131);
	if ((frame[3].o) != nullptr) goto label_29;
	}
	{
	sp[0].o = (jobject)M_java_util_concurrent_ThreadPoolExecutor_getTask_R_java_lang_Runnable(ctx, (frame[0].o));
	frame[3].o = sp[0].o;
	if (sp[0].o == nullptr) goto label_30;
	}
label_29:;
	{
	LINE_NUMBER(1132);
	((func_java_util_concurrent_ThreadPoolExecutor$Worker_lock) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_util_concurrent_ThreadPoolExecutor$Worker_lock])(ctx, (frame[1].o));
	LINE_NUMBER(1137);
	sp[0].o = (jobject)((java_util_concurrent_ThreadPoolExecutor *) NULL_CHECK((frame[0].o)))->F_ctl;
	jint temp0 = (jint)((func_java_util_concurrent_atomic_AtomicInteger_get_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_concurrent_atomic_AtomicInteger_get_R_int])(ctx, sp[0].o);
	jint temp1 = (jint)SM_java_util_concurrent_ThreadPoolExecutor_runStateAtLeast_int_int_R_boolean(ctx, temp0, (jint(536870912)));
	if (temp1 != 0) goto label_32;
	}
	{
	LINE_NUMBER(1138);
	jint temp0 = (jint)SM_java_lang_Thread_interrupted_R_boolean(ctx);
	if (temp0 == 0) goto label_12;
	}
	{
	sp[0].o = (jobject)((java_util_concurrent_ThreadPoolExecutor *) NULL_CHECK((frame[0].o)))->F_ctl;
	LINE_NUMBER(1139);
	jint temp0 = (jint)((func_java_util_concurrent_atomic_AtomicInteger_get_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_concurrent_atomic_AtomicInteger_get_R_int])(ctx, sp[0].o);
	jint temp1 = (jint)SM_java_util_concurrent_ThreadPoolExecutor_runStateAtLeast_int_int_R_boolean(ctx, temp0, (jint(536870912)));
	if (temp1 == 0) goto label_12;
	}
label_32:;
	{
	sp[0].o = frame[2].o;
	LINE_NUMBER(1140);
	jint temp0 = (jint)((func_java_lang_Thread_isInterrupted_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_Thread_isInterrupted_R_boolean])(ctx, sp[0].o);
	if (temp0 != 0) goto label_12;
	}
	{
	LINE_NUMBER(1141);
	((func_java_lang_Thread_interrupt) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_java_lang_Thread_interrupt])(ctx, (frame[2].o));
	}
label_12:;
label_15: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_14; }
	}
	{
	LINE_NUMBER(1143);
	((func_java_util_concurrent_ThreadPoolExecutor_beforeExecute_java_lang_Thread_java_lang_Runnable) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_util_concurrent_ThreadPoolExecutor_beforeExecute_java_lang_Thread_java_lang_Runnable])(ctx, (frame[0].o), (frame[2].o), (frame[3].o));
	LINE_NUMBER(1144);
	frame[5].o = (jobject(nullptr));
	}
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_RuntimeException))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
label_5: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Error))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 2); bypasses[0] = true; goto label_11; } // goto label_4
	}
label_7: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 3); bypasses[1] = true; goto label_11; } // goto label_6
	}
label_9: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 4); bypasses[2] = true; goto label_11; } // goto label_8
	}
	{
	LINE_NUMBER(1146);
	((func_java_lang_Runnable_run) resolveInterfaceMethod(ctx, &class_java_lang_Runnable, INDEX_java_lang_Runnable_run, (frame[3].o)))(ctx, (frame[3].o));
	}
	popExceptionFrame(frameRef);
	popExceptionFrame(frameRef);
	popExceptionFrame(frameRef);
	popExceptionFrame(frameRef);
	{
	LINE_NUMBER(1154);
	((func_java_util_concurrent_ThreadPoolExecutor_afterExecute_java_lang_Runnable_java_lang_Throwable) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_util_concurrent_ThreadPoolExecutor_afterExecute_java_lang_Runnable_java_lang_Throwable])(ctx, (frame[0].o), (frame[3].o), (frame[5].o));
	LINE_NUMBER(1155);
	goto label_13;
	}
label_2:;
label_11: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); goto label_8;
	}
	if (bypasses[0]) { bypasses[0] = false; goto label_4; }
	if (bypasses[1]) { bypasses[1] = false; goto label_6; }
	if (bypasses[2]) { bypasses[2] = false; goto label_8; }
	{
	sp -= 1;
	LINE_NUMBER(1147);
	frame[6].o = sp[0].o;
	LINE_NUMBER(1148);
	frame[5].o = (frame[6].o);
	throwException(ctx, (frame[6].o));	}
label_4:;
	{
	sp -= 1;
	LINE_NUMBER(1149);
	frame[6].o = sp[0].o;
	LINE_NUMBER(1150);
	frame[5].o = (frame[6].o);
	throwException(ctx, (frame[6].o));	}
label_6:;
	{
	sp -= 1;
	LINE_NUMBER(1151);
	frame[6].o = sp[0].o;
	LINE_NUMBER(1152);
	frame[5].o = (frame[6].o);
	clinit_java_lang_Error(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_Error);
	init_java_lang_Error_java_lang_Throwable(ctx, sp[0].o, (frame[6].o));
	throwException(ctx, sp[0].o);	}
label_8:;
	LINE_NUMBER(1154);
	INST_ASTORE(7);
	popExceptionFrame(frameRef);
	{
	((func_java_util_concurrent_ThreadPoolExecutor_afterExecute_java_lang_Runnable_java_lang_Throwable) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_util_concurrent_ThreadPoolExecutor_afterExecute_java_lang_Runnable_java_lang_Throwable])(ctx, (frame[0].o), (frame[3].o), (frame[5].o));
	LINE_NUMBER(1155);
	throwException(ctx, (frame[7].o));	}
label_13:;
	popExceptionFrame(frameRef);
	{
	LINE_NUMBER(1157);
	frame[3].o = (jobject(nullptr));
	LINE_NUMBER(1158);
	sp[0].o = frame[1].o;
	((java_util_concurrent_ThreadPoolExecutor$Worker *) NULL_CHECK(sp[0].o))->F_completedTasks = (((jlong)((java_util_concurrent_ThreadPoolExecutor$Worker *) NULL_CHECK(sp[0].o))->F_completedTasks) + (jlong(1)));
	LINE_NUMBER(1159);
	((func_java_util_concurrent_ThreadPoolExecutor$Worker_unlock) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_util_concurrent_ThreadPoolExecutor$Worker_unlock])(ctx, (frame[1].o));
	LINE_NUMBER(1160);
	goto label_46;
	}
label_14:;
label_17: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_14; }
	}
	LINE_NUMBER(1157);
	INST_ASTORE(8);
	popExceptionFrame(frameRef);
	{
	frame[3].o = (jobject(nullptr));
	LINE_NUMBER(1158);
	sp[0].o = frame[1].o;
	((java_util_concurrent_ThreadPoolExecutor$Worker *) NULL_CHECK(sp[0].o))->F_completedTasks = (((jlong)((java_util_concurrent_ThreadPoolExecutor$Worker *) NULL_CHECK(sp[0].o))->F_completedTasks) + (jlong(1)));
	LINE_NUMBER(1159);
	((func_java_util_concurrent_ThreadPoolExecutor$Worker_unlock) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_util_concurrent_ThreadPoolExecutor$Worker_unlock])(ctx, (frame[1].o));
	LINE_NUMBER(1160);
	throwException(ctx, (frame[8].o));	}
label_46:;
	{ popExceptionFrames(frameRef, 1); goto label_18; }
label_30:;
	{
	LINE_NUMBER(1162);
	frame[4].i = (jint(0));
	}
	popExceptionFrame(frameRef);
	{
	LINE_NUMBER(1164);
	M_java_util_concurrent_ThreadPoolExecutor_processWorkerExit_java_util_concurrent_ThreadPoolExecutor$Worker_boolean(ctx, (frame[0].o), (frame[1].o), (frame[4].i));
	LINE_NUMBER(1165);
	goto label_51;
	}
label_20:;
label_23: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_20; }
	}
	LINE_NUMBER(1164);
	INST_ASTORE(9);
	popExceptionFrame(frameRef);
	{
	M_java_util_concurrent_ThreadPoolExecutor_processWorkerExit_java_util_concurrent_ThreadPoolExecutor$Worker_boolean(ctx, (frame[0].o), (frame[1].o), (frame[4].i));
	LINE_NUMBER(1165);
	throwException(ctx, (frame[9].o));	}
label_51:;
	LINE_NUMBER(1166);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void init_java_util_concurrent_ThreadPoolExecutor_int_int_long_java_util_concurrent_TimeUnit_java_util_concurrent_BlockingQueue(jcontext ctx, jobject self, jint param0, jint param1, jlong param2, jobject param3, jobject param4) {
	NULL_CHECK(self);
	jtype frame[16];
	auto stack = &frame[7];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/concurrent/ThreadPoolExecutor:<init>", 16 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_util_concurrent_ThreadPoolExecutor(ctx);
	frame[0].o = self;
	frame[1].i = param0;
	frame[2].i = param1;
	frame[3].l = param2;
	frame[5].o = param3;
	frame[6].o = param4;
	{
	LINE_NUMBER(1199);
	sp[0].o = frame[0].o;
	jint temp0 = frame[1].i;
	jint temp1 = frame[2].i;
	jlong temp2 = frame[3].l;
	sp[1].o = frame[5].o;
	sp[2].o = frame[6].o;
	LINE_NUMBER(1200);
	sp[3].o = (jobject)SM_java_util_concurrent_Executors_defaultThreadFactory_R_java_util_concurrent_ThreadFactory(ctx);
	clinit_java_util_concurrent_ThreadPoolExecutor(ctx);
	sp[4].o = (jobject)SF_java_util_concurrent_ThreadPoolExecutor_defaultHandler;
	LINE_NUMBER(1199);
	init_java_util_concurrent_ThreadPoolExecutor_int_int_long_java_util_concurrent_TimeUnit_java_util_concurrent_BlockingQueue_java_util_concurrent_ThreadFactory_java_util_concurrent_RejectedExecutionHandler(ctx, sp[0].o, temp0, temp1, temp2, sp[1].o, sp[2].o, sp[3].o, sp[4].o);
	LINE_NUMBER(1201);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_java_util_concurrent_ThreadPoolExecutor_int_int_long_java_util_concurrent_TimeUnit_java_util_concurrent_BlockingQueue_java_util_concurrent_ThreadFactory(jcontext ctx, jobject self, jint param0, jint param1, jlong param2, jobject param3, jobject param4, jobject param5) {
	NULL_CHECK(self);
	jtype frame[17];
	auto stack = &frame[8];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/concurrent/ThreadPoolExecutor:<init>", 17 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_util_concurrent_ThreadPoolExecutor(ctx);
	frame[0].o = self;
	frame[1].i = param0;
	frame[2].i = param1;
	frame[3].l = param2;
	frame[5].o = param3;
	frame[6].o = param4;
	frame[7].o = param5;
	{
	LINE_NUMBER(1234);
	sp[0].o = frame[0].o;
	jint temp0 = frame[1].i;
	jint temp1 = frame[2].i;
	jlong temp2 = frame[3].l;
	sp[1].o = frame[5].o;
	sp[2].o = frame[6].o;
	sp[3].o = frame[7].o;
	clinit_java_util_concurrent_ThreadPoolExecutor(ctx);
	sp[4].o = (jobject)SF_java_util_concurrent_ThreadPoolExecutor_defaultHandler;
	init_java_util_concurrent_ThreadPoolExecutor_int_int_long_java_util_concurrent_TimeUnit_java_util_concurrent_BlockingQueue_java_util_concurrent_ThreadFactory_java_util_concurrent_RejectedExecutionHandler(ctx, sp[0].o, temp0, temp1, temp2, sp[1].o, sp[2].o, sp[3].o, sp[4].o);
	LINE_NUMBER(1236);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_java_util_concurrent_ThreadPoolExecutor_int_int_long_java_util_concurrent_TimeUnit_java_util_concurrent_BlockingQueue_java_util_concurrent_RejectedExecutionHandler(jcontext ctx, jobject self, jint param0, jint param1, jlong param2, jobject param3, jobject param4, jobject param5) {
	NULL_CHECK(self);
	jtype frame[17];
	auto stack = &frame[8];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/concurrent/ThreadPoolExecutor:<init>", 17 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_util_concurrent_ThreadPoolExecutor(ctx);
	frame[0].o = self;
	frame[1].i = param0;
	frame[2].i = param1;
	frame[3].l = param2;
	frame[5].o = param3;
	frame[6].o = param4;
	frame[7].o = param5;
	{
	LINE_NUMBER(1269);
	sp[0].o = frame[0].o;
	jint temp0 = frame[1].i;
	jint temp1 = frame[2].i;
	jlong temp2 = frame[3].l;
	sp[1].o = frame[5].o;
	sp[2].o = frame[6].o;
	LINE_NUMBER(1270);
	sp[3].o = (jobject)SM_java_util_concurrent_Executors_defaultThreadFactory_R_java_util_concurrent_ThreadFactory(ctx);
	sp[4].o = frame[7].o;
	LINE_NUMBER(1269);
	init_java_util_concurrent_ThreadPoolExecutor_int_int_long_java_util_concurrent_TimeUnit_java_util_concurrent_BlockingQueue_java_util_concurrent_ThreadFactory_java_util_concurrent_RejectedExecutionHandler(ctx, sp[0].o, temp0, temp1, temp2, sp[1].o, sp[2].o, sp[3].o, sp[4].o);
	LINE_NUMBER(1271);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_java_util_concurrent_ThreadPoolExecutor_int_int_long_java_util_concurrent_TimeUnit_java_util_concurrent_BlockingQueue_java_util_concurrent_ThreadFactory_java_util_concurrent_RejectedExecutionHandler(jcontext ctx, jobject self, jint param0, jint param1, jlong param2, jobject param3, jobject param4, jobject param5, jobject param6) {
	NULL_CHECK(self);
	jtype frame[14];
	auto stack = &frame[9];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/concurrent/ThreadPoolExecutor:<init>", 14 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_util_concurrent_ThreadPoolExecutor(ctx);
	frame[0].o = self;
	frame[1].i = param0;
	frame[2].i = param1;
	frame[3].l = param2;
	frame[5].o = param3;
	frame[6].o = param4;
	frame[7].o = param5;
	frame[8].o = param6;
	{
	LINE_NUMBER(1306);
	init_java_util_concurrent_AbstractExecutorService(ctx, (frame[0].o));
	LINE_NUMBER(382);
	sp[0].o = frame[0].o;
	clinit_java_util_concurrent_atomic_AtomicInteger(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_util_concurrent_atomic_AtomicInteger);
	jint temp0 = (jint)SM_java_util_concurrent_ThreadPoolExecutor_ctlOf_int_int_R_int(ctx, (jint(-536870912)), (jint(0)));
	init_java_util_concurrent_atomic_AtomicInteger_int(ctx, sp[1].o, temp0);
	((java_util_concurrent_ThreadPoolExecutor *) NULL_CHECK(sp[0].o))->F_ctl = (jref) sp[1].o;
	LINE_NUMBER(464);
	sp[0].o = frame[0].o;
	clinit_java_util_concurrent_locks_ReentrantLock(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_util_concurrent_locks_ReentrantLock);
	init_java_util_concurrent_locks_ReentrantLock(ctx, sp[1].o);
	((java_util_concurrent_ThreadPoolExecutor *) NULL_CHECK(sp[0].o))->F_mainLock = (jref) sp[1].o;
	LINE_NUMBER(470);
	sp[0].o = frame[0].o;
	clinit_java_util_HashSet(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_util_HashSet);
	init_java_util_HashSet(ctx, sp[1].o);
	((java_util_concurrent_ThreadPoolExecutor *) NULL_CHECK(sp[0].o))->F_workers = (jref) sp[1].o;
	LINE_NUMBER(475);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((java_util_concurrent_ThreadPoolExecutor *) NULL_CHECK((frame[0].o)))->F_mainLock;
	sp[1].o = (jobject)((func_java_util_concurrent_locks_ReentrantLock_newCondition_R_java_util_concurrent_locks_Condition) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_util_concurrent_locks_ReentrantLock_newCondition_R_java_util_concurrent_locks_Condition])(ctx, sp[1].o);
	((java_util_concurrent_ThreadPoolExecutor *) NULL_CHECK(sp[0].o))->F_termination = (jref) sp[1].o;
	LINE_NUMBER(1307);
	if ((frame[1].i) < 0) goto label_6;
	}
	INST_ILOAD(2);
	if ((--sp)->i <= 0) goto label_6;
	{
	if ((frame[2].i) < (frame[1].i)) goto label_6;
	}
	{
	if ((longCompare((frame[3].l), (jlong(0)))) >= 0) goto label_7;
	}
label_6:;
	{
	LINE_NUMBER(1311);
	clinit_java_lang_IllegalArgumentException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IllegalArgumentException);
	init_java_lang_IllegalArgumentException(ctx, sp[0].o);
	throwException(ctx, sp[0].o);	}
label_7:;
	{
	LINE_NUMBER(1312);
	if ((frame[6].o) == nullptr) goto label_8;
	}
	INST_ALOAD(7);
	if ((--sp)->o == nullptr) goto label_8;
	INST_ALOAD(8);
	if ((--sp)->o != nullptr) goto label_9;
label_8:;
	{
	LINE_NUMBER(1313);
	clinit_java_lang_NullPointerException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_NullPointerException);
	init_java_lang_NullPointerException(ctx, sp[0].o);
	throwException(ctx, sp[0].o);	}
label_9:;
	{
	LINE_NUMBER(1315);
	((java_util_concurrent_ThreadPoolExecutor *) NULL_CHECK((frame[0].o)))->F_corePoolSize = (frame[1].i);
	LINE_NUMBER(1316);
	((java_util_concurrent_ThreadPoolExecutor *) NULL_CHECK((frame[0].o)))->F_maximumPoolSize = (frame[2].i);
	LINE_NUMBER(1317);
	((java_util_concurrent_ThreadPoolExecutor *) NULL_CHECK((frame[0].o)))->F_workQueue = (jref) (frame[6].o);
	LINE_NUMBER(1318);
	sp[0].o = frame[0].o;
	jlong temp0 = (jlong)((func_java_util_concurrent_TimeUnit_toNanos_long_R_long) ((void **) nullCheck(ctx, (frame[5].o))->vtable)[VTABLE_java_util_concurrent_TimeUnit_toNanos_long_R_long])(ctx, (frame[5].o), (frame[3].l));
	((java_util_concurrent_ThreadPoolExecutor *) NULL_CHECK(sp[0].o))->F_keepAliveTime = temp0;
	LINE_NUMBER(1319);
	((java_util_concurrent_ThreadPoolExecutor *) NULL_CHECK((frame[0].o)))->F_threadFactory = (jref) (frame[7].o);
	LINE_NUMBER(1320);
	((java_util_concurrent_ThreadPoolExecutor *) NULL_CHECK((frame[0].o)))->F_handler = (jref) (frame[8].o);
	LINE_NUMBER(1321);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_java_util_concurrent_ThreadPoolExecutor_execute_java_lang_Runnable(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/concurrent/ThreadPoolExecutor:execute", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(1338);
	if ((frame[1].o) != nullptr) goto label_1;
	}
	{
	LINE_NUMBER(1339);
	clinit_java_lang_NullPointerException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_NullPointerException);
	init_java_lang_NullPointerException(ctx, sp[0].o);
	throwException(ctx, sp[0].o);	}
label_1:;
	{
	LINE_NUMBER(1360);
	sp[0].o = (jobject)((java_util_concurrent_ThreadPoolExecutor *) NULL_CHECK((frame[0].o)))->F_ctl;
	jint temp0 = (jint)((func_java_util_concurrent_atomic_AtomicInteger_get_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_concurrent_atomic_AtomicInteger_get_R_int])(ctx, sp[0].o);
	frame[2].i = temp0;
	LINE_NUMBER(1361);
	jint temp1 = (jint)SM_java_util_concurrent_ThreadPoolExecutor_workerCountOf_int_R_int(ctx, (frame[2].i));
	if (temp1 >= ((jint)((java_util_concurrent_ThreadPoolExecutor *) NULL_CHECK((frame[0].o)))->F_corePoolSize)) goto label_4;
	}
	{
	LINE_NUMBER(1362);
	jint temp0 = (jint)M_java_util_concurrent_ThreadPoolExecutor_addWorker_java_lang_Runnable_boolean_R_boolean(ctx, (frame[0].o), (frame[1].o), (jint(1)));
	if (temp0 == 0) goto label_6;
	}
	LINE_NUMBER(1363);
	popStackFrame(ctx);
	INST_RETURN();
label_6:;
	{
	LINE_NUMBER(1364);
	sp[0].o = (jobject)((java_util_concurrent_ThreadPoolExecutor *) NULL_CHECK((frame[0].o)))->F_ctl;
	jint temp0 = (jint)((func_java_util_concurrent_atomic_AtomicInteger_get_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_concurrent_atomic_AtomicInteger_get_R_int])(ctx, sp[0].o);
	frame[2].i = temp0;
	}
label_4:;
	{
	LINE_NUMBER(1366);
	jint temp0 = (jint)SM_java_util_concurrent_ThreadPoolExecutor_isRunning_int_R_boolean(ctx, (frame[2].i));
	if (temp0 == 0) goto label_8;
	}
	{
	sp[0].o = (jobject)((java_util_concurrent_ThreadPoolExecutor *) NULL_CHECK((frame[0].o)))->F_workQueue;
	jint temp0 = (jint)((func_java_util_concurrent_BlockingQueue_offer_java_lang_Object_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_concurrent_BlockingQueue, INDEX_java_util_concurrent_BlockingQueue_offer_java_lang_Object_R_boolean, sp[0].o))(ctx, sp[0].o, (frame[1].o));
	if (temp0 == 0) goto label_8;
	}
	{
	LINE_NUMBER(1367);
	sp[0].o = (jobject)((java_util_concurrent_ThreadPoolExecutor *) NULL_CHECK((frame[0].o)))->F_ctl;
	jint temp0 = (jint)((func_java_util_concurrent_atomic_AtomicInteger_get_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_concurrent_atomic_AtomicInteger_get_R_int])(ctx, sp[0].o);
	frame[3].i = temp0;
	LINE_NUMBER(1368);
	jint temp1 = (jint)SM_java_util_concurrent_ThreadPoolExecutor_isRunning_int_R_boolean(ctx, (frame[3].i));
	if (temp1 != 0) goto label_11;
	}
	{
	jint temp0 = (jint)((func_java_util_concurrent_ThreadPoolExecutor_remove_java_lang_Runnable_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_util_concurrent_ThreadPoolExecutor_remove_java_lang_Runnable_R_boolean])(ctx, (frame[0].o), (frame[1].o));
	if (temp0 == 0) goto label_11;
	}
	{
	LINE_NUMBER(1369);
	((func_java_util_concurrent_ThreadPoolExecutor_reject_java_lang_Runnable) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_util_concurrent_ThreadPoolExecutor_reject_java_lang_Runnable])(ctx, (frame[0].o), (frame[1].o));
	goto label_13;
	}
label_11:;
	{
	LINE_NUMBER(1370);
	jint temp0 = (jint)SM_java_util_concurrent_ThreadPoolExecutor_workerCountOf_int_R_int(ctx, (frame[3].i));
	if (temp0 != 0) goto label_13;
	}
	{
	LINE_NUMBER(1371);
	jint temp0 = (jint)M_java_util_concurrent_ThreadPoolExecutor_addWorker_java_lang_Runnable_boolean_R_boolean(ctx, (frame[0].o), (jobject(nullptr)), (jint(0)));
	}
label_13:;
	LINE_NUMBER(1372);
	goto label_15;
label_8:;
	{
	LINE_NUMBER(1373);
	jint temp0 = (jint)M_java_util_concurrent_ThreadPoolExecutor_addWorker_java_lang_Runnable_boolean_R_boolean(ctx, (frame[0].o), (frame[1].o), (jint(0)));
	if (temp0 != 0) goto label_15;
	}
	{
	LINE_NUMBER(1374);
	((func_java_util_concurrent_ThreadPoolExecutor_reject_java_lang_Runnable) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_util_concurrent_ThreadPoolExecutor_reject_java_lang_Runnable])(ctx, (frame[0].o), (frame[1].o));
	}
label_15:;
	LINE_NUMBER(1375);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_java_util_concurrent_ThreadPoolExecutor_shutdown(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/concurrent/ThreadPoolExecutor:shutdown", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(1389);
	sp[0].o = (jobject)((java_util_concurrent_ThreadPoolExecutor *) NULL_CHECK((frame[0].o)))->F_mainLock;
	frame[1].o = sp[0].o;
	LINE_NUMBER(1390);
	((func_java_util_concurrent_locks_ReentrantLock_lock) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_util_concurrent_locks_ReentrantLock_lock])(ctx, (frame[1].o));
	}
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(1392);
	M_java_util_concurrent_ThreadPoolExecutor_checkShutdownAccess(ctx, (frame[0].o));
	LINE_NUMBER(1393);
	M_java_util_concurrent_ThreadPoolExecutor_advanceRunState_int(ctx, (frame[0].o), (jint(0)));
	LINE_NUMBER(1394);
	M_java_util_concurrent_ThreadPoolExecutor_interruptIdleWorkers(ctx, (frame[0].o));
	LINE_NUMBER(1395);
	((func_java_util_concurrent_ThreadPoolExecutor_onShutdown) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_util_concurrent_ThreadPoolExecutor_onShutdown])(ctx, (frame[0].o));
	}
	popExceptionFrame(frameRef);
	{
	LINE_NUMBER(1397);
	((func_java_util_concurrent_locks_ReentrantLock_unlock) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_util_concurrent_locks_ReentrantLock_unlock])(ctx, (frame[1].o));
	LINE_NUMBER(1398);
	goto label_10;
	}
label_2:;
	{
	sp -= 1;
	LINE_NUMBER(1397);
	frame[2].o = sp[0].o;
	((func_java_util_concurrent_locks_ReentrantLock_unlock) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_util_concurrent_locks_ReentrantLock_unlock])(ctx, (frame[1].o));
	LINE_NUMBER(1398);
	throwException(ctx, (frame[2].o));	}
label_10:;
	{
	LINE_NUMBER(1399);
	((func_java_util_concurrent_ThreadPoolExecutor_tryTerminate) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_util_concurrent_ThreadPoolExecutor_tryTerminate])(ctx, (frame[0].o));
	LINE_NUMBER(1400);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_java_util_concurrent_ThreadPoolExecutor_shutdownNow_R_java_util_List(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/concurrent/ThreadPoolExecutor:shutdownNow", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(1421);
	sp[0].o = (jobject)((java_util_concurrent_ThreadPoolExecutor *) NULL_CHECK((frame[0].o)))->F_mainLock;
	frame[2].o = sp[0].o;
	LINE_NUMBER(1422);
	((func_java_util_concurrent_locks_ReentrantLock_lock) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_java_util_concurrent_locks_ReentrantLock_lock])(ctx, (frame[2].o));
	}
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(1424);
	M_java_util_concurrent_ThreadPoolExecutor_checkShutdownAccess(ctx, (frame[0].o));
	LINE_NUMBER(1425);
	M_java_util_concurrent_ThreadPoolExecutor_advanceRunState_int(ctx, (frame[0].o), (jint(536870912)));
	LINE_NUMBER(1426);
	M_java_util_concurrent_ThreadPoolExecutor_interruptWorkers(ctx, (frame[0].o));
	LINE_NUMBER(1427);
	sp[0].o = (jobject)M_java_util_concurrent_ThreadPoolExecutor_drainQueue_R_java_util_List(ctx, (frame[0].o));
	frame[1].o = sp[0].o;
	}
	popExceptionFrame(frameRef);
	{
	LINE_NUMBER(1429);
	((func_java_util_concurrent_locks_ReentrantLock_unlock) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_java_util_concurrent_locks_ReentrantLock_unlock])(ctx, (frame[2].o));
	LINE_NUMBER(1430);
	goto label_10;
	}
label_2:;
	{
	sp -= 1;
	LINE_NUMBER(1429);
	frame[3].o = sp[0].o;
	((func_java_util_concurrent_locks_ReentrantLock_unlock) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_java_util_concurrent_locks_ReentrantLock_unlock])(ctx, (frame[2].o));
	LINE_NUMBER(1430);
	throwException(ctx, (frame[3].o));	}
label_10:;
	{
	LINE_NUMBER(1431);
	((func_java_util_concurrent_ThreadPoolExecutor_tryTerminate) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_util_concurrent_ThreadPoolExecutor_tryTerminate])(ctx, (frame[0].o));
	LINE_NUMBER(1432);
	popStackFrame(ctx);
	return (frame[1].o);
	}

	popStackFrame(ctx);
}

jbool M_java_util_concurrent_ThreadPoolExecutor_isShutdown_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/concurrent/ThreadPoolExecutor:isShutdown", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(1436);
	sp[0].o = (jobject)((java_util_concurrent_ThreadPoolExecutor *) NULL_CHECK((frame[0].o)))->F_ctl;
	jint temp0 = (jint)((func_java_util_concurrent_atomic_AtomicInteger_get_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_concurrent_atomic_AtomicInteger_get_R_int])(ctx, sp[0].o);
	jint temp1 = (jint)SM_java_util_concurrent_ThreadPoolExecutor_isRunning_int_R_boolean(ctx, temp0);
	if (temp1 != 0) goto label_1;
	}
	INST_ICONST(1);
	goto label_2;
label_1:;
	INST_ICONST(0);
label_2:;
	popStackFrame(ctx);
	INST_IRETURN();

	popStackFrame(ctx);
}

jbool M_java_util_concurrent_ThreadPoolExecutor_isTerminating_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/concurrent/ThreadPoolExecutor:isTerminating", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(1451);
	sp[0].o = (jobject)((java_util_concurrent_ThreadPoolExecutor *) NULL_CHECK((frame[0].o)))->F_ctl;
	jint temp0 = (jint)((func_java_util_concurrent_atomic_AtomicInteger_get_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_concurrent_atomic_AtomicInteger_get_R_int])(ctx, sp[0].o);
	frame[1].i = temp0;
	LINE_NUMBER(1452);
	jint temp1 = (jint)SM_java_util_concurrent_ThreadPoolExecutor_isRunning_int_R_boolean(ctx, (frame[1].i));
	if (temp1 != 0) goto label_2;
	}
	{
	jint temp0 = (jint)SM_java_util_concurrent_ThreadPoolExecutor_runStateLessThan_int_int_R_boolean(ctx, (frame[1].i), (jint(1610612736)));
	if (temp0 == 0) goto label_2;
	}
	INST_ICONST(1);
	goto label_3;
label_2:;
	INST_ICONST(0);
label_3:;
	popStackFrame(ctx);
	INST_IRETURN();

	popStackFrame(ctx);
}

jbool M_java_util_concurrent_ThreadPoolExecutor_isTerminated_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/concurrent/ThreadPoolExecutor:isTerminated", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(1456);
	sp[0].o = (jobject)((java_util_concurrent_ThreadPoolExecutor *) NULL_CHECK((frame[0].o)))->F_ctl;
	jint temp0 = (jint)((func_java_util_concurrent_atomic_AtomicInteger_get_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_concurrent_atomic_AtomicInteger_get_R_int])(ctx, sp[0].o);
	jint temp1 = (jint)SM_java_util_concurrent_ThreadPoolExecutor_runStateAtLeast_int_int_R_boolean(ctx, temp0, (jint(1610612736)));
	popStackFrame(ctx);
	return temp1;
	}

	popStackFrame(ctx);
}

jbool M_java_util_concurrent_ThreadPoolExecutor_awaitTermination_long_java_util_concurrent_TimeUnit_R_boolean(jcontext ctx, jobject self, jlong param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[13];
	auto stack = &frame[9];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/concurrent/ThreadPoolExecutor:awaitTermination", 13 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);
	volatile bool bypasses[2]{};

	frame[0].o = self;
	frame[1].l = param0;
	frame[3].o = param1;
	{
	LINE_NUMBER(1461);
	jlong temp0 = (jlong)((func_java_util_concurrent_TimeUnit_toNanos_long_R_long) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_java_util_concurrent_TimeUnit_toNanos_long_R_long])(ctx, (frame[3].o), (frame[1].l));
	frame[4].l = temp0;
	LINE_NUMBER(1462);
	sp[0].o = (jobject)((java_util_concurrent_ThreadPoolExecutor *) NULL_CHECK((frame[0].o)))->F_mainLock;
	frame[6].o = sp[0].o;
	LINE_NUMBER(1463);
	((func_java_util_concurrent_locks_ReentrantLock_lock) ((void **) nullCheck(ctx, (frame[6].o))->vtable)[VTABLE_java_util_concurrent_locks_ReentrantLock_lock])(ctx, (frame[6].o));
	}
label_0:;
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); bypasses[0] = true; goto label_9; } // goto label_2
	}
	{
	LINE_NUMBER(1466);
	sp[0].o = (jobject)((java_util_concurrent_ThreadPoolExecutor *) NULL_CHECK((frame[0].o)))->F_ctl;
	jint temp0 = (jint)((func_java_util_concurrent_atomic_AtomicInteger_get_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_concurrent_atomic_AtomicInteger_get_R_int])(ctx, sp[0].o);
	jint temp1 = (jint)SM_java_util_concurrent_ThreadPoolExecutor_runStateAtLeast_int_int_R_boolean(ctx, temp0, (jint(1610612736)));
	if (temp1 == 0) { popExceptionFrames(frameRef, 1); goto label_4; }
	}
	{
	LINE_NUMBER(1467);
	frame[7].i = (jint(1));
	}
	popExceptionFrame(frameRef);
	{
	LINE_NUMBER(1473);
	((func_java_util_concurrent_locks_ReentrantLock_unlock) ((void **) nullCheck(ctx, (frame[6].o))->vtable)[VTABLE_java_util_concurrent_locks_ReentrantLock_unlock])(ctx, (frame[6].o));
	LINE_NUMBER(1467);
	popStackFrame(ctx);
	return (frame[7].i);
	}
label_4:;
label_6: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); bypasses[1] = true; goto label_9; } // goto label_2
	}
	{
	LINE_NUMBER(1468);
	if ((longCompare((frame[4].l), (jlong(0)))) > 0) { popExceptionFrames(frameRef, 1); goto label_7; }
	}
	{
	LINE_NUMBER(1469);
	frame[7].i = (jint(0));
	}
	popExceptionFrame(frameRef);
	{
	LINE_NUMBER(1473);
	((func_java_util_concurrent_locks_ReentrantLock_unlock) ((void **) nullCheck(ctx, (frame[6].o))->vtable)[VTABLE_java_util_concurrent_locks_ReentrantLock_unlock])(ctx, (frame[6].o));
	LINE_NUMBER(1469);
	popStackFrame(ctx);
	return (frame[7].i);
	}
label_7:;
label_9: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); goto label_2;
	}
	if (bypasses[0]) { bypasses[0] = false; goto label_2; }
	if (bypasses[1]) { bypasses[1] = false; goto label_2; }
	{
	LINE_NUMBER(1470);
	sp[0].o = (jobject)((java_util_concurrent_ThreadPoolExecutor *) NULL_CHECK((frame[0].o)))->F_termination;
	jlong temp0 = (jlong)((func_java_util_concurrent_locks_Condition_awaitNanos_long_R_long) resolveInterfaceMethod(ctx, &class_java_util_concurrent_locks_Condition, INDEX_java_util_concurrent_locks_Condition_awaitNanos_long_R_long, sp[0].o))(ctx, sp[0].o, (frame[4].l));
	frame[4].l = temp0;
	{ popExceptionFrames(frameRef, 1); goto label_0; }
	}
label_2:;
	LINE_NUMBER(1473);
	INST_ASTORE(8);
	popExceptionFrame(frameRef);
	{
	((func_java_util_concurrent_locks_ReentrantLock_unlock) ((void **) nullCheck(ctx, (frame[6].o))->vtable)[VTABLE_java_util_concurrent_locks_ReentrantLock_unlock])(ctx, (frame[6].o));
	LINE_NUMBER(1474);
	throwException(ctx, (frame[8].o));	}

	popStackFrame(ctx);
}

void M_java_util_concurrent_ThreadPoolExecutor_finalize(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/concurrent/ThreadPoolExecutor:finalize", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(1482);
	((func_java_util_concurrent_ThreadPoolExecutor_shutdown) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_util_concurrent_ThreadPoolExecutor_shutdown])(ctx, (frame[0].o));
	LINE_NUMBER(1483);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_java_util_concurrent_ThreadPoolExecutor_setThreadFactory_java_util_concurrent_ThreadFactory(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/concurrent/ThreadPoolExecutor:setThreadFactory", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(1493);
	if ((frame[1].o) != nullptr) goto label_1;
	}
	{
	LINE_NUMBER(1494);
	clinit_java_lang_NullPointerException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_NullPointerException);
	init_java_lang_NullPointerException(ctx, sp[0].o);
	throwException(ctx, sp[0].o);	}
label_1:;
	{
	LINE_NUMBER(1495);
	((java_util_concurrent_ThreadPoolExecutor *) NULL_CHECK((frame[0].o)))->F_threadFactory = (jref) (frame[1].o);
	LINE_NUMBER(1496);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_java_util_concurrent_ThreadPoolExecutor_getThreadFactory_R_java_util_concurrent_ThreadFactory(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/concurrent/ThreadPoolExecutor:getThreadFactory", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(1505);
	sp[0].o = (jobject)((java_util_concurrent_ThreadPoolExecutor *) NULL_CHECK((frame[0].o)))->F_threadFactory;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void M_java_util_concurrent_ThreadPoolExecutor_setRejectedExecutionHandler_java_util_concurrent_RejectedExecutionHandler(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/concurrent/ThreadPoolExecutor:setRejectedExecutionHandler", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(1516);
	if ((frame[1].o) != nullptr) goto label_1;
	}
	{
	LINE_NUMBER(1517);
	clinit_java_lang_NullPointerException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_NullPointerException);
	init_java_lang_NullPointerException(ctx, sp[0].o);
	throwException(ctx, sp[0].o);	}
label_1:;
	{
	LINE_NUMBER(1518);
	((java_util_concurrent_ThreadPoolExecutor *) NULL_CHECK((frame[0].o)))->F_handler = (jref) (frame[1].o);
	LINE_NUMBER(1519);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_java_util_concurrent_ThreadPoolExecutor_getRejectedExecutionHandler_R_java_util_concurrent_RejectedExecutionHandler(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/concurrent/ThreadPoolExecutor:getRejectedExecutionHandler", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(1528);
	sp[0].o = (jobject)((java_util_concurrent_ThreadPoolExecutor *) NULL_CHECK((frame[0].o)))->F_handler;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void M_java_util_concurrent_ThreadPoolExecutor_setCorePoolSize_int(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/concurrent/ThreadPoolExecutor:setCorePoolSize", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(1543);
	if ((frame[1].i) >= 0) goto label_1;
	}
	{
	LINE_NUMBER(1544);
	clinit_java_lang_IllegalArgumentException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IllegalArgumentException);
	init_java_lang_IllegalArgumentException(ctx, sp[0].o);
	throwException(ctx, sp[0].o);	}
label_1:;
	{
	LINE_NUMBER(1545);
	frame[2].i = ((frame[1].i) - ((jint)((java_util_concurrent_ThreadPoolExecutor *) NULL_CHECK((frame[0].o)))->F_corePoolSize));
	LINE_NUMBER(1546);
	((java_util_concurrent_ThreadPoolExecutor *) NULL_CHECK((frame[0].o)))->F_corePoolSize = (frame[1].i);
	LINE_NUMBER(1547);
	sp[0].o = (jobject)((java_util_concurrent_ThreadPoolExecutor *) NULL_CHECK((frame[0].o)))->F_ctl;
	jint temp0 = (jint)((func_java_util_concurrent_atomic_AtomicInteger_get_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_concurrent_atomic_AtomicInteger_get_R_int])(ctx, sp[0].o);
	jint temp1 = (jint)SM_java_util_concurrent_ThreadPoolExecutor_workerCountOf_int_R_int(ctx, temp0);
	if (temp1 <= (frame[1].i)) goto label_5;
	}
	{
	LINE_NUMBER(1548);
	M_java_util_concurrent_ThreadPoolExecutor_interruptIdleWorkers(ctx, (frame[0].o));
	goto label_7;
	}
label_5:;
	{
	LINE_NUMBER(1549);
	if ((frame[2].i) <= 0) goto label_7;
	}
	{
	LINE_NUMBER(1554);
	jint temp0 = frame[2].i;
	sp[0].o = (jobject)((java_util_concurrent_ThreadPoolExecutor *) NULL_CHECK((frame[0].o)))->F_workQueue;
	jint temp1 = (jint)((func_java_util_Collection_size_R_int) resolveInterfaceMethod(ctx, &class_java_util_Collection, INDEX_java_util_Collection_size_R_int, sp[0].o))(ctx, sp[0].o);
	jint temp2 = (jint)SM_java_lang_Math_min_int_int_R_int(ctx, temp0, temp1);
	frame[3].i = temp2;
	}
label_9:;
	{
	LINE_NUMBER(1555);
	jint temp0 = frame[3].i;
	INST_IINC(3, -1);
	if (temp0 <= 0) goto label_7;
	}
	{
	jint temp0 = (jint)M_java_util_concurrent_ThreadPoolExecutor_addWorker_java_lang_Runnable_boolean_R_boolean(ctx, (frame[0].o), (jobject(nullptr)), (jint(1)));
	if (temp0 == 0) goto label_7;
	}
	{
	LINE_NUMBER(1556);
	sp[0].o = (jobject)((java_util_concurrent_ThreadPoolExecutor *) NULL_CHECK((frame[0].o)))->F_workQueue;
	jint temp0 = (jint)((func_java_util_Collection_isEmpty_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_Collection, INDEX_java_util_Collection_isEmpty_R_boolean, sp[0].o))(ctx, sp[0].o);
	if (temp0 == 0) goto label_9;
	}
	LINE_NUMBER(1557);
	goto label_7;
label_7:;
	LINE_NUMBER(1560);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jint M_java_util_concurrent_ThreadPoolExecutor_getCorePoolSize_R_int(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/concurrent/ThreadPoolExecutor:getCorePoolSize", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(1569);
	popStackFrame(ctx);
	return ((jint)((java_util_concurrent_ThreadPoolExecutor *) NULL_CHECK((frame[0].o)))->F_corePoolSize);
	}

	popStackFrame(ctx);
}

jbool M_java_util_concurrent_ThreadPoolExecutor_prestartCoreThread_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/concurrent/ThreadPoolExecutor:prestartCoreThread", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(1581);
	sp[0].o = (jobject)((java_util_concurrent_ThreadPoolExecutor *) NULL_CHECK((frame[0].o)))->F_ctl;
	jint temp0 = (jint)((func_java_util_concurrent_atomic_AtomicInteger_get_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_concurrent_atomic_AtomicInteger_get_R_int])(ctx, sp[0].o);
	jint temp1 = (jint)SM_java_util_concurrent_ThreadPoolExecutor_workerCountOf_int_R_int(ctx, temp0);
	if (temp1 >= ((jint)((java_util_concurrent_ThreadPoolExecutor *) NULL_CHECK((frame[0].o)))->F_corePoolSize)) goto label_1;
	}
	{
	sp[0].o = frame[0].o;
	sp[1].o = jobject(nullptr);
	jint temp0 = jint(1);
	LINE_NUMBER(1582);
	jint temp1 = (jint)M_java_util_concurrent_ThreadPoolExecutor_addWorker_java_lang_Runnable_boolean_R_boolean(ctx, sp[0].o, sp[1].o, temp0);
	if (temp1 == 0) goto label_1;
	}
	INST_ICONST(1);
	goto label_3;
label_1:;
	INST_ICONST(0);
label_3:;
	LINE_NUMBER(1581);
	popStackFrame(ctx);
	INST_IRETURN();

	popStackFrame(ctx);
}

void M_java_util_concurrent_ThreadPoolExecutor_ensurePrestart(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/concurrent/ThreadPoolExecutor:ensurePrestart", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(1590);
	sp[0].o = (jobject)((java_util_concurrent_ThreadPoolExecutor *) NULL_CHECK((frame[0].o)))->F_ctl;
	jint temp0 = (jint)((func_java_util_concurrent_atomic_AtomicInteger_get_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_concurrent_atomic_AtomicInteger_get_R_int])(ctx, sp[0].o);
	jint temp1 = (jint)SM_java_util_concurrent_ThreadPoolExecutor_workerCountOf_int_R_int(ctx, temp0);
	frame[1].i = temp1;
	LINE_NUMBER(1591);
	if ((frame[1].i) >= ((jint)((java_util_concurrent_ThreadPoolExecutor *) NULL_CHECK((frame[0].o)))->F_corePoolSize)) goto label_2;
	}
	{
	LINE_NUMBER(1592);
	jint temp0 = (jint)M_java_util_concurrent_ThreadPoolExecutor_addWorker_java_lang_Runnable_boolean_R_boolean(ctx, (frame[0].o), (jobject(nullptr)), (jint(1)));
	goto label_4;
	}
label_2:;
	{
	LINE_NUMBER(1593);
	if ((frame[1].i) != 0) goto label_4;
	}
	{
	LINE_NUMBER(1594);
	jint temp0 = (jint)M_java_util_concurrent_ThreadPoolExecutor_addWorker_java_lang_Runnable_boolean_R_boolean(ctx, (frame[0].o), (jobject(nullptr)), (jint(0)));
	}
label_4:;
	LINE_NUMBER(1595);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jint M_java_util_concurrent_ThreadPoolExecutor_prestartAllCoreThreads_R_int(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/concurrent/ThreadPoolExecutor:prestartAllCoreThreads", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(1605);
	frame[1].i = (jint(0));
	}
label_1:;
	{
	LINE_NUMBER(1606);
	jint temp0 = (jint)M_java_util_concurrent_ThreadPoolExecutor_addWorker_java_lang_Runnable_boolean_R_boolean(ctx, (frame[0].o), (jobject(nullptr)), (jint(1)));
	if (temp0 == 0) goto label_2;
	}
	{
	LINE_NUMBER(1607);
	INST_IINC(1, 1);
	goto label_1;
	}
label_2:;
	{
	LINE_NUMBER(1608);
	popStackFrame(ctx);
	return (frame[1].i);
	}

	popStackFrame(ctx);
}

jbool M_java_util_concurrent_ThreadPoolExecutor_allowsCoreThreadTimeOut_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/concurrent/ThreadPoolExecutor:allowsCoreThreadTimeOut", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(1625);
	popStackFrame(ctx);
	return ((jint)((java_util_concurrent_ThreadPoolExecutor *) NULL_CHECK((frame[0].o)))->F_allowCoreThreadTimeOut);
	}

	popStackFrame(ctx);
}

void M_java_util_concurrent_ThreadPoolExecutor_allowCoreThreadTimeOut_boolean(jcontext ctx, jobject self, jbool param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/concurrent/ThreadPoolExecutor:allowCoreThreadTimeOut", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(1646);
	if ((frame[1].i) == 0) goto label_1;
	}
	{
	if ((longCompare(((jlong)((java_util_concurrent_ThreadPoolExecutor *) NULL_CHECK((frame[0].o)))->F_keepAliveTime), (jlong(0)))) > 0) goto label_1;
	}
	{
	LINE_NUMBER(1647);
	clinit_java_lang_IllegalArgumentException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IllegalArgumentException);
	init_java_lang_IllegalArgumentException_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"Core threads must have nonzero keep alive times"_j))));
	throwException(ctx, sp[0].o);	}
label_1:;
	{
	LINE_NUMBER(1648);
	if ((frame[1].i) == ((jint)((java_util_concurrent_ThreadPoolExecutor *) NULL_CHECK((frame[0].o)))->F_allowCoreThreadTimeOut)) goto label_3;
	}
	{
	LINE_NUMBER(1649);
	((java_util_concurrent_ThreadPoolExecutor *) NULL_CHECK((frame[0].o)))->F_allowCoreThreadTimeOut = (frame[1].i);
	LINE_NUMBER(1650);
	if ((frame[1].i) == 0) goto label_3;
	}
	{
	LINE_NUMBER(1651);
	M_java_util_concurrent_ThreadPoolExecutor_interruptIdleWorkers(ctx, (frame[0].o));
	}
label_3:;
	LINE_NUMBER(1653);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_java_util_concurrent_ThreadPoolExecutor_setMaximumPoolSize_int(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/concurrent/ThreadPoolExecutor:setMaximumPoolSize", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(1668);
	if ((frame[1].i) <= 0) goto label_1;
	}
	{
	if ((frame[1].i) >= ((jint)((java_util_concurrent_ThreadPoolExecutor *) NULL_CHECK((frame[0].o)))->F_corePoolSize)) goto label_2;
	}
label_1:;
	{
	LINE_NUMBER(1669);
	clinit_java_lang_IllegalArgumentException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IllegalArgumentException);
	init_java_lang_IllegalArgumentException(ctx, sp[0].o);
	throwException(ctx, sp[0].o);	}
label_2:;
	{
	LINE_NUMBER(1670);
	((java_util_concurrent_ThreadPoolExecutor *) NULL_CHECK((frame[0].o)))->F_maximumPoolSize = (frame[1].i);
	LINE_NUMBER(1671);
	sp[0].o = (jobject)((java_util_concurrent_ThreadPoolExecutor *) NULL_CHECK((frame[0].o)))->F_ctl;
	jint temp0 = (jint)((func_java_util_concurrent_atomic_AtomicInteger_get_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_concurrent_atomic_AtomicInteger_get_R_int])(ctx, sp[0].o);
	jint temp1 = (jint)SM_java_util_concurrent_ThreadPoolExecutor_workerCountOf_int_R_int(ctx, temp0);
	if (temp1 <= (frame[1].i)) goto label_4;
	}
	{
	LINE_NUMBER(1672);
	M_java_util_concurrent_ThreadPoolExecutor_interruptIdleWorkers(ctx, (frame[0].o));
	}
label_4:;
	LINE_NUMBER(1673);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jint M_java_util_concurrent_ThreadPoolExecutor_getMaximumPoolSize_R_int(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/concurrent/ThreadPoolExecutor:getMaximumPoolSize", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(1682);
	popStackFrame(ctx);
	return ((jint)((java_util_concurrent_ThreadPoolExecutor *) NULL_CHECK((frame[0].o)))->F_maximumPoolSize);
	}

	popStackFrame(ctx);
}

void M_java_util_concurrent_ThreadPoolExecutor_setKeepAliveTime_long_java_util_concurrent_TimeUnit(jcontext ctx, jobject self, jlong param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[12];
	auto stack = &frame[8];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/concurrent/ThreadPoolExecutor:setKeepAliveTime", 12 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].l = param0;
	frame[3].o = param1;
	{
	LINE_NUMBER(1700);
	if ((longCompare((frame[1].l), (jlong(0)))) >= 0) goto label_1;
	}
	{
	LINE_NUMBER(1701);
	clinit_java_lang_IllegalArgumentException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IllegalArgumentException);
	init_java_lang_IllegalArgumentException(ctx, sp[0].o);
	throwException(ctx, sp[0].o);	}
label_1:;
	{
	LINE_NUMBER(1702);
	if ((longCompare((frame[1].l), (jlong(0)))) != 0) goto label_3;
	}
	{
	jint temp0 = (jint)((func_java_util_concurrent_ThreadPoolExecutor_allowsCoreThreadTimeOut_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_util_concurrent_ThreadPoolExecutor_allowsCoreThreadTimeOut_R_boolean])(ctx, (frame[0].o));
	if (temp0 == 0) goto label_3;
	}
	{
	LINE_NUMBER(1703);
	clinit_java_lang_IllegalArgumentException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IllegalArgumentException);
	init_java_lang_IllegalArgumentException_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"Core threads must have nonzero keep alive times"_j))));
	throwException(ctx, sp[0].o);	}
label_3:;
	{
	LINE_NUMBER(1704);
	jlong temp0 = (jlong)((func_java_util_concurrent_TimeUnit_toNanos_long_R_long) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_java_util_concurrent_TimeUnit_toNanos_long_R_long])(ctx, (frame[3].o), (frame[1].l));
	frame[4].l = temp0;
	LINE_NUMBER(1705);
	frame[6].l = ((frame[4].l) - ((jlong)((java_util_concurrent_ThreadPoolExecutor *) NULL_CHECK((frame[0].o)))->F_keepAliveTime));
	LINE_NUMBER(1706);
	((java_util_concurrent_ThreadPoolExecutor *) NULL_CHECK((frame[0].o)))->F_keepAliveTime = (frame[4].l);
	LINE_NUMBER(1707);
	if ((longCompare((frame[6].l), (jlong(0)))) >= 0) goto label_8;
	}
	{
	LINE_NUMBER(1708);
	M_java_util_concurrent_ThreadPoolExecutor_interruptIdleWorkers(ctx, (frame[0].o));
	}
label_8:;
	LINE_NUMBER(1709);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jlong M_java_util_concurrent_ThreadPoolExecutor_getKeepAliveTime_java_util_concurrent_TimeUnit_R_long(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/concurrent/ThreadPoolExecutor:getKeepAliveTime", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(1721);
	sp[0].o = frame[1].o;
	jlong temp0 = (jlong)((java_util_concurrent_ThreadPoolExecutor *) NULL_CHECK((frame[0].o)))->F_keepAliveTime;
	clinit_java_util_concurrent_TimeUnit(ctx);
	sp[1].o = (jobject)SF_java_util_concurrent_TimeUnit_NANOSECONDS;
	jlong temp1 = (jlong)((func_java_util_concurrent_TimeUnit_convert_long_java_util_concurrent_TimeUnit_R_long) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_concurrent_TimeUnit_convert_long_java_util_concurrent_TimeUnit_R_long])(ctx, sp[0].o, temp0, sp[1].o);
	popStackFrame(ctx);
	return temp1;
	}

	popStackFrame(ctx);
}

jobject M_java_util_concurrent_ThreadPoolExecutor_getQueue_R_java_util_concurrent_BlockingQueue(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/concurrent/ThreadPoolExecutor:getQueue", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(1735);
	sp[0].o = (jobject)((java_util_concurrent_ThreadPoolExecutor *) NULL_CHECK((frame[0].o)))->F_workQueue;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jbool M_java_util_concurrent_ThreadPoolExecutor_remove_java_lang_Runnable_R_boolean(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/concurrent/ThreadPoolExecutor:remove", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(1755);
	sp[0].o = (jobject)((java_util_concurrent_ThreadPoolExecutor *) NULL_CHECK((frame[0].o)))->F_workQueue;
	jint temp0 = (jint)((func_java_util_concurrent_BlockingQueue_remove_java_lang_Object_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_concurrent_BlockingQueue, INDEX_java_util_concurrent_BlockingQueue_remove_java_lang_Object_R_boolean, sp[0].o))(ctx, sp[0].o, (frame[1].o));
	frame[2].i = temp0;
	LINE_NUMBER(1756);
	((func_java_util_concurrent_ThreadPoolExecutor_tryTerminate) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_util_concurrent_ThreadPoolExecutor_tryTerminate])(ctx, (frame[0].o));
	LINE_NUMBER(1757);
	popStackFrame(ctx);
	return (frame[2].i);
	}

	popStackFrame(ctx);
}

void M_java_util_concurrent_ThreadPoolExecutor_purge(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[7];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/concurrent/ThreadPoolExecutor:purge", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(1771);
	sp[0].o = (jobject)((java_util_concurrent_ThreadPoolExecutor *) NULL_CHECK((frame[0].o)))->F_workQueue;
	frame[1].o = sp[0].o;
	}
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_util_ConcurrentModificationException))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(1773);
	sp[0].o = (jobject)((func_java_util_Collection_iterator_R_java_util_Iterator) resolveInterfaceMethod(ctx, &class_java_util_Collection, INDEX_java_util_Collection_iterator_R_java_util_Iterator, (frame[1].o)))(ctx, (frame[1].o));
	frame[2].o = sp[0].o;
	}
label_5:;
	{
	LINE_NUMBER(1774);
	jint temp0 = (jint)((func_java_util_Iterator_hasNext_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_hasNext_R_boolean, (frame[2].o)))(ctx, (frame[2].o));
	if (temp0 == 0) goto label_1;
	}
	{
	LINE_NUMBER(1775);
	sp[0].o = (jobject)((func_java_util_Iterator_next_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_next_R_java_lang_Object, (frame[2].o)))(ctx, (frame[2].o));
	frame[3].o = (checkCast(ctx, &class_java_lang_Runnable, sp[0].o));
	LINE_NUMBER(1776);
	if ((isInstance(ctx, (frame[3].o), &class_java_util_concurrent_Future)) == 0) goto label_8;
	}
	{
	jint temp0 = (jint)((func_java_util_concurrent_Future_isCancelled_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_concurrent_Future, INDEX_java_util_concurrent_Future_isCancelled_R_boolean, (checkCast(ctx, &class_java_util_concurrent_Future, (frame[3].o)))))(ctx, (checkCast(ctx, &class_java_util_concurrent_Future, (frame[3].o))));
	if (temp0 == 0) goto label_8;
	}
	{
	LINE_NUMBER(1777);
	((func_java_util_Iterator_remove) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_remove, (frame[2].o)))(ctx, (frame[2].o));
	}
label_8:;
	LINE_NUMBER(1778);
	goto label_5;
label_1:;
	popExceptionFrame(frameRef);
	LINE_NUMBER(1786);
	goto label_10;
label_2:;
	{
	sp -= 1;
	LINE_NUMBER(1779);
	frame[2].o = sp[0].o;
	LINE_NUMBER(1783);
	sp[0].o = (jobject)((func_java_util_Collection_toArray_R_Array1_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Collection, INDEX_java_util_Collection_toArray_R_Array1_java_lang_Object, (frame[1].o)))(ctx, (frame[1].o));
	frame[3].o = sp[0].o;
	frame[4].i = (((jarray) nullCheck(ctx, (frame[3].o)))->length);
	frame[5].i = (jint(0));
	}
label_12:;
	{
	if ((frame[5].i) >= (frame[4].i)) goto label_10;
	}
	{
	frame[6].o = ((jobject)ARRAY_ACCESS(jobject, (frame[3].o), (frame[5].i)));
	LINE_NUMBER(1784);
	if ((isInstance(ctx, (frame[6].o), &class_java_util_concurrent_Future)) == 0) goto label_14;
	}
	{
	jint temp0 = (jint)((func_java_util_concurrent_Future_isCancelled_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_concurrent_Future, INDEX_java_util_concurrent_Future_isCancelled_R_boolean, (checkCast(ctx, &class_java_util_concurrent_Future, (frame[6].o)))))(ctx, (checkCast(ctx, &class_java_util_concurrent_Future, (frame[6].o))));
	if (temp0 == 0) goto label_14;
	}
	{
	LINE_NUMBER(1785);
	jint temp0 = (jint)((func_java_util_concurrent_BlockingQueue_remove_java_lang_Object_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_concurrent_BlockingQueue, INDEX_java_util_concurrent_BlockingQueue_remove_java_lang_Object_R_boolean, (frame[1].o)))(ctx, (frame[1].o), (frame[6].o));
	}
label_14:;
	{
	LINE_NUMBER(1783);
	INST_IINC(5, 1);
	goto label_12;
	}
label_10:;
	{
	LINE_NUMBER(1788);
	((func_java_util_concurrent_ThreadPoolExecutor_tryTerminate) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_util_concurrent_ThreadPoolExecutor_tryTerminate])(ctx, (frame[0].o));
	LINE_NUMBER(1789);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jint M_java_util_concurrent_ThreadPoolExecutor_getPoolSize_R_int(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/concurrent/ThreadPoolExecutor:getPoolSize", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(1799);
	sp[0].o = (jobject)((java_util_concurrent_ThreadPoolExecutor *) NULL_CHECK((frame[0].o)))->F_mainLock;
	frame[1].o = sp[0].o;
	LINE_NUMBER(1800);
	((func_java_util_concurrent_locks_ReentrantLock_lock) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_util_concurrent_locks_ReentrantLock_lock])(ctx, (frame[1].o));
	}
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(1804);
	sp[0].o = (jobject)((java_util_concurrent_ThreadPoolExecutor *) NULL_CHECK((frame[0].o)))->F_ctl;
	jint temp0 = (jint)((func_java_util_concurrent_atomic_AtomicInteger_get_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_concurrent_atomic_AtomicInteger_get_R_int])(ctx, sp[0].o);
	jint temp1 = (jint)SM_java_util_concurrent_ThreadPoolExecutor_runStateAtLeast_int_int_R_boolean(ctx, temp0, (jint(1073741824)));
	if (temp1 == 0) goto label_6;
	}
	INST_ICONST(0);
	goto label_7;
label_6:;
	{
	LINE_NUMBER(1805);
	sp[0].o = (jobject)((java_util_concurrent_ThreadPoolExecutor *) NULL_CHECK((frame[0].o)))->F_workers;
	jint temp0 = (jint)((func_java_util_HashSet_size_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_HashSet_size_R_int])(ctx, sp[0].o);
	sp[0].i = temp0;
	sp += 1;
	}
label_7:;
	INST_ISTORE(2);
	popExceptionFrame(frameRef);
	{
	LINE_NUMBER(1807);
	((func_java_util_concurrent_locks_ReentrantLock_unlock) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_util_concurrent_locks_ReentrantLock_unlock])(ctx, (frame[1].o));
	LINE_NUMBER(1804);
	popStackFrame(ctx);
	return (frame[2].i);
	}
label_2:;
	{
	sp -= 1;
	LINE_NUMBER(1807);
	frame[3].o = sp[0].o;
	((func_java_util_concurrent_locks_ReentrantLock_unlock) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_util_concurrent_locks_ReentrantLock_unlock])(ctx, (frame[1].o));
	LINE_NUMBER(1808);
	throwException(ctx, (frame[3].o));	}

	popStackFrame(ctx);
}

jint M_java_util_concurrent_ThreadPoolExecutor_getActiveCount_R_int(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/concurrent/ThreadPoolExecutor:getActiveCount", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(1818);
	sp[0].o = (jobject)((java_util_concurrent_ThreadPoolExecutor *) NULL_CHECK((frame[0].o)))->F_mainLock;
	frame[1].o = sp[0].o;
	LINE_NUMBER(1819);
	((func_java_util_concurrent_locks_ReentrantLock_lock) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_util_concurrent_locks_ReentrantLock_lock])(ctx, (frame[1].o));
	}
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(1821);
	frame[2].i = (jint(0));
	LINE_NUMBER(1822);
	sp[0].o = (jobject)((java_util_concurrent_ThreadPoolExecutor *) NULL_CHECK((frame[0].o)))->F_workers;
	sp[0].o = (jobject)((func_java_util_HashSet_iterator_R_java_util_Iterator) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_HashSet_iterator_R_java_util_Iterator])(ctx, sp[0].o);
	frame[3].o = sp[0].o;
	}
label_9:;
	{
	jint temp0 = (jint)((func_java_util_Iterator_hasNext_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_hasNext_R_boolean, (frame[3].o)))(ctx, (frame[3].o));
	if (temp0 == 0) goto label_10;
	}
	{
	sp[0].o = (jobject)((func_java_util_Iterator_next_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_next_R_java_lang_Object, (frame[3].o)))(ctx, (frame[3].o));
	frame[4].o = (checkCast(ctx, &class_java_util_concurrent_ThreadPoolExecutor$Worker, sp[0].o));
	LINE_NUMBER(1823);
	jint temp0 = (jint)((func_java_util_concurrent_ThreadPoolExecutor$Worker_isLocked_R_boolean) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_java_util_concurrent_ThreadPoolExecutor$Worker_isLocked_R_boolean])(ctx, (frame[4].o));
	if (temp0 == 0) goto label_12;
	}
	LINE_NUMBER(1824);
	INST_IINC(2, 1);
label_12:;
	LINE_NUMBER(1823);
	goto label_9;
label_10:;
	{
	LINE_NUMBER(1825);
	frame[3].i = (frame[2].i);
	}
	popExceptionFrame(frameRef);
	{
	LINE_NUMBER(1827);
	((func_java_util_concurrent_locks_ReentrantLock_unlock) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_util_concurrent_locks_ReentrantLock_unlock])(ctx, (frame[1].o));
	LINE_NUMBER(1825);
	popStackFrame(ctx);
	return (frame[3].i);
	}
label_2:;
label_5: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	LINE_NUMBER(1827);
	INST_ASTORE(5);
	popExceptionFrame(frameRef);
	{
	((func_java_util_concurrent_locks_ReentrantLock_unlock) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_util_concurrent_locks_ReentrantLock_unlock])(ctx, (frame[1].o));
	LINE_NUMBER(1828);
	throwException(ctx, (frame[5].o));	}

	popStackFrame(ctx);
}

jint M_java_util_concurrent_ThreadPoolExecutor_getLargestPoolSize_R_int(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/concurrent/ThreadPoolExecutor:getLargestPoolSize", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(1838);
	sp[0].o = (jobject)((java_util_concurrent_ThreadPoolExecutor *) NULL_CHECK((frame[0].o)))->F_mainLock;
	frame[1].o = sp[0].o;
	LINE_NUMBER(1839);
	((func_java_util_concurrent_locks_ReentrantLock_lock) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_util_concurrent_locks_ReentrantLock_lock])(ctx, (frame[1].o));
	}
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(1841);
	frame[2].i = ((jint)((java_util_concurrent_ThreadPoolExecutor *) NULL_CHECK((frame[0].o)))->F_largestPoolSize);
	}
	popExceptionFrame(frameRef);
	{
	LINE_NUMBER(1843);
	((func_java_util_concurrent_locks_ReentrantLock_unlock) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_util_concurrent_locks_ReentrantLock_unlock])(ctx, (frame[1].o));
	LINE_NUMBER(1841);
	popStackFrame(ctx);
	return (frame[2].i);
	}
label_2:;
	{
	sp -= 1;
	LINE_NUMBER(1843);
	frame[3].o = sp[0].o;
	((func_java_util_concurrent_locks_ReentrantLock_unlock) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_util_concurrent_locks_ReentrantLock_unlock])(ctx, (frame[1].o));
	LINE_NUMBER(1844);
	throwException(ctx, (frame[3].o));	}

	popStackFrame(ctx);
}

jlong M_java_util_concurrent_ThreadPoolExecutor_getTaskCount_R_long(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[11];
	auto stack = &frame[7];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/concurrent/ThreadPoolExecutor:getTaskCount", 11 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(1856);
	sp[0].o = (jobject)((java_util_concurrent_ThreadPoolExecutor *) NULL_CHECK((frame[0].o)))->F_mainLock;
	frame[1].o = sp[0].o;
	LINE_NUMBER(1857);
	((func_java_util_concurrent_locks_ReentrantLock_lock) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_util_concurrent_locks_ReentrantLock_lock])(ctx, (frame[1].o));
	}
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(1859);
	frame[2].l = ((jlong)((java_util_concurrent_ThreadPoolExecutor *) NULL_CHECK((frame[0].o)))->F_completedTaskCount);
	LINE_NUMBER(1860);
	sp[0].o = (jobject)((java_util_concurrent_ThreadPoolExecutor *) NULL_CHECK((frame[0].o)))->F_workers;
	sp[0].o = (jobject)((func_java_util_HashSet_iterator_R_java_util_Iterator) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_HashSet_iterator_R_java_util_Iterator])(ctx, sp[0].o);
	frame[4].o = sp[0].o;
	}
label_9:;
	{
	jint temp0 = (jint)((func_java_util_Iterator_hasNext_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_hasNext_R_boolean, (frame[4].o)))(ctx, (frame[4].o));
	if (temp0 == 0) goto label_10;
	}
	{
	sp[0].o = (jobject)((func_java_util_Iterator_next_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_next_R_java_lang_Object, (frame[4].o)))(ctx, (frame[4].o));
	frame[5].o = (checkCast(ctx, &class_java_util_concurrent_ThreadPoolExecutor$Worker, sp[0].o));
	LINE_NUMBER(1861);
	frame[2].l = ((frame[2].l) + ((jlong)((java_util_concurrent_ThreadPoolExecutor$Worker *) NULL_CHECK((frame[5].o)))->F_completedTasks));
	LINE_NUMBER(1862);
	jint temp0 = (jint)((func_java_util_concurrent_ThreadPoolExecutor$Worker_isLocked_R_boolean) ((void **) nullCheck(ctx, (frame[5].o))->vtable)[VTABLE_java_util_concurrent_ThreadPoolExecutor$Worker_isLocked_R_boolean])(ctx, (frame[5].o));
	if (temp0 == 0) goto label_13;
	}
	{
	LINE_NUMBER(1863);
	frame[2].l = ((frame[2].l) + (jlong(1)));
	}
label_13:;
	LINE_NUMBER(1864);
	goto label_9;
label_10:;
	{
	LINE_NUMBER(1865);
	jlong temp0 = frame[2].l;
	sp[0].o = (jobject)((java_util_concurrent_ThreadPoolExecutor *) NULL_CHECK((frame[0].o)))->F_workQueue;
	jint temp1 = (jint)((func_java_util_Collection_size_R_int) resolveInterfaceMethod(ctx, &class_java_util_Collection, INDEX_java_util_Collection_size_R_int, sp[0].o))(ctx, sp[0].o);
	frame[4].l = (temp0 + (jlong(temp1)));
	}
	popExceptionFrame(frameRef);
	{
	LINE_NUMBER(1867);
	((func_java_util_concurrent_locks_ReentrantLock_unlock) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_util_concurrent_locks_ReentrantLock_unlock])(ctx, (frame[1].o));
	LINE_NUMBER(1865);
	popStackFrame(ctx);
	return (frame[4].l);
	}
label_2:;
label_5: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	LINE_NUMBER(1867);
	INST_ASTORE(6);
	popExceptionFrame(frameRef);
	{
	((func_java_util_concurrent_locks_ReentrantLock_unlock) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_util_concurrent_locks_ReentrantLock_unlock])(ctx, (frame[1].o));
	LINE_NUMBER(1868);
	throwException(ctx, (frame[6].o));	}

	popStackFrame(ctx);
}

jlong M_java_util_concurrent_ThreadPoolExecutor_getCompletedTaskCount_R_long(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[11];
	auto stack = &frame[7];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/concurrent/ThreadPoolExecutor:getCompletedTaskCount", 11 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(1881);
	sp[0].o = (jobject)((java_util_concurrent_ThreadPoolExecutor *) NULL_CHECK((frame[0].o)))->F_mainLock;
	frame[1].o = sp[0].o;
	LINE_NUMBER(1882);
	((func_java_util_concurrent_locks_ReentrantLock_lock) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_util_concurrent_locks_ReentrantLock_lock])(ctx, (frame[1].o));
	}
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(1884);
	frame[2].l = ((jlong)((java_util_concurrent_ThreadPoolExecutor *) NULL_CHECK((frame[0].o)))->F_completedTaskCount);
	LINE_NUMBER(1885);
	sp[0].o = (jobject)((java_util_concurrent_ThreadPoolExecutor *) NULL_CHECK((frame[0].o)))->F_workers;
	sp[0].o = (jobject)((func_java_util_HashSet_iterator_R_java_util_Iterator) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_HashSet_iterator_R_java_util_Iterator])(ctx, sp[0].o);
	frame[4].o = sp[0].o;
	}
label_9:;
	{
	jint temp0 = (jint)((func_java_util_Iterator_hasNext_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_hasNext_R_boolean, (frame[4].o)))(ctx, (frame[4].o));
	if (temp0 == 0) goto label_10;
	}
	{
	sp[0].o = (jobject)((func_java_util_Iterator_next_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_next_R_java_lang_Object, (frame[4].o)))(ctx, (frame[4].o));
	frame[5].o = (checkCast(ctx, &class_java_util_concurrent_ThreadPoolExecutor$Worker, sp[0].o));
	LINE_NUMBER(1886);
	frame[2].l = ((frame[2].l) + ((jlong)((java_util_concurrent_ThreadPoolExecutor$Worker *) NULL_CHECK((frame[5].o)))->F_completedTasks));
	goto label_9;
	}
label_10:;
	{
	LINE_NUMBER(1887);
	frame[4].l = (frame[2].l);
	}
	popExceptionFrame(frameRef);
	{
	LINE_NUMBER(1889);
	((func_java_util_concurrent_locks_ReentrantLock_unlock) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_util_concurrent_locks_ReentrantLock_unlock])(ctx, (frame[1].o));
	LINE_NUMBER(1887);
	popStackFrame(ctx);
	return (frame[4].l);
	}
label_2:;
label_5: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	LINE_NUMBER(1889);
	INST_ASTORE(6);
	popExceptionFrame(frameRef);
	{
	((func_java_util_concurrent_locks_ReentrantLock_unlock) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_util_concurrent_locks_ReentrantLock_unlock])(ctx, (frame[1].o));
	LINE_NUMBER(1890);
	throwException(ctx, (frame[6].o));	}

	popStackFrame(ctx);
}

jobject M_java_util_concurrent_ThreadPoolExecutor_toString_R_java_lang_String(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[13];
	auto stack = &frame[9];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/concurrent/ThreadPoolExecutor:toString", 13 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(1903);
	sp[0].o = (jobject)((java_util_concurrent_ThreadPoolExecutor *) NULL_CHECK((frame[0].o)))->F_mainLock;
	frame[5].o = sp[0].o;
	LINE_NUMBER(1904);
	((func_java_util_concurrent_locks_ReentrantLock_lock) ((void **) nullCheck(ctx, (frame[5].o))->vtable)[VTABLE_java_util_concurrent_locks_ReentrantLock_lock])(ctx, (frame[5].o));
	}
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(1906);
	frame[1].l = ((jlong)((java_util_concurrent_ThreadPoolExecutor *) NULL_CHECK((frame[0].o)))->F_completedTaskCount);
	LINE_NUMBER(1907);
	frame[4].i = (jint(0));
	LINE_NUMBER(1908);
	sp[0].o = (jobject)((java_util_concurrent_ThreadPoolExecutor *) NULL_CHECK((frame[0].o)))->F_workers;
	jint temp0 = (jint)((func_java_util_HashSet_size_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_HashSet_size_R_int])(ctx, sp[0].o);
	frame[3].i = temp0;
	LINE_NUMBER(1909);
	sp[0].o = (jobject)((java_util_concurrent_ThreadPoolExecutor *) NULL_CHECK((frame[0].o)))->F_workers;
	sp[0].o = (jobject)((func_java_util_HashSet_iterator_R_java_util_Iterator) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_HashSet_iterator_R_java_util_Iterator])(ctx, sp[0].o);
	frame[6].o = sp[0].o;
	}
label_11:;
	{
	jint temp0 = (jint)((func_java_util_Iterator_hasNext_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_hasNext_R_boolean, (frame[6].o)))(ctx, (frame[6].o));
	if (temp0 == 0) goto label_1;
	}
	{
	sp[0].o = (jobject)((func_java_util_Iterator_next_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_next_R_java_lang_Object, (frame[6].o)))(ctx, (frame[6].o));
	frame[7].o = (checkCast(ctx, &class_java_util_concurrent_ThreadPoolExecutor$Worker, sp[0].o));
	LINE_NUMBER(1910);
	frame[1].l = ((frame[1].l) + ((jlong)((java_util_concurrent_ThreadPoolExecutor$Worker *) NULL_CHECK((frame[7].o)))->F_completedTasks));
	LINE_NUMBER(1911);
	jint temp0 = (jint)((func_java_util_concurrent_ThreadPoolExecutor$Worker_isLocked_R_boolean) ((void **) nullCheck(ctx, (frame[7].o))->vtable)[VTABLE_java_util_concurrent_ThreadPoolExecutor$Worker_isLocked_R_boolean])(ctx, (frame[7].o));
	if (temp0 == 0) goto label_14;
	}
	LINE_NUMBER(1912);
	INST_IINC(4, 1);
label_14:;
	LINE_NUMBER(1913);
	goto label_11;
label_1:;
	popExceptionFrame(frameRef);
	{
	LINE_NUMBER(1915);
	((func_java_util_concurrent_locks_ReentrantLock_unlock) ((void **) nullCheck(ctx, (frame[5].o))->vtable)[VTABLE_java_util_concurrent_locks_ReentrantLock_unlock])(ctx, (frame[5].o));
	LINE_NUMBER(1916);
	goto label_17;
	}
label_2:;
label_5: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	LINE_NUMBER(1915);
	INST_ASTORE(8);
	popExceptionFrame(frameRef);
	{
	((func_java_util_concurrent_locks_ReentrantLock_unlock) ((void **) nullCheck(ctx, (frame[5].o))->vtable)[VTABLE_java_util_concurrent_locks_ReentrantLock_unlock])(ctx, (frame[5].o));
	LINE_NUMBER(1916);
	throwException(ctx, (frame[8].o));	}
label_17:;
	{
	LINE_NUMBER(1917);
	sp[0].o = (jobject)((java_util_concurrent_ThreadPoolExecutor *) NULL_CHECK((frame[0].o)))->F_ctl;
	jint temp0 = (jint)((func_java_util_concurrent_atomic_AtomicInteger_get_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_concurrent_atomic_AtomicInteger_get_R_int])(ctx, sp[0].o);
	frame[6].i = temp0;
	LINE_NUMBER(1918);
	jint temp1 = (jint)SM_java_util_concurrent_ThreadPoolExecutor_runStateLessThan_int_int_R_boolean(ctx, (frame[6].i), (jint(0)));
	if (temp1 == 0) goto label_20;
	}
	(sp++)->o = ((jobject) createStringLiteral(ctx, u8"Running"_j));
	goto label_21;
label_20:;
	{
	LINE_NUMBER(1919);
	jint temp0 = (jint)SM_java_util_concurrent_ThreadPoolExecutor_runStateAtLeast_int_int_R_boolean(ctx, (frame[6].i), (jint(1610612736)));
	if (temp0 == 0) goto label_22;
	}
	(sp++)->o = ((jobject) createStringLiteral(ctx, u8"Terminated"_j));
	goto label_21;
label_22:;
	LINE_NUMBER(1920);
	(sp++)->o = ((jobject) createStringLiteral(ctx, u8"Shutting down"_j));
label_21:;
	{
	sp -= 1;
	frame[7].o = sp[0].o;
	LINE_NUMBER(1921);
	clinit_java_lang_StringBuilder(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[0].o);
	sp[1].o = (jobject)M_java_lang_Object_toString_R_java_lang_String(ctx, (frame[0].o));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, sp[1].o);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"["_j))));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (frame[7].o));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8", pool size = "_j))));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder])(ctx, sp[0].o, (frame[3].i));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8", active threads = "_j))));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder])(ctx, sp[0].o, (frame[4].i));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8", queued tasks = "_j))));
	sp[1].o = (jobject)((java_util_concurrent_ThreadPoolExecutor *) NULL_CHECK((frame[0].o)))->F_workQueue;
	LINE_NUMBER(1925);
	jint temp0 = (jint)((func_java_util_Collection_size_R_int) resolveInterfaceMethod(ctx, &class_java_util_Collection, INDEX_java_util_Collection_size_R_int, sp[1].o))(ctx, sp[1].o);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder])(ctx, sp[0].o, temp0);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8", completed tasks = "_j))));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_long_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_long_R_java_lang_StringBuilder])(ctx, sp[0].o, (frame[1].l));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"]"_j))));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[0].o);
	LINE_NUMBER(1921);
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void M_java_util_concurrent_ThreadPoolExecutor_beforeExecute_java_lang_Thread_java_lang_Runnable(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/concurrent/ThreadPoolExecutor:beforeExecute", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	LINE_NUMBER(1946);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_java_util_concurrent_ThreadPoolExecutor_afterExecute_java_lang_Runnable_java_lang_Throwable(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/concurrent/ThreadPoolExecutor:afterExecute", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	LINE_NUMBER(1994);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_java_util_concurrent_ThreadPoolExecutor_terminated(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[1];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/concurrent/ThreadPoolExecutor:terminated", 1 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	LINE_NUMBER(2002);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void clinit_java_util_concurrent_ThreadPoolExecutor(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	clinit_java_util_concurrent_AbstractExecutorService(ctx);
	SF_java_util_concurrent_ThreadPoolExecutor_COUNT_BITS = jint(29);
	SF_java_util_concurrent_ThreadPoolExecutor_CAPACITY = jint(536870911);
	SF_java_util_concurrent_ThreadPoolExecutor_RUNNING = jint(-536870912);
	SF_java_util_concurrent_ThreadPoolExecutor_SHUTDOWN = jint(0);
	SF_java_util_concurrent_ThreadPoolExecutor_STOP = jint(536870912);
	SF_java_util_concurrent_ThreadPoolExecutor_TIDYING = jint(1073741824);
	SF_java_util_concurrent_ThreadPoolExecutor_TERMINATED = jint(1610612736);
	SF_java_util_concurrent_ThreadPoolExecutor_ONLY_ONE = jint(1);
	jtype frame[2];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/concurrent/ThreadPoolExecutor:<clinit>", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_util_concurrent_ThreadPoolExecutor(ctx);
	{
	LINE_NUMBER(551);
	clinit_java_util_concurrent_ThreadPoolExecutor$AbortPolicy(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_util_concurrent_ThreadPoolExecutor$AbortPolicy);
	init_java_util_concurrent_ThreadPoolExecutor$AbortPolicy(ctx, sp[0].o);
	clinit_java_util_concurrent_ThreadPoolExecutor(ctx);
	SF_java_util_concurrent_ThreadPoolExecutor_defaultHandler = sp[0].o;
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void *vtable_java_util_concurrent_ThreadPoolExecutor[] {
	(void *) M_java_lang_Object_hashCode_R_int,
	(void *) M_java_lang_Object_equals_java_lang_Object_R_boolean,
	(void *) M_java_lang_Object_clone_R_java_lang_Object,
	(void *) M_java_lang_Object_getClass_R_java_lang_Class,
	(void *) M_java_util_concurrent_ThreadPoolExecutor_toString_R_java_lang_String,
	(void *) M_java_util_concurrent_ThreadPoolExecutor_finalize,
	(void *) M_java_lang_Object_notify,
	(void *) M_java_lang_Object_notifyAll,
	(void *) M_java_lang_Object_wait,
	(void *) M_java_lang_Object_wait_long,
	(void *) M_java_lang_Object_wait_long_int,
	(void *) M_java_util_concurrent_ThreadPoolExecutor_execute_java_lang_Runnable,
	(void *) M_java_util_concurrent_ThreadPoolExecutor_shutdown,
	(void *) M_java_util_concurrent_ThreadPoolExecutor_shutdownNow_R_java_util_List,
	(void *) M_java_util_concurrent_ThreadPoolExecutor_isShutdown_R_boolean,
	(void *) M_java_util_concurrent_ThreadPoolExecutor_isTerminated_R_boolean,
	(void *) M_java_util_concurrent_ThreadPoolExecutor_awaitTermination_long_java_util_concurrent_TimeUnit_R_boolean,
	(void *) M_java_util_concurrent_AbstractExecutorService_submit_java_util_concurrent_Callable_R_java_util_concurrent_Future,
	(void *) M_java_util_concurrent_AbstractExecutorService_submit_java_lang_Runnable_java_lang_Object_R_java_util_concurrent_Future,
	(void *) M_java_util_concurrent_AbstractExecutorService_submit_java_lang_Runnable_R_java_util_concurrent_Future,
	(void *) M_java_util_concurrent_AbstractExecutorService_invokeAll_java_util_Collection_R_java_util_List,
	(void *) M_java_util_concurrent_AbstractExecutorService_invokeAll_java_util_Collection_long_java_util_concurrent_TimeUnit_R_java_util_List,
	(void *) M_java_util_concurrent_AbstractExecutorService_invokeAny_java_util_Collection_R_java_lang_Object,
	(void *) M_java_util_concurrent_AbstractExecutorService_invokeAny_java_util_Collection_long_java_util_concurrent_TimeUnit_R_java_lang_Object,
	(void *) M_java_util_concurrent_AbstractExecutorService_newTaskFor_java_lang_Runnable_java_lang_Object_R_java_util_concurrent_RunnableFuture,
	(void *) M_java_util_concurrent_AbstractExecutorService_newTaskFor_java_util_concurrent_Callable_R_java_util_concurrent_RunnableFuture,
	(void *) M_java_util_concurrent_AbstractExecutorService_doInvokeAny_java_util_Collection_boolean_long_R_java_lang_Object,
	(void *) M_java_util_concurrent_ThreadPoolExecutor_compareAndIncrementWorkerCount_int_R_boolean,
	(void *) M_java_util_concurrent_ThreadPoolExecutor_compareAndDecrementWorkerCount_int_R_boolean,
	(void *) M_java_util_concurrent_ThreadPoolExecutor_decrementWorkerCount,
	(void *) M_java_util_concurrent_ThreadPoolExecutor_advanceRunState_int,
	(void *) M_java_util_concurrent_ThreadPoolExecutor_tryTerminate,
	(void *) M_java_util_concurrent_ThreadPoolExecutor_checkShutdownAccess,
	(void *) M_java_util_concurrent_ThreadPoolExecutor_interruptWorkers,
	(void *) M_java_util_concurrent_ThreadPoolExecutor_interruptIdleWorkers_boolean,
	(void *) M_java_util_concurrent_ThreadPoolExecutor_interruptIdleWorkers,
	(void *) M_java_util_concurrent_ThreadPoolExecutor_reject_java_lang_Runnable,
	(void *) M_java_util_concurrent_ThreadPoolExecutor_onShutdown,
	(void *) M_java_util_concurrent_ThreadPoolExecutor_isRunningOrShutdown_boolean_R_boolean,
	(void *) M_java_util_concurrent_ThreadPoolExecutor_drainQueue_R_java_util_List,
	(void *) M_java_util_concurrent_ThreadPoolExecutor_addWorker_java_lang_Runnable_boolean_R_boolean,
	(void *) M_java_util_concurrent_ThreadPoolExecutor_addWorkerFailed_java_util_concurrent_ThreadPoolExecutor$Worker,
	(void *) M_java_util_concurrent_ThreadPoolExecutor_processWorkerExit_java_util_concurrent_ThreadPoolExecutor$Worker_boolean,
	(void *) M_java_util_concurrent_ThreadPoolExecutor_getTask_R_java_lang_Runnable,
	(void *) M_java_util_concurrent_ThreadPoolExecutor_runWorker_java_util_concurrent_ThreadPoolExecutor$Worker,
	(void *) M_java_util_concurrent_ThreadPoolExecutor_isTerminating_R_boolean,
	(void *) M_java_util_concurrent_ThreadPoolExecutor_setThreadFactory_java_util_concurrent_ThreadFactory,
	(void *) M_java_util_concurrent_ThreadPoolExecutor_getThreadFactory_R_java_util_concurrent_ThreadFactory,
	(void *) M_java_util_concurrent_ThreadPoolExecutor_setRejectedExecutionHandler_java_util_concurrent_RejectedExecutionHandler,
	(void *) M_java_util_concurrent_ThreadPoolExecutor_getRejectedExecutionHandler_R_java_util_concurrent_RejectedExecutionHandler,
	(void *) M_java_util_concurrent_ThreadPoolExecutor_setCorePoolSize_int,
	(void *) M_java_util_concurrent_ThreadPoolExecutor_getCorePoolSize_R_int,
	(void *) M_java_util_concurrent_ThreadPoolExecutor_prestartCoreThread_R_boolean,
	(void *) M_java_util_concurrent_ThreadPoolExecutor_ensurePrestart,
	(void *) M_java_util_concurrent_ThreadPoolExecutor_prestartAllCoreThreads_R_int,
	(void *) M_java_util_concurrent_ThreadPoolExecutor_allowsCoreThreadTimeOut_R_boolean,
	(void *) M_java_util_concurrent_ThreadPoolExecutor_allowCoreThreadTimeOut_boolean,
	(void *) M_java_util_concurrent_ThreadPoolExecutor_setMaximumPoolSize_int,
	(void *) M_java_util_concurrent_ThreadPoolExecutor_getMaximumPoolSize_R_int,
	(void *) M_java_util_concurrent_ThreadPoolExecutor_setKeepAliveTime_long_java_util_concurrent_TimeUnit,
	(void *) M_java_util_concurrent_ThreadPoolExecutor_getKeepAliveTime_java_util_concurrent_TimeUnit_R_long,
	(void *) M_java_util_concurrent_ThreadPoolExecutor_getQueue_R_java_util_concurrent_BlockingQueue,
	(void *) M_java_util_concurrent_ThreadPoolExecutor_remove_java_lang_Runnable_R_boolean,
	(void *) M_java_util_concurrent_ThreadPoolExecutor_purge,
	(void *) M_java_util_concurrent_ThreadPoolExecutor_getPoolSize_R_int,
	(void *) M_java_util_concurrent_ThreadPoolExecutor_getActiveCount_R_int,
	(void *) M_java_util_concurrent_ThreadPoolExecutor_getLargestPoolSize_R_int,
	(void *) M_java_util_concurrent_ThreadPoolExecutor_getTaskCount_R_long,
	(void *) M_java_util_concurrent_ThreadPoolExecutor_getCompletedTaskCount_R_long,
	(void *) M_java_util_concurrent_ThreadPoolExecutor_beforeExecute_java_lang_Thread_java_lang_Runnable,
	(void *) M_java_util_concurrent_ThreadPoolExecutor_afterExecute_java_lang_Runnable_java_lang_Throwable,
	(void *) M_java_util_concurrent_ThreadPoolExecutor_terminated,
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
	{ "execute", "(Ljava/lang/Runnable;)V" },
	{ "shutdown", "()V" },
	{ "shutdownNow", "()Ljava/util/List;" },
	{ "isShutdown", "()Z" },
	{ "isTerminated", "()Z" },
	{ "awaitTermination", "(JLjava/util/concurrent/TimeUnit;)Z" },
	{ "submit", "(Ljava/util/concurrent/Callable;)Ljava/util/concurrent/Future;" },
	{ "submit", "(Ljava/lang/Runnable;Ljava/lang/Object;)Ljava/util/concurrent/Future;" },
	{ "submit", "(Ljava/lang/Runnable;)Ljava/util/concurrent/Future;" },
	{ "invokeAll", "(Ljava/util/Collection;)Ljava/util/List;" },
	{ "invokeAll", "(Ljava/util/Collection;JLjava/util/concurrent/TimeUnit;)Ljava/util/List;" },
	{ "invokeAny", "(Ljava/util/Collection;)Ljava/lang/Object;" },
	{ "invokeAny", "(Ljava/util/Collection;JLjava/util/concurrent/TimeUnit;)Ljava/lang/Object;" },
	{ "newTaskFor", "(Ljava/lang/Runnable;Ljava/lang/Object;)Ljava/util/concurrent/RunnableFuture;" },
	{ "newTaskFor", "(Ljava/util/concurrent/Callable;)Ljava/util/concurrent/RunnableFuture;" },
	{ "doInvokeAny", "(Ljava/util/Collection;ZJ)Ljava/lang/Object;" },
	{ "compareAndIncrementWorkerCount", "(I)Z" },
	{ "compareAndDecrementWorkerCount", "(I)Z" },
	{ "decrementWorkerCount", "()V" },
	{ "advanceRunState", "(I)V" },
	{ "tryTerminate", "()V" },
	{ "checkShutdownAccess", "()V" },
	{ "interruptWorkers", "()V" },
	{ "interruptIdleWorkers", "(Z)V" },
	{ "interruptIdleWorkers", "()V" },
	{ "reject", "(Ljava/lang/Runnable;)V" },
	{ "onShutdown", "()V" },
	{ "isRunningOrShutdown", "(Z)Z" },
	{ "drainQueue", "()Ljava/util/List;" },
	{ "addWorker", "(Ljava/lang/Runnable;Z)Z" },
	{ "addWorkerFailed", "(Ljava/util/concurrent/ThreadPoolExecutor$Worker;)V" },
	{ "processWorkerExit", "(Ljava/util/concurrent/ThreadPoolExecutor$Worker;Z)V" },
	{ "getTask", "()Ljava/lang/Runnable;" },
	{ "runWorker", "(Ljava/util/concurrent/ThreadPoolExecutor$Worker;)V" },
	{ "isTerminating", "()Z" },
	{ "setThreadFactory", "(Ljava/util/concurrent/ThreadFactory;)V" },
	{ "getThreadFactory", "()Ljava/util/concurrent/ThreadFactory;" },
	{ "setRejectedExecutionHandler", "(Ljava/util/concurrent/RejectedExecutionHandler;)V" },
	{ "getRejectedExecutionHandler", "()Ljava/util/concurrent/RejectedExecutionHandler;" },
	{ "setCorePoolSize", "(I)V" },
	{ "getCorePoolSize", "()I" },
	{ "prestartCoreThread", "()Z" },
	{ "ensurePrestart", "()V" },
	{ "prestartAllCoreThreads", "()I" },
	{ "allowsCoreThreadTimeOut", "()Z" },
	{ "allowCoreThreadTimeOut", "(Z)V" },
	{ "setMaximumPoolSize", "(I)V" },
	{ "getMaximumPoolSize", "()I" },
	{ "setKeepAliveTime", "(JLjava/util/concurrent/TimeUnit;)V" },
	{ "getKeepAliveTime", "(Ljava/util/concurrent/TimeUnit;)J" },
	{ "getQueue", "()Ljava/util/concurrent/BlockingQueue;" },
	{ "remove", "(Ljava/lang/Runnable;)Z" },
	{ "purge", "()V" },
	{ "getPoolSize", "()I" },
	{ "getActiveCount", "()I" },
	{ "getLargestPoolSize", "()I" },
	{ "getTaskCount", "()J" },
	{ "getCompletedTaskCount", "()J" },
	{ "beforeExecute", "(Ljava/lang/Thread;Ljava/lang/Runnable;)V" },
	{ "afterExecute", "(Ljava/lang/Runnable;Ljava/lang/Throwable;)V" },
	{ "terminated", "()V" },
};

static jclass innerClasses[] {
	&class_java_util_concurrent_ThreadPoolExecutor$Worker,
	&class_java_util_concurrent_ThreadPoolExecutor$AbortPolicy,
	&class_java_util_concurrent_ThreadPoolExecutor$DiscardOldestPolicy,
	&class_java_util_concurrent_ThreadPoolExecutor$DiscardPolicy,
	&class_java_util_concurrent_ThreadPoolExecutor$CallerRunsPolicy,
};

static FieldMetadata fields[] {
	{ "ctl", &class_java_util_concurrent_atomic_AtomicInteger, offsetof(java_util_concurrent_ThreadPoolExecutor, F_ctl), "Ljava/util/concurrent/atomic/AtomicInteger;", 18 },
	{ "COUNT_BITS", &class_int, (intptr_t) &SF_java_util_concurrent_ThreadPoolExecutor_COUNT_BITS, "I", 26 },
	{ "CAPACITY", &class_int, (intptr_t) &SF_java_util_concurrent_ThreadPoolExecutor_CAPACITY, "I", 26 },
	{ "RUNNING", &class_int, (intptr_t) &SF_java_util_concurrent_ThreadPoolExecutor_RUNNING, "I", 26 },
	{ "SHUTDOWN", &class_int, (intptr_t) &SF_java_util_concurrent_ThreadPoolExecutor_SHUTDOWN, "I", 26 },
	{ "STOP", &class_int, (intptr_t) &SF_java_util_concurrent_ThreadPoolExecutor_STOP, "I", 26 },
	{ "TIDYING", &class_int, (intptr_t) &SF_java_util_concurrent_ThreadPoolExecutor_TIDYING, "I", 26 },
	{ "TERMINATED", &class_int, (intptr_t) &SF_java_util_concurrent_ThreadPoolExecutor_TERMINATED, "I", 26 },
	{ "workQueue", &class_java_util_concurrent_BlockingQueue, offsetof(java_util_concurrent_ThreadPoolExecutor, F_workQueue), "Ljava/util/concurrent/BlockingQueue;", 18 },
	{ "mainLock", &class_java_util_concurrent_locks_ReentrantLock, offsetof(java_util_concurrent_ThreadPoolExecutor, F_mainLock), "Ljava/util/concurrent/locks/ReentrantLock;", 18 },
	{ "workers", &class_java_util_HashSet, offsetof(java_util_concurrent_ThreadPoolExecutor, F_workers), "Ljava/util/HashSet;", 18 },
	{ "termination", &class_java_util_concurrent_locks_Condition, offsetof(java_util_concurrent_ThreadPoolExecutor, F_termination), "Ljava/util/concurrent/locks/Condition;", 18 },
	{ "largestPoolSize", &class_int, offsetof(java_util_concurrent_ThreadPoolExecutor, F_largestPoolSize), "I", 2 },
	{ "completedTaskCount", &class_long, offsetof(java_util_concurrent_ThreadPoolExecutor, F_completedTaskCount), "J", 2 },
	{ "threadFactory", &class_java_util_concurrent_ThreadFactory, offsetof(java_util_concurrent_ThreadPoolExecutor, F_threadFactory), "Ljava/util/concurrent/ThreadFactory;", 66 },
	{ "handler", &class_java_util_concurrent_RejectedExecutionHandler, offsetof(java_util_concurrent_ThreadPoolExecutor, F_handler), "Ljava/util/concurrent/RejectedExecutionHandler;", 66 },
	{ "keepAliveTime", &class_long, offsetof(java_util_concurrent_ThreadPoolExecutor, F_keepAliveTime), "J", 66 },
	{ "allowCoreThreadTimeOut", &class_boolean, offsetof(java_util_concurrent_ThreadPoolExecutor, F_allowCoreThreadTimeOut), "Z", 66 },
	{ "corePoolSize", &class_int, offsetof(java_util_concurrent_ThreadPoolExecutor, F_corePoolSize), "I", 66 },
	{ "maximumPoolSize", &class_int, offsetof(java_util_concurrent_ThreadPoolExecutor, F_maximumPoolSize), "I", 66 },
	{ "defaultHandler", &class_java_util_concurrent_RejectedExecutionHandler, (intptr_t) &SF_java_util_concurrent_ThreadPoolExecutor_defaultHandler, "Ljava/util/concurrent/RejectedExecutionHandler;", 26 },
	{ "ONLY_ONE", &class_boolean, (intptr_t) &SF_java_util_concurrent_ThreadPoolExecutor_ONLY_ONE, "Z", 26 },
};

static MethodMetadata methods[] {
	{ "runStateOf", (intptr_t) SM_java_util_concurrent_ThreadPoolExecutor_runStateOf_int_R_int, 0, "(I)I", 10 },
	{ "workerCountOf", (intptr_t) SM_java_util_concurrent_ThreadPoolExecutor_workerCountOf_int_R_int, 0, "(I)I", 10 },
	{ "ctlOf", (intptr_t) SM_java_util_concurrent_ThreadPoolExecutor_ctlOf_int_int_R_int, 0, "(II)I", 10 },
	{ "runStateLessThan", (intptr_t) SM_java_util_concurrent_ThreadPoolExecutor_runStateLessThan_int_int_R_boolean, 0, "(II)Z", 10 },
	{ "runStateAtLeast", (intptr_t) SM_java_util_concurrent_ThreadPoolExecutor_runStateAtLeast_int_int_R_boolean, 0, "(II)Z", 10 },
	{ "isRunning", (intptr_t) SM_java_util_concurrent_ThreadPoolExecutor_isRunning_int_R_boolean, 0, "(I)Z", 10 },
	{ "compareAndIncrementWorkerCount", (intptr_t) M_java_util_concurrent_ThreadPoolExecutor_compareAndIncrementWorkerCount_int_R_boolean, VTABLE_java_util_concurrent_ThreadPoolExecutor_compareAndIncrementWorkerCount_int_R_boolean, "(I)Z", 2 },
	{ "compareAndDecrementWorkerCount", (intptr_t) M_java_util_concurrent_ThreadPoolExecutor_compareAndDecrementWorkerCount_int_R_boolean, VTABLE_java_util_concurrent_ThreadPoolExecutor_compareAndDecrementWorkerCount_int_R_boolean, "(I)Z", 2 },
	{ "decrementWorkerCount", (intptr_t) M_java_util_concurrent_ThreadPoolExecutor_decrementWorkerCount, VTABLE_java_util_concurrent_ThreadPoolExecutor_decrementWorkerCount, "()V", 2 },
	{ "advanceRunState", (intptr_t) M_java_util_concurrent_ThreadPoolExecutor_advanceRunState_int, VTABLE_java_util_concurrent_ThreadPoolExecutor_advanceRunState_int, "(I)V", 2 },
	{ "tryTerminate", (intptr_t) M_java_util_concurrent_ThreadPoolExecutor_tryTerminate, VTABLE_java_util_concurrent_ThreadPoolExecutor_tryTerminate, "()V", 16 },
	{ "checkShutdownAccess", (intptr_t) M_java_util_concurrent_ThreadPoolExecutor_checkShutdownAccess, VTABLE_java_util_concurrent_ThreadPoolExecutor_checkShutdownAccess, "()V", 2 },
	{ "interruptWorkers", (intptr_t) M_java_util_concurrent_ThreadPoolExecutor_interruptWorkers, VTABLE_java_util_concurrent_ThreadPoolExecutor_interruptWorkers, "()V", 2 },
	{ "interruptIdleWorkers", (intptr_t) M_java_util_concurrent_ThreadPoolExecutor_interruptIdleWorkers_boolean, VTABLE_java_util_concurrent_ThreadPoolExecutor_interruptIdleWorkers_boolean, "(Z)V", 2 },
	{ "interruptIdleWorkers", (intptr_t) M_java_util_concurrent_ThreadPoolExecutor_interruptIdleWorkers, VTABLE_java_util_concurrent_ThreadPoolExecutor_interruptIdleWorkers, "()V", 2 },
	{ "reject", (intptr_t) M_java_util_concurrent_ThreadPoolExecutor_reject_java_lang_Runnable, VTABLE_java_util_concurrent_ThreadPoolExecutor_reject_java_lang_Runnable, "(Ljava/lang/Runnable;)V", 16 },
	{ "onShutdown", (intptr_t) M_java_util_concurrent_ThreadPoolExecutor_onShutdown, VTABLE_java_util_concurrent_ThreadPoolExecutor_onShutdown, "()V", 0 },
	{ "isRunningOrShutdown", (intptr_t) M_java_util_concurrent_ThreadPoolExecutor_isRunningOrShutdown_boolean_R_boolean, VTABLE_java_util_concurrent_ThreadPoolExecutor_isRunningOrShutdown_boolean_R_boolean, "(Z)Z", 17 },
	{ "drainQueue", (intptr_t) M_java_util_concurrent_ThreadPoolExecutor_drainQueue_R_java_util_List, VTABLE_java_util_concurrent_ThreadPoolExecutor_drainQueue_R_java_util_List, "()Ljava/util/List;", 2 },
	{ "addWorker", (intptr_t) M_java_util_concurrent_ThreadPoolExecutor_addWorker_java_lang_Runnable_boolean_R_boolean, VTABLE_java_util_concurrent_ThreadPoolExecutor_addWorker_java_lang_Runnable_boolean_R_boolean, "(Ljava/lang/Runnable;Z)Z", 2 },
	{ "addWorkerFailed", (intptr_t) M_java_util_concurrent_ThreadPoolExecutor_addWorkerFailed_java_util_concurrent_ThreadPoolExecutor$Worker, VTABLE_java_util_concurrent_ThreadPoolExecutor_addWorkerFailed_java_util_concurrent_ThreadPoolExecutor$Worker, "(Ljava/util/concurrent/ThreadPoolExecutor$Worker;)V", 2 },
	{ "processWorkerExit", (intptr_t) M_java_util_concurrent_ThreadPoolExecutor_processWorkerExit_java_util_concurrent_ThreadPoolExecutor$Worker_boolean, VTABLE_java_util_concurrent_ThreadPoolExecutor_processWorkerExit_java_util_concurrent_ThreadPoolExecutor$Worker_boolean, "(Ljava/util/concurrent/ThreadPoolExecutor$Worker;Z)V", 2 },
	{ "getTask", (intptr_t) M_java_util_concurrent_ThreadPoolExecutor_getTask_R_java_lang_Runnable, VTABLE_java_util_concurrent_ThreadPoolExecutor_getTask_R_java_lang_Runnable, "()Ljava/lang/Runnable;", 2 },
	{ "runWorker", (intptr_t) M_java_util_concurrent_ThreadPoolExecutor_runWorker_java_util_concurrent_ThreadPoolExecutor$Worker, VTABLE_java_util_concurrent_ThreadPoolExecutor_runWorker_java_util_concurrent_ThreadPoolExecutor$Worker, "(Ljava/util/concurrent/ThreadPoolExecutor$Worker;)V", 16 },
	{ "<init>", (intptr_t) init_java_util_concurrent_ThreadPoolExecutor_int_int_long_java_util_concurrent_TimeUnit_java_util_concurrent_BlockingQueue, 0, "(IIJLjava/util/concurrent/TimeUnit;Ljava/util/concurrent/BlockingQueue;)V", 1 },
	{ "<init>", (intptr_t) init_java_util_concurrent_ThreadPoolExecutor_int_int_long_java_util_concurrent_TimeUnit_java_util_concurrent_BlockingQueue_java_util_concurrent_ThreadFactory, 0, "(IIJLjava/util/concurrent/TimeUnit;Ljava/util/concurrent/BlockingQueue;Ljava/util/concurrent/ThreadFactory;)V", 1 },
	{ "<init>", (intptr_t) init_java_util_concurrent_ThreadPoolExecutor_int_int_long_java_util_concurrent_TimeUnit_java_util_concurrent_BlockingQueue_java_util_concurrent_RejectedExecutionHandler, 0, "(IIJLjava/util/concurrent/TimeUnit;Ljava/util/concurrent/BlockingQueue;Ljava/util/concurrent/RejectedExecutionHandler;)V", 1 },
	{ "<init>", (intptr_t) init_java_util_concurrent_ThreadPoolExecutor_int_int_long_java_util_concurrent_TimeUnit_java_util_concurrent_BlockingQueue_java_util_concurrent_ThreadFactory_java_util_concurrent_RejectedExecutionHandler, 0, "(IIJLjava/util/concurrent/TimeUnit;Ljava/util/concurrent/BlockingQueue;Ljava/util/concurrent/ThreadFactory;Ljava/util/concurrent/RejectedExecutionHandler;)V", 1 },
	{ "execute", (intptr_t) M_java_util_concurrent_ThreadPoolExecutor_execute_java_lang_Runnable, VTABLE_java_util_concurrent_ThreadPoolExecutor_execute_java_lang_Runnable, "(Ljava/lang/Runnable;)V", 1 },
	{ "shutdown", (intptr_t) M_java_util_concurrent_ThreadPoolExecutor_shutdown, VTABLE_java_util_concurrent_ThreadPoolExecutor_shutdown, "()V", 1 },
	{ "shutdownNow", (intptr_t) M_java_util_concurrent_ThreadPoolExecutor_shutdownNow_R_java_util_List, VTABLE_java_util_concurrent_ThreadPoolExecutor_shutdownNow_R_java_util_List, "()Ljava/util/List;", 1 },
	{ "isShutdown", (intptr_t) M_java_util_concurrent_ThreadPoolExecutor_isShutdown_R_boolean, VTABLE_java_util_concurrent_ThreadPoolExecutor_isShutdown_R_boolean, "()Z", 1 },
	{ "isTerminating", (intptr_t) M_java_util_concurrent_ThreadPoolExecutor_isTerminating_R_boolean, VTABLE_java_util_concurrent_ThreadPoolExecutor_isTerminating_R_boolean, "()Z", 1 },
	{ "isTerminated", (intptr_t) M_java_util_concurrent_ThreadPoolExecutor_isTerminated_R_boolean, VTABLE_java_util_concurrent_ThreadPoolExecutor_isTerminated_R_boolean, "()Z", 1 },
	{ "awaitTermination", (intptr_t) M_java_util_concurrent_ThreadPoolExecutor_awaitTermination_long_java_util_concurrent_TimeUnit_R_boolean, VTABLE_java_util_concurrent_ThreadPoolExecutor_awaitTermination_long_java_util_concurrent_TimeUnit_R_boolean, "(JLjava/util/concurrent/TimeUnit;)Z", 1 },
	{ "finalize", (intptr_t) M_java_util_concurrent_ThreadPoolExecutor_finalize, VTABLE_java_util_concurrent_ThreadPoolExecutor_finalize, "()V", 4 },
	{ "setThreadFactory", (intptr_t) M_java_util_concurrent_ThreadPoolExecutor_setThreadFactory_java_util_concurrent_ThreadFactory, VTABLE_java_util_concurrent_ThreadPoolExecutor_setThreadFactory_java_util_concurrent_ThreadFactory, "(Ljava/util/concurrent/ThreadFactory;)V", 1 },
	{ "getThreadFactory", (intptr_t) M_java_util_concurrent_ThreadPoolExecutor_getThreadFactory_R_java_util_concurrent_ThreadFactory, VTABLE_java_util_concurrent_ThreadPoolExecutor_getThreadFactory_R_java_util_concurrent_ThreadFactory, "()Ljava/util/concurrent/ThreadFactory;", 1 },
	{ "setRejectedExecutionHandler", (intptr_t) M_java_util_concurrent_ThreadPoolExecutor_setRejectedExecutionHandler_java_util_concurrent_RejectedExecutionHandler, VTABLE_java_util_concurrent_ThreadPoolExecutor_setRejectedExecutionHandler_java_util_concurrent_RejectedExecutionHandler, "(Ljava/util/concurrent/RejectedExecutionHandler;)V", 1 },
	{ "getRejectedExecutionHandler", (intptr_t) M_java_util_concurrent_ThreadPoolExecutor_getRejectedExecutionHandler_R_java_util_concurrent_RejectedExecutionHandler, VTABLE_java_util_concurrent_ThreadPoolExecutor_getRejectedExecutionHandler_R_java_util_concurrent_RejectedExecutionHandler, "()Ljava/util/concurrent/RejectedExecutionHandler;", 1 },
	{ "setCorePoolSize", (intptr_t) M_java_util_concurrent_ThreadPoolExecutor_setCorePoolSize_int, VTABLE_java_util_concurrent_ThreadPoolExecutor_setCorePoolSize_int, "(I)V", 1 },
	{ "getCorePoolSize", (intptr_t) M_java_util_concurrent_ThreadPoolExecutor_getCorePoolSize_R_int, VTABLE_java_util_concurrent_ThreadPoolExecutor_getCorePoolSize_R_int, "()I", 1 },
	{ "prestartCoreThread", (intptr_t) M_java_util_concurrent_ThreadPoolExecutor_prestartCoreThread_R_boolean, VTABLE_java_util_concurrent_ThreadPoolExecutor_prestartCoreThread_R_boolean, "()Z", 1 },
	{ "ensurePrestart", (intptr_t) M_java_util_concurrent_ThreadPoolExecutor_ensurePrestart, VTABLE_java_util_concurrent_ThreadPoolExecutor_ensurePrestart, "()V", 0 },
	{ "prestartAllCoreThreads", (intptr_t) M_java_util_concurrent_ThreadPoolExecutor_prestartAllCoreThreads_R_int, VTABLE_java_util_concurrent_ThreadPoolExecutor_prestartAllCoreThreads_R_int, "()I", 1 },
	{ "allowsCoreThreadTimeOut", (intptr_t) M_java_util_concurrent_ThreadPoolExecutor_allowsCoreThreadTimeOut_R_boolean, VTABLE_java_util_concurrent_ThreadPoolExecutor_allowsCoreThreadTimeOut_R_boolean, "()Z", 1 },
	{ "allowCoreThreadTimeOut", (intptr_t) M_java_util_concurrent_ThreadPoolExecutor_allowCoreThreadTimeOut_boolean, VTABLE_java_util_concurrent_ThreadPoolExecutor_allowCoreThreadTimeOut_boolean, "(Z)V", 1 },
	{ "setMaximumPoolSize", (intptr_t) M_java_util_concurrent_ThreadPoolExecutor_setMaximumPoolSize_int, VTABLE_java_util_concurrent_ThreadPoolExecutor_setMaximumPoolSize_int, "(I)V", 1 },
	{ "getMaximumPoolSize", (intptr_t) M_java_util_concurrent_ThreadPoolExecutor_getMaximumPoolSize_R_int, VTABLE_java_util_concurrent_ThreadPoolExecutor_getMaximumPoolSize_R_int, "()I", 1 },
	{ "setKeepAliveTime", (intptr_t) M_java_util_concurrent_ThreadPoolExecutor_setKeepAliveTime_long_java_util_concurrent_TimeUnit, VTABLE_java_util_concurrent_ThreadPoolExecutor_setKeepAliveTime_long_java_util_concurrent_TimeUnit, "(JLjava/util/concurrent/TimeUnit;)V", 1 },
	{ "getKeepAliveTime", (intptr_t) M_java_util_concurrent_ThreadPoolExecutor_getKeepAliveTime_java_util_concurrent_TimeUnit_R_long, VTABLE_java_util_concurrent_ThreadPoolExecutor_getKeepAliveTime_java_util_concurrent_TimeUnit_R_long, "(Ljava/util/concurrent/TimeUnit;)J", 1 },
	{ "getQueue", (intptr_t) M_java_util_concurrent_ThreadPoolExecutor_getQueue_R_java_util_concurrent_BlockingQueue, VTABLE_java_util_concurrent_ThreadPoolExecutor_getQueue_R_java_util_concurrent_BlockingQueue, "()Ljava/util/concurrent/BlockingQueue;", 1 },
	{ "remove", (intptr_t) M_java_util_concurrent_ThreadPoolExecutor_remove_java_lang_Runnable_R_boolean, VTABLE_java_util_concurrent_ThreadPoolExecutor_remove_java_lang_Runnable_R_boolean, "(Ljava/lang/Runnable;)Z", 1 },
	{ "purge", (intptr_t) M_java_util_concurrent_ThreadPoolExecutor_purge, VTABLE_java_util_concurrent_ThreadPoolExecutor_purge, "()V", 1 },
	{ "getPoolSize", (intptr_t) M_java_util_concurrent_ThreadPoolExecutor_getPoolSize_R_int, VTABLE_java_util_concurrent_ThreadPoolExecutor_getPoolSize_R_int, "()I", 1 },
	{ "getActiveCount", (intptr_t) M_java_util_concurrent_ThreadPoolExecutor_getActiveCount_R_int, VTABLE_java_util_concurrent_ThreadPoolExecutor_getActiveCount_R_int, "()I", 1 },
	{ "getLargestPoolSize", (intptr_t) M_java_util_concurrent_ThreadPoolExecutor_getLargestPoolSize_R_int, VTABLE_java_util_concurrent_ThreadPoolExecutor_getLargestPoolSize_R_int, "()I", 1 },
	{ "getTaskCount", (intptr_t) M_java_util_concurrent_ThreadPoolExecutor_getTaskCount_R_long, VTABLE_java_util_concurrent_ThreadPoolExecutor_getTaskCount_R_long, "()J", 1 },
	{ "getCompletedTaskCount", (intptr_t) M_java_util_concurrent_ThreadPoolExecutor_getCompletedTaskCount_R_long, VTABLE_java_util_concurrent_ThreadPoolExecutor_getCompletedTaskCount_R_long, "()J", 1 },
	{ "toString", (intptr_t) M_java_util_concurrent_ThreadPoolExecutor_toString_R_java_lang_String, VTABLE_java_util_concurrent_ThreadPoolExecutor_toString_R_java_lang_String, "()Ljava/lang/String;", 1 },
	{ "beforeExecute", (intptr_t) M_java_util_concurrent_ThreadPoolExecutor_beforeExecute_java_lang_Thread_java_lang_Runnable, VTABLE_java_util_concurrent_ThreadPoolExecutor_beforeExecute_java_lang_Thread_java_lang_Runnable, "(Ljava/lang/Thread;Ljava/lang/Runnable;)V", 4 },
	{ "afterExecute", (intptr_t) M_java_util_concurrent_ThreadPoolExecutor_afterExecute_java_lang_Runnable_java_lang_Throwable, VTABLE_java_util_concurrent_ThreadPoolExecutor_afterExecute_java_lang_Runnable_java_lang_Throwable, "(Ljava/lang/Runnable;Ljava/lang/Throwable;)V", 4 },
	{ "terminated", (intptr_t) M_java_util_concurrent_ThreadPoolExecutor_terminated, VTABLE_java_util_concurrent_ThreadPoolExecutor_terminated, "()V", 4 },
	{ "<clinit>", (intptr_t) clinit_java_util_concurrent_ThreadPoolExecutor, 0, "()V", 8 },
};

Class class_java_util_concurrent_ThreadPoolExecutor{
		.nativeName = (intptr_t) "java/util/concurrent/ThreadPoolExecutor",
		.parentClass = (intptr_t) &class_java_util_concurrent_AbstractExecutorService,
		.size = sizeof(java_util_concurrent_ThreadPoolExecutor),
		.classVtable = (intptr_t) vtable_java_util_concurrent_ThreadPoolExecutor,
		.staticInitializer = (intptr_t) clinit_java_util_concurrent_ThreadPoolExecutor,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_java_util_concurrent_ThreadPoolExecutor,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 5,
		.nativeInnerClasses = (intptr_t) innerClasses,
		.access = 33,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 22,
		.nativeFields = (intptr_t) fields,
		.methodCount = 64,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 72,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_java_util_concurrent_ThreadPoolExecutor = registerClass(&class_java_util_concurrent_ThreadPoolExecutor);

}
