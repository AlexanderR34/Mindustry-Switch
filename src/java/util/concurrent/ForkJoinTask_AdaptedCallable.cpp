#include "java/util/concurrent/ForkJoinTask_AdaptedCallable.h"
#include "java/lang/Exception.h"
#include "java/lang/Object.h"
#include "java/util/concurrent/ForkJoinTask_AdaptedCallable.h"
#include "java/util/concurrent/ForkJoinTask.h"
#include "java/lang/NullPointerException.h"
#include "java/lang/RuntimeException.h"
#include "java/util/concurrent/RunnableFuture.h"
#include "java/util/concurrent/Callable.h"
#include "java/lang/Throwable.h"

extern "C" {

jlong SF_java_util_concurrent_ForkJoinTask$AdaptedCallable_serialVersionUID;

void mark_java_util_concurrent_ForkJoinTask$AdaptedCallable(jobject object, jint mark, jint depth) {
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
	auto self = (java_util_concurrent_ForkJoinTask$AdaptedCallable *) object;
	if (self->F_callable)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_callable)->clazz)->markFunction)((jobject) self->F_callable, mark, depth + 1);
	if (self->F_result)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_result)->clazz)->markFunction)((jobject) self->F_result, mark, depth + 1);
}

void clinit_java_util_concurrent_ForkJoinTask$AdaptedCallable(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	clinit_java_util_concurrent_ForkJoinTask(ctx);
	SF_java_util_concurrent_ForkJoinTask$AdaptedCallable_serialVersionUID = jlong(2838392045355241008ll);
}

void init_java_util_concurrent_ForkJoinTask$AdaptedCallable_java_util_concurrent_Callable(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/concurrent/ForkJoinTask$AdaptedCallable:<init>", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_util_concurrent_ForkJoinTask$AdaptedCallable(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(1425);
	init_java_util_concurrent_ForkJoinTask(ctx, (frame[0].o));
	LINE_NUMBER(1426);
	if ((frame[1].o) != nullptr) goto label_2;
	}
	{
	clinit_java_lang_NullPointerException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_NullPointerException);
	init_java_lang_NullPointerException(ctx, sp[0].o);
	throwException(ctx, sp[0].o);	}
label_2:;
	{
	LINE_NUMBER(1427);
	((java_util_concurrent_ForkJoinTask$AdaptedCallable *) NULL_CHECK((frame[0].o)))->F_callable = (jref) (frame[1].o);
	LINE_NUMBER(1428);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_java_util_concurrent_ForkJoinTask$AdaptedCallable_getRawResult_R_java_lang_Object(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/concurrent/ForkJoinTask$AdaptedCallable:getRawResult", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(1429);
	sp[0].o = (jobject)((java_util_concurrent_ForkJoinTask$AdaptedCallable *) NULL_CHECK((frame[0].o)))->F_result;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void M_java_util_concurrent_ForkJoinTask$AdaptedCallable_setRawResult_java_lang_Object(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/concurrent/ForkJoinTask$AdaptedCallable:setRawResult", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(1430);
	((java_util_concurrent_ForkJoinTask$AdaptedCallable *) NULL_CHECK((frame[0].o)))->F_result = (jref) (frame[1].o);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jbool M_java_util_concurrent_ForkJoinTask$AdaptedCallable_exec_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/concurrent/ForkJoinTask$AdaptedCallable:exec", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_RuntimeException))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
label_5: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Exception))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 2); goto label_4; }
	}
	{
	LINE_NUMBER(1433);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((java_util_concurrent_ForkJoinTask$AdaptedCallable *) NULL_CHECK((frame[0].o)))->F_callable;
	sp[1].o = (jobject)((func_java_util_concurrent_Callable_call_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_concurrent_Callable, INDEX_java_util_concurrent_Callable_call_R_java_lang_Object, sp[1].o))(ctx, sp[1].o);
	((java_util_concurrent_ForkJoinTask$AdaptedCallable *) NULL_CHECK(sp[0].o))->F_result = (jref) sp[1].o;
	LINE_NUMBER(1434);
	jint temp0 = jint(1);
	sp[0].i = temp0;
	sp += 1;
	}
	popExceptionFrame(frameRef);
	popExceptionFrame(frameRef);
	popStackFrame(ctx);
	INST_IRETURN();
label_2:;
	{
	sp -= 1;
	LINE_NUMBER(1435);
	frame[1].o = sp[0].o;
	LINE_NUMBER(1436);
	throwException(ctx, (frame[1].o));	}
label_4:;
	{
	sp -= 1;
	LINE_NUMBER(1437);
	frame[1].o = sp[0].o;
	LINE_NUMBER(1438);
	clinit_java_lang_RuntimeException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_RuntimeException);
	init_java_lang_RuntimeException_java_lang_Throwable(ctx, sp[0].o, (frame[1].o));
	throwException(ctx, sp[0].o);	}

	popStackFrame(ctx);
}

