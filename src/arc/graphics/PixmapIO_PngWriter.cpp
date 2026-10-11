#include "arc/graphics/PixmapIO_PngWriter.h"
#include "arc/util/Disposable.h"
#include "arc/graphics/PixmapIO_PngWriter_ChunkBuffer.h"
#include "arc/graphics/PixmapIO.h"
#include "arc/graphics/PixmapIO_PngWriter.h"
#include "arc/files/Fi.h"
#include "java/util/zip/Deflater.h"
#include "java/io/OutputStream.h"
#include "java/io/DataOutput.h"
#include "java/nio/ByteBuffer.h"
#include "java/lang/Object.h"
#include "arc/graphics/Pixmap.h"
#include "java/nio/Buffer.h"
#include "java/util/zip/DeflaterOutputStream.h"
#include "java/io/DataOutputStream.h"
#include "arc/util/io/Streams.h"
#include "java/io/Closeable.h"
#include "java/lang/Throwable.h"

extern "C" {

jobject SF_arc_graphics_PixmapIO$PngWriter_SIGNATURE;
jint SF_arc_graphics_PixmapIO$PngWriter_IHDR;
jint SF_arc_graphics_PixmapIO$PngWriter_IDAT;
jint SF_arc_graphics_PixmapIO$PngWriter_IEND;
jbyte SF_arc_graphics_PixmapIO$PngWriter_COLOR_ARGB;
jbyte SF_arc_graphics_PixmapIO$PngWriter_COMPRESSION_DEFLATE;
jbyte SF_arc_graphics_PixmapIO$PngWriter_FILTER_NONE;
jbyte SF_arc_graphics_PixmapIO$PngWriter_INTERLACE_NONE;

void mark_arc_graphics_PixmapIO$PngWriter(jobject object, jint mark, jint depth) {
	if (!object) {
		if (SF_arc_graphics_PixmapIO$PngWriter_SIGNATURE)
			((gc_mark_ptr) ((jclass) ((jobject) SF_arc_graphics_PixmapIO$PngWriter_SIGNATURE)->clazz)->markFunction)((jobject) SF_arc_graphics_PixmapIO$PngWriter_SIGNATURE, mark, depth + 1);
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
	auto self = (arc_graphics_PixmapIO$PngWriter *) object;
	if (self->F_buffer)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_buffer)->clazz)->markFunction)((jobject) self->F_buffer, mark, depth + 1);
	if (self->F_deflater)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_deflater)->clazz)->markFunction)((jobject) self->F_deflater, mark, depth + 1);
}

