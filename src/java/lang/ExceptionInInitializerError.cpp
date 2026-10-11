#include "java/lang/ExceptionInInitializerError.h"
#include "java/lang/LinkageError.h"
#include "java/lang/Object.h"
#include "java/lang/String.h"
#include "java/lang/ExceptionInInitializerError.h"
#include "java/lang/Throwable.h"

extern "C" {


void mark_java_lang_ExceptionInInitializerError(jobject object, jint mark, jint depth) {
	if (!object) {
		return;
	}
	if (depth > GC_DEPTH_ALWAYS && (object->gcMark < GC_MARK_START || object->gcMark == mark))
		return;
	if (depth > MAX_GC_MARK_DEPTH) {
		markDeepObject(object);
		return;
	}
	mark_java_lang_LinkageError(object, mark, depth);
	if (object->gcMark >= GC_MARK_START)
		object->gcMark = mark;
	auto self = (java_lang_ExceptionInInitializerError *) object;
}

void clinit_java_lang_ExceptionInInitializerError(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	clinit_java_lang_LinkageError(ctx);
}

void init_java_lang_ExceptionInInitializerError(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/lang/ExceptionInInitializerError:<init>", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_lang_ExceptionInInitializerError(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(51);
	init_java_lang_LinkageError(ctx, (frame[0].o));
	LINE_NUMBER(52);
	sp[0].o = (jobject)((func_java_lang_ExceptionInInitializerError_initCause_java_lang_Throwable_R_java_lang_Throwable) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_lang_ExceptionInInitializerError_initCause_java_lang_Throwable_R_java_lang_Throwable])(ctx, (frame[0].o), (jobject(nullptr)));
	LINE_NUMBER(53);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_java_lang_ExceptionInInitializerError_java_lang_Throwable(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/lang/ExceptionInInitializerError:<init>", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_lang_ExceptionInInitializerError(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(64);
	init_java_lang_LinkageError_java_lang_String_java_lang_Throwable(ctx, (frame[0].o), (jobject(nullptr)), (frame[1].o));
	LINE_NUMBER(65);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_java_lang_ExceptionInInitializerError_java_lang_String(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/lang/ExceptionInInitializerError:<init>", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_lang_ExceptionInInitializerError(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(77);
	init_java_lang_LinkageError_java_lang_String_java_lang_Throwable(ctx, (frame[0].o), (frame[1].o), (jobject(nullptr)));
	LINE_NUMBER(78);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_java_lang_ExceptionInInitializerError_getException_R_java_lang_Throwable(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/lang/ExceptionInInitializerError:getException", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(94);
	sp[0].o = (jobject)M_java_lang_Throwable_getCause_R_java_lang_Throwable(ctx, (frame[0].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void *vtable_java_lang_ExceptionInInitializerError[] {
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
	(void *) M_java_lang_ExceptionInInitializerError_getException_R_java_lang_Throwable,
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
	{ "getException", "()Ljava/lang/Throwable;" },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_java_lang_ExceptionInInitializerError, 0, "()V", 1 },
	{ "<init>", (intptr_t) init_java_lang_ExceptionInInitializerError_java_lang_Throwable, 0, "(Ljava/lang/Throwable;)V", 1 },
	{ "<init>", (intptr_t) init_java_lang_ExceptionInInitializerError_java_lang_String, 0, "(Ljava/lang/String;)V", 1 },
	{ "getException", (intptr_t) M_java_lang_ExceptionInInitializerError_getException_R_java_lang_Throwable, VTABLE_java_lang_ExceptionInInitializerError_getException_R_java_lang_Throwable, "()Ljava/lang/Throwable;", 1 },
};

Class class_java_lang_ExceptionInInitializerError{
		.nativeName = (intptr_t) "java/lang/ExceptionInInitializerError",
		.parentClass = (intptr_t) &class_java_lang_LinkageError,
		.size = sizeof(java_lang_ExceptionInInitializerError),
		.classVtable = (intptr_t) vtable_java_lang_ExceptionInInitializerError,
		.staticInitializer = (intptr_t) clinit_java_lang_ExceptionInInitializerError,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_java_lang_ExceptionInInitializerError,
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
		.methodCount = 4,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 26,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_java_lang_ExceptionInInitializerError = registerClass(&class_java_lang_ExceptionInInitializerError);

}
