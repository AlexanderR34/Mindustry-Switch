#include "java/util/concurrent/CompletableFuture_OrApply.h"
#include "java/lang/Object.h"
#include "java/util/concurrent/CompletableFuture_BiCompletion.h"
#include "java/util/function/Function.h"
#include "java/util/concurrent/ForkJoinTask.h"
#include "java/util/concurrent/CompletableFuture.h"
#include "java/util/concurrent/CompletableFuture_UniCompletion.h"
#include "java/util/concurrent/CompletableFuture_OrApply.h"
#include "java/util/concurrent/CompletableFuture_AltResult.h"
#include "java/util/concurrent/CompletableFuture_Completion.h"
#include "java/util/concurrent/Executor.h"
#include "java/lang/Throwable.h"

extern "C" {


void mark_java_util_concurrent_CompletableFuture$OrApply(jobject object, jint mark, jint depth) {
	if (!object) {
		return;
	}
	if (depth > GC_DEPTH_ALWAYS && (object->gcMark < GC_MARK_START || object->gcMark == mark))
		return;
	if (depth > MAX_GC_MARK_DEPTH) {
		markDeepObject(object);
		return;
	}
	mark_java_util_concurrent_CompletableFuture$BiCompletion(object, mark, depth);
	if (object->gcMark >= GC_MARK_START)
		object->gcMark = mark;
	auto self = (java_util_concurrent_CompletableFuture$OrApply *) object;
	if (self->F_fn)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_fn)->clazz)->markFunction)((jobject) self->F_fn, mark, depth + 1);
}

void clinit_java_util_concurrent_CompletableFuture$OrApply(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	clinit_java_util_concurrent_CompletableFuture$BiCompletion(ctx);
}

