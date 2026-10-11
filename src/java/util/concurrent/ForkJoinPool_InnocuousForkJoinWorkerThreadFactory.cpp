#include "java/util/concurrent/ForkJoinPool_InnocuousForkJoinWorkerThreadFactory.h"
#include "java/util/concurrent/ForkJoinWorkerThread.h"
#include "java/util/concurrent/ForkJoinPool_InnocuousForkJoinWorkerThreadFactory.h"
#include "java/lang/Object.h"
#include "java/util/concurrent/ForkJoinWorkerThread_InnocuousForkJoinWorkerThread.h"
#include "java/util/concurrent/ForkJoinPool_ForkJoinWorkerThreadFactory.h"
#include "java/util/concurrent/ForkJoinPool.h"

extern "C" {


void mark_java_util_concurrent_ForkJoinPool$InnocuousForkJoinWorkerThreadFactory(jobject object, jint mark, jint depth) {
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
	auto self = (java_util_concurrent_ForkJoinPool$InnocuousForkJoinWorkerThreadFactory *) object;
}

void clinit_java_util_concurrent_ForkJoinPool$InnocuousForkJoinWorkerThreadFactory(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
}

void init_java_util_concurrent_ForkJoinPool$InnocuousForkJoinWorkerThreadFactory(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/concurrent/ForkJoinPool$InnocuousForkJoinWorkerThreadFactory:<init>", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_util_concurrent_ForkJoinPool$InnocuousForkJoinWorkerThreadFactory(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(3228);
	init_java_lang_Object(ctx, (frame[0].o));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_java_util_concurrent_ForkJoinPool$InnocuousForkJoinWorkerThreadFactory_newThread_java_util_concurrent_ForkJoinPool_R_java_util_concurrent_ForkJoinWorkerThread(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/concurrent/ForkJoinPool$InnocuousForkJoinWorkerThreadFactory:newThread", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(3232);
	clinit_java_util_concurrent_ForkJoinWorkerThread$InnocuousForkJoinWorkerThread(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_util_concurrent_ForkJoinWorkerThread$InnocuousForkJoinWorkerThread);
	init_java_util_concurrent_ForkJoinWorkerThread$InnocuousForkJoinWorkerThread_java_util_concurrent_ForkJoinPool(ctx, sp[0].o, (frame[1].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void *vtable_java_util_concurrent_ForkJoinPool$InnocuousForkJoinWorkerThreadFactory[] {
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
	(void *) M_java_util_concurrent_ForkJoinPool$InnocuousForkJoinWorkerThreadFactory_newThread_java_util_concurrent_ForkJoinPool_R_java_util_concurrent_ForkJoinWorkerThread,
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
	{ "newThread", "(Ljava/util/concurrent/ForkJoinPool;)Ljava/util/concurrent/ForkJoinWorkerThread;" },
};

static jclass interfaces[] { &class_java_util_concurrent_ForkJoinPool$ForkJoinWorkerThreadFactory, };

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_java_util_concurrent_ForkJoinPool$InnocuousForkJoinWorkerThreadFactory, 0, "()V", 2 },
	{ "newThread", (intptr_t) M_java_util_concurrent_ForkJoinPool$InnocuousForkJoinWorkerThreadFactory_newThread_java_util_concurrent_ForkJoinPool_R_java_util_concurrent_ForkJoinWorkerThread, VTABLE_java_util_concurrent_ForkJoinPool$InnocuousForkJoinWorkerThreadFactory_newThread_java_util_concurrent_ForkJoinPool_R_java_util_concurrent_ForkJoinWorkerThread, "(Ljava/util/concurrent/ForkJoinPool;)Ljava/util/concurrent/ForkJoinWorkerThread;", 17 },
};

Class class_java_util_concurrent_ForkJoinPool$InnocuousForkJoinWorkerThreadFactory{
		.nativeName = (intptr_t) "java/util/concurrent/ForkJoinPool$InnocuousForkJoinWorkerThreadFactory",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(java_util_concurrent_ForkJoinPool$InnocuousForkJoinWorkerThreadFactory),
		.classVtable = (intptr_t) vtable_java_util_concurrent_ForkJoinPool$InnocuousForkJoinWorkerThreadFactory,
		.staticInitializer = (intptr_t) clinit_java_util_concurrent_ForkJoinPool$InnocuousForkJoinWorkerThreadFactory,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_java_util_concurrent_ForkJoinPool$InnocuousForkJoinWorkerThreadFactory,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) &class_java_util_concurrent_ForkJoinPool,
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
static bool registered_java_util_concurrent_ForkJoinPool$InnocuousForkJoinWorkerThreadFactory = registerClass(&class_java_util_concurrent_ForkJoinPool$InnocuousForkJoinWorkerThreadFactory);

}

