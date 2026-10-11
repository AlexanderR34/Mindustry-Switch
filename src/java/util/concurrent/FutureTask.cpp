#include "java/util/concurrent/FutureTask.h"
#include "java/util/concurrent/ExecutionException.h"
#include "java/lang/InterruptedException.h"
#include "java/util/concurrent/TimeUnit.h"
#include "java/util/concurrent/Executors.h"
#include "java/util/concurrent/RunnableFuture.h"
#include "java/util/concurrent/Callable.h"
#include "java/lang/Runnable.h"
#include "java/util/concurrent/locks/LockSupport.h"
#include "java/util/concurrent/FutureTask_WaitNode.h"
#include "java/lang/Object.h"
#include "java/util/concurrent/FutureTask.h"
#include "java/util/concurrent/CancellationException.h"
#include "java/lang/NullPointerException.h"
#include "java/util/concurrent/TimeoutException.h"
#include "java/lang/Throwable.h"
#include "java/lang/System.h"
#include "java/lang/Thread.h"

extern "C" {

jint SF_java_util_concurrent_FutureTask_NEW;
jint SF_java_util_concurrent_FutureTask_COMPLETING;
jint SF_java_util_concurrent_FutureTask_NORMAL;
jint SF_java_util_concurrent_FutureTask_EXCEPTIONAL;
jint SF_java_util_concurrent_FutureTask_CANCELLED;
jint SF_java_util_concurrent_FutureTask_INTERRUPTING;
jint SF_java_util_concurrent_FutureTask_INTERRUPTED;

void mark_java_util_concurrent_FutureTask(jobject object, jint mark, jint depth) {
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
	auto self = (java_util_concurrent_FutureTask *) object;
	if (self->F_callable)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_callable)->clazz)->markFunction)((jobject) self->F_callable, mark, depth + 1);
	if (self->F_outcome)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_outcome)->clazz)->markFunction)((jobject) self->F_outcome, mark, depth + 1);
	if (self->F_runner)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_runner)->clazz)->markFunction)((jobject) self->F_runner, mark, depth + 1);
	if (self->F_waiters)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_waiters)->clazz)->markFunction)((jobject) self->F_waiters, mark, depth + 1);
}

jobject M_java_util_concurrent_FutureTask_report_int_R_java_lang_Object(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/concurrent/FutureTask:report", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(117);
	sp[0].o = (jobject)((java_util_concurrent_FutureTask *) NULL_CHECK((frame[0].o)))->F_outcome;
	frame[2].o = sp[0].o;
	LINE_NUMBER(118);
	if ((frame[1].i) != (jint(2))) goto label_2;
	}
	{
	LINE_NUMBER(119);
	popStackFrame(ctx);
	return (frame[2].o);
	}
label_2:;
	{
	LINE_NUMBER(120);
	if ((frame[1].i) < (jint(4))) goto label_4;
	}
	{
	LINE_NUMBER(121);
	clinit_java_util_concurrent_CancellationException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_util_concurrent_CancellationException);
	init_java_util_concurrent_CancellationException(ctx, sp[0].o);
	throwException(ctx, sp[0].o);	}
label_4:;
	{
	LINE_NUMBER(122);
	clinit_java_util_concurrent_ExecutionException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_util_concurrent_ExecutionException);
	init_java_util_concurrent_ExecutionException_java_lang_Throwable(ctx, sp[0].o, (checkCast(ctx, &class_java_lang_Throwable, (frame[2].o))));
	throwException(ctx, sp[0].o);	}

	popStackFrame(ctx);
}

void init_java_util_concurrent_FutureTask_java_util_concurrent_Callable(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/concurrent/FutureTask:<init>", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_util_concurrent_FutureTask(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(132);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(133);
	if ((frame[1].o) != nullptr) goto label_2;
	}
	{
	LINE_NUMBER(134);
	clinit_java_lang_NullPointerException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_NullPointerException);
	init_java_lang_NullPointerException(ctx, sp[0].o);
	throwException(ctx, sp[0].o);	}
label_2:;
	{
	LINE_NUMBER(135);
	((java_util_concurrent_FutureTask *) NULL_CHECK((frame[0].o)))->F_callable = (jref) (frame[1].o);
	LINE_NUMBER(136);
	((java_util_concurrent_FutureTask *) NULL_CHECK((frame[0].o)))->F_state = (jint(0));
	LINE_NUMBER(137);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_java_util_concurrent_FutureTask_java_lang_Runnable_java_lang_Object(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/concurrent/FutureTask:<init>", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_util_concurrent_FutureTask(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(151);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(152);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)SM_java_util_concurrent_Executors_callable_java_lang_Runnable_java_lang_Object_R_java_util_concurrent_Callable(ctx, (frame[1].o), (frame[2].o));
	((java_util_concurrent_FutureTask *) NULL_CHECK(sp[0].o))->F_callable = (jref) sp[1].o;
	LINE_NUMBER(153);
	((java_util_concurrent_FutureTask *) NULL_CHECK((frame[0].o)))->F_state = (jint(0));
	LINE_NUMBER(154);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jbool M_java_util_concurrent_FutureTask_isCancelled_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/concurrent/FutureTask:isCancelled", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(157);
	if (((jint)((java_util_concurrent_FutureTask *) NULL_CHECK((frame[0].o)))->F_state) < (jint(4))) goto label_1;
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

jbool M_java_util_concurrent_FutureTask_isDone_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/concurrent/FutureTask:isDone", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(161);
	if (((jint)((java_util_concurrent_FutureTask *) NULL_CHECK((frame[0].o)))->F_state) == 0) goto label_1;
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

jbool M_java_util_concurrent_FutureTask_cancel_boolean_R_boolean(jcontext ctx, jobject self, jbool param0) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/concurrent/FutureTask:cancel", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, self);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(165);
	if (((jint)((java_util_concurrent_FutureTask *) NULL_CHECK((frame[0].o)))->F_state) == 0) goto label_11;
	}
	{
	LINE_NUMBER(166);
	popStackFrame(ctx, self);
	return (jint(0));
	}
label_11:;
	{
	LINE_NUMBER(167);
	sp[0].o = frame[0].o;
	sp += 1;
	if ((frame[1].i) == 0) goto label_13;
	}
	INST_ICONST(5);
	goto label_14;
label_13:;
	INST_ICONST(4);
label_14:;
	sp -= 2;
	((java_util_concurrent_FutureTask *) NULL_CHECK(sp[0].o))->F_state = sp[1].i;
label_7: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_6; }
	}
	{
	LINE_NUMBER(169);
	if ((frame[1].i) == 0) goto label_5;
	}
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(171);
	sp[0].o = (jobject)((java_util_concurrent_FutureTask *) NULL_CHECK((frame[0].o)))->F_runner;
	frame[2].o = sp[0].o;
	LINE_NUMBER(172);
	if ((frame[2].o) == nullptr) goto label_1;
	}
	{
	LINE_NUMBER(173);
	((func_java_lang_Thread_interrupt) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_java_lang_Thread_interrupt])(ctx, (frame[2].o));
	}
