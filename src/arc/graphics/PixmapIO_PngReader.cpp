#include "arc/graphics/PixmapIO_PngReader.h"
#include "java/lang/StringBuilder.h"
#include "java/io/DataInputStream.h"
#include "arc/graphics/PixmapIO.h"
#include "java/util/zip/DataFormatException.h"
#include "java/lang/Long.h"
#include "arc/graphics/Color.h"
#include "java/util/zip/Inflater.h"
#include "java/nio/ByteBuffer.h"
#include "java/io/InputStream.h"
#include "java/lang/Object.h"
#include "java/lang/String.h"
#include "java/nio/Buffer.h"
#include "arc/graphics/PixmapIO_PngReader.h"
#include "java/io/IOException.h"
#include "java/io/FilterInputStream.h"
#include "arc/util/Pack.h"
#include "java/lang/Throwable.h"

extern "C" {

jint SF_arc_graphics_PixmapIO$PngReader_ctypeRgba;
jint SF_arc_graphics_PixmapIO$PngReader_ctypePalette;
jint SF_arc_graphics_PixmapIO$PngReader_ctypeRgb;

void mark_arc_graphics_PixmapIO$PngReader(jobject object, jint mark, jint depth) {
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
	auto self = (arc_graphics_PixmapIO$PngReader *) object;
	if (self->F_imgData)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_imgData)->clazz)->markFunction)((jobject) self->F_imgData, mark, depth + 1);
	if (self->F_buf)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_buf)->clazz)->markFunction)((jobject) self->F_buf, mark, depth + 1);
	if (self->F_palette)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_palette)->clazz)->markFunction)((jobject) self->F_palette, mark, depth + 1);
}

void clinit_arc_graphics_PixmapIO$PngReader(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	SF_arc_graphics_PixmapIO$PngReader_ctypeRgba = jint(6);
	SF_arc_graphics_PixmapIO$PngReader_ctypePalette = jint(3);
	SF_arc_graphics_PixmapIO$PngReader_ctypeRgb = jint(2);
}

void init_arc_graphics_PixmapIO$PngReader(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/PixmapIO$PngReader:<init>", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_graphics_PixmapIO$PngReader(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(192);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(204);
	((arc_graphics_PixmapIO$PngReader *) NULL_CHECK((frame[0].o)))->F_imgData = (jref) (jobject(nullptr));
	LINE_NUMBER(205);
	((arc_graphics_PixmapIO$PngReader *) NULL_CHECK((frame[0].o)))->F_buf = (jref) (jobject(nullptr));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_arc_graphics_PixmapIO$PngReader_read_java_io_InputStream_R_java_nio_ByteBuffer(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/PixmapIO$PngReader:read", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(209);
	sp[0].o = frame[0].o;
	clinit_java_io_DataInputStream(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_io_DataInputStream);
	init_java_io_DataInputStream_java_io_InputStream(ctx, sp[1].o, (frame[1].o));
	M_arc_graphics_PixmapIO$PngReader_readChunks_java_io_DataInputStream(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(211);
	sp[0].o = (jobject)((arc_graphics_PixmapIO$PngReader *) NULL_CHECK((frame[0].o)))->F_buf;
	if (sp[0].o == nullptr) goto label_6;
	}
	{
	sp[0].o = (jobject)((arc_graphics_PixmapIO$PngReader *) NULL_CHECK((frame[0].o)))->F_buf;
	sp[0].o = (jobject)((func_java_nio_ByteBuffer_clear_R_java_nio_Buffer) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_nio_ByteBuffer_clear_R_java_nio_Buffer])(ctx, sp[0].o);
	}
label_6:;
	{
	LINE_NUMBER(212);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)SM_java_nio_ByteBuffer_allocateDirect_int_R_java_nio_ByteBuffer(ctx, ((jint)((arc_graphics_PixmapIO$PngReader *) NULL_CHECK((frame[0].o)))->F_cs));
	((arc_graphics_PixmapIO$PngReader *) NULL_CHECK(sp[0].o))->F_buf = (jref) sp[1].o;
	}
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_util_zip_DataFormatException))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(214);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((arc_graphics_PixmapIO$PngReader *) NULL_CHECK((frame[0].o)))->F_buf;
	M_arc_graphics_PixmapIO$PngReader_getImage_java_nio_ByteBuffer(ctx, sp[0].o, sp[1].o);
	}
	popExceptionFrame(frameRef);
	LINE_NUMBER(217);
	goto label_7;
label_2:;
	{
	sp -= 1;
	LINE_NUMBER(215);
	frame[2].o = sp[0].o;
	LINE_NUMBER(216);
	clinit_java_io_IOException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_io_IOException);
	init_java_io_IOException_java_lang_Throwable(ctx, sp[0].o, (frame[2].o));
	throwException(ctx, sp[0].o);	}
