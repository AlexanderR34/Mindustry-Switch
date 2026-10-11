#include "java/util/concurrent/ThreadPoolExecutor_Worker.h"
#include "java/util/concurrent/locks/AbstractQueuedSynchronizer.h"
#include "java/lang/Object.h"
#include "java/util/concurrent/ThreadPoolExecutor_Worker.h"
#include "java/util/concurrent/ThreadPoolExecutor.h"
#include "java/util/concurrent/ThreadFactory.h"
#include "java/util/concurrent/locks/AbstractOwnableSynchronizer.h"
#include "java/lang/Runnable.h"
#include "java/lang/Thread.h"
#include "java/lang/SecurityException.h"

extern "C" {

jlong SF_java_util_concurrent_ThreadPoolExecutor$Worker_serialVersionUID;

void mark_java_util_concurrent_ThreadPoolExecutor$Worker(jobject object, jint mark, jint depth) {
	if (!object) {
		return;
	}
	if (depth > GC_DEPTH_ALWAYS && (object->gcMark < GC_MARK_START || object->gcMark == mark))
		return;
	if (depth > MAX_GC_MARK_DEPTH) {
		markDeepObject(object);
		return;
	}
	mark_java_util_concurrent_locks_AbstractQueuedSynchronizer(object, mark, depth);
	if (object->gcMark >= GC_MARK_START)
		object->gcMark = mark;
	auto self = (java_util_concurrent_ThreadPoolExecutor$Worker *) object;
	if (self->F_thread)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_thread)->clazz)->markFunction)((jobject) self->F_thread, mark, depth + 1);
	if (self->F_firstTask)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_firstTask)->clazz)->markFunction)((jobject) self->F_firstTask, mark, depth + 1);
	if (self->F_this$0)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_this$0)->clazz)->markFunction)((jobject) self->F_this$0, mark, depth + 1);
}

void clinit_java_util_concurrent_ThreadPoolExecutor$Worker(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	clinit_java_util_concurrent_locks_AbstractQueuedSynchronizer(ctx);
	SF_java_util_concurrent_ThreadPoolExecutor$Worker_serialVersionUID = jlong(6138294804551838833ll);
}

void init_java_util_concurrent_ThreadPoolExecutor$Worker_java_util_concurrent_ThreadPoolExecutor_java_lang_Runnable(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/concurrent/ThreadPoolExecutor$Worker:<init>", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_util_concurrent_ThreadPoolExecutor$Worker(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(613);
	((java_util_concurrent_ThreadPoolExecutor$Worker *) NULL_CHECK((frame[0].o)))->F_this$0 = (jref) (frame[1].o);
	init_java_util_concurrent_locks_AbstractQueuedSynchronizer(ctx, (frame[0].o));
	LINE_NUMBER(614);
	((func_java_util_concurrent_ThreadPoolExecutor$Worker_setState_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_util_concurrent_ThreadPoolExecutor$Worker_setState_int])(ctx, (frame[0].o), (jint(-1)));
	LINE_NUMBER(615);
	((java_util_concurrent_ThreadPoolExecutor$Worker *) NULL_CHECK((frame[0].o)))->F_firstTask = (jref) (frame[2].o);
	LINE_NUMBER(616);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((func_java_util_concurrent_ThreadPoolExecutor_getThreadFactory_R_java_util_concurrent_ThreadFactory) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_util_concurrent_ThreadPoolExecutor_getThreadFactory_R_java_util_concurrent_ThreadFactory])(ctx, (frame[1].o));
	sp[1].o = (jobject)((func_java_util_concurrent_ThreadFactory_newThread_java_lang_Runnable_R_java_lang_Thread) resolveInterfaceMethod(ctx, &class_java_util_concurrent_ThreadFactory, INDEX_java_util_concurrent_ThreadFactory_newThread_java_lang_Runnable_R_java_lang_Thread, sp[1].o))(ctx, sp[1].o, (frame[0].o));
	((java_util_concurrent_ThreadPoolExecutor$Worker *) NULL_CHECK(sp[0].o))->F_thread = (jref) sp[1].o;
	LINE_NUMBER(617);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_java_util_concurrent_ThreadPoolExecutor$Worker_run(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/concurrent/ThreadPoolExecutor$Worker:run", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(621);
	sp[0].o = (jobject)((java_util_concurrent_ThreadPoolExecutor$Worker *) NULL_CHECK((frame[0].o)))->F_this$0;
	((func_java_util_concurrent_ThreadPoolExecutor_runWorker_java_util_concurrent_ThreadPoolExecutor$Worker) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_concurrent_ThreadPoolExecutor_runWorker_java_util_concurrent_ThreadPoolExecutor$Worker])(ctx, sp[0].o, (frame[0].o));
	LINE_NUMBER(622);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jbool M_java_util_concurrent_ThreadPoolExecutor$Worker_isHeldExclusively_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/concurrent/ThreadPoolExecutor$Worker:isHeldExclusively", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(630);
	jint temp0 = (jint)((func_java_util_concurrent_ThreadPoolExecutor$Worker_getState_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_util_concurrent_ThreadPoolExecutor$Worker_getState_R_int])(ctx, (frame[0].o));
	if (temp0 == 0) goto label_1;
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

