#include "java/util/concurrent/ExecutorCompletionService_QueueingFuture.h"
#include "java/util/concurrent/FutureTask.h"
#include "java/lang/Object.h"
#include "java/util/concurrent/ExecutorCompletionService.h"
#include "java/util/concurrent/Future.h"
#include "java/util/concurrent/RunnableFuture.h"
#include "java/util/concurrent/BlockingQueue.h"
#include "java/util/concurrent/ExecutorCompletionService_QueueingFuture.h"
#include "java/lang/Runnable.h"

extern "C" {


void mark_java_util_concurrent_ExecutorCompletionService$QueueingFuture(jobject object, jint mark, jint depth) {
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
	auto self = (java_util_concurrent_ExecutorCompletionService$QueueingFuture *) object;
	if (self->F_task)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_task)->clazz)->markFunction)((jobject) self->F_task, mark, depth + 1);
	if (self->F_this$0)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_this$0)->clazz)->markFunction)((jobject) self->F_this$0, mark, depth + 1);
}

void clinit_java_util_concurrent_ExecutorCompletionService$QueueingFuture(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	clinit_java_util_concurrent_FutureTask(ctx);
}

void init_java_util_concurrent_ExecutorCompletionService$QueueingFuture_java_util_concurrent_ExecutorCompletionService_java_util_concurrent_RunnableFuture(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/concurrent/ExecutorCompletionService$QueueingFuture:<init>", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_util_concurrent_ExecutorCompletionService$QueueingFuture(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(116);
	((java_util_concurrent_ExecutorCompletionService$QueueingFuture *) NULL_CHECK((frame[0].o)))->F_this$0 = (jref) (frame[1].o);
	LINE_NUMBER(117);
	init_java_util_concurrent_FutureTask_java_lang_Runnable_java_lang_Object(ctx, (frame[0].o), (frame[2].o), (jobject(nullptr)));
	LINE_NUMBER(118);
	((java_util_concurrent_ExecutorCompletionService$QueueingFuture *) NULL_CHECK((frame[0].o)))->F_task = (jref) (frame[2].o);
	LINE_NUMBER(119);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_java_util_concurrent_ExecutorCompletionService$QueueingFuture_done(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/concurrent/ExecutorCompletionService$QueueingFuture:done", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(120);
	sp[0].o = (jobject)((java_util_concurrent_ExecutorCompletionService$QueueingFuture *) NULL_CHECK((frame[0].o)))->F_this$0;
	sp[0].o = (jobject)SM_java_util_concurrent_ExecutorCompletionService_access$000_java_util_concurrent_ExecutorCompletionService_R_java_util_concurrent_BlockingQueue(ctx, sp[0].o);
	sp[1].o = (jobject)((java_util_concurrent_ExecutorCompletionService$QueueingFuture *) NULL_CHECK((frame[0].o)))->F_task;
	jint temp0 = (jint)((func_java_util_concurrent_BlockingQueue_add_java_lang_Object_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_concurrent_BlockingQueue, INDEX_java_util_concurrent_BlockingQueue_add_java_lang_Object_R_boolean, sp[0].o))(ctx, sp[0].o, sp[1].o);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void *vtable_java_util_concurrent_ExecutorCompletionService$QueueingFuture[] {
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
	(void *) M_java_util_concurrent_ExecutorCompletionService$QueueingFuture_done,
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

static FieldMetadata fields[] {
	{ "task", &class_java_util_concurrent_Future, offsetof(java_util_concurrent_ExecutorCompletionService$QueueingFuture, F_task), "Ljava/util/concurrent/Future;", 18 },
	{ "this$0", &class_java_util_concurrent_ExecutorCompletionService, offsetof(java_util_concurrent_ExecutorCompletionService$QueueingFuture, F_this$0), "Ljava/util/concurrent/ExecutorCompletionService;", 4112 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_java_util_concurrent_ExecutorCompletionService$QueueingFuture_java_util_concurrent_ExecutorCompletionService_java_util_concurrent_RunnableFuture, 0, "(Ljava/util/concurrent/ExecutorCompletionService;Ljava/util/concurrent/RunnableFuture;)V", 0 },
	{ "done", (intptr_t) M_java_util_concurrent_ExecutorCompletionService$QueueingFuture_done, VTABLE_java_util_concurrent_ExecutorCompletionService$QueueingFuture_done, "()V", 4 },
};

Class class_java_util_concurrent_ExecutorCompletionService$QueueingFuture{
		.nativeName = (intptr_t) "java/util/concurrent/ExecutorCompletionService$QueueingFuture",
		.parentClass = (intptr_t) &class_java_util_concurrent_FutureTask,
		.size = sizeof(java_util_concurrent_ExecutorCompletionService$QueueingFuture),
		.classVtable = (intptr_t) vtable_java_util_concurrent_ExecutorCompletionService$QueueingFuture,
		.staticInitializer = (intptr_t) clinit_java_util_concurrent_ExecutorCompletionService$QueueingFuture,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_java_util_concurrent_ExecutorCompletionService$QueueingFuture,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) &class_java_util_concurrent_ExecutorCompletionService,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 32,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 2,
		.nativeFields = (intptr_t) fields,
		.methodCount = 2,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 26,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_java_util_concurrent_ExecutorCompletionService$QueueingFuture = registerClass(&class_java_util_concurrent_ExecutorCompletionService$QueueingFuture);

}

