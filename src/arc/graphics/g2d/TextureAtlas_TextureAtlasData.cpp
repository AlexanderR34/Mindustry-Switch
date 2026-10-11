#include "arc/graphics/g2d/TextureAtlas_TextureAtlasData.h"
#include "arc/graphics/g2d/TextureAtlas.h"
#include "java/lang/Exception.h"
#include "java/lang/StringBuilder.h"
#include "arc/graphics/g2d/TextureAtlas_TextureAtlasData_Region.h"
#include "arc/graphics/g2d/TextureAtlas_TextureAtlasData.h"
#include "arc/files/Fi.h"
#include "arc/graphics/g2d/TextureAtlas_TextureAtlasData_AtlasPage.h"
#include "arc/util/io/Reads.h"
#include "java/lang/Object.h"
#include "java/lang/String.h"
#include "arc/util/ArcRuntimeException.h"
#include "arc/struct/Seq.h"
#include "arc/graphics/Texture_TextureFilter.h"
#include "java/io/IOException.h"
#include "arc/graphics/Texture_TextureWrap.h"
#include "java/lang/Throwable.h"

extern "C" {

jbyte SF_arc_graphics_g2d_TextureAtlas$TextureAtlasData_formatVersion;
jobject SF_arc_graphics_g2d_TextureAtlas$TextureAtlasData_formatHeader;

void mark_arc_graphics_g2d_TextureAtlas$TextureAtlasData(jobject object, jint mark, jint depth) {
	if (!object) {
		if (SF_arc_graphics_g2d_TextureAtlas$TextureAtlasData_formatHeader)
			((gc_mark_ptr) ((jclass) ((jobject) SF_arc_graphics_g2d_TextureAtlas$TextureAtlasData_formatHeader)->clazz)->markFunction)((jobject) SF_arc_graphics_g2d_TextureAtlas$TextureAtlasData_formatHeader, mark, depth + 1);
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
	auto self = (arc_graphics_g2d_TextureAtlas$TextureAtlasData *) object;
	if (self->F_pages)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_pages)->clazz)->markFunction)((jobject) self->F_pages, mark, depth + 1);
	if (self->F_regions)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_regions)->clazz)->markFunction)((jobject) self->F_regions, mark, depth + 1);
}

void init_arc_graphics_g2d_TextureAtlas$TextureAtlasData_arc_files_Fi_arc_files_Fi_boolean(jcontext ctx, jobject self, jobject param0, jobject param1, jbool param2) {
	NULL_CHECK(self);
	jtype frame[27];
	auto stack = &frame[17];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/g2d/TextureAtlas$TextureAtlasData:<init>", 27 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_graphics_g2d_TextureAtlas$TextureAtlasData(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].i = param2;
	{
	LINE_NUMBER(309);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(306);
	sp[0].o = frame[0].o;
	clinit_arc_struct_Seq(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_struct_Seq);
	init_arc_struct_Seq(ctx, sp[1].o);
	((arc_graphics_g2d_TextureAtlas$TextureAtlasData *) NULL_CHECK(sp[0].o))->F_pages = (jref) sp[1].o;
	LINE_NUMBER(307);
	sp[0].o = frame[0].o;
	clinit_arc_struct_Seq(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_struct_Seq);
	init_arc_struct_Seq(ctx, sp[1].o);
	((arc_graphics_g2d_TextureAtlas$TextureAtlasData *) NULL_CHECK(sp[0].o))->F_regions = (jref) sp[1].o;
	}
label_11: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Exception))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_10; }
	}
	{
	LINE_NUMBER(310);
	sp[0].o = (jobject)((func_arc_files_Fi_reads_R_arc_util_io_Reads) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_files_Fi_reads_R_arc_util_io_Reads])(ctx, (frame[1].o));
	frame[4].o = sp[0].o;
	}
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(311);
	clinit_arc_graphics_g2d_TextureAtlas$TextureAtlasData(ctx);
	sp[0].o = (jobject)SF_arc_graphics_g2d_TextureAtlas$TextureAtlasData_formatHeader;
	frame[5].o = sp[0].o;
	frame[6].i = (((jarray) nullCheck(ctx, (frame[5].o)))->length);
	frame[7].i = (jint(0));
	}
