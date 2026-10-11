#include "java/util/concurrent/AbstractExecutorService.h"
#include "java/util/concurrent/ExecutionException.h"
#include "java/util/concurrent/AbstractExecutorService.h"
#include "java/util/concurrent/Future.h"
#include "java/util/ArrayList.h"
#include "java/lang/Runnable.h"
#include "java/util/Collection.h"
#include "java/util/concurrent/FutureTask.h"
#include "java/util/concurrent/ExecutorCompletionService.h"
#include "java/lang/NullPointerException.h"
#include "java/lang/Throwable.h"
#include "java/util/concurrent/ExecutorService.h"
#include "java/util/Iterator.h"
#include "java/util/concurrent/TimeUnit.h"
#include "java/lang/IllegalArgumentException.h"
#include "java/util/concurrent/RunnableFuture.h"
#include "java/util/concurrent/Callable.h"
#include "java/util/concurrent/Executor.h"
#include "java/lang/Object.h"
#include "java/lang/AssertionError.h"
#include "java/util/concurrent/CancellationException.h"
#include "java/util/concurrent/TimeoutException.h"
#include "java/lang/RuntimeException.h"
#include "java/lang/Class.h"
#include "java/util/List.h"
#include "java/lang/System.h"

extern "C" {

jbool SF_java_util_concurrent_AbstractExecutorService_$assertionsDisabled;

void mark_java_util_concurrent_AbstractExecutorService(jobject object, jint mark, jint depth) {
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
	auto self = (java_util_concurrent_AbstractExecutorService *) object;
}

void init_java_util_concurrent_AbstractExecutorService(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/concurrent/AbstractExecutorService:<init>", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_util_concurrent_AbstractExecutorService(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(75);
	init_java_lang_Object(ctx, (frame[0].o));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_java_util_concurrent_AbstractExecutorService_newTaskFor_java_lang_Runnable_java_lang_Object_R_java_util_concurrent_RunnableFuture(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/concurrent/AbstractExecutorService:newTaskFor", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(91);
	clinit_java_util_concurrent_FutureTask(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_util_concurrent_FutureTask);
	init_java_util_concurrent_FutureTask_java_lang_Runnable_java_lang_Object(ctx, sp[0].o, (frame[1].o), (frame[2].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_java_util_concurrent_AbstractExecutorService_newTaskFor_java_util_concurrent_Callable_R_java_util_concurrent_RunnableFuture(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/concurrent/AbstractExecutorService:newTaskFor", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(106);
	clinit_java_util_concurrent_FutureTask(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_util_concurrent_FutureTask);
	init_java_util_concurrent_FutureTask_java_util_concurrent_Callable(ctx, sp[0].o, (frame[1].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_java_util_concurrent_AbstractExecutorService_submit_java_lang_Runnable_R_java_util_concurrent_Future(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/concurrent/AbstractExecutorService:submit", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(114);
	if ((frame[1].o) != nullptr) goto label_1;
	}
	{
	clinit_java_lang_NullPointerException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_NullPointerException);
	init_java_lang_NullPointerException(ctx, sp[0].o);
	throwException(ctx, sp[0].o);	}
label_1:;
	{
	LINE_NUMBER(115);
	sp[0].o = (jobject)((func_java_util_concurrent_AbstractExecutorService_newTaskFor_java_lang_Runnable_java_lang_Object_R_java_util_concurrent_RunnableFuture) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_util_concurrent_AbstractExecutorService_newTaskFor_java_lang_Runnable_java_lang_Object_R_java_util_concurrent_RunnableFuture])(ctx, (frame[0].o), (frame[1].o), (jobject(nullptr)));
	frame[2].o = sp[0].o;
	LINE_NUMBER(116);
	((func_java_util_concurrent_AbstractExecutorService_execute_java_lang_Runnable) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_util_concurrent_AbstractExecutorService_execute_java_lang_Runnable])(ctx, (frame[0].o), (frame[2].o));
	LINE_NUMBER(117);
	popStackFrame(ctx);
	return (frame[2].o);
	}

	popStackFrame(ctx);
}

jobject M_java_util_concurrent_AbstractExecutorService_submit_java_lang_Runnable_java_lang_Object_R_java_util_concurrent_Future(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/concurrent/AbstractExecutorService:submit", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(125);
	if ((frame[1].o) != nullptr) goto label_1;
	}
	{
	clinit_java_lang_NullPointerException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_NullPointerException);
	init_java_lang_NullPointerException(ctx, sp[0].o);
	throwException(ctx, sp[0].o);	}
label_1:;
	{
	LINE_NUMBER(126);
	sp[0].o = (jobject)((func_java_util_concurrent_AbstractExecutorService_newTaskFor_java_lang_Runnable_java_lang_Object_R_java_util_concurrent_RunnableFuture) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_util_concurrent_AbstractExecutorService_newTaskFor_java_lang_Runnable_java_lang_Object_R_java_util_concurrent_RunnableFuture])(ctx, (frame[0].o), (frame[1].o), (frame[2].o));
	frame[3].o = sp[0].o;
	LINE_NUMBER(127);
	((func_java_util_concurrent_AbstractExecutorService_execute_java_lang_Runnable) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_util_concurrent_AbstractExecutorService_execute_java_lang_Runnable])(ctx, (frame[0].o), (frame[3].o));
	LINE_NUMBER(128);
	popStackFrame(ctx);
	return (frame[3].o);
	}

	popStackFrame(ctx);
}

jobject M_java_util_concurrent_AbstractExecutorService_submit_java_util_concurrent_Callable_R_java_util_concurrent_Future(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/concurrent/AbstractExecutorService:submit", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(136);
	if ((frame[1].o) != nullptr) goto label_1;
	}
	{
	clinit_java_lang_NullPointerException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_NullPointerException);
	init_java_lang_NullPointerException(ctx, sp[0].o);
	throwException(ctx, sp[0].o);	}
label_1:;
	{
	LINE_NUMBER(137);
	sp[0].o = (jobject)((func_java_util_concurrent_AbstractExecutorService_newTaskFor_java_util_concurrent_Callable_R_java_util_concurrent_RunnableFuture) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_util_concurrent_AbstractExecutorService_newTaskFor_java_util_concurrent_Callable_R_java_util_concurrent_RunnableFuture])(ctx, (frame[0].o), (frame[1].o));
	frame[2].o = sp[0].o;
	LINE_NUMBER(138);
	((func_java_util_concurrent_AbstractExecutorService_execute_java_lang_Runnable) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_util_concurrent_AbstractExecutorService_execute_java_lang_Runnable])(ctx, (frame[0].o), (frame[2].o));
	LINE_NUMBER(139);
	popStackFrame(ctx);
	return (frame[2].o);
	}

	popStackFrame(ctx);
}

