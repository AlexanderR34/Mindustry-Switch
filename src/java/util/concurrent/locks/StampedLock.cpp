#include "java/util/concurrent/locks/StampedLock.h"
#include "java/lang/IllegalMonitorStateException.h"
#include "java/lang/StringBuilder.h"
#include "java/lang/Runtime.h"
#include "java/util/concurrent/locks/ReadWriteLock.h"
#include "java/lang/InterruptedException.h"
#include "java/util/concurrent/TimeUnit.h"
#include "java/util/concurrent/locks/StampedLock_WNode.h"
#include "java/util/concurrent/locks/StampedLock_WriteLockView.h"
#include "java/util/concurrent/locks/Lock.h"
#include "java/util/concurrent/locks/StampedLock.h"
#include "java/util/concurrent/locks/LockSupport.h"
#include "java/lang/Object.h"
#include "java/io/Serializable.h"
#include "java/lang/String.h"
#include "java/util/concurrent/locks/StampedLock_ReadWriteLockView.h"
#include "java/util/concurrent/locks/StampedLock_ReadLockView.h"
#include "java/lang/Throwable.h"
#include "java/io/ObjectInputStream.h"
#include "java/lang/System.h"
#include "java/lang/Thread.h"

extern "C" {

jlong SF_java_util_concurrent_locks_StampedLock_serialVersionUID;
jint SF_java_util_concurrent_locks_StampedLock_NCPU;
jint SF_java_util_concurrent_locks_StampedLock_SPINS;
jint SF_java_util_concurrent_locks_StampedLock_HEAD_SPINS;
jint SF_java_util_concurrent_locks_StampedLock_MAX_HEAD_SPINS;
jint SF_java_util_concurrent_locks_StampedLock_OVERFLOW_YIELD_RATE;
jint SF_java_util_concurrent_locks_StampedLock_LG_READERS;
jlong SF_java_util_concurrent_locks_StampedLock_RUNIT;
jlong SF_java_util_concurrent_locks_StampedLock_WBIT;
jlong SF_java_util_concurrent_locks_StampedLock_RBITS;
jlong SF_java_util_concurrent_locks_StampedLock_RFULL;
jlong SF_java_util_concurrent_locks_StampedLock_ABITS;
jlong SF_java_util_concurrent_locks_StampedLock_SBITS;
jlong SF_java_util_concurrent_locks_StampedLock_ORIGIN;
jlong SF_java_util_concurrent_locks_StampedLock_INTERRUPTED;
jint SF_java_util_concurrent_locks_StampedLock_WAITING;
jint SF_java_util_concurrent_locks_StampedLock_CANCELLED;
jint SF_java_util_concurrent_locks_StampedLock_RMODE;
jint SF_java_util_concurrent_locks_StampedLock_WMODE;

void mark_java_util_concurrent_locks_StampedLock(jobject object, jint mark, jint depth) {
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
	auto self = (java_util_concurrent_locks_StampedLock *) object;
	if (self->F_whead)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_whead)->clazz)->markFunction)((jobject) self->F_whead, mark, depth + 1);
	if (self->F_wtail)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_wtail)->clazz)->markFunction)((jobject) self->F_wtail, mark, depth + 1);
	if (self->F_readLockView)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_readLockView)->clazz)->markFunction)((jobject) self->F_readLockView, mark, depth + 1);
	if (self->F_writeLockView)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_writeLockView)->clazz)->markFunction)((jobject) self->F_writeLockView, mark, depth + 1);
	if (self->F_readWriteLockView)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_readWriteLockView)->clazz)->markFunction)((jobject) self->F_readWriteLockView, mark, depth + 1);
}

void init_java_util_concurrent_locks_StampedLock(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/concurrent/locks/StampedLock:<init>", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_util_concurrent_locks_StampedLock(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(396);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(397);
	((java_util_concurrent_locks_StampedLock *) NULL_CHECK((frame[0].o)))->F_state = (jlong(256ll));
	LINE_NUMBER(398);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jbool M_java_util_concurrent_locks_StampedLock_casState_long_long_R_boolean(jcontext ctx, jobject self, jlong param0, jlong param1) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/concurrent/locks/StampedLock:casState", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, self);

	frame[0].o = self;
	frame[1].l = param0;
	frame[3].l = param1;
	{
	LINE_NUMBER(401);
	if ((longCompare(((jlong)((java_util_concurrent_locks_StampedLock *) NULL_CHECK((frame[0].o)))->F_state), (frame[1].l))) == 0) goto label_1;
	}
	{
	LINE_NUMBER(402);
	popStackFrame(ctx, self);
	return (jint(0));
	}
label_1:;
	{
	LINE_NUMBER(403);
	((java_util_concurrent_locks_StampedLock *) NULL_CHECK((frame[0].o)))->F_state = (frame[3].l);
	LINE_NUMBER(404);
	popStackFrame(ctx, self);
	return (jint(1));
	}

	popStackFrame(ctx);
}

jlong M_java_util_concurrent_locks_StampedLock_tryWriteLock_long_R_long(jcontext ctx, jobject self, jlong param0) {
	NULL_CHECK(self);
	jtype frame[12];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/concurrent/locks/StampedLock:tryWriteLock", 12 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, self);

	frame[0].o = self;
	frame[1].l = param0;
	{
	LINE_NUMBER(411);
	sp[0].o = frame[0].o;
	jlong temp0 = frame[1].l;
	jlong temp1 = (frame[1].l) | (jlong(128ll));
	frame[3].l = temp1;
	jint temp4 = (jint)M_java_util_concurrent_locks_StampedLock_casState_long_long_R_boolean(ctx, sp[0].o, temp0, temp1);
	if (temp4 == 0) goto label_2;
	}
	{
	LINE_NUMBER(413);
	popStackFrame(ctx, self);
	return (frame[3].l);
	}
label_2:;
	{
	LINE_NUMBER(415);
	popStackFrame(ctx, self);
	return (jlong(0));
	}

	popStackFrame(ctx);
}

jlong M_java_util_concurrent_locks_StampedLock_writeLock_R_long(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/concurrent/locks/StampedLock:writeLock", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(426);
	jlong temp0 = (jlong)((func_java_util_concurrent_locks_StampedLock_tryWriteLock_R_long) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_util_concurrent_locks_StampedLock_tryWriteLock_R_long])(ctx, (frame[0].o));
	frame[1].l = temp0;
	if ((longCompare(temp0, (jlong(0)))) == 0) goto label_2;
	}
	INST_LLOAD(1);
	goto label_3;
label_2:;
	{
	jlong temp0 = (jlong)M_java_util_concurrent_locks_StampedLock_acquireWrite_boolean_long_R_long(ctx, (frame[0].o), (jint(0)), (jlong(0)));
	sp[0].l = temp0;
	sp += 1;
	}
label_3:;
	popStackFrame(ctx);
	INST_LRETURN();

	popStackFrame(ctx);
}

jlong M_java_util_concurrent_locks_StampedLock_tryWriteLock_R_long(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/concurrent/locks/StampedLock:tryWriteLock", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(437);
	jlong temp0 = (jlong)((java_util_concurrent_locks_StampedLock *) NULL_CHECK((frame[0].o)))->F_state;
	frame[1].l = temp0;
	if ((longCompare((temp0 & (jlong(255ll))), (jlong(0)))) != 0) goto label_2;
	}
	{
	jlong temp0 = (jlong)M_java_util_concurrent_locks_StampedLock_tryWriteLock_long_R_long(ctx, (frame[0].o), (frame[1].l));
	sp[0].l = temp0;
	sp += 1;
	goto label_3;
	}
label_2:;
	INST_LCONST(0);
label_3:;
	popStackFrame(ctx);
	INST_LRETURN();

	popStackFrame(ctx);
}

jlong M_java_util_concurrent_locks_StampedLock_tryWriteLock_long_java_util_concurrent_TimeUnit_R_long(jcontext ctx, jobject self, jlong param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[14];
	auto stack = &frame[10];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/concurrent/locks/StampedLock:tryWriteLock", 14 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].l = param0;
	frame[3].o = param1;
	{
	LINE_NUMBER(455);
	jlong temp0 = (jlong)((func_java_util_concurrent_TimeUnit_toNanos_long_R_long) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_java_util_concurrent_TimeUnit_toNanos_long_R_long])(ctx, (frame[3].o), (frame[1].l));
	frame[4].l = temp0;
	LINE_NUMBER(456);
	jint temp1 = (jint)SM_java_lang_Thread_interrupted_R_boolean(ctx);
	if (temp1 != 0) goto label_2;
	}
	{
	LINE_NUMBER(458);
	jlong temp0 = (jlong)((func_java_util_concurrent_locks_StampedLock_tryWriteLock_R_long) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_util_concurrent_locks_StampedLock_tryWriteLock_R_long])(ctx, (frame[0].o));
	frame[6].l = temp0;
	if ((longCompare(temp0, (jlong(0)))) == 0) goto label_5;
	}
	{
	LINE_NUMBER(459);
	popStackFrame(ctx);
	return (frame[6].l);
	}
label_5:;
	{
	LINE_NUMBER(460);
	if ((longCompare((frame[4].l), (jlong(0)))) > 0) goto label_7;
	}
	{
	LINE_NUMBER(461);
	popStackFrame(ctx);
	return (jlong(0));
	}
label_7:;
	{
	LINE_NUMBER(462);
	jlong temp0 = (jlong)SM_java_lang_System_nanoTime_R_long(ctx);
	jlong temp1 = temp0 + (frame[4].l);
	frame[8].l = temp1;
	if ((longCompare(temp1, (jlong(0)))) != 0) goto label_10;
	}
	{
	LINE_NUMBER(463);
	frame[8].l = (jlong(1));
	}
label_10:;
	{
	LINE_NUMBER(464);
	jlong temp0 = (jlong)M_java_util_concurrent_locks_StampedLock_acquireWrite_boolean_long_R_long(ctx, (frame[0].o), (jint(1)), (frame[8].l));
	frame[6].l = temp0;
	if ((longCompare(temp0, (jlong(1)))) == 0) goto label_2;
	}
	{
	LINE_NUMBER(465);
	popStackFrame(ctx);
	return (frame[6].l);
	}
label_2:;
	{
	LINE_NUMBER(467);
	clinit_java_lang_InterruptedException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_InterruptedException);
	init_java_lang_InterruptedException(ctx, sp[0].o);
	throwException(ctx, sp[0].o);	}

	popStackFrame(ctx);
}

jlong M_java_util_concurrent_locks_StampedLock_writeLockInterruptibly_R_long(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/concurrent/locks/StampedLock:writeLockInterruptibly", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(482);
	jint temp0 = (jint)SM_java_lang_Thread_interrupted_R_boolean(ctx);
	if (temp0 != 0) goto label_1;
	}
	{
	sp[0].o = frame[0].o;
	jint temp0 = jint(1);
	jlong temp1 = jlong(0);
	LINE_NUMBER(483);
	jlong temp2 = (jlong)M_java_util_concurrent_locks_StampedLock_acquireWrite_boolean_long_R_long(ctx, sp[0].o, temp0, temp1);
	frame[1].l = temp2;
	if ((longCompare(temp2, (jlong(1)))) == 0) goto label_1;
	}
	{
	LINE_NUMBER(484);
	popStackFrame(ctx);
	return (frame[1].l);
	}
label_1:;
	{
	LINE_NUMBER(485);
	clinit_java_lang_InterruptedException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_InterruptedException);
	init_java_lang_InterruptedException(ctx, sp[0].o);
	throwException(ctx, sp[0].o);	}

	popStackFrame(ctx);
}

jlong M_java_util_concurrent_locks_StampedLock_readLock_R_long(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[12];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/concurrent/locks/StampedLock:readLock", 12 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(497);
	sp[0].o = (jobject)((java_util_concurrent_locks_StampedLock *) NULL_CHECK((frame[0].o)))->F_whead;
	sp[1].o = (jobject)((java_util_concurrent_locks_StampedLock *) NULL_CHECK((frame[0].o)))->F_wtail;
	if (sp[0].o != sp[1].o) goto label_1;
	}
	{
	jlong temp0 = (jlong)((java_util_concurrent_locks_StampedLock *) NULL_CHECK((frame[0].o)))->F_state;
	frame[1].l = temp0;
	if ((longCompare((temp0 & (jlong(255ll))), (jlong(126ll)))) >= 0) goto label_1;
	}
	{
	sp[0].o = frame[0].o;
	jlong temp0 = frame[1].l;
	jlong temp1 = (frame[1].l) + (jlong(1));
	frame[3].l = temp1;
	LINE_NUMBER(499);
	jint temp4 = (jint)M_java_util_concurrent_locks_StampedLock_casState_long_long_R_boolean(ctx, sp[0].o, temp0, temp1);
	if (temp4 == 0) goto label_1;
	}
	{
	LINE_NUMBER(500);
	jlong temp0 = frame[3].l;
	sp[0].l = temp0;
	sp += 1;
	goto label_5;
	}
label_1:;
	{
	LINE_NUMBER(501);
	jlong temp0 = (jlong)M_java_util_concurrent_locks_StampedLock_acquireRead_boolean_long_R_long(ctx, (frame[0].o), (jint(0)), (jlong(0)));
	sp[0].l = temp0;
	sp += 1;
	}
label_5:;
	LINE_NUMBER(497);
	popStackFrame(ctx);
	INST_LRETURN();

	popStackFrame(ctx);
}

jlong M_java_util_concurrent_locks_StampedLock_tryReadLock_R_long(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[14];
	auto stack = &frame[7];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/concurrent/locks/StampedLock:tryReadLock", 14 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
label_0:;
	{
	LINE_NUMBER(512);
	jlong temp0 = (jlong)((java_util_concurrent_locks_StampedLock *) NULL_CHECK((frame[0].o)))->F_state;
	frame[1].l = temp0;
	jlong temp3 = temp0 & (jlong(255ll));
	frame[3].l = temp3;
	if ((longCompare(temp3, (jlong(128ll)))) == 0) goto label_3;
	}
	{
	LINE_NUMBER(513);
	if ((longCompare((frame[3].l), (jlong(126ll)))) >= 0) goto label_5;
	}
	{
	LINE_NUMBER(514);
	sp[0].o = frame[0].o;
	jlong temp0 = frame[1].l;
	jlong temp1 = (frame[1].l) + (jlong(1));
	frame[5].l = temp1;
	jint temp4 = (jint)M_java_util_concurrent_locks_StampedLock_casState_long_long_R_boolean(ctx, sp[0].o, temp0, temp1);
	if (temp4 == 0) goto label_0;
	}
	{
	LINE_NUMBER(515);
	popStackFrame(ctx);
	return (frame[5].l);
	}
label_5:;
	{
	LINE_NUMBER(517);
	jlong temp0 = (jlong)M_java_util_concurrent_locks_StampedLock_tryIncReaderOverflow_long_R_long(ctx, (frame[0].o), (frame[1].l));
	frame[5].l = temp0;
	if ((longCompare(temp0, (jlong(0)))) == 0) goto label_0;
	}
	{
	LINE_NUMBER(518);
	popStackFrame(ctx);
	return (frame[5].l);
	}
label_3:;
	{
	LINE_NUMBER(520);
	popStackFrame(ctx);
	return (jlong(0));
	}

	popStackFrame(ctx);
}

jlong M_java_util_concurrent_locks_StampedLock_tryReadLock_long_java_util_concurrent_TimeUnit_R_long(jcontext ctx, jobject self, jlong param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[21];
	auto stack = &frame[14];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/concurrent/locks/StampedLock:tryReadLock", 21 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].l = param0;
	frame[3].o = param1;
	{
	LINE_NUMBER(539);
	jlong temp0 = (jlong)((func_java_util_concurrent_TimeUnit_toNanos_long_R_long) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_java_util_concurrent_TimeUnit_toNanos_long_R_long])(ctx, (frame[3].o), (frame[1].l));
	frame[12].l = temp0;
	LINE_NUMBER(540);
	jint temp1 = (jint)SM_java_lang_Thread_interrupted_R_boolean(ctx);
	if (temp1 != 0) goto label_2;
	}
	{
	LINE_NUMBER(541);
	jlong temp0 = (jlong)((java_util_concurrent_locks_StampedLock *) NULL_CHECK((frame[0].o)))->F_state;
	frame[4].l = temp0;
	jlong temp3 = temp0 & (jlong(255ll));
	frame[6].l = temp3;
	if ((longCompare(temp3, (jlong(128ll)))) == 0) goto label_6;
	}
	{
	LINE_NUMBER(542);
	if ((longCompare((frame[6].l), (jlong(126ll)))) >= 0) goto label_8;
	}
	{
	LINE_NUMBER(543);
	sp[0].o = frame[0].o;
	jlong temp0 = frame[4].l;
	jlong temp1 = (frame[4].l) + (jlong(1));
	frame[8].l = temp1;
	jint temp4 = (jint)M_java_util_concurrent_locks_StampedLock_casState_long_long_R_boolean(ctx, sp[0].o, temp0, temp1);
	if (temp4 == 0) goto label_6;
	}
	{
	LINE_NUMBER(544);
	popStackFrame(ctx);
	return (frame[8].l);
	}
label_8:;
	{
	LINE_NUMBER(546);
	jlong temp0 = (jlong)M_java_util_concurrent_locks_StampedLock_tryIncReaderOverflow_long_R_long(ctx, (frame[0].o), (frame[4].l));
	frame[8].l = temp0;
	if ((longCompare(temp0, (jlong(0)))) == 0) goto label_6;
	}
	{
	LINE_NUMBER(547);
	popStackFrame(ctx);
	return (frame[8].l);
	}
label_6:;
	{
	LINE_NUMBER(549);
	if ((longCompare((frame[12].l), (jlong(0)))) > 0) goto label_14;
	}
	{
	LINE_NUMBER(550);
	popStackFrame(ctx);
	return (jlong(0));
	}
label_14:;
	{
	LINE_NUMBER(551);
	jlong temp0 = (jlong)SM_java_lang_System_nanoTime_R_long(ctx);
	jlong temp1 = temp0 + (frame[12].l);
	frame[10].l = temp1;
	if ((longCompare(temp1, (jlong(0)))) != 0) goto label_17;
	}
	{
	LINE_NUMBER(552);
	frame[10].l = (jlong(1));
	}
label_17:;
	{
	LINE_NUMBER(553);
	jlong temp0 = (jlong)M_java_util_concurrent_locks_StampedLock_acquireRead_boolean_long_R_long(ctx, (frame[0].o), (jint(1)), (frame[10].l));
	frame[8].l = temp0;
	if ((longCompare(temp0, (jlong(1)))) == 0) goto label_2;
	}
	{
	LINE_NUMBER(554);
	popStackFrame(ctx);
	return (frame[8].l);
	}
label_2:;
	{
	LINE_NUMBER(556);
	clinit_java_lang_InterruptedException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_InterruptedException);
	init_java_lang_InterruptedException(ctx, sp[0].o);
	throwException(ctx, sp[0].o);	}

	popStackFrame(ctx);
}

jlong M_java_util_concurrent_locks_StampedLock_readLockInterruptibly_R_long(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[12];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/concurrent/locks/StampedLock:readLockInterruptibly", 12 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(571);
	jint temp0 = (jint)SM_java_lang_Thread_interrupted_R_boolean(ctx);
	if (temp0 != 0) goto label_1;
	}
	{
	sp[0].o = (jobject)((java_util_concurrent_locks_StampedLock *) NULL_CHECK((frame[0].o)))->F_whead;
	sp[1].o = (jobject)((java_util_concurrent_locks_StampedLock *) NULL_CHECK((frame[0].o)))->F_wtail;
	if (sp[0].o != sp[1].o) goto label_2;
	}
	{
	jlong temp0 = (jlong)((java_util_concurrent_locks_StampedLock *) NULL_CHECK((frame[0].o)))->F_state;
	frame[1].l = temp0;
	if ((longCompare((temp0 & (jlong(255ll))), (jlong(126ll)))) >= 0) goto label_2;
	}
	{
	sp[0].o = frame[0].o;
	jlong temp0 = frame[1].l;
	jlong temp1 = (frame[1].l) + (jlong(1));
	frame[3].l = temp1;
	LINE_NUMBER(575);
	jint temp4 = (jint)M_java_util_concurrent_locks_StampedLock_casState_long_long_R_boolean(ctx, sp[0].o, temp0, temp1);
	if (temp4 != 0) goto label_5;
	}
label_2:;
	{
	sp[0].o = frame[0].o;
	jint temp0 = jint(1);
	jlong temp1 = jlong(0);
	LINE_NUMBER(577);
	jlong temp2 = (jlong)M_java_util_concurrent_locks_StampedLock_acquireRead_boolean_long_R_long(ctx, sp[0].o, temp0, temp1);
	frame[3].l = temp2;
	if ((longCompare(temp2, (jlong(1)))) == 0) goto label_1;
	}
