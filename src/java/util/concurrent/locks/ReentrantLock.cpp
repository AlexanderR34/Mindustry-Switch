#include "java/util/concurrent/locks/ReentrantLock.h"
#include "java/util/concurrent/locks/AbstractQueuedSynchronizer.h"
#include "java/lang/StringBuilder.h"
#include "java/util/concurrent/TimeUnit.h"
#include "java/util/concurrent/locks/AbstractQueuedSynchronizer_ConditionObject.h"
#include "java/lang/IllegalArgumentException.h"
#include "java/util/concurrent/locks/ReentrantLock_NonfairSync.h"
#include "java/util/concurrent/locks/ReentrantLock_FairSync.h"
#include "java/util/concurrent/locks/Lock.h"
#include "java/util/Collection.h"
#include "java/lang/Object.h"
#include "java/io/Serializable.h"
#include "java/util/concurrent/locks/ReentrantLock_Sync.h"
#include "java/lang/String.h"
#include "java/util/concurrent/locks/Condition.h"
#include "java/lang/NullPointerException.h"
#include "java/util/concurrent/locks/ReentrantLock.h"
#include "java/lang/Thread.h"

extern "C" {

jlong SF_java_util_concurrent_locks_ReentrantLock_serialVersionUID;

void mark_java_util_concurrent_locks_ReentrantLock(jobject object, jint mark, jint depth) {
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
	auto self = (java_util_concurrent_locks_ReentrantLock *) object;
	if (self->F_sync)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_sync)->clazz)->markFunction)((jobject) self->F_sync, mark, depth + 1);
}

void clinit_java_util_concurrent_locks_ReentrantLock(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	SF_java_util_concurrent_locks_ReentrantLock_serialVersionUID = jlong(7373984872572414699ll);
}

