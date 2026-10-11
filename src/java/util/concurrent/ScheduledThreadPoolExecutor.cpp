#include "java/util/concurrent/ScheduledThreadPoolExecutor.h"
#include "java/util/concurrent/AbstractExecutorService.h"
#include "java/util/concurrent/ScheduledExecutorService.h"
#include "java/util/concurrent/Future.h"
#include "java/util/concurrent/RejectedExecutionHandler.h"
#include "java/util/concurrent/ScheduledThreadPoolExecutor_DelayedWorkQueue.h"
#include "java/lang/Runnable.h"
#include "java/util/Collection.h"
#include "java/util/concurrent/ThreadFactory.h"
#include "java/lang/NullPointerException.h"
#include "java/util/concurrent/atomic/AtomicLong.h"
#include "java/util/concurrent/RunnableScheduledFuture.h"
#include "java/util/concurrent/ExecutorService.h"
#include "java/util/concurrent/TimeUnit.h"
#include "java/lang/IllegalArgumentException.h"
#include "java/util/concurrent/Executors.h"
#include "java/util/concurrent/Callable.h"
#include "java/util/concurrent/ScheduledThreadPoolExecutor.h"
#include "java/util/concurrent/BlockingQueue.h"
#include "java/util/concurrent/Delayed.h"
#include "java/lang/Object.h"
#include "java/util/concurrent/ThreadPoolExecutor.h"
#include "java/util/concurrent/ScheduledThreadPoolExecutor_ScheduledFutureTask.h"
#include "java/util/Queue.h"
#include "java/util/concurrent/ScheduledFuture.h"
#include "java/util/List.h"
#include "java/lang/System.h"

extern "C" {

jobject SF_java_util_concurrent_ScheduledThreadPoolExecutor_sequencer;
jlong SF_java_util_concurrent_ScheduledThreadPoolExecutor_DEFAULT_KEEPALIVE_MILLIS;

void mark_java_util_concurrent_ScheduledThreadPoolExecutor(jobject object, jint mark, jint depth) {
	if (!object) {
		if (SF_java_util_concurrent_ScheduledThreadPoolExecutor_sequencer)
			((gc_mark_ptr) ((jclass) ((jobject) SF_java_util_concurrent_ScheduledThreadPoolExecutor_sequencer)->clazz)->markFunction)((jobject) SF_java_util_concurrent_ScheduledThreadPoolExecutor_sequencer, mark, depth + 1);
		return;
	}
	if (depth > GC_DEPTH_ALWAYS && (object->gcMark < GC_MARK_START || object->gcMark == mark))
		return;
	if (depth > MAX_GC_MARK_DEPTH) {
		markDeepObject(object);
		return;
	}
	mark_java_util_concurrent_ThreadPoolExecutor(object, mark, depth);
	if (object->gcMark >= GC_MARK_START)
		object->gcMark = mark;
	auto self = (java_util_concurrent_ScheduledThreadPoolExecutor *) object;
}

jbool M_java_util_concurrent_ScheduledThreadPoolExecutor_canRunInCurrentRunState_boolean_R_boolean(jcontext ctx, jobject self, jbool param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/concurrent/ScheduledThreadPoolExecutor:canRunInCurrentRunState", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(314);
	sp[0].o = frame[0].o;
	sp += 1;
	if ((frame[1].i) == 0) goto label_1;
	}
	{
	LINE_NUMBER(315);
	jint temp0 = (jint)((java_util_concurrent_ScheduledThreadPoolExecutor *) NULL_CHECK((frame[0].o)))->F_continueExistingPeriodicTasksAfterShutdown;
	sp[0].i = temp0;
	sp += 1;
	goto label_3;
	}
label_1:;
	{
	LINE_NUMBER(316);
	jint temp0 = (jint)((java_util_concurrent_ScheduledThreadPoolExecutor *) NULL_CHECK((frame[0].o)))->F_executeExistingDelayedTasksAfterShutdown;
	sp[0].i = temp0;
	sp += 1;
	}
label_3:;
	{
	sp -= 2;
	LINE_NUMBER(314);
	jint temp0 = (jint)((func_java_util_concurrent_ScheduledThreadPoolExecutor_isRunningOrShutdown_boolean_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_concurrent_ScheduledThreadPoolExecutor_isRunningOrShutdown_boolean_R_boolean])(ctx, sp[0].o, sp[1].i);
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

void M_java_util_concurrent_ScheduledThreadPoolExecutor_delayedExecute_java_util_concurrent_RunnableScheduledFuture(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/concurrent/ScheduledThreadPoolExecutor:delayedExecute", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(331);
	jint temp0 = (jint)((func_java_util_concurrent_ScheduledThreadPoolExecutor_isShutdown_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_util_concurrent_ScheduledThreadPoolExecutor_isShutdown_R_boolean])(ctx, (frame[0].o));
	if (temp0 == 0) goto label_1;
	}
	{
	LINE_NUMBER(332);
	((func_java_util_concurrent_ScheduledThreadPoolExecutor_reject_java_lang_Runnable) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_util_concurrent_ScheduledThreadPoolExecutor_reject_java_lang_Runnable])(ctx, (frame[0].o), (frame[1].o));
	goto label_3;
	}
label_1:;
	{
	LINE_NUMBER(334);
	sp[0].o = (jobject)M_java_util_concurrent_ThreadPoolExecutor_getQueue_R_java_util_concurrent_BlockingQueue(ctx, (frame[0].o));
	jint temp0 = (jint)((func_java_util_concurrent_BlockingQueue_add_java_lang_Object_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_concurrent_BlockingQueue, INDEX_java_util_concurrent_BlockingQueue_add_java_lang_Object_R_boolean, sp[0].o))(ctx, sp[0].o, (frame[1].o));
	LINE_NUMBER(335);
	jint temp1 = (jint)((func_java_util_concurrent_ScheduledThreadPoolExecutor_isShutdown_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_util_concurrent_ScheduledThreadPoolExecutor_isShutdown_R_boolean])(ctx, (frame[0].o));
	if (temp1 == 0) goto label_5;
	}
	{
	sp[0].o = frame[0].o;
	sp[1].o = frame[1].o;
	LINE_NUMBER(336);
	jint temp0 = (jint)((func_java_util_concurrent_RunnableScheduledFuture_isPeriodic_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_concurrent_RunnableScheduledFuture, INDEX_java_util_concurrent_RunnableScheduledFuture_isPeriodic_R_boolean, sp[1].o))(ctx, sp[1].o);
	jint temp1 = (jint)((func_java_util_concurrent_ScheduledThreadPoolExecutor_canRunInCurrentRunState_boolean_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_concurrent_ScheduledThreadPoolExecutor_canRunInCurrentRunState_boolean_R_boolean])(ctx, sp[0].o, temp0);
	if (temp1 != 0) goto label_5;
	}
	{
	sp[0].o = frame[0].o;
	sp[1].o = frame[1].o;
	LINE_NUMBER(337);
	jint temp0 = (jint)((func_java_util_concurrent_ScheduledThreadPoolExecutor_remove_java_lang_Runnable_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_concurrent_ScheduledThreadPoolExecutor_remove_java_lang_Runnable_R_boolean])(ctx, sp[0].o, sp[1].o);
	if (temp0 == 0) goto label_5;
	}
	{
	LINE_NUMBER(338);
	jint temp0 = (jint)((func_java_util_concurrent_Future_cancel_boolean_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_concurrent_Future, INDEX_java_util_concurrent_Future_cancel_boolean_R_boolean, (frame[1].o)))(ctx, (frame[1].o), (jint(0)));
	goto label_3;
	}
label_5:;
	{
	LINE_NUMBER(340);
	((func_java_util_concurrent_ScheduledThreadPoolExecutor_ensurePrestart) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_util_concurrent_ScheduledThreadPoolExecutor_ensurePrestart])(ctx, (frame[0].o));
	}
label_3:;
	LINE_NUMBER(342);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_java_util_concurrent_ScheduledThreadPoolExecutor_reExecutePeriodic_java_util_concurrent_RunnableScheduledFuture(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/concurrent/ScheduledThreadPoolExecutor:reExecutePeriodic", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(351);
	jint temp0 = (jint)((func_java_util_concurrent_ScheduledThreadPoolExecutor_canRunInCurrentRunState_boolean_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_util_concurrent_ScheduledThreadPoolExecutor_canRunInCurrentRunState_boolean_R_boolean])(ctx, (frame[0].o), (jint(1)));
	if (temp0 == 0) goto label_1;
	}
	{
	LINE_NUMBER(352);
	sp[0].o = (jobject)M_java_util_concurrent_ThreadPoolExecutor_getQueue_R_java_util_concurrent_BlockingQueue(ctx, (frame[0].o));
	jint temp0 = (jint)((func_java_util_concurrent_BlockingQueue_add_java_lang_Object_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_concurrent_BlockingQueue, INDEX_java_util_concurrent_BlockingQueue_add_java_lang_Object_R_boolean, sp[0].o))(ctx, sp[0].o, (frame[1].o));
	LINE_NUMBER(353);
	jint temp1 = (jint)((func_java_util_concurrent_ScheduledThreadPoolExecutor_canRunInCurrentRunState_boolean_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_util_concurrent_ScheduledThreadPoolExecutor_canRunInCurrentRunState_boolean_R_boolean])(ctx, (frame[0].o), (jint(1)));
	if (temp1 != 0) goto label_4;
	}
	{
	jint temp0 = (jint)((func_java_util_concurrent_ScheduledThreadPoolExecutor_remove_java_lang_Runnable_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_util_concurrent_ScheduledThreadPoolExecutor_remove_java_lang_Runnable_R_boolean])(ctx, (frame[0].o), (frame[1].o));
	if (temp0 == 0) goto label_4;
	}
	{
	LINE_NUMBER(354);
	jint temp0 = (jint)((func_java_util_concurrent_Future_cancel_boolean_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_concurrent_Future, INDEX_java_util_concurrent_Future_cancel_boolean_R_boolean, (frame[1].o)))(ctx, (frame[1].o), (jint(0)));
	goto label_1;
	}