label_5:;
	{
	LINE_NUMBER(578);
	popStackFrame(ctx);
	return (frame[3].l);
	}
label_1:;
	{
	LINE_NUMBER(579);
	clinit_java_lang_InterruptedException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_InterruptedException);
	init_java_lang_InterruptedException(ctx, sp[0].o);
	throwException(ctx, sp[0].o);	}

	popStackFrame(ctx);
}

jlong M_java_util_concurrent_locks_StampedLock_tryOptimisticRead_R_long(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/concurrent/locks/StampedLock:tryOptimisticRead", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(590);
	jlong temp0 = (jlong)((java_util_concurrent_locks_StampedLock *) NULL_CHECK((frame[0].o)))->F_state;
	frame[1].l = temp0;
	if ((longCompare((temp0 & (jlong(128ll))), (jlong(0)))) != 0) goto label_2;
	}
	{
	jlong temp0 = (frame[1].l) & (jlong(-128ll));
	sp[0].l = temp0;
	sp += 1;
	goto label_3;
	}
label_2:;
	INST_LCONST(0);
label_3:;
	popStackFrame(ctx);
	INST_LRETURN();

	popStackFrame(ctx);
}

jbool M_java_util_concurrent_locks_StampedLock_validate_long_R_boolean(jcontext ctx, jobject self, jlong param0) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/concurrent/locks/StampedLock:validate", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, self);

	frame[0].o = self;
	frame[1].l = param0;
	{
	LINE_NUMBER(606);
	if ((longCompare(((frame[1].l) & (jlong(-128ll))), (((jlong)((java_util_concurrent_locks_StampedLock *) NULL_CHECK((frame[0].o)))->F_state) & (jlong(-128ll))))) != 0) goto label_1;
	}
	INST_ICONST(1);
	goto label_2;
label_1:;
	INST_ICONST(0);
label_2:;
	popStackFrame(ctx, self);
	INST_IRETURN();

	popStackFrame(ctx);
}

jlong SM_java_util_concurrent_locks_StampedLock_unlockWriteState_long_R_long(jcontext ctx, jlong param0) {
	jtype frame[6];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/concurrent/locks/StampedLock:unlockWriteState", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_util_concurrent_locks_StampedLock(ctx);
	frame[0].l = param0;
	{
	LINE_NUMBER(616);
	jlong temp0 = (frame[0].l) + (jlong(128ll));
	frame[0].l = temp0;
	if ((longCompare(temp0, (jlong(0)))) != 0) goto label_1;
	}
	(sp++)->l = jlong(256ll);
	goto label_2;
label_1:;
	INST_LLOAD(0);
label_2:;
	popStackFrame(ctx);
	INST_LRETURN();

	popStackFrame(ctx);
}

jlong M_java_util_concurrent_locks_StampedLock_unlockWriteInternal_long_R_long(jcontext ctx, jobject self, jlong param0) {
	NULL_CHECK(self);
	jtype frame[11];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/concurrent/locks/StampedLock:unlockWriteInternal", 11 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, self);

	frame[0].o = self;
	frame[1].l = param0;
	{
	LINE_NUMBER(621);
	sp[0].o = frame[0].o;
	jlong temp0 = (jlong)SM_java_util_concurrent_locks_StampedLock_unlockWriteState_long_R_long(ctx, (frame[1].l));
	frame[3].l = temp0;
	((java_util_concurrent_locks_StampedLock *) NULL_CHECK(sp[0].o))->F_state = temp0;
	LINE_NUMBER(623);
	sp[0].o = (jobject)((java_util_concurrent_locks_StampedLock *) NULL_CHECK((frame[0].o)))->F_whead;
	frame[5].o = sp[0].o;
	if (sp[0].o == nullptr) goto label_4;
	}
	{
	if (((jint)((java_util_concurrent_locks_StampedLock$WNode *) NULL_CHECK((frame[5].o)))->F_status) == 0) goto label_4;
	}
	{
	LINE_NUMBER(624);
	M_java_util_concurrent_locks_StampedLock_release_java_util_concurrent_locks_StampedLock$WNode(ctx, (frame[0].o), (frame[5].o));
	}
label_4:;
	{
	LINE_NUMBER(625);
	popStackFrame(ctx, self);
	return (frame[3].l);
	}

	popStackFrame(ctx);
}

void M_java_util_concurrent_locks_StampedLock_unlockWrite_long(jcontext ctx, jobject self, jlong param0) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/concurrent/locks/StampedLock:unlockWrite", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].l = param0;
	{
	LINE_NUMBER(637);
	if ((longCompare(((jlong)((java_util_concurrent_locks_StampedLock *) NULL_CHECK((frame[0].o)))->F_state), (frame[1].l))) != 0) goto label_1;
	}
	{
	if ((longCompare(((frame[1].l) & (jlong(128ll))), (jlong(0)))) != 0) goto label_2;
	}
label_1:;
	{
	LINE_NUMBER(638);
	clinit_java_lang_IllegalMonitorStateException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IllegalMonitorStateException);
	init_java_lang_IllegalMonitorStateException(ctx, sp[0].o);
	throwException(ctx, sp[0].o);	}
label_2:;
	{
	LINE_NUMBER(639);
	jlong temp0 = (jlong)M_java_util_concurrent_locks_StampedLock_unlockWriteInternal_long_R_long(ctx, (frame[0].o), (frame[1].l));
	LINE_NUMBER(640);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_java_util_concurrent_locks_StampedLock_unlockRead_long(jcontext ctx, jobject self, jlong param0) {
	NULL_CHECK(self);
	jtype frame[15];
	auto stack = &frame[8];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/concurrent/locks/StampedLock:unlockRead", 15 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].l = param0;
label_0:;
	{
	LINE_NUMBER(652);
	jlong temp0 = (jlong)((java_util_concurrent_locks_StampedLock *) NULL_CHECK((frame[0].o)))->F_state;
	frame[3].l = temp0;
	if ((longCompare((temp0 & (jlong(-128ll))), ((frame[1].l) & (jlong(-128ll))))) != 0) goto label_2;
	}
	{
	if ((longCompare(((frame[1].l) & (jlong(127ll))), (jlong(0)))) <= 0) goto label_2;
	}
	{
	jlong temp0 = (frame[3].l) & (jlong(127ll));
	frame[5].l = temp0;
	if ((longCompare(temp0, (jlong(0)))) <= 0) goto label_2;
	}
	{
	LINE_NUMBER(655);
	if ((longCompare((frame[5].l), (jlong(126ll)))) >= 0) goto label_5;
	}
	{
	LINE_NUMBER(656);
	jint temp0 = (jint)M_java_util_concurrent_locks_StampedLock_casState_long_long_R_boolean(ctx, (frame[0].o), (frame[3].l), ((frame[3].l) - (jlong(1))));
	if (temp0 == 0) goto label_0;
	}
	{
	LINE_NUMBER(657);
	if ((longCompare((frame[5].l), (jlong(1)))) != 0) goto label_8;
	}
	{
	sp[0].o = (jobject)((java_util_concurrent_locks_StampedLock *) NULL_CHECK((frame[0].o)))->F_whead;
	frame[7].o = sp[0].o;
	if (sp[0].o == nullptr) goto label_8;
	}
	{
	if (((jint)((java_util_concurrent_locks_StampedLock$WNode *) NULL_CHECK((frame[7].o)))->F_status) == 0) goto label_8;
	}
	{
	LINE_NUMBER(658);
	M_java_util_concurrent_locks_StampedLock_release_java_util_concurrent_locks_StampedLock$WNode(ctx, (frame[0].o), (frame[7].o));
	}
label_8:;
	LINE_NUMBER(659);
	popStackFrame(ctx);
	INST_RETURN();
label_5:;
	{
	LINE_NUMBER(662);
	jlong temp0 = (jlong)M_java_util_concurrent_locks_StampedLock_tryDecReaderOverflow_long_R_long(ctx, (frame[0].o), (frame[3].l));
	if ((longCompare(temp0, (jlong(0)))) == 0) goto label_0;
	}
	LINE_NUMBER(663);
	popStackFrame(ctx);
	INST_RETURN();
label_2:;
	{
	LINE_NUMBER(665);
	clinit_java_lang_IllegalMonitorStateException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IllegalMonitorStateException);
	init_java_lang_IllegalMonitorStateException(ctx, sp[0].o);
	throwException(ctx, sp[0].o);	}

	popStackFrame(ctx);
}

void M_java_util_concurrent_locks_StampedLock_unlock_long(jcontext ctx, jobject self, jlong param0) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/concurrent/locks/StampedLock:unlock", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].l = param0;
	{
	LINE_NUMBER(677);
	if ((longCompare(((frame[1].l) & (jlong(128ll))), (jlong(0)))) == 0) goto label_1;
	}
	{
	LINE_NUMBER(678);
	((func_java_util_concurrent_locks_StampedLock_unlockWrite_long) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_util_concurrent_locks_StampedLock_unlockWrite_long])(ctx, (frame[0].o), (frame[1].l));
	goto label_3;
	}
label_1:;
	{
	LINE_NUMBER(680);
	((func_java_util_concurrent_locks_StampedLock_unlockRead_long) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_util_concurrent_locks_StampedLock_unlockRead_long])(ctx, (frame[0].o), (frame[1].l));
	}
label_3:;
	LINE_NUMBER(681);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jlong M_java_util_concurrent_locks_StampedLock_tryConvertToWriteLock_long_R_long(jcontext ctx, jobject self, jlong param0) {
	NULL_CHECK(self);
	jtype frame[20];
	auto stack = &frame[13];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/concurrent/locks/StampedLock:tryConvertToWriteLock", 20 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].l = param0;
	{
	LINE_NUMBER(696);
	frame[3].l = ((frame[1].l) & (jlong(255ll)));
	}
label_7:;
	{
	LINE_NUMBER(697);
	jlong temp0 = (jlong)((java_util_concurrent_locks_StampedLock *) NULL_CHECK((frame[0].o)))->F_state;
	frame[7].l = temp0;
	if ((longCompare((temp0 & (jlong(-128ll))), ((frame[1].l) & (jlong(-128ll))))) != 0) goto label_9;
	}
	{
	LINE_NUMBER(698);
	jlong temp0 = (frame[7].l) & (jlong(255ll));
	frame[5].l = temp0;
	if ((longCompare(temp0, (jlong(0)))) != 0) goto label_12;
	}
	{
	LINE_NUMBER(699);
	if ((longCompare((frame[3].l), (jlong(0)))) == 0) goto label_14;
	}
	LINE_NUMBER(700);
	goto label_9;
label_14:;
	{
	LINE_NUMBER(701);
	jlong temp0 = (jlong)M_java_util_concurrent_locks_StampedLock_tryWriteLock_long_R_long(ctx, (frame[0].o), (frame[7].l));
	frame[9].l = temp0;
	if ((longCompare(temp0, (jlong(0)))) == 0) goto label_7;
	}
	{
	LINE_NUMBER(702);
	popStackFrame(ctx);
	return (frame[9].l);
	}
label_12:;
	{
	LINE_NUMBER(704);
	if ((longCompare((frame[5].l), (jlong(128ll)))) != 0) goto label_18;
	}
	{
	LINE_NUMBER(705);
	if ((longCompare((frame[3].l), (frame[5].l))) == 0) goto label_20;
	}
	LINE_NUMBER(706);
	goto label_9;
label_20:;
	{
	LINE_NUMBER(707);
	popStackFrame(ctx);
	return (frame[1].l);
	}
label_18:;
	{
	LINE_NUMBER(709);
	if ((longCompare((frame[5].l), (jlong(1)))) != 0) goto label_9;
	}
	{
	if ((longCompare((frame[3].l), (jlong(0)))) == 0) goto label_9;
	}
	{
	LINE_NUMBER(710);
	sp[0].o = frame[0].o;
	jlong temp0 = frame[7].l;
	jlong temp1 = ((frame[7].l) - (jlong(1))) + (jlong(128ll));
	frame[9].l = temp1;
	jint temp4 = (jint)M_java_util_concurrent_locks_StampedLock_casState_long_long_R_boolean(ctx, sp[0].o, temp0, temp1);
	if (temp4 == 0) goto label_7;
	}
	{
	LINE_NUMBER(712);
	sp[0].o = frame[0].o;
	frame[11].o = sp[0].o;
	monitorEnter(ctx, sp[0].o);
	}
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(713);
	jlong temp0 = frame[9].l;
	monitorExit(ctx, (frame[11].o));
	sp[0].l = temp0;
	sp += 1;
	}
	popExceptionFrame(frameRef);
	popStackFrame(ctx);
	INST_LRETURN();
label_2:;
label_5: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	sp -= 1;
	LINE_NUMBER(714);
	frame[12].o = sp[0].o;
	monitorExit(ctx, (frame[11].o));
	}
	popExceptionFrame(frameRef);
	INST_ALOAD(12);
	INST_ATHROW();
	label_9:;
	{
	LINE_NUMBER(720);
	popStackFrame(ctx);
	return (jlong(0));
	}

	popStackFrame(ctx);
}

jlong M_java_util_concurrent_locks_StampedLock_tryConvertToReadLock_long_R_long(jcontext ctx, jobject self, jlong param0) {
	NULL_CHECK(self);
	jtype frame[19];
	auto stack = &frame[12];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/concurrent/locks/StampedLock:tryConvertToReadLock", 19 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].l = param0;
label_6:;
	{
	LINE_NUMBER(736);
	jlong temp0 = (jlong)((java_util_concurrent_locks_StampedLock *) NULL_CHECK((frame[0].o)))->F_state;
	frame[5].l = temp0;
	if ((longCompare((temp0 & (jlong(-128ll))), ((frame[1].l) & (jlong(-128ll))))) != 0) goto label_8;
	}
	{
	LINE_NUMBER(737);
	jlong temp0 = (frame[1].l) & (jlong(255ll));
	frame[3].l = temp0;
	if ((longCompare(temp0, (jlong(128ll)))) < 0) goto label_11;
	}
	{
	LINE_NUMBER(739);
	if ((longCompare((frame[5].l), (frame[1].l))) == 0) goto label_13;
	}
	LINE_NUMBER(740);
	goto label_8;
label_13:;
	{
	LINE_NUMBER(741);
	sp[0].o = frame[0].o;
	frame[10].o = sp[0].o;
	monitorEnter(ctx, sp[0].o);
	}
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(742);
	sp[0].o = frame[0].o;
	jlong temp0 = (jlong)SM_java_util_concurrent_locks_StampedLock_unlockWriteState_long_R_long(ctx, (frame[5].l));
	jlong temp1 = temp0 + (jlong(1));
	frame[7].l = temp1;
	((java_util_concurrent_locks_StampedLock *) NULL_CHECK(sp[0].o))->F_state = temp1;
	LINE_NUMBER(744);
	monitorExit(ctx, (frame[10].o));
	}
	popExceptionFrame(frameRef);
	goto label_17;
label_2:;
label_5: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	sp -= 1;
	frame[11].o = sp[0].o;
	monitorExit(ctx, (frame[10].o));
	}
	popExceptionFrame(frameRef);
	INST_ALOAD(11);
	INST_ATHROW();
	label_17:;
	{
	LINE_NUMBER(745);
	sp[0].o = (jobject)((java_util_concurrent_locks_StampedLock *) NULL_CHECK((frame[0].o)))->F_whead;
	frame[9].o = sp[0].o;
	if (sp[0].o == nullptr) goto label_19;
	}
	{
	if (((jint)((java_util_concurrent_locks_StampedLock$WNode *) NULL_CHECK((frame[9].o)))->F_status) == 0) goto label_19;
	}
	{
	LINE_NUMBER(746);
	M_java_util_concurrent_locks_StampedLock_release_java_util_concurrent_locks_StampedLock$WNode(ctx, (frame[0].o), (frame[9].o));
	}
label_19:;
	{
	LINE_NUMBER(747);
	popStackFrame(ctx);
	return (frame[7].l);
	}
label_11:;
	{
	LINE_NUMBER(749);
	if ((longCompare((frame[3].l), (jlong(0)))) != 0) goto label_21;
	}
	{
	LINE_NUMBER(751);
	if ((longCompare(((frame[5].l) & (jlong(255ll))), (jlong(126ll)))) >= 0) goto label_23;
	}
	{
	LINE_NUMBER(752);
	sp[0].o = frame[0].o;
	jlong temp0 = frame[5].l;
	jlong temp1 = (frame[5].l) + (jlong(1));
	frame[7].l = temp1;
	jint temp4 = (jint)M_java_util_concurrent_locks_StampedLock_casState_long_long_R_boolean(ctx, sp[0].o, temp0, temp1);
	if (temp4 == 0) goto label_6;
	}
	{
	LINE_NUMBER(753);
	popStackFrame(ctx);
	return (frame[7].l);
	}
label_23:;
	{
	LINE_NUMBER(755);
	jlong temp0 = (jlong)M_java_util_concurrent_locks_StampedLock_tryIncReaderOverflow_long_R_long(ctx, (frame[0].o), (frame[5].l));
	frame[7].l = temp0;
	if ((longCompare(temp0, (jlong(0)))) == 0) goto label_6;
	}
	{
	LINE_NUMBER(756);
	popStackFrame(ctx);
	return (frame[7].l);
	}
label_21:;
	{
	LINE_NUMBER(760);
	if ((longCompare(((frame[5].l) & (jlong(255ll))), (jlong(0)))) != 0) goto label_29;
	}
	LINE_NUMBER(761);
	goto label_8;
label_29:;
	{
	LINE_NUMBER(762);
	popStackFrame(ctx);
	return (frame[1].l);
	}
label_8:;
	{
	LINE_NUMBER(765);
	popStackFrame(ctx);
	return (jlong(0));
	}

	popStackFrame(ctx);
}

jlong M_java_util_concurrent_locks_StampedLock_tryConvertToOptimisticRead_long_R_long(jcontext ctx, jobject self, jlong param0) {
	NULL_CHECK(self);
	jtype frame[19];
	auto stack = &frame[12];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/concurrent/locks/StampedLock:tryConvertToOptimisticRead", 19 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, self);

	frame[0].o = self;
	frame[1].l = param0;
label_0:;
	{
	LINE_NUMBER(781);
	jlong temp0 = (jlong)((java_util_concurrent_locks_StampedLock *) NULL_CHECK((frame[0].o)))->F_state;
	frame[7].l = temp0;
	if ((longCompare((temp0 & (jlong(-128ll))), ((frame[1].l) & (jlong(-128ll))))) != 0) goto label_2;
	}
	{
	LINE_NUMBER(782);
	jlong temp0 = (frame[1].l) & (jlong(255ll));
	frame[3].l = temp0;
	if ((longCompare(temp0, (jlong(128ll)))) < 0) goto label_5;
	}
	{
	LINE_NUMBER(784);
	if ((longCompare((frame[7].l), (frame[1].l))) == 0) goto label_7;
	}
	LINE_NUMBER(785);
	goto label_2;
label_7:;
	{
	LINE_NUMBER(786);
	jlong temp0 = (jlong)M_java_util_concurrent_locks_StampedLock_unlockWriteInternal_long_R_long(ctx, (frame[0].o), (frame[7].l));
	popStackFrame(ctx, self);
	return temp0;
	}
label_5:;
	{
	LINE_NUMBER(788);
	if ((longCompare((frame[3].l), (jlong(0)))) != 0) goto label_9;
	}
	{
	LINE_NUMBER(790);
	popStackFrame(ctx, self);
	return (frame[1].l);
	}
label_9:;
	{
	LINE_NUMBER(791);
	jlong temp0 = (frame[7].l) & (jlong(255ll));
	frame[5].l = temp0;
	if ((longCompare(temp0, (jlong(0)))) != 0) goto label_12;
	}
	LINE_NUMBER(792);
	goto label_2;
label_12:;
	{
	LINE_NUMBER(793);
	if ((longCompare((frame[5].l), (jlong(126ll)))) >= 0) goto label_14;
	}
	{
	LINE_NUMBER(794);
	sp[0].o = frame[0].o;
	jlong temp0 = frame[7].l;
	jlong temp1 = (frame[7].l) - (jlong(1));
	frame[9].l = temp1;
	jint temp4 = (jint)M_java_util_concurrent_locks_StampedLock_casState_long_long_R_boolean(ctx, sp[0].o, temp0, temp1);
	if (temp4 == 0) goto label_0;
	}
	{
	LINE_NUMBER(795);
	if ((longCompare((frame[5].l), (jlong(1)))) != 0) goto label_18;
	}
	{
	sp[0].o = (jobject)((java_util_concurrent_locks_StampedLock *) NULL_CHECK((frame[0].o)))->F_whead;
	frame[11].o = sp[0].o;
	if (sp[0].o == nullptr) goto label_18;
	}
	{
	if (((jint)((java_util_concurrent_locks_StampedLock$WNode *) NULL_CHECK((frame[11].o)))->F_status) == 0) goto label_18;
	}
	{
	LINE_NUMBER(796);
	M_java_util_concurrent_locks_StampedLock_release_java_util_concurrent_locks_StampedLock$WNode(ctx, (frame[0].o), (frame[11].o));
	}
label_18:;
	{
	LINE_NUMBER(797);
	popStackFrame(ctx, self);
	return ((frame[9].l) & (jlong(-128ll)));
	}
label_14:;
	{
	LINE_NUMBER(800);
	jlong temp0 = (jlong)M_java_util_concurrent_locks_StampedLock_tryDecReaderOverflow_long_R_long(ctx, (frame[0].o), (frame[7].l));
	frame[9].l = temp0;
	if ((longCompare(temp0, (jlong(0)))) == 0) goto label_0;
	}
	{
	LINE_NUMBER(801);
	popStackFrame(ctx, self);
	return ((frame[9].l) & (jlong(-128ll)));
	}
label_2:;
	{
	LINE_NUMBER(803);
	popStackFrame(ctx, self);
	return (jlong(0));
	}

	popStackFrame(ctx);
}

