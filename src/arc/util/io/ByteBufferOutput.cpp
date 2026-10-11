#include "arc/util/io/ByteBufferOutput.h"
#include "java/nio/ByteBuffer.h"
#include "java/lang/Object.h"
#include "java/lang/String.h"
#include "java/lang/AutoCloseable.h"
#include "java/lang/RuntimeException.h"
#include "java/io/UTFDataFormatException.h"
#include "arc/util/io/ByteBufferOutput.h"
#include "java/io/DataOutput.h"

extern "C" {


void mark_arc_util_io_ByteBufferOutput(jobject object, jint mark, jint depth) {
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
	auto self = (arc_util_io_ByteBufferOutput *) object;
	if (self->F_buffer)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_buffer)->clazz)->markFunction)((jobject) self->F_buffer, mark, depth + 1);
}

void clinit_arc_util_io_ByteBufferOutput(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
}

void init_arc_util_io_ByteBufferOutput_java_nio_ByteBuffer(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/util/io/ByteBufferOutput:<init>", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_util_io_ByteBufferOutput(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(11);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(12);
	((arc_util_io_ByteBufferOutput *) NULL_CHECK((frame[0].o)))->F_buffer = (jref) (frame[1].o);
	LINE_NUMBER(13);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_arc_util_io_ByteBufferOutput(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/util/io/ByteBufferOutput:<init>", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_util_io_ByteBufferOutput(ctx);
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

void M_arc_util_io_ByteBufferOutput_write_int(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/util/io/ByteBufferOutput:write", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(21);
	sp[0].o = (jobject)((arc_util_io_ByteBufferOutput *) NULL_CHECK((frame[0].o)))->F_buffer;
	sp[0].o = (jobject)((func_java_nio_ByteBuffer_put_byte_R_java_nio_ByteBuffer) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_nio_ByteBuffer_put_byte_R_java_nio_ByteBuffer])(ctx, sp[0].o, (jbyte((frame[1].i))));
	LINE_NUMBER(22);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_arc_util_io_ByteBufferOutput_write_Array1_byte(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/util/io/ByteBufferOutput:write", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(26);
	sp[0].o = (jobject)((arc_util_io_ByteBufferOutput *) NULL_CHECK((frame[0].o)))->F_buffer;
	sp[0].o = (jobject)((func_java_nio_ByteBuffer_put_Array1_byte_R_java_nio_ByteBuffer) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_nio_ByteBuffer_put_Array1_byte_R_java_nio_ByteBuffer])(ctx, sp[0].o, (frame[1].o));
	LINE_NUMBER(27);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_arc_util_io_ByteBufferOutput_write_Array1_byte_int_int(jcontext ctx, jobject self, jobject param0, jint param1, jint param2) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/util/io/ByteBufferOutput:write", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	frame[3].i = param2;
	{
	LINE_NUMBER(31);
	sp[0].o = (jobject)((arc_util_io_ByteBufferOutput *) NULL_CHECK((frame[0].o)))->F_buffer;
	sp[0].o = (jobject)((func_java_nio_ByteBuffer_put_Array1_byte_int_int_R_java_nio_ByteBuffer) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_nio_ByteBuffer_put_Array1_byte_int_int_R_java_nio_ByteBuffer])(ctx, sp[0].o, (frame[1].o), (frame[2].i), (frame[3].i));
	LINE_NUMBER(32);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_arc_util_io_ByteBufferOutput_writeBoolean_boolean(jcontext ctx, jobject self, jbool param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/util/io/ByteBufferOutput:writeBoolean", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(36);
	sp[0].o = (jobject)((arc_util_io_ByteBufferOutput *) NULL_CHECK((frame[0].o)))->F_buffer;
	sp += 1;
	if ((frame[1].i) == 0) goto label_1;
	}
	INST_ICONST(1);
	goto label_2;
label_1:;
	INST_ICONST(0);
label_2:;
	{
	sp -= 2;
	sp[0].o = (jobject)((func_java_nio_ByteBuffer_put_byte_R_java_nio_ByteBuffer) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_nio_ByteBuffer_put_byte_R_java_nio_ByteBuffer])(ctx, sp[0].o, sp[1].i);
	LINE_NUMBER(37);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_arc_util_io_ByteBufferOutput_writeByte_int(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/util/io/ByteBufferOutput:writeByte", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(41);
	sp[0].o = (jobject)((arc_util_io_ByteBufferOutput *) NULL_CHECK((frame[0].o)))->F_buffer;
	sp[0].o = (jobject)((func_java_nio_ByteBuffer_put_byte_R_java_nio_ByteBuffer) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_nio_ByteBuffer_put_byte_R_java_nio_ByteBuffer])(ctx, sp[0].o, (jbyte((frame[1].i))));
	LINE_NUMBER(42);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_arc_util_io_ByteBufferOutput_writeShort_int(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/util/io/ByteBufferOutput:writeShort", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(46);
	sp[0].o = (jobject)((arc_util_io_ByteBufferOutput *) NULL_CHECK((frame[0].o)))->F_buffer;
	sp[0].o = (jobject)((func_java_nio_ByteBuffer_putShort_short_R_java_nio_ByteBuffer) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_nio_ByteBuffer_putShort_short_R_java_nio_ByteBuffer])(ctx, sp[0].o, (jshort((frame[1].i))));
	LINE_NUMBER(47);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_arc_util_io_ByteBufferOutput_writeChar_int(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/util/io/ByteBufferOutput:writeChar", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(51);
	sp[0].o = (jobject)((arc_util_io_ByteBufferOutput *) NULL_CHECK((frame[0].o)))->F_buffer;
	sp[0].o = (jobject)((func_java_nio_ByteBuffer_putChar_char_R_java_nio_ByteBuffer) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_nio_ByteBuffer_putChar_char_R_java_nio_ByteBuffer])(ctx, sp[0].o, (jchar((frame[1].i))));
	LINE_NUMBER(52);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_arc_util_io_ByteBufferOutput_writeInt_int(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/util/io/ByteBufferOutput:writeInt", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(56);
	sp[0].o = (jobject)((arc_util_io_ByteBufferOutput *) NULL_CHECK((frame[0].o)))->F_buffer;
	sp[0].o = (jobject)((func_java_nio_ByteBuffer_putInt_int_R_java_nio_ByteBuffer) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_nio_ByteBuffer_putInt_int_R_java_nio_ByteBuffer])(ctx, sp[0].o, (frame[1].i));
	LINE_NUMBER(57);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_arc_util_io_ByteBufferOutput_writeLong_long(jcontext ctx, jobject self, jlong param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/util/io/ByteBufferOutput:writeLong", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].l = param0;
	{
	LINE_NUMBER(61);
	sp[0].o = (jobject)((arc_util_io_ByteBufferOutput *) NULL_CHECK((frame[0].o)))->F_buffer;
	sp[0].o = (jobject)((func_java_nio_ByteBuffer_putLong_long_R_java_nio_ByteBuffer) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_nio_ByteBuffer_putLong_long_R_java_nio_ByteBuffer])(ctx, sp[0].o, (frame[1].l));
	LINE_NUMBER(62);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_arc_util_io_ByteBufferOutput_writeFloat_float(jcontext ctx, jobject self, jfloat param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/util/io/ByteBufferOutput:writeFloat", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	{
	LINE_NUMBER(66);
	sp[0].o = (jobject)((arc_util_io_ByteBufferOutput *) NULL_CHECK((frame[0].o)))->F_buffer;
	sp[0].o = (jobject)((func_java_nio_ByteBuffer_putFloat_float_R_java_nio_ByteBuffer) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_nio_ByteBuffer_putFloat_float_R_java_nio_ByteBuffer])(ctx, sp[0].o, (frame[1].f));
	LINE_NUMBER(67);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_arc_util_io_ByteBufferOutput_writeDouble_double(jcontext ctx, jobject self, jdouble param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/util/io/ByteBufferOutput:writeDouble", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].d = param0;
	{
	LINE_NUMBER(71);
	sp[0].o = (jobject)((arc_util_io_ByteBufferOutput *) NULL_CHECK((frame[0].o)))->F_buffer;
	sp[0].o = (jobject)((func_java_nio_ByteBuffer_putDouble_double_R_java_nio_ByteBuffer) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_nio_ByteBuffer_putDouble_double_R_java_nio_ByteBuffer])(ctx, sp[0].o, (frame[1].d));
	LINE_NUMBER(72);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_arc_util_io_ByteBufferOutput_writeBytes_java_lang_String(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/util/io/ByteBufferOutput:writeBytes", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(76);
	clinit_java_lang_RuntimeException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_RuntimeException);
	init_java_lang_RuntimeException_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"Stub!"_j))));
	throwException(ctx, sp[0].o);	}

	popStackFrame(ctx);
}