label_7:;
	{
	LINE_NUMBER(218);
	sp[0].o = (jobject)((arc_graphics_PixmapIO$PngReader *) NULL_CHECK((frame[0].o)))->F_buf;
	sp[0].o = (jobject)((func_java_nio_ByteBuffer_flip_R_java_nio_Buffer) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_nio_ByteBuffer_flip_R_java_nio_Buffer])(ctx, sp[0].o);
	LINE_NUMBER(219);
	sp[0].o = (jobject)((arc_graphics_PixmapIO$PngReader *) NULL_CHECK((frame[0].o)))->F_buf;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void M_arc_graphics_PixmapIO$PngReader_readChunks_java_io_DataInputStream(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[12];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/PixmapIO$PngReader:readChunks", 12 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(223);
	sp[0].o = (jobject)((arc_graphics_PixmapIO$PngReader *) NULL_CHECK((frame[0].o)))->F_imgData;
	if (sp[0].o != nullptr) goto label_1;
	}
	{
	jint temp0 = (jint)((func_java_io_DataInputStream_available_R_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_io_DataInputStream_available_R_int])(ctx, (frame[1].o));
	if (temp0 <= (jint(4))) goto label_1;
	}
	{
	LINE_NUMBER(224);
	jlong temp0 = (jlong)((func_java_io_DataInputStream_readLong_R_long) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_io_DataInputStream_readLong_R_long])(ctx, (frame[1].o));
	frame[2].l = temp0;
	LINE_NUMBER(225);
	if ((longCompare((frame[2].l), (jlong(-8552249625308161526ll)))) == 0) goto label_4;
	}
	{
	LINE_NUMBER(226);
	sp[0].o = (jobject)SM_java_lang_Long_toHexString_long_R_java_lang_String(ctx, (frame[2].l));
	frame[4].o = sp[0].o;
	LINE_NUMBER(227);
	clinit_java_io_IOException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_io_IOException);
	jint temp0 = (jint)((func_java_lang_String_startsWith_java_lang_String_R_boolean) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_java_lang_String_startsWith_java_lang_String_R_boolean])(ctx, (frame[4].o), (((jobject) createStringLiteral(ctx, u8"ffd8ff"_j))));
	sp[1].o = sp[0].o;
	sp += 2;
	if (temp0 == 0) goto label_7;
	}
	(sp++)->o = ((jobject) createStringLiteral(ctx, u8"This is a JPEG, not a PNG."_j));
	goto label_8;
label_7:;
	{
	clinit_java_lang_StringBuilder(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[0].o);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"This isn't a PNG. Header: 0x"_j))));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (frame[4].o));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[0].o);
	sp += 1;
	}
label_8:;
	POP_N(2); // Pop method args
	init_java_io_IOException_java_lang_String(ctx, sp[0].o, sp[1].o);
	INST_ATHROW();
	label_4:;
	LINE_NUMBER(229);
	goto label_9;
label_1:;
	{
	sp[0].o = (jobject)((arc_graphics_PixmapIO$PngReader *) NULL_CHECK((frame[0].o)))->F_imgData;
	if (sp[0].o != nullptr) goto label_9;
	}
	{
	LINE_NUMBER(230);
	((arc_graphics_PixmapIO$PngReader *) NULL_CHECK((frame[0].o)))->F_width = (jint(0));
	LINE_NUMBER(231);
	popStackFrame(ctx);
	return;
	}
label_9:;
	{
	LINE_NUMBER(233);
	((arc_graphics_PixmapIO$PngReader *) NULL_CHECK((frame[0].o)))->F_dataLen = (jint(0));
	}
label_12:;
	{
	LINE_NUMBER(236);
	jint temp0 = (jint)((func_java_io_DataInputStream_readInt_R_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_io_DataInputStream_readInt_R_int])(ctx, (frame[1].o));
	frame[3].i = temp0;
	LINE_NUMBER(237);
	if ((frame[3].i) <= 0) goto label_14;
	}
	{
	if ((frame[3].i) <= (jint(99998192))) goto label_15;
	}
	goto label_14;
label_15:;
	{
	LINE_NUMBER(239);
	jint temp0 = (jint)((func_java_io_DataInputStream_readInt_R_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_io_DataInputStream_readInt_R_int])(ctx, (frame[1].o));
	frame[2].i = temp0;
	LINE_NUMBER(240);
	if ((frame[2].i) != (jint(1229278788))) goto label_17;
	}
	LINE_NUMBER(241);
	goto label_14;
label_17:;
	{
	LINE_NUMBER(242);
	if ((frame[2].i) != (jint(1229209940))) goto label_19;
	}
	{
	LINE_NUMBER(243);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((arc_graphics_PixmapIO$PngReader *) NULL_CHECK((frame[0].o)))->F_imgData;
	((func_java_io_DataInputStream_readFully_Array1_byte_int_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_io_DataInputStream_readFully_Array1_byte_int_int])(ctx, sp[0].o, sp[1].o, ((jint)((arc_graphics_PixmapIO$PngReader *) NULL_CHECK((frame[0].o)))->F_dataLen), (frame[3].i));
	LINE_NUMBER(244);
	sp[0].o = frame[0].o;
	((arc_graphics_PixmapIO$PngReader *) NULL_CHECK(sp[0].o))->F_dataLen = (((jint)((arc_graphics_PixmapIO$PngReader *) NULL_CHECK(sp[0].o))->F_dataLen) + (frame[3].i));
	goto label_22;
	}