label_15:;
	{
	if ((frame[7].i) >= (frame[6].i)) goto label_16;
	}
	{
	frame[8].i = ((jint)ARRAY_ACCESS(jbyte, (frame[5].o), (frame[7].i)));
	LINE_NUMBER(312);
	jint temp0 = (jint)((func_arc_util_io_Reads_b_R_byte) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_arc_util_io_Reads_b_R_byte])(ctx, (frame[4].o));
	if (temp0 == (frame[8].i)) goto label_18;
	}
	{
	LINE_NUMBER(313);
	clinit_java_io_IOException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_io_IOException);
	init_java_io_IOException_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"Invalid binary header. Have you re-packed sprites?"_j))));
	throwException(ctx, sp[0].o);	}
label_18:;
	{
	LINE_NUMBER(311);
	INST_IINC(7, 1);
	goto label_15;
	}
label_16:;
	{
	LINE_NUMBER(317);
	jint temp0 = (jint)((func_arc_util_io_Reads_b_R_byte) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_arc_util_io_Reads_b_R_byte])(ctx, (frame[4].o));
	}
label_20:;
	{
	LINE_NUMBER(319);
	jint temp0 = (jint)((func_arc_util_io_Reads_checkEOF_R_int) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_arc_util_io_Reads_checkEOF_R_int])(ctx, (frame[4].o));
	if (temp0 == (jint(-1))) goto label_1;
	}
	{
	LINE_NUMBER(320);
	sp[0].o = (jobject)((func_arc_util_io_Reads_str_R_java_lang_String) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_arc_util_io_Reads_str_R_java_lang_String])(ctx, (frame[4].o));
	frame[5].o = sp[0].o;
	LINE_NUMBER(321);
	sp[0].o = (jobject)((func_arc_files_Fi_child_java_lang_String_R_arc_files_Fi) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_arc_files_Fi_child_java_lang_String_R_arc_files_Fi])(ctx, (frame[2].o), (frame[5].o));
	frame[6].o = sp[0].o;
	LINE_NUMBER(323);
	jint temp0 = (jint)((func_arc_util_io_Reads_s_R_short) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_arc_util_io_Reads_s_R_short])(ctx, (frame[4].o));
	frame[7].i = temp0;
	jint temp1 = (jint)((func_arc_util_io_Reads_s_R_short) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_arc_util_io_Reads_s_R_short])(ctx, (frame[4].o));
	frame[8].i = temp1;
	LINE_NUMBER(325);
	clinit_arc_graphics_Texture$TextureFilter(ctx);
	sp[0].o = (jobject)SF_arc_graphics_Texture$TextureFilter_all;
	jint temp2 = (jint)((func_arc_util_io_Reads_b_R_byte) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_arc_util_io_Reads_b_R_byte])(ctx, (frame[4].o));
	frame[9].o = ((jobject)ARRAY_ACCESS(jobject, sp[0].o, temp2));
	clinit_arc_graphics_Texture$TextureFilter(ctx);
	sp[0].o = (jobject)SF_arc_graphics_Texture$TextureFilter_all;
	jint temp3 = (jint)((func_arc_util_io_Reads_b_R_byte) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_arc_util_io_Reads_b_R_byte])(ctx, (frame[4].o));
	frame[10].o = ((jobject)ARRAY_ACCESS(jobject, sp[0].o, temp3));
	LINE_NUMBER(326);
	clinit_arc_graphics_Texture$TextureWrap(ctx);
	sp[0].o = (jobject)SF_arc_graphics_Texture$TextureWrap_all;
	jint temp4 = (jint)((func_arc_util_io_Reads_b_R_byte) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_arc_util_io_Reads_b_R_byte])(ctx, (frame[4].o));
	frame[11].o = ((jobject)ARRAY_ACCESS(jobject, sp[0].o, temp4));
	clinit_arc_graphics_Texture$TextureWrap(ctx);
	sp[0].o = (jobject)SF_arc_graphics_Texture$TextureWrap_all;
	jint temp5 = (jint)((func_arc_util_io_Reads_b_R_byte) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_arc_util_io_Reads_b_R_byte])(ctx, (frame[4].o));
	frame[12].o = ((jobject)ARRAY_ACCESS(jobject, sp[0].o, temp5));
	LINE_NUMBER(328);
	jint temp6 = (jint)((func_arc_util_io_Reads_i_R_int) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_arc_util_io_Reads_i_R_int])(ctx, (frame[4].o));
	frame[13].i = temp6;
	LINE_NUMBER(330);
	clinit_arc_graphics_g2d_TextureAtlas$TextureAtlasData$AtlasPage(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_graphics_g2d_TextureAtlas$TextureAtlasData$AtlasPage);
	sp[1].o = frame[6].o;
	jint temp7 = frame[7].i;
	jint temp8 = frame[8].i;
	jint temp9 = (jint)((func_arc_graphics_Texture$TextureFilter_isMipMap_R_boolean) ((void **) nullCheck(ctx, (frame[9].o))->vtable)[VTABLE_arc_graphics_Texture$TextureFilter_isMipMap_R_boolean])(ctx, (frame[9].o));
	init_arc_graphics_g2d_TextureAtlas$TextureAtlasData$AtlasPage_arc_files_Fi_int_int_boolean_arc_graphics_Texture$TextureFilter_arc_graphics_Texture$TextureFilter_arc_graphics_Texture$TextureWrap_arc_graphics_Texture$TextureWrap(ctx, sp[0].o, sp[1].o, temp7, temp8, temp9, (frame[9].o), (frame[10].o), (frame[11].o), (frame[12].o));
	frame[14].o = sp[0].o;
	LINE_NUMBER(331);
	sp[0].o = (jobject)((arc_graphics_g2d_TextureAtlas$TextureAtlasData *) NULL_CHECK((frame[0].o)))->F_pages;
	sp[0].o = (jobject)((func_arc_struct_Seq_add_java_lang_Object_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_add_java_lang_Object_R_arc_struct_Seq])(ctx, sp[0].o, (frame[14].o));
	LINE_NUMBER(333);
	frame[15].i = (jint(0));
	}
