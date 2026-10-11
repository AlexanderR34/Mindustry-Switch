#include "arc/util/io/ByteBufferInput.h"
#include "java/nio/ByteBuffer.h"
#include "java/lang/Object.h"
#include "java/lang/String.h"
#include "java/nio/Buffer.h"
#include "arc/util/io/ByteBufferInput.h"
#include "java/lang/AutoCloseable.h"
#include "java/io/DataInputStream.h"
#include "java/lang/RuntimeException.h"
#include "java/io/DataInput.h"

extern "C" {


void mark_arc_util_io_ByteBufferInput(jobject object, jint mark, jint depth) {
	if (!object) {
		return;
	}
	if (depth > GC_DEPTH_ALWAYS && (object->gcMark < GC_MARK_START || object->gcMark == mark))
		return;
	if (depth > MAX_GC_MARK_DEPTH) {
		markDeepObject(object);
		return;
	}
	if (object->gcMark >= GC_MARK_START)
		object->gcMark = mark;
	auto self = (arc_util_io_ByteBufferInput *) object;
	if (self->F_buffer)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_buffer)->clazz)->markFunction)((jobject) self->F_buffer, mark, depth + 1);
}

void clinit_arc_util_io_ByteBufferInput(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
}

void init_arc_util_io_ByteBufferInput_java_nio_ByteBuffer(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/util/io/ByteBufferInput:<init>", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_util_io_ByteBufferInput(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(11);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(12);
	((arc_util_io_ByteBufferInput *) NULL_CHECK((frame[0].o)))->F_buffer = (jref) (frame[1].o);
	LINE_NUMBER(13);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_arc_util_io_ByteBufferInput(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/util/io/ByteBufferInput:<init>", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_util_io_ByteBufferInput(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(16);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(17);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_arc_util_io_ByteBufferInput_setBuffer_java_nio_ByteBuffer(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/util/io/ByteBufferInput:setBuffer", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(20);
	((arc_util_io_ByteBufferInput *) NULL_CHECK((frame[0].o)))->F_buffer = (jref) (frame[1].o);
	LINE_NUMBER(21);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_arc_util_io_ByteBufferInput_readFully_Array1_byte(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/util/io/ByteBufferInput:readFully", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(25);
	sp[0].o = (jobject)((arc_util_io_ByteBufferInput *) NULL_CHECK((frame[0].o)))->F_buffer;
	sp[0].o = (jobject)((func_java_nio_ByteBuffer_get_Array1_byte_R_java_nio_ByteBuffer) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_nio_ByteBuffer_get_Array1_byte_R_java_nio_ByteBuffer])(ctx, sp[0].o, (frame[1].o));
	LINE_NUMBER(26);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_arc_util_io_ByteBufferInput_readFully_Array1_byte_int_int(jcontext ctx, jobject self, jobject param0, jint param1, jint param2) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/util/io/ByteBufferInput:readFully", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	frame[3].i = param2;
	{
	LINE_NUMBER(30);
	sp[0].o = (jobject)((arc_util_io_ByteBufferInput *) NULL_CHECK((frame[0].o)))->F_buffer;
	sp[0].o = (jobject)((func_java_nio_ByteBuffer_get_Array1_byte_int_int_R_java_nio_ByteBuffer) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_nio_ByteBuffer_get_Array1_byte_int_int_R_java_nio_ByteBuffer])(ctx, sp[0].o, (frame[1].o), (frame[2].i), (frame[3].i));
	LINE_NUMBER(31);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jint M_arc_util_io_ByteBufferInput_skipBytes_int_R_int(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/util/io/ByteBufferInput:skipBytes", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(35);
	sp[0].o = (jobject)((arc_util_io_ByteBufferInput *) NULL_CHECK((frame[0].o)))->F_buffer;
	sp[1].o = (jobject)((arc_util_io_ByteBufferInput *) NULL_CHECK((frame[0].o)))->F_buffer;
	jint temp0 = (jint)((func_java_nio_ByteBuffer_position_R_int) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_nio_ByteBuffer_position_R_int])(ctx, sp[1].o);
	sp[0].o = (jobject)((func_java_nio_ByteBuffer_position_int_R_java_nio_Buffer) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_nio_ByteBuffer_position_int_R_java_nio_Buffer])(ctx, sp[0].o, (temp0 + (frame[1].i)));
	LINE_NUMBER(36);
	popStackFrame(ctx);
	return (frame[1].i);
	}

	popStackFrame(ctx);
}