jobject M_java_util_concurrent_AbstractExecutorService_doInvokeAny_java_util_Collection_boolean_long_R_java_lang_Object(jcontext ctx, jobject self, jobject param0, jbool param1, jlong param2) {
	NULL_CHECK(self);
	jtype frame[24];
	auto stack = &frame[20];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/concurrent/AbstractExecutorService:doInvokeAny", 24 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);
	volatile bool bypasses[5]{};

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	frame[3].l = param2;
	{
	LINE_NUMBER(148);
	if ((frame[1].o) != nullptr) goto label_12;
	}
	{
	LINE_NUMBER(149);
	clinit_java_lang_NullPointerException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_NullPointerException);
	init_java_lang_NullPointerException(ctx, sp[0].o);
	throwException(ctx, sp[0].o);	}
label_12:;
	{
	LINE_NUMBER(150);
	jint temp0 = (jint)((func_java_util_Collection_size_R_int) resolveInterfaceMethod(ctx, &class_java_util_Collection, INDEX_java_util_Collection_size_R_int, (frame[1].o)))(ctx, (frame[1].o));
	frame[5].i = temp0;
	LINE_NUMBER(151);
	if ((frame[5].i) != 0) goto label_15;
	}
	{
	LINE_NUMBER(152);
	clinit_java_lang_IllegalArgumentException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IllegalArgumentException);
	init_java_lang_IllegalArgumentException(ctx, sp[0].o);
	throwException(ctx, sp[0].o);	}
label_15:;
	{
	LINE_NUMBER(153);
	clinit_java_util_ArrayList(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_util_ArrayList);
	init_java_util_ArrayList_int(ctx, sp[0].o, (frame[5].i));
	frame[6].o = sp[0].o;
	LINE_NUMBER(154);
	clinit_java_util_concurrent_ExecutorCompletionService(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_util_concurrent_ExecutorCompletionService);
	init_java_util_concurrent_ExecutorCompletionService_java_util_concurrent_Executor(ctx, sp[0].o, (frame[0].o));
	frame[7].o = sp[0].o;
	}
label_8: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); bypasses[0] = true; goto label_10; } // goto label_7
	}
	if (bypasses[4]) { bypasses[4] = false; goto label_25; }
	{
	LINE_NUMBER(166);
	frame[8].o = (jobject(nullptr));
	LINE_NUMBER(167);
	if ((frame[2].i) == 0) goto label_19;
	}
	{
	jlong temp0 = (jlong)SM_java_lang_System_nanoTime_R_long(ctx);
	jlong temp1 = temp0 + (frame[3].l);
	sp[0].l = temp1;
	sp += 1;
	goto label_20;
	}
label_19:;
	INST_LCONST(0);
label_20:;
	{
	sp -= 1;
	frame[9].l = sp[0].l;
	LINE_NUMBER(168);
	sp[0].o = (jobject)((func_java_util_Collection_iterator_R_java_util_Iterator) resolveInterfaceMethod(ctx, &class_java_util_Collection, INDEX_java_util_Collection_iterator_R_java_util_Iterator, (frame[1].o)))(ctx, (frame[1].o));
	frame[11].o = sp[0].o;
	LINE_NUMBER(171);
	sp[0].o = frame[6].o;
	sp[1].o = frame[7].o;
	sp[2].o = (jobject)((func_java_util_Iterator_next_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_next_R_java_lang_Object, (frame[11].o)))(ctx, (frame[11].o));
	sp[1].o = (jobject)((func_java_util_concurrent_ExecutorCompletionService_submit_java_util_concurrent_Callable_R_java_util_concurrent_Future) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_util_concurrent_ExecutorCompletionService_submit_java_util_concurrent_Callable_R_java_util_concurrent_Future])(ctx, sp[1].o, (checkCast(ctx, &class_java_util_concurrent_Callable, sp[2].o)));
	jint temp0 = (jint)((func_java_util_ArrayList_add_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_ArrayList_add_java_lang_Object_R_boolean])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(172);
	INST_IINC(5, -1);
	LINE_NUMBER(173);
	frame[12].i = (jint(1));
	}
label_25:;
	{
	LINE_NUMBER(176);
	sp[0].o = (jobject)((func_java_util_concurrent_ExecutorCompletionService_poll_R_java_util_concurrent_Future) ((void **) nullCheck(ctx, (frame[7].o))->vtable)[VTABLE_java_util_concurrent_ExecutorCompletionService_poll_R_java_util_concurrent_Future])(ctx, (frame[7].o));
	frame[13].o = sp[0].o;
	LINE_NUMBER(177);
	if ((frame[13].o) != nullptr) goto label_27;
	}
	{
	LINE_NUMBER(178);
	if ((frame[5].i) <= 0) goto label_29;
	}
	{
	LINE_NUMBER(179);
	INST_IINC(5, -1);
	LINE_NUMBER(180);
	sp[0].o = frame[6].o;
	sp[1].o = frame[7].o;
	sp[2].o = (jobject)((func_java_util_Iterator_next_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_next_R_java_lang_Object, (frame[11].o)))(ctx, (frame[11].o));
	sp[1].o = (jobject)((func_java_util_concurrent_ExecutorCompletionService_submit_java_util_concurrent_Callable_R_java_util_concurrent_Future) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_util_concurrent_ExecutorCompletionService_submit_java_util_concurrent_Callable_R_java_util_concurrent_Future])(ctx, sp[1].o, (checkCast(ctx, &class_java_util_concurrent_Callable, sp[2].o)));
	jint temp0 = (jint)((func_java_util_ArrayList_add_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_ArrayList_add_java_lang_Object_R_boolean])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(181);
	INST_IINC(12, 1);
	goto label_27;
	}
label_29:;
	{
	LINE_NUMBER(183);
	if ((frame[12].i) != 0) goto label_33;
	}
	LINE_NUMBER(184);
	{ popExceptionFrames(frameRef, 1); bypasses[1] = true; goto label_10; } // goto label_35
label_33:;
	{
	LINE_NUMBER(185);
	if ((frame[2].i) == 0) goto label_36;
	}
	{
	LINE_NUMBER(186);
	sp[0].o = frame[7].o;
	jlong temp0 = frame[3].l;
	clinit_java_util_concurrent_TimeUnit(ctx);
	sp[1].o = (jobject)SF_java_util_concurrent_TimeUnit_NANOSECONDS;
	sp[0].o = (jobject)((func_java_util_concurrent_ExecutorCompletionService_poll_long_java_util_concurrent_TimeUnit_R_java_util_concurrent_Future) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_concurrent_ExecutorCompletionService_poll_long_java_util_concurrent_TimeUnit_R_java_util_concurrent_Future])(ctx, sp[0].o, temp0, sp[1].o);
	frame[13].o = sp[0].o;
	LINE_NUMBER(187);
	if ((frame[13].o) != nullptr) goto label_39;
	}
	{
	LINE_NUMBER(188);
	clinit_java_util_concurrent_TimeoutException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_util_concurrent_TimeoutException);
	init_java_util_concurrent_TimeoutException(ctx, sp[0].o);
	throwException(ctx, sp[0].o);	}
