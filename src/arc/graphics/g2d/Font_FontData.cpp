#include "arc/graphics/g2d/Font_FontData.h"
#include "java/lang/Integer.h"
#include "java/lang/StringBuilder.h"
#include "arc/graphics/g2d/Font.h"
#include "arc/graphics/g2d/TextureAtlas_AtlasRegion.h"
#include "arc/struct/FloatSeq.h"
#include "java/util/regex/Matcher.h"
#include "arc/files/Fi.h"
#include "arc/graphics/g2d/Font_Glyph.h"
#include "java/io/InputStream.h"
#include "java/lang/String.h"
#include "java/util/regex/Pattern.h"
#include "java/io/InputStreamReader.h"
#include "arc/struct/Seq.h"
#include "java/io/Closeable.h"
#include "java/io/Reader.h"
#include "java/lang/Throwable.h"
#include "java/util/StringTokenizer.h"
#include "java/lang/Math.h"
#include "java/lang/Exception.h"
#include "arc/graphics/g2d/TextureRegion.h"
#include "arc/graphics/g2d/Font_FontData.h"
#include "java/lang/IllegalArgumentException.h"
#include "java/io/BufferedReader.h"
#include "arc/graphics/Texture.h"
#include "java/lang/CharSequence.h"
#include "arc/graphics/g2d/GlyphLayout_GlyphRun.h"
#include "java/lang/Object.h"
#include "java/lang/NumberFormatException.h"
#include "arc/util/ArcRuntimeException.h"
#include "java/lang/IllegalStateException.h"
#include "arc/util/io/Streams.h"

extern "C" {


void mark_arc_graphics_g2d_Font$FontData(jobject object, jint mark, jint depth) {
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
	auto self = (arc_graphics_g2d_Font$FontData *) object;
	if (self->F_glyphs)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_glyphs)->clazz)->markFunction)((jobject) self->F_glyphs, mark, depth + 1);
	if (self->F_imagePaths)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_imagePaths)->clazz)->markFunction)((jobject) self->F_imagePaths, mark, depth + 1);
	if (self->F_fontFile)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_fontFile)->clazz)->markFunction)((jobject) self->F_fontFile, mark, depth + 1);
	if (self->F_missingGlyph)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_missingGlyph)->clazz)->markFunction)((jobject) self->F_missingGlyph, mark, depth + 1);
	if (self->F_breakChars)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_breakChars)->clazz)->markFunction)((jobject) self->F_breakChars, mark, depth + 1);
	if (self->F_xChars)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_xChars)->clazz)->markFunction)((jobject) self->F_xChars, mark, depth + 1);
	if (self->F_capChars)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_capChars)->clazz)->markFunction)((jobject) self->F_capChars, mark, depth + 1);
}

void clinit_arc_graphics_g2d_Font$FontData(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
}

void init_arc_graphics_g2d_Font$FontData(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/g2d/Font$FontData:<init>", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_graphics_g2d_Font$FontData(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(549);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(500);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)createArray(ctx, getArrayClass(&class_arc_graphics_g2d_Font$Glyph, 1), (128));
	((arc_graphics_g2d_Font$FontData *) NULL_CHECK(sp[0].o))->F_glyphs = (jref) sp[1].o;
	LINE_NUMBER(512);
	((arc_graphics_g2d_Font$FontData *) NULL_CHECK((frame[0].o)))->F_capHeight = (jfloat(1));
	LINE_NUMBER(523);
	((arc_graphics_g2d_Font$FontData *) NULL_CHECK((frame[0].o)))->F_blankLineScale = (jfloat(1));
	LINE_NUMBER(524);
	((arc_graphics_g2d_Font$FontData *) NULL_CHECK((frame[0].o)))->F_scaleX = (jfloat(1));
	((arc_graphics_g2d_Font$FontData *) NULL_CHECK((frame[0].o)))->F_scaleY = (jfloat(1));
	LINE_NUMBER(537);
	((arc_graphics_g2d_Font$FontData *) NULL_CHECK((frame[0].o)))->F_xHeight = (jfloat(1));
	LINE_NUMBER(541);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject) createArray(ctx, &class_char, (14));
	ARRAY_ACCESS(jchar, sp[1].o, (jint(0))) = (120);
	ARRAY_ACCESS(jchar, sp[1].o, (jint(1))) = (101);
	ARRAY_ACCESS(jchar, sp[1].o, (jint(2))) = (97);
	ARRAY_ACCESS(jchar, sp[1].o, (jint(3))) = (111);
	ARRAY_ACCESS(jchar, sp[1].o, (jint(4))) = (110);
	ARRAY_ACCESS(jchar, sp[1].o, (jint(5))) = (115);
	ARRAY_ACCESS(jchar, sp[1].o, (6)) = (114);
	ARRAY_ACCESS(jchar, sp[1].o, (7)) = (99);
	ARRAY_ACCESS(jchar, sp[1].o, (8)) = (117);
	ARRAY_ACCESS(jchar, sp[1].o, (9)) = (109);
	ARRAY_ACCESS(jchar, sp[1].o, (10)) = (118);
	ARRAY_ACCESS(jchar, sp[1].o, (11)) = (119);
	ARRAY_ACCESS(jchar, sp[1].o, (12)) = (122);
	ARRAY_ACCESS(jchar, sp[1].o, (13)) = (jint(61788));
	((arc_graphics_g2d_Font$FontData *) NULL_CHECK(sp[0].o))->F_xChars = (jref) sp[1].o;
	LINE_NUMBER(542);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject) createArray(ctx, &class_char, (26));
	ARRAY_ACCESS(jchar, sp[1].o, (jint(0))) = (77);
	ARRAY_ACCESS(jchar, sp[1].o, (jint(1))) = (78);
	ARRAY_ACCESS(jchar, sp[1].o, (jint(2))) = (66);
	ARRAY_ACCESS(jchar, sp[1].o, (jint(3))) = (68);
	ARRAY_ACCESS(jchar, sp[1].o, (jint(4))) = (67);
	ARRAY_ACCESS(jchar, sp[1].o, (jint(5))) = (69);
	ARRAY_ACCESS(jchar, sp[1].o, (6)) = (70);
	ARRAY_ACCESS(jchar, sp[1].o, (7)) = (75);
	ARRAY_ACCESS(jchar, sp[1].o, (8)) = (65);
	ARRAY_ACCESS(jchar, sp[1].o, (9)) = (71);
	ARRAY_ACCESS(jchar, sp[1].o, (10)) = (72);
	ARRAY_ACCESS(jchar, sp[1].o, (11)) = (73);
	ARRAY_ACCESS(jchar, sp[1].o, (12)) = (74);
	ARRAY_ACCESS(jchar, sp[1].o, (13)) = (76);
	ARRAY_ACCESS(jchar, sp[1].o, (14)) = (79);
	ARRAY_ACCESS(jchar, sp[1].o, (15)) = (80);
	ARRAY_ACCESS(jchar, sp[1].o, (16)) = (81);
	ARRAY_ACCESS(jchar, sp[1].o, (17)) = (82);
	ARRAY_ACCESS(jchar, sp[1].o, (18)) = (83);
	ARRAY_ACCESS(jchar, sp[1].o, (19)) = (84);
	ARRAY_ACCESS(jchar, sp[1].o, (20)) = (85);
	ARRAY_ACCESS(jchar, sp[1].o, (21)) = (86);
	ARRAY_ACCESS(jchar, sp[1].o, (22)) = (87);
	ARRAY_ACCESS(jchar, sp[1].o, (23)) = (88);
	ARRAY_ACCESS(jchar, sp[1].o, (24)) = (89);
	ARRAY_ACCESS(jchar, sp[1].o, (25)) = (90);
	((arc_graphics_g2d_Font$FontData *) NULL_CHECK(sp[0].o))->F_capChars = (jref) sp[1].o;
	LINE_NUMBER(550);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_arc_graphics_g2d_Font$FontData_arc_files_Fi_boolean(jcontext ctx, jobject self, jobject param0, jbool param1) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/g2d/Font$FontData:<init>", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_graphics_g2d_Font$FontData(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(552);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(500);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)createArray(ctx, getArrayClass(&class_arc_graphics_g2d_Font$Glyph, 1), (128));
	((arc_graphics_g2d_Font$FontData *) NULL_CHECK(sp[0].o))->F_glyphs = (jref) sp[1].o;
	LINE_NUMBER(512);
	((arc_graphics_g2d_Font$FontData *) NULL_CHECK((frame[0].o)))->F_capHeight = (jfloat(1));
	LINE_NUMBER(523);
	((arc_graphics_g2d_Font$FontData *) NULL_CHECK((frame[0].o)))->F_blankLineScale = (jfloat(1));
	LINE_NUMBER(524);
	((arc_graphics_g2d_Font$FontData *) NULL_CHECK((frame[0].o)))->F_scaleX = (jfloat(1));
	((arc_graphics_g2d_Font$FontData *) NULL_CHECK((frame[0].o)))->F_scaleY = (jfloat(1));
	LINE_NUMBER(537);
	((arc_graphics_g2d_Font$FontData *) NULL_CHECK((frame[0].o)))->F_xHeight = (jfloat(1));
	LINE_NUMBER(541);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject) createArray(ctx, &class_char, (14));
	ARRAY_ACCESS(jchar, sp[1].o, (jint(0))) = (120);
	ARRAY_ACCESS(jchar, sp[1].o, (jint(1))) = (101);
	ARRAY_ACCESS(jchar, sp[1].o, (jint(2))) = (97);
	ARRAY_ACCESS(jchar, sp[1].o, (jint(3))) = (111);
	ARRAY_ACCESS(jchar, sp[1].o, (jint(4))) = (110);
	ARRAY_ACCESS(jchar, sp[1].o, (jint(5))) = (115);
	ARRAY_ACCESS(jchar, sp[1].o, (6)) = (114);
	ARRAY_ACCESS(jchar, sp[1].o, (7)) = (99);
	ARRAY_ACCESS(jchar, sp[1].o, (8)) = (117);
	ARRAY_ACCESS(jchar, sp[1].o, (9)) = (109);
	ARRAY_ACCESS(jchar, sp[1].o, (10)) = (118);
	ARRAY_ACCESS(jchar, sp[1].o, (11)) = (119);
	ARRAY_ACCESS(jchar, sp[1].o, (12)) = (122);
	ARRAY_ACCESS(jchar, sp[1].o, (13)) = (jint(61788));
	((arc_graphics_g2d_Font$FontData *) NULL_CHECK(sp[0].o))->F_xChars = (jref) sp[1].o;
	LINE_NUMBER(542);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject) createArray(ctx, &class_char, (26));
	ARRAY_ACCESS(jchar, sp[1].o, (jint(0))) = (77);
	ARRAY_ACCESS(jchar, sp[1].o, (jint(1))) = (78);
	ARRAY_ACCESS(jchar, sp[1].o, (jint(2))) = (66);
	ARRAY_ACCESS(jchar, sp[1].o, (jint(3))) = (68);
	ARRAY_ACCESS(jchar, sp[1].o, (jint(4))) = (67);
	ARRAY_ACCESS(jchar, sp[1].o, (jint(5))) = (69);
	ARRAY_ACCESS(jchar, sp[1].o, (6)) = (70);
	ARRAY_ACCESS(jchar, sp[1].o, (7)) = (75);
	ARRAY_ACCESS(jchar, sp[1].o, (8)) = (65);
	ARRAY_ACCESS(jchar, sp[1].o, (9)) = (71);
	ARRAY_ACCESS(jchar, sp[1].o, (10)) = (72);
	ARRAY_ACCESS(jchar, sp[1].o, (11)) = (73);
	ARRAY_ACCESS(jchar, sp[1].o, (12)) = (74);
	ARRAY_ACCESS(jchar, sp[1].o, (13)) = (76);
	ARRAY_ACCESS(jchar, sp[1].o, (14)) = (79);
	ARRAY_ACCESS(jchar, sp[1].o, (15)) = (80);
	ARRAY_ACCESS(jchar, sp[1].o, (16)) = (81);
	ARRAY_ACCESS(jchar, sp[1].o, (17)) = (82);
	ARRAY_ACCESS(jchar, sp[1].o, (18)) = (83);
	ARRAY_ACCESS(jchar, sp[1].o, (19)) = (84);
	ARRAY_ACCESS(jchar, sp[1].o, (20)) = (85);
	ARRAY_ACCESS(jchar, sp[1].o, (21)) = (86);
	ARRAY_ACCESS(jchar, sp[1].o, (22)) = (87);
	ARRAY_ACCESS(jchar, sp[1].o, (23)) = (88);
	ARRAY_ACCESS(jchar, sp[1].o, (24)) = (89);
	ARRAY_ACCESS(jchar, sp[1].o, (25)) = (90);
	((arc_graphics_g2d_Font$FontData *) NULL_CHECK(sp[0].o))->F_capChars = (jref) sp[1].o;
	LINE_NUMBER(553);
	((arc_graphics_g2d_Font$FontData *) NULL_CHECK((frame[0].o)))->F_fontFile = (jref) (frame[1].o);
	LINE_NUMBER(554);
	((arc_graphics_g2d_Font$FontData *) NULL_CHECK((frame[0].o)))->F_flipped = (frame[2].i);
	LINE_NUMBER(555);
	((func_arc_graphics_g2d_Font$FontData_load_arc_files_Fi_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_graphics_g2d_Font$FontData_load_arc_files_Fi_boolean])(ctx, (frame[0].o), (frame[1].o), (frame[2].i));
	LINE_NUMBER(556);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_arc_graphics_g2d_Font$FontData_setOverride_arc_graphics_g2d_Font$FontData(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/g2d/Font$FontData:setOverride", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	LINE_NUMBER(560);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_arc_graphics_g2d_Font$FontData_addFallback_arc_graphics_g2d_Font$FontData(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/g2d/Font$FontData:addFallback", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	LINE_NUMBER(564);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_arc_graphics_g2d_Font$FontData_load_arc_files_Fi_boolean(jcontext ctx, jobject self, jobject param0, jbool param1) {
	NULL_CHECK(self);
	jtype frame[27];
	auto stack = &frame[22];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/g2d/Font$FontData:load", 27 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);
	volatile bool bypasses[1]{};

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(567);
	sp[0].o = (jobject)((arc_graphics_g2d_Font$FontData *) NULL_CHECK((frame[0].o)))->F_imagePaths;
	if (sp[0].o == nullptr) goto label_21;
	}
	{
	clinit_java_lang_IllegalStateException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IllegalStateException);
	init_java_lang_IllegalStateException_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"Already loaded."_j))));
	throwException(ctx, sp[0].o);	}
