#include "java/io/BufferedOutputStream.h"
#include "java/io/BufferedOutputStream.h"
#include "java/lang/Object.h"
#include "java/lang/String.h"
#include "java/lang/IllegalArgumentException.h"
#include "java/io/FilterOutputStream.h"
#include "java/lang/System.h"
#include "java/io/OutputStream.h"

extern "C" {


void mark_java_io_BufferedOutputStream(jobject object, jint mark, jint depth) {
	if (!object) {
		return;
	}
	if (depth > GC_DEPTH_ALWAYS && (object->gcMark < GC_MARK_START || object->gcMark == mark))
		return;
	if (depth > MAX_GC_MARK_DEPTH) {
		markDeepObject(object);
		return;
	}
	mark_java_io_FilterOutputStream(object, mark, depth);
	if (object->gcMark >= GC_MARK_START)
		object->gcMark = mark;
	auto self = (java_io_BufferedOutputStream *) object;
	if (self->F_buf)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_buf)->clazz)->markFunction)((jobject) self->F_buf, mark, depth + 1);
}

void clinit_java_io_BufferedOutputStream(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	clinit_java_io_FilterOutputStream(ctx);
}

void init_java_io_BufferedOutputStream_java_io_OutputStream(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/io/BufferedOutputStream:<init>", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_io_BufferedOutputStream(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(63);
	init_java_io_BufferedOutputStream_java_io_OutputStream_int(ctx, (frame[0].o), (frame[1].o), (8192));
	LINE_NUMBER(64);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_java_io_BufferedOutputStream_java_io_OutputStream_int(jcontext ctx, jobject self, jobject param0, jint param1) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/io/BufferedOutputStream:<init>", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_io_BufferedOutputStream(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(76);
	init_java_io_FilterOutputStream_java_io_OutputStream(ctx, (frame[0].o), (frame[1].o));
	LINE_NUMBER(77);
	if ((frame[2].i) > 0) goto label_2;
	}
	{
	LINE_NUMBER(78);
	clinit_java_lang_IllegalArgumentException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IllegalArgumentException);
	init_java_lang_IllegalArgumentException_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"Buffer size <= 0"_j))));
	throwException(ctx, sp[0].o);	}
label_2:;
	{
	LINE_NUMBER(80);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject) createArray(ctx, &class_byte, (frame[2].i));
	((java_io_BufferedOutputStream *) NULL_CHECK(sp[0].o))->F_buf = (jref) sp[1].o;
	LINE_NUMBER(81);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_java_io_BufferedOutputStream_flushBuffer(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/io/BufferedOutputStream:flushBuffer", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(85);
	if (((jint)((java_io_BufferedOutputStream *) NULL_CHECK((frame[0].o)))->F_count) <= 0) goto label_1;
	}
	{
	LINE_NUMBER(86);
	sp[0].o = (jobject)((java_io_FilterOutputStream *) NULL_CHECK((frame[0].o)))->F_out;
	sp[1].o = (jobject)((java_io_BufferedOutputStream *) NULL_CHECK((frame[0].o)))->F_buf;
	((func_java_io_OutputStream_write_Array1_byte_int_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_io_OutputStream_write_Array1_byte_int_int])(ctx, sp[0].o, sp[1].o, (jint(0)), ((jint)((java_io_BufferedOutputStream *) NULL_CHECK((frame[0].o)))->F_count));
	LINE_NUMBER(87);
	((java_io_BufferedOutputStream *) NULL_CHECK((frame[0].o)))->F_count = (jint(0));
	}
label_1:;
	LINE_NUMBER(89);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_java_io_BufferedOutputStream_write_int(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/io/BufferedOutputStream:write", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, self);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(98);
	jint temp0 = (jint)((java_io_BufferedOutputStream *) NULL_CHECK((frame[0].o)))->F_count;
	sp[0].o = (jobject)((java_io_BufferedOutputStream *) NULL_CHECK((frame[0].o)))->F_buf;
	if (temp0 < (((jarray) nullCheck(ctx, sp[0].o))->length)) goto label_1;
	}
	{
	LINE_NUMBER(99);
	M_java_io_BufferedOutputStream_flushBuffer(ctx, (frame[0].o));
	}
label_1:;
	{
	LINE_NUMBER(101);
	sp[0].o = (jobject)((java_io_BufferedOutputStream *) NULL_CHECK((frame[0].o)))->F_buf;
	sp[1].o = frame[0].o;
	jint temp0 = (jint)((java_io_BufferedOutputStream *) NULL_CHECK(sp[1].o))->F_count;
	((java_io_BufferedOutputStream *) NULL_CHECK(sp[1].o))->F_count = (temp0 + (jint(1)));
	ARRAY_ACCESS(jbyte, sp[0].o, temp0) = (jbyte((frame[1].i)));
	LINE_NUMBER(102);
	popStackFrame(ctx, self);
	return;
	}

	popStackFrame(ctx);
}

