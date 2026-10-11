#include "java/util/concurrent/locks/ReentrantLock_Sync.h"
#include "java/lang/IllegalMonitorStateException.h"
#include "java/util/concurrent/locks/AbstractQueuedSynchronizer.h"
#include "java/util/concurrent/locks/ReentrantLock_Sync.h"
#include "java/lang/Object.h"
#include "java/lang/Error.h"
#include "java/lang/String.h"
#include "java/util/concurrent/locks/AbstractQueuedSynchronizer_ConditionObject.h"
#include "java/util/concurrent/locks/AbstractOwnableSynchronizer.h"
#include "java/util/concurrent/locks/ReentrantLock.h"
#include "java/lang/Thread.h"

extern "C" {

jlong SF_java_util_concurrent_locks_ReentrantLock$Sync_serialVersionUID;

void mark_java_util_concurrent_locks_ReentrantLock$Sync(jobject object, jint mark, jint depth) {
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
	auto self = (java_util_concurrent_locks_ReentrantLock$Sync *) object;
}

void clinit_java_util_concurrent_locks_ReentrantLock$Sync(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	clinit_java_util_concurrent_locks_AbstractQueuedSynchronizer(ctx);
	SF_java_util_concurrent_locks_ReentrantLock$Sync_serialVersionUID = jlong(-5179523762034025860ll);
}

void init_java_util_concurrent_locks_ReentrantLock$Sync(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/concurrent/locks/ReentrantLock$Sync:<init>", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_util_concurrent_locks_ReentrantLock$Sync(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(117);
	init_java_util_concurrent_locks_AbstractQueuedSynchronizer(ctx, (frame[0].o));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jbool M_java_util_concurrent_locks_ReentrantLock$Sync_nonfairTryAcquire_int_R_boolean(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/concurrent/locks/ReentrantLock$Sync:nonfairTryAcquire", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(131);
	sp[0].o = (jobject)SM_java_lang_Thread_currentThread_R_java_lang_Thread(ctx);
	frame[2].o = sp[0].o;
	LINE_NUMBER(132);
	jint temp0 = (jint)((func_java_util_concurrent_locks_ReentrantLock$Sync_getState_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_util_concurrent_locks_ReentrantLock$Sync_getState_R_int])(ctx, (frame[0].o));
	frame[3].i = temp0;
	LINE_NUMBER(133);
	if ((frame[3].i) != 0) goto label_3;
	}
	{
	LINE_NUMBER(134);
	jint temp0 = (jint)((func_java_util_concurrent_locks_ReentrantLock$Sync_compareAndSetState_int_int_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_util_concurrent_locks_ReentrantLock$Sync_compareAndSetState_int_int_R_boolean])(ctx, (frame[0].o), (jint(0)), (frame[1].i));
	if (temp0 == 0) goto label_5;
	}
	{
	LINE_NUMBER(135);
	((func_java_util_concurrent_locks_ReentrantLock$Sync_setExclusiveOwnerThread_java_lang_Thread) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_util_concurrent_locks_ReentrantLock$Sync_setExclusiveOwnerThread_java_lang_Thread])(ctx, (frame[0].o), (frame[2].o));
	LINE_NUMBER(136);
	popStackFrame(ctx);
	return (jint(1));
	}
label_3:;
	{
	LINE_NUMBER(139);
	sp[0].o = frame[2].o;
	sp[1].o = (jobject)((func_java_util_concurrent_locks_ReentrantLock$Sync_getExclusiveOwnerThread_R_java_lang_Thread) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_util_concurrent_locks_ReentrantLock$Sync_getExclusiveOwnerThread_R_java_lang_Thread])(ctx, (frame[0].o));
	if (sp[0].o != sp[1].o) goto label_5;
	}
	{
	LINE_NUMBER(140);
	frame[4].i = ((frame[3].i) + (frame[1].i));
	LINE_NUMBER(141);
	if ((frame[4].i) >= 0) goto label_10;
	}
	{
	LINE_NUMBER(142);
	clinit_java_lang_Error(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_Error);
	init_java_lang_Error_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"Maximum lock count exceeded"_j))));
	throwException(ctx, sp[0].o);	}
