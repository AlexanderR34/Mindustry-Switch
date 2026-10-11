#include "rhino/JavaScriptException.h"
#include "java/lang/Integer.h"
#include "rhino/RhinoException.h"
#include "java/lang/Object.h"
#include "rhino/ScriptRuntime.h"
#include "java/lang/String.h"
#include "rhino/Context.h"
#include "rhino/Scriptable.h"
#include "rhino/IdScriptableObject.h"
#include "java/lang/RuntimeException.h"
#include "rhino/NativeError.h"
#include "java/lang/Throwable.h"
#include "rhino/JavaScriptException.h"

extern "C" {


void mark_rhino_JavaScriptException(jobject object, jint mark, jint depth) {
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
	auto self = (rhino_JavaScriptException *) object;
	if (self->F_value)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_value)->clazz)->markFunction)((jobject) self->F_value, mark, depth + 1);
}

void clinit_rhino_JavaScriptException(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	clinit_rhino_RhinoException(ctx);
}

void init_rhino_JavaScriptException_java_lang_Object_java_lang_String_int(jcontext ctx, jobject self, jobject param0, jobject param1, jint param2) {
	NULL_CHECK(self);
	jtype frame[10];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/JavaScriptException:<init>", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_rhino_JavaScriptException(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].i = param2;
	{
	LINE_NUMBER(16);
	init_rhino_RhinoException(ctx, (frame[0].o));
	LINE_NUMBER(17);
	((func_rhino_JavaScriptException_recordErrorOrigin_java_lang_String_int_java_lang_String_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_rhino_JavaScriptException_recordErrorOrigin_java_lang_String_int_java_lang_String_int])(ctx, (frame[0].o), (frame[2].o), (frame[3].i), (jobject(nullptr)), (jint(0)));
	LINE_NUMBER(18);
	((rhino_JavaScriptException *) NULL_CHECK((frame[0].o)))->F_value = (jref) (frame[1].o);
	LINE_NUMBER(21);
	if ((isInstance(ctx, (frame[1].o), &class_rhino_NativeError)) == 0) goto label_4;
	}
	{
	sp[0].o = (jobject)SM_rhino_Context_getContext_R_rhino_Context(ctx);
	jint temp0 = 10;
	LINE_NUMBER(22);
	jint temp1 = (jint)((func_rhino_Context_hasFeature_int_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_Context_hasFeature_int_R_boolean])(ctx, sp[0].o, temp0);
	if (temp1 == 0) goto label_4;
	}
	{
	LINE_NUMBER(23);
	frame[4].o = (checkCast(ctx, &class_rhino_NativeError, (frame[1].o)));
	LINE_NUMBER(24);
	jint temp0 = (jint)((func_rhino_NativeError_has_java_lang_String_rhino_Scriptable_R_boolean) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_rhino_NativeError_has_java_lang_String_rhino_Scriptable_R_boolean])(ctx, (frame[4].o), (((jobject) createStringLiteral(ctx, u8"fileName"_j))), (frame[4].o));
	if (temp0 != 0) goto label_8;
	}
	{
	LINE_NUMBER(25);
	((func_rhino_NativeError_put_java_lang_String_rhino_Scriptable_java_lang_Object) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_rhino_NativeError_put_java_lang_String_rhino_Scriptable_java_lang_Object])(ctx, (frame[4].o), (((jobject) createStringLiteral(ctx, u8"fileName"_j))), (frame[4].o), (frame[2].o));
	}
label_8:;
	{
	LINE_NUMBER(27);
	jint temp0 = (jint)((func_rhino_NativeError_has_java_lang_String_rhino_Scriptable_R_boolean) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_rhino_NativeError_has_java_lang_String_rhino_Scriptable_R_boolean])(ctx, (frame[4].o), (((jobject) createStringLiteral(ctx, u8"lineNumber"_j))), (frame[4].o));
	if (temp0 != 0) goto label_10;
	}
	{
	LINE_NUMBER(28);
	sp[0].o = frame[4].o;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"lineNumber"_j));
	sp[2].o = frame[4].o;
	sp[3].o = (jobject)SM_java_lang_Integer_valueOf_int_R_java_lang_Integer(ctx, (frame[3].i));
	((func_rhino_NativeError_put_java_lang_String_rhino_Scriptable_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_NativeError_put_java_lang_String_rhino_Scriptable_java_lang_Object])(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o);
	}
label_10:;
	{
	LINE_NUMBER(31);
	((func_rhino_NativeError_setStackProvider_rhino_RhinoException) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_rhino_NativeError_setStackProvider_rhino_RhinoException])(ctx, (frame[4].o), (frame[0].o));
	}