label_1:;
	popExceptionFrame(frameRef);
	{
	LINE_NUMBER(175);
	((java_util_concurrent_FutureTask *) NULL_CHECK((frame[0].o)))->F_state = (6);
	LINE_NUMBER(176);
	goto label_5;
	}
label_2:;
	{
	sp -= 1;
	LINE_NUMBER(175);
	frame[3].o = sp[0].o;
	((java_util_concurrent_FutureTask *) NULL_CHECK((frame[0].o)))->F_state = (6);
	LINE_NUMBER(176);
	throwException(ctx, (frame[3].o));	}
label_5:;
	popExceptionFrame(frameRef);
	{
	LINE_NUMBER(179);
	M_java_util_concurrent_FutureTask_finishCompletion(ctx, (frame[0].o));
	LINE_NUMBER(180);
	goto label_20;
	}
label_6:;
label_9: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_6; }
	}
	LINE_NUMBER(179);
	INST_ASTORE(4);
	popExceptionFrame(frameRef);
	{
	M_java_util_concurrent_FutureTask_finishCompletion(ctx, (frame[0].o));
	LINE_NUMBER(180);
	throwException(ctx, (frame[4].o));	}
label_20:;
	{
	LINE_NUMBER(181);
	popStackFrame(ctx, self);
	return (jint(1));
	}

	popStackFrame(ctx);
}

jobject M_java_util_concurrent_FutureTask_get_R_java_lang_Object(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/concurrent/FutureTask:get", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(188);
	frame[1].i = ((jint)((java_util_concurrent_FutureTask *) NULL_CHECK((frame[0].o)))->F_state);
	LINE_NUMBER(189);
	if ((frame[1].i) > (jint(1))) goto label_2;
	}
	{
	LINE_NUMBER(190);
	jint temp0 = (jint)M_java_util_concurrent_FutureTask_awaitDone_boolean_long_R_int(ctx, (frame[0].o), (jint(0)), (jlong(0)));
	frame[1].i = temp0;
	}
label_2:;
	{
	LINE_NUMBER(191);
	sp[0].o = (jobject)M_java_util_concurrent_FutureTask_report_int_R_java_lang_Object(ctx, (frame[0].o), (frame[1].i));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_java_util_concurrent_FutureTask_get_long_java_util_concurrent_TimeUnit_R_java_lang_Object(jcontext ctx, jobject self, jlong param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[10];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/concurrent/FutureTask:get", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].l = param0;
	frame[3].o = param1;
	{
	LINE_NUMBER(199);
	if ((frame[3].o) != nullptr) goto label_1;
	}
	{
	LINE_NUMBER(200);
	clinit_java_lang_NullPointerException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_NullPointerException);
	init_java_lang_NullPointerException(ctx, sp[0].o);
	throwException(ctx, sp[0].o);	}
label_1:;
	{
	LINE_NUMBER(201);
	frame[4].i = ((jint)((java_util_concurrent_FutureTask *) NULL_CHECK((frame[0].o)))->F_state);
	LINE_NUMBER(202);
	if ((frame[4].i) > (jint(1))) goto label_4;
	}
	{
	sp[0].o = frame[0].o;
	jint temp0 = jint(1);
	sp[1].o = frame[3].o;
	jlong temp1 = frame[1].l;
	LINE_NUMBER(203);
	jlong temp2 = (jlong)((func_java_util_concurrent_TimeUnit_toNanos_long_R_long) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_util_concurrent_TimeUnit_toNanos_long_R_long])(ctx, sp[1].o, temp1);
	jint temp3 = (jint)M_java_util_concurrent_FutureTask_awaitDone_boolean_long_R_int(ctx, sp[0].o, temp0, temp2);
	frame[4].i = temp3;
	if (temp3 > (jint(1))) goto label_4;
	}
	{
	LINE_NUMBER(204);
	clinit_java_util_concurrent_TimeoutException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_util_concurrent_TimeoutException);
	init_java_util_concurrent_TimeoutException(ctx, sp[0].o);
	throwException(ctx, sp[0].o);	}