label_19:;
	{
	LINE_NUMBER(245);
	if ((frame[2].i) != (jint(1229472850))) goto label_23;
	}
	{
	LINE_NUMBER(246);
	sp[0].o = frame[0].o;
	jint temp0 = (jint)((func_java_io_DataInputStream_readInt_R_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_io_DataInputStream_readInt_R_int])(ctx, (frame[1].o));
	((arc_graphics_PixmapIO$PngReader *) NULL_CHECK(sp[0].o))->F_width = temp0;
	LINE_NUMBER(247);
	sp[0].o = frame[0].o;
	jint temp1 = (jint)((func_java_io_DataInputStream_readInt_R_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_io_DataInputStream_readInt_R_int])(ctx, (frame[1].o));
	((arc_graphics_PixmapIO$PngReader *) NULL_CHECK(sp[0].o))->F_height = temp1;
	LINE_NUMBER(248);
	sp[0].o = frame[0].o;
	jint temp2 = (jint)((func_java_io_DataInputStream_readByte_R_byte) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_io_DataInputStream_readByte_R_byte])(ctx, (frame[1].o));
	((arc_graphics_PixmapIO$PngReader *) NULL_CHECK(sp[0].o))->F_bitDepth = temp2;
	LINE_NUMBER(249);
	sp[0].o = frame[0].o;
	jint temp3 = (jint)((func_java_io_DataInputStream_readByte_R_byte) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_io_DataInputStream_readByte_R_byte])(ctx, (frame[1].o));
	((arc_graphics_PixmapIO$PngReader *) NULL_CHECK(sp[0].o))->F_colorType = temp3;
	LINE_NUMBER(250);
	sp[0].o = frame[0].o;
	jint temp4 = (jint)((func_java_io_DataInputStream_readByte_R_byte) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_io_DataInputStream_readByte_R_byte])(ctx, (frame[1].o));
	((arc_graphics_PixmapIO$PngReader *) NULL_CHECK(sp[0].o))->F_compression = temp4;
	LINE_NUMBER(251);
	sp[0].o = frame[0].o;
	jint temp5 = (jint)((func_java_io_DataInputStream_readByte_R_byte) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_io_DataInputStream_readByte_R_byte])(ctx, (frame[1].o));
	((arc_graphics_PixmapIO$PngReader *) NULL_CHECK(sp[0].o))->F_filter = temp5;
	LINE_NUMBER(252);
	sp[0].o = frame[0].o;
	jint temp6 = (jint)((func_java_io_DataInputStream_readByte_R_byte) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_io_DataInputStream_readByte_R_byte])(ctx, (frame[1].o));
	((arc_graphics_PixmapIO$PngReader *) NULL_CHECK(sp[0].o))->F_interlace = temp6;
	LINE_NUMBER(254);
	((arc_graphics_PixmapIO$PngReader *) NULL_CHECK((frame[0].o)))->F_cs = (((jint(4)) * ((jint)((arc_graphics_PixmapIO$PngReader *) NULL_CHECK((frame[0].o)))->F_width)) * ((jint)((arc_graphics_PixmapIO$PngReader *) NULL_CHECK((frame[0].o)))->F_height));
	LINE_NUMBER(255);
	sp[0].o = frame[0].o;
	jint temp7 = (jint)((func_java_io_DataInputStream_available_R_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_io_DataInputStream_available_R_int])(ctx, (frame[1].o));
	sp[1].o = (jobject) createArray(ctx, &class_byte, temp7);
	((arc_graphics_PixmapIO$PngReader *) NULL_CHECK(sp[0].o))->F_imgData = (jref) sp[1].o;
	LINE_NUMBER(258);
	if (((jint)((arc_graphics_PixmapIO$PngReader *) NULL_CHECK((frame[0].o)))->F_bitDepth) != (16)) goto label_34;
	}
	{
	clinit_java_io_IOException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_io_IOException);
	init_java_io_IOException_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"16-bit depth is not supported."_j))));
	throwException(ctx, sp[0].o);	}
label_34:;
	{
	LINE_NUMBER(259);
	if (((jint)((arc_graphics_PixmapIO$PngReader *) NULL_CHECK((frame[0].o)))->F_colorType) != (jint(3))) goto label_35;
	}
	{
	if (((jint)((arc_graphics_PixmapIO$PngReader *) NULL_CHECK((frame[0].o)))->F_bitDepth) >= (jint(4))) goto label_35;
	}
	{
	clinit_java_io_IOException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_io_IOException);
	clinit_java_lang_StringBuilder(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[1].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"Only PNG palettes with 4 or 8-bit depth are supported. Depth given: "_j))));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder])(ctx, sp[1].o, ((jint)((arc_graphics_PixmapIO$PngReader *) NULL_CHECK((frame[0].o)))->F_bitDepth));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[1].o);
	init_java_io_IOException_java_lang_String(ctx, sp[0].o, sp[1].o);
	throwException(ctx, sp[0].o);	}
label_35:;
	{
	LINE_NUMBER(260);
	if (((jint)((arc_graphics_PixmapIO$PngReader *) NULL_CHECK((frame[0].o)))->F_colorType) == (jint(3))) goto label_36;
	}
	{
	if (((jint)((arc_graphics_PixmapIO$PngReader *) NULL_CHECK((frame[0].o)))->F_colorType) == (jint(2))) goto label_36;
	}
	{
	if (((jint)((arc_graphics_PixmapIO$PngReader *) NULL_CHECK((frame[0].o)))->F_colorType) == (6)) goto label_36;
	}
	{
	clinit_java_io_IOException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_io_IOException);
	clinit_java_lang_StringBuilder(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[1].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"Unsupported color type: "_j))));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder])(ctx, sp[1].o, ((jint)((arc_graphics_PixmapIO$PngReader *) NULL_CHECK((frame[0].o)))->F_colorType));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8" (Note that grayscale is not supported)"_j))));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[1].o);
	init_java_io_IOException_java_lang_String(ctx, sp[0].o, sp[1].o);
	throwException(ctx, sp[0].o);	}
