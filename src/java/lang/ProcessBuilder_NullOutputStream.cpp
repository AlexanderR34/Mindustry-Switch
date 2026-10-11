#include "java/lang/ProcessBuilder_NullOutputStream.h"
#include "java/lang/Object.h"
#include "java/lang/String.h"
#include "java/lang/ProcessBuilder.h"
#include "java/lang/ProcessBuilder_NullOutputStream.h"
#include "java/io/IOException.h"
#include "java/io/OutputStream.h"

extern "C" {

jobject SF_java_lang_ProcessBuilder$NullOutputStream_INSTANCE;

void mark_java_lang_ProcessBuilder$NullOutputStream(jobject object, jint mark, jint depth) {
	if (!object) {
		if (SF_java_lang_ProcessBuilder$NullOutputStream_INSTANCE)
			((gc_mark_ptr) ((jclass) ((jobject) SF_java_lang_ProcessBuilder$NullOutputStream_INSTANCE)->clazz)->markFunction)((jobject) SF_java_lang_ProcessBuilder$NullOutputStream_INSTANCE, mark, depth + 1);
		return;
	}
	if (depth > GC_DEPTH_ALWAYS && (object->gcMark < GC_MARK_START || object->gcMark == mark))
		return;
	if (depth > MAX_GC_MARK_DEPTH) {
		markDeepObject(object);
		return;
	}
	mark_java_io_OutputStream(object, mark, depth);
	if (object->gcMark >= GC_MARK_START)
		object->gcMark = mark;
	auto self = (java_lang_ProcessBuilder$NullOutputStream *) object;
}

void init_java_lang_ProcessBuilder$NullOutputStream(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/lang/ProcessBuilder$NullOutputStream:<init>", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_lang_ProcessBuilder$NullOutputStream(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(461);
	init_java_io_OutputStream(ctx, (frame[0].o));
	LINE_NUMBER(462);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_java_lang_ProcessBuilder$NullOutputStream_write_int(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/lang/ProcessBuilder$NullOutputStream:write", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(465);
	clinit_java_io_IOException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_io_IOException);
	init_java_io_IOException_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"Stream closed"_j))));
	throwException(ctx, sp[0].o);	}

	popStackFrame(ctx);
}

void clinit_java_lang_ProcessBuilder$NullOutputStream(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	clinit_java_io_OutputStream(ctx);
	jtype frame[2];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/lang/ProcessBuilder$NullOutputStream:<clinit>", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_lang_ProcessBuilder$NullOutputStream(ctx);
	{
	LINE_NUMBER(459);
	clinit_java_lang_ProcessBuilder$NullOutputStream(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_ProcessBuilder$NullOutputStream);
	init_java_lang_ProcessBuilder$NullOutputStream(ctx, sp[0].o);
	clinit_java_lang_ProcessBuilder$NullOutputStream(ctx);
	SF_java_lang_ProcessBuilder$NullOutputStream_INSTANCE = sp[0].o;
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void *vtable_java_lang_ProcessBuilder$NullOutputStream[] {
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
	(void *) M_java_io_OutputStream_close,
	(void *) M_java_io_OutputStream_flush,
	(void *) M_java_io_OutputStream_write_Array1_byte,
	(void *) M_java_io_OutputStream_write_Array1_byte_int_int,
	(void *) M_java_lang_ProcessBuilder$NullOutputStream_write_int,
	(void *) M_java_io_OutputStream_checkError_R_boolean,
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
	{ "flush", "()V" },
	{ "write", "([B)V" },
	{ "write", "([BII)V" },
	{ "write", "(I)V" },
	{ "checkError", "()Z" },
};

static FieldMetadata fields[] {
	{ "INSTANCE", &class_java_lang_ProcessBuilder$NullOutputStream, (intptr_t) &SF_java_lang_ProcessBuilder$NullOutputStream_INSTANCE, "Ljava/lang/ProcessBuilder$NullOutputStream;", 24 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_java_lang_ProcessBuilder$NullOutputStream, 0, "()V", 2 },
	{ "write", (intptr_t) M_java_lang_ProcessBuilder$NullOutputStream_write_int, VTABLE_java_lang_ProcessBuilder$NullOutputStream_write_int, "(I)V", 1 },
	{ "<clinit>", (intptr_t) clinit_java_lang_ProcessBuilder$NullOutputStream, 0, "()V", 8 },
};

Class class_java_lang_ProcessBuilder$NullOutputStream{
		.nativeName = (intptr_t) "java/lang/ProcessBuilder$NullOutputStream",
		.parentClass = (intptr_t) &class_java_io_OutputStream,
		.size = sizeof(java_lang_ProcessBuilder$NullOutputStream),
		.classVtable = (intptr_t) vtable_java_lang_ProcessBuilder$NullOutputStream,
		.staticInitializer = (intptr_t) clinit_java_lang_ProcessBuilder$NullOutputStream,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_java_lang_ProcessBuilder$NullOutputStream,
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
		.methodCount = 3,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 17,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_java_lang_ProcessBuilder$NullOutputStream = registerClass(&class_java_lang_ProcessBuilder$NullOutputStream);

}

