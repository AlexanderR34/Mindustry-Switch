#include "java/util/concurrent/CompletableFuture_Signaller.h"
#include "java/lang/Object.h"
#include "java/util/concurrent/ForkJoinTask.h"
#include "java/util/concurrent/CompletableFuture.h"
#include "java/util/concurrent/CompletableFuture_Completion.h"
#include "java/util/concurrent/ForkJoinPool_ManagedBlocker.h"
#include "java/util/concurrent/CompletableFuture_Signaller.h"
#include "java/lang/System.h"
#include "java/lang/Thread.h"
#include "java/util/concurrent/locks/LockSupport.h"

extern "C" {


void mark_java_util_concurrent_CompletableFuture$Signaller(jobject object, jint mark, jint depth) {
	if (!object) {
		return;
	}
	if (depth > GC_DEPTH_ALWAYS && (object->gcMark < GC_MARK_START || object->gcMark == mark))
		return;
	if (depth > MAX_GC_MARK_DEPTH) {
		markDeepObject(object);
		return;
	}
	mark_java_util_concurrent_CompletableFuture$Completion(object, mark, depth);
	if (object->gcMark >= GC_MARK_START)
		object->gcMark = mark;
	auto self = (java_util_concurrent_CompletableFuture$Signaller *) object;
	if (self->F_thread)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_thread)->clazz)->markFunction)((jobject) self->F_thread, mark, depth + 1);
}

void clinit_java_util_concurrent_CompletableFuture$Signaller(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	clinit_java_util_concurrent_CompletableFuture$Completion(ctx);
}

void init_java_util_concurrent_CompletableFuture$Signaller_boolean_long_long(jcontext ctx, jobject self, jbool param0, jlong param1, jlong param2) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/concurrent/CompletableFuture$Signaller:<init>", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_util_concurrent_CompletableFuture$Signaller(ctx);
	frame[0].o = self;
	frame[1].i = param0;
	frame[2].l = param1;
	frame[4].l = param2;
	{
	LINE_NUMBER(1799);
	init_java_util_concurrent_CompletableFuture$Completion(ctx, (frame[0].o));
	LINE_NUMBER(1800);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)SM_java_lang_Thread_currentThread_R_java_lang_Thread(ctx);
	((java_util_concurrent_CompletableFuture$Signaller *) NULL_CHECK(sp[0].o))->F_thread = (jref) sp[1].o;
	LINE_NUMBER(1801);
	((java_util_concurrent_CompletableFuture$Signaller *) NULL_CHECK((frame[0].o)))->F_interruptible = (frame[1].i);
	LINE_NUMBER(1802);
	((java_util_concurrent_CompletableFuture$Signaller *) NULL_CHECK((frame[0].o)))->F_nanos = (frame[2].l);
	LINE_NUMBER(1803);
	((java_util_concurrent_CompletableFuture$Signaller *) NULL_CHECK((frame[0].o)))->F_deadline = (frame[4].l);
	LINE_NUMBER(1804);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_java_util_concurrent_CompletableFuture$Signaller_tryFire_int_R_java_util_concurrent_CompletableFuture(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/concurrent/CompletableFuture$Signaller:tryFire", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(1807);
	sp[0].o = (jobject)((java_util_concurrent_CompletableFuture$Signaller *) NULL_CHECK((frame[0].o)))->F_thread;
	frame[2].o = sp[0].o;
	if (sp[0].o == nullptr) goto label_2;
	}
	{
	LINE_NUMBER(1808);
	((java_util_concurrent_CompletableFuture$Signaller *) NULL_CHECK((frame[0].o)))->F_thread = (jref) (jobject(nullptr));
	LINE_NUMBER(1809);
	SM_java_util_concurrent_locks_LockSupport_unpark_java_lang_Thread(ctx, (frame[2].o));
	}
label_2:;
	{
	LINE_NUMBER(1811);
	popStackFrame(ctx);
	return (jobject(nullptr));
	}

	popStackFrame(ctx);
}