label_4:;
	{
	LINE_NUMBER(356);
	((func_java_util_concurrent_ScheduledThreadPoolExecutor_ensurePrestart) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_util_concurrent_ScheduledThreadPoolExecutor_ensurePrestart])(ctx, (frame[0].o));
	}
label_1:;
	LINE_NUMBER(358);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_java_util_concurrent_ScheduledThreadPoolExecutor_onShutdown(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[11];
	auto stack = &frame[9];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/concurrent/ScheduledThreadPoolExecutor:onShutdown", 11 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(365);
	sp[0].o = (jobject)M_java_util_concurrent_ThreadPoolExecutor_getQueue_R_java_util_concurrent_BlockingQueue(ctx, (frame[0].o));
	frame[1].o = sp[0].o;
	LINE_NUMBER(366);
	sp[0].o = frame[0].o;
	LINE_NUMBER(367);
	jint temp0 = (jint)((func_java_util_concurrent_ScheduledThreadPoolExecutor_getExecuteExistingDelayedTasksAfterShutdownPolicy_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_concurrent_ScheduledThreadPoolExecutor_getExecuteExistingDelayedTasksAfterShutdownPolicy_R_boolean])(ctx, sp[0].o);
	frame[2].i = temp0;
	LINE_NUMBER(368);
	sp[0].o = frame[0].o;
	LINE_NUMBER(369);
	jint temp1 = (jint)((func_java_util_concurrent_ScheduledThreadPoolExecutor_getContinueExistingPeriodicTasksAfterShutdownPolicy_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_concurrent_ScheduledThreadPoolExecutor_getContinueExistingPeriodicTasksAfterShutdownPolicy_R_boolean])(ctx, sp[0].o);
	frame[3].i = temp1;
	LINE_NUMBER(370);
	if ((frame[2].i) != 0) goto label_6;
	}
	INST_ILOAD(3);
	if ((--sp)->i != 0) goto label_6;
	{
	LINE_NUMBER(371);
	sp[0].o = (jobject)((func_java_util_Collection_toArray_R_Array1_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Collection, INDEX_java_util_Collection_toArray_R_Array1_java_lang_Object, (frame[1].o)))(ctx, (frame[1].o));
	frame[4].o = sp[0].o;
	frame[5].i = (((jarray) nullCheck(ctx, (frame[4].o)))->length);
	frame[6].i = (jint(0));
	}
label_8:;
	{
	if ((frame[6].i) >= (frame[5].i)) goto label_9;
	}
	{
	frame[7].o = ((jobject)ARRAY_ACCESS(jobject, (frame[4].o), (frame[6].i)));
	LINE_NUMBER(372);
	if ((isInstance(ctx, (frame[7].o), &class_java_util_concurrent_RunnableScheduledFuture)) == 0) goto label_11;
	}
	{
	LINE_NUMBER(373);
	jint temp0 = (jint)((func_java_util_concurrent_Future_cancel_boolean_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_concurrent_Future, INDEX_java_util_concurrent_Future_cancel_boolean_R_boolean, (checkCast(ctx, &class_java_util_concurrent_RunnableScheduledFuture, (frame[7].o)))))(ctx, (checkCast(ctx, &class_java_util_concurrent_RunnableScheduledFuture, (frame[7].o))), (jint(0)));
	}
label_11:;
	{
	LINE_NUMBER(371);
	INST_IINC(6, 1);
	goto label_8;
	}
label_9:;
	{
	LINE_NUMBER(374);
	((func_java_util_Collection_clear) resolveInterfaceMethod(ctx, &class_java_util_Collection, INDEX_java_util_Collection_clear, (frame[1].o)))(ctx, (frame[1].o));
	goto label_13;
	}
label_6:;
	{
	LINE_NUMBER(378);
	sp[0].o = (jobject)((func_java_util_Collection_toArray_R_Array1_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Collection, INDEX_java_util_Collection_toArray_R_Array1_java_lang_Object, (frame[1].o)))(ctx, (frame[1].o));
	frame[4].o = sp[0].o;
	frame[5].i = (((jarray) nullCheck(ctx, (frame[4].o)))->length);
	frame[6].i = (jint(0));
	}
label_14:;
	{
	if ((frame[6].i) >= (frame[5].i)) goto label_13;
	}
	{
	frame[7].o = ((jobject)ARRAY_ACCESS(jobject, (frame[4].o), (frame[6].i)));
	LINE_NUMBER(379);
	if ((isInstance(ctx, (frame[7].o), &class_java_util_concurrent_RunnableScheduledFuture)) == 0) goto label_16;
	}
	{
	LINE_NUMBER(380);
	frame[8].o = (checkCast(ctx, &class_java_util_concurrent_RunnableScheduledFuture, (frame[7].o)));
	LINE_NUMBER(382);
	jint temp0 = (jint)((func_java_util_concurrent_RunnableScheduledFuture_isPeriodic_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_concurrent_RunnableScheduledFuture, INDEX_java_util_concurrent_RunnableScheduledFuture_isPeriodic_R_boolean, (frame[8].o)))(ctx, (frame[8].o));
	if (temp0 == 0) goto label_19;
	}
	INST_ILOAD(3);
	if ((--sp)->i != 0) goto label_20;
	goto label_21;
label_19:;
	INST_ILOAD(2);
	if ((--sp)->i == 0) goto label_21;
label_20:;
	{
	sp[0].o = frame[8].o;
	LINE_NUMBER(383);
	jint temp0 = (jint)((func_java_util_concurrent_Future_isCancelled_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_concurrent_Future, INDEX_java_util_concurrent_Future_isCancelled_R_boolean, sp[0].o))(ctx, sp[0].o);
	if (temp0 == 0) goto label_16;
	}
label_21:;
	{
	LINE_NUMBER(384);
	jint temp0 = (jint)((func_java_util_concurrent_BlockingQueue_remove_java_lang_Object_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_concurrent_BlockingQueue, INDEX_java_util_concurrent_BlockingQueue_remove_java_lang_Object_R_boolean, (frame[1].o)))(ctx, (frame[1].o), (frame[8].o));
	if (temp0 == 0) goto label_16;
	}
	{
	LINE_NUMBER(385);
	jint temp0 = (jint)((func_java_util_concurrent_Future_cancel_boolean_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_concurrent_Future, INDEX_java_util_concurrent_Future_cancel_boolean_R_boolean, (frame[8].o)))(ctx, (frame[8].o), (jint(0)));
	}
label_16:;
	{
	LINE_NUMBER(378);
	INST_IINC(6, 1);
	goto label_14;
	}
label_13:;
	{
	LINE_NUMBER(390);
	((func_java_util_concurrent_ScheduledThreadPoolExecutor_tryTerminate) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_util_concurrent_ScheduledThreadPoolExecutor_tryTerminate])(ctx, (frame[0].o));
	LINE_NUMBER(391);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_java_util_concurrent_ScheduledThreadPoolExecutor_decorateTask_java_lang_Runnable_java_util_concurrent_RunnableScheduledFuture_R_java_util_concurrent_RunnableScheduledFuture(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/concurrent/ScheduledThreadPoolExecutor:decorateTask", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(407);
	popStackFrame(ctx);
	return (frame[2].o);
	}

	popStackFrame(ctx);
}

jobject M_java_util_concurrent_ScheduledThreadPoolExecutor_decorateTask_java_util_concurrent_Callable_java_util_concurrent_RunnableScheduledFuture_R_java_util_concurrent_RunnableScheduledFuture(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/concurrent/ScheduledThreadPoolExecutor:decorateTask", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(424);
	popStackFrame(ctx);
	return (frame[2].o);
	}

	popStackFrame(ctx);
}