void init_java_util_concurrent_locks_ReentrantLock(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/concurrent/locks/ReentrantLock:<init>", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_util_concurrent_locks_ReentrantLock(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(257);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(258);
	sp[0].o = frame[0].o;
	clinit_java_util_concurrent_locks_ReentrantLock$NonfairSync(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_util_concurrent_locks_ReentrantLock$NonfairSync);
	init_java_util_concurrent_locks_ReentrantLock$NonfairSync(ctx, sp[1].o);
	((java_util_concurrent_locks_ReentrantLock *) NULL_CHECK(sp[0].o))->F_sync = (jref) sp[1].o;
	LINE_NUMBER(259);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_java_util_concurrent_locks_ReentrantLock_boolean(jcontext ctx, jobject self, jbool param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/concurrent/locks/ReentrantLock:<init>", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_util_concurrent_locks_ReentrantLock(ctx);
	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(267);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(268);
	sp[0].o = frame[0].o;
	sp += 1;
	if ((frame[1].i) == 0) goto label_2;
	}
	{
	clinit_java_util_concurrent_locks_ReentrantLock$FairSync(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_util_concurrent_locks_ReentrantLock$FairSync);
	init_java_util_concurrent_locks_ReentrantLock$FairSync(ctx, sp[0].o);
	sp += 1;
	goto label_3;
	}
label_2:;
	{
	clinit_java_util_concurrent_locks_ReentrantLock$NonfairSync(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_util_concurrent_locks_ReentrantLock$NonfairSync);
	init_java_util_concurrent_locks_ReentrantLock$NonfairSync(ctx, sp[0].o);
	sp += 1;
	}
label_3:;
	{
	sp -= 2;
	((java_util_concurrent_locks_ReentrantLock *) NULL_CHECK(sp[0].o))->F_sync = (jref) sp[1].o;
	LINE_NUMBER(269);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_java_util_concurrent_locks_ReentrantLock_lock(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/concurrent/locks/ReentrantLock:lock", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(286);
	sp[0].o = (jobject)((java_util_concurrent_locks_ReentrantLock *) NULL_CHECK((frame[0].o)))->F_sync;
	((func_java_util_concurrent_locks_ReentrantLock$Sync_lock) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_concurrent_locks_ReentrantLock$Sync_lock])(ctx, sp[0].o);
	LINE_NUMBER(287);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_java_util_concurrent_locks_ReentrantLock_lockInterruptibly(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/concurrent/locks/ReentrantLock:lockInterruptibly", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(336);
	sp[0].o = (jobject)((java_util_concurrent_locks_ReentrantLock *) NULL_CHECK((frame[0].o)))->F_sync;
	((func_java_util_concurrent_locks_ReentrantLock$Sync_acquireInterruptibly_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_concurrent_locks_ReentrantLock$Sync_acquireInterruptibly_int])(ctx, sp[0].o, (jint(1)));
	LINE_NUMBER(337);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jbool M_java_util_concurrent_locks_ReentrantLock_tryLock_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/concurrent/locks/ReentrantLock:tryLock", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(366);
	sp[0].o = (jobject)((java_util_concurrent_locks_ReentrantLock *) NULL_CHECK((frame[0].o)))->F_sync;
	jint temp0 = (jint)((func_java_util_concurrent_locks_ReentrantLock$Sync_nonfairTryAcquire_int_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_concurrent_locks_ReentrantLock$Sync_nonfairTryAcquire_int_R_boolean])(ctx, sp[0].o, (jint(1)));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jbool M_java_util_concurrent_locks_ReentrantLock_tryLock_long_java_util_concurrent_TimeUnit_R_boolean(jcontext ctx, jobject self, jlong param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/concurrent/locks/ReentrantLock:tryLock", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].l = param0;
	frame[3].o = param1;
	{
	LINE_NUMBER(443);
	sp[0].o = (jobject)((java_util_concurrent_locks_ReentrantLock *) NULL_CHECK((frame[0].o)))->F_sync;
	jint temp0 = jint(1);
	jlong temp1 = (jlong)((func_java_util_concurrent_TimeUnit_toNanos_long_R_long) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_java_util_concurrent_TimeUnit_toNanos_long_R_long])(ctx, (frame[3].o), (frame[1].l));
	jint temp2 = (jint)((func_java_util_concurrent_locks_ReentrantLock$Sync_tryAcquireNanos_int_long_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_concurrent_locks_ReentrantLock$Sync_tryAcquireNanos_int_long_R_boolean])(ctx, sp[0].o, temp0, temp1);
	popStackFrame(ctx);
	return temp2;
	}

	popStackFrame(ctx);
}

void M_java_util_concurrent_locks_ReentrantLock_unlock(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/concurrent/locks/ReentrantLock:unlock", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(458);
	sp[0].o = (jobject)((java_util_concurrent_locks_ReentrantLock *) NULL_CHECK((frame[0].o)))->F_sync;
	jint temp0 = (jint)((func_java_util_concurrent_locks_ReentrantLock$Sync_release_int_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_concurrent_locks_ReentrantLock$Sync_release_int_R_boolean])(ctx, sp[0].o, (jint(1)));
	LINE_NUMBER(459);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_java_util_concurrent_locks_ReentrantLock_newCondition_R_java_util_concurrent_locks_Condition(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/concurrent/locks/ReentrantLock:newCondition", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(501);
	sp[0].o = (jobject)((java_util_concurrent_locks_ReentrantLock *) NULL_CHECK((frame[0].o)))->F_sync;
	sp[0].o = (jobject)((func_java_util_concurrent_locks_ReentrantLock$Sync_newCondition_R_java_util_concurrent_locks_AbstractQueuedSynchronizer$ConditionObject) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_concurrent_locks_ReentrantLock$Sync_newCondition_R_java_util_concurrent_locks_AbstractQueuedSynchronizer$ConditionObject])(ctx, sp[0].o);
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jint M_java_util_concurrent_locks_ReentrantLock_getHoldCount_R_int(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/concurrent/locks/ReentrantLock:getHoldCount", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(534);
	sp[0].o = (jobject)((java_util_concurrent_locks_ReentrantLock *) NULL_CHECK((frame[0].o)))->F_sync;
	jint temp0 = (jint)((func_java_util_concurrent_locks_ReentrantLock$Sync_getHoldCount_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_concurrent_locks_ReentrantLock$Sync_getHoldCount_R_int])(ctx, sp[0].o);
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jbool M_java_util_concurrent_locks_ReentrantLock_isHeldByCurrentThread_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/concurrent/locks/ReentrantLock:isHeldByCurrentThread", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(579);
	sp[0].o = (jobject)((java_util_concurrent_locks_ReentrantLock *) NULL_CHECK((frame[0].o)))->F_sync;
	jint temp0 = (jint)((func_java_util_concurrent_locks_ReentrantLock$Sync_isHeldExclusively_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_concurrent_locks_ReentrantLock$Sync_isHeldExclusively_R_boolean])(ctx, sp[0].o);
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jbool M_java_util_concurrent_locks_ReentrantLock_isLocked_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/concurrent/locks/ReentrantLock:isLocked", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(591);
	sp[0].o = (jobject)((java_util_concurrent_locks_ReentrantLock *) NULL_CHECK((frame[0].o)))->F_sync;
	jint temp0 = (jint)((func_java_util_concurrent_locks_ReentrantLock$Sync_isLocked_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_concurrent_locks_ReentrantLock$Sync_isLocked_R_boolean])(ctx, sp[0].o);
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jbool M_java_util_concurrent_locks_ReentrantLock_isFair_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/concurrent/locks/ReentrantLock:isFair", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(600);
	sp[0].o = (jobject)((java_util_concurrent_locks_ReentrantLock *) NULL_CHECK((frame[0].o)))->F_sync;
	popStackFrame(ctx);
	return (isInstance(ctx, sp[0].o, &class_java_util_concurrent_locks_ReentrantLock$FairSync));
	}

	popStackFrame(ctx);
}

jobject M_java_util_concurrent_locks_ReentrantLock_getOwner_R_java_lang_Thread(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/concurrent/locks/ReentrantLock:getOwner", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(617);
	sp[0].o = (jobject)((java_util_concurrent_locks_ReentrantLock *) NULL_CHECK((frame[0].o)))->F_sync;
	sp[0].o = (jobject)((func_java_util_concurrent_locks_ReentrantLock$Sync_getOwner_R_java_lang_Thread) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_concurrent_locks_ReentrantLock$Sync_getOwner_R_java_lang_Thread])(ctx, sp[0].o);
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jbool M_java_util_concurrent_locks_ReentrantLock_hasQueuedThreads_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/concurrent/locks/ReentrantLock:hasQueuedThreads", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(631);
	sp[0].o = (jobject)((java_util_concurrent_locks_ReentrantLock *) NULL_CHECK((frame[0].o)))->F_sync;
	jint temp0 = (jint)((func_java_util_concurrent_locks_ReentrantLock$Sync_hasQueuedThreads_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_concurrent_locks_ReentrantLock$Sync_hasQueuedThreads_R_boolean])(ctx, sp[0].o);
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jbool M_java_util_concurrent_locks_ReentrantLock_hasQueuedThread_java_lang_Thread_R_boolean(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/concurrent/locks/ReentrantLock:hasQueuedThread", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(646);
	sp[0].o = (jobject)((java_util_concurrent_locks_ReentrantLock *) NULL_CHECK((frame[0].o)))->F_sync;
	jint temp0 = (jint)((func_java_util_concurrent_locks_ReentrantLock$Sync_isQueued_java_lang_Thread_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_concurrent_locks_ReentrantLock$Sync_isQueued_java_lang_Thread_R_boolean])(ctx, sp[0].o, (frame[1].o));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jint M_java_util_concurrent_locks_ReentrantLock_getQueueLength_R_int(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/concurrent/locks/ReentrantLock:getQueueLength", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(660);
	sp[0].o = (jobject)((java_util_concurrent_locks_ReentrantLock *) NULL_CHECK((frame[0].o)))->F_sync;
	jint temp0 = (jint)((func_java_util_concurrent_locks_ReentrantLock$Sync_getQueueLength_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_concurrent_locks_ReentrantLock$Sync_getQueueLength_R_int])(ctx, sp[0].o);
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jobject M_java_util_concurrent_locks_ReentrantLock_getQueuedThreads_R_java_util_Collection(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/concurrent/locks/ReentrantLock:getQueuedThreads", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(675);
	sp[0].o = (jobject)((java_util_concurrent_locks_ReentrantLock *) NULL_CHECK((frame[0].o)))->F_sync;
	sp[0].o = (jobject)((func_java_util_concurrent_locks_ReentrantLock$Sync_getQueuedThreads_R_java_util_Collection) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_concurrent_locks_ReentrantLock$Sync_getQueuedThreads_R_java_util_Collection])(ctx, sp[0].o);
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jbool M_java_util_concurrent_locks_ReentrantLock_hasWaiters_java_util_concurrent_locks_Condition_R_boolean(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/concurrent/locks/ReentrantLock:hasWaiters", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(694);
	if ((frame[1].o) != nullptr) goto label_1;
	}
	{
	LINE_NUMBER(695);
	clinit_java_lang_NullPointerException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_NullPointerException);
	init_java_lang_NullPointerException(ctx, sp[0].o);
	throwException(ctx, sp[0].o);	}
label_1:;
	{
	LINE_NUMBER(696);
	if ((isInstance(ctx, (frame[1].o), &class_java_util_concurrent_locks_AbstractQueuedSynchronizer$ConditionObject)) != 0) goto label_3;
	}
	{
	LINE_NUMBER(697);
	clinit_java_lang_IllegalArgumentException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IllegalArgumentException);
	init_java_lang_IllegalArgumentException_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"not owner"_j))));
	throwException(ctx, sp[0].o);	}