jbool M_java_util_concurrent_CompletableFuture$Signaller_isReleasable_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/concurrent/CompletableFuture$Signaller:isReleasable", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(1814);
	jint temp0 = (jint)SM_java_lang_Thread_interrupted_R_boolean(ctx);
	if (temp0 == 0) goto label_1;
	}
	{
	LINE_NUMBER(1815);
	((java_util_concurrent_CompletableFuture$Signaller *) NULL_CHECK((frame[0].o)))->F_interrupted = (jint(1));
	}
label_1:;
	{
	LINE_NUMBER(1816);
	if (((jint)((java_util_concurrent_CompletableFuture$Signaller *) NULL_CHECK((frame[0].o)))->F_interrupted) == 0) goto label_3;
	}
	{
	if (((jint)((java_util_concurrent_CompletableFuture$Signaller *) NULL_CHECK((frame[0].o)))->F_interruptible) != 0) goto label_4;
	}
label_3:;
	{
	if ((longCompare(((jlong)((java_util_concurrent_CompletableFuture$Signaller *) NULL_CHECK((frame[0].o)))->F_deadline), (jlong(0)))) == 0) goto label_5;
	}
	{
	if ((longCompare(((jlong)((java_util_concurrent_CompletableFuture$Signaller *) NULL_CHECK((frame[0].o)))->F_nanos), (jlong(0)))) <= 0) goto label_4;
	}
	{
	sp[0].o = frame[0].o;
	jlong temp0 = (jlong)((java_util_concurrent_CompletableFuture$Signaller *) NULL_CHECK((frame[0].o)))->F_deadline;
	LINE_NUMBER(1819);
	jlong temp1 = (jlong)SM_java_lang_System_nanoTime_R_long(ctx);
	jlong temp2 = temp0 - temp1;
	((java_util_concurrent_CompletableFuture$Signaller *) NULL_CHECK(sp[0].o))->F_nanos = temp2;
	if ((longCompare(temp2, (jlong(0)))) <= 0) goto label_4;
	}
label_5:;
	{
	sp[0].o = (jobject)((java_util_concurrent_CompletableFuture$Signaller *) NULL_CHECK((frame[0].o)))->F_thread;
	if (sp[0].o != nullptr) goto label_7;
	}
label_4:;
	INST_ICONST(1);
	goto label_8;
label_7:;
	INST_ICONST(0);
label_8:;
	LINE_NUMBER(1816);
	popStackFrame(ctx);
	INST_IRETURN();

	popStackFrame(ctx);
}

jbool M_java_util_concurrent_CompletableFuture$Signaller_block_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/concurrent/CompletableFuture$Signaller:block", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
label_0:;
	{
	LINE_NUMBER(1823);
	jint temp0 = (jint)((func_java_util_concurrent_CompletableFuture$Signaller_isReleasable_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_util_concurrent_CompletableFuture$Signaller_isReleasable_R_boolean])(ctx, (frame[0].o));
	if (temp0 != 0) goto label_1;
	}
	{
	LINE_NUMBER(1824);
	if ((longCompare(((jlong)((java_util_concurrent_CompletableFuture$Signaller *) NULL_CHECK((frame[0].o)))->F_deadline), (jlong(0)))) != 0) goto label_3;
	}
	{
	LINE_NUMBER(1825);
	SM_java_util_concurrent_locks_LockSupport_park_java_lang_Object(ctx, (frame[0].o));
	goto label_0;
	}
label_3:;
	{
	LINE_NUMBER(1827);
	SM_java_util_concurrent_locks_LockSupport_parkNanos_java_lang_Object_long(ctx, (frame[0].o), ((jlong)((java_util_concurrent_CompletableFuture$Signaller *) NULL_CHECK((frame[0].o)))->F_nanos));
	goto label_0;
	}
label_1:;
	{
	LINE_NUMBER(1829);
	popStackFrame(ctx);
	return (jint(1));
	}

	popStackFrame(ctx);
}

jbool M_java_util_concurrent_CompletableFuture$Signaller_isLive_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/concurrent/CompletableFuture$Signaller:isLive", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(1831);
	sp[0].o = (jobject)((java_util_concurrent_CompletableFuture$Signaller *) NULL_CHECK((frame[0].o)))->F_thread;
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