void M_arc_util_io_ByteBufferOutput_writeChars_java_lang_String(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/util/io/ByteBufferOutput:writeChars", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(81);
	clinit_java_lang_RuntimeException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_RuntimeException);
	init_java_lang_RuntimeException_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"Stub!"_j))));
	throwException(ctx, sp[0].o);	}

	popStackFrame(ctx);
}

void M_arc_util_io_ByteBufferOutput_writeUTF_java_lang_String(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[13];
	auto stack = &frame[8];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/util/io/ByteBufferOutput:writeUTF", 13 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(86);
	jint temp0 = (jint)((func_java_lang_String_length_R_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_String_length_R_int])(ctx, (frame[1].o));
	frame[2].i = temp0;
	LINE_NUMBER(87);
	frame[3].i = (frame[2].i);
	LINE_NUMBER(89);
	frame[4].i = (jint(0));
	}
label_3:;
	{
	if ((frame[4].i) >= (frame[2].i)) goto label_4;
	}
	{
	LINE_NUMBER(90);
	jint temp0 = (jint)((func_java_lang_String_charAt_int_R_char) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_String_charAt_int_R_char])(ctx, (frame[1].o), (frame[4].i));
	frame[5].i = temp0;
	LINE_NUMBER(91);
	if ((frame[5].i) >= (128)) goto label_7;
	}
	INST_ILOAD(5);
	if ((--sp)->i != 0) goto label_8;
