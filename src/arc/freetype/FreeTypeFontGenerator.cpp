#include "arc/freetype/FreeTypeFontGenerator.h"
#include "arc/freetype/FreeType_GlyphMetrics.h"
#include "java/lang/StringBuilder.h"
#include "arc/func/Prov.h"
#include "arc/graphics/g2d/Font.h"
#include "arc/freetype/FreeTypeFontGenerator.h"
#include "arc/math/geom/Rect.h"
#include "arc/files/Fi.h"
#include "arc/graphics/Color.h"
#include "arc/freetype/FreeType.h"
#include "arc/graphics/g2d/PixmapPacker_GuillotineStrategy.h"
#include "arc/graphics/g2d/Font_Glyph.h"
#include "java/nio/ByteBuffer.h"
#include "java/io/InputStream.h"
#include "arc/freetype/FreeType_Size.h"
#include "arc/graphics/Pixmap.h"
#include "java/lang/String.h"
#include "arc/freetype/FreeType_Face.h"
#include "arc/freetype/FreeTypeFontGenerator_GlyphAndBitmap.h"
#include "java/nio/Buffer.h"
#include "arc/freetype/FreeType_Bitmap.h"
#include "arc/freetype/FreeType_SizeMetrics.h"
#include "arc/freetype/FreeType_Stroker.h"
#include "arc/struct/Seq.h"
#include "java/io/IOException.h"
#include "java/io/Closeable.h"
#include "java/lang/Throwable.h"
#include "arc/freetype/FreeTypeFontGenerator_Hinting.h"
#include "java/lang/Math.h"
#include "arc/math/Mathf.h"
#include "arc/util/Disposable.h"
#include "java/util/Iterator.h"
#include "arc/graphics/g2d/Font_FontData.h"
#include "arc/util/Log.h"
#include "arc/freetype/FreeType_Library.h"
#include "arc/util/Buffers.h"
#include "java/lang/Enum.h"
#include "arc/graphics/g2d/PixmapPacker_PackStrategy.h"
#include "arc/freetype/FreeTypeFontGenerator_FreeTypeFontParameter.h"
#include "arc/graphics/g2d/PixmapPacker_SkylineStrategy.h"
#include "java/lang/Object.h"
#include "arc/freetype/FreeType_Glyph.h"
#include "arc/util/ArcRuntimeException.h"
#include "arc/freetype/FreeTypeFontGenerator_FreeTypeFontData.h"
#include "arc/graphics/Texture_TextureFilter.h"
#include "arc/util/io/Streams.h"
#include "arc/graphics/g2d/PixmapPacker.h"
#include "arc/freetype/FreeType_GlyphSlot.h"

extern "C" {

jobject SF_arc_freetype_FreeTypeFontGenerator_DEFAULT_CHARS;
jint SF_arc_freetype_FreeTypeFontGenerator_NO_MAXIMUM;
jint SF_arc_freetype_FreeTypeFontGenerator_maxTextureSize;

void mark_arc_freetype_FreeTypeFontGenerator(jobject object, jint mark, jint depth) {
	if (!object) {
		if (SF_arc_freetype_FreeTypeFontGenerator_DEFAULT_CHARS)
			((gc_mark_ptr) ((jclass) ((jobject) SF_arc_freetype_FreeTypeFontGenerator_DEFAULT_CHARS)->clazz)->markFunction)((jobject) SF_arc_freetype_FreeTypeFontGenerator_DEFAULT_CHARS, mark, depth + 1);
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
	auto self = (arc_freetype_FreeTypeFontGenerator *) object;
	if (self->F_library)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_library)->clazz)->markFunction)((jobject) self->F_library, mark, depth + 1);
	if (self->F_face)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_face)->clazz)->markFunction)((jobject) self->F_face, mark, depth + 1);
	if (self->F_name)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_name)->clazz)->markFunction)((jobject) self->F_name, mark, depth + 1);
}

void init_arc_freetype_FreeTypeFontGenerator_arc_files_Fi(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/freetype/FreeTypeFontGenerator:<init>", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_freetype_FreeTypeFontGenerator(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(62);
	init_arc_freetype_FreeTypeFontGenerator_arc_files_Fi_int(ctx, (frame[0].o), (frame[1].o), (jint(0)));
	LINE_NUMBER(63);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_arc_freetype_FreeTypeFontGenerator_arc_files_Fi_int(jcontext ctx, jobject self, jobject param0, jint param1) {
	NULL_CHECK(self);
	jtype frame[12];
	auto stack = &frame[8];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/freetype/FreeTypeFontGenerator:<init>", 12 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);
	volatile bool bypasses[1]{};

	clinit_arc_freetype_FreeTypeFontGenerator(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(70);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(58);
	((arc_freetype_FreeTypeFontGenerator *) NULL_CHECK((frame[0].o)))->F_bitmapped = (jint(0));
	LINE_NUMBER(71);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((func_arc_files_Fi_pathWithoutExtension_R_java_lang_String) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_files_Fi_pathWithoutExtension_R_java_lang_String])(ctx, (frame[1].o));
	((arc_freetype_FreeTypeFontGenerator *) NULL_CHECK(sp[0].o))->F_name = (jref) sp[1].o;
	LINE_NUMBER(72);
	jlong temp0 = (jlong)((func_arc_files_Fi_length_R_long) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_files_Fi_length_R_long])(ctx, (frame[1].o));
	frame[3].i = (jint(temp0));
	LINE_NUMBER(74);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)SM_arc_freetype_FreeType_initFreeType_R_arc_freetype_FreeType$Library(ctx);
	((arc_freetype_FreeTypeFontGenerator *) NULL_CHECK(sp[0].o))->F_library = (jref) sp[1].o;
	LINE_NUMBER(76);
	frame[4].o = (jobject(nullptr));
	}
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_arc_util_ArcRuntimeException))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(79);
	sp[0].o = (jobject)((func_arc_files_Fi_map_R_java_nio_ByteBuffer) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_files_Fi_map_R_java_nio_ByteBuffer])(ctx, (frame[1].o));
	frame[4].o = sp[0].o;
	}
	popExceptionFrame(frameRef);
	LINE_NUMBER(82);
	goto label_18;
label_2:;
	LINE_NUMBER(80);
	INST_ASTORE(5);
label_18:;
	{
	LINE_NUMBER(84);
	if ((frame[4].o) != nullptr) goto label_19;
	}
	{
	LINE_NUMBER(85);
	sp[0].o = (jobject)((func_arc_files_Fi_read_R_java_io_InputStream) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_files_Fi_read_R_java_io_InputStream])(ctx, (frame[1].o));
	frame[5].o = sp[0].o;
	}
label_7: if (setjmp(*pushExceptionFrame(frameRef, &class_java_io_IOException))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_6; }
	}
label_9: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 2); bypasses[0] = true; goto label_11; } // goto label_8
	}
	{
	LINE_NUMBER(87);
	if ((frame[3].i) != 0) goto label_21;
	}
	{
	LINE_NUMBER(89);
	sp[0].o = (jobject)SM_arc_util_io_Streams_copyBytes_java_io_InputStream_int_R_Array1_byte(ctx, (frame[5].o), (16384));
	frame[6].o = sp[0].o;
	LINE_NUMBER(90);
	sp[0].o = (jobject)SM_arc_util_Buffers_newUnsafeByteBuffer_int_R_java_nio_ByteBuffer(ctx, (((jarray) nullCheck(ctx, (frame[6].o)))->length));
	frame[4].o = sp[0].o;
	LINE_NUMBER(91);
	SM_arc_util_Buffers_copy_Array1_byte_int_java_nio_Buffer_int(ctx, (frame[6].o), (jint(0)), (frame[4].o), (((jarray) nullCheck(ctx, (frame[6].o)))->length));
	LINE_NUMBER(92);
	goto label_5;
	}
label_21:;
	{
	LINE_NUMBER(94);
	sp[0].o = (jobject)SM_arc_util_Buffers_newUnsafeByteBuffer_int_R_java_nio_ByteBuffer(ctx, (frame[3].i));
	frame[4].o = sp[0].o;
	LINE_NUMBER(95);
	SM_arc_util_io_Streams_copy_java_io_InputStream_java_nio_ByteBuffer(ctx, (frame[5].o), (frame[4].o));
	}
label_5:;
	popExceptionFrame(frameRef);
	popExceptionFrame(frameRef);
	{
	LINE_NUMBER(100);
	SM_arc_util_io_Streams_close_java_io_Closeable(ctx, (frame[5].o));
	LINE_NUMBER(101);
	goto label_19;
	}
label_6:;
label_11: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); goto label_8;
	}
	if (bypasses[0]) { bypasses[0] = false; goto label_8; }
	{
	sp -= 1;
	LINE_NUMBER(97);
	frame[6].o = sp[0].o;
	LINE_NUMBER(98);
	clinit_arc_util_ArcRuntimeException(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_util_ArcRuntimeException);
	init_arc_util_ArcRuntimeException_java_lang_Throwable(ctx, sp[0].o, (frame[6].o));
	throwException(ctx, sp[0].o);	}
label_8:;
	LINE_NUMBER(100);
	INST_ASTORE(7);
	popExceptionFrame(frameRef);
	{
	SM_arc_util_io_Streams_close_java_io_Closeable(ctx, (frame[5].o));
	LINE_NUMBER(101);
	throwException(ctx, (frame[7].o));	}
label_19:;
	{
	LINE_NUMBER(104);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((arc_freetype_FreeTypeFontGenerator *) NULL_CHECK((frame[0].o)))->F_library;
	sp[1].o = (jobject)((func_arc_freetype_FreeType$Library_newMemoryFace_java_nio_ByteBuffer_int_R_arc_freetype_FreeType$Face) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_freetype_FreeType$Library_newMemoryFace_java_nio_ByteBuffer_int_R_arc_freetype_FreeType$Face])(ctx, sp[1].o, (frame[4].o), (frame[2].i));
	((arc_freetype_FreeTypeFontGenerator *) NULL_CHECK(sp[0].o))->F_face = (jref) sp[1].o;
	LINE_NUMBER(105);
	sp[0].o = (jobject)((arc_freetype_FreeTypeFontGenerator *) NULL_CHECK((frame[0].o)))->F_face;
	if (sp[0].o != nullptr) goto label_31;
	}
	{
	clinit_arc_util_ArcRuntimeException(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_util_ArcRuntimeException);
	clinit_java_lang_StringBuilder(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[1].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"Couldn't create face for font: "_j))));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_Object_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_Object_R_java_lang_StringBuilder])(ctx, sp[1].o, (frame[1].o));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[1].o);
	init_arc_util_ArcRuntimeException_java_lang_String(ctx, sp[0].o, sp[1].o);
	throwException(ctx, sp[0].o);	}
label_31:;
	{
	LINE_NUMBER(107);
	jint temp0 = (jint)M_arc_freetype_FreeTypeFontGenerator_checkForBitmapFont_R_boolean(ctx, (frame[0].o));
	if (temp0 == 0) goto label_32;
	}
	popStackFrame(ctx);
	INST_RETURN();
label_32:;
	{
	LINE_NUMBER(108);
	((func_arc_freetype_FreeTypeFontGenerator_setPixelSizes_int_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_freetype_FreeTypeFontGenerator_setPixelSizes_int_int])(ctx, (frame[0].o), (jint(0)), (15));
	LINE_NUMBER(109);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jint SM_arc_freetype_FreeTypeFontGenerator_getMaxTextureSize_R_int(jcontext ctx) {
	jtype frame[1];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/freetype/FreeTypeFontGenerator:getMaxTextureSize", 1 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_freetype_FreeTypeFontGenerator(ctx);
	{
	LINE_NUMBER(116);
	popStackFrame(ctx);
	return (clinit_arc_freetype_FreeTypeFontGenerator(ctx), (jint)SF_arc_freetype_FreeTypeFontGenerator_maxTextureSize);
	}

	popStackFrame(ctx);
}

void SM_arc_freetype_FreeTypeFontGenerator_setMaxTextureSize_int(jcontext ctx, jint param0) {
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/freetype/FreeTypeFontGenerator:setMaxTextureSize", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_freetype_FreeTypeFontGenerator(ctx);
	frame[0].i = param0;
	{
	LINE_NUMBER(133);
	clinit_arc_freetype_FreeTypeFontGenerator(ctx);
	SF_arc_freetype_FreeTypeFontGenerator_maxTextureSize = (frame[0].i);
	LINE_NUMBER(134);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jint M_arc_freetype_FreeTypeFontGenerator_getLoadingFlags_arc_freetype_FreeTypeFontGenerator$FreeTypeFontParameter_R_int(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/freetype/FreeTypeFontGenerator:getLoadingFlags", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(137);
	frame[2].i = (clinit_arc_freetype_FreeType(ctx), (jint)SF_arc_freetype_FreeType_FT_LOAD_DEFAULT);
	LINE_NUMBER(138);
	sp[0].o = (jobject)((arc_freetype_FreeTypeFontGenerator$FreeTypeFontParameter *) NULL_CHECK((frame[1].o)))->F_hinting;
	jint temp0 = (jint)((func_arc_freetype_FreeTypeFontGenerator$Hinting_ordinal_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_freetype_FreeTypeFontGenerator$Hinting_ordinal_R_int])(ctx, sp[0].o);
	switch(temp0) {
		case 0: goto label_2;
		case 1: goto label_3;
		case 2: goto label_4;
		case 3: goto label_5;
		case 4: goto label_6;
		case 5: goto label_7;
		case 6: goto label_8;
		default: goto label_9;
	}
	}
label_2:;
	{
	LINE_NUMBER(140);
	frame[2].i = ((frame[2].i) | (clinit_arc_freetype_FreeType(ctx), (jint)SF_arc_freetype_FreeType_FT_LOAD_NO_HINTING));
	LINE_NUMBER(141);
	goto label_9;
	}
label_3:;
	{
	LINE_NUMBER(143);
	frame[2].i = ((frame[2].i) | (clinit_arc_freetype_FreeType(ctx), (jint)SF_arc_freetype_FreeType_FT_LOAD_TARGET_LIGHT));
	LINE_NUMBER(144);
	goto label_9;
	}
label_4:;
	{
	LINE_NUMBER(146);
	frame[2].i = ((frame[2].i) | (clinit_arc_freetype_FreeType(ctx), (jint)SF_arc_freetype_FreeType_FT_LOAD_TARGET_NORMAL));
	LINE_NUMBER(147);
	goto label_9;
	}
label_5:;
	{
	LINE_NUMBER(149);
	frame[2].i = ((frame[2].i) | (clinit_arc_freetype_FreeType(ctx), (jint)SF_arc_freetype_FreeType_FT_LOAD_TARGET_MONO));
	LINE_NUMBER(150);
	goto label_9;
	}
label_6:;
	{
	LINE_NUMBER(152);
	frame[2].i = ((frame[2].i) | ((clinit_arc_freetype_FreeType(ctx), (jint)SF_arc_freetype_FreeType_FT_LOAD_FORCE_AUTOHINT) | (clinit_arc_freetype_FreeType(ctx), (jint)SF_arc_freetype_FreeType_FT_LOAD_TARGET_LIGHT)));
	LINE_NUMBER(153);
	goto label_9;
	}
label_7:;
	{
	LINE_NUMBER(155);
	frame[2].i = ((frame[2].i) | ((clinit_arc_freetype_FreeType(ctx), (jint)SF_arc_freetype_FreeType_FT_LOAD_FORCE_AUTOHINT) | (clinit_arc_freetype_FreeType(ctx), (jint)SF_arc_freetype_FreeType_FT_LOAD_TARGET_NORMAL)));
	LINE_NUMBER(156);
	goto label_9;
	}
label_8:;
	{
	LINE_NUMBER(158);
	frame[2].i = ((frame[2].i) | ((clinit_arc_freetype_FreeType(ctx), (jint)SF_arc_freetype_FreeType_FT_LOAD_FORCE_AUTOHINT) | (clinit_arc_freetype_FreeType(ctx), (jint)SF_arc_freetype_FreeType_FT_LOAD_TARGET_MONO)));
	}
label_9:;
	{
	LINE_NUMBER(161);
	popStackFrame(ctx);
	return (frame[2].i);
	}

	popStackFrame(ctx);
}

jbool M_arc_freetype_FreeTypeFontGenerator_loadChar_int_R_boolean(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/freetype/FreeTypeFontGenerator:loadChar", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(165);
	jint temp0 = (jint)M_arc_freetype_FreeTypeFontGenerator_loadChar_int_int_R_boolean(ctx, (frame[0].o), (frame[1].i), ((clinit_arc_freetype_FreeType(ctx), (jint)SF_arc_freetype_FreeType_FT_LOAD_DEFAULT) | (clinit_arc_freetype_FreeType(ctx), (jint)SF_arc_freetype_FreeType_FT_LOAD_FORCE_AUTOHINT)));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jbool M_arc_freetype_FreeTypeFontGenerator_loadChar_int_int_R_boolean(jcontext ctx, jobject self, jint param0, jint param1) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/freetype/FreeTypeFontGenerator:loadChar", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(169);
	sp[0].o = (jobject)((arc_freetype_FreeTypeFontGenerator *) NULL_CHECK((frame[0].o)))->F_face;
	jint temp0 = (jint)((func_arc_freetype_FreeType$Face_loadChar_int_int_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_freetype_FreeType$Face_loadChar_int_int_R_boolean])(ctx, sp[0].o, (frame[1].i), (frame[2].i));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jbool M_arc_freetype_FreeTypeFontGenerator_checkForBitmapFont_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/freetype/FreeTypeFontGenerator:checkForBitmapFont", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(173);
	sp[0].o = (jobject)((arc_freetype_FreeTypeFontGenerator *) NULL_CHECK((frame[0].o)))->F_face;
	jint temp0 = (jint)((func_arc_freetype_FreeType$Face_getFaceFlags_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_freetype_FreeType$Face_getFaceFlags_R_int])(ctx, sp[0].o);
	frame[1].i = temp0;
	LINE_NUMBER(174);
	if (((frame[1].i) & (clinit_arc_freetype_FreeType(ctx), (jint)SF_arc_freetype_FreeType_FT_FACE_FLAG_FIXED_SIZES)) != (clinit_arc_freetype_FreeType(ctx), (jint)SF_arc_freetype_FreeType_FT_FACE_FLAG_FIXED_SIZES)) goto label_2;
	}
	{
	if (((frame[1].i) & (clinit_arc_freetype_FreeType(ctx), (jint)SF_arc_freetype_FreeType_FT_FACE_FLAG_HORIZONTAL)) != (clinit_arc_freetype_FreeType(ctx), (jint)SF_arc_freetype_FreeType_FT_FACE_FLAG_HORIZONTAL)) goto label_2;
	}
	{
	LINE_NUMBER(176);
	jint temp0 = (jint)M_arc_freetype_FreeTypeFontGenerator_loadChar_int_R_boolean(ctx, (frame[0].o), (32));
	if (temp0 == 0) goto label_2;
	}
	{
	LINE_NUMBER(177);
	sp[0].o = (jobject)((arc_freetype_FreeTypeFontGenerator *) NULL_CHECK((frame[0].o)))->F_face;
	sp[0].o = (jobject)((func_arc_freetype_FreeType$Face_getGlyph_R_arc_freetype_FreeType$GlyphSlot) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_freetype_FreeType$Face_getGlyph_R_arc_freetype_FreeType$GlyphSlot])(ctx, sp[0].o);
	frame[2].o = sp[0].o;
	LINE_NUMBER(178);
	jint temp0 = (jint)((func_arc_freetype_FreeType$GlyphSlot_getFormat_R_int) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_arc_freetype_FreeType$GlyphSlot_getFormat_R_int])(ctx, (frame[2].o));
	if (temp0 != (jint(1651078259))) goto label_2;
	}
	{
	LINE_NUMBER(179);
	((arc_freetype_FreeTypeFontGenerator *) NULL_CHECK((frame[0].o)))->F_bitmapped = (jint(1));
	}
