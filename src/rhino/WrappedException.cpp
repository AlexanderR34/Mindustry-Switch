#include "rhino/WrappedException.h"
#include "java/lang/StringBuilder.h"
#include "rhino/RhinoException.h"
#include "java/lang/Object.h"
#include "java/lang/String.h"
#include "rhino/WrappedException.h"
#include "rhino/Context.h"
#include "java/lang/Throwable.h"
#include "rhino/EvaluatorException.h"

extern "C" {


void mark_rhino_WrappedException(jobject object, jint mark, jint depth) {
	if (!object) {
		return;
	}
	if (depth > GC_DEPTH_ALWAYS && (object->gcMark < GC_MARK_START || object->gcMark == mark))
		return;
	if (depth > MAX_GC_MARK_DEPTH) {
		markDeepObject(object);
		return;
	}
	mark_rhino_EvaluatorException(object, mark, depth);
	if (object->gcMark >= GC_MARK_START)
		object->gcMark = mark;
	auto self = (rhino_WrappedException *) object;
	if (self->F_exception)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_exception)->clazz)->markFunction)((jobject) self->F_exception, mark, depth + 1);
}

void clinit_rhino_WrappedException(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	clinit_rhino_EvaluatorException(ctx);
}

void init_rhino_WrappedException_java_lang_Throwable(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/WrappedException:<init>", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_rhino_WrappedException(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(15);
	sp[0].o = frame[0].o;
	clinit_java_lang_StringBuilder(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[1].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"Wrapped "_j))));
	sp[2].o = (jobject)((func_java_lang_Throwable_toString_R_java_lang_String) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_Throwable_toString_R_java_lang_String])(ctx, (frame[1].o));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, sp[2].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[1].o);
	init_rhino_EvaluatorException_java_lang_String(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(16);
	((rhino_WrappedException *) NULL_CHECK((frame[0].o)))->F_exception = (jref) (frame[1].o);
	LINE_NUMBER(17);
	sp[0].o = (jobject)((func_rhino_WrappedException_initCause_java_lang_Throwable_R_java_lang_Throwable) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_rhino_WrappedException_initCause_java_lang_Throwable_R_java_lang_Throwable])(ctx, (frame[0].o), (frame[1].o));
	LINE_NUMBER(19);
	sp[0].o = (jobject) createArray(ctx, &class_int, (jint(1)));
	ARRAY_ACCESS(jint, sp[0].o, (jint(0))) = (jint(0));
	frame[2].o = sp[0].o;
	LINE_NUMBER(20);
	sp[0].o = (jobject)SM_rhino_Context_getSourcePositionFromStack_Array1_int_R_java_lang_String(ctx, (frame[2].o));
	frame[3].o = sp[0].o;
	LINE_NUMBER(21);
	frame[4].i = ((jint)ARRAY_ACCESS(jint, (frame[2].o), (jint(0))));
	LINE_NUMBER(22);
	if ((frame[3].o) == nullptr) goto label_7;
	}
	{
	LINE_NUMBER(23);
	((func_rhino_WrappedException_initSourceName_java_lang_String) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_rhino_WrappedException_initSourceName_java_lang_String])(ctx, (frame[0].o), (frame[3].o));
	}
label_7:;
	{
	LINE_NUMBER(25);
	if ((frame[4].i) == 0) goto label_9;
	}
	{
	LINE_NUMBER(26);
	((func_rhino_WrappedException_initLineNumber_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_rhino_WrappedException_initLineNumber_int])(ctx, (frame[0].o), (frame[4].i));
	}
label_9:;
	LINE_NUMBER(28);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jobject M_rhino_WrappedException_getWrappedException_R_java_lang_Throwable(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/WrappedException:getWrappedException", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(36);
	sp[0].o = (jobject)((rhino_WrappedException *) NULL_CHECK((frame[0].o)))->F_exception;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void *vtable_rhino_WrappedException[] {
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
	(void *) M_rhino_WrappedException_getWrappedException_R_java_lang_Throwable,
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
	{ "getWrappedException", "()Ljava/lang/Throwable;" },
};

static FieldMetadata fields[] {
	{ "exception", &class_java_lang_Throwable, offsetof(rhino_WrappedException, F_exception), "Ljava/lang/Throwable;", 18 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_rhino_WrappedException_java_lang_Throwable, 0, "(Ljava/lang/Throwable;)V", 1 },
	{ "getWrappedException", (intptr_t) M_rhino_WrappedException_getWrappedException_R_java_lang_Throwable, VTABLE_rhino_WrappedException_getWrappedException_R_java_lang_Throwable, "()Ljava/lang/Throwable;", 1 },
};

Class class_rhino_WrappedException{
		.nativeName = (intptr_t) "rhino/WrappedException",
		.parentClass = (intptr_t) &class_rhino_EvaluatorException,
		.size = sizeof(rhino_WrappedException),
		.classVtable = (intptr_t) vtable_rhino_WrappedException,
		.staticInitializer = (intptr_t) clinit_rhino_WrappedException,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_rhino_WrappedException,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 33,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 1,
		.nativeFields = (intptr_t) fields,
		.methodCount = 2,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 41,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_rhino_WrappedException = registerClass(&class_rhino_WrappedException);

}