label_36:;
	{
	LINE_NUMBER(261);
	if (((jint)((arc_graphics_PixmapIO$PngReader *) NULL_CHECK((frame[0].o)))->F_interlace) == 0) goto label_22;
	}
	{
	clinit_java_io_IOException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_io_IOException);
	init_java_io_IOException_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"PNG interlacing is not supported."_j))));
	throwException(ctx, sp[0].o);	}
label_23:;
	{
	LINE_NUMBER(263);
	if (((jint)((arc_graphics_PixmapIO$PngReader *) NULL_CHECK((frame[0].o)))->F_colorType) != (jint(3))) goto label_37;
	}
	{
	if ((frame[2].i) != (jint(1347179589))) goto label_37;
	}
	{
	LINE_NUMBER(264);
	frame[4].i = ((frame[3].i) / (jint(3)));
	LINE_NUMBER(265);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject) createArray(ctx, &class_int, (frame[4].i));
	((arc_graphics_PixmapIO$PngReader *) NULL_CHECK(sp[0].o))->F_palette = (jref) sp[1].o;
	LINE_NUMBER(266);
	frame[5].i = (jint(0));
	}
label_41:;
	{
	if ((frame[5].i) >= (frame[4].i)) goto label_42;
	}
	{
	LINE_NUMBER(267);
	sp[0].o = (jobject)((arc_graphics_PixmapIO$PngReader *) NULL_CHECK((frame[0].o)))->F_palette;
	jint temp0 = frame[5].i;
	jint temp1 = (jint)((func_java_io_DataInputStream_readUnsignedByte_R_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_io_DataInputStream_readUnsignedByte_R_int])(ctx, (frame[1].o));
	jint temp2 = (jint)((func_java_io_DataInputStream_readUnsignedByte_R_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_io_DataInputStream_readUnsignedByte_R_int])(ctx, (frame[1].o));
	jint temp3 = (jint)((func_java_io_DataInputStream_readUnsignedByte_R_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_io_DataInputStream_readUnsignedByte_R_int])(ctx, (frame[1].o));
	jint temp4 = (jint)SM_arc_graphics_Color_packRgba_int_int_int_int_R_int(ctx, temp1, temp2, temp3, (255));
	ARRAY_ACCESS(jint, sp[0].o, temp0) = temp4;
	LINE_NUMBER(266);
	INST_IINC(5, 1);
	goto label_41;
	}
label_42:;
	LINE_NUMBER(269);
	goto label_22;
label_37:;
	{
	if (((jint)((arc_graphics_PixmapIO$PngReader *) NULL_CHECK((frame[0].o)))->F_colorType) != (jint(3))) goto label_45;
	}
	{
	if ((frame[2].i) != (jint(1951551059))) goto label_45;
	}
	{
	LINE_NUMBER(270);
	frame[4].i = (jint(0));
	}
label_47:;
	{
	if ((frame[4].i) >= (frame[3].i)) goto label_48;
	}
	{
	LINE_NUMBER(271);
	sp[0].o = (jobject)((arc_graphics_PixmapIO$PngReader *) NULL_CHECK((frame[0].o)))->F_palette;
	jint temp0 = frame[4].i;
	sp[1].o = (jobject)((arc_graphics_PixmapIO$PngReader *) NULL_CHECK((frame[0].o)))->F_palette;
	jint temp1 = ((jint)ARRAY_ACCESS(jint, sp[1].o, (frame[4].i))) & (-256);
	jint temp2 = (jint)((func_java_io_DataInputStream_readUnsignedByte_R_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_io_DataInputStream_readUnsignedByte_R_int])(ctx, (frame[1].o));
	ARRAY_ACCESS(jint, sp[0].o, temp0) = (temp1 | temp2);
	LINE_NUMBER(270);
	INST_IINC(4, 1);
	goto label_47;
	}
label_48:;
	goto label_22;
label_45:;
	{
	LINE_NUMBER(274);
	jint temp0 = (jint)((func_java_io_DataInputStream_skipBytes_int_R_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_io_DataInputStream_skipBytes_int_R_int])(ctx, (frame[1].o), (frame[3].i));
	}
label_22:;
	{
	LINE_NUMBER(276);
	jint temp0 = (jint)((func_java_io_DataInputStream_readInt_R_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_io_DataInputStream_readInt_R_int])(ctx, (frame[1].o));
	LINE_NUMBER(277);
	goto label_12;
	}
label_14:;
	LINE_NUMBER(278);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_arc_graphics_PixmapIO$PngReader_getImage_java_nio_ByteBuffer(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[20];
	auto stack = &frame[12];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/PixmapIO$PngReader:getImage", 20 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(283);
	if (((jint)((arc_graphics_PixmapIO$PngReader *) NULL_CHECK((frame[0].o)))->F_colorType) != (jint(3))) goto label_1;
	}
	INST_ICONST(1);
	goto label_2;
label_1:;
	{
	if (((jint)((arc_graphics_PixmapIO$PngReader *) NULL_CHECK((frame[0].o)))->F_colorType) != (jint(2))) goto label_3;
	}
	INST_ICONST(3);
	goto label_2;