label_3:;
	{
	LINE_NUMBER(698);
	sp[0].o = (jobject)((java_util_concurrent_locks_ReentrantLock *) NULL_CHECK((frame[0].o)))->F_sync;
	jint temp0 = (jint)((func_java_util_concurrent_locks_ReentrantLock$Sync_hasWaiters_java_util_concurrent_locks_AbstractQueuedSynchronizer$ConditionObject_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_concurrent_locks_ReentrantLock$Sync_hasWaiters_java_util_concurrent_locks_AbstractQueuedSynchronizer$ConditionObject_R_boolean])(ctx, sp[0].o, (checkCast(ctx, &class_java_util_concurrent_locks_AbstractQueuedSynchronizer$ConditionObject, (frame[1].o))));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jint M_java_util_concurrent_locks_ReentrantLock_getWaitQueueLength_java_util_concurrent_locks_Condition_R_int(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/concurrent/locks/ReentrantLock:getWaitQueueLength", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(717);
	if ((frame[1].o) != nullptr) goto label_1;
	}
	{
	LINE_NUMBER(718);
	clinit_java_lang_NullPointerException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_NullPointerException);
	init_java_lang_NullPointerException(ctx, sp[0].o);
	throwException(ctx, sp[0].o);	}
label_1:;
	{
	LINE_NUMBER(719);
	if ((isInstance(ctx, (frame[1].o), &class_java_util_concurrent_locks_AbstractQueuedSynchronizer$ConditionObject)) != 0) goto label_3;
	}
	{
	LINE_NUMBER(720);
	clinit_java_lang_IllegalArgumentException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IllegalArgumentException);
	init_java_lang_IllegalArgumentException_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"not owner"_j))));
	throwException(ctx, sp[0].o);	}
