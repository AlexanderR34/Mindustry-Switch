#include "java/util/concurrent/ForkJoinTask.h"
#include "java/util/concurrent/ExecutionException.h"
#include "java/util/concurrent/ForkJoinTask_RunnableExecuteAction.h"
#include "java/lang/Error.h"
#include "java/lang/InterruptedException.h"
#include "java/util/concurrent/ForkJoinTask_ExceptionNode.h"
#include "java/util/concurrent/CountedCompleter.h"
#include "java/util/concurrent/Future.h"
#include "java/io/ObjectOutputStream.h"
#include "java/util/RandomAccess.h"
#include "java/lang/reflect/Constructor.h"
#include "java/lang/Runnable.h"
#include "java/util/concurrent/ForkJoinWorkerThread.h"
#include "java/util/Collection.h"
#include "java/util/concurrent/ForkJoinPool_WorkQueue.h"
#include "java/lang/String.h"
#include "java/util/concurrent/ForkJoinTask.h"
#include "java/lang/NullPointerException.h"
#include "java/util/concurrent/ForkJoinTask_AdaptedRunnableAction.h"
#include "java/util/concurrent/ForkJoinTask_AdaptedRunnable.h"
#include "java/lang/Throwable.h"
#include "java/io/ObjectInputStream.h"
#include "java/util/concurrent/locks/ReentrantLock.h"
#include "java/lang/Thread.h"
#include "java/lang/Exception.h"
#include "java/util/concurrent/TimeUnit.h"
#include "java/util/concurrent/Callable.h"
#include "java/lang/Object.h"
#include "java/io/Serializable.h"
#include "java/util/concurrent/ForkJoinTask_AdaptedCallable.h"
#include "java/util/concurrent/CancellationException.h"
#include "java/util/concurrent/TimeoutException.h"
#include "java/lang/ref/WeakReference.h"
#include "java/lang/RuntimeException.h"
#include "java/lang/Class.h"
#include "java/util/concurrent/ForkJoinPool.h"
#include "java/util/List.h"
#include "java/lang/System.h"

extern "C" {

jint SF_java_util_concurrent_ForkJoinTask_DONE_MASK;
jint SF_java_util_concurrent_ForkJoinTask_NORMAL;
jint SF_java_util_concurrent_ForkJoinTask_CANCELLED;
jint SF_java_util_concurrent_ForkJoinTask_EXCEPTIONAL;
jint SF_java_util_concurrent_ForkJoinTask_SIGNAL;
jint SF_java_util_concurrent_ForkJoinTask_SMASK;
jobject SF_java_util_concurrent_ForkJoinTask_exceptionTable;
jobject SF_java_util_concurrent_ForkJoinTask_exceptionTableLock;
jlong SF_java_util_concurrent_ForkJoinTask_serialVersionUID;

void mark_java_util_concurrent_ForkJoinTask(jobject object, jint mark, jint depth) {
	if (!object) {
		if (SF_java_util_concurrent_ForkJoinTask_exceptionTable)
			((gc_mark_ptr) ((jclass) ((jobject) SF_java_util_concurrent_ForkJoinTask_exceptionTable)->clazz)->markFunction)((jobject) SF_java_util_concurrent_ForkJoinTask_exceptionTable, mark, depth + 1);
		if (SF_java_util_concurrent_ForkJoinTask_exceptionTableLock)
			((gc_mark_ptr) ((jclass) ((jobject) SF_java_util_concurrent_ForkJoinTask_exceptionTableLock)->clazz)->markFunction)((jobject) SF_java_util_concurrent_ForkJoinTask_exceptionTableLock, mark, depth + 1);
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
	auto self = (java_util_concurrent_ForkJoinTask *) object;
}

void init_java_util_concurrent_ForkJoinTask(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/concurrent/ForkJoinTask:<init>", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_util_concurrent_ForkJoinTask(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(205);
	init_java_lang_Object(ctx, (frame[0].o));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jint M_java_util_concurrent_ForkJoinTask_setCompletion_int_R_int(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/concurrent/ForkJoinTask:setCompletion", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, self);

	frame[0].o = self;
	frame[1].i = param0;
label_6:;
	{
	LINE_NUMBER(261);
	jint temp0 = (jint)((java_util_concurrent_ForkJoinTask *) NULL_CHECK((frame[0].o)))->F_status;
	frame[2].i = temp0;
	if (temp0 >= 0) goto label_8;
	}
	{
	LINE_NUMBER(262);
	popStackFrame(ctx, self);
	return (frame[2].i);
	}
label_8:;
	{
	LINE_NUMBER(263);
	if (((jint)((java_util_concurrent_ForkJoinTask *) NULL_CHECK((frame[0].o)))->F_status) != (frame[2].i)) goto label_6;
	}
	{
	LINE_NUMBER(264);
	sp[0].o = frame[0].o;
	((java_util_concurrent_ForkJoinTask *) NULL_CHECK(sp[0].o))->F_status = (((jint)((java_util_concurrent_ForkJoinTask *) NULL_CHECK(sp[0].o))->F_status) | (frame[1].i));
	LINE_NUMBER(265);
	if ((bit_cast<jint>(bit_cast<uint32_t>((frame[2].i)) >> (16))) == 0) goto label_12;
	}
	{
	LINE_NUMBER(266);
	sp[0].o = frame[0].o;
	frame[3].o = sp[0].o;
	monitorEnter(ctx, sp[0].o);
	}
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	((func_java_lang_Object_notifyAll) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_lang_Object_notifyAll])(ctx, (frame[0].o));
	monitorExit(ctx, (frame[3].o));
	}
	popExceptionFrame(frameRef);
	goto label_12;
label_2:;
label_5: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	sp -= 1;
	frame[4].o = sp[0].o;
	monitorExit(ctx, (frame[3].o));
	}
	popExceptionFrame(frameRef);
	INST_ALOAD(4);
	INST_ATHROW();
	label_12:;
	{
	LINE_NUMBER(267);
	popStackFrame(ctx, self);
	return (frame[1].i);
	}

	popStackFrame(ctx);
}

jint M_java_util_concurrent_ForkJoinTask_doExec_R_int(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/concurrent/ForkJoinTask:doExec", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(281);
	jint temp0 = (jint)((java_util_concurrent_ForkJoinTask *) NULL_CHECK((frame[0].o)))->F_status;
	frame[1].i = temp0;
	if (temp0 < 0) goto label_6;
	}
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(283);
	jint temp0 = (jint)((func_java_util_concurrent_ForkJoinTask_exec_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_util_concurrent_ForkJoinTask_exec_R_boolean])(ctx, (frame[0].o));
	frame[2].i = temp0;
	}
	popExceptionFrame(frameRef);
	LINE_NUMBER(286);
	goto label_7;
label_2:;
	{
	sp -= 1;
	LINE_NUMBER(284);
	frame[3].o = sp[0].o;
	LINE_NUMBER(285);
	jint temp0 = (jint)M_java_util_concurrent_ForkJoinTask_setExceptionalCompletion_java_lang_Throwable_R_int(ctx, (frame[0].o), (frame[3].o));
	popStackFrame(ctx);
	return temp0;
	}
label_7:;
	{
	LINE_NUMBER(287);
	if ((frame[2].i) == 0) goto label_6;
	}
	{
	LINE_NUMBER(288);
	jint temp0 = (jint)M_java_util_concurrent_ForkJoinTask_setCompletion_int_R_int(ctx, (frame[0].o), (jint(-268435456)));
	frame[1].i = temp0;
	}
label_6:;
	{
	LINE_NUMBER(290);
	popStackFrame(ctx);
	return (frame[1].i);
	}

	popStackFrame(ctx);
}

void M_java_util_concurrent_ForkJoinTask_internalWait_long(jcontext ctx, jobject self, jlong param0) {
	NULL_CHECK(self);
	jtype frame[10];
	auto stack = &frame[7];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/concurrent/ForkJoinTask:internalWait", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, self);

	frame[0].o = self;
	frame[1].l = param0;
	{
	LINE_NUMBER(301);
	jint temp0 = (jint)((java_util_concurrent_ForkJoinTask *) NULL_CHECK((frame[0].o)))->F_status;
	frame[3].i = temp0;
	if (temp0 < 0) goto label_12;
	}
	{
	LINE_NUMBER(302);
	if (((jint)((java_util_concurrent_ForkJoinTask *) NULL_CHECK((frame[0].o)))->F_status) != (frame[3].i)) goto label_12;
	}
	{
	LINE_NUMBER(303);
	sp[0].o = frame[0].o;
	((java_util_concurrent_ForkJoinTask *) NULL_CHECK(sp[0].o))->F_status = (((jint)((java_util_concurrent_ForkJoinTask *) NULL_CHECK(sp[0].o))->F_status) | (jint(65536)));
	LINE_NUMBER(304);
	sp[0].o = frame[0].o;
	frame[4].o = sp[0].o;
	monitorEnter(ctx, sp[0].o);
	}
label_7: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_6; }
	}
	{
	LINE_NUMBER(305);
	if (((jint)((java_util_concurrent_ForkJoinTask *) NULL_CHECK((frame[0].o)))->F_status) < 0) goto label_16;
	}
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_InterruptedException))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(307);
	((func_java_lang_Object_wait_long) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_lang_Object_wait_long])(ctx, (frame[0].o), (frame[1].l));
	}
	popExceptionFrame(frameRef);
	LINE_NUMBER(309);
	goto label_17;
label_2:;
	{
	sp -= 1;
	LINE_NUMBER(308);
	frame[5].o = sp[0].o;
	LINE_NUMBER(309);
	goto label_17;
	}
label_16:;
	{
	LINE_NUMBER(311);
	((func_java_lang_Object_notifyAll) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_lang_Object_notifyAll])(ctx, (frame[0].o));
	}
label_17:;
	{
	LINE_NUMBER(312);
	monitorExit(ctx, (frame[4].o));
	}
	popExceptionFrame(frameRef);
	goto label_12;
label_6:;
label_9: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_6; }
	}
	{
	sp -= 1;
	frame[6].o = sp[0].o;
	monitorExit(ctx, (frame[4].o));
	}
	popExceptionFrame(frameRef);
	INST_ALOAD(6);
	INST_ATHROW();
	label_12:;
	LINE_NUMBER(315);
	popStackFrame(ctx, self);
	INST_RETURN();

	popStackFrame(ctx);
}

jint M_java_util_concurrent_ForkJoinTask_externalAwaitDone_R_int(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/concurrent/ForkJoinTask:externalAwaitDone", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, self);

	frame[0].o = self;
	{
	LINE_NUMBER(322);
	frame[1].i = (jint(0));
	LINE_NUMBER(326);
	if ((frame[1].i) < 0) goto label_12;
	}
	{
	jint temp0 = (jint)((java_util_concurrent_ForkJoinTask *) NULL_CHECK((frame[0].o)))->F_status;
	frame[1].i = temp0;
	if (temp0 < 0) goto label_12;
	}
	{
	LINE_NUMBER(327);
	frame[2].i = (jint(0));
	}
label_14:;
	{
	LINE_NUMBER(329);
	if (((jint)((java_util_concurrent_ForkJoinTask *) NULL_CHECK((frame[0].o)))->F_status) != (frame[1].i)) goto label_15;
	}
	{
	LINE_NUMBER(330);
	sp[0].o = frame[0].o;
	((java_util_concurrent_ForkJoinTask *) NULL_CHECK(sp[0].o))->F_status = (((jint)((java_util_concurrent_ForkJoinTask *) NULL_CHECK(sp[0].o))->F_status) | (jint(65536)));
	LINE_NUMBER(331);
	sp[0].o = frame[0].o;
	frame[3].o = sp[0].o;
	monitorEnter(ctx, sp[0].o);
	}
label_7: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_6; }
	}
	{
	LINE_NUMBER(332);
	if (((jint)((java_util_concurrent_ForkJoinTask *) NULL_CHECK((frame[0].o)))->F_status) < 0) goto label_18;
	}
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_InterruptedException))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(334);
	((func_java_lang_Object_wait_long) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_lang_Object_wait_long])(ctx, (frame[0].o), (jlong(0)));
	}
	popExceptionFrame(frameRef);
	LINE_NUMBER(337);
	goto label_19;
label_2:;
	{
	sp -= 1;
	LINE_NUMBER(335);
	frame[4].o = sp[0].o;
	LINE_NUMBER(336);
	frame[2].i = (jint(1));
	LINE_NUMBER(337);
	goto label_19;
	}
label_18:;
	{
	LINE_NUMBER(340);
	((func_java_lang_Object_notifyAll) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_lang_Object_notifyAll])(ctx, (frame[0].o));
	}
label_19:;
	{
	LINE_NUMBER(341);
	monitorExit(ctx, (frame[3].o));
	}
	popExceptionFrame(frameRef);
	goto label_15;
label_6:;
label_9: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_6; }
	}
	{
	sp -= 1;
	frame[5].o = sp[0].o;
	monitorExit(ctx, (frame[3].o));
	}
	popExceptionFrame(frameRef);
	INST_ALOAD(5);
	INST_ATHROW();
	label_15:;
	{
	LINE_NUMBER(343);
	jint temp0 = (jint)((java_util_concurrent_ForkJoinTask *) NULL_CHECK((frame[0].o)))->F_status;
	frame[1].i = temp0;
	if (temp0 >= 0) goto label_14;
	}
	{
	LINE_NUMBER(344);
	if ((frame[2].i) == 0) goto label_12;
	}
	{
	LINE_NUMBER(345);
	sp[0].o = (jobject)SM_java_lang_Thread_currentThread_R_java_lang_Thread(ctx);
	((func_java_lang_Thread_interrupt) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_Thread_interrupt])(ctx, sp[0].o);
	}
label_12:;
	{
	LINE_NUMBER(347);
	popStackFrame(ctx, self);
	return (frame[1].i);
	}

	popStackFrame(ctx);
}

jint M_java_util_concurrent_ForkJoinTask_externalInterruptibleAwaitDone_R_int(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/concurrent/ForkJoinTask:externalInterruptibleAwaitDone", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, self);

	frame[0].o = self;
	{
	LINE_NUMBER(355);
	jint temp0 = (jint)SM_java_lang_Thread_interrupted_R_boolean(ctx);
	if (temp0 == 0) goto label_7;
	}
	{
	LINE_NUMBER(356);
	clinit_java_lang_InterruptedException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_InterruptedException);
	init_java_lang_InterruptedException(ctx, sp[0].o);
	throwException(ctx, sp[0].o);	}
label_7:;
	{
	LINE_NUMBER(357);
	jint temp0 = (jint)((java_util_concurrent_ForkJoinTask *) NULL_CHECK((frame[0].o)))->F_status;
	frame[1].i = temp0;
	if (temp0 < 0) goto label_10;
	}
label_11:;
	{
	LINE_NUMBER(363);
	jint temp0 = (jint)((java_util_concurrent_ForkJoinTask *) NULL_CHECK((frame[0].o)))->F_status;
	frame[1].i = temp0;
	if (temp0 < 0) goto label_10;
	}
	{
	LINE_NUMBER(364);
	if (((jint)((java_util_concurrent_ForkJoinTask *) NULL_CHECK((frame[0].o)))->F_status) != (frame[1].i)) goto label_11;
	}
	{
	LINE_NUMBER(365);
	sp[0].o = frame[0].o;
	((java_util_concurrent_ForkJoinTask *) NULL_CHECK(sp[0].o))->F_status = (((jint)((java_util_concurrent_ForkJoinTask *) NULL_CHECK(sp[0].o))->F_status) | (jint(65536)));
	LINE_NUMBER(366);
	sp[0].o = frame[0].o;
	frame[2].o = sp[0].o;
	monitorEnter(ctx, sp[0].o);
	}
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(367);
	if (((jint)((java_util_concurrent_ForkJoinTask *) NULL_CHECK((frame[0].o)))->F_status) < 0) goto label_15;
	}
	{
	LINE_NUMBER(368);
	((func_java_lang_Object_wait_long) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_lang_Object_wait_long])(ctx, (frame[0].o), (jlong(0)));
	goto label_17;
	}
