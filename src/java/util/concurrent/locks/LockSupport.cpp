#include "java/util/concurrent/locks/LockSupport.h"
#include "java/lang/Object.h"
#include "java/lang/NullPointerException.h"
#include "java/lang/Thread.h"
#include "java/util/concurrent/locks/LockSupport.h"

extern "C" {


void mark_java_util_concurrent_locks_LockSupport(jobject object, jint mark, jint depth) {
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
	auto self = (java_util_concurrent_locks_LockSupport *) object;
}

void clinit_java_util_concurrent_locks_LockSupport(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
}

void init_java_util_concurrent_locks_LockSupport(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/concurrent/locks/LockSupport:<init>", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_util_concurrent_locks_LockSupport(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(120);
	init_java_lang_Object(ctx, (frame[0].o));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_java_util_concurrent_locks_LockSupport_setBlocker_java_lang_Thread_java_lang_Object(jcontext ctx, jobject param0, jobject param1) {
	jtype frame[2];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/concurrent/locks/LockSupport:setBlocker", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_util_concurrent_locks_LockSupport(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	LINE_NUMBER(125);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void SM_java_util_concurrent_locks_LockSupport_unpark_java_lang_Thread(jcontext ctx, jobject param0) {
	if (!param0) return;
	auto targetThread = (jthread) param0;
	auto targetCtx = (jcontext) targetThread->F_nativeContext;
	if (!targetCtx) return;
	{
		std::lock_guard<std::mutex> lock(targetCtx->parkMutex);
		targetCtx->parkPermit = true;
	}
	targetCtx->parkCond.notify_one();
}

void SM_java_util_concurrent_locks_LockSupport_park_java_lang_Object(jcontext ctx, jobject param0) {
	{
		std::unique_lock<std::mutex> lock(ctx->parkMutex);
		if (ctx->parkPermit.exchange(false)) {
			return;
		}
		ctx->suspended = true;
		ctx->parkCond.wait(lock, [&]{ return ctx->parkPermit.load() || (ctx->thread && ctx->thread->F_interrupted); });
		ctx->parkPermit = false;
		ctx->suspended = false;
	}
	SAFEPOINT();
}

void SM_java_util_concurrent_locks_LockSupport_parkNanos_java_lang_Object_long(jcontext ctx, jobject param0, jlong param1) {
	if (param1 <= 0) return;
	{
		std::unique_lock<std::mutex> lock(ctx->parkMutex);
		if (ctx->parkPermit.exchange(false)) {
			return;
		}
		ctx->suspended = true;
		ctx->parkCond.wait_for(lock, std::chrono::nanoseconds(param1), [&]{ return ctx->parkPermit.load() || (ctx->thread && ctx->thread->F_interrupted); });
		ctx->parkPermit = false;
		ctx->suspended = false;
	}
	SAFEPOINT();
}

void SM_java_util_concurrent_locks_LockSupport_parkUntil_java_lang_Object_long(jcontext ctx, jobject param0, jlong param1) {
	auto now = std::chrono::duration_cast<std::chrono::milliseconds>(std::chrono::system_clock::now().time_since_epoch()).count();
	if (param1 <= now) return;
	auto duration = std::chrono::milliseconds(param1 - now);
	{
		std::unique_lock<std::mutex> lock(ctx->parkMutex);
		if (ctx->parkPermit.exchange(false)) {
			return;
		}
		ctx->suspended = true;
		ctx->parkCond.wait_for(lock, duration, [&]{ return ctx->parkPermit.load() || (ctx->thread && ctx->thread->F_interrupted); });
		ctx->parkPermit = false;
		ctx->suspended = false;
	}
	SAFEPOINT();
}

jobject SM_java_util_concurrent_locks_LockSupport_getBlocker_java_lang_Thread_R_java_lang_Object(jcontext ctx, jobject param0) {
	if (!param0) {
		clinit_java_lang_NullPointerException(ctx);
		auto ex = gcAlloc(ctx, &class_java_lang_NullPointerException);
		init_java_lang_NullPointerException(ctx, ex);
		throwException(ctx, ex);
	}
	return nullptr;
}

void SM_java_util_concurrent_locks_LockSupport_park(jcontext ctx) {
	SM_java_util_concurrent_locks_LockSupport_park_java_lang_Object(ctx, nullptr);
}

void SM_java_util_concurrent_locks_LockSupport_parkNanos_long(jcontext ctx, jlong param0) {
	SM_java_util_concurrent_locks_LockSupport_parkNanos_java_lang_Object_long(ctx, nullptr, param0);
}

void SM_java_util_concurrent_locks_LockSupport_parkUntil_long(jcontext ctx, jlong param0) {
	SM_java_util_concurrent_locks_LockSupport_parkUntil_java_lang_Object_long(ctx, nullptr, param0);
}

jlong SM_java_util_concurrent_locks_LockSupport_getThreadId_java_lang_Thread_R_long(jcontext ctx, jobject param0) {
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/concurrent/locks/LockSupport:getThreadId", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_util_concurrent_locks_LockSupport(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(376);
	popStackFrame(ctx);
	return (jlong(0));
	}

	popStackFrame(ctx);
}

jint SM_java_util_concurrent_locks_LockSupport_nextSecondarySeed_R_int(jcontext ctx) {
	jtype frame[1];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/concurrent/locks/LockSupport:nextSecondarySeed", 1 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_util_concurrent_locks_LockSupport(ctx);
	{
	LINE_NUMBER(395);
	popStackFrame(ctx);
	return (jint(0));
	}

	popStackFrame(ctx);
}

void *vtable_java_util_concurrent_locks_LockSupport[] {
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

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_java_util_concurrent_locks_LockSupport, 0, "()V", 2 },
	{ "setBlocker", (intptr_t) SM_java_util_concurrent_locks_LockSupport_setBlocker_java_lang_Thread_java_lang_Object, 0, "(Ljava/lang/Thread;Ljava/lang/Object;)V", 10 },
	{ "unpark", (intptr_t) SM_java_util_concurrent_locks_LockSupport_unpark_java_lang_Thread, 0, "(Ljava/lang/Thread;)V", 9 },
	{ "park", (intptr_t) SM_java_util_concurrent_locks_LockSupport_park_java_lang_Object, 0, "(Ljava/lang/Object;)V", 9 },
	{ "parkNanos", (intptr_t) SM_java_util_concurrent_locks_LockSupport_parkNanos_java_lang_Object_long, 0, "(Ljava/lang/Object;J)V", 9 },
	{ "parkUntil", (intptr_t) SM_java_util_concurrent_locks_LockSupport_parkUntil_java_lang_Object_long, 0, "(Ljava/lang/Object;J)V", 9 },
	{ "getBlocker", (intptr_t) SM_java_util_concurrent_locks_LockSupport_getBlocker_java_lang_Thread_R_java_lang_Object, 0, "(Ljava/lang/Thread;)Ljava/lang/Object;", 9 },
	{ "park", (intptr_t) SM_java_util_concurrent_locks_LockSupport_park, 0, "()V", 9 },
	{ "parkNanos", (intptr_t) SM_java_util_concurrent_locks_LockSupport_parkNanos_long, 0, "(J)V", 9 },
	{ "parkUntil", (intptr_t) SM_java_util_concurrent_locks_LockSupport_parkUntil_long, 0, "(J)V", 9 },
	{ "getThreadId", (intptr_t) SM_java_util_concurrent_locks_LockSupport_getThreadId_java_lang_Thread_R_long, 0, "(Ljava/lang/Thread;)J", 24 },
	{ "nextSecondarySeed", (intptr_t) SM_java_util_concurrent_locks_LockSupport_nextSecondarySeed_R_int, 0, "()I", 24 },
};

Class class_java_util_concurrent_locks_LockSupport{
		.nativeName = (intptr_t) "java/util/concurrent/locks/LockSupport",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(java_util_concurrent_locks_LockSupport),
		.classVtable = (intptr_t) vtable_java_util_concurrent_locks_LockSupport,
		.staticInitializer = (intptr_t) clinit_java_util_concurrent_locks_LockSupport,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_java_util_concurrent_locks_LockSupport,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 33,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 0,
		.nativeFields = (intptr_t) nullptr,
		.methodCount = 12,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 11,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_java_util_concurrent_locks_LockSupport = registerClass(&class_java_util_concurrent_locks_LockSupport);

}