jbool M_java_util_concurrent_locks_StampedLock_tryUnlockWrite_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/concurrent/locks/StampedLock:tryUnlockWrite", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(815);
	jlong temp0 = (jlong)((java_util_concurrent_locks_StampedLock *) NULL_CHECK((frame[0].o)))->F_state;
	frame[1].l = temp0;
	if ((longCompare((temp0 & (jlong(128ll))), (jlong(0)))) == 0) goto label_2;
	}
	{
	LINE_NUMBER(816);
	jlong temp0 = (jlong)M_java_util_concurrent_locks_StampedLock_unlockWriteInternal_long_R_long(ctx, (frame[0].o), (frame[1].l));
	LINE_NUMBER(817);
	popStackFrame(ctx);
	return (jint(1));
	}
label_2:;
	{
	LINE_NUMBER(819);
	popStackFrame(ctx);
	return (jint(0));
	}

	popStackFrame(ctx);
}

jbool M_java_util_concurrent_locks_StampedLock_tryUnlockRead_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[13];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/concurrent/locks/StampedLock:tryUnlockRead", 13 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
label_0:;
	{
	LINE_NUMBER(831);
	jlong temp0 = (jlong)((java_util_concurrent_locks_StampedLock *) NULL_CHECK((frame[0].o)))->F_state;
	frame[1].l = temp0;
	jlong temp3 = temp0 & (jlong(255ll));
	frame[3].l = temp3;
	if ((longCompare(temp3, (jlong(0)))) == 0) goto label_3;
	}
	{
	if ((longCompare((frame[3].l), (jlong(128ll)))) >= 0) goto label_3;
	}
	{
	LINE_NUMBER(832);
	if ((longCompare((frame[3].l), (jlong(126ll)))) >= 0) goto label_5;
	}
	{
	LINE_NUMBER(833);
	jint temp0 = (jint)M_java_util_concurrent_locks_StampedLock_casState_long_long_R_boolean(ctx, (frame[0].o), (frame[1].l), ((frame[1].l) - (jlong(1))));
	if (temp0 == 0) goto label_0;
	}
	{
	LINE_NUMBER(834);
	if ((longCompare((frame[3].l), (jlong(1)))) != 0) goto label_8;
	}
	{
	sp[0].o = (jobject)((java_util_concurrent_locks_StampedLock *) NULL_CHECK((frame[0].o)))->F_whead;
	frame[5].o = sp[0].o;
	if (sp[0].o == nullptr) goto label_8;
	}
	{
	if (((jint)((java_util_concurrent_locks_StampedLock$WNode *) NULL_CHECK((frame[5].o)))->F_status) == 0) goto label_8;
	}
	{
	LINE_NUMBER(835);
	M_java_util_concurrent_locks_StampedLock_release_java_util_concurrent_locks_StampedLock$WNode(ctx, (frame[0].o), (frame[5].o));
	}
label_8:;
	{
	LINE_NUMBER(836);
	popStackFrame(ctx);
	return (jint(1));
	}
label_5:;
	{
	LINE_NUMBER(839);
	jlong temp0 = (jlong)M_java_util_concurrent_locks_StampedLock_tryDecReaderOverflow_long_R_long(ctx, (frame[0].o), (frame[1].l));
	if ((longCompare(temp0, (jlong(0)))) == 0) goto label_0;
	}
	{
	LINE_NUMBER(840);
	popStackFrame(ctx);
	return (jint(1));
	}
label_3:;
	{
	LINE_NUMBER(842);
	popStackFrame(ctx);
	return (jint(0));
	}

	popStackFrame(ctx);
}

jint M_java_util_concurrent_locks_StampedLock_getReadLockCount_long_R_int(jcontext ctx, jobject self, jlong param0) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/concurrent/locks/StampedLock:getReadLockCount", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].l = param0;
	{
	LINE_NUMBER(853);
	jlong temp0 = (frame[1].l) & (jlong(127ll));
	frame[3].l = temp0;
	if ((longCompare(temp0, (jlong(126ll)))) < 0) goto label_2;
	}
	{
	LINE_NUMBER(854);
	frame[3].l = ((jlong(126ll)) + (jlong(((jint)((java_util_concurrent_locks_StampedLock *) NULL_CHECK((frame[0].o)))->F_readerOverflow))));
	}
label_2:;
	{
	LINE_NUMBER(855);
	popStackFrame(ctx);
	return (jint((frame[3].l)));
	}

	popStackFrame(ctx);
}

jbool M_java_util_concurrent_locks_StampedLock_isWriteLocked_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/concurrent/locks/StampedLock:isWriteLocked", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(864);
	if ((longCompare((((jlong)((java_util_concurrent_locks_StampedLock *) NULL_CHECK((frame[0].o)))->F_state) & (jlong(128ll))), (jlong(0)))) == 0) goto label_1;
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

jbool M_java_util_concurrent_locks_StampedLock_isReadLocked_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/concurrent/locks/StampedLock:isReadLocked", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(873);
	if ((longCompare((((jlong)((java_util_concurrent_locks_StampedLock *) NULL_CHECK((frame[0].o)))->F_state) & (jlong(127ll))), (jlong(0)))) == 0) goto label_1;
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

jint M_java_util_concurrent_locks_StampedLock_getReadLockCount_R_int(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/concurrent/locks/StampedLock:getReadLockCount", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(883);
	jint temp0 = (jint)M_java_util_concurrent_locks_StampedLock_getReadLockCount_long_R_int(ctx, (frame[0].o), ((jlong)((java_util_concurrent_locks_StampedLock *) NULL_CHECK((frame[0].o)))->F_state));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jobject M_java_util_concurrent_locks_StampedLock_toString_R_java_lang_String(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/concurrent/locks/StampedLock:toString", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(896);
	frame[1].l = ((jlong)((java_util_concurrent_locks_StampedLock *) NULL_CHECK((frame[0].o)))->F_state);
	LINE_NUMBER(897);
	clinit_java_lang_StringBuilder(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[0].o);
	sp[1].o = (jobject)M_java_lang_Object_toString_R_java_lang_String(ctx, (frame[0].o));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(898);
	sp += 1;
	if ((longCompare(((frame[1].l) & (jlong(255ll))), (jlong(0)))) != 0) goto label_3;
	}
	(sp++)->o = ((jobject) createStringLiteral(ctx, u8"[Unlocked]"_j));
	goto label_4;
label_3:;
	{
	LINE_NUMBER(899);
	if ((longCompare(((frame[1].l) & (jlong(128ll))), (jlong(0)))) == 0) goto label_5;
	}
	(sp++)->o = ((jobject) createStringLiteral(ctx, u8"[Write-locked]"_j));
	goto label_4;
label_5:;
	{
	LINE_NUMBER(900);
	clinit_java_lang_StringBuilder(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[0].o);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"[Read-locks:"_j))));
	jint temp0 = (jint)M_java_util_concurrent_locks_StampedLock_getReadLockCount_long_R_int(ctx, (frame[0].o), (frame[1].l));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder])(ctx, sp[0].o, temp0);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"]"_j))));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[0].o);
	sp += 1;
	}
label_4:;
	{
	sp -= 2;
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, sp[1].o);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[0].o);
	LINE_NUMBER(897);
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_java_util_concurrent_locks_StampedLock_asReadLock_R_java_util_concurrent_locks_Lock(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/concurrent/locks/StampedLock:asReadLock", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(916);
	sp[0].o = (jobject)((java_util_concurrent_locks_StampedLock *) NULL_CHECK((frame[0].o)))->F_readLockView;
	frame[1].o = sp[0].o;
	if (sp[0].o == nullptr) goto label_2;
	}
	INST_ALOAD(1);
	popStackFrame(ctx);
	INST_ARETURN();
label_2:;
	{
	LINE_NUMBER(917);
	sp[0].o = frame[0].o;
	clinit_java_util_concurrent_locks_StampedLock$ReadLockView(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_util_concurrent_locks_StampedLock$ReadLockView);
	init_java_util_concurrent_locks_StampedLock$ReadLockView_java_util_concurrent_locks_StampedLock(ctx, sp[1].o, (frame[0].o));
	((java_util_concurrent_locks_StampedLock *) NULL_CHECK(sp[0].o))->F_readLockView = (jref) sp[1].o;
	popStackFrame(ctx);
	return sp[1].o;
	}

	popStackFrame(ctx);
}

jobject M_java_util_concurrent_locks_StampedLock_asWriteLock_R_java_util_concurrent_locks_Lock(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/concurrent/locks/StampedLock:asWriteLock", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(931);
	sp[0].o = (jobject)((java_util_concurrent_locks_StampedLock *) NULL_CHECK((frame[0].o)))->F_writeLockView;
	frame[1].o = sp[0].o;
	if (sp[0].o == nullptr) goto label_2;
	}
	INST_ALOAD(1);
	popStackFrame(ctx);
	INST_ARETURN();
label_2:;
	{
	LINE_NUMBER(932);
	sp[0].o = frame[0].o;
	clinit_java_util_concurrent_locks_StampedLock$WriteLockView(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_util_concurrent_locks_StampedLock$WriteLockView);
	init_java_util_concurrent_locks_StampedLock$WriteLockView_java_util_concurrent_locks_StampedLock(ctx, sp[1].o, (frame[0].o));
	((java_util_concurrent_locks_StampedLock *) NULL_CHECK(sp[0].o))->F_writeLockView = (jref) sp[1].o;
	popStackFrame(ctx);
	return sp[1].o;
	}

	popStackFrame(ctx);
}

jobject M_java_util_concurrent_locks_StampedLock_asReadWriteLock_R_java_util_concurrent_locks_ReadWriteLock(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/concurrent/locks/StampedLock:asReadWriteLock", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(945);
	sp[0].o = (jobject)((java_util_concurrent_locks_StampedLock *) NULL_CHECK((frame[0].o)))->F_readWriteLockView;
	frame[1].o = sp[0].o;
	if (sp[0].o == nullptr) goto label_2;
	}
	INST_ALOAD(1);
	popStackFrame(ctx);
	INST_ARETURN();
label_2:;
	{
	LINE_NUMBER(946);
	sp[0].o = frame[0].o;
	clinit_java_util_concurrent_locks_StampedLock$ReadWriteLockView(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_util_concurrent_locks_StampedLock$ReadWriteLockView);
	init_java_util_concurrent_locks_StampedLock$ReadWriteLockView_java_util_concurrent_locks_StampedLock(ctx, sp[1].o, (frame[0].o));
	((java_util_concurrent_locks_StampedLock *) NULL_CHECK(sp[0].o))->F_readWriteLockView = (jref) sp[1].o;
	popStackFrame(ctx);
	return sp[1].o;
	}

	popStackFrame(ctx);
}

void M_java_util_concurrent_locks_StampedLock_unstampedUnlockWrite(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/concurrent/locks/StampedLock:unstampedUnlockWrite", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(993);
	jlong temp0 = (jlong)((java_util_concurrent_locks_StampedLock *) NULL_CHECK((frame[0].o)))->F_state;
	frame[1].l = temp0;
	if ((longCompare((temp0 & (jlong(128ll))), (jlong(0)))) != 0) goto label_2;
	}
	{
	LINE_NUMBER(994);
	clinit_java_lang_IllegalMonitorStateException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IllegalMonitorStateException);
	init_java_lang_IllegalMonitorStateException(ctx, sp[0].o);
	throwException(ctx, sp[0].o);	}
label_2:;
	{
	LINE_NUMBER(995);
	jlong temp0 = (jlong)M_java_util_concurrent_locks_StampedLock_unlockWriteInternal_long_R_long(ctx, (frame[0].o), (frame[1].l));
	LINE_NUMBER(996);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_java_util_concurrent_locks_StampedLock_unstampedUnlockRead(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[13];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/concurrent/locks/StampedLock:unstampedUnlockRead", 13 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
label_0:;
	{
	LINE_NUMBER(1000);
	jlong temp0 = (jlong)((java_util_concurrent_locks_StampedLock *) NULL_CHECK((frame[0].o)))->F_state;
	frame[1].l = temp0;
	jlong temp3 = temp0 & (jlong(127ll));
	frame[3].l = temp3;
	if ((longCompare(temp3, (jlong(0)))) <= 0) goto label_3;
	}
	{
	LINE_NUMBER(1001);
	if ((longCompare((frame[3].l), (jlong(126ll)))) >= 0) goto label_5;
	}
	{
	LINE_NUMBER(1002);
	jint temp0 = (jint)M_java_util_concurrent_locks_StampedLock_casState_long_long_R_boolean(ctx, (frame[0].o), (frame[1].l), ((frame[1].l) - (jlong(1))));
	if (temp0 == 0) goto label_0;
	}
	{
	LINE_NUMBER(1003);
	if ((longCompare((frame[3].l), (jlong(1)))) != 0) goto label_8;
	}
	{
	sp[0].o = (jobject)((java_util_concurrent_locks_StampedLock *) NULL_CHECK((frame[0].o)))->F_whead;
	frame[5].o = sp[0].o;
	if (sp[0].o == nullptr) goto label_8;
	}
	{
	if (((jint)((java_util_concurrent_locks_StampedLock$WNode *) NULL_CHECK((frame[5].o)))->F_status) == 0) goto label_8;
	}
	{
	LINE_NUMBER(1004);
	M_java_util_concurrent_locks_StampedLock_release_java_util_concurrent_locks_StampedLock$WNode(ctx, (frame[0].o), (frame[5].o));
	}
label_8:;
	LINE_NUMBER(1005);
	popStackFrame(ctx);
	INST_RETURN();
label_5:;
	{
	LINE_NUMBER(1008);
	jlong temp0 = (jlong)M_java_util_concurrent_locks_StampedLock_tryDecReaderOverflow_long_R_long(ctx, (frame[0].o), (frame[1].l));
	if ((longCompare(temp0, (jlong(0)))) == 0) goto label_0;
	}
	LINE_NUMBER(1009);
	popStackFrame(ctx);
	INST_RETURN();
label_3:;
	{
	LINE_NUMBER(1011);
	clinit_java_lang_IllegalMonitorStateException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IllegalMonitorStateException);
	init_java_lang_IllegalMonitorStateException(ctx, sp[0].o);
	throwException(ctx, sp[0].o);	}

	popStackFrame(ctx);
}

void M_java_util_concurrent_locks_StampedLock_readObject_java_io_ObjectInputStream(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/concurrent/locks/StampedLock:readObject", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, self);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(1016);
	((func_java_io_ObjectInputStream_defaultReadObject) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_io_ObjectInputStream_defaultReadObject])(ctx, (frame[1].o));
	LINE_NUMBER(1017);
	((java_util_concurrent_locks_StampedLock *) NULL_CHECK((frame[0].o)))->F_state = (jlong(256ll));
	LINE_NUMBER(1019);
	popStackFrame(ctx, self);
	return;
	}

	popStackFrame(ctx);
}

jlong M_java_util_concurrent_locks_StampedLock_tryIncReaderOverflow_long_R_long(jcontext ctx, jobject self, jlong param0) {
	NULL_CHECK(self);
	jtype frame[10];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/concurrent/locks/StampedLock:tryIncReaderOverflow", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, self);

	frame[0].o = self;
	frame[1].l = param0;
	{
	LINE_NUMBER(1033);
	if ((longCompare(((frame[1].l) & (jlong(255ll))), (jlong(126ll)))) != 0) goto label_1;
	}
	{
	LINE_NUMBER(1034);
	jint temp0 = (jint)M_java_util_concurrent_locks_StampedLock_casState_long_long_R_boolean(ctx, (frame[0].o), (frame[1].l), ((frame[1].l) | (jlong(127ll))));
	if (temp0 == 0) goto label_3;
	}
	{
	LINE_NUMBER(1035);
	sp[0].o = frame[0].o;
	((java_util_concurrent_locks_StampedLock *) NULL_CHECK(sp[0].o))->F_readerOverflow = (((jint)((java_util_concurrent_locks_StampedLock *) NULL_CHECK(sp[0].o))->F_readerOverflow) + (jint(1)));
	LINE_NUMBER(1036);
	((java_util_concurrent_locks_StampedLock *) NULL_CHECK((frame[0].o)))->F_state = (frame[1].l);
	LINE_NUMBER(1038);
	popStackFrame(ctx, self);
	return (frame[1].l);
	}
label_1:;
	LINE_NUMBER(1042);
	SM_java_lang_Thread_yield(ctx);
label_3:;
	{
	LINE_NUMBER(1045);
	popStackFrame(ctx, self);
	return (jlong(0));
	}

	popStackFrame(ctx);
}

jlong M_java_util_concurrent_locks_StampedLock_tryDecReaderOverflow_long_R_long(jcontext ctx, jobject self, jlong param0) {
	NULL_CHECK(self);
	jtype frame[13];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/concurrent/locks/StampedLock:tryDecReaderOverflow", 13 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, self);

	frame[0].o = self;
	frame[1].l = param0;
	{
	LINE_NUMBER(1056);
	if ((longCompare(((frame[1].l) & (jlong(255ll))), (jlong(126ll)))) != 0) goto label_1;
	}
	{
	LINE_NUMBER(1057);
	jint temp0 = (jint)M_java_util_concurrent_locks_StampedLock_casState_long_long_R_boolean(ctx, (frame[0].o), (frame[1].l), ((frame[1].l) | (jlong(127ll))));
	if (temp0 == 0) goto label_3;
	}
	{
	LINE_NUMBER(1059);
	jint temp0 = (jint)((java_util_concurrent_locks_StampedLock *) NULL_CHECK((frame[0].o)))->F_readerOverflow;
	frame[3].i = temp0;
	if (temp0 <= 0) goto label_6;
	}
	{
	LINE_NUMBER(1060);
	((java_util_concurrent_locks_StampedLock *) NULL_CHECK((frame[0].o)))->F_readerOverflow = ((frame[3].i) - (jint(1)));
	LINE_NUMBER(1061);
	frame[4].l = (frame[1].l);
	goto label_10;
	}
label_6:;
	{
	LINE_NUMBER(1064);
	frame[4].l = ((frame[1].l) - (jlong(1)));
	}
label_10:;
	{
	LINE_NUMBER(1065);
	((java_util_concurrent_locks_StampedLock *) NULL_CHECK((frame[0].o)))->F_state = (frame[4].l);
	LINE_NUMBER(1067);
	popStackFrame(ctx, self);
	return (frame[4].l);
	}
label_1:;
	LINE_NUMBER(1071);
	SM_java_lang_Thread_yield(ctx);
label_3:;
	{
	LINE_NUMBER(1074);
	popStackFrame(ctx, self);
	return (jlong(0));
	}

	popStackFrame(ctx);
}

void M_java_util_concurrent_locks_StampedLock_release_java_util_concurrent_locks_StampedLock$WNode(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/concurrent/locks/StampedLock:release", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, self);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(1085);
	if ((frame[1].o) == nullptr) goto label_1;
	}
	{
	LINE_NUMBER(1087);
	if (((jint)((java_util_concurrent_locks_StampedLock$WNode *) NULL_CHECK((frame[1].o)))->F_status) != (jint(-1))) goto label_3;
	}
	{
	LINE_NUMBER(1088);
	((java_util_concurrent_locks_StampedLock$WNode *) NULL_CHECK((frame[1].o)))->F_status = (jint(0));
	}
