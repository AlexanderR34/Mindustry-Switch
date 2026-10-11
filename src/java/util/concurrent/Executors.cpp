#include "java/util/concurrent/Executors.h"
#include "java/util/concurrent/LinkedBlockingQueue.h"
#include "java/lang/Object.h"
#include "java/util/concurrent/ExecutorService.h"
#include "java/util/concurrent/ThreadPoolExecutor.h"
#include "java/util/concurrent/Executors_RunnableAdapter.h"
#include "java/util/concurrent/TimeUnit.h"
#include "java/util/concurrent/ThreadFactory.h"
#include "java/lang/NullPointerException.h"
#include "java/util/concurrent/Executors_DefaultThreadFactory.h"
#include "java/util/concurrent/Callable.h"
#include "java/util/concurrent/BlockingQueue.h"
#include "java/lang/Runnable.h"

extern "C" {


void mark_java_util_concurrent_Executors(jobject object, jint mark, jint depth) {
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
	auto self = (java_util_concurrent_Executors *) object;
}

void clinit_java_util_concurrent_Executors(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
}

void init_java_util_concurrent_Executors(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/concurrent/Executors:<init>", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_util_concurrent_Executors(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(65);
	init_java_lang_Object(ctx, (frame[0].o));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject SM_java_util_concurrent_Executors_newFixedThreadPool_int_java_util_concurrent_ThreadFactory_R_java_util_concurrent_ExecutorService(jcontext ctx, jint param0, jobject param1) {
	jtype frame[11];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/concurrent/Executors:newFixedThreadPool", 11 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_util_concurrent_Executors(ctx);
	frame[0].i = param0;
	frame[1].o = param1;
	{
	LINE_NUMBER(127);
	clinit_java_util_concurrent_ThreadPoolExecutor(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_util_concurrent_ThreadPoolExecutor);
	jint temp0 = frame[0].i;
	jint temp1 = frame[0].i;
	jlong temp2 = jlong(0);
	clinit_java_util_concurrent_TimeUnit(ctx);
	sp[1].o = (jobject)SF_java_util_concurrent_TimeUnit_MILLISECONDS;
	clinit_java_util_concurrent_LinkedBlockingQueue(ctx);
	sp[2].o = gcAlloc(ctx, &class_java_util_concurrent_LinkedBlockingQueue);
	init_java_util_concurrent_LinkedBlockingQueue(ctx, sp[2].o);
	init_java_util_concurrent_ThreadPoolExecutor_int_int_long_java_util_concurrent_TimeUnit_java_util_concurrent_BlockingQueue_java_util_concurrent_ThreadFactory(ctx, sp[0].o, temp0, temp1, temp2, sp[1].o, sp[2].o, (frame[1].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject SM_java_util_concurrent_Executors_newSingleThreadExecutor_java_util_concurrent_ThreadFactory_R_java_util_concurrent_ExecutorService(jcontext ctx, jobject param0) {
	jtype frame[10];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/concurrent/Executors:newSingleThreadExecutor", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_util_concurrent_Executors(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(165);
	clinit_java_util_concurrent_ThreadPoolExecutor(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_util_concurrent_ThreadPoolExecutor);
	jint temp0 = jint(1);
	jint temp1 = jint(1);
	jlong temp2 = jlong(0);
	clinit_java_util_concurrent_TimeUnit(ctx);
	sp[1].o = (jobject)SF_java_util_concurrent_TimeUnit_MILLISECONDS;
	clinit_java_util_concurrent_LinkedBlockingQueue(ctx);
	sp[2].o = gcAlloc(ctx, &class_java_util_concurrent_LinkedBlockingQueue);
	init_java_util_concurrent_LinkedBlockingQueue(ctx, sp[2].o);
	init_java_util_concurrent_ThreadPoolExecutor_int_int_long_java_util_concurrent_TimeUnit_java_util_concurrent_BlockingQueue_java_util_concurrent_ThreadFactory(ctx, sp[0].o, temp0, temp1, temp2, sp[1].o, sp[2].o, (frame[0].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject SM_java_util_concurrent_Executors_defaultThreadFactory_R_java_util_concurrent_ThreadFactory(jcontext ctx) {
	jtype frame[2];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/concurrent/Executors:defaultThreadFactory", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_util_concurrent_Executors(ctx);
	{
	LINE_NUMBER(322);
	clinit_java_util_concurrent_Executors$DefaultThreadFactory(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_util_concurrent_Executors$DefaultThreadFactory);
	init_java_util_concurrent_Executors$DefaultThreadFactory(ctx, sp[0].o);
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject SM_java_util_concurrent_Executors_callable_java_lang_Runnable_java_lang_Object_R_java_util_concurrent_Callable(jcontext ctx, jobject param0, jobject param1) {
	jtype frame[6];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/concurrent/Executors:callable", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_util_concurrent_Executors(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	{
	LINE_NUMBER(372);
	if ((frame[0].o) != nullptr) goto label_1;
	}
	{
	LINE_NUMBER(373);
	clinit_java_lang_NullPointerException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_NullPointerException);
	init_java_lang_NullPointerException(ctx, sp[0].o);
	throwException(ctx, sp[0].o);	}
label_1:;
	{
	LINE_NUMBER(374);
	clinit_java_util_concurrent_Executors$RunnableAdapter(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_util_concurrent_Executors$RunnableAdapter);
	init_java_util_concurrent_Executors$RunnableAdapter_java_lang_Runnable_java_lang_Object(ctx, sp[0].o, (frame[0].o), (frame[1].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void *vtable_java_util_concurrent_Executors[] {
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
};

static jclass innerClasses[] {
	&class_java_util_concurrent_Executors$DefaultThreadFactory,
	&class_java_util_concurrent_Executors$RunnableAdapter,
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_java_util_concurrent_Executors, 0, "()V", 1 },
	{ "newFixedThreadPool", (intptr_t) SM_java_util_concurrent_Executors_newFixedThreadPool_int_java_util_concurrent_ThreadFactory_R_java_util_concurrent_ExecutorService, 0, "(ILjava/util/concurrent/ThreadFactory;)Ljava/util/concurrent/ExecutorService;", 9 },
	{ "newSingleThreadExecutor", (intptr_t) SM_java_util_concurrent_Executors_newSingleThreadExecutor_java_util_concurrent_ThreadFactory_R_java_util_concurrent_ExecutorService, 0, "(Ljava/util/concurrent/ThreadFactory;)Ljava/util/concurrent/ExecutorService;", 9 },
	{ "defaultThreadFactory", (intptr_t) SM_java_util_concurrent_Executors_defaultThreadFactory_R_java_util_concurrent_ThreadFactory, 0, "()Ljava/util/concurrent/ThreadFactory;", 9 },
	{ "callable", (intptr_t) SM_java_util_concurrent_Executors_callable_java_lang_Runnable_java_lang_Object_R_java_util_concurrent_Callable, 0, "(Ljava/lang/Runnable;Ljava/lang/Object;)Ljava/util/concurrent/Callable;", 9 },
};

Class class_java_util_concurrent_Executors{
		.nativeName = (intptr_t) "java/util/concurrent/Executors",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(java_util_concurrent_Executors),
		.classVtable = (intptr_t) vtable_java_util_concurrent_Executors,
		.staticInitializer = (intptr_t) clinit_java_util_concurrent_Executors,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_java_util_concurrent_Executors,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 2,
		.nativeInnerClasses = (intptr_t) innerClasses,
		.access = 33,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 0,
		.nativeFields = (intptr_t) nullptr,
		.methodCount = 5,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 11,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_java_util_concurrent_Executors = registerClass(&class_java_util_concurrent_Executors);

}
