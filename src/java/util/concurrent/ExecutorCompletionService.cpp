#include "java/util/concurrent/ExecutorCompletionService.h"
#include "java/util/concurrent/LinkedBlockingQueue.h"
#include "java/util/concurrent/TimeUnit.h"
#include "java/util/concurrent/AbstractExecutorService.h"
#include "java/util/concurrent/Future.h"
#include "java/util/concurrent/CompletionService.h"
#include "java/util/concurrent/Callable.h"
#include "java/util/concurrent/RunnableFuture.h"
#include "java/util/concurrent/Executor.h"
#include "java/util/concurrent/BlockingQueue.h"
#include "java/lang/Runnable.h"
#include "java/lang/Object.h"
#include "java/util/concurrent/FutureTask.h"
#include "java/util/Queue.h"
#include "java/util/concurrent/ExecutorCompletionService.h"
#include "java/lang/NullPointerException.h"
#include "java/util/concurrent/ExecutorCompletionService_QueueingFuture.h"

extern "C" {


void mark_java_util_concurrent_ExecutorCompletionService(jobject object, jint mark, jint depth) {
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
	auto self = (java_util_concurrent_ExecutorCompletionService *) object;
	if (self->F_executor)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_executor)->clazz)->markFunction)((jobject) self->F_executor, mark, depth + 1);
	if (self->F_aes)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_aes)->clazz)->markFunction)((jobject) self->F_aes, mark, depth + 1);
	if (self->F_completionQueue)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_completionQueue)->clazz)->markFunction)((jobject) self->F_completionQueue, mark, depth + 1);
}

void clinit_java_util_concurrent_ExecutorCompletionService(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
}

jobject M_java_util_concurrent_ExecutorCompletionService_newTaskFor_java_util_concurrent_Callable_R_java_util_concurrent_RunnableFuture(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/concurrent/ExecutorCompletionService:newTaskFor", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(125);
	sp[0].o = (jobject)((java_util_concurrent_ExecutorCompletionService *) NULL_CHECK((frame[0].o)))->F_aes;
	if (sp[0].o != nullptr) goto label_1;
	}
	{
	LINE_NUMBER(126);
	clinit_java_util_concurrent_FutureTask(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_util_concurrent_FutureTask);
	init_java_util_concurrent_FutureTask_java_util_concurrent_Callable(ctx, sp[0].o, (frame[1].o));
	popStackFrame(ctx);
	return sp[0].o;
	}
