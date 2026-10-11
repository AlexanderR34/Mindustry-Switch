#include "arc/util/Threads.h"
#include "java/util/concurrent/ExecutionException.h"
#include "arc/func/Prov.h"
#include "java/lang/InterruptedException.h"
#include "java/util/concurrent/Future.h"
#include "java/util/concurrent/SynchronousQueue.h"
#include "arc/Application.h"
#include "java/lang/Runnable.h"
#include "java/lang/String.h"
#include "arc/struct/Seq.h"
#include "java/util/concurrent/ThreadFactory.h"
#include "arc/util/OS.h"
#include "java/lang/Throwable.h"
#include "java/lang/Thread.h"
#include "java/util/concurrent/LinkedBlockingQueue.h"
#include "java/lang/Exception.h"
#include "java/util/concurrent/ExecutorService.h"
#include "arc/Core.h"
#include "java/util/Iterator.h"
#include "arc/util/Log.h"
#include "arc/util/Threads_1.h"
#include "java/lang/ThreadLocal.h"
#include "java/util/concurrent/TimeUnit.h"
#include "arc/util/Threads_invoke_java_lang_Runnable_0.h"
#include "java/util/concurrent/Executors.h"
#include "java/lang/Thread_UncaughtExceptionHandler.h"
#include "java/util/concurrent/BlockingQueue.h"
#include "java/lang/Object.h"
#include "arc/util/Threads_invoke_java_util_concurrent_ThreadFactory_1.h"
#include "arc/util/Threads_invoke_java_util_concurrent_ThreadFactory_0.h"
#include "arc/util/Threads.h"
#include "java/util/concurrent/ThreadPoolExecutor.h"
#include "arc/util/Threads_invoke_java_util_concurrent_ThreadFactory_3.h"
#include "arc/util/ArcRuntimeException.h"
#include "arc/util/Threads_invoke_java_util_concurrent_ThreadFactory_2.h"
#include "java/lang/RuntimeException.h"
#include "arc/util/Threads_invoke_java_lang_Thread_UncaughtExceptionHandler_0.h"

extern "C" {


void mark_arc_util_Threads(jobject object, jint mark, jint depth) {
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
	auto self = (arc_util_Threads *) object;
}

void clinit_arc_util_Threads(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
}

void init_arc_util_Threads(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/util/Threads:<init>", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_util_Threads(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(12);
	init_java_lang_Object(ctx, (frame[0].o));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject SM_arc_util_Threads_local_arc_func_Prov_R_java_lang_ThreadLocal(jcontext ctx, jobject param0) {
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/util/Threads:local", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_util_Threads(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(15);
	clinit_arc_util_Threads$1(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_util_Threads$1);
	init_arc_util_Threads$1_arc_func_Prov(ctx, sp[0].o, (frame[0].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject SM_arc_util_Threads_await_java_util_concurrent_Future_R_java_lang_Object(jcontext ctx, jobject param0) {
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/util/Threads:await", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_util_Threads(ctx);
	frame[0].o = param0;
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_util_concurrent_ExecutionException))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
label_4: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_InterruptedException))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 2); goto label_2; }
	}
	{
	LINE_NUMBER(25);
	sp[0].o = (jobject)((func_java_util_concurrent_Future_get_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_concurrent_Future, INDEX_java_util_concurrent_Future_get_R_java_lang_Object, (frame[0].o)))(ctx, (frame[0].o));
	sp += 1;
	}
	popExceptionFrame(frameRef);
	popExceptionFrame(frameRef);
	popStackFrame(ctx);
	INST_ARETURN();
label_2:;
	{
	sp -= 1;
	LINE_NUMBER(26);
	frame[1].o = sp[0].o;
	LINE_NUMBER(27);
	clinit_arc_util_ArcRuntimeException(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_util_ArcRuntimeException);
	sp[1].o = (jobject)((func_java_lang_Exception_getCause_R_java_lang_Throwable) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_Exception_getCause_R_java_lang_Throwable])(ctx, (frame[1].o));
	init_arc_util_ArcRuntimeException_java_lang_Throwable(ctx, sp[0].o, sp[1].o);
	throwException(ctx, sp[0].o);	}

	popStackFrame(ctx);
}