label_33:;
	{
	if ((frame[15].i) >= (frame[13].i)) goto label_34;
	}
	{
	LINE_NUMBER(334);
	clinit_arc_graphics_g2d_TextureAtlas$TextureAtlasData$Region(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_graphics_g2d_TextureAtlas$TextureAtlasData$Region);
	init_arc_graphics_g2d_TextureAtlas$TextureAtlasData$Region(ctx, sp[0].o);
	frame[16].o = sp[0].o;
	LINE_NUMBER(335);
	((arc_graphics_g2d_TextureAtlas$TextureAtlasData$Region *) NULL_CHECK((frame[16].o)))->F_flip = (frame[3].i);
	LINE_NUMBER(336);
	((arc_graphics_g2d_TextureAtlas$TextureAtlasData$Region *) NULL_CHECK((frame[16].o)))->F_page = (jref) (frame[14].o);
	LINE_NUMBER(337);
	sp[0].o = frame[16].o;
	sp[1].o = (jobject)((func_arc_util_io_Reads_str_R_java_lang_String) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_arc_util_io_Reads_str_R_java_lang_String])(ctx, (frame[4].o));
	((arc_graphics_g2d_TextureAtlas$TextureAtlasData$Region *) NULL_CHECK(sp[0].o))->F_name = (jref) sp[1].o;
	LINE_NUMBER(338);
	sp[0].o = frame[16].o;
	jint temp0 = (jint)((func_arc_util_io_Reads_s_R_short) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_arc_util_io_Reads_s_R_short])(ctx, (frame[4].o));
	((arc_graphics_g2d_TextureAtlas$TextureAtlasData$Region *) NULL_CHECK(sp[0].o))->F_left = temp0;
	LINE_NUMBER(339);
	sp[0].o = frame[16].o;
	jint temp1 = (jint)((func_arc_util_io_Reads_s_R_short) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_arc_util_io_Reads_s_R_short])(ctx, (frame[4].o));
	((arc_graphics_g2d_TextureAtlas$TextureAtlasData$Region *) NULL_CHECK(sp[0].o))->F_top = temp1;
	LINE_NUMBER(340);
	sp[0].o = frame[16].o;
	jint temp2 = (jint)((func_arc_util_io_Reads_s_R_short) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_arc_util_io_Reads_s_R_short])(ctx, (frame[4].o));
	((arc_graphics_g2d_TextureAtlas$TextureAtlasData$Region *) NULL_CHECK(sp[0].o))->F_width = temp2;
	LINE_NUMBER(341);
	sp[0].o = frame[16].o;
	jint temp3 = (jint)((func_arc_util_io_Reads_s_R_short) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_arc_util_io_Reads_s_R_short])(ctx, (frame[4].o));
	((arc_graphics_g2d_TextureAtlas$TextureAtlasData$Region *) NULL_CHECK(sp[0].o))->F_height = temp3;
	LINE_NUMBER(344);
	jint temp4 = (jint)((func_arc_util_io_Reads_bool_R_boolean) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_arc_util_io_Reads_bool_R_boolean])(ctx, (frame[4].o));
	if (temp4 == 0) goto label_44;
	}
	{
	LINE_NUMBER(345);
	sp[0].o = frame[16].o;
	jint temp0 = (jint)((func_arc_util_io_Reads_s_R_short) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_arc_util_io_Reads_s_R_short])(ctx, (frame[4].o));
	((arc_graphics_g2d_TextureAtlas$TextureAtlasData$Region *) NULL_CHECK(sp[0].o))->F_offsetX = (jfloat(temp0));
	LINE_NUMBER(346);
	sp[0].o = frame[16].o;
	jint temp1 = (jint)((func_arc_util_io_Reads_s_R_short) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_arc_util_io_Reads_s_R_short])(ctx, (frame[4].o));
	((arc_graphics_g2d_TextureAtlas$TextureAtlasData$Region *) NULL_CHECK(sp[0].o))->F_offsetY = (jfloat(temp1));
	LINE_NUMBER(347);
	sp[0].o = frame[16].o;
	jint temp2 = (jint)((func_arc_util_io_Reads_s_R_short) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_arc_util_io_Reads_s_R_short])(ctx, (frame[4].o));
	((arc_graphics_g2d_TextureAtlas$TextureAtlasData$Region *) NULL_CHECK(sp[0].o))->F_originalWidth = temp2;
	LINE_NUMBER(348);
	sp[0].o = frame[16].o;
	jint temp3 = (jint)((func_arc_util_io_Reads_s_R_short) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_arc_util_io_Reads_s_R_short])(ctx, (frame[4].o));
	((arc_graphics_g2d_TextureAtlas$TextureAtlasData$Region *) NULL_CHECK(sp[0].o))->F_originalHeight = temp3;
	}