void init_java_util_concurrent_ScheduledThreadPoolExecutor_int(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[10];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/concurrent/ScheduledThreadPoolExecutor:<init>", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_util_concurrent_ScheduledThreadPoolExecutor(ctx);
	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(452);
	sp[0].o = frame[0].o;
	jint temp0 = frame[1].i;
	jint temp1 = jint(2147483647);
	jlong temp2 = jlong(10ll);
	clinit_java_util_concurrent_TimeUnit(ctx);
	sp[1].o = (jobject)SF_java_util_concurrent_TimeUnit_MILLISECONDS;
	clinit_java_util_concurrent_ScheduledThreadPoolExecutor$DelayedWorkQueue(ctx);
	sp[2].o = gcAlloc(ctx, &class_java_util_concurrent_ScheduledThreadPoolExecutor$DelayedWorkQueue);
	init_java_util_concurrent_ScheduledThreadPoolExecutor$DelayedWorkQueue(ctx, sp[2].o);
	init_java_util_concurrent_ThreadPoolExecutor_int_int_long_java_util_concurrent_TimeUnit_java_util_concurrent_BlockingQueue(ctx, sp[0].o, temp0, temp1, temp2, sp[1].o, sp[2].o);
	LINE_NUMBER(166);
	((java_util_concurrent_ScheduledThreadPoolExecutor *) NULL_CHECK((frame[0].o)))->F_executeExistingDelayedTasksAfterShutdown = (jint(1));
	LINE_NUMBER(455);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_java_util_concurrent_ScheduledThreadPoolExecutor_int_java_util_concurrent_ThreadFactory(jcontext ctx, jobject self, jint param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[11];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/concurrent/ScheduledThreadPoolExecutor:<init>", 11 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_util_concurrent_ScheduledThreadPoolExecutor(ctx);
	frame[0].o = self;
	frame[1].i = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(470);
	sp[0].o = frame[0].o;
	jint temp0 = frame[1].i;
	jint temp1 = jint(2147483647);
	jlong temp2 = jlong(10ll);
	clinit_java_util_concurrent_TimeUnit(ctx);
	sp[1].o = (jobject)SF_java_util_concurrent_TimeUnit_MILLISECONDS;
	clinit_java_util_concurrent_ScheduledThreadPoolExecutor$DelayedWorkQueue(ctx);
	sp[2].o = gcAlloc(ctx, &class_java_util_concurrent_ScheduledThreadPoolExecutor$DelayedWorkQueue);
	init_java_util_concurrent_ScheduledThreadPoolExecutor$DelayedWorkQueue(ctx, sp[2].o);
	init_java_util_concurrent_ThreadPoolExecutor_int_int_long_java_util_concurrent_TimeUnit_java_util_concurrent_BlockingQueue_java_util_concurrent_ThreadFactory(ctx, sp[0].o, temp0, temp1, temp2, sp[1].o, sp[2].o, (frame[2].o));
	LINE_NUMBER(166);
	((java_util_concurrent_ScheduledThreadPoolExecutor *) NULL_CHECK((frame[0].o)))->F_executeExistingDelayedTasksAfterShutdown = (jint(1));
	LINE_NUMBER(473);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_java_util_concurrent_ScheduledThreadPoolExecutor_int_java_util_concurrent_RejectedExecutionHandler(jcontext ctx, jobject self, jint param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[11];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/concurrent/ScheduledThreadPoolExecutor:<init>", 11 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_util_concurrent_ScheduledThreadPoolExecutor(ctx);
	frame[0].o = self;
	frame[1].i = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(488);
	sp[0].o = frame[0].o;
	jint temp0 = frame[1].i;
	jint temp1 = jint(2147483647);
	jlong temp2 = jlong(10ll);
	clinit_java_util_concurrent_TimeUnit(ctx);
	sp[1].o = (jobject)SF_java_util_concurrent_TimeUnit_MILLISECONDS;
	clinit_java_util_concurrent_ScheduledThreadPoolExecutor$DelayedWorkQueue(ctx);
	sp[2].o = gcAlloc(ctx, &class_java_util_concurrent_ScheduledThreadPoolExecutor$DelayedWorkQueue);
	init_java_util_concurrent_ScheduledThreadPoolExecutor$DelayedWorkQueue(ctx, sp[2].o);
	init_java_util_concurrent_ThreadPoolExecutor_int_int_long_java_util_concurrent_TimeUnit_java_util_concurrent_BlockingQueue_java_util_concurrent_RejectedExecutionHandler(ctx, sp[0].o, temp0, temp1, temp2, sp[1].o, sp[2].o, (frame[2].o));
	LINE_NUMBER(166);
	((java_util_concurrent_ScheduledThreadPoolExecutor *) NULL_CHECK((frame[0].o)))->F_executeExistingDelayedTasksAfterShutdown = (jint(1));
	LINE_NUMBER(491);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_java_util_concurrent_ScheduledThreadPoolExecutor_int_java_util_concurrent_ThreadFactory_java_util_concurrent_RejectedExecutionHandler(jcontext ctx, jobject self, jint param0, jobject param1, jobject param2) {
	NULL_CHECK(self);
	jtype frame[13];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/concurrent/ScheduledThreadPoolExecutor:<init>", 13 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_util_concurrent_ScheduledThreadPoolExecutor(ctx);
	frame[0].o = self;
	frame[1].i = param0;
	frame[2].o = param1;
	frame[3].o = param2;
	{
	LINE_NUMBER(510);
	sp[0].o = frame[0].o;
	jint temp0 = frame[1].i;
	jint temp1 = jint(2147483647);
	jlong temp2 = jlong(10ll);
	clinit_java_util_concurrent_TimeUnit(ctx);
	sp[1].o = (jobject)SF_java_util_concurrent_TimeUnit_MILLISECONDS;
	clinit_java_util_concurrent_ScheduledThreadPoolExecutor$DelayedWorkQueue(ctx);
	sp[2].o = gcAlloc(ctx, &class_java_util_concurrent_ScheduledThreadPoolExecutor$DelayedWorkQueue);
	init_java_util_concurrent_ScheduledThreadPoolExecutor$DelayedWorkQueue(ctx, sp[2].o);
	init_java_util_concurrent_ThreadPoolExecutor_int_int_long_java_util_concurrent_TimeUnit_java_util_concurrent_BlockingQueue_java_util_concurrent_ThreadFactory_java_util_concurrent_RejectedExecutionHandler(ctx, sp[0].o, temp0, temp1, temp2, sp[1].o, sp[2].o, (frame[2].o), (frame[3].o));
	LINE_NUMBER(166);
	((java_util_concurrent_ScheduledThreadPoolExecutor *) NULL_CHECK((frame[0].o)))->F_executeExistingDelayedTasksAfterShutdown = (jint(1));
	LINE_NUMBER(513);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jlong M_java_util_concurrent_ScheduledThreadPoolExecutor_triggerTime_long_java_util_concurrent_TimeUnit_R_long(jcontext ctx, jobject self, jlong param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[10];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/concurrent/ScheduledThreadPoolExecutor:triggerTime", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].l = param0;
	frame[3].o = param1;
	{
	LINE_NUMBER(519);
	sp[0].o = frame[0].o;
	sp[1].o = frame[3].o;
	sp += 2;
	if ((longCompare((frame[1].l), (jlong(0)))) >= 0) goto label_1;
	}
	INST_LCONST(0);
	goto label_2;
label_1:;
	INST_LLOAD(1);
label_2:;
	{
	sp -= 3;
	jlong temp0 = (jlong)((func_java_util_concurrent_TimeUnit_toNanos_long_R_long) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_util_concurrent_TimeUnit_toNanos_long_R_long])(ctx, sp[1].o, sp[2].l);
	jlong temp1 = (jlong)((func_java_util_concurrent_ScheduledThreadPoolExecutor_triggerTime_long_R_long) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_concurrent_ScheduledThreadPoolExecutor_triggerTime_long_R_long])(ctx, sp[0].o, temp0);
	popStackFrame(ctx);
	return temp1;
	}

	popStackFrame(ctx);
}

jlong M_java_util_concurrent_ScheduledThreadPoolExecutor_triggerTime_long_R_long(jcontext ctx, jobject self, jlong param0) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/concurrent/ScheduledThreadPoolExecutor:triggerTime", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].l = param0;
	{
	LINE_NUMBER(526);
	jlong temp0 = (jlong)SM_java_lang_System_nanoTime_R_long(ctx);
	LINE_NUMBER(527);
	sp[0].l = temp0;
	sp += 1;
	if ((longCompare((frame[1].l), (jlong(4611686018427387903ll)))) >= 0) goto label_2;
	}
	INST_LLOAD(1);
	goto label_3;
label_2:;
	{
	jlong temp0 = (jlong)M_java_util_concurrent_ScheduledThreadPoolExecutor_overflowFree_long_R_long(ctx, (frame[0].o), (frame[1].l));
	sp[0].l = temp0;
	sp += 1;
	}
label_3:;
	{
	sp -= 2;
	jlong temp0 = sp[0].l + sp[1].l;
	LINE_NUMBER(526);
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jlong M_java_util_concurrent_ScheduledThreadPoolExecutor_overflowFree_long_R_long(jcontext ctx, jobject self, jlong param0) {
	NULL_CHECK(self);
	jtype frame[10];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/concurrent/ScheduledThreadPoolExecutor:overflowFree", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].l = param0;
	{
	LINE_NUMBER(538);
	sp[0].o = (jobject)M_java_util_concurrent_ThreadPoolExecutor_getQueue_R_java_util_concurrent_BlockingQueue(ctx, (frame[0].o));
	sp[0].o = (jobject)((func_java_util_Queue_peek_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Queue, INDEX_java_util_Queue_peek_R_java_lang_Object, sp[0].o))(ctx, sp[0].o);
	frame[3].o = (checkCast(ctx, &class_java_util_concurrent_Delayed, sp[0].o));
	LINE_NUMBER(539);
	if ((frame[3].o) == nullptr) goto label_2;
	}
	{
	LINE_NUMBER(540);
	sp[0].o = frame[3].o;
	clinit_java_util_concurrent_TimeUnit(ctx);
	sp[1].o = (jobject)SF_java_util_concurrent_TimeUnit_NANOSECONDS;
	jlong temp0 = (jlong)((func_java_util_concurrent_Delayed_getDelay_java_util_concurrent_TimeUnit_R_long) resolveInterfaceMethod(ctx, &class_java_util_concurrent_Delayed, INDEX_java_util_concurrent_Delayed_getDelay_java_util_concurrent_TimeUnit_R_long, sp[0].o))(ctx, sp[0].o, sp[1].o);
	frame[4].l = temp0;
	LINE_NUMBER(541);
	if ((longCompare((frame[4].l), (jlong(0)))) >= 0) goto label_2;
	}
	{
	if ((longCompare(((frame[1].l) - (frame[4].l)), (jlong(0)))) >= 0) goto label_2;
	}
	{
	LINE_NUMBER(542);
	frame[1].l = ((jlong(9223372036854775807ll)) + (frame[4].l));
	}
label_2:;
	{
	LINE_NUMBER(544);
	popStackFrame(ctx);
	return (frame[1].l);
	}

	popStackFrame(ctx);
}

jobject M_java_util_concurrent_ScheduledThreadPoolExecutor_schedule_java_lang_Runnable_long_java_util_concurrent_TimeUnit_R_java_util_concurrent_ScheduledFuture(jcontext ctx, jobject self, jobject param0, jlong param1, jobject param2) {
	NULL_CHECK(self);
	jtype frame[17];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/concurrent/ScheduledThreadPoolExecutor:schedule", 17 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].l = param1;
	frame[4].o = param2;
	{
	LINE_NUMBER(554);
	if ((frame[1].o) == nullptr) goto label_1;
	}
	INST_ALOAD(4);
	if ((--sp)->o != nullptr) goto label_2;
label_1:;
	{
	LINE_NUMBER(555);
	clinit_java_lang_NullPointerException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_NullPointerException);
	init_java_lang_NullPointerException(ctx, sp[0].o);
	throwException(ctx, sp[0].o);	}
label_2:;
	{
	LINE_NUMBER(556);
	sp[0].o = frame[0].o;
	sp[1].o = frame[1].o;
	clinit_java_util_concurrent_ScheduledThreadPoolExecutor$ScheduledFutureTask(ctx);
	sp[2].o = gcAlloc(ctx, &class_java_util_concurrent_ScheduledThreadPoolExecutor$ScheduledFutureTask);
	sp[3].o = frame[0].o;
	sp[4].o = frame[1].o;
	sp[5].o = jobject(nullptr);
	sp[6].o = frame[0].o;
	jlong temp0 = frame[2].l;
	sp[7].o = frame[4].o;
	LINE_NUMBER(558);
	jlong temp1 = (jlong)M_java_util_concurrent_ScheduledThreadPoolExecutor_triggerTime_long_java_util_concurrent_TimeUnit_R_long(ctx, sp[6].o, temp0, sp[7].o);
	clinit_java_util_concurrent_ScheduledThreadPoolExecutor(ctx);
	sp[6].o = (jobject)SF_java_util_concurrent_ScheduledThreadPoolExecutor_sequencer;
	LINE_NUMBER(559);
	jlong temp2 = (jlong)((func_java_util_concurrent_atomic_AtomicLong_getAndIncrement_R_long) ((void **) nullCheck(ctx, sp[6].o)->vtable)[VTABLE_java_util_concurrent_atomic_AtomicLong_getAndIncrement_R_long])(ctx, sp[6].o);
	init_java_util_concurrent_ScheduledThreadPoolExecutor$ScheduledFutureTask_java_util_concurrent_ScheduledThreadPoolExecutor_java_lang_Runnable_java_lang_Object_long_long(ctx, sp[2].o, sp[3].o, sp[4].o, sp[5].o, temp1, temp2);
	LINE_NUMBER(556);
	sp[0].o = (jobject)((func_java_util_concurrent_ScheduledThreadPoolExecutor_decorateTask_java_lang_Runnable_java_util_concurrent_RunnableScheduledFuture_R_java_util_concurrent_RunnableScheduledFuture) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_concurrent_ScheduledThreadPoolExecutor_decorateTask_java_lang_Runnable_java_util_concurrent_RunnableScheduledFuture_R_java_util_concurrent_RunnableScheduledFuture])(ctx, sp[0].o, sp[1].o, sp[2].o);
	frame[5].o = sp[0].o;
	LINE_NUMBER(560);
	M_java_util_concurrent_ScheduledThreadPoolExecutor_delayedExecute_java_util_concurrent_RunnableScheduledFuture(ctx, (frame[0].o), (frame[5].o));
	LINE_NUMBER(561);
	popStackFrame(ctx);
	return (frame[5].o);
	}

	popStackFrame(ctx);
}

jobject M_java_util_concurrent_ScheduledThreadPoolExecutor_schedule_java_util_concurrent_Callable_long_java_util_concurrent_TimeUnit_R_java_util_concurrent_ScheduledFuture(jcontext ctx, jobject self, jobject param0, jlong param1, jobject param2) {
	NULL_CHECK(self);
	jtype frame[16];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/concurrent/ScheduledThreadPoolExecutor:schedule", 16 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].l = param1;
	frame[4].o = param2;
	{
	LINE_NUMBER(571);
	if ((frame[1].o) == nullptr) goto label_1;
	}
	INST_ALOAD(4);
	if ((--sp)->o != nullptr) goto label_2;
label_1:;
	{
	LINE_NUMBER(572);
	clinit_java_lang_NullPointerException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_NullPointerException);
	init_java_lang_NullPointerException(ctx, sp[0].o);
	throwException(ctx, sp[0].o);	}
label_2:;
	{
	LINE_NUMBER(573);
	sp[0].o = frame[0].o;
	sp[1].o = frame[1].o;
	clinit_java_util_concurrent_ScheduledThreadPoolExecutor$ScheduledFutureTask(ctx);
	sp[2].o = gcAlloc(ctx, &class_java_util_concurrent_ScheduledThreadPoolExecutor$ScheduledFutureTask);
	sp[3].o = frame[0].o;
	sp[4].o = frame[1].o;
	sp[5].o = frame[0].o;
	jlong temp0 = frame[2].l;
	sp[6].o = frame[4].o;
	LINE_NUMBER(575);
	jlong temp1 = (jlong)M_java_util_concurrent_ScheduledThreadPoolExecutor_triggerTime_long_java_util_concurrent_TimeUnit_R_long(ctx, sp[5].o, temp0, sp[6].o);
	clinit_java_util_concurrent_ScheduledThreadPoolExecutor(ctx);
	sp[5].o = (jobject)SF_java_util_concurrent_ScheduledThreadPoolExecutor_sequencer;
	LINE_NUMBER(576);
	jlong temp2 = (jlong)((func_java_util_concurrent_atomic_AtomicLong_getAndIncrement_R_long) ((void **) nullCheck(ctx, sp[5].o)->vtable)[VTABLE_java_util_concurrent_atomic_AtomicLong_getAndIncrement_R_long])(ctx, sp[5].o);
	init_java_util_concurrent_ScheduledThreadPoolExecutor$ScheduledFutureTask_java_util_concurrent_ScheduledThreadPoolExecutor_java_util_concurrent_Callable_long_long(ctx, sp[2].o, sp[3].o, sp[4].o, temp1, temp2);
	LINE_NUMBER(573);
	sp[0].o = (jobject)((func_java_util_concurrent_ScheduledThreadPoolExecutor_decorateTask_java_util_concurrent_Callable_java_util_concurrent_RunnableScheduledFuture_R_java_util_concurrent_RunnableScheduledFuture) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_concurrent_ScheduledThreadPoolExecutor_decorateTask_java_util_concurrent_Callable_java_util_concurrent_RunnableScheduledFuture_R_java_util_concurrent_RunnableScheduledFuture])(ctx, sp[0].o, sp[1].o, sp[2].o);
	frame[5].o = sp[0].o;
	LINE_NUMBER(577);
	M_java_util_concurrent_ScheduledThreadPoolExecutor_delayedExecute_java_util_concurrent_RunnableScheduledFuture(ctx, (frame[0].o), (frame[5].o));
	LINE_NUMBER(578);
	popStackFrame(ctx);
	return (frame[5].o);
	}

	popStackFrame(ctx);
}