void init_arc_graphics_PixmapIO$PngWriter(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/PixmapIO$PngWriter:<init>", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_graphics_PixmapIO$PngWriter(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(92);
	init_arc_graphics_PixmapIO$PngWriter_int(ctx, (frame[0].o), (16384));
	LINE_NUMBER(93);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_arc_graphics_PixmapIO$PngWriter_int(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/PixmapIO$PngWriter:<init>", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_graphics_PixmapIO$PngWriter(ctx);
	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(95);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(89);
	((arc_graphics_PixmapIO$PngWriter *) NULL_CHECK((frame[0].o)))->F_flipY = (jint(1));
	LINE_NUMBER(96);
	sp[0].o = frame[0].o;
	clinit_arc_graphics_PixmapIO$PngWriter$ChunkBuffer(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_graphics_PixmapIO$PngWriter$ChunkBuffer);
	init_arc_graphics_PixmapIO$PngWriter$ChunkBuffer_int(ctx, sp[1].o, (frame[1].i));
	((arc_graphics_PixmapIO$PngWriter *) NULL_CHECK(sp[0].o))->F_buffer = (jref) sp[1].o;
	LINE_NUMBER(97);
	sp[0].o = frame[0].o;
	clinit_java_util_zip_Deflater(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_util_zip_Deflater);
	init_java_util_zip_Deflater(ctx, sp[1].o);
	((arc_graphics_PixmapIO$PngWriter *) NULL_CHECK(sp[0].o))->F_deflater = (jref) sp[1].o;
	LINE_NUMBER(98);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_arc_graphics_PixmapIO$PngWriter_setFlipY_boolean(jcontext ctx, jobject self, jbool param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/PixmapIO$PngWriter:setFlipY", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(102);
	((arc_graphics_PixmapIO$PngWriter *) NULL_CHECK((frame[0].o)))->F_flipY = (frame[1].i);
	LINE_NUMBER(103);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_arc_graphics_PixmapIO$PngWriter_setCompression_int(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/PixmapIO$PngWriter:setCompression", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(107);
	sp[0].o = (jobject)((arc_graphics_PixmapIO$PngWriter *) NULL_CHECK((frame[0].o)))->F_deflater;
	((func_java_util_zip_Deflater_setLevel_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_zip_Deflater_setLevel_int])(ctx, sp[0].o, (frame[1].i));
	LINE_NUMBER(108);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_arc_graphics_PixmapIO$PngWriter_write_arc_files_Fi_arc_graphics_Pixmap(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/PixmapIO$PngWriter:write", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(111);
	sp[0].o = (jobject)((func_arc_files_Fi_write_boolean_R_java_io_OutputStream) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_files_Fi_write_boolean_R_java_io_OutputStream])(ctx, (frame[1].o), (jint(0)));
	frame[3].o = sp[0].o;
	}
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(113);
	((func_arc_graphics_PixmapIO$PngWriter_write_java_io_OutputStream_arc_graphics_Pixmap) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_graphics_PixmapIO$PngWriter_write_java_io_OutputStream_arc_graphics_Pixmap])(ctx, (frame[0].o), (frame[3].o), (frame[2].o));
	}
	popExceptionFrame(frameRef);
	{
	LINE_NUMBER(115);
	SM_arc_util_io_Streams_close_java_io_Closeable(ctx, (frame[3].o));
	LINE_NUMBER(116);
	goto label_8;
	}
label_2:;
label_5: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	LINE_NUMBER(115);
	INST_ASTORE(4);
	popExceptionFrame(frameRef);
	{
	SM_arc_util_io_Streams_close_java_io_Closeable(ctx, (frame[3].o));
	LINE_NUMBER(116);
	throwException(ctx, (frame[4].o));	}
label_8:;
	LINE_NUMBER(117);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_arc_graphics_PixmapIO$PngWriter_write_java_io_OutputStream_arc_graphics_Pixmap(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[17];
	auto stack = &frame[12];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/PixmapIO$PngWriter:write", 17 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(121);
	clinit_java_util_zip_DeflaterOutputStream(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_util_zip_DeflaterOutputStream);
	sp[1].o = (jobject)((arc_graphics_PixmapIO$PngWriter *) NULL_CHECK((frame[0].o)))->F_buffer;
	sp[2].o = (jobject)((arc_graphics_PixmapIO$PngWriter *) NULL_CHECK((frame[0].o)))->F_deflater;
	init_java_util_zip_DeflaterOutputStream_java_io_OutputStream_java_util_zip_Deflater(ctx, sp[0].o, sp[1].o, sp[2].o);
	frame[3].o = sp[0].o;
	LINE_NUMBER(122);
	clinit_java_io_DataOutputStream(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_io_DataOutputStream);
	init_java_io_DataOutputStream_java_io_OutputStream(ctx, sp[0].o, (frame[1].o));
	frame[4].o = sp[0].o;
	LINE_NUMBER(123);
	sp[0].o = frame[4].o;
	clinit_arc_graphics_PixmapIO$PngWriter(ctx);
	sp[1].o = (jobject)SF_arc_graphics_PixmapIO$PngWriter_SIGNATURE;
	((func_java_io_DataOutputStream_write_Array1_byte) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_io_DataOutputStream_write_Array1_byte])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(125);
	sp[0].o = (jobject)((arc_graphics_PixmapIO$PngWriter *) NULL_CHECK((frame[0].o)))->F_buffer;
	((func_arc_graphics_PixmapIO$PngWriter$ChunkBuffer_writeInt_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_PixmapIO$PngWriter$ChunkBuffer_writeInt_int])(ctx, sp[0].o, (jint(1229472850)));
	LINE_NUMBER(126);
	sp[0].o = (jobject)((arc_graphics_PixmapIO$PngWriter *) NULL_CHECK((frame[0].o)))->F_buffer;
	((func_arc_graphics_PixmapIO$PngWriter$ChunkBuffer_writeInt_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_PixmapIO$PngWriter$ChunkBuffer_writeInt_int])(ctx, sp[0].o, ((jint)((arc_graphics_Pixmap *) NULL_CHECK((frame[2].o)))->F_width));
	LINE_NUMBER(127);
	sp[0].o = (jobject)((arc_graphics_PixmapIO$PngWriter *) NULL_CHECK((frame[0].o)))->F_buffer;
	((func_arc_graphics_PixmapIO$PngWriter$ChunkBuffer_writeInt_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_PixmapIO$PngWriter$ChunkBuffer_writeInt_int])(ctx, sp[0].o, ((jint)((arc_graphics_Pixmap *) NULL_CHECK((frame[2].o)))->F_height));
	LINE_NUMBER(128);
	sp[0].o = (jobject)((arc_graphics_PixmapIO$PngWriter *) NULL_CHECK((frame[0].o)))->F_buffer;
	((func_arc_graphics_PixmapIO$PngWriter$ChunkBuffer_writeByte_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_PixmapIO$PngWriter$ChunkBuffer_writeByte_int])(ctx, sp[0].o, (8));
	LINE_NUMBER(129);
	sp[0].o = (jobject)((arc_graphics_PixmapIO$PngWriter *) NULL_CHECK((frame[0].o)))->F_buffer;
	((func_arc_graphics_PixmapIO$PngWriter$ChunkBuffer_writeByte_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_PixmapIO$PngWriter$ChunkBuffer_writeByte_int])(ctx, sp[0].o, (6));
	LINE_NUMBER(130);
	sp[0].o = (jobject)((arc_graphics_PixmapIO$PngWriter *) NULL_CHECK((frame[0].o)))->F_buffer;
	((func_arc_graphics_PixmapIO$PngWriter$ChunkBuffer_writeByte_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_PixmapIO$PngWriter$ChunkBuffer_writeByte_int])(ctx, sp[0].o, (jint(0)));
	LINE_NUMBER(131);
	sp[0].o = (jobject)((arc_graphics_PixmapIO$PngWriter *) NULL_CHECK((frame[0].o)))->F_buffer;
	((func_arc_graphics_PixmapIO$PngWriter$ChunkBuffer_writeByte_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_PixmapIO$PngWriter$ChunkBuffer_writeByte_int])(ctx, sp[0].o, (jint(0)));
	LINE_NUMBER(132);
	sp[0].o = (jobject)((arc_graphics_PixmapIO$PngWriter *) NULL_CHECK((frame[0].o)))->F_buffer;
	((func_arc_graphics_PixmapIO$PngWriter$ChunkBuffer_writeByte_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_PixmapIO$PngWriter$ChunkBuffer_writeByte_int])(ctx, sp[0].o, (jint(0)));
	LINE_NUMBER(133);
	sp[0].o = (jobject)((arc_graphics_PixmapIO$PngWriter *) NULL_CHECK((frame[0].o)))->F_buffer;
	((func_arc_graphics_PixmapIO$PngWriter$ChunkBuffer_endChunk_java_io_DataOutputStream) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_PixmapIO$PngWriter$ChunkBuffer_endChunk_java_io_DataOutputStream])(ctx, sp[0].o, (frame[4].o));
	LINE_NUMBER(135);
	sp[0].o = (jobject)((arc_graphics_PixmapIO$PngWriter *) NULL_CHECK((frame[0].o)))->F_buffer;
	((func_arc_graphics_PixmapIO$PngWriter$ChunkBuffer_writeInt_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_PixmapIO$PngWriter$ChunkBuffer_writeInt_int])(ctx, sp[0].o, (jint(1229209940)));
	LINE_NUMBER(136);
	sp[0].o = (jobject)((arc_graphics_PixmapIO$PngWriter *) NULL_CHECK((frame[0].o)))->F_deflater;
	((func_java_util_zip_Deflater_reset) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_zip_Deflater_reset])(ctx, sp[0].o);
	LINE_NUMBER(138);
	frame[5].i = (((jint)((arc_graphics_Pixmap *) NULL_CHECK((frame[2].o)))->F_width) * (jint(4)));
	LINE_NUMBER(140);
	sp[0].o = (jobject) createArray(ctx, &class_byte, ((frame[5].i) + (jint(1))));
	frame[6].o = sp[0].o;
	LINE_NUMBER(142);
	sp[0].o = (jobject)((arc_graphics_Pixmap *) NULL_CHECK((frame[2].o)))->F_pixels;
	frame[7].o = sp[0].o;
	LINE_NUMBER(143);
	jint temp0 = (jint)((func_java_nio_ByteBuffer_position_R_int) ((void **) nullCheck(ctx, (frame[7].o))->vtable)[VTABLE_java_nio_ByteBuffer_position_R_int])(ctx, (frame[7].o));
	frame[8].i = temp0;
	LINE_NUMBER(144);
	frame[9].i = (jint(0));
	frame[10].i = ((jint)((arc_graphics_Pixmap *) NULL_CHECK((frame[2].o)))->F_height);
	}