label_2:;
	{
	LINE_NUMBER(183);
	popStackFrame(ctx);
	return ((jint)((arc_freetype_FreeTypeFontGenerator *) NULL_CHECK((frame[0].o)))->F_bitmapped);
	}

	popStackFrame(ctx);
}

jobject M_arc_freetype_FreeTypeFontGenerator_generateFont_arc_freetype_FreeTypeFontGenerator$FreeTypeFontParameter_R_arc_graphics_g2d_Font(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/freetype/FreeTypeFontGenerator:generateFont", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(187);
	sp[0].o = frame[0].o;
	sp[1].o = frame[1].o;
	clinit_arc_freetype_FreeTypeFontGenerator$FreeTypeFontData(ctx);
	sp[2].o = gcAlloc(ctx, &class_arc_freetype_FreeTypeFontGenerator$FreeTypeFontData);
	init_arc_freetype_FreeTypeFontGenerator$FreeTypeFontData(ctx, sp[2].o);
	sp[0].o = (jobject)((func_arc_freetype_FreeTypeFontGenerator_generateFont_arc_freetype_FreeTypeFontGenerator$FreeTypeFontParameter_arc_freetype_FreeTypeFontGenerator$FreeTypeFontData_R_arc_graphics_g2d_Font) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_freetype_FreeTypeFontGenerator_generateFont_arc_freetype_FreeTypeFontGenerator$FreeTypeFontParameter_arc_freetype_FreeTypeFontGenerator$FreeTypeFontData_R_arc_graphics_g2d_Font])(ctx, sp[0].o, sp[1].o, sp[2].o);
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_arc_freetype_FreeTypeFontGenerator_generateFont_arc_freetype_FreeTypeFontGenerator$FreeTypeFontParameter_arc_freetype_FreeTypeFontGenerator$FreeTypeFontData_R_arc_graphics_g2d_Font(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[13];
	auto stack = &frame[8];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/freetype/FreeTypeFontGenerator:generateFont", 13 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(196);
	sp[0].o = (jobject)((arc_freetype_FreeTypeFontGenerator$FreeTypeFontData *) NULL_CHECK((frame[2].o)))->F_regions;
	if (sp[0].o != nullptr) goto label_1;
	}
	{
	sp[0].o = (jobject)((arc_freetype_FreeTypeFontGenerator$FreeTypeFontParameter *) NULL_CHECK((frame[1].o)))->F_packer;
	if (sp[0].o == nullptr) goto label_1;
	}
	INST_ICONST(1);
	goto label_2;
label_1:;
	INST_ICONST(0);
label_2:;
	{
	sp -= 1;
	frame[3].i = sp[0].i;
	LINE_NUMBER(197);
	if ((frame[3].i) == 0) goto label_4;
	}
	{
	sp[0].o = frame[2].o;
	clinit_arc_struct_Seq(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_struct_Seq);
	init_arc_struct_Seq(ctx, sp[1].o);
	((arc_freetype_FreeTypeFontGenerator$FreeTypeFontData *) NULL_CHECK(sp[0].o))->F_regions = (jref) sp[1].o;
	}
label_4:;
	{
	LINE_NUMBER(198);
	sp[0].o = (jobject)((func_arc_freetype_FreeTypeFontGenerator_generateData_arc_freetype_FreeTypeFontGenerator$FreeTypeFontParameter_arc_freetype_FreeTypeFontGenerator$FreeTypeFontData_R_arc_freetype_FreeTypeFontGenerator$FreeTypeFontData) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_freetype_FreeTypeFontGenerator_generateData_arc_freetype_FreeTypeFontGenerator$FreeTypeFontParameter_arc_freetype_FreeTypeFontGenerator$FreeTypeFontData_R_arc_freetype_FreeTypeFontGenerator$FreeTypeFontData])(ctx, (frame[0].o), (frame[1].o), (frame[2].o));
	LINE_NUMBER(199);
	if ((frame[3].i) == 0) goto label_6;
	}
	{
	LINE_NUMBER(200);
	sp[0].o = (jobject)((arc_freetype_FreeTypeFontGenerator$FreeTypeFontParameter *) NULL_CHECK((frame[1].o)))->F_packer;
	sp[1].o = (jobject)((arc_freetype_FreeTypeFontGenerator$FreeTypeFontData *) NULL_CHECK((frame[2].o)))->F_regions;
	sp[2].o = (jobject)((arc_freetype_FreeTypeFontGenerator$FreeTypeFontParameter *) NULL_CHECK((frame[1].o)))->F_minFilter;
	sp[3].o = (jobject)((arc_freetype_FreeTypeFontGenerator$FreeTypeFontParameter *) NULL_CHECK((frame[1].o)))->F_magFilter;
	((func_arc_graphics_g2d_PixmapPacker_updateTextureRegions_arc_struct_Seq_arc_graphics_Texture$TextureFilter_arc_graphics_Texture$TextureFilter_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_g2d_PixmapPacker_updateTextureRegions_arc_struct_Seq_arc_graphics_Texture$TextureFilter_arc_graphics_Texture$TextureFilter_boolean])(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o, ((jint)((arc_freetype_FreeTypeFontGenerator$FreeTypeFontParameter *) NULL_CHECK((frame[1].o)))->F_genMipMaps));
	}
label_6:;
	{
	LINE_NUMBER(201);
	sp[0].o = (jobject)((arc_freetype_FreeTypeFontGenerator$FreeTypeFontData *) NULL_CHECK((frame[2].o)))->F_regions;
	jint temp0 = (jint)((func_arc_struct_Seq_isEmpty_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_isEmpty_R_boolean])(ctx, sp[0].o);
	if (temp0 == 0) goto label_8;
	}
	{
	clinit_arc_util_ArcRuntimeException(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_util_ArcRuntimeException);
	init_arc_util_ArcRuntimeException_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"Unable to create a font with no texture regions."_j))));
	throwException(ctx, sp[0].o);	}
label_8:;
	{
	LINE_NUMBER(202);
	clinit_arc_graphics_g2d_Font(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_graphics_g2d_Font);
	sp[1].o = frame[2].o;
	sp[2].o = (jobject)((arc_freetype_FreeTypeFontGenerator$FreeTypeFontData *) NULL_CHECK((frame[2].o)))->F_regions;
	init_arc_graphics_g2d_Font_arc_graphics_g2d_Font$FontData_arc_struct_Seq_boolean(ctx, sp[0].o, sp[1].o, sp[2].o, (jint(1)));
	frame[4].o = sp[0].o;
	LINE_NUMBER(203);
	sp[0].o = frame[4].o;
	sp[1].o = (jobject)((arc_freetype_FreeTypeFontGenerator$FreeTypeFontParameter *) NULL_CHECK((frame[1].o)))->F_packer;
	sp += 1;
	if (sp[0].o != nullptr) goto label_10;
	}
	INST_ICONST(1);
	goto label_11;
label_10:;
	INST_ICONST(0);
label_11:;
	{
	sp -= 2;
	((func_arc_graphics_g2d_Font_setOwnsTexture_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_g2d_Font_setOwnsTexture_boolean])(ctx, sp[0].o, sp[1].i);
	LINE_NUMBER(205);
	sp[0].o = (jobject)((arc_freetype_FreeTypeFontGenerator$FreeTypeFontParameter *) NULL_CHECK((frame[1].o)))->F_fallback;
	sp[0].o = (jobject)((func_arc_struct_Seq_iterator_R_java_util_Iterator) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_iterator_R_java_util_Iterator])(ctx, sp[0].o);
	frame[5].o = sp[0].o;
	}
label_13:;
	{
	jint temp0 = (jint)((func_java_util_Iterator_hasNext_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_hasNext_R_boolean, (frame[5].o)))(ctx, (frame[5].o));
	if (temp0 == 0) goto label_14;
	}
	{
	sp[0].o = (jobject)((func_java_util_Iterator_next_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_next_R_java_lang_Object, (frame[5].o)))(ctx, (frame[5].o));
	frame[6].o = (checkCast(ctx, &class_arc_func_Prov, sp[0].o));
	LINE_NUMBER(206);
	sp[0].o = (jobject)((func_arc_func_Prov_get_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_arc_func_Prov, INDEX_arc_func_Prov_get_R_java_lang_Object, (frame[6].o)))(ctx, (frame[6].o));
	frame[7].o = (checkCast(ctx, &class_arc_graphics_g2d_Font, sp[0].o));
	LINE_NUMBER(207);
	if ((frame[7].o) == nullptr) goto label_17;
	}
	{
	((func_arc_graphics_g2d_Font_addFallback_arc_graphics_g2d_Font) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_arc_graphics_g2d_Font_addFallback_arc_graphics_g2d_Font])(ctx, (frame[4].o), (frame[7].o));
	}
label_17:;
	LINE_NUMBER(208);
	goto label_13;
label_14:;
	{
	LINE_NUMBER(209);
	popStackFrame(ctx);
	return (frame[4].o);
	}

	popStackFrame(ctx);
}

jint M_arc_freetype_FreeTypeFontGenerator_scaleForPixelHeight_int_R_int(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/freetype/FreeTypeFontGenerator:scaleForPixelHeight", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(217);
	((func_arc_freetype_FreeTypeFontGenerator_setPixelSizes_int_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_freetype_FreeTypeFontGenerator_setPixelSizes_int_int])(ctx, (frame[0].o), (jint(0)), (frame[1].i));
	LINE_NUMBER(218);
	sp[0].o = (jobject)((arc_freetype_FreeTypeFontGenerator *) NULL_CHECK((frame[0].o)))->F_face;
	sp[0].o = (jobject)((func_arc_freetype_FreeType$Face_getSize_R_arc_freetype_FreeType$Size) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_freetype_FreeType$Face_getSize_R_arc_freetype_FreeType$Size])(ctx, sp[0].o);
	sp[0].o = (jobject)((func_arc_freetype_FreeType$Size_getMetrics_R_arc_freetype_FreeType$SizeMetrics) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_freetype_FreeType$Size_getMetrics_R_arc_freetype_FreeType$SizeMetrics])(ctx, sp[0].o);
	frame[2].o = sp[0].o;
	LINE_NUMBER(219);
	jint temp0 = (jint)((func_arc_freetype_FreeType$SizeMetrics_getAscender_R_int) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_arc_freetype_FreeType$SizeMetrics_getAscender_R_int])(ctx, (frame[2].o));
	jint temp1 = (jint)SM_arc_freetype_FreeType_toInt_int_R_int(ctx, temp0);
	frame[3].i = temp1;
	LINE_NUMBER(220);
	jint temp2 = (jint)((func_arc_freetype_FreeType$SizeMetrics_getDescender_R_int) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_arc_freetype_FreeType$SizeMetrics_getDescender_R_int])(ctx, (frame[2].o));
	jint temp3 = (jint)SM_arc_freetype_FreeType_toInt_int_R_int(ctx, temp2);
	frame[4].i = temp3;
	LINE_NUMBER(221);
	popStackFrame(ctx);
	return (((frame[1].i) * (frame[1].i)) / ((frame[3].i) - (frame[4].i)));
	}

	popStackFrame(ctx);
}

jint M_arc_freetype_FreeTypeFontGenerator_scaleForPixelWidth_int_int_R_int(jcontext ctx, jobject self, jint param0, jint param1) {
	NULL_CHECK(self);
	jtype frame[12];
	auto stack = &frame[9];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/freetype/FreeTypeFontGenerator:scaleForPixelWidth", 12 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(231);
	sp[0].o = (jobject)((arc_freetype_FreeTypeFontGenerator *) NULL_CHECK((frame[0].o)))->F_face;
	sp[0].o = (jobject)((func_arc_freetype_FreeType$Face_getSize_R_arc_freetype_FreeType$Size) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_freetype_FreeType$Face_getSize_R_arc_freetype_FreeType$Size])(ctx, sp[0].o);
	sp[0].o = (jobject)((func_arc_freetype_FreeType$Size_getMetrics_R_arc_freetype_FreeType$SizeMetrics) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_freetype_FreeType$Size_getMetrics_R_arc_freetype_FreeType$SizeMetrics])(ctx, sp[0].o);
	frame[3].o = sp[0].o;
	LINE_NUMBER(232);
	jint temp0 = (jint)((func_arc_freetype_FreeType$SizeMetrics_getMaxAdvance_R_int) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_arc_freetype_FreeType$SizeMetrics_getMaxAdvance_R_int])(ctx, (frame[3].o));
	jint temp1 = (jint)SM_arc_freetype_FreeType_toInt_int_R_int(ctx, temp0);
	frame[4].i = temp1;
	LINE_NUMBER(233);
	jint temp2 = (jint)((func_arc_freetype_FreeType$SizeMetrics_getAscender_R_int) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_arc_freetype_FreeType$SizeMetrics_getAscender_R_int])(ctx, (frame[3].o));
	jint temp3 = (jint)SM_arc_freetype_FreeType_toInt_int_R_int(ctx, temp2);
	frame[5].i = temp3;
	LINE_NUMBER(234);
	jint temp4 = (jint)((func_arc_freetype_FreeType$SizeMetrics_getDescender_R_int) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_arc_freetype_FreeType$SizeMetrics_getDescender_R_int])(ctx, (frame[3].o));
	jint temp5 = (jint)SM_arc_freetype_FreeType_toInt_int_R_int(ctx, temp4);
	frame[6].i = temp5;
	LINE_NUMBER(235);
	frame[7].i = ((frame[5].i) - (frame[6].i));
	LINE_NUMBER(236);
	frame[8].i = (((frame[7].i) * (frame[1].i)) / ((frame[4].i) * (frame[2].i)));
	LINE_NUMBER(237);
	((func_arc_freetype_FreeTypeFontGenerator_setPixelSizes_int_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_freetype_FreeTypeFontGenerator_setPixelSizes_int_int])(ctx, (frame[0].o), (jint(0)), (frame[8].i));
	LINE_NUMBER(238);
	popStackFrame(ctx);
	return (frame[8].i);
	}

	popStackFrame(ctx);
}

jint M_arc_freetype_FreeTypeFontGenerator_scaleToFitSquare_int_int_int_R_int(jcontext ctx, jobject self, jint param0, jint param1, jint param2) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/freetype/FreeTypeFontGenerator:scaleToFitSquare", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].i = param1;
	frame[3].i = param2;
	{
	LINE_NUMBER(249);
	jint temp0 = (jint)((func_arc_freetype_FreeTypeFontGenerator_scaleForPixelHeight_int_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_freetype_FreeTypeFontGenerator_scaleForPixelHeight_int_R_int])(ctx, (frame[0].o), (frame[2].i));
	jint temp1 = (jint)((func_arc_freetype_FreeTypeFontGenerator_scaleForPixelWidth_int_int_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_freetype_FreeTypeFontGenerator_scaleForPixelWidth_int_int_R_int])(ctx, (frame[0].o), (frame[1].i), (frame[3].i));
	jint temp2 = (jint)SM_java_lang_Math_min_int_int_R_int(ctx, temp0, temp1);
	popStackFrame(ctx);
	return temp2;
	}

	popStackFrame(ctx);
}

jobject M_arc_freetype_FreeTypeFontGenerator_generateGlyphAndBitmap_int_int_boolean_R_arc_freetype_FreeTypeFontGenerator$GlyphAndBitmap(jcontext ctx, jobject self, jint param0, jint param1, jbool param2) {
	NULL_CHECK(self);
	jtype frame[14];
	auto stack = &frame[11];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/freetype/FreeTypeFontGenerator:generateGlyphAndBitmap", 14 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].i = param1;
	frame[3].i = param2;
	{
	LINE_NUMBER(257);
	((func_arc_freetype_FreeTypeFontGenerator_setPixelSizes_int_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_freetype_FreeTypeFontGenerator_setPixelSizes_int_int])(ctx, (frame[0].o), (jint(0)), (frame[2].i));
	LINE_NUMBER(259);
	sp[0].o = (jobject)((arc_freetype_FreeTypeFontGenerator *) NULL_CHECK((frame[0].o)))->F_face;
	sp[0].o = (jobject)((func_arc_freetype_FreeType$Face_getSize_R_arc_freetype_FreeType$Size) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_freetype_FreeType$Face_getSize_R_arc_freetype_FreeType$Size])(ctx, sp[0].o);
	sp[0].o = (jobject)((func_arc_freetype_FreeType$Size_getMetrics_R_arc_freetype_FreeType$SizeMetrics) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_freetype_FreeType$Size_getMetrics_R_arc_freetype_FreeType$SizeMetrics])(ctx, sp[0].o);
	frame[4].o = sp[0].o;
	LINE_NUMBER(260);
	jint temp0 = (jint)((func_arc_freetype_FreeType$SizeMetrics_getAscender_R_int) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_arc_freetype_FreeType$SizeMetrics_getAscender_R_int])(ctx, (frame[4].o));
	jint temp1 = (jint)SM_arc_freetype_FreeType_toInt_int_R_int(ctx, temp0);
	frame[5].i = temp1;
	LINE_NUMBER(264);
	sp[0].o = (jobject)((arc_freetype_FreeTypeFontGenerator *) NULL_CHECK((frame[0].o)))->F_face;
	jint temp2 = (jint)((func_arc_freetype_FreeType$Face_getCharIndex_int_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_freetype_FreeType$Face_getCharIndex_int_R_int])(ctx, sp[0].o, (frame[1].i));
	if (temp2 != 0) goto label_4;
	}
	{
	LINE_NUMBER(265);
	popStackFrame(ctx);
	return (jobject(nullptr));
	}
label_4:;
	{
	LINE_NUMBER(269);
	jint temp0 = (jint)M_arc_freetype_FreeTypeFontGenerator_loadChar_int_R_boolean(ctx, (frame[0].o), (frame[1].i));
	if (temp0 != 0) goto label_6;
	}
	{
	LINE_NUMBER(270);
	clinit_arc_util_ArcRuntimeException(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_util_ArcRuntimeException);
	init_arc_util_ArcRuntimeException_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"Unable to load character!"_j))));
	throwException(ctx, sp[0].o);	}
label_6:;
	{
	LINE_NUMBER(273);
	sp[0].o = (jobject)((arc_freetype_FreeTypeFontGenerator *) NULL_CHECK((frame[0].o)))->F_face;
	sp[0].o = (jobject)((func_arc_freetype_FreeType$Face_getGlyph_R_arc_freetype_FreeType$GlyphSlot) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_freetype_FreeType$Face_getGlyph_R_arc_freetype_FreeType$GlyphSlot])(ctx, sp[0].o);
	frame[6].o = sp[0].o;
	LINE_NUMBER(277);
	if (((jint)((arc_freetype_FreeTypeFontGenerator *) NULL_CHECK((frame[0].o)))->F_bitmapped) == 0) goto label_9;
	}
	{
	LINE_NUMBER(278);
	sp[0].o = (jobject)((func_arc_freetype_FreeType$GlyphSlot_getBitmap_R_arc_freetype_FreeType$Bitmap) ((void **) nullCheck(ctx, (frame[6].o))->vtable)[VTABLE_arc_freetype_FreeType$GlyphSlot_getBitmap_R_arc_freetype_FreeType$Bitmap])(ctx, (frame[6].o));
	frame[7].o = sp[0].o;
	goto label_12;
	}
label_9:;
	{
	LINE_NUMBER(279);
	jint temp0 = (jint)((func_arc_freetype_FreeType$GlyphSlot_renderGlyph_int_R_boolean) ((void **) nullCheck(ctx, (frame[6].o))->vtable)[VTABLE_arc_freetype_FreeType$GlyphSlot_renderGlyph_int_R_boolean])(ctx, (frame[6].o), (clinit_arc_freetype_FreeType(ctx), (jint)SF_arc_freetype_FreeType_FT_RENDER_MODE_NORMAL));
	if (temp0 != 0) goto label_13;
	}
	{
	LINE_NUMBER(280);
	frame[7].o = (jobject(nullptr));
	goto label_12;
	}