label_7:;
	{
	LINE_NUMBER(92);
	jint temp0 = frame[3].i;
	sp[0].i = temp0;
	sp += 1;
	if ((frame[5].i) < (2048)) goto label_9;
	}
	INST_ICONST(2);
	goto label_10;
label_9:;
	INST_ICONST(1);
label_10:;
	INST_IADD();
	INST_ISTORE(3);
label_8:;
	{
	LINE_NUMBER(89);
	INST_IINC(4, 1);
	goto label_3;
	}
label_4:;
	{
	LINE_NUMBER(95);
	if ((frame[3].i) > (jint(65535))) goto label_11;
	}
	{
	if ((frame[3].i) >= (frame[2].i)) goto label_12;
	}
label_11:;
	{
	LINE_NUMBER(96);
	clinit_java_io_UTFDataFormatException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_io_UTFDataFormatException);
	init_java_io_UTFDataFormatException_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"encoded string too long"_j))));
	throwException(ctx, sp[0].o);	}
label_12:;
	{
	LINE_NUMBER(98);
	sp[0].o = (jobject) createArray(ctx, &class_byte, ((frame[3].i) + (jint(2))));
	frame[4].o = sp[0].o;
	LINE_NUMBER(100);
	frame[5].i = (jint(0));
	LINE_NUMBER(101);
	sp[0].o = frame[4].o;
	jint temp0 = frame[5].i;
	INST_IINC(5, 1);
	ARRAY_ACCESS(jbyte, sp[0].o, temp0) = (jbyte(((bit_cast<jint>(bit_cast<uint32_t>((frame[3].i)) >> (8))) & (255))));
	LINE_NUMBER(102);
	sp[0].o = frame[4].o;
	jint temp1 = frame[5].i;
	INST_IINC(5, 1);
	ARRAY_ACCESS(jbyte, sp[0].o, temp1) = (jbyte(((bit_cast<jint>(bit_cast<uint32_t>((frame[3].i)) >> (jint(0)))) & (255))));
	LINE_NUMBER(104);
	frame[6].i = (jint(0));
	LINE_NUMBER(105);
	frame[6].i = (jint(0));
	}
label_18:;
	{
	if ((frame[6].i) >= (frame[2].i)) goto label_19;
	}
	{
	LINE_NUMBER(106);
	jint temp0 = (jint)((func_java_lang_String_charAt_int_R_char) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_String_charAt_int_R_char])(ctx, (frame[1].o), (frame[6].i));
	frame[7].i = temp0;
	LINE_NUMBER(107);
	if ((frame[7].i) >= (128)) goto label_19;
	}
	INST_ILOAD(7);
	if ((--sp)->i != 0) goto label_22;
	goto label_19;
label_22:;
	{
	LINE_NUMBER(108);
	sp[0].o = frame[4].o;
	jint temp0 = frame[5].i;
	INST_IINC(5, 1);
	ARRAY_ACCESS(jbyte, sp[0].o, temp0) = (jbyte((frame[7].i)));
	LINE_NUMBER(105);
	INST_IINC(6, 1);
	goto label_18;
	}