label_3:;
	INST_ICONST(4);
label_2:;
	{
	sp -= 1;
	frame[2].i = sp[0].i;
	LINE_NUMBER(284);
	frame[3].i = (((jint)((arc_graphics_PixmapIO$PngReader *) NULL_CHECK((frame[0].o)))->F_width) * (jint(4)));
	LINE_NUMBER(285);
	if (((jint)((arc_graphics_PixmapIO$PngReader *) NULL_CHECK((frame[0].o)))->F_bitDepth) != (jint(4))) goto label_6;
	}
	{
	jint temp0 = ((jint)((arc_graphics_PixmapIO$PngReader *) NULL_CHECK((frame[0].o)))->F_width) / (jint(2));
	sp[0].i = temp0;
	sp += 1;
	goto label_7;
	}
label_6:;
	INST_ALOAD(0);
	sp[-1].i = ((arc_graphics_PixmapIO$PngReader *) NULL_CHECK(sp[-1].o))->F_width;
label_7:;
	{
	sp -= 1;
	frame[4].i = ((sp[0].i * (frame[2].i)) + (jint(1)));
	LINE_NUMBER(287);
	clinit_java_util_zip_Inflater(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_util_zip_Inflater);
	init_java_util_zip_Inflater(ctx, sp[0].o);
	frame[5].o = sp[0].o;
	LINE_NUMBER(288);
	sp[0].o = frame[5].o;
	sp[1].o = (jobject)((arc_graphics_PixmapIO$PngReader *) NULL_CHECK((frame[0].o)))->F_imgData;
	((func_java_util_zip_Inflater_setInput_Array1_byte_int_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_zip_Inflater_setInput_Array1_byte_int_int])(ctx, sp[0].o, sp[1].o, (jint(0)), ((jint)((arc_graphics_PixmapIO$PngReader *) NULL_CHECK((frame[0].o)))->F_dataLen));
	LINE_NUMBER(290);
	sp[0].o = (jobject) createArray(ctx, &class_byte, ((frame[3].i) + (jint(1))));
	frame[6].o = sp[0].o;
	sp[0].o = (jobject) createArray(ctx, &class_byte, ((frame[3].i) + (jint(1))));
	frame[7].o = sp[0].o;
	LINE_NUMBER(292);
	frame[8].i = (jint(1));
	frame[9].i = (jint(0));
	}
label_14:;
	{
	if ((frame[9].i) >= ((jint)((arc_graphics_PixmapIO$PngReader *) NULL_CHECK((frame[0].o)))->F_height)) goto label_15;
	}
	{
	LINE_NUMBER(294);
	jint temp0 = (jint)((func_java_util_zip_Inflater_inflate_Array1_byte_int_int_R_int) ((void **) nullCheck(ctx, (frame[5].o))->vtable)[VTABLE_java_util_zip_Inflater_inflate_Array1_byte_int_int_R_int])(ctx, (frame[5].o), (frame[7].o), (jint(0)), (frame[4].i));
	LINE_NUMBER(295);
	frame[10].i = ((jint)ARRAY_ACCESS(jbyte, (frame[7].o), (jint(0))));
	LINE_NUMBER(297);
	if ((frame[10].i) == 0) goto label_19;
	}
	{
	LINE_NUMBER(299);
	if ((frame[10].i) != (jint(1))) goto label_21;
	}
	{
	LINE_NUMBER(300);
	frame[8].i = ((frame[8].i) + (frame[2].i));
	}
label_23:;
	{
	if ((frame[8].i) >= (frame[4].i)) goto label_19;
	}
	{
	LINE_NUMBER(301);
	sp[0].o = frame[7].o;
	jint temp0 = frame[8].i;
	ARRAY_ACCESS(jbyte, sp[0].o, temp0) = (jbyte((((jint)ARRAY_ACCESS(jbyte, sp[0].o, temp0)) + ((jint)ARRAY_ACCESS(jbyte, (frame[7].o), ((frame[8].i) - (frame[2].i)))))));
	LINE_NUMBER(300);
	INST_IINC(8, 1);
	goto label_23;
	}
label_21:;
	{
	LINE_NUMBER(303);
	if ((frame[10].i) != (jint(2))) goto label_26;
	}
label_27:;
	{
	LINE_NUMBER(304);
	if ((frame[8].i) >= (frame[4].i)) goto label_19;
	}
	{
	LINE_NUMBER(305);
	sp[0].o = frame[7].o;
	jint temp0 = frame[8].i;
	ARRAY_ACCESS(jbyte, sp[0].o, temp0) = (jbyte((((jint)ARRAY_ACCESS(jbyte, sp[0].o, temp0)) + ((jint)ARRAY_ACCESS(jbyte, (frame[6].o), (frame[8].i))))));
	LINE_NUMBER(304);
	INST_IINC(8, 1);
	goto label_27;
	}
label_26:;
	{
	LINE_NUMBER(307);
	if ((frame[10].i) != (jint(3))) goto label_30;
	}
label_31:;
	{
	LINE_NUMBER(308);
	if ((frame[8].i) >= ((frame[2].i) + (jint(1)))) goto label_32;
	}
	{
	LINE_NUMBER(309);
	sp[0].o = frame[7].o;
	jint temp0 = frame[8].i;
	ARRAY_ACCESS(jbyte, sp[0].o, temp0) = (jbyte((((jint)ARRAY_ACCESS(jbyte, sp[0].o, temp0)) + (bit_cast<jint>(bit_cast<uint32_t>((((jint)ARRAY_ACCESS(jbyte, (frame[6].o), (frame[8].i))) & (255))) >> (jint(1)))))));
	LINE_NUMBER(308);
	INST_IINC(8, 1);
	goto label_31;
	}