label_13:;
	{
	LINE_NUMBER(282);
	sp[0].o = (jobject)((func_arc_freetype_FreeType$GlyphSlot_getBitmap_R_arc_freetype_FreeType$Bitmap) ((void **) nullCheck(ctx, (frame[6].o))->vtable)[VTABLE_arc_freetype_FreeType$GlyphSlot_getBitmap_R_arc_freetype_FreeType$Bitmap])(ctx, (frame[6].o));
	frame[7].o = sp[0].o;
	}
label_12:;
	{
	LINE_NUMBER(285);
	sp[0].o = (jobject)((func_arc_freetype_FreeType$GlyphSlot_getMetrics_R_arc_freetype_FreeType$GlyphMetrics) ((void **) nullCheck(ctx, (frame[6].o))->vtable)[VTABLE_arc_freetype_FreeType$GlyphSlot_getMetrics_R_arc_freetype_FreeType$GlyphMetrics])(ctx, (frame[6].o));
	frame[8].o = sp[0].o;
	LINE_NUMBER(287);
	clinit_arc_graphics_g2d_Font$Glyph(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_graphics_g2d_Font$Glyph);
	init_arc_graphics_g2d_Font$Glyph(ctx, sp[0].o);
	frame[9].o = sp[0].o;
	LINE_NUMBER(288);
	if ((frame[7].o) == nullptr) goto label_18;
	}
	{
	LINE_NUMBER(289);
	sp[0].o = frame[9].o;
	jint temp0 = (jint)((func_arc_freetype_FreeType$Bitmap_getWidth_R_int) ((void **) nullCheck(ctx, (frame[7].o))->vtable)[VTABLE_arc_freetype_FreeType$Bitmap_getWidth_R_int])(ctx, (frame[7].o));
	((arc_graphics_g2d_Font$Glyph *) NULL_CHECK(sp[0].o))->F_width = temp0;
	LINE_NUMBER(290);
	sp[0].o = frame[9].o;
	jint temp1 = (jint)((func_arc_freetype_FreeType$Bitmap_getRows_R_int) ((void **) nullCheck(ctx, (frame[7].o))->vtable)[VTABLE_arc_freetype_FreeType$Bitmap_getRows_R_int])(ctx, (frame[7].o));
	((arc_graphics_g2d_Font$Glyph *) NULL_CHECK(sp[0].o))->F_height = temp1;
	goto label_21;
	}
label_18:;
	{
	LINE_NUMBER(292);
	((arc_graphics_g2d_Font$Glyph *) NULL_CHECK((frame[9].o)))->F_width = (jint(0));
	LINE_NUMBER(293);
	((arc_graphics_g2d_Font$Glyph *) NULL_CHECK((frame[9].o)))->F_height = (jint(0));
	}
label_21:;
	{
	LINE_NUMBER(295);
	sp[0].o = frame[9].o;
	jint temp0 = (jint)((func_arc_freetype_FreeType$GlyphSlot_getBitmapLeft_R_int) ((void **) nullCheck(ctx, (frame[6].o))->vtable)[VTABLE_arc_freetype_FreeType$GlyphSlot_getBitmapLeft_R_int])(ctx, (frame[6].o));
	((arc_graphics_g2d_Font$Glyph *) NULL_CHECK(sp[0].o))->F_xoffset = temp0;
	LINE_NUMBER(296);
	sp[0].o = frame[9].o;
	sp += 1;
	if ((frame[3].i) == 0) goto label_24;
	}
	{
	jint temp0 = (jint)((func_arc_freetype_FreeType$GlyphSlot_getBitmapTop_R_int) ((void **) nullCheck(ctx, (frame[6].o))->vtable)[VTABLE_arc_freetype_FreeType$GlyphSlot_getBitmapTop_R_int])(ctx, (frame[6].o));
	jint temp1 = (-temp0) + (frame[5].i);
	sp[0].i = temp1;
	sp += 1;
	goto label_25;
	}
label_24:;
	{
	jint temp0 = (jint)((arc_graphics_g2d_Font$Glyph *) NULL_CHECK((frame[9].o)))->F_height;
	jint temp1 = (jint)((func_arc_freetype_FreeType$GlyphSlot_getBitmapTop_R_int) ((void **) nullCheck(ctx, (frame[6].o))->vtable)[VTABLE_arc_freetype_FreeType$GlyphSlot_getBitmapTop_R_int])(ctx, (frame[6].o));
	jint temp2 = (-(temp0 - temp1)) - (frame[5].i);
	sp[0].i = temp2;
	sp += 1;
	}
label_25:;
	{
	sp -= 2;
	((arc_graphics_g2d_Font$Glyph *) NULL_CHECK(sp[0].o))->F_yoffset = sp[1].i;
	LINE_NUMBER(297);
	sp[0].o = frame[9].o;
	jint temp0 = (jint)((func_arc_freetype_FreeType$GlyphMetrics_getHoriAdvance_R_int) ((void **) nullCheck(ctx, (frame[8].o))->vtable)[VTABLE_arc_freetype_FreeType$GlyphMetrics_getHoriAdvance_R_int])(ctx, (frame[8].o));
	jint temp1 = (jint)SM_arc_freetype_FreeType_toInt_int_R_int(ctx, temp0);
	((arc_graphics_g2d_Font$Glyph *) NULL_CHECK(sp[0].o))->F_xadvance = temp1;
	LINE_NUMBER(298);
	((arc_graphics_g2d_Font$Glyph *) NULL_CHECK((frame[9].o)))->F_srcX = (jint(0));
	LINE_NUMBER(299);
	((arc_graphics_g2d_Font$Glyph *) NULL_CHECK((frame[9].o)))->F_srcY = (jint(0));
	LINE_NUMBER(300);
	((arc_graphics_g2d_Font$Glyph *) NULL_CHECK((frame[9].o)))->F_id = (frame[1].i);
	LINE_NUMBER(302);
	clinit_arc_freetype_FreeTypeFontGenerator$GlyphAndBitmap(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_freetype_FreeTypeFontGenerator$GlyphAndBitmap);
	init_arc_freetype_FreeTypeFontGenerator$GlyphAndBitmap_arc_freetype_FreeTypeFontGenerator(ctx, sp[0].o, (frame[0].o));
	frame[10].o = sp[0].o;
	LINE_NUMBER(303);
	((arc_freetype_FreeTypeFontGenerator$GlyphAndBitmap *) NULL_CHECK((frame[10].o)))->F_glyph = (jref) (frame[9].o);
	LINE_NUMBER(304);
	((arc_freetype_FreeTypeFontGenerator$GlyphAndBitmap *) NULL_CHECK((frame[10].o)))->F_bitmap = (jref) (frame[7].o);
	LINE_NUMBER(305);
	popStackFrame(ctx);
	return (frame[10].o);
	}

	popStackFrame(ctx);
}

jobject M_arc_freetype_FreeTypeFontGenerator_generateData_int_R_arc_freetype_FreeTypeFontGenerator$FreeTypeFontData(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/freetype/FreeTypeFontGenerator:generateData", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(313);
	clinit_arc_freetype_FreeTypeFontGenerator$FreeTypeFontParameter(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_freetype_FreeTypeFontGenerator$FreeTypeFontParameter);
	init_arc_freetype_FreeTypeFontGenerator$FreeTypeFontParameter(ctx, sp[0].o);
	frame[2].o = sp[0].o;
	LINE_NUMBER(314);
	((arc_freetype_FreeTypeFontGenerator$FreeTypeFontParameter *) NULL_CHECK((frame[2].o)))->F_size = (frame[1].i);
	LINE_NUMBER(315);
	sp[0].o = (jobject)((func_arc_freetype_FreeTypeFontGenerator_generateData_arc_freetype_FreeTypeFontGenerator$FreeTypeFontParameter_R_arc_freetype_FreeTypeFontGenerator$FreeTypeFontData) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_freetype_FreeTypeFontGenerator_generateData_arc_freetype_FreeTypeFontGenerator$FreeTypeFontParameter_R_arc_freetype_FreeTypeFontGenerator$FreeTypeFontData])(ctx, (frame[0].o), (frame[2].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_arc_freetype_FreeTypeFontGenerator_generateData_arc_freetype_FreeTypeFontGenerator$FreeTypeFontParameter_R_arc_freetype_FreeTypeFontGenerator$FreeTypeFontData(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/freetype/FreeTypeFontGenerator:generateData", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(319);
	sp[0].o = frame[0].o;
	sp[1].o = frame[1].o;
	clinit_arc_freetype_FreeTypeFontGenerator$FreeTypeFontData(ctx);
	sp[2].o = gcAlloc(ctx, &class_arc_freetype_FreeTypeFontGenerator$FreeTypeFontData);
	init_arc_freetype_FreeTypeFontGenerator$FreeTypeFontData(ctx, sp[2].o);
	sp[0].o = (jobject)((func_arc_freetype_FreeTypeFontGenerator_generateData_arc_freetype_FreeTypeFontGenerator$FreeTypeFontParameter_arc_freetype_FreeTypeFontGenerator$FreeTypeFontData_R_arc_freetype_FreeTypeFontGenerator$FreeTypeFontData) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_freetype_FreeTypeFontGenerator_generateData_arc_freetype_FreeTypeFontGenerator$FreeTypeFontParameter_arc_freetype_FreeTypeFontGenerator$FreeTypeFontData_R_arc_freetype_FreeTypeFontGenerator$FreeTypeFontData])(ctx, sp[0].o, sp[1].o, sp[2].o);
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void M_arc_freetype_FreeTypeFontGenerator_setPixelSizes_int_int(jcontext ctx, jobject self, jint param0, jint param1) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/freetype/FreeTypeFontGenerator:setPixelSizes", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(323);
	if (((jint)((arc_freetype_FreeTypeFontGenerator *) NULL_CHECK((frame[0].o)))->F_bitmapped) != 0) goto label_1;
	}
	{
	sp[0].o = (jobject)((arc_freetype_FreeTypeFontGenerator *) NULL_CHECK((frame[0].o)))->F_face;
	jint temp0 = (jint)((func_arc_freetype_FreeType$Face_setPixelSizes_int_int_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_freetype_FreeType$Face_setPixelSizes_int_int_R_boolean])(ctx, sp[0].o, (frame[1].i), (frame[2].i));
	if (temp0 != 0) goto label_1;
	}
	{
	LINE_NUMBER(324);
	clinit_arc_util_ArcRuntimeException(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_util_ArcRuntimeException);
	init_arc_util_ArcRuntimeException_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"Couldn't set size for font"_j))));
	throwException(ctx, sp[0].o);	}
label_1:;
	LINE_NUMBER(325);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jobject M_arc_freetype_FreeTypeFontGenerator_generateData_arc_freetype_FreeTypeFontGenerator$FreeTypeFontParameter_arc_freetype_FreeTypeFontGenerator$FreeTypeFontData_R_arc_freetype_FreeTypeFontGenerator$FreeTypeFontData(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[30];
	auto stack = &frame[23];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/freetype/FreeTypeFontGenerator:generateData", 30 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(332);
	if ((frame[1].o) != nullptr) goto label_1;
	}
	{
	clinit_arc_freetype_FreeTypeFontGenerator$FreeTypeFontParameter(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_freetype_FreeTypeFontGenerator$FreeTypeFontParameter);
	init_arc_freetype_FreeTypeFontGenerator$FreeTypeFontParameter(ctx, sp[0].o);
	sp += 1;
	goto label_2;
	}
label_1:;
	INST_ALOAD(1);
label_2:;
	{
	sp -= 1;
	frame[1].o = sp[0].o;
	LINE_NUMBER(333);
	sp[0].o = (jobject)((arc_freetype_FreeTypeFontGenerator$FreeTypeFontParameter *) NULL_CHECK((frame[1].o)))->F_characters;
	sp[0].o = (jobject)((func_java_lang_String_toCharArray_R_Array1_char) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_String_toCharArray_R_Array1_char])(ctx, sp[0].o);
	frame[3].o = sp[0].o;
	LINE_NUMBER(334);
	frame[4].i = (((jarray) nullCheck(ctx, (frame[3].o)))->length);
	LINE_NUMBER(335);
	frame[5].i = ((jint)((arc_freetype_FreeTypeFontGenerator$FreeTypeFontParameter *) NULL_CHECK((frame[1].o)))->F_incremental);
	LINE_NUMBER(336);
	jint temp0 = (jint)M_arc_freetype_FreeTypeFontGenerator_getLoadingFlags_arc_freetype_FreeTypeFontGenerator$FreeTypeFontParameter_R_int(ctx, (frame[0].o), (frame[1].o));
	frame[6].i = temp0;
	LINE_NUMBER(338);
	((func_arc_freetype_FreeTypeFontGenerator_setPixelSizes_int_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_freetype_FreeTypeFontGenerator_setPixelSizes_int_int])(ctx, (frame[0].o), (jint(0)), ((jint)((arc_freetype_FreeTypeFontGenerator$FreeTypeFontParameter *) NULL_CHECK((frame[1].o)))->F_size));
	LINE_NUMBER(341);
	sp[0].o = (jobject)((arc_freetype_FreeTypeFontGenerator *) NULL_CHECK((frame[0].o)))->F_face;
	sp[0].o = (jobject)((func_arc_freetype_FreeType$Face_getSize_R_arc_freetype_FreeType$Size) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_freetype_FreeType$Face_getSize_R_arc_freetype_FreeType$Size])(ctx, sp[0].o);
	sp[0].o = (jobject)((func_arc_freetype_FreeType$Size_getMetrics_R_arc_freetype_FreeType$SizeMetrics) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_freetype_FreeType$Size_getMetrics_R_arc_freetype_FreeType$SizeMetrics])(ctx, sp[0].o);
	frame[7].o = sp[0].o;
	LINE_NUMBER(342);
	((arc_graphics_g2d_Font$FontData *) NULL_CHECK((frame[2].o)))->F_flipped = ((jint)((arc_freetype_FreeTypeFontGenerator$FreeTypeFontParameter *) NULL_CHECK((frame[1].o)))->F_flip);
	LINE_NUMBER(343);
	sp[0].o = frame[2].o;
	jint temp1 = (jint)((func_arc_freetype_FreeType$SizeMetrics_getAscender_R_int) ((void **) nullCheck(ctx, (frame[7].o))->vtable)[VTABLE_arc_freetype_FreeType$SizeMetrics_getAscender_R_int])(ctx, (frame[7].o));
	jint temp2 = (jint)SM_arc_freetype_FreeType_toInt_int_R_int(ctx, temp1);
	((arc_graphics_g2d_Font$FontData *) NULL_CHECK(sp[0].o))->F_ascent = (jfloat(temp2));
	LINE_NUMBER(344);
	sp[0].o = frame[2].o;
	jint temp3 = (jint)((func_arc_freetype_FreeType$SizeMetrics_getDescender_R_int) ((void **) nullCheck(ctx, (frame[7].o))->vtable)[VTABLE_arc_freetype_FreeType$SizeMetrics_getDescender_R_int])(ctx, (frame[7].o));
	jint temp4 = (jint)SM_arc_freetype_FreeType_toInt_int_R_int(ctx, temp3);
	((arc_graphics_g2d_Font$FontData *) NULL_CHECK(sp[0].o))->F_descent = (jfloat(temp4));
	LINE_NUMBER(345);
	sp[0].o = frame[2].o;
	jint temp5 = (jint)((func_arc_freetype_FreeType$SizeMetrics_getHeight_R_int) ((void **) nullCheck(ctx, (frame[7].o))->vtable)[VTABLE_arc_freetype_FreeType$SizeMetrics_getHeight_R_int])(ctx, (frame[7].o));
	jint temp6 = (jint)SM_arc_freetype_FreeType_toInt_int_R_int(ctx, temp5);
	((arc_graphics_g2d_Font$FontData *) NULL_CHECK(sp[0].o))->F_lineHeight = (jfloat(temp6));
	LINE_NUMBER(346);
	frame[8].f = ((jfloat)((arc_graphics_g2d_Font$FontData *) NULL_CHECK((frame[2].o)))->F_ascent);
	LINE_NUMBER(349);
	if (((jint)((arc_freetype_FreeTypeFontGenerator *) NULL_CHECK((frame[0].o)))->F_bitmapped) == 0) goto label_15;
	}
	{
	if ((floatCompare(((jfloat)((arc_graphics_g2d_Font$FontData *) NULL_CHECK((frame[2].o)))->F_lineHeight), (jfloat(0)), -1)) != 0) goto label_15;
	}
	{
	LINE_NUMBER(350);
	frame[9].i = (32);
	}
label_17:;
	{
	jint temp0 = frame[9].i;
	jint temp1 = 32;
	sp[0].o = (jobject)((arc_freetype_FreeTypeFontGenerator *) NULL_CHECK((frame[0].o)))->F_face;
	jint temp2 = (jint)((func_arc_freetype_FreeType$Face_getNumGlyphs_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_freetype_FreeType$Face_getNumGlyphs_R_int])(ctx, sp[0].o);
	if (temp0 >= (temp1 + temp2)) goto label_15;
	}
	{
	LINE_NUMBER(351);
	jint temp0 = (jint)M_arc_freetype_FreeTypeFontGenerator_loadChar_int_int_R_boolean(ctx, (frame[0].o), (frame[9].i), (frame[6].i));
	if (temp0 == 0) goto label_19;
	}
	{
	LINE_NUMBER(352);
	sp[0].o = (jobject)((arc_freetype_FreeTypeFontGenerator *) NULL_CHECK((frame[0].o)))->F_face;
	sp[0].o = (jobject)((func_arc_freetype_FreeType$Face_getGlyph_R_arc_freetype_FreeType$GlyphSlot) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_freetype_FreeType$Face_getGlyph_R_arc_freetype_FreeType$GlyphSlot])(ctx, sp[0].o);
	sp[0].o = (jobject)((func_arc_freetype_FreeType$GlyphSlot_getMetrics_R_arc_freetype_FreeType$GlyphMetrics) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_freetype_FreeType$GlyphSlot_getMetrics_R_arc_freetype_FreeType$GlyphMetrics])(ctx, sp[0].o);
	jint temp0 = (jint)((func_arc_freetype_FreeType$GlyphMetrics_getHeight_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_freetype_FreeType$GlyphMetrics_getHeight_R_int])(ctx, sp[0].o);
	jint temp1 = (jint)SM_arc_freetype_FreeType_toInt_int_R_int(ctx, temp0);
	frame[10].i = temp1;
	LINE_NUMBER(353);
	sp[0].o = frame[2].o;
	sp += 1;
	if ((floatCompare((jfloat((frame[10].i))), ((jfloat)((arc_graphics_g2d_Font$FontData *) NULL_CHECK((frame[2].o)))->F_lineHeight), -1)) <= 0) goto label_22;
	}
	{
	jfloat temp0 = jfloat((frame[10].i));
	sp[0].f = temp0;
	sp += 1;
	goto label_23;
	}
label_22:;
	INST_ALOAD(2);
	sp[-1].f = ((arc_graphics_g2d_Font$FontData *) NULL_CHECK(sp[-1].o))->F_lineHeight;
label_23:;
	sp -= 2;
	((arc_graphics_g2d_Font$FontData *) NULL_CHECK(sp[0].o))->F_lineHeight = sp[1].f;
label_19:;
	{
	LINE_NUMBER(350);
	INST_IINC(9, 1);
	goto label_17;
	}
