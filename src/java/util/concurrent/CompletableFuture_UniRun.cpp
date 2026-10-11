#include "java/util/concurrent/CompletableFuture_UniRun.h"
#include "java/lang/Object.h"
#include "java/util/concurrent/ForkJoinTask.h"
#include "java/util/concurrent/CompletableFuture_UniCompletion.h"
#include "java/util/concurrent/CompletableFuture.h"
#include "java/util/concurrent/CompletableFuture_AltResult.h"
#include "java/util/concurrent/CompletableFuture_Completion.h"
#include "java/util/concurrent/CompletableFuture_UniRun.h"
#include "java/util/concurrent/Executor.h"
#include "java/lang/Throwable.h"
#include "java/lang/Runnable.h"

extern "C" {


void mark_java_util_concurrent_CompletableFuture$UniRun(jobject object, jint mark, jint depth) {
	if (!object) {
		return;
	}
	if (depth > GC_DEPTH_ALWAYS && (object->gcMark < GC_MARK_START || object->gcMark == mark))
		return;
	if (depth > MAX_GC_MARK_DEPTH) {
		markDeepObject(object);
		return;
	}
	mark_java_util_concurrent_CompletableFuture$UniCompletion(object, mark, depth);
	if (object->gcMark >= GC_MARK_START)
		object->gcMark = mark;
	auto self = (java_util_concurrent_CompletableFuture$UniRun *) object;
	if (self->F_fn)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_fn)->clazz)->markFunction)((jobject) self->F_fn, mark, depth + 1);
}

void clinit_java_util_concurrent_CompletableFuture$UniRun(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	clinit_java_util_concurrent_CompletableFuture$UniCompletion(ctx);
}

void init_java_util_concurrent_CompletableFuture$UniRun_java_util_concurrent_Executor_java_util_concurrent_CompletableFuture_java_util_concurrent_CompletableFuture_java_lang_Runnable(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2, jobject param3) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/concurrent/CompletableFuture$UniRun:<init>", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_util_concurrent_CompletableFuture$UniRun(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].o = param2;
	frame[4].o = param3;
	{
	LINE_NUMBER(796);
	init_java_util_concurrent_CompletableFuture$UniCompletion_java_util_concurrent_Executor_java_util_concurrent_CompletableFuture_java_util_concurrent_CompletableFuture(ctx, (frame[0].o), (frame[1].o), (frame[2].o), (frame[3].o));
	((java_util_concurrent_CompletableFuture$UniRun *) NULL_CHECK((frame[0].o)))->F_fn = (jref) (frame[4].o);
	LINE_NUMBER(797);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_java_util_concurrent_CompletableFuture$UniRun_tryFire_int_R_java_util_concurrent_CompletableFuture(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[11];
	auto stack = &frame[8];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/concurrent/CompletableFuture$UniRun:tryFire", 11 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(801);
	sp[0].o = (jobject)((java_util_concurrent_CompletableFuture$UniCompletion *) NULL_CHECK((frame[0].o)))->F_dep;
	frame[2].o = sp[0].o;
	if (sp[0].o == nullptr) goto label_9;
	}
	{
	sp[0].o = (jobject)((java_util_concurrent_CompletableFuture$UniRun *) NULL_CHECK((frame[0].o)))->F_fn;
	frame[6].o = sp[0].o;
	if (sp[0].o == nullptr) goto label_9;
	}
	{
	sp[0].o = (jobject)((java_util_concurrent_CompletableFuture$UniCompletion *) NULL_CHECK((frame[0].o)))->F_src;
	frame[3].o = sp[0].o;
	if (sp[0].o == nullptr) goto label_9;
	}
	{
	sp[0].o = (jobject)((java_util_concurrent_CompletableFuture *) NULL_CHECK((frame[3].o)))->F_result;
	frame[4].o = sp[0].o;
	if (sp[0].o != nullptr) goto label_13;
	}
label_9:;
	{
	LINE_NUMBER(803);
	popStackFrame(ctx);
	return (jobject(nullptr));
	}
label_13:;
	{
	LINE_NUMBER(804);
	sp[0].o = (jobject)((java_util_concurrent_CompletableFuture *) NULL_CHECK((frame[2].o)))->F_result;
	if (sp[0].o != nullptr) goto label_14;
	}
	{
	LINE_NUMBER(805);
	if ((isInstance(ctx, (frame[4].o), &class_java_util_concurrent_CompletableFuture$AltResult)) == 0) goto label_0;
	}
	{
	sp[0].o = (jobject)((java_util_concurrent_CompletableFuture$AltResult *) NULL_CHECK((checkCast(ctx, &class_java_util_concurrent_CompletableFuture$AltResult, (frame[4].o)))))->F_ex;
	frame[5].o = sp[0].o;
	if (sp[0].o == nullptr) goto label_0;
	}
	{
	LINE_NUMBER(806);
	jint temp0 = (jint)((func_java_util_concurrent_CompletableFuture_completeThrowable_java_lang_Throwable_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_java_util_concurrent_CompletableFuture_completeThrowable_java_lang_Throwable_java_lang_Object_R_boolean])(ctx, (frame[2].o), (frame[5].o), (frame[4].o));
	goto label_14;
	}
label_0:;
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(809);
	if ((frame[1].i) > 0) { popExceptionFrames(frameRef, 1); goto label_4; }
	}
	{
	jint temp0 = (jint)((func_java_util_concurrent_CompletableFuture$UniRun_claim_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_util_concurrent_CompletableFuture$UniRun_claim_R_boolean])(ctx, (frame[0].o));
	if (temp0 != 0) { popExceptionFrames(frameRef, 1); goto label_4; }
	}
	LINE_NUMBER(810);
	INST_ACONST_NULL();
	popExceptionFrame(frameRef);
	popStackFrame(ctx);
	INST_ARETURN();