label_19:;
	{
	LINE_NUMBER(111);
	if ((frame[6].i) >= (frame[2].i)) goto label_24;
	}
	{
	LINE_NUMBER(112);
	jint temp0 = (jint)((func_java_lang_String_charAt_int_R_char) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_String_charAt_int_R_char])(ctx, (frame[1].o), (frame[6].i));
	frame[7].i = temp0;
	LINE_NUMBER(113);
	if ((frame[7].i) >= (128)) goto label_27;
	}
	INST_ILOAD(7);
	if ((--sp)->i == 0) goto label_27;
	{
	LINE_NUMBER(114);
	sp[0].o = frame[4].o;
	jint temp0 = frame[5].i;
	INST_IINC(5, 1);
	ARRAY_ACCESS(jbyte, sp[0].o, temp0) = (jbyte((frame[7].i)));
	goto label_29;
	}
label_27:;
	{
	LINE_NUMBER(115);
	if ((frame[7].i) < (2048)) goto label_30;
	}
	{
	LINE_NUMBER(116);
	sp[0].o = frame[4].o;
	jint temp0 = frame[5].i;
	INST_IINC(5, 1);
	ARRAY_ACCESS(jbyte, sp[0].o, temp0) = (jbyte(((224) | (((frame[7].i) >> (12)) & (15)))));
	LINE_NUMBER(117);
	sp[0].o = frame[4].o;
	jint temp1 = frame[5].i;
	INST_IINC(5, 1);
	ARRAY_ACCESS(jbyte, sp[0].o, temp1) = (jbyte(((128) | (((frame[7].i) >> (6)) & (63)))));
	LINE_NUMBER(118);
	sp[0].o = frame[4].o;
	jint temp2 = frame[5].i;
	INST_IINC(5, 1);
	ARRAY_ACCESS(jbyte, sp[0].o, temp2) = (jbyte(((128) | (((frame[7].i) >> (jint(0))) & (63)))));
	goto label_29;
	}
label_30:;
	{
	LINE_NUMBER(120);
	sp[0].o = frame[4].o;
	jint temp0 = frame[5].i;
	INST_IINC(5, 1);
	ARRAY_ACCESS(jbyte, sp[0].o, temp0) = (jbyte(((192) | (((frame[7].i) >> (6)) & (31)))));
	LINE_NUMBER(121);
	sp[0].o = frame[4].o;
	jint temp1 = frame[5].i;
	INST_IINC(5, 1);
	ARRAY_ACCESS(jbyte, sp[0].o, temp1) = (jbyte(((128) | (((frame[7].i) >> (jint(0))) & (63)))));
	}
label_29:;
	{
	LINE_NUMBER(111);
	INST_IINC(6, 1);
	goto label_19;
	}