label_15:;
	{
	LINE_NUMBER(370);
	((func_java_lang_Object_notifyAll) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_lang_Object_notifyAll])(ctx, (frame[0].o));
	}
label_17:;
	{
	LINE_NUMBER(371);
	monitorExit(ctx, (frame[2].o));
	}
	popExceptionFrame(frameRef);
	goto label_18;
label_2:;
label_5: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	sp -= 1;
	frame[3].o = sp[0].o;
	monitorExit(ctx, (frame[2].o));
	}
	popExceptionFrame(frameRef);
	INST_ALOAD(3);
	INST_ATHROW();
	label_18:;
	goto label_11;
label_10:;
	{
	LINE_NUMBER(375);
	popStackFrame(ctx, self);
	return (frame[1].i);
	}

	popStackFrame(ctx);
}

jint M_java_util_concurrent_ForkJoinTask_doJoin_R_int(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[10];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/concurrent/ForkJoinTask:doJoin", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(387);
	jint temp0 = (jint)((java_util_concurrent_ForkJoinTask *) NULL_CHECK((frame[0].o)))->F_status;
	frame[1].i = temp0;
	if (temp0 >= 0) goto label_2;
	}
	INST_ILOAD(1);
	goto label_3;
label_2:;
	{
	LINE_NUMBER(388);
	sp[0].o = (jobject)SM_java_lang_Thread_currentThread_R_java_lang_Thread(ctx);
	frame[2].o = sp[0].o;
	if ((isInstance(ctx, sp[0].o, &class_java_util_concurrent_ForkJoinWorkerThread)) == 0) goto label_5;
	}
	{
	LINE_NUMBER(390);
	sp[0].o = checkCast(ctx, &class_java_util_concurrent_ForkJoinWorkerThread, (frame[2].o));
	frame[3].o = sp[0].o;
	sp[0].o = (jobject)((java_util_concurrent_ForkJoinWorkerThread *) NULL_CHECK(sp[0].o))->F_workQueue;
	frame[4].o = sp[0].o;
	jint temp0 = (jint)((func_java_util_concurrent_ForkJoinPool$WorkQueue_tryUnpush_java_util_concurrent_ForkJoinTask_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_concurrent_ForkJoinPool$WorkQueue_tryUnpush_java_util_concurrent_ForkJoinTask_R_boolean])(ctx, sp[0].o, (frame[0].o));
	if (temp0 == 0) goto label_9;
	}
	{
	jint temp0 = (jint)((func_java_util_concurrent_ForkJoinTask_doExec_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_util_concurrent_ForkJoinTask_doExec_R_int])(ctx, (frame[0].o));
	frame[1].i = temp0;
	if (temp0 >= 0) goto label_9;
	}
	INST_ILOAD(1);
	goto label_3;
label_9:;
	{
	LINE_NUMBER(391);
	sp[0].o = (jobject)((java_util_concurrent_ForkJoinWorkerThread *) NULL_CHECK((frame[3].o)))->F_pool;
	jint temp0 = (jint)((func_java_util_concurrent_ForkJoinPool_awaitJoin_java_util_concurrent_ForkJoinPool$WorkQueue_java_util_concurrent_ForkJoinTask_long_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_concurrent_ForkJoinPool_awaitJoin_java_util_concurrent_ForkJoinPool$WorkQueue_java_util_concurrent_ForkJoinTask_long_R_int])(ctx, sp[0].o, (frame[4].o), (frame[0].o), (jlong(0)));
	sp[0].i = temp0;
	sp += 1;
	goto label_3;
	}
label_5:;
	{
	LINE_NUMBER(392);
	jint temp0 = (jint)M_java_util_concurrent_ForkJoinTask_externalAwaitDone_R_int(ctx, (frame[0].o));
	sp[0].i = temp0;
	sp += 1;
	}
label_3:;
	LINE_NUMBER(387);
	popStackFrame(ctx);
	INST_IRETURN();

	popStackFrame(ctx);
}

jint M_java_util_concurrent_ForkJoinTask_doInvoke_R_int(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/concurrent/ForkJoinTask:doInvoke", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(402);
	jint temp0 = (jint)((func_java_util_concurrent_ForkJoinTask_doExec_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_util_concurrent_ForkJoinTask_doExec_R_int])(ctx, (frame[0].o));
	frame[1].i = temp0;
	if (temp0 >= 0) goto label_2;
	}
	INST_ILOAD(1);
	goto label_3;
label_2:;
	{
	LINE_NUMBER(403);
	sp[0].o = (jobject)SM_java_lang_Thread_currentThread_R_java_lang_Thread(ctx);
	frame[2].o = sp[0].o;
	if ((isInstance(ctx, sp[0].o, &class_java_util_concurrent_ForkJoinWorkerThread)) == 0) goto label_5;
	}
	{
	LINE_NUMBER(405);
	sp[0].o = checkCast(ctx, &class_java_util_concurrent_ForkJoinWorkerThread, (frame[2].o));
	frame[3].o = sp[0].o;
	sp[0].o = (jobject)((java_util_concurrent_ForkJoinWorkerThread *) NULL_CHECK(sp[0].o))->F_pool;
	sp[1].o = (jobject)((java_util_concurrent_ForkJoinWorkerThread *) NULL_CHECK((frame[3].o)))->F_workQueue;
	jint temp0 = (jint)((func_java_util_concurrent_ForkJoinPool_awaitJoin_java_util_concurrent_ForkJoinPool$WorkQueue_java_util_concurrent_ForkJoinTask_long_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_concurrent_ForkJoinPool_awaitJoin_java_util_concurrent_ForkJoinPool$WorkQueue_java_util_concurrent_ForkJoinTask_long_R_int])(ctx, sp[0].o, sp[1].o, (frame[0].o), (jlong(0)));
	sp[0].i = temp0;
	sp += 1;
	goto label_3;
	}
label_5:;
	{
	LINE_NUMBER(406);
	jint temp0 = (jint)M_java_util_concurrent_ForkJoinTask_externalAwaitDone_R_int(ctx, (frame[0].o));
	sp[0].i = temp0;
	sp += 1;
	}
label_3:;
	LINE_NUMBER(402);
	popStackFrame(ctx);
	INST_IRETURN();

	popStackFrame(ctx);
}

jint M_java_util_concurrent_ForkJoinTask_recordExceptionalCompletion_java_lang_Throwable_R_int(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[17];
	auto stack = &frame[9];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/concurrent/ForkJoinTask:recordExceptionalCompletion", 17 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(460);
	jint temp0 = (jint)((java_util_concurrent_ForkJoinTask *) NULL_CHECK((frame[0].o)))->F_status;
	frame[2].i = temp0;
	if (temp0 < 0) goto label_8;
	}
	{
	LINE_NUMBER(461);
	jint temp0 = (jint)SM_java_lang_System_identityHashCode_java_lang_Object_R_int(ctx, (frame[0].o));
	frame[3].i = temp0;
	LINE_NUMBER(462);
	clinit_java_util_concurrent_ForkJoinTask(ctx);
	sp[0].o = (jobject)SF_java_util_concurrent_ForkJoinTask_exceptionTableLock;
	frame[4].o = sp[0].o;
	LINE_NUMBER(463);
	((func_java_util_concurrent_locks_ReentrantLock_lock) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_java_util_concurrent_locks_ReentrantLock_lock])(ctx, (frame[4].o));
	}
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(465);
	SM_java_util_concurrent_ForkJoinTask_expungeStaleExceptions(ctx);
	LINE_NUMBER(466);
	clinit_java_util_concurrent_ForkJoinTask(ctx);
	sp[0].o = (jobject)SF_java_util_concurrent_ForkJoinTask_exceptionTable;
	frame[5].o = sp[0].o;
	LINE_NUMBER(467);
	frame[6].i = ((frame[3].i) & ((((jarray) nullCheck(ctx, (frame[5].o)))->length) - (jint(1))));
	LINE_NUMBER(468);
	frame[7].o = ((jobject)ARRAY_ACCESS(jobject, (frame[5].o), (frame[6].i)));
	}
label_15:;
	{
	LINE_NUMBER(469);
	if ((frame[7].o) != nullptr) goto label_16;
	}
	{
	LINE_NUMBER(470);
	sp[0].o = frame[5].o;
	jint temp0 = frame[6].i;
	clinit_java_util_concurrent_ForkJoinTask$ExceptionNode(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_util_concurrent_ForkJoinTask$ExceptionNode);
	init_java_util_concurrent_ForkJoinTask$ExceptionNode_java_util_concurrent_ForkJoinTask_java_lang_Throwable_java_util_concurrent_ForkJoinTask$ExceptionNode(ctx, sp[1].o, (frame[0].o), (frame[1].o), ((jobject)ARRAY_ACCESS(jobject, (frame[5].o), (frame[6].i))));
	ARRAY_ACCESS(jobject, sp[0].o, temp0) = sp[1].o;
	LINE_NUMBER(471);
	goto label_1;
	}
label_16:;
	{
	LINE_NUMBER(473);
	sp[0].o = (jobject)((func_java_util_concurrent_ForkJoinTask$ExceptionNode_get_R_java_lang_Object) ((void **) nullCheck(ctx, (frame[7].o))->vtable)[VTABLE_java_util_concurrent_ForkJoinTask$ExceptionNode_get_R_java_lang_Object])(ctx, (frame[7].o));
	if (sp[0].o != (frame[0].o)) goto label_19;
	}
	LINE_NUMBER(474);
	goto label_1;
label_19:;
	{
	LINE_NUMBER(468);
	sp[0].o = (jobject)((java_util_concurrent_ForkJoinTask$ExceptionNode *) NULL_CHECK((frame[7].o)))->F_next;
	frame[7].o = sp[0].o;
	goto label_15;
	}
label_1:;
	popExceptionFrame(frameRef);
	{
	LINE_NUMBER(477);
	((func_java_util_concurrent_locks_ReentrantLock_unlock) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_java_util_concurrent_locks_ReentrantLock_unlock])(ctx, (frame[4].o));
	LINE_NUMBER(478);
	goto label_22;
	}
label_2:;
label_5: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	LINE_NUMBER(477);
	INST_ASTORE(8);
	popExceptionFrame(frameRef);
	{
	((func_java_util_concurrent_locks_ReentrantLock_unlock) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_java_util_concurrent_locks_ReentrantLock_unlock])(ctx, (frame[4].o));
	LINE_NUMBER(478);
	throwException(ctx, (frame[8].o));	}
label_22:;
	{
	LINE_NUMBER(479);
	jint temp0 = (jint)M_java_util_concurrent_ForkJoinTask_setCompletion_int_R_int(ctx, (frame[0].o), (bit_cast<jint>(0x80000000)));
	frame[2].i = temp0;
	}
label_8:;
	{
	LINE_NUMBER(481);
	popStackFrame(ctx);
	return (frame[2].i);
	}

	popStackFrame(ctx);
}

jint M_java_util_concurrent_ForkJoinTask_setExceptionalCompletion_java_lang_Throwable_R_int(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/concurrent/ForkJoinTask:setExceptionalCompletion", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(490);
	jint temp0 = (jint)((func_java_util_concurrent_ForkJoinTask_recordExceptionalCompletion_java_lang_Throwable_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_util_concurrent_ForkJoinTask_recordExceptionalCompletion_java_lang_Throwable_R_int])(ctx, (frame[0].o), (frame[1].o));
	frame[2].i = temp0;
	LINE_NUMBER(491);
	if (((frame[2].i) & (jint(-268435456))) != (bit_cast<jint>(0x80000000))) goto label_2;
	}
	{
	LINE_NUMBER(492);
	((func_java_util_concurrent_ForkJoinTask_internalPropagateException_java_lang_Throwable) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_util_concurrent_ForkJoinTask_internalPropagateException_java_lang_Throwable])(ctx, (frame[0].o), (frame[1].o));
	}
label_2:;
	{
	LINE_NUMBER(493);
	popStackFrame(ctx);
	return (frame[2].i);
	}

	popStackFrame(ctx);
}

void M_java_util_concurrent_ForkJoinTask_internalPropagateException_java_lang_Throwable(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/concurrent/ForkJoinTask:internalPropagateException", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	LINE_NUMBER(500);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void SM_java_util_concurrent_ForkJoinTask_cancelIgnoringExceptions_java_util_concurrent_ForkJoinTask(jcontext ctx, jobject param0) {
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/concurrent/ForkJoinTask:cancelIgnoringExceptions", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_util_concurrent_ForkJoinTask(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(509);
	if ((frame[0].o) == nullptr) goto label_5;
	}
	{
	if (((jint)((java_util_concurrent_ForkJoinTask *) NULL_CHECK((frame[0].o)))->F_status) < 0) goto label_5;
	}
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(511);
	jint temp0 = (jint)((func_java_util_concurrent_ForkJoinTask_cancel_boolean_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_util_concurrent_ForkJoinTask_cancel_boolean_R_boolean])(ctx, (frame[0].o), (jint(0)));
	}
	popExceptionFrame(frameRef);
	LINE_NUMBER(513);
	goto label_5;
label_2:;
	LINE_NUMBER(512);
	INST_ASTORE(1);
label_5:;
	LINE_NUMBER(515);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_java_util_concurrent_ForkJoinTask_clearExceptionalCompletion(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[12];
	auto stack = &frame[9];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/concurrent/ForkJoinTask:clearExceptionalCompletion", 12 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(521);
	jint temp0 = (jint)SM_java_lang_System_identityHashCode_java_lang_Object_R_int(ctx, (frame[0].o));
	frame[1].i = temp0;
	LINE_NUMBER(522);
	clinit_java_util_concurrent_ForkJoinTask(ctx);
	sp[0].o = (jobject)SF_java_util_concurrent_ForkJoinTask_exceptionTableLock;
	frame[2].o = sp[0].o;
	LINE_NUMBER(523);
	((func_java_util_concurrent_locks_ReentrantLock_lock) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_java_util_concurrent_locks_ReentrantLock_lock])(ctx, (frame[2].o));
	}
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(525);
	clinit_java_util_concurrent_ForkJoinTask(ctx);
	sp[0].o = (jobject)SF_java_util_concurrent_ForkJoinTask_exceptionTable;
	frame[3].o = sp[0].o;
	LINE_NUMBER(526);
	frame[4].i = ((frame[1].i) & ((((jarray) nullCheck(ctx, (frame[3].o)))->length) - (jint(1))));
	LINE_NUMBER(527);
	frame[5].o = ((jobject)ARRAY_ACCESS(jobject, (frame[3].o), (frame[4].i)));
	LINE_NUMBER(528);
	frame[6].o = (jobject(nullptr));
	}
label_12:;
	{
	LINE_NUMBER(529);
	if ((frame[5].o) == nullptr) goto label_13;
	}
	{
	LINE_NUMBER(530);
	sp[0].o = (jobject)((java_util_concurrent_ForkJoinTask$ExceptionNode *) NULL_CHECK((frame[5].o)))->F_next;
	frame[7].o = sp[0].o;
	LINE_NUMBER(531);
	sp[0].o = (jobject)((func_java_util_concurrent_ForkJoinTask$ExceptionNode_get_R_java_lang_Object) ((void **) nullCheck(ctx, (frame[5].o))->vtable)[VTABLE_java_util_concurrent_ForkJoinTask$ExceptionNode_get_R_java_lang_Object])(ctx, (frame[5].o));
	if (sp[0].o != (frame[0].o)) goto label_16;
	}
	{
	LINE_NUMBER(532);
	if ((frame[6].o) != nullptr) goto label_18;
	}
	{
	LINE_NUMBER(533);
	ARRAY_ACCESS(jobject, (frame[3].o), (frame[4].i)) = (frame[7].o);
	goto label_13;
	}
label_18:;
	{
	LINE_NUMBER(535);
	((java_util_concurrent_ForkJoinTask$ExceptionNode *) NULL_CHECK((frame[6].o)))->F_next = (jref) (frame[7].o);
	LINE_NUMBER(536);
	goto label_13;
	}
label_16:;
	{
	LINE_NUMBER(538);
	frame[6].o = (frame[5].o);
	LINE_NUMBER(539);
	frame[5].o = (frame[7].o);
	LINE_NUMBER(540);
	goto label_12;
	}
