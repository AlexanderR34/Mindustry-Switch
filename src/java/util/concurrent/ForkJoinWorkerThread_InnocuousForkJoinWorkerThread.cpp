#include "java/util/concurrent/ForkJoinWorkerThread_InnocuousForkJoinWorkerThread.h"
#include "java/util/concurrent/ForkJoinWorkerThread.h"
#include "java/lang/Object.h"
#include "java/lang/String.h"
#include "java/util/concurrent/ForkJoinWorkerThread_InnocuousForkJoinWorkerThread.h"
#include "java/lang/ThreadGroup.h"
#include "java/lang/Thread_UncaughtExceptionHandler.h"
#include "java/util/concurrent/ForkJoinPool.h"
#include "java/lang/ClassLoader.h"
#include "java/lang/SecurityException.h"
#include "java/lang/Thread.h"

extern "C" {

jobject SF_java_util_concurrent_ForkJoinWorkerThread$InnocuousForkJoinWorkerThread_innocuousThreadGroup;

void mark_java_util_concurrent_ForkJoinWorkerThread$InnocuousForkJoinWorkerThread(jobject object, jint mark, jint depth) {
	if (!object) {
		if (SF_java_util_concurrent_ForkJoinWorkerThread$InnocuousForkJoinWorkerThread_innocuousThreadGroup)
			((gc_mark_ptr) ((jclass) ((jobject) SF_java_util_concurrent_ForkJoinWorkerThread$InnocuousForkJoinWorkerThread_innocuousThreadGroup)->clazz)->markFunction)((jobject) SF_java_util_concurrent_ForkJoinWorkerThread$InnocuousForkJoinWorkerThread_innocuousThreadGroup, mark, depth + 1);
		return;
	}
	if (depth > GC_DEPTH_ALWAYS && (object->gcMark < GC_MARK_START || object->gcMark == mark))
		return;
	if (depth > MAX_GC_MARK_DEPTH) {
		markDeepObject(object);
		return;
	}
	mark_java_util_concurrent_ForkJoinWorkerThread(object, mark, depth);
	if (object->gcMark >= GC_MARK_START)
		object->gcMark = mark;
	auto self = (java_util_concurrent_ForkJoinWorkerThread$InnocuousForkJoinWorkerThread *) object;
}

void init_java_util_concurrent_ForkJoinWorkerThread$InnocuousForkJoinWorkerThread_java_util_concurrent_ForkJoinPool(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/concurrent/ForkJoinWorkerThread$InnocuousForkJoinWorkerThread:<init>", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_util_concurrent_ForkJoinWorkerThread$InnocuousForkJoinWorkerThread(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(209);
	sp[0].o = frame[0].o;
	sp[1].o = frame[1].o;
	LINE_NUMBER(210);
	sp[2].o = (jobject)SM_java_lang_ClassLoader_getSystemClassLoader_R_java_lang_ClassLoader(ctx);
	clinit_java_util_concurrent_ForkJoinWorkerThread$InnocuousForkJoinWorkerThread(ctx);
	sp[3].o = (jobject)SF_java_util_concurrent_ForkJoinWorkerThread$InnocuousForkJoinWorkerThread_innocuousThreadGroup;
	LINE_NUMBER(209);
	init_java_util_concurrent_ForkJoinWorkerThread_java_util_concurrent_ForkJoinPool_java_lang_ClassLoader_java_lang_ThreadGroup(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o);
	LINE_NUMBER(212);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_java_util_concurrent_ForkJoinWorkerThread$InnocuousForkJoinWorkerThread_afterTopLevelExec(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[1];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/concurrent/ForkJoinWorkerThread$InnocuousForkJoinWorkerThread:afterTopLevelExec", 1 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	LINE_NUMBER(217);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_java_util_concurrent_ForkJoinWorkerThread$InnocuousForkJoinWorkerThread_setUncaughtExceptionHandler_java_lang_Thread$UncaughtExceptionHandler(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/concurrent/ForkJoinWorkerThread$InnocuousForkJoinWorkerThread:setUncaughtExceptionHandler", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	LINE_NUMBER(220);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_java_util_concurrent_ForkJoinWorkerThread$InnocuousForkJoinWorkerThread_setContextClassLoader_java_lang_ClassLoader(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/concurrent/ForkJoinWorkerThread$InnocuousForkJoinWorkerThread:setContextClassLoader", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(224);
	clinit_java_lang_SecurityException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_SecurityException);
	init_java_lang_SecurityException_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"setContextClassLoader"_j))));
	throwException(ctx, sp[0].o);	}

	popStackFrame(ctx);
}