jbool M_java_util_concurrent_ThreadPoolExecutor$Worker_tryAcquire_int_R_boolean(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/concurrent/ThreadPoolExecutor$Worker:tryAcquire", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(634);
	jint temp0 = (jint)((func_java_util_concurrent_ThreadPoolExecutor$Worker_compareAndSetState_int_int_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_util_concurrent_ThreadPoolExecutor$Worker_compareAndSetState_int_int_R_boolean])(ctx, (frame[0].o), (jint(0)), (jint(1)));
	if (temp0 == 0) goto label_1;
	}
	{
	LINE_NUMBER(635);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)SM_java_lang_Thread_currentThread_R_java_lang_Thread(ctx);
	((func_java_util_concurrent_ThreadPoolExecutor$Worker_setExclusiveOwnerThread_java_lang_Thread) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_concurrent_ThreadPoolExecutor$Worker_setExclusiveOwnerThread_java_lang_Thread])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(636);
	popStackFrame(ctx);
	return (jint(1));
	}
label_1:;
	{
	LINE_NUMBER(638);
	popStackFrame(ctx);
	return (jint(0));
	}

	popStackFrame(ctx);
}

jbool M_java_util_concurrent_ThreadPoolExecutor$Worker_tryRelease_int_R_boolean(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/concurrent/ThreadPoolExecutor$Worker:tryRelease", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(642);
	((func_java_util_concurrent_ThreadPoolExecutor$Worker_setExclusiveOwnerThread_java_lang_Thread) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_util_concurrent_ThreadPoolExecutor$Worker_setExclusiveOwnerThread_java_lang_Thread])(ctx, (frame[0].o), (jobject(nullptr)));
	LINE_NUMBER(643);
	((func_java_util_concurrent_ThreadPoolExecutor$Worker_setState_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_util_concurrent_ThreadPoolExecutor$Worker_setState_int])(ctx, (frame[0].o), (jint(0)));
	LINE_NUMBER(644);
	popStackFrame(ctx);
	return (jint(1));
	}

	popStackFrame(ctx);
}

