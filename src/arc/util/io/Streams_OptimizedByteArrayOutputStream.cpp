#include "arc/util/io/Streams_OptimizedByteArrayOutputStream.h"
#include "java/lang/Object.h"
#include "arc/util/io/Streams_OptimizedByteArrayOutputStream.h"
#include "arc/util/io/Streams.h"
#include "java/io/ByteArrayOutputStream.h"
#include "java/io/OutputStream.h"

extern "C" {


void mark_arc_util_io_Streams$OptimizedByteArrayOutputStream(jobject object, jint mark, jint depth) {
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
	auto self = (arc_util_io_Streams$OptimizedByteArrayOutputStream *) object;
}

void clinit_arc_util_io_Streams$OptimizedByteArrayOutputStream(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	clinit_java_io_ByteArrayOutputStream(ctx);
}

void init_arc_util_io_Streams$OptimizedByteArrayOutputStream_int(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/util/io/Streams$OptimizedByteArrayOutputStream:<init>", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_util_io_Streams$OptimizedByteArrayOutputStream(ctx);
	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(161);
	init_java_io_ByteArrayOutputStream_int(ctx, (frame[0].o), (frame[1].i));
	LINE_NUMBER(162);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_arc_util_io_Streams$OptimizedByteArrayOutputStream_toByteArray_R_Array1_byte(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/util/io/Streams$OptimizedByteArrayOutputStream:toByteArray", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, self);

	frame[0].o = self;
	{
	LINE_NUMBER(166);
	jint temp0 = (jint)((java_io_ByteArrayOutputStream *) NULL_CHECK((frame[0].o)))->F_count;
	sp[0].o = (jobject)((java_io_ByteArrayOutputStream *) NULL_CHECK((frame[0].o)))->F_buf;
	if (temp0 != (((jarray) nullCheck(ctx, sp[0].o))->length)) goto label_1;
	}
	{
	sp[0].o = (jobject)((java_io_ByteArrayOutputStream *) NULL_CHECK((frame[0].o)))->F_buf;
	popStackFrame(ctx, self);
	return sp[0].o;
	}
label_1:;
	{
	LINE_NUMBER(167);
	sp[0].o = (jobject)M_java_io_ByteArrayOutputStream_toByteArray_R_Array1_byte(ctx, (frame[0].o));
	popStackFrame(ctx, self);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_arc_util_io_Streams$OptimizedByteArrayOutputStream_getBuffer_R_Array1_byte(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/util/io/Streams$OptimizedByteArrayOutputStream:getBuffer", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(171);
	sp[0].o = (jobject)((java_io_ByteArrayOutputStream *) NULL_CHECK((frame[0].o)))->F_buf;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void *vtable_arc_util_io_Streams$OptimizedByteArrayOutputStream[] {
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
	(void *) M_arc_util_io_Streams$OptimizedByteArrayOutputStream_toByteArray_R_Array1_byte,
	(void *) M_java_io_ByteArrayOutputStream_toString_int_R_java_lang_String,
	(void *) M_java_io_ByteArrayOutputStream_toString_java_lang_String_R_java_lang_String,
	(void *) M_java_io_ByteArrayOutputStream_writeTo_java_io_OutputStream,
	(void *) M_arc_util_io_Streams$OptimizedByteArrayOutputStream_getBuffer_R_Array1_byte,
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
	{ "getBuffer", "()[B" },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_arc_util_io_Streams$OptimizedByteArrayOutputStream_int, 0, "(I)V", 1 },
	{ "toByteArray", (intptr_t) M_arc_util_io_Streams$OptimizedByteArrayOutputStream_toByteArray_R_Array1_byte, VTABLE_arc_util_io_Streams$OptimizedByteArrayOutputStream_toByteArray_R_Array1_byte, "()[B", 33 },
	{ "getBuffer", (intptr_t) M_arc_util_io_Streams$OptimizedByteArrayOutputStream_getBuffer_R_Array1_byte, VTABLE_arc_util_io_Streams$OptimizedByteArrayOutputStream_getBuffer_R_Array1_byte, "()[B", 1 },
};

Class class_arc_util_io_Streams$OptimizedByteArrayOutputStream{
		.nativeName = (intptr_t) "arc/util/io/Streams$OptimizedByteArrayOutputStream",
		.parentClass = (intptr_t) &class_java_io_ByteArrayOutputStream,
		.size = sizeof(arc_util_io_Streams$OptimizedByteArrayOutputStream),
		.classVtable = (intptr_t) vtable_arc_util_io_Streams$OptimizedByteArrayOutputStream,
		.staticInitializer = (intptr_t) clinit_arc_util_io_Streams$OptimizedByteArrayOutputStream,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_arc_util_io_Streams$OptimizedByteArrayOutputStream,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) &class_arc_util_io_Streams,
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
static bool registered_arc_util_io_Streams$OptimizedByteArrayOutputStream = registerClass(&class_arc_util_io_Streams$OptimizedByteArrayOutputStream);

}