label_3:;
	{
	LINE_NUMBER(1091);
	sp[0].o = (jobject)((java_util_concurrent_locks_StampedLock$WNode *) NULL_CHECK((frame[1].o)))->F_next;
	frame[2].o = sp[0].o;
	if (sp[0].o == nullptr) goto label_6;
	}
	{
	if (((jint)((java_util_concurrent_locks_StampedLock$WNode *) NULL_CHECK((frame[2].o)))->F_status) != (jint(1))) goto label_7;
	}
label_6:;
	{
	LINE_NUMBER(1092);
	sp[0].o = (jobject)((java_util_concurrent_locks_StampedLock *) NULL_CHECK((frame[0].o)))->F_wtail;
	frame[4].o = sp[0].o;
	}
label_8:;
	INST_ALOAD(4);
	if ((--sp)->o == nullptr) goto label_7;
	{
	if ((frame[4].o) == (frame[1].o)) goto label_7;
	}
	{
	LINE_NUMBER(1093);
	if (((jint)((java_util_concurrent_locks_StampedLock$WNode *) NULL_CHECK((frame[4].o)))->F_status) > 0) goto label_10;
	}
	{
	LINE_NUMBER(1094);
	frame[2].o = (frame[4].o);
	}
label_10:;
	{
	LINE_NUMBER(1092);
	sp[0].o = (jobject)((java_util_concurrent_locks_StampedLock$WNode *) NULL_CHECK((frame[4].o)))->F_prev;
	frame[4].o = sp[0].o;
	goto label_8;
	}
label_7:;
	{
	LINE_NUMBER(1096);
	if ((frame[2].o) == nullptr) goto label_1;
	}
	{
	sp[0].o = (jobject)((java_util_concurrent_locks_StampedLock$WNode *) NULL_CHECK((frame[2].o)))->F_thread;
	frame[3].o = sp[0].o;
	if (sp[0].o == nullptr) goto label_1;
	}
	{
	LINE_NUMBER(1097);
	SM_java_util_concurrent_locks_LockSupport_unpark_java_lang_Thread(ctx, (frame[3].o));
	}
label_1:;
	LINE_NUMBER(1099);
	popStackFrame(ctx, self);
	INST_RETURN();

	popStackFrame(ctx);
}

jlong M_java_util_concurrent_locks_StampedLock_acquireWrite_boolean_long_R_long(jcontext ctx, jobject self, jbool param0, jlong param1) {
	NULL_CHECK(self);
	jtype frame[23];
	auto stack = &frame[19];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/concurrent/locks/StampedLock:acquireWrite", 23 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].l = param1;
	{
	LINE_NUMBER(1111);
	frame[4].o = (jobject(nullptr));
	LINE_NUMBER(1112);
	frame[6].i = (jint(-1));
	}
label_29:;
	{
	LINE_NUMBER(1114);
	jlong temp0 = (jlong)((java_util_concurrent_locks_StampedLock *) NULL_CHECK((frame[0].o)))->F_state;
	frame[9].l = temp0;
	jlong temp3 = temp0 & (jlong(255ll));
	frame[7].l = temp3;
	if ((longCompare(temp3, (jlong(0)))) != 0) goto label_32;
	}
	{
	LINE_NUMBER(1115);
	jlong temp0 = (jlong)M_java_util_concurrent_locks_StampedLock_tryWriteLock_long_R_long(ctx, (frame[0].o), (frame[9].l));
	frame[11].l = temp0;
	if ((longCompare(temp0, (jlong(0)))) == 0) goto label_35;
	}
	{
	LINE_NUMBER(1116);
	popStackFrame(ctx);
	return (frame[11].l);
	}
label_32:;
	{
	LINE_NUMBER(1118);
	if ((frame[6].i) >= 0) goto label_37;
	}
	{
	LINE_NUMBER(1119);
	if ((longCompare((frame[7].l), (jlong(128ll)))) != 0) goto label_39;
	}
	{
	sp[0].o = (jobject)((java_util_concurrent_locks_StampedLock *) NULL_CHECK((frame[0].o)))->F_wtail;
	sp[1].o = (jobject)((java_util_concurrent_locks_StampedLock *) NULL_CHECK((frame[0].o)))->F_whead;
	if (sp[0].o != sp[1].o) goto label_39;
	}
	clinit_java_util_concurrent_locks_StampedLock(ctx);
	(sp++)->i = SF_java_util_concurrent_locks_StampedLock_SPINS;
	goto label_40;
label_39:;
	INST_ICONST(0);
label_40:;
	INST_ISTORE(6);
	goto label_35;
label_37:;
	{
	LINE_NUMBER(1120);
	if ((frame[6].i) <= 0) goto label_41;
	}
	{
	LINE_NUMBER(1121);
	INST_IINC(6, -1);
	goto label_35;
	}
label_41:;
	{
	LINE_NUMBER(1124);
	sp[0].o = (jobject)((java_util_concurrent_locks_StampedLock *) NULL_CHECK((frame[0].o)))->F_wtail;
	frame[5].o = sp[0].o;
	if (sp[0].o != nullptr) goto label_44;
	}
	{
	LINE_NUMBER(1125);
	clinit_java_util_concurrent_locks_StampedLock$WNode(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_util_concurrent_locks_StampedLock$WNode);
	init_java_util_concurrent_locks_StampedLock$WNode_int_java_util_concurrent_locks_StampedLock$WNode(ctx, sp[0].o, (jint(1)), (jobject(nullptr)));
	frame[13].o = sp[0].o;
	LINE_NUMBER(1126);
	sp[0].o = frame[0].o;
	frame[14].o = sp[0].o;
	monitorEnter(ctx, sp[0].o);
	}
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(1127);
	sp[0].o = (jobject)((java_util_concurrent_locks_StampedLock *) NULL_CHECK((frame[0].o)))->F_whead;
	if (sp[0].o != nullptr) goto label_47;
	}
	{
	LINE_NUMBER(1129);
	((java_util_concurrent_locks_StampedLock *) NULL_CHECK((frame[0].o)))->F_whead = (jref) (frame[13].o);
	LINE_NUMBER(1130);
	((java_util_concurrent_locks_StampedLock *) NULL_CHECK((frame[0].o)))->F_wtail = (jref) (frame[13].o);
	}
label_47:;
	{
	LINE_NUMBER(1132);
	monitorExit(ctx, (frame[14].o));
	}
	popExceptionFrame(frameRef);
	goto label_50;
label_2:;
label_5: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	sp -= 1;
	frame[15].o = sp[0].o;
	monitorExit(ctx, (frame[14].o));
	}
	popExceptionFrame(frameRef);
	INST_ALOAD(15);
	INST_ATHROW();
	label_50:;
	LINE_NUMBER(1133);
	goto label_35;
label_44:;
	{
	LINE_NUMBER(1134);
	if ((frame[4].o) != nullptr) goto label_51;
	}
	{
	LINE_NUMBER(1135);
	clinit_java_util_concurrent_locks_StampedLock$WNode(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_util_concurrent_locks_StampedLock$WNode);
	init_java_util_concurrent_locks_StampedLock$WNode_int_java_util_concurrent_locks_StampedLock$WNode(ctx, sp[0].o, (jint(1)), (frame[5].o));
	frame[4].o = sp[0].o;
	goto label_35;
	}
label_51:;
	{
	LINE_NUMBER(1136);
	sp[0].o = (jobject)((java_util_concurrent_locks_StampedLock$WNode *) NULL_CHECK((frame[4].o)))->F_prev;
	if (sp[0].o == (frame[5].o)) goto label_53;
	}
	{
	LINE_NUMBER(1137);
	((java_util_concurrent_locks_StampedLock$WNode *) NULL_CHECK((frame[4].o)))->F_prev = (jref) (frame[5].o);
	goto label_35;
	}
label_53:;
	{
	LINE_NUMBER(1138);
	sp[0].o = frame[0].o;
	frame[13].o = sp[0].o;
	monitorEnter(ctx, sp[0].o);
	}
label_9: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_8; }
	}
	{
	LINE_NUMBER(1140);
	sp[0].o = (jobject)((java_util_concurrent_locks_StampedLock *) NULL_CHECK((frame[0].o)))->F_wtail;
	if (sp[0].o != (frame[5].o)) { popExceptionFrames(frameRef, 1); goto label_10; }
	}
	{
	LINE_NUMBER(1141);
	((java_util_concurrent_locks_StampedLock *) NULL_CHECK((frame[0].o)))->F_wtail = (jref) (frame[4].o);
	LINE_NUMBER(1142);
	((java_util_concurrent_locks_StampedLock$WNode *) NULL_CHECK((frame[5].o)))->F_next = (jref) (frame[4].o);
	LINE_NUMBER(1143);
	monitorExit(ctx, (frame[13].o));
	}
	popExceptionFrame(frameRef);
	goto label_58;
label_10:;
label_12: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_8; }
	}
	{
	LINE_NUMBER(1145);
	monitorExit(ctx, (frame[13].o));
	}
	popExceptionFrame(frameRef);
	goto label_35;
label_8:;
label_14: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_8; }
	}
	{
	sp -= 1;
	frame[16].o = sp[0].o;
	monitorExit(ctx, (frame[13].o));
	}
	popExceptionFrame(frameRef);
	INST_ALOAD(16);
	INST_ATHROW();
	label_35:;
	LINE_NUMBER(1146);
	goto label_29;
label_58:;
	{
	LINE_NUMBER(1148);
	frame[6].i = (jint(0));
	LINE_NUMBER(1149);
	frame[7].i = (jint(-1));
	}
label_60:;
	{
	LINE_NUMBER(1151);
	sp[0].o = (jobject)((java_util_concurrent_locks_StampedLock *) NULL_CHECK((frame[0].o)))->F_whead;
	frame[8].o = sp[0].o;
	if (sp[0].o != (frame[5].o)) goto label_62;
	}
	{
	LINE_NUMBER(1152);
	if ((frame[7].i) >= 0) goto label_64;
	}
	{
	LINE_NUMBER(1153);
	frame[7].i = (clinit_java_util_concurrent_locks_StampedLock(ctx), (jint)SF_java_util_concurrent_locks_StampedLock_HEAD_SPINS);
	goto label_66;
	}
label_64:;
	{
	LINE_NUMBER(1154);
	if ((frame[7].i) >= (clinit_java_util_concurrent_locks_StampedLock(ctx), (jint)SF_java_util_concurrent_locks_StampedLock_MAX_HEAD_SPINS)) goto label_66;
	}
	{
	LINE_NUMBER(1155);
	frame[7].i = ((frame[7].i) << (jint(1)));
	}
label_66:;
	{
	LINE_NUMBER(1156);
	frame[12].i = (frame[7].i);
	}
label_68:;
	INST_ILOAD(12);
	if ((--sp)->i <= 0) goto label_69;
	{
	LINE_NUMBER(1158);
	jlong temp0 = (jlong)((java_util_concurrent_locks_StampedLock *) NULL_CHECK((frame[0].o)))->F_state;
	frame[13].l = temp0;
	if ((longCompare((temp0 & (jlong(255ll))), (jlong(0)))) != 0) goto label_72;
	}
	{
	LINE_NUMBER(1159);
	jlong temp0 = (jlong)M_java_util_concurrent_locks_StampedLock_tryWriteLock_long_R_long(ctx, (frame[0].o), (frame[13].l));
	frame[15].l = temp0;
	if ((longCompare(temp0, (jlong(0)))) == 0) goto label_72;
	}
	{
	LINE_NUMBER(1160);
	((java_util_concurrent_locks_StampedLock *) NULL_CHECK((frame[0].o)))->F_whead = (jref) (frame[4].o);
	LINE_NUMBER(1161);
	((java_util_concurrent_locks_StampedLock$WNode *) NULL_CHECK((frame[4].o)))->F_prev = (jref) (jobject(nullptr));
	LINE_NUMBER(1162);
	if ((frame[6].i) == 0) goto label_78;
	}
	{
	LINE_NUMBER(1163);
	sp[0].o = (jobject)SM_java_lang_Thread_currentThread_R_java_lang_Thread(ctx);
	((func_java_lang_Thread_interrupt) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_Thread_interrupt])(ctx, sp[0].o);
	}
label_78:;
	{
	LINE_NUMBER(1164);
	popStackFrame(ctx);
	return (frame[15].l);
	}
label_72:;
	{
	LINE_NUMBER(1156);
	INST_IINC(12, -1);
	goto label_68;
	}
label_69:;
	goto label_80;
label_62:;
	{
	LINE_NUMBER(1171);
	if ((frame[8].o) == nullptr) goto label_80;
	}
label_81:;
	{
	LINE_NUMBER(1173);
	sp[0].o = (jobject)((java_util_concurrent_locks_StampedLock$WNode *) NULL_CHECK((frame[8].o)))->F_cowait;
	frame[12].o = sp[0].o;
	if (sp[0].o == nullptr) goto label_80;
	}
	{
	LINE_NUMBER(1174);
	sp[0].o = frame[0].o;
	frame[14].o = sp[0].o;
	monitorEnter(ctx, sp[0].o);
	}
label_18: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_17; }
	}
	{
	LINE_NUMBER(1175);
	sp[0].o = (jobject)((java_util_concurrent_locks_StampedLock$WNode *) NULL_CHECK((frame[8].o)))->F_cowait;
	if (sp[0].o != (frame[12].o)) goto label_84;
	}
	{
	LINE_NUMBER(1176);
	sp[0].o = frame[8].o;
	sp[1].o = (jobject)((java_util_concurrent_locks_StampedLock$WNode *) NULL_CHECK((frame[12].o)))->F_cowait;
	((java_util_concurrent_locks_StampedLock$WNode *) NULL_CHECK(sp[0].o))->F_cowait = (jref) sp[1].o;
	LINE_NUMBER(1177);
	sp[0].o = (jobject)((java_util_concurrent_locks_StampedLock$WNode *) NULL_CHECK((frame[12].o)))->F_thread;
	frame[13].o = sp[0].o;
	if (sp[0].o == nullptr) goto label_84;
	}
	{
	LINE_NUMBER(1178);
	SM_java_util_concurrent_locks_LockSupport_unpark_java_lang_Thread(ctx, (frame[13].o));
	}
label_84:;
	{
	LINE_NUMBER(1180);
	monitorExit(ctx, (frame[14].o));
	}
	popExceptionFrame(frameRef);
	goto label_89;
label_17:;
label_20: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_17; }
	}
	{
	sp -= 1;
	frame[17].o = sp[0].o;
	monitorExit(ctx, (frame[14].o));
	}
	popExceptionFrame(frameRef);
	INST_ALOAD(17);
	INST_ATHROW();
	label_89:;
	goto label_81;
label_80:;
	{
	LINE_NUMBER(1186);
	sp[0].o = (jobject)((java_util_concurrent_locks_StampedLock *) NULL_CHECK((frame[0].o)))->F_whead;
	if (sp[0].o != (frame[8].o)) goto label_90;
	}
	{
	LINE_NUMBER(1187);
	sp[0].o = (jobject)((java_util_concurrent_locks_StampedLock$WNode *) NULL_CHECK((frame[4].o)))->F_prev;
	frame[9].o = sp[0].o;
	if (sp[0].o == (frame[5].o)) goto label_93;
	}
	{
	LINE_NUMBER(1188);
	if ((frame[9].o) == nullptr) goto label_90;
	}
	{
	LINE_NUMBER(1189);
	sp[0].o = frame[9].o;
	frame[5].o = sp[0].o;
	((java_util_concurrent_locks_StampedLock$WNode *) NULL_CHECK(sp[0].o))->F_next = (jref) (frame[4].o);
	goto label_90;
	}
label_93:;
	{
	LINE_NUMBER(1191);
	jint temp0 = (jint)((java_util_concurrent_locks_StampedLock$WNode *) NULL_CHECK((frame[5].o)))->F_status;
	frame[11].i = temp0;
	if (temp0 != 0) goto label_97;
	}
	{
	LINE_NUMBER(1193);
	sp[0].o = frame[0].o;
	frame[12].o = sp[0].o;
	monitorEnter(ctx, sp[0].o);
	}
label_24: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_23; }
	}
	{
	LINE_NUMBER(1194);
	if (((jint)((java_util_concurrent_locks_StampedLock$WNode *) NULL_CHECK((frame[5].o)))->F_status) != 0) goto label_99;
	}
	{
	LINE_NUMBER(1195);
	((java_util_concurrent_locks_StampedLock$WNode *) NULL_CHECK((frame[5].o)))->F_status = (jint(-1));
	}
label_99:;
	{
	LINE_NUMBER(1196);
	monitorExit(ctx, (frame[12].o));
	}
	popExceptionFrame(frameRef);
	goto label_101;
label_23:;
label_26: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_23; }
	}
	{
	sp -= 1;
	frame[18].o = sp[0].o;
	monitorExit(ctx, (frame[12].o));
	}
	popExceptionFrame(frameRef);
	INST_ALOAD(18);
	INST_ATHROW();
	label_101:;
	goto label_90;
label_97:;
	{
	LINE_NUMBER(1199);
	if ((frame[11].i) != (jint(1))) goto label_102;
	}
	{
	LINE_NUMBER(1200);
	sp[0].o = (jobject)((java_util_concurrent_locks_StampedLock$WNode *) NULL_CHECK((frame[5].o)))->F_prev;
	frame[10].o = sp[0].o;
	if (sp[0].o == nullptr) goto label_90;
	}
	{
	LINE_NUMBER(1201);
	((java_util_concurrent_locks_StampedLock$WNode *) NULL_CHECK((frame[4].o)))->F_prev = (jref) (frame[10].o);
	LINE_NUMBER(1202);
	((java_util_concurrent_locks_StampedLock$WNode *) NULL_CHECK((frame[10].o)))->F_next = (jref) (frame[4].o);
	goto label_90;
	}
label_102:;
	{
	LINE_NUMBER(1207);
	if ((longCompare((frame[2].l), (jlong(0)))) != 0) goto label_107;
	}
	{
	LINE_NUMBER(1208);
	frame[12].l = (jlong(0));
	goto label_110;
	}
label_107:;
	{
	LINE_NUMBER(1209);
	jlong temp0 = frame[2].l;
	jlong temp1 = (jlong)SM_java_lang_System_nanoTime_R_long(ctx);
	jlong temp2 = temp0 - temp1;
	frame[12].l = temp2;
	if ((longCompare(temp2, (jlong(0)))) > 0) goto label_110;
	}
	{
	LINE_NUMBER(1210);
	jlong temp0 = (jlong)M_java_util_concurrent_locks_StampedLock_cancelWaiter_java_util_concurrent_locks_StampedLock$WNode_java_util_concurrent_locks_StampedLock$WNode_boolean_R_long(ctx, (frame[0].o), (frame[4].o), (frame[4].o), (jint(0)));
	popStackFrame(ctx);
	return temp0;
	}
label_110:;
	{
	LINE_NUMBER(1211);
	sp[0].o = (jobject)SM_java_lang_Thread_currentThread_R_java_lang_Thread(ctx);
	frame[14].o = sp[0].o;
	LINE_NUMBER(1212);
	((java_util_concurrent_locks_StampedLock$WNode *) NULL_CHECK((frame[4].o)))->F_thread = (jref) (frame[14].o);
	LINE_NUMBER(1213);
	if (((jint)((java_util_concurrent_locks_StampedLock$WNode *) NULL_CHECK((frame[5].o)))->F_status) >= 0) goto label_115;
	}
	{
	if ((frame[5].o) != (frame[8].o)) goto label_116;
	}
	{
	if ((longCompare((((jlong)((java_util_concurrent_locks_StampedLock *) NULL_CHECK((frame[0].o)))->F_state) & (jlong(255ll))), (jlong(0)))) == 0) goto label_115;
	}
label_116:;
	{
	sp[0].o = (jobject)((java_util_concurrent_locks_StampedLock *) NULL_CHECK((frame[0].o)))->F_whead;
	if (sp[0].o != (frame[8].o)) goto label_115;
	}
	{
	sp[0].o = (jobject)((java_util_concurrent_locks_StampedLock$WNode *) NULL_CHECK((frame[4].o)))->F_prev;
	if (sp[0].o != (frame[5].o)) goto label_115;
	}
	{
	LINE_NUMBER(1215);
	if ((longCompare((frame[12].l), (jlong(0)))) != 0) goto label_118;
	}
	{
	LINE_NUMBER(1216);
	SM_java_util_concurrent_locks_LockSupport_park_java_lang_Object(ctx, (frame[0].o));
	goto label_115;
	}
label_118:;
	{
	LINE_NUMBER(1218);
	SM_java_util_concurrent_locks_LockSupport_parkNanos_java_lang_Object_long(ctx, (frame[0].o), (frame[12].l));
	}