label_15:;
	{
	LINE_NUMBER(357);
	sp[0].o = frame[2].o;
	((arc_graphics_g2d_Font$FontData *) NULL_CHECK(sp[0].o))->F_lineHeight = (((jfloat)((arc_graphics_g2d_Font$FontData *) NULL_CHECK(sp[0].o))->F_lineHeight) + (jfloat(((jint)((arc_freetype_FreeTypeFontGenerator$FreeTypeFontParameter *) NULL_CHECK((frame[1].o)))->F_spaceY))));
	LINE_NUMBER(360);
	jint temp0 = (jint)M_arc_freetype_FreeTypeFontGenerator_loadChar_int_int_R_boolean(ctx, (frame[0].o), (32), (frame[6].i));
	if (temp0 != 0) goto label_25;
	}
	{
	jint temp0 = (jint)M_arc_freetype_FreeTypeFontGenerator_loadChar_int_int_R_boolean(ctx, (frame[0].o), (108), (frame[6].i));
	if (temp0 == 0) goto label_26;
	}
label_25:;
	{
	LINE_NUMBER(361);
	sp[0].o = frame[2].o;
	sp[1].o = (jobject)((arc_freetype_FreeTypeFontGenerator *) NULL_CHECK((frame[0].o)))->F_face;
	sp[1].o = (jobject)((func_arc_freetype_FreeType$Face_getGlyph_R_arc_freetype_FreeType$GlyphSlot) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_freetype_FreeType$Face_getGlyph_R_arc_freetype_FreeType$GlyphSlot])(ctx, sp[1].o);
	sp[1].o = (jobject)((func_arc_freetype_FreeType$GlyphSlot_getMetrics_R_arc_freetype_FreeType$GlyphMetrics) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_freetype_FreeType$GlyphSlot_getMetrics_R_arc_freetype_FreeType$GlyphMetrics])(ctx, sp[1].o);
	jint temp0 = (jint)((func_arc_freetype_FreeType$GlyphMetrics_getHoriAdvance_R_int) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_freetype_FreeType$GlyphMetrics_getHoriAdvance_R_int])(ctx, sp[1].o);
	jint temp1 = (jint)SM_arc_freetype_FreeType_toInt_int_R_int(ctx, temp0);
	((arc_graphics_g2d_Font$FontData *) NULL_CHECK(sp[0].o))->F_spaceXadvance = (jfloat(temp1));
	goto label_27;
	}
label_26:;
	{
	LINE_NUMBER(363);
	sp[0].o = frame[2].o;
	sp[1].o = (jobject)((arc_freetype_FreeTypeFontGenerator *) NULL_CHECK((frame[0].o)))->F_face;
	jint temp0 = (jint)((func_arc_freetype_FreeType$Face_getMaxAdvanceWidth_R_int) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_freetype_FreeType$Face_getMaxAdvanceWidth_R_int])(ctx, sp[1].o);
	((arc_graphics_g2d_Font$FontData *) NULL_CHECK(sp[0].o))->F_spaceXadvance = (jfloat(temp0));
	}
label_27:;
	{
	LINE_NUMBER(367);
	sp[0].o = (jobject)((arc_graphics_g2d_Font$FontData *) NULL_CHECK((frame[2].o)))->F_xChars;
	frame[9].o = sp[0].o;
	frame[10].i = (((jarray) nullCheck(ctx, (frame[9].o)))->length);
	frame[11].i = (jint(0));
	}
label_28:;
	{
	if ((frame[11].i) >= (frame[10].i)) goto label_29;
	}
	{
	frame[12].i = ((jint)ARRAY_ACCESS(jchar, (frame[9].o), (frame[11].i)));
	LINE_NUMBER(368);
	jint temp0 = (jint)M_arc_freetype_FreeTypeFontGenerator_loadChar_int_int_R_boolean(ctx, (frame[0].o), (frame[12].i), (frame[6].i));
	if (temp0 != 0) goto label_31;
	}
	goto label_32;
label_31:;
	{
	LINE_NUMBER(369);
	sp[0].o = frame[2].o;
	sp[1].o = (jobject)((arc_freetype_FreeTypeFontGenerator *) NULL_CHECK((frame[0].o)))->F_face;
	sp[1].o = (jobject)((func_arc_freetype_FreeType$Face_getGlyph_R_arc_freetype_FreeType$GlyphSlot) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_freetype_FreeType$Face_getGlyph_R_arc_freetype_FreeType$GlyphSlot])(ctx, sp[1].o);
	sp[1].o = (jobject)((func_arc_freetype_FreeType$GlyphSlot_getMetrics_R_arc_freetype_FreeType$GlyphMetrics) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_freetype_FreeType$GlyphSlot_getMetrics_R_arc_freetype_FreeType$GlyphMetrics])(ctx, sp[1].o);
	jint temp0 = (jint)((func_arc_freetype_FreeType$GlyphMetrics_getHeight_R_int) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_freetype_FreeType$GlyphMetrics_getHeight_R_int])(ctx, sp[1].o);
	jint temp1 = (jint)SM_arc_freetype_FreeType_toInt_int_R_int(ctx, temp0);
	((arc_graphics_g2d_Font$FontData *) NULL_CHECK(sp[0].o))->F_xHeight = (jfloat(temp1));
	LINE_NUMBER(370);
	if ((floatCompare(((jfloat)((arc_graphics_g2d_Font$FontData *) NULL_CHECK((frame[2].o)))->F_xHeight), (jfloat(0)), -1)) <= 0) goto label_32;
	}
	goto label_29;
label_32:;
	{
	LINE_NUMBER(367);
	INST_IINC(11, 1);
	goto label_28;
	}
label_29:;
	{
	LINE_NUMBER(372);
	if ((floatCompare(((jfloat)((arc_graphics_g2d_Font$FontData *) NULL_CHECK((frame[2].o)))->F_xHeight), (jfloat(0)), -1)) != 0) goto label_34;
	}
	{
	clinit_arc_util_ArcRuntimeException(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_util_ArcRuntimeException);
	init_arc_util_ArcRuntimeException_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"No x-height character found in font"_j))));
	throwException(ctx, sp[0].o);	}
label_34:;
	{
	LINE_NUMBER(375);
	sp[0].o = (jobject)((arc_graphics_g2d_Font$FontData *) NULL_CHECK((frame[2].o)))->F_capChars;
	frame[9].o = sp[0].o;
	frame[10].i = (((jarray) nullCheck(ctx, (frame[9].o)))->length);
	frame[11].i = (jint(0));
	}
label_35:;
	{
	if ((frame[11].i) >= (frame[10].i)) goto label_36;
	}
	{
	frame[12].i = ((jint)ARRAY_ACCESS(jchar, (frame[9].o), (frame[11].i)));
	LINE_NUMBER(376);
	jint temp0 = (jint)M_arc_freetype_FreeTypeFontGenerator_loadChar_int_int_R_boolean(ctx, (frame[0].o), (frame[12].i), (frame[6].i));
	if (temp0 != 0) goto label_38;
	}
	goto label_39;
label_38:;
	{
	LINE_NUMBER(377);
	sp[0].o = frame[2].o;
	sp[1].o = (jobject)((arc_freetype_FreeTypeFontGenerator *) NULL_CHECK((frame[0].o)))->F_face;
	sp[1].o = (jobject)((func_arc_freetype_FreeType$Face_getGlyph_R_arc_freetype_FreeType$GlyphSlot) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_freetype_FreeType$Face_getGlyph_R_arc_freetype_FreeType$GlyphSlot])(ctx, sp[1].o);
	sp[1].o = (jobject)((func_arc_freetype_FreeType$GlyphSlot_getMetrics_R_arc_freetype_FreeType$GlyphMetrics) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_freetype_FreeType$GlyphSlot_getMetrics_R_arc_freetype_FreeType$GlyphMetrics])(ctx, sp[1].o);
	jint temp0 = (jint)((func_arc_freetype_FreeType$GlyphMetrics_getHeight_R_int) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_freetype_FreeType$GlyphMetrics_getHeight_R_int])(ctx, sp[1].o);
	jint temp1 = (jint)SM_arc_freetype_FreeType_toInt_int_R_int(ctx, temp0);
	jint temp2 = (jint)SM_java_lang_Math_abs_int_R_int(ctx, ((jint)((arc_freetype_FreeTypeFontGenerator$FreeTypeFontParameter *) NULL_CHECK((frame[1].o)))->F_shadowOffsetY));
	((arc_graphics_g2d_Font$FontData *) NULL_CHECK(sp[0].o))->F_capHeight = (jfloat((temp1 + temp2)));
	LINE_NUMBER(378);
	goto label_36;
	}
label_39:;
	{
	LINE_NUMBER(375);
	INST_IINC(11, 1);
	goto label_35;
	}
label_36:;
	{
	LINE_NUMBER(380);
	if (((jint)((arc_freetype_FreeTypeFontGenerator *) NULL_CHECK((frame[0].o)))->F_bitmapped) != 0) goto label_41;
	}
	{
	if ((floatCompare(((jfloat)((arc_graphics_g2d_Font$FontData *) NULL_CHECK((frame[2].o)))->F_capHeight), (jfloat(1)), -1)) != 0) goto label_41;
	}
	{
	clinit_arc_util_ArcRuntimeException(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_util_ArcRuntimeException);
	init_arc_util_ArcRuntimeException_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"No cap character found in font"_j))));
	throwException(ctx, sp[0].o);	}
label_41:;
	{
	LINE_NUMBER(382);
	sp[0].o = frame[2].o;
	((arc_graphics_g2d_Font$FontData *) NULL_CHECK(sp[0].o))->F_ascent = (((jfloat)((arc_graphics_g2d_Font$FontData *) NULL_CHECK(sp[0].o))->F_ascent) - ((jfloat)((arc_graphics_g2d_Font$FontData *) NULL_CHECK((frame[2].o)))->F_capHeight));
	LINE_NUMBER(383);
	((arc_graphics_g2d_Font$FontData *) NULL_CHECK((frame[2].o)))->F_down = (-((jfloat)((arc_graphics_g2d_Font$FontData *) NULL_CHECK((frame[2].o)))->F_lineHeight));
	LINE_NUMBER(384);
	if (((jint)((arc_freetype_FreeTypeFontGenerator$FreeTypeFontParameter *) NULL_CHECK((frame[1].o)))->F_flip) == 0) goto label_44;
	}
	{
	LINE_NUMBER(385);
	((arc_graphics_g2d_Font$FontData *) NULL_CHECK((frame[2].o)))->F_ascent = (-((jfloat)((arc_graphics_g2d_Font$FontData *) NULL_CHECK((frame[2].o)))->F_ascent));
	LINE_NUMBER(386);
	((arc_graphics_g2d_Font$FontData *) NULL_CHECK((frame[2].o)))->F_down = (-((jfloat)((arc_graphics_g2d_Font$FontData *) NULL_CHECK((frame[2].o)))->F_down));
	}
label_44:;
	{
	LINE_NUMBER(389);
	frame[9].i = (jint(0));
	LINE_NUMBER(391);
	sp[0].o = (jobject)((arc_freetype_FreeTypeFontGenerator$FreeTypeFontParameter *) NULL_CHECK((frame[1].o)))->F_packer;
	frame[10].o = sp[0].o;
	LINE_NUMBER(393);
	if ((frame[10].o) != nullptr) goto label_49;
	}
	{
	LINE_NUMBER(397);
	if ((frame[5].i) == 0) goto label_51;
	}
	{
	LINE_NUMBER(398);
	frame[11].i = (clinit_arc_freetype_FreeTypeFontGenerator(ctx), (jint)SF_arc_freetype_FreeTypeFontGenerator_maxTextureSize);
	LINE_NUMBER(399);
	clinit_arc_graphics_g2d_PixmapPacker$GuillotineStrategy(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_graphics_g2d_PixmapPacker$GuillotineStrategy);
	init_arc_graphics_g2d_PixmapPacker$GuillotineStrategy(ctx, sp[0].o);
	frame[12].o = sp[0].o;
	goto label_55;
	}
label_51:;
	{
	LINE_NUMBER(401);
	jdouble temp0 = (jdouble)SM_java_lang_Math_ceil_double_R_double(ctx, (jdouble(((jfloat)((arc_graphics_g2d_Font$FontData *) NULL_CHECK((frame[2].o)))->F_lineHeight))));
	frame[13].i = (jint(temp0));
	LINE_NUMBER(402);
	jdouble temp1 = (jdouble)SM_java_lang_Math_sqrt_double_R_double(ctx, (jdouble((((frame[13].i) * (frame[13].i)) * (frame[4].i)))));
	jint temp2 = (jint)SM_arc_math_Mathf_nextPowerOfTwo_int_R_int(ctx, (jint(temp1)));
	frame[11].i = temp2;
	LINE_NUMBER(403);
	if ((clinit_arc_freetype_FreeTypeFontGenerator(ctx), (jint)SF_arc_freetype_FreeTypeFontGenerator_maxTextureSize) <= 0) goto label_58;
	}
	{
	jint temp0 = (jint)SM_java_lang_Math_min_int_int_R_int(ctx, (frame[11].i), (clinit_arc_freetype_FreeTypeFontGenerator(ctx), (jint)SF_arc_freetype_FreeTypeFontGenerator_maxTextureSize));
	frame[11].i = temp0;
	}
label_58:;
	{
	LINE_NUMBER(404);
	clinit_arc_graphics_g2d_PixmapPacker$SkylineStrategy(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_graphics_g2d_PixmapPacker$SkylineStrategy);
	init_arc_graphics_g2d_PixmapPacker$SkylineStrategy(ctx, sp[0].o);
	frame[12].o = sp[0].o;
	}
label_55:;
	{
	LINE_NUMBER(406);
	frame[9].i = (jint(1));
	LINE_NUMBER(407);
	clinit_arc_graphics_g2d_PixmapPacker(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_graphics_g2d_PixmapPacker);
	init_arc_graphics_g2d_PixmapPacker_int_int_int_boolean_arc_graphics_g2d_PixmapPacker$PackStrategy(ctx, sp[0].o, (frame[11].i), (frame[11].i), (jint(1)), (jint(0)), (frame[12].o));
	frame[10].o = sp[0].o;
	LINE_NUMBER(408);
	sp[0].o = frame[10].o;
	sp[1].o = (jobject)((arc_freetype_FreeTypeFontGenerator$FreeTypeFontParameter *) NULL_CHECK((frame[1].o)))->F_color;
	((func_arc_graphics_g2d_PixmapPacker_setTransparentColor_arc_graphics_Color) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_g2d_PixmapPacker_setTransparentColor_arc_graphics_Color])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(409);
	sp[0].o = (jobject)((func_arc_graphics_g2d_PixmapPacker_getTransparentColor_R_arc_graphics_Color) ((void **) nullCheck(ctx, (frame[10].o))->vtable)[VTABLE_arc_graphics_g2d_PixmapPacker_getTransparentColor_R_arc_graphics_Color])(ctx, (frame[10].o));
	((arc_graphics_Color *) NULL_CHECK(sp[0].o))->F_a = (jfloat(0));
	LINE_NUMBER(410);
	if ((floatCompare(((jfloat)((arc_freetype_FreeTypeFontGenerator$FreeTypeFontParameter *) NULL_CHECK((frame[1].o)))->F_borderWidth), (jfloat(0)), -1)) <= 0) goto label_49;
	}
	{
	LINE_NUMBER(411);
	sp[0].o = frame[10].o;
	sp[1].o = (jobject)((arc_freetype_FreeTypeFontGenerator$FreeTypeFontParameter *) NULL_CHECK((frame[1].o)))->F_borderColor;
	((func_arc_graphics_g2d_PixmapPacker_setTransparentColor_arc_graphics_Color) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_g2d_PixmapPacker_setTransparentColor_arc_graphics_Color])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(412);
	sp[0].o = (jobject)((func_arc_graphics_g2d_PixmapPacker_getTransparentColor_R_arc_graphics_Color) ((void **) nullCheck(ctx, (frame[10].o))->vtable)[VTABLE_arc_graphics_g2d_PixmapPacker_getTransparentColor_R_arc_graphics_Color])(ctx, (frame[10].o));
	((arc_graphics_Color *) NULL_CHECK(sp[0].o))->F_a = (jfloat(0));
	}
label_49:;
	{
	LINE_NUMBER(416);
	if ((frame[5].i) == 0) goto label_65;
	}
	{
	sp[0].o = frame[2].o;
	clinit_arc_struct_Seq(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_struct_Seq);
	init_arc_struct_Seq_int(ctx, sp[1].o, ((frame[4].i) + (32)));
	((arc_freetype_FreeTypeFontGenerator$FreeTypeFontData *) NULL_CHECK(sp[0].o))->F_glyphs = (jref) sp[1].o;
	}
label_65:;
	{
	LINE_NUMBER(418);
	frame[11].o = (jobject(nullptr));
	LINE_NUMBER(419);
	if ((floatCompare(((jfloat)((arc_freetype_FreeTypeFontGenerator$FreeTypeFontParameter *) NULL_CHECK((frame[1].o)))->F_borderWidth), (jfloat(0)), -1)) <= 0) goto label_67;
	}
	{
	LINE_NUMBER(420);
	sp[0].o = (jobject)((arc_freetype_FreeTypeFontGenerator *) NULL_CHECK((frame[0].o)))->F_library;
	sp[0].o = (jobject)((func_arc_freetype_FreeType$Library_createStroker_R_arc_freetype_FreeType$Stroker) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_freetype_FreeType$Library_createStroker_R_arc_freetype_FreeType$Stroker])(ctx, sp[0].o);
	frame[11].o = sp[0].o;
	LINE_NUMBER(421);
	sp[0].o = frame[11].o;
	jint temp0 = jint((((jfloat)((arc_freetype_FreeTypeFontGenerator$FreeTypeFontParameter *) NULL_CHECK((frame[1].o)))->F_borderWidth) * (jfloat(64.0f))));
	LINE_NUMBER(422);
	sp[1].i = temp0;
	sp += 2;
	if (((jint)((arc_freetype_FreeTypeFontGenerator$FreeTypeFontParameter *) NULL_CHECK((frame[1].o)))->F_borderStraight) == 0) goto label_71;
	}
	clinit_arc_freetype_FreeType(ctx);
	(sp++)->i = SF_arc_freetype_FreeType_FT_STROKER_LINECAP_BUTT;
	goto label_72;
label_71:;
	clinit_arc_freetype_FreeType(ctx);
	(sp++)->i = SF_arc_freetype_FreeType_FT_STROKER_LINECAP_ROUND;
label_72:;
	{
	LINE_NUMBER(423);
	if (((jint)((arc_freetype_FreeTypeFontGenerator$FreeTypeFontParameter *) NULL_CHECK((frame[1].o)))->F_borderStraight) == 0) goto label_73;
	}
	clinit_arc_freetype_FreeType(ctx);
	(sp++)->i = SF_arc_freetype_FreeType_FT_STROKER_LINEJOIN_MITER_FIXED;
	goto label_74;
label_73:;
	clinit_arc_freetype_FreeType(ctx);
	(sp++)->i = SF_arc_freetype_FreeType_FT_STROKER_LINEJOIN_ROUND;
label_74:;
	{
	sp -= 4;
	jint temp0 = jint(0);
	LINE_NUMBER(421);
	((func_arc_freetype_FreeType$Stroker_set_int_int_int_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_freetype_FreeType$Stroker_set_int_int_int_int])(ctx, sp[0].o, sp[1].i, sp[2].i, sp[3].i, temp0);
	}
label_67:;
	{
	LINE_NUMBER(427);
	sp[0].o = (jobject) createArray(ctx, &class_int, (frame[4].i));
	frame[12].o = sp[0].o;
	LINE_NUMBER(428);
	frame[13].i = (jint(0));
	}