label_4:;
	{
	LINE_NUMBER(205);
	sp[0].o = (jobject)M_java_util_concurrent_FutureTask_report_int_R_java_lang_Object(ctx, (frame[0].o), (frame[4].i));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void M_java_util_concurrent_FutureTask_done(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[1];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/concurrent/FutureTask:done", 1 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	LINE_NUMBER(217);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_java_util_concurrent_FutureTask_set_java_lang_Object(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/concurrent/FutureTask:set", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, self);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(229);
	if (((jint)((java_util_concurrent_FutureTask *) NULL_CHECK((frame[0].o)))->F_state) != 0) goto label_1;
	}
	{
	LINE_NUMBER(230);
	((java_util_concurrent_FutureTask *) NULL_CHECK((frame[0].o)))->F_state = (jint(1));
	LINE_NUMBER(231);
	((java_util_concurrent_FutureTask *) NULL_CHECK((frame[0].o)))->F_outcome = (jref) (frame[1].o);
	LINE_NUMBER(232);
	((java_util_concurrent_FutureTask *) NULL_CHECK((frame[0].o)))->F_state = (jint(2));
	LINE_NUMBER(233);
	M_java_util_concurrent_FutureTask_finishCompletion(ctx, (frame[0].o));
	}
label_1:;
	LINE_NUMBER(235);
	popStackFrame(ctx, self);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_java_util_concurrent_FutureTask_setException_java_lang_Throwable(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/concurrent/FutureTask:setException", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, self);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(248);
	if (((jint)((java_util_concurrent_FutureTask *) NULL_CHECK((frame[0].o)))->F_state) != 0) goto label_1;
	}
	{
	LINE_NUMBER(249);
	((java_util_concurrent_FutureTask *) NULL_CHECK((frame[0].o)))->F_state = (jint(1));
	LINE_NUMBER(250);
	((java_util_concurrent_FutureTask *) NULL_CHECK((frame[0].o)))->F_outcome = (jref) (frame[1].o);
	LINE_NUMBER(251);
	((java_util_concurrent_FutureTask *) NULL_CHECK((frame[0].o)))->F_state = (jint(3));
	LINE_NUMBER(252);
	M_java_util_concurrent_FutureTask_finishCompletion(ctx, (frame[0].o));
	}
label_1:;
	LINE_NUMBER(254);
	popStackFrame(ctx, self);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_java_util_concurrent_FutureTask_run(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[7];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/concurrent/FutureTask:run", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, self);

	frame[0].o = self;
	{
	LINE_NUMBER(257);
	if (((jint)((java_util_concurrent_FutureTask *) NULL_CHECK((frame[0].o)))->F_state) != 0) goto label_11;
	}
	{
	sp[0].o = (jobject)((java_util_concurrent_FutureTask *) NULL_CHECK((frame[0].o)))->F_runner;
	if (sp[0].o == nullptr) goto label_12;
	}
label_11:;
	LINE_NUMBER(258);
	popStackFrame(ctx, self);
	INST_RETURN();
label_12:;
	{
	LINE_NUMBER(259);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)SM_java_lang_Thread_currentThread_R_java_lang_Thread(ctx);
	((java_util_concurrent_FutureTask *) NULL_CHECK(sp[0].o))->F_runner = (jref) sp[1].o;
	}
label_7: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_6; }
	}
	{
	LINE_NUMBER(261);
	sp[0].o = (jobject)((java_util_concurrent_FutureTask *) NULL_CHECK((frame[0].o)))->F_callable;
	frame[1].o = sp[0].o;
	LINE_NUMBER(262);
	if ((frame[1].o) == nullptr) goto label_5;
	}
	{
	if (((jint)((java_util_concurrent_FutureTask *) NULL_CHECK((frame[0].o)))->F_state) != 0) goto label_5;
	}
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(266);
	sp[0].o = (jobject)((func_java_util_concurrent_Callable_call_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_concurrent_Callable, INDEX_java_util_concurrent_Callable_call_R_java_lang_Object, (frame[1].o)))(ctx, (frame[1].o));
	frame[2].o = sp[0].o;
	LINE_NUMBER(267);
	frame[3].i = (jint(1));
	}
	popExceptionFrame(frameRef);
	LINE_NUMBER(272);
	goto label_15;
label_2:;
	{
	sp -= 1;
	LINE_NUMBER(268);
	frame[4].o = sp[0].o;
	LINE_NUMBER(269);
	frame[2].o = (jobject(nullptr));
	LINE_NUMBER(270);
	frame[3].i = (jint(0));
	LINE_NUMBER(271);
	((func_java_util_concurrent_FutureTask_setException_java_lang_Throwable) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_util_concurrent_FutureTask_setException_java_lang_Throwable])(ctx, (frame[0].o), (frame[4].o));
	}
label_15:;
	{
	LINE_NUMBER(273);
	if ((frame[3].i) == 0) goto label_5;
	}
	{
	LINE_NUMBER(274);
	((func_java_util_concurrent_FutureTask_set_java_lang_Object) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_util_concurrent_FutureTask_set_java_lang_Object])(ctx, (frame[0].o), (frame[2].o));
	}
label_5:;
	popExceptionFrame(frameRef);
	{
	LINE_NUMBER(279);
	((java_util_concurrent_FutureTask *) NULL_CHECK((frame[0].o)))->F_runner = (jref) (jobject(nullptr));
	LINE_NUMBER(282);
	frame[1].i = ((jint)((java_util_concurrent_FutureTask *) NULL_CHECK((frame[0].o)))->F_state);
	LINE_NUMBER(283);
	if ((frame[1].i) < (jint(5))) goto label_22;
	}
	{
	LINE_NUMBER(284);
	M_java_util_concurrent_FutureTask_handlePossibleCancellationInterrupt_int(ctx, (frame[0].o), (frame[1].i));
	}
label_22:;
	LINE_NUMBER(285);
	goto label_24;