label_39:;
	{
	LINE_NUMBER(189);
	jlong temp0 = frame[9].l;
	jlong temp1 = (jlong)SM_java_lang_System_nanoTime_R_long(ctx);
	frame[3].l = (temp0 - temp1);
	goto label_27;
	}
label_36:;
	{
	LINE_NUMBER(192);
	sp[0].o = (jobject)((func_java_util_concurrent_ExecutorCompletionService_take_R_java_util_concurrent_Future) ((void **) nullCheck(ctx, (frame[7].o))->vtable)[VTABLE_java_util_concurrent_ExecutorCompletionService_take_R_java_util_concurrent_Future])(ctx, (frame[7].o));
	frame[13].o = sp[0].o;
	}
label_27:;
	{
	LINE_NUMBER(194);
	if ((frame[13].o) == nullptr) { popExceptionFrames(frameRef, 1); bypasses[2] = true; goto label_10; } // goto label_41
	}
	LINE_NUMBER(195);
	INST_IINC(12, -1);
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_util_concurrent_ExecutionException))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 2); goto label_2; }
	}
label_5: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_RuntimeException))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 3); bypasses[3] = true; goto label_10; } // goto label_4
	}
	{
	LINE_NUMBER(197);
	sp[0].o = (jobject)((func_java_util_concurrent_Future_get_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_concurrent_Future, INDEX_java_util_concurrent_Future_get_R_java_lang_Object, (frame[13].o)))(ctx, (frame[13].o));
	frame[14].o = sp[0].o;
	}
	popExceptionFrame(frameRef);
	popExceptionFrame(frameRef);
	popExceptionFrame(frameRef);
	{
	LINE_NUMBER(211);
	frame[15].i = (jint(0));
	jint temp0 = (jint)((func_java_util_ArrayList_size_R_int) ((void **) nullCheck(ctx, (frame[6].o))->vtable)[VTABLE_java_util_ArrayList_size_R_int])(ctx, (frame[6].o));
	frame[16].i = temp0;
	}
label_44:;
	{
	if ((frame[15].i) >= (frame[16].i)) goto label_45;
	}
	{
	LINE_NUMBER(212);
	sp[0].o = (jobject)((func_java_util_ArrayList_get_int_R_java_lang_Object) ((void **) nullCheck(ctx, (frame[6].o))->vtable)[VTABLE_java_util_ArrayList_get_int_R_java_lang_Object])(ctx, (frame[6].o), (frame[15].i));
	jint temp0 = (jint)((func_java_util_concurrent_Future_cancel_boolean_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_concurrent_Future, INDEX_java_util_concurrent_Future_cancel_boolean_R_boolean, (checkCast(ctx, &class_java_util_concurrent_Future, sp[0].o))))(ctx, (checkCast(ctx, &class_java_util_concurrent_Future, sp[0].o)), (jint(1)));
	LINE_NUMBER(211);
	INST_IINC(15, 1);
	goto label_44;
	}
label_45:;
	{
	LINE_NUMBER(197);
	popStackFrame(ctx);
	return (frame[14].o);
	}
label_2:;
label_10: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); goto label_7;
	}
	if (bypasses[0]) { bypasses[0] = false; goto label_7; }
	if (bypasses[1]) { bypasses[1] = false; goto label_35; }
	if (bypasses[2]) { bypasses[2] = false; goto label_41; }
	if (bypasses[3]) { bypasses[3] = false; goto label_4; }
	{
	sp -= 1;
	LINE_NUMBER(198);
	frame[14].o = sp[0].o;
	LINE_NUMBER(199);
	frame[8].o = (frame[14].o);
	LINE_NUMBER(202);
	goto label_41;
	}
label_4:;
	{
	sp -= 1;
	LINE_NUMBER(200);
	frame[14].o = sp[0].o;
	LINE_NUMBER(201);
	clinit_java_util_concurrent_ExecutionException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_util_concurrent_ExecutionException);
	init_java_util_concurrent_ExecutionException_java_lang_Throwable(ctx, sp[0].o, (frame[14].o));
	frame[8].o = sp[0].o;
	}
label_41:;
	LINE_NUMBER(204);
	{ popExceptionFrames(frameRef, 1); bypasses[4] = true; goto label_8; } // goto label_25
label_35:;
	{
	LINE_NUMBER(206);
	if ((frame[8].o) != nullptr) goto label_51;
	}
	{
	LINE_NUMBER(207);
	clinit_java_util_concurrent_ExecutionException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_util_concurrent_ExecutionException);
	init_java_util_concurrent_ExecutionException(ctx, sp[0].o);
	frame[8].o = sp[0].o;
	}
label_51:;
	{
	LINE_NUMBER(208);
	throwException(ctx, (frame[8].o));	}
label_7:;
	LINE_NUMBER(211);
	INST_ASTORE(17);
	popExceptionFrame(frameRef);
	{
	frame[18].i = (jint(0));
	jint temp0 = (jint)((func_java_util_ArrayList_size_R_int) ((void **) nullCheck(ctx, (frame[6].o))->vtable)[VTABLE_java_util_ArrayList_size_R_int])(ctx, (frame[6].o));
	frame[19].i = temp0;
	}
label_54:;
	{
	if ((frame[18].i) >= (frame[19].i)) goto label_55;
	}
	{
	LINE_NUMBER(212);
	sp[0].o = (jobject)((func_java_util_ArrayList_get_int_R_java_lang_Object) ((void **) nullCheck(ctx, (frame[6].o))->vtable)[VTABLE_java_util_ArrayList_get_int_R_java_lang_Object])(ctx, (frame[6].o), (frame[18].i));
	jint temp0 = (jint)((func_java_util_concurrent_Future_cancel_boolean_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_concurrent_Future, INDEX_java_util_concurrent_Future_cancel_boolean_R_boolean, (checkCast(ctx, &class_java_util_concurrent_Future, sp[0].o))))(ctx, (checkCast(ctx, &class_java_util_concurrent_Future, sp[0].o)), (jint(1)));
	LINE_NUMBER(211);
	INST_IINC(18, 1);
	goto label_54;
	}
label_55:;
	{
	LINE_NUMBER(213);
	throwException(ctx, (frame[17].o));	}

	popStackFrame(ctx);
}

jobject M_java_util_concurrent_AbstractExecutorService_invokeAny_java_util_Collection_R_java_lang_Object(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/concurrent/AbstractExecutorService:invokeAny", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_util_concurrent_TimeoutException))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(219);
	sp[0].o = (jobject)M_java_util_concurrent_AbstractExecutorService_doInvokeAny_java_util_Collection_boolean_long_R_java_lang_Object(ctx, (frame[0].o), (frame[1].o), (jint(0)), (jlong(0)));
	sp += 1;
	}
	popExceptionFrame(frameRef);
	popStackFrame(ctx);
	INST_ARETURN();