label_21:;
	{
	LINE_NUMBER(569);
	clinit_java_io_BufferedReader(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_io_BufferedReader);
	clinit_java_io_InputStreamReader(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_io_InputStreamReader);
	sp[2].o = (jobject)((func_arc_files_Fi_read_R_java_io_InputStream) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_files_Fi_read_R_java_io_InputStream])(ctx, (frame[1].o));
	init_java_io_InputStreamReader_java_io_InputStream(ctx, sp[1].o, sp[2].o);
	init_java_io_BufferedReader_java_io_Reader_int(ctx, sp[0].o, sp[1].o, (512));
	frame[3].o = sp[0].o;
	}
label_15: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Exception))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_14; }
	}
label_17: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 2); bypasses[0] = true; goto label_19; } // goto label_16
	}
	{
	LINE_NUMBER(571);
	sp[0].o = (jobject)((func_java_io_BufferedReader_readLine_R_java_lang_String) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_java_io_BufferedReader_readLine_R_java_lang_String])(ctx, (frame[3].o));
	frame[4].o = sp[0].o;
	LINE_NUMBER(572);
	if ((frame[4].o) != nullptr) goto label_23;
	}
	{
	clinit_arc_util_ArcRuntimeException(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_util_ArcRuntimeException);
	init_arc_util_ArcRuntimeException_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"File is empty."_j))));
	throwException(ctx, sp[0].o);	}
label_23:;
	{
	LINE_NUMBER(574);
	sp[0].o = frame[4].o;
	jint temp0 = (jint)((func_java_lang_String_indexOf_java_lang_String_R_int) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_java_lang_String_indexOf_java_lang_String_R_int])(ctx, (frame[4].o), (((jobject) createStringLiteral(ctx, u8"padding="_j))));
	sp[0].o = (jobject)((func_java_lang_String_substring_int_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_String_substring_int_R_java_lang_String])(ctx, sp[0].o, (temp0 + (8)));
	frame[4].o = sp[0].o;
	LINE_NUMBER(575);
	sp[0].o = frame[4].o;
	jint temp1 = jint(0);
	jint temp2 = (jint)((func_java_lang_String_indexOf_int_R_int) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_java_lang_String_indexOf_int_R_int])(ctx, (frame[4].o), (32));
	sp[0].o = (jobject)((func_java_lang_String_substring_int_int_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_String_substring_int_int_R_java_lang_String])(ctx, sp[0].o, temp1, temp2);
	sp[0].o = (jobject)((func_java_lang_String_split_java_lang_String_int_R_Array1_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_String_split_java_lang_String_int_R_Array1_java_lang_String])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8","_j))), (jint(4)));
	frame[5].o = sp[0].o;
	LINE_NUMBER(576);
	if ((((jarray) nullCheck(ctx, (frame[5].o)))->length) == (jint(4))) goto label_26;
	}
	{
	clinit_arc_util_ArcRuntimeException(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_util_ArcRuntimeException);
	init_arc_util_ArcRuntimeException_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"Invalid padding."_j))));
	throwException(ctx, sp[0].o);	}
label_26:;
	{
	LINE_NUMBER(577);
	sp[0].o = frame[0].o;
	jint temp0 = (jint)SM_java_lang_Integer_parseInt_java_lang_String_R_int(ctx, ((jobject)ARRAY_ACCESS(jobject, (frame[5].o), (jint(0)))));
	((arc_graphics_g2d_Font$FontData *) NULL_CHECK(sp[0].o))->F_padTop = (jfloat(temp0));
	LINE_NUMBER(578);
	sp[0].o = frame[0].o;
	jint temp1 = (jint)SM_java_lang_Integer_parseInt_java_lang_String_R_int(ctx, ((jobject)ARRAY_ACCESS(jobject, (frame[5].o), (jint(1)))));
	((arc_graphics_g2d_Font$FontData *) NULL_CHECK(sp[0].o))->F_padRight = (jfloat(temp1));
	LINE_NUMBER(579);
	sp[0].o = frame[0].o;
	jint temp2 = (jint)SM_java_lang_Integer_parseInt_java_lang_String_R_int(ctx, ((jobject)ARRAY_ACCESS(jobject, (frame[5].o), (jint(2)))));
	((arc_graphics_g2d_Font$FontData *) NULL_CHECK(sp[0].o))->F_padBottom = (jfloat(temp2));
	LINE_NUMBER(580);
	sp[0].o = frame[0].o;
	jint temp3 = (jint)SM_java_lang_Integer_parseInt_java_lang_String_R_int(ctx, ((jobject)ARRAY_ACCESS(jobject, (frame[5].o), (jint(3)))));
	((arc_graphics_g2d_Font$FontData *) NULL_CHECK(sp[0].o))->F_padLeft = (jfloat(temp3));
	LINE_NUMBER(581);
	frame[6].f = (((jfloat)((arc_graphics_g2d_Font$FontData *) NULL_CHECK((frame[0].o)))->F_padTop) + ((jfloat)((arc_graphics_g2d_Font$FontData *) NULL_CHECK((frame[0].o)))->F_padBottom));
	LINE_NUMBER(583);
	sp[0].o = (jobject)((func_java_io_BufferedReader_readLine_R_java_lang_String) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_java_io_BufferedReader_readLine_R_java_lang_String])(ctx, (frame[3].o));
	frame[4].o = sp[0].o;
	LINE_NUMBER(584);
	if ((frame[4].o) != nullptr) goto label_33;
	}
	{
	clinit_arc_util_ArcRuntimeException(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_util_ArcRuntimeException);
	init_arc_util_ArcRuntimeException_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"Missing common header."_j))));
	throwException(ctx, sp[0].o);	}
label_33:;
	{
	LINE_NUMBER(585);
	sp[0].o = (jobject)((func_java_lang_String_split_java_lang_String_int_R_Array1_java_lang_String) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_java_lang_String_split_java_lang_String_int_R_Array1_java_lang_String])(ctx, (frame[4].o), (((jobject) createStringLiteral(ctx, u8" "_j))), (7));
	frame[7].o = sp[0].o;
	LINE_NUMBER(588);
	if ((((jarray) nullCheck(ctx, (frame[7].o)))->length) >= (jint(3))) goto label_35;
	}
	{
	clinit_arc_util_ArcRuntimeException(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_util_ArcRuntimeException);
	init_arc_util_ArcRuntimeException_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"Invalid common header."_j))));
	throwException(ctx, sp[0].o);	}
label_35:;
	{
	LINE_NUMBER(590);
	jint temp0 = (jint)((func_java_lang_String_startsWith_java_lang_String_R_boolean) ((void **) nullCheck(ctx, ((jobject)ARRAY_ACCESS(jobject, (frame[7].o), (jint(1)))))->vtable)[VTABLE_java_lang_String_startsWith_java_lang_String_R_boolean])(ctx, ((jobject)ARRAY_ACCESS(jobject, (frame[7].o), (jint(1)))), (((jobject) createStringLiteral(ctx, u8"lineHeight="_j))));
	if (temp0 != 0) goto label_36;
	}
	{
	clinit_arc_util_ArcRuntimeException(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_util_ArcRuntimeException);
	init_arc_util_ArcRuntimeException_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"Missing: lineHeight"_j))));
	throwException(ctx, sp[0].o);	}
label_36:;
	{
	LINE_NUMBER(591);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((func_java_lang_String_substring_int_R_java_lang_String) ((void **) nullCheck(ctx, ((jobject)ARRAY_ACCESS(jobject, (frame[7].o), (jint(1)))))->vtable)[VTABLE_java_lang_String_substring_int_R_java_lang_String])(ctx, ((jobject)ARRAY_ACCESS(jobject, (frame[7].o), (jint(1)))), (11));
	jint temp0 = (jint)SM_java_lang_Integer_parseInt_java_lang_String_R_int(ctx, sp[1].o);
	((arc_graphics_g2d_Font$FontData *) NULL_CHECK(sp[0].o))->F_lineHeight = (jfloat(temp0));
	LINE_NUMBER(593);
	jint temp1 = (jint)((func_java_lang_String_startsWith_java_lang_String_R_boolean) ((void **) nullCheck(ctx, ((jobject)ARRAY_ACCESS(jobject, (frame[7].o), (jint(2)))))->vtable)[VTABLE_java_lang_String_startsWith_java_lang_String_R_boolean])(ctx, ((jobject)ARRAY_ACCESS(jobject, (frame[7].o), (jint(2)))), (((jobject) createStringLiteral(ctx, u8"base="_j))));
	if (temp1 != 0) goto label_38;
	}
	{
	clinit_arc_util_ArcRuntimeException(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_util_ArcRuntimeException);
	init_arc_util_ArcRuntimeException_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"Missing: base"_j))));
	throwException(ctx, sp[0].o);	}
label_38:;
	{
	LINE_NUMBER(594);
	sp[0].o = (jobject)((func_java_lang_String_substring_int_R_java_lang_String) ((void **) nullCheck(ctx, ((jobject)ARRAY_ACCESS(jobject, (frame[7].o), (jint(2)))))->vtable)[VTABLE_java_lang_String_substring_int_R_java_lang_String])(ctx, ((jobject)ARRAY_ACCESS(jobject, (frame[7].o), (jint(2)))), (jint(5)));
	jint temp0 = (jint)SM_java_lang_Integer_parseInt_java_lang_String_R_int(ctx, sp[0].o);
	frame[8].f = (jfloat(temp0));
	LINE_NUMBER(596);
	frame[9].i = (jint(1));
	LINE_NUMBER(597);
	if ((((jarray) nullCheck(ctx, (frame[7].o)))->length) < (6)) goto label_41;
	}
	{
	if (((jobject)ARRAY_ACCESS(jobject, (frame[7].o), (jint(5)))) == nullptr) goto label_41;
	}
	{
	jint temp0 = (jint)((func_java_lang_String_startsWith_java_lang_String_R_boolean) ((void **) nullCheck(ctx, ((jobject)ARRAY_ACCESS(jobject, (frame[7].o), (jint(5)))))->vtable)[VTABLE_java_lang_String_startsWith_java_lang_String_R_boolean])(ctx, ((jobject)ARRAY_ACCESS(jobject, (frame[7].o), (jint(5)))), (((jobject) createStringLiteral(ctx, u8"pages="_j))));
	if (temp0 == 0) goto label_41;
	}
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_NumberFormatException))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(599);
	jint temp0 = jint(1);
	sp[0].o = (jobject)((func_java_lang_String_substring_int_R_java_lang_String) ((void **) nullCheck(ctx, ((jobject)ARRAY_ACCESS(jobject, (frame[7].o), (jint(5)))))->vtable)[VTABLE_java_lang_String_substring_int_R_java_lang_String])(ctx, ((jobject)ARRAY_ACCESS(jobject, (frame[7].o), (jint(5)))), (6));
	jint temp1 = (jint)SM_java_lang_Integer_parseInt_java_lang_String_R_int(ctx, sp[0].o);
	jint temp2 = (jint)SM_java_lang_Math_max_int_int_R_int(ctx, temp0, temp1);
	frame[9].i = temp2;
	}
	popExceptionFrame(frameRef);
	LINE_NUMBER(601);
	goto label_41;
label_2:;
	LINE_NUMBER(600);
	INST_ASTORE(10);
label_41:;
	{
	LINE_NUMBER(604);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)createArray(ctx, &class_java_lang_String, (frame[9].i));
	((arc_graphics_g2d_Font$FontData *) NULL_CHECK(sp[0].o))->F_imagePaths = (jref) sp[1].o;
	LINE_NUMBER(607);
	frame[10].i = (jint(0));
	}
label_43:;
	{
	if ((frame[10].i) >= (frame[9].i)) goto label_44;
	}
	{
	LINE_NUMBER(609);
	sp[0].o = (jobject)((func_java_io_BufferedReader_readLine_R_java_lang_String) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_java_io_BufferedReader_readLine_R_java_lang_String])(ctx, (frame[3].o));
	frame[4].o = sp[0].o;
	LINE_NUMBER(610);
	if ((frame[4].o) != nullptr) goto label_47;
	}
	{
	clinit_arc_util_ArcRuntimeException(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_util_ArcRuntimeException);
	init_arc_util_ArcRuntimeException_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"Missing additional page definitions."_j))));
	throwException(ctx, sp[0].o);	}
label_47:;
	{
	LINE_NUMBER(613);
	sp[0].o = (jobject)SM_java_util_regex_Pattern_compile_java_lang_String_R_java_util_regex_Pattern(ctx, (((jobject) createStringLiteral(ctx, u8".*id=(\\d+)"_j))));
	sp[0].o = (jobject)((func_java_util_regex_Pattern_matcher_java_lang_CharSequence_R_java_util_regex_Matcher) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_regex_Pattern_matcher_java_lang_CharSequence_R_java_util_regex_Matcher])(ctx, sp[0].o, (frame[4].o));
	frame[11].o = sp[0].o;
	LINE_NUMBER(614);
	jint temp0 = (jint)((func_java_util_regex_Matcher_find_R_boolean) ((void **) nullCheck(ctx, (frame[11].o))->vtable)[VTABLE_java_util_regex_Matcher_find_R_boolean])(ctx, (frame[11].o));
	if (temp0 == 0) goto label_49;
	}
	{
	LINE_NUMBER(615);
	sp[0].o = (jobject)((func_java_util_regex_Matcher_group_int_R_java_lang_String) ((void **) nullCheck(ctx, (frame[11].o))->vtable)[VTABLE_java_util_regex_Matcher_group_int_R_java_lang_String])(ctx, (frame[11].o), (jint(1)));
	frame[12].o = sp[0].o;
	}
label_7: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_NumberFormatException))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_6; }
	}
	{
	LINE_NUMBER(617);
	jint temp0 = (jint)SM_java_lang_Integer_parseInt_java_lang_String_R_int(ctx, (frame[12].o));
	frame[13].i = temp0;
	LINE_NUMBER(618);
	if ((frame[13].i) == (frame[10].i)) goto label_5;
	}
	{
	LINE_NUMBER(619);
	clinit_arc_util_ArcRuntimeException(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_util_ArcRuntimeException);
	clinit_java_lang_StringBuilder(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[1].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"Page IDs must be indices starting at 0: "_j))));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (frame[12].o));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[1].o);
	init_arc_util_ArcRuntimeException_java_lang_String(ctx, sp[0].o, sp[1].o);
	throwException(ctx, sp[0].o);	}
label_5:;
	popExceptionFrame(frameRef);
	LINE_NUMBER(622);
	goto label_49;
label_6:;
	{
	sp -= 1;
	LINE_NUMBER(620);
	frame[13].o = sp[0].o;
	LINE_NUMBER(621);
	clinit_arc_util_ArcRuntimeException(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_util_ArcRuntimeException);
	clinit_java_lang_StringBuilder(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[1].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"Invalid page id: "_j))));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (frame[12].o));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[1].o);
	init_arc_util_ArcRuntimeException_java_lang_String_java_lang_Throwable(ctx, sp[0].o, sp[1].o, (frame[13].o));
	throwException(ctx, sp[0].o);	}