void SM_arc_util_Threads_awaitAll_arc_struct_Seq(jcontext ctx, jobject param0) {
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/util/Threads:awaitAll", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_util_Threads(ctx);
	frame[0].o = param0;
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_util_concurrent_ExecutionException))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
label_4: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_InterruptedException))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 2); goto label_2; }
	}
	{
	LINE_NUMBER(33);
	sp[0].o = (jobject)((func_arc_struct_Seq_iterator_R_java_util_Iterator) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_struct_Seq_iterator_R_java_util_Iterator])(ctx, (frame[0].o));
	frame[1].o = sp[0].o;
	}
label_5:;
	{
	jint temp0 = (jint)((func_java_util_Iterator_hasNext_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_hasNext_R_boolean, (frame[1].o)))(ctx, (frame[1].o));
	if (temp0 == 0) goto label_1;
	}
	{
	sp[0].o = (jobject)((func_java_util_Iterator_next_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_next_R_java_lang_Object, (frame[1].o)))(ctx, (frame[1].o));
	frame[2].o = (checkCast(ctx, &class_java_util_concurrent_Future, sp[0].o));
	LINE_NUMBER(34);
	sp[0].o = (jobject)((func_java_util_concurrent_Future_get_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_concurrent_Future, INDEX_java_util_concurrent_Future_get_R_java_lang_Object, (frame[2].o)))(ctx, (frame[2].o));
	LINE_NUMBER(35);
	goto label_5;
	}
label_1:;
	popExceptionFrame(frameRef);
	popExceptionFrame(frameRef);
	LINE_NUMBER(38);
	goto label_8;
label_2:;
	{
	sp -= 1;
	LINE_NUMBER(36);
	frame[1].o = sp[0].o;
	LINE_NUMBER(37);
	clinit_arc_util_ArcRuntimeException(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_util_ArcRuntimeException);
	sp[1].o = (jobject)((func_java_lang_Exception_getCause_R_java_lang_Throwable) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_Exception_getCause_R_java_lang_Throwable])(ctx, (frame[1].o));
	init_arc_util_ArcRuntimeException_java_lang_Throwable(ctx, sp[0].o, sp[1].o);
	throwException(ctx, sp[0].o);	}