void init_java_util_concurrent_CompletableFuture$OrApply_java_util_concurrent_Executor_java_util_concurrent_CompletableFuture_java_util_concurrent_CompletableFuture_java_util_concurrent_CompletableFuture_java_util_function_Function(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2, jobject param3, jobject param4) {
	NULL_CHECK(self);
	jtype frame[11];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/concurrent/CompletableFuture$OrApply:<init>", 11 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_util_concurrent_CompletableFuture$OrApply(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].o = param2;
	frame[4].o = param3;
	frame[5].o = param4;
	{
	LINE_NUMBER(1515);
	init_java_util_concurrent_CompletableFuture$BiCompletion_java_util_concurrent_Executor_java_util_concurrent_CompletableFuture_java_util_concurrent_CompletableFuture_java_util_concurrent_CompletableFuture(ctx, (frame[0].o), (frame[1].o), (frame[2].o), (frame[3].o), (frame[4].o));
	((java_util_concurrent_CompletableFuture$OrApply *) NULL_CHECK((frame[0].o)))->F_fn = (jref) (frame[5].o);
	LINE_NUMBER(1516);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_java_util_concurrent_CompletableFuture$OrApply_tryFire_int_R_java_util_concurrent_CompletableFuture(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[13];
	auto stack = &frame[9];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/concurrent/CompletableFuture$OrApply:tryFire", 13 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);
	volatile bool bypasses[1]{};

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(1522);
	sp[0].o = (jobject)((java_util_concurrent_CompletableFuture$UniCompletion *) NULL_CHECK((frame[0].o)))->F_dep;
	frame[2].o = sp[0].o;
	if (sp[0].o == nullptr) goto label_12;
	}
	{
	sp[0].o = (jobject)((java_util_concurrent_CompletableFuture$OrApply *) NULL_CHECK((frame[0].o)))->F_fn;
	frame[7].o = sp[0].o;
	if (sp[0].o == nullptr) goto label_12;
	}
	{
	sp[0].o = (jobject)((java_util_concurrent_CompletableFuture$UniCompletion *) NULL_CHECK((frame[0].o)))->F_src;
	frame[3].o = sp[0].o;
	if (sp[0].o == nullptr) goto label_12;
	}
	{
	sp[0].o = (jobject)((java_util_concurrent_CompletableFuture$BiCompletion *) NULL_CHECK((frame[0].o)))->F_snd;
	frame[4].o = sp[0].o;
	if (sp[0].o == nullptr) goto label_12;
	}
	{
	sp[0].o = (jobject)((java_util_concurrent_CompletableFuture *) NULL_CHECK((frame[3].o)))->F_result;
	frame[5].o = sp[0].o;
	if (sp[0].o != nullptr) goto label_17;
	}
	{
	sp[0].o = (jobject)((java_util_concurrent_CompletableFuture *) NULL_CHECK((frame[4].o)))->F_result;
	frame[5].o = sp[0].o;
	if (sp[0].o != nullptr) goto label_17;
	}
label_12:;
	{
	LINE_NUMBER(1525);
	popStackFrame(ctx);
	return (jobject(nullptr));
	}
label_17:;
	{
	LINE_NUMBER(1526);
	sp[0].o = (jobject)((java_util_concurrent_CompletableFuture *) NULL_CHECK((frame[2].o)))->F_result;
	if (sp[0].o != nullptr) goto label_18;
	}
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(1528);
	if ((frame[1].i) > 0) { popExceptionFrames(frameRef, 1); goto label_4; }
	}
	{
	jint temp0 = (jint)((func_java_util_concurrent_CompletableFuture$OrApply_claim_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_util_concurrent_CompletableFuture$OrApply_claim_R_boolean])(ctx, (frame[0].o));
	if (temp0 != 0) { popExceptionFrames(frameRef, 1); goto label_4; }
	}
	LINE_NUMBER(1529);
	INST_ACONST_NULL();
	popExceptionFrame(frameRef);
	popStackFrame(ctx);
	INST_ARETURN();
label_4:;
label_6: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(1530);
	if ((isInstance(ctx, (frame[5].o), &class_java_util_concurrent_CompletableFuture$AltResult)) == 0) { popExceptionFrames(frameRef, 1); bypasses[0] = true; goto label_9; } // goto label_20
	}
	{
	LINE_NUMBER(1531);
	sp[0].o = (jobject)((java_util_concurrent_CompletableFuture$AltResult *) NULL_CHECK((checkCast(ctx, &class_java_util_concurrent_CompletableFuture$AltResult, (frame[5].o)))))->F_ex;
	frame[6].o = sp[0].o;
	if (sp[0].o == nullptr) { popExceptionFrames(frameRef, 1); goto label_7; }
	}
	{
	LINE_NUMBER(1532);
	jint temp0 = (jint)((func_java_util_concurrent_CompletableFuture_completeThrowable_java_lang_Throwable_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_java_util_concurrent_CompletableFuture_completeThrowable_java_lang_Throwable_java_lang_Object_R_boolean])(ctx, (frame[2].o), (frame[6].o), (frame[5].o));
	}
	popExceptionFrame(frameRef);
	LINE_NUMBER(1533);
	goto label_18;
label_7:;
label_9: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	if (bypasses[0]) { bypasses[0] = false; goto label_20; }
	{
	LINE_NUMBER(1535);
	frame[5].o = (jobject(nullptr));
	}
label_20:;
	{
	LINE_NUMBER(1537);
	frame[8].o = (frame[5].o);
	LINE_NUMBER(1538);
	sp[0].o = frame[2].o;
	sp[1].o = (jobject)((func_java_util_function_Function_apply_java_lang_Object_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_function_Function, INDEX_java_util_function_Function_apply_java_lang_Object_R_java_lang_Object, (frame[7].o)))(ctx, (frame[7].o), (frame[8].o));
	jint temp0 = (jint)((func_java_util_concurrent_CompletableFuture_completeValue_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_concurrent_CompletableFuture_completeValue_java_lang_Object_R_boolean])(ctx, sp[0].o, sp[1].o);
	}
	popExceptionFrame(frameRef);
	LINE_NUMBER(1541);
	goto label_18;
