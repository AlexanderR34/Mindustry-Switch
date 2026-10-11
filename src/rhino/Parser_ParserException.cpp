#include "rhino/Parser_ParserException.h"
#include "java/lang/Object.h"
#include "rhino/Parser_ParserException.h"
#include "rhino/Parser.h"
#include "rhino/Parser_1.h"
#include "java/lang/RuntimeException.h"
#include "java/lang/Throwable.h"

extern "C" {


void mark_rhino_Parser$ParserException(jobject object, jint mark, jint depth) {
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
	auto self = (rhino_Parser$ParserException *) object;
}

void clinit_rhino_Parser$ParserException(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	clinit_java_lang_RuntimeException(ctx);
}

void init_rhino_Parser$ParserException(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/Parser$ParserException:<init>", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_rhino_Parser$ParserException(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(83);
	init_java_lang_RuntimeException(ctx, (frame[0].o));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_rhino_Parser$ParserException_rhino_Parser$1(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/Parser$ParserException:<init>", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_rhino_Parser$ParserException(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(83);
	init_rhino_Parser$ParserException(ctx, (frame[0].o));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void *vtable_rhino_Parser$ParserException[] {
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
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_rhino_Parser$ParserException, 0, "()V", 2 },
	{ "<init>", (intptr_t) init_rhino_Parser$ParserException_rhino_Parser$1, 0, "(Lrhino/Parser$1;)V", 4096 },
};

Class class_rhino_Parser$ParserException{
		.nativeName = (intptr_t) "rhino/Parser$ParserException",
		.parentClass = (intptr_t) &class_java_lang_RuntimeException,
		.size = sizeof(rhino_Parser$ParserException),
		.classVtable = (intptr_t) vtable_rhino_Parser$ParserException,
		.staticInitializer = (intptr_t) clinit_rhino_Parser$ParserException,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_rhino_Parser$ParserException,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) &class_rhino_Parser,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 32,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 0,
		.nativeFields = (intptr_t) nullptr,
		.methodCount = 2,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 25,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_rhino_Parser$ParserException = registerClass(&class_rhino_Parser$ParserException);

}