label_4:;
label_6: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(812);
	((func_java_lang_Runnable_run) resolveInterfaceMethod(ctx, &class_java_lang_Runnable, INDEX_java_lang_Runnable_run, (frame[6].o)))(ctx, (frame[6].o));
	LINE_NUMBER(813);
	jint temp0 = (jint)((func_java_util_concurrent_CompletableFuture_completeNull_R_boolean) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_java_util_concurrent_CompletableFuture_completeNull_R_boolean])(ctx, (frame[2].o));
	}
	popExceptionFrame(frameRef);
	LINE_NUMBER(817);
	goto label_14;
label_2:;
	{
	sp -= 1;
	LINE_NUMBER(815);
	frame[7].o = sp[0].o;
	LINE_NUMBER(816);
	jint temp0 = (jint)((func_java_util_concurrent_CompletableFuture_completeThrowable_java_lang_Throwable_R_boolean) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_java_util_concurrent_CompletableFuture_completeThrowable_java_lang_Throwable_R_boolean])(ctx, (frame[2].o), (frame[7].o));
	}
label_14:;
	{
	LINE_NUMBER(819);
	((java_util_concurrent_CompletableFuture$UniCompletion *) NULL_CHECK((frame[0].o)))->F_dep = (jref) (jobject(nullptr));
	((java_util_concurrent_CompletableFuture$UniCompletion *) NULL_CHECK((frame[0].o)))->F_src = (jref) (jobject(nullptr));
	((java_util_concurrent_CompletableFuture$UniRun *) NULL_CHECK((frame[0].o)))->F_fn = (jref) (jobject(nullptr));
	LINE_NUMBER(820);
	sp[0].o = (jobject)((func_java_util_concurrent_CompletableFuture_postFire_java_util_concurrent_CompletableFuture_int_R_java_util_concurrent_CompletableFuture) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_java_util_concurrent_CompletableFuture_postFire_java_util_concurrent_CompletableFuture_int_R_java_util_concurrent_CompletableFuture])(ctx, (frame[2].o), (frame[3].o), (frame[1].i));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void *vtable_java_util_concurrent_CompletableFuture$UniRun[] {
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
	(void *) M_java_util_concurrent_CompletableFuture$Completion_getRawResult_R_java_lang_Object,
	(void *) M_java_util_concurrent_CompletableFuture$Completion_setRawResult_java_lang_Object,
	(void *) M_java_util_concurrent_CompletableFuture$Completion_exec_R_boolean,
	(void *) M_java_util_concurrent_ForkJoinTask_getForkJoinTaskTag_R_short,
	(void *) M_java_util_concurrent_ForkJoinTask_setForkJoinTaskTag_short_R_short,
	(void *) M_java_util_concurrent_ForkJoinTask_compareAndSetForkJoinTaskTag_short_short_R_boolean,
	(void *) M_java_util_concurrent_ForkJoinTask_writeObject_java_io_ObjectOutputStream,
	(void *) M_java_util_concurrent_ForkJoinTask_readObject_java_io_ObjectInputStream,
	(void *) M_java_util_concurrent_CompletableFuture$Completion_run,
	(void *) M_java_util_concurrent_CompletableFuture$UniRun_tryFire_int_R_java_util_concurrent_CompletableFuture,
	(void *) M_java_util_concurrent_CompletableFuture$UniCompletion_isLive_R_boolean,
	(void *) M_java_util_concurrent_CompletableFuture$Completion_getRawResult_R_java_lang_Void,
	(void *) M_java_util_concurrent_CompletableFuture$Completion_setRawResult_java_lang_Void,
	(void *) M_java_util_concurrent_CompletableFuture$UniCompletion_claim_R_boolean,
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
	{ "run", "()V" },
	{ "tryFire", "(I)Ljava/util/concurrent/CompletableFuture;" },
	{ "isLive", "()Z" },
	{ "getRawResult", "()Ljava/lang/Void;" },
	{ "setRawResult", "(Ljava/lang/Void;)V" },
	{ "claim", "()Z" },
};

