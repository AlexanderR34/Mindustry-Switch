#include "java/util/concurrent/CompletableFuture_Timeout.h"
#include "java/lang/Object.h"
#include "java/util/concurrent/CompletableFuture_Timeout.h"
#include "java/util/concurrent/CompletableFuture.h"
#include "java/util/concurrent/TimeoutException.h"
#include "java/lang/Throwable.h"
#include "java/lang/Runnable.h"

extern "C" {


void mark_java_util_concurrent_CompletableFuture$Timeout(jobject object, jint mark, jint depth) {
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
	auto self = (java_util_concurrent_CompletableFuture$Timeout *) object;
	if (self->F_f)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_f)->clazz)->markFunction)((jobject) self->F_f, mark, depth + 1);
}

void clinit_java_util_concurrent_CompletableFuture$Timeout(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
}

void init_java_util_concurrent_CompletableFuture$Timeout_java_util_concurrent_CompletableFuture(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/concurrent/CompletableFuture$Timeout:<init>", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_util_concurrent_CompletableFuture$Timeout(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(2818);
	init_java_lang_Object(ctx, (frame[0].o));
	((java_util_concurrent_CompletableFuture$Timeout *) NULL_CHECK((frame[0].o)))->F_f = (jref) (frame[1].o);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_java_util_concurrent_CompletableFuture$Timeout_run(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/concurrent/CompletableFuture$Timeout:run", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(2820);
	sp[0].o = (jobject)((java_util_concurrent_CompletableFuture$Timeout *) NULL_CHECK((frame[0].o)))->F_f;
	if (sp[0].o == nullptr) goto label_1;
	}
	{
	sp[0].o = (jobject)((java_util_concurrent_CompletableFuture$Timeout *) NULL_CHECK((frame[0].o)))->F_f;
	jint temp0 = (jint)((func_java_util_concurrent_CompletableFuture_isDone_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_concurrent_CompletableFuture_isDone_R_boolean])(ctx, sp[0].o);
	if (temp0 != 0) goto label_1;
	}
	{
	LINE_NUMBER(2821);
	sp[0].o = (jobject)((java_util_concurrent_CompletableFuture$Timeout *) NULL_CHECK((frame[0].o)))->F_f;
	clinit_java_util_concurrent_TimeoutException(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_util_concurrent_TimeoutException);
	init_java_util_concurrent_TimeoutException(ctx, sp[1].o);
	jint temp0 = (jint)((func_java_util_concurrent_CompletableFuture_completeExceptionally_java_lang_Throwable_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_concurrent_CompletableFuture_completeExceptionally_java_lang_Throwable_R_boolean])(ctx, sp[0].o, sp[1].o);
	}
label_1:;
	LINE_NUMBER(2822);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void *vtable_java_util_concurrent_CompletableFuture$Timeout[] {
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
	(void *) M_java_util_concurrent_CompletableFuture$Timeout_run,
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
	{ "f", &class_java_util_concurrent_CompletableFuture, offsetof(java_util_concurrent_CompletableFuture$Timeout, F_f), "Ljava/util/concurrent/CompletableFuture;", 16 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_java_util_concurrent_CompletableFuture$Timeout_java_util_concurrent_CompletableFuture, 0, "(Ljava/util/concurrent/CompletableFuture;)V", 0 },
	{ "run", (intptr_t) M_java_util_concurrent_CompletableFuture$Timeout_run, VTABLE_java_util_concurrent_CompletableFuture$Timeout_run, "()V", 1 },
};

Class class_java_util_concurrent_CompletableFuture$Timeout{
		.nativeName = (intptr_t) "java/util/concurrent/CompletableFuture$Timeout",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(java_util_concurrent_CompletableFuture$Timeout),
		.classVtable = (intptr_t) vtable_java_util_concurrent_CompletableFuture$Timeout,
		.staticInitializer = (intptr_t) clinit_java_util_concurrent_CompletableFuture$Timeout,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_java_util_concurrent_CompletableFuture$Timeout,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) &class_java_util_concurrent_CompletableFuture,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 48,
		.interfaceCount = 1,
		.nativeInterfaces = (intptr_t) interfaces,
		.fieldCount = 1,
		.nativeFields = (intptr_t) fields,
		.methodCount = 2,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 12,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_java_util_concurrent_CompletableFuture$Timeout = registerClass(&class_java_util_concurrent_CompletableFuture$Timeout);

}