label_32:;
	{
	LINE_NUMBER(311);
	if ((frame[8].i) >= (frame[4].i)) goto label_19;
	}
	{
	LINE_NUMBER(312);
	sp[0].o = frame[7].o;
	jint temp0 = frame[8].i;
	ARRAY_ACCESS(jbyte, sp[0].o, temp0) = (jbyte((((jint)ARRAY_ACCESS(jbyte, sp[0].o, temp0)) + (bit_cast<jint>(bit_cast<uint32_t>(((((jint)ARRAY_ACCESS(jbyte, (frame[6].o), (frame[8].i))) & (255)) + (((jint)ARRAY_ACCESS(jbyte, (frame[7].o), ((frame[8].i) - (frame[2].i)))) & (255)))) >> (jint(1)))))));
	LINE_NUMBER(311);
	INST_IINC(8, 1);
	goto label_32;
	}
label_30:;
	{
	LINE_NUMBER(315);
	if ((frame[8].i) >= ((frame[2].i) + (jint(1)))) goto label_37;
	}
	{
	LINE_NUMBER(316);
	sp[0].o = frame[7].o;
	jint temp0 = frame[8].i;
	ARRAY_ACCESS(jbyte, sp[0].o, temp0) = (jbyte((((jint)ARRAY_ACCESS(jbyte, sp[0].o, temp0)) + ((jint)ARRAY_ACCESS(jbyte, (frame[6].o), (frame[8].i))))));
	LINE_NUMBER(315);
	INST_IINC(8, 1);
	goto label_30;
	}
label_37:;
	{
	LINE_NUMBER(318);
	if ((frame[8].i) >= (frame[4].i)) goto label_19;
	}
	{
	LINE_NUMBER(319);
	sp[0].o = frame[7].o;
	jint temp0 = frame[8].i;
	jint temp3 = (jint)ARRAY_ACCESS(jbyte, sp[0].o, temp0);
	jint temp4 = (jint)SM_arc_graphics_PixmapIO$PngReader_paeth_int_int_int_R_int(ctx, (((jint)ARRAY_ACCESS(jbyte, (frame[7].o), ((frame[8].i) - (frame[2].i)))) & (255)), (((jint)ARRAY_ACCESS(jbyte, (frame[6].o), (frame[8].i))) & (255)), (((jint)ARRAY_ACCESS(jbyte, (frame[6].o), ((frame[8].i) - (frame[2].i)))) & (255)));
	ARRAY_ACCESS(jbyte, sp[0].o, temp0) = (jbyte((temp3 + temp4)));
	LINE_NUMBER(318);
	INST_IINC(8, 1);
	goto label_37;
	}
label_19:;
	{
	LINE_NUMBER(325);
	if ((frame[2].i) != (jint(3))) goto label_42;
	}
	{
	LINE_NUMBER(327);
	sp[0].o = (jobject)SM_java_nio_ByteBuffer_wrap_Array1_byte_R_java_nio_ByteBuffer(ctx, (frame[7].o));
	frame[11].o = sp[0].o;
	LINE_NUMBER(328);
	frame[8].i = (jint(1));
	}
label_45:;
	{
	if ((frame[8].i) >= (frame[4].i)) goto label_46;
	}
	{
	LINE_NUMBER(329);
	sp[0].o = frame[1].o;
	jint temp0 = (jint)((func_java_nio_ByteBuffer_getInt_int_R_int) ((void **) nullCheck(ctx, (frame[11].o))->vtable)[VTABLE_java_nio_ByteBuffer_getInt_int_R_int])(ctx, (frame[11].o), (frame[8].i));
	sp[0].o = (jobject)((func_java_nio_ByteBuffer_putInt_int_R_java_nio_ByteBuffer) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_nio_ByteBuffer_putInt_int_R_java_nio_ByteBuffer])(ctx, sp[0].o, ((temp0 & (-256)) + (255)));
	LINE_NUMBER(328);
	frame[8].i = ((frame[8].i) + (frame[2].i));
	goto label_45;
	}
label_46:;
	LINE_NUMBER(331);
	goto label_49;
label_42:;
	{
	if ((frame[2].i) != (jint(1))) goto label_50;
	}
	{
	LINE_NUMBER(333);
	if (((jint)((arc_graphics_PixmapIO$PngReader *) NULL_CHECK((frame[0].o)))->F_bitDepth) != (jint(4))) goto label_52;
	}
	{
	LINE_NUMBER(334);
	frame[8].i = (jint(1));
	}
