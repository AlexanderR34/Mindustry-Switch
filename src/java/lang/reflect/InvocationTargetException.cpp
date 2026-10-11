#include "java/lang/reflect/InvocationTargetException.h"
#include "java/lang/Object.h"
#include "java/lang/String.h"
#include "java/lang/reflect/InvocationTargetException.h"
#include "java/lang/ReflectiveOperationException.h"
#include "java/lang/Throwable.h"

extern "C" {

jlong SF_java_lang_reflect_InvocationTargetException_serialVersionUID;

void mark_java_lang_reflect_InvocationTargetException(jobject object, jint mark, jint depth) {
	if (!object) {
		return;
	}
	if (depth > GC_DEPTH_ALWAYS && (object->gcMark < GC_MARK_START || object->gcMark == mark))
		return;
	if (depth > MAX_GC_MARK_DEPTH) {
		markDeepObject(object);
		return;
	}
	mark_java_lang_ReflectiveOperationException(object, mark, depth);
	if (object->gcMark >= GC_MARK_START)
		object->gcMark = mark;
	auto self = (java_lang_reflect_InvocationTargetException *) object;
	if (self->F_target)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_target)->clazz)->markFunction)((jobject) self->F_target, mark, depth + 1);
}

void clinit_java_lang_reflect_InvocationTargetException(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	clinit_java_lang_ReflectiveOperationException(ctx);
	SF_java_lang_reflect_InvocationTargetException_serialVersionUID = jlong(4085088731926701167ll);
}

void init_java_lang_reflect_InvocationTargetException(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/lang/reflect/InvocationTargetException:<init>", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_lang_reflect_InvocationTargetException(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(63);
	init_java_lang_ReflectiveOperationException_java_lang_Throwable(ctx, (frame[0].o), (checkCast(ctx, &class_java_lang_Throwable, (jobject(nullptr)))));
	LINE_NUMBER(64);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_java_lang_reflect_InvocationTargetException_java_lang_Throwable(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/lang/reflect/InvocationTargetException:<init>", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_lang_reflect_InvocationTargetException(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(72);
	init_java_lang_ReflectiveOperationException_java_lang_Throwable(ctx, (frame[0].o), (checkCast(ctx, &class_java_lang_Throwable, (jobject(nullptr)))));
	LINE_NUMBER(73);
	((java_lang_reflect_InvocationTargetException *) NULL_CHECK((frame[0].o)))->F_target = (jref) (frame[1].o);
	LINE_NUMBER(74);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_java_lang_reflect_InvocationTargetException_java_lang_Throwable_java_lang_String(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/lang/reflect/InvocationTargetException:<init>", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_lang_reflect_InvocationTargetException(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(84);
	init_java_lang_ReflectiveOperationException_java_lang_String_java_lang_Throwable(ctx, (frame[0].o), (frame[2].o), (jobject(nullptr)));
	LINE_NUMBER(85);
	((java_lang_reflect_InvocationTargetException *) NULL_CHECK((frame[0].o)))->F_target = (jref) (frame[1].o);
	LINE_NUMBER(86);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_java_lang_reflect_InvocationTargetException_getTargetException_R_java_lang_Throwable(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/lang/reflect/InvocationTargetException:getTargetException", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(98);
	sp[0].o = (jobject)((java_lang_reflect_InvocationTargetException *) NULL_CHECK((frame[0].o)))->F_target;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_java_lang_reflect_InvocationTargetException_getCause_R_java_lang_Throwable(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/lang/reflect/InvocationTargetException:getCause", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(109);
	sp[0].o = (jobject)((java_lang_reflect_InvocationTargetException *) NULL_CHECK((frame[0].o)))->F_target;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void *vtable_java_lang_reflect_InvocationTargetException[] {
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
	(void *) M_java_lang_reflect_InvocationTargetException_getCause_R_java_lang_Throwable,
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
	(void *) M_java_lang_reflect_InvocationTargetException_getTargetException_R_java_lang_Throwable,
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
	{ "getTargetException", "()Ljava/lang/Throwable;" },
};

static FieldMetadata fields[] {
	{ "serialVersionUID", &class_long, (intptr_t) &SF_java_lang_reflect_InvocationTargetException_serialVersionUID, "J", 26 },
	{ "target", &class_java_lang_Throwable, offsetof(java_lang_reflect_InvocationTargetException, F_target), "Ljava/lang/Throwable;", 2 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_java_lang_reflect_InvocationTargetException, 0, "()V", 4 },
	{ "<init>", (intptr_t) init_java_lang_reflect_InvocationTargetException_java_lang_Throwable, 0, "(Ljava/lang/Throwable;)V", 1 },
	{ "<init>", (intptr_t) init_java_lang_reflect_InvocationTargetException_java_lang_Throwable_java_lang_String, 0, "(Ljava/lang/Throwable;Ljava/lang/String;)V", 1 },
	{ "getTargetException", (intptr_t) M_java_lang_reflect_InvocationTargetException_getTargetException_R_java_lang_Throwable, VTABLE_java_lang_reflect_InvocationTargetException_getTargetException_R_java_lang_Throwable, "()Ljava/lang/Throwable;", 1 },
	{ "getCause", (intptr_t) M_java_lang_reflect_InvocationTargetException_getCause_R_java_lang_Throwable, VTABLE_java_lang_reflect_InvocationTargetException_getCause_R_java_lang_Throwable, "()Ljava/lang/Throwable;", 1 },
};

Class class_java_lang_reflect_InvocationTargetException{
		.nativeName = (intptr_t) "java/lang/reflect/InvocationTargetException",
		.parentClass = (intptr_t) &class_java_lang_ReflectiveOperationException,
		.size = sizeof(java_lang_reflect_InvocationTargetException),
		.classVtable = (intptr_t) vtable_java_lang_reflect_InvocationTargetException,
		.staticInitializer = (intptr_t) clinit_java_lang_reflect_InvocationTargetException,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_java_lang_reflect_InvocationTargetException,
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
		.methodCount = 5,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 26,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_java_lang_reflect_InvocationTargetException = registerClass(&class_java_lang_reflect_InvocationTargetException);

}