label_115:;
	{
	LINE_NUMBER(1220);
	((java_util_concurrent_locks_StampedLock$WNode *) NULL_CHECK((frame[4].o)))->F_thread = (jref) (jobject(nullptr));
	LINE_NUMBER(1221);
	jint temp0 = (jint)SM_java_lang_Thread_interrupted_R_boolean(ctx);
	if (temp0 == 0) goto label_90;
	}
	{
	LINE_NUMBER(1222);
	if ((frame[1].i) == 0) goto label_122;
	}
	{
	LINE_NUMBER(1223);
	jlong temp0 = (jlong)M_java_util_concurrent_locks_StampedLock_cancelWaiter_java_util_concurrent_locks_StampedLock$WNode_java_util_concurrent_locks_StampedLock$WNode_boolean_R_long(ctx, (frame[0].o), (frame[4].o), (frame[4].o), (jint(1)));
	popStackFrame(ctx);
	return temp0;
	}
label_122:;
	{
	LINE_NUMBER(1224);
	frame[6].i = (jint(1));
	}
label_90:;
	LINE_NUMBER(1228);
	goto label_60;

	popStackFrame(ctx);
}

jlong M_java_util_concurrent_locks_StampedLock_acquireRead_boolean_long_R_long(jcontext ctx, jobject self, jbool param0, jlong param1) {
	NULL_CHECK(self);
	jtype frame[32];
	auto stack = &frame[25];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/concurrent/locks/StampedLock:acquireRead", 32 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);
	volatile bool bypasses[8]{};

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].l = param1;
	{
	LINE_NUMBER(1241);
	frame[4].i = (jint(0));
	LINE_NUMBER(1242);
	frame[5].o = (jobject(nullptr));
	LINE_NUMBER(1243);
	frame[7].i = (jint(-1));
	}
label_57:;
	{
	LINE_NUMBER(1245);
	sp[0].o = (jobject)((java_util_concurrent_locks_StampedLock *) NULL_CHECK((frame[0].o)))->F_whead;
	frame[8].o = sp[0].o;
	sp[1].o = (jobject)((java_util_concurrent_locks_StampedLock *) NULL_CHECK((frame[0].o)))->F_wtail;
	frame[6].o = sp[1].o;
	if (sp[0].o != sp[1].o) goto label_60;
	}
label_61:;
	{
	LINE_NUMBER(1247);
	jlong temp0 = (jlong)((java_util_concurrent_locks_StampedLock *) NULL_CHECK((frame[0].o)))->F_state;
	frame[11].l = temp0;
	jlong temp3 = temp0 & (jlong(255ll));
	frame[9].l = temp3;
	if ((longCompare(temp3, (jlong(126ll)))) >= 0) goto label_64;
	}
	{
	sp[0].o = frame[0].o;
	jlong temp0 = frame[11].l;
	jlong temp1 = (frame[11].l) + (jlong(1));
	frame[13].l = temp1;
	LINE_NUMBER(1248);
	jint temp4 = (jint)M_java_util_concurrent_locks_StampedLock_casState_long_long_R_boolean(ctx, sp[0].o, temp0, temp1);
	if (temp4 == 0) goto label_66;
	}
	goto label_67;
label_64:;
	{
	if ((longCompare((frame[9].l), (jlong(128ll)))) >= 0) goto label_66;
	}
	{
	sp[0].o = frame[0].o;
	jlong temp0 = frame[11].l;
	LINE_NUMBER(1249);
	jlong temp1 = (jlong)M_java_util_concurrent_locks_StampedLock_tryIncReaderOverflow_long_R_long(ctx, sp[0].o, temp0);
	frame[13].l = temp1;
	if ((longCompare(temp1, (jlong(0)))) == 0) goto label_66;
	}
label_67:;
	{
	LINE_NUMBER(1250);
	if ((frame[4].i) == 0) goto label_70;
	}
	{
	LINE_NUMBER(1251);
	sp[0].o = (jobject)SM_java_lang_Thread_currentThread_R_java_lang_Thread(ctx);
	((func_java_lang_Thread_interrupt) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_Thread_interrupt])(ctx, sp[0].o);
	}
label_70:;
	{
	LINE_NUMBER(1252);
	popStackFrame(ctx);
	return (frame[13].l);
	}
label_66:;
	{
	LINE_NUMBER(1254);
	if ((longCompare((frame[9].l), (jlong(128ll)))) < 0) goto label_61;
	}
	{
	LINE_NUMBER(1255);
	if ((frame[7].i) <= 0) goto label_73;
	}
	{
	LINE_NUMBER(1256);
	INST_IINC(7, -1);
	goto label_61;
	}
label_73:;
	{
	LINE_NUMBER(1260);
	if ((frame[7].i) != 0) goto label_75;
	}
	{
	LINE_NUMBER(1261);
	sp[0].o = (jobject)((java_util_concurrent_locks_StampedLock *) NULL_CHECK((frame[0].o)))->F_whead;
	frame[15].o = sp[0].o;
	sp[0].o = (jobject)((java_util_concurrent_locks_StampedLock *) NULL_CHECK((frame[0].o)))->F_wtail;
	frame[16].o = sp[0].o;
	LINE_NUMBER(1262);
	if ((frame[15].o) != (frame[8].o)) goto label_79;
	}
	{
	if ((frame[16].o) == (frame[6].o)) goto label_60;
	}
label_79:;
	{
	sp[0].o = frame[15].o;
	frame[8].o = sp[0].o;
	sp[1].o = frame[16].o;
	frame[6].o = sp[1].o;
	if (sp[0].o == sp[1].o) goto label_75;
	}
	LINE_NUMBER(1263);
	goto label_60;
label_75:;
	{
	LINE_NUMBER(1265);
	frame[7].i = (clinit_java_util_concurrent_locks_StampedLock(ctx), (jint)SF_java_util_concurrent_locks_StampedLock_SPINS);
	goto label_61;
	}
label_60:;
	{
	LINE_NUMBER(1270);
	if ((frame[6].o) != nullptr) goto label_81;
	}
	{
	LINE_NUMBER(1271);
	clinit_java_util_concurrent_locks_StampedLock$WNode(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_util_concurrent_locks_StampedLock$WNode);
	init_java_util_concurrent_locks_StampedLock$WNode_int_java_util_concurrent_locks_StampedLock$WNode(ctx, sp[0].o, (jint(1)), (jobject(nullptr)));
	frame[9].o = sp[0].o;
	LINE_NUMBER(1272);
	sp[0].o = frame[0].o;
	frame[10].o = sp[0].o;
	monitorEnter(ctx, sp[0].o);
	}
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(1273);
	sp[0].o = (jobject)((java_util_concurrent_locks_StampedLock *) NULL_CHECK((frame[0].o)))->F_whead;
	if (sp[0].o != nullptr) goto label_84;
	}
	{
	LINE_NUMBER(1275);
	((java_util_concurrent_locks_StampedLock *) NULL_CHECK((frame[0].o)))->F_whead = (jref) (frame[9].o);
	LINE_NUMBER(1276);
	((java_util_concurrent_locks_StampedLock *) NULL_CHECK((frame[0].o)))->F_wtail = (jref) (frame[9].o);
	}
label_84:;
	{
	LINE_NUMBER(1278);
	monitorExit(ctx, (frame[10].o));
	}
	popExceptionFrame(frameRef);
	goto label_87;
label_2:;
label_5: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	sp -= 1;
	frame[17].o = sp[0].o;
	monitorExit(ctx, (frame[10].o));
	}
	popExceptionFrame(frameRef);
	INST_ALOAD(17);
	INST_ATHROW();
	label_87:;
	LINE_NUMBER(1279);
	goto label_88;
label_81:;
	{
	LINE_NUMBER(1280);
	if ((frame[5].o) != nullptr) goto label_89;
	}
	{
	LINE_NUMBER(1281);
	clinit_java_util_concurrent_locks_StampedLock$WNode(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_util_concurrent_locks_StampedLock$WNode);
	init_java_util_concurrent_locks_StampedLock$WNode_int_java_util_concurrent_locks_StampedLock$WNode(ctx, sp[0].o, (jint(0)), (frame[6].o));
	frame[5].o = sp[0].o;
	goto label_88;
	}
label_89:;
	{
	LINE_NUMBER(1282);
	if ((frame[8].o) == (frame[6].o)) goto label_91;
	}
	{
	if (((jint)((java_util_concurrent_locks_StampedLock$WNode *) NULL_CHECK((frame[6].o)))->F_mode) == 0) goto label_92;
	}
label_91:;
	{
	LINE_NUMBER(1283);
	sp[0].o = (jobject)((java_util_concurrent_locks_StampedLock$WNode *) NULL_CHECK((frame[5].o)))->F_prev;
	if (sp[0].o == (frame[6].o)) goto label_93;
	}
	{
	LINE_NUMBER(1284);
	((java_util_concurrent_locks_StampedLock$WNode *) NULL_CHECK((frame[5].o)))->F_prev = (jref) (frame[6].o);
	goto label_88;
	}
label_93:;
	{
	LINE_NUMBER(1286);
	sp[0].o = frame[0].o;
	frame[9].o = sp[0].o;
	monitorEnter(ctx, sp[0].o);
	}
label_9: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_8; }
	}
	{
	LINE_NUMBER(1287);
	sp[0].o = (jobject)((java_util_concurrent_locks_StampedLock *) NULL_CHECK((frame[0].o)))->F_wtail;
	if (sp[0].o != (frame[6].o)) { popExceptionFrames(frameRef, 1); goto label_10; }
	}
	{
	LINE_NUMBER(1288);
	((java_util_concurrent_locks_StampedLock *) NULL_CHECK((frame[0].o)))->F_wtail = (jref) (frame[5].o);
	LINE_NUMBER(1290);
	((java_util_concurrent_locks_StampedLock$WNode *) NULL_CHECK((frame[6].o)))->F_next = (jref) (frame[5].o);
	LINE_NUMBER(1291);
	monitorExit(ctx, (frame[9].o));
	}
	popExceptionFrame(frameRef);
	goto label_98;
label_10:;
label_12: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_8; }
	}
	{
	LINE_NUMBER(1293);
	monitorExit(ctx, (frame[9].o));
	}
	popExceptionFrame(frameRef);
	goto label_99;
label_8:;
label_14: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_8; }
	}
	{
	sp -= 1;
	frame[18].o = sp[0].o;
	monitorExit(ctx, (frame[9].o));
	}
	popExceptionFrame(frameRef);
	INST_ALOAD(18);
	INST_ATHROW();
	label_99:;
	goto label_88;
label_92:;
	{
	LINE_NUMBER(1297);
	sp[0].o = frame[0].o;
	frame[9].o = sp[0].o;
	monitorEnter(ctx, sp[0].o);
	}
label_24: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_23; }
	}
	if (bypasses[7]) { bypasses[7] = false; goto label_100; }
	{
	LINE_NUMBER(1300);
	sp[0].o = (jobject)((java_util_concurrent_locks_StampedLock$WNode *) NULL_CHECK((frame[6].o)))->F_cowait;
	sp[1].o = frame[5].o;
	sp[2].o = (jobject)((java_util_concurrent_locks_StampedLock$WNode *) NULL_CHECK((frame[6].o)))->F_cowait;
	((java_util_concurrent_locks_StampedLock$WNode *) NULL_CHECK(sp[1].o))->F_cowait = (jref) sp[2].o;
	if (sp[0].o != sp[2].o) goto label_100;
	}
	{
	LINE_NUMBER(1301);
	((java_util_concurrent_locks_StampedLock$WNode *) NULL_CHECK((frame[6].o)))->F_cowait = (jref) (frame[5].o);
	LINE_NUMBER(1302);
	((java_util_concurrent_locks_StampedLock$WNode *) NULL_CHECK((frame[5].o)))->F_cowait = (jref) (jobject(nullptr));
	{ popExceptionFrames(frameRef, 1); bypasses[0] = true; goto label_33; } // goto label_103
	}
label_100:;
	{
	LINE_NUMBER(1306);
	sp[0].o = (jobject)((java_util_concurrent_locks_StampedLock *) NULL_CHECK((frame[0].o)))->F_whead;
	frame[8].o = sp[0].o;
	if (sp[0].o == nullptr) goto label_104;
	}
	{
	sp[0].o = (jobject)((java_util_concurrent_locks_StampedLock$WNode *) NULL_CHECK((frame[8].o)))->F_cowait;
	frame[11].o = sp[0].o;
	if (sp[0].o == nullptr) goto label_104;
	}
	{
	LINE_NUMBER(1307);
	sp[0].o = frame[0].o;
	frame[13].o = sp[0].o;
	monitorEnter(ctx, sp[0].o);
	}
label_18: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_17; }
	}
	{
	LINE_NUMBER(1308);
	sp[0].o = (jobject)((java_util_concurrent_locks_StampedLock$WNode *) NULL_CHECK((frame[8].o)))->F_cowait;
	if (sp[0].o != (frame[11].o)) goto label_107;
	}
	{
	LINE_NUMBER(1309);
	sp[0].o = frame[8].o;
	sp[1].o = (jobject)((java_util_concurrent_locks_StampedLock$WNode *) NULL_CHECK((frame[11].o)))->F_cowait;
	((java_util_concurrent_locks_StampedLock$WNode *) NULL_CHECK(sp[0].o))->F_cowait = (jref) sp[1].o;
	LINE_NUMBER(1310);
	sp[0].o = (jobject)((java_util_concurrent_locks_StampedLock$WNode *) NULL_CHECK((frame[11].o)))->F_thread;
	frame[12].o = sp[0].o;
	}
label_107:;
	{
	LINE_NUMBER(1312);
	monitorExit(ctx, (frame[13].o));
	}
	popExceptionFrame(frameRef);
	goto label_104;
label_17:;
label_20: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_17; }
	}
	{
	sp -= 1;
	frame[19].o = sp[0].o;
	monitorExit(ctx, (frame[13].o));
	}
	popExceptionFrame(frameRef);
	INST_ALOAD(19);
	INST_ATHROW();
	label_104:;
	{
	LINE_NUMBER(1318);
	jint temp0 = (jint)SM_java_lang_Thread_interrupted_R_boolean(ctx);
	if (temp0 == 0) { popExceptionFrames(frameRef, 1); bypasses[1] = true; goto label_27; } // goto label_110
	}
	{
	LINE_NUMBER(1319);
	if ((frame[1].i) == 0) { popExceptionFrames(frameRef, 1); goto label_25; }
	}
	{
	LINE_NUMBER(1320);
	jlong temp0 = (jlong)M_java_util_concurrent_locks_StampedLock_cancelWaiter_java_util_concurrent_locks_StampedLock$WNode_java_util_concurrent_locks_StampedLock$WNode_boolean_R_long(ctx, (frame[0].o), (frame[5].o), (frame[6].o), (jint(1)));
	monitorExit(ctx, (frame[9].o));
	sp[0].l = temp0;
	sp += 1;
	}
	popExceptionFrame(frameRef);
	popStackFrame(ctx);
	INST_LRETURN();
label_25:;
label_27: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_23; }
	}
	if (bypasses[1]) { bypasses[1] = false; goto label_110; }
	if (bypasses[3]) { bypasses[3] = false; goto label_114; }
	{
	LINE_NUMBER(1321);
	frame[4].i = (jint(1));
	}
label_110:;
	{
	LINE_NUMBER(1323);
	sp[0].o = frame[8].o;
	sp[1].o = (jobject)((java_util_concurrent_locks_StampedLock$WNode *) NULL_CHECK((frame[6].o)))->F_prev;
	frame[10].o = sp[1].o;
	if (sp[0].o == sp[1].o) goto label_114;
	}
	{
	if ((frame[8].o) == (frame[6].o)) goto label_114;
	}
	INST_ALOAD(10);
	if ((--sp)->o != nullptr) { popExceptionFrames(frameRef, 1); bypasses[2] = true; goto label_30; } // goto label_115
label_114:;
	{
	LINE_NUMBER(1326);
	jlong temp0 = (jlong)((java_util_concurrent_locks_StampedLock *) NULL_CHECK((frame[0].o)))->F_state;
	frame[15].l = temp0;
	jlong temp3 = temp0 & (jlong(255ll));
	frame[13].l = temp3;
	if ((longCompare(temp3, (jlong(126ll)))) >= 0) goto label_118;
	}
	{
	sp[0].o = frame[0].o;
	jlong temp0 = frame[15].l;
	jlong temp1 = (frame[15].l) + (jlong(1));
	frame[17].l = temp1;
	LINE_NUMBER(1327);
	jint temp4 = (jint)M_java_util_concurrent_locks_StampedLock_casState_long_long_R_boolean(ctx, sp[0].o, temp0, temp1);
	if (temp4 == 0) { popExceptionFrames(frameRef, 1); goto label_28; }
	}
	goto label_120;
label_118:;
	{
	if ((longCompare((frame[13].l), (jlong(128ll)))) >= 0) { popExceptionFrames(frameRef, 1); goto label_28; }
	}
	{
	sp[0].o = frame[0].o;
	jlong temp0 = frame[15].l;
	LINE_NUMBER(1329);
	jlong temp1 = (jlong)M_java_util_concurrent_locks_StampedLock_tryIncReaderOverflow_long_R_long(ctx, sp[0].o, temp0);
	frame[17].l = temp1;
	if ((longCompare(temp1, (jlong(0)))) == 0) { popExceptionFrames(frameRef, 1); goto label_28; }
	}
label_120:;
	{
	LINE_NUMBER(1330);
	if ((frame[4].i) == 0) goto label_123;
	}
	{
	LINE_NUMBER(1331);
	sp[0].o = (jobject)SM_java_lang_Thread_currentThread_R_java_lang_Thread(ctx);
	((func_java_lang_Thread_interrupt) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_Thread_interrupt])(ctx, sp[0].o);
	}
label_123:;
	{
	LINE_NUMBER(1332);
	jlong temp0 = frame[17].l;
	monitorExit(ctx, (frame[9].o));
	sp[0].l = temp0;
	sp += 1;
	}
	popExceptionFrame(frameRef);
	popStackFrame(ctx);
	INST_LRETURN();
label_28:;
label_30: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_23; }
	}
	if (bypasses[2]) { bypasses[2] = false; goto label_115; }
	{
	LINE_NUMBER(1334);
	if ((longCompare((frame[13].l), (jlong(128ll)))) < 0) { popExceptionFrames(frameRef, 1); bypasses[3] = true; goto label_27; } // goto label_114
	}
label_115:;
	{
	LINE_NUMBER(1336);
	sp[0].o = (jobject)((java_util_concurrent_locks_StampedLock *) NULL_CHECK((frame[0].o)))->F_whead;
	if (sp[0].o != (frame[8].o)) { popExceptionFrames(frameRef, 1); bypasses[4] = true; goto label_33; } // goto label_125
	}
	{
	sp[0].o = (jobject)((java_util_concurrent_locks_StampedLock$WNode *) NULL_CHECK((frame[6].o)))->F_prev;
	if (sp[0].o != (frame[10].o)) { popExceptionFrames(frameRef, 1); bypasses[5] = true; goto label_33; } // goto label_125
	}
	{
	LINE_NUMBER(1338);
	if ((frame[10].o) == nullptr) goto label_127;
	}
	{
	if ((frame[8].o) == (frame[6].o)) goto label_127;
	}
	{
	if (((jint)((java_util_concurrent_locks_StampedLock$WNode *) NULL_CHECK((frame[6].o)))->F_status) <= 0) goto label_128;
	}
label_127:;
	{
	LINE_NUMBER(1339);
	frame[5].o = (jobject(nullptr));
	LINE_NUMBER(1340);
	{ popExceptionFrames(frameRef, 1); bypasses[6] = true; goto label_33; } // goto label_103
	}
label_128:;
	{
	LINE_NUMBER(1342);
	if ((longCompare((frame[2].l), (jlong(0)))) != 0) goto label_130;
	}
	{
	LINE_NUMBER(1343);
	frame[13].l = (jlong(0));
	{ popExceptionFrames(frameRef, 1); goto label_31; }
	}
label_130:;
	{
	LINE_NUMBER(1344);
	jlong temp0 = frame[2].l;
	jlong temp1 = (jlong)SM_java_lang_System_nanoTime_R_long(ctx);
	jlong temp2 = temp0 - temp1;
	frame[13].l = temp2;
	if ((longCompare(temp2, (jlong(0)))) > 0) { popExceptionFrames(frameRef, 1); goto label_31; }
	}
	{
	LINE_NUMBER(1345);
	if ((frame[4].i) == 0) goto label_135;
	}
	{
	LINE_NUMBER(1346);
	sp[0].o = (jobject)SM_java_lang_Thread_currentThread_R_java_lang_Thread(ctx);
	((func_java_lang_Thread_interrupt) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_Thread_interrupt])(ctx, sp[0].o);
	}