label_54:;
	{
	if ((frame[8].i) >= (frame[4].i)) goto label_49;
	}
	{
	LINE_NUMBER(335);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((arc_graphics_PixmapIO$PngReader *) NULL_CHECK((frame[0].o)))->F_palette;
	jint temp0 = (jint)SM_arc_util_Pack_leftByte_byte_R_byte(ctx, ((jint)ARRAY_ACCESS(jbyte, (frame[7].o), (frame[8].i))));
	sp[0].o = (jobject)((func_java_nio_ByteBuffer_putInt_int_R_java_nio_ByteBuffer) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_nio_ByteBuffer_putInt_int_R_java_nio_ByteBuffer])(ctx, sp[0].o, ((jint)ARRAY_ACCESS(jint, sp[1].o, temp0)));
	LINE_NUMBER(336);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((arc_graphics_PixmapIO$PngReader *) NULL_CHECK((frame[0].o)))->F_palette;
	jint temp1 = (jint)SM_arc_util_Pack_rightByte_byte_R_byte(ctx, ((jint)ARRAY_ACCESS(jbyte, (frame[7].o), (frame[8].i))));
	sp[0].o = (jobject)((func_java_nio_ByteBuffer_putInt_int_R_java_nio_ByteBuffer) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_nio_ByteBuffer_putInt_int_R_java_nio_ByteBuffer])(ctx, sp[0].o, ((jint)ARRAY_ACCESS(jint, sp[1].o, temp1)));
	LINE_NUMBER(334);
	frame[8].i = ((frame[8].i) + (frame[2].i));
	goto label_54;
	}
label_52:;
	{
	LINE_NUMBER(339);
	frame[8].i = (jint(1));
	}
label_58:;
	{
	if ((frame[8].i) >= (frame[4].i)) goto label_49;
	}
	{
	LINE_NUMBER(340);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((arc_graphics_PixmapIO$PngReader *) NULL_CHECK((frame[0].o)))->F_palette;
	sp[0].o = (jobject)((func_java_nio_ByteBuffer_putInt_int_R_java_nio_ByteBuffer) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_nio_ByteBuffer_putInt_int_R_java_nio_ByteBuffer])(ctx, sp[0].o, ((jint)ARRAY_ACCESS(jint, sp[1].o, (((jint)ARRAY_ACCESS(jbyte, (frame[7].o), (frame[8].i))) & (255)))));
	LINE_NUMBER(339);
	frame[8].i = ((frame[8].i) + (frame[2].i));
	goto label_58;
	}
label_50:;
	{
	LINE_NUMBER(344);
	sp[0].o = (jobject)((func_java_nio_ByteBuffer_put_Array1_byte_int_int_R_java_nio_ByteBuffer) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_nio_ByteBuffer_put_Array1_byte_int_int_R_java_nio_ByteBuffer])(ctx, (frame[1].o), (frame[7].o), (jint(1)), ((frame[4].i) - (jint(1))));
	}
label_49:;
	{
	LINE_NUMBER(346);
	frame[11].o = (frame[6].o);
	LINE_NUMBER(347);
	frame[6].o = (frame[7].o);
	LINE_NUMBER(348);
	frame[7].o = (frame[11].o);
	LINE_NUMBER(292);
	frame[8].i = (jint(1));
	INST_IINC(9, 1);
	goto label_14;
	}
label_15:;
	{
	LINE_NUMBER(350);
	sp[0].o = frame[1].o;
	jint temp0 = (jint)((func_java_nio_ByteBuffer_capacity_R_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_nio_ByteBuffer_capacity_R_int])(ctx, (frame[1].o));
	sp[0].o = (jobject)((func_java_nio_ByteBuffer_position_int_R_java_nio_Buffer) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_nio_ByteBuffer_position_int_R_java_nio_Buffer])(ctx, sp[0].o, temp0);
	LINE_NUMBER(351);
	((arc_graphics_PixmapIO$PngReader *) NULL_CHECK((frame[0].o)))->F_imgData = (jref) (jobject(nullptr));
	LINE_NUMBER(352);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jint SM_arc_graphics_PixmapIO$PngReader_ab_int_R_int(jcontext ctx, jint param0) {
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/PixmapIO$PngReader:ab", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_graphics_PixmapIO$PngReader(ctx);
	frame[0].i = param0;
	{
	LINE_NUMBER(355);
	frame[1].i = ((frame[0].i) >> (8));
	LINE_NUMBER(356);
	popStackFrame(ctx);
	return (((frame[0].i) ^ (frame[1].i)) - (frame[1].i));
	}

	popStackFrame(ctx);
}

jint SM_arc_graphics_PixmapIO$PngReader_paeth_int_int_int_R_int(jcontext ctx, jint param0, jint param1, jint param2) {
	jtype frame[8];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/PixmapIO$PngReader:paeth", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_graphics_PixmapIO$PngReader(ctx);
	frame[0].i = param0;
	frame[1].i = param1;
	frame[2].i = param2;
	{
	LINE_NUMBER(360);
	frame[3].i = ((frame[1].i) - (frame[2].i));
	frame[4].i = ((frame[0].i) - (frame[2].i));
	jint temp0 = (jint)SM_arc_graphics_PixmapIO$PngReader_ab_int_R_int(ctx, ((frame[3].i) + (frame[4].i)));
	frame[5].i = temp0;
	LINE_NUMBER(361);
	jint temp1 = (jint)SM_arc_graphics_PixmapIO$PngReader_ab_int_R_int(ctx, (frame[3].i));
	frame[3].i = temp1;
	LINE_NUMBER(362);
	jint temp2 = (jint)SM_arc_graphics_PixmapIO$PngReader_ab_int_R_int(ctx, (frame[4].i));
	frame[4].i = temp2;
	LINE_NUMBER(363);
	if ((frame[3].i) > (frame[4].i)) goto label_6;
	}
	{
	if ((frame[3].i) > (frame[5].i)) goto label_6;
	}
	INST_ILOAD(0);
	goto label_7;
label_6:;
	{
	if ((frame[4].i) > (frame[5].i)) goto label_8;
	}
	INST_ILOAD(1);
	goto label_7;
label_8:;
	INST_ILOAD(2);
label_7:;
	popStackFrame(ctx);
	INST_IRETURN();

	popStackFrame(ctx);
}

