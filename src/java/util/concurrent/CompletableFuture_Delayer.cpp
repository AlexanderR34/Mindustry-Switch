#include "java/util/concurrent/CompletableFuture_Delayer.h"
#include "java/lang/Object.h"
#include "java/util/concurrent/ScheduledFuture.h"
#include "java/util/concurrent/TimeUnit.h"
#include "java/util/concurrent/CompletableFuture.h"
#include "java/util/concurrent/CompletableFuture_Delayer_DaemonThreadFactory.h"
#include "java/util/concurrent/CompletableFuture_Delayer.h"
#include "java/util/concurrent/ThreadFactory.h"
#include "java/util/concurrent/ScheduledThreadPoolExecutor.h"
#include "java/lang/Runnable.h"

extern "C" {

jobject SF_java_util_concurrent_CompletableFuture$Delayer_delayer;

void mark_java_util_concurrent_CompletableFuture$Delayer(jobject object, jint mark, jint depth) {
	if (!object) {
		if (SF_java_util_concurrent_CompletableFuture$Delayer_delayer)
			((gc_mark_ptr) ((jclass) ((jobject) SF_java_util_concurrent_CompletableFuture$Delayer_delayer)->clazz)->markFunction)((jobject) SF_java_util_concurrent_CompletableFuture$Delayer_delayer, mark, depth + 1);
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
	auto self = (java_util_concurrent_CompletableFuture$Delayer *) object;
}

void init_java_util_concurrent_CompletableFuture$Delayer(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/concurrent/CompletableFuture$Delayer:<init>", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_util_concurrent_CompletableFuture$Delayer(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(2767);
	init_java_lang_Object(ctx, (frame[0].o));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject SM_java_util_concurrent_CompletableFuture$Delayer_delay_java_lang_Runnable_long_java_util_concurrent_TimeUnit_R_java_util_concurrent_ScheduledFuture(jcontext ctx, jobject param0, jlong param1, jobject param2) {
	jtype frame[9];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/concurrent/CompletableFuture$Delayer:delay", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_util_concurrent_CompletableFuture$Delayer(ctx);
	frame[0].o = param0;
	frame[1].l = param1;
	frame[3].o = param2;
	{
	LINE_NUMBER(2770);
	clinit_java_util_concurrent_CompletableFuture$Delayer(ctx);
	sp[0].o = (jobject)SF_java_util_concurrent_CompletableFuture$Delayer_delayer;
	sp[0].o = (jobject)((func_java_util_concurrent_ScheduledThreadPoolExecutor_schedule_java_lang_Runnable_long_java_util_concurrent_TimeUnit_R_java_util_concurrent_ScheduledFuture) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_concurrent_ScheduledThreadPoolExecutor_schedule_java_lang_Runnable_long_java_util_concurrent_TimeUnit_R_java_util_concurrent_ScheduledFuture])(ctx, sp[0].o, (frame[0].o), (frame[1].l), (frame[3].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void clinit_java_util_concurrent_CompletableFuture$Delayer(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	jtype frame[5];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/concurrent/CompletableFuture$Delayer:<clinit>", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_util_concurrent_CompletableFuture$Delayer(ctx);
	{
	LINE_NUMBER(2784);
	clinit_java_util_concurrent_ScheduledThreadPoolExecutor(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_util_concurrent_ScheduledThreadPoolExecutor);
	jint temp0 = jint(1);
	clinit_java_util_concurrent_CompletableFuture$Delayer$DaemonThreadFactory(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_util_concurrent_CompletableFuture$Delayer$DaemonThreadFactory);
	init_java_util_concurrent_CompletableFuture$Delayer$DaemonThreadFactory(ctx, sp[1].o);
	init_java_util_concurrent_ScheduledThreadPoolExecutor_int_java_util_concurrent_ThreadFactory(ctx, sp[0].o, temp0, sp[1].o);
	clinit_java_util_concurrent_CompletableFuture$Delayer(ctx);
	SF_java_util_concurrent_CompletableFuture$Delayer_delayer = sp[0].o;
	jint temp1 = jint(1);
	LINE_NUMBER(2786);
	((func_java_util_concurrent_ScheduledThreadPoolExecutor_setRemoveOnCancelPolicy_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_concurrent_ScheduledThreadPoolExecutor_setRemoveOnCancelPolicy_boolean])(ctx, sp[0].o, temp1);
	LINE_NUMBER(2787);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void *vtable_java_util_concurrent_CompletableFuture$Delayer[] {
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
	&class_java_util_concurrent_CompletableFuture$Delayer$DaemonThreadFactory,
};

static FieldMetadata fields[] {
	{ "delayer", &class_java_util_concurrent_ScheduledThreadPoolExecutor, (intptr_t) &SF_java_util_concurrent_CompletableFuture$Delayer_delayer, "Ljava/util/concurrent/ScheduledThreadPoolExecutor;", 24 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_java_util_concurrent_CompletableFuture$Delayer, 0, "()V", 0 },
	{ "delay", (intptr_t) SM_java_util_concurrent_CompletableFuture$Delayer_delay_java_lang_Runnable_long_java_util_concurrent_TimeUnit_R_java_util_concurrent_ScheduledFuture, 0, "(Ljava/lang/Runnable;JLjava/util/concurrent/TimeUnit;)Ljava/util/concurrent/ScheduledFuture;", 8 },
	{ "<clinit>", (intptr_t) clinit_java_util_concurrent_CompletableFuture$Delayer, 0, "()V", 8 },
};

Class class_java_util_concurrent_CompletableFuture$Delayer{
		.nativeName = (intptr_t) "java/util/concurrent/CompletableFuture$Delayer",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(java_util_concurrent_CompletableFuture$Delayer),
		.classVtable = (intptr_t) vtable_java_util_concurrent_CompletableFuture$Delayer,
		.staticInitializer = (intptr_t) clinit_java_util_concurrent_CompletableFuture$Delayer,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_java_util_concurrent_CompletableFuture$Delayer,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) &class_java_util_concurrent_CompletableFuture,
		.innerClassCount = 1,
		.nativeInnerClasses = (intptr_t) innerClasses,
		.access = 48,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 1,
		.nativeFields = (intptr_t) fields,
		.methodCount = 3,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 11,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_java_util_concurrent_CompletableFuture$Delayer = registerClass(&class_java_util_concurrent_CompletableFuture$Delayer);

}