label_135:;
	{
	LINE_NUMBER(1347);
	jlong temp0 = (jlong)M_java_util_concurrent_locks_StampedLock_cancelWaiter_java_util_concurrent_locks_StampedLock$WNode_java_util_concurrent_locks_StampedLock$WNode_boolean_R_long(ctx, (frame[0].o), (frame[5].o), (frame[6].o), (jint(0)));
	monitorExit(ctx, (frame[9].o));
	sp[0].l = temp0;
	sp += 1;
	}
	popExceptionFrame(frameRef);
	popStackFrame(ctx);
	INST_LRETURN();
label_31:;
label_33: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_23; }
	}
	if (bypasses[0]) { bypasses[0] = false; goto label_103; }
	if (bypasses[4]) { bypasses[4] = false; goto label_125; }
	if (bypasses[5]) { bypasses[5] = false; goto label_125; }
	if (bypasses[6]) { bypasses[6] = false; goto label_103; }
	{
	LINE_NUMBER(1349);
	sp[0].o = (jobject)SM_java_lang_Thread_currentThread_R_java_lang_Thread(ctx);
	frame[15].o = sp[0].o;
	LINE_NUMBER(1350);
	((java_util_concurrent_locks_StampedLock$WNode *) NULL_CHECK((frame[5].o)))->F_thread = (jref) (frame[15].o);
	LINE_NUMBER(1351);
	if ((frame[8].o) != (frame[10].o)) goto label_139;
	}
	{
	if ((longCompare((((jlong)((java_util_concurrent_locks_StampedLock *) NULL_CHECK((frame[0].o)))->F_state) & (jlong(255ll))), (jlong(128ll)))) != 0) goto label_140;
	}
label_139:;
	{
	sp[0].o = (jobject)((java_util_concurrent_locks_StampedLock *) NULL_CHECK((frame[0].o)))->F_whead;
	if (sp[0].o != (frame[8].o)) goto label_140;
	}
	{
	sp[0].o = (jobject)((java_util_concurrent_locks_StampedLock$WNode *) NULL_CHECK((frame[6].o)))->F_prev;
	if (sp[0].o != (frame[10].o)) goto label_140;
	}
	{
	LINE_NUMBER(1353);
	if ((longCompare((frame[13].l), (jlong(0)))) != 0) goto label_142;
	}
	{
	LINE_NUMBER(1354);
	SM_java_util_concurrent_locks_LockSupport_park_java_lang_Object(ctx, (frame[0].o));
	goto label_140;
	}
label_142:;
	{
	LINE_NUMBER(1356);
	SM_java_util_concurrent_locks_LockSupport_parkNanos_java_lang_Object_long(ctx, (frame[0].o), (frame[13].l));
	}
label_140:;
	{
	LINE_NUMBER(1358);
	((java_util_concurrent_locks_StampedLock$WNode *) NULL_CHECK((frame[5].o)))->F_thread = (jref) (jobject(nullptr));
	}
label_125:;
	LINE_NUMBER(1360);
	{ popExceptionFrames(frameRef, 1); bypasses[7] = true; goto label_24; } // goto label_100
label_103:;
	{
	LINE_NUMBER(1362);
	monitorExit(ctx, (frame[9].o));
	}
	popExceptionFrame(frameRef);
	goto label_88;
label_23:;
label_35: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_23; }
	}
	{
	sp -= 1;
	frame[20].o = sp[0].o;
	monitorExit(ctx, (frame[9].o));
	}
	popExceptionFrame(frameRef);
	INST_ALOAD(20);
	INST_ATHROW();
	label_88:;
	LINE_NUMBER(1364);
	goto label_57;
label_98:;
	{
	LINE_NUMBER(1366);
	frame[7].i = (jint(-1));
	}
label_144:;
	{
	LINE_NUMBER(1368);
	sp[0].o = (jobject)((java_util_concurrent_locks_StampedLock *) NULL_CHECK((frame[0].o)))->F_whead;
	frame[8].o = sp[0].o;
	if (sp[0].o != (frame[6].o)) goto label_146;
	}
	{
	LINE_NUMBER(1369);
	if ((frame[7].i) >= 0) goto label_148;
	}
	{
	LINE_NUMBER(1370);
	frame[7].i = (clinit_java_util_concurrent_locks_StampedLock(ctx), (jint)SF_java_util_concurrent_locks_StampedLock_HEAD_SPINS);
	goto label_150;
	}
label_148:;
	{
	LINE_NUMBER(1371);
	if ((frame[7].i) >= (clinit_java_util_concurrent_locks_StampedLock(ctx), (jint)SF_java_util_concurrent_locks_StampedLock_MAX_HEAD_SPINS)) goto label_150;
	}
	{
	LINE_NUMBER(1372);
	frame[7].i = ((frame[7].i) << (jint(1)));
	}
label_150:;
	{
	LINE_NUMBER(1373);
	frame[12].i = (frame[7].i);
	}
label_152:;
	{
	LINE_NUMBER(1375);
	jlong temp0 = (jlong)((java_util_concurrent_locks_StampedLock *) NULL_CHECK((frame[0].o)))->F_state;
	frame[15].l = temp0;
	jlong temp3 = temp0 & (jlong(255ll));
	frame[13].l = temp3;
	if ((longCompare(temp3, (jlong(126ll)))) >= 0) goto label_155;
	}
	{
	sp[0].o = frame[0].o;
	jlong temp0 = frame[15].l;
	jlong temp1 = (frame[15].l) + (jlong(1));
	frame[17].l = temp1;
	LINE_NUMBER(1376);
	jint temp4 = (jint)M_java_util_concurrent_locks_StampedLock_casState_long_long_R_boolean(ctx, sp[0].o, temp0, temp1);
	if (temp4 == 0) goto label_157;
	}
	goto label_158;
label_155:;
	{
	if ((longCompare((frame[13].l), (jlong(128ll)))) >= 0) goto label_157;
	}
	{
	sp[0].o = frame[0].o;
	jlong temp0 = frame[15].l;
	LINE_NUMBER(1377);
	jlong temp1 = (jlong)M_java_util_concurrent_locks_StampedLock_tryIncReaderOverflow_long_R_long(ctx, sp[0].o, temp0);
	frame[17].l = temp1;
	if ((longCompare(temp1, (jlong(0)))) == 0) goto label_157;
	}
label_158:;
	{
	LINE_NUMBER(1379);
	((java_util_concurrent_locks_StampedLock *) NULL_CHECK((frame[0].o)))->F_whead = (jref) (frame[5].o);
	LINE_NUMBER(1380);
	((java_util_concurrent_locks_StampedLock$WNode *) NULL_CHECK((frame[5].o)))->F_prev = (jref) (jobject(nullptr));
	}
label_162:;
	{
	LINE_NUMBER(1381);
	sp[0].o = (jobject)((java_util_concurrent_locks_StampedLock$WNode *) NULL_CHECK((frame[5].o)))->F_cowait;
	frame[19].o = sp[0].o;
	if (sp[0].o == nullptr) goto label_164;
	}
	{
	LINE_NUMBER(1382);
	sp[0].o = frame[0].o;
	frame[21].o = sp[0].o;
	monitorEnter(ctx, sp[0].o);
	}
label_39: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_38; }
	}
	{
	LINE_NUMBER(1383);
	sp[0].o = (jobject)((java_util_concurrent_locks_StampedLock$WNode *) NULL_CHECK((frame[5].o)))->F_cowait;
	if (sp[0].o != (frame[19].o)) goto label_166;
	}
	{
	LINE_NUMBER(1384);
	sp[0].o = frame[5].o;
	sp[1].o = (jobject)((java_util_concurrent_locks_StampedLock$WNode *) NULL_CHECK((frame[19].o)))->F_cowait;
	((java_util_concurrent_locks_StampedLock$WNode *) NULL_CHECK(sp[0].o))->F_cowait = (jref) sp[1].o;
	LINE_NUMBER(1385);
	sp[0].o = (jobject)((java_util_concurrent_locks_StampedLock$WNode *) NULL_CHECK((frame[19].o)))->F_thread;
	frame[20].o = sp[0].o;
	}
label_166:;
	{
	LINE_NUMBER(1387);
	monitorExit(ctx, (frame[21].o));
	}
	popExceptionFrame(frameRef);
	goto label_169;
label_38:;
label_41: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_38; }
	}
	{
	sp -= 1;
	frame[22].o = sp[0].o;
	monitorExit(ctx, (frame[21].o));
	}
	popExceptionFrame(frameRef);
	INST_ALOAD(22);
	INST_ATHROW();
	label_169:;
	goto label_162;
label_164:;
	{
	LINE_NUMBER(1392);
	if ((frame[4].i) == 0) goto label_170;
	}
	{
	LINE_NUMBER(1393);
	sp[0].o = (jobject)SM_java_lang_Thread_currentThread_R_java_lang_Thread(ctx);
	((func_java_lang_Thread_interrupt) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_Thread_interrupt])(ctx, sp[0].o);
	}
label_170:;
	{
	LINE_NUMBER(1394);
	popStackFrame(ctx);
	return (frame[17].l);
	}
label_157:;
	{
	LINE_NUMBER(1396);
	if ((longCompare((frame[13].l), (jlong(128ll)))) < 0) goto label_172;
	}
	{
	INST_IINC(12, -1);
	if ((frame[12].i) > 0) goto label_172;
	}
	LINE_NUMBER(1397);
	goto label_174;
label_172:;
	LINE_NUMBER(1400);
	goto label_152;
label_174:;
	goto label_175;
label_146:;
	{
	LINE_NUMBER(1402);
	if ((frame[8].o) == nullptr) goto label_175;
	}
label_176:;
	{
	LINE_NUMBER(1404);
	sp[0].o = (jobject)((java_util_concurrent_locks_StampedLock$WNode *) NULL_CHECK((frame[8].o)))->F_cowait;
	frame[12].o = sp[0].o;
	if (sp[0].o == nullptr) goto label_175;
	}
	{
	LINE_NUMBER(1405);
	sp[0].o = frame[0].o;
	frame[14].o = sp[0].o;
	monitorEnter(ctx, sp[0].o);
	}
label_45: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_44; }
	}
	{
	LINE_NUMBER(1406);
	sp[0].o = (jobject)((java_util_concurrent_locks_StampedLock$WNode *) NULL_CHECK((frame[8].o)))->F_cowait;
	if (sp[0].o != (frame[12].o)) goto label_179;
	}
	{
	LINE_NUMBER(1407);
	sp[0].o = frame[8].o;
	sp[1].o = (jobject)((java_util_concurrent_locks_StampedLock$WNode *) NULL_CHECK((frame[12].o)))->F_cowait;
	((java_util_concurrent_locks_StampedLock$WNode *) NULL_CHECK(sp[0].o))->F_cowait = (jref) sp[1].o;
	LINE_NUMBER(1408);
	sp[0].o = (jobject)((java_util_concurrent_locks_StampedLock$WNode *) NULL_CHECK((frame[12].o)))->F_thread;
	frame[13].o = sp[0].o;
	}
label_179:;
	{
	LINE_NUMBER(1410);
	monitorExit(ctx, (frame[14].o));
	}
	popExceptionFrame(frameRef);
	goto label_182;
label_44:;
label_47: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_44; }
	}
	{
	sp -= 1;
	frame[23].o = sp[0].o;
	monitorExit(ctx, (frame[14].o));
	}
	popExceptionFrame(frameRef);
	INST_ALOAD(23);
	INST_ATHROW();
	label_182:;
	goto label_176;
label_175:;
	{
	LINE_NUMBER(1416);
	sp[0].o = (jobject)((java_util_concurrent_locks_StampedLock *) NULL_CHECK((frame[0].o)))->F_whead;
	if (sp[0].o != (frame[8].o)) goto label_183;
	}
	{
	LINE_NUMBER(1417);
	sp[0].o = (jobject)((java_util_concurrent_locks_StampedLock$WNode *) NULL_CHECK((frame[5].o)))->F_prev;
	frame[9].o = sp[0].o;
	if (sp[0].o == (frame[6].o)) goto label_186;
	}
	{
	LINE_NUMBER(1418);
	if ((frame[9].o) == nullptr) goto label_183;
	}
	{
	LINE_NUMBER(1419);
	sp[0].o = frame[9].o;
	frame[6].o = sp[0].o;
	((java_util_concurrent_locks_StampedLock$WNode *) NULL_CHECK(sp[0].o))->F_next = (jref) (frame[5].o);
	goto label_183;
	}
label_186:;
	{
	LINE_NUMBER(1421);
	jint temp0 = (jint)((java_util_concurrent_locks_StampedLock$WNode *) NULL_CHECK((frame[6].o)))->F_status;
	frame[11].i = temp0;
	if (temp0 != 0) goto label_190;
	}
	{
	LINE_NUMBER(1422);
	sp[0].o = frame[0].o;
	frame[12].o = sp[0].o;
	monitorEnter(ctx, sp[0].o);
	}
label_51: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_50; }
	}
	{
	LINE_NUMBER(1423);
	if (((jint)((java_util_concurrent_locks_StampedLock$WNode *) NULL_CHECK((frame[6].o)))->F_status) != 0) goto label_192;
	}
	{
	LINE_NUMBER(1424);
	((java_util_concurrent_locks_StampedLock$WNode *) NULL_CHECK((frame[6].o)))->F_status = (jint(-1));
	}
label_192:;
	{
	LINE_NUMBER(1425);
	monitorExit(ctx, (frame[12].o));
	}
	popExceptionFrame(frameRef);
	goto label_194;
label_50:;
label_53: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_50; }
	}
	{
	sp -= 1;
	frame[24].o = sp[0].o;
	monitorExit(ctx, (frame[12].o));
	}
	popExceptionFrame(frameRef);
	INST_ALOAD(24);
	INST_ATHROW();
	label_194:;
	goto label_183;
label_190:;
	{
	LINE_NUMBER(1427);
	if ((frame[11].i) != (jint(1))) goto label_195;
	}
	{
	LINE_NUMBER(1428);
	sp[0].o = (jobject)((java_util_concurrent_locks_StampedLock$WNode *) NULL_CHECK((frame[6].o)))->F_prev;
	frame[10].o = sp[0].o;
	if (sp[0].o == nullptr) goto label_183;
	}
	{
	LINE_NUMBER(1429);
	((java_util_concurrent_locks_StampedLock$WNode *) NULL_CHECK((frame[5].o)))->F_prev = (jref) (frame[10].o);
	LINE_NUMBER(1430);
	((java_util_concurrent_locks_StampedLock$WNode *) NULL_CHECK((frame[10].o)))->F_next = (jref) (frame[5].o);
	goto label_183;
	}
label_195:;
	{
	LINE_NUMBER(1435);
	if ((longCompare((frame[2].l), (jlong(0)))) != 0) goto label_200;
	}
	{
	LINE_NUMBER(1436);
	frame[12].l = (jlong(0));
	goto label_203;
	}
label_200:;
	{
	LINE_NUMBER(1437);
	jlong temp0 = frame[2].l;
	jlong temp1 = (jlong)SM_java_lang_System_nanoTime_R_long(ctx);
	jlong temp2 = temp0 - temp1;
	frame[12].l = temp2;
	if ((longCompare(temp2, (jlong(0)))) > 0) goto label_203;
	}
	{
	LINE_NUMBER(1438);
	jlong temp0 = (jlong)M_java_util_concurrent_locks_StampedLock_cancelWaiter_java_util_concurrent_locks_StampedLock$WNode_java_util_concurrent_locks_StampedLock$WNode_boolean_R_long(ctx, (frame[0].o), (frame[5].o), (frame[5].o), (jint(0)));
	popStackFrame(ctx);
	return temp0;
	}
label_203:;
	{
	LINE_NUMBER(1439);
	sp[0].o = (jobject)SM_java_lang_Thread_currentThread_R_java_lang_Thread(ctx);
	frame[14].o = sp[0].o;
	LINE_NUMBER(1440);
	((java_util_concurrent_locks_StampedLock$WNode *) NULL_CHECK((frame[5].o)))->F_thread = (jref) (frame[14].o);
	LINE_NUMBER(1441);
	if (((jint)((java_util_concurrent_locks_StampedLock$WNode *) NULL_CHECK((frame[6].o)))->F_status) >= 0) goto label_208;
	}
	{
	if ((frame[6].o) != (frame[8].o)) goto label_209;
	}
	{
	if ((longCompare((((jlong)((java_util_concurrent_locks_StampedLock *) NULL_CHECK((frame[0].o)))->F_state) & (jlong(255ll))), (jlong(128ll)))) != 0) goto label_208;
	}
label_209:;
	{
	sp[0].o = (jobject)((java_util_concurrent_locks_StampedLock *) NULL_CHECK((frame[0].o)))->F_whead;
	if (sp[0].o != (frame[8].o)) goto label_208;
	}
	{
	sp[0].o = (jobject)((java_util_concurrent_locks_StampedLock$WNode *) NULL_CHECK((frame[5].o)))->F_prev;
	if (sp[0].o != (frame[6].o)) goto label_208;
	}
	{
	LINE_NUMBER(1444);
	if ((longCompare((frame[12].l), (jlong(0)))) != 0) goto label_211;
	}
	{
	LINE_NUMBER(1445);
	SM_java_util_concurrent_locks_LockSupport_park_java_lang_Object(ctx, (frame[0].o));
	goto label_208;
	}
label_211:;
	{
	LINE_NUMBER(1447);
	SM_java_util_concurrent_locks_LockSupport_parkNanos_java_lang_Object_long(ctx, (frame[0].o), (frame[12].l));
	}
label_208:;
	{
	LINE_NUMBER(1449);
	((java_util_concurrent_locks_StampedLock$WNode *) NULL_CHECK((frame[5].o)))->F_thread = (jref) (jobject(nullptr));
	LINE_NUMBER(1450);
	jint temp0 = (jint)SM_java_lang_Thread_interrupted_R_boolean(ctx);
	if (temp0 == 0) goto label_183;
	}
	{
	LINE_NUMBER(1451);
	if ((frame[1].i) == 0) goto label_215;
	}
	{
	LINE_NUMBER(1452);
	jlong temp0 = (jlong)M_java_util_concurrent_locks_StampedLock_cancelWaiter_java_util_concurrent_locks_StampedLock$WNode_java_util_concurrent_locks_StampedLock$WNode_boolean_R_long(ctx, (frame[0].o), (frame[5].o), (frame[5].o), (jint(1)));
	popStackFrame(ctx);
	return temp0;
	}
label_215:;
	{
	LINE_NUMBER(1453);
	frame[4].i = (jint(1));
	}
label_183:;
	LINE_NUMBER(1457);
	goto label_144;

	popStackFrame(ctx);
}

jlong M_java_util_concurrent_locks_StampedLock_cancelWaiter_java_util_concurrent_locks_StampedLock$WNode_java_util_concurrent_locks_StampedLock$WNode_boolean_R_long(jcontext ctx, jobject self, jobject param0, jobject param1, jbool param2) {
	NULL_CHECK(self);
	jtype frame[18];
	auto stack = &frame[14];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/concurrent/locks/StampedLock:cancelWaiter", 18 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].i = param2;
	{
	LINE_NUMBER(1477);
	if ((frame[1].o) == nullptr) goto label_34;
	}
	INST_ALOAD(2);
	if ((--sp)->o == nullptr) goto label_34;
	{
	LINE_NUMBER(1479);
	((java_util_concurrent_locks_StampedLock$WNode *) NULL_CHECK((frame[1].o)))->F_status = (jint(1));
	LINE_NUMBER(1481);
	frame[5].o = (frame[2].o);
	}
label_37:;
	{
	sp[0].o = (jobject)((java_util_concurrent_locks_StampedLock$WNode *) NULL_CHECK((frame[5].o)))->F_cowait;
	frame[6].o = sp[0].o;
	if (sp[0].o == nullptr) goto label_39;
	}
	{
	LINE_NUMBER(1482);
	if (((jint)((java_util_concurrent_locks_StampedLock$WNode *) NULL_CHECK((frame[6].o)))->F_status) != (jint(1))) goto label_41;
	}
	{
	LINE_NUMBER(1483);
	sp[0].o = frame[0].o;
	frame[7].o = sp[0].o;
	monitorEnter(ctx, sp[0].o);
	}
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(1484);
	sp[0].o = (jobject)((java_util_concurrent_locks_StampedLock$WNode *) NULL_CHECK((frame[5].o)))->F_cowait;
	if (sp[0].o != (frame[6].o)) goto label_43;
	}
	{
	LINE_NUMBER(1485);
	sp[0].o = frame[5].o;
	sp[1].o = (jobject)((java_util_concurrent_locks_StampedLock$WNode *) NULL_CHECK((frame[6].o)))->F_cowait;
	((java_util_concurrent_locks_StampedLock$WNode *) NULL_CHECK(sp[0].o))->F_cowait = (jref) sp[1].o;
	}
label_43:;
	{
	LINE_NUMBER(1487);
	monitorExit(ctx, (frame[7].o));
	}
	popExceptionFrame(frameRef);
	goto label_45;
