#include "rhino/EcmaError.h"
#include "rhino/RhinoException.h"
#include "java/lang/StringBuilder.h"
#include "java/lang/Object.h"
#include "java/lang/String.h"
#include "rhino/EcmaError.h"
#include "java/lang/Throwable.h"

extern "C" {


void mark_rhino_EcmaError(jobject object, jint mark, jint depth) {
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
	auto self = (rhino_EcmaError *) object;
	if (self->F_errorName)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_errorName)->clazz)->markFunction)((jobject) self->F_errorName, mark, depth + 1);
	if (self->F_errorMessage)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_errorMessage)->clazz)->markFunction)((jobject) self->F_errorMessage, mark, depth + 1);
}

void clinit_rhino_EcmaError(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	clinit_rhino_RhinoException(ctx);
}

void init_rhino_EcmaError_java_lang_String_java_lang_String_java_lang_String_int_java_lang_String_int(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2, jint param3, jobject param4, jint param5) {
	NULL_CHECK(self);
	jtype frame[12];
	auto stack = &frame[7];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/EcmaError:<init>", 12 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_rhino_EcmaError(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].o = param2;
	frame[4].i = param3;
	frame[5].o = param4;
	frame[6].i = param5;
	{
	LINE_NUMBER(27);
	init_rhino_RhinoException(ctx, (frame[0].o));
	LINE_NUMBER(28);
	((func_rhino_EcmaError_recordErrorOrigin_java_lang_String_int_java_lang_String_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_rhino_EcmaError_recordErrorOrigin_java_lang_String_int_java_lang_String_int])(ctx, (frame[0].o), (frame[3].o), (frame[4].i), (frame[5].o), (frame[6].i));
	LINE_NUMBER(29);
	((rhino_EcmaError *) NULL_CHECK((frame[0].o)))->F_errorName = (jref) (frame[1].o);
	LINE_NUMBER(30);
	((rhino_EcmaError *) NULL_CHECK((frame[0].o)))->F_errorMessage = (jref) (frame[2].o);
	LINE_NUMBER(31);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_rhino_EcmaError_details_R_java_lang_String(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/EcmaError:details", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(35);
	clinit_java_lang_StringBuilder(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[0].o);
	sp[1].o = (jobject)((rhino_EcmaError *) NULL_CHECK((frame[0].o)))->F_errorName;
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, sp[1].o);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8": "_j))));
	sp[1].o = (jobject)((rhino_EcmaError *) NULL_CHECK((frame[0].o)))->F_errorMessage;
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, sp[1].o);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[0].o);
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_rhino_EcmaError_getName_R_java_lang_String(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/EcmaError:getName", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(50);
	sp[0].o = (jobject)((rhino_EcmaError *) NULL_CHECK((frame[0].o)))->F_errorName;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_rhino_EcmaError_getErrorMessage_R_java_lang_String(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/EcmaError:getErrorMessage", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(60);
	sp[0].o = (jobject)((rhino_EcmaError *) NULL_CHECK((frame[0].o)))->F_errorMessage;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void *vtable_rhino_EcmaError[] {
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
	(void *) M_rhino_EcmaError_details_R_java_lang_String,
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
	(void *) M_rhino_EcmaError_getName_R_java_lang_String,
	(void *) M_rhino_EcmaError_getErrorMessage_R_java_lang_String,
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
	{ "getName", "()Ljava/lang/String;" },
	{ "getErrorMessage", "()Ljava/lang/String;" },
};

static FieldMetadata fields[] {
	{ "errorName", &class_java_lang_String, offsetof(rhino_EcmaError, F_errorName), "Ljava/lang/String;", 18 },
	{ "errorMessage", &class_java_lang_String, offsetof(rhino_EcmaError, F_errorMessage), "Ljava/lang/String;", 18 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_rhino_EcmaError_java_lang_String_java_lang_String_java_lang_String_int_java_lang_String_int, 0, "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;ILjava/lang/String;I)V", 0 },
	{ "details", (intptr_t) M_rhino_EcmaError_details_R_java_lang_String, VTABLE_rhino_EcmaError_details_R_java_lang_String, "()Ljava/lang/String;", 1 },
	{ "getName", (intptr_t) M_rhino_EcmaError_getName_R_java_lang_String, VTABLE_rhino_EcmaError_getName_R_java_lang_String, "()Ljava/lang/String;", 1 },
	{ "getErrorMessage", (intptr_t) M_rhino_EcmaError_getErrorMessage_R_java_lang_String, VTABLE_rhino_EcmaError_getErrorMessage_R_java_lang_String, "()Ljava/lang/String;", 1 },
};

Class class_rhino_EcmaError{
		.nativeName = (intptr_t) "rhino/EcmaError",
		.parentClass = (intptr_t) &class_rhino_RhinoException,
		.size = sizeof(rhino_EcmaError),
		.classVtable = (intptr_t) vtable_rhino_EcmaError,
		.staticInitializer = (intptr_t) clinit_rhino_EcmaError,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_rhino_EcmaError,
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
		.methodCount = 4,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 42,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_rhino_EcmaError = registerClass(&class_rhino_EcmaError);

}