label_49:;
	{
	LINE_NUMBER(625);
	sp[0].o = (jobject)SM_java_util_regex_Pattern_compile_java_lang_String_R_java_util_regex_Pattern(ctx, (((jobject) createStringLiteral(ctx, u8".*file=\"?([^\"]+)\"?"_j))));
	sp[0].o = (jobject)((func_java_util_regex_Pattern_matcher_java_lang_CharSequence_R_java_util_regex_Matcher) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_regex_Pattern_matcher_java_lang_CharSequence_R_java_util_regex_Matcher])(ctx, sp[0].o, (frame[4].o));
	frame[11].o = sp[0].o;
	LINE_NUMBER(626);
	jint temp0 = (jint)((func_java_util_regex_Matcher_find_R_boolean) ((void **) nullCheck(ctx, (frame[11].o))->vtable)[VTABLE_java_util_regex_Matcher_find_R_boolean])(ctx, (frame[11].o));
	if (temp0 != 0) goto label_55;
	}
	{
	clinit_arc_util_ArcRuntimeException(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_util_ArcRuntimeException);
	init_arc_util_ArcRuntimeException_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"Missing: file"_j))));
	throwException(ctx, sp[0].o);	}
label_55:;
	{
	LINE_NUMBER(627);
	sp[0].o = (jobject)((func_java_util_regex_Matcher_group_int_R_java_lang_String) ((void **) nullCheck(ctx, (frame[11].o))->vtable)[VTABLE_java_util_regex_Matcher_group_int_R_java_lang_String])(ctx, (frame[11].o), (jint(1)));
	frame[12].o = sp[0].o;
	LINE_NUMBER(629);
	sp[0].o = (jobject)((arc_graphics_g2d_Font$FontData *) NULL_CHECK((frame[0].o)))->F_imagePaths;
	jint temp0 = frame[10].i;
	sp[1].o = (jobject)((func_arc_files_Fi_parent_R_arc_files_Fi) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_files_Fi_parent_R_arc_files_Fi])(ctx, (frame[1].o));
	sp[1].o = (jobject)((func_arc_files_Fi_child_java_lang_String_R_arc_files_Fi) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_files_Fi_child_java_lang_String_R_arc_files_Fi])(ctx, sp[1].o, (frame[12].o));
	sp[1].o = (jobject)((func_arc_files_Fi_path_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_files_Fi_path_R_java_lang_String])(ctx, sp[1].o);
	sp[1].o = (jobject)((func_java_lang_String_replaceAll_java_lang_String_java_lang_String_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_String_replaceAll_java_lang_String_java_lang_String_R_java_lang_String])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"\\\\"_j))), (((jobject) createStringLiteral(ctx, u8"/"_j))));
	ARRAY_ACCESS(jobject, sp[0].o, temp0) = sp[1].o;
	LINE_NUMBER(607);
	INST_IINC(10, 1);
	goto label_43;
	}
label_44:;
	{
	LINE_NUMBER(631);
	((arc_graphics_g2d_Font$FontData *) NULL_CHECK((frame[0].o)))->F_descent = (jfloat(0));
	}
label_58:;
	{
	LINE_NUMBER(634);
	sp[0].o = (jobject)((func_java_io_BufferedReader_readLine_R_java_lang_String) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_java_io_BufferedReader_readLine_R_java_lang_String])(ctx, (frame[3].o));
	frame[4].o = sp[0].o;
	LINE_NUMBER(635);
	if ((frame[4].o) != nullptr) goto label_60;
	}
	goto label_61;
label_60:;
	{
	LINE_NUMBER(636);
	jint temp0 = (jint)((func_java_lang_String_startsWith_java_lang_String_R_boolean) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_java_lang_String_startsWith_java_lang_String_R_boolean])(ctx, (frame[4].o), (((jobject) createStringLiteral(ctx, u8"kernings "_j))));
	if (temp0 == 0) goto label_62;
	}
	goto label_61;
label_62:;
	{
	LINE_NUMBER(637);
	jint temp0 = (jint)((func_java_lang_String_startsWith_java_lang_String_R_boolean) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_java_lang_String_startsWith_java_lang_String_R_boolean])(ctx, (frame[4].o), (((jobject) createStringLiteral(ctx, u8"char "_j))));
	if (temp0 != 0) goto label_63;
	}
	goto label_58;
label_63:;
	{
	LINE_NUMBER(639);
	clinit_arc_graphics_g2d_Font$Glyph(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_graphics_g2d_Font$Glyph);
	init_arc_graphics_g2d_Font$Glyph(ctx, sp[0].o);
	frame[10].o = sp[0].o;
	LINE_NUMBER(641);
	clinit_java_util_StringTokenizer(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_util_StringTokenizer);
	init_java_util_StringTokenizer_java_lang_String_java_lang_String(ctx, sp[0].o, (frame[4].o), (((jobject) createStringLiteral(ctx, u8" ="_j))));
	frame[11].o = sp[0].o;
	LINE_NUMBER(642);
	sp[0].o = (jobject)((func_java_util_StringTokenizer_nextToken_R_java_lang_String) ((void **) nullCheck(ctx, (frame[11].o))->vtable)[VTABLE_java_util_StringTokenizer_nextToken_R_java_lang_String])(ctx, (frame[11].o));
	LINE_NUMBER(643);
	sp[0].o = (jobject)((func_java_util_StringTokenizer_nextToken_R_java_lang_String) ((void **) nullCheck(ctx, (frame[11].o))->vtable)[VTABLE_java_util_StringTokenizer_nextToken_R_java_lang_String])(ctx, (frame[11].o));
	LINE_NUMBER(644);
	sp[0].o = (jobject)((func_java_util_StringTokenizer_nextToken_R_java_lang_String) ((void **) nullCheck(ctx, (frame[11].o))->vtable)[VTABLE_java_util_StringTokenizer_nextToken_R_java_lang_String])(ctx, (frame[11].o));
	jint temp0 = (jint)SM_java_lang_Integer_parseInt_java_lang_String_R_int(ctx, sp[0].o);
	frame[12].i = temp0;
	LINE_NUMBER(645);
	if ((frame[12].i) > 0) goto label_69;
	}
	{
	LINE_NUMBER(646);
	((arc_graphics_g2d_Font$FontData *) NULL_CHECK((frame[0].o)))->F_missingGlyph = (jref) (frame[10].o);
	goto label_71;
	}
label_69:;
	{
	LINE_NUMBER(647);
	if ((frame[12].i) > (jint(65535))) goto label_58;
	}
	{
	LINE_NUMBER(648);
	((func_arc_graphics_g2d_Font$FontData_setGlyph_int_arc_graphics_g2d_Font$Glyph) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_graphics_g2d_Font$FontData_setGlyph_int_arc_graphics_g2d_Font$Glyph])(ctx, (frame[0].o), (frame[12].i), (frame[10].o));
	}
label_71:;
	{
	LINE_NUMBER(651);
	((arc_graphics_g2d_Font$Glyph *) NULL_CHECK((frame[10].o)))->F_id = (frame[12].i);
	LINE_NUMBER(652);
	sp[0].o = (jobject)((func_java_util_StringTokenizer_nextToken_R_java_lang_String) ((void **) nullCheck(ctx, (frame[11].o))->vtable)[VTABLE_java_util_StringTokenizer_nextToken_R_java_lang_String])(ctx, (frame[11].o));
	LINE_NUMBER(653);
	sp[0].o = frame[10].o;
	sp[1].o = (jobject)((func_java_util_StringTokenizer_nextToken_R_java_lang_String) ((void **) nullCheck(ctx, (frame[11].o))->vtable)[VTABLE_java_util_StringTokenizer_nextToken_R_java_lang_String])(ctx, (frame[11].o));
	jint temp0 = (jint)SM_java_lang_Integer_parseInt_java_lang_String_R_int(ctx, sp[1].o);
	((arc_graphics_g2d_Font$Glyph *) NULL_CHECK(sp[0].o))->F_srcX = temp0;
	LINE_NUMBER(654);
	sp[0].o = (jobject)((func_java_util_StringTokenizer_nextToken_R_java_lang_String) ((void **) nullCheck(ctx, (frame[11].o))->vtable)[VTABLE_java_util_StringTokenizer_nextToken_R_java_lang_String])(ctx, (frame[11].o));
	LINE_NUMBER(655);
	sp[0].o = frame[10].o;
	sp[1].o = (jobject)((func_java_util_StringTokenizer_nextToken_R_java_lang_String) ((void **) nullCheck(ctx, (frame[11].o))->vtable)[VTABLE_java_util_StringTokenizer_nextToken_R_java_lang_String])(ctx, (frame[11].o));
	jint temp1 = (jint)SM_java_lang_Integer_parseInt_java_lang_String_R_int(ctx, sp[1].o);
	((arc_graphics_g2d_Font$Glyph *) NULL_CHECK(sp[0].o))->F_srcY = temp1;
	LINE_NUMBER(656);
	sp[0].o = (jobject)((func_java_util_StringTokenizer_nextToken_R_java_lang_String) ((void **) nullCheck(ctx, (frame[11].o))->vtable)[VTABLE_java_util_StringTokenizer_nextToken_R_java_lang_String])(ctx, (frame[11].o));
	LINE_NUMBER(657);
	sp[0].o = frame[10].o;
	sp[1].o = (jobject)((func_java_util_StringTokenizer_nextToken_R_java_lang_String) ((void **) nullCheck(ctx, (frame[11].o))->vtable)[VTABLE_java_util_StringTokenizer_nextToken_R_java_lang_String])(ctx, (frame[11].o));
	jint temp2 = (jint)SM_java_lang_Integer_parseInt_java_lang_String_R_int(ctx, sp[1].o);
	((arc_graphics_g2d_Font$Glyph *) NULL_CHECK(sp[0].o))->F_width = temp2;
	LINE_NUMBER(658);
	sp[0].o = (jobject)((func_java_util_StringTokenizer_nextToken_R_java_lang_String) ((void **) nullCheck(ctx, (frame[11].o))->vtable)[VTABLE_java_util_StringTokenizer_nextToken_R_java_lang_String])(ctx, (frame[11].o));
	LINE_NUMBER(659);
	sp[0].o = frame[10].o;
	sp[1].o = (jobject)((func_java_util_StringTokenizer_nextToken_R_java_lang_String) ((void **) nullCheck(ctx, (frame[11].o))->vtable)[VTABLE_java_util_StringTokenizer_nextToken_R_java_lang_String])(ctx, (frame[11].o));
	jint temp3 = (jint)SM_java_lang_Integer_parseInt_java_lang_String_R_int(ctx, sp[1].o);
	((arc_graphics_g2d_Font$Glyph *) NULL_CHECK(sp[0].o))->F_height = temp3;
	LINE_NUMBER(660);
	sp[0].o = (jobject)((func_java_util_StringTokenizer_nextToken_R_java_lang_String) ((void **) nullCheck(ctx, (frame[11].o))->vtable)[VTABLE_java_util_StringTokenizer_nextToken_R_java_lang_String])(ctx, (frame[11].o));
	LINE_NUMBER(661);
	sp[0].o = frame[10].o;
	sp[1].o = (jobject)((func_java_util_StringTokenizer_nextToken_R_java_lang_String) ((void **) nullCheck(ctx, (frame[11].o))->vtable)[VTABLE_java_util_StringTokenizer_nextToken_R_java_lang_String])(ctx, (frame[11].o));
	jint temp4 = (jint)SM_java_lang_Integer_parseInt_java_lang_String_R_int(ctx, sp[1].o);
	((arc_graphics_g2d_Font$Glyph *) NULL_CHECK(sp[0].o))->F_xoffset = temp4;
	LINE_NUMBER(662);
	sp[0].o = (jobject)((func_java_util_StringTokenizer_nextToken_R_java_lang_String) ((void **) nullCheck(ctx, (frame[11].o))->vtable)[VTABLE_java_util_StringTokenizer_nextToken_R_java_lang_String])(ctx, (frame[11].o));
	LINE_NUMBER(663);
	if ((frame[2].i) == 0) goto label_85;
	}
	{
	LINE_NUMBER(664);
	sp[0].o = frame[10].o;
	sp[1].o = (jobject)((func_java_util_StringTokenizer_nextToken_R_java_lang_String) ((void **) nullCheck(ctx, (frame[11].o))->vtable)[VTABLE_java_util_StringTokenizer_nextToken_R_java_lang_String])(ctx, (frame[11].o));
	jint temp0 = (jint)SM_java_lang_Integer_parseInt_java_lang_String_R_int(ctx, sp[1].o);
	((arc_graphics_g2d_Font$Glyph *) NULL_CHECK(sp[0].o))->F_yoffset = temp0;
	goto label_87;
	}
label_85:;
	{
	LINE_NUMBER(666);
	sp[0].o = frame[10].o;
	jint temp0 = (jint)((arc_graphics_g2d_Font$Glyph *) NULL_CHECK((frame[10].o)))->F_height;
	sp[1].o = (jobject)((func_java_util_StringTokenizer_nextToken_R_java_lang_String) ((void **) nullCheck(ctx, (frame[11].o))->vtable)[VTABLE_java_util_StringTokenizer_nextToken_R_java_lang_String])(ctx, (frame[11].o));
	jint temp1 = (jint)SM_java_lang_Integer_parseInt_java_lang_String_R_int(ctx, sp[1].o);
	((arc_graphics_g2d_Font$Glyph *) NULL_CHECK(sp[0].o))->F_yoffset = (-(temp0 + temp1));
	}
label_87:;
	{
	LINE_NUMBER(667);
	sp[0].o = (jobject)((func_java_util_StringTokenizer_nextToken_R_java_lang_String) ((void **) nullCheck(ctx, (frame[11].o))->vtable)[VTABLE_java_util_StringTokenizer_nextToken_R_java_lang_String])(ctx, (frame[11].o));
	LINE_NUMBER(668);
	sp[0].o = frame[10].o;
	sp[1].o = (jobject)((func_java_util_StringTokenizer_nextToken_R_java_lang_String) ((void **) nullCheck(ctx, (frame[11].o))->vtable)[VTABLE_java_util_StringTokenizer_nextToken_R_java_lang_String])(ctx, (frame[11].o));
	jint temp0 = (jint)SM_java_lang_Integer_parseInt_java_lang_String_R_int(ctx, sp[1].o);
	((arc_graphics_g2d_Font$Glyph *) NULL_CHECK(sp[0].o))->F_xadvance = temp0;
	LINE_NUMBER(671);
	jint temp1 = (jint)((func_java_util_StringTokenizer_hasMoreTokens_R_boolean) ((void **) nullCheck(ctx, (frame[11].o))->vtable)[VTABLE_java_util_StringTokenizer_hasMoreTokens_R_boolean])(ctx, (frame[11].o));
	if (temp1 == 0) goto label_90;
	}
	{
	sp[0].o = (jobject)((func_java_util_StringTokenizer_nextToken_R_java_lang_String) ((void **) nullCheck(ctx, (frame[11].o))->vtable)[VTABLE_java_util_StringTokenizer_nextToken_R_java_lang_String])(ctx, (frame[11].o));
	}
