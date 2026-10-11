#include "java/util/concurrent/CompletableFuture_DelayedCompleter.h"
#include "java/lang/Object.h"
#include "java/util/concurrent/CompletableFuture.h"
#include "java/util/concurrent/CompletableFuture_DelayedCompleter.h"
#include "java/lang/Runnable.h"

extern "C" {


void mark_java_util_concurrent_CompletableFuture$DelayedCompleter(jobject object, jint mark, jint depth) {
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
	auto self = (java_util_concurrent_CompletableFuture$DelayedCompleter *) object;
	if (self->F_f)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_f)->clazz)->markFunction)((jobject) self->F_f, mark, depth + 1);
	if (self->F_u)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_u)->clazz)->markFunction)((jobject) self->F_u, mark, depth + 1);
}

void clinit_java_util_concurrent_CompletableFuture$DelayedCompleter(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
}

void init_java_util_concurrent_CompletableFuture$DelayedCompleter_java_util_concurrent_CompletableFuture_java_lang_Object(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/concurrent/CompletableFuture$DelayedCompleter:<init>", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_util_concurrent_CompletableFuture$DelayedCompleter(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(2829);
	init_java_lang_Object(ctx, (frame[0].o));
	((java_util_concurrent_CompletableFuture$DelayedCompleter *) NULL_CHECK((frame[0].o)))->F_f = (jref) (frame[1].o);
	((java_util_concurrent_CompletableFuture$DelayedCompleter *) NULL_CHECK((frame[0].o)))->F_u = (jref) (frame[2].o);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_java_util_concurrent_CompletableFuture$DelayedCompleter_run(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/concurrent/CompletableFuture$DelayedCompleter:run", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(2831);
	sp[0].o = (jobject)((java_util_concurrent_CompletableFuture$DelayedCompleter *) NULL_CHECK((frame[0].o)))->F_f;
	if (sp[0].o == nullptr) goto label_1;
	}
	{
	LINE_NUMBER(2832);
	sp[0].o = (jobject)((java_util_concurrent_CompletableFuture$DelayedCompleter *) NULL_CHECK((frame[0].o)))->F_f;
	sp[1].o = (jobject)((java_util_concurrent_CompletableFuture$DelayedCompleter *) NULL_CHECK((frame[0].o)))->F_u;
	jint temp0 = (jint)((func_java_util_concurrent_CompletableFuture_complete_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_concurrent_CompletableFuture_complete_java_lang_Object_R_boolean])(ctx, sp[0].o, sp[1].o);
	}
label_1:;
	LINE_NUMBER(2833);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void *vtable_java_util_concurrent_CompletableFuture$DelayedCompleter[] {
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
	(void *) M_java_util_concurrent_CompletableFuture$DelayedCompleter_run,
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
	{ "f", &class_java_util_concurrent_CompletableFuture, offsetof(java_util_concurrent_CompletableFuture$DelayedCompleter, F_f), "Ljava/util/concurrent/CompletableFuture;", 16 },
	{ "u", &class_java_lang_Object, offsetof(java_util_concurrent_CompletableFuture$DelayedCompleter, F_u), "Ljava/lang/Object;", 16 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_java_util_concurrent_CompletableFuture$DelayedCompleter_java_util_concurrent_CompletableFuture_java_lang_Object, 0, "(Ljava/util/concurrent/CompletableFuture;Ljava/lang/Object;)V", 0 },
	{ "run", (intptr_t) M_java_util_concurrent_CompletableFuture$DelayedCompleter_run, VTABLE_java_util_concurrent_CompletableFuture$DelayedCompleter_run, "()V", 1 },
};

Class class_java_util_concurrent_CompletableFuture$DelayedCompleter{
		.nativeName = (intptr_t) "java/util/concurrent/CompletableFuture$DelayedCompleter",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(java_util_concurrent_CompletableFuture$DelayedCompleter),
		.classVtable = (intptr_t) vtable_java_util_concurrent_CompletableFuture$DelayedCompleter,
		.staticInitializer = (intptr_t) clinit_java_util_concurrent_CompletableFuture$DelayedCompleter,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_java_util_concurrent_CompletableFuture$DelayedCompleter,
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
static bool registered_java_util_concurrent_CompletableFuture$DelayedCompleter = registerClass(&class_java_util_concurrent_CompletableFuture$DelayedCompleter);

}

