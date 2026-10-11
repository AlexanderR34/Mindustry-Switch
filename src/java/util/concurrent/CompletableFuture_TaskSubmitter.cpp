#include "java/util/concurrent/CompletableFuture_TaskSubmitter.h"
#include "java/lang/Object.h"
#include "java/util/concurrent/CompletableFuture_TaskSubmitter.h"
#include "java/util/concurrent/CompletableFuture.h"
#include "java/util/concurrent/Executor.h"
#include "java/lang/Runnable.h"

extern "C" {


void mark_java_util_concurrent_CompletableFuture$TaskSubmitter(jobject object, jint mark, jint depth) {
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
	auto self = (java_util_concurrent_CompletableFuture$TaskSubmitter *) object;
	if (self->F_executor)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_executor)->clazz)->markFunction)((jobject) self->F_executor, mark, depth + 1);
	if (self->F_action)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_action)->clazz)->markFunction)((jobject) self->F_action, mark, depth + 1);
}

void clinit_java_util_concurrent_CompletableFuture$TaskSubmitter(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
}

void init_java_util_concurrent_CompletableFuture$TaskSubmitter_java_util_concurrent_Executor_java_lang_Runnable(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/concurrent/CompletableFuture$TaskSubmitter:<init>", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_util_concurrent_CompletableFuture$TaskSubmitter(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(2808);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(2809);
	((java_util_concurrent_CompletableFuture$TaskSubmitter *) NULL_CHECK((frame[0].o)))->F_executor = (jref) (frame[1].o);
	LINE_NUMBER(2810);
	((java_util_concurrent_CompletableFuture$TaskSubmitter *) NULL_CHECK((frame[0].o)))->F_action = (jref) (frame[2].o);
	LINE_NUMBER(2811);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_java_util_concurrent_CompletableFuture$TaskSubmitter_run(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/concurrent/CompletableFuture$TaskSubmitter:run", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(2812);
	sp[0].o = (jobject)((java_util_concurrent_CompletableFuture$TaskSubmitter *) NULL_CHECK((frame[0].o)))->F_executor;
	sp[1].o = (jobject)((java_util_concurrent_CompletableFuture$TaskSubmitter *) NULL_CHECK((frame[0].o)))->F_action;
	((func_java_util_concurrent_Executor_execute_java_lang_Runnable) resolveInterfaceMethod(ctx, &class_java_util_concurrent_Executor, INDEX_java_util_concurrent_Executor_execute_java_lang_Runnable, sp[0].o))(ctx, sp[0].o, sp[1].o);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void *vtable_java_util_concurrent_CompletableFuture$TaskSubmitter[] {
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
	(void *) M_java_util_concurrent_CompletableFuture$TaskSubmitter_run,
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
};

static jclass interfaces[] { &class_java_lang_Runnable, };

static FieldMetadata fields[] {
	{ "executor", &class_java_util_concurrent_Executor, offsetof(java_util_concurrent_CompletableFuture$TaskSubmitter, F_executor), "Ljava/util/concurrent/Executor;", 16 },
	{ "action", &class_java_lang_Runnable, offsetof(java_util_concurrent_CompletableFuture$TaskSubmitter, F_action), "Ljava/lang/Runnable;", 16 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_java_util_concurrent_CompletableFuture$TaskSubmitter_java_util_concurrent_Executor_java_lang_Runnable, 0, "(Ljava/util/concurrent/Executor;Ljava/lang/Runnable;)V", 0 },
	{ "run", (intptr_t) M_java_util_concurrent_CompletableFuture$TaskSubmitter_run, VTABLE_java_util_concurrent_CompletableFuture$TaskSubmitter_run, "()V", 1 },
};

Class class_java_util_concurrent_CompletableFuture$TaskSubmitter{
		.nativeName = (intptr_t) "java/util/concurrent/CompletableFuture$TaskSubmitter",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(java_util_concurrent_CompletableFuture$TaskSubmitter),
		.classVtable = (intptr_t) vtable_java_util_concurrent_CompletableFuture$TaskSubmitter,
		.staticInitializer = (intptr_t) clinit_java_util_concurrent_CompletableFuture$TaskSubmitter,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_java_util_concurrent_CompletableFuture$TaskSubmitter,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) &class_java_util_concurrent_CompletableFuture,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 48,
		.interfaceCount = 1,
		.nativeInterfaces = (intptr_t) interfaces,
		.fieldCount = 2,
		.nativeFields = (intptr_t) fields,
		.methodCount = 2,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 12,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_java_util_concurrent_CompletableFuture$TaskSubmitter = registerClass(&class_java_util_concurrent_CompletableFuture$TaskSubmitter);

}