label_13:;
	{
	LINE_NUMBER(541);
	SM_java_util_concurrent_ForkJoinTask_expungeStaleExceptions(ctx);
	LINE_NUMBER(542);
	((java_util_concurrent_ForkJoinTask *) NULL_CHECK((frame[0].o)))->F_status = (jint(0));
	}
	popExceptionFrame(frameRef);
	{
	LINE_NUMBER(544);
	((func_java_util_concurrent_locks_ReentrantLock_unlock) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_java_util_concurrent_locks_ReentrantLock_unlock])(ctx, (frame[2].o));
	LINE_NUMBER(545);
	goto label_25;
	}
label_2:;
label_5: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	LINE_NUMBER(544);
	INST_ASTORE(8);
	popExceptionFrame(frameRef);
	{
	((func_java_util_concurrent_locks_ReentrantLock_unlock) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_java_util_concurrent_locks_ReentrantLock_unlock])(ctx, (frame[2].o));
	LINE_NUMBER(545);
	throwException(ctx, (frame[8].o));	}
label_25:;
	LINE_NUMBER(546);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jobject M_java_util_concurrent_ForkJoinTask_getThrowableException_R_java_lang_Throwable(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[16];
	auto stack = &frame[11];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/concurrent/ForkJoinTask:getThrowableException", 16 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);
	volatile bool bypasses[2]{};

	frame[0].o = self;
	{
	LINE_NUMBER(563);
	jint temp0 = (jint)SM_java_lang_System_identityHashCode_java_lang_Object_R_int(ctx, (frame[0].o));
	frame[1].i = temp0;
	LINE_NUMBER(565);
	clinit_java_util_concurrent_ForkJoinTask(ctx);
	sp[0].o = (jobject)SF_java_util_concurrent_ForkJoinTask_exceptionTableLock;
	frame[3].o = sp[0].o;
	LINE_NUMBER(566);
	((func_java_util_concurrent_locks_ReentrantLock_lock) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_java_util_concurrent_locks_ReentrantLock_lock])(ctx, (frame[3].o));
	}
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(568);
	SM_java_util_concurrent_ForkJoinTask_expungeStaleExceptions(ctx);
	LINE_NUMBER(569);
	clinit_java_util_concurrent_ForkJoinTask(ctx);
	sp[0].o = (jobject)SF_java_util_concurrent_ForkJoinTask_exceptionTable;
	frame[4].o = sp[0].o;
	LINE_NUMBER(570);
	frame[2].o = ((jobject)ARRAY_ACCESS(jobject, (frame[4].o), ((frame[1].i) & ((((jarray) nullCheck(ctx, (frame[4].o)))->length) - (jint(1))))));
	}
label_18:;
	{
	LINE_NUMBER(571);
	if ((frame[2].o) == nullptr) goto label_1;
	}
	{
	sp[0].o = (jobject)((func_java_util_concurrent_ForkJoinTask$ExceptionNode_get_R_java_lang_Object) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_java_util_concurrent_ForkJoinTask$ExceptionNode_get_R_java_lang_Object])(ctx, (frame[2].o));
	if (sp[0].o == (frame[0].o)) goto label_1;
	}
	{
	LINE_NUMBER(572);
	sp[0].o = (jobject)((java_util_concurrent_ForkJoinTask$ExceptionNode *) NULL_CHECK((frame[2].o)))->F_next;
	frame[2].o = sp[0].o;
	goto label_18;
	}
label_1:;
	popExceptionFrame(frameRef);
	{
	LINE_NUMBER(574);
	((func_java_util_concurrent_locks_ReentrantLock_unlock) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_java_util_concurrent_locks_ReentrantLock_unlock])(ctx, (frame[3].o));
	LINE_NUMBER(575);
	goto label_21;
	}
label_2:;
label_5: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	LINE_NUMBER(574);
	INST_ASTORE(5);
	popExceptionFrame(frameRef);
	{
	((func_java_util_concurrent_locks_ReentrantLock_unlock) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_java_util_concurrent_locks_ReentrantLock_unlock])(ctx, (frame[3].o));
	LINE_NUMBER(575);
	throwException(ctx, (frame[5].o));	}
label_21:;
	{
	LINE_NUMBER(577);
	if ((frame[2].o) == nullptr) goto label_23;
	}
	{
	sp[0].o = (jobject)((java_util_concurrent_ForkJoinTask$ExceptionNode *) NULL_CHECK((frame[2].o)))->F_ex;
	frame[4].o = sp[0].o;
	if (sp[0].o != nullptr) goto label_25;
	}
label_23:;
	{
	LINE_NUMBER(578);
	popStackFrame(ctx);
	return (jobject(nullptr));
	}
label_25:;
	{
	LINE_NUMBER(579);
	jlong temp0 = (jlong)((java_util_concurrent_ForkJoinTask$ExceptionNode *) NULL_CHECK((frame[2].o)))->F_thrower;
	sp[0].o = (jobject)SM_java_lang_Thread_currentThread_R_java_lang_Thread(ctx);
	jlong temp1 = (jlong)((func_java_lang_Thread_getId_R_long) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_Thread_getId_R_long])(ctx, sp[0].o);
	if ((longCompare(temp0, temp1)) == 0) goto label_26;
	}
label_9: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Exception))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_8; }
	}
	if (bypasses[1]) { bypasses[1] = false; goto label_28; }
	{
	LINE_NUMBER(581);
	frame[5].o = (jobject(nullptr));
	LINE_NUMBER(583);
	sp[0].o = (jobject)((func_java_lang_Object_getClass_R_java_lang_Class) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_java_lang_Object_getClass_R_java_lang_Class])(ctx, (frame[4].o));
	sp[0].o = (jobject)((func_java_lang_Class_getConstructors_R_Array1_java_lang_reflect_Constructor) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_Class_getConstructors_R_Array1_java_lang_reflect_Constructor])(ctx, sp[0].o);
	frame[6].o = sp[0].o;
	frame[7].i = (((jarray) nullCheck(ctx, (frame[6].o)))->length);
	frame[8].i = (jint(0));
	}
label_28:;
	{
	if ((frame[8].i) >= (frame[7].i)) { popExceptionFrames(frameRef, 1); bypasses[0] = true; goto label_12; } // goto label_29
	}
	{
	frame[9].o = ((jobject)ARRAY_ACCESS(jobject, (frame[6].o), (frame[8].i)));
	LINE_NUMBER(584);
	sp[0].o = (jobject)((func_java_lang_reflect_Constructor_getParameterTypes_R_Array1_java_lang_Class) ((void **) nullCheck(ctx, (frame[9].o))->vtable)[VTABLE_java_lang_reflect_Constructor_getParameterTypes_R_Array1_java_lang_Class])(ctx, (frame[9].o));
	frame[10].o = sp[0].o;
	LINE_NUMBER(585);
	if ((((jarray) nullCheck(ctx, (frame[10].o)))->length) != 0) goto label_32;
	}
	{
	LINE_NUMBER(586);
	frame[5].o = (frame[9].o);
	{ popExceptionFrames(frameRef, 1); goto label_10; }
	}
label_32:;
	{
	LINE_NUMBER(587);
	if ((((jarray) nullCheck(ctx, (frame[10].o)))->length) != (jint(1))) { popExceptionFrames(frameRef, 1); goto label_10; }
	}
	{
	if (((jobject)ARRAY_ACCESS(jobject, (frame[10].o), (jint(0)))) != (((jobject) &class_java_lang_Throwable))) { popExceptionFrames(frameRef, 1); goto label_10; }
	}
	{
	LINE_NUMBER(588);
	sp[0].o = frame[9].o;
	sp[1].o = (jobject)createArray(ctx, &class_java_lang_Object, (jint(1)));
	ARRAY_ACCESS(jobject, sp[1].o, (jint(0))) = (frame[4].o);
	sp[0].o = (jobject)((func_java_lang_reflect_Constructor_newInstance_Array1_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_reflect_Constructor_newInstance_Array1_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, sp[1].o);
	sp[0].o = checkCast(ctx, &class_java_lang_Throwable, sp[0].o);
	sp += 1;
	}
	popExceptionFrame(frameRef);
	popStackFrame(ctx);
	INST_ARETURN();
label_10:;
label_12: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Exception))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_8; }
	}
	if (bypasses[0]) { bypasses[0] = false; goto label_29; }
	{
	LINE_NUMBER(583);
	INST_IINC(8, 1);
	{ popExceptionFrames(frameRef, 1); bypasses[1] = true; goto label_9; } // goto label_28
	}
label_29:;
	{
	LINE_NUMBER(590);
	if ((frame[5].o) == nullptr) { popExceptionFrames(frameRef, 1); goto label_35; }
	}
	{
	LINE_NUMBER(591);
	sp[0].o = frame[5].o;
	sp[1].o = (jobject)createArray(ctx, &class_java_lang_Object, (jint(0)));
	sp[0].o = (jobject)((func_java_lang_reflect_Constructor_newInstance_Array1_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_reflect_Constructor_newInstance_Array1_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, sp[1].o);
	frame[6].o = (checkCast(ctx, &class_java_lang_Throwable, sp[0].o));
	LINE_NUMBER(592);
	sp[0].o = (jobject)((func_java_lang_Throwable_initCause_java_lang_Throwable_R_java_lang_Throwable) ((void **) nullCheck(ctx, (frame[6].o))->vtable)[VTABLE_java_lang_Throwable_initCause_java_lang_Throwable_R_java_lang_Throwable])(ctx, (frame[6].o), (frame[4].o));
	LINE_NUMBER(593);
	sp[0].o = frame[6].o;
	sp += 1;
	}
	popExceptionFrame(frameRef);
	popStackFrame(ctx);
	INST_ARETURN();
label_35:;
	LINE_NUMBER(596);
	goto label_26;
label_8:;
	LINE_NUMBER(595);
	INST_ASTORE(5);
label_26:;
	{
	LINE_NUMBER(598);
	popStackFrame(ctx);
	return (frame[4].o);
	}

	popStackFrame(ctx);
}

void SM_java_util_concurrent_ForkJoinTask_expungeStaleExceptions(jcontext ctx) {
	FrameInfo frameInfo { "java/util/concurrent/ForkJoinTask:expungeStaleExceptions", 0 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, nullptr, nullptr);

	clinit_java_util_concurrent_ForkJoinTask(ctx);
	LINE_NUMBER(625);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void SM_java_util_concurrent_ForkJoinTask_helpExpungeStaleExceptions(jcontext ctx) {
	jtype frame[3];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/concurrent/ForkJoinTask:helpExpungeStaleExceptions", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_util_concurrent_ForkJoinTask(ctx);
	{
	LINE_NUMBER(632);
	clinit_java_util_concurrent_ForkJoinTask(ctx);
	sp[0].o = (jobject)SF_java_util_concurrent_ForkJoinTask_exceptionTableLock;
	frame[0].o = sp[0].o;
	LINE_NUMBER(633);
	jint temp0 = (jint)((func_java_util_concurrent_locks_ReentrantLock_tryLock_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_util_concurrent_locks_ReentrantLock_tryLock_R_boolean])(ctx, (frame[0].o));
	if (temp0 == 0) goto label_6;
	}
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	LINE_NUMBER(635);
	SM_java_util_concurrent_ForkJoinTask_expungeStaleExceptions(ctx);
	popExceptionFrame(frameRef);
	{
	LINE_NUMBER(637);
	((func_java_util_concurrent_locks_ReentrantLock_unlock) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_util_concurrent_locks_ReentrantLock_unlock])(ctx, (frame[0].o));
	LINE_NUMBER(638);
	goto label_6;
	}
label_2:;
	{
	sp -= 1;
	LINE_NUMBER(637);
	frame[1].o = sp[0].o;
	((func_java_util_concurrent_locks_ReentrantLock_unlock) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_util_concurrent_locks_ReentrantLock_unlock])(ctx, (frame[0].o));
	LINE_NUMBER(638);
	throwException(ctx, (frame[1].o));	}
label_6:;
	LINE_NUMBER(640);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void SM_java_util_concurrent_ForkJoinTask_rethrow_java_lang_Throwable(jcontext ctx, jobject param0) {
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/concurrent/ForkJoinTask:rethrow", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_util_concurrent_ForkJoinTask(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(646);
	SM_java_util_concurrent_ForkJoinTask_uncheckedThrow_java_lang_Throwable(ctx, (frame[0].o));
	LINE_NUMBER(647);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_java_util_concurrent_ForkJoinTask_uncheckedThrow_java_lang_Throwable(jcontext ctx, jobject param0) {
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/concurrent/ForkJoinTask:uncheckedThrow", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_util_concurrent_ForkJoinTask(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(656);
	if ((frame[0].o) == nullptr) goto label_1;
	}
	{
	LINE_NUMBER(657);
	throwException(ctx, (frame[0].o));	}
label_1:;
	{
	LINE_NUMBER(659);
	clinit_java_lang_Error(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_Error);
	init_java_lang_Error_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"Unknown Exception"_j))));
	throwException(ctx, sp[0].o);	}

	popStackFrame(ctx);
}

void M_java_util_concurrent_ForkJoinTask_reportException_int(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/concurrent/ForkJoinTask:reportException", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(666);
	if ((frame[1].i) != (jint(-1073741824))) goto label_1;
	}
	{
	LINE_NUMBER(667);
	clinit_java_util_concurrent_CancellationException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_util_concurrent_CancellationException);
	init_java_util_concurrent_CancellationException(ctx, sp[0].o);
	throwException(ctx, sp[0].o);	}
label_1:;
	{
	LINE_NUMBER(668);
	if ((frame[1].i) != (bit_cast<jint>(0x80000000))) goto label_3;
	}
	{
	LINE_NUMBER(669);
	sp[0].o = (jobject)M_java_util_concurrent_ForkJoinTask_getThrowableException_R_java_lang_Throwable(ctx, (frame[0].o));
	SM_java_util_concurrent_ForkJoinTask_rethrow_java_lang_Throwable(ctx, sp[0].o);
	}
label_3:;
	LINE_NUMBER(670);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jobject M_java_util_concurrent_ForkJoinTask_fork_R_java_util_concurrent_ForkJoinTask(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/concurrent/ForkJoinTask:fork", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(691);
	sp[0].o = (jobject)SM_java_lang_Thread_currentThread_R_java_lang_Thread(ctx);
	frame[1].o = sp[0].o;
	if ((isInstance(ctx, sp[0].o, &class_java_util_concurrent_ForkJoinWorkerThread)) == 0) goto label_2;
	}
	{
	LINE_NUMBER(692);
	sp[0].o = (jobject)((java_util_concurrent_ForkJoinWorkerThread *) NULL_CHECK((checkCast(ctx, &class_java_util_concurrent_ForkJoinWorkerThread, (frame[1].o)))))->F_workQueue;
	((func_java_util_concurrent_ForkJoinPool$WorkQueue_push_java_util_concurrent_ForkJoinTask) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_concurrent_ForkJoinPool$WorkQueue_push_java_util_concurrent_ForkJoinTask])(ctx, sp[0].o, (frame[0].o));
	goto label_4;
	}
label_2:;
	{
	LINE_NUMBER(694);
	clinit_java_util_concurrent_ForkJoinPool(ctx);
	sp[0].o = (jobject)SF_java_util_concurrent_ForkJoinPool_common;
	((func_java_util_concurrent_ForkJoinPool_externalPush_java_util_concurrent_ForkJoinTask) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_concurrent_ForkJoinPool_externalPush_java_util_concurrent_ForkJoinTask])(ctx, sp[0].o, (frame[0].o));
	}
label_4:;
	{
	LINE_NUMBER(695);
	popStackFrame(ctx);
	return (frame[0].o);
	}

	popStackFrame(ctx);
}

jobject M_java_util_concurrent_ForkJoinTask_join_R_java_lang_Object(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/concurrent/ForkJoinTask:join", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(711);
	jint temp0 = (jint)M_java_util_concurrent_ForkJoinTask_doJoin_R_int(ctx, (frame[0].o));
	jint temp1 = temp0 & (jint(-268435456));
	frame[1].i = temp1;
	if (temp1 == (jint(-268435456))) goto label_2;
	}
	{
	LINE_NUMBER(712);
	M_java_util_concurrent_ForkJoinTask_reportException_int(ctx, (frame[0].o), (frame[1].i));
	}
