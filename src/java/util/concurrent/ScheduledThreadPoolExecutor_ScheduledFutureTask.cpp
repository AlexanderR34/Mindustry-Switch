#include "java/util/concurrent/ScheduledThreadPoolExecutor_ScheduledFutureTask.h"
#include "java/util/concurrent/FutureTask.h"
#include "java/lang/Object.h"
#include "java/util/concurrent/ThreadPoolExecutor.h"
#include "java/util/concurrent/ScheduledThreadPoolExecutor_ScheduledFutureTask.h"
#include "java/util/concurrent/TimeUnit.h"
#include "java/util/concurrent/Callable.h"
#include "java/util/concurrent/ScheduledThreadPoolExecutor.h"
#include "java/lang/System.h"
#include "java/util/concurrent/Delayed.h"
#include "java/util/concurrent/RunnableScheduledFuture.h"
#include "java/lang/Runnable.h"

extern "C" {


void mark_java_util_concurrent_ScheduledThreadPoolExecutor$ScheduledFutureTask(jobject object, jint mark, jint depth) {
	if (!object) {
		return;
	}
	if (depth > GC_DEPTH_ALWAYS && (object->gcMark < GC_MARK_START || object->gcMark == mark))
		return;
	if (depth > MAX_GC_MARK_DEPTH) {
		markDeepObject(object);
		return;
	}
	mark_java_util_concurrent_FutureTask(object, mark, depth);
	if (object->gcMark >= GC_MARK_START)
		object->gcMark = mark;
	auto self = (java_util_concurrent_ScheduledThreadPoolExecutor$ScheduledFutureTask *) object;
	if (self->F_outerTask)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_outerTask)->clazz)->markFunction)((jobject) self->F_outerTask, mark, depth + 1);
	if (self->F_this$0)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_this$0)->clazz)->markFunction)((jobject) self->F_this$0, mark, depth + 1);
}

void clinit_java_util_concurrent_ScheduledThreadPoolExecutor$ScheduledFutureTask(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	clinit_java_util_concurrent_FutureTask(ctx);
}