label_2:;
label_5: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	sp -= 1;
	frame[8].o = sp[0].o;
	monitorExit(ctx, (frame[7].o));
	}
	popExceptionFrame(frameRef);
	INST_ALOAD(8);
	INST_ATHROW();
	label_45:;
	{
	LINE_NUMBER(1488);
	frame[5].o = (frame[2].o);
	goto label_37;
	}
label_41:;
	{
	LINE_NUMBER(1491);
	frame[5].o = (frame[6].o);
	goto label_37;
	}
label_39:;
	{
	LINE_NUMBER(1493);
	if ((frame[2].o) != (frame[1].o)) goto label_34;
	}
	{
	LINE_NUMBER(1494);
	sp[0].o = (jobject)((java_util_concurrent_locks_StampedLock$WNode *) NULL_CHECK((frame[2].o)))->F_cowait;
	frame[5].o = sp[0].o;
	}
label_47:;
	INST_ALOAD(5);
	if ((--sp)->o == nullptr) goto label_48;
	{
	LINE_NUMBER(1495);
	sp[0].o = (jobject)((java_util_concurrent_locks_StampedLock$WNode *) NULL_CHECK((frame[5].o)))->F_thread;
	frame[4].o = sp[0].o;
	if (sp[0].o == nullptr) goto label_51;
	}
	{
	LINE_NUMBER(1496);
	SM_java_util_concurrent_locks_LockSupport_unpark_java_lang_Thread(ctx, (frame[4].o));
	}
label_51:;
	{
	LINE_NUMBER(1494);
	sp[0].o = (jobject)((java_util_concurrent_locks_StampedLock$WNode *) NULL_CHECK((frame[5].o)))->F_cowait;
	frame[5].o = sp[0].o;
	goto label_47;
	}
label_48:;
	{
	LINE_NUMBER(1498);
	sp[0].o = (jobject)((java_util_concurrent_locks_StampedLock$WNode *) NULL_CHECK((frame[1].o)))->F_prev;
	frame[5].o = sp[0].o;
	}
label_53:;
	INST_ALOAD(5);
	if ((--sp)->o == nullptr) goto label_34;
label_54:;
	{
	LINE_NUMBER(1500);
	sp[0].o = (jobject)((java_util_concurrent_locks_StampedLock$WNode *) NULL_CHECK((frame[1].o)))->F_next;
	frame[6].o = sp[0].o;
	if (sp[0].o == nullptr) goto label_56;
	}
	{
	if (((jint)((java_util_concurrent_locks_StampedLock$WNode *) NULL_CHECK((frame[6].o)))->F_status) != (jint(1))) goto label_57;
	}
label_56:;
	{
	LINE_NUMBER(1502);
	frame[8].o = (jobject(nullptr));
	LINE_NUMBER(1503);
	sp[0].o = (jobject)((java_util_concurrent_locks_StampedLock *) NULL_CHECK((frame[0].o)))->F_wtail;
	frame[9].o = sp[0].o;
	}
label_59:;
	INST_ALOAD(9);
	if ((--sp)->o == nullptr) goto label_60;
	{
	if ((frame[9].o) == (frame[1].o)) goto label_60;
	}
	{
	LINE_NUMBER(1504);
	if (((jint)((java_util_concurrent_locks_StampedLock$WNode *) NULL_CHECK((frame[9].o)))->F_status) == (jint(1))) goto label_62;
	}
	{
	LINE_NUMBER(1505);
	frame[8].o = (frame[9].o);
	}
label_62:;
	{
	LINE_NUMBER(1503);
	sp[0].o = (jobject)((java_util_concurrent_locks_StampedLock$WNode *) NULL_CHECK((frame[9].o)))->F_prev;
	frame[9].o = sp[0].o;
	goto label_59;
	}
label_60:;
	{
	LINE_NUMBER(1506);
	if ((frame[6].o) != (frame[8].o)) goto label_64;
	}
	{
	LINE_NUMBER(1507);
	sp[0].o = frame[0].o;
	frame[9].o = sp[0].o;
	monitorEnter(ctx, sp[0].o);
	}
label_9: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_8; }
	}
	{
	LINE_NUMBER(1508);
	if ((frame[6].o) != nullptr) goto label_66;
	}
	{
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((java_util_concurrent_locks_StampedLock *) NULL_CHECK((frame[0].o)))->F_wtail;
	if (sp[0].o != sp[1].o) goto label_66;
	}
	{
	LINE_NUMBER(1509);
	((java_util_concurrent_locks_StampedLock *) NULL_CHECK((frame[0].o)))->F_wtail = (jref) (frame[5].o);
	}
label_66:;
	{
	LINE_NUMBER(1510);
	monitorExit(ctx, (frame[9].o));
	}
	popExceptionFrame(frameRef);
	goto label_68;
label_8:;
label_11: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_8; }
	}
	{
	sp -= 1;
	frame[10].o = sp[0].o;
	monitorExit(ctx, (frame[9].o));
	}
	popExceptionFrame(frameRef);
	INST_ALOAD(10);
	INST_ATHROW();
	label_68:;
	LINE_NUMBER(1511);
	goto label_57;
label_64:;
	{
	LINE_NUMBER(1513);
	sp[0].o = frame[0].o;
	frame[9].o = sp[0].o;
	monitorEnter(ctx, sp[0].o);
	}
label_15: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_14; }
	}
	{
	LINE_NUMBER(1514);
	sp[0].o = (jobject)((java_util_concurrent_locks_StampedLock$WNode *) NULL_CHECK((frame[1].o)))->F_next;
	if (sp[0].o != (frame[6].o)) { popExceptionFrames(frameRef, 1); goto label_16; }
	}
	{
	LINE_NUMBER(1515);
	sp[0].o = frame[1].o;
	sp[1].o = frame[8].o;
	frame[6].o = sp[1].o;
	((java_util_concurrent_locks_StampedLock$WNode *) NULL_CHECK(sp[0].o))->F_next = (jref) sp[1].o;
	LINE_NUMBER(1516);
	if ((frame[6].o) != nullptr) goto label_71;
	}
	{
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((java_util_concurrent_locks_StampedLock *) NULL_CHECK((frame[0].o)))->F_wtail;
	if (sp[0].o != sp[1].o) goto label_71;
	}
	{
	LINE_NUMBER(1517);
	((java_util_concurrent_locks_StampedLock *) NULL_CHECK((frame[0].o)))->F_wtail = (jref) (frame[5].o);
	}
label_71:;
	{
	LINE_NUMBER(1518);
	monitorExit(ctx, (frame[9].o));
	}
	popExceptionFrame(frameRef);
	goto label_57;
label_16:;
label_18: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_14; }
	}
	{
	LINE_NUMBER(1520);
	monitorExit(ctx, (frame[9].o));
	}
	popExceptionFrame(frameRef);
	goto label_73;
label_14:;
label_20: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_14; }
	}
	{
	sp -= 1;
	frame[11].o = sp[0].o;
	monitorExit(ctx, (frame[9].o));
	}
	popExceptionFrame(frameRef);
	INST_ALOAD(11);
	INST_ATHROW();
	label_73:;
	LINE_NUMBER(1521);
	goto label_54;
label_57:;
	{
	LINE_NUMBER(1522);
	sp[0].o = frame[0].o;
	frame[8].o = sp[0].o;
	monitorEnter(ctx, sp[0].o);
	}
label_24: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_23; }
	}
	{
	LINE_NUMBER(1523);
	sp[0].o = (jobject)((java_util_concurrent_locks_StampedLock$WNode *) NULL_CHECK((frame[5].o)))->F_next;
	if (sp[0].o != (frame[1].o)) goto label_74;
	}
	{
	LINE_NUMBER(1524);
	((java_util_concurrent_locks_StampedLock$WNode *) NULL_CHECK((frame[5].o)))->F_next = (jref) (frame[6].o);
	}
label_74:;
	{
	LINE_NUMBER(1525);
	monitorExit(ctx, (frame[8].o));
	}
	popExceptionFrame(frameRef);
	goto label_76;
label_23:;
label_26: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_23; }
	}
	{
	sp -= 1;
	frame[12].o = sp[0].o;
	monitorExit(ctx, (frame[8].o));
	}
	popExceptionFrame(frameRef);
	INST_ALOAD(12);
	INST_ATHROW();
	label_76:;
	{
	LINE_NUMBER(1526);
	if ((frame[6].o) == nullptr) goto label_77;
	}
	{
	sp[0].o = (jobject)((java_util_concurrent_locks_StampedLock$WNode *) NULL_CHECK((frame[6].o)))->F_thread;
	frame[4].o = sp[0].o;
	if (sp[0].o == nullptr) goto label_77;
	}
	{
	LINE_NUMBER(1528);
	((java_util_concurrent_locks_StampedLock$WNode *) NULL_CHECK((frame[6].o)))->F_thread = (jref) (jobject(nullptr));
	LINE_NUMBER(1529);
	SM_java_util_concurrent_locks_LockSupport_unpark_java_lang_Thread(ctx, (frame[4].o));
	}
label_77:;
	{
	LINE_NUMBER(1531);
	if (((jint)((java_util_concurrent_locks_StampedLock$WNode *) NULL_CHECK((frame[5].o)))->F_status) != (jint(1))) goto label_34;
	}
	{
	sp[0].o = (jobject)((java_util_concurrent_locks_StampedLock$WNode *) NULL_CHECK((frame[5].o)))->F_prev;
	frame[7].o = sp[0].o;
	if (sp[0].o != nullptr) goto label_82;
	}
	LINE_NUMBER(1532);
	goto label_34;
label_82:;
	{
	LINE_NUMBER(1533);
	((java_util_concurrent_locks_StampedLock$WNode *) NULL_CHECK((frame[1].o)))->F_prev = (jref) (frame[7].o);
	LINE_NUMBER(1534);
	sp[0].o = frame[0].o;
	frame[8].o = sp[0].o;
	monitorEnter(ctx, sp[0].o);
	}
label_30: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_29; }
	}
	{
	LINE_NUMBER(1535);
	sp[0].o = (jobject)((java_util_concurrent_locks_StampedLock$WNode *) NULL_CHECK((frame[7].o)))->F_next;
	if (sp[0].o != (frame[5].o)) goto label_85;
	}
	{
	LINE_NUMBER(1536);
	((java_util_concurrent_locks_StampedLock$WNode *) NULL_CHECK((frame[7].o)))->F_next = (jref) (frame[6].o);
	}
label_85:;
	{
	LINE_NUMBER(1537);
	monitorExit(ctx, (frame[8].o));
	}
	popExceptionFrame(frameRef);
	goto label_87;
label_29:;
label_32: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_29; }
	}
	{
	sp -= 1;
	frame[13].o = sp[0].o;
	monitorExit(ctx, (frame[8].o));
	}
	popExceptionFrame(frameRef);
	INST_ALOAD(13);
	INST_ATHROW();
	label_87:;
	{
	LINE_NUMBER(1539);
	frame[5].o = (frame[7].o);
	LINE_NUMBER(1540);
	goto label_53;
	}
label_34:;
	{
	LINE_NUMBER(1544);
	sp[0].o = (jobject)((java_util_concurrent_locks_StampedLock *) NULL_CHECK((frame[0].o)))->F_whead;
	frame[4].o = sp[0].o;
	if (sp[0].o == nullptr) goto label_90;
	}
	{
	LINE_NUMBER(1546);
	sp[0].o = (jobject)((java_util_concurrent_locks_StampedLock$WNode *) NULL_CHECK((frame[4].o)))->F_next;
	frame[7].o = sp[0].o;
	if (sp[0].o == nullptr) goto label_93;
	}
	{
	if (((jint)((java_util_concurrent_locks_StampedLock$WNode *) NULL_CHECK((frame[7].o)))->F_status) != (jint(1))) goto label_94;
	}
label_93:;
	{
	LINE_NUMBER(1547);
	sp[0].o = (jobject)((java_util_concurrent_locks_StampedLock *) NULL_CHECK((frame[0].o)))->F_wtail;
	frame[8].o = sp[0].o;
	}
label_95:;
	INST_ALOAD(8);
	if ((--sp)->o == nullptr) goto label_94;
	{
	if ((frame[8].o) == (frame[4].o)) goto label_94;
	}
	{
	LINE_NUMBER(1548);
	if (((jint)((java_util_concurrent_locks_StampedLock$WNode *) NULL_CHECK((frame[8].o)))->F_status) > 0) goto label_97;
	}
	{
	LINE_NUMBER(1549);
	frame[7].o = (frame[8].o);
	}
label_97:;
	{
	LINE_NUMBER(1547);
	sp[0].o = (jobject)((java_util_concurrent_locks_StampedLock$WNode *) NULL_CHECK((frame[8].o)))->F_prev;
	frame[8].o = sp[0].o;
	goto label_95;
	}
label_94:;
	{
	LINE_NUMBER(1551);
	sp[0].o = frame[4].o;
	sp[1].o = (jobject)((java_util_concurrent_locks_StampedLock *) NULL_CHECK((frame[0].o)))->F_whead;
	if (sp[0].o != sp[1].o) goto label_99;
	}
	{
	LINE_NUMBER(1552);
	if ((frame[7].o) == nullptr) goto label_90;
	}
	{
	if (((jint)((java_util_concurrent_locks_StampedLock$WNode *) NULL_CHECK((frame[4].o)))->F_status) != 0) goto label_90;
	}
	{
	jlong temp0 = (jlong)((java_util_concurrent_locks_StampedLock *) NULL_CHECK((frame[0].o)))->F_state;
	frame[5].l = temp0;
	if ((longCompare((temp0 & (jlong(255ll))), (jlong(128ll)))) == 0) goto label_90;
	}
	{
	if ((longCompare((frame[5].l), (jlong(0)))) == 0) goto label_102;
	}
	{
	if (((jint)((java_util_concurrent_locks_StampedLock$WNode *) NULL_CHECK((frame[7].o)))->F_mode) != 0) goto label_90;
	}
label_102:;
	{
	LINE_NUMBER(1555);
	M_java_util_concurrent_locks_StampedLock_release_java_util_concurrent_locks_StampedLock$WNode(ctx, (frame[0].o), (frame[4].o));
	goto label_90;
	}
label_99:;
	LINE_NUMBER(1558);
	goto label_34;
label_90:;
	{
	LINE_NUMBER(1559);
	if ((frame[3].i) != 0) goto label_103;
	}
	sp->i = (jint)SM_java_lang_Thread_interrupted_R_boolean(ctx);
	sp++;
	if ((--sp)->i == 0) goto label_104;
label_103:;
	INST_LCONST(1);
	goto label_105;
label_104:;
	INST_LCONST(0);
label_105:;
	popStackFrame(ctx);
	INST_LRETURN();

	popStackFrame(ctx);
}