label_44:;
	{
	LINE_NUMBER(352);
	jint temp0 = (jint)((func_arc_util_io_Reads_bool_R_boolean) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_arc_util_io_Reads_bool_R_boolean])(ctx, (frame[4].o));
	if (temp0 == 0) goto label_49;
	}
	{
	LINE_NUMBER(353);
	sp[0].o = frame[16].o;
	sp[1].o = (jobject) createArray(ctx, &class_int, (jint(4)));
	jint temp0 = jint(0);
	jint temp1 = (jint)((func_arc_util_io_Reads_s_R_short) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_arc_util_io_Reads_s_R_short])(ctx, (frame[4].o));
	ARRAY_ACCESS(jint, sp[1].o, temp0) = temp1;
	jint temp2 = jint(1);
	jint temp3 = (jint)((func_arc_util_io_Reads_s_R_short) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_arc_util_io_Reads_s_R_short])(ctx, (frame[4].o));
	ARRAY_ACCESS(jint, sp[1].o, temp2) = temp3;
	jint temp4 = jint(2);
	jint temp5 = (jint)((func_arc_util_io_Reads_s_R_short) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_arc_util_io_Reads_s_R_short])(ctx, (frame[4].o));
	ARRAY_ACCESS(jint, sp[1].o, temp4) = temp5;
	jint temp6 = jint(3);
	jint temp7 = (jint)((func_arc_util_io_Reads_s_R_short) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_arc_util_io_Reads_s_R_short])(ctx, (frame[4].o));
	ARRAY_ACCESS(jint, sp[1].o, temp6) = temp7;
	((arc_graphics_g2d_TextureAtlas$TextureAtlasData$Region *) NULL_CHECK(sp[0].o))->F_splits = (jref) sp[1].o;
	}
label_49:;
	{
	LINE_NUMBER(357);
	jint temp0 = (jint)((func_arc_util_io_Reads_bool_R_boolean) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_arc_util_io_Reads_bool_R_boolean])(ctx, (frame[4].o));
	if (temp0 == 0) goto label_51;
	}
	{
	LINE_NUMBER(358);
	sp[0].o = frame[16].o;
	sp[1].o = (jobject) createArray(ctx, &class_int, (jint(4)));
	jint temp0 = jint(0);
	jint temp1 = (jint)((func_arc_util_io_Reads_s_R_short) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_arc_util_io_Reads_s_R_short])(ctx, (frame[4].o));
	ARRAY_ACCESS(jint, sp[1].o, temp0) = temp1;
	jint temp2 = jint(1);
	jint temp3 = (jint)((func_arc_util_io_Reads_s_R_short) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_arc_util_io_Reads_s_R_short])(ctx, (frame[4].o));
	ARRAY_ACCESS(jint, sp[1].o, temp2) = temp3;
	jint temp4 = jint(2);
	jint temp5 = (jint)((func_arc_util_io_Reads_s_R_short) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_arc_util_io_Reads_s_R_short])(ctx, (frame[4].o));
	ARRAY_ACCESS(jint, sp[1].o, temp4) = temp5;
	jint temp6 = jint(3);
	jint temp7 = (jint)((func_arc_util_io_Reads_s_R_short) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_arc_util_io_Reads_s_R_short])(ctx, (frame[4].o));
	ARRAY_ACCESS(jint, sp[1].o, temp6) = temp7;
	((arc_graphics_g2d_TextureAtlas$TextureAtlasData$Region *) NULL_CHECK(sp[0].o))->F_pads = (jref) sp[1].o;
	}