label_90:;
	{
	LINE_NUMBER(672);
	jint temp0 = (jint)((func_java_util_StringTokenizer_hasMoreTokens_R_boolean) ((void **) nullCheck(ctx, (frame[11].o))->vtable)[VTABLE_java_util_StringTokenizer_hasMoreTokens_R_boolean])(ctx, (frame[11].o));
	if (temp0 == 0) goto label_91;
	}
label_11: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_NumberFormatException))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_10; }
	}
	{
	LINE_NUMBER(674);
	sp[0].o = frame[10].o;
	sp[1].o = (jobject)((func_java_util_StringTokenizer_nextToken_R_java_lang_String) ((void **) nullCheck(ctx, (frame[11].o))->vtable)[VTABLE_java_util_StringTokenizer_nextToken_R_java_lang_String])(ctx, (frame[11].o));
	jint temp0 = (jint)SM_java_lang_Integer_parseInt_java_lang_String_R_int(ctx, sp[1].o);
	((arc_graphics_g2d_Font$Glyph *) NULL_CHECK(sp[0].o))->F_page = temp0;
	}
	popExceptionFrame(frameRef);
	LINE_NUMBER(676);
	goto label_91;
label_10:;
	LINE_NUMBER(675);
	INST_ASTORE(13);
label_91:;
	{
	LINE_NUMBER(679);
	if (((jint)((arc_graphics_g2d_Font$Glyph *) NULL_CHECK((frame[10].o)))->F_width) <= 0) goto label_92;
	}
	{
	if (((jint)((arc_graphics_g2d_Font$Glyph *) NULL_CHECK((frame[10].o)))->F_height) <= 0) goto label_92;
	}
	{
	sp[0].o = frame[0].o;
	jfloat temp0 = (jfloat)SM_java_lang_Math_min_float_float_R_float(ctx, ((frame[8].f) + (jfloat(((jint)((arc_graphics_g2d_Font$Glyph *) NULL_CHECK((frame[10].o)))->F_yoffset)))), ((jfloat)((arc_graphics_g2d_Font$FontData *) NULL_CHECK((frame[0].o)))->F_descent));
	((arc_graphics_g2d_Font$FontData *) NULL_CHECK(sp[0].o))->F_descent = temp0;
	}
label_92:;
	LINE_NUMBER(680);
	goto label_58;
label_61:;
	{
	LINE_NUMBER(681);
	sp[0].o = frame[0].o;
	((arc_graphics_g2d_Font$FontData *) NULL_CHECK(sp[0].o))->F_descent = (((jfloat)((arc_graphics_g2d_Font$FontData *) NULL_CHECK(sp[0].o))->F_descent) + ((jfloat)((arc_graphics_g2d_Font$FontData *) NULL_CHECK((frame[0].o)))->F_padBottom));
	}
label_93:;
	{
	LINE_NUMBER(684);
	sp[0].o = (jobject)((func_java_io_BufferedReader_readLine_R_java_lang_String) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_java_io_BufferedReader_readLine_R_java_lang_String])(ctx, (frame[3].o));
	frame[4].o = sp[0].o;
	LINE_NUMBER(685);
	if ((frame[4].o) != nullptr) goto label_95;
	}
	goto label_96;
label_95:;
	{
	LINE_NUMBER(686);
	jint temp0 = (jint)((func_java_lang_String_startsWith_java_lang_String_R_boolean) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_java_lang_String_startsWith_java_lang_String_R_boolean])(ctx, (frame[4].o), (((jobject) createStringLiteral(ctx, u8"kerning "_j))));
	if (temp0 != 0) goto label_97;
	}
	goto label_96;
label_97:;
	{
	LINE_NUMBER(688);
	clinit_java_util_StringTokenizer(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_util_StringTokenizer);
	init_java_util_StringTokenizer_java_lang_String_java_lang_String(ctx, sp[0].o, (frame[4].o), (((jobject) createStringLiteral(ctx, u8" ="_j))));
	frame[10].o = sp[0].o;
	LINE_NUMBER(689);
	sp[0].o = (jobject)((func_java_util_StringTokenizer_nextToken_R_java_lang_String) ((void **) nullCheck(ctx, (frame[10].o))->vtable)[VTABLE_java_util_StringTokenizer_nextToken_R_java_lang_String])(ctx, (frame[10].o));
	LINE_NUMBER(690);
	sp[0].o = (jobject)((func_java_util_StringTokenizer_nextToken_R_java_lang_String) ((void **) nullCheck(ctx, (frame[10].o))->vtable)[VTABLE_java_util_StringTokenizer_nextToken_R_java_lang_String])(ctx, (frame[10].o));
	LINE_NUMBER(691);
	sp[0].o = (jobject)((func_java_util_StringTokenizer_nextToken_R_java_lang_String) ((void **) nullCheck(ctx, (frame[10].o))->vtable)[VTABLE_java_util_StringTokenizer_nextToken_R_java_lang_String])(ctx, (frame[10].o));
	jint temp0 = (jint)SM_java_lang_Integer_parseInt_java_lang_String_R_int(ctx, sp[0].o);
	frame[11].i = temp0;
	LINE_NUMBER(692);
	sp[0].o = (jobject)((func_java_util_StringTokenizer_nextToken_R_java_lang_String) ((void **) nullCheck(ctx, (frame[10].o))->vtable)[VTABLE_java_util_StringTokenizer_nextToken_R_java_lang_String])(ctx, (frame[10].o));
	LINE_NUMBER(693);
	sp[0].o = (jobject)((func_java_util_StringTokenizer_nextToken_R_java_lang_String) ((void **) nullCheck(ctx, (frame[10].o))->vtable)[VTABLE_java_util_StringTokenizer_nextToken_R_java_lang_String])(ctx, (frame[10].o));
	jint temp1 = (jint)SM_java_lang_Integer_parseInt_java_lang_String_R_int(ctx, sp[0].o);
	frame[12].i = temp1;
	LINE_NUMBER(694);
	if ((frame[11].i) < 0) goto label_93;
	}
	{
	if ((frame[11].i) > (jint(65535))) goto label_93;
	}
	INST_ILOAD(12);
	if ((--sp)->i < 0) goto label_93;
	{
	if ((frame[12].i) <= (jint(65535))) goto label_104;
	}
	goto label_93;
label_104:;
	{
	LINE_NUMBER(695);
	sp[0].o = (jobject)((func_arc_graphics_g2d_Font$FontData_getGlyph_char_R_arc_graphics_g2d_Font$Glyph) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_graphics_g2d_Font$FontData_getGlyph_char_R_arc_graphics_g2d_Font$Glyph])(ctx, (frame[0].o), (jchar((frame[11].i))));
	frame[13].o = sp[0].o;
	LINE_NUMBER(696);
	sp[0].o = (jobject)((func_java_util_StringTokenizer_nextToken_R_java_lang_String) ((void **) nullCheck(ctx, (frame[10].o))->vtable)[VTABLE_java_util_StringTokenizer_nextToken_R_java_lang_String])(ctx, (frame[10].o));
	LINE_NUMBER(697);
	sp[0].o = (jobject)((func_java_util_StringTokenizer_nextToken_R_java_lang_String) ((void **) nullCheck(ctx, (frame[10].o))->vtable)[VTABLE_java_util_StringTokenizer_nextToken_R_java_lang_String])(ctx, (frame[10].o));
	jint temp0 = (jint)SM_java_lang_Integer_parseInt_java_lang_String_R_int(ctx, sp[0].o);
	frame[14].i = temp0;
	LINE_NUMBER(698);
	if ((frame[13].o) == nullptr) goto label_108;
	}
	{
	LINE_NUMBER(699);
	((func_arc_graphics_g2d_Font$Glyph_setKerning_int_int) ((void **) nullCheck(ctx, (frame[13].o))->vtable)[VTABLE_arc_graphics_g2d_Font$Glyph_setKerning_int_int])(ctx, (frame[13].o), (frame[12].i), (frame[14].i));
	}
label_108:;
	LINE_NUMBER(701);
	goto label_93;
label_96:;
	{
	LINE_NUMBER(703);
	sp[0].o = (jobject)((func_arc_graphics_g2d_Font$FontData_getGlyph_char_R_arc_graphics_g2d_Font$Glyph) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_graphics_g2d_Font$FontData_getGlyph_char_R_arc_graphics_g2d_Font$Glyph])(ctx, (frame[0].o), (32));
	frame[10].o = sp[0].o;
	LINE_NUMBER(704);
	if ((frame[10].o) != nullptr) goto label_111;
	}
	{
	LINE_NUMBER(705);
	clinit_arc_graphics_g2d_Font$Glyph(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_graphics_g2d_Font$Glyph);
	init_arc_graphics_g2d_Font$Glyph(ctx, sp[0].o);
	frame[10].o = sp[0].o;
	LINE_NUMBER(706);
	((arc_graphics_g2d_Font$Glyph *) NULL_CHECK((frame[10].o)))->F_id = (32);
	LINE_NUMBER(707);
	sp[0].o = (jobject)((func_arc_graphics_g2d_Font$FontData_getGlyph_char_R_arc_graphics_g2d_Font$Glyph) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_graphics_g2d_Font$FontData_getGlyph_char_R_arc_graphics_g2d_Font$Glyph])(ctx, (frame[0].o), (108));
	frame[11].o = sp[0].o;
	LINE_NUMBER(708);
	if ((frame[11].o) != nullptr) goto label_116;
	}
	{
	sp[0].o = (jobject)((func_arc_graphics_g2d_Font$FontData_getFirstGlyph_R_arc_graphics_g2d_Font$Glyph) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_graphics_g2d_Font$FontData_getFirstGlyph_R_arc_graphics_g2d_Font$Glyph])(ctx, (frame[0].o));
	frame[11].o = sp[0].o;
	}
label_116:;
	{
	LINE_NUMBER(709);
	((arc_graphics_g2d_Font$Glyph *) NULL_CHECK((frame[10].o)))->F_xadvance = ((jint)((arc_graphics_g2d_Font$Glyph *) NULL_CHECK((frame[11].o)))->F_xadvance);
	LINE_NUMBER(710);
	((func_arc_graphics_g2d_Font$FontData_setGlyph_int_arc_graphics_g2d_Font$Glyph) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_graphics_g2d_Font$FontData_setGlyph_int_arc_graphics_g2d_Font$Glyph])(ctx, (frame[0].o), (32), (frame[10].o));
	}
label_111:;
	{
	LINE_NUMBER(712);
	if (((jint)((arc_graphics_g2d_Font$Glyph *) NULL_CHECK((frame[10].o)))->F_width) != 0) goto label_118;
	}
	{
	LINE_NUMBER(713);
	((arc_graphics_g2d_Font$Glyph *) NULL_CHECK((frame[10].o)))->F_width = (jint(((((jfloat)((arc_graphics_g2d_Font$FontData *) NULL_CHECK((frame[0].o)))->F_padLeft) + (jfloat(((jint)((arc_graphics_g2d_Font$Glyph *) NULL_CHECK((frame[10].o)))->F_xadvance)))) + ((jfloat)((arc_graphics_g2d_Font$FontData *) NULL_CHECK((frame[0].o)))->F_padRight))));
	LINE_NUMBER(714);
	((arc_graphics_g2d_Font$Glyph *) NULL_CHECK((frame[10].o)))->F_xoffset = (jint((-((jfloat)((arc_graphics_g2d_Font$FontData *) NULL_CHECK((frame[0].o)))->F_padLeft))));
	}
label_118:;
	{
	LINE_NUMBER(716);
	((arc_graphics_g2d_Font$FontData *) NULL_CHECK((frame[0].o)))->F_spaceXadvance = (jfloat(((jint)((arc_graphics_g2d_Font$Glyph *) NULL_CHECK((frame[10].o)))->F_xadvance)));
	LINE_NUMBER(718);
	frame[11].o = (jobject(nullptr));
	LINE_NUMBER(719);
	sp[0].o = (jobject)((arc_graphics_g2d_Font$FontData *) NULL_CHECK((frame[0].o)))->F_xChars;
	frame[12].o = sp[0].o;
	frame[13].i = (((jarray) nullCheck(ctx, (frame[12].o)))->length);
	frame[14].i = (jint(0));
	}
label_123:;
	{
	if ((frame[14].i) >= (frame[13].i)) goto label_124;
	}
	{
	frame[15].i = ((jint)ARRAY_ACCESS(jchar, (frame[12].o), (frame[14].i)));
	LINE_NUMBER(720);
	sp[0].o = (jobject)((func_arc_graphics_g2d_Font$FontData_getGlyph_char_R_arc_graphics_g2d_Font$Glyph) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_graphics_g2d_Font$FontData_getGlyph_char_R_arc_graphics_g2d_Font$Glyph])(ctx, (frame[0].o), (frame[15].i));
	frame[11].o = sp[0].o;
	LINE_NUMBER(721);
	if ((frame[11].o) == nullptr) goto label_127;
	}
	goto label_124;
label_127:;
	{
	LINE_NUMBER(719);
	INST_IINC(14, 1);
	goto label_123;
	}
label_124:;
	{
	LINE_NUMBER(723);
	if ((frame[11].o) != nullptr) goto label_128;
	}
	{
	sp[0].o = (jobject)((func_arc_graphics_g2d_Font$FontData_getFirstGlyph_R_arc_graphics_g2d_Font$Glyph) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_graphics_g2d_Font$FontData_getFirstGlyph_R_arc_graphics_g2d_Font$Glyph])(ctx, (frame[0].o));
	frame[11].o = sp[0].o;
	}
label_128:;
	{
	LINE_NUMBER(724);
	((arc_graphics_g2d_Font$FontData *) NULL_CHECK((frame[0].o)))->F_xHeight = ((jfloat(((jint)((arc_graphics_g2d_Font$Glyph *) NULL_CHECK((frame[11].o)))->F_height))) - (frame[6].f));
	LINE_NUMBER(726);
	frame[12].o = (jobject(nullptr));
	LINE_NUMBER(727);
	sp[0].o = (jobject)((arc_graphics_g2d_Font$FontData *) NULL_CHECK((frame[0].o)))->F_capChars;
	frame[13].o = sp[0].o;
	frame[14].i = (((jarray) nullCheck(ctx, (frame[13].o)))->length);
	frame[15].i = (jint(0));
	}