label_10:;
	{
	LINE_NUMBER(143);
	((func_java_util_concurrent_locks_ReentrantLock$Sync_setState_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_util_concurrent_locks_ReentrantLock$Sync_setState_int])(ctx, (frame[0].o), (frame[4].i));
	LINE_NUMBER(144);
	popStackFrame(ctx);
	return (jint(1));
	}
label_5:;
	{
	LINE_NUMBER(146);
	popStackFrame(ctx);
	return (jint(0));
	}

	popStackFrame(ctx);
}

jbool M_java_util_concurrent_locks_ReentrantLock$Sync_tryRelease_int_R_boolean(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/concurrent/locks/ReentrantLock$Sync:tryRelease", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(150);
	jint temp0 = (jint)((func_java_util_concurrent_locks_ReentrantLock$Sync_getState_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_util_concurrent_locks_ReentrantLock$Sync_getState_R_int])(ctx, (frame[0].o));
	frame[2].i = (temp0 - (frame[1].i));
	LINE_NUMBER(151);
	sp[0].o = (jobject)SM_java_lang_Thread_currentThread_R_java_lang_Thread(ctx);
	sp[1].o = (jobject)((func_java_util_concurrent_locks_ReentrantLock$Sync_getExclusiveOwnerThread_R_java_lang_Thread) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_util_concurrent_locks_ReentrantLock$Sync_getExclusiveOwnerThread_R_java_lang_Thread])(ctx, (frame[0].o));
	if (sp[0].o == sp[1].o) goto label_2;
	}
	{
	LINE_NUMBER(152);
	clinit_java_lang_IllegalMonitorStateException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IllegalMonitorStateException);
	init_java_lang_IllegalMonitorStateException(ctx, sp[0].o);
	throwException(ctx, sp[0].o);	}
label_2:;
	{
	LINE_NUMBER(153);
	frame[3].i = (jint(0));
	LINE_NUMBER(154);
	if ((frame[2].i) != 0) goto label_5;
	}
	{
	LINE_NUMBER(155);
	frame[3].i = (jint(1));
	LINE_NUMBER(156);
	((func_java_util_concurrent_locks_ReentrantLock$Sync_setExclusiveOwnerThread_java_lang_Thread) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_util_concurrent_locks_ReentrantLock$Sync_setExclusiveOwnerThread_java_lang_Thread])(ctx, (frame[0].o), (jobject(nullptr)));
	}
label_5:;
	{
	LINE_NUMBER(158);
	((func_java_util_concurrent_locks_ReentrantLock$Sync_setState_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_util_concurrent_locks_ReentrantLock$Sync_setState_int])(ctx, (frame[0].o), (frame[2].i));
	LINE_NUMBER(159);
	popStackFrame(ctx);
	return (frame[3].i);
	}

	popStackFrame(ctx);
}

jbool M_java_util_concurrent_locks_ReentrantLock$Sync_isHeldExclusively_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/concurrent/locks/ReentrantLock$Sync:isHeldExclusively", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(165);
	sp[0].o = (jobject)((func_java_util_concurrent_locks_ReentrantLock$Sync_getExclusiveOwnerThread_R_java_lang_Thread) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_util_concurrent_locks_ReentrantLock$Sync_getExclusiveOwnerThread_R_java_lang_Thread])(ctx, (frame[0].o));
	sp[1].o = (jobject)SM_java_lang_Thread_currentThread_R_java_lang_Thread(ctx);
	if (sp[0].o != sp[1].o) goto label_1;
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

