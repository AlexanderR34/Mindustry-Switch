#include "java/util/concurrent/Executors_RunnableAdapter.h"
#include "java/lang/Object.h"
#include "java/util/concurrent/Executors_RunnableAdapter.h"
#include "java/util/concurrent/Executors.h"
#include "java/util/concurrent/Callable.h"
#include "java/lang/Runnable.h"

extern "C" {


void mark_java_util_concurrent_Executors$RunnableAdapter(jobject object, jint mark, jint depth) {
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
	auto self = (java_util_concurrent_Executors$RunnableAdapter *) object;
	if (self->F_task)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_task)->clazz)->markFunction)((jobject) self->F_task, mark, depth + 1);
	if (self->F_result)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_result)->clazz)->markFunction)((jobject) self->F_result, mark, depth + 1);
}

void clinit_java_util_concurrent_Executors$RunnableAdapter(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
}

void init_java_util_concurrent_Executors$RunnableAdapter_java_lang_Runnable_java_lang_Object(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/concurrent/Executors$RunnableAdapter:<init>", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_util_concurrent_Executors$RunnableAdapter(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(468);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(469);
	((java_util_concurrent_Executors$RunnableAdapter *) NULL_CHECK((frame[0].o)))->F_task = (jref) (frame[1].o);
	LINE_NUMBER(470);
	((java_util_concurrent_Executors$RunnableAdapter *) NULL_CHECK((frame[0].o)))->F_result = (jref) (frame[2].o);
	LINE_NUMBER(471);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_java_util_concurrent_Executors$RunnableAdapter_call_R_java_lang_Object(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/concurrent/Executors$RunnableAdapter:call", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(473);
	sp[0].o = (jobject)((java_util_concurrent_Executors$RunnableAdapter *) NULL_CHECK((frame[0].o)))->F_task;
	((func_java_lang_Runnable_run) resolveInterfaceMethod(ctx, &class_java_lang_Runnable, INDEX_java_lang_Runnable_run, sp[0].o))(ctx, sp[0].o);
	LINE_NUMBER(474);
	sp[0].o = (jobject)((java_util_concurrent_Executors$RunnableAdapter *) NULL_CHECK((frame[0].o)))->F_result;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void *vtable_java_util_concurrent_Executors$RunnableAdapter[] {
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
	(void *) M_java_util_concurrent_Executors$RunnableAdapter_call_R_java_lang_Object,
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
	{ "call", "()Ljava/lang/Object;" },
};

static jclass interfaces[] { &class_java_util_concurrent_Callable, };

static FieldMetadata fields[] {
	{ "task", &class_java_lang_Runnable, offsetof(java_util_concurrent_Executors$RunnableAdapter, F_task), "Ljava/lang/Runnable;", 16 },
	{ "result", &class_java_lang_Object, offsetof(java_util_concurrent_Executors$RunnableAdapter, F_result), "Ljava/lang/Object;", 16 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_java_util_concurrent_Executors$RunnableAdapter_java_lang_Runnable_java_lang_Object, 0, "(Ljava/lang/Runnable;Ljava/lang/Object;)V", 0 },
	{ "call", (intptr_t) M_java_util_concurrent_Executors$RunnableAdapter_call_R_java_lang_Object, VTABLE_java_util_concurrent_Executors$RunnableAdapter_call_R_java_lang_Object, "()Ljava/lang/Object;", 1 },
};

Class class_java_util_concurrent_Executors$RunnableAdapter{
		.nativeName = (intptr_t) "java/util/concurrent/Executors$RunnableAdapter",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(java_util_concurrent_Executors$RunnableAdapter),
		.classVtable = (intptr_t) vtable_java_util_concurrent_Executors$RunnableAdapter,
		.staticInitializer = (intptr_t) clinit_java_util_concurrent_Executors$RunnableAdapter,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_java_util_concurrent_Executors$RunnableAdapter,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) &class_java_util_concurrent_Executors,
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
static bool registered_java_util_concurrent_Executors$RunnableAdapter = registerClass(&class_java_util_concurrent_Executors$RunnableAdapter);

}