label_131:;
	{
	if ((frame[15].i) >= (frame[14].i)) goto label_132;
	}
	{
	frame[16].i = ((jint)ARRAY_ACCESS(jchar, (frame[13].o), (frame[15].i)));
	LINE_NUMBER(728);
	sp[0].o = (jobject)((func_arc_graphics_g2d_Font$FontData_getGlyph_char_R_arc_graphics_g2d_Font$Glyph) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_graphics_g2d_Font$FontData_getGlyph_char_R_arc_graphics_g2d_Font$Glyph])(ctx, (frame[0].o), (frame[16].i));
	frame[12].o = sp[0].o;
	LINE_NUMBER(729);
	if ((frame[12].o) == nullptr) goto label_135;
	}
	goto label_132;
label_135:;
	{
	LINE_NUMBER(727);
	INST_IINC(15, 1);
	goto label_131;
	}
label_132:;
	{
	LINE_NUMBER(731);
	if ((frame[12].o) != nullptr) goto label_136;
	}
	{
	LINE_NUMBER(732);
	sp[0].o = (jobject)((arc_graphics_g2d_Font$FontData *) NULL_CHECK((frame[0].o)))->F_glyphs;
	frame[13].o = sp[0].o;
	frame[14].i = (((jarray) nullCheck(ctx, (frame[13].o)))->length);
	frame[15].i = (jint(0));
	}
label_138:;
	{
	if ((frame[15].i) >= (frame[14].i)) goto label_139;
	}
	{
	frame[16].o = ((jobject)ARRAY_ACCESS(jobject, (frame[13].o), (frame[15].i)));
	LINE_NUMBER(733);
	if ((frame[16].o) != nullptr) goto label_141;
	}
	goto label_142;
label_141:;
	{
	LINE_NUMBER(734);
	frame[17].o = (frame[16].o);
	frame[18].i = (((jarray) nullCheck(ctx, (frame[17].o)))->length);
	frame[19].i = (jint(0));
	}
label_143:;
	{
	if ((frame[19].i) >= (frame[18].i)) goto label_142;
	}
	{
	frame[20].o = ((jobject)ARRAY_ACCESS(jobject, (frame[17].o), (frame[19].i)));
	LINE_NUMBER(735);
	if ((frame[20].o) == nullptr) goto label_145;
	}
	{
	if (((jint)((arc_graphics_g2d_Font$Glyph *) NULL_CHECK((frame[20].o)))->F_height) == 0) goto label_145;
	}
	{
	if (((jint)((arc_graphics_g2d_Font$Glyph *) NULL_CHECK((frame[20].o)))->F_width) != 0) goto label_146;
	}
	goto label_145;
label_146:;
	{
	LINE_NUMBER(736);
	sp[0].o = frame[0].o;
	jfloat temp0 = (jfloat)SM_java_lang_Math_max_float_float_R_float(ctx, ((jfloat)((arc_graphics_g2d_Font$FontData *) NULL_CHECK((frame[0].o)))->F_capHeight), (jfloat(((jint)((arc_graphics_g2d_Font$Glyph *) NULL_CHECK((frame[20].o)))->F_height))));
	((arc_graphics_g2d_Font$FontData *) NULL_CHECK(sp[0].o))->F_capHeight = temp0;
	}
label_145:;
	{
	LINE_NUMBER(734);
	INST_IINC(19, 1);
	goto label_143;
	}
label_142:;
	{
	LINE_NUMBER(732);
	INST_IINC(15, 1);
	goto label_138;
	}
label_139:;
	goto label_147;
label_136:;
	{
	LINE_NUMBER(740);
	((arc_graphics_g2d_Font$FontData *) NULL_CHECK((frame[0].o)))->F_capHeight = (jfloat(((jint)((arc_graphics_g2d_Font$Glyph *) NULL_CHECK((frame[12].o)))->F_height)));
	}
label_147:;
	{
	LINE_NUMBER(741);
	sp[0].o = frame[0].o;
	((arc_graphics_g2d_Font$FontData *) NULL_CHECK(sp[0].o))->F_capHeight = (((jfloat)((arc_graphics_g2d_Font$FontData *) NULL_CHECK(sp[0].o))->F_capHeight) - (frame[6].f));
	LINE_NUMBER(743);
	((arc_graphics_g2d_Font$FontData *) NULL_CHECK((frame[0].o)))->F_ascent = ((frame[8].f) - ((jfloat)((arc_graphics_g2d_Font$FontData *) NULL_CHECK((frame[0].o)))->F_capHeight));
	LINE_NUMBER(744);
	((arc_graphics_g2d_Font$FontData *) NULL_CHECK((frame[0].o)))->F_down = (-((jfloat)((arc_graphics_g2d_Font$FontData *) NULL_CHECK((frame[0].o)))->F_lineHeight));
	LINE_NUMBER(745);
	if ((frame[2].i) == 0) goto label_13;
	}
	{
	LINE_NUMBER(746);
	((arc_graphics_g2d_Font$FontData *) NULL_CHECK((frame[0].o)))->F_ascent = (-((jfloat)((arc_graphics_g2d_Font$FontData *) NULL_CHECK((frame[0].o)))->F_ascent));
	LINE_NUMBER(747);
	((arc_graphics_g2d_Font$FontData *) NULL_CHECK((frame[0].o)))->F_down = (-((jfloat)((arc_graphics_g2d_Font$FontData *) NULL_CHECK((frame[0].o)))->F_down));
	}
label_13:;
	popExceptionFrame(frameRef);
	popExceptionFrame(frameRef);
	{
	LINE_NUMBER(752);
	SM_arc_util_io_Streams_close_java_io_Closeable(ctx, (frame[3].o));
	LINE_NUMBER(753);
	goto label_154;
	}
label_14:;
label_19: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); goto label_16;
	}
	if (bypasses[0]) { bypasses[0] = false; goto label_16; }
	{
	sp -= 1;
	LINE_NUMBER(749);
	frame[4].o = sp[0].o;
	LINE_NUMBER(750);
	clinit_arc_util_ArcRuntimeException(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_util_ArcRuntimeException);
	clinit_java_lang_StringBuilder(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[1].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"Error loading font file: "_j))));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_Object_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_Object_R_java_lang_StringBuilder])(ctx, sp[1].o, (frame[1].o));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[1].o);
	init_arc_util_ArcRuntimeException_java_lang_String_java_lang_Throwable(ctx, sp[0].o, sp[1].o, (frame[4].o));
	throwException(ctx, sp[0].o);	}
label_16:;
	LINE_NUMBER(752);
	INST_ASTORE(21);
	popExceptionFrame(frameRef);
	{
	SM_arc_util_io_Streams_close_java_io_Closeable(ctx, (frame[3].o));
	LINE_NUMBER(753);
	throwException(ctx, (frame[21].o));	}
label_154:;
	LINE_NUMBER(754);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_arc_graphics_g2d_Font$FontData_setGlyphRegion_arc_graphics_g2d_Font$Glyph_arc_graphics_g2d_TextureRegion(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[21];
	auto stack = &frame[17];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/g2d/Font$FontData:setGlyphRegion", 21 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(757);
	sp[0].o = (jobject)((arc_graphics_g2d_TextureRegion *) NULL_CHECK((frame[2].o)))->F_texture;
	frame[3].o = sp[0].o;
	LINE_NUMBER(758);
	frame[4].f = ((jfloat(1)) / (jfloat(((jint)((arc_graphics_GLTexture *) NULL_CHECK((frame[3].o)))->F_width))));
	LINE_NUMBER(759);
	frame[5].f = ((jfloat(1)) / (jfloat(((jint)((arc_graphics_GLTexture *) NULL_CHECK((frame[3].o)))->F_height))));
	LINE_NUMBER(761);
	frame[6].f = (jfloat(0));
	frame[7].f = (jfloat(0));
	LINE_NUMBER(762);
	frame[8].f = ((jfloat)((arc_graphics_g2d_TextureRegion *) NULL_CHECK((frame[2].o)))->F_u);
	LINE_NUMBER(763);
	frame[9].f = ((jfloat)((arc_graphics_g2d_TextureRegion *) NULL_CHECK((frame[2].o)))->F_v);
	LINE_NUMBER(764);
	frame[10].f = (jfloat(((jint)((arc_graphics_g2d_TextureRegion *) NULL_CHECK((frame[2].o)))->F_width)));
	LINE_NUMBER(765);
	frame[11].f = (jfloat(((jint)((arc_graphics_g2d_TextureRegion *) NULL_CHECK((frame[2].o)))->F_height)));
	LINE_NUMBER(766);
	if ((isInstance(ctx, (frame[2].o), &class_arc_graphics_g2d_TextureAtlas$AtlasRegion)) == 0) goto label_10;
	}
	{
	LINE_NUMBER(768);
	frame[12].o = (checkCast(ctx, &class_arc_graphics_g2d_TextureAtlas$AtlasRegion, (frame[2].o)));
	LINE_NUMBER(769);
	frame[6].f = ((jfloat)((arc_graphics_g2d_TextureAtlas$AtlasRegion *) NULL_CHECK((frame[12].o)))->F_offsetX);
	LINE_NUMBER(770);
	frame[7].f = ((jfloat((((jint)((arc_graphics_g2d_TextureAtlas$AtlasRegion *) NULL_CHECK((frame[12].o)))->F_originalHeight) - ((jint)((arc_graphics_g2d_TextureAtlas$AtlasRegion *) NULL_CHECK((frame[12].o)))->F_packedHeight)))) - ((jfloat)((arc_graphics_g2d_TextureAtlas$AtlasRegion *) NULL_CHECK((frame[12].o)))->F_offsetY));
	}
label_10:;
	{
	LINE_NUMBER(773);
	frame[12].f = (jfloat(((jint)((arc_graphics_g2d_Font$Glyph *) NULL_CHECK((frame[1].o)))->F_srcX)));
	LINE_NUMBER(774);
	frame[13].f = (jfloat((((jint)((arc_graphics_g2d_Font$Glyph *) NULL_CHECK((frame[1].o)))->F_srcX) + ((jint)((arc_graphics_g2d_Font$Glyph *) NULL_CHECK((frame[1].o)))->F_width))));
	LINE_NUMBER(775);
	frame[14].f = (jfloat(((jint)((arc_graphics_g2d_Font$Glyph *) NULL_CHECK((frame[1].o)))->F_srcY)));
	LINE_NUMBER(776);
	frame[15].f = (jfloat((((jint)((arc_graphics_g2d_Font$Glyph *) NULL_CHECK((frame[1].o)))->F_srcY) + ((jint)((arc_graphics_g2d_Font$Glyph *) NULL_CHECK((frame[1].o)))->F_height))));
	LINE_NUMBER(780);
	if ((floatCompare((frame[6].f), (jfloat(0)), -1)) <= 0) goto label_18;
	}
	{
	LINE_NUMBER(781);
	frame[12].f = ((frame[12].f) - (frame[6].f));
	LINE_NUMBER(782);
	if ((floatCompare((frame[12].f), (jfloat(0)), 1)) >= 0) goto label_21;
	}
	{
	LINE_NUMBER(783);
	sp[0].o = frame[1].o;
	((arc_graphics_g2d_Font$Glyph *) NULL_CHECK(sp[0].o))->F_width = (jint(((jfloat(((jint)((arc_graphics_g2d_Font$Glyph *) NULL_CHECK(sp[0].o))->F_width))) + (frame[12].f))));
	LINE_NUMBER(784);
	sp[0].o = frame[1].o;
	((arc_graphics_g2d_Font$Glyph *) NULL_CHECK(sp[0].o))->F_xoffset = (jint(((jfloat(((jint)((arc_graphics_g2d_Font$Glyph *) NULL_CHECK(sp[0].o))->F_xoffset))) - (frame[12].f))));
	LINE_NUMBER(785);
	frame[12].f = (jfloat(0));
	}
label_21:;
	{
	LINE_NUMBER(787);
	frame[13].f = ((frame[13].f) - (frame[6].f));
	LINE_NUMBER(788);
	if ((floatCompare((frame[13].f), (frame[10].f), -1)) <= 0) goto label_18;
	}
	{
	LINE_NUMBER(789);
	sp[0].o = frame[1].o;
	((arc_graphics_g2d_Font$Glyph *) NULL_CHECK(sp[0].o))->F_width = (jint(((jfloat(((jint)((arc_graphics_g2d_Font$Glyph *) NULL_CHECK(sp[0].o))->F_width))) - ((frame[13].f) - (frame[10].f)))));
	LINE_NUMBER(790);
	frame[13].f = (frame[10].f);
	}
label_18:;
	{
	LINE_NUMBER(793);
	if ((floatCompare((frame[7].f), (jfloat(0)), -1)) <= 0) goto label_28;
	}
	{
	LINE_NUMBER(794);
	frame[14].f = ((frame[14].f) - (frame[7].f));
	LINE_NUMBER(795);
	if ((floatCompare((frame[14].f), (jfloat(0)), 1)) >= 0) goto label_31;
	}
	{
	LINE_NUMBER(796);
	sp[0].o = frame[1].o;
	((arc_graphics_g2d_Font$Glyph *) NULL_CHECK(sp[0].o))->F_height = (jint(((jfloat(((jint)((arc_graphics_g2d_Font$Glyph *) NULL_CHECK(sp[0].o))->F_height))) + (frame[14].f))));
	LINE_NUMBER(797);
	if (((jint)((arc_graphics_g2d_Font$Glyph *) NULL_CHECK((frame[1].o)))->F_height) >= 0) goto label_34;
	}
	{
	((arc_graphics_g2d_Font$Glyph *) NULL_CHECK((frame[1].o)))->F_height = (jint(0));
	}
label_34:;
	{
	LINE_NUMBER(798);
	frame[14].f = (jfloat(0));
	}
label_31:;
	{
	LINE_NUMBER(800);
	frame[15].f = ((frame[15].f) - (frame[7].f));
	LINE_NUMBER(801);
	if ((floatCompare((frame[15].f), (frame[11].f), -1)) <= 0) goto label_28;
	}
	{
	LINE_NUMBER(802);
	frame[16].f = ((frame[15].f) - (frame[11].f));
	LINE_NUMBER(803);
	sp[0].o = frame[1].o;
	((arc_graphics_g2d_Font$Glyph *) NULL_CHECK(sp[0].o))->F_height = (jint(((jfloat(((jint)((arc_graphics_g2d_Font$Glyph *) NULL_CHECK(sp[0].o))->F_height))) - (frame[16].f))));
	LINE_NUMBER(804);
	sp[0].o = frame[1].o;
	((arc_graphics_g2d_Font$Glyph *) NULL_CHECK(sp[0].o))->F_yoffset = (jint(((jfloat(((jint)((arc_graphics_g2d_Font$Glyph *) NULL_CHECK(sp[0].o))->F_yoffset))) + (frame[16].f))));
	LINE_NUMBER(805);
	frame[15].f = (frame[11].f);
	}