void M_java_util_concurrent_ThreadPoolExecutor$Worker_lock(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/concurrent/ThreadPoolExecutor$Worker:lock", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(647);
	((func_java_util_concurrent_ThreadPoolExecutor$Worker_acquire_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_util_concurrent_ThreadPoolExecutor$Worker_acquire_int])(ctx, (frame[0].o), (jint(1)));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jbool M_java_util_concurrent_ThreadPoolExecutor$Worker_tryLock_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/concurrent/ThreadPoolExecutor$Worker:tryLock", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(648);
	jint temp0 = (jint)((func_java_util_concurrent_ThreadPoolExecutor$Worker_tryAcquire_int_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_util_concurrent_ThreadPoolExecutor$Worker_tryAcquire_int_R_boolean])(ctx, (frame[0].o), (jint(1)));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

void M_java_util_concurrent_ThreadPoolExecutor$Worker_unlock(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/concurrent/ThreadPoolExecutor$Worker:unlock", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(649);
	jint temp0 = (jint)((func_java_util_concurrent_ThreadPoolExecutor$Worker_release_int_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_util_concurrent_ThreadPoolExecutor$Worker_release_int_R_boolean])(ctx, (frame[0].o), (jint(1)));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jbool M_java_util_concurrent_ThreadPoolExecutor$Worker_isLocked_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/concurrent/ThreadPoolExecutor$Worker:isLocked", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(650);
	jint temp0 = (jint)((func_java_util_concurrent_ThreadPoolExecutor$Worker_isHeldExclusively_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_util_concurrent_ThreadPoolExecutor$Worker_isHeldExclusively_R_boolean])(ctx, (frame[0].o));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

void M_java_util_concurrent_ThreadPoolExecutor$Worker_interruptIfStarted(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/concurrent/ThreadPoolExecutor$Worker:interruptIfStarted", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(654);
	jint temp0 = (jint)((func_java_util_concurrent_ThreadPoolExecutor$Worker_getState_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_util_concurrent_ThreadPoolExecutor$Worker_getState_R_int])(ctx, (frame[0].o));
	if (temp0 < 0) goto label_5;
	}
	{
	sp[0].o = (jobject)((java_util_concurrent_ThreadPoolExecutor$Worker *) NULL_CHECK((frame[0].o)))->F_thread;
	frame[1].o = sp[0].o;
	if (sp[0].o == nullptr) goto label_5;
	}
	{
	jint temp0 = (jint)((func_java_lang_Thread_isInterrupted_R_boolean) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_Thread_isInterrupted_R_boolean])(ctx, (frame[1].o));
	if (temp0 != 0) goto label_5;
	}
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_SecurityException))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(656);
	((func_java_lang_Thread_interrupt) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_Thread_interrupt])(ctx, (frame[1].o));
	}
	popExceptionFrame(frameRef);
	LINE_NUMBER(658);
	goto label_5;
label_2:;
	LINE_NUMBER(657);
	INST_ASTORE(2);
