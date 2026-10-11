#include "rhino/ContinuationPending.h"
#include "rhino/NativeContinuation.h"
#include "java/lang/Object.h"
#include "rhino/ContinuationPending.h"
#include "java/lang/RuntimeException.h"
#include "java/lang/Throwable.h"

extern "C" {


void mark_rhino_ContinuationPending(jobject object, jint mark, jint depth) {
	if (!object) {
		return;
	}
	if (depth > GC_DEPTH_ALWAYS && (object->gcMark < GC_MARK_START || object->gcMark == mark))
		return;
	if (depth > MAX_GC_MARK_DEPTH) {
		markDeepObject(object);
		return;
	}
	mark_java_lang_RuntimeException(object, mark, depth);
	if (object->gcMark >= GC_MARK_START)
		object->gcMark = mark;
	auto self = (rhino_ContinuationPending *) object;
	if (self->F_continuationState)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_continuationState)->clazz)->markFunction)((jobject) self->F_continuationState, mark, depth + 1);
	if (self->F_applicationState)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_applicationState)->clazz)->markFunction)((jobject) self->F_applicationState, mark, depth + 1);
}

void clinit_rhino_ContinuationPending(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	clinit_java_lang_RuntimeException(ctx);
}

void init_rhino_ContinuationPending_rhino_NativeContinuation(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/ContinuationPending:<init>", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_rhino_ContinuationPending(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(25);
	init_java_lang_RuntimeException(ctx, (frame[0].o));
	LINE_NUMBER(26);
	((rhino_ContinuationPending *) NULL_CHECK((frame[0].o)))->F_continuationState = (jref) (frame[1].o);
	LINE_NUMBER(27);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_rhino_ContinuationPending_getContinuation_R_java_lang_Object(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/ContinuationPending:getContinuation", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(36);
	sp[0].o = (jobject)((rhino_ContinuationPending *) NULL_CHECK((frame[0].o)))->F_continuationState;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void M_rhino_ContinuationPending_setContinuation_rhino_NativeContinuation(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/ContinuationPending:setContinuation", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(44);
	((rhino_ContinuationPending *) NULL_CHECK((frame[0].o)))->F_continuationState = (jref) (frame[1].o);
	LINE_NUMBER(45);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_rhino_ContinuationPending_getContinuationState_R_rhino_NativeContinuation(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/ContinuationPending:getContinuationState", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(51);
	sp[0].o = (jobject)((rhino_ContinuationPending *) NULL_CHECK((frame[0].o)))->F_continuationState;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void M_rhino_ContinuationPending_setApplicationState_java_lang_Object(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/ContinuationPending:setApplicationState", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(60);
	((rhino_ContinuationPending *) NULL_CHECK((frame[0].o)))->F_applicationState = (jref) (frame[1].o);
	LINE_NUMBER(61);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_rhino_ContinuationPending_getApplicationState_R_java_lang_Object(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/ContinuationPending:getApplicationState", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(67);
	sp[0].o = (jobject)((rhino_ContinuationPending *) NULL_CHECK((frame[0].o)))->F_applicationState;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void *vtable_rhino_ContinuationPending[] {
	(void *) M_java_lang_Object_hashCode_R_int,
	(void *) M_java_lang_Object_equals_java_lang_Object_R_boolean,
	(void *) M_java_lang_Object_clone_R_java_lang_Object,
	(void *) M_java_lang_Object_getClass_R_java_lang_Class,
	(void *) M_java_lang_Throwable_toString_R_java_lang_String,
	(void *) M_java_lang_Object_finalize,
	(void *) M_java_lang_Object_notify,
	(void *) M_java_lang_Object_notifyAll,
	(void *) M_java_lang_Object_wait,
	(void *) M_java_lang_Object_wait_long,
	(void *) M_java_lang_Object_wait_long_int,
	(void *) M_java_lang_Throwable_initCause_java_lang_Throwable_R_java_lang_Throwable,
	(void *) M_java_lang_Throwable_getStack_R_java_lang_String,
	(void *) M_java_lang_Throwable_getCause_R_java_lang_Throwable,
	(void *) M_java_lang_Throwable_getMessage_R_java_lang_String,
	(void *) M_java_lang_Throwable_fillInStack,
	(void *) M_java_lang_Throwable_fillInStackTrace_R_java_lang_Throwable,
	(void *) M_java_lang_Throwable_printStackTrace,
	(void *) M_java_lang_Throwable_printStackTrace_java_io_PrintStream,
	(void *) M_java_lang_Throwable_printStackTrace_java_io_PrintWriter,
	(void *) M_java_lang_Throwable_getStackTrace_R_Array1_java_lang_StackTraceElement,
	(void *) M_java_lang_Throwable_setStackTrace_Array1_java_lang_StackTraceElement,
	(void *) M_java_lang_Throwable_addSuppressed_java_lang_Throwable,
	(void *) M_java_lang_Throwable_getSuppressed_R_Array1_java_lang_Throwable,
	(void *) M_java_lang_Throwable_getLocalizedMessage_R_java_lang_String,
	(void *) M_rhino_ContinuationPending_getContinuation_R_java_lang_Object,
	(void *) M_rhino_ContinuationPending_setContinuation_rhino_NativeContinuation,
	(void *) M_rhino_ContinuationPending_getContinuationState_R_rhino_NativeContinuation,
	(void *) M_rhino_ContinuationPending_setApplicationState_java_lang_Object,
	(void *) M_rhino_ContinuationPending_getApplicationState_R_java_lang_Object,
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
	{ "initCause", "(Ljava/lang/Throwable;)Ljava/lang/Throwable;" },
	{ "getStack", "()Ljava/lang/String;" },
	{ "getCause", "()Ljava/lang/Throwable;" },
	{ "getMessage", "()Ljava/lang/String;" },
	{ "fillInStack", "()V" },
	{ "fillInStackTrace", "()Ljava/lang/Throwable;" },
	{ "printStackTrace", "()V" },
	{ "printStackTrace", "(Ljava/io/PrintStream;)V" },
	{ "printStackTrace", "(Ljava/io/PrintWriter;)V" },
	{ "getStackTrace", "()[Ljava/lang/StackTraceElement;" },
	{ "setStackTrace", "([Ljava/lang/StackTraceElement;)V" },
	{ "addSuppressed", "(Ljava/lang/Throwable;)V" },
	{ "getSuppressed", "()[Ljava/lang/Throwable;" },
	{ "getLocalizedMessage", "()Ljava/lang/String;" },
	{ "getContinuation", "()Ljava/lang/Object;" },
	{ "setContinuation", "(Lrhino/NativeContinuation;)V" },
	{ "getContinuationState", "()Lrhino/NativeContinuation;" },
	{ "setApplicationState", "(Ljava/lang/Object;)V" },
	{ "getApplicationState", "()Ljava/lang/Object;" },
};

static FieldMetadata fields[] {
	{ "continuationState", &class_rhino_NativeContinuation, offsetof(rhino_ContinuationPending, F_continuationState), "Lrhino/NativeContinuation;", 2 },
	{ "applicationState", &class_java_lang_Object, offsetof(rhino_ContinuationPending, F_applicationState), "Ljava/lang/Object;", 2 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_rhino_ContinuationPending_rhino_NativeContinuation, 0, "(Lrhino/NativeContinuation;)V", 4 },
	{ "getContinuation", (intptr_t) M_rhino_ContinuationPending_getContinuation_R_java_lang_Object, VTABLE_rhino_ContinuationPending_getContinuation_R_java_lang_Object, "()Ljava/lang/Object;", 1 },
	{ "setContinuation", (intptr_t) M_rhino_ContinuationPending_setContinuation_rhino_NativeContinuation, VTABLE_rhino_ContinuationPending_setContinuation_rhino_NativeContinuation, "(Lrhino/NativeContinuation;)V", 1 },
	{ "getContinuationState", (intptr_t) M_rhino_ContinuationPending_getContinuationState_R_rhino_NativeContinuation, VTABLE_rhino_ContinuationPending_getContinuationState_R_rhino_NativeContinuation, "()Lrhino/NativeContinuation;", 0 },
	{ "setApplicationState", (intptr_t) M_rhino_ContinuationPending_setApplicationState_java_lang_Object, VTABLE_rhino_ContinuationPending_setApplicationState_java_lang_Object, "(Ljava/lang/Object;)V", 1 },
	{ "getApplicationState", (intptr_t) M_rhino_ContinuationPending_getApplicationState_R_java_lang_Object, VTABLE_rhino_ContinuationPending_getApplicationState_R_java_lang_Object, "()Ljava/lang/Object;", 1 },
};

Class class_rhino_ContinuationPending{
		.nativeName = (intptr_t) "rhino/ContinuationPending",
		.parentClass = (intptr_t) &class_java_lang_RuntimeException,
		.size = sizeof(rhino_ContinuationPending),
		.classVtable = (intptr_t) vtable_rhino_ContinuationPending,
		.staticInitializer = (intptr_t) clinit_rhino_ContinuationPending,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_rhino_ContinuationPending,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 33,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 2,
		.nativeFields = (intptr_t) fields,
		.methodCount = 6,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 30,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_rhino_ContinuationPending = registerClass(&class_rhino_ContinuationPending);

}