label_2:;
	{
	sp -= 1;
	LINE_NUMBER(1539);
	frame[8].o = sp[0].o;
	LINE_NUMBER(1540);
	jint temp0 = (jint)((func_java_util_concurrent_CompletableFuture_completeThrowable_java_lang_Throwable_R_boolean) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_java_util_concurrent_CompletableFuture_completeThrowable_java_lang_Throwable_R_boolean])(ctx, (frame[2].o), (frame[8].o));
	}
label_18:;
	{
	LINE_NUMBER(1543);
	((java_util_concurrent_CompletableFuture$UniCompletion *) NULL_CHECK((frame[0].o)))->F_dep = (jref) (jobject(nullptr));
	((java_util_concurrent_CompletableFuture$UniCompletion *) NULL_CHECK((frame[0].o)))->F_src = (jref) (jobject(nullptr));
	((java_util_concurrent_CompletableFuture$BiCompletion *) NULL_CHECK((frame[0].o)))->F_snd = (jref) (jobject(nullptr));
	((java_util_concurrent_CompletableFuture$OrApply *) NULL_CHECK((frame[0].o)))->F_fn = (jref) (jobject(nullptr));
	LINE_NUMBER(1544);
	sp[0].o = (jobject)((func_java_util_concurrent_CompletableFuture_postFire_java_util_concurrent_CompletableFuture_java_util_concurrent_CompletableFuture_int_R_java_util_concurrent_CompletableFuture) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_java_util_concurrent_CompletableFuture_postFire_java_util_concurrent_CompletableFuture_java_util_concurrent_CompletableFuture_int_R_java_util_concurrent_CompletableFuture])(ctx, (frame[2].o), (frame[3].o), (frame[4].o), (frame[1].i));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void *vtable_java_util_concurrent_CompletableFuture$OrApply[] {
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
	(void *) M_java_util_concurrent_CompletableFuture$OrApply_tryFire_int_R_java_util_concurrent_CompletableFuture,
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
	{ "fn", &class_java_util_function_Function, offsetof(java_util_concurrent_CompletableFuture$OrApply, F_fn), "Ljava/util/function/Function;", 0 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_java_util_concurrent_CompletableFuture$OrApply_java_util_concurrent_Executor_java_util_concurrent_CompletableFuture_java_util_concurrent_CompletableFuture_java_util_concurrent_CompletableFuture_java_util_function_Function, 0, "(Ljava/util/concurrent/Executor;Ljava/util/concurrent/CompletableFuture;Ljava/util/concurrent/CompletableFuture;Ljava/util/concurrent/CompletableFuture;Ljava/util/function/Function;)V", 0 },
	{ "tryFire", (intptr_t) M_java_util_concurrent_CompletableFuture$OrApply_tryFire_int_R_java_util_concurrent_CompletableFuture, VTABLE_java_util_concurrent_CompletableFuture$OrApply_tryFire_int_R_java_util_concurrent_CompletableFuture, "(I)Ljava/util/concurrent/CompletableFuture;", 16 },
};

Class class_java_util_concurrent_CompletableFuture$OrApply{
		.nativeName = (intptr_t) "java/util/concurrent/CompletableFuture$OrApply",
		.parentClass = (intptr_t) &class_java_util_concurrent_CompletableFuture$BiCompletion,
		.size = sizeof(java_util_concurrent_CompletableFuture$OrApply),
		.classVtable = (intptr_t) vtable_java_util_concurrent_CompletableFuture$OrApply,
		.staticInitializer = (intptr_t) clinit_java_util_concurrent_CompletableFuture$OrApply,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_java_util_concurrent_CompletableFuture$OrApply,
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
static bool registered_java_util_concurrent_CompletableFuture$OrApply = registerClass(&class_java_util_concurrent_CompletableFuture$OrApply);

}