label_6:;
label_9: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_6; }
	}
	LINE_NUMBER(279);
	INST_ASTORE(5);
	popExceptionFrame(frameRef);
	{
	((java_util_concurrent_FutureTask *) NULL_CHECK((frame[0].o)))->F_runner = (jref) (jobject(nullptr));
	LINE_NUMBER(282);
	frame[6].i = ((jint)((java_util_concurrent_FutureTask *) NULL_CHECK((frame[0].o)))->F_state);
	LINE_NUMBER(283);
	if ((frame[6].i) < (jint(5))) goto label_27;
	}
	{
	LINE_NUMBER(284);
	M_java_util_concurrent_FutureTask_handlePossibleCancellationInterrupt_int(ctx, (frame[0].o), (frame[6].i));
	}
label_27:;
	{
	LINE_NUMBER(285);
	throwException(ctx, (frame[5].o));	}
label_24:;
	LINE_NUMBER(286);
	popStackFrame(ctx, self);
	INST_RETURN();

	popStackFrame(ctx);
}

jbool M_java_util_concurrent_FutureTask_runAndReset_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/concurrent/FutureTask:runAndReset", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, self);

	frame[0].o = self;
	{
	LINE_NUMBER(298);
	if (((jint)((java_util_concurrent_FutureTask *) NULL_CHECK((frame[0].o)))->F_state) != 0) goto label_11;
	}
	{
	sp[0].o = (jobject)((java_util_concurrent_FutureTask *) NULL_CHECK((frame[0].o)))->F_runner;
	if (sp[0].o == nullptr) goto label_12;
	}
label_11:;
	{
	LINE_NUMBER(299);
	popStackFrame(ctx, self);
	return (jint(0));
	}
label_12:;
	{
	LINE_NUMBER(300);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)SM_java_lang_Thread_currentThread_R_java_lang_Thread(ctx);
	((java_util_concurrent_FutureTask *) NULL_CHECK(sp[0].o))->F_runner = (jref) sp[1].o;
	LINE_NUMBER(301);
	frame[1].i = (jint(0));
	LINE_NUMBER(302);
	frame[2].i = ((jint)((java_util_concurrent_FutureTask *) NULL_CHECK((frame[0].o)))->F_state);
	}
label_7: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_6; }
	}
	{
	LINE_NUMBER(304);
	sp[0].o = (jobject)((java_util_concurrent_FutureTask *) NULL_CHECK((frame[0].o)))->F_callable;
	frame[3].o = sp[0].o;
	LINE_NUMBER(305);
	if ((frame[3].o) == nullptr) goto label_5;
	}
	INST_ILOAD(2);
	if ((--sp)->i != 0) goto label_5;
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(307);
	sp[0].o = (jobject)((func_java_util_concurrent_Callable_call_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_concurrent_Callable, INDEX_java_util_concurrent_Callable_call_R_java_lang_Object, (frame[3].o)))(ctx, (frame[3].o));
	LINE_NUMBER(308);
	frame[1].i = (jint(1));
	}
	popExceptionFrame(frameRef);
	LINE_NUMBER(311);
	goto label_5;
label_2:;
	{
	sp -= 1;
	LINE_NUMBER(309);
	frame[4].o = sp[0].o;
	LINE_NUMBER(310);
	((func_java_util_concurrent_FutureTask_setException_java_lang_Throwable) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_util_concurrent_FutureTask_setException_java_lang_Throwable])(ctx, (frame[0].o), (frame[4].o));
	}
label_5:;
	popExceptionFrame(frameRef);
	{
	LINE_NUMBER(316);
	((java_util_concurrent_FutureTask *) NULL_CHECK((frame[0].o)))->F_runner = (jref) (jobject(nullptr));
	LINE_NUMBER(319);
	frame[2].i = ((jint)((java_util_concurrent_FutureTask *) NULL_CHECK((frame[0].o)))->F_state);
	LINE_NUMBER(320);
	if ((frame[2].i) < (jint(5))) goto label_20;
	}
	{
	LINE_NUMBER(321);
	M_java_util_concurrent_FutureTask_handlePossibleCancellationInterrupt_int(ctx, (frame[0].o), (frame[2].i));
	goto label_20;
	}
label_6:;
label_9: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_6; }
	}
	LINE_NUMBER(316);
	INST_ASTORE(5);
	popExceptionFrame(frameRef);
	{
	((java_util_concurrent_FutureTask *) NULL_CHECK((frame[0].o)))->F_runner = (jref) (jobject(nullptr));
	LINE_NUMBER(319);
	frame[2].i = ((jint)((java_util_concurrent_FutureTask *) NULL_CHECK((frame[0].o)))->F_state);
	LINE_NUMBER(320);
	if ((frame[2].i) < (jint(5))) goto label_24;
	}
	{
	LINE_NUMBER(321);
	M_java_util_concurrent_FutureTask_handlePossibleCancellationInterrupt_int(ctx, (frame[0].o), (frame[2].i));
	}
label_24:;
	{
	LINE_NUMBER(322);
	throwException(ctx, (frame[5].o));	}
label_20:;
	{
	LINE_NUMBER(323);
	if ((frame[1].i) == 0) goto label_26;
	}
	INST_ILOAD(2);
	if ((--sp)->i != 0) goto label_26;
	INST_ICONST(1);
	goto label_27;
label_26:;
	INST_ICONST(0);
label_27:;
	popStackFrame(ctx, self);
	INST_IRETURN();

	popStackFrame(ctx);
}

void M_java_util_concurrent_FutureTask_handlePossibleCancellationInterrupt_int(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/concurrent/FutureTask:handlePossibleCancellationInterrupt", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(333);
	if ((frame[1].i) != (jint(5))) goto label_1;
	}