label_2:;
	{
	sp -= 1;
	LINE_NUMBER(220);
	frame[2].o = sp[0].o;
	LINE_NUMBER(221);
	if ((clinit_java_util_concurrent_AbstractExecutorService(ctx), (jint)SF_java_util_concurrent_AbstractExecutorService_$assertionsDisabled) != 0) goto label_5;
	}
	{
	clinit_java_lang_AssertionError(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_AssertionError);
	init_java_lang_AssertionError(ctx, sp[0].o);
	throwException(ctx, sp[0].o);	}
label_5:;
	{
	LINE_NUMBER(222);
	popStackFrame(ctx);
	return (jobject(nullptr));
	}

	popStackFrame(ctx);
}

jobject M_java_util_concurrent_AbstractExecutorService_invokeAny_java_util_Collection_long_java_util_concurrent_TimeUnit_R_java_lang_Object(jcontext ctx, jobject self, jobject param0, jlong param1, jobject param2) {
	NULL_CHECK(self);
	jtype frame[11];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/concurrent/AbstractExecutorService:invokeAny", 11 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].l = param1;
	frame[4].o = param2;
	{
	LINE_NUMBER(229);
	sp[0].o = frame[0].o;
	sp[1].o = frame[1].o;
	jint temp0 = jint(1);
	jlong temp1 = (jlong)((func_java_util_concurrent_TimeUnit_toNanos_long_R_long) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_java_util_concurrent_TimeUnit_toNanos_long_R_long])(ctx, (frame[4].o), (frame[2].l));
	sp[0].o = (jobject)M_java_util_concurrent_AbstractExecutorService_doInvokeAny_java_util_Collection_boolean_long_R_java_lang_Object(ctx, sp[0].o, sp[1].o, temp0, temp1);
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_java_util_concurrent_AbstractExecutorService_invokeAll_java_util_Collection_R_java_util_List(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[14];
	auto stack = &frame[11];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/concurrent/AbstractExecutorService:invokeAll", 14 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(234);
	if ((frame[1].o) != nullptr) goto label_13;
	}
	{
	LINE_NUMBER(235);
	clinit_java_lang_NullPointerException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_NullPointerException);
	init_java_lang_NullPointerException(ctx, sp[0].o);
	throwException(ctx, sp[0].o);	}
label_13:;
	{
	LINE_NUMBER(236);
	clinit_java_util_ArrayList(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_util_ArrayList);
	jint temp0 = (jint)((func_java_util_Collection_size_R_int) resolveInterfaceMethod(ctx, &class_java_util_Collection, INDEX_java_util_Collection_size_R_int, (frame[1].o)))(ctx, (frame[1].o));
	init_java_util_ArrayList_int(ctx, sp[0].o, temp0);
	frame[2].o = sp[0].o;
	LINE_NUMBER(237);
	frame[3].i = (jint(0));
	}
label_9: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_8; }
	}
	{
	LINE_NUMBER(239);
	sp[0].o = (jobject)((func_java_util_Collection_iterator_R_java_util_Iterator) resolveInterfaceMethod(ctx, &class_java_util_Collection, INDEX_java_util_Collection_iterator_R_java_util_Iterator, (frame[1].o)))(ctx, (frame[1].o));
	frame[4].o = sp[0].o;
	}
label_16:;
	{
	jint temp0 = (jint)((func_java_util_Iterator_hasNext_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_hasNext_R_boolean, (frame[4].o)))(ctx, (frame[4].o));
	if (temp0 == 0) goto label_17;
	}
	{
	sp[0].o = (jobject)((func_java_util_Iterator_next_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_next_R_java_lang_Object, (frame[4].o)))(ctx, (frame[4].o));
	frame[5].o = (checkCast(ctx, &class_java_util_concurrent_Callable, sp[0].o));
	LINE_NUMBER(240);
	sp[0].o = (jobject)((func_java_util_concurrent_AbstractExecutorService_newTaskFor_java_util_concurrent_Callable_R_java_util_concurrent_RunnableFuture) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_util_concurrent_AbstractExecutorService_newTaskFor_java_util_concurrent_Callable_R_java_util_concurrent_RunnableFuture])(ctx, (frame[0].o), (frame[5].o));
	frame[6].o = sp[0].o;
	LINE_NUMBER(241);
	jint temp0 = (jint)((func_java_util_ArrayList_add_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_java_util_ArrayList_add_java_lang_Object_R_boolean])(ctx, (frame[2].o), (frame[6].o));
	LINE_NUMBER(242);
	((func_java_util_concurrent_AbstractExecutorService_execute_java_lang_Runnable) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_util_concurrent_AbstractExecutorService_execute_java_lang_Runnable])(ctx, (frame[0].o), (frame[6].o));
	LINE_NUMBER(243);
	goto label_16;
	}
label_17:;
	{
	LINE_NUMBER(244);
	frame[4].i = (jint(0));
	jint temp0 = (jint)((func_java_util_ArrayList_size_R_int) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_java_util_ArrayList_size_R_int])(ctx, (frame[2].o));
	frame[5].i = temp0;
	}
label_23:;
	{
	if ((frame[4].i) >= (frame[5].i)) goto label_24;
	}
	{
	LINE_NUMBER(245);
	sp[0].o = (jobject)((func_java_util_ArrayList_get_int_R_java_lang_Object) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_java_util_ArrayList_get_int_R_java_lang_Object])(ctx, (frame[2].o), (frame[4].i));
	frame[6].o = (checkCast(ctx, &class_java_util_concurrent_Future, sp[0].o));
	LINE_NUMBER(246);
	jint temp0 = (jint)((func_java_util_concurrent_Future_isDone_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_concurrent_Future, INDEX_java_util_concurrent_Future_isDone_R_boolean, (frame[6].o)))(ctx, (frame[6].o));
	if (temp0 != 0) goto label_27;
	}
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_util_concurrent_CancellationException))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
label_5: if (setjmp(*pushExceptionFrame(frameRef, &class_java_util_concurrent_ExecutionException))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 2); goto label_4; }
	}
	{
	LINE_NUMBER(248);
	sp[0].o = (jobject)((func_java_util_concurrent_Future_get_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_concurrent_Future, INDEX_java_util_concurrent_Future_get_R_java_lang_Object, (frame[6].o)))(ctx, (frame[6].o));
	}
	popExceptionFrame(frameRef);
	popExceptionFrame(frameRef);
	LINE_NUMBER(251);
	goto label_27;
label_2:;
	{
	sp -= 1;
	LINE_NUMBER(249);
	frame[7].o = sp[0].o;
	LINE_NUMBER(251);
	goto label_27;
	}
label_4:;
	LINE_NUMBER(250);
	INST_ASTORE(7);
