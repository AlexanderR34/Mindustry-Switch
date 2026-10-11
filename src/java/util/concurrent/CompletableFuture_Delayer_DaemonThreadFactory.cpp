#include "java/util/concurrent/CompletableFuture_Delayer_DaemonThreadFactory.h"
#include "java/lang/Object.h"
#include "java/lang/String.h"
#include "java/util/concurrent/ThreadFactory.h"
#include "java/util/concurrent/CompletableFuture_Delayer.h"
#include "java/util/concurrent/CompletableFuture_Delayer_DaemonThreadFactory.h"
#include "java/lang/Thread.h"
#include "java/lang/Runnable.h"

extern "C" {


void mark_java_util_concurrent_CompletableFuture$Delayer$DaemonThreadFactory(jobject object, jint mark, jint depth) {
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
	auto self = (java_util_concurrent_CompletableFuture$Delayer$DaemonThreadFactory *) object;
}

void clinit_java_util_concurrent_CompletableFuture$Delayer$DaemonThreadFactory(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
}

void init_java_util_concurrent_CompletableFuture$Delayer$DaemonThreadFactory(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/concurrent/CompletableFuture$Delayer$DaemonThreadFactory:<init>", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_util_concurrent_CompletableFuture$Delayer$DaemonThreadFactory(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(2773);
	init_java_lang_Object(ctx, (frame[0].o));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_java_util_concurrent_CompletableFuture$Delayer$DaemonThreadFactory_newThread_java_lang_Runnable_R_java_lang_Thread(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/concurrent/CompletableFuture$Delayer$DaemonThreadFactory:newThread", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(2775);
	clinit_java_lang_Thread(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_Thread);
	init_java_lang_Thread_java_lang_Runnable(ctx, sp[0].o, (frame[1].o));
	frame[2].o = sp[0].o;
	LINE_NUMBER(2776);
	((func_java_lang_Thread_setDaemon_boolean) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_java_lang_Thread_setDaemon_boolean])(ctx, (frame[2].o), (jint(1)));
	LINE_NUMBER(2777);
	((func_java_lang_Thread_setName_java_lang_String) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_java_lang_Thread_setName_java_lang_String])(ctx, (frame[2].o), (((jobject) createStringLiteral(ctx, u8"CompletableFutureDelayScheduler"_j))));
	LINE_NUMBER(2778);
	popStackFrame(ctx);
	return (frame[2].o);
	}

	popStackFrame(ctx);
}

void *vtable_java_util_concurrent_CompletableFuture$Delayer$DaemonThreadFactory[] {
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
	(void *) M_java_util_concurrent_CompletableFuture$Delayer$DaemonThreadFactory_newThread_java_lang_Runnable_R_java_lang_Thread,
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
	{ "newThread", "(Ljava/lang/Runnable;)Ljava/lang/Thread;" },
};

static jclass interfaces[] { &class_java_util_concurrent_ThreadFactory, };

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_java_util_concurrent_CompletableFuture$Delayer$DaemonThreadFactory, 0, "()V", 0 },
	{ "newThread", (intptr_t) M_java_util_concurrent_CompletableFuture$Delayer$DaemonThreadFactory_newThread_java_lang_Runnable_R_java_lang_Thread, VTABLE_java_util_concurrent_CompletableFuture$Delayer$DaemonThreadFactory_newThread_java_lang_Runnable_R_java_lang_Thread, "(Ljava/lang/Runnable;)Ljava/lang/Thread;", 1 },
};

Class class_java_util_concurrent_CompletableFuture$Delayer$DaemonThreadFactory{
		.nativeName = (intptr_t) "java/util/concurrent/CompletableFuture$Delayer$DaemonThreadFactory",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(java_util_concurrent_CompletableFuture$Delayer$DaemonThreadFactory),
		.classVtable = (intptr_t) vtable_java_util_concurrent_CompletableFuture$Delayer$DaemonThreadFactory,
		.staticInitializer = (intptr_t) clinit_java_util_concurrent_CompletableFuture$Delayer$DaemonThreadFactory,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_java_util_concurrent_CompletableFuture$Delayer$DaemonThreadFactory,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) &class_java_util_concurrent_CompletableFuture$Delayer,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 48,
		.interfaceCount = 1,
		.nativeInterfaces = (intptr_t) interfaces,
		.fieldCount = 0,
		.nativeFields = (intptr_t) nullptr,
		.methodCount = 2,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 12,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_java_util_concurrent_CompletableFuture$Delayer$DaemonThreadFactory = registerClass(&class_java_util_concurrent_CompletableFuture$Delayer$DaemonThreadFactory);

}