static FieldMetadata fields[] {
	{ "fn", &class_java_lang_Runnable, offsetof(java_util_concurrent_CompletableFuture$UniRun, F_fn), "Ljava/lang/Runnable;", 0 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_java_util_concurrent_CompletableFuture$UniRun_java_util_concurrent_Executor_java_util_concurrent_CompletableFuture_java_util_concurrent_CompletableFuture_java_lang_Runnable, 0, "(Ljava/util/concurrent/Executor;Ljava/util/concurrent/CompletableFuture;Ljava/util/concurrent/CompletableFuture;Ljava/lang/Runnable;)V", 0 },
	{ "tryFire", (intptr_t) M_java_util_concurrent_CompletableFuture$UniRun_tryFire_int_R_java_util_concurrent_CompletableFuture, VTABLE_java_util_concurrent_CompletableFuture$UniRun_tryFire_int_R_java_util_concurrent_CompletableFuture, "(I)Ljava/util/concurrent/CompletableFuture;", 16 },
};

Class class_java_util_concurrent_CompletableFuture$UniRun{
		.nativeName = (intptr_t) "java/util/concurrent/CompletableFuture$UniRun",
		.parentClass = (intptr_t) &class_java_util_concurrent_CompletableFuture$UniCompletion,
		.size = sizeof(java_util_concurrent_CompletableFuture$UniRun),
		.classVtable = (intptr_t) vtable_java_util_concurrent_CompletableFuture$UniRun,
		.staticInitializer = (intptr_t) clinit_java_util_concurrent_CompletableFuture$UniRun,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_java_util_concurrent_CompletableFuture$UniRun,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) &class_java_util_concurrent_CompletableFuture,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 48,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 1,
		.nativeFields = (intptr_t) fields,
		.methodCount = 2,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 56,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_java_util_concurrent_CompletableFuture$UniRun = registerClass(&class_java_util_concurrent_CompletableFuture$UniRun);

}