void init_java_util_concurrent_ScheduledThreadPoolExecutor$ScheduledFutureTask_java_util_concurrent_ScheduledThreadPoolExecutor_java_lang_Runnable_java_lang_Object_long_long(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2, jlong param3, jlong param4) {
	NULL_CHECK(self);
	jtype frame[11];
	auto stack = &frame[8];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/concurrent/ScheduledThreadPoolExecutor$ScheduledFutureTask:<init>", 11 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_util_concurrent_ScheduledThreadPoolExecutor$ScheduledFutureTask(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].o = param2;
	frame[4].l = param3;
	frame[6].l = param4;
	{
	LINE_NUMBER(208);
	((java_util_concurrent_ScheduledThreadPoolExecutor$ScheduledFutureTask *) NULL_CHECK((frame[0].o)))->F_this$0 = (jref) (frame[1].o);
	LINE_NUMBER(209);
	init_java_util_concurrent_FutureTask_java_lang_Runnable_java_lang_Object(ctx, (frame[0].o), (frame[2].o), (frame[3].o));
	LINE_NUMBER(197);
	((java_util_concurrent_ScheduledThreadPoolExecutor$ScheduledFutureTask *) NULL_CHECK((frame[0].o)))->F_outerTask = (jref) (frame[0].o);
	LINE_NUMBER(210);
	((java_util_concurrent_ScheduledThreadPoolExecutor$ScheduledFutureTask *) NULL_CHECK((frame[0].o)))->F_time = (frame[4].l);
	LINE_NUMBER(211);
	((java_util_concurrent_ScheduledThreadPoolExecutor$ScheduledFutureTask *) NULL_CHECK((frame[0].o)))->F_period = (jlong(0));
	LINE_NUMBER(212);
	((java_util_concurrent_ScheduledThreadPoolExecutor$ScheduledFutureTask *) NULL_CHECK((frame[0].o)))->F_sequenceNumber = (frame[6].l);
	LINE_NUMBER(213);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_java_util_concurrent_ScheduledThreadPoolExecutor$ScheduledFutureTask_java_util_concurrent_ScheduledThreadPoolExecutor_java_lang_Runnable_java_lang_Object_long_long_long(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2, jlong param3, jlong param4, jlong param5) {
	NULL_CHECK(self);
	jtype frame[13];
	auto stack = &frame[10];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/concurrent/ScheduledThreadPoolExecutor$ScheduledFutureTask:<init>", 13 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_util_concurrent_ScheduledThreadPoolExecutor$ScheduledFutureTask(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].o = param2;
	frame[4].l = param3;
	frame[6].l = param4;
	frame[8].l = param5;
	{
	LINE_NUMBER(220);
	((java_util_concurrent_ScheduledThreadPoolExecutor$ScheduledFutureTask *) NULL_CHECK((frame[0].o)))->F_this$0 = (jref) (frame[1].o);
	LINE_NUMBER(221);
	init_java_util_concurrent_FutureTask_java_lang_Runnable_java_lang_Object(ctx, (frame[0].o), (frame[2].o), (frame[3].o));
	LINE_NUMBER(197);
	((java_util_concurrent_ScheduledThreadPoolExecutor$ScheduledFutureTask *) NULL_CHECK((frame[0].o)))->F_outerTask = (jref) (frame[0].o);
	LINE_NUMBER(222);
	((java_util_concurrent_ScheduledThreadPoolExecutor$ScheduledFutureTask *) NULL_CHECK((frame[0].o)))->F_time = (frame[4].l);
	LINE_NUMBER(223);
	((java_util_concurrent_ScheduledThreadPoolExecutor$ScheduledFutureTask *) NULL_CHECK((frame[0].o)))->F_period = (frame[6].l);
	LINE_NUMBER(224);
	((java_util_concurrent_ScheduledThreadPoolExecutor$ScheduledFutureTask *) NULL_CHECK((frame[0].o)))->F_sequenceNumber = (frame[8].l);
	LINE_NUMBER(225);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_java_util_concurrent_ScheduledThreadPoolExecutor$ScheduledFutureTask_java_util_concurrent_ScheduledThreadPoolExecutor_java_util_concurrent_Callable_long_long(jcontext ctx, jobject self, jobject param0, jobject param1, jlong param2, jlong param3) {
	NULL_CHECK(self);
	jtype frame[10];
	auto stack = &frame[7];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/concurrent/ScheduledThreadPoolExecutor$ScheduledFutureTask:<init>", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_util_concurrent_ScheduledThreadPoolExecutor$ScheduledFutureTask(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].l = param2;
	frame[5].l = param3;
	{
	LINE_NUMBER(231);
	((java_util_concurrent_ScheduledThreadPoolExecutor$ScheduledFutureTask *) NULL_CHECK((frame[0].o)))->F_this$0 = (jref) (frame[1].o);
	LINE_NUMBER(232);
	init_java_util_concurrent_FutureTask_java_util_concurrent_Callable(ctx, (frame[0].o), (frame[2].o));
	LINE_NUMBER(197);
	((java_util_concurrent_ScheduledThreadPoolExecutor$ScheduledFutureTask *) NULL_CHECK((frame[0].o)))->F_outerTask = (jref) (frame[0].o);
	LINE_NUMBER(233);
	((java_util_concurrent_ScheduledThreadPoolExecutor$ScheduledFutureTask *) NULL_CHECK((frame[0].o)))->F_time = (frame[3].l);
	LINE_NUMBER(234);
	((java_util_concurrent_ScheduledThreadPoolExecutor$ScheduledFutureTask *) NULL_CHECK((frame[0].o)))->F_period = (jlong(0));
	LINE_NUMBER(235);
	((java_util_concurrent_ScheduledThreadPoolExecutor$ScheduledFutureTask *) NULL_CHECK((frame[0].o)))->F_sequenceNumber = (frame[5].l);
	LINE_NUMBER(236);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jlong M_java_util_concurrent_ScheduledThreadPoolExecutor$ScheduledFutureTask_getDelay_java_util_concurrent_TimeUnit_R_long(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/concurrent/ScheduledThreadPoolExecutor$ScheduledFutureTask:getDelay", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(239);
	sp[0].o = frame[1].o;
	jlong temp0 = (jlong)((java_util_concurrent_ScheduledThreadPoolExecutor$ScheduledFutureTask *) NULL_CHECK((frame[0].o)))->F_time;
	jlong temp1 = (jlong)SM_java_lang_System_nanoTime_R_long(ctx);
	jlong temp2 = temp0 - temp1;
	clinit_java_util_concurrent_TimeUnit(ctx);
	sp[1].o = (jobject)SF_java_util_concurrent_TimeUnit_NANOSECONDS;
	jlong temp3 = (jlong)((func_java_util_concurrent_TimeUnit_convert_long_java_util_concurrent_TimeUnit_R_long) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_concurrent_TimeUnit_convert_long_java_util_concurrent_TimeUnit_R_long])(ctx, sp[0].o, temp2, sp[1].o);
	popStackFrame(ctx);
	return temp3;
	}

	popStackFrame(ctx);
}

jint M_java_util_concurrent_ScheduledThreadPoolExecutor$ScheduledFutureTask_compareTo_java_util_concurrent_Delayed_R_int(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/concurrent/ScheduledThreadPoolExecutor$ScheduledFutureTask:compareTo", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(243);
	if ((frame[1].o) != (frame[0].o)) goto label_1;
	}
	{
	LINE_NUMBER(244);
	popStackFrame(ctx);
	return (jint(0));
	}
label_1:;
	{
	LINE_NUMBER(245);
	if ((isInstance(ctx, (frame[1].o), &class_java_util_concurrent_ScheduledThreadPoolExecutor$ScheduledFutureTask)) == 0) goto label_3;
	}
	{
	LINE_NUMBER(246);
	frame[2].o = (checkCast(ctx, &class_java_util_concurrent_ScheduledThreadPoolExecutor$ScheduledFutureTask, (frame[1].o)));
	LINE_NUMBER(247);
	frame[3].l = (((jlong)((java_util_concurrent_ScheduledThreadPoolExecutor$ScheduledFutureTask *) NULL_CHECK((frame[0].o)))->F_time) - ((jlong)((java_util_concurrent_ScheduledThreadPoolExecutor$ScheduledFutureTask *) NULL_CHECK((frame[2].o)))->F_time));
	LINE_NUMBER(248);
	if ((longCompare((frame[3].l), (jlong(0)))) >= 0) goto label_7;
	}
	{
	LINE_NUMBER(249);
	popStackFrame(ctx);
	return (jint(-1));
	}
label_7:;
	{
	LINE_NUMBER(250);
	if ((longCompare((frame[3].l), (jlong(0)))) <= 0) goto label_9;
	}
	{
	LINE_NUMBER(251);
	popStackFrame(ctx);
	return (jint(1));
	}
label_9:;
	{
	LINE_NUMBER(252);
	if ((longCompare(((jlong)((java_util_concurrent_ScheduledThreadPoolExecutor$ScheduledFutureTask *) NULL_CHECK((frame[0].o)))->F_sequenceNumber), ((jlong)((java_util_concurrent_ScheduledThreadPoolExecutor$ScheduledFutureTask *) NULL_CHECK((frame[2].o)))->F_sequenceNumber))) >= 0) goto label_11;
	}
	{
	LINE_NUMBER(253);
	popStackFrame(ctx);
	return (jint(-1));
	}
label_11:;
	{
	LINE_NUMBER(255);
	popStackFrame(ctx);
	return (jint(1));
	}
label_3:;
	{
	LINE_NUMBER(257);
	sp[0].o = frame[0].o;
	clinit_java_util_concurrent_TimeUnit(ctx);
	sp[1].o = (jobject)SF_java_util_concurrent_TimeUnit_NANOSECONDS;
	jlong temp0 = (jlong)((func_java_util_concurrent_ScheduledThreadPoolExecutor$ScheduledFutureTask_getDelay_java_util_concurrent_TimeUnit_R_long) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_concurrent_ScheduledThreadPoolExecutor$ScheduledFutureTask_getDelay_java_util_concurrent_TimeUnit_R_long])(ctx, sp[0].o, sp[1].o);
	sp[0].o = frame[1].o;
	clinit_java_util_concurrent_TimeUnit(ctx);
	sp[1].o = (jobject)SF_java_util_concurrent_TimeUnit_NANOSECONDS;
	jlong temp1 = (jlong)((func_java_util_concurrent_Delayed_getDelay_java_util_concurrent_TimeUnit_R_long) resolveInterfaceMethod(ctx, &class_java_util_concurrent_Delayed, INDEX_java_util_concurrent_Delayed_getDelay_java_util_concurrent_TimeUnit_R_long, sp[0].o))(ctx, sp[0].o, sp[1].o);
	frame[2].l = (temp0 - temp1);
	LINE_NUMBER(258);
	if ((longCompare((frame[2].l), (jlong(0)))) >= 0) goto label_14;
	}
	INST_ICONST(-1);
	goto label_15;
label_14:;
	{
	if ((longCompare((frame[2].l), (jlong(0)))) <= 0) goto label_16;
	}
	INST_ICONST(1);
	goto label_15;
label_16:;
	INST_ICONST(0);
label_15:;
	popStackFrame(ctx);
	INST_IRETURN();

	popStackFrame(ctx);
}

jbool M_java_util_concurrent_ScheduledThreadPoolExecutor$ScheduledFutureTask_isPeriodic_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/concurrent/ScheduledThreadPoolExecutor$ScheduledFutureTask:isPeriodic", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(267);
	if ((longCompare(((jlong)((java_util_concurrent_ScheduledThreadPoolExecutor$ScheduledFutureTask *) NULL_CHECK((frame[0].o)))->F_period), (jlong(0)))) == 0) goto label_1;
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

void M_java_util_concurrent_ScheduledThreadPoolExecutor$ScheduledFutureTask_setNextRunTime(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/concurrent/ScheduledThreadPoolExecutor$ScheduledFutureTask:setNextRunTime", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(274);
	frame[1].l = ((jlong)((java_util_concurrent_ScheduledThreadPoolExecutor$ScheduledFutureTask *) NULL_CHECK((frame[0].o)))->F_period);
	LINE_NUMBER(275);
	if ((longCompare((frame[1].l), (jlong(0)))) <= 0) goto label_2;
	}
	{
	LINE_NUMBER(276);
	sp[0].o = frame[0].o;
	((java_util_concurrent_ScheduledThreadPoolExecutor$ScheduledFutureTask *) NULL_CHECK(sp[0].o))->F_time = (((jlong)((java_util_concurrent_ScheduledThreadPoolExecutor$ScheduledFutureTask *) NULL_CHECK(sp[0].o))->F_time) + (frame[1].l));
	goto label_4;
	}
label_2:;
	{
	LINE_NUMBER(278);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((java_util_concurrent_ScheduledThreadPoolExecutor$ScheduledFutureTask *) NULL_CHECK((frame[0].o)))->F_this$0;
	jlong temp0 = (jlong)((func_java_util_concurrent_ScheduledThreadPoolExecutor_triggerTime_long_R_long) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_util_concurrent_ScheduledThreadPoolExecutor_triggerTime_long_R_long])(ctx, sp[1].o, (-(frame[1].l)));
	((java_util_concurrent_ScheduledThreadPoolExecutor$ScheduledFutureTask *) NULL_CHECK(sp[0].o))->F_time = temp0;
	}
label_4:;
	LINE_NUMBER(279);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jbool M_java_util_concurrent_ScheduledThreadPoolExecutor$ScheduledFutureTask_cancel_boolean_R_boolean(jcontext ctx, jobject self, jbool param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/concurrent/ScheduledThreadPoolExecutor$ScheduledFutureTask:cancel", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(285);
	jint temp0 = (jint)M_java_util_concurrent_FutureTask_cancel_boolean_R_boolean(ctx, (frame[0].o), (frame[1].i));
	frame[2].i = temp0;
	LINE_NUMBER(286);
	if ((frame[2].i) == 0) goto label_2;
	}
	{
	sp[0].o = (jobject)((java_util_concurrent_ScheduledThreadPoolExecutor$ScheduledFutureTask *) NULL_CHECK((frame[0].o)))->F_this$0;
	if (((jint)((java_util_concurrent_ScheduledThreadPoolExecutor *) NULL_CHECK(sp[0].o))->F_removeOnCancel) == 0) goto label_2;
	}
	{
	if (((jint)((java_util_concurrent_ScheduledThreadPoolExecutor$ScheduledFutureTask *) NULL_CHECK((frame[0].o)))->F_heapIndex) < 0) goto label_2;
	}
	{
	LINE_NUMBER(287);
	sp[0].o = (jobject)((java_util_concurrent_ScheduledThreadPoolExecutor$ScheduledFutureTask *) NULL_CHECK((frame[0].o)))->F_this$0;
	jint temp0 = (jint)((func_java_util_concurrent_ScheduledThreadPoolExecutor_remove_java_lang_Runnable_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_concurrent_ScheduledThreadPoolExecutor_remove_java_lang_Runnable_R_boolean])(ctx, sp[0].o, (frame[0].o));
	}
label_2:;
	{
	LINE_NUMBER(288);
	popStackFrame(ctx);
	return (frame[2].i);
	}

	popStackFrame(ctx);
}

