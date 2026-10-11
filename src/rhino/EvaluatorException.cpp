#include "rhino/EvaluatorException.h"
#include "rhino/RhinoException.h"
#include "java/lang/Object.h"
#include "java/lang/String.h"
#include "java/lang/Throwable.h"
#include "rhino/EvaluatorException.h"

extern "C" {


void mark_rhino_EvaluatorException(jobject object, jint mark, jint depth) {
	if (!object) {
		return;
	}
	if (depth > GC_DEPTH_ALWAYS && (object->gcMark < GC_MARK_START || object->gcMark == mark))
		return;
	if (depth > MAX_GC_MARK_DEPTH) {
		markDeepObject(object);
		return;
	}
	mark_rhino_RhinoException(object, mark, depth);
	if (object->gcMark >= GC_MARK_START)
		object->gcMark = mark;
	auto self = (rhino_EvaluatorException *) object;
}

void clinit_rhino_EvaluatorException(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	clinit_rhino_RhinoException(ctx);
}

void init_rhino_EvaluatorException_java_lang_String(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/EvaluatorException:<init>", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_rhino_EvaluatorException(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(8);
	init_rhino_RhinoException_java_lang_String(ctx, (frame[0].o), (frame[1].o));
	LINE_NUMBER(9);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_rhino_EvaluatorException_java_lang_String_java_lang_String_int(jcontext ctx, jobject self, jobject param0, jobject param1, jint param2) {
	NULL_CHECK(self);
	jtype frame[10];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/EvaluatorException:<init>", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_rhino_EvaluatorException(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].i = param2;
	{
	LINE_NUMBER(22);
	init_rhino_EvaluatorException_java_lang_String_java_lang_String_int_java_lang_String_int(ctx, (frame[0].o), (frame[1].o), (frame[2].o), (frame[3].i), (jobject(nullptr)), (jint(0)));
	LINE_NUMBER(23);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_rhino_EvaluatorException_java_lang_String_java_lang_String_int_java_lang_String_int(jcontext ctx, jobject self, jobject param0, jobject param1, jint param2, jobject param3, jint param4) {
	NULL_CHECK(self);
	jtype frame[11];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/EvaluatorException:<init>", 11 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_rhino_EvaluatorException(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].i = param2;
	frame[4].o = param3;
	frame[5].i = param4;
	{
	LINE_NUMBER(40);
	init_rhino_RhinoException_java_lang_String(ctx, (frame[0].o), (frame[1].o));
	LINE_NUMBER(41);
	((func_rhino_EvaluatorException_recordErrorOrigin_java_lang_String_int_java_lang_String_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_rhino_EvaluatorException_recordErrorOrigin_java_lang_String_int_java_lang_String_int])(ctx, (frame[0].o), (frame[2].o), (frame[3].i), (frame[4].o), (frame[5].i));
	LINE_NUMBER(42);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void *vtable_rhino_EvaluatorException[] {
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
	(void *) M_rhino_RhinoException_getMessage_R_java_lang_String,
	(void *) M_java_lang_Throwable_fillInStack,
	(void *) M_java_lang_Throwable_fillInStackTrace_R_java_lang_Throwable,
	(void *) M_java_lang_Throwable_printStackTrace,
	(void *) M_rhino_RhinoException_printStackTrace_java_io_PrintStream,
	(void *) M_rhino_RhinoException_printStackTrace_java_io_PrintWriter,
	(void *) M_java_lang_Throwable_getStackTrace_R_Array1_java_lang_StackTraceElement,
	(void *) M_java_lang_Throwable_setStackTrace_Array1_java_lang_StackTraceElement,
	(void *) M_java_lang_Throwable_addSuppressed_java_lang_Throwable,
	(void *) M_java_lang_Throwable_getSuppressed_R_Array1_java_lang_Throwable,
	(void *) M_java_lang_Throwable_getLocalizedMessage_R_java_lang_String,
	(void *) M_rhino_RhinoException_details_R_java_lang_String,
	(void *) M_rhino_RhinoException_sourceName_R_java_lang_String,
	(void *) M_rhino_RhinoException_initSourceName_java_lang_String,
	(void *) M_rhino_RhinoException_lineNumber_R_int,
	(void *) M_rhino_RhinoException_initLineNumber_int,
	(void *) M_rhino_RhinoException_columnNumber_R_int,
	(void *) M_rhino_RhinoException_initColumnNumber_int,
	(void *) M_rhino_RhinoException_lineSource_R_java_lang_String,
	(void *) M_rhino_RhinoException_initLineSource_java_lang_String,
	(void *) M_rhino_RhinoException_recordErrorOrigin_java_lang_String_int_java_lang_String_int,
	(void *) M_rhino_RhinoException_generateStackTrace_R_java_lang_String,
	(void *) M_rhino_RhinoException_getScriptStackTrace_R_java_lang_String,
	(void *) M_rhino_RhinoException_getScriptStackTrace_int_java_lang_String_R_java_lang_String,
	(void *) M_rhino_RhinoException_getScriptStack_R_Array1_rhino_ScriptStackElement,
	(void *) M_rhino_RhinoException_getScriptStack_int_java_lang_String_R_Array1_rhino_ScriptStackElement,
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
	{ "details", "()Ljava/lang/String;" },
	{ "sourceName", "()Ljava/lang/String;" },
	{ "initSourceName", "(Ljava/lang/String;)V" },
	{ "lineNumber", "()I" },
	{ "initLineNumber", "(I)V" },
	{ "columnNumber", "()I" },
	{ "initColumnNumber", "(I)V" },
	{ "lineSource", "()Ljava/lang/String;" },
	{ "initLineSource", "(Ljava/lang/String;)V" },
	{ "recordErrorOrigin", "(Ljava/lang/String;ILjava/lang/String;I)V" },
	{ "generateStackTrace", "()Ljava/lang/String;" },
	{ "getScriptStackTrace", "()Ljava/lang/String;" },
	{ "getScriptStackTrace", "(ILjava/lang/String;)Ljava/lang/String;" },
	{ "getScriptStack", "()[Lrhino/ScriptStackElement;" },
	{ "getScriptStack", "(ILjava/lang/String;)[Lrhino/ScriptStackElement;" },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_rhino_EvaluatorException_java_lang_String, 0, "(Ljava/lang/String;)V", 1 },
	{ "<init>", (intptr_t) init_rhino_EvaluatorException_java_lang_String_java_lang_String_int, 0, "(Ljava/lang/String;Ljava/lang/String;I)V", 1 },
	{ "<init>", (intptr_t) init_rhino_EvaluatorException_java_lang_String_java_lang_String_int_java_lang_String_int, 0, "(Ljava/lang/String;Ljava/lang/String;ILjava/lang/String;I)V", 1 },
};

Class class_rhino_EvaluatorException{
		.nativeName = (intptr_t) "rhino/EvaluatorException",
		.parentClass = (intptr_t) &class_rhino_RhinoException,
		.size = sizeof(rhino_EvaluatorException),
		.classVtable = (intptr_t) vtable_rhino_EvaluatorException,
		.staticInitializer = (intptr_t) clinit_rhino_EvaluatorException,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_rhino_EvaluatorException,
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
		.methodCount = 3,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 40,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_rhino_EvaluatorException = registerClass(&class_rhino_EvaluatorException);

}