jbool M_arc_util_io_ByteBufferInput_readBoolean_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/util/io/ByteBufferInput:readBoolean", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(41);
	sp[0].o = (jobject)((arc_util_io_ByteBufferInput *) NULL_CHECK((frame[0].o)))->F_buffer;
	jint temp0 = (jint)((func_java_nio_ByteBuffer_get_R_byte) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_nio_ByteBuffer_get_R_byte])(ctx, sp[0].o);
	if (temp0 != (jint(1))) goto label_1;
	}
	INST_ICONST(1);
	goto label_2;
label_1:;
	INST_ICONST(0);
label_2:;
	popStackFrame(ctx);
	INST_IRETURN();

	popStackFrame(ctx);
}

jbyte M_arc_util_io_ByteBufferInput_readByte_R_byte(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/util/io/ByteBufferInput:readByte", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(46);
	sp[0].o = (jobject)((arc_util_io_ByteBufferInput *) NULL_CHECK((frame[0].o)))->F_buffer;
	jint temp0 = (jint)((func_java_nio_ByteBuffer_get_R_byte) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_nio_ByteBuffer_get_R_byte])(ctx, sp[0].o);
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jint M_arc_util_io_ByteBufferInput_readUnsignedByte_R_int(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/util/io/ByteBufferInput:readUnsignedByte", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(51);
	sp[0].o = (jobject)((arc_util_io_ByteBufferInput *) NULL_CHECK((frame[0].o)))->F_buffer;
	jint temp0 = (jint)((func_java_nio_ByteBuffer_get_R_byte) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_nio_ByteBuffer_get_R_byte])(ctx, sp[0].o);
	popStackFrame(ctx);
	return (temp0 & (255));
	}

	popStackFrame(ctx);
}

jshort M_arc_util_io_ByteBufferInput_readShort_R_short(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/util/io/ByteBufferInput:readShort", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(56);
	sp[0].o = (jobject)((arc_util_io_ByteBufferInput *) NULL_CHECK((frame[0].o)))->F_buffer;
	jint temp0 = (jint)((func_java_nio_ByteBuffer_getShort_R_short) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_nio_ByteBuffer_getShort_R_short])(ctx, sp[0].o);
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jint M_arc_util_io_ByteBufferInput_readUnsignedShort_R_int(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/util/io/ByteBufferInput:readUnsignedShort", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(61);
	sp[0].o = (jobject)((arc_util_io_ByteBufferInput *) NULL_CHECK((frame[0].o)))->F_buffer;
	jint temp0 = (jint)((func_java_nio_ByteBuffer_getShort_R_short) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_nio_ByteBuffer_getShort_R_short])(ctx, sp[0].o);
	popStackFrame(ctx);
	return (temp0 & (jint(65535)));
	}

	popStackFrame(ctx);
}

jchar M_arc_util_io_ByteBufferInput_readChar_R_char(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/util/io/ByteBufferInput:readChar", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(66);
	sp[0].o = (jobject)((arc_util_io_ByteBufferInput *) NULL_CHECK((frame[0].o)))->F_buffer;
	jint temp0 = (jint)((func_java_nio_ByteBuffer_getChar_R_char) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_nio_ByteBuffer_getChar_R_char])(ctx, sp[0].o);
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jint M_arc_util_io_ByteBufferInput_readInt_R_int(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/util/io/ByteBufferInput:readInt", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(71);
	sp[0].o = (jobject)((arc_util_io_ByteBufferInput *) NULL_CHECK((frame[0].o)))->F_buffer;
	jint temp0 = (jint)((func_java_nio_ByteBuffer_getInt_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_nio_ByteBuffer_getInt_R_int])(ctx, sp[0].o);
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jlong M_arc_util_io_ByteBufferInput_readLong_R_long(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/util/io/ByteBufferInput:readLong", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(76);
	sp[0].o = (jobject)((arc_util_io_ByteBufferInput *) NULL_CHECK((frame[0].o)))->F_buffer;
	jlong temp0 = (jlong)((func_java_nio_ByteBuffer_getLong_R_long) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_nio_ByteBuffer_getLong_R_long])(ctx, sp[0].o);
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jfloat M_arc_util_io_ByteBufferInput_readFloat_R_float(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/util/io/ByteBufferInput:readFloat", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(81);
	sp[0].o = (jobject)((arc_util_io_ByteBufferInput *) NULL_CHECK((frame[0].o)))->F_buffer;
	jfloat temp0 = (jfloat)((func_java_nio_ByteBuffer_getFloat_R_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_nio_ByteBuffer_getFloat_R_float])(ctx, sp[0].o);
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jdouble M_arc_util_io_ByteBufferInput_readDouble_R_double(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/util/io/ByteBufferInput:readDouble", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(86);
	sp[0].o = (jobject)((arc_util_io_ByteBufferInput *) NULL_CHECK((frame[0].o)))->F_buffer;
	jdouble temp0 = (jdouble)((func_java_nio_ByteBuffer_getDouble_R_double) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_nio_ByteBuffer_getDouble_R_double])(ctx, sp[0].o);
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jobject M_arc_util_io_ByteBufferInput_readLine_R_java_lang_String(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/util/io/ByteBufferInput:readLine", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(91);
	clinit_java_lang_RuntimeException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_RuntimeException);
	init_java_lang_RuntimeException_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"Stub!"_j))));
	throwException(ctx, sp[0].o);	}

	popStackFrame(ctx);
}

