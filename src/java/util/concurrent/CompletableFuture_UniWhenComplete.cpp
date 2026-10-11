#include "java/util/concurrent/CompletableFuture_UniWhenComplete.h"
#include "java/lang/Object.h"
#include "java/util/function/BiConsumer.h"
#include "java/util/concurrent/ForkJoinTask.h"
#include "java/util/concurrent/CompletableFuture_UniCompletion.h"
#include "java/util/concurrent/CompletableFuture.h"
#include "java/util/concurrent/CompletableFuture_UniWhenComplete.h"
#include "java/util/concurrent/CompletableFuture_Completion.h"
#include "java/util/concurrent/Executor.h"

extern "C" {


void mark_java_util_concurrent_CompletableFuture$UniWhenComplete(jobject object, jint mark, jint depth) {
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
	auto self = (java_util_concurrent_CompletableFuture$UniWhenComplete *) object;
	if (self->F_fn)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_fn)->clazz)->markFunction)((jobject) self->F_fn, mark, depth + 1);
}

void clinit_java_util_concurrent_CompletableFuture$UniWhenComplete(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	clinit_java_util_concurrent_CompletableFuture$UniCompletion(ctx);
}

void init_java_util_concurrent_CompletableFuture$UniWhenComplete_java_util_concurrent_Executor_java_util_concurrent_CompletableFuture_java_util_concurrent_CompletableFuture_java_util_function_BiConsumer(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2, jobject param3) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/concurrent/CompletableFuture$UniWhenComplete:<init>", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_util_concurrent_CompletableFuture$UniWhenComplete(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].o = param2;
	frame[4].o = param3;
	{
	LINE_NUMBER(859);
	init_java_util_concurrent_CompletableFuture$UniCompletion_java_util_concurrent_Executor_java_util_concurrent_CompletableFuture_java_util_concurrent_CompletableFuture(ctx, (frame[0].o), (frame[1].o), (frame[2].o), (frame[3].o));
	((java_util_concurrent_CompletableFuture$UniWhenComplete *) NULL_CHECK((frame[0].o)))->F_fn = (jref) (frame[4].o);
	LINE_NUMBER(860);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_java_util_concurrent_CompletableFuture$UniWhenComplete_tryFire_int_R_java_util_concurrent_CompletableFuture(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[10];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/concurrent/CompletableFuture$UniWhenComplete:tryFire", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(864);
	sp[0].o = (jobject)((java_util_concurrent_CompletableFuture$UniCompletion *) NULL_CHECK((frame[0].o)))->F_dep;
	frame[2].o = sp[0].o;
	if (sp[0].o == nullptr) goto label_2;
	}
	{
	sp[0].o = (jobject)((java_util_concurrent_CompletableFuture$UniWhenComplete *) NULL_CHECK((frame[0].o)))->F_fn;
	frame[5].o = sp[0].o;
	if (sp[0].o == nullptr) goto label_2;
	}
	{
	sp[0].o = (jobject)((java_util_concurrent_CompletableFuture$UniCompletion *) NULL_CHECK((frame[0].o)))->F_src;
	frame[3].o = sp[0].o;
	if (sp[0].o == nullptr) goto label_2;
	}
	{
	sp[0].o = (jobject)((java_util_concurrent_CompletableFuture *) NULL_CHECK((frame[3].o)))->F_result;
	frame[4].o = sp[0].o;
	if (sp[0].o == nullptr) goto label_2;
	}
	{
	sp[0].o = frame[2].o;
	sp[1].o = frame[4].o;
	sp[2].o = frame[5].o;
	LINE_NUMBER(866);
	sp += 3;
	if ((frame[1].i) <= 0) goto label_7;
	}
	INST_ACONST_NULL();
	goto label_8;
label_7:;
	INST_ALOAD(0);
label_8:;
	POP_N(4); // Pop method args
	sp->i = (jint)((func_java_util_concurrent_CompletableFuture_uniWhenComplete_java_lang_Object_java_util_function_BiConsumer_java_util_concurrent_CompletableFuture$UniWhenComplete_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_concurrent_CompletableFuture_uniWhenComplete_java_lang_Object_java_util_function_BiConsumer_java_util_concurrent_CompletableFuture$UniWhenComplete_R_boolean])(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o);
	sp++;
	if ((--sp)->i != 0) goto label_9;
label_2:;
	{
	LINE_NUMBER(867);
	popStackFrame(ctx);
	return (jobject(nullptr));
	}
label_9:;
	{
	LINE_NUMBER(868);
	((java_util_concurrent_CompletableFuture$UniCompletion *) NULL_CHECK((frame[0].o)))->F_dep = (jref) (jobject(nullptr));
	((java_util_concurrent_CompletableFuture$UniCompletion *) NULL_CHECK((frame[0].o)))->F_src = (jref) (jobject(nullptr));
	((java_util_concurrent_CompletableFuture$UniWhenComplete *) NULL_CHECK((frame[0].o)))->F_fn = (jref) (jobject(nullptr));
	LINE_NUMBER(869);
	sp[0].o = (jobject)((func_java_util_concurrent_CompletableFuture_postFire_java_util_concurrent_CompletableFuture_int_R_java_util_concurrent_CompletableFuture) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_java_util_concurrent_CompletableFuture_postFire_java_util_concurrent_CompletableFuture_int_R_java_util_concurrent_CompletableFuture])(ctx, (frame[2].o), (frame[3].o), (frame[1].i));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void *vtable_java_util_concurrent_CompletableFuture$UniWhenComplete[] {
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
	(void *) M_java_util_concurrent_CompletableFuture$UniWhenComplete_tryFire_int_R_java_util_concurrent_CompletableFuture,
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
	{ "fn", &class_java_util_function_BiConsumer, offsetof(java_util_concurrent_CompletableFuture$UniWhenComplete, F_fn), "Ljava/util/function/BiConsumer;", 0 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_java_util_concurrent_CompletableFuture$UniWhenComplete_java_util_concurrent_Executor_java_util_concurrent_CompletableFuture_java_util_concurrent_CompletableFuture_java_util_function_BiConsumer, 0, "(Ljava/util/concurrent/Executor;Ljava/util/concurrent/CompletableFuture;Ljava/util/concurrent/CompletableFuture;Ljava/util/function/BiConsumer;)V", 0 },
	{ "tryFire", (intptr_t) M_java_util_concurrent_CompletableFuture$UniWhenComplete_tryFire_int_R_java_util_concurrent_CompletableFuture, VTABLE_java_util_concurrent_CompletableFuture$UniWhenComplete_tryFire_int_R_java_util_concurrent_CompletableFuture, "(I)Ljava/util/concurrent/CompletableFuture;", 16 },
};

Class class_java_util_concurrent_CompletableFuture$UniWhenComplete{
		.nativeName = (intptr_t) "java/util/concurrent/CompletableFuture$UniWhenComplete",
		.parentClass = (intptr_t) &class_java_util_concurrent_CompletableFuture$UniCompletion,
		.size = sizeof(java_util_concurrent_CompletableFuture$UniWhenComplete),
		.classVtable = (intptr_t) vtable_java_util_concurrent_CompletableFuture$UniWhenComplete,
		.staticInitializer = (intptr_t) clinit_java_util_concurrent_CompletableFuture$UniWhenComplete,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_java_util_concurrent_CompletableFuture$UniWhenComplete,
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
static bool registered_java_util_concurrent_CompletableFuture$UniWhenComplete = registerClass(&class_java_util_concurrent_CompletableFuture$UniWhenComplete);

}