label_4:;
	LINE_NUMBER(33);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jobject M_rhino_JavaScriptException_details_R_java_lang_String(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/JavaScriptException:details", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(37);
	sp[0].o = (jobject)((rhino_JavaScriptException *) NULL_CHECK((frame[0].o)))->F_value;
	if (sp[0].o != nullptr) goto label_5;
	}
	{
	LINE_NUMBER(38);
	popStackFrame(ctx);
	return (((jobject) createStringLiteral(ctx, u8"null"_j)));
	}
label_5:;
	{
	LINE_NUMBER(39);
	sp[0].o = (jobject)((rhino_JavaScriptException *) NULL_CHECK((frame[0].o)))->F_value;
	if ((isInstance(ctx, sp[0].o, &class_rhino_NativeError)) == 0) goto label_0;
	}
	{
	LINE_NUMBER(40);
	sp[0].o = (jobject)((rhino_JavaScriptException *) NULL_CHECK((frame[0].o)))->F_value;
	sp[0].o = (jobject)((func_java_lang_Object_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_Object_toString_R_java_lang_String])(ctx, sp[0].o);
	popStackFrame(ctx);
	return sp[0].o;
	}
label_0:;
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_RuntimeException))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(43);
	sp[0].o = (jobject)((rhino_JavaScriptException *) NULL_CHECK((frame[0].o)))->F_value;
	sp[0].o = (jobject)SM_rhino_ScriptRuntime_toString_java_lang_Object_R_java_lang_String(ctx, sp[0].o);
	sp += 1;
	}
	popExceptionFrame(frameRef);
	popStackFrame(ctx);
	INST_ARETURN();
label_2:;
	{
	sp -= 1;
	LINE_NUMBER(44);
	frame[1].o = sp[0].o;
	LINE_NUMBER(46);
	sp[0].o = (jobject)((rhino_JavaScriptException *) NULL_CHECK((frame[0].o)))->F_value;
	if ((isInstance(ctx, sp[0].o, &class_rhino_Scriptable)) == 0) goto label_9;
	}
	{
	LINE_NUMBER(47);
	sp[0].o = (jobject)((rhino_JavaScriptException *) NULL_CHECK((frame[0].o)))->F_value;
	sp[0].o = (jobject)SM_rhino_ScriptRuntime_defaultObjectToString_rhino_Scriptable_R_java_lang_String(ctx, (checkCast(ctx, &class_rhino_Scriptable, sp[0].o)));
	popStackFrame(ctx);
	return sp[0].o;
	}
label_9:;
	{
	LINE_NUMBER(49);
	sp[0].o = (jobject)((rhino_JavaScriptException *) NULL_CHECK((frame[0].o)))->F_value;
	sp[0].o = (jobject)((func_java_lang_Object_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_Object_toString_R_java_lang_String])(ctx, sp[0].o);
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_rhino_JavaScriptException_getValue_R_java_lang_Object(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/JavaScriptException:getValue", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(57);
	sp[0].o = (jobject)((rhino_JavaScriptException *) NULL_CHECK((frame[0].o)))->F_value;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void *vtable_rhino_JavaScriptException[] {
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
	(void *) M_rhino_JavaScriptException_details_R_java_lang_String,
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
	(void *) M_rhino_JavaScriptException_getValue_R_java_lang_Object,
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
	{ "getValue", "()Ljava/lang/Object;" },
};

static FieldMetadata fields[] {
	{ "value", &class_java_lang_Object, offsetof(rhino_JavaScriptException, F_value), "Ljava/lang/Object;", 18 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_rhino_JavaScriptException_java_lang_Object_java_lang_String_int, 0, "(Ljava/lang/Object;Ljava/lang/String;I)V", 1 },
	{ "details", (intptr_t) M_rhino_JavaScriptException_details_R_java_lang_String, VTABLE_rhino_JavaScriptException_details_R_java_lang_String, "()Ljava/lang/String;", 1 },
	{ "getValue", (intptr_t) M_rhino_JavaScriptException_getValue_R_java_lang_Object, VTABLE_rhino_JavaScriptException_getValue_R_java_lang_Object, "()Ljava/lang/Object;", 1 },
};

Class class_rhino_JavaScriptException{
		.nativeName = (intptr_t) "rhino/JavaScriptException",
		.parentClass = (intptr_t) &class_rhino_RhinoException,
		.size = sizeof(rhino_JavaScriptException),
		.classVtable = (intptr_t) vtable_rhino_JavaScriptException,
		.staticInitializer = (intptr_t) clinit_rhino_JavaScriptException,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_rhino_JavaScriptException,
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
		.methodCount = 3,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 41,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_rhino_JavaScriptException = registerClass(&class_rhino_JavaScriptException);

}
