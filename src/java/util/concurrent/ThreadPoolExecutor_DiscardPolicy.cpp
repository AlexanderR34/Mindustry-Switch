#include "java/util/concurrent/ThreadPoolExecutor_DiscardPolicy.h"
#include "java/lang/Object.h"
#include "java/util/concurrent/ThreadPoolExecutor.h"
#include "java/util/concurrent/RejectedExecutionHandler.h"
#include "java/util/concurrent/ThreadPoolExecutor_DiscardPolicy.h"
#include "java/lang/Runnable.h"

extern "C" {


void mark_java_util_concurrent_ThreadPoolExecutor$DiscardPolicy(jobject object, jint mark, jint depth) {
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
	auto self = (java_util_concurrent_ThreadPoolExecutor$DiscardPolicy *) object;
}

void clinit_java_util_concurrent_ThreadPoolExecutor$DiscardPolicy(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
}

void init_java_util_concurrent_ThreadPoolExecutor$DiscardPolicy(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/concurrent/ThreadPoolExecutor$DiscardPolicy:<init>", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_util_concurrent_ThreadPoolExecutor$DiscardPolicy(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(2064);
	init_java_lang_Object(ctx, (frame[0].o));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_java_util_concurrent_ThreadPoolExecutor$DiscardPolicy_rejectedExecution_java_lang_Runnable_java_util_concurrent_ThreadPoolExecutor(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/concurrent/ThreadPoolExecutor$DiscardPolicy:rejectedExecution", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	LINE_NUMBER(2073);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void *vtable_java_util_concurrent_ThreadPoolExecutor$DiscardPolicy[] {
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
	(void *) M_java_util_concurrent_ThreadPoolExecutor$DiscardPolicy_rejectedExecution_java_lang_Runnable_java_util_concurrent_ThreadPoolExecutor,
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
	{ "rejectedExecution", "(Ljava/lang/Runnable;Ljava/util/concurrent/ThreadPoolExecutor;)V" },
};

static jclass interfaces[] { &class_java_util_concurrent_RejectedExecutionHandler, };

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_java_util_concurrent_ThreadPoolExecutor$DiscardPolicy, 0, "()V", 1 },
	{ "rejectedExecution", (intptr_t) M_java_util_concurrent_ThreadPoolExecutor$DiscardPolicy_rejectedExecution_java_lang_Runnable_java_util_concurrent_ThreadPoolExecutor, VTABLE_java_util_concurrent_ThreadPoolExecutor$DiscardPolicy_rejectedExecution_java_lang_Runnable_java_util_concurrent_ThreadPoolExecutor, "(Ljava/lang/Runnable;Ljava/util/concurrent/ThreadPoolExecutor;)V", 1 },
};

Class class_java_util_concurrent_ThreadPoolExecutor$DiscardPolicy{
		.nativeName = (intptr_t) "java/util/concurrent/ThreadPoolExecutor$DiscardPolicy",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(java_util_concurrent_ThreadPoolExecutor$DiscardPolicy),
		.classVtable = (intptr_t) vtable_java_util_concurrent_ThreadPoolExecutor$DiscardPolicy,
		.staticInitializer = (intptr_t) clinit_java_util_concurrent_ThreadPoolExecutor$DiscardPolicy,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_java_util_concurrent_ThreadPoolExecutor$DiscardPolicy,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) &class_java_util_concurrent_ThreadPoolExecutor,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 33,
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
static bool registered_java_util_concurrent_ThreadPoolExecutor$DiscardPolicy = registerClass(&class_java_util_concurrent_ThreadPoolExecutor$DiscardPolicy);

}