label_2:;
	{
	LINE_NUMBER(334);
	if (((jint)((java_util_concurrent_FutureTask *) NULL_CHECK((frame[0].o)))->F_state) != (jint(5))) goto label_1;
	}
	{
	LINE_NUMBER(335);
	SM_java_lang_Thread_yield(ctx);
	goto label_2;
	}
label_1:;
	LINE_NUMBER(346);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_java_util_concurrent_FutureTask_finishCompletion(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/concurrent/FutureTask:finishCompletion", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
label_0:;
	{
	LINE_NUMBER(365);
	sp[0].o = (jobject)((java_util_concurrent_FutureTask *) NULL_CHECK((frame[0].o)))->F_waiters;
	frame[1].o = sp[0].o;
	if (sp[0].o == nullptr) goto label_2;
	}
	{
	LINE_NUMBER(366);
	sp[0].o = (jobject)((java_util_concurrent_FutureTask *) NULL_CHECK((frame[0].o)))->F_waiters;
	if (sp[0].o != (frame[1].o)) goto label_0;
	}
	{
	LINE_NUMBER(367);
	((java_util_concurrent_FutureTask *) NULL_CHECK((frame[0].o)))->F_waiters = (jref) (jobject(nullptr));
	}
label_5:;
	{
	LINE_NUMBER(369);
	sp[0].o = (jobject)((java_util_concurrent_FutureTask$WaitNode *) NULL_CHECK((frame[1].o)))->F_thread;
	frame[2].o = sp[0].o;
	LINE_NUMBER(370);
	if ((frame[2].o) == nullptr) goto label_7;
	}
	{
	LINE_NUMBER(371);
	((java_util_concurrent_FutureTask$WaitNode *) NULL_CHECK((frame[1].o)))->F_thread = (jref) (jobject(nullptr));
	LINE_NUMBER(372);
	SM_java_util_concurrent_locks_LockSupport_unpark_java_lang_Thread(ctx, (frame[2].o));
	}
label_7:;
	{
	LINE_NUMBER(374);
	sp[0].o = (jobject)((java_util_concurrent_FutureTask$WaitNode *) NULL_CHECK((frame[1].o)))->F_next;
	frame[3].o = sp[0].o;
	LINE_NUMBER(375);
	if ((frame[3].o) != nullptr) goto label_11;
	}
	LINE_NUMBER(376);
	goto label_2;
label_11:;
	{
	LINE_NUMBER(377);
	((java_util_concurrent_FutureTask$WaitNode *) NULL_CHECK((frame[1].o)))->F_next = (jref) (jobject(nullptr));
	LINE_NUMBER(378);
	frame[1].o = (frame[3].o);
	LINE_NUMBER(379);
	goto label_5;
	}
label_2:;
	{
	LINE_NUMBER(384);
	((func_java_util_concurrent_FutureTask_done) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_util_concurrent_FutureTask_done])(ctx, (frame[0].o));
	LINE_NUMBER(386);
	((java_util_concurrent_FutureTask *) NULL_CHECK((frame[0].o)))->F_callable = (jref) (jobject(nullptr));
	LINE_NUMBER(387);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jint M_java_util_concurrent_FutureTask_awaitDone_boolean_long_R_int(jcontext ctx, jobject self, jbool param0, jlong param1) {
	NULL_CHECK(self);
	jtype frame[19];
	auto stack = &frame[15];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/concurrent/FutureTask:awaitDone", 19 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].l = param1;
	{
	LINE_NUMBER(405);
	frame[4].l = (jlong(0));
	LINE_NUMBER(406);
	frame[6].o = (jobject(nullptr));
	LINE_NUMBER(407);
	frame[7].i = (jint(0));
	}
label_21:;
	{
	LINE_NUMBER(409);
	frame[8].i = ((jint)((java_util_concurrent_FutureTask *) NULL_CHECK((frame[0].o)))->F_state);
	LINE_NUMBER(410);
	if ((frame[8].i) <= (jint(1))) goto label_23;
	}
	{
	LINE_NUMBER(411);
	sp[0].o = frame[0].o;
	frame[9].o = sp[0].o;
	monitorEnter(ctx, sp[0].o);
	}
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(412);
	if ((frame[6].o) == nullptr) goto label_25;
	}
	{
	LINE_NUMBER(413);
	((java_util_concurrent_FutureTask$WaitNode *) NULL_CHECK((frame[6].o)))->F_thread = (jref) (jobject(nullptr));
	}
label_25:;
	{
	LINE_NUMBER(414);
	jint temp0 = frame[8].i;
	monitorExit(ctx, (frame[9].o));
	sp[0].i = temp0;
	sp += 1;
	}
	popExceptionFrame(frameRef);
	popStackFrame(ctx);
	INST_IRETURN();
label_2:;
label_5: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	sp -= 1;
	LINE_NUMBER(415);
	frame[10].o = sp[0].o;
	monitorExit(ctx, (frame[9].o));
	}
	popExceptionFrame(frameRef);
	INST_ALOAD(10);
	INST_ATHROW();
	label_23:;
	{
	LINE_NUMBER(417);
	if ((frame[8].i) != (jint(1))) goto label_27;
	}
	{
	LINE_NUMBER(420);
	SM_java_lang_Thread_yield(ctx);
	goto label_29;
	}