jobject M_java_util_concurrent_ScheduledThreadPoolExecutor_scheduleAtFixedRate_java_lang_Runnable_long_long_java_util_concurrent_TimeUnit_R_java_util_concurrent_ScheduledFuture(jcontext ctx, jobject self, jobject param0, jlong param1, jlong param2, jobject param3) {
	NULL_CHECK(self);
	jtype frame[20];
	auto stack = &frame[9];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/concurrent/ScheduledThreadPoolExecutor:scheduleAtFixedRate", 20 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].l = param1;
	frame[4].l = param2;
	frame[6].o = param3;
	{
	LINE_NUMBER(590);
	if ((frame[1].o) == nullptr) goto label_1;
	}
	INST_ALOAD(6);
	if ((--sp)->o != nullptr) goto label_2;
label_1:;
	{
	LINE_NUMBER(591);
	clinit_java_lang_NullPointerException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_NullPointerException);
	init_java_lang_NullPointerException(ctx, sp[0].o);
	throwException(ctx, sp[0].o);	}
label_2:;
	{
	LINE_NUMBER(592);
	if ((longCompare((frame[4].l), (jlong(0)))) > 0) goto label_3;
	}
	{
	LINE_NUMBER(593);
	clinit_java_lang_IllegalArgumentException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IllegalArgumentException);
	init_java_lang_IllegalArgumentException(ctx, sp[0].o);
	throwException(ctx, sp[0].o);	}