label_1:;
	{
	LINE_NUMBER(128);
	sp[0].o = (jobject)((java_util_concurrent_ExecutorCompletionService *) NULL_CHECK((frame[0].o)))->F_aes;
	sp[0].o = (jobject)((func_java_util_concurrent_AbstractExecutorService_newTaskFor_java_util_concurrent_Callable_R_java_util_concurrent_RunnableFuture) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_concurrent_AbstractExecutorService_newTaskFor_java_util_concurrent_Callable_R_java_util_concurrent_RunnableFuture])(ctx, sp[0].o, (frame[1].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_java_util_concurrent_ExecutorCompletionService_newTaskFor_java_lang_Runnable_java_lang_Object_R_java_util_concurrent_RunnableFuture(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/concurrent/ExecutorCompletionService:newTaskFor", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(132);
	sp[0].o = (jobject)((java_util_concurrent_ExecutorCompletionService *) NULL_CHECK((frame[0].o)))->F_aes;
	if (sp[0].o != nullptr) goto label_1;
	}
	{
	LINE_NUMBER(133);
	clinit_java_util_concurrent_FutureTask(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_util_concurrent_FutureTask);
	init_java_util_concurrent_FutureTask_java_lang_Runnable_java_lang_Object(ctx, sp[0].o, (frame[1].o), (frame[2].o));
	popStackFrame(ctx);
	return sp[0].o;
	}
label_1:;
	{
	LINE_NUMBER(135);
	sp[0].o = (jobject)((java_util_concurrent_ExecutorCompletionService *) NULL_CHECK((frame[0].o)))->F_aes;
	sp[0].o = (jobject)((func_java_util_concurrent_AbstractExecutorService_newTaskFor_java_lang_Runnable_java_lang_Object_R_java_util_concurrent_RunnableFuture) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_concurrent_AbstractExecutorService_newTaskFor_java_lang_Runnable_java_lang_Object_R_java_util_concurrent_RunnableFuture])(ctx, sp[0].o, (frame[1].o), (frame[2].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void init_java_util_concurrent_ExecutorCompletionService_java_util_concurrent_Executor(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/concurrent/ExecutorCompletionService:<init>", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_util_concurrent_ExecutorCompletionService(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(146);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(147);
	if ((frame[1].o) != nullptr) goto label_2;
	}
	{
	LINE_NUMBER(148);
	clinit_java_lang_NullPointerException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_NullPointerException);
	init_java_lang_NullPointerException(ctx, sp[0].o);
	throwException(ctx, sp[0].o);	}
label_2:;
	{
	LINE_NUMBER(149);
	((java_util_concurrent_ExecutorCompletionService *) NULL_CHECK((frame[0].o)))->F_executor = (jref) (frame[1].o);
	LINE_NUMBER(150);
	sp[0].o = frame[0].o;
	sp += 1;
	if ((isInstance(ctx, (frame[1].o), &class_java_util_concurrent_AbstractExecutorService)) == 0) goto label_5;
	}
	{
	LINE_NUMBER(151);
	sp[0].o = checkCast(ctx, &class_java_util_concurrent_AbstractExecutorService, (frame[1].o));
	sp += 1;
	goto label_7;
	}
label_5:;
	INST_ACONST_NULL();
label_7:;
	{
	sp -= 2;
	((java_util_concurrent_ExecutorCompletionService *) NULL_CHECK(sp[0].o))->F_aes = (jref) sp[1].o;
	LINE_NUMBER(152);
	sp[0].o = frame[0].o;
	clinit_java_util_concurrent_LinkedBlockingQueue(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_util_concurrent_LinkedBlockingQueue);
	init_java_util_concurrent_LinkedBlockingQueue(ctx, sp[1].o);
	((java_util_concurrent_ExecutorCompletionService *) NULL_CHECK(sp[0].o))->F_completionQueue = (jref) sp[1].o;
	LINE_NUMBER(153);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_java_util_concurrent_ExecutorCompletionService_java_util_concurrent_Executor_java_util_concurrent_BlockingQueue(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/concurrent/ExecutorCompletionService:<init>", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_util_concurrent_ExecutorCompletionService(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(169);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(170);
	if ((frame[1].o) == nullptr) goto label_2;
	}
	INST_ALOAD(2);
	if ((--sp)->o != nullptr) goto label_3;
label_2:;
	{
	LINE_NUMBER(171);
	clinit_java_lang_NullPointerException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_NullPointerException);
	init_java_lang_NullPointerException(ctx, sp[0].o);
	throwException(ctx, sp[0].o);	}
label_3:;
	{
	LINE_NUMBER(172);
	((java_util_concurrent_ExecutorCompletionService *) NULL_CHECK((frame[0].o)))->F_executor = (jref) (frame[1].o);
	LINE_NUMBER(173);
	sp[0].o = frame[0].o;
	sp += 1;
	if ((isInstance(ctx, (frame[1].o), &class_java_util_concurrent_AbstractExecutorService)) == 0) goto label_5;
	}
	{
	LINE_NUMBER(174);
	sp[0].o = checkCast(ctx, &class_java_util_concurrent_AbstractExecutorService, (frame[1].o));
	sp += 1;
	goto label_7;
	}
label_5:;
	INST_ACONST_NULL();
label_7:;
	{
	sp -= 2;
	((java_util_concurrent_ExecutorCompletionService *) NULL_CHECK(sp[0].o))->F_aes = (jref) sp[1].o;
	LINE_NUMBER(175);
	((java_util_concurrent_ExecutorCompletionService *) NULL_CHECK((frame[0].o)))->F_completionQueue = (jref) (frame[2].o);
	LINE_NUMBER(176);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_java_util_concurrent_ExecutorCompletionService_submit_java_util_concurrent_Callable_R_java_util_concurrent_Future(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/concurrent/ExecutorCompletionService:submit", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(179);
	if ((frame[1].o) != nullptr) goto label_1;
	}
	{
	clinit_java_lang_NullPointerException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_NullPointerException);
	init_java_lang_NullPointerException(ctx, sp[0].o);
	throwException(ctx, sp[0].o);	}
label_1:;
	{
	LINE_NUMBER(180);
	sp[0].o = (jobject)M_java_util_concurrent_ExecutorCompletionService_newTaskFor_java_util_concurrent_Callable_R_java_util_concurrent_RunnableFuture(ctx, (frame[0].o), (frame[1].o));
	frame[2].o = sp[0].o;
	LINE_NUMBER(181);
	sp[0].o = (jobject)((java_util_concurrent_ExecutorCompletionService *) NULL_CHECK((frame[0].o)))->F_executor;
	clinit_java_util_concurrent_ExecutorCompletionService$QueueingFuture(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_util_concurrent_ExecutorCompletionService$QueueingFuture);
	init_java_util_concurrent_ExecutorCompletionService$QueueingFuture_java_util_concurrent_ExecutorCompletionService_java_util_concurrent_RunnableFuture(ctx, sp[1].o, (frame[0].o), (frame[2].o));
	((func_java_util_concurrent_Executor_execute_java_lang_Runnable) resolveInterfaceMethod(ctx, &class_java_util_concurrent_Executor, INDEX_java_util_concurrent_Executor_execute_java_lang_Runnable, sp[0].o))(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(182);
	popStackFrame(ctx);
	return (frame[2].o);
	}

	popStackFrame(ctx);
}

jobject M_java_util_concurrent_ExecutorCompletionService_submit_java_lang_Runnable_java_lang_Object_R_java_util_concurrent_Future(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/concurrent/ExecutorCompletionService:submit", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(186);
	if ((frame[1].o) != nullptr) goto label_1;
	}
	{
	clinit_java_lang_NullPointerException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_NullPointerException);
	init_java_lang_NullPointerException(ctx, sp[0].o);
	throwException(ctx, sp[0].o);	}
label_1:;
	{
	LINE_NUMBER(187);
	sp[0].o = (jobject)M_java_util_concurrent_ExecutorCompletionService_newTaskFor_java_lang_Runnable_java_lang_Object_R_java_util_concurrent_RunnableFuture(ctx, (frame[0].o), (frame[1].o), (frame[2].o));
	frame[3].o = sp[0].o;
	LINE_NUMBER(188);
	sp[0].o = (jobject)((java_util_concurrent_ExecutorCompletionService *) NULL_CHECK((frame[0].o)))->F_executor;
	clinit_java_util_concurrent_ExecutorCompletionService$QueueingFuture(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_util_concurrent_ExecutorCompletionService$QueueingFuture);
	init_java_util_concurrent_ExecutorCompletionService$QueueingFuture_java_util_concurrent_ExecutorCompletionService_java_util_concurrent_RunnableFuture(ctx, sp[1].o, (frame[0].o), (frame[3].o));
	((func_java_util_concurrent_Executor_execute_java_lang_Runnable) resolveInterfaceMethod(ctx, &class_java_util_concurrent_Executor, INDEX_java_util_concurrent_Executor_execute_java_lang_Runnable, sp[0].o))(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(189);
	popStackFrame(ctx);
	return (frame[3].o);
	}

	popStackFrame(ctx);
}

jobject M_java_util_concurrent_ExecutorCompletionService_take_R_java_util_concurrent_Future(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/concurrent/ExecutorCompletionService:take", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(193);
	sp[0].o = (jobject)((java_util_concurrent_ExecutorCompletionService *) NULL_CHECK((frame[0].o)))->F_completionQueue;
	sp[0].o = (jobject)((func_java_util_concurrent_BlockingQueue_take_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_concurrent_BlockingQueue, INDEX_java_util_concurrent_BlockingQueue_take_R_java_lang_Object, sp[0].o))(ctx, sp[0].o);
	popStackFrame(ctx);
	return (checkCast(ctx, &class_java_util_concurrent_Future, sp[0].o));
	}

	popStackFrame(ctx);
}

jobject M_java_util_concurrent_ExecutorCompletionService_poll_R_java_util_concurrent_Future(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/concurrent/ExecutorCompletionService:poll", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(197);
	sp[0].o = (jobject)((java_util_concurrent_ExecutorCompletionService *) NULL_CHECK((frame[0].o)))->F_completionQueue;
	sp[0].o = (jobject)((func_java_util_Queue_poll_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Queue, INDEX_java_util_Queue_poll_R_java_lang_Object, sp[0].o))(ctx, sp[0].o);
	popStackFrame(ctx);
	return (checkCast(ctx, &class_java_util_concurrent_Future, sp[0].o));
	}

	popStackFrame(ctx);
}