label_3:;
	{
	LINE_NUMBER(721);
	sp[0].o = (jobject)((java_util_concurrent_locks_ReentrantLock *) NULL_CHECK((frame[0].o)))->F_sync;
	jint temp0 = (jint)((func_java_util_concurrent_locks_ReentrantLock$Sync_getWaitQueueLength_java_util_concurrent_locks_AbstractQueuedSynchronizer$ConditionObject_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_concurrent_locks_ReentrantLock$Sync_getWaitQueueLength_java_util_concurrent_locks_AbstractQueuedSynchronizer$ConditionObject_R_int])(ctx, sp[0].o, (checkCast(ctx, &class_java_util_concurrent_locks_AbstractQueuedSynchronizer$ConditionObject, (frame[1].o))));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jobject M_java_util_concurrent_locks_ReentrantLock_getWaitingThreads_java_util_concurrent_locks_Condition_R_java_util_Collection(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/concurrent/locks/ReentrantLock:getWaitingThreads", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(742);
	if ((frame[1].o) != nullptr) goto label_1;
	}
	{
	LINE_NUMBER(743);
	clinit_java_lang_NullPointerException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_NullPointerException);
	init_java_lang_NullPointerException(ctx, sp[0].o);
	throwException(ctx, sp[0].o);	}