label_27:;
	{
	LINE_NUMBER(244);
	INST_IINC(4, 1);
	goto label_23;
	}
label_24:;
	{
	LINE_NUMBER(254);
	frame[3].i = (jint(1));
	LINE_NUMBER(255);
	frame[4].o = (frame[2].o);
	}
	popExceptionFrame(frameRef);
	{
	LINE_NUMBER(257);
	if ((frame[3].i) != 0) goto label_30;
	}
	{
	LINE_NUMBER(258);
	frame[5].i = (jint(0));
	jint temp0 = (jint)((func_java_util_ArrayList_size_R_int) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_java_util_ArrayList_size_R_int])(ctx, (frame[2].o));
	frame[6].i = temp0;
	}
label_33:;
	{
	if ((frame[5].i) >= (frame[6].i)) goto label_30;
	}
	{
	LINE_NUMBER(259);
	sp[0].o = (jobject)((func_java_util_ArrayList_get_int_R_java_lang_Object) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_java_util_ArrayList_get_int_R_java_lang_Object])(ctx, (frame[2].o), (frame[5].i));
	jint temp0 = (jint)((func_java_util_concurrent_Future_cancel_boolean_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_concurrent_Future, INDEX_java_util_concurrent_Future_cancel_boolean_R_boolean, (checkCast(ctx, &class_java_util_concurrent_Future, sp[0].o))))(ctx, (checkCast(ctx, &class_java_util_concurrent_Future, sp[0].o)), (jint(1)));
	LINE_NUMBER(258);
	INST_IINC(5, 1);
	goto label_33;
	}
label_30:;
	{
	LINE_NUMBER(255);
	popStackFrame(ctx);
	return (frame[4].o);
	}
label_8:;
label_11: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_8; }
	}
	LINE_NUMBER(257);
	INST_ASTORE(8);
	popExceptionFrame(frameRef);
	INST_ILOAD(3);
	if ((--sp)->i != 0) goto label_36;
	{
	LINE_NUMBER(258);
	frame[9].i = (jint(0));
	jint temp0 = (jint)((func_java_util_ArrayList_size_R_int) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_java_util_ArrayList_size_R_int])(ctx, (frame[2].o));
	frame[10].i = temp0;
	}
label_39:;
	{
	if ((frame[9].i) >= (frame[10].i)) goto label_36;
	}
	{
	LINE_NUMBER(259);
	sp[0].o = (jobject)((func_java_util_ArrayList_get_int_R_java_lang_Object) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_java_util_ArrayList_get_int_R_java_lang_Object])(ctx, (frame[2].o), (frame[9].i));
	jint temp0 = (jint)((func_java_util_concurrent_Future_cancel_boolean_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_concurrent_Future, INDEX_java_util_concurrent_Future_cancel_boolean_R_boolean, (checkCast(ctx, &class_java_util_concurrent_Future, sp[0].o))))(ctx, (checkCast(ctx, &class_java_util_concurrent_Future, sp[0].o)), (jint(1)));
	LINE_NUMBER(258);
	INST_IINC(9, 1);
	goto label_39;
	}
label_36:;
	{
	LINE_NUMBER(260);
	throwException(ctx, (frame[8].o));	}

	popStackFrame(ctx);
}

jobject M_java_util_concurrent_AbstractExecutorService_invokeAll_java_util_Collection_long_java_util_concurrent_TimeUnit_R_java_util_List(jcontext ctx, jobject self, jobject param0, jlong param1, jobject param2) {
	NULL_CHECK(self);
	jtype frame[25];
	auto stack = &frame[21];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/concurrent/AbstractExecutorService:invokeAll", 25 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);
	volatile bool bypasses[5]{};

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].l = param1;
	frame[4].o = param2;
	{
	LINE_NUMBER(266);
	if ((frame[1].o) != nullptr) goto label_23;
	}
	{
	LINE_NUMBER(267);
	clinit_java_lang_NullPointerException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_NullPointerException);
	init_java_lang_NullPointerException(ctx, sp[0].o);
	throwException(ctx, sp[0].o);	}
label_23:;
	{
	LINE_NUMBER(268);
	jlong temp0 = (jlong)((func_java_util_concurrent_TimeUnit_toNanos_long_R_long) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_java_util_concurrent_TimeUnit_toNanos_long_R_long])(ctx, (frame[4].o), (frame[2].l));
	frame[5].l = temp0;
	LINE_NUMBER(269);
	clinit_java_util_ArrayList(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_util_ArrayList);
	jint temp1 = (jint)((func_java_util_Collection_size_R_int) resolveInterfaceMethod(ctx, &class_java_util_Collection, INDEX_java_util_Collection_size_R_int, (frame[1].o)))(ctx, (frame[1].o));
	init_java_util_ArrayList_int(ctx, sp[0].o, temp1);
	frame[7].o = sp[0].o;
	LINE_NUMBER(270);
	frame[8].i = (jint(0));
	}
label_11: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_10; }
	}
	if (bypasses[1]) { bypasses[1] = false; goto label_33; }
	{
	LINE_NUMBER(272);
	sp[0].o = (jobject)((func_java_util_Collection_iterator_R_java_util_Iterator) resolveInterfaceMethod(ctx, &class_java_util_Collection, INDEX_java_util_Collection_iterator_R_java_util_Iterator, (frame[1].o)))(ctx, (frame[1].o));
	frame[9].o = sp[0].o;
	}
label_27:;
	{
	jint temp0 = (jint)((func_java_util_Iterator_hasNext_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_hasNext_R_boolean, (frame[9].o)))(ctx, (frame[9].o));
	if (temp0 == 0) goto label_28;
	}
	{
	sp[0].o = (jobject)((func_java_util_Iterator_next_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_next_R_java_lang_Object, (frame[9].o)))(ctx, (frame[9].o));
	frame[10].o = (checkCast(ctx, &class_java_util_concurrent_Callable, sp[0].o));
	LINE_NUMBER(273);
	sp[0].o = frame[7].o;
	sp[1].o = (jobject)((func_java_util_concurrent_AbstractExecutorService_newTaskFor_java_util_concurrent_Callable_R_java_util_concurrent_RunnableFuture) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_util_concurrent_AbstractExecutorService_newTaskFor_java_util_concurrent_Callable_R_java_util_concurrent_RunnableFuture])(ctx, (frame[0].o), (frame[10].o));
	jint temp0 = (jint)((func_java_util_ArrayList_add_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_ArrayList_add_java_lang_Object_R_boolean])(ctx, sp[0].o, sp[1].o);
	goto label_27;
	}
label_28:;
	{
	LINE_NUMBER(275);
	jlong temp0 = (jlong)SM_java_lang_System_nanoTime_R_long(ctx);
	frame[9].l = (temp0 + (frame[5].l));
	LINE_NUMBER(276);
	jint temp1 = (jint)((func_java_util_ArrayList_size_R_int) ((void **) nullCheck(ctx, (frame[7].o))->vtable)[VTABLE_java_util_ArrayList_size_R_int])(ctx, (frame[7].o));
	frame[11].i = temp1;
	LINE_NUMBER(280);
	frame[12].i = (jint(0));
	}