label_28:;
	{
	LINE_NUMBER(809);
	((arc_graphics_g2d_Font$Glyph *) NULL_CHECK((frame[1].o)))->F_u = ((frame[8].f) + ((frame[12].f) * (frame[4].f)));
	LINE_NUMBER(810);
	((arc_graphics_g2d_Font$Glyph *) NULL_CHECK((frame[1].o)))->F_u2 = ((frame[8].f) + ((frame[13].f) * (frame[4].f)));
	LINE_NUMBER(811);
	if (((jint)((arc_graphics_g2d_Font$FontData *) NULL_CHECK((frame[0].o)))->F_flipped) == 0) goto label_42;
	}
	{
	LINE_NUMBER(812);
	((arc_graphics_g2d_Font$Glyph *) NULL_CHECK((frame[1].o)))->F_v = ((frame[9].f) + ((frame[14].f) * (frame[5].f)));
	LINE_NUMBER(813);
	((arc_graphics_g2d_Font$Glyph *) NULL_CHECK((frame[1].o)))->F_v2 = ((frame[9].f) + ((frame[15].f) * (frame[5].f)));
	goto label_45;
	}
label_42:;
	{
	LINE_NUMBER(815);
	((arc_graphics_g2d_Font$Glyph *) NULL_CHECK((frame[1].o)))->F_v2 = ((frame[9].f) + ((frame[14].f) * (frame[5].f)));
	LINE_NUMBER(816);
	((arc_graphics_g2d_Font$Glyph *) NULL_CHECK((frame[1].o)))->F_v = ((frame[9].f) + ((frame[15].f) * (frame[5].f)));
	}
label_45:;
	LINE_NUMBER(818);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_arc_graphics_g2d_Font$FontData_setLineHeight_float(jcontext ctx, jobject self, jfloat param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/g2d/Font$FontData:setLineHeight", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	{
	LINE_NUMBER(822);
	((arc_graphics_g2d_Font$FontData *) NULL_CHECK((frame[0].o)))->F_lineHeight = ((frame[1].f) * ((jfloat)((arc_graphics_g2d_Font$FontData *) NULL_CHECK((frame[0].o)))->F_scaleY));
	LINE_NUMBER(823);
	sp[0].o = frame[0].o;
	sp += 1;
	if (((jint)((arc_graphics_g2d_Font$FontData *) NULL_CHECK((frame[0].o)))->F_flipped) == 0) goto label_2;
	}
	{
	jfloat temp0 = (jfloat)((arc_graphics_g2d_Font$FontData *) NULL_CHECK((frame[0].o)))->F_lineHeight;
	sp[0].f = temp0;
	sp += 1;
	goto label_3;
	}
label_2:;
	{
	jfloat temp0 = -((jfloat)((arc_graphics_g2d_Font$FontData *) NULL_CHECK((frame[0].o)))->F_lineHeight);
	sp[0].f = temp0;
	sp += 1;
	}
label_3:;
	{
	sp -= 2;
	((arc_graphics_g2d_Font$FontData *) NULL_CHECK(sp[0].o))->F_down = sp[1].f;
	LINE_NUMBER(824);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_arc_graphics_g2d_Font$FontData_setGlyph_int_arc_graphics_g2d_Font$Glyph(jcontext ctx, jobject self, jint param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/g2d/Font$FontData:setGlyph", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(827);
	sp[0].o = (jobject)((arc_graphics_g2d_Font$FontData *) NULL_CHECK((frame[0].o)))->F_glyphs;
	frame[3].o = ((jobject)ARRAY_ACCESS(jobject, sp[0].o, ((frame[1].i) / (512))));
	LINE_NUMBER(828);
	if ((frame[3].o) != nullptr) goto label_2;
	}
	{
	sp[0].o = (jobject)((arc_graphics_g2d_Font$FontData *) NULL_CHECK((frame[0].o)))->F_glyphs;
	jint temp0 = (frame[1].i) / (512);
	sp[1].o = (jobject)createArray(ctx, &class_arc_graphics_g2d_Font$Glyph, (512));
	frame[3].o = sp[1].o;
	ARRAY_ACCESS(jobject, sp[0].o, temp0) = sp[1].o;
	}
label_2:;
	{
	LINE_NUMBER(829);
	ARRAY_ACCESS(jobject, (frame[3].o), ((frame[1].i) & (511))) = (frame[2].o);
	LINE_NUMBER(830);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_arc_graphics_g2d_Font$FontData_getFirstGlyph_R_arc_graphics_g2d_Font$Glyph(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[12];
	auto stack = &frame[9];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/g2d/Font$FontData:getFirstGlyph", 12 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(833);
	sp[0].o = (jobject)((arc_graphics_g2d_Font$FontData *) NULL_CHECK((frame[0].o)))->F_glyphs;
	frame[1].o = sp[0].o;
	frame[2].i = (((jarray) nullCheck(ctx, (frame[1].o)))->length);
	frame[3].i = (jint(0));
	}
label_1:;
	{
	if ((frame[3].i) >= (frame[2].i)) goto label_2;
	}
	{
	frame[4].o = ((jobject)ARRAY_ACCESS(jobject, (frame[1].o), (frame[3].i)));
	LINE_NUMBER(834);
	if ((frame[4].o) != nullptr) goto label_4;
	}
	goto label_5;
label_4:;
	{
	LINE_NUMBER(835);
	frame[5].o = (frame[4].o);
	frame[6].i = (((jarray) nullCheck(ctx, (frame[5].o)))->length);
	frame[7].i = (jint(0));
	}
label_6:;
	{
	if ((frame[7].i) >= (frame[6].i)) goto label_5;
	}
	{
	frame[8].o = ((jobject)ARRAY_ACCESS(jobject, (frame[5].o), (frame[7].i)));
	LINE_NUMBER(836);
	if ((frame[8].o) == nullptr) goto label_8;
	}
	{
	if (((jint)((arc_graphics_g2d_Font$Glyph *) NULL_CHECK((frame[8].o)))->F_height) == 0) goto label_8;
	}
	{
	if (((jint)((arc_graphics_g2d_Font$Glyph *) NULL_CHECK((frame[8].o)))->F_width) != 0) goto label_9;
	}
	goto label_8;
label_9:;
	{
	LINE_NUMBER(837);
	popStackFrame(ctx);
	return (frame[8].o);
	}
label_8:;
	{
	LINE_NUMBER(835);
	INST_IINC(7, 1);
	goto label_6;
	}
label_5:;
	{
	LINE_NUMBER(833);
	INST_IINC(3, 1);
	goto label_1;
	}
label_2:;
	{
	LINE_NUMBER(840);
	clinit_arc_util_ArcRuntimeException(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_util_ArcRuntimeException);
	init_arc_util_ArcRuntimeException_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"No glyphs found."_j))));
	throwException(ctx, sp[0].o);	}

	popStackFrame(ctx);
}

jbool M_arc_graphics_g2d_Font$FontData_hasGlyph_char_R_boolean(jcontext ctx, jobject self, jchar param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/g2d/Font$FontData:hasGlyph", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(845);
	sp[0].o = (jobject)((arc_graphics_g2d_Font$FontData *) NULL_CHECK((frame[0].o)))->F_missingGlyph;
	if (sp[0].o == nullptr) goto label_1;
	}
	INST_ICONST(1);
	popStackFrame(ctx);
	INST_IRETURN();
label_1:;
	{
	LINE_NUMBER(846);
	sp[0].o = (jobject)((func_arc_graphics_g2d_Font$FontData_getGlyph_char_R_arc_graphics_g2d_Font$Glyph) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_graphics_g2d_Font$FontData_getGlyph_char_R_arc_graphics_g2d_Font$Glyph])(ctx, (frame[0].o), (frame[1].i));
	if (sp[0].o == nullptr) goto label_2;
	}
	INST_ICONST(1);
	goto label_3;
label_2:;
	INST_ICONST(0);
label_3:;
	popStackFrame(ctx);
	INST_IRETURN();

	popStackFrame(ctx);
}

jobject M_arc_graphics_g2d_Font$FontData_getGlyph_char_R_arc_graphics_g2d_Font$Glyph(jcontext ctx, jobject self, jchar param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/g2d/Font$FontData:getGlyph", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(855);
	sp[0].o = (jobject)((arc_graphics_g2d_Font$FontData *) NULL_CHECK((frame[0].o)))->F_glyphs;
	frame[2].o = ((jobject)ARRAY_ACCESS(jobject, sp[0].o, ((frame[1].i) / (512))));
	LINE_NUMBER(856);
	if ((frame[2].o) == nullptr) goto label_2;
	}
	{
	popStackFrame(ctx);
	return ((jobject)ARRAY_ACCESS(jobject, (frame[2].o), ((frame[1].i) & (511))));
	}
label_2:;
	{
	LINE_NUMBER(857);
	popStackFrame(ctx);
	return (jobject(nullptr));
	}

	popStackFrame(ctx);
}

void M_arc_graphics_g2d_Font$FontData_getGlyphs_arc_graphics_g2d_GlyphLayout$GlyphRun_java_lang_CharSequence_int_int_arc_graphics_g2d_Font$Glyph(jcontext ctx, jobject self, jobject param0, jobject param1, jint param2, jint param3, jobject param4) {
	NULL_CHECK(self);
	jtype frame[17];
	auto stack = &frame[13];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/g2d/Font$FontData:getGlyphs", 17 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].i = param2;
	frame[4].i = param3;
	frame[5].o = param4;
	{
	LINE_NUMBER(867);
	frame[6].i = ((jint)((arc_graphics_g2d_Font$FontData *) NULL_CHECK((frame[0].o)))->F_markupEnabled);
	LINE_NUMBER(868);
	frame[7].f = ((jfloat)((arc_graphics_g2d_Font$FontData *) NULL_CHECK((frame[0].o)))->F_scaleX);
	LINE_NUMBER(869);
	sp[0].o = (jobject)((arc_graphics_g2d_Font$FontData *) NULL_CHECK((frame[0].o)))->F_missingGlyph;
	frame[8].o = sp[0].o;
	LINE_NUMBER(870);
	sp[0].o = (jobject)((arc_graphics_g2d_GlyphLayout$GlyphRun *) NULL_CHECK((frame[1].o)))->F_glyphs;
	frame[9].o = sp[0].o;
	LINE_NUMBER(871);
	sp[0].o = (jobject)((arc_graphics_g2d_GlyphLayout$GlyphRun *) NULL_CHECK((frame[1].o)))->F_xAdvances;
	frame[10].o = sp[0].o;
	LINE_NUMBER(874);
	sp[0].o = (jobject)((func_arc_struct_Seq_ensureCapacity_int_R_Array1_java_lang_Object) ((void **) nullCheck(ctx, (frame[9].o))->vtable)[VTABLE_arc_struct_Seq_ensureCapacity_int_R_Array1_java_lang_Object])(ctx, (frame[9].o), ((frame[4].i) - (frame[3].i)));
	LINE_NUMBER(875);
	sp[0].o = (jobject)((func_arc_struct_FloatSeq_ensureCapacity_int_R_Array1_float) ((void **) nullCheck(ctx, (frame[10].o))->vtable)[VTABLE_arc_struct_FloatSeq_ensureCapacity_int_R_Array1_float])(ctx, (frame[10].o), (((frame[4].i) - (frame[3].i)) + (jint(1))));
	}
label_7:;
	{
	LINE_NUMBER(877);
	if ((frame[3].i) >= (frame[4].i)) goto label_8;
	}
	{
	LINE_NUMBER(878);
	sp[0].o = frame[2].o;
	jint temp0 = frame[3].i;
	INST_IINC(3, 1);
	jint temp1 = (jint)((func_java_lang_CharSequence_charAt_int_R_char) resolveInterfaceMethod(ctx, &class_java_lang_CharSequence, INDEX_java_lang_CharSequence_charAt_int_R_char, sp[0].o))(ctx, sp[0].o, temp0);
	frame[11].i = temp1;
	LINE_NUMBER(879);
	sp[0].o = (jobject)((func_arc_graphics_g2d_Font$FontData_getGlyph_char_R_arc_graphics_g2d_Font$Glyph) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_graphics_g2d_Font$FontData_getGlyph_char_R_arc_graphics_g2d_Font$Glyph])(ctx, (frame[0].o), (frame[11].i));
	frame[12].o = sp[0].o;
	LINE_NUMBER(880);
	if ((frame[12].o) != nullptr) goto label_12;
	}
	{
	LINE_NUMBER(881);
	if ((frame[8].o) != nullptr) goto label_14;
	}
	goto label_7;
label_14:;
	{
	LINE_NUMBER(882);
	frame[12].o = (frame[8].o);
	}
label_12:;
	{
	LINE_NUMBER(885);
	sp[0].o = (jobject)((func_arc_struct_Seq_add_java_lang_Object_R_arc_struct_Seq) ((void **) nullCheck(ctx, (frame[9].o))->vtable)[VTABLE_arc_struct_Seq_add_java_lang_Object_R_arc_struct_Seq])(ctx, (frame[9].o), (frame[12].o));
	LINE_NUMBER(887);
	if ((frame[5].o) != nullptr) goto label_16;
	}
	{
	LINE_NUMBER(888);
	sp[0].o = frame[10].o;
	sp += 1;
	if (((jint)((arc_graphics_g2d_Font$Glyph *) NULL_CHECK((frame[12].o)))->F_fixedWidth) == 0) goto label_18;
	}
	INST_FCONST(0);
	goto label_19;
label_18:;
	{
	jfloat temp0 = ((jfloat((-((jint)((arc_graphics_g2d_Font$Glyph *) NULL_CHECK((frame[12].o)))->F_xoffset)))) * (frame[7].f)) - ((jfloat)((arc_graphics_g2d_Font$FontData *) NULL_CHECK((frame[0].o)))->F_padLeft);
	sp[0].f = temp0;
	sp += 1;
	}
label_19:;
	POP_N(2); // Pop method args
	((func_arc_struct_FloatSeq_add_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_FloatSeq_add_float])(ctx, sp[0].o, sp[1].f);
	goto label_20;
label_16:;
	{
	LINE_NUMBER(890);
	sp[0].o = frame[10].o;
	jint temp0 = (jint)((arc_graphics_g2d_Font$Glyph *) NULL_CHECK((frame[5].o)))->F_xadvance;
	jint temp1 = (jint)((func_arc_graphics_g2d_Font$Glyph_getKerning_char_R_int) ((void **) nullCheck(ctx, (frame[5].o))->vtable)[VTABLE_arc_graphics_g2d_Font$Glyph_getKerning_char_R_int])(ctx, (frame[5].o), (frame[11].i));
	((func_arc_struct_FloatSeq_add_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_FloatSeq_add_float])(ctx, sp[0].o, ((jfloat((temp0 + temp1))) * (frame[7].f)));
	}