label_1:;
	{
	LINE_NUMBER(744);
	if ((isInstance(ctx, (frame[1].o), &class_java_util_concurrent_locks_AbstractQueuedSynchronizer$ConditionObject)) != 0) goto label_3;
	}
	{
	LINE_NUMBER(745);
	clinit_java_lang_IllegalArgumentException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IllegalArgumentException);
	init_java_lang_IllegalArgumentException_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"not owner"_j))));
	throwException(ctx, sp[0].o);	}
label_3:;
	{
	LINE_NUMBER(746);
	sp[0].o = (jobject)((java_util_concurrent_locks_ReentrantLock *) NULL_CHECK((frame[0].o)))->F_sync;
	sp[0].o = (jobject)((func_java_util_concurrent_locks_ReentrantLock$Sync_getWaitingThreads_java_util_concurrent_locks_AbstractQueuedSynchronizer$ConditionObject_R_java_util_Collection) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_concurrent_locks_ReentrantLock$Sync_getWaitingThreads_java_util_concurrent_locks_AbstractQueuedSynchronizer$ConditionObject_R_java_util_Collection])(ctx, sp[0].o, (checkCast(ctx, &class_java_util_concurrent_locks_AbstractQueuedSynchronizer$ConditionObject, (frame[1].o))));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_java_util_concurrent_locks_ReentrantLock_toString_R_java_lang_String(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/concurrent/locks/ReentrantLock:toString", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(758);
	sp[0].o = (jobject)((java_util_concurrent_locks_ReentrantLock *) NULL_CHECK((frame[0].o)))->F_sync;
	sp[0].o = (jobject)((func_java_util_concurrent_locks_ReentrantLock$Sync_getOwner_R_java_lang_Thread) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_concurrent_locks_ReentrantLock$Sync_getOwner_R_java_lang_Thread])(ctx, sp[0].o);
	frame[1].o = sp[0].o;
	LINE_NUMBER(759);
	clinit_java_lang_StringBuilder(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[0].o);
	sp[1].o = (jobject)M_java_lang_Object_toString_R_java_lang_String(ctx, (frame[0].o));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, sp[1].o);
	sp += 1;
	if ((frame[1].o) != nullptr) goto label_2;
	}
	{
	LINE_NUMBER(760);
	sp[0].o = ((jobject) createStringLiteral(ctx, u8"[Unlocked]"_j));
	sp += 1;
	goto label_4;
	}
label_2:;
	{
	LINE_NUMBER(761);
	clinit_java_lang_StringBuilder(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[0].o);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"[Locked by thread "_j))));
	sp[1].o = (jobject)((func_java_lang_Thread_getName_R_java_lang_String) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_Thread_getName_R_java_lang_String])(ctx, (frame[1].o));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, sp[1].o);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"]"_j))));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[0].o);
	sp += 1;
	}
