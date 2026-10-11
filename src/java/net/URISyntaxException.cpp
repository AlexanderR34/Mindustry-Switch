#include "java/net/URISyntaxException.h"
#include "java/lang/Exception.h"
#include "java/lang/Object.h"
#include "java/lang/String.h"
#include "java/net/URISyntaxException.h"
#include "java/lang/Throwable.h"

extern "C" {


void mark_java_net_URISyntaxException(jobject object, jint mark, jint depth) {
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
	auto self = (java_net_URISyntaxException *) object;
	if (self->F_input)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_input)->clazz)->markFunction)((jobject) self->F_input, mark, depth + 1);
	if (self->F_reason)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_reason)->clazz)->markFunction)((jobject) self->F_reason, mark, depth + 1);
}

void clinit_java_net_URISyntaxException(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	clinit_java_lang_Exception(ctx);
}

void init_java_net_URISyntaxException_java_lang_String_java_lang_String(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/net/URISyntaxException:<init>", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_net_URISyntaxException(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(41);
	init_java_net_URISyntaxException_java_lang_String_java_lang_String_int(ctx, (frame[0].o), (frame[1].o), (frame[2].o), (jint(-1)));
	LINE_NUMBER(42);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_java_net_URISyntaxException_java_lang_String_java_lang_String_int(jcontext ctx, jobject self, jobject param0, jobject param1, jint param2) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/net/URISyntaxException:<init>", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_net_URISyntaxException(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].i = param2;
	{
	LINE_NUMBER(51);
	init_java_lang_Exception_java_lang_String(ctx, (frame[0].o), (frame[2].o));
	LINE_NUMBER(52);
	((java_net_URISyntaxException *) NULL_CHECK((frame[0].o)))->F_reason = (jref) (frame[2].o);
	LINE_NUMBER(53);
	((java_net_URISyntaxException *) NULL_CHECK((frame[0].o)))->F_index = (frame[3].i);
	LINE_NUMBER(54);
	((java_net_URISyntaxException *) NULL_CHECK((frame[0].o)))->F_input = (jref) (frame[1].o);
	LINE_NUMBER(55);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jint M_java_net_URISyntaxException_getIndex_R_int(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/net/URISyntaxException:getIndex", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(61);
	popStackFrame(ctx);
	return ((jint)((java_net_URISyntaxException *) NULL_CHECK((frame[0].o)))->F_index);
	}

	popStackFrame(ctx);
}

void M_java_net_URISyntaxException_setIndex_int(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/net/URISyntaxException:setIndex", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(68);
	((java_net_URISyntaxException *) NULL_CHECK((frame[0].o)))->F_index = (frame[1].i);
	LINE_NUMBER(69);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_java_net_URISyntaxException_getInput_R_java_lang_String(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/net/URISyntaxException:getInput", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(75);
	sp[0].o = (jobject)((java_net_URISyntaxException *) NULL_CHECK((frame[0].o)))->F_input;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void M_java_net_URISyntaxException_setInput_java_lang_String(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/net/URISyntaxException:setInput", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(82);
	((java_net_URISyntaxException *) NULL_CHECK((frame[0].o)))->F_input = (jref) (frame[1].o);
	LINE_NUMBER(83);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_java_net_URISyntaxException_getReason_R_java_lang_String(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/net/URISyntaxException:getReason", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(89);
	sp[0].o = (jobject)((java_net_URISyntaxException *) NULL_CHECK((frame[0].o)))->F_reason;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void M_java_net_URISyntaxException_setReason_java_lang_String(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/net/URISyntaxException:setReason", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(96);
	((java_net_URISyntaxException *) NULL_CHECK((frame[0].o)))->F_reason = (jref) (frame[1].o);
	LINE_NUMBER(97);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void *vtable_java_net_URISyntaxException[] {
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
	(void *) M_java_net_URISyntaxException_getIndex_R_int,
	(void *) M_java_net_URISyntaxException_setIndex_int,
	(void *) M_java_net_URISyntaxException_getInput_R_java_lang_String,
	(void *) M_java_net_URISyntaxException_setInput_java_lang_String,
	(void *) M_java_net_URISyntaxException_getReason_R_java_lang_String,
	(void *) M_java_net_URISyntaxException_setReason_java_lang_String,
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
	{ "getIndex", "()I" },
	{ "setIndex", "(I)V" },
	{ "getInput", "()Ljava/lang/String;" },
	{ "setInput", "(Ljava/lang/String;)V" },
	{ "getReason", "()Ljava/lang/String;" },
	{ "setReason", "(Ljava/lang/String;)V" },
};

static FieldMetadata fields[] {
	{ "index", &class_int, offsetof(java_net_URISyntaxException, F_index), "I", 2 },
	{ "input", &class_java_lang_String, offsetof(java_net_URISyntaxException, F_input), "Ljava/lang/String;", 2 },
	{ "reason", &class_java_lang_String, offsetof(java_net_URISyntaxException, F_reason), "Ljava/lang/String;", 2 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_java_net_URISyntaxException_java_lang_String_java_lang_String, 0, "(Ljava/lang/String;Ljava/lang/String;)V", 1 },
	{ "<init>", (intptr_t) init_java_net_URISyntaxException_java_lang_String_java_lang_String_int, 0, "(Ljava/lang/String;Ljava/lang/String;I)V", 1 },
	{ "getIndex", (intptr_t) M_java_net_URISyntaxException_getIndex_R_int, VTABLE_java_net_URISyntaxException_getIndex_R_int, "()I", 1 },
	{ "setIndex", (intptr_t) M_java_net_URISyntaxException_setIndex_int, VTABLE_java_net_URISyntaxException_setIndex_int, "(I)V", 1 },
	{ "getInput", (intptr_t) M_java_net_URISyntaxException_getInput_R_java_lang_String, VTABLE_java_net_URISyntaxException_getInput_R_java_lang_String, "()Ljava/lang/String;", 1 },
	{ "setInput", (intptr_t) M_java_net_URISyntaxException_setInput_java_lang_String, VTABLE_java_net_URISyntaxException_setInput_java_lang_String, "(Ljava/lang/String;)V", 1 },
	{ "getReason", (intptr_t) M_java_net_URISyntaxException_getReason_R_java_lang_String, VTABLE_java_net_URISyntaxException_getReason_R_java_lang_String, "()Ljava/lang/String;", 1 },
	{ "setReason", (intptr_t) M_java_net_URISyntaxException_setReason_java_lang_String, VTABLE_java_net_URISyntaxException_setReason_java_lang_String, "(Ljava/lang/String;)V", 1 },
};

Class class_java_net_URISyntaxException{
		.nativeName = (intptr_t) "java/net/URISyntaxException",
		.parentClass = (intptr_t) &class_java_lang_Exception,
		.size = sizeof(java_net_URISyntaxException),
		.classVtable = (intptr_t) vtable_java_net_URISyntaxException,
		.staticInitializer = (intptr_t) clinit_java_net_URISyntaxException,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_java_net_URISyntaxException,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 33,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 3,
		.nativeFields = (intptr_t) fields,
		.methodCount = 8,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 31,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_java_net_URISyntaxException = registerClass(&class_java_net_URISyntaxException);

}