void M_java_io_BufferedOutputStream_write_Array1_byte_int_int(jcontext ctx, jobject self, jobject param0, jint param1, jint param2) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/io/BufferedOutputStream:write", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, self);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	frame[3].i = param2;
	{
	LINE_NUMBER(121);
	jint temp0 = frame[3].i;
	sp[0].o = (jobject)((java_io_BufferedOutputStream *) NULL_CHECK((frame[0].o)))->F_buf;
	if (temp0 < (((jarray) nullCheck(ctx, sp[0].o))->length)) goto label_1;
	}
	{
	LINE_NUMBER(125);
	M_java_io_BufferedOutputStream_flushBuffer(ctx, (frame[0].o));
	LINE_NUMBER(126);
	sp[0].o = (jobject)((java_io_FilterOutputStream *) NULL_CHECK((frame[0].o)))->F_out;
	((func_java_io_OutputStream_write_Array1_byte_int_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_io_OutputStream_write_Array1_byte_int_int])(ctx, sp[0].o, (frame[1].o), (frame[2].i), (frame[3].i));
	LINE_NUMBER(127);
	popStackFrame(ctx, self);
	return;
	}
label_1:;
	{
	LINE_NUMBER(129);
	jint temp0 = frame[3].i;
	sp[0].o = (jobject)((java_io_BufferedOutputStream *) NULL_CHECK((frame[0].o)))->F_buf;
	if (temp0 <= ((((jarray) nullCheck(ctx, sp[0].o))->length) - ((jint)((java_io_BufferedOutputStream *) NULL_CHECK((frame[0].o)))->F_count))) goto label_5;
	}
	{
	LINE_NUMBER(130);
	M_java_io_BufferedOutputStream_flushBuffer(ctx, (frame[0].o));
	}
label_5:;
	{
	LINE_NUMBER(132);
	sp[0].o = frame[1].o;
	jint temp0 = frame[2].i;
	sp[1].o = (jobject)((java_io_BufferedOutputStream *) NULL_CHECK((frame[0].o)))->F_buf;
	SM_java_lang_System_arraycopy_java_lang_Object_int_java_lang_Object_int_int(ctx, sp[0].o, temp0, sp[1].o, ((jint)((java_io_BufferedOutputStream *) NULL_CHECK((frame[0].o)))->F_count), (frame[3].i));
	LINE_NUMBER(133);
	sp[0].o = frame[0].o;
	((java_io_BufferedOutputStream *) NULL_CHECK(sp[0].o))->F_count = (((jint)((java_io_BufferedOutputStream *) NULL_CHECK(sp[0].o))->F_count) + (frame[3].i));
	LINE_NUMBER(134);
	popStackFrame(ctx, self);
	return;
	}

	popStackFrame(ctx);
}

void M_java_io_BufferedOutputStream_flush(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/io/BufferedOutputStream:flush", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, self);

	frame[0].o = self;
	{
	LINE_NUMBER(144);
	M_java_io_BufferedOutputStream_flushBuffer(ctx, (frame[0].o));
	LINE_NUMBER(145);
	sp[0].o = (jobject)((java_io_FilterOutputStream *) NULL_CHECK((frame[0].o)))->F_out;
	((func_java_io_OutputStream_flush) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_io_OutputStream_flush])(ctx, sp[0].o);
	LINE_NUMBER(146);
	popStackFrame(ctx, self);
	return;
	}

	popStackFrame(ctx);
}

void *vtable_java_io_BufferedOutputStream[] {
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
	(void *) M_java_io_FilterOutputStream_close,
	(void *) M_java_io_BufferedOutputStream_flush,
	(void *) M_java_io_OutputStream_write_Array1_byte,
	(void *) M_java_io_BufferedOutputStream_write_Array1_byte_int_int,
	(void *) M_java_io_BufferedOutputStream_write_int,
	(void *) M_java_io_OutputStream_checkError_R_boolean,
	(void *) M_java_io_BufferedOutputStream_flushBuffer,
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
	{ "flushBuffer", "()V" },
};

static FieldMetadata fields[] {
	{ "buf", getArrayClass(&class_byte, 1), offsetof(java_io_BufferedOutputStream, F_buf), "[B", 4 },
	{ "count", &class_int, offsetof(java_io_BufferedOutputStream, F_count), "I", 4 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_java_io_BufferedOutputStream_java_io_OutputStream, 0, "(Ljava/io/OutputStream;)V", 1 },
	{ "<init>", (intptr_t) init_java_io_BufferedOutputStream_java_io_OutputStream_int, 0, "(Ljava/io/OutputStream;I)V", 1 },
	{ "flushBuffer", (intptr_t) M_java_io_BufferedOutputStream_flushBuffer, VTABLE_java_io_BufferedOutputStream_flushBuffer, "()V", 2 },
	{ "write", (intptr_t) M_java_io_BufferedOutputStream_write_int, VTABLE_java_io_BufferedOutputStream_write_int, "(I)V", 33 },
	{ "write", (intptr_t) M_java_io_BufferedOutputStream_write_Array1_byte_int_int, VTABLE_java_io_BufferedOutputStream_write_Array1_byte_int_int, "([BII)V", 33 },
	{ "flush", (intptr_t) M_java_io_BufferedOutputStream_flush, VTABLE_java_io_BufferedOutputStream_flush, "()V", 33 },
};

Class class_java_io_BufferedOutputStream{
		.nativeName = (intptr_t) "java/io/BufferedOutputStream",
		.parentClass = (intptr_t) &class_java_io_FilterOutputStream,
		.size = sizeof(java_io_BufferedOutputStream),
		.classVtable = (intptr_t) vtable_java_io_BufferedOutputStream,
		.staticInitializer = (intptr_t) clinit_java_io_BufferedOutputStream,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_java_io_BufferedOutputStream,
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
		.methodCount = 6,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 18,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_java_io_BufferedOutputStream = registerClass(&class_java_io_BufferedOutputStream);

}