label_2:;
	{
	LINE_NUMBER(713);
	sp[0].o = (jobject)((func_java_util_concurrent_ForkJoinTask_getRawResult_R_java_lang_Object) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_util_concurrent_ForkJoinTask_getRawResult_R_java_lang_Object])(ctx, (frame[0].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_java_util_concurrent_ForkJoinTask_invoke_R_java_lang_Object(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/concurrent/ForkJoinTask:invoke", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(726);
	jint temp0 = (jint)M_java_util_concurrent_ForkJoinTask_doInvoke_R_int(ctx, (frame[0].o));
	jint temp1 = temp0 & (jint(-268435456));
	frame[1].i = temp1;
	if (temp1 == (jint(-268435456))) goto label_2;
	}
	{
	LINE_NUMBER(727);
	M_java_util_concurrent_ForkJoinTask_reportException_int(ctx, (frame[0].o), (frame[1].i));
	}
label_2:;
	{
	LINE_NUMBER(728);
	sp[0].o = (jobject)((func_java_util_concurrent_ForkJoinTask_getRawResult_R_java_lang_Object) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_util_concurrent_ForkJoinTask_getRawResult_R_java_lang_Object])(ctx, (frame[0].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void SM_java_util_concurrent_ForkJoinTask_invokeAll_java_util_concurrent_ForkJoinTask_java_util_concurrent_ForkJoinTask(jcontext ctx, jobject param0, jobject param1) {
	jtype frame[6];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/concurrent/ForkJoinTask:invokeAll", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_util_concurrent_ForkJoinTask(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	{
	LINE_NUMBER(750);
	sp[0].o = (jobject)((func_java_util_concurrent_ForkJoinTask_fork_R_java_util_concurrent_ForkJoinTask) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_util_concurrent_ForkJoinTask_fork_R_java_util_concurrent_ForkJoinTask])(ctx, (frame[1].o));
	LINE_NUMBER(751);
	jint temp0 = (jint)M_java_util_concurrent_ForkJoinTask_doInvoke_R_int(ctx, (frame[0].o));
	jint temp1 = temp0 & (jint(-268435456));
	frame[2].i = temp1;
	if (temp1 == (jint(-268435456))) goto label_3;
	}
	{
	LINE_NUMBER(752);
	M_java_util_concurrent_ForkJoinTask_reportException_int(ctx, (frame[0].o), (frame[2].i));
	}
label_3:;
	{
	LINE_NUMBER(753);
	jint temp0 = (jint)M_java_util_concurrent_ForkJoinTask_doJoin_R_int(ctx, (frame[1].o));
	jint temp1 = temp0 & (jint(-268435456));
	frame[3].i = temp1;
	if (temp1 == (jint(-268435456))) goto label_6;
	}
	{
	LINE_NUMBER(754);
	M_java_util_concurrent_ForkJoinTask_reportException_int(ctx, (frame[1].o), (frame[3].i));
	}
label_6:;
	LINE_NUMBER(755);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void SM_java_util_concurrent_ForkJoinTask_invokeAll_Array1_java_util_concurrent_ForkJoinTask(jcontext ctx, jobject param0) {
	jtype frame[7];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/concurrent/ForkJoinTask:invokeAll", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_util_concurrent_ForkJoinTask(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(773);
	frame[1].o = (jobject(nullptr));
	LINE_NUMBER(774);
	frame[2].i = ((((jarray) nullCheck(ctx, (frame[0].o)))->length) - (jint(1)));
	LINE_NUMBER(775);
	frame[3].i = (frame[2].i);
	}
label_3:;
	INST_ILOAD(3);
	if ((--sp)->i < 0) goto label_4;
	{
	LINE_NUMBER(776);
	frame[4].o = ((jobject)ARRAY_ACCESS(jobject, (frame[0].o), (frame[3].i)));
	LINE_NUMBER(777);
	if ((frame[4].o) != nullptr) goto label_7;
	}
	{
	LINE_NUMBER(778);
	if ((frame[1].o) != nullptr) goto label_9;
	}
	{
	LINE_NUMBER(779);
	clinit_java_lang_NullPointerException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_NullPointerException);
	init_java_lang_NullPointerException(ctx, sp[0].o);
	frame[1].o = sp[0].o;
	goto label_9;
	}
label_7:;
	{
	LINE_NUMBER(781);
	if ((frame[3].i) == 0) goto label_11;
	}
	{
	LINE_NUMBER(782);
	sp[0].o = (jobject)((func_java_util_concurrent_ForkJoinTask_fork_R_java_util_concurrent_ForkJoinTask) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_java_util_concurrent_ForkJoinTask_fork_R_java_util_concurrent_ForkJoinTask])(ctx, (frame[4].o));
	goto label_9;
	}
label_11:;
	{
	LINE_NUMBER(783);
	jint temp0 = (jint)M_java_util_concurrent_ForkJoinTask_doInvoke_R_int(ctx, (frame[4].o));
	if (temp0 >= (jint(-268435456))) goto label_9;
	}
	INST_ALOAD(1);
	if ((--sp)->o != nullptr) goto label_9;
	{
	LINE_NUMBER(784);
	sp[0].o = (jobject)((func_java_util_concurrent_ForkJoinTask_getException_R_java_lang_Throwable) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_java_util_concurrent_ForkJoinTask_getException_R_java_lang_Throwable])(ctx, (frame[4].o));
	frame[1].o = sp[0].o;
	}
label_9:;
	{
	LINE_NUMBER(775);
	INST_IINC(3, -1);
	goto label_3;
	}
label_4:;
	{
	LINE_NUMBER(786);
	frame[3].i = (jint(1));
	}
label_14:;
	{
	if ((frame[3].i) > (frame[2].i)) goto label_15;
	}
	{
	LINE_NUMBER(787);
	frame[4].o = ((jobject)ARRAY_ACCESS(jobject, (frame[0].o), (frame[3].i)));
	LINE_NUMBER(788);
	if ((frame[4].o) == nullptr) goto label_18;
	}
	{
	LINE_NUMBER(789);
	if ((frame[1].o) == nullptr) goto label_20;
	}
	{
	LINE_NUMBER(790);
	jint temp0 = (jint)((func_java_util_concurrent_ForkJoinTask_cancel_boolean_R_boolean) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_java_util_concurrent_ForkJoinTask_cancel_boolean_R_boolean])(ctx, (frame[4].o), (jint(0)));
	goto label_18;
	}
label_20:;
	{
	LINE_NUMBER(791);
	jint temp0 = (jint)M_java_util_concurrent_ForkJoinTask_doJoin_R_int(ctx, (frame[4].o));
	if (temp0 >= (jint(-268435456))) goto label_18;
	}
	{
	LINE_NUMBER(792);
	sp[0].o = (jobject)((func_java_util_concurrent_ForkJoinTask_getException_R_java_lang_Throwable) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_java_util_concurrent_ForkJoinTask_getException_R_java_lang_Throwable])(ctx, (frame[4].o));
	frame[1].o = sp[0].o;
	}
label_18:;
	{
	LINE_NUMBER(786);
	INST_IINC(3, 1);
	goto label_14;
	}
label_15:;
	{
	LINE_NUMBER(795);
	if ((frame[1].o) == nullptr) goto label_23;
	}
	{
	LINE_NUMBER(796);
	SM_java_util_concurrent_ForkJoinTask_rethrow_java_lang_Throwable(ctx, (frame[1].o));
	}
label_23:;
	LINE_NUMBER(797);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jobject SM_java_util_concurrent_ForkJoinTask_invokeAll_java_util_Collection_R_java_util_Collection(jcontext ctx, jobject param0) {
	jtype frame[8];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/concurrent/ForkJoinTask:invokeAll", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_util_concurrent_ForkJoinTask(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(818);
	if ((isInstance(ctx, (frame[0].o), &class_java_util_RandomAccess)) == 0) goto label_1;
	}
	{
	if ((isInstance(ctx, (frame[0].o), &class_java_util_List)) != 0) goto label_2;
	}
label_1:;
	{
	LINE_NUMBER(819);
	sp[0].o = frame[0].o;
	jint temp0 = (jint)((func_java_util_Collection_size_R_int) resolveInterfaceMethod(ctx, &class_java_util_Collection, INDEX_java_util_Collection_size_R_int, (frame[0].o)))(ctx, (frame[0].o));
	sp[1].o = (jobject)createArray(ctx, &class_java_util_concurrent_ForkJoinTask, temp0);
	sp[0].o = (jobject)((func_java_util_Collection_toArray_Array1_java_lang_Object_R_Array1_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Collection, INDEX_java_util_Collection_toArray_Array1_java_lang_Object_R_Array1_java_lang_Object, sp[0].o))(ctx, sp[0].o, sp[1].o);
	SM_java_util_concurrent_ForkJoinTask_invokeAll_Array1_java_util_concurrent_ForkJoinTask(ctx, (checkCast(ctx, getArrayClass(&class_java_util_concurrent_ForkJoinTask, 1), sp[0].o)));
	LINE_NUMBER(820);
	popStackFrame(ctx);
	return (frame[0].o);
	}
label_2:;
	{
	LINE_NUMBER(823);
	frame[1].o = (checkCast(ctx, &class_java_util_List, (frame[0].o)));
	LINE_NUMBER(825);
	frame[2].o = (jobject(nullptr));
	LINE_NUMBER(826);
	jint temp0 = (jint)((func_java_util_List_size_R_int) resolveInterfaceMethod(ctx, &class_java_util_List, INDEX_java_util_List_size_R_int, (frame[1].o)))(ctx, (frame[1].o));
	frame[3].i = (temp0 - (jint(1)));
	LINE_NUMBER(827);
	frame[4].i = (frame[3].i);
	}
label_7:;
	INST_ILOAD(4);
	if ((--sp)->i < 0) goto label_8;
	{
	LINE_NUMBER(828);
	sp[0].o = (jobject)((func_java_util_List_get_int_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_List, INDEX_java_util_List_get_int_R_java_lang_Object, (frame[1].o)))(ctx, (frame[1].o), (frame[4].i));
	frame[5].o = (checkCast(ctx, &class_java_util_concurrent_ForkJoinTask, sp[0].o));
	LINE_NUMBER(829);
	if ((frame[5].o) != nullptr) goto label_11;
	}
	{
	LINE_NUMBER(830);
	if ((frame[2].o) != nullptr) goto label_13;
	}
	{
	LINE_NUMBER(831);
	clinit_java_lang_NullPointerException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_NullPointerException);
	init_java_lang_NullPointerException(ctx, sp[0].o);
	frame[2].o = sp[0].o;
	goto label_13;
	}
label_11:;
	{
	LINE_NUMBER(833);
	if ((frame[4].i) == 0) goto label_15;
	}
	{
	LINE_NUMBER(834);
	sp[0].o = (jobject)((func_java_util_concurrent_ForkJoinTask_fork_R_java_util_concurrent_ForkJoinTask) ((void **) nullCheck(ctx, (frame[5].o))->vtable)[VTABLE_java_util_concurrent_ForkJoinTask_fork_R_java_util_concurrent_ForkJoinTask])(ctx, (frame[5].o));
	goto label_13;
	}
label_15:;
	{
	LINE_NUMBER(835);
	jint temp0 = (jint)M_java_util_concurrent_ForkJoinTask_doInvoke_R_int(ctx, (frame[5].o));
	if (temp0 >= (jint(-268435456))) goto label_13;
	}
	INST_ALOAD(2);
	if ((--sp)->o != nullptr) goto label_13;
	{
	LINE_NUMBER(836);
	sp[0].o = (jobject)((func_java_util_concurrent_ForkJoinTask_getException_R_java_lang_Throwable) ((void **) nullCheck(ctx, (frame[5].o))->vtable)[VTABLE_java_util_concurrent_ForkJoinTask_getException_R_java_lang_Throwable])(ctx, (frame[5].o));
	frame[2].o = sp[0].o;
	}
label_13:;
	{
	LINE_NUMBER(827);
	INST_IINC(4, -1);
	goto label_7;
	}
label_8:;
	{
	LINE_NUMBER(838);
	frame[4].i = (jint(1));
	}
label_18:;
	{
	if ((frame[4].i) > (frame[3].i)) goto label_19;
	}
	{
	LINE_NUMBER(839);
	sp[0].o = (jobject)((func_java_util_List_get_int_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_List, INDEX_java_util_List_get_int_R_java_lang_Object, (frame[1].o)))(ctx, (frame[1].o), (frame[4].i));
	frame[5].o = (checkCast(ctx, &class_java_util_concurrent_ForkJoinTask, sp[0].o));
	LINE_NUMBER(840);
	if ((frame[5].o) == nullptr) goto label_22;
	}
	{
	LINE_NUMBER(841);
	if ((frame[2].o) == nullptr) goto label_24;
	}
	{
	LINE_NUMBER(842);
	jint temp0 = (jint)((func_java_util_concurrent_ForkJoinTask_cancel_boolean_R_boolean) ((void **) nullCheck(ctx, (frame[5].o))->vtable)[VTABLE_java_util_concurrent_ForkJoinTask_cancel_boolean_R_boolean])(ctx, (frame[5].o), (jint(0)));
	goto label_22;
	}
label_24:;
	{
	LINE_NUMBER(843);
	jint temp0 = (jint)M_java_util_concurrent_ForkJoinTask_doJoin_R_int(ctx, (frame[5].o));
	if (temp0 >= (jint(-268435456))) goto label_22;
	}
	{
	LINE_NUMBER(844);
	sp[0].o = (jobject)((func_java_util_concurrent_ForkJoinTask_getException_R_java_lang_Throwable) ((void **) nullCheck(ctx, (frame[5].o))->vtable)[VTABLE_java_util_concurrent_ForkJoinTask_getException_R_java_lang_Throwable])(ctx, (frame[5].o));
	frame[2].o = sp[0].o;
	}
label_22:;
	{
	LINE_NUMBER(838);
	INST_IINC(4, 1);
	goto label_18;
	}
label_19:;
	{
	LINE_NUMBER(847);
	if ((frame[2].o) == nullptr) goto label_27;
	}
	{
	LINE_NUMBER(848);
	SM_java_util_concurrent_ForkJoinTask_rethrow_java_lang_Throwable(ctx, (frame[2].o));
	}
label_27:;
	{
	LINE_NUMBER(849);
	popStackFrame(ctx);
	return (frame[0].o);
	}

	popStackFrame(ctx);
}

jbool M_java_util_concurrent_ForkJoinTask_cancel_boolean_R_boolean(jcontext ctx, jobject self, jbool param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/concurrent/ForkJoinTask:cancel", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(880);
	jint temp0 = (jint)M_java_util_concurrent_ForkJoinTask_setCompletion_int_R_int(ctx, (frame[0].o), (jint(-1073741824)));
	if ((temp0 & (jint(-268435456))) != (jint(-1073741824))) goto label_1;
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

jbool M_java_util_concurrent_ForkJoinTask_isDone_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/concurrent/ForkJoinTask:isDone", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(884);
	if (((jint)((java_util_concurrent_ForkJoinTask *) NULL_CHECK((frame[0].o)))->F_status) >= 0) goto label_1;
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

jbool M_java_util_concurrent_ForkJoinTask_isCancelled_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/concurrent/ForkJoinTask:isCancelled", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(888);
	if ((((jint)((java_util_concurrent_ForkJoinTask *) NULL_CHECK((frame[0].o)))->F_status) & (jint(-268435456))) != (jint(-1073741824))) goto label_1;
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

jbool M_java_util_concurrent_ForkJoinTask_isCompletedAbnormally_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/concurrent/ForkJoinTask:isCompletedAbnormally", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(897);
	if (((jint)((java_util_concurrent_ForkJoinTask *) NULL_CHECK((frame[0].o)))->F_status) >= (jint(-268435456))) goto label_1;
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

jbool M_java_util_concurrent_ForkJoinTask_isCompletedNormally_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/concurrent/ForkJoinTask:isCompletedNormally", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(908);
	if ((((jint)((java_util_concurrent_ForkJoinTask *) NULL_CHECK((frame[0].o)))->F_status) & (jint(-268435456))) != (jint(-268435456))) goto label_1;
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

jobject M_java_util_concurrent_ForkJoinTask_getException_R_java_lang_Throwable(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/concurrent/ForkJoinTask:getException", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(919);
	frame[1].i = (((jint)((java_util_concurrent_ForkJoinTask *) NULL_CHECK((frame[0].o)))->F_status) & (jint(-268435456)));
	LINE_NUMBER(920);
	if ((frame[1].i) < (jint(-268435456))) goto label_2;
	}
	INST_ACONST_NULL();
	goto label_3;
label_2:;
	{
	LINE_NUMBER(921);
	if ((frame[1].i) != (jint(-1073741824))) goto label_4;
	}
	{
	clinit_java_util_concurrent_CancellationException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_util_concurrent_CancellationException);
	init_java_util_concurrent_CancellationException(ctx, sp[0].o);
	sp += 1;
	goto label_3;
	}