label_24:;
	{
	LINE_NUMBER(124);
	((func_arc_util_io_ByteBufferOutput_write_Array1_byte_int_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_util_io_ByteBufferOutput_write_Array1_byte_int_int])(ctx, (frame[0].o), (frame[4].o), (jint(0)), ((frame[3].i) + (jint(2))));
	LINE_NUMBER(125);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void *vtable_arc_util_io_ByteBufferOutput[] {
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
	(void *) M_arc_util_io_ByteBufferOutput_write_Array1_byte,
	(void *) M_arc_util_io_ByteBufferOutput_write_Array1_byte_int_int,
	(void *) M_arc_util_io_ByteBufferOutput_write_int,
	(void *) M_arc_util_io_ByteBufferOutput_writeBoolean_boolean,
	(void *) M_arc_util_io_ByteBufferOutput_writeByte_int,
	(void *) M_arc_util_io_ByteBufferOutput_writeChar_int,
	(void *) M_arc_util_io_ByteBufferOutput_writeChars_java_lang_String,
	(void *) M_arc_util_io_ByteBufferOutput_writeDouble_double,
	(void *) M_arc_util_io_ByteBufferOutput_writeFloat_float,
	(void *) M_arc_util_io_ByteBufferOutput_writeInt_int,
	(void *) M_arc_util_io_ByteBufferOutput_writeLong_long,
	(void *) M_arc_util_io_ByteBufferOutput_writeShort_int,
	(void *) M_arc_util_io_ByteBufferOutput_writeUTF_java_lang_String,
	(void *) M_arc_util_io_ByteBufferOutput_writeBytes_java_lang_String,
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
	{ "write", "([B)V" },
	{ "write", "([BII)V" },
	{ "write", "(I)V" },
	{ "writeBoolean", "(Z)V" },
	{ "writeByte", "(I)V" },
	{ "writeChar", "(I)V" },
	{ "writeChars", "(Ljava/lang/String;)V" },
	{ "writeDouble", "(D)V" },
	{ "writeFloat", "(F)V" },
	{ "writeInt", "(I)V" },
	{ "writeLong", "(J)V" },
	{ "writeShort", "(I)V" },
	{ "writeUTF", "(Ljava/lang/String;)V" },
	{ "writeBytes", "(Ljava/lang/String;)V" },
};

static jclass interfaces[] { &class_java_io_DataOutput, };

static FieldMetadata fields[] {
	{ "buffer", &class_java_nio_ByteBuffer, offsetof(arc_util_io_ByteBufferOutput, F_buffer), "Ljava/nio/ByteBuffer;", 1 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_arc_util_io_ByteBufferOutput_java_nio_ByteBuffer, 0, "(Ljava/nio/ByteBuffer;)V", 1 },
	{ "<init>", (intptr_t) init_arc_util_io_ByteBufferOutput, 0, "()V", 1 },
	{ "write", (intptr_t) M_arc_util_io_ByteBufferOutput_write_int, VTABLE_arc_util_io_ByteBufferOutput_write_int, "(I)V", 1 },
	{ "write", (intptr_t) M_arc_util_io_ByteBufferOutput_write_Array1_byte, VTABLE_arc_util_io_ByteBufferOutput_write_Array1_byte, "([B)V", 1 },
	{ "write", (intptr_t) M_arc_util_io_ByteBufferOutput_write_Array1_byte_int_int, VTABLE_arc_util_io_ByteBufferOutput_write_Array1_byte_int_int, "([BII)V", 1 },
	{ "writeBoolean", (intptr_t) M_arc_util_io_ByteBufferOutput_writeBoolean_boolean, VTABLE_arc_util_io_ByteBufferOutput_writeBoolean_boolean, "(Z)V", 1 },
	{ "writeByte", (intptr_t) M_arc_util_io_ByteBufferOutput_writeByte_int, VTABLE_arc_util_io_ByteBufferOutput_writeByte_int, "(I)V", 1 },
	{ "writeShort", (intptr_t) M_arc_util_io_ByteBufferOutput_writeShort_int, VTABLE_arc_util_io_ByteBufferOutput_writeShort_int, "(I)V", 1 },
	{ "writeChar", (intptr_t) M_arc_util_io_ByteBufferOutput_writeChar_int, VTABLE_arc_util_io_ByteBufferOutput_writeChar_int, "(I)V", 1 },
	{ "writeInt", (intptr_t) M_arc_util_io_ByteBufferOutput_writeInt_int, VTABLE_arc_util_io_ByteBufferOutput_writeInt_int, "(I)V", 1 },
	{ "writeLong", (intptr_t) M_arc_util_io_ByteBufferOutput_writeLong_long, VTABLE_arc_util_io_ByteBufferOutput_writeLong_long, "(J)V", 1 },
	{ "writeFloat", (intptr_t) M_arc_util_io_ByteBufferOutput_writeFloat_float, VTABLE_arc_util_io_ByteBufferOutput_writeFloat_float, "(F)V", 1 },
	{ "writeDouble", (intptr_t) M_arc_util_io_ByteBufferOutput_writeDouble_double, VTABLE_arc_util_io_ByteBufferOutput_writeDouble_double, "(D)V", 1 },
	{ "writeBytes", (intptr_t) M_arc_util_io_ByteBufferOutput_writeBytes_java_lang_String, VTABLE_arc_util_io_ByteBufferOutput_writeBytes_java_lang_String, "(Ljava/lang/String;)V", 1 },
	{ "writeChars", (intptr_t) M_arc_util_io_ByteBufferOutput_writeChars_java_lang_String, VTABLE_arc_util_io_ByteBufferOutput_writeChars_java_lang_String, "(Ljava/lang/String;)V", 1 },
	{ "writeUTF", (intptr_t) M_arc_util_io_ByteBufferOutput_writeUTF_java_lang_String, VTABLE_arc_util_io_ByteBufferOutput_writeUTF_java_lang_String, "(Ljava/lang/String;)V", 1 },
};

Class class_arc_util_io_ByteBufferOutput{
		.nativeName = (intptr_t) "arc/util/io/ByteBufferOutput",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(arc_util_io_ByteBufferOutput),
		.classVtable = (intptr_t) vtable_arc_util_io_ByteBufferOutput,
		.staticInitializer = (intptr_t) clinit_arc_util_io_ByteBufferOutput,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_arc_util_io_ByteBufferOutput,
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
		.methodCount = 16,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 26,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_arc_util_io_ByteBufferOutput = registerClass(&class_arc_util_io_ByteBufferOutput);

}
