#include "java/util/concurrent/CompletableFuture_Canceller.h"
#include "java/lang/Object.h"
#include "java/util/concurrent/CompletableFuture_Canceller.h"
#include "java/util/function/BiConsumer.h"
#include "java/util/concurrent/CompletableFuture.h"
#include "java/util/concurrent/Future.h"
#include "java/lang/Throwable.h"

extern "C" {


void mark_java_util_concurrent_CompletableFuture$Canceller(jobject object, jint mark, jint depth) {
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
	auto self = (java_util_concurrent_CompletableFuture$Canceller *) object;
	if (self->F_f)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_f)->clazz)->markFunction)((jobject) self->F_f, mark, depth + 1);
}

void clinit_java_util_concurrent_CompletableFuture$Canceller(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
}

void init_java_util_concurrent_CompletableFuture$Canceller_java_util_concurrent_Future(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/concurrent/CompletableFuture$Canceller:<init>", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_util_concurrent_CompletableFuture$Canceller(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(2839);
	init_java_lang_Object(ctx, (frame[0].o));
	((java_util_concurrent_CompletableFuture$Canceller *) NULL_CHECK((frame[0].o)))->F_f = (jref) (frame[1].o);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_java_util_concurrent_CompletableFuture$Canceller_accept_java_lang_Object_java_lang_Throwable(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/concurrent/CompletableFuture$Canceller:accept", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(2841);
	if ((frame[2].o) != nullptr) goto label_1;
	}
	{
	sp[0].o = (jobject)((java_util_concurrent_CompletableFuture$Canceller *) NULL_CHECK((frame[0].o)))->F_f;
	if (sp[0].o == nullptr) goto label_1;
	}
	{
	sp[0].o = (jobject)((java_util_concurrent_CompletableFuture$Canceller *) NULL_CHECK((frame[0].o)))->F_f;
	jint temp0 = (jint)((func_java_util_concurrent_Future_isDone_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_concurrent_Future, INDEX_java_util_concurrent_Future_isDone_R_boolean, sp[0].o))(ctx, sp[0].o);
	if (temp0 != 0) goto label_1;
	}
	{
	LINE_NUMBER(2842);
	sp[0].o = (jobject)((java_util_concurrent_CompletableFuture$Canceller *) NULL_CHECK((frame[0].o)))->F_f;
	jint temp0 = (jint)((func_java_util_concurrent_Future_cancel_boolean_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_concurrent_Future, INDEX_java_util_concurrent_Future_cancel_boolean_R_boolean, sp[0].o))(ctx, sp[0].o, (jint(0)));
	}
label_1:;
	LINE_NUMBER(2843);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_java_util_concurrent_CompletableFuture$Canceller_accept_java_lang_Object_java_lang_Object(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/concurrent/CompletableFuture$Canceller:accept", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(2837);
	((func_java_util_concurrent_CompletableFuture$Canceller_accept_java_lang_Object_java_lang_Throwable) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_util_concurrent_CompletableFuture$Canceller_accept_java_lang_Object_java_lang_Throwable])(ctx, (frame[0].o), (frame[1].o), (checkCast(ctx, &class_java_lang_Throwable, (frame[2].o))));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void *vtable_java_util_concurrent_CompletableFuture$Canceller[] {
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
	(void *) M_java_util_concurrent_CompletableFuture$Canceller_accept_java_lang_Object_java_lang_Object,
	(void *) M_java_util_function_BiConsumer_andThen_java_util_function_BiConsumer_R_java_util_function_BiConsumer,
	(void *) M_java_util_function_BiConsumer_lambda$andThen$0_java_util_function_BiConsumer_java_lang_Object_java_lang_Object,
	(void *) M_java_util_concurrent_CompletableFuture$Canceller_accept_java_lang_Object_java_lang_Throwable,
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
	{ "accept", "(Ljava/lang/Object;Ljava/lang/Object;)V" },
	{ "andThen", "(Ljava/util/function/BiConsumer;)Ljava/util/function/BiConsumer;" },
	{ "lambda$andThen$0", "(Ljava/util/function/BiConsumer;Ljava/lang/Object;Ljava/lang/Object;)V" },
	{ "accept", "(Ljava/lang/Object;Ljava/lang/Throwable;)V" },
};

static jclass interfaces[] { &class_java_util_function_BiConsumer, };

static FieldMetadata fields[] {
	{ "f", &class_java_util_concurrent_Future, offsetof(java_util_concurrent_CompletableFuture$Canceller, F_f), "Ljava/util/concurrent/Future;", 16 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_java_util_concurrent_CompletableFuture$Canceller_java_util_concurrent_Future, 0, "(Ljava/util/concurrent/Future;)V", 0 },
	{ "accept", (intptr_t) M_java_util_concurrent_CompletableFuture$Canceller_accept_java_lang_Object_java_lang_Throwable, VTABLE_java_util_concurrent_CompletableFuture$Canceller_accept_java_lang_Object_java_lang_Throwable, "(Ljava/lang/Object;Ljava/lang/Throwable;)V", 1 },
	{ "accept", (intptr_t) M_java_util_concurrent_CompletableFuture$Canceller_accept_java_lang_Object_java_lang_Object, VTABLE_java_util_concurrent_CompletableFuture$Canceller_accept_java_lang_Object_java_lang_Object, "(Ljava/lang/Object;Ljava/lang/Object;)V", 4161 },
};

Class class_java_util_concurrent_CompletableFuture$Canceller{
		.nativeName = (intptr_t) "java/util/concurrent/CompletableFuture$Canceller",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(java_util_concurrent_CompletableFuture$Canceller),
		.classVtable = (intptr_t) vtable_java_util_concurrent_CompletableFuture$Canceller,
		.staticInitializer = (intptr_t) clinit_java_util_concurrent_CompletableFuture$Canceller,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_java_util_concurrent_CompletableFuture$Canceller,
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
		.methodCount = 3,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 15,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_java_util_concurrent_CompletableFuture$Canceller = registerClass(&class_java_util_concurrent_CompletableFuture$Canceller);

}