label_4:;
	{
	LINE_NUMBER(922);
	sp[0].o = (jobject)M_java_util_concurrent_ForkJoinTask_getThrowableException_R_java_lang_Throwable(ctx, (frame[0].o));
	sp += 1;
	}
label_3:;
	LINE_NUMBER(920);
	popStackFrame(ctx);
	INST_ARETURN();

	popStackFrame(ctx);
}

void M_java_util_concurrent_ForkJoinTask_completeExceptionally_java_lang_Throwable(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/concurrent/ForkJoinTask:completeExceptionally", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(940);
	sp[0].o = frame[0].o;
	sp += 1;
	if ((isInstance(ctx, (frame[1].o), &class_java_lang_RuntimeException)) != 0) goto label_1;
	}
	{
	if ((isInstance(ctx, (frame[1].o), &class_java_lang_Error)) == 0) goto label_2;
	}
label_1:;
	{
	LINE_NUMBER(941);
	sp[0].o = frame[1].o;
	sp += 1;
	goto label_3;
	}
label_2:;
	{
	LINE_NUMBER(942);
	clinit_java_lang_RuntimeException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_RuntimeException);
	init_java_lang_RuntimeException_java_lang_Throwable(ctx, sp[0].o, (frame[1].o));
	sp += 1;
	}
label_3:;
	{
	sp -= 2;
	LINE_NUMBER(940);
	jint temp0 = (jint)M_java_util_concurrent_ForkJoinTask_setExceptionalCompletion_java_lang_Throwable_R_int(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(943);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_java_util_concurrent_ForkJoinTask_complete_java_lang_Object(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/concurrent/ForkJoinTask:complete", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(960);
	((func_java_util_concurrent_ForkJoinTask_setRawResult_java_lang_Object) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_util_concurrent_ForkJoinTask_setRawResult_java_lang_Object])(ctx, (frame[0].o), (frame[1].o));
	}
	popExceptionFrame(frameRef);
	LINE_NUMBER(964);
	goto label_4;
label_2:;
	{
	sp -= 1;
	LINE_NUMBER(961);
	frame[2].o = sp[0].o;
	LINE_NUMBER(962);
	jint temp0 = (jint)M_java_util_concurrent_ForkJoinTask_setExceptionalCompletion_java_lang_Throwable_R_int(ctx, (frame[0].o), (frame[2].o));
	LINE_NUMBER(963);
	popStackFrame(ctx);
	return;
	}
label_4:;
	{
	LINE_NUMBER(965);
	jint temp0 = (jint)M_java_util_concurrent_ForkJoinTask_setCompletion_int_R_int(ctx, (frame[0].o), (jint(-268435456)));
	LINE_NUMBER(966);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_java_util_concurrent_ForkJoinTask_quietlyComplete(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/concurrent/ForkJoinTask:quietlyComplete", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(977);
	jint temp0 = (jint)M_java_util_concurrent_ForkJoinTask_setCompletion_int_R_int(ctx, (frame[0].o), (jint(-268435456)));
	LINE_NUMBER(978);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_java_util_concurrent_ForkJoinTask_get_R_java_lang_Object(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/concurrent/ForkJoinTask:get", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(992);
	sp[0].o = (jobject)SM_java_lang_Thread_currentThread_R_java_lang_Thread(ctx);
	if ((isInstance(ctx, sp[0].o, &class_java_util_concurrent_ForkJoinWorkerThread)) == 0) goto label_1;
	}
	{
	LINE_NUMBER(993);
	jint temp0 = (jint)M_java_util_concurrent_ForkJoinTask_doJoin_R_int(ctx, (frame[0].o));
	sp[0].i = temp0;
	sp += 1;
	goto label_3;
	}
label_1:;
	INST_ALOAD(0);
	POP_N(1); // Pop method args
	sp->i = (jint)M_java_util_concurrent_ForkJoinTask_externalInterruptibleAwaitDone_R_int(ctx, sp[0].o);
	sp++;
label_3:;
	{
	sp -= 1;
	frame[1].i = sp[0].i;
	LINE_NUMBER(994);
	jint temp0 = (frame[1].i) & (jint(-268435456));
	frame[1].i = temp0;
	if (temp0 != (jint(-1073741824))) goto label_5;
	}
	{
	LINE_NUMBER(995);
	clinit_java_util_concurrent_CancellationException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_util_concurrent_CancellationException);
	init_java_util_concurrent_CancellationException(ctx, sp[0].o);
	throwException(ctx, sp[0].o);	}
label_5:;
	{
	LINE_NUMBER(996);
	if ((frame[1].i) != (bit_cast<jint>(0x80000000))) goto label_7;
	}
	{
	LINE_NUMBER(997);
	clinit_java_util_concurrent_ExecutionException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_util_concurrent_ExecutionException);
	sp[1].o = (jobject)M_java_util_concurrent_ForkJoinTask_getThrowableException_R_java_lang_Throwable(ctx, (frame[0].o));
	init_java_util_concurrent_ExecutionException_java_lang_Throwable(ctx, sp[0].o, sp[1].o);
	throwException(ctx, sp[0].o);	}
label_7:;
	{
	LINE_NUMBER(998);
	sp[0].o = (jobject)((func_java_util_concurrent_ForkJoinTask_getRawResult_R_java_lang_Object) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_util_concurrent_ForkJoinTask_getRawResult_R_java_lang_Object])(ctx, (frame[0].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_java_util_concurrent_ForkJoinTask_get_long_java_util_concurrent_TimeUnit_R_java_lang_Object(jcontext ctx, jobject self, jlong param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[23];
	auto stack = &frame[18];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/concurrent/ForkJoinTask:get", 23 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].l = param0;
	frame[3].o = param1;
	{
	LINE_NUMBER(1018);
	jlong temp0 = (jlong)((func_java_util_concurrent_TimeUnit_toNanos_long_R_long) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_java_util_concurrent_TimeUnit_toNanos_long_R_long])(ctx, (frame[3].o), (frame[1].l));
	frame[5].l = temp0;
	LINE_NUMBER(1019);
	jint temp1 = (jint)SM_java_lang_Thread_interrupted_R_boolean(ctx);
	if (temp1 == 0) goto label_8;
	}
	{
	LINE_NUMBER(1020);
	clinit_java_lang_InterruptedException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_InterruptedException);
	init_java_lang_InterruptedException(ctx, sp[0].o);
	throwException(ctx, sp[0].o);	}
label_8:;
	{
	LINE_NUMBER(1021);
	jint temp0 = (jint)((java_util_concurrent_ForkJoinTask *) NULL_CHECK((frame[0].o)))->F_status;
	frame[4].i = temp0;
	if (temp0 < 0) goto label_11;
	}
	{
	if ((longCompare((frame[5].l), (jlong(0)))) <= 0) goto label_11;
	}
	{
	LINE_NUMBER(1022);
	jlong temp0 = (jlong)SM_java_lang_System_nanoTime_R_long(ctx);
	frame[7].l = (temp0 + (frame[5].l));
	LINE_NUMBER(1023);
	if ((longCompare((frame[7].l), (jlong(0)))) != 0) goto label_14;
	}
	INST_LCONST(1);
	goto label_15;
label_14:;
	INST_LLOAD(7);
label_15:;
	{
	sp -= 1;
	frame[9].l = sp[0].l;
	LINE_NUMBER(1024);
	sp[0].o = (jobject)SM_java_lang_Thread_currentThread_R_java_lang_Thread(ctx);
	frame[11].o = sp[0].o;
	LINE_NUMBER(1025);
	if ((isInstance(ctx, (frame[11].o), &class_java_util_concurrent_ForkJoinWorkerThread)) == 0) goto label_18;
	}
	{
	LINE_NUMBER(1026);
	frame[12].o = (checkCast(ctx, &class_java_util_concurrent_ForkJoinWorkerThread, (frame[11].o)));
	LINE_NUMBER(1027);
	sp[0].o = (jobject)((java_util_concurrent_ForkJoinWorkerThread *) NULL_CHECK((frame[12].o)))->F_pool;
	sp[1].o = (jobject)((java_util_concurrent_ForkJoinWorkerThread *) NULL_CHECK((frame[12].o)))->F_workQueue;
	jint temp0 = (jint)((func_java_util_concurrent_ForkJoinPool_awaitJoin_java_util_concurrent_ForkJoinPool$WorkQueue_java_util_concurrent_ForkJoinTask_long_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_concurrent_ForkJoinPool_awaitJoin_java_util_concurrent_ForkJoinPool$WorkQueue_java_util_concurrent_ForkJoinTask_long_R_int])(ctx, sp[0].o, sp[1].o, (frame[0].o), (frame[9].l));
	frame[4].i = temp0;
	LINE_NUMBER(1028);
	goto label_11;
	}
label_18:;
	{
	LINE_NUMBER(1029);
	if ((isInstance(ctx, (frame[0].o), &class_java_util_concurrent_CountedCompleter)) == 0) goto label_22;
	}
	{
	LINE_NUMBER(1030);
	clinit_java_util_concurrent_ForkJoinPool(ctx);
	sp[0].o = (jobject)SF_java_util_concurrent_ForkJoinPool_common;
	jint temp0 = (jint)((func_java_util_concurrent_ForkJoinPool_externalHelpComplete_java_util_concurrent_CountedCompleter_int_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_concurrent_ForkJoinPool_externalHelpComplete_java_util_concurrent_CountedCompleter_int_R_int])(ctx, sp[0].o, (checkCast(ctx, &class_java_util_concurrent_CountedCompleter, (frame[0].o))), (jint(0)));
	sp[0].i = temp0;
	sp += 1;
	goto label_24;
	}
label_22:;
	{
	LINE_NUMBER(1032);
	clinit_java_util_concurrent_ForkJoinPool(ctx);
	sp[0].o = (jobject)SF_java_util_concurrent_ForkJoinPool_common;
	jint temp0 = (jint)((func_java_util_concurrent_ForkJoinPool_tryExternalUnpush_java_util_concurrent_ForkJoinTask_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_concurrent_ForkJoinPool_tryExternalUnpush_java_util_concurrent_ForkJoinTask_R_boolean])(ctx, sp[0].o, (frame[0].o));
	if (temp0 == 0) goto label_25;
	}
	{
	LINE_NUMBER(1033);
	jint temp0 = (jint)((func_java_util_concurrent_ForkJoinTask_doExec_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_util_concurrent_ForkJoinTask_doExec_R_int])(ctx, (frame[0].o));
	sp[0].i = temp0;
	sp += 1;
	goto label_24;
	}
label_25:;
	INST_ICONST(0);
label_24:;
	{
	sp -= 1;
	frame[4].i = sp[0].i;
	if (sp[0].i < 0) goto label_11;
	}
label_27:;
	{
	LINE_NUMBER(1035);
	jint temp0 = (jint)((java_util_concurrent_ForkJoinTask *) NULL_CHECK((frame[0].o)))->F_status;
	frame[4].i = temp0;
	if (temp0 < 0) goto label_11;
	}
	{
	jlong temp0 = frame[9].l;
	LINE_NUMBER(1036);
	jlong temp1 = (jlong)SM_java_lang_System_nanoTime_R_long(ctx);
	jlong temp2 = temp0 - temp1;
	frame[12].l = temp2;
	if ((longCompare(temp2, (jlong(0)))) <= 0) goto label_11;
	}
	{
	LINE_NUMBER(1037);
	clinit_java_util_concurrent_TimeUnit(ctx);
	sp[0].o = (jobject)SF_java_util_concurrent_TimeUnit_NANOSECONDS;
	jlong temp0 = (jlong)((func_java_util_concurrent_TimeUnit_toMillis_long_R_long) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_concurrent_TimeUnit_toMillis_long_R_long])(ctx, sp[0].o, (frame[12].l));
	frame[14].l = temp0;
	if ((longCompare(temp0, (jlong(0)))) <= 0) goto label_27;
	}
	{
	if (((jint)((java_util_concurrent_ForkJoinTask *) NULL_CHECK((frame[0].o)))->F_status) != (frame[4].i)) goto label_27;
	}
	{
	LINE_NUMBER(1038);
	((java_util_concurrent_ForkJoinTask *) NULL_CHECK((frame[0].o)))->F_status = ((frame[4].i) | (jint(65536)));
	LINE_NUMBER(1039);
	sp[0].o = frame[0].o;
	frame[16].o = sp[0].o;
	monitorEnter(ctx, sp[0].o);
	}
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(1040);
	if (((jint)((java_util_concurrent_ForkJoinTask *) NULL_CHECK((frame[0].o)))->F_status) < 0) goto label_34;
	}
	{
	LINE_NUMBER(1041);
	((func_java_lang_Object_wait_long) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_lang_Object_wait_long])(ctx, (frame[0].o), (frame[14].l));
	goto label_36;
	}
label_34:;
	{
	LINE_NUMBER(1043);
	((func_java_lang_Object_notifyAll) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_lang_Object_notifyAll])(ctx, (frame[0].o));
	}
label_36:;
	{
	LINE_NUMBER(1044);
	monitorExit(ctx, (frame[16].o));
	}
	popExceptionFrame(frameRef);
	goto label_37;
label_2:;
label_5: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	sp -= 1;
	frame[17].o = sp[0].o;
	monitorExit(ctx, (frame[16].o));
	}
	popExceptionFrame(frameRef);
	INST_ALOAD(17);
	INST_ATHROW();
	label_37:;
	goto label_27;
label_11:;
	{
	LINE_NUMBER(1049);
	if ((frame[4].i) < 0) goto label_38;
	}
	{
	LINE_NUMBER(1050);
	frame[4].i = ((jint)((java_util_concurrent_ForkJoinTask *) NULL_CHECK((frame[0].o)))->F_status);
	}
label_38:;
	{
	LINE_NUMBER(1051);
	jint temp0 = (frame[4].i) & (jint(-268435456));
	frame[4].i = temp0;
	if (temp0 == (jint(-268435456))) goto label_40;
	}
	{
	LINE_NUMBER(1052);
	if ((frame[4].i) != (jint(-1073741824))) goto label_42;
	}
	{
	LINE_NUMBER(1053);
	clinit_java_util_concurrent_CancellationException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_util_concurrent_CancellationException);
	init_java_util_concurrent_CancellationException(ctx, sp[0].o);
	throwException(ctx, sp[0].o);	}
label_42:;
	{
	LINE_NUMBER(1054);
	if ((frame[4].i) == (bit_cast<jint>(0x80000000))) goto label_44;
	}
	{
	LINE_NUMBER(1055);
	clinit_java_util_concurrent_TimeoutException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_util_concurrent_TimeoutException);
	init_java_util_concurrent_TimeoutException(ctx, sp[0].o);
	throwException(ctx, sp[0].o);	}
label_44:;
	{
	LINE_NUMBER(1056);
	clinit_java_util_concurrent_ExecutionException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_util_concurrent_ExecutionException);
	sp[1].o = (jobject)M_java_util_concurrent_ForkJoinTask_getThrowableException_R_java_lang_Throwable(ctx, (frame[0].o));
	init_java_util_concurrent_ExecutionException_java_lang_Throwable(ctx, sp[0].o, sp[1].o);
	throwException(ctx, sp[0].o);	}