void clinit_java_util_concurrent_ForkJoinWorkerThread$InnocuousForkJoinWorkerThread(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	clinit_java_util_concurrent_ForkJoinWorkerThread(ctx);
	jtype frame[6];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/concurrent/ForkJoinWorkerThread$InnocuousForkJoinWorkerThread:<clinit>", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_util_concurrent_ForkJoinWorkerThread$InnocuousForkJoinWorkerThread(ctx);
	{
	LINE_NUMBER(202);
	sp[0].o = (jobject)SM_java_lang_Thread_currentThread_R_java_lang_Thread(ctx);
	sp[0].o = (jobject)((func_java_lang_Thread_getThreadGroup_R_java_lang_ThreadGroup) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_Thread_getThreadGroup_R_java_lang_ThreadGroup])(ctx, sp[0].o);
	frame[0].o = sp[0].o;
	}
label_1:;
	{
	LINE_NUMBER(203);
	sp[0].o = (jobject)((func_java_lang_ThreadGroup_getParent_R_java_lang_ThreadGroup) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_lang_ThreadGroup_getParent_R_java_lang_ThreadGroup])(ctx, (frame[0].o));
	frame[1].o = sp[0].o;
	if (sp[0].o == nullptr) goto label_3;
	}
	{
	LINE_NUMBER(204);
	frame[0].o = (frame[1].o);
	goto label_1;
	}