void M_java_util_concurrent_ScheduledThreadPoolExecutor$ScheduledFutureTask_run(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/concurrent/ScheduledThreadPoolExecutor$ScheduledFutureTask:run", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(295);
	jint temp0 = (jint)((func_java_util_concurrent_ScheduledThreadPoolExecutor$ScheduledFutureTask_isPeriodic_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_util_concurrent_ScheduledThreadPoolExecutor$ScheduledFutureTask_isPeriodic_R_boolean])(ctx, (frame[0].o));
	frame[1].i = temp0;
	LINE_NUMBER(296);
	sp[0].o = (jobject)((java_util_concurrent_ScheduledThreadPoolExecutor$ScheduledFutureTask *) NULL_CHECK((frame[0].o)))->F_this$0;
	jint temp1 = (jint)((func_java_util_concurrent_ScheduledThreadPoolExecutor_canRunInCurrentRunState_boolean_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_concurrent_ScheduledThreadPoolExecutor_canRunInCurrentRunState_boolean_R_boolean])(ctx, sp[0].o, (frame[1].i));
	if (temp1 != 0) goto label_2;
	}
	{
	LINE_NUMBER(297);
	jint temp0 = (jint)((func_java_util_concurrent_ScheduledThreadPoolExecutor$ScheduledFutureTask_cancel_boolean_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_util_concurrent_ScheduledThreadPoolExecutor$ScheduledFutureTask_cancel_boolean_R_boolean])(ctx, (frame[0].o), (jint(0)));
	goto label_4;
	}