label_3:;
	{
	LINE_NUMBER(594);
	clinit_java_util_concurrent_ScheduledThreadPoolExecutor$ScheduledFutureTask(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_util_concurrent_ScheduledThreadPoolExecutor$ScheduledFutureTask);
	sp[1].o = frame[0].o;
	sp[2].o = frame[1].o;
	sp[3].o = jobject(nullptr);
	sp[4].o = frame[0].o;
	jlong temp0 = frame[2].l;
	sp[5].o = frame[6].o;
	LINE_NUMBER(597);
	jlong temp1 = (jlong)M_java_util_concurrent_ScheduledThreadPoolExecutor_triggerTime_long_java_util_concurrent_TimeUnit_R_long(ctx, sp[4].o, temp0, sp[5].o);
	sp[4].o = frame[6].o;
	jlong temp2 = frame[4].l;
	LINE_NUMBER(598);
	jlong temp3 = (jlong)((func_java_util_concurrent_TimeUnit_toNanos_long_R_long) ((void **) nullCheck(ctx, sp[4].o)->vtable)[VTABLE_java_util_concurrent_TimeUnit_toNanos_long_R_long])(ctx, sp[4].o, temp2);
	clinit_java_util_concurrent_ScheduledThreadPoolExecutor(ctx);
	sp[4].o = (jobject)SF_java_util_concurrent_ScheduledThreadPoolExecutor_sequencer;
	LINE_NUMBER(599);
	jlong temp4 = (jlong)((func_java_util_concurrent_atomic_AtomicLong_getAndIncrement_R_long) ((void **) nullCheck(ctx, sp[4].o)->vtable)[VTABLE_java_util_concurrent_atomic_AtomicLong_getAndIncrement_R_long])(ctx, sp[4].o);
	init_java_util_concurrent_ScheduledThreadPoolExecutor$ScheduledFutureTask_java_util_concurrent_ScheduledThreadPoolExecutor_java_lang_Runnable_java_lang_Object_long_long_long(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o, temp1, temp3, temp4);
	frame[7].o = sp[0].o;
	LINE_NUMBER(600);
	sp[0].o = (jobject)((func_java_util_concurrent_ScheduledThreadPoolExecutor_decorateTask_java_lang_Runnable_java_util_concurrent_RunnableScheduledFuture_R_java_util_concurrent_RunnableScheduledFuture) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_util_concurrent_ScheduledThreadPoolExecutor_decorateTask_java_lang_Runnable_java_util_concurrent_RunnableScheduledFuture_R_java_util_concurrent_RunnableScheduledFuture])(ctx, (frame[0].o), (frame[1].o), (frame[7].o));
	frame[8].o = sp[0].o;
	LINE_NUMBER(601);
	((java_util_concurrent_ScheduledThreadPoolExecutor$ScheduledFutureTask *) NULL_CHECK((frame[7].o)))->F_outerTask = (jref) (frame[8].o);
	LINE_NUMBER(602);
	M_java_util_concurrent_ScheduledThreadPoolExecutor_delayedExecute_java_util_concurrent_RunnableScheduledFuture(ctx, (frame[0].o), (frame[8].o));
	LINE_NUMBER(603);
	popStackFrame(ctx);
	return (frame[8].o);
	}

	popStackFrame(ctx);
}

jobject M_java_util_concurrent_ScheduledThreadPoolExecutor_scheduleWithFixedDelay_java_lang_Runnable_long_long_java_util_concurrent_TimeUnit_R_java_util_concurrent_ScheduledFuture(jcontext ctx, jobject self, jobject param0, jlong param1, jlong param2, jobject param3) {
	NULL_CHECK(self);
	jtype frame[20];
	auto stack = &frame[9];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/concurrent/ScheduledThreadPoolExecutor:scheduleWithFixedDelay", 20 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].l = param1;
	frame[4].l = param2;
	frame[6].o = param3;
	{
	LINE_NUMBER(615);
	if ((frame[1].o) == nullptr) goto label_1;
	}
	INST_ALOAD(6);
	if ((--sp)->o != nullptr) goto label_2;
label_1:;
	{
	LINE_NUMBER(616);
	clinit_java_lang_NullPointerException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_NullPointerException);
	init_java_lang_NullPointerException(ctx, sp[0].o);
	throwException(ctx, sp[0].o);	}
label_2:;
	{
	LINE_NUMBER(617);
	if ((longCompare((frame[4].l), (jlong(0)))) > 0) goto label_3;
	}
	{
	LINE_NUMBER(618);
	clinit_java_lang_IllegalArgumentException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IllegalArgumentException);
	init_java_lang_IllegalArgumentException(ctx, sp[0].o);
	throwException(ctx, sp[0].o);	}
label_3:;
	{
	LINE_NUMBER(619);
	clinit_java_util_concurrent_ScheduledThreadPoolExecutor$ScheduledFutureTask(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_util_concurrent_ScheduledThreadPoolExecutor$ScheduledFutureTask);
	sp[1].o = frame[0].o;
	sp[2].o = frame[1].o;
	sp[3].o = jobject(nullptr);
	sp[4].o = frame[0].o;
	jlong temp0 = frame[2].l;
	sp[5].o = frame[6].o;
	LINE_NUMBER(622);
	jlong temp1 = (jlong)M_java_util_concurrent_ScheduledThreadPoolExecutor_triggerTime_long_java_util_concurrent_TimeUnit_R_long(ctx, sp[4].o, temp0, sp[5].o);
	sp[4].o = frame[6].o;
	jlong temp2 = frame[4].l;
	LINE_NUMBER(623);
	jlong temp3 = (jlong)((func_java_util_concurrent_TimeUnit_toNanos_long_R_long) ((void **) nullCheck(ctx, sp[4].o)->vtable)[VTABLE_java_util_concurrent_TimeUnit_toNanos_long_R_long])(ctx, sp[4].o, temp2);
	jlong temp4 = -temp3;
	clinit_java_util_concurrent_ScheduledThreadPoolExecutor(ctx);
	sp[4].o = (jobject)SF_java_util_concurrent_ScheduledThreadPoolExecutor_sequencer;
	LINE_NUMBER(624);
	jlong temp5 = (jlong)((func_java_util_concurrent_atomic_AtomicLong_getAndIncrement_R_long) ((void **) nullCheck(ctx, sp[4].o)->vtable)[VTABLE_java_util_concurrent_atomic_AtomicLong_getAndIncrement_R_long])(ctx, sp[4].o);
	init_java_util_concurrent_ScheduledThreadPoolExecutor$ScheduledFutureTask_java_util_concurrent_ScheduledThreadPoolExecutor_java_lang_Runnable_java_lang_Object_long_long_long(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o, temp1, temp4, temp5);
	frame[7].o = sp[0].o;
	LINE_NUMBER(625);
	sp[0].o = (jobject)((func_java_util_concurrent_ScheduledThreadPoolExecutor_decorateTask_java_lang_Runnable_java_util_concurrent_RunnableScheduledFuture_R_java_util_concurrent_RunnableScheduledFuture) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_util_concurrent_ScheduledThreadPoolExecutor_decorateTask_java_lang_Runnable_java_util_concurrent_RunnableScheduledFuture_R_java_util_concurrent_RunnableScheduledFuture])(ctx, (frame[0].o), (frame[1].o), (frame[7].o));
	frame[8].o = sp[0].o;
	LINE_NUMBER(626);
	((java_util_concurrent_ScheduledThreadPoolExecutor$ScheduledFutureTask *) NULL_CHECK((frame[7].o)))->F_outerTask = (jref) (frame[8].o);
	LINE_NUMBER(627);
	M_java_util_concurrent_ScheduledThreadPoolExecutor_delayedExecute_java_util_concurrent_RunnableScheduledFuture(ctx, (frame[0].o), (frame[8].o));
	LINE_NUMBER(628);
	popStackFrame(ctx);
	return (frame[8].o);
	}

	popStackFrame(ctx);
}

void M_java_util_concurrent_ScheduledThreadPoolExecutor_execute_java_lang_Runnable(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/concurrent/ScheduledThreadPoolExecutor:execute", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(652);
	sp[0].o = frame[0].o;
	sp[1].o = frame[1].o;
	jlong temp0 = jlong(0);
	clinit_java_util_concurrent_TimeUnit(ctx);
	sp[2].o = (jobject)SF_java_util_concurrent_TimeUnit_NANOSECONDS;
	sp[0].o = (jobject)((func_java_util_concurrent_ScheduledThreadPoolExecutor_schedule_java_lang_Runnable_long_java_util_concurrent_TimeUnit_R_java_util_concurrent_ScheduledFuture) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_concurrent_ScheduledThreadPoolExecutor_schedule_java_lang_Runnable_long_java_util_concurrent_TimeUnit_R_java_util_concurrent_ScheduledFuture])(ctx, sp[0].o, sp[1].o, temp0, sp[2].o);
	LINE_NUMBER(653);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_java_util_concurrent_ScheduledThreadPoolExecutor_submit_java_lang_Runnable_R_java_util_concurrent_Future(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/concurrent/ScheduledThreadPoolExecutor:submit", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(662);
	sp[0].o = frame[0].o;
	sp[1].o = frame[1].o;
	jlong temp0 = jlong(0);
	clinit_java_util_concurrent_TimeUnit(ctx);
	sp[2].o = (jobject)SF_java_util_concurrent_TimeUnit_NANOSECONDS;
	sp[0].o = (jobject)((func_java_util_concurrent_ScheduledThreadPoolExecutor_schedule_java_lang_Runnable_long_java_util_concurrent_TimeUnit_R_java_util_concurrent_ScheduledFuture) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_concurrent_ScheduledThreadPoolExecutor_schedule_java_lang_Runnable_long_java_util_concurrent_TimeUnit_R_java_util_concurrent_ScheduledFuture])(ctx, sp[0].o, sp[1].o, temp0, sp[2].o);
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_java_util_concurrent_ScheduledThreadPoolExecutor_submit_java_lang_Runnable_java_lang_Object_R_java_util_concurrent_Future(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/concurrent/ScheduledThreadPoolExecutor:submit", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(670);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)SM_java_util_concurrent_Executors_callable_java_lang_Runnable_java_lang_Object_R_java_util_concurrent_Callable(ctx, (frame[1].o), (frame[2].o));
	jlong temp0 = jlong(0);
	clinit_java_util_concurrent_TimeUnit(ctx);
	sp[2].o = (jobject)SF_java_util_concurrent_TimeUnit_NANOSECONDS;
	sp[0].o = (jobject)((func_java_util_concurrent_ScheduledThreadPoolExecutor_schedule_java_util_concurrent_Callable_long_java_util_concurrent_TimeUnit_R_java_util_concurrent_ScheduledFuture) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_concurrent_ScheduledThreadPoolExecutor_schedule_java_util_concurrent_Callable_long_java_util_concurrent_TimeUnit_R_java_util_concurrent_ScheduledFuture])(ctx, sp[0].o, sp[1].o, temp0, sp[2].o);
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_java_util_concurrent_ScheduledThreadPoolExecutor_submit_java_util_concurrent_Callable_R_java_util_concurrent_Future(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/concurrent/ScheduledThreadPoolExecutor:submit", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(678);
	sp[0].o = frame[0].o;
	sp[1].o = frame[1].o;
	jlong temp0 = jlong(0);
	clinit_java_util_concurrent_TimeUnit(ctx);
	sp[2].o = (jobject)SF_java_util_concurrent_TimeUnit_NANOSECONDS;
	sp[0].o = (jobject)((func_java_util_concurrent_ScheduledThreadPoolExecutor_schedule_java_util_concurrent_Callable_long_java_util_concurrent_TimeUnit_R_java_util_concurrent_ScheduledFuture) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_concurrent_ScheduledThreadPoolExecutor_schedule_java_util_concurrent_Callable_long_java_util_concurrent_TimeUnit_R_java_util_concurrent_ScheduledFuture])(ctx, sp[0].o, sp[1].o, temp0, sp[2].o);
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void M_java_util_concurrent_ScheduledThreadPoolExecutor_setContinueExistingPeriodicTasksAfterShutdownPolicy_boolean(jcontext ctx, jobject self, jbool param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/concurrent/ScheduledThreadPoolExecutor:setContinueExistingPeriodicTasksAfterShutdownPolicy", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(693);
	((java_util_concurrent_ScheduledThreadPoolExecutor *) NULL_CHECK((frame[0].o)))->F_continueExistingPeriodicTasksAfterShutdown = (frame[1].i);
	LINE_NUMBER(694);
	if ((frame[1].i) != 0) goto label_2;
	}
	{
	jint temp0 = (jint)((func_java_util_concurrent_ScheduledThreadPoolExecutor_isShutdown_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_util_concurrent_ScheduledThreadPoolExecutor_isShutdown_R_boolean])(ctx, (frame[0].o));
	if (temp0 == 0) goto label_2;
	}
	{
	LINE_NUMBER(695);
	((func_java_util_concurrent_ScheduledThreadPoolExecutor_onShutdown) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_util_concurrent_ScheduledThreadPoolExecutor_onShutdown])(ctx, (frame[0].o));
	}