label_4:;
	{
	sp -= 2;
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, sp[1].o);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[0].o);
	LINE_NUMBER(759);
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void *vtable_java_util_concurrent_locks_ReentrantLock[] {
	(void *) M_java_lang_Object_hashCode_R_int,
	(void *) M_java_lang_Object_equals_java_lang_Object_R_boolean,
	(void *) M_java_lang_Object_clone_R_java_lang_Object,
	(void *) M_java_lang_Object_getClass_R_java_lang_Class,
	(void *) M_java_util_concurrent_locks_ReentrantLock_toString_R_java_lang_String,
	(void *) M_java_lang_Object_finalize,
	(void *) M_java_lang_Object_notify,
	(void *) M_java_lang_Object_notifyAll,
	(void *) M_java_lang_Object_wait,
	(void *) M_java_lang_Object_wait_long,
	(void *) M_java_lang_Object_wait_long_int,
	(void *) M_java_util_concurrent_locks_ReentrantLock_lock,
	(void *) M_java_util_concurrent_locks_ReentrantLock_lockInterruptibly,
	(void *) M_java_util_concurrent_locks_ReentrantLock_tryLock_R_boolean,
	(void *) M_java_util_concurrent_locks_ReentrantLock_tryLock_long_java_util_concurrent_TimeUnit_R_boolean,
	(void *) M_java_util_concurrent_locks_ReentrantLock_unlock,
	(void *) M_java_util_concurrent_locks_ReentrantLock_newCondition_R_java_util_concurrent_locks_Condition,
	(void *) M_java_util_concurrent_locks_ReentrantLock_getHoldCount_R_int,
	(void *) M_java_util_concurrent_locks_ReentrantLock_isHeldByCurrentThread_R_boolean,
	(void *) M_java_util_concurrent_locks_ReentrantLock_isLocked_R_boolean,
	(void *) M_java_util_concurrent_locks_ReentrantLock_isFair_R_boolean,
	(void *) M_java_util_concurrent_locks_ReentrantLock_getOwner_R_java_lang_Thread,
	(void *) M_java_util_concurrent_locks_ReentrantLock_hasQueuedThreads_R_boolean,
	(void *) M_java_util_concurrent_locks_ReentrantLock_hasQueuedThread_java_lang_Thread_R_boolean,
	(void *) M_java_util_concurrent_locks_ReentrantLock_getQueueLength_R_int,
	(void *) M_java_util_concurrent_locks_ReentrantLock_getQueuedThreads_R_java_util_Collection,
	(void *) M_java_util_concurrent_locks_ReentrantLock_hasWaiters_java_util_concurrent_locks_Condition_R_boolean,
	(void *) M_java_util_concurrent_locks_ReentrantLock_getWaitQueueLength_java_util_concurrent_locks_Condition_R_int,
	(void *) M_java_util_concurrent_locks_ReentrantLock_getWaitingThreads_java_util_concurrent_locks_Condition_R_java_util_Collection,
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
	{ "lock", "()V" },
	{ "lockInterruptibly", "()V" },
	{ "tryLock", "()Z" },
	{ "tryLock", "(JLjava/util/concurrent/TimeUnit;)Z" },
	{ "unlock", "()V" },
	{ "newCondition", "()Ljava/util/concurrent/locks/Condition;" },
	{ "getHoldCount", "()I" },
	{ "isHeldByCurrentThread", "()Z" },
	{ "isLocked", "()Z" },
	{ "isFair", "()Z" },
	{ "getOwner", "()Ljava/lang/Thread;" },
	{ "hasQueuedThreads", "()Z" },
	{ "hasQueuedThread", "(Ljava/lang/Thread;)Z" },
	{ "getQueueLength", "()I" },
	{ "getQueuedThreads", "()Ljava/util/Collection;" },
	{ "hasWaiters", "(Ljava/util/concurrent/locks/Condition;)Z" },
	{ "getWaitQueueLength", "(Ljava/util/concurrent/locks/Condition;)I" },
	{ "getWaitingThreads", "(Ljava/util/concurrent/locks/Condition;)Ljava/util/Collection;" },
};