label_51:;
	{
	LINE_NUMBER(361);
	sp[0].o = (jobject)((arc_graphics_g2d_TextureAtlas$TextureAtlasData *) NULL_CHECK((frame[0].o)))->F_regions;
	sp[0].o = (jobject)((func_arc_struct_Seq_add_java_lang_Object_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_add_java_lang_Object_R_arc_struct_Seq])(ctx, sp[0].o, (frame[16].o));
	LINE_NUMBER(333);
	INST_IINC(15, 1);
	goto label_33;
	}
label_34:;
	LINE_NUMBER(363);
	goto label_20;
label_1:;
	popExceptionFrame(frameRef);
	{
	LINE_NUMBER(364);
	if ((frame[4].o) == nullptr) goto label_9;
	}
	{
	((func_arc_util_io_Reads_close) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_arc_util_io_Reads_close])(ctx, (frame[4].o));
	goto label_9;
	}
label_2:;
	{
	sp -= 1;
	LINE_NUMBER(310);
	frame[5].o = sp[0].o;
	if ((frame[4].o) == nullptr) goto label_54;
	}
label_7: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_6; }
	}
	INST_ALOAD(4);
	POP_N(1); // Pop method args
	((func_arc_util_io_Reads_close) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_util_io_Reads_close])(ctx, sp[0].o);
	popExceptionFrame(frameRef);
	goto label_54;
label_6:;
	{
	sp -= 1;
	frame[6].o = sp[0].o;
	((func_java_lang_Throwable_addSuppressed_java_lang_Throwable) ((void **) nullCheck(ctx, (frame[5].o))->vtable)[VTABLE_java_lang_Throwable_addSuppressed_java_lang_Throwable])(ctx, (frame[5].o), (frame[6].o));
	}
label_54:;
	INST_ALOAD(5);
	INST_ATHROW();
	label_9:;
	popExceptionFrame(frameRef);
	LINE_NUMBER(366);
	goto label_55;
label_10:;
	{
	sp -= 1;
	LINE_NUMBER(364);
	frame[4].o = sp[0].o;
	LINE_NUMBER(365);
	clinit_arc_util_ArcRuntimeException(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_util_ArcRuntimeException);
	clinit_java_lang_StringBuilder(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[1].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"Error reading pack file: "_j))));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_Object_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_Object_R_java_lang_StringBuilder])(ctx, sp[1].o, (frame[1].o));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[1].o);
	init_arc_util_ArcRuntimeException_java_lang_String_java_lang_Throwable(ctx, sp[0].o, sp[1].o, (frame[4].o));
	throwException(ctx, sp[0].o);	}