label_5:;
	LINE_NUMBER(660);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void *vtable_java_util_concurrent_ThreadPoolExecutor$Worker[] {
	(void *) M_java_lang_Object_hashCode_R_int,
	(void *) M_java_lang_Object_equals_java_lang_Object_R_boolean,
	(void *) M_java_lang_Object_clone_R_java_lang_Object,
	(void *) M_java_lang_Object_getClass_R_java_lang_Class,
	(void *) M_java_util_concurrent_locks_AbstractQueuedSynchronizer_toString_R_java_lang_String,
	(void *) M_java_lang_Object_finalize,
	(void *) M_java_lang_Object_notify,
	(void *) M_java_lang_Object_notifyAll,
	(void *) M_java_lang_Object_wait,
	(void *) M_java_lang_Object_wait_long,
	(void *) M_java_lang_Object_wait_long_int,
	(void *) M_java_util_concurrent_locks_AbstractOwnableSynchronizer_setExclusiveOwnerThread_java_lang_Thread,
	(void *) M_java_util_concurrent_locks_AbstractOwnableSynchronizer_getExclusiveOwnerThread_R_java_lang_Thread,
	(void *) M_java_util_concurrent_locks_AbstractQueuedSynchronizer_getState_R_int,
	(void *) M_java_util_concurrent_locks_AbstractQueuedSynchronizer_setState_int,
	(void *) M_java_util_concurrent_locks_AbstractQueuedSynchronizer_compareAndSetState_int_int_R_boolean,
	(void *) M_java_util_concurrent_locks_AbstractQueuedSynchronizer_enq_java_util_concurrent_locks_AbstractQueuedSynchronizer$Node_R_java_util_concurrent_locks_AbstractQueuedSynchronizer$Node,
	(void *) M_java_util_concurrent_locks_AbstractQueuedSynchronizer_addWaiter_java_util_concurrent_locks_AbstractQueuedSynchronizer$Node_R_java_util_concurrent_locks_AbstractQueuedSynchronizer$Node,
	(void *) M_java_util_concurrent_locks_AbstractQueuedSynchronizer_setHead_java_util_concurrent_locks_AbstractQueuedSynchronizer$Node,
	(void *) M_java_util_concurrent_locks_AbstractQueuedSynchronizer_unparkSuccessor_java_util_concurrent_locks_AbstractQueuedSynchronizer$Node,
	(void *) M_java_util_concurrent_locks_AbstractQueuedSynchronizer_doReleaseShared,
	(void *) M_java_util_concurrent_locks_AbstractQueuedSynchronizer_setHeadAndPropagate_java_util_concurrent_locks_AbstractQueuedSynchronizer$Node_int,
	(void *) M_java_util_concurrent_locks_AbstractQueuedSynchronizer_cancelAcquire_java_util_concurrent_locks_AbstractQueuedSynchronizer$Node,
	(void *) M_java_util_concurrent_locks_AbstractQueuedSynchronizer_parkAndCheckInterrupt_R_boolean,
	(void *) M_java_util_concurrent_locks_AbstractQueuedSynchronizer_acquireQueued_java_util_concurrent_locks_AbstractQueuedSynchronizer$Node_int_R_boolean,
	(void *) M_java_util_concurrent_locks_AbstractQueuedSynchronizer_doAcquireInterruptibly_int,
	(void *) M_java_util_concurrent_locks_AbstractQueuedSynchronizer_doAcquireNanos_int_long_R_boolean,
	(void *) M_java_util_concurrent_locks_AbstractQueuedSynchronizer_doAcquireShared_int,
	(void *) M_java_util_concurrent_locks_AbstractQueuedSynchronizer_doAcquireSharedInterruptibly_int,
	(void *) M_java_util_concurrent_locks_AbstractQueuedSynchronizer_doAcquireSharedNanos_int_long_R_boolean,
	(void *) M_java_util_concurrent_ThreadPoolExecutor$Worker_tryAcquire_int_R_boolean,
	(void *) M_java_util_concurrent_ThreadPoolExecutor$Worker_tryRelease_int_R_boolean,
	(void *) M_java_util_concurrent_locks_AbstractQueuedSynchronizer_tryAcquireShared_int_R_int,
	(void *) M_java_util_concurrent_locks_AbstractQueuedSynchronizer_tryReleaseShared_int_R_boolean,
	(void *) M_java_util_concurrent_ThreadPoolExecutor$Worker_isHeldExclusively_R_boolean,
	(void *) M_java_util_concurrent_locks_AbstractQueuedSynchronizer_acquire_int,
	(void *) M_java_util_concurrent_locks_AbstractQueuedSynchronizer_acquireInterruptibly_int,
	(void *) M_java_util_concurrent_locks_AbstractQueuedSynchronizer_tryAcquireNanos_int_long_R_boolean,
	(void *) M_java_util_concurrent_locks_AbstractQueuedSynchronizer_release_int_R_boolean,
	(void *) M_java_util_concurrent_locks_AbstractQueuedSynchronizer_acquireShared_int,
	(void *) M_java_util_concurrent_locks_AbstractQueuedSynchronizer_acquireSharedInterruptibly_int,
	(void *) M_java_util_concurrent_locks_AbstractQueuedSynchronizer_tryAcquireSharedNanos_int_long_R_boolean,
	(void *) M_java_util_concurrent_locks_AbstractQueuedSynchronizer_releaseShared_int_R_boolean,
	(void *) M_java_util_concurrent_locks_AbstractQueuedSynchronizer_hasQueuedThreads_R_boolean,
	(void *) M_java_util_concurrent_locks_AbstractQueuedSynchronizer_hasContended_R_boolean,
	(void *) M_java_util_concurrent_locks_AbstractQueuedSynchronizer_getFirstQueuedThread_R_java_lang_Thread,
	(void *) M_java_util_concurrent_locks_AbstractQueuedSynchronizer_fullGetFirstQueuedThread_R_java_lang_Thread,
	(void *) M_java_util_concurrent_locks_AbstractQueuedSynchronizer_isQueued_java_lang_Thread_R_boolean,
	(void *) M_java_util_concurrent_locks_AbstractQueuedSynchronizer_apparentlyFirstQueuedIsExclusive_R_boolean,
	(void *) M_java_util_concurrent_locks_AbstractQueuedSynchronizer_hasQueuedPredecessors_R_boolean,
	(void *) M_java_util_concurrent_locks_AbstractQueuedSynchronizer_getQueueLength_R_int,
	(void *) M_java_util_concurrent_locks_AbstractQueuedSynchronizer_getQueuedThreads_R_java_util_Collection,
	(void *) M_java_util_concurrent_locks_AbstractQueuedSynchronizer_getExclusiveQueuedThreads_R_java_util_Collection,
	(void *) M_java_util_concurrent_locks_AbstractQueuedSynchronizer_getSharedQueuedThreads_R_java_util_Collection,
	(void *) M_java_util_concurrent_locks_AbstractQueuedSynchronizer_isOnSyncQueue_java_util_concurrent_locks_AbstractQueuedSynchronizer$Node_R_boolean,
	(void *) M_java_util_concurrent_locks_AbstractQueuedSynchronizer_findNodeFromTail_java_util_concurrent_locks_AbstractQueuedSynchronizer$Node_R_boolean,
	(void *) M_java_util_concurrent_locks_AbstractQueuedSynchronizer_transferForSignal_java_util_concurrent_locks_AbstractQueuedSynchronizer$Node_R_boolean,
	(void *) M_java_util_concurrent_locks_AbstractQueuedSynchronizer_transferAfterCancelledWait_java_util_concurrent_locks_AbstractQueuedSynchronizer$Node_R_boolean,
	(void *) M_java_util_concurrent_locks_AbstractQueuedSynchronizer_fullyRelease_java_util_concurrent_locks_AbstractQueuedSynchronizer$Node_R_int,
	(void *) M_java_util_concurrent_locks_AbstractQueuedSynchronizer_owns_java_util_concurrent_locks_AbstractQueuedSynchronizer$ConditionObject_R_boolean,
	(void *) M_java_util_concurrent_locks_AbstractQueuedSynchronizer_hasWaiters_java_util_concurrent_locks_AbstractQueuedSynchronizer$ConditionObject_R_boolean,
	(void *) M_java_util_concurrent_locks_AbstractQueuedSynchronizer_getWaitQueueLength_java_util_concurrent_locks_AbstractQueuedSynchronizer$ConditionObject_R_int,
	(void *) M_java_util_concurrent_locks_AbstractQueuedSynchronizer_getWaitingThreads_java_util_concurrent_locks_AbstractQueuedSynchronizer$ConditionObject_R_java_util_Collection,
	(void *) M_java_util_concurrent_locks_AbstractQueuedSynchronizer_compareAndSetHead_java_util_concurrent_locks_AbstractQueuedSynchronizer$Node_R_boolean,
	(void *) M_java_util_concurrent_locks_AbstractQueuedSynchronizer_compareAndSetTail_java_util_concurrent_locks_AbstractQueuedSynchronizer$Node_java_util_concurrent_locks_AbstractQueuedSynchronizer$Node_R_boolean,
	(void *) M_java_util_concurrent_ThreadPoolExecutor$Worker_run,
	(void *) M_java_util_concurrent_ThreadPoolExecutor$Worker_lock,
	(void *) M_java_util_concurrent_ThreadPoolExecutor$Worker_tryLock_R_boolean,
	(void *) M_java_util_concurrent_ThreadPoolExecutor$Worker_unlock,
	(void *) M_java_util_concurrent_ThreadPoolExecutor$Worker_isLocked_R_boolean,
	(void *) M_java_util_concurrent_ThreadPoolExecutor$Worker_interruptIfStarted,
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
	{ "setExclusiveOwnerThread", "(Ljava/lang/Thread;)V" },
	{ "getExclusiveOwnerThread", "()Ljava/lang/Thread;" },
	{ "getState", "()I" },
	{ "setState", "(I)V" },
	{ "compareAndSetState", "(II)Z" },
	{ "enq", "(Ljava/util/concurrent/locks/AbstractQueuedSynchronizer$Node;)Ljava/util/concurrent/locks/AbstractQueuedSynchronizer$Node;" },
	{ "addWaiter", "(Ljava/util/concurrent/locks/AbstractQueuedSynchronizer$Node;)Ljava/util/concurrent/locks/AbstractQueuedSynchronizer$Node;" },
	{ "setHead", "(Ljava/util/concurrent/locks/AbstractQueuedSynchronizer$Node;)V" },
	{ "unparkSuccessor", "(Ljava/util/concurrent/locks/AbstractQueuedSynchronizer$Node;)V" },
	{ "doReleaseShared", "()V" },
	{ "setHeadAndPropagate", "(Ljava/util/concurrent/locks/AbstractQueuedSynchronizer$Node;I)V" },
	{ "cancelAcquire", "(Ljava/util/concurrent/locks/AbstractQueuedSynchronizer$Node;)V" },
	{ "parkAndCheckInterrupt", "()Z" },
	{ "acquireQueued", "(Ljava/util/concurrent/locks/AbstractQueuedSynchronizer$Node;I)Z" },
	{ "doAcquireInterruptibly", "(I)V" },
	{ "doAcquireNanos", "(IJ)Z" },
	{ "doAcquireShared", "(I)V" },
	{ "doAcquireSharedInterruptibly", "(I)V" },
	{ "doAcquireSharedNanos", "(IJ)Z" },
	{ "tryAcquire", "(I)Z" },
	{ "tryRelease", "(I)Z" },
	{ "tryAcquireShared", "(I)I" },
	{ "tryReleaseShared", "(I)Z" },
	{ "isHeldExclusively", "()Z" },
	{ "acquire", "(I)V" },
	{ "acquireInterruptibly", "(I)V" },
	{ "tryAcquireNanos", "(IJ)Z" },
	{ "release", "(I)Z" },
	{ "acquireShared", "(I)V" },
	{ "acquireSharedInterruptibly", "(I)V" },
	{ "tryAcquireSharedNanos", "(IJ)Z" },
	{ "releaseShared", "(I)Z" },
	{ "hasQueuedThreads", "()Z" },
	{ "hasContended", "()Z" },
	{ "getFirstQueuedThread", "()Ljava/lang/Thread;" },
	{ "fullGetFirstQueuedThread", "()Ljava/lang/Thread;" },
	{ "isQueued", "(Ljava/lang/Thread;)Z" },
	{ "apparentlyFirstQueuedIsExclusive", "()Z" },
	{ "hasQueuedPredecessors", "()Z" },
	{ "getQueueLength", "()I" },
	{ "getQueuedThreads", "()Ljava/util/Collection;" },
	{ "getExclusiveQueuedThreads", "()Ljava/util/Collection;" },
	{ "getSharedQueuedThreads", "()Ljava/util/Collection;" },
	{ "isOnSyncQueue", "(Ljava/util/concurrent/locks/AbstractQueuedSynchronizer$Node;)Z" },
	{ "findNodeFromTail", "(Ljava/util/concurrent/locks/AbstractQueuedSynchronizer$Node;)Z" },
	{ "transferForSignal", "(Ljava/util/concurrent/locks/AbstractQueuedSynchronizer$Node;)Z" },
	{ "transferAfterCancelledWait", "(Ljava/util/concurrent/locks/AbstractQueuedSynchronizer$Node;)Z" },
	{ "fullyRelease", "(Ljava/util/concurrent/locks/AbstractQueuedSynchronizer$Node;)I" },
	{ "owns", "(Ljava/util/concurrent/locks/AbstractQueuedSynchronizer$ConditionObject;)Z" },
	{ "hasWaiters", "(Ljava/util/concurrent/locks/AbstractQueuedSynchronizer$ConditionObject;)Z" },
	{ "getWaitQueueLength", "(Ljava/util/concurrent/locks/AbstractQueuedSynchronizer$ConditionObject;)I" },
	{ "getWaitingThreads", "(Ljava/util/concurrent/locks/AbstractQueuedSynchronizer$ConditionObject;)Ljava/util/Collection;" },
	{ "compareAndSetHead", "(Ljava/util/concurrent/locks/AbstractQueuedSynchronizer$Node;)Z" },
	{ "compareAndSetTail", "(Ljava/util/concurrent/locks/AbstractQueuedSynchronizer$Node;Ljava/util/concurrent/locks/AbstractQueuedSynchronizer$Node;)Z" },
	{ "run", "()V" },
	{ "lock", "()V" },
	{ "tryLock", "()Z" },
	{ "unlock", "()V" },
	{ "isLocked", "()Z" },
	{ "interruptIfStarted", "()V" },
};

