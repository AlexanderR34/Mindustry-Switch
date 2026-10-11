#include "java/nio/charset/IllegalCharsetNameException.h"
#include "java/lang/Object.h"
#include "java/lang/String.h"
#include "java/lang/IllegalArgumentException.h"
#include "java/nio/charset/IllegalCharsetNameException.h"
#include "java/lang/Throwable.h"

extern "C" {

jlong SF_java_nio_charset_IllegalCharsetNameException_serialVersionUID;

void mark_java_nio_charset_IllegalCharsetNameException(jobject object, jint mark, jint depth) {
	if (!object) {
		return;
	}
	if (depth > GC_DEPTH_ALWAYS && (object->gcMark < GC_MARK_START || object->gcMark == mark))
		return;
	if (depth > MAX_GC_MARK_DEPTH) {
		markDeepObject(object);
		return;
	}
	mark_java_lang_IllegalArgumentException(object, mark, depth);
	if (object->gcMark >= GC_MARK_START)
		object->gcMark = mark;
	auto self = (java_nio_charset_IllegalCharsetNameException *) object;
	if (self->F_charsetName)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_charsetName)->clazz)->markFunction)((jobject) self->F_charsetName, mark, depth + 1);
}

void clinit_java_nio_charset_IllegalCharsetNameException(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	clinit_java_lang_IllegalArgumentException(ctx);
	SF_java_nio_charset_IllegalCharsetNameException_serialVersionUID = jlong(1457525358470002989ll);
}

void init_java_nio_charset_IllegalCharsetNameException_java_lang_String(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/nio/charset/IllegalCharsetNameException:<init>", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_nio_charset_IllegalCharsetNameException(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(8);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)SM_java_lang_String_valueOf_java_lang_Object_R_java_lang_String(ctx, (frame[1].o));
	init_java_lang_IllegalArgumentException_java_lang_String(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(9);
	((java_nio_charset_IllegalCharsetNameException *) NULL_CHECK((frame[0].o)))->F_charsetName = (jref) (frame[1].o);
	LINE_NUMBER(10);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_java_nio_charset_IllegalCharsetNameException_getCharsetName_R_java_lang_String(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/nio/charset/IllegalCharsetNameException:getCharsetName", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(13);
	sp[0].o = (jobject)((java_nio_charset_IllegalCharsetNameException *) NULL_CHECK((frame[0].o)))->F_charsetName;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void *vtable_java_nio_charset_IllegalCharsetNameException[] {
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
	(void *) M_java_nio_charset_IllegalCharsetNameException_getCharsetName_R_java_lang_String,
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
	{ "getCharsetName", "()Ljava/lang/String;" },
};

static FieldMetadata fields[] {
	{ "serialVersionUID", &class_long, (intptr_t) &SF_java_nio_charset_IllegalCharsetNameException_serialVersionUID, "J", 26 },
	{ "charsetName", &class_java_lang_String, offsetof(java_nio_charset_IllegalCharsetNameException, F_charsetName), "Ljava/lang/String;", 2 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_java_nio_charset_IllegalCharsetNameException_java_lang_String, 0, "(Ljava/lang/String;)V", 1 },
	{ "getCharsetName", (intptr_t) M_java_nio_charset_IllegalCharsetNameException_getCharsetName_R_java_lang_String, VTABLE_java_nio_charset_IllegalCharsetNameException_getCharsetName_R_java_lang_String, "()Ljava/lang/String;", 1 },
};

Class class_java_nio_charset_IllegalCharsetNameException{
		.nativeName = (intptr_t) "java/nio/charset/IllegalCharsetNameException",
		.parentClass = (intptr_t) &class_java_lang_IllegalArgumentException,
		.size = sizeof(java_nio_charset_IllegalCharsetNameException),
		.classVtable = (intptr_t) vtable_java_nio_charset_IllegalCharsetNameException,
		.staticInitializer = (intptr_t) clinit_java_nio_charset_IllegalCharsetNameException,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_java_nio_charset_IllegalCharsetNameException,
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
		.methodCount = 2,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 26,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_java_nio_charset_IllegalCharsetNameException = registerClass(&class_java_nio_charset_IllegalCharsetNameException);

}