label_55:;
	LINE_NUMBER(367);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jobject M_arc_graphics_g2d_TextureAtlas$TextureAtlasData_getPages_R_arc_struct_Seq(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/g2d/TextureAtlas$TextureAtlasData:getPages", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(370);
	sp[0].o = (jobject)((arc_graphics_g2d_TextureAtlas$TextureAtlasData *) NULL_CHECK((frame[0].o)))->F_pages;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_arc_graphics_g2d_TextureAtlas$TextureAtlasData_getRegions_R_arc_struct_Seq(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/g2d/TextureAtlas$TextureAtlasData:getRegions", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(374);
	sp[0].o = (jobject)((arc_graphics_g2d_TextureAtlas$TextureAtlasData *) NULL_CHECK((frame[0].o)))->F_regions;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void clinit_arc_graphics_g2d_TextureAtlas$TextureAtlasData(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	SF_arc_graphics_g2d_TextureAtlas$TextureAtlasData_formatVersion = jint(0);
	jtype frame[4];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/g2d/TextureAtlas$TextureAtlasData:<clinit>", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_graphics_g2d_TextureAtlas$TextureAtlasData(ctx);
	{
	LINE_NUMBER(304);
	sp[0].o = (jobject) createArray(ctx, &class_byte, (jint(5)));
	ARRAY_ACCESS(jbyte, sp[0].o, (jint(0))) = (65);
	ARRAY_ACCESS(jbyte, sp[0].o, (jint(1))) = (65);
	ARRAY_ACCESS(jbyte, sp[0].o, (jint(2))) = (84);
	ARRAY_ACCESS(jbyte, sp[0].o, (jint(3))) = (76);
	ARRAY_ACCESS(jbyte, sp[0].o, (jint(4))) = (83);
	clinit_arc_graphics_g2d_TextureAtlas$TextureAtlasData(ctx);
	SF_arc_graphics_g2d_TextureAtlas$TextureAtlasData_formatHeader = sp[0].o;
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void *vtable_arc_graphics_g2d_TextureAtlas$TextureAtlasData[] {
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
	(void *) M_arc_graphics_g2d_TextureAtlas$TextureAtlasData_getPages_R_arc_struct_Seq,
	(void *) M_arc_graphics_g2d_TextureAtlas$TextureAtlasData_getRegions_R_arc_struct_Seq,
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
	{ "getPages", "()Larc/struct/Seq;" },
	{ "getRegions", "()Larc/struct/Seq;" },
};

static jclass innerClasses[] {
	&class_arc_graphics_g2d_TextureAtlas$TextureAtlasData$AtlasPage,
	&class_arc_graphics_g2d_TextureAtlas$TextureAtlasData$Region,
};

static FieldMetadata fields[] {
	{ "formatVersion", &class_byte, (intptr_t) &SF_arc_graphics_g2d_TextureAtlas$TextureAtlasData_formatVersion, "B", 25 },
	{ "formatHeader", getArrayClass(&class_byte, 1), (intptr_t) &SF_arc_graphics_g2d_TextureAtlas$TextureAtlasData_formatHeader, "[B", 25 },
	{ "pages", &class_arc_struct_Seq, offsetof(arc_graphics_g2d_TextureAtlas$TextureAtlasData, F_pages), "Larc/struct/Seq;", 16 },
	{ "regions", &class_arc_struct_Seq, offsetof(arc_graphics_g2d_TextureAtlas$TextureAtlasData, F_regions), "Larc/struct/Seq;", 16 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_arc_graphics_g2d_TextureAtlas$TextureAtlasData_arc_files_Fi_arc_files_Fi_boolean, 0, "(Larc/files/Fi;Larc/files/Fi;Z)V", 1 },
	{ "getPages", (intptr_t) M_arc_graphics_g2d_TextureAtlas$TextureAtlasData_getPages_R_arc_struct_Seq, VTABLE_arc_graphics_g2d_TextureAtlas$TextureAtlasData_getPages_R_arc_struct_Seq, "()Larc/struct/Seq;", 1 },
	{ "getRegions", (intptr_t) M_arc_graphics_g2d_TextureAtlas$TextureAtlasData_getRegions_R_arc_struct_Seq, VTABLE_arc_graphics_g2d_TextureAtlas$TextureAtlasData_getRegions_R_arc_struct_Seq, "()Larc/struct/Seq;", 1 },
	{ "<clinit>", (intptr_t) clinit_arc_graphics_g2d_TextureAtlas$TextureAtlasData, 0, "()V", 8 },
};

Class class_arc_graphics_g2d_TextureAtlas$TextureAtlasData{
		.nativeName = (intptr_t) "arc/graphics/g2d/TextureAtlas$TextureAtlasData",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(arc_graphics_g2d_TextureAtlas$TextureAtlasData),
		.classVtable = (intptr_t) vtable_arc_graphics_g2d_TextureAtlas$TextureAtlasData,
		.staticInitializer = (intptr_t) clinit_arc_graphics_g2d_TextureAtlas$TextureAtlasData,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_arc_graphics_g2d_TextureAtlas$TextureAtlasData,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) &class_arc_graphics_g2d_TextureAtlas,
		.innerClassCount = 2,
		.nativeInnerClasses = (intptr_t) innerClasses,
		.access = 33,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 4,
		.nativeFields = (intptr_t) fields,
		.methodCount = 4,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 13,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_arc_graphics_g2d_TextureAtlas$TextureAtlasData = registerClass(&class_arc_graphics_g2d_TextureAtlas$TextureAtlasData);

}