label_27:;
	{
	LINE_NUMBER(421);
	jint temp0 = (jint)SM_java_lang_Thread_interrupted_R_boolean(ctx);
	if (temp0 == 0) goto label_30;
	}
	{
	LINE_NUMBER(422);
	M_java_util_concurrent_FutureTask_removeWaiter_java_util_concurrent_FutureTask$WaitNode(ctx, (frame[0].o), (frame[6].o));
	LINE_NUMBER(423);
	clinit_java_lang_InterruptedException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_InterruptedException);
	init_java_lang_InterruptedException(ctx, sp[0].o);
	throwException(ctx, sp[0].o);	}
label_30:;
	{
	LINE_NUMBER(425);
	if ((frame[6].o) != nullptr) goto label_33;
	}
	{
	LINE_NUMBER(426);
	if ((frame[1].i) == 0) goto label_35;
	}
	{
	if ((longCompare((frame[2].l), (jlong(0)))) > 0) goto label_35;
	}
	{
	LINE_NUMBER(427);
	popStackFrame(ctx);
	return (frame[8].i);
	}
label_35:;
	{
	LINE_NUMBER(428);
	clinit_java_util_concurrent_FutureTask$WaitNode(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_util_concurrent_FutureTask$WaitNode);
	init_java_util_concurrent_FutureTask$WaitNode(ctx, sp[0].o);
	frame[6].o = sp[0].o;
	goto label_29;
	}
label_33:;
	{
	LINE_NUMBER(430);
	if ((frame[7].i) != 0) goto label_37;
	}
	{
	LINE_NUMBER(431);
	sp[0].o = frame[0].o;
	frame[9].o = sp[0].o;
	monitorEnter(ctx, sp[0].o);
	}
label_9: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_8; }
	}
	{
	LINE_NUMBER(432);
	sp[0].o = (jobject)((java_util_concurrent_FutureTask *) NULL_CHECK((frame[0].o)))->F_waiters;
	sp[1].o = frame[6].o;
	sp[2].o = (jobject)((java_util_concurrent_FutureTask *) NULL_CHECK((frame[0].o)))->F_waiters;
	((java_util_concurrent_FutureTask$WaitNode *) NULL_CHECK(sp[1].o))->F_next = (jref) sp[2].o;
	if (sp[0].o != sp[2].o) goto label_39;
	}
	{
	LINE_NUMBER(433);
	((java_util_concurrent_FutureTask *) NULL_CHECK((frame[0].o)))->F_waiters = (jref) (frame[6].o);
	LINE_NUMBER(434);
	frame[7].i = (jint(1));
	}
label_39:;
	{
	LINE_NUMBER(436);
	monitorExit(ctx, (frame[9].o));
	}
	popExceptionFrame(frameRef);
	goto label_42;
label_8:;
label_11: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_8; }
	}
	{
	sp -= 1;
	frame[11].o = sp[0].o;
	monitorExit(ctx, (frame[9].o));
	}
	popExceptionFrame(frameRef);
	INST_ALOAD(11);
	INST_ATHROW();
	label_42:;
	goto label_29;
label_37:;
	{
	LINE_NUMBER(437);
	if ((frame[1].i) == 0) goto label_43;
	}
	{
	LINE_NUMBER(439);
	if ((longCompare((frame[4].l), (jlong(0)))) != 0) goto label_45;
	}
	{
	LINE_NUMBER(440);
	jlong temp0 = (jlong)SM_java_lang_System_nanoTime_R_long(ctx);
	frame[4].l = temp0;
	LINE_NUMBER(441);
	if ((longCompare((frame[4].l), (jlong(0)))) != 0) goto label_48;
	}
	{
	LINE_NUMBER(442);
	frame[4].l = (jlong(1));
	}
label_48:;
	{
	LINE_NUMBER(443);
	frame[9].l = (frame[2].l);
	goto label_51;
	}
label_45:;
	{
	LINE_NUMBER(445);
	jlong temp0 = (jlong)SM_java_lang_System_nanoTime_R_long(ctx);
	frame[11].l = (temp0 - (frame[4].l));
	LINE_NUMBER(446);
	if ((longCompare((frame[11].l), (frame[2].l))) < 0) goto label_53;
	}
	{
	LINE_NUMBER(447);
	sp[0].o = frame[0].o;
	frame[13].o = sp[0].o;
	monitorEnter(ctx, sp[0].o);
	}
label_15: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_14; }
	}
	{
	LINE_NUMBER(448);
	M_java_util_concurrent_FutureTask_removeWaiter_java_util_concurrent_FutureTask$WaitNode(ctx, (frame[0].o), (frame[6].o));
	LINE_NUMBER(449);
	jint temp0 = (jint)((java_util_concurrent_FutureTask *) NULL_CHECK((frame[0].o)))->F_state;
	monitorExit(ctx, (frame[13].o));
	sp[0].i = temp0;
	sp += 1;
	}
	popExceptionFrame(frameRef);
	popStackFrame(ctx);
	INST_IRETURN();
label_14:;
label_17: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_14; }
	}
	{
	sp -= 1;
	LINE_NUMBER(450);
	frame[14].o = sp[0].o;
	monitorExit(ctx, (frame[13].o));
	}
	popExceptionFrame(frameRef);
	INST_ALOAD(14);
	INST_ATHROW();
	label_53:;
	{
	LINE_NUMBER(452);
	frame[9].l = ((frame[2].l) - (frame[11].l));
	}
label_51:;
	{
	LINE_NUMBER(455);
	if (((jint)((java_util_concurrent_FutureTask *) NULL_CHECK((frame[0].o)))->F_state) >= (jint(1))) goto label_56;
	}
	{
	LINE_NUMBER(456);
	SM_java_util_concurrent_locks_LockSupport_parkNanos_java_lang_Object_long(ctx, (frame[0].o), (frame[9].l));
	}
label_56:;
	LINE_NUMBER(457);
	goto label_29;
