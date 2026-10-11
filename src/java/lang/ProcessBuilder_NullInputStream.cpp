#include "java/lang/ProcessBuilder_NullInputStream.h"
#include "java/io/InputStream.h"
#include "java/lang/Object.h"
#include "java/lang/ProcessBuilder.h"
#include "java/lang/ProcessBuilder_NullInputStream.h"

extern "C" {

jobject SF_java_lang_ProcessBuilder$NullInputStream_INSTANCE;

void mark_java_lang_ProcessBuilder$NullInputStream(jobject object, jint mark, jint depth) {
	if (!object) {
		if (SF_java_lang_ProcessBuilder$NullInputStream_INSTANCE)
			((gc_mark_ptr) ((jclass) ((jobject) SF_java_lang_ProcessBuilder$NullInputStream_INSTANCE)->clazz)->markFunction)((jobject) SF_java_lang_ProcessBuilder$NullInputStream_INSTANCE, mark, depth + 1);
		return;
	}
	if (depth > GC_DEPTH_ALWAYS && (object->gcMark < GC_MARK_START || object->gcMark == mark))
		return;
	if (depth > MAX_GC_MARK_DEPTH) {
		markDeepObject(object);
		return;
	}
	mark_java_io_InputStream(object, mark, depth);
	if (object->gcMark >= GC_MARK_START)
		object->gcMark = mark;
	auto self = (java_lang_ProcessBuilder$NullInputStream *) object;
}

void init_java_lang_ProcessBuilder$NullInputStream(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/lang/ProcessBuilder$NullInputStream:<init>", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_lang_ProcessBuilder$NullInputStream(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(472);
	init_java_io_InputStream(ctx, (frame[0].o));
	LINE_NUMBER(473);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jint M_java_lang_ProcessBuilder$NullInputStream_read_R_int(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/lang/ProcessBuilder$NullInputStream:read", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(476);
	popStackFrame(ctx);
	return (jint(-1));
	}

	popStackFrame(ctx);
}

jint M_java_lang_ProcessBuilder$NullInputStream_available_R_int(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/lang/ProcessBuilder$NullInputStream:available", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(480);
	popStackFrame(ctx);
	return (jint(0));
	}

	popStackFrame(ctx);
}

void clinit_java_lang_ProcessBuilder$NullInputStream(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	clinit_java_io_InputStream(ctx);
	jtype frame[2];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/lang/ProcessBuilder$NullInputStream:<clinit>", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_lang_ProcessBuilder$NullInputStream(ctx);
	{
	LINE_NUMBER(470);
	clinit_java_lang_ProcessBuilder$NullInputStream(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_ProcessBuilder$NullInputStream);
	init_java_lang_ProcessBuilder$NullInputStream(ctx, sp[0].o);
	clinit_java_lang_ProcessBuilder$NullInputStream(ctx);
	SF_java_lang_ProcessBuilder$NullInputStream_INSTANCE = sp[0].o;
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void *vtable_java_lang_ProcessBuilder$NullInputStream[] {
	(void *) M_java_lang_Object_hashCode_R_int,
	(void *) M_java_lang_Object_equals_java_lang_Object_R_boolean,
	(void *) M_java_lang_Object_clone_R_java_lang_Object,
	(void *) M_java_lang_Object_getClass_R_java_lang_Class,
	(void *) M_java_lang_Object_toString_R_java_lang_String,
	(void *) M_java_lang_Object_finalize,
	(void *) M_java_lang_Object_notify,
	(void *) M_java_lang_Object_notifyAll,
	(void *) M_java_lang_Object_wait,
	(void *) M_java_lang_Object_wait_long,
	(void *) M_java_lang_Object_wait_long_int,
	(void *) M_java_io_InputStream_close,
	(void *) M_java_lang_ProcessBuilder$NullInputStream_available_R_int,
	(void *) M_java_io_InputStream_mark_int,
	(void *) M_java_io_InputStream_markSupported_R_boolean,
	(void *) M_java_lang_ProcessBuilder$NullInputStream_read_R_int,
	(void *) M_java_io_InputStream_read_Array1_byte_R_int,
	(void *) M_java_io_InputStream_read_Array1_byte_int_int_R_int,
	(void *) M_java_io_InputStream_reset,
	(void *) M_java_io_InputStream_skip_long_R_long,
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
	{ "close", "()V" },
	{ "available", "()I" },
	{ "mark", "(I)V" },
	{ "markSupported", "()Z" },
	{ "read", "()I" },
	{ "read", "([B)I" },
	{ "read", "([BII)I" },
	{ "reset", "()V" },
	{ "skip", "(J)J" },
};

static FieldMetadata fields[] {
	{ "INSTANCE", &class_java_lang_ProcessBuilder$NullInputStream, (intptr_t) &SF_java_lang_ProcessBuilder$NullInputStream_INSTANCE, "Ljava/lang/ProcessBuilder$NullInputStream;", 24 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_java_lang_ProcessBuilder$NullInputStream, 0, "()V", 2 },
	{ "read", (intptr_t) M_java_lang_ProcessBuilder$NullInputStream_read_R_int, VTABLE_java_lang_ProcessBuilder$NullInputStream_read_R_int, "()I", 1 },
	{ "available", (intptr_t) M_java_lang_ProcessBuilder$NullInputStream_available_R_int, VTABLE_java_lang_ProcessBuilder$NullInputStream_available_R_int, "()I", 1 },
	{ "<clinit>", (intptr_t) clinit_java_lang_ProcessBuilder$NullInputStream, 0, "()V", 8 },
};

Class class_java_lang_ProcessBuilder$NullInputStream{
		.nativeName = (intptr_t) "java/lang/ProcessBuilder$NullInputStream",
		.parentClass = (intptr_t) &class_java_io_InputStream,
		.size = sizeof(java_lang_ProcessBuilder$NullInputStream),
		.classVtable = (intptr_t) vtable_java_lang_ProcessBuilder$NullInputStream,
		.staticInitializer = (intptr_t) clinit_java_lang_ProcessBuilder$NullInputStream,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_java_lang_ProcessBuilder$NullInputStream,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) &class_java_lang_ProcessBuilder,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 32,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 1,
		.nativeFields = (intptr_t) fields,
		.methodCount = 4,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 20,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_java_lang_ProcessBuilder$NullInputStream = registerClass(&class_java_lang_ProcessBuilder$NullInputStream);

}