label_33:;
	{
	if ((frame[12].i) >= (frame[11].i)) { popExceptionFrames(frameRef, 1); bypasses[0] = true; goto label_14; } // goto label_34
	}
	{
	LINE_NUMBER(281);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((func_java_util_ArrayList_get_int_R_java_lang_Object) ((void **) nullCheck(ctx, (frame[7].o))->vtable)[VTABLE_java_util_ArrayList_get_int_R_java_lang_Object])(ctx, (frame[7].o), (frame[12].i));
	((func_java_util_concurrent_AbstractExecutorService_execute_java_lang_Runnable) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_concurrent_AbstractExecutorService_execute_java_lang_Runnable])(ctx, sp[0].o, (checkCast(ctx, &class_java_lang_Runnable, sp[1].o)));
	LINE_NUMBER(282);
	jlong temp0 = frame[9].l;
	jlong temp1 = (jlong)SM_java_lang_System_nanoTime_R_long(ctx);
	frame[5].l = (temp0 - temp1);
	LINE_NUMBER(283);
	if ((longCompare((frame[5].l), (jlong(0)))) > 0) { popExceptionFrames(frameRef, 1); goto label_12; }
	}
	{
	LINE_NUMBER(284);
	frame[13].o = (frame[7].o);
	}
	popExceptionFrame(frameRef);
	{
	LINE_NUMBER(305);
	if ((frame[8].i) != 0) goto label_39;
	}
	{
	LINE_NUMBER(306);
	frame[14].i = (jint(0));
	jint temp0 = (jint)((func_java_util_ArrayList_size_R_int) ((void **) nullCheck(ctx, (frame[7].o))->vtable)[VTABLE_java_util_ArrayList_size_R_int])(ctx, (frame[7].o));
	frame[15].i = temp0;
	}
label_42:;
	{
	if ((frame[14].i) >= (frame[15].i)) goto label_39;
	}
	{
	LINE_NUMBER(307);
	sp[0].o = (jobject)((func_java_util_ArrayList_get_int_R_java_lang_Object) ((void **) nullCheck(ctx, (frame[7].o))->vtable)[VTABLE_java_util_ArrayList_get_int_R_java_lang_Object])(ctx, (frame[7].o), (frame[14].i));
	jint temp0 = (jint)((func_java_util_concurrent_Future_cancel_boolean_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_concurrent_Future, INDEX_java_util_concurrent_Future_cancel_boolean_R_boolean, (checkCast(ctx, &class_java_util_concurrent_Future, sp[0].o))))(ctx, (checkCast(ctx, &class_java_util_concurrent_Future, sp[0].o)), (jint(1)));
	LINE_NUMBER(306);
	INST_IINC(14, 1);
	goto label_42;
	}
label_39:;
	{
	LINE_NUMBER(284);
	popStackFrame(ctx);
	return (frame[13].o);
	}
label_12:;
label_14: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_10; }
	}
	if (bypasses[0]) { bypasses[0] = false; goto label_34; }
	if (bypasses[4]) { bypasses[4] = false; goto label_45; }
	{
	LINE_NUMBER(280);
	INST_IINC(12, 1);
	{ popExceptionFrames(frameRef, 1); bypasses[1] = true; goto label_11; } // goto label_33
	}
label_34:;
	{
	LINE_NUMBER(287);
	frame[12].i = (jint(0));
	}
label_45:;
	{
	if ((frame[12].i) >= (frame[11].i)) { popExceptionFrames(frameRef, 1); bypasses[2] = true; goto label_19; } // goto label_46
	}
	{
	LINE_NUMBER(288);
	sp[0].o = (jobject)((func_java_util_ArrayList_get_int_R_java_lang_Object) ((void **) nullCheck(ctx, (frame[7].o))->vtable)[VTABLE_java_util_ArrayList_get_int_R_java_lang_Object])(ctx, (frame[7].o), (frame[12].i));
	frame[13].o = (checkCast(ctx, &class_java_util_concurrent_Future, sp[0].o));
	LINE_NUMBER(289);
	jint temp0 = (jint)((func_java_util_concurrent_Future_isDone_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_concurrent_Future, INDEX_java_util_concurrent_Future_isDone_R_boolean, (frame[13].o)))(ctx, (frame[13].o));
	if (temp0 != 0) { popExceptionFrames(frameRef, 1); bypasses[3] = true; goto label_19; } // goto label_49
	}
	{
	LINE_NUMBER(290);
	if ((longCompare((frame[5].l), (jlong(0)))) > 0) { popExceptionFrames(frameRef, 1); goto label_0; }
	}
	{
	LINE_NUMBER(291);
	frame[14].o = (frame[7].o);
	}
	popExceptionFrame(frameRef);
	{
	LINE_NUMBER(305);
	if ((frame[8].i) != 0) goto label_52;
	}
	{
	LINE_NUMBER(306);
	frame[15].i = (jint(0));
	jint temp0 = (jint)((func_java_util_ArrayList_size_R_int) ((void **) nullCheck(ctx, (frame[7].o))->vtable)[VTABLE_java_util_ArrayList_size_R_int])(ctx, (frame[7].o));
	frame[16].i = temp0;
	}
label_55:;
	{
	if ((frame[15].i) >= (frame[16].i)) goto label_52;
	}
	{
	LINE_NUMBER(307);
	sp[0].o = (jobject)((func_java_util_ArrayList_get_int_R_java_lang_Object) ((void **) nullCheck(ctx, (frame[7].o))->vtable)[VTABLE_java_util_ArrayList_get_int_R_java_lang_Object])(ctx, (frame[7].o), (frame[15].i));
	jint temp0 = (jint)((func_java_util_concurrent_Future_cancel_boolean_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_concurrent_Future, INDEX_java_util_concurrent_Future_cancel_boolean_R_boolean, (checkCast(ctx, &class_java_util_concurrent_Future, sp[0].o))))(ctx, (checkCast(ctx, &class_java_util_concurrent_Future, sp[0].o)), (jint(1)));
	LINE_NUMBER(306);
	INST_IINC(15, 1);
	goto label_55;
	}
label_52:;
	{
	LINE_NUMBER(291);
	popStackFrame(ctx);
	return (frame[14].o);
	}
label_0:;
label_16: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_10; }
	}
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_util_concurrent_CancellationException))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
label_5: if (setjmp(*pushExceptionFrame(frameRef, &class_java_util_concurrent_ExecutionException))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 2); goto label_4; }
	}
