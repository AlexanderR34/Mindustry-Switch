#include "java/util/concurrent/CompletableFuture.h"
#include "java/util/concurrent/CompletableFuture_BiApply.h"
#include "java/lang/StringBuilder.h"
#include "java/util/concurrent/CompletableFuture_UniCompletion.h"
#include "java/util/concurrent/CompletableFuture.h"
#include "java/util/concurrent/Future.h"
#include "java/util/concurrent/CompletableFuture_DelayedCompleter.h"
#include "java/lang/Runnable.h"
#include "java/util/concurrent/CompletableFuture_Canceller.h"
#include "java/util/concurrent/CompletableFuture_CoCompletion.h"
#include "java/util/concurrent/CompletionException.h"
#include "java/lang/Throwable.h"
#include "java/lang/Thread.h"
#include "java/util/concurrent/CompletableFuture_UniApply.h"
#include "java/util/concurrent/CompletableFuture_OrRun.h"
#include "java/util/concurrent/CompletableFuture_Timeout.h"
#include "java/util/concurrent/CompletableFuture_UniExceptionally.h"
#include "java/util/concurrent/CompletableFuture_Completion.h"
#include "java/util/concurrent/CompletableFuture_UniRun.h"
#include "java/util/concurrent/CompletableFuture_UniCompose.h"
#include "java/util/concurrent/CompletableFuture_Signaller.h"
#include "java/util/concurrent/CompletableFuture_UniRelay.h"
#include "java/lang/Object.h"
#include "java/util/concurrent/CancellationException.h"
#include "java/util/concurrent/ScheduledFuture.h"
#include "java/util/concurrent/TimeoutException.h"
#include "java/util/concurrent/ForkJoinPool.h"
#include "java/util/concurrent/CompletableFuture_AnyOf.h"
#include "java/lang/System.h"
#include "java/util/concurrent/CompletionStage.h"
#include "java/util/concurrent/ExecutionException.h"
#include "java/util/concurrent/CompletableFuture_BiCompletion.h"
#include "java/util/concurrent/CompletableFuture_MinimalStage.h"
#include "java/lang/InterruptedException.h"
#include "java/util/concurrent/CompletableFuture_BiRelay.h"
#include "java/util/concurrent/CompletableFuture_BiRun.h"
#include "java/util/concurrent/ForkJoinWorkerThread.h"
#include "java/lang/String.h"
#include "java/util/concurrent/CompletableFuture_AsyncSupply.h"
#include "java/lang/NullPointerException.h"
#include "java/util/concurrent/CompletableFuture_OrApply.h"
#include "java/util/concurrent/CompletableFuture_DelayedExecutor.h"
#include "java/util/concurrent/ForkJoinPool_ManagedBlocker.h"
#include "java/util/concurrent/CompletableFuture_OrAccept.h"
#include "java/util/function/Function.h"
#include "java/util/concurrent/CompletableFuture_TaskSubmitter.h"
#include "java/util/concurrent/TimeUnit.h"
#include "java/util/function/Consumer.h"
#include "java/util/concurrent/CompletableFuture_UniWhenComplete.h"
#include "java/util/concurrent/Executor.h"
#include "java/util/concurrent/CompletableFuture_BiAccept.h"
#include "java/util/concurrent/CompletableFuture_UniHandle.h"
#include "java/util/concurrent/CompletableFuture_AsynchronousCompletionTask.h"
#include "java/util/concurrent/CompletableFuture_ThreadPerTaskExecutor.h"
#include "java/util/function/Supplier.h"
#include "java/util/function/BiConsumer.h"
#include "java/util/concurrent/CompletableFuture_AsyncRun.h"
#include "java/util/concurrent/CompletableFuture_Delayer.h"
#include "java/util/concurrent/CompletableFuture_AltResult.h"
#include "java/util/concurrent/CompletableFuture_UniAccept.h"
#include "java/util/function/BiFunction.h"

extern "C" {

jobject SF_java_util_concurrent_CompletableFuture_NIL;
jbool SF_java_util_concurrent_CompletableFuture_USE_COMMON_POOL;
jobject SF_java_util_concurrent_CompletableFuture_ASYNC_POOL;
jint SF_java_util_concurrent_CompletableFuture_SYNC;
jint SF_java_util_concurrent_CompletableFuture_ASYNC;
jint SF_java_util_concurrent_CompletableFuture_NESTED;

void mark_java_util_concurrent_CompletableFuture(jobject object, jint mark, jint depth) {
	if (!object) {
		if (SF_java_util_concurrent_CompletableFuture_NIL)
			((gc_mark_ptr) ((jclass) ((jobject) SF_java_util_concurrent_CompletableFuture_NIL)->clazz)->markFunction)((jobject) SF_java_util_concurrent_CompletableFuture_NIL, mark, depth + 1);
		if (SF_java_util_concurrent_CompletableFuture_ASYNC_POOL)
			((gc_mark_ptr) ((jclass) ((jobject) SF_java_util_concurrent_CompletableFuture_ASYNC_POOL)->clazz)->markFunction)((jobject) SF_java_util_concurrent_CompletableFuture_ASYNC_POOL, mark, depth + 1);
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
	auto self = (java_util_concurrent_CompletableFuture *) object;
	if (self->F_result)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_result)->clazz)->markFunction)((jobject) self->F_result, mark, depth + 1);
	if (self->F_stack)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_stack)->clazz)->markFunction)((jobject) self->F_stack, mark, depth + 1);
}

jbool M_java_util_concurrent_CompletableFuture_internalComplete_java_lang_Object_R_boolean(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/concurrent/CompletableFuture:internalComplete", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, self);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(268);
	sp[0].o = (jobject)((java_util_concurrent_CompletableFuture *) NULL_CHECK((frame[0].o)))->F_result;
	if (sp[0].o == nullptr) goto label_1;
	}
	{
	LINE_NUMBER(269);
	popStackFrame(ctx, self);
	return (jint(0));
	}
label_1:;
	{
	LINE_NUMBER(270);
	((java_util_concurrent_CompletableFuture *) NULL_CHECK((frame[0].o)))->F_result = (jref) (frame[1].o);
	LINE_NUMBER(271);
	popStackFrame(ctx, self);
	return (jint(1));
	}

	popStackFrame(ctx);
}

jbool M_java_util_concurrent_CompletableFuture_tryPushStack_java_util_concurrent_CompletableFuture$Completion_R_boolean(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/concurrent/CompletableFuture:tryPushStack", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, self);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(276);
	sp[0].o = (jobject)((java_util_concurrent_CompletableFuture *) NULL_CHECK((frame[0].o)))->F_stack;
	frame[2].o = sp[0].o;
	LINE_NUMBER(277);
	((java_util_concurrent_CompletableFuture$Completion *) NULL_CHECK((frame[1].o)))->F_next = (jref) (frame[2].o);
	LINE_NUMBER(278);
	sp[0].o = (jobject)((java_util_concurrent_CompletableFuture *) NULL_CHECK((frame[0].o)))->F_stack;
	if (sp[0].o == (frame[2].o)) goto label_3;
	}
	{
	LINE_NUMBER(279);
	popStackFrame(ctx, self);
	return (jint(0));
	}
label_3:;
	{
	LINE_NUMBER(280);
	((java_util_concurrent_CompletableFuture *) NULL_CHECK((frame[0].o)))->F_stack = (jref) (frame[1].o);
	LINE_NUMBER(281);
	popStackFrame(ctx, self);
	return (jint(1));
	}

	popStackFrame(ctx);
}

void M_java_util_concurrent_CompletableFuture_pushStack_java_util_concurrent_CompletableFuture$Completion(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/concurrent/CompletableFuture:pushStack", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
label_0:;
	{
	LINE_NUMBER(286);
	jint temp0 = (jint)((func_java_util_concurrent_CompletableFuture_tryPushStack_java_util_concurrent_CompletableFuture$Completion_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_util_concurrent_CompletableFuture_tryPushStack_java_util_concurrent_CompletableFuture$Completion_R_boolean])(ctx, (frame[0].o), (frame[1].o));
	if (temp0 == 0) goto label_0;
	}
	LINE_NUMBER(287);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jbool M_java_util_concurrent_CompletableFuture_completeNull_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/concurrent/CompletableFuture:completeNull", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, self);

	frame[0].o = self;
	{
	LINE_NUMBER(301);
	sp[0].o = (jobject)((java_util_concurrent_CompletableFuture *) NULL_CHECK((frame[0].o)))->F_result;
	if (sp[0].o == nullptr) goto label_1;
	}
	{
	LINE_NUMBER(302);
	popStackFrame(ctx, self);
	return (jint(0));
	}
label_1:;
	{
	LINE_NUMBER(303);
	sp[0].o = frame[0].o;
	clinit_java_util_concurrent_CompletableFuture(ctx);
	sp[1].o = (jobject)SF_java_util_concurrent_CompletableFuture_NIL;
	((java_util_concurrent_CompletableFuture *) NULL_CHECK(sp[0].o))->F_result = (jref) sp[1].o;
	LINE_NUMBER(304);
	popStackFrame(ctx, self);
	return (jint(1));
	}

	popStackFrame(ctx);
}

jobject M_java_util_concurrent_CompletableFuture_encodeValue_java_lang_Object_R_java_lang_Object(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/concurrent/CompletableFuture:encodeValue", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(309);
	if ((frame[1].o) != nullptr) goto label_1;
	}
	clinit_java_util_concurrent_CompletableFuture(ctx);
	(sp++)->o = SF_java_util_concurrent_CompletableFuture_NIL;
	goto label_2;
label_1:;
	INST_ALOAD(1);
label_2:;
	popStackFrame(ctx);
	INST_ARETURN();

	popStackFrame(ctx);
}

jbool M_java_util_concurrent_CompletableFuture_completeValue_java_lang_Object_R_boolean(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/concurrent/CompletableFuture:completeValue", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, self);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(314);
	sp[0].o = (jobject)((java_util_concurrent_CompletableFuture *) NULL_CHECK((frame[0].o)))->F_result;
	if (sp[0].o == nullptr) goto label_1;
	}
	{
	LINE_NUMBER(315);
	popStackFrame(ctx, self);
	return (jint(0));
	}
label_1:;
	{
	LINE_NUMBER(316);
	sp[0].o = frame[0].o;
	sp += 1;
	if ((frame[1].o) != nullptr) goto label_3;
	}
	clinit_java_util_concurrent_CompletableFuture(ctx);
	(sp++)->o = SF_java_util_concurrent_CompletableFuture_NIL;
	goto label_4;
label_3:;
	INST_ALOAD(1);
label_4:;
	{
	sp -= 2;
	((java_util_concurrent_CompletableFuture *) NULL_CHECK(sp[0].o))->F_result = (jref) sp[1].o;
	LINE_NUMBER(317);
	popStackFrame(ctx, self);
	return (jint(1));
	}

	popStackFrame(ctx);
}

jobject SM_java_util_concurrent_CompletableFuture_encodeThrowable_java_lang_Throwable_R_java_util_concurrent_CompletableFuture$AltResult(jcontext ctx, jobject param0) {
	jtype frame[6];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/concurrent/CompletableFuture:encodeThrowable", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_util_concurrent_CompletableFuture(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(325);
	clinit_java_util_concurrent_CompletableFuture$AltResult(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_util_concurrent_CompletableFuture$AltResult);
	sp[1].o = sp[0].o;
	sp += 2;
	if ((isInstance(ctx, (frame[0].o), &class_java_util_concurrent_CompletionException)) == 0) goto label_1;
	}
	INST_ALOAD(0);
	goto label_2;
label_1:;
	{
	LINE_NUMBER(326);
	clinit_java_util_concurrent_CompletionException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_util_concurrent_CompletionException);
	init_java_util_concurrent_CompletionException_java_lang_Throwable(ctx, sp[0].o, (frame[0].o));
	sp += 1;
	}
label_2:;
	{
	sp -= 3;
	init_java_util_concurrent_CompletableFuture$AltResult_java_lang_Throwable(ctx, sp[0].o, sp[2].o);
	LINE_NUMBER(325);
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jbool M_java_util_concurrent_CompletableFuture_completeThrowable_java_lang_Throwable_R_boolean(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/concurrent/CompletableFuture:completeThrowable", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, self);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(331);
	sp[0].o = (jobject)((java_util_concurrent_CompletableFuture *) NULL_CHECK((frame[0].o)))->F_result;
	if (sp[0].o == nullptr) goto label_1;
	}
	{
	LINE_NUMBER(332);
	popStackFrame(ctx, self);
	return (jint(0));
	}
label_1:;
	{
	LINE_NUMBER(333);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)SM_java_util_concurrent_CompletableFuture_encodeThrowable_java_lang_Throwable_R_java_util_concurrent_CompletableFuture$AltResult(ctx, (frame[1].o));
	((java_util_concurrent_CompletableFuture *) NULL_CHECK(sp[0].o))->F_result = (jref) sp[1].o;
	LINE_NUMBER(334);
	popStackFrame(ctx, self);
	return (jint(1));
	}

	popStackFrame(ctx);
}

jobject SM_java_util_concurrent_CompletableFuture_encodeThrowable_java_lang_Throwable_java_lang_Object_R_java_lang_Object(jcontext ctx, jobject param0, jobject param1) {
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/concurrent/CompletableFuture:encodeThrowable", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_util_concurrent_CompletableFuture(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	{
	LINE_NUMBER(345);
	if ((isInstance(ctx, (frame[0].o), &class_java_util_concurrent_CompletionException)) != 0) goto label_1;
	}
	{
	LINE_NUMBER(346);
	clinit_java_util_concurrent_CompletionException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_util_concurrent_CompletionException);
	init_java_util_concurrent_CompletionException_java_lang_Throwable(ctx, sp[0].o, (frame[0].o));
	frame[0].o = sp[0].o;
	goto label_3;
	}
label_1:;
	{
	LINE_NUMBER(347);
	if ((isInstance(ctx, (frame[1].o), &class_java_util_concurrent_CompletableFuture$AltResult)) == 0) goto label_3;
	}
	{
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((java_util_concurrent_CompletableFuture$AltResult *) NULL_CHECK((checkCast(ctx, &class_java_util_concurrent_CompletableFuture$AltResult, (frame[1].o)))))->F_ex;
	if (sp[0].o != sp[1].o) goto label_3;
	}
	{
	LINE_NUMBER(348);
	popStackFrame(ctx);
	return (frame[1].o);
	}
label_3:;
	{
	LINE_NUMBER(349);
	clinit_java_util_concurrent_CompletableFuture$AltResult(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_util_concurrent_CompletableFuture$AltResult);
	init_java_util_concurrent_CompletableFuture$AltResult_java_lang_Throwable(ctx, sp[0].o, (frame[0].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jbool M_java_util_concurrent_CompletableFuture_completeThrowable_java_lang_Throwable_java_lang_Object_R_boolean(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/concurrent/CompletableFuture:completeThrowable", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, self);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(361);
	sp[0].o = (jobject)((java_util_concurrent_CompletableFuture *) NULL_CHECK((frame[0].o)))->F_result;
	if (sp[0].o == nullptr) goto label_1;
	}
	{
	LINE_NUMBER(362);
	popStackFrame(ctx, self);
	return (jint(0));
	}
label_1:;
	{
	LINE_NUMBER(363);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)SM_java_util_concurrent_CompletableFuture_encodeThrowable_java_lang_Throwable_java_lang_Object_R_java_lang_Object(ctx, (frame[1].o), (frame[2].o));
	((java_util_concurrent_CompletableFuture *) NULL_CHECK(sp[0].o))->F_result = (jref) sp[1].o;
	LINE_NUMBER(364);
	popStackFrame(ctx, self);
	return (jint(1));
	}

	popStackFrame(ctx);
}

jobject M_java_util_concurrent_CompletableFuture_encodeOutcome_java_lang_Object_java_lang_Throwable_R_java_lang_Object(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/concurrent/CompletableFuture:encodeOutcome", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(373);
	if ((frame[2].o) != nullptr) goto label_1;
	}
	INST_ALOAD(1);
	if ((--sp)->o != nullptr) goto label_2;
	clinit_java_util_concurrent_CompletableFuture(ctx);
	(sp++)->o = SF_java_util_concurrent_CompletableFuture_NIL;
	goto label_3;
label_2:;
	INST_ALOAD(1);
	goto label_3;
label_1:;
	INST_ALOAD(2);
	POP_N(1); // Pop method args
	sp->o = (jobject)SM_java_util_concurrent_CompletableFuture_encodeThrowable_java_lang_Throwable_R_java_util_concurrent_CompletableFuture$AltResult(ctx, sp[0].o);
	sp++;
label_3:;
	popStackFrame(ctx);
	INST_ARETURN();

	popStackFrame(ctx);
}

jobject SM_java_util_concurrent_CompletableFuture_encodeRelay_java_lang_Object_R_java_lang_Object(jcontext ctx, jobject param0) {
	jtype frame[7];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/concurrent/CompletableFuture:encodeRelay", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_util_concurrent_CompletableFuture(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(382);
	if ((isInstance(ctx, (frame[0].o), &class_java_util_concurrent_CompletableFuture$AltResult)) == 0) goto label_1;
	}
	{
	sp[0].o = (jobject)((java_util_concurrent_CompletableFuture$AltResult *) NULL_CHECK((checkCast(ctx, &class_java_util_concurrent_CompletableFuture$AltResult, (frame[0].o)))))->F_ex;
	frame[1].o = sp[0].o;
	if (sp[0].o == nullptr) goto label_1;
	}
	{
	if ((isInstance(ctx, (frame[1].o), &class_java_util_concurrent_CompletionException)) != 0) goto label_1;
	}
	{
	LINE_NUMBER(385);
	clinit_java_util_concurrent_CompletableFuture$AltResult(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_util_concurrent_CompletableFuture$AltResult);
	clinit_java_util_concurrent_CompletionException(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_util_concurrent_CompletionException);
	init_java_util_concurrent_CompletionException_java_lang_Throwable(ctx, sp[1].o, (frame[1].o));
	init_java_util_concurrent_CompletableFuture$AltResult_java_lang_Throwable(ctx, sp[0].o, sp[1].o);
	frame[0].o = sp[0].o;
	}
label_1:;
	{
	LINE_NUMBER(386);
	popStackFrame(ctx);
	return (frame[0].o);
	}

	popStackFrame(ctx);
}

jbool M_java_util_concurrent_CompletableFuture_completeRelay_java_lang_Object_R_boolean(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/concurrent/CompletableFuture:completeRelay", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, self);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(394);
	sp[0].o = (jobject)((java_util_concurrent_CompletableFuture *) NULL_CHECK((frame[0].o)))->F_result;
	if (sp[0].o == nullptr) goto label_1;
	}
	{
	LINE_NUMBER(395);
	popStackFrame(ctx, self);
	return (jint(0));
	}
label_1:;
	{
	LINE_NUMBER(396);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)SM_java_util_concurrent_CompletableFuture_encodeRelay_java_lang_Object_R_java_lang_Object(ctx, (frame[1].o));
	((java_util_concurrent_CompletableFuture *) NULL_CHECK(sp[0].o))->F_result = (jref) sp[1].o;
	LINE_NUMBER(397);
	popStackFrame(ctx, self);
	return (jint(1));
	}

	popStackFrame(ctx);
}

jobject SM_java_util_concurrent_CompletableFuture_reportGet_java_lang_Object_R_java_lang_Object(jcontext ctx, jobject param0) {
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/concurrent/CompletableFuture:reportGet", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_util_concurrent_CompletableFuture(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(405);
	if ((frame[0].o) != nullptr) goto label_1;
	}
	{
	LINE_NUMBER(406);
	clinit_java_lang_InterruptedException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_InterruptedException);
	init_java_lang_InterruptedException(ctx, sp[0].o);
	throwException(ctx, sp[0].o);	}
label_1:;
	{
	LINE_NUMBER(407);
	if ((isInstance(ctx, (frame[0].o), &class_java_util_concurrent_CompletableFuture$AltResult)) == 0) goto label_3;
	}
	{
	LINE_NUMBER(409);
	sp[0].o = (jobject)((java_util_concurrent_CompletableFuture$AltResult *) NULL_CHECK((checkCast(ctx, &class_java_util_concurrent_CompletableFuture$AltResult, (frame[0].o)))))->F_ex;
	frame[1].o = sp[0].o;
	if (sp[0].o != nullptr) goto label_6;
	}
	{
	LINE_NUMBER(410);
	popStackFrame(ctx);
	return (jobject(nullptr));
	}
label_6:;
	{
	LINE_NUMBER(411);
	if ((isInstance(ctx, (frame[1].o), &class_java_util_concurrent_CancellationException)) == 0) goto label_8;
	}
	{
	LINE_NUMBER(412);
	throwException(ctx, (checkCast(ctx, &class_java_util_concurrent_CancellationException, (frame[1].o))));	}
label_8:;
	{
	LINE_NUMBER(413);
	if ((isInstance(ctx, (frame[1].o), &class_java_util_concurrent_CompletionException)) == 0) goto label_10;
	}
	{
	sp[0].o = frame[1].o;
	LINE_NUMBER(414);
	sp[0].o = (jobject)((func_java_lang_Throwable_getCause_R_java_lang_Throwable) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_Throwable_getCause_R_java_lang_Throwable])(ctx, sp[0].o);
	frame[2].o = sp[0].o;
	if (sp[0].o == nullptr) goto label_10;
	}
	{
	LINE_NUMBER(415);
	frame[1].o = (frame[2].o);
	}
label_10:;
	{
	LINE_NUMBER(416);
	clinit_java_util_concurrent_ExecutionException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_util_concurrent_ExecutionException);
	init_java_util_concurrent_ExecutionException_java_lang_Throwable(ctx, sp[0].o, (frame[1].o));
	throwException(ctx, sp[0].o);	}
label_3:;
	{
	LINE_NUMBER(418);
	popStackFrame(ctx);
	return (frame[0].o);
	}

	popStackFrame(ctx);
}

jobject SM_java_util_concurrent_CompletableFuture_reportJoin_java_lang_Object_R_java_lang_Object(jcontext ctx, jobject param0) {
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/concurrent/CompletableFuture:reportJoin", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_util_concurrent_CompletableFuture(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(425);
	if ((isInstance(ctx, (frame[0].o), &class_java_util_concurrent_CompletableFuture$AltResult)) == 0) goto label_1;
	}
	{
	LINE_NUMBER(427);
	sp[0].o = (jobject)((java_util_concurrent_CompletableFuture$AltResult *) NULL_CHECK((checkCast(ctx, &class_java_util_concurrent_CompletableFuture$AltResult, (frame[0].o)))))->F_ex;
	frame[1].o = sp[0].o;
	if (sp[0].o != nullptr) goto label_4;
	}
	{
	LINE_NUMBER(428);
	popStackFrame(ctx);
	return (jobject(nullptr));
	}
label_4:;
	{
	LINE_NUMBER(429);
	if ((isInstance(ctx, (frame[1].o), &class_java_util_concurrent_CancellationException)) == 0) goto label_6;
	}
	{
	LINE_NUMBER(430);
	throwException(ctx, (checkCast(ctx, &class_java_util_concurrent_CancellationException, (frame[1].o))));	}
label_6:;
	{
	LINE_NUMBER(431);
	if ((isInstance(ctx, (frame[1].o), &class_java_util_concurrent_CompletionException)) == 0) goto label_8;
	}
	{
	LINE_NUMBER(432);
	throwException(ctx, (checkCast(ctx, &class_java_util_concurrent_CompletionException, (frame[1].o))));	}
label_8:;
	{
	LINE_NUMBER(433);
	clinit_java_util_concurrent_CompletionException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_util_concurrent_CompletionException);
	init_java_util_concurrent_CompletionException_java_lang_Throwable(ctx, sp[0].o, (frame[1].o));
	throwException(ctx, sp[0].o);	}
label_1:;
	{
	LINE_NUMBER(435);
	popStackFrame(ctx);
	return (frame[0].o);
	}

	popStackFrame(ctx);
}

jobject SM_java_util_concurrent_CompletableFuture_screenExecutor_java_util_concurrent_Executor_R_java_util_concurrent_Executor(jcontext ctx, jobject param0) {
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/concurrent/CompletableFuture:screenExecutor", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_util_concurrent_CompletableFuture(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(470);
	if ((clinit_java_util_concurrent_CompletableFuture(ctx), (jint)SF_java_util_concurrent_CompletableFuture_USE_COMMON_POOL) != 0) goto label_1;
	}
	{
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)SM_java_util_concurrent_ForkJoinPool_commonPool_R_java_util_concurrent_ForkJoinPool(ctx);
	if (sp[0].o != sp[1].o) goto label_1;
	}
	{
	LINE_NUMBER(471);
	clinit_java_util_concurrent_CompletableFuture(ctx);
	sp[0].o = (jobject)SF_java_util_concurrent_CompletableFuture_ASYNC_POOL;
	popStackFrame(ctx);
	return sp[0].o;
	}
label_1:;
	{
	LINE_NUMBER(472);
	if ((frame[0].o) != nullptr) goto label_3;
	}
	{
	clinit_java_lang_NullPointerException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_NullPointerException);
	init_java_lang_NullPointerException(ctx, sp[0].o);
	throwException(ctx, sp[0].o);	}
label_3:;
	{
	LINE_NUMBER(473);
	popStackFrame(ctx);
	return (frame[0].o);
	}

	popStackFrame(ctx);
}

void M_java_util_concurrent_CompletableFuture_postComplete(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/concurrent/CompletableFuture:postComplete", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, self);

	frame[0].o = self;
	{
	LINE_NUMBER(515);
	frame[1].o = (frame[0].o);
	}
label_1:;
	{
	LINE_NUMBER(516);
	sp[0].o = (jobject)((java_util_concurrent_CompletableFuture *) NULL_CHECK((frame[1].o)))->F_stack;
	frame[2].o = sp[0].o;
	if (sp[0].o != nullptr) goto label_3;
	}
	{
	if ((frame[1].o) == (frame[0].o)) goto label_4;
	}
	{
	sp[0].o = frame[0].o;
	frame[1].o = sp[0].o;
	sp[0].o = (jobject)((java_util_concurrent_CompletableFuture *) NULL_CHECK(sp[0].o))->F_stack;
	frame[2].o = sp[0].o;
	if (sp[0].o == nullptr) goto label_4;
	}
label_3:;
	{
	LINE_NUMBER(519);
	sp[0].o = (jobject)((java_util_concurrent_CompletableFuture *) NULL_CHECK((frame[1].o)))->F_stack;
	if (sp[0].o != (frame[2].o)) goto label_5;
	}
	{
	LINE_NUMBER(520);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((java_util_concurrent_CompletableFuture$Completion *) NULL_CHECK((frame[2].o)))->F_next;
	frame[4].o = sp[1].o;
	((java_util_concurrent_CompletableFuture *) NULL_CHECK(sp[0].o))->F_stack = (jref) sp[1].o;
	LINE_NUMBER(521);
	if ((frame[4].o) == nullptr) goto label_9;
	}
	{
	LINE_NUMBER(522);
	if ((frame[1].o) == (frame[0].o)) goto label_11;
	}
	{
	LINE_NUMBER(523);
	((func_java_util_concurrent_CompletableFuture_pushStack_java_util_concurrent_CompletableFuture$Completion) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_util_concurrent_CompletableFuture_pushStack_java_util_concurrent_CompletableFuture$Completion])(ctx, (frame[0].o), (frame[2].o));
	LINE_NUMBER(524);
	goto label_1;
	}
label_11:;
	{
	LINE_NUMBER(526);
	sp[0].o = (jobject)((java_util_concurrent_CompletableFuture$Completion *) NULL_CHECK((frame[2].o)))->F_next;
	if (sp[0].o != (frame[4].o)) goto label_9;
	}
	{
	LINE_NUMBER(527);
	((java_util_concurrent_CompletableFuture$Completion *) NULL_CHECK((frame[2].o)))->F_next = (jref) (jobject(nullptr));
	}
label_9:;
	{
	LINE_NUMBER(529);
	sp[0].o = (jobject)((func_java_util_concurrent_CompletableFuture$Completion_tryFire_int_R_java_util_concurrent_CompletableFuture) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_java_util_concurrent_CompletableFuture$Completion_tryFire_int_R_java_util_concurrent_CompletableFuture])(ctx, (frame[2].o), (jint(-1)));
	frame[3].o = sp[0].o;
	if (sp[0].o != nullptr) goto label_16;
	}
	INST_ALOAD(0);
	goto label_17;
label_16:;
	INST_ALOAD(3);
label_17:;
	INST_ASTORE(1);
label_5:;
	LINE_NUMBER(531);
	goto label_1;
label_4:;
	LINE_NUMBER(532);
	popStackFrame(ctx, self);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_java_util_concurrent_CompletableFuture_cleanStack(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/concurrent/CompletableFuture:cleanStack", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, self);

	frame[0].o = self;
	{
	LINE_NUMBER(536);
	sp[0].o = (jobject)((java_util_concurrent_CompletableFuture *) NULL_CHECK((frame[0].o)))->F_stack;
	frame[1].o = sp[0].o;
	LINE_NUMBER(538);
	frame[2].i = (jint(0));
	}
label_2:;
	{
	LINE_NUMBER(539);
	if ((frame[1].o) != nullptr) goto label_3;
	}
	LINE_NUMBER(540);
	popStackFrame(ctx, self);
	INST_RETURN();
label_3:;
	{
	LINE_NUMBER(541);
	jint temp0 = (jint)((func_java_util_concurrent_CompletableFuture$Completion_isLive_R_boolean) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_util_concurrent_CompletableFuture$Completion_isLive_R_boolean])(ctx, (frame[1].o));
	if (temp0 == 0) goto label_5;
	}
	{
	LINE_NUMBER(542);
	if ((frame[2].i) == 0) goto label_7;
	}
	LINE_NUMBER(543);
	popStackFrame(ctx, self);
	INST_RETURN();
label_5:;
	{
	LINE_NUMBER(548);
	sp[0].o = (jobject)((java_util_concurrent_CompletableFuture *) NULL_CHECK((frame[0].o)))->F_stack;
	if (sp[0].o != (frame[1].o)) goto label_9;
	}
	{
	LINE_NUMBER(549);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((java_util_concurrent_CompletableFuture$Completion *) NULL_CHECK((frame[1].o)))->F_next;
	frame[1].o = sp[1].o;
	((java_util_concurrent_CompletableFuture *) NULL_CHECK(sp[0].o))->F_stack = (jref) sp[1].o;
	LINE_NUMBER(550);
	frame[2].i = (jint(1));
	}
label_9:;
	{
	LINE_NUMBER(552);
	sp[0].o = (jobject)((java_util_concurrent_CompletableFuture *) NULL_CHECK((frame[0].o)))->F_stack;
	frame[1].o = sp[0].o;
	goto label_2;
	}
label_7:;
	{
	LINE_NUMBER(556);
	sp[0].o = (jobject)((java_util_concurrent_CompletableFuture$Completion *) NULL_CHECK((frame[1].o)))->F_next;
	frame[2].o = sp[0].o;
	}
label_12:;
	INST_ALOAD(2);
	if ((--sp)->o == nullptr) goto label_13;
	{
	LINE_NUMBER(557);
	sp[0].o = (jobject)((java_util_concurrent_CompletableFuture$Completion *) NULL_CHECK((frame[2].o)))->F_next;
	frame[3].o = sp[0].o;
	LINE_NUMBER(558);
	jint temp0 = (jint)((func_java_util_concurrent_CompletableFuture$Completion_isLive_R_boolean) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_java_util_concurrent_CompletableFuture$Completion_isLive_R_boolean])(ctx, (frame[2].o));
	if (temp0 == 0) goto label_16;
	}
	{
	LINE_NUMBER(559);
	frame[1].o = (frame[2].o);
	LINE_NUMBER(560);
	frame[2].o = (frame[3].o);
	goto label_19;
	}
label_16:;
	{
	LINE_NUMBER(562);
	sp[0].o = (jobject)((java_util_concurrent_CompletableFuture$Completion *) NULL_CHECK((frame[1].o)))->F_next;
	if (sp[0].o != (frame[2].o)) goto label_20;
	}
	{
	LINE_NUMBER(563);
	((java_util_concurrent_CompletableFuture$Completion *) NULL_CHECK((frame[1].o)))->F_next = (jref) (frame[3].o);
	LINE_NUMBER(564);
	goto label_13;
	}
label_20:;
	{
	LINE_NUMBER(566);
	sp[0].o = (jobject)((java_util_concurrent_CompletableFuture$Completion *) NULL_CHECK((frame[1].o)))->F_next;
	frame[2].o = sp[0].o;
	}
label_19:;
	LINE_NUMBER(568);
	goto label_12;
label_13:;
	LINE_NUMBER(569);
	popStackFrame(ctx, self);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_java_util_concurrent_CompletableFuture_unipush_java_util_concurrent_CompletableFuture$Completion(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/concurrent/CompletableFuture:unipush", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, self);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(610);
	if ((frame[1].o) == nullptr) goto label_1;
	}
label_2:;
	{
	LINE_NUMBER(611);
	jint temp0 = (jint)((func_java_util_concurrent_CompletableFuture_tryPushStack_java_util_concurrent_CompletableFuture$Completion_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_util_concurrent_CompletableFuture_tryPushStack_java_util_concurrent_CompletableFuture$Completion_R_boolean])(ctx, (frame[0].o), (frame[1].o));
	if (temp0 != 0) goto label_3;
	}
	{
	LINE_NUMBER(612);
	sp[0].o = (jobject)((java_util_concurrent_CompletableFuture *) NULL_CHECK((frame[0].o)))->F_result;
	if (sp[0].o == nullptr) goto label_2;
	}
	{
	LINE_NUMBER(613);
	((java_util_concurrent_CompletableFuture$Completion *) NULL_CHECK((frame[1].o)))->F_next = (jref) (jobject(nullptr));
	LINE_NUMBER(614);
	goto label_3;
	}
label_3:;
	{
	LINE_NUMBER(617);
	sp[0].o = (jobject)((java_util_concurrent_CompletableFuture *) NULL_CHECK((frame[0].o)))->F_result;
	if (sp[0].o == nullptr) goto label_1;
	}
	{
	LINE_NUMBER(618);
	sp[0].o = (jobject)((func_java_util_concurrent_CompletableFuture$Completion_tryFire_int_R_java_util_concurrent_CompletableFuture) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_util_concurrent_CompletableFuture$Completion_tryFire_int_R_java_util_concurrent_CompletableFuture])(ctx, (frame[1].o), (jint(0)));
	}
label_1:;
	LINE_NUMBER(620);
	popStackFrame(ctx, self);
	INST_RETURN();

	popStackFrame(ctx);
}

jobject M_java_util_concurrent_CompletableFuture_postFire_java_util_concurrent_CompletableFuture_int_R_java_util_concurrent_CompletableFuture(jcontext ctx, jobject self, jobject param0, jint param1) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/concurrent/CompletableFuture:postFire", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(628);
	if ((frame[1].o) == nullptr) goto label_1;
	}
	{
	sp[0].o = (jobject)((java_util_concurrent_CompletableFuture *) NULL_CHECK((frame[1].o)))->F_stack;
	if (sp[0].o == nullptr) goto label_1;
	}
	{
	LINE_NUMBER(630);
	sp[0].o = (jobject)((java_util_concurrent_CompletableFuture *) NULL_CHECK((frame[1].o)))->F_result;
	frame[3].o = sp[0].o;
	if (sp[0].o != nullptr) goto label_4;
	}
	{
	LINE_NUMBER(631);
	((func_java_util_concurrent_CompletableFuture_cleanStack) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_util_concurrent_CompletableFuture_cleanStack])(ctx, (frame[1].o));
	}
label_4:;
	{
	LINE_NUMBER(632);
	if ((frame[2].i) < 0) goto label_1;
	}
	INST_ALOAD(3);
	if ((--sp)->o != nullptr) goto label_6;
	{
	sp[0].o = (jobject)((java_util_concurrent_CompletableFuture *) NULL_CHECK((frame[1].o)))->F_result;
	if (sp[0].o == nullptr) goto label_1;
	}
label_6:;
	{
	LINE_NUMBER(633);
	((func_java_util_concurrent_CompletableFuture_postComplete) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_util_concurrent_CompletableFuture_postComplete])(ctx, (frame[1].o));
	}
label_1:;
	{
	LINE_NUMBER(635);
	sp[0].o = (jobject)((java_util_concurrent_CompletableFuture *) NULL_CHECK((frame[0].o)))->F_result;
	if (sp[0].o == nullptr) goto label_7;
	}
	{
	sp[0].o = (jobject)((java_util_concurrent_CompletableFuture *) NULL_CHECK((frame[0].o)))->F_stack;
	if (sp[0].o == nullptr) goto label_7;
	}
	{
	LINE_NUMBER(636);
	if ((frame[2].i) >= 0) goto label_9;
	}
	{
	LINE_NUMBER(637);
	popStackFrame(ctx);
	return (frame[0].o);
	}
label_9:;
	{
	LINE_NUMBER(639);
	((func_java_util_concurrent_CompletableFuture_postComplete) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_util_concurrent_CompletableFuture_postComplete])(ctx, (frame[0].o));
	}
label_7:;
	{
	LINE_NUMBER(641);
	popStackFrame(ctx);
	return (jobject(nullptr));
	}

	popStackFrame(ctx);
}

jobject M_java_util_concurrent_CompletableFuture_uniApplyStage_java_util_concurrent_Executor_java_util_function_Function_R_java_util_concurrent_CompletableFuture(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[12];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/concurrent/CompletableFuture:uniApplyStage", 12 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(684);
	if ((frame[2].o) != nullptr) goto label_1;
	}
	{
	clinit_java_lang_NullPointerException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_NullPointerException);
	init_java_lang_NullPointerException(ctx, sp[0].o);
	throwException(ctx, sp[0].o);	}
label_1:;
	{
	LINE_NUMBER(686);
	sp[0].o = (jobject)((java_util_concurrent_CompletableFuture *) NULL_CHECK((frame[0].o)))->F_result;
	frame[3].o = sp[0].o;
	if (sp[0].o == nullptr) goto label_3;
	}
	{
	LINE_NUMBER(687);
	sp[0].o = (jobject)M_java_util_concurrent_CompletableFuture_uniApplyNow_java_lang_Object_java_util_concurrent_Executor_java_util_function_Function_R_java_util_concurrent_CompletableFuture(ctx, (frame[0].o), (frame[3].o), (frame[1].o), (frame[2].o));
	popStackFrame(ctx);
	return sp[0].o;
	}
label_3:;
	{
	LINE_NUMBER(688);
	sp[0].o = (jobject)((func_java_util_concurrent_CompletableFuture_newIncompleteFuture_R_java_util_concurrent_CompletableFuture) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_util_concurrent_CompletableFuture_newIncompleteFuture_R_java_util_concurrent_CompletableFuture])(ctx, (frame[0].o));
	frame[4].o = sp[0].o;
	LINE_NUMBER(689);
	sp[0].o = frame[0].o;
	clinit_java_util_concurrent_CompletableFuture$UniApply(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_util_concurrent_CompletableFuture$UniApply);
	init_java_util_concurrent_CompletableFuture$UniApply_java_util_concurrent_Executor_java_util_concurrent_CompletableFuture_java_util_concurrent_CompletableFuture_java_util_function_Function(ctx, sp[1].o, (frame[1].o), (frame[4].o), (frame[0].o), (frame[2].o));
	((func_java_util_concurrent_CompletableFuture_unipush_java_util_concurrent_CompletableFuture$Completion) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_concurrent_CompletableFuture_unipush_java_util_concurrent_CompletableFuture$Completion])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(690);
	popStackFrame(ctx);
	return (frame[4].o);
	}

	popStackFrame(ctx);
}

jobject M_java_util_concurrent_CompletableFuture_uniApplyNow_java_lang_Object_java_util_concurrent_Executor_java_util_function_Function_R_java_util_concurrent_CompletableFuture(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2) {
	NULL_CHECK(self);
	jtype frame[14];
	auto stack = &frame[7];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/concurrent/CompletableFuture:uniApplyNow", 14 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].o = param2;
	{
	LINE_NUMBER(696);
	sp[0].o = (jobject)((func_java_util_concurrent_CompletableFuture_newIncompleteFuture_R_java_util_concurrent_CompletableFuture) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_util_concurrent_CompletableFuture_newIncompleteFuture_R_java_util_concurrent_CompletableFuture])(ctx, (frame[0].o));
	frame[5].o = sp[0].o;
	LINE_NUMBER(697);
	if ((isInstance(ctx, (frame[1].o), &class_java_util_concurrent_CompletableFuture$AltResult)) == 0) goto label_0;
	}
	{
	LINE_NUMBER(698);
	sp[0].o = (jobject)((java_util_concurrent_CompletableFuture$AltResult *) NULL_CHECK((checkCast(ctx, &class_java_util_concurrent_CompletableFuture$AltResult, (frame[1].o)))))->F_ex;
	frame[4].o = sp[0].o;
	if (sp[0].o == nullptr) goto label_8;
	}
	{
	LINE_NUMBER(699);
	sp[0].o = frame[5].o;
	sp[1].o = (jobject)SM_java_util_concurrent_CompletableFuture_encodeThrowable_java_lang_Throwable_java_lang_Object_R_java_lang_Object(ctx, (frame[4].o), (frame[1].o));
	((java_util_concurrent_CompletableFuture *) NULL_CHECK(sp[0].o))->F_result = (jref) sp[1].o;
	LINE_NUMBER(700);
	popStackFrame(ctx);
	return (frame[5].o);
	}
label_8:;
	{
	LINE_NUMBER(702);
	frame[1].o = (jobject(nullptr));
	}
label_0:;
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(705);
	if ((frame[2].o) == nullptr) goto label_11;
	}
	{
	LINE_NUMBER(706);
	sp[0].o = frame[2].o;
	clinit_java_util_concurrent_CompletableFuture$UniApply(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_util_concurrent_CompletableFuture$UniApply);
	init_java_util_concurrent_CompletableFuture$UniApply_java_util_concurrent_Executor_java_util_concurrent_CompletableFuture_java_util_concurrent_CompletableFuture_java_util_function_Function(ctx, sp[1].o, (jobject(nullptr)), (frame[5].o), (frame[0].o), (frame[3].o));
	((func_java_util_concurrent_Executor_execute_java_lang_Runnable) resolveInterfaceMethod(ctx, &class_java_util_concurrent_Executor, INDEX_java_util_concurrent_Executor_execute_java_lang_Runnable, sp[0].o))(ctx, sp[0].o, sp[1].o);
	goto label_1;
	}
label_11:;
	{
	LINE_NUMBER(708);
	frame[6].o = (frame[1].o);
	LINE_NUMBER(709);
	sp[0].o = frame[5].o;
	sp[1].o = frame[5].o;
	sp[2].o = (jobject)((func_java_util_function_Function_apply_java_lang_Object_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_function_Function, INDEX_java_util_function_Function_apply_java_lang_Object_R_java_lang_Object, (frame[3].o)))(ctx, (frame[3].o), (frame[6].o));
	sp[1].o = (jobject)((func_java_util_concurrent_CompletableFuture_encodeValue_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_util_concurrent_CompletableFuture_encodeValue_java_lang_Object_R_java_lang_Object])(ctx, sp[1].o, sp[2].o);
	((java_util_concurrent_CompletableFuture *) NULL_CHECK(sp[0].o))->F_result = (jref) sp[1].o;
	}
label_1:;
	popExceptionFrame(frameRef);
	LINE_NUMBER(713);
	goto label_14;
label_2:;
	{
	sp -= 1;
	LINE_NUMBER(711);
	frame[6].o = sp[0].o;
	LINE_NUMBER(712);
	sp[0].o = frame[5].o;
	sp[1].o = (jobject)SM_java_util_concurrent_CompletableFuture_encodeThrowable_java_lang_Throwable_R_java_util_concurrent_CompletableFuture$AltResult(ctx, (frame[6].o));
	((java_util_concurrent_CompletableFuture *) NULL_CHECK(sp[0].o))->F_result = (jref) sp[1].o;
	}
label_14:;
	{
	LINE_NUMBER(714);
	popStackFrame(ctx);
	return (frame[5].o);
	}

	popStackFrame(ctx);
}

jobject M_java_util_concurrent_CompletableFuture_uniAcceptStage_java_util_concurrent_Executor_java_util_function_Consumer_R_java_util_concurrent_CompletableFuture(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[12];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/concurrent/CompletableFuture:uniAcceptStage", 12 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(757);
	if ((frame[2].o) != nullptr) goto label_1;
	}
	{
	clinit_java_lang_NullPointerException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_NullPointerException);
	init_java_lang_NullPointerException(ctx, sp[0].o);
	throwException(ctx, sp[0].o);	}
label_1:;
	{
	LINE_NUMBER(759);
	sp[0].o = (jobject)((java_util_concurrent_CompletableFuture *) NULL_CHECK((frame[0].o)))->F_result;
	frame[3].o = sp[0].o;
	if (sp[0].o == nullptr) goto label_3;
	}
	{
	LINE_NUMBER(760);
	sp[0].o = (jobject)M_java_util_concurrent_CompletableFuture_uniAcceptNow_java_lang_Object_java_util_concurrent_Executor_java_util_function_Consumer_R_java_util_concurrent_CompletableFuture(ctx, (frame[0].o), (frame[3].o), (frame[1].o), (frame[2].o));
	popStackFrame(ctx);
	return sp[0].o;
	}
label_3:;
	{
	LINE_NUMBER(761);
	sp[0].o = (jobject)((func_java_util_concurrent_CompletableFuture_newIncompleteFuture_R_java_util_concurrent_CompletableFuture) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_util_concurrent_CompletableFuture_newIncompleteFuture_R_java_util_concurrent_CompletableFuture])(ctx, (frame[0].o));
	frame[4].o = sp[0].o;
	LINE_NUMBER(762);
	sp[0].o = frame[0].o;
	clinit_java_util_concurrent_CompletableFuture$UniAccept(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_util_concurrent_CompletableFuture$UniAccept);
	init_java_util_concurrent_CompletableFuture$UniAccept_java_util_concurrent_Executor_java_util_concurrent_CompletableFuture_java_util_concurrent_CompletableFuture_java_util_function_Consumer(ctx, sp[1].o, (frame[1].o), (frame[4].o), (frame[0].o), (frame[2].o));
	((func_java_util_concurrent_CompletableFuture_unipush_java_util_concurrent_CompletableFuture$Completion) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_concurrent_CompletableFuture_unipush_java_util_concurrent_CompletableFuture$Completion])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(763);
	popStackFrame(ctx);
	return (frame[4].o);
	}

	popStackFrame(ctx);
}

jobject M_java_util_concurrent_CompletableFuture_uniAcceptNow_java_lang_Object_java_util_concurrent_Executor_java_util_function_Consumer_R_java_util_concurrent_CompletableFuture(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2) {
	NULL_CHECK(self);
	jtype frame[14];
	auto stack = &frame[7];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/concurrent/CompletableFuture:uniAcceptNow", 14 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].o = param2;
	{
	LINE_NUMBER(769);
	sp[0].o = (jobject)((func_java_util_concurrent_CompletableFuture_newIncompleteFuture_R_java_util_concurrent_CompletableFuture) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_util_concurrent_CompletableFuture_newIncompleteFuture_R_java_util_concurrent_CompletableFuture])(ctx, (frame[0].o));
	frame[5].o = sp[0].o;
	LINE_NUMBER(770);
	if ((isInstance(ctx, (frame[1].o), &class_java_util_concurrent_CompletableFuture$AltResult)) == 0) goto label_0;
	}
	{
	LINE_NUMBER(771);
	sp[0].o = (jobject)((java_util_concurrent_CompletableFuture$AltResult *) NULL_CHECK((checkCast(ctx, &class_java_util_concurrent_CompletableFuture$AltResult, (frame[1].o)))))->F_ex;
	frame[4].o = sp[0].o;
	if (sp[0].o == nullptr) goto label_8;
	}
	{
	LINE_NUMBER(772);
	sp[0].o = frame[5].o;
	sp[1].o = (jobject)SM_java_util_concurrent_CompletableFuture_encodeThrowable_java_lang_Throwable_java_lang_Object_R_java_lang_Object(ctx, (frame[4].o), (frame[1].o));
	((java_util_concurrent_CompletableFuture *) NULL_CHECK(sp[0].o))->F_result = (jref) sp[1].o;
	LINE_NUMBER(773);
	popStackFrame(ctx);
	return (frame[5].o);
	}
label_8:;
	{
	LINE_NUMBER(775);
	frame[1].o = (jobject(nullptr));
	}
label_0:;
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(778);
	if ((frame[2].o) == nullptr) goto label_11;
	}
	{
	LINE_NUMBER(779);
	sp[0].o = frame[2].o;
	clinit_java_util_concurrent_CompletableFuture$UniAccept(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_util_concurrent_CompletableFuture$UniAccept);
	init_java_util_concurrent_CompletableFuture$UniAccept_java_util_concurrent_Executor_java_util_concurrent_CompletableFuture_java_util_concurrent_CompletableFuture_java_util_function_Consumer(ctx, sp[1].o, (jobject(nullptr)), (frame[5].o), (frame[0].o), (frame[3].o));
	((func_java_util_concurrent_Executor_execute_java_lang_Runnable) resolveInterfaceMethod(ctx, &class_java_util_concurrent_Executor, INDEX_java_util_concurrent_Executor_execute_java_lang_Runnable, sp[0].o))(ctx, sp[0].o, sp[1].o);
	goto label_1;
	}
label_11:;
	{
	LINE_NUMBER(781);
	frame[6].o = (frame[1].o);
	LINE_NUMBER(782);
	((func_java_util_function_Consumer_accept_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_function_Consumer, INDEX_java_util_function_Consumer_accept_java_lang_Object, (frame[3].o)))(ctx, (frame[3].o), (frame[6].o));
	LINE_NUMBER(783);
	sp[0].o = frame[5].o;
	clinit_java_util_concurrent_CompletableFuture(ctx);
	sp[1].o = (jobject)SF_java_util_concurrent_CompletableFuture_NIL;
	((java_util_concurrent_CompletableFuture *) NULL_CHECK(sp[0].o))->F_result = (jref) sp[1].o;
	}
label_1:;
	popExceptionFrame(frameRef);
	LINE_NUMBER(787);
	goto label_15;
label_2:;
	{
	sp -= 1;
	LINE_NUMBER(785);
	frame[6].o = sp[0].o;
	LINE_NUMBER(786);
	sp[0].o = frame[5].o;
	sp[1].o = (jobject)SM_java_util_concurrent_CompletableFuture_encodeThrowable_java_lang_Throwable_R_java_util_concurrent_CompletableFuture$AltResult(ctx, (frame[6].o));
	((java_util_concurrent_CompletableFuture *) NULL_CHECK(sp[0].o))->F_result = (jref) sp[1].o;
	}
label_15:;
	{
	LINE_NUMBER(788);
	popStackFrame(ctx);
	return (frame[5].o);
	}

	popStackFrame(ctx);
}

jobject M_java_util_concurrent_CompletableFuture_uniRunStage_java_util_concurrent_Executor_java_lang_Runnable_R_java_util_concurrent_CompletableFuture(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[12];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/concurrent/CompletableFuture:uniRunStage", 12 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(825);
	if ((frame[2].o) != nullptr) goto label_1;
	}
	{
	clinit_java_lang_NullPointerException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_NullPointerException);
	init_java_lang_NullPointerException(ctx, sp[0].o);
	throwException(ctx, sp[0].o);	}
label_1:;
	{
	LINE_NUMBER(827);
	sp[0].o = (jobject)((java_util_concurrent_CompletableFuture *) NULL_CHECK((frame[0].o)))->F_result;
	frame[3].o = sp[0].o;
	if (sp[0].o == nullptr) goto label_3;
	}
	{
	LINE_NUMBER(828);
	sp[0].o = (jobject)M_java_util_concurrent_CompletableFuture_uniRunNow_java_lang_Object_java_util_concurrent_Executor_java_lang_Runnable_R_java_util_concurrent_CompletableFuture(ctx, (frame[0].o), (frame[3].o), (frame[1].o), (frame[2].o));
	popStackFrame(ctx);
	return sp[0].o;
	}
label_3:;
	{
	LINE_NUMBER(829);
	sp[0].o = (jobject)((func_java_util_concurrent_CompletableFuture_newIncompleteFuture_R_java_util_concurrent_CompletableFuture) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_util_concurrent_CompletableFuture_newIncompleteFuture_R_java_util_concurrent_CompletableFuture])(ctx, (frame[0].o));
	frame[4].o = sp[0].o;
	LINE_NUMBER(830);
	sp[0].o = frame[0].o;
	clinit_java_util_concurrent_CompletableFuture$UniRun(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_util_concurrent_CompletableFuture$UniRun);
	init_java_util_concurrent_CompletableFuture$UniRun_java_util_concurrent_Executor_java_util_concurrent_CompletableFuture_java_util_concurrent_CompletableFuture_java_lang_Runnable(ctx, sp[1].o, (frame[1].o), (frame[4].o), (frame[0].o), (frame[2].o));
	((func_java_util_concurrent_CompletableFuture_unipush_java_util_concurrent_CompletableFuture$Completion) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_concurrent_CompletableFuture_unipush_java_util_concurrent_CompletableFuture$Completion])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(831);
	popStackFrame(ctx);
	return (frame[4].o);
	}

	popStackFrame(ctx);
}

jobject M_java_util_concurrent_CompletableFuture_uniRunNow_java_lang_Object_java_util_concurrent_Executor_java_lang_Runnable_R_java_util_concurrent_CompletableFuture(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2) {
	NULL_CHECK(self);
	jtype frame[14];
	auto stack = &frame[7];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/concurrent/CompletableFuture:uniRunNow", 14 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].o = param2;
	{
	LINE_NUMBER(836);
	sp[0].o = (jobject)((func_java_util_concurrent_CompletableFuture_newIncompleteFuture_R_java_util_concurrent_CompletableFuture) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_util_concurrent_CompletableFuture_newIncompleteFuture_R_java_util_concurrent_CompletableFuture])(ctx, (frame[0].o));
	frame[5].o = sp[0].o;
	LINE_NUMBER(837);
	if ((isInstance(ctx, (frame[1].o), &class_java_util_concurrent_CompletableFuture$AltResult)) == 0) goto label_0;
	}
	{
	sp[0].o = (jobject)((java_util_concurrent_CompletableFuture$AltResult *) NULL_CHECK((checkCast(ctx, &class_java_util_concurrent_CompletableFuture$AltResult, (frame[1].o)))))->F_ex;
	frame[4].o = sp[0].o;
	if (sp[0].o == nullptr) goto label_0;
	}
	{
	LINE_NUMBER(838);
	sp[0].o = frame[5].o;
	sp[1].o = (jobject)SM_java_util_concurrent_CompletableFuture_encodeThrowable_java_lang_Throwable_java_lang_Object_R_java_lang_Object(ctx, (frame[4].o), (frame[1].o));
	((java_util_concurrent_CompletableFuture *) NULL_CHECK(sp[0].o))->F_result = (jref) sp[1].o;
	goto label_8;
	}
label_0:;
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(841);
	if ((frame[2].o) == nullptr) goto label_9;
	}
	{
	LINE_NUMBER(842);
	sp[0].o = frame[2].o;
	clinit_java_util_concurrent_CompletableFuture$UniRun(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_util_concurrent_CompletableFuture$UniRun);
	init_java_util_concurrent_CompletableFuture$UniRun_java_util_concurrent_Executor_java_util_concurrent_CompletableFuture_java_util_concurrent_CompletableFuture_java_lang_Runnable(ctx, sp[1].o, (jobject(nullptr)), (frame[5].o), (frame[0].o), (frame[3].o));
	((func_java_util_concurrent_Executor_execute_java_lang_Runnable) resolveInterfaceMethod(ctx, &class_java_util_concurrent_Executor, INDEX_java_util_concurrent_Executor_execute_java_lang_Runnable, sp[0].o))(ctx, sp[0].o, sp[1].o);
	goto label_1;
	}
label_9:;
	{
	LINE_NUMBER(844);
	((func_java_lang_Runnable_run) resolveInterfaceMethod(ctx, &class_java_lang_Runnable, INDEX_java_lang_Runnable_run, (frame[3].o)))(ctx, (frame[3].o));
	LINE_NUMBER(845);
	sp[0].o = frame[5].o;
	clinit_java_util_concurrent_CompletableFuture(ctx);
	sp[1].o = (jobject)SF_java_util_concurrent_CompletableFuture_NIL;
	((java_util_concurrent_CompletableFuture *) NULL_CHECK(sp[0].o))->F_result = (jref) sp[1].o;
	}
label_1:;
	popExceptionFrame(frameRef);
	LINE_NUMBER(849);
	goto label_8;
label_2:;
	{
	sp -= 1;
	LINE_NUMBER(847);
	frame[6].o = sp[0].o;
	LINE_NUMBER(848);
	sp[0].o = frame[5].o;
	sp[1].o = (jobject)SM_java_util_concurrent_CompletableFuture_encodeThrowable_java_lang_Throwable_R_java_util_concurrent_CompletableFuture$AltResult(ctx, (frame[6].o));
	((java_util_concurrent_CompletableFuture *) NULL_CHECK(sp[0].o))->F_result = (jref) sp[1].o;
	}
label_8:;
	{
	LINE_NUMBER(850);
	popStackFrame(ctx);
	return (frame[5].o);
	}

	popStackFrame(ctx);
}

jbool M_java_util_concurrent_CompletableFuture_uniWhenComplete_java_lang_Object_java_util_function_BiConsumer_java_util_concurrent_CompletableFuture$UniWhenComplete_R_boolean(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2) {
	NULL_CHECK(self);
	jtype frame[10];
	auto stack = &frame[7];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/concurrent/CompletableFuture:uniWhenComplete", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].o = param2;
	{
	LINE_NUMBER(876);
	frame[5].o = (jobject(nullptr));
	LINE_NUMBER(877);
	sp[0].o = (jobject)((java_util_concurrent_CompletableFuture *) NULL_CHECK((frame[0].o)))->F_result;
	if (sp[0].o != nullptr) goto label_9;
	}
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(879);
	if ((frame[3].o) == nullptr) { popExceptionFrames(frameRef, 1); goto label_4; }
	}
	{
	jint temp0 = (jint)((func_java_util_concurrent_CompletableFuture$UniWhenComplete_claim_R_boolean) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_java_util_concurrent_CompletableFuture$UniWhenComplete_claim_R_boolean])(ctx, (frame[3].o));
	if (temp0 != 0) { popExceptionFrames(frameRef, 1); goto label_4; }
	}
	LINE_NUMBER(880);
	INST_ICONST(0);
	popExceptionFrame(frameRef);
	popStackFrame(ctx);
	INST_IRETURN();
label_4:;
label_6: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(881);
	if ((isInstance(ctx, (frame[1].o), &class_java_util_concurrent_CompletableFuture$AltResult)) == 0) goto label_11;
	}
	{
	LINE_NUMBER(882);
	sp[0].o = (jobject)((java_util_concurrent_CompletableFuture$AltResult *) NULL_CHECK((checkCast(ctx, &class_java_util_concurrent_CompletableFuture$AltResult, (frame[1].o)))))->F_ex;
	frame[5].o = sp[0].o;
	LINE_NUMBER(883);
	frame[4].o = (jobject(nullptr));
	goto label_15;
	}
label_11:;
	{
	LINE_NUMBER(885);
	frame[6].o = (frame[1].o);
	LINE_NUMBER(886);
	frame[4].o = (frame[6].o);
	}
label_15:;
	{
	LINE_NUMBER(888);
	((func_java_util_function_BiConsumer_accept_java_lang_Object_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_function_BiConsumer, INDEX_java_util_function_BiConsumer_accept_java_lang_Object_java_lang_Object, (frame[2].o)))(ctx, (frame[2].o), (frame[4].o), (frame[5].o));
	LINE_NUMBER(889);
	if ((frame[5].o) != nullptr) { popExceptionFrames(frameRef, 1); goto label_18; }
	}
	{
	LINE_NUMBER(890);
	jint temp0 = (jint)((func_java_util_concurrent_CompletableFuture_internalComplete_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_util_concurrent_CompletableFuture_internalComplete_java_lang_Object_R_boolean])(ctx, (frame[0].o), (frame[1].o));
	LINE_NUMBER(891);
	jint temp1 = jint(1);
	sp[0].i = temp1;
	sp += 1;
	}
	popExceptionFrame(frameRef);
	popStackFrame(ctx);
	INST_IRETURN();
label_18:;
	LINE_NUMBER(898);
	goto label_21;
label_2:;
	{
	sp -= 1;
	LINE_NUMBER(893);
	frame[6].o = sp[0].o;
	LINE_NUMBER(894);
	if ((frame[5].o) != nullptr) goto label_23;
	}
	{
	LINE_NUMBER(895);
	frame[5].o = (frame[6].o);
	goto label_21;
	}
label_23:;
	{
	LINE_NUMBER(896);
	if ((frame[5].o) == (frame[6].o)) goto label_21;
	}
	{
	LINE_NUMBER(897);
	((func_java_lang_Throwable_addSuppressed_java_lang_Throwable) ((void **) nullCheck(ctx, (frame[5].o))->vtable)[VTABLE_java_lang_Throwable_addSuppressed_java_lang_Throwable])(ctx, (frame[5].o), (frame[6].o));
	}
label_21:;
	{
	LINE_NUMBER(899);
	jint temp0 = (jint)((func_java_util_concurrent_CompletableFuture_completeThrowable_java_lang_Throwable_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_util_concurrent_CompletableFuture_completeThrowable_java_lang_Throwable_java_lang_Object_R_boolean])(ctx, (frame[0].o), (frame[5].o), (frame[1].o));
	}
label_9:;
	{
	LINE_NUMBER(901);
	popStackFrame(ctx);
	return (jint(1));
	}

	popStackFrame(ctx);
}

jobject M_java_util_concurrent_CompletableFuture_uniWhenCompleteStage_java_util_concurrent_Executor_java_util_function_BiConsumer_R_java_util_concurrent_CompletableFuture(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[13];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/concurrent/CompletableFuture:uniWhenCompleteStage", 13 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(906);
	if ((frame[2].o) != nullptr) goto label_5;
	}
	{
	clinit_java_lang_NullPointerException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_NullPointerException);
	init_java_lang_NullPointerException(ctx, sp[0].o);
	throwException(ctx, sp[0].o);	}
label_5:;
	{
	LINE_NUMBER(907);
	sp[0].o = (jobject)((func_java_util_concurrent_CompletableFuture_newIncompleteFuture_R_java_util_concurrent_CompletableFuture) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_util_concurrent_CompletableFuture_newIncompleteFuture_R_java_util_concurrent_CompletableFuture])(ctx, (frame[0].o));
	frame[3].o = sp[0].o;
	LINE_NUMBER(909);
	sp[0].o = (jobject)((java_util_concurrent_CompletableFuture *) NULL_CHECK((frame[0].o)))->F_result;
	frame[4].o = sp[0].o;
	if (sp[0].o != nullptr) goto label_8;
	}
	{
	LINE_NUMBER(910);
	sp[0].o = frame[0].o;
	clinit_java_util_concurrent_CompletableFuture$UniWhenComplete(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_util_concurrent_CompletableFuture$UniWhenComplete);
	init_java_util_concurrent_CompletableFuture$UniWhenComplete_java_util_concurrent_Executor_java_util_concurrent_CompletableFuture_java_util_concurrent_CompletableFuture_java_util_function_BiConsumer(ctx, sp[1].o, (frame[1].o), (frame[3].o), (frame[0].o), (frame[2].o));
	((func_java_util_concurrent_CompletableFuture_unipush_java_util_concurrent_CompletableFuture$Completion) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_concurrent_CompletableFuture_unipush_java_util_concurrent_CompletableFuture$Completion])(ctx, sp[0].o, sp[1].o);
	goto label_10;
	}
label_8:;
	{
	LINE_NUMBER(911);
	if ((frame[1].o) != nullptr) goto label_0;
	}
	{
	LINE_NUMBER(912);
	jint temp0 = (jint)((func_java_util_concurrent_CompletableFuture_uniWhenComplete_java_lang_Object_java_util_function_BiConsumer_java_util_concurrent_CompletableFuture$UniWhenComplete_R_boolean) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_java_util_concurrent_CompletableFuture_uniWhenComplete_java_lang_Object_java_util_function_BiConsumer_java_util_concurrent_CompletableFuture$UniWhenComplete_R_boolean])(ctx, (frame[3].o), (frame[4].o), (frame[2].o), (jobject(nullptr)));
	goto label_10;
	}
label_0:;
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(915);
	sp[0].o = frame[1].o;
	clinit_java_util_concurrent_CompletableFuture$UniWhenComplete(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_util_concurrent_CompletableFuture$UniWhenComplete);
	init_java_util_concurrent_CompletableFuture$UniWhenComplete_java_util_concurrent_Executor_java_util_concurrent_CompletableFuture_java_util_concurrent_CompletableFuture_java_util_function_BiConsumer(ctx, sp[1].o, (jobject(nullptr)), (frame[3].o), (frame[0].o), (frame[2].o));
	((func_java_util_concurrent_Executor_execute_java_lang_Runnable) resolveInterfaceMethod(ctx, &class_java_util_concurrent_Executor, INDEX_java_util_concurrent_Executor_execute_java_lang_Runnable, sp[0].o))(ctx, sp[0].o, sp[1].o);
	}
	popExceptionFrame(frameRef);
	LINE_NUMBER(918);
	goto label_10;
label_2:;
	{
	sp -= 1;
	LINE_NUMBER(916);
	frame[5].o = sp[0].o;
	LINE_NUMBER(917);
	sp[0].o = frame[3].o;
	sp[1].o = (jobject)SM_java_util_concurrent_CompletableFuture_encodeThrowable_java_lang_Throwable_R_java_util_concurrent_CompletableFuture$AltResult(ctx, (frame[5].o));
	((java_util_concurrent_CompletableFuture *) NULL_CHECK(sp[0].o))->F_result = (jref) sp[1].o;
	}
label_10:;
	{
	LINE_NUMBER(920);
	popStackFrame(ctx);
	return (frame[3].o);
	}

	popStackFrame(ctx);
}

jbool M_java_util_concurrent_CompletableFuture_uniHandle_java_lang_Object_java_util_function_BiFunction_java_util_concurrent_CompletableFuture$UniHandle_R_boolean(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2) {
	NULL_CHECK(self);
	jtype frame[11];
	auto stack = &frame[7];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/concurrent/CompletableFuture:uniHandle", 11 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].o = param2;
	{
	LINE_NUMBER(947);
	sp[0].o = (jobject)((java_util_concurrent_CompletableFuture *) NULL_CHECK((frame[0].o)))->F_result;
	if (sp[0].o != nullptr) goto label_8;
	}
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(949);
	if ((frame[3].o) == nullptr) { popExceptionFrames(frameRef, 1); goto label_4; }
	}
	{
	jint temp0 = (jint)((func_java_util_concurrent_CompletableFuture$UniHandle_claim_R_boolean) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_java_util_concurrent_CompletableFuture$UniHandle_claim_R_boolean])(ctx, (frame[3].o));
	if (temp0 != 0) { popExceptionFrames(frameRef, 1); goto label_4; }
	}
	LINE_NUMBER(950);
	INST_ICONST(0);
	popExceptionFrame(frameRef);
	popStackFrame(ctx);
	INST_IRETURN();
label_4:;
label_6: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(951);
	if ((isInstance(ctx, (frame[1].o), &class_java_util_concurrent_CompletableFuture$AltResult)) == 0) goto label_10;
	}
	{
	LINE_NUMBER(952);
	sp[0].o = (jobject)((java_util_concurrent_CompletableFuture$AltResult *) NULL_CHECK((checkCast(ctx, &class_java_util_concurrent_CompletableFuture$AltResult, (frame[1].o)))))->F_ex;
	frame[5].o = sp[0].o;
	LINE_NUMBER(953);
	frame[4].o = (jobject(nullptr));
	goto label_14;
	}
label_10:;
	{
	LINE_NUMBER(955);
	frame[5].o = (jobject(nullptr));
	LINE_NUMBER(956);
	frame[6].o = (frame[1].o);
	LINE_NUMBER(957);
	frame[4].o = (frame[6].o);
	}
label_14:;
	{
	LINE_NUMBER(959);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((func_java_util_function_BiFunction_apply_java_lang_Object_java_lang_Object_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_function_BiFunction, INDEX_java_util_function_BiFunction_apply_java_lang_Object_java_lang_Object_R_java_lang_Object, (frame[2].o)))(ctx, (frame[2].o), (frame[4].o), (frame[5].o));
	jint temp0 = (jint)((func_java_util_concurrent_CompletableFuture_completeValue_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_concurrent_CompletableFuture_completeValue_java_lang_Object_R_boolean])(ctx, sp[0].o, sp[1].o);
	}
	popExceptionFrame(frameRef);
	LINE_NUMBER(962);
	goto label_8;
label_2:;
	{
	sp -= 1;
	LINE_NUMBER(960);
	frame[6].o = sp[0].o;
	LINE_NUMBER(961);
	jint temp0 = (jint)((func_java_util_concurrent_CompletableFuture_completeThrowable_java_lang_Throwable_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_util_concurrent_CompletableFuture_completeThrowable_java_lang_Throwable_R_boolean])(ctx, (frame[0].o), (frame[6].o));
	}
label_8:;
	{
	LINE_NUMBER(964);
	popStackFrame(ctx);
	return (jint(1));
	}

	popStackFrame(ctx);
}

jobject M_java_util_concurrent_CompletableFuture_uniHandleStage_java_util_concurrent_Executor_java_util_function_BiFunction_R_java_util_concurrent_CompletableFuture(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[13];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/concurrent/CompletableFuture:uniHandleStage", 13 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(969);
	if ((frame[2].o) != nullptr) goto label_5;
	}
	{
	clinit_java_lang_NullPointerException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_NullPointerException);
	init_java_lang_NullPointerException(ctx, sp[0].o);
	throwException(ctx, sp[0].o);	}
label_5:;
	{
	LINE_NUMBER(970);
	sp[0].o = (jobject)((func_java_util_concurrent_CompletableFuture_newIncompleteFuture_R_java_util_concurrent_CompletableFuture) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_util_concurrent_CompletableFuture_newIncompleteFuture_R_java_util_concurrent_CompletableFuture])(ctx, (frame[0].o));
	frame[3].o = sp[0].o;
	LINE_NUMBER(972);
	sp[0].o = (jobject)((java_util_concurrent_CompletableFuture *) NULL_CHECK((frame[0].o)))->F_result;
	frame[4].o = sp[0].o;
	if (sp[0].o != nullptr) goto label_8;
	}
	{
	LINE_NUMBER(973);
	sp[0].o = frame[0].o;
	clinit_java_util_concurrent_CompletableFuture$UniHandle(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_util_concurrent_CompletableFuture$UniHandle);
	init_java_util_concurrent_CompletableFuture$UniHandle_java_util_concurrent_Executor_java_util_concurrent_CompletableFuture_java_util_concurrent_CompletableFuture_java_util_function_BiFunction(ctx, sp[1].o, (frame[1].o), (frame[3].o), (frame[0].o), (frame[2].o));
	((func_java_util_concurrent_CompletableFuture_unipush_java_util_concurrent_CompletableFuture$Completion) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_concurrent_CompletableFuture_unipush_java_util_concurrent_CompletableFuture$Completion])(ctx, sp[0].o, sp[1].o);
	goto label_10;
	}
label_8:;
	{
	LINE_NUMBER(974);
	if ((frame[1].o) != nullptr) goto label_0;
	}
	{
	LINE_NUMBER(975);
	jint temp0 = (jint)((func_java_util_concurrent_CompletableFuture_uniHandle_java_lang_Object_java_util_function_BiFunction_java_util_concurrent_CompletableFuture$UniHandle_R_boolean) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_java_util_concurrent_CompletableFuture_uniHandle_java_lang_Object_java_util_function_BiFunction_java_util_concurrent_CompletableFuture$UniHandle_R_boolean])(ctx, (frame[3].o), (frame[4].o), (frame[2].o), (jobject(nullptr)));
	goto label_10;
	}
label_0:;
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(978);
	sp[0].o = frame[1].o;
	clinit_java_util_concurrent_CompletableFuture$UniHandle(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_util_concurrent_CompletableFuture$UniHandle);
	init_java_util_concurrent_CompletableFuture$UniHandle_java_util_concurrent_Executor_java_util_concurrent_CompletableFuture_java_util_concurrent_CompletableFuture_java_util_function_BiFunction(ctx, sp[1].o, (jobject(nullptr)), (frame[3].o), (frame[0].o), (frame[2].o));
	((func_java_util_concurrent_Executor_execute_java_lang_Runnable) resolveInterfaceMethod(ctx, &class_java_util_concurrent_Executor, INDEX_java_util_concurrent_Executor_execute_java_lang_Runnable, sp[0].o))(ctx, sp[0].o, sp[1].o);
	}
	popExceptionFrame(frameRef);
	LINE_NUMBER(981);
	goto label_10;
label_2:;
	{
	sp -= 1;
	LINE_NUMBER(979);
	frame[5].o = sp[0].o;
	LINE_NUMBER(980);
	sp[0].o = frame[3].o;
	sp[1].o = (jobject)SM_java_util_concurrent_CompletableFuture_encodeThrowable_java_lang_Throwable_R_java_util_concurrent_CompletableFuture$AltResult(ctx, (frame[5].o));
	((java_util_concurrent_CompletableFuture *) NULL_CHECK(sp[0].o))->F_result = (jref) sp[1].o;
	}
label_10:;
	{
	LINE_NUMBER(983);
	popStackFrame(ctx);
	return (frame[3].o);
	}

	popStackFrame(ctx);
}

jbool M_java_util_concurrent_CompletableFuture_uniExceptionally_java_lang_Object_java_util_function_Function_java_util_concurrent_CompletableFuture$UniExceptionally_R_boolean(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/concurrent/CompletableFuture:uniExceptionally", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);
	volatile bool bypasses[2]{};

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].o = param2;
	{
	LINE_NUMBER(1010);
	sp[0].o = (jobject)((java_util_concurrent_CompletableFuture *) NULL_CHECK((frame[0].o)))->F_result;
	if (sp[0].o != nullptr) goto label_8;
	}
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(1012);
	if ((isInstance(ctx, (frame[1].o), &class_java_util_concurrent_CompletableFuture$AltResult)) == 0) { popExceptionFrames(frameRef, 1); bypasses[0] = true; goto label_6; } // goto label_9
	}
	{
	sp[0].o = (jobject)((java_util_concurrent_CompletableFuture$AltResult *) NULL_CHECK((checkCast(ctx, &class_java_util_concurrent_CompletableFuture$AltResult, (frame[1].o)))))->F_ex;
	frame[4].o = sp[0].o;
	if (sp[0].o == nullptr) { popExceptionFrames(frameRef, 1); bypasses[1] = true; goto label_6; } // goto label_9
	}
	{
	LINE_NUMBER(1013);
	if ((frame[3].o) == nullptr) { popExceptionFrames(frameRef, 1); goto label_4; }
	}
	{
	jint temp0 = (jint)((func_java_util_concurrent_CompletableFuture$UniExceptionally_claim_R_boolean) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_java_util_concurrent_CompletableFuture$UniExceptionally_claim_R_boolean])(ctx, (frame[3].o));
	if (temp0 != 0) { popExceptionFrames(frameRef, 1); goto label_4; }
	}
	LINE_NUMBER(1014);
	INST_ICONST(0);
	popExceptionFrame(frameRef);
	popStackFrame(ctx);
	INST_IRETURN();
label_4:;
label_6: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	if (bypasses[0]) { bypasses[0] = false; goto label_9; }
	if (bypasses[1]) { bypasses[1] = false; goto label_9; }
	{
	LINE_NUMBER(1015);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((func_java_util_function_Function_apply_java_lang_Object_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_function_Function, INDEX_java_util_function_Function_apply_java_lang_Object_R_java_lang_Object, (frame[2].o)))(ctx, (frame[2].o), (frame[4].o));
	jint temp0 = (jint)((func_java_util_concurrent_CompletableFuture_completeValue_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_concurrent_CompletableFuture_completeValue_java_lang_Object_R_boolean])(ctx, sp[0].o, sp[1].o);
	goto label_5;
	}
label_9:;
	{
	LINE_NUMBER(1017);
	jint temp0 = (jint)((func_java_util_concurrent_CompletableFuture_internalComplete_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_util_concurrent_CompletableFuture_internalComplete_java_lang_Object_R_boolean])(ctx, (frame[0].o), (frame[1].o));
	}
label_5:;
	popExceptionFrame(frameRef);
	LINE_NUMBER(1020);
	goto label_8;
label_2:;
	{
	sp -= 1;
	LINE_NUMBER(1018);
	frame[5].o = sp[0].o;
	LINE_NUMBER(1019);
	jint temp0 = (jint)((func_java_util_concurrent_CompletableFuture_completeThrowable_java_lang_Throwable_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_util_concurrent_CompletableFuture_completeThrowable_java_lang_Throwable_R_boolean])(ctx, (frame[0].o), (frame[5].o));
	}
label_8:;
	{
	LINE_NUMBER(1022);
	popStackFrame(ctx);
	return (jint(1));
	}

	popStackFrame(ctx);
}

jobject M_java_util_concurrent_CompletableFuture_uniExceptionallyStage_java_util_function_Function_R_java_util_concurrent_CompletableFuture(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[10];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/concurrent/CompletableFuture:uniExceptionallyStage", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(1027);
	if ((frame[1].o) != nullptr) goto label_1;
	}
	{
	clinit_java_lang_NullPointerException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_NullPointerException);
	init_java_lang_NullPointerException(ctx, sp[0].o);
	throwException(ctx, sp[0].o);	}
label_1:;
	{
	LINE_NUMBER(1028);
	sp[0].o = (jobject)((func_java_util_concurrent_CompletableFuture_newIncompleteFuture_R_java_util_concurrent_CompletableFuture) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_util_concurrent_CompletableFuture_newIncompleteFuture_R_java_util_concurrent_CompletableFuture])(ctx, (frame[0].o));
	frame[2].o = sp[0].o;
	LINE_NUMBER(1030);
	sp[0].o = (jobject)((java_util_concurrent_CompletableFuture *) NULL_CHECK((frame[0].o)))->F_result;
	frame[3].o = sp[0].o;
	if (sp[0].o != nullptr) goto label_4;
	}
	{
	LINE_NUMBER(1031);
	sp[0].o = frame[0].o;
	clinit_java_util_concurrent_CompletableFuture$UniExceptionally(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_util_concurrent_CompletableFuture$UniExceptionally);
	init_java_util_concurrent_CompletableFuture$UniExceptionally_java_util_concurrent_CompletableFuture_java_util_concurrent_CompletableFuture_java_util_function_Function(ctx, sp[1].o, (frame[2].o), (frame[0].o), (frame[1].o));
	((func_java_util_concurrent_CompletableFuture_unipush_java_util_concurrent_CompletableFuture$Completion) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_concurrent_CompletableFuture_unipush_java_util_concurrent_CompletableFuture$Completion])(ctx, sp[0].o, sp[1].o);
	goto label_6;
	}
label_4:;
	{
	LINE_NUMBER(1033);
	jint temp0 = (jint)((func_java_util_concurrent_CompletableFuture_uniExceptionally_java_lang_Object_java_util_function_Function_java_util_concurrent_CompletableFuture$UniExceptionally_R_boolean) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_java_util_concurrent_CompletableFuture_uniExceptionally_java_lang_Object_java_util_function_Function_java_util_concurrent_CompletableFuture$UniExceptionally_R_boolean])(ctx, (frame[2].o), (frame[3].o), (frame[1].o), (jobject(nullptr)));
	}
label_6:;
	{
	LINE_NUMBER(1034);
	popStackFrame(ctx);
	return (frame[2].o);
	}

	popStackFrame(ctx);
}

jobject SM_java_util_concurrent_CompletableFuture_uniCopyStage_java_util_concurrent_CompletableFuture_R_java_util_concurrent_CompletableFuture(jcontext ctx, jobject param0) {
	jtype frame[8];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/concurrent/CompletableFuture:uniCopyStage", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_util_concurrent_CompletableFuture(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(1057);
	sp[0].o = (jobject)((func_java_util_concurrent_CompletableFuture_newIncompleteFuture_R_java_util_concurrent_CompletableFuture) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_util_concurrent_CompletableFuture_newIncompleteFuture_R_java_util_concurrent_CompletableFuture])(ctx, (frame[0].o));
	frame[2].o = sp[0].o;
	LINE_NUMBER(1058);
	sp[0].o = (jobject)((java_util_concurrent_CompletableFuture *) NULL_CHECK((frame[0].o)))->F_result;
	frame[1].o = sp[0].o;
	if (sp[0].o == nullptr) goto label_3;
	}
	{
	LINE_NUMBER(1059);
	sp[0].o = frame[2].o;
	sp[1].o = (jobject)SM_java_util_concurrent_CompletableFuture_encodeRelay_java_lang_Object_R_java_lang_Object(ctx, (frame[1].o));
	((java_util_concurrent_CompletableFuture *) NULL_CHECK(sp[0].o))->F_result = (jref) sp[1].o;
	goto label_5;
	}
label_3:;
	{
	LINE_NUMBER(1061);
	sp[0].o = frame[0].o;
	clinit_java_util_concurrent_CompletableFuture$UniRelay(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_util_concurrent_CompletableFuture$UniRelay);
	init_java_util_concurrent_CompletableFuture$UniRelay_java_util_concurrent_CompletableFuture_java_util_concurrent_CompletableFuture(ctx, sp[1].o, (frame[2].o), (frame[0].o));
	((func_java_util_concurrent_CompletableFuture_unipush_java_util_concurrent_CompletableFuture$Completion) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_concurrent_CompletableFuture_unipush_java_util_concurrent_CompletableFuture$Completion])(ctx, sp[0].o, sp[1].o);
	}
label_5:;
	{
	LINE_NUMBER(1062);
	popStackFrame(ctx);
	return (frame[2].o);
	}

	popStackFrame(ctx);
}

jobject M_java_util_concurrent_CompletableFuture_uniAsMinimalStage_R_java_util_concurrent_CompletableFuture$MinimalStage(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/concurrent/CompletableFuture:uniAsMinimalStage", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(1067);
	sp[0].o = (jobject)((java_util_concurrent_CompletableFuture *) NULL_CHECK((frame[0].o)))->F_result;
	frame[1].o = sp[0].o;
	if (sp[0].o == nullptr) goto label_2;
	}
	{
	LINE_NUMBER(1068);
	clinit_java_util_concurrent_CompletableFuture$MinimalStage(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_util_concurrent_CompletableFuture$MinimalStage);
	sp[1].o = (jobject)SM_java_util_concurrent_CompletableFuture_encodeRelay_java_lang_Object_R_java_lang_Object(ctx, (frame[1].o));
	init_java_util_concurrent_CompletableFuture$MinimalStage_java_lang_Object(ctx, sp[0].o, sp[1].o);
	popStackFrame(ctx);
	return sp[0].o;
	}
label_2:;
	{
	LINE_NUMBER(1069);
	clinit_java_util_concurrent_CompletableFuture$MinimalStage(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_util_concurrent_CompletableFuture$MinimalStage);
	init_java_util_concurrent_CompletableFuture$MinimalStage(ctx, sp[0].o);
	frame[2].o = sp[0].o;
	LINE_NUMBER(1070);
	sp[0].o = frame[0].o;
	clinit_java_util_concurrent_CompletableFuture$UniRelay(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_util_concurrent_CompletableFuture$UniRelay);
	init_java_util_concurrent_CompletableFuture$UniRelay_java_util_concurrent_CompletableFuture_java_util_concurrent_CompletableFuture(ctx, sp[1].o, (frame[2].o), (frame[0].o));
	((func_java_util_concurrent_CompletableFuture_unipush_java_util_concurrent_CompletableFuture$Completion) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_concurrent_CompletableFuture_unipush_java_util_concurrent_CompletableFuture$Completion])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(1071);
	popStackFrame(ctx);
	return (frame[2].o);
	}

	popStackFrame(ctx);
}

jobject M_java_util_concurrent_CompletableFuture_uniComposeStage_java_util_concurrent_Executor_java_util_function_Function_R_java_util_concurrent_CompletableFuture(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[16];
	auto stack = &frame[9];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/concurrent/CompletableFuture:uniComposeStage", 16 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(1120);
	if ((frame[2].o) != nullptr) goto label_9;
	}
	{
	clinit_java_lang_NullPointerException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_NullPointerException);
	init_java_lang_NullPointerException(ctx, sp[0].o);
	throwException(ctx, sp[0].o);	}
label_9:;
	{
	LINE_NUMBER(1121);
	sp[0].o = (jobject)((func_java_util_concurrent_CompletableFuture_newIncompleteFuture_R_java_util_concurrent_CompletableFuture) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_util_concurrent_CompletableFuture_newIncompleteFuture_R_java_util_concurrent_CompletableFuture])(ctx, (frame[0].o));
	frame[3].o = sp[0].o;
	LINE_NUMBER(1123);
	sp[0].o = (jobject)((java_util_concurrent_CompletableFuture *) NULL_CHECK((frame[0].o)))->F_result;
	frame[4].o = sp[0].o;
	if (sp[0].o != nullptr) goto label_12;
	}
	{
	LINE_NUMBER(1124);
	sp[0].o = frame[0].o;
	clinit_java_util_concurrent_CompletableFuture$UniCompose(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_util_concurrent_CompletableFuture$UniCompose);
	init_java_util_concurrent_CompletableFuture$UniCompose_java_util_concurrent_Executor_java_util_concurrent_CompletableFuture_java_util_concurrent_CompletableFuture_java_util_function_Function(ctx, sp[1].o, (frame[1].o), (frame[3].o), (frame[0].o), (frame[2].o));
	((func_java_util_concurrent_CompletableFuture_unipush_java_util_concurrent_CompletableFuture$Completion) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_concurrent_CompletableFuture_unipush_java_util_concurrent_CompletableFuture$Completion])(ctx, sp[0].o, sp[1].o);
	goto label_14;
	}
label_12:;
	{
	LINE_NUMBER(1125);
	if ((frame[1].o) != nullptr) goto label_4;
	}
	{
	LINE_NUMBER(1126);
	if ((isInstance(ctx, (frame[4].o), &class_java_util_concurrent_CompletableFuture$AltResult)) == 0) goto label_0;
	}
	{
	LINE_NUMBER(1127);
	sp[0].o = (jobject)((java_util_concurrent_CompletableFuture$AltResult *) NULL_CHECK((checkCast(ctx, &class_java_util_concurrent_CompletableFuture$AltResult, (frame[4].o)))))->F_ex;
	frame[6].o = sp[0].o;
	if (sp[0].o == nullptr) goto label_18;
	}
	{
	LINE_NUMBER(1128);
	sp[0].o = frame[3].o;
	sp[1].o = (jobject)SM_java_util_concurrent_CompletableFuture_encodeThrowable_java_lang_Throwable_java_lang_Object_R_java_lang_Object(ctx, (frame[6].o), (frame[4].o));
	((java_util_concurrent_CompletableFuture *) NULL_CHECK(sp[0].o))->F_result = (jref) sp[1].o;
	LINE_NUMBER(1129);
	popStackFrame(ctx);
	return (frame[3].o);
	}
label_18:;
	{
	LINE_NUMBER(1131);
	frame[4].o = (jobject(nullptr));
	}
label_0:;
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(1134);
	frame[7].o = (frame[4].o);
	LINE_NUMBER(1135);
	sp[0].o = (jobject)((func_java_util_function_Function_apply_java_lang_Object_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_function_Function, INDEX_java_util_function_Function_apply_java_lang_Object_R_java_lang_Object, (frame[2].o)))(ctx, (frame[2].o), (frame[7].o));
	sp[0].o = (jobject)((func_java_util_concurrent_CompletionStage_toCompletableFuture_R_java_util_concurrent_CompletableFuture) resolveInterfaceMethod(ctx, &class_java_util_concurrent_CompletionStage, INDEX_java_util_concurrent_CompletionStage_toCompletableFuture_R_java_util_concurrent_CompletableFuture, (checkCast(ctx, &class_java_util_concurrent_CompletionStage, sp[0].o))))(ctx, (checkCast(ctx, &class_java_util_concurrent_CompletionStage, sp[0].o)));
	frame[8].o = sp[0].o;
	LINE_NUMBER(1136);
	sp[0].o = (jobject)((java_util_concurrent_CompletableFuture *) NULL_CHECK((frame[8].o)))->F_result;
	frame[5].o = sp[0].o;
	if (sp[0].o == nullptr) goto label_24;
	}
	{
	LINE_NUMBER(1137);
	sp[0].o = frame[3].o;
	sp[1].o = (jobject)SM_java_util_concurrent_CompletableFuture_encodeRelay_java_lang_Object_R_java_lang_Object(ctx, (frame[5].o));
	((java_util_concurrent_CompletableFuture *) NULL_CHECK(sp[0].o))->F_result = (jref) sp[1].o;
	goto label_1;
	}
label_24:;
	{
	LINE_NUMBER(1139);
	sp[0].o = frame[8].o;
	clinit_java_util_concurrent_CompletableFuture$UniRelay(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_util_concurrent_CompletableFuture$UniRelay);
	init_java_util_concurrent_CompletableFuture$UniRelay_java_util_concurrent_CompletableFuture_java_util_concurrent_CompletableFuture(ctx, sp[1].o, (frame[3].o), (frame[8].o));
	((func_java_util_concurrent_CompletableFuture_unipush_java_util_concurrent_CompletableFuture$Completion) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_concurrent_CompletableFuture_unipush_java_util_concurrent_CompletableFuture$Completion])(ctx, sp[0].o, sp[1].o);
	}
label_1:;
	popExceptionFrame(frameRef);
	LINE_NUMBER(1143);
	goto label_14;
label_2:;
	{
	sp -= 1;
	LINE_NUMBER(1141);
	frame[7].o = sp[0].o;
	LINE_NUMBER(1142);
	sp[0].o = frame[3].o;
	sp[1].o = (jobject)SM_java_util_concurrent_CompletableFuture_encodeThrowable_java_lang_Throwable_R_java_util_concurrent_CompletableFuture$AltResult(ctx, (frame[7].o));
	((java_util_concurrent_CompletableFuture *) NULL_CHECK(sp[0].o))->F_result = (jref) sp[1].o;
	LINE_NUMBER(1143);
	goto label_14;
	}
label_4:;
label_7: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_6; }
	}
	{
	LINE_NUMBER(1147);
	sp[0].o = frame[1].o;
	clinit_java_util_concurrent_CompletableFuture$UniCompose(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_util_concurrent_CompletableFuture$UniCompose);
	init_java_util_concurrent_CompletableFuture$UniCompose_java_util_concurrent_Executor_java_util_concurrent_CompletableFuture_java_util_concurrent_CompletableFuture_java_util_function_Function(ctx, sp[1].o, (jobject(nullptr)), (frame[3].o), (frame[0].o), (frame[2].o));
	((func_java_util_concurrent_Executor_execute_java_lang_Runnable) resolveInterfaceMethod(ctx, &class_java_util_concurrent_Executor, INDEX_java_util_concurrent_Executor_execute_java_lang_Runnable, sp[0].o))(ctx, sp[0].o, sp[1].o);
	}
	popExceptionFrame(frameRef);
	LINE_NUMBER(1150);
	goto label_14;
label_6:;
	{
	sp -= 1;
	LINE_NUMBER(1148);
	frame[7].o = sp[0].o;
	LINE_NUMBER(1149);
	sp[0].o = frame[3].o;
	sp[1].o = (jobject)SM_java_util_concurrent_CompletableFuture_encodeThrowable_java_lang_Throwable_R_java_util_concurrent_CompletableFuture$AltResult(ctx, (frame[7].o));
	((java_util_concurrent_CompletableFuture *) NULL_CHECK(sp[0].o))->F_result = (jref) sp[1].o;
	}
label_14:;
	{
	LINE_NUMBER(1151);
	popStackFrame(ctx);
	return (frame[3].o);
	}

	popStackFrame(ctx);
}

void M_java_util_concurrent_CompletableFuture_bipush_java_util_concurrent_CompletableFuture_java_util_concurrent_CompletableFuture$BiCompletion(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/concurrent/CompletableFuture:bipush", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(1191);
	if ((frame[2].o) == nullptr) goto label_1;
	}
label_2:;
	{
	LINE_NUMBER(1192);
	sp[0].o = (jobject)((java_util_concurrent_CompletableFuture *) NULL_CHECK((frame[0].o)))->F_result;
	if (sp[0].o != nullptr) goto label_3;
	}
	{
	LINE_NUMBER(1193);
	jint temp0 = (jint)((func_java_util_concurrent_CompletableFuture_tryPushStack_java_util_concurrent_CompletableFuture$Completion_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_util_concurrent_CompletableFuture_tryPushStack_java_util_concurrent_CompletableFuture$Completion_R_boolean])(ctx, (frame[0].o), (frame[2].o));
	if (temp0 == 0) goto label_2;
	}
	{
	LINE_NUMBER(1194);
	sp[0].o = (jobject)((java_util_concurrent_CompletableFuture *) NULL_CHECK((frame[1].o)))->F_result;
	if (sp[0].o != nullptr) goto label_6;
	}
	{
	LINE_NUMBER(1195);
	sp[0].o = frame[1].o;
	clinit_java_util_concurrent_CompletableFuture$CoCompletion(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_util_concurrent_CompletableFuture$CoCompletion);
	init_java_util_concurrent_CompletableFuture$CoCompletion_java_util_concurrent_CompletableFuture$BiCompletion(ctx, sp[1].o, (frame[2].o));
	((func_java_util_concurrent_CompletableFuture_unipush_java_util_concurrent_CompletableFuture$Completion) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_concurrent_CompletableFuture_unipush_java_util_concurrent_CompletableFuture$Completion])(ctx, sp[0].o, sp[1].o);
	goto label_8;
	}
label_6:;
	{
	LINE_NUMBER(1196);
	sp[0].o = (jobject)((java_util_concurrent_CompletableFuture *) NULL_CHECK((frame[0].o)))->F_result;
	if (sp[0].o == nullptr) goto label_8;
	}
	{
	LINE_NUMBER(1197);
	sp[0].o = (jobject)((func_java_util_concurrent_CompletableFuture$BiCompletion_tryFire_int_R_java_util_concurrent_CompletableFuture) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_java_util_concurrent_CompletableFuture$BiCompletion_tryFire_int_R_java_util_concurrent_CompletableFuture])(ctx, (frame[2].o), (jint(0)));
	}
label_8:;
	LINE_NUMBER(1198);
	popStackFrame(ctx);
	INST_RETURN();
label_3:;
	{
	LINE_NUMBER(1201);
	((func_java_util_concurrent_CompletableFuture_unipush_java_util_concurrent_CompletableFuture$Completion) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_util_concurrent_CompletableFuture_unipush_java_util_concurrent_CompletableFuture$Completion])(ctx, (frame[1].o), (frame[2].o));
	}
label_1:;
	LINE_NUMBER(1203);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jobject M_java_util_concurrent_CompletableFuture_postFire_java_util_concurrent_CompletableFuture_java_util_concurrent_CompletableFuture_int_R_java_util_concurrent_CompletableFuture(jcontext ctx, jobject self, jobject param0, jobject param1, jint param2) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/concurrent/CompletableFuture:postFire", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].i = param2;
	{
	LINE_NUMBER(1208);
	if ((frame[2].o) == nullptr) goto label_1;
	}
	{
	sp[0].o = (jobject)((java_util_concurrent_CompletableFuture *) NULL_CHECK((frame[2].o)))->F_stack;
	if (sp[0].o == nullptr) goto label_1;
	}
	{
	LINE_NUMBER(1210);
	sp[0].o = (jobject)((java_util_concurrent_CompletableFuture *) NULL_CHECK((frame[2].o)))->F_result;
	frame[4].o = sp[0].o;
	if (sp[0].o != nullptr) goto label_4;
	}
	{
	LINE_NUMBER(1211);
	((func_java_util_concurrent_CompletableFuture_cleanStack) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_java_util_concurrent_CompletableFuture_cleanStack])(ctx, (frame[2].o));
	}
label_4:;
	{
	LINE_NUMBER(1212);
	if ((frame[3].i) < 0) goto label_1;
	}
	INST_ALOAD(4);
	if ((--sp)->o != nullptr) goto label_6;
	{
	sp[0].o = (jobject)((java_util_concurrent_CompletableFuture *) NULL_CHECK((frame[2].o)))->F_result;
	if (sp[0].o == nullptr) goto label_1;
	}
label_6:;
	{
	LINE_NUMBER(1213);
	((func_java_util_concurrent_CompletableFuture_postComplete) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_java_util_concurrent_CompletableFuture_postComplete])(ctx, (frame[2].o));
	}
label_1:;
	{
	LINE_NUMBER(1215);
	sp[0].o = (jobject)((func_java_util_concurrent_CompletableFuture_postFire_java_util_concurrent_CompletableFuture_int_R_java_util_concurrent_CompletableFuture) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_util_concurrent_CompletableFuture_postFire_java_util_concurrent_CompletableFuture_int_R_java_util_concurrent_CompletableFuture])(ctx, (frame[0].o), (frame[1].o), (frame[3].i));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jbool M_java_util_concurrent_CompletableFuture_biApply_java_lang_Object_java_lang_Object_java_util_function_BiFunction_java_util_concurrent_CompletableFuture$BiApply_R_boolean(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2, jobject param3) {
	NULL_CHECK(self);
	jtype frame[12];
	auto stack = &frame[8];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/concurrent/CompletableFuture:biApply", 12 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].o = param2;
	frame[4].o = param3;
	{
	LINE_NUMBER(1245);
	sp[0].o = (jobject)((java_util_concurrent_CompletableFuture *) NULL_CHECK((frame[0].o)))->F_result;
	if (sp[0].o != nullptr) goto label_8;
	}
	{
	LINE_NUMBER(1246);
	if ((isInstance(ctx, (frame[1].o), &class_java_util_concurrent_CompletableFuture$AltResult)) == 0) goto label_10;
	}
	{
	LINE_NUMBER(1247);
	sp[0].o = (jobject)((java_util_concurrent_CompletableFuture$AltResult *) NULL_CHECK((checkCast(ctx, &class_java_util_concurrent_CompletableFuture$AltResult, (frame[1].o)))))->F_ex;
	frame[5].o = sp[0].o;
	if (sp[0].o == nullptr) goto label_13;
	}
	{
	LINE_NUMBER(1248);
	jint temp0 = (jint)((func_java_util_concurrent_CompletableFuture_completeThrowable_java_lang_Throwable_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_util_concurrent_CompletableFuture_completeThrowable_java_lang_Throwable_java_lang_Object_R_boolean])(ctx, (frame[0].o), (frame[5].o), (frame[1].o));
	LINE_NUMBER(1249);
	goto label_8;
	}
label_13:;
	{
	LINE_NUMBER(1251);
	frame[1].o = (jobject(nullptr));
	}
label_10:;
	{
	LINE_NUMBER(1253);
	if ((isInstance(ctx, (frame[2].o), &class_java_util_concurrent_CompletableFuture$AltResult)) == 0) goto label_0;
	}
	{
	LINE_NUMBER(1254);
	sp[0].o = (jobject)((java_util_concurrent_CompletableFuture$AltResult *) NULL_CHECK((checkCast(ctx, &class_java_util_concurrent_CompletableFuture$AltResult, (frame[2].o)))))->F_ex;
	frame[5].o = sp[0].o;
	if (sp[0].o == nullptr) goto label_18;
	}
	{
	LINE_NUMBER(1255);
	jint temp0 = (jint)((func_java_util_concurrent_CompletableFuture_completeThrowable_java_lang_Throwable_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_util_concurrent_CompletableFuture_completeThrowable_java_lang_Throwable_java_lang_Object_R_boolean])(ctx, (frame[0].o), (frame[5].o), (frame[2].o));
	LINE_NUMBER(1256);
	goto label_8;
	}
label_18:;
	{
	LINE_NUMBER(1258);
	frame[2].o = (jobject(nullptr));
	}
label_0:;
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(1261);
	if ((frame[4].o) == nullptr) { popExceptionFrames(frameRef, 1); goto label_4; }
	}
	{
	jint temp0 = (jint)((func_java_util_concurrent_CompletableFuture$BiApply_claim_R_boolean) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_java_util_concurrent_CompletableFuture$BiApply_claim_R_boolean])(ctx, (frame[4].o));
	if (temp0 != 0) { popExceptionFrames(frameRef, 1); goto label_4; }
	}
	LINE_NUMBER(1262);
	INST_ICONST(0);
	popExceptionFrame(frameRef);
	popStackFrame(ctx);
	INST_IRETURN();
label_4:;
label_6: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(1263);
	frame[6].o = (frame[1].o);
	LINE_NUMBER(1264);
	frame[7].o = (frame[2].o);
	LINE_NUMBER(1265);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((func_java_util_function_BiFunction_apply_java_lang_Object_java_lang_Object_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_function_BiFunction, INDEX_java_util_function_BiFunction_apply_java_lang_Object_java_lang_Object_R_java_lang_Object, (frame[3].o)))(ctx, (frame[3].o), (frame[6].o), (frame[7].o));
	jint temp0 = (jint)((func_java_util_concurrent_CompletableFuture_completeValue_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_concurrent_CompletableFuture_completeValue_java_lang_Object_R_boolean])(ctx, sp[0].o, sp[1].o);
	}
	popExceptionFrame(frameRef);
	LINE_NUMBER(1268);
	goto label_8;
label_2:;
	{
	sp -= 1;
	LINE_NUMBER(1266);
	frame[6].o = sp[0].o;
	LINE_NUMBER(1267);
	jint temp0 = (jint)((func_java_util_concurrent_CompletableFuture_completeThrowable_java_lang_Throwable_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_util_concurrent_CompletableFuture_completeThrowable_java_lang_Throwable_R_boolean])(ctx, (frame[0].o), (frame[6].o));
	}
label_8:;
	{
	LINE_NUMBER(1270);
	popStackFrame(ctx);
	return (jint(1));
	}

	popStackFrame(ctx);
}

jobject M_java_util_concurrent_CompletableFuture_biApplyStage_java_util_concurrent_Executor_java_util_concurrent_CompletionStage_java_util_function_BiFunction_R_java_util_concurrent_CompletableFuture(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2) {
	NULL_CHECK(self);
	jtype frame[18];
	auto stack = &frame[9];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/concurrent/CompletableFuture:biApplyStage", 18 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].o = param2;
	{
	LINE_NUMBER(1277);
	if ((frame[3].o) == nullptr) goto label_5;
	}
	{
	sp[0].o = (jobject)((func_java_util_concurrent_CompletionStage_toCompletableFuture_R_java_util_concurrent_CompletableFuture) resolveInterfaceMethod(ctx, &class_java_util_concurrent_CompletionStage, INDEX_java_util_concurrent_CompletionStage_toCompletableFuture_R_java_util_concurrent_CompletableFuture, (frame[2].o)))(ctx, (frame[2].o));
	frame[4].o = sp[0].o;
	if (sp[0].o != nullptr) goto label_7;
	}
label_5:;
	{
	LINE_NUMBER(1278);
	clinit_java_lang_NullPointerException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_NullPointerException);
	init_java_lang_NullPointerException(ctx, sp[0].o);
	throwException(ctx, sp[0].o);	}
label_7:;
	{
	LINE_NUMBER(1279);
	sp[0].o = (jobject)((func_java_util_concurrent_CompletableFuture_newIncompleteFuture_R_java_util_concurrent_CompletableFuture) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_util_concurrent_CompletableFuture_newIncompleteFuture_R_java_util_concurrent_CompletableFuture])(ctx, (frame[0].o));
	frame[7].o = sp[0].o;
	LINE_NUMBER(1280);
	sp[0].o = (jobject)((java_util_concurrent_CompletableFuture *) NULL_CHECK((frame[0].o)))->F_result;
	frame[5].o = sp[0].o;
	if (sp[0].o == nullptr) goto label_10;
	}
	{
	sp[0].o = (jobject)((java_util_concurrent_CompletableFuture *) NULL_CHECK((frame[4].o)))->F_result;
	frame[6].o = sp[0].o;
	if (sp[0].o != nullptr) goto label_12;
	}
label_10:;
	{
	LINE_NUMBER(1281);
	sp[0].o = frame[0].o;
	sp[1].o = frame[4].o;
	clinit_java_util_concurrent_CompletableFuture$BiApply(ctx);
	sp[2].o = gcAlloc(ctx, &class_java_util_concurrent_CompletableFuture$BiApply);
	init_java_util_concurrent_CompletableFuture$BiApply_java_util_concurrent_Executor_java_util_concurrent_CompletableFuture_java_util_concurrent_CompletableFuture_java_util_concurrent_CompletableFuture_java_util_function_BiFunction(ctx, sp[2].o, (frame[1].o), (frame[7].o), (frame[0].o), (frame[4].o), (frame[3].o));
	((func_java_util_concurrent_CompletableFuture_bipush_java_util_concurrent_CompletableFuture_java_util_concurrent_CompletableFuture$BiCompletion) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_concurrent_CompletableFuture_bipush_java_util_concurrent_CompletableFuture_java_util_concurrent_CompletableFuture$BiCompletion])(ctx, sp[0].o, sp[1].o, sp[2].o);
	goto label_13;
	}
label_12:;
	{
	LINE_NUMBER(1282);
	if ((frame[1].o) != nullptr) goto label_0;
	}
	{
	LINE_NUMBER(1283);
	jint temp0 = (jint)((func_java_util_concurrent_CompletableFuture_biApply_java_lang_Object_java_lang_Object_java_util_function_BiFunction_java_util_concurrent_CompletableFuture$BiApply_R_boolean) ((void **) nullCheck(ctx, (frame[7].o))->vtable)[VTABLE_java_util_concurrent_CompletableFuture_biApply_java_lang_Object_java_lang_Object_java_util_function_BiFunction_java_util_concurrent_CompletableFuture$BiApply_R_boolean])(ctx, (frame[7].o), (frame[5].o), (frame[6].o), (frame[3].o), (jobject(nullptr)));
	goto label_13;
	}
label_0:;
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(1286);
	sp[0].o = frame[1].o;
	clinit_java_util_concurrent_CompletableFuture$BiApply(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_util_concurrent_CompletableFuture$BiApply);
	init_java_util_concurrent_CompletableFuture$BiApply_java_util_concurrent_Executor_java_util_concurrent_CompletableFuture_java_util_concurrent_CompletableFuture_java_util_concurrent_CompletableFuture_java_util_function_BiFunction(ctx, sp[1].o, (jobject(nullptr)), (frame[7].o), (frame[0].o), (frame[4].o), (frame[3].o));
	((func_java_util_concurrent_Executor_execute_java_lang_Runnable) resolveInterfaceMethod(ctx, &class_java_util_concurrent_Executor, INDEX_java_util_concurrent_Executor_execute_java_lang_Runnable, sp[0].o))(ctx, sp[0].o, sp[1].o);
	}
	popExceptionFrame(frameRef);
	LINE_NUMBER(1289);
	goto label_13;
label_2:;
	{
	sp -= 1;
	LINE_NUMBER(1287);
	frame[8].o = sp[0].o;
	LINE_NUMBER(1288);
	sp[0].o = frame[7].o;
	sp[1].o = (jobject)SM_java_util_concurrent_CompletableFuture_encodeThrowable_java_lang_Throwable_R_java_util_concurrent_CompletableFuture$AltResult(ctx, (frame[8].o));
	((java_util_concurrent_CompletableFuture *) NULL_CHECK(sp[0].o))->F_result = (jref) sp[1].o;
	}
label_13:;
	{
	LINE_NUMBER(1290);
	popStackFrame(ctx);
	return (frame[7].o);
	}

	popStackFrame(ctx);
}

jbool M_java_util_concurrent_CompletableFuture_biAccept_java_lang_Object_java_lang_Object_java_util_function_BiConsumer_java_util_concurrent_CompletableFuture$BiAccept_R_boolean(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2, jobject param3) {
	NULL_CHECK(self);
	jtype frame[11];
	auto stack = &frame[8];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/concurrent/CompletableFuture:biAccept", 11 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].o = param2;
	frame[4].o = param3;
	{
	LINE_NUMBER(1320);
	sp[0].o = (jobject)((java_util_concurrent_CompletableFuture *) NULL_CHECK((frame[0].o)))->F_result;
	if (sp[0].o != nullptr) goto label_8;
	}
	{
	LINE_NUMBER(1321);
	if ((isInstance(ctx, (frame[1].o), &class_java_util_concurrent_CompletableFuture$AltResult)) == 0) goto label_10;
	}
	{
	LINE_NUMBER(1322);
	sp[0].o = (jobject)((java_util_concurrent_CompletableFuture$AltResult *) NULL_CHECK((checkCast(ctx, &class_java_util_concurrent_CompletableFuture$AltResult, (frame[1].o)))))->F_ex;
	frame[5].o = sp[0].o;
	if (sp[0].o == nullptr) goto label_13;
	}
	{
	LINE_NUMBER(1323);
	jint temp0 = (jint)((func_java_util_concurrent_CompletableFuture_completeThrowable_java_lang_Throwable_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_util_concurrent_CompletableFuture_completeThrowable_java_lang_Throwable_java_lang_Object_R_boolean])(ctx, (frame[0].o), (frame[5].o), (frame[1].o));
	LINE_NUMBER(1324);
	goto label_8;
	}
label_13:;
	{
	LINE_NUMBER(1326);
	frame[1].o = (jobject(nullptr));
	}
label_10:;
	{
	LINE_NUMBER(1328);
	if ((isInstance(ctx, (frame[2].o), &class_java_util_concurrent_CompletableFuture$AltResult)) == 0) goto label_0;
	}
	{
	LINE_NUMBER(1329);
	sp[0].o = (jobject)((java_util_concurrent_CompletableFuture$AltResult *) NULL_CHECK((checkCast(ctx, &class_java_util_concurrent_CompletableFuture$AltResult, (frame[2].o)))))->F_ex;
	frame[5].o = sp[0].o;
	if (sp[0].o == nullptr) goto label_18;
	}
	{
	LINE_NUMBER(1330);
	jint temp0 = (jint)((func_java_util_concurrent_CompletableFuture_completeThrowable_java_lang_Throwable_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_util_concurrent_CompletableFuture_completeThrowable_java_lang_Throwable_java_lang_Object_R_boolean])(ctx, (frame[0].o), (frame[5].o), (frame[2].o));
	LINE_NUMBER(1331);
	goto label_8;
	}
label_18:;
	{
	LINE_NUMBER(1333);
	frame[2].o = (jobject(nullptr));
	}
label_0:;
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(1336);
	if ((frame[4].o) == nullptr) { popExceptionFrames(frameRef, 1); goto label_4; }
	}
	{
	jint temp0 = (jint)((func_java_util_concurrent_CompletableFuture$BiAccept_claim_R_boolean) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_java_util_concurrent_CompletableFuture$BiAccept_claim_R_boolean])(ctx, (frame[4].o));
	if (temp0 != 0) { popExceptionFrames(frameRef, 1); goto label_4; }
	}
	LINE_NUMBER(1337);
	INST_ICONST(0);
	popExceptionFrame(frameRef);
	popStackFrame(ctx);
	INST_IRETURN();
label_4:;
label_6: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(1338);
	frame[6].o = (frame[1].o);
	LINE_NUMBER(1339);
	frame[7].o = (frame[2].o);
	LINE_NUMBER(1340);
	((func_java_util_function_BiConsumer_accept_java_lang_Object_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_function_BiConsumer, INDEX_java_util_function_BiConsumer_accept_java_lang_Object_java_lang_Object, (frame[3].o)))(ctx, (frame[3].o), (frame[6].o), (frame[7].o));
	LINE_NUMBER(1341);
	jint temp0 = (jint)((func_java_util_concurrent_CompletableFuture_completeNull_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_util_concurrent_CompletableFuture_completeNull_R_boolean])(ctx, (frame[0].o));
	}
	popExceptionFrame(frameRef);
	LINE_NUMBER(1344);
	goto label_8;
label_2:;
	{
	sp -= 1;
	LINE_NUMBER(1342);
	frame[6].o = sp[0].o;
	LINE_NUMBER(1343);
	jint temp0 = (jint)((func_java_util_concurrent_CompletableFuture_completeThrowable_java_lang_Throwable_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_util_concurrent_CompletableFuture_completeThrowable_java_lang_Throwable_R_boolean])(ctx, (frame[0].o), (frame[6].o));
	}
label_8:;
	{
	LINE_NUMBER(1346);
	popStackFrame(ctx);
	return (jint(1));
	}

	popStackFrame(ctx);
}

jobject M_java_util_concurrent_CompletableFuture_biAcceptStage_java_util_concurrent_Executor_java_util_concurrent_CompletionStage_java_util_function_BiConsumer_R_java_util_concurrent_CompletableFuture(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2) {
	NULL_CHECK(self);
	jtype frame[18];
	auto stack = &frame[9];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/concurrent/CompletableFuture:biAcceptStage", 18 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].o = param2;
	{
	LINE_NUMBER(1353);
	if ((frame[3].o) == nullptr) goto label_5;
	}
	{
	sp[0].o = (jobject)((func_java_util_concurrent_CompletionStage_toCompletableFuture_R_java_util_concurrent_CompletableFuture) resolveInterfaceMethod(ctx, &class_java_util_concurrent_CompletionStage, INDEX_java_util_concurrent_CompletionStage_toCompletableFuture_R_java_util_concurrent_CompletableFuture, (frame[2].o)))(ctx, (frame[2].o));
	frame[4].o = sp[0].o;
	if (sp[0].o != nullptr) goto label_7;
	}
label_5:;
	{
	LINE_NUMBER(1354);
	clinit_java_lang_NullPointerException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_NullPointerException);
	init_java_lang_NullPointerException(ctx, sp[0].o);
	throwException(ctx, sp[0].o);	}
label_7:;
	{
	LINE_NUMBER(1355);
	sp[0].o = (jobject)((func_java_util_concurrent_CompletableFuture_newIncompleteFuture_R_java_util_concurrent_CompletableFuture) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_util_concurrent_CompletableFuture_newIncompleteFuture_R_java_util_concurrent_CompletableFuture])(ctx, (frame[0].o));
	frame[7].o = sp[0].o;
	LINE_NUMBER(1356);
	sp[0].o = (jobject)((java_util_concurrent_CompletableFuture *) NULL_CHECK((frame[0].o)))->F_result;
	frame[5].o = sp[0].o;
	if (sp[0].o == nullptr) goto label_10;
	}
	{
	sp[0].o = (jobject)((java_util_concurrent_CompletableFuture *) NULL_CHECK((frame[4].o)))->F_result;
	frame[6].o = sp[0].o;
	if (sp[0].o != nullptr) goto label_12;
	}
label_10:;
	{
	LINE_NUMBER(1357);
	sp[0].o = frame[0].o;
	sp[1].o = frame[4].o;
	clinit_java_util_concurrent_CompletableFuture$BiAccept(ctx);
	sp[2].o = gcAlloc(ctx, &class_java_util_concurrent_CompletableFuture$BiAccept);
	init_java_util_concurrent_CompletableFuture$BiAccept_java_util_concurrent_Executor_java_util_concurrent_CompletableFuture_java_util_concurrent_CompletableFuture_java_util_concurrent_CompletableFuture_java_util_function_BiConsumer(ctx, sp[2].o, (frame[1].o), (frame[7].o), (frame[0].o), (frame[4].o), (frame[3].o));
	((func_java_util_concurrent_CompletableFuture_bipush_java_util_concurrent_CompletableFuture_java_util_concurrent_CompletableFuture$BiCompletion) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_concurrent_CompletableFuture_bipush_java_util_concurrent_CompletableFuture_java_util_concurrent_CompletableFuture$BiCompletion])(ctx, sp[0].o, sp[1].o, sp[2].o);
	goto label_13;
	}
label_12:;
	{
	LINE_NUMBER(1358);
	if ((frame[1].o) != nullptr) goto label_0;
	}
	{
	LINE_NUMBER(1359);
	jint temp0 = (jint)((func_java_util_concurrent_CompletableFuture_biAccept_java_lang_Object_java_lang_Object_java_util_function_BiConsumer_java_util_concurrent_CompletableFuture$BiAccept_R_boolean) ((void **) nullCheck(ctx, (frame[7].o))->vtable)[VTABLE_java_util_concurrent_CompletableFuture_biAccept_java_lang_Object_java_lang_Object_java_util_function_BiConsumer_java_util_concurrent_CompletableFuture$BiAccept_R_boolean])(ctx, (frame[7].o), (frame[5].o), (frame[6].o), (frame[3].o), (jobject(nullptr)));
	goto label_13;
	}
label_0:;
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(1362);
	sp[0].o = frame[1].o;
	clinit_java_util_concurrent_CompletableFuture$BiAccept(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_util_concurrent_CompletableFuture$BiAccept);
	init_java_util_concurrent_CompletableFuture$BiAccept_java_util_concurrent_Executor_java_util_concurrent_CompletableFuture_java_util_concurrent_CompletableFuture_java_util_concurrent_CompletableFuture_java_util_function_BiConsumer(ctx, sp[1].o, (jobject(nullptr)), (frame[7].o), (frame[0].o), (frame[4].o), (frame[3].o));
	((func_java_util_concurrent_Executor_execute_java_lang_Runnable) resolveInterfaceMethod(ctx, &class_java_util_concurrent_Executor, INDEX_java_util_concurrent_Executor_execute_java_lang_Runnable, sp[0].o))(ctx, sp[0].o, sp[1].o);
	}
	popExceptionFrame(frameRef);
	LINE_NUMBER(1365);
	goto label_13;
label_2:;
	{
	sp -= 1;
	LINE_NUMBER(1363);
	frame[8].o = sp[0].o;
	LINE_NUMBER(1364);
	sp[0].o = frame[7].o;
	sp[1].o = (jobject)SM_java_util_concurrent_CompletableFuture_encodeThrowable_java_lang_Throwable_R_java_util_concurrent_CompletableFuture$AltResult(ctx, (frame[8].o));
	((java_util_concurrent_CompletableFuture *) NULL_CHECK(sp[0].o))->F_result = (jref) sp[1].o;
	}
label_13:;
	{
	LINE_NUMBER(1366);
	popStackFrame(ctx);
	return (frame[7].o);
	}

	popStackFrame(ctx);
}

jbool M_java_util_concurrent_CompletableFuture_biRun_java_lang_Object_java_lang_Object_java_lang_Runnable_java_util_concurrent_CompletableFuture$BiRun_R_boolean(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2, jobject param3) {
	NULL_CHECK(self);
	jtype frame[11];
	auto stack = &frame[8];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/concurrent/CompletableFuture:biRun", 11 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].o = param2;
	frame[4].o = param3;
	{
	LINE_NUMBER(1394);
	sp[0].o = (jobject)((java_util_concurrent_CompletableFuture *) NULL_CHECK((frame[0].o)))->F_result;
	if (sp[0].o != nullptr) goto label_8;
	}
	{
	LINE_NUMBER(1395);
	if ((isInstance(ctx, (frame[1].o), &class_java_util_concurrent_CompletableFuture$AltResult)) == 0) goto label_10;
	}
	{
	sp[0].o = frame[1].o;
	frame[6].o = sp[0].o;
	sp[0].o = (jobject)((java_util_concurrent_CompletableFuture$AltResult *) NULL_CHECK((checkCast(ctx, &class_java_util_concurrent_CompletableFuture$AltResult, sp[0].o))))->F_ex;
	frame[5].o = sp[0].o;
	if (sp[0].o != nullptr) goto label_13;
	}
label_10:;
	{
	if ((isInstance(ctx, (frame[2].o), &class_java_util_concurrent_CompletableFuture$AltResult)) == 0) goto label_0;
	}
	{
	sp[0].o = frame[2].o;
	frame[6].o = sp[0].o;
	sp[0].o = (jobject)((java_util_concurrent_CompletableFuture$AltResult *) NULL_CHECK((checkCast(ctx, &class_java_util_concurrent_CompletableFuture$AltResult, sp[0].o))))->F_ex;
	frame[5].o = sp[0].o;
	if (sp[0].o == nullptr) goto label_0;
	}
label_13:;
	{
	LINE_NUMBER(1399);
	jint temp0 = (jint)((func_java_util_concurrent_CompletableFuture_completeThrowable_java_lang_Throwable_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_util_concurrent_CompletableFuture_completeThrowable_java_lang_Throwable_java_lang_Object_R_boolean])(ctx, (frame[0].o), (frame[5].o), (frame[6].o));
	goto label_8;
	}
label_0:;
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(1402);
	if ((frame[4].o) == nullptr) { popExceptionFrames(frameRef, 1); goto label_4; }
	}
	{
	jint temp0 = (jint)((func_java_util_concurrent_CompletableFuture$BiRun_claim_R_boolean) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_java_util_concurrent_CompletableFuture$BiRun_claim_R_boolean])(ctx, (frame[4].o));
	if (temp0 != 0) { popExceptionFrames(frameRef, 1); goto label_4; }
	}
	LINE_NUMBER(1403);
	INST_ICONST(0);
	popExceptionFrame(frameRef);
	popStackFrame(ctx);
	INST_IRETURN();
label_4:;
label_6: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(1404);
	((func_java_lang_Runnable_run) resolveInterfaceMethod(ctx, &class_java_lang_Runnable, INDEX_java_lang_Runnable_run, (frame[3].o)))(ctx, (frame[3].o));
	LINE_NUMBER(1405);
	jint temp0 = (jint)((func_java_util_concurrent_CompletableFuture_completeNull_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_util_concurrent_CompletableFuture_completeNull_R_boolean])(ctx, (frame[0].o));
	}
	popExceptionFrame(frameRef);
	LINE_NUMBER(1408);
	goto label_8;
label_2:;
	{
	sp -= 1;
	LINE_NUMBER(1406);
	frame[7].o = sp[0].o;
	LINE_NUMBER(1407);
	jint temp0 = (jint)((func_java_util_concurrent_CompletableFuture_completeThrowable_java_lang_Throwable_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_util_concurrent_CompletableFuture_completeThrowable_java_lang_Throwable_R_boolean])(ctx, (frame[0].o), (frame[7].o));
	}
label_8:;
	{
	LINE_NUMBER(1410);
	popStackFrame(ctx);
	return (jint(1));
	}

	popStackFrame(ctx);
}

jobject M_java_util_concurrent_CompletableFuture_biRunStage_java_util_concurrent_Executor_java_util_concurrent_CompletionStage_java_lang_Runnable_R_java_util_concurrent_CompletableFuture(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2) {
	NULL_CHECK(self);
	jtype frame[18];
	auto stack = &frame[9];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/concurrent/CompletableFuture:biRunStage", 18 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].o = param2;
	{
	LINE_NUMBER(1416);
	if ((frame[3].o) == nullptr) goto label_5;
	}
	{
	sp[0].o = (jobject)((func_java_util_concurrent_CompletionStage_toCompletableFuture_R_java_util_concurrent_CompletableFuture) resolveInterfaceMethod(ctx, &class_java_util_concurrent_CompletionStage, INDEX_java_util_concurrent_CompletionStage_toCompletableFuture_R_java_util_concurrent_CompletableFuture, (frame[2].o)))(ctx, (frame[2].o));
	frame[4].o = sp[0].o;
	if (sp[0].o != nullptr) goto label_7;
	}
label_5:;
	{
	LINE_NUMBER(1417);
	clinit_java_lang_NullPointerException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_NullPointerException);
	init_java_lang_NullPointerException(ctx, sp[0].o);
	throwException(ctx, sp[0].o);	}
label_7:;
	{
	LINE_NUMBER(1418);
	sp[0].o = (jobject)((func_java_util_concurrent_CompletableFuture_newIncompleteFuture_R_java_util_concurrent_CompletableFuture) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_util_concurrent_CompletableFuture_newIncompleteFuture_R_java_util_concurrent_CompletableFuture])(ctx, (frame[0].o));
	frame[7].o = sp[0].o;
	LINE_NUMBER(1419);
	sp[0].o = (jobject)((java_util_concurrent_CompletableFuture *) NULL_CHECK((frame[0].o)))->F_result;
	frame[5].o = sp[0].o;
	if (sp[0].o == nullptr) goto label_10;
	}
	{
	sp[0].o = (jobject)((java_util_concurrent_CompletableFuture *) NULL_CHECK((frame[4].o)))->F_result;
	frame[6].o = sp[0].o;
	if (sp[0].o != nullptr) goto label_12;
	}
label_10:;
	{
	LINE_NUMBER(1420);
	sp[0].o = frame[0].o;
	sp[1].o = frame[4].o;
	clinit_java_util_concurrent_CompletableFuture$BiRun(ctx);
	sp[2].o = gcAlloc(ctx, &class_java_util_concurrent_CompletableFuture$BiRun);
	init_java_util_concurrent_CompletableFuture$BiRun_java_util_concurrent_Executor_java_util_concurrent_CompletableFuture_java_util_concurrent_CompletableFuture_java_util_concurrent_CompletableFuture_java_lang_Runnable(ctx, sp[2].o, (frame[1].o), (frame[7].o), (frame[0].o), (frame[4].o), (frame[3].o));
	((func_java_util_concurrent_CompletableFuture_bipush_java_util_concurrent_CompletableFuture_java_util_concurrent_CompletableFuture$BiCompletion) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_concurrent_CompletableFuture_bipush_java_util_concurrent_CompletableFuture_java_util_concurrent_CompletableFuture$BiCompletion])(ctx, sp[0].o, sp[1].o, sp[2].o);
	goto label_13;
	}
label_12:;
	{
	LINE_NUMBER(1421);
	if ((frame[1].o) != nullptr) goto label_0;
	}
	{
	LINE_NUMBER(1422);
	jint temp0 = (jint)((func_java_util_concurrent_CompletableFuture_biRun_java_lang_Object_java_lang_Object_java_lang_Runnable_java_util_concurrent_CompletableFuture$BiRun_R_boolean) ((void **) nullCheck(ctx, (frame[7].o))->vtable)[VTABLE_java_util_concurrent_CompletableFuture_biRun_java_lang_Object_java_lang_Object_java_lang_Runnable_java_util_concurrent_CompletableFuture$BiRun_R_boolean])(ctx, (frame[7].o), (frame[5].o), (frame[6].o), (frame[3].o), (jobject(nullptr)));
	goto label_13;
	}
label_0:;
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(1425);
	sp[0].o = frame[1].o;
	clinit_java_util_concurrent_CompletableFuture$BiRun(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_util_concurrent_CompletableFuture$BiRun);
	init_java_util_concurrent_CompletableFuture$BiRun_java_util_concurrent_Executor_java_util_concurrent_CompletableFuture_java_util_concurrent_CompletableFuture_java_util_concurrent_CompletableFuture_java_lang_Runnable(ctx, sp[1].o, (jobject(nullptr)), (frame[7].o), (frame[0].o), (frame[4].o), (frame[3].o));
	((func_java_util_concurrent_Executor_execute_java_lang_Runnable) resolveInterfaceMethod(ctx, &class_java_util_concurrent_Executor, INDEX_java_util_concurrent_Executor_execute_java_lang_Runnable, sp[0].o))(ctx, sp[0].o, sp[1].o);
	}
	popExceptionFrame(frameRef);
	LINE_NUMBER(1428);
	goto label_13;
label_2:;
	{
	sp -= 1;
	LINE_NUMBER(1426);
	frame[8].o = sp[0].o;
	LINE_NUMBER(1427);
	sp[0].o = frame[7].o;
	sp[1].o = (jobject)SM_java_util_concurrent_CompletableFuture_encodeThrowable_java_lang_Throwable_R_java_util_concurrent_CompletableFuture$AltResult(ctx, (frame[8].o));
	((java_util_concurrent_CompletableFuture *) NULL_CHECK(sp[0].o))->F_result = (jref) sp[1].o;
	}
label_13:;
	{
	LINE_NUMBER(1429);
	popStackFrame(ctx);
	return (frame[7].o);
	}

	popStackFrame(ctx);
}

jobject SM_java_util_concurrent_CompletableFuture_andTree_Array1_java_util_concurrent_CompletableFuture_int_int_R_java_util_concurrent_CompletableFuture(jcontext ctx, jobject param0, jint param1, jint param2) {
	jtype frame[18];
	auto stack = &frame[11];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/concurrent/CompletableFuture:andTree", 18 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_util_concurrent_CompletableFuture(ctx);
	frame[0].o = param0;
	frame[1].i = param1;
	frame[2].i = param2;
	{
	LINE_NUMBER(1464);
	clinit_java_util_concurrent_CompletableFuture(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_util_concurrent_CompletableFuture);
	init_java_util_concurrent_CompletableFuture(ctx, sp[0].o);
	frame[3].o = sp[0].o;
	LINE_NUMBER(1465);
	if ((frame[1].i) <= (frame[2].i)) goto label_2;
	}
	{
	LINE_NUMBER(1466);
	sp[0].o = frame[3].o;
	clinit_java_util_concurrent_CompletableFuture(ctx);
	sp[1].o = (jobject)SF_java_util_concurrent_CompletableFuture_NIL;
	((java_util_concurrent_CompletableFuture *) NULL_CHECK(sp[0].o))->F_result = (jref) sp[1].o;
	goto label_4;
	}
label_2:;
	{
	LINE_NUMBER(1469);
	frame[10].i = (bit_cast<jint>(bit_cast<uint32_t>(((frame[1].i) + (frame[2].i))) >> (jint(1))));
	LINE_NUMBER(1470);
	if ((frame[1].i) != (frame[10].i)) goto label_6;
	}
	{
	sp[0].o = (jobject)ARRAY_ACCESS(jobject, (frame[0].o), (frame[1].i));
	sp += 1;
	goto label_7;
	}
label_6:;
	{
	LINE_NUMBER(1471);
	sp[0].o = (jobject)SM_java_util_concurrent_CompletableFuture_andTree_Array1_java_util_concurrent_CompletableFuture_int_int_R_java_util_concurrent_CompletableFuture(ctx, (frame[0].o), (frame[1].i), (frame[10].i));
	sp += 1;
	}
label_7:;
	{
	sp -= 1;
	frame[4].o = sp[0].o;
	if (sp[0].o == nullptr) goto label_9;
	}
	{
	LINE_NUMBER(1472);
	if ((frame[1].i) != (frame[2].i)) goto label_11;
	}
	INST_ALOAD(4);
	goto label_12;
label_11:;
	{
	if ((frame[2].i) != ((frame[10].i) + (jint(1)))) goto label_13;
	}
	{
	sp[0].o = (jobject)ARRAY_ACCESS(jobject, (frame[0].o), (frame[2].i));
	sp += 1;
	goto label_12;
	}
label_13:;
	{
	LINE_NUMBER(1473);
	sp[0].o = (jobject)SM_java_util_concurrent_CompletableFuture_andTree_Array1_java_util_concurrent_CompletableFuture_int_int_R_java_util_concurrent_CompletableFuture(ctx, (frame[0].o), ((frame[10].i) + (jint(1))), (frame[2].i));
	sp += 1;
	}
label_12:;
	{
	sp -= 1;
	frame[5].o = sp[0].o;
	if (sp[0].o != nullptr) goto label_15;
	}
label_9:;
	{
	LINE_NUMBER(1474);
	clinit_java_lang_NullPointerException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_NullPointerException);
	init_java_lang_NullPointerException(ctx, sp[0].o);
	throwException(ctx, sp[0].o);	}
label_15:;
	{
	LINE_NUMBER(1475);
	sp[0].o = (jobject)((java_util_concurrent_CompletableFuture *) NULL_CHECK((frame[4].o)))->F_result;
	frame[6].o = sp[0].o;
	if (sp[0].o == nullptr) goto label_17;
	}
	{
	sp[0].o = (jobject)((java_util_concurrent_CompletableFuture *) NULL_CHECK((frame[5].o)))->F_result;
	frame[7].o = sp[0].o;
	if (sp[0].o != nullptr) goto label_19;
	}
label_17:;
	{
	LINE_NUMBER(1476);
	sp[0].o = frame[4].o;
	sp[1].o = frame[5].o;
	clinit_java_util_concurrent_CompletableFuture$BiRelay(ctx);
	sp[2].o = gcAlloc(ctx, &class_java_util_concurrent_CompletableFuture$BiRelay);
	init_java_util_concurrent_CompletableFuture$BiRelay_java_util_concurrent_CompletableFuture_java_util_concurrent_CompletableFuture_java_util_concurrent_CompletableFuture(ctx, sp[2].o, (frame[3].o), (frame[4].o), (frame[5].o));
	((func_java_util_concurrent_CompletableFuture_bipush_java_util_concurrent_CompletableFuture_java_util_concurrent_CompletableFuture$BiCompletion) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_concurrent_CompletableFuture_bipush_java_util_concurrent_CompletableFuture_java_util_concurrent_CompletableFuture$BiCompletion])(ctx, sp[0].o, sp[1].o, sp[2].o);
	goto label_4;
	}
label_19:;
	{
	LINE_NUMBER(1477);
	if ((isInstance(ctx, (frame[6].o), &class_java_util_concurrent_CompletableFuture$AltResult)) == 0) goto label_20;
	}
	{
	sp[0].o = frame[6].o;
	frame[8].o = sp[0].o;
	sp[0].o = (jobject)((java_util_concurrent_CompletableFuture$AltResult *) NULL_CHECK((checkCast(ctx, &class_java_util_concurrent_CompletableFuture$AltResult, sp[0].o))))->F_ex;
	frame[9].o = sp[0].o;
	if (sp[0].o != nullptr) goto label_23;
	}
label_20:;
	{
	if ((isInstance(ctx, (frame[7].o), &class_java_util_concurrent_CompletableFuture$AltResult)) == 0) goto label_24;
	}
	{
	sp[0].o = frame[7].o;
	frame[8].o = sp[0].o;
	sp[0].o = (jobject)((java_util_concurrent_CompletableFuture$AltResult *) NULL_CHECK((checkCast(ctx, &class_java_util_concurrent_CompletableFuture$AltResult, sp[0].o))))->F_ex;
	frame[9].o = sp[0].o;
	if (sp[0].o == nullptr) goto label_24;
	}
label_23:;
	{
	LINE_NUMBER(1481);
	sp[0].o = frame[3].o;
	sp[1].o = (jobject)SM_java_util_concurrent_CompletableFuture_encodeThrowable_java_lang_Throwable_java_lang_Object_R_java_lang_Object(ctx, (frame[9].o), (frame[8].o));
	((java_util_concurrent_CompletableFuture *) NULL_CHECK(sp[0].o))->F_result = (jref) sp[1].o;
	goto label_4;
	}
label_24:;
	{
	LINE_NUMBER(1483);
	sp[0].o = frame[3].o;
	clinit_java_util_concurrent_CompletableFuture(ctx);
	sp[1].o = (jobject)SF_java_util_concurrent_CompletableFuture_NIL;
	((java_util_concurrent_CompletableFuture *) NULL_CHECK(sp[0].o))->F_result = (jref) sp[1].o;
	}
label_4:;
	{
	LINE_NUMBER(1485);
	popStackFrame(ctx);
	return (frame[3].o);
	}

	popStackFrame(ctx);
}

void M_java_util_concurrent_CompletableFuture_orpush_java_util_concurrent_CompletableFuture_java_util_concurrent_CompletableFuture$BiCompletion(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/concurrent/CompletableFuture:orpush", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, self);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(1495);
	if ((frame[2].o) == nullptr) goto label_1;
	}
label_2:;
	{
	LINE_NUMBER(1496);
	jint temp0 = (jint)((func_java_util_concurrent_CompletableFuture_tryPushStack_java_util_concurrent_CompletableFuture$Completion_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_util_concurrent_CompletableFuture_tryPushStack_java_util_concurrent_CompletableFuture$Completion_R_boolean])(ctx, (frame[0].o), (frame[2].o));
	if (temp0 != 0) goto label_3;
	}
	{
	LINE_NUMBER(1497);
	sp[0].o = (jobject)((java_util_concurrent_CompletableFuture *) NULL_CHECK((frame[0].o)))->F_result;
	if (sp[0].o == nullptr) goto label_2;
	}
	{
	LINE_NUMBER(1498);
	((java_util_concurrent_CompletableFuture$Completion *) NULL_CHECK((frame[2].o)))->F_next = (jref) (jobject(nullptr));
	LINE_NUMBER(1499);
	goto label_3;
	}
label_3:;
	{
	LINE_NUMBER(1502);
	sp[0].o = (jobject)((java_util_concurrent_CompletableFuture *) NULL_CHECK((frame[0].o)))->F_result;
	if (sp[0].o == nullptr) goto label_7;
	}
	{
	LINE_NUMBER(1503);
	sp[0].o = (jobject)((func_java_util_concurrent_CompletableFuture$BiCompletion_tryFire_int_R_java_util_concurrent_CompletableFuture) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_java_util_concurrent_CompletableFuture$BiCompletion_tryFire_int_R_java_util_concurrent_CompletableFuture])(ctx, (frame[2].o), (jint(0)));
	goto label_1;
	}
label_7:;
	{
	LINE_NUMBER(1505);
	sp[0].o = frame[1].o;
	clinit_java_util_concurrent_CompletableFuture$CoCompletion(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_util_concurrent_CompletableFuture$CoCompletion);
	init_java_util_concurrent_CompletableFuture$CoCompletion_java_util_concurrent_CompletableFuture$BiCompletion(ctx, sp[1].o, (frame[2].o));
	((func_java_util_concurrent_CompletableFuture_unipush_java_util_concurrent_CompletableFuture$Completion) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_concurrent_CompletableFuture_unipush_java_util_concurrent_CompletableFuture$Completion])(ctx, sp[0].o, sp[1].o);
	}
label_1:;
	LINE_NUMBER(1507);
	popStackFrame(ctx, self);
	INST_RETURN();

	popStackFrame(ctx);
}

jobject M_java_util_concurrent_CompletableFuture_orApplyStage_java_util_concurrent_Executor_java_util_concurrent_CompletionStage_java_util_function_Function_R_java_util_concurrent_CompletableFuture(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2) {
	NULL_CHECK(self);
	jtype frame[17];
	auto stack = &frame[8];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/concurrent/CompletableFuture:orApplyStage", 17 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].o = param2;
	{
	LINE_NUMBER(1551);
	if ((frame[3].o) == nullptr) goto label_1;
	}
	{
	sp[0].o = (jobject)((func_java_util_concurrent_CompletionStage_toCompletableFuture_R_java_util_concurrent_CompletableFuture) resolveInterfaceMethod(ctx, &class_java_util_concurrent_CompletionStage, INDEX_java_util_concurrent_CompletionStage_toCompletableFuture_R_java_util_concurrent_CompletableFuture, (frame[2].o)))(ctx, (frame[2].o));
	frame[4].o = sp[0].o;
	if (sp[0].o != nullptr) goto label_3;
	}
label_1:;
	{
	LINE_NUMBER(1552);
	clinit_java_lang_NullPointerException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_NullPointerException);
	init_java_lang_NullPointerException(ctx, sp[0].o);
	throwException(ctx, sp[0].o);	}
label_3:;
	{
	LINE_NUMBER(1555);
	sp[0].o = frame[0].o;
	frame[6].o = sp[0].o;
	sp[0].o = (jobject)((java_util_concurrent_CompletableFuture *) NULL_CHECK(sp[0].o))->F_result;
	frame[5].o = sp[0].o;
	if (sp[0].o != nullptr) goto label_6;
	}
	{
	sp[0].o = frame[4].o;
	frame[6].o = sp[0].o;
	sp[0].o = (jobject)((java_util_concurrent_CompletableFuture *) NULL_CHECK(sp[0].o))->F_result;
	frame[5].o = sp[0].o;
	if (sp[0].o == nullptr) goto label_7;
	}
label_6:;
	{
	LINE_NUMBER(1557);
	sp[0].o = (jobject)M_java_util_concurrent_CompletableFuture_uniApplyNow_java_lang_Object_java_util_concurrent_Executor_java_util_function_Function_R_java_util_concurrent_CompletableFuture(ctx, (frame[6].o), (frame[5].o), (frame[1].o), (frame[3].o));
	popStackFrame(ctx);
	return sp[0].o;
	}
label_7:;
	{
	LINE_NUMBER(1559);
	sp[0].o = (jobject)((func_java_util_concurrent_CompletableFuture_newIncompleteFuture_R_java_util_concurrent_CompletableFuture) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_util_concurrent_CompletableFuture_newIncompleteFuture_R_java_util_concurrent_CompletableFuture])(ctx, (frame[0].o));
	frame[7].o = sp[0].o;
	LINE_NUMBER(1560);
	sp[0].o = frame[0].o;
	sp[1].o = frame[4].o;
	clinit_java_util_concurrent_CompletableFuture$OrApply(ctx);
	sp[2].o = gcAlloc(ctx, &class_java_util_concurrent_CompletableFuture$OrApply);
	init_java_util_concurrent_CompletableFuture$OrApply_java_util_concurrent_Executor_java_util_concurrent_CompletableFuture_java_util_concurrent_CompletableFuture_java_util_concurrent_CompletableFuture_java_util_function_Function(ctx, sp[2].o, (frame[1].o), (frame[7].o), (frame[0].o), (frame[4].o), (frame[3].o));
	((func_java_util_concurrent_CompletableFuture_orpush_java_util_concurrent_CompletableFuture_java_util_concurrent_CompletableFuture$BiCompletion) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_concurrent_CompletableFuture_orpush_java_util_concurrent_CompletableFuture_java_util_concurrent_CompletableFuture$BiCompletion])(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(1561);
	popStackFrame(ctx);
	return (frame[7].o);
	}

	popStackFrame(ctx);
}

jobject M_java_util_concurrent_CompletableFuture_orAcceptStage_java_util_concurrent_Executor_java_util_concurrent_CompletionStage_java_util_function_Consumer_R_java_util_concurrent_CompletableFuture(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2) {
	NULL_CHECK(self);
	jtype frame[17];
	auto stack = &frame[8];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/concurrent/CompletableFuture:orAcceptStage", 17 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].o = param2;
	{
	LINE_NUMBER(1607);
	if ((frame[3].o) == nullptr) goto label_1;
	}
	{
	sp[0].o = (jobject)((func_java_util_concurrent_CompletionStage_toCompletableFuture_R_java_util_concurrent_CompletableFuture) resolveInterfaceMethod(ctx, &class_java_util_concurrent_CompletionStage, INDEX_java_util_concurrent_CompletionStage_toCompletableFuture_R_java_util_concurrent_CompletableFuture, (frame[2].o)))(ctx, (frame[2].o));
	frame[4].o = sp[0].o;
	if (sp[0].o != nullptr) goto label_3;
	}
label_1:;
	{
	LINE_NUMBER(1608);
	clinit_java_lang_NullPointerException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_NullPointerException);
	init_java_lang_NullPointerException(ctx, sp[0].o);
	throwException(ctx, sp[0].o);	}
label_3:;
	{
	LINE_NUMBER(1611);
	sp[0].o = frame[0].o;
	frame[6].o = sp[0].o;
	sp[0].o = (jobject)((java_util_concurrent_CompletableFuture *) NULL_CHECK(sp[0].o))->F_result;
	frame[5].o = sp[0].o;
	if (sp[0].o != nullptr) goto label_6;
	}
	{
	sp[0].o = frame[4].o;
	frame[6].o = sp[0].o;
	sp[0].o = (jobject)((java_util_concurrent_CompletableFuture *) NULL_CHECK(sp[0].o))->F_result;
	frame[5].o = sp[0].o;
	if (sp[0].o == nullptr) goto label_7;
	}
label_6:;
	{
	LINE_NUMBER(1613);
	sp[0].o = (jobject)M_java_util_concurrent_CompletableFuture_uniAcceptNow_java_lang_Object_java_util_concurrent_Executor_java_util_function_Consumer_R_java_util_concurrent_CompletableFuture(ctx, (frame[6].o), (frame[5].o), (frame[1].o), (frame[3].o));
	popStackFrame(ctx);
	return sp[0].o;
	}
label_7:;
	{
	LINE_NUMBER(1615);
	sp[0].o = (jobject)((func_java_util_concurrent_CompletableFuture_newIncompleteFuture_R_java_util_concurrent_CompletableFuture) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_util_concurrent_CompletableFuture_newIncompleteFuture_R_java_util_concurrent_CompletableFuture])(ctx, (frame[0].o));
	frame[7].o = sp[0].o;
	LINE_NUMBER(1616);
	sp[0].o = frame[0].o;
	sp[1].o = frame[4].o;
	clinit_java_util_concurrent_CompletableFuture$OrAccept(ctx);
	sp[2].o = gcAlloc(ctx, &class_java_util_concurrent_CompletableFuture$OrAccept);
	init_java_util_concurrent_CompletableFuture$OrAccept_java_util_concurrent_Executor_java_util_concurrent_CompletableFuture_java_util_concurrent_CompletableFuture_java_util_concurrent_CompletableFuture_java_util_function_Consumer(ctx, sp[2].o, (frame[1].o), (frame[7].o), (frame[0].o), (frame[4].o), (frame[3].o));
	((func_java_util_concurrent_CompletableFuture_orpush_java_util_concurrent_CompletableFuture_java_util_concurrent_CompletableFuture$BiCompletion) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_concurrent_CompletableFuture_orpush_java_util_concurrent_CompletableFuture_java_util_concurrent_CompletableFuture$BiCompletion])(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(1617);
	popStackFrame(ctx);
	return (frame[7].o);
	}

	popStackFrame(ctx);
}

jobject M_java_util_concurrent_CompletableFuture_orRunStage_java_util_concurrent_Executor_java_util_concurrent_CompletionStage_java_lang_Runnable_R_java_util_concurrent_CompletableFuture(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2) {
	NULL_CHECK(self);
	jtype frame[17];
	auto stack = &frame[8];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/concurrent/CompletableFuture:orRunStage", 17 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].o = param2;
	{
	LINE_NUMBER(1660);
	if ((frame[3].o) == nullptr) goto label_1;
	}
	{
	sp[0].o = (jobject)((func_java_util_concurrent_CompletionStage_toCompletableFuture_R_java_util_concurrent_CompletableFuture) resolveInterfaceMethod(ctx, &class_java_util_concurrent_CompletionStage, INDEX_java_util_concurrent_CompletionStage_toCompletableFuture_R_java_util_concurrent_CompletableFuture, (frame[2].o)))(ctx, (frame[2].o));
	frame[4].o = sp[0].o;
	if (sp[0].o != nullptr) goto label_3;
	}
label_1:;
	{
	LINE_NUMBER(1661);
	clinit_java_lang_NullPointerException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_NullPointerException);
	init_java_lang_NullPointerException(ctx, sp[0].o);
	throwException(ctx, sp[0].o);	}
label_3:;
	{
	LINE_NUMBER(1664);
	sp[0].o = frame[0].o;
	frame[6].o = sp[0].o;
	sp[0].o = (jobject)((java_util_concurrent_CompletableFuture *) NULL_CHECK(sp[0].o))->F_result;
	frame[5].o = sp[0].o;
	if (sp[0].o != nullptr) goto label_6;
	}
	{
	sp[0].o = frame[4].o;
	frame[6].o = sp[0].o;
	sp[0].o = (jobject)((java_util_concurrent_CompletableFuture *) NULL_CHECK(sp[0].o))->F_result;
	frame[5].o = sp[0].o;
	if (sp[0].o == nullptr) goto label_7;
	}
label_6:;
	{
	LINE_NUMBER(1666);
	sp[0].o = (jobject)M_java_util_concurrent_CompletableFuture_uniRunNow_java_lang_Object_java_util_concurrent_Executor_java_lang_Runnable_R_java_util_concurrent_CompletableFuture(ctx, (frame[6].o), (frame[5].o), (frame[1].o), (frame[3].o));
	popStackFrame(ctx);
	return sp[0].o;
	}
label_7:;
	{
	LINE_NUMBER(1668);
	sp[0].o = (jobject)((func_java_util_concurrent_CompletableFuture_newIncompleteFuture_R_java_util_concurrent_CompletableFuture) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_util_concurrent_CompletableFuture_newIncompleteFuture_R_java_util_concurrent_CompletableFuture])(ctx, (frame[0].o));
	frame[7].o = sp[0].o;
	LINE_NUMBER(1669);
	sp[0].o = frame[0].o;
	sp[1].o = frame[4].o;
	clinit_java_util_concurrent_CompletableFuture$OrRun(ctx);
	sp[2].o = gcAlloc(ctx, &class_java_util_concurrent_CompletableFuture$OrRun);
	init_java_util_concurrent_CompletableFuture$OrRun_java_util_concurrent_Executor_java_util_concurrent_CompletableFuture_java_util_concurrent_CompletableFuture_java_util_concurrent_CompletableFuture_java_lang_Runnable(ctx, sp[2].o, (frame[1].o), (frame[7].o), (frame[0].o), (frame[4].o), (frame[3].o));
	((func_java_util_concurrent_CompletableFuture_orpush_java_util_concurrent_CompletableFuture_java_util_concurrent_CompletableFuture$BiCompletion) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_concurrent_CompletableFuture_orpush_java_util_concurrent_CompletableFuture_java_util_concurrent_CompletableFuture$BiCompletion])(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(1670);
	popStackFrame(ctx);
	return (frame[7].o);
	}

	popStackFrame(ctx);
}

jobject SM_java_util_concurrent_CompletableFuture_asyncSupplyStage_java_util_concurrent_Executor_java_util_function_Supplier_R_java_util_concurrent_CompletableFuture(jcontext ctx, jobject param0, jobject param1) {
	jtype frame[8];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/concurrent/CompletableFuture:asyncSupplyStage", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_util_concurrent_CompletableFuture(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	{
	LINE_NUMBER(1741);
	if ((frame[1].o) != nullptr) goto label_1;
	}
	{
	clinit_java_lang_NullPointerException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_NullPointerException);
	init_java_lang_NullPointerException(ctx, sp[0].o);
	throwException(ctx, sp[0].o);	}
label_1:;
	{
	LINE_NUMBER(1742);
	clinit_java_util_concurrent_CompletableFuture(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_util_concurrent_CompletableFuture);
	init_java_util_concurrent_CompletableFuture(ctx, sp[0].o);
	frame[2].o = sp[0].o;
	LINE_NUMBER(1743);
	sp[0].o = frame[0].o;
	clinit_java_util_concurrent_CompletableFuture$AsyncSupply(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_util_concurrent_CompletableFuture$AsyncSupply);
	init_java_util_concurrent_CompletableFuture$AsyncSupply_java_util_concurrent_CompletableFuture_java_util_function_Supplier(ctx, sp[1].o, (frame[2].o), (frame[1].o));
	((func_java_util_concurrent_Executor_execute_java_lang_Runnable) resolveInterfaceMethod(ctx, &class_java_util_concurrent_Executor, INDEX_java_util_concurrent_Executor_execute_java_lang_Runnable, sp[0].o))(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(1744);
	popStackFrame(ctx);
	return (frame[2].o);
	}

	popStackFrame(ctx);
}

jobject SM_java_util_concurrent_CompletableFuture_asyncRunStage_java_util_concurrent_Executor_java_lang_Runnable_R_java_util_concurrent_CompletableFuture(jcontext ctx, jobject param0, jobject param1) {
	jtype frame[8];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/concurrent/CompletableFuture:asyncRunStage", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_util_concurrent_CompletableFuture(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	{
	LINE_NUMBER(1777);
	if ((frame[1].o) != nullptr) goto label_1;
	}
	{
	clinit_java_lang_NullPointerException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_NullPointerException);
	init_java_lang_NullPointerException(ctx, sp[0].o);
	throwException(ctx, sp[0].o);	}
label_1:;
	{
	LINE_NUMBER(1778);
	clinit_java_util_concurrent_CompletableFuture(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_util_concurrent_CompletableFuture);
	init_java_util_concurrent_CompletableFuture(ctx, sp[0].o);
	frame[2].o = sp[0].o;
	LINE_NUMBER(1779);
	sp[0].o = frame[0].o;
	clinit_java_util_concurrent_CompletableFuture$AsyncRun(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_util_concurrent_CompletableFuture$AsyncRun);
	init_java_util_concurrent_CompletableFuture$AsyncRun_java_util_concurrent_CompletableFuture_java_lang_Runnable(ctx, sp[1].o, (frame[2].o), (frame[1].o));
	((func_java_util_concurrent_Executor_execute_java_lang_Runnable) resolveInterfaceMethod(ctx, &class_java_util_concurrent_Executor, INDEX_java_util_concurrent_Executor_execute_java_lang_Runnable, sp[0].o))(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(1780);
	popStackFrame(ctx);
	return (frame[2].o);
	}

	popStackFrame(ctx);
}

jobject M_java_util_concurrent_CompletableFuture_waitingGet_boolean_R_java_lang_Object(jcontext ctx, jobject self, jbool param0) {
	NULL_CHECK(self);
	jtype frame[13];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/concurrent/CompletableFuture:waitingGet", 13 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(1839);
	frame[2].o = (jobject(nullptr));
	LINE_NUMBER(1840);
	frame[3].i = (jint(0));
	}
label_6:;
	{
	LINE_NUMBER(1842);
	sp[0].o = (jobject)((java_util_concurrent_CompletableFuture *) NULL_CHECK((frame[0].o)))->F_result;
	frame[4].o = sp[0].o;
	if (sp[0].o != nullptr) goto label_8;
	}
	{
	LINE_NUMBER(1843);
	if ((frame[2].o) != nullptr) goto label_10;
	}
	{
	LINE_NUMBER(1844);
	clinit_java_util_concurrent_CompletableFuture$Signaller(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_util_concurrent_CompletableFuture$Signaller);
	init_java_util_concurrent_CompletableFuture$Signaller_boolean_long_long(ctx, sp[0].o, (frame[1].i), (jlong(0)), (jlong(0)));
	frame[2].o = sp[0].o;
	LINE_NUMBER(1845);
	sp[0].o = (jobject)SM_java_lang_Thread_currentThread_R_java_lang_Thread(ctx);
	if ((isInstance(ctx, sp[0].o, &class_java_util_concurrent_ForkJoinWorkerThread)) == 0) goto label_6;
	}
	{
	LINE_NUMBER(1846);
	sp[0].o = (jobject)((func_java_util_concurrent_CompletableFuture_defaultExecutor_R_java_util_concurrent_Executor) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_util_concurrent_CompletableFuture_defaultExecutor_R_java_util_concurrent_Executor])(ctx, (frame[0].o));
	SM_java_util_concurrent_ForkJoinPool_helpAsyncBlocker_java_util_concurrent_Executor_java_util_concurrent_ForkJoinPool$ManagedBlocker(ctx, sp[0].o, (frame[2].o));
	goto label_6;
	}
label_10:;
	{
	LINE_NUMBER(1848);
	if ((frame[3].i) != 0) goto label_0;
	}
	{
	LINE_NUMBER(1849);
	jint temp0 = (jint)((func_java_util_concurrent_CompletableFuture_tryPushStack_java_util_concurrent_CompletableFuture$Completion_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_util_concurrent_CompletableFuture_tryPushStack_java_util_concurrent_CompletableFuture$Completion_R_boolean])(ctx, (frame[0].o), (frame[2].o));
	frame[3].i = temp0;
	goto label_6;
	}
label_0:;
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_InterruptedException))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(1852);
	SM_java_util_concurrent_ForkJoinPool_managedBlock_java_util_concurrent_ForkJoinPool$ManagedBlocker(ctx, (frame[2].o));
	}
	popExceptionFrame(frameRef);
	LINE_NUMBER(1855);
	goto label_15;
label_2:;
	{
	sp -= 1;
	LINE_NUMBER(1853);
	frame[5].o = sp[0].o;
	LINE_NUMBER(1854);
	((java_util_concurrent_CompletableFuture$Signaller *) NULL_CHECK((frame[2].o)))->F_interrupted = (jint(1));
	}
label_15:;
	{
	LINE_NUMBER(1856);
	if (((jint)((java_util_concurrent_CompletableFuture$Signaller *) NULL_CHECK((frame[2].o)))->F_interrupted) == 0) goto label_6;
	}
	INST_ILOAD(1);
	if ((--sp)->i == 0) goto label_6;
	LINE_NUMBER(1857);
	goto label_8;
label_8:;
	{
	LINE_NUMBER(1860);
	if ((frame[2].o) == nullptr) goto label_18;
	}
	INST_ILOAD(3);
	if ((--sp)->i == 0) goto label_18;
	{
	LINE_NUMBER(1861);
	((java_util_concurrent_CompletableFuture$Signaller *) NULL_CHECK((frame[2].o)))->F_thread = (jref) (jobject(nullptr));
	LINE_NUMBER(1862);
	if ((frame[1].i) != 0) goto label_21;
	}
	{
	if (((jint)((java_util_concurrent_CompletableFuture$Signaller *) NULL_CHECK((frame[2].o)))->F_interrupted) == 0) goto label_21;
	}
	{
	LINE_NUMBER(1863);
	sp[0].o = (jobject)SM_java_lang_Thread_currentThread_R_java_lang_Thread(ctx);
	((func_java_lang_Thread_interrupt) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_Thread_interrupt])(ctx, sp[0].o);
	}
label_21:;
	{
	LINE_NUMBER(1864);
	if ((frame[4].o) != nullptr) goto label_18;
	}
	{
	LINE_NUMBER(1865);
	((func_java_util_concurrent_CompletableFuture_cleanStack) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_util_concurrent_CompletableFuture_cleanStack])(ctx, (frame[0].o));
	}
label_18:;
	{
	LINE_NUMBER(1867);
	if ((frame[4].o) != nullptr) goto label_24;
	}
	{
	sp[0].o = (jobject)((java_util_concurrent_CompletableFuture *) NULL_CHECK((frame[0].o)))->F_result;
	frame[4].o = sp[0].o;
	if (sp[0].o == nullptr) goto label_25;
	}
label_24:;
	{
	LINE_NUMBER(1868);
	((func_java_util_concurrent_CompletableFuture_postComplete) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_util_concurrent_CompletableFuture_postComplete])(ctx, (frame[0].o));
	}
label_25:;
	{
	LINE_NUMBER(1869);
	popStackFrame(ctx);
	return (frame[4].o);
	}

	popStackFrame(ctx);
}

jobject M_java_util_concurrent_CompletableFuture_timedGet_long_R_java_lang_Object(jcontext ctx, jobject self, jlong param0) {
	NULL_CHECK(self);
	jtype frame[18];
	auto stack = &frame[11];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/concurrent/CompletableFuture:timedGet", 18 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].l = param0;
	{
	LINE_NUMBER(1877);
	jint temp0 = (jint)SM_java_lang_Thread_interrupted_R_boolean(ctx);
	if (temp0 == 0) goto label_5;
	}
	{
	LINE_NUMBER(1878);
	popStackFrame(ctx);
	return (jobject(nullptr));
	}
label_5:;
	{
	LINE_NUMBER(1879);
	if ((longCompare((frame[1].l), (jlong(0)))) <= 0) goto label_7;
	}
	{
	LINE_NUMBER(1880);
	jlong temp0 = (jlong)SM_java_lang_System_nanoTime_R_long(ctx);
	frame[3].l = (temp0 + (frame[1].l));
	LINE_NUMBER(1881);
	if ((longCompare((frame[3].l), (jlong(0)))) != 0) goto label_10;
	}
	INST_LCONST(1);
	goto label_11;
label_10:;
	INST_LLOAD(3);
label_11:;
	{
	sp -= 1;
	frame[5].l = sp[0].l;
	LINE_NUMBER(1882);
	frame[7].o = (jobject(nullptr));
	LINE_NUMBER(1883);
	frame[8].i = (jint(0));
	}
label_14:;
	{
	LINE_NUMBER(1885);
	sp[0].o = (jobject)((java_util_concurrent_CompletableFuture *) NULL_CHECK((frame[0].o)))->F_result;
	frame[9].o = sp[0].o;
	if (sp[0].o != nullptr) goto label_16;
	}
	{
	LINE_NUMBER(1886);
	if ((frame[7].o) != nullptr) goto label_18;
	}
	{
	LINE_NUMBER(1887);
	clinit_java_util_concurrent_CompletableFuture$Signaller(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_util_concurrent_CompletableFuture$Signaller);
	init_java_util_concurrent_CompletableFuture$Signaller_boolean_long_long(ctx, sp[0].o, (jint(1)), (frame[1].l), (frame[5].l));
	frame[7].o = sp[0].o;
	LINE_NUMBER(1888);
	sp[0].o = (jobject)SM_java_lang_Thread_currentThread_R_java_lang_Thread(ctx);
	if ((isInstance(ctx, sp[0].o, &class_java_util_concurrent_ForkJoinWorkerThread)) == 0) goto label_14;
	}
	{
	LINE_NUMBER(1889);
	sp[0].o = (jobject)((func_java_util_concurrent_CompletableFuture_defaultExecutor_R_java_util_concurrent_Executor) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_util_concurrent_CompletableFuture_defaultExecutor_R_java_util_concurrent_Executor])(ctx, (frame[0].o));
	SM_java_util_concurrent_ForkJoinPool_helpAsyncBlocker_java_util_concurrent_Executor_java_util_concurrent_ForkJoinPool$ManagedBlocker(ctx, sp[0].o, (frame[7].o));
	goto label_14;
	}
label_18:;
	{
	LINE_NUMBER(1891);
	if ((frame[8].i) != 0) goto label_22;
	}
	{
	LINE_NUMBER(1892);
	jint temp0 = (jint)((func_java_util_concurrent_CompletableFuture_tryPushStack_java_util_concurrent_CompletableFuture$Completion_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_util_concurrent_CompletableFuture_tryPushStack_java_util_concurrent_CompletableFuture$Completion_R_boolean])(ctx, (frame[0].o), (frame[7].o));
	frame[8].i = temp0;
	goto label_14;
	}
label_22:;
	{
	LINE_NUMBER(1893);
	if ((longCompare(((jlong)((java_util_concurrent_CompletableFuture$Signaller *) NULL_CHECK((frame[7].o)))->F_nanos), (jlong(0)))) > 0) goto label_0;
	}
	LINE_NUMBER(1894);
	goto label_16;
label_0:;
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_InterruptedException))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(1897);
	SM_java_util_concurrent_ForkJoinPool_managedBlock_java_util_concurrent_ForkJoinPool$ManagedBlocker(ctx, (frame[7].o));
	}
	popExceptionFrame(frameRef);
	LINE_NUMBER(1900);
	goto label_25;
label_2:;
	{
	sp -= 1;
	LINE_NUMBER(1898);
	frame[10].o = sp[0].o;
	LINE_NUMBER(1899);
	((java_util_concurrent_CompletableFuture$Signaller *) NULL_CHECK((frame[7].o)))->F_interrupted = (jint(1));
	}
label_25:;
	{
	LINE_NUMBER(1901);
	if (((jint)((java_util_concurrent_CompletableFuture$Signaller *) NULL_CHECK((frame[7].o)))->F_interrupted) == 0) goto label_14;
	}
	LINE_NUMBER(1902);
	goto label_16;
label_16:;
	{
	LINE_NUMBER(1905);
	if ((frame[7].o) == nullptr) goto label_28;
	}
	INST_ILOAD(8);
	if ((--sp)->i == 0) goto label_28;
	{
	LINE_NUMBER(1906);
	((java_util_concurrent_CompletableFuture$Signaller *) NULL_CHECK((frame[7].o)))->F_thread = (jref) (jobject(nullptr));
	LINE_NUMBER(1907);
	if ((frame[9].o) != nullptr) goto label_28;
	}
	{
	LINE_NUMBER(1908);
	((func_java_util_concurrent_CompletableFuture_cleanStack) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_util_concurrent_CompletableFuture_cleanStack])(ctx, (frame[0].o));
	}
label_28:;
	{
	LINE_NUMBER(1910);
	if ((frame[9].o) != nullptr) goto label_32;
	}
	{
	sp[0].o = (jobject)((java_util_concurrent_CompletableFuture *) NULL_CHECK((frame[0].o)))->F_result;
	frame[9].o = sp[0].o;
	if (sp[0].o == nullptr) goto label_33;
	}
label_32:;
	{
	LINE_NUMBER(1911);
	((func_java_util_concurrent_CompletableFuture_postComplete) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_util_concurrent_CompletableFuture_postComplete])(ctx, (frame[0].o));
	}
label_33:;
	{
	LINE_NUMBER(1912);
	if ((frame[9].o) != nullptr) goto label_34;
	}
	INST_ALOAD(7);
	if ((--sp)->o == nullptr) goto label_7;
	{
	if (((jint)((java_util_concurrent_CompletableFuture$Signaller *) NULL_CHECK((frame[7].o)))->F_interrupted) == 0) goto label_7;
	}
label_34:;
	{
	LINE_NUMBER(1913);
	popStackFrame(ctx);
	return (frame[9].o);
	}
label_7:;
	{
	LINE_NUMBER(1915);
	clinit_java_util_concurrent_TimeoutException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_util_concurrent_TimeoutException);
	init_java_util_concurrent_TimeoutException(ctx, sp[0].o);
	throwException(ctx, sp[0].o);	}

	popStackFrame(ctx);
}

void init_java_util_concurrent_CompletableFuture(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/concurrent/CompletableFuture:<init>", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_util_concurrent_CompletableFuture(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(1923);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(1924);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_java_util_concurrent_CompletableFuture_java_lang_Object(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/concurrent/CompletableFuture:<init>", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_util_concurrent_CompletableFuture(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(1929);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(1930);
	((java_util_concurrent_CompletableFuture *) NULL_CHECK((frame[0].o)))->F_result = (jref) (frame[1].o);
	LINE_NUMBER(1931);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject SM_java_util_concurrent_CompletableFuture_supplyAsync_java_util_function_Supplier_R_java_util_concurrent_CompletableFuture(jcontext ctx, jobject param0) {
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/concurrent/CompletableFuture:supplyAsync", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_util_concurrent_CompletableFuture(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(1944);
	clinit_java_util_concurrent_CompletableFuture(ctx);
	sp[0].o = (jobject)SF_java_util_concurrent_CompletableFuture_ASYNC_POOL;
	sp[0].o = (jobject)SM_java_util_concurrent_CompletableFuture_asyncSupplyStage_java_util_concurrent_Executor_java_util_function_Supplier_R_java_util_concurrent_CompletableFuture(ctx, sp[0].o, (frame[0].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject SM_java_util_concurrent_CompletableFuture_supplyAsync_java_util_function_Supplier_java_util_concurrent_Executor_R_java_util_concurrent_CompletableFuture(jcontext ctx, jobject param0, jobject param1) {
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/concurrent/CompletableFuture:supplyAsync", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_util_concurrent_CompletableFuture(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	{
	LINE_NUMBER(1960);
	sp[0].o = (jobject)SM_java_util_concurrent_CompletableFuture_screenExecutor_java_util_concurrent_Executor_R_java_util_concurrent_Executor(ctx, (frame[1].o));
	sp[0].o = (jobject)SM_java_util_concurrent_CompletableFuture_asyncSupplyStage_java_util_concurrent_Executor_java_util_function_Supplier_R_java_util_concurrent_CompletableFuture(ctx, sp[0].o, (frame[0].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject SM_java_util_concurrent_CompletableFuture_runAsync_java_lang_Runnable_R_java_util_concurrent_CompletableFuture(jcontext ctx, jobject param0) {
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/concurrent/CompletableFuture:runAsync", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_util_concurrent_CompletableFuture(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(1973);
	clinit_java_util_concurrent_CompletableFuture(ctx);
	sp[0].o = (jobject)SF_java_util_concurrent_CompletableFuture_ASYNC_POOL;
	sp[0].o = (jobject)SM_java_util_concurrent_CompletableFuture_asyncRunStage_java_util_concurrent_Executor_java_lang_Runnable_R_java_util_concurrent_CompletableFuture(ctx, sp[0].o, (frame[0].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject SM_java_util_concurrent_CompletableFuture_runAsync_java_lang_Runnable_java_util_concurrent_Executor_R_java_util_concurrent_CompletableFuture(jcontext ctx, jobject param0, jobject param1) {
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/concurrent/CompletableFuture:runAsync", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_util_concurrent_CompletableFuture(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	{
	LINE_NUMBER(1988);
	sp[0].o = (jobject)SM_java_util_concurrent_CompletableFuture_screenExecutor_java_util_concurrent_Executor_R_java_util_concurrent_Executor(ctx, (frame[1].o));
	sp[0].o = (jobject)SM_java_util_concurrent_CompletableFuture_asyncRunStage_java_util_concurrent_Executor_java_lang_Runnable_R_java_util_concurrent_CompletableFuture(ctx, sp[0].o, (frame[0].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject SM_java_util_concurrent_CompletableFuture_completedFuture_java_lang_Object_R_java_util_concurrent_CompletableFuture(jcontext ctx, jobject param0) {
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/concurrent/CompletableFuture:completedFuture", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_util_concurrent_CompletableFuture(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(2000);
	clinit_java_util_concurrent_CompletableFuture(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_util_concurrent_CompletableFuture);
	sp[1].o = sp[0].o;
	sp += 2;
	if ((frame[0].o) != nullptr) goto label_1;
	}
	clinit_java_util_concurrent_CompletableFuture(ctx);
	(sp++)->o = SF_java_util_concurrent_CompletableFuture_NIL;
	goto label_2;
label_1:;
	INST_ALOAD(0);
label_2:;
	POP_N(2); // Pop method args
	init_java_util_concurrent_CompletableFuture_java_lang_Object(ctx, sp[0].o, sp[1].o);
	popStackFrame(ctx);
	INST_ARETURN();

	popStackFrame(ctx);
}

jbool M_java_util_concurrent_CompletableFuture_isDone_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/concurrent/CompletableFuture:isDone", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(2010);
	sp[0].o = (jobject)((java_util_concurrent_CompletableFuture *) NULL_CHECK((frame[0].o)))->F_result;
	if (sp[0].o == nullptr) goto label_1;
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

jobject M_java_util_concurrent_CompletableFuture_get_R_java_lang_Object(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/concurrent/CompletableFuture:get", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(2026);
	sp[0].o = (jobject)((java_util_concurrent_CompletableFuture *) NULL_CHECK((frame[0].o)))->F_result;
	frame[1].o = sp[0].o;
	if (sp[0].o != nullptr) goto label_2;
	}
	{
	LINE_NUMBER(2027);
	sp[0].o = (jobject)M_java_util_concurrent_CompletableFuture_waitingGet_boolean_R_java_lang_Object(ctx, (frame[0].o), (jint(1)));
	frame[1].o = sp[0].o;
	}
label_2:;
	{
	LINE_NUMBER(2028);
	sp[0].o = (jobject)SM_java_util_concurrent_CompletableFuture_reportGet_java_lang_Object_R_java_lang_Object(ctx, (frame[1].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_java_util_concurrent_CompletableFuture_get_long_java_util_concurrent_TimeUnit_R_java_lang_Object(jcontext ctx, jobject self, jlong param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[10];
	auto stack = &frame[7];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/concurrent/CompletableFuture:get", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].l = param0;
	frame[3].o = param1;
	{
	LINE_NUMBER(2047);
	jlong temp0 = (jlong)((func_java_util_concurrent_TimeUnit_toNanos_long_R_long) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_java_util_concurrent_TimeUnit_toNanos_long_R_long])(ctx, (frame[3].o), (frame[1].l));
	frame[4].l = temp0;
	LINE_NUMBER(2049);
	sp[0].o = (jobject)((java_util_concurrent_CompletableFuture *) NULL_CHECK((frame[0].o)))->F_result;
	frame[6].o = sp[0].o;
	if (sp[0].o != nullptr) goto label_3;
	}
	{
	LINE_NUMBER(2050);
	sp[0].o = (jobject)M_java_util_concurrent_CompletableFuture_timedGet_long_R_java_lang_Object(ctx, (frame[0].o), (frame[4].l));
	frame[6].o = sp[0].o;
	}
label_3:;
	{
	LINE_NUMBER(2051);
	sp[0].o = (jobject)SM_java_util_concurrent_CompletableFuture_reportGet_java_lang_Object_R_java_lang_Object(ctx, (frame[6].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_java_util_concurrent_CompletableFuture_join_R_java_lang_Object(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/concurrent/CompletableFuture:join", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(2071);
	sp[0].o = (jobject)((java_util_concurrent_CompletableFuture *) NULL_CHECK((frame[0].o)))->F_result;
	frame[1].o = sp[0].o;
	if (sp[0].o != nullptr) goto label_2;
	}
	{
	LINE_NUMBER(2072);
	sp[0].o = (jobject)M_java_util_concurrent_CompletableFuture_waitingGet_boolean_R_java_lang_Object(ctx, (frame[0].o), (jint(0)));
	frame[1].o = sp[0].o;
	}
label_2:;
	{
	LINE_NUMBER(2073);
	sp[0].o = (jobject)SM_java_util_concurrent_CompletableFuture_reportJoin_java_lang_Object_R_java_lang_Object(ctx, (frame[1].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_java_util_concurrent_CompletableFuture_getNow_java_lang_Object_R_java_lang_Object(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/concurrent/CompletableFuture:getNow", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(2089);
	sp[0].o = (jobject)((java_util_concurrent_CompletableFuture *) NULL_CHECK((frame[0].o)))->F_result;
	frame[2].o = sp[0].o;
	if (sp[0].o != nullptr) goto label_2;
	}
	INST_ALOAD(1);
	goto label_3;
label_2:;
	INST_ALOAD(2);
	POP_N(1); // Pop method args
	sp->o = (jobject)SM_java_util_concurrent_CompletableFuture_reportJoin_java_lang_Object_R_java_lang_Object(ctx, sp[0].o);
	sp++;
label_3:;
	popStackFrame(ctx);
	INST_ARETURN();

	popStackFrame(ctx);
}

jbool M_java_util_concurrent_CompletableFuture_complete_java_lang_Object_R_boolean(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/concurrent/CompletableFuture:complete", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(2101);
	jint temp0 = (jint)((func_java_util_concurrent_CompletableFuture_completeValue_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_util_concurrent_CompletableFuture_completeValue_java_lang_Object_R_boolean])(ctx, (frame[0].o), (frame[1].o));
	frame[2].i = temp0;
	LINE_NUMBER(2102);
	((func_java_util_concurrent_CompletableFuture_postComplete) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_util_concurrent_CompletableFuture_postComplete])(ctx, (frame[0].o));
	LINE_NUMBER(2103);
	popStackFrame(ctx);
	return (frame[2].i);
	}

	popStackFrame(ctx);
}

jbool M_java_util_concurrent_CompletableFuture_completeExceptionally_java_lang_Throwable_R_boolean(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/concurrent/CompletableFuture:completeExceptionally", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(2115);
	if ((frame[1].o) != nullptr) goto label_1;
	}
	{
	clinit_java_lang_NullPointerException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_NullPointerException);
	init_java_lang_NullPointerException(ctx, sp[0].o);
	throwException(ctx, sp[0].o);	}
label_1:;
	{
	LINE_NUMBER(2116);
	sp[0].o = frame[0].o;
	clinit_java_util_concurrent_CompletableFuture$AltResult(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_util_concurrent_CompletableFuture$AltResult);
	init_java_util_concurrent_CompletableFuture$AltResult_java_lang_Throwable(ctx, sp[1].o, (frame[1].o));
	jint temp0 = (jint)((func_java_util_concurrent_CompletableFuture_internalComplete_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_concurrent_CompletableFuture_internalComplete_java_lang_Object_R_boolean])(ctx, sp[0].o, sp[1].o);
	frame[2].i = temp0;
	LINE_NUMBER(2117);
	((func_java_util_concurrent_CompletableFuture_postComplete) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_util_concurrent_CompletableFuture_postComplete])(ctx, (frame[0].o));
	LINE_NUMBER(2118);
	popStackFrame(ctx);
	return (frame[2].i);
	}

	popStackFrame(ctx);
}

jobject M_java_util_concurrent_CompletableFuture_thenApply_java_util_function_Function_R_java_util_concurrent_CompletableFuture(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/concurrent/CompletableFuture:thenApply", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(2123);
	sp[0].o = (jobject)M_java_util_concurrent_CompletableFuture_uniApplyStage_java_util_concurrent_Executor_java_util_function_Function_R_java_util_concurrent_CompletableFuture(ctx, (frame[0].o), (jobject(nullptr)), (frame[1].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_java_util_concurrent_CompletableFuture_thenApplyAsync_java_util_function_Function_R_java_util_concurrent_CompletableFuture(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/concurrent/CompletableFuture:thenApplyAsync", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(2128);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((func_java_util_concurrent_CompletableFuture_defaultExecutor_R_java_util_concurrent_Executor) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_util_concurrent_CompletableFuture_defaultExecutor_R_java_util_concurrent_Executor])(ctx, (frame[0].o));
	sp[0].o = (jobject)M_java_util_concurrent_CompletableFuture_uniApplyStage_java_util_concurrent_Executor_java_util_function_Function_R_java_util_concurrent_CompletableFuture(ctx, sp[0].o, sp[1].o, (frame[1].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_java_util_concurrent_CompletableFuture_thenApplyAsync_java_util_function_Function_java_util_concurrent_Executor_R_java_util_concurrent_CompletableFuture(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/concurrent/CompletableFuture:thenApplyAsync", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(2133);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)SM_java_util_concurrent_CompletableFuture_screenExecutor_java_util_concurrent_Executor_R_java_util_concurrent_Executor(ctx, (frame[2].o));
	sp[0].o = (jobject)M_java_util_concurrent_CompletableFuture_uniApplyStage_java_util_concurrent_Executor_java_util_function_Function_R_java_util_concurrent_CompletableFuture(ctx, sp[0].o, sp[1].o, (frame[1].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_java_util_concurrent_CompletableFuture_thenAccept_java_util_function_Consumer_R_java_util_concurrent_CompletableFuture(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/concurrent/CompletableFuture:thenAccept", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(2137);
	sp[0].o = (jobject)M_java_util_concurrent_CompletableFuture_uniAcceptStage_java_util_concurrent_Executor_java_util_function_Consumer_R_java_util_concurrent_CompletableFuture(ctx, (frame[0].o), (jobject(nullptr)), (frame[1].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_java_util_concurrent_CompletableFuture_thenAcceptAsync_java_util_function_Consumer_R_java_util_concurrent_CompletableFuture(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/concurrent/CompletableFuture:thenAcceptAsync", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(2141);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((func_java_util_concurrent_CompletableFuture_defaultExecutor_R_java_util_concurrent_Executor) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_util_concurrent_CompletableFuture_defaultExecutor_R_java_util_concurrent_Executor])(ctx, (frame[0].o));
	sp[0].o = (jobject)M_java_util_concurrent_CompletableFuture_uniAcceptStage_java_util_concurrent_Executor_java_util_function_Consumer_R_java_util_concurrent_CompletableFuture(ctx, sp[0].o, sp[1].o, (frame[1].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_java_util_concurrent_CompletableFuture_thenAcceptAsync_java_util_function_Consumer_java_util_concurrent_Executor_R_java_util_concurrent_CompletableFuture(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/concurrent/CompletableFuture:thenAcceptAsync", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(2146);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)SM_java_util_concurrent_CompletableFuture_screenExecutor_java_util_concurrent_Executor_R_java_util_concurrent_Executor(ctx, (frame[2].o));
	sp[0].o = (jobject)M_java_util_concurrent_CompletableFuture_uniAcceptStage_java_util_concurrent_Executor_java_util_function_Consumer_R_java_util_concurrent_CompletableFuture(ctx, sp[0].o, sp[1].o, (frame[1].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_java_util_concurrent_CompletableFuture_thenRun_java_lang_Runnable_R_java_util_concurrent_CompletableFuture(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/concurrent/CompletableFuture:thenRun", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(2150);
	sp[0].o = (jobject)M_java_util_concurrent_CompletableFuture_uniRunStage_java_util_concurrent_Executor_java_lang_Runnable_R_java_util_concurrent_CompletableFuture(ctx, (frame[0].o), (jobject(nullptr)), (frame[1].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_java_util_concurrent_CompletableFuture_thenRunAsync_java_lang_Runnable_R_java_util_concurrent_CompletableFuture(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/concurrent/CompletableFuture:thenRunAsync", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(2154);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((func_java_util_concurrent_CompletableFuture_defaultExecutor_R_java_util_concurrent_Executor) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_util_concurrent_CompletableFuture_defaultExecutor_R_java_util_concurrent_Executor])(ctx, (frame[0].o));
	sp[0].o = (jobject)M_java_util_concurrent_CompletableFuture_uniRunStage_java_util_concurrent_Executor_java_lang_Runnable_R_java_util_concurrent_CompletableFuture(ctx, sp[0].o, sp[1].o, (frame[1].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_java_util_concurrent_CompletableFuture_thenRunAsync_java_lang_Runnable_java_util_concurrent_Executor_R_java_util_concurrent_CompletableFuture(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/concurrent/CompletableFuture:thenRunAsync", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(2159);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)SM_java_util_concurrent_CompletableFuture_screenExecutor_java_util_concurrent_Executor_R_java_util_concurrent_Executor(ctx, (frame[2].o));
	sp[0].o = (jobject)M_java_util_concurrent_CompletableFuture_uniRunStage_java_util_concurrent_Executor_java_lang_Runnable_R_java_util_concurrent_CompletableFuture(ctx, sp[0].o, sp[1].o, (frame[1].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_java_util_concurrent_CompletableFuture_thenCombine_java_util_concurrent_CompletionStage_java_util_function_BiFunction_R_java_util_concurrent_CompletableFuture(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/concurrent/CompletableFuture:thenCombine", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(2165);
	sp[0].o = (jobject)M_java_util_concurrent_CompletableFuture_biApplyStage_java_util_concurrent_Executor_java_util_concurrent_CompletionStage_java_util_function_BiFunction_R_java_util_concurrent_CompletableFuture(ctx, (frame[0].o), (jobject(nullptr)), (frame[1].o), (frame[2].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_java_util_concurrent_CompletableFuture_thenCombineAsync_java_util_concurrent_CompletionStage_java_util_function_BiFunction_R_java_util_concurrent_CompletableFuture(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/concurrent/CompletableFuture:thenCombineAsync", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(2171);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((func_java_util_concurrent_CompletableFuture_defaultExecutor_R_java_util_concurrent_Executor) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_util_concurrent_CompletableFuture_defaultExecutor_R_java_util_concurrent_Executor])(ctx, (frame[0].o));
	sp[0].o = (jobject)M_java_util_concurrent_CompletableFuture_biApplyStage_java_util_concurrent_Executor_java_util_concurrent_CompletionStage_java_util_function_BiFunction_R_java_util_concurrent_CompletableFuture(ctx, sp[0].o, sp[1].o, (frame[1].o), (frame[2].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_java_util_concurrent_CompletableFuture_thenCombineAsync_java_util_concurrent_CompletionStage_java_util_function_BiFunction_java_util_concurrent_Executor_R_java_util_concurrent_CompletableFuture(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/concurrent/CompletableFuture:thenCombineAsync", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].o = param2;
	{
	LINE_NUMBER(2177);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)SM_java_util_concurrent_CompletableFuture_screenExecutor_java_util_concurrent_Executor_R_java_util_concurrent_Executor(ctx, (frame[3].o));
	sp[0].o = (jobject)M_java_util_concurrent_CompletableFuture_biApplyStage_java_util_concurrent_Executor_java_util_concurrent_CompletionStage_java_util_function_BiFunction_R_java_util_concurrent_CompletableFuture(ctx, sp[0].o, sp[1].o, (frame[1].o), (frame[2].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_java_util_concurrent_CompletableFuture_thenAcceptBoth_java_util_concurrent_CompletionStage_java_util_function_BiConsumer_R_java_util_concurrent_CompletableFuture(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/concurrent/CompletableFuture:thenAcceptBoth", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(2183);
	sp[0].o = (jobject)M_java_util_concurrent_CompletableFuture_biAcceptStage_java_util_concurrent_Executor_java_util_concurrent_CompletionStage_java_util_function_BiConsumer_R_java_util_concurrent_CompletableFuture(ctx, (frame[0].o), (jobject(nullptr)), (frame[1].o), (frame[2].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_java_util_concurrent_CompletableFuture_thenAcceptBothAsync_java_util_concurrent_CompletionStage_java_util_function_BiConsumer_R_java_util_concurrent_CompletableFuture(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/concurrent/CompletableFuture:thenAcceptBothAsync", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(2189);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((func_java_util_concurrent_CompletableFuture_defaultExecutor_R_java_util_concurrent_Executor) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_util_concurrent_CompletableFuture_defaultExecutor_R_java_util_concurrent_Executor])(ctx, (frame[0].o));
	sp[0].o = (jobject)M_java_util_concurrent_CompletableFuture_biAcceptStage_java_util_concurrent_Executor_java_util_concurrent_CompletionStage_java_util_function_BiConsumer_R_java_util_concurrent_CompletableFuture(ctx, sp[0].o, sp[1].o, (frame[1].o), (frame[2].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_java_util_concurrent_CompletableFuture_thenAcceptBothAsync_java_util_concurrent_CompletionStage_java_util_function_BiConsumer_java_util_concurrent_Executor_R_java_util_concurrent_CompletableFuture(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/concurrent/CompletableFuture:thenAcceptBothAsync", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].o = param2;
	{
	LINE_NUMBER(2195);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)SM_java_util_concurrent_CompletableFuture_screenExecutor_java_util_concurrent_Executor_R_java_util_concurrent_Executor(ctx, (frame[3].o));
	sp[0].o = (jobject)M_java_util_concurrent_CompletableFuture_biAcceptStage_java_util_concurrent_Executor_java_util_concurrent_CompletionStage_java_util_function_BiConsumer_R_java_util_concurrent_CompletableFuture(ctx, sp[0].o, sp[1].o, (frame[1].o), (frame[2].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_java_util_concurrent_CompletableFuture_runAfterBoth_java_util_concurrent_CompletionStage_java_lang_Runnable_R_java_util_concurrent_CompletableFuture(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/concurrent/CompletableFuture:runAfterBoth", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(2200);
	sp[0].o = (jobject)M_java_util_concurrent_CompletableFuture_biRunStage_java_util_concurrent_Executor_java_util_concurrent_CompletionStage_java_lang_Runnable_R_java_util_concurrent_CompletableFuture(ctx, (frame[0].o), (jobject(nullptr)), (frame[1].o), (frame[2].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_java_util_concurrent_CompletableFuture_runAfterBothAsync_java_util_concurrent_CompletionStage_java_lang_Runnable_R_java_util_concurrent_CompletableFuture(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/concurrent/CompletableFuture:runAfterBothAsync", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(2205);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((func_java_util_concurrent_CompletableFuture_defaultExecutor_R_java_util_concurrent_Executor) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_util_concurrent_CompletableFuture_defaultExecutor_R_java_util_concurrent_Executor])(ctx, (frame[0].o));
	sp[0].o = (jobject)M_java_util_concurrent_CompletableFuture_biRunStage_java_util_concurrent_Executor_java_util_concurrent_CompletionStage_java_lang_Runnable_R_java_util_concurrent_CompletableFuture(ctx, sp[0].o, sp[1].o, (frame[1].o), (frame[2].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_java_util_concurrent_CompletableFuture_runAfterBothAsync_java_util_concurrent_CompletionStage_java_lang_Runnable_java_util_concurrent_Executor_R_java_util_concurrent_CompletableFuture(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/concurrent/CompletableFuture:runAfterBothAsync", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].o = param2;
	{
	LINE_NUMBER(2211);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)SM_java_util_concurrent_CompletableFuture_screenExecutor_java_util_concurrent_Executor_R_java_util_concurrent_Executor(ctx, (frame[3].o));
	sp[0].o = (jobject)M_java_util_concurrent_CompletableFuture_biRunStage_java_util_concurrent_Executor_java_util_concurrent_CompletionStage_java_lang_Runnable_R_java_util_concurrent_CompletableFuture(ctx, sp[0].o, sp[1].o, (frame[1].o), (frame[2].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_java_util_concurrent_CompletableFuture_applyToEither_java_util_concurrent_CompletionStage_java_util_function_Function_R_java_util_concurrent_CompletableFuture(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/concurrent/CompletableFuture:applyToEither", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(2216);
	sp[0].o = (jobject)M_java_util_concurrent_CompletableFuture_orApplyStage_java_util_concurrent_Executor_java_util_concurrent_CompletionStage_java_util_function_Function_R_java_util_concurrent_CompletableFuture(ctx, (frame[0].o), (jobject(nullptr)), (frame[1].o), (frame[2].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_java_util_concurrent_CompletableFuture_applyToEitherAsync_java_util_concurrent_CompletionStage_java_util_function_Function_R_java_util_concurrent_CompletableFuture(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/concurrent/CompletableFuture:applyToEitherAsync", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(2221);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((func_java_util_concurrent_CompletableFuture_defaultExecutor_R_java_util_concurrent_Executor) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_util_concurrent_CompletableFuture_defaultExecutor_R_java_util_concurrent_Executor])(ctx, (frame[0].o));
	sp[0].o = (jobject)M_java_util_concurrent_CompletableFuture_orApplyStage_java_util_concurrent_Executor_java_util_concurrent_CompletionStage_java_util_function_Function_R_java_util_concurrent_CompletableFuture(ctx, sp[0].o, sp[1].o, (frame[1].o), (frame[2].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_java_util_concurrent_CompletableFuture_applyToEitherAsync_java_util_concurrent_CompletionStage_java_util_function_Function_java_util_concurrent_Executor_R_java_util_concurrent_CompletableFuture(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/concurrent/CompletableFuture:applyToEitherAsync", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].o = param2;
	{
	LINE_NUMBER(2227);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)SM_java_util_concurrent_CompletableFuture_screenExecutor_java_util_concurrent_Executor_R_java_util_concurrent_Executor(ctx, (frame[3].o));
	sp[0].o = (jobject)M_java_util_concurrent_CompletableFuture_orApplyStage_java_util_concurrent_Executor_java_util_concurrent_CompletionStage_java_util_function_Function_R_java_util_concurrent_CompletableFuture(ctx, sp[0].o, sp[1].o, (frame[1].o), (frame[2].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_java_util_concurrent_CompletableFuture_acceptEither_java_util_concurrent_CompletionStage_java_util_function_Consumer_R_java_util_concurrent_CompletableFuture(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/concurrent/CompletableFuture:acceptEither", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(2232);
	sp[0].o = (jobject)M_java_util_concurrent_CompletableFuture_orAcceptStage_java_util_concurrent_Executor_java_util_concurrent_CompletionStage_java_util_function_Consumer_R_java_util_concurrent_CompletableFuture(ctx, (frame[0].o), (jobject(nullptr)), (frame[1].o), (frame[2].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_java_util_concurrent_CompletableFuture_acceptEitherAsync_java_util_concurrent_CompletionStage_java_util_function_Consumer_R_java_util_concurrent_CompletableFuture(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/concurrent/CompletableFuture:acceptEitherAsync", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(2237);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((func_java_util_concurrent_CompletableFuture_defaultExecutor_R_java_util_concurrent_Executor) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_util_concurrent_CompletableFuture_defaultExecutor_R_java_util_concurrent_Executor])(ctx, (frame[0].o));
	sp[0].o = (jobject)M_java_util_concurrent_CompletableFuture_orAcceptStage_java_util_concurrent_Executor_java_util_concurrent_CompletionStage_java_util_function_Consumer_R_java_util_concurrent_CompletableFuture(ctx, sp[0].o, sp[1].o, (frame[1].o), (frame[2].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_java_util_concurrent_CompletableFuture_acceptEitherAsync_java_util_concurrent_CompletionStage_java_util_function_Consumer_java_util_concurrent_Executor_R_java_util_concurrent_CompletableFuture(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/concurrent/CompletableFuture:acceptEitherAsync", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].o = param2;
	{
	LINE_NUMBER(2243);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)SM_java_util_concurrent_CompletableFuture_screenExecutor_java_util_concurrent_Executor_R_java_util_concurrent_Executor(ctx, (frame[3].o));
	sp[0].o = (jobject)M_java_util_concurrent_CompletableFuture_orAcceptStage_java_util_concurrent_Executor_java_util_concurrent_CompletionStage_java_util_function_Consumer_R_java_util_concurrent_CompletableFuture(ctx, sp[0].o, sp[1].o, (frame[1].o), (frame[2].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_java_util_concurrent_CompletableFuture_runAfterEither_java_util_concurrent_CompletionStage_java_lang_Runnable_R_java_util_concurrent_CompletableFuture(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/concurrent/CompletableFuture:runAfterEither", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(2248);
	sp[0].o = (jobject)M_java_util_concurrent_CompletableFuture_orRunStage_java_util_concurrent_Executor_java_util_concurrent_CompletionStage_java_lang_Runnable_R_java_util_concurrent_CompletableFuture(ctx, (frame[0].o), (jobject(nullptr)), (frame[1].o), (frame[2].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_java_util_concurrent_CompletableFuture_runAfterEitherAsync_java_util_concurrent_CompletionStage_java_lang_Runnable_R_java_util_concurrent_CompletableFuture(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/concurrent/CompletableFuture:runAfterEitherAsync", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(2253);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((func_java_util_concurrent_CompletableFuture_defaultExecutor_R_java_util_concurrent_Executor) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_util_concurrent_CompletableFuture_defaultExecutor_R_java_util_concurrent_Executor])(ctx, (frame[0].o));
	sp[0].o = (jobject)M_java_util_concurrent_CompletableFuture_orRunStage_java_util_concurrent_Executor_java_util_concurrent_CompletionStage_java_lang_Runnable_R_java_util_concurrent_CompletableFuture(ctx, sp[0].o, sp[1].o, (frame[1].o), (frame[2].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_java_util_concurrent_CompletableFuture_runAfterEitherAsync_java_util_concurrent_CompletionStage_java_lang_Runnable_java_util_concurrent_Executor_R_java_util_concurrent_CompletableFuture(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/concurrent/CompletableFuture:runAfterEitherAsync", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].o = param2;
	{
	LINE_NUMBER(2259);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)SM_java_util_concurrent_CompletableFuture_screenExecutor_java_util_concurrent_Executor_R_java_util_concurrent_Executor(ctx, (frame[3].o));
	sp[0].o = (jobject)M_java_util_concurrent_CompletableFuture_orRunStage_java_util_concurrent_Executor_java_util_concurrent_CompletionStage_java_lang_Runnable_R_java_util_concurrent_CompletableFuture(ctx, sp[0].o, sp[1].o, (frame[1].o), (frame[2].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_java_util_concurrent_CompletableFuture_thenCompose_java_util_function_Function_R_java_util_concurrent_CompletableFuture(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/concurrent/CompletableFuture:thenCompose", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(2264);
	sp[0].o = (jobject)M_java_util_concurrent_CompletableFuture_uniComposeStage_java_util_concurrent_Executor_java_util_function_Function_R_java_util_concurrent_CompletableFuture(ctx, (frame[0].o), (jobject(nullptr)), (frame[1].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_java_util_concurrent_CompletableFuture_thenComposeAsync_java_util_function_Function_R_java_util_concurrent_CompletableFuture(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/concurrent/CompletableFuture:thenComposeAsync", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(2269);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((func_java_util_concurrent_CompletableFuture_defaultExecutor_R_java_util_concurrent_Executor) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_util_concurrent_CompletableFuture_defaultExecutor_R_java_util_concurrent_Executor])(ctx, (frame[0].o));
	sp[0].o = (jobject)M_java_util_concurrent_CompletableFuture_uniComposeStage_java_util_concurrent_Executor_java_util_function_Function_R_java_util_concurrent_CompletableFuture(ctx, sp[0].o, sp[1].o, (frame[1].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_java_util_concurrent_CompletableFuture_thenComposeAsync_java_util_function_Function_java_util_concurrent_Executor_R_java_util_concurrent_CompletableFuture(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/concurrent/CompletableFuture:thenComposeAsync", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(2275);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)SM_java_util_concurrent_CompletableFuture_screenExecutor_java_util_concurrent_Executor_R_java_util_concurrent_Executor(ctx, (frame[2].o));
	sp[0].o = (jobject)M_java_util_concurrent_CompletableFuture_uniComposeStage_java_util_concurrent_Executor_java_util_function_Function_R_java_util_concurrent_CompletableFuture(ctx, sp[0].o, sp[1].o, (frame[1].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_java_util_concurrent_CompletableFuture_whenComplete_java_util_function_BiConsumer_R_java_util_concurrent_CompletableFuture(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/concurrent/CompletableFuture:whenComplete", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(2280);
	sp[0].o = (jobject)M_java_util_concurrent_CompletableFuture_uniWhenCompleteStage_java_util_concurrent_Executor_java_util_function_BiConsumer_R_java_util_concurrent_CompletableFuture(ctx, (frame[0].o), (jobject(nullptr)), (frame[1].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_java_util_concurrent_CompletableFuture_whenCompleteAsync_java_util_function_BiConsumer_R_java_util_concurrent_CompletableFuture(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/concurrent/CompletableFuture:whenCompleteAsync", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(2285);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((func_java_util_concurrent_CompletableFuture_defaultExecutor_R_java_util_concurrent_Executor) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_util_concurrent_CompletableFuture_defaultExecutor_R_java_util_concurrent_Executor])(ctx, (frame[0].o));
	sp[0].o = (jobject)M_java_util_concurrent_CompletableFuture_uniWhenCompleteStage_java_util_concurrent_Executor_java_util_function_BiConsumer_R_java_util_concurrent_CompletableFuture(ctx, sp[0].o, sp[1].o, (frame[1].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_java_util_concurrent_CompletableFuture_whenCompleteAsync_java_util_function_BiConsumer_java_util_concurrent_Executor_R_java_util_concurrent_CompletableFuture(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/concurrent/CompletableFuture:whenCompleteAsync", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(2290);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)SM_java_util_concurrent_CompletableFuture_screenExecutor_java_util_concurrent_Executor_R_java_util_concurrent_Executor(ctx, (frame[2].o));
	sp[0].o = (jobject)M_java_util_concurrent_CompletableFuture_uniWhenCompleteStage_java_util_concurrent_Executor_java_util_function_BiConsumer_R_java_util_concurrent_CompletableFuture(ctx, sp[0].o, sp[1].o, (frame[1].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_java_util_concurrent_CompletableFuture_handle_java_util_function_BiFunction_R_java_util_concurrent_CompletableFuture(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/concurrent/CompletableFuture:handle", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(2295);
	sp[0].o = (jobject)M_java_util_concurrent_CompletableFuture_uniHandleStage_java_util_concurrent_Executor_java_util_function_BiFunction_R_java_util_concurrent_CompletableFuture(ctx, (frame[0].o), (jobject(nullptr)), (frame[1].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_java_util_concurrent_CompletableFuture_handleAsync_java_util_function_BiFunction_R_java_util_concurrent_CompletableFuture(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/concurrent/CompletableFuture:handleAsync", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(2300);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((func_java_util_concurrent_CompletableFuture_defaultExecutor_R_java_util_concurrent_Executor) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_util_concurrent_CompletableFuture_defaultExecutor_R_java_util_concurrent_Executor])(ctx, (frame[0].o));
	sp[0].o = (jobject)M_java_util_concurrent_CompletableFuture_uniHandleStage_java_util_concurrent_Executor_java_util_function_BiFunction_R_java_util_concurrent_CompletableFuture(ctx, sp[0].o, sp[1].o, (frame[1].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_java_util_concurrent_CompletableFuture_handleAsync_java_util_function_BiFunction_java_util_concurrent_Executor_R_java_util_concurrent_CompletableFuture(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/concurrent/CompletableFuture:handleAsync", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(2305);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)SM_java_util_concurrent_CompletableFuture_screenExecutor_java_util_concurrent_Executor_R_java_util_concurrent_Executor(ctx, (frame[2].o));
	sp[0].o = (jobject)M_java_util_concurrent_CompletableFuture_uniHandleStage_java_util_concurrent_Executor_java_util_function_BiFunction_R_java_util_concurrent_CompletableFuture(ctx, sp[0].o, sp[1].o, (frame[1].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_java_util_concurrent_CompletableFuture_toCompletableFuture_R_java_util_concurrent_CompletableFuture(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/concurrent/CompletableFuture:toCompletableFuture", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(2314);
	popStackFrame(ctx);
	return (frame[0].o);
	}

	popStackFrame(ctx);
}

jobject M_java_util_concurrent_CompletableFuture_exceptionally_java_util_function_Function_R_java_util_concurrent_CompletableFuture(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/concurrent/CompletableFuture:exceptionally", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(2336);
	sp[0].o = (jobject)M_java_util_concurrent_CompletableFuture_uniExceptionallyStage_java_util_function_Function_R_java_util_concurrent_CompletableFuture(ctx, (frame[0].o), (frame[1].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject SM_java_util_concurrent_CompletableFuture_allOf_Array1_java_util_concurrent_CompletableFuture_R_java_util_concurrent_CompletableFuture(jcontext ctx, jobject param0) {
	jtype frame[5];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/concurrent/CompletableFuture:allOf", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_util_concurrent_CompletableFuture(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(2366);
	sp[0].o = (jobject)SM_java_util_concurrent_CompletableFuture_andTree_Array1_java_util_concurrent_CompletableFuture_int_int_R_java_util_concurrent_CompletableFuture(ctx, (frame[0].o), (jint(0)), ((((jarray) nullCheck(ctx, (frame[0].o)))->length) - (jint(1))));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject SM_java_util_concurrent_CompletableFuture_anyOf_Array1_java_util_concurrent_CompletableFuture_R_java_util_concurrent_CompletableFuture(jcontext ctx, jobject param0) {
	jtype frame[14];
	auto stack = &frame[8];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/concurrent/CompletableFuture:anyOf", 14 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_util_concurrent_CompletableFuture(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(2386);
	jint temp0 = ((jarray) nullCheck(ctx, (frame[0].o)))->length;
	frame[1].i = temp0;
	if (temp0 > (jint(1))) goto label_2;
	}
	{
	LINE_NUMBER(2387);
	if ((frame[1].i) != 0) goto label_4;
	}
	{
	LINE_NUMBER(2388);
	clinit_java_util_concurrent_CompletableFuture(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_util_concurrent_CompletableFuture);
	init_java_util_concurrent_CompletableFuture(ctx, sp[0].o);
	sp += 1;
	goto label_6;
	}
label_4:;
	{
	LINE_NUMBER(2389);
	sp[0].o = (jobject)SM_java_util_concurrent_CompletableFuture_uniCopyStage_java_util_concurrent_CompletableFuture_R_java_util_concurrent_CompletableFuture(ctx, ((jobject)ARRAY_ACCESS(jobject, (frame[0].o), (jint(0)))));
	sp += 1;
	}
label_6:;
	LINE_NUMBER(2387);
	popStackFrame(ctx);
	INST_ARETURN();
label_2:;
	{
	LINE_NUMBER(2390);
	frame[3].o = (frame[0].o);
	frame[4].i = (((jarray) nullCheck(ctx, (frame[3].o)))->length);
	frame[5].i = (jint(0));
	}
label_7:;
	{
	if ((frame[5].i) >= (frame[4].i)) goto label_8;
	}
	{
	frame[6].o = ((jobject)ARRAY_ACCESS(jobject, (frame[3].o), (frame[5].i)));
	LINE_NUMBER(2391);
	sp[0].o = (jobject)((java_util_concurrent_CompletableFuture *) NULL_CHECK((frame[6].o)))->F_result;
	frame[2].o = sp[0].o;
	if (sp[0].o == nullptr) goto label_11;
	}
	{
	LINE_NUMBER(2392);
	clinit_java_util_concurrent_CompletableFuture(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_util_concurrent_CompletableFuture);
	sp[1].o = (jobject)SM_java_util_concurrent_CompletableFuture_encodeRelay_java_lang_Object_R_java_lang_Object(ctx, (frame[2].o));
	init_java_util_concurrent_CompletableFuture_java_lang_Object(ctx, sp[0].o, sp[1].o);
	popStackFrame(ctx);
	return sp[0].o;
	}
label_11:;
	{
	LINE_NUMBER(2390);
	INST_IINC(5, 1);
	goto label_7;
	}
label_8:;
	{
	LINE_NUMBER(2393);
	sp[0].o = (jobject)((func_java_lang_Object_clone_R_java_lang_Object) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_lang_Object_clone_R_java_lang_Object])(ctx, (frame[0].o));
	frame[0].o = (checkCast(ctx, getArrayClass(&class_java_util_concurrent_CompletableFuture, 1), sp[0].o));
	LINE_NUMBER(2394);
	clinit_java_util_concurrent_CompletableFuture(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_util_concurrent_CompletableFuture);
	init_java_util_concurrent_CompletableFuture(ctx, sp[0].o);
	frame[3].o = sp[0].o;
	LINE_NUMBER(2395);
	frame[4].o = (frame[0].o);
	frame[5].i = (((jarray) nullCheck(ctx, (frame[4].o)))->length);
	frame[6].i = (jint(0));
	}
label_15:;
	{
	if ((frame[6].i) >= (frame[5].i)) goto label_16;
	}
	{
	frame[7].o = ((jobject)ARRAY_ACCESS(jobject, (frame[4].o), (frame[6].i)));
	LINE_NUMBER(2396);
	sp[0].o = frame[7].o;
	clinit_java_util_concurrent_CompletableFuture$AnyOf(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_util_concurrent_CompletableFuture$AnyOf);
	init_java_util_concurrent_CompletableFuture$AnyOf_java_util_concurrent_CompletableFuture_java_util_concurrent_CompletableFuture_Array1_java_util_concurrent_CompletableFuture(ctx, sp[1].o, (frame[3].o), (frame[7].o), (frame[0].o));
	((func_java_util_concurrent_CompletableFuture_unipush_java_util_concurrent_CompletableFuture$Completion) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_concurrent_CompletableFuture_unipush_java_util_concurrent_CompletableFuture$Completion])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(2395);
	INST_IINC(6, 1);
	goto label_15;
	}
label_16:;
	{
	LINE_NUMBER(2400);
	sp[0].o = (jobject)((java_util_concurrent_CompletableFuture *) NULL_CHECK((frame[3].o)))->F_result;
	if (sp[0].o == nullptr) goto label_19;
	}
	{
	LINE_NUMBER(2401);
	frame[4].i = (jint(0));
	frame[5].i = (((jarray) nullCheck(ctx, (frame[0].o)))->length);
	}
label_22:;
	{
	if ((frame[4].i) >= (frame[5].i)) goto label_19;
	}
	{
	LINE_NUMBER(2402);
	sp[0].o = (jobject)((java_util_concurrent_CompletableFuture *) NULL_CHECK(((jobject)ARRAY_ACCESS(jobject, (frame[0].o), (frame[4].i)))))->F_result;
	if (sp[0].o == nullptr) goto label_24;
	}
	LINE_NUMBER(2403);
	INST_IINC(4, 1);
label_26:;
	{
	if ((frame[4].i) >= (frame[5].i)) goto label_24;
	}
	{
	LINE_NUMBER(2404);
	sp[0].o = (jobject)((java_util_concurrent_CompletableFuture *) NULL_CHECK(((jobject)ARRAY_ACCESS(jobject, (frame[0].o), (frame[4].i)))))->F_result;
	if (sp[0].o != nullptr) goto label_28;
	}
	{
	LINE_NUMBER(2405);
	((func_java_util_concurrent_CompletableFuture_cleanStack) ((void **) nullCheck(ctx, ((jobject)ARRAY_ACCESS(jobject, (frame[0].o), (frame[4].i))))->vtable)[VTABLE_java_util_concurrent_CompletableFuture_cleanStack])(ctx, ((jobject)ARRAY_ACCESS(jobject, (frame[0].o), (frame[4].i))));
	}
label_28:;
	{
	LINE_NUMBER(2403);
	INST_IINC(4, 1);
	goto label_26;
	}
label_24:;
	{
	LINE_NUMBER(2401);
	INST_IINC(4, 1);
	goto label_22;
	}
label_19:;
	{
	LINE_NUMBER(2406);
	popStackFrame(ctx);
	return (frame[3].o);
	}

	popStackFrame(ctx);
}

jbool M_java_util_concurrent_CompletableFuture_cancel_boolean_R_boolean(jcontext ctx, jobject self, jbool param0) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/concurrent/CompletableFuture:cancel", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(2425);
	sp[0].o = (jobject)((java_util_concurrent_CompletableFuture *) NULL_CHECK((frame[0].o)))->F_result;
	if (sp[0].o != nullptr) goto label_1;
	}
	{
	sp[0].o = frame[0].o;
	clinit_java_util_concurrent_CompletableFuture$AltResult(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_util_concurrent_CompletableFuture$AltResult);
	clinit_java_util_concurrent_CancellationException(ctx);
	sp[2].o = gcAlloc(ctx, &class_java_util_concurrent_CancellationException);
	init_java_util_concurrent_CancellationException(ctx, sp[2].o);
	init_java_util_concurrent_CompletableFuture$AltResult_java_lang_Throwable(ctx, sp[1].o, sp[2].o);
	LINE_NUMBER(2426);
	jint temp0 = (jint)((func_java_util_concurrent_CompletableFuture_internalComplete_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_concurrent_CompletableFuture_internalComplete_java_lang_Object_R_boolean])(ctx, sp[0].o, sp[1].o);
	if (temp0 == 0) goto label_1;
	}
	INST_ICONST(1);
	goto label_3;
label_1:;
	INST_ICONST(0);
label_3:;
	{
	sp -= 1;
	frame[2].i = sp[0].i;
	LINE_NUMBER(2427);
	((func_java_util_concurrent_CompletableFuture_postComplete) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_util_concurrent_CompletableFuture_postComplete])(ctx, (frame[0].o));
	LINE_NUMBER(2428);
	if ((frame[2].i) != 0) goto label_6;
	}
	{
	jint temp0 = (jint)((func_java_util_concurrent_CompletableFuture_isCancelled_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_util_concurrent_CompletableFuture_isCancelled_R_boolean])(ctx, (frame[0].o));
	if (temp0 == 0) goto label_7;
	}
label_6:;
	INST_ICONST(1);
	goto label_8;
label_7:;
	INST_ICONST(0);
label_8:;
	popStackFrame(ctx);
	INST_IRETURN();

	popStackFrame(ctx);
}

jbool M_java_util_concurrent_CompletableFuture_isCancelled_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/concurrent/CompletableFuture:isCancelled", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(2440);
	sp[0].o = (jobject)((java_util_concurrent_CompletableFuture *) NULL_CHECK((frame[0].o)))->F_result;
	frame[1].o = sp[0].o;
	if ((isInstance(ctx, sp[0].o, &class_java_util_concurrent_CompletableFuture$AltResult)) == 0) goto label_2;
	}
	{
	sp[0].o = (jobject)((java_util_concurrent_CompletableFuture$AltResult *) NULL_CHECK((checkCast(ctx, &class_java_util_concurrent_CompletableFuture$AltResult, (frame[1].o)))))->F_ex;
	if ((isInstance(ctx, sp[0].o, &class_java_util_concurrent_CancellationException)) == 0) goto label_2;
	}
	INST_ICONST(1);
	goto label_3;
label_2:;
	INST_ICONST(0);
label_3:;
	popStackFrame(ctx);
	INST_IRETURN();

	popStackFrame(ctx);
}

jbool M_java_util_concurrent_CompletableFuture_isCompletedExceptionally_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/concurrent/CompletableFuture:isCompletedExceptionally", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(2456);
	sp[0].o = (jobject)((java_util_concurrent_CompletableFuture *) NULL_CHECK((frame[0].o)))->F_result;
	frame[1].o = sp[0].o;
	if ((isInstance(ctx, sp[0].o, &class_java_util_concurrent_CompletableFuture$AltResult)) == 0) goto label_2;
	}
	{
	sp[0].o = frame[1].o;
	clinit_java_util_concurrent_CompletableFuture(ctx);
	sp[1].o = (jobject)SF_java_util_concurrent_CompletableFuture_NIL;
	if (sp[0].o == sp[1].o) goto label_2;
	}
	INST_ICONST(1);
	goto label_3;
label_2:;
	INST_ICONST(0);
label_3:;
	popStackFrame(ctx);
	INST_IRETURN();

	popStackFrame(ctx);
}

void M_java_util_concurrent_CompletableFuture_obtrudeValue_java_lang_Object(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/concurrent/CompletableFuture:obtrudeValue", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(2470);
	sp[0].o = frame[0].o;
	sp += 1;
	if ((frame[1].o) != nullptr) goto label_1;
	}
	clinit_java_util_concurrent_CompletableFuture(ctx);
	(sp++)->o = SF_java_util_concurrent_CompletableFuture_NIL;
	goto label_2;
label_1:;
	INST_ALOAD(1);
label_2:;
	{
	sp -= 2;
	((java_util_concurrent_CompletableFuture *) NULL_CHECK(sp[0].o))->F_result = (jref) sp[1].o;
	LINE_NUMBER(2471);
	((func_java_util_concurrent_CompletableFuture_postComplete) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_util_concurrent_CompletableFuture_postComplete])(ctx, (frame[0].o));
	LINE_NUMBER(2472);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_java_util_concurrent_CompletableFuture_obtrudeException_java_lang_Throwable(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/concurrent/CompletableFuture:obtrudeException", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(2486);
	if ((frame[1].o) != nullptr) goto label_1;
	}
	{
	clinit_java_lang_NullPointerException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_NullPointerException);
	init_java_lang_NullPointerException(ctx, sp[0].o);
	throwException(ctx, sp[0].o);	}
label_1:;
	{
	LINE_NUMBER(2487);
	sp[0].o = frame[0].o;
	clinit_java_util_concurrent_CompletableFuture$AltResult(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_util_concurrent_CompletableFuture$AltResult);
	init_java_util_concurrent_CompletableFuture$AltResult_java_lang_Throwable(ctx, sp[1].o, (frame[1].o));
	((java_util_concurrent_CompletableFuture *) NULL_CHECK(sp[0].o))->F_result = (jref) sp[1].o;
	LINE_NUMBER(2488);
	((func_java_util_concurrent_CompletableFuture_postComplete) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_util_concurrent_CompletableFuture_postComplete])(ctx, (frame[0].o));
	LINE_NUMBER(2489);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jint M_java_util_concurrent_CompletableFuture_getNumberOfDependents_R_int(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/concurrent/CompletableFuture:getNumberOfDependents", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(2500);
	frame[1].i = (jint(0));
	LINE_NUMBER(2501);
	sp[0].o = (jobject)((java_util_concurrent_CompletableFuture *) NULL_CHECK((frame[0].o)))->F_stack;
	frame[2].o = sp[0].o;
	}
label_2:;
	INST_ALOAD(2);
	if ((--sp)->o == nullptr) goto label_3;
	{
	LINE_NUMBER(2502);
	INST_IINC(1, 1);
	LINE_NUMBER(2501);
	sp[0].o = (jobject)((java_util_concurrent_CompletableFuture$Completion *) NULL_CHECK((frame[2].o)))->F_next;
	frame[2].o = sp[0].o;
	goto label_2;
	}
label_3:;
	{
	LINE_NUMBER(2503);
	popStackFrame(ctx);
	return (frame[1].i);
	}

	popStackFrame(ctx);
}

jobject M_java_util_concurrent_CompletableFuture_toString_R_java_lang_String(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/concurrent/CompletableFuture:toString", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(2517);
	sp[0].o = (jobject)((java_util_concurrent_CompletableFuture *) NULL_CHECK((frame[0].o)))->F_result;
	frame[1].o = sp[0].o;
	LINE_NUMBER(2518);
	frame[2].i = (jint(0));
	LINE_NUMBER(2519);
	sp[0].o = (jobject)((java_util_concurrent_CompletableFuture *) NULL_CHECK((frame[0].o)))->F_stack;
	frame[3].o = sp[0].o;
	}
label_3:;
	INST_ALOAD(3);
	if ((--sp)->o == nullptr) goto label_4;
	{
	LINE_NUMBER(2520);
	INST_IINC(2, 1);
	LINE_NUMBER(2519);
	sp[0].o = (jobject)((java_util_concurrent_CompletableFuture$Completion *) NULL_CHECK((frame[3].o)))->F_next;
	frame[3].o = sp[0].o;
	goto label_3;
	}
label_4:;
	{
	LINE_NUMBER(2521);
	clinit_java_lang_StringBuilder(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[0].o);
	sp[1].o = (jobject)M_java_lang_Object_toString_R_java_lang_String(ctx, (frame[0].o));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(2522);
	sp += 1;
	if ((frame[1].o) != nullptr) goto label_8;
	}
	{
	LINE_NUMBER(2523);
	if ((frame[2].i) != 0) goto label_10;
	}
	{
	LINE_NUMBER(2524);
	sp[0].o = ((jobject) createStringLiteral(ctx, u8"[Not completed]"_j));
	sp += 1;
	goto label_12;
	}
label_10:;
	{
	LINE_NUMBER(2525);
	clinit_java_lang_StringBuilder(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[0].o);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"[Not completed, "_j))));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder])(ctx, sp[0].o, (frame[2].i));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8" dependents]"_j))));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[0].o);
	sp += 1;
	goto label_12;
	}
label_8:;
	{
	LINE_NUMBER(2526);
	if ((isInstance(ctx, (frame[1].o), &class_java_util_concurrent_CompletableFuture$AltResult)) == 0) goto label_13;
	}
	{
	sp[0].o = (jobject)((java_util_concurrent_CompletableFuture$AltResult *) NULL_CHECK((checkCast(ctx, &class_java_util_concurrent_CompletableFuture$AltResult, (frame[1].o)))))->F_ex;
	if (sp[0].o == nullptr) goto label_13;
	}
	{
	LINE_NUMBER(2527);
	sp[0].o = ((jobject) createStringLiteral(ctx, u8"[Completed exceptionally]"_j));
	sp += 1;
	goto label_12;
	}
label_13:;
	LINE_NUMBER(2528);
	(sp++)->o = ((jobject) createStringLiteral(ctx, u8"[Completed normally]"_j));
label_12:;
	{
	sp -= 2;
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, sp[1].o);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[0].o);
	LINE_NUMBER(2521);
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_java_util_concurrent_CompletableFuture_newIncompleteFuture_R_java_util_concurrent_CompletableFuture(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/concurrent/CompletableFuture:newIncompleteFuture", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(2545);
	clinit_java_util_concurrent_CompletableFuture(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_util_concurrent_CompletableFuture);
	init_java_util_concurrent_CompletableFuture(ctx, sp[0].o);
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_java_util_concurrent_CompletableFuture_defaultExecutor_R_java_util_concurrent_Executor(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/concurrent/CompletableFuture:defaultExecutor", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(2560);
	clinit_java_util_concurrent_CompletableFuture(ctx);
	sp[0].o = (jobject)SF_java_util_concurrent_CompletableFuture_ASYNC_POOL;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_java_util_concurrent_CompletableFuture_copy_R_java_util_concurrent_CompletableFuture(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/concurrent/CompletableFuture:copy", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(2578);
	sp[0].o = (jobject)SM_java_util_concurrent_CompletableFuture_uniCopyStage_java_util_concurrent_CompletableFuture_R_java_util_concurrent_CompletableFuture(ctx, (frame[0].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_java_util_concurrent_CompletableFuture_minimalCompletionStage_R_java_util_concurrent_CompletionStage(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/concurrent/CompletableFuture:minimalCompletionStage", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(2602);
	sp[0].o = (jobject)M_java_util_concurrent_CompletableFuture_uniAsMinimalStage_R_java_util_concurrent_CompletableFuture$MinimalStage(ctx, (frame[0].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_java_util_concurrent_CompletableFuture_completeAsync_java_util_function_Supplier_java_util_concurrent_Executor_R_java_util_concurrent_CompletableFuture(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/concurrent/CompletableFuture:completeAsync", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(2618);
	if ((frame[1].o) == nullptr) goto label_1;
	}
	INST_ALOAD(2);
	if ((--sp)->o != nullptr) goto label_2;
label_1:;
	{
	LINE_NUMBER(2619);
	clinit_java_lang_NullPointerException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_NullPointerException);
	init_java_lang_NullPointerException(ctx, sp[0].o);
	throwException(ctx, sp[0].o);	}
label_2:;
	{
	LINE_NUMBER(2620);
	sp[0].o = frame[2].o;
	clinit_java_util_concurrent_CompletableFuture$AsyncSupply(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_util_concurrent_CompletableFuture$AsyncSupply);
	init_java_util_concurrent_CompletableFuture$AsyncSupply_java_util_concurrent_CompletableFuture_java_util_function_Supplier(ctx, sp[1].o, (frame[0].o), (frame[1].o));
	((func_java_util_concurrent_Executor_execute_java_lang_Runnable) resolveInterfaceMethod(ctx, &class_java_util_concurrent_Executor, INDEX_java_util_concurrent_Executor_execute_java_lang_Runnable, sp[0].o))(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(2621);
	popStackFrame(ctx);
	return (frame[0].o);
	}

	popStackFrame(ctx);
}

jobject M_java_util_concurrent_CompletableFuture_completeAsync_java_util_function_Supplier_R_java_util_concurrent_CompletableFuture(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/concurrent/CompletableFuture:completeAsync", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(2635);
	sp[0].o = frame[0].o;
	sp[1].o = frame[1].o;
	sp[2].o = (jobject)((func_java_util_concurrent_CompletableFuture_defaultExecutor_R_java_util_concurrent_Executor) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_util_concurrent_CompletableFuture_defaultExecutor_R_java_util_concurrent_Executor])(ctx, (frame[0].o));
	sp[0].o = (jobject)((func_java_util_concurrent_CompletableFuture_completeAsync_java_util_function_Supplier_java_util_concurrent_Executor_R_java_util_concurrent_CompletableFuture) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_concurrent_CompletableFuture_completeAsync_java_util_function_Supplier_java_util_concurrent_Executor_R_java_util_concurrent_CompletableFuture])(ctx, sp[0].o, sp[1].o, sp[2].o);
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_java_util_concurrent_CompletableFuture_orTimeout_long_java_util_concurrent_TimeUnit_R_java_util_concurrent_CompletableFuture(jcontext ctx, jobject self, jlong param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[11];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/concurrent/CompletableFuture:orTimeout", 11 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].l = param0;
	frame[3].o = param1;
	{
	LINE_NUMBER(2651);
	if ((frame[3].o) != nullptr) goto label_1;
	}
	{
	LINE_NUMBER(2652);
	clinit_java_lang_NullPointerException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_NullPointerException);
	init_java_lang_NullPointerException(ctx, sp[0].o);
	throwException(ctx, sp[0].o);	}
label_1:;
	{
	LINE_NUMBER(2653);
	sp[0].o = (jobject)((java_util_concurrent_CompletableFuture *) NULL_CHECK((frame[0].o)))->F_result;
	if (sp[0].o != nullptr) goto label_3;
	}
	{
	LINE_NUMBER(2654);
	sp[0].o = frame[0].o;
	clinit_java_util_concurrent_CompletableFuture$Canceller(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_util_concurrent_CompletableFuture$Canceller);
	clinit_java_util_concurrent_CompletableFuture$Timeout(ctx);
	sp[2].o = gcAlloc(ctx, &class_java_util_concurrent_CompletableFuture$Timeout);
	init_java_util_concurrent_CompletableFuture$Timeout_java_util_concurrent_CompletableFuture(ctx, sp[2].o, (frame[0].o));
	sp[2].o = (jobject)SM_java_util_concurrent_CompletableFuture$Delayer_delay_java_lang_Runnable_long_java_util_concurrent_TimeUnit_R_java_util_concurrent_ScheduledFuture(ctx, sp[2].o, (frame[1].l), (frame[3].o));
	init_java_util_concurrent_CompletableFuture$Canceller_java_util_concurrent_Future(ctx, sp[1].o, sp[2].o);
	sp[0].o = (jobject)((func_java_util_concurrent_CompletableFuture_whenComplete_java_util_function_BiConsumer_R_java_util_concurrent_CompletableFuture) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_concurrent_CompletableFuture_whenComplete_java_util_function_BiConsumer_R_java_util_concurrent_CompletableFuture])(ctx, sp[0].o, sp[1].o);
	}
label_3:;
	{
	LINE_NUMBER(2656);
	popStackFrame(ctx);
	return (frame[0].o);
	}

	popStackFrame(ctx);
}

jobject M_java_util_concurrent_CompletableFuture_completeOnTimeout_java_lang_Object_long_java_util_concurrent_TimeUnit_R_java_util_concurrent_CompletableFuture(jcontext ctx, jobject self, jobject param0, jlong param1, jobject param2) {
	NULL_CHECK(self);
	jtype frame[12];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/concurrent/CompletableFuture:completeOnTimeout", 12 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].l = param1;
	frame[4].o = param2;
	{
	LINE_NUMBER(2673);
	if ((frame[4].o) != nullptr) goto label_1;
	}
	{
	LINE_NUMBER(2674);
	clinit_java_lang_NullPointerException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_NullPointerException);
	init_java_lang_NullPointerException(ctx, sp[0].o);
	throwException(ctx, sp[0].o);	}
label_1:;
	{
	LINE_NUMBER(2675);
	sp[0].o = (jobject)((java_util_concurrent_CompletableFuture *) NULL_CHECK((frame[0].o)))->F_result;
	if (sp[0].o != nullptr) goto label_3;
	}
	{
	LINE_NUMBER(2676);
	sp[0].o = frame[0].o;
	clinit_java_util_concurrent_CompletableFuture$Canceller(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_util_concurrent_CompletableFuture$Canceller);
	clinit_java_util_concurrent_CompletableFuture$DelayedCompleter(ctx);
	sp[2].o = gcAlloc(ctx, &class_java_util_concurrent_CompletableFuture$DelayedCompleter);
	init_java_util_concurrent_CompletableFuture$DelayedCompleter_java_util_concurrent_CompletableFuture_java_lang_Object(ctx, sp[2].o, (frame[0].o), (frame[1].o));
	sp[2].o = (jobject)SM_java_util_concurrent_CompletableFuture$Delayer_delay_java_lang_Runnable_long_java_util_concurrent_TimeUnit_R_java_util_concurrent_ScheduledFuture(ctx, sp[2].o, (frame[2].l), (frame[4].o));
	init_java_util_concurrent_CompletableFuture$Canceller_java_util_concurrent_Future(ctx, sp[1].o, sp[2].o);
	sp[0].o = (jobject)((func_java_util_concurrent_CompletableFuture_whenComplete_java_util_function_BiConsumer_R_java_util_concurrent_CompletableFuture) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_concurrent_CompletableFuture_whenComplete_java_util_function_BiConsumer_R_java_util_concurrent_CompletableFuture])(ctx, sp[0].o, sp[1].o);
	}
label_3:;
	{
	LINE_NUMBER(2679);
	popStackFrame(ctx);
	return (frame[0].o);
	}

	popStackFrame(ctx);
}

jobject SM_java_util_concurrent_CompletableFuture_delayedExecutor_long_java_util_concurrent_TimeUnit_java_util_concurrent_Executor_R_java_util_concurrent_Executor(jcontext ctx, jlong param0, jobject param1, jobject param2) {
	jtype frame[10];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/concurrent/CompletableFuture:delayedExecutor", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_util_concurrent_CompletableFuture(ctx);
	frame[0].l = param0;
	frame[2].o = param1;
	frame[3].o = param2;
	{
	LINE_NUMBER(2697);
	if ((frame[2].o) == nullptr) goto label_1;
	}
	INST_ALOAD(3);
	if ((--sp)->o != nullptr) goto label_2;
label_1:;
	{
	LINE_NUMBER(2698);
	clinit_java_lang_NullPointerException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_NullPointerException);
	init_java_lang_NullPointerException(ctx, sp[0].o);
	throwException(ctx, sp[0].o);	}
label_2:;
	{
	LINE_NUMBER(2699);
	clinit_java_util_concurrent_CompletableFuture$DelayedExecutor(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_util_concurrent_CompletableFuture$DelayedExecutor);
	init_java_util_concurrent_CompletableFuture$DelayedExecutor_long_java_util_concurrent_TimeUnit_java_util_concurrent_Executor(ctx, sp[0].o, (frame[0].l), (frame[2].o), (frame[3].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject SM_java_util_concurrent_CompletableFuture_delayedExecutor_long_java_util_concurrent_TimeUnit_R_java_util_concurrent_Executor(jcontext ctx, jlong param0, jobject param1) {
	jtype frame[9];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/concurrent/CompletableFuture:delayedExecutor", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_util_concurrent_CompletableFuture(ctx);
	frame[0].l = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(2715);
	if ((frame[2].o) != nullptr) goto label_1;
	}
	{
	LINE_NUMBER(2716);
	clinit_java_lang_NullPointerException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_NullPointerException);
	init_java_lang_NullPointerException(ctx, sp[0].o);
	throwException(ctx, sp[0].o);	}
label_1:;
	{
	LINE_NUMBER(2717);
	clinit_java_util_concurrent_CompletableFuture$DelayedExecutor(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_util_concurrent_CompletableFuture$DelayedExecutor);
	jlong temp0 = frame[0].l;
	sp[1].o = frame[2].o;
	clinit_java_util_concurrent_CompletableFuture(ctx);
	sp[2].o = (jobject)SF_java_util_concurrent_CompletableFuture_ASYNC_POOL;
	init_java_util_concurrent_CompletableFuture$DelayedExecutor_long_java_util_concurrent_TimeUnit_java_util_concurrent_Executor(ctx, sp[0].o, temp0, sp[1].o, sp[2].o);
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject SM_java_util_concurrent_CompletableFuture_completedStage_java_lang_Object_R_java_util_concurrent_CompletionStage(jcontext ctx, jobject param0) {
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/concurrent/CompletableFuture:completedStage", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_util_concurrent_CompletableFuture(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(2731);
	clinit_java_util_concurrent_CompletableFuture$MinimalStage(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_util_concurrent_CompletableFuture$MinimalStage);
	sp[1].o = sp[0].o;
	sp += 2;
	if ((frame[0].o) != nullptr) goto label_1;
	}
	clinit_java_util_concurrent_CompletableFuture(ctx);
	(sp++)->o = SF_java_util_concurrent_CompletableFuture_NIL;
	goto label_2;
label_1:;
	INST_ALOAD(0);
label_2:;
	POP_N(2); // Pop method args
	init_java_util_concurrent_CompletableFuture$MinimalStage_java_lang_Object(ctx, sp[0].o, sp[1].o);
	popStackFrame(ctx);
	INST_ARETURN();

	popStackFrame(ctx);
}

jobject SM_java_util_concurrent_CompletableFuture_failedFuture_java_lang_Throwable_R_java_util_concurrent_CompletableFuture(jcontext ctx, jobject param0) {
	jtype frame[6];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/concurrent/CompletableFuture:failedFuture", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_util_concurrent_CompletableFuture(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(2744);
	if ((frame[0].o) != nullptr) goto label_1;
	}
	{
	clinit_java_lang_NullPointerException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_NullPointerException);
	init_java_lang_NullPointerException(ctx, sp[0].o);
	throwException(ctx, sp[0].o);	}
label_1:;
	{
	LINE_NUMBER(2745);
	clinit_java_util_concurrent_CompletableFuture(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_util_concurrent_CompletableFuture);
	clinit_java_util_concurrent_CompletableFuture$AltResult(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_util_concurrent_CompletableFuture$AltResult);
	init_java_util_concurrent_CompletableFuture$AltResult_java_lang_Throwable(ctx, sp[1].o, (frame[0].o));
	init_java_util_concurrent_CompletableFuture_java_lang_Object(ctx, sp[0].o, sp[1].o);
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject SM_java_util_concurrent_CompletableFuture_failedStage_java_lang_Throwable_R_java_util_concurrent_CompletionStage(jcontext ctx, jobject param0) {
	jtype frame[6];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/concurrent/CompletableFuture:failedStage", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_util_concurrent_CompletableFuture(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(2759);
	if ((frame[0].o) != nullptr) goto label_1;
	}
	{
	clinit_java_lang_NullPointerException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_NullPointerException);
	init_java_lang_NullPointerException(ctx, sp[0].o);
	throwException(ctx, sp[0].o);	}
label_1:;
	{
	LINE_NUMBER(2760);
	clinit_java_util_concurrent_CompletableFuture$MinimalStage(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_util_concurrent_CompletableFuture$MinimalStage);
	clinit_java_util_concurrent_CompletableFuture$AltResult(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_util_concurrent_CompletableFuture$AltResult);
	init_java_util_concurrent_CompletableFuture$AltResult_java_lang_Throwable(ctx, sp[1].o, (frame[0].o));
	init_java_util_concurrent_CompletableFuture$MinimalStage_java_lang_Object(ctx, sp[0].o, sp[1].o);
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_java_util_concurrent_CompletableFuture_exceptionally_java_util_function_Function_R_java_util_concurrent_CompletionStage(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/concurrent/CompletableFuture:exceptionally", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(143);
	sp[0].o = (jobject)((func_java_util_concurrent_CompletableFuture_exceptionally_java_util_function_Function_R_java_util_concurrent_CompletableFuture) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_util_concurrent_CompletableFuture_exceptionally_java_util_function_Function_R_java_util_concurrent_CompletableFuture])(ctx, (frame[0].o), (frame[1].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_java_util_concurrent_CompletableFuture_whenCompleteAsync_java_util_function_BiConsumer_java_util_concurrent_Executor_R_java_util_concurrent_CompletionStage(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/concurrent/CompletableFuture:whenCompleteAsync", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(143);
	sp[0].o = (jobject)((func_java_util_concurrent_CompletableFuture_whenCompleteAsync_java_util_function_BiConsumer_java_util_concurrent_Executor_R_java_util_concurrent_CompletableFuture) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_util_concurrent_CompletableFuture_whenCompleteAsync_java_util_function_BiConsumer_java_util_concurrent_Executor_R_java_util_concurrent_CompletableFuture])(ctx, (frame[0].o), (frame[1].o), (frame[2].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_java_util_concurrent_CompletableFuture_whenCompleteAsync_java_util_function_BiConsumer_R_java_util_concurrent_CompletionStage(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/concurrent/CompletableFuture:whenCompleteAsync", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(143);
	sp[0].o = (jobject)((func_java_util_concurrent_CompletableFuture_whenCompleteAsync_java_util_function_BiConsumer_R_java_util_concurrent_CompletableFuture) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_util_concurrent_CompletableFuture_whenCompleteAsync_java_util_function_BiConsumer_R_java_util_concurrent_CompletableFuture])(ctx, (frame[0].o), (frame[1].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_java_util_concurrent_CompletableFuture_whenComplete_java_util_function_BiConsumer_R_java_util_concurrent_CompletionStage(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/concurrent/CompletableFuture:whenComplete", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(143);
	sp[0].o = (jobject)((func_java_util_concurrent_CompletableFuture_whenComplete_java_util_function_BiConsumer_R_java_util_concurrent_CompletableFuture) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_util_concurrent_CompletableFuture_whenComplete_java_util_function_BiConsumer_R_java_util_concurrent_CompletableFuture])(ctx, (frame[0].o), (frame[1].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_java_util_concurrent_CompletableFuture_handleAsync_java_util_function_BiFunction_java_util_concurrent_Executor_R_java_util_concurrent_CompletionStage(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/concurrent/CompletableFuture:handleAsync", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(143);
	sp[0].o = (jobject)((func_java_util_concurrent_CompletableFuture_handleAsync_java_util_function_BiFunction_java_util_concurrent_Executor_R_java_util_concurrent_CompletableFuture) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_util_concurrent_CompletableFuture_handleAsync_java_util_function_BiFunction_java_util_concurrent_Executor_R_java_util_concurrent_CompletableFuture])(ctx, (frame[0].o), (frame[1].o), (frame[2].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_java_util_concurrent_CompletableFuture_handleAsync_java_util_function_BiFunction_R_java_util_concurrent_CompletionStage(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/concurrent/CompletableFuture:handleAsync", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(143);
	sp[0].o = (jobject)((func_java_util_concurrent_CompletableFuture_handleAsync_java_util_function_BiFunction_R_java_util_concurrent_CompletableFuture) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_util_concurrent_CompletableFuture_handleAsync_java_util_function_BiFunction_R_java_util_concurrent_CompletableFuture])(ctx, (frame[0].o), (frame[1].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_java_util_concurrent_CompletableFuture_handle_java_util_function_BiFunction_R_java_util_concurrent_CompletionStage(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/concurrent/CompletableFuture:handle", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(143);
	sp[0].o = (jobject)((func_java_util_concurrent_CompletableFuture_handle_java_util_function_BiFunction_R_java_util_concurrent_CompletableFuture) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_util_concurrent_CompletableFuture_handle_java_util_function_BiFunction_R_java_util_concurrent_CompletableFuture])(ctx, (frame[0].o), (frame[1].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_java_util_concurrent_CompletableFuture_thenComposeAsync_java_util_function_Function_java_util_concurrent_Executor_R_java_util_concurrent_CompletionStage(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/concurrent/CompletableFuture:thenComposeAsync", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(143);
	sp[0].o = (jobject)((func_java_util_concurrent_CompletableFuture_thenComposeAsync_java_util_function_Function_java_util_concurrent_Executor_R_java_util_concurrent_CompletableFuture) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_util_concurrent_CompletableFuture_thenComposeAsync_java_util_function_Function_java_util_concurrent_Executor_R_java_util_concurrent_CompletableFuture])(ctx, (frame[0].o), (frame[1].o), (frame[2].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_java_util_concurrent_CompletableFuture_thenComposeAsync_java_util_function_Function_R_java_util_concurrent_CompletionStage(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/concurrent/CompletableFuture:thenComposeAsync", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(143);
	sp[0].o = (jobject)((func_java_util_concurrent_CompletableFuture_thenComposeAsync_java_util_function_Function_R_java_util_concurrent_CompletableFuture) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_util_concurrent_CompletableFuture_thenComposeAsync_java_util_function_Function_R_java_util_concurrent_CompletableFuture])(ctx, (frame[0].o), (frame[1].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_java_util_concurrent_CompletableFuture_thenCompose_java_util_function_Function_R_java_util_concurrent_CompletionStage(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/concurrent/CompletableFuture:thenCompose", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(143);
	sp[0].o = (jobject)((func_java_util_concurrent_CompletableFuture_thenCompose_java_util_function_Function_R_java_util_concurrent_CompletableFuture) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_util_concurrent_CompletableFuture_thenCompose_java_util_function_Function_R_java_util_concurrent_CompletableFuture])(ctx, (frame[0].o), (frame[1].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_java_util_concurrent_CompletableFuture_runAfterEitherAsync_java_util_concurrent_CompletionStage_java_lang_Runnable_java_util_concurrent_Executor_R_java_util_concurrent_CompletionStage(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/concurrent/CompletableFuture:runAfterEitherAsync", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].o = param2;
	{
	LINE_NUMBER(143);
	sp[0].o = (jobject)((func_java_util_concurrent_CompletableFuture_runAfterEitherAsync_java_util_concurrent_CompletionStage_java_lang_Runnable_java_util_concurrent_Executor_R_java_util_concurrent_CompletableFuture) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_util_concurrent_CompletableFuture_runAfterEitherAsync_java_util_concurrent_CompletionStage_java_lang_Runnable_java_util_concurrent_Executor_R_java_util_concurrent_CompletableFuture])(ctx, (frame[0].o), (frame[1].o), (frame[2].o), (frame[3].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_java_util_concurrent_CompletableFuture_runAfterEitherAsync_java_util_concurrent_CompletionStage_java_lang_Runnable_R_java_util_concurrent_CompletionStage(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/concurrent/CompletableFuture:runAfterEitherAsync", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(143);
	sp[0].o = (jobject)((func_java_util_concurrent_CompletableFuture_runAfterEitherAsync_java_util_concurrent_CompletionStage_java_lang_Runnable_R_java_util_concurrent_CompletableFuture) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_util_concurrent_CompletableFuture_runAfterEitherAsync_java_util_concurrent_CompletionStage_java_lang_Runnable_R_java_util_concurrent_CompletableFuture])(ctx, (frame[0].o), (frame[1].o), (frame[2].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_java_util_concurrent_CompletableFuture_runAfterEither_java_util_concurrent_CompletionStage_java_lang_Runnable_R_java_util_concurrent_CompletionStage(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/concurrent/CompletableFuture:runAfterEither", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(143);
	sp[0].o = (jobject)((func_java_util_concurrent_CompletableFuture_runAfterEither_java_util_concurrent_CompletionStage_java_lang_Runnable_R_java_util_concurrent_CompletableFuture) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_util_concurrent_CompletableFuture_runAfterEither_java_util_concurrent_CompletionStage_java_lang_Runnable_R_java_util_concurrent_CompletableFuture])(ctx, (frame[0].o), (frame[1].o), (frame[2].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_java_util_concurrent_CompletableFuture_acceptEitherAsync_java_util_concurrent_CompletionStage_java_util_function_Consumer_java_util_concurrent_Executor_R_java_util_concurrent_CompletionStage(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/concurrent/CompletableFuture:acceptEitherAsync", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].o = param2;
	{
	LINE_NUMBER(143);
	sp[0].o = (jobject)((func_java_util_concurrent_CompletableFuture_acceptEitherAsync_java_util_concurrent_CompletionStage_java_util_function_Consumer_java_util_concurrent_Executor_R_java_util_concurrent_CompletableFuture) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_util_concurrent_CompletableFuture_acceptEitherAsync_java_util_concurrent_CompletionStage_java_util_function_Consumer_java_util_concurrent_Executor_R_java_util_concurrent_CompletableFuture])(ctx, (frame[0].o), (frame[1].o), (frame[2].o), (frame[3].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_java_util_concurrent_CompletableFuture_acceptEitherAsync_java_util_concurrent_CompletionStage_java_util_function_Consumer_R_java_util_concurrent_CompletionStage(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/concurrent/CompletableFuture:acceptEitherAsync", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(143);
	sp[0].o = (jobject)((func_java_util_concurrent_CompletableFuture_acceptEitherAsync_java_util_concurrent_CompletionStage_java_util_function_Consumer_R_java_util_concurrent_CompletableFuture) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_util_concurrent_CompletableFuture_acceptEitherAsync_java_util_concurrent_CompletionStage_java_util_function_Consumer_R_java_util_concurrent_CompletableFuture])(ctx, (frame[0].o), (frame[1].o), (frame[2].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_java_util_concurrent_CompletableFuture_acceptEither_java_util_concurrent_CompletionStage_java_util_function_Consumer_R_java_util_concurrent_CompletionStage(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/concurrent/CompletableFuture:acceptEither", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(143);
	sp[0].o = (jobject)((func_java_util_concurrent_CompletableFuture_acceptEither_java_util_concurrent_CompletionStage_java_util_function_Consumer_R_java_util_concurrent_CompletableFuture) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_util_concurrent_CompletableFuture_acceptEither_java_util_concurrent_CompletionStage_java_util_function_Consumer_R_java_util_concurrent_CompletableFuture])(ctx, (frame[0].o), (frame[1].o), (frame[2].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_java_util_concurrent_CompletableFuture_applyToEitherAsync_java_util_concurrent_CompletionStage_java_util_function_Function_java_util_concurrent_Executor_R_java_util_concurrent_CompletionStage(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/concurrent/CompletableFuture:applyToEitherAsync", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].o = param2;
	{
	LINE_NUMBER(143);
	sp[0].o = (jobject)((func_java_util_concurrent_CompletableFuture_applyToEitherAsync_java_util_concurrent_CompletionStage_java_util_function_Function_java_util_concurrent_Executor_R_java_util_concurrent_CompletableFuture) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_util_concurrent_CompletableFuture_applyToEitherAsync_java_util_concurrent_CompletionStage_java_util_function_Function_java_util_concurrent_Executor_R_java_util_concurrent_CompletableFuture])(ctx, (frame[0].o), (frame[1].o), (frame[2].o), (frame[3].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_java_util_concurrent_CompletableFuture_applyToEitherAsync_java_util_concurrent_CompletionStage_java_util_function_Function_R_java_util_concurrent_CompletionStage(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/concurrent/CompletableFuture:applyToEitherAsync", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(143);
	sp[0].o = (jobject)((func_java_util_concurrent_CompletableFuture_applyToEitherAsync_java_util_concurrent_CompletionStage_java_util_function_Function_R_java_util_concurrent_CompletableFuture) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_util_concurrent_CompletableFuture_applyToEitherAsync_java_util_concurrent_CompletionStage_java_util_function_Function_R_java_util_concurrent_CompletableFuture])(ctx, (frame[0].o), (frame[1].o), (frame[2].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_java_util_concurrent_CompletableFuture_applyToEither_java_util_concurrent_CompletionStage_java_util_function_Function_R_java_util_concurrent_CompletionStage(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/concurrent/CompletableFuture:applyToEither", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(143);
	sp[0].o = (jobject)((func_java_util_concurrent_CompletableFuture_applyToEither_java_util_concurrent_CompletionStage_java_util_function_Function_R_java_util_concurrent_CompletableFuture) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_util_concurrent_CompletableFuture_applyToEither_java_util_concurrent_CompletionStage_java_util_function_Function_R_java_util_concurrent_CompletableFuture])(ctx, (frame[0].o), (frame[1].o), (frame[2].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_java_util_concurrent_CompletableFuture_runAfterBothAsync_java_util_concurrent_CompletionStage_java_lang_Runnable_java_util_concurrent_Executor_R_java_util_concurrent_CompletionStage(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/concurrent/CompletableFuture:runAfterBothAsync", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].o = param2;
	{
	LINE_NUMBER(143);
	sp[0].o = (jobject)((func_java_util_concurrent_CompletableFuture_runAfterBothAsync_java_util_concurrent_CompletionStage_java_lang_Runnable_java_util_concurrent_Executor_R_java_util_concurrent_CompletableFuture) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_util_concurrent_CompletableFuture_runAfterBothAsync_java_util_concurrent_CompletionStage_java_lang_Runnable_java_util_concurrent_Executor_R_java_util_concurrent_CompletableFuture])(ctx, (frame[0].o), (frame[1].o), (frame[2].o), (frame[3].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_java_util_concurrent_CompletableFuture_runAfterBothAsync_java_util_concurrent_CompletionStage_java_lang_Runnable_R_java_util_concurrent_CompletionStage(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/concurrent/CompletableFuture:runAfterBothAsync", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(143);
	sp[0].o = (jobject)((func_java_util_concurrent_CompletableFuture_runAfterBothAsync_java_util_concurrent_CompletionStage_java_lang_Runnable_R_java_util_concurrent_CompletableFuture) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_util_concurrent_CompletableFuture_runAfterBothAsync_java_util_concurrent_CompletionStage_java_lang_Runnable_R_java_util_concurrent_CompletableFuture])(ctx, (frame[0].o), (frame[1].o), (frame[2].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_java_util_concurrent_CompletableFuture_runAfterBoth_java_util_concurrent_CompletionStage_java_lang_Runnable_R_java_util_concurrent_CompletionStage(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/concurrent/CompletableFuture:runAfterBoth", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(143);
	sp[0].o = (jobject)((func_java_util_concurrent_CompletableFuture_runAfterBoth_java_util_concurrent_CompletionStage_java_lang_Runnable_R_java_util_concurrent_CompletableFuture) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_util_concurrent_CompletableFuture_runAfterBoth_java_util_concurrent_CompletionStage_java_lang_Runnable_R_java_util_concurrent_CompletableFuture])(ctx, (frame[0].o), (frame[1].o), (frame[2].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_java_util_concurrent_CompletableFuture_thenAcceptBothAsync_java_util_concurrent_CompletionStage_java_util_function_BiConsumer_java_util_concurrent_Executor_R_java_util_concurrent_CompletionStage(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/concurrent/CompletableFuture:thenAcceptBothAsync", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].o = param2;
	{
	LINE_NUMBER(143);
	sp[0].o = (jobject)((func_java_util_concurrent_CompletableFuture_thenAcceptBothAsync_java_util_concurrent_CompletionStage_java_util_function_BiConsumer_java_util_concurrent_Executor_R_java_util_concurrent_CompletableFuture) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_util_concurrent_CompletableFuture_thenAcceptBothAsync_java_util_concurrent_CompletionStage_java_util_function_BiConsumer_java_util_concurrent_Executor_R_java_util_concurrent_CompletableFuture])(ctx, (frame[0].o), (frame[1].o), (frame[2].o), (frame[3].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_java_util_concurrent_CompletableFuture_thenAcceptBothAsync_java_util_concurrent_CompletionStage_java_util_function_BiConsumer_R_java_util_concurrent_CompletionStage(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/concurrent/CompletableFuture:thenAcceptBothAsync", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(143);
	sp[0].o = (jobject)((func_java_util_concurrent_CompletableFuture_thenAcceptBothAsync_java_util_concurrent_CompletionStage_java_util_function_BiConsumer_R_java_util_concurrent_CompletableFuture) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_util_concurrent_CompletableFuture_thenAcceptBothAsync_java_util_concurrent_CompletionStage_java_util_function_BiConsumer_R_java_util_concurrent_CompletableFuture])(ctx, (frame[0].o), (frame[1].o), (frame[2].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_java_util_concurrent_CompletableFuture_thenAcceptBoth_java_util_concurrent_CompletionStage_java_util_function_BiConsumer_R_java_util_concurrent_CompletionStage(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/concurrent/CompletableFuture:thenAcceptBoth", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(143);
	sp[0].o = (jobject)((func_java_util_concurrent_CompletableFuture_thenAcceptBoth_java_util_concurrent_CompletionStage_java_util_function_BiConsumer_R_java_util_concurrent_CompletableFuture) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_util_concurrent_CompletableFuture_thenAcceptBoth_java_util_concurrent_CompletionStage_java_util_function_BiConsumer_R_java_util_concurrent_CompletableFuture])(ctx, (frame[0].o), (frame[1].o), (frame[2].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_java_util_concurrent_CompletableFuture_thenCombineAsync_java_util_concurrent_CompletionStage_java_util_function_BiFunction_java_util_concurrent_Executor_R_java_util_concurrent_CompletionStage(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/concurrent/CompletableFuture:thenCombineAsync", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].o = param2;
	{
	LINE_NUMBER(143);
	sp[0].o = (jobject)((func_java_util_concurrent_CompletableFuture_thenCombineAsync_java_util_concurrent_CompletionStage_java_util_function_BiFunction_java_util_concurrent_Executor_R_java_util_concurrent_CompletableFuture) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_util_concurrent_CompletableFuture_thenCombineAsync_java_util_concurrent_CompletionStage_java_util_function_BiFunction_java_util_concurrent_Executor_R_java_util_concurrent_CompletableFuture])(ctx, (frame[0].o), (frame[1].o), (frame[2].o), (frame[3].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_java_util_concurrent_CompletableFuture_thenCombineAsync_java_util_concurrent_CompletionStage_java_util_function_BiFunction_R_java_util_concurrent_CompletionStage(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/concurrent/CompletableFuture:thenCombineAsync", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(143);
	sp[0].o = (jobject)((func_java_util_concurrent_CompletableFuture_thenCombineAsync_java_util_concurrent_CompletionStage_java_util_function_BiFunction_R_java_util_concurrent_CompletableFuture) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_util_concurrent_CompletableFuture_thenCombineAsync_java_util_concurrent_CompletionStage_java_util_function_BiFunction_R_java_util_concurrent_CompletableFuture])(ctx, (frame[0].o), (frame[1].o), (frame[2].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_java_util_concurrent_CompletableFuture_thenCombine_java_util_concurrent_CompletionStage_java_util_function_BiFunction_R_java_util_concurrent_CompletionStage(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/concurrent/CompletableFuture:thenCombine", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(143);
	sp[0].o = (jobject)((func_java_util_concurrent_CompletableFuture_thenCombine_java_util_concurrent_CompletionStage_java_util_function_BiFunction_R_java_util_concurrent_CompletableFuture) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_util_concurrent_CompletableFuture_thenCombine_java_util_concurrent_CompletionStage_java_util_function_BiFunction_R_java_util_concurrent_CompletableFuture])(ctx, (frame[0].o), (frame[1].o), (frame[2].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_java_util_concurrent_CompletableFuture_thenRunAsync_java_lang_Runnable_java_util_concurrent_Executor_R_java_util_concurrent_CompletionStage(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/concurrent/CompletableFuture:thenRunAsync", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(143);
	sp[0].o = (jobject)((func_java_util_concurrent_CompletableFuture_thenRunAsync_java_lang_Runnable_java_util_concurrent_Executor_R_java_util_concurrent_CompletableFuture) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_util_concurrent_CompletableFuture_thenRunAsync_java_lang_Runnable_java_util_concurrent_Executor_R_java_util_concurrent_CompletableFuture])(ctx, (frame[0].o), (frame[1].o), (frame[2].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_java_util_concurrent_CompletableFuture_thenRunAsync_java_lang_Runnable_R_java_util_concurrent_CompletionStage(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/concurrent/CompletableFuture:thenRunAsync", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(143);
	sp[0].o = (jobject)((func_java_util_concurrent_CompletableFuture_thenRunAsync_java_lang_Runnable_R_java_util_concurrent_CompletableFuture) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_util_concurrent_CompletableFuture_thenRunAsync_java_lang_Runnable_R_java_util_concurrent_CompletableFuture])(ctx, (frame[0].o), (frame[1].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_java_util_concurrent_CompletableFuture_thenRun_java_lang_Runnable_R_java_util_concurrent_CompletionStage(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/concurrent/CompletableFuture:thenRun", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(143);
	sp[0].o = (jobject)((func_java_util_concurrent_CompletableFuture_thenRun_java_lang_Runnable_R_java_util_concurrent_CompletableFuture) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_util_concurrent_CompletableFuture_thenRun_java_lang_Runnable_R_java_util_concurrent_CompletableFuture])(ctx, (frame[0].o), (frame[1].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_java_util_concurrent_CompletableFuture_thenAcceptAsync_java_util_function_Consumer_java_util_concurrent_Executor_R_java_util_concurrent_CompletionStage(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/concurrent/CompletableFuture:thenAcceptAsync", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(143);
	sp[0].o = (jobject)((func_java_util_concurrent_CompletableFuture_thenAcceptAsync_java_util_function_Consumer_java_util_concurrent_Executor_R_java_util_concurrent_CompletableFuture) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_util_concurrent_CompletableFuture_thenAcceptAsync_java_util_function_Consumer_java_util_concurrent_Executor_R_java_util_concurrent_CompletableFuture])(ctx, (frame[0].o), (frame[1].o), (frame[2].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_java_util_concurrent_CompletableFuture_thenAcceptAsync_java_util_function_Consumer_R_java_util_concurrent_CompletionStage(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/concurrent/CompletableFuture:thenAcceptAsync", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(143);
	sp[0].o = (jobject)((func_java_util_concurrent_CompletableFuture_thenAcceptAsync_java_util_function_Consumer_R_java_util_concurrent_CompletableFuture) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_util_concurrent_CompletableFuture_thenAcceptAsync_java_util_function_Consumer_R_java_util_concurrent_CompletableFuture])(ctx, (frame[0].o), (frame[1].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_java_util_concurrent_CompletableFuture_thenAccept_java_util_function_Consumer_R_java_util_concurrent_CompletionStage(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/concurrent/CompletableFuture:thenAccept", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(143);
	sp[0].o = (jobject)((func_java_util_concurrent_CompletableFuture_thenAccept_java_util_function_Consumer_R_java_util_concurrent_CompletableFuture) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_util_concurrent_CompletableFuture_thenAccept_java_util_function_Consumer_R_java_util_concurrent_CompletableFuture])(ctx, (frame[0].o), (frame[1].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_java_util_concurrent_CompletableFuture_thenApplyAsync_java_util_function_Function_java_util_concurrent_Executor_R_java_util_concurrent_CompletionStage(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/concurrent/CompletableFuture:thenApplyAsync", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(143);
	sp[0].o = (jobject)((func_java_util_concurrent_CompletableFuture_thenApplyAsync_java_util_function_Function_java_util_concurrent_Executor_R_java_util_concurrent_CompletableFuture) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_util_concurrent_CompletableFuture_thenApplyAsync_java_util_function_Function_java_util_concurrent_Executor_R_java_util_concurrent_CompletableFuture])(ctx, (frame[0].o), (frame[1].o), (frame[2].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_java_util_concurrent_CompletableFuture_thenApplyAsync_java_util_function_Function_R_java_util_concurrent_CompletionStage(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/concurrent/CompletableFuture:thenApplyAsync", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(143);
	sp[0].o = (jobject)((func_java_util_concurrent_CompletableFuture_thenApplyAsync_java_util_function_Function_R_java_util_concurrent_CompletableFuture) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_util_concurrent_CompletableFuture_thenApplyAsync_java_util_function_Function_R_java_util_concurrent_CompletableFuture])(ctx, (frame[0].o), (frame[1].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_java_util_concurrent_CompletableFuture_thenApply_java_util_function_Function_R_java_util_concurrent_CompletionStage(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/concurrent/CompletableFuture:thenApply", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(143);
	sp[0].o = (jobject)((func_java_util_concurrent_CompletableFuture_thenApply_java_util_function_Function_R_java_util_concurrent_CompletableFuture) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_util_concurrent_CompletableFuture_thenApply_java_util_function_Function_R_java_util_concurrent_CompletableFuture])(ctx, (frame[0].o), (frame[1].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void clinit_java_util_concurrent_CompletableFuture(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	SF_java_util_concurrent_CompletableFuture_SYNC = jint(0);
	SF_java_util_concurrent_CompletableFuture_ASYNC = jint(1);
	SF_java_util_concurrent_CompletableFuture_NESTED = jint(-1);
	jtype frame[3];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/concurrent/CompletableFuture:<clinit>", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_util_concurrent_CompletableFuture(ctx);
	{
	LINE_NUMBER(297);
	clinit_java_util_concurrent_CompletableFuture$AltResult(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_util_concurrent_CompletableFuture$AltResult);
	init_java_util_concurrent_CompletableFuture$AltResult_java_lang_Throwable(ctx, sp[0].o, (jobject(nullptr)));
	clinit_java_util_concurrent_CompletableFuture(ctx);
	SF_java_util_concurrent_CompletableFuture_NIL = sp[0].o;
	LINE_NUMBER(451);
	jint temp0 = (jint)SM_java_util_concurrent_ForkJoinPool_getCommonPoolParallelism_R_int(ctx);
	if (temp0 <= (jint(1))) goto label_2;
	}
	INST_ICONST(1);
	goto label_3;
label_2:;
	INST_ICONST(0);
label_3:;
	{
	sp -= 1;
	clinit_java_util_concurrent_CompletableFuture(ctx);
	SF_java_util_concurrent_CompletableFuture_USE_COMMON_POOL = sp[0].i;
	LINE_NUMBER(457);
	if ((clinit_java_util_concurrent_CompletableFuture(ctx), (jint)SF_java_util_concurrent_CompletableFuture_USE_COMMON_POOL) == 0) goto label_5;
	}
	{
	LINE_NUMBER(458);
	sp[0].o = (jobject)SM_java_util_concurrent_ForkJoinPool_commonPool_R_java_util_concurrent_ForkJoinPool(ctx);
	sp += 1;
	goto label_7;
	}
label_5:;
	{
	clinit_java_util_concurrent_CompletableFuture$ThreadPerTaskExecutor(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_util_concurrent_CompletableFuture$ThreadPerTaskExecutor);
	init_java_util_concurrent_CompletableFuture$ThreadPerTaskExecutor(ctx, sp[0].o);
	sp += 1;
	}
label_7:;
	{
	sp -= 1;
	clinit_java_util_concurrent_CompletableFuture(ctx);
	SF_java_util_concurrent_CompletableFuture_ASYNC_POOL = sp[0].o;
	LINE_NUMBER(457);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void *vtable_java_util_concurrent_CompletableFuture[] {
	(void *) M_java_lang_Object_hashCode_R_int,
	(void *) M_java_lang_Object_equals_java_lang_Object_R_boolean,
	(void *) M_java_lang_Object_clone_R_java_lang_Object,
	(void *) M_java_lang_Object_getClass_R_java_lang_Class,
	(void *) M_java_util_concurrent_CompletableFuture_toString_R_java_lang_String,
	(void *) M_java_lang_Object_finalize,
	(void *) M_java_lang_Object_notify,
	(void *) M_java_lang_Object_notifyAll,
	(void *) M_java_lang_Object_wait,
	(void *) M_java_lang_Object_wait_long,
	(void *) M_java_lang_Object_wait_long_int,
	(void *) M_java_util_concurrent_CompletableFuture_cancel_boolean_R_boolean,
	(void *) M_java_util_concurrent_CompletableFuture_isCancelled_R_boolean,
	(void *) M_java_util_concurrent_CompletableFuture_isDone_R_boolean,
	(void *) M_java_util_concurrent_CompletableFuture_get_R_java_lang_Object,
	(void *) M_java_util_concurrent_CompletableFuture_get_long_java_util_concurrent_TimeUnit_R_java_lang_Object,
	(void *) M_java_util_concurrent_CompletableFuture_thenApply_java_util_function_Function_R_java_util_concurrent_CompletionStage,
	(void *) M_java_util_concurrent_CompletableFuture_thenApplyAsync_java_util_function_Function_R_java_util_concurrent_CompletionStage,
	(void *) M_java_util_concurrent_CompletableFuture_thenApplyAsync_java_util_function_Function_java_util_concurrent_Executor_R_java_util_concurrent_CompletionStage,
	(void *) M_java_util_concurrent_CompletableFuture_thenAccept_java_util_function_Consumer_R_java_util_concurrent_CompletionStage,
	(void *) M_java_util_concurrent_CompletableFuture_thenAcceptAsync_java_util_function_Consumer_R_java_util_concurrent_CompletionStage,
	(void *) M_java_util_concurrent_CompletableFuture_thenAcceptAsync_java_util_function_Consumer_java_util_concurrent_Executor_R_java_util_concurrent_CompletionStage,
	(void *) M_java_util_concurrent_CompletableFuture_thenRun_java_lang_Runnable_R_java_util_concurrent_CompletionStage,
	(void *) M_java_util_concurrent_CompletableFuture_thenRunAsync_java_lang_Runnable_R_java_util_concurrent_CompletionStage,
	(void *) M_java_util_concurrent_CompletableFuture_thenRunAsync_java_lang_Runnable_java_util_concurrent_Executor_R_java_util_concurrent_CompletionStage,
	(void *) M_java_util_concurrent_CompletableFuture_thenCombine_java_util_concurrent_CompletionStage_java_util_function_BiFunction_R_java_util_concurrent_CompletionStage,
	(void *) M_java_util_concurrent_CompletableFuture_thenCombineAsync_java_util_concurrent_CompletionStage_java_util_function_BiFunction_R_java_util_concurrent_CompletionStage,
	(void *) M_java_util_concurrent_CompletableFuture_thenCombineAsync_java_util_concurrent_CompletionStage_java_util_function_BiFunction_java_util_concurrent_Executor_R_java_util_concurrent_CompletionStage,
	(void *) M_java_util_concurrent_CompletableFuture_thenAcceptBoth_java_util_concurrent_CompletionStage_java_util_function_BiConsumer_R_java_util_concurrent_CompletionStage,
	(void *) M_java_util_concurrent_CompletableFuture_thenAcceptBothAsync_java_util_concurrent_CompletionStage_java_util_function_BiConsumer_R_java_util_concurrent_CompletionStage,
	(void *) M_java_util_concurrent_CompletableFuture_thenAcceptBothAsync_java_util_concurrent_CompletionStage_java_util_function_BiConsumer_java_util_concurrent_Executor_R_java_util_concurrent_CompletionStage,
	(void *) M_java_util_concurrent_CompletableFuture_runAfterBoth_java_util_concurrent_CompletionStage_java_lang_Runnable_R_java_util_concurrent_CompletionStage,
	(void *) M_java_util_concurrent_CompletableFuture_runAfterBothAsync_java_util_concurrent_CompletionStage_java_lang_Runnable_R_java_util_concurrent_CompletionStage,
	(void *) M_java_util_concurrent_CompletableFuture_runAfterBothAsync_java_util_concurrent_CompletionStage_java_lang_Runnable_java_util_concurrent_Executor_R_java_util_concurrent_CompletionStage,
	(void *) M_java_util_concurrent_CompletableFuture_applyToEither_java_util_concurrent_CompletionStage_java_util_function_Function_R_java_util_concurrent_CompletionStage,
	(void *) M_java_util_concurrent_CompletableFuture_applyToEitherAsync_java_util_concurrent_CompletionStage_java_util_function_Function_R_java_util_concurrent_CompletionStage,
	(void *) M_java_util_concurrent_CompletableFuture_applyToEitherAsync_java_util_concurrent_CompletionStage_java_util_function_Function_java_util_concurrent_Executor_R_java_util_concurrent_CompletionStage,
	(void *) M_java_util_concurrent_CompletableFuture_acceptEither_java_util_concurrent_CompletionStage_java_util_function_Consumer_R_java_util_concurrent_CompletionStage,
	(void *) M_java_util_concurrent_CompletableFuture_acceptEitherAsync_java_util_concurrent_CompletionStage_java_util_function_Consumer_R_java_util_concurrent_CompletionStage,
	(void *) M_java_util_concurrent_CompletableFuture_acceptEitherAsync_java_util_concurrent_CompletionStage_java_util_function_Consumer_java_util_concurrent_Executor_R_java_util_concurrent_CompletionStage,
	(void *) M_java_util_concurrent_CompletableFuture_runAfterEither_java_util_concurrent_CompletionStage_java_lang_Runnable_R_java_util_concurrent_CompletionStage,
	(void *) M_java_util_concurrent_CompletableFuture_runAfterEitherAsync_java_util_concurrent_CompletionStage_java_lang_Runnable_R_java_util_concurrent_CompletionStage,
	(void *) M_java_util_concurrent_CompletableFuture_runAfterEitherAsync_java_util_concurrent_CompletionStage_java_lang_Runnable_java_util_concurrent_Executor_R_java_util_concurrent_CompletionStage,
	(void *) M_java_util_concurrent_CompletableFuture_thenCompose_java_util_function_Function_R_java_util_concurrent_CompletionStage,
	(void *) M_java_util_concurrent_CompletableFuture_thenComposeAsync_java_util_function_Function_R_java_util_concurrent_CompletionStage,
	(void *) M_java_util_concurrent_CompletableFuture_thenComposeAsync_java_util_function_Function_java_util_concurrent_Executor_R_java_util_concurrent_CompletionStage,
	(void *) M_java_util_concurrent_CompletableFuture_handle_java_util_function_BiFunction_R_java_util_concurrent_CompletionStage,
	(void *) M_java_util_concurrent_CompletableFuture_handleAsync_java_util_function_BiFunction_R_java_util_concurrent_CompletionStage,
	(void *) M_java_util_concurrent_CompletableFuture_handleAsync_java_util_function_BiFunction_java_util_concurrent_Executor_R_java_util_concurrent_CompletionStage,
	(void *) M_java_util_concurrent_CompletableFuture_whenComplete_java_util_function_BiConsumer_R_java_util_concurrent_CompletionStage,
	(void *) M_java_util_concurrent_CompletableFuture_whenCompleteAsync_java_util_function_BiConsumer_R_java_util_concurrent_CompletionStage,
	(void *) M_java_util_concurrent_CompletableFuture_whenCompleteAsync_java_util_function_BiConsumer_java_util_concurrent_Executor_R_java_util_concurrent_CompletionStage,
	(void *) M_java_util_concurrent_CompletableFuture_exceptionally_java_util_function_Function_R_java_util_concurrent_CompletionStage,
	(void *) M_java_util_concurrent_CompletableFuture_toCompletableFuture_R_java_util_concurrent_CompletableFuture,
	(void *) M_java_util_concurrent_CompletableFuture_internalComplete_java_lang_Object_R_boolean,
	(void *) M_java_util_concurrent_CompletableFuture_tryPushStack_java_util_concurrent_CompletableFuture$Completion_R_boolean,
	(void *) M_java_util_concurrent_CompletableFuture_pushStack_java_util_concurrent_CompletableFuture$Completion,
	(void *) M_java_util_concurrent_CompletableFuture_completeNull_R_boolean,
	(void *) M_java_util_concurrent_CompletableFuture_encodeValue_java_lang_Object_R_java_lang_Object,
	(void *) M_java_util_concurrent_CompletableFuture_completeValue_java_lang_Object_R_boolean,
	(void *) M_java_util_concurrent_CompletableFuture_completeThrowable_java_lang_Throwable_R_boolean,
	(void *) M_java_util_concurrent_CompletableFuture_completeThrowable_java_lang_Throwable_java_lang_Object_R_boolean,
	(void *) M_java_util_concurrent_CompletableFuture_encodeOutcome_java_lang_Object_java_lang_Throwable_R_java_lang_Object,
	(void *) M_java_util_concurrent_CompletableFuture_completeRelay_java_lang_Object_R_boolean,
	(void *) M_java_util_concurrent_CompletableFuture_postComplete,
	(void *) M_java_util_concurrent_CompletableFuture_cleanStack,
	(void *) M_java_util_concurrent_CompletableFuture_unipush_java_util_concurrent_CompletableFuture$Completion,
	(void *) M_java_util_concurrent_CompletableFuture_postFire_java_util_concurrent_CompletableFuture_int_R_java_util_concurrent_CompletableFuture,
	(void *) M_java_util_concurrent_CompletableFuture_uniApplyStage_java_util_concurrent_Executor_java_util_function_Function_R_java_util_concurrent_CompletableFuture,
	(void *) M_java_util_concurrent_CompletableFuture_uniApplyNow_java_lang_Object_java_util_concurrent_Executor_java_util_function_Function_R_java_util_concurrent_CompletableFuture,
	(void *) M_java_util_concurrent_CompletableFuture_uniAcceptStage_java_util_concurrent_Executor_java_util_function_Consumer_R_java_util_concurrent_CompletableFuture,
	(void *) M_java_util_concurrent_CompletableFuture_uniAcceptNow_java_lang_Object_java_util_concurrent_Executor_java_util_function_Consumer_R_java_util_concurrent_CompletableFuture,
	(void *) M_java_util_concurrent_CompletableFuture_uniRunStage_java_util_concurrent_Executor_java_lang_Runnable_R_java_util_concurrent_CompletableFuture,
	(void *) M_java_util_concurrent_CompletableFuture_uniRunNow_java_lang_Object_java_util_concurrent_Executor_java_lang_Runnable_R_java_util_concurrent_CompletableFuture,
	(void *) M_java_util_concurrent_CompletableFuture_uniWhenComplete_java_lang_Object_java_util_function_BiConsumer_java_util_concurrent_CompletableFuture$UniWhenComplete_R_boolean,
	(void *) M_java_util_concurrent_CompletableFuture_uniWhenCompleteStage_java_util_concurrent_Executor_java_util_function_BiConsumer_R_java_util_concurrent_CompletableFuture,
	(void *) M_java_util_concurrent_CompletableFuture_uniHandle_java_lang_Object_java_util_function_BiFunction_java_util_concurrent_CompletableFuture$UniHandle_R_boolean,
	(void *) M_java_util_concurrent_CompletableFuture_uniHandleStage_java_util_concurrent_Executor_java_util_function_BiFunction_R_java_util_concurrent_CompletableFuture,
	(void *) M_java_util_concurrent_CompletableFuture_uniExceptionally_java_lang_Object_java_util_function_Function_java_util_concurrent_CompletableFuture$UniExceptionally_R_boolean,
	(void *) M_java_util_concurrent_CompletableFuture_uniExceptionallyStage_java_util_function_Function_R_java_util_concurrent_CompletableFuture,
	(void *) M_java_util_concurrent_CompletableFuture_uniAsMinimalStage_R_java_util_concurrent_CompletableFuture$MinimalStage,
	(void *) M_java_util_concurrent_CompletableFuture_uniComposeStage_java_util_concurrent_Executor_java_util_function_Function_R_java_util_concurrent_CompletableFuture,
	(void *) M_java_util_concurrent_CompletableFuture_bipush_java_util_concurrent_CompletableFuture_java_util_concurrent_CompletableFuture$BiCompletion,
	(void *) M_java_util_concurrent_CompletableFuture_postFire_java_util_concurrent_CompletableFuture_java_util_concurrent_CompletableFuture_int_R_java_util_concurrent_CompletableFuture,
	(void *) M_java_util_concurrent_CompletableFuture_biApply_java_lang_Object_java_lang_Object_java_util_function_BiFunction_java_util_concurrent_CompletableFuture$BiApply_R_boolean,
	(void *) M_java_util_concurrent_CompletableFuture_biApplyStage_java_util_concurrent_Executor_java_util_concurrent_CompletionStage_java_util_function_BiFunction_R_java_util_concurrent_CompletableFuture,
	(void *) M_java_util_concurrent_CompletableFuture_biAccept_java_lang_Object_java_lang_Object_java_util_function_BiConsumer_java_util_concurrent_CompletableFuture$BiAccept_R_boolean,
	(void *) M_java_util_concurrent_CompletableFuture_biAcceptStage_java_util_concurrent_Executor_java_util_concurrent_CompletionStage_java_util_function_BiConsumer_R_java_util_concurrent_CompletableFuture,
	(void *) M_java_util_concurrent_CompletableFuture_biRun_java_lang_Object_java_lang_Object_java_lang_Runnable_java_util_concurrent_CompletableFuture$BiRun_R_boolean,
	(void *) M_java_util_concurrent_CompletableFuture_biRunStage_java_util_concurrent_Executor_java_util_concurrent_CompletionStage_java_lang_Runnable_R_java_util_concurrent_CompletableFuture,
	(void *) M_java_util_concurrent_CompletableFuture_orpush_java_util_concurrent_CompletableFuture_java_util_concurrent_CompletableFuture$BiCompletion,
	(void *) M_java_util_concurrent_CompletableFuture_orApplyStage_java_util_concurrent_Executor_java_util_concurrent_CompletionStage_java_util_function_Function_R_java_util_concurrent_CompletableFuture,
	(void *) M_java_util_concurrent_CompletableFuture_orAcceptStage_java_util_concurrent_Executor_java_util_concurrent_CompletionStage_java_util_function_Consumer_R_java_util_concurrent_CompletableFuture,
	(void *) M_java_util_concurrent_CompletableFuture_orRunStage_java_util_concurrent_Executor_java_util_concurrent_CompletionStage_java_lang_Runnable_R_java_util_concurrent_CompletableFuture,
	(void *) M_java_util_concurrent_CompletableFuture_waitingGet_boolean_R_java_lang_Object,
	(void *) M_java_util_concurrent_CompletableFuture_timedGet_long_R_java_lang_Object,
	(void *) M_java_util_concurrent_CompletableFuture_join_R_java_lang_Object,
	(void *) M_java_util_concurrent_CompletableFuture_getNow_java_lang_Object_R_java_lang_Object,
	(void *) M_java_util_concurrent_CompletableFuture_complete_java_lang_Object_R_boolean,
	(void *) M_java_util_concurrent_CompletableFuture_completeExceptionally_java_lang_Throwable_R_boolean,
	(void *) M_java_util_concurrent_CompletableFuture_thenApply_java_util_function_Function_R_java_util_concurrent_CompletableFuture,
	(void *) M_java_util_concurrent_CompletableFuture_thenApplyAsync_java_util_function_Function_R_java_util_concurrent_CompletableFuture,
	(void *) M_java_util_concurrent_CompletableFuture_thenApplyAsync_java_util_function_Function_java_util_concurrent_Executor_R_java_util_concurrent_CompletableFuture,
	(void *) M_java_util_concurrent_CompletableFuture_thenAccept_java_util_function_Consumer_R_java_util_concurrent_CompletableFuture,
	(void *) M_java_util_concurrent_CompletableFuture_thenAcceptAsync_java_util_function_Consumer_R_java_util_concurrent_CompletableFuture,
	(void *) M_java_util_concurrent_CompletableFuture_thenAcceptAsync_java_util_function_Consumer_java_util_concurrent_Executor_R_java_util_concurrent_CompletableFuture,
	(void *) M_java_util_concurrent_CompletableFuture_thenRun_java_lang_Runnable_R_java_util_concurrent_CompletableFuture,
	(void *) M_java_util_concurrent_CompletableFuture_thenRunAsync_java_lang_Runnable_R_java_util_concurrent_CompletableFuture,
	(void *) M_java_util_concurrent_CompletableFuture_thenRunAsync_java_lang_Runnable_java_util_concurrent_Executor_R_java_util_concurrent_CompletableFuture,
	(void *) M_java_util_concurrent_CompletableFuture_thenCombine_java_util_concurrent_CompletionStage_java_util_function_BiFunction_R_java_util_concurrent_CompletableFuture,
	(void *) M_java_util_concurrent_CompletableFuture_thenCombineAsync_java_util_concurrent_CompletionStage_java_util_function_BiFunction_R_java_util_concurrent_CompletableFuture,
	(void *) M_java_util_concurrent_CompletableFuture_thenCombineAsync_java_util_concurrent_CompletionStage_java_util_function_BiFunction_java_util_concurrent_Executor_R_java_util_concurrent_CompletableFuture,
	(void *) M_java_util_concurrent_CompletableFuture_thenAcceptBoth_java_util_concurrent_CompletionStage_java_util_function_BiConsumer_R_java_util_concurrent_CompletableFuture,
	(void *) M_java_util_concurrent_CompletableFuture_thenAcceptBothAsync_java_util_concurrent_CompletionStage_java_util_function_BiConsumer_R_java_util_concurrent_CompletableFuture,
	(void *) M_java_util_concurrent_CompletableFuture_thenAcceptBothAsync_java_util_concurrent_CompletionStage_java_util_function_BiConsumer_java_util_concurrent_Executor_R_java_util_concurrent_CompletableFuture,
	(void *) M_java_util_concurrent_CompletableFuture_runAfterBoth_java_util_concurrent_CompletionStage_java_lang_Runnable_R_java_util_concurrent_CompletableFuture,
	(void *) M_java_util_concurrent_CompletableFuture_runAfterBothAsync_java_util_concurrent_CompletionStage_java_lang_Runnable_R_java_util_concurrent_CompletableFuture,
	(void *) M_java_util_concurrent_CompletableFuture_runAfterBothAsync_java_util_concurrent_CompletionStage_java_lang_Runnable_java_util_concurrent_Executor_R_java_util_concurrent_CompletableFuture,
	(void *) M_java_util_concurrent_CompletableFuture_applyToEither_java_util_concurrent_CompletionStage_java_util_function_Function_R_java_util_concurrent_CompletableFuture,
	(void *) M_java_util_concurrent_CompletableFuture_applyToEitherAsync_java_util_concurrent_CompletionStage_java_util_function_Function_R_java_util_concurrent_CompletableFuture,
	(void *) M_java_util_concurrent_CompletableFuture_applyToEitherAsync_java_util_concurrent_CompletionStage_java_util_function_Function_java_util_concurrent_Executor_R_java_util_concurrent_CompletableFuture,
	(void *) M_java_util_concurrent_CompletableFuture_acceptEither_java_util_concurrent_CompletionStage_java_util_function_Consumer_R_java_util_concurrent_CompletableFuture,
	(void *) M_java_util_concurrent_CompletableFuture_acceptEitherAsync_java_util_concurrent_CompletionStage_java_util_function_Consumer_R_java_util_concurrent_CompletableFuture,
	(void *) M_java_util_concurrent_CompletableFuture_acceptEitherAsync_java_util_concurrent_CompletionStage_java_util_function_Consumer_java_util_concurrent_Executor_R_java_util_concurrent_CompletableFuture,
	(void *) M_java_util_concurrent_CompletableFuture_runAfterEither_java_util_concurrent_CompletionStage_java_lang_Runnable_R_java_util_concurrent_CompletableFuture,
	(void *) M_java_util_concurrent_CompletableFuture_runAfterEitherAsync_java_util_concurrent_CompletionStage_java_lang_Runnable_R_java_util_concurrent_CompletableFuture,
	(void *) M_java_util_concurrent_CompletableFuture_runAfterEitherAsync_java_util_concurrent_CompletionStage_java_lang_Runnable_java_util_concurrent_Executor_R_java_util_concurrent_CompletableFuture,
	(void *) M_java_util_concurrent_CompletableFuture_thenCompose_java_util_function_Function_R_java_util_concurrent_CompletableFuture,
	(void *) M_java_util_concurrent_CompletableFuture_thenComposeAsync_java_util_function_Function_R_java_util_concurrent_CompletableFuture,
	(void *) M_java_util_concurrent_CompletableFuture_thenComposeAsync_java_util_function_Function_java_util_concurrent_Executor_R_java_util_concurrent_CompletableFuture,
	(void *) M_java_util_concurrent_CompletableFuture_whenComplete_java_util_function_BiConsumer_R_java_util_concurrent_CompletableFuture,
	(void *) M_java_util_concurrent_CompletableFuture_whenCompleteAsync_java_util_function_BiConsumer_R_java_util_concurrent_CompletableFuture,
	(void *) M_java_util_concurrent_CompletableFuture_whenCompleteAsync_java_util_function_BiConsumer_java_util_concurrent_Executor_R_java_util_concurrent_CompletableFuture,
	(void *) M_java_util_concurrent_CompletableFuture_handle_java_util_function_BiFunction_R_java_util_concurrent_CompletableFuture,
	(void *) M_java_util_concurrent_CompletableFuture_handleAsync_java_util_function_BiFunction_R_java_util_concurrent_CompletableFuture,
	(void *) M_java_util_concurrent_CompletableFuture_handleAsync_java_util_function_BiFunction_java_util_concurrent_Executor_R_java_util_concurrent_CompletableFuture,
	(void *) M_java_util_concurrent_CompletableFuture_exceptionally_java_util_function_Function_R_java_util_concurrent_CompletableFuture,
	(void *) M_java_util_concurrent_CompletableFuture_isCompletedExceptionally_R_boolean,
	(void *) M_java_util_concurrent_CompletableFuture_obtrudeValue_java_lang_Object,
	(void *) M_java_util_concurrent_CompletableFuture_obtrudeException_java_lang_Throwable,
	(void *) M_java_util_concurrent_CompletableFuture_getNumberOfDependents_R_int,
	(void *) M_java_util_concurrent_CompletableFuture_newIncompleteFuture_R_java_util_concurrent_CompletableFuture,
	(void *) M_java_util_concurrent_CompletableFuture_defaultExecutor_R_java_util_concurrent_Executor,
	(void *) M_java_util_concurrent_CompletableFuture_copy_R_java_util_concurrent_CompletableFuture,
	(void *) M_java_util_concurrent_CompletableFuture_minimalCompletionStage_R_java_util_concurrent_CompletionStage,
	(void *) M_java_util_concurrent_CompletableFuture_completeAsync_java_util_function_Supplier_java_util_concurrent_Executor_R_java_util_concurrent_CompletableFuture,
	(void *) M_java_util_concurrent_CompletableFuture_completeAsync_java_util_function_Supplier_R_java_util_concurrent_CompletableFuture,
	(void *) M_java_util_concurrent_CompletableFuture_orTimeout_long_java_util_concurrent_TimeUnit_R_java_util_concurrent_CompletableFuture,
	(void *) M_java_util_concurrent_CompletableFuture_completeOnTimeout_java_lang_Object_long_java_util_concurrent_TimeUnit_R_java_util_concurrent_CompletableFuture,
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
	{ "thenApply", "(Ljava/util/function/Function;)Ljava/util/concurrent/CompletionStage;" },
	{ "thenApplyAsync", "(Ljava/util/function/Function;)Ljava/util/concurrent/CompletionStage;" },
	{ "thenApplyAsync", "(Ljava/util/function/Function;Ljava/util/concurrent/Executor;)Ljava/util/concurrent/CompletionStage;" },
	{ "thenAccept", "(Ljava/util/function/Consumer;)Ljava/util/concurrent/CompletionStage;" },
	{ "thenAcceptAsync", "(Ljava/util/function/Consumer;)Ljava/util/concurrent/CompletionStage;" },
	{ "thenAcceptAsync", "(Ljava/util/function/Consumer;Ljava/util/concurrent/Executor;)Ljava/util/concurrent/CompletionStage;" },
	{ "thenRun", "(Ljava/lang/Runnable;)Ljava/util/concurrent/CompletionStage;" },
	{ "thenRunAsync", "(Ljava/lang/Runnable;)Ljava/util/concurrent/CompletionStage;" },
	{ "thenRunAsync", "(Ljava/lang/Runnable;Ljava/util/concurrent/Executor;)Ljava/util/concurrent/CompletionStage;" },
	{ "thenCombine", "(Ljava/util/concurrent/CompletionStage;Ljava/util/function/BiFunction;)Ljava/util/concurrent/CompletionStage;" },
	{ "thenCombineAsync", "(Ljava/util/concurrent/CompletionStage;Ljava/util/function/BiFunction;)Ljava/util/concurrent/CompletionStage;" },
	{ "thenCombineAsync", "(Ljava/util/concurrent/CompletionStage;Ljava/util/function/BiFunction;Ljava/util/concurrent/Executor;)Ljava/util/concurrent/CompletionStage;" },
	{ "thenAcceptBoth", "(Ljava/util/concurrent/CompletionStage;Ljava/util/function/BiConsumer;)Ljava/util/concurrent/CompletionStage;" },
	{ "thenAcceptBothAsync", "(Ljava/util/concurrent/CompletionStage;Ljava/util/function/BiConsumer;)Ljava/util/concurrent/CompletionStage;" },
	{ "thenAcceptBothAsync", "(Ljava/util/concurrent/CompletionStage;Ljava/util/function/BiConsumer;Ljava/util/concurrent/Executor;)Ljava/util/concurrent/CompletionStage;" },
	{ "runAfterBoth", "(Ljava/util/concurrent/CompletionStage;Ljava/lang/Runnable;)Ljava/util/concurrent/CompletionStage;" },
	{ "runAfterBothAsync", "(Ljava/util/concurrent/CompletionStage;Ljava/lang/Runnable;)Ljava/util/concurrent/CompletionStage;" },
	{ "runAfterBothAsync", "(Ljava/util/concurrent/CompletionStage;Ljava/lang/Runnable;Ljava/util/concurrent/Executor;)Ljava/util/concurrent/CompletionStage;" },
	{ "applyToEither", "(Ljava/util/concurrent/CompletionStage;Ljava/util/function/Function;)Ljava/util/concurrent/CompletionStage;" },
	{ "applyToEitherAsync", "(Ljava/util/concurrent/CompletionStage;Ljava/util/function/Function;)Ljava/util/concurrent/CompletionStage;" },
	{ "applyToEitherAsync", "(Ljava/util/concurrent/CompletionStage;Ljava/util/function/Function;Ljava/util/concurrent/Executor;)Ljava/util/concurrent/CompletionStage;" },
	{ "acceptEither", "(Ljava/util/concurrent/CompletionStage;Ljava/util/function/Consumer;)Ljava/util/concurrent/CompletionStage;" },
	{ "acceptEitherAsync", "(Ljava/util/concurrent/CompletionStage;Ljava/util/function/Consumer;)Ljava/util/concurrent/CompletionStage;" },
	{ "acceptEitherAsync", "(Ljava/util/concurrent/CompletionStage;Ljava/util/function/Consumer;Ljava/util/concurrent/Executor;)Ljava/util/concurrent/CompletionStage;" },
	{ "runAfterEither", "(Ljava/util/concurrent/CompletionStage;Ljava/lang/Runnable;)Ljava/util/concurrent/CompletionStage;" },
	{ "runAfterEitherAsync", "(Ljava/util/concurrent/CompletionStage;Ljava/lang/Runnable;)Ljava/util/concurrent/CompletionStage;" },
	{ "runAfterEitherAsync", "(Ljava/util/concurrent/CompletionStage;Ljava/lang/Runnable;Ljava/util/concurrent/Executor;)Ljava/util/concurrent/CompletionStage;" },
	{ "thenCompose", "(Ljava/util/function/Function;)Ljava/util/concurrent/CompletionStage;" },
	{ "thenComposeAsync", "(Ljava/util/function/Function;)Ljava/util/concurrent/CompletionStage;" },
	{ "thenComposeAsync", "(Ljava/util/function/Function;Ljava/util/concurrent/Executor;)Ljava/util/concurrent/CompletionStage;" },
	{ "handle", "(Ljava/util/function/BiFunction;)Ljava/util/concurrent/CompletionStage;" },
	{ "handleAsync", "(Ljava/util/function/BiFunction;)Ljava/util/concurrent/CompletionStage;" },
	{ "handleAsync", "(Ljava/util/function/BiFunction;Ljava/util/concurrent/Executor;)Ljava/util/concurrent/CompletionStage;" },
	{ "whenComplete", "(Ljava/util/function/BiConsumer;)Ljava/util/concurrent/CompletionStage;" },
	{ "whenCompleteAsync", "(Ljava/util/function/BiConsumer;)Ljava/util/concurrent/CompletionStage;" },
	{ "whenCompleteAsync", "(Ljava/util/function/BiConsumer;Ljava/util/concurrent/Executor;)Ljava/util/concurrent/CompletionStage;" },
	{ "exceptionally", "(Ljava/util/function/Function;)Ljava/util/concurrent/CompletionStage;" },
	{ "toCompletableFuture", "()Ljava/util/concurrent/CompletableFuture;" },
	{ "internalComplete", "(Ljava/lang/Object;)Z" },
	{ "tryPushStack", "(Ljava/util/concurrent/CompletableFuture$Completion;)Z" },
	{ "pushStack", "(Ljava/util/concurrent/CompletableFuture$Completion;)V" },
	{ "completeNull", "()Z" },
	{ "encodeValue", "(Ljava/lang/Object;)Ljava/lang/Object;" },
	{ "completeValue", "(Ljava/lang/Object;)Z" },
	{ "completeThrowable", "(Ljava/lang/Throwable;)Z" },
	{ "completeThrowable", "(Ljava/lang/Throwable;Ljava/lang/Object;)Z" },
	{ "encodeOutcome", "(Ljava/lang/Object;Ljava/lang/Throwable;)Ljava/lang/Object;" },
	{ "completeRelay", "(Ljava/lang/Object;)Z" },
	{ "postComplete", "()V" },
	{ "cleanStack", "()V" },
	{ "unipush", "(Ljava/util/concurrent/CompletableFuture$Completion;)V" },
	{ "postFire", "(Ljava/util/concurrent/CompletableFuture;I)Ljava/util/concurrent/CompletableFuture;" },
	{ "uniApplyStage", "(Ljava/util/concurrent/Executor;Ljava/util/function/Function;)Ljava/util/concurrent/CompletableFuture;" },
	{ "uniApplyNow", "(Ljava/lang/Object;Ljava/util/concurrent/Executor;Ljava/util/function/Function;)Ljava/util/concurrent/CompletableFuture;" },
	{ "uniAcceptStage", "(Ljava/util/concurrent/Executor;Ljava/util/function/Consumer;)Ljava/util/concurrent/CompletableFuture;" },
	{ "uniAcceptNow", "(Ljava/lang/Object;Ljava/util/concurrent/Executor;Ljava/util/function/Consumer;)Ljava/util/concurrent/CompletableFuture;" },
	{ "uniRunStage", "(Ljava/util/concurrent/Executor;Ljava/lang/Runnable;)Ljava/util/concurrent/CompletableFuture;" },
	{ "uniRunNow", "(Ljava/lang/Object;Ljava/util/concurrent/Executor;Ljava/lang/Runnable;)Ljava/util/concurrent/CompletableFuture;" },
	{ "uniWhenComplete", "(Ljava/lang/Object;Ljava/util/function/BiConsumer;Ljava/util/concurrent/CompletableFuture$UniWhenComplete;)Z" },
	{ "uniWhenCompleteStage", "(Ljava/util/concurrent/Executor;Ljava/util/function/BiConsumer;)Ljava/util/concurrent/CompletableFuture;" },
	{ "uniHandle", "(Ljava/lang/Object;Ljava/util/function/BiFunction;Ljava/util/concurrent/CompletableFuture$UniHandle;)Z" },
	{ "uniHandleStage", "(Ljava/util/concurrent/Executor;Ljava/util/function/BiFunction;)Ljava/util/concurrent/CompletableFuture;" },
	{ "uniExceptionally", "(Ljava/lang/Object;Ljava/util/function/Function;Ljava/util/concurrent/CompletableFuture$UniExceptionally;)Z" },
	{ "uniExceptionallyStage", "(Ljava/util/function/Function;)Ljava/util/concurrent/CompletableFuture;" },
	{ "uniAsMinimalStage", "()Ljava/util/concurrent/CompletableFuture$MinimalStage;" },
	{ "uniComposeStage", "(Ljava/util/concurrent/Executor;Ljava/util/function/Function;)Ljava/util/concurrent/CompletableFuture;" },
	{ "bipush", "(Ljava/util/concurrent/CompletableFuture;Ljava/util/concurrent/CompletableFuture$BiCompletion;)V" },
	{ "postFire", "(Ljava/util/concurrent/CompletableFuture;Ljava/util/concurrent/CompletableFuture;I)Ljava/util/concurrent/CompletableFuture;" },
	{ "biApply", "(Ljava/lang/Object;Ljava/lang/Object;Ljava/util/function/BiFunction;Ljava/util/concurrent/CompletableFuture$BiApply;)Z" },
	{ "biApplyStage", "(Ljava/util/concurrent/Executor;Ljava/util/concurrent/CompletionStage;Ljava/util/function/BiFunction;)Ljava/util/concurrent/CompletableFuture;" },
	{ "biAccept", "(Ljava/lang/Object;Ljava/lang/Object;Ljava/util/function/BiConsumer;Ljava/util/concurrent/CompletableFuture$BiAccept;)Z" },
	{ "biAcceptStage", "(Ljava/util/concurrent/Executor;Ljava/util/concurrent/CompletionStage;Ljava/util/function/BiConsumer;)Ljava/util/concurrent/CompletableFuture;" },
	{ "biRun", "(Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Runnable;Ljava/util/concurrent/CompletableFuture$BiRun;)Z" },
	{ "biRunStage", "(Ljava/util/concurrent/Executor;Ljava/util/concurrent/CompletionStage;Ljava/lang/Runnable;)Ljava/util/concurrent/CompletableFuture;" },
	{ "orpush", "(Ljava/util/concurrent/CompletableFuture;Ljava/util/concurrent/CompletableFuture$BiCompletion;)V" },
	{ "orApplyStage", "(Ljava/util/concurrent/Executor;Ljava/util/concurrent/CompletionStage;Ljava/util/function/Function;)Ljava/util/concurrent/CompletableFuture;" },
	{ "orAcceptStage", "(Ljava/util/concurrent/Executor;Ljava/util/concurrent/CompletionStage;Ljava/util/function/Consumer;)Ljava/util/concurrent/CompletableFuture;" },
	{ "orRunStage", "(Ljava/util/concurrent/Executor;Ljava/util/concurrent/CompletionStage;Ljava/lang/Runnable;)Ljava/util/concurrent/CompletableFuture;" },
	{ "waitingGet", "(Z)Ljava/lang/Object;" },
	{ "timedGet", "(J)Ljava/lang/Object;" },
	{ "join", "()Ljava/lang/Object;" },
	{ "getNow", "(Ljava/lang/Object;)Ljava/lang/Object;" },
	{ "complete", "(Ljava/lang/Object;)Z" },
	{ "completeExceptionally", "(Ljava/lang/Throwable;)Z" },
	{ "thenApply", "(Ljava/util/function/Function;)Ljava/util/concurrent/CompletableFuture;" },
	{ "thenApplyAsync", "(Ljava/util/function/Function;)Ljava/util/concurrent/CompletableFuture;" },
	{ "thenApplyAsync", "(Ljava/util/function/Function;Ljava/util/concurrent/Executor;)Ljava/util/concurrent/CompletableFuture;" },
	{ "thenAccept", "(Ljava/util/function/Consumer;)Ljava/util/concurrent/CompletableFuture;" },
	{ "thenAcceptAsync", "(Ljava/util/function/Consumer;)Ljava/util/concurrent/CompletableFuture;" },
	{ "thenAcceptAsync", "(Ljava/util/function/Consumer;Ljava/util/concurrent/Executor;)Ljava/util/concurrent/CompletableFuture;" },
	{ "thenRun", "(Ljava/lang/Runnable;)Ljava/util/concurrent/CompletableFuture;" },
	{ "thenRunAsync", "(Ljava/lang/Runnable;)Ljava/util/concurrent/CompletableFuture;" },
	{ "thenRunAsync", "(Ljava/lang/Runnable;Ljava/util/concurrent/Executor;)Ljava/util/concurrent/CompletableFuture;" },
	{ "thenCombine", "(Ljava/util/concurrent/CompletionStage;Ljava/util/function/BiFunction;)Ljava/util/concurrent/CompletableFuture;" },
	{ "thenCombineAsync", "(Ljava/util/concurrent/CompletionStage;Ljava/util/function/BiFunction;)Ljava/util/concurrent/CompletableFuture;" },
	{ "thenCombineAsync", "(Ljava/util/concurrent/CompletionStage;Ljava/util/function/BiFunction;Ljava/util/concurrent/Executor;)Ljava/util/concurrent/CompletableFuture;" },
	{ "thenAcceptBoth", "(Ljava/util/concurrent/CompletionStage;Ljava/util/function/BiConsumer;)Ljava/util/concurrent/CompletableFuture;" },
	{ "thenAcceptBothAsync", "(Ljava/util/concurrent/CompletionStage;Ljava/util/function/BiConsumer;)Ljava/util/concurrent/CompletableFuture;" },
	{ "thenAcceptBothAsync", "(Ljava/util/concurrent/CompletionStage;Ljava/util/function/BiConsumer;Ljava/util/concurrent/Executor;)Ljava/util/concurrent/CompletableFuture;" },
	{ "runAfterBoth", "(Ljava/util/concurrent/CompletionStage;Ljava/lang/Runnable;)Ljava/util/concurrent/CompletableFuture;" },
	{ "runAfterBothAsync", "(Ljava/util/concurrent/CompletionStage;Ljava/lang/Runnable;)Ljava/util/concurrent/CompletableFuture;" },
	{ "runAfterBothAsync", "(Ljava/util/concurrent/CompletionStage;Ljava/lang/Runnable;Ljava/util/concurrent/Executor;)Ljava/util/concurrent/CompletableFuture;" },
	{ "applyToEither", "(Ljava/util/concurrent/CompletionStage;Ljava/util/function/Function;)Ljava/util/concurrent/CompletableFuture;" },
	{ "applyToEitherAsync", "(Ljava/util/concurrent/CompletionStage;Ljava/util/function/Function;)Ljava/util/concurrent/CompletableFuture;" },
	{ "applyToEitherAsync", "(Ljava/util/concurrent/CompletionStage;Ljava/util/function/Function;Ljava/util/concurrent/Executor;)Ljava/util/concurrent/CompletableFuture;" },
	{ "acceptEither", "(Ljava/util/concurrent/CompletionStage;Ljava/util/function/Consumer;)Ljava/util/concurrent/CompletableFuture;" },
	{ "acceptEitherAsync", "(Ljava/util/concurrent/CompletionStage;Ljava/util/function/Consumer;)Ljava/util/concurrent/CompletableFuture;" },
	{ "acceptEitherAsync", "(Ljava/util/concurrent/CompletionStage;Ljava/util/function/Consumer;Ljava/util/concurrent/Executor;)Ljava/util/concurrent/CompletableFuture;" },
	{ "runAfterEither", "(Ljava/util/concurrent/CompletionStage;Ljava/lang/Runnable;)Ljava/util/concurrent/CompletableFuture;" },
	{ "runAfterEitherAsync", "(Ljava/util/concurrent/CompletionStage;Ljava/lang/Runnable;)Ljava/util/concurrent/CompletableFuture;" },
	{ "runAfterEitherAsync", "(Ljava/util/concurrent/CompletionStage;Ljava/lang/Runnable;Ljava/util/concurrent/Executor;)Ljava/util/concurrent/CompletableFuture;" },
	{ "thenCompose", "(Ljava/util/function/Function;)Ljava/util/concurrent/CompletableFuture;" },
	{ "thenComposeAsync", "(Ljava/util/function/Function;)Ljava/util/concurrent/CompletableFuture;" },
	{ "thenComposeAsync", "(Ljava/util/function/Function;Ljava/util/concurrent/Executor;)Ljava/util/concurrent/CompletableFuture;" },
	{ "whenComplete", "(Ljava/util/function/BiConsumer;)Ljava/util/concurrent/CompletableFuture;" },
	{ "whenCompleteAsync", "(Ljava/util/function/BiConsumer;)Ljava/util/concurrent/CompletableFuture;" },
	{ "whenCompleteAsync", "(Ljava/util/function/BiConsumer;Ljava/util/concurrent/Executor;)Ljava/util/concurrent/CompletableFuture;" },
	{ "handle", "(Ljava/util/function/BiFunction;)Ljava/util/concurrent/CompletableFuture;" },
	{ "handleAsync", "(Ljava/util/function/BiFunction;)Ljava/util/concurrent/CompletableFuture;" },
	{ "handleAsync", "(Ljava/util/function/BiFunction;Ljava/util/concurrent/Executor;)Ljava/util/concurrent/CompletableFuture;" },
	{ "exceptionally", "(Ljava/util/function/Function;)Ljava/util/concurrent/CompletableFuture;" },
	{ "isCompletedExceptionally", "()Z" },
	{ "obtrudeValue", "(Ljava/lang/Object;)V" },
	{ "obtrudeException", "(Ljava/lang/Throwable;)V" },
	{ "getNumberOfDependents", "()I" },
	{ "newIncompleteFuture", "()Ljava/util/concurrent/CompletableFuture;" },
	{ "defaultExecutor", "()Ljava/util/concurrent/Executor;" },
	{ "copy", "()Ljava/util/concurrent/CompletableFuture;" },
	{ "minimalCompletionStage", "()Ljava/util/concurrent/CompletionStage;" },
	{ "completeAsync", "(Ljava/util/function/Supplier;Ljava/util/concurrent/Executor;)Ljava/util/concurrent/CompletableFuture;" },
	{ "completeAsync", "(Ljava/util/function/Supplier;)Ljava/util/concurrent/CompletableFuture;" },
	{ "orTimeout", "(JLjava/util/concurrent/TimeUnit;)Ljava/util/concurrent/CompletableFuture;" },
	{ "completeOnTimeout", "(Ljava/lang/Object;JLjava/util/concurrent/TimeUnit;)Ljava/util/concurrent/CompletableFuture;" },
};

static jclass interfaces[] { &class_java_util_concurrent_Future, &class_java_util_concurrent_CompletionStage, };

static jclass innerClasses[] {
	&class_java_util_concurrent_CompletableFuture$Completion,
	&class_java_util_concurrent_CompletableFuture$AltResult,
	&class_java_util_concurrent_CompletableFuture$UniApply,
	&class_java_util_concurrent_CompletableFuture$UniAccept,
	&class_java_util_concurrent_CompletableFuture$UniRun,
	&class_java_util_concurrent_CompletableFuture$UniWhenComplete,
	&class_java_util_concurrent_CompletableFuture$UniHandle,
	&class_java_util_concurrent_CompletableFuture$UniExceptionally,
	&class_java_util_concurrent_CompletableFuture$UniRelay,
	&class_java_util_concurrent_CompletableFuture$MinimalStage,
	&class_java_util_concurrent_CompletableFuture$UniCompose,
	&class_java_util_concurrent_CompletableFuture$CoCompletion,
	&class_java_util_concurrent_CompletableFuture$BiCompletion,
	&class_java_util_concurrent_CompletableFuture$BiApply,
	&class_java_util_concurrent_CompletableFuture$BiAccept,
	&class_java_util_concurrent_CompletableFuture$BiRun,
	&class_java_util_concurrent_CompletableFuture$BiRelay,
	&class_java_util_concurrent_CompletableFuture$OrApply,
	&class_java_util_concurrent_CompletableFuture$OrAccept,
	&class_java_util_concurrent_CompletableFuture$OrRun,
	&class_java_util_concurrent_CompletableFuture$AsyncSupply,
	&class_java_util_concurrent_CompletableFuture$AsyncRun,
	&class_java_util_concurrent_CompletableFuture$Signaller,
	&class_java_util_concurrent_CompletableFuture$AnyOf,
	&class_java_util_concurrent_CompletableFuture$Canceller,
	&class_java_util_concurrent_CompletableFuture$Timeout,
	&class_java_util_concurrent_CompletableFuture$Delayer,
	&class_java_util_concurrent_CompletableFuture$DelayedCompleter,
	&class_java_util_concurrent_CompletableFuture$DelayedExecutor,
	&class_java_util_concurrent_CompletableFuture$ThreadPerTaskExecutor,
	&class_java_util_concurrent_CompletableFuture$TaskSubmitter,
	&class_java_util_concurrent_CompletableFuture$UniCompletion,
	&class_java_util_concurrent_CompletableFuture$AsynchronousCompletionTask,
};

static FieldMetadata fields[] {
	{ "result", &class_java_lang_Object, offsetof(java_util_concurrent_CompletableFuture, F_result), "Ljava/lang/Object;", 64 },
	{ "stack", &class_java_util_concurrent_CompletableFuture$Completion, offsetof(java_util_concurrent_CompletableFuture, F_stack), "Ljava/util/concurrent/CompletableFuture$Completion;", 64 },
	{ "NIL", &class_java_util_concurrent_CompletableFuture$AltResult, (intptr_t) &SF_java_util_concurrent_CompletableFuture_NIL, "Ljava/util/concurrent/CompletableFuture$AltResult;", 24 },
	{ "USE_COMMON_POOL", &class_boolean, (intptr_t) &SF_java_util_concurrent_CompletableFuture_USE_COMMON_POOL, "Z", 26 },
	{ "ASYNC_POOL", &class_java_util_concurrent_Executor, (intptr_t) &SF_java_util_concurrent_CompletableFuture_ASYNC_POOL, "Ljava/util/concurrent/Executor;", 26 },
	{ "SYNC", &class_int, (intptr_t) &SF_java_util_concurrent_CompletableFuture_SYNC, "I", 24 },
	{ "ASYNC", &class_int, (intptr_t) &SF_java_util_concurrent_CompletableFuture_ASYNC, "I", 24 },
	{ "NESTED", &class_int, (intptr_t) &SF_java_util_concurrent_CompletableFuture_NESTED, "I", 24 },
};

static MethodMetadata methods[] {
	{ "internalComplete", (intptr_t) M_java_util_concurrent_CompletableFuture_internalComplete_java_lang_Object_R_boolean, VTABLE_java_util_concurrent_CompletableFuture_internalComplete_java_lang_Object_R_boolean, "(Ljava/lang/Object;)Z", 48 },
	{ "tryPushStack", (intptr_t) M_java_util_concurrent_CompletableFuture_tryPushStack_java_util_concurrent_CompletableFuture$Completion_R_boolean, VTABLE_java_util_concurrent_CompletableFuture_tryPushStack_java_util_concurrent_CompletableFuture$Completion_R_boolean, "(Ljava/util/concurrent/CompletableFuture$Completion;)Z", 48 },
	{ "pushStack", (intptr_t) M_java_util_concurrent_CompletableFuture_pushStack_java_util_concurrent_CompletableFuture$Completion, VTABLE_java_util_concurrent_CompletableFuture_pushStack_java_util_concurrent_CompletableFuture$Completion, "(Ljava/util/concurrent/CompletableFuture$Completion;)V", 16 },
	{ "completeNull", (intptr_t) M_java_util_concurrent_CompletableFuture_completeNull_R_boolean, VTABLE_java_util_concurrent_CompletableFuture_completeNull_R_boolean, "()Z", 48 },
	{ "encodeValue", (intptr_t) M_java_util_concurrent_CompletableFuture_encodeValue_java_lang_Object_R_java_lang_Object, VTABLE_java_util_concurrent_CompletableFuture_encodeValue_java_lang_Object_R_java_lang_Object, "(Ljava/lang/Object;)Ljava/lang/Object;", 16 },
	{ "completeValue", (intptr_t) M_java_util_concurrent_CompletableFuture_completeValue_java_lang_Object_R_boolean, VTABLE_java_util_concurrent_CompletableFuture_completeValue_java_lang_Object_R_boolean, "(Ljava/lang/Object;)Z", 48 },
	{ "encodeThrowable", (intptr_t) SM_java_util_concurrent_CompletableFuture_encodeThrowable_java_lang_Throwable_R_java_util_concurrent_CompletableFuture$AltResult, 0, "(Ljava/lang/Throwable;)Ljava/util/concurrent/CompletableFuture$AltResult;", 8 },
	{ "completeThrowable", (intptr_t) M_java_util_concurrent_CompletableFuture_completeThrowable_java_lang_Throwable_R_boolean, VTABLE_java_util_concurrent_CompletableFuture_completeThrowable_java_lang_Throwable_R_boolean, "(Ljava/lang/Throwable;)Z", 48 },
	{ "encodeThrowable", (intptr_t) SM_java_util_concurrent_CompletableFuture_encodeThrowable_java_lang_Throwable_java_lang_Object_R_java_lang_Object, 0, "(Ljava/lang/Throwable;Ljava/lang/Object;)Ljava/lang/Object;", 8 },
	{ "completeThrowable", (intptr_t) M_java_util_concurrent_CompletableFuture_completeThrowable_java_lang_Throwable_java_lang_Object_R_boolean, VTABLE_java_util_concurrent_CompletableFuture_completeThrowable_java_lang_Throwable_java_lang_Object_R_boolean, "(Ljava/lang/Throwable;Ljava/lang/Object;)Z", 48 },
	{ "encodeOutcome", (intptr_t) M_java_util_concurrent_CompletableFuture_encodeOutcome_java_lang_Object_java_lang_Throwable_R_java_lang_Object, VTABLE_java_util_concurrent_CompletableFuture_encodeOutcome_java_lang_Object_java_lang_Throwable_R_java_lang_Object, "(Ljava/lang/Object;Ljava/lang/Throwable;)Ljava/lang/Object;", 0 },
	{ "encodeRelay", (intptr_t) SM_java_util_concurrent_CompletableFuture_encodeRelay_java_lang_Object_R_java_lang_Object, 0, "(Ljava/lang/Object;)Ljava/lang/Object;", 8 },
	{ "completeRelay", (intptr_t) M_java_util_concurrent_CompletableFuture_completeRelay_java_lang_Object_R_boolean, VTABLE_java_util_concurrent_CompletableFuture_completeRelay_java_lang_Object_R_boolean, "(Ljava/lang/Object;)Z", 48 },
	{ "reportGet", (intptr_t) SM_java_util_concurrent_CompletableFuture_reportGet_java_lang_Object_R_java_lang_Object, 0, "(Ljava/lang/Object;)Ljava/lang/Object;", 10 },
	{ "reportJoin", (intptr_t) SM_java_util_concurrent_CompletableFuture_reportJoin_java_lang_Object_R_java_lang_Object, 0, "(Ljava/lang/Object;)Ljava/lang/Object;", 10 },
	{ "screenExecutor", (intptr_t) SM_java_util_concurrent_CompletableFuture_screenExecutor_java_util_concurrent_Executor_R_java_util_concurrent_Executor, 0, "(Ljava/util/concurrent/Executor;)Ljava/util/concurrent/Executor;", 8 },
	{ "postComplete", (intptr_t) M_java_util_concurrent_CompletableFuture_postComplete, VTABLE_java_util_concurrent_CompletableFuture_postComplete, "()V", 48 },
	{ "cleanStack", (intptr_t) M_java_util_concurrent_CompletableFuture_cleanStack, VTABLE_java_util_concurrent_CompletableFuture_cleanStack, "()V", 48 },
	{ "unipush", (intptr_t) M_java_util_concurrent_CompletableFuture_unipush_java_util_concurrent_CompletableFuture$Completion, VTABLE_java_util_concurrent_CompletableFuture_unipush_java_util_concurrent_CompletableFuture$Completion, "(Ljava/util/concurrent/CompletableFuture$Completion;)V", 48 },
	{ "postFire", (intptr_t) M_java_util_concurrent_CompletableFuture_postFire_java_util_concurrent_CompletableFuture_int_R_java_util_concurrent_CompletableFuture, VTABLE_java_util_concurrent_CompletableFuture_postFire_java_util_concurrent_CompletableFuture_int_R_java_util_concurrent_CompletableFuture, "(Ljava/util/concurrent/CompletableFuture;I)Ljava/util/concurrent/CompletableFuture;", 16 },
	{ "uniApplyStage", (intptr_t) M_java_util_concurrent_CompletableFuture_uniApplyStage_java_util_concurrent_Executor_java_util_function_Function_R_java_util_concurrent_CompletableFuture, VTABLE_java_util_concurrent_CompletableFuture_uniApplyStage_java_util_concurrent_Executor_java_util_function_Function_R_java_util_concurrent_CompletableFuture, "(Ljava/util/concurrent/Executor;Ljava/util/function/Function;)Ljava/util/concurrent/CompletableFuture;", 2 },
	{ "uniApplyNow", (intptr_t) M_java_util_concurrent_CompletableFuture_uniApplyNow_java_lang_Object_java_util_concurrent_Executor_java_util_function_Function_R_java_util_concurrent_CompletableFuture, VTABLE_java_util_concurrent_CompletableFuture_uniApplyNow_java_lang_Object_java_util_concurrent_Executor_java_util_function_Function_R_java_util_concurrent_CompletableFuture, "(Ljava/lang/Object;Ljava/util/concurrent/Executor;Ljava/util/function/Function;)Ljava/util/concurrent/CompletableFuture;", 2 },
	{ "uniAcceptStage", (intptr_t) M_java_util_concurrent_CompletableFuture_uniAcceptStage_java_util_concurrent_Executor_java_util_function_Consumer_R_java_util_concurrent_CompletableFuture, VTABLE_java_util_concurrent_CompletableFuture_uniAcceptStage_java_util_concurrent_Executor_java_util_function_Consumer_R_java_util_concurrent_CompletableFuture, "(Ljava/util/concurrent/Executor;Ljava/util/function/Consumer;)Ljava/util/concurrent/CompletableFuture;", 2 },
	{ "uniAcceptNow", (intptr_t) M_java_util_concurrent_CompletableFuture_uniAcceptNow_java_lang_Object_java_util_concurrent_Executor_java_util_function_Consumer_R_java_util_concurrent_CompletableFuture, VTABLE_java_util_concurrent_CompletableFuture_uniAcceptNow_java_lang_Object_java_util_concurrent_Executor_java_util_function_Consumer_R_java_util_concurrent_CompletableFuture, "(Ljava/lang/Object;Ljava/util/concurrent/Executor;Ljava/util/function/Consumer;)Ljava/util/concurrent/CompletableFuture;", 2 },
	{ "uniRunStage", (intptr_t) M_java_util_concurrent_CompletableFuture_uniRunStage_java_util_concurrent_Executor_java_lang_Runnable_R_java_util_concurrent_CompletableFuture, VTABLE_java_util_concurrent_CompletableFuture_uniRunStage_java_util_concurrent_Executor_java_lang_Runnable_R_java_util_concurrent_CompletableFuture, "(Ljava/util/concurrent/Executor;Ljava/lang/Runnable;)Ljava/util/concurrent/CompletableFuture;", 2 },
	{ "uniRunNow", (intptr_t) M_java_util_concurrent_CompletableFuture_uniRunNow_java_lang_Object_java_util_concurrent_Executor_java_lang_Runnable_R_java_util_concurrent_CompletableFuture, VTABLE_java_util_concurrent_CompletableFuture_uniRunNow_java_lang_Object_java_util_concurrent_Executor_java_lang_Runnable_R_java_util_concurrent_CompletableFuture, "(Ljava/lang/Object;Ljava/util/concurrent/Executor;Ljava/lang/Runnable;)Ljava/util/concurrent/CompletableFuture;", 2 },
	{ "uniWhenComplete", (intptr_t) M_java_util_concurrent_CompletableFuture_uniWhenComplete_java_lang_Object_java_util_function_BiConsumer_java_util_concurrent_CompletableFuture$UniWhenComplete_R_boolean, VTABLE_java_util_concurrent_CompletableFuture_uniWhenComplete_java_lang_Object_java_util_function_BiConsumer_java_util_concurrent_CompletableFuture$UniWhenComplete_R_boolean, "(Ljava/lang/Object;Ljava/util/function/BiConsumer;Ljava/util/concurrent/CompletableFuture$UniWhenComplete;)Z", 16 },
	{ "uniWhenCompleteStage", (intptr_t) M_java_util_concurrent_CompletableFuture_uniWhenCompleteStage_java_util_concurrent_Executor_java_util_function_BiConsumer_R_java_util_concurrent_CompletableFuture, VTABLE_java_util_concurrent_CompletableFuture_uniWhenCompleteStage_java_util_concurrent_Executor_java_util_function_BiConsumer_R_java_util_concurrent_CompletableFuture, "(Ljava/util/concurrent/Executor;Ljava/util/function/BiConsumer;)Ljava/util/concurrent/CompletableFuture;", 2 },
	{ "uniHandle", (intptr_t) M_java_util_concurrent_CompletableFuture_uniHandle_java_lang_Object_java_util_function_BiFunction_java_util_concurrent_CompletableFuture$UniHandle_R_boolean, VTABLE_java_util_concurrent_CompletableFuture_uniHandle_java_lang_Object_java_util_function_BiFunction_java_util_concurrent_CompletableFuture$UniHandle_R_boolean, "(Ljava/lang/Object;Ljava/util/function/BiFunction;Ljava/util/concurrent/CompletableFuture$UniHandle;)Z", 16 },
	{ "uniHandleStage", (intptr_t) M_java_util_concurrent_CompletableFuture_uniHandleStage_java_util_concurrent_Executor_java_util_function_BiFunction_R_java_util_concurrent_CompletableFuture, VTABLE_java_util_concurrent_CompletableFuture_uniHandleStage_java_util_concurrent_Executor_java_util_function_BiFunction_R_java_util_concurrent_CompletableFuture, "(Ljava/util/concurrent/Executor;Ljava/util/function/BiFunction;)Ljava/util/concurrent/CompletableFuture;", 2 },
	{ "uniExceptionally", (intptr_t) M_java_util_concurrent_CompletableFuture_uniExceptionally_java_lang_Object_java_util_function_Function_java_util_concurrent_CompletableFuture$UniExceptionally_R_boolean, VTABLE_java_util_concurrent_CompletableFuture_uniExceptionally_java_lang_Object_java_util_function_Function_java_util_concurrent_CompletableFuture$UniExceptionally_R_boolean, "(Ljava/lang/Object;Ljava/util/function/Function;Ljava/util/concurrent/CompletableFuture$UniExceptionally;)Z", 16 },
	{ "uniExceptionallyStage", (intptr_t) M_java_util_concurrent_CompletableFuture_uniExceptionallyStage_java_util_function_Function_R_java_util_concurrent_CompletableFuture, VTABLE_java_util_concurrent_CompletableFuture_uniExceptionallyStage_java_util_function_Function_R_java_util_concurrent_CompletableFuture, "(Ljava/util/function/Function;)Ljava/util/concurrent/CompletableFuture;", 2 },
	{ "uniCopyStage", (intptr_t) SM_java_util_concurrent_CompletableFuture_uniCopyStage_java_util_concurrent_CompletableFuture_R_java_util_concurrent_CompletableFuture, 0, "(Ljava/util/concurrent/CompletableFuture;)Ljava/util/concurrent/CompletableFuture;", 10 },
	{ "uniAsMinimalStage", (intptr_t) M_java_util_concurrent_CompletableFuture_uniAsMinimalStage_R_java_util_concurrent_CompletableFuture$MinimalStage, VTABLE_java_util_concurrent_CompletableFuture_uniAsMinimalStage_R_java_util_concurrent_CompletableFuture$MinimalStage, "()Ljava/util/concurrent/CompletableFuture$MinimalStage;", 2 },
	{ "uniComposeStage", (intptr_t) M_java_util_concurrent_CompletableFuture_uniComposeStage_java_util_concurrent_Executor_java_util_function_Function_R_java_util_concurrent_CompletableFuture, VTABLE_java_util_concurrent_CompletableFuture_uniComposeStage_java_util_concurrent_Executor_java_util_function_Function_R_java_util_concurrent_CompletableFuture, "(Ljava/util/concurrent/Executor;Ljava/util/function/Function;)Ljava/util/concurrent/CompletableFuture;", 2 },
	{ "bipush", (intptr_t) M_java_util_concurrent_CompletableFuture_bipush_java_util_concurrent_CompletableFuture_java_util_concurrent_CompletableFuture$BiCompletion, VTABLE_java_util_concurrent_CompletableFuture_bipush_java_util_concurrent_CompletableFuture_java_util_concurrent_CompletableFuture$BiCompletion, "(Ljava/util/concurrent/CompletableFuture;Ljava/util/concurrent/CompletableFuture$BiCompletion;)V", 16 },
	{ "postFire", (intptr_t) M_java_util_concurrent_CompletableFuture_postFire_java_util_concurrent_CompletableFuture_java_util_concurrent_CompletableFuture_int_R_java_util_concurrent_CompletableFuture, VTABLE_java_util_concurrent_CompletableFuture_postFire_java_util_concurrent_CompletableFuture_java_util_concurrent_CompletableFuture_int_R_java_util_concurrent_CompletableFuture, "(Ljava/util/concurrent/CompletableFuture;Ljava/util/concurrent/CompletableFuture;I)Ljava/util/concurrent/CompletableFuture;", 16 },
	{ "biApply", (intptr_t) M_java_util_concurrent_CompletableFuture_biApply_java_lang_Object_java_lang_Object_java_util_function_BiFunction_java_util_concurrent_CompletableFuture$BiApply_R_boolean, VTABLE_java_util_concurrent_CompletableFuture_biApply_java_lang_Object_java_lang_Object_java_util_function_BiFunction_java_util_concurrent_CompletableFuture$BiApply_R_boolean, "(Ljava/lang/Object;Ljava/lang/Object;Ljava/util/function/BiFunction;Ljava/util/concurrent/CompletableFuture$BiApply;)Z", 16 },
	{ "biApplyStage", (intptr_t) M_java_util_concurrent_CompletableFuture_biApplyStage_java_util_concurrent_Executor_java_util_concurrent_CompletionStage_java_util_function_BiFunction_R_java_util_concurrent_CompletableFuture, VTABLE_java_util_concurrent_CompletableFuture_biApplyStage_java_util_concurrent_Executor_java_util_concurrent_CompletionStage_java_util_function_BiFunction_R_java_util_concurrent_CompletableFuture, "(Ljava/util/concurrent/Executor;Ljava/util/concurrent/CompletionStage;Ljava/util/function/BiFunction;)Ljava/util/concurrent/CompletableFuture;", 2 },
	{ "biAccept", (intptr_t) M_java_util_concurrent_CompletableFuture_biAccept_java_lang_Object_java_lang_Object_java_util_function_BiConsumer_java_util_concurrent_CompletableFuture$BiAccept_R_boolean, VTABLE_java_util_concurrent_CompletableFuture_biAccept_java_lang_Object_java_lang_Object_java_util_function_BiConsumer_java_util_concurrent_CompletableFuture$BiAccept_R_boolean, "(Ljava/lang/Object;Ljava/lang/Object;Ljava/util/function/BiConsumer;Ljava/util/concurrent/CompletableFuture$BiAccept;)Z", 16 },
	{ "biAcceptStage", (intptr_t) M_java_util_concurrent_CompletableFuture_biAcceptStage_java_util_concurrent_Executor_java_util_concurrent_CompletionStage_java_util_function_BiConsumer_R_java_util_concurrent_CompletableFuture, VTABLE_java_util_concurrent_CompletableFuture_biAcceptStage_java_util_concurrent_Executor_java_util_concurrent_CompletionStage_java_util_function_BiConsumer_R_java_util_concurrent_CompletableFuture, "(Ljava/util/concurrent/Executor;Ljava/util/concurrent/CompletionStage;Ljava/util/function/BiConsumer;)Ljava/util/concurrent/CompletableFuture;", 2 },
	{ "biRun", (intptr_t) M_java_util_concurrent_CompletableFuture_biRun_java_lang_Object_java_lang_Object_java_lang_Runnable_java_util_concurrent_CompletableFuture$BiRun_R_boolean, VTABLE_java_util_concurrent_CompletableFuture_biRun_java_lang_Object_java_lang_Object_java_lang_Runnable_java_util_concurrent_CompletableFuture$BiRun_R_boolean, "(Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Runnable;Ljava/util/concurrent/CompletableFuture$BiRun;)Z", 16 },
	{ "biRunStage", (intptr_t) M_java_util_concurrent_CompletableFuture_biRunStage_java_util_concurrent_Executor_java_util_concurrent_CompletionStage_java_lang_Runnable_R_java_util_concurrent_CompletableFuture, VTABLE_java_util_concurrent_CompletableFuture_biRunStage_java_util_concurrent_Executor_java_util_concurrent_CompletionStage_java_lang_Runnable_R_java_util_concurrent_CompletableFuture, "(Ljava/util/concurrent/Executor;Ljava/util/concurrent/CompletionStage;Ljava/lang/Runnable;)Ljava/util/concurrent/CompletableFuture;", 2 },
	{ "andTree", (intptr_t) SM_java_util_concurrent_CompletableFuture_andTree_Array1_java_util_concurrent_CompletableFuture_int_int_R_java_util_concurrent_CompletableFuture, 0, "([Ljava/util/concurrent/CompletableFuture;II)Ljava/util/concurrent/CompletableFuture;", 8 },
	{ "orpush", (intptr_t) M_java_util_concurrent_CompletableFuture_orpush_java_util_concurrent_CompletableFuture_java_util_concurrent_CompletableFuture$BiCompletion, VTABLE_java_util_concurrent_CompletableFuture_orpush_java_util_concurrent_CompletableFuture_java_util_concurrent_CompletableFuture$BiCompletion, "(Ljava/util/concurrent/CompletableFuture;Ljava/util/concurrent/CompletableFuture$BiCompletion;)V", 48 },
	{ "orApplyStage", (intptr_t) M_java_util_concurrent_CompletableFuture_orApplyStage_java_util_concurrent_Executor_java_util_concurrent_CompletionStage_java_util_function_Function_R_java_util_concurrent_CompletableFuture, VTABLE_java_util_concurrent_CompletableFuture_orApplyStage_java_util_concurrent_Executor_java_util_concurrent_CompletionStage_java_util_function_Function_R_java_util_concurrent_CompletableFuture, "(Ljava/util/concurrent/Executor;Ljava/util/concurrent/CompletionStage;Ljava/util/function/Function;)Ljava/util/concurrent/CompletableFuture;", 2 },
	{ "orAcceptStage", (intptr_t) M_java_util_concurrent_CompletableFuture_orAcceptStage_java_util_concurrent_Executor_java_util_concurrent_CompletionStage_java_util_function_Consumer_R_java_util_concurrent_CompletableFuture, VTABLE_java_util_concurrent_CompletableFuture_orAcceptStage_java_util_concurrent_Executor_java_util_concurrent_CompletionStage_java_util_function_Consumer_R_java_util_concurrent_CompletableFuture, "(Ljava/util/concurrent/Executor;Ljava/util/concurrent/CompletionStage;Ljava/util/function/Consumer;)Ljava/util/concurrent/CompletableFuture;", 2 },
	{ "orRunStage", (intptr_t) M_java_util_concurrent_CompletableFuture_orRunStage_java_util_concurrent_Executor_java_util_concurrent_CompletionStage_java_lang_Runnable_R_java_util_concurrent_CompletableFuture, VTABLE_java_util_concurrent_CompletableFuture_orRunStage_java_util_concurrent_Executor_java_util_concurrent_CompletionStage_java_lang_Runnable_R_java_util_concurrent_CompletableFuture, "(Ljava/util/concurrent/Executor;Ljava/util/concurrent/CompletionStage;Ljava/lang/Runnable;)Ljava/util/concurrent/CompletableFuture;", 2 },
	{ "asyncSupplyStage", (intptr_t) SM_java_util_concurrent_CompletableFuture_asyncSupplyStage_java_util_concurrent_Executor_java_util_function_Supplier_R_java_util_concurrent_CompletableFuture, 0, "(Ljava/util/concurrent/Executor;Ljava/util/function/Supplier;)Ljava/util/concurrent/CompletableFuture;", 8 },
	{ "asyncRunStage", (intptr_t) SM_java_util_concurrent_CompletableFuture_asyncRunStage_java_util_concurrent_Executor_java_lang_Runnable_R_java_util_concurrent_CompletableFuture, 0, "(Ljava/util/concurrent/Executor;Ljava/lang/Runnable;)Ljava/util/concurrent/CompletableFuture;", 8 },
	{ "waitingGet", (intptr_t) M_java_util_concurrent_CompletableFuture_waitingGet_boolean_R_java_lang_Object, VTABLE_java_util_concurrent_CompletableFuture_waitingGet_boolean_R_java_lang_Object, "(Z)Ljava/lang/Object;", 2 },
	{ "timedGet", (intptr_t) M_java_util_concurrent_CompletableFuture_timedGet_long_R_java_lang_Object, VTABLE_java_util_concurrent_CompletableFuture_timedGet_long_R_java_lang_Object, "(J)Ljava/lang/Object;", 2 },
	{ "<init>", (intptr_t) init_java_util_concurrent_CompletableFuture, 0, "()V", 1 },
	{ "<init>", (intptr_t) init_java_util_concurrent_CompletableFuture_java_lang_Object, 0, "(Ljava/lang/Object;)V", 0 },
	{ "supplyAsync", (intptr_t) SM_java_util_concurrent_CompletableFuture_supplyAsync_java_util_function_Supplier_R_java_util_concurrent_CompletableFuture, 0, "(Ljava/util/function/Supplier;)Ljava/util/concurrent/CompletableFuture;", 9 },
	{ "supplyAsync", (intptr_t) SM_java_util_concurrent_CompletableFuture_supplyAsync_java_util_function_Supplier_java_util_concurrent_Executor_R_java_util_concurrent_CompletableFuture, 0, "(Ljava/util/function/Supplier;Ljava/util/concurrent/Executor;)Ljava/util/concurrent/CompletableFuture;", 9 },
	{ "runAsync", (intptr_t) SM_java_util_concurrent_CompletableFuture_runAsync_java_lang_Runnable_R_java_util_concurrent_CompletableFuture, 0, "(Ljava/lang/Runnable;)Ljava/util/concurrent/CompletableFuture;", 9 },
	{ "runAsync", (intptr_t) SM_java_util_concurrent_CompletableFuture_runAsync_java_lang_Runnable_java_util_concurrent_Executor_R_java_util_concurrent_CompletableFuture, 0, "(Ljava/lang/Runnable;Ljava/util/concurrent/Executor;)Ljava/util/concurrent/CompletableFuture;", 9 },
	{ "completedFuture", (intptr_t) SM_java_util_concurrent_CompletableFuture_completedFuture_java_lang_Object_R_java_util_concurrent_CompletableFuture, 0, "(Ljava/lang/Object;)Ljava/util/concurrent/CompletableFuture;", 9 },
	{ "isDone", (intptr_t) M_java_util_concurrent_CompletableFuture_isDone_R_boolean, VTABLE_java_util_concurrent_CompletableFuture_isDone_R_boolean, "()Z", 1 },
	{ "get", (intptr_t) M_java_util_concurrent_CompletableFuture_get_R_java_lang_Object, VTABLE_java_util_concurrent_CompletableFuture_get_R_java_lang_Object, "()Ljava/lang/Object;", 1 },
	{ "get", (intptr_t) M_java_util_concurrent_CompletableFuture_get_long_java_util_concurrent_TimeUnit_R_java_lang_Object, VTABLE_java_util_concurrent_CompletableFuture_get_long_java_util_concurrent_TimeUnit_R_java_lang_Object, "(JLjava/util/concurrent/TimeUnit;)Ljava/lang/Object;", 1 },
	{ "join", (intptr_t) M_java_util_concurrent_CompletableFuture_join_R_java_lang_Object, VTABLE_java_util_concurrent_CompletableFuture_join_R_java_lang_Object, "()Ljava/lang/Object;", 1 },
	{ "getNow", (intptr_t) M_java_util_concurrent_CompletableFuture_getNow_java_lang_Object_R_java_lang_Object, VTABLE_java_util_concurrent_CompletableFuture_getNow_java_lang_Object_R_java_lang_Object, "(Ljava/lang/Object;)Ljava/lang/Object;", 1 },
	{ "complete", (intptr_t) M_java_util_concurrent_CompletableFuture_complete_java_lang_Object_R_boolean, VTABLE_java_util_concurrent_CompletableFuture_complete_java_lang_Object_R_boolean, "(Ljava/lang/Object;)Z", 1 },
	{ "completeExceptionally", (intptr_t) M_java_util_concurrent_CompletableFuture_completeExceptionally_java_lang_Throwable_R_boolean, VTABLE_java_util_concurrent_CompletableFuture_completeExceptionally_java_lang_Throwable_R_boolean, "(Ljava/lang/Throwable;)Z", 1 },
	{ "thenApply", (intptr_t) M_java_util_concurrent_CompletableFuture_thenApply_java_util_function_Function_R_java_util_concurrent_CompletableFuture, VTABLE_java_util_concurrent_CompletableFuture_thenApply_java_util_function_Function_R_java_util_concurrent_CompletableFuture, "(Ljava/util/function/Function;)Ljava/util/concurrent/CompletableFuture;", 1 },
	{ "thenApplyAsync", (intptr_t) M_java_util_concurrent_CompletableFuture_thenApplyAsync_java_util_function_Function_R_java_util_concurrent_CompletableFuture, VTABLE_java_util_concurrent_CompletableFuture_thenApplyAsync_java_util_function_Function_R_java_util_concurrent_CompletableFuture, "(Ljava/util/function/Function;)Ljava/util/concurrent/CompletableFuture;", 1 },
	{ "thenApplyAsync", (intptr_t) M_java_util_concurrent_CompletableFuture_thenApplyAsync_java_util_function_Function_java_util_concurrent_Executor_R_java_util_concurrent_CompletableFuture, VTABLE_java_util_concurrent_CompletableFuture_thenApplyAsync_java_util_function_Function_java_util_concurrent_Executor_R_java_util_concurrent_CompletableFuture, "(Ljava/util/function/Function;Ljava/util/concurrent/Executor;)Ljava/util/concurrent/CompletableFuture;", 1 },
	{ "thenAccept", (intptr_t) M_java_util_concurrent_CompletableFuture_thenAccept_java_util_function_Consumer_R_java_util_concurrent_CompletableFuture, VTABLE_java_util_concurrent_CompletableFuture_thenAccept_java_util_function_Consumer_R_java_util_concurrent_CompletableFuture, "(Ljava/util/function/Consumer;)Ljava/util/concurrent/CompletableFuture;", 1 },
	{ "thenAcceptAsync", (intptr_t) M_java_util_concurrent_CompletableFuture_thenAcceptAsync_java_util_function_Consumer_R_java_util_concurrent_CompletableFuture, VTABLE_java_util_concurrent_CompletableFuture_thenAcceptAsync_java_util_function_Consumer_R_java_util_concurrent_CompletableFuture, "(Ljava/util/function/Consumer;)Ljava/util/concurrent/CompletableFuture;", 1 },
	{ "thenAcceptAsync", (intptr_t) M_java_util_concurrent_CompletableFuture_thenAcceptAsync_java_util_function_Consumer_java_util_concurrent_Executor_R_java_util_concurrent_CompletableFuture, VTABLE_java_util_concurrent_CompletableFuture_thenAcceptAsync_java_util_function_Consumer_java_util_concurrent_Executor_R_java_util_concurrent_CompletableFuture, "(Ljava/util/function/Consumer;Ljava/util/concurrent/Executor;)Ljava/util/concurrent/CompletableFuture;", 1 },
	{ "thenRun", (intptr_t) M_java_util_concurrent_CompletableFuture_thenRun_java_lang_Runnable_R_java_util_concurrent_CompletableFuture, VTABLE_java_util_concurrent_CompletableFuture_thenRun_java_lang_Runnable_R_java_util_concurrent_CompletableFuture, "(Ljava/lang/Runnable;)Ljava/util/concurrent/CompletableFuture;", 1 },
	{ "thenRunAsync", (intptr_t) M_java_util_concurrent_CompletableFuture_thenRunAsync_java_lang_Runnable_R_java_util_concurrent_CompletableFuture, VTABLE_java_util_concurrent_CompletableFuture_thenRunAsync_java_lang_Runnable_R_java_util_concurrent_CompletableFuture, "(Ljava/lang/Runnable;)Ljava/util/concurrent/CompletableFuture;", 1 },
	{ "thenRunAsync", (intptr_t) M_java_util_concurrent_CompletableFuture_thenRunAsync_java_lang_Runnable_java_util_concurrent_Executor_R_java_util_concurrent_CompletableFuture, VTABLE_java_util_concurrent_CompletableFuture_thenRunAsync_java_lang_Runnable_java_util_concurrent_Executor_R_java_util_concurrent_CompletableFuture, "(Ljava/lang/Runnable;Ljava/util/concurrent/Executor;)Ljava/util/concurrent/CompletableFuture;", 1 },
	{ "thenCombine", (intptr_t) M_java_util_concurrent_CompletableFuture_thenCombine_java_util_concurrent_CompletionStage_java_util_function_BiFunction_R_java_util_concurrent_CompletableFuture, VTABLE_java_util_concurrent_CompletableFuture_thenCombine_java_util_concurrent_CompletionStage_java_util_function_BiFunction_R_java_util_concurrent_CompletableFuture, "(Ljava/util/concurrent/CompletionStage;Ljava/util/function/BiFunction;)Ljava/util/concurrent/CompletableFuture;", 1 },
	{ "thenCombineAsync", (intptr_t) M_java_util_concurrent_CompletableFuture_thenCombineAsync_java_util_concurrent_CompletionStage_java_util_function_BiFunction_R_java_util_concurrent_CompletableFuture, VTABLE_java_util_concurrent_CompletableFuture_thenCombineAsync_java_util_concurrent_CompletionStage_java_util_function_BiFunction_R_java_util_concurrent_CompletableFuture, "(Ljava/util/concurrent/CompletionStage;Ljava/util/function/BiFunction;)Ljava/util/concurrent/CompletableFuture;", 1 },
	{ "thenCombineAsync", (intptr_t) M_java_util_concurrent_CompletableFuture_thenCombineAsync_java_util_concurrent_CompletionStage_java_util_function_BiFunction_java_util_concurrent_Executor_R_java_util_concurrent_CompletableFuture, VTABLE_java_util_concurrent_CompletableFuture_thenCombineAsync_java_util_concurrent_CompletionStage_java_util_function_BiFunction_java_util_concurrent_Executor_R_java_util_concurrent_CompletableFuture, "(Ljava/util/concurrent/CompletionStage;Ljava/util/function/BiFunction;Ljava/util/concurrent/Executor;)Ljava/util/concurrent/CompletableFuture;", 1 },
	{ "thenAcceptBoth", (intptr_t) M_java_util_concurrent_CompletableFuture_thenAcceptBoth_java_util_concurrent_CompletionStage_java_util_function_BiConsumer_R_java_util_concurrent_CompletableFuture, VTABLE_java_util_concurrent_CompletableFuture_thenAcceptBoth_java_util_concurrent_CompletionStage_java_util_function_BiConsumer_R_java_util_concurrent_CompletableFuture, "(Ljava/util/concurrent/CompletionStage;Ljava/util/function/BiConsumer;)Ljava/util/concurrent/CompletableFuture;", 1 },
	{ "thenAcceptBothAsync", (intptr_t) M_java_util_concurrent_CompletableFuture_thenAcceptBothAsync_java_util_concurrent_CompletionStage_java_util_function_BiConsumer_R_java_util_concurrent_CompletableFuture, VTABLE_java_util_concurrent_CompletableFuture_thenAcceptBothAsync_java_util_concurrent_CompletionStage_java_util_function_BiConsumer_R_java_util_concurrent_CompletableFuture, "(Ljava/util/concurrent/CompletionStage;Ljava/util/function/BiConsumer;)Ljava/util/concurrent/CompletableFuture;", 1 },
	{ "thenAcceptBothAsync", (intptr_t) M_java_util_concurrent_CompletableFuture_thenAcceptBothAsync_java_util_concurrent_CompletionStage_java_util_function_BiConsumer_java_util_concurrent_Executor_R_java_util_concurrent_CompletableFuture, VTABLE_java_util_concurrent_CompletableFuture_thenAcceptBothAsync_java_util_concurrent_CompletionStage_java_util_function_BiConsumer_java_util_concurrent_Executor_R_java_util_concurrent_CompletableFuture, "(Ljava/util/concurrent/CompletionStage;Ljava/util/function/BiConsumer;Ljava/util/concurrent/Executor;)Ljava/util/concurrent/CompletableFuture;", 1 },
	{ "runAfterBoth", (intptr_t) M_java_util_concurrent_CompletableFuture_runAfterBoth_java_util_concurrent_CompletionStage_java_lang_Runnable_R_java_util_concurrent_CompletableFuture, VTABLE_java_util_concurrent_CompletableFuture_runAfterBoth_java_util_concurrent_CompletionStage_java_lang_Runnable_R_java_util_concurrent_CompletableFuture, "(Ljava/util/concurrent/CompletionStage;Ljava/lang/Runnable;)Ljava/util/concurrent/CompletableFuture;", 1 },
	{ "runAfterBothAsync", (intptr_t) M_java_util_concurrent_CompletableFuture_runAfterBothAsync_java_util_concurrent_CompletionStage_java_lang_Runnable_R_java_util_concurrent_CompletableFuture, VTABLE_java_util_concurrent_CompletableFuture_runAfterBothAsync_java_util_concurrent_CompletionStage_java_lang_Runnable_R_java_util_concurrent_CompletableFuture, "(Ljava/util/concurrent/CompletionStage;Ljava/lang/Runnable;)Ljava/util/concurrent/CompletableFuture;", 1 },
	{ "runAfterBothAsync", (intptr_t) M_java_util_concurrent_CompletableFuture_runAfterBothAsync_java_util_concurrent_CompletionStage_java_lang_Runnable_java_util_concurrent_Executor_R_java_util_concurrent_CompletableFuture, VTABLE_java_util_concurrent_CompletableFuture_runAfterBothAsync_java_util_concurrent_CompletionStage_java_lang_Runnable_java_util_concurrent_Executor_R_java_util_concurrent_CompletableFuture, "(Ljava/util/concurrent/CompletionStage;Ljava/lang/Runnable;Ljava/util/concurrent/Executor;)Ljava/util/concurrent/CompletableFuture;", 1 },
	{ "applyToEither", (intptr_t) M_java_util_concurrent_CompletableFuture_applyToEither_java_util_concurrent_CompletionStage_java_util_function_Function_R_java_util_concurrent_CompletableFuture, VTABLE_java_util_concurrent_CompletableFuture_applyToEither_java_util_concurrent_CompletionStage_java_util_function_Function_R_java_util_concurrent_CompletableFuture, "(Ljava/util/concurrent/CompletionStage;Ljava/util/function/Function;)Ljava/util/concurrent/CompletableFuture;", 1 },
	{ "applyToEitherAsync", (intptr_t) M_java_util_concurrent_CompletableFuture_applyToEitherAsync_java_util_concurrent_CompletionStage_java_util_function_Function_R_java_util_concurrent_CompletableFuture, VTABLE_java_util_concurrent_CompletableFuture_applyToEitherAsync_java_util_concurrent_CompletionStage_java_util_function_Function_R_java_util_concurrent_CompletableFuture, "(Ljava/util/concurrent/CompletionStage;Ljava/util/function/Function;)Ljava/util/concurrent/CompletableFuture;", 1 },
	{ "applyToEitherAsync", (intptr_t) M_java_util_concurrent_CompletableFuture_applyToEitherAsync_java_util_concurrent_CompletionStage_java_util_function_Function_java_util_concurrent_Executor_R_java_util_concurrent_CompletableFuture, VTABLE_java_util_concurrent_CompletableFuture_applyToEitherAsync_java_util_concurrent_CompletionStage_java_util_function_Function_java_util_concurrent_Executor_R_java_util_concurrent_CompletableFuture, "(Ljava/util/concurrent/CompletionStage;Ljava/util/function/Function;Ljava/util/concurrent/Executor;)Ljava/util/concurrent/CompletableFuture;", 1 },
	{ "acceptEither", (intptr_t) M_java_util_concurrent_CompletableFuture_acceptEither_java_util_concurrent_CompletionStage_java_util_function_Consumer_R_java_util_concurrent_CompletableFuture, VTABLE_java_util_concurrent_CompletableFuture_acceptEither_java_util_concurrent_CompletionStage_java_util_function_Consumer_R_java_util_concurrent_CompletableFuture, "(Ljava/util/concurrent/CompletionStage;Ljava/util/function/Consumer;)Ljava/util/concurrent/CompletableFuture;", 1 },
	{ "acceptEitherAsync", (intptr_t) M_java_util_concurrent_CompletableFuture_acceptEitherAsync_java_util_concurrent_CompletionStage_java_util_function_Consumer_R_java_util_concurrent_CompletableFuture, VTABLE_java_util_concurrent_CompletableFuture_acceptEitherAsync_java_util_concurrent_CompletionStage_java_util_function_Consumer_R_java_util_concurrent_CompletableFuture, "(Ljava/util/concurrent/CompletionStage;Ljava/util/function/Consumer;)Ljava/util/concurrent/CompletableFuture;", 1 },
	{ "acceptEitherAsync", (intptr_t) M_java_util_concurrent_CompletableFuture_acceptEitherAsync_java_util_concurrent_CompletionStage_java_util_function_Consumer_java_util_concurrent_Executor_R_java_util_concurrent_CompletableFuture, VTABLE_java_util_concurrent_CompletableFuture_acceptEitherAsync_java_util_concurrent_CompletionStage_java_util_function_Consumer_java_util_concurrent_Executor_R_java_util_concurrent_CompletableFuture, "(Ljava/util/concurrent/CompletionStage;Ljava/util/function/Consumer;Ljava/util/concurrent/Executor;)Ljava/util/concurrent/CompletableFuture;", 1 },
	{ "runAfterEither", (intptr_t) M_java_util_concurrent_CompletableFuture_runAfterEither_java_util_concurrent_CompletionStage_java_lang_Runnable_R_java_util_concurrent_CompletableFuture, VTABLE_java_util_concurrent_CompletableFuture_runAfterEither_java_util_concurrent_CompletionStage_java_lang_Runnable_R_java_util_concurrent_CompletableFuture, "(Ljava/util/concurrent/CompletionStage;Ljava/lang/Runnable;)Ljava/util/concurrent/CompletableFuture;", 1 },
	{ "runAfterEitherAsync", (intptr_t) M_java_util_concurrent_CompletableFuture_runAfterEitherAsync_java_util_concurrent_CompletionStage_java_lang_Runnable_R_java_util_concurrent_CompletableFuture, VTABLE_java_util_concurrent_CompletableFuture_runAfterEitherAsync_java_util_concurrent_CompletionStage_java_lang_Runnable_R_java_util_concurrent_CompletableFuture, "(Ljava/util/concurrent/CompletionStage;Ljava/lang/Runnable;)Ljava/util/concurrent/CompletableFuture;", 1 },
	{ "runAfterEitherAsync", (intptr_t) M_java_util_concurrent_CompletableFuture_runAfterEitherAsync_java_util_concurrent_CompletionStage_java_lang_Runnable_java_util_concurrent_Executor_R_java_util_concurrent_CompletableFuture, VTABLE_java_util_concurrent_CompletableFuture_runAfterEitherAsync_java_util_concurrent_CompletionStage_java_lang_Runnable_java_util_concurrent_Executor_R_java_util_concurrent_CompletableFuture, "(Ljava/util/concurrent/CompletionStage;Ljava/lang/Runnable;Ljava/util/concurrent/Executor;)Ljava/util/concurrent/CompletableFuture;", 1 },
	{ "thenCompose", (intptr_t) M_java_util_concurrent_CompletableFuture_thenCompose_java_util_function_Function_R_java_util_concurrent_CompletableFuture, VTABLE_java_util_concurrent_CompletableFuture_thenCompose_java_util_function_Function_R_java_util_concurrent_CompletableFuture, "(Ljava/util/function/Function;)Ljava/util/concurrent/CompletableFuture;", 1 },
	{ "thenComposeAsync", (intptr_t) M_java_util_concurrent_CompletableFuture_thenComposeAsync_java_util_function_Function_R_java_util_concurrent_CompletableFuture, VTABLE_java_util_concurrent_CompletableFuture_thenComposeAsync_java_util_function_Function_R_java_util_concurrent_CompletableFuture, "(Ljava/util/function/Function;)Ljava/util/concurrent/CompletableFuture;", 1 },
	{ "thenComposeAsync", (intptr_t) M_java_util_concurrent_CompletableFuture_thenComposeAsync_java_util_function_Function_java_util_concurrent_Executor_R_java_util_concurrent_CompletableFuture, VTABLE_java_util_concurrent_CompletableFuture_thenComposeAsync_java_util_function_Function_java_util_concurrent_Executor_R_java_util_concurrent_CompletableFuture, "(Ljava/util/function/Function;Ljava/util/concurrent/Executor;)Ljava/util/concurrent/CompletableFuture;", 1 },
	{ "whenComplete", (intptr_t) M_java_util_concurrent_CompletableFuture_whenComplete_java_util_function_BiConsumer_R_java_util_concurrent_CompletableFuture, VTABLE_java_util_concurrent_CompletableFuture_whenComplete_java_util_function_BiConsumer_R_java_util_concurrent_CompletableFuture, "(Ljava/util/function/BiConsumer;)Ljava/util/concurrent/CompletableFuture;", 1 },
	{ "whenCompleteAsync", (intptr_t) M_java_util_concurrent_CompletableFuture_whenCompleteAsync_java_util_function_BiConsumer_R_java_util_concurrent_CompletableFuture, VTABLE_java_util_concurrent_CompletableFuture_whenCompleteAsync_java_util_function_BiConsumer_R_java_util_concurrent_CompletableFuture, "(Ljava/util/function/BiConsumer;)Ljava/util/concurrent/CompletableFuture;", 1 },
	{ "whenCompleteAsync", (intptr_t) M_java_util_concurrent_CompletableFuture_whenCompleteAsync_java_util_function_BiConsumer_java_util_concurrent_Executor_R_java_util_concurrent_CompletableFuture, VTABLE_java_util_concurrent_CompletableFuture_whenCompleteAsync_java_util_function_BiConsumer_java_util_concurrent_Executor_R_java_util_concurrent_CompletableFuture, "(Ljava/util/function/BiConsumer;Ljava/util/concurrent/Executor;)Ljava/util/concurrent/CompletableFuture;", 1 },
	{ "handle", (intptr_t) M_java_util_concurrent_CompletableFuture_handle_java_util_function_BiFunction_R_java_util_concurrent_CompletableFuture, VTABLE_java_util_concurrent_CompletableFuture_handle_java_util_function_BiFunction_R_java_util_concurrent_CompletableFuture, "(Ljava/util/function/BiFunction;)Ljava/util/concurrent/CompletableFuture;", 1 },
	{ "handleAsync", (intptr_t) M_java_util_concurrent_CompletableFuture_handleAsync_java_util_function_BiFunction_R_java_util_concurrent_CompletableFuture, VTABLE_java_util_concurrent_CompletableFuture_handleAsync_java_util_function_BiFunction_R_java_util_concurrent_CompletableFuture, "(Ljava/util/function/BiFunction;)Ljava/util/concurrent/CompletableFuture;", 1 },
	{ "handleAsync", (intptr_t) M_java_util_concurrent_CompletableFuture_handleAsync_java_util_function_BiFunction_java_util_concurrent_Executor_R_java_util_concurrent_CompletableFuture, VTABLE_java_util_concurrent_CompletableFuture_handleAsync_java_util_function_BiFunction_java_util_concurrent_Executor_R_java_util_concurrent_CompletableFuture, "(Ljava/util/function/BiFunction;Ljava/util/concurrent/Executor;)Ljava/util/concurrent/CompletableFuture;", 1 },
	{ "toCompletableFuture", (intptr_t) M_java_util_concurrent_CompletableFuture_toCompletableFuture_R_java_util_concurrent_CompletableFuture, VTABLE_java_util_concurrent_CompletableFuture_toCompletableFuture_R_java_util_concurrent_CompletableFuture, "()Ljava/util/concurrent/CompletableFuture;", 1 },
	{ "exceptionally", (intptr_t) M_java_util_concurrent_CompletableFuture_exceptionally_java_util_function_Function_R_java_util_concurrent_CompletableFuture, VTABLE_java_util_concurrent_CompletableFuture_exceptionally_java_util_function_Function_R_java_util_concurrent_CompletableFuture, "(Ljava/util/function/Function;)Ljava/util/concurrent/CompletableFuture;", 1 },
	{ "allOf", (intptr_t) SM_java_util_concurrent_CompletableFuture_allOf_Array1_java_util_concurrent_CompletableFuture_R_java_util_concurrent_CompletableFuture, 0, "([Ljava/util/concurrent/CompletableFuture;)Ljava/util/concurrent/CompletableFuture;", 137 },
	{ "anyOf", (intptr_t) SM_java_util_concurrent_CompletableFuture_anyOf_Array1_java_util_concurrent_CompletableFuture_R_java_util_concurrent_CompletableFuture, 0, "([Ljava/util/concurrent/CompletableFuture;)Ljava/util/concurrent/CompletableFuture;", 137 },
	{ "cancel", (intptr_t) M_java_util_concurrent_CompletableFuture_cancel_boolean_R_boolean, VTABLE_java_util_concurrent_CompletableFuture_cancel_boolean_R_boolean, "(Z)Z", 1 },
	{ "isCancelled", (intptr_t) M_java_util_concurrent_CompletableFuture_isCancelled_R_boolean, VTABLE_java_util_concurrent_CompletableFuture_isCancelled_R_boolean, "()Z", 1 },
	{ "isCompletedExceptionally", (intptr_t) M_java_util_concurrent_CompletableFuture_isCompletedExceptionally_R_boolean, VTABLE_java_util_concurrent_CompletableFuture_isCompletedExceptionally_R_boolean, "()Z", 1 },
	{ "obtrudeValue", (intptr_t) M_java_util_concurrent_CompletableFuture_obtrudeValue_java_lang_Object, VTABLE_java_util_concurrent_CompletableFuture_obtrudeValue_java_lang_Object, "(Ljava/lang/Object;)V", 1 },
	{ "obtrudeException", (intptr_t) M_java_util_concurrent_CompletableFuture_obtrudeException_java_lang_Throwable, VTABLE_java_util_concurrent_CompletableFuture_obtrudeException_java_lang_Throwable, "(Ljava/lang/Throwable;)V", 1 },
	{ "getNumberOfDependents", (intptr_t) M_java_util_concurrent_CompletableFuture_getNumberOfDependents_R_int, VTABLE_java_util_concurrent_CompletableFuture_getNumberOfDependents_R_int, "()I", 1 },
	{ "toString", (intptr_t) M_java_util_concurrent_CompletableFuture_toString_R_java_lang_String, VTABLE_java_util_concurrent_CompletableFuture_toString_R_java_lang_String, "()Ljava/lang/String;", 1 },
	{ "newIncompleteFuture", (intptr_t) M_java_util_concurrent_CompletableFuture_newIncompleteFuture_R_java_util_concurrent_CompletableFuture, VTABLE_java_util_concurrent_CompletableFuture_newIncompleteFuture_R_java_util_concurrent_CompletableFuture, "()Ljava/util/concurrent/CompletableFuture;", 1 },
	{ "defaultExecutor", (intptr_t) M_java_util_concurrent_CompletableFuture_defaultExecutor_R_java_util_concurrent_Executor, VTABLE_java_util_concurrent_CompletableFuture_defaultExecutor_R_java_util_concurrent_Executor, "()Ljava/util/concurrent/Executor;", 1 },
	{ "copy", (intptr_t) M_java_util_concurrent_CompletableFuture_copy_R_java_util_concurrent_CompletableFuture, VTABLE_java_util_concurrent_CompletableFuture_copy_R_java_util_concurrent_CompletableFuture, "()Ljava/util/concurrent/CompletableFuture;", 1 },
	{ "minimalCompletionStage", (intptr_t) M_java_util_concurrent_CompletableFuture_minimalCompletionStage_R_java_util_concurrent_CompletionStage, VTABLE_java_util_concurrent_CompletableFuture_minimalCompletionStage_R_java_util_concurrent_CompletionStage, "()Ljava/util/concurrent/CompletionStage;", 1 },
	{ "completeAsync", (intptr_t) M_java_util_concurrent_CompletableFuture_completeAsync_java_util_function_Supplier_java_util_concurrent_Executor_R_java_util_concurrent_CompletableFuture, VTABLE_java_util_concurrent_CompletableFuture_completeAsync_java_util_function_Supplier_java_util_concurrent_Executor_R_java_util_concurrent_CompletableFuture, "(Ljava/util/function/Supplier;Ljava/util/concurrent/Executor;)Ljava/util/concurrent/CompletableFuture;", 1 },
	{ "completeAsync", (intptr_t) M_java_util_concurrent_CompletableFuture_completeAsync_java_util_function_Supplier_R_java_util_concurrent_CompletableFuture, VTABLE_java_util_concurrent_CompletableFuture_completeAsync_java_util_function_Supplier_R_java_util_concurrent_CompletableFuture, "(Ljava/util/function/Supplier;)Ljava/util/concurrent/CompletableFuture;", 1 },
	{ "orTimeout", (intptr_t) M_java_util_concurrent_CompletableFuture_orTimeout_long_java_util_concurrent_TimeUnit_R_java_util_concurrent_CompletableFuture, VTABLE_java_util_concurrent_CompletableFuture_orTimeout_long_java_util_concurrent_TimeUnit_R_java_util_concurrent_CompletableFuture, "(JLjava/util/concurrent/TimeUnit;)Ljava/util/concurrent/CompletableFuture;", 1 },
	{ "completeOnTimeout", (intptr_t) M_java_util_concurrent_CompletableFuture_completeOnTimeout_java_lang_Object_long_java_util_concurrent_TimeUnit_R_java_util_concurrent_CompletableFuture, VTABLE_java_util_concurrent_CompletableFuture_completeOnTimeout_java_lang_Object_long_java_util_concurrent_TimeUnit_R_java_util_concurrent_CompletableFuture, "(Ljava/lang/Object;JLjava/util/concurrent/TimeUnit;)Ljava/util/concurrent/CompletableFuture;", 1 },
	{ "delayedExecutor", (intptr_t) SM_java_util_concurrent_CompletableFuture_delayedExecutor_long_java_util_concurrent_TimeUnit_java_util_concurrent_Executor_R_java_util_concurrent_Executor, 0, "(JLjava/util/concurrent/TimeUnit;Ljava/util/concurrent/Executor;)Ljava/util/concurrent/Executor;", 9 },
	{ "delayedExecutor", (intptr_t) SM_java_util_concurrent_CompletableFuture_delayedExecutor_long_java_util_concurrent_TimeUnit_R_java_util_concurrent_Executor, 0, "(JLjava/util/concurrent/TimeUnit;)Ljava/util/concurrent/Executor;", 9 },
	{ "completedStage", (intptr_t) SM_java_util_concurrent_CompletableFuture_completedStage_java_lang_Object_R_java_util_concurrent_CompletionStage, 0, "(Ljava/lang/Object;)Ljava/util/concurrent/CompletionStage;", 9 },
	{ "failedFuture", (intptr_t) SM_java_util_concurrent_CompletableFuture_failedFuture_java_lang_Throwable_R_java_util_concurrent_CompletableFuture, 0, "(Ljava/lang/Throwable;)Ljava/util/concurrent/CompletableFuture;", 9 },
	{ "failedStage", (intptr_t) SM_java_util_concurrent_CompletableFuture_failedStage_java_lang_Throwable_R_java_util_concurrent_CompletionStage, 0, "(Ljava/lang/Throwable;)Ljava/util/concurrent/CompletionStage;", 9 },
	{ "exceptionally", (intptr_t) M_java_util_concurrent_CompletableFuture_exceptionally_java_util_function_Function_R_java_util_concurrent_CompletionStage, VTABLE_java_util_concurrent_CompletableFuture_exceptionally_java_util_function_Function_R_java_util_concurrent_CompletionStage, "(Ljava/util/function/Function;)Ljava/util/concurrent/CompletionStage;", 4161 },
	{ "whenCompleteAsync", (intptr_t) M_java_util_concurrent_CompletableFuture_whenCompleteAsync_java_util_function_BiConsumer_java_util_concurrent_Executor_R_java_util_concurrent_CompletionStage, VTABLE_java_util_concurrent_CompletableFuture_whenCompleteAsync_java_util_function_BiConsumer_java_util_concurrent_Executor_R_java_util_concurrent_CompletionStage, "(Ljava/util/function/BiConsumer;Ljava/util/concurrent/Executor;)Ljava/util/concurrent/CompletionStage;", 4161 },
	{ "whenCompleteAsync", (intptr_t) M_java_util_concurrent_CompletableFuture_whenCompleteAsync_java_util_function_BiConsumer_R_java_util_concurrent_CompletionStage, VTABLE_java_util_concurrent_CompletableFuture_whenCompleteAsync_java_util_function_BiConsumer_R_java_util_concurrent_CompletionStage, "(Ljava/util/function/BiConsumer;)Ljava/util/concurrent/CompletionStage;", 4161 },
	{ "whenComplete", (intptr_t) M_java_util_concurrent_CompletableFuture_whenComplete_java_util_function_BiConsumer_R_java_util_concurrent_CompletionStage, VTABLE_java_util_concurrent_CompletableFuture_whenComplete_java_util_function_BiConsumer_R_java_util_concurrent_CompletionStage, "(Ljava/util/function/BiConsumer;)Ljava/util/concurrent/CompletionStage;", 4161 },
	{ "handleAsync", (intptr_t) M_java_util_concurrent_CompletableFuture_handleAsync_java_util_function_BiFunction_java_util_concurrent_Executor_R_java_util_concurrent_CompletionStage, VTABLE_java_util_concurrent_CompletableFuture_handleAsync_java_util_function_BiFunction_java_util_concurrent_Executor_R_java_util_concurrent_CompletionStage, "(Ljava/util/function/BiFunction;Ljava/util/concurrent/Executor;)Ljava/util/concurrent/CompletionStage;", 4161 },
	{ "handleAsync", (intptr_t) M_java_util_concurrent_CompletableFuture_handleAsync_java_util_function_BiFunction_R_java_util_concurrent_CompletionStage, VTABLE_java_util_concurrent_CompletableFuture_handleAsync_java_util_function_BiFunction_R_java_util_concurrent_CompletionStage, "(Ljava/util/function/BiFunction;)Ljava/util/concurrent/CompletionStage;", 4161 },
	{ "handle", (intptr_t) M_java_util_concurrent_CompletableFuture_handle_java_util_function_BiFunction_R_java_util_concurrent_CompletionStage, VTABLE_java_util_concurrent_CompletableFuture_handle_java_util_function_BiFunction_R_java_util_concurrent_CompletionStage, "(Ljava/util/function/BiFunction;)Ljava/util/concurrent/CompletionStage;", 4161 },
	{ "thenComposeAsync", (intptr_t) M_java_util_concurrent_CompletableFuture_thenComposeAsync_java_util_function_Function_java_util_concurrent_Executor_R_java_util_concurrent_CompletionStage, VTABLE_java_util_concurrent_CompletableFuture_thenComposeAsync_java_util_function_Function_java_util_concurrent_Executor_R_java_util_concurrent_CompletionStage, "(Ljava/util/function/Function;Ljava/util/concurrent/Executor;)Ljava/util/concurrent/CompletionStage;", 4161 },
	{ "thenComposeAsync", (intptr_t) M_java_util_concurrent_CompletableFuture_thenComposeAsync_java_util_function_Function_R_java_util_concurrent_CompletionStage, VTABLE_java_util_concurrent_CompletableFuture_thenComposeAsync_java_util_function_Function_R_java_util_concurrent_CompletionStage, "(Ljava/util/function/Function;)Ljava/util/concurrent/CompletionStage;", 4161 },
	{ "thenCompose", (intptr_t) M_java_util_concurrent_CompletableFuture_thenCompose_java_util_function_Function_R_java_util_concurrent_CompletionStage, VTABLE_java_util_concurrent_CompletableFuture_thenCompose_java_util_function_Function_R_java_util_concurrent_CompletionStage, "(Ljava/util/function/Function;)Ljava/util/concurrent/CompletionStage;", 4161 },
	{ "runAfterEitherAsync", (intptr_t) M_java_util_concurrent_CompletableFuture_runAfterEitherAsync_java_util_concurrent_CompletionStage_java_lang_Runnable_java_util_concurrent_Executor_R_java_util_concurrent_CompletionStage, VTABLE_java_util_concurrent_CompletableFuture_runAfterEitherAsync_java_util_concurrent_CompletionStage_java_lang_Runnable_java_util_concurrent_Executor_R_java_util_concurrent_CompletionStage, "(Ljava/util/concurrent/CompletionStage;Ljava/lang/Runnable;Ljava/util/concurrent/Executor;)Ljava/util/concurrent/CompletionStage;", 4161 },
	{ "runAfterEitherAsync", (intptr_t) M_java_util_concurrent_CompletableFuture_runAfterEitherAsync_java_util_concurrent_CompletionStage_java_lang_Runnable_R_java_util_concurrent_CompletionStage, VTABLE_java_util_concurrent_CompletableFuture_runAfterEitherAsync_java_util_concurrent_CompletionStage_java_lang_Runnable_R_java_util_concurrent_CompletionStage, "(Ljava/util/concurrent/CompletionStage;Ljava/lang/Runnable;)Ljava/util/concurrent/CompletionStage;", 4161 },
	{ "runAfterEither", (intptr_t) M_java_util_concurrent_CompletableFuture_runAfterEither_java_util_concurrent_CompletionStage_java_lang_Runnable_R_java_util_concurrent_CompletionStage, VTABLE_java_util_concurrent_CompletableFuture_runAfterEither_java_util_concurrent_CompletionStage_java_lang_Runnable_R_java_util_concurrent_CompletionStage, "(Ljava/util/concurrent/CompletionStage;Ljava/lang/Runnable;)Ljava/util/concurrent/CompletionStage;", 4161 },
	{ "acceptEitherAsync", (intptr_t) M_java_util_concurrent_CompletableFuture_acceptEitherAsync_java_util_concurrent_CompletionStage_java_util_function_Consumer_java_util_concurrent_Executor_R_java_util_concurrent_CompletionStage, VTABLE_java_util_concurrent_CompletableFuture_acceptEitherAsync_java_util_concurrent_CompletionStage_java_util_function_Consumer_java_util_concurrent_Executor_R_java_util_concurrent_CompletionStage, "(Ljava/util/concurrent/CompletionStage;Ljava/util/function/Consumer;Ljava/util/concurrent/Executor;)Ljava/util/concurrent/CompletionStage;", 4161 },
	{ "acceptEitherAsync", (intptr_t) M_java_util_concurrent_CompletableFuture_acceptEitherAsync_java_util_concurrent_CompletionStage_java_util_function_Consumer_R_java_util_concurrent_CompletionStage, VTABLE_java_util_concurrent_CompletableFuture_acceptEitherAsync_java_util_concurrent_CompletionStage_java_util_function_Consumer_R_java_util_concurrent_CompletionStage, "(Ljava/util/concurrent/CompletionStage;Ljava/util/function/Consumer;)Ljava/util/concurrent/CompletionStage;", 4161 },
	{ "acceptEither", (intptr_t) M_java_util_concurrent_CompletableFuture_acceptEither_java_util_concurrent_CompletionStage_java_util_function_Consumer_R_java_util_concurrent_CompletionStage, VTABLE_java_util_concurrent_CompletableFuture_acceptEither_java_util_concurrent_CompletionStage_java_util_function_Consumer_R_java_util_concurrent_CompletionStage, "(Ljava/util/concurrent/CompletionStage;Ljava/util/function/Consumer;)Ljava/util/concurrent/CompletionStage;", 4161 },
	{ "applyToEitherAsync", (intptr_t) M_java_util_concurrent_CompletableFuture_applyToEitherAsync_java_util_concurrent_CompletionStage_java_util_function_Function_java_util_concurrent_Executor_R_java_util_concurrent_CompletionStage, VTABLE_java_util_concurrent_CompletableFuture_applyToEitherAsync_java_util_concurrent_CompletionStage_java_util_function_Function_java_util_concurrent_Executor_R_java_util_concurrent_CompletionStage, "(Ljava/util/concurrent/CompletionStage;Ljava/util/function/Function;Ljava/util/concurrent/Executor;)Ljava/util/concurrent/CompletionStage;", 4161 },
	{ "applyToEitherAsync", (intptr_t) M_java_util_concurrent_CompletableFuture_applyToEitherAsync_java_util_concurrent_CompletionStage_java_util_function_Function_R_java_util_concurrent_CompletionStage, VTABLE_java_util_concurrent_CompletableFuture_applyToEitherAsync_java_util_concurrent_CompletionStage_java_util_function_Function_R_java_util_concurrent_CompletionStage, "(Ljava/util/concurrent/CompletionStage;Ljava/util/function/Function;)Ljava/util/concurrent/CompletionStage;", 4161 },
	{ "applyToEither", (intptr_t) M_java_util_concurrent_CompletableFuture_applyToEither_java_util_concurrent_CompletionStage_java_util_function_Function_R_java_util_concurrent_CompletionStage, VTABLE_java_util_concurrent_CompletableFuture_applyToEither_java_util_concurrent_CompletionStage_java_util_function_Function_R_java_util_concurrent_CompletionStage, "(Ljava/util/concurrent/CompletionStage;Ljava/util/function/Function;)Ljava/util/concurrent/CompletionStage;", 4161 },
	{ "runAfterBothAsync", (intptr_t) M_java_util_concurrent_CompletableFuture_runAfterBothAsync_java_util_concurrent_CompletionStage_java_lang_Runnable_java_util_concurrent_Executor_R_java_util_concurrent_CompletionStage, VTABLE_java_util_concurrent_CompletableFuture_runAfterBothAsync_java_util_concurrent_CompletionStage_java_lang_Runnable_java_util_concurrent_Executor_R_java_util_concurrent_CompletionStage, "(Ljava/util/concurrent/CompletionStage;Ljava/lang/Runnable;Ljava/util/concurrent/Executor;)Ljava/util/concurrent/CompletionStage;", 4161 },
	{ "runAfterBothAsync", (intptr_t) M_java_util_concurrent_CompletableFuture_runAfterBothAsync_java_util_concurrent_CompletionStage_java_lang_Runnable_R_java_util_concurrent_CompletionStage, VTABLE_java_util_concurrent_CompletableFuture_runAfterBothAsync_java_util_concurrent_CompletionStage_java_lang_Runnable_R_java_util_concurrent_CompletionStage, "(Ljava/util/concurrent/CompletionStage;Ljava/lang/Runnable;)Ljava/util/concurrent/CompletionStage;", 4161 },
	{ "runAfterBoth", (intptr_t) M_java_util_concurrent_CompletableFuture_runAfterBoth_java_util_concurrent_CompletionStage_java_lang_Runnable_R_java_util_concurrent_CompletionStage, VTABLE_java_util_concurrent_CompletableFuture_runAfterBoth_java_util_concurrent_CompletionStage_java_lang_Runnable_R_java_util_concurrent_CompletionStage, "(Ljava/util/concurrent/CompletionStage;Ljava/lang/Runnable;)Ljava/util/concurrent/CompletionStage;", 4161 },
	{ "thenAcceptBothAsync", (intptr_t) M_java_util_concurrent_CompletableFuture_thenAcceptBothAsync_java_util_concurrent_CompletionStage_java_util_function_BiConsumer_java_util_concurrent_Executor_R_java_util_concurrent_CompletionStage, VTABLE_java_util_concurrent_CompletableFuture_thenAcceptBothAsync_java_util_concurrent_CompletionStage_java_util_function_BiConsumer_java_util_concurrent_Executor_R_java_util_concurrent_CompletionStage, "(Ljava/util/concurrent/CompletionStage;Ljava/util/function/BiConsumer;Ljava/util/concurrent/Executor;)Ljava/util/concurrent/CompletionStage;", 4161 },
	{ "thenAcceptBothAsync", (intptr_t) M_java_util_concurrent_CompletableFuture_thenAcceptBothAsync_java_util_concurrent_CompletionStage_java_util_function_BiConsumer_R_java_util_concurrent_CompletionStage, VTABLE_java_util_concurrent_CompletableFuture_thenAcceptBothAsync_java_util_concurrent_CompletionStage_java_util_function_BiConsumer_R_java_util_concurrent_CompletionStage, "(Ljava/util/concurrent/CompletionStage;Ljava/util/function/BiConsumer;)Ljava/util/concurrent/CompletionStage;", 4161 },
	{ "thenAcceptBoth", (intptr_t) M_java_util_concurrent_CompletableFuture_thenAcceptBoth_java_util_concurrent_CompletionStage_java_util_function_BiConsumer_R_java_util_concurrent_CompletionStage, VTABLE_java_util_concurrent_CompletableFuture_thenAcceptBoth_java_util_concurrent_CompletionStage_java_util_function_BiConsumer_R_java_util_concurrent_CompletionStage, "(Ljava/util/concurrent/CompletionStage;Ljava/util/function/BiConsumer;)Ljava/util/concurrent/CompletionStage;", 4161 },
	{ "thenCombineAsync", (intptr_t) M_java_util_concurrent_CompletableFuture_thenCombineAsync_java_util_concurrent_CompletionStage_java_util_function_BiFunction_java_util_concurrent_Executor_R_java_util_concurrent_CompletionStage, VTABLE_java_util_concurrent_CompletableFuture_thenCombineAsync_java_util_concurrent_CompletionStage_java_util_function_BiFunction_java_util_concurrent_Executor_R_java_util_concurrent_CompletionStage, "(Ljava/util/concurrent/CompletionStage;Ljava/util/function/BiFunction;Ljava/util/concurrent/Executor;)Ljava/util/concurrent/CompletionStage;", 4161 },
	{ "thenCombineAsync", (intptr_t) M_java_util_concurrent_CompletableFuture_thenCombineAsync_java_util_concurrent_CompletionStage_java_util_function_BiFunction_R_java_util_concurrent_CompletionStage, VTABLE_java_util_concurrent_CompletableFuture_thenCombineAsync_java_util_concurrent_CompletionStage_java_util_function_BiFunction_R_java_util_concurrent_CompletionStage, "(Ljava/util/concurrent/CompletionStage;Ljava/util/function/BiFunction;)Ljava/util/concurrent/CompletionStage;", 4161 },
	{ "thenCombine", (intptr_t) M_java_util_concurrent_CompletableFuture_thenCombine_java_util_concurrent_CompletionStage_java_util_function_BiFunction_R_java_util_concurrent_CompletionStage, VTABLE_java_util_concurrent_CompletableFuture_thenCombine_java_util_concurrent_CompletionStage_java_util_function_BiFunction_R_java_util_concurrent_CompletionStage, "(Ljava/util/concurrent/CompletionStage;Ljava/util/function/BiFunction;)Ljava/util/concurrent/CompletionStage;", 4161 },
	{ "thenRunAsync", (intptr_t) M_java_util_concurrent_CompletableFuture_thenRunAsync_java_lang_Runnable_java_util_concurrent_Executor_R_java_util_concurrent_CompletionStage, VTABLE_java_util_concurrent_CompletableFuture_thenRunAsync_java_lang_Runnable_java_util_concurrent_Executor_R_java_util_concurrent_CompletionStage, "(Ljava/lang/Runnable;Ljava/util/concurrent/Executor;)Ljava/util/concurrent/CompletionStage;", 4161 },
	{ "thenRunAsync", (intptr_t) M_java_util_concurrent_CompletableFuture_thenRunAsync_java_lang_Runnable_R_java_util_concurrent_CompletionStage, VTABLE_java_util_concurrent_CompletableFuture_thenRunAsync_java_lang_Runnable_R_java_util_concurrent_CompletionStage, "(Ljava/lang/Runnable;)Ljava/util/concurrent/CompletionStage;", 4161 },
	{ "thenRun", (intptr_t) M_java_util_concurrent_CompletableFuture_thenRun_java_lang_Runnable_R_java_util_concurrent_CompletionStage, VTABLE_java_util_concurrent_CompletableFuture_thenRun_java_lang_Runnable_R_java_util_concurrent_CompletionStage, "(Ljava/lang/Runnable;)Ljava/util/concurrent/CompletionStage;", 4161 },
	{ "thenAcceptAsync", (intptr_t) M_java_util_concurrent_CompletableFuture_thenAcceptAsync_java_util_function_Consumer_java_util_concurrent_Executor_R_java_util_concurrent_CompletionStage, VTABLE_java_util_concurrent_CompletableFuture_thenAcceptAsync_java_util_function_Consumer_java_util_concurrent_Executor_R_java_util_concurrent_CompletionStage, "(Ljava/util/function/Consumer;Ljava/util/concurrent/Executor;)Ljava/util/concurrent/CompletionStage;", 4161 },
	{ "thenAcceptAsync", (intptr_t) M_java_util_concurrent_CompletableFuture_thenAcceptAsync_java_util_function_Consumer_R_java_util_concurrent_CompletionStage, VTABLE_java_util_concurrent_CompletableFuture_thenAcceptAsync_java_util_function_Consumer_R_java_util_concurrent_CompletionStage, "(Ljava/util/function/Consumer;)Ljava/util/concurrent/CompletionStage;", 4161 },
	{ "thenAccept", (intptr_t) M_java_util_concurrent_CompletableFuture_thenAccept_java_util_function_Consumer_R_java_util_concurrent_CompletionStage, VTABLE_java_util_concurrent_CompletableFuture_thenAccept_java_util_function_Consumer_R_java_util_concurrent_CompletionStage, "(Ljava/util/function/Consumer;)Ljava/util/concurrent/CompletionStage;", 4161 },
	{ "thenApplyAsync", (intptr_t) M_java_util_concurrent_CompletableFuture_thenApplyAsync_java_util_function_Function_java_util_concurrent_Executor_R_java_util_concurrent_CompletionStage, VTABLE_java_util_concurrent_CompletableFuture_thenApplyAsync_java_util_function_Function_java_util_concurrent_Executor_R_java_util_concurrent_CompletionStage, "(Ljava/util/function/Function;Ljava/util/concurrent/Executor;)Ljava/util/concurrent/CompletionStage;", 4161 },
	{ "thenApplyAsync", (intptr_t) M_java_util_concurrent_CompletableFuture_thenApplyAsync_java_util_function_Function_R_java_util_concurrent_CompletionStage, VTABLE_java_util_concurrent_CompletableFuture_thenApplyAsync_java_util_function_Function_R_java_util_concurrent_CompletionStage, "(Ljava/util/function/Function;)Ljava/util/concurrent/CompletionStage;", 4161 },
	{ "thenApply", (intptr_t) M_java_util_concurrent_CompletableFuture_thenApply_java_util_function_Function_R_java_util_concurrent_CompletionStage, VTABLE_java_util_concurrent_CompletableFuture_thenApply_java_util_function_Function_R_java_util_concurrent_CompletionStage, "(Ljava/util/function/Function;)Ljava/util/concurrent/CompletionStage;", 4161 },
	{ "<clinit>", (intptr_t) clinit_java_util_concurrent_CompletableFuture, 0, "()V", 8 },
};

Class class_java_util_concurrent_CompletableFuture{
		.nativeName = (intptr_t) "java/util/concurrent/CompletableFuture",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(java_util_concurrent_CompletableFuture),
		.classVtable = (intptr_t) vtable_java_util_concurrent_CompletableFuture,
		.staticInitializer = (intptr_t) clinit_java_util_concurrent_CompletableFuture,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_java_util_concurrent_CompletableFuture,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 33,
		.nativeInnerClasses = (intptr_t) innerClasses,
		.access = 33,
		.interfaceCount = 2,
		.nativeInterfaces = (intptr_t) interfaces,
		.fieldCount = 8,
		.nativeFields = (intptr_t) fields,
		.methodCount = 164,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 149,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_java_util_concurrent_CompletableFuture = registerClass(&class_java_util_concurrent_CompletableFuture);

}
