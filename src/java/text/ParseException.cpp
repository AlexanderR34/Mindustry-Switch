#include "java/text/ParseException.h"
#include "java/lang/Exception.h"
#include "java/lang/Object.h"
#include "java/lang/String.h"
#include "java/text/ParseException.h"
#include "java/lang/Throwable.h"

extern "C" {


void mark_java_text_ParseException(jobject object, jint mark, jint depth) {
	if (!object) {
		return;
	}
	if (depth > GC_DEPTH_ALWAYS && (object->gcMark < GC_MARK_START || object->gcMark == mark))
		return;
	if (depth > MAX_GC_MARK_DEPTH) {
		markDeepObject(object);
		return;
	}
	mark_java_lang_Exception(object, mark, depth);
	if (object->gcMark >= GC_MARK_START)
		object->gcMark = mark;
	auto self = (java_text_ParseException *) object;
	if (self->F_causedBy)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_causedBy)->clazz)->markFunction)((jobject) self->F_causedBy, mark, depth + 1);
}

void clinit_java_text_ParseException(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	clinit_java_lang_Exception(ctx);
}

void init_java_text_ParseException_java_lang_String_int(jcontext ctx, jobject self, jobject param0, jint param1) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/text/ParseException:<init>", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_text_ParseException(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(39);
	init_java_lang_Exception_java_lang_String(ctx, (frame[0].o), (frame[1].o));
	LINE_NUMBER(40);
	((java_text_ParseException *) NULL_CHECK((frame[0].o)))->F_errorOffset = (frame[2].i);
	LINE_NUMBER(41);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_java_text_ParseException_java_lang_Throwable_java_lang_String_int(jcontext ctx, jobject self, jobject param0, jobject param1, jint param2) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/text/ParseException:<init>", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_text_ParseException(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].i = param2;
	{
	LINE_NUMBER(47);
	sp[0].o = frame[0].o;
	sp += 1;
	if ((frame[2].o) != nullptr) goto label_1;
	}
	INST_ALOAD(1);
	if ((--sp)->o == nullptr) goto label_1;
	{
	sp[0].o = (jobject)((func_java_lang_Throwable_getMessage_R_java_lang_String) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_Throwable_getMessage_R_java_lang_String])(ctx, (frame[1].o));
	sp += 1;
	goto label_2;
	}
label_1:;
	INST_ALOAD(2);
label_2:;
	{
	sp -= 2;
	init_java_lang_Exception_java_lang_String(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(48);
	((java_text_ParseException *) NULL_CHECK((frame[0].o)))->F_causedBy = (jref) (frame[1].o);
	LINE_NUMBER(49);
	((java_text_ParseException *) NULL_CHECK((frame[0].o)))->F_errorOffset = (frame[3].i);
	LINE_NUMBER(50);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jint M_java_text_ParseException_getErrorOffset_R_int(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/text/ParseException:getErrorOffset", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(56);
	popStackFrame(ctx);
	return ((jint)((java_text_ParseException *) NULL_CHECK((frame[0].o)))->F_errorOffset);
	}

	popStackFrame(ctx);
}

jobject M_java_text_ParseException_getCausedBy_R_java_lang_Throwable(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/text/ParseException:getCausedBy", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(63);
	sp[0].o = (jobject)((java_text_ParseException *) NULL_CHECK((frame[0].o)))->F_causedBy;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void *vtable_java_text_ParseException[] {
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
	(void *) M_java_text_ParseException_getErrorOffset_R_int,
	(void *) M_java_text_ParseException_getCausedBy_R_java_lang_Throwable,
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
	{ "getErrorOffset", "()I" },
	{ "getCausedBy", "()Ljava/lang/Throwable;" },
};

static FieldMetadata fields[] {
	{ "errorOffset", &class_int, offsetof(java_text_ParseException, F_errorOffset), "I", 2 },
	{ "causedBy", &class_java_lang_Throwable, offsetof(java_text_ParseException, F_causedBy), "Ljava/lang/Throwable;", 2 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_java_text_ParseException_java_lang_String_int, 0, "(Ljava/lang/String;I)V", 1 },
	{ "<init>", (intptr_t) init_java_text_ParseException_java_lang_Throwable_java_lang_String_int, 0, "(Ljava/lang/Throwable;Ljava/lang/String;I)V", 0 },
	{ "getErrorOffset", (intptr_t) M_java_text_ParseException_getErrorOffset_R_int, VTABLE_java_text_ParseException_getErrorOffset_R_int, "()I", 1 },
	{ "getCausedBy", (intptr_t) M_java_text_ParseException_getCausedBy_R_java_lang_Throwable, VTABLE_java_text_ParseException_getCausedBy_R_java_lang_Throwable, "()Ljava/lang/Throwable;", 0 },
};

Class class_java_text_ParseException{
		.nativeName = (intptr_t) "java/text/ParseException",
		.parentClass = (intptr_t) &class_java_lang_Exception,
		.size = sizeof(java_text_ParseException),
		.classVtable = (intptr_t) vtable_java_text_ParseException,
		.staticInitializer = (intptr_t) clinit_java_text_ParseException,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_java_text_ParseException,
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
		.vtableSize = 27,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_java_text_ParseException = registerClass(&class_java_text_ParseException);

}