void M_java_util_concurrent_ForkJoinTask$AdaptedCallable_run(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/concurrent/ForkJoinTask$AdaptedCallable:run", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(1441);
	sp[0].o = (jobject)((func_java_util_concurrent_ForkJoinTask$AdaptedCallable_invoke_R_java_lang_Object) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_util_concurrent_ForkJoinTask$AdaptedCallable_invoke_R_java_lang_Object])(ctx, (frame[0].o));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void *vtable_java_util_concurrent_ForkJoinTask$AdaptedCallable[] {
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
	(void *) M_java_util_concurrent_ForkJoinTask$AdaptedCallable_getRawResult_R_java_lang_Object,
	(void *) M_java_util_concurrent_ForkJoinTask$AdaptedCallable_setRawResult_java_lang_Object,
	(void *) M_java_util_concurrent_ForkJoinTask$AdaptedCallable_exec_R_boolean,
	(void *) M_java_util_concurrent_ForkJoinTask_getForkJoinTaskTag_R_short,
	(void *) M_java_util_concurrent_ForkJoinTask_setForkJoinTaskTag_short_R_short,
	(void *) M_java_util_concurrent_ForkJoinTask_compareAndSetForkJoinTaskTag_short_short_R_boolean,
	(void *) M_java_util_concurrent_ForkJoinTask_writeObject_java_io_ObjectOutputStream,
	(void *) M_java_util_concurrent_ForkJoinTask_readObject_java_io_ObjectInputStream,
	(void *) M_java_util_concurrent_ForkJoinTask$AdaptedCallable_run,
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
};

static jclass interfaces[] { &class_java_util_concurrent_RunnableFuture, };

static FieldMetadata fields[] {
	{ "callable", &class_java_util_concurrent_Callable, offsetof(java_util_concurrent_ForkJoinTask$AdaptedCallable, F_callable), "Ljava/util/concurrent/Callable;", 16 },
	{ "result", &class_java_lang_Object, offsetof(java_util_concurrent_ForkJoinTask$AdaptedCallable, F_result), "Ljava/lang/Object;", 0 },
	{ "serialVersionUID", &class_long, (intptr_t) &SF_java_util_concurrent_ForkJoinTask$AdaptedCallable_serialVersionUID, "J", 26 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_java_util_concurrent_ForkJoinTask$AdaptedCallable_java_util_concurrent_Callable, 0, "(Ljava/util/concurrent/Callable;)V", 0 },
	{ "getRawResult", (intptr_t) M_java_util_concurrent_ForkJoinTask$AdaptedCallable_getRawResult_R_java_lang_Object, VTABLE_java_util_concurrent_ForkJoinTask$AdaptedCallable_getRawResult_R_java_lang_Object, "()Ljava/lang/Object;", 17 },
	{ "setRawResult", (intptr_t) M_java_util_concurrent_ForkJoinTask$AdaptedCallable_setRawResult_java_lang_Object, VTABLE_java_util_concurrent_ForkJoinTask$AdaptedCallable_setRawResult_java_lang_Object, "(Ljava/lang/Object;)V", 17 },
	{ "exec", (intptr_t) M_java_util_concurrent_ForkJoinTask$AdaptedCallable_exec_R_boolean, VTABLE_java_util_concurrent_ForkJoinTask$AdaptedCallable_exec_R_boolean, "()Z", 17 },
	{ "run", (intptr_t) M_java_util_concurrent_ForkJoinTask$AdaptedCallable_run, VTABLE_java_util_concurrent_ForkJoinTask$AdaptedCallable_run, "()V", 17 },
};

Class class_java_util_concurrent_ForkJoinTask$AdaptedCallable{
		.nativeName = (intptr_t) "java/util/concurrent/ForkJoinTask$AdaptedCallable",
		.parentClass = (intptr_t) &class_java_util_concurrent_ForkJoinTask,
		.size = sizeof(java_util_concurrent_ForkJoinTask$AdaptedCallable),
		.classVtable = (intptr_t) vtable_java_util_concurrent_ForkJoinTask$AdaptedCallable,
		.staticInitializer = (intptr_t) clinit_java_util_concurrent_ForkJoinTask$AdaptedCallable,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_java_util_concurrent_ForkJoinTask$AdaptedCallable,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) &class_java_util_concurrent_ForkJoinTask,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 48,
		.interfaceCount = 1,
		.nativeInterfaces = (intptr_t) interfaces,
		.fieldCount = 3,
		.nativeFields = (intptr_t) fields,
		.methodCount = 5,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 51,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_java_util_concurrent_ForkJoinTask$AdaptedCallable = registerClass(&class_java_util_concurrent_ForkJoinTask$AdaptedCallable);

}