label_43:;
	{
	LINE_NUMBER(459);
	SM_java_util_concurrent_locks_LockSupport_park_java_lang_Object(ctx, (frame[0].o));
	}
label_29:;
	LINE_NUMBER(460);
	goto label_21;

	popStackFrame(ctx);
}

void M_java_util_concurrent_FutureTask_removeWaiter_java_util_concurrent_FutureTask$WaitNode(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/concurrent/FutureTask:removeWaiter", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, self);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(474);
	if ((frame[1].o) == nullptr) goto label_1;
	}
	{
	LINE_NUMBER(475);
	((java_util_concurrent_FutureTask$WaitNode *) NULL_CHECK((frame[1].o)))->F_thread = (jref) (jobject(nullptr));
	}
label_3:;
	{
	LINE_NUMBER(478);
	frame[2].o = (jobject(nullptr));
	sp[0].o = (jobject)((java_util_concurrent_FutureTask *) NULL_CHECK((frame[0].o)))->F_waiters;
	frame[3].o = sp[0].o;
	}
label_5:;
	INST_ALOAD(3);
	if ((--sp)->o == nullptr) goto label_6;
	{
	LINE_NUMBER(479);
	sp[0].o = (jobject)((java_util_concurrent_FutureTask$WaitNode *) NULL_CHECK((frame[3].o)))->F_next;
	frame[4].o = sp[0].o;
	LINE_NUMBER(480);
	sp[0].o = (jobject)((java_util_concurrent_FutureTask$WaitNode *) NULL_CHECK((frame[3].o)))->F_thread;
	if (sp[0].o == nullptr) goto label_9;
	}
	{
	LINE_NUMBER(481);
	frame[2].o = (frame[3].o);
	goto label_11;
	}
label_9:;
	{
	LINE_NUMBER(482);
	if ((frame[2].o) == nullptr) goto label_12;
	}
	{
	LINE_NUMBER(483);
	((java_util_concurrent_FutureTask$WaitNode *) NULL_CHECK((frame[2].o)))->F_next = (jref) (frame[4].o);
	LINE_NUMBER(484);
	sp[0].o = (jobject)((java_util_concurrent_FutureTask$WaitNode *) NULL_CHECK((frame[2].o)))->F_thread;
	if (sp[0].o != nullptr) goto label_11;
	}
	LINE_NUMBER(485);
	goto label_3;
label_12:;
	{
	LINE_NUMBER(488);
	sp[0].o = (jobject)((java_util_concurrent_FutureTask *) NULL_CHECK((frame[0].o)))->F_waiters;
	if (sp[0].o != (frame[3].o)) goto label_3;
	}
	{
	LINE_NUMBER(489);
	((java_util_concurrent_FutureTask *) NULL_CHECK((frame[0].o)))->F_waiters = (jref) (frame[4].o);
	}
label_11:;
	{
	LINE_NUMBER(478);
	frame[3].o = (frame[4].o);
	goto label_5;
	}
label_6:;
	LINE_NUMBER(494);
	goto label_1;
label_1:;
	LINE_NUMBER(497);
	popStackFrame(ctx, self);
	INST_RETURN();

	popStackFrame(ctx);
}