label_2:;
	{
	LINE_NUMBER(298);
	if ((frame[1].i) != 0) goto label_5;
	}
	{
	LINE_NUMBER(299);
	M_java_util_concurrent_FutureTask_run(ctx, (frame[0].o));
	goto label_4;
	}
label_5:;
	{
	LINE_NUMBER(300);
	jint temp0 = (jint)M_java_util_concurrent_FutureTask_runAndReset_R_boolean(ctx, (frame[0].o));
	if (temp0 == 0) goto label_4;
	}
	{
	LINE_NUMBER(301);
	M_java_util_concurrent_ScheduledThreadPoolExecutor$ScheduledFutureTask_setNextRunTime(ctx, (frame[0].o));
	LINE_NUMBER(302);
	sp[0].o = (jobject)((java_util_concurrent_ScheduledThreadPoolExecutor$ScheduledFutureTask *) NULL_CHECK((frame[0].o)))->F_this$0;
	sp[1].o = (jobject)((java_util_concurrent_ScheduledThreadPoolExecutor$ScheduledFutureTask *) NULL_CHECK((frame[0].o)))->F_outerTask;
	((func_java_util_concurrent_ScheduledThreadPoolExecutor_reExecutePeriodic_java_util_concurrent_RunnableScheduledFuture) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_concurrent_ScheduledThreadPoolExecutor_reExecutePeriodic_java_util_concurrent_RunnableScheduledFuture])(ctx, sp[0].o, sp[1].o);
	}
