#include "arc/util/io/ReusableByteOutStream.h"
#include "arc/util/io/ReusableByteOutStream.h"
#include "java/lang/Object.h"
#include "java/io/ByteArrayOutputStream.h"
#include "java/io/OutputStream.h"

extern "C" {


void mark_arc_util_io_ReusableByteOutStream(jobject object, jint mark, jint depth) {
	if (!object) {
		return;
	}
	if (depth > GC_DEPTH_ALWAYS && (object->gcMark < GC_MARK_START || object->gcMark == mark))
		return;
	if (depth > MAX_GC_MARK_DEPTH) {
		markDeepObject(object);
		return;
	}
	mark_java_io_ByteArrayOutputStream(object, mark, depth);
	if (object->gcMark >= GC_MARK_START)
		object->gcMark = mark;
	auto self = (arc_util_io_ReusableByteOutStream *) object;
}

void clinit_arc_util_io_ReusableByteOutStream(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	clinit_java_io_ByteArrayOutputStream(ctx);
}

void init_arc_util_io_ReusableByteOutStream_int(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/util/io/ReusableByteOutStream:<init>", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_util_io_ReusableByteOutStream(ctx);
	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(8);
	init_java_io_ByteArrayOutputStream_int(ctx, (frame[0].o), (frame[1].i));
	LINE_NUMBER(9);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_arc_util_io_ReusableByteOutStream(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/util/io/ReusableByteOutStream:<init>", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_util_io_ReusableByteOutStream(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(11);
	init_java_io_ByteArrayOutputStream(ctx, (frame[0].o));
	LINE_NUMBER(12);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_arc_util_io_ReusableByteOutStream_getBytes_R_Array1_byte(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/util/io/ReusableByteOutStream:getBytes", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(15);
	sp[0].o = (jobject)((java_io_ByteArrayOutputStream *) NULL_CHECK((frame[0].o)))->F_buf;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void *vtable_arc_util_io_ReusableByteOutStream[] {
	(void *) M_java_lang_Object_hashCode_R_int,
	(void *) M_java_lang_Object_equals_java_lang_Object_R_boolean,
	(void *) M_java_lang_Object_clone_R_java_lang_Object,
	(void *) M_java_lang_Object_getClass_R_java_lang_Class,
	(void *) M_java_io_ByteArrayOutputStream_toString_R_java_lang_String,
	(void *) M_java_lang_Object_finalize,
	(void *) M_java_lang_Object_notify,
	(void *) M_java_lang_Object_notifyAll,
	(void *) M_java_lang_Object_wait,
	(void *) M_java_lang_Object_wait_long,
	(void *) M_java_lang_Object_wait_long_int,
	(void *) M_java_io_ByteArrayOutputStream_close,
	(void *) M_java_io_OutputStream_flush,
	(void *) M_java_io_OutputStream_write_Array1_byte,
	(void *) M_java_io_ByteArrayOutputStream_write_Array1_byte_int_int,
	(void *) M_java_io_ByteArrayOutputStream_write_int,
	(void *) M_java_io_OutputStream_checkError_R_boolean,
	(void *) M_java_io_ByteArrayOutputStream_expand_int,
	(void *) M_java_io_ByteArrayOutputStream_reset,
	(void *) M_java_io_ByteArrayOutputStream_size_R_int,
	(void *) M_java_io_ByteArrayOutputStream_toByteArray_R_Array1_byte,
	(void *) M_java_io_ByteArrayOutputStream_toString_int_R_java_lang_String,
	(void *) M_java_io_ByteArrayOutputStream_toString_java_lang_String_R_java_lang_String,
	(void *) M_java_io_ByteArrayOutputStream_writeTo_java_io_OutputStream,
	(void *) M_arc_util_io_ReusableByteOutStream_getBytes_R_Array1_byte,
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
	{ "expand", "(I)V" },
	{ "reset", "()V" },
	{ "size", "()I" },
	{ "toByteArray", "()[B" },
	{ "toString", "(I)Ljava/lang/String;" },
	{ "toString", "(Ljava/lang/String;)Ljava/lang/String;" },
	{ "writeTo", "(Ljava/io/OutputStream;)V" },
	{ "getBytes", "()[B" },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_arc_util_io_ReusableByteOutStream_int, 0, "(I)V", 1 },
	{ "<init>", (intptr_t) init_arc_util_io_ReusableByteOutStream, 0, "()V", 1 },
	{ "getBytes", (intptr_t) M_arc_util_io_ReusableByteOutStream_getBytes_R_Array1_byte, VTABLE_arc_util_io_ReusableByteOutStream_getBytes_R_Array1_byte, "()[B", 1 },
};

Class class_arc_util_io_ReusableByteOutStream{
		.nativeName = (intptr_t) "arc/util/io/ReusableByteOutStream",
		.parentClass = (intptr_t) &class_java_io_ByteArrayOutputStream,
		.size = sizeof(arc_util_io_ReusableByteOutStream),
		.classVtable = (intptr_t) vtable_arc_util_io_ReusableByteOutStream,
		.staticInitializer = (intptr_t) clinit_arc_util_io_ReusableByteOutStream,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_arc_util_io_ReusableByteOutStream,
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
		.vtableSize = 25,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_arc_util_io_ReusableByteOutStream = registerClass(&class_arc_util_io_ReusableByteOutStream);

}