label_7: if (setjmp(*pushExceptionFrame(frameRef, &class_java_util_concurrent_TimeoutException))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 3); goto label_6; }
	}
	{
	LINE_NUMBER(293);
	sp[0].o = frame[13].o;
	jlong temp0 = frame[5].l;
	clinit_java_util_concurrent_TimeUnit(ctx);
	sp[1].o = (jobject)SF_java_util_concurrent_TimeUnit_NANOSECONDS;
	sp[0].o = (jobject)((func_java_util_concurrent_Future_get_long_java_util_concurrent_TimeUnit_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_concurrent_Future, INDEX_java_util_concurrent_Future_get_long_java_util_concurrent_TimeUnit_R_java_lang_Object, sp[0].o))(ctx, sp[0].o, temp0, sp[1].o);
	}
	popExceptionFrame(frameRef);
	popExceptionFrame(frameRef);
	popExceptionFrame(frameRef);
	LINE_NUMBER(298);
	{ popExceptionFrames(frameRef, 1); goto label_17; }
label_2:;
	{
	sp -= 1;
	LINE_NUMBER(294);
	frame[14].o = sp[0].o;
	LINE_NUMBER(298);
	{ popExceptionFrames(frameRef, 1); goto label_17; }
	}
label_4:;
	{
	sp -= 1;
	LINE_NUMBER(295);
	frame[14].o = sp[0].o;
	LINE_NUMBER(298);
	{ popExceptionFrames(frameRef, 1); goto label_17; }
	}
label_6:;
	{
	sp -= 1;
	LINE_NUMBER(296);
	frame[14].o = sp[0].o;
	LINE_NUMBER(297);
	frame[15].o = (frame[7].o);
	}
	popExceptionFrame(frameRef);
	{
	LINE_NUMBER(305);
	if ((frame[8].i) != 0) goto label_61;
	}
	{
	LINE_NUMBER(306);
	frame[16].i = (jint(0));
	jint temp0 = (jint)((func_java_util_ArrayList_size_R_int) ((void **) nullCheck(ctx, (frame[7].o))->vtable)[VTABLE_java_util_ArrayList_size_R_int])(ctx, (frame[7].o));
	frame[17].i = temp0;
	}
label_64:;
	{
	if ((frame[16].i) >= (frame[17].i)) goto label_61;
	}
	{
	LINE_NUMBER(307);
	sp[0].o = (jobject)((func_java_util_ArrayList_get_int_R_java_lang_Object) ((void **) nullCheck(ctx, (frame[7].o))->vtable)[VTABLE_java_util_ArrayList_get_int_R_java_lang_Object])(ctx, (frame[7].o), (frame[16].i));
	jint temp0 = (jint)((func_java_util_concurrent_Future_cancel_boolean_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_concurrent_Future, INDEX_java_util_concurrent_Future_cancel_boolean_R_boolean, (checkCast(ctx, &class_java_util_concurrent_Future, sp[0].o))))(ctx, (checkCast(ctx, &class_java_util_concurrent_Future, sp[0].o)), (jint(1)));
	LINE_NUMBER(306);
	INST_IINC(16, 1);
	goto label_64;
	}
label_61:;
	{
	LINE_NUMBER(297);
	popStackFrame(ctx);
	return (frame[15].o);
	}
label_17:;
label_19: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_10; }
	}
	if (bypasses[2]) { bypasses[2] = false; goto label_46; }
	if (bypasses[3]) { bypasses[3] = false; goto label_49; }
	{
	LINE_NUMBER(299);
	jlong temp0 = frame[9].l;
	jlong temp1 = (jlong)SM_java_lang_System_nanoTime_R_long(ctx);
	frame[5].l = (temp0 - temp1);
	}
label_49:;
	{
	LINE_NUMBER(287);
	INST_IINC(12, 1);
	{ popExceptionFrames(frameRef, 1); bypasses[4] = true; goto label_14; } // goto label_45
	}
label_46:;
	{
	LINE_NUMBER(302);
	frame[8].i = (jint(1));
	LINE_NUMBER(303);
	frame[12].o = (frame[7].o);
	}
	popExceptionFrame(frameRef);
	{
	LINE_NUMBER(305);
	if ((frame[8].i) != 0) goto label_68;
	}
	{
	LINE_NUMBER(306);
	frame[13].i = (jint(0));
	jint temp0 = (jint)((func_java_util_ArrayList_size_R_int) ((void **) nullCheck(ctx, (frame[7].o))->vtable)[VTABLE_java_util_ArrayList_size_R_int])(ctx, (frame[7].o));
	frame[14].i = temp0;
	}
label_71:;
	{
	if ((frame[13].i) >= (frame[14].i)) goto label_68;
	}
	{
	LINE_NUMBER(307);
	sp[0].o = (jobject)((func_java_util_ArrayList_get_int_R_java_lang_Object) ((void **) nullCheck(ctx, (frame[7].o))->vtable)[VTABLE_java_util_ArrayList_get_int_R_java_lang_Object])(ctx, (frame[7].o), (frame[13].i));
	jint temp0 = (jint)((func_java_util_concurrent_Future_cancel_boolean_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_concurrent_Future, INDEX_java_util_concurrent_Future_cancel_boolean_R_boolean, (checkCast(ctx, &class_java_util_concurrent_Future, sp[0].o))))(ctx, (checkCast(ctx, &class_java_util_concurrent_Future, sp[0].o)), (jint(1)));
	LINE_NUMBER(306);
	INST_IINC(13, 1);
	goto label_71;
	}
label_68:;
	{
	LINE_NUMBER(303);
	popStackFrame(ctx);
	return (frame[12].o);
	}
label_10:;
label_21: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_10; }
	}
	LINE_NUMBER(305);
	INST_ASTORE(18);
	popExceptionFrame(frameRef);
	INST_ILOAD(8);
	if ((--sp)->i != 0) goto label_74;
	{
	LINE_NUMBER(306);
	frame[19].i = (jint(0));
	jint temp0 = (jint)((func_java_util_ArrayList_size_R_int) ((void **) nullCheck(ctx, (frame[7].o))->vtable)[VTABLE_java_util_ArrayList_size_R_int])(ctx, (frame[7].o));
	frame[20].i = temp0;
	}
label_77:;
	{
	if ((frame[19].i) >= (frame[20].i)) goto label_74;
	}
	{
	LINE_NUMBER(307);
	sp[0].o = (jobject)((func_java_util_ArrayList_get_int_R_java_lang_Object) ((void **) nullCheck(ctx, (frame[7].o))->vtable)[VTABLE_java_util_ArrayList_get_int_R_java_lang_Object])(ctx, (frame[7].o), (frame[19].i));
	jint temp0 = (jint)((func_java_util_concurrent_Future_cancel_boolean_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_concurrent_Future, INDEX_java_util_concurrent_Future_cancel_boolean_R_boolean, (checkCast(ctx, &class_java_util_concurrent_Future, sp[0].o))))(ctx, (checkCast(ctx, &class_java_util_concurrent_Future, sp[0].o)), (jint(1)));
	LINE_NUMBER(306);
	INST_IINC(19, 1);
	goto label_77;
	}