label_77:;
	{
	if ((frame[13].i) >= (frame[4].i)) goto label_78;
	}
	{
	LINE_NUMBER(429);
	frame[14].i = ((jint)ARRAY_ACCESS(jchar, (frame[3].o), (frame[13].i)));
	LINE_NUMBER(431);
	jint temp0 = (jint)M_arc_freetype_FreeTypeFontGenerator_loadChar_int_int_R_boolean(ctx, (frame[0].o), (frame[14].i), (frame[6].i));
	if (temp0 == 0) goto label_81;
	}
	{
	sp[0].o = (jobject)((arc_freetype_FreeTypeFontGenerator *) NULL_CHECK((frame[0].o)))->F_face;
	sp[0].o = (jobject)((func_arc_freetype_FreeType$Face_getGlyph_R_arc_freetype_FreeType$GlyphSlot) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_freetype_FreeType$Face_getGlyph_R_arc_freetype_FreeType$GlyphSlot])(ctx, sp[0].o);
	sp[0].o = (jobject)((func_arc_freetype_FreeType$GlyphSlot_getMetrics_R_arc_freetype_FreeType$GlyphMetrics) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_freetype_FreeType$GlyphSlot_getMetrics_R_arc_freetype_FreeType$GlyphMetrics])(ctx, sp[0].o);
	jint temp0 = (jint)((func_arc_freetype_FreeType$GlyphMetrics_getHeight_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_freetype_FreeType$GlyphMetrics_getHeight_R_int])(ctx, sp[0].o);
	jint temp1 = (jint)SM_arc_freetype_FreeType_toInt_int_R_int(ctx, temp0);
	sp[0].i = temp1;
	sp += 1;
	goto label_82;
	}
label_81:;
	INST_ICONST(0);
label_82:;
	{
	sp -= 1;
	frame[15].i = sp[0].i;
	LINE_NUMBER(432);
	ARRAY_ACCESS(jint, (frame[12].o), (frame[13].i)) = (frame[15].i);
	LINE_NUMBER(434);
	if ((frame[14].i) != 0) goto label_85;
	}
	{
	LINE_NUMBER(435);
	sp[0].o = (jobject)((func_arc_freetype_FreeTypeFontGenerator_createGlyph_char_arc_freetype_FreeTypeFontGenerator$FreeTypeFontData_arc_freetype_FreeTypeFontGenerator$FreeTypeFontParameter_arc_freetype_FreeType$Stroker_float_arc_graphics_g2d_PixmapPacker_R_arc_graphics_g2d_Font$Glyph) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_freetype_FreeTypeFontGenerator_createGlyph_char_arc_freetype_FreeTypeFontGenerator$FreeTypeFontData_arc_freetype_FreeTypeFontGenerator$FreeTypeFontParameter_arc_freetype_FreeType$Stroker_float_arc_graphics_g2d_PixmapPacker_R_arc_graphics_g2d_Font$Glyph])(ctx, (frame[0].o), (jint(0)), (frame[2].o), (frame[1].o), (frame[11].o), (frame[8].f), (frame[10].o));
	frame[16].o = sp[0].o;
	LINE_NUMBER(436);
	if ((frame[16].o) == nullptr) goto label_85;
	}
	{
	if (((jint)((arc_graphics_g2d_Font$Glyph *) NULL_CHECK((frame[16].o)))->F_width) == 0) goto label_85;
	}
	{
	if (((jint)((arc_graphics_g2d_Font$Glyph *) NULL_CHECK((frame[16].o)))->F_height) == 0) goto label_85;
	}
	{
	LINE_NUMBER(437);
	((func_arc_freetype_FreeTypeFontGenerator$FreeTypeFontData_setGlyph_int_arc_graphics_g2d_Font$Glyph) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_arc_freetype_FreeTypeFontGenerator$FreeTypeFontData_setGlyph_int_arc_graphics_g2d_Font$Glyph])(ctx, (frame[2].o), (jint(0)), (frame[16].o));
	LINE_NUMBER(438);
	((arc_graphics_g2d_Font$FontData *) NULL_CHECK((frame[2].o)))->F_missingGlyph = (jref) (frame[16].o);
	LINE_NUMBER(439);
	if ((frame[5].i) == 0) goto label_85;
	}
	{
	sp[0].o = (jobject)((arc_freetype_FreeTypeFontGenerator$FreeTypeFontData *) NULL_CHECK((frame[2].o)))->F_glyphs;
	sp[0].o = (jobject)((func_arc_struct_Seq_add_java_lang_Object_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_add_java_lang_Object_R_arc_struct_Seq])(ctx, sp[0].o, (frame[16].o));
	}
label_85:;
	{
	LINE_NUMBER(428);
	INST_IINC(13, 1);
	goto label_77;
	}
label_78:;
	{
	LINE_NUMBER(443);
	frame[13].i = (((jarray) nullCheck(ctx, (frame[12].o)))->length);
	}
label_91:;
	{
	LINE_NUMBER(444);
	if ((frame[13].i) <= 0) goto label_92;
	}
	{
	LINE_NUMBER(445);
	frame[14].i = (jint(0));
	frame[15].i = ((jint)ARRAY_ACCESS(jint, (frame[12].o), (jint(0))));
	LINE_NUMBER(446);
	frame[16].i = (jint(1));
	}
label_96:;
	{
	if ((frame[16].i) >= (frame[13].i)) goto label_97;
	}
	{
	LINE_NUMBER(447);
	frame[17].i = ((jint)ARRAY_ACCESS(jint, (frame[12].o), (frame[16].i)));
	LINE_NUMBER(448);
	if ((frame[17].i) <= (frame[15].i)) goto label_100;
	}
	{
	LINE_NUMBER(449);
	frame[15].i = (frame[17].i);
	LINE_NUMBER(450);
	frame[14].i = (frame[16].i);
	}
label_100:;
	{
	LINE_NUMBER(446);
	INST_IINC(16, 1);
	goto label_96;
	}
label_97:;
	{
	LINE_NUMBER(454);
	frame[16].i = ((jint)ARRAY_ACCESS(jchar, (frame[3].o), (frame[14].i)));
	LINE_NUMBER(455);
	sp[0].o = (jobject)((func_arc_freetype_FreeTypeFontGenerator$FreeTypeFontData_getGlyph_char_R_arc_graphics_g2d_Font$Glyph) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_arc_freetype_FreeTypeFontGenerator$FreeTypeFontData_getGlyph_char_R_arc_graphics_g2d_Font$Glyph])(ctx, (frame[2].o), (frame[16].i));
	if (sp[0].o != nullptr) goto label_104;
	}
	{
	LINE_NUMBER(456);
	sp[0].o = (jobject)((func_arc_freetype_FreeTypeFontGenerator_createGlyph_char_arc_freetype_FreeTypeFontGenerator$FreeTypeFontData_arc_freetype_FreeTypeFontGenerator$FreeTypeFontParameter_arc_freetype_FreeType$Stroker_float_arc_graphics_g2d_PixmapPacker_R_arc_graphics_g2d_Font$Glyph) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_freetype_FreeTypeFontGenerator_createGlyph_char_arc_freetype_FreeTypeFontGenerator$FreeTypeFontData_arc_freetype_FreeTypeFontGenerator$FreeTypeFontParameter_arc_freetype_FreeType$Stroker_float_arc_graphics_g2d_PixmapPacker_R_arc_graphics_g2d_Font$Glyph])(ctx, (frame[0].o), (frame[16].i), (frame[2].o), (frame[1].o), (frame[11].o), (frame[8].f), (frame[10].o));
	frame[17].o = sp[0].o;
	LINE_NUMBER(457);
	if ((frame[17].o) == nullptr) goto label_104;
	}
	{
	LINE_NUMBER(458);
	((func_arc_freetype_FreeTypeFontGenerator$FreeTypeFontData_setGlyph_int_arc_graphics_g2d_Font$Glyph) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_arc_freetype_FreeTypeFontGenerator$FreeTypeFontData_setGlyph_int_arc_graphics_g2d_Font$Glyph])(ctx, (frame[2].o), (frame[16].i), (frame[17].o));
	LINE_NUMBER(459);
	if ((frame[5].i) == 0) goto label_104;
	}
	{
	sp[0].o = (jobject)((arc_freetype_FreeTypeFontGenerator$FreeTypeFontData *) NULL_CHECK((frame[2].o)))->F_glyphs;
	sp[0].o = (jobject)((func_arc_struct_Seq_add_java_lang_Object_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_add_java_lang_Object_R_arc_struct_Seq])(ctx, sp[0].o, (frame[17].o));
	}
label_104:;
	{
	LINE_NUMBER(463);
	INST_IINC(13, -1);
	LINE_NUMBER(464);
	ARRAY_ACCESS(jint, (frame[12].o), (frame[14].i)) = ((jint)ARRAY_ACCESS(jint, (frame[12].o), (frame[13].i)));
	LINE_NUMBER(465);
	frame[17].i = ((jint)ARRAY_ACCESS(jchar, (frame[3].o), (frame[14].i)));
	LINE_NUMBER(466);
	ARRAY_ACCESS(jchar, (frame[3].o), (frame[14].i)) = ((jint)ARRAY_ACCESS(jchar, (frame[3].o), (frame[13].i)));
	LINE_NUMBER(467);
	ARRAY_ACCESS(jchar, (frame[3].o), (frame[13].i)) = (frame[17].i);
	LINE_NUMBER(468);
	goto label_91;
	}
label_92:;
	{
	LINE_NUMBER(470);
	if ((frame[11].o) == nullptr) goto label_114;
	}
	INST_ILOAD(5);
	if ((--sp)->i != 0) goto label_114;
	INST_ALOAD(11);
	POP_N(1); // Pop method args
	((func_arc_freetype_FreeType$Stroker_dispose) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_freetype_FreeType$Stroker_dispose])(ctx, sp[0].o);
label_114:;
	{
	LINE_NUMBER(472);
	if ((frame[5].i) == 0) goto label_115;
	}
	{
	LINE_NUMBER(473);
	((arc_freetype_FreeTypeFontGenerator$FreeTypeFontData *) NULL_CHECK((frame[2].o)))->F_generator = (jref) (frame[0].o);
	LINE_NUMBER(474);
	((arc_freetype_FreeTypeFontGenerator$FreeTypeFontData *) NULL_CHECK((frame[2].o)))->F_parameter = (jref) (frame[1].o);
	LINE_NUMBER(475);
	((arc_freetype_FreeTypeFontGenerator$FreeTypeFontData *) NULL_CHECK((frame[2].o)))->F_stroker = (jref) (frame[11].o);
	LINE_NUMBER(476);
	((arc_freetype_FreeTypeFontGenerator$FreeTypeFontData *) NULL_CHECK((frame[2].o)))->F_packer = (jref) (frame[10].o);
	}
label_115:;
	{
	LINE_NUMBER(480);
	sp[0].o = frame[1].o;
	jint temp0 = (jint)((arc_freetype_FreeTypeFontGenerator$FreeTypeFontParameter *) NULL_CHECK(sp[0].o))->F_kerning;
	sp[1].o = (jobject)((arc_freetype_FreeTypeFontGenerator *) NULL_CHECK((frame[0].o)))->F_face;
	jint temp1 = (jint)((func_arc_freetype_FreeType$Face_hasKerning_R_boolean) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_freetype_FreeType$Face_hasKerning_R_boolean])(ctx, sp[1].o);
	((arc_freetype_FreeTypeFontGenerator$FreeTypeFontParameter *) NULL_CHECK(sp[0].o))->F_kerning = (temp0 & temp1);
	LINE_NUMBER(481);
	if (((jint)((arc_freetype_FreeTypeFontGenerator$FreeTypeFontParameter *) NULL_CHECK((frame[1].o)))->F_kerning) == 0) goto label_121;
	}
	{
	LINE_NUMBER(482);
	frame[14].i = (jint(0));
	}
label_123:;
	{
	if ((frame[14].i) >= (frame[4].i)) goto label_121;
	}
	{
	LINE_NUMBER(483);
	frame[15].i = ((jint)ARRAY_ACCESS(jchar, (frame[3].o), (frame[14].i)));
	LINE_NUMBER(484);
	sp[0].o = (jobject)((func_arc_freetype_FreeTypeFontGenerator$FreeTypeFontData_getGlyph_char_R_arc_graphics_g2d_Font$Glyph) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_arc_freetype_FreeTypeFontGenerator$FreeTypeFontData_getGlyph_char_R_arc_graphics_g2d_Font$Glyph])(ctx, (frame[2].o), (frame[15].i));
	frame[16].o = sp[0].o;
	LINE_NUMBER(485);
	if ((frame[16].o) != nullptr) goto label_127;
	}
	goto label_128;
label_127:;
	{
	LINE_NUMBER(486);
	sp[0].o = (jobject)((arc_freetype_FreeTypeFontGenerator *) NULL_CHECK((frame[0].o)))->F_face;
	jint temp0 = (jint)((func_arc_freetype_FreeType$Face_getCharIndex_int_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_freetype_FreeType$Face_getCharIndex_int_R_int])(ctx, sp[0].o, (frame[15].i));
	frame[17].i = temp0;
	LINE_NUMBER(487);
	frame[18].i = (frame[14].i);
	}
label_130:;
	{
	if ((frame[18].i) >= (frame[4].i)) goto label_128;
	}
	{
	LINE_NUMBER(488);
	frame[19].i = ((jint)ARRAY_ACCESS(jchar, (frame[3].o), (frame[18].i)));
	LINE_NUMBER(489);
	sp[0].o = (jobject)((func_arc_freetype_FreeTypeFontGenerator$FreeTypeFontData_getGlyph_char_R_arc_graphics_g2d_Font$Glyph) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_arc_freetype_FreeTypeFontGenerator$FreeTypeFontData_getGlyph_char_R_arc_graphics_g2d_Font$Glyph])(ctx, (frame[2].o), (frame[19].i));
	frame[20].o = sp[0].o;
	LINE_NUMBER(490);
	if ((frame[20].o) != nullptr) goto label_134;
	}
	goto label_135;
label_134:;
	{
	LINE_NUMBER(491);
	sp[0].o = (jobject)((arc_freetype_FreeTypeFontGenerator *) NULL_CHECK((frame[0].o)))->F_face;
	jint temp0 = (jint)((func_arc_freetype_FreeType$Face_getCharIndex_int_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_freetype_FreeType$Face_getCharIndex_int_R_int])(ctx, sp[0].o, (frame[19].i));
	frame[21].i = temp0;
	LINE_NUMBER(493);
	sp[0].o = (jobject)((arc_freetype_FreeTypeFontGenerator *) NULL_CHECK((frame[0].o)))->F_face;
	jint temp1 = (jint)((func_arc_freetype_FreeType$Face_getKerning_int_int_int_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_freetype_FreeType$Face_getKerning_int_int_int_R_int])(ctx, sp[0].o, (frame[17].i), (frame[21].i), (jint(0)));
	frame[22].i = temp1;
	LINE_NUMBER(494);
	if ((frame[22].i) == 0) goto label_138;
	}
	{
	sp[0].o = frame[16].o;
	jint temp0 = frame[19].i;
	jint temp1 = (jint)SM_arc_freetype_FreeType_toInt_int_R_int(ctx, (frame[22].i));
	((func_arc_graphics_g2d_Font$Glyph_setKerning_int_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_g2d_Font$Glyph_setKerning_int_int])(ctx, sp[0].o, temp0, temp1);
	}
label_138:;
	{
	LINE_NUMBER(496);
	sp[0].o = (jobject)((arc_freetype_FreeTypeFontGenerator *) NULL_CHECK((frame[0].o)))->F_face;
	jint temp0 = (jint)((func_arc_freetype_FreeType$Face_getKerning_int_int_int_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_freetype_FreeType$Face_getKerning_int_int_int_R_int])(ctx, sp[0].o, (frame[21].i), (frame[17].i), (jint(0)));
	frame[22].i = temp0;
	LINE_NUMBER(497);
	if ((frame[22].i) == 0) goto label_135;
	}
	{
	sp[0].o = frame[20].o;
	jint temp0 = frame[15].i;
	jint temp1 = (jint)SM_arc_freetype_FreeType_toInt_int_R_int(ctx, (frame[22].i));
	((func_arc_graphics_g2d_Font$Glyph_setKerning_int_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_g2d_Font$Glyph_setKerning_int_int])(ctx, sp[0].o, temp0, temp1);
	}
label_135:;
	{
	LINE_NUMBER(487);
	INST_IINC(18, 1);
	goto label_130;
	}
label_128:;
	{
	LINE_NUMBER(482);
	INST_IINC(14, 1);
	goto label_123;
	}
label_121:;
	{
	LINE_NUMBER(503);
	if ((frame[9].i) == 0) goto label_140;
	}
	{
	LINE_NUMBER(504);
	sp[0].o = frame[2].o;
	clinit_arc_struct_Seq(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_struct_Seq);
	init_arc_struct_Seq(ctx, sp[1].o);
	((arc_freetype_FreeTypeFontGenerator$FreeTypeFontData *) NULL_CHECK(sp[0].o))->F_regions = (jref) sp[1].o;
	LINE_NUMBER(505);
	sp[0].o = frame[10].o;
	sp[1].o = (jobject)((arc_freetype_FreeTypeFontGenerator$FreeTypeFontData *) NULL_CHECK((frame[2].o)))->F_regions;
	sp[2].o = (jobject)((arc_freetype_FreeTypeFontGenerator$FreeTypeFontParameter *) NULL_CHECK((frame[1].o)))->F_minFilter;
	sp[3].o = (jobject)((arc_freetype_FreeTypeFontGenerator$FreeTypeFontParameter *) NULL_CHECK((frame[1].o)))->F_magFilter;
	((func_arc_graphics_g2d_PixmapPacker_updateTextureRegions_arc_struct_Seq_arc_graphics_Texture$TextureFilter_arc_graphics_Texture$TextureFilter_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_g2d_PixmapPacker_updateTextureRegions_arc_struct_Seq_arc_graphics_Texture$TextureFilter_arc_graphics_Texture$TextureFilter_boolean])(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o, ((jint)((arc_freetype_FreeTypeFontGenerator$FreeTypeFontParameter *) NULL_CHECK((frame[1].o)))->F_genMipMaps));
	}
label_140:;
	{
	LINE_NUMBER(509);
	sp[0].o = (jobject)((func_arc_freetype_FreeTypeFontGenerator$FreeTypeFontData_getGlyph_char_R_arc_graphics_g2d_Font$Glyph) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_arc_freetype_FreeTypeFontGenerator$FreeTypeFontData_getGlyph_char_R_arc_graphics_g2d_Font$Glyph])(ctx, (frame[2].o), (32));
	frame[14].o = sp[0].o;
	LINE_NUMBER(510);
	if ((frame[14].o) != nullptr) goto label_144;
	}
	{
	LINE_NUMBER(511);
	clinit_arc_graphics_g2d_Font$Glyph(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_graphics_g2d_Font$Glyph);
	init_arc_graphics_g2d_Font$Glyph(ctx, sp[0].o);
	frame[14].o = sp[0].o;
	LINE_NUMBER(512);
	((arc_graphics_g2d_Font$Glyph *) NULL_CHECK((frame[14].o)))->F_xadvance = ((jint(((jfloat)((arc_graphics_g2d_Font$FontData *) NULL_CHECK((frame[2].o)))->F_spaceXadvance))) + ((jint)((arc_freetype_FreeTypeFontGenerator$FreeTypeFontParameter *) NULL_CHECK((frame[1].o)))->F_spaceX));
	LINE_NUMBER(513);
	((arc_graphics_g2d_Font$Glyph *) NULL_CHECK((frame[14].o)))->F_id = (32);
	LINE_NUMBER(514);
	((func_arc_freetype_FreeTypeFontGenerator$FreeTypeFontData_setGlyph_int_arc_graphics_g2d_Font$Glyph) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_arc_freetype_FreeTypeFontGenerator$FreeTypeFontData_setGlyph_int_arc_graphics_g2d_Font$Glyph])(ctx, (frame[2].o), (32), (frame[14].o));
	}