label_2:;
	LINE_NUMBER(696);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jbool M_java_util_concurrent_ScheduledThreadPoolExecutor_getContinueExistingPeriodicTasksAfterShutdownPolicy_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/concurrent/ScheduledThreadPoolExecutor:getContinueExistingPeriodicTasksAfterShutdownPolicy", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(710);
	popStackFrame(ctx);
	return ((jint)((java_util_concurrent_ScheduledThreadPoolExecutor *) NULL_CHECK((frame[0].o)))->F_continueExistingPeriodicTasksAfterShutdown);
	}

	popStackFrame(ctx);
}

void M_java_util_concurrent_ScheduledThreadPoolExecutor_setExecuteExistingDelayedTasksAfterShutdownPolicy_boolean(jcontext ctx, jobject self, jbool param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/concurrent/ScheduledThreadPoolExecutor:setExecuteExistingDelayedTasksAfterShutdownPolicy", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(725);
	((java_util_concurrent_ScheduledThreadPoolExecutor *) NULL_CHECK((frame[0].o)))->F_executeExistingDelayedTasksAfterShutdown = (frame[1].i);
	LINE_NUMBER(726);
	if ((frame[1].i) != 0) goto label_2;
	}
	{
	jint temp0 = (jint)((func_java_util_concurrent_ScheduledThreadPoolExecutor_isShutdown_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_util_concurrent_ScheduledThreadPoolExecutor_isShutdown_R_boolean])(ctx, (frame[0].o));
	if (temp0 == 0) goto label_2;
	}
	{
	LINE_NUMBER(727);
	((func_java_util_concurrent_ScheduledThreadPoolExecutor_onShutdown) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_util_concurrent_ScheduledThreadPoolExecutor_onShutdown])(ctx, (frame[0].o));
	}
label_2:;
	LINE_NUMBER(728);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jbool M_java_util_concurrent_ScheduledThreadPoolExecutor_getExecuteExistingDelayedTasksAfterShutdownPolicy_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/concurrent/ScheduledThreadPoolExecutor:getExecuteExistingDelayedTasksAfterShutdownPolicy", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(742);
	popStackFrame(ctx);
	return ((jint)((java_util_concurrent_ScheduledThreadPoolExecutor *) NULL_CHECK((frame[0].o)))->F_executeExistingDelayedTasksAfterShutdown);
	}

	popStackFrame(ctx);
}

void M_java_util_concurrent_ScheduledThreadPoolExecutor_setRemoveOnCancelPolicy_boolean(jcontext ctx, jobject self, jbool param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/concurrent/ScheduledThreadPoolExecutor:setRemoveOnCancelPolicy", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(755);
	((java_util_concurrent_ScheduledThreadPoolExecutor *) NULL_CHECK((frame[0].o)))->F_removeOnCancel = (frame[1].i);
	LINE_NUMBER(756);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jbool M_java_util_concurrent_ScheduledThreadPoolExecutor_getRemoveOnCancelPolicy_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/concurrent/ScheduledThreadPoolExecutor:getRemoveOnCancelPolicy", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(769);
	popStackFrame(ctx);
	return ((jint)((java_util_concurrent_ScheduledThreadPoolExecutor *) NULL_CHECK((frame[0].o)))->F_removeOnCancel);
	}

	popStackFrame(ctx);
}