void clinit_java_util_concurrent_locks_StampedLock(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	SF_java_util_concurrent_locks_StampedLock_serialVersionUID = jlong(-6001602636862214147ll);
	SF_java_util_concurrent_locks_StampedLock_OVERFLOW_YIELD_RATE = jint(7);
	SF_java_util_concurrent_locks_StampedLock_LG_READERS = jint(7);
	SF_java_util_concurrent_locks_StampedLock_RUNIT = jlong(1ll);
	SF_java_util_concurrent_locks_StampedLock_WBIT = jlong(128ll);
	SF_java_util_concurrent_locks_StampedLock_RBITS = jlong(127ll);
	SF_java_util_concurrent_locks_StampedLock_RFULL = jlong(126ll);
	SF_java_util_concurrent_locks_StampedLock_ABITS = jlong(255ll);
	SF_java_util_concurrent_locks_StampedLock_SBITS = jlong(-128ll);
	SF_java_util_concurrent_locks_StampedLock_ORIGIN = jlong(256ll);
	SF_java_util_concurrent_locks_StampedLock_INTERRUPTED = jlong(1ll);
	SF_java_util_concurrent_locks_StampedLock_WAITING = jint(-1);
	SF_java_util_concurrent_locks_StampedLock_CANCELLED = jint(1);
	SF_java_util_concurrent_locks_StampedLock_RMODE = jint(0);
	SF_java_util_concurrent_locks_StampedLock_WMODE = jint(1);
	jtype frame[2];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/concurrent/locks/StampedLock:<clinit>", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_util_concurrent_locks_StampedLock(ctx);
	{
	LINE_NUMBER(315);
	sp[0].o = (jobject)SM_java_lang_Runtime_getRuntime_R_java_lang_Runtime(ctx);
	jint temp0 = (jint)((func_java_lang_Runtime_availableProcessors_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_Runtime_availableProcessors_R_int])(ctx, sp[0].o);
	clinit_java_util_concurrent_locks_StampedLock(ctx);
	SF_java_util_concurrent_locks_StampedLock_NCPU = temp0;
	LINE_NUMBER(318);
	if ((clinit_java_util_concurrent_locks_StampedLock(ctx), (jint)SF_java_util_concurrent_locks_StampedLock_NCPU) <= (jint(1))) goto label_2;
	}
	INST_BIPUSH(64);
	goto label_3;
label_2:;
	INST_ICONST(1);
label_3:;
	{
	sp -= 1;
	clinit_java_util_concurrent_locks_StampedLock(ctx);
	SF_java_util_concurrent_locks_StampedLock_SPINS = sp[0].i;
	LINE_NUMBER(321);
	if ((clinit_java_util_concurrent_locks_StampedLock(ctx), (jint)SF_java_util_concurrent_locks_StampedLock_NCPU) <= (jint(1))) goto label_5;
	}
	INST_SIPUSH(1024);
	goto label_6;
label_5:;
	INST_ICONST(1);
label_6:;
	{
	sp -= 1;
	clinit_java_util_concurrent_locks_StampedLock(ctx);
	SF_java_util_concurrent_locks_StampedLock_HEAD_SPINS = sp[0].i;
	LINE_NUMBER(324);
	if ((clinit_java_util_concurrent_locks_StampedLock(ctx), (jint)SF_java_util_concurrent_locks_StampedLock_NCPU) <= (jint(1))) goto label_8;
	}
	(sp++)->i = jint(65536);
	goto label_9;
label_8:;
	INST_ICONST(1);
label_9:;
	clinit_java_util_concurrent_locks_StampedLock(ctx);
	SF_java_util_concurrent_locks_StampedLock_MAX_HEAD_SPINS = (--sp)->i;
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void *vtable_java_util_concurrent_locks_StampedLock[] {
	(void *) M_java_lang_Object_hashCode_R_int,
	(void *) M_java_lang_Object_equals_java_lang_Object_R_boolean,
	(void *) M_java_lang_Object_clone_R_java_lang_Object,
	(void *) M_java_lang_Object_getClass_R_java_lang_Class,
	(void *) M_java_util_concurrent_locks_StampedLock_toString_R_java_lang_String,
	(void *) M_java_lang_Object_finalize,
	(void *) M_java_lang_Object_notify,
	(void *) M_java_lang_Object_notifyAll,
	(void *) M_java_lang_Object_wait,
	(void *) M_java_lang_Object_wait_long,
	(void *) M_java_lang_Object_wait_long_int,
	(void *) M_java_util_concurrent_locks_StampedLock_casState_long_long_R_boolean,
	(void *) M_java_util_concurrent_locks_StampedLock_tryWriteLock_long_R_long,
	(void *) M_java_util_concurrent_locks_StampedLock_writeLock_R_long,
	(void *) M_java_util_concurrent_locks_StampedLock_tryWriteLock_R_long,
	(void *) M_java_util_concurrent_locks_StampedLock_tryWriteLock_long_java_util_concurrent_TimeUnit_R_long,
	(void *) M_java_util_concurrent_locks_StampedLock_writeLockInterruptibly_R_long,
	(void *) M_java_util_concurrent_locks_StampedLock_readLock_R_long,
	(void *) M_java_util_concurrent_locks_StampedLock_tryReadLock_R_long,
	(void *) M_java_util_concurrent_locks_StampedLock_tryReadLock_long_java_util_concurrent_TimeUnit_R_long,
	(void *) M_java_util_concurrent_locks_StampedLock_readLockInterruptibly_R_long,
	(void *) M_java_util_concurrent_locks_StampedLock_tryOptimisticRead_R_long,
	(void *) M_java_util_concurrent_locks_StampedLock_validate_long_R_boolean,
	(void *) M_java_util_concurrent_locks_StampedLock_unlockWriteInternal_long_R_long,
	(void *) M_java_util_concurrent_locks_StampedLock_unlockWrite_long,
	(void *) M_java_util_concurrent_locks_StampedLock_unlockRead_long,
	(void *) M_java_util_concurrent_locks_StampedLock_unlock_long,
	(void *) M_java_util_concurrent_locks_StampedLock_tryConvertToWriteLock_long_R_long,
	(void *) M_java_util_concurrent_locks_StampedLock_tryConvertToReadLock_long_R_long,
	(void *) M_java_util_concurrent_locks_StampedLock_tryConvertToOptimisticRead_long_R_long,
	(void *) M_java_util_concurrent_locks_StampedLock_tryUnlockWrite_R_boolean,
	(void *) M_java_util_concurrent_locks_StampedLock_tryUnlockRead_R_boolean,
	(void *) M_java_util_concurrent_locks_StampedLock_getReadLockCount_long_R_int,
	(void *) M_java_util_concurrent_locks_StampedLock_isWriteLocked_R_boolean,
	(void *) M_java_util_concurrent_locks_StampedLock_isReadLocked_R_boolean,
	(void *) M_java_util_concurrent_locks_StampedLock_getReadLockCount_R_int,
	(void *) M_java_util_concurrent_locks_StampedLock_asReadLock_R_java_util_concurrent_locks_Lock,
	(void *) M_java_util_concurrent_locks_StampedLock_asWriteLock_R_java_util_concurrent_locks_Lock,
	(void *) M_java_util_concurrent_locks_StampedLock_asReadWriteLock_R_java_util_concurrent_locks_ReadWriteLock,
	(void *) M_java_util_concurrent_locks_StampedLock_unstampedUnlockWrite,
	(void *) M_java_util_concurrent_locks_StampedLock_unstampedUnlockRead,
	(void *) M_java_util_concurrent_locks_StampedLock_readObject_java_io_ObjectInputStream,
	(void *) M_java_util_concurrent_locks_StampedLock_tryIncReaderOverflow_long_R_long,
	(void *) M_java_util_concurrent_locks_StampedLock_tryDecReaderOverflow_long_R_long,
	(void *) M_java_util_concurrent_locks_StampedLock_release_java_util_concurrent_locks_StampedLock$WNode,
	(void *) M_java_util_concurrent_locks_StampedLock_acquireWrite_boolean_long_R_long,
	(void *) M_java_util_concurrent_locks_StampedLock_acquireRead_boolean_long_R_long,
	(void *) M_java_util_concurrent_locks_StampedLock_cancelWaiter_java_util_concurrent_locks_StampedLock$WNode_java_util_concurrent_locks_StampedLock$WNode_boolean_R_long,
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
	{ "casState", "(JJ)Z" },
	{ "tryWriteLock", "(J)J" },
	{ "writeLock", "()J" },
	{ "tryWriteLock", "()J" },
	{ "tryWriteLock", "(JLjava/util/concurrent/TimeUnit;)J" },
	{ "writeLockInterruptibly", "()J" },
	{ "readLock", "()J" },
	{ "tryReadLock", "()J" },
	{ "tryReadLock", "(JLjava/util/concurrent/TimeUnit;)J" },
	{ "readLockInterruptibly", "()J" },
	{ "tryOptimisticRead", "()J" },
	{ "validate", "(J)Z" },
	{ "unlockWriteInternal", "(J)J" },
	{ "unlockWrite", "(J)V" },
	{ "unlockRead", "(J)V" },
	{ "unlock", "(J)V" },
	{ "tryConvertToWriteLock", "(J)J" },
	{ "tryConvertToReadLock", "(J)J" },
	{ "tryConvertToOptimisticRead", "(J)J" },
	{ "tryUnlockWrite", "()Z" },
	{ "tryUnlockRead", "()Z" },
	{ "getReadLockCount", "(J)I" },
	{ "isWriteLocked", "()Z" },
	{ "isReadLocked", "()Z" },
	{ "getReadLockCount", "()I" },
	{ "asReadLock", "()Ljava/util/concurrent/locks/Lock;" },
	{ "asWriteLock", "()Ljava/util/concurrent/locks/Lock;" },
	{ "asReadWriteLock", "()Ljava/util/concurrent/locks/ReadWriteLock;" },
	{ "unstampedUnlockWrite", "()V" },
	{ "unstampedUnlockRead", "()V" },
	{ "readObject", "(Ljava/io/ObjectInputStream;)V" },
	{ "tryIncReaderOverflow", "(J)J" },
	{ "tryDecReaderOverflow", "(J)J" },
	{ "release", "(Ljava/util/concurrent/locks/StampedLock$WNode;)V" },
	{ "acquireWrite", "(ZJ)J" },
	{ "acquireRead", "(ZJ)J" },
	{ "cancelWaiter", "(Ljava/util/concurrent/locks/StampedLock$WNode;Ljava/util/concurrent/locks/StampedLock$WNode;Z)J" },
};

static jclass interfaces[] { &class_java_io_Serializable, };

static jclass innerClasses[] {
	&class_java_util_concurrent_locks_StampedLock$WNode,
	&class_java_util_concurrent_locks_StampedLock$ReadLockView,
	&class_java_util_concurrent_locks_StampedLock$WriteLockView,
	&class_java_util_concurrent_locks_StampedLock$ReadWriteLockView,
};

static FieldMetadata fields[] {
	{ "serialVersionUID", &class_long, (intptr_t) &SF_java_util_concurrent_locks_StampedLock_serialVersionUID, "J", 26 },
	{ "NCPU", &class_int, (intptr_t) &SF_java_util_concurrent_locks_StampedLock_NCPU, "I", 26 },
	{ "SPINS", &class_int, (intptr_t) &SF_java_util_concurrent_locks_StampedLock_SPINS, "I", 26 },
	{ "HEAD_SPINS", &class_int, (intptr_t) &SF_java_util_concurrent_locks_StampedLock_HEAD_SPINS, "I", 26 },
	{ "MAX_HEAD_SPINS", &class_int, (intptr_t) &SF_java_util_concurrent_locks_StampedLock_MAX_HEAD_SPINS, "I", 26 },
	{ "OVERFLOW_YIELD_RATE", &class_int, (intptr_t) &SF_java_util_concurrent_locks_StampedLock_OVERFLOW_YIELD_RATE, "I", 26 },
	{ "LG_READERS", &class_int, (intptr_t) &SF_java_util_concurrent_locks_StampedLock_LG_READERS, "I", 26 },
	{ "RUNIT", &class_long, (intptr_t) &SF_java_util_concurrent_locks_StampedLock_RUNIT, "J", 26 },
	{ "WBIT", &class_long, (intptr_t) &SF_java_util_concurrent_locks_StampedLock_WBIT, "J", 26 },
	{ "RBITS", &class_long, (intptr_t) &SF_java_util_concurrent_locks_StampedLock_RBITS, "J", 26 },
	{ "RFULL", &class_long, (intptr_t) &SF_java_util_concurrent_locks_StampedLock_RFULL, "J", 26 },
	{ "ABITS", &class_long, (intptr_t) &SF_java_util_concurrent_locks_StampedLock_ABITS, "J", 26 },
	{ "SBITS", &class_long, (intptr_t) &SF_java_util_concurrent_locks_StampedLock_SBITS, "J", 26 },
	{ "ORIGIN", &class_long, (intptr_t) &SF_java_util_concurrent_locks_StampedLock_ORIGIN, "J", 26 },
	{ "INTERRUPTED", &class_long, (intptr_t) &SF_java_util_concurrent_locks_StampedLock_INTERRUPTED, "J", 26 },
	{ "WAITING", &class_int, (intptr_t) &SF_java_util_concurrent_locks_StampedLock_WAITING, "I", 26 },
	{ "CANCELLED", &class_int, (intptr_t) &SF_java_util_concurrent_locks_StampedLock_CANCELLED, "I", 26 },
	{ "RMODE", &class_int, (intptr_t) &SF_java_util_concurrent_locks_StampedLock_RMODE, "I", 26 },
	{ "WMODE", &class_int, (intptr_t) &SF_java_util_concurrent_locks_StampedLock_WMODE, "I", 26 },
	{ "whead", &class_java_util_concurrent_locks_StampedLock$WNode, offsetof(java_util_concurrent_locks_StampedLock, F_whead), "Ljava/util/concurrent/locks/StampedLock$WNode;", 194 },
	{ "wtail", &class_java_util_concurrent_locks_StampedLock$WNode, offsetof(java_util_concurrent_locks_StampedLock, F_wtail), "Ljava/util/concurrent/locks/StampedLock$WNode;", 194 },
	{ "readLockView", &class_java_util_concurrent_locks_StampedLock$ReadLockView, offsetof(java_util_concurrent_locks_StampedLock, F_readLockView), "Ljava/util/concurrent/locks/StampedLock$ReadLockView;", 128 },
	{ "writeLockView", &class_java_util_concurrent_locks_StampedLock$WriteLockView, offsetof(java_util_concurrent_locks_StampedLock, F_writeLockView), "Ljava/util/concurrent/locks/StampedLock$WriteLockView;", 128 },
	{ "readWriteLockView", &class_java_util_concurrent_locks_StampedLock$ReadWriteLockView, offsetof(java_util_concurrent_locks_StampedLock, F_readWriteLockView), "Ljava/util/concurrent/locks/StampedLock$ReadWriteLockView;", 128 },
	{ "state", &class_long, offsetof(java_util_concurrent_locks_StampedLock, F_state), "J", 194 },
	{ "readerOverflow", &class_int, offsetof(java_util_concurrent_locks_StampedLock, F_readerOverflow), "I", 130 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_java_util_concurrent_locks_StampedLock, 0, "()V", 1 },
	{ "casState", (intptr_t) M_java_util_concurrent_locks_StampedLock_casState_long_long_R_boolean, VTABLE_java_util_concurrent_locks_StampedLock_casState_long_long_R_boolean, "(JJ)Z", 34 },
	{ "tryWriteLock", (intptr_t) M_java_util_concurrent_locks_StampedLock_tryWriteLock_long_R_long, VTABLE_java_util_concurrent_locks_StampedLock_tryWriteLock_long_R_long, "(J)J", 34 },
	{ "writeLock", (intptr_t) M_java_util_concurrent_locks_StampedLock_writeLock_R_long, VTABLE_java_util_concurrent_locks_StampedLock_writeLock_R_long, "()J", 1 },
	{ "tryWriteLock", (intptr_t) M_java_util_concurrent_locks_StampedLock_tryWriteLock_R_long, VTABLE_java_util_concurrent_locks_StampedLock_tryWriteLock_R_long, "()J", 1 },
	{ "tryWriteLock", (intptr_t) M_java_util_concurrent_locks_StampedLock_tryWriteLock_long_java_util_concurrent_TimeUnit_R_long, VTABLE_java_util_concurrent_locks_StampedLock_tryWriteLock_long_java_util_concurrent_TimeUnit_R_long, "(JLjava/util/concurrent/TimeUnit;)J", 1 },
	{ "writeLockInterruptibly", (intptr_t) M_java_util_concurrent_locks_StampedLock_writeLockInterruptibly_R_long, VTABLE_java_util_concurrent_locks_StampedLock_writeLockInterruptibly_R_long, "()J", 1 },
	{ "readLock", (intptr_t) M_java_util_concurrent_locks_StampedLock_readLock_R_long, VTABLE_java_util_concurrent_locks_StampedLock_readLock_R_long, "()J", 1 },
	{ "tryReadLock", (intptr_t) M_java_util_concurrent_locks_StampedLock_tryReadLock_R_long, VTABLE_java_util_concurrent_locks_StampedLock_tryReadLock_R_long, "()J", 1 },
	{ "tryReadLock", (intptr_t) M_java_util_concurrent_locks_StampedLock_tryReadLock_long_java_util_concurrent_TimeUnit_R_long, VTABLE_java_util_concurrent_locks_StampedLock_tryReadLock_long_java_util_concurrent_TimeUnit_R_long, "(JLjava/util/concurrent/TimeUnit;)J", 1 },
	{ "readLockInterruptibly", (intptr_t) M_java_util_concurrent_locks_StampedLock_readLockInterruptibly_R_long, VTABLE_java_util_concurrent_locks_StampedLock_readLockInterruptibly_R_long, "()J", 1 },
	{ "tryOptimisticRead", (intptr_t) M_java_util_concurrent_locks_StampedLock_tryOptimisticRead_R_long, VTABLE_java_util_concurrent_locks_StampedLock_tryOptimisticRead_R_long, "()J", 1 },
	{ "validate", (intptr_t) M_java_util_concurrent_locks_StampedLock_validate_long_R_boolean, VTABLE_java_util_concurrent_locks_StampedLock_validate_long_R_boolean, "(J)Z", 33 },
	{ "unlockWriteState", (intptr_t) SM_java_util_concurrent_locks_StampedLock_unlockWriteState_long_R_long, 0, "(J)J", 10 },
	{ "unlockWriteInternal", (intptr_t) M_java_util_concurrent_locks_StampedLock_unlockWriteInternal_long_R_long, VTABLE_java_util_concurrent_locks_StampedLock_unlockWriteInternal_long_R_long, "(J)J", 34 },
	{ "unlockWrite", (intptr_t) M_java_util_concurrent_locks_StampedLock_unlockWrite_long, VTABLE_java_util_concurrent_locks_StampedLock_unlockWrite_long, "(J)V", 1 },
	{ "unlockRead", (intptr_t) M_java_util_concurrent_locks_StampedLock_unlockRead_long, VTABLE_java_util_concurrent_locks_StampedLock_unlockRead_long, "(J)V", 1 },
	{ "unlock", (intptr_t) M_java_util_concurrent_locks_StampedLock_unlock_long, VTABLE_java_util_concurrent_locks_StampedLock_unlock_long, "(J)V", 1 },
	{ "tryConvertToWriteLock", (intptr_t) M_java_util_concurrent_locks_StampedLock_tryConvertToWriteLock_long_R_long, VTABLE_java_util_concurrent_locks_StampedLock_tryConvertToWriteLock_long_R_long, "(J)J", 1 },
	{ "tryConvertToReadLock", (intptr_t) M_java_util_concurrent_locks_StampedLock_tryConvertToReadLock_long_R_long, VTABLE_java_util_concurrent_locks_StampedLock_tryConvertToReadLock_long_R_long, "(J)J", 1 },
	{ "tryConvertToOptimisticRead", (intptr_t) M_java_util_concurrent_locks_StampedLock_tryConvertToOptimisticRead_long_R_long, VTABLE_java_util_concurrent_locks_StampedLock_tryConvertToOptimisticRead_long_R_long, "(J)J", 33 },
	{ "tryUnlockWrite", (intptr_t) M_java_util_concurrent_locks_StampedLock_tryUnlockWrite_R_boolean, VTABLE_java_util_concurrent_locks_StampedLock_tryUnlockWrite_R_boolean, "()Z", 1 },
	{ "tryUnlockRead", (intptr_t) M_java_util_concurrent_locks_StampedLock_tryUnlockRead_R_boolean, VTABLE_java_util_concurrent_locks_StampedLock_tryUnlockRead_R_boolean, "()Z", 1 },
	{ "getReadLockCount", (intptr_t) M_java_util_concurrent_locks_StampedLock_getReadLockCount_long_R_int, VTABLE_java_util_concurrent_locks_StampedLock_getReadLockCount_long_R_int, "(J)I", 2 },
	{ "isWriteLocked", (intptr_t) M_java_util_concurrent_locks_StampedLock_isWriteLocked_R_boolean, VTABLE_java_util_concurrent_locks_StampedLock_isWriteLocked_R_boolean, "()Z", 1 },
	{ "isReadLocked", (intptr_t) M_java_util_concurrent_locks_StampedLock_isReadLocked_R_boolean, VTABLE_java_util_concurrent_locks_StampedLock_isReadLocked_R_boolean, "()Z", 1 },
	{ "getReadLockCount", (intptr_t) M_java_util_concurrent_locks_StampedLock_getReadLockCount_R_int, VTABLE_java_util_concurrent_locks_StampedLock_getReadLockCount_R_int, "()I", 1 },
	{ "toString", (intptr_t) M_java_util_concurrent_locks_StampedLock_toString_R_java_lang_String, VTABLE_java_util_concurrent_locks_StampedLock_toString_R_java_lang_String, "()Ljava/lang/String;", 1 },
	{ "asReadLock", (intptr_t) M_java_util_concurrent_locks_StampedLock_asReadLock_R_java_util_concurrent_locks_Lock, VTABLE_java_util_concurrent_locks_StampedLock_asReadLock_R_java_util_concurrent_locks_Lock, "()Ljava/util/concurrent/locks/Lock;", 1 },
	{ "asWriteLock", (intptr_t) M_java_util_concurrent_locks_StampedLock_asWriteLock_R_java_util_concurrent_locks_Lock, VTABLE_java_util_concurrent_locks_StampedLock_asWriteLock_R_java_util_concurrent_locks_Lock, "()Ljava/util/concurrent/locks/Lock;", 1 },
	{ "asReadWriteLock", (intptr_t) M_java_util_concurrent_locks_StampedLock_asReadWriteLock_R_java_util_concurrent_locks_ReadWriteLock, VTABLE_java_util_concurrent_locks_StampedLock_asReadWriteLock_R_java_util_concurrent_locks_ReadWriteLock, "()Ljava/util/concurrent/locks/ReadWriteLock;", 1 },
	{ "unstampedUnlockWrite", (intptr_t) M_java_util_concurrent_locks_StampedLock_unstampedUnlockWrite, VTABLE_java_util_concurrent_locks_StampedLock_unstampedUnlockWrite, "()V", 16 },
	{ "unstampedUnlockRead", (intptr_t) M_java_util_concurrent_locks_StampedLock_unstampedUnlockRead, VTABLE_java_util_concurrent_locks_StampedLock_unstampedUnlockRead, "()V", 16 },
	{ "readObject", (intptr_t) M_java_util_concurrent_locks_StampedLock_readObject_java_io_ObjectInputStream, VTABLE_java_util_concurrent_locks_StampedLock_readObject_java_io_ObjectInputStream, "(Ljava/io/ObjectInputStream;)V", 34 },
	{ "tryIncReaderOverflow", (intptr_t) M_java_util_concurrent_locks_StampedLock_tryIncReaderOverflow_long_R_long, VTABLE_java_util_concurrent_locks_StampedLock_tryIncReaderOverflow_long_R_long, "(J)J", 34 },
	{ "tryDecReaderOverflow", (intptr_t) M_java_util_concurrent_locks_StampedLock_tryDecReaderOverflow_long_R_long, VTABLE_java_util_concurrent_locks_StampedLock_tryDecReaderOverflow_long_R_long, "(J)J", 34 },
	{ "release", (intptr_t) M_java_util_concurrent_locks_StampedLock_release_java_util_concurrent_locks_StampedLock$WNode, VTABLE_java_util_concurrent_locks_StampedLock_release_java_util_concurrent_locks_StampedLock$WNode, "(Ljava/util/concurrent/locks/StampedLock$WNode;)V", 34 },
	{ "acquireWrite", (intptr_t) M_java_util_concurrent_locks_StampedLock_acquireWrite_boolean_long_R_long, VTABLE_java_util_concurrent_locks_StampedLock_acquireWrite_boolean_long_R_long, "(ZJ)J", 2 },
	{ "acquireRead", (intptr_t) M_java_util_concurrent_locks_StampedLock_acquireRead_boolean_long_R_long, VTABLE_java_util_concurrent_locks_StampedLock_acquireRead_boolean_long_R_long, "(ZJ)J", 2 },
	{ "cancelWaiter", (intptr_t) M_java_util_concurrent_locks_StampedLock_cancelWaiter_java_util_concurrent_locks_StampedLock$WNode_java_util_concurrent_locks_StampedLock$WNode_boolean_R_long, VTABLE_java_util_concurrent_locks_StampedLock_cancelWaiter_java_util_concurrent_locks_StampedLock$WNode_java_util_concurrent_locks_StampedLock$WNode_boolean_R_long, "(Ljava/util/concurrent/locks/StampedLock$WNode;Ljava/util/concurrent/locks/StampedLock$WNode;Z)J", 2 },
	{ "<clinit>", (intptr_t) clinit_java_util_concurrent_locks_StampedLock, 0, "()V", 8 },
};

Class class_java_util_concurrent_locks_StampedLock{
		.nativeName = (intptr_t) "java/util/concurrent/locks/StampedLock",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(java_util_concurrent_locks_StampedLock),
		.classVtable = (intptr_t) vtable_java_util_concurrent_locks_StampedLock,
		.staticInitializer = (intptr_t) clinit_java_util_concurrent_locks_StampedLock,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_java_util_concurrent_locks_StampedLock,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 4,
		.nativeInnerClasses = (intptr_t) innerClasses,
		.access = 33,
		.interfaceCount = 1,
		.nativeInterfaces = (intptr_t) interfaces,
		.fieldCount = 26,
		.nativeFields = (intptr_t) fields,
		.methodCount = 41,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 48,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_java_util_concurrent_locks_StampedLock = registerClass(&class_java_util_concurrent_locks_StampedLock);

}