label_144:;
	{
	LINE_NUMBER(516);
	if (((jint)((arc_graphics_g2d_Font$Glyph *) NULL_CHECK((frame[14].o)))->F_width) != 0) goto label_149;
	}
	{
	((arc_graphics_g2d_Font$Glyph *) NULL_CHECK((frame[14].o)))->F_width = (jint(((jfloat(((jint)((arc_graphics_g2d_Font$Glyph *) NULL_CHECK((frame[14].o)))->F_xadvance))) + ((jfloat)((arc_graphics_g2d_Font$FontData *) NULL_CHECK((frame[2].o)))->F_padRight))));
	}
label_149:;
	{
	LINE_NUMBER(518);
	popStackFrame(ctx);
	return (frame[2].o);
	}

	popStackFrame(ctx);
}

jobject M_arc_freetype_FreeTypeFontGenerator_createGlyph_char_arc_freetype_FreeTypeFontGenerator$FreeTypeFontData_arc_freetype_FreeTypeFontGenerator$FreeTypeFontParameter_arc_freetype_FreeType$Stroker_float_arc_graphics_g2d_PixmapPacker_R_arc_graphics_g2d_Font$Glyph(jcontext ctx, jobject self, jchar param0, jobject param1, jobject param2, jobject param3, jfloat param4, jobject param5) {
	NULL_CHECK(self);
	jtype frame[39];
	auto stack = &frame[34];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/freetype/FreeTypeFontGenerator:createGlyph", 39 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].o = param1;
	frame[3].o = param2;
	frame[4].o = param3;
	frame[5].f = param4;
	frame[6].o = param5;
	{
	LINE_NUMBER(525);
	sp[0].o = (jobject)((arc_freetype_FreeTypeFontGenerator *) NULL_CHECK((frame[0].o)))->F_face;
	jint temp0 = (jint)((func_arc_freetype_FreeType$Face_getCharIndex_int_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_freetype_FreeType$Face_getCharIndex_int_R_int])(ctx, sp[0].o, (frame[1].i));
	if (temp0 != 0) goto label_5;
	}
	INST_ILOAD(1);
	if ((--sp)->i == 0) goto label_5;
	INST_ICONST(1);
	goto label_6;
label_5:;
	INST_ICONST(0);
label_6:;
	{
	sp -= 1;
	frame[7].i = sp[0].i;
	LINE_NUMBER(526);
	if ((frame[7].i) == 0) goto label_8;
	}
	INST_ACONST_NULL();
	popStackFrame(ctx);
	INST_ARETURN();
label_8:;
	{
	LINE_NUMBER(528);
	sp[0].o = frame[0].o;
	jint temp0 = frame[1].i;
	jint temp1 = (jint)M_arc_freetype_FreeTypeFontGenerator_getLoadingFlags_arc_freetype_FreeTypeFontGenerator$FreeTypeFontParameter_R_int(ctx, (frame[0].o), (frame[3].o));
	jint temp2 = (jint)M_arc_freetype_FreeTypeFontGenerator_loadChar_int_int_R_boolean(ctx, sp[0].o, temp0, temp1);
	if (temp2 != 0) goto label_9;
	}
	INST_ACONST_NULL();
	popStackFrame(ctx);
	INST_ARETURN();
label_9:;
	{
	LINE_NUMBER(530);
	sp[0].o = (jobject)((arc_freetype_FreeTypeFontGenerator *) NULL_CHECK((frame[0].o)))->F_face;
	sp[0].o = (jobject)((func_arc_freetype_FreeType$Face_getGlyph_R_arc_freetype_FreeType$GlyphSlot) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_freetype_FreeType$Face_getGlyph_R_arc_freetype_FreeType$GlyphSlot])(ctx, sp[0].o);
	frame[8].o = sp[0].o;
	LINE_NUMBER(531);
	sp[0].o = (jobject)((func_arc_freetype_FreeType$GlyphSlot_getGlyph_R_arc_freetype_FreeType$Glyph) ((void **) nullCheck(ctx, (frame[8].o))->vtable)[VTABLE_arc_freetype_FreeType$GlyphSlot_getGlyph_R_arc_freetype_FreeType$Glyph])(ctx, (frame[8].o));
	frame[9].o = sp[0].o;
	}
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_arc_util_ArcRuntimeException))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(533);
	sp[0].o = frame[9].o;
	sp += 1;
	if (((jint)((arc_freetype_FreeTypeFontGenerator$FreeTypeFontParameter *) NULL_CHECK((frame[3].o)))->F_mono) == 0) goto label_11;
	}
	clinit_arc_freetype_FreeType(ctx);
	(sp++)->i = SF_arc_freetype_FreeType_FT_RENDER_MODE_MONO;
	goto label_12;
label_11:;
	clinit_arc_freetype_FreeType(ctx);
	(sp++)->i = SF_arc_freetype_FreeType_FT_RENDER_MODE_NORMAL;
label_12:;
	POP_N(2); // Pop method args
	((func_arc_freetype_FreeType$Glyph_toBitmap_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_freetype_FreeType$Glyph_toBitmap_int])(ctx, sp[0].o, sp[1].i);
	popExceptionFrame(frameRef);
	LINE_NUMBER(538);
	goto label_13;
label_2:;
	{
	sp -= 1;
	LINE_NUMBER(534);
	frame[10].o = sp[0].o;
	LINE_NUMBER(535);
	((func_arc_freetype_FreeType$Glyph_dispose) ((void **) nullCheck(ctx, (frame[9].o))->vtable)[VTABLE_arc_freetype_FreeType$Glyph_dispose])(ctx, (frame[9].o));
	LINE_NUMBER(536);
	sp[0].o = ((jobject) createStringLiteral(ctx, u8"FreeTypeFontGenerator"_j));
	clinit_java_lang_StringBuilder(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[1].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"Couldn't render char: "_j))));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_char_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_char_R_java_lang_StringBuilder])(ctx, sp[1].o, (frame[1].i));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[1].o);
	SM_arc_util_Log_infoTag_java_lang_String_java_lang_String(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(537);
	popStackFrame(ctx);
	return (jobject(nullptr));
	}
label_13:;
	{
	LINE_NUMBER(539);
	sp[0].o = (jobject)((func_arc_freetype_FreeType$Glyph_getBitmap_R_arc_freetype_FreeType$Bitmap) ((void **) nullCheck(ctx, (frame[9].o))->vtable)[VTABLE_arc_freetype_FreeType$Glyph_getBitmap_R_arc_freetype_FreeType$Bitmap])(ctx, (frame[9].o));
	frame[10].o = sp[0].o;
	LINE_NUMBER(540);
	sp[0].o = frame[10].o;
	sp[1].o = (jobject)((arc_freetype_FreeTypeFontGenerator$FreeTypeFontParameter *) NULL_CHECK((frame[3].o)))->F_color;
	sp[0].o = (jobject)((func_arc_freetype_FreeType$Bitmap_getPixmap_arc_graphics_Color_float_R_arc_graphics_Pixmap) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_freetype_FreeType$Bitmap_getPixmap_arc_graphics_Color_float_R_arc_graphics_Pixmap])(ctx, sp[0].o, sp[1].o, ((jfloat)((arc_freetype_FreeTypeFontGenerator$FreeTypeFontParameter *) NULL_CHECK((frame[3].o)))->F_gamma));
	frame[11].o = sp[0].o;
	LINE_NUMBER(542);
	jint temp0 = (jint)((func_arc_freetype_FreeType$Bitmap_getWidth_R_int) ((void **) nullCheck(ctx, (frame[10].o))->vtable)[VTABLE_arc_freetype_FreeType$Bitmap_getWidth_R_int])(ctx, (frame[10].o));
	if (temp0 == 0) goto label_19;
	}
	{
	jint temp0 = (jint)((func_arc_freetype_FreeType$Bitmap_getRows_R_int) ((void **) nullCheck(ctx, (frame[10].o))->vtable)[VTABLE_arc_freetype_FreeType$Bitmap_getRows_R_int])(ctx, (frame[10].o));
	if (temp0 == 0) goto label_19;
	}
	{
	LINE_NUMBER(543);
	frame[12].i = (jint(0));
	frame[13].i = (jint(0));
	LINE_NUMBER(544);
	if ((floatCompare(((jfloat)((arc_freetype_FreeTypeFontGenerator$FreeTypeFontParameter *) NULL_CHECK((frame[3].o)))->F_borderWidth), (jfloat(0)), -1)) <= 0) goto label_23;
	}
	{
	LINE_NUMBER(546);
	jint temp0 = (jint)((func_arc_freetype_FreeType$Glyph_getTop_R_int) ((void **) nullCheck(ctx, (frame[9].o))->vtable)[VTABLE_arc_freetype_FreeType$Glyph_getTop_R_int])(ctx, (frame[9].o));
	frame[14].i = temp0;
	jint temp1 = (jint)((func_arc_freetype_FreeType$Glyph_getLeft_R_int) ((void **) nullCheck(ctx, (frame[9].o))->vtable)[VTABLE_arc_freetype_FreeType$Glyph_getLeft_R_int])(ctx, (frame[9].o));
	frame[15].i = temp1;
	LINE_NUMBER(547);
	sp[0].o = (jobject)((func_arc_freetype_FreeType$GlyphSlot_getGlyph_R_arc_freetype_FreeType$Glyph) ((void **) nullCheck(ctx, (frame[8].o))->vtable)[VTABLE_arc_freetype_FreeType$GlyphSlot_getGlyph_R_arc_freetype_FreeType$Glyph])(ctx, (frame[8].o));
	frame[16].o = sp[0].o;
	LINE_NUMBER(548);
	((func_arc_freetype_FreeType$Glyph_strokeBorder_arc_freetype_FreeType$Stroker_boolean) ((void **) nullCheck(ctx, (frame[16].o))->vtable)[VTABLE_arc_freetype_FreeType$Glyph_strokeBorder_arc_freetype_FreeType$Stroker_boolean])(ctx, (frame[16].o), (frame[4].o), (jint(0)));
	LINE_NUMBER(549);
	sp[0].o = frame[16].o;
	sp += 1;
	if (((jint)((arc_freetype_FreeTypeFontGenerator$FreeTypeFontParameter *) NULL_CHECK((frame[3].o)))->F_mono) == 0) goto label_29;
	}
	clinit_arc_freetype_FreeType(ctx);
	(sp++)->i = SF_arc_freetype_FreeType_FT_RENDER_MODE_MONO;
	goto label_30;
label_29:;
	clinit_arc_freetype_FreeType(ctx);
	(sp++)->i = SF_arc_freetype_FreeType_FT_RENDER_MODE_NORMAL;
label_30:;
	{
	sp -= 2;
	((func_arc_freetype_FreeType$Glyph_toBitmap_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_freetype_FreeType$Glyph_toBitmap_int])(ctx, sp[0].o, sp[1].i);
	LINE_NUMBER(550);
	jint temp0 = frame[15].i;
	jint temp1 = (jint)((func_arc_freetype_FreeType$Glyph_getLeft_R_int) ((void **) nullCheck(ctx, (frame[16].o))->vtable)[VTABLE_arc_freetype_FreeType$Glyph_getLeft_R_int])(ctx, (frame[16].o));
	frame[12].i = (temp0 - temp1);
	LINE_NUMBER(551);
	jint temp2 = frame[14].i;
	jint temp3 = (jint)((func_arc_freetype_FreeType$Glyph_getTop_R_int) ((void **) nullCheck(ctx, (frame[16].o))->vtable)[VTABLE_arc_freetype_FreeType$Glyph_getTop_R_int])(ctx, (frame[16].o));
	frame[13].i = (-(temp2 - temp3));
	LINE_NUMBER(554);
	sp[0].o = (jobject)((func_arc_freetype_FreeType$Glyph_getBitmap_R_arc_freetype_FreeType$Bitmap) ((void **) nullCheck(ctx, (frame[16].o))->vtable)[VTABLE_arc_freetype_FreeType$Glyph_getBitmap_R_arc_freetype_FreeType$Bitmap])(ctx, (frame[16].o));
	frame[17].o = sp[0].o;
	LINE_NUMBER(555);
	sp[0].o = frame[17].o;
	sp[1].o = (jobject)((arc_freetype_FreeTypeFontGenerator$FreeTypeFontParameter *) NULL_CHECK((frame[3].o)))->F_borderColor;
	sp[0].o = (jobject)((func_arc_freetype_FreeType$Bitmap_getPixmap_arc_graphics_Color_float_R_arc_graphics_Pixmap) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_freetype_FreeType$Bitmap_getPixmap_arc_graphics_Color_float_R_arc_graphics_Pixmap])(ctx, sp[0].o, sp[1].o, ((jfloat)((arc_freetype_FreeTypeFontGenerator$FreeTypeFontParameter *) NULL_CHECK((frame[3].o)))->F_borderGamma));
	frame[18].o = sp[0].o;
	LINE_NUMBER(558);
	frame[19].i = (jint(0));
	frame[20].i = ((jint)((arc_freetype_FreeTypeFontGenerator$FreeTypeFontParameter *) NULL_CHECK((frame[3].o)))->F_renderCount);
	}
label_37:;
	{
	if ((frame[19].i) >= (frame[20].i)) goto label_38;
	}
	{
	LINE_NUMBER(559);
	((func_arc_graphics_Pixmap_draw_arc_graphics_Pixmap_int_int_boolean) ((void **) nullCheck(ctx, (frame[18].o))->vtable)[VTABLE_arc_graphics_Pixmap_draw_arc_graphics_Pixmap_int_int_boolean])(ctx, (frame[18].o), (frame[11].o), (frame[12].i), (frame[13].i), (jint(1)));
	LINE_NUMBER(558);
	INST_IINC(19, 1);
	goto label_37;
	}
label_38:;
	{
	LINE_NUMBER(561);
	((func_arc_graphics_Pixmap_dispose) ((void **) nullCheck(ctx, (frame[11].o))->vtable)[VTABLE_arc_graphics_Pixmap_dispose])(ctx, (frame[11].o));
	LINE_NUMBER(562);
	((func_arc_freetype_FreeType$Glyph_dispose) ((void **) nullCheck(ctx, (frame[9].o))->vtable)[VTABLE_arc_freetype_FreeType$Glyph_dispose])(ctx, (frame[9].o));
	LINE_NUMBER(563);
	frame[11].o = (frame[18].o);
	LINE_NUMBER(564);
	frame[9].o = (frame[16].o);
	}
label_23:;
	{
	LINE_NUMBER(567);
	if (((jint)((arc_freetype_FreeTypeFontGenerator$FreeTypeFontParameter *) NULL_CHECK((frame[3].o)))->F_shadowOffsetX) != 0) goto label_44;
	}
	{
	if (((jint)((arc_freetype_FreeTypeFontGenerator$FreeTypeFontParameter *) NULL_CHECK((frame[3].o)))->F_shadowOffsetY) == 0) goto label_45;
	}
label_44:;
	{
	LINE_NUMBER(568);
	frame[14].i = ((jint)((arc_graphics_Pixmap *) NULL_CHECK((frame[11].o)))->F_width);
	frame[15].i = ((jint)((arc_graphics_Pixmap *) NULL_CHECK((frame[11].o)))->F_height);
	LINE_NUMBER(569);
	jint temp0 = (jint)SM_java_lang_Math_max_int_int_R_int(ctx, ((jint)((arc_freetype_FreeTypeFontGenerator$FreeTypeFontParameter *) NULL_CHECK((frame[3].o)))->F_shadowOffsetX), (jint(0)));
	frame[16].i = temp0;
	jint temp1 = (jint)SM_java_lang_Math_max_int_int_R_int(ctx, ((jint)((arc_freetype_FreeTypeFontGenerator$FreeTypeFontParameter *) NULL_CHECK((frame[3].o)))->F_shadowOffsetY), (jint(0)));
	frame[17].i = temp1;
	LINE_NUMBER(570);
	jint temp2 = frame[14].i;
	jint temp3 = (jint)SM_java_lang_Math_abs_int_R_int(ctx, ((jint)((arc_freetype_FreeTypeFontGenerator$FreeTypeFontParameter *) NULL_CHECK((frame[3].o)))->F_shadowOffsetX));
	frame[18].i = (temp2 + temp3);
	jint temp4 = frame[15].i;
	jint temp5 = (jint)SM_java_lang_Math_abs_int_R_int(ctx, ((jint)((arc_freetype_FreeTypeFontGenerator$FreeTypeFontParameter *) NULL_CHECK((frame[3].o)))->F_shadowOffsetY));
	frame[19].i = (temp4 + temp5);
	LINE_NUMBER(571);
	clinit_arc_graphics_Pixmap(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_graphics_Pixmap);
	init_arc_graphics_Pixmap_int_int(ctx, sp[0].o, (frame[18].i), (frame[19].i));
	frame[20].o = sp[0].o;
	LINE_NUMBER(573);
	sp[0].o = (jobject)((arc_freetype_FreeTypeFontGenerator$FreeTypeFontParameter *) NULL_CHECK((frame[3].o)))->F_shadowColor;
	frame[21].o = sp[0].o;
	LINE_NUMBER(574);
	frame[22].f = ((jfloat)((arc_graphics_Color *) NULL_CHECK((frame[21].o)))->F_a);
	LINE_NUMBER(575);
	if ((floatCompare((frame[22].f), (jfloat(0)), -1)) == 0) goto label_55;
	}
	{
	LINE_NUMBER(576);
	frame[23].i = (jbyte((jint((((jfloat)((arc_graphics_Color *) NULL_CHECK((frame[21].o)))->F_r) * (jfloat(255.0f)))))));
	frame[24].i = (jbyte((jint((((jfloat)((arc_graphics_Color *) NULL_CHECK((frame[21].o)))->F_g) * (jfloat(255.0f)))))));
	frame[25].i = (jbyte((jint((((jfloat)((arc_graphics_Color *) NULL_CHECK((frame[21].o)))->F_b) * (jfloat(255.0f)))))));
	LINE_NUMBER(577);
	sp[0].o = (jobject)((arc_graphics_Pixmap *) NULL_CHECK((frame[11].o)))->F_pixels;
	frame[26].o = sp[0].o;
	LINE_NUMBER(578);
	sp[0].o = (jobject)((arc_graphics_Pixmap *) NULL_CHECK((frame[20].o)))->F_pixels;
	frame[27].o = sp[0].o;
	LINE_NUMBER(579);
	frame[28].i = (jint(0));
	}
label_62:;
	{
	if ((frame[28].i) >= (frame[15].i)) goto label_55;
	}
	{
	LINE_NUMBER(580);
	frame[29].i = (((frame[18].i) * ((frame[28].i) + (frame[17].i))) + (frame[16].i));
	LINE_NUMBER(581);
	frame[30].i = (jint(0));
	}
label_65:;
	{
	if ((frame[30].i) >= (frame[14].i)) goto label_66;
	}
	{
	LINE_NUMBER(582);
	frame[31].i = ((((frame[14].i) * (frame[28].i)) + (frame[30].i)) * (jint(4)));
	LINE_NUMBER(583);
	jint temp0 = (jint)((func_java_nio_ByteBuffer_get_int_R_byte) ((void **) nullCheck(ctx, (frame[26].o))->vtable)[VTABLE_java_nio_ByteBuffer_get_int_R_byte])(ctx, (frame[26].o), ((frame[31].i) + (jint(3))));
	frame[32].i = temp0;
	LINE_NUMBER(584);
	if ((frame[32].i) != 0) goto label_70;
	}
	goto label_71;