label_74:;
	{
	LINE_NUMBER(308);
	throwException(ctx, (frame[18].o));	}

	popStackFrame(ctx);
}

void clinit_java_util_concurrent_AbstractExecutorService(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	jtype frame[1];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/concurrent/AbstractExecutorService:<clinit>", 1 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_util_concurrent_AbstractExecutorService(ctx);
	{
	LINE_NUMBER(75);
	jint temp0 = (jint)((func_java_lang_Class_desiredAssertionStatus_R_boolean) ((void **) nullCheck(ctx, (((jobject) &class_java_util_concurrent_AbstractExecutorService)))->vtable)[VTABLE_java_lang_Class_desiredAssertionStatus_R_boolean])(ctx, (((jobject) &class_java_util_concurrent_AbstractExecutorService)));
	if (temp0 != 0) goto label_1;
	}
	INST_ICONST(1);
	goto label_2;
label_1:;
	INST_ICONST(0);
label_2:;
	clinit_java_util_concurrent_AbstractExecutorService(ctx);
	SF_java_util_concurrent_AbstractExecutorService_$assertionsDisabled = (--sp)->i;
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void *vtable_java_util_concurrent_AbstractExecutorService[] {
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
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
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
};

static jclass interfaces[] { &class_java_util_concurrent_ExecutorService, };

static FieldMetadata fields[] {
	{ "$assertionsDisabled", &class_boolean, (intptr_t) &SF_java_util_concurrent_AbstractExecutorService_$assertionsDisabled, "Z", 4120 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_java_util_concurrent_AbstractExecutorService, 0, "()V", 1 },
	{ "newTaskFor", (intptr_t) M_java_util_concurrent_AbstractExecutorService_newTaskFor_java_lang_Runnable_java_lang_Object_R_java_util_concurrent_RunnableFuture, VTABLE_java_util_concurrent_AbstractExecutorService_newTaskFor_java_lang_Runnable_java_lang_Object_R_java_util_concurrent_RunnableFuture, "(Ljava/lang/Runnable;Ljava/lang/Object;)Ljava/util/concurrent/RunnableFuture;", 4 },
	{ "newTaskFor", (intptr_t) M_java_util_concurrent_AbstractExecutorService_newTaskFor_java_util_concurrent_Callable_R_java_util_concurrent_RunnableFuture, VTABLE_java_util_concurrent_AbstractExecutorService_newTaskFor_java_util_concurrent_Callable_R_java_util_concurrent_RunnableFuture, "(Ljava/util/concurrent/Callable;)Ljava/util/concurrent/RunnableFuture;", 4 },
	{ "submit", (intptr_t) M_java_util_concurrent_AbstractExecutorService_submit_java_lang_Runnable_R_java_util_concurrent_Future, VTABLE_java_util_concurrent_AbstractExecutorService_submit_java_lang_Runnable_R_java_util_concurrent_Future, "(Ljava/lang/Runnable;)Ljava/util/concurrent/Future;", 1 },
	{ "submit", (intptr_t) M_java_util_concurrent_AbstractExecutorService_submit_java_lang_Runnable_java_lang_Object_R_java_util_concurrent_Future, VTABLE_java_util_concurrent_AbstractExecutorService_submit_java_lang_Runnable_java_lang_Object_R_java_util_concurrent_Future, "(Ljava/lang/Runnable;Ljava/lang/Object;)Ljava/util/concurrent/Future;", 1 },
	{ "submit", (intptr_t) M_java_util_concurrent_AbstractExecutorService_submit_java_util_concurrent_Callable_R_java_util_concurrent_Future, VTABLE_java_util_concurrent_AbstractExecutorService_submit_java_util_concurrent_Callable_R_java_util_concurrent_Future, "(Ljava/util/concurrent/Callable;)Ljava/util/concurrent/Future;", 1 },
	{ "doInvokeAny", (intptr_t) M_java_util_concurrent_AbstractExecutorService_doInvokeAny_java_util_Collection_boolean_long_R_java_lang_Object, VTABLE_java_util_concurrent_AbstractExecutorService_doInvokeAny_java_util_Collection_boolean_long_R_java_lang_Object, "(Ljava/util/Collection;ZJ)Ljava/lang/Object;", 2 },
	{ "invokeAny", (intptr_t) M_java_util_concurrent_AbstractExecutorService_invokeAny_java_util_Collection_R_java_lang_Object, VTABLE_java_util_concurrent_AbstractExecutorService_invokeAny_java_util_Collection_R_java_lang_Object, "(Ljava/util/Collection;)Ljava/lang/Object;", 1 },
	{ "invokeAny", (intptr_t) M_java_util_concurrent_AbstractExecutorService_invokeAny_java_util_Collection_long_java_util_concurrent_TimeUnit_R_java_lang_Object, VTABLE_java_util_concurrent_AbstractExecutorService_invokeAny_java_util_Collection_long_java_util_concurrent_TimeUnit_R_java_lang_Object, "(Ljava/util/Collection;JLjava/util/concurrent/TimeUnit;)Ljava/lang/Object;", 1 },
	{ "invokeAll", (intptr_t) M_java_util_concurrent_AbstractExecutorService_invokeAll_java_util_Collection_R_java_util_List, VTABLE_java_util_concurrent_AbstractExecutorService_invokeAll_java_util_Collection_R_java_util_List, "(Ljava/util/Collection;)Ljava/util/List;", 1 },
	{ "invokeAll", (intptr_t) M_java_util_concurrent_AbstractExecutorService_invokeAll_java_util_Collection_long_java_util_concurrent_TimeUnit_R_java_util_List, VTABLE_java_util_concurrent_AbstractExecutorService_invokeAll_java_util_Collection_long_java_util_concurrent_TimeUnit_R_java_util_List, "(Ljava/util/Collection;JLjava/util/concurrent/TimeUnit;)Ljava/util/List;", 1 },
	{ "<clinit>", (intptr_t) clinit_java_util_concurrent_AbstractExecutorService, 0, "()V", 8 },
};

Class class_java_util_concurrent_AbstractExecutorService{
		.nativeName = (intptr_t) "java/util/concurrent/AbstractExecutorService",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(java_util_concurrent_AbstractExecutorService),
		.classVtable = (intptr_t) vtable_java_util_concurrent_AbstractExecutorService,
		.staticInitializer = (intptr_t) clinit_java_util_concurrent_AbstractExecutorService,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_java_util_concurrent_AbstractExecutorService,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 1057,
		.interfaceCount = 1,
		.nativeInterfaces = (intptr_t) interfaces,
		.fieldCount = 1,
		.nativeFields = (intptr_t) fields,
		.methodCount = 12,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 27,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_java_util_concurrent_AbstractExecutorService = registerClass(&class_java_util_concurrent_AbstractExecutorService);

}