label_40:;
	{
	LINE_NUMBER(1058);
	sp[0].o = (jobject)((func_java_util_concurrent_ForkJoinTask_getRawResult_R_java_lang_Object) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_util_concurrent_ForkJoinTask_getRawResult_R_java_lang_Object])(ctx, (frame[0].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void M_java_util_concurrent_ForkJoinTask_quietlyJoin(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/concurrent/ForkJoinTask:quietlyJoin", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(1068);
	jint temp0 = (jint)M_java_util_concurrent_ForkJoinTask_doJoin_R_int(ctx, (frame[0].o));
	LINE_NUMBER(1069);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_java_util_concurrent_ForkJoinTask_quietlyInvoke(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/concurrent/ForkJoinTask:quietlyInvoke", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(1077);
	jint temp0 = (jint)M_java_util_concurrent_ForkJoinTask_doInvoke_R_int(ctx, (frame[0].o));
	LINE_NUMBER(1078);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_java_util_concurrent_ForkJoinTask_helpQuiesce(jcontext ctx) {
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/concurrent/ForkJoinTask:helpQuiesce", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_util_concurrent_ForkJoinTask(ctx);
	{
	LINE_NUMBER(1089);
	sp[0].o = (jobject)SM_java_lang_Thread_currentThread_R_java_lang_Thread(ctx);
	frame[0].o = sp[0].o;
	if ((isInstance(ctx, sp[0].o, &class_java_util_concurrent_ForkJoinWorkerThread)) == 0) goto label_2;
	}
	{
	LINE_NUMBER(1090);
	frame[1].o = (checkCast(ctx, &class_java_util_concurrent_ForkJoinWorkerThread, (frame[0].o)));
	LINE_NUMBER(1091);
	sp[0].o = (jobject)((java_util_concurrent_ForkJoinWorkerThread *) NULL_CHECK((frame[1].o)))->F_pool;
	sp[1].o = (jobject)((java_util_concurrent_ForkJoinWorkerThread *) NULL_CHECK((frame[1].o)))->F_workQueue;
	((func_java_util_concurrent_ForkJoinPool_helpQuiescePool_java_util_concurrent_ForkJoinPool$WorkQueue) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_concurrent_ForkJoinPool_helpQuiescePool_java_util_concurrent_ForkJoinPool$WorkQueue])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(1092);
	goto label_6;
	}
label_2:;
	LINE_NUMBER(1094);
	SM_java_util_concurrent_ForkJoinPool_quiesceCommonPool(ctx);
label_6:;
	LINE_NUMBER(1095);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_java_util_concurrent_ForkJoinTask_reinitialize(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/concurrent/ForkJoinTask:reinitialize", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(1114);
	if ((((jint)((java_util_concurrent_ForkJoinTask *) NULL_CHECK((frame[0].o)))->F_status) & (jint(-268435456))) != (bit_cast<jint>(0x80000000))) goto label_1;
	}
	{
	LINE_NUMBER(1115);
	M_java_util_concurrent_ForkJoinTask_clearExceptionalCompletion(ctx, (frame[0].o));
	goto label_3;
	}
label_1:;
	{
	LINE_NUMBER(1117);
	((java_util_concurrent_ForkJoinTask *) NULL_CHECK((frame[0].o)))->F_status = (jint(0));
	}
label_3:;
	LINE_NUMBER(1118);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jobject SM_java_util_concurrent_ForkJoinTask_getPool_R_java_util_concurrent_ForkJoinPool(jcontext ctx) {
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/concurrent/ForkJoinTask:getPool", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_util_concurrent_ForkJoinTask(ctx);
	{
	LINE_NUMBER(1130);
	sp[0].o = (jobject)SM_java_lang_Thread_currentThread_R_java_lang_Thread(ctx);
	frame[0].o = sp[0].o;
	LINE_NUMBER(1131);
	if ((isInstance(ctx, (frame[0].o), &class_java_util_concurrent_ForkJoinWorkerThread)) == 0) goto label_2;
	}
	{
	LINE_NUMBER(1132);
	sp[0].o = (jobject)((java_util_concurrent_ForkJoinWorkerThread *) NULL_CHECK((checkCast(ctx, &class_java_util_concurrent_ForkJoinWorkerThread, (frame[0].o)))))->F_pool;
	sp += 1;
	goto label_4;
	}
label_2:;
	INST_ACONST_NULL();
label_4:;
	LINE_NUMBER(1131);
	popStackFrame(ctx);
	INST_ARETURN();

	popStackFrame(ctx);
}

jbool SM_java_util_concurrent_ForkJoinTask_inForkJoinPool_R_boolean(jcontext ctx) {
	jtype frame[1];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/concurrent/ForkJoinTask:inForkJoinPool", 1 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_util_concurrent_ForkJoinTask(ctx);
	{
	LINE_NUMBER(1144);
	sp[0].o = (jobject)SM_java_lang_Thread_currentThread_R_java_lang_Thread(ctx);
	popStackFrame(ctx);
	return (isInstance(ctx, sp[0].o, &class_java_util_concurrent_ForkJoinWorkerThread));
	}

	popStackFrame(ctx);
}

jbool M_java_util_concurrent_ForkJoinTask_tryUnfork_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/concurrent/ForkJoinTask:tryUnfork", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(1159);
	sp[0].o = (jobject)SM_java_lang_Thread_currentThread_R_java_lang_Thread(ctx);
	frame[1].o = sp[0].o;
	if ((isInstance(ctx, sp[0].o, &class_java_util_concurrent_ForkJoinWorkerThread)) == 0) goto label_2;
	}
	{
	LINE_NUMBER(1160);
	sp[0].o = (jobject)((java_util_concurrent_ForkJoinWorkerThread *) NULL_CHECK((checkCast(ctx, &class_java_util_concurrent_ForkJoinWorkerThread, (frame[1].o)))))->F_workQueue;
	jint temp0 = (jint)((func_java_util_concurrent_ForkJoinPool$WorkQueue_tryUnpush_java_util_concurrent_ForkJoinTask_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_concurrent_ForkJoinPool$WorkQueue_tryUnpush_java_util_concurrent_ForkJoinTask_R_boolean])(ctx, sp[0].o, (frame[0].o));
	sp[0].i = temp0;
	sp += 1;
	goto label_4;
	}
label_2:;
	{
	LINE_NUMBER(1161);
	clinit_java_util_concurrent_ForkJoinPool(ctx);
	sp[0].o = (jobject)SF_java_util_concurrent_ForkJoinPool_common;
	jint temp0 = (jint)((func_java_util_concurrent_ForkJoinPool_tryExternalUnpush_java_util_concurrent_ForkJoinTask_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_concurrent_ForkJoinPool_tryExternalUnpush_java_util_concurrent_ForkJoinTask_R_boolean])(ctx, sp[0].o, (frame[0].o));
	sp[0].i = temp0;
	sp += 1;
	}
label_4:;
	LINE_NUMBER(1159);
	popStackFrame(ctx);
	INST_IRETURN();

	popStackFrame(ctx);
}

jint SM_java_util_concurrent_ForkJoinTask_getQueuedTaskCount_R_int(jcontext ctx) {
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/concurrent/ForkJoinTask:getQueuedTaskCount", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_util_concurrent_ForkJoinTask(ctx);
	{
	LINE_NUMBER(1174);
	sp[0].o = (jobject)SM_java_lang_Thread_currentThread_R_java_lang_Thread(ctx);
	frame[0].o = sp[0].o;
	if ((isInstance(ctx, sp[0].o, &class_java_util_concurrent_ForkJoinWorkerThread)) == 0) goto label_2;
	}
	{
	LINE_NUMBER(1175);
	sp[0].o = (jobject)((java_util_concurrent_ForkJoinWorkerThread *) NULL_CHECK((checkCast(ctx, &class_java_util_concurrent_ForkJoinWorkerThread, (frame[0].o)))))->F_workQueue;
	frame[1].o = sp[0].o;
	goto label_5;
	}
label_2:;
	{
	LINE_NUMBER(1177);
	sp[0].o = (jobject)SM_java_util_concurrent_ForkJoinPool_commonSubmitterQueue_R_java_util_concurrent_ForkJoinPool$WorkQueue(ctx);
	frame[1].o = sp[0].o;
	}
label_5:;
	{
	LINE_NUMBER(1178);
	if ((frame[1].o) != nullptr) goto label_6;
	}
	INST_ICONST(0);
	goto label_7;
label_6:;
	INST_ALOAD(1);
	POP_N(1); // Pop method args
	sp->i = (jint)((func_java_util_concurrent_ForkJoinPool$WorkQueue_queueSize_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_concurrent_ForkJoinPool$WorkQueue_queueSize_R_int])(ctx, sp[0].o);
	sp++;
label_7:;
	popStackFrame(ctx);
	INST_IRETURN();

	popStackFrame(ctx);
}

jint SM_java_util_concurrent_ForkJoinTask_getSurplusQueuedTaskCount_R_int(jcontext ctx) {
	jtype frame[1];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/concurrent/ForkJoinTask:getSurplusQueuedTaskCount", 1 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_util_concurrent_ForkJoinTask(ctx);
	{
	LINE_NUMBER(1195);
	jint temp0 = (jint)SM_java_util_concurrent_ForkJoinPool_getSurplusQueuedTaskCount_R_int(ctx);
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jobject SM_java_util_concurrent_ForkJoinTask_peekNextLocalTask_R_java_util_concurrent_ForkJoinTask(jcontext ctx) {
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/concurrent/ForkJoinTask:peekNextLocalTask", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_util_concurrent_ForkJoinTask(ctx);
	{
	LINE_NUMBER(1250);
	sp[0].o = (jobject)SM_java_lang_Thread_currentThread_R_java_lang_Thread(ctx);
	frame[0].o = sp[0].o;
	if ((isInstance(ctx, sp[0].o, &class_java_util_concurrent_ForkJoinWorkerThread)) == 0) goto label_2;
	}
	{
	LINE_NUMBER(1251);
	sp[0].o = (jobject)((java_util_concurrent_ForkJoinWorkerThread *) NULL_CHECK((checkCast(ctx, &class_java_util_concurrent_ForkJoinWorkerThread, (frame[0].o)))))->F_workQueue;
	frame[1].o = sp[0].o;
	goto label_5;
	}
label_2:;
	{
	LINE_NUMBER(1253);
	sp[0].o = (jobject)SM_java_util_concurrent_ForkJoinPool_commonSubmitterQueue_R_java_util_concurrent_ForkJoinPool$WorkQueue(ctx);
	frame[1].o = sp[0].o;
	}
label_5:;
	{
	LINE_NUMBER(1254);
	if ((frame[1].o) != nullptr) goto label_6;
	}
	INST_ACONST_NULL();
	goto label_7;
label_6:;
	INST_ALOAD(1);
	POP_N(1); // Pop method args
	sp->o = (jobject)((func_java_util_concurrent_ForkJoinPool$WorkQueue_peek_R_java_util_concurrent_ForkJoinTask) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_concurrent_ForkJoinPool$WorkQueue_peek_R_java_util_concurrent_ForkJoinTask])(ctx, sp[0].o);
	sp++;
label_7:;
	popStackFrame(ctx);
	INST_ARETURN();

	popStackFrame(ctx);
}

jobject SM_java_util_concurrent_ForkJoinTask_pollNextLocalTask_R_java_util_concurrent_ForkJoinTask(jcontext ctx) {
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/concurrent/ForkJoinTask:pollNextLocalTask", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_util_concurrent_ForkJoinTask(ctx);
	{
	LINE_NUMBER(1268);
	sp[0].o = (jobject)SM_java_lang_Thread_currentThread_R_java_lang_Thread(ctx);
	frame[0].o = sp[0].o;
	if ((isInstance(ctx, sp[0].o, &class_java_util_concurrent_ForkJoinWorkerThread)) == 0) goto label_2;
	}
	{
	LINE_NUMBER(1269);
	sp[0].o = (jobject)((java_util_concurrent_ForkJoinWorkerThread *) NULL_CHECK((checkCast(ctx, &class_java_util_concurrent_ForkJoinWorkerThread, (frame[0].o)))))->F_workQueue;
	sp[0].o = (jobject)((func_java_util_concurrent_ForkJoinPool$WorkQueue_nextLocalTask_R_java_util_concurrent_ForkJoinTask) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_concurrent_ForkJoinPool$WorkQueue_nextLocalTask_R_java_util_concurrent_ForkJoinTask])(ctx, sp[0].o);
	sp += 1;
	goto label_4;
	}
label_2:;
	LINE_NUMBER(1270);
	INST_ACONST_NULL();
label_4:;
	LINE_NUMBER(1268);
	popStackFrame(ctx);
	INST_ARETURN();

	popStackFrame(ctx);
}

jobject SM_java_util_concurrent_ForkJoinTask_pollTask_R_java_util_concurrent_ForkJoinTask(jcontext ctx) {
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/concurrent/ForkJoinTask:pollTask", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_util_concurrent_ForkJoinTask(ctx);
	{
	LINE_NUMBER(1288);
	sp[0].o = (jobject)SM_java_lang_Thread_currentThread_R_java_lang_Thread(ctx);
	frame[0].o = sp[0].o;
	if ((isInstance(ctx, sp[0].o, &class_java_util_concurrent_ForkJoinWorkerThread)) == 0) goto label_2;
	}
	{
	LINE_NUMBER(1289);
	sp[0].o = checkCast(ctx, &class_java_util_concurrent_ForkJoinWorkerThread, (frame[0].o));
	frame[1].o = sp[0].o;
	sp[0].o = (jobject)((java_util_concurrent_ForkJoinWorkerThread *) NULL_CHECK(sp[0].o))->F_pool;
	sp[1].o = (jobject)((java_util_concurrent_ForkJoinWorkerThread *) NULL_CHECK((frame[1].o)))->F_workQueue;
	sp[0].o = (jobject)((func_java_util_concurrent_ForkJoinPool_nextTaskFor_java_util_concurrent_ForkJoinPool$WorkQueue_R_java_util_concurrent_ForkJoinTask) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_concurrent_ForkJoinPool_nextTaskFor_java_util_concurrent_ForkJoinPool$WorkQueue_R_java_util_concurrent_ForkJoinTask])(ctx, sp[0].o, sp[1].o);
	sp += 1;
	goto label_5;
	}
label_2:;
	LINE_NUMBER(1290);
	INST_ACONST_NULL();
label_5:;
	LINE_NUMBER(1288);
	popStackFrame(ctx);
	INST_ARETURN();

	popStackFrame(ctx);
}

jobject SM_java_util_concurrent_ForkJoinTask_pollSubmission_R_java_util_concurrent_ForkJoinTask(jcontext ctx) {
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/concurrent/ForkJoinTask:pollSubmission", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_util_concurrent_ForkJoinTask(ctx);
	{
	LINE_NUMBER(1306);
	sp[0].o = (jobject)SM_java_lang_Thread_currentThread_R_java_lang_Thread(ctx);
	frame[0].o = sp[0].o;
	if ((isInstance(ctx, sp[0].o, &class_java_util_concurrent_ForkJoinWorkerThread)) == 0) goto label_2;
	}
	{
	LINE_NUMBER(1307);
	sp[0].o = (jobject)((java_util_concurrent_ForkJoinWorkerThread *) NULL_CHECK((checkCast(ctx, &class_java_util_concurrent_ForkJoinWorkerThread, (frame[0].o)))))->F_pool;
	sp[0].o = (jobject)((func_java_util_concurrent_ForkJoinPool_pollSubmission_R_java_util_concurrent_ForkJoinTask) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_concurrent_ForkJoinPool_pollSubmission_R_java_util_concurrent_ForkJoinTask])(ctx, sp[0].o);
	sp += 1;
	goto label_4;
	}
label_2:;
	INST_ACONST_NULL();
label_4:;
	LINE_NUMBER(1306);
	popStackFrame(ctx);
	INST_ARETURN();

	popStackFrame(ctx);
}