void clinit_java_util_concurrent_FutureTask(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	SF_java_util_concurrent_FutureTask_NEW = jint(0);
	SF_java_util_concurrent_FutureTask_COMPLETING = jint(1);
	SF_java_util_concurrent_FutureTask_NORMAL = jint(2);
	SF_java_util_concurrent_FutureTask_EXCEPTIONAL = jint(3);
	SF_java_util_concurrent_FutureTask_CANCELLED = jint(4);
	SF_java_util_concurrent_FutureTask_INTERRUPTING = jint(5);
	SF_java_util_concurrent_FutureTask_INTERRUPTED = jint(6);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/concurrent/FutureTask:<clinit>", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_util_concurrent_FutureTask(ctx);
	{
	LINE_NUMBER(502);
	frame[0].o = (((jobject) &class_java_util_concurrent_locks_LockSupport));
	LINE_NUMBER(503);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void *vtable_java_util_concurrent_FutureTask[] {
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
	(void *) M_java_util_concurrent_FutureTask_run,
	(void *) M_java_util_concurrent_FutureTask_cancel_boolean_R_boolean,
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
};

static jclass interfaces[] { &class_java_util_concurrent_RunnableFuture, };

static jclass innerClasses[] {
	&class_java_util_concurrent_FutureTask$WaitNode,
};

static FieldMetadata fields[] {
	{ "state", &class_int, offsetof(java_util_concurrent_FutureTask, F_state), "I", 66 },
	{ "NEW", &class_int, (intptr_t) &SF_java_util_concurrent_FutureTask_NEW, "I", 26 },
	{ "COMPLETING", &class_int, (intptr_t) &SF_java_util_concurrent_FutureTask_COMPLETING, "I", 26 },
	{ "NORMAL", &class_int, (intptr_t) &SF_java_util_concurrent_FutureTask_NORMAL, "I", 26 },
	{ "EXCEPTIONAL", &class_int, (intptr_t) &SF_java_util_concurrent_FutureTask_EXCEPTIONAL, "I", 26 },
	{ "CANCELLED", &class_int, (intptr_t) &SF_java_util_concurrent_FutureTask_CANCELLED, "I", 26 },
	{ "INTERRUPTING", &class_int, (intptr_t) &SF_java_util_concurrent_FutureTask_INTERRUPTING, "I", 26 },
	{ "INTERRUPTED", &class_int, (intptr_t) &SF_java_util_concurrent_FutureTask_INTERRUPTED, "I", 26 },
	{ "callable", &class_java_util_concurrent_Callable, offsetof(java_util_concurrent_FutureTask, F_callable), "Ljava/util/concurrent/Callable;", 2 },
	{ "outcome", &class_java_lang_Object, offsetof(java_util_concurrent_FutureTask, F_outcome), "Ljava/lang/Object;", 2 },
	{ "runner", &class_java_lang_Thread, offsetof(java_util_concurrent_FutureTask, F_runner), "Ljava/lang/Thread;", 66 },
	{ "waiters", &class_java_util_concurrent_FutureTask$WaitNode, offsetof(java_util_concurrent_FutureTask, F_waiters), "Ljava/util/concurrent/FutureTask$WaitNode;", 66 },
};

static MethodMetadata methods[] {
	{ "report", (intptr_t) M_java_util_concurrent_FutureTask_report_int_R_java_lang_Object, VTABLE_java_util_concurrent_FutureTask_report_int_R_java_lang_Object, "(I)Ljava/lang/Object;", 2 },
	{ "<init>", (intptr_t) init_java_util_concurrent_FutureTask_java_util_concurrent_Callable, 0, "(Ljava/util/concurrent/Callable;)V", 1 },
	{ "<init>", (intptr_t) init_java_util_concurrent_FutureTask_java_lang_Runnable_java_lang_Object, 0, "(Ljava/lang/Runnable;Ljava/lang/Object;)V", 1 },
	{ "isCancelled", (intptr_t) M_java_util_concurrent_FutureTask_isCancelled_R_boolean, VTABLE_java_util_concurrent_FutureTask_isCancelled_R_boolean, "()Z", 1 },
	{ "isDone", (intptr_t) M_java_util_concurrent_FutureTask_isDone_R_boolean, VTABLE_java_util_concurrent_FutureTask_isDone_R_boolean, "()Z", 1 },
	{ "cancel", (intptr_t) M_java_util_concurrent_FutureTask_cancel_boolean_R_boolean, VTABLE_java_util_concurrent_FutureTask_cancel_boolean_R_boolean, "(Z)Z", 33 },
	{ "get", (intptr_t) M_java_util_concurrent_FutureTask_get_R_java_lang_Object, VTABLE_java_util_concurrent_FutureTask_get_R_java_lang_Object, "()Ljava/lang/Object;", 1 },
	{ "get", (intptr_t) M_java_util_concurrent_FutureTask_get_long_java_util_concurrent_TimeUnit_R_java_lang_Object, VTABLE_java_util_concurrent_FutureTask_get_long_java_util_concurrent_TimeUnit_R_java_lang_Object, "(JLjava/util/concurrent/TimeUnit;)Ljava/lang/Object;", 1 },
	{ "done", (intptr_t) M_java_util_concurrent_FutureTask_done, VTABLE_java_util_concurrent_FutureTask_done, "()V", 4 },
	{ "set", (intptr_t) M_java_util_concurrent_FutureTask_set_java_lang_Object, VTABLE_java_util_concurrent_FutureTask_set_java_lang_Object, "(Ljava/lang/Object;)V", 36 },
	{ "setException", (intptr_t) M_java_util_concurrent_FutureTask_setException_java_lang_Throwable, VTABLE_java_util_concurrent_FutureTask_setException_java_lang_Throwable, "(Ljava/lang/Throwable;)V", 36 },
	{ "run", (intptr_t) M_java_util_concurrent_FutureTask_run, VTABLE_java_util_concurrent_FutureTask_run, "()V", 33 },
	{ "runAndReset", (intptr_t) M_java_util_concurrent_FutureTask_runAndReset_R_boolean, VTABLE_java_util_concurrent_FutureTask_runAndReset_R_boolean, "()Z", 36 },
	{ "handlePossibleCancellationInterrupt", (intptr_t) M_java_util_concurrent_FutureTask_handlePossibleCancellationInterrupt_int, VTABLE_java_util_concurrent_FutureTask_handlePossibleCancellationInterrupt_int, "(I)V", 2 },
	{ "finishCompletion", (intptr_t) M_java_util_concurrent_FutureTask_finishCompletion, VTABLE_java_util_concurrent_FutureTask_finishCompletion, "()V", 2 },
	{ "awaitDone", (intptr_t) M_java_util_concurrent_FutureTask_awaitDone_boolean_long_R_int, VTABLE_java_util_concurrent_FutureTask_awaitDone_boolean_long_R_int, "(ZJ)I", 2 },
	{ "removeWaiter", (intptr_t) M_java_util_concurrent_FutureTask_removeWaiter_java_util_concurrent_FutureTask$WaitNode, VTABLE_java_util_concurrent_FutureTask_removeWaiter_java_util_concurrent_FutureTask$WaitNode, "(Ljava/util/concurrent/FutureTask$WaitNode;)V", 34 },
	{ "<clinit>", (intptr_t) clinit_java_util_concurrent_FutureTask, 0, "()V", 8 },
};

Class class_java_util_concurrent_FutureTask{
		.nativeName = (intptr_t) "java/util/concurrent/FutureTask",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(java_util_concurrent_FutureTask),
		.classVtable = (intptr_t) vtable_java_util_concurrent_FutureTask,
		.staticInitializer = (intptr_t) clinit_java_util_concurrent_FutureTask,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_java_util_concurrent_FutureTask,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 1,
		.nativeInnerClasses = (intptr_t) innerClasses,
		.access = 33,
		.interfaceCount = 1,
		.nativeInterfaces = (intptr_t) interfaces,
		.fieldCount = 12,
		.nativeFields = (intptr_t) fields,
		.methodCount = 18,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 26,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_java_util_concurrent_FutureTask = registerClass(&class_java_util_concurrent_FutureTask);

}
