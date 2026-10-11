#include "java/util/concurrent/ForkJoinTask_AdaptedRunnableAction.h"
#include "java/lang/Object.h"
#include "java/util/concurrent/ForkJoinTask.h"
#include "java/lang/NullPointerException.h"
#include "java/util/concurrent/ForkJoinTask_AdaptedRunnableAction.h"
#include "java/lang/Void.h"
#include "java/util/concurrent/RunnableFuture.h"
#include "java/lang/Runnable.h"

extern "C" {

jlong SF_java_util_concurrent_ForkJoinTask$AdaptedRunnableAction_serialVersionUID;

void mark_java_util_concurrent_ForkJoinTask$AdaptedRunnableAction(jobject object, jint mark, jint depth) {
	if (!object) {
		return;
	}
	if (depth > GC_DEPTH_ALWAYS && (object->gcMark < GC_MARK_START || object->gcMark == mark))
		return;
	if (depth > MAX_GC_MARK_DEPTH) {
		markDeepObject(object);
		return;
	}
	mark_java_util_concurrent_ForkJoinTask(object, mark, depth);
	if (object->gcMark >= GC_MARK_START)
		object->gcMark = mark;
	auto self = (java_util_concurrent_ForkJoinTask$AdaptedRunnableAction *) object;
	if (self->F_runnable)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_runnable)->clazz)->markFunction)((jobject) self->F_runnable, mark, depth + 1);
}

void clinit_java_util_concurrent_ForkJoinTask$AdaptedRunnableAction(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	clinit_java_util_concurrent_ForkJoinTask(ctx);
	SF_java_util_concurrent_ForkJoinTask$AdaptedRunnableAction_serialVersionUID = jlong(5232453952276885070ll);
}

void init_java_util_concurrent_ForkJoinTask$AdaptedRunnableAction_java_lang_Runnable(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/concurrent/ForkJoinTask$AdaptedRunnableAction:<init>", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_util_concurrent_ForkJoinTask$AdaptedRunnableAction(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(1389);
	init_java_util_concurrent_ForkJoinTask(ctx, (frame[0].o));
	LINE_NUMBER(1390);
	if ((frame[1].o) != nullptr) goto label_2;
	}
	{
	clinit_java_lang_NullPointerException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_NullPointerException);
	init_java_lang_NullPointerException(ctx, sp[0].o);
	throwException(ctx, sp[0].o);	}
label_2:;
	{
	LINE_NUMBER(1391);
	((java_util_concurrent_ForkJoinTask$AdaptedRunnableAction *) NULL_CHECK((frame[0].o)))->F_runnable = (jref) (frame[1].o);
	LINE_NUMBER(1392);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_java_util_concurrent_ForkJoinTask$AdaptedRunnableAction_getRawResult_R_java_lang_Void(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/concurrent/ForkJoinTask$AdaptedRunnableAction:getRawResult", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(1393);
	popStackFrame(ctx);
	return (jobject(nullptr));
	}

	popStackFrame(ctx);
}

void M_java_util_concurrent_ForkJoinTask$AdaptedRunnableAction_setRawResult_java_lang_Void(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/concurrent/ForkJoinTask$AdaptedRunnableAction:setRawResult", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	LINE_NUMBER(1394);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jbool M_java_util_concurrent_ForkJoinTask$AdaptedRunnableAction_exec_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/concurrent/ForkJoinTask$AdaptedRunnableAction:exec", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(1395);
	sp[0].o = (jobject)((java_util_concurrent_ForkJoinTask$AdaptedRunnableAction *) NULL_CHECK((frame[0].o)))->F_runnable;
	((func_java_lang_Runnable_run) resolveInterfaceMethod(ctx, &class_java_lang_Runnable, INDEX_java_lang_Runnable_run, sp[0].o))(ctx, sp[0].o);
	popStackFrame(ctx);
	return (jint(1));
	}

	popStackFrame(ctx);
}