jobject M_java_util_concurrent_locks_ReentrantLock$Sync_newCondition_R_java_util_concurrent_locks_AbstractQueuedSynchronizer$ConditionObject(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/concurrent/locks/ReentrantLock$Sync:newCondition", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(169);
	clinit_java_util_concurrent_locks_AbstractQueuedSynchronizer$ConditionObject(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_util_concurrent_locks_AbstractQueuedSynchronizer$ConditionObject);
	init_java_util_concurrent_locks_AbstractQueuedSynchronizer$ConditionObject_java_util_concurrent_locks_AbstractQueuedSynchronizer(ctx, sp[0].o, (frame[0].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_java_util_concurrent_locks_ReentrantLock$Sync_getOwner_R_java_lang_Thread(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/concurrent/locks/ReentrantLock$Sync:getOwner", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(175);
	jint temp0 = (jint)((func_java_util_concurrent_locks_ReentrantLock$Sync_getState_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_util_concurrent_locks_ReentrantLock$Sync_getState_R_int])(ctx, (frame[0].o));
	if (temp0 != 0) goto label_1;
	}
	INST_ACONST_NULL();
	goto label_2;
label_1:;
	INST_ALOAD(0);
	POP_N(1); // Pop method args
	sp->o = (jobject)((func_java_util_concurrent_locks_ReentrantLock$Sync_getExclusiveOwnerThread_R_java_lang_Thread) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_concurrent_locks_ReentrantLock$Sync_getExclusiveOwnerThread_R_java_lang_Thread])(ctx, sp[0].o);
	sp++;
label_2:;
	popStackFrame(ctx);
	INST_ARETURN();

	popStackFrame(ctx);
}

jint M_java_util_concurrent_locks_ReentrantLock$Sync_getHoldCount_R_int(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/concurrent/locks/ReentrantLock$Sync:getHoldCount", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(179);
	jint temp0 = (jint)((func_java_util_concurrent_locks_ReentrantLock$Sync_isHeldExclusively_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_util_concurrent_locks_ReentrantLock$Sync_isHeldExclusively_R_boolean])(ctx, (frame[0].o));
	if (temp0 == 0) goto label_1;
	}
	{
	jint temp0 = (jint)((func_java_util_concurrent_locks_ReentrantLock$Sync_getState_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_util_concurrent_locks_ReentrantLock$Sync_getState_R_int])(ctx, (frame[0].o));
	sp[0].i = temp0;
	sp += 1;
	goto label_2;
	}
label_1:;
	INST_ICONST(0);
label_2:;
	popStackFrame(ctx);
	INST_IRETURN();

	popStackFrame(ctx);
}

jbool M_java_util_concurrent_locks_ReentrantLock$Sync_isLocked_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/concurrent/locks/ReentrantLock$Sync:isLocked", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(183);
	jint temp0 = (jint)((func_java_util_concurrent_locks_ReentrantLock$Sync_getState_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_util_concurrent_locks_ReentrantLock$Sync_getState_R_int])(ctx, (frame[0].o));
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

void *vtable_java_util_concurrent_locks_ReentrantLock$Sync[] {
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
	(void *) M_java_util_concurrent_locks_AbstractQueuedSynchronizer_tryAcquire_int_R_boolean,
	(void *) M_java_util_concurrent_locks_ReentrantLock$Sync_tryRelease_int_R_boolean,
	(void *) M_java_util_concurrent_locks_AbstractQueuedSynchronizer_tryAcquireShared_int_R_int,
	(void *) M_java_util_concurrent_locks_AbstractQueuedSynchronizer_tryReleaseShared_int_R_boolean,
	(void *) M_java_util_concurrent_locks_ReentrantLock$Sync_isHeldExclusively_R_boolean,
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
	(void *) nullptr,
	(void *) M_java_util_concurrent_locks_ReentrantLock$Sync_nonfairTryAcquire_int_R_boolean,
	(void *) M_java_util_concurrent_locks_ReentrantLock$Sync_newCondition_R_java_util_concurrent_locks_AbstractQueuedSynchronizer$ConditionObject,
	(void *) M_java_util_concurrent_locks_ReentrantLock$Sync_getOwner_R_java_lang_Thread,
	(void *) M_java_util_concurrent_locks_ReentrantLock$Sync_getHoldCount_R_int,
	(void *) M_java_util_concurrent_locks_ReentrantLock$Sync_isLocked_R_boolean,
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
	{ "lock", "()V" },
	{ "nonfairTryAcquire", "(I)Z" },
	{ "newCondition", "()Ljava/util/concurrent/locks/AbstractQueuedSynchronizer$ConditionObject;" },
	{ "getOwner", "()Ljava/lang/Thread;" },
	{ "getHoldCount", "()I" },
	{ "isLocked", "()Z" },
};