label_70:;
	{
	LINE_NUMBER(585);
	frame[33].i = (((frame[29].i) + (frame[30].i)) * (jint(4)));
	LINE_NUMBER(586);
	sp[0].o = (jobject)((func_java_nio_ByteBuffer_put_int_byte_R_java_nio_ByteBuffer) ((void **) nullCheck(ctx, (frame[27].o))->vtable)[VTABLE_java_nio_ByteBuffer_put_int_byte_R_java_nio_ByteBuffer])(ctx, (frame[27].o), (frame[33].i), (frame[23].i));
	LINE_NUMBER(587);
	sp[0].o = (jobject)((func_java_nio_ByteBuffer_put_int_byte_R_java_nio_ByteBuffer) ((void **) nullCheck(ctx, (frame[27].o))->vtable)[VTABLE_java_nio_ByteBuffer_put_int_byte_R_java_nio_ByteBuffer])(ctx, (frame[27].o), ((frame[33].i) + (jint(1))), (frame[24].i));
	LINE_NUMBER(588);
	sp[0].o = (jobject)((func_java_nio_ByteBuffer_put_int_byte_R_java_nio_ByteBuffer) ((void **) nullCheck(ctx, (frame[27].o))->vtable)[VTABLE_java_nio_ByteBuffer_put_int_byte_R_java_nio_ByteBuffer])(ctx, (frame[27].o), ((frame[33].i) + (jint(2))), (frame[25].i));
	LINE_NUMBER(589);
	sp[0].o = (jobject)((func_java_nio_ByteBuffer_put_int_byte_R_java_nio_ByteBuffer) ((void **) nullCheck(ctx, (frame[27].o))->vtable)[VTABLE_java_nio_ByteBuffer_put_int_byte_R_java_nio_ByteBuffer])(ctx, (frame[27].o), ((frame[33].i) + (jint(3))), (jbyte((jint(((jfloat(((frame[32].i) & (255)))) * (frame[22].f)))))));
	}
label_71:;
	{
	LINE_NUMBER(581);
	INST_IINC(30, 1);
	goto label_65;
	}
label_66:;
	{
	LINE_NUMBER(579);
	INST_IINC(28, 1);
	goto label_62;
	}
label_55:;
	{
	LINE_NUMBER(595);
	frame[23].i = (jint(0));
	frame[24].i = ((jint)((arc_freetype_FreeTypeFontGenerator$FreeTypeFontParameter *) NULL_CHECK((frame[3].o)))->F_renderCount);
	}
label_77:;
	{
	if ((frame[23].i) >= (frame[24].i)) goto label_78;
	}
	{
	LINE_NUMBER(596);
	sp[0].o = frame[20].o;
	sp[1].o = frame[11].o;
	jint temp0 = (jint)SM_java_lang_Math_max_int_int_R_int(ctx, (-((jint)((arc_freetype_FreeTypeFontGenerator$FreeTypeFontParameter *) NULL_CHECK((frame[3].o)))->F_shadowOffsetX)), (jint(0)));
	jint temp1 = (jint)SM_java_lang_Math_max_int_int_R_int(ctx, (-((jint)((arc_freetype_FreeTypeFontGenerator$FreeTypeFontParameter *) NULL_CHECK((frame[3].o)))->F_shadowOffsetY)), (jint(0)));
	((func_arc_graphics_Pixmap_draw_arc_graphics_Pixmap_int_int_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_Pixmap_draw_arc_graphics_Pixmap_int_int_boolean])(ctx, sp[0].o, sp[1].o, temp0, temp1, (jint(1)));
	LINE_NUMBER(595);
	INST_IINC(23, 1);
	goto label_77;
	}
label_78:;
	{
	LINE_NUMBER(597);
	((func_arc_graphics_Pixmap_dispose) ((void **) nullCheck(ctx, (frame[11].o))->vtable)[VTABLE_arc_graphics_Pixmap_dispose])(ctx, (frame[11].o));
	LINE_NUMBER(598);
	frame[11].o = (frame[20].o);
	LINE_NUMBER(599);
	goto label_83;
	}
label_45:;
	{
	if ((floatCompare(((jfloat)((arc_freetype_FreeTypeFontGenerator$FreeTypeFontParameter *) NULL_CHECK((frame[3].o)))->F_borderWidth), (jfloat(0)), -1)) != 0) goto label_83;
	}
	{
	LINE_NUMBER(601);
	frame[14].i = (jint(0));
	frame[15].i = (((jint)((arc_freetype_FreeTypeFontGenerator$FreeTypeFontParameter *) NULL_CHECK((frame[3].o)))->F_renderCount) - (jint(1)));
	}
label_86:;
	{
	if ((frame[14].i) >= (frame[15].i)) goto label_83;
	}
	{
	LINE_NUMBER(602);
	((func_arc_graphics_Pixmap_draw_arc_graphics_Pixmap_int_int_boolean) ((void **) nullCheck(ctx, (frame[11].o))->vtable)[VTABLE_arc_graphics_Pixmap_draw_arc_graphics_Pixmap_int_int_boolean])(ctx, (frame[11].o), (frame[11].o), (jint(0)), (jint(0)), (jint(1)));
	LINE_NUMBER(601);
	INST_IINC(14, 1);
	goto label_86;
	}
label_83:;
	{
	LINE_NUMBER(605);
	if (((jint)((arc_freetype_FreeTypeFontGenerator$FreeTypeFontParameter *) NULL_CHECK((frame[3].o)))->F_padTop) > 0) goto label_89;
	}
	{
	if (((jint)((arc_freetype_FreeTypeFontGenerator$FreeTypeFontParameter *) NULL_CHECK((frame[3].o)))->F_padLeft) > 0) goto label_89;
	}
	{
	if (((jint)((arc_freetype_FreeTypeFontGenerator$FreeTypeFontParameter *) NULL_CHECK((frame[3].o)))->F_padBottom) > 0) goto label_89;
	}
	{
	if (((jint)((arc_freetype_FreeTypeFontGenerator$FreeTypeFontParameter *) NULL_CHECK((frame[3].o)))->F_padRight) <= 0) goto label_19;
	}
label_89:;
	{
	LINE_NUMBER(606);
	clinit_arc_graphics_Pixmap(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_graphics_Pixmap);
	init_arc_graphics_Pixmap_int_int(ctx, sp[0].o, ((((jint)((arc_graphics_Pixmap *) NULL_CHECK((frame[11].o)))->F_width) + ((jint)((arc_freetype_FreeTypeFontGenerator$FreeTypeFontParameter *) NULL_CHECK((frame[3].o)))->F_padLeft)) + ((jint)((arc_freetype_FreeTypeFontGenerator$FreeTypeFontParameter *) NULL_CHECK((frame[3].o)))->F_padRight)), ((((jint)((arc_graphics_Pixmap *) NULL_CHECK((frame[11].o)))->F_height) + ((jint)((arc_freetype_FreeTypeFontGenerator$FreeTypeFontParameter *) NULL_CHECK((frame[3].o)))->F_padTop)) + ((jint)((arc_freetype_FreeTypeFontGenerator$FreeTypeFontParameter *) NULL_CHECK((frame[3].o)))->F_padBottom)));
	frame[14].o = sp[0].o;
	LINE_NUMBER(608);
	((func_arc_graphics_Pixmap_draw_arc_graphics_Pixmap_int_int_boolean) ((void **) nullCheck(ctx, (frame[14].o))->vtable)[VTABLE_arc_graphics_Pixmap_draw_arc_graphics_Pixmap_int_int_boolean])(ctx, (frame[14].o), (frame[11].o), ((jint)((arc_freetype_FreeTypeFontGenerator$FreeTypeFontParameter *) NULL_CHECK((frame[3].o)))->F_padLeft), ((jint)((arc_freetype_FreeTypeFontGenerator$FreeTypeFontParameter *) NULL_CHECK((frame[3].o)))->F_padTop), (jint(1)));
	LINE_NUMBER(609);
	((func_arc_graphics_Pixmap_dispose) ((void **) nullCheck(ctx, (frame[11].o))->vtable)[VTABLE_arc_graphics_Pixmap_dispose])(ctx, (frame[11].o));
	LINE_NUMBER(610);
	frame[11].o = (frame[14].o);
	}
label_19:;
	{
	LINE_NUMBER(614);
	sp[0].o = (jobject)((func_arc_freetype_FreeType$GlyphSlot_getMetrics_R_arc_freetype_FreeType$GlyphMetrics) ((void **) nullCheck(ctx, (frame[8].o))->vtable)[VTABLE_arc_freetype_FreeType$GlyphSlot_getMetrics_R_arc_freetype_FreeType$GlyphMetrics])(ctx, (frame[8].o));
	frame[12].o = sp[0].o;
	LINE_NUMBER(615);
	clinit_arc_graphics_g2d_Font$Glyph(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_graphics_g2d_Font$Glyph);
	init_arc_graphics_g2d_Font$Glyph(ctx, sp[0].o);
	frame[13].o = sp[0].o;
	LINE_NUMBER(616);
	((arc_graphics_g2d_Font$Glyph *) NULL_CHECK((frame[13].o)))->F_id = (frame[1].i);
	LINE_NUMBER(617);
	((arc_graphics_g2d_Font$Glyph *) NULL_CHECK((frame[13].o)))->F_width = ((jint)((arc_graphics_Pixmap *) NULL_CHECK((frame[11].o)))->F_width);
	LINE_NUMBER(618);
	((arc_graphics_g2d_Font$Glyph *) NULL_CHECK((frame[13].o)))->F_height = ((jint)((arc_graphics_Pixmap *) NULL_CHECK((frame[11].o)))->F_height);
	LINE_NUMBER(619);
	sp[0].o = frame[13].o;
	jint temp0 = (jint)((func_arc_freetype_FreeType$Glyph_getLeft_R_int) ((void **) nullCheck(ctx, (frame[9].o))->vtable)[VTABLE_arc_freetype_FreeType$Glyph_getLeft_R_int])(ctx, (frame[9].o));
	((arc_graphics_g2d_Font$Glyph *) NULL_CHECK(sp[0].o))->F_xoffset = temp0;
	LINE_NUMBER(620);
	if (((jint)((arc_freetype_FreeTypeFontGenerator$FreeTypeFontParameter *) NULL_CHECK((frame[3].o)))->F_flip) == 0) goto label_99;
	}
	{
	LINE_NUMBER(621);
	sp[0].o = frame[13].o;
	jint temp0 = (jint)((func_arc_freetype_FreeType$Glyph_getTop_R_int) ((void **) nullCheck(ctx, (frame[9].o))->vtable)[VTABLE_arc_freetype_FreeType$Glyph_getTop_R_int])(ctx, (frame[9].o));
	((arc_graphics_g2d_Font$Glyph *) NULL_CHECK(sp[0].o))->F_yoffset = ((-temp0) + (jint((frame[5].f))));
	goto label_101;
	}
label_99:;
	{
	LINE_NUMBER(623);
	sp[0].o = frame[13].o;
	jint temp0 = (jint)((arc_graphics_g2d_Font$Glyph *) NULL_CHECK((frame[13].o)))->F_height;
	jint temp1 = (jint)((func_arc_freetype_FreeType$Glyph_getTop_R_int) ((void **) nullCheck(ctx, (frame[9].o))->vtable)[VTABLE_arc_freetype_FreeType$Glyph_getTop_R_int])(ctx, (frame[9].o));
	((arc_graphics_g2d_Font$Glyph *) NULL_CHECK(sp[0].o))->F_yoffset = ((-(temp0 - temp1)) - (jint((frame[5].f))));
	}
label_101:;
	{
	LINE_NUMBER(624);
	sp[0].o = frame[13].o;
	jint temp0 = (jint)((func_arc_freetype_FreeType$GlyphMetrics_getHoriAdvance_R_int) ((void **) nullCheck(ctx, (frame[12].o))->vtable)[VTABLE_arc_freetype_FreeType$GlyphMetrics_getHoriAdvance_R_int])(ctx, (frame[12].o));
	jint temp1 = (jint)SM_arc_freetype_FreeType_toInt_int_R_int(ctx, temp0);
	((arc_graphics_g2d_Font$Glyph *) NULL_CHECK(sp[0].o))->F_xadvance = ((temp1 + (jint(((jfloat)((arc_freetype_FreeTypeFontGenerator$FreeTypeFontParameter *) NULL_CHECK((frame[3].o)))->F_borderWidth)))) + ((jint)((arc_freetype_FreeTypeFontGenerator$FreeTypeFontParameter *) NULL_CHECK((frame[3].o)))->F_spaceX));
	LINE_NUMBER(626);
	if (((jint)((arc_freetype_FreeTypeFontGenerator *) NULL_CHECK((frame[0].o)))->F_bitmapped) == 0) goto label_103;
	}
	{
	LINE_NUMBER(627);
	((func_arc_graphics_Pixmap_fill_int) ((void **) nullCheck(ctx, (frame[11].o))->vtable)[VTABLE_arc_graphics_Pixmap_fill_int])(ctx, (frame[11].o), (clinit_arc_graphics_Color(ctx), (jint)SF_arc_graphics_Color_clearRgba));
	LINE_NUMBER(628);
	sp[0].o = (jobject)((func_arc_freetype_FreeType$Bitmap_getBuffer_R_java_nio_ByteBuffer) ((void **) nullCheck(ctx, (frame[10].o))->vtable)[VTABLE_arc_freetype_FreeType$Bitmap_getBuffer_R_java_nio_ByteBuffer])(ctx, (frame[10].o));
	frame[14].o = sp[0].o;
	LINE_NUMBER(629);
	clinit_arc_graphics_Color(ctx);
	sp[0].o = (jobject)SF_arc_graphics_Color_white;
	jint temp0 = (jint)((func_arc_graphics_Color_abgr_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_Color_abgr_R_int])(ctx, sp[0].o);
	frame[15].i = temp0;
	LINE_NUMBER(630);
	clinit_arc_graphics_Color(ctx);
	sp[0].o = (jobject)SF_arc_graphics_Color_clear;
	jint temp1 = (jint)((func_arc_graphics_Color_abgr_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_Color_abgr_R_int])(ctx, sp[0].o);
	frame[16].i = temp1;
	LINE_NUMBER(631);
	frame[17].i = (jint(0));
	}
label_109:;
	{
	if ((frame[17].i) >= ((jint)((arc_graphics_g2d_Font$Glyph *) NULL_CHECK((frame[13].o)))->F_height)) goto label_103;
	}
	{
	LINE_NUMBER(632);
	jint temp0 = frame[17].i;
	jint temp1 = (jint)((func_arc_freetype_FreeType$Bitmap_getPitch_R_int) ((void **) nullCheck(ctx, (frame[10].o))->vtable)[VTABLE_arc_freetype_FreeType$Bitmap_getPitch_R_int])(ctx, (frame[10].o));
	frame[18].i = (temp0 * temp1);
	LINE_NUMBER(633);
	frame[19].i = (jint(0));
	}
label_112:;
	{
	if ((frame[19].i) >= (((jint)((arc_graphics_g2d_Font$Glyph *) NULL_CHECK((frame[13].o)))->F_width) + ((jint)((arc_graphics_g2d_Font$Glyph *) NULL_CHECK((frame[13].o)))->F_xoffset))) goto label_113;
	}
	{
	LINE_NUMBER(634);
	jint temp0 = (jint)((func_java_nio_ByteBuffer_get_int_R_byte) ((void **) nullCheck(ctx, (frame[14].o))->vtable)[VTABLE_java_nio_ByteBuffer_get_int_R_byte])(ctx, (frame[14].o), ((frame[18].i) + ((frame[19].i) / (8))));
	frame[20].i = ((bit_cast<jint>(bit_cast<uint32_t>(temp0) >> ((7) - ((frame[19].i) % (8))))) & (jint(1)));
	LINE_NUMBER(635);
	sp[0].o = frame[11].o;
	jint temp1 = frame[19].i;
	jint temp2 = frame[17].i;
	sp[1].i = temp1;
	sp[2].i = temp2;
	sp += 3;
	if ((frame[20].i) != (jint(1))) goto label_116;
	}
	INST_ILOAD(15);
	goto label_117;
label_116:;
	INST_ILOAD(16);
label_117:;
	{
	sp -= 4;
	((func_arc_graphics_Pixmap_set_int_int_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_Pixmap_set_int_int_int])(ctx, sp[0].o, sp[1].i, sp[2].i, sp[3].i);
	LINE_NUMBER(633);
	INST_IINC(19, 1);
	goto label_112;
	}
label_113:;
	{
	LINE_NUMBER(631);
	INST_IINC(17, 1);
	goto label_109;
	}
label_103:;
	{
	LINE_NUMBER(640);
	sp[0].o = (jobject)((func_arc_graphics_g2d_PixmapPacker_pack_arc_graphics_Pixmap_R_arc_math_geom_Rect) ((void **) nullCheck(ctx, (frame[6].o))->vtable)[VTABLE_arc_graphics_g2d_PixmapPacker_pack_arc_graphics_Pixmap_R_arc_math_geom_Rect])(ctx, (frame[6].o), (frame[11].o));
	frame[14].o = sp[0].o;
	LINE_NUMBER(641);
	sp[0].o = frame[13].o;
	sp[1].o = (jobject)((func_arc_graphics_g2d_PixmapPacker_getPages_R_arc_struct_Seq) ((void **) nullCheck(ctx, (frame[6].o))->vtable)[VTABLE_arc_graphics_g2d_PixmapPacker_getPages_R_arc_struct_Seq])(ctx, (frame[6].o));
	((arc_graphics_g2d_Font$Glyph *) NULL_CHECK(sp[0].o))->F_page = (((jint)((arc_struct_Seq *) NULL_CHECK(sp[1].o))->F_size) - (jint(1)));
	LINE_NUMBER(642);
	((arc_graphics_g2d_Font$Glyph *) NULL_CHECK((frame[13].o)))->F_srcX = (jint(((jfloat)((arc_math_geom_Rect *) NULL_CHECK((frame[14].o)))->F_x)));
	LINE_NUMBER(643);
	((arc_graphics_g2d_Font$Glyph *) NULL_CHECK((frame[13].o)))->F_srcY = (jint(((jfloat)((arc_math_geom_Rect *) NULL_CHECK((frame[14].o)))->F_y)));
	LINE_NUMBER(646);
	if (((jint)((arc_freetype_FreeTypeFontGenerator$FreeTypeFontParameter *) NULL_CHECK((frame[3].o)))->F_incremental) == 0) goto label_123;
	}
	{
	sp[0].o = (jobject)((arc_freetype_FreeTypeFontGenerator$FreeTypeFontData *) NULL_CHECK((frame[2].o)))->F_regions;
	if (sp[0].o == nullptr) goto label_123;
	}
	{
	sp[0].o = (jobject)((arc_freetype_FreeTypeFontGenerator$FreeTypeFontData *) NULL_CHECK((frame[2].o)))->F_regions;
	if (((jint)((arc_struct_Seq *) NULL_CHECK(sp[0].o))->F_size) > ((jint)((arc_graphics_g2d_Font$Glyph *) NULL_CHECK((frame[13].o)))->F_page)) goto label_123;
	}
	{
	LINE_NUMBER(647);
	sp[0].o = frame[6].o;
	sp[1].o = (jobject)((arc_freetype_FreeTypeFontGenerator$FreeTypeFontData *) NULL_CHECK((frame[2].o)))->F_regions;
	sp[2].o = (jobject)((arc_freetype_FreeTypeFontGenerator$FreeTypeFontParameter *) NULL_CHECK((frame[3].o)))->F_minFilter;
	sp[3].o = (jobject)((arc_freetype_FreeTypeFontGenerator$FreeTypeFontParameter *) NULL_CHECK((frame[3].o)))->F_magFilter;
	((func_arc_graphics_g2d_PixmapPacker_updateTextureRegions_arc_struct_Seq_arc_graphics_Texture$TextureFilter_arc_graphics_Texture$TextureFilter_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_g2d_PixmapPacker_updateTextureRegions_arc_struct_Seq_arc_graphics_Texture$TextureFilter_arc_graphics_Texture$TextureFilter_boolean])(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o, ((jint)((arc_freetype_FreeTypeFontGenerator$FreeTypeFontParameter *) NULL_CHECK((frame[3].o)))->F_genMipMaps));
	}