void M_java_util_concurrent_ForkJoinTask$AdaptedRunnableAction_run(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/concurrent/ForkJoinTask$AdaptedRunnableAction:run", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(1396);
	sp[0].o = (jobject)((func_java_util_concurrent_ForkJoinTask$AdaptedRunnableAction_invoke_R_java_lang_Object) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_util_concurrent_ForkJoinTask$AdaptedRunnableAction_invoke_R_java_lang_Object])(ctx, (frame[0].o));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_java_util_concurrent_ForkJoinTask$AdaptedRunnableAction_setRawResult_java_lang_Object(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/concurrent/ForkJoinTask$AdaptedRunnableAction:setRawResult", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(1386);
	((func_java_util_concurrent_ForkJoinTask$AdaptedRunnableAction_setRawResult_java_lang_Void) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_util_concurrent_ForkJoinTask$AdaptedRunnableAction_setRawResult_java_lang_Void])(ctx, (frame[0].o), (checkCast(ctx, &class_java_lang_Void, (frame[1].o))));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_java_util_concurrent_ForkJoinTask$AdaptedRunnableAction_getRawResult_R_java_lang_Object(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/concurrent/ForkJoinTask$AdaptedRunnableAction:getRawResult", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(1386);
	sp[0].o = (jobject)((func_java_util_concurrent_ForkJoinTask$AdaptedRunnableAction_getRawResult_R_java_lang_Void) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_util_concurrent_ForkJoinTask$AdaptedRunnableAction_getRawResult_R_java_lang_Void])(ctx, (frame[0].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void *vtable_java_util_concurrent_ForkJoinTask$AdaptedRunnableAction[] {
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
	(void *) M_java_util_concurrent_ForkJoinTask$AdaptedRunnableAction_getRawResult_R_java_lang_Object,
	(void *) M_java_util_concurrent_ForkJoinTask$AdaptedRunnableAction_setRawResult_java_lang_Object,
	(void *) M_java_util_concurrent_ForkJoinTask$AdaptedRunnableAction_exec_R_boolean,
	(void *) M_java_util_concurrent_ForkJoinTask_getForkJoinTaskTag_R_short,
	(void *) M_java_util_concurrent_ForkJoinTask_setForkJoinTaskTag_short_R_short,
	(void *) M_java_util_concurrent_ForkJoinTask_compareAndSetForkJoinTaskTag_short_short_R_boolean,
	(void *) M_java_util_concurrent_ForkJoinTask_writeObject_java_io_ObjectOutputStream,
	(void *) M_java_util_concurrent_ForkJoinTask_readObject_java_io_ObjectInputStream,
	(void *) M_java_util_concurrent_ForkJoinTask$AdaptedRunnableAction_run,
	(void *) M_java_util_concurrent_ForkJoinTask$AdaptedRunnableAction_getRawResult_R_java_lang_Void,
	(void *) M_java_util_concurrent_ForkJoinTask$AdaptedRunnableAction_setRawResult_java_lang_Void,
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
	{ "getRawResult", "()Ljava/lang/Void;" },
	{ "setRawResult", "(Ljava/lang/Void;)V" },
};

static jclass interfaces[] { &class_java_util_concurrent_RunnableFuture, };

static FieldMetadata fields[] {
	{ "runnable", &class_java_lang_Runnable, offsetof(java_util_concurrent_ForkJoinTask$AdaptedRunnableAction, F_runnable), "Ljava/lang/Runnable;", 16 },
	{ "serialVersionUID", &class_long, (intptr_t) &SF_java_util_concurrent_ForkJoinTask$AdaptedRunnableAction_serialVersionUID, "J", 26 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_java_util_concurrent_ForkJoinTask$AdaptedRunnableAction_java_lang_Runnable, 0, "(Ljava/lang/Runnable;)V", 0 },
	{ "getRawResult", (intptr_t) M_java_util_concurrent_ForkJoinTask$AdaptedRunnableAction_getRawResult_R_java_lang_Void, VTABLE_java_util_concurrent_ForkJoinTask$AdaptedRunnableAction_getRawResult_R_java_lang_Void, "()Ljava/lang/Void;", 17 },
	{ "setRawResult", (intptr_t) M_java_util_concurrent_ForkJoinTask$AdaptedRunnableAction_setRawResult_java_lang_Void, VTABLE_java_util_concurrent_ForkJoinTask$AdaptedRunnableAction_setRawResult_java_lang_Void, "(Ljava/lang/Void;)V", 17 },
	{ "exec", (intptr_t) M_java_util_concurrent_ForkJoinTask$AdaptedRunnableAction_exec_R_boolean, VTABLE_java_util_concurrent_ForkJoinTask$AdaptedRunnableAction_exec_R_boolean, "()Z", 17 },
	{ "run", (intptr_t) M_java_util_concurrent_ForkJoinTask$AdaptedRunnableAction_run, VTABLE_java_util_concurrent_ForkJoinTask$AdaptedRunnableAction_run, "()V", 17 },
	{ "setRawResult", (intptr_t) M_java_util_concurrent_ForkJoinTask$AdaptedRunnableAction_setRawResult_java_lang_Object, VTABLE_java_util_concurrent_ForkJoinTask$AdaptedRunnableAction_setRawResult_java_lang_Object, "(Ljava/lang/Object;)V", 4161 },
	{ "getRawResult", (intptr_t) M_java_util_concurrent_ForkJoinTask$AdaptedRunnableAction_getRawResult_R_java_lang_Object, VTABLE_java_util_concurrent_ForkJoinTask$AdaptedRunnableAction_getRawResult_R_java_lang_Object, "()Ljava/lang/Object;", 4161 },
};

Class class_java_util_concurrent_ForkJoinTask$AdaptedRunnableAction{
		.nativeName = (intptr_t) "java/util/concurrent/ForkJoinTask$AdaptedRunnableAction",
		.parentClass = (intptr_t) &class_java_util_concurrent_ForkJoinTask,
		.size = sizeof(java_util_concurrent_ForkJoinTask$AdaptedRunnableAction),
		.classVtable = (intptr_t) vtable_java_util_concurrent_ForkJoinTask$AdaptedRunnableAction,
		.staticInitializer = (intptr_t) clinit_java_util_concurrent_ForkJoinTask$AdaptedRunnableAction,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_java_util_concurrent_ForkJoinTask$AdaptedRunnableAction,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) &class_java_util_concurrent_ForkJoinTask,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 48,
		.interfaceCount = 1,
		.nativeInterfaces = (intptr_t) interfaces,
		.fieldCount = 2,
		.nativeFields = (intptr_t) fields,
		.methodCount = 7,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 53,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_java_util_concurrent_ForkJoinTask$AdaptedRunnableAction = registerClass(&class_java_util_concurrent_ForkJoinTask$AdaptedRunnableAction);

}