label_4:;
	LINE_NUMBER(304);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jint M_java_util_concurrent_ScheduledThreadPoolExecutor$ScheduledFutureTask_compareTo_java_lang_Object_R_int(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/concurrent/ScheduledThreadPoolExecutor$ScheduledFutureTask:compareTo", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(179);
	jint temp0 = (jint)((func_java_util_concurrent_ScheduledThreadPoolExecutor$ScheduledFutureTask_compareTo_java_util_concurrent_Delayed_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_util_concurrent_ScheduledThreadPoolExecutor$ScheduledFutureTask_compareTo_java_util_concurrent_Delayed_R_int])(ctx, (frame[0].o), (checkCast(ctx, &class_java_util_concurrent_Delayed, (frame[1].o))));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

void *vtable_java_util_concurrent_ScheduledThreadPoolExecutor$ScheduledFutureTask[] {
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
	(void *) M_java_util_concurrent_ScheduledThreadPoolExecutor$ScheduledFutureTask_run,
	(void *) M_java_util_concurrent_ScheduledThreadPoolExecutor$ScheduledFutureTask_cancel_boolean_R_boolean,
	(void *) M_java_util_concurrent_FutureTask_isCancelled_R_boolean,
	(void *) M_java_util_concurrent_FutureTask_isDone_R_boolean,
	(void *) M_java_util_concurrent_FutureTask_get_R_java_lang_Object,
	(void *) M_java_util_concurrent_FutureTask_get_long_java_util_concurrent_TimeUnit_R_java_lang_Object,
	(void *) M_java_util_concurrent_FutureTask_report_int_R_java_lang_Object,
	(void *) M_java_util_concurrent_FutureTask_done,
	(void *) M_java_util_concurrent_FutureTask_set_java_lang_Object,
	(void *) M_java_util_concurrent_FutureTask_setException_java_lang_Throwable,
	(void *) M_java_util_concurrent_FutureTask_runAndReset_R_boolean,
	(void *) M_java_util_concurrent_FutureTask_handlePossibleCancellationInterrupt_int,
	(void *) M_java_util_concurrent_FutureTask_finishCompletion,
	(void *) M_java_util_concurrent_FutureTask_awaitDone_boolean_long_R_int,
	(void *) M_java_util_concurrent_FutureTask_removeWaiter_java_util_concurrent_FutureTask$WaitNode,
	(void *) M_java_util_concurrent_ScheduledThreadPoolExecutor$ScheduledFutureTask_compareTo_java_lang_Object_R_int,
	(void *) M_java_util_concurrent_ScheduledThreadPoolExecutor$ScheduledFutureTask_getDelay_java_util_concurrent_TimeUnit_R_long,
	(void *) M_java_util_concurrent_ScheduledThreadPoolExecutor$ScheduledFutureTask_isPeriodic_R_boolean,
	(void *) M_java_util_concurrent_ScheduledThreadPoolExecutor$ScheduledFutureTask_compareTo_java_util_concurrent_Delayed_R_int,
	(void *) M_java_util_concurrent_ScheduledThreadPoolExecutor$ScheduledFutureTask_setNextRunTime,
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
	{ "run", "()V" },
	{ "cancel", "(Z)Z" },
	{ "isCancelled", "()Z" },
	{ "isDone", "()Z" },
	{ "get", "()Ljava/lang/Object;" },
	{ "get", "(JLjava/util/concurrent/TimeUnit;)Ljava/lang/Object;" },
	{ "report", "(I)Ljava/lang/Object;" },
	{ "done", "()V" },
	{ "set", "(Ljava/lang/Object;)V" },
	{ "setException", "(Ljava/lang/Throwable;)V" },
	{ "runAndReset", "()Z" },
	{ "handlePossibleCancellationInterrupt", "(I)V" },
	{ "finishCompletion", "()V" },
	{ "awaitDone", "(ZJ)I" },
	{ "removeWaiter", "(Ljava/util/concurrent/FutureTask$WaitNode;)V" },
	{ "compareTo", "(Ljava/lang/Object;)I" },
	{ "getDelay", "(Ljava/util/concurrent/TimeUnit;)J" },
	{ "isPeriodic", "()Z" },
	{ "compareTo", "(Ljava/util/concurrent/Delayed;)I" },
	{ "setNextRunTime", "()V" },
};

static jclass interfaces[] { &class_java_util_concurrent_RunnableScheduledFuture, };

static FieldMetadata fields[] {
	{ "sequenceNumber", &class_long, offsetof(java_util_concurrent_ScheduledThreadPoolExecutor$ScheduledFutureTask, F_sequenceNumber), "J", 18 },
	{ "time", &class_long, offsetof(java_util_concurrent_ScheduledThreadPoolExecutor$ScheduledFutureTask, F_time), "J", 66 },
	{ "period", &class_long, offsetof(java_util_concurrent_ScheduledThreadPoolExecutor$ScheduledFutureTask, F_period), "J", 18 },
	{ "outerTask", &class_java_util_concurrent_RunnableScheduledFuture, offsetof(java_util_concurrent_ScheduledThreadPoolExecutor$ScheduledFutureTask, F_outerTask), "Ljava/util/concurrent/RunnableScheduledFuture;", 0 },
	{ "heapIndex", &class_int, offsetof(java_util_concurrent_ScheduledThreadPoolExecutor$ScheduledFutureTask, F_heapIndex), "I", 0 },
	{ "this$0", &class_java_util_concurrent_ScheduledThreadPoolExecutor, offsetof(java_util_concurrent_ScheduledThreadPoolExecutor$ScheduledFutureTask, F_this$0), "Ljava/util/concurrent/ScheduledThreadPoolExecutor;", 4112 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_java_util_concurrent_ScheduledThreadPoolExecutor$ScheduledFutureTask_java_util_concurrent_ScheduledThreadPoolExecutor_java_lang_Runnable_java_lang_Object_long_long, 0, "(Ljava/util/concurrent/ScheduledThreadPoolExecutor;Ljava/lang/Runnable;Ljava/lang/Object;JJ)V", 0 },
	{ "<init>", (intptr_t) init_java_util_concurrent_ScheduledThreadPoolExecutor$ScheduledFutureTask_java_util_concurrent_ScheduledThreadPoolExecutor_java_lang_Runnable_java_lang_Object_long_long_long, 0, "(Ljava/util/concurrent/ScheduledThreadPoolExecutor;Ljava/lang/Runnable;Ljava/lang/Object;JJJ)V", 0 },
	{ "<init>", (intptr_t) init_java_util_concurrent_ScheduledThreadPoolExecutor$ScheduledFutureTask_java_util_concurrent_ScheduledThreadPoolExecutor_java_util_concurrent_Callable_long_long, 0, "(Ljava/util/concurrent/ScheduledThreadPoolExecutor;Ljava/util/concurrent/Callable;JJ)V", 0 },
	{ "getDelay", (intptr_t) M_java_util_concurrent_ScheduledThreadPoolExecutor$ScheduledFutureTask_getDelay_java_util_concurrent_TimeUnit_R_long, VTABLE_java_util_concurrent_ScheduledThreadPoolExecutor$ScheduledFutureTask_getDelay_java_util_concurrent_TimeUnit_R_long, "(Ljava/util/concurrent/TimeUnit;)J", 1 },
	{ "compareTo", (intptr_t) M_java_util_concurrent_ScheduledThreadPoolExecutor$ScheduledFutureTask_compareTo_java_util_concurrent_Delayed_R_int, VTABLE_java_util_concurrent_ScheduledThreadPoolExecutor$ScheduledFutureTask_compareTo_java_util_concurrent_Delayed_R_int, "(Ljava/util/concurrent/Delayed;)I", 1 },
	{ "isPeriodic", (intptr_t) M_java_util_concurrent_ScheduledThreadPoolExecutor$ScheduledFutureTask_isPeriodic_R_boolean, VTABLE_java_util_concurrent_ScheduledThreadPoolExecutor$ScheduledFutureTask_isPeriodic_R_boolean, "()Z", 1 },
	{ "setNextRunTime", (intptr_t) M_java_util_concurrent_ScheduledThreadPoolExecutor$ScheduledFutureTask_setNextRunTime, VTABLE_java_util_concurrent_ScheduledThreadPoolExecutor$ScheduledFutureTask_setNextRunTime, "()V", 2 },
	{ "cancel", (intptr_t) M_java_util_concurrent_ScheduledThreadPoolExecutor$ScheduledFutureTask_cancel_boolean_R_boolean, VTABLE_java_util_concurrent_ScheduledThreadPoolExecutor$ScheduledFutureTask_cancel_boolean_R_boolean, "(Z)Z", 1 },
	{ "run", (intptr_t) M_java_util_concurrent_ScheduledThreadPoolExecutor$ScheduledFutureTask_run, VTABLE_java_util_concurrent_ScheduledThreadPoolExecutor$ScheduledFutureTask_run, "()V", 1 },
	{ "compareTo", (intptr_t) M_java_util_concurrent_ScheduledThreadPoolExecutor$ScheduledFutureTask_compareTo_java_lang_Object_R_int, VTABLE_java_util_concurrent_ScheduledThreadPoolExecutor$ScheduledFutureTask_compareTo_java_lang_Object_R_int, "(Ljava/lang/Object;)I", 4161 },
};

Class class_java_util_concurrent_ScheduledThreadPoolExecutor$ScheduledFutureTask{
		.nativeName = (intptr_t) "java/util/concurrent/ScheduledThreadPoolExecutor$ScheduledFutureTask",
		.parentClass = (intptr_t) &class_java_util_concurrent_FutureTask,
		.size = sizeof(java_util_concurrent_ScheduledThreadPoolExecutor$ScheduledFutureTask),
		.classVtable = (intptr_t) vtable_java_util_concurrent_ScheduledThreadPoolExecutor$ScheduledFutureTask,
		.staticInitializer = (intptr_t) clinit_java_util_concurrent_ScheduledThreadPoolExecutor$ScheduledFutureTask,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_java_util_concurrent_ScheduledThreadPoolExecutor$ScheduledFutureTask,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) &class_java_util_concurrent_ScheduledThreadPoolExecutor,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 32,
		.interfaceCount = 1,
		.nativeInterfaces = (intptr_t) interfaces,
		.fieldCount = 6,
		.nativeFields = (intptr_t) fields,
		.methodCount = 10,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 31,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_java_util_concurrent_ScheduledThreadPoolExecutor$ScheduledFutureTask = registerClass(&class_java_util_concurrent_ScheduledThreadPoolExecutor$ScheduledFutureTask);

}

