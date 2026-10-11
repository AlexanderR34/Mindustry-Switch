#include "java/util/concurrent/CompletableFuture_DelayedExecutor.h"
#include "java/lang/Object.h"
#include "java/util/concurrent/CompletableFuture_TaskSubmitter.h"
#include "java/util/concurrent/ScheduledFuture.h"
#include "java/util/concurrent/TimeUnit.h"
#include "java/util/concurrent/CompletableFuture.h"
#include "java/util/concurrent/CompletableFuture_Delayer.h"
#include "java/util/concurrent/CompletableFuture_DelayedExecutor.h"
#include "java/util/concurrent/Executor.h"
#include "java/lang/Runnable.h"

extern "C" {


void mark_java_util_concurrent_CompletableFuture$DelayedExecutor(jobject object, jint mark, jint depth) {
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
	auto self = (java_util_concurrent_CompletableFuture$DelayedExecutor *) object;
	if (self->F_unit)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_unit)->clazz)->markFunction)((jobject) self->F_unit, mark, depth + 1);
	if (self->F_executor)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_executor)->clazz)->markFunction)((jobject) self->F_executor, mark, depth + 1);
}

void clinit_java_util_concurrent_CompletableFuture$DelayedExecutor(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
}

void init_java_util_concurrent_CompletableFuture$DelayedExecutor_long_java_util_concurrent_TimeUnit_java_util_concurrent_Executor(jcontext ctx, jobject self, jlong param0, jobject param1, jobject param2) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/concurrent/CompletableFuture$DelayedExecutor:<init>", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_util_concurrent_CompletableFuture$DelayedExecutor(ctx);
	frame[0].o = self;
	frame[1].l = param0;
	frame[3].o = param1;
	frame[4].o = param2;
	{
	LINE_NUMBER(2796);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(2797);
	((java_util_concurrent_CompletableFuture$DelayedExecutor *) NULL_CHECK((frame[0].o)))->F_delay = (frame[1].l);
	((java_util_concurrent_CompletableFuture$DelayedExecutor *) NULL_CHECK((frame[0].o)))->F_unit = (jref) (frame[3].o);
	((java_util_concurrent_CompletableFuture$DelayedExecutor *) NULL_CHECK((frame[0].o)))->F_executor = (jref) (frame[4].o);
	LINE_NUMBER(2798);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_java_util_concurrent_CompletableFuture$DelayedExecutor_execute_java_lang_Runnable(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/concurrent/CompletableFuture$DelayedExecutor:execute", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(2800);
	clinit_java_util_concurrent_CompletableFuture$TaskSubmitter(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_util_concurrent_CompletableFuture$TaskSubmitter);
	sp[1].o = (jobject)((java_util_concurrent_CompletableFuture$DelayedExecutor *) NULL_CHECK((frame[0].o)))->F_executor;
	init_java_util_concurrent_CompletableFuture$TaskSubmitter_java_util_concurrent_Executor_java_lang_Runnable(ctx, sp[0].o, sp[1].o, (frame[1].o));
	jlong temp0 = (jlong)((java_util_concurrent_CompletableFuture$DelayedExecutor *) NULL_CHECK((frame[0].o)))->F_delay;
	sp[1].o = (jobject)((java_util_concurrent_CompletableFuture$DelayedExecutor *) NULL_CHECK((frame[0].o)))->F_unit;
	sp[0].o = (jobject)SM_java_util_concurrent_CompletableFuture$Delayer_delay_java_lang_Runnable_long_java_util_concurrent_TimeUnit_R_java_util_concurrent_ScheduledFuture(ctx, sp[0].o, temp0, sp[1].o);
	LINE_NUMBER(2801);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void *vtable_java_util_concurrent_CompletableFuture$DelayedExecutor[] {
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
	(void *) M_java_util_concurrent_CompletableFuture$DelayedExecutor_execute_java_lang_Runnable,
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
	{ "execute", "(Ljava/lang/Runnable;)V" },
};

static jclass interfaces[] { &class_java_util_concurrent_Executor, };

static FieldMetadata fields[] {
	{ "delay", &class_long, offsetof(java_util_concurrent_CompletableFuture$DelayedExecutor, F_delay), "J", 16 },
	{ "unit", &class_java_util_concurrent_TimeUnit, offsetof(java_util_concurrent_CompletableFuture$DelayedExecutor, F_unit), "Ljava/util/concurrent/TimeUnit;", 16 },
	{ "executor", &class_java_util_concurrent_Executor, offsetof(java_util_concurrent_CompletableFuture$DelayedExecutor, F_executor), "Ljava/util/concurrent/Executor;", 16 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_java_util_concurrent_CompletableFuture$DelayedExecutor_long_java_util_concurrent_TimeUnit_java_util_concurrent_Executor, 0, "(JLjava/util/concurrent/TimeUnit;Ljava/util/concurrent/Executor;)V", 0 },
	{ "execute", (intptr_t) M_java_util_concurrent_CompletableFuture$DelayedExecutor_execute_java_lang_Runnable, VTABLE_java_util_concurrent_CompletableFuture$DelayedExecutor_execute_java_lang_Runnable, "(Ljava/lang/Runnable;)V", 1 },
};

Class class_java_util_concurrent_CompletableFuture$DelayedExecutor{
		.nativeName = (intptr_t) "java/util/concurrent/CompletableFuture$DelayedExecutor",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(java_util_concurrent_CompletableFuture$DelayedExecutor),
		.classVtable = (intptr_t) vtable_java_util_concurrent_CompletableFuture$DelayedExecutor,
		.staticInitializer = (intptr_t) clinit_java_util_concurrent_CompletableFuture$DelayedExecutor,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_java_util_concurrent_CompletableFuture$DelayedExecutor,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) &class_java_util_concurrent_CompletableFuture,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 48,
		.interfaceCount = 1,
		.nativeInterfaces = (intptr_t) interfaces,
		.fieldCount = 3,
		.nativeFields = (intptr_t) fields,
		.methodCount = 2,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 12,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_java_util_concurrent_CompletableFuture$DelayedExecutor = registerClass(&class_java_util_concurrent_CompletableFuture$DelayedExecutor);

}