void *vtable_arc_graphics_PixmapIO$PngReader[] {
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
	(void *) M_arc_graphics_PixmapIO$PngReader_read_java_io_InputStream_R_java_nio_ByteBuffer,
	(void *) M_arc_graphics_PixmapIO$PngReader_readChunks_java_io_DataInputStream,
	(void *) M_arc_graphics_PixmapIO$PngReader_getImage_java_nio_ByteBuffer,
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
	{ "read", "(Ljava/io/InputStream;)Ljava/nio/ByteBuffer;" },
	{ "readChunks", "(Ljava/io/DataInputStream;)V" },
	{ "getImage", "(Ljava/nio/ByteBuffer;)V" },
};

static FieldMetadata fields[] {
	{ "ctypeRgba", &class_int, (intptr_t) &SF_arc_graphics_PixmapIO$PngReader_ctypeRgba, "I", 26 },
	{ "ctypePalette", &class_int, (intptr_t) &SF_arc_graphics_PixmapIO$PngReader_ctypePalette, "I", 26 },
	{ "ctypeRgb", &class_int, (intptr_t) &SF_arc_graphics_PixmapIO$PngReader_ctypeRgb, "I", 26 },
	{ "width", &class_int, offsetof(arc_graphics_PixmapIO$PngReader, F_width), "I", 1 },
	{ "height", &class_int, offsetof(arc_graphics_PixmapIO$PngReader, F_height), "I", 1 },
	{ "bitDepth", &class_byte, offsetof(arc_graphics_PixmapIO$PngReader, F_bitDepth), "B", 1 },
	{ "colorType", &class_byte, offsetof(arc_graphics_PixmapIO$PngReader, F_colorType), "B", 1 },
	{ "compression", &class_byte, offsetof(arc_graphics_PixmapIO$PngReader, F_compression), "B", 1 },
	{ "filter", &class_byte, offsetof(arc_graphics_PixmapIO$PngReader, F_filter), "B", 1 },
	{ "interlace", &class_byte, offsetof(arc_graphics_PixmapIO$PngReader, F_interlace), "B", 1 },
	{ "dataLen", &class_int, offsetof(arc_graphics_PixmapIO$PngReader, F_dataLen), "I", 2 },
	{ "cs", &class_int, offsetof(arc_graphics_PixmapIO$PngReader, F_cs), "I", 2 },
	{ "imgData", getArrayClass(&class_byte, 1), offsetof(arc_graphics_PixmapIO$PngReader, F_imgData), "[B", 2 },
	{ "buf", &class_java_nio_ByteBuffer, offsetof(arc_graphics_PixmapIO$PngReader, F_buf), "Ljava/nio/ByteBuffer;", 2 },
	{ "palette", getArrayClass(&class_int, 1), offsetof(arc_graphics_PixmapIO$PngReader, F_palette), "[I", 2 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_arc_graphics_PixmapIO$PngReader, 0, "()V", 1 },
	{ "read", (intptr_t) M_arc_graphics_PixmapIO$PngReader_read_java_io_InputStream_R_java_nio_ByteBuffer, VTABLE_arc_graphics_PixmapIO$PngReader_read_java_io_InputStream_R_java_nio_ByteBuffer, "(Ljava/io/InputStream;)Ljava/nio/ByteBuffer;", 1 },
	{ "readChunks", (intptr_t) M_arc_graphics_PixmapIO$PngReader_readChunks_java_io_DataInputStream, VTABLE_arc_graphics_PixmapIO$PngReader_readChunks_java_io_DataInputStream, "(Ljava/io/DataInputStream;)V", 2 },
	{ "getImage", (intptr_t) M_arc_graphics_PixmapIO$PngReader_getImage_java_nio_ByteBuffer, VTABLE_arc_graphics_PixmapIO$PngReader_getImage_java_nio_ByteBuffer, "(Ljava/nio/ByteBuffer;)V", 2 },
	{ "ab", (intptr_t) SM_arc_graphics_PixmapIO$PngReader_ab_int_R_int, 0, "(I)I", 10 },
	{ "paeth", (intptr_t) SM_arc_graphics_PixmapIO$PngReader_paeth_int_int_int_R_int, 0, "(III)I", 10 },
};

Class class_arc_graphics_PixmapIO$PngReader{
		.nativeName = (intptr_t) "arc/graphics/PixmapIO$PngReader",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(arc_graphics_PixmapIO$PngReader),
		.classVtable = (intptr_t) vtable_arc_graphics_PixmapIO$PngReader,
		.staticInitializer = (intptr_t) clinit_arc_graphics_PixmapIO$PngReader,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_arc_graphics_PixmapIO$PngReader,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) &class_arc_graphics_PixmapIO,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 33,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 15,
		.nativeFields = (intptr_t) fields,
		.methodCount = 6,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 14,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_arc_graphics_PixmapIO$PngReader = registerClass(&class_arc_graphics_PixmapIO$PngReader);

}