label_8:;
	LINE_NUMBER(39);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jobject SM_arc_util_Threads_executor_java_lang_String_int_R_java_util_concurrent_ExecutorService(jcontext ctx, jobject param0, jint param1) {
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/util/Threads:executor", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_util_Threads(ctx);
	frame[0].o = param0;
	frame[1].i = param1;
	{
	LINE_NUMBER(43);
	jint temp0 = frame[1].i;
	{ /* InvokeDynamic */
		clinit_arc_util_Threads_invoke_java_util_concurrent_ThreadFactory_0(ctx);
		auto proxy = (arc_util_Threads_invoke_java_util_concurrent_ThreadFactory_0 *) gcAlloc(ctx, &class_arc_util_Threads_invoke_java_util_concurrent_ThreadFactory_0);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[0].o = (jobject) proxy;
	}
	sp[0].o = (jobject)SM_java_util_concurrent_Executors_newFixedThreadPool_int_java_util_concurrent_ThreadFactory_R_java_util_concurrent_ExecutorService(ctx, temp0, sp[0].o);
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject SM_arc_util_Threads_executor_int_R_java_util_concurrent_ExecutorService(jcontext ctx, jint param0) {
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/util/Threads:executor", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_util_Threads(ctx);
	frame[0].i = param0;
	{
	LINE_NUMBER(48);
	jint temp0 = frame[0].i;
	{ /* InvokeDynamic */
		clinit_arc_util_Threads_invoke_java_util_concurrent_ThreadFactory_1(ctx);
		auto proxy = (arc_util_Threads_invoke_java_util_concurrent_ThreadFactory_1 *) gcAlloc(ctx, &class_arc_util_Threads_invoke_java_util_concurrent_ThreadFactory_1);
		sp[0].o = (jobject) proxy;
	}
	sp[0].o = (jobject)SM_java_util_concurrent_Executors_newFixedThreadPool_int_java_util_concurrent_ThreadFactory_R_java_util_concurrent_ExecutorService(ctx, temp0, sp[0].o);
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject SM_arc_util_Threads_executor_java_lang_String_R_java_util_concurrent_ExecutorService(jcontext ctx, jobject param0) {
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/util/Threads:executor", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_util_Threads(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(53);
	sp[0].o = (jobject)SM_arc_util_Threads_executor_java_lang_String_int_R_java_util_concurrent_ExecutorService(ctx, (frame[0].o), (clinit_arc_util_OS(ctx), (jint)SF_arc_util_OS_cores));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject SM_arc_util_Threads_executor_R_java_util_concurrent_ExecutorService(jcontext ctx) {
	jtype frame[1];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/util/Threads:executor", 1 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_util_Threads(ctx);
	{
	LINE_NUMBER(58);
	sp[0].o = (jobject)SM_arc_util_Threads_executor_java_lang_String_R_java_util_concurrent_ExecutorService(ctx, (jobject(nullptr)));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject SM_arc_util_Threads_unboundedExecutor_java_lang_String_int_R_java_util_concurrent_ExecutorService(jcontext ctx, jobject param0, jint param1) {
	jtype frame[11];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/util/Threads:unboundedExecutor", 11 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_util_Threads(ctx);
	frame[0].o = param0;
	frame[1].i = param1;
	{
	LINE_NUMBER(64);
	clinit_java_util_concurrent_ThreadPoolExecutor(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_util_concurrent_ThreadPoolExecutor);
	jint temp0 = frame[1].i;
	jint temp1 = jint(2147483647);
	jlong temp2 = jlong(1);
	clinit_java_util_concurrent_TimeUnit(ctx);
	sp[1].o = (jobject)SF_java_util_concurrent_TimeUnit_MINUTES;
	clinit_java_util_concurrent_SynchronousQueue(ctx);
	sp[2].o = gcAlloc(ctx, &class_java_util_concurrent_SynchronousQueue);
	init_java_util_concurrent_SynchronousQueue(ctx, sp[2].o);
	{ /* InvokeDynamic */
		clinit_arc_util_Threads_invoke_java_util_concurrent_ThreadFactory_2(ctx);
		auto proxy = (arc_util_Threads_invoke_java_util_concurrent_ThreadFactory_2 *) gcAlloc(ctx, &class_arc_util_Threads_invoke_java_util_concurrent_ThreadFactory_2);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[3].o = (jobject) proxy;
	}
	init_java_util_concurrent_ThreadPoolExecutor_int_int_long_java_util_concurrent_TimeUnit_java_util_concurrent_BlockingQueue_java_util_concurrent_ThreadFactory(ctx, sp[0].o, temp0, temp1, temp2, sp[1].o, sp[2].o, sp[3].o);
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject SM_arc_util_Threads_unboundedExecutor_java_lang_String_R_java_util_concurrent_ExecutorService(jcontext ctx, jobject param0) {
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/util/Threads:unboundedExecutor", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_util_Threads(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(69);
	sp[0].o = (jobject)SM_arc_util_Threads_unboundedExecutor_java_lang_String_int_R_java_util_concurrent_ExecutorService(ctx, (frame[0].o), (jint(0)));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject SM_arc_util_Threads_unboundedExecutor_R_java_util_concurrent_ExecutorService(jcontext ctx) {
	jtype frame[1];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/util/Threads:unboundedExecutor", 1 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_util_Threads(ctx);
	{
	LINE_NUMBER(74);
	sp[0].o = (jobject)SM_arc_util_Threads_unboundedExecutor_java_lang_String_R_java_util_concurrent_ExecutorService(ctx, (jobject(nullptr)));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject SM_arc_util_Threads_boundedExecutor_java_lang_String_int_R_java_util_concurrent_ExecutorService(jcontext ctx, jobject param0, jint param1) {
	jtype frame[12];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/util/Threads:boundedExecutor", 12 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_util_Threads(ctx);
	frame[0].o = param0;
	frame[1].i = param1;
	{
	LINE_NUMBER(80);
	clinit_java_util_concurrent_ThreadPoolExecutor(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_util_concurrent_ThreadPoolExecutor);
	jint temp0 = frame[1].i;
	jint temp1 = frame[1].i;
	jlong temp2 = jlong(1);
	clinit_java_util_concurrent_TimeUnit(ctx);
	sp[1].o = (jobject)SF_java_util_concurrent_TimeUnit_MINUTES;
	clinit_java_util_concurrent_LinkedBlockingQueue(ctx);
	sp[2].o = gcAlloc(ctx, &class_java_util_concurrent_LinkedBlockingQueue);
	init_java_util_concurrent_LinkedBlockingQueue(ctx, sp[2].o);
	{ /* InvokeDynamic */
		clinit_arc_util_Threads_invoke_java_util_concurrent_ThreadFactory_3(ctx);
		auto proxy = (arc_util_Threads_invoke_java_util_concurrent_ThreadFactory_3 *) gcAlloc(ctx, &class_arc_util_Threads_invoke_java_util_concurrent_ThreadFactory_3);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[3].o = (jobject) proxy;
	}
	init_java_util_concurrent_ThreadPoolExecutor_int_int_long_java_util_concurrent_TimeUnit_java_util_concurrent_BlockingQueue_java_util_concurrent_ThreadFactory(ctx, sp[0].o, temp0, temp1, temp2, sp[1].o, sp[2].o, sp[3].o);
	frame[2].o = sp[0].o;
	LINE_NUMBER(81);
	((func_java_util_concurrent_ThreadPoolExecutor_allowCoreThreadTimeOut_boolean) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_java_util_concurrent_ThreadPoolExecutor_allowCoreThreadTimeOut_boolean])(ctx, (frame[2].o), (jint(1)));
	LINE_NUMBER(82);
	popStackFrame(ctx);
	return (frame[2].o);
	}

	popStackFrame(ctx);
}

void SM_arc_util_Threads_await_java_util_concurrent_ExecutorService(jcontext ctx, jobject param0) {
	jtype frame[6];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/util/Threads:await", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_util_Threads(ctx);
	frame[0].o = param0;
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_InterruptedException))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(88);
	((func_java_util_concurrent_ExecutorService_shutdown) resolveInterfaceMethod(ctx, &class_java_util_concurrent_ExecutorService, INDEX_java_util_concurrent_ExecutorService_shutdown, (frame[0].o)))(ctx, (frame[0].o));
	LINE_NUMBER(89);
	sp[0].o = frame[0].o;
	jlong temp0 = jlong(9223372036854775807ll);
	clinit_java_util_concurrent_TimeUnit(ctx);
	sp[1].o = (jobject)SF_java_util_concurrent_TimeUnit_SECONDS;
	jint temp1 = (jint)((func_java_util_concurrent_ExecutorService_awaitTermination_long_java_util_concurrent_TimeUnit_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_concurrent_ExecutorService, INDEX_java_util_concurrent_ExecutorService_awaitTermination_long_java_util_concurrent_TimeUnit_R_boolean, sp[0].o))(ctx, sp[0].o, temp0, sp[1].o);
	}
	popExceptionFrame(frameRef);
	LINE_NUMBER(92);
	goto label_5;
label_2:;
	{
	sp -= 1;
	LINE_NUMBER(90);
	frame[1].o = sp[0].o;
	LINE_NUMBER(91);
	clinit_java_lang_RuntimeException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_RuntimeException);
	init_java_lang_RuntimeException_java_lang_Throwable(ctx, sp[0].o, (frame[1].o));
	throwException(ctx, sp[0].o);	}
label_5:;
	LINE_NUMBER(93);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void SM_arc_util_Threads_sleep_long(jcontext ctx, jlong param0) {
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/util/Threads:sleep", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_util_Threads(ctx);
	frame[0].l = param0;
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_InterruptedException))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(97);
	SM_java_lang_Thread_sleep_long(ctx, (frame[0].l));
	}
	popExceptionFrame(frameRef);
	LINE_NUMBER(100);
	goto label_4;
label_2:;
	{
	sp -= 1;
	LINE_NUMBER(98);
	frame[2].o = sp[0].o;
	LINE_NUMBER(99);
	clinit_java_lang_RuntimeException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_RuntimeException);
	init_java_lang_RuntimeException_java_lang_Throwable(ctx, sp[0].o, (frame[2].o));
	throwException(ctx, sp[0].o);	}
label_4:;
	LINE_NUMBER(101);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void SM_arc_util_Threads_sleep_long_int(jcontext ctx, jlong param0, jint param1) {
	jtype frame[7];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/util/Threads:sleep", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_util_Threads(ctx);
	frame[0].l = param0;
	frame[2].i = param1;
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_InterruptedException))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(105);
	SM_java_lang_Thread_sleep_long_int(ctx, (frame[0].l), (frame[2].i));
	}
	popExceptionFrame(frameRef);
	LINE_NUMBER(108);
	goto label_4;
label_2:;
	{
	sp -= 1;
	LINE_NUMBER(106);
	frame[3].o = sp[0].o;
	LINE_NUMBER(107);
	clinit_java_lang_RuntimeException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_RuntimeException);
	init_java_lang_RuntimeException_java_lang_Throwable(ctx, sp[0].o, (frame[3].o));
	throwException(ctx, sp[0].o);	}
label_4:;
	LINE_NUMBER(109);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void SM_arc_util_Threads_throwAppException_java_lang_Throwable(jcontext ctx, jobject param0) {
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/util/Threads:throwAppException", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_util_Threads(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(113);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_app;
	{ /* InvokeDynamic */
		clinit_arc_util_Threads_invoke_java_lang_Runnable_0(ctx);
		auto proxy = (arc_util_Threads_invoke_java_lang_Runnable_0 *) gcAlloc(ctx, &class_arc_util_Threads_invoke_java_lang_Runnable_0);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[1].o = (jobject) proxy;
	}
	((func_arc_Application_post_java_lang_Runnable) resolveInterfaceMethod(ctx, &class_arc_Application, INDEX_arc_Application_post_java_lang_Runnable, sp[0].o))(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(120);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject SM_arc_util_Threads_thread_java_lang_Runnable_R_java_lang_Thread(jcontext ctx, jobject param0) {
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/util/Threads:thread", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_util_Threads(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(124);
	sp[0].o = (jobject)SM_arc_util_Threads_thread_java_lang_String_java_lang_Runnable_R_java_lang_Thread(ctx, (jobject(nullptr)), (frame[0].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject SM_arc_util_Threads_thread_java_lang_String_java_lang_Runnable_R_java_lang_Thread(jcontext ctx, jobject param0, jobject param1) {
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/util/Threads:thread", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_util_Threads(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	{
	LINE_NUMBER(129);
	sp[0].o = (jobject)SM_arc_util_Threads_newThread_java_lang_Runnable_java_lang_String_boolean_R_java_lang_Thread(ctx, (frame[1].o), (frame[0].o), (jint(0)));
	frame[2].o = sp[0].o;
	LINE_NUMBER(130);
	((func_java_lang_Thread_start) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_java_lang_Thread_start])(ctx, (frame[2].o));
	LINE_NUMBER(131);
	popStackFrame(ctx);
	return (frame[2].o);
	}

	popStackFrame(ctx);
}

jobject SM_arc_util_Threads_daemon_java_lang_Runnable_R_java_lang_Thread(jcontext ctx, jobject param0) {
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/util/Threads:daemon", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_util_Threads(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(136);
	sp[0].o = (jobject)SM_arc_util_Threads_daemon_java_lang_String_java_lang_Runnable_R_java_lang_Thread(ctx, (jobject(nullptr)), (frame[0].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject SM_arc_util_Threads_daemon_java_lang_String_java_lang_Runnable_R_java_lang_Thread(jcontext ctx, jobject param0, jobject param1) {
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/util/Threads:daemon", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_util_Threads(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	{
	LINE_NUMBER(141);
	sp[0].o = (jobject)SM_arc_util_Threads_newThread_java_lang_Runnable_java_lang_String_boolean_R_java_lang_Thread(ctx, (frame[1].o), (frame[0].o), (jint(1)));
	frame[2].o = sp[0].o;
	LINE_NUMBER(142);
	((func_java_lang_Thread_start) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_java_lang_Thread_start])(ctx, (frame[2].o));
	LINE_NUMBER(143);
	popStackFrame(ctx);
	return (frame[2].o);
	}

	popStackFrame(ctx);
}

jobject SM_arc_util_Threads_newThread_java_lang_Runnable_java_lang_String_boolean_R_java_lang_Thread(jcontext ctx, jobject param0, jobject param1, jbool param2) {
	jtype frame[8];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/util/Threads:newThread", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_util_Threads(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	frame[2].i = param2;
	{
	LINE_NUMBER(147);
	if ((frame[1].o) != nullptr) goto label_1;
	}
	{
	clinit_java_lang_Thread(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_Thread);
	init_java_lang_Thread_java_lang_Runnable(ctx, sp[0].o, (frame[0].o));
	sp += 1;
	goto label_2;
	}
label_1:;
	{
	clinit_java_lang_Thread(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_Thread);
	init_java_lang_Thread_java_lang_Runnable_java_lang_String(ctx, sp[0].o, (frame[0].o), (frame[1].o));
	sp += 1;
	}
label_2:;
	{
	sp -= 1;
	frame[3].o = sp[0].o;
	LINE_NUMBER(148);
	((func_java_lang_Thread_setDaemon_boolean) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_java_lang_Thread_setDaemon_boolean])(ctx, (frame[3].o), (frame[2].i));
	LINE_NUMBER(149);
	sp[0].o = frame[3].o;
	{ /* InvokeDynamic */
		clinit_arc_util_Threads_invoke_java_lang_Thread$UncaughtExceptionHandler_0(ctx);
		auto proxy = (arc_util_Threads_invoke_java_lang_Thread$UncaughtExceptionHandler_0 *) gcAlloc(ctx, &class_arc_util_Threads_invoke_java_lang_Thread$UncaughtExceptionHandler_0);
		sp[1].o = (jobject) proxy;
	}
	((func_java_lang_Thread_setUncaughtExceptionHandler_java_lang_Thread$UncaughtExceptionHandler) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_Thread_setUncaughtExceptionHandler_java_lang_Thread$UncaughtExceptionHandler])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(150);
	popStackFrame(ctx);
	return (frame[3].o);
	}

	popStackFrame(ctx);
}

void SM_arc_util_Threads_lambda$newThread$0_java_lang_Thread_java_lang_Throwable(jcontext ctx, jobject param0, jobject param1) {
	jtype frame[3];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/util/Threads:lambda$newThread$0", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_util_Threads(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	{
	LINE_NUMBER(149);
	SM_arc_util_Log_err_java_lang_Throwable(ctx, (frame[1].o));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_arc_util_Threads_lambda$throwAppException$0_java_lang_Throwable(jcontext ctx, jobject param0) {
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/util/Threads:lambda$throwAppException$0", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_util_Threads(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(114);
	if ((isInstance(ctx, (frame[0].o), &class_java_lang_RuntimeException)) == 0) goto label_1;
	}
	{
	LINE_NUMBER(115);
	throwException(ctx, (checkCast(ctx, &class_java_lang_RuntimeException, (frame[0].o))));	}
label_1:;
	{
	LINE_NUMBER(117);
	clinit_java_lang_RuntimeException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_RuntimeException);
	init_java_lang_RuntimeException_java_lang_Throwable(ctx, sp[0].o, (frame[0].o));
	throwException(ctx, sp[0].o);	}

	popStackFrame(ctx);
}

jobject SM_arc_util_Threads_lambda$boundedExecutor$0_java_lang_String_java_lang_Runnable_R_java_lang_Thread(jcontext ctx, jobject param0, jobject param1) {
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/util/Threads:lambda$boundedExecutor$0", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_util_Threads(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	{
	LINE_NUMBER(80);
	sp[0].o = (jobject)SM_arc_util_Threads_newThread_java_lang_Runnable_java_lang_String_boolean_R_java_lang_Thread(ctx, (frame[1].o), (frame[0].o), (jint(1)));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject SM_arc_util_Threads_lambda$unboundedExecutor$0_java_lang_String_java_lang_Runnable_R_java_lang_Thread(jcontext ctx, jobject param0, jobject param1) {
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/util/Threads:lambda$unboundedExecutor$0", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_util_Threads(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	{
	LINE_NUMBER(64);
	sp[0].o = (jobject)SM_arc_util_Threads_newThread_java_lang_Runnable_java_lang_String_boolean_R_java_lang_Thread(ctx, (frame[1].o), (frame[0].o), (jint(1)));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject SM_arc_util_Threads_lambda$executor$1_java_lang_Runnable_R_java_lang_Thread(jcontext ctx, jobject param0) {
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/util/Threads:lambda$executor$1", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_util_Threads(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(48);
	sp[0].o = (jobject)SM_arc_util_Threads_newThread_java_lang_Runnable_java_lang_String_boolean_R_java_lang_Thread(ctx, (frame[0].o), (jobject(nullptr)), (jint(1)));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject SM_arc_util_Threads_lambda$executor$0_java_lang_String_java_lang_Runnable_R_java_lang_Thread(jcontext ctx, jobject param0, jobject param1) {
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/util/Threads:lambda$executor$0", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_util_Threads(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	{
	LINE_NUMBER(43);
	sp[0].o = (jobject)SM_arc_util_Threads_newThread_java_lang_Runnable_java_lang_String_boolean_R_java_lang_Thread(ctx, (frame[1].o), (frame[0].o), (jint(1)));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void *vtable_arc_util_Threads[] {
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
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_arc_util_Threads, 0, "()V", 1 },
	{ "local", (intptr_t) SM_arc_util_Threads_local_arc_func_Prov_R_java_lang_ThreadLocal, 0, "(Larc/func/Prov;)Ljava/lang/ThreadLocal;", 9 },
	{ "await", (intptr_t) SM_arc_util_Threads_await_java_util_concurrent_Future_R_java_lang_Object, 0, "(Ljava/util/concurrent/Future;)Ljava/lang/Object;", 9 },
	{ "awaitAll", (intptr_t) SM_arc_util_Threads_awaitAll_arc_struct_Seq, 0, "(Larc/struct/Seq;)V", 9 },
	{ "executor", (intptr_t) SM_arc_util_Threads_executor_java_lang_String_int_R_java_util_concurrent_ExecutorService, 0, "(Ljava/lang/String;I)Ljava/util/concurrent/ExecutorService;", 9 },
	{ "executor", (intptr_t) SM_arc_util_Threads_executor_int_R_java_util_concurrent_ExecutorService, 0, "(I)Ljava/util/concurrent/ExecutorService;", 9 },
	{ "executor", (intptr_t) SM_arc_util_Threads_executor_java_lang_String_R_java_util_concurrent_ExecutorService, 0, "(Ljava/lang/String;)Ljava/util/concurrent/ExecutorService;", 9 },
	{ "executor", (intptr_t) SM_arc_util_Threads_executor_R_java_util_concurrent_ExecutorService, 0, "()Ljava/util/concurrent/ExecutorService;", 9 },
	{ "unboundedExecutor", (intptr_t) SM_arc_util_Threads_unboundedExecutor_java_lang_String_int_R_java_util_concurrent_ExecutorService, 0, "(Ljava/lang/String;I)Ljava/util/concurrent/ExecutorService;", 9 },
	{ "unboundedExecutor", (intptr_t) SM_arc_util_Threads_unboundedExecutor_java_lang_String_R_java_util_concurrent_ExecutorService, 0, "(Ljava/lang/String;)Ljava/util/concurrent/ExecutorService;", 9 },
	{ "unboundedExecutor", (intptr_t) SM_arc_util_Threads_unboundedExecutor_R_java_util_concurrent_ExecutorService, 0, "()Ljava/util/concurrent/ExecutorService;", 9 },
	{ "boundedExecutor", (intptr_t) SM_arc_util_Threads_boundedExecutor_java_lang_String_int_R_java_util_concurrent_ExecutorService, 0, "(Ljava/lang/String;I)Ljava/util/concurrent/ExecutorService;", 9 },
	{ "await", (intptr_t) SM_arc_util_Threads_await_java_util_concurrent_ExecutorService, 0, "(Ljava/util/concurrent/ExecutorService;)V", 9 },
	{ "sleep", (intptr_t) SM_arc_util_Threads_sleep_long, 0, "(J)V", 9 },
	{ "sleep", (intptr_t) SM_arc_util_Threads_sleep_long_int, 0, "(JI)V", 9 },
	{ "throwAppException", (intptr_t) SM_arc_util_Threads_throwAppException_java_lang_Throwable, 0, "(Ljava/lang/Throwable;)V", 9 },
	{ "thread", (intptr_t) SM_arc_util_Threads_thread_java_lang_Runnable_R_java_lang_Thread, 0, "(Ljava/lang/Runnable;)Ljava/lang/Thread;", 9 },
	{ "thread", (intptr_t) SM_arc_util_Threads_thread_java_lang_String_java_lang_Runnable_R_java_lang_Thread, 0, "(Ljava/lang/String;Ljava/lang/Runnable;)Ljava/lang/Thread;", 9 },
	{ "daemon", (intptr_t) SM_arc_util_Threads_daemon_java_lang_Runnable_R_java_lang_Thread, 0, "(Ljava/lang/Runnable;)Ljava/lang/Thread;", 9 },
	{ "daemon", (intptr_t) SM_arc_util_Threads_daemon_java_lang_String_java_lang_Runnable_R_java_lang_Thread, 0, "(Ljava/lang/String;Ljava/lang/Runnable;)Ljava/lang/Thread;", 9 },
	{ "newThread", (intptr_t) SM_arc_util_Threads_newThread_java_lang_Runnable_java_lang_String_boolean_R_java_lang_Thread, 0, "(Ljava/lang/Runnable;Ljava/lang/String;Z)Ljava/lang/Thread;", 10 },
	{ "lambda$newThread$0", (intptr_t) SM_arc_util_Threads_lambda$newThread$0_java_lang_Thread_java_lang_Throwable, 0, "(Ljava/lang/Thread;Ljava/lang/Throwable;)V", 4106 },
	{ "lambda$throwAppException$0", (intptr_t) SM_arc_util_Threads_lambda$throwAppException$0_java_lang_Throwable, 0, "(Ljava/lang/Throwable;)V", 4106 },
	{ "lambda$boundedExecutor$0", (intptr_t) SM_arc_util_Threads_lambda$boundedExecutor$0_java_lang_String_java_lang_Runnable_R_java_lang_Thread, 0, "(Ljava/lang/String;Ljava/lang/Runnable;)Ljava/lang/Thread;", 4106 },
	{ "lambda$unboundedExecutor$0", (intptr_t) SM_arc_util_Threads_lambda$unboundedExecutor$0_java_lang_String_java_lang_Runnable_R_java_lang_Thread, 0, "(Ljava/lang/String;Ljava/lang/Runnable;)Ljava/lang/Thread;", 4106 },
	{ "lambda$executor$1", (intptr_t) SM_arc_util_Threads_lambda$executor$1_java_lang_Runnable_R_java_lang_Thread, 0, "(Ljava/lang/Runnable;)Ljava/lang/Thread;", 4106 },
	{ "lambda$executor$0", (intptr_t) SM_arc_util_Threads_lambda$executor$0_java_lang_String_java_lang_Runnable_R_java_lang_Thread, 0, "(Ljava/lang/String;Ljava/lang/Runnable;)Ljava/lang/Thread;", 4106 },
};

Class class_arc_util_Threads{
		.nativeName = (intptr_t) "arc/util/Threads",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(arc_util_Threads),
		.classVtable = (intptr_t) vtable_arc_util_Threads,
		.staticInitializer = (intptr_t) clinit_arc_util_Threads,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_arc_util_Threads,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 33,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 0,
		.nativeFields = (intptr_t) nullptr,
		.methodCount = 27,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 11,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_arc_util_Threads = registerClass(&class_arc_util_Threads);

}