jobject M_java_util_concurrent_ExecutorCompletionService_poll_long_java_util_concurrent_TimeUnit_R_java_util_concurrent_Future(jcontext ctx, jobject self, jlong param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/concurrent/ExecutorCompletionService:poll", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].l = param0;
	frame[3].o = param1;
	{
	LINE_NUMBER(202);
	sp[0].o = (jobject)((java_util_concurrent_ExecutorCompletionService *) NULL_CHECK((frame[0].o)))->F_completionQueue;
	sp[0].o = (jobject)((func_java_util_concurrent_BlockingQueue_poll_long_java_util_concurrent_TimeUnit_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_concurrent_BlockingQueue, INDEX_java_util_concurrent_BlockingQueue_poll_long_java_util_concurrent_TimeUnit_R_java_lang_Object, sp[0].o))(ctx, sp[0].o, (frame[1].l), (frame[3].o));
	popStackFrame(ctx);
	return (checkCast(ctx, &class_java_util_concurrent_Future, sp[0].o));
	}

	popStackFrame(ctx);
}

jobject SM_java_util_concurrent_ExecutorCompletionService_access$000_java_util_concurrent_ExecutorCompletionService_R_java_util_concurrent_BlockingQueue(jcontext ctx, jobject param0) {
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/concurrent/ExecutorCompletionService:access$000", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_util_concurrent_ExecutorCompletionService(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(107);
	sp[0].o = (jobject)((java_util_concurrent_ExecutorCompletionService *) NULL_CHECK((frame[0].o)))->F_completionQueue;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void *vtable_java_util_concurrent_ExecutorCompletionService[] {
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
	(void *) M_java_util_concurrent_ExecutorCompletionService_submit_java_util_concurrent_Callable_R_java_util_concurrent_Future,
	(void *) M_java_util_concurrent_ExecutorCompletionService_submit_java_lang_Runnable_java_lang_Object_R_java_util_concurrent_Future,
	(void *) M_java_util_concurrent_ExecutorCompletionService_take_R_java_util_concurrent_Future,
	(void *) M_java_util_concurrent_ExecutorCompletionService_poll_R_java_util_concurrent_Future,
	(void *) M_java_util_concurrent_ExecutorCompletionService_poll_long_java_util_concurrent_TimeUnit_R_java_util_concurrent_Future,
	(void *) M_java_util_concurrent_ExecutorCompletionService_newTaskFor_java_util_concurrent_Callable_R_java_util_concurrent_RunnableFuture,
	(void *) M_java_util_concurrent_ExecutorCompletionService_newTaskFor_java_lang_Runnable_java_lang_Object_R_java_util_concurrent_RunnableFuture,
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
	{ "submit", "(Ljava/util/concurrent/Callable;)Ljava/util/concurrent/Future;" },
	{ "submit", "(Ljava/lang/Runnable;Ljava/lang/Object;)Ljava/util/concurrent/Future;" },
	{ "take", "()Ljava/util/concurrent/Future;" },
	{ "poll", "()Ljava/util/concurrent/Future;" },
	{ "poll", "(JLjava/util/concurrent/TimeUnit;)Ljava/util/concurrent/Future;" },
	{ "newTaskFor", "(Ljava/util/concurrent/Callable;)Ljava/util/concurrent/RunnableFuture;" },
	{ "newTaskFor", "(Ljava/lang/Runnable;Ljava/lang/Object;)Ljava/util/concurrent/RunnableFuture;" },
};

static jclass interfaces[] { &class_java_util_concurrent_CompletionService, };

static jclass innerClasses[] {
	&class_java_util_concurrent_ExecutorCompletionService$QueueingFuture,
};

static FieldMetadata fields[] {
	{ "executor", &class_java_util_concurrent_Executor, offsetof(java_util_concurrent_ExecutorCompletionService, F_executor), "Ljava/util/concurrent/Executor;", 18 },
	{ "aes", &class_java_util_concurrent_AbstractExecutorService, offsetof(java_util_concurrent_ExecutorCompletionService, F_aes), "Ljava/util/concurrent/AbstractExecutorService;", 18 },
	{ "completionQueue", &class_java_util_concurrent_BlockingQueue, offsetof(java_util_concurrent_ExecutorCompletionService, F_completionQueue), "Ljava/util/concurrent/BlockingQueue;", 18 },
};

static MethodMetadata methods[] {
	{ "newTaskFor", (intptr_t) M_java_util_concurrent_ExecutorCompletionService_newTaskFor_java_util_concurrent_Callable_R_java_util_concurrent_RunnableFuture, VTABLE_java_util_concurrent_ExecutorCompletionService_newTaskFor_java_util_concurrent_Callable_R_java_util_concurrent_RunnableFuture, "(Ljava/util/concurrent/Callable;)Ljava/util/concurrent/RunnableFuture;", 2 },
	{ "newTaskFor", (intptr_t) M_java_util_concurrent_ExecutorCompletionService_newTaskFor_java_lang_Runnable_java_lang_Object_R_java_util_concurrent_RunnableFuture, VTABLE_java_util_concurrent_ExecutorCompletionService_newTaskFor_java_lang_Runnable_java_lang_Object_R_java_util_concurrent_RunnableFuture, "(Ljava/lang/Runnable;Ljava/lang/Object;)Ljava/util/concurrent/RunnableFuture;", 2 },
	{ "<init>", (intptr_t) init_java_util_concurrent_ExecutorCompletionService_java_util_concurrent_Executor, 0, "(Ljava/util/concurrent/Executor;)V", 1 },
	{ "<init>", (intptr_t) init_java_util_concurrent_ExecutorCompletionService_java_util_concurrent_Executor_java_util_concurrent_BlockingQueue, 0, "(Ljava/util/concurrent/Executor;Ljava/util/concurrent/BlockingQueue;)V", 1 },
	{ "submit", (intptr_t) M_java_util_concurrent_ExecutorCompletionService_submit_java_util_concurrent_Callable_R_java_util_concurrent_Future, VTABLE_java_util_concurrent_ExecutorCompletionService_submit_java_util_concurrent_Callable_R_java_util_concurrent_Future, "(Ljava/util/concurrent/Callable;)Ljava/util/concurrent/Future;", 1 },
	{ "submit", (intptr_t) M_java_util_concurrent_ExecutorCompletionService_submit_java_lang_Runnable_java_lang_Object_R_java_util_concurrent_Future, VTABLE_java_util_concurrent_ExecutorCompletionService_submit_java_lang_Runnable_java_lang_Object_R_java_util_concurrent_Future, "(Ljava/lang/Runnable;Ljava/lang/Object;)Ljava/util/concurrent/Future;", 1 },
	{ "take", (intptr_t) M_java_util_concurrent_ExecutorCompletionService_take_R_java_util_concurrent_Future, VTABLE_java_util_concurrent_ExecutorCompletionService_take_R_java_util_concurrent_Future, "()Ljava/util/concurrent/Future;", 1 },
	{ "poll", (intptr_t) M_java_util_concurrent_ExecutorCompletionService_poll_R_java_util_concurrent_Future, VTABLE_java_util_concurrent_ExecutorCompletionService_poll_R_java_util_concurrent_Future, "()Ljava/util/concurrent/Future;", 1 },
	{ "poll", (intptr_t) M_java_util_concurrent_ExecutorCompletionService_poll_long_java_util_concurrent_TimeUnit_R_java_util_concurrent_Future, VTABLE_java_util_concurrent_ExecutorCompletionService_poll_long_java_util_concurrent_TimeUnit_R_java_util_concurrent_Future, "(JLjava/util/concurrent/TimeUnit;)Ljava/util/concurrent/Future;", 1 },
	{ "access$000", (intptr_t) SM_java_util_concurrent_ExecutorCompletionService_access$000_java_util_concurrent_ExecutorCompletionService_R_java_util_concurrent_BlockingQueue, 0, "(Ljava/util/concurrent/ExecutorCompletionService;)Ljava/util/concurrent/BlockingQueue;", 4104 },
};

Class class_java_util_concurrent_ExecutorCompletionService{
		.nativeName = (intptr_t) "java/util/concurrent/ExecutorCompletionService",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(java_util_concurrent_ExecutorCompletionService),
		.classVtable = (intptr_t) vtable_java_util_concurrent_ExecutorCompletionService,
		.staticInitializer = (intptr_t) clinit_java_util_concurrent_ExecutorCompletionService,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_java_util_concurrent_ExecutorCompletionService,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 1,
		.nativeInnerClasses = (intptr_t) innerClasses,
		.access = 33,
		.interfaceCount = 1,
		.nativeInterfaces = (intptr_t) interfaces,
		.fieldCount = 3,
		.nativeFields = (intptr_t) fields,
		.methodCount = 10,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 18,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_java_util_concurrent_ExecutorCompletionService = registerClass(&class_java_util_concurrent_ExecutorCompletionService);

}