jshort M_java_util_concurrent_ForkJoinTask_getForkJoinTaskTag_R_short(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/concurrent/ForkJoinTask:getForkJoinTaskTag", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(1319);
	popStackFrame(ctx);
	return (jshort(((jint)((java_util_concurrent_ForkJoinTask *) NULL_CHECK((frame[0].o)))->F_status)));
	}

	popStackFrame(ctx);
}

jshort M_java_util_concurrent_ForkJoinTask_setForkJoinTaskTag_short_R_short(jcontext ctx, jobject self, jshort param0) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/concurrent/ForkJoinTask:setForkJoinTaskTag", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, self);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(1331);
	frame[2].i = ((jint)((java_util_concurrent_ForkJoinTask *) NULL_CHECK((frame[0].o)))->F_status);
	LINE_NUMBER(1332);
	((java_util_concurrent_ForkJoinTask *) NULL_CHECK((frame[0].o)))->F_status = (((frame[2].i) & (jint(-65536))) | ((frame[1].i) & (jint(65535))));
	LINE_NUMBER(1333);
	popStackFrame(ctx, self);
	return (jshort((frame[2].i)));
	}

	popStackFrame(ctx);
}

jbool M_java_util_concurrent_ForkJoinTask_compareAndSetForkJoinTaskTag_short_short_R_boolean(jcontext ctx, jobject self, jshort param0, jshort param1) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/concurrent/ForkJoinTask:compareAndSetForkJoinTaskTag", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, self);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].i = param1;
label_0:;
	{
	LINE_NUMBER(1353);
	jint temp0 = (jint)((java_util_concurrent_ForkJoinTask *) NULL_CHECK((frame[0].o)))->F_status;
	frame[3].i = temp0;
	if ((jshort(temp0)) == (frame[1].i)) goto label_2;
	}
	{
	LINE_NUMBER(1354);
	popStackFrame(ctx, self);
	return (jint(0));
	}
label_2:;
	{
	LINE_NUMBER(1355);
	if (((jint)((java_util_concurrent_ForkJoinTask *) NULL_CHECK((frame[0].o)))->F_status) != (frame[3].i)) goto label_0;
	}
	{
	LINE_NUMBER(1356);
	((java_util_concurrent_ForkJoinTask *) NULL_CHECK((frame[0].o)))->F_status = (((frame[3].i) & (jint(-65536))) | ((frame[2].i) & (jint(65535))));
	LINE_NUMBER(1357);
	popStackFrame(ctx, self);
	return (jint(1));
	}

	popStackFrame(ctx);
}