label_20:;
	{
	if ((frame[9].i) >= (frame[10].i)) goto label_21;
	}
	{
	LINE_NUMBER(145);
	if (((jint)((arc_graphics_PixmapIO$PngWriter *) NULL_CHECK((frame[0].o)))->F_flipY) == 0) goto label_23;
	}
	{
	jint temp0 = ((frame[10].i) - (frame[9].i)) - (jint(1));
	sp[0].i = temp0;
	sp += 1;
	goto label_24;
	}
label_23:;
	INST_ILOAD(9);
label_24:;
	{
	sp -= 1;
	frame[11].i = sp[0].i;
	LINE_NUMBER(146);
	sp[0].o = (jobject)((func_java_nio_ByteBuffer_position_int_R_java_nio_Buffer) ((void **) nullCheck(ctx, (frame[7].o))->vtable)[VTABLE_java_nio_ByteBuffer_position_int_R_java_nio_Buffer])(ctx, (frame[7].o), ((frame[11].i) * (frame[5].i)));
	LINE_NUMBER(147);
	sp[0].o = (jobject)((func_java_nio_ByteBuffer_get_Array1_byte_int_int_R_java_nio_ByteBuffer) ((void **) nullCheck(ctx, (frame[7].o))->vtable)[VTABLE_java_nio_ByteBuffer_get_Array1_byte_int_int_R_java_nio_ByteBuffer])(ctx, (frame[7].o), (frame[6].o), (jint(1)), (frame[5].i));
	LINE_NUMBER(149);
	((func_java_util_zip_DeflaterOutputStream_write_Array1_byte_int_int) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_java_util_zip_DeflaterOutputStream_write_Array1_byte_int_int])(ctx, (frame[3].o), (frame[6].o), (jint(0)), ((frame[5].i) + (jint(1))));
	LINE_NUMBER(144);
	INST_IINC(9, 1);
	goto label_20;
	}