label_123:;
	{
	LINE_NUMBER(649);
	((func_arc_graphics_Pixmap_dispose) ((void **) nullCheck(ctx, (frame[11].o))->vtable)[VTABLE_arc_graphics_Pixmap_dispose])(ctx, (frame[11].o));
	LINE_NUMBER(650);
	((func_arc_freetype_FreeType$Glyph_dispose) ((void **) nullCheck(ctx, (frame[9].o))->vtable)[VTABLE_arc_freetype_FreeType$Glyph_dispose])(ctx, (frame[9].o));
	LINE_NUMBER(652);
	popStackFrame(ctx);
	return (frame[13].o);
	}

	popStackFrame(ctx);
}

void M_arc_freetype_FreeTypeFontGenerator_dispose(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/freetype/FreeTypeFontGenerator:dispose", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(658);
	sp[0].o = (jobject)((arc_freetype_FreeTypeFontGenerator *) NULL_CHECK((frame[0].o)))->F_face;
	((func_arc_freetype_FreeType$Face_dispose) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_freetype_FreeType$Face_dispose])(ctx, sp[0].o);
	LINE_NUMBER(659);
	sp[0].o = (jobject)((arc_freetype_FreeTypeFontGenerator *) NULL_CHECK((frame[0].o)))->F_library;
	((func_arc_freetype_FreeType$Library_dispose) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_freetype_FreeType$Library_dispose])(ctx, sp[0].o);
	LINE_NUMBER(660);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void clinit_arc_freetype_FreeTypeFontGenerator(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	SF_arc_freetype_FreeTypeFontGenerator_DEFAULT_CHARS = ((jobject) createStringLiteral(ctx, u8"\u0000ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz1234567890\"!`?'.,;:()[]{}<>|/@\\^$\u20ac-%+=#_&~*\u0080\u0081\u0082\u0083\u0084\u0085\u0086\u0087\u0088\u0089\u008a\u008b\u008c\u008d\u008e\u008f\u0090\u0091\u0092\u0093\u0094\u0095\u0096\u0097\u0098\u0099\u009a\u009b\u009c\u009d\u009e\u009f\u00a0\u00a1\u00a2\u00a3\u00a4\u00a5\u00a6\u00a7\u00a8\u00a9\u00aa\u00ab\u00ac\u00ad\u00ae\u00af\u00b0\u00b1\u00b2\u00b3\u00b4\u00b5\u00b6\u00b7\u00b8\u00b9\u00ba\u00bb\u00bc\u00bd\u00be\u00bf\u00c0\u00c1\u00c2\u00c3\u00c4\u00c5\u00c6\u00c7\u00c8\u00c9\u00ca\u00cb\u00cc\u00cd\u00ce\u00cf\u00d0\u00d1\u00d2\u00d3\u00d4\u00d5\u00d6\u00d7\u00d8\u00d9\u00da\u00db\u00dc\u00dd\u00de\u00df\u00e0\u00e1\u00e2\u00e3\u00e4\u00e5\u00e6\u00e7\u00e8\u00e9\u00ea\u00eb\u00ec\u00ed\u00ee\u00ef\u00f0\u00f1\u00f2\u00f3\u00f4\u00f5\u00f6\u00f7\u00f8\u00f9\u00fa\u00fb\u00fc\u00fd\u00fe\u00ff"_j));
	SF_arc_freetype_FreeTypeFontGenerator_NO_MAXIMUM = jint(-1);
	jtype frame[1];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/freetype/FreeTypeFontGenerator:<clinit>", 1 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_freetype_FreeTypeFontGenerator(ctx);
	{
	LINE_NUMBER(53);
	clinit_arc_freetype_FreeTypeFontGenerator(ctx);
	SF_arc_freetype_FreeTypeFontGenerator_maxTextureSize = (1024);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void *vtable_arc_freetype_FreeTypeFontGenerator[] {
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
	(void *) M_arc_freetype_FreeTypeFontGenerator_dispose,
	(void *) M_arc_util_Disposable_isDisposed_R_boolean,
	(void *) M_arc_freetype_FreeTypeFontGenerator_getLoadingFlags_arc_freetype_FreeTypeFontGenerator$FreeTypeFontParameter_R_int,
	(void *) M_arc_freetype_FreeTypeFontGenerator_loadChar_int_R_boolean,
	(void *) M_arc_freetype_FreeTypeFontGenerator_loadChar_int_int_R_boolean,
	(void *) M_arc_freetype_FreeTypeFontGenerator_checkForBitmapFont_R_boolean,
	(void *) M_arc_freetype_FreeTypeFontGenerator_generateFont_arc_freetype_FreeTypeFontGenerator$FreeTypeFontParameter_R_arc_graphics_g2d_Font,
	(void *) M_arc_freetype_FreeTypeFontGenerator_generateFont_arc_freetype_FreeTypeFontGenerator$FreeTypeFontParameter_arc_freetype_FreeTypeFontGenerator$FreeTypeFontData_R_arc_graphics_g2d_Font,
	(void *) M_arc_freetype_FreeTypeFontGenerator_scaleForPixelHeight_int_R_int,
	(void *) M_arc_freetype_FreeTypeFontGenerator_scaleForPixelWidth_int_int_R_int,
	(void *) M_arc_freetype_FreeTypeFontGenerator_scaleToFitSquare_int_int_int_R_int,
	(void *) M_arc_freetype_FreeTypeFontGenerator_generateGlyphAndBitmap_int_int_boolean_R_arc_freetype_FreeTypeFontGenerator$GlyphAndBitmap,
	(void *) M_arc_freetype_FreeTypeFontGenerator_generateData_int_R_arc_freetype_FreeTypeFontGenerator$FreeTypeFontData,
	(void *) M_arc_freetype_FreeTypeFontGenerator_generateData_arc_freetype_FreeTypeFontGenerator$FreeTypeFontParameter_R_arc_freetype_FreeTypeFontGenerator$FreeTypeFontData,
	(void *) M_arc_freetype_FreeTypeFontGenerator_setPixelSizes_int_int,
	(void *) M_arc_freetype_FreeTypeFontGenerator_generateData_arc_freetype_FreeTypeFontGenerator$FreeTypeFontParameter_arc_freetype_FreeTypeFontGenerator$FreeTypeFontData_R_arc_freetype_FreeTypeFontGenerator$FreeTypeFontData,
	(void *) M_arc_freetype_FreeTypeFontGenerator_createGlyph_char_arc_freetype_FreeTypeFontGenerator$FreeTypeFontData_arc_freetype_FreeTypeFontGenerator$FreeTypeFontParameter_arc_freetype_FreeType$Stroker_float_arc_graphics_g2d_PixmapPacker_R_arc_graphics_g2d_Font$Glyph,
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
	{ "getLoadingFlags", "(Larc/freetype/FreeTypeFontGenerator$FreeTypeFontParameter;)I" },
	{ "loadChar", "(I)Z" },
	{ "loadChar", "(II)Z" },
	{ "checkForBitmapFont", "()Z" },
	{ "generateFont", "(Larc/freetype/FreeTypeFontGenerator$FreeTypeFontParameter;)Larc/graphics/g2d/Font;" },
	{ "generateFont", "(Larc/freetype/FreeTypeFontGenerator$FreeTypeFontParameter;Larc/freetype/FreeTypeFontGenerator$FreeTypeFontData;)Larc/graphics/g2d/Font;" },
	{ "scaleForPixelHeight", "(I)I" },
	{ "scaleForPixelWidth", "(II)I" },
	{ "scaleToFitSquare", "(III)I" },
	{ "generateGlyphAndBitmap", "(IIZ)Larc/freetype/FreeTypeFontGenerator$GlyphAndBitmap;" },
	{ "generateData", "(I)Larc/freetype/FreeTypeFontGenerator$FreeTypeFontData;" },
	{ "generateData", "(Larc/freetype/FreeTypeFontGenerator$FreeTypeFontParameter;)Larc/freetype/FreeTypeFontGenerator$FreeTypeFontData;" },
	{ "setPixelSizes", "(II)V" },
	{ "generateData", "(Larc/freetype/FreeTypeFontGenerator$FreeTypeFontParameter;Larc/freetype/FreeTypeFontGenerator$FreeTypeFontData;)Larc/freetype/FreeTypeFontGenerator$FreeTypeFontData;" },
	{ "createGlyph", "(CLarc/freetype/FreeTypeFontGenerator$FreeTypeFontData;Larc/freetype/FreeTypeFontGenerator$FreeTypeFontParameter;Larc/freetype/FreeType$Stroker;FLarc/graphics/g2d/PixmapPacker;)Larc/graphics/g2d/Font$Glyph;" },
};

static jclass interfaces[] { &class_arc_util_Disposable, };

static jclass innerClasses[] {
	&class_arc_freetype_FreeTypeFontGenerator$FreeTypeFontParameter,
	&class_arc_freetype_FreeTypeFontGenerator$Hinting,
	&class_arc_freetype_FreeTypeFontGenerator$FreeTypeFontData,
	&class_arc_freetype_FreeTypeFontGenerator$GlyphAndBitmap,
};

static FieldMetadata fields[] {
	{ "DEFAULT_CHARS", &class_java_lang_String, (intptr_t) &SF_arc_freetype_FreeTypeFontGenerator_DEFAULT_CHARS, "Ljava/lang/String;", 25 },
	{ "NO_MAXIMUM", &class_int, (intptr_t) &SF_arc_freetype_FreeTypeFontGenerator_NO_MAXIMUM, "I", 25 },
	{ "maxTextureSize", &class_int, (intptr_t) &SF_arc_freetype_FreeTypeFontGenerator_maxTextureSize, "I", 10 },
	{ "library", &class_arc_freetype_FreeType$Library, offsetof(arc_freetype_FreeTypeFontGenerator, F_library), "Larc/freetype/FreeType$Library;", 16 },
	{ "face", &class_arc_freetype_FreeType$Face, offsetof(arc_freetype_FreeTypeFontGenerator, F_face), "Larc/freetype/FreeType$Face;", 16 },
	{ "name", &class_java_lang_String, offsetof(arc_freetype_FreeTypeFontGenerator, F_name), "Ljava/lang/String;", 16 },
	{ "bitmapped", &class_boolean, offsetof(arc_freetype_FreeTypeFontGenerator, F_bitmapped), "Z", 0 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_arc_freetype_FreeTypeFontGenerator_arc_files_Fi, 0, "(Larc/files/Fi;)V", 1 },
	{ "<init>", (intptr_t) init_arc_freetype_FreeTypeFontGenerator_arc_files_Fi_int, 0, "(Larc/files/Fi;I)V", 1 },
	{ "getMaxTextureSize", (intptr_t) SM_arc_freetype_FreeTypeFontGenerator_getMaxTextureSize_R_int, 0, "()I", 9 },
	{ "setMaxTextureSize", (intptr_t) SM_arc_freetype_FreeTypeFontGenerator_setMaxTextureSize_int, 0, "(I)V", 9 },
	{ "getLoadingFlags", (intptr_t) M_arc_freetype_FreeTypeFontGenerator_getLoadingFlags_arc_freetype_FreeTypeFontGenerator$FreeTypeFontParameter_R_int, VTABLE_arc_freetype_FreeTypeFontGenerator_getLoadingFlags_arc_freetype_FreeTypeFontGenerator$FreeTypeFontParameter_R_int, "(Larc/freetype/FreeTypeFontGenerator$FreeTypeFontParameter;)I", 2 },
	{ "loadChar", (intptr_t) M_arc_freetype_FreeTypeFontGenerator_loadChar_int_R_boolean, VTABLE_arc_freetype_FreeTypeFontGenerator_loadChar_int_R_boolean, "(I)Z", 2 },
	{ "loadChar", (intptr_t) M_arc_freetype_FreeTypeFontGenerator_loadChar_int_int_R_boolean, VTABLE_arc_freetype_FreeTypeFontGenerator_loadChar_int_int_R_boolean, "(II)Z", 2 },
	{ "checkForBitmapFont", (intptr_t) M_arc_freetype_FreeTypeFontGenerator_checkForBitmapFont_R_boolean, VTABLE_arc_freetype_FreeTypeFontGenerator_checkForBitmapFont_R_boolean, "()Z", 2 },
	{ "generateFont", (intptr_t) M_arc_freetype_FreeTypeFontGenerator_generateFont_arc_freetype_FreeTypeFontGenerator$FreeTypeFontParameter_R_arc_graphics_g2d_Font, VTABLE_arc_freetype_FreeTypeFontGenerator_generateFont_arc_freetype_FreeTypeFontGenerator$FreeTypeFontParameter_R_arc_graphics_g2d_Font, "(Larc/freetype/FreeTypeFontGenerator$FreeTypeFontParameter;)Larc/graphics/g2d/Font;", 1 },
	{ "generateFont", (intptr_t) M_arc_freetype_FreeTypeFontGenerator_generateFont_arc_freetype_FreeTypeFontGenerator$FreeTypeFontParameter_arc_freetype_FreeTypeFontGenerator$FreeTypeFontData_R_arc_graphics_g2d_Font, VTABLE_arc_freetype_FreeTypeFontGenerator_generateFont_arc_freetype_FreeTypeFontGenerator$FreeTypeFontParameter_arc_freetype_FreeTypeFontGenerator$FreeTypeFontData_R_arc_graphics_g2d_Font, "(Larc/freetype/FreeTypeFontGenerator$FreeTypeFontParameter;Larc/freetype/FreeTypeFontGenerator$FreeTypeFontData;)Larc/graphics/g2d/Font;", 1 },
	{ "scaleForPixelHeight", (intptr_t) M_arc_freetype_FreeTypeFontGenerator_scaleForPixelHeight_int_R_int, VTABLE_arc_freetype_FreeTypeFontGenerator_scaleForPixelHeight_int_R_int, "(I)I", 1 },
	{ "scaleForPixelWidth", (intptr_t) M_arc_freetype_FreeTypeFontGenerator_scaleForPixelWidth_int_int_R_int, VTABLE_arc_freetype_FreeTypeFontGenerator_scaleForPixelWidth_int_int_R_int, "(II)I", 1 },
	{ "scaleToFitSquare", (intptr_t) M_arc_freetype_FreeTypeFontGenerator_scaleToFitSquare_int_int_int_R_int, VTABLE_arc_freetype_FreeTypeFontGenerator_scaleToFitSquare_int_int_int_R_int, "(III)I", 1 },
	{ "generateGlyphAndBitmap", (intptr_t) M_arc_freetype_FreeTypeFontGenerator_generateGlyphAndBitmap_int_int_boolean_R_arc_freetype_FreeTypeFontGenerator$GlyphAndBitmap, VTABLE_arc_freetype_FreeTypeFontGenerator_generateGlyphAndBitmap_int_int_boolean_R_arc_freetype_FreeTypeFontGenerator$GlyphAndBitmap, "(IIZ)Larc/freetype/FreeTypeFontGenerator$GlyphAndBitmap;", 1 },
	{ "generateData", (intptr_t) M_arc_freetype_FreeTypeFontGenerator_generateData_int_R_arc_freetype_FreeTypeFontGenerator$FreeTypeFontData, VTABLE_arc_freetype_FreeTypeFontGenerator_generateData_int_R_arc_freetype_FreeTypeFontGenerator$FreeTypeFontData, "(I)Larc/freetype/FreeTypeFontGenerator$FreeTypeFontData;", 1 },
	{ "generateData", (intptr_t) M_arc_freetype_FreeTypeFontGenerator_generateData_arc_freetype_FreeTypeFontGenerator$FreeTypeFontParameter_R_arc_freetype_FreeTypeFontGenerator$FreeTypeFontData, VTABLE_arc_freetype_FreeTypeFontGenerator_generateData_arc_freetype_FreeTypeFontGenerator$FreeTypeFontParameter_R_arc_freetype_FreeTypeFontGenerator$FreeTypeFontData, "(Larc/freetype/FreeTypeFontGenerator$FreeTypeFontParameter;)Larc/freetype/FreeTypeFontGenerator$FreeTypeFontData;", 1 },
	{ "setPixelSizes", (intptr_t) M_arc_freetype_FreeTypeFontGenerator_setPixelSizes_int_int, VTABLE_arc_freetype_FreeTypeFontGenerator_setPixelSizes_int_int, "(II)V", 0 },
	{ "generateData", (intptr_t) M_arc_freetype_FreeTypeFontGenerator_generateData_arc_freetype_FreeTypeFontGenerator$FreeTypeFontParameter_arc_freetype_FreeTypeFontGenerator$FreeTypeFontData_R_arc_freetype_FreeTypeFontGenerator$FreeTypeFontData, VTABLE_arc_freetype_FreeTypeFontGenerator_generateData_arc_freetype_FreeTypeFontGenerator$FreeTypeFontParameter_arc_freetype_FreeTypeFontGenerator$FreeTypeFontData_R_arc_freetype_FreeTypeFontGenerator$FreeTypeFontData, "(Larc/freetype/FreeTypeFontGenerator$FreeTypeFontParameter;Larc/freetype/FreeTypeFontGenerator$FreeTypeFontData;)Larc/freetype/FreeTypeFontGenerator$FreeTypeFontData;", 1 },
	{ "createGlyph", (intptr_t) M_arc_freetype_FreeTypeFontGenerator_createGlyph_char_arc_freetype_FreeTypeFontGenerator$FreeTypeFontData_arc_freetype_FreeTypeFontGenerator$FreeTypeFontParameter_arc_freetype_FreeType$Stroker_float_arc_graphics_g2d_PixmapPacker_R_arc_graphics_g2d_Font$Glyph, VTABLE_arc_freetype_FreeTypeFontGenerator_createGlyph_char_arc_freetype_FreeTypeFontGenerator$FreeTypeFontData_arc_freetype_FreeTypeFontGenerator$FreeTypeFontParameter_arc_freetype_FreeType$Stroker_float_arc_graphics_g2d_PixmapPacker_R_arc_graphics_g2d_Font$Glyph, "(CLarc/freetype/FreeTypeFontGenerator$FreeTypeFontData;Larc/freetype/FreeTypeFontGenerator$FreeTypeFontParameter;Larc/freetype/FreeType$Stroker;FLarc/graphics/g2d/PixmapPacker;)Larc/graphics/g2d/Font$Glyph;", 0 },
	{ "dispose", (intptr_t) M_arc_freetype_FreeTypeFontGenerator_dispose, VTABLE_arc_freetype_FreeTypeFontGenerator_dispose, "()V", 1 },
	{ "<clinit>", (intptr_t) clinit_arc_freetype_FreeTypeFontGenerator, 0, "()V", 8 },
};

Class class_arc_freetype_FreeTypeFontGenerator{
		.nativeName = (intptr_t) "arc/freetype/FreeTypeFontGenerator",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(arc_freetype_FreeTypeFontGenerator),
		.classVtable = (intptr_t) vtable_arc_freetype_FreeTypeFontGenerator,
		.staticInitializer = (intptr_t) clinit_arc_freetype_FreeTypeFontGenerator,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_arc_freetype_FreeTypeFontGenerator,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 4,
		.nativeInnerClasses = (intptr_t) innerClasses,
		.access = 33,
		.interfaceCount = 1,
		.nativeInterfaces = (intptr_t) interfaces,
		.fieldCount = 7,
		.nativeFields = (intptr_t) fields,
		.methodCount = 21,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 28,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_arc_freetype_FreeTypeFontGenerator = registerClass(&class_arc_freetype_FreeTypeFontGenerator);

}