static FieldMetadata fields[] {
	{ "serialVersionUID", &class_long, (intptr_t) &SF_java_util_concurrent_locks_ReentrantLock$Sync_serialVersionUID, "J", 26 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_java_util_concurrent_locks_ReentrantLock$Sync, 0, "()V", 0 },
	{ "lock", 0, VTABLE_java_util_concurrent_locks_ReentrantLock$Sync_lock, "()V", 1024 },
	{ "nonfairTryAcquire", (intptr_t) M_java_util_concurrent_locks_ReentrantLock$Sync_nonfairTryAcquire_int_R_boolean, VTABLE_java_util_concurrent_locks_ReentrantLock$Sync_nonfairTryAcquire_int_R_boolean, "(I)Z", 16 },
	{ "tryRelease", (intptr_t) M_java_util_concurrent_locks_ReentrantLock$Sync_tryRelease_int_R_boolean, VTABLE_java_util_concurrent_locks_ReentrantLock$Sync_tryRelease_int_R_boolean, "(I)Z", 20 },
	{ "isHeldExclusively", (intptr_t) M_java_util_concurrent_locks_ReentrantLock$Sync_isHeldExclusively_R_boolean, VTABLE_java_util_concurrent_locks_ReentrantLock$Sync_isHeldExclusively_R_boolean, "()Z", 20 },
	{ "newCondition", (intptr_t) M_java_util_concurrent_locks_ReentrantLock$Sync_newCondition_R_java_util_concurrent_locks_AbstractQueuedSynchronizer$ConditionObject, VTABLE_java_util_concurrent_locks_ReentrantLock$Sync_newCondition_R_java_util_concurrent_locks_AbstractQueuedSynchronizer$ConditionObject, "()Ljava/util/concurrent/locks/AbstractQueuedSynchronizer$ConditionObject;", 16 },
	{ "getOwner", (intptr_t) M_java_util_concurrent_locks_ReentrantLock$Sync_getOwner_R_java_lang_Thread, VTABLE_java_util_concurrent_locks_ReentrantLock$Sync_getOwner_R_java_lang_Thread, "()Ljava/lang/Thread;", 16 },
	{ "getHoldCount", (intptr_t) M_java_util_concurrent_locks_ReentrantLock$Sync_getHoldCount_R_int, VTABLE_java_util_concurrent_locks_ReentrantLock$Sync_getHoldCount_R_int, "()I", 16 },
	{ "isLocked", (intptr_t) M_java_util_concurrent_locks_ReentrantLock$Sync_isLocked_R_boolean, VTABLE_java_util_concurrent_locks_ReentrantLock$Sync_isLocked_R_boolean, "()Z", 16 },
};

Class class_java_util_concurrent_locks_ReentrantLock$Sync{
		.nativeName = (intptr_t) "java/util/concurrent/locks/ReentrantLock$Sync",
		.parentClass = (intptr_t) &class_java_util_concurrent_locks_AbstractQueuedSynchronizer,
		.size = sizeof(java_util_concurrent_locks_ReentrantLock$Sync),
		.classVtable = (intptr_t) vtable_java_util_concurrent_locks_ReentrantLock$Sync,
		.staticInitializer = (intptr_t) clinit_java_util_concurrent_locks_ReentrantLock$Sync,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_java_util_concurrent_locks_ReentrantLock$Sync,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) &class_java_util_concurrent_locks_ReentrantLock,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 1056,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 1,
		.nativeFields = (intptr_t) fields,
		.methodCount = 9,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 71,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_java_util_concurrent_locks_ReentrantLock$Sync = registerClass(&class_java_util_concurrent_locks_ReentrantLock$Sync);

}