label_20:;
	{
	LINE_NUMBER(891);
	frame[5].o = (frame[12].o);
	LINE_NUMBER(894);
	if ((frame[6].i) == 0) goto label_22;
	}
	{
	if ((frame[11].i) != (91)) goto label_22;
	}
	{
	if ((frame[3].i) >= (frame[4].i)) goto label_22;
	}
	{
	jint temp0 = (jint)((func_java_lang_CharSequence_charAt_int_R_char) resolveInterfaceMethod(ctx, &class_java_lang_CharSequence, INDEX_java_lang_CharSequence_charAt_int_R_char, (frame[2].o)))(ctx, (frame[2].o), (frame[3].i));
	if (temp0 != (91)) goto label_22;
	}
	INST_IINC(3, 1);
label_22:;
	LINE_NUMBER(895);
	goto label_7;
label_8:;
	{
	LINE_NUMBER(896);
	if ((frame[5].o) == nullptr) goto label_23;
	}
	{
	LINE_NUMBER(897);
	if (((jint)((arc_graphics_g2d_Font$Glyph *) NULL_CHECK((frame[5].o)))->F_fixedWidth) == 0) goto label_25;
	}
	{
	jfloat temp0 = (jfloat(((jint)((arc_graphics_g2d_Font$Glyph *) NULL_CHECK((frame[5].o)))->F_xadvance))) * (frame[7].f);
	sp[0].f = temp0;
	sp += 1;
	goto label_26;
	}
label_25:;
	{
	LINE_NUMBER(898);
	jfloat temp0 = ((jfloat((((jint)((arc_graphics_g2d_Font$Glyph *) NULL_CHECK((frame[5].o)))->F_width) + ((jint)((arc_graphics_g2d_Font$Glyph *) NULL_CHECK((frame[5].o)))->F_xoffset)))) * (frame[7].f)) - ((jfloat)((arc_graphics_g2d_Font$FontData *) NULL_CHECK((frame[0].o)))->F_padRight);
	sp[0].f = temp0;
	sp += 1;
	}
label_26:;
	{
	sp -= 1;
	frame[11].f = sp[0].f;
	LINE_NUMBER(899);
	((func_arc_struct_FloatSeq_add_float) ((void **) nullCheck(ctx, (frame[10].o))->vtable)[VTABLE_arc_struct_FloatSeq_add_float])(ctx, (frame[10].o), (frame[11].f));
	}
label_23:;
	LINE_NUMBER(901);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jint M_arc_graphics_g2d_Font$FontData_getWrapIndex_arc_struct_Seq_int_R_int(jcontext ctx, jobject self, jobject param0, jint param1) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/g2d/Font$FontData:getWrapIndex", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(908);
	frame[3].i = ((frame[2].i) - (jint(1)));
	LINE_NUMBER(909);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((func_arc_struct_Seq_get_int_R_java_lang_Object) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_struct_Seq_get_int_R_java_lang_Object])(ctx, (frame[1].o), (frame[3].i));
	jint temp0 = (jint)((func_arc_graphics_g2d_Font$FontData_isWhitespace_char_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_g2d_Font$FontData_isWhitespace_char_R_boolean])(ctx, sp[0].o, (jchar(((jint)((arc_graphics_g2d_Font$Glyph *) NULL_CHECK((checkCast(ctx, &class_arc_graphics_g2d_Font$Glyph, sp[1].o))))->F_id))));
	if (temp0 == 0) goto label_2;
	}
	INST_ILOAD(3);
	popStackFrame(ctx);
	INST_IRETURN();
label_2:;
	{
	LINE_NUMBER(910);
	if ((frame[3].i) <= 0) goto label_3;
	}
	{
	LINE_NUMBER(911);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((func_arc_struct_Seq_get_int_R_java_lang_Object) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_struct_Seq_get_int_R_java_lang_Object])(ctx, (frame[1].o), (frame[3].i));
	jint temp0 = (jint)((func_arc_graphics_g2d_Font$FontData_isWhitespace_char_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_g2d_Font$FontData_isWhitespace_char_R_boolean])(ctx, sp[0].o, (jchar(((jint)((arc_graphics_g2d_Font$Glyph *) NULL_CHECK((checkCast(ctx, &class_arc_graphics_g2d_Font$Glyph, sp[1].o))))->F_id))));
	if (temp0 != 0) goto label_5;
	}
	goto label_3;
label_5:;
	{
	LINE_NUMBER(910);
	INST_IINC(3, -1);
	goto label_2;
	}
label_3:;
	{
	LINE_NUMBER(912);
	if ((frame[3].i) <= 0) goto label_6;
	}
	{
	LINE_NUMBER(913);
	sp[0].o = (jobject)((func_arc_struct_Seq_get_int_R_java_lang_Object) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_struct_Seq_get_int_R_java_lang_Object])(ctx, (frame[1].o), (frame[3].i));
	frame[4].i = (jchar(((jint)((arc_graphics_g2d_Font$Glyph *) NULL_CHECK((checkCast(ctx, &class_arc_graphics_g2d_Font$Glyph, sp[0].o))))->F_id)));
	LINE_NUMBER(914);
	jint temp0 = (jint)((func_arc_graphics_g2d_Font$FontData_isWhitespace_char_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_graphics_g2d_Font$FontData_isWhitespace_char_R_boolean])(ctx, (frame[0].o), (frame[4].i));
	if (temp0 != 0) goto label_9;
	}
	{
	jint temp0 = (jint)((func_arc_graphics_g2d_Font$FontData_isBreakChar_char_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_graphics_g2d_Font$FontData_isBreakChar_char_R_boolean])(ctx, (frame[0].o), (frame[4].i));
	if (temp0 == 0) goto label_10;
	}
label_9:;
	{
	popStackFrame(ctx);
	return ((frame[3].i) + (jint(1)));
	}
label_10:;
	{
	LINE_NUMBER(912);
	INST_IINC(3, -1);
	goto label_3;
	}
label_6:;
	{
	LINE_NUMBER(916);
	popStackFrame(ctx);
	return (jint(0));
	}

	popStackFrame(ctx);
}

jbool M_arc_graphics_g2d_Font$FontData_isBreakChar_char_R_boolean(jcontext ctx, jobject self, jchar param0) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/g2d/Font$FontData:isBreakChar", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(920);
	sp[0].o = (jobject)((arc_graphics_g2d_Font$FontData *) NULL_CHECK((frame[0].o)))->F_breakChars;
	if (sp[0].o != nullptr) goto label_1;
	}
	INST_ICONST(0);
	popStackFrame(ctx);
	INST_IRETURN();
label_1:;
	{
	LINE_NUMBER(921);
	sp[0].o = (jobject)((arc_graphics_g2d_Font$FontData *) NULL_CHECK((frame[0].o)))->F_breakChars;
	frame[2].o = sp[0].o;
	frame[3].i = (((jarray) nullCheck(ctx, (frame[2].o)))->length);
	frame[4].i = (jint(0));
	}
label_2:;
	{
	if ((frame[4].i) >= (frame[3].i)) goto label_3;
	}
	{
	frame[5].i = ((jint)ARRAY_ACCESS(jchar, (frame[2].o), (frame[4].i)));
	LINE_NUMBER(922);
	if ((frame[1].i) != (frame[5].i)) goto label_5;
	}
	INST_ICONST(1);
	popStackFrame(ctx);
	INST_IRETURN();
label_5:;
	{
	LINE_NUMBER(921);
	INST_IINC(4, 1);
	goto label_2;
	}
label_3:;
	{
	LINE_NUMBER(923);
	popStackFrame(ctx);
	return (jint(0));
	}

	popStackFrame(ctx);
}

jbool M_arc_graphics_g2d_Font$FontData_isWhitespace_char_R_boolean(jcontext ctx, jobject self, jchar param0) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/g2d/Font$FontData:isWhitespace", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(927);
	switch((frame[1].i)) {
		case 9: goto label_1;
		case 10: goto label_1;
		case 13: goto label_1;
		case 32: goto label_1;
		default: goto label_2;
	}
	}
label_1:;
	{
	LINE_NUMBER(932);
	popStackFrame(ctx);
	return (jint(1));
	}
label_2:;
	{
	LINE_NUMBER(934);
	popStackFrame(ctx);
	return (jint(0));
	}

	popStackFrame(ctx);
}

jobject M_arc_graphics_g2d_Font$FontData_getImagePath_int_R_java_lang_String(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/g2d/Font$FontData:getImagePath", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(940);
	sp[0].o = (jobject)((arc_graphics_g2d_Font$FontData *) NULL_CHECK((frame[0].o)))->F_imagePaths;
	popStackFrame(ctx);
	return ((jobject)ARRAY_ACCESS(jobject, sp[0].o, (frame[1].i)));
	}

	popStackFrame(ctx);
}

jobject M_arc_graphics_g2d_Font$FontData_getImagePaths_R_Array1_java_lang_String(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/g2d/Font$FontData:getImagePaths", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(944);
	sp[0].o = (jobject)((arc_graphics_g2d_Font$FontData *) NULL_CHECK((frame[0].o)))->F_imagePaths;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_arc_graphics_g2d_Font$FontData_getFontFile_R_arc_files_Fi(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/g2d/Font$FontData:getFontFile", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(948);
	sp[0].o = (jobject)((arc_graphics_g2d_Font$FontData *) NULL_CHECK((frame[0].o)))->F_fontFile;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void M_arc_graphics_g2d_Font$FontData_setScale_float_float(jcontext ctx, jobject self, jfloat param0, jfloat param1) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/g2d/Font$FontData:setScale", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	frame[2].f = param1;
	{
	LINE_NUMBER(959);
	if ((floatCompare((frame[1].f), (jfloat(0)), -1)) != 0) goto label_1;
	}
	{
	clinit_java_lang_IllegalArgumentException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IllegalArgumentException);
	init_java_lang_IllegalArgumentException_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"scaleX cannot be 0."_j))));
	throwException(ctx, sp[0].o);	}
label_1:;
	{
	LINE_NUMBER(960);
	if ((floatCompare((frame[2].f), (jfloat(0)), -1)) != 0) goto label_2;
	}
	{
	clinit_java_lang_IllegalArgumentException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IllegalArgumentException);
	init_java_lang_IllegalArgumentException_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"scaleY cannot be 0."_j))));
	throwException(ctx, sp[0].o);	}