void *vtable_java_util_concurrent_CompletableFuture$Signaller[] {
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
	(void *) M_java_util_concurrent_CompletableFuture$Signaller_tryFire_int_R_java_util_concurrent_CompletableFuture,
	(void *) M_java_util_concurrent_CompletableFuture$Signaller_isLive_R_boolean,
	(void *) M_java_util_concurrent_CompletableFuture$Completion_getRawResult_R_java_lang_Void,
	(void *) M_java_util_concurrent_CompletableFuture$Completion_setRawResult_java_lang_Void,
	(void *) M_java_util_concurrent_CompletableFuture$Signaller_block_R_boolean,
	(void *) M_java_util_concurrent_CompletableFuture$Signaller_isReleasable_R_boolean,
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
	{ "block", "()Z" },
	{ "isReleasable", "()Z" },
};

static jclass interfaces[] { &class_java_util_concurrent_ForkJoinPool$ManagedBlocker, };

static FieldMetadata fields[] {
	{ "nanos", &class_long, offsetof(java_util_concurrent_CompletableFuture$Signaller, F_nanos), "J", 0 },
	{ "deadline", &class_long, offsetof(java_util_concurrent_CompletableFuture$Signaller, F_deadline), "J", 16 },
	{ "interruptible", &class_boolean, offsetof(java_util_concurrent_CompletableFuture$Signaller, F_interruptible), "Z", 16 },
	{ "interrupted", &class_boolean, offsetof(java_util_concurrent_CompletableFuture$Signaller, F_interrupted), "Z", 0 },
	{ "thread", &class_java_lang_Thread, offsetof(java_util_concurrent_CompletableFuture$Signaller, F_thread), "Ljava/lang/Thread;", 64 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_java_util_concurrent_CompletableFuture$Signaller_boolean_long_long, 0, "(ZJJ)V", 0 },
	{ "tryFire", (intptr_t) M_java_util_concurrent_CompletableFuture$Signaller_tryFire_int_R_java_util_concurrent_CompletableFuture, VTABLE_java_util_concurrent_CompletableFuture$Signaller_tryFire_int_R_java_util_concurrent_CompletableFuture, "(I)Ljava/util/concurrent/CompletableFuture;", 16 },
	{ "isReleasable", (intptr_t) M_java_util_concurrent_CompletableFuture$Signaller_isReleasable_R_boolean, VTABLE_java_util_concurrent_CompletableFuture$Signaller_isReleasable_R_boolean, "()Z", 1 },
	{ "block", (intptr_t) M_java_util_concurrent_CompletableFuture$Signaller_block_R_boolean, VTABLE_java_util_concurrent_CompletableFuture$Signaller_block_R_boolean, "()Z", 1 },
	{ "isLive", (intptr_t) M_java_util_concurrent_CompletableFuture$Signaller_isLive_R_boolean, VTABLE_java_util_concurrent_CompletableFuture$Signaller_isLive_R_boolean, "()Z", 16 },
};

Class class_java_util_concurrent_CompletableFuture$Signaller{
		.nativeName = (intptr_t) "java/util/concurrent/CompletableFuture$Signaller",
		.parentClass = (intptr_t) &class_java_util_concurrent_CompletableFuture$Completion,
		.size = sizeof(java_util_concurrent_CompletableFuture$Signaller),
		.classVtable = (intptr_t) vtable_java_util_concurrent_CompletableFuture$Signaller,
		.staticInitializer = (intptr_t) clinit_java_util_concurrent_CompletableFuture$Signaller,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_java_util_concurrent_CompletableFuture$Signaller,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) &class_java_util_concurrent_CompletableFuture,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 48,
		.interfaceCount = 1,
		.nativeInterfaces = (intptr_t) interfaces,
		.fieldCount = 5,
		.nativeFields = (intptr_t) fields,
		.methodCount = 5,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 57,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_java_util_concurrent_CompletableFuture$Signaller = registerClass(&class_java_util_concurrent_CompletableFuture$Signaller);

}