label_21:;
	{
	LINE_NUMBER(151);
	sp[0].o = (jobject)((func_java_nio_ByteBuffer_position_int_R_java_nio_Buffer) ((void **) nullCheck(ctx, (frame[7].o))->vtable)[VTABLE_java_nio_ByteBuffer_position_int_R_java_nio_Buffer])(ctx, (frame[7].o), (frame[8].i));
	LINE_NUMBER(152);
	((func_java_util_zip_DeflaterOutputStream_finish) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_java_util_zip_DeflaterOutputStream_finish])(ctx, (frame[3].o));
	LINE_NUMBER(153);
	sp[0].o = (jobject)((arc_graphics_PixmapIO$PngWriter *) NULL_CHECK((frame[0].o)))->F_buffer;
	((func_arc_graphics_PixmapIO$PngWriter$ChunkBuffer_endChunk_java_io_DataOutputStream) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_PixmapIO$PngWriter$ChunkBuffer_endChunk_java_io_DataOutputStream])(ctx, sp[0].o, (frame[4].o));
	LINE_NUMBER(155);
	sp[0].o = (jobject)((arc_graphics_PixmapIO$PngWriter *) NULL_CHECK((frame[0].o)))->F_buffer;
	((func_arc_graphics_PixmapIO$PngWriter$ChunkBuffer_writeInt_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_PixmapIO$PngWriter$ChunkBuffer_writeInt_int])(ctx, sp[0].o, (jint(1229278788)));
	LINE_NUMBER(156);
	sp[0].o = (jobject)((arc_graphics_PixmapIO$PngWriter *) NULL_CHECK((frame[0].o)))->F_buffer;
	((func_arc_graphics_PixmapIO$PngWriter$ChunkBuffer_endChunk_java_io_DataOutputStream) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_PixmapIO$PngWriter$ChunkBuffer_endChunk_java_io_DataOutputStream])(ctx, sp[0].o, (frame[4].o));
	LINE_NUMBER(158);
	((func_java_io_OutputStream_flush) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_io_OutputStream_flush])(ctx, (frame[1].o));
	LINE_NUMBER(159);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_arc_graphics_PixmapIO$PngWriter_dispose(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/PixmapIO$PngWriter:dispose", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(163);
	sp[0].o = (jobject)((arc_graphics_PixmapIO$PngWriter *) NULL_CHECK((frame[0].o)))->F_deflater;
	((func_java_util_zip_Deflater_end) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_zip_Deflater_end])(ctx, sp[0].o);
	LINE_NUMBER(164);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void clinit_arc_graphics_PixmapIO$PngWriter(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	SF_arc_graphics_PixmapIO$PngWriter_IHDR = jint(1229472850);
	SF_arc_graphics_PixmapIO$PngWriter_IDAT = jint(1229209940);
	SF_arc_graphics_PixmapIO$PngWriter_IEND = jint(1229278788);
	SF_arc_graphics_PixmapIO$PngWriter_COLOR_ARGB = jint(6);
	SF_arc_graphics_PixmapIO$PngWriter_COMPRESSION_DEFLATE = jint(0);
	SF_arc_graphics_PixmapIO$PngWriter_FILTER_NONE = jint(0);
	SF_arc_graphics_PixmapIO$PngWriter_INTERLACE_NONE = jint(0);
	jtype frame[4];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/PixmapIO$PngWriter:<clinit>", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_graphics_PixmapIO$PngWriter(ctx);
	{
	LINE_NUMBER(80);
	sp[0].o = (jobject) createArray(ctx, &class_byte, (8));
	ARRAY_ACCESS(jbyte, sp[0].o, (jint(0))) = (-119);
	ARRAY_ACCESS(jbyte, sp[0].o, (jint(1))) = (80);
	ARRAY_ACCESS(jbyte, sp[0].o, (jint(2))) = (78);
	ARRAY_ACCESS(jbyte, sp[0].o, (jint(3))) = (71);
	ARRAY_ACCESS(jbyte, sp[0].o, (jint(4))) = (13);
	ARRAY_ACCESS(jbyte, sp[0].o, (jint(5))) = (10);
	ARRAY_ACCESS(jbyte, sp[0].o, (6)) = (26);
	ARRAY_ACCESS(jbyte, sp[0].o, (7)) = (10);
	clinit_arc_graphics_PixmapIO$PngWriter(ctx);
	SF_arc_graphics_PixmapIO$PngWriter_SIGNATURE = sp[0].o;
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void *vtable_arc_graphics_PixmapIO$PngWriter[] {
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
	(void *) M_arc_graphics_PixmapIO$PngWriter_dispose,
	(void *) M_arc_util_Disposable_isDisposed_R_boolean,
	(void *) M_arc_graphics_PixmapIO$PngWriter_setFlipY_boolean,
	(void *) M_arc_graphics_PixmapIO$PngWriter_setCompression_int,
	(void *) M_arc_graphics_PixmapIO$PngWriter_write_arc_files_Fi_arc_graphics_Pixmap,
	(void *) M_arc_graphics_PixmapIO$PngWriter_write_java_io_OutputStream_arc_graphics_Pixmap,
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
	{ "dispose", "()V" },
	{ "isDisposed", "()Z" },
	{ "setFlipY", "(Z)V" },
	{ "setCompression", "(I)V" },
	{ "write", "(Larc/files/Fi;Larc/graphics/Pixmap;)V" },
	{ "write", "(Ljava/io/OutputStream;Larc/graphics/Pixmap;)V" },
};

static jclass interfaces[] { &class_arc_util_Disposable, };

static jclass innerClasses[] {
	&class_arc_graphics_PixmapIO$PngWriter$ChunkBuffer,
};

static FieldMetadata fields[] {
	{ "SIGNATURE", getArrayClass(&class_byte, 1), (intptr_t) &SF_arc_graphics_PixmapIO$PngWriter_SIGNATURE, "[B", 26 },
	{ "IHDR", &class_int, (intptr_t) &SF_arc_graphics_PixmapIO$PngWriter_IHDR, "I", 26 },
	{ "IDAT", &class_int, (intptr_t) &SF_arc_graphics_PixmapIO$PngWriter_IDAT, "I", 26 },
	{ "IEND", &class_int, (intptr_t) &SF_arc_graphics_PixmapIO$PngWriter_IEND, "I", 26 },
	{ "COLOR_ARGB", &class_byte, (intptr_t) &SF_arc_graphics_PixmapIO$PngWriter_COLOR_ARGB, "B", 26 },
	{ "COMPRESSION_DEFLATE", &class_byte, (intptr_t) &SF_arc_graphics_PixmapIO$PngWriter_COMPRESSION_DEFLATE, "B", 26 },
	{ "FILTER_NONE", &class_byte, (intptr_t) &SF_arc_graphics_PixmapIO$PngWriter_FILTER_NONE, "B", 26 },
	{ "INTERLACE_NONE", &class_byte, (intptr_t) &SF_arc_graphics_PixmapIO$PngWriter_INTERLACE_NONE, "B", 26 },
	{ "buffer", &class_arc_graphics_PixmapIO$PngWriter$ChunkBuffer, offsetof(arc_graphics_PixmapIO$PngWriter, F_buffer), "Larc/graphics/PixmapIO$PngWriter$ChunkBuffer;", 18 },
	{ "deflater", &class_java_util_zip_Deflater, offsetof(arc_graphics_PixmapIO$PngWriter, F_deflater), "Ljava/util/zip/Deflater;", 18 },
	{ "flipY", &class_boolean, offsetof(arc_graphics_PixmapIO$PngWriter, F_flipY), "Z", 2 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_arc_graphics_PixmapIO$PngWriter, 0, "()V", 1 },
	{ "<init>", (intptr_t) init_arc_graphics_PixmapIO$PngWriter_int, 0, "(I)V", 1 },
	{ "setFlipY", (intptr_t) M_arc_graphics_PixmapIO$PngWriter_setFlipY_boolean, VTABLE_arc_graphics_PixmapIO$PngWriter_setFlipY_boolean, "(Z)V", 1 },
	{ "setCompression", (intptr_t) M_arc_graphics_PixmapIO$PngWriter_setCompression_int, VTABLE_arc_graphics_PixmapIO$PngWriter_setCompression_int, "(I)V", 1 },
	{ "write", (intptr_t) M_arc_graphics_PixmapIO$PngWriter_write_arc_files_Fi_arc_graphics_Pixmap, VTABLE_arc_graphics_PixmapIO$PngWriter_write_arc_files_Fi_arc_graphics_Pixmap, "(Larc/files/Fi;Larc/graphics/Pixmap;)V", 1 },
	{ "write", (intptr_t) M_arc_graphics_PixmapIO$PngWriter_write_java_io_OutputStream_arc_graphics_Pixmap, VTABLE_arc_graphics_PixmapIO$PngWriter_write_java_io_OutputStream_arc_graphics_Pixmap, "(Ljava/io/OutputStream;Larc/graphics/Pixmap;)V", 1 },
	{ "dispose", (intptr_t) M_arc_graphics_PixmapIO$PngWriter_dispose, VTABLE_arc_graphics_PixmapIO$PngWriter_dispose, "()V", 1 },
	{ "<clinit>", (intptr_t) clinit_arc_graphics_PixmapIO$PngWriter, 0, "()V", 8 },
};

Class class_arc_graphics_PixmapIO$PngWriter{
		.nativeName = (intptr_t) "arc/graphics/PixmapIO$PngWriter",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(arc_graphics_PixmapIO$PngWriter),
		.classVtable = (intptr_t) vtable_arc_graphics_PixmapIO$PngWriter,
		.staticInitializer = (intptr_t) clinit_arc_graphics_PixmapIO$PngWriter,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_arc_graphics_PixmapIO$PngWriter,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) &class_arc_graphics_PixmapIO,
		.innerClassCount = 1,
		.nativeInnerClasses = (intptr_t) innerClasses,
		.access = 33,
		.interfaceCount = 1,
		.nativeInterfaces = (intptr_t) interfaces,
		.fieldCount = 11,
		.nativeFields = (intptr_t) fields,
		.methodCount = 8,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 17,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_arc_graphics_PixmapIO$PngWriter = registerClass(&class_arc_graphics_PixmapIO$PngWriter);

}