static jclass interfaces[] { &class_java_util_concurrent_locks_Lock, &class_java_io_Serializable, };

static jclass innerClasses[] {
	&class_java_util_concurrent_locks_ReentrantLock$NonfairSync,
	&class_java_util_concurrent_locks_ReentrantLock$Sync,
	&class_java_util_concurrent_locks_ReentrantLock$FairSync,
};

static FieldMetadata fields[] {
	{ "serialVersionUID", &class_long, (intptr_t) &SF_java_util_concurrent_locks_ReentrantLock_serialVersionUID, "J", 26 },
	{ "sync", &class_java_util_concurrent_locks_ReentrantLock$Sync, offsetof(java_util_concurrent_locks_ReentrantLock, F_sync), "Ljava/util/concurrent/locks/ReentrantLock$Sync;", 18 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_java_util_concurrent_locks_ReentrantLock, 0, "()V", 1 },
	{ "<init>", (intptr_t) init_java_util_concurrent_locks_ReentrantLock_boolean, 0, "(Z)V", 1 },
	{ "lock", (intptr_t) M_java_util_concurrent_locks_ReentrantLock_lock, VTABLE_java_util_concurrent_locks_ReentrantLock_lock, "()V", 1 },
	{ "lockInterruptibly", (intptr_t) M_java_util_concurrent_locks_ReentrantLock_lockInterruptibly, VTABLE_java_util_concurrent_locks_ReentrantLock_lockInterruptibly, "()V", 1 },
	{ "tryLock", (intptr_t) M_java_util_concurrent_locks_ReentrantLock_tryLock_R_boolean, VTABLE_java_util_concurrent_locks_ReentrantLock_tryLock_R_boolean, "()Z", 1 },
	{ "tryLock", (intptr_t) M_java_util_concurrent_locks_ReentrantLock_tryLock_long_java_util_concurrent_TimeUnit_R_boolean, VTABLE_java_util_concurrent_locks_ReentrantLock_tryLock_long_java_util_concurrent_TimeUnit_R_boolean, "(JLjava/util/concurrent/TimeUnit;)Z", 1 },
	{ "unlock", (intptr_t) M_java_util_concurrent_locks_ReentrantLock_unlock, VTABLE_java_util_concurrent_locks_ReentrantLock_unlock, "()V", 1 },
	{ "newCondition", (intptr_t) M_java_util_concurrent_locks_ReentrantLock_newCondition_R_java_util_concurrent_locks_Condition, VTABLE_java_util_concurrent_locks_ReentrantLock_newCondition_R_java_util_concurrent_locks_Condition, "()Ljava/util/concurrent/locks/Condition;", 1 },
	{ "getHoldCount", (intptr_t) M_java_util_concurrent_locks_ReentrantLock_getHoldCount_R_int, VTABLE_java_util_concurrent_locks_ReentrantLock_getHoldCount_R_int, "()I", 1 },
	{ "isHeldByCurrentThread", (intptr_t) M_java_util_concurrent_locks_ReentrantLock_isHeldByCurrentThread_R_boolean, VTABLE_java_util_concurrent_locks_ReentrantLock_isHeldByCurrentThread_R_boolean, "()Z", 1 },
	{ "isLocked", (intptr_t) M_java_util_concurrent_locks_ReentrantLock_isLocked_R_boolean, VTABLE_java_util_concurrent_locks_ReentrantLock_isLocked_R_boolean, "()Z", 1 },
	{ "isFair", (intptr_t) M_java_util_concurrent_locks_ReentrantLock_isFair_R_boolean, VTABLE_java_util_concurrent_locks_ReentrantLock_isFair_R_boolean, "()Z", 17 },
	{ "getOwner", (intptr_t) M_java_util_concurrent_locks_ReentrantLock_getOwner_R_java_lang_Thread, VTABLE_java_util_concurrent_locks_ReentrantLock_getOwner_R_java_lang_Thread, "()Ljava/lang/Thread;", 4 },
	{ "hasQueuedThreads", (intptr_t) M_java_util_concurrent_locks_ReentrantLock_hasQueuedThreads_R_boolean, VTABLE_java_util_concurrent_locks_ReentrantLock_hasQueuedThreads_R_boolean, "()Z", 17 },
	{ "hasQueuedThread", (intptr_t) M_java_util_concurrent_locks_ReentrantLock_hasQueuedThread_java_lang_Thread_R_boolean, VTABLE_java_util_concurrent_locks_ReentrantLock_hasQueuedThread_java_lang_Thread_R_boolean, "(Ljava/lang/Thread;)Z", 17 },
	{ "getQueueLength", (intptr_t) M_java_util_concurrent_locks_ReentrantLock_getQueueLength_R_int, VTABLE_java_util_concurrent_locks_ReentrantLock_getQueueLength_R_int, "()I", 17 },
	{ "getQueuedThreads", (intptr_t) M_java_util_concurrent_locks_ReentrantLock_getQueuedThreads_R_java_util_Collection, VTABLE_java_util_concurrent_locks_ReentrantLock_getQueuedThreads_R_java_util_Collection, "()Ljava/util/Collection;", 4 },
	{ "hasWaiters", (intptr_t) M_java_util_concurrent_locks_ReentrantLock_hasWaiters_java_util_concurrent_locks_Condition_R_boolean, VTABLE_java_util_concurrent_locks_ReentrantLock_hasWaiters_java_util_concurrent_locks_Condition_R_boolean, "(Ljava/util/concurrent/locks/Condition;)Z", 1 },
	{ "getWaitQueueLength", (intptr_t) M_java_util_concurrent_locks_ReentrantLock_getWaitQueueLength_java_util_concurrent_locks_Condition_R_int, VTABLE_java_util_concurrent_locks_ReentrantLock_getWaitQueueLength_java_util_concurrent_locks_Condition_R_int, "(Ljava/util/concurrent/locks/Condition;)I", 1 },
	{ "getWaitingThreads", (intptr_t) M_java_util_concurrent_locks_ReentrantLock_getWaitingThreads_java_util_concurrent_locks_Condition_R_java_util_Collection, VTABLE_java_util_concurrent_locks_ReentrantLock_getWaitingThreads_java_util_concurrent_locks_Condition_R_java_util_Collection, "(Ljava/util/concurrent/locks/Condition;)Ljava/util/Collection;", 4 },
	{ "toString", (intptr_t) M_java_util_concurrent_locks_ReentrantLock_toString_R_java_lang_String, VTABLE_java_util_concurrent_locks_ReentrantLock_toString_R_java_lang_String, "()Ljava/lang/String;", 1 },
};

Class class_java_util_concurrent_locks_ReentrantLock{
		.nativeName = (intptr_t) "java/util/concurrent/locks/ReentrantLock",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(java_util_concurrent_locks_ReentrantLock),
		.classVtable = (intptr_t) vtable_java_util_concurrent_locks_ReentrantLock,
		.staticInitializer = (intptr_t) clinit_java_util_concurrent_locks_ReentrantLock,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_java_util_concurrent_locks_ReentrantLock,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 3,
		.nativeInnerClasses = (intptr_t) innerClasses,
		.access = 33,
		.interfaceCount = 2,
		.nativeInterfaces = (intptr_t) interfaces,
		.fieldCount = 2,
		.nativeFields = (intptr_t) fields,
		.methodCount = 21,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 29,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_java_util_concurrent_locks_ReentrantLock = registerClass(&class_java_util_concurrent_locks_ReentrantLock);

}