jobject SM_java_util_concurrent_ForkJoinTask_adapt_java_lang_Runnable_R_java_util_concurrent_ForkJoinTask(jcontext ctx, jobject param0) {
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/concurrent/ForkJoinTask:adapt", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_util_concurrent_ForkJoinTask(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(1454);
	clinit_java_util_concurrent_ForkJoinTask$AdaptedRunnableAction(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_util_concurrent_ForkJoinTask$AdaptedRunnableAction);
	init_java_util_concurrent_ForkJoinTask$AdaptedRunnableAction_java_lang_Runnable(ctx, sp[0].o, (frame[0].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject SM_java_util_concurrent_ForkJoinTask_adapt_java_lang_Runnable_java_lang_Object_R_java_util_concurrent_ForkJoinTask(jcontext ctx, jobject param0, jobject param1) {
	jtype frame[6];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/concurrent/ForkJoinTask:adapt", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_util_concurrent_ForkJoinTask(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	{
	LINE_NUMBER(1468);
	clinit_java_util_concurrent_ForkJoinTask$AdaptedRunnable(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_util_concurrent_ForkJoinTask$AdaptedRunnable);
	init_java_util_concurrent_ForkJoinTask$AdaptedRunnable_java_lang_Runnable_java_lang_Object(ctx, sp[0].o, (frame[0].o), (frame[1].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject SM_java_util_concurrent_ForkJoinTask_adapt_java_util_concurrent_Callable_R_java_util_concurrent_ForkJoinTask(jcontext ctx, jobject param0) {
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/concurrent/ForkJoinTask:adapt", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_util_concurrent_ForkJoinTask(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(1482);
	clinit_java_util_concurrent_ForkJoinTask$AdaptedCallable(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_util_concurrent_ForkJoinTask$AdaptedCallable);
	init_java_util_concurrent_ForkJoinTask$AdaptedCallable_java_util_concurrent_Callable(ctx, sp[0].o, (frame[0].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void M_java_util_concurrent_ForkJoinTask_writeObject_java_io_ObjectOutputStream(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/concurrent/ForkJoinTask:writeObject", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(1499);
	((func_java_io_ObjectOutputStream_defaultWriteObject) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_io_ObjectOutputStream_defaultWriteObject])(ctx, (frame[1].o));
	LINE_NUMBER(1500);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((func_java_util_concurrent_ForkJoinTask_getException_R_java_lang_Throwable) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_util_concurrent_ForkJoinTask_getException_R_java_lang_Throwable])(ctx, (frame[0].o));
	((func_java_io_ObjectOutputStream_writeObject_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_io_ObjectOutputStream_writeObject_java_lang_Object])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(1501);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_java_util_concurrent_ForkJoinTask_readObject_java_io_ObjectInputStream(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/concurrent/ForkJoinTask:readObject", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(1512);
	((func_java_io_ObjectInputStream_defaultReadObject) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_io_ObjectInputStream_defaultReadObject])(ctx, (frame[1].o));
	LINE_NUMBER(1513);
	sp[0].o = (jobject)((func_java_io_ObjectInputStream_readObject_R_java_lang_Object) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_io_ObjectInputStream_readObject_R_java_lang_Object])(ctx, (frame[1].o));
	frame[2].o = sp[0].o;
	LINE_NUMBER(1514);
	if ((frame[2].o) == nullptr) goto label_3;
	}
	{
	LINE_NUMBER(1515);
	jint temp0 = (jint)M_java_util_concurrent_ForkJoinTask_setExceptionalCompletion_java_lang_Throwable_R_int(ctx, (frame[0].o), (checkCast(ctx, &class_java_lang_Throwable, (frame[2].o))));
	}
label_3:;
	LINE_NUMBER(1516);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void clinit_java_util_concurrent_ForkJoinTask(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	SF_java_util_concurrent_ForkJoinTask_DONE_MASK = jint(-268435456);
	SF_java_util_concurrent_ForkJoinTask_NORMAL = jint(-268435456);
	SF_java_util_concurrent_ForkJoinTask_CANCELLED = jint(-1073741824);
	SF_java_util_concurrent_ForkJoinTask_EXCEPTIONAL = bit_cast<jint>(0x80000000);
	SF_java_util_concurrent_ForkJoinTask_SIGNAL = jint(65536);
	SF_java_util_concurrent_ForkJoinTask_SMASK = jint(65535);
	SF_java_util_concurrent_ForkJoinTask_serialVersionUID = jlong(-7721805057305804111ll);
	jtype frame[2];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/concurrent/ForkJoinTask:<clinit>", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_util_concurrent_ForkJoinTask(ctx);
	{
	LINE_NUMBER(420);
	sp[0].o = (jobject)createArray(ctx, &class_java_util_concurrent_ForkJoinTask$ExceptionNode, (32));
	clinit_java_util_concurrent_ForkJoinTask(ctx);
	SF_java_util_concurrent_ForkJoinTask_exceptionTable = sp[0].o;
	LINE_NUMBER(424);
	clinit_java_util_concurrent_locks_ReentrantLock(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_util_concurrent_locks_ReentrantLock);
	init_java_util_concurrent_locks_ReentrantLock(ctx, sp[0].o);
	clinit_java_util_concurrent_ForkJoinTask(ctx);
	SF_java_util_concurrent_ForkJoinTask_exceptionTableLock = sp[0].o;
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void *vtable_java_util_concurrent_ForkJoinTask[] {
	(void *) M_java_lang_Object_hashCode_R_int,
	(void *) M_java_lang_Object_equals_java_lang_Object_R_boolean,
	(void *) M_java_lang_Object_clone_R_java_lang_Object,
	(void *) M_java_lang_Object_getClass_R_java_lang_Class,
	(void *) M_java_lang_Object_toString_R_java_lang_String,
	(void *) M_java_lang_Object_finalize,
	(void *) M_java_lang_Object_notify,
	(void *) M_java_lang_Object_notifyAll,
	(void *) M_java_lang_Object_wait,
	(void *) M_java_lang_Object_wait_long,
	(void *) M_java_lang_Object_wait_long_int,
	(void *) M_java_util_concurrent_ForkJoinTask_cancel_boolean_R_boolean,
	(void *) M_java_util_concurrent_ForkJoinTask_isCancelled_R_boolean,
	(void *) M_java_util_concurrent_ForkJoinTask_isDone_R_boolean,
	(void *) M_java_util_concurrent_ForkJoinTask_get_R_java_lang_Object,
	(void *) M_java_util_concurrent_ForkJoinTask_get_long_java_util_concurrent_TimeUnit_R_java_lang_Object,
	(void *) M_java_util_concurrent_ForkJoinTask_setCompletion_int_R_int,
	(void *) M_java_util_concurrent_ForkJoinTask_doExec_R_int,
	(void *) M_java_util_concurrent_ForkJoinTask_internalWait_long,
	(void *) M_java_util_concurrent_ForkJoinTask_externalAwaitDone_R_int,
	(void *) M_java_util_concurrent_ForkJoinTask_externalInterruptibleAwaitDone_R_int,
	(void *) M_java_util_concurrent_ForkJoinTask_doJoin_R_int,
	(void *) M_java_util_concurrent_ForkJoinTask_doInvoke_R_int,
	(void *) M_java_util_concurrent_ForkJoinTask_recordExceptionalCompletion_java_lang_Throwable_R_int,
	(void *) M_java_util_concurrent_ForkJoinTask_setExceptionalCompletion_java_lang_Throwable_R_int,
	(void *) M_java_util_concurrent_ForkJoinTask_internalPropagateException_java_lang_Throwable,
	(void *) M_java_util_concurrent_ForkJoinTask_clearExceptionalCompletion,
	(void *) M_java_util_concurrent_ForkJoinTask_getThrowableException_R_java_lang_Throwable,
	(void *) M_java_util_concurrent_ForkJoinTask_reportException_int,
	(void *) M_java_util_concurrent_ForkJoinTask_fork_R_java_util_concurrent_ForkJoinTask,
	(void *) M_java_util_concurrent_ForkJoinTask_join_R_java_lang_Object,
	(void *) M_java_util_concurrent_ForkJoinTask_invoke_R_java_lang_Object,
	(void *) M_java_util_concurrent_ForkJoinTask_isCompletedAbnormally_R_boolean,
	(void *) M_java_util_concurrent_ForkJoinTask_isCompletedNormally_R_boolean,
	(void *) M_java_util_concurrent_ForkJoinTask_getException_R_java_lang_Throwable,
	(void *) M_java_util_concurrent_ForkJoinTask_completeExceptionally_java_lang_Throwable,
	(void *) M_java_util_concurrent_ForkJoinTask_complete_java_lang_Object,
	(void *) M_java_util_concurrent_ForkJoinTask_quietlyComplete,
	(void *) M_java_util_concurrent_ForkJoinTask_quietlyJoin,
	(void *) M_java_util_concurrent_ForkJoinTask_quietlyInvoke,
	(void *) M_java_util_concurrent_ForkJoinTask_reinitialize,
	(void *) M_java_util_concurrent_ForkJoinTask_tryUnfork_R_boolean,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) M_java_util_concurrent_ForkJoinTask_getForkJoinTaskTag_R_short,
	(void *) M_java_util_concurrent_ForkJoinTask_setForkJoinTaskTag_short_R_short,
	(void *) M_java_util_concurrent_ForkJoinTask_compareAndSetForkJoinTaskTag_short_short_R_boolean,
	(void *) M_java_util_concurrent_ForkJoinTask_writeObject_java_io_ObjectOutputStream,
	(void *) M_java_util_concurrent_ForkJoinTask_readObject_java_io_ObjectInputStream,
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
	{ "cancel", "(Z)Z" },
	{ "isCancelled", "()Z" },
	{ "isDone", "()Z" },
	{ "get", "()Ljava/lang/Object;" },
	{ "get", "(JLjava/util/concurrent/TimeUnit;)Ljava/lang/Object;" },
	{ "setCompletion", "(I)I" },
	{ "doExec", "()I" },
	{ "internalWait", "(J)V" },
	{ "externalAwaitDone", "()I" },
	{ "externalInterruptibleAwaitDone", "()I" },
	{ "doJoin", "()I" },
	{ "doInvoke", "()I" },
	{ "recordExceptionalCompletion", "(Ljava/lang/Throwable;)I" },
	{ "setExceptionalCompletion", "(Ljava/lang/Throwable;)I" },
	{ "internalPropagateException", "(Ljava/lang/Throwable;)V" },
	{ "clearExceptionalCompletion", "()V" },
	{ "getThrowableException", "()Ljava/lang/Throwable;" },
	{ "reportException", "(I)V" },
	{ "fork", "()Ljava/util/concurrent/ForkJoinTask;" },
	{ "join", "()Ljava/lang/Object;" },
	{ "invoke", "()Ljava/lang/Object;" },
	{ "isCompletedAbnormally", "()Z" },
	{ "isCompletedNormally", "()Z" },
	{ "getException", "()Ljava/lang/Throwable;" },
	{ "completeExceptionally", "(Ljava/lang/Throwable;)V" },
	{ "complete", "(Ljava/lang/Object;)V" },
	{ "quietlyComplete", "()V" },
	{ "quietlyJoin", "()V" },
	{ "quietlyInvoke", "()V" },
	{ "reinitialize", "()V" },
	{ "tryUnfork", "()Z" },
	{ "getRawResult", "()Ljava/lang/Object;" },
	{ "setRawResult", "(Ljava/lang/Object;)V" },
	{ "exec", "()Z" },
	{ "getForkJoinTaskTag", "()S" },
	{ "setForkJoinTaskTag", "(S)S" },
	{ "compareAndSetForkJoinTaskTag", "(SS)Z" },
	{ "writeObject", "(Ljava/io/ObjectOutputStream;)V" },
	{ "readObject", "(Ljava/io/ObjectInputStream;)V" },
};

static jclass interfaces[] { &class_java_util_concurrent_Future, &class_java_io_Serializable, };

static jclass innerClasses[] {
	&class_java_util_concurrent_ForkJoinTask$ExceptionNode,
	&class_java_util_concurrent_ForkJoinTask$AdaptedRunnableAction,
	&class_java_util_concurrent_ForkJoinTask$AdaptedRunnable,
	&class_java_util_concurrent_ForkJoinTask$AdaptedCallable,
	&class_java_util_concurrent_ForkJoinTask$RunnableExecuteAction,
};

static FieldMetadata fields[] {
	{ "status", &class_int, offsetof(java_util_concurrent_ForkJoinTask, F_status), "I", 64 },
	{ "DONE_MASK", &class_int, (intptr_t) &SF_java_util_concurrent_ForkJoinTask_DONE_MASK, "I", 24 },
	{ "NORMAL", &class_int, (intptr_t) &SF_java_util_concurrent_ForkJoinTask_NORMAL, "I", 24 },
	{ "CANCELLED", &class_int, (intptr_t) &SF_java_util_concurrent_ForkJoinTask_CANCELLED, "I", 24 },
	{ "EXCEPTIONAL", &class_int, (intptr_t) &SF_java_util_concurrent_ForkJoinTask_EXCEPTIONAL, "I", 24 },
	{ "SIGNAL", &class_int, (intptr_t) &SF_java_util_concurrent_ForkJoinTask_SIGNAL, "I", 24 },
	{ "SMASK", &class_int, (intptr_t) &SF_java_util_concurrent_ForkJoinTask_SMASK, "I", 24 },
	{ "exceptionTable", getArrayClass(&class_java_util_concurrent_ForkJoinTask$ExceptionNode, 1), (intptr_t) &SF_java_util_concurrent_ForkJoinTask_exceptionTable, "[Ljava/util/concurrent/ForkJoinTask$ExceptionNode;", 26 },
	{ "exceptionTableLock", &class_java_util_concurrent_locks_ReentrantLock, (intptr_t) &SF_java_util_concurrent_ForkJoinTask_exceptionTableLock, "Ljava/util/concurrent/locks/ReentrantLock;", 26 },
	{ "serialVersionUID", &class_long, (intptr_t) &SF_java_util_concurrent_ForkJoinTask_serialVersionUID, "J", 26 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_java_util_concurrent_ForkJoinTask, 0, "()V", 1 },
	{ "setCompletion", (intptr_t) M_java_util_concurrent_ForkJoinTask_setCompletion_int_R_int, VTABLE_java_util_concurrent_ForkJoinTask_setCompletion_int_R_int, "(I)I", 34 },
	{ "doExec", (intptr_t) M_java_util_concurrent_ForkJoinTask_doExec_R_int, VTABLE_java_util_concurrent_ForkJoinTask_doExec_R_int, "()I", 16 },
	{ "internalWait", (intptr_t) M_java_util_concurrent_ForkJoinTask_internalWait_long, VTABLE_java_util_concurrent_ForkJoinTask_internalWait_long, "(J)V", 48 },
	{ "externalAwaitDone", (intptr_t) M_java_util_concurrent_ForkJoinTask_externalAwaitDone_R_int, VTABLE_java_util_concurrent_ForkJoinTask_externalAwaitDone_R_int, "()I", 34 },
	{ "externalInterruptibleAwaitDone", (intptr_t) M_java_util_concurrent_ForkJoinTask_externalInterruptibleAwaitDone_R_int, VTABLE_java_util_concurrent_ForkJoinTask_externalInterruptibleAwaitDone_R_int, "()I", 34 },
	{ "doJoin", (intptr_t) M_java_util_concurrent_ForkJoinTask_doJoin_R_int, VTABLE_java_util_concurrent_ForkJoinTask_doJoin_R_int, "()I", 2 },
	{ "doInvoke", (intptr_t) M_java_util_concurrent_ForkJoinTask_doInvoke_R_int, VTABLE_java_util_concurrent_ForkJoinTask_doInvoke_R_int, "()I", 2 },
	{ "recordExceptionalCompletion", (intptr_t) M_java_util_concurrent_ForkJoinTask_recordExceptionalCompletion_java_lang_Throwable_R_int, VTABLE_java_util_concurrent_ForkJoinTask_recordExceptionalCompletion_java_lang_Throwable_R_int, "(Ljava/lang/Throwable;)I", 16 },
	{ "setExceptionalCompletion", (intptr_t) M_java_util_concurrent_ForkJoinTask_setExceptionalCompletion_java_lang_Throwable_R_int, VTABLE_java_util_concurrent_ForkJoinTask_setExceptionalCompletion_java_lang_Throwable_R_int, "(Ljava/lang/Throwable;)I", 2 },
	{ "internalPropagateException", (intptr_t) M_java_util_concurrent_ForkJoinTask_internalPropagateException_java_lang_Throwable, VTABLE_java_util_concurrent_ForkJoinTask_internalPropagateException_java_lang_Throwable, "(Ljava/lang/Throwable;)V", 0 },
	{ "cancelIgnoringExceptions", (intptr_t) SM_java_util_concurrent_ForkJoinTask_cancelIgnoringExceptions_java_util_concurrent_ForkJoinTask, 0, "(Ljava/util/concurrent/ForkJoinTask;)V", 24 },
	{ "clearExceptionalCompletion", (intptr_t) M_java_util_concurrent_ForkJoinTask_clearExceptionalCompletion, VTABLE_java_util_concurrent_ForkJoinTask_clearExceptionalCompletion, "()V", 2 },
	{ "getThrowableException", (intptr_t) M_java_util_concurrent_ForkJoinTask_getThrowableException_R_java_lang_Throwable, VTABLE_java_util_concurrent_ForkJoinTask_getThrowableException_R_java_lang_Throwable, "()Ljava/lang/Throwable;", 2 },
	{ "expungeStaleExceptions", (intptr_t) SM_java_util_concurrent_ForkJoinTask_expungeStaleExceptions, 0, "()V", 10 },
	{ "helpExpungeStaleExceptions", (intptr_t) SM_java_util_concurrent_ForkJoinTask_helpExpungeStaleExceptions, 0, "()V", 24 },
	{ "rethrow", (intptr_t) SM_java_util_concurrent_ForkJoinTask_rethrow_java_lang_Throwable, 0, "(Ljava/lang/Throwable;)V", 8 },
	{ "uncheckedThrow", (intptr_t) SM_java_util_concurrent_ForkJoinTask_uncheckedThrow_java_lang_Throwable, 0, "(Ljava/lang/Throwable;)V", 8 },
	{ "reportException", (intptr_t) M_java_util_concurrent_ForkJoinTask_reportException_int, VTABLE_java_util_concurrent_ForkJoinTask_reportException_int, "(I)V", 2 },
	{ "fork", (intptr_t) M_java_util_concurrent_ForkJoinTask_fork_R_java_util_concurrent_ForkJoinTask, VTABLE_java_util_concurrent_ForkJoinTask_fork_R_java_util_concurrent_ForkJoinTask, "()Ljava/util/concurrent/ForkJoinTask;", 17 },
	{ "join", (intptr_t) M_java_util_concurrent_ForkJoinTask_join_R_java_lang_Object, VTABLE_java_util_concurrent_ForkJoinTask_join_R_java_lang_Object, "()Ljava/lang/Object;", 17 },
	{ "invoke", (intptr_t) M_java_util_concurrent_ForkJoinTask_invoke_R_java_lang_Object, VTABLE_java_util_concurrent_ForkJoinTask_invoke_R_java_lang_Object, "()Ljava/lang/Object;", 17 },
	{ "invokeAll", (intptr_t) SM_java_util_concurrent_ForkJoinTask_invokeAll_java_util_concurrent_ForkJoinTask_java_util_concurrent_ForkJoinTask, 0, "(Ljava/util/concurrent/ForkJoinTask;Ljava/util/concurrent/ForkJoinTask;)V", 9 },
	{ "invokeAll", (intptr_t) SM_java_util_concurrent_ForkJoinTask_invokeAll_Array1_java_util_concurrent_ForkJoinTask, 0, "([Ljava/util/concurrent/ForkJoinTask;)V", 137 },
	{ "invokeAll", (intptr_t) SM_java_util_concurrent_ForkJoinTask_invokeAll_java_util_Collection_R_java_util_Collection, 0, "(Ljava/util/Collection;)Ljava/util/Collection;", 9 },
	{ "cancel", (intptr_t) M_java_util_concurrent_ForkJoinTask_cancel_boolean_R_boolean, VTABLE_java_util_concurrent_ForkJoinTask_cancel_boolean_R_boolean, "(Z)Z", 1 },
	{ "isDone", (intptr_t) M_java_util_concurrent_ForkJoinTask_isDone_R_boolean, VTABLE_java_util_concurrent_ForkJoinTask_isDone_R_boolean, "()Z", 17 },
	{ "isCancelled", (intptr_t) M_java_util_concurrent_ForkJoinTask_isCancelled_R_boolean, VTABLE_java_util_concurrent_ForkJoinTask_isCancelled_R_boolean, "()Z", 17 },
	{ "isCompletedAbnormally", (intptr_t) M_java_util_concurrent_ForkJoinTask_isCompletedAbnormally_R_boolean, VTABLE_java_util_concurrent_ForkJoinTask_isCompletedAbnormally_R_boolean, "()Z", 17 },
	{ "isCompletedNormally", (intptr_t) M_java_util_concurrent_ForkJoinTask_isCompletedNormally_R_boolean, VTABLE_java_util_concurrent_ForkJoinTask_isCompletedNormally_R_boolean, "()Z", 17 },
	{ "getException", (intptr_t) M_java_util_concurrent_ForkJoinTask_getException_R_java_lang_Throwable, VTABLE_java_util_concurrent_ForkJoinTask_getException_R_java_lang_Throwable, "()Ljava/lang/Throwable;", 17 },
	{ "completeExceptionally", (intptr_t) M_java_util_concurrent_ForkJoinTask_completeExceptionally_java_lang_Throwable, VTABLE_java_util_concurrent_ForkJoinTask_completeExceptionally_java_lang_Throwable, "(Ljava/lang/Throwable;)V", 1 },
	{ "complete", (intptr_t) M_java_util_concurrent_ForkJoinTask_complete_java_lang_Object, VTABLE_java_util_concurrent_ForkJoinTask_complete_java_lang_Object, "(Ljava/lang/Object;)V", 1 },
	{ "quietlyComplete", (intptr_t) M_java_util_concurrent_ForkJoinTask_quietlyComplete, VTABLE_java_util_concurrent_ForkJoinTask_quietlyComplete, "()V", 17 },
	{ "get", (intptr_t) M_java_util_concurrent_ForkJoinTask_get_R_java_lang_Object, VTABLE_java_util_concurrent_ForkJoinTask_get_R_java_lang_Object, "()Ljava/lang/Object;", 17 },
	{ "get", (intptr_t) M_java_util_concurrent_ForkJoinTask_get_long_java_util_concurrent_TimeUnit_R_java_lang_Object, VTABLE_java_util_concurrent_ForkJoinTask_get_long_java_util_concurrent_TimeUnit_R_java_lang_Object, "(JLjava/util/concurrent/TimeUnit;)Ljava/lang/Object;", 17 },
	{ "quietlyJoin", (intptr_t) M_java_util_concurrent_ForkJoinTask_quietlyJoin, VTABLE_java_util_concurrent_ForkJoinTask_quietlyJoin, "()V", 17 },
	{ "quietlyInvoke", (intptr_t) M_java_util_concurrent_ForkJoinTask_quietlyInvoke, VTABLE_java_util_concurrent_ForkJoinTask_quietlyInvoke, "()V", 17 },
	{ "helpQuiesce", (intptr_t) SM_java_util_concurrent_ForkJoinTask_helpQuiesce, 0, "()V", 9 },
	{ "reinitialize", (intptr_t) M_java_util_concurrent_ForkJoinTask_reinitialize, VTABLE_java_util_concurrent_ForkJoinTask_reinitialize, "()V", 1 },
	{ "getPool", (intptr_t) SM_java_util_concurrent_ForkJoinTask_getPool_R_java_util_concurrent_ForkJoinPool, 0, "()Ljava/util/concurrent/ForkJoinPool;", 9 },
	{ "inForkJoinPool", (intptr_t) SM_java_util_concurrent_ForkJoinTask_inForkJoinPool_R_boolean, 0, "()Z", 9 },
	{ "tryUnfork", (intptr_t) M_java_util_concurrent_ForkJoinTask_tryUnfork_R_boolean, VTABLE_java_util_concurrent_ForkJoinTask_tryUnfork_R_boolean, "()Z", 1 },
	{ "getQueuedTaskCount", (intptr_t) SM_java_util_concurrent_ForkJoinTask_getQueuedTaskCount_R_int, 0, "()I", 9 },
	{ "getSurplusQueuedTaskCount", (intptr_t) SM_java_util_concurrent_ForkJoinTask_getSurplusQueuedTaskCount_R_int, 0, "()I", 9 },
	{ "getRawResult", 0, VTABLE_java_util_concurrent_ForkJoinTask_getRawResult_R_java_lang_Object, "()Ljava/lang/Object;", 1025 },
	{ "setRawResult", 0, VTABLE_java_util_concurrent_ForkJoinTask_setRawResult_java_lang_Object, "(Ljava/lang/Object;)V", 1028 },
	{ "exec", 0, VTABLE_java_util_concurrent_ForkJoinTask_exec_R_boolean, "()Z", 1028 },
	{ "peekNextLocalTask", (intptr_t) SM_java_util_concurrent_ForkJoinTask_peekNextLocalTask_R_java_util_concurrent_ForkJoinTask, 0, "()Ljava/util/concurrent/ForkJoinTask;", 12 },
	{ "pollNextLocalTask", (intptr_t) SM_java_util_concurrent_ForkJoinTask_pollNextLocalTask_R_java_util_concurrent_ForkJoinTask, 0, "()Ljava/util/concurrent/ForkJoinTask;", 12 },
	{ "pollTask", (intptr_t) SM_java_util_concurrent_ForkJoinTask_pollTask_R_java_util_concurrent_ForkJoinTask, 0, "()Ljava/util/concurrent/ForkJoinTask;", 12 },
	{ "pollSubmission", (intptr_t) SM_java_util_concurrent_ForkJoinTask_pollSubmission_R_java_util_concurrent_ForkJoinTask, 0, "()Ljava/util/concurrent/ForkJoinTask;", 12 },
	{ "getForkJoinTaskTag", (intptr_t) M_java_util_concurrent_ForkJoinTask_getForkJoinTaskTag_R_short, VTABLE_java_util_concurrent_ForkJoinTask_getForkJoinTaskTag_R_short, "()S", 17 },
	{ "setForkJoinTaskTag", (intptr_t) M_java_util_concurrent_ForkJoinTask_setForkJoinTaskTag_short_R_short, VTABLE_java_util_concurrent_ForkJoinTask_setForkJoinTaskTag_short_R_short, "(S)S", 49 },
	{ "compareAndSetForkJoinTaskTag", (intptr_t) M_java_util_concurrent_ForkJoinTask_compareAndSetForkJoinTaskTag_short_short_R_boolean, VTABLE_java_util_concurrent_ForkJoinTask_compareAndSetForkJoinTaskTag_short_short_R_boolean, "(SS)Z", 49 },
	{ "adapt", (intptr_t) SM_java_util_concurrent_ForkJoinTask_adapt_java_lang_Runnable_R_java_util_concurrent_ForkJoinTask, 0, "(Ljava/lang/Runnable;)Ljava/util/concurrent/ForkJoinTask;", 9 },
	{ "adapt", (intptr_t) SM_java_util_concurrent_ForkJoinTask_adapt_java_lang_Runnable_java_lang_Object_R_java_util_concurrent_ForkJoinTask, 0, "(Ljava/lang/Runnable;Ljava/lang/Object;)Ljava/util/concurrent/ForkJoinTask;", 9 },
	{ "adapt", (intptr_t) SM_java_util_concurrent_ForkJoinTask_adapt_java_util_concurrent_Callable_R_java_util_concurrent_ForkJoinTask, 0, "(Ljava/util/concurrent/Callable;)Ljava/util/concurrent/ForkJoinTask;", 9 },
	{ "writeObject", (intptr_t) M_java_util_concurrent_ForkJoinTask_writeObject_java_io_ObjectOutputStream, VTABLE_java_util_concurrent_ForkJoinTask_writeObject_java_io_ObjectOutputStream, "(Ljava/io/ObjectOutputStream;)V", 2 },
	{ "readObject", (intptr_t) M_java_util_concurrent_ForkJoinTask_readObject_java_io_ObjectInputStream, VTABLE_java_util_concurrent_ForkJoinTask_readObject_java_io_ObjectInputStream, "(Ljava/io/ObjectInputStream;)V", 2 },
	{ "<clinit>", (intptr_t) clinit_java_util_concurrent_ForkJoinTask, 0, "()V", 8 },
};

Class class_java_util_concurrent_ForkJoinTask{
		.nativeName = (intptr_t) "java/util/concurrent/ForkJoinTask",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(java_util_concurrent_ForkJoinTask),
		.classVtable = (intptr_t) vtable_java_util_concurrent_ForkJoinTask,
		.staticInitializer = (intptr_t) clinit_java_util_concurrent_ForkJoinTask,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_java_util_concurrent_ForkJoinTask,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 5,
		.nativeInnerClasses = (intptr_t) innerClasses,
		.access = 1057,
		.interfaceCount = 2,
		.nativeInterfaces = (intptr_t) interfaces,
		.fieldCount = 10,
		.nativeFields = (intptr_t) fields,
		.methodCount = 61,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 50,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_java_util_concurrent_ForkJoinTask = registerClass(&class_java_util_concurrent_ForkJoinTask);

}