static jclass interfaces[] { &class_java_lang_Runnable, };

static FieldMetadata fields[] {
	{ "serialVersionUID", &class_long, (intptr_t) &SF_java_util_concurrent_ThreadPoolExecutor$Worker_serialVersionUID, "J", 26 },
	{ "thread", &class_java_lang_Thread, offsetof(java_util_concurrent_ThreadPoolExecutor$Worker, F_thread), "Ljava/lang/Thread;", 16 },
	{ "firstTask", &class_java_lang_Runnable, offsetof(java_util_concurrent_ThreadPoolExecutor$Worker, F_firstTask), "Ljava/lang/Runnable;", 0 },
	{ "completedTasks", &class_long, offsetof(java_util_concurrent_ThreadPoolExecutor$Worker, F_completedTasks), "J", 64 },
	{ "this$0", &class_java_util_concurrent_ThreadPoolExecutor, offsetof(java_util_concurrent_ThreadPoolExecutor$Worker, F_this$0), "Ljava/util/concurrent/ThreadPoolExecutor;", 4112 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_java_util_concurrent_ThreadPoolExecutor$Worker_java_util_concurrent_ThreadPoolExecutor_java_lang_Runnable, 0, "(Ljava/util/concurrent/ThreadPoolExecutor;Ljava/lang/Runnable;)V", 0 },
	{ "run", (intptr_t) M_java_util_concurrent_ThreadPoolExecutor$Worker_run, VTABLE_java_util_concurrent_ThreadPoolExecutor$Worker_run, "()V", 1 },
	{ "isHeldExclusively", (intptr_t) M_java_util_concurrent_ThreadPoolExecutor$Worker_isHeldExclusively_R_boolean, VTABLE_java_util_concurrent_ThreadPoolExecutor$Worker_isHeldExclusively_R_boolean, "()Z", 4 },
	{ "tryAcquire", (intptr_t) M_java_util_concurrent_ThreadPoolExecutor$Worker_tryAcquire_int_R_boolean, VTABLE_java_util_concurrent_ThreadPoolExecutor$Worker_tryAcquire_int_R_boolean, "(I)Z", 4 },
	{ "tryRelease", (intptr_t) M_java_util_concurrent_ThreadPoolExecutor$Worker_tryRelease_int_R_boolean, VTABLE_java_util_concurrent_ThreadPoolExecutor$Worker_tryRelease_int_R_boolean, "(I)Z", 4 },
	{ "lock", (intptr_t) M_java_util_concurrent_ThreadPoolExecutor$Worker_lock, VTABLE_java_util_concurrent_ThreadPoolExecutor$Worker_lock, "()V", 1 },
	{ "tryLock", (intptr_t) M_java_util_concurrent_ThreadPoolExecutor$Worker_tryLock_R_boolean, VTABLE_java_util_concurrent_ThreadPoolExecutor$Worker_tryLock_R_boolean, "()Z", 1 },
	{ "unlock", (intptr_t) M_java_util_concurrent_ThreadPoolExecutor$Worker_unlock, VTABLE_java_util_concurrent_ThreadPoolExecutor$Worker_unlock, "()V", 1 },
	{ "isLocked", (intptr_t) M_java_util_concurrent_ThreadPoolExecutor$Worker_isLocked_R_boolean, VTABLE_java_util_concurrent_ThreadPoolExecutor$Worker_isLocked_R_boolean, "()Z", 1 },
	{ "interruptIfStarted", (intptr_t) M_java_util_concurrent_ThreadPoolExecutor$Worker_interruptIfStarted, VTABLE_java_util_concurrent_ThreadPoolExecutor$Worker_interruptIfStarted, "()V", 0 },
};

Class class_java_util_concurrent_ThreadPoolExecutor$Worker{
		.nativeName = (intptr_t) "java/util/concurrent/ThreadPoolExecutor$Worker",
		.parentClass = (intptr_t) &class_java_util_concurrent_locks_AbstractQueuedSynchronizer,
		.size = sizeof(java_util_concurrent_ThreadPoolExecutor$Worker),
		.classVtable = (intptr_t) vtable_java_util_concurrent_ThreadPoolExecutor$Worker,
		.staticInitializer = (intptr_t) clinit_java_util_concurrent_ThreadPoolExecutor$Worker,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_java_util_concurrent_ThreadPoolExecutor$Worker,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) &class_java_util_concurrent_ThreadPoolExecutor,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 48,
		.interfaceCount = 1,
		.nativeInterfaces = (intptr_t) interfaces,
		.fieldCount = 5,
		.nativeFields = (intptr_t) fields,
		.methodCount = 10,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 71,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_java_util_concurrent_ThreadPoolExecutor$Worker = registerClass(&class_java_util_concurrent_ThreadPoolExecutor$Worker);

}