void M_java_util_concurrent_ScheduledThreadPoolExecutor_shutdown(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/concurrent/ScheduledThreadPoolExecutor:shutdown", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(791);
	M_java_util_concurrent_ThreadPoolExecutor_shutdown(ctx, (frame[0].o));
	LINE_NUMBER(792);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_java_util_concurrent_ScheduledThreadPoolExecutor_shutdownNow_R_java_util_List(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/concurrent/ScheduledThreadPoolExecutor:shutdownNow", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(819);
	sp[0].o = (jobject)M_java_util_concurrent_ThreadPoolExecutor_shutdownNow_R_java_util_List(ctx, (frame[0].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_java_util_concurrent_ScheduledThreadPoolExecutor_getQueue_R_java_util_concurrent_BlockingQueue(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/concurrent/ScheduledThreadPoolExecutor:getQueue", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(840);
	sp[0].o = (jobject)M_java_util_concurrent_ThreadPoolExecutor_getQueue_R_java_util_concurrent_BlockingQueue(ctx, (frame[0].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void clinit_java_util_concurrent_ScheduledThreadPoolExecutor(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	clinit_java_util_concurrent_ThreadPoolExecutor(ctx);
	SF_java_util_concurrent_ScheduledThreadPoolExecutor_DEFAULT_KEEPALIVE_MILLIS = jlong(10ll);
	jtype frame[2];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/concurrent/ScheduledThreadPoolExecutor:<clinit>", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_util_concurrent_ScheduledThreadPoolExecutor(ctx);
	{
	LINE_NUMBER(177);
	clinit_java_util_concurrent_atomic_AtomicLong(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_util_concurrent_atomic_AtomicLong);
	init_java_util_concurrent_atomic_AtomicLong(ctx, sp[0].o);
	clinit_java_util_concurrent_ScheduledThreadPoolExecutor(ctx);
	SF_java_util_concurrent_ScheduledThreadPoolExecutor_sequencer = sp[0].o;
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void *vtable_java_util_concurrent_ScheduledThreadPoolExecutor[] {
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
	(void *) M_java_util_concurrent_ScheduledThreadPoolExecutor_execute_java_lang_Runnable,
	(void *) M_java_util_concurrent_ScheduledThreadPoolExecutor_shutdown,
	(void *) M_java_util_concurrent_ScheduledThreadPoolExecutor_shutdownNow_R_java_util_List,
	(void *) M_java_util_concurrent_ThreadPoolExecutor_isShutdown_R_boolean,
	(void *) M_java_util_concurrent_ThreadPoolExecutor_isTerminated_R_boolean,
	(void *) M_java_util_concurrent_ThreadPoolExecutor_awaitTermination_long_java_util_concurrent_TimeUnit_R_boolean,
	(void *) M_java_util_concurrent_ScheduledThreadPoolExecutor_submit_java_util_concurrent_Callable_R_java_util_concurrent_Future,
	(void *) M_java_util_concurrent_ScheduledThreadPoolExecutor_submit_java_lang_Runnable_java_lang_Object_R_java_util_concurrent_Future,
	(void *) M_java_util_concurrent_ScheduledThreadPoolExecutor_submit_java_lang_Runnable_R_java_util_concurrent_Future,
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
	(void *) M_java_util_concurrent_ScheduledThreadPoolExecutor_onShutdown,
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
	(void *) M_java_util_concurrent_ScheduledThreadPoolExecutor_getQueue_R_java_util_concurrent_BlockingQueue,
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
	(void *) M_java_util_concurrent_ScheduledThreadPoolExecutor_schedule_java_lang_Runnable_long_java_util_concurrent_TimeUnit_R_java_util_concurrent_ScheduledFuture,
	(void *) M_java_util_concurrent_ScheduledThreadPoolExecutor_schedule_java_util_concurrent_Callable_long_java_util_concurrent_TimeUnit_R_java_util_concurrent_ScheduledFuture,
	(void *) M_java_util_concurrent_ScheduledThreadPoolExecutor_scheduleAtFixedRate_java_lang_Runnable_long_long_java_util_concurrent_TimeUnit_R_java_util_concurrent_ScheduledFuture,
	(void *) M_java_util_concurrent_ScheduledThreadPoolExecutor_scheduleWithFixedDelay_java_lang_Runnable_long_long_java_util_concurrent_TimeUnit_R_java_util_concurrent_ScheduledFuture,
	(void *) M_java_util_concurrent_ScheduledThreadPoolExecutor_canRunInCurrentRunState_boolean_R_boolean,
	(void *) M_java_util_concurrent_ScheduledThreadPoolExecutor_delayedExecute_java_util_concurrent_RunnableScheduledFuture,
	(void *) M_java_util_concurrent_ScheduledThreadPoolExecutor_reExecutePeriodic_java_util_concurrent_RunnableScheduledFuture,
	(void *) M_java_util_concurrent_ScheduledThreadPoolExecutor_decorateTask_java_lang_Runnable_java_util_concurrent_RunnableScheduledFuture_R_java_util_concurrent_RunnableScheduledFuture,
	(void *) M_java_util_concurrent_ScheduledThreadPoolExecutor_decorateTask_java_util_concurrent_Callable_java_util_concurrent_RunnableScheduledFuture_R_java_util_concurrent_RunnableScheduledFuture,
	(void *) M_java_util_concurrent_ScheduledThreadPoolExecutor_triggerTime_long_java_util_concurrent_TimeUnit_R_long,
	(void *) M_java_util_concurrent_ScheduledThreadPoolExecutor_triggerTime_long_R_long,
	(void *) M_java_util_concurrent_ScheduledThreadPoolExecutor_overflowFree_long_R_long,
	(void *) M_java_util_concurrent_ScheduledThreadPoolExecutor_setContinueExistingPeriodicTasksAfterShutdownPolicy_boolean,
	(void *) M_java_util_concurrent_ScheduledThreadPoolExecutor_getContinueExistingPeriodicTasksAfterShutdownPolicy_R_boolean,
	(void *) M_java_util_concurrent_ScheduledThreadPoolExecutor_setExecuteExistingDelayedTasksAfterShutdownPolicy_boolean,
	(void *) M_java_util_concurrent_ScheduledThreadPoolExecutor_getExecuteExistingDelayedTasksAfterShutdownPolicy_R_boolean,
	(void *) M_java_util_concurrent_ScheduledThreadPoolExecutor_setRemoveOnCancelPolicy_boolean,
	(void *) M_java_util_concurrent_ScheduledThreadPoolExecutor_getRemoveOnCancelPolicy_R_boolean,
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
	{ "schedule", "(Ljava/lang/Runnable;JLjava/util/concurrent/TimeUnit;)Ljava/util/concurrent/ScheduledFuture;" },
	{ "schedule", "(Ljava/util/concurrent/Callable;JLjava/util/concurrent/TimeUnit;)Ljava/util/concurrent/ScheduledFuture;" },
	{ "scheduleAtFixedRate", "(Ljava/lang/Runnable;JJLjava/util/concurrent/TimeUnit;)Ljava/util/concurrent/ScheduledFuture;" },
	{ "scheduleWithFixedDelay", "(Ljava/lang/Runnable;JJLjava/util/concurrent/TimeUnit;)Ljava/util/concurrent/ScheduledFuture;" },
	{ "canRunInCurrentRunState", "(Z)Z" },
	{ "delayedExecute", "(Ljava/util/concurrent/RunnableScheduledFuture;)V" },
	{ "reExecutePeriodic", "(Ljava/util/concurrent/RunnableScheduledFuture;)V" },
	{ "decorateTask", "(Ljava/lang/Runnable;Ljava/util/concurrent/RunnableScheduledFuture;)Ljava/util/concurrent/RunnableScheduledFuture;" },
	{ "decorateTask", "(Ljava/util/concurrent/Callable;Ljava/util/concurrent/RunnableScheduledFuture;)Ljava/util/concurrent/RunnableScheduledFuture;" },
	{ "triggerTime", "(JLjava/util/concurrent/TimeUnit;)J" },
	{ "triggerTime", "(J)J" },
	{ "overflowFree", "(J)J" },
	{ "setContinueExistingPeriodicTasksAfterShutdownPolicy", "(Z)V" },
	{ "getContinueExistingPeriodicTasksAfterShutdownPolicy", "()Z" },
	{ "setExecuteExistingDelayedTasksAfterShutdownPolicy", "(Z)V" },
	{ "getExecuteExistingDelayedTasksAfterShutdownPolicy", "()Z" },
	{ "setRemoveOnCancelPolicy", "(Z)V" },
	{ "getRemoveOnCancelPolicy", "()Z" },
};

static jclass interfaces[] { &class_java_util_concurrent_ScheduledExecutorService, };

static jclass innerClasses[] {
	&class_java_util_concurrent_ScheduledThreadPoolExecutor$DelayedWorkQueue,
	&class_java_util_concurrent_ScheduledThreadPoolExecutor$ScheduledFutureTask,
};

static FieldMetadata fields[] {
	{ "continueExistingPeriodicTasksAfterShutdown", &class_boolean, offsetof(java_util_concurrent_ScheduledThreadPoolExecutor, F_continueExistingPeriodicTasksAfterShutdown), "Z", 66 },
	{ "executeExistingDelayedTasksAfterShutdown", &class_boolean, offsetof(java_util_concurrent_ScheduledThreadPoolExecutor, F_executeExistingDelayedTasksAfterShutdown), "Z", 66 },
	{ "removeOnCancel", &class_boolean, offsetof(java_util_concurrent_ScheduledThreadPoolExecutor, F_removeOnCancel), "Z", 64 },
	{ "sequencer", &class_java_util_concurrent_atomic_AtomicLong, (intptr_t) &SF_java_util_concurrent_ScheduledThreadPoolExecutor_sequencer, "Ljava/util/concurrent/atomic/AtomicLong;", 26 },
	{ "DEFAULT_KEEPALIVE_MILLIS", &class_long, (intptr_t) &SF_java_util_concurrent_ScheduledThreadPoolExecutor_DEFAULT_KEEPALIVE_MILLIS, "J", 26 },
};

static MethodMetadata methods[] {
	{ "canRunInCurrentRunState", (intptr_t) M_java_util_concurrent_ScheduledThreadPoolExecutor_canRunInCurrentRunState_boolean_R_boolean, VTABLE_java_util_concurrent_ScheduledThreadPoolExecutor_canRunInCurrentRunState_boolean_R_boolean, "(Z)Z", 0 },
	{ "delayedExecute", (intptr_t) M_java_util_concurrent_ScheduledThreadPoolExecutor_delayedExecute_java_util_concurrent_RunnableScheduledFuture, VTABLE_java_util_concurrent_ScheduledThreadPoolExecutor_delayedExecute_java_util_concurrent_RunnableScheduledFuture, "(Ljava/util/concurrent/RunnableScheduledFuture;)V", 2 },
	{ "reExecutePeriodic", (intptr_t) M_java_util_concurrent_ScheduledThreadPoolExecutor_reExecutePeriodic_java_util_concurrent_RunnableScheduledFuture, VTABLE_java_util_concurrent_ScheduledThreadPoolExecutor_reExecutePeriodic_java_util_concurrent_RunnableScheduledFuture, "(Ljava/util/concurrent/RunnableScheduledFuture;)V", 0 },
	{ "onShutdown", (intptr_t) M_java_util_concurrent_ScheduledThreadPoolExecutor_onShutdown, VTABLE_java_util_concurrent_ScheduledThreadPoolExecutor_onShutdown, "()V", 0 },
	{ "decorateTask", (intptr_t) M_java_util_concurrent_ScheduledThreadPoolExecutor_decorateTask_java_lang_Runnable_java_util_concurrent_RunnableScheduledFuture_R_java_util_concurrent_RunnableScheduledFuture, VTABLE_java_util_concurrent_ScheduledThreadPoolExecutor_decorateTask_java_lang_Runnable_java_util_concurrent_RunnableScheduledFuture_R_java_util_concurrent_RunnableScheduledFuture, "(Ljava/lang/Runnable;Ljava/util/concurrent/RunnableScheduledFuture;)Ljava/util/concurrent/RunnableScheduledFuture;", 4 },
	{ "decorateTask", (intptr_t) M_java_util_concurrent_ScheduledThreadPoolExecutor_decorateTask_java_util_concurrent_Callable_java_util_concurrent_RunnableScheduledFuture_R_java_util_concurrent_RunnableScheduledFuture, VTABLE_java_util_concurrent_ScheduledThreadPoolExecutor_decorateTask_java_util_concurrent_Callable_java_util_concurrent_RunnableScheduledFuture_R_java_util_concurrent_RunnableScheduledFuture, "(Ljava/util/concurrent/Callable;Ljava/util/concurrent/RunnableScheduledFuture;)Ljava/util/concurrent/RunnableScheduledFuture;", 4 },
	{ "<init>", (intptr_t) init_java_util_concurrent_ScheduledThreadPoolExecutor_int, 0, "(I)V", 1 },
	{ "<init>", (intptr_t) init_java_util_concurrent_ScheduledThreadPoolExecutor_int_java_util_concurrent_ThreadFactory, 0, "(ILjava/util/concurrent/ThreadFactory;)V", 1 },
	{ "<init>", (intptr_t) init_java_util_concurrent_ScheduledThreadPoolExecutor_int_java_util_concurrent_RejectedExecutionHandler, 0, "(ILjava/util/concurrent/RejectedExecutionHandler;)V", 1 },
	{ "<init>", (intptr_t) init_java_util_concurrent_ScheduledThreadPoolExecutor_int_java_util_concurrent_ThreadFactory_java_util_concurrent_RejectedExecutionHandler, 0, "(ILjava/util/concurrent/ThreadFactory;Ljava/util/concurrent/RejectedExecutionHandler;)V", 1 },
	{ "triggerTime", (intptr_t) M_java_util_concurrent_ScheduledThreadPoolExecutor_triggerTime_long_java_util_concurrent_TimeUnit_R_long, VTABLE_java_util_concurrent_ScheduledThreadPoolExecutor_triggerTime_long_java_util_concurrent_TimeUnit_R_long, "(JLjava/util/concurrent/TimeUnit;)J", 2 },
	{ "triggerTime", (intptr_t) M_java_util_concurrent_ScheduledThreadPoolExecutor_triggerTime_long_R_long, VTABLE_java_util_concurrent_ScheduledThreadPoolExecutor_triggerTime_long_R_long, "(J)J", 0 },
	{ "overflowFree", (intptr_t) M_java_util_concurrent_ScheduledThreadPoolExecutor_overflowFree_long_R_long, VTABLE_java_util_concurrent_ScheduledThreadPoolExecutor_overflowFree_long_R_long, "(J)J", 2 },
	{ "schedule", (intptr_t) M_java_util_concurrent_ScheduledThreadPoolExecutor_schedule_java_lang_Runnable_long_java_util_concurrent_TimeUnit_R_java_util_concurrent_ScheduledFuture, VTABLE_java_util_concurrent_ScheduledThreadPoolExecutor_schedule_java_lang_Runnable_long_java_util_concurrent_TimeUnit_R_java_util_concurrent_ScheduledFuture, "(Ljava/lang/Runnable;JLjava/util/concurrent/TimeUnit;)Ljava/util/concurrent/ScheduledFuture;", 1 },
	{ "schedule", (intptr_t) M_java_util_concurrent_ScheduledThreadPoolExecutor_schedule_java_util_concurrent_Callable_long_java_util_concurrent_TimeUnit_R_java_util_concurrent_ScheduledFuture, VTABLE_java_util_concurrent_ScheduledThreadPoolExecutor_schedule_java_util_concurrent_Callable_long_java_util_concurrent_TimeUnit_R_java_util_concurrent_ScheduledFuture, "(Ljava/util/concurrent/Callable;JLjava/util/concurrent/TimeUnit;)Ljava/util/concurrent/ScheduledFuture;", 1 },
	{ "scheduleAtFixedRate", (intptr_t) M_java_util_concurrent_ScheduledThreadPoolExecutor_scheduleAtFixedRate_java_lang_Runnable_long_long_java_util_concurrent_TimeUnit_R_java_util_concurrent_ScheduledFuture, VTABLE_java_util_concurrent_ScheduledThreadPoolExecutor_scheduleAtFixedRate_java_lang_Runnable_long_long_java_util_concurrent_TimeUnit_R_java_util_concurrent_ScheduledFuture, "(Ljava/lang/Runnable;JJLjava/util/concurrent/TimeUnit;)Ljava/util/concurrent/ScheduledFuture;", 1 },
	{ "scheduleWithFixedDelay", (intptr_t) M_java_util_concurrent_ScheduledThreadPoolExecutor_scheduleWithFixedDelay_java_lang_Runnable_long_long_java_util_concurrent_TimeUnit_R_java_util_concurrent_ScheduledFuture, VTABLE_java_util_concurrent_ScheduledThreadPoolExecutor_scheduleWithFixedDelay_java_lang_Runnable_long_long_java_util_concurrent_TimeUnit_R_java_util_concurrent_ScheduledFuture, "(Ljava/lang/Runnable;JJLjava/util/concurrent/TimeUnit;)Ljava/util/concurrent/ScheduledFuture;", 1 },
	{ "execute", (intptr_t) M_java_util_concurrent_ScheduledThreadPoolExecutor_execute_java_lang_Runnable, VTABLE_java_util_concurrent_ScheduledThreadPoolExecutor_execute_java_lang_Runnable, "(Ljava/lang/Runnable;)V", 1 },
	{ "submit", (intptr_t) M_java_util_concurrent_ScheduledThreadPoolExecutor_submit_java_lang_Runnable_R_java_util_concurrent_Future, VTABLE_java_util_concurrent_ScheduledThreadPoolExecutor_submit_java_lang_Runnable_R_java_util_concurrent_Future, "(Ljava/lang/Runnable;)Ljava/util/concurrent/Future;", 1 },
	{ "submit", (intptr_t) M_java_util_concurrent_ScheduledThreadPoolExecutor_submit_java_lang_Runnable_java_lang_Object_R_java_util_concurrent_Future, VTABLE_java_util_concurrent_ScheduledThreadPoolExecutor_submit_java_lang_Runnable_java_lang_Object_R_java_util_concurrent_Future, "(Ljava/lang/Runnable;Ljava/lang/Object;)Ljava/util/concurrent/Future;", 1 },
	{ "submit", (intptr_t) M_java_util_concurrent_ScheduledThreadPoolExecutor_submit_java_util_concurrent_Callable_R_java_util_concurrent_Future, VTABLE_java_util_concurrent_ScheduledThreadPoolExecutor_submit_java_util_concurrent_Callable_R_java_util_concurrent_Future, "(Ljava/util/concurrent/Callable;)Ljava/util/concurrent/Future;", 1 },
	{ "setContinueExistingPeriodicTasksAfterShutdownPolicy", (intptr_t) M_java_util_concurrent_ScheduledThreadPoolExecutor_setContinueExistingPeriodicTasksAfterShutdownPolicy_boolean, VTABLE_java_util_concurrent_ScheduledThreadPoolExecutor_setContinueExistingPeriodicTasksAfterShutdownPolicy_boolean, "(Z)V", 1 },
	{ "getContinueExistingPeriodicTasksAfterShutdownPolicy", (intptr_t) M_java_util_concurrent_ScheduledThreadPoolExecutor_getContinueExistingPeriodicTasksAfterShutdownPolicy_R_boolean, VTABLE_java_util_concurrent_ScheduledThreadPoolExecutor_getContinueExistingPeriodicTasksAfterShutdownPolicy_R_boolean, "()Z", 1 },
	{ "setExecuteExistingDelayedTasksAfterShutdownPolicy", (intptr_t) M_java_util_concurrent_ScheduledThreadPoolExecutor_setExecuteExistingDelayedTasksAfterShutdownPolicy_boolean, VTABLE_java_util_concurrent_ScheduledThreadPoolExecutor_setExecuteExistingDelayedTasksAfterShutdownPolicy_boolean, "(Z)V", 1 },
	{ "getExecuteExistingDelayedTasksAfterShutdownPolicy", (intptr_t) M_java_util_concurrent_ScheduledThreadPoolExecutor_getExecuteExistingDelayedTasksAfterShutdownPolicy_R_boolean, VTABLE_java_util_concurrent_ScheduledThreadPoolExecutor_getExecuteExistingDelayedTasksAfterShutdownPolicy_R_boolean, "()Z", 1 },
	{ "setRemoveOnCancelPolicy", (intptr_t) M_java_util_concurrent_ScheduledThreadPoolExecutor_setRemoveOnCancelPolicy_boolean, VTABLE_java_util_concurrent_ScheduledThreadPoolExecutor_setRemoveOnCancelPolicy_boolean, "(Z)V", 1 },
	{ "getRemoveOnCancelPolicy", (intptr_t) M_java_util_concurrent_ScheduledThreadPoolExecutor_getRemoveOnCancelPolicy_R_boolean, VTABLE_java_util_concurrent_ScheduledThreadPoolExecutor_getRemoveOnCancelPolicy_R_boolean, "()Z", 1 },
	{ "shutdown", (intptr_t) M_java_util_concurrent_ScheduledThreadPoolExecutor_shutdown, VTABLE_java_util_concurrent_ScheduledThreadPoolExecutor_shutdown, "()V", 1 },
	{ "shutdownNow", (intptr_t) M_java_util_concurrent_ScheduledThreadPoolExecutor_shutdownNow_R_java_util_List, VTABLE_java_util_concurrent_ScheduledThreadPoolExecutor_shutdownNow_R_java_util_List, "()Ljava/util/List;", 1 },
	{ "getQueue", (intptr_t) M_java_util_concurrent_ScheduledThreadPoolExecutor_getQueue_R_java_util_concurrent_BlockingQueue, VTABLE_java_util_concurrent_ScheduledThreadPoolExecutor_getQueue_R_java_util_concurrent_BlockingQueue, "()Ljava/util/concurrent/BlockingQueue;", 1 },
	{ "<clinit>", (intptr_t) clinit_java_util_concurrent_ScheduledThreadPoolExecutor, 0, "()V", 8 },
};

Class class_java_util_concurrent_ScheduledThreadPoolExecutor{
		.nativeName = (intptr_t) "java/util/concurrent/ScheduledThreadPoolExecutor",
		.parentClass = (intptr_t) &class_java_util_concurrent_ThreadPoolExecutor,
		.size = sizeof(java_util_concurrent_ScheduledThreadPoolExecutor),
		.classVtable = (intptr_t) vtable_java_util_concurrent_ScheduledThreadPoolExecutor,
		.staticInitializer = (intptr_t) clinit_java_util_concurrent_ScheduledThreadPoolExecutor,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_java_util_concurrent_ScheduledThreadPoolExecutor,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 2,
		.nativeInnerClasses = (intptr_t) innerClasses,
		.access = 33,
		.interfaceCount = 1,
		.nativeInterfaces = (intptr_t) interfaces,
		.fieldCount = 5,
		.nativeFields = (intptr_t) fields,
		.methodCount = 31,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 90,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_java_util_concurrent_ScheduledThreadPoolExecutor = registerClass(&class_java_util_concurrent_ScheduledThreadPoolExecutor);

}