label_2:;
	{
	LINE_NUMBER(961);
	frame[3].f = ((frame[1].f) / ((jfloat)((arc_graphics_g2d_Font$FontData *) NULL_CHECK((frame[0].o)))->F_scaleX));
	LINE_NUMBER(962);
	frame[4].f = ((frame[2].f) / ((jfloat)((arc_graphics_g2d_Font$FontData *) NULL_CHECK((frame[0].o)))->F_scaleY));
	LINE_NUMBER(963);
	sp[0].o = frame[0].o;
	((arc_graphics_g2d_Font$FontData *) NULL_CHECK(sp[0].o))->F_lineHeight = (((jfloat)((arc_graphics_g2d_Font$FontData *) NULL_CHECK(sp[0].o))->F_lineHeight) * (frame[4].f));
	LINE_NUMBER(964);
	sp[0].o = frame[0].o;
	((arc_graphics_g2d_Font$FontData *) NULL_CHECK(sp[0].o))->F_spaceXadvance = (((jfloat)((arc_graphics_g2d_Font$FontData *) NULL_CHECK(sp[0].o))->F_spaceXadvance) * (frame[3].f));
	LINE_NUMBER(965);
	sp[0].o = frame[0].o;
	((arc_graphics_g2d_Font$FontData *) NULL_CHECK(sp[0].o))->F_xHeight = (((jfloat)((arc_graphics_g2d_Font$FontData *) NULL_CHECK(sp[0].o))->F_xHeight) * (frame[4].f));
	LINE_NUMBER(966);
	sp[0].o = frame[0].o;
	((arc_graphics_g2d_Font$FontData *) NULL_CHECK(sp[0].o))->F_capHeight = (((jfloat)((arc_graphics_g2d_Font$FontData *) NULL_CHECK(sp[0].o))->F_capHeight) * (frame[4].f));
	LINE_NUMBER(967);
	sp[0].o = frame[0].o;
	((arc_graphics_g2d_Font$FontData *) NULL_CHECK(sp[0].o))->F_ascent = (((jfloat)((arc_graphics_g2d_Font$FontData *) NULL_CHECK(sp[0].o))->F_ascent) * (frame[4].f));
	LINE_NUMBER(968);
	sp[0].o = frame[0].o;
	((arc_graphics_g2d_Font$FontData *) NULL_CHECK(sp[0].o))->F_descent = (((jfloat)((arc_graphics_g2d_Font$FontData *) NULL_CHECK(sp[0].o))->F_descent) * (frame[4].f));
	LINE_NUMBER(969);
	sp[0].o = frame[0].o;
	((arc_graphics_g2d_Font$FontData *) NULL_CHECK(sp[0].o))->F_down = (((jfloat)((arc_graphics_g2d_Font$FontData *) NULL_CHECK(sp[0].o))->F_down) * (frame[4].f));
	LINE_NUMBER(970);
	sp[0].o = frame[0].o;
	((arc_graphics_g2d_Font$FontData *) NULL_CHECK(sp[0].o))->F_padLeft = (((jfloat)((arc_graphics_g2d_Font$FontData *) NULL_CHECK(sp[0].o))->F_padLeft) * (frame[3].f));
	LINE_NUMBER(971);
	sp[0].o = frame[0].o;
	((arc_graphics_g2d_Font$FontData *) NULL_CHECK(sp[0].o))->F_padRight = (((jfloat)((arc_graphics_g2d_Font$FontData *) NULL_CHECK(sp[0].o))->F_padRight) * (frame[3].f));
	LINE_NUMBER(972);
	sp[0].o = frame[0].o;
	((arc_graphics_g2d_Font$FontData *) NULL_CHECK(sp[0].o))->F_padTop = (((jfloat)((arc_graphics_g2d_Font$FontData *) NULL_CHECK(sp[0].o))->F_padTop) * (frame[4].f));
	LINE_NUMBER(973);
	sp[0].o = frame[0].o;
	((arc_graphics_g2d_Font$FontData *) NULL_CHECK(sp[0].o))->F_padBottom = (((jfloat)((arc_graphics_g2d_Font$FontData *) NULL_CHECK(sp[0].o))->F_padBottom) * (frame[4].f));
	LINE_NUMBER(974);
	((arc_graphics_g2d_Font$FontData *) NULL_CHECK((frame[0].o)))->F_scaleX = (frame[1].f);
	LINE_NUMBER(975);
	((arc_graphics_g2d_Font$FontData *) NULL_CHECK((frame[0].o)))->F_scaleY = (frame[2].f);
	LINE_NUMBER(976);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_arc_graphics_g2d_Font$FontData_setScale_float(jcontext ctx, jobject self, jfloat param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/g2d/Font$FontData:setScale", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	{
	LINE_NUMBER(984);
	((func_arc_graphics_g2d_Font$FontData_setScale_float_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_graphics_g2d_Font$FontData_setScale_float_float])(ctx, (frame[0].o), (frame[1].f), (frame[1].f));
	LINE_NUMBER(985);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_arc_graphics_g2d_Font$FontData_scale_float(jcontext ctx, jobject self, jfloat param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/g2d/Font$FontData:scale", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	{
	LINE_NUMBER(993);
	((func_arc_graphics_g2d_Font$FontData_setScale_float_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_graphics_g2d_Font$FontData_setScale_float_float])(ctx, (frame[0].o), (((jfloat)((arc_graphics_g2d_Font$FontData *) NULL_CHECK((frame[0].o)))->F_scaleX) + (frame[1].f)), (((jfloat)((arc_graphics_g2d_Font$FontData *) NULL_CHECK((frame[0].o)))->F_scaleY) + (frame[1].f)));
	LINE_NUMBER(994);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void *vtable_arc_graphics_g2d_Font$FontData[] {
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
	(void *) M_arc_graphics_g2d_Font$FontData_setOverride_arc_graphics_g2d_Font$FontData,
	(void *) M_arc_graphics_g2d_Font$FontData_addFallback_arc_graphics_g2d_Font$FontData,
	(void *) M_arc_graphics_g2d_Font$FontData_load_arc_files_Fi_boolean,
	(void *) M_arc_graphics_g2d_Font$FontData_setGlyphRegion_arc_graphics_g2d_Font$Glyph_arc_graphics_g2d_TextureRegion,
	(void *) M_arc_graphics_g2d_Font$FontData_setLineHeight_float,
	(void *) M_arc_graphics_g2d_Font$FontData_setGlyph_int_arc_graphics_g2d_Font$Glyph,
	(void *) M_arc_graphics_g2d_Font$FontData_getFirstGlyph_R_arc_graphics_g2d_Font$Glyph,
	(void *) M_arc_graphics_g2d_Font$FontData_hasGlyph_char_R_boolean,
	(void *) M_arc_graphics_g2d_Font$FontData_getGlyph_char_R_arc_graphics_g2d_Font$Glyph,
	(void *) M_arc_graphics_g2d_Font$FontData_getGlyphs_arc_graphics_g2d_GlyphLayout$GlyphRun_java_lang_CharSequence_int_int_arc_graphics_g2d_Font$Glyph,
	(void *) M_arc_graphics_g2d_Font$FontData_getWrapIndex_arc_struct_Seq_int_R_int,
	(void *) M_arc_graphics_g2d_Font$FontData_isBreakChar_char_R_boolean,
	(void *) M_arc_graphics_g2d_Font$FontData_isWhitespace_char_R_boolean,
	(void *) M_arc_graphics_g2d_Font$FontData_getImagePath_int_R_java_lang_String,
	(void *) M_arc_graphics_g2d_Font$FontData_getImagePaths_R_Array1_java_lang_String,
	(void *) M_arc_graphics_g2d_Font$FontData_getFontFile_R_arc_files_Fi,
	(void *) M_arc_graphics_g2d_Font$FontData_setScale_float_float,
	(void *) M_arc_graphics_g2d_Font$FontData_setScale_float,
	(void *) M_arc_graphics_g2d_Font$FontData_scale_float,
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
	{ "setOverride", "(Larc/graphics/g2d/Font$FontData;)V" },
	{ "addFallback", "(Larc/graphics/g2d/Font$FontData;)V" },
	{ "load", "(Larc/files/Fi;Z)V" },
	{ "setGlyphRegion", "(Larc/graphics/g2d/Font$Glyph;Larc/graphics/g2d/TextureRegion;)V" },
	{ "setLineHeight", "(F)V" },
	{ "setGlyph", "(ILarc/graphics/g2d/Font$Glyph;)V" },
	{ "getFirstGlyph", "()Larc/graphics/g2d/Font$Glyph;" },
	{ "hasGlyph", "(C)Z" },
	{ "getGlyph", "(C)Larc/graphics/g2d/Font$Glyph;" },
	{ "getGlyphs", "(Larc/graphics/g2d/GlyphLayout$GlyphRun;Ljava/lang/CharSequence;IILarc/graphics/g2d/Font$Glyph;)V" },
	{ "getWrapIndex", "(Larc/struct/Seq;I)I" },
	{ "isBreakChar", "(C)Z" },
	{ "isWhitespace", "(C)Z" },
	{ "getImagePath", "(I)Ljava/lang/String;" },
	{ "getImagePaths", "()[Ljava/lang/String;" },
	{ "getFontFile", "()Larc/files/Fi;" },
	{ "setScale", "(FF)V" },
	{ "setScale", "(F)V" },
	{ "scale", "(F)V" },
};

static FieldMetadata fields[] {
	{ "glyphs", getArrayClass(&class_arc_graphics_g2d_Font$Glyph, 2), offsetof(arc_graphics_g2d_Font$FontData, F_glyphs), "[[Larc/graphics/g2d/Font$Glyph;", 17 },
	{ "imagePaths", getArrayClass(&class_java_lang_String, 1), offsetof(arc_graphics_g2d_Font$FontData, F_imagePaths), "[Ljava/lang/String;", 1 },
	{ "fontFile", &class_arc_files_Fi, offsetof(arc_graphics_g2d_Font$FontData, F_fontFile), "Larc/files/Fi;", 1 },
	{ "flipped", &class_boolean, offsetof(arc_graphics_g2d_Font$FontData, F_flipped), "Z", 1 },
	{ "padTop", &class_float, offsetof(arc_graphics_g2d_Font$FontData, F_padTop), "F", 1 },
	{ "padRight", &class_float, offsetof(arc_graphics_g2d_Font$FontData, F_padRight), "F", 1 },
	{ "padBottom", &class_float, offsetof(arc_graphics_g2d_Font$FontData, F_padBottom), "F", 1 },
	{ "padLeft", &class_float, offsetof(arc_graphics_g2d_Font$FontData, F_padLeft), "F", 1 },
	{ "lineHeight", &class_float, offsetof(arc_graphics_g2d_Font$FontData, F_lineHeight), "F", 1 },
	{ "capHeight", &class_float, offsetof(arc_graphics_g2d_Font$FontData, F_capHeight), "F", 1 },
	{ "ascent", &class_float, offsetof(arc_graphics_g2d_Font$FontData, F_ascent), "F", 1 },
	{ "descent", &class_float, offsetof(arc_graphics_g2d_Font$FontData, F_descent), "F", 1 },
	{ "down", &class_float, offsetof(arc_graphics_g2d_Font$FontData, F_down), "F", 1 },
	{ "blankLineScale", &class_float, offsetof(arc_graphics_g2d_Font$FontData, F_blankLineScale), "F", 1 },
	{ "scaleX", &class_float, offsetof(arc_graphics_g2d_Font$FontData, F_scaleX), "F", 1 },
	{ "scaleY", &class_float, offsetof(arc_graphics_g2d_Font$FontData, F_scaleY), "F", 1 },
	{ "markupEnabled", &class_boolean, offsetof(arc_graphics_g2d_Font$FontData, F_markupEnabled), "Z", 1 },
	{ "cursorX", &class_float, offsetof(arc_graphics_g2d_Font$FontData, F_cursorX), "F", 1 },
	{ "missingGlyph", &class_arc_graphics_g2d_Font$Glyph, offsetof(arc_graphics_g2d_Font$FontData, F_missingGlyph), "Larc/graphics/g2d/Font$Glyph;", 1 },
	{ "spaceXadvance", &class_float, offsetof(arc_graphics_g2d_Font$FontData, F_spaceXadvance), "F", 1 },
	{ "xHeight", &class_float, offsetof(arc_graphics_g2d_Font$FontData, F_xHeight), "F", 1 },
	{ "breakChars", getArrayClass(&class_char, 1), offsetof(arc_graphics_g2d_Font$FontData, F_breakChars), "[C", 1 },
	{ "xChars", getArrayClass(&class_char, 1), offsetof(arc_graphics_g2d_Font$FontData, F_xChars), "[C", 1 },
	{ "capChars", getArrayClass(&class_char, 1), offsetof(arc_graphics_g2d_Font$FontData, F_capChars), "[C", 1 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_arc_graphics_g2d_Font$FontData, 0, "()V", 1 },
	{ "<init>", (intptr_t) init_arc_graphics_g2d_Font$FontData_arc_files_Fi_boolean, 0, "(Larc/files/Fi;Z)V", 1 },
	{ "setOverride", (intptr_t) M_arc_graphics_g2d_Font$FontData_setOverride_arc_graphics_g2d_Font$FontData, VTABLE_arc_graphics_g2d_Font$FontData_setOverride_arc_graphics_g2d_Font$FontData, "(Larc/graphics/g2d/Font$FontData;)V", 1 },
	{ "addFallback", (intptr_t) M_arc_graphics_g2d_Font$FontData_addFallback_arc_graphics_g2d_Font$FontData, VTABLE_arc_graphics_g2d_Font$FontData_addFallback_arc_graphics_g2d_Font$FontData, "(Larc/graphics/g2d/Font$FontData;)V", 1 },
	{ "load", (intptr_t) M_arc_graphics_g2d_Font$FontData_load_arc_files_Fi_boolean, VTABLE_arc_graphics_g2d_Font$FontData_load_arc_files_Fi_boolean, "(Larc/files/Fi;Z)V", 1 },
	{ "setGlyphRegion", (intptr_t) M_arc_graphics_g2d_Font$FontData_setGlyphRegion_arc_graphics_g2d_Font$Glyph_arc_graphics_g2d_TextureRegion, VTABLE_arc_graphics_g2d_Font$FontData_setGlyphRegion_arc_graphics_g2d_Font$Glyph_arc_graphics_g2d_TextureRegion, "(Larc/graphics/g2d/Font$Glyph;Larc/graphics/g2d/TextureRegion;)V", 1 },
	{ "setLineHeight", (intptr_t) M_arc_graphics_g2d_Font$FontData_setLineHeight_float, VTABLE_arc_graphics_g2d_Font$FontData_setLineHeight_float, "(F)V", 1 },
	{ "setGlyph", (intptr_t) M_arc_graphics_g2d_Font$FontData_setGlyph_int_arc_graphics_g2d_Font$Glyph, VTABLE_arc_graphics_g2d_Font$FontData_setGlyph_int_arc_graphics_g2d_Font$Glyph, "(ILarc/graphics/g2d/Font$Glyph;)V", 1 },
	{ "getFirstGlyph", (intptr_t) M_arc_graphics_g2d_Font$FontData_getFirstGlyph_R_arc_graphics_g2d_Font$Glyph, VTABLE_arc_graphics_g2d_Font$FontData_getFirstGlyph_R_arc_graphics_g2d_Font$Glyph, "()Larc/graphics/g2d/Font$Glyph;", 1 },
	{ "hasGlyph", (intptr_t) M_arc_graphics_g2d_Font$FontData_hasGlyph_char_R_boolean, VTABLE_arc_graphics_g2d_Font$FontData_hasGlyph_char_R_boolean, "(C)Z", 1 },
	{ "getGlyph", (intptr_t) M_arc_graphics_g2d_Font$FontData_getGlyph_char_R_arc_graphics_g2d_Font$Glyph, VTABLE_arc_graphics_g2d_Font$FontData_getGlyph_char_R_arc_graphics_g2d_Font$Glyph, "(C)Larc/graphics/g2d/Font$Glyph;", 1 },
	{ "getGlyphs", (intptr_t) M_arc_graphics_g2d_Font$FontData_getGlyphs_arc_graphics_g2d_GlyphLayout$GlyphRun_java_lang_CharSequence_int_int_arc_graphics_g2d_Font$Glyph, VTABLE_arc_graphics_g2d_Font$FontData_getGlyphs_arc_graphics_g2d_GlyphLayout$GlyphRun_java_lang_CharSequence_int_int_arc_graphics_g2d_Font$Glyph, "(Larc/graphics/g2d/GlyphLayout$GlyphRun;Ljava/lang/CharSequence;IILarc/graphics/g2d/Font$Glyph;)V", 1 },
	{ "getWrapIndex", (intptr_t) M_arc_graphics_g2d_Font$FontData_getWrapIndex_arc_struct_Seq_int_R_int, VTABLE_arc_graphics_g2d_Font$FontData_getWrapIndex_arc_struct_Seq_int_R_int, "(Larc/struct/Seq;I)I", 1 },
	{ "isBreakChar", (intptr_t) M_arc_graphics_g2d_Font$FontData_isBreakChar_char_R_boolean, VTABLE_arc_graphics_g2d_Font$FontData_isBreakChar_char_R_boolean, "(C)Z", 1 },
	{ "isWhitespace", (intptr_t) M_arc_graphics_g2d_Font$FontData_isWhitespace_char_R_boolean, VTABLE_arc_graphics_g2d_Font$FontData_isWhitespace_char_R_boolean, "(C)Z", 1 },
	{ "getImagePath", (intptr_t) M_arc_graphics_g2d_Font$FontData_getImagePath_int_R_java_lang_String, VTABLE_arc_graphics_g2d_Font$FontData_getImagePath_int_R_java_lang_String, "(I)Ljava/lang/String;", 1 },
	{ "getImagePaths", (intptr_t) M_arc_graphics_g2d_Font$FontData_getImagePaths_R_Array1_java_lang_String, VTABLE_arc_graphics_g2d_Font$FontData_getImagePaths_R_Array1_java_lang_String, "()[Ljava/lang/String;", 1 },
	{ "getFontFile", (intptr_t) M_arc_graphics_g2d_Font$FontData_getFontFile_R_arc_files_Fi, VTABLE_arc_graphics_g2d_Font$FontData_getFontFile_R_arc_files_Fi, "()Larc/files/Fi;", 1 },
	{ "setScale", (intptr_t) M_arc_graphics_g2d_Font$FontData_setScale_float_float, VTABLE_arc_graphics_g2d_Font$FontData_setScale_float_float, "(FF)V", 1 },
	{ "setScale", (intptr_t) M_arc_graphics_g2d_Font$FontData_setScale_float, VTABLE_arc_graphics_g2d_Font$FontData_setScale_float, "(F)V", 1 },
	{ "scale", (intptr_t) M_arc_graphics_g2d_Font$FontData_scale_float, VTABLE_arc_graphics_g2d_Font$FontData_scale_float, "(F)V", 1 },
};

Class class_arc_graphics_g2d_Font$FontData{
		.nativeName = (intptr_t) "arc/graphics/g2d/Font$FontData",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(arc_graphics_g2d_Font$FontData),
		.classVtable = (intptr_t) vtable_arc_graphics_g2d_Font$FontData,
		.staticInitializer = (intptr_t) clinit_arc_graphics_g2d_Font$FontData,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_arc_graphics_g2d_Font$FontData,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) &class_arc_graphics_g2d_Font,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 33,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 24,
		.nativeFields = (intptr_t) fields,
		.methodCount = 21,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 30,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_arc_graphics_g2d_Font$FontData = registerClass(&class_arc_graphics_g2d_Font$FontData);

}