jobject M_arc_util_io_ByteBufferInput_readUTF_R_java_lang_String(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/util/io/ByteBufferInput:readUTF", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(96);
	sp[0].o = (jobject)SM_java_io_DataInputStream_readUTF_java_io_DataInput_R_java_lang_String(ctx, (frame[0].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void *vtable_arc_util_io_ByteBufferInput[] {
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
	(void *) nullptr,
	(void *) M_arc_util_io_ByteBufferInput_readBoolean_R_boolean,
	(void *) M_arc_util_io_ByteBufferInput_readByte_R_byte,
	(void *) M_arc_util_io_ByteBufferInput_readChar_R_char,
	(void *) M_arc_util_io_ByteBufferInput_readDouble_R_double,
	(void *) M_arc_util_io_ByteBufferInput_readFloat_R_float,
	(void *) M_arc_util_io_ByteBufferInput_readFully_Array1_byte,
	(void *) M_arc_util_io_ByteBufferInput_readFully_Array1_byte_int_int,
	(void *) M_arc_util_io_ByteBufferInput_readInt_R_int,
	(void *) M_arc_util_io_ByteBufferInput_readLong_R_long,
	(void *) M_arc_util_io_ByteBufferInput_readShort_R_short,
	(void *) M_arc_util_io_ByteBufferInput_readUnsignedByte_R_int,
	(void *) M_arc_util_io_ByteBufferInput_readUnsignedShort_R_int,
	(void *) M_arc_util_io_ByteBufferInput_readUTF_R_java_lang_String,
	(void *) M_arc_util_io_ByteBufferInput_skipBytes_int_R_int,
	(void *) M_arc_util_io_ByteBufferInput_setBuffer_java_nio_ByteBuffer,
	(void *) M_arc_util_io_ByteBufferInput_readLine_R_java_lang_String,
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
	{ "readBoolean", "()Z" },
	{ "readByte", "()B" },
	{ "readChar", "()C" },
	{ "readDouble", "()D" },
	{ "readFloat", "()F" },
	{ "readFully", "([B)V" },
	{ "readFully", "([BII)V" },
	{ "readInt", "()I" },
	{ "readLong", "()J" },
	{ "readShort", "()S" },
	{ "readUnsignedByte", "()I" },
	{ "readUnsignedShort", "()I" },
	{ "readUTF", "()Ljava/lang/String;" },
	{ "skipBytes", "(I)I" },
	{ "setBuffer", "(Ljava/nio/ByteBuffer;)V" },
	{ "readLine", "()Ljava/lang/String;" },
};

static jclass interfaces[] { &class_java_io_DataInput, };

static FieldMetadata fields[] {
	{ "buffer", &class_java_nio_ByteBuffer, offsetof(arc_util_io_ByteBufferInput, F_buffer), "Ljava/nio/ByteBuffer;", 1 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_arc_util_io_ByteBufferInput_java_nio_ByteBuffer, 0, "(Ljava/nio/ByteBuffer;)V", 1 },
	{ "<init>", (intptr_t) init_arc_util_io_ByteBufferInput, 0, "()V", 1 },
	{ "setBuffer", (intptr_t) M_arc_util_io_ByteBufferInput_setBuffer_java_nio_ByteBuffer, VTABLE_arc_util_io_ByteBufferInput_setBuffer_java_nio_ByteBuffer, "(Ljava/nio/ByteBuffer;)V", 1 },
	{ "readFully", (intptr_t) M_arc_util_io_ByteBufferInput_readFully_Array1_byte, VTABLE_arc_util_io_ByteBufferInput_readFully_Array1_byte, "([B)V", 1 },
	{ "readFully", (intptr_t) M_arc_util_io_ByteBufferInput_readFully_Array1_byte_int_int, VTABLE_arc_util_io_ByteBufferInput_readFully_Array1_byte_int_int, "([BII)V", 1 },
	{ "skipBytes", (intptr_t) M_arc_util_io_ByteBufferInput_skipBytes_int_R_int, VTABLE_arc_util_io_ByteBufferInput_skipBytes_int_R_int, "(I)I", 1 },
	{ "readBoolean", (intptr_t) M_arc_util_io_ByteBufferInput_readBoolean_R_boolean, VTABLE_arc_util_io_ByteBufferInput_readBoolean_R_boolean, "()Z", 1 },
	{ "readByte", (intptr_t) M_arc_util_io_ByteBufferInput_readByte_R_byte, VTABLE_arc_util_io_ByteBufferInput_readByte_R_byte, "()B", 1 },
	{ "readUnsignedByte", (intptr_t) M_arc_util_io_ByteBufferInput_readUnsignedByte_R_int, VTABLE_arc_util_io_ByteBufferInput_readUnsignedByte_R_int, "()I", 1 },
	{ "readShort", (intptr_t) M_arc_util_io_ByteBufferInput_readShort_R_short, VTABLE_arc_util_io_ByteBufferInput_readShort_R_short, "()S", 1 },
	{ "readUnsignedShort", (intptr_t) M_arc_util_io_ByteBufferInput_readUnsignedShort_R_int, VTABLE_arc_util_io_ByteBufferInput_readUnsignedShort_R_int, "()I", 1 },
	{ "readChar", (intptr_t) M_arc_util_io_ByteBufferInput_readChar_R_char, VTABLE_arc_util_io_ByteBufferInput_readChar_R_char, "()C", 1 },
	{ "readInt", (intptr_t) M_arc_util_io_ByteBufferInput_readInt_R_int, VTABLE_arc_util_io_ByteBufferInput_readInt_R_int, "()I", 1 },
	{ "readLong", (intptr_t) M_arc_util_io_ByteBufferInput_readLong_R_long, VTABLE_arc_util_io_ByteBufferInput_readLong_R_long, "()J", 1 },
	{ "readFloat", (intptr_t) M_arc_util_io_ByteBufferInput_readFloat_R_float, VTABLE_arc_util_io_ByteBufferInput_readFloat_R_float, "()F", 1 },
	{ "readDouble", (intptr_t) M_arc_util_io_ByteBufferInput_readDouble_R_double, VTABLE_arc_util_io_ByteBufferInput_readDouble_R_double, "()D", 1 },
	{ "readLine", (intptr_t) M_arc_util_io_ByteBufferInput_readLine_R_java_lang_String, VTABLE_arc_util_io_ByteBufferInput_readLine_R_java_lang_String, "()Ljava/lang/String;", 1 },
	{ "readUTF", (intptr_t) M_arc_util_io_ByteBufferInput_readUTF_R_java_lang_String, VTABLE_arc_util_io_ByteBufferInput_readUTF_R_java_lang_String, "()Ljava/lang/String;", 1 },
};

Class class_arc_util_io_ByteBufferInput{
		.nativeName = (intptr_t) "arc/util/io/ByteBufferInput",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(arc_util_io_ByteBufferInput),
		.classVtable = (intptr_t) vtable_arc_util_io_ByteBufferInput,
		.staticInitializer = (intptr_t) clinit_arc_util_io_ByteBufferInput,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_arc_util_io_ByteBufferInput,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 33,
		.interfaceCount = 1,
		.nativeInterfaces = (intptr_t) interfaces,
		.fieldCount = 1,
		.nativeFields = (intptr_t) fields,
		.methodCount = 18,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 28,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_arc_util_io_ByteBufferInput = registerClass(&class_arc_util_io_ByteBufferInput);

}