label_3:;
	{
	LINE_NUMBER(205);
	clinit_java_lang_ThreadGroup(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_ThreadGroup);
	init_java_lang_ThreadGroup_java_lang_ThreadGroup_java_lang_String(ctx, sp[0].o, (frame[0].o), (((jobject) createStringLiteral(ctx, u8"InnocuousForkJoinWorkerThreadGroup"_j))));
	clinit_java_util_concurrent_ForkJoinWorkerThread$InnocuousForkJoinWorkerThread(ctx);
	SF_java_util_concurrent_ForkJoinWorkerThread$InnocuousForkJoinWorkerThread_innocuousThreadGroup = sp[0].o;
	LINE_NUMBER(206);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void *vtable_java_util_concurrent_ForkJoinWorkerThread$InnocuousForkJoinWorkerThread[] {
	(void *) M_java_lang_Object_hashCode_R_int,
	(void *) M_java_lang_Object_equals_java_lang_Object_R_boolean,
	(void *) M_java_lang_Object_clone_R_java_lang_Object,
	(void *) M_java_lang_Object_getClass_R_java_lang_Class,
	(void *) M_java_lang_Thread_toString_R_java_lang_String,
	(void *) M_java_lang_Thread_finalize,
	(void *) M_java_lang_Object_notify,
	(void *) M_java_lang_Object_notifyAll,
	(void *) M_java_lang_Object_wait,
	(void *) M_java_lang_Object_wait_long,
	(void *) M_java_lang_Object_wait_long_int,
	(void *) M_java_util_concurrent_ForkJoinWorkerThread_run,
	(void *) M_java_lang_Thread_getId_R_long,
	(void *) M_java_lang_Thread_getName_R_java_lang_String,
	(void *) M_java_lang_Thread_setName_java_lang_String,
	(void *) M_java_lang_Thread_getPriority_R_int,
	(void *) M_java_lang_Thread_interrupt,
	(void *) M_java_lang_Thread_isAlive_R_boolean,
	(void *) M_java_lang_Thread_isInterrupted_R_boolean,
	(void *) M_java_lang_Thread_isDaemon_R_boolean,
	(void *) M_java_lang_Thread_setDaemon_boolean,
	(void *) M_java_lang_Thread_join,
	(void *) M_java_lang_Thread_join_long,
	(void *) M_java_lang_Thread_join_long_int,
	(void *) M_java_lang_Thread_setPriority_int,
	(void *) M_java_lang_Thread_start,
	(void *) M_java_lang_Thread_stop,
	(void *) M_java_lang_Thread_suspend,
	(void *) M_java_lang_Thread_resume,
	(void *) M_java_lang_Thread_getStackTrace_R_Array1_java_lang_StackTraceElement,
	(void *) M_java_util_concurrent_ForkJoinWorkerThread$InnocuousForkJoinWorkerThread_setContextClassLoader_java_lang_ClassLoader,
	(void *) M_java_lang_Thread_getContextClassLoader_R_java_lang_ClassLoader,
	(void *) M_java_util_concurrent_ForkJoinWorkerThread$InnocuousForkJoinWorkerThread_setUncaughtExceptionHandler_java_lang_Thread$UncaughtExceptionHandler,
	(void *) M_java_lang_Thread_getUncaughtExceptionHandler_R_java_lang_Thread$UncaughtExceptionHandler,
	(void *) M_java_lang_Thread_getState_R_java_lang_Thread$State,
	(void *) M_java_lang_Thread_getThreadGroup_R_java_lang_ThreadGroup,
	(void *) M_java_util_concurrent_ForkJoinWorkerThread_getPool_R_java_util_concurrent_ForkJoinPool,
	(void *) M_java_util_concurrent_ForkJoinWorkerThread_getPoolIndex_R_int,
	(void *) M_java_util_concurrent_ForkJoinWorkerThread_onStart,
	(void *) M_java_util_concurrent_ForkJoinWorkerThread_onTermination_java_lang_Throwable,
	(void *) M_java_util_concurrent_ForkJoinWorkerThread$InnocuousForkJoinWorkerThread_afterTopLevelExec,
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
	{ "getId", "()J" },
	{ "getName", "()Ljava/lang/String;" },
	{ "setName", "(Ljava/lang/String;)V" },
	{ "getPriority", "()I" },
	{ "interrupt", "()V" },
	{ "isAlive", "()Z" },
	{ "isInterrupted", "()Z" },
	{ "isDaemon", "()Z" },
	{ "setDaemon", "(Z)V" },
	{ "join", "()V" },
	{ "join", "(J)V" },
	{ "join", "(JI)V" },
	{ "setPriority", "(I)V" },
	{ "start", "()V" },
	{ "stop", "()V" },
	{ "suspend", "()V" },
	{ "resume", "()V" },
	{ "getStackTrace", "()[Ljava/lang/StackTraceElement;" },
	{ "setContextClassLoader", "(Ljava/lang/ClassLoader;)V" },
	{ "getContextClassLoader", "()Ljava/lang/ClassLoader;" },
	{ "setUncaughtExceptionHandler", "(Ljava/lang/Thread$UncaughtExceptionHandler;)V" },
	{ "getUncaughtExceptionHandler", "()Ljava/lang/Thread$UncaughtExceptionHandler;" },
	{ "getState", "()Ljava/lang/Thread$State;" },
	{ "getThreadGroup", "()Ljava/lang/ThreadGroup;" },
	{ "getPool", "()Ljava/util/concurrent/ForkJoinPool;" },
	{ "getPoolIndex", "()I" },
	{ "onStart", "()V" },
	{ "onTermination", "(Ljava/lang/Throwable;)V" },
	{ "afterTopLevelExec", "()V" },
};

static FieldMetadata fields[] {
	{ "innocuousThreadGroup", &class_java_lang_ThreadGroup, (intptr_t) &SF_java_util_concurrent_ForkJoinWorkerThread$InnocuousForkJoinWorkerThread_innocuousThreadGroup, "Ljava/lang/ThreadGroup;", 26 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_java_util_concurrent_ForkJoinWorkerThread$InnocuousForkJoinWorkerThread_java_util_concurrent_ForkJoinPool, 0, "(Ljava/util/concurrent/ForkJoinPool;)V", 0 },
	{ "afterTopLevelExec", (intptr_t) M_java_util_concurrent_ForkJoinWorkerThread$InnocuousForkJoinWorkerThread_afterTopLevelExec, VTABLE_java_util_concurrent_ForkJoinWorkerThread$InnocuousForkJoinWorkerThread_afterTopLevelExec, "()V", 0 },
	{ "setUncaughtExceptionHandler", (intptr_t) M_java_util_concurrent_ForkJoinWorkerThread$InnocuousForkJoinWorkerThread_setUncaughtExceptionHandler_java_lang_Thread$UncaughtExceptionHandler, VTABLE_java_util_concurrent_ForkJoinWorkerThread$InnocuousForkJoinWorkerThread_setUncaughtExceptionHandler_java_lang_Thread$UncaughtExceptionHandler, "(Ljava/lang/Thread$UncaughtExceptionHandler;)V", 1 },
	{ "setContextClassLoader", (intptr_t) M_java_util_concurrent_ForkJoinWorkerThread$InnocuousForkJoinWorkerThread_setContextClassLoader_java_lang_ClassLoader, VTABLE_java_util_concurrent_ForkJoinWorkerThread$InnocuousForkJoinWorkerThread_setContextClassLoader_java_lang_ClassLoader, "(Ljava/lang/ClassLoader;)V", 1 },
	{ "<clinit>", (intptr_t) clinit_java_util_concurrent_ForkJoinWorkerThread$InnocuousForkJoinWorkerThread, 0, "()V", 8 },
};

Class class_java_util_concurrent_ForkJoinWorkerThread$InnocuousForkJoinWorkerThread{
		.nativeName = (intptr_t) "java/util/concurrent/ForkJoinWorkerThread$InnocuousForkJoinWorkerThread",
		.parentClass = (intptr_t) &class_java_util_concurrent_ForkJoinWorkerThread,
		.size = sizeof(java_util_concurrent_ForkJoinWorkerThread$InnocuousForkJoinWorkerThread),
		.classVtable = (intptr_t) vtable_java_util_concurrent_ForkJoinWorkerThread$InnocuousForkJoinWorkerThread,
		.staticInitializer = (intptr_t) clinit_java_util_concurrent_ForkJoinWorkerThread$InnocuousForkJoinWorkerThread,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_java_util_concurrent_ForkJoinWorkerThread$InnocuousForkJoinWorkerThread,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) &class_java_util_concurrent_ForkJoinWorkerThread,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 48,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 1,
		.nativeFields = (intptr_t) fields,
		.methodCount = 5,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 41,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_java_util_concurrent_ForkJoinWorkerThread$InnocuousForkJoinWorkerThread = registerClass(&class_java_util_concurrent_ForkJoinWorkerThread$InnocuousForkJoinWorkerThread);

}

